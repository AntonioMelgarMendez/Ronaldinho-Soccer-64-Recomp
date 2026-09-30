#include "iss64_recomp.h"
#include "funcs.h"

RECOMP_FUNC void ovl_8024B800_func_80276AD4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80276AD4: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80276AD8: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x80276ADC: addiu       $v0, $v0, -0x2CF0
    ctx->r2 = ADD32(ctx->r2, -0X2CF0);
    // 0x80276AE0: lbu         $t6, 0x86A($v0)
    ctx->r14 = MEM_BU(ctx->r2, 0X86A);
    // 0x80276AE4: sw          $s0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r16;
    // 0x80276AE8: lui         $s0, 0x8012
    ctx->r16 = S32(0X8012 << 16);
    // 0x80276AEC: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x80276AF0: sw          $s1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r17;
    // 0x80276AF4: swc1        $f21, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x80276AF8: swc1        $f20, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f20.u32l;
    // 0x80276AFC: bne         $t6, $zero, L_80276B14
    if (ctx->r14 != 0) {
        // 0x80276B00: addiu       $s0, $s0, 0x358
        ctx->r16 = ADD32(ctx->r16, 0X358);
            goto L_80276B14;
    }
    // 0x80276B00: addiu       $s0, $s0, 0x358
    ctx->r16 = ADD32(ctx->r16, 0X358);
    // 0x80276B04: lhu         $t7, 0x8($v0)
    ctx->r15 = MEM_HU(ctx->r2, 0X8);
    // 0x80276B08: nop

    // 0x80276B0C: ori         $t8, $t7, 0x40
    ctx->r24 = ctx->r15 | 0X40;
    // 0x80276B10: sh          $t8, 0x8($v0)
    MEM_H(0X8, ctx->r2) = ctx->r24;
L_80276B14:
    // 0x80276B14: lbu         $t9, 0x12FE($v0)
    ctx->r25 = MEM_BU(ctx->r2, 0X12FE);
    // 0x80276B18: mtc1        $zero, $f20
    ctx->f20.u32l = 0;
    // 0x80276B1C: bne         $t9, $zero, L_80276B38
    if (ctx->r25 != 0) {
        // 0x80276B20: or          $s1, $zero, $zero
        ctx->r17 = 0 | 0;
            goto L_80276B38;
    }
    // 0x80276B20: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    // 0x80276B24: lhu         $t0, 0xA9C($v0)
    ctx->r8 = MEM_HU(ctx->r2, 0XA9C);
    // 0x80276B28: nop

    // 0x80276B2C: ori         $t1, $t0, 0x40
    ctx->r9 = ctx->r8 | 0X40;
    // 0x80276B30: sh          $t1, 0xA9C($v0)
    MEM_H(0XA9C, ctx->r2) = ctx->r9;
    // 0x80276B34: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
L_80276B38:
    // 0x80276B38: lhu         $t2, 0x0($s0)
    ctx->r10 = MEM_HU(ctx->r16, 0X0);
    // 0x80276B3C: nop

    // 0x80276B40: beq         $t2, $zero, L_80276B7C
    if (ctx->r10 == 0) {
        // 0x80276B44: nop
    
            goto L_80276B7C;
    }
    // 0x80276B44: nop

    // 0x80276B48: lhu         $t3, 0x2($s0)
    ctx->r11 = MEM_HU(ctx->r16, 0X2);
    // 0x80276B4C: nop

    // 0x80276B50: andi        $t4, $t3, 0x4
    ctx->r12 = ctx->r11 & 0X4;
    // 0x80276B54: beq         $t4, $zero, L_80276B74
    if (ctx->r12 == 0) {
        // 0x80276B58: nop
    
            goto L_80276B74;
    }
    // 0x80276B58: nop

    // 0x80276B5C: sh          $zero, 0x4($s0)
    MEM_H(0X4, ctx->r16) = 0;
    // 0x80276B60: sh          $zero, 0x6($s0)
    MEM_H(0X6, ctx->r16) = 0;
    // 0x80276B64: sh          $zero, 0x8($s0)
    MEM_H(0X8, ctx->r16) = 0;
    // 0x80276B68: swc1        $f20, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->f20.u32l;
    // 0x80276B6C: b           L_80276B7C
    // 0x80276B70: swc1        $f20, 0x2C($s0)
    MEM_W(0X2C, ctx->r16) = ctx->f20.u32l;
        goto L_80276B7C;
    // 0x80276B70: swc1        $f20, 0x2C($s0)
    MEM_W(0X2C, ctx->r16) = ctx->f20.u32l;
L_80276B74:
    // 0x80276B74: jal         0x80276218
    // 0x80276B78: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_8024B800_func_80276218(rdram, ctx);
        goto after_0;
    // 0x80276B78: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_0:
L_80276B7C:
    // 0x80276B7C: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x80276B80: sll         $t5, $s1, 16
    ctx->r13 = S32(ctx->r17 << 16);
    // 0x80276B84: sra         $s1, $t5, 16
    ctx->r17 = S32(SIGNED(ctx->r13) >> 16);
    // 0x80276B88: slti        $at, $s1, 0x4
    ctx->r1 = SIGNED(ctx->r17) < 0X4 ? 1 : 0;
    // 0x80276B8C: bne         $at, $zero, L_80276B38
    if (ctx->r1 != 0) {
        // 0x80276B90: addiu       $s0, $s0, 0x58
        ctx->r16 = ADD32(ctx->r16, 0X58);
            goto L_80276B38;
    }
    // 0x80276B90: addiu       $s0, $s0, 0x58
    ctx->r16 = ADD32(ctx->r16, 0X58);
    // 0x80276B94: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x80276B98: lwc1        $f21, 0x10($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X10);
    // 0x80276B9C: lwc1        $f20, 0x14($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X14);
    // 0x80276BA0: lw          $s0, 0x1C($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X1C);
    // 0x80276BA4: lw          $s1, 0x20($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X20);
    // 0x80276BA8: jr          $ra
    // 0x80276BAC: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x80276BAC: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void ovl_8024B800_func_80276BB0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80276BB0: lui         $v0, 0x8009
    ctx->r2 = S32(0X8009 << 16);
    // 0x80276BB4: lw          $v0, 0x3B20($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X3B20);
    // 0x80276BB8: lwc1        $f4, 0x4C($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X4C);
    // 0x80276BBC: lwc1        $f2, 0x4C($v0)
    ctx->f2.u32l = MEM_W(ctx->r2, 0X4C);
    // 0x80276BC0: lwc1        $f6, 0x44($a0)
    ctx->f6.u32l = MEM_W(ctx->r4, 0X44);
    // 0x80276BC4: sub.s       $f0, $f2, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f0.fl = ctx->f2.fl - ctx->f4.fl;
    // 0x80276BC8: lwc1        $f14, 0x44($v0)
    ctx->f14.u32l = MEM_W(ctx->r2, 0X44);
    // 0x80276BCC: mul.s       $f4, $f0, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = MUL_S(ctx->f0.fl, ctx->f0.fl);
    // 0x80276BD0: sub.s       $f12, $f14, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f12.fl = ctx->f14.fl - ctx->f6.fl;
    // 0x80276BD4: lwc1        $f8, 0x4C($a1)
    ctx->f8.u32l = MEM_W(ctx->r5, 0X4C);
    // 0x80276BD8: lwc1        $f10, 0x44($a1)
    ctx->f10.u32l = MEM_W(ctx->r5, 0X44);
    // 0x80276BDC: mul.s       $f6, $f12, $f12
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f6.fl = MUL_S(ctx->f12.fl, ctx->f12.fl);
    // 0x80276BE0: sub.s       $f16, $f2, $f8
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f16.fl = ctx->f2.fl - ctx->f8.fl;
    // 0x80276BE4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x80276BE8: sub.s       $f18, $f14, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f18.fl = ctx->f14.fl - ctx->f10.fl;
    // 0x80276BEC: mul.s       $f10, $f16, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f10.fl = MUL_S(ctx->f16.fl, ctx->f16.fl);
    // 0x80276BF0: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x80276BF4: mul.s       $f4, $f18, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = MUL_S(ctx->f18.fl, ctx->f18.fl);
    // 0x80276BF8: add.s       $f6, $f10, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f10.fl + ctx->f4.fl;
    // 0x80276BFC: c.le.s      $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f6.fl <= ctx->f8.fl;
    // 0x80276C00: nop

    // 0x80276C04: bc1f        L_80276C14
    if (!c1cs) {
        // 0x80276C08: nop
    
            goto L_80276C14;
    }
    // 0x80276C08: nop

    // 0x80276C0C: jr          $ra
    // 0x80276C10: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    return;
    // 0x80276C10: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_80276C14:
    // 0x80276C14: jr          $ra
    // 0x80276C18: nop

    return;
    // 0x80276C18: nop

;}
RECOMP_FUNC void ovl_8024B800_func_80276C1C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80276C1C: lw          $t6, 0x4($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X4);
    // 0x80276C20: addiu       $v1, $zero, -0x1
    ctx->r3 = ADD32(0, -0X1);
    // 0x80276C24: addiu       $v0, $zero, 0x2710
    ctx->r2 = ADD32(0, 0X2710);
    // 0x80276C28: beq         $t6, $zero, L_80276CC8
    if (ctx->r14 == 0) {
        // 0x80276C2C: or          $a1, $zero, $zero
        ctx->r5 = 0 | 0;
            goto L_80276CC8;
    }
    // 0x80276C2C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80276C30: lui         $t7, 0x8009
    ctx->r15 = S32(0X8009 << 16);
    // 0x80276C34: lw          $t7, 0x3B20($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X3B20);
    // 0x80276C38: nop

    // 0x80276C3C: lwc1        $f2, 0x4C($t7)
    ctx->f2.u32l = MEM_W(ctx->r15, 0X4C);
    // 0x80276C40: lwc1        $f14, 0x44($t7)
    ctx->f14.u32l = MEM_W(ctx->r15, 0X44);
    // 0x80276C44: nop

L_80276C48:
    // 0x80276C48: lh          $t8, 0x2($a0)
    ctx->r24 = MEM_H(ctx->r4, 0X2);
    // 0x80276C4C: lh          $t9, 0x0($a0)
    ctx->r25 = MEM_H(ctx->r4, 0X0);
    // 0x80276C50: mtc1        $t8, $f4
    ctx->f4.u32l = ctx->r24;
    // 0x80276C54: mtc1        $t9, $f8
    ctx->f8.u32l = ctx->r25;
    // 0x80276C58: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x80276C5C: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x80276C60: sub.s       $f0, $f2, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f0.fl = ctx->f2.fl - ctx->f6.fl;
    // 0x80276C64: mtc1        $v0, $f6
    ctx->f6.u32l = ctx->r2;
    // 0x80276C68: mul.s       $f18, $f0, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f18.fl = MUL_S(ctx->f0.fl, ctx->f0.fl);
    // 0x80276C6C: sub.s       $f12, $f14, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f12.fl = ctx->f14.fl - ctx->f10.fl;
    // 0x80276C70: mul.s       $f4, $f12, $f12
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f4.fl = MUL_S(ctx->f12.fl, ctx->f12.fl);
    // 0x80276C74: cvt.s.w     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.fl = CVT_S_W(ctx->f6.u32l);
    // 0x80276C78: add.s       $f16, $f18, $f4
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f16.fl = ctx->f18.fl + ctx->f4.fl;
    // 0x80276C7C: c.lt.s      $f16, $f8
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f16.fl < ctx->f8.fl;
    // 0x80276C80: nop

    // 0x80276C84: bc1f        L_80276CB8
    if (!c1cs) {
        // 0x80276C88: nop
    
            goto L_80276CB8;
    }
    // 0x80276C88: nop

    // 0x80276C8C: cfc1        $t0, $FpcCsr
    ctx->r8 = get_cop1_cs();
    // 0x80276C90: sll         $v1, $a1, 16
    ctx->r3 = S32(ctx->r5 << 16);
    // 0x80276C94: ori         $at, $t0, 0x3
    ctx->r1 = ctx->r8 | 0X3;
    // 0x80276C98: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x80276C9C: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x80276CA0: sra         $t1, $v1, 16
    ctx->r9 = S32(SIGNED(ctx->r3) >> 16);
    // 0x80276CA4: cvt.w.s     $f10, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    ctx->f10.u32l = CVT_W_S(ctx->f16.fl);
    // 0x80276CA8: or          $v1, $t1, $zero
    ctx->r3 = ctx->r9 | 0;
    // 0x80276CAC: ctc1        $t0, $FpcCsr
    set_cop1_cs(ctx->r8);
    // 0x80276CB0: mfc1        $v0, $f10
    ctx->r2 = (int32_t)ctx->f10.u32l;
    // 0x80276CB4: nop

L_80276CB8:
    // 0x80276CB8: lw          $t2, 0xC($a0)
    ctx->r10 = MEM_W(ctx->r4, 0XC);
    // 0x80276CBC: addiu       $a0, $a0, 0x8
    ctx->r4 = ADD32(ctx->r4, 0X8);
    // 0x80276CC0: bne         $t2, $zero, L_80276C48
    if (ctx->r10 != 0) {
        // 0x80276CC4: addiu       $a1, $a1, 0x1
        ctx->r5 = ADD32(ctx->r5, 0X1);
            goto L_80276C48;
    }
    // 0x80276CC4: addiu       $a1, $a1, 0x1
    ctx->r5 = ADD32(ctx->r5, 0X1);
L_80276CC8:
    // 0x80276CC8: jr          $ra
    // 0x80276CCC: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    return;
    // 0x80276CCC: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
;}
RECOMP_FUNC void ovl_8024B800_func_80276CD0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80276CD0: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x80276CD4: or          $a2, $a0, $zero
    ctx->r6 = ctx->r4 | 0;
    // 0x80276CD8: bne         $a1, $zero, L_80276CE8
    if (ctx->r5 != 0) {
        // 0x80276CDC: addiu       $v1, $zero, -0x1
        ctx->r3 = ADD32(0, -0X1);
            goto L_80276CE8;
    }
    // 0x80276CDC: addiu       $v1, $zero, -0x1
    ctx->r3 = ADD32(0, -0X1);
    // 0x80276CE0: jr          $ra
    // 0x80276CE4: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    return;
    // 0x80276CE4: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
L_80276CE8:
    // 0x80276CE8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x80276CEC: beq         $a1, $zero, L_80276EE4
    if (ctx->r5 == 0) {
        // 0x80276CF0: or          $a0, $zero, $zero
        ctx->r4 = 0 | 0;
            goto L_80276EE4;
    }
    // 0x80276CF0: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x80276CF4: andi        $t0, $a1, 0x3
    ctx->r8 = ctx->r5 & 0X3;
    // 0x80276CF8: beq         $t0, $zero, L_80276D70
    if (ctx->r8 == 0) {
        // 0x80276CFC: or          $t1, $t0, $zero
        ctx->r9 = ctx->r8 | 0;
            goto L_80276D70;
    }
    // 0x80276CFC: or          $t1, $t0, $zero
    ctx->r9 = ctx->r8 | 0;
    // 0x80276D00: sll         $t6, $zero, 2
    ctx->r14 = S32(0 << 2);
    // 0x80276D04: addu        $a3, $a2, $t6
    ctx->r7 = ADD32(ctx->r6, ctx->r14);
L_80276D08:
    // 0x80276D08: lw          $t0, 0x0($a3)
    ctx->r8 = MEM_W(ctx->r7, 0X0);
    // 0x80276D0C: nop

    // 0x80276D10: lw          $t7, 0x4($t0)
    ctx->r15 = MEM_W(ctx->r8, 0X4);
    // 0x80276D14: nop

    // 0x80276D18: lbu         $t8, 0x6($t7)
    ctx->r24 = MEM_BU(ctx->r15, 0X6);
    // 0x80276D1C: nop

    // 0x80276D20: andi        $t9, $t8, 0x8
    ctx->r25 = ctx->r24 & 0X8;
    // 0x80276D24: beq         $t9, $zero, L_80276D60
    if (ctx->r25 == 0) {
        // 0x80276D28: nop
    
            goto L_80276D60;
    }
    // 0x80276D28: nop

    // 0x80276D2C: lw          $t2, 0x0($t0)
    ctx->r10 = MEM_W(ctx->r8, 0X0);
    // 0x80276D30: nop

    // 0x80276D34: lwc1        $f2, 0x90($t2)
    ctx->f2.u32l = MEM_W(ctx->r10, 0X90);
    // 0x80276D38: nop

    // 0x80276D3C: c.lt.s      $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f0.fl < ctx->f2.fl;
    // 0x80276D40: nop

    // 0x80276D44: bc1f        L_80276D60
    if (!c1cs) {
        // 0x80276D48: nop
    
            goto L_80276D60;
    }
    // 0x80276D48: nop

    // 0x80276D4C: sll         $v1, $a0, 16
    ctx->r3 = S32(ctx->r4 << 16);
    // 0x80276D50: sra         $t3, $v1, 16
    ctx->r11 = S32(SIGNED(ctx->r3) >> 16);
    // 0x80276D54: or          $v1, $t3, $zero
    ctx->r3 = ctx->r11 | 0;
    // 0x80276D58: mov.s       $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    ctx->f0.fl = ctx->f2.fl;
    // 0x80276D5C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
L_80276D60:
    // 0x80276D60: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    // 0x80276D64: bne         $t1, $a0, L_80276D08
    if (ctx->r9 != ctx->r4) {
        // 0x80276D68: addiu       $a3, $a3, 0x4
        ctx->r7 = ADD32(ctx->r7, 0X4);
            goto L_80276D08;
    }
    // 0x80276D68: addiu       $a3, $a3, 0x4
    ctx->r7 = ADD32(ctx->r7, 0X4);
    // 0x80276D6C: beq         $a0, $a1, L_80276EE4
    if (ctx->r4 == ctx->r5) {
        // 0x80276D70: sll         $t4, $a0, 2
        ctx->r12 = S32(ctx->r4 << 2);
            goto L_80276EE4;
    }
L_80276D70:
    // 0x80276D70: sll         $t4, $a0, 2
    ctx->r12 = S32(ctx->r4 << 2);
    // 0x80276D74: addu        $a3, $a2, $t4
    ctx->r7 = ADD32(ctx->r6, ctx->r12);
L_80276D78:
    // 0x80276D78: lw          $t0, 0x0($a3)
    ctx->r8 = MEM_W(ctx->r7, 0X0);
    // 0x80276D7C: nop

    // 0x80276D80: lw          $t5, 0x4($t0)
    ctx->r13 = MEM_W(ctx->r8, 0X4);
    // 0x80276D84: nop

    // 0x80276D88: lbu         $t6, 0x6($t5)
    ctx->r14 = MEM_BU(ctx->r13, 0X6);
    // 0x80276D8C: nop

    // 0x80276D90: andi        $t7, $t6, 0x8
    ctx->r15 = ctx->r14 & 0X8;
    // 0x80276D94: beq         $t7, $zero, L_80276DD0
    if (ctx->r15 == 0) {
        // 0x80276D98: nop
    
            goto L_80276DD0;
    }
    // 0x80276D98: nop

    // 0x80276D9C: lw          $t8, 0x0($t0)
    ctx->r24 = MEM_W(ctx->r8, 0X0);
    // 0x80276DA0: nop

    // 0x80276DA4: lwc1        $f2, 0x90($t8)
    ctx->f2.u32l = MEM_W(ctx->r24, 0X90);
    // 0x80276DA8: nop

    // 0x80276DAC: c.lt.s      $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f0.fl < ctx->f2.fl;
    // 0x80276DB0: nop

    // 0x80276DB4: bc1f        L_80276DD0
    if (!c1cs) {
        // 0x80276DB8: nop
    
            goto L_80276DD0;
    }
    // 0x80276DB8: nop

    // 0x80276DBC: sll         $v1, $a0, 16
    ctx->r3 = S32(ctx->r4 << 16);
    // 0x80276DC0: sra         $t9, $v1, 16
    ctx->r25 = S32(SIGNED(ctx->r3) >> 16);
    // 0x80276DC4: mov.s       $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    ctx->f0.fl = ctx->f2.fl;
    // 0x80276DC8: or          $v1, $t9, $zero
    ctx->r3 = ctx->r25 | 0;
    // 0x80276DCC: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
L_80276DD0:
    // 0x80276DD0: lw          $t0, 0x4($a3)
    ctx->r8 = MEM_W(ctx->r7, 0X4);
    // 0x80276DD4: nop

    // 0x80276DD8: lw          $t2, 0x4($t0)
    ctx->r10 = MEM_W(ctx->r8, 0X4);
    // 0x80276DDC: nop

    // 0x80276DE0: lbu         $t3, 0x6($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X6);
    // 0x80276DE4: nop

    // 0x80276DE8: andi        $t4, $t3, 0x8
    ctx->r12 = ctx->r11 & 0X8;
    // 0x80276DEC: beq         $t4, $zero, L_80276E28
    if (ctx->r12 == 0) {
        // 0x80276DF0: nop
    
            goto L_80276E28;
    }
    // 0x80276DF0: nop

    // 0x80276DF4: lw          $t5, 0x0($t0)
    ctx->r13 = MEM_W(ctx->r8, 0X0);
    // 0x80276DF8: nop

    // 0x80276DFC: lwc1        $f2, 0x90($t5)
    ctx->f2.u32l = MEM_W(ctx->r13, 0X90);
    // 0x80276E00: nop

    // 0x80276E04: c.lt.s      $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f0.fl < ctx->f2.fl;
    // 0x80276E08: nop

    // 0x80276E0C: bc1f        L_80276E28
    if (!c1cs) {
        // 0x80276E10: nop
    
            goto L_80276E28;
    }
    // 0x80276E10: nop

    // 0x80276E14: addiu       $v1, $a0, 0x1
    ctx->r3 = ADD32(ctx->r4, 0X1);
    // 0x80276E18: sll         $t6, $v1, 16
    ctx->r14 = S32(ctx->r3 << 16);
    // 0x80276E1C: sra         $v1, $t6, 16
    ctx->r3 = S32(SIGNED(ctx->r14) >> 16);
    // 0x80276E20: mov.s       $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    ctx->f0.fl = ctx->f2.fl;
    // 0x80276E24: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
L_80276E28:
    // 0x80276E28: lw          $t0, 0x8($a3)
    ctx->r8 = MEM_W(ctx->r7, 0X8);
    // 0x80276E2C: nop

    // 0x80276E30: lw          $t8, 0x4($t0)
    ctx->r24 = MEM_W(ctx->r8, 0X4);
    // 0x80276E34: nop

    // 0x80276E38: lbu         $t9, 0x6($t8)
    ctx->r25 = MEM_BU(ctx->r24, 0X6);
    // 0x80276E3C: nop

    // 0x80276E40: andi        $t2, $t9, 0x8
    ctx->r10 = ctx->r25 & 0X8;
    // 0x80276E44: beq         $t2, $zero, L_80276E80
    if (ctx->r10 == 0) {
        // 0x80276E48: nop
    
            goto L_80276E80;
    }
    // 0x80276E48: nop

    // 0x80276E4C: lw          $t3, 0x0($t0)
    ctx->r11 = MEM_W(ctx->r8, 0X0);
    // 0x80276E50: nop

    // 0x80276E54: lwc1        $f2, 0x90($t3)
    ctx->f2.u32l = MEM_W(ctx->r11, 0X90);
    // 0x80276E58: nop

    // 0x80276E5C: c.lt.s      $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f0.fl < ctx->f2.fl;
    // 0x80276E60: nop

    // 0x80276E64: bc1f        L_80276E80
    if (!c1cs) {
        // 0x80276E68: nop
    
            goto L_80276E80;
    }
    // 0x80276E68: nop

    // 0x80276E6C: addiu       $v1, $a0, 0x2
    ctx->r3 = ADD32(ctx->r4, 0X2);
    // 0x80276E70: sll         $t4, $v1, 16
    ctx->r12 = S32(ctx->r3 << 16);
    // 0x80276E74: sra         $v1, $t4, 16
    ctx->r3 = S32(SIGNED(ctx->r12) >> 16);
    // 0x80276E78: mov.s       $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    ctx->f0.fl = ctx->f2.fl;
    // 0x80276E7C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
L_80276E80:
    // 0x80276E80: lw          $t0, 0xC($a3)
    ctx->r8 = MEM_W(ctx->r7, 0XC);
    // 0x80276E84: nop

    // 0x80276E88: lw          $t6, 0x4($t0)
    ctx->r14 = MEM_W(ctx->r8, 0X4);
    // 0x80276E8C: nop

    // 0x80276E90: lbu         $t7, 0x6($t6)
    ctx->r15 = MEM_BU(ctx->r14, 0X6);
    // 0x80276E94: nop

    // 0x80276E98: andi        $t8, $t7, 0x8
    ctx->r24 = ctx->r15 & 0X8;
    // 0x80276E9C: beq         $t8, $zero, L_80276ED8
    if (ctx->r24 == 0) {
        // 0x80276EA0: nop
    
            goto L_80276ED8;
    }
    // 0x80276EA0: nop

    // 0x80276EA4: lw          $t9, 0x0($t0)
    ctx->r25 = MEM_W(ctx->r8, 0X0);
    // 0x80276EA8: nop

    // 0x80276EAC: lwc1        $f2, 0x90($t9)
    ctx->f2.u32l = MEM_W(ctx->r25, 0X90);
    // 0x80276EB0: nop

    // 0x80276EB4: c.lt.s      $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f0.fl < ctx->f2.fl;
    // 0x80276EB8: nop

    // 0x80276EBC: bc1f        L_80276ED8
    if (!c1cs) {
        // 0x80276EC0: nop
    
            goto L_80276ED8;
    }
    // 0x80276EC0: nop

    // 0x80276EC4: addiu       $v1, $a0, 0x3
    ctx->r3 = ADD32(ctx->r4, 0X3);
    // 0x80276EC8: sll         $t2, $v1, 16
    ctx->r10 = S32(ctx->r3 << 16);
    // 0x80276ECC: sra         $v1, $t2, 16
    ctx->r3 = S32(SIGNED(ctx->r10) >> 16);
    // 0x80276ED0: mov.s       $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    ctx->f0.fl = ctx->f2.fl;
    // 0x80276ED4: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
L_80276ED8:
    // 0x80276ED8: addiu       $a0, $a0, 0x4
    ctx->r4 = ADD32(ctx->r4, 0X4);
    // 0x80276EDC: bne         $a0, $a1, L_80276D78
    if (ctx->r4 != ctx->r5) {
        // 0x80276EE0: addiu       $a3, $a3, 0x10
        ctx->r7 = ADD32(ctx->r7, 0X10);
            goto L_80276D78;
    }
    // 0x80276EE0: addiu       $a3, $a3, 0x10
    ctx->r7 = ADD32(ctx->r7, 0X10);
L_80276EE4:
    // 0x80276EE4: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    // 0x80276EE8: jr          $ra
    // 0x80276EEC: nop

    return;
    // 0x80276EEC: nop

;}
RECOMP_FUNC void ovl_8024B800_func_80276D08(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
L_80276D08:
    // 0x80276D08: lw          $t0, 0x0($a3)
    ctx->r8 = MEM_W(ctx->r7, 0X0);
    // 0x80276D0C: nop

    // 0x80276D10: lw          $t7, 0x4($t0)
    ctx->r15 = MEM_W(ctx->r8, 0X4);
    // 0x80276D14: nop

    // 0x80276D18: lbu         $t8, 0x6($t7)
    ctx->r24 = MEM_BU(ctx->r15, 0X6);
    // 0x80276D1C: nop

    // 0x80276D20: andi        $t9, $t8, 0x8
    ctx->r25 = ctx->r24 & 0X8;
    // 0x80276D24: beq         $t9, $zero, L_80276D60
    if (ctx->r25 == 0) {
        // 0x80276D28: nop
    
            goto L_80276D60;
    }
    // 0x80276D28: nop

    // 0x80276D2C: lw          $t2, 0x0($t0)
    ctx->r10 = MEM_W(ctx->r8, 0X0);
    // 0x80276D30: nop

    // 0x80276D34: lwc1        $f2, 0x90($t2)
    ctx->f2.u32l = MEM_W(ctx->r10, 0X90);
    // 0x80276D38: nop

    // 0x80276D3C: c.lt.s      $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f0.fl < ctx->f2.fl;
    // 0x80276D40: nop

    // 0x80276D44: bc1f        L_80276D60
    if (!c1cs) {
        // 0x80276D48: nop
    
            goto L_80276D60;
    }
    // 0x80276D48: nop

    // 0x80276D4C: sll         $v1, $a0, 16
    ctx->r3 = S32(ctx->r4 << 16);
    // 0x80276D50: sra         $t3, $v1, 16
    ctx->r11 = S32(SIGNED(ctx->r3) >> 16);
    // 0x80276D54: or          $v1, $t3, $zero
    ctx->r3 = ctx->r11 | 0;
    // 0x80276D58: mov.s       $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    ctx->f0.fl = ctx->f2.fl;
    // 0x80276D5C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
L_80276D60:
    // 0x80276D60: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    // 0x80276D64: bne         $t1, $a0, L_80276D08
    if (ctx->r9 != ctx->r4) {
        // 0x80276D68: addiu       $a3, $a3, 0x4
        ctx->r7 = ADD32(ctx->r7, 0X4);
            goto L_80276D08;
    }
    // 0x80276D68: addiu       $a3, $a3, 0x4
    ctx->r7 = ADD32(ctx->r7, 0X4);
    // 0x80276D6C: beq         $a0, $a1, L_80276EE4
    if (ctx->r4 == ctx->r5) {
        // 0x80276D70: sll         $t4, $a0, 2
        ctx->r12 = S32(ctx->r4 << 2);
            goto L_80276EE4;
    }
    // 0x80276D70: sll         $t4, $a0, 2
    ctx->r12 = S32(ctx->r4 << 2);
    // 0x80276D74: addu        $a3, $a2, $t4
    ctx->r7 = ADD32(ctx->r6, ctx->r12);
L_80276D78:
    // 0x80276D78: lw          $t0, 0x0($a3)
    ctx->r8 = MEM_W(ctx->r7, 0X0);
    // 0x80276D7C: nop

    // 0x80276D80: lw          $t5, 0x4($t0)
    ctx->r13 = MEM_W(ctx->r8, 0X4);
    // 0x80276D84: nop

    // 0x80276D88: lbu         $t6, 0x6($t5)
    ctx->r14 = MEM_BU(ctx->r13, 0X6);
    // 0x80276D8C: nop

    // 0x80276D90: andi        $t7, $t6, 0x8
    ctx->r15 = ctx->r14 & 0X8;
    // 0x80276D94: beq         $t7, $zero, L_80276DD0
    if (ctx->r15 == 0) {
        // 0x80276D98: nop
    
            goto L_80276DD0;
    }
    // 0x80276D98: nop

    // 0x80276D9C: lw          $t8, 0x0($t0)
    ctx->r24 = MEM_W(ctx->r8, 0X0);
    // 0x80276DA0: nop

    // 0x80276DA4: lwc1        $f2, 0x90($t8)
    ctx->f2.u32l = MEM_W(ctx->r24, 0X90);
    // 0x80276DA8: nop

    // 0x80276DAC: c.lt.s      $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f0.fl < ctx->f2.fl;
    // 0x80276DB0: nop

    // 0x80276DB4: bc1f        L_80276DD0
    if (!c1cs) {
        // 0x80276DB8: nop
    
            goto L_80276DD0;
    }
    // 0x80276DB8: nop

    // 0x80276DBC: sll         $v1, $a0, 16
    ctx->r3 = S32(ctx->r4 << 16);
    // 0x80276DC0: sra         $t9, $v1, 16
    ctx->r25 = S32(SIGNED(ctx->r3) >> 16);
    // 0x80276DC4: mov.s       $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    ctx->f0.fl = ctx->f2.fl;
    // 0x80276DC8: or          $v1, $t9, $zero
    ctx->r3 = ctx->r25 | 0;
    // 0x80276DCC: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
L_80276DD0:
    // 0x80276DD0: lw          $t0, 0x4($a3)
    ctx->r8 = MEM_W(ctx->r7, 0X4);
    // 0x80276DD4: nop

    // 0x80276DD8: lw          $t2, 0x4($t0)
    ctx->r10 = MEM_W(ctx->r8, 0X4);
    // 0x80276DDC: nop

    // 0x80276DE0: lbu         $t3, 0x6($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X6);
    // 0x80276DE4: nop

    // 0x80276DE8: andi        $t4, $t3, 0x8
    ctx->r12 = ctx->r11 & 0X8;
    // 0x80276DEC: beq         $t4, $zero, L_80276E28
    if (ctx->r12 == 0) {
        // 0x80276DF0: nop
    
            goto L_80276E28;
    }
    // 0x80276DF0: nop

    // 0x80276DF4: lw          $t5, 0x0($t0)
    ctx->r13 = MEM_W(ctx->r8, 0X0);
    // 0x80276DF8: nop

    // 0x80276DFC: lwc1        $f2, 0x90($t5)
    ctx->f2.u32l = MEM_W(ctx->r13, 0X90);
    // 0x80276E00: nop

    // 0x80276E04: c.lt.s      $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f0.fl < ctx->f2.fl;
    // 0x80276E08: nop

    // 0x80276E0C: bc1f        L_80276E28
    if (!c1cs) {
        // 0x80276E10: nop
    
            goto L_80276E28;
    }
    // 0x80276E10: nop

    // 0x80276E14: addiu       $v1, $a0, 0x1
    ctx->r3 = ADD32(ctx->r4, 0X1);
    // 0x80276E18: sll         $t6, $v1, 16
    ctx->r14 = S32(ctx->r3 << 16);
    // 0x80276E1C: sra         $v1, $t6, 16
    ctx->r3 = S32(SIGNED(ctx->r14) >> 16);
    // 0x80276E20: mov.s       $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    ctx->f0.fl = ctx->f2.fl;
    // 0x80276E24: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
L_80276E28:
    // 0x80276E28: lw          $t0, 0x8($a3)
    ctx->r8 = MEM_W(ctx->r7, 0X8);
    // 0x80276E2C: nop

    // 0x80276E30: lw          $t8, 0x4($t0)
    ctx->r24 = MEM_W(ctx->r8, 0X4);
    // 0x80276E34: nop

    // 0x80276E38: lbu         $t9, 0x6($t8)
    ctx->r25 = MEM_BU(ctx->r24, 0X6);
    // 0x80276E3C: nop

    // 0x80276E40: andi        $t2, $t9, 0x8
    ctx->r10 = ctx->r25 & 0X8;
    // 0x80276E44: beq         $t2, $zero, L_80276E80
    if (ctx->r10 == 0) {
        // 0x80276E48: nop
    
            goto L_80276E80;
    }
    // 0x80276E48: nop

    // 0x80276E4C: lw          $t3, 0x0($t0)
    ctx->r11 = MEM_W(ctx->r8, 0X0);
    // 0x80276E50: nop

    // 0x80276E54: lwc1        $f2, 0x90($t3)
    ctx->f2.u32l = MEM_W(ctx->r11, 0X90);
    // 0x80276E58: nop

    // 0x80276E5C: c.lt.s      $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f0.fl < ctx->f2.fl;
    // 0x80276E60: nop

    // 0x80276E64: bc1f        L_80276E80
    if (!c1cs) {
        // 0x80276E68: nop
    
            goto L_80276E80;
    }
    // 0x80276E68: nop

    // 0x80276E6C: addiu       $v1, $a0, 0x2
    ctx->r3 = ADD32(ctx->r4, 0X2);
    // 0x80276E70: sll         $t4, $v1, 16
    ctx->r12 = S32(ctx->r3 << 16);
    // 0x80276E74: sra         $v1, $t4, 16
    ctx->r3 = S32(SIGNED(ctx->r12) >> 16);
    // 0x80276E78: mov.s       $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    ctx->f0.fl = ctx->f2.fl;
    // 0x80276E7C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
L_80276E80:
    // 0x80276E80: lw          $t0, 0xC($a3)
    ctx->r8 = MEM_W(ctx->r7, 0XC);
    // 0x80276E84: nop

    // 0x80276E88: lw          $t6, 0x4($t0)
    ctx->r14 = MEM_W(ctx->r8, 0X4);
    // 0x80276E8C: nop

    // 0x80276E90: lbu         $t7, 0x6($t6)
    ctx->r15 = MEM_BU(ctx->r14, 0X6);
    // 0x80276E94: nop

    // 0x80276E98: andi        $t8, $t7, 0x8
    ctx->r24 = ctx->r15 & 0X8;
    // 0x80276E9C: beq         $t8, $zero, L_80276ED8
    if (ctx->r24 == 0) {
        // 0x80276EA0: nop
    
            goto L_80276ED8;
    }
    // 0x80276EA0: nop

    // 0x80276EA4: lw          $t9, 0x0($t0)
    ctx->r25 = MEM_W(ctx->r8, 0X0);
    // 0x80276EA8: nop

    // 0x80276EAC: lwc1        $f2, 0x90($t9)
    ctx->f2.u32l = MEM_W(ctx->r25, 0X90);
    // 0x80276EB0: nop

    // 0x80276EB4: c.lt.s      $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f0.fl < ctx->f2.fl;
    // 0x80276EB8: nop

    // 0x80276EBC: bc1f        L_80276ED8
    if (!c1cs) {
        // 0x80276EC0: nop
    
            goto L_80276ED8;
    }
    // 0x80276EC0: nop

    // 0x80276EC4: addiu       $v1, $a0, 0x3
    ctx->r3 = ADD32(ctx->r4, 0X3);
    // 0x80276EC8: sll         $t2, $v1, 16
    ctx->r10 = S32(ctx->r3 << 16);
    // 0x80276ECC: sra         $v1, $t2, 16
    ctx->r3 = S32(SIGNED(ctx->r10) >> 16);
    // 0x80276ED0: mov.s       $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    ctx->f0.fl = ctx->f2.fl;
    // 0x80276ED4: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
L_80276ED8:
    // 0x80276ED8: addiu       $a0, $a0, 0x4
    ctx->r4 = ADD32(ctx->r4, 0X4);
    // 0x80276EDC: bne         $a0, $a1, L_80276D78
    if (ctx->r4 != ctx->r5) {
        // 0x80276EE0: addiu       $a3, $a3, 0x10
        ctx->r7 = ADD32(ctx->r7, 0X10);
            goto L_80276D78;
    }
    // 0x80276EE0: addiu       $a3, $a3, 0x10
    ctx->r7 = ADD32(ctx->r7, 0X10);
L_80276EE4:
    // 0x80276EE4: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    // 0x80276EE8: jr          $ra
    // 0x80276EEC: nop

    return;
    // 0x80276EEC: nop

;}
RECOMP_FUNC void ovl_8024B800_func_80276D18(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
L_80276D08:
    // 0x80276D18: lbu         $t8, 0x6($t7)
    ctx->r24 = MEM_BU(ctx->r15, 0X6);
    // 0x80276D1C: nop

    // 0x80276D20: andi        $t9, $t8, 0x8
    ctx->r25 = ctx->r24 & 0X8;
    // 0x80276D24: beq         $t9, $zero, L_80276D60
    if (ctx->r25 == 0) {
        // 0x80276D28: nop
    
            goto L_80276D60;
    }
    // 0x80276D28: nop

    // 0x80276D2C: lw          $t2, 0x0($t0)
    ctx->r10 = MEM_W(ctx->r8, 0X0);
    // 0x80276D30: nop

    // 0x80276D34: lwc1        $f2, 0x90($t2)
    ctx->f2.u32l = MEM_W(ctx->r10, 0X90);
    // 0x80276D38: nop

    // 0x80276D3C: c.lt.s      $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f0.fl < ctx->f2.fl;
    // 0x80276D40: nop

    // 0x80276D44: bc1f        L_80276D60
    if (!c1cs) {
        // 0x80276D48: nop
    
            goto L_80276D60;
    }
    // 0x80276D48: nop

    // 0x80276D4C: sll         $v1, $a0, 16
    ctx->r3 = S32(ctx->r4 << 16);
    // 0x80276D50: sra         $t3, $v1, 16
    ctx->r11 = S32(SIGNED(ctx->r3) >> 16);
    // 0x80276D54: or          $v1, $t3, $zero
    ctx->r3 = ctx->r11 | 0;
    // 0x80276D58: mov.s       $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    ctx->f0.fl = ctx->f2.fl;
    // 0x80276D5C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
L_80276D60:
    // 0x80276D60: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    // 0x80276D64: bne         $t1, $a0, L_80276D08
    if (ctx->r9 != ctx->r4) {
            // 0x80276D68: addiu       $a3, $a3, 0x4
    ctx->r7 = ADD32(ctx->r7, 0X4);
    ovl_8024B800_func_80276D08(rdram, ctx);
    return;
    }
    // 0x80276D68: addiu       $a3, $a3, 0x4
    ctx->r7 = ADD32(ctx->r7, 0X4);
    // 0x80276D6C: beq         $a0, $a1, L_80276EE4
    if (ctx->r4 == ctx->r5) {
        // 0x80276D70: sll         $t4, $a0, 2
        ctx->r12 = S32(ctx->r4 << 2);
            goto L_80276EE4;
    }
    // 0x80276D70: sll         $t4, $a0, 2
    ctx->r12 = S32(ctx->r4 << 2);
    // 0x80276D74: addu        $a3, $a2, $t4
    ctx->r7 = ADD32(ctx->r6, ctx->r12);
L_80276D78:
    // 0x80276D78: lw          $t0, 0x0($a3)
    ctx->r8 = MEM_W(ctx->r7, 0X0);
    // 0x80276D7C: nop

    // 0x80276D80: lw          $t5, 0x4($t0)
    ctx->r13 = MEM_W(ctx->r8, 0X4);
    // 0x80276D84: nop

    // 0x80276D88: lbu         $t6, 0x6($t5)
    ctx->r14 = MEM_BU(ctx->r13, 0X6);
    // 0x80276D8C: nop

    // 0x80276D90: andi        $t7, $t6, 0x8
    ctx->r15 = ctx->r14 & 0X8;
    // 0x80276D94: beq         $t7, $zero, L_80276DD0
    if (ctx->r15 == 0) {
        // 0x80276D98: nop
    
            goto L_80276DD0;
    }
    // 0x80276D98: nop

    // 0x80276D9C: lw          $t8, 0x0($t0)
    ctx->r24 = MEM_W(ctx->r8, 0X0);
    // 0x80276DA0: nop

    // 0x80276DA4: lwc1        $f2, 0x90($t8)
    ctx->f2.u32l = MEM_W(ctx->r24, 0X90);
    // 0x80276DA8: nop

    // 0x80276DAC: c.lt.s      $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f0.fl < ctx->f2.fl;
    // 0x80276DB0: nop

    // 0x80276DB4: bc1f        L_80276DD0
    if (!c1cs) {
        // 0x80276DB8: nop
    
            goto L_80276DD0;
    }
    // 0x80276DB8: nop

    // 0x80276DBC: sll         $v1, $a0, 16
    ctx->r3 = S32(ctx->r4 << 16);
    // 0x80276DC0: sra         $t9, $v1, 16
    ctx->r25 = S32(SIGNED(ctx->r3) >> 16);
    // 0x80276DC4: mov.s       $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    ctx->f0.fl = ctx->f2.fl;
    // 0x80276DC8: or          $v1, $t9, $zero
    ctx->r3 = ctx->r25 | 0;
    // 0x80276DCC: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
L_80276DD0:
    // 0x80276DD0: lw          $t0, 0x4($a3)
    ctx->r8 = MEM_W(ctx->r7, 0X4);
    // 0x80276DD4: nop

    // 0x80276DD8: lw          $t2, 0x4($t0)
    ctx->r10 = MEM_W(ctx->r8, 0X4);
    // 0x80276DDC: nop

    // 0x80276DE0: lbu         $t3, 0x6($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X6);
    // 0x80276DE4: nop

    // 0x80276DE8: andi        $t4, $t3, 0x8
    ctx->r12 = ctx->r11 & 0X8;
    // 0x80276DEC: beq         $t4, $zero, L_80276E28
    if (ctx->r12 == 0) {
        // 0x80276DF0: nop
    
            goto L_80276E28;
    }
    // 0x80276DF0: nop

    // 0x80276DF4: lw          $t5, 0x0($t0)
    ctx->r13 = MEM_W(ctx->r8, 0X0);
    // 0x80276DF8: nop

    // 0x80276DFC: lwc1        $f2, 0x90($t5)
    ctx->f2.u32l = MEM_W(ctx->r13, 0X90);
    // 0x80276E00: nop

    // 0x80276E04: c.lt.s      $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f0.fl < ctx->f2.fl;
    // 0x80276E08: nop

    // 0x80276E0C: bc1f        L_80276E28
    if (!c1cs) {
        // 0x80276E10: nop
    
            goto L_80276E28;
    }
    // 0x80276E10: nop

    // 0x80276E14: addiu       $v1, $a0, 0x1
    ctx->r3 = ADD32(ctx->r4, 0X1);
    // 0x80276E18: sll         $t6, $v1, 16
    ctx->r14 = S32(ctx->r3 << 16);
    // 0x80276E1C: sra         $v1, $t6, 16
    ctx->r3 = S32(SIGNED(ctx->r14) >> 16);
    // 0x80276E20: mov.s       $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    ctx->f0.fl = ctx->f2.fl;
    // 0x80276E24: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
L_80276E28:
    // 0x80276E28: lw          $t0, 0x8($a3)
    ctx->r8 = MEM_W(ctx->r7, 0X8);
    // 0x80276E2C: nop

    // 0x80276E30: lw          $t8, 0x4($t0)
    ctx->r24 = MEM_W(ctx->r8, 0X4);
    // 0x80276E34: nop

    // 0x80276E38: lbu         $t9, 0x6($t8)
    ctx->r25 = MEM_BU(ctx->r24, 0X6);
    // 0x80276E3C: nop

    // 0x80276E40: andi        $t2, $t9, 0x8
    ctx->r10 = ctx->r25 & 0X8;
    // 0x80276E44: beq         $t2, $zero, L_80276E80
    if (ctx->r10 == 0) {
        // 0x80276E48: nop
    
            goto L_80276E80;
    }
    // 0x80276E48: nop

    // 0x80276E4C: lw          $t3, 0x0($t0)
    ctx->r11 = MEM_W(ctx->r8, 0X0);
    // 0x80276E50: nop

    // 0x80276E54: lwc1        $f2, 0x90($t3)
    ctx->f2.u32l = MEM_W(ctx->r11, 0X90);
    // 0x80276E58: nop

    // 0x80276E5C: c.lt.s      $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f0.fl < ctx->f2.fl;
    // 0x80276E60: nop

    // 0x80276E64: bc1f        L_80276E80
    if (!c1cs) {
        // 0x80276E68: nop
    
            goto L_80276E80;
    }
    // 0x80276E68: nop

    // 0x80276E6C: addiu       $v1, $a0, 0x2
    ctx->r3 = ADD32(ctx->r4, 0X2);
    // 0x80276E70: sll         $t4, $v1, 16
    ctx->r12 = S32(ctx->r3 << 16);
    // 0x80276E74: sra         $v1, $t4, 16
    ctx->r3 = S32(SIGNED(ctx->r12) >> 16);
    // 0x80276E78: mov.s       $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    ctx->f0.fl = ctx->f2.fl;
    // 0x80276E7C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
L_80276E80:
    // 0x80276E80: lw          $t0, 0xC($a3)
    ctx->r8 = MEM_W(ctx->r7, 0XC);
    // 0x80276E84: nop

    // 0x80276E88: lw          $t6, 0x4($t0)
    ctx->r14 = MEM_W(ctx->r8, 0X4);
    // 0x80276E8C: nop

    // 0x80276E90: lbu         $t7, 0x6($t6)
    ctx->r15 = MEM_BU(ctx->r14, 0X6);
    // 0x80276E94: nop

    // 0x80276E98: andi        $t8, $t7, 0x8
    ctx->r24 = ctx->r15 & 0X8;
    // 0x80276E9C: beq         $t8, $zero, L_80276ED8
    if (ctx->r24 == 0) {
        // 0x80276EA0: nop
    
            goto L_80276ED8;
    }
    // 0x80276EA0: nop

    // 0x80276EA4: lw          $t9, 0x0($t0)
    ctx->r25 = MEM_W(ctx->r8, 0X0);
    // 0x80276EA8: nop

    // 0x80276EAC: lwc1        $f2, 0x90($t9)
    ctx->f2.u32l = MEM_W(ctx->r25, 0X90);
    // 0x80276EB0: nop

    // 0x80276EB4: c.lt.s      $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f0.fl < ctx->f2.fl;
    // 0x80276EB8: nop

    // 0x80276EBC: bc1f        L_80276ED8
    if (!c1cs) {
        // 0x80276EC0: nop
    
            goto L_80276ED8;
    }
    // 0x80276EC0: nop

    // 0x80276EC4: addiu       $v1, $a0, 0x3
    ctx->r3 = ADD32(ctx->r4, 0X3);
    // 0x80276EC8: sll         $t2, $v1, 16
    ctx->r10 = S32(ctx->r3 << 16);
    // 0x80276ECC: sra         $v1, $t2, 16
    ctx->r3 = S32(SIGNED(ctx->r10) >> 16);
    // 0x80276ED0: mov.s       $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    ctx->f0.fl = ctx->f2.fl;
    // 0x80276ED4: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
L_80276ED8:
    // 0x80276ED8: addiu       $a0, $a0, 0x4
    ctx->r4 = ADD32(ctx->r4, 0X4);
    // 0x80276EDC: bne         $a0, $a1, L_80276D78
    if (ctx->r4 != ctx->r5) {
        // 0x80276EE0: addiu       $a3, $a3, 0x10
        ctx->r7 = ADD32(ctx->r7, 0X10);
            goto L_80276D78;
    }
    // 0x80276EE0: addiu       $a3, $a3, 0x10
    ctx->r7 = ADD32(ctx->r7, 0X10);
L_80276EE4:
    // 0x80276EE4: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    // 0x80276EE8: jr          $ra
    // 0x80276EEC: nop

    return;
    // 0x80276EEC: nop

;}
RECOMP_FUNC void ovl_8024B800_func_80276D78(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
L_80276D78:
    // 0x80276D78: lw          $t0, 0x0($a3)
    ctx->r8 = MEM_W(ctx->r7, 0X0);
    // 0x80276D7C: nop

    // 0x80276D80: lw          $t5, 0x4($t0)
    ctx->r13 = MEM_W(ctx->r8, 0X4);
    // 0x80276D84: nop

    // 0x80276D88: lbu         $t6, 0x6($t5)
    ctx->r14 = MEM_BU(ctx->r13, 0X6);
    // 0x80276D8C: nop

    // 0x80276D90: andi        $t7, $t6, 0x8
    ctx->r15 = ctx->r14 & 0X8;
    // 0x80276D94: beq         $t7, $zero, L_80276DD0
    if (ctx->r15 == 0) {
        // 0x80276D98: nop
    
            goto L_80276DD0;
    }
    // 0x80276D98: nop

    // 0x80276D9C: lw          $t8, 0x0($t0)
    ctx->r24 = MEM_W(ctx->r8, 0X0);
    // 0x80276DA0: nop

    // 0x80276DA4: lwc1        $f2, 0x90($t8)
    ctx->f2.u32l = MEM_W(ctx->r24, 0X90);
    // 0x80276DA8: nop

    // 0x80276DAC: c.lt.s      $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f0.fl < ctx->f2.fl;
    // 0x80276DB0: nop

    // 0x80276DB4: bc1f        L_80276DD0
    if (!c1cs) {
        // 0x80276DB8: nop
    
            goto L_80276DD0;
    }
    // 0x80276DB8: nop

    // 0x80276DBC: sll         $v1, $a0, 16
    ctx->r3 = S32(ctx->r4 << 16);
    // 0x80276DC0: sra         $t9, $v1, 16
    ctx->r25 = S32(SIGNED(ctx->r3) >> 16);
    // 0x80276DC4: mov.s       $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    ctx->f0.fl = ctx->f2.fl;
    // 0x80276DC8: or          $v1, $t9, $zero
    ctx->r3 = ctx->r25 | 0;
    // 0x80276DCC: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
L_80276DD0:
    // 0x80276DD0: lw          $t0, 0x4($a3)
    ctx->r8 = MEM_W(ctx->r7, 0X4);
    // 0x80276DD4: nop

    // 0x80276DD8: lw          $t2, 0x4($t0)
    ctx->r10 = MEM_W(ctx->r8, 0X4);
    // 0x80276DDC: nop

    // 0x80276DE0: lbu         $t3, 0x6($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X6);
    // 0x80276DE4: nop

    // 0x80276DE8: andi        $t4, $t3, 0x8
    ctx->r12 = ctx->r11 & 0X8;
    // 0x80276DEC: beq         $t4, $zero, L_80276E28
    if (ctx->r12 == 0) {
        // 0x80276DF0: nop
    
            goto L_80276E28;
    }
    // 0x80276DF0: nop

    // 0x80276DF4: lw          $t5, 0x0($t0)
    ctx->r13 = MEM_W(ctx->r8, 0X0);
    // 0x80276DF8: nop

    // 0x80276DFC: lwc1        $f2, 0x90($t5)
    ctx->f2.u32l = MEM_W(ctx->r13, 0X90);
    // 0x80276E00: nop

    // 0x80276E04: c.lt.s      $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f0.fl < ctx->f2.fl;
    // 0x80276E08: nop

    // 0x80276E0C: bc1f        L_80276E28
    if (!c1cs) {
        // 0x80276E10: nop
    
            goto L_80276E28;
    }
    // 0x80276E10: nop

    // 0x80276E14: addiu       $v1, $a0, 0x1
    ctx->r3 = ADD32(ctx->r4, 0X1);
    // 0x80276E18: sll         $t6, $v1, 16
    ctx->r14 = S32(ctx->r3 << 16);
    // 0x80276E1C: sra         $v1, $t6, 16
    ctx->r3 = S32(SIGNED(ctx->r14) >> 16);
    // 0x80276E20: mov.s       $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    ctx->f0.fl = ctx->f2.fl;
    // 0x80276E24: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
L_80276E28:
    // 0x80276E28: lw          $t0, 0x8($a3)
    ctx->r8 = MEM_W(ctx->r7, 0X8);
    // 0x80276E2C: nop

    // 0x80276E30: lw          $t8, 0x4($t0)
    ctx->r24 = MEM_W(ctx->r8, 0X4);
    // 0x80276E34: nop

    // 0x80276E38: lbu         $t9, 0x6($t8)
    ctx->r25 = MEM_BU(ctx->r24, 0X6);
    // 0x80276E3C: nop

    // 0x80276E40: andi        $t2, $t9, 0x8
    ctx->r10 = ctx->r25 & 0X8;
    // 0x80276E44: beq         $t2, $zero, L_80276E80
    if (ctx->r10 == 0) {
        // 0x80276E48: nop
    
            goto L_80276E80;
    }
    // 0x80276E48: nop

    // 0x80276E4C: lw          $t3, 0x0($t0)
    ctx->r11 = MEM_W(ctx->r8, 0X0);
    // 0x80276E50: nop

    // 0x80276E54: lwc1        $f2, 0x90($t3)
    ctx->f2.u32l = MEM_W(ctx->r11, 0X90);
    // 0x80276E58: nop

    // 0x80276E5C: c.lt.s      $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f0.fl < ctx->f2.fl;
    // 0x80276E60: nop

    // 0x80276E64: bc1f        L_80276E80
    if (!c1cs) {
        // 0x80276E68: nop
    
            goto L_80276E80;
    }
    // 0x80276E68: nop

    // 0x80276E6C: addiu       $v1, $a0, 0x2
    ctx->r3 = ADD32(ctx->r4, 0X2);
    // 0x80276E70: sll         $t4, $v1, 16
    ctx->r12 = S32(ctx->r3 << 16);
    // 0x80276E74: sra         $v1, $t4, 16
    ctx->r3 = S32(SIGNED(ctx->r12) >> 16);
    // 0x80276E78: mov.s       $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    ctx->f0.fl = ctx->f2.fl;
    // 0x80276E7C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
L_80276E80:
    // 0x80276E80: lw          $t0, 0xC($a3)
    ctx->r8 = MEM_W(ctx->r7, 0XC);
    // 0x80276E84: nop

    // 0x80276E88: lw          $t6, 0x4($t0)
    ctx->r14 = MEM_W(ctx->r8, 0X4);
    // 0x80276E8C: nop

    // 0x80276E90: lbu         $t7, 0x6($t6)
    ctx->r15 = MEM_BU(ctx->r14, 0X6);
    // 0x80276E94: nop

    // 0x80276E98: andi        $t8, $t7, 0x8
    ctx->r24 = ctx->r15 & 0X8;
    // 0x80276E9C: beq         $t8, $zero, L_80276ED8
    if (ctx->r24 == 0) {
        // 0x80276EA0: nop
    
            goto L_80276ED8;
    }
    // 0x80276EA0: nop

    // 0x80276EA4: lw          $t9, 0x0($t0)
    ctx->r25 = MEM_W(ctx->r8, 0X0);
    // 0x80276EA8: nop

    // 0x80276EAC: lwc1        $f2, 0x90($t9)
    ctx->f2.u32l = MEM_W(ctx->r25, 0X90);
    // 0x80276EB0: nop

    // 0x80276EB4: c.lt.s      $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f0.fl < ctx->f2.fl;
    // 0x80276EB8: nop

    // 0x80276EBC: bc1f        L_80276ED8
    if (!c1cs) {
        // 0x80276EC0: nop
    
            goto L_80276ED8;
    }
    // 0x80276EC0: nop

    // 0x80276EC4: addiu       $v1, $a0, 0x3
    ctx->r3 = ADD32(ctx->r4, 0X3);
    // 0x80276EC8: sll         $t2, $v1, 16
    ctx->r10 = S32(ctx->r3 << 16);
    // 0x80276ECC: sra         $v1, $t2, 16
    ctx->r3 = S32(SIGNED(ctx->r10) >> 16);
    // 0x80276ED0: mov.s       $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    ctx->f0.fl = ctx->f2.fl;
    // 0x80276ED4: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
L_80276ED8:
    // 0x80276ED8: addiu       $a0, $a0, 0x4
    ctx->r4 = ADD32(ctx->r4, 0X4);
    // 0x80276EDC: bne         $a0, $a1, L_80276D78
    if (ctx->r4 != ctx->r5) {
        // 0x80276EE0: addiu       $a3, $a3, 0x10
        ctx->r7 = ADD32(ctx->r7, 0X10);
            goto L_80276D78;
    }
    // 0x80276EE0: addiu       $a3, $a3, 0x10
    ctx->r7 = ADD32(ctx->r7, 0X10);
    // 0x80276EE4: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    // 0x80276EE8: jr          $ra
    // 0x80276EEC: nop

    return;
    // 0x80276EEC: nop

;}
RECOMP_FUNC void ovl_8024B800_func_80276DEC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
L_80276D78:
    // 0x80276DEC: beq         $t4, $zero, L_80276E28
    if (ctx->r12 == 0) {
        // 0x80276DF0: nop
    
            goto L_80276E28;
    }
    // 0x80276DF0: nop

    // 0x80276DF4: lw          $t5, 0x0($t0)
    ctx->r13 = MEM_W(ctx->r8, 0X0);
    // 0x80276DF8: nop

    // 0x80276DFC: lwc1        $f2, 0x90($t5)
    ctx->f2.u32l = MEM_W(ctx->r13, 0X90);
    // 0x80276E00: nop

    // 0x80276E04: c.lt.s      $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f0.fl < ctx->f2.fl;
    // 0x80276E08: nop

    // 0x80276E0C: bc1f        L_80276E28
    if (!c1cs) {
        // 0x80276E10: nop
    
            goto L_80276E28;
    }
    // 0x80276E10: nop

    // 0x80276E14: addiu       $v1, $a0, 0x1
    ctx->r3 = ADD32(ctx->r4, 0X1);
    // 0x80276E18: sll         $t6, $v1, 16
    ctx->r14 = S32(ctx->r3 << 16);
    // 0x80276E1C: sra         $v1, $t6, 16
    ctx->r3 = S32(SIGNED(ctx->r14) >> 16);
    // 0x80276E20: mov.s       $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    ctx->f0.fl = ctx->f2.fl;
    // 0x80276E24: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
L_80276E28:
    // 0x80276E28: lw          $t0, 0x8($a3)
    ctx->r8 = MEM_W(ctx->r7, 0X8);
    // 0x80276E2C: nop

    // 0x80276E30: lw          $t8, 0x4($t0)
    ctx->r24 = MEM_W(ctx->r8, 0X4);
    // 0x80276E34: nop

    // 0x80276E38: lbu         $t9, 0x6($t8)
    ctx->r25 = MEM_BU(ctx->r24, 0X6);
    // 0x80276E3C: nop

    // 0x80276E40: andi        $t2, $t9, 0x8
    ctx->r10 = ctx->r25 & 0X8;
    // 0x80276E44: beq         $t2, $zero, L_80276E80
    if (ctx->r10 == 0) {
        // 0x80276E48: nop
    
            goto L_80276E80;
    }
    // 0x80276E48: nop

    // 0x80276E4C: lw          $t3, 0x0($t0)
    ctx->r11 = MEM_W(ctx->r8, 0X0);
    // 0x80276E50: nop

    // 0x80276E54: lwc1        $f2, 0x90($t3)
    ctx->f2.u32l = MEM_W(ctx->r11, 0X90);
    // 0x80276E58: nop

    // 0x80276E5C: c.lt.s      $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f0.fl < ctx->f2.fl;
    // 0x80276E60: nop

    // 0x80276E64: bc1f        L_80276E80
    if (!c1cs) {
        // 0x80276E68: nop
    
            goto L_80276E80;
    }
    // 0x80276E68: nop

    // 0x80276E6C: addiu       $v1, $a0, 0x2
    ctx->r3 = ADD32(ctx->r4, 0X2);
    // 0x80276E70: sll         $t4, $v1, 16
    ctx->r12 = S32(ctx->r3 << 16);
    // 0x80276E74: sra         $v1, $t4, 16
    ctx->r3 = S32(SIGNED(ctx->r12) >> 16);
    // 0x80276E78: mov.s       $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    ctx->f0.fl = ctx->f2.fl;
    // 0x80276E7C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
L_80276E80:
    // 0x80276E80: lw          $t0, 0xC($a3)
    ctx->r8 = MEM_W(ctx->r7, 0XC);
    // 0x80276E84: nop

    // 0x80276E88: lw          $t6, 0x4($t0)
    ctx->r14 = MEM_W(ctx->r8, 0X4);
    // 0x80276E8C: nop

    // 0x80276E90: lbu         $t7, 0x6($t6)
    ctx->r15 = MEM_BU(ctx->r14, 0X6);
    // 0x80276E94: nop

    // 0x80276E98: andi        $t8, $t7, 0x8
    ctx->r24 = ctx->r15 & 0X8;
    // 0x80276E9C: beq         $t8, $zero, L_80276ED8
    if (ctx->r24 == 0) {
        // 0x80276EA0: nop
    
            goto L_80276ED8;
    }
    // 0x80276EA0: nop

    // 0x80276EA4: lw          $t9, 0x0($t0)
    ctx->r25 = MEM_W(ctx->r8, 0X0);
    // 0x80276EA8: nop

    // 0x80276EAC: lwc1        $f2, 0x90($t9)
    ctx->f2.u32l = MEM_W(ctx->r25, 0X90);
    // 0x80276EB0: nop

    // 0x80276EB4: c.lt.s      $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f0.fl < ctx->f2.fl;
    // 0x80276EB8: nop

    // 0x80276EBC: bc1f        L_80276ED8
    if (!c1cs) {
        // 0x80276EC0: nop
    
            goto L_80276ED8;
    }
    // 0x80276EC0: nop

    // 0x80276EC4: addiu       $v1, $a0, 0x3
    ctx->r3 = ADD32(ctx->r4, 0X3);
    // 0x80276EC8: sll         $t2, $v1, 16
    ctx->r10 = S32(ctx->r3 << 16);
    // 0x80276ECC: sra         $v1, $t2, 16
    ctx->r3 = S32(SIGNED(ctx->r10) >> 16);
    // 0x80276ED0: mov.s       $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    ctx->f0.fl = ctx->f2.fl;
    // 0x80276ED4: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
L_80276ED8:
    // 0x80276ED8: addiu       $a0, $a0, 0x4
    ctx->r4 = ADD32(ctx->r4, 0X4);
    // 0x80276EDC: bne         $a0, $a1, L_80276D78
    if (ctx->r4 != ctx->r5) {
            // 0x80276EE0: addiu       $a3, $a3, 0x10
    ctx->r7 = ADD32(ctx->r7, 0X10);
    ovl_8024B800_func_80276D78(rdram, ctx);
    return;
    }
    // 0x80276EE0: addiu       $a3, $a3, 0x10
    ctx->r7 = ADD32(ctx->r7, 0X10);
    // 0x80276EE4: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    // 0x80276EE8: jr          $ra
    // 0x80276EEC: nop

    return;
    // 0x80276EEC: nop

;}
RECOMP_FUNC void ovl_8024B800_func_80276E4C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
L_80276D78:
    // 0x80276E4C: lw          $t3, 0x0($t0)
    ctx->r11 = MEM_W(ctx->r8, 0X0);
    // 0x80276E50: nop

    // 0x80276E54: lwc1        $f2, 0x90($t3)
    ctx->f2.u32l = MEM_W(ctx->r11, 0X90);
    // 0x80276E58: nop

    // 0x80276E5C: c.lt.s      $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f0.fl < ctx->f2.fl;
    // 0x80276E60: nop

    // 0x80276E64: bc1f        L_80276E80
    if (!c1cs) {
        // 0x80276E68: nop
    
            goto L_80276E80;
    }
    // 0x80276E68: nop

    // 0x80276E6C: addiu       $v1, $a0, 0x2
    ctx->r3 = ADD32(ctx->r4, 0X2);
    // 0x80276E70: sll         $t4, $v1, 16
    ctx->r12 = S32(ctx->r3 << 16);
    // 0x80276E74: sra         $v1, $t4, 16
    ctx->r3 = S32(SIGNED(ctx->r12) >> 16);
    // 0x80276E78: mov.s       $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    ctx->f0.fl = ctx->f2.fl;
    // 0x80276E7C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
L_80276E80:
    // 0x80276E80: lw          $t0, 0xC($a3)
    ctx->r8 = MEM_W(ctx->r7, 0XC);
    // 0x80276E84: nop

    // 0x80276E88: lw          $t6, 0x4($t0)
    ctx->r14 = MEM_W(ctx->r8, 0X4);
    // 0x80276E8C: nop

    // 0x80276E90: lbu         $t7, 0x6($t6)
    ctx->r15 = MEM_BU(ctx->r14, 0X6);
    // 0x80276E94: nop

    // 0x80276E98: andi        $t8, $t7, 0x8
    ctx->r24 = ctx->r15 & 0X8;
    // 0x80276E9C: beq         $t8, $zero, L_80276ED8
    if (ctx->r24 == 0) {
        // 0x80276EA0: nop
    
            goto L_80276ED8;
    }
    // 0x80276EA0: nop

    // 0x80276EA4: lw          $t9, 0x0($t0)
    ctx->r25 = MEM_W(ctx->r8, 0X0);
    // 0x80276EA8: nop

    // 0x80276EAC: lwc1        $f2, 0x90($t9)
    ctx->f2.u32l = MEM_W(ctx->r25, 0X90);
    // 0x80276EB0: nop

    // 0x80276EB4: c.lt.s      $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f0.fl < ctx->f2.fl;
    // 0x80276EB8: nop

    // 0x80276EBC: bc1f        L_80276ED8
    if (!c1cs) {
        // 0x80276EC0: nop
    
            goto L_80276ED8;
    }
    // 0x80276EC0: nop

    // 0x80276EC4: addiu       $v1, $a0, 0x3
    ctx->r3 = ADD32(ctx->r4, 0X3);
    // 0x80276EC8: sll         $t2, $v1, 16
    ctx->r10 = S32(ctx->r3 << 16);
    // 0x80276ECC: sra         $v1, $t2, 16
    ctx->r3 = S32(SIGNED(ctx->r10) >> 16);
    // 0x80276ED0: mov.s       $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    ctx->f0.fl = ctx->f2.fl;
    // 0x80276ED4: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
L_80276ED8:
    // 0x80276ED8: addiu       $a0, $a0, 0x4
    ctx->r4 = ADD32(ctx->r4, 0X4);
    // 0x80276EDC: bne         $a0, $a1, L_80276D78
    if (ctx->r4 != ctx->r5) {
            // 0x80276EE0: addiu       $a3, $a3, 0x10
    ctx->r7 = ADD32(ctx->r7, 0X10);
    ovl_8024B800_func_80276D78(rdram, ctx);
    return;
    }
    // 0x80276EE0: addiu       $a3, $a3, 0x10
    ctx->r7 = ADD32(ctx->r7, 0X10);
    // 0x80276EE4: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    // 0x80276EE8: jr          $ra
    // 0x80276EEC: nop

    return;
    // 0x80276EEC: nop

;}
RECOMP_FUNC void ovl_8024B800_func_80276E78(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
L_80276D78:
    // 0x80276E78: mov.s       $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    ctx->f0.fl = ctx->f2.fl;
    // 0x80276E7C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80276E80: lw          $t0, 0xC($a3)
    ctx->r8 = MEM_W(ctx->r7, 0XC);
    // 0x80276E84: nop

    // 0x80276E88: lw          $t6, 0x4($t0)
    ctx->r14 = MEM_W(ctx->r8, 0X4);
    // 0x80276E8C: nop

    // 0x80276E90: lbu         $t7, 0x6($t6)
    ctx->r15 = MEM_BU(ctx->r14, 0X6);
    // 0x80276E94: nop

    // 0x80276E98: andi        $t8, $t7, 0x8
    ctx->r24 = ctx->r15 & 0X8;
    // 0x80276E9C: beq         $t8, $zero, L_80276ED8
    if (ctx->r24 == 0) {
        // 0x80276EA0: nop
    
            goto L_80276ED8;
    }
    // 0x80276EA0: nop

    // 0x80276EA4: lw          $t9, 0x0($t0)
    ctx->r25 = MEM_W(ctx->r8, 0X0);
    // 0x80276EA8: nop

    // 0x80276EAC: lwc1        $f2, 0x90($t9)
    ctx->f2.u32l = MEM_W(ctx->r25, 0X90);
    // 0x80276EB0: nop

    // 0x80276EB4: c.lt.s      $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f0.fl < ctx->f2.fl;
    // 0x80276EB8: nop

    // 0x80276EBC: bc1f        L_80276ED8
    if (!c1cs) {
        // 0x80276EC0: nop
    
            goto L_80276ED8;
    }
    // 0x80276EC0: nop

    // 0x80276EC4: addiu       $v1, $a0, 0x3
    ctx->r3 = ADD32(ctx->r4, 0X3);
    // 0x80276EC8: sll         $t2, $v1, 16
    ctx->r10 = S32(ctx->r3 << 16);
    // 0x80276ECC: sra         $v1, $t2, 16
    ctx->r3 = S32(SIGNED(ctx->r10) >> 16);
    // 0x80276ED0: mov.s       $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    ctx->f0.fl = ctx->f2.fl;
    // 0x80276ED4: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
L_80276ED8:
    // 0x80276ED8: addiu       $a0, $a0, 0x4
    ctx->r4 = ADD32(ctx->r4, 0X4);
    // 0x80276EDC: bne         $a0, $a1, L_80276D78
    if (ctx->r4 != ctx->r5) {
            // 0x80276EE0: addiu       $a3, $a3, 0x10
    ctx->r7 = ADD32(ctx->r7, 0X10);
    ovl_8024B800_func_80276D78(rdram, ctx);
    return;
    }
    // 0x80276EE0: addiu       $a3, $a3, 0x10
    ctx->r7 = ADD32(ctx->r7, 0X10);
    // 0x80276EE4: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    // 0x80276EE8: jr          $ra
    // 0x80276EEC: nop

    return;
    // 0x80276EEC: nop

;}
RECOMP_FUNC void ovl_8024B800_func_80276EAC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
L_80276D78:
    // 0x80276EAC: lwc1        $f2, 0x90($t9)
    ctx->f2.u32l = MEM_W(ctx->r25, 0X90);
    // 0x80276EB0: nop

    // 0x80276EB4: c.lt.s      $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f0.fl < ctx->f2.fl;
    // 0x80276EB8: nop

    // 0x80276EBC: bc1f        L_80276ED8
    if (!c1cs) {
        // 0x80276EC0: nop
    
            goto L_80276ED8;
    }
    // 0x80276EC0: nop

    // 0x80276EC4: addiu       $v1, $a0, 0x3
    ctx->r3 = ADD32(ctx->r4, 0X3);
    // 0x80276EC8: sll         $t2, $v1, 16
    ctx->r10 = S32(ctx->r3 << 16);
    // 0x80276ECC: sra         $v1, $t2, 16
    ctx->r3 = S32(SIGNED(ctx->r10) >> 16);
    // 0x80276ED0: mov.s       $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    ctx->f0.fl = ctx->f2.fl;
    // 0x80276ED4: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
L_80276ED8:
    // 0x80276ED8: addiu       $a0, $a0, 0x4
    ctx->r4 = ADD32(ctx->r4, 0X4);
    // 0x80276EDC: bne         $a0, $a1, L_80276D78
    if (ctx->r4 != ctx->r5) {
            // 0x80276EE0: addiu       $a3, $a3, 0x10
    ctx->r7 = ADD32(ctx->r7, 0X10);
    ovl_8024B800_func_80276D78(rdram, ctx);
    return;
    }
    // 0x80276EE0: addiu       $a3, $a3, 0x10
    ctx->r7 = ADD32(ctx->r7, 0X10);
    // 0x80276EE4: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    // 0x80276EE8: jr          $ra
    // 0x80276EEC: nop

    return;
    // 0x80276EEC: nop

;}
RECOMP_FUNC void ovl_8024B800_func_80276EF0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80276EF0: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x80276EF4: addiu       $v0, $v0, 0xB1C
    ctx->r2 = ADD32(ctx->r2, 0XB1C);
    // 0x80276EF8: lw          $t6, 0x0($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X0);
    // 0x80276EFC: mtc1        $a2, $f12
    ctx->f12.u32l = ctx->r6;
    // 0x80276F00: sw          $a0, 0x0($t6)
    MEM_W(0X0, ctx->r14) = ctx->r4;
    // 0x80276F04: lw          $t7, 0x0($v0)
    ctx->r15 = MEM_W(ctx->r2, 0X0);
    // 0x80276F08: nop

    // 0x80276F0C: sw          $a1, 0x4($t7)
    MEM_W(0X4, ctx->r15) = ctx->r5;
    // 0x80276F10: lw          $t8, 0x0($v0)
    ctx->r24 = MEM_W(ctx->r2, 0X0);
    // 0x80276F14: nop

    // 0x80276F18: swc1        $f12, 0x8($t8)
    MEM_W(0X8, ctx->r24) = ctx->f12.u32l;
    // 0x80276F1C: lw          $t9, 0x0($v0)
    ctx->r25 = MEM_W(ctx->r2, 0X0);
    // 0x80276F20: nop

    // 0x80276F24: addiu       $t0, $t9, 0xC
    ctx->r8 = ADD32(ctx->r25, 0XC);
    // 0x80276F28: sw          $t0, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r8;
    // 0x80276F2C: jr          $ra
    // 0x80276F30: sw          $zero, 0x0($t0)
    MEM_W(0X0, ctx->r8) = 0;
    return;
    // 0x80276F30: sw          $zero, 0x0($t0)
    MEM_W(0X0, ctx->r8) = 0;
;}
RECOMP_FUNC void ovl_8024B800_func_80276F34(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80276F34: addiu       $sp, $sp, -0x98
    ctx->r29 = ADD32(ctx->r29, -0X98);
    // 0x80276F38: lui         $t6, 0x8012
    ctx->r14 = S32(0X8012 << 16);
    // 0x80276F3C: lhu         $t6, 0xB78($t6)
    ctx->r14 = MEM_HU(ctx->r14, 0XB78);
    // 0x80276F40: swc1        $f20, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f20.u32l;
    // 0x80276F44: mtc1        $a2, $f20
    ctx->f20.u32l = ctx->r6;
    // 0x80276F48: mtc1        $a1, $f14
    ctx->f14.u32l = ctx->r5;
    // 0x80276F4C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80276F50: swc1        $f21, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x80276F54: sw          $a0, 0x98($sp)
    MEM_W(0X98, ctx->r29) = ctx->r4;
    // 0x80276F58: bne         $t6, $zero, L_80277104
    if (ctx->r14 != 0) {
        // 0x80276F5C: sw          $a3, 0xA4($sp)
        MEM_W(0XA4, ctx->r29) = ctx->r7;
            goto L_80277104;
    }
    // 0x80276F5C: sw          $a3, 0xA4($sp)
    MEM_W(0XA4, ctx->r29) = ctx->r7;
    // 0x80276F60: lui         $v1, 0x8009
    ctx->r3 = S32(0X8009 << 16);
    // 0x80276F64: lw          $v1, 0x3B20($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X3B20);
    // 0x80276F68: lw          $t4, 0x98($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X98);
    // 0x80276F6C: lw          $v0, 0x88($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X88);
    // 0x80276F70: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x80276F74: beq         $v0, $zero, L_80276FF8
    if (ctx->r2 == 0) {
        // 0x80276F78: lui         $at, 0x8028
        ctx->r1 = S32(0X8028 << 16);
            goto L_80276FF8;
    }
    // 0x80276F78: lui         $at, 0x8028
    ctx->r1 = S32(0X8028 << 16);
    // 0x80276F7C: lhu         $t8, 0x12($a0)
    ctx->r24 = MEM_HU(ctx->r4, 0X12);
    // 0x80276F80: nop

    // 0x80276F84: andi        $t9, $t8, 0x1
    ctx->r25 = ctx->r24 & 0X1;
    // 0x80276F88: beq         $t9, $zero, L_80277108
    if (ctx->r25 == 0) {
        // 0x80276F8C: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_80277108;
    }
    // 0x80276F8C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80276F90: lhu         $t1, 0x14($v0)
    ctx->r9 = MEM_HU(ctx->r2, 0X14);
    // 0x80276F94: nop

    // 0x80276F98: andi        $t2, $t1, 0x8000
    ctx->r10 = ctx->r9 & 0X8000;
    // 0x80276F9C: bne         $t2, $zero, L_80277108
    if (ctx->r10 != 0) {
        // 0x80276FA0: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_80277108;
    }
    // 0x80276FA0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80276FA4: lwc1        $f4, 0x4C($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X4C);
    // 0x80276FA8: lwc1        $f6, 0x4C($a0)
    ctx->f6.u32l = MEM_W(ctx->r4, 0X4C);
    // 0x80276FAC: lwc1        $f8, 0x44($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X44);
    // 0x80276FB0: sub.s       $f2, $f4, $f6
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f2.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x80276FB4: lwc1        $f10, 0x44($a0)
    ctx->f10.u32l = MEM_W(ctx->r4, 0X44);
    // 0x80276FB8: mul.s       $f4, $f2, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f4.fl = MUL_S(ctx->f2.fl, ctx->f2.fl);
    // 0x80276FBC: sub.s       $f12, $f8, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f12.fl = ctx->f8.fl - ctx->f10.fl;
    // 0x80276FC0: lwc1        $f10, 0xA4($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0XA4);
    // 0x80276FC4: lw          $a2, 0xA8($sp)
    ctx->r6 = MEM_W(ctx->r29, 0XA8);
    // 0x80276FC8: mul.s       $f6, $f12, $f12
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f6.fl = MUL_S(ctx->f12.fl, ctx->f12.fl);
    // 0x80276FCC: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x80276FD0: mul.s       $f4, $f10, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = MUL_S(ctx->f10.fl, ctx->f10.fl);
    // 0x80276FD4: c.lt.s      $f8, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f8.fl < ctx->f4.fl;
    // 0x80276FD8: nop

    // 0x80276FDC: bc1f        L_80277108
    if (!c1cs) {
        // 0x80276FE0: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_80277108;
    }
    // 0x80276FE0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80276FE4: lw          $a1, 0x8C($v1)
    ctx->r5 = MEM_W(ctx->r3, 0X8C);
    // 0x80276FE8: jal         0x802503E0
    // 0x80276FEC: nop

    ovl_8024B800_func_802503E0(rdram, ctx);
        goto after_0;
    // 0x80276FEC: nop

    after_0:
    // 0x80276FF0: b           L_80277108
    // 0x80276FF4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_80277108;
    // 0x80276FF4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_80276FF8:
    // 0x80276FF8: lw          $t5, 0xC8($t4)
    ctx->r13 = MEM_W(ctx->r12, 0XC8);
    // 0x80276FFC: lwc1        $f18, -0x1C68($at)
    ctx->f18.u32l = MEM_W(ctx->r1, -0X1C68);
    // 0x80277000: lw          $t6, 0x24($t5)
    ctx->r14 = MEM_W(ctx->r13, 0X24);
    // 0x80277004: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x80277008: lw          $v0, 0x18($t6)
    ctx->r2 = MEM_W(ctx->r14, 0X18);
    // 0x8027700C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x80277010: addiu       $a2, $sp, 0x2C
    ctx->r6 = ADD32(ctx->r29, 0X2C);
    // 0x80277014: or          $t0, $v0, $zero
    ctx->r8 = ctx->r2 | 0;
L_80277018:
    // 0x80277018: lhu         $t7, 0xC($v0)
    ctx->r15 = MEM_HU(ctx->r2, 0XC);
    // 0x8027701C: nop

    // 0x80277020: beq         $t7, $zero, L_80277098
    if (ctx->r15 == 0) {
        // 0x80277024: nop
    
            goto L_80277098;
    }
    // 0x80277024: nop

    // 0x80277028: lhu         $t8, 0x14($v0)
    ctx->r24 = MEM_HU(ctx->r2, 0X14);
    // 0x8027702C: nop

    // 0x80277030: andi        $t9, $t8, 0x8000
    ctx->r25 = ctx->r24 & 0X8000;
    // 0x80277034: bne         $t9, $zero, L_80277098
    if (ctx->r25 != 0) {
        // 0x80277038: nop
    
            goto L_80277098;
    }
    // 0x80277038: nop

    // 0x8027703C: lwc1        $f6, 0x48($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0X48);
    // 0x80277040: nop

    // 0x80277044: c.eq.s      $f16, $f6
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f16.fl == ctx->f6.fl;
    // 0x80277048: nop

    // 0x8027704C: bc1f        L_80277098
    if (!c1cs) {
        // 0x80277050: nop
    
            goto L_80277098;
    }
    // 0x80277050: nop

    // 0x80277054: lwc1        $f10, 0x4C($v0)
    ctx->f10.u32l = MEM_W(ctx->r2, 0X4C);
    // 0x80277058: lwc1        $f8, 0x44($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X44);
    // 0x8027705C: sub.s       $f2, $f10, $f14
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f2.fl = ctx->f10.fl - ctx->f14.fl;
    // 0x80277060: sll         $t1, $a3, 3
    ctx->r9 = S32(ctx->r7 << 3);
    // 0x80277064: mul.s       $f4, $f2, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f4.fl = MUL_S(ctx->f2.fl, ctx->f2.fl);
    // 0x80277068: sub.s       $f12, $f8, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f12.fl = ctx->f8.fl - ctx->f20.fl;
    // 0x8027706C: addu        $v1, $a2, $t1
    ctx->r3 = ADD32(ctx->r6, ctx->r9);
    // 0x80277070: mul.s       $f6, $f12, $f12
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f6.fl = MUL_S(ctx->f12.fl, ctx->f12.fl);
    // 0x80277074: add.s       $f0, $f4, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f0.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x80277078: c.lt.s      $f0, $f18
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f0.fl < ctx->f18.fl;
    // 0x8027707C: swc1        $f0, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->f0.u32l;
    // 0x80277080: bc1f        L_80277098
    if (!c1cs) {
        // 0x80277084: nop
    
            goto L_80277098;
    }
    // 0x80277084: nop

    // 0x80277088: addiu       $a3, $a3, 0x1
    ctx->r7 = ADD32(ctx->r7, 0X1);
    // 0x8027708C: andi        $t2, $a3, 0xFFFF
    ctx->r10 = ctx->r7 & 0XFFFF;
    // 0x80277090: sh          $a0, 0x0($v1)
    MEM_H(0X0, ctx->r3) = ctx->r4;
    // 0x80277094: or          $a3, $t2, $zero
    ctx->r7 = ctx->r10 | 0;
L_80277098:
    // 0x80277098: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    // 0x8027709C: andi        $t3, $a0, 0xFFFF
    ctx->r11 = ctx->r4 & 0XFFFF;
    // 0x802770A0: slti        $at, $t3, 0xB
    ctx->r1 = SIGNED(ctx->r11) < 0XB ? 1 : 0;
    // 0x802770A4: or          $a0, $t3, $zero
    ctx->r4 = ctx->r11 | 0;
    // 0x802770A8: bne         $at, $zero, L_80277018
    if (ctx->r1 != 0) {
        // 0x802770AC: addiu       $v0, $v0, 0xF8
        ctx->r2 = ADD32(ctx->r2, 0XF8);
            goto L_80277018;
    }
    // 0x802770AC: addiu       $v0, $v0, 0xF8
    ctx->r2 = ADD32(ctx->r2, 0XF8);
    // 0x802770B0: beq         $a3, $zero, L_80277104
    if (ctx->r7 == 0) {
        // 0x802770B4: or          $a0, $zero, $zero
        ctx->r4 = 0 | 0;
            goto L_80277104;
    }
    // 0x802770B4: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x802770B8: addiu       $a1, $a3, -0x1
    ctx->r5 = ADD32(ctx->r7, -0X1);
    // 0x802770BC: sll         $t4, $a1, 16
    ctx->r12 = S32(ctx->r5 << 16);
    // 0x802770C0: sra         $a1, $t4, 16
    ctx->r5 = S32(SIGNED(ctx->r12) >> 16);
    // 0x802770C4: jal         0x8005DE74
    // 0x802770C8: sw          $t0, 0x84($sp)
    MEM_W(0X84, ctx->r29) = ctx->r8;
    func_8005DE74(rdram, ctx);
        goto after_1;
    // 0x802770C8: sw          $t0, 0x84($sp)
    MEM_W(0X84, ctx->r29) = ctx->r8;
    after_1:
    // 0x802770CC: lwc1        $f0, 0xA4($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0XA4);
    // 0x802770D0: lwc1        $f10, 0x30($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X30);
    // 0x802770D4: mul.s       $f8, $f0, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = MUL_S(ctx->f0.fl, ctx->f0.fl);
    // 0x802770D8: lhu         $t6, 0x2C($sp)
    ctx->r14 = MEM_HU(ctx->r29, 0X2C);
    // 0x802770DC: lw          $t0, 0x84($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X84);
    // 0x802770E0: lw          $a0, 0x98($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X98);
    // 0x802770E4: c.lt.s      $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f10.fl < ctx->f8.fl;
    // 0x802770E8: sll         $t7, $t6, 5
    ctx->r15 = S32(ctx->r14 << 5);
    // 0x802770EC: bc1f        L_80277104
    if (!c1cs) {
        // 0x802770F0: subu        $t7, $t7, $t6
        ctx->r15 = SUB32(ctx->r15, ctx->r14);
            goto L_80277104;
    }
    // 0x802770F0: subu        $t7, $t7, $t6
    ctx->r15 = SUB32(ctx->r15, ctx->r14);
    // 0x802770F4: sll         $t7, $t7, 3
    ctx->r15 = S32(ctx->r15 << 3);
    // 0x802770F8: lw          $a2, 0xA8($sp)
    ctx->r6 = MEM_W(ctx->r29, 0XA8);
    // 0x802770FC: jal         0x802503E0
    // 0x80277100: addu        $a1, $t7, $t0
    ctx->r5 = ADD32(ctx->r15, ctx->r8);
    ovl_8024B800_func_802503E0(rdram, ctx);
        goto after_2;
    // 0x80277100: addu        $a1, $t7, $t0
    ctx->r5 = ADD32(ctx->r15, ctx->r8);
    after_2:
L_80277104:
    // 0x80277104: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_80277108:
    // 0x80277108: lwc1        $f21, 0x10($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X10);
    // 0x8027710C: lwc1        $f20, 0x14($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X14);
    // 0x80277110: jr          $ra
    // 0x80277114: addiu       $sp, $sp, 0x98
    ctx->r29 = ADD32(ctx->r29, 0X98);
    return;
    // 0x80277114: addiu       $sp, $sp, 0x98
    ctx->r29 = ADD32(ctx->r29, 0X98);
;}
RECOMP_FUNC void ovl_8024B800_func_80276FB0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80276FB0: sub.s       $f2, $f4, $f6
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f2.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x80276FB4: lwc1        $f10, 0x44($a0)
    ctx->f10.u32l = MEM_W(ctx->r4, 0X44);
    // 0x80276FB8: mul.s       $f4, $f2, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f4.fl = MUL_S(ctx->f2.fl, ctx->f2.fl);
    // 0x80276FBC: sub.s       $f12, $f8, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f12.fl = ctx->f8.fl - ctx->f10.fl;
    // 0x80276FC0: lwc1        $f10, 0xA4($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0XA4);
    // 0x80276FC4: lw          $a2, 0xA8($sp)
    ctx->r6 = MEM_W(ctx->r29, 0XA8);
    // 0x80276FC8: mul.s       $f6, $f12, $f12
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f6.fl = MUL_S(ctx->f12.fl, ctx->f12.fl);
    // 0x80276FCC: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x80276FD0: mul.s       $f4, $f10, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = MUL_S(ctx->f10.fl, ctx->f10.fl);
    // 0x80276FD4: c.lt.s      $f8, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f8.fl < ctx->f4.fl;
    // 0x80276FD8: nop

    // 0x80276FDC: bc1f        L_80277108
    if (!c1cs) {
        // 0x80276FE0: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_80277108;
    }
    // 0x80276FE0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80276FE4: lw          $a1, 0x8C($v1)
    ctx->r5 = MEM_W(ctx->r3, 0X8C);
    // 0x80276FE8: jal         0x802503E0
    // 0x80276FEC: nop

    ovl_8024B800_func_802503E0(rdram, ctx);
        goto after_0;
    // 0x80276FEC: nop

    after_0:
    // 0x80276FF0: b           L_80277108
    // 0x80276FF4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_80277108;
    // 0x80276FF4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80276FF8: lw          $t5, 0xC8($t4)
    ctx->r13 = MEM_W(ctx->r12, 0XC8);
    // 0x80276FFC: lwc1        $f18, -0x1C68($at)
    ctx->f18.u32l = MEM_W(ctx->r1, -0X1C68);
    // 0x80277000: lw          $t6, 0x24($t5)
    ctx->r14 = MEM_W(ctx->r13, 0X24);
    // 0x80277004: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x80277008: lw          $v0, 0x18($t6)
    ctx->r2 = MEM_W(ctx->r14, 0X18);
    // 0x8027700C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x80277010: addiu       $a2, $sp, 0x2C
    ctx->r6 = ADD32(ctx->r29, 0X2C);
    // 0x80277014: or          $t0, $v0, $zero
    ctx->r8 = ctx->r2 | 0;
L_80277018:
    // 0x80277018: lhu         $t7, 0xC($v0)
    ctx->r15 = MEM_HU(ctx->r2, 0XC);
    // 0x8027701C: nop

    // 0x80277020: beq         $t7, $zero, L_80277098
    if (ctx->r15 == 0) {
        // 0x80277024: nop
    
            goto L_80277098;
    }
    // 0x80277024: nop

    // 0x80277028: lhu         $t8, 0x14($v0)
    ctx->r24 = MEM_HU(ctx->r2, 0X14);
    // 0x8027702C: nop

    // 0x80277030: andi        $t9, $t8, 0x8000
    ctx->r25 = ctx->r24 & 0X8000;
    // 0x80277034: bne         $t9, $zero, L_80277098
    if (ctx->r25 != 0) {
        // 0x80277038: nop
    
            goto L_80277098;
    }
    // 0x80277038: nop

    // 0x8027703C: lwc1        $f6, 0x48($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0X48);
    // 0x80277040: nop

    // 0x80277044: c.eq.s      $f16, $f6
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f16.fl == ctx->f6.fl;
    // 0x80277048: nop

    // 0x8027704C: bc1f        L_80277098
    if (!c1cs) {
        // 0x80277050: nop
    
            goto L_80277098;
    }
    // 0x80277050: nop

    // 0x80277054: lwc1        $f10, 0x4C($v0)
    ctx->f10.u32l = MEM_W(ctx->r2, 0X4C);
    // 0x80277058: lwc1        $f8, 0x44($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X44);
    // 0x8027705C: sub.s       $f2, $f10, $f14
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f2.fl = ctx->f10.fl - ctx->f14.fl;
    // 0x80277060: sll         $t1, $a3, 3
    ctx->r9 = S32(ctx->r7 << 3);
    // 0x80277064: mul.s       $f4, $f2, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f4.fl = MUL_S(ctx->f2.fl, ctx->f2.fl);
    // 0x80277068: sub.s       $f12, $f8, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f12.fl = ctx->f8.fl - ctx->f20.fl;
    // 0x8027706C: addu        $v1, $a2, $t1
    ctx->r3 = ADD32(ctx->r6, ctx->r9);
    // 0x80277070: mul.s       $f6, $f12, $f12
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f6.fl = MUL_S(ctx->f12.fl, ctx->f12.fl);
    // 0x80277074: add.s       $f0, $f4, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f0.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x80277078: c.lt.s      $f0, $f18
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f0.fl < ctx->f18.fl;
    // 0x8027707C: swc1        $f0, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->f0.u32l;
    // 0x80277080: bc1f        L_80277098
    if (!c1cs) {
        // 0x80277084: nop
    
            goto L_80277098;
    }
    // 0x80277084: nop

    // 0x80277088: addiu       $a3, $a3, 0x1
    ctx->r7 = ADD32(ctx->r7, 0X1);
    // 0x8027708C: andi        $t2, $a3, 0xFFFF
    ctx->r10 = ctx->r7 & 0XFFFF;
    // 0x80277090: sh          $a0, 0x0($v1)
    MEM_H(0X0, ctx->r3) = ctx->r4;
    // 0x80277094: or          $a3, $t2, $zero
    ctx->r7 = ctx->r10 | 0;
L_80277098:
    // 0x80277098: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    // 0x8027709C: andi        $t3, $a0, 0xFFFF
    ctx->r11 = ctx->r4 & 0XFFFF;
    // 0x802770A0: slti        $at, $t3, 0xB
    ctx->r1 = SIGNED(ctx->r11) < 0XB ? 1 : 0;
    // 0x802770A4: or          $a0, $t3, $zero
    ctx->r4 = ctx->r11 | 0;
    // 0x802770A8: bne         $at, $zero, L_80277018
    if (ctx->r1 != 0) {
        // 0x802770AC: addiu       $v0, $v0, 0xF8
        ctx->r2 = ADD32(ctx->r2, 0XF8);
            goto L_80277018;
    }
    // 0x802770AC: addiu       $v0, $v0, 0xF8
    ctx->r2 = ADD32(ctx->r2, 0XF8);
    // 0x802770B0: beq         $a3, $zero, L_80277104
    if (ctx->r7 == 0) {
        // 0x802770B4: or          $a0, $zero, $zero
        ctx->r4 = 0 | 0;
            goto L_80277104;
    }
    // 0x802770B4: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x802770B8: addiu       $a1, $a3, -0x1
    ctx->r5 = ADD32(ctx->r7, -0X1);
    // 0x802770BC: sll         $t4, $a1, 16
    ctx->r12 = S32(ctx->r5 << 16);
    // 0x802770C0: sra         $a1, $t4, 16
    ctx->r5 = S32(SIGNED(ctx->r12) >> 16);
    // 0x802770C4: jal         0x8005DE74
    // 0x802770C8: sw          $t0, 0x84($sp)
    MEM_W(0X84, ctx->r29) = ctx->r8;
    func_8005DE74(rdram, ctx);
        goto after_1;
    // 0x802770C8: sw          $t0, 0x84($sp)
    MEM_W(0X84, ctx->r29) = ctx->r8;
    after_1:
    // 0x802770CC: lwc1        $f0, 0xA4($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0XA4);
    // 0x802770D0: lwc1        $f10, 0x30($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X30);
    // 0x802770D4: mul.s       $f8, $f0, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = MUL_S(ctx->f0.fl, ctx->f0.fl);
    // 0x802770D8: lhu         $t6, 0x2C($sp)
    ctx->r14 = MEM_HU(ctx->r29, 0X2C);
    // 0x802770DC: lw          $t0, 0x84($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X84);
    // 0x802770E0: lw          $a0, 0x98($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X98);
    // 0x802770E4: c.lt.s      $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f10.fl < ctx->f8.fl;
    // 0x802770E8: sll         $t7, $t6, 5
    ctx->r15 = S32(ctx->r14 << 5);
    // 0x802770EC: bc1f        L_80277104
    if (!c1cs) {
        // 0x802770F0: subu        $t7, $t7, $t6
        ctx->r15 = SUB32(ctx->r15, ctx->r14);
            goto L_80277104;
    }
    // 0x802770F0: subu        $t7, $t7, $t6
    ctx->r15 = SUB32(ctx->r15, ctx->r14);
    // 0x802770F4: sll         $t7, $t7, 3
    ctx->r15 = S32(ctx->r15 << 3);
    // 0x802770F8: lw          $a2, 0xA8($sp)
    ctx->r6 = MEM_W(ctx->r29, 0XA8);
    // 0x802770FC: jal         0x802503E0
    // 0x80277100: addu        $a1, $t7, $t0
    ctx->r5 = ADD32(ctx->r15, ctx->r8);
    ovl_8024B800_func_802503E0(rdram, ctx);
        goto after_2;
    // 0x80277100: addu        $a1, $t7, $t0
    ctx->r5 = ADD32(ctx->r15, ctx->r8);
    after_2:
L_80277104:
    // 0x80277104: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_80277108:
    // 0x80277108: lwc1        $f21, 0x10($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X10);
    // 0x8027710C: lwc1        $f20, 0x14($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X14);
    // 0x80277110: jr          $ra
    // 0x80277114: addiu       $sp, $sp, 0x98
    ctx->r29 = ADD32(ctx->r29, 0X98);
    return;
    // 0x80277114: addiu       $sp, $sp, 0x98
    ctx->r29 = ADD32(ctx->r29, 0X98);
;}
RECOMP_FUNC void ovl_8024B800_func_80277018(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
L_80277018:
    // 0x80277018: lhu         $t7, 0xC($v0)
    ctx->r15 = MEM_HU(ctx->r2, 0XC);
    // 0x8027701C: nop

    // 0x80277020: beq         $t7, $zero, L_80277098
    if (ctx->r15 == 0) {
        // 0x80277024: nop
    
            goto L_80277098;
    }
    // 0x80277024: nop

    // 0x80277028: lhu         $t8, 0x14($v0)
    ctx->r24 = MEM_HU(ctx->r2, 0X14);
    // 0x8027702C: nop

    // 0x80277030: andi        $t9, $t8, 0x8000
    ctx->r25 = ctx->r24 & 0X8000;
    // 0x80277034: bne         $t9, $zero, L_80277098
    if (ctx->r25 != 0) {
        // 0x80277038: nop
    
            goto L_80277098;
    }
    // 0x80277038: nop

    // 0x8027703C: lwc1        $f6, 0x48($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0X48);
    // 0x80277040: nop

    // 0x80277044: c.eq.s      $f16, $f6
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f16.fl == ctx->f6.fl;
    // 0x80277048: nop

    // 0x8027704C: bc1f        L_80277098
    if (!c1cs) {
        // 0x80277050: nop
    
            goto L_80277098;
    }
    // 0x80277050: nop

    // 0x80277054: lwc1        $f10, 0x4C($v0)
    ctx->f10.u32l = MEM_W(ctx->r2, 0X4C);
    // 0x80277058: lwc1        $f8, 0x44($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X44);
    // 0x8027705C: sub.s       $f2, $f10, $f14
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f2.fl = ctx->f10.fl - ctx->f14.fl;
    // 0x80277060: sll         $t1, $a3, 3
    ctx->r9 = S32(ctx->r7 << 3);
    // 0x80277064: mul.s       $f4, $f2, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f4.fl = MUL_S(ctx->f2.fl, ctx->f2.fl);
    // 0x80277068: sub.s       $f12, $f8, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f12.fl = ctx->f8.fl - ctx->f20.fl;
    // 0x8027706C: addu        $v1, $a2, $t1
    ctx->r3 = ADD32(ctx->r6, ctx->r9);
    // 0x80277070: mul.s       $f6, $f12, $f12
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f6.fl = MUL_S(ctx->f12.fl, ctx->f12.fl);
    // 0x80277074: add.s       $f0, $f4, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f0.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x80277078: c.lt.s      $f0, $f18
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f0.fl < ctx->f18.fl;
    // 0x8027707C: swc1        $f0, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->f0.u32l;
    // 0x80277080: bc1f        L_80277098
    if (!c1cs) {
        // 0x80277084: nop
    
            goto L_80277098;
    }
    // 0x80277084: nop

    // 0x80277088: addiu       $a3, $a3, 0x1
    ctx->r7 = ADD32(ctx->r7, 0X1);
    // 0x8027708C: andi        $t2, $a3, 0xFFFF
    ctx->r10 = ctx->r7 & 0XFFFF;
    // 0x80277090: sh          $a0, 0x0($v1)
    MEM_H(0X0, ctx->r3) = ctx->r4;
    // 0x80277094: or          $a3, $t2, $zero
    ctx->r7 = ctx->r10 | 0;
L_80277098:
    // 0x80277098: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    // 0x8027709C: andi        $t3, $a0, 0xFFFF
    ctx->r11 = ctx->r4 & 0XFFFF;
    // 0x802770A0: slti        $at, $t3, 0xB
    ctx->r1 = SIGNED(ctx->r11) < 0XB ? 1 : 0;
    // 0x802770A4: or          $a0, $t3, $zero
    ctx->r4 = ctx->r11 | 0;
    // 0x802770A8: bne         $at, $zero, L_80277018
    if (ctx->r1 != 0) {
        // 0x802770AC: addiu       $v0, $v0, 0xF8
        ctx->r2 = ADD32(ctx->r2, 0XF8);
            goto L_80277018;
    }
    // 0x802770AC: addiu       $v0, $v0, 0xF8
    ctx->r2 = ADD32(ctx->r2, 0XF8);
    // 0x802770B0: beq         $a3, $zero, L_80277104
    if (ctx->r7 == 0) {
        // 0x802770B4: or          $a0, $zero, $zero
        ctx->r4 = 0 | 0;
            goto L_80277104;
    }
    // 0x802770B4: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x802770B8: addiu       $a1, $a3, -0x1
    ctx->r5 = ADD32(ctx->r7, -0X1);
    // 0x802770BC: sll         $t4, $a1, 16
    ctx->r12 = S32(ctx->r5 << 16);
    // 0x802770C0: sra         $a1, $t4, 16
    ctx->r5 = S32(SIGNED(ctx->r12) >> 16);
    // 0x802770C4: jal         0x8005DE74
    // 0x802770C8: sw          $t0, 0x84($sp)
    MEM_W(0X84, ctx->r29) = ctx->r8;
    func_8005DE74(rdram, ctx);
        goto after_0;
    // 0x802770C8: sw          $t0, 0x84($sp)
    MEM_W(0X84, ctx->r29) = ctx->r8;
    after_0:
    // 0x802770CC: lwc1        $f0, 0xA4($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0XA4);
    // 0x802770D0: lwc1        $f10, 0x30($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X30);
    // 0x802770D4: mul.s       $f8, $f0, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = MUL_S(ctx->f0.fl, ctx->f0.fl);
    // 0x802770D8: lhu         $t6, 0x2C($sp)
    ctx->r14 = MEM_HU(ctx->r29, 0X2C);
    // 0x802770DC: lw          $t0, 0x84($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X84);
    // 0x802770E0: lw          $a0, 0x98($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X98);
    // 0x802770E4: c.lt.s      $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f10.fl < ctx->f8.fl;
    // 0x802770E8: sll         $t7, $t6, 5
    ctx->r15 = S32(ctx->r14 << 5);
    // 0x802770EC: bc1f        L_80277104
    if (!c1cs) {
        // 0x802770F0: subu        $t7, $t7, $t6
        ctx->r15 = SUB32(ctx->r15, ctx->r14);
            goto L_80277104;
    }
    // 0x802770F0: subu        $t7, $t7, $t6
    ctx->r15 = SUB32(ctx->r15, ctx->r14);
    // 0x802770F4: sll         $t7, $t7, 3
    ctx->r15 = S32(ctx->r15 << 3);
    // 0x802770F8: lw          $a2, 0xA8($sp)
    ctx->r6 = MEM_W(ctx->r29, 0XA8);
    // 0x802770FC: jal         0x802503E0
    // 0x80277100: addu        $a1, $t7, $t0
    ctx->r5 = ADD32(ctx->r15, ctx->r8);
    ovl_8024B800_func_802503E0(rdram, ctx);
        goto after_1;
    // 0x80277100: addu        $a1, $t7, $t0
    ctx->r5 = ADD32(ctx->r15, ctx->r8);
    after_1:
L_80277104:
    // 0x80277104: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80277108: lwc1        $f21, 0x10($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X10);
    // 0x8027710C: lwc1        $f20, 0x14($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X14);
    // 0x80277110: jr          $ra
    // 0x80277114: addiu       $sp, $sp, 0x98
    ctx->r29 = ADD32(ctx->r29, 0X98);
    return;
    // 0x80277114: addiu       $sp, $sp, 0x98
    ctx->r29 = ADD32(ctx->r29, 0X98);
;}
RECOMP_FUNC void ovl_8024B800_func_8027708C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
L_80277018:
    // 0x8027708C: andi        $t2, $a3, 0xFFFF
    ctx->r10 = ctx->r7 & 0XFFFF;
    // 0x80277090: sh          $a0, 0x0($v1)
    MEM_H(0X0, ctx->r3) = ctx->r4;
    // 0x80277094: or          $a3, $t2, $zero
    ctx->r7 = ctx->r10 | 0;
    // 0x80277098: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    // 0x8027709C: andi        $t3, $a0, 0xFFFF
    ctx->r11 = ctx->r4 & 0XFFFF;
    // 0x802770A0: slti        $at, $t3, 0xB
    ctx->r1 = SIGNED(ctx->r11) < 0XB ? 1 : 0;
    // 0x802770A4: or          $a0, $t3, $zero
    ctx->r4 = ctx->r11 | 0;
    // 0x802770A8: bne         $at, $zero, L_80277018
    if (ctx->r1 != 0) {
            // 0x802770AC: addiu       $v0, $v0, 0xF8
    ctx->r2 = ADD32(ctx->r2, 0XF8);
    ovl_8024B800_func_80277018(rdram, ctx);
    return;
    }
    // 0x802770AC: addiu       $v0, $v0, 0xF8
    ctx->r2 = ADD32(ctx->r2, 0XF8);
    // 0x802770B0: beq         $a3, $zero, L_80277104
    if (ctx->r7 == 0) {
        // 0x802770B4: or          $a0, $zero, $zero
        ctx->r4 = 0 | 0;
            goto L_80277104;
    }
    // 0x802770B4: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x802770B8: addiu       $a1, $a3, -0x1
    ctx->r5 = ADD32(ctx->r7, -0X1);
    // 0x802770BC: sll         $t4, $a1, 16
    ctx->r12 = S32(ctx->r5 << 16);
    // 0x802770C0: sra         $a1, $t4, 16
    ctx->r5 = S32(SIGNED(ctx->r12) >> 16);
    // 0x802770C4: jal         0x8005DE74
    // 0x802770C8: sw          $t0, 0x84($sp)
    MEM_W(0X84, ctx->r29) = ctx->r8;
    func_8005DE74(rdram, ctx);
        goto after_0;
    // 0x802770C8: sw          $t0, 0x84($sp)
    MEM_W(0X84, ctx->r29) = ctx->r8;
    after_0:
    // 0x802770CC: lwc1        $f0, 0xA4($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0XA4);
    // 0x802770D0: lwc1        $f10, 0x30($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X30);
    // 0x802770D4: mul.s       $f8, $f0, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = MUL_S(ctx->f0.fl, ctx->f0.fl);
    // 0x802770D8: lhu         $t6, 0x2C($sp)
    ctx->r14 = MEM_HU(ctx->r29, 0X2C);
    // 0x802770DC: lw          $t0, 0x84($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X84);
    // 0x802770E0: lw          $a0, 0x98($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X98);
    // 0x802770E4: c.lt.s      $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f10.fl < ctx->f8.fl;
    // 0x802770E8: sll         $t7, $t6, 5
    ctx->r15 = S32(ctx->r14 << 5);
    // 0x802770EC: bc1f        L_80277104
    if (!c1cs) {
        // 0x802770F0: subu        $t7, $t7, $t6
        ctx->r15 = SUB32(ctx->r15, ctx->r14);
            goto L_80277104;
    }
    // 0x802770F0: subu        $t7, $t7, $t6
    ctx->r15 = SUB32(ctx->r15, ctx->r14);
    // 0x802770F4: sll         $t7, $t7, 3
    ctx->r15 = S32(ctx->r15 << 3);
    // 0x802770F8: lw          $a2, 0xA8($sp)
    ctx->r6 = MEM_W(ctx->r29, 0XA8);
    // 0x802770FC: jal         0x802503E0
    // 0x80277100: addu        $a1, $t7, $t0
    ctx->r5 = ADD32(ctx->r15, ctx->r8);
    ovl_8024B800_func_802503E0(rdram, ctx);
        goto after_1;
    // 0x80277100: addu        $a1, $t7, $t0
    ctx->r5 = ADD32(ctx->r15, ctx->r8);
    after_1:
L_80277104:
    // 0x80277104: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80277108: lwc1        $f21, 0x10($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X10);
    // 0x8027710C: lwc1        $f20, 0x14($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X14);
    // 0x80277110: jr          $ra
    // 0x80277114: addiu       $sp, $sp, 0x98
    ctx->r29 = ADD32(ctx->r29, 0X98);
    return;
    // 0x80277114: addiu       $sp, $sp, 0x98
    ctx->r29 = ADD32(ctx->r29, 0X98);
;}
RECOMP_FUNC void ovl_8024B800_func_802770F4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802770F4: sll         $t7, $t7, 3
    ctx->r15 = S32(ctx->r15 << 3);
    // 0x802770F8: lw          $a2, 0xA8($sp)
    ctx->r6 = MEM_W(ctx->r29, 0XA8);
    // 0x802770FC: jal         0x802503E0
    // 0x80277100: addu        $a1, $t7, $t0
    ctx->r5 = ADD32(ctx->r15, ctx->r8);
    ovl_8024B800_func_802503E0(rdram, ctx);
        goto after_0;
    // 0x80277100: addu        $a1, $t7, $t0
    ctx->r5 = ADD32(ctx->r15, ctx->r8);
    after_0:
    // 0x80277104: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80277108: lwc1        $f21, 0x10($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X10);
    // 0x8027710C: lwc1        $f20, 0x14($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X14);
    // 0x80277110: jr          $ra
    // 0x80277114: addiu       $sp, $sp, 0x98
    ctx->r29 = ADD32(ctx->r29, 0X98);
    return;
    // 0x80277114: addiu       $sp, $sp, 0x98
    ctx->r29 = ADD32(ctx->r29, 0X98);
;}
RECOMP_FUNC void ovl_8024B800_func_80277118(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80277118: addiu       $sp, $sp, -0x1C8
    ctx->r29 = ADD32(ctx->r29, -0X1C8);
    // 0x8027711C: sw          $s4, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r20;
    // 0x80277120: lui         $s4, 0x8009
    ctx->r20 = S32(0X8009 << 16);
    // 0x80277124: lui         $at, 0x8028
    ctx->r1 = S32(0X8028 << 16);
    // 0x80277128: addiu       $s4, $s4, 0x3B20
    ctx->r20 = ADD32(ctx->r20, 0X3B20);
    // 0x8027712C: sh          $zero, -0x2660($at)
    MEM_H(-0X2660, ctx->r1) = 0;
    // 0x80277130: lw          $a0, 0x0($s4)
    ctx->r4 = MEM_W(ctx->r20, 0X0);
    // 0x80277134: sw          $ra, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r31;
    // 0x80277138: sw          $s5, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r21;
    // 0x8027713C: sw          $s3, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r19;
    // 0x80277140: sw          $s2, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r18;
    // 0x80277144: sw          $s1, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r17;
    // 0x80277148: sw          $s0, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r16;
    // 0x8027714C: swc1        $f31, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->f_odd[(31 - 1) * 2];
    // 0x80277150: swc1        $f30, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->f30.u32l;
    // 0x80277154: swc1        $f29, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f_odd[(29 - 1) * 2];
    // 0x80277158: swc1        $f28, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f28.u32l;
    // 0x8027715C: swc1        $f27, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f_odd[(27 - 1) * 2];
    // 0x80277160: swc1        $f26, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f26.u32l;
    // 0x80277164: swc1        $f25, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f_odd[(25 - 1) * 2];
    // 0x80277168: swc1        $f24, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f24.u32l;
    // 0x8027716C: swc1        $f23, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f_odd[(23 - 1) * 2];
    // 0x80277170: swc1        $f22, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f22.u32l;
    // 0x80277174: swc1        $f21, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x80277178: swc1        $f20, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f20.u32l;
    // 0x8027717C: lhu         $t6, 0xC0($a0)
    ctx->r14 = MEM_HU(ctx->r4, 0XC0);
    // 0x80277180: lui         $s1, 0x8012
    ctx->r17 = S32(0X8012 << 16);
    // 0x80277184: andi        $t7, $t6, 0x200
    ctx->r15 = ctx->r14 & 0X200;
    // 0x80277188: or          $s5, $zero, $zero
    ctx->r21 = 0 | 0;
    // 0x8027718C: addiu       $s1, $s1, 0x568
    ctx->r17 = ADD32(ctx->r17, 0X568);
    // 0x80277190: bne         $t7, $zero, L_802771D4
    if (ctx->r15 != 0) {
        // 0x80277194: addiu       $s2, $sp, 0x78
        ctx->r18 = ADD32(ctx->r29, 0X78);
            goto L_802771D4;
    }
    // 0x80277194: addiu       $s2, $sp, 0x78
    ctx->r18 = ADD32(ctx->r29, 0X78);
    // 0x80277198: lhu         $t8, 0xC4($a0)
    ctx->r24 = MEM_HU(ctx->r4, 0XC4);
    // 0x8027719C: nop

    // 0x802771A0: bne         $t8, $zero, L_802771D4
    if (ctx->r24 != 0) {
        // 0x802771A4: nop
    
            goto L_802771D4;
    }
    // 0x802771A4: nop

    // 0x802771A8: lw          $t9, 0x8C($a0)
    ctx->r25 = MEM_W(ctx->r4, 0X8C);
    // 0x802771AC: lui         $t2, 0x8012
    ctx->r10 = S32(0X8012 << 16);
    // 0x802771B0: lhu         $t0, 0x20($t9)
    ctx->r8 = MEM_HU(ctx->r25, 0X20);
    // 0x802771B4: nop

    // 0x802771B8: andi        $t1, $t0, 0x400
    ctx->r9 = ctx->r8 & 0X400;
    // 0x802771BC: bne         $t1, $zero, L_802771D4
    if (ctx->r9 != 0) {
        // 0x802771C0: nop
    
            goto L_802771D4;
    }
    // 0x802771C0: nop

    // 0x802771C4: lhu         $t2, 0xB78($t2)
    ctx->r10 = MEM_HU(ctx->r10, 0XB78);
    // 0x802771C8: lui         $s0, 0x8012
    ctx->r16 = S32(0X8012 << 16);
    // 0x802771CC: beq         $t2, $zero, L_802771DC
    if (ctx->r10 == 0) {
        // 0x802771D0: nop
    
            goto L_802771DC;
    }
    // 0x802771D0: nop

L_802771D4:
    // 0x802771D4: b           L_80277518
    // 0x802771D8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_80277518;
    // 0x802771D8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_802771DC:
    // 0x802771DC: lw          $s0, 0x568($s0)
    ctx->r16 = MEM_W(ctx->r16, 0X568);
    // 0x802771E0: sw          $zero, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = 0;
    // 0x802771E4: beq         $s0, $zero, L_802774C4
    if (ctx->r16 == 0) {
        // 0x802771E8: addiu       $s3, $sp, 0x134
        ctx->r19 = ADD32(ctx->r29, 0X134);
            goto L_802774C4;
    }
    // 0x802771E8: addiu       $s3, $sp, 0x134
    ctx->r19 = ADD32(ctx->r29, 0X134);
    // 0x802771EC: lui         $at, 0x8028
    ctx->r1 = S32(0X8028 << 16);
    // 0x802771F0: lwc1        $f31, -0x1C60($at)
    ctx->f_odd[(31 - 1) * 2] = MEM_W(ctx->r1, -0X1C60);
    // 0x802771F4: lwc1        $f30, -0x1C5C($at)
    ctx->f30.u32l = MEM_W(ctx->r1, -0X1C5C);
    // 0x802771F8: nop

L_802771FC:
    // 0x802771FC: lw          $v0, 0x4($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X4);
    // 0x80277200: lw          $t4, 0xCC($s0)
    ctx->r12 = MEM_W(ctx->r16, 0XCC);
    // 0x80277204: lb          $t3, 0x1($v0)
    ctx->r11 = MEM_B(ctx->r2, 0X1);
    // 0x80277208: lw          $t5, 0x30($t4)
    ctx->r13 = MEM_W(ctx->r12, 0X30);
    // 0x8027720C: mtc1        $t3, $f4
    ctx->f4.u32l = ctx->r11;
    // 0x80277210: lhu         $t6, 0x2($t5)
    ctx->r14 = MEM_HU(ctx->r13, 0X2);
    // 0x80277214: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x80277218: andi        $t7, $t6, 0x8000
    ctx->r15 = ctx->r14 & 0X8000;
    // 0x8027721C: cvt.d.s     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f8.d = CVT_D_S(ctx->f6.fl);
    // 0x80277220: mul.d       $f10, $f8, $f30
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 30);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f30.d); 
    ctx->f10.d = MUL_D(ctx->f8.d, ctx->f30.d);
    // 0x80277224: beq         $t7, $zero, L_80277234
    if (ctx->r15 == 0) {
        // 0x80277228: cvt.s.d     $f0, $f10
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f0.fl = CVT_S_D(ctx->f10.d);
            goto L_80277234;
    }
    // 0x80277228: cvt.s.d     $f0, $f10
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f0.fl = CVT_S_D(ctx->f10.d);
    // 0x8027722C: b           L_80277238
    // 0x80277230: neg.s       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = -ctx->f0.fl;
        goto L_80277238;
    // 0x80277230: neg.s       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = -ctx->f0.fl;
L_80277234:
    // 0x80277234: mov.s       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.fl = ctx->f0.fl;
L_80277238:
    // 0x80277238: lwc1        $f16, 0x8C($s0)
    ctx->f16.u32l = MEM_W(ctx->r16, 0X8C);
    // 0x8027723C: lwc1        $f18, 0x8($s1)
    ctx->f18.u32l = MEM_W(ctx->r17, 0X8);
    // 0x80277240: lb          $t0, 0x3($v0)
    ctx->r8 = MEM_B(ctx->r2, 0X3);
    // 0x80277244: add.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f16.fl + ctx->f18.fl;
    // 0x80277248: lb          $t8, 0x0($v0)
    ctx->r24 = MEM_B(ctx->r2, 0X0);
    // 0x8027724C: lb          $t9, 0x2($v0)
    ctx->r25 = MEM_B(ctx->r2, 0X2);
    // 0x80277250: mtc1        $t0, $f10
    ctx->f10.u32l = ctx->r8;
    // 0x80277254: lwc1        $f18, 0x48($s0)
    ctx->f18.u32l = MEM_W(ctx->r16, 0X48);
    // 0x80277258: cvt.s.w     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.fl = CVT_S_W(ctx->f10.u32l);
    // 0x8027725C: mtc1        $t8, $f6
    ctx->f6.u32l = ctx->r24;
    // 0x80277260: mtc1        $t9, $f8
    ctx->f8.u32l = ctx->r25;
    // 0x80277264: add.s       $f20, $f2, $f4
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f20.fl = ctx->f2.fl + ctx->f4.fl;
    // 0x80277268: mov.s       $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    ctx->f12.fl = ctx->f20.fl;
    // 0x8027726C: add.s       $f26, $f16, $f18
    CHECK_FR(ctx, 26);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f26.fl = ctx->f16.fl + ctx->f18.fl;
    // 0x80277270: cvt.s.w     $f22, $f6
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 6);
    ctx->f22.fl = CVT_S_W(ctx->f6.u32l);
    // 0x80277274: jal         0x80081040
    // 0x80277278: cvt.s.w     $f24, $f8
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 8);
    ctx->f24.fl = CVT_S_W(ctx->f8.u32l);
    func_80081040(rdram, ctx);
        goto after_0;
    // 0x80277278: cvt.s.w     $f24, $f8
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 8);
    ctx->f24.fl = CVT_S_W(ctx->f8.u32l);
    after_0:
    // 0x8027727C: mul.s       $f4, $f0, $f22
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f4.fl = MUL_S(ctx->f0.fl, ctx->f22.fl);
    // 0x80277280: lwc1        $f6, 0x4C($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X4C);
    // 0x80277284: mov.s       $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    ctx->f12.fl = ctx->f20.fl;
    // 0x80277288: jal         0x80080E80
    // 0x8027728C: add.s       $f28, $f4, $f6
    CHECK_FR(ctx, 28);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f28.fl = ctx->f4.fl + ctx->f6.fl;
    func_80080E80(rdram, ctx);
        goto after_1;
    // 0x8027728C: add.s       $f28, $f4, $f6
    CHECK_FR(ctx, 28);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f28.fl = ctx->f4.fl + ctx->f6.fl;
    after_1:
    // 0x80277290: mul.s       $f8, $f0, $f22
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f8.fl = MUL_S(ctx->f0.fl, ctx->f22.fl);
    // 0x80277294: lw          $a0, 0x0($s4)
    ctx->r4 = MEM_W(ctx->r20, 0X0);
    // 0x80277298: lwc1        $f10, 0x44($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X44);
    // 0x8027729C: lwc1        $f16, 0x8($a0)
    ctx->f16.u32l = MEM_W(ctx->r4, 0X8);
    // 0x802772A0: add.s       $f20, $f8, $f10
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f20.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x802772A4: lwc1        $f6, 0x0($a0)
    ctx->f6.u32l = MEM_W(ctx->r4, 0X0);
    // 0x802772A8: sub.s       $f18, $f16, $f28
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 28);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f28.fl); 
    ctx->f18.fl = ctx->f16.fl - ctx->f28.fl;
    // 0x802772AC: cfc1        $t1, $FpcCsr
    ctx->r9 = get_cop1_cs();
    // 0x802772B0: nop

    // 0x802772B4: ori         $at, $t1, 0x3
    ctx->r1 = ctx->r9 | 0X3;
    // 0x802772B8: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x802772BC: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x802772C0: nop

    // 0x802772C4: cvt.w.s     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    ctx->f4.u32l = CVT_W_S(ctx->f18.fl);
    // 0x802772C8: mfc1        $v0, $f4
    ctx->r2 = (int32_t)ctx->f4.u32l;
    // 0x802772CC: ctc1        $t1, $FpcCsr
    set_cop1_cs(ctx->r9);
    // 0x802772D0: multu       $v0, $v0
    result = U64(U32(ctx->r2)) * U64(U32(ctx->r2)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x802772D4: sub.s       $f8, $f6, $f20
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f8.fl = ctx->f6.fl - ctx->f20.fl;
    // 0x802772D8: cfc1        $t2, $FpcCsr
    ctx->r10 = get_cop1_cs();
    // 0x802772DC: nop

    // 0x802772E0: ori         $at, $t2, 0x3
    ctx->r1 = ctx->r10 | 0X3;
    // 0x802772E4: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x802772E8: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x802772EC: nop

    // 0x802772F0: cvt.w.s     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.u32l = CVT_W_S(ctx->f8.fl);
    // 0x802772F4: mfc1        $v1, $f10
    ctx->r3 = (int32_t)ctx->f10.u32l;
    // 0x802772F8: mflo        $t3
    ctx->r11 = lo;
    // 0x802772FC: ctc1        $t2, $FpcCsr
    set_cop1_cs(ctx->r10);
    // 0x80277300: nop

    // 0x80277304: multu       $v1, $v1
    result = U64(U32(ctx->r3)) * U64(U32(ctx->r3)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80277308: mflo        $t4
    ctx->r12 = lo;
    // 0x8027730C: addu        $t5, $t3, $t4
    ctx->r13 = ADD32(ctx->r11, ctx->r12);
    // 0x80277310: mtc1        $t5, $f16
    ctx->f16.u32l = ctx->r13;
    // 0x80277314: jal         0x8007FA40
    // 0x80277318: cvt.s.w     $f12, $f16
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 16);
    ctx->f12.fl = CVT_S_W(ctx->f16.u32l);
    func_8007FA40(rdram, ctx);
        goto after_2;
    // 0x80277318: cvt.s.w     $f12, $f16
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 16);
    ctx->f12.fl = CVT_S_W(ctx->f16.u32l);
    after_2:
    // 0x8027731C: lw          $v0, 0x4($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X4);
    // 0x80277320: mov.s       $f22, $f0
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 0);
    ctx->f22.fl = ctx->f0.fl;
    // 0x80277324: lbu         $v1, 0x6($v0)
    ctx->r3 = MEM_BU(ctx->r2, 0X6);
    // 0x80277328: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8027732C: andi        $t6, $v1, 0x40
    ctx->r14 = ctx->r3 & 0X40;
    // 0x80277330: beq         $t6, $zero, L_80277360
    if (ctx->r14 == 0) {
        // 0x80277334: andi        $t7, $v1, 0x80
        ctx->r15 = ctx->r3 & 0X80;
            goto L_80277360;
    }
    // 0x80277334: andi        $t7, $v1, 0x80
    ctx->r15 = ctx->r3 & 0X80;
    // 0x80277338: mfc1        $a1, $f28
    ctx->r5 = (int32_t)ctx->f28.u32l;
    // 0x8027733C: mfc1        $a2, $f20
    ctx->r6 = (int32_t)ctx->f20.u32l;
    // 0x80277340: mfc1        $a3, $f24
    ctx->r7 = (int32_t)ctx->f24.u32l;
    // 0x80277344: jal         0x80276F34
    // 0x80277348: sw          $s1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r17;
    ovl_8024B800_func_80276F34(rdram, ctx);
        goto after_3;
    // 0x80277348: sw          $s1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r17;
    after_3:
    // 0x8027734C: lw          $v0, 0x4($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X4);
    // 0x80277350: nop

    // 0x80277354: lbu         $v1, 0x6($v0)
    ctx->r3 = MEM_BU(ctx->r2, 0X6);
    // 0x80277358: nop

    // 0x8027735C: andi        $t7, $v1, 0x80
    ctx->r15 = ctx->r3 & 0X80;
L_80277360:
    // 0x80277360: beq         $t7, $zero, L_802774B4
    if (ctx->r15 == 0) {
        // 0x80277364: lui         $at, 0x4120
        ctx->r1 = S32(0X4120 << 16);
            goto L_802774B4;
    }
    // 0x80277364: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x80277368: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x8027736C: nop

    // 0x80277370: add.s       $f4, $f24, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f24.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f24.fl + ctx->f18.fl;
    // 0x80277374: c.lt.s      $f22, $f4
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f22.fl < ctx->f4.fl;
    // 0x80277378: nop

    // 0x8027737C: bc1f        L_802774B4
    if (!c1cs) {
        // 0x80277380: nop
    
            goto L_802774B4;
    }
    // 0x80277380: nop

    // 0x80277384: lb          $t8, 0x4($v0)
    ctx->r24 = MEM_B(ctx->r2, 0X4);
    // 0x80277388: nop

    // 0x8027738C: mtc1        $t8, $f6
    ctx->f6.u32l = ctx->r24;
    // 0x80277390: nop

    // 0x80277394: cvt.s.w     $f0, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    ctx->f0.fl = CVT_S_W(ctx->f6.u32l);
    // 0x80277398: add.s       $f12, $f0, $f26
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 26);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f26.fl); 
    ctx->f12.fl = ctx->f0.fl + ctx->f26.fl;
    // 0x8027739C: jal         0x8027809C
    // 0x802773A0: sub.s       $f14, $f26, $f0
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 26);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f26.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f14.fl = ctx->f26.fl - ctx->f0.fl;
    ovl_8024B800_func_8027809C(rdram, ctx);
        goto after_4;
    // 0x802773A0: sub.s       $f14, $f26, $f0
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 26);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f26.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f14.fl = ctx->f26.fl - ctx->f0.fl;
    after_4:
    // 0x802773A4: beq         $v0, $zero, L_802774B4
    if (ctx->r2 == 0) {
        // 0x802773A8: or          $a3, $s2, $zero
        ctx->r7 = ctx->r18 | 0;
            goto L_802774B4;
    }
    // 0x802773A8: or          $a3, $s2, $zero
    ctx->r7 = ctx->r18 | 0;
    // 0x802773AC: mfc1        $a2, $f24
    ctx->r6 = (int32_t)ctx->f24.u32l;
    // 0x802773B0: mov.s       $f12, $f28
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 28);
    ctx->f12.fl = ctx->f28.fl;
    // 0x802773B4: jal         0x80278144
    // 0x802773B8: mov.s       $f14, $f20
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 20);
    ctx->f14.fl = ctx->f20.fl;
    ovl_8024B800_func_80278144(rdram, ctx);
        goto after_5;
    // 0x802773B8: mov.s       $f14, $f20
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 20);
    ctx->f14.fl = ctx->f20.fl;
    after_5:
    // 0x802773BC: bne         $v0, $zero, L_802773DC
    if (ctx->r2 != 0) {
        // 0x802773C0: nop
    
            goto L_802773DC;
    }
    // 0x802773C0: nop

    // 0x802773C4: lw          $t9, 0x0($s4)
    ctx->r25 = MEM_W(ctx->r20, 0X0);
    // 0x802773C8: nop

    // 0x802773CC: lw          $t0, 0xB0($t9)
    ctx->r8 = MEM_W(ctx->r25, 0XB0);
    // 0x802773D0: nop

    // 0x802773D4: bne         $s0, $t0, L_802774B4
    if (ctx->r16 != ctx->r8) {
        // 0x802773D8: nop
    
            goto L_802774B4;
    }
    // 0x802773D8: nop

L_802773DC:
    // 0x802773DC: lw          $a0, 0x0($s4)
    ctx->r4 = MEM_W(ctx->r20, 0X0);
    // 0x802773E0: nop

    // 0x802773E4: lhu         $t1, 0xC2($a0)
    ctx->r9 = MEM_HU(ctx->r4, 0XC2);
    // 0x802773E8: nop

    // 0x802773EC: andi        $t2, $t1, 0x40
    ctx->r10 = ctx->r9 & 0X40;
    // 0x802773F0: bne         $t2, $zero, L_802774B4
    if (ctx->r10 != 0) {
        // 0x802773F4: nop
    
            goto L_802774B4;
    }
    // 0x802773F4: nop

    // 0x802773F8: lw          $t3, 0x8C($a0)
    ctx->r11 = MEM_W(ctx->r4, 0X8C);
    // 0x802773FC: addiu       $at, $zero, 0x33
    ctx->r1 = ADD32(0, 0X33);
    // 0x80277400: lhu         $t4, 0xE($t3)
    ctx->r12 = MEM_HU(ctx->r11, 0XE);
    // 0x80277404: nop

    // 0x80277408: beq         $t4, $at, L_802774B4
    if (ctx->r12 == ctx->r1) {
        // 0x8027740C: nop
    
            goto L_802774B4;
    }
    // 0x8027740C: nop

    // 0x80277410: lw          $t5, 0xB0($a0)
    ctx->r13 = MEM_W(ctx->r4, 0XB0);
    // 0x80277414: nop

    // 0x80277418: bne         $t5, $zero, L_802774B4
    if (ctx->r13 != 0) {
        // 0x8027741C: nop
    
            goto L_802774B4;
    }
    // 0x8027741C: nop

    // 0x80277420: lw          $t6, 0x84($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X84);
    // 0x80277424: nop

    // 0x80277428: beq         $t6, $zero, L_8027744C
    if (ctx->r14 == 0) {
        // 0x8027742C: nop
    
            goto L_8027744C;
    }
    // 0x8027742C: nop

    // 0x80277430: lw          $t7, 0x4($s1)
    ctx->r15 = MEM_W(ctx->r17, 0X4);
    // 0x80277434: nop

    // 0x80277438: lbu         $t8, 0x6($t7)
    ctx->r24 = MEM_BU(ctx->r15, 0X6);
    // 0x8027743C: nop

    // 0x80277440: andi        $t9, $t8, 0x20
    ctx->r25 = ctx->r24 & 0X20;
    // 0x80277444: beq         $t9, $zero, L_802774B4
    if (ctx->r25 == 0) {
        // 0x80277448: nop
    
            goto L_802774B4;
    }
    // 0x80277448: nop

L_8027744C:
    // 0x8027744C: lbu         $t0, 0xBC($a0)
    ctx->r8 = MEM_BU(ctx->r4, 0XBC);
    // 0x80277450: lui         $t1, 0x800B
    ctx->r9 = S32(0X800B << 16);
    // 0x80277454: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x80277458: lbu         $t1, -0x54C0($t1)
    ctx->r9 = MEM_BU(ctx->r9, -0X54C0);
    // 0x8027745C: nop

    // 0x80277460: andi        $t2, $t1, 0x10
    ctx->r10 = ctx->r9 & 0X10;
    // 0x80277464: beq         $t2, $zero, L_8027749C
    if (ctx->r10 == 0) {
        // 0x80277468: nop
    
            goto L_8027749C;
    }
    // 0x80277468: nop

    // 0x8027746C: lw          $t3, 0x4($s1)
    ctx->r11 = MEM_W(ctx->r17, 0X4);
    // 0x80277470: nop

    // 0x80277474: lbu         $t4, 0x6($t3)
    ctx->r12 = MEM_BU(ctx->r11, 0X6);
    // 0x80277478: nop

    // 0x8027747C: andi        $t5, $t4, 0x10
    ctx->r13 = ctx->r12 & 0X10;
    // 0x80277480: beq         $t5, $zero, L_8027749C
    if (ctx->r13 == 0) {
        // 0x80277484: nop
    
            goto L_8027749C;
    }
    // 0x80277484: nop

    // 0x80277488: lhu         $t6, 0x6A($a0)
    ctx->r14 = MEM_HU(ctx->r4, 0X6A);
    // 0x8027748C: nop

    // 0x80277490: slti        $at, $t6, 0x7
    ctx->r1 = SIGNED(ctx->r14) < 0X7 ? 1 : 0;
    // 0x80277494: bne         $at, $zero, L_802774B4
    if (ctx->r1 != 0) {
        // 0x80277498: nop
    
            goto L_802774B4;
    }
    // 0x80277498: nop

L_8027749C:
    // 0x8027749C: sw          $s0, 0x4($s2)
    MEM_W(0X4, ctx->r18) = ctx->r16;
    // 0x802774A0: sw          $zero, 0xC($s2)
    MEM_W(0XC, ctx->r18) = 0;
    // 0x802774A4: addiu       $s2, $s2, 0x8
    ctx->r18 = ADD32(ctx->r18, 0X8);
    // 0x802774A8: sw          $s1, 0x0($s3)
    MEM_W(0X0, ctx->r19) = ctx->r17;
    // 0x802774AC: addiu       $s3, $s3, 0x4
    ctx->r19 = ADD32(ctx->r19, 0X4);
    // 0x802774B0: addiu       $s5, $s5, 0x1
    ctx->r21 = ADD32(ctx->r21, 0X1);
L_802774B4:
    // 0x802774B4: lw          $s0, 0xC($s1)
    ctx->r16 = MEM_W(ctx->r17, 0XC);
    // 0x802774B8: addiu       $s1, $s1, 0xC
    ctx->r17 = ADD32(ctx->r17, 0XC);
    // 0x802774BC: bne         $s0, $zero, L_802771FC
    if (ctx->r16 != 0) {
        // 0x802774C0: nop
    
            goto L_802771FC;
    }
    // 0x802774C0: nop

L_802774C4:
    // 0x802774C4: addiu       $a0, $sp, 0x134
    ctx->r4 = ADD32(ctx->r29, 0X134);
    // 0x802774C8: jal         0x80276CD0
    // 0x802774CC: or          $a1, $s5, $zero
    ctx->r5 = ctx->r21 | 0;
    ovl_8024B800_func_80276CD0(rdram, ctx);
        goto after_6;
    // 0x802774CC: or          $a1, $s5, $zero
    ctx->r5 = ctx->r21 | 0;
    after_6:
    // 0x802774D0: sll         $v1, $v0, 16
    ctx->r3 = S32(ctx->r2 << 16);
    // 0x802774D4: sra         $t7, $v1, 16
    ctx->r15 = S32(SIGNED(ctx->r3) >> 16);
    // 0x802774D8: bgez        $v0, L_802774F4
    if (SIGNED(ctx->r2) >= 0) {
        // 0x802774DC: or          $v1, $t7, $zero
        ctx->r3 = ctx->r15 | 0;
            goto L_802774F4;
    }
    // 0x802774DC: or          $v1, $t7, $zero
    ctx->r3 = ctx->r15 | 0;
    // 0x802774E0: jal         0x80276C1C
    // 0x802774E4: addiu       $a0, $sp, 0x78
    ctx->r4 = ADD32(ctx->r29, 0X78);
    ovl_8024B800_func_80276C1C(rdram, ctx);
        goto after_7;
    // 0x802774E4: addiu       $a0, $sp, 0x78
    ctx->r4 = ADD32(ctx->r29, 0X78);
    after_7:
    // 0x802774E8: sll         $v1, $v0, 16
    ctx->r3 = S32(ctx->r2 << 16);
    // 0x802774EC: sra         $t8, $v1, 16
    ctx->r24 = S32(SIGNED(ctx->r3) >> 16);
    // 0x802774F0: or          $v1, $t8, $zero
    ctx->r3 = ctx->r24 | 0;
L_802774F4:
    // 0x802774F4: sll         $t9, $v0, 16
    ctx->r25 = S32(ctx->r2 << 16);
    // 0x802774F8: sra         $t0, $t9, 16
    ctx->r8 = S32(SIGNED(ctx->r25) >> 16);
    // 0x802774FC: bltz        $t0, L_80277518
    if (SIGNED(ctx->r8) < 0) {
        // 0x80277500: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_80277518;
    }
    // 0x80277500: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x80277504: sll         $t1, $v1, 2
    ctx->r9 = S32(ctx->r3 << 2);
    // 0x80277508: addu        $v0, $sp, $t1
    ctx->r2 = ADD32(ctx->r29, ctx->r9);
    // 0x8027750C: lw          $v0, 0x134($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X134);
    // 0x80277510: b           L_8027751C
    // 0x80277514: lw          $ra, 0x64($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X64);
        goto L_8027751C;
    // 0x80277514: lw          $ra, 0x64($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X64);
L_80277518:
    // 0x80277518: lw          $ra, 0x64($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X64);
L_8027751C:
    // 0x8027751C: lwc1        $f21, 0x18($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X18);
    // 0x80277520: lwc1        $f20, 0x1C($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x80277524: lwc1        $f23, 0x20($sp)
    ctx->f_odd[(23 - 1) * 2] = MEM_W(ctx->r29, 0X20);
    // 0x80277528: lwc1        $f22, 0x24($sp)
    ctx->f22.u32l = MEM_W(ctx->r29, 0X24);
    // 0x8027752C: lwc1        $f25, 0x28($sp)
    ctx->f_odd[(25 - 1) * 2] = MEM_W(ctx->r29, 0X28);
    // 0x80277530: lwc1        $f24, 0x2C($sp)
    ctx->f24.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x80277534: lwc1        $f27, 0x30($sp)
    ctx->f_odd[(27 - 1) * 2] = MEM_W(ctx->r29, 0X30);
    // 0x80277538: lwc1        $f26, 0x34($sp)
    ctx->f26.u32l = MEM_W(ctx->r29, 0X34);
    // 0x8027753C: lwc1        $f29, 0x38($sp)
    ctx->f_odd[(29 - 1) * 2] = MEM_W(ctx->r29, 0X38);
    // 0x80277540: lwc1        $f28, 0x3C($sp)
    ctx->f28.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x80277544: lwc1        $f31, 0x40($sp)
    ctx->f_odd[(31 - 1) * 2] = MEM_W(ctx->r29, 0X40);
    // 0x80277548: lwc1        $f30, 0x44($sp)
    ctx->f30.u32l = MEM_W(ctx->r29, 0X44);
    // 0x8027754C: lw          $s0, 0x4C($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X4C);
    // 0x80277550: lw          $s1, 0x50($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X50);
    // 0x80277554: lw          $s2, 0x54($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X54);
    // 0x80277558: lw          $s3, 0x58($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X58);
    // 0x8027755C: lw          $s4, 0x5C($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X5C);
    // 0x80277560: lw          $s5, 0x60($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X60);
    // 0x80277564: jr          $ra
    // 0x80277568: addiu       $sp, $sp, 0x1C8
    ctx->r29 = ADD32(ctx->r29, 0X1C8);
    return;
    // 0x80277568: addiu       $sp, $sp, 0x1C8
    ctx->r29 = ADD32(ctx->r29, 0X1C8);
;}
RECOMP_FUNC void ovl_8024B800_func_80277178(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80277178: swc1        $f20, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f20.u32l;
    // 0x8027717C: lhu         $t6, 0xC0($a0)
    ctx->r14 = MEM_HU(ctx->r4, 0XC0);
    // 0x80277180: lui         $s1, 0x8012
    ctx->r17 = S32(0X8012 << 16);
    // 0x80277184: andi        $t7, $t6, 0x200
    ctx->r15 = ctx->r14 & 0X200;
    // 0x80277188: or          $s5, $zero, $zero
    ctx->r21 = 0 | 0;
    // 0x8027718C: addiu       $s1, $s1, 0x568
    ctx->r17 = ADD32(ctx->r17, 0X568);
    // 0x80277190: bne         $t7, $zero, L_802771D4
    if (ctx->r15 != 0) {
        // 0x80277194: addiu       $s2, $sp, 0x78
        ctx->r18 = ADD32(ctx->r29, 0X78);
            goto L_802771D4;
    }
    // 0x80277194: addiu       $s2, $sp, 0x78
    ctx->r18 = ADD32(ctx->r29, 0X78);
    // 0x80277198: lhu         $t8, 0xC4($a0)
    ctx->r24 = MEM_HU(ctx->r4, 0XC4);
    // 0x8027719C: nop

    // 0x802771A0: bne         $t8, $zero, L_802771D4
    if (ctx->r24 != 0) {
        // 0x802771A4: nop
    
            goto L_802771D4;
    }
    // 0x802771A4: nop

    // 0x802771A8: lw          $t9, 0x8C($a0)
    ctx->r25 = MEM_W(ctx->r4, 0X8C);
    // 0x802771AC: lui         $t2, 0x8012
    ctx->r10 = S32(0X8012 << 16);
    // 0x802771B0: lhu         $t0, 0x20($t9)
    ctx->r8 = MEM_HU(ctx->r25, 0X20);
    // 0x802771B4: nop

    // 0x802771B8: andi        $t1, $t0, 0x400
    ctx->r9 = ctx->r8 & 0X400;
    // 0x802771BC: bne         $t1, $zero, L_802771D4
    if (ctx->r9 != 0) {
        // 0x802771C0: nop
    
            goto L_802771D4;
    }
    // 0x802771C0: nop

    // 0x802771C4: lhu         $t2, 0xB78($t2)
    ctx->r10 = MEM_HU(ctx->r10, 0XB78);
    // 0x802771C8: lui         $s0, 0x8012
    ctx->r16 = S32(0X8012 << 16);
    // 0x802771CC: beq         $t2, $zero, L_802771DC
    if (ctx->r10 == 0) {
        // 0x802771D0: nop
    
            goto L_802771DC;
    }
    // 0x802771D0: nop

L_802771D4:
    // 0x802771D4: b           L_80277518
    // 0x802771D8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_80277518;
    // 0x802771D8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_802771DC:
    // 0x802771DC: lw          $s0, 0x568($s0)
    ctx->r16 = MEM_W(ctx->r16, 0X568);
    // 0x802771E0: sw          $zero, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = 0;
    // 0x802771E4: beq         $s0, $zero, L_802774C4
    if (ctx->r16 == 0) {
        // 0x802771E8: addiu       $s3, $sp, 0x134
        ctx->r19 = ADD32(ctx->r29, 0X134);
            goto L_802774C4;
    }
    // 0x802771E8: addiu       $s3, $sp, 0x134
    ctx->r19 = ADD32(ctx->r29, 0X134);
    // 0x802771EC: lui         $at, 0x8028
    ctx->r1 = S32(0X8028 << 16);
    // 0x802771F0: lwc1        $f31, -0x1C60($at)
    ctx->f_odd[(31 - 1) * 2] = MEM_W(ctx->r1, -0X1C60);
    // 0x802771F4: lwc1        $f30, -0x1C5C($at)
    ctx->f30.u32l = MEM_W(ctx->r1, -0X1C5C);
    // 0x802771F8: nop

L_802771FC:
    // 0x802771FC: lw          $v0, 0x4($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X4);
    // 0x80277200: lw          $t4, 0xCC($s0)
    ctx->r12 = MEM_W(ctx->r16, 0XCC);
    // 0x80277204: lb          $t3, 0x1($v0)
    ctx->r11 = MEM_B(ctx->r2, 0X1);
    // 0x80277208: lw          $t5, 0x30($t4)
    ctx->r13 = MEM_W(ctx->r12, 0X30);
    // 0x8027720C: mtc1        $t3, $f4
    ctx->f4.u32l = ctx->r11;
    // 0x80277210: lhu         $t6, 0x2($t5)
    ctx->r14 = MEM_HU(ctx->r13, 0X2);
    // 0x80277214: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x80277218: andi        $t7, $t6, 0x8000
    ctx->r15 = ctx->r14 & 0X8000;
    // 0x8027721C: cvt.d.s     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f8.d = CVT_D_S(ctx->f6.fl);
    // 0x80277220: mul.d       $f10, $f8, $f30
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 30);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f30.d); 
    ctx->f10.d = MUL_D(ctx->f8.d, ctx->f30.d);
    // 0x80277224: beq         $t7, $zero, L_80277234
    if (ctx->r15 == 0) {
        // 0x80277228: cvt.s.d     $f0, $f10
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f0.fl = CVT_S_D(ctx->f10.d);
            goto L_80277234;
    }
    // 0x80277228: cvt.s.d     $f0, $f10
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f0.fl = CVT_S_D(ctx->f10.d);
    // 0x8027722C: b           L_80277238
    // 0x80277230: neg.s       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = -ctx->f0.fl;
        goto L_80277238;
    // 0x80277230: neg.s       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = -ctx->f0.fl;
L_80277234:
    // 0x80277234: mov.s       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.fl = ctx->f0.fl;
L_80277238:
    // 0x80277238: lwc1        $f16, 0x8C($s0)
    ctx->f16.u32l = MEM_W(ctx->r16, 0X8C);
    // 0x8027723C: lwc1        $f18, 0x8($s1)
    ctx->f18.u32l = MEM_W(ctx->r17, 0X8);
    // 0x80277240: lb          $t0, 0x3($v0)
    ctx->r8 = MEM_B(ctx->r2, 0X3);
    // 0x80277244: add.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f16.fl + ctx->f18.fl;
    // 0x80277248: lb          $t8, 0x0($v0)
    ctx->r24 = MEM_B(ctx->r2, 0X0);
    // 0x8027724C: lb          $t9, 0x2($v0)
    ctx->r25 = MEM_B(ctx->r2, 0X2);
    // 0x80277250: mtc1        $t0, $f10
    ctx->f10.u32l = ctx->r8;
    // 0x80277254: lwc1        $f18, 0x48($s0)
    ctx->f18.u32l = MEM_W(ctx->r16, 0X48);
    // 0x80277258: cvt.s.w     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.fl = CVT_S_W(ctx->f10.u32l);
    // 0x8027725C: mtc1        $t8, $f6
    ctx->f6.u32l = ctx->r24;
    // 0x80277260: mtc1        $t9, $f8
    ctx->f8.u32l = ctx->r25;
    // 0x80277264: add.s       $f20, $f2, $f4
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f20.fl = ctx->f2.fl + ctx->f4.fl;
    // 0x80277268: mov.s       $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    ctx->f12.fl = ctx->f20.fl;
    // 0x8027726C: add.s       $f26, $f16, $f18
    CHECK_FR(ctx, 26);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f26.fl = ctx->f16.fl + ctx->f18.fl;
    // 0x80277270: cvt.s.w     $f22, $f6
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 6);
    ctx->f22.fl = CVT_S_W(ctx->f6.u32l);
    // 0x80277274: jal         0x80081040
    // 0x80277278: cvt.s.w     $f24, $f8
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 8);
    ctx->f24.fl = CVT_S_W(ctx->f8.u32l);
    func_80081040(rdram, ctx);
        goto after_0;
    // 0x80277278: cvt.s.w     $f24, $f8
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 8);
    ctx->f24.fl = CVT_S_W(ctx->f8.u32l);
    after_0:
    // 0x8027727C: mul.s       $f4, $f0, $f22
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f4.fl = MUL_S(ctx->f0.fl, ctx->f22.fl);
    // 0x80277280: lwc1        $f6, 0x4C($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X4C);
    // 0x80277284: mov.s       $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    ctx->f12.fl = ctx->f20.fl;
    // 0x80277288: jal         0x80080E80
    // 0x8027728C: add.s       $f28, $f4, $f6
    CHECK_FR(ctx, 28);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f28.fl = ctx->f4.fl + ctx->f6.fl;
    func_80080E80(rdram, ctx);
        goto after_1;
    // 0x8027728C: add.s       $f28, $f4, $f6
    CHECK_FR(ctx, 28);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f28.fl = ctx->f4.fl + ctx->f6.fl;
    after_1:
    // 0x80277290: mul.s       $f8, $f0, $f22
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f8.fl = MUL_S(ctx->f0.fl, ctx->f22.fl);
    // 0x80277294: lw          $a0, 0x0($s4)
    ctx->r4 = MEM_W(ctx->r20, 0X0);
    // 0x80277298: lwc1        $f10, 0x44($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X44);
    // 0x8027729C: lwc1        $f16, 0x8($a0)
    ctx->f16.u32l = MEM_W(ctx->r4, 0X8);
    // 0x802772A0: add.s       $f20, $f8, $f10
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f20.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x802772A4: lwc1        $f6, 0x0($a0)
    ctx->f6.u32l = MEM_W(ctx->r4, 0X0);
    // 0x802772A8: sub.s       $f18, $f16, $f28
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 28);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f28.fl); 
    ctx->f18.fl = ctx->f16.fl - ctx->f28.fl;
    // 0x802772AC: cfc1        $t1, $FpcCsr
    ctx->r9 = get_cop1_cs();
    // 0x802772B0: nop

    // 0x802772B4: ori         $at, $t1, 0x3
    ctx->r1 = ctx->r9 | 0X3;
    // 0x802772B8: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x802772BC: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x802772C0: nop

    // 0x802772C4: cvt.w.s     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    ctx->f4.u32l = CVT_W_S(ctx->f18.fl);
    // 0x802772C8: mfc1        $v0, $f4
    ctx->r2 = (int32_t)ctx->f4.u32l;
    // 0x802772CC: ctc1        $t1, $FpcCsr
    set_cop1_cs(ctx->r9);
    // 0x802772D0: multu       $v0, $v0
    result = U64(U32(ctx->r2)) * U64(U32(ctx->r2)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x802772D4: sub.s       $f8, $f6, $f20
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f8.fl = ctx->f6.fl - ctx->f20.fl;
    // 0x802772D8: cfc1        $t2, $FpcCsr
    ctx->r10 = get_cop1_cs();
    // 0x802772DC: nop

    // 0x802772E0: ori         $at, $t2, 0x3
    ctx->r1 = ctx->r10 | 0X3;
    // 0x802772E4: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x802772E8: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x802772EC: nop

    // 0x802772F0: cvt.w.s     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.u32l = CVT_W_S(ctx->f8.fl);
    // 0x802772F4: mfc1        $v1, $f10
    ctx->r3 = (int32_t)ctx->f10.u32l;
    // 0x802772F8: mflo        $t3
    ctx->r11 = lo;
    // 0x802772FC: ctc1        $t2, $FpcCsr
    set_cop1_cs(ctx->r10);
    // 0x80277300: nop

    // 0x80277304: multu       $v1, $v1
    result = U64(U32(ctx->r3)) * U64(U32(ctx->r3)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80277308: mflo        $t4
    ctx->r12 = lo;
    // 0x8027730C: addu        $t5, $t3, $t4
    ctx->r13 = ADD32(ctx->r11, ctx->r12);
    // 0x80277310: mtc1        $t5, $f16
    ctx->f16.u32l = ctx->r13;
    // 0x80277314: jal         0x8007FA40
    // 0x80277318: cvt.s.w     $f12, $f16
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 16);
    ctx->f12.fl = CVT_S_W(ctx->f16.u32l);
    func_8007FA40(rdram, ctx);
        goto after_2;
    // 0x80277318: cvt.s.w     $f12, $f16
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 16);
    ctx->f12.fl = CVT_S_W(ctx->f16.u32l);
    after_2:
    // 0x8027731C: lw          $v0, 0x4($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X4);
    // 0x80277320: mov.s       $f22, $f0
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 0);
    ctx->f22.fl = ctx->f0.fl;
    // 0x80277324: lbu         $v1, 0x6($v0)
    ctx->r3 = MEM_BU(ctx->r2, 0X6);
    // 0x80277328: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8027732C: andi        $t6, $v1, 0x40
    ctx->r14 = ctx->r3 & 0X40;
    // 0x80277330: beq         $t6, $zero, L_80277360
    if (ctx->r14 == 0) {
        // 0x80277334: andi        $t7, $v1, 0x80
        ctx->r15 = ctx->r3 & 0X80;
            goto L_80277360;
    }
    // 0x80277334: andi        $t7, $v1, 0x80
    ctx->r15 = ctx->r3 & 0X80;
    // 0x80277338: mfc1        $a1, $f28
    ctx->r5 = (int32_t)ctx->f28.u32l;
    // 0x8027733C: mfc1        $a2, $f20
    ctx->r6 = (int32_t)ctx->f20.u32l;
    // 0x80277340: mfc1        $a3, $f24
    ctx->r7 = (int32_t)ctx->f24.u32l;
    // 0x80277344: jal         0x80276F34
    // 0x80277348: sw          $s1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r17;
    ovl_8024B800_func_80276F34(rdram, ctx);
        goto after_3;
    // 0x80277348: sw          $s1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r17;
    after_3:
    // 0x8027734C: lw          $v0, 0x4($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X4);
    // 0x80277350: nop

    // 0x80277354: lbu         $v1, 0x6($v0)
    ctx->r3 = MEM_BU(ctx->r2, 0X6);
    // 0x80277358: nop

    // 0x8027735C: andi        $t7, $v1, 0x80
    ctx->r15 = ctx->r3 & 0X80;
L_80277360:
    // 0x80277360: beq         $t7, $zero, L_802774B4
    if (ctx->r15 == 0) {
        // 0x80277364: lui         $at, 0x4120
        ctx->r1 = S32(0X4120 << 16);
            goto L_802774B4;
    }
    // 0x80277364: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x80277368: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x8027736C: nop

    // 0x80277370: add.s       $f4, $f24, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f24.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f24.fl + ctx->f18.fl;
    // 0x80277374: c.lt.s      $f22, $f4
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f22.fl < ctx->f4.fl;
    // 0x80277378: nop

    // 0x8027737C: bc1f        L_802774B4
    if (!c1cs) {
        // 0x80277380: nop
    
            goto L_802774B4;
    }
    // 0x80277380: nop

    // 0x80277384: lb          $t8, 0x4($v0)
    ctx->r24 = MEM_B(ctx->r2, 0X4);
    // 0x80277388: nop

    // 0x8027738C: mtc1        $t8, $f6
    ctx->f6.u32l = ctx->r24;
    // 0x80277390: nop

    // 0x80277394: cvt.s.w     $f0, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    ctx->f0.fl = CVT_S_W(ctx->f6.u32l);
    // 0x80277398: add.s       $f12, $f0, $f26
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 26);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f26.fl); 
    ctx->f12.fl = ctx->f0.fl + ctx->f26.fl;
    // 0x8027739C: jal         0x8027809C
    // 0x802773A0: sub.s       $f14, $f26, $f0
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 26);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f26.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f14.fl = ctx->f26.fl - ctx->f0.fl;
    ovl_8024B800_func_8027809C(rdram, ctx);
        goto after_4;
    // 0x802773A0: sub.s       $f14, $f26, $f0
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 26);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f26.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f14.fl = ctx->f26.fl - ctx->f0.fl;
    after_4:
    // 0x802773A4: beq         $v0, $zero, L_802774B4
    if (ctx->r2 == 0) {
        // 0x802773A8: or          $a3, $s2, $zero
        ctx->r7 = ctx->r18 | 0;
            goto L_802774B4;
    }
    // 0x802773A8: or          $a3, $s2, $zero
    ctx->r7 = ctx->r18 | 0;
    // 0x802773AC: mfc1        $a2, $f24
    ctx->r6 = (int32_t)ctx->f24.u32l;
    // 0x802773B0: mov.s       $f12, $f28
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 28);
    ctx->f12.fl = ctx->f28.fl;
    // 0x802773B4: jal         0x80278144
    // 0x802773B8: mov.s       $f14, $f20
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 20);
    ctx->f14.fl = ctx->f20.fl;
    ovl_8024B800_func_80278144(rdram, ctx);
        goto after_5;
    // 0x802773B8: mov.s       $f14, $f20
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 20);
    ctx->f14.fl = ctx->f20.fl;
    after_5:
    // 0x802773BC: bne         $v0, $zero, L_802773DC
    if (ctx->r2 != 0) {
        // 0x802773C0: nop
    
            goto L_802773DC;
    }
    // 0x802773C0: nop

    // 0x802773C4: lw          $t9, 0x0($s4)
    ctx->r25 = MEM_W(ctx->r20, 0X0);
    // 0x802773C8: nop

    // 0x802773CC: lw          $t0, 0xB0($t9)
    ctx->r8 = MEM_W(ctx->r25, 0XB0);
    // 0x802773D0: nop

    // 0x802773D4: bne         $s0, $t0, L_802774B4
    if (ctx->r16 != ctx->r8) {
        // 0x802773D8: nop
    
            goto L_802774B4;
    }
    // 0x802773D8: nop

L_802773DC:
    // 0x802773DC: lw          $a0, 0x0($s4)
    ctx->r4 = MEM_W(ctx->r20, 0X0);
    // 0x802773E0: nop

    // 0x802773E4: lhu         $t1, 0xC2($a0)
    ctx->r9 = MEM_HU(ctx->r4, 0XC2);
    // 0x802773E8: nop

    // 0x802773EC: andi        $t2, $t1, 0x40
    ctx->r10 = ctx->r9 & 0X40;
    // 0x802773F0: bne         $t2, $zero, L_802774B4
    if (ctx->r10 != 0) {
        // 0x802773F4: nop
    
            goto L_802774B4;
    }
    // 0x802773F4: nop

    // 0x802773F8: lw          $t3, 0x8C($a0)
    ctx->r11 = MEM_W(ctx->r4, 0X8C);
    // 0x802773FC: addiu       $at, $zero, 0x33
    ctx->r1 = ADD32(0, 0X33);
    // 0x80277400: lhu         $t4, 0xE($t3)
    ctx->r12 = MEM_HU(ctx->r11, 0XE);
    // 0x80277404: nop

    // 0x80277408: beq         $t4, $at, L_802774B4
    if (ctx->r12 == ctx->r1) {
        // 0x8027740C: nop
    
            goto L_802774B4;
    }
    // 0x8027740C: nop

    // 0x80277410: lw          $t5, 0xB0($a0)
    ctx->r13 = MEM_W(ctx->r4, 0XB0);
    // 0x80277414: nop

    // 0x80277418: bne         $t5, $zero, L_802774B4
    if (ctx->r13 != 0) {
        // 0x8027741C: nop
    
            goto L_802774B4;
    }
    // 0x8027741C: nop

    // 0x80277420: lw          $t6, 0x84($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X84);
    // 0x80277424: nop

    // 0x80277428: beq         $t6, $zero, L_8027744C
    if (ctx->r14 == 0) {
        // 0x8027742C: nop
    
            goto L_8027744C;
    }
    // 0x8027742C: nop

    // 0x80277430: lw          $t7, 0x4($s1)
    ctx->r15 = MEM_W(ctx->r17, 0X4);
    // 0x80277434: nop

    // 0x80277438: lbu         $t8, 0x6($t7)
    ctx->r24 = MEM_BU(ctx->r15, 0X6);
    // 0x8027743C: nop

    // 0x80277440: andi        $t9, $t8, 0x20
    ctx->r25 = ctx->r24 & 0X20;
    // 0x80277444: beq         $t9, $zero, L_802774B4
    if (ctx->r25 == 0) {
        // 0x80277448: nop
    
            goto L_802774B4;
    }
    // 0x80277448: nop

L_8027744C:
    // 0x8027744C: lbu         $t0, 0xBC($a0)
    ctx->r8 = MEM_BU(ctx->r4, 0XBC);
    // 0x80277450: lui         $t1, 0x800B
    ctx->r9 = S32(0X800B << 16);
    // 0x80277454: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x80277458: lbu         $t1, -0x54C0($t1)
    ctx->r9 = MEM_BU(ctx->r9, -0X54C0);
    // 0x8027745C: nop

    // 0x80277460: andi        $t2, $t1, 0x10
    ctx->r10 = ctx->r9 & 0X10;
    // 0x80277464: beq         $t2, $zero, L_8027749C
    if (ctx->r10 == 0) {
        // 0x80277468: nop
    
            goto L_8027749C;
    }
    // 0x80277468: nop

    // 0x8027746C: lw          $t3, 0x4($s1)
    ctx->r11 = MEM_W(ctx->r17, 0X4);
    // 0x80277470: nop

    // 0x80277474: lbu         $t4, 0x6($t3)
    ctx->r12 = MEM_BU(ctx->r11, 0X6);
    // 0x80277478: nop

    // 0x8027747C: andi        $t5, $t4, 0x10
    ctx->r13 = ctx->r12 & 0X10;
    // 0x80277480: beq         $t5, $zero, L_8027749C
    if (ctx->r13 == 0) {
        // 0x80277484: nop
    
            goto L_8027749C;
    }
    // 0x80277484: nop

    // 0x80277488: lhu         $t6, 0x6A($a0)
    ctx->r14 = MEM_HU(ctx->r4, 0X6A);
    // 0x8027748C: nop

    // 0x80277490: slti        $at, $t6, 0x7
    ctx->r1 = SIGNED(ctx->r14) < 0X7 ? 1 : 0;
    // 0x80277494: bne         $at, $zero, L_802774B4
    if (ctx->r1 != 0) {
        // 0x80277498: nop
    
            goto L_802774B4;
    }
    // 0x80277498: nop

L_8027749C:
    // 0x8027749C: sw          $s0, 0x4($s2)
    MEM_W(0X4, ctx->r18) = ctx->r16;
    // 0x802774A0: sw          $zero, 0xC($s2)
    MEM_W(0XC, ctx->r18) = 0;
    // 0x802774A4: addiu       $s2, $s2, 0x8
    ctx->r18 = ADD32(ctx->r18, 0X8);
    // 0x802774A8: sw          $s1, 0x0($s3)
    MEM_W(0X0, ctx->r19) = ctx->r17;
    // 0x802774AC: addiu       $s3, $s3, 0x4
    ctx->r19 = ADD32(ctx->r19, 0X4);
    // 0x802774B0: addiu       $s5, $s5, 0x1
    ctx->r21 = ADD32(ctx->r21, 0X1);
L_802774B4:
    // 0x802774B4: lw          $s0, 0xC($s1)
    ctx->r16 = MEM_W(ctx->r17, 0XC);
    // 0x802774B8: addiu       $s1, $s1, 0xC
    ctx->r17 = ADD32(ctx->r17, 0XC);
    // 0x802774BC: bne         $s0, $zero, L_802771FC
    if (ctx->r16 != 0) {
        // 0x802774C0: nop
    
            goto L_802771FC;
    }
    // 0x802774C0: nop

L_802774C4:
    // 0x802774C4: addiu       $a0, $sp, 0x134
    ctx->r4 = ADD32(ctx->r29, 0X134);
    // 0x802774C8: jal         0x80276CD0
    // 0x802774CC: or          $a1, $s5, $zero
    ctx->r5 = ctx->r21 | 0;
    ovl_8024B800_func_80276CD0(rdram, ctx);
        goto after_6;
    // 0x802774CC: or          $a1, $s5, $zero
    ctx->r5 = ctx->r21 | 0;
    after_6:
    // 0x802774D0: sll         $v1, $v0, 16
    ctx->r3 = S32(ctx->r2 << 16);
    // 0x802774D4: sra         $t7, $v1, 16
    ctx->r15 = S32(SIGNED(ctx->r3) >> 16);
    // 0x802774D8: bgez        $v0, L_802774F4
    if (SIGNED(ctx->r2) >= 0) {
        // 0x802774DC: or          $v1, $t7, $zero
        ctx->r3 = ctx->r15 | 0;
            goto L_802774F4;
    }
    // 0x802774DC: or          $v1, $t7, $zero
    ctx->r3 = ctx->r15 | 0;
    // 0x802774E0: jal         0x80276C1C
    // 0x802774E4: addiu       $a0, $sp, 0x78
    ctx->r4 = ADD32(ctx->r29, 0X78);
    ovl_8024B800_func_80276C1C(rdram, ctx);
        goto after_7;
    // 0x802774E4: addiu       $a0, $sp, 0x78
    ctx->r4 = ADD32(ctx->r29, 0X78);
    after_7:
    // 0x802774E8: sll         $v1, $v0, 16
    ctx->r3 = S32(ctx->r2 << 16);
    // 0x802774EC: sra         $t8, $v1, 16
    ctx->r24 = S32(SIGNED(ctx->r3) >> 16);
    // 0x802774F0: or          $v1, $t8, $zero
    ctx->r3 = ctx->r24 | 0;
L_802774F4:
    // 0x802774F4: sll         $t9, $v0, 16
    ctx->r25 = S32(ctx->r2 << 16);
    // 0x802774F8: sra         $t0, $t9, 16
    ctx->r8 = S32(SIGNED(ctx->r25) >> 16);
    // 0x802774FC: bltz        $t0, L_80277518
    if (SIGNED(ctx->r8) < 0) {
        // 0x80277500: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_80277518;
    }
    // 0x80277500: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x80277504: sll         $t1, $v1, 2
    ctx->r9 = S32(ctx->r3 << 2);
    // 0x80277508: addu        $v0, $sp, $t1
    ctx->r2 = ADD32(ctx->r29, ctx->r9);
    // 0x8027750C: lw          $v0, 0x134($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X134);
    // 0x80277510: b           L_8027751C
    // 0x80277514: lw          $ra, 0x64($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X64);
        goto L_8027751C;
    // 0x80277514: lw          $ra, 0x64($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X64);
L_80277518:
    // 0x80277518: lw          $ra, 0x64($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X64);
L_8027751C:
    // 0x8027751C: lwc1        $f21, 0x18($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X18);
    // 0x80277520: lwc1        $f20, 0x1C($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x80277524: lwc1        $f23, 0x20($sp)
    ctx->f_odd[(23 - 1) * 2] = MEM_W(ctx->r29, 0X20);
    // 0x80277528: lwc1        $f22, 0x24($sp)
    ctx->f22.u32l = MEM_W(ctx->r29, 0X24);
    // 0x8027752C: lwc1        $f25, 0x28($sp)
    ctx->f_odd[(25 - 1) * 2] = MEM_W(ctx->r29, 0X28);
    // 0x80277530: lwc1        $f24, 0x2C($sp)
    ctx->f24.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x80277534: lwc1        $f27, 0x30($sp)
    ctx->f_odd[(27 - 1) * 2] = MEM_W(ctx->r29, 0X30);
    // 0x80277538: lwc1        $f26, 0x34($sp)
    ctx->f26.u32l = MEM_W(ctx->r29, 0X34);
    // 0x8027753C: lwc1        $f29, 0x38($sp)
    ctx->f_odd[(29 - 1) * 2] = MEM_W(ctx->r29, 0X38);
    // 0x80277540: lwc1        $f28, 0x3C($sp)
    ctx->f28.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x80277544: lwc1        $f31, 0x40($sp)
    ctx->f_odd[(31 - 1) * 2] = MEM_W(ctx->r29, 0X40);
    // 0x80277548: lwc1        $f30, 0x44($sp)
    ctx->f30.u32l = MEM_W(ctx->r29, 0X44);
    // 0x8027754C: lw          $s0, 0x4C($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X4C);
    // 0x80277550: lw          $s1, 0x50($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X50);
    // 0x80277554: lw          $s2, 0x54($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X54);
    // 0x80277558: lw          $s3, 0x58($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X58);
    // 0x8027755C: lw          $s4, 0x5C($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X5C);
    // 0x80277560: lw          $s5, 0x60($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X60);
    // 0x80277564: jr          $ra
    // 0x80277568: addiu       $sp, $sp, 0x1C8
    ctx->r29 = ADD32(ctx->r29, 0X1C8);
    return;
    // 0x80277568: addiu       $sp, $sp, 0x1C8
    ctx->r29 = ADD32(ctx->r29, 0X1C8);
;}
RECOMP_FUNC void ovl_8024B800_func_802771FC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
L_802771FC:
    // 0x802771FC: lw          $v0, 0x4($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X4);
    // 0x80277200: lw          $t4, 0xCC($s0)
    ctx->r12 = MEM_W(ctx->r16, 0XCC);
    // 0x80277204: lb          $t3, 0x1($v0)
    ctx->r11 = MEM_B(ctx->r2, 0X1);
    // 0x80277208: lw          $t5, 0x30($t4)
    ctx->r13 = MEM_W(ctx->r12, 0X30);
    // 0x8027720C: mtc1        $t3, $f4
    ctx->f4.u32l = ctx->r11;
    // 0x80277210: lhu         $t6, 0x2($t5)
    ctx->r14 = MEM_HU(ctx->r13, 0X2);
    // 0x80277214: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x80277218: andi        $t7, $t6, 0x8000
    ctx->r15 = ctx->r14 & 0X8000;
    // 0x8027721C: cvt.d.s     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f8.d = CVT_D_S(ctx->f6.fl);
    // 0x80277220: mul.d       $f10, $f8, $f30
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 30);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f30.d); 
    ctx->f10.d = MUL_D(ctx->f8.d, ctx->f30.d);
    // 0x80277224: beq         $t7, $zero, L_80277234
    if (ctx->r15 == 0) {
        // 0x80277228: cvt.s.d     $f0, $f10
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f0.fl = CVT_S_D(ctx->f10.d);
            goto L_80277234;
    }
    // 0x80277228: cvt.s.d     $f0, $f10
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f0.fl = CVT_S_D(ctx->f10.d);
    // 0x8027722C: b           L_80277238
    // 0x80277230: neg.s       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = -ctx->f0.fl;
        goto L_80277238;
    // 0x80277230: neg.s       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = -ctx->f0.fl;
L_80277234:
    // 0x80277234: mov.s       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.fl = ctx->f0.fl;
L_80277238:
    // 0x80277238: lwc1        $f16, 0x8C($s0)
    ctx->f16.u32l = MEM_W(ctx->r16, 0X8C);
    // 0x8027723C: lwc1        $f18, 0x8($s1)
    ctx->f18.u32l = MEM_W(ctx->r17, 0X8);
    // 0x80277240: lb          $t0, 0x3($v0)
    ctx->r8 = MEM_B(ctx->r2, 0X3);
    // 0x80277244: add.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f16.fl + ctx->f18.fl;
    // 0x80277248: lb          $t8, 0x0($v0)
    ctx->r24 = MEM_B(ctx->r2, 0X0);
    // 0x8027724C: lb          $t9, 0x2($v0)
    ctx->r25 = MEM_B(ctx->r2, 0X2);
    // 0x80277250: mtc1        $t0, $f10
    ctx->f10.u32l = ctx->r8;
    // 0x80277254: lwc1        $f18, 0x48($s0)
    ctx->f18.u32l = MEM_W(ctx->r16, 0X48);
    // 0x80277258: cvt.s.w     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.fl = CVT_S_W(ctx->f10.u32l);
    // 0x8027725C: mtc1        $t8, $f6
    ctx->f6.u32l = ctx->r24;
    // 0x80277260: mtc1        $t9, $f8
    ctx->f8.u32l = ctx->r25;
    // 0x80277264: add.s       $f20, $f2, $f4
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f20.fl = ctx->f2.fl + ctx->f4.fl;
    // 0x80277268: mov.s       $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    ctx->f12.fl = ctx->f20.fl;
    // 0x8027726C: add.s       $f26, $f16, $f18
    CHECK_FR(ctx, 26);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f26.fl = ctx->f16.fl + ctx->f18.fl;
    // 0x80277270: cvt.s.w     $f22, $f6
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 6);
    ctx->f22.fl = CVT_S_W(ctx->f6.u32l);
    // 0x80277274: jal         0x80081040
    // 0x80277278: cvt.s.w     $f24, $f8
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 8);
    ctx->f24.fl = CVT_S_W(ctx->f8.u32l);
    func_80081040(rdram, ctx);
        goto after_0;
    // 0x80277278: cvt.s.w     $f24, $f8
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 8);
    ctx->f24.fl = CVT_S_W(ctx->f8.u32l);
    after_0:
    // 0x8027727C: mul.s       $f4, $f0, $f22
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f4.fl = MUL_S(ctx->f0.fl, ctx->f22.fl);
    // 0x80277280: lwc1        $f6, 0x4C($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X4C);
    // 0x80277284: mov.s       $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    ctx->f12.fl = ctx->f20.fl;
    // 0x80277288: jal         0x80080E80
    // 0x8027728C: add.s       $f28, $f4, $f6
    CHECK_FR(ctx, 28);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f28.fl = ctx->f4.fl + ctx->f6.fl;
    func_80080E80(rdram, ctx);
        goto after_1;
    // 0x8027728C: add.s       $f28, $f4, $f6
    CHECK_FR(ctx, 28);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f28.fl = ctx->f4.fl + ctx->f6.fl;
    after_1:
    // 0x80277290: mul.s       $f8, $f0, $f22
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f8.fl = MUL_S(ctx->f0.fl, ctx->f22.fl);
    // 0x80277294: lw          $a0, 0x0($s4)
    ctx->r4 = MEM_W(ctx->r20, 0X0);
    // 0x80277298: lwc1        $f10, 0x44($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X44);
    // 0x8027729C: lwc1        $f16, 0x8($a0)
    ctx->f16.u32l = MEM_W(ctx->r4, 0X8);
    // 0x802772A0: add.s       $f20, $f8, $f10
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f20.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x802772A4: lwc1        $f6, 0x0($a0)
    ctx->f6.u32l = MEM_W(ctx->r4, 0X0);
    // 0x802772A8: sub.s       $f18, $f16, $f28
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 28);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f28.fl); 
    ctx->f18.fl = ctx->f16.fl - ctx->f28.fl;
    // 0x802772AC: cfc1        $t1, $FpcCsr
    ctx->r9 = get_cop1_cs();
    // 0x802772B0: nop

    // 0x802772B4: ori         $at, $t1, 0x3
    ctx->r1 = ctx->r9 | 0X3;
    // 0x802772B8: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x802772BC: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x802772C0: nop

    // 0x802772C4: cvt.w.s     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    ctx->f4.u32l = CVT_W_S(ctx->f18.fl);
    // 0x802772C8: mfc1        $v0, $f4
    ctx->r2 = (int32_t)ctx->f4.u32l;
    // 0x802772CC: ctc1        $t1, $FpcCsr
    set_cop1_cs(ctx->r9);
    // 0x802772D0: multu       $v0, $v0
    result = U64(U32(ctx->r2)) * U64(U32(ctx->r2)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x802772D4: sub.s       $f8, $f6, $f20
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f8.fl = ctx->f6.fl - ctx->f20.fl;
    // 0x802772D8: cfc1        $t2, $FpcCsr
    ctx->r10 = get_cop1_cs();
    // 0x802772DC: nop

    // 0x802772E0: ori         $at, $t2, 0x3
    ctx->r1 = ctx->r10 | 0X3;
    // 0x802772E4: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x802772E8: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x802772EC: nop

    // 0x802772F0: cvt.w.s     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.u32l = CVT_W_S(ctx->f8.fl);
    // 0x802772F4: mfc1        $v1, $f10
    ctx->r3 = (int32_t)ctx->f10.u32l;
    // 0x802772F8: mflo        $t3
    ctx->r11 = lo;
    // 0x802772FC: ctc1        $t2, $FpcCsr
    set_cop1_cs(ctx->r10);
    // 0x80277300: nop

    // 0x80277304: multu       $v1, $v1
    result = U64(U32(ctx->r3)) * U64(U32(ctx->r3)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80277308: mflo        $t4
    ctx->r12 = lo;
    // 0x8027730C: addu        $t5, $t3, $t4
    ctx->r13 = ADD32(ctx->r11, ctx->r12);
    // 0x80277310: mtc1        $t5, $f16
    ctx->f16.u32l = ctx->r13;
    // 0x80277314: jal         0x8007FA40
    // 0x80277318: cvt.s.w     $f12, $f16
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 16);
    ctx->f12.fl = CVT_S_W(ctx->f16.u32l);
    func_8007FA40(rdram, ctx);
        goto after_2;
    // 0x80277318: cvt.s.w     $f12, $f16
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 16);
    ctx->f12.fl = CVT_S_W(ctx->f16.u32l);
    after_2:
    // 0x8027731C: lw          $v0, 0x4($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X4);
    // 0x80277320: mov.s       $f22, $f0
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 0);
    ctx->f22.fl = ctx->f0.fl;
    // 0x80277324: lbu         $v1, 0x6($v0)
    ctx->r3 = MEM_BU(ctx->r2, 0X6);
    // 0x80277328: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8027732C: andi        $t6, $v1, 0x40
    ctx->r14 = ctx->r3 & 0X40;
    // 0x80277330: beq         $t6, $zero, L_80277360
    if (ctx->r14 == 0) {
        // 0x80277334: andi        $t7, $v1, 0x80
        ctx->r15 = ctx->r3 & 0X80;
            goto L_80277360;
    }
    // 0x80277334: andi        $t7, $v1, 0x80
    ctx->r15 = ctx->r3 & 0X80;
    // 0x80277338: mfc1        $a1, $f28
    ctx->r5 = (int32_t)ctx->f28.u32l;
    // 0x8027733C: mfc1        $a2, $f20
    ctx->r6 = (int32_t)ctx->f20.u32l;
    // 0x80277340: mfc1        $a3, $f24
    ctx->r7 = (int32_t)ctx->f24.u32l;
    // 0x80277344: jal         0x80276F34
    // 0x80277348: sw          $s1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r17;
    ovl_8024B800_func_80276F34(rdram, ctx);
        goto after_3;
    // 0x80277348: sw          $s1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r17;
    after_3:
    // 0x8027734C: lw          $v0, 0x4($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X4);
    // 0x80277350: nop

    // 0x80277354: lbu         $v1, 0x6($v0)
    ctx->r3 = MEM_BU(ctx->r2, 0X6);
    // 0x80277358: nop

    // 0x8027735C: andi        $t7, $v1, 0x80
    ctx->r15 = ctx->r3 & 0X80;
L_80277360:
    // 0x80277360: beq         $t7, $zero, L_802774B4
    if (ctx->r15 == 0) {
        // 0x80277364: lui         $at, 0x4120
        ctx->r1 = S32(0X4120 << 16);
            goto L_802774B4;
    }
    // 0x80277364: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x80277368: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x8027736C: nop

    // 0x80277370: add.s       $f4, $f24, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f24.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f24.fl + ctx->f18.fl;
    // 0x80277374: c.lt.s      $f22, $f4
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f22.fl < ctx->f4.fl;
    // 0x80277378: nop

    // 0x8027737C: bc1f        L_802774B4
    if (!c1cs) {
        // 0x80277380: nop
    
            goto L_802774B4;
    }
    // 0x80277380: nop

    // 0x80277384: lb          $t8, 0x4($v0)
    ctx->r24 = MEM_B(ctx->r2, 0X4);
    // 0x80277388: nop

    // 0x8027738C: mtc1        $t8, $f6
    ctx->f6.u32l = ctx->r24;
    // 0x80277390: nop

    // 0x80277394: cvt.s.w     $f0, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    ctx->f0.fl = CVT_S_W(ctx->f6.u32l);
    // 0x80277398: add.s       $f12, $f0, $f26
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 26);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f26.fl); 
    ctx->f12.fl = ctx->f0.fl + ctx->f26.fl;
    // 0x8027739C: jal         0x8027809C
    // 0x802773A0: sub.s       $f14, $f26, $f0
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 26);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f26.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f14.fl = ctx->f26.fl - ctx->f0.fl;
    ovl_8024B800_func_8027809C(rdram, ctx);
        goto after_4;
    // 0x802773A0: sub.s       $f14, $f26, $f0
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 26);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f26.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f14.fl = ctx->f26.fl - ctx->f0.fl;
    after_4:
    // 0x802773A4: beq         $v0, $zero, L_802774B4
    if (ctx->r2 == 0) {
        // 0x802773A8: or          $a3, $s2, $zero
        ctx->r7 = ctx->r18 | 0;
            goto L_802774B4;
    }
    // 0x802773A8: or          $a3, $s2, $zero
    ctx->r7 = ctx->r18 | 0;
    // 0x802773AC: mfc1        $a2, $f24
    ctx->r6 = (int32_t)ctx->f24.u32l;
    // 0x802773B0: mov.s       $f12, $f28
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 28);
    ctx->f12.fl = ctx->f28.fl;
    // 0x802773B4: jal         0x80278144
    // 0x802773B8: mov.s       $f14, $f20
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 20);
    ctx->f14.fl = ctx->f20.fl;
    ovl_8024B800_func_80278144(rdram, ctx);
        goto after_5;
    // 0x802773B8: mov.s       $f14, $f20
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 20);
    ctx->f14.fl = ctx->f20.fl;
    after_5:
    // 0x802773BC: bne         $v0, $zero, L_802773DC
    if (ctx->r2 != 0) {
        // 0x802773C0: nop
    
            goto L_802773DC;
    }
    // 0x802773C0: nop

    // 0x802773C4: lw          $t9, 0x0($s4)
    ctx->r25 = MEM_W(ctx->r20, 0X0);
    // 0x802773C8: nop

    // 0x802773CC: lw          $t0, 0xB0($t9)
    ctx->r8 = MEM_W(ctx->r25, 0XB0);
    // 0x802773D0: nop

    // 0x802773D4: bne         $s0, $t0, L_802774B4
    if (ctx->r16 != ctx->r8) {
        // 0x802773D8: nop
    
            goto L_802774B4;
    }
    // 0x802773D8: nop

L_802773DC:
    // 0x802773DC: lw          $a0, 0x0($s4)
    ctx->r4 = MEM_W(ctx->r20, 0X0);
    // 0x802773E0: nop

    // 0x802773E4: lhu         $t1, 0xC2($a0)
    ctx->r9 = MEM_HU(ctx->r4, 0XC2);
    // 0x802773E8: nop

    // 0x802773EC: andi        $t2, $t1, 0x40
    ctx->r10 = ctx->r9 & 0X40;
    // 0x802773F0: bne         $t2, $zero, L_802774B4
    if (ctx->r10 != 0) {
        // 0x802773F4: nop
    
            goto L_802774B4;
    }
    // 0x802773F4: nop

    // 0x802773F8: lw          $t3, 0x8C($a0)
    ctx->r11 = MEM_W(ctx->r4, 0X8C);
    // 0x802773FC: addiu       $at, $zero, 0x33
    ctx->r1 = ADD32(0, 0X33);
    // 0x80277400: lhu         $t4, 0xE($t3)
    ctx->r12 = MEM_HU(ctx->r11, 0XE);
    // 0x80277404: nop

    // 0x80277408: beq         $t4, $at, L_802774B4
    if (ctx->r12 == ctx->r1) {
        // 0x8027740C: nop
    
            goto L_802774B4;
    }
    // 0x8027740C: nop

    // 0x80277410: lw          $t5, 0xB0($a0)
    ctx->r13 = MEM_W(ctx->r4, 0XB0);
    // 0x80277414: nop

    // 0x80277418: bne         $t5, $zero, L_802774B4
    if (ctx->r13 != 0) {
        // 0x8027741C: nop
    
            goto L_802774B4;
    }
    // 0x8027741C: nop

    // 0x80277420: lw          $t6, 0x84($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X84);
    // 0x80277424: nop

    // 0x80277428: beq         $t6, $zero, L_8027744C
    if (ctx->r14 == 0) {
        // 0x8027742C: nop
    
            goto L_8027744C;
    }
    // 0x8027742C: nop

    // 0x80277430: lw          $t7, 0x4($s1)
    ctx->r15 = MEM_W(ctx->r17, 0X4);
    // 0x80277434: nop

    // 0x80277438: lbu         $t8, 0x6($t7)
    ctx->r24 = MEM_BU(ctx->r15, 0X6);
    // 0x8027743C: nop

    // 0x80277440: andi        $t9, $t8, 0x20
    ctx->r25 = ctx->r24 & 0X20;
    // 0x80277444: beq         $t9, $zero, L_802774B4
    if (ctx->r25 == 0) {
        // 0x80277448: nop
    
            goto L_802774B4;
    }
    // 0x80277448: nop

L_8027744C:
    // 0x8027744C: lbu         $t0, 0xBC($a0)
    ctx->r8 = MEM_BU(ctx->r4, 0XBC);
    // 0x80277450: lui         $t1, 0x800B
    ctx->r9 = S32(0X800B << 16);
    // 0x80277454: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x80277458: lbu         $t1, -0x54C0($t1)
    ctx->r9 = MEM_BU(ctx->r9, -0X54C0);
    // 0x8027745C: nop

    // 0x80277460: andi        $t2, $t1, 0x10
    ctx->r10 = ctx->r9 & 0X10;
    // 0x80277464: beq         $t2, $zero, L_8027749C
    if (ctx->r10 == 0) {
        // 0x80277468: nop
    
            goto L_8027749C;
    }
    // 0x80277468: nop

    // 0x8027746C: lw          $t3, 0x4($s1)
    ctx->r11 = MEM_W(ctx->r17, 0X4);
    // 0x80277470: nop

    // 0x80277474: lbu         $t4, 0x6($t3)
    ctx->r12 = MEM_BU(ctx->r11, 0X6);
    // 0x80277478: nop

    // 0x8027747C: andi        $t5, $t4, 0x10
    ctx->r13 = ctx->r12 & 0X10;
    // 0x80277480: beq         $t5, $zero, L_8027749C
    if (ctx->r13 == 0) {
        // 0x80277484: nop
    
            goto L_8027749C;
    }
    // 0x80277484: nop

    // 0x80277488: lhu         $t6, 0x6A($a0)
    ctx->r14 = MEM_HU(ctx->r4, 0X6A);
    // 0x8027748C: nop

    // 0x80277490: slti        $at, $t6, 0x7
    ctx->r1 = SIGNED(ctx->r14) < 0X7 ? 1 : 0;
    // 0x80277494: bne         $at, $zero, L_802774B4
    if (ctx->r1 != 0) {
        // 0x80277498: nop
    
            goto L_802774B4;
    }
    // 0x80277498: nop

L_8027749C:
    // 0x8027749C: sw          $s0, 0x4($s2)
    MEM_W(0X4, ctx->r18) = ctx->r16;
    // 0x802774A0: sw          $zero, 0xC($s2)
    MEM_W(0XC, ctx->r18) = 0;
    // 0x802774A4: addiu       $s2, $s2, 0x8
    ctx->r18 = ADD32(ctx->r18, 0X8);
    // 0x802774A8: sw          $s1, 0x0($s3)
    MEM_W(0X0, ctx->r19) = ctx->r17;
    // 0x802774AC: addiu       $s3, $s3, 0x4
    ctx->r19 = ADD32(ctx->r19, 0X4);
    // 0x802774B0: addiu       $s5, $s5, 0x1
    ctx->r21 = ADD32(ctx->r21, 0X1);
L_802774B4:
    // 0x802774B4: lw          $s0, 0xC($s1)
    ctx->r16 = MEM_W(ctx->r17, 0XC);
    // 0x802774B8: addiu       $s1, $s1, 0xC
    ctx->r17 = ADD32(ctx->r17, 0XC);
    // 0x802774BC: bne         $s0, $zero, L_802771FC
    if (ctx->r16 != 0) {
        // 0x802774C0: nop
    
            goto L_802771FC;
    }
    // 0x802774C0: nop

    // 0x802774C4: addiu       $a0, $sp, 0x134
    ctx->r4 = ADD32(ctx->r29, 0X134);
    // 0x802774C8: jal         0x80276CD0
    // 0x802774CC: or          $a1, $s5, $zero
    ctx->r5 = ctx->r21 | 0;
    ovl_8024B800_func_80276CD0(rdram, ctx);
        goto after_6;
    // 0x802774CC: or          $a1, $s5, $zero
    ctx->r5 = ctx->r21 | 0;
    after_6:
    // 0x802774D0: sll         $v1, $v0, 16
    ctx->r3 = S32(ctx->r2 << 16);
    // 0x802774D4: sra         $t7, $v1, 16
    ctx->r15 = S32(SIGNED(ctx->r3) >> 16);
    // 0x802774D8: bgez        $v0, L_802774F4
    if (SIGNED(ctx->r2) >= 0) {
        // 0x802774DC: or          $v1, $t7, $zero
        ctx->r3 = ctx->r15 | 0;
            goto L_802774F4;
    }
    // 0x802774DC: or          $v1, $t7, $zero
    ctx->r3 = ctx->r15 | 0;
    // 0x802774E0: jal         0x80276C1C
    // 0x802774E4: addiu       $a0, $sp, 0x78
    ctx->r4 = ADD32(ctx->r29, 0X78);
    ovl_8024B800_func_80276C1C(rdram, ctx);
        goto after_7;
    // 0x802774E4: addiu       $a0, $sp, 0x78
    ctx->r4 = ADD32(ctx->r29, 0X78);
    after_7:
    // 0x802774E8: sll         $v1, $v0, 16
    ctx->r3 = S32(ctx->r2 << 16);
    // 0x802774EC: sra         $t8, $v1, 16
    ctx->r24 = S32(SIGNED(ctx->r3) >> 16);
    // 0x802774F0: or          $v1, $t8, $zero
    ctx->r3 = ctx->r24 | 0;
L_802774F4:
    // 0x802774F4: sll         $t9, $v0, 16
    ctx->r25 = S32(ctx->r2 << 16);
    // 0x802774F8: sra         $t0, $t9, 16
    ctx->r8 = S32(SIGNED(ctx->r25) >> 16);
    // 0x802774FC: bltz        $t0, L_80277518
    if (SIGNED(ctx->r8) < 0) {
        // 0x80277500: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_80277518;
    }
    // 0x80277500: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x80277504: sll         $t1, $v1, 2
    ctx->r9 = S32(ctx->r3 << 2);
    // 0x80277508: addu        $v0, $sp, $t1
    ctx->r2 = ADD32(ctx->r29, ctx->r9);
    // 0x8027750C: lw          $v0, 0x134($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X134);
    // 0x80277510: b           L_8027751C
    // 0x80277514: lw          $ra, 0x64($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X64);
        goto L_8027751C;
    // 0x80277514: lw          $ra, 0x64($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X64);
L_80277518:
    // 0x80277518: lw          $ra, 0x64($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X64);
L_8027751C:
    // 0x8027751C: lwc1        $f21, 0x18($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X18);
    // 0x80277520: lwc1        $f20, 0x1C($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x80277524: lwc1        $f23, 0x20($sp)
    ctx->f_odd[(23 - 1) * 2] = MEM_W(ctx->r29, 0X20);
    // 0x80277528: lwc1        $f22, 0x24($sp)
    ctx->f22.u32l = MEM_W(ctx->r29, 0X24);
    // 0x8027752C: lwc1        $f25, 0x28($sp)
    ctx->f_odd[(25 - 1) * 2] = MEM_W(ctx->r29, 0X28);
    // 0x80277530: lwc1        $f24, 0x2C($sp)
    ctx->f24.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x80277534: lwc1        $f27, 0x30($sp)
    ctx->f_odd[(27 - 1) * 2] = MEM_W(ctx->r29, 0X30);
    // 0x80277538: lwc1        $f26, 0x34($sp)
    ctx->f26.u32l = MEM_W(ctx->r29, 0X34);
    // 0x8027753C: lwc1        $f29, 0x38($sp)
    ctx->f_odd[(29 - 1) * 2] = MEM_W(ctx->r29, 0X38);
    // 0x80277540: lwc1        $f28, 0x3C($sp)
    ctx->f28.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x80277544: lwc1        $f31, 0x40($sp)
    ctx->f_odd[(31 - 1) * 2] = MEM_W(ctx->r29, 0X40);
    // 0x80277548: lwc1        $f30, 0x44($sp)
    ctx->f30.u32l = MEM_W(ctx->r29, 0X44);
    // 0x8027754C: lw          $s0, 0x4C($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X4C);
    // 0x80277550: lw          $s1, 0x50($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X50);
    // 0x80277554: lw          $s2, 0x54($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X54);
    // 0x80277558: lw          $s3, 0x58($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X58);
    // 0x8027755C: lw          $s4, 0x5C($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X5C);
    // 0x80277560: lw          $s5, 0x60($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X60);
    // 0x80277564: jr          $ra
    // 0x80277568: addiu       $sp, $sp, 0x1C8
    ctx->r29 = ADD32(ctx->r29, 0X1C8);
    return;
    // 0x80277568: addiu       $sp, $sp, 0x1C8
    ctx->r29 = ADD32(ctx->r29, 0X1C8);
;}
RECOMP_FUNC void ovl_8024B800_func_802772AC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
L_802771FC:
    // 0x802772AC: cfc1        $t1, $FpcCsr
    ctx->r9 = get_cop1_cs();
    // 0x802772B0: nop

    // 0x802772B4: ori         $at, $t1, 0x3
    ctx->r1 = ctx->r9 | 0X3;
    // 0x802772B8: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x802772BC: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x802772C0: nop

    // 0x802772C4: cvt.w.s     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    ctx->f4.u32l = CVT_W_S(ctx->f18.fl);
    // 0x802772C8: mfc1        $v0, $f4
    ctx->r2 = (int32_t)ctx->f4.u32l;
    // 0x802772CC: ctc1        $t1, $FpcCsr
    set_cop1_cs(ctx->r9);
    // 0x802772D0: multu       $v0, $v0
    result = U64(U32(ctx->r2)) * U64(U32(ctx->r2)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x802772D4: sub.s       $f8, $f6, $f20
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f8.fl = ctx->f6.fl - ctx->f20.fl;
    // 0x802772D8: cfc1        $t2, $FpcCsr
    ctx->r10 = get_cop1_cs();
    // 0x802772DC: nop

    // 0x802772E0: ori         $at, $t2, 0x3
    ctx->r1 = ctx->r10 | 0X3;
    // 0x802772E4: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x802772E8: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x802772EC: nop

    // 0x802772F0: cvt.w.s     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.u32l = CVT_W_S(ctx->f8.fl);
    // 0x802772F4: mfc1        $v1, $f10
    ctx->r3 = (int32_t)ctx->f10.u32l;
    // 0x802772F8: mflo        $t3
    ctx->r11 = lo;
    // 0x802772FC: ctc1        $t2, $FpcCsr
    set_cop1_cs(ctx->r10);
    // 0x80277300: nop

    // 0x80277304: multu       $v1, $v1
    result = U64(U32(ctx->r3)) * U64(U32(ctx->r3)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80277308: mflo        $t4
    ctx->r12 = lo;
    // 0x8027730C: addu        $t5, $t3, $t4
    ctx->r13 = ADD32(ctx->r11, ctx->r12);
    // 0x80277310: mtc1        $t5, $f16
    ctx->f16.u32l = ctx->r13;
    // 0x80277314: jal         0x8007FA40
    // 0x80277318: cvt.s.w     $f12, $f16
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 16);
    ctx->f12.fl = CVT_S_W(ctx->f16.u32l);
    func_8007FA40(rdram, ctx);
        goto after_0;
    // 0x80277318: cvt.s.w     $f12, $f16
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 16);
    ctx->f12.fl = CVT_S_W(ctx->f16.u32l);
    after_0:
    // 0x8027731C: lw          $v0, 0x4($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X4);
    // 0x80277320: mov.s       $f22, $f0
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 0);
    ctx->f22.fl = ctx->f0.fl;
    // 0x80277324: lbu         $v1, 0x6($v0)
    ctx->r3 = MEM_BU(ctx->r2, 0X6);
    // 0x80277328: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8027732C: andi        $t6, $v1, 0x40
    ctx->r14 = ctx->r3 & 0X40;
    // 0x80277330: beq         $t6, $zero, L_80277360
    if (ctx->r14 == 0) {
        // 0x80277334: andi        $t7, $v1, 0x80
        ctx->r15 = ctx->r3 & 0X80;
            goto L_80277360;
    }
    // 0x80277334: andi        $t7, $v1, 0x80
    ctx->r15 = ctx->r3 & 0X80;
    // 0x80277338: mfc1        $a1, $f28
    ctx->r5 = (int32_t)ctx->f28.u32l;
    // 0x8027733C: mfc1        $a2, $f20
    ctx->r6 = (int32_t)ctx->f20.u32l;
    // 0x80277340: mfc1        $a3, $f24
    ctx->r7 = (int32_t)ctx->f24.u32l;
    // 0x80277344: jal         0x80276F34
    // 0x80277348: sw          $s1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r17;
    ovl_8024B800_func_80276F34(rdram, ctx);
        goto after_1;
    // 0x80277348: sw          $s1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r17;
    after_1:
    // 0x8027734C: lw          $v0, 0x4($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X4);
    // 0x80277350: nop

    // 0x80277354: lbu         $v1, 0x6($v0)
    ctx->r3 = MEM_BU(ctx->r2, 0X6);
    // 0x80277358: nop

    // 0x8027735C: andi        $t7, $v1, 0x80
    ctx->r15 = ctx->r3 & 0X80;
L_80277360:
    // 0x80277360: beq         $t7, $zero, L_802774B4
    if (ctx->r15 == 0) {
        // 0x80277364: lui         $at, 0x4120
        ctx->r1 = S32(0X4120 << 16);
            goto L_802774B4;
    }
    // 0x80277364: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x80277368: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x8027736C: nop

    // 0x80277370: add.s       $f4, $f24, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f24.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f24.fl + ctx->f18.fl;
    // 0x80277374: c.lt.s      $f22, $f4
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f22.fl < ctx->f4.fl;
    // 0x80277378: nop

    // 0x8027737C: bc1f        L_802774B4
    if (!c1cs) {
        // 0x80277380: nop
    
            goto L_802774B4;
    }
    // 0x80277380: nop

    // 0x80277384: lb          $t8, 0x4($v0)
    ctx->r24 = MEM_B(ctx->r2, 0X4);
    // 0x80277388: nop

    // 0x8027738C: mtc1        $t8, $f6
    ctx->f6.u32l = ctx->r24;
    // 0x80277390: nop

    // 0x80277394: cvt.s.w     $f0, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    ctx->f0.fl = CVT_S_W(ctx->f6.u32l);
    // 0x80277398: add.s       $f12, $f0, $f26
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 26);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f26.fl); 
    ctx->f12.fl = ctx->f0.fl + ctx->f26.fl;
    // 0x8027739C: jal         0x8027809C
    // 0x802773A0: sub.s       $f14, $f26, $f0
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 26);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f26.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f14.fl = ctx->f26.fl - ctx->f0.fl;
    ovl_8024B800_func_8027809C(rdram, ctx);
        goto after_2;
    // 0x802773A0: sub.s       $f14, $f26, $f0
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 26);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f26.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f14.fl = ctx->f26.fl - ctx->f0.fl;
    after_2:
    // 0x802773A4: beq         $v0, $zero, L_802774B4
    if (ctx->r2 == 0) {
        // 0x802773A8: or          $a3, $s2, $zero
        ctx->r7 = ctx->r18 | 0;
            goto L_802774B4;
    }
    // 0x802773A8: or          $a3, $s2, $zero
    ctx->r7 = ctx->r18 | 0;
    // 0x802773AC: mfc1        $a2, $f24
    ctx->r6 = (int32_t)ctx->f24.u32l;
    // 0x802773B0: mov.s       $f12, $f28
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 28);
    ctx->f12.fl = ctx->f28.fl;
    // 0x802773B4: jal         0x80278144
    // 0x802773B8: mov.s       $f14, $f20
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 20);
    ctx->f14.fl = ctx->f20.fl;
    ovl_8024B800_func_80278144(rdram, ctx);
        goto after_3;
    // 0x802773B8: mov.s       $f14, $f20
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 20);
    ctx->f14.fl = ctx->f20.fl;
    after_3:
    // 0x802773BC: bne         $v0, $zero, L_802773DC
    if (ctx->r2 != 0) {
        // 0x802773C0: nop
    
            goto L_802773DC;
    }
    // 0x802773C0: nop

    // 0x802773C4: lw          $t9, 0x0($s4)
    ctx->r25 = MEM_W(ctx->r20, 0X0);
    // 0x802773C8: nop

    // 0x802773CC: lw          $t0, 0xB0($t9)
    ctx->r8 = MEM_W(ctx->r25, 0XB0);
    // 0x802773D0: nop

    // 0x802773D4: bne         $s0, $t0, L_802774B4
    if (ctx->r16 != ctx->r8) {
        // 0x802773D8: nop
    
            goto L_802774B4;
    }
    // 0x802773D8: nop

L_802773DC:
    // 0x802773DC: lw          $a0, 0x0($s4)
    ctx->r4 = MEM_W(ctx->r20, 0X0);
    // 0x802773E0: nop

    // 0x802773E4: lhu         $t1, 0xC2($a0)
    ctx->r9 = MEM_HU(ctx->r4, 0XC2);
    // 0x802773E8: nop

    // 0x802773EC: andi        $t2, $t1, 0x40
    ctx->r10 = ctx->r9 & 0X40;
    // 0x802773F0: bne         $t2, $zero, L_802774B4
    if (ctx->r10 != 0) {
        // 0x802773F4: nop
    
            goto L_802774B4;
    }
    // 0x802773F4: nop

    // 0x802773F8: lw          $t3, 0x8C($a0)
    ctx->r11 = MEM_W(ctx->r4, 0X8C);
    // 0x802773FC: addiu       $at, $zero, 0x33
    ctx->r1 = ADD32(0, 0X33);
    // 0x80277400: lhu         $t4, 0xE($t3)
    ctx->r12 = MEM_HU(ctx->r11, 0XE);
    // 0x80277404: nop

    // 0x80277408: beq         $t4, $at, L_802774B4
    if (ctx->r12 == ctx->r1) {
        // 0x8027740C: nop
    
            goto L_802774B4;
    }
    // 0x8027740C: nop

    // 0x80277410: lw          $t5, 0xB0($a0)
    ctx->r13 = MEM_W(ctx->r4, 0XB0);
    // 0x80277414: nop

    // 0x80277418: bne         $t5, $zero, L_802774B4
    if (ctx->r13 != 0) {
        // 0x8027741C: nop
    
            goto L_802774B4;
    }
    // 0x8027741C: nop

    // 0x80277420: lw          $t6, 0x84($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X84);
    // 0x80277424: nop

    // 0x80277428: beq         $t6, $zero, L_8027744C
    if (ctx->r14 == 0) {
        // 0x8027742C: nop
    
            goto L_8027744C;
    }
    // 0x8027742C: nop

    // 0x80277430: lw          $t7, 0x4($s1)
    ctx->r15 = MEM_W(ctx->r17, 0X4);
    // 0x80277434: nop

    // 0x80277438: lbu         $t8, 0x6($t7)
    ctx->r24 = MEM_BU(ctx->r15, 0X6);
    // 0x8027743C: nop

    // 0x80277440: andi        $t9, $t8, 0x20
    ctx->r25 = ctx->r24 & 0X20;
    // 0x80277444: beq         $t9, $zero, L_802774B4
    if (ctx->r25 == 0) {
        // 0x80277448: nop
    
            goto L_802774B4;
    }
    // 0x80277448: nop

L_8027744C:
    // 0x8027744C: lbu         $t0, 0xBC($a0)
    ctx->r8 = MEM_BU(ctx->r4, 0XBC);
    // 0x80277450: lui         $t1, 0x800B
    ctx->r9 = S32(0X800B << 16);
    // 0x80277454: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x80277458: lbu         $t1, -0x54C0($t1)
    ctx->r9 = MEM_BU(ctx->r9, -0X54C0);
    // 0x8027745C: nop

    // 0x80277460: andi        $t2, $t1, 0x10
    ctx->r10 = ctx->r9 & 0X10;
    // 0x80277464: beq         $t2, $zero, L_8027749C
    if (ctx->r10 == 0) {
        // 0x80277468: nop
    
            goto L_8027749C;
    }
    // 0x80277468: nop

    // 0x8027746C: lw          $t3, 0x4($s1)
    ctx->r11 = MEM_W(ctx->r17, 0X4);
    // 0x80277470: nop

    // 0x80277474: lbu         $t4, 0x6($t3)
    ctx->r12 = MEM_BU(ctx->r11, 0X6);
    // 0x80277478: nop

    // 0x8027747C: andi        $t5, $t4, 0x10
    ctx->r13 = ctx->r12 & 0X10;
    // 0x80277480: beq         $t5, $zero, L_8027749C
    if (ctx->r13 == 0) {
        // 0x80277484: nop
    
            goto L_8027749C;
    }
    // 0x80277484: nop

    // 0x80277488: lhu         $t6, 0x6A($a0)
    ctx->r14 = MEM_HU(ctx->r4, 0X6A);
    // 0x8027748C: nop

    // 0x80277490: slti        $at, $t6, 0x7
    ctx->r1 = SIGNED(ctx->r14) < 0X7 ? 1 : 0;
    // 0x80277494: bne         $at, $zero, L_802774B4
    if (ctx->r1 != 0) {
        // 0x80277498: nop
    
            goto L_802774B4;
    }
    // 0x80277498: nop

L_8027749C:
    // 0x8027749C: sw          $s0, 0x4($s2)
    MEM_W(0X4, ctx->r18) = ctx->r16;
    // 0x802774A0: sw          $zero, 0xC($s2)
    MEM_W(0XC, ctx->r18) = 0;
    // 0x802774A4: addiu       $s2, $s2, 0x8
    ctx->r18 = ADD32(ctx->r18, 0X8);
    // 0x802774A8: sw          $s1, 0x0($s3)
    MEM_W(0X0, ctx->r19) = ctx->r17;
    // 0x802774AC: addiu       $s3, $s3, 0x4
    ctx->r19 = ADD32(ctx->r19, 0X4);
    // 0x802774B0: addiu       $s5, $s5, 0x1
    ctx->r21 = ADD32(ctx->r21, 0X1);
L_802774B4:
    // 0x802774B4: lw          $s0, 0xC($s1)
    ctx->r16 = MEM_W(ctx->r17, 0XC);
    // 0x802774B8: addiu       $s1, $s1, 0xC
    ctx->r17 = ADD32(ctx->r17, 0XC);
    // 0x802774BC: bne         $s0, $zero, L_802771FC
    if (ctx->r16 != 0) {
            // 0x802774C0: nop

    ovl_8024B800_func_802771FC(rdram, ctx);
    return;
    }
    // 0x802774C0: nop

    // 0x802774C4: addiu       $a0, $sp, 0x134
    ctx->r4 = ADD32(ctx->r29, 0X134);
    // 0x802774C8: jal         0x80276CD0
    // 0x802774CC: or          $a1, $s5, $zero
    ctx->r5 = ctx->r21 | 0;
    ovl_8024B800_func_80276CD0(rdram, ctx);
        goto after_4;
    // 0x802774CC: or          $a1, $s5, $zero
    ctx->r5 = ctx->r21 | 0;
    after_4:
    // 0x802774D0: sll         $v1, $v0, 16
    ctx->r3 = S32(ctx->r2 << 16);
    // 0x802774D4: sra         $t7, $v1, 16
    ctx->r15 = S32(SIGNED(ctx->r3) >> 16);
    // 0x802774D8: bgez        $v0, L_802774F4
    if (SIGNED(ctx->r2) >= 0) {
        // 0x802774DC: or          $v1, $t7, $zero
        ctx->r3 = ctx->r15 | 0;
            goto L_802774F4;
    }
    // 0x802774DC: or          $v1, $t7, $zero
    ctx->r3 = ctx->r15 | 0;
    // 0x802774E0: jal         0x80276C1C
    // 0x802774E4: addiu       $a0, $sp, 0x78
    ctx->r4 = ADD32(ctx->r29, 0X78);
    ovl_8024B800_func_80276C1C(rdram, ctx);
        goto after_5;
    // 0x802774E4: addiu       $a0, $sp, 0x78
    ctx->r4 = ADD32(ctx->r29, 0X78);
    after_5:
    // 0x802774E8: sll         $v1, $v0, 16
    ctx->r3 = S32(ctx->r2 << 16);
    // 0x802774EC: sra         $t8, $v1, 16
    ctx->r24 = S32(SIGNED(ctx->r3) >> 16);
    // 0x802774F0: or          $v1, $t8, $zero
    ctx->r3 = ctx->r24 | 0;
L_802774F4:
    // 0x802774F4: sll         $t9, $v0, 16
    ctx->r25 = S32(ctx->r2 << 16);
    // 0x802774F8: sra         $t0, $t9, 16
    ctx->r8 = S32(SIGNED(ctx->r25) >> 16);
    // 0x802774FC: bltz        $t0, L_80277518
    if (SIGNED(ctx->r8) < 0) {
        // 0x80277500: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_80277518;
    }
    // 0x80277500: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x80277504: sll         $t1, $v1, 2
    ctx->r9 = S32(ctx->r3 << 2);
    // 0x80277508: addu        $v0, $sp, $t1
    ctx->r2 = ADD32(ctx->r29, ctx->r9);
    // 0x8027750C: lw          $v0, 0x134($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X134);
    // 0x80277510: b           L_8027751C
    // 0x80277514: lw          $ra, 0x64($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X64);
        goto L_8027751C;
    // 0x80277514: lw          $ra, 0x64($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X64);
L_80277518:
    // 0x80277518: lw          $ra, 0x64($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X64);
L_8027751C:
    // 0x8027751C: lwc1        $f21, 0x18($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X18);
    // 0x80277520: lwc1        $f20, 0x1C($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x80277524: lwc1        $f23, 0x20($sp)
    ctx->f_odd[(23 - 1) * 2] = MEM_W(ctx->r29, 0X20);
    // 0x80277528: lwc1        $f22, 0x24($sp)
    ctx->f22.u32l = MEM_W(ctx->r29, 0X24);
    // 0x8027752C: lwc1        $f25, 0x28($sp)
    ctx->f_odd[(25 - 1) * 2] = MEM_W(ctx->r29, 0X28);
    // 0x80277530: lwc1        $f24, 0x2C($sp)
    ctx->f24.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x80277534: lwc1        $f27, 0x30($sp)
    ctx->f_odd[(27 - 1) * 2] = MEM_W(ctx->r29, 0X30);
    // 0x80277538: lwc1        $f26, 0x34($sp)
    ctx->f26.u32l = MEM_W(ctx->r29, 0X34);
    // 0x8027753C: lwc1        $f29, 0x38($sp)
    ctx->f_odd[(29 - 1) * 2] = MEM_W(ctx->r29, 0X38);
    // 0x80277540: lwc1        $f28, 0x3C($sp)
    ctx->f28.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x80277544: lwc1        $f31, 0x40($sp)
    ctx->f_odd[(31 - 1) * 2] = MEM_W(ctx->r29, 0X40);
    // 0x80277548: lwc1        $f30, 0x44($sp)
    ctx->f30.u32l = MEM_W(ctx->r29, 0X44);
    // 0x8027754C: lw          $s0, 0x4C($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X4C);
    // 0x80277550: lw          $s1, 0x50($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X50);
    // 0x80277554: lw          $s2, 0x54($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X54);
    // 0x80277558: lw          $s3, 0x58($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X58);
    // 0x8027755C: lw          $s4, 0x5C($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X5C);
    // 0x80277560: lw          $s5, 0x60($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X60);
    // 0x80277564: jr          $ra
    // 0x80277568: addiu       $sp, $sp, 0x1C8
    ctx->r29 = ADD32(ctx->r29, 0X1C8);
    return;
    // 0x80277568: addiu       $sp, $sp, 0x1C8
    ctx->r29 = ADD32(ctx->r29, 0X1C8);
;}
RECOMP_FUNC void ovl_8024B800_func_80277340(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
L_802771FC:
    // 0x80277340: mfc1        $a3, $f24
    ctx->r7 = (int32_t)ctx->f24.u32l;
    // 0x80277344: jal         0x80276F34
    // 0x80277348: sw          $s1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r17;
    ovl_8024B800_func_80276F34(rdram, ctx);
        goto after_0;
    // 0x80277348: sw          $s1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r17;
    after_0:
    // 0x8027734C: lw          $v0, 0x4($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X4);
    // 0x80277350: nop

    // 0x80277354: lbu         $v1, 0x6($v0)
    ctx->r3 = MEM_BU(ctx->r2, 0X6);
    // 0x80277358: nop

    // 0x8027735C: andi        $t7, $v1, 0x80
    ctx->r15 = ctx->r3 & 0X80;
    // 0x80277360: beq         $t7, $zero, L_802774B4
    if (ctx->r15 == 0) {
        // 0x80277364: lui         $at, 0x4120
        ctx->r1 = S32(0X4120 << 16);
            goto L_802774B4;
    }
    // 0x80277364: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x80277368: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x8027736C: nop

    // 0x80277370: add.s       $f4, $f24, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f24.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f24.fl + ctx->f18.fl;
    // 0x80277374: c.lt.s      $f22, $f4
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f22.fl < ctx->f4.fl;
    // 0x80277378: nop

    // 0x8027737C: bc1f        L_802774B4
    if (!c1cs) {
        // 0x80277380: nop
    
            goto L_802774B4;
    }
    // 0x80277380: nop

    // 0x80277384: lb          $t8, 0x4($v0)
    ctx->r24 = MEM_B(ctx->r2, 0X4);
    // 0x80277388: nop

    // 0x8027738C: mtc1        $t8, $f6
    ctx->f6.u32l = ctx->r24;
    // 0x80277390: nop

    // 0x80277394: cvt.s.w     $f0, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    ctx->f0.fl = CVT_S_W(ctx->f6.u32l);
    // 0x80277398: add.s       $f12, $f0, $f26
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 26);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f26.fl); 
    ctx->f12.fl = ctx->f0.fl + ctx->f26.fl;
    // 0x8027739C: jal         0x8027809C
    // 0x802773A0: sub.s       $f14, $f26, $f0
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 26);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f26.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f14.fl = ctx->f26.fl - ctx->f0.fl;
    ovl_8024B800_func_8027809C(rdram, ctx);
        goto after_1;
    // 0x802773A0: sub.s       $f14, $f26, $f0
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 26);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f26.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f14.fl = ctx->f26.fl - ctx->f0.fl;
    after_1:
    // 0x802773A4: beq         $v0, $zero, L_802774B4
    if (ctx->r2 == 0) {
        // 0x802773A8: or          $a3, $s2, $zero
        ctx->r7 = ctx->r18 | 0;
            goto L_802774B4;
    }
    // 0x802773A8: or          $a3, $s2, $zero
    ctx->r7 = ctx->r18 | 0;
    // 0x802773AC: mfc1        $a2, $f24
    ctx->r6 = (int32_t)ctx->f24.u32l;
    // 0x802773B0: mov.s       $f12, $f28
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 28);
    ctx->f12.fl = ctx->f28.fl;
    // 0x802773B4: jal         0x80278144
    // 0x802773B8: mov.s       $f14, $f20
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 20);
    ctx->f14.fl = ctx->f20.fl;
    ovl_8024B800_func_80278144(rdram, ctx);
        goto after_2;
    // 0x802773B8: mov.s       $f14, $f20
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 20);
    ctx->f14.fl = ctx->f20.fl;
    after_2:
    // 0x802773BC: bne         $v0, $zero, L_802773DC
    if (ctx->r2 != 0) {
        // 0x802773C0: nop
    
            goto L_802773DC;
    }
    // 0x802773C0: nop

    // 0x802773C4: lw          $t9, 0x0($s4)
    ctx->r25 = MEM_W(ctx->r20, 0X0);
    // 0x802773C8: nop

    // 0x802773CC: lw          $t0, 0xB0($t9)
    ctx->r8 = MEM_W(ctx->r25, 0XB0);
    // 0x802773D0: nop

    // 0x802773D4: bne         $s0, $t0, L_802774B4
    if (ctx->r16 != ctx->r8) {
        // 0x802773D8: nop
    
            goto L_802774B4;
    }
    // 0x802773D8: nop

L_802773DC:
    // 0x802773DC: lw          $a0, 0x0($s4)
    ctx->r4 = MEM_W(ctx->r20, 0X0);
    // 0x802773E0: nop

    // 0x802773E4: lhu         $t1, 0xC2($a0)
    ctx->r9 = MEM_HU(ctx->r4, 0XC2);
    // 0x802773E8: nop

    // 0x802773EC: andi        $t2, $t1, 0x40
    ctx->r10 = ctx->r9 & 0X40;
    // 0x802773F0: bne         $t2, $zero, L_802774B4
    if (ctx->r10 != 0) {
        // 0x802773F4: nop
    
            goto L_802774B4;
    }
    // 0x802773F4: nop

    // 0x802773F8: lw          $t3, 0x8C($a0)
    ctx->r11 = MEM_W(ctx->r4, 0X8C);
    // 0x802773FC: addiu       $at, $zero, 0x33
    ctx->r1 = ADD32(0, 0X33);
    // 0x80277400: lhu         $t4, 0xE($t3)
    ctx->r12 = MEM_HU(ctx->r11, 0XE);
    // 0x80277404: nop

    // 0x80277408: beq         $t4, $at, L_802774B4
    if (ctx->r12 == ctx->r1) {
        // 0x8027740C: nop
    
            goto L_802774B4;
    }
    // 0x8027740C: nop

    // 0x80277410: lw          $t5, 0xB0($a0)
    ctx->r13 = MEM_W(ctx->r4, 0XB0);
    // 0x80277414: nop

    // 0x80277418: bne         $t5, $zero, L_802774B4
    if (ctx->r13 != 0) {
        // 0x8027741C: nop
    
            goto L_802774B4;
    }
    // 0x8027741C: nop

    // 0x80277420: lw          $t6, 0x84($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X84);
    // 0x80277424: nop

    // 0x80277428: beq         $t6, $zero, L_8027744C
    if (ctx->r14 == 0) {
        // 0x8027742C: nop
    
            goto L_8027744C;
    }
    // 0x8027742C: nop

    // 0x80277430: lw          $t7, 0x4($s1)
    ctx->r15 = MEM_W(ctx->r17, 0X4);
    // 0x80277434: nop

    // 0x80277438: lbu         $t8, 0x6($t7)
    ctx->r24 = MEM_BU(ctx->r15, 0X6);
    // 0x8027743C: nop

    // 0x80277440: andi        $t9, $t8, 0x20
    ctx->r25 = ctx->r24 & 0X20;
    // 0x80277444: beq         $t9, $zero, L_802774B4
    if (ctx->r25 == 0) {
        // 0x80277448: nop
    
            goto L_802774B4;
    }
    // 0x80277448: nop

L_8027744C:
    // 0x8027744C: lbu         $t0, 0xBC($a0)
    ctx->r8 = MEM_BU(ctx->r4, 0XBC);
    // 0x80277450: lui         $t1, 0x800B
    ctx->r9 = S32(0X800B << 16);
    // 0x80277454: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x80277458: lbu         $t1, -0x54C0($t1)
    ctx->r9 = MEM_BU(ctx->r9, -0X54C0);
    // 0x8027745C: nop

    // 0x80277460: andi        $t2, $t1, 0x10
    ctx->r10 = ctx->r9 & 0X10;
    // 0x80277464: beq         $t2, $zero, L_8027749C
    if (ctx->r10 == 0) {
        // 0x80277468: nop
    
            goto L_8027749C;
    }
    // 0x80277468: nop

    // 0x8027746C: lw          $t3, 0x4($s1)
    ctx->r11 = MEM_W(ctx->r17, 0X4);
    // 0x80277470: nop

    // 0x80277474: lbu         $t4, 0x6($t3)
    ctx->r12 = MEM_BU(ctx->r11, 0X6);
    // 0x80277478: nop

    // 0x8027747C: andi        $t5, $t4, 0x10
    ctx->r13 = ctx->r12 & 0X10;
    // 0x80277480: beq         $t5, $zero, L_8027749C
    if (ctx->r13 == 0) {
        // 0x80277484: nop
    
            goto L_8027749C;
    }
    // 0x80277484: nop

    // 0x80277488: lhu         $t6, 0x6A($a0)
    ctx->r14 = MEM_HU(ctx->r4, 0X6A);
    // 0x8027748C: nop

    // 0x80277490: slti        $at, $t6, 0x7
    ctx->r1 = SIGNED(ctx->r14) < 0X7 ? 1 : 0;
    // 0x80277494: bne         $at, $zero, L_802774B4
    if (ctx->r1 != 0) {
        // 0x80277498: nop
    
            goto L_802774B4;
    }
    // 0x80277498: nop

L_8027749C:
    // 0x8027749C: sw          $s0, 0x4($s2)
    MEM_W(0X4, ctx->r18) = ctx->r16;
    // 0x802774A0: sw          $zero, 0xC($s2)
    MEM_W(0XC, ctx->r18) = 0;
    // 0x802774A4: addiu       $s2, $s2, 0x8
    ctx->r18 = ADD32(ctx->r18, 0X8);
    // 0x802774A8: sw          $s1, 0x0($s3)
    MEM_W(0X0, ctx->r19) = ctx->r17;
    // 0x802774AC: addiu       $s3, $s3, 0x4
    ctx->r19 = ADD32(ctx->r19, 0X4);
    // 0x802774B0: addiu       $s5, $s5, 0x1
    ctx->r21 = ADD32(ctx->r21, 0X1);
L_802774B4:
    // 0x802774B4: lw          $s0, 0xC($s1)
    ctx->r16 = MEM_W(ctx->r17, 0XC);
    // 0x802774B8: addiu       $s1, $s1, 0xC
    ctx->r17 = ADD32(ctx->r17, 0XC);
    // 0x802774BC: bne         $s0, $zero, L_802771FC
    if (ctx->r16 != 0) {
            // 0x802774C0: nop

    ovl_8024B800_func_802771FC(rdram, ctx);
    return;
    }
    // 0x802774C0: nop

    // 0x802774C4: addiu       $a0, $sp, 0x134
    ctx->r4 = ADD32(ctx->r29, 0X134);
    // 0x802774C8: jal         0x80276CD0
    // 0x802774CC: or          $a1, $s5, $zero
    ctx->r5 = ctx->r21 | 0;
    ovl_8024B800_func_80276CD0(rdram, ctx);
        goto after_3;
    // 0x802774CC: or          $a1, $s5, $zero
    ctx->r5 = ctx->r21 | 0;
    after_3:
    // 0x802774D0: sll         $v1, $v0, 16
    ctx->r3 = S32(ctx->r2 << 16);
    // 0x802774D4: sra         $t7, $v1, 16
    ctx->r15 = S32(SIGNED(ctx->r3) >> 16);
    // 0x802774D8: bgez        $v0, L_802774F4
    if (SIGNED(ctx->r2) >= 0) {
        // 0x802774DC: or          $v1, $t7, $zero
        ctx->r3 = ctx->r15 | 0;
            goto L_802774F4;
    }
    // 0x802774DC: or          $v1, $t7, $zero
    ctx->r3 = ctx->r15 | 0;
    // 0x802774E0: jal         0x80276C1C
    // 0x802774E4: addiu       $a0, $sp, 0x78
    ctx->r4 = ADD32(ctx->r29, 0X78);
    ovl_8024B800_func_80276C1C(rdram, ctx);
        goto after_4;
    // 0x802774E4: addiu       $a0, $sp, 0x78
    ctx->r4 = ADD32(ctx->r29, 0X78);
    after_4:
    // 0x802774E8: sll         $v1, $v0, 16
    ctx->r3 = S32(ctx->r2 << 16);
    // 0x802774EC: sra         $t8, $v1, 16
    ctx->r24 = S32(SIGNED(ctx->r3) >> 16);
    // 0x802774F0: or          $v1, $t8, $zero
    ctx->r3 = ctx->r24 | 0;
L_802774F4:
    // 0x802774F4: sll         $t9, $v0, 16
    ctx->r25 = S32(ctx->r2 << 16);
    // 0x802774F8: sra         $t0, $t9, 16
    ctx->r8 = S32(SIGNED(ctx->r25) >> 16);
    // 0x802774FC: bltz        $t0, L_80277518
    if (SIGNED(ctx->r8) < 0) {
        // 0x80277500: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_80277518;
    }
    // 0x80277500: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x80277504: sll         $t1, $v1, 2
    ctx->r9 = S32(ctx->r3 << 2);
    // 0x80277508: addu        $v0, $sp, $t1
    ctx->r2 = ADD32(ctx->r29, ctx->r9);
    // 0x8027750C: lw          $v0, 0x134($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X134);
    // 0x80277510: b           L_8027751C
    // 0x80277514: lw          $ra, 0x64($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X64);
        goto L_8027751C;
    // 0x80277514: lw          $ra, 0x64($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X64);
L_80277518:
    // 0x80277518: lw          $ra, 0x64($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X64);
L_8027751C:
    // 0x8027751C: lwc1        $f21, 0x18($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X18);
    // 0x80277520: lwc1        $f20, 0x1C($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x80277524: lwc1        $f23, 0x20($sp)
    ctx->f_odd[(23 - 1) * 2] = MEM_W(ctx->r29, 0X20);
    // 0x80277528: lwc1        $f22, 0x24($sp)
    ctx->f22.u32l = MEM_W(ctx->r29, 0X24);
    // 0x8027752C: lwc1        $f25, 0x28($sp)
    ctx->f_odd[(25 - 1) * 2] = MEM_W(ctx->r29, 0X28);
    // 0x80277530: lwc1        $f24, 0x2C($sp)
    ctx->f24.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x80277534: lwc1        $f27, 0x30($sp)
    ctx->f_odd[(27 - 1) * 2] = MEM_W(ctx->r29, 0X30);
    // 0x80277538: lwc1        $f26, 0x34($sp)
    ctx->f26.u32l = MEM_W(ctx->r29, 0X34);
    // 0x8027753C: lwc1        $f29, 0x38($sp)
    ctx->f_odd[(29 - 1) * 2] = MEM_W(ctx->r29, 0X38);
    // 0x80277540: lwc1        $f28, 0x3C($sp)
    ctx->f28.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x80277544: lwc1        $f31, 0x40($sp)
    ctx->f_odd[(31 - 1) * 2] = MEM_W(ctx->r29, 0X40);
    // 0x80277548: lwc1        $f30, 0x44($sp)
    ctx->f30.u32l = MEM_W(ctx->r29, 0X44);
    // 0x8027754C: lw          $s0, 0x4C($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X4C);
    // 0x80277550: lw          $s1, 0x50($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X50);
    // 0x80277554: lw          $s2, 0x54($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X54);
    // 0x80277558: lw          $s3, 0x58($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X58);
    // 0x8027755C: lw          $s4, 0x5C($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X5C);
    // 0x80277560: lw          $s5, 0x60($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X60);
    // 0x80277564: jr          $ra
    // 0x80277568: addiu       $sp, $sp, 0x1C8
    ctx->r29 = ADD32(ctx->r29, 0X1C8);
    return;
    // 0x80277568: addiu       $sp, $sp, 0x1C8
    ctx->r29 = ADD32(ctx->r29, 0X1C8);
;}
RECOMP_FUNC void ovl_8024B800_func_802773BC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
L_802771FC:
    // 0x802773BC: bne         $v0, $zero, L_802773DC
    if (ctx->r2 != 0) {
        // 0x802773C0: nop
    
            goto L_802773DC;
    }
    // 0x802773C0: nop

    // 0x802773C4: lw          $t9, 0x0($s4)
    ctx->r25 = MEM_W(ctx->r20, 0X0);
    // 0x802773C8: nop

    // 0x802773CC: lw          $t0, 0xB0($t9)
    ctx->r8 = MEM_W(ctx->r25, 0XB0);
    // 0x802773D0: nop

    // 0x802773D4: bne         $s0, $t0, L_802774B4
    if (ctx->r16 != ctx->r8) {
        // 0x802773D8: nop
    
            goto L_802774B4;
    }
    // 0x802773D8: nop

L_802773DC:
    // 0x802773DC: lw          $a0, 0x0($s4)
    ctx->r4 = MEM_W(ctx->r20, 0X0);
    // 0x802773E0: nop

    // 0x802773E4: lhu         $t1, 0xC2($a0)
    ctx->r9 = MEM_HU(ctx->r4, 0XC2);
    // 0x802773E8: nop

    // 0x802773EC: andi        $t2, $t1, 0x40
    ctx->r10 = ctx->r9 & 0X40;
    // 0x802773F0: bne         $t2, $zero, L_802774B4
    if (ctx->r10 != 0) {
        // 0x802773F4: nop
    
            goto L_802774B4;
    }
    // 0x802773F4: nop

    // 0x802773F8: lw          $t3, 0x8C($a0)
    ctx->r11 = MEM_W(ctx->r4, 0X8C);
    // 0x802773FC: addiu       $at, $zero, 0x33
    ctx->r1 = ADD32(0, 0X33);
    // 0x80277400: lhu         $t4, 0xE($t3)
    ctx->r12 = MEM_HU(ctx->r11, 0XE);
    // 0x80277404: nop

    // 0x80277408: beq         $t4, $at, L_802774B4
    if (ctx->r12 == ctx->r1) {
        // 0x8027740C: nop
    
            goto L_802774B4;
    }
    // 0x8027740C: nop

    // 0x80277410: lw          $t5, 0xB0($a0)
    ctx->r13 = MEM_W(ctx->r4, 0XB0);
    // 0x80277414: nop

    // 0x80277418: bne         $t5, $zero, L_802774B4
    if (ctx->r13 != 0) {
        // 0x8027741C: nop
    
            goto L_802774B4;
    }
    // 0x8027741C: nop

    // 0x80277420: lw          $t6, 0x84($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X84);
    // 0x80277424: nop

    // 0x80277428: beq         $t6, $zero, L_8027744C
    if (ctx->r14 == 0) {
        // 0x8027742C: nop
    
            goto L_8027744C;
    }
    // 0x8027742C: nop

    // 0x80277430: lw          $t7, 0x4($s1)
    ctx->r15 = MEM_W(ctx->r17, 0X4);
    // 0x80277434: nop

    // 0x80277438: lbu         $t8, 0x6($t7)
    ctx->r24 = MEM_BU(ctx->r15, 0X6);
    // 0x8027743C: nop

    // 0x80277440: andi        $t9, $t8, 0x20
    ctx->r25 = ctx->r24 & 0X20;
    // 0x80277444: beq         $t9, $zero, L_802774B4
    if (ctx->r25 == 0) {
        // 0x80277448: nop
    
            goto L_802774B4;
    }
    // 0x80277448: nop

L_8027744C:
    // 0x8027744C: lbu         $t0, 0xBC($a0)
    ctx->r8 = MEM_BU(ctx->r4, 0XBC);
    // 0x80277450: lui         $t1, 0x800B
    ctx->r9 = S32(0X800B << 16);
    // 0x80277454: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x80277458: lbu         $t1, -0x54C0($t1)
    ctx->r9 = MEM_BU(ctx->r9, -0X54C0);
    // 0x8027745C: nop

    // 0x80277460: andi        $t2, $t1, 0x10
    ctx->r10 = ctx->r9 & 0X10;
    // 0x80277464: beq         $t2, $zero, L_8027749C
    if (ctx->r10 == 0) {
        // 0x80277468: nop
    
            goto L_8027749C;
    }
    // 0x80277468: nop

    // 0x8027746C: lw          $t3, 0x4($s1)
    ctx->r11 = MEM_W(ctx->r17, 0X4);
    // 0x80277470: nop

    // 0x80277474: lbu         $t4, 0x6($t3)
    ctx->r12 = MEM_BU(ctx->r11, 0X6);
    // 0x80277478: nop

    // 0x8027747C: andi        $t5, $t4, 0x10
    ctx->r13 = ctx->r12 & 0X10;
    // 0x80277480: beq         $t5, $zero, L_8027749C
    if (ctx->r13 == 0) {
        // 0x80277484: nop
    
            goto L_8027749C;
    }
    // 0x80277484: nop

    // 0x80277488: lhu         $t6, 0x6A($a0)
    ctx->r14 = MEM_HU(ctx->r4, 0X6A);
    // 0x8027748C: nop

    // 0x80277490: slti        $at, $t6, 0x7
    ctx->r1 = SIGNED(ctx->r14) < 0X7 ? 1 : 0;
    // 0x80277494: bne         $at, $zero, L_802774B4
    if (ctx->r1 != 0) {
        // 0x80277498: nop
    
            goto L_802774B4;
    }
    // 0x80277498: nop

L_8027749C:
    // 0x8027749C: sw          $s0, 0x4($s2)
    MEM_W(0X4, ctx->r18) = ctx->r16;
    // 0x802774A0: sw          $zero, 0xC($s2)
    MEM_W(0XC, ctx->r18) = 0;
    // 0x802774A4: addiu       $s2, $s2, 0x8
    ctx->r18 = ADD32(ctx->r18, 0X8);
    // 0x802774A8: sw          $s1, 0x0($s3)
    MEM_W(0X0, ctx->r19) = ctx->r17;
    // 0x802774AC: addiu       $s3, $s3, 0x4
    ctx->r19 = ADD32(ctx->r19, 0X4);
    // 0x802774B0: addiu       $s5, $s5, 0x1
    ctx->r21 = ADD32(ctx->r21, 0X1);
L_802774B4:
    // 0x802774B4: lw          $s0, 0xC($s1)
    ctx->r16 = MEM_W(ctx->r17, 0XC);
    // 0x802774B8: addiu       $s1, $s1, 0xC
    ctx->r17 = ADD32(ctx->r17, 0XC);
    // 0x802774BC: bne         $s0, $zero, L_802771FC
    if (ctx->r16 != 0) {
            // 0x802774C0: nop

    ovl_8024B800_func_802771FC(rdram, ctx);
    return;
    }
    // 0x802774C0: nop

    // 0x802774C4: addiu       $a0, $sp, 0x134
    ctx->r4 = ADD32(ctx->r29, 0X134);
    // 0x802774C8: jal         0x80276CD0
    // 0x802774CC: or          $a1, $s5, $zero
    ctx->r5 = ctx->r21 | 0;
    ovl_8024B800_func_80276CD0(rdram, ctx);
        goto after_0;
    // 0x802774CC: or          $a1, $s5, $zero
    ctx->r5 = ctx->r21 | 0;
    after_0:
    // 0x802774D0: sll         $v1, $v0, 16
    ctx->r3 = S32(ctx->r2 << 16);
    // 0x802774D4: sra         $t7, $v1, 16
    ctx->r15 = S32(SIGNED(ctx->r3) >> 16);
    // 0x802774D8: bgez        $v0, L_802774F4
    if (SIGNED(ctx->r2) >= 0) {
        // 0x802774DC: or          $v1, $t7, $zero
        ctx->r3 = ctx->r15 | 0;
            goto L_802774F4;
    }
    // 0x802774DC: or          $v1, $t7, $zero
    ctx->r3 = ctx->r15 | 0;
    // 0x802774E0: jal         0x80276C1C
    // 0x802774E4: addiu       $a0, $sp, 0x78
    ctx->r4 = ADD32(ctx->r29, 0X78);
    ovl_8024B800_func_80276C1C(rdram, ctx);
        goto after_1;
    // 0x802774E4: addiu       $a0, $sp, 0x78
    ctx->r4 = ADD32(ctx->r29, 0X78);
    after_1:
    // 0x802774E8: sll         $v1, $v0, 16
    ctx->r3 = S32(ctx->r2 << 16);
    // 0x802774EC: sra         $t8, $v1, 16
    ctx->r24 = S32(SIGNED(ctx->r3) >> 16);
    // 0x802774F0: or          $v1, $t8, $zero
    ctx->r3 = ctx->r24 | 0;
L_802774F4:
    // 0x802774F4: sll         $t9, $v0, 16
    ctx->r25 = S32(ctx->r2 << 16);
    // 0x802774F8: sra         $t0, $t9, 16
    ctx->r8 = S32(SIGNED(ctx->r25) >> 16);
    // 0x802774FC: bltz        $t0, L_80277518
    if (SIGNED(ctx->r8) < 0) {
        // 0x80277500: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_80277518;
    }
    // 0x80277500: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x80277504: sll         $t1, $v1, 2
    ctx->r9 = S32(ctx->r3 << 2);
    // 0x80277508: addu        $v0, $sp, $t1
    ctx->r2 = ADD32(ctx->r29, ctx->r9);
    // 0x8027750C: lw          $v0, 0x134($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X134);
    // 0x80277510: b           L_8027751C
    // 0x80277514: lw          $ra, 0x64($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X64);
        goto L_8027751C;
    // 0x80277514: lw          $ra, 0x64($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X64);
L_80277518:
    // 0x80277518: lw          $ra, 0x64($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X64);
L_8027751C:
    // 0x8027751C: lwc1        $f21, 0x18($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X18);
    // 0x80277520: lwc1        $f20, 0x1C($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x80277524: lwc1        $f23, 0x20($sp)
    ctx->f_odd[(23 - 1) * 2] = MEM_W(ctx->r29, 0X20);
    // 0x80277528: lwc1        $f22, 0x24($sp)
    ctx->f22.u32l = MEM_W(ctx->r29, 0X24);
    // 0x8027752C: lwc1        $f25, 0x28($sp)
    ctx->f_odd[(25 - 1) * 2] = MEM_W(ctx->r29, 0X28);
    // 0x80277530: lwc1        $f24, 0x2C($sp)
    ctx->f24.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x80277534: lwc1        $f27, 0x30($sp)
    ctx->f_odd[(27 - 1) * 2] = MEM_W(ctx->r29, 0X30);
    // 0x80277538: lwc1        $f26, 0x34($sp)
    ctx->f26.u32l = MEM_W(ctx->r29, 0X34);
    // 0x8027753C: lwc1        $f29, 0x38($sp)
    ctx->f_odd[(29 - 1) * 2] = MEM_W(ctx->r29, 0X38);
    // 0x80277540: lwc1        $f28, 0x3C($sp)
    ctx->f28.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x80277544: lwc1        $f31, 0x40($sp)
    ctx->f_odd[(31 - 1) * 2] = MEM_W(ctx->r29, 0X40);
    // 0x80277548: lwc1        $f30, 0x44($sp)
    ctx->f30.u32l = MEM_W(ctx->r29, 0X44);
    // 0x8027754C: lw          $s0, 0x4C($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X4C);
    // 0x80277550: lw          $s1, 0x50($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X50);
    // 0x80277554: lw          $s2, 0x54($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X54);
    // 0x80277558: lw          $s3, 0x58($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X58);
    // 0x8027755C: lw          $s4, 0x5C($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X5C);
    // 0x80277560: lw          $s5, 0x60($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X60);
    // 0x80277564: jr          $ra
    // 0x80277568: addiu       $sp, $sp, 0x1C8
    ctx->r29 = ADD32(ctx->r29, 0X1C8);
    return;
    // 0x80277568: addiu       $sp, $sp, 0x1C8
    ctx->r29 = ADD32(ctx->r29, 0X1C8);
;}
RECOMP_FUNC void ovl_8024B800_func_80277420(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
L_802771FC:
    // 0x80277420: lw          $t6, 0x84($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X84);
    // 0x80277424: nop

    // 0x80277428: beq         $t6, $zero, L_8027744C
    if (ctx->r14 == 0) {
        // 0x8027742C: nop
    
            goto L_8027744C;
    }
    // 0x8027742C: nop

    // 0x80277430: lw          $t7, 0x4($s1)
    ctx->r15 = MEM_W(ctx->r17, 0X4);
    // 0x80277434: nop

    // 0x80277438: lbu         $t8, 0x6($t7)
    ctx->r24 = MEM_BU(ctx->r15, 0X6);
    // 0x8027743C: nop

    // 0x80277440: andi        $t9, $t8, 0x20
    ctx->r25 = ctx->r24 & 0X20;
    // 0x80277444: beq         $t9, $zero, L_802774B4
    if (ctx->r25 == 0) {
        // 0x80277448: nop
    
            goto L_802774B4;
    }
    // 0x80277448: nop

L_8027744C:
    // 0x8027744C: lbu         $t0, 0xBC($a0)
    ctx->r8 = MEM_BU(ctx->r4, 0XBC);
    // 0x80277450: lui         $t1, 0x800B
    ctx->r9 = S32(0X800B << 16);
    // 0x80277454: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x80277458: lbu         $t1, -0x54C0($t1)
    ctx->r9 = MEM_BU(ctx->r9, -0X54C0);
    // 0x8027745C: nop

    // 0x80277460: andi        $t2, $t1, 0x10
    ctx->r10 = ctx->r9 & 0X10;
    // 0x80277464: beq         $t2, $zero, L_8027749C
    if (ctx->r10 == 0) {
        // 0x80277468: nop
    
            goto L_8027749C;
    }
    // 0x80277468: nop

    // 0x8027746C: lw          $t3, 0x4($s1)
    ctx->r11 = MEM_W(ctx->r17, 0X4);
    // 0x80277470: nop

    // 0x80277474: lbu         $t4, 0x6($t3)
    ctx->r12 = MEM_BU(ctx->r11, 0X6);
    // 0x80277478: nop

    // 0x8027747C: andi        $t5, $t4, 0x10
    ctx->r13 = ctx->r12 & 0X10;
    // 0x80277480: beq         $t5, $zero, L_8027749C
    if (ctx->r13 == 0) {
        // 0x80277484: nop
    
            goto L_8027749C;
    }
    // 0x80277484: nop

    // 0x80277488: lhu         $t6, 0x6A($a0)
    ctx->r14 = MEM_HU(ctx->r4, 0X6A);
    // 0x8027748C: nop

    // 0x80277490: slti        $at, $t6, 0x7
    ctx->r1 = SIGNED(ctx->r14) < 0X7 ? 1 : 0;
    // 0x80277494: bne         $at, $zero, L_802774B4
    if (ctx->r1 != 0) {
        // 0x80277498: nop
    
            goto L_802774B4;
    }
    // 0x80277498: nop

L_8027749C:
    // 0x8027749C: sw          $s0, 0x4($s2)
    MEM_W(0X4, ctx->r18) = ctx->r16;
    // 0x802774A0: sw          $zero, 0xC($s2)
    MEM_W(0XC, ctx->r18) = 0;
    // 0x802774A4: addiu       $s2, $s2, 0x8
    ctx->r18 = ADD32(ctx->r18, 0X8);
    // 0x802774A8: sw          $s1, 0x0($s3)
    MEM_W(0X0, ctx->r19) = ctx->r17;
    // 0x802774AC: addiu       $s3, $s3, 0x4
    ctx->r19 = ADD32(ctx->r19, 0X4);
    // 0x802774B0: addiu       $s5, $s5, 0x1
    ctx->r21 = ADD32(ctx->r21, 0X1);
L_802774B4:
    // 0x802774B4: lw          $s0, 0xC($s1)
    ctx->r16 = MEM_W(ctx->r17, 0XC);
    // 0x802774B8: addiu       $s1, $s1, 0xC
    ctx->r17 = ADD32(ctx->r17, 0XC);
    // 0x802774BC: bne         $s0, $zero, L_802771FC
    if (ctx->r16 != 0) {
            // 0x802774C0: nop

    ovl_8024B800_func_802771FC(rdram, ctx);
    return;
    }
    // 0x802774C0: nop

    // 0x802774C4: addiu       $a0, $sp, 0x134
    ctx->r4 = ADD32(ctx->r29, 0X134);
    // 0x802774C8: jal         0x80276CD0
    // 0x802774CC: or          $a1, $s5, $zero
    ctx->r5 = ctx->r21 | 0;
    ovl_8024B800_func_80276CD0(rdram, ctx);
        goto after_0;
    // 0x802774CC: or          $a1, $s5, $zero
    ctx->r5 = ctx->r21 | 0;
    after_0:
    // 0x802774D0: sll         $v1, $v0, 16
    ctx->r3 = S32(ctx->r2 << 16);
    // 0x802774D4: sra         $t7, $v1, 16
    ctx->r15 = S32(SIGNED(ctx->r3) >> 16);
    // 0x802774D8: bgez        $v0, L_802774F4
    if (SIGNED(ctx->r2) >= 0) {
        // 0x802774DC: or          $v1, $t7, $zero
        ctx->r3 = ctx->r15 | 0;
            goto L_802774F4;
    }
    // 0x802774DC: or          $v1, $t7, $zero
    ctx->r3 = ctx->r15 | 0;
    // 0x802774E0: jal         0x80276C1C
    // 0x802774E4: addiu       $a0, $sp, 0x78
    ctx->r4 = ADD32(ctx->r29, 0X78);
    ovl_8024B800_func_80276C1C(rdram, ctx);
        goto after_1;
    // 0x802774E4: addiu       $a0, $sp, 0x78
    ctx->r4 = ADD32(ctx->r29, 0X78);
    after_1:
    // 0x802774E8: sll         $v1, $v0, 16
    ctx->r3 = S32(ctx->r2 << 16);
    // 0x802774EC: sra         $t8, $v1, 16
    ctx->r24 = S32(SIGNED(ctx->r3) >> 16);
    // 0x802774F0: or          $v1, $t8, $zero
    ctx->r3 = ctx->r24 | 0;
L_802774F4:
    // 0x802774F4: sll         $t9, $v0, 16
    ctx->r25 = S32(ctx->r2 << 16);
    // 0x802774F8: sra         $t0, $t9, 16
    ctx->r8 = S32(SIGNED(ctx->r25) >> 16);
    // 0x802774FC: bltz        $t0, L_80277518
    if (SIGNED(ctx->r8) < 0) {
        // 0x80277500: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_80277518;
    }
    // 0x80277500: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x80277504: sll         $t1, $v1, 2
    ctx->r9 = S32(ctx->r3 << 2);
    // 0x80277508: addu        $v0, $sp, $t1
    ctx->r2 = ADD32(ctx->r29, ctx->r9);
    // 0x8027750C: lw          $v0, 0x134($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X134);
    // 0x80277510: b           L_8027751C
    // 0x80277514: lw          $ra, 0x64($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X64);
        goto L_8027751C;
    // 0x80277514: lw          $ra, 0x64($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X64);
L_80277518:
    // 0x80277518: lw          $ra, 0x64($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X64);
L_8027751C:
    // 0x8027751C: lwc1        $f21, 0x18($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X18);
    // 0x80277520: lwc1        $f20, 0x1C($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x80277524: lwc1        $f23, 0x20($sp)
    ctx->f_odd[(23 - 1) * 2] = MEM_W(ctx->r29, 0X20);
    // 0x80277528: lwc1        $f22, 0x24($sp)
    ctx->f22.u32l = MEM_W(ctx->r29, 0X24);
    // 0x8027752C: lwc1        $f25, 0x28($sp)
    ctx->f_odd[(25 - 1) * 2] = MEM_W(ctx->r29, 0X28);
    // 0x80277530: lwc1        $f24, 0x2C($sp)
    ctx->f24.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x80277534: lwc1        $f27, 0x30($sp)
    ctx->f_odd[(27 - 1) * 2] = MEM_W(ctx->r29, 0X30);
    // 0x80277538: lwc1        $f26, 0x34($sp)
    ctx->f26.u32l = MEM_W(ctx->r29, 0X34);
    // 0x8027753C: lwc1        $f29, 0x38($sp)
    ctx->f_odd[(29 - 1) * 2] = MEM_W(ctx->r29, 0X38);
    // 0x80277540: lwc1        $f28, 0x3C($sp)
    ctx->f28.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x80277544: lwc1        $f31, 0x40($sp)
    ctx->f_odd[(31 - 1) * 2] = MEM_W(ctx->r29, 0X40);
    // 0x80277548: lwc1        $f30, 0x44($sp)
    ctx->f30.u32l = MEM_W(ctx->r29, 0X44);
    // 0x8027754C: lw          $s0, 0x4C($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X4C);
    // 0x80277550: lw          $s1, 0x50($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X50);
    // 0x80277554: lw          $s2, 0x54($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X54);
    // 0x80277558: lw          $s3, 0x58($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X58);
    // 0x8027755C: lw          $s4, 0x5C($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X5C);
    // 0x80277560: lw          $s5, 0x60($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X60);
    // 0x80277564: jr          $ra
    // 0x80277568: addiu       $sp, $sp, 0x1C8
    ctx->r29 = ADD32(ctx->r29, 0X1C8);
    return;
    // 0x80277568: addiu       $sp, $sp, 0x1C8
    ctx->r29 = ADD32(ctx->r29, 0X1C8);
;}
RECOMP_FUNC void ovl_8024B800_func_80277478(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
L_802771FC:
    // 0x80277478: nop

    // 0x8027747C: andi        $t5, $t4, 0x10
    ctx->r13 = ctx->r12 & 0X10;
    // 0x80277480: beq         $t5, $zero, L_8027749C
    if (ctx->r13 == 0) {
        // 0x80277484: nop
    
            goto L_8027749C;
    }
    // 0x80277484: nop

    // 0x80277488: lhu         $t6, 0x6A($a0)
    ctx->r14 = MEM_HU(ctx->r4, 0X6A);
    // 0x8027748C: nop

    // 0x80277490: slti        $at, $t6, 0x7
    ctx->r1 = SIGNED(ctx->r14) < 0X7 ? 1 : 0;
    // 0x80277494: bne         $at, $zero, L_802774B4
    if (ctx->r1 != 0) {
        // 0x80277498: nop
    
            goto L_802774B4;
    }
    // 0x80277498: nop

L_8027749C:
    // 0x8027749C: sw          $s0, 0x4($s2)
    MEM_W(0X4, ctx->r18) = ctx->r16;
    // 0x802774A0: sw          $zero, 0xC($s2)
    MEM_W(0XC, ctx->r18) = 0;
    // 0x802774A4: addiu       $s2, $s2, 0x8
    ctx->r18 = ADD32(ctx->r18, 0X8);
    // 0x802774A8: sw          $s1, 0x0($s3)
    MEM_W(0X0, ctx->r19) = ctx->r17;
    // 0x802774AC: addiu       $s3, $s3, 0x4
    ctx->r19 = ADD32(ctx->r19, 0X4);
    // 0x802774B0: addiu       $s5, $s5, 0x1
    ctx->r21 = ADD32(ctx->r21, 0X1);
L_802774B4:
    // 0x802774B4: lw          $s0, 0xC($s1)
    ctx->r16 = MEM_W(ctx->r17, 0XC);
    // 0x802774B8: addiu       $s1, $s1, 0xC
    ctx->r17 = ADD32(ctx->r17, 0XC);
    // 0x802774BC: bne         $s0, $zero, L_802771FC
    if (ctx->r16 != 0) {
            // 0x802774C0: nop

    ovl_8024B800_func_802771FC(rdram, ctx);
    return;
    }
    // 0x802774C0: nop

    // 0x802774C4: addiu       $a0, $sp, 0x134
    ctx->r4 = ADD32(ctx->r29, 0X134);
    // 0x802774C8: jal         0x80276CD0
    // 0x802774CC: or          $a1, $s5, $zero
    ctx->r5 = ctx->r21 | 0;
    ovl_8024B800_func_80276CD0(rdram, ctx);
        goto after_0;
    // 0x802774CC: or          $a1, $s5, $zero
    ctx->r5 = ctx->r21 | 0;
    after_0:
    // 0x802774D0: sll         $v1, $v0, 16
    ctx->r3 = S32(ctx->r2 << 16);
    // 0x802774D4: sra         $t7, $v1, 16
    ctx->r15 = S32(SIGNED(ctx->r3) >> 16);
    // 0x802774D8: bgez        $v0, L_802774F4
    if (SIGNED(ctx->r2) >= 0) {
        // 0x802774DC: or          $v1, $t7, $zero
        ctx->r3 = ctx->r15 | 0;
            goto L_802774F4;
    }
    // 0x802774DC: or          $v1, $t7, $zero
    ctx->r3 = ctx->r15 | 0;
    // 0x802774E0: jal         0x80276C1C
    // 0x802774E4: addiu       $a0, $sp, 0x78
    ctx->r4 = ADD32(ctx->r29, 0X78);
    ovl_8024B800_func_80276C1C(rdram, ctx);
        goto after_1;
    // 0x802774E4: addiu       $a0, $sp, 0x78
    ctx->r4 = ADD32(ctx->r29, 0X78);
    after_1:
    // 0x802774E8: sll         $v1, $v0, 16
    ctx->r3 = S32(ctx->r2 << 16);
    // 0x802774EC: sra         $t8, $v1, 16
    ctx->r24 = S32(SIGNED(ctx->r3) >> 16);
    // 0x802774F0: or          $v1, $t8, $zero
    ctx->r3 = ctx->r24 | 0;
L_802774F4:
    // 0x802774F4: sll         $t9, $v0, 16
    ctx->r25 = S32(ctx->r2 << 16);
    // 0x802774F8: sra         $t0, $t9, 16
    ctx->r8 = S32(SIGNED(ctx->r25) >> 16);
    // 0x802774FC: bltz        $t0, L_80277518
    if (SIGNED(ctx->r8) < 0) {
        // 0x80277500: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_80277518;
    }
    // 0x80277500: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x80277504: sll         $t1, $v1, 2
    ctx->r9 = S32(ctx->r3 << 2);
    // 0x80277508: addu        $v0, $sp, $t1
    ctx->r2 = ADD32(ctx->r29, ctx->r9);
    // 0x8027750C: lw          $v0, 0x134($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X134);
    // 0x80277510: b           L_8027751C
    // 0x80277514: lw          $ra, 0x64($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X64);
        goto L_8027751C;
    // 0x80277514: lw          $ra, 0x64($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X64);
L_80277518:
    // 0x80277518: lw          $ra, 0x64($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X64);
L_8027751C:
    // 0x8027751C: lwc1        $f21, 0x18($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X18);
    // 0x80277520: lwc1        $f20, 0x1C($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x80277524: lwc1        $f23, 0x20($sp)
    ctx->f_odd[(23 - 1) * 2] = MEM_W(ctx->r29, 0X20);
    // 0x80277528: lwc1        $f22, 0x24($sp)
    ctx->f22.u32l = MEM_W(ctx->r29, 0X24);
    // 0x8027752C: lwc1        $f25, 0x28($sp)
    ctx->f_odd[(25 - 1) * 2] = MEM_W(ctx->r29, 0X28);
    // 0x80277530: lwc1        $f24, 0x2C($sp)
    ctx->f24.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x80277534: lwc1        $f27, 0x30($sp)
    ctx->f_odd[(27 - 1) * 2] = MEM_W(ctx->r29, 0X30);
    // 0x80277538: lwc1        $f26, 0x34($sp)
    ctx->f26.u32l = MEM_W(ctx->r29, 0X34);
    // 0x8027753C: lwc1        $f29, 0x38($sp)
    ctx->f_odd[(29 - 1) * 2] = MEM_W(ctx->r29, 0X38);
    // 0x80277540: lwc1        $f28, 0x3C($sp)
    ctx->f28.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x80277544: lwc1        $f31, 0x40($sp)
    ctx->f_odd[(31 - 1) * 2] = MEM_W(ctx->r29, 0X40);
    // 0x80277548: lwc1        $f30, 0x44($sp)
    ctx->f30.u32l = MEM_W(ctx->r29, 0X44);
    // 0x8027754C: lw          $s0, 0x4C($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X4C);
    // 0x80277550: lw          $s1, 0x50($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X50);
    // 0x80277554: lw          $s2, 0x54($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X54);
    // 0x80277558: lw          $s3, 0x58($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X58);
    // 0x8027755C: lw          $s4, 0x5C($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X5C);
    // 0x80277560: lw          $s5, 0x60($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X60);
    // 0x80277564: jr          $ra
    // 0x80277568: addiu       $sp, $sp, 0x1C8
    ctx->r29 = ADD32(ctx->r29, 0X1C8);
    return;
    // 0x80277568: addiu       $sp, $sp, 0x1C8
    ctx->r29 = ADD32(ctx->r29, 0X1C8);
;}
RECOMP_FUNC void ovl_8024B800_func_8027753C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8027753C: lwc1        $f29, 0x38($sp)
    ctx->f_odd[(29 - 1) * 2] = MEM_W(ctx->r29, 0X38);
    // 0x80277540: lwc1        $f28, 0x3C($sp)
    ctx->f28.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x80277544: lwc1        $f31, 0x40($sp)
    ctx->f_odd[(31 - 1) * 2] = MEM_W(ctx->r29, 0X40);
    // 0x80277548: lwc1        $f30, 0x44($sp)
    ctx->f30.u32l = MEM_W(ctx->r29, 0X44);
    // 0x8027754C: lw          $s0, 0x4C($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X4C);
    // 0x80277550: lw          $s1, 0x50($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X50);
    // 0x80277554: lw          $s2, 0x54($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X54);
    // 0x80277558: lw          $s3, 0x58($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X58);
    // 0x8027755C: lw          $s4, 0x5C($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X5C);
    // 0x80277560: lw          $s5, 0x60($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X60);
    // 0x80277564: jr          $ra
    // 0x80277568: addiu       $sp, $sp, 0x1C8
    ctx->r29 = ADD32(ctx->r29, 0X1C8);
    return;
    // 0x80277568: addiu       $sp, $sp, 0x1C8
    ctx->r29 = ADD32(ctx->r29, 0X1C8);
;}
RECOMP_FUNC void ovl_8024B800_func_8027756C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8027756C: lhu         $v0, 0x1E($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X1E);
    // 0x80277570: nop

    // 0x80277574: beq         $v0, $zero, L_80277584
    if (ctx->r2 == 0) {
        // 0x80277578: addiu       $t6, $v0, -0x1
        ctx->r14 = ADD32(ctx->r2, -0X1);
            goto L_80277584;
    }
    // 0x80277578: addiu       $t6, $v0, -0x1
    ctx->r14 = ADD32(ctx->r2, -0X1);
    // 0x8027757C: jr          $ra
    // 0x80277580: sh          $t6, 0x1E($a0)
    MEM_H(0X1E, ctx->r4) = ctx->r14;
    return;
    // 0x80277580: sh          $t6, 0x1E($a0)
    MEM_H(0X1E, ctx->r4) = ctx->r14;
L_80277584:
    // 0x80277584: lhu         $t7, 0x14($a0)
    ctx->r15 = MEM_HU(ctx->r4, 0X14);
    // 0x80277588: nop

    // 0x8027758C: andi        $t8, $t7, 0x1
    ctx->r24 = ctx->r15 & 0X1;
    // 0x80277590: bne         $t8, $zero, L_802775CC
    if (ctx->r24 != 0) {
        // 0x80277594: nop
    
            goto L_802775CC;
    }
    // 0x80277594: nop

    // 0x80277598: lhu         $t9, 0x1A($a0)
    ctx->r25 = MEM_HU(ctx->r4, 0X1A);
    // 0x8027759C: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x802775A0: slti        $at, $t9, 0xB
    ctx->r1 = SIGNED(ctx->r25) < 0XB ? 1 : 0;
    // 0x802775A4: beq         $at, $zero, L_802775CC
    if (ctx->r1 == 0) {
        // 0x802775A8: addiu       $v0, $v0, 0xB20
        ctx->r2 = ADD32(ctx->r2, 0XB20);
            goto L_802775CC;
    }
    // 0x802775A8: addiu       $v0, $v0, 0xB20
    ctx->r2 = ADD32(ctx->r2, 0XB20);
    // 0x802775AC: lw          $t0, 0x0($v0)
    ctx->r8 = MEM_W(ctx->r2, 0X0);
    // 0x802775B0: nop

    // 0x802775B4: sw          $a0, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->r4;
    // 0x802775B8: lw          $t1, 0x0($v0)
    ctx->r9 = MEM_W(ctx->r2, 0X0);
    // 0x802775BC: nop

    // 0x802775C0: addiu       $t2, $t1, 0x4
    ctx->r10 = ADD32(ctx->r9, 0X4);
    // 0x802775C4: sw          $t2, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r10;
    // 0x802775C8: sw          $zero, 0x0($t2)
    MEM_W(0X0, ctx->r10) = 0;
L_802775CC:
    // 0x802775CC: jr          $ra
    // 0x802775D0: nop

    return;
    // 0x802775D0: nop

;}
RECOMP_FUNC void ovl_8024B800_func_802775C0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802775C0: addiu       $t2, $t1, 0x4
    ctx->r10 = ADD32(ctx->r9, 0X4);
    // 0x802775C4: sw          $t2, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r10;
    // 0x802775C8: sw          $zero, 0x0($t2)
    MEM_W(0X0, ctx->r10) = 0;
    // 0x802775CC: jr          $ra
    // 0x802775D0: nop

    return;
    // 0x802775D0: nop

;}
RECOMP_FUNC void ovl_8024B800_func_802775D4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802775D4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802775D8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802775DC: jal         0x8024CFD8
    // 0x802775E0: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    ovl_8024B800_func_8024CFD8(rdram, ctx);
        goto after_0;
    // 0x802775E0: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x802775E4: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x802775E8: beq         $v0, $zero, L_80277724
    if (ctx->r2 == 0) {
        // 0x802775EC: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_80277724;
    }
    // 0x802775EC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802775F0: lhu         $t6, 0x1A($a0)
    ctx->r14 = MEM_HU(ctx->r4, 0X1A);
    // 0x802775F4: lui         $a3, 0x8009
    ctx->r7 = S32(0X8009 << 16);
    // 0x802775F8: beq         $t6, $zero, L_80277720
    if (ctx->r14 == 0) {
        // 0x802775FC: addiu       $a3, $a3, 0x3B20
        ctx->r7 = ADD32(ctx->r7, 0X3B20);
            goto L_80277720;
    }
    // 0x802775FC: addiu       $a3, $a3, 0x3B20
    ctx->r7 = ADD32(ctx->r7, 0X3B20);
    // 0x80277600: lw          $a2, 0x0($a3)
    ctx->r6 = MEM_W(ctx->r7, 0X0);
    // 0x80277604: lui         $at, 0x4018
    ctx->r1 = S32(0X4018 << 16);
    // 0x80277608: lwc1        $f4, 0x10($a2)
    ctx->f4.u32l = MEM_W(ctx->r6, 0X10);
    // 0x8027760C: mtc1        $at, $f9
    ctx->f_odd[(9 - 1) * 2] = ctx->r1;
    // 0x80277610: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x80277614: cvt.d.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.d = CVT_D_S(ctx->f4.fl);
    // 0x80277618: c.lt.d      $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f6.d < ctx->f8.d;
    // 0x8027761C: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x80277620: bc1t        L_80277720
    if (c1cs) {
        // 0x80277624: addiu       $v0, $v0, 0x6A4
        ctx->r2 = ADD32(ctx->r2, 0X6A4);
            goto L_80277720;
    }
    // 0x80277624: addiu       $v0, $v0, 0x6A4
    ctx->r2 = ADD32(ctx->r2, 0X6A4);
    // 0x80277628: lui         $at, 0x4280
    ctx->r1 = S32(0X4280 << 16);
    // 0x8027762C: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x80277630: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x80277634: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x80277638: lui         $at, 0x4188
    ctx->r1 = S32(0X4188 << 16);
    // 0x8027763C: lui         $a1, 0x8012
    ctx->r5 = S32(0X8012 << 16);
    // 0x80277640: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    // 0x80277644: addiu       $a1, $a1, 0x6BC
    ctx->r5 = ADD32(ctx->r5, 0X6BC);
    // 0x80277648: addiu       $v1, $zero, 0x1E
    ctx->r3 = ADD32(0, 0X1E);
L_8027764C:
    // 0x8027764C: lwc1        $f0, 0x4($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X4);
    // 0x80277650: nop

    // 0x80277654: c.lt.s      $f0, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f0.fl < ctx->f12.fl;
    // 0x80277658: nop

    // 0x8027765C: bc1f        L_80277714
    if (!c1cs) {
        // 0x80277660: nop
    
            goto L_80277714;
    }
    // 0x80277660: nop

    // 0x80277664: c.lt.s      $f14, $f0
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f14.fl < ctx->f0.fl;
    // 0x80277668: nop

    // 0x8027766C: bc1f        L_80277714
    if (!c1cs) {
        // 0x80277670: nop
    
            goto L_80277714;
    }
    // 0x80277670: nop

    // 0x80277674: lwc1        $f10, 0x4C($a0)
    ctx->f10.u32l = MEM_W(ctx->r4, 0X4C);
    // 0x80277678: lwc1        $f18, 0x8($v0)
    ctx->f18.u32l = MEM_W(ctx->r2, 0X8);
    // 0x8027767C: lwc1        $f4, 0x44($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X44);
    // 0x80277680: sub.s       $f0, $f10, $f18
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f0.fl = ctx->f10.fl - ctx->f18.fl;
    // 0x80277684: lwc1        $f6, 0x0($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0X0);
    // 0x80277688: mul.s       $f8, $f0, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = MUL_S(ctx->f0.fl, ctx->f0.fl);
    // 0x8027768C: sub.s       $f2, $f4, $f6
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f2.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x80277690: mul.s       $f10, $f2, $f2
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f10.fl = MUL_S(ctx->f2.fl, ctx->f2.fl);
    // 0x80277694: add.s       $f18, $f8, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f18.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x80277698: c.lt.s      $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f18.fl < ctx->f16.fl;
    // 0x8027769C: nop

    // 0x802776A0: bc1f        L_80277714
    if (!c1cs) {
        // 0x802776A4: nop
    
            goto L_80277714;
    }
    // 0x802776A4: nop

    // 0x802776A8: lhu         $t7, 0x12($a0)
    ctx->r15 = MEM_HU(ctx->r4, 0X12);
    // 0x802776AC: nop

    // 0x802776B0: andi        $t8, $t7, 0x2
    ctx->r24 = ctx->r15 & 0X2;
    // 0x802776B4: bne         $t8, $zero, L_80277714
    if (ctx->r24 != 0) {
        // 0x802776B8: nop
    
            goto L_80277714;
    }
    // 0x802776B8: nop

    // 0x802776BC: lhu         $t9, 0xE($a0)
    ctx->r25 = MEM_HU(ctx->r4, 0XE);
    // 0x802776C0: nop

    // 0x802776C4: beq         $v1, $t9, L_80277718
    if (ctx->r3 == ctx->r25) {
        // 0x802776C8: addiu       $v0, $v0, 0xC
        ctx->r2 = ADD32(ctx->r2, 0XC);
            goto L_80277718;
    }
    // 0x802776C8: addiu       $v0, $v0, 0xC
    ctx->r2 = ADD32(ctx->r2, 0XC);
    // 0x802776CC: lhu         $t0, 0xC2($a2)
    ctx->r8 = MEM_HU(ctx->r6, 0XC2);
    // 0x802776D0: addiu       $a1, $zero, 0x1E
    ctx->r5 = ADD32(0, 0X1E);
    // 0x802776D4: ori         $t1, $t0, 0x1
    ctx->r9 = ctx->r8 | 0X1;
    // 0x802776D8: sh          $t1, 0xC2($a2)
    MEM_H(0XC2, ctx->r6) = ctx->r9;
    // 0x802776DC: lw          $t3, 0x0($a3)
    ctx->r11 = MEM_W(ctx->r7, 0X0);
    // 0x802776E0: lw          $t2, 0xC8($a0)
    ctx->r10 = MEM_W(ctx->r4, 0XC8);
    // 0x802776E4: lw          $t4, 0x8C($t3)
    ctx->r12 = MEM_W(ctx->r11, 0X8C);
    // 0x802776E8: nop

    // 0x802776EC: lw          $t5, 0xC8($t4)
    ctx->r13 = MEM_W(ctx->r12, 0XC8);
    // 0x802776F0: nop

    // 0x802776F4: bne         $t2, $t5, L_80277704
    if (ctx->r10 != ctx->r13) {
        // 0x802776F8: nop
    
            goto L_80277704;
    }
    // 0x802776F8: nop

    // 0x802776FC: b           L_80277704
    // 0x80277700: addiu       $a1, $zero, 0x41
    ctx->r5 = ADD32(0, 0X41);
        goto L_80277704;
    // 0x80277700: addiu       $a1, $zero, 0x41
    ctx->r5 = ADD32(0, 0X41);
L_80277704:
    // 0x80277704: jal         0x8024BC08
    // 0x80277708: nop

    ovl_8024B800_func_8024BC08(rdram, ctx);
        goto after_1;
    // 0x80277708: nop

    after_1:
    // 0x8027770C: b           L_80277724
    // 0x80277710: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80277724;
    // 0x80277710: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80277714:
    // 0x80277714: addiu       $v0, $v0, 0xC
    ctx->r2 = ADD32(ctx->r2, 0XC);
L_80277718:
    // 0x80277718: bne         $v0, $a1, L_8027764C
    if (ctx->r2 != ctx->r5) {
        // 0x8027771C: nop
    
            goto L_8027764C;
    }
    // 0x8027771C: nop

L_80277720:
    // 0x80277720: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80277724:
    // 0x80277724: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80277728: jr          $ra
    // 0x8027772C: nop

    return;
    // 0x8027772C: nop

;}
RECOMP_FUNC void ovl_8024B800_func_80277644(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80277644: addiu       $a1, $a1, 0x6BC
    ctx->r5 = ADD32(ctx->r5, 0X6BC);
    // 0x80277648: addiu       $v1, $zero, 0x1E
    ctx->r3 = ADD32(0, 0X1E);
L_8027764C:
    // 0x8027764C: lwc1        $f0, 0x4($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X4);
    // 0x80277650: nop

    // 0x80277654: c.lt.s      $f0, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f0.fl < ctx->f12.fl;
    // 0x80277658: nop

    // 0x8027765C: bc1f        L_80277714
    if (!c1cs) {
        // 0x80277660: nop
    
            goto L_80277714;
    }
    // 0x80277660: nop

    // 0x80277664: c.lt.s      $f14, $f0
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f14.fl < ctx->f0.fl;
    // 0x80277668: nop

    // 0x8027766C: bc1f        L_80277714
    if (!c1cs) {
        // 0x80277670: nop
    
            goto L_80277714;
    }
    // 0x80277670: nop

    // 0x80277674: lwc1        $f10, 0x4C($a0)
    ctx->f10.u32l = MEM_W(ctx->r4, 0X4C);
    // 0x80277678: lwc1        $f18, 0x8($v0)
    ctx->f18.u32l = MEM_W(ctx->r2, 0X8);
    // 0x8027767C: lwc1        $f4, 0x44($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X44);
    // 0x80277680: sub.s       $f0, $f10, $f18
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f0.fl = ctx->f10.fl - ctx->f18.fl;
    // 0x80277684: lwc1        $f6, 0x0($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0X0);
    // 0x80277688: mul.s       $f8, $f0, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = MUL_S(ctx->f0.fl, ctx->f0.fl);
    // 0x8027768C: sub.s       $f2, $f4, $f6
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f2.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x80277690: mul.s       $f10, $f2, $f2
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f10.fl = MUL_S(ctx->f2.fl, ctx->f2.fl);
    // 0x80277694: add.s       $f18, $f8, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f18.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x80277698: c.lt.s      $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f18.fl < ctx->f16.fl;
    // 0x8027769C: nop

    // 0x802776A0: bc1f        L_80277714
    if (!c1cs) {
        // 0x802776A4: nop
    
            goto L_80277714;
    }
    // 0x802776A4: nop

    // 0x802776A8: lhu         $t7, 0x12($a0)
    ctx->r15 = MEM_HU(ctx->r4, 0X12);
    // 0x802776AC: nop

    // 0x802776B0: andi        $t8, $t7, 0x2
    ctx->r24 = ctx->r15 & 0X2;
    // 0x802776B4: bne         $t8, $zero, L_80277714
    if (ctx->r24 != 0) {
        // 0x802776B8: nop
    
            goto L_80277714;
    }
    // 0x802776B8: nop

    // 0x802776BC: lhu         $t9, 0xE($a0)
    ctx->r25 = MEM_HU(ctx->r4, 0XE);
    // 0x802776C0: nop

    // 0x802776C4: beq         $v1, $t9, L_80277718
    if (ctx->r3 == ctx->r25) {
        // 0x802776C8: addiu       $v0, $v0, 0xC
        ctx->r2 = ADD32(ctx->r2, 0XC);
            goto L_80277718;
    }
    // 0x802776C8: addiu       $v0, $v0, 0xC
    ctx->r2 = ADD32(ctx->r2, 0XC);
    // 0x802776CC: lhu         $t0, 0xC2($a2)
    ctx->r8 = MEM_HU(ctx->r6, 0XC2);
    // 0x802776D0: addiu       $a1, $zero, 0x1E
    ctx->r5 = ADD32(0, 0X1E);
    // 0x802776D4: ori         $t1, $t0, 0x1
    ctx->r9 = ctx->r8 | 0X1;
    // 0x802776D8: sh          $t1, 0xC2($a2)
    MEM_H(0XC2, ctx->r6) = ctx->r9;
    // 0x802776DC: lw          $t3, 0x0($a3)
    ctx->r11 = MEM_W(ctx->r7, 0X0);
    // 0x802776E0: lw          $t2, 0xC8($a0)
    ctx->r10 = MEM_W(ctx->r4, 0XC8);
    // 0x802776E4: lw          $t4, 0x8C($t3)
    ctx->r12 = MEM_W(ctx->r11, 0X8C);
    // 0x802776E8: nop

    // 0x802776EC: lw          $t5, 0xC8($t4)
    ctx->r13 = MEM_W(ctx->r12, 0XC8);
    // 0x802776F0: nop

    // 0x802776F4: bne         $t2, $t5, L_80277704
    if (ctx->r10 != ctx->r13) {
        // 0x802776F8: nop
    
            goto L_80277704;
    }
    // 0x802776F8: nop

    // 0x802776FC: b           L_80277704
    // 0x80277700: addiu       $a1, $zero, 0x41
    ctx->r5 = ADD32(0, 0X41);
        goto L_80277704;
    // 0x80277700: addiu       $a1, $zero, 0x41
    ctx->r5 = ADD32(0, 0X41);
L_80277704:
    // 0x80277704: jal         0x8024BC08
    // 0x80277708: nop

    ovl_8024B800_func_8024BC08(rdram, ctx);
        goto after_0;
    // 0x80277708: nop

    after_0:
    // 0x8027770C: b           L_80277724
    // 0x80277710: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80277724;
    // 0x80277710: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80277714:
    // 0x80277714: addiu       $v0, $v0, 0xC
    ctx->r2 = ADD32(ctx->r2, 0XC);
L_80277718:
    // 0x80277718: bne         $v0, $a1, L_8027764C
    if (ctx->r2 != ctx->r5) {
        // 0x8027771C: nop
    
            goto L_8027764C;
    }
    // 0x8027771C: nop

    // 0x80277720: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80277724:
    // 0x80277724: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80277728: jr          $ra
    // 0x8027772C: nop

    return;
    // 0x8027772C: nop

;}
RECOMP_FUNC void ovl_8024B800_func_8027764C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
L_8027764C:
    // 0x8027764C: lwc1        $f0, 0x4($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X4);
    // 0x80277650: nop

    // 0x80277654: c.lt.s      $f0, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f0.fl < ctx->f12.fl;
    // 0x80277658: nop

    // 0x8027765C: bc1f        L_80277714
    if (!c1cs) {
        // 0x80277660: nop
    
            goto L_80277714;
    }
    // 0x80277660: nop

    // 0x80277664: c.lt.s      $f14, $f0
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f14.fl < ctx->f0.fl;
    // 0x80277668: nop

    // 0x8027766C: bc1f        L_80277714
    if (!c1cs) {
        // 0x80277670: nop
    
            goto L_80277714;
    }
    // 0x80277670: nop

    // 0x80277674: lwc1        $f10, 0x4C($a0)
    ctx->f10.u32l = MEM_W(ctx->r4, 0X4C);
    // 0x80277678: lwc1        $f18, 0x8($v0)
    ctx->f18.u32l = MEM_W(ctx->r2, 0X8);
    // 0x8027767C: lwc1        $f4, 0x44($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X44);
    // 0x80277680: sub.s       $f0, $f10, $f18
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f0.fl = ctx->f10.fl - ctx->f18.fl;
    // 0x80277684: lwc1        $f6, 0x0($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0X0);
    // 0x80277688: mul.s       $f8, $f0, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = MUL_S(ctx->f0.fl, ctx->f0.fl);
    // 0x8027768C: sub.s       $f2, $f4, $f6
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f2.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x80277690: mul.s       $f10, $f2, $f2
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f10.fl = MUL_S(ctx->f2.fl, ctx->f2.fl);
    // 0x80277694: add.s       $f18, $f8, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f18.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x80277698: c.lt.s      $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f18.fl < ctx->f16.fl;
    // 0x8027769C: nop

    // 0x802776A0: bc1f        L_80277714
    if (!c1cs) {
        // 0x802776A4: nop
    
            goto L_80277714;
    }
    // 0x802776A4: nop

    // 0x802776A8: lhu         $t7, 0x12($a0)
    ctx->r15 = MEM_HU(ctx->r4, 0X12);
    // 0x802776AC: nop

    // 0x802776B0: andi        $t8, $t7, 0x2
    ctx->r24 = ctx->r15 & 0X2;
    // 0x802776B4: bne         $t8, $zero, L_80277714
    if (ctx->r24 != 0) {
        // 0x802776B8: nop
    
            goto L_80277714;
    }
    // 0x802776B8: nop

    // 0x802776BC: lhu         $t9, 0xE($a0)
    ctx->r25 = MEM_HU(ctx->r4, 0XE);
    // 0x802776C0: nop

    // 0x802776C4: beq         $v1, $t9, L_80277718
    if (ctx->r3 == ctx->r25) {
        // 0x802776C8: addiu       $v0, $v0, 0xC
        ctx->r2 = ADD32(ctx->r2, 0XC);
            goto L_80277718;
    }
    // 0x802776C8: addiu       $v0, $v0, 0xC
    ctx->r2 = ADD32(ctx->r2, 0XC);
    // 0x802776CC: lhu         $t0, 0xC2($a2)
    ctx->r8 = MEM_HU(ctx->r6, 0XC2);
    // 0x802776D0: addiu       $a1, $zero, 0x1E
    ctx->r5 = ADD32(0, 0X1E);
    // 0x802776D4: ori         $t1, $t0, 0x1
    ctx->r9 = ctx->r8 | 0X1;
    // 0x802776D8: sh          $t1, 0xC2($a2)
    MEM_H(0XC2, ctx->r6) = ctx->r9;
    // 0x802776DC: lw          $t3, 0x0($a3)
    ctx->r11 = MEM_W(ctx->r7, 0X0);
    // 0x802776E0: lw          $t2, 0xC8($a0)
    ctx->r10 = MEM_W(ctx->r4, 0XC8);
    // 0x802776E4: lw          $t4, 0x8C($t3)
    ctx->r12 = MEM_W(ctx->r11, 0X8C);
    // 0x802776E8: nop

    // 0x802776EC: lw          $t5, 0xC8($t4)
    ctx->r13 = MEM_W(ctx->r12, 0XC8);
    // 0x802776F0: nop

    // 0x802776F4: bne         $t2, $t5, L_80277704
    if (ctx->r10 != ctx->r13) {
        // 0x802776F8: nop
    
            goto L_80277704;
    }
    // 0x802776F8: nop

    // 0x802776FC: b           L_80277704
    // 0x80277700: addiu       $a1, $zero, 0x41
    ctx->r5 = ADD32(0, 0X41);
        goto L_80277704;
    // 0x80277700: addiu       $a1, $zero, 0x41
    ctx->r5 = ADD32(0, 0X41);
L_80277704:
    // 0x80277704: jal         0x8024BC08
    // 0x80277708: nop

    ovl_8024B800_func_8024BC08(rdram, ctx);
        goto after_0;
    // 0x80277708: nop

    after_0:
    // 0x8027770C: b           L_80277724
    // 0x80277710: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80277724;
    // 0x80277710: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80277714:
    // 0x80277714: addiu       $v0, $v0, 0xC
    ctx->r2 = ADD32(ctx->r2, 0XC);
L_80277718:
    // 0x80277718: bne         $v0, $a1, L_8027764C
    if (ctx->r2 != ctx->r5) {
        // 0x8027771C: nop
    
            goto L_8027764C;
    }
    // 0x8027771C: nop

    // 0x80277720: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80277724:
    // 0x80277724: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80277728: jr          $ra
    // 0x8027772C: nop

    return;
    // 0x8027772C: nop

;}
RECOMP_FUNC void ovl_8024B800_func_8027767C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
L_8027764C:
    // 0x8027767C: lwc1        $f4, 0x44($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X44);
    // 0x80277680: sub.s       $f0, $f10, $f18
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f0.fl = ctx->f10.fl - ctx->f18.fl;
    // 0x80277684: lwc1        $f6, 0x0($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0X0);
    // 0x80277688: mul.s       $f8, $f0, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = MUL_S(ctx->f0.fl, ctx->f0.fl);
    // 0x8027768C: sub.s       $f2, $f4, $f6
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f2.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x80277690: mul.s       $f10, $f2, $f2
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f10.fl = MUL_S(ctx->f2.fl, ctx->f2.fl);
    // 0x80277694: add.s       $f18, $f8, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f18.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x80277698: c.lt.s      $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f18.fl < ctx->f16.fl;
    // 0x8027769C: nop

    // 0x802776A0: bc1f        L_80277714
    if (!c1cs) {
        // 0x802776A4: nop
    
            goto L_80277714;
    }
    // 0x802776A4: nop

    // 0x802776A8: lhu         $t7, 0x12($a0)
    ctx->r15 = MEM_HU(ctx->r4, 0X12);
    // 0x802776AC: nop

    // 0x802776B0: andi        $t8, $t7, 0x2
    ctx->r24 = ctx->r15 & 0X2;
    // 0x802776B4: bne         $t8, $zero, L_80277714
    if (ctx->r24 != 0) {
        // 0x802776B8: nop
    
            goto L_80277714;
    }
    // 0x802776B8: nop

    // 0x802776BC: lhu         $t9, 0xE($a0)
    ctx->r25 = MEM_HU(ctx->r4, 0XE);
    // 0x802776C0: nop

    // 0x802776C4: beq         $v1, $t9, L_80277718
    if (ctx->r3 == ctx->r25) {
        // 0x802776C8: addiu       $v0, $v0, 0xC
        ctx->r2 = ADD32(ctx->r2, 0XC);
            goto L_80277718;
    }
    // 0x802776C8: addiu       $v0, $v0, 0xC
    ctx->r2 = ADD32(ctx->r2, 0XC);
    // 0x802776CC: lhu         $t0, 0xC2($a2)
    ctx->r8 = MEM_HU(ctx->r6, 0XC2);
    // 0x802776D0: addiu       $a1, $zero, 0x1E
    ctx->r5 = ADD32(0, 0X1E);
    // 0x802776D4: ori         $t1, $t0, 0x1
    ctx->r9 = ctx->r8 | 0X1;
    // 0x802776D8: sh          $t1, 0xC2($a2)
    MEM_H(0XC2, ctx->r6) = ctx->r9;
    // 0x802776DC: lw          $t3, 0x0($a3)
    ctx->r11 = MEM_W(ctx->r7, 0X0);
    // 0x802776E0: lw          $t2, 0xC8($a0)
    ctx->r10 = MEM_W(ctx->r4, 0XC8);
    // 0x802776E4: lw          $t4, 0x8C($t3)
    ctx->r12 = MEM_W(ctx->r11, 0X8C);
    // 0x802776E8: nop

    // 0x802776EC: lw          $t5, 0xC8($t4)
    ctx->r13 = MEM_W(ctx->r12, 0XC8);
    // 0x802776F0: nop

    // 0x802776F4: bne         $t2, $t5, L_80277704
    if (ctx->r10 != ctx->r13) {
        // 0x802776F8: nop
    
            goto L_80277704;
    }
    // 0x802776F8: nop

    // 0x802776FC: b           L_80277704
    // 0x80277700: addiu       $a1, $zero, 0x41
    ctx->r5 = ADD32(0, 0X41);
        goto L_80277704;
    // 0x80277700: addiu       $a1, $zero, 0x41
    ctx->r5 = ADD32(0, 0X41);
L_80277704:
    // 0x80277704: jal         0x8024BC08
    // 0x80277708: nop

    ovl_8024B800_func_8024BC08(rdram, ctx);
        goto after_0;
    // 0x80277708: nop

    after_0:
    // 0x8027770C: b           L_80277724
    // 0x80277710: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80277724;
    // 0x80277710: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80277714:
    // 0x80277714: addiu       $v0, $v0, 0xC
    ctx->r2 = ADD32(ctx->r2, 0XC);
L_80277718:
    // 0x80277718: bne         $v0, $a1, L_8027764C
    if (ctx->r2 != ctx->r5) {
            // 0x8027771C: nop

    ovl_8024B800_func_8027764C(rdram, ctx);
    return;
    }
    // 0x8027771C: nop

    // 0x80277720: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80277724:
    // 0x80277724: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80277728: jr          $ra
    // 0x8027772C: nop

    return;
    // 0x8027772C: nop

;}
RECOMP_FUNC void ovl_8024B800_func_80277730(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80277730: mtc1        $a3, $f12
    ctx->f12.u32l = ctx->r7;
    // 0x80277734: subu        $v0, $a1, $a0
    ctx->r2 = SUB32(ctx->r5, ctx->r4);
    // 0x80277738: bgez        $v0, L_80277748
    if (SIGNED(ctx->r2) >= 0) {
        // 0x8027773C: slti        $at, $v0, 0x1F
        ctx->r1 = SIGNED(ctx->r2) < 0X1F ? 1 : 0;
            goto L_80277748;
    }
    // 0x8027773C: slti        $at, $v0, 0x1F
    ctx->r1 = SIGNED(ctx->r2) < 0X1F ? 1 : 0;
    // 0x80277740: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x80277744: slti        $at, $v0, 0x1F
    ctx->r1 = SIGNED(ctx->r2) < 0X1F ? 1 : 0;
L_80277748:
    // 0x80277748: bne         $at, $zero, L_80277754
    if (ctx->r1 != 0) {
        // 0x8027774C: nop
    
            goto L_80277754;
    }
    // 0x8027774C: nop

    // 0x80277750: addiu       $v0, $zero, 0x1E
    ctx->r2 = ADD32(0, 0X1E);
L_80277754:
    // 0x80277754: mtc1        $v0, $f6
    ctx->f6.u32l = ctx->r2;
    // 0x80277758: lui         $at, 0x3FF0
    ctx->r1 = S32(0X3FF0 << 16);
    // 0x8027775C: mtc1        $at, $f15
    ctx->f_odd[(15 - 1) * 2] = ctx->r1;
    // 0x80277760: cvt.s.w     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.fl = CVT_S_W(ctx->f6.u32l);
    // 0x80277764: lui         $at, 0x8028
    ctx->r1 = S32(0X8028 << 16);
    // 0x80277768: lwc1        $f17, -0x1C58($at)
    ctx->f_odd[(17 - 1) * 2] = MEM_W(ctx->r1, -0X1C58);
    // 0x8027776C: lwc1        $f16, -0x1C54($at)
    ctx->f16.u32l = MEM_W(ctx->r1, -0X1C54);
    // 0x80277770: cvt.d.s     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f10.d = CVT_D_S(ctx->f8.fl);
    // 0x80277774: mul.d       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f16.d); 
    ctx->f18.d = MUL_D(ctx->f10.d, ctx->f16.d);
    // 0x80277778: mtc1        $zero, $f14
    ctx->f14.u32l = 0;
    // 0x8027777C: cvt.d.s     $f4, $f12
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); 
    ctx->f4.d = CVT_D_S(ctx->f12.fl);
    // 0x80277780: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x80277784: sub.d       $f6, $f14, $f18
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f14.d); NAN_CHECK(ctx->f18.d); 
    ctx->f6.d = ctx->f14.d - ctx->f18.d;
    // 0x80277788: mul.d       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f6.d); 
    ctx->f8.d = MUL_D(ctx->f4.d, ctx->f6.d);
    // 0x8027778C: cvt.s.d     $f2, $f8
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.d); 
    ctx->f2.fl = CVT_S_D(ctx->f8.d);
    // 0x80277790: mtc1        $a2, $f8
    ctx->f8.u32l = ctx->r6;
    // 0x80277794: cvt.d.s     $f10, $f2
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f10.d = CVT_D_S(ctx->f2.fl);
    // 0x80277798: c.lt.d      $f10, $f14
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 14);
    c1cs = ctx->f10.d < ctx->f14.d;
    // 0x8027779C: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x802777A0: bc1f        L_802777B0
    if (!c1cs) {
        // 0x802777A4: nop
    
            goto L_802777B0;
    }
    // 0x802777A4: nop

    // 0x802777A8: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    // 0x802777AC: nop

L_802777B0:
    // 0x802777B0: lui         $at, 0x40C0
    ctx->r1 = S32(0X40C0 << 16);
    // 0x802777B4: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x802777B8: nop

    // 0x802777BC: sub.s       $f4, $f18, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f4.fl = ctx->f18.fl - ctx->f2.fl;
    // 0x802777C0: cvt.d.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.d = CVT_D_S(ctx->f4.fl);
    // 0x802777C4: cvt.d.s     $f18, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.fl); 
    ctx->f18.d = CVT_D_S(ctx->f10.fl);
    // 0x802777C8: mul.d       $f4, $f18, $f16
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f18.d); NAN_CHECK(ctx->f16.d); 
    ctx->f4.d = MUL_D(ctx->f18.d, ctx->f16.d);
    // 0x802777CC: cvt.d.s     $f18, $f2
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f18.d = CVT_D_S(ctx->f2.fl);
    // 0x802777D0: sub.d       $f8, $f14, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f14.d); NAN_CHECK(ctx->f4.d); 
    ctx->f8.d = ctx->f14.d - ctx->f4.d;
    // 0x802777D4: mul.d       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f8.d); 
    ctx->f10.d = MUL_D(ctx->f6.d, ctx->f8.d);
    // 0x802777D8: add.d       $f4, $f18, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f18.d); NAN_CHECK(ctx->f10.d); 
    ctx->f4.d = ctx->f18.d + ctx->f10.d;
    // 0x802777DC: jr          $ra
    // 0x802777E0: cvt.s.d     $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.d); 
    ctx->f0.fl = CVT_S_D(ctx->f4.d);
    return;
    // 0x802777E0: cvt.s.d     $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.d); 
    ctx->f0.fl = CVT_S_D(ctx->f4.d);
;}
RECOMP_FUNC void ovl_8024B800_func_8027773C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8027773C: slti        $at, $v0, 0x1F
    ctx->r1 = SIGNED(ctx->r2) < 0X1F ? 1 : 0;
    // 0x80277740: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x80277744: slti        $at, $v0, 0x1F
    ctx->r1 = SIGNED(ctx->r2) < 0X1F ? 1 : 0;
    // 0x80277748: bne         $at, $zero, L_80277754
    if (ctx->r1 != 0) {
        // 0x8027774C: nop
    
            goto L_80277754;
    }
    // 0x8027774C: nop

    // 0x80277750: addiu       $v0, $zero, 0x1E
    ctx->r2 = ADD32(0, 0X1E);
L_80277754:
    // 0x80277754: mtc1        $v0, $f6
    ctx->f6.u32l = ctx->r2;
    // 0x80277758: lui         $at, 0x3FF0
    ctx->r1 = S32(0X3FF0 << 16);
    // 0x8027775C: mtc1        $at, $f15
    ctx->f_odd[(15 - 1) * 2] = ctx->r1;
    // 0x80277760: cvt.s.w     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.fl = CVT_S_W(ctx->f6.u32l);
    // 0x80277764: lui         $at, 0x8028
    ctx->r1 = S32(0X8028 << 16);
    // 0x80277768: lwc1        $f17, -0x1C58($at)
    ctx->f_odd[(17 - 1) * 2] = MEM_W(ctx->r1, -0X1C58);
    // 0x8027776C: lwc1        $f16, -0x1C54($at)
    ctx->f16.u32l = MEM_W(ctx->r1, -0X1C54);
    // 0x80277770: cvt.d.s     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f10.d = CVT_D_S(ctx->f8.fl);
    // 0x80277774: mul.d       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f16.d); 
    ctx->f18.d = MUL_D(ctx->f10.d, ctx->f16.d);
    // 0x80277778: mtc1        $zero, $f14
    ctx->f14.u32l = 0;
    // 0x8027777C: cvt.d.s     $f4, $f12
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); 
    ctx->f4.d = CVT_D_S(ctx->f12.fl);
    // 0x80277780: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x80277784: sub.d       $f6, $f14, $f18
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f14.d); NAN_CHECK(ctx->f18.d); 
    ctx->f6.d = ctx->f14.d - ctx->f18.d;
    // 0x80277788: mul.d       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f6.d); 
    ctx->f8.d = MUL_D(ctx->f4.d, ctx->f6.d);
    // 0x8027778C: cvt.s.d     $f2, $f8
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.d); 
    ctx->f2.fl = CVT_S_D(ctx->f8.d);
    // 0x80277790: mtc1        $a2, $f8
    ctx->f8.u32l = ctx->r6;
    // 0x80277794: cvt.d.s     $f10, $f2
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f10.d = CVT_D_S(ctx->f2.fl);
    // 0x80277798: c.lt.d      $f10, $f14
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 14);
    c1cs = ctx->f10.d < ctx->f14.d;
    // 0x8027779C: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x802777A0: bc1f        L_802777B0
    if (!c1cs) {
        // 0x802777A4: nop
    
            goto L_802777B0;
    }
    // 0x802777A4: nop

    // 0x802777A8: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    // 0x802777AC: nop

L_802777B0:
    // 0x802777B0: lui         $at, 0x40C0
    ctx->r1 = S32(0X40C0 << 16);
    // 0x802777B4: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x802777B8: nop

    // 0x802777BC: sub.s       $f4, $f18, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f4.fl = ctx->f18.fl - ctx->f2.fl;
    // 0x802777C0: cvt.d.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.d = CVT_D_S(ctx->f4.fl);
    // 0x802777C4: cvt.d.s     $f18, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.fl); 
    ctx->f18.d = CVT_D_S(ctx->f10.fl);
    // 0x802777C8: mul.d       $f4, $f18, $f16
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f18.d); NAN_CHECK(ctx->f16.d); 
    ctx->f4.d = MUL_D(ctx->f18.d, ctx->f16.d);
    // 0x802777CC: cvt.d.s     $f18, $f2
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f18.d = CVT_D_S(ctx->f2.fl);
    // 0x802777D0: sub.d       $f8, $f14, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f14.d); NAN_CHECK(ctx->f4.d); 
    ctx->f8.d = ctx->f14.d - ctx->f4.d;
    // 0x802777D4: mul.d       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f8.d); 
    ctx->f10.d = MUL_D(ctx->f6.d, ctx->f8.d);
    // 0x802777D8: add.d       $f4, $f18, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f18.d); NAN_CHECK(ctx->f10.d); 
    ctx->f4.d = ctx->f18.d + ctx->f10.d;
    // 0x802777DC: jr          $ra
    // 0x802777E0: cvt.s.d     $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.d); 
    ctx->f0.fl = CVT_S_D(ctx->f4.d);
    return;
    // 0x802777E0: cvt.s.d     $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.d); 
    ctx->f0.fl = CVT_S_D(ctx->f4.d);
;}
RECOMP_FUNC void ovl_8024B800_func_802777C8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802777C8: mul.d       $f4, $f18, $f16
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f18.d); NAN_CHECK(ctx->f16.d); 
    ctx->f4.d = MUL_D(ctx->f18.d, ctx->f16.d);
    // 0x802777CC: cvt.d.s     $f18, $f2
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f18.d = CVT_D_S(ctx->f2.fl);
    // 0x802777D0: sub.d       $f8, $f14, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f14.d); NAN_CHECK(ctx->f4.d); 
    ctx->f8.d = ctx->f14.d - ctx->f4.d;
    // 0x802777D4: mul.d       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f8.d); 
    ctx->f10.d = MUL_D(ctx->f6.d, ctx->f8.d);
    // 0x802777D8: add.d       $f4, $f18, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f18.d); NAN_CHECK(ctx->f10.d); 
    ctx->f4.d = ctx->f18.d + ctx->f10.d;
    // 0x802777DC: jr          $ra
    // 0x802777E0: cvt.s.d     $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.d); 
    ctx->f0.fl = CVT_S_D(ctx->f4.d);
    return;
    // 0x802777E0: cvt.s.d     $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.d); 
    ctx->f0.fl = CVT_S_D(ctx->f4.d);
;}
RECOMP_FUNC void ovl_8024B800_func_802777E4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802777E4: lui         $v0, 0x8009
    ctx->r2 = S32(0X8009 << 16);
    // 0x802777E8: lw          $v0, 0x3B20($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X3B20);
    // 0x802777EC: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x802777F0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802777F4: lw          $v1, 0x90($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X90);
    // 0x802777F8: lui         $at, 0x4100
    ctx->r1 = S32(0X4100 << 16);
    // 0x802777FC: bne         $a0, $v1, L_80277810
    if (ctx->r4 != ctx->r3) {
        // 0x80277800: lui         $t6, 0x801B
        ctx->r14 = S32(0X801B << 16);
            goto L_80277810;
    }
    // 0x80277800: lui         $t6, 0x801B
    ctx->r14 = S32(0X801B << 16);
    // 0x80277804: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x80277808: b           L_80277A58
    // 0x8027780C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80277A58;
    // 0x8027780C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80277810:
    // 0x80277810: lhu         $t6, 0x361E($t6)
    ctx->r14 = MEM_HU(ctx->r14, 0X361E);
    // 0x80277814: lui         $t8, 0x801B
    ctx->r24 = S32(0X801B << 16);
    // 0x80277818: andi        $t7, $t6, 0x4
    ctx->r15 = ctx->r14 & 0X4;
    // 0x8027781C: beq         $t7, $zero, L_802778A8
    if (ctx->r15 == 0) {
        // 0x80277820: nop
    
            goto L_802778A8;
    }
    // 0x80277820: nop

    // 0x80277824: lw          $t8, 0x3614($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X3614);
    // 0x80277828: nop

    // 0x8027782C: beq         $a0, $t8, L_8027789C
    if (ctx->r4 == ctx->r24) {
        // 0x80277830: lui         $at, 0x40C0
        ctx->r1 = S32(0X40C0 << 16);
            goto L_8027789C;
    }
    // 0x80277830: lui         $at, 0x40C0
    ctx->r1 = S32(0X40C0 << 16);
    // 0x80277834: lhu         $v1, 0x6A($v0)
    ctx->r3 = MEM_HU(ctx->r2, 0X6A);
    // 0x80277838: nop

    // 0x8027783C: slti        $at, $v1, 0x23
    ctx->r1 = SIGNED(ctx->r3) < 0X23 ? 1 : 0;
    // 0x80277840: beq         $at, $zero, L_8027789C
    if (ctx->r1 == 0) {
        // 0x80277844: lui         $at, 0x40C0
        ctx->r1 = S32(0X40C0 << 16);
            goto L_8027789C;
    }
    // 0x80277844: lui         $at, 0x40C0
    ctx->r1 = S32(0X40C0 << 16);
    // 0x80277848: mtc1        $v1, $f4
    ctx->f4.u32l = ctx->r3;
    // 0x8027784C: bgez        $v1, L_80277864
    if (SIGNED(ctx->r3) >= 0) {
        // 0x80277850: cvt.s.w     $f6, $f4
        CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
            goto L_80277864;
    }
    // 0x80277850: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x80277854: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x80277858: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x8027785C: nop

    // 0x80277860: add.s       $f6, $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f6.fl = ctx->f6.fl + ctx->f8.fl;
L_80277864:
    // 0x80277864: lui         $at, 0x8028
    ctx->r1 = S32(0X8028 << 16);
    // 0x80277868: lwc1        $f17, -0x1C50($at)
    ctx->f_odd[(17 - 1) * 2] = MEM_W(ctx->r1, -0X1C50);
    // 0x8027786C: lwc1        $f16, -0x1C4C($at)
    ctx->f16.u32l = MEM_W(ctx->r1, -0X1C4C);
    // 0x80277870: cvt.d.s     $f10, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f10.d = CVT_D_S(ctx->f6.fl);
    // 0x80277874: mul.d       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f16.d); 
    ctx->f18.d = MUL_D(ctx->f10.d, ctx->f16.d);
    // 0x80277878: lui         $at, 0x3FF0
    ctx->r1 = S32(0X3FF0 << 16);
    // 0x8027787C: mtc1        $at, $f5
    ctx->f_odd[(5 - 1) * 2] = ctx->r1;
    // 0x80277880: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x80277884: nop

    // 0x80277888: add.d       $f8, $f18, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.d); NAN_CHECK(ctx->f4.d); 
    ctx->f8.d = ctx->f18.d + ctx->f4.d;
    // 0x8027788C: cvt.s.d     $f2, $f8
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.d); 
    ctx->f2.fl = CVT_S_D(ctx->f8.d);
    // 0x80277890: b           L_80277A54
    // 0x80277894: mov.s       $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    ctx->f0.fl = ctx->f2.fl;
        goto L_80277A54;
    // 0x80277894: mov.s       $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    ctx->f0.fl = ctx->f2.fl;
    // 0x80277898: lui         $at, 0x40C0
    ctx->r1 = S32(0X40C0 << 16);
L_8027789C:
    // 0x8027789C: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x802778A0: b           L_80277A58
    // 0x802778A4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80277A58;
    // 0x802778A4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_802778A8:
    // 0x802778A8: lw          $t0, 0x8C($v0)
    ctx->r8 = MEM_W(ctx->r2, 0X8C);
    // 0x802778AC: lw          $t9, 0xC8($a0)
    ctx->r25 = MEM_W(ctx->r4, 0XC8);
    // 0x802778B0: lw          $t1, 0xC8($t0)
    ctx->r9 = MEM_W(ctx->r8, 0XC8);
    // 0x802778B4: nop

    // 0x802778B8: bne         $t9, $t1, L_8027796C
    if (ctx->r25 != ctx->r9) {
        // 0x802778BC: nop
    
            goto L_8027796C;
    }
    // 0x802778BC: nop

    // 0x802778C0: beq         $a0, $v1, L_802778D8
    if (ctx->r4 == ctx->r3) {
        // 0x802778C4: addiu       $a3, $sp, 0x24
        ctx->r7 = ADD32(ctx->r29, 0X24);
            goto L_802778D8;
    }
    // 0x802778C4: addiu       $a3, $sp, 0x24
    ctx->r7 = ADD32(ctx->r29, 0X24);
    // 0x802778C8: lw          $t2, 0xA0($v0)
    ctx->r10 = MEM_W(ctx->r2, 0XA0);
    // 0x802778CC: nop

    // 0x802778D0: bne         $a0, $t2, L_80277960
    if (ctx->r4 != ctx->r10) {
        // 0x802778D4: lui         $at, 0x40C0
        ctx->r1 = S32(0X40C0 << 16);
            goto L_80277960;
    }
    // 0x802778D4: lui         $at, 0x40C0
    ctx->r1 = S32(0X40C0 << 16);
L_802778D8:
    // 0x802778D8: lw          $a1, 0x8($v0)
    ctx->r5 = MEM_W(ctx->r2, 0X8);
    // 0x802778DC: lw          $a2, 0x0($v0)
    ctx->r6 = MEM_W(ctx->r2, 0X0);
    // 0x802778E0: jal         0x80272B98
    // 0x802778E4: sw          $a0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r4;
    ovl_8024B800_func_80272B98(rdram, ctx);
        goto after_0;
    // 0x802778E4: sw          $a0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r4;
    after_0:
    // 0x802778E8: lw          $a0, 0x38($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X38);
    // 0x802778EC: lwc1        $f14, 0x24($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X24);
    // 0x802778F0: lwc1        $f12, 0x8C($a0)
    ctx->f12.u32l = MEM_W(ctx->r4, 0X8C);
    // 0x802778F4: jal         0x80279308
    // 0x802778F8: nop

    ovl_8024B800_func_80279308(rdram, ctx);
        goto after_1;
    // 0x802778F8: nop

    after_1:
    // 0x802778FC: lui         $at, 0x8028
    ctx->r1 = S32(0X8028 << 16);
    // 0x80277900: lwc1        $f7, -0x1C48($at)
    ctx->f_odd[(7 - 1) * 2] = MEM_W(ctx->r1, -0X1C48);
    // 0x80277904: lwc1        $f6, -0x1C44($at)
    ctx->f6.u32l = MEM_W(ctx->r1, -0X1C44);
    // 0x80277908: cvt.d.s     $f10, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f10.d = CVT_D_S(ctx->f0.fl);
    // 0x8027790C: c.lt.d      $f6, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f6.d < ctx->f10.d;
    // 0x80277910: lui         $t3, 0x8009
    ctx->r11 = S32(0X8009 << 16);
    // 0x80277914: bc1f        L_80277960
    if (!c1cs) {
        // 0x80277918: lui         $at, 0x40C0
        ctx->r1 = S32(0X40C0 << 16);
            goto L_80277960;
    }
    // 0x80277918: lui         $at, 0x40C0
    ctx->r1 = S32(0X40C0 << 16);
    // 0x8027791C: lw          $t3, 0x3B20($t3)
    ctx->r11 = MEM_W(ctx->r11, 0X3B20);
    // 0x80277920: lwc1        $f14, 0x24($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X24);
    // 0x80277924: lwc1        $f12, 0x20($t3)
    ctx->f12.u32l = MEM_W(ctx->r11, 0X20);
    // 0x80277928: jal         0x80279308
    // 0x8027792C: nop

    ovl_8024B800_func_80279308(rdram, ctx);
        goto after_2;
    // 0x8027792C: nop

    after_2:
    // 0x80277930: lui         $at, 0x8028
    ctx->r1 = S32(0X8028 << 16);
    // 0x80277934: lwc1        $f17, -0x1C40($at)
    ctx->f_odd[(17 - 1) * 2] = MEM_W(ctx->r1, -0X1C40);
    // 0x80277938: lwc1        $f16, -0x1C3C($at)
    ctx->f16.u32l = MEM_W(ctx->r1, -0X1C3C);
    // 0x8027793C: cvt.d.s     $f18, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f18.d = CVT_D_S(ctx->f0.fl);
    // 0x80277940: c.lt.d      $f16, $f18
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f16.d < ctx->f18.d;
    // 0x80277944: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x80277948: bc1f        L_8027795C
    if (!c1cs) {
        // 0x8027794C: nop
    
            goto L_8027795C;
    }
    // 0x8027794C: nop

    // 0x80277950: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x80277954: b           L_80277A58
    // 0x80277958: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80277A58;
    // 0x80277958: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8027795C:
    // 0x8027795C: lui         $at, 0x40C0
    ctx->r1 = S32(0X40C0 << 16);
L_80277960:
    // 0x80277960: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x80277964: b           L_80277A58
    // 0x80277968: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80277A58;
    // 0x80277968: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8027796C:
    // 0x8027796C: lw          $t4, 0x88($v0)
    ctx->r12 = MEM_W(ctx->r2, 0X88);
    // 0x80277970: lui         $at, 0x4080
    ctx->r1 = S32(0X4080 << 16);
    // 0x80277974: beq         $t4, $zero, L_80277988
    if (ctx->r12 == 0) {
        // 0x80277978: nop
    
            goto L_80277988;
    }
    // 0x80277978: nop

    // 0x8027797C: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x80277980: b           L_80277A58
    // 0x80277984: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80277A58;
    // 0x80277984: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80277988:
    // 0x80277988: lw          $t5, 0xD8($a0)
    ctx->r13 = MEM_W(ctx->r4, 0XD8);
    // 0x8027798C: nop

    // 0x80277990: lbu         $a1, 0x8($t5)
    ctx->r5 = MEM_BU(ctx->r13, 0X8);
    // 0x80277994: jal         0x802752E8
    // 0x80277998: nop

    ovl_8024B800_func_802752E8(rdram, ctx);
        goto after_3;
    // 0x80277998: nop

    after_3:
    // 0x8027799C: lui         $t6, 0x801B
    ctx->r14 = S32(0X801B << 16);
    // 0x802779A0: lhu         $t6, 0x3622($t6)
    ctx->r14 = MEM_HU(ctx->r14, 0X3622);
    // 0x802779A4: sw          $v0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r2;
    // 0x802779A8: beq         $t6, $zero, L_802779F8
    if (ctx->r14 == 0) {
        // 0x802779AC: lui         $t0, 0x801B
        ctx->r8 = S32(0X801B << 16);
            goto L_802779F8;
    }
    // 0x802779AC: lui         $t0, 0x801B
    ctx->r8 = S32(0X801B << 16);
    // 0x802779B0: lui         $t7, 0x8009
    ctx->r15 = S32(0X8009 << 16);
    // 0x802779B4: lw          $t7, 0x3B20($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X3B20);
    // 0x802779B8: nop

    // 0x802779BC: lw          $a0, 0x8C($t7)
    ctx->r4 = MEM_W(ctx->r15, 0X8C);
    // 0x802779C0: nop

    // 0x802779C4: lw          $t8, 0xD8($a0)
    ctx->r24 = MEM_W(ctx->r4, 0XD8);
    // 0x802779C8: nop

    // 0x802779CC: lbu         $a1, 0x12($t8)
    ctx->r5 = MEM_BU(ctx->r24, 0X12);
    // 0x802779D0: jal         0x802752E8
    // 0x802779D4: nop

    ovl_8024B800_func_802752E8(rdram, ctx);
        goto after_4;
    // 0x802779D4: nop

    after_4:
    // 0x802779D8: lui         $a2, 0x801B
    ctx->r6 = S32(0X801B << 16);
    // 0x802779DC: lhu         $a2, 0x3622($a2)
    ctx->r6 = MEM_HU(ctx->r6, 0X3622);
    // 0x802779E0: lw          $a0, 0x34($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X34);
    // 0x802779E4: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    // 0x802779E8: jal         0x80277730
    // 0x802779EC: lui         $a3, 0x4080
    ctx->r7 = S32(0X4080 << 16);
    ovl_8024B800_func_80277730(rdram, ctx);
        goto after_5;
    // 0x802779EC: lui         $a3, 0x4080
    ctx->r7 = S32(0X4080 << 16);
    after_5:
    // 0x802779F0: b           L_80277A58
    // 0x802779F4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80277A58;
    // 0x802779F4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_802779F8:
    // 0x802779F8: lhu         $t0, 0x3624($t0)
    ctx->r8 = MEM_HU(ctx->r8, 0X3624);
    // 0x802779FC: lui         $t9, 0x8009
    ctx->r25 = S32(0X8009 << 16);
    // 0x80277A00: beq         $t0, $zero, L_80277A4C
    if (ctx->r8 == 0) {
        // 0x80277A04: lui         $at, 0x40C0
        ctx->r1 = S32(0X40C0 << 16);
            goto L_80277A4C;
    }
    // 0x80277A04: lui         $at, 0x40C0
    ctx->r1 = S32(0X40C0 << 16);
    // 0x80277A08: lw          $t9, 0x3B20($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X3B20);
    // 0x80277A0C: nop

    // 0x80277A10: lw          $a0, 0x8C($t9)
    ctx->r4 = MEM_W(ctx->r25, 0X8C);
    // 0x80277A14: nop

    // 0x80277A18: lw          $t1, 0xD8($a0)
    ctx->r9 = MEM_W(ctx->r4, 0XD8);
    // 0x80277A1C: nop

    // 0x80277A20: lbu         $a1, 0x0($t1)
    ctx->r5 = MEM_BU(ctx->r9, 0X0);
    // 0x80277A24: jal         0x802752E8
    // 0x80277A28: nop

    ovl_8024B800_func_802752E8(rdram, ctx);
        goto after_6;
    // 0x80277A28: nop

    after_6:
    // 0x80277A2C: lui         $a2, 0x801B
    ctx->r6 = S32(0X801B << 16);
    // 0x80277A30: lhu         $a2, 0x3624($a2)
    ctx->r6 = MEM_HU(ctx->r6, 0X3624);
    // 0x80277A34: lw          $a0, 0x34($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X34);
    // 0x80277A38: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    // 0x80277A3C: jal         0x80277730
    // 0x80277A40: lui         $a3, 0x4080
    ctx->r7 = S32(0X4080 << 16);
    ovl_8024B800_func_80277730(rdram, ctx);
        goto after_7;
    // 0x80277A40: lui         $a3, 0x4080
    ctx->r7 = S32(0X4080 << 16);
    after_7:
    // 0x80277A44: b           L_80277A58
    // 0x80277A48: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80277A58;
    // 0x80277A48: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80277A4C:
    // 0x80277A4C: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x80277A50: nop

L_80277A54:
    // 0x80277A54: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80277A58:
    // 0x80277A58: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    // 0x80277A5C: jr          $ra
    // 0x80277A60: nop

    return;
    // 0x80277A60: nop

;}
RECOMP_FUNC void ovl_8024B800_func_8027784C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8027784C: bgez        $v1, L_80277864
    if (SIGNED(ctx->r3) >= 0) {
        // 0x80277850: cvt.s.w     $f6, $f4
        CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
            goto L_80277864;
    }
    // 0x80277850: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x80277854: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x80277858: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x8027785C: nop

    // 0x80277860: add.s       $f6, $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f6.fl = ctx->f6.fl + ctx->f8.fl;
L_80277864:
    // 0x80277864: lui         $at, 0x8028
    ctx->r1 = S32(0X8028 << 16);
    // 0x80277868: lwc1        $f17, -0x1C50($at)
    ctx->f_odd[(17 - 1) * 2] = MEM_W(ctx->r1, -0X1C50);
    // 0x8027786C: lwc1        $f16, -0x1C4C($at)
    ctx->f16.u32l = MEM_W(ctx->r1, -0X1C4C);
    // 0x80277870: cvt.d.s     $f10, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f10.d = CVT_D_S(ctx->f6.fl);
    // 0x80277874: mul.d       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f16.d); 
    ctx->f18.d = MUL_D(ctx->f10.d, ctx->f16.d);
    // 0x80277878: lui         $at, 0x3FF0
    ctx->r1 = S32(0X3FF0 << 16);
    // 0x8027787C: mtc1        $at, $f5
    ctx->f_odd[(5 - 1) * 2] = ctx->r1;
    // 0x80277880: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x80277884: nop

    // 0x80277888: add.d       $f8, $f18, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.d); NAN_CHECK(ctx->f4.d); 
    ctx->f8.d = ctx->f18.d + ctx->f4.d;
    // 0x8027788C: cvt.s.d     $f2, $f8
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.d); 
    ctx->f2.fl = CVT_S_D(ctx->f8.d);
    // 0x80277890: b           L_80277A54
    // 0x80277894: mov.s       $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    ctx->f0.fl = ctx->f2.fl;
        goto L_80277A54;
    // 0x80277894: mov.s       $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    ctx->f0.fl = ctx->f2.fl;
    // 0x80277898: lui         $at, 0x40C0
    ctx->r1 = S32(0X40C0 << 16);
    // 0x8027789C: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x802778A0: b           L_80277A58
    // 0x802778A4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80277A58;
    // 0x802778A4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802778A8: lw          $t0, 0x8C($v0)
    ctx->r8 = MEM_W(ctx->r2, 0X8C);
    // 0x802778AC: lw          $t9, 0xC8($a0)
    ctx->r25 = MEM_W(ctx->r4, 0XC8);
    // 0x802778B0: lw          $t1, 0xC8($t0)
    ctx->r9 = MEM_W(ctx->r8, 0XC8);
    // 0x802778B4: nop

    // 0x802778B8: bne         $t9, $t1, L_8027796C
    if (ctx->r25 != ctx->r9) {
        // 0x802778BC: nop
    
            goto L_8027796C;
    }
    // 0x802778BC: nop

    // 0x802778C0: beq         $a0, $v1, L_802778D8
    if (ctx->r4 == ctx->r3) {
        // 0x802778C4: addiu       $a3, $sp, 0x24
        ctx->r7 = ADD32(ctx->r29, 0X24);
            goto L_802778D8;
    }
    // 0x802778C4: addiu       $a3, $sp, 0x24
    ctx->r7 = ADD32(ctx->r29, 0X24);
    // 0x802778C8: lw          $t2, 0xA0($v0)
    ctx->r10 = MEM_W(ctx->r2, 0XA0);
    // 0x802778CC: nop

    // 0x802778D0: bne         $a0, $t2, L_80277960
    if (ctx->r4 != ctx->r10) {
        // 0x802778D4: lui         $at, 0x40C0
        ctx->r1 = S32(0X40C0 << 16);
            goto L_80277960;
    }
    // 0x802778D4: lui         $at, 0x40C0
    ctx->r1 = S32(0X40C0 << 16);
L_802778D8:
    // 0x802778D8: lw          $a1, 0x8($v0)
    ctx->r5 = MEM_W(ctx->r2, 0X8);
    // 0x802778DC: lw          $a2, 0x0($v0)
    ctx->r6 = MEM_W(ctx->r2, 0X0);
    // 0x802778E0: jal         0x80272B98
    // 0x802778E4: sw          $a0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r4;
    ovl_8024B800_func_80272B98(rdram, ctx);
        goto after_0;
    // 0x802778E4: sw          $a0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r4;
    after_0:
    // 0x802778E8: lw          $a0, 0x38($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X38);
    // 0x802778EC: lwc1        $f14, 0x24($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X24);
    // 0x802778F0: lwc1        $f12, 0x8C($a0)
    ctx->f12.u32l = MEM_W(ctx->r4, 0X8C);
    // 0x802778F4: jal         0x80279308
    // 0x802778F8: nop

    ovl_8024B800_func_80279308(rdram, ctx);
        goto after_1;
    // 0x802778F8: nop

    after_1:
    // 0x802778FC: lui         $at, 0x8028
    ctx->r1 = S32(0X8028 << 16);
    // 0x80277900: lwc1        $f7, -0x1C48($at)
    ctx->f_odd[(7 - 1) * 2] = MEM_W(ctx->r1, -0X1C48);
    // 0x80277904: lwc1        $f6, -0x1C44($at)
    ctx->f6.u32l = MEM_W(ctx->r1, -0X1C44);
    // 0x80277908: cvt.d.s     $f10, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f10.d = CVT_D_S(ctx->f0.fl);
    // 0x8027790C: c.lt.d      $f6, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f6.d < ctx->f10.d;
    // 0x80277910: lui         $t3, 0x8009
    ctx->r11 = S32(0X8009 << 16);
    // 0x80277914: bc1f        L_80277960
    if (!c1cs) {
        // 0x80277918: lui         $at, 0x40C0
        ctx->r1 = S32(0X40C0 << 16);
            goto L_80277960;
    }
    // 0x80277918: lui         $at, 0x40C0
    ctx->r1 = S32(0X40C0 << 16);
    // 0x8027791C: lw          $t3, 0x3B20($t3)
    ctx->r11 = MEM_W(ctx->r11, 0X3B20);
    // 0x80277920: lwc1        $f14, 0x24($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X24);
    // 0x80277924: lwc1        $f12, 0x20($t3)
    ctx->f12.u32l = MEM_W(ctx->r11, 0X20);
    // 0x80277928: jal         0x80279308
    // 0x8027792C: nop

    ovl_8024B800_func_80279308(rdram, ctx);
        goto after_2;
    // 0x8027792C: nop

    after_2:
    // 0x80277930: lui         $at, 0x8028
    ctx->r1 = S32(0X8028 << 16);
    // 0x80277934: lwc1        $f17, -0x1C40($at)
    ctx->f_odd[(17 - 1) * 2] = MEM_W(ctx->r1, -0X1C40);
    // 0x80277938: lwc1        $f16, -0x1C3C($at)
    ctx->f16.u32l = MEM_W(ctx->r1, -0X1C3C);
    // 0x8027793C: cvt.d.s     $f18, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f18.d = CVT_D_S(ctx->f0.fl);
    // 0x80277940: c.lt.d      $f16, $f18
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f16.d < ctx->f18.d;
    // 0x80277944: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x80277948: bc1f        L_8027795C
    if (!c1cs) {
        // 0x8027794C: nop
    
            goto L_8027795C;
    }
    // 0x8027794C: nop

    // 0x80277950: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x80277954: b           L_80277A58
    // 0x80277958: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80277A58;
    // 0x80277958: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8027795C:
    // 0x8027795C: lui         $at, 0x40C0
    ctx->r1 = S32(0X40C0 << 16);
L_80277960:
    // 0x80277960: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x80277964: b           L_80277A58
    // 0x80277968: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80277A58;
    // 0x80277968: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8027796C:
    // 0x8027796C: lw          $t4, 0x88($v0)
    ctx->r12 = MEM_W(ctx->r2, 0X88);
    // 0x80277970: lui         $at, 0x4080
    ctx->r1 = S32(0X4080 << 16);
    // 0x80277974: beq         $t4, $zero, L_80277988
    if (ctx->r12 == 0) {
        // 0x80277978: nop
    
            goto L_80277988;
    }
    // 0x80277978: nop

    // 0x8027797C: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x80277980: b           L_80277A58
    // 0x80277984: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80277A58;
    // 0x80277984: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80277988:
    // 0x80277988: lw          $t5, 0xD8($a0)
    ctx->r13 = MEM_W(ctx->r4, 0XD8);
    // 0x8027798C: nop

    // 0x80277990: lbu         $a1, 0x8($t5)
    ctx->r5 = MEM_BU(ctx->r13, 0X8);
    // 0x80277994: jal         0x802752E8
    // 0x80277998: nop

    ovl_8024B800_func_802752E8(rdram, ctx);
        goto after_3;
    // 0x80277998: nop

    after_3:
    // 0x8027799C: lui         $t6, 0x801B
    ctx->r14 = S32(0X801B << 16);
    // 0x802779A0: lhu         $t6, 0x3622($t6)
    ctx->r14 = MEM_HU(ctx->r14, 0X3622);
    // 0x802779A4: sw          $v0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r2;
    // 0x802779A8: beq         $t6, $zero, L_802779F8
    if (ctx->r14 == 0) {
        // 0x802779AC: lui         $t0, 0x801B
        ctx->r8 = S32(0X801B << 16);
            goto L_802779F8;
    }
    // 0x802779AC: lui         $t0, 0x801B
    ctx->r8 = S32(0X801B << 16);
    // 0x802779B0: lui         $t7, 0x8009
    ctx->r15 = S32(0X8009 << 16);
    // 0x802779B4: lw          $t7, 0x3B20($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X3B20);
    // 0x802779B8: nop

    // 0x802779BC: lw          $a0, 0x8C($t7)
    ctx->r4 = MEM_W(ctx->r15, 0X8C);
    // 0x802779C0: nop

    // 0x802779C4: lw          $t8, 0xD8($a0)
    ctx->r24 = MEM_W(ctx->r4, 0XD8);
    // 0x802779C8: nop

    // 0x802779CC: lbu         $a1, 0x12($t8)
    ctx->r5 = MEM_BU(ctx->r24, 0X12);
    // 0x802779D0: jal         0x802752E8
    // 0x802779D4: nop

    ovl_8024B800_func_802752E8(rdram, ctx);
        goto after_4;
    // 0x802779D4: nop

    after_4:
    // 0x802779D8: lui         $a2, 0x801B
    ctx->r6 = S32(0X801B << 16);
    // 0x802779DC: lhu         $a2, 0x3622($a2)
    ctx->r6 = MEM_HU(ctx->r6, 0X3622);
    // 0x802779E0: lw          $a0, 0x34($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X34);
    // 0x802779E4: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    // 0x802779E8: jal         0x80277730
    // 0x802779EC: lui         $a3, 0x4080
    ctx->r7 = S32(0X4080 << 16);
    ovl_8024B800_func_80277730(rdram, ctx);
        goto after_5;
    // 0x802779EC: lui         $a3, 0x4080
    ctx->r7 = S32(0X4080 << 16);
    after_5:
    // 0x802779F0: b           L_80277A58
    // 0x802779F4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80277A58;
    // 0x802779F4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_802779F8:
    // 0x802779F8: lhu         $t0, 0x3624($t0)
    ctx->r8 = MEM_HU(ctx->r8, 0X3624);
    // 0x802779FC: lui         $t9, 0x8009
    ctx->r25 = S32(0X8009 << 16);
    // 0x80277A00: beq         $t0, $zero, L_80277A4C
    if (ctx->r8 == 0) {
        // 0x80277A04: lui         $at, 0x40C0
        ctx->r1 = S32(0X40C0 << 16);
            goto L_80277A4C;
    }
    // 0x80277A04: lui         $at, 0x40C0
    ctx->r1 = S32(0X40C0 << 16);
    // 0x80277A08: lw          $t9, 0x3B20($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X3B20);
    // 0x80277A0C: nop

    // 0x80277A10: lw          $a0, 0x8C($t9)
    ctx->r4 = MEM_W(ctx->r25, 0X8C);
    // 0x80277A14: nop

    // 0x80277A18: lw          $t1, 0xD8($a0)
    ctx->r9 = MEM_W(ctx->r4, 0XD8);
    // 0x80277A1C: nop

    // 0x80277A20: lbu         $a1, 0x0($t1)
    ctx->r5 = MEM_BU(ctx->r9, 0X0);
    // 0x80277A24: jal         0x802752E8
    // 0x80277A28: nop

    ovl_8024B800_func_802752E8(rdram, ctx);
        goto after_6;
    // 0x80277A28: nop

    after_6:
    // 0x80277A2C: lui         $a2, 0x801B
    ctx->r6 = S32(0X801B << 16);
    // 0x80277A30: lhu         $a2, 0x3624($a2)
    ctx->r6 = MEM_HU(ctx->r6, 0X3624);
    // 0x80277A34: lw          $a0, 0x34($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X34);
    // 0x80277A38: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    // 0x80277A3C: jal         0x80277730
    // 0x80277A40: lui         $a3, 0x4080
    ctx->r7 = S32(0X4080 << 16);
    ovl_8024B800_func_80277730(rdram, ctx);
        goto after_7;
    // 0x80277A40: lui         $a3, 0x4080
    ctx->r7 = S32(0X4080 << 16);
    after_7:
    // 0x80277A44: b           L_80277A58
    // 0x80277A48: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80277A58;
    // 0x80277A48: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80277A4C:
    // 0x80277A4C: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x80277A50: nop

L_80277A54:
    // 0x80277A54: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80277A58:
    // 0x80277A58: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    // 0x80277A5C: jr          $ra
    // 0x80277A60: nop

    return;
    // 0x80277A60: nop

;}
RECOMP_FUNC void ovl_8024B800_func_80277908(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80277908: cvt.d.s     $f10, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f10.d = CVT_D_S(ctx->f0.fl);
    // 0x8027790C: c.lt.d      $f6, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f6.d < ctx->f10.d;
    // 0x80277910: lui         $t3, 0x8009
    ctx->r11 = S32(0X8009 << 16);
    // 0x80277914: bc1f        L_80277960
    if (!c1cs) {
        // 0x80277918: lui         $at, 0x40C0
        ctx->r1 = S32(0X40C0 << 16);
            goto L_80277960;
    }
    // 0x80277918: lui         $at, 0x40C0
    ctx->r1 = S32(0X40C0 << 16);
    // 0x8027791C: lw          $t3, 0x3B20($t3)
    ctx->r11 = MEM_W(ctx->r11, 0X3B20);
    // 0x80277920: lwc1        $f14, 0x24($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X24);
    // 0x80277924: lwc1        $f12, 0x20($t3)
    ctx->f12.u32l = MEM_W(ctx->r11, 0X20);
    // 0x80277928: jal         0x80279308
    // 0x8027792C: nop

    ovl_8024B800_func_80279308(rdram, ctx);
        goto after_0;
    // 0x8027792C: nop

    after_0:
    // 0x80277930: lui         $at, 0x8028
    ctx->r1 = S32(0X8028 << 16);
    // 0x80277934: lwc1        $f17, -0x1C40($at)
    ctx->f_odd[(17 - 1) * 2] = MEM_W(ctx->r1, -0X1C40);
    // 0x80277938: lwc1        $f16, -0x1C3C($at)
    ctx->f16.u32l = MEM_W(ctx->r1, -0X1C3C);
    // 0x8027793C: cvt.d.s     $f18, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f18.d = CVT_D_S(ctx->f0.fl);
    // 0x80277940: c.lt.d      $f16, $f18
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f16.d < ctx->f18.d;
    // 0x80277944: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x80277948: bc1f        L_8027795C
    if (!c1cs) {
        // 0x8027794C: nop
    
            goto L_8027795C;
    }
    // 0x8027794C: nop

    // 0x80277950: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x80277954: b           L_80277A58
    // 0x80277958: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80277A58;
    // 0x80277958: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8027795C:
    // 0x8027795C: lui         $at, 0x40C0
    ctx->r1 = S32(0X40C0 << 16);
L_80277960:
    // 0x80277960: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x80277964: b           L_80277A58
    // 0x80277968: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80277A58;
    // 0x80277968: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8027796C: lw          $t4, 0x88($v0)
    ctx->r12 = MEM_W(ctx->r2, 0X88);
    // 0x80277970: lui         $at, 0x4080
    ctx->r1 = S32(0X4080 << 16);
    // 0x80277974: beq         $t4, $zero, L_80277988
    if (ctx->r12 == 0) {
        // 0x80277978: nop
    
            goto L_80277988;
    }
    // 0x80277978: nop

    // 0x8027797C: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x80277980: b           L_80277A58
    // 0x80277984: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80277A58;
    // 0x80277984: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80277988:
    // 0x80277988: lw          $t5, 0xD8($a0)
    ctx->r13 = MEM_W(ctx->r4, 0XD8);
    // 0x8027798C: nop

    // 0x80277990: lbu         $a1, 0x8($t5)
    ctx->r5 = MEM_BU(ctx->r13, 0X8);
    // 0x80277994: jal         0x802752E8
    // 0x80277998: nop

    ovl_8024B800_func_802752E8(rdram, ctx);
        goto after_1;
    // 0x80277998: nop

    after_1:
    // 0x8027799C: lui         $t6, 0x801B
    ctx->r14 = S32(0X801B << 16);
    // 0x802779A0: lhu         $t6, 0x3622($t6)
    ctx->r14 = MEM_HU(ctx->r14, 0X3622);
    // 0x802779A4: sw          $v0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r2;
    // 0x802779A8: beq         $t6, $zero, L_802779F8
    if (ctx->r14 == 0) {
        // 0x802779AC: lui         $t0, 0x801B
        ctx->r8 = S32(0X801B << 16);
            goto L_802779F8;
    }
    // 0x802779AC: lui         $t0, 0x801B
    ctx->r8 = S32(0X801B << 16);
    // 0x802779B0: lui         $t7, 0x8009
    ctx->r15 = S32(0X8009 << 16);
    // 0x802779B4: lw          $t7, 0x3B20($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X3B20);
    // 0x802779B8: nop

    // 0x802779BC: lw          $a0, 0x8C($t7)
    ctx->r4 = MEM_W(ctx->r15, 0X8C);
    // 0x802779C0: nop

    // 0x802779C4: lw          $t8, 0xD8($a0)
    ctx->r24 = MEM_W(ctx->r4, 0XD8);
    // 0x802779C8: nop

    // 0x802779CC: lbu         $a1, 0x12($t8)
    ctx->r5 = MEM_BU(ctx->r24, 0X12);
    // 0x802779D0: jal         0x802752E8
    // 0x802779D4: nop

    ovl_8024B800_func_802752E8(rdram, ctx);
        goto after_2;
    // 0x802779D4: nop

    after_2:
    // 0x802779D8: lui         $a2, 0x801B
    ctx->r6 = S32(0X801B << 16);
    // 0x802779DC: lhu         $a2, 0x3622($a2)
    ctx->r6 = MEM_HU(ctx->r6, 0X3622);
    // 0x802779E0: lw          $a0, 0x34($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X34);
    // 0x802779E4: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    // 0x802779E8: jal         0x80277730
    // 0x802779EC: lui         $a3, 0x4080
    ctx->r7 = S32(0X4080 << 16);
    ovl_8024B800_func_80277730(rdram, ctx);
        goto after_3;
    // 0x802779EC: lui         $a3, 0x4080
    ctx->r7 = S32(0X4080 << 16);
    after_3:
    // 0x802779F0: b           L_80277A58
    // 0x802779F4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80277A58;
    // 0x802779F4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_802779F8:
    // 0x802779F8: lhu         $t0, 0x3624($t0)
    ctx->r8 = MEM_HU(ctx->r8, 0X3624);
    // 0x802779FC: lui         $t9, 0x8009
    ctx->r25 = S32(0X8009 << 16);
    // 0x80277A00: beq         $t0, $zero, L_80277A4C
    if (ctx->r8 == 0) {
        // 0x80277A04: lui         $at, 0x40C0
        ctx->r1 = S32(0X40C0 << 16);
            goto L_80277A4C;
    }
    // 0x80277A04: lui         $at, 0x40C0
    ctx->r1 = S32(0X40C0 << 16);
    // 0x80277A08: lw          $t9, 0x3B20($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X3B20);
    // 0x80277A0C: nop

    // 0x80277A10: lw          $a0, 0x8C($t9)
    ctx->r4 = MEM_W(ctx->r25, 0X8C);
    // 0x80277A14: nop

    // 0x80277A18: lw          $t1, 0xD8($a0)
    ctx->r9 = MEM_W(ctx->r4, 0XD8);
    // 0x80277A1C: nop

    // 0x80277A20: lbu         $a1, 0x0($t1)
    ctx->r5 = MEM_BU(ctx->r9, 0X0);
    // 0x80277A24: jal         0x802752E8
    // 0x80277A28: nop

    ovl_8024B800_func_802752E8(rdram, ctx);
        goto after_4;
    // 0x80277A28: nop

    after_4:
    // 0x80277A2C: lui         $a2, 0x801B
    ctx->r6 = S32(0X801B << 16);
    // 0x80277A30: lhu         $a2, 0x3624($a2)
    ctx->r6 = MEM_HU(ctx->r6, 0X3624);
    // 0x80277A34: lw          $a0, 0x34($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X34);
    // 0x80277A38: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    // 0x80277A3C: jal         0x80277730
    // 0x80277A40: lui         $a3, 0x4080
    ctx->r7 = S32(0X4080 << 16);
    ovl_8024B800_func_80277730(rdram, ctx);
        goto after_5;
    // 0x80277A40: lui         $a3, 0x4080
    ctx->r7 = S32(0X4080 << 16);
    after_5:
    // 0x80277A44: b           L_80277A58
    // 0x80277A48: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80277A58;
    // 0x80277A48: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80277A4C:
    // 0x80277A4C: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x80277A50: nop

    // 0x80277A54: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80277A58:
    // 0x80277A58: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    // 0x80277A5C: jr          $ra
    // 0x80277A60: nop

    return;
    // 0x80277A60: nop

;}
RECOMP_FUNC void ovl_8024B800_func_802779A0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802779A0: lhu         $t6, 0x3622($t6)
    ctx->r14 = MEM_HU(ctx->r14, 0X3622);
    // 0x802779A4: sw          $v0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r2;
    // 0x802779A8: beq         $t6, $zero, L_802779F8
    if (ctx->r14 == 0) {
        // 0x802779AC: lui         $t0, 0x801B
        ctx->r8 = S32(0X801B << 16);
            goto L_802779F8;
    }
    // 0x802779AC: lui         $t0, 0x801B
    ctx->r8 = S32(0X801B << 16);
    // 0x802779B0: lui         $t7, 0x8009
    ctx->r15 = S32(0X8009 << 16);
    // 0x802779B4: lw          $t7, 0x3B20($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X3B20);
    // 0x802779B8: nop

    // 0x802779BC: lw          $a0, 0x8C($t7)
    ctx->r4 = MEM_W(ctx->r15, 0X8C);
    // 0x802779C0: nop

    // 0x802779C4: lw          $t8, 0xD8($a0)
    ctx->r24 = MEM_W(ctx->r4, 0XD8);
    // 0x802779C8: nop

    // 0x802779CC: lbu         $a1, 0x12($t8)
    ctx->r5 = MEM_BU(ctx->r24, 0X12);
    // 0x802779D0: jal         0x802752E8
    // 0x802779D4: nop

    ovl_8024B800_func_802752E8(rdram, ctx);
        goto after_0;
    // 0x802779D4: nop

    after_0:
    // 0x802779D8: lui         $a2, 0x801B
    ctx->r6 = S32(0X801B << 16);
    // 0x802779DC: lhu         $a2, 0x3622($a2)
    ctx->r6 = MEM_HU(ctx->r6, 0X3622);
    // 0x802779E0: lw          $a0, 0x34($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X34);
    // 0x802779E4: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    // 0x802779E8: jal         0x80277730
    // 0x802779EC: lui         $a3, 0x4080
    ctx->r7 = S32(0X4080 << 16);
    ovl_8024B800_func_80277730(rdram, ctx);
        goto after_1;
    // 0x802779EC: lui         $a3, 0x4080
    ctx->r7 = S32(0X4080 << 16);
    after_1:
    // 0x802779F0: b           L_80277A58
    // 0x802779F4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80277A58;
    // 0x802779F4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_802779F8:
    // 0x802779F8: lhu         $t0, 0x3624($t0)
    ctx->r8 = MEM_HU(ctx->r8, 0X3624);
    // 0x802779FC: lui         $t9, 0x8009
    ctx->r25 = S32(0X8009 << 16);
    // 0x80277A00: beq         $t0, $zero, L_80277A4C
    if (ctx->r8 == 0) {
        // 0x80277A04: lui         $at, 0x40C0
        ctx->r1 = S32(0X40C0 << 16);
            goto L_80277A4C;
    }
    // 0x80277A04: lui         $at, 0x40C0
    ctx->r1 = S32(0X40C0 << 16);
    // 0x80277A08: lw          $t9, 0x3B20($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X3B20);
    // 0x80277A0C: nop

    // 0x80277A10: lw          $a0, 0x8C($t9)
    ctx->r4 = MEM_W(ctx->r25, 0X8C);
    // 0x80277A14: nop

    // 0x80277A18: lw          $t1, 0xD8($a0)
    ctx->r9 = MEM_W(ctx->r4, 0XD8);
    // 0x80277A1C: nop

    // 0x80277A20: lbu         $a1, 0x0($t1)
    ctx->r5 = MEM_BU(ctx->r9, 0X0);
    // 0x80277A24: jal         0x802752E8
    // 0x80277A28: nop

    ovl_8024B800_func_802752E8(rdram, ctx);
        goto after_2;
    // 0x80277A28: nop

    after_2:
    // 0x80277A2C: lui         $a2, 0x801B
    ctx->r6 = S32(0X801B << 16);
    // 0x80277A30: lhu         $a2, 0x3624($a2)
    ctx->r6 = MEM_HU(ctx->r6, 0X3624);
    // 0x80277A34: lw          $a0, 0x34($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X34);
    // 0x80277A38: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    // 0x80277A3C: jal         0x80277730
    // 0x80277A40: lui         $a3, 0x4080
    ctx->r7 = S32(0X4080 << 16);
    ovl_8024B800_func_80277730(rdram, ctx);
        goto after_3;
    // 0x80277A40: lui         $a3, 0x4080
    ctx->r7 = S32(0X4080 << 16);
    after_3:
    // 0x80277A44: b           L_80277A58
    // 0x80277A48: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80277A58;
    // 0x80277A48: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80277A4C:
    // 0x80277A4C: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x80277A50: nop

    // 0x80277A54: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80277A58:
    // 0x80277A58: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    // 0x80277A5C: jr          $ra
    // 0x80277A60: nop

    return;
    // 0x80277A60: nop

;}
RECOMP_FUNC void ovl_8024B800_func_802779F8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802779F8: lhu         $t0, 0x3624($t0)
    ctx->r8 = MEM_HU(ctx->r8, 0X3624);
    // 0x802779FC: lui         $t9, 0x8009
    ctx->r25 = S32(0X8009 << 16);
    // 0x80277A00: beq         $t0, $zero, L_80277A4C
    if (ctx->r8 == 0) {
        // 0x80277A04: lui         $at, 0x40C0
        ctx->r1 = S32(0X40C0 << 16);
            goto L_80277A4C;
    }
    // 0x80277A04: lui         $at, 0x40C0
    ctx->r1 = S32(0X40C0 << 16);
    // 0x80277A08: lw          $t9, 0x3B20($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X3B20);
    // 0x80277A0C: nop

    // 0x80277A10: lw          $a0, 0x8C($t9)
    ctx->r4 = MEM_W(ctx->r25, 0X8C);
    // 0x80277A14: nop

    // 0x80277A18: lw          $t1, 0xD8($a0)
    ctx->r9 = MEM_W(ctx->r4, 0XD8);
    // 0x80277A1C: nop

    // 0x80277A20: lbu         $a1, 0x0($t1)
    ctx->r5 = MEM_BU(ctx->r9, 0X0);
    // 0x80277A24: jal         0x802752E8
    // 0x80277A28: nop

    ovl_8024B800_func_802752E8(rdram, ctx);
        goto after_0;
    // 0x80277A28: nop

    after_0:
    // 0x80277A2C: lui         $a2, 0x801B
    ctx->r6 = S32(0X801B << 16);
    // 0x80277A30: lhu         $a2, 0x3624($a2)
    ctx->r6 = MEM_HU(ctx->r6, 0X3624);
    // 0x80277A34: lw          $a0, 0x34($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X34);
    // 0x80277A38: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    // 0x80277A3C: jal         0x80277730
    // 0x80277A40: lui         $a3, 0x4080
    ctx->r7 = S32(0X4080 << 16);
    ovl_8024B800_func_80277730(rdram, ctx);
        goto after_1;
    // 0x80277A40: lui         $a3, 0x4080
    ctx->r7 = S32(0X4080 << 16);
    after_1:
    // 0x80277A44: b           L_80277A58
    // 0x80277A48: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80277A58;
    // 0x80277A48: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80277A4C:
    // 0x80277A4C: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x80277A50: nop

    // 0x80277A54: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80277A58:
    // 0x80277A58: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    // 0x80277A5C: jr          $ra
    // 0x80277A60: nop

    return;
    // 0x80277A60: nop

;}
RECOMP_FUNC void ovl_8024B800_func_80277A64(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80277A64: addiu       $sp, $sp, -0x140
    ctx->r29 = ADD32(ctx->r29, -0X140);
    // 0x80277A68: sw          $s3, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r19;
    // 0x80277A6C: lui         $s3, 0x8009
    ctx->r19 = S32(0X8009 << 16);
    // 0x80277A70: addiu       $s3, $s3, 0x3B20
    ctx->r19 = ADD32(ctx->r19, 0X3B20);
    // 0x80277A74: lw          $v1, 0x0($s3)
    ctx->r3 = MEM_W(ctx->r19, 0X0);
    // 0x80277A78: sw          $ra, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r31;
    // 0x80277A7C: sw          $s2, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r18;
    // 0x80277A80: sw          $s1, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r17;
    // 0x80277A84: sw          $s0, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r16;
    // 0x80277A88: swc1        $f29, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f_odd[(29 - 1) * 2];
    // 0x80277A8C: swc1        $f28, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f28.u32l;
    // 0x80277A90: swc1        $f27, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f_odd[(27 - 1) * 2];
    // 0x80277A94: swc1        $f26, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f26.u32l;
    // 0x80277A98: swc1        $f25, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f_odd[(25 - 1) * 2];
    // 0x80277A9C: swc1        $f24, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f24.u32l;
    // 0x80277AA0: swc1        $f23, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f_odd[(23 - 1) * 2];
    // 0x80277AA4: swc1        $f22, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f22.u32l;
    // 0x80277AA8: swc1        $f21, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x80277AAC: swc1        $f20, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f20.u32l;
    // 0x80277AB0: lw          $t6, 0x84($v1)
    ctx->r14 = MEM_W(ctx->r3, 0X84);
    // 0x80277AB4: or          $s2, $zero, $zero
    ctx->r18 = 0 | 0;
    // 0x80277AB8: bne         $t6, $zero, L_80277B10
    if (ctx->r14 != 0) {
        // 0x80277ABC: addiu       $s1, $sp, 0x60
        ctx->r17 = ADD32(ctx->r29, 0X60);
            goto L_80277B10;
    }
    // 0x80277ABC: addiu       $s1, $sp, 0x60
    ctx->r17 = ADD32(ctx->r29, 0X60);
    // 0x80277AC0: lhu         $t7, 0xC0($v1)
    ctx->r15 = MEM_HU(ctx->r3, 0XC0);
    // 0x80277AC4: lui         $t9, 0x8012
    ctx->r25 = S32(0X8012 << 16);
    // 0x80277AC8: andi        $t8, $t7, 0x208
    ctx->r24 = ctx->r15 & 0X208;
    // 0x80277ACC: bne         $t8, $zero, L_80277B10
    if (ctx->r24 != 0) {
        // 0x80277AD0: nop
    
            goto L_80277B10;
    }
    // 0x80277AD0: nop

    // 0x80277AD4: lhu         $t9, 0xB78($t9)
    ctx->r25 = MEM_HU(ctx->r25, 0XB78);
    // 0x80277AD8: nop

    // 0x80277ADC: bne         $t9, $zero, L_80277B10
    if (ctx->r25 != 0) {
        // 0x80277AE0: nop
    
            goto L_80277B10;
    }
    // 0x80277AE0: nop

    // 0x80277AE4: lhu         $t0, 0xC4($v1)
    ctx->r8 = MEM_HU(ctx->r3, 0XC4);
    // 0x80277AE8: nop

    // 0x80277AEC: bne         $t0, $zero, L_80277B10
    if (ctx->r8 != 0) {
        // 0x80277AF0: nop
    
            goto L_80277B10;
    }
    // 0x80277AF0: nop

    // 0x80277AF4: lw          $t1, 0x8C($v1)
    ctx->r9 = MEM_W(ctx->r3, 0X8C);
    // 0x80277AF8: nop

    // 0x80277AFC: lhu         $t2, 0x20($t1)
    ctx->r10 = MEM_HU(ctx->r9, 0X20);
    // 0x80277B00: nop

    // 0x80277B04: andi        $t3, $t2, 0x400
    ctx->r11 = ctx->r10 & 0X400;
    // 0x80277B08: beq         $t3, $zero, L_80277B18
    if (ctx->r11 == 0) {
        // 0x80277B0C: nop
    
            goto L_80277B18;
    }
    // 0x80277B0C: nop

L_80277B10:
    // 0x80277B10: b           L_80277E8C
    // 0x80277B14: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_80277E8C;
    // 0x80277B14: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_80277B18:
    // 0x80277B18: lw          $t4, 0x0($s3)
    ctx->r12 = MEM_W(ctx->r19, 0X0);
    // 0x80277B1C: sw          $zero, 0x64($sp)
    MEM_W(0X64, ctx->r29) = 0;
    // 0x80277B20: lwc1        $f12, 0x8($t4)
    ctx->f12.u32l = MEM_W(ctx->r12, 0X8);
    // 0x80277B24: jal         0x80272AEC
    // 0x80277B28: nop

    ovl_8024B800_func_80272AEC(rdram, ctx);
        goto after_0;
    // 0x80277B28: nop

    after_0:
    // 0x80277B2C: cfc1        $t5, $FpcCsr
    ctx->r13 = get_cop1_cs();
    // 0x80277B30: lui         $s0, 0x8012
    ctx->r16 = S32(0X8012 << 16);
    // 0x80277B34: ori         $at, $t5, 0x3
    ctx->r1 = ctx->r13 | 0X3;
    // 0x80277B38: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x80277B3C: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x80277B40: lw          $s0, 0xA78($s0)
    ctx->r16 = MEM_W(ctx->r16, 0XA78);
    // 0x80277B44: cvt.w.s     $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    ctx->f4.u32l = CVT_W_S(ctx->f0.fl);
    // 0x80277B48: lui         $at, 0x40A0
    ctx->r1 = S32(0X40A0 << 16);
    // 0x80277B4C: mfc1        $t6, $f4
    ctx->r14 = (int32_t)ctx->f4.u32l;
    // 0x80277B50: ctc1        $t5, $FpcCsr
    set_cop1_cs(ctx->r13);
    // 0x80277B54: beq         $s0, $zero, L_80277DBC
    if (ctx->r16 == 0) {
        // 0x80277B58: sw          $t6, 0x124($sp)
        MEM_W(0X124, ctx->r29) = ctx->r14;
            goto L_80277DBC;
    }
    // 0x80277B58: sw          $t6, 0x124($sp)
    MEM_W(0X124, ctx->r29) = ctx->r14;
    // 0x80277B5C: mtc1        $at, $f28
    ctx->f28.u32l = ctx->r1;
    // 0x80277B60: lui         $at, 0xC218
    ctx->r1 = S32(0XC218 << 16);
    // 0x80277B64: mtc1        $at, $f26
    ctx->f26.u32l = ctx->r1;
    // 0x80277B68: lui         $at, 0x4218
    ctx->r1 = S32(0X4218 << 16);
    // 0x80277B6C: mtc1        $at, $f22
    ctx->f22.u32l = ctx->r1;
    // 0x80277B70: lui         $at, 0x4190
    ctx->r1 = S32(0X4190 << 16);
    // 0x80277B74: mtc1        $at, $f20
    ctx->f20.u32l = ctx->r1;
    // 0x80277B78: mtc1        $zero, $f24
    ctx->f24.u32l = 0;
    // 0x80277B7C: nop

L_80277B80:
    // 0x80277B80: lhu         $t8, 0x1E($s0)
    ctx->r24 = MEM_HU(ctx->r16, 0X1E);
    // 0x80277B84: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
    // 0x80277B88: andi        $t7, $s2, 0xFFFF
    ctx->r15 = ctx->r18 & 0XFFFF;
    // 0x80277B8C: bne         $t8, $zero, L_80277DA0
    if (ctx->r24 != 0) {
        // 0x80277B90: or          $s2, $t7, $zero
        ctx->r18 = ctx->r15 | 0;
            goto L_80277DA0;
    }
    // 0x80277B90: or          $s2, $t7, $zero
    ctx->r18 = ctx->r15 | 0;
    // 0x80277B94: lui         $at, 0x4248
    ctx->r1 = S32(0X4248 << 16);
    // 0x80277B98: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x80277B9C: lwc1        $f0, 0x84($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X84);
    // 0x80277BA0: nop

    // 0x80277BA4: c.lt.s      $f0, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f0.fl < ctx->f6.fl;
    // 0x80277BA8: nop

    // 0x80277BAC: bc1f        L_80277BC4
    if (!c1cs) {
        // 0x80277BB0: nop
    
            goto L_80277BC4;
    }
    // 0x80277BB0: nop

    // 0x80277BB4: jal         0x802775D4
    // 0x80277BB8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_8024B800_func_802775D4(rdram, ctx);
        goto after_1;
    // 0x80277BB8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
    // 0x80277BBC: lwc1        $f0, 0x84($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X84);
    // 0x80277BC0: nop

L_80277BC4:
    // 0x80277BC4: c.lt.s      $f0, $f20
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    c1cs = ctx->f0.fl < ctx->f20.fl;
    // 0x80277BC8: lui         $at, 0x4170
    ctx->r1 = S32(0X4170 << 16);
    // 0x80277BCC: bc1f        L_80277DA4
    if (!c1cs) {
        // 0x80277BD0: sll         $t8, $s2, 2
        ctx->r24 = S32(ctx->r18 << 2);
            goto L_80277DA4;
    }
    // 0x80277BD0: sll         $t8, $s2, 2
    ctx->r24 = S32(ctx->r18 << 2);
    // 0x80277BD4: lhu         $t9, 0x1A($s0)
    ctx->r25 = MEM_HU(ctx->r16, 0X1A);
    // 0x80277BD8: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x80277BDC: bne         $t9, $zero, L_80277C04
    if (ctx->r25 != 0) {
        // 0x80277BE0: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80277C04;
    }
    // 0x80277BE0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80277BE4: lw          $a1, 0x4C($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X4C);
    // 0x80277BE8: lw          $a2, 0x44($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X44);
    // 0x80277BEC: jal         0x80272058
    // 0x80277BF0: swc1        $f0, 0x118($sp)
    MEM_W(0X118, ctx->r29) = ctx->f0.u32l;
    ovl_8024B800_func_80272058(rdram, ctx);
        goto after_2;
    // 0x80277BF0: swc1        $f0, 0x118($sp)
    MEM_W(0X118, ctx->r29) = ctx->f0.u32l;
    after_2:
    // 0x80277BF4: lwc1        $f0, 0x118($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X118);
    // 0x80277BF8: bne         $v0, $zero, L_80277C04
    if (ctx->r2 != 0) {
        // 0x80277BFC: nop
    
            goto L_80277C04;
    }
    // 0x80277BFC: nop

    // 0x80277C00: mov.s       $f0, $f20
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    ctx->f0.fl = ctx->f20.fl;
L_80277C04:
    // 0x80277C04: lwc1        $f14, 0x48($s0)
    ctx->f14.u32l = MEM_W(ctx->r16, 0X48);
    // 0x80277C08: jal         0x8027809C
    // 0x80277C0C: add.s       $f12, $f14, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f12.fl = ctx->f14.fl + ctx->f0.fl;
    ovl_8024B800_func_8027809C(rdram, ctx);
        goto after_3;
    // 0x80277C0C: add.s       $f12, $f14, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f12.fl = ctx->f14.fl + ctx->f0.fl;
    after_3:
    // 0x80277C10: beq         $v0, $zero, L_80277DA4
    if (ctx->r2 == 0) {
        // 0x80277C14: sll         $t8, $s2, 2
        ctx->r24 = S32(ctx->r18 << 2);
            goto L_80277DA4;
    }
    // 0x80277C14: sll         $t8, $s2, 2
    ctx->r24 = S32(ctx->r18 << 2);
    // 0x80277C18: lw          $v1, 0x0($s3)
    ctx->r3 = MEM_W(ctx->r19, 0X0);
    // 0x80277C1C: lw          $t2, 0x124($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X124);
    // 0x80277C20: lw          $v0, 0x88($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X88);
    // 0x80277C24: slti        $at, $t2, 0x1F9
    ctx->r1 = SIGNED(ctx->r10) < 0X1F9 ? 1 : 0;
    // 0x80277C28: beq         $v0, $zero, L_80277C4C
    if (ctx->r2 == 0) {
        // 0x80277C2C: nop
    
            goto L_80277C4C;
    }
    // 0x80277C2C: nop

    // 0x80277C30: beq         $s0, $v0, L_80277C4C
    if (ctx->r16 == ctx->r2) {
        // 0x80277C34: nop
    
            goto L_80277C4C;
    }
    // 0x80277C34: nop

    // 0x80277C38: lw          $t0, 0xC8($v0)
    ctx->r8 = MEM_W(ctx->r2, 0XC8);
    // 0x80277C3C: lw          $t1, 0xC8($s0)
    ctx->r9 = MEM_W(ctx->r16, 0XC8);
    // 0x80277C40: nop

    // 0x80277C44: beq         $t0, $t1, L_80277DA4
    if (ctx->r8 == ctx->r9) {
        // 0x80277C48: sll         $t8, $s2, 2
        ctx->r24 = S32(ctx->r18 << 2);
            goto L_80277DA4;
    }
    // 0x80277C48: sll         $t8, $s2, 2
    ctx->r24 = S32(ctx->r18 << 2);
L_80277C4C:
    // 0x80277C4C: bne         $at, $zero, L_80277C94
    if (ctx->r1 != 0) {
        // 0x80277C50: nop
    
            goto L_80277C94;
    }
    // 0x80277C50: nop

    // 0x80277C54: lwc1        $f14, 0x0($v1)
    ctx->f14.u32l = MEM_W(ctx->r3, 0X0);
    // 0x80277C58: lwc1        $f12, 0x44($s0)
    ctx->f12.u32l = MEM_W(ctx->r16, 0X44);
    // 0x80277C5C: sub.s       $f0, $f22, $f14
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f22.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f0.fl = ctx->f22.fl - ctx->f14.fl;
    // 0x80277C60: sub.s       $f2, $f22, $f12
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f22.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f2.fl = ctx->f22.fl - ctx->f12.fl;
    // 0x80277C64: mul.s       $f8, $f0, $f2
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f8.fl = MUL_S(ctx->f0.fl, ctx->f2.fl);
    // 0x80277C68: c.lt.s      $f8, $f24
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 24);
    c1cs = ctx->f8.fl < ctx->f24.fl;
    // 0x80277C6C: nop

    // 0x80277C70: bc1t        L_80277DA4
    if (c1cs) {
        // 0x80277C74: sll         $t8, $s2, 2
        ctx->r24 = S32(ctx->r18 << 2);
            goto L_80277DA4;
    }
    // 0x80277C74: sll         $t8, $s2, 2
    ctx->r24 = S32(ctx->r18 << 2);
    // 0x80277C78: sub.s       $f0, $f26, $f14
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 26);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f26.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f0.fl = ctx->f26.fl - ctx->f14.fl;
    // 0x80277C7C: sub.s       $f2, $f26, $f12
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 26);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f26.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f2.fl = ctx->f26.fl - ctx->f12.fl;
    // 0x80277C80: mul.s       $f10, $f0, $f2
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f10.fl = MUL_S(ctx->f0.fl, ctx->f2.fl);
    // 0x80277C84: c.lt.s      $f10, $f24
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 24);
    c1cs = ctx->f10.fl < ctx->f24.fl;
    // 0x80277C88: nop

    // 0x80277C8C: bc1t        L_80277DA4
    if (c1cs) {
        // 0x80277C90: sll         $t8, $s2, 2
        ctx->r24 = S32(ctx->r18 << 2);
            goto L_80277DA4;
    }
    // 0x80277C90: sll         $t8, $s2, 2
    ctx->r24 = S32(ctx->r18 << 2);
L_80277C94:
    // 0x80277C94: jal         0x802777E4
    // 0x80277C98: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_8024B800_func_802777E4(rdram, ctx);
        goto after_4;
    // 0x80277C98: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_4:
    // 0x80277C9C: lw          $v1, 0x0($s3)
    ctx->r3 = MEM_W(ctx->r19, 0X0);
    // 0x80277CA0: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x80277CA4: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x80277CA8: lwc1        $f18, 0x4($v1)
    ctx->f18.u32l = MEM_W(ctx->r3, 0X4);
    // 0x80277CAC: mov.s       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.fl = ctx->f0.fl;
    // 0x80277CB0: c.lt.s      $f16, $f18
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f16.fl < ctx->f18.fl;
    // 0x80277CB4: nop

    // 0x80277CB8: bc1f        L_80277D78
    if (!c1cs) {
        // 0x80277CBC: nop
    
            goto L_80277D78;
    }
    // 0x80277CBC: nop

    // 0x80277CC0: lhu         $t3, 0x6A($v1)
    ctx->r11 = MEM_HU(ctx->r3, 0X6A);
    // 0x80277CC4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80277CC8: slti        $at, $t3, 0xB
    ctx->r1 = SIGNED(ctx->r11) < 0XB ? 1 : 0;
    // 0x80277CCC: bne         $at, $zero, L_80277D78
    if (ctx->r1 != 0) {
        // 0x80277CD0: nop
    
            goto L_80277D78;
    }
    // 0x80277CD0: nop

    // 0x80277CD4: jal         0x80277ED0
    // 0x80277CD8: lui         $a1, 0x40C0
    ctx->r5 = S32(0X40C0 << 16);
    ovl_8024B800_func_80277ED0(rdram, ctx);
        goto after_5;
    // 0x80277CD8: lui         $a1, 0x40C0
    ctx->r5 = S32(0X40C0 << 16);
    after_5:
    // 0x80277CDC: beq         $v0, $zero, L_80277DA4
    if (ctx->r2 == 0) {
        // 0x80277CE0: sll         $t8, $s2, 2
        ctx->r24 = S32(ctx->r18 << 2);
            goto L_80277DA4;
    }
    // 0x80277CE0: sll         $t8, $s2, 2
    ctx->r24 = S32(ctx->r18 << 2);
    // 0x80277CE4: sw          $s0, 0x4($s1)
    MEM_W(0X4, ctx->r17) = ctx->r16;
    // 0x80277CE8: lwc1        $f12, 0x8C($s0)
    ctx->f12.u32l = MEM_W(ctx->r16, 0X8C);
    // 0x80277CEC: jal         0x80081040
    // 0x80277CF0: nop

    func_80081040(rdram, ctx);
        goto after_6;
    // 0x80277CF0: nop

    after_6:
    // 0x80277CF4: mul.s       $f4, $f0, $f28
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 28);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f28.fl); 
    ctx->f4.fl = MUL_S(ctx->f0.fl, ctx->f28.fl);
    // 0x80277CF8: lwc1        $f6, 0x4C($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X4C);
    // 0x80277CFC: nop

    // 0x80277D00: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x80277D04: cfc1        $t4, $FpcCsr
    ctx->r12 = get_cop1_cs();
    // 0x80277D08: nop

    // 0x80277D0C: ori         $at, $t4, 0x3
    ctx->r1 = ctx->r12 | 0X3;
    // 0x80277D10: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x80277D14: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x80277D18: nop

    // 0x80277D1C: cvt.w.s     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.u32l = CVT_W_S(ctx->f8.fl);
    // 0x80277D20: mfc1        $t5, $f10
    ctx->r13 = (int32_t)ctx->f10.u32l;
    // 0x80277D24: ctc1        $t4, $FpcCsr
    set_cop1_cs(ctx->r12);
    // 0x80277D28: sh          $t5, 0x2($s1)
    MEM_H(0X2, ctx->r17) = ctx->r13;
    // 0x80277D2C: lwc1        $f12, 0x8C($s0)
    ctx->f12.u32l = MEM_W(ctx->r16, 0X8C);
    // 0x80277D30: jal         0x80080E80
    // 0x80277D34: nop

    func_80080E80(rdram, ctx);
        goto after_7;
    // 0x80277D34: nop

    after_7:
    // 0x80277D38: mul.s       $f16, $f0, $f28
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 28);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f28.fl); 
    ctx->f16.fl = MUL_S(ctx->f0.fl, ctx->f28.fl);
    // 0x80277D3C: lwc1        $f18, 0x44($s0)
    ctx->f18.u32l = MEM_W(ctx->r16, 0X44);
    // 0x80277D40: addiu       $s1, $s1, 0x8
    ctx->r17 = ADD32(ctx->r17, 0X8);
    // 0x80277D44: sw          $zero, 0x4($s1)
    MEM_W(0X4, ctx->r17) = 0;
    // 0x80277D48: add.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f16.fl + ctx->f18.fl;
    // 0x80277D4C: cfc1        $t6, $FpcCsr
    ctx->r14 = get_cop1_cs();
    // 0x80277D50: nop

    // 0x80277D54: ori         $at, $t6, 0x3
    ctx->r1 = ctx->r14 | 0X3;
    // 0x80277D58: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x80277D5C: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x80277D60: nop

    // 0x80277D64: cvt.w.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = CVT_W_S(ctx->f4.fl);
    // 0x80277D68: mfc1        $t7, $f6
    ctx->r15 = (int32_t)ctx->f6.u32l;
    // 0x80277D6C: ctc1        $t6, $FpcCsr
    set_cop1_cs(ctx->r14);
    // 0x80277D70: b           L_80277DA0
    // 0x80277D74: sh          $t7, -0x8($s1)
    MEM_H(-0X8, ctx->r17) = ctx->r15;
        goto L_80277DA0;
    // 0x80277D74: sh          $t7, -0x8($s1)
    MEM_H(-0X8, ctx->r17) = ctx->r15;
L_80277D78:
    // 0x80277D78: lwc1        $f12, 0x4C($s0)
    ctx->f12.u32l = MEM_W(ctx->r16, 0X4C);
    // 0x80277D7C: lwc1        $f14, 0x44($s0)
    ctx->f14.u32l = MEM_W(ctx->r16, 0X44);
    // 0x80277D80: mfc1        $a2, $f2
    ctx->r6 = (int32_t)ctx->f2.u32l;
    // 0x80277D84: jal         0x80278144
    // 0x80277D88: or          $a3, $s1, $zero
    ctx->r7 = ctx->r17 | 0;
    ovl_8024B800_func_80278144(rdram, ctx);
        goto after_8;
    // 0x80277D88: or          $a3, $s1, $zero
    ctx->r7 = ctx->r17 | 0;
    after_8:
    // 0x80277D8C: beq         $v0, $zero, L_80277DA4
    if (ctx->r2 == 0) {
        // 0x80277D90: sll         $t8, $s2, 2
        ctx->r24 = S32(ctx->r18 << 2);
            goto L_80277DA4;
    }
    // 0x80277D90: sll         $t8, $s2, 2
    ctx->r24 = S32(ctx->r18 << 2);
    // 0x80277D94: sw          $s0, 0x4($s1)
    MEM_W(0X4, ctx->r17) = ctx->r16;
    // 0x80277D98: addiu       $s1, $s1, 0x8
    ctx->r17 = ADD32(ctx->r17, 0X8);
    // 0x80277D9C: sw          $zero, 0x4($s1)
    MEM_W(0X4, ctx->r17) = 0;
L_80277DA0:
    // 0x80277DA0: sll         $t8, $s2, 2
    ctx->r24 = S32(ctx->r18 << 2);
L_80277DA4:
    // 0x80277DA4: lui         $s0, 0x8012
    ctx->r16 = S32(0X8012 << 16);
    // 0x80277DA8: addu        $s0, $s0, $t8
    ctx->r16 = ADD32(ctx->r16, ctx->r24);
    // 0x80277DAC: lw          $s0, 0xA78($s0)
    ctx->r16 = MEM_W(ctx->r16, 0XA78);
    // 0x80277DB0: nop

    // 0x80277DB4: bne         $s0, $zero, L_80277B80
    if (ctx->r16 != 0) {
        // 0x80277DB8: nop
    
            goto L_80277B80;
    }
    // 0x80277DB8: nop

L_80277DBC:
    // 0x80277DBC: jal         0x80276C1C
    // 0x80277DC0: addiu       $a0, $sp, 0x60
    ctx->r4 = ADD32(ctx->r29, 0X60);
    ovl_8024B800_func_80276C1C(rdram, ctx);
        goto after_9;
    // 0x80277DC0: addiu       $a0, $sp, 0x60
    ctx->r4 = ADD32(ctx->r29, 0X60);
    after_9:
    // 0x80277DC4: bltz        $v0, L_80277E88
    if (SIGNED(ctx->r2) < 0) {
        // 0x80277DC8: or          $s0, $zero, $zero
        ctx->r16 = 0 | 0;
            goto L_80277E88;
    }
    // 0x80277DC8: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x80277DCC: sll         $t9, $v0, 16
    ctx->r25 = S32(ctx->r2 << 16);
    // 0x80277DD0: sra         $t0, $t9, 16
    ctx->r8 = S32(SIGNED(ctx->r25) >> 16);
    // 0x80277DD4: sll         $t1, $t0, 3
    ctx->r9 = S32(ctx->r8 << 3);
    // 0x80277DD8: addiu       $t2, $sp, 0x60
    ctx->r10 = ADD32(ctx->r29, 0X60);
    // 0x80277DDC: addu        $v1, $t1, $t2
    ctx->r3 = ADD32(ctx->r9, ctx->r10);
    // 0x80277DE0: lh          $t3, 0x2($v1)
    ctx->r11 = MEM_H(ctx->r3, 0X2);
    // 0x80277DE4: lw          $t4, 0x0($s3)
    ctx->r12 = MEM_W(ctx->r19, 0X0);
    // 0x80277DE8: mtc1        $t3, $f8
    ctx->f8.u32l = ctx->r11;
    // 0x80277DEC: lw          $s0, 0x4($v1)
    ctx->r16 = MEM_W(ctx->r3, 0X4);
    // 0x80277DF0: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x80277DF4: addiu       $at, $zero, 0x43
    ctx->r1 = ADD32(0, 0X43);
    // 0x80277DF8: swc1        $f10, 0x8($t4)
    MEM_W(0X8, ctx->r12) = ctx->f10.u32l;
    // 0x80277DFC: lh          $t5, 0x0($v1)
    ctx->r13 = MEM_H(ctx->r3, 0X0);
    // 0x80277E00: lw          $t6, 0x0($s3)
    ctx->r14 = MEM_W(ctx->r19, 0X0);
    // 0x80277E04: mtc1        $t5, $f16
    ctx->f16.u32l = ctx->r13;
    // 0x80277E08: nop

    // 0x80277E0C: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x80277E10: swc1        $f18, 0x0($t6)
    MEM_W(0X0, ctx->r14) = ctx->f18.u32l;
    // 0x80277E14: lhu         $t7, 0xE($s0)
    ctx->r15 = MEM_HU(ctx->r16, 0XE);
    // 0x80277E18: nop

    // 0x80277E1C: bne         $t7, $at, L_80277E8C
    if (ctx->r15 != ctx->r1) {
        // 0x80277E20: or          $v0, $s0, $zero
        ctx->r2 = ctx->r16 | 0;
            goto L_80277E8C;
    }
    // 0x80277E20: or          $v0, $s0, $zero
    ctx->r2 = ctx->r16 | 0;
    // 0x80277E24: lw          $v1, 0x0($s3)
    ctx->r3 = MEM_W(ctx->r19, 0X0);
    // 0x80277E28: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80277E2C: lw          $a1, 0x4C($v1)
    ctx->r5 = MEM_W(ctx->r3, 0X4C);
    // 0x80277E30: lw          $a2, 0x44($v1)
    ctx->r6 = MEM_W(ctx->r3, 0X44);
    // 0x80277E34: jal         0x80272B98
    // 0x80277E38: addiu       $a3, $sp, 0x128
    ctx->r7 = ADD32(ctx->r29, 0X128);
    ovl_8024B800_func_80272B98(rdram, ctx);
        goto after_10;
    // 0x80277E38: addiu       $a3, $sp, 0x128
    ctx->r7 = ADD32(ctx->r29, 0X128);
    after_10:
    // 0x80277E3C: lwc1        $f4, 0x12C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X12C);
    // 0x80277E40: lui         $at, 0x4014
    ctx->r1 = S32(0X4014 << 16);
    // 0x80277E44: mtc1        $at, $f9
    ctx->f_odd[(9 - 1) * 2] = ctx->r1;
    // 0x80277E48: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x80277E4C: cvt.d.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.d = CVT_D_S(ctx->f4.fl);
    // 0x80277E50: c.lt.d      $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f6.d < ctx->f8.d;
    // 0x80277E54: nop

    // 0x80277E58: bc1f        L_80277E8C
    if (!c1cs) {
        // 0x80277E5C: or          $v0, $s0, $zero
        ctx->r2 = ctx->r16 | 0;
            goto L_80277E8C;
    }
    // 0x80277E5C: or          $v0, $s0, $zero
    ctx->r2 = ctx->r16 | 0;
    // 0x80277E60: lw          $v1, 0x0($s3)
    ctx->r3 = MEM_W(ctx->r19, 0X0);
    // 0x80277E64: nop

    // 0x80277E68: lwc1        $f10, 0x4C($v1)
    ctx->f10.u32l = MEM_W(ctx->r3, 0X4C);
    // 0x80277E6C: nop

    // 0x80277E70: swc1        $f10, 0x8($v1)
    MEM_W(0X8, ctx->r3) = ctx->f10.u32l;
    // 0x80277E74: lw          $v1, 0x0($s3)
    ctx->r3 = MEM_W(ctx->r19, 0X0);
    // 0x80277E78: nop

    // 0x80277E7C: lwc1        $f16, 0x44($v1)
    ctx->f16.u32l = MEM_W(ctx->r3, 0X44);
    // 0x80277E80: nop

    // 0x80277E84: swc1        $f16, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->f16.u32l;
L_80277E88:
    // 0x80277E88: or          $v0, $s0, $zero
    ctx->r2 = ctx->r16 | 0;
L_80277E8C:
    // 0x80277E8C: lw          $ra, 0x4C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X4C);
    // 0x80277E90: lwc1        $f21, 0x10($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X10);
    // 0x80277E94: lwc1        $f20, 0x14($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X14);
    // 0x80277E98: lwc1        $f23, 0x18($sp)
    ctx->f_odd[(23 - 1) * 2] = MEM_W(ctx->r29, 0X18);
    // 0x80277E9C: lwc1        $f22, 0x1C($sp)
    ctx->f22.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x80277EA0: lwc1        $f25, 0x20($sp)
    ctx->f_odd[(25 - 1) * 2] = MEM_W(ctx->r29, 0X20);
    // 0x80277EA4: lwc1        $f24, 0x24($sp)
    ctx->f24.u32l = MEM_W(ctx->r29, 0X24);
    // 0x80277EA8: lwc1        $f27, 0x28($sp)
    ctx->f_odd[(27 - 1) * 2] = MEM_W(ctx->r29, 0X28);
    // 0x80277EAC: lwc1        $f26, 0x2C($sp)
    ctx->f26.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x80277EB0: lwc1        $f29, 0x30($sp)
    ctx->f_odd[(29 - 1) * 2] = MEM_W(ctx->r29, 0X30);
    // 0x80277EB4: lwc1        $f28, 0x34($sp)
    ctx->f28.u32l = MEM_W(ctx->r29, 0X34);
    // 0x80277EB8: lw          $s0, 0x3C($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X3C);
    // 0x80277EBC: lw          $s1, 0x40($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X40);
    // 0x80277EC0: lw          $s2, 0x44($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X44);
    // 0x80277EC4: lw          $s3, 0x48($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X48);
    // 0x80277EC8: jr          $ra
    // 0x80277ECC: addiu       $sp, $sp, 0x140
    ctx->r29 = ADD32(ctx->r29, 0X140);
    return;
    // 0x80277ECC: addiu       $sp, $sp, 0x140
    ctx->r29 = ADD32(ctx->r29, 0X140);
;}
RECOMP_FUNC void ovl_8024B800_func_80277B80(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
L_80277B80:
    // 0x80277B80: lhu         $t8, 0x1E($s0)
    ctx->r24 = MEM_HU(ctx->r16, 0X1E);
    // 0x80277B84: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
    // 0x80277B88: andi        $t7, $s2, 0xFFFF
    ctx->r15 = ctx->r18 & 0XFFFF;
    // 0x80277B8C: bne         $t8, $zero, L_80277DA0
    if (ctx->r24 != 0) {
        // 0x80277B90: or          $s2, $t7, $zero
        ctx->r18 = ctx->r15 | 0;
            goto L_80277DA0;
    }
    // 0x80277B90: or          $s2, $t7, $zero
    ctx->r18 = ctx->r15 | 0;
    // 0x80277B94: lui         $at, 0x4248
    ctx->r1 = S32(0X4248 << 16);
    // 0x80277B98: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x80277B9C: lwc1        $f0, 0x84($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X84);
    // 0x80277BA0: nop

    // 0x80277BA4: c.lt.s      $f0, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f0.fl < ctx->f6.fl;
    // 0x80277BA8: nop

    // 0x80277BAC: bc1f        L_80277BC4
    if (!c1cs) {
        // 0x80277BB0: nop
    
            goto L_80277BC4;
    }
    // 0x80277BB0: nop

    // 0x80277BB4: jal         0x802775D4
    // 0x80277BB8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_8024B800_func_802775D4(rdram, ctx);
        goto after_0;
    // 0x80277BB8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_0:
    // 0x80277BBC: lwc1        $f0, 0x84($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X84);
    // 0x80277BC0: nop

L_80277BC4:
    // 0x80277BC4: c.lt.s      $f0, $f20
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    c1cs = ctx->f0.fl < ctx->f20.fl;
    // 0x80277BC8: lui         $at, 0x4170
    ctx->r1 = S32(0X4170 << 16);
    // 0x80277BCC: bc1f        L_80277DA4
    if (!c1cs) {
        // 0x80277BD0: sll         $t8, $s2, 2
        ctx->r24 = S32(ctx->r18 << 2);
            goto L_80277DA4;
    }
    // 0x80277BD0: sll         $t8, $s2, 2
    ctx->r24 = S32(ctx->r18 << 2);
    // 0x80277BD4: lhu         $t9, 0x1A($s0)
    ctx->r25 = MEM_HU(ctx->r16, 0X1A);
    // 0x80277BD8: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x80277BDC: bne         $t9, $zero, L_80277C04
    if (ctx->r25 != 0) {
        // 0x80277BE0: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80277C04;
    }
    // 0x80277BE0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80277BE4: lw          $a1, 0x4C($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X4C);
    // 0x80277BE8: lw          $a2, 0x44($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X44);
    // 0x80277BEC: jal         0x80272058
    // 0x80277BF0: swc1        $f0, 0x118($sp)
    MEM_W(0X118, ctx->r29) = ctx->f0.u32l;
    ovl_8024B800_func_80272058(rdram, ctx);
        goto after_1;
    // 0x80277BF0: swc1        $f0, 0x118($sp)
    MEM_W(0X118, ctx->r29) = ctx->f0.u32l;
    after_1:
    // 0x80277BF4: lwc1        $f0, 0x118($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X118);
    // 0x80277BF8: bne         $v0, $zero, L_80277C04
    if (ctx->r2 != 0) {
        // 0x80277BFC: nop
    
            goto L_80277C04;
    }
    // 0x80277BFC: nop

    // 0x80277C00: mov.s       $f0, $f20
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    ctx->f0.fl = ctx->f20.fl;
L_80277C04:
    // 0x80277C04: lwc1        $f14, 0x48($s0)
    ctx->f14.u32l = MEM_W(ctx->r16, 0X48);
    // 0x80277C08: jal         0x8027809C
    // 0x80277C0C: add.s       $f12, $f14, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f12.fl = ctx->f14.fl + ctx->f0.fl;
    ovl_8024B800_func_8027809C(rdram, ctx);
        goto after_2;
    // 0x80277C0C: add.s       $f12, $f14, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f12.fl = ctx->f14.fl + ctx->f0.fl;
    after_2:
    // 0x80277C10: beq         $v0, $zero, L_80277DA4
    if (ctx->r2 == 0) {
        // 0x80277C14: sll         $t8, $s2, 2
        ctx->r24 = S32(ctx->r18 << 2);
            goto L_80277DA4;
    }
    // 0x80277C14: sll         $t8, $s2, 2
    ctx->r24 = S32(ctx->r18 << 2);
    // 0x80277C18: lw          $v1, 0x0($s3)
    ctx->r3 = MEM_W(ctx->r19, 0X0);
    // 0x80277C1C: lw          $t2, 0x124($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X124);
    // 0x80277C20: lw          $v0, 0x88($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X88);
    // 0x80277C24: slti        $at, $t2, 0x1F9
    ctx->r1 = SIGNED(ctx->r10) < 0X1F9 ? 1 : 0;
    // 0x80277C28: beq         $v0, $zero, L_80277C4C
    if (ctx->r2 == 0) {
        // 0x80277C2C: nop
    
            goto L_80277C4C;
    }
    // 0x80277C2C: nop

    // 0x80277C30: beq         $s0, $v0, L_80277C4C
    if (ctx->r16 == ctx->r2) {
        // 0x80277C34: nop
    
            goto L_80277C4C;
    }
    // 0x80277C34: nop

    // 0x80277C38: lw          $t0, 0xC8($v0)
    ctx->r8 = MEM_W(ctx->r2, 0XC8);
    // 0x80277C3C: lw          $t1, 0xC8($s0)
    ctx->r9 = MEM_W(ctx->r16, 0XC8);
    // 0x80277C40: nop

    // 0x80277C44: beq         $t0, $t1, L_80277DA4
    if (ctx->r8 == ctx->r9) {
        // 0x80277C48: sll         $t8, $s2, 2
        ctx->r24 = S32(ctx->r18 << 2);
            goto L_80277DA4;
    }
    // 0x80277C48: sll         $t8, $s2, 2
    ctx->r24 = S32(ctx->r18 << 2);
L_80277C4C:
    // 0x80277C4C: bne         $at, $zero, L_80277C94
    if (ctx->r1 != 0) {
        // 0x80277C50: nop
    
            goto L_80277C94;
    }
    // 0x80277C50: nop

    // 0x80277C54: lwc1        $f14, 0x0($v1)
    ctx->f14.u32l = MEM_W(ctx->r3, 0X0);
    // 0x80277C58: lwc1        $f12, 0x44($s0)
    ctx->f12.u32l = MEM_W(ctx->r16, 0X44);
    // 0x80277C5C: sub.s       $f0, $f22, $f14
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f22.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f0.fl = ctx->f22.fl - ctx->f14.fl;
    // 0x80277C60: sub.s       $f2, $f22, $f12
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f22.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f2.fl = ctx->f22.fl - ctx->f12.fl;
    // 0x80277C64: mul.s       $f8, $f0, $f2
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f8.fl = MUL_S(ctx->f0.fl, ctx->f2.fl);
    // 0x80277C68: c.lt.s      $f8, $f24
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 24);
    c1cs = ctx->f8.fl < ctx->f24.fl;
    // 0x80277C6C: nop

    // 0x80277C70: bc1t        L_80277DA4
    if (c1cs) {
        // 0x80277C74: sll         $t8, $s2, 2
        ctx->r24 = S32(ctx->r18 << 2);
            goto L_80277DA4;
    }
    // 0x80277C74: sll         $t8, $s2, 2
    ctx->r24 = S32(ctx->r18 << 2);
    // 0x80277C78: sub.s       $f0, $f26, $f14
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 26);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f26.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f0.fl = ctx->f26.fl - ctx->f14.fl;
    // 0x80277C7C: sub.s       $f2, $f26, $f12
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 26);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f26.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f2.fl = ctx->f26.fl - ctx->f12.fl;
    // 0x80277C80: mul.s       $f10, $f0, $f2
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f10.fl = MUL_S(ctx->f0.fl, ctx->f2.fl);
    // 0x80277C84: c.lt.s      $f10, $f24
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 24);
    c1cs = ctx->f10.fl < ctx->f24.fl;
    // 0x80277C88: nop

    // 0x80277C8C: bc1t        L_80277DA4
    if (c1cs) {
        // 0x80277C90: sll         $t8, $s2, 2
        ctx->r24 = S32(ctx->r18 << 2);
            goto L_80277DA4;
    }
    // 0x80277C90: sll         $t8, $s2, 2
    ctx->r24 = S32(ctx->r18 << 2);
L_80277C94:
    // 0x80277C94: jal         0x802777E4
    // 0x80277C98: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_8024B800_func_802777E4(rdram, ctx);
        goto after_3;
    // 0x80277C98: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_3:
    // 0x80277C9C: lw          $v1, 0x0($s3)
    ctx->r3 = MEM_W(ctx->r19, 0X0);
    // 0x80277CA0: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x80277CA4: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x80277CA8: lwc1        $f18, 0x4($v1)
    ctx->f18.u32l = MEM_W(ctx->r3, 0X4);
    // 0x80277CAC: mov.s       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.fl = ctx->f0.fl;
    // 0x80277CB0: c.lt.s      $f16, $f18
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f16.fl < ctx->f18.fl;
    // 0x80277CB4: nop

    // 0x80277CB8: bc1f        L_80277D78
    if (!c1cs) {
        // 0x80277CBC: nop
    
            goto L_80277D78;
    }
    // 0x80277CBC: nop

    // 0x80277CC0: lhu         $t3, 0x6A($v1)
    ctx->r11 = MEM_HU(ctx->r3, 0X6A);
    // 0x80277CC4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80277CC8: slti        $at, $t3, 0xB
    ctx->r1 = SIGNED(ctx->r11) < 0XB ? 1 : 0;
    // 0x80277CCC: bne         $at, $zero, L_80277D78
    if (ctx->r1 != 0) {
        // 0x80277CD0: nop
    
            goto L_80277D78;
    }
    // 0x80277CD0: nop

    // 0x80277CD4: jal         0x80277ED0
    // 0x80277CD8: lui         $a1, 0x40C0
    ctx->r5 = S32(0X40C0 << 16);
    ovl_8024B800_func_80277ED0(rdram, ctx);
        goto after_4;
    // 0x80277CD8: lui         $a1, 0x40C0
    ctx->r5 = S32(0X40C0 << 16);
    after_4:
    // 0x80277CDC: beq         $v0, $zero, L_80277DA4
    if (ctx->r2 == 0) {
        // 0x80277CE0: sll         $t8, $s2, 2
        ctx->r24 = S32(ctx->r18 << 2);
            goto L_80277DA4;
    }
    // 0x80277CE0: sll         $t8, $s2, 2
    ctx->r24 = S32(ctx->r18 << 2);
    // 0x80277CE4: sw          $s0, 0x4($s1)
    MEM_W(0X4, ctx->r17) = ctx->r16;
    // 0x80277CE8: lwc1        $f12, 0x8C($s0)
    ctx->f12.u32l = MEM_W(ctx->r16, 0X8C);
    // 0x80277CEC: jal         0x80081040
    // 0x80277CF0: nop

    func_80081040(rdram, ctx);
        goto after_5;
    // 0x80277CF0: nop

    after_5:
    // 0x80277CF4: mul.s       $f4, $f0, $f28
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 28);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f28.fl); 
    ctx->f4.fl = MUL_S(ctx->f0.fl, ctx->f28.fl);
    // 0x80277CF8: lwc1        $f6, 0x4C($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X4C);
    // 0x80277CFC: nop

    // 0x80277D00: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x80277D04: cfc1        $t4, $FpcCsr
    ctx->r12 = get_cop1_cs();
    // 0x80277D08: nop

    // 0x80277D0C: ori         $at, $t4, 0x3
    ctx->r1 = ctx->r12 | 0X3;
    // 0x80277D10: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x80277D14: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x80277D18: nop

    // 0x80277D1C: cvt.w.s     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.u32l = CVT_W_S(ctx->f8.fl);
    // 0x80277D20: mfc1        $t5, $f10
    ctx->r13 = (int32_t)ctx->f10.u32l;
    // 0x80277D24: ctc1        $t4, $FpcCsr
    set_cop1_cs(ctx->r12);
    // 0x80277D28: sh          $t5, 0x2($s1)
    MEM_H(0X2, ctx->r17) = ctx->r13;
    // 0x80277D2C: lwc1        $f12, 0x8C($s0)
    ctx->f12.u32l = MEM_W(ctx->r16, 0X8C);
    // 0x80277D30: jal         0x80080E80
    // 0x80277D34: nop

    func_80080E80(rdram, ctx);
        goto after_6;
    // 0x80277D34: nop

    after_6:
    // 0x80277D38: mul.s       $f16, $f0, $f28
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 28);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f28.fl); 
    ctx->f16.fl = MUL_S(ctx->f0.fl, ctx->f28.fl);
    // 0x80277D3C: lwc1        $f18, 0x44($s0)
    ctx->f18.u32l = MEM_W(ctx->r16, 0X44);
    // 0x80277D40: addiu       $s1, $s1, 0x8
    ctx->r17 = ADD32(ctx->r17, 0X8);
    // 0x80277D44: sw          $zero, 0x4($s1)
    MEM_W(0X4, ctx->r17) = 0;
    // 0x80277D48: add.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f16.fl + ctx->f18.fl;
    // 0x80277D4C: cfc1        $t6, $FpcCsr
    ctx->r14 = get_cop1_cs();
    // 0x80277D50: nop

    // 0x80277D54: ori         $at, $t6, 0x3
    ctx->r1 = ctx->r14 | 0X3;
    // 0x80277D58: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x80277D5C: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x80277D60: nop

    // 0x80277D64: cvt.w.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = CVT_W_S(ctx->f4.fl);
    // 0x80277D68: mfc1        $t7, $f6
    ctx->r15 = (int32_t)ctx->f6.u32l;
    // 0x80277D6C: ctc1        $t6, $FpcCsr
    set_cop1_cs(ctx->r14);
    // 0x80277D70: b           L_80277DA0
    // 0x80277D74: sh          $t7, -0x8($s1)
    MEM_H(-0X8, ctx->r17) = ctx->r15;
        goto L_80277DA0;
    // 0x80277D74: sh          $t7, -0x8($s1)
    MEM_H(-0X8, ctx->r17) = ctx->r15;
L_80277D78:
    // 0x80277D78: lwc1        $f12, 0x4C($s0)
    ctx->f12.u32l = MEM_W(ctx->r16, 0X4C);
    // 0x80277D7C: lwc1        $f14, 0x44($s0)
    ctx->f14.u32l = MEM_W(ctx->r16, 0X44);
    // 0x80277D80: mfc1        $a2, $f2
    ctx->r6 = (int32_t)ctx->f2.u32l;
    // 0x80277D84: jal         0x80278144
    // 0x80277D88: or          $a3, $s1, $zero
    ctx->r7 = ctx->r17 | 0;
    ovl_8024B800_func_80278144(rdram, ctx);
        goto after_7;
    // 0x80277D88: or          $a3, $s1, $zero
    ctx->r7 = ctx->r17 | 0;
    after_7:
    // 0x80277D8C: beq         $v0, $zero, L_80277DA4
    if (ctx->r2 == 0) {
        // 0x80277D90: sll         $t8, $s2, 2
        ctx->r24 = S32(ctx->r18 << 2);
            goto L_80277DA4;
    }
    // 0x80277D90: sll         $t8, $s2, 2
    ctx->r24 = S32(ctx->r18 << 2);
    // 0x80277D94: sw          $s0, 0x4($s1)
    MEM_W(0X4, ctx->r17) = ctx->r16;
    // 0x80277D98: addiu       $s1, $s1, 0x8
    ctx->r17 = ADD32(ctx->r17, 0X8);
    // 0x80277D9C: sw          $zero, 0x4($s1)
    MEM_W(0X4, ctx->r17) = 0;
L_80277DA0:
    // 0x80277DA0: sll         $t8, $s2, 2
    ctx->r24 = S32(ctx->r18 << 2);
L_80277DA4:
    // 0x80277DA4: lui         $s0, 0x8012
    ctx->r16 = S32(0X8012 << 16);
    // 0x80277DA8: addu        $s0, $s0, $t8
    ctx->r16 = ADD32(ctx->r16, ctx->r24);
    // 0x80277DAC: lw          $s0, 0xA78($s0)
    ctx->r16 = MEM_W(ctx->r16, 0XA78);
    // 0x80277DB0: nop

    // 0x80277DB4: bne         $s0, $zero, L_80277B80
    if (ctx->r16 != 0) {
        // 0x80277DB8: nop
    
            goto L_80277B80;
    }
    // 0x80277DB8: nop

    // 0x80277DBC: jal         0x80276C1C
    // 0x80277DC0: addiu       $a0, $sp, 0x60
    ctx->r4 = ADD32(ctx->r29, 0X60);
    ovl_8024B800_func_80276C1C(rdram, ctx);
        goto after_8;
    // 0x80277DC0: addiu       $a0, $sp, 0x60
    ctx->r4 = ADD32(ctx->r29, 0X60);
    after_8:
    // 0x80277DC4: bltz        $v0, L_80277E88
    if (SIGNED(ctx->r2) < 0) {
        // 0x80277DC8: or          $s0, $zero, $zero
        ctx->r16 = 0 | 0;
            goto L_80277E88;
    }
    // 0x80277DC8: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x80277DCC: sll         $t9, $v0, 16
    ctx->r25 = S32(ctx->r2 << 16);
    // 0x80277DD0: sra         $t0, $t9, 16
    ctx->r8 = S32(SIGNED(ctx->r25) >> 16);
    // 0x80277DD4: sll         $t1, $t0, 3
    ctx->r9 = S32(ctx->r8 << 3);
    // 0x80277DD8: addiu       $t2, $sp, 0x60
    ctx->r10 = ADD32(ctx->r29, 0X60);
    // 0x80277DDC: addu        $v1, $t1, $t2
    ctx->r3 = ADD32(ctx->r9, ctx->r10);
    // 0x80277DE0: lh          $t3, 0x2($v1)
    ctx->r11 = MEM_H(ctx->r3, 0X2);
    // 0x80277DE4: lw          $t4, 0x0($s3)
    ctx->r12 = MEM_W(ctx->r19, 0X0);
    // 0x80277DE8: mtc1        $t3, $f8
    ctx->f8.u32l = ctx->r11;
    // 0x80277DEC: lw          $s0, 0x4($v1)
    ctx->r16 = MEM_W(ctx->r3, 0X4);
    // 0x80277DF0: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x80277DF4: addiu       $at, $zero, 0x43
    ctx->r1 = ADD32(0, 0X43);
    // 0x80277DF8: swc1        $f10, 0x8($t4)
    MEM_W(0X8, ctx->r12) = ctx->f10.u32l;
    // 0x80277DFC: lh          $t5, 0x0($v1)
    ctx->r13 = MEM_H(ctx->r3, 0X0);
    // 0x80277E00: lw          $t6, 0x0($s3)
    ctx->r14 = MEM_W(ctx->r19, 0X0);
    // 0x80277E04: mtc1        $t5, $f16
    ctx->f16.u32l = ctx->r13;
    // 0x80277E08: nop

    // 0x80277E0C: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x80277E10: swc1        $f18, 0x0($t6)
    MEM_W(0X0, ctx->r14) = ctx->f18.u32l;
    // 0x80277E14: lhu         $t7, 0xE($s0)
    ctx->r15 = MEM_HU(ctx->r16, 0XE);
    // 0x80277E18: nop

    // 0x80277E1C: bne         $t7, $at, L_80277E8C
    if (ctx->r15 != ctx->r1) {
        // 0x80277E20: or          $v0, $s0, $zero
        ctx->r2 = ctx->r16 | 0;
            goto L_80277E8C;
    }
    // 0x80277E20: or          $v0, $s0, $zero
    ctx->r2 = ctx->r16 | 0;
    // 0x80277E24: lw          $v1, 0x0($s3)
    ctx->r3 = MEM_W(ctx->r19, 0X0);
    // 0x80277E28: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80277E2C: lw          $a1, 0x4C($v1)
    ctx->r5 = MEM_W(ctx->r3, 0X4C);
    // 0x80277E30: lw          $a2, 0x44($v1)
    ctx->r6 = MEM_W(ctx->r3, 0X44);
    // 0x80277E34: jal         0x80272B98
    // 0x80277E38: addiu       $a3, $sp, 0x128
    ctx->r7 = ADD32(ctx->r29, 0X128);
    ovl_8024B800_func_80272B98(rdram, ctx);
        goto after_9;
    // 0x80277E38: addiu       $a3, $sp, 0x128
    ctx->r7 = ADD32(ctx->r29, 0X128);
    after_9:
    // 0x80277E3C: lwc1        $f4, 0x12C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X12C);
    // 0x80277E40: lui         $at, 0x4014
    ctx->r1 = S32(0X4014 << 16);
    // 0x80277E44: mtc1        $at, $f9
    ctx->f_odd[(9 - 1) * 2] = ctx->r1;
    // 0x80277E48: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x80277E4C: cvt.d.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.d = CVT_D_S(ctx->f4.fl);
    // 0x80277E50: c.lt.d      $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f6.d < ctx->f8.d;
    // 0x80277E54: nop

    // 0x80277E58: bc1f        L_80277E8C
    if (!c1cs) {
        // 0x80277E5C: or          $v0, $s0, $zero
        ctx->r2 = ctx->r16 | 0;
            goto L_80277E8C;
    }
    // 0x80277E5C: or          $v0, $s0, $zero
    ctx->r2 = ctx->r16 | 0;
    // 0x80277E60: lw          $v1, 0x0($s3)
    ctx->r3 = MEM_W(ctx->r19, 0X0);
    // 0x80277E64: nop

    // 0x80277E68: lwc1        $f10, 0x4C($v1)
    ctx->f10.u32l = MEM_W(ctx->r3, 0X4C);
    // 0x80277E6C: nop

    // 0x80277E70: swc1        $f10, 0x8($v1)
    MEM_W(0X8, ctx->r3) = ctx->f10.u32l;
    // 0x80277E74: lw          $v1, 0x0($s3)
    ctx->r3 = MEM_W(ctx->r19, 0X0);
    // 0x80277E78: nop

    // 0x80277E7C: lwc1        $f16, 0x44($v1)
    ctx->f16.u32l = MEM_W(ctx->r3, 0X44);
    // 0x80277E80: nop

    // 0x80277E84: swc1        $f16, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->f16.u32l;
L_80277E88:
    // 0x80277E88: or          $v0, $s0, $zero
    ctx->r2 = ctx->r16 | 0;
L_80277E8C:
    // 0x80277E8C: lw          $ra, 0x4C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X4C);
    // 0x80277E90: lwc1        $f21, 0x10($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X10);
    // 0x80277E94: lwc1        $f20, 0x14($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X14);
    // 0x80277E98: lwc1        $f23, 0x18($sp)
    ctx->f_odd[(23 - 1) * 2] = MEM_W(ctx->r29, 0X18);
    // 0x80277E9C: lwc1        $f22, 0x1C($sp)
    ctx->f22.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x80277EA0: lwc1        $f25, 0x20($sp)
    ctx->f_odd[(25 - 1) * 2] = MEM_W(ctx->r29, 0X20);
    // 0x80277EA4: lwc1        $f24, 0x24($sp)
    ctx->f24.u32l = MEM_W(ctx->r29, 0X24);
    // 0x80277EA8: lwc1        $f27, 0x28($sp)
    ctx->f_odd[(27 - 1) * 2] = MEM_W(ctx->r29, 0X28);
    // 0x80277EAC: lwc1        $f26, 0x2C($sp)
    ctx->f26.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x80277EB0: lwc1        $f29, 0x30($sp)
    ctx->f_odd[(29 - 1) * 2] = MEM_W(ctx->r29, 0X30);
    // 0x80277EB4: lwc1        $f28, 0x34($sp)
    ctx->f28.u32l = MEM_W(ctx->r29, 0X34);
    // 0x80277EB8: lw          $s0, 0x3C($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X3C);
    // 0x80277EBC: lw          $s1, 0x40($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X40);
    // 0x80277EC0: lw          $s2, 0x44($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X44);
    // 0x80277EC4: lw          $s3, 0x48($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X48);
    // 0x80277EC8: jr          $ra
    // 0x80277ECC: addiu       $sp, $sp, 0x140
    ctx->r29 = ADD32(ctx->r29, 0X140);
    return;
    // 0x80277ECC: addiu       $sp, $sp, 0x140
    ctx->r29 = ADD32(ctx->r29, 0X140);
;}
RECOMP_FUNC void ovl_8024B800_func_80277BB0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
L_80277B80:
    // 0x80277BB0: nop

    // 0x80277BB4: jal         0x802775D4
    // 0x80277BB8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_8024B800_func_802775D4(rdram, ctx);
        goto after_0;
    // 0x80277BB8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_0:
    // 0x80277BBC: lwc1        $f0, 0x84($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X84);
    // 0x80277BC0: nop

    // 0x80277BC4: c.lt.s      $f0, $f20
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    c1cs = ctx->f0.fl < ctx->f20.fl;
    // 0x80277BC8: lui         $at, 0x4170
    ctx->r1 = S32(0X4170 << 16);
    // 0x80277BCC: bc1f        L_80277DA4
    if (!c1cs) {
        // 0x80277BD0: sll         $t8, $s2, 2
        ctx->r24 = S32(ctx->r18 << 2);
            goto L_80277DA4;
    }
    // 0x80277BD0: sll         $t8, $s2, 2
    ctx->r24 = S32(ctx->r18 << 2);
    // 0x80277BD4: lhu         $t9, 0x1A($s0)
    ctx->r25 = MEM_HU(ctx->r16, 0X1A);
    // 0x80277BD8: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x80277BDC: bne         $t9, $zero, L_80277C04
    if (ctx->r25 != 0) {
        // 0x80277BE0: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80277C04;
    }
    // 0x80277BE0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80277BE4: lw          $a1, 0x4C($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X4C);
    // 0x80277BE8: lw          $a2, 0x44($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X44);
    // 0x80277BEC: jal         0x80272058
    // 0x80277BF0: swc1        $f0, 0x118($sp)
    MEM_W(0X118, ctx->r29) = ctx->f0.u32l;
    ovl_8024B800_func_80272058(rdram, ctx);
        goto after_1;
    // 0x80277BF0: swc1        $f0, 0x118($sp)
    MEM_W(0X118, ctx->r29) = ctx->f0.u32l;
    after_1:
    // 0x80277BF4: lwc1        $f0, 0x118($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X118);
    // 0x80277BF8: bne         $v0, $zero, L_80277C04
    if (ctx->r2 != 0) {
        // 0x80277BFC: nop
    
            goto L_80277C04;
    }
    // 0x80277BFC: nop

    // 0x80277C00: mov.s       $f0, $f20
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    ctx->f0.fl = ctx->f20.fl;
L_80277C04:
    // 0x80277C04: lwc1        $f14, 0x48($s0)
    ctx->f14.u32l = MEM_W(ctx->r16, 0X48);
    // 0x80277C08: jal         0x8027809C
    // 0x80277C0C: add.s       $f12, $f14, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f12.fl = ctx->f14.fl + ctx->f0.fl;
    ovl_8024B800_func_8027809C(rdram, ctx);
        goto after_2;
    // 0x80277C0C: add.s       $f12, $f14, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f12.fl = ctx->f14.fl + ctx->f0.fl;
    after_2:
    // 0x80277C10: beq         $v0, $zero, L_80277DA4
    if (ctx->r2 == 0) {
        // 0x80277C14: sll         $t8, $s2, 2
        ctx->r24 = S32(ctx->r18 << 2);
            goto L_80277DA4;
    }
    // 0x80277C14: sll         $t8, $s2, 2
    ctx->r24 = S32(ctx->r18 << 2);
    // 0x80277C18: lw          $v1, 0x0($s3)
    ctx->r3 = MEM_W(ctx->r19, 0X0);
    // 0x80277C1C: lw          $t2, 0x124($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X124);
    // 0x80277C20: lw          $v0, 0x88($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X88);
    // 0x80277C24: slti        $at, $t2, 0x1F9
    ctx->r1 = SIGNED(ctx->r10) < 0X1F9 ? 1 : 0;
    // 0x80277C28: beq         $v0, $zero, L_80277C4C
    if (ctx->r2 == 0) {
        // 0x80277C2C: nop
    
            goto L_80277C4C;
    }
    // 0x80277C2C: nop

    // 0x80277C30: beq         $s0, $v0, L_80277C4C
    if (ctx->r16 == ctx->r2) {
        // 0x80277C34: nop
    
            goto L_80277C4C;
    }
    // 0x80277C34: nop

    // 0x80277C38: lw          $t0, 0xC8($v0)
    ctx->r8 = MEM_W(ctx->r2, 0XC8);
    // 0x80277C3C: lw          $t1, 0xC8($s0)
    ctx->r9 = MEM_W(ctx->r16, 0XC8);
    // 0x80277C40: nop

    // 0x80277C44: beq         $t0, $t1, L_80277DA4
    if (ctx->r8 == ctx->r9) {
        // 0x80277C48: sll         $t8, $s2, 2
        ctx->r24 = S32(ctx->r18 << 2);
            goto L_80277DA4;
    }
    // 0x80277C48: sll         $t8, $s2, 2
    ctx->r24 = S32(ctx->r18 << 2);
L_80277C4C:
    // 0x80277C4C: bne         $at, $zero, L_80277C94
    if (ctx->r1 != 0) {
        // 0x80277C50: nop
    
            goto L_80277C94;
    }
    // 0x80277C50: nop

    // 0x80277C54: lwc1        $f14, 0x0($v1)
    ctx->f14.u32l = MEM_W(ctx->r3, 0X0);
    // 0x80277C58: lwc1        $f12, 0x44($s0)
    ctx->f12.u32l = MEM_W(ctx->r16, 0X44);
    // 0x80277C5C: sub.s       $f0, $f22, $f14
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f22.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f0.fl = ctx->f22.fl - ctx->f14.fl;
    // 0x80277C60: sub.s       $f2, $f22, $f12
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f22.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f2.fl = ctx->f22.fl - ctx->f12.fl;
    // 0x80277C64: mul.s       $f8, $f0, $f2
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f8.fl = MUL_S(ctx->f0.fl, ctx->f2.fl);
    // 0x80277C68: c.lt.s      $f8, $f24
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 24);
    c1cs = ctx->f8.fl < ctx->f24.fl;
    // 0x80277C6C: nop

    // 0x80277C70: bc1t        L_80277DA4
    if (c1cs) {
        // 0x80277C74: sll         $t8, $s2, 2
        ctx->r24 = S32(ctx->r18 << 2);
            goto L_80277DA4;
    }
    // 0x80277C74: sll         $t8, $s2, 2
    ctx->r24 = S32(ctx->r18 << 2);
    // 0x80277C78: sub.s       $f0, $f26, $f14
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 26);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f26.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f0.fl = ctx->f26.fl - ctx->f14.fl;
    // 0x80277C7C: sub.s       $f2, $f26, $f12
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 26);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f26.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f2.fl = ctx->f26.fl - ctx->f12.fl;
    // 0x80277C80: mul.s       $f10, $f0, $f2
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f10.fl = MUL_S(ctx->f0.fl, ctx->f2.fl);
    // 0x80277C84: c.lt.s      $f10, $f24
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 24);
    c1cs = ctx->f10.fl < ctx->f24.fl;
    // 0x80277C88: nop

    // 0x80277C8C: bc1t        L_80277DA4
    if (c1cs) {
        // 0x80277C90: sll         $t8, $s2, 2
        ctx->r24 = S32(ctx->r18 << 2);
            goto L_80277DA4;
    }
    // 0x80277C90: sll         $t8, $s2, 2
    ctx->r24 = S32(ctx->r18 << 2);
L_80277C94:
    // 0x80277C94: jal         0x802777E4
    // 0x80277C98: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_8024B800_func_802777E4(rdram, ctx);
        goto after_3;
    // 0x80277C98: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_3:
    // 0x80277C9C: lw          $v1, 0x0($s3)
    ctx->r3 = MEM_W(ctx->r19, 0X0);
    // 0x80277CA0: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x80277CA4: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x80277CA8: lwc1        $f18, 0x4($v1)
    ctx->f18.u32l = MEM_W(ctx->r3, 0X4);
    // 0x80277CAC: mov.s       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.fl = ctx->f0.fl;
    // 0x80277CB0: c.lt.s      $f16, $f18
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f16.fl < ctx->f18.fl;
    // 0x80277CB4: nop

    // 0x80277CB8: bc1f        L_80277D78
    if (!c1cs) {
        // 0x80277CBC: nop
    
            goto L_80277D78;
    }
    // 0x80277CBC: nop

    // 0x80277CC0: lhu         $t3, 0x6A($v1)
    ctx->r11 = MEM_HU(ctx->r3, 0X6A);
    // 0x80277CC4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80277CC8: slti        $at, $t3, 0xB
    ctx->r1 = SIGNED(ctx->r11) < 0XB ? 1 : 0;
    // 0x80277CCC: bne         $at, $zero, L_80277D78
    if (ctx->r1 != 0) {
        // 0x80277CD0: nop
    
            goto L_80277D78;
    }
    // 0x80277CD0: nop

    // 0x80277CD4: jal         0x80277ED0
    // 0x80277CD8: lui         $a1, 0x40C0
    ctx->r5 = S32(0X40C0 << 16);
    ovl_8024B800_func_80277ED0(rdram, ctx);
        goto after_4;
    // 0x80277CD8: lui         $a1, 0x40C0
    ctx->r5 = S32(0X40C0 << 16);
    after_4:
    // 0x80277CDC: beq         $v0, $zero, L_80277DA4
    if (ctx->r2 == 0) {
        // 0x80277CE0: sll         $t8, $s2, 2
        ctx->r24 = S32(ctx->r18 << 2);
            goto L_80277DA4;
    }
    // 0x80277CE0: sll         $t8, $s2, 2
    ctx->r24 = S32(ctx->r18 << 2);
    // 0x80277CE4: sw          $s0, 0x4($s1)
    MEM_W(0X4, ctx->r17) = ctx->r16;
    // 0x80277CE8: lwc1        $f12, 0x8C($s0)
    ctx->f12.u32l = MEM_W(ctx->r16, 0X8C);
    // 0x80277CEC: jal         0x80081040
    // 0x80277CF0: nop

    func_80081040(rdram, ctx);
        goto after_5;
    // 0x80277CF0: nop

    after_5:
    // 0x80277CF4: mul.s       $f4, $f0, $f28
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 28);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f28.fl); 
    ctx->f4.fl = MUL_S(ctx->f0.fl, ctx->f28.fl);
    // 0x80277CF8: lwc1        $f6, 0x4C($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X4C);
    // 0x80277CFC: nop

    // 0x80277D00: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x80277D04: cfc1        $t4, $FpcCsr
    ctx->r12 = get_cop1_cs();
    // 0x80277D08: nop

    // 0x80277D0C: ori         $at, $t4, 0x3
    ctx->r1 = ctx->r12 | 0X3;
    // 0x80277D10: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x80277D14: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x80277D18: nop

    // 0x80277D1C: cvt.w.s     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.u32l = CVT_W_S(ctx->f8.fl);
    // 0x80277D20: mfc1        $t5, $f10
    ctx->r13 = (int32_t)ctx->f10.u32l;
    // 0x80277D24: ctc1        $t4, $FpcCsr
    set_cop1_cs(ctx->r12);
    // 0x80277D28: sh          $t5, 0x2($s1)
    MEM_H(0X2, ctx->r17) = ctx->r13;
    // 0x80277D2C: lwc1        $f12, 0x8C($s0)
    ctx->f12.u32l = MEM_W(ctx->r16, 0X8C);
    // 0x80277D30: jal         0x80080E80
    // 0x80277D34: nop

    func_80080E80(rdram, ctx);
        goto after_6;
    // 0x80277D34: nop

    after_6:
    // 0x80277D38: mul.s       $f16, $f0, $f28
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 28);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f28.fl); 
    ctx->f16.fl = MUL_S(ctx->f0.fl, ctx->f28.fl);
    // 0x80277D3C: lwc1        $f18, 0x44($s0)
    ctx->f18.u32l = MEM_W(ctx->r16, 0X44);
    // 0x80277D40: addiu       $s1, $s1, 0x8
    ctx->r17 = ADD32(ctx->r17, 0X8);
    // 0x80277D44: sw          $zero, 0x4($s1)
    MEM_W(0X4, ctx->r17) = 0;
    // 0x80277D48: add.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f16.fl + ctx->f18.fl;
    // 0x80277D4C: cfc1        $t6, $FpcCsr
    ctx->r14 = get_cop1_cs();
    // 0x80277D50: nop

    // 0x80277D54: ori         $at, $t6, 0x3
    ctx->r1 = ctx->r14 | 0X3;
    // 0x80277D58: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x80277D5C: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x80277D60: nop

    // 0x80277D64: cvt.w.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = CVT_W_S(ctx->f4.fl);
    // 0x80277D68: mfc1        $t7, $f6
    ctx->r15 = (int32_t)ctx->f6.u32l;
    // 0x80277D6C: ctc1        $t6, $FpcCsr
    set_cop1_cs(ctx->r14);
    // 0x80277D70: b           L_80277DA0
    // 0x80277D74: sh          $t7, -0x8($s1)
    MEM_H(-0X8, ctx->r17) = ctx->r15;
        goto L_80277DA0;
    // 0x80277D74: sh          $t7, -0x8($s1)
    MEM_H(-0X8, ctx->r17) = ctx->r15;
L_80277D78:
    // 0x80277D78: lwc1        $f12, 0x4C($s0)
    ctx->f12.u32l = MEM_W(ctx->r16, 0X4C);
    // 0x80277D7C: lwc1        $f14, 0x44($s0)
    ctx->f14.u32l = MEM_W(ctx->r16, 0X44);
    // 0x80277D80: mfc1        $a2, $f2
    ctx->r6 = (int32_t)ctx->f2.u32l;
    // 0x80277D84: jal         0x80278144
    // 0x80277D88: or          $a3, $s1, $zero
    ctx->r7 = ctx->r17 | 0;
    ovl_8024B800_func_80278144(rdram, ctx);
        goto after_7;
    // 0x80277D88: or          $a3, $s1, $zero
    ctx->r7 = ctx->r17 | 0;
    after_7:
    // 0x80277D8C: beq         $v0, $zero, L_80277DA4
    if (ctx->r2 == 0) {
        // 0x80277D90: sll         $t8, $s2, 2
        ctx->r24 = S32(ctx->r18 << 2);
            goto L_80277DA4;
    }
    // 0x80277D90: sll         $t8, $s2, 2
    ctx->r24 = S32(ctx->r18 << 2);
    // 0x80277D94: sw          $s0, 0x4($s1)
    MEM_W(0X4, ctx->r17) = ctx->r16;
    // 0x80277D98: addiu       $s1, $s1, 0x8
    ctx->r17 = ADD32(ctx->r17, 0X8);
    // 0x80277D9C: sw          $zero, 0x4($s1)
    MEM_W(0X4, ctx->r17) = 0;
L_80277DA0:
    // 0x80277DA0: sll         $t8, $s2, 2
    ctx->r24 = S32(ctx->r18 << 2);
L_80277DA4:
    // 0x80277DA4: lui         $s0, 0x8012
    ctx->r16 = S32(0X8012 << 16);
    // 0x80277DA8: addu        $s0, $s0, $t8
    ctx->r16 = ADD32(ctx->r16, ctx->r24);
    // 0x80277DAC: lw          $s0, 0xA78($s0)
    ctx->r16 = MEM_W(ctx->r16, 0XA78);
    // 0x80277DB0: nop

    // 0x80277DB4: bne         $s0, $zero, L_80277B80
    if (ctx->r16 != 0) {
            // 0x80277DB8: nop

    ovl_8024B800_func_80277B80(rdram, ctx);
    return;
    }
    // 0x80277DB8: nop

    // 0x80277DBC: jal         0x80276C1C
    // 0x80277DC0: addiu       $a0, $sp, 0x60
    ctx->r4 = ADD32(ctx->r29, 0X60);
    ovl_8024B800_func_80276C1C(rdram, ctx);
        goto after_8;
    // 0x80277DC0: addiu       $a0, $sp, 0x60
    ctx->r4 = ADD32(ctx->r29, 0X60);
    after_8:
    // 0x80277DC4: bltz        $v0, L_80277E88
    if (SIGNED(ctx->r2) < 0) {
        // 0x80277DC8: or          $s0, $zero, $zero
        ctx->r16 = 0 | 0;
            goto L_80277E88;
    }
    // 0x80277DC8: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x80277DCC: sll         $t9, $v0, 16
    ctx->r25 = S32(ctx->r2 << 16);
    // 0x80277DD0: sra         $t0, $t9, 16
    ctx->r8 = S32(SIGNED(ctx->r25) >> 16);
    // 0x80277DD4: sll         $t1, $t0, 3
    ctx->r9 = S32(ctx->r8 << 3);
    // 0x80277DD8: addiu       $t2, $sp, 0x60
    ctx->r10 = ADD32(ctx->r29, 0X60);
    // 0x80277DDC: addu        $v1, $t1, $t2
    ctx->r3 = ADD32(ctx->r9, ctx->r10);
    // 0x80277DE0: lh          $t3, 0x2($v1)
    ctx->r11 = MEM_H(ctx->r3, 0X2);
    // 0x80277DE4: lw          $t4, 0x0($s3)
    ctx->r12 = MEM_W(ctx->r19, 0X0);
    // 0x80277DE8: mtc1        $t3, $f8
    ctx->f8.u32l = ctx->r11;
    // 0x80277DEC: lw          $s0, 0x4($v1)
    ctx->r16 = MEM_W(ctx->r3, 0X4);
    // 0x80277DF0: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x80277DF4: addiu       $at, $zero, 0x43
    ctx->r1 = ADD32(0, 0X43);
    // 0x80277DF8: swc1        $f10, 0x8($t4)
    MEM_W(0X8, ctx->r12) = ctx->f10.u32l;
    // 0x80277DFC: lh          $t5, 0x0($v1)
    ctx->r13 = MEM_H(ctx->r3, 0X0);
    // 0x80277E00: lw          $t6, 0x0($s3)
    ctx->r14 = MEM_W(ctx->r19, 0X0);
    // 0x80277E04: mtc1        $t5, $f16
    ctx->f16.u32l = ctx->r13;
    // 0x80277E08: nop

    // 0x80277E0C: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x80277E10: swc1        $f18, 0x0($t6)
    MEM_W(0X0, ctx->r14) = ctx->f18.u32l;
    // 0x80277E14: lhu         $t7, 0xE($s0)
    ctx->r15 = MEM_HU(ctx->r16, 0XE);
    // 0x80277E18: nop

    // 0x80277E1C: bne         $t7, $at, L_80277E8C
    if (ctx->r15 != ctx->r1) {
        // 0x80277E20: or          $v0, $s0, $zero
        ctx->r2 = ctx->r16 | 0;
            goto L_80277E8C;
    }
    // 0x80277E20: or          $v0, $s0, $zero
    ctx->r2 = ctx->r16 | 0;
    // 0x80277E24: lw          $v1, 0x0($s3)
    ctx->r3 = MEM_W(ctx->r19, 0X0);
    // 0x80277E28: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80277E2C: lw          $a1, 0x4C($v1)
    ctx->r5 = MEM_W(ctx->r3, 0X4C);
    // 0x80277E30: lw          $a2, 0x44($v1)
    ctx->r6 = MEM_W(ctx->r3, 0X44);
    // 0x80277E34: jal         0x80272B98
    // 0x80277E38: addiu       $a3, $sp, 0x128
    ctx->r7 = ADD32(ctx->r29, 0X128);
    ovl_8024B800_func_80272B98(rdram, ctx);
        goto after_9;
    // 0x80277E38: addiu       $a3, $sp, 0x128
    ctx->r7 = ADD32(ctx->r29, 0X128);
    after_9:
    // 0x80277E3C: lwc1        $f4, 0x12C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X12C);
    // 0x80277E40: lui         $at, 0x4014
    ctx->r1 = S32(0X4014 << 16);
    // 0x80277E44: mtc1        $at, $f9
    ctx->f_odd[(9 - 1) * 2] = ctx->r1;
    // 0x80277E48: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x80277E4C: cvt.d.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.d = CVT_D_S(ctx->f4.fl);
    // 0x80277E50: c.lt.d      $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f6.d < ctx->f8.d;
    // 0x80277E54: nop

    // 0x80277E58: bc1f        L_80277E8C
    if (!c1cs) {
        // 0x80277E5C: or          $v0, $s0, $zero
        ctx->r2 = ctx->r16 | 0;
            goto L_80277E8C;
    }
    // 0x80277E5C: or          $v0, $s0, $zero
    ctx->r2 = ctx->r16 | 0;
    // 0x80277E60: lw          $v1, 0x0($s3)
    ctx->r3 = MEM_W(ctx->r19, 0X0);
    // 0x80277E64: nop

    // 0x80277E68: lwc1        $f10, 0x4C($v1)
    ctx->f10.u32l = MEM_W(ctx->r3, 0X4C);
    // 0x80277E6C: nop

    // 0x80277E70: swc1        $f10, 0x8($v1)
    MEM_W(0X8, ctx->r3) = ctx->f10.u32l;
    // 0x80277E74: lw          $v1, 0x0($s3)
    ctx->r3 = MEM_W(ctx->r19, 0X0);
    // 0x80277E78: nop

    // 0x80277E7C: lwc1        $f16, 0x44($v1)
    ctx->f16.u32l = MEM_W(ctx->r3, 0X44);
    // 0x80277E80: nop

    // 0x80277E84: swc1        $f16, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->f16.u32l;
L_80277E88:
    // 0x80277E88: or          $v0, $s0, $zero
    ctx->r2 = ctx->r16 | 0;
L_80277E8C:
    // 0x80277E8C: lw          $ra, 0x4C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X4C);
    // 0x80277E90: lwc1        $f21, 0x10($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X10);
    // 0x80277E94: lwc1        $f20, 0x14($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X14);
    // 0x80277E98: lwc1        $f23, 0x18($sp)
    ctx->f_odd[(23 - 1) * 2] = MEM_W(ctx->r29, 0X18);
    // 0x80277E9C: lwc1        $f22, 0x1C($sp)
    ctx->f22.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x80277EA0: lwc1        $f25, 0x20($sp)
    ctx->f_odd[(25 - 1) * 2] = MEM_W(ctx->r29, 0X20);
    // 0x80277EA4: lwc1        $f24, 0x24($sp)
    ctx->f24.u32l = MEM_W(ctx->r29, 0X24);
    // 0x80277EA8: lwc1        $f27, 0x28($sp)
    ctx->f_odd[(27 - 1) * 2] = MEM_W(ctx->r29, 0X28);
    // 0x80277EAC: lwc1        $f26, 0x2C($sp)
    ctx->f26.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x80277EB0: lwc1        $f29, 0x30($sp)
    ctx->f_odd[(29 - 1) * 2] = MEM_W(ctx->r29, 0X30);
    // 0x80277EB4: lwc1        $f28, 0x34($sp)
    ctx->f28.u32l = MEM_W(ctx->r29, 0X34);
    // 0x80277EB8: lw          $s0, 0x3C($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X3C);
    // 0x80277EBC: lw          $s1, 0x40($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X40);
    // 0x80277EC0: lw          $s2, 0x44($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X44);
    // 0x80277EC4: lw          $s3, 0x48($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X48);
    // 0x80277EC8: jr          $ra
    // 0x80277ECC: addiu       $sp, $sp, 0x140
    ctx->r29 = ADD32(ctx->r29, 0X140);
    return;
    // 0x80277ECC: addiu       $sp, $sp, 0x140
    ctx->r29 = ADD32(ctx->r29, 0X140);
;}
RECOMP_FUNC void ovl_8024B800_func_80277CF0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
L_80277B80:
    // 0x80277CF0: nop

    // 0x80277CF4: mul.s       $f4, $f0, $f28
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 28);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f28.fl); 
    ctx->f4.fl = MUL_S(ctx->f0.fl, ctx->f28.fl);
    // 0x80277CF8: lwc1        $f6, 0x4C($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X4C);
    // 0x80277CFC: nop

    // 0x80277D00: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x80277D04: cfc1        $t4, $FpcCsr
    ctx->r12 = get_cop1_cs();
    // 0x80277D08: nop

    // 0x80277D0C: ori         $at, $t4, 0x3
    ctx->r1 = ctx->r12 | 0X3;
    // 0x80277D10: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x80277D14: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x80277D18: nop

    // 0x80277D1C: cvt.w.s     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.u32l = CVT_W_S(ctx->f8.fl);
    // 0x80277D20: mfc1        $t5, $f10
    ctx->r13 = (int32_t)ctx->f10.u32l;
    // 0x80277D24: ctc1        $t4, $FpcCsr
    set_cop1_cs(ctx->r12);
    // 0x80277D28: sh          $t5, 0x2($s1)
    MEM_H(0X2, ctx->r17) = ctx->r13;
    // 0x80277D2C: lwc1        $f12, 0x8C($s0)
    ctx->f12.u32l = MEM_W(ctx->r16, 0X8C);
    // 0x80277D30: jal         0x80080E80
    // 0x80277D34: nop

    func_80080E80(rdram, ctx);
        goto after_0;
    // 0x80277D34: nop

    after_0:
    // 0x80277D38: mul.s       $f16, $f0, $f28
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 28);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f28.fl); 
    ctx->f16.fl = MUL_S(ctx->f0.fl, ctx->f28.fl);
    // 0x80277D3C: lwc1        $f18, 0x44($s0)
    ctx->f18.u32l = MEM_W(ctx->r16, 0X44);
    // 0x80277D40: addiu       $s1, $s1, 0x8
    ctx->r17 = ADD32(ctx->r17, 0X8);
    // 0x80277D44: sw          $zero, 0x4($s1)
    MEM_W(0X4, ctx->r17) = 0;
    // 0x80277D48: add.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f16.fl + ctx->f18.fl;
    // 0x80277D4C: cfc1        $t6, $FpcCsr
    ctx->r14 = get_cop1_cs();
    // 0x80277D50: nop

    // 0x80277D54: ori         $at, $t6, 0x3
    ctx->r1 = ctx->r14 | 0X3;
    // 0x80277D58: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x80277D5C: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x80277D60: nop

    // 0x80277D64: cvt.w.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = CVT_W_S(ctx->f4.fl);
    // 0x80277D68: mfc1        $t7, $f6
    ctx->r15 = (int32_t)ctx->f6.u32l;
    // 0x80277D6C: ctc1        $t6, $FpcCsr
    set_cop1_cs(ctx->r14);
    // 0x80277D70: b           L_80277DA0
    // 0x80277D74: sh          $t7, -0x8($s1)
    MEM_H(-0X8, ctx->r17) = ctx->r15;
        goto L_80277DA0;
    // 0x80277D74: sh          $t7, -0x8($s1)
    MEM_H(-0X8, ctx->r17) = ctx->r15;
    // 0x80277D78: lwc1        $f12, 0x4C($s0)
    ctx->f12.u32l = MEM_W(ctx->r16, 0X4C);
    // 0x80277D7C: lwc1        $f14, 0x44($s0)
    ctx->f14.u32l = MEM_W(ctx->r16, 0X44);
    // 0x80277D80: mfc1        $a2, $f2
    ctx->r6 = (int32_t)ctx->f2.u32l;
    // 0x80277D84: jal         0x80278144
    // 0x80277D88: or          $a3, $s1, $zero
    ctx->r7 = ctx->r17 | 0;
    ovl_8024B800_func_80278144(rdram, ctx);
        goto after_1;
    // 0x80277D88: or          $a3, $s1, $zero
    ctx->r7 = ctx->r17 | 0;
    after_1:
    // 0x80277D8C: beq         $v0, $zero, L_80277DA4
    if (ctx->r2 == 0) {
        // 0x80277D90: sll         $t8, $s2, 2
        ctx->r24 = S32(ctx->r18 << 2);
            goto L_80277DA4;
    }
    // 0x80277D90: sll         $t8, $s2, 2
    ctx->r24 = S32(ctx->r18 << 2);
    // 0x80277D94: sw          $s0, 0x4($s1)
    MEM_W(0X4, ctx->r17) = ctx->r16;
    // 0x80277D98: addiu       $s1, $s1, 0x8
    ctx->r17 = ADD32(ctx->r17, 0X8);
    // 0x80277D9C: sw          $zero, 0x4($s1)
    MEM_W(0X4, ctx->r17) = 0;
L_80277DA0:
    // 0x80277DA0: sll         $t8, $s2, 2
    ctx->r24 = S32(ctx->r18 << 2);
L_80277DA4:
    // 0x80277DA4: lui         $s0, 0x8012
    ctx->r16 = S32(0X8012 << 16);
    // 0x80277DA8: addu        $s0, $s0, $t8
    ctx->r16 = ADD32(ctx->r16, ctx->r24);
    // 0x80277DAC: lw          $s0, 0xA78($s0)
    ctx->r16 = MEM_W(ctx->r16, 0XA78);
    // 0x80277DB0: nop

    // 0x80277DB4: bne         $s0, $zero, L_80277B80
    if (ctx->r16 != 0) {
            // 0x80277DB8: nop

    ovl_8024B800_func_80277B80(rdram, ctx);
    return;
    }
    // 0x80277DB8: nop

    // 0x80277DBC: jal         0x80276C1C
    // 0x80277DC0: addiu       $a0, $sp, 0x60
    ctx->r4 = ADD32(ctx->r29, 0X60);
    ovl_8024B800_func_80276C1C(rdram, ctx);
        goto after_2;
    // 0x80277DC0: addiu       $a0, $sp, 0x60
    ctx->r4 = ADD32(ctx->r29, 0X60);
    after_2:
    // 0x80277DC4: bltz        $v0, L_80277E88
    if (SIGNED(ctx->r2) < 0) {
        // 0x80277DC8: or          $s0, $zero, $zero
        ctx->r16 = 0 | 0;
            goto L_80277E88;
    }
    // 0x80277DC8: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x80277DCC: sll         $t9, $v0, 16
    ctx->r25 = S32(ctx->r2 << 16);
    // 0x80277DD0: sra         $t0, $t9, 16
    ctx->r8 = S32(SIGNED(ctx->r25) >> 16);
    // 0x80277DD4: sll         $t1, $t0, 3
    ctx->r9 = S32(ctx->r8 << 3);
    // 0x80277DD8: addiu       $t2, $sp, 0x60
    ctx->r10 = ADD32(ctx->r29, 0X60);
    // 0x80277DDC: addu        $v1, $t1, $t2
    ctx->r3 = ADD32(ctx->r9, ctx->r10);
    // 0x80277DE0: lh          $t3, 0x2($v1)
    ctx->r11 = MEM_H(ctx->r3, 0X2);
    // 0x80277DE4: lw          $t4, 0x0($s3)
    ctx->r12 = MEM_W(ctx->r19, 0X0);
    // 0x80277DE8: mtc1        $t3, $f8
    ctx->f8.u32l = ctx->r11;
    // 0x80277DEC: lw          $s0, 0x4($v1)
    ctx->r16 = MEM_W(ctx->r3, 0X4);
    // 0x80277DF0: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x80277DF4: addiu       $at, $zero, 0x43
    ctx->r1 = ADD32(0, 0X43);
    // 0x80277DF8: swc1        $f10, 0x8($t4)
    MEM_W(0X8, ctx->r12) = ctx->f10.u32l;
    // 0x80277DFC: lh          $t5, 0x0($v1)
    ctx->r13 = MEM_H(ctx->r3, 0X0);
    // 0x80277E00: lw          $t6, 0x0($s3)
    ctx->r14 = MEM_W(ctx->r19, 0X0);
    // 0x80277E04: mtc1        $t5, $f16
    ctx->f16.u32l = ctx->r13;
    // 0x80277E08: nop

    // 0x80277E0C: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x80277E10: swc1        $f18, 0x0($t6)
    MEM_W(0X0, ctx->r14) = ctx->f18.u32l;
    // 0x80277E14: lhu         $t7, 0xE($s0)
    ctx->r15 = MEM_HU(ctx->r16, 0XE);
    // 0x80277E18: nop

    // 0x80277E1C: bne         $t7, $at, L_80277E8C
    if (ctx->r15 != ctx->r1) {
        // 0x80277E20: or          $v0, $s0, $zero
        ctx->r2 = ctx->r16 | 0;
            goto L_80277E8C;
    }
    // 0x80277E20: or          $v0, $s0, $zero
    ctx->r2 = ctx->r16 | 0;
    // 0x80277E24: lw          $v1, 0x0($s3)
    ctx->r3 = MEM_W(ctx->r19, 0X0);
    // 0x80277E28: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80277E2C: lw          $a1, 0x4C($v1)
    ctx->r5 = MEM_W(ctx->r3, 0X4C);
    // 0x80277E30: lw          $a2, 0x44($v1)
    ctx->r6 = MEM_W(ctx->r3, 0X44);
    // 0x80277E34: jal         0x80272B98
    // 0x80277E38: addiu       $a3, $sp, 0x128
    ctx->r7 = ADD32(ctx->r29, 0X128);
    ovl_8024B800_func_80272B98(rdram, ctx);
        goto after_3;
    // 0x80277E38: addiu       $a3, $sp, 0x128
    ctx->r7 = ADD32(ctx->r29, 0X128);
    after_3:
    // 0x80277E3C: lwc1        $f4, 0x12C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X12C);
    // 0x80277E40: lui         $at, 0x4014
    ctx->r1 = S32(0X4014 << 16);
    // 0x80277E44: mtc1        $at, $f9
    ctx->f_odd[(9 - 1) * 2] = ctx->r1;
    // 0x80277E48: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x80277E4C: cvt.d.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.d = CVT_D_S(ctx->f4.fl);
    // 0x80277E50: c.lt.d      $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f6.d < ctx->f8.d;
    // 0x80277E54: nop

    // 0x80277E58: bc1f        L_80277E8C
    if (!c1cs) {
        // 0x80277E5C: or          $v0, $s0, $zero
        ctx->r2 = ctx->r16 | 0;
            goto L_80277E8C;
    }
    // 0x80277E5C: or          $v0, $s0, $zero
    ctx->r2 = ctx->r16 | 0;
    // 0x80277E60: lw          $v1, 0x0($s3)
    ctx->r3 = MEM_W(ctx->r19, 0X0);
    // 0x80277E64: nop

    // 0x80277E68: lwc1        $f10, 0x4C($v1)
    ctx->f10.u32l = MEM_W(ctx->r3, 0X4C);
    // 0x80277E6C: nop

    // 0x80277E70: swc1        $f10, 0x8($v1)
    MEM_W(0X8, ctx->r3) = ctx->f10.u32l;
    // 0x80277E74: lw          $v1, 0x0($s3)
    ctx->r3 = MEM_W(ctx->r19, 0X0);
    // 0x80277E78: nop

    // 0x80277E7C: lwc1        $f16, 0x44($v1)
    ctx->f16.u32l = MEM_W(ctx->r3, 0X44);
    // 0x80277E80: nop

    // 0x80277E84: swc1        $f16, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->f16.u32l;
L_80277E88:
    // 0x80277E88: or          $v0, $s0, $zero
    ctx->r2 = ctx->r16 | 0;
L_80277E8C:
    // 0x80277E8C: lw          $ra, 0x4C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X4C);
    // 0x80277E90: lwc1        $f21, 0x10($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X10);
    // 0x80277E94: lwc1        $f20, 0x14($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X14);
    // 0x80277E98: lwc1        $f23, 0x18($sp)
    ctx->f_odd[(23 - 1) * 2] = MEM_W(ctx->r29, 0X18);
    // 0x80277E9C: lwc1        $f22, 0x1C($sp)
    ctx->f22.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x80277EA0: lwc1        $f25, 0x20($sp)
    ctx->f_odd[(25 - 1) * 2] = MEM_W(ctx->r29, 0X20);
    // 0x80277EA4: lwc1        $f24, 0x24($sp)
    ctx->f24.u32l = MEM_W(ctx->r29, 0X24);
    // 0x80277EA8: lwc1        $f27, 0x28($sp)
    ctx->f_odd[(27 - 1) * 2] = MEM_W(ctx->r29, 0X28);
    // 0x80277EAC: lwc1        $f26, 0x2C($sp)
    ctx->f26.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x80277EB0: lwc1        $f29, 0x30($sp)
    ctx->f_odd[(29 - 1) * 2] = MEM_W(ctx->r29, 0X30);
    // 0x80277EB4: lwc1        $f28, 0x34($sp)
    ctx->f28.u32l = MEM_W(ctx->r29, 0X34);
    // 0x80277EB8: lw          $s0, 0x3C($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X3C);
    // 0x80277EBC: lw          $s1, 0x40($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X40);
    // 0x80277EC0: lw          $s2, 0x44($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X44);
    // 0x80277EC4: lw          $s3, 0x48($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X48);
    // 0x80277EC8: jr          $ra
    // 0x80277ECC: addiu       $sp, $sp, 0x140
    ctx->r29 = ADD32(ctx->r29, 0X140);
    return;
    // 0x80277ECC: addiu       $sp, $sp, 0x140
    ctx->r29 = ADD32(ctx->r29, 0X140);
;}
RECOMP_FUNC void ovl_8024B800_func_80277ED0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80277ED0: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x80277ED4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80277ED8: sw          $a1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r5;
    // 0x80277EDC: lui         $v0, 0x8009
    ctx->r2 = S32(0X8009 << 16);
    // 0x80277EE0: lw          $v0, 0x3B20($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X3B20);
    // 0x80277EE4: lwc1        $f2, 0x4C($a0)
    ctx->f2.u32l = MEM_W(ctx->r4, 0X4C);
    // 0x80277EE8: lwc1        $f4, 0x4C($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X4C);
    // 0x80277EEC: lwc1        $f16, 0x44($a0)
    ctx->f16.u32l = MEM_W(ctx->r4, 0X44);
    // 0x80277EF0: lwc1        $f6, 0x44($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0X44);
    // 0x80277EF4: lwc1        $f8, 0x8($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X8);
    // 0x80277EF8: sub.s       $f0, $f2, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f0.fl = ctx->f2.fl - ctx->f4.fl;
    // 0x80277EFC: sub.s       $f14, $f16, $f6
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f14.fl = ctx->f16.fl - ctx->f6.fl;
    // 0x80277F00: mul.s       $f6, $f0, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = MUL_S(ctx->f0.fl, ctx->f0.fl);
    // 0x80277F04: sub.s       $f10, $f2, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f2.fl - ctx->f8.fl;
    // 0x80277F08: swc1        $f10, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f10.u32l;
    // 0x80277F0C: mul.s       $f8, $f14, $f14
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f8.fl = MUL_S(ctx->f14.fl, ctx->f14.fl);
    // 0x80277F10: lwc1        $f18, 0x0($v0)
    ctx->f18.u32l = MEM_W(ctx->r2, 0X0);
    // 0x80277F14: sw          $a0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r4;
    // 0x80277F18: sub.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f16.fl - ctx->f18.fl;
    // 0x80277F1C: swc1        $f4, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f4.u32l;
    // 0x80277F20: jal         0x8007FA40
    // 0x80277F24: add.s       $f12, $f6, $f8
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f12.fl = ctx->f6.fl + ctx->f8.fl;
    func_8007FA40(rdram, ctx);
        goto after_0;
    // 0x80277F24: add.s       $f12, $f6, $f8
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f12.fl = ctx->f6.fl + ctx->f8.fl;
    after_0:
    // 0x80277F28: lwc1        $f2, 0x24($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X24);
    // 0x80277F2C: lwc1        $f14, 0x20($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X20);
    // 0x80277F30: mul.s       $f10, $f2, $f2
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f10.fl = MUL_S(ctx->f2.fl, ctx->f2.fl);
    // 0x80277F34: swc1        $f0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f0.u32l;
    // 0x80277F38: mul.s       $f18, $f14, $f14
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f18.fl = MUL_S(ctx->f14.fl, ctx->f14.fl);
    // 0x80277F3C: jal         0x8007FA40
    // 0x80277F40: add.s       $f12, $f10, $f18
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f12.fl = ctx->f10.fl + ctx->f18.fl;
    func_8007FA40(rdram, ctx);
        goto after_1;
    // 0x80277F40: add.s       $f12, $f10, $f18
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f12.fl = ctx->f10.fl + ctx->f18.fl;
    after_1:
    // 0x80277F44: lui         $at, 0x4018
    ctx->r1 = S32(0X4018 << 16);
    // 0x80277F48: mtc1        $at, $f3
    ctx->f_odd[(3 - 1) * 2] = ctx->r1;
    // 0x80277F4C: mtc1        $zero, $f2
    ctx->f2.u32l = 0;
    // 0x80277F50: cvt.d.s     $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f4.d = CVT_D_S(ctx->f0.fl);
    // 0x80277F54: c.lt.d      $f4, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f4.d < ctx->f2.d;
    // 0x80277F58: lwc1        $f6, 0x18($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X18);
    // 0x80277F5C: bc1f        L_80277FA4
    if (!c1cs) {
        // 0x80277F60: mov.s       $f14, $f0
        CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    ctx->f14.fl = ctx->f0.fl;
            goto L_80277FA4;
    }
    // 0x80277F60: mov.s       $f14, $f0
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    ctx->f14.fl = ctx->f0.fl;
    // 0x80277F64: sub.s       $f12, $f6, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f12.fl = ctx->f6.fl - ctx->f0.fl;
    // 0x80277F68: jal         0x80272AEC
    // 0x80277F6C: swc1        $f14, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f14.u32l;
    ovl_8024B800_func_80272AEC(rdram, ctx);
        goto after_2;
    // 0x80277F6C: swc1        $f14, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f14.u32l;
    after_2:
    // 0x80277F70: lui         $at, 0x4018
    ctx->r1 = S32(0X4018 << 16);
    // 0x80277F74: mtc1        $at, $f3
    ctx->f_odd[(3 - 1) * 2] = ctx->r1;
    // 0x80277F78: lui         $at, 0x4008
    ctx->r1 = S32(0X4008 << 16);
    // 0x80277F7C: mtc1        $at, $f11
    ctx->f_odd[(11 - 1) * 2] = ctx->r1;
    // 0x80277F80: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x80277F84: cvt.d.s     $f8, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f8.d = CVT_D_S(ctx->f0.fl);
    // 0x80277F88: c.lt.d      $f8, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f8.d < ctx->f10.d;
    // 0x80277F8C: mtc1        $zero, $f2
    ctx->f2.u32l = 0;
    // 0x80277F90: lwc1        $f14, 0x1C($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x80277F94: bc1f        L_80277FA4
    if (!c1cs) {
        // 0x80277F98: nop
    
            goto L_80277FA4;
    }
    // 0x80277F98: nop

    // 0x80277F9C: b           L_8027808C
    // 0x80277FA0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_8027808C;
    // 0x80277FA0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_80277FA4:
    // 0x80277FA4: lwc1        $f18, 0x18($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X18);
    // 0x80277FA8: nop

    // 0x80277FAC: cvt.d.s     $f0, $f18
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.fl); 
    ctx->f0.d = CVT_D_S(ctx->f18.fl);
    // 0x80277FB0: c.lt.d      $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f0.d < ctx->f2.d;
    // 0x80277FB4: nop

    // 0x80277FB8: bc1f        L_8027801C
    if (!c1cs) {
        // 0x80277FBC: nop
    
            goto L_8027801C;
    }
    // 0x80277FBC: nop

    // 0x80277FC0: cvt.d.s     $f4, $f14
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); 
    ctx->f4.d = CVT_D_S(ctx->f14.fl);
    // 0x80277FC4: c.lt.d      $f2, $f4
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f2.d < ctx->f4.d;
    // 0x80277FC8: lwc1        $f12, 0x20($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X20);
    // 0x80277FCC: bc1f        L_8027808C
    if (!c1cs) {
        // 0x80277FD0: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_8027808C;
    }
    // 0x80277FD0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x80277FD4: lwc1        $f14, 0x24($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X24);
    // 0x80277FD8: jal         0x8001C5D0
    // 0x80277FDC: nop

    func_8001C5D0(rdram, ctx);
        goto after_3;
    // 0x80277FDC: nop

    after_3:
    // 0x80277FE0: lw          $t6, 0x30($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X30);
    // 0x80277FE4: mov.s       $f14, $f0
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    ctx->f14.fl = ctx->f0.fl;
    // 0x80277FE8: lwc1        $f12, 0x8C($t6)
    ctx->f12.u32l = MEM_W(ctx->r14, 0X8C);
    // 0x80277FEC: jal         0x80279308
    // 0x80277FF0: nop

    ovl_8024B800_func_80279308(rdram, ctx);
        goto after_4;
    // 0x80277FF0: nop

    after_4:
    // 0x80277FF4: lui         $at, 0x8028
    ctx->r1 = S32(0X8028 << 16);
    // 0x80277FF8: lwc1        $f9, -0x1C38($at)
    ctx->f_odd[(9 - 1) * 2] = MEM_W(ctx->r1, -0X1C38);
    // 0x80277FFC: lwc1        $f8, -0x1C34($at)
    ctx->f8.u32l = MEM_W(ctx->r1, -0X1C34);
    // 0x80278000: cvt.d.s     $f6, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f6.d = CVT_D_S(ctx->f0.fl);
    // 0x80278004: c.lt.d      $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f6.d < ctx->f8.d;
    // 0x80278008: nop

    // 0x8027800C: bc1f        L_8027808C
    if (!c1cs) {
        // 0x80278010: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_8027808C;
    }
    // 0x80278010: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x80278014: b           L_8027808C
    // 0x80278018: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_8027808C;
    // 0x80278018: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_8027801C:
    // 0x8027801C: c.lt.d      $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f2.d < ctx->f0.d;
    // 0x80278020: nop

    // 0x80278024: bc1f        L_8027808C
    if (!c1cs) {
        // 0x80278028: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_8027808C;
    }
    // 0x80278028: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x8027802C: cvt.d.s     $f10, $f14
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); 
    ctx->f10.d = CVT_D_S(ctx->f14.fl);
    // 0x80278030: c.lt.d      $f10, $f2
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f10.d < ctx->f2.d;
    // 0x80278034: lwc1        $f12, 0x20($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X20);
    // 0x80278038: bc1f        L_8027808C
    if (!c1cs) {
        // 0x8027803C: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_8027808C;
    }
    // 0x8027803C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x80278040: lwc1        $f14, 0x24($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X24);
    // 0x80278044: jal         0x8001C5D0
    // 0x80278048: nop

    func_8001C5D0(rdram, ctx);
        goto after_5;
    // 0x80278048: nop

    after_5:
    // 0x8027804C: lw          $t7, 0x30($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X30);
    // 0x80278050: mov.s       $f14, $f0
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    ctx->f14.fl = ctx->f0.fl;
    // 0x80278054: lwc1        $f12, 0x8C($t7)
    ctx->f12.u32l = MEM_W(ctx->r15, 0X8C);
    // 0x80278058: jal         0x80279308
    // 0x8027805C: nop

    ovl_8024B800_func_80279308(rdram, ctx);
        goto after_6;
    // 0x8027805C: nop

    after_6:
    // 0x80278060: lui         $at, 0x8028
    ctx->r1 = S32(0X8028 << 16);
    // 0x80278064: lwc1        $f5, -0x1C30($at)
    ctx->f_odd[(5 - 1) * 2] = MEM_W(ctx->r1, -0X1C30);
    // 0x80278068: lwc1        $f4, -0x1C2C($at)
    ctx->f4.u32l = MEM_W(ctx->r1, -0X1C2C);
    // 0x8027806C: cvt.d.s     $f18, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f18.d = CVT_D_S(ctx->f0.fl);
    // 0x80278070: c.lt.d      $f18, $f4
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f18.d < ctx->f4.d;
    // 0x80278074: nop

    // 0x80278078: bc1f        L_8027808C
    if (!c1cs) {
        // 0x8027807C: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_8027808C;
    }
    // 0x8027807C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x80278080: b           L_8027808C
    // 0x80278084: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_8027808C;
    // 0x80278084: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80278088: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_8027808C:
    // 0x8027808C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80278090: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x80278094: jr          $ra
    // 0x80278098: nop

    return;
    // 0x80278098: nop

;}
RECOMP_FUNC void ovl_8024B800_func_80277FF4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80277FF4: lui         $at, 0x8028
    ctx->r1 = S32(0X8028 << 16);
    // 0x80277FF8: lwc1        $f9, -0x1C38($at)
    ctx->f_odd[(9 - 1) * 2] = MEM_W(ctx->r1, -0X1C38);
    // 0x80277FFC: lwc1        $f8, -0x1C34($at)
    ctx->f8.u32l = MEM_W(ctx->r1, -0X1C34);
    // 0x80278000: cvt.d.s     $f6, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f6.d = CVT_D_S(ctx->f0.fl);
    // 0x80278004: c.lt.d      $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f6.d < ctx->f8.d;
    // 0x80278008: nop

    // 0x8027800C: bc1f        L_8027808C
    if (!c1cs) {
        // 0x80278010: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_8027808C;
    }
    // 0x80278010: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x80278014: b           L_8027808C
    // 0x80278018: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_8027808C;
    // 0x80278018: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8027801C: c.lt.d      $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f2.d < ctx->f0.d;
    // 0x80278020: nop

    // 0x80278024: bc1f        L_8027808C
    if (!c1cs) {
        // 0x80278028: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_8027808C;
    }
    // 0x80278028: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x8027802C: cvt.d.s     $f10, $f14
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); 
    ctx->f10.d = CVT_D_S(ctx->f14.fl);
    // 0x80278030: c.lt.d      $f10, $f2
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f10.d < ctx->f2.d;
    // 0x80278034: lwc1        $f12, 0x20($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X20);
    // 0x80278038: bc1f        L_8027808C
    if (!c1cs) {
        // 0x8027803C: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_8027808C;
    }
    // 0x8027803C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x80278040: lwc1        $f14, 0x24($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X24);
    // 0x80278044: jal         0x8001C5D0
    // 0x80278048: nop

    func_8001C5D0(rdram, ctx);
        goto after_0;
    // 0x80278048: nop

    after_0:
    // 0x8027804C: lw          $t7, 0x30($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X30);
    // 0x80278050: mov.s       $f14, $f0
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    ctx->f14.fl = ctx->f0.fl;
    // 0x80278054: lwc1        $f12, 0x8C($t7)
    ctx->f12.u32l = MEM_W(ctx->r15, 0X8C);
    // 0x80278058: jal         0x80279308
    // 0x8027805C: nop

    ovl_8024B800_func_80279308(rdram, ctx);
        goto after_1;
    // 0x8027805C: nop

    after_1:
    // 0x80278060: lui         $at, 0x8028
    ctx->r1 = S32(0X8028 << 16);
    // 0x80278064: lwc1        $f5, -0x1C30($at)
    ctx->f_odd[(5 - 1) * 2] = MEM_W(ctx->r1, -0X1C30);
    // 0x80278068: lwc1        $f4, -0x1C2C($at)
    ctx->f4.u32l = MEM_W(ctx->r1, -0X1C2C);
    // 0x8027806C: cvt.d.s     $f18, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f18.d = CVT_D_S(ctx->f0.fl);
    // 0x80278070: c.lt.d      $f18, $f4
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f18.d < ctx->f4.d;
    // 0x80278074: nop

    // 0x80278078: bc1f        L_8027808C
    if (!c1cs) {
        // 0x8027807C: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_8027808C;
    }
    // 0x8027807C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x80278080: b           L_8027808C
    // 0x80278084: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_8027808C;
    // 0x80278084: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80278088: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_8027808C:
    // 0x8027808C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80278090: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x80278094: jr          $ra
    // 0x80278098: nop

    return;
    // 0x80278098: nop

;}
RECOMP_FUNC void ovl_8024B800_func_8027809C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8027809C: lui         $t6, 0x8009
    ctx->r14 = S32(0X8009 << 16);
    // 0x802780A0: lw          $t6, 0x3B20($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X3B20);
    // 0x802780A4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x802780A8: lwc1        $f0, 0x4($t6)
    ctx->f0.u32l = MEM_W(ctx->r14, 0X4);
    // 0x802780AC: nop

    // 0x802780B0: c.le.s      $f0, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f0.fl <= ctx->f12.fl;
    // 0x802780B4: nop

    // 0x802780B8: bc1f        L_802780D8
    if (!c1cs) {
        // 0x802780BC: nop
    
            goto L_802780D8;
    }
    // 0x802780BC: nop

    // 0x802780C0: c.le.s      $f14, $f0
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f14.fl <= ctx->f0.fl;
    // 0x802780C4: nop

    // 0x802780C8: bc1f        L_802780D8
    if (!c1cs) {
        // 0x802780CC: nop
    
            goto L_802780D8;
    }
    // 0x802780CC: nop

    // 0x802780D0: jr          $ra
    // 0x802780D4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    return;
    // 0x802780D4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_802780D8:
    // 0x802780D8: jr          $ra
    // 0x802780DC: nop

    return;
    // 0x802780DC: nop

;}
RECOMP_FUNC void ovl_8024B800_func_802780E0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802780E0: c.le.s      $f12, $f14
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 14);
    c1cs = ctx->f12.fl <= ctx->f14.fl;
    // 0x802780E4: sw          $a2, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r6;
    // 0x802780E8: bc1f        L_80278110
    if (!c1cs) {
        // 0x802780EC: or          $v1, $zero, $zero
        ctx->r3 = 0 | 0;
            goto L_80278110;
    }
    // 0x802780EC: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x802780F0: lwc1        $f4, 0x8($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X8);
    // 0x802780F4: nop

    // 0x802780F8: c.le.s      $f4, $f12
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f4.fl <= ctx->f12.fl;
    // 0x802780FC: nop

    // 0x80278100: bc1f        L_80278110
    if (!c1cs) {
        // 0x80278104: nop
    
            goto L_80278110;
    }
    // 0x80278104: nop

    // 0x80278108: jr          $ra
    // 0x8027810C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    return;
    // 0x8027810C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_80278110:
    // 0x80278110: lwc1        $f6, 0x8($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X8);
    // 0x80278114: nop

    // 0x80278118: c.le.s      $f12, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f12.fl <= ctx->f6.fl;
    // 0x8027811C: nop

    // 0x80278120: bc1f        L_8027813C
    if (!c1cs) {
        // 0x80278124: nop
    
            goto L_8027813C;
    }
    // 0x80278124: nop

    // 0x80278128: c.le.s      $f14, $f12
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f14.fl <= ctx->f12.fl;
    // 0x8027812C: nop

    // 0x80278130: bc1f        L_8027813C
    if (!c1cs) {
        // 0x80278134: nop
    
            goto L_8027813C;
    }
    // 0x80278134: nop

    // 0x80278138: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
L_8027813C:
    // 0x8027813C: jr          $ra
    // 0x80278140: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    return;
    // 0x80278140: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
;}
RECOMP_FUNC void ovl_8024B800_func_80278144(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80278144: addiu       $sp, $sp, -0xA0
    ctx->r29 = ADD32(ctx->r29, -0XA0);
    // 0x80278148: lui         $v0, 0x8009
    ctx->r2 = S32(0X8009 << 16);
    // 0x8027814C: lw          $v0, 0x3B20($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X3B20);
    // 0x80278150: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x80278154: swc1        $f23, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f_odd[(23 - 1) * 2];
    // 0x80278158: swc1        $f22, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f22.u32l;
    // 0x8027815C: swc1        $f21, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x80278160: swc1        $f20, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f20.u32l;
    // 0x80278164: swc1        $f12, 0xA0($sp)
    MEM_W(0XA0, ctx->r29) = ctx->f12.u32l;
    // 0x80278168: swc1        $f14, 0xA4($sp)
    MEM_W(0XA4, ctx->r29) = ctx->f14.u32l;
    // 0x8027816C: sw          $a2, 0xA8($sp)
    MEM_W(0XA8, ctx->r29) = ctx->r6;
    // 0x80278170: sw          $a3, 0xAC($sp)
    MEM_W(0XAC, ctx->r29) = ctx->r7;
    // 0x80278174: sh          $zero, 0x52($sp)
    MEM_H(0X52, ctx->r29) = 0;
    // 0x80278178: lwc1        $f4, 0x4C($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X4C);
    // 0x8027817C: lwc1        $f18, 0x8($v0)
    ctx->f18.u32l = MEM_W(ctx->r2, 0X8);
    // 0x80278180: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x80278184: sub.s       $f20, $f18, $f4
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f20.fl = ctx->f18.fl - ctx->f4.fl;
    // 0x80278188: lwc1        $f6, 0x44($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0X44);
    // 0x8027818C: lwc1        $f16, 0x0($v0)
    ctx->f16.u32l = MEM_W(ctx->r2, 0X0);
    // 0x80278190: c.lt.s      $f20, $f8
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f20.fl < ctx->f8.fl;
    // 0x80278194: or          $t1, $zero, $zero
    ctx->r9 = 0 | 0;
    // 0x80278198: or          $t2, $zero, $zero
    ctx->r10 = 0 | 0;
    // 0x8027819C: bc1f        L_802781AC
    if (!c1cs) {
        // 0x802781A0: sub.s       $f22, $f16, $f6
        CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f22.fl = ctx->f16.fl - ctx->f6.fl;
            goto L_802781AC;
    }
    // 0x802781A0: sub.s       $f22, $f16, $f6
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f22.fl = ctx->f16.fl - ctx->f6.fl;
    // 0x802781A4: b           L_802781B0
    // 0x802781A8: neg.s       $f0, $f20
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f20.fl); 
    ctx->f0.fl = -ctx->f20.fl;
        goto L_802781B0;
    // 0x802781A8: neg.s       $f0, $f20
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f20.fl); 
    ctx->f0.fl = -ctx->f20.fl;
L_802781AC:
    // 0x802781AC: mov.s       $f0, $f20
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    ctx->f0.fl = ctx->f20.fl;
L_802781B0:
    // 0x802781B0: lui         $at, 0x8028
    ctx->r1 = S32(0X8028 << 16);
    // 0x802781B4: lwc1        $f3, -0x1C28($at)
    ctx->f_odd[(3 - 1) * 2] = MEM_W(ctx->r1, -0X1C28);
    // 0x802781B8: lwc1        $f2, -0x1C24($at)
    ctx->f2.u32l = MEM_W(ctx->r1, -0X1C24);
    // 0x802781BC: cvt.d.s     $f10, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f10.d = CVT_D_S(ctx->f0.fl);
    // 0x802781C0: c.lt.d      $f2, $f10
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f2.d < ctx->f10.d;
    // 0x802781C4: nop

    // 0x802781C8: bc1f        L_802782EC
    if (!c1cs) {
        // 0x802781CC: nop
    
            goto L_802782EC;
    }
    // 0x802781CC: nop

    // 0x802781D0: div.s       $f2, $f22, $f20
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f22.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f2.fl = DIV_S(ctx->f22.fl, ctx->f20.fl);
    // 0x802781D4: swc1        $f16, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f16.u32l;
    // 0x802781D8: lwc1        $f4, 0x3C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x802781DC: lwc1        $f6, 0xA4($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0XA4);
    // 0x802781E0: lwc1        $f10, 0xA0($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0XA0);
    // 0x802781E4: sub.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x802781E8: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x802781EC: sub.s       $f4, $f18, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = ctx->f18.fl - ctx->f10.fl;
    // 0x802781F0: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x802781F4: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x802781F8: lwc1        $f22, 0xA4($sp)
    ctx->f22.u32l = MEM_W(ctx->r29, 0XA4);
    // 0x802781FC: mul.s       $f6, $f4, $f2
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f6.fl = MUL_S(ctx->f4.fl, ctx->f2.fl);
    // 0x80278200: nop

    // 0x80278204: mul.s       $f4, $f10, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f4.fl = MUL_S(ctx->f10.fl, ctx->f2.fl);
    // 0x80278208: sub.s       $f14, $f8, $f6
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f14.fl = ctx->f8.fl - ctx->f6.fl;
    // 0x8027820C: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x80278210: lui         $at, 0x4080
    ctx->r1 = S32(0X4080 << 16);
    // 0x80278214: mul.s       $f16, $f4, $f14
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f16.fl = MUL_S(ctx->f4.fl, ctx->f14.fl);
    // 0x80278218: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x8027821C: mul.s       $f0, $f16, $f16
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f0.fl = MUL_S(ctx->f16.fl, ctx->f16.fl);
    // 0x80278220: swc1        $f16, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f16.u32l;
    // 0x80278224: mul.s       $f8, $f2, $f2
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f8.fl = MUL_S(ctx->f2.fl, ctx->f2.fl);
    // 0x80278228: add.s       $f10, $f8, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f10.fl = ctx->f8.fl + ctx->f6.fl;
    // 0x8027822C: lwc1        $f6, 0xA8($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0XA8);
    // 0x80278230: mul.s       $f8, $f4, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f8.fl = MUL_S(ctx->f4.fl, ctx->f10.fl);
    // 0x80278234: swc1        $f10, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f10.u32l;
    // 0x80278238: mul.s       $f4, $f6, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f4.fl = MUL_S(ctx->f6.fl, ctx->f6.fl);
    // 0x8027823C: nop

    // 0x80278240: mul.s       $f10, $f14, $f14
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f10.fl = MUL_S(ctx->f14.fl, ctx->f14.fl);
    // 0x80278244: sub.s       $f6, $f10, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f10.fl - ctx->f4.fl;
    // 0x80278248: mul.s       $f12, $f8, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f12.fl = MUL_S(ctx->f8.fl, ctx->f6.fl);
    // 0x8027824C: c.lt.s      $f0, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f0.fl < ctx->f12.fl;
    // 0x80278250: sub.s       $f10, $f0, $f12
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f10.fl = ctx->f0.fl - ctx->f12.fl;
    // 0x80278254: bc1f        L_80278264
    if (!c1cs) {
        // 0x80278258: swc1        $f10, 0x88($sp)
        MEM_W(0X88, ctx->r29) = ctx->f10.u32l;
            goto L_80278264;
    }
    // 0x80278258: swc1        $f10, 0x88($sp)
    MEM_W(0X88, ctx->r29) = ctx->f10.u32l;
    // 0x8027825C: b           L_802786E4
    // 0x80278260: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_802786E4;
    // 0x80278260: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_80278264:
    // 0x80278264: lwc1        $f12, 0x88($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X88);
    // 0x80278268: sh          $t1, 0x50($sp)
    MEM_H(0X50, ctx->r29) = ctx->r9;
    // 0x8027826C: sh          $t2, 0x4E($sp)
    MEM_H(0X4E, ctx->r29) = ctx->r10;
    // 0x80278270: swc1        $f2, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->f2.u32l;
    // 0x80278274: jal         0x8007FA40
    // 0x80278278: swc1        $f14, 0x8C($sp)
    MEM_W(0X8C, ctx->r29) = ctx->f14.u32l;
    func_8007FA40(rdram, ctx);
        goto after_0;
    // 0x80278278: swc1        $f14, 0x8C($sp)
    MEM_W(0X8C, ctx->r29) = ctx->f14.u32l;
    after_0:
    // 0x8027827C: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x80278280: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80278284: lwc1        $f8, 0x38($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X38);
    // 0x80278288: lwc1        $f18, 0x34($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X34);
    // 0x8027828C: mul.s       $f20, $f4, $f8
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f20.fl = MUL_S(ctx->f4.fl, ctx->f8.fl);
    // 0x80278290: neg.s       $f18, $f18
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.fl); 
    ctx->f18.fl = -ctx->f18.fl;
    // 0x80278294: lwc1        $f2, 0x44($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X44);
    // 0x80278298: lwc1        $f14, 0x8C($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X8C);
    // 0x8027829C: add.s       $f6, $f18, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = ctx->f18.fl + ctx->f0.fl;
    // 0x802782A0: lh          $t1, 0x50($sp)
    ctx->r9 = MEM_H(ctx->r29, 0X50);
    // 0x802782A4: div.s       $f12, $f6, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f12.fl = DIV_S(ctx->f6.fl, ctx->f20.fl);
    // 0x802782A8: sub.s       $f10, $f18, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f10.fl = ctx->f18.fl - ctx->f0.fl;
    // 0x802782AC: lhu         $t2, 0x4E($sp)
    ctx->r10 = MEM_HU(ctx->r29, 0X4E);
    // 0x802782B0: div.s       $f16, $f10, $f20
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f16.fl = DIV_S(ctx->f10.fl, ctx->f20.fl);
    // 0x802782B4: mul.s       $f4, $f12, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f4.fl = MUL_S(ctx->f12.fl, ctx->f2.fl);
    // 0x802782B8: add.s       $f8, $f4, $f14
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f14.fl;
    // 0x802782BC: add.s       $f6, $f8, $f22
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f6.fl = ctx->f8.fl + ctx->f22.fl;
    // 0x802782C0: swc1        $f6, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->f6.u32l;
    // 0x802782C4: lwc1        $f6, 0xA0($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0XA0);
    // 0x802782C8: mul.s       $f10, $f16, $f2
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f10.fl = MUL_S(ctx->f16.fl, ctx->f2.fl);
    // 0x802782CC: add.s       $f12, $f12, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f12.fl = ctx->f12.fl + ctx->f6.fl;
    // 0x802782D0: swc1        $f12, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->f12.u32l;
    // 0x802782D4: add.s       $f4, $f10, $f14
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f4.fl = ctx->f10.fl + ctx->f14.fl;
    // 0x802782D8: add.s       $f8, $f4, $f22
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f22.fl;
    // 0x802782DC: add.s       $f16, $f16, $f6
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f16.fl = ctx->f16.fl + ctx->f6.fl;
    // 0x802782E0: swc1        $f8, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->f8.u32l;
    // 0x802782E4: b           L_8027847C
    // 0x802782E8: swc1        $f16, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->f16.u32l;
        goto L_8027847C;
    // 0x802782E8: swc1        $f16, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->f16.u32l;
L_802782EC:
    // 0x802782EC: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x802782F0: lwc1        $f8, 0xA8($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0XA8);
    // 0x802782F4: c.lt.s      $f22, $f10
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f22.fl < ctx->f10.fl;
    // 0x802782F8: nop

    // 0x802782FC: bc1f        L_8027830C
    if (!c1cs) {
        // 0x80278300: nop
    
            goto L_8027830C;
    }
    // 0x80278300: nop

    // 0x80278304: b           L_80278310
    // 0x80278308: neg.s       $f0, $f22
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f22.fl); 
    ctx->f0.fl = -ctx->f22.fl;
        goto L_80278310;
    // 0x80278308: neg.s       $f0, $f22
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f22.fl); 
    ctx->f0.fl = -ctx->f22.fl;
L_8027830C:
    // 0x8027830C: mov.s       $f0, $f22
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 22);
    ctx->f0.fl = ctx->f22.fl;
L_80278310:
    // 0x80278310: cvt.d.s     $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f4.d = CVT_D_S(ctx->f0.fl);
    // 0x80278314: c.lt.d      $f2, $f4
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f2.d < ctx->f4.d;
    // 0x80278318: lwc1        $f10, 0xA0($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0XA0);
    // 0x8027831C: bc1f        L_802783A8
    if (!c1cs) {
        // 0x80278320: nop
    
            goto L_802783A8;
    }
    // 0x80278320: nop

    // 0x80278324: swc1        $f18, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->f18.u32l;
    // 0x80278328: lwc1        $f8, 0x8($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X8);
    // 0x8027832C: lwc1        $f10, 0xA0($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0XA0);
    // 0x80278330: swc1        $f8, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->f8.u32l;
    // 0x80278334: lwc1        $f6, 0x8($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0X8);
    // 0x80278338: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x8027833C: sub.s       $f20, $f6, $f10
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f20.fl = ctx->f6.fl - ctx->f10.fl;
    // 0x80278340: lwc1        $f8, 0xA8($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0XA8);
    // 0x80278344: c.lt.s      $f20, $f4
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f20.fl < ctx->f4.fl;
    // 0x80278348: lwc1        $f6, 0xA8($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0XA8);
    // 0x8027834C: bc1f        L_80278358
    if (!c1cs) {
        // 0x80278350: addiu       $t2, $zero, 0x1
        ctx->r10 = ADD32(0, 0X1);
            goto L_80278358;
    }
    // 0x80278350: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x80278354: neg.s       $f20, $f20
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f20.fl); 
    ctx->f20.fl = -ctx->f20.fl;
L_80278358:
    // 0x80278358: c.lt.s      $f8, $f20
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 20);
    c1cs = ctx->f8.fl < ctx->f20.fl;
    // 0x8027835C: nop

    // 0x80278360: bc1f        L_80278370
    if (!c1cs) {
        // 0x80278364: nop
    
            goto L_80278370;
    }
    // 0x80278364: nop

    // 0x80278368: b           L_802786E4
    // 0x8027836C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_802786E4;
    // 0x8027836C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_80278370:
    // 0x80278370: mul.s       $f10, $f6, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f10.fl = MUL_S(ctx->f6.fl, ctx->f6.fl);
    // 0x80278374: sh          $t1, 0x50($sp)
    MEM_H(0X50, ctx->r29) = ctx->r9;
    // 0x80278378: sh          $t2, 0x4E($sp)
    MEM_H(0X4E, ctx->r29) = ctx->r10;
    // 0x8027837C: mul.s       $f4, $f20, $f20
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f4.fl = MUL_S(ctx->f20.fl, ctx->f20.fl);
    // 0x80278380: jal         0x8007FA40
    // 0x80278384: sub.s       $f12, $f10, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f12.fl = ctx->f10.fl - ctx->f4.fl;
    func_8007FA40(rdram, ctx);
        goto after_1;
    // 0x80278384: sub.s       $f12, $f10, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f12.fl = ctx->f10.fl - ctx->f4.fl;
    after_1:
    // 0x80278388: lwc1        $f22, 0xA4($sp)
    ctx->f22.u32l = MEM_W(ctx->r29, 0XA4);
    // 0x8027838C: lh          $t1, 0x50($sp)
    ctx->r9 = MEM_H(ctx->r29, 0X50);
    // 0x80278390: add.s       $f8, $f22, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f22.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = ctx->f22.fl + ctx->f0.fl;
    // 0x80278394: lhu         $t2, 0x4E($sp)
    ctx->r10 = MEM_HU(ctx->r29, 0X4E);
    // 0x80278398: sub.s       $f6, $f22, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f22.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = ctx->f22.fl - ctx->f0.fl;
    // 0x8027839C: swc1        $f8, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->f8.u32l;
    // 0x802783A0: b           L_8027847C
    // 0x802783A4: swc1        $f6, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->f6.u32l;
        goto L_8027847C;
    // 0x802783A4: swc1        $f6, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->f6.u32l;
L_802783A8:
    // 0x802783A8: mul.s       $f6, $f8, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f6.fl = MUL_S(ctx->f8.fl, ctx->f8.fl);
    // 0x802783AC: sub.s       $f20, $f18, $f10
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f20.fl = ctx->f18.fl - ctx->f10.fl;
    // 0x802783B0: lwc1        $f4, 0xA4($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0XA4);
    // 0x802783B4: mul.s       $f10, $f20, $f20
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f10.fl = MUL_S(ctx->f20.fl, ctx->f20.fl);
    // 0x802783B8: sub.s       $f22, $f16, $f4
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f22.fl = ctx->f16.fl - ctx->f4.fl;
    // 0x802783BC: mul.s       $f4, $f22, $f22
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f22.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f4.fl = MUL_S(ctx->f22.fl, ctx->f22.fl);
    // 0x802783C0: add.s       $f8, $f10, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f8.fl = ctx->f10.fl + ctx->f4.fl;
    // 0x802783C4: c.lt.s      $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f6.fl < ctx->f8.fl;
    // 0x802783C8: nop

    // 0x802783CC: bc1f        L_802783DC
    if (!c1cs) {
        // 0x802783D0: nop
    
            goto L_802783DC;
    }
    // 0x802783D0: nop

    // 0x802783D4: b           L_802786E4
    // 0x802783D8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_802786E4;
    // 0x802783D8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_802783DC:
    // 0x802783DC: mov.s       $f12, $f22
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 22);
    ctx->f12.fl = ctx->f22.fl;
    // 0x802783E0: jal         0x8001C5D0
    // 0x802783E4: mov.s       $f14, $f20
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 20);
    ctx->f14.fl = ctx->f20.fl;
    func_8001C5D0(rdram, ctx);
        goto after_2;
    // 0x802783E4: mov.s       $f14, $f20
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 20);
    ctx->f14.fl = ctx->f20.fl;
    after_2:
    // 0x802783E8: lwc1        $f22, 0xA4($sp)
    ctx->f22.u32l = MEM_W(ctx->r29, 0XA4);
    // 0x802783EC: mov.s       $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    ctx->f20.fl = ctx->f0.fl;
    // 0x802783F0: jal         0x80081040
    // 0x802783F4: mov.s       $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    ctx->f12.fl = ctx->f0.fl;
    func_80081040(rdram, ctx);
        goto after_3;
    // 0x802783F4: mov.s       $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    ctx->f12.fl = ctx->f0.fl;
    after_3:
    // 0x802783F8: lwc1        $f10, 0xA8($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0XA8);
    // 0x802783FC: lwc1        $f6, 0xA0($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0XA0);
    // 0x80278400: mul.s       $f4, $f0, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = MUL_S(ctx->f0.fl, ctx->f10.fl);
    // 0x80278404: lw          $t8, 0xAC($sp)
    ctx->r24 = MEM_W(ctx->r29, 0XAC);
    // 0x80278408: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x8027840C: cfc1        $t6, $FpcCsr
    ctx->r14 = get_cop1_cs();
    // 0x80278410: nop

    // 0x80278414: ori         $at, $t6, 0x3
    ctx->r1 = ctx->r14 | 0X3;
    // 0x80278418: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x8027841C: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x80278420: nop

    // 0x80278424: cvt.w.s     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.u32l = CVT_W_S(ctx->f8.fl);
    // 0x80278428: mfc1        $t7, $f10
    ctx->r15 = (int32_t)ctx->f10.u32l;
    // 0x8027842C: ctc1        $t6, $FpcCsr
    set_cop1_cs(ctx->r14);
    // 0x80278430: sh          $t7, 0x2($t8)
    MEM_H(0X2, ctx->r24) = ctx->r15;
    // 0x80278434: jal         0x80080E80
    // 0x80278438: mov.s       $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    ctx->f12.fl = ctx->f20.fl;
    func_80080E80(rdram, ctx);
        goto after_4;
    // 0x80278438: mov.s       $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    ctx->f12.fl = ctx->f20.fl;
    after_4:
    // 0x8027843C: lwc1        $f4, 0xA8($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0XA8);
    // 0x80278440: lw          $t4, 0xAC($sp)
    ctx->r12 = MEM_W(ctx->r29, 0XAC);
    // 0x80278444: mul.s       $f6, $f0, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f0.fl, ctx->f4.fl);
    // 0x80278448: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8027844C: add.s       $f8, $f6, $f22
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f8.fl = ctx->f6.fl + ctx->f22.fl;
    // 0x80278450: cfc1        $t9, $FpcCsr
    ctx->r25 = get_cop1_cs();
    // 0x80278454: nop

    // 0x80278458: ori         $at, $t9, 0x3
    ctx->r1 = ctx->r25 | 0X3;
    // 0x8027845C: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x80278460: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x80278464: nop

    // 0x80278468: cvt.w.s     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.u32l = CVT_W_S(ctx->f8.fl);
    // 0x8027846C: mfc1        $t3, $f10
    ctx->r11 = (int32_t)ctx->f10.u32l;
    // 0x80278470: ctc1        $t9, $FpcCsr
    set_cop1_cs(ctx->r25);
    // 0x80278474: b           L_802786E4
    // 0x80278478: sh          $t3, 0x0($t4)
    MEM_H(0X0, ctx->r12) = ctx->r11;
        goto L_802786E4;
    // 0x80278478: sh          $t3, 0x0($t4)
    MEM_H(0X0, ctx->r12) = ctx->r11;
L_8027847C:
    // 0x8027847C: lui         $v0, 0x8009
    ctx->r2 = S32(0X8009 << 16);
    // 0x80278480: lw          $v0, 0x3B20($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X3B20);
    // 0x80278484: lwc1        $f8, 0x58($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X58);
    // 0x80278488: lwc1        $f0, 0x4C($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X4C);
    // 0x8027848C: lwc1        $f4, 0x60($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X60);
    // 0x80278490: sub.s       $f12, $f0, $f8
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f12.fl = ctx->f0.fl - ctx->f8.fl;
    // 0x80278494: lwc1        $f10, 0x5C($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X5C);
    // 0x80278498: lwc1        $f2, 0x44($v0)
    ctx->f2.u32l = MEM_W(ctx->r2, 0X44);
    // 0x8027849C: sub.s       $f20, $f0, $f4
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f20.fl = ctx->f0.fl - ctx->f4.fl;
    // 0x802784A0: lwc1        $f6, 0x64($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X64);
    // 0x802784A4: mul.s       $f4, $f12, $f12
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f4.fl = MUL_S(ctx->f12.fl, ctx->f12.fl);
    // 0x802784A8: sub.s       $f14, $f2, $f10
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f14.fl = ctx->f2.fl - ctx->f10.fl;
    // 0x802784AC: addiu       $t5, $zero, 0x1
    ctx->r13 = ADD32(0, 0X1);
    // 0x802784B0: sub.s       $f22, $f2, $f6
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f22.fl = ctx->f2.fl - ctx->f6.fl;
    // 0x802784B4: mul.s       $f6, $f14, $f14
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f6.fl = MUL_S(ctx->f14.fl, ctx->f14.fl);
    // 0x802784B8: nop

    // 0x802784BC: mul.s       $f10, $f20, $f20
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f10.fl = MUL_S(ctx->f20.fl, ctx->f20.fl);
    // 0x802784C0: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x802784C4: mul.s       $f4, $f22, $f22
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f22.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f4.fl = MUL_S(ctx->f22.fl, ctx->f22.fl);
    // 0x802784C8: add.s       $f6, $f10, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f10.fl + ctx->f4.fl;
    // 0x802784CC: c.lt.s      $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f8.fl < ctx->f6.fl;
    // 0x802784D0: nop

    // 0x802784D4: bc1f        L_802784E0
    if (!c1cs) {
        // 0x802784D8: nop
    
            goto L_802784E0;
    }
    // 0x802784D8: nop

    // 0x802784DC: sh          $t5, 0x52($sp)
    MEM_H(0X52, ctx->r29) = ctx->r13;
L_802784E0:
    // 0x802784E0: cfc1        $t6, $FpcCsr
    ctx->r14 = get_cop1_cs();
    // 0x802784E4: lwc1        $f10, 0x60($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X60);
    // 0x802784E8: ori         $at, $t6, 0x3
    ctx->r1 = ctx->r14 | 0X3;
    // 0x802784EC: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x802784F0: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x802784F4: lw          $t0, 0xAC($sp)
    ctx->r8 = MEM_W(ctx->r29, 0XAC);
    // 0x802784F8: cvt.w.s     $f4, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    ctx->f4.u32l = CVT_W_S(ctx->f10.fl);
    // 0x802784FC: lui         $v0, 0x8009
    ctx->r2 = S32(0X8009 << 16);
    // 0x80278500: ctc1        $t6, $FpcCsr
    set_cop1_cs(ctx->r14);
    // 0x80278504: mfc1        $t7, $f4
    ctx->r15 = (int32_t)ctx->f4.u32l;
    // 0x80278508: sll         $v1, $t2, 2
    ctx->r3 = S32(ctx->r10 << 2);
    // 0x8027850C: cfc1        $t8, $FpcCsr
    ctx->r24 = get_cop1_cs();
    // 0x80278510: sh          $t7, 0x2($t0)
    MEM_H(0X2, ctx->r8) = ctx->r15;
    // 0x80278514: ori         $at, $t8, 0x3
    ctx->r1 = ctx->r24 | 0X3;
    // 0x80278518: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x8027851C: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x80278520: lwc1        $f8, 0x64($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X64);
    // 0x80278524: addiu       $t3, $sp, 0x60
    ctx->r11 = ADD32(ctx->r29, 0X60);
    // 0x80278528: cvt.w.s     $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    ctx->f6.u32l = CVT_W_S(ctx->f8.fl);
    // 0x8027852C: addiu       $t4, $sp, 0x70
    ctx->r12 = ADD32(ctx->r29, 0X70);
    // 0x80278530: mfc1        $t9, $f6
    ctx->r25 = (int32_t)ctx->f6.u32l;
    // 0x80278534: addiu       $t5, $sp, 0x68
    ctx->r13 = ADD32(ctx->r29, 0X68);
    // 0x80278538: sh          $t9, 0x0($t0)
    MEM_H(0X0, ctx->r8) = ctx->r25;
    // 0x8027853C: lw          $v0, 0x3B20($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X3B20);
    // 0x80278540: addu        $a0, $v1, $t5
    ctx->r4 = ADD32(ctx->r3, ctx->r13);
    // 0x80278544: lwc1        $f10, 0x8($v0)
    ctx->f10.u32l = MEM_W(ctx->r2, 0X8);
    // 0x80278548: addu        $a3, $v1, $t4
    ctx->r7 = ADD32(ctx->r3, ctx->r12);
    // 0x8027854C: swc1        $f10, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->f10.u32l;
    // 0x80278550: lwc1        $f4, 0x0($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X0);
    // 0x80278554: addu        $a1, $v1, $t3
    ctx->r5 = ADD32(ctx->r3, ctx->r11);
    // 0x80278558: swc1        $f4, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->f4.u32l;
    // 0x8027855C: lwc1        $f8, 0x4C($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X4C);
    // 0x80278560: ctc1        $t8, $FpcCsr
    set_cop1_cs(ctx->r24);
    // 0x80278564: swc1        $f8, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->f8.u32l;
    // 0x80278568: lwc1        $f6, 0x44($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0X44);
    // 0x8027856C: nop

    // 0x80278570: swc1        $f6, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->f6.u32l;
    // 0x80278574: lw          $a2, 0x0($a0)
    ctx->r6 = MEM_W(ctx->r4, 0X0);
    // 0x80278578: lwc1        $f14, 0x0($a3)
    ctx->f14.u32l = MEM_W(ctx->r7, 0X0);
    // 0x8027857C: lwc1        $f12, 0x0($a1)
    ctx->f12.u32l = MEM_W(ctx->r5, 0X0);
    // 0x80278580: sh          $t1, 0x50($sp)
    MEM_H(0X50, ctx->r29) = ctx->r9;
    // 0x80278584: sw          $a3, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r7;
    // 0x80278588: sw          $a1, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r5;
    // 0x8027858C: sw          $a0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r4;
    // 0x80278590: jal         0x802780E0
    // 0x80278594: sw          $v1, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r3;
    ovl_8024B800_func_802780E0(rdram, ctx);
        goto after_5;
    // 0x80278594: sw          $v1, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r3;
    after_5:
    // 0x80278598: lw          $v1, 0x44($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X44);
    // 0x8027859C: lw          $a0, 0x38($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X38);
    // 0x802785A0: lh          $t1, 0x50($sp)
    ctx->r9 = MEM_H(ctx->r29, 0X50);
    // 0x802785A4: beq         $v0, $zero, L_802785B0
    if (ctx->r2 == 0) {
        // 0x802785A8: addiu       $t6, $sp, 0x58
        ctx->r14 = ADD32(ctx->r29, 0X58);
            goto L_802785B0;
    }
    // 0x802785A8: addiu       $t6, $sp, 0x58
    ctx->r14 = ADD32(ctx->r29, 0X58);
    // 0x802785AC: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
L_802785B0:
    // 0x802785B0: lw          $t7, 0x3C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X3C);
    // 0x802785B4: addu        $a1, $v1, $t6
    ctx->r5 = ADD32(ctx->r3, ctx->r14);
    // 0x802785B8: lwc1        $f12, 0x0($a1)
    ctx->f12.u32l = MEM_W(ctx->r5, 0X0);
    // 0x802785BC: lw          $a2, 0x0($a0)
    ctx->r6 = MEM_W(ctx->r4, 0X0);
    // 0x802785C0: lwc1        $f14, 0x0($t7)
    ctx->f14.u32l = MEM_W(ctx->r15, 0X0);
    // 0x802785C4: sh          $t1, 0x50($sp)
    MEM_H(0X50, ctx->r29) = ctx->r9;
    // 0x802785C8: jal         0x802780E0
    // 0x802785CC: sw          $a1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r5;
    ovl_8024B800_func_802780E0(rdram, ctx);
        goto after_6;
    // 0x802785CC: sw          $a1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r5;
    after_6:
    // 0x802785D0: lw          $a1, 0x34($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X34);
    // 0x802785D4: lh          $t1, 0x50($sp)
    ctx->r9 = MEM_H(ctx->r29, 0X50);
    // 0x802785D8: beq         $v0, $zero, L_80278648
    if (ctx->r2 == 0) {
        // 0x802785DC: nop
    
            goto L_80278648;
    }
    // 0x802785DC: nop

    // 0x802785E0: lh          $t8, 0x52($sp)
    ctx->r24 = MEM_H(ctx->r29, 0X52);
    // 0x802785E4: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
    // 0x802785E8: beq         $t8, $zero, L_80278648
    if (ctx->r24 == 0) {
        // 0x802785EC: nop
    
            goto L_80278648;
    }
    // 0x802785EC: nop

    // 0x802785F0: cfc1        $t9, $FpcCsr
    ctx->r25 = get_cop1_cs();
    // 0x802785F4: lwc1        $f10, 0x58($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X58);
    // 0x802785F8: ori         $at, $t9, 0x3
    ctx->r1 = ctx->r25 | 0X3;
    // 0x802785FC: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x80278600: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x80278604: lw          $t4, 0xAC($sp)
    ctx->r12 = MEM_W(ctx->r29, 0XAC);
    // 0x80278608: cvt.w.s     $f4, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    ctx->f4.u32l = CVT_W_S(ctx->f10.fl);
    // 0x8027860C: ctc1        $t9, $FpcCsr
    set_cop1_cs(ctx->r25);
    // 0x80278610: mfc1        $t3, $f4
    ctx->r11 = (int32_t)ctx->f4.u32l;
    // 0x80278614: nop

    // 0x80278618: cfc1        $t5, $FpcCsr
    ctx->r13 = get_cop1_cs();
    // 0x8027861C: sh          $t3, 0x2($t4)
    MEM_H(0X2, ctx->r12) = ctx->r11;
    // 0x80278620: ori         $at, $t5, 0x3
    ctx->r1 = ctx->r13 | 0X3;
    // 0x80278624: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x80278628: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x8027862C: lwc1        $f8, 0x5C($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X5C);
    // 0x80278630: nop

    // 0x80278634: cvt.w.s     $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    ctx->f6.u32l = CVT_W_S(ctx->f8.fl);
    // 0x80278638: mfc1        $t6, $f6
    ctx->r14 = (int32_t)ctx->f6.u32l;
    // 0x8027863C: ctc1        $t5, $FpcCsr
    set_cop1_cs(ctx->r13);
    // 0x80278640: sh          $t6, 0x0($t4)
    MEM_H(0X0, ctx->r12) = ctx->r14;
    // 0x80278644: nop

L_80278648:
    // 0x80278648: bne         $t1, $zero, L_802786E4
    if (ctx->r9 != 0) {
        // 0x8027864C: or          $v0, $t1, $zero
        ctx->r2 = ctx->r9 | 0;
            goto L_802786E4;
    }
    // 0x8027864C: or          $v0, $t1, $zero
    ctx->r2 = ctx->r9 | 0;
    // 0x80278650: lw          $t7, 0x3C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X3C);
    // 0x80278654: lw          $t8, 0x40($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X40);
    // 0x80278658: lw          $a2, 0x0($a1)
    ctx->r6 = MEM_W(ctx->r5, 0X0);
    // 0x8027865C: lwc1        $f12, 0x0($t7)
    ctx->f12.u32l = MEM_W(ctx->r15, 0X0);
    // 0x80278660: lwc1        $f14, 0x0($t8)
    ctx->f14.u32l = MEM_W(ctx->r24, 0X0);
    // 0x80278664: jal         0x802780E0
    // 0x80278668: sh          $t1, 0x50($sp)
    MEM_H(0X50, ctx->r29) = ctx->r9;
    ovl_8024B800_func_802780E0(rdram, ctx);
        goto after_7;
    // 0x80278668: sh          $t1, 0x50($sp)
    MEM_H(0X50, ctx->r29) = ctx->r9;
    after_7:
    // 0x8027866C: lh          $t1, 0x50($sp)
    ctx->r9 = MEM_H(ctx->r29, 0X50);
    // 0x80278670: beq         $v0, $zero, L_802786E4
    if (ctx->r2 == 0) {
        // 0x80278674: or          $v0, $t1, $zero
        ctx->r2 = ctx->r9 | 0;
            goto L_802786E4;
    }
    // 0x80278674: or          $v0, $t1, $zero
    ctx->r2 = ctx->r9 | 0;
    // 0x80278678: lh          $t9, 0x52($sp)
    ctx->r25 = MEM_H(ctx->r29, 0X52);
    // 0x8027867C: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
    // 0x80278680: beq         $t9, $zero, L_802786E4
    if (ctx->r25 == 0) {
        // 0x80278684: or          $v0, $t1, $zero
        ctx->r2 = ctx->r9 | 0;
            goto L_802786E4;
    }
    // 0x80278684: or          $v0, $t1, $zero
    ctx->r2 = ctx->r9 | 0;
    // 0x80278688: cfc1        $t3, $FpcCsr
    ctx->r11 = get_cop1_cs();
    // 0x8027868C: lwc1        $f10, 0x58($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X58);
    // 0x80278690: ori         $at, $t3, 0x3
    ctx->r1 = ctx->r11 | 0X3;
    // 0x80278694: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x80278698: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x8027869C: lw          $t6, 0xAC($sp)
    ctx->r14 = MEM_W(ctx->r29, 0XAC);
    // 0x802786A0: cvt.w.s     $f4, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    ctx->f4.u32l = CVT_W_S(ctx->f10.fl);
    // 0x802786A4: ctc1        $t3, $FpcCsr
    set_cop1_cs(ctx->r11);
    // 0x802786A8: mfc1        $t5, $f4
    ctx->r13 = (int32_t)ctx->f4.u32l;
    // 0x802786AC: nop

    // 0x802786B0: cfc1        $t4, $FpcCsr
    ctx->r12 = get_cop1_cs();
    // 0x802786B4: sh          $t5, 0x2($t6)
    MEM_H(0X2, ctx->r14) = ctx->r13;
    // 0x802786B8: ori         $at, $t4, 0x3
    ctx->r1 = ctx->r12 | 0X3;
    // 0x802786BC: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x802786C0: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x802786C4: lwc1        $f8, 0x5C($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X5C);
    // 0x802786C8: nop

    // 0x802786CC: cvt.w.s     $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    ctx->f6.u32l = CVT_W_S(ctx->f8.fl);
    // 0x802786D0: mfc1        $t7, $f6
    ctx->r15 = (int32_t)ctx->f6.u32l;
    // 0x802786D4: ctc1        $t4, $FpcCsr
    set_cop1_cs(ctx->r12);
    // 0x802786D8: sh          $t7, 0x0($t6)
    MEM_H(0X0, ctx->r14) = ctx->r15;
    // 0x802786DC: nop

    // 0x802786E0: or          $v0, $t1, $zero
    ctx->r2 = ctx->r9 | 0;
L_802786E4:
    // 0x802786E4: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x802786E8: lwc1        $f21, 0x10($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X10);
    // 0x802786EC: lwc1        $f20, 0x14($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X14);
    // 0x802786F0: lwc1        $f23, 0x18($sp)
    ctx->f_odd[(23 - 1) * 2] = MEM_W(ctx->r29, 0X18);
    // 0x802786F4: lwc1        $f22, 0x1C($sp)
    ctx->f22.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x802786F8: jr          $ra
    // 0x802786FC: addiu       $sp, $sp, 0xA0
    ctx->r29 = ADD32(ctx->r29, 0XA0);
    return;
    // 0x802786FC: addiu       $sp, $sp, 0xA0
    ctx->r29 = ADD32(ctx->r29, 0XA0);
;}
RECOMP_FUNC void ovl_8024B800_func_802782C8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802782C8: mul.s       $f10, $f16, $f2
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f10.fl = MUL_S(ctx->f16.fl, ctx->f2.fl);
    // 0x802782CC: add.s       $f12, $f12, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f12.fl = ctx->f12.fl + ctx->f6.fl;
    // 0x802782D0: swc1        $f12, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->f12.u32l;
    // 0x802782D4: add.s       $f4, $f10, $f14
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f4.fl = ctx->f10.fl + ctx->f14.fl;
    // 0x802782D8: add.s       $f8, $f4, $f22
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f22.fl;
    // 0x802782DC: add.s       $f16, $f16, $f6
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f16.fl = ctx->f16.fl + ctx->f6.fl;
    // 0x802782E0: swc1        $f8, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->f8.u32l;
    // 0x802782E4: b           L_8027847C
    // 0x802782E8: swc1        $f16, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->f16.u32l;
        goto L_8027847C;
    // 0x802782E8: swc1        $f16, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->f16.u32l;
    // 0x802782EC: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x802782F0: lwc1        $f8, 0xA8($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0XA8);
    // 0x802782F4: c.lt.s      $f22, $f10
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f22.fl < ctx->f10.fl;
    // 0x802782F8: nop

    // 0x802782FC: bc1f        L_8027830C
    if (!c1cs) {
        // 0x80278300: nop
    
            goto L_8027830C;
    }
    // 0x80278300: nop

    // 0x80278304: b           L_80278310
    // 0x80278308: neg.s       $f0, $f22
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f22.fl); 
    ctx->f0.fl = -ctx->f22.fl;
        goto L_80278310;
    // 0x80278308: neg.s       $f0, $f22
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f22.fl); 
    ctx->f0.fl = -ctx->f22.fl;
L_8027830C:
    // 0x8027830C: mov.s       $f0, $f22
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 22);
    ctx->f0.fl = ctx->f22.fl;
L_80278310:
    // 0x80278310: cvt.d.s     $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f4.d = CVT_D_S(ctx->f0.fl);
    // 0x80278314: c.lt.d      $f2, $f4
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f2.d < ctx->f4.d;
    // 0x80278318: lwc1        $f10, 0xA0($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0XA0);
    // 0x8027831C: bc1f        L_802783A8
    if (!c1cs) {
        // 0x80278320: nop
    
            goto L_802783A8;
    }
    // 0x80278320: nop

    // 0x80278324: swc1        $f18, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->f18.u32l;
    // 0x80278328: lwc1        $f8, 0x8($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X8);
    // 0x8027832C: lwc1        $f10, 0xA0($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0XA0);
    // 0x80278330: swc1        $f8, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->f8.u32l;
    // 0x80278334: lwc1        $f6, 0x8($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0X8);
    // 0x80278338: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x8027833C: sub.s       $f20, $f6, $f10
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f20.fl = ctx->f6.fl - ctx->f10.fl;
    // 0x80278340: lwc1        $f8, 0xA8($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0XA8);
    // 0x80278344: c.lt.s      $f20, $f4
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f20.fl < ctx->f4.fl;
    // 0x80278348: lwc1        $f6, 0xA8($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0XA8);
    // 0x8027834C: bc1f        L_80278358
    if (!c1cs) {
        // 0x80278350: addiu       $t2, $zero, 0x1
        ctx->r10 = ADD32(0, 0X1);
            goto L_80278358;
    }
    // 0x80278350: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x80278354: neg.s       $f20, $f20
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f20.fl); 
    ctx->f20.fl = -ctx->f20.fl;
L_80278358:
    // 0x80278358: c.lt.s      $f8, $f20
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 20);
    c1cs = ctx->f8.fl < ctx->f20.fl;
    // 0x8027835C: nop

    // 0x80278360: bc1f        L_80278370
    if (!c1cs) {
        // 0x80278364: nop
    
            goto L_80278370;
    }
    // 0x80278364: nop

    // 0x80278368: b           L_802786E4
    // 0x8027836C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_802786E4;
    // 0x8027836C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_80278370:
    // 0x80278370: mul.s       $f10, $f6, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f10.fl = MUL_S(ctx->f6.fl, ctx->f6.fl);
    // 0x80278374: sh          $t1, 0x50($sp)
    MEM_H(0X50, ctx->r29) = ctx->r9;
    // 0x80278378: sh          $t2, 0x4E($sp)
    MEM_H(0X4E, ctx->r29) = ctx->r10;
    // 0x8027837C: mul.s       $f4, $f20, $f20
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f4.fl = MUL_S(ctx->f20.fl, ctx->f20.fl);
    // 0x80278380: jal         0x8007FA40
    // 0x80278384: sub.s       $f12, $f10, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f12.fl = ctx->f10.fl - ctx->f4.fl;
    func_8007FA40(rdram, ctx);
        goto after_0;
    // 0x80278384: sub.s       $f12, $f10, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f12.fl = ctx->f10.fl - ctx->f4.fl;
    after_0:
    // 0x80278388: lwc1        $f22, 0xA4($sp)
    ctx->f22.u32l = MEM_W(ctx->r29, 0XA4);
    // 0x8027838C: lh          $t1, 0x50($sp)
    ctx->r9 = MEM_H(ctx->r29, 0X50);
    // 0x80278390: add.s       $f8, $f22, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f22.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = ctx->f22.fl + ctx->f0.fl;
    // 0x80278394: lhu         $t2, 0x4E($sp)
    ctx->r10 = MEM_HU(ctx->r29, 0X4E);
    // 0x80278398: sub.s       $f6, $f22, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f22.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = ctx->f22.fl - ctx->f0.fl;
    // 0x8027839C: swc1        $f8, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->f8.u32l;
    // 0x802783A0: b           L_8027847C
    // 0x802783A4: swc1        $f6, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->f6.u32l;
        goto L_8027847C;
    // 0x802783A4: swc1        $f6, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->f6.u32l;
L_802783A8:
    // 0x802783A8: mul.s       $f6, $f8, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f6.fl = MUL_S(ctx->f8.fl, ctx->f8.fl);
    // 0x802783AC: sub.s       $f20, $f18, $f10
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f20.fl = ctx->f18.fl - ctx->f10.fl;
    // 0x802783B0: lwc1        $f4, 0xA4($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0XA4);
    // 0x802783B4: mul.s       $f10, $f20, $f20
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f10.fl = MUL_S(ctx->f20.fl, ctx->f20.fl);
    // 0x802783B8: sub.s       $f22, $f16, $f4
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f22.fl = ctx->f16.fl - ctx->f4.fl;
    // 0x802783BC: mul.s       $f4, $f22, $f22
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f22.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f4.fl = MUL_S(ctx->f22.fl, ctx->f22.fl);
    // 0x802783C0: add.s       $f8, $f10, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f8.fl = ctx->f10.fl + ctx->f4.fl;
    // 0x802783C4: c.lt.s      $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f6.fl < ctx->f8.fl;
    // 0x802783C8: nop

    // 0x802783CC: bc1f        L_802783DC
    if (!c1cs) {
        // 0x802783D0: nop
    
            goto L_802783DC;
    }
    // 0x802783D0: nop

    // 0x802783D4: b           L_802786E4
    // 0x802783D8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_802786E4;
    // 0x802783D8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_802783DC:
    // 0x802783DC: mov.s       $f12, $f22
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 22);
    ctx->f12.fl = ctx->f22.fl;
    // 0x802783E0: jal         0x8001C5D0
    // 0x802783E4: mov.s       $f14, $f20
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 20);
    ctx->f14.fl = ctx->f20.fl;
    func_8001C5D0(rdram, ctx);
        goto after_1;
    // 0x802783E4: mov.s       $f14, $f20
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 20);
    ctx->f14.fl = ctx->f20.fl;
    after_1:
    // 0x802783E8: lwc1        $f22, 0xA4($sp)
    ctx->f22.u32l = MEM_W(ctx->r29, 0XA4);
    // 0x802783EC: mov.s       $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    ctx->f20.fl = ctx->f0.fl;
    // 0x802783F0: jal         0x80081040
    // 0x802783F4: mov.s       $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    ctx->f12.fl = ctx->f0.fl;
    func_80081040(rdram, ctx);
        goto after_2;
    // 0x802783F4: mov.s       $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    ctx->f12.fl = ctx->f0.fl;
    after_2:
    // 0x802783F8: lwc1        $f10, 0xA8($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0XA8);
    // 0x802783FC: lwc1        $f6, 0xA0($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0XA0);
    // 0x80278400: mul.s       $f4, $f0, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = MUL_S(ctx->f0.fl, ctx->f10.fl);
    // 0x80278404: lw          $t8, 0xAC($sp)
    ctx->r24 = MEM_W(ctx->r29, 0XAC);
    // 0x80278408: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x8027840C: cfc1        $t6, $FpcCsr
    ctx->r14 = get_cop1_cs();
    // 0x80278410: nop

    // 0x80278414: ori         $at, $t6, 0x3
    ctx->r1 = ctx->r14 | 0X3;
    // 0x80278418: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x8027841C: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x80278420: nop

    // 0x80278424: cvt.w.s     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.u32l = CVT_W_S(ctx->f8.fl);
    // 0x80278428: mfc1        $t7, $f10
    ctx->r15 = (int32_t)ctx->f10.u32l;
    // 0x8027842C: ctc1        $t6, $FpcCsr
    set_cop1_cs(ctx->r14);
    // 0x80278430: sh          $t7, 0x2($t8)
    MEM_H(0X2, ctx->r24) = ctx->r15;
    // 0x80278434: jal         0x80080E80
    // 0x80278438: mov.s       $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    ctx->f12.fl = ctx->f20.fl;
    func_80080E80(rdram, ctx);
        goto after_3;
    // 0x80278438: mov.s       $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    ctx->f12.fl = ctx->f20.fl;
    after_3:
    // 0x8027843C: lwc1        $f4, 0xA8($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0XA8);
    // 0x80278440: lw          $t4, 0xAC($sp)
    ctx->r12 = MEM_W(ctx->r29, 0XAC);
    // 0x80278444: mul.s       $f6, $f0, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f0.fl, ctx->f4.fl);
    // 0x80278448: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8027844C: add.s       $f8, $f6, $f22
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f8.fl = ctx->f6.fl + ctx->f22.fl;
    // 0x80278450: cfc1        $t9, $FpcCsr
    ctx->r25 = get_cop1_cs();
    // 0x80278454: nop

    // 0x80278458: ori         $at, $t9, 0x3
    ctx->r1 = ctx->r25 | 0X3;
    // 0x8027845C: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x80278460: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x80278464: nop

    // 0x80278468: cvt.w.s     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.u32l = CVT_W_S(ctx->f8.fl);
    // 0x8027846C: mfc1        $t3, $f10
    ctx->r11 = (int32_t)ctx->f10.u32l;
    // 0x80278470: ctc1        $t9, $FpcCsr
    set_cop1_cs(ctx->r25);
    // 0x80278474: b           L_802786E4
    // 0x80278478: sh          $t3, 0x0($t4)
    MEM_H(0X0, ctx->r12) = ctx->r11;
        goto L_802786E4;
    // 0x80278478: sh          $t3, 0x0($t4)
    MEM_H(0X0, ctx->r12) = ctx->r11;
L_8027847C:
    // 0x8027847C: lui         $v0, 0x8009
    ctx->r2 = S32(0X8009 << 16);
    // 0x80278480: lw          $v0, 0x3B20($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X3B20);
    // 0x80278484: lwc1        $f8, 0x58($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X58);
    // 0x80278488: lwc1        $f0, 0x4C($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X4C);
    // 0x8027848C: lwc1        $f4, 0x60($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X60);
    // 0x80278490: sub.s       $f12, $f0, $f8
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f12.fl = ctx->f0.fl - ctx->f8.fl;
    // 0x80278494: lwc1        $f10, 0x5C($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X5C);
    // 0x80278498: lwc1        $f2, 0x44($v0)
    ctx->f2.u32l = MEM_W(ctx->r2, 0X44);
    // 0x8027849C: sub.s       $f20, $f0, $f4
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f20.fl = ctx->f0.fl - ctx->f4.fl;
    // 0x802784A0: lwc1        $f6, 0x64($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X64);
    // 0x802784A4: mul.s       $f4, $f12, $f12
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f4.fl = MUL_S(ctx->f12.fl, ctx->f12.fl);
    // 0x802784A8: sub.s       $f14, $f2, $f10
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f14.fl = ctx->f2.fl - ctx->f10.fl;
    // 0x802784AC: addiu       $t5, $zero, 0x1
    ctx->r13 = ADD32(0, 0X1);
    // 0x802784B0: sub.s       $f22, $f2, $f6
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f22.fl = ctx->f2.fl - ctx->f6.fl;
    // 0x802784B4: mul.s       $f6, $f14, $f14
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f6.fl = MUL_S(ctx->f14.fl, ctx->f14.fl);
    // 0x802784B8: nop

    // 0x802784BC: mul.s       $f10, $f20, $f20
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f10.fl = MUL_S(ctx->f20.fl, ctx->f20.fl);
    // 0x802784C0: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x802784C4: mul.s       $f4, $f22, $f22
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f22.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f4.fl = MUL_S(ctx->f22.fl, ctx->f22.fl);
    // 0x802784C8: add.s       $f6, $f10, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f10.fl + ctx->f4.fl;
    // 0x802784CC: c.lt.s      $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f8.fl < ctx->f6.fl;
    // 0x802784D0: nop

    // 0x802784D4: bc1f        L_802784E0
    if (!c1cs) {
        // 0x802784D8: nop
    
            goto L_802784E0;
    }
    // 0x802784D8: nop

    // 0x802784DC: sh          $t5, 0x52($sp)
    MEM_H(0X52, ctx->r29) = ctx->r13;
L_802784E0:
    // 0x802784E0: cfc1        $t6, $FpcCsr
    ctx->r14 = get_cop1_cs();
    // 0x802784E4: lwc1        $f10, 0x60($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X60);
    // 0x802784E8: ori         $at, $t6, 0x3
    ctx->r1 = ctx->r14 | 0X3;
    // 0x802784EC: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x802784F0: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x802784F4: lw          $t0, 0xAC($sp)
    ctx->r8 = MEM_W(ctx->r29, 0XAC);
    // 0x802784F8: cvt.w.s     $f4, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    ctx->f4.u32l = CVT_W_S(ctx->f10.fl);
    // 0x802784FC: lui         $v0, 0x8009
    ctx->r2 = S32(0X8009 << 16);
    // 0x80278500: ctc1        $t6, $FpcCsr
    set_cop1_cs(ctx->r14);
    // 0x80278504: mfc1        $t7, $f4
    ctx->r15 = (int32_t)ctx->f4.u32l;
    // 0x80278508: sll         $v1, $t2, 2
    ctx->r3 = S32(ctx->r10 << 2);
    // 0x8027850C: cfc1        $t8, $FpcCsr
    ctx->r24 = get_cop1_cs();
    // 0x80278510: sh          $t7, 0x2($t0)
    MEM_H(0X2, ctx->r8) = ctx->r15;
    // 0x80278514: ori         $at, $t8, 0x3
    ctx->r1 = ctx->r24 | 0X3;
    // 0x80278518: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x8027851C: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x80278520: lwc1        $f8, 0x64($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X64);
    // 0x80278524: addiu       $t3, $sp, 0x60
    ctx->r11 = ADD32(ctx->r29, 0X60);
    // 0x80278528: cvt.w.s     $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    ctx->f6.u32l = CVT_W_S(ctx->f8.fl);
    // 0x8027852C: addiu       $t4, $sp, 0x70
    ctx->r12 = ADD32(ctx->r29, 0X70);
    // 0x80278530: mfc1        $t9, $f6
    ctx->r25 = (int32_t)ctx->f6.u32l;
    // 0x80278534: addiu       $t5, $sp, 0x68
    ctx->r13 = ADD32(ctx->r29, 0X68);
    // 0x80278538: sh          $t9, 0x0($t0)
    MEM_H(0X0, ctx->r8) = ctx->r25;
    // 0x8027853C: lw          $v0, 0x3B20($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X3B20);
    // 0x80278540: addu        $a0, $v1, $t5
    ctx->r4 = ADD32(ctx->r3, ctx->r13);
    // 0x80278544: lwc1        $f10, 0x8($v0)
    ctx->f10.u32l = MEM_W(ctx->r2, 0X8);
    // 0x80278548: addu        $a3, $v1, $t4
    ctx->r7 = ADD32(ctx->r3, ctx->r12);
    // 0x8027854C: swc1        $f10, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->f10.u32l;
    // 0x80278550: lwc1        $f4, 0x0($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X0);
    // 0x80278554: addu        $a1, $v1, $t3
    ctx->r5 = ADD32(ctx->r3, ctx->r11);
    // 0x80278558: swc1        $f4, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->f4.u32l;
    // 0x8027855C: lwc1        $f8, 0x4C($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X4C);
    // 0x80278560: ctc1        $t8, $FpcCsr
    set_cop1_cs(ctx->r24);
    // 0x80278564: swc1        $f8, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->f8.u32l;
    // 0x80278568: lwc1        $f6, 0x44($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0X44);
    // 0x8027856C: nop

    // 0x80278570: swc1        $f6, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->f6.u32l;
    // 0x80278574: lw          $a2, 0x0($a0)
    ctx->r6 = MEM_W(ctx->r4, 0X0);
    // 0x80278578: lwc1        $f14, 0x0($a3)
    ctx->f14.u32l = MEM_W(ctx->r7, 0X0);
    // 0x8027857C: lwc1        $f12, 0x0($a1)
    ctx->f12.u32l = MEM_W(ctx->r5, 0X0);
    // 0x80278580: sh          $t1, 0x50($sp)
    MEM_H(0X50, ctx->r29) = ctx->r9;
    // 0x80278584: sw          $a3, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r7;
    // 0x80278588: sw          $a1, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r5;
    // 0x8027858C: sw          $a0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r4;
    // 0x80278590: jal         0x802780E0
    // 0x80278594: sw          $v1, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r3;
    ovl_8024B800_func_802780E0(rdram, ctx);
        goto after_4;
    // 0x80278594: sw          $v1, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r3;
    after_4:
    // 0x80278598: lw          $v1, 0x44($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X44);
    // 0x8027859C: lw          $a0, 0x38($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X38);
    // 0x802785A0: lh          $t1, 0x50($sp)
    ctx->r9 = MEM_H(ctx->r29, 0X50);
    // 0x802785A4: beq         $v0, $zero, L_802785B0
    if (ctx->r2 == 0) {
        // 0x802785A8: addiu       $t6, $sp, 0x58
        ctx->r14 = ADD32(ctx->r29, 0X58);
            goto L_802785B0;
    }
    // 0x802785A8: addiu       $t6, $sp, 0x58
    ctx->r14 = ADD32(ctx->r29, 0X58);
    // 0x802785AC: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
L_802785B0:
    // 0x802785B0: lw          $t7, 0x3C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X3C);
    // 0x802785B4: addu        $a1, $v1, $t6
    ctx->r5 = ADD32(ctx->r3, ctx->r14);
    // 0x802785B8: lwc1        $f12, 0x0($a1)
    ctx->f12.u32l = MEM_W(ctx->r5, 0X0);
    // 0x802785BC: lw          $a2, 0x0($a0)
    ctx->r6 = MEM_W(ctx->r4, 0X0);
    // 0x802785C0: lwc1        $f14, 0x0($t7)
    ctx->f14.u32l = MEM_W(ctx->r15, 0X0);
    // 0x802785C4: sh          $t1, 0x50($sp)
    MEM_H(0X50, ctx->r29) = ctx->r9;
    // 0x802785C8: jal         0x802780E0
    // 0x802785CC: sw          $a1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r5;
    ovl_8024B800_func_802780E0(rdram, ctx);
        goto after_5;
    // 0x802785CC: sw          $a1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r5;
    after_5:
    // 0x802785D0: lw          $a1, 0x34($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X34);
    // 0x802785D4: lh          $t1, 0x50($sp)
    ctx->r9 = MEM_H(ctx->r29, 0X50);
    // 0x802785D8: beq         $v0, $zero, L_80278648
    if (ctx->r2 == 0) {
        // 0x802785DC: nop
    
            goto L_80278648;
    }
    // 0x802785DC: nop

    // 0x802785E0: lh          $t8, 0x52($sp)
    ctx->r24 = MEM_H(ctx->r29, 0X52);
    // 0x802785E4: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
    // 0x802785E8: beq         $t8, $zero, L_80278648
    if (ctx->r24 == 0) {
        // 0x802785EC: nop
    
            goto L_80278648;
    }
    // 0x802785EC: nop

    // 0x802785F0: cfc1        $t9, $FpcCsr
    ctx->r25 = get_cop1_cs();
    // 0x802785F4: lwc1        $f10, 0x58($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X58);
    // 0x802785F8: ori         $at, $t9, 0x3
    ctx->r1 = ctx->r25 | 0X3;
    // 0x802785FC: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x80278600: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x80278604: lw          $t4, 0xAC($sp)
    ctx->r12 = MEM_W(ctx->r29, 0XAC);
    // 0x80278608: cvt.w.s     $f4, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    ctx->f4.u32l = CVT_W_S(ctx->f10.fl);
    // 0x8027860C: ctc1        $t9, $FpcCsr
    set_cop1_cs(ctx->r25);
    // 0x80278610: mfc1        $t3, $f4
    ctx->r11 = (int32_t)ctx->f4.u32l;
    // 0x80278614: nop

    // 0x80278618: cfc1        $t5, $FpcCsr
    ctx->r13 = get_cop1_cs();
    // 0x8027861C: sh          $t3, 0x2($t4)
    MEM_H(0X2, ctx->r12) = ctx->r11;
    // 0x80278620: ori         $at, $t5, 0x3
    ctx->r1 = ctx->r13 | 0X3;
    // 0x80278624: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x80278628: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x8027862C: lwc1        $f8, 0x5C($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X5C);
    // 0x80278630: nop

    // 0x80278634: cvt.w.s     $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    ctx->f6.u32l = CVT_W_S(ctx->f8.fl);
    // 0x80278638: mfc1        $t6, $f6
    ctx->r14 = (int32_t)ctx->f6.u32l;
    // 0x8027863C: ctc1        $t5, $FpcCsr
    set_cop1_cs(ctx->r13);
    // 0x80278640: sh          $t6, 0x0($t4)
    MEM_H(0X0, ctx->r12) = ctx->r14;
    // 0x80278644: nop

L_80278648:
    // 0x80278648: bne         $t1, $zero, L_802786E4
    if (ctx->r9 != 0) {
        // 0x8027864C: or          $v0, $t1, $zero
        ctx->r2 = ctx->r9 | 0;
            goto L_802786E4;
    }
    // 0x8027864C: or          $v0, $t1, $zero
    ctx->r2 = ctx->r9 | 0;
    // 0x80278650: lw          $t7, 0x3C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X3C);
    // 0x80278654: lw          $t8, 0x40($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X40);
    // 0x80278658: lw          $a2, 0x0($a1)
    ctx->r6 = MEM_W(ctx->r5, 0X0);
    // 0x8027865C: lwc1        $f12, 0x0($t7)
    ctx->f12.u32l = MEM_W(ctx->r15, 0X0);
    // 0x80278660: lwc1        $f14, 0x0($t8)
    ctx->f14.u32l = MEM_W(ctx->r24, 0X0);
    // 0x80278664: jal         0x802780E0
    // 0x80278668: sh          $t1, 0x50($sp)
    MEM_H(0X50, ctx->r29) = ctx->r9;
    ovl_8024B800_func_802780E0(rdram, ctx);
        goto after_6;
    // 0x80278668: sh          $t1, 0x50($sp)
    MEM_H(0X50, ctx->r29) = ctx->r9;
    after_6:
    // 0x8027866C: lh          $t1, 0x50($sp)
    ctx->r9 = MEM_H(ctx->r29, 0X50);
    // 0x80278670: beq         $v0, $zero, L_802786E4
    if (ctx->r2 == 0) {
        // 0x80278674: or          $v0, $t1, $zero
        ctx->r2 = ctx->r9 | 0;
            goto L_802786E4;
    }
    // 0x80278674: or          $v0, $t1, $zero
    ctx->r2 = ctx->r9 | 0;
    // 0x80278678: lh          $t9, 0x52($sp)
    ctx->r25 = MEM_H(ctx->r29, 0X52);
    // 0x8027867C: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
    // 0x80278680: beq         $t9, $zero, L_802786E4
    if (ctx->r25 == 0) {
        // 0x80278684: or          $v0, $t1, $zero
        ctx->r2 = ctx->r9 | 0;
            goto L_802786E4;
    }
    // 0x80278684: or          $v0, $t1, $zero
    ctx->r2 = ctx->r9 | 0;
    // 0x80278688: cfc1        $t3, $FpcCsr
    ctx->r11 = get_cop1_cs();
    // 0x8027868C: lwc1        $f10, 0x58($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X58);
    // 0x80278690: ori         $at, $t3, 0x3
    ctx->r1 = ctx->r11 | 0X3;
    // 0x80278694: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x80278698: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x8027869C: lw          $t6, 0xAC($sp)
    ctx->r14 = MEM_W(ctx->r29, 0XAC);
    // 0x802786A0: cvt.w.s     $f4, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    ctx->f4.u32l = CVT_W_S(ctx->f10.fl);
    // 0x802786A4: ctc1        $t3, $FpcCsr
    set_cop1_cs(ctx->r11);
    // 0x802786A8: mfc1        $t5, $f4
    ctx->r13 = (int32_t)ctx->f4.u32l;
    // 0x802786AC: nop

    // 0x802786B0: cfc1        $t4, $FpcCsr
    ctx->r12 = get_cop1_cs();
    // 0x802786B4: sh          $t5, 0x2($t6)
    MEM_H(0X2, ctx->r14) = ctx->r13;
    // 0x802786B8: ori         $at, $t4, 0x3
    ctx->r1 = ctx->r12 | 0X3;
    // 0x802786BC: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x802786C0: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x802786C4: lwc1        $f8, 0x5C($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X5C);
    // 0x802786C8: nop

    // 0x802786CC: cvt.w.s     $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    ctx->f6.u32l = CVT_W_S(ctx->f8.fl);
    // 0x802786D0: mfc1        $t7, $f6
    ctx->r15 = (int32_t)ctx->f6.u32l;
    // 0x802786D4: ctc1        $t4, $FpcCsr
    set_cop1_cs(ctx->r12);
    // 0x802786D8: sh          $t7, 0x0($t6)
    MEM_H(0X0, ctx->r14) = ctx->r15;
    // 0x802786DC: nop

    // 0x802786E0: or          $v0, $t1, $zero
    ctx->r2 = ctx->r9 | 0;
L_802786E4:
    // 0x802786E4: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x802786E8: lwc1        $f21, 0x10($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X10);
    // 0x802786EC: lwc1        $f20, 0x14($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X14);
    // 0x802786F0: lwc1        $f23, 0x18($sp)
    ctx->f_odd[(23 - 1) * 2] = MEM_W(ctx->r29, 0X18);
    // 0x802786F4: lwc1        $f22, 0x1C($sp)
    ctx->f22.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x802786F8: jr          $ra
    // 0x802786FC: addiu       $sp, $sp, 0xA0
    ctx->r29 = ADD32(ctx->r29, 0XA0);
    return;
    // 0x802786FC: addiu       $sp, $sp, 0xA0
    ctx->r29 = ADD32(ctx->r29, 0XA0);
;}
RECOMP_FUNC void ovl_8024B800_func_802784C0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802784C0: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x802784C4: mul.s       $f4, $f22, $f22
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f22.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f4.fl = MUL_S(ctx->f22.fl, ctx->f22.fl);
    // 0x802784C8: add.s       $f6, $f10, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f10.fl + ctx->f4.fl;
    // 0x802784CC: c.lt.s      $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f8.fl < ctx->f6.fl;
    // 0x802784D0: nop

    // 0x802784D4: bc1f        L_802784E0
    if (!c1cs) {
        // 0x802784D8: nop
    
            goto L_802784E0;
    }
    // 0x802784D8: nop

    // 0x802784DC: sh          $t5, 0x52($sp)
    MEM_H(0X52, ctx->r29) = ctx->r13;
L_802784E0:
    // 0x802784E0: cfc1        $t6, $FpcCsr
    ctx->r14 = get_cop1_cs();
    // 0x802784E4: lwc1        $f10, 0x60($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X60);
    // 0x802784E8: ori         $at, $t6, 0x3
    ctx->r1 = ctx->r14 | 0X3;
    // 0x802784EC: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x802784F0: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x802784F4: lw          $t0, 0xAC($sp)
    ctx->r8 = MEM_W(ctx->r29, 0XAC);
    // 0x802784F8: cvt.w.s     $f4, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    ctx->f4.u32l = CVT_W_S(ctx->f10.fl);
    // 0x802784FC: lui         $v0, 0x8009
    ctx->r2 = S32(0X8009 << 16);
    // 0x80278500: ctc1        $t6, $FpcCsr
    set_cop1_cs(ctx->r14);
    // 0x80278504: mfc1        $t7, $f4
    ctx->r15 = (int32_t)ctx->f4.u32l;
    // 0x80278508: sll         $v1, $t2, 2
    ctx->r3 = S32(ctx->r10 << 2);
    // 0x8027850C: cfc1        $t8, $FpcCsr
    ctx->r24 = get_cop1_cs();
    // 0x80278510: sh          $t7, 0x2($t0)
    MEM_H(0X2, ctx->r8) = ctx->r15;
    // 0x80278514: ori         $at, $t8, 0x3
    ctx->r1 = ctx->r24 | 0X3;
    // 0x80278518: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x8027851C: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x80278520: lwc1        $f8, 0x64($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X64);
    // 0x80278524: addiu       $t3, $sp, 0x60
    ctx->r11 = ADD32(ctx->r29, 0X60);
    // 0x80278528: cvt.w.s     $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    ctx->f6.u32l = CVT_W_S(ctx->f8.fl);
    // 0x8027852C: addiu       $t4, $sp, 0x70
    ctx->r12 = ADD32(ctx->r29, 0X70);
    // 0x80278530: mfc1        $t9, $f6
    ctx->r25 = (int32_t)ctx->f6.u32l;
    // 0x80278534: addiu       $t5, $sp, 0x68
    ctx->r13 = ADD32(ctx->r29, 0X68);
    // 0x80278538: sh          $t9, 0x0($t0)
    MEM_H(0X0, ctx->r8) = ctx->r25;
    // 0x8027853C: lw          $v0, 0x3B20($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X3B20);
    // 0x80278540: addu        $a0, $v1, $t5
    ctx->r4 = ADD32(ctx->r3, ctx->r13);
    // 0x80278544: lwc1        $f10, 0x8($v0)
    ctx->f10.u32l = MEM_W(ctx->r2, 0X8);
    // 0x80278548: addu        $a3, $v1, $t4
    ctx->r7 = ADD32(ctx->r3, ctx->r12);
    // 0x8027854C: swc1        $f10, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->f10.u32l;
    // 0x80278550: lwc1        $f4, 0x0($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X0);
    // 0x80278554: addu        $a1, $v1, $t3
    ctx->r5 = ADD32(ctx->r3, ctx->r11);
    // 0x80278558: swc1        $f4, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->f4.u32l;
    // 0x8027855C: lwc1        $f8, 0x4C($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X4C);
    // 0x80278560: ctc1        $t8, $FpcCsr
    set_cop1_cs(ctx->r24);
    // 0x80278564: swc1        $f8, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->f8.u32l;
    // 0x80278568: lwc1        $f6, 0x44($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0X44);
    // 0x8027856C: nop

    // 0x80278570: swc1        $f6, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->f6.u32l;
    // 0x80278574: lw          $a2, 0x0($a0)
    ctx->r6 = MEM_W(ctx->r4, 0X0);
    // 0x80278578: lwc1        $f14, 0x0($a3)
    ctx->f14.u32l = MEM_W(ctx->r7, 0X0);
    // 0x8027857C: lwc1        $f12, 0x0($a1)
    ctx->f12.u32l = MEM_W(ctx->r5, 0X0);
    // 0x80278580: sh          $t1, 0x50($sp)
    MEM_H(0X50, ctx->r29) = ctx->r9;
    // 0x80278584: sw          $a3, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r7;
    // 0x80278588: sw          $a1, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r5;
    // 0x8027858C: sw          $a0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r4;
    // 0x80278590: jal         0x802780E0
    // 0x80278594: sw          $v1, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r3;
    ovl_8024B800_func_802780E0(rdram, ctx);
        goto after_0;
    // 0x80278594: sw          $v1, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r3;
    after_0:
    // 0x80278598: lw          $v1, 0x44($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X44);
    // 0x8027859C: lw          $a0, 0x38($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X38);
    // 0x802785A0: lh          $t1, 0x50($sp)
    ctx->r9 = MEM_H(ctx->r29, 0X50);
    // 0x802785A4: beq         $v0, $zero, L_802785B0
    if (ctx->r2 == 0) {
        // 0x802785A8: addiu       $t6, $sp, 0x58
        ctx->r14 = ADD32(ctx->r29, 0X58);
            goto L_802785B0;
    }
    // 0x802785A8: addiu       $t6, $sp, 0x58
    ctx->r14 = ADD32(ctx->r29, 0X58);
    // 0x802785AC: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
L_802785B0:
    // 0x802785B0: lw          $t7, 0x3C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X3C);
    // 0x802785B4: addu        $a1, $v1, $t6
    ctx->r5 = ADD32(ctx->r3, ctx->r14);
    // 0x802785B8: lwc1        $f12, 0x0($a1)
    ctx->f12.u32l = MEM_W(ctx->r5, 0X0);
    // 0x802785BC: lw          $a2, 0x0($a0)
    ctx->r6 = MEM_W(ctx->r4, 0X0);
    // 0x802785C0: lwc1        $f14, 0x0($t7)
    ctx->f14.u32l = MEM_W(ctx->r15, 0X0);
    // 0x802785C4: sh          $t1, 0x50($sp)
    MEM_H(0X50, ctx->r29) = ctx->r9;
    // 0x802785C8: jal         0x802780E0
    // 0x802785CC: sw          $a1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r5;
    ovl_8024B800_func_802780E0(rdram, ctx);
        goto after_1;
    // 0x802785CC: sw          $a1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r5;
    after_1:
    // 0x802785D0: lw          $a1, 0x34($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X34);
    // 0x802785D4: lh          $t1, 0x50($sp)
    ctx->r9 = MEM_H(ctx->r29, 0X50);
    // 0x802785D8: beq         $v0, $zero, L_80278648
    if (ctx->r2 == 0) {
        // 0x802785DC: nop
    
            goto L_80278648;
    }
    // 0x802785DC: nop

    // 0x802785E0: lh          $t8, 0x52($sp)
    ctx->r24 = MEM_H(ctx->r29, 0X52);
    // 0x802785E4: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
    // 0x802785E8: beq         $t8, $zero, L_80278648
    if (ctx->r24 == 0) {
        // 0x802785EC: nop
    
            goto L_80278648;
    }
    // 0x802785EC: nop

    // 0x802785F0: cfc1        $t9, $FpcCsr
    ctx->r25 = get_cop1_cs();
    // 0x802785F4: lwc1        $f10, 0x58($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X58);
    // 0x802785F8: ori         $at, $t9, 0x3
    ctx->r1 = ctx->r25 | 0X3;
    // 0x802785FC: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x80278600: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x80278604: lw          $t4, 0xAC($sp)
    ctx->r12 = MEM_W(ctx->r29, 0XAC);
    // 0x80278608: cvt.w.s     $f4, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    ctx->f4.u32l = CVT_W_S(ctx->f10.fl);
    // 0x8027860C: ctc1        $t9, $FpcCsr
    set_cop1_cs(ctx->r25);
    // 0x80278610: mfc1        $t3, $f4
    ctx->r11 = (int32_t)ctx->f4.u32l;
    // 0x80278614: nop

    // 0x80278618: cfc1        $t5, $FpcCsr
    ctx->r13 = get_cop1_cs();
    // 0x8027861C: sh          $t3, 0x2($t4)
    MEM_H(0X2, ctx->r12) = ctx->r11;
    // 0x80278620: ori         $at, $t5, 0x3
    ctx->r1 = ctx->r13 | 0X3;
    // 0x80278624: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x80278628: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x8027862C: lwc1        $f8, 0x5C($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X5C);
    // 0x80278630: nop

    // 0x80278634: cvt.w.s     $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    ctx->f6.u32l = CVT_W_S(ctx->f8.fl);
    // 0x80278638: mfc1        $t6, $f6
    ctx->r14 = (int32_t)ctx->f6.u32l;
    // 0x8027863C: ctc1        $t5, $FpcCsr
    set_cop1_cs(ctx->r13);
    // 0x80278640: sh          $t6, 0x0($t4)
    MEM_H(0X0, ctx->r12) = ctx->r14;
    // 0x80278644: nop

L_80278648:
    // 0x80278648: bne         $t1, $zero, L_802786E4
    if (ctx->r9 != 0) {
        // 0x8027864C: or          $v0, $t1, $zero
        ctx->r2 = ctx->r9 | 0;
            goto L_802786E4;
    }
    // 0x8027864C: or          $v0, $t1, $zero
    ctx->r2 = ctx->r9 | 0;
    // 0x80278650: lw          $t7, 0x3C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X3C);
    // 0x80278654: lw          $t8, 0x40($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X40);
    // 0x80278658: lw          $a2, 0x0($a1)
    ctx->r6 = MEM_W(ctx->r5, 0X0);
    // 0x8027865C: lwc1        $f12, 0x0($t7)
    ctx->f12.u32l = MEM_W(ctx->r15, 0X0);
    // 0x80278660: lwc1        $f14, 0x0($t8)
    ctx->f14.u32l = MEM_W(ctx->r24, 0X0);
    // 0x80278664: jal         0x802780E0
    // 0x80278668: sh          $t1, 0x50($sp)
    MEM_H(0X50, ctx->r29) = ctx->r9;
    ovl_8024B800_func_802780E0(rdram, ctx);
        goto after_2;
    // 0x80278668: sh          $t1, 0x50($sp)
    MEM_H(0X50, ctx->r29) = ctx->r9;
    after_2:
    // 0x8027866C: lh          $t1, 0x50($sp)
    ctx->r9 = MEM_H(ctx->r29, 0X50);
    // 0x80278670: beq         $v0, $zero, L_802786E4
    if (ctx->r2 == 0) {
        // 0x80278674: or          $v0, $t1, $zero
        ctx->r2 = ctx->r9 | 0;
            goto L_802786E4;
    }
    // 0x80278674: or          $v0, $t1, $zero
    ctx->r2 = ctx->r9 | 0;
    // 0x80278678: lh          $t9, 0x52($sp)
    ctx->r25 = MEM_H(ctx->r29, 0X52);
    // 0x8027867C: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
    // 0x80278680: beq         $t9, $zero, L_802786E4
    if (ctx->r25 == 0) {
        // 0x80278684: or          $v0, $t1, $zero
        ctx->r2 = ctx->r9 | 0;
            goto L_802786E4;
    }
    // 0x80278684: or          $v0, $t1, $zero
    ctx->r2 = ctx->r9 | 0;
    // 0x80278688: cfc1        $t3, $FpcCsr
    ctx->r11 = get_cop1_cs();
    // 0x8027868C: lwc1        $f10, 0x58($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X58);
    // 0x80278690: ori         $at, $t3, 0x3
    ctx->r1 = ctx->r11 | 0X3;
    // 0x80278694: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x80278698: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x8027869C: lw          $t6, 0xAC($sp)
    ctx->r14 = MEM_W(ctx->r29, 0XAC);
    // 0x802786A0: cvt.w.s     $f4, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    ctx->f4.u32l = CVT_W_S(ctx->f10.fl);
    // 0x802786A4: ctc1        $t3, $FpcCsr
    set_cop1_cs(ctx->r11);
    // 0x802786A8: mfc1        $t5, $f4
    ctx->r13 = (int32_t)ctx->f4.u32l;
    // 0x802786AC: nop

    // 0x802786B0: cfc1        $t4, $FpcCsr
    ctx->r12 = get_cop1_cs();
    // 0x802786B4: sh          $t5, 0x2($t6)
    MEM_H(0X2, ctx->r14) = ctx->r13;
    // 0x802786B8: ori         $at, $t4, 0x3
    ctx->r1 = ctx->r12 | 0X3;
    // 0x802786BC: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x802786C0: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x802786C4: lwc1        $f8, 0x5C($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X5C);
    // 0x802786C8: nop

    // 0x802786CC: cvt.w.s     $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    ctx->f6.u32l = CVT_W_S(ctx->f8.fl);
    // 0x802786D0: mfc1        $t7, $f6
    ctx->r15 = (int32_t)ctx->f6.u32l;
    // 0x802786D4: ctc1        $t4, $FpcCsr
    set_cop1_cs(ctx->r12);
    // 0x802786D8: sh          $t7, 0x0($t6)
    MEM_H(0X0, ctx->r14) = ctx->r15;
    // 0x802786DC: nop

    // 0x802786E0: or          $v0, $t1, $zero
    ctx->r2 = ctx->r9 | 0;
L_802786E4:
    // 0x802786E4: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x802786E8: lwc1        $f21, 0x10($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X10);
    // 0x802786EC: lwc1        $f20, 0x14($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X14);
    // 0x802786F0: lwc1        $f23, 0x18($sp)
    ctx->f_odd[(23 - 1) * 2] = MEM_W(ctx->r29, 0X18);
    // 0x802786F4: lwc1        $f22, 0x1C($sp)
    ctx->f22.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x802786F8: jr          $ra
    // 0x802786FC: addiu       $sp, $sp, 0xA0
    ctx->r29 = ADD32(ctx->r29, 0XA0);
    return;
    // 0x802786FC: addiu       $sp, $sp, 0xA0
    ctx->r29 = ADD32(ctx->r29, 0XA0);
;}
RECOMP_FUNC void ovl_8024B800_func_80278584(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80278584: sw          $a3, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r7;
    // 0x80278588: sw          $a1, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r5;
    // 0x8027858C: sw          $a0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r4;
    // 0x80278590: jal         0x802780E0
    // 0x80278594: sw          $v1, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r3;
    ovl_8024B800_func_802780E0(rdram, ctx);
        goto after_0;
    // 0x80278594: sw          $v1, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r3;
    after_0:
    // 0x80278598: lw          $v1, 0x44($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X44);
    // 0x8027859C: lw          $a0, 0x38($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X38);
    // 0x802785A0: lh          $t1, 0x50($sp)
    ctx->r9 = MEM_H(ctx->r29, 0X50);
    // 0x802785A4: beq         $v0, $zero, L_802785B0
    if (ctx->r2 == 0) {
        // 0x802785A8: addiu       $t6, $sp, 0x58
        ctx->r14 = ADD32(ctx->r29, 0X58);
            goto L_802785B0;
    }
    // 0x802785A8: addiu       $t6, $sp, 0x58
    ctx->r14 = ADD32(ctx->r29, 0X58);
    // 0x802785AC: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
L_802785B0:
    // 0x802785B0: lw          $t7, 0x3C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X3C);
    // 0x802785B4: addu        $a1, $v1, $t6
    ctx->r5 = ADD32(ctx->r3, ctx->r14);
    // 0x802785B8: lwc1        $f12, 0x0($a1)
    ctx->f12.u32l = MEM_W(ctx->r5, 0X0);
    // 0x802785BC: lw          $a2, 0x0($a0)
    ctx->r6 = MEM_W(ctx->r4, 0X0);
    // 0x802785C0: lwc1        $f14, 0x0($t7)
    ctx->f14.u32l = MEM_W(ctx->r15, 0X0);
    // 0x802785C4: sh          $t1, 0x50($sp)
    MEM_H(0X50, ctx->r29) = ctx->r9;
    // 0x802785C8: jal         0x802780E0
    // 0x802785CC: sw          $a1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r5;
    ovl_8024B800_func_802780E0(rdram, ctx);
        goto after_1;
    // 0x802785CC: sw          $a1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r5;
    after_1:
    // 0x802785D0: lw          $a1, 0x34($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X34);
    // 0x802785D4: lh          $t1, 0x50($sp)
    ctx->r9 = MEM_H(ctx->r29, 0X50);
    // 0x802785D8: beq         $v0, $zero, L_80278648
    if (ctx->r2 == 0) {
        // 0x802785DC: nop
    
            goto L_80278648;
    }
    // 0x802785DC: nop

    // 0x802785E0: lh          $t8, 0x52($sp)
    ctx->r24 = MEM_H(ctx->r29, 0X52);
    // 0x802785E4: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
    // 0x802785E8: beq         $t8, $zero, L_80278648
    if (ctx->r24 == 0) {
        // 0x802785EC: nop
    
            goto L_80278648;
    }
    // 0x802785EC: nop

    // 0x802785F0: cfc1        $t9, $FpcCsr
    ctx->r25 = get_cop1_cs();
    // 0x802785F4: lwc1        $f10, 0x58($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X58);
    // 0x802785F8: ori         $at, $t9, 0x3
    ctx->r1 = ctx->r25 | 0X3;
    // 0x802785FC: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x80278600: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x80278604: lw          $t4, 0xAC($sp)
    ctx->r12 = MEM_W(ctx->r29, 0XAC);
    // 0x80278608: cvt.w.s     $f4, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    ctx->f4.u32l = CVT_W_S(ctx->f10.fl);
    // 0x8027860C: ctc1        $t9, $FpcCsr
    set_cop1_cs(ctx->r25);
    // 0x80278610: mfc1        $t3, $f4
    ctx->r11 = (int32_t)ctx->f4.u32l;
    // 0x80278614: nop

    // 0x80278618: cfc1        $t5, $FpcCsr
    ctx->r13 = get_cop1_cs();
    // 0x8027861C: sh          $t3, 0x2($t4)
    MEM_H(0X2, ctx->r12) = ctx->r11;
    // 0x80278620: ori         $at, $t5, 0x3
    ctx->r1 = ctx->r13 | 0X3;
    // 0x80278624: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x80278628: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x8027862C: lwc1        $f8, 0x5C($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X5C);
    // 0x80278630: nop

    // 0x80278634: cvt.w.s     $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    ctx->f6.u32l = CVT_W_S(ctx->f8.fl);
    // 0x80278638: mfc1        $t6, $f6
    ctx->r14 = (int32_t)ctx->f6.u32l;
    // 0x8027863C: ctc1        $t5, $FpcCsr
    set_cop1_cs(ctx->r13);
    // 0x80278640: sh          $t6, 0x0($t4)
    MEM_H(0X0, ctx->r12) = ctx->r14;
    // 0x80278644: nop

L_80278648:
    // 0x80278648: bne         $t1, $zero, L_802786E4
    if (ctx->r9 != 0) {
        // 0x8027864C: or          $v0, $t1, $zero
        ctx->r2 = ctx->r9 | 0;
            goto L_802786E4;
    }
    // 0x8027864C: or          $v0, $t1, $zero
    ctx->r2 = ctx->r9 | 0;
    // 0x80278650: lw          $t7, 0x3C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X3C);
    // 0x80278654: lw          $t8, 0x40($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X40);
    // 0x80278658: lw          $a2, 0x0($a1)
    ctx->r6 = MEM_W(ctx->r5, 0X0);
    // 0x8027865C: lwc1        $f12, 0x0($t7)
    ctx->f12.u32l = MEM_W(ctx->r15, 0X0);
    // 0x80278660: lwc1        $f14, 0x0($t8)
    ctx->f14.u32l = MEM_W(ctx->r24, 0X0);
    // 0x80278664: jal         0x802780E0
    // 0x80278668: sh          $t1, 0x50($sp)
    MEM_H(0X50, ctx->r29) = ctx->r9;
    ovl_8024B800_func_802780E0(rdram, ctx);
        goto after_2;
    // 0x80278668: sh          $t1, 0x50($sp)
    MEM_H(0X50, ctx->r29) = ctx->r9;
    after_2:
    // 0x8027866C: lh          $t1, 0x50($sp)
    ctx->r9 = MEM_H(ctx->r29, 0X50);
    // 0x80278670: beq         $v0, $zero, L_802786E4
    if (ctx->r2 == 0) {
        // 0x80278674: or          $v0, $t1, $zero
        ctx->r2 = ctx->r9 | 0;
            goto L_802786E4;
    }
    // 0x80278674: or          $v0, $t1, $zero
    ctx->r2 = ctx->r9 | 0;
    // 0x80278678: lh          $t9, 0x52($sp)
    ctx->r25 = MEM_H(ctx->r29, 0X52);
    // 0x8027867C: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
    // 0x80278680: beq         $t9, $zero, L_802786E4
    if (ctx->r25 == 0) {
        // 0x80278684: or          $v0, $t1, $zero
        ctx->r2 = ctx->r9 | 0;
            goto L_802786E4;
    }
    // 0x80278684: or          $v0, $t1, $zero
    ctx->r2 = ctx->r9 | 0;
    // 0x80278688: cfc1        $t3, $FpcCsr
    ctx->r11 = get_cop1_cs();
    // 0x8027868C: lwc1        $f10, 0x58($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X58);
    // 0x80278690: ori         $at, $t3, 0x3
    ctx->r1 = ctx->r11 | 0X3;
    // 0x80278694: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x80278698: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x8027869C: lw          $t6, 0xAC($sp)
    ctx->r14 = MEM_W(ctx->r29, 0XAC);
    // 0x802786A0: cvt.w.s     $f4, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    ctx->f4.u32l = CVT_W_S(ctx->f10.fl);
    // 0x802786A4: ctc1        $t3, $FpcCsr
    set_cop1_cs(ctx->r11);
    // 0x802786A8: mfc1        $t5, $f4
    ctx->r13 = (int32_t)ctx->f4.u32l;
    // 0x802786AC: nop

    // 0x802786B0: cfc1        $t4, $FpcCsr
    ctx->r12 = get_cop1_cs();
    // 0x802786B4: sh          $t5, 0x2($t6)
    MEM_H(0X2, ctx->r14) = ctx->r13;
    // 0x802786B8: ori         $at, $t4, 0x3
    ctx->r1 = ctx->r12 | 0X3;
    // 0x802786BC: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x802786C0: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x802786C4: lwc1        $f8, 0x5C($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X5C);
    // 0x802786C8: nop

    // 0x802786CC: cvt.w.s     $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    ctx->f6.u32l = CVT_W_S(ctx->f8.fl);
    // 0x802786D0: mfc1        $t7, $f6
    ctx->r15 = (int32_t)ctx->f6.u32l;
    // 0x802786D4: ctc1        $t4, $FpcCsr
    set_cop1_cs(ctx->r12);
    // 0x802786D8: sh          $t7, 0x0($t6)
    MEM_H(0X0, ctx->r14) = ctx->r15;
    // 0x802786DC: nop

    // 0x802786E0: or          $v0, $t1, $zero
    ctx->r2 = ctx->r9 | 0;
L_802786E4:
    // 0x802786E4: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x802786E8: lwc1        $f21, 0x10($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X10);
    // 0x802786EC: lwc1        $f20, 0x14($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X14);
    // 0x802786F0: lwc1        $f23, 0x18($sp)
    ctx->f_odd[(23 - 1) * 2] = MEM_W(ctx->r29, 0X18);
    // 0x802786F4: lwc1        $f22, 0x1C($sp)
    ctx->f22.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x802786F8: jr          $ra
    // 0x802786FC: addiu       $sp, $sp, 0xA0
    ctx->r29 = ADD32(ctx->r29, 0XA0);
    return;
    // 0x802786FC: addiu       $sp, $sp, 0xA0
    ctx->r29 = ADD32(ctx->r29, 0XA0);
;}
RECOMP_FUNC void ovl_8024B800_func_802785E0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802785E0: lh          $t8, 0x52($sp)
    ctx->r24 = MEM_H(ctx->r29, 0X52);
    // 0x802785E4: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
    // 0x802785E8: beq         $t8, $zero, L_80278648
    if (ctx->r24 == 0) {
        // 0x802785EC: nop
    
            goto L_80278648;
    }
    // 0x802785EC: nop

    // 0x802785F0: cfc1        $t9, $FpcCsr
    ctx->r25 = get_cop1_cs();
    // 0x802785F4: lwc1        $f10, 0x58($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X58);
    // 0x802785F8: ori         $at, $t9, 0x3
    ctx->r1 = ctx->r25 | 0X3;
    // 0x802785FC: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x80278600: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x80278604: lw          $t4, 0xAC($sp)
    ctx->r12 = MEM_W(ctx->r29, 0XAC);
    // 0x80278608: cvt.w.s     $f4, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    ctx->f4.u32l = CVT_W_S(ctx->f10.fl);
    // 0x8027860C: ctc1        $t9, $FpcCsr
    set_cop1_cs(ctx->r25);
    // 0x80278610: mfc1        $t3, $f4
    ctx->r11 = (int32_t)ctx->f4.u32l;
    // 0x80278614: nop

    // 0x80278618: cfc1        $t5, $FpcCsr
    ctx->r13 = get_cop1_cs();
    // 0x8027861C: sh          $t3, 0x2($t4)
    MEM_H(0X2, ctx->r12) = ctx->r11;
    // 0x80278620: ori         $at, $t5, 0x3
    ctx->r1 = ctx->r13 | 0X3;
    // 0x80278624: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x80278628: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x8027862C: lwc1        $f8, 0x5C($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X5C);
    // 0x80278630: nop

    // 0x80278634: cvt.w.s     $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    ctx->f6.u32l = CVT_W_S(ctx->f8.fl);
    // 0x80278638: mfc1        $t6, $f6
    ctx->r14 = (int32_t)ctx->f6.u32l;
    // 0x8027863C: ctc1        $t5, $FpcCsr
    set_cop1_cs(ctx->r13);
    // 0x80278640: sh          $t6, 0x0($t4)
    MEM_H(0X0, ctx->r12) = ctx->r14;
    // 0x80278644: nop

L_80278648:
    // 0x80278648: bne         $t1, $zero, L_802786E4
    if (ctx->r9 != 0) {
        // 0x8027864C: or          $v0, $t1, $zero
        ctx->r2 = ctx->r9 | 0;
            goto L_802786E4;
    }
    // 0x8027864C: or          $v0, $t1, $zero
    ctx->r2 = ctx->r9 | 0;
    // 0x80278650: lw          $t7, 0x3C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X3C);
    // 0x80278654: lw          $t8, 0x40($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X40);
    // 0x80278658: lw          $a2, 0x0($a1)
    ctx->r6 = MEM_W(ctx->r5, 0X0);
    // 0x8027865C: lwc1        $f12, 0x0($t7)
    ctx->f12.u32l = MEM_W(ctx->r15, 0X0);
    // 0x80278660: lwc1        $f14, 0x0($t8)
    ctx->f14.u32l = MEM_W(ctx->r24, 0X0);
    // 0x80278664: jal         0x802780E0
    // 0x80278668: sh          $t1, 0x50($sp)
    MEM_H(0X50, ctx->r29) = ctx->r9;
    ovl_8024B800_func_802780E0(rdram, ctx);
        goto after_0;
    // 0x80278668: sh          $t1, 0x50($sp)
    MEM_H(0X50, ctx->r29) = ctx->r9;
    after_0:
    // 0x8027866C: lh          $t1, 0x50($sp)
    ctx->r9 = MEM_H(ctx->r29, 0X50);
    // 0x80278670: beq         $v0, $zero, L_802786E4
    if (ctx->r2 == 0) {
        // 0x80278674: or          $v0, $t1, $zero
        ctx->r2 = ctx->r9 | 0;
            goto L_802786E4;
    }
    // 0x80278674: or          $v0, $t1, $zero
    ctx->r2 = ctx->r9 | 0;
    // 0x80278678: lh          $t9, 0x52($sp)
    ctx->r25 = MEM_H(ctx->r29, 0X52);
    // 0x8027867C: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
    // 0x80278680: beq         $t9, $zero, L_802786E4
    if (ctx->r25 == 0) {
        // 0x80278684: or          $v0, $t1, $zero
        ctx->r2 = ctx->r9 | 0;
            goto L_802786E4;
    }
    // 0x80278684: or          $v0, $t1, $zero
    ctx->r2 = ctx->r9 | 0;
    // 0x80278688: cfc1        $t3, $FpcCsr
    ctx->r11 = get_cop1_cs();
    // 0x8027868C: lwc1        $f10, 0x58($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X58);
    // 0x80278690: ori         $at, $t3, 0x3
    ctx->r1 = ctx->r11 | 0X3;
    // 0x80278694: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x80278698: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x8027869C: lw          $t6, 0xAC($sp)
    ctx->r14 = MEM_W(ctx->r29, 0XAC);
    // 0x802786A0: cvt.w.s     $f4, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    ctx->f4.u32l = CVT_W_S(ctx->f10.fl);
    // 0x802786A4: ctc1        $t3, $FpcCsr
    set_cop1_cs(ctx->r11);
    // 0x802786A8: mfc1        $t5, $f4
    ctx->r13 = (int32_t)ctx->f4.u32l;
    // 0x802786AC: nop

    // 0x802786B0: cfc1        $t4, $FpcCsr
    ctx->r12 = get_cop1_cs();
    // 0x802786B4: sh          $t5, 0x2($t6)
    MEM_H(0X2, ctx->r14) = ctx->r13;
    // 0x802786B8: ori         $at, $t4, 0x3
    ctx->r1 = ctx->r12 | 0X3;
    // 0x802786BC: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x802786C0: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x802786C4: lwc1        $f8, 0x5C($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X5C);
    // 0x802786C8: nop

    // 0x802786CC: cvt.w.s     $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    ctx->f6.u32l = CVT_W_S(ctx->f8.fl);
    // 0x802786D0: mfc1        $t7, $f6
    ctx->r15 = (int32_t)ctx->f6.u32l;
    // 0x802786D4: ctc1        $t4, $FpcCsr
    set_cop1_cs(ctx->r12);
    // 0x802786D8: sh          $t7, 0x0($t6)
    MEM_H(0X0, ctx->r14) = ctx->r15;
    // 0x802786DC: nop

    // 0x802786E0: or          $v0, $t1, $zero
    ctx->r2 = ctx->r9 | 0;
L_802786E4:
    // 0x802786E4: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x802786E8: lwc1        $f21, 0x10($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X10);
    // 0x802786EC: lwc1        $f20, 0x14($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X14);
    // 0x802786F0: lwc1        $f23, 0x18($sp)
    ctx->f_odd[(23 - 1) * 2] = MEM_W(ctx->r29, 0X18);
    // 0x802786F4: lwc1        $f22, 0x1C($sp)
    ctx->f22.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x802786F8: jr          $ra
    // 0x802786FC: addiu       $sp, $sp, 0xA0
    ctx->r29 = ADD32(ctx->r29, 0XA0);
    return;
    // 0x802786FC: addiu       $sp, $sp, 0xA0
    ctx->r29 = ADD32(ctx->r29, 0XA0);
;}
RECOMP_FUNC void ovl_8024B800_func_80278700(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80278700: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80278704: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80278708: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8027870C: addiu       $a2, $a0, 0x3C0
    ctx->r6 = ADD32(ctx->r4, 0X3C0);
    // 0x80278710: lw          $v0, 0x18($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X18);
    // 0x80278714: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x80278718: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x8027871C: or          $v1, $a2, $zero
    ctx->r3 = ctx->r6 | 0;
    // 0x80278720: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
L_80278724:
    // 0x80278724: lhu         $t6, 0xC($v0)
    ctx->r14 = MEM_HU(ctx->r2, 0XC);
    // 0x80278728: nop

    // 0x8027872C: beq         $t6, $zero, L_80278770
    if (ctx->r14 == 0) {
        // 0x80278730: nop
    
            goto L_80278770;
    }
    // 0x80278730: nop

    // 0x80278734: sh          $a1, 0x0($v1)
    MEM_H(0X0, ctx->r3) = ctx->r5;
    // 0x80278738: lhu         $t7, 0x8($s0)
    ctx->r15 = MEM_HU(ctx->r16, 0X8);
    // 0x8027873C: addiu       $a3, $a3, 0x1
    ctx->r7 = ADD32(ctx->r7, 0X1);
    // 0x80278740: andi        $t8, $t7, 0x1
    ctx->r24 = ctx->r15 & 0X1;
    // 0x80278744: beq         $t8, $zero, L_80278758
    if (ctx->r24 == 0) {
        // 0x80278748: andi        $t9, $a3, 0xFFFF
        ctx->r25 = ctx->r7 & 0XFFFF;
            goto L_80278758;
    }
    // 0x80278748: andi        $t9, $a3, 0xFFFF
    ctx->r25 = ctx->r7 & 0XFFFF;
    // 0x8027874C: lwc1        $f4, 0x4C($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X4C);
    // 0x80278750: b           L_80278768
    // 0x80278754: swc1        $f4, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->f4.u32l;
        goto L_80278768;
    // 0x80278754: swc1        $f4, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->f4.u32l;
L_80278758:
    // 0x80278758: lwc1        $f6, 0x4C($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0X4C);
    // 0x8027875C: nop

    // 0x80278760: neg.s       $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = -ctx->f6.fl;
    // 0x80278764: swc1        $f8, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->f8.u32l;
L_80278768:
    // 0x80278768: addiu       $v1, $v1, 0x8
    ctx->r3 = ADD32(ctx->r3, 0X8);
    // 0x8027876C: or          $a3, $t9, $zero
    ctx->r7 = ctx->r25 | 0;
L_80278770:
    // 0x80278770: addiu       $a1, $a1, 0x1
    ctx->r5 = ADD32(ctx->r5, 0X1);
    // 0x80278774: andi        $t0, $a1, 0xFFFF
    ctx->r8 = ctx->r5 & 0XFFFF;
    // 0x80278778: slti        $at, $t0, 0xB
    ctx->r1 = SIGNED(ctx->r8) < 0XB ? 1 : 0;
    // 0x8027877C: or          $a1, $t0, $zero
    ctx->r5 = ctx->r8 | 0;
    // 0x80278780: bne         $at, $zero, L_80278724
    if (ctx->r1 != 0) {
        // 0x80278784: addiu       $v0, $v0, 0xF8
        ctx->r2 = ADD32(ctx->r2, 0XF8);
            goto L_80278724;
    }
    // 0x80278784: addiu       $v0, $v0, 0xF8
    ctx->r2 = ADD32(ctx->r2, 0XF8);
    // 0x80278788: addiu       $a1, $a3, -0x1
    ctx->r5 = ADD32(ctx->r7, -0X1);
    // 0x8027878C: sll         $t1, $a1, 16
    ctx->r9 = S32(ctx->r5 << 16);
    // 0x80278790: sra         $a1, $t1, 16
    ctx->r5 = S32(SIGNED(ctx->r9) >> 16);
    // 0x80278794: jal         0x8005DE74
    // 0x80278798: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    func_8005DE74(rdram, ctx);
        goto after_0;
    // 0x80278798: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_0:
    // 0x8027879C: lh          $v0, 0x8B0($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X8B0);
    // 0x802787A0: lwc1        $f0, 0x3CC($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X3CC);
    // 0x802787A4: mtc1        $v0, $f10
    ctx->f10.u32l = ctx->r2;
    // 0x802787A8: nop

    // 0x802787AC: cvt.s.w     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.fl = CVT_S_W(ctx->f10.u32l);
    // 0x802787B0: c.lt.s      $f0, $f16
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f0.fl < ctx->f16.fl;
    // 0x802787B4: nop

    // 0x802787B8: bc1f        L_802787EC
    if (!c1cs) {
        // 0x802787BC: nop
    
            goto L_802787EC;
    }
    // 0x802787BC: nop

    // 0x802787C0: cfc1        $t3, $FpcCsr
    ctx->r11 = get_cop1_cs();
    // 0x802787C4: nop

    // 0x802787C8: ori         $at, $t3, 0x3
    ctx->r1 = ctx->r11 | 0X3;
    // 0x802787CC: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x802787D0: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x802787D4: nop

    // 0x802787D8: cvt.w.s     $f18, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    ctx->f18.u32l = CVT_W_S(ctx->f0.fl);
    // 0x802787DC: mfc1        $t4, $f18
    ctx->r12 = (int32_t)ctx->f18.u32l;
    // 0x802787E0: ctc1        $t3, $FpcCsr
    set_cop1_cs(ctx->r11);
    // 0x802787E4: b           L_802787F0
    // 0x802787E8: sh          $t4, 0x8B4($s0)
    MEM_H(0X8B4, ctx->r16) = ctx->r12;
        goto L_802787F0;
    // 0x802787E8: sh          $t4, 0x8B4($s0)
    MEM_H(0X8B4, ctx->r16) = ctx->r12;
L_802787EC:
    // 0x802787EC: sh          $v0, 0x8B4($s0)
    MEM_H(0X8B4, ctx->r16) = ctx->r2;
L_802787F0:
    // 0x802787F0: lh          $t5, 0x8B4($s0)
    ctx->r13 = MEM_H(ctx->r16, 0X8B4);
    // 0x802787F4: nop

    // 0x802787F8: blez        $t5, L_80278808
    if (SIGNED(ctx->r13) <= 0) {
        // 0x802787FC: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_80278808;
    }
    // 0x802787FC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80278800: sh          $zero, 0x8B4($s0)
    MEM_H(0X8B4, ctx->r16) = 0;
    // 0x80278804: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_80278808:
    // 0x80278808: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8027880C: jr          $ra
    // 0x80278810: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x80278810: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void ovl_8024B800_func_80278724(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
L_80278724:
    // 0x80278724: lhu         $t6, 0xC($v0)
    ctx->r14 = MEM_HU(ctx->r2, 0XC);
    // 0x80278728: nop

    // 0x8027872C: beq         $t6, $zero, L_80278770
    if (ctx->r14 == 0) {
        // 0x80278730: nop
    
            goto L_80278770;
    }
    // 0x80278730: nop

    // 0x80278734: sh          $a1, 0x0($v1)
    MEM_H(0X0, ctx->r3) = ctx->r5;
    // 0x80278738: lhu         $t7, 0x8($s0)
    ctx->r15 = MEM_HU(ctx->r16, 0X8);
    // 0x8027873C: addiu       $a3, $a3, 0x1
    ctx->r7 = ADD32(ctx->r7, 0X1);
    // 0x80278740: andi        $t8, $t7, 0x1
    ctx->r24 = ctx->r15 & 0X1;
    // 0x80278744: beq         $t8, $zero, L_80278758
    if (ctx->r24 == 0) {
        // 0x80278748: andi        $t9, $a3, 0xFFFF
        ctx->r25 = ctx->r7 & 0XFFFF;
            goto L_80278758;
    }
    // 0x80278748: andi        $t9, $a3, 0xFFFF
    ctx->r25 = ctx->r7 & 0XFFFF;
    // 0x8027874C: lwc1        $f4, 0x4C($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X4C);
    // 0x80278750: b           L_80278768
    // 0x80278754: swc1        $f4, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->f4.u32l;
        goto L_80278768;
    // 0x80278754: swc1        $f4, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->f4.u32l;
L_80278758:
    // 0x80278758: lwc1        $f6, 0x4C($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0X4C);
    // 0x8027875C: nop

    // 0x80278760: neg.s       $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = -ctx->f6.fl;
    // 0x80278764: swc1        $f8, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->f8.u32l;
L_80278768:
    // 0x80278768: addiu       $v1, $v1, 0x8
    ctx->r3 = ADD32(ctx->r3, 0X8);
    // 0x8027876C: or          $a3, $t9, $zero
    ctx->r7 = ctx->r25 | 0;
L_80278770:
    // 0x80278770: addiu       $a1, $a1, 0x1
    ctx->r5 = ADD32(ctx->r5, 0X1);
    // 0x80278774: andi        $t0, $a1, 0xFFFF
    ctx->r8 = ctx->r5 & 0XFFFF;
    // 0x80278778: slti        $at, $t0, 0xB
    ctx->r1 = SIGNED(ctx->r8) < 0XB ? 1 : 0;
    // 0x8027877C: or          $a1, $t0, $zero
    ctx->r5 = ctx->r8 | 0;
    // 0x80278780: bne         $at, $zero, L_80278724
    if (ctx->r1 != 0) {
        // 0x80278784: addiu       $v0, $v0, 0xF8
        ctx->r2 = ADD32(ctx->r2, 0XF8);
            goto L_80278724;
    }
    // 0x80278784: addiu       $v0, $v0, 0xF8
    ctx->r2 = ADD32(ctx->r2, 0XF8);
    // 0x80278788: addiu       $a1, $a3, -0x1
    ctx->r5 = ADD32(ctx->r7, -0X1);
    // 0x8027878C: sll         $t1, $a1, 16
    ctx->r9 = S32(ctx->r5 << 16);
    // 0x80278790: sra         $a1, $t1, 16
    ctx->r5 = S32(SIGNED(ctx->r9) >> 16);
    // 0x80278794: jal         0x8005DE74
    // 0x80278798: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    func_8005DE74(rdram, ctx);
        goto after_0;
    // 0x80278798: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_0:
    // 0x8027879C: lh          $v0, 0x8B0($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X8B0);
    // 0x802787A0: lwc1        $f0, 0x3CC($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X3CC);
    // 0x802787A4: mtc1        $v0, $f10
    ctx->f10.u32l = ctx->r2;
    // 0x802787A8: nop

    // 0x802787AC: cvt.s.w     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.fl = CVT_S_W(ctx->f10.u32l);
    // 0x802787B0: c.lt.s      $f0, $f16
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f0.fl < ctx->f16.fl;
    // 0x802787B4: nop

    // 0x802787B8: bc1f        L_802787EC
    if (!c1cs) {
        // 0x802787BC: nop
    
            goto L_802787EC;
    }
    // 0x802787BC: nop

    // 0x802787C0: cfc1        $t3, $FpcCsr
    ctx->r11 = get_cop1_cs();
    // 0x802787C4: nop

    // 0x802787C8: ori         $at, $t3, 0x3
    ctx->r1 = ctx->r11 | 0X3;
    // 0x802787CC: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x802787D0: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x802787D4: nop

    // 0x802787D8: cvt.w.s     $f18, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    ctx->f18.u32l = CVT_W_S(ctx->f0.fl);
    // 0x802787DC: mfc1        $t4, $f18
    ctx->r12 = (int32_t)ctx->f18.u32l;
    // 0x802787E0: ctc1        $t3, $FpcCsr
    set_cop1_cs(ctx->r11);
    // 0x802787E4: b           L_802787F0
    // 0x802787E8: sh          $t4, 0x8B4($s0)
    MEM_H(0X8B4, ctx->r16) = ctx->r12;
        goto L_802787F0;
    // 0x802787E8: sh          $t4, 0x8B4($s0)
    MEM_H(0X8B4, ctx->r16) = ctx->r12;
L_802787EC:
    // 0x802787EC: sh          $v0, 0x8B4($s0)
    MEM_H(0X8B4, ctx->r16) = ctx->r2;
L_802787F0:
    // 0x802787F0: lh          $t5, 0x8B4($s0)
    ctx->r13 = MEM_H(ctx->r16, 0X8B4);
    // 0x802787F4: nop

    // 0x802787F8: blez        $t5, L_80278808
    if (SIGNED(ctx->r13) <= 0) {
        // 0x802787FC: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_80278808;
    }
    // 0x802787FC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80278800: sh          $zero, 0x8B4($s0)
    MEM_H(0X8B4, ctx->r16) = 0;
    // 0x80278804: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_80278808:
    // 0x80278808: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8027880C: jr          $ra
    // 0x80278810: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x80278810: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void ovl_8024B800_func_80278754(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
L_80278724:
    // 0x80278754: swc1        $f4, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->f4.u32l;
    // 0x80278758: lwc1        $f6, 0x4C($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0X4C);
    // 0x8027875C: nop

    // 0x80278760: neg.s       $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = -ctx->f6.fl;
    // 0x80278764: swc1        $f8, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->f8.u32l;
    // 0x80278768: addiu       $v1, $v1, 0x8
    ctx->r3 = ADD32(ctx->r3, 0X8);
    // 0x8027876C: or          $a3, $t9, $zero
    ctx->r7 = ctx->r25 | 0;
    // 0x80278770: addiu       $a1, $a1, 0x1
    ctx->r5 = ADD32(ctx->r5, 0X1);
    // 0x80278774: andi        $t0, $a1, 0xFFFF
    ctx->r8 = ctx->r5 & 0XFFFF;
    // 0x80278778: slti        $at, $t0, 0xB
    ctx->r1 = SIGNED(ctx->r8) < 0XB ? 1 : 0;
    // 0x8027877C: or          $a1, $t0, $zero
    ctx->r5 = ctx->r8 | 0;
    // 0x80278780: bne         $at, $zero, L_80278724
    if (ctx->r1 != 0) {
            // 0x80278784: addiu       $v0, $v0, 0xF8
    ctx->r2 = ADD32(ctx->r2, 0XF8);
    ovl_8024B800_func_80278724(rdram, ctx);
    return;
    }
    // 0x80278784: addiu       $v0, $v0, 0xF8
    ctx->r2 = ADD32(ctx->r2, 0XF8);
    // 0x80278788: addiu       $a1, $a3, -0x1
    ctx->r5 = ADD32(ctx->r7, -0X1);
    // 0x8027878C: sll         $t1, $a1, 16
    ctx->r9 = S32(ctx->r5 << 16);
    // 0x80278790: sra         $a1, $t1, 16
    ctx->r5 = S32(SIGNED(ctx->r9) >> 16);
    // 0x80278794: jal         0x8005DE74
    // 0x80278798: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    func_8005DE74(rdram, ctx);
        goto after_0;
    // 0x80278798: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_0:
    // 0x8027879C: lh          $v0, 0x8B0($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X8B0);
    // 0x802787A0: lwc1        $f0, 0x3CC($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X3CC);
    // 0x802787A4: mtc1        $v0, $f10
    ctx->f10.u32l = ctx->r2;
    // 0x802787A8: nop

    // 0x802787AC: cvt.s.w     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.fl = CVT_S_W(ctx->f10.u32l);
    // 0x802787B0: c.lt.s      $f0, $f16
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f0.fl < ctx->f16.fl;
    // 0x802787B4: nop

    // 0x802787B8: bc1f        L_802787EC
    if (!c1cs) {
        // 0x802787BC: nop
    
            goto L_802787EC;
    }
    // 0x802787BC: nop

    // 0x802787C0: cfc1        $t3, $FpcCsr
    ctx->r11 = get_cop1_cs();
    // 0x802787C4: nop

    // 0x802787C8: ori         $at, $t3, 0x3
    ctx->r1 = ctx->r11 | 0X3;
    // 0x802787CC: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x802787D0: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x802787D4: nop

    // 0x802787D8: cvt.w.s     $f18, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    ctx->f18.u32l = CVT_W_S(ctx->f0.fl);
    // 0x802787DC: mfc1        $t4, $f18
    ctx->r12 = (int32_t)ctx->f18.u32l;
    // 0x802787E0: ctc1        $t3, $FpcCsr
    set_cop1_cs(ctx->r11);
    // 0x802787E4: b           L_802787F0
    // 0x802787E8: sh          $t4, 0x8B4($s0)
    MEM_H(0X8B4, ctx->r16) = ctx->r12;
        goto L_802787F0;
    // 0x802787E8: sh          $t4, 0x8B4($s0)
    MEM_H(0X8B4, ctx->r16) = ctx->r12;
L_802787EC:
    // 0x802787EC: sh          $v0, 0x8B4($s0)
    MEM_H(0X8B4, ctx->r16) = ctx->r2;
L_802787F0:
    // 0x802787F0: lh          $t5, 0x8B4($s0)
    ctx->r13 = MEM_H(ctx->r16, 0X8B4);
    // 0x802787F4: nop

    // 0x802787F8: blez        $t5, L_80278808
    if (SIGNED(ctx->r13) <= 0) {
        // 0x802787FC: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_80278808;
    }
    // 0x802787FC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80278800: sh          $zero, 0x8B4($s0)
    MEM_H(0X8B4, ctx->r16) = 0;
    // 0x80278804: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_80278808:
    // 0x80278808: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8027880C: jr          $ra
    // 0x80278810: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x80278810: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void ovl_8024B800_func_802787A8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802787A8: nop

    // 0x802787AC: cvt.s.w     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.fl = CVT_S_W(ctx->f10.u32l);
    // 0x802787B0: c.lt.s      $f0, $f16
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f0.fl < ctx->f16.fl;
    // 0x802787B4: nop

    // 0x802787B8: bc1f        L_802787EC
    if (!c1cs) {
        // 0x802787BC: nop
    
            goto L_802787EC;
    }
    // 0x802787BC: nop

    // 0x802787C0: cfc1        $t3, $FpcCsr
    ctx->r11 = get_cop1_cs();
    // 0x802787C4: nop

    // 0x802787C8: ori         $at, $t3, 0x3
    ctx->r1 = ctx->r11 | 0X3;
    // 0x802787CC: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x802787D0: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x802787D4: nop

    // 0x802787D8: cvt.w.s     $f18, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    ctx->f18.u32l = CVT_W_S(ctx->f0.fl);
    // 0x802787DC: mfc1        $t4, $f18
    ctx->r12 = (int32_t)ctx->f18.u32l;
    // 0x802787E0: ctc1        $t3, $FpcCsr
    set_cop1_cs(ctx->r11);
    // 0x802787E4: b           L_802787F0
    // 0x802787E8: sh          $t4, 0x8B4($s0)
    MEM_H(0X8B4, ctx->r16) = ctx->r12;
        goto L_802787F0;
    // 0x802787E8: sh          $t4, 0x8B4($s0)
    MEM_H(0X8B4, ctx->r16) = ctx->r12;
L_802787EC:
    // 0x802787EC: sh          $v0, 0x8B4($s0)
    MEM_H(0X8B4, ctx->r16) = ctx->r2;
L_802787F0:
    // 0x802787F0: lh          $t5, 0x8B4($s0)
    ctx->r13 = MEM_H(ctx->r16, 0X8B4);
    // 0x802787F4: nop

    // 0x802787F8: blez        $t5, L_80278808
    if (SIGNED(ctx->r13) <= 0) {
        // 0x802787FC: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_80278808;
    }
    // 0x802787FC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80278800: sh          $zero, 0x8B4($s0)
    MEM_H(0X8B4, ctx->r16) = 0;
    // 0x80278804: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_80278808:
    // 0x80278808: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8027880C: jr          $ra
    // 0x80278810: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x80278810: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void ovl_8024B800_func_80278814(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80278814: lui         $t6, 0x8012
    ctx->r14 = S32(0X8012 << 16);
    // 0x80278818: lb          $t6, -0x3098($t6)
    ctx->r14 = MEM_B(ctx->r14, -0X3098);
    // 0x8027881C: lui         $a3, 0x8009
    ctx->r7 = S32(0X8009 << 16);
    // 0x80278820: bne         $t6, $zero, L_80278924
    if (ctx->r14 != 0) {
        // 0x80278824: addiu       $a3, $a3, 0x3B20
        ctx->r7 = ADD32(ctx->r7, 0X3B20);
            goto L_80278924;
    }
    // 0x80278824: addiu       $a3, $a3, 0x3B20
    ctx->r7 = ADD32(ctx->r7, 0X3B20);
    // 0x80278828: lui         $at, 0x42C8
    ctx->r1 = S32(0X42C8 << 16);
    // 0x8027882C: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    // 0x80278830: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x80278834: sw          $a0, 0xB28($at)
    MEM_W(0XB28, ctx->r1) = ctx->r4;
    // 0x80278838: lw          $v0, 0x0($a3)
    ctx->r2 = MEM_W(ctx->r7, 0X0);
    // 0x8027883C: addiu       $t9, $zero, 0x8
    ctx->r25 = ADD32(0, 0X8);
    // 0x80278840: lhu         $t7, 0xC2($v0)
    ctx->r15 = MEM_HU(ctx->r2, 0XC2);
    // 0x80278844: lui         $t3, 0x8028
    ctx->r11 = S32(0X8028 << 16);
    // 0x80278848: andi        $t8, $t7, 0xFF7F
    ctx->r24 = ctx->r15 & 0XFF7F;
    // 0x8027884C: sh          $t8, 0xC2($v0)
    MEM_H(0XC2, ctx->r2) = ctx->r24;
    // 0x80278850: lw          $t0, 0x0($a3)
    ctx->r8 = MEM_W(ctx->r7, 0X0);
    // 0x80278854: lui         $t5, 0x8028
    ctx->r13 = S32(0X8028 << 16);
    // 0x80278858: sh          $t9, 0xDC($t0)
    MEM_H(0XDC, ctx->r8) = ctx->r25;
    // 0x8027885C: lwc1        $f0, 0x44($a0)
    ctx->f0.u32l = MEM_W(ctx->r4, 0X44);
    // 0x80278860: lw          $t4, 0x0($a3)
    ctx->r12 = MEM_W(ctx->r7, 0X0);
    // 0x80278864: add.s       $f4, $f0, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f4.fl = ctx->f0.fl + ctx->f2.fl;
    // 0x80278868: lh          $t3, -0x1A48($t3)
    ctx->r11 = MEM_H(ctx->r11, -0X1A48);
    // 0x8027886C: cfc1        $t1, $FpcCsr
    ctx->r9 = get_cop1_cs();
    // 0x80278870: sh          $t3, 0xD8($t4)
    MEM_H(0XD8, ctx->r12) = ctx->r11;
    // 0x80278874: ori         $at, $t1, 0x3
    ctx->r1 = ctx->r9 | 0X3;
    // 0x80278878: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x8027887C: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x80278880: lw          $t6, 0x0($a3)
    ctx->r14 = MEM_W(ctx->r7, 0X0);
    // 0x80278884: cvt.w.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = CVT_W_S(ctx->f4.fl);
    // 0x80278888: lh          $t5, -0x1A46($t5)
    ctx->r13 = MEM_H(ctx->r13, -0X1A46);
    // 0x8027888C: ctc1        $t1, $FpcCsr
    set_cop1_cs(ctx->r9);
    // 0x80278890: sh          $t5, 0xDA($t6)
    MEM_H(0XDA, ctx->r14) = ctx->r13;
    // 0x80278894: sub.s       $f8, $f0, $f2
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f8.fl = ctx->f0.fl - ctx->f2.fl;
    // 0x80278898: lw          $v0, 0x0($a3)
    ctx->r2 = MEM_W(ctx->r7, 0X0);
    // 0x8027889C: cfc1        $t2, $FpcCsr
    ctx->r10 = get_cop1_cs();
    // 0x802788A0: mfc1        $v1, $f6
    ctx->r3 = (int32_t)ctx->f6.u32l;
    // 0x802788A4: ori         $at, $t2, 0x3
    ctx->r1 = ctx->r10 | 0X3;
    // 0x802788A8: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x802788AC: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x802788B0: lh          $a2, 0xDA($v0)
    ctx->r6 = MEM_H(ctx->r2, 0XDA);
    // 0x802788B4: cvt.w.s     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.u32l = CVT_W_S(ctx->f8.fl);
    // 0x802788B8: slt         $at, $v1, $a2
    ctx->r1 = SIGNED(ctx->r3) < SIGNED(ctx->r6) ? 1 : 0;
    // 0x802788BC: mfc1        $a1, $f10
    ctx->r5 = (int32_t)ctx->f10.u32l;
    // 0x802788C0: ctc1        $t2, $FpcCsr
    set_cop1_cs(ctx->r10);
    // 0x802788C4: beq         $at, $zero, L_802788E8
    if (ctx->r1 == 0) {
        // 0x802788C8: slt         $at, $a2, $a1
        ctx->r1 = SIGNED(ctx->r6) < SIGNED(ctx->r5) ? 1 : 0;
            goto L_802788E8;
    }
    // 0x802788C8: slt         $at, $a2, $a1
    ctx->r1 = SIGNED(ctx->r6) < SIGNED(ctx->r5) ? 1 : 0;
    // 0x802788CC: sh          $v1, 0xDA($v0)
    MEM_H(0XDA, ctx->r2) = ctx->r3;
    // 0x802788D0: lui         $v0, 0x8009
    ctx->r2 = S32(0X8009 << 16);
    // 0x802788D4: lw          $v0, 0x3B20($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X3B20);
    // 0x802788D8: nop

    // 0x802788DC: lh          $a2, 0xDA($v0)
    ctx->r6 = MEM_H(ctx->r2, 0XDA);
    // 0x802788E0: nop

    // 0x802788E4: slt         $at, $a2, $a1
    ctx->r1 = SIGNED(ctx->r6) < SIGNED(ctx->r5) ? 1 : 0;
L_802788E8:
    // 0x802788E8: beq         $at, $zero, L_80278900
    if (ctx->r1 == 0) {
        // 0x802788EC: nop
    
            goto L_80278900;
    }
    // 0x802788EC: nop

    // 0x802788F0: sh          $a1, 0xDA($v0)
    MEM_H(0XDA, ctx->r2) = ctx->r5;
    // 0x802788F4: lui         $v0, 0x8009
    ctx->r2 = S32(0X8009 << 16);
    // 0x802788F8: lw          $v0, 0x3B20($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X3B20);
    // 0x802788FC: nop

L_80278900:
    // 0x80278900: lw          $t7, 0xC8($a0)
    ctx->r15 = MEM_W(ctx->r4, 0XC8);
    // 0x80278904: nop

    // 0x80278908: sw          $t7, 0xB4($v0)
    MEM_W(0XB4, ctx->r2) = ctx->r15;
    // 0x8027890C: lw          $v1, 0xC8($a0)
    ctx->r3 = MEM_W(ctx->r4, 0XC8);
    // 0x80278910: nop

    // 0x80278914: lhu         $t8, 0x10($v1)
    ctx->r24 = MEM_HU(ctx->r3, 0X10);
    // 0x80278918: nop

    // 0x8027891C: ori         $t9, $t8, 0x8000
    ctx->r25 = ctx->r24 | 0X8000;
    // 0x80278920: sh          $t9, 0x10($v1)
    MEM_H(0X10, ctx->r3) = ctx->r25;
L_80278924:
    // 0x80278924: jr          $ra
    // 0x80278928: nop

    return;
    // 0x80278928: nop

;}
RECOMP_FUNC void ovl_8024B800_func_8027892C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8027892C: lui         $v0, 0x8009
    ctx->r2 = S32(0X8009 << 16);
    // 0x80278930: lw          $v0, 0x3B20($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X3B20);
    // 0x80278934: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80278938: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8027893C: lhu         $t6, 0x6A($v0)
    ctx->r14 = MEM_HU(ctx->r2, 0X6A);
    // 0x80278940: nop

    // 0x80278944: slti        $at, $t6, 0xA
    ctx->r1 = SIGNED(ctx->r14) < 0XA ? 1 : 0;
    // 0x80278948: bne         $at, $zero, L_80278A34
    if (ctx->r1 != 0) {
        // 0x8027894C: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_80278A34;
    }
    // 0x8027894C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80278950: lhu         $t7, 0xC2($v0)
    ctx->r15 = MEM_HU(ctx->r2, 0XC2);
    // 0x80278954: nop

    // 0x80278958: andi        $t8, $t7, 0x80
    ctx->r24 = ctx->r15 & 0X80;
    // 0x8027895C: beq         $t8, $zero, L_80278A34
    if (ctx->r24 == 0) {
        // 0x80278960: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_80278A34;
    }
    // 0x80278960: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80278964: lbu         $t9, 0xBD($v0)
    ctx->r25 = MEM_BU(ctx->r2, 0XBD);
    // 0x80278968: nop

    // 0x8027896C: andi        $t0, $t9, 0x4
    ctx->r8 = ctx->r25 & 0X4;
    // 0x80278970: beq         $t0, $zero, L_802789C8
    if (ctx->r8 == 0) {
        // 0x80278974: nop
    
            goto L_802789C8;
    }
    // 0x80278974: nop

    // 0x80278978: lh          $t1, 0xD4($v0)
    ctx->r9 = MEM_H(ctx->r2, 0XD4);
    // 0x8027897C: nop

    // 0x80278980: andi        $t2, $t1, 0x3
    ctx->r10 = ctx->r9 & 0X3;
    // 0x80278984: beq         $t2, $zero, L_802789C8
    if (ctx->r10 == 0) {
        // 0x80278988: nop
    
            goto L_802789C8;
    }
    // 0x80278988: nop

    // 0x8027898C: lh          $t3, 0xD6($v0)
    ctx->r11 = MEM_H(ctx->r2, 0XD6);
    // 0x80278990: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x80278994: sll         $t4, $t3, 2
    ctx->r12 = S32(ctx->r11 << 2);
    // 0x80278998: subu        $t4, $t4, $t3
    ctx->r12 = SUB32(ctx->r12, ctx->r11);
    // 0x8027899C: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x802789A0: addu        $at, $at, $t4
    ctx->r1 = ADD32(ctx->r1, ctx->r12);
    // 0x802789A4: lwc1        $f12, 0x680($at)
    ctx->f12.u32l = MEM_W(ctx->r1, 0X680);
    // 0x802789A8: jal         0x80272AEC
    // 0x802789AC: nop

    ovl_8024B800_func_80272AEC(rdram, ctx);
        goto after_0;
    // 0x802789AC: nop

    after_0:
    // 0x802789B0: lui         $at, 0x42A0
    ctx->r1 = S32(0X42A0 << 16);
    // 0x802789B4: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x802789B8: nop

    // 0x802789BC: c.lt.s      $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f0.fl < ctx->f4.fl;
    // 0x802789C0: nop

    // 0x802789C4: bc1t        L_80278A30
    if (c1cs) {
        // 0x802789C8: lui         $v0, 0x8009
        ctx->r2 = S32(0X8009 << 16);
            goto L_80278A30;
    }
L_802789C8:
    // 0x802789C8: lui         $v0, 0x8009
    ctx->r2 = S32(0X8009 << 16);
    // 0x802789CC: lw          $v0, 0x3B20($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X3B20);
    // 0x802789D0: nop

    // 0x802789D4: lw          $a0, 0x90($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X90);
    // 0x802789D8: nop

    // 0x802789DC: bne         $a0, $zero, L_80278A14
    if (ctx->r4 != 0) {
        // 0x802789E0: nop
    
            goto L_80278A14;
    }
    // 0x802789E0: nop

    // 0x802789E4: lw          $a0, 0x94($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X94);
    // 0x802789E8: nop

    // 0x802789EC: bne         $a0, $zero, L_80278A14
    if (ctx->r4 != 0) {
        // 0x802789F0: nop
    
            goto L_80278A14;
    }
    // 0x802789F0: nop

    // 0x802789F4: lw          $t5, 0xAC($v0)
    ctx->r13 = MEM_W(ctx->r2, 0XAC);
    // 0x802789F8: nop

    // 0x802789FC: lw          $t6, 0xC8($t5)
    ctx->r14 = MEM_W(ctx->r13, 0XC8);
    // 0x80278A00: nop

    // 0x80278A04: lw          $a0, 0x914($t6)
    ctx->r4 = MEM_W(ctx->r14, 0X914);
    // 0x80278A08: nop

    // 0x80278A0C: beq         $a0, $zero, L_80278A34
    if (ctx->r4 == 0) {
        // 0x80278A10: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_80278A34;
    }
    // 0x80278A10: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80278A14:
    // 0x80278A14: lhu         $t7, 0x16($a0)
    ctx->r15 = MEM_HU(ctx->r4, 0X16);
    // 0x80278A18: nop

    // 0x80278A1C: andi        $t8, $t7, 0x200
    ctx->r24 = ctx->r15 & 0X200;
    // 0x80278A20: beq         $t8, $zero, L_80278A34
    if (ctx->r24 == 0) {
        // 0x80278A24: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_80278A34;
    }
    // 0x80278A24: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80278A28: jal         0x80278814
    // 0x80278A2C: nop

    ovl_8024B800_func_80278814(rdram, ctx);
        goto after_1;
    // 0x80278A2C: nop

    after_1:
L_80278A30:
    // 0x80278A30: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80278A34:
    // 0x80278A34: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80278A38: jr          $ra
    // 0x80278A3C: nop

    return;
    // 0x80278A3C: nop

;}
RECOMP_FUNC void ovl_8024B800_func_8027894C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8027894C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80278950: lhu         $t7, 0xC2($v0)
    ctx->r15 = MEM_HU(ctx->r2, 0XC2);
    // 0x80278954: nop

    // 0x80278958: andi        $t8, $t7, 0x80
    ctx->r24 = ctx->r15 & 0X80;
    // 0x8027895C: beq         $t8, $zero, L_80278A34
    if (ctx->r24 == 0) {
        // 0x80278960: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_80278A34;
    }
    // 0x80278960: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80278964: lbu         $t9, 0xBD($v0)
    ctx->r25 = MEM_BU(ctx->r2, 0XBD);
    // 0x80278968: nop

    // 0x8027896C: andi        $t0, $t9, 0x4
    ctx->r8 = ctx->r25 & 0X4;
    // 0x80278970: beq         $t0, $zero, L_802789C8
    if (ctx->r8 == 0) {
        // 0x80278974: nop
    
            goto L_802789C8;
    }
    // 0x80278974: nop

    // 0x80278978: lh          $t1, 0xD4($v0)
    ctx->r9 = MEM_H(ctx->r2, 0XD4);
    // 0x8027897C: nop

    // 0x80278980: andi        $t2, $t1, 0x3
    ctx->r10 = ctx->r9 & 0X3;
    // 0x80278984: beq         $t2, $zero, L_802789C8
    if (ctx->r10 == 0) {
        // 0x80278988: nop
    
            goto L_802789C8;
    }
    // 0x80278988: nop

    // 0x8027898C: lh          $t3, 0xD6($v0)
    ctx->r11 = MEM_H(ctx->r2, 0XD6);
    // 0x80278990: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x80278994: sll         $t4, $t3, 2
    ctx->r12 = S32(ctx->r11 << 2);
    // 0x80278998: subu        $t4, $t4, $t3
    ctx->r12 = SUB32(ctx->r12, ctx->r11);
    // 0x8027899C: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x802789A0: addu        $at, $at, $t4
    ctx->r1 = ADD32(ctx->r1, ctx->r12);
    // 0x802789A4: lwc1        $f12, 0x680($at)
    ctx->f12.u32l = MEM_W(ctx->r1, 0X680);
    // 0x802789A8: jal         0x80272AEC
    // 0x802789AC: nop

    ovl_8024B800_func_80272AEC(rdram, ctx);
        goto after_0;
    // 0x802789AC: nop

    after_0:
    // 0x802789B0: lui         $at, 0x42A0
    ctx->r1 = S32(0X42A0 << 16);
    // 0x802789B4: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x802789B8: nop

    // 0x802789BC: c.lt.s      $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f0.fl < ctx->f4.fl;
    // 0x802789C0: nop

    // 0x802789C4: bc1t        L_80278A30
    if (c1cs) {
        // 0x802789C8: lui         $v0, 0x8009
        ctx->r2 = S32(0X8009 << 16);
            goto L_80278A30;
    }
L_802789C8:
    // 0x802789C8: lui         $v0, 0x8009
    ctx->r2 = S32(0X8009 << 16);
    // 0x802789CC: lw          $v0, 0x3B20($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X3B20);
    // 0x802789D0: nop

    // 0x802789D4: lw          $a0, 0x90($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X90);
    // 0x802789D8: nop

    // 0x802789DC: bne         $a0, $zero, L_80278A14
    if (ctx->r4 != 0) {
        // 0x802789E0: nop
    
            goto L_80278A14;
    }
    // 0x802789E0: nop

    // 0x802789E4: lw          $a0, 0x94($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X94);
    // 0x802789E8: nop

    // 0x802789EC: bne         $a0, $zero, L_80278A14
    if (ctx->r4 != 0) {
        // 0x802789F0: nop
    
            goto L_80278A14;
    }
    // 0x802789F0: nop

    // 0x802789F4: lw          $t5, 0xAC($v0)
    ctx->r13 = MEM_W(ctx->r2, 0XAC);
    // 0x802789F8: nop

    // 0x802789FC: lw          $t6, 0xC8($t5)
    ctx->r14 = MEM_W(ctx->r13, 0XC8);
    // 0x80278A00: nop

    // 0x80278A04: lw          $a0, 0x914($t6)
    ctx->r4 = MEM_W(ctx->r14, 0X914);
    // 0x80278A08: nop

    // 0x80278A0C: beq         $a0, $zero, L_80278A34
    if (ctx->r4 == 0) {
        // 0x80278A10: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_80278A34;
    }
    // 0x80278A10: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80278A14:
    // 0x80278A14: lhu         $t7, 0x16($a0)
    ctx->r15 = MEM_HU(ctx->r4, 0X16);
    // 0x80278A18: nop

    // 0x80278A1C: andi        $t8, $t7, 0x200
    ctx->r24 = ctx->r15 & 0X200;
    // 0x80278A20: beq         $t8, $zero, L_80278A34
    if (ctx->r24 == 0) {
        // 0x80278A24: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_80278A34;
    }
    // 0x80278A24: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80278A28: jal         0x80278814
    // 0x80278A2C: nop

    ovl_8024B800_func_80278814(rdram, ctx);
        goto after_1;
    // 0x80278A2C: nop

    after_1:
L_80278A30:
    // 0x80278A30: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80278A34:
    // 0x80278A34: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80278A38: jr          $ra
    // 0x80278A3C: nop

    return;
    // 0x80278A3C: nop

;}
RECOMP_FUNC void ovl_8024B800_func_80278A00(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80278A00: nop

    // 0x80278A04: lw          $a0, 0x914($t6)
    ctx->r4 = MEM_W(ctx->r14, 0X914);
    // 0x80278A08: nop

    // 0x80278A0C: beq         $a0, $zero, L_80278A34
    if (ctx->r4 == 0) {
        // 0x80278A10: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_80278A34;
    }
    // 0x80278A10: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80278A14: lhu         $t7, 0x16($a0)
    ctx->r15 = MEM_HU(ctx->r4, 0X16);
    // 0x80278A18: nop

    // 0x80278A1C: andi        $t8, $t7, 0x200
    ctx->r24 = ctx->r15 & 0X200;
    // 0x80278A20: beq         $t8, $zero, L_80278A34
    if (ctx->r24 == 0) {
        // 0x80278A24: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_80278A34;
    }
    // 0x80278A24: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80278A28: jal         0x80278814
    // 0x80278A2C: nop

    ovl_8024B800_func_80278814(rdram, ctx);
        goto after_0;
    // 0x80278A2C: nop

    after_0:
    // 0x80278A30: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80278A34:
    // 0x80278A34: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80278A38: jr          $ra
    // 0x80278A3C: nop

    return;
    // 0x80278A3C: nop

;}
RECOMP_FUNC void ovl_8024B800_func_80278A40(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80278A40: lui         $v1, 0x8012
    ctx->r3 = S32(0X8012 << 16);
    // 0x80278A44: lui         $a2, 0x8012
    ctx->r6 = S32(0X8012 << 16);
    // 0x80278A48: addiu       $a2, $a2, -0x17C8
    ctx->r6 = ADD32(ctx->r6, -0X17C8);
    // 0x80278A4C: addiu       $v1, $v1, -0x2CF0
    ctx->r3 = ADD32(ctx->r3, -0X2CF0);
    // 0x80278A50: addiu       $a1, $zero, 0xB
    ctx->r5 = ADD32(0, 0XB);
L_80278A54:
    // 0x80278A54: lw          $v0, 0x18($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X18);
    // 0x80278A58: addiu       $a0, $zero, 0x3
    ctx->r4 = ADD32(0, 0X3);
    // 0x80278A5C: lhu         $t6, 0x16($v0)
    ctx->r14 = MEM_HU(ctx->r2, 0X16);
    // 0x80278A60: lhu         $t8, 0x10E($v0)
    ctx->r24 = MEM_HU(ctx->r2, 0X10E);
    // 0x80278A64: lhu         $t0, 0x206($v0)
    ctx->r8 = MEM_HU(ctx->r2, 0X206);
    // 0x80278A68: andi        $t7, $t6, 0xFDFF
    ctx->r15 = ctx->r14 & 0XFDFF;
    // 0x80278A6C: andi        $t9, $t8, 0xFDFF
    ctx->r25 = ctx->r24 & 0XFDFF;
    // 0x80278A70: andi        $t1, $t0, 0xFDFF
    ctx->r9 = ctx->r8 & 0XFDFF;
    // 0x80278A74: sh          $t1, 0x206($v0)
    MEM_H(0X206, ctx->r2) = ctx->r9;
    // 0x80278A78: sh          $t9, 0x10E($v0)
    MEM_H(0X10E, ctx->r2) = ctx->r25;
    // 0x80278A7C: sh          $t7, 0x16($v0)
    MEM_H(0X16, ctx->r2) = ctx->r15;
    // 0x80278A80: addiu       $v0, $v0, 0x2E8
    ctx->r2 = ADD32(ctx->r2, 0X2E8);
L_80278A84:
    // 0x80278A84: lhu         $t4, 0x10E($v0)
    ctx->r12 = MEM_HU(ctx->r2, 0X10E);
    // 0x80278A88: lhu         $t6, 0x206($v0)
    ctx->r14 = MEM_HU(ctx->r2, 0X206);
    // 0x80278A8C: lhu         $t8, 0x2FE($v0)
    ctx->r24 = MEM_HU(ctx->r2, 0X2FE);
    // 0x80278A90: lhu         $t2, 0x16($v0)
    ctx->r10 = MEM_HU(ctx->r2, 0X16);
    // 0x80278A94: addiu       $a0, $a0, 0x4
    ctx->r4 = ADD32(ctx->r4, 0X4);
    // 0x80278A98: andi        $t5, $t4, 0xFDFF
    ctx->r13 = ctx->r12 & 0XFDFF;
    // 0x80278A9C: andi        $t7, $t6, 0xFDFF
    ctx->r15 = ctx->r14 & 0XFDFF;
    // 0x80278AA0: andi        $t9, $t8, 0xFDFF
    ctx->r25 = ctx->r24 & 0XFDFF;
    // 0x80278AA4: andi        $t3, $t2, 0xFDFF
    ctx->r11 = ctx->r10 & 0XFDFF;
    // 0x80278AA8: sh          $t9, 0x2FE($v0)
    MEM_H(0X2FE, ctx->r2) = ctx->r25;
    // 0x80278AAC: sh          $t7, 0x206($v0)
    MEM_H(0X206, ctx->r2) = ctx->r15;
    // 0x80278AB0: sh          $t5, 0x10E($v0)
    MEM_H(0X10E, ctx->r2) = ctx->r13;
    // 0x80278AB4: addiu       $v0, $v0, 0x3E0
    ctx->r2 = ADD32(ctx->r2, 0X3E0);
    // 0x80278AB8: bne         $a0, $a1, L_80278A84
    if (ctx->r4 != ctx->r5) {
        // 0x80278ABC: sh          $t3, -0x3CA($v0)
        MEM_H(-0X3CA, ctx->r2) = ctx->r11;
            goto L_80278A84;
    }
    // 0x80278ABC: sh          $t3, -0x3CA($v0)
    MEM_H(-0X3CA, ctx->r2) = ctx->r11;
    // 0x80278AC0: addiu       $v1, $v1, 0xA94
    ctx->r3 = ADD32(ctx->r3, 0XA94);
    // 0x80278AC4: bne         $v1, $a2, L_80278A54
    if (ctx->r3 != ctx->r6) {
        // 0x80278AC8: nop
    
            goto L_80278A54;
    }
    // 0x80278AC8: nop

    // 0x80278ACC: jr          $ra
    // 0x80278AD0: nop

    return;
    // 0x80278AD0: nop

;}
RECOMP_FUNC void ovl_8024B800_func_80278A54(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
L_80278A54:
    // 0x80278A54: lw          $v0, 0x18($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X18);
    // 0x80278A58: addiu       $a0, $zero, 0x3
    ctx->r4 = ADD32(0, 0X3);
    // 0x80278A5C: lhu         $t6, 0x16($v0)
    ctx->r14 = MEM_HU(ctx->r2, 0X16);
    // 0x80278A60: lhu         $t8, 0x10E($v0)
    ctx->r24 = MEM_HU(ctx->r2, 0X10E);
    // 0x80278A64: lhu         $t0, 0x206($v0)
    ctx->r8 = MEM_HU(ctx->r2, 0X206);
    // 0x80278A68: andi        $t7, $t6, 0xFDFF
    ctx->r15 = ctx->r14 & 0XFDFF;
    // 0x80278A6C: andi        $t9, $t8, 0xFDFF
    ctx->r25 = ctx->r24 & 0XFDFF;
    // 0x80278A70: andi        $t1, $t0, 0xFDFF
    ctx->r9 = ctx->r8 & 0XFDFF;
    // 0x80278A74: sh          $t1, 0x206($v0)
    MEM_H(0X206, ctx->r2) = ctx->r9;
    // 0x80278A78: sh          $t9, 0x10E($v0)
    MEM_H(0X10E, ctx->r2) = ctx->r25;
    // 0x80278A7C: sh          $t7, 0x16($v0)
    MEM_H(0X16, ctx->r2) = ctx->r15;
    // 0x80278A80: addiu       $v0, $v0, 0x2E8
    ctx->r2 = ADD32(ctx->r2, 0X2E8);
L_80278A84:
    // 0x80278A84: lhu         $t4, 0x10E($v0)
    ctx->r12 = MEM_HU(ctx->r2, 0X10E);
    // 0x80278A88: lhu         $t6, 0x206($v0)
    ctx->r14 = MEM_HU(ctx->r2, 0X206);
    // 0x80278A8C: lhu         $t8, 0x2FE($v0)
    ctx->r24 = MEM_HU(ctx->r2, 0X2FE);
    // 0x80278A90: lhu         $t2, 0x16($v0)
    ctx->r10 = MEM_HU(ctx->r2, 0X16);
    // 0x80278A94: addiu       $a0, $a0, 0x4
    ctx->r4 = ADD32(ctx->r4, 0X4);
    // 0x80278A98: andi        $t5, $t4, 0xFDFF
    ctx->r13 = ctx->r12 & 0XFDFF;
    // 0x80278A9C: andi        $t7, $t6, 0xFDFF
    ctx->r15 = ctx->r14 & 0XFDFF;
    // 0x80278AA0: andi        $t9, $t8, 0xFDFF
    ctx->r25 = ctx->r24 & 0XFDFF;
    // 0x80278AA4: andi        $t3, $t2, 0xFDFF
    ctx->r11 = ctx->r10 & 0XFDFF;
    // 0x80278AA8: sh          $t9, 0x2FE($v0)
    MEM_H(0X2FE, ctx->r2) = ctx->r25;
    // 0x80278AAC: sh          $t7, 0x206($v0)
    MEM_H(0X206, ctx->r2) = ctx->r15;
    // 0x80278AB0: sh          $t5, 0x10E($v0)
    MEM_H(0X10E, ctx->r2) = ctx->r13;
    // 0x80278AB4: addiu       $v0, $v0, 0x3E0
    ctx->r2 = ADD32(ctx->r2, 0X3E0);
    // 0x80278AB8: bne         $a0, $a1, L_80278A84
    if (ctx->r4 != ctx->r5) {
        // 0x80278ABC: sh          $t3, -0x3CA($v0)
        MEM_H(-0X3CA, ctx->r2) = ctx->r11;
            goto L_80278A84;
    }
    // 0x80278ABC: sh          $t3, -0x3CA($v0)
    MEM_H(-0X3CA, ctx->r2) = ctx->r11;
    // 0x80278AC0: addiu       $v1, $v1, 0xA94
    ctx->r3 = ADD32(ctx->r3, 0XA94);
    // 0x80278AC4: bne         $v1, $a2, L_80278A54
    if (ctx->r3 != ctx->r6) {
        // 0x80278AC8: nop
    
            goto L_80278A54;
    }
    // 0x80278AC8: nop

    // 0x80278ACC: jr          $ra
    // 0x80278AD0: nop

    return;
    // 0x80278AD0: nop

;}
RECOMP_FUNC void ovl_8024B800_func_80278A84(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
L_80278A54:
    // 0x80278A84: lhu         $t4, 0x10E($v0)
    ctx->r12 = MEM_HU(ctx->r2, 0X10E);
L_80278A84:
    // 0x80278A88: lhu         $t6, 0x206($v0)
    ctx->r14 = MEM_HU(ctx->r2, 0X206);
    // 0x80278A8C: lhu         $t8, 0x2FE($v0)
    ctx->r24 = MEM_HU(ctx->r2, 0X2FE);
    // 0x80278A90: lhu         $t2, 0x16($v0)
    ctx->r10 = MEM_HU(ctx->r2, 0X16);
    // 0x80278A94: addiu       $a0, $a0, 0x4
    ctx->r4 = ADD32(ctx->r4, 0X4);
    // 0x80278A98: andi        $t5, $t4, 0xFDFF
    ctx->r13 = ctx->r12 & 0XFDFF;
    // 0x80278A9C: andi        $t7, $t6, 0xFDFF
    ctx->r15 = ctx->r14 & 0XFDFF;
    // 0x80278AA0: andi        $t9, $t8, 0xFDFF
    ctx->r25 = ctx->r24 & 0XFDFF;
    // 0x80278AA4: andi        $t3, $t2, 0xFDFF
    ctx->r11 = ctx->r10 & 0XFDFF;
    // 0x80278AA8: sh          $t9, 0x2FE($v0)
    MEM_H(0X2FE, ctx->r2) = ctx->r25;
    // 0x80278AAC: sh          $t7, 0x206($v0)
    MEM_H(0X206, ctx->r2) = ctx->r15;
    // 0x80278AB0: sh          $t5, 0x10E($v0)
    MEM_H(0X10E, ctx->r2) = ctx->r13;
    // 0x80278AB4: addiu       $v0, $v0, 0x3E0
    ctx->r2 = ADD32(ctx->r2, 0X3E0);
    // 0x80278AB8: bne         $a0, $a1, L_80278A84
    if (ctx->r4 != ctx->r5) {
        // 0x80278ABC: sh          $t3, -0x3CA($v0)
        MEM_H(-0X3CA, ctx->r2) = ctx->r11;
            goto L_80278A84;
    }
    // 0x80278ABC: sh          $t3, -0x3CA($v0)
    MEM_H(-0X3CA, ctx->r2) = ctx->r11;
    // 0x80278AC0: addiu       $v1, $v1, 0xA94
    ctx->r3 = ADD32(ctx->r3, 0XA94);
    // 0x80278AC4: bne         $v1, $a2, L_80278A54
    if (ctx->r3 != ctx->r6) {
            // 0x80278AC8: nop

    ovl_8024B800_func_80278A54(rdram, ctx);
    return;
    }
    // 0x80278AC8: nop

    // 0x80278ACC: jr          $ra
    // 0x80278AD0: nop

    return;
    // 0x80278AD0: nop

;}
