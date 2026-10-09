#include "iss64_recomp.h"
#include "funcs.h"

RECOMP_FUNC void ovl_8024B800_func_80278AD4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80278AD4: lui         $t6, 0x8012
    ctx->r14 = S32(0X8012 << 16);
    // 0x80278AD8: lhu         $t6, 0xB78($t6)
    ctx->r14 = MEM_HU(ctx->r14, 0XB78);
    // 0x80278ADC: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x80278AE0: bne         $t6, $zero, L_80278EE4
    if (ctx->r14 != 0) {
        // 0x80278AE4: sw          $ra, 0x14($sp)
        MEM_W(0X14, ctx->r29) = ctx->r31;
            goto L_80278EE4;
    }
    // 0x80278AE4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80278AE8: lui         $a2, 0x8009
    ctx->r6 = S32(0X8009 << 16);
    // 0x80278AEC: addiu       $a2, $a2, 0x3B20
    ctx->r6 = ADD32(ctx->r6, 0X3B20);
    // 0x80278AF0: lw          $v0, 0x0($a2)
    ctx->r2 = MEM_W(ctx->r6, 0X0);
    // 0x80278AF4: lui         $t8, 0x800B
    ctx->r24 = S32(0X800B << 16);
    // 0x80278AF8: lbu         $t7, 0xBC($v0)
    ctx->r15 = MEM_BU(ctx->r2, 0XBC);
    // 0x80278AFC: nop

    // 0x80278B00: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x80278B04: lbu         $t8, -0x54C0($t8)
    ctx->r24 = MEM_BU(ctx->r24, -0X54C0);
    // 0x80278B08: nop

    // 0x80278B0C: andi        $t9, $t8, 0x4
    ctx->r25 = ctx->r24 & 0X4;
    // 0x80278B10: bne         $t9, $zero, L_80278B3C
    if (ctx->r25 != 0) {
        // 0x80278B14: nop
    
            goto L_80278B3C;
    }
    // 0x80278B14: nop

    // 0x80278B18: lhu         $t2, 0xC2($v0)
    ctx->r10 = MEM_HU(ctx->r2, 0XC2);
    // 0x80278B1C: nop

    // 0x80278B20: andi        $t3, $t2, 0xFF7F
    ctx->r11 = ctx->r10 & 0XFF7F;
    // 0x80278B24: jal         0x80278A40
    // 0x80278B28: sh          $t3, 0xC2($v0)
    MEM_H(0XC2, ctx->r2) = ctx->r11;
    ovl_8024B800_func_80278A40(rdram, ctx);
        goto after_0;
    // 0x80278B28: sh          $t3, 0xC2($v0)
    MEM_H(0XC2, ctx->r2) = ctx->r11;
    after_0:
    // 0x80278B2C: lui         $a2, 0x8009
    ctx->r6 = S32(0X8009 << 16);
    // 0x80278B30: addiu       $a2, $a2, 0x3B20
    ctx->r6 = ADD32(ctx->r6, 0X3B20);
    // 0x80278B34: lw          $v0, 0x0($a2)
    ctx->r2 = MEM_W(ctx->r6, 0X0);
    // 0x80278B38: nop

L_80278B3C:
    // 0x80278B3C: lw          $t4, 0x8C($v0)
    ctx->r12 = MEM_W(ctx->r2, 0X8C);
    // 0x80278B40: nop

    // 0x80278B44: lw          $t5, 0xC8($t4)
    ctx->r13 = MEM_W(ctx->r12, 0XC8);
    // 0x80278B48: nop

    // 0x80278B4C: lhu         $t6, 0x8($t5)
    ctx->r14 = MEM_HU(ctx->r13, 0X8);
    // 0x80278B50: nop

    // 0x80278B54: andi        $t7, $t6, 0x1
    ctx->r15 = ctx->r14 & 0X1;
    // 0x80278B58: beq         $t7, $zero, L_80278B90
    if (ctx->r15 == 0) {
        // 0x80278B5C: nop
    
            goto L_80278B90;
    }
    // 0x80278B5C: nop

    // 0x80278B60: lwc1        $f12, 0x20($v0)
    ctx->f12.u32l = MEM_W(ctx->r2, 0X20);
    // 0x80278B64: jal         0x80081040
    // 0x80278B68: nop

    func_80081040(rdram, ctx);
        goto after_1;
    // 0x80278B68: nop

    after_1:
    // 0x80278B6C: mtc1        $zero, $f5
    ctx->f_odd[(5 - 1) * 2] = 0;
    // 0x80278B70: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x80278B74: cvt.d.s     $f6, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f6.d = CVT_D_S(ctx->f0.fl);
    // 0x80278B78: c.le.d      $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f6.d <= ctx->f4.d;
    // 0x80278B7C: lui         $a2, 0x8009
    ctx->r6 = S32(0X8009 << 16);
    // 0x80278B80: bc1f        L_80278BB8
    if (!c1cs) {
        // 0x80278B84: addiu       $a2, $a2, 0x3B20
        ctx->r6 = ADD32(ctx->r6, 0X3B20);
            goto L_80278BB8;
    }
    // 0x80278B84: addiu       $a2, $a2, 0x3B20
    ctx->r6 = ADD32(ctx->r6, 0X3B20);
    // 0x80278B88: b           L_80278EE8
    // 0x80278B8C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80278EE8;
    // 0x80278B8C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80278B90:
    // 0x80278B90: lwc1        $f12, 0x20($v0)
    ctx->f12.u32l = MEM_W(ctx->r2, 0X20);
    // 0x80278B94: jal         0x80081040
    // 0x80278B98: nop

    func_80081040(rdram, ctx);
        goto after_2;
    // 0x80278B98: nop

    after_2:
    // 0x80278B9C: mtc1        $zero, $f11
    ctx->f_odd[(11 - 1) * 2] = 0;
    // 0x80278BA0: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x80278BA4: cvt.d.s     $f8, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f8.d = CVT_D_S(ctx->f0.fl);
    // 0x80278BA8: c.le.d      $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f10.d <= ctx->f8.d;
    // 0x80278BAC: lui         $a2, 0x8009
    ctx->r6 = S32(0X8009 << 16);
    // 0x80278BB0: bc1t        L_80278EE4
    if (c1cs) {
        // 0x80278BB4: addiu       $a2, $a2, 0x3B20
        ctx->r6 = ADD32(ctx->r6, 0X3B20);
            goto L_80278EE4;
    }
    // 0x80278BB4: addiu       $a2, $a2, 0x3B20
    ctx->r6 = ADD32(ctx->r6, 0X3B20);
L_80278BB8:
    // 0x80278BB8: lw          $v0, 0x0($a2)
    ctx->r2 = MEM_W(ctx->r6, 0X0);
    // 0x80278BBC: lui         $t9, 0x800B
    ctx->r25 = S32(0X800B << 16);
    // 0x80278BC0: lbu         $t8, 0xBC($v0)
    ctx->r24 = MEM_BU(ctx->r2, 0XBC);
    // 0x80278BC4: nop

    // 0x80278BC8: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x80278BCC: lbu         $t9, -0x54C0($t9)
    ctx->r25 = MEM_BU(ctx->r25, -0X54C0);
    // 0x80278BD0: nop

    // 0x80278BD4: andi        $t2, $t9, 0x2
    ctx->r10 = ctx->r25 & 0X2;
    // 0x80278BD8: beq         $t2, $zero, L_80278EE8
    if (ctx->r10 == 0) {
        // 0x80278BDC: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_80278EE8;
    }
    // 0x80278BDC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80278BE0: lw          $t3, 0x8C($v0)
    ctx->r11 = MEM_W(ctx->r2, 0X8C);
    // 0x80278BE4: lui         $at, 0x8028
    ctx->r1 = S32(0X8028 << 16);
    // 0x80278BE8: lw          $a0, 0xC8($t3)
    ctx->r4 = MEM_W(ctx->r11, 0XC8);
    // 0x80278BEC: nop

    // 0x80278BF0: lhu         $t0, 0x8($a0)
    ctx->r8 = MEM_HU(ctx->r4, 0X8);
    // 0x80278BF4: lw          $t7, 0x24($a0)
    ctx->r15 = MEM_W(ctx->r4, 0X24);
    // 0x80278BF8: andi        $t4, $t0, 0x1
    ctx->r12 = ctx->r8 & 0X1;
    // 0x80278BFC: lh          $a3, 0x8B4($t7)
    ctx->r7 = MEM_H(ctx->r15, 0X8B4);
    // 0x80278C00: sll         $t5, $t4, 16
    ctx->r13 = S32(ctx->r12 << 16);
    // 0x80278C04: sra         $t0, $t5, 16
    ctx->r8 = S32(SIGNED(ctx->r13) >> 16);
    // 0x80278C08: lw          $v1, 0x18($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X18);
    // 0x80278C0C: beq         $t0, $zero, L_80278C24
    if (ctx->r8 == 0) {
        // 0x80278C10: negu        $a0, $a3
        ctx->r4 = SUB32(0, ctx->r7);
            goto L_80278C24;
    }
    // 0x80278C10: negu        $a0, $a3
    ctx->r4 = SUB32(0, ctx->r7);
    // 0x80278C14: negu        $a0, $a3
    ctx->r4 = SUB32(0, ctx->r7);
    // 0x80278C18: lui         $at, 0x8028
    ctx->r1 = S32(0X8028 << 16);
    // 0x80278C1C: b           L_80278C28
    // 0x80278C20: sh          $a0, -0x1A48($at)
    MEM_H(-0X1A48, ctx->r1) = ctx->r4;
        goto L_80278C28;
    // 0x80278C20: sh          $a0, -0x1A48($at)
    MEM_H(-0X1A48, ctx->r1) = ctx->r4;
L_80278C24:
    // 0x80278C24: sh          $a3, -0x1A48($at)
    MEM_H(-0X1A48, ctx->r1) = ctx->r7;
L_80278C28:
    // 0x80278C28: lwc1        $f12, 0x20($v0)
    ctx->f12.u32l = MEM_W(ctx->r2, 0X20);
    // 0x80278C2C: sh          $t0, 0x20($sp)
    MEM_H(0X20, ctx->r29) = ctx->r8;
    // 0x80278C30: sh          $a0, 0x22($sp)
    MEM_H(0X22, ctx->r29) = ctx->r4;
    // 0x80278C34: jal         0x80081040
    // 0x80278C38: sw          $v1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r3;
    func_80081040(rdram, ctx);
        goto after_3;
    // 0x80278C38: sw          $v1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r3;
    after_3:
    // 0x80278C3C: lui         $at, 0x8028
    ctx->r1 = S32(0X8028 << 16);
    // 0x80278C40: lwc1        $f17, -0x1C20($at)
    ctx->f_odd[(17 - 1) * 2] = MEM_W(ctx->r1, -0X1C20);
    // 0x80278C44: lwc1        $f16, -0x1C1C($at)
    ctx->f16.u32l = MEM_W(ctx->r1, -0X1C1C);
    // 0x80278C48: cvt.d.s     $f18, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f18.d = CVT_D_S(ctx->f0.fl);
    // 0x80278C4C: c.lt.d      $f16, $f18
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f16.d < ctx->f18.d;
    // 0x80278C50: lw          $v1, 0x1C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X1C);
    // 0x80278C54: lui         $a2, 0x8009
    ctx->r6 = S32(0X8009 << 16);
    // 0x80278C58: lh          $a3, 0x22($sp)
    ctx->r7 = MEM_H(ctx->r29, 0X22);
    // 0x80278C5C: lh          $t0, 0x20($sp)
    ctx->r8 = MEM_H(ctx->r29, 0X20);
    // 0x80278C60: bc1f        L_80278D14
    if (!c1cs) {
        // 0x80278C64: addiu       $a2, $a2, 0x3B20
        ctx->r6 = ADD32(ctx->r6, 0X3B20);
            goto L_80278D14;
    }
    // 0x80278C64: addiu       $a2, $a2, 0x3B20
    ctx->r6 = ADD32(ctx->r6, 0X3B20);
    // 0x80278C68: lw          $t9, 0x0($a2)
    ctx->r25 = MEM_W(ctx->r6, 0X0);
    // 0x80278C6C: nop

    // 0x80278C70: lwc1        $f12, 0x20($t9)
    ctx->f12.u32l = MEM_W(ctx->r25, 0X20);
    // 0x80278C74: sh          $t0, 0x20($sp)
    MEM_H(0X20, ctx->r29) = ctx->r8;
    // 0x80278C78: sh          $a3, 0x22($sp)
    MEM_H(0X22, ctx->r29) = ctx->r7;
    // 0x80278C7C: jal         0x80080E80
    // 0x80278C80: sw          $v1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r3;
    func_80080E80(rdram, ctx);
        goto after_4;
    // 0x80278C80: sw          $v1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r3;
    after_4:
    // 0x80278C84: lui         $a2, 0x8009
    ctx->r6 = S32(0X8009 << 16);
    // 0x80278C88: addiu       $a2, $a2, 0x3B20
    ctx->r6 = ADD32(ctx->r6, 0X3B20);
    // 0x80278C8C: lw          $t2, 0x0($a2)
    ctx->r10 = MEM_W(ctx->r6, 0X0);
    // 0x80278C90: nop

    // 0x80278C94: lwc1        $f12, 0x20($t2)
    ctx->f12.u32l = MEM_W(ctx->r10, 0X20);
    // 0x80278C98: jal         0x80081040
    // 0x80278C9C: swc1        $f0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f0.u32l;
    func_80081040(rdram, ctx);
        goto after_5;
    // 0x80278C9C: swc1        $f0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f0.u32l;
    after_5:
    // 0x80278CA0: lwc1        $f2, 0x18($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X18);
    // 0x80278CA4: lui         $a2, 0x8009
    ctx->r6 = S32(0X8009 << 16);
    // 0x80278CA8: div.s       $f12, $f2, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f12.fl = DIV_S(ctx->f2.fl, ctx->f0.fl);
    // 0x80278CAC: addiu       $a2, $a2, 0x3B20
    ctx->r6 = ADD32(ctx->r6, 0X3B20);
    // 0x80278CB0: lui         $t3, 0x8028
    ctx->r11 = S32(0X8028 << 16);
    // 0x80278CB4: lw          $v0, 0x0($a2)
    ctx->r2 = MEM_W(ctx->r6, 0X0);
    // 0x80278CB8: lh          $t3, -0x1A48($t3)
    ctx->r11 = MEM_H(ctx->r11, -0X1A48);
    // 0x80278CBC: lwc1        $f6, 0x8($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0X8);
    // 0x80278CC0: mtc1        $t3, $f10
    ctx->f10.u32l = ctx->r11;
    // 0x80278CC4: lwc1        $f4, 0x0($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X0);
    // 0x80278CC8: lw          $v1, 0x1C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X1C);
    // 0x80278CCC: lh          $a3, 0x22($sp)
    ctx->r7 = MEM_H(ctx->r29, 0X22);
    // 0x80278CD0: lh          $t0, 0x20($sp)
    ctx->r8 = MEM_H(ctx->r29, 0X20);
    // 0x80278CD4: mul.s       $f8, $f12, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f12.fl, ctx->f6.fl);
    // 0x80278CD8: cvt.s.w     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.fl = CVT_S_W(ctx->f10.u32l);
    // 0x80278CDC: mul.s       $f18, $f16, $f12
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f18.fl = MUL_S(ctx->f16.fl, ctx->f12.fl);
    // 0x80278CE0: sub.s       $f14, $f4, $f8
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f14.fl = ctx->f4.fl - ctx->f8.fl;
    // 0x80278CE4: add.s       $f6, $f18, $f14
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f6.fl = ctx->f18.fl + ctx->f14.fl;
    // 0x80278CE8: cfc1        $t4, $FpcCsr
    ctx->r12 = get_cop1_cs();
    // 0x80278CEC: nop

    // 0x80278CF0: ori         $at, $t4, 0x3
    ctx->r1 = ctx->r12 | 0X3;
    // 0x80278CF4: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x80278CF8: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x80278CFC: lui         $at, 0x8028
    ctx->r1 = S32(0X8028 << 16);
    // 0x80278D00: cvt.w.s     $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    ctx->f4.u32l = CVT_W_S(ctx->f6.fl);
    // 0x80278D04: mfc1        $t5, $f4
    ctx->r13 = (int32_t)ctx->f4.u32l;
    // 0x80278D08: ctc1        $t4, $FpcCsr
    set_cop1_cs(ctx->r12);
    // 0x80278D0C: b           L_80278D44
    // 0x80278D10: sh          $t5, -0x1A46($at)
    MEM_H(-0X1A46, ctx->r1) = ctx->r13;
        goto L_80278D44;
    // 0x80278D10: sh          $t5, -0x1A46($at)
    MEM_H(-0X1A46, ctx->r1) = ctx->r13;
L_80278D14:
    // 0x80278D14: cfc1        $t6, $FpcCsr
    ctx->r14 = get_cop1_cs();
    // 0x80278D18: lw          $v0, 0x0($a2)
    ctx->r2 = MEM_W(ctx->r6, 0X0);
    // 0x80278D1C: ori         $at, $t6, 0x3
    ctx->r1 = ctx->r14 | 0X3;
    // 0x80278D20: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x80278D24: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x80278D28: lwc1        $f8, 0x0($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X0);
    // 0x80278D2C: lui         $at, 0x8028
    ctx->r1 = S32(0X8028 << 16);
    // 0x80278D30: cvt.w.s     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.u32l = CVT_W_S(ctx->f8.fl);
    // 0x80278D34: mfc1        $t7, $f10
    ctx->r15 = (int32_t)ctx->f10.u32l;
    // 0x80278D38: ctc1        $t6, $FpcCsr
    set_cop1_cs(ctx->r14);
    // 0x80278D3C: sh          $t7, -0x1A46($at)
    MEM_H(-0X1A46, ctx->r1) = ctx->r15;
    // 0x80278D40: nop

L_80278D44:
    // 0x80278D44: lw          $t8, 0x8C($v0)
    ctx->r24 = MEM_W(ctx->r2, 0X8C);
    // 0x80278D48: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80278D4C: beq         $v1, $t8, L_80278DC4
    if (ctx->r3 == ctx->r24) {
        // 0x80278D50: addiu       $t1, $zero, 0xB
        ctx->r9 = ADD32(0, 0XB);
            goto L_80278DC4;
    }
    // 0x80278D50: addiu       $t1, $zero, 0xB
    ctx->r9 = ADD32(0, 0XB);
    // 0x80278D54: mtc1        $a3, $f16
    ctx->f16.u32l = ctx->r7;
    // 0x80278D58: beq         $t0, $zero, L_80278D6C
    if (ctx->r8 == 0) {
        // 0x80278D5C: cvt.s.w     $f18, $f16
        CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
            goto L_80278D6C;
    }
    // 0x80278D5C: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x80278D60: lwc1        $f2, 0x4C($v1)
    ctx->f2.u32l = MEM_W(ctx->r3, 0X4C);
    // 0x80278D64: b           L_80278D7C
    // 0x80278D68: c.lt.s      $f18, $f2
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f18.fl < ctx->f2.fl;
        goto L_80278D7C;
    // 0x80278D68: c.lt.s      $f18, $f2
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f18.fl < ctx->f2.fl;
L_80278D6C:
    // 0x80278D6C: lwc1        $f2, 0x4C($v1)
    ctx->f2.u32l = MEM_W(ctx->r3, 0X4C);
    // 0x80278D70: nop

    // 0x80278D74: neg.s       $f2, $f2
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f2.fl = -ctx->f2.fl;
    // 0x80278D78: c.lt.s      $f18, $f2
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f18.fl < ctx->f2.fl;
L_80278D7C:
    // 0x80278D7C: nop

    // 0x80278D80: bc1f        L_80278DC4
    if (!c1cs) {
        // 0x80278D84: nop
    
            goto L_80278DC4;
    }
    // 0x80278D84: nop

    // 0x80278D88: lhu         $t9, 0x16($v1)
    ctx->r25 = MEM_HU(ctx->r3, 0X16);
    // 0x80278D8C: nop

    // 0x80278D90: ori         $t2, $t9, 0x200
    ctx->r10 = ctx->r25 | 0X200;
    // 0x80278D94: sh          $t2, 0x16($v1)
    MEM_H(0X16, ctx->r3) = ctx->r10;
    // 0x80278D98: lw          $v0, 0x0($a2)
    ctx->r2 = MEM_W(ctx->r6, 0X0);
    // 0x80278D9C: nop

    // 0x80278DA0: lhu         $t3, 0xC2($v0)
    ctx->r11 = MEM_HU(ctx->r2, 0XC2);
    // 0x80278DA4: nop

    // 0x80278DA8: ori         $t4, $t3, 0x80
    ctx->r12 = ctx->r11 | 0X80;
    // 0x80278DAC: sh          $t4, 0xC2($v0)
    MEM_H(0XC2, ctx->r2) = ctx->r12;
    // 0x80278DB0: lw          $v0, 0x0($a2)
    ctx->r2 = MEM_W(ctx->r6, 0X0);
    // 0x80278DB4: nop

    // 0x80278DB8: lw          $t5, 0x8C($v0)
    ctx->r13 = MEM_W(ctx->r2, 0X8C);
    // 0x80278DBC: nop

    // 0x80278DC0: sw          $t5, 0xAC($v0)
    MEM_W(0XAC, ctx->r2) = ctx->r13;
L_80278DC4:
    // 0x80278DC4: addiu       $v1, $v1, 0xF8
    ctx->r3 = ADD32(ctx->r3, 0XF8);
L_80278DC8:
    // 0x80278DC8: lw          $t6, 0x0($a2)
    ctx->r14 = MEM_W(ctx->r6, 0X0);
    // 0x80278DCC: addiu       $a1, $a1, 0x2
    ctx->r5 = ADD32(ctx->r5, 0X2);
    // 0x80278DD0: lw          $a0, 0x8C($t6)
    ctx->r4 = MEM_W(ctx->r14, 0X8C);
    // 0x80278DD4: nop

    // 0x80278DD8: beq         $v1, $a0, L_80278E60
    if (ctx->r3 == ctx->r4) {
        // 0x80278DDC: nop
    
            goto L_80278E60;
    }
    // 0x80278DDC: nop

    // 0x80278DE0: mtc1        $a3, $f6
    ctx->f6.u32l = ctx->r7;
    // 0x80278DE4: beq         $t0, $zero, L_80278DF8
    if (ctx->r8 == 0) {
        // 0x80278DE8: cvt.s.w     $f0, $f6
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    ctx->f0.fl = CVT_S_W(ctx->f6.u32l);
            goto L_80278DF8;
    }
    // 0x80278DE8: cvt.s.w     $f0, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    ctx->f0.fl = CVT_S_W(ctx->f6.u32l);
    // 0x80278DEC: lwc1        $f2, 0x4C($v1)
    ctx->f2.u32l = MEM_W(ctx->r3, 0X4C);
    // 0x80278DF0: b           L_80278E08
    // 0x80278DF4: c.lt.s      $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f0.fl < ctx->f2.fl;
        goto L_80278E08;
    // 0x80278DF4: c.lt.s      $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f0.fl < ctx->f2.fl;
L_80278DF8:
    // 0x80278DF8: lwc1        $f2, 0x4C($v1)
    ctx->f2.u32l = MEM_W(ctx->r3, 0X4C);
    // 0x80278DFC: nop

    // 0x80278E00: neg.s       $f2, $f2
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f2.fl = -ctx->f2.fl;
    // 0x80278E04: c.lt.s      $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f0.fl < ctx->f2.fl;
L_80278E08:
    // 0x80278E08: nop

    // 0x80278E0C: bc1f        L_80278E60
    if (!c1cs) {
        // 0x80278E10: nop
    
            goto L_80278E60;
    }
    // 0x80278E10: nop

    // 0x80278E14: lhu         $t7, 0x16($v1)
    ctx->r15 = MEM_HU(ctx->r3, 0X16);
    // 0x80278E18: nop

    // 0x80278E1C: ori         $t8, $t7, 0x200
    ctx->r24 = ctx->r15 | 0X200;
    // 0x80278E20: sh          $t8, 0x16($v1)
    MEM_H(0X16, ctx->r3) = ctx->r24;
    // 0x80278E24: lw          $v0, 0x0($a2)
    ctx->r2 = MEM_W(ctx->r6, 0X0);
    // 0x80278E28: nop

    // 0x80278E2C: lhu         $t9, 0xC2($v0)
    ctx->r25 = MEM_HU(ctx->r2, 0XC2);
    // 0x80278E30: nop

    // 0x80278E34: ori         $t2, $t9, 0x80
    ctx->r10 = ctx->r25 | 0X80;
    // 0x80278E38: sh          $t2, 0xC2($v0)
    MEM_H(0XC2, ctx->r2) = ctx->r10;
    // 0x80278E3C: lw          $v0, 0x0($a2)
    ctx->r2 = MEM_W(ctx->r6, 0X0);
    // 0x80278E40: nop

    // 0x80278E44: lw          $t3, 0x8C($v0)
    ctx->r11 = MEM_W(ctx->r2, 0X8C);
    // 0x80278E48: nop

    // 0x80278E4C: sw          $t3, 0xAC($v0)
    MEM_W(0XAC, ctx->r2) = ctx->r11;
    // 0x80278E50: lw          $t4, 0x0($a2)
    ctx->r12 = MEM_W(ctx->r6, 0X0);
    // 0x80278E54: nop

    // 0x80278E58: lw          $a0, 0x8C($t4)
    ctx->r4 = MEM_W(ctx->r12, 0X8C);
    // 0x80278E5C: nop

L_80278E60:
    // 0x80278E60: addiu       $v1, $v1, 0xF8
    ctx->r3 = ADD32(ctx->r3, 0XF8);
    // 0x80278E64: beq         $v1, $a0, L_80278EDC
    if (ctx->r3 == ctx->r4) {
        // 0x80278E68: nop
    
            goto L_80278EDC;
    }
    // 0x80278E68: nop

    // 0x80278E6C: mtc1        $a3, $f4
    ctx->f4.u32l = ctx->r7;
    // 0x80278E70: beq         $t0, $zero, L_80278E84
    if (ctx->r8 == 0) {
        // 0x80278E74: cvt.s.w     $f0, $f4
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    ctx->f0.fl = CVT_S_W(ctx->f4.u32l);
            goto L_80278E84;
    }
    // 0x80278E74: cvt.s.w     $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    ctx->f0.fl = CVT_S_W(ctx->f4.u32l);
    // 0x80278E78: lwc1        $f2, 0x4C($v1)
    ctx->f2.u32l = MEM_W(ctx->r3, 0X4C);
    // 0x80278E7C: b           L_80278E94
    // 0x80278E80: c.lt.s      $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f0.fl < ctx->f2.fl;
        goto L_80278E94;
    // 0x80278E80: c.lt.s      $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f0.fl < ctx->f2.fl;
L_80278E84:
    // 0x80278E84: lwc1        $f2, 0x4C($v1)
    ctx->f2.u32l = MEM_W(ctx->r3, 0X4C);
    // 0x80278E88: nop

    // 0x80278E8C: neg.s       $f2, $f2
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f2.fl = -ctx->f2.fl;
    // 0x80278E90: c.lt.s      $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f0.fl < ctx->f2.fl;
L_80278E94:
    // 0x80278E94: nop

    // 0x80278E98: bc1f        L_80278EDC
    if (!c1cs) {
        // 0x80278E9C: nop
    
            goto L_80278EDC;
    }
    // 0x80278E9C: nop

    // 0x80278EA0: lhu         $t5, 0x16($v1)
    ctx->r13 = MEM_HU(ctx->r3, 0X16);
    // 0x80278EA4: nop

    // 0x80278EA8: ori         $t6, $t5, 0x200
    ctx->r14 = ctx->r13 | 0X200;
    // 0x80278EAC: sh          $t6, 0x16($v1)
    MEM_H(0X16, ctx->r3) = ctx->r14;
    // 0x80278EB0: lw          $v0, 0x0($a2)
    ctx->r2 = MEM_W(ctx->r6, 0X0);
    // 0x80278EB4: nop

    // 0x80278EB8: lhu         $t7, 0xC2($v0)
    ctx->r15 = MEM_HU(ctx->r2, 0XC2);
    // 0x80278EBC: nop

    // 0x80278EC0: ori         $t8, $t7, 0x80
    ctx->r24 = ctx->r15 | 0X80;
    // 0x80278EC4: sh          $t8, 0xC2($v0)
    MEM_H(0XC2, ctx->r2) = ctx->r24;
    // 0x80278EC8: lw          $v0, 0x0($a2)
    ctx->r2 = MEM_W(ctx->r6, 0X0);
    // 0x80278ECC: nop

    // 0x80278ED0: lw          $t9, 0x8C($v0)
    ctx->r25 = MEM_W(ctx->r2, 0X8C);
    // 0x80278ED4: nop

    // 0x80278ED8: sw          $t9, 0xAC($v0)
    MEM_W(0XAC, ctx->r2) = ctx->r25;
L_80278EDC:
    // 0x80278EDC: bne         $a1, $t1, L_80278DC8
    if (ctx->r5 != ctx->r9) {
        // 0x80278EE0: addiu       $v1, $v1, 0xF8
        ctx->r3 = ADD32(ctx->r3, 0XF8);
            goto L_80278DC8;
    }
    // 0x80278EE0: addiu       $v1, $v1, 0xF8
    ctx->r3 = ADD32(ctx->r3, 0XF8);
L_80278EE4:
    // 0x80278EE4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80278EE8:
    // 0x80278EE8: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x80278EEC: jr          $ra
    // 0x80278EF0: nop

    return;
    // 0x80278EF0: nop

;}
RECOMP_FUNC void ovl_8024B800_func_80278CD0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80278CD0: lh          $t0, 0x20($sp)
    ctx->r8 = MEM_H(ctx->r29, 0X20);
    // 0x80278CD4: mul.s       $f8, $f12, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f12.fl, ctx->f6.fl);
    // 0x80278CD8: cvt.s.w     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.fl = CVT_S_W(ctx->f10.u32l);
    // 0x80278CDC: mul.s       $f18, $f16, $f12
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f18.fl = MUL_S(ctx->f16.fl, ctx->f12.fl);
    // 0x80278CE0: sub.s       $f14, $f4, $f8
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f14.fl = ctx->f4.fl - ctx->f8.fl;
    // 0x80278CE4: add.s       $f6, $f18, $f14
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f6.fl = ctx->f18.fl + ctx->f14.fl;
    // 0x80278CE8: cfc1        $t4, $FpcCsr
    ctx->r12 = get_cop1_cs();
    // 0x80278CEC: nop

    // 0x80278CF0: ori         $at, $t4, 0x3
    ctx->r1 = ctx->r12 | 0X3;
    // 0x80278CF4: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x80278CF8: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x80278CFC: lui         $at, 0x8028
    ctx->r1 = S32(0X8028 << 16);
    // 0x80278D00: cvt.w.s     $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    ctx->f4.u32l = CVT_W_S(ctx->f6.fl);
    // 0x80278D04: mfc1        $t5, $f4
    ctx->r13 = (int32_t)ctx->f4.u32l;
    // 0x80278D08: ctc1        $t4, $FpcCsr
    set_cop1_cs(ctx->r12);
    // 0x80278D0C: b           L_80278D44
    // 0x80278D10: sh          $t5, -0x1A46($at)
    MEM_H(-0X1A46, ctx->r1) = ctx->r13;
        goto L_80278D44;
    // 0x80278D10: sh          $t5, -0x1A46($at)
    MEM_H(-0X1A46, ctx->r1) = ctx->r13;
    // 0x80278D14: cfc1        $t6, $FpcCsr
    ctx->r14 = get_cop1_cs();
    // 0x80278D18: lw          $v0, 0x0($a2)
    ctx->r2 = MEM_W(ctx->r6, 0X0);
    // 0x80278D1C: ori         $at, $t6, 0x3
    ctx->r1 = ctx->r14 | 0X3;
    // 0x80278D20: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x80278D24: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x80278D28: lwc1        $f8, 0x0($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X0);
    // 0x80278D2C: lui         $at, 0x8028
    ctx->r1 = S32(0X8028 << 16);
    // 0x80278D30: cvt.w.s     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.u32l = CVT_W_S(ctx->f8.fl);
    // 0x80278D34: mfc1        $t7, $f10
    ctx->r15 = (int32_t)ctx->f10.u32l;
    // 0x80278D38: ctc1        $t6, $FpcCsr
    set_cop1_cs(ctx->r14);
    // 0x80278D3C: sh          $t7, -0x1A46($at)
    MEM_H(-0X1A46, ctx->r1) = ctx->r15;
    // 0x80278D40: nop

L_80278D44:
    // 0x80278D44: lw          $t8, 0x8C($v0)
    ctx->r24 = MEM_W(ctx->r2, 0X8C);
    // 0x80278D48: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80278D4C: beq         $v1, $t8, L_80278DC4
    if (ctx->r3 == ctx->r24) {
        // 0x80278D50: addiu       $t1, $zero, 0xB
        ctx->r9 = ADD32(0, 0XB);
            goto L_80278DC4;
    }
    // 0x80278D50: addiu       $t1, $zero, 0xB
    ctx->r9 = ADD32(0, 0XB);
    // 0x80278D54: mtc1        $a3, $f16
    ctx->f16.u32l = ctx->r7;
    // 0x80278D58: beq         $t0, $zero, L_80278D6C
    if (ctx->r8 == 0) {
        // 0x80278D5C: cvt.s.w     $f18, $f16
        CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
            goto L_80278D6C;
    }
    // 0x80278D5C: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x80278D60: lwc1        $f2, 0x4C($v1)
    ctx->f2.u32l = MEM_W(ctx->r3, 0X4C);
    // 0x80278D64: b           L_80278D7C
    // 0x80278D68: c.lt.s      $f18, $f2
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f18.fl < ctx->f2.fl;
        goto L_80278D7C;
    // 0x80278D68: c.lt.s      $f18, $f2
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f18.fl < ctx->f2.fl;
L_80278D6C:
    // 0x80278D6C: lwc1        $f2, 0x4C($v1)
    ctx->f2.u32l = MEM_W(ctx->r3, 0X4C);
    // 0x80278D70: nop

    // 0x80278D74: neg.s       $f2, $f2
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f2.fl = -ctx->f2.fl;
    // 0x80278D78: c.lt.s      $f18, $f2
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f18.fl < ctx->f2.fl;
L_80278D7C:
    // 0x80278D7C: nop

    // 0x80278D80: bc1f        L_80278DC4
    if (!c1cs) {
        // 0x80278D84: nop
    
            goto L_80278DC4;
    }
    // 0x80278D84: nop

    // 0x80278D88: lhu         $t9, 0x16($v1)
    ctx->r25 = MEM_HU(ctx->r3, 0X16);
    // 0x80278D8C: nop

    // 0x80278D90: ori         $t2, $t9, 0x200
    ctx->r10 = ctx->r25 | 0X200;
    // 0x80278D94: sh          $t2, 0x16($v1)
    MEM_H(0X16, ctx->r3) = ctx->r10;
    // 0x80278D98: lw          $v0, 0x0($a2)
    ctx->r2 = MEM_W(ctx->r6, 0X0);
    // 0x80278D9C: nop

    // 0x80278DA0: lhu         $t3, 0xC2($v0)
    ctx->r11 = MEM_HU(ctx->r2, 0XC2);
    // 0x80278DA4: nop

    // 0x80278DA8: ori         $t4, $t3, 0x80
    ctx->r12 = ctx->r11 | 0X80;
    // 0x80278DAC: sh          $t4, 0xC2($v0)
    MEM_H(0XC2, ctx->r2) = ctx->r12;
    // 0x80278DB0: lw          $v0, 0x0($a2)
    ctx->r2 = MEM_W(ctx->r6, 0X0);
    // 0x80278DB4: nop

    // 0x80278DB8: lw          $t5, 0x8C($v0)
    ctx->r13 = MEM_W(ctx->r2, 0X8C);
    // 0x80278DBC: nop

    // 0x80278DC0: sw          $t5, 0xAC($v0)
    MEM_W(0XAC, ctx->r2) = ctx->r13;
L_80278DC4:
    // 0x80278DC4: addiu       $v1, $v1, 0xF8
    ctx->r3 = ADD32(ctx->r3, 0XF8);
L_80278DC8:
    // 0x80278DC8: lw          $t6, 0x0($a2)
    ctx->r14 = MEM_W(ctx->r6, 0X0);
    // 0x80278DCC: addiu       $a1, $a1, 0x2
    ctx->r5 = ADD32(ctx->r5, 0X2);
    // 0x80278DD0: lw          $a0, 0x8C($t6)
    ctx->r4 = MEM_W(ctx->r14, 0X8C);
    // 0x80278DD4: nop

    // 0x80278DD8: beq         $v1, $a0, L_80278E60
    if (ctx->r3 == ctx->r4) {
        // 0x80278DDC: nop
    
            goto L_80278E60;
    }
    // 0x80278DDC: nop

    // 0x80278DE0: mtc1        $a3, $f6
    ctx->f6.u32l = ctx->r7;
    // 0x80278DE4: beq         $t0, $zero, L_80278DF8
    if (ctx->r8 == 0) {
        // 0x80278DE8: cvt.s.w     $f0, $f6
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    ctx->f0.fl = CVT_S_W(ctx->f6.u32l);
            goto L_80278DF8;
    }
    // 0x80278DE8: cvt.s.w     $f0, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    ctx->f0.fl = CVT_S_W(ctx->f6.u32l);
    // 0x80278DEC: lwc1        $f2, 0x4C($v1)
    ctx->f2.u32l = MEM_W(ctx->r3, 0X4C);
    // 0x80278DF0: b           L_80278E08
    // 0x80278DF4: c.lt.s      $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f0.fl < ctx->f2.fl;
        goto L_80278E08;
    // 0x80278DF4: c.lt.s      $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f0.fl < ctx->f2.fl;
L_80278DF8:
    // 0x80278DF8: lwc1        $f2, 0x4C($v1)
    ctx->f2.u32l = MEM_W(ctx->r3, 0X4C);
    // 0x80278DFC: nop

    // 0x80278E00: neg.s       $f2, $f2
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f2.fl = -ctx->f2.fl;
    // 0x80278E04: c.lt.s      $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f0.fl < ctx->f2.fl;
L_80278E08:
    // 0x80278E08: nop

    // 0x80278E0C: bc1f        L_80278E60
    if (!c1cs) {
        // 0x80278E10: nop
    
            goto L_80278E60;
    }
    // 0x80278E10: nop

    // 0x80278E14: lhu         $t7, 0x16($v1)
    ctx->r15 = MEM_HU(ctx->r3, 0X16);
    // 0x80278E18: nop

    // 0x80278E1C: ori         $t8, $t7, 0x200
    ctx->r24 = ctx->r15 | 0X200;
    // 0x80278E20: sh          $t8, 0x16($v1)
    MEM_H(0X16, ctx->r3) = ctx->r24;
    // 0x80278E24: lw          $v0, 0x0($a2)
    ctx->r2 = MEM_W(ctx->r6, 0X0);
    // 0x80278E28: nop

    // 0x80278E2C: lhu         $t9, 0xC2($v0)
    ctx->r25 = MEM_HU(ctx->r2, 0XC2);
    // 0x80278E30: nop

    // 0x80278E34: ori         $t2, $t9, 0x80
    ctx->r10 = ctx->r25 | 0X80;
    // 0x80278E38: sh          $t2, 0xC2($v0)
    MEM_H(0XC2, ctx->r2) = ctx->r10;
    // 0x80278E3C: lw          $v0, 0x0($a2)
    ctx->r2 = MEM_W(ctx->r6, 0X0);
    // 0x80278E40: nop

    // 0x80278E44: lw          $t3, 0x8C($v0)
    ctx->r11 = MEM_W(ctx->r2, 0X8C);
    // 0x80278E48: nop

    // 0x80278E4C: sw          $t3, 0xAC($v0)
    MEM_W(0XAC, ctx->r2) = ctx->r11;
    // 0x80278E50: lw          $t4, 0x0($a2)
    ctx->r12 = MEM_W(ctx->r6, 0X0);
    // 0x80278E54: nop

    // 0x80278E58: lw          $a0, 0x8C($t4)
    ctx->r4 = MEM_W(ctx->r12, 0X8C);
    // 0x80278E5C: nop

L_80278E60:
    // 0x80278E60: addiu       $v1, $v1, 0xF8
    ctx->r3 = ADD32(ctx->r3, 0XF8);
    // 0x80278E64: beq         $v1, $a0, L_80278EDC
    if (ctx->r3 == ctx->r4) {
        // 0x80278E68: nop
    
            goto L_80278EDC;
    }
    // 0x80278E68: nop

    // 0x80278E6C: mtc1        $a3, $f4
    ctx->f4.u32l = ctx->r7;
    // 0x80278E70: beq         $t0, $zero, L_80278E84
    if (ctx->r8 == 0) {
        // 0x80278E74: cvt.s.w     $f0, $f4
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    ctx->f0.fl = CVT_S_W(ctx->f4.u32l);
            goto L_80278E84;
    }
    // 0x80278E74: cvt.s.w     $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    ctx->f0.fl = CVT_S_W(ctx->f4.u32l);
    // 0x80278E78: lwc1        $f2, 0x4C($v1)
    ctx->f2.u32l = MEM_W(ctx->r3, 0X4C);
    // 0x80278E7C: b           L_80278E94
    // 0x80278E80: c.lt.s      $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f0.fl < ctx->f2.fl;
        goto L_80278E94;
    // 0x80278E80: c.lt.s      $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f0.fl < ctx->f2.fl;
L_80278E84:
    // 0x80278E84: lwc1        $f2, 0x4C($v1)
    ctx->f2.u32l = MEM_W(ctx->r3, 0X4C);
    // 0x80278E88: nop

    // 0x80278E8C: neg.s       $f2, $f2
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f2.fl = -ctx->f2.fl;
    // 0x80278E90: c.lt.s      $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f0.fl < ctx->f2.fl;
L_80278E94:
    // 0x80278E94: nop

    // 0x80278E98: bc1f        L_80278EDC
    if (!c1cs) {
        // 0x80278E9C: nop
    
            goto L_80278EDC;
    }
    // 0x80278E9C: nop

    // 0x80278EA0: lhu         $t5, 0x16($v1)
    ctx->r13 = MEM_HU(ctx->r3, 0X16);
    // 0x80278EA4: nop

    // 0x80278EA8: ori         $t6, $t5, 0x200
    ctx->r14 = ctx->r13 | 0X200;
    // 0x80278EAC: sh          $t6, 0x16($v1)
    MEM_H(0X16, ctx->r3) = ctx->r14;
    // 0x80278EB0: lw          $v0, 0x0($a2)
    ctx->r2 = MEM_W(ctx->r6, 0X0);
    // 0x80278EB4: nop

    // 0x80278EB8: lhu         $t7, 0xC2($v0)
    ctx->r15 = MEM_HU(ctx->r2, 0XC2);
    // 0x80278EBC: nop

    // 0x80278EC0: ori         $t8, $t7, 0x80
    ctx->r24 = ctx->r15 | 0X80;
    // 0x80278EC4: sh          $t8, 0xC2($v0)
    MEM_H(0XC2, ctx->r2) = ctx->r24;
    // 0x80278EC8: lw          $v0, 0x0($a2)
    ctx->r2 = MEM_W(ctx->r6, 0X0);
    // 0x80278ECC: nop

    // 0x80278ED0: lw          $t9, 0x8C($v0)
    ctx->r25 = MEM_W(ctx->r2, 0X8C);
    // 0x80278ED4: nop

    // 0x80278ED8: sw          $t9, 0xAC($v0)
    MEM_W(0XAC, ctx->r2) = ctx->r25;
L_80278EDC:
    // 0x80278EDC: bne         $a1, $t1, L_80278DC8
    if (ctx->r5 != ctx->r9) {
        // 0x80278EE0: addiu       $v1, $v1, 0xF8
        ctx->r3 = ADD32(ctx->r3, 0XF8);
            goto L_80278DC8;
    }
    // 0x80278EE0: addiu       $v1, $v1, 0xF8
    ctx->r3 = ADD32(ctx->r3, 0XF8);
    // 0x80278EE4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80278EE8: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x80278EEC: jr          $ra
    // 0x80278EF0: nop

    return;
    // 0x80278EF0: nop

;}
RECOMP_FUNC void ovl_8024B800_func_80278DC8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
L_80278DC8:
    // 0x80278DC8: lw          $t6, 0x0($a2)
    ctx->r14 = MEM_W(ctx->r6, 0X0);
    // 0x80278DCC: addiu       $a1, $a1, 0x2
    ctx->r5 = ADD32(ctx->r5, 0X2);
    // 0x80278DD0: lw          $a0, 0x8C($t6)
    ctx->r4 = MEM_W(ctx->r14, 0X8C);
    // 0x80278DD4: nop

    // 0x80278DD8: beq         $v1, $a0, L_80278E60
    if (ctx->r3 == ctx->r4) {
        // 0x80278DDC: nop
    
            goto L_80278E60;
    }
    // 0x80278DDC: nop

    // 0x80278DE0: mtc1        $a3, $f6
    ctx->f6.u32l = ctx->r7;
    // 0x80278DE4: beq         $t0, $zero, L_80278DF8
    if (ctx->r8 == 0) {
        // 0x80278DE8: cvt.s.w     $f0, $f6
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    ctx->f0.fl = CVT_S_W(ctx->f6.u32l);
            goto L_80278DF8;
    }
    // 0x80278DE8: cvt.s.w     $f0, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    ctx->f0.fl = CVT_S_W(ctx->f6.u32l);
    // 0x80278DEC: lwc1        $f2, 0x4C($v1)
    ctx->f2.u32l = MEM_W(ctx->r3, 0X4C);
    // 0x80278DF0: b           L_80278E08
    // 0x80278DF4: c.lt.s      $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f0.fl < ctx->f2.fl;
        goto L_80278E08;
    // 0x80278DF4: c.lt.s      $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f0.fl < ctx->f2.fl;
L_80278DF8:
    // 0x80278DF8: lwc1        $f2, 0x4C($v1)
    ctx->f2.u32l = MEM_W(ctx->r3, 0X4C);
    // 0x80278DFC: nop

    // 0x80278E00: neg.s       $f2, $f2
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f2.fl = -ctx->f2.fl;
    // 0x80278E04: c.lt.s      $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f0.fl < ctx->f2.fl;
L_80278E08:
    // 0x80278E08: nop

    // 0x80278E0C: bc1f        L_80278E60
    if (!c1cs) {
        // 0x80278E10: nop
    
            goto L_80278E60;
    }
    // 0x80278E10: nop

    // 0x80278E14: lhu         $t7, 0x16($v1)
    ctx->r15 = MEM_HU(ctx->r3, 0X16);
    // 0x80278E18: nop

    // 0x80278E1C: ori         $t8, $t7, 0x200
    ctx->r24 = ctx->r15 | 0X200;
    // 0x80278E20: sh          $t8, 0x16($v1)
    MEM_H(0X16, ctx->r3) = ctx->r24;
    // 0x80278E24: lw          $v0, 0x0($a2)
    ctx->r2 = MEM_W(ctx->r6, 0X0);
    // 0x80278E28: nop

    // 0x80278E2C: lhu         $t9, 0xC2($v0)
    ctx->r25 = MEM_HU(ctx->r2, 0XC2);
    // 0x80278E30: nop

    // 0x80278E34: ori         $t2, $t9, 0x80
    ctx->r10 = ctx->r25 | 0X80;
    // 0x80278E38: sh          $t2, 0xC2($v0)
    MEM_H(0XC2, ctx->r2) = ctx->r10;
    // 0x80278E3C: lw          $v0, 0x0($a2)
    ctx->r2 = MEM_W(ctx->r6, 0X0);
    // 0x80278E40: nop

    // 0x80278E44: lw          $t3, 0x8C($v0)
    ctx->r11 = MEM_W(ctx->r2, 0X8C);
    // 0x80278E48: nop

    // 0x80278E4C: sw          $t3, 0xAC($v0)
    MEM_W(0XAC, ctx->r2) = ctx->r11;
    // 0x80278E50: lw          $t4, 0x0($a2)
    ctx->r12 = MEM_W(ctx->r6, 0X0);
    // 0x80278E54: nop

    // 0x80278E58: lw          $a0, 0x8C($t4)
    ctx->r4 = MEM_W(ctx->r12, 0X8C);
    // 0x80278E5C: nop

L_80278E60:
    // 0x80278E60: addiu       $v1, $v1, 0xF8
    ctx->r3 = ADD32(ctx->r3, 0XF8);
    // 0x80278E64: beq         $v1, $a0, L_80278EDC
    if (ctx->r3 == ctx->r4) {
        // 0x80278E68: nop
    
            goto L_80278EDC;
    }
    // 0x80278E68: nop

    // 0x80278E6C: mtc1        $a3, $f4
    ctx->f4.u32l = ctx->r7;
    // 0x80278E70: beq         $t0, $zero, L_80278E84
    if (ctx->r8 == 0) {
        // 0x80278E74: cvt.s.w     $f0, $f4
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    ctx->f0.fl = CVT_S_W(ctx->f4.u32l);
            goto L_80278E84;
    }
    // 0x80278E74: cvt.s.w     $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    ctx->f0.fl = CVT_S_W(ctx->f4.u32l);
    // 0x80278E78: lwc1        $f2, 0x4C($v1)
    ctx->f2.u32l = MEM_W(ctx->r3, 0X4C);
    // 0x80278E7C: b           L_80278E94
    // 0x80278E80: c.lt.s      $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f0.fl < ctx->f2.fl;
        goto L_80278E94;
    // 0x80278E80: c.lt.s      $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f0.fl < ctx->f2.fl;
L_80278E84:
    // 0x80278E84: lwc1        $f2, 0x4C($v1)
    ctx->f2.u32l = MEM_W(ctx->r3, 0X4C);
    // 0x80278E88: nop

    // 0x80278E8C: neg.s       $f2, $f2
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f2.fl = -ctx->f2.fl;
    // 0x80278E90: c.lt.s      $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f0.fl < ctx->f2.fl;
L_80278E94:
    // 0x80278E94: nop

    // 0x80278E98: bc1f        L_80278EDC
    if (!c1cs) {
        // 0x80278E9C: nop
    
            goto L_80278EDC;
    }
    // 0x80278E9C: nop

    // 0x80278EA0: lhu         $t5, 0x16($v1)
    ctx->r13 = MEM_HU(ctx->r3, 0X16);
    // 0x80278EA4: nop

    // 0x80278EA8: ori         $t6, $t5, 0x200
    ctx->r14 = ctx->r13 | 0X200;
    // 0x80278EAC: sh          $t6, 0x16($v1)
    MEM_H(0X16, ctx->r3) = ctx->r14;
    // 0x80278EB0: lw          $v0, 0x0($a2)
    ctx->r2 = MEM_W(ctx->r6, 0X0);
    // 0x80278EB4: nop

    // 0x80278EB8: lhu         $t7, 0xC2($v0)
    ctx->r15 = MEM_HU(ctx->r2, 0XC2);
    // 0x80278EBC: nop

    // 0x80278EC0: ori         $t8, $t7, 0x80
    ctx->r24 = ctx->r15 | 0X80;
    // 0x80278EC4: sh          $t8, 0xC2($v0)
    MEM_H(0XC2, ctx->r2) = ctx->r24;
    // 0x80278EC8: lw          $v0, 0x0($a2)
    ctx->r2 = MEM_W(ctx->r6, 0X0);
    // 0x80278ECC: nop

    // 0x80278ED0: lw          $t9, 0x8C($v0)
    ctx->r25 = MEM_W(ctx->r2, 0X8C);
    // 0x80278ED4: nop

    // 0x80278ED8: sw          $t9, 0xAC($v0)
    MEM_W(0XAC, ctx->r2) = ctx->r25;
L_80278EDC:
    // 0x80278EDC: bne         $a1, $t1, L_80278DC8
    if (ctx->r5 != ctx->r9) {
        // 0x80278EE0: addiu       $v1, $v1, 0xF8
        ctx->r3 = ADD32(ctx->r3, 0XF8);
            goto L_80278DC8;
    }
    // 0x80278EE0: addiu       $v1, $v1, 0xF8
    ctx->r3 = ADD32(ctx->r3, 0XF8);
    // 0x80278EE4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80278EE8: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x80278EEC: jr          $ra
    // 0x80278EF0: nop

    return;
    // 0x80278EF0: nop

;}
RECOMP_FUNC void ovl_8024B800_func_80278E94(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
L_80278DC8:
    // 0x80278E94: nop

    // 0x80278E98: bc1f        L_80278EDC
    if (!c1cs) {
        // 0x80278E9C: nop
    
            goto L_80278EDC;
    }
    // 0x80278E9C: nop

    // 0x80278EA0: lhu         $t5, 0x16($v1)
    ctx->r13 = MEM_HU(ctx->r3, 0X16);
    // 0x80278EA4: nop

    // 0x80278EA8: ori         $t6, $t5, 0x200
    ctx->r14 = ctx->r13 | 0X200;
    // 0x80278EAC: sh          $t6, 0x16($v1)
    MEM_H(0X16, ctx->r3) = ctx->r14;
    // 0x80278EB0: lw          $v0, 0x0($a2)
    ctx->r2 = MEM_W(ctx->r6, 0X0);
    // 0x80278EB4: nop

    // 0x80278EB8: lhu         $t7, 0xC2($v0)
    ctx->r15 = MEM_HU(ctx->r2, 0XC2);
    // 0x80278EBC: nop

    // 0x80278EC0: ori         $t8, $t7, 0x80
    ctx->r24 = ctx->r15 | 0X80;
    // 0x80278EC4: sh          $t8, 0xC2($v0)
    MEM_H(0XC2, ctx->r2) = ctx->r24;
    // 0x80278EC8: lw          $v0, 0x0($a2)
    ctx->r2 = MEM_W(ctx->r6, 0X0);
    // 0x80278ECC: nop

    // 0x80278ED0: lw          $t9, 0x8C($v0)
    ctx->r25 = MEM_W(ctx->r2, 0X8C);
    // 0x80278ED4: nop

    // 0x80278ED8: sw          $t9, 0xAC($v0)
    MEM_W(0XAC, ctx->r2) = ctx->r25;
L_80278EDC:
    // 0x80278EDC: bne         $a1, $t1, L_80278DC8
    if (ctx->r5 != ctx->r9) {
            // 0x80278EE0: addiu       $v1, $v1, 0xF8
    ctx->r3 = ADD32(ctx->r3, 0XF8);
    ovl_8024B800_func_80278DC8(rdram, ctx);
    return;
    }
    // 0x80278EE0: addiu       $v1, $v1, 0xF8
    ctx->r3 = ADD32(ctx->r3, 0XF8);
    // 0x80278EE4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80278EE8: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x80278EEC: jr          $ra
    // 0x80278EF0: nop

    return;
    // 0x80278EF0: nop

;}
RECOMP_FUNC void ovl_8024B800_func_80278EF4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80278EF4: lui         $v1, 0x8009
    ctx->r3 = S32(0X8009 << 16);
    // 0x80278EF8: addiu       $v1, $v1, 0x3B20
    ctx->r3 = ADD32(ctx->r3, 0X3B20);
    // 0x80278EFC: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x80278F00: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x80278F04: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80278F08: addiu       $t6, $sp, 0x28
    ctx->r14 = ADD32(ctx->r29, 0X28);
    // 0x80278F0C: lw          $a3, 0x0($v0)
    ctx->r7 = MEM_W(ctx->r2, 0X0);
    // 0x80278F10: lw          $a2, 0x8($v0)
    ctx->r6 = MEM_W(ctx->r2, 0X8);
    // 0x80278F14: lwc1        $f14, 0x44($v0)
    ctx->f14.u32l = MEM_W(ctx->r2, 0X44);
    // 0x80278F18: lwc1        $f12, 0x4C($v0)
    ctx->f12.u32l = MEM_W(ctx->r2, 0X4C);
    // 0x80278F1C: jal         0x80272B1C
    // 0x80278F20: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    ovl_8024B800_func_80272B1C(rdram, ctx);
        goto after_0;
    // 0x80278F20: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    after_0:
    // 0x80278F24: lui         $at, 0x8028
    ctx->r1 = S32(0X8028 << 16);
    // 0x80278F28: lwc1        $f6, 0x2C($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x80278F2C: lwc1        $f5, -0x1C18($at)
    ctx->f_odd[(5 - 1) * 2] = MEM_W(ctx->r1, -0X1C18);
    // 0x80278F30: lwc1        $f4, -0x1C14($at)
    ctx->f4.u32l = MEM_W(ctx->r1, -0X1C14);
    // 0x80278F34: cvt.d.s     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f8.d = CVT_D_S(ctx->f6.fl);
    // 0x80278F38: c.lt.d      $f4, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f4.d < ctx->f8.d;
    // 0x80278F3C: lui         $v1, 0x8009
    ctx->r3 = S32(0X8009 << 16);
    // 0x80278F40: bc1f        L_80278F94
    if (!c1cs) {
        // 0x80278F44: addiu       $v1, $v1, 0x3B20
        ctx->r3 = ADD32(ctx->r3, 0X3B20);
            goto L_80278F94;
    }
    // 0x80278F44: addiu       $v1, $v1, 0x3B20
    ctx->r3 = ADD32(ctx->r3, 0X3B20);
    // 0x80278F48: lwc1        $f10, 0x28($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X28);
    // 0x80278F4C: lw          $t7, 0x0($v1)
    ctx->r15 = MEM_W(ctx->r3, 0X0);
    // 0x80278F50: lui         $at, 0x42C8
    ctx->r1 = S32(0X42C8 << 16);
    // 0x80278F54: swc1        $f10, 0x20($t7)
    MEM_W(0X20, ctx->r15) = ctx->f10.u32l;
    // 0x80278F58: lwc1        $f16, 0x2C($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x80278F5C: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x80278F60: lw          $t0, 0x0($v1)
    ctx->r8 = MEM_W(ctx->r3, 0X0);
    // 0x80278F64: mul.s       $f6, $f16, $f18
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f6.fl = MUL_S(ctx->f16.fl, ctx->f18.fl);
    // 0x80278F68: cfc1        $t8, $FpcCsr
    ctx->r24 = get_cop1_cs();
    // 0x80278F6C: nop

    // 0x80278F70: ori         $at, $t8, 0x3
    ctx->r1 = ctx->r24 | 0X3;
    // 0x80278F74: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x80278F78: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x80278F7C: nop

    // 0x80278F80: cvt.w.s     $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    ctx->f4.u32l = CVT_W_S(ctx->f6.fl);
    // 0x80278F84: mfc1        $t9, $f4
    ctx->r25 = (int32_t)ctx->f4.u32l;
    // 0x80278F88: ctc1        $t8, $FpcCsr
    set_cop1_cs(ctx->r24);
    // 0x80278F8C: b           L_80278FA0
    // 0x80278F90: sh          $t9, 0x66($t0)
    MEM_H(0X66, ctx->r8) = ctx->r25;
        goto L_80278FA0;
    // 0x80278F90: sh          $t9, 0x66($t0)
    MEM_H(0X66, ctx->r8) = ctx->r25;
L_80278F94:
    // 0x80278F94: lw          $t1, 0x0($v1)
    ctx->r9 = MEM_W(ctx->r3, 0X0);
    // 0x80278F98: nop

    // 0x80278F9C: sh          $zero, 0x66($t1)
    MEM_H(0X66, ctx->r9) = 0;
L_80278FA0:
    // 0x80278FA0: lw          $t2, 0x0($v1)
    ctx->r10 = MEM_W(ctx->r3, 0X0);
    // 0x80278FA4: nop

    // 0x80278FA8: sh          $zero, 0x68($t2)
    MEM_H(0X68, ctx->r10) = 0;
    // 0x80278FAC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80278FB0: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x80278FB4: jr          $ra
    // 0x80278FB8: nop

    return;
    // 0x80278FB8: nop

;}
RECOMP_FUNC void ovl_8024B800_func_80278F00(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80278F00: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x80278F04: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80278F08: addiu       $t6, $sp, 0x28
    ctx->r14 = ADD32(ctx->r29, 0X28);
    // 0x80278F0C: lw          $a3, 0x0($v0)
    ctx->r7 = MEM_W(ctx->r2, 0X0);
    // 0x80278F10: lw          $a2, 0x8($v0)
    ctx->r6 = MEM_W(ctx->r2, 0X8);
    // 0x80278F14: lwc1        $f14, 0x44($v0)
    ctx->f14.u32l = MEM_W(ctx->r2, 0X44);
    // 0x80278F18: lwc1        $f12, 0x4C($v0)
    ctx->f12.u32l = MEM_W(ctx->r2, 0X4C);
    // 0x80278F1C: jal         0x80272B1C
    // 0x80278F20: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    ovl_8024B800_func_80272B1C(rdram, ctx);
        goto after_0;
    // 0x80278F20: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    after_0:
    // 0x80278F24: lui         $at, 0x8028
    ctx->r1 = S32(0X8028 << 16);
    // 0x80278F28: lwc1        $f6, 0x2C($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x80278F2C: lwc1        $f5, -0x1C18($at)
    ctx->f_odd[(5 - 1) * 2] = MEM_W(ctx->r1, -0X1C18);
    // 0x80278F30: lwc1        $f4, -0x1C14($at)
    ctx->f4.u32l = MEM_W(ctx->r1, -0X1C14);
    // 0x80278F34: cvt.d.s     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f8.d = CVT_D_S(ctx->f6.fl);
    // 0x80278F38: c.lt.d      $f4, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f4.d < ctx->f8.d;
    // 0x80278F3C: lui         $v1, 0x8009
    ctx->r3 = S32(0X8009 << 16);
    // 0x80278F40: bc1f        L_80278F94
    if (!c1cs) {
        // 0x80278F44: addiu       $v1, $v1, 0x3B20
        ctx->r3 = ADD32(ctx->r3, 0X3B20);
            goto L_80278F94;
    }
    // 0x80278F44: addiu       $v1, $v1, 0x3B20
    ctx->r3 = ADD32(ctx->r3, 0X3B20);
    // 0x80278F48: lwc1        $f10, 0x28($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X28);
    // 0x80278F4C: lw          $t7, 0x0($v1)
    ctx->r15 = MEM_W(ctx->r3, 0X0);
    // 0x80278F50: lui         $at, 0x42C8
    ctx->r1 = S32(0X42C8 << 16);
    // 0x80278F54: swc1        $f10, 0x20($t7)
    MEM_W(0X20, ctx->r15) = ctx->f10.u32l;
    // 0x80278F58: lwc1        $f16, 0x2C($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x80278F5C: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x80278F60: lw          $t0, 0x0($v1)
    ctx->r8 = MEM_W(ctx->r3, 0X0);
    // 0x80278F64: mul.s       $f6, $f16, $f18
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f6.fl = MUL_S(ctx->f16.fl, ctx->f18.fl);
    // 0x80278F68: cfc1        $t8, $FpcCsr
    ctx->r24 = get_cop1_cs();
    // 0x80278F6C: nop

    // 0x80278F70: ori         $at, $t8, 0x3
    ctx->r1 = ctx->r24 | 0X3;
    // 0x80278F74: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x80278F78: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x80278F7C: nop

    // 0x80278F80: cvt.w.s     $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    ctx->f4.u32l = CVT_W_S(ctx->f6.fl);
    // 0x80278F84: mfc1        $t9, $f4
    ctx->r25 = (int32_t)ctx->f4.u32l;
    // 0x80278F88: ctc1        $t8, $FpcCsr
    set_cop1_cs(ctx->r24);
    // 0x80278F8C: b           L_80278FA0
    // 0x80278F90: sh          $t9, 0x66($t0)
    MEM_H(0X66, ctx->r8) = ctx->r25;
        goto L_80278FA0;
    // 0x80278F90: sh          $t9, 0x66($t0)
    MEM_H(0X66, ctx->r8) = ctx->r25;
L_80278F94:
    // 0x80278F94: lw          $t1, 0x0($v1)
    ctx->r9 = MEM_W(ctx->r3, 0X0);
    // 0x80278F98: nop

    // 0x80278F9C: sh          $zero, 0x66($t1)
    MEM_H(0X66, ctx->r9) = 0;
L_80278FA0:
    // 0x80278FA0: lw          $t2, 0x0($v1)
    ctx->r10 = MEM_W(ctx->r3, 0X0);
    // 0x80278FA4: nop

    // 0x80278FA8: sh          $zero, 0x68($t2)
    MEM_H(0X68, ctx->r10) = 0;
    // 0x80278FAC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80278FB0: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x80278FB4: jr          $ra
    // 0x80278FB8: nop

    return;
    // 0x80278FB8: nop

;}
RECOMP_FUNC void ovl_8024B800_func_80278F60(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80278F60: lw          $t0, 0x0($v1)
    ctx->r8 = MEM_W(ctx->r3, 0X0);
    // 0x80278F64: mul.s       $f6, $f16, $f18
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f6.fl = MUL_S(ctx->f16.fl, ctx->f18.fl);
    // 0x80278F68: cfc1        $t8, $FpcCsr
    ctx->r24 = get_cop1_cs();
    // 0x80278F6C: nop

    // 0x80278F70: ori         $at, $t8, 0x3
    ctx->r1 = ctx->r24 | 0X3;
    // 0x80278F74: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x80278F78: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x80278F7C: nop

    // 0x80278F80: cvt.w.s     $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    ctx->f4.u32l = CVT_W_S(ctx->f6.fl);
    // 0x80278F84: mfc1        $t9, $f4
    ctx->r25 = (int32_t)ctx->f4.u32l;
    // 0x80278F88: ctc1        $t8, $FpcCsr
    set_cop1_cs(ctx->r24);
    // 0x80278F8C: b           L_80278FA0
    // 0x80278F90: sh          $t9, 0x66($t0)
    MEM_H(0X66, ctx->r8) = ctx->r25;
        goto L_80278FA0;
    // 0x80278F90: sh          $t9, 0x66($t0)
    MEM_H(0X66, ctx->r8) = ctx->r25;
    // 0x80278F94: lw          $t1, 0x0($v1)
    ctx->r9 = MEM_W(ctx->r3, 0X0);
    // 0x80278F98: nop

    // 0x80278F9C: sh          $zero, 0x66($t1)
    MEM_H(0X66, ctx->r9) = 0;
L_80278FA0:
    // 0x80278FA0: lw          $t2, 0x0($v1)
    ctx->r10 = MEM_W(ctx->r3, 0X0);
    // 0x80278FA4: nop

    // 0x80278FA8: sh          $zero, 0x68($t2)
    MEM_H(0X68, ctx->r10) = 0;
    // 0x80278FAC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80278FB0: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x80278FB4: jr          $ra
    // 0x80278FB8: nop

    return;
    // 0x80278FB8: nop

;}
RECOMP_FUNC void ovl_8024B800_func_80278FBC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80278FBC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80278FC0: lui         $t7, 0x8009
    ctx->r15 = S32(0X8009 << 16);
    // 0x80278FC4: lw          $t7, 0x3B20($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X3B20);
    // 0x80278FC8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80278FCC: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x80278FD0: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x80278FD4: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    // 0x80278FD8: lw          $t8, 0x84($t7)
    ctx->r24 = MEM_W(ctx->r15, 0X84);
    // 0x80278FDC: lwc1        $f12, 0x20($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X20);
    // 0x80278FE0: bne         $a0, $t8, L_80279044
    if (ctx->r4 != ctx->r24) {
        // 0x80278FE4: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_80279044;
    }
    // 0x80278FE4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80278FE8: jal         0x80081040
    // 0x80278FEC: nop

    func_80081040(rdram, ctx);
        goto after_0;
    // 0x80278FEC: nop

    after_0:
    // 0x80278FF0: lwc1        $f4, 0x1C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x80278FF4: lw          $t9, 0x18($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X18);
    // 0x80278FF8: mul.s       $f6, $f0, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f0.fl, ctx->f4.fl);
    // 0x80278FFC: lwc1        $f8, 0x4C($t9)
    ctx->f8.u32l = MEM_W(ctx->r25, 0X4C);
    // 0x80279000: lui         $t0, 0x8009
    ctx->r8 = S32(0X8009 << 16);
    // 0x80279004: lw          $t0, 0x3B20($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X3B20);
    // 0x80279008: add.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x8027900C: swc1        $f10, 0x8($t0)
    MEM_W(0X8, ctx->r8) = ctx->f10.u32l;
    // 0x80279010: lwc1        $f12, 0x20($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X20);
    // 0x80279014: jal         0x80080E80
    // 0x80279018: nop

    func_80080E80(rdram, ctx);
        goto after_1;
    // 0x80279018: nop

    after_1:
    // 0x8027901C: lwc1        $f16, 0x1C($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x80279020: lw          $t1, 0x18($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X18);
    // 0x80279024: mul.s       $f18, $f0, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = MUL_S(ctx->f0.fl, ctx->f16.fl);
    // 0x80279028: lwc1        $f4, 0x44($t1)
    ctx->f4.u32l = MEM_W(ctx->r9, 0X44);
    // 0x8027902C: lui         $t2, 0x8009
    ctx->r10 = S32(0X8009 << 16);
    // 0x80279030: lw          $t2, 0x3B20($t2)
    ctx->r10 = MEM_W(ctx->r10, 0X3B20);
    // 0x80279034: add.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f18.fl + ctx->f4.fl;
    // 0x80279038: jal         0x80278EF4
    // 0x8027903C: swc1        $f6, 0x0($t2)
    MEM_W(0X0, ctx->r10) = ctx->f6.u32l;
    ovl_8024B800_func_80278EF4(rdram, ctx);
        goto after_2;
    // 0x8027903C: swc1        $f6, 0x0($t2)
    MEM_W(0X0, ctx->r10) = ctx->f6.u32l;
    after_2:
    // 0x80279040: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80279044:
    // 0x80279044: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80279048: jr          $ra
    // 0x8027904C: nop

    return;
    // 0x8027904C: nop

;}
RECOMP_FUNC void ovl_8024B800_func_8027901C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8027901C: lwc1        $f16, 0x1C($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x80279020: lw          $t1, 0x18($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X18);
    // 0x80279024: mul.s       $f18, $f0, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = MUL_S(ctx->f0.fl, ctx->f16.fl);
    // 0x80279028: lwc1        $f4, 0x44($t1)
    ctx->f4.u32l = MEM_W(ctx->r9, 0X44);
    // 0x8027902C: lui         $t2, 0x8009
    ctx->r10 = S32(0X8009 << 16);
    // 0x80279030: lw          $t2, 0x3B20($t2)
    ctx->r10 = MEM_W(ctx->r10, 0X3B20);
    // 0x80279034: add.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f18.fl + ctx->f4.fl;
    // 0x80279038: jal         0x80278EF4
    // 0x8027903C: swc1        $f6, 0x0($t2)
    MEM_W(0X0, ctx->r10) = ctx->f6.u32l;
    ovl_8024B800_func_80278EF4(rdram, ctx);
        goto after_0;
    // 0x8027903C: swc1        $f6, 0x0($t2)
    MEM_W(0X0, ctx->r10) = ctx->f6.u32l;
    after_0:
    // 0x80279040: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80279044: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80279048: jr          $ra
    // 0x8027904C: nop

    return;
    // 0x8027904C: nop

;}
RECOMP_FUNC void ovl_8024B800_func_80279050(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80279050: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80279054: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80279058: lui         $s0, 0x8009
    ctx->r16 = S32(0X8009 << 16);
    // 0x8027905C: addiu       $s0, $s0, 0x3B20
    ctx->r16 = ADD32(ctx->r16, 0X3B20);
    // 0x80279060: lw          $t7, 0x0($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X0);
    // 0x80279064: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80279068: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x8027906C: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x80279070: lw          $t8, 0x84($t7)
    ctx->r24 = MEM_W(ctx->r15, 0X84);
    // 0x80279074: lwc1        $f12, 0x24($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X24);
    // 0x80279078: bne         $a0, $t8, L_802791C4
    if (ctx->r4 != ctx->r24) {
        // 0x8027907C: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_802791C4;
    }
    // 0x8027907C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80279080: jal         0x80081040
    // 0x80279084: nop

    func_80081040(rdram, ctx);
        goto after_0;
    // 0x80279084: nop

    after_0:
    // 0x80279088: lui         $at, 0x4014
    ctx->r1 = S32(0X4014 << 16);
    // 0x8027908C: mtc1        $at, $f7
    ctx->f_odd[(7 - 1) * 2] = ctx->r1;
    // 0x80279090: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x80279094: cvt.d.s     $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f4.d = CVT_D_S(ctx->f0.fl);
    // 0x80279098: mul.d       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f6.d); 
    ctx->f8.d = MUL_D(ctx->f4.d, ctx->f6.d);
    // 0x8027909C: lw          $t9, 0x20($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X20);
    // 0x802790A0: lw          $t0, 0x0($s0)
    ctx->r8 = MEM_W(ctx->r16, 0X0);
    // 0x802790A4: lwc1        $f10, 0x4C($t9)
    ctx->f10.u32l = MEM_W(ctx->r25, 0X4C);
    // 0x802790A8: nop

    // 0x802790AC: cvt.d.s     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.fl); 
    ctx->f16.d = CVT_D_S(ctx->f10.fl);
    // 0x802790B0: add.d       $f18, $f8, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f16.d); 
    ctx->f18.d = ctx->f8.d + ctx->f16.d;
    // 0x802790B4: cvt.s.d     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.d); 
    ctx->f4.fl = CVT_S_D(ctx->f18.d);
    // 0x802790B8: swc1        $f4, 0x8($t0)
    MEM_W(0X8, ctx->r8) = ctx->f4.u32l;
    // 0x802790BC: lwc1        $f12, 0x24($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X24);
    // 0x802790C0: jal         0x80080E80
    // 0x802790C4: nop

    func_80080E80(rdram, ctx);
        goto after_1;
    // 0x802790C4: nop

    after_1:
    // 0x802790C8: lui         $at, 0x4014
    ctx->r1 = S32(0X4014 << 16);
    // 0x802790CC: mtc1        $at, $f11
    ctx->f_odd[(11 - 1) * 2] = ctx->r1;
    // 0x802790D0: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x802790D4: cvt.d.s     $f6, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f6.d = CVT_D_S(ctx->f0.fl);
    // 0x802790D8: mul.d       $f8, $f6, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f10.d); 
    ctx->f8.d = MUL_D(ctx->f6.d, ctx->f10.d);
    // 0x802790DC: lw          $t1, 0x20($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X20);
    // 0x802790E0: lw          $t2, 0x0($s0)
    ctx->r10 = MEM_W(ctx->r16, 0X0);
    // 0x802790E4: lwc1        $f16, 0x44($t1)
    ctx->f16.u32l = MEM_W(ctx->r9, 0X44);
    // 0x802790E8: lui         $at, 0x3FF0
    ctx->r1 = S32(0X3FF0 << 16);
    // 0x802790EC: cvt.d.s     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); 
    ctx->f18.d = CVT_D_S(ctx->f16.fl);
    // 0x802790F0: add.d       $f4, $f8, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f18.d); 
    ctx->f4.d = ctx->f8.d + ctx->f18.d;
    // 0x802790F4: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x802790F8: cvt.s.d     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.d); 
    ctx->f6.fl = CVT_S_D(ctx->f4.d);
    // 0x802790FC: mtc1        $at, $f9
    ctx->f_odd[(9 - 1) * 2] = ctx->r1;
    // 0x80279100: swc1        $f6, 0x0($t2)
    MEM_W(0X0, ctx->r10) = ctx->f6.u32l;
    // 0x80279104: lw          $v0, 0x0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X0);
    // 0x80279108: nop

    // 0x8027910C: lwc1        $f10, 0x3C($v0)
    ctx->f10.u32l = MEM_W(ctx->r2, 0X3C);
    // 0x80279110: nop

    // 0x80279114: cvt.d.s     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.fl); 
    ctx->f16.d = CVT_D_S(ctx->f10.fl);
    // 0x80279118: sub.d       $f18, $f16, $f8
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f16.d); NAN_CHECK(ctx->f8.d); 
    ctx->f18.d = ctx->f16.d - ctx->f8.d;
    // 0x8027911C: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x80279120: cvt.s.d     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.d); 
    ctx->f4.fl = CVT_S_D(ctx->f18.d);
    // 0x80279124: mtc1        $zero, $f17
    ctx->f_odd[(17 - 1) * 2] = 0;
    // 0x80279128: swc1        $f4, 0x3C($v0)
    MEM_W(0X3C, ctx->r2) = ctx->f4.u32l;
    // 0x8027912C: lw          $v0, 0x0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X0);
    // 0x80279130: nop

    // 0x80279134: lwc1        $f6, 0x3C($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0X3C);
    // 0x80279138: nop

    // 0x8027913C: cvt.d.s     $f10, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f10.d = CVT_D_S(ctx->f6.fl);
    // 0x80279140: c.lt.d      $f10, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f10.d < ctx->f16.d;
    // 0x80279144: nop

    // 0x80279148: bc1f        L_80279164
    if (!c1cs) {
        // 0x8027914C: nop
    
            goto L_80279164;
    }
    // 0x8027914C: nop

    // 0x80279150: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x80279154: nop

    // 0x80279158: swc1        $f8, 0x3C($v0)
    MEM_W(0X3C, ctx->r2) = ctx->f8.u32l;
    // 0x8027915C: lw          $v0, 0x0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X0);
    // 0x80279160: nop

L_80279164:
    // 0x80279164: lwc1        $f12, 0x40($v0)
    ctx->f12.u32l = MEM_W(ctx->r2, 0X40);
    // 0x80279168: jal         0x80081040
    // 0x8027916C: nop

    func_80081040(rdram, ctx);
        goto after_2;
    // 0x8027916C: nop

    after_2:
    // 0x80279170: lw          $v0, 0x0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X0);
    // 0x80279174: nop

    // 0x80279178: lwc1        $f4, 0x3C($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X3C);
    // 0x8027917C: lwc1        $f18, 0x8($v0)
    ctx->f18.u32l = MEM_W(ctx->r2, 0X8);
    // 0x80279180: mul.s       $f6, $f4, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = MUL_S(ctx->f4.fl, ctx->f0.fl);
    // 0x80279184: add.s       $f10, $f18, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f10.fl = ctx->f18.fl + ctx->f6.fl;
    // 0x80279188: swc1        $f10, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->f10.u32l;
    // 0x8027918C: lw          $t3, 0x0($s0)
    ctx->r11 = MEM_W(ctx->r16, 0X0);
    // 0x80279190: nop

    // 0x80279194: lwc1        $f12, 0x40($t3)
    ctx->f12.u32l = MEM_W(ctx->r11, 0X40);
    // 0x80279198: jal         0x80080E80
    // 0x8027919C: nop

    func_80080E80(rdram, ctx);
        goto after_3;
    // 0x8027919C: nop

    after_3:
    // 0x802791A0: lw          $v0, 0x0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X0);
    // 0x802791A4: nop

    // 0x802791A8: lwc1        $f8, 0x3C($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X3C);
    // 0x802791AC: lwc1        $f16, 0x0($v0)
    ctx->f16.u32l = MEM_W(ctx->r2, 0X0);
    // 0x802791B0: mul.s       $f4, $f8, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = MUL_S(ctx->f8.fl, ctx->f0.fl);
    // 0x802791B4: add.s       $f18, $f16, $f4
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f18.fl = ctx->f16.fl + ctx->f4.fl;
    // 0x802791B8: jal         0x80278EF4
    // 0x802791BC: swc1        $f18, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->f18.u32l;
    ovl_8024B800_func_80278EF4(rdram, ctx);
        goto after_4;
    // 0x802791BC: swc1        $f18, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->f18.u32l;
    after_4:
    // 0x802791C0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_802791C4:
    // 0x802791C4: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x802791C8: jr          $ra
    // 0x802791CC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x802791CC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void ovl_8024B800_func_802790F4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802790F4: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x802790F8: cvt.s.d     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.d); 
    ctx->f6.fl = CVT_S_D(ctx->f4.d);
    // 0x802790FC: mtc1        $at, $f9
    ctx->f_odd[(9 - 1) * 2] = ctx->r1;
    // 0x80279100: swc1        $f6, 0x0($t2)
    MEM_W(0X0, ctx->r10) = ctx->f6.u32l;
    // 0x80279104: lw          $v0, 0x0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X0);
    // 0x80279108: nop

    // 0x8027910C: lwc1        $f10, 0x3C($v0)
    ctx->f10.u32l = MEM_W(ctx->r2, 0X3C);
    // 0x80279110: nop

    // 0x80279114: cvt.d.s     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.fl); 
    ctx->f16.d = CVT_D_S(ctx->f10.fl);
    // 0x80279118: sub.d       $f18, $f16, $f8
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f16.d); NAN_CHECK(ctx->f8.d); 
    ctx->f18.d = ctx->f16.d - ctx->f8.d;
    // 0x8027911C: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x80279120: cvt.s.d     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.d); 
    ctx->f4.fl = CVT_S_D(ctx->f18.d);
    // 0x80279124: mtc1        $zero, $f17
    ctx->f_odd[(17 - 1) * 2] = 0;
    // 0x80279128: swc1        $f4, 0x3C($v0)
    MEM_W(0X3C, ctx->r2) = ctx->f4.u32l;
    // 0x8027912C: lw          $v0, 0x0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X0);
    // 0x80279130: nop

    // 0x80279134: lwc1        $f6, 0x3C($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0X3C);
    // 0x80279138: nop

    // 0x8027913C: cvt.d.s     $f10, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f10.d = CVT_D_S(ctx->f6.fl);
    // 0x80279140: c.lt.d      $f10, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f10.d < ctx->f16.d;
    // 0x80279144: nop

    // 0x80279148: bc1f        L_80279164
    if (!c1cs) {
        // 0x8027914C: nop
    
            goto L_80279164;
    }
    // 0x8027914C: nop

    // 0x80279150: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x80279154: nop

    // 0x80279158: swc1        $f8, 0x3C($v0)
    MEM_W(0X3C, ctx->r2) = ctx->f8.u32l;
    // 0x8027915C: lw          $v0, 0x0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X0);
    // 0x80279160: nop

L_80279164:
    // 0x80279164: lwc1        $f12, 0x40($v0)
    ctx->f12.u32l = MEM_W(ctx->r2, 0X40);
    // 0x80279168: jal         0x80081040
    // 0x8027916C: nop

    func_80081040(rdram, ctx);
        goto after_0;
    // 0x8027916C: nop

    after_0:
    // 0x80279170: lw          $v0, 0x0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X0);
    // 0x80279174: nop

    // 0x80279178: lwc1        $f4, 0x3C($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X3C);
    // 0x8027917C: lwc1        $f18, 0x8($v0)
    ctx->f18.u32l = MEM_W(ctx->r2, 0X8);
    // 0x80279180: mul.s       $f6, $f4, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = MUL_S(ctx->f4.fl, ctx->f0.fl);
    // 0x80279184: add.s       $f10, $f18, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f10.fl = ctx->f18.fl + ctx->f6.fl;
    // 0x80279188: swc1        $f10, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->f10.u32l;
    // 0x8027918C: lw          $t3, 0x0($s0)
    ctx->r11 = MEM_W(ctx->r16, 0X0);
    // 0x80279190: nop

    // 0x80279194: lwc1        $f12, 0x40($t3)
    ctx->f12.u32l = MEM_W(ctx->r11, 0X40);
    // 0x80279198: jal         0x80080E80
    // 0x8027919C: nop

    func_80080E80(rdram, ctx);
        goto after_1;
    // 0x8027919C: nop

    after_1:
    // 0x802791A0: lw          $v0, 0x0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X0);
    // 0x802791A4: nop

    // 0x802791A8: lwc1        $f8, 0x3C($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X3C);
    // 0x802791AC: lwc1        $f16, 0x0($v0)
    ctx->f16.u32l = MEM_W(ctx->r2, 0X0);
    // 0x802791B0: mul.s       $f4, $f8, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = MUL_S(ctx->f8.fl, ctx->f0.fl);
    // 0x802791B4: add.s       $f18, $f16, $f4
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f18.fl = ctx->f16.fl + ctx->f4.fl;
    // 0x802791B8: jal         0x80278EF4
    // 0x802791BC: swc1        $f18, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->f18.u32l;
    ovl_8024B800_func_80278EF4(rdram, ctx);
        goto after_2;
    // 0x802791BC: swc1        $f18, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->f18.u32l;
    after_2:
    // 0x802791C0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x802791C4: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x802791C8: jr          $ra
    // 0x802791CC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x802791CC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void ovl_8024B800_func_80279198(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80279198: jal         0x80080E80
    // 0x8027919C: nop

    func_80080E80(rdram, ctx);
        goto after_0;
    // 0x8027919C: nop

    after_0:
    // 0x802791A0: lw          $v0, 0x0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X0);
    // 0x802791A4: nop

    // 0x802791A8: lwc1        $f8, 0x3C($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X3C);
    // 0x802791AC: lwc1        $f16, 0x0($v0)
    ctx->f16.u32l = MEM_W(ctx->r2, 0X0);
    // 0x802791B0: mul.s       $f4, $f8, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = MUL_S(ctx->f8.fl, ctx->f0.fl);
    // 0x802791B4: add.s       $f18, $f16, $f4
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f18.fl = ctx->f16.fl + ctx->f4.fl;
    // 0x802791B8: jal         0x80278EF4
    // 0x802791BC: swc1        $f18, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->f18.u32l;
    ovl_8024B800_func_80278EF4(rdram, ctx);
        goto after_1;
    // 0x802791BC: swc1        $f18, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->f18.u32l;
    after_1:
    // 0x802791C0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x802791C4: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x802791C8: jr          $ra
    // 0x802791CC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x802791CC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void ovl_8024B800_func_802791D0_inner(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802791D0: lui         $t6, 0x8009
    ctx->r14 = S32(0X8009 << 16);
    // 0x802791D4: lw          $t6, 0x3B20($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X3B20);
    // 0x802791D8: nop

    // 0x802791DC: lw          $t7, 0x84($t6)
    ctx->r15 = MEM_W(ctx->r14, 0X84);
    // 0x802791E0: nop

    // 0x802791E4: beq         $a0, $t7, L_80279200
    if (ctx->r4 == ctx->r15) {
        // 0x802791E8: nop
    
            goto L_80279200;
    }
    // 0x802791E8: nop

    // 0x802791EC: lhu         $t8, 0x16($a0)
    ctx->r24 = MEM_HU(ctx->r4, 0X16);
    // 0x802791F0: nop

    // 0x802791F4: andi        $t9, $t8, 0x2
    ctx->r25 = ctx->r24 & 0X2;
    // 0x802791F8: beq         $t9, $zero, L_80279224
    if (ctx->r25 == 0) {
        // 0x802791FC: nop
    
            goto L_80279224;
    }
    // 0x802791FC: nop

L_80279200:
    // 0x80279200: lw          $t0, 0xCC($a0)
    ctx->r8 = MEM_W(ctx->r4, 0XCC);
    // 0x80279204: nop

    // 0x80279208: lw          $v0, 0x30($t0)
    ctx->r2 = MEM_W(ctx->r8, 0X30);
    // 0x8027920C: nop

    // 0x80279210: lhu         $t1, 0x2($v0)
    ctx->r9 = MEM_HU(ctx->r2, 0X2);
    // 0x80279214: nop

    // 0x80279218: andi        $t2, $t1, 0xBFFF
    ctx->r10 = ctx->r9 & 0XBFFF;
    // 0x8027921C: jr          $ra
    // 0x80279220: sh          $t2, 0x2($v0)
    MEM_H(0X2, ctx->r2) = ctx->r10;
    return;
    // 0x80279220: sh          $t2, 0x2($v0)
    MEM_H(0X2, ctx->r2) = ctx->r10;
L_80279224:
    // 0x80279224: lw          $t3, 0xCC($a0)
    ctx->r11 = MEM_W(ctx->r4, 0XCC);
    // 0x80279228: nop

    // 0x8027922C: lw          $v0, 0x30($t3)
    ctx->r2 = MEM_W(ctx->r11, 0X30);
    // 0x80279230: nop

    // 0x80279234: lhu         $t4, 0x2($v0)
    ctx->r12 = MEM_HU(ctx->r2, 0X2);
    // 0x80279238: nop

    // 0x8027923C: ori         $t5, $t4, 0x4000
    ctx->r13 = ctx->r12 | 0X4000;
    // 0x80279240: sh          $t5, 0x2($v0)
    MEM_H(0X2, ctx->r2) = ctx->r13;
    // 0x80279244: jr          $ra
    // 0x80279248: nop

    return;
    // 0x80279248: nop

;}
RECOMP_FUNC void ovl_8024B800_func_8027924C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8027924C: lui         $at, 0x8028
    ctx->r1 = S32(0X8028 << 16);
    // 0x80279250: lwc1        $f17, -0x1C10($at)
    ctx->f_odd[(17 - 1) * 2] = MEM_W(ctx->r1, -0X1C10);
    // 0x80279254: lwc1        $f16, -0x1C0C($at)
    ctx->f16.u32l = MEM_W(ctx->r1, -0X1C0C);
    // 0x80279258: cvt.d.s     $f0, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); 
    ctx->f0.d = CVT_D_S(ctx->f12.fl);
    // 0x8027925C: c.le.d      $f16, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f16.d <= ctx->f0.d;
    // 0x80279260: lui         $at, 0x8028
    ctx->r1 = S32(0X8028 << 16);
    // 0x80279264: bc1f        L_80279274
    if (!c1cs) {
        // 0x80279268: nop
    
            goto L_80279274;
    }
    // 0x80279268: nop

    // 0x8027926C: sub.d       $f4, $f0, $f16
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f0.d); NAN_CHECK(ctx->f16.d); 
    ctx->f4.d = ctx->f0.d - ctx->f16.d;
    // 0x80279270: cvt.s.d     $f12, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.d); 
    ctx->f12.fl = CVT_S_D(ctx->f4.d);
L_80279274:
    // 0x80279274: cvt.d.s     $f0, $f14
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); 
    ctx->f0.d = CVT_D_S(ctx->f14.fl);
    // 0x80279278: c.le.d      $f16, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f16.d <= ctx->f0.d;
    // 0x8027927C: nop

    // 0x80279280: bc1f        L_80279290
    if (!c1cs) {
        // 0x80279284: nop
    
            goto L_80279290;
    }
    // 0x80279284: nop

    // 0x80279288: sub.d       $f6, $f0, $f16
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f0.d); NAN_CHECK(ctx->f16.d); 
    ctx->f6.d = ctx->f0.d - ctx->f16.d;
    // 0x8027928C: cvt.s.d     $f14, $f6
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.d); 
    ctx->f14.fl = CVT_S_D(ctx->f6.d);
L_80279290:
    // 0x80279290: c.lt.s      $f14, $f12
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f14.fl < ctx->f12.fl;
    // 0x80279294: sub.s       $f0, $f14, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f0.fl = ctx->f14.fl - ctx->f12.fl;
    // 0x80279298: bc1f        L_802792A8
    if (!c1cs) {
        // 0x8027929C: mov.s       $f2, $f0
        CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.fl = ctx->f0.fl;
            goto L_802792A8;
    }
    // 0x8027929C: mov.s       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.fl = ctx->f0.fl;
    // 0x802792A0: b           L_802792AC
    // 0x802792A4: neg.s       $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f12.fl = -ctx->f0.fl;
        goto L_802792AC;
    // 0x802792A4: neg.s       $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f12.fl = -ctx->f0.fl;
L_802792A8:
    // 0x802792A8: mov.s       $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    ctx->f12.fl = ctx->f0.fl;
L_802792AC:
    // 0x802792AC: lwc1        $f9, -0x1C08($at)
    ctx->f_odd[(9 - 1) * 2] = MEM_W(ctx->r1, -0X1C08);
    // 0x802792B0: lwc1        $f8, -0x1C04($at)
    ctx->f8.u32l = MEM_W(ctx->r1, -0X1C04);
    // 0x802792B4: cvt.d.s     $f10, $f12
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); 
    ctx->f10.d = CVT_D_S(ctx->f12.fl);
    // 0x802792B8: c.lt.d      $f8, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f8.d < ctx->f10.d;
    // 0x802792BC: nop

    // 0x802792C0: bc1f        L_80279300
    if (!c1cs) {
        // 0x802792C4: nop
    
            goto L_80279300;
    }
    // 0x802792C4: nop

    // 0x802792C8: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x802792CC: nop

    // 0x802792D0: c.le.s      $f18, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f18.fl <= ctx->f0.fl;
    // 0x802792D4: nop

    // 0x802792D8: bc1f        L_802792F4
    if (!c1cs) {
        // 0x802792DC: nop
    
            goto L_802792F4;
    }
    // 0x802792DC: nop

    // 0x802792E0: cvt.d.s     $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f4.d = CVT_D_S(ctx->f0.fl);
    // 0x802792E4: sub.d       $f6, $f4, $f16
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f16.d); 
    ctx->f6.d = ctx->f4.d - ctx->f16.d;
    // 0x802792E8: cvt.s.d     $f2, $f6
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.d); 
    ctx->f2.fl = CVT_S_D(ctx->f6.d);
    // 0x802792EC: jr          $ra
    // 0x802792F0: mov.s       $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    ctx->f0.fl = ctx->f2.fl;
    return;
    // 0x802792F0: mov.s       $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    ctx->f0.fl = ctx->f2.fl;
L_802792F4:
    // 0x802792F4: cvt.d.s     $f8, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f8.d = CVT_D_S(ctx->f0.fl);
    // 0x802792F8: add.d       $f10, $f8, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f16.d); 
    ctx->f10.d = ctx->f8.d + ctx->f16.d;
    // 0x802792FC: cvt.s.d     $f2, $f10
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f2.fl = CVT_S_D(ctx->f10.d);
L_80279300:
    // 0x80279300: jr          $ra
    // 0x80279304: mov.s       $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    ctx->f0.fl = ctx->f2.fl;
    return;
    // 0x80279304: mov.s       $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    ctx->f0.fl = ctx->f2.fl;
;}
RECOMP_FUNC void ovl_8024B800_func_80279308(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80279308: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8027930C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80279310: jal         0x8027924C
    // 0x80279314: nop

    ovl_8024B800_func_8027924C(rdram, ctx);
        goto after_0;
    // 0x80279314: nop

    after_0:
    // 0x80279318: jal         0x80272AEC
    // 0x8027931C: mov.s       $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    ctx->f12.fl = ctx->f0.fl;
    ovl_8024B800_func_80272AEC(rdram, ctx);
        goto after_1;
    // 0x8027931C: mov.s       $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    ctx->f12.fl = ctx->f0.fl;
    after_1:
    // 0x80279320: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80279324: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80279328: jr          $ra
    // 0x8027932C: nop

    return;
    // 0x8027932C: nop

;}
RECOMP_FUNC void ovl_8024B800_func_80279330(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80279330: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80279334: swc1        $f12, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f12.u32l;
    // 0x80279338: swc1        $f14, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f14.u32l;
    // 0x8027933C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80279340: lwc1        $f14, 0x24($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X24);
    // 0x80279344: lwc1        $f12, 0x20($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X20);
    // 0x80279348: jal         0x8027924C
    // 0x8027934C: sw          $a2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r6;
    ovl_8024B800_func_8027924C(rdram, ctx);
        goto after_0;
    // 0x8027934C: sw          $a2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r6;
    after_0:
    // 0x80279350: swc1        $f0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f0.u32l;
    // 0x80279354: jal         0x80272AEC
    // 0x80279358: mov.s       $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    ctx->f12.fl = ctx->f0.fl;
    ovl_8024B800_func_80272AEC(rdram, ctx);
        goto after_1;
    // 0x80279358: mov.s       $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    ctx->f12.fl = ctx->f0.fl;
    after_1:
    // 0x8027935C: lwc1        $f2, 0x28($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X28);
    // 0x80279360: lwc1        $f6, 0x1C($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x80279364: c.lt.s      $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f2.fl < ctx->f0.fl;
    // 0x80279368: lwc1        $f8, 0x20($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X20);
    // 0x8027936C: bc1f        L_802793A4
    if (!c1cs) {
        // 0x80279370: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_802793A4;
    }
    // 0x80279370: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80279374: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x80279378: nop

    // 0x8027937C: c.lt.s      $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f4.fl < ctx->f6.fl;
    // 0x80279380: nop

    // 0x80279384: bc1f        L_80279394
    if (!c1cs) {
        // 0x80279388: nop
    
            goto L_80279394;
    }
    // 0x80279388: nop

    // 0x8027938C: b           L_80279398
    // 0x80279390: mov.s       $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    ctx->f0.fl = ctx->f2.fl;
        goto L_80279398;
    // 0x80279390: mov.s       $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    ctx->f0.fl = ctx->f2.fl;
L_80279394:
    // 0x80279394: neg.s       $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = -ctx->f2.fl;
L_80279398:
    // 0x80279398: add.s       $f10, $f0, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f0.fl + ctx->f8.fl;
    // 0x8027939C: swc1        $f10, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f10.u32l;
    // 0x802793A0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_802793A4:
    // 0x802793A4: lwc1        $f0, 0x24($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X24);
    // 0x802793A8: jr          $ra
    // 0x802793AC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x802793AC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void ovl_8024B800_func_802793B0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802793B0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802793B4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802793B8: lwc1        $f6, 0x44($a0)
    ctx->f6.u32l = MEM_W(ctx->r4, 0X44);
    // 0x802793BC: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x802793C0: mtc1        $a1, $f14
    ctx->f14.u32l = ctx->r5;
    // 0x802793C4: c.lt.s      $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f4.fl < ctx->f6.fl;
    // 0x802793C8: lui         $a2, 0x3FBD
    ctx->r6 = S32(0X3FBD << 16);
    // 0x802793CC: bc1f        L_802793E8
    if (!c1cs) {
        // 0x802793D0: ori         $a2, $a2, 0xE44E
        ctx->r6 = ctx->r6 | 0XE44E;
            goto L_802793E8;
    }
    // 0x802793D0: ori         $a2, $a2, 0xE44E
    ctx->r6 = ctx->r6 | 0XE44E;
    // 0x802793D4: lui         $at, 0x8028
    ctx->r1 = S32(0X8028 << 16);
    // 0x802793D8: lwc1        $f1, -0x1C00($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, -0X1C00);
    // 0x802793DC: lwc1        $f0, -0x1BFC($at)
    ctx->f0.u32l = MEM_W(ctx->r1, -0X1BFC);
    // 0x802793E0: b           L_802793F8
    // 0x802793E4: nop

        goto L_802793F8;
    // 0x802793E4: nop

L_802793E8:
    // 0x802793E8: lui         $at, 0x8028
    ctx->r1 = S32(0X8028 << 16);
    // 0x802793EC: lwc1        $f1, -0x1BF8($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, -0X1BF8);
    // 0x802793F0: lwc1        $f0, -0x1BF4($at)
    ctx->f0.u32l = MEM_W(ctx->r1, -0X1BF4);
    // 0x802793F4: nop

L_802793F8:
    // 0x802793F8: jal         0x80279330
    // 0x802793FC: cvt.s.d     $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.d); 
    ctx->f12.fl = CVT_S_D(ctx->f0.d);
    ovl_8024B800_func_80279330(rdram, ctx);
        goto after_0;
    // 0x802793FC: cvt.s.d     $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.d); 
    ctx->f12.fl = CVT_S_D(ctx->f0.d);
    after_0:
    // 0x80279400: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80279404: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80279408: jr          $ra
    // 0x8027940C: nop

    return;
    // 0x8027940C: nop

;}
RECOMP_FUNC void ovl_8024B800_func_80279410(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80279410: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80279414: swc1        $f12, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f12.u32l;
    // 0x80279418: lui         $at, 0x8028
    ctx->r1 = S32(0X8028 << 16);
    // 0x8027941C: lwc1        $f4, 0x18($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X18);
    // 0x80279420: lwc1        $f3, -0x1BF0($at)
    ctx->f_odd[(3 - 1) * 2] = MEM_W(ctx->r1, -0X1BF0);
    // 0x80279424: lwc1        $f2, -0x1BEC($at)
    ctx->f2.u32l = MEM_W(ctx->r1, -0X1BEC);
    // 0x80279428: cvt.d.s     $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f0.d = CVT_D_S(ctx->f4.fl);
    // 0x8027942C: c.le.d      $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f2.d <= ctx->f0.d;
    // 0x80279430: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80279434: swc1        $f14, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f14.u32l;
    // 0x80279438: bc1f        L_8027944C
    if (!c1cs) {
        // 0x8027943C: sw          $a3, 0x24($sp)
        MEM_W(0X24, ctx->r29) = ctx->r7;
            goto L_8027944C;
    }
    // 0x8027943C: sw          $a3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r7;
    // 0x80279440: sub.d       $f6, $f0, $f2
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.d); NAN_CHECK(ctx->f2.d); 
    ctx->f6.d = ctx->f0.d - ctx->f2.d;
    // 0x80279444: cvt.s.d     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.d); 
    ctx->f8.fl = CVT_S_D(ctx->f6.d);
    // 0x80279448: swc1        $f8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f8.u32l;
L_8027944C:
    // 0x8027944C: lwc1        $f12, 0x0($a2)
    ctx->f12.u32l = MEM_W(ctx->r6, 0X0);
    // 0x80279450: lwc1        $f14, 0x18($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X18);
    // 0x80279454: jal         0x80279308
    // 0x80279458: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    ovl_8024B800_func_80279308(rdram, ctx);
        goto after_0;
    // 0x80279458: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    after_0:
    // 0x8027945C: lwc1        $f12, 0x1C($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x80279460: lui         $at, 0x8028
    ctx->r1 = S32(0X8028 << 16);
    // 0x80279464: c.le.s      $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f12.fl <= ctx->f0.fl;
    // 0x80279468: lwc1        $f3, -0x1BE8($at)
    ctx->f_odd[(3 - 1) * 2] = MEM_W(ctx->r1, -0X1BE8);
    // 0x8027946C: lwc1        $f2, -0x1BE4($at)
    ctx->f2.u32l = MEM_W(ctx->r1, -0X1BE4);
    // 0x80279470: lw          $a2, 0x20($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X20);
    // 0x80279474: bc1f        L_80279504
    if (!c1cs) {
        // 0x80279478: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_80279504;
    }
    // 0x80279478: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8027947C: lhu         $t6, 0x26($sp)
    ctx->r14 = MEM_HU(ctx->r29, 0X26);
    // 0x80279480: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x80279484: beq         $t6, $zero, L_802794A0
    if (ctx->r14 == 0) {
        // 0x80279488: nop
    
            goto L_802794A0;
    }
    // 0x80279488: nop

    // 0x8027948C: lwc1        $f10, 0x0($a2)
    ctx->f10.u32l = MEM_W(ctx->r6, 0X0);
    // 0x80279490: nop

    // 0x80279494: sub.s       $f16, $f10, $f12
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f16.fl = ctx->f10.fl - ctx->f12.fl;
    // 0x80279498: b           L_802794B0
    // 0x8027949C: swc1        $f16, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->f16.u32l;
        goto L_802794B0;
    // 0x8027949C: swc1        $f16, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->f16.u32l;
L_802794A0:
    // 0x802794A0: lwc1        $f18, 0x0($a2)
    ctx->f18.u32l = MEM_W(ctx->r6, 0X0);
    // 0x802794A4: nop

    // 0x802794A8: add.s       $f4, $f18, $f12
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f4.fl = ctx->f18.fl + ctx->f12.fl;
    // 0x802794AC: swc1        $f4, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->f4.u32l;
L_802794B0:
    // 0x802794B0: lwc1        $f12, 0x0($a2)
    ctx->f12.u32l = MEM_W(ctx->r6, 0X0);
    // 0x802794B4: nop

    // 0x802794B8: cvt.d.s     $f0, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); 
    ctx->f0.d = CVT_D_S(ctx->f12.fl);
    // 0x802794BC: c.le.d      $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f2.d <= ctx->f0.d;
    // 0x802794C0: nop

    // 0x802794C4: bc1f        L_802794DC
    if (!c1cs) {
        // 0x802794C8: nop
    
            goto L_802794DC;
    }
    // 0x802794C8: nop

    // 0x802794CC: sub.d       $f6, $f0, $f2
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.d); NAN_CHECK(ctx->f2.d); 
    ctx->f6.d = ctx->f0.d - ctx->f2.d;
    // 0x802794D0: cvt.s.d     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.d); 
    ctx->f8.fl = CVT_S_D(ctx->f6.d);
    // 0x802794D4: b           L_80279510
    // 0x802794D8: swc1        $f8, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->f8.u32l;
        goto L_80279510;
    // 0x802794D8: swc1        $f8, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->f8.u32l;
L_802794DC:
    // 0x802794DC: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x802794E0: nop

    // 0x802794E4: c.lt.s      $f12, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f12.fl < ctx->f10.fl;
    // 0x802794E8: nop

    // 0x802794EC: bc1f        L_80279510
    if (!c1cs) {
        // 0x802794F0: nop
    
            goto L_80279510;
    }
    // 0x802794F0: nop

    // 0x802794F4: add.d       $f16, $f0, $f2
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.d); NAN_CHECK(ctx->f2.d); 
    ctx->f16.d = ctx->f0.d + ctx->f2.d;
    // 0x802794F8: cvt.s.d     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.d); 
    ctx->f18.fl = CVT_S_D(ctx->f16.d);
    // 0x802794FC: b           L_80279510
    // 0x80279500: swc1        $f18, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->f18.u32l;
        goto L_80279510;
    // 0x80279500: swc1        $f18, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->f18.u32l;
L_80279504:
    // 0x80279504: lwc1        $f4, 0x18($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X18);
    // 0x80279508: b           L_80279510
    // 0x8027950C: swc1        $f4, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->f4.u32l;
        goto L_80279510;
    // 0x8027950C: swc1        $f4, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->f4.u32l;
L_80279510:
    // 0x80279510: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80279514: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80279518: jr          $ra
    // 0x8027951C: nop

    return;
    // 0x8027951C: nop

;}
RECOMP_FUNC void ovl_8024B800_func_80279468(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80279468: lwc1        $f3, -0x1BE8($at)
    ctx->f_odd[(3 - 1) * 2] = MEM_W(ctx->r1, -0X1BE8);
    // 0x8027946C: lwc1        $f2, -0x1BE4($at)
    ctx->f2.u32l = MEM_W(ctx->r1, -0X1BE4);
    // 0x80279470: lw          $a2, 0x20($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X20);
    // 0x80279474: bc1f        L_80279504
    if (!c1cs) {
        // 0x80279478: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_80279504;
    }
    // 0x80279478: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8027947C: lhu         $t6, 0x26($sp)
    ctx->r14 = MEM_HU(ctx->r29, 0X26);
    // 0x80279480: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x80279484: beq         $t6, $zero, L_802794A0
    if (ctx->r14 == 0) {
        // 0x80279488: nop
    
            goto L_802794A0;
    }
    // 0x80279488: nop

    // 0x8027948C: lwc1        $f10, 0x0($a2)
    ctx->f10.u32l = MEM_W(ctx->r6, 0X0);
    // 0x80279490: nop

    // 0x80279494: sub.s       $f16, $f10, $f12
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f16.fl = ctx->f10.fl - ctx->f12.fl;
    // 0x80279498: b           L_802794B0
    // 0x8027949C: swc1        $f16, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->f16.u32l;
        goto L_802794B0;
    // 0x8027949C: swc1        $f16, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->f16.u32l;
L_802794A0:
    // 0x802794A0: lwc1        $f18, 0x0($a2)
    ctx->f18.u32l = MEM_W(ctx->r6, 0X0);
    // 0x802794A4: nop

    // 0x802794A8: add.s       $f4, $f18, $f12
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f4.fl = ctx->f18.fl + ctx->f12.fl;
    // 0x802794AC: swc1        $f4, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->f4.u32l;
L_802794B0:
    // 0x802794B0: lwc1        $f12, 0x0($a2)
    ctx->f12.u32l = MEM_W(ctx->r6, 0X0);
    // 0x802794B4: nop

    // 0x802794B8: cvt.d.s     $f0, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); 
    ctx->f0.d = CVT_D_S(ctx->f12.fl);
    // 0x802794BC: c.le.d      $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f2.d <= ctx->f0.d;
    // 0x802794C0: nop

    // 0x802794C4: bc1f        L_802794DC
    if (!c1cs) {
        // 0x802794C8: nop
    
            goto L_802794DC;
    }
    // 0x802794C8: nop

    // 0x802794CC: sub.d       $f6, $f0, $f2
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.d); NAN_CHECK(ctx->f2.d); 
    ctx->f6.d = ctx->f0.d - ctx->f2.d;
    // 0x802794D0: cvt.s.d     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.d); 
    ctx->f8.fl = CVT_S_D(ctx->f6.d);
    // 0x802794D4: b           L_80279510
    // 0x802794D8: swc1        $f8, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->f8.u32l;
        goto L_80279510;
    // 0x802794D8: swc1        $f8, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->f8.u32l;
L_802794DC:
    // 0x802794DC: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x802794E0: nop

    // 0x802794E4: c.lt.s      $f12, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f12.fl < ctx->f10.fl;
    // 0x802794E8: nop

    // 0x802794EC: bc1f        L_80279510
    if (!c1cs) {
        // 0x802794F0: nop
    
            goto L_80279510;
    }
    // 0x802794F0: nop

    // 0x802794F4: add.d       $f16, $f0, $f2
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.d); NAN_CHECK(ctx->f2.d); 
    ctx->f16.d = ctx->f0.d + ctx->f2.d;
    // 0x802794F8: cvt.s.d     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.d); 
    ctx->f18.fl = CVT_S_D(ctx->f16.d);
    // 0x802794FC: b           L_80279510
    // 0x80279500: swc1        $f18, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->f18.u32l;
        goto L_80279510;
    // 0x80279500: swc1        $f18, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->f18.u32l;
L_80279504:
    // 0x80279504: lwc1        $f4, 0x18($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X18);
    // 0x80279508: b           L_80279510
    // 0x8027950C: swc1        $f4, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->f4.u32l;
        goto L_80279510;
    // 0x8027950C: swc1        $f4, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->f4.u32l;
L_80279510:
    // 0x80279510: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80279514: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80279518: jr          $ra
    // 0x8027951C: nop

    return;
    // 0x8027951C: nop

;}
RECOMP_FUNC void ovl_8024B800_func_802794F4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802794F4: add.d       $f16, $f0, $f2
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.d); NAN_CHECK(ctx->f2.d); 
    ctx->f16.d = ctx->f0.d + ctx->f2.d;
    // 0x802794F8: cvt.s.d     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.d); 
    ctx->f18.fl = CVT_S_D(ctx->f16.d);
    // 0x802794FC: b           L_80279510
    // 0x80279500: swc1        $f18, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->f18.u32l;
        goto L_80279510;
    // 0x80279500: swc1        $f18, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->f18.u32l;
    // 0x80279504: lwc1        $f4, 0x18($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X18);
    // 0x80279508: b           L_80279510
    // 0x8027950C: swc1        $f4, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->f4.u32l;
        goto L_80279510;
    // 0x8027950C: swc1        $f4, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->f4.u32l;
L_80279510:
    // 0x80279510: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80279514: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80279518: jr          $ra
    // 0x8027951C: nop

    return;
    // 0x8027951C: nop

;}
RECOMP_FUNC void ovl_8024B800_func_80279520(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80279520: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80279524: swc1        $f12, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f12.u32l;
    // 0x80279528: lui         $at, 0x8028
    ctx->r1 = S32(0X8028 << 16);
    // 0x8027952C: lwc1        $f4, 0x18($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X18);
    // 0x80279530: lwc1        $f3, -0x1BE0($at)
    ctx->f_odd[(3 - 1) * 2] = MEM_W(ctx->r1, -0X1BE0);
    // 0x80279534: lwc1        $f2, -0x1BDC($at)
    ctx->f2.u32l = MEM_W(ctx->r1, -0X1BDC);
    // 0x80279538: cvt.d.s     $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f0.d = CVT_D_S(ctx->f4.fl);
    // 0x8027953C: c.le.d      $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f2.d <= ctx->f0.d;
    // 0x80279540: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80279544: bc1f        L_80279558
    if (!c1cs) {
        // 0x80279548: swc1        $f14, 0x1C($sp)
        MEM_W(0X1C, ctx->r29) = ctx->f14.u32l;
            goto L_80279558;
    }
    // 0x80279548: swc1        $f14, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f14.u32l;
    // 0x8027954C: sub.d       $f6, $f0, $f2
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.d); NAN_CHECK(ctx->f2.d); 
    ctx->f6.d = ctx->f0.d - ctx->f2.d;
    // 0x80279550: cvt.s.d     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.d); 
    ctx->f8.fl = CVT_S_D(ctx->f6.d);
    // 0x80279554: swc1        $f8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f8.u32l;
L_80279558:
    // 0x80279558: lwc1        $f12, 0x0($a2)
    ctx->f12.u32l = MEM_W(ctx->r6, 0X0);
    // 0x8027955C: lwc1        $f14, 0x18($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X18);
    // 0x80279560: jal         0x8027924C
    // 0x80279564: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    ovl_8024B800_func_8027924C(rdram, ctx);
        goto after_0;
    // 0x80279564: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    after_0:
    // 0x80279568: mtc1        $zero, $f14
    ctx->f14.u32l = 0;
    // 0x8027956C: lui         $at, 0x8028
    ctx->r1 = S32(0X8028 << 16);
    // 0x80279570: c.lt.s      $f0, $f14
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    c1cs = ctx->f0.fl < ctx->f14.fl;
    // 0x80279574: lwc1        $f3, -0x1BD8($at)
    ctx->f_odd[(3 - 1) * 2] = MEM_W(ctx->r1, -0X1BD8);
    // 0x80279578: lwc1        $f2, -0x1BD4($at)
    ctx->f2.u32l = MEM_W(ctx->r1, -0X1BD4);
    // 0x8027957C: lw          $a2, 0x20($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X20);
    // 0x80279580: lwc1        $f16, 0x1C($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x80279584: bc1f        L_80279594
    if (!c1cs) {
        // 0x80279588: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_80279594;
    }
    // 0x80279588: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8027958C: b           L_80279598
    // 0x80279590: neg.s       $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f12.fl = -ctx->f0.fl;
        goto L_80279598;
    // 0x80279590: neg.s       $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f12.fl = -ctx->f0.fl;
L_80279594:
    // 0x80279594: mov.s       $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    ctx->f12.fl = ctx->f0.fl;
L_80279598:
    // 0x80279598: c.le.s      $f16, $f12
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f16.fl <= ctx->f12.fl;
    // 0x8027959C: lwc1        $f6, 0x18($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X18);
    // 0x802795A0: bc1f        L_80279628
    if (!c1cs) {
        // 0x802795A4: nop
    
            goto L_80279628;
    }
    // 0x802795A4: nop

    // 0x802795A8: c.le.s      $f14, $f0
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f14.fl <= ctx->f0.fl;
    // 0x802795AC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x802795B0: bc1f        L_802795CC
    if (!c1cs) {
        // 0x802795B4: nop
    
            goto L_802795CC;
    }
    // 0x802795B4: nop

    // 0x802795B8: lwc1        $f10, 0x0($a2)
    ctx->f10.u32l = MEM_W(ctx->r6, 0X0);
    // 0x802795BC: nop

    // 0x802795C0: add.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl + ctx->f16.fl;
    // 0x802795C4: b           L_802795DC
    // 0x802795C8: swc1        $f18, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->f18.u32l;
        goto L_802795DC;
    // 0x802795C8: swc1        $f18, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->f18.u32l;
L_802795CC:
    // 0x802795CC: lwc1        $f4, 0x0($a2)
    ctx->f4.u32l = MEM_W(ctx->r6, 0X0);
    // 0x802795D0: nop

    // 0x802795D4: sub.s       $f6, $f4, $f16
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f6.fl = ctx->f4.fl - ctx->f16.fl;
    // 0x802795D8: swc1        $f6, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->f6.u32l;
L_802795DC:
    // 0x802795DC: lwc1        $f12, 0x0($a2)
    ctx->f12.u32l = MEM_W(ctx->r6, 0X0);
    // 0x802795E0: nop

    // 0x802795E4: cvt.d.s     $f0, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); 
    ctx->f0.d = CVT_D_S(ctx->f12.fl);
    // 0x802795E8: c.le.d      $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f2.d <= ctx->f0.d;
    // 0x802795EC: nop

    // 0x802795F0: bc1f        L_80279608
    if (!c1cs) {
        // 0x802795F4: nop
    
            goto L_80279608;
    }
    // 0x802795F4: nop

    // 0x802795F8: sub.d       $f8, $f0, $f2
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.d); NAN_CHECK(ctx->f2.d); 
    ctx->f8.d = ctx->f0.d - ctx->f2.d;
    // 0x802795FC: cvt.s.d     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.d); 
    ctx->f10.fl = CVT_S_D(ctx->f8.d);
    // 0x80279600: b           L_80279630
    // 0x80279604: swc1        $f10, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->f10.u32l;
        goto L_80279630;
    // 0x80279604: swc1        $f10, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->f10.u32l;
L_80279608:
    // 0x80279608: c.lt.s      $f12, $f14
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 14);
    c1cs = ctx->f12.fl < ctx->f14.fl;
    // 0x8027960C: nop

    // 0x80279610: bc1f        L_80279630
    if (!c1cs) {
        // 0x80279614: nop
    
            goto L_80279630;
    }
    // 0x80279614: nop

    // 0x80279618: add.d       $f18, $f0, $f2
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.d); NAN_CHECK(ctx->f2.d); 
    ctx->f18.d = ctx->f0.d + ctx->f2.d;
    // 0x8027961C: cvt.s.d     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.d); 
    ctx->f4.fl = CVT_S_D(ctx->f18.d);
    // 0x80279620: b           L_80279630
    // 0x80279624: swc1        $f4, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->f4.u32l;
        goto L_80279630;
    // 0x80279624: swc1        $f4, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->f4.u32l;
L_80279628:
    // 0x80279628: b           L_80279630
    // 0x8027962C: swc1        $f6, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->f6.u32l;
        goto L_80279630;
    // 0x8027962C: swc1        $f6, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->f6.u32l;
L_80279630:
    // 0x80279630: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80279634: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80279638: jr          $ra
    // 0x8027963C: nop

    return;
    // 0x8027963C: nop

;}
RECOMP_FUNC void ovl_8024B800_func_80279530(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80279530: lwc1        $f3, -0x1BE0($at)
    ctx->f_odd[(3 - 1) * 2] = MEM_W(ctx->r1, -0X1BE0);
    // 0x80279534: lwc1        $f2, -0x1BDC($at)
    ctx->f2.u32l = MEM_W(ctx->r1, -0X1BDC);
    // 0x80279538: cvt.d.s     $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f0.d = CVT_D_S(ctx->f4.fl);
    // 0x8027953C: c.le.d      $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f2.d <= ctx->f0.d;
    // 0x80279540: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80279544: bc1f        L_80279558
    if (!c1cs) {
        // 0x80279548: swc1        $f14, 0x1C($sp)
        MEM_W(0X1C, ctx->r29) = ctx->f14.u32l;
            goto L_80279558;
    }
    // 0x80279548: swc1        $f14, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f14.u32l;
    // 0x8027954C: sub.d       $f6, $f0, $f2
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.d); NAN_CHECK(ctx->f2.d); 
    ctx->f6.d = ctx->f0.d - ctx->f2.d;
    // 0x80279550: cvt.s.d     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.d); 
    ctx->f8.fl = CVT_S_D(ctx->f6.d);
    // 0x80279554: swc1        $f8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f8.u32l;
L_80279558:
    // 0x80279558: lwc1        $f12, 0x0($a2)
    ctx->f12.u32l = MEM_W(ctx->r6, 0X0);
    // 0x8027955C: lwc1        $f14, 0x18($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X18);
    // 0x80279560: jal         0x8027924C
    // 0x80279564: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    ovl_8024B800_func_8027924C(rdram, ctx);
        goto after_0;
    // 0x80279564: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    after_0:
    // 0x80279568: mtc1        $zero, $f14
    ctx->f14.u32l = 0;
    // 0x8027956C: lui         $at, 0x8028
    ctx->r1 = S32(0X8028 << 16);
    // 0x80279570: c.lt.s      $f0, $f14
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    c1cs = ctx->f0.fl < ctx->f14.fl;
    // 0x80279574: lwc1        $f3, -0x1BD8($at)
    ctx->f_odd[(3 - 1) * 2] = MEM_W(ctx->r1, -0X1BD8);
    // 0x80279578: lwc1        $f2, -0x1BD4($at)
    ctx->f2.u32l = MEM_W(ctx->r1, -0X1BD4);
    // 0x8027957C: lw          $a2, 0x20($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X20);
    // 0x80279580: lwc1        $f16, 0x1C($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x80279584: bc1f        L_80279594
    if (!c1cs) {
        // 0x80279588: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_80279594;
    }
    // 0x80279588: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8027958C: b           L_80279598
    // 0x80279590: neg.s       $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f12.fl = -ctx->f0.fl;
        goto L_80279598;
    // 0x80279590: neg.s       $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f12.fl = -ctx->f0.fl;
L_80279594:
    // 0x80279594: mov.s       $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    ctx->f12.fl = ctx->f0.fl;
L_80279598:
    // 0x80279598: c.le.s      $f16, $f12
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f16.fl <= ctx->f12.fl;
    // 0x8027959C: lwc1        $f6, 0x18($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X18);
    // 0x802795A0: bc1f        L_80279628
    if (!c1cs) {
        // 0x802795A4: nop
    
            goto L_80279628;
    }
    // 0x802795A4: nop

    // 0x802795A8: c.le.s      $f14, $f0
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f14.fl <= ctx->f0.fl;
    // 0x802795AC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x802795B0: bc1f        L_802795CC
    if (!c1cs) {
        // 0x802795B4: nop
    
            goto L_802795CC;
    }
    // 0x802795B4: nop

    // 0x802795B8: lwc1        $f10, 0x0($a2)
    ctx->f10.u32l = MEM_W(ctx->r6, 0X0);
    // 0x802795BC: nop

    // 0x802795C0: add.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl + ctx->f16.fl;
    // 0x802795C4: b           L_802795DC
    // 0x802795C8: swc1        $f18, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->f18.u32l;
        goto L_802795DC;
    // 0x802795C8: swc1        $f18, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->f18.u32l;
L_802795CC:
    // 0x802795CC: lwc1        $f4, 0x0($a2)
    ctx->f4.u32l = MEM_W(ctx->r6, 0X0);
    // 0x802795D0: nop

    // 0x802795D4: sub.s       $f6, $f4, $f16
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f6.fl = ctx->f4.fl - ctx->f16.fl;
    // 0x802795D8: swc1        $f6, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->f6.u32l;
L_802795DC:
    // 0x802795DC: lwc1        $f12, 0x0($a2)
    ctx->f12.u32l = MEM_W(ctx->r6, 0X0);
    // 0x802795E0: nop

    // 0x802795E4: cvt.d.s     $f0, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); 
    ctx->f0.d = CVT_D_S(ctx->f12.fl);
    // 0x802795E8: c.le.d      $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f2.d <= ctx->f0.d;
    // 0x802795EC: nop

    // 0x802795F0: bc1f        L_80279608
    if (!c1cs) {
        // 0x802795F4: nop
    
            goto L_80279608;
    }
    // 0x802795F4: nop

    // 0x802795F8: sub.d       $f8, $f0, $f2
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.d); NAN_CHECK(ctx->f2.d); 
    ctx->f8.d = ctx->f0.d - ctx->f2.d;
    // 0x802795FC: cvt.s.d     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.d); 
    ctx->f10.fl = CVT_S_D(ctx->f8.d);
    // 0x80279600: b           L_80279630
    // 0x80279604: swc1        $f10, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->f10.u32l;
        goto L_80279630;
    // 0x80279604: swc1        $f10, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->f10.u32l;
L_80279608:
    // 0x80279608: c.lt.s      $f12, $f14
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 14);
    c1cs = ctx->f12.fl < ctx->f14.fl;
    // 0x8027960C: nop

    // 0x80279610: bc1f        L_80279630
    if (!c1cs) {
        // 0x80279614: nop
    
            goto L_80279630;
    }
    // 0x80279614: nop

    // 0x80279618: add.d       $f18, $f0, $f2
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.d); NAN_CHECK(ctx->f2.d); 
    ctx->f18.d = ctx->f0.d + ctx->f2.d;
    // 0x8027961C: cvt.s.d     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.d); 
    ctx->f4.fl = CVT_S_D(ctx->f18.d);
    // 0x80279620: b           L_80279630
    // 0x80279624: swc1        $f4, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->f4.u32l;
        goto L_80279630;
    // 0x80279624: swc1        $f4, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->f4.u32l;
L_80279628:
    // 0x80279628: b           L_80279630
    // 0x8027962C: swc1        $f6, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->f6.u32l;
        goto L_80279630;
    // 0x8027962C: swc1        $f6, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->f6.u32l;
L_80279630:
    // 0x80279630: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80279634: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80279638: jr          $ra
    // 0x8027963C: nop

    return;
    // 0x8027963C: nop

;}
RECOMP_FUNC void ovl_8024B800_func_80279568(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80279568: mtc1        $zero, $f14
    ctx->f14.u32l = 0;
    // 0x8027956C: lui         $at, 0x8028
    ctx->r1 = S32(0X8028 << 16);
    // 0x80279570: c.lt.s      $f0, $f14
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    c1cs = ctx->f0.fl < ctx->f14.fl;
    // 0x80279574: lwc1        $f3, -0x1BD8($at)
    ctx->f_odd[(3 - 1) * 2] = MEM_W(ctx->r1, -0X1BD8);
    // 0x80279578: lwc1        $f2, -0x1BD4($at)
    ctx->f2.u32l = MEM_W(ctx->r1, -0X1BD4);
    // 0x8027957C: lw          $a2, 0x20($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X20);
    // 0x80279580: lwc1        $f16, 0x1C($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x80279584: bc1f        L_80279594
    if (!c1cs) {
        // 0x80279588: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_80279594;
    }
    // 0x80279588: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8027958C: b           L_80279598
    // 0x80279590: neg.s       $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f12.fl = -ctx->f0.fl;
        goto L_80279598;
    // 0x80279590: neg.s       $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f12.fl = -ctx->f0.fl;
L_80279594:
    // 0x80279594: mov.s       $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    ctx->f12.fl = ctx->f0.fl;
L_80279598:
    // 0x80279598: c.le.s      $f16, $f12
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f16.fl <= ctx->f12.fl;
    // 0x8027959C: lwc1        $f6, 0x18($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X18);
    // 0x802795A0: bc1f        L_80279628
    if (!c1cs) {
        // 0x802795A4: nop
    
            goto L_80279628;
    }
    // 0x802795A4: nop

    // 0x802795A8: c.le.s      $f14, $f0
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f14.fl <= ctx->f0.fl;
    // 0x802795AC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x802795B0: bc1f        L_802795CC
    if (!c1cs) {
        // 0x802795B4: nop
    
            goto L_802795CC;
    }
    // 0x802795B4: nop

    // 0x802795B8: lwc1        $f10, 0x0($a2)
    ctx->f10.u32l = MEM_W(ctx->r6, 0X0);
    // 0x802795BC: nop

    // 0x802795C0: add.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl + ctx->f16.fl;
    // 0x802795C4: b           L_802795DC
    // 0x802795C8: swc1        $f18, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->f18.u32l;
        goto L_802795DC;
    // 0x802795C8: swc1        $f18, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->f18.u32l;
L_802795CC:
    // 0x802795CC: lwc1        $f4, 0x0($a2)
    ctx->f4.u32l = MEM_W(ctx->r6, 0X0);
    // 0x802795D0: nop

    // 0x802795D4: sub.s       $f6, $f4, $f16
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f6.fl = ctx->f4.fl - ctx->f16.fl;
    // 0x802795D8: swc1        $f6, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->f6.u32l;
L_802795DC:
    // 0x802795DC: lwc1        $f12, 0x0($a2)
    ctx->f12.u32l = MEM_W(ctx->r6, 0X0);
    // 0x802795E0: nop

    // 0x802795E4: cvt.d.s     $f0, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); 
    ctx->f0.d = CVT_D_S(ctx->f12.fl);
    // 0x802795E8: c.le.d      $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f2.d <= ctx->f0.d;
    // 0x802795EC: nop

    // 0x802795F0: bc1f        L_80279608
    if (!c1cs) {
        // 0x802795F4: nop
    
            goto L_80279608;
    }
    // 0x802795F4: nop

    // 0x802795F8: sub.d       $f8, $f0, $f2
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.d); NAN_CHECK(ctx->f2.d); 
    ctx->f8.d = ctx->f0.d - ctx->f2.d;
    // 0x802795FC: cvt.s.d     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.d); 
    ctx->f10.fl = CVT_S_D(ctx->f8.d);
    // 0x80279600: b           L_80279630
    // 0x80279604: swc1        $f10, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->f10.u32l;
        goto L_80279630;
    // 0x80279604: swc1        $f10, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->f10.u32l;
L_80279608:
    // 0x80279608: c.lt.s      $f12, $f14
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 14);
    c1cs = ctx->f12.fl < ctx->f14.fl;
    // 0x8027960C: nop

    // 0x80279610: bc1f        L_80279630
    if (!c1cs) {
        // 0x80279614: nop
    
            goto L_80279630;
    }
    // 0x80279614: nop

    // 0x80279618: add.d       $f18, $f0, $f2
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.d); NAN_CHECK(ctx->f2.d); 
    ctx->f18.d = ctx->f0.d + ctx->f2.d;
    // 0x8027961C: cvt.s.d     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.d); 
    ctx->f4.fl = CVT_S_D(ctx->f18.d);
    // 0x80279620: b           L_80279630
    // 0x80279624: swc1        $f4, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->f4.u32l;
        goto L_80279630;
    // 0x80279624: swc1        $f4, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->f4.u32l;
L_80279628:
    // 0x80279628: b           L_80279630
    // 0x8027962C: swc1        $f6, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->f6.u32l;
        goto L_80279630;
    // 0x8027962C: swc1        $f6, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->f6.u32l;
L_80279630:
    // 0x80279630: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80279634: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80279638: jr          $ra
    // 0x8027963C: nop

    return;
    // 0x8027963C: nop

;}
RECOMP_FUNC void ovl_8024B800_func_802795A0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802795A0: bc1f        L_80279628
    if (!c1cs) {
        // 0x802795A4: nop
    
            goto L_80279628;
    }
    // 0x802795A4: nop

    // 0x802795A8: c.le.s      $f14, $f0
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f14.fl <= ctx->f0.fl;
    // 0x802795AC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x802795B0: bc1f        L_802795CC
    if (!c1cs) {
        // 0x802795B4: nop
    
            goto L_802795CC;
    }
    // 0x802795B4: nop

    // 0x802795B8: lwc1        $f10, 0x0($a2)
    ctx->f10.u32l = MEM_W(ctx->r6, 0X0);
    // 0x802795BC: nop

    // 0x802795C0: add.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl + ctx->f16.fl;
    // 0x802795C4: b           L_802795DC
    // 0x802795C8: swc1        $f18, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->f18.u32l;
        goto L_802795DC;
    // 0x802795C8: swc1        $f18, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->f18.u32l;
L_802795CC:
    // 0x802795CC: lwc1        $f4, 0x0($a2)
    ctx->f4.u32l = MEM_W(ctx->r6, 0X0);
    // 0x802795D0: nop

    // 0x802795D4: sub.s       $f6, $f4, $f16
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f6.fl = ctx->f4.fl - ctx->f16.fl;
    // 0x802795D8: swc1        $f6, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->f6.u32l;
L_802795DC:
    // 0x802795DC: lwc1        $f12, 0x0($a2)
    ctx->f12.u32l = MEM_W(ctx->r6, 0X0);
    // 0x802795E0: nop

    // 0x802795E4: cvt.d.s     $f0, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); 
    ctx->f0.d = CVT_D_S(ctx->f12.fl);
    // 0x802795E8: c.le.d      $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f2.d <= ctx->f0.d;
    // 0x802795EC: nop

    // 0x802795F0: bc1f        L_80279608
    if (!c1cs) {
        // 0x802795F4: nop
    
            goto L_80279608;
    }
    // 0x802795F4: nop

    // 0x802795F8: sub.d       $f8, $f0, $f2
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.d); NAN_CHECK(ctx->f2.d); 
    ctx->f8.d = ctx->f0.d - ctx->f2.d;
    // 0x802795FC: cvt.s.d     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.d); 
    ctx->f10.fl = CVT_S_D(ctx->f8.d);
    // 0x80279600: b           L_80279630
    // 0x80279604: swc1        $f10, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->f10.u32l;
        goto L_80279630;
    // 0x80279604: swc1        $f10, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->f10.u32l;
L_80279608:
    // 0x80279608: c.lt.s      $f12, $f14
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 14);
    c1cs = ctx->f12.fl < ctx->f14.fl;
    // 0x8027960C: nop

    // 0x80279610: bc1f        L_80279630
    if (!c1cs) {
        // 0x80279614: nop
    
            goto L_80279630;
    }
    // 0x80279614: nop

    // 0x80279618: add.d       $f18, $f0, $f2
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.d); NAN_CHECK(ctx->f2.d); 
    ctx->f18.d = ctx->f0.d + ctx->f2.d;
    // 0x8027961C: cvt.s.d     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.d); 
    ctx->f4.fl = CVT_S_D(ctx->f18.d);
    // 0x80279620: b           L_80279630
    // 0x80279624: swc1        $f4, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->f4.u32l;
        goto L_80279630;
    // 0x80279624: swc1        $f4, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->f4.u32l;
L_80279628:
    // 0x80279628: b           L_80279630
    // 0x8027962C: swc1        $f6, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->f6.u32l;
        goto L_80279630;
    // 0x8027962C: swc1        $f6, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->f6.u32l;
L_80279630:
    // 0x80279630: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80279634: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80279638: jr          $ra
    // 0x8027963C: nop

    return;
    // 0x8027963C: nop

;}
RECOMP_FUNC void ovl_8024B800_func_80279640(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80279640: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80279644: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80279648: sw          $a2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r6;
    // 0x8027964C: mtc1        $a1, $f14
    ctx->f14.u32l = ctx->r5;
    // 0x80279650: lwc1        $f12, 0x8C($a0)
    ctx->f12.u32l = MEM_W(ctx->r4, 0X8C);
    // 0x80279654: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x80279658: jal         0x8027924C
    // 0x8027965C: swc1        $f14, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f14.u32l;
    ovl_8024B800_func_8027924C(rdram, ctx);
        goto after_0;
    // 0x8027965C: swc1        $f14, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f14.u32l;
    after_0:
    // 0x80279660: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x80279664: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    // 0x80279668: c.lt.s      $f0, $f18
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f0.fl < ctx->f18.fl;
    // 0x8027966C: lwc1        $f14, 0x2C($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x80279670: lwc1        $f16, 0x30($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X30);
    // 0x80279674: bc1f        L_80279684
    if (!c1cs) {
        // 0x80279678: swc1        $f0, 0x24($sp)
        MEM_W(0X24, ctx->r29) = ctx->f0.u32l;
            goto L_80279684;
    }
    // 0x80279678: swc1        $f0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f0.u32l;
    // 0x8027967C: b           L_80279688
    // 0x80279680: neg.s       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = -ctx->f0.fl;
        goto L_80279688;
    // 0x80279680: neg.s       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = -ctx->f0.fl;
L_80279684:
    // 0x80279684: mov.s       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.fl = ctx->f0.fl;
L_80279688:
    // 0x80279688: c.le.s      $f16, $f2
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f16.fl <= ctx->f2.fl;
    // 0x8027968C: nop

    // 0x80279690: bc1f        L_80279790
    if (!c1cs) {
        // 0x80279694: nop
    
            goto L_80279790;
    }
    // 0x80279694: nop

    // 0x80279698: lwc1        $f4, 0x44($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X44);
    // 0x8027969C: lui         $at, 0x8028
    ctx->r1 = S32(0X8028 << 16);
    // 0x802796A0: c.lt.s      $f18, $f4
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f18.fl < ctx->f4.fl;
    // 0x802796A4: nop

    // 0x802796A8: bc1f        L_802796C4
    if (!c1cs) {
        // 0x802796AC: nop
    
            goto L_802796C4;
    }
    // 0x802796AC: nop

    // 0x802796B0: lui         $at, 0x8028
    ctx->r1 = S32(0X8028 << 16);
    // 0x802796B4: lwc1        $f7, -0x1BD0($at)
    ctx->f_odd[(7 - 1) * 2] = MEM_W(ctx->r1, -0X1BD0);
    // 0x802796B8: lwc1        $f6, -0x1BCC($at)
    ctx->f6.u32l = MEM_W(ctx->r1, -0X1BCC);
    // 0x802796BC: b           L_802796D4
    // 0x802796C0: cvt.s.d     $f12, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.d); 
    ctx->f12.fl = CVT_S_D(ctx->f6.d);
        goto L_802796D4;
    // 0x802796C0: cvt.s.d     $f12, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.d); 
    ctx->f12.fl = CVT_S_D(ctx->f6.d);
L_802796C4:
    // 0x802796C4: lwc1        $f9, -0x1BC8($at)
    ctx->f_odd[(9 - 1) * 2] = MEM_W(ctx->r1, -0X1BC8);
    // 0x802796C8: lwc1        $f8, -0x1BC4($at)
    ctx->f8.u32l = MEM_W(ctx->r1, -0X1BC4);
    // 0x802796CC: nop

    // 0x802796D0: cvt.s.d     $f12, $f8
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.d); 
    ctx->f12.fl = CVT_S_D(ctx->f8.d);
L_802796D4:
    // 0x802796D4: jal         0x8027924C
    // 0x802796D8: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    ovl_8024B800_func_8027924C(rdram, ctx);
        goto after_1;
    // 0x802796D8: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    after_1:
    // 0x802796DC: swc1        $f0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f0.u32l;
    // 0x802796E0: jal         0x80272AEC
    // 0x802796E4: mov.s       $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    ctx->f12.fl = ctx->f0.fl;
    ovl_8024B800_func_80272AEC(rdram, ctx);
        goto after_2;
    // 0x802796E4: mov.s       $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    ctx->f12.fl = ctx->f0.fl;
    after_2:
    // 0x802796E8: lui         $at, 0x8028
    ctx->r1 = S32(0X8028 << 16);
    // 0x802796EC: lwc1        $f5, -0x1BC0($at)
    ctx->f_odd[(5 - 1) * 2] = MEM_W(ctx->r1, -0X1BC0);
    // 0x802796F0: lwc1        $f4, -0x1BBC($at)
    ctx->f4.u32l = MEM_W(ctx->r1, -0X1BBC);
    // 0x802796F4: cvt.d.s     $f10, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f10.d = CVT_D_S(ctx->f0.fl);
    // 0x802796F8: c.lt.d      $f10, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f10.d < ctx->f4.d;
    // 0x802796FC: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    // 0x80279700: lwc1        $f16, 0x30($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X30);
    // 0x80279704: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x80279708: bc1f        L_80279750
    if (!c1cs) {
        // 0x8027970C: nop
    
            goto L_80279750;
    }
    // 0x8027970C: nop

    // 0x80279710: lwc1        $f6, 0x1C($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x80279714: nop

    // 0x80279718: c.le.s      $f18, $f6
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f18.fl <= ctx->f6.fl;
    // 0x8027971C: nop

    // 0x80279720: bc1f        L_8027973C
    if (!c1cs) {
        // 0x80279724: nop
    
            goto L_8027973C;
    }
    // 0x80279724: nop

    // 0x80279728: lwc1        $f8, 0x8C($a0)
    ctx->f8.u32l = MEM_W(ctx->r4, 0X8C);
    // 0x8027972C: nop

    // 0x80279730: sub.s       $f10, $f8, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f10.fl = ctx->f8.fl - ctx->f16.fl;
    // 0x80279734: b           L_80279794
    // 0x80279738: swc1        $f10, 0x8C($a0)
    MEM_W(0X8C, ctx->r4) = ctx->f10.u32l;
        goto L_80279794;
    // 0x80279738: swc1        $f10, 0x8C($a0)
    MEM_W(0X8C, ctx->r4) = ctx->f10.u32l;
L_8027973C:
    // 0x8027973C: lwc1        $f4, 0x8C($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X8C);
    // 0x80279740: nop

    // 0x80279744: add.s       $f6, $f4, $f16
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f6.fl = ctx->f4.fl + ctx->f16.fl;
    // 0x80279748: b           L_80279794
    // 0x8027974C: swc1        $f6, 0x8C($a0)
    MEM_W(0X8C, ctx->r4) = ctx->f6.u32l;
        goto L_80279794;
    // 0x8027974C: swc1        $f6, 0x8C($a0)
    MEM_W(0X8C, ctx->r4) = ctx->f6.u32l;
L_80279750:
    // 0x80279750: lwc1        $f8, 0x24($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X24);
    // 0x80279754: nop

    // 0x80279758: c.le.s      $f18, $f8
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f18.fl <= ctx->f8.fl;
    // 0x8027975C: nop

    // 0x80279760: bc1f        L_8027977C
    if (!c1cs) {
        // 0x80279764: nop
    
            goto L_8027977C;
    }
    // 0x80279764: nop

    // 0x80279768: lwc1        $f10, 0x8C($a0)
    ctx->f10.u32l = MEM_W(ctx->r4, 0X8C);
    // 0x8027976C: nop

    // 0x80279770: add.s       $f4, $f10, $f16
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f4.fl = ctx->f10.fl + ctx->f16.fl;
    // 0x80279774: b           L_80279794
    // 0x80279778: swc1        $f4, 0x8C($a0)
    MEM_W(0X8C, ctx->r4) = ctx->f4.u32l;
        goto L_80279794;
    // 0x80279778: swc1        $f4, 0x8C($a0)
    MEM_W(0X8C, ctx->r4) = ctx->f4.u32l;
L_8027977C:
    // 0x8027977C: lwc1        $f6, 0x8C($a0)
    ctx->f6.u32l = MEM_W(ctx->r4, 0X8C);
    // 0x80279780: nop

    // 0x80279784: sub.s       $f8, $f6, $f16
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f8.fl = ctx->f6.fl - ctx->f16.fl;
    // 0x80279788: b           L_80279794
    // 0x8027978C: swc1        $f8, 0x8C($a0)
    MEM_W(0X8C, ctx->r4) = ctx->f8.u32l;
        goto L_80279794;
    // 0x8027978C: swc1        $f8, 0x8C($a0)
    MEM_W(0X8C, ctx->r4) = ctx->f8.u32l;
L_80279790:
    // 0x80279790: swc1        $f14, 0x8C($a0)
    MEM_W(0X8C, ctx->r4) = ctx->f14.u32l;
L_80279794:
    // 0x80279794: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80279798: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x8027979C: jr          $ra
    // 0x802797A0: nop

    return;
    // 0x802797A0: nop

;}
RECOMP_FUNC void ovl_8024B800_func_80279694(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80279694: nop

    // 0x80279698: lwc1        $f4, 0x44($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X44);
    // 0x8027969C: lui         $at, 0x8028
    ctx->r1 = S32(0X8028 << 16);
    // 0x802796A0: c.lt.s      $f18, $f4
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f18.fl < ctx->f4.fl;
    // 0x802796A4: nop

    // 0x802796A8: bc1f        L_802796C4
    if (!c1cs) {
        // 0x802796AC: nop
    
            goto L_802796C4;
    }
    // 0x802796AC: nop

    // 0x802796B0: lui         $at, 0x8028
    ctx->r1 = S32(0X8028 << 16);
    // 0x802796B4: lwc1        $f7, -0x1BD0($at)
    ctx->f_odd[(7 - 1) * 2] = MEM_W(ctx->r1, -0X1BD0);
    // 0x802796B8: lwc1        $f6, -0x1BCC($at)
    ctx->f6.u32l = MEM_W(ctx->r1, -0X1BCC);
    // 0x802796BC: b           L_802796D4
    // 0x802796C0: cvt.s.d     $f12, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.d); 
    ctx->f12.fl = CVT_S_D(ctx->f6.d);
        goto L_802796D4;
    // 0x802796C0: cvt.s.d     $f12, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.d); 
    ctx->f12.fl = CVT_S_D(ctx->f6.d);
L_802796C4:
    // 0x802796C4: lwc1        $f9, -0x1BC8($at)
    ctx->f_odd[(9 - 1) * 2] = MEM_W(ctx->r1, -0X1BC8);
    // 0x802796C8: lwc1        $f8, -0x1BC4($at)
    ctx->f8.u32l = MEM_W(ctx->r1, -0X1BC4);
    // 0x802796CC: nop

    // 0x802796D0: cvt.s.d     $f12, $f8
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.d); 
    ctx->f12.fl = CVT_S_D(ctx->f8.d);
L_802796D4:
    // 0x802796D4: jal         0x8027924C
    // 0x802796D8: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    ovl_8024B800_func_8027924C(rdram, ctx);
        goto after_0;
    // 0x802796D8: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    after_0:
    // 0x802796DC: swc1        $f0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f0.u32l;
    // 0x802796E0: jal         0x80272AEC
    // 0x802796E4: mov.s       $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    ctx->f12.fl = ctx->f0.fl;
    ovl_8024B800_func_80272AEC(rdram, ctx);
        goto after_1;
    // 0x802796E4: mov.s       $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    ctx->f12.fl = ctx->f0.fl;
    after_1:
    // 0x802796E8: lui         $at, 0x8028
    ctx->r1 = S32(0X8028 << 16);
    // 0x802796EC: lwc1        $f5, -0x1BC0($at)
    ctx->f_odd[(5 - 1) * 2] = MEM_W(ctx->r1, -0X1BC0);
    // 0x802796F0: lwc1        $f4, -0x1BBC($at)
    ctx->f4.u32l = MEM_W(ctx->r1, -0X1BBC);
    // 0x802796F4: cvt.d.s     $f10, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f10.d = CVT_D_S(ctx->f0.fl);
    // 0x802796F8: c.lt.d      $f10, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f10.d < ctx->f4.d;
    // 0x802796FC: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    // 0x80279700: lwc1        $f16, 0x30($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X30);
    // 0x80279704: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x80279708: bc1f        L_80279750
    if (!c1cs) {
        // 0x8027970C: nop
    
            goto L_80279750;
    }
    // 0x8027970C: nop

    // 0x80279710: lwc1        $f6, 0x1C($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x80279714: nop

    // 0x80279718: c.le.s      $f18, $f6
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f18.fl <= ctx->f6.fl;
    // 0x8027971C: nop

    // 0x80279720: bc1f        L_8027973C
    if (!c1cs) {
        // 0x80279724: nop
    
            goto L_8027973C;
    }
    // 0x80279724: nop

    // 0x80279728: lwc1        $f8, 0x8C($a0)
    ctx->f8.u32l = MEM_W(ctx->r4, 0X8C);
    // 0x8027972C: nop

    // 0x80279730: sub.s       $f10, $f8, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f10.fl = ctx->f8.fl - ctx->f16.fl;
    // 0x80279734: b           L_80279794
    // 0x80279738: swc1        $f10, 0x8C($a0)
    MEM_W(0X8C, ctx->r4) = ctx->f10.u32l;
        goto L_80279794;
    // 0x80279738: swc1        $f10, 0x8C($a0)
    MEM_W(0X8C, ctx->r4) = ctx->f10.u32l;
L_8027973C:
    // 0x8027973C: lwc1        $f4, 0x8C($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X8C);
    // 0x80279740: nop

    // 0x80279744: add.s       $f6, $f4, $f16
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f6.fl = ctx->f4.fl + ctx->f16.fl;
    // 0x80279748: b           L_80279794
    // 0x8027974C: swc1        $f6, 0x8C($a0)
    MEM_W(0X8C, ctx->r4) = ctx->f6.u32l;
        goto L_80279794;
    // 0x8027974C: swc1        $f6, 0x8C($a0)
    MEM_W(0X8C, ctx->r4) = ctx->f6.u32l;
L_80279750:
    // 0x80279750: lwc1        $f8, 0x24($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X24);
    // 0x80279754: nop

    // 0x80279758: c.le.s      $f18, $f8
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f18.fl <= ctx->f8.fl;
    // 0x8027975C: nop

    // 0x80279760: bc1f        L_8027977C
    if (!c1cs) {
        // 0x80279764: nop
    
            goto L_8027977C;
    }
    // 0x80279764: nop

    // 0x80279768: lwc1        $f10, 0x8C($a0)
    ctx->f10.u32l = MEM_W(ctx->r4, 0X8C);
    // 0x8027976C: nop

    // 0x80279770: add.s       $f4, $f10, $f16
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f4.fl = ctx->f10.fl + ctx->f16.fl;
    // 0x80279774: b           L_80279794
    // 0x80279778: swc1        $f4, 0x8C($a0)
    MEM_W(0X8C, ctx->r4) = ctx->f4.u32l;
        goto L_80279794;
    // 0x80279778: swc1        $f4, 0x8C($a0)
    MEM_W(0X8C, ctx->r4) = ctx->f4.u32l;
L_8027977C:
    // 0x8027977C: lwc1        $f6, 0x8C($a0)
    ctx->f6.u32l = MEM_W(ctx->r4, 0X8C);
    // 0x80279780: nop

    // 0x80279784: sub.s       $f8, $f6, $f16
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f8.fl = ctx->f6.fl - ctx->f16.fl;
    // 0x80279788: b           L_80279794
    // 0x8027978C: swc1        $f8, 0x8C($a0)
    MEM_W(0X8C, ctx->r4) = ctx->f8.u32l;
        goto L_80279794;
    // 0x8027978C: swc1        $f8, 0x8C($a0)
    MEM_W(0X8C, ctx->r4) = ctx->f8.u32l;
    // 0x80279790: swc1        $f14, 0x8C($a0)
    MEM_W(0X8C, ctx->r4) = ctx->f14.u32l;
L_80279794:
    // 0x80279794: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80279798: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x8027979C: jr          $ra
    // 0x802797A0: nop

    return;
    // 0x802797A0: nop

;}
RECOMP_FUNC void ovl_8024B800_func_802797A4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802797A4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802797A8: lui         $at, 0x8028
    ctx->r1 = S32(0X8028 << 16);
    // 0x802797AC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802797B0: lwc1        $f4, 0x88($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X88);
    // 0x802797B4: lwc1        $f9, -0x1BB8($at)
    ctx->f_odd[(9 - 1) * 2] = MEM_W(ctx->r1, -0X1BB8);
    // 0x802797B8: lwc1        $f8, -0x1BB4($at)
    ctx->f8.u32l = MEM_W(ctx->r1, -0X1BB4);
    // 0x802797BC: lui         $at, 0x8028
    ctx->r1 = S32(0X8028 << 16);
    // 0x802797C0: cvt.d.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.d = CVT_D_S(ctx->f4.fl);
    // 0x802797C4: add.d       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f8.d); 
    ctx->f10.d = ctx->f6.d + ctx->f8.d;
    // 0x802797C8: lwc1        $f14, -0x1BB0($at)
    ctx->f14.u32l = MEM_W(ctx->r1, -0X1BB0);
    // 0x802797CC: cvt.s.d     $f12, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f12.fl = CVT_S_D(ctx->f10.d);
    // 0x802797D0: jal         0x80279520
    // 0x802797D4: addiu       $a2, $a0, 0x8C
    ctx->r6 = ADD32(ctx->r4, 0X8C);
    ovl_8024B800_func_80279520(rdram, ctx);
        goto after_0;
    // 0x802797D4: addiu       $a2, $a0, 0x8C
    ctx->r6 = ADD32(ctx->r4, 0X8C);
    after_0:
    // 0x802797D8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802797DC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x802797E0: jr          $ra
    // 0x802797E4: nop

    return;
    // 0x802797E4: nop

;}
RECOMP_FUNC void ovl_8024B800_func_802797B0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802797B0: lwc1        $f4, 0x88($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X88);
    // 0x802797B4: lwc1        $f9, -0x1BB8($at)
    ctx->f_odd[(9 - 1) * 2] = MEM_W(ctx->r1, -0X1BB8);
    // 0x802797B8: lwc1        $f8, -0x1BB4($at)
    ctx->f8.u32l = MEM_W(ctx->r1, -0X1BB4);
    // 0x802797BC: lui         $at, 0x8028
    ctx->r1 = S32(0X8028 << 16);
    // 0x802797C0: cvt.d.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.d = CVT_D_S(ctx->f4.fl);
    // 0x802797C4: add.d       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f8.d); 
    ctx->f10.d = ctx->f6.d + ctx->f8.d;
    // 0x802797C8: lwc1        $f14, -0x1BB0($at)
    ctx->f14.u32l = MEM_W(ctx->r1, -0X1BB0);
    // 0x802797CC: cvt.s.d     $f12, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f12.fl = CVT_S_D(ctx->f10.d);
    // 0x802797D0: jal         0x80279520
    // 0x802797D4: addiu       $a2, $a0, 0x8C
    ctx->r6 = ADD32(ctx->r4, 0X8C);
    ovl_8024B800_func_80279520(rdram, ctx);
        goto after_0;
    // 0x802797D4: addiu       $a2, $a0, 0x8C
    ctx->r6 = ADD32(ctx->r4, 0X8C);
    after_0:
    // 0x802797D8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802797DC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x802797E0: jr          $ra
    // 0x802797E4: nop

    return;
    // 0x802797E4: nop

;}
RECOMP_FUNC void ovl_8024B800_func_802797E8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802797E8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802797EC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802797F0: mtc1        $zero, $f12
    ctx->f12.u32l = 0;
    // 0x802797F4: lwc1        $f4, 0x50($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X50);
    // 0x802797F8: nop

    // 0x802797FC: c.eq.s      $f12, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f12.fl == ctx->f4.fl;
    // 0x80279800: nop

    // 0x80279804: bc1t        L_80279954
    if (c1cs) {
        // 0x80279808: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_80279954;
    }
    // 0x80279808: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8027980C: lhu         $t6, 0x14($a0)
    ctx->r14 = MEM_HU(ctx->r4, 0X14);
    // 0x80279810: nop

    // 0x80279814: andi        $t7, $t6, 0x400
    ctx->r15 = ctx->r14 & 0X400;
    // 0x80279818: bne         $t7, $zero, L_80279954
    if (ctx->r15 != 0) {
        // 0x8027981C: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_80279954;
    }
    // 0x8027981C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80279820: lhu         $t8, 0x18($a0)
    ctx->r24 = MEM_HU(ctx->r4, 0X18);
    // 0x80279824: nop

    // 0x80279828: andi        $t9, $t8, 0x2
    ctx->r25 = ctx->r24 & 0X2;
    // 0x8027982C: bne         $t9, $zero, L_80279954
    if (ctx->r25 != 0) {
        // 0x80279830: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_80279954;
    }
    // 0x80279830: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80279834: lhu         $t0, 0x16($a0)
    ctx->r8 = MEM_HU(ctx->r4, 0X16);
    // 0x80279838: nop

    // 0x8027983C: andi        $t1, $t0, 0x40
    ctx->r9 = ctx->r8 & 0X40;
    // 0x80279840: bne         $t1, $zero, L_80279954
    if (ctx->r9 != 0) {
        // 0x80279844: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_80279954;
    }
    // 0x80279844: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80279848: lwc1        $f6, 0x50($a1)
    ctx->f6.u32l = MEM_W(ctx->r5, 0X50);
    // 0x8027984C: lui         $at, 0x3F00
    ctx->r1 = S32(0X3F00 << 16);
    // 0x80279850: c.eq.s      $f12, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f12.fl == ctx->f6.fl;
    // 0x80279854: nop

    // 0x80279858: bc1t        L_80279880
    if (c1cs) {
        // 0x8027985C: nop
    
            goto L_80279880;
    }
    // 0x8027985C: nop

    // 0x80279860: lwc1        $f0, 0x78($a0)
    ctx->f0.u32l = MEM_W(ctx->r4, 0X78);
    // 0x80279864: lwc1        $f8, 0x78($a1)
    ctx->f8.u32l = MEM_W(ctx->r5, 0X78);
    // 0x80279868: nop

    // 0x8027986C: mul.s       $f10, $f0, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = MUL_S(ctx->f0.fl, ctx->f8.fl);
    // 0x80279870: c.lt.s      $f10, $f12
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f10.fl < ctx->f12.fl;
    // 0x80279874: nop

    // 0x80279878: bc1f        L_80279890
    if (!c1cs) {
        // 0x8027987C: nop
    
            goto L_80279890;
    }
    // 0x8027987C: nop

L_80279880:
    // 0x80279880: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x80279884: lwc1        $f0, 0x78($a0)
    ctx->f0.u32l = MEM_W(ctx->r4, 0X78);
    // 0x80279888: b           L_8027989C
    // 0x8027988C: nop

        goto L_8027989C;
    // 0x8027988C: nop

L_80279890:
    // 0x80279890: lui         $at, 0x3F40
    ctx->r1 = S32(0X3F40 << 16);
    // 0x80279894: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x80279898: nop

L_8027989C:
    // 0x8027989C: mul.s       $f16, $f0, $f14
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f16.fl = MUL_S(ctx->f0.fl, ctx->f14.fl);
    // 0x802798A0: lui         $at, 0x3F00
    ctx->r1 = S32(0X3F00 << 16);
    // 0x802798A4: swc1        $f16, 0x78($a0)
    MEM_W(0X78, ctx->r4) = ctx->f16.u32l;
    // 0x802798A8: lwc1        $f18, 0x50($a1)
    ctx->f18.u32l = MEM_W(ctx->r5, 0X50);
    // 0x802798AC: nop

    // 0x802798B0: c.eq.s      $f12, $f18
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f12.fl == ctx->f18.fl;
    // 0x802798B4: nop

    // 0x802798B8: bc1t        L_802798E0
    if (c1cs) {
        // 0x802798BC: nop
    
            goto L_802798E0;
    }
    // 0x802798BC: nop

    // 0x802798C0: lwc1        $f2, 0x70($a0)
    ctx->f2.u32l = MEM_W(ctx->r4, 0X70);
    // 0x802798C4: lwc1        $f4, 0x70($a1)
    ctx->f4.u32l = MEM_W(ctx->r5, 0X70);
    // 0x802798C8: nop

    // 0x802798CC: mul.s       $f6, $f2, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f2.fl, ctx->f4.fl);
    // 0x802798D0: c.lt.s      $f6, $f12
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f6.fl < ctx->f12.fl;
    // 0x802798D4: nop

    // 0x802798D8: bc1f        L_802798F0
    if (!c1cs) {
        // 0x802798DC: nop
    
            goto L_802798F0;
    }
    // 0x802798DC: nop

L_802798E0:
    // 0x802798E0: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x802798E4: lwc1        $f2, 0x70($a0)
    ctx->f2.u32l = MEM_W(ctx->r4, 0X70);
    // 0x802798E8: b           L_802798FC
    // 0x802798EC: nop

        goto L_802798FC;
    // 0x802798EC: nop

L_802798F0:
    // 0x802798F0: lui         $at, 0x3F40
    ctx->r1 = S32(0X3F40 << 16);
    // 0x802798F4: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x802798F8: nop

L_802798FC:
    // 0x802798FC: mul.s       $f8, $f2, $f14
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f8.fl = MUL_S(ctx->f2.fl, ctx->f14.fl);
    // 0x80279900: lwc1        $f0, 0x78($a0)
    ctx->f0.u32l = MEM_W(ctx->r4, 0X78);
    // 0x80279904: swc1        $f8, 0x70($a0)
    MEM_W(0X70, ctx->r4) = ctx->f8.u32l;
    // 0x80279908: lwc1        $f2, 0x70($a0)
    ctx->f2.u32l = MEM_W(ctx->r4, 0X70);
    // 0x8027990C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x80279910: mul.s       $f10, $f2, $f2
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f10.fl = MUL_S(ctx->f2.fl, ctx->f2.fl);
    // 0x80279914: nop

    // 0x80279918: mul.s       $f16, $f0, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f16.fl = MUL_S(ctx->f0.fl, ctx->f0.fl);
    // 0x8027991C: jal         0x8007FA40
    // 0x80279920: add.s       $f12, $f10, $f16
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f12.fl = ctx->f10.fl + ctx->f16.fl;
    func_8007FA40(rdram, ctx);
        goto after_0;
    // 0x80279920: add.s       $f12, $f10, $f16
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f12.fl = ctx->f10.fl + ctx->f16.fl;
    after_0:
    // 0x80279924: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x80279928: nop

    // 0x8027992C: lwc1        $f18, 0xA4($a0)
    ctx->f18.u32l = MEM_W(ctx->r4, 0XA4);
    // 0x80279930: lwc1        $f4, 0x78($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X78);
    // 0x80279934: lwc1        $f8, 0xA8($a0)
    ctx->f8.u32l = MEM_W(ctx->r4, 0XA8);
    // 0x80279938: lwc1        $f10, 0x70($a0)
    ctx->f10.u32l = MEM_W(ctx->r4, 0X70);
    // 0x8027993C: add.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f18.fl + ctx->f4.fl;
    // 0x80279940: swc1        $f0, 0x50($a0)
    MEM_W(0X50, ctx->r4) = ctx->f0.u32l;
    // 0x80279944: add.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x80279948: swc1        $f6, 0x4C($a0)
    MEM_W(0X4C, ctx->r4) = ctx->f6.u32l;
    // 0x8027994C: swc1        $f16, 0x44($a0)
    MEM_W(0X44, ctx->r4) = ctx->f16.u32l;
    // 0x80279950: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80279954:
    // 0x80279954: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80279958: jr          $ra
    // 0x8027995C: nop

    return;
    // 0x8027995C: nop

;}
RECOMP_FUNC void ovl_8024B800_func_80279914(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80279914: nop

    // 0x80279918: mul.s       $f16, $f0, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f16.fl = MUL_S(ctx->f0.fl, ctx->f0.fl);
    // 0x8027991C: jal         0x8007FA40
    // 0x80279920: add.s       $f12, $f10, $f16
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f12.fl = ctx->f10.fl + ctx->f16.fl;
    func_8007FA40(rdram, ctx);
        goto after_0;
    // 0x80279920: add.s       $f12, $f10, $f16
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f12.fl = ctx->f10.fl + ctx->f16.fl;
    after_0:
    // 0x80279924: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x80279928: nop

    // 0x8027992C: lwc1        $f18, 0xA4($a0)
    ctx->f18.u32l = MEM_W(ctx->r4, 0XA4);
    // 0x80279930: lwc1        $f4, 0x78($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X78);
    // 0x80279934: lwc1        $f8, 0xA8($a0)
    ctx->f8.u32l = MEM_W(ctx->r4, 0XA8);
    // 0x80279938: lwc1        $f10, 0x70($a0)
    ctx->f10.u32l = MEM_W(ctx->r4, 0X70);
    // 0x8027993C: add.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f18.fl + ctx->f4.fl;
    // 0x80279940: swc1        $f0, 0x50($a0)
    MEM_W(0X50, ctx->r4) = ctx->f0.u32l;
    // 0x80279944: add.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x80279948: swc1        $f6, 0x4C($a0)
    MEM_W(0X4C, ctx->r4) = ctx->f6.u32l;
    // 0x8027994C: swc1        $f16, 0x44($a0)
    MEM_W(0X44, ctx->r4) = ctx->f16.u32l;
    // 0x80279950: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80279954: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80279958: jr          $ra
    // 0x8027995C: nop

    return;
    // 0x8027995C: nop

;}
RECOMP_FUNC void ovl_8024B800_func_80279960(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80279960: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80279964: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80279968: lhu         $t6, 0x14($a1)
    ctx->r14 = MEM_HU(ctx->r5, 0X14);
    // 0x8027996C: mtc1        $a2, $f12
    ctx->f12.u32l = ctx->r6;
    // 0x80279970: andi        $t7, $t6, 0x400
    ctx->r15 = ctx->r14 & 0X400;
    // 0x80279974: bne         $t7, $zero, L_80279A48
    if (ctx->r15 != 0) {
        // 0x80279978: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_80279A48;
    }
    // 0x80279978: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8027997C: lhu         $t8, 0x18($a1)
    ctx->r24 = MEM_HU(ctx->r5, 0X18);
    // 0x80279980: nop

    // 0x80279984: andi        $t9, $t8, 0x2
    ctx->r25 = ctx->r24 & 0X2;
    // 0x80279988: bne         $t9, $zero, L_80279A48
    if (ctx->r25 != 0) {
        // 0x8027998C: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_80279A48;
    }
    // 0x8027998C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80279990: lhu         $t0, 0x16($a1)
    ctx->r8 = MEM_HU(ctx->r5, 0X16);
    // 0x80279994: nop

    // 0x80279998: andi        $t1, $t0, 0x40
    ctx->r9 = ctx->r8 & 0X40;
    // 0x8027999C: bne         $t1, $zero, L_80279A48
    if (ctx->r9 != 0) {
        // 0x802799A0: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_80279A48;
    }
    // 0x802799A0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802799A4: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x802799A8: lui         $at, 0x8028
    ctx->r1 = S32(0X8028 << 16);
    // 0x802799AC: c.le.s      $f4, $f12
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f4.fl <= ctx->f12.fl;
    // 0x802799B0: nop

    // 0x802799B4: bc1f        L_802799DC
    if (!c1cs) {
        // 0x802799B8: nop
    
            goto L_802799DC;
    }
    // 0x802799B8: nop

    // 0x802799BC: lui         $at, 0x8028
    ctx->r1 = S32(0X8028 << 16);
    // 0x802799C0: lwc1        $f6, 0x7C($a0)
    ctx->f6.u32l = MEM_W(ctx->r4, 0X7C);
    // 0x802799C4: lwc1        $f11, -0x1BA8($at)
    ctx->f_odd[(11 - 1) * 2] = MEM_W(ctx->r1, -0X1BA8);
    // 0x802799C8: lwc1        $f10, -0x1BA4($at)
    ctx->f10.u32l = MEM_W(ctx->r1, -0X1BA4);
    // 0x802799CC: cvt.d.s     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f8.d = CVT_D_S(ctx->f6.fl);
    // 0x802799D0: add.d       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f10.d); 
    ctx->f16.d = ctx->f8.d + ctx->f10.d;
    // 0x802799D4: b           L_802799F4
    // 0x802799D8: cvt.s.d     $f12, $f16
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.d); 
    ctx->f12.fl = CVT_S_D(ctx->f16.d);
        goto L_802799F4;
    // 0x802799D8: cvt.s.d     $f12, $f16
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.d); 
    ctx->f12.fl = CVT_S_D(ctx->f16.d);
L_802799DC:
    // 0x802799DC: lwc1        $f18, 0x7C($a0)
    ctx->f18.u32l = MEM_W(ctx->r4, 0X7C);
    // 0x802799E0: lwc1        $f7, -0x1BA0($at)
    ctx->f_odd[(7 - 1) * 2] = MEM_W(ctx->r1, -0X1BA0);
    // 0x802799E4: lwc1        $f6, -0x1B9C($at)
    ctx->f6.u32l = MEM_W(ctx->r1, -0X1B9C);
    // 0x802799E8: cvt.d.s     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.fl); 
    ctx->f4.d = CVT_D_S(ctx->f18.fl);
    // 0x802799EC: sub.d       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f6.d); 
    ctx->f8.d = ctx->f4.d - ctx->f6.d;
    // 0x802799F0: cvt.s.d     $f12, $f8
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.d); 
    ctx->f12.fl = CVT_S_D(ctx->f8.d);
L_802799F4:
    // 0x802799F4: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x802799F8: jal         0x80081040
    // 0x802799FC: swc1        $f12, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f12.u32l;
    func_80081040(rdram, ctx);
        goto after_0;
    // 0x802799FC: swc1        $f12, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f12.u32l;
    after_0:
    // 0x80279A00: lw          $a1, 0x24($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X24);
    // 0x80279A04: cvt.d.s     $f18, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f18.d = CVT_D_S(ctx->f0.fl);
    // 0x80279A08: lwc1        $f10, 0x4C($a1)
    ctx->f10.u32l = MEM_W(ctx->r5, 0X4C);
    // 0x80279A0C: lwc1        $f12, 0x1C($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x80279A10: cvt.d.s     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.fl); 
    ctx->f16.d = CVT_D_S(ctx->f10.fl);
    // 0x80279A14: add.d       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.d); NAN_CHECK(ctx->f18.d); 
    ctx->f4.d = ctx->f16.d + ctx->f18.d;
    // 0x80279A18: cvt.s.d     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.d); 
    ctx->f6.fl = CVT_S_D(ctx->f4.d);
    // 0x80279A1C: jal         0x80080E80
    // 0x80279A20: swc1        $f6, 0x4C($a1)
    MEM_W(0X4C, ctx->r5) = ctx->f6.u32l;
    func_80080E80(rdram, ctx);
        goto after_1;
    // 0x80279A20: swc1        $f6, 0x4C($a1)
    MEM_W(0X4C, ctx->r5) = ctx->f6.u32l;
    after_1:
    // 0x80279A24: lw          $a1, 0x24($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X24);
    // 0x80279A28: cvt.d.s     $f16, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f16.d = CVT_D_S(ctx->f0.fl);
    // 0x80279A2C: lwc1        $f8, 0x44($a1)
    ctx->f8.u32l = MEM_W(ctx->r5, 0X44);
    // 0x80279A30: nop

    // 0x80279A34: cvt.d.s     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f10.d = CVT_D_S(ctx->f8.fl);
    // 0x80279A38: add.d       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f16.d); 
    ctx->f18.d = ctx->f10.d + ctx->f16.d;
    // 0x80279A3C: cvt.s.d     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.d); 
    ctx->f4.fl = CVT_S_D(ctx->f18.d);
    // 0x80279A40: swc1        $f4, 0x44($a1)
    MEM_W(0X44, ctx->r5) = ctx->f4.u32l;
    // 0x80279A44: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80279A48:
    // 0x80279A48: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80279A4C: jr          $ra
    // 0x80279A50: nop

    return;
    // 0x80279A50: nop

;}
RECOMP_FUNC void ovl_8024B800_func_80279A54(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80279A54: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x80279A58: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x80279A5C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80279A60: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x80279A64: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x80279A68: swc1        $f0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f0.u32l;
    // 0x80279A6C: swc1        $f0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f0.u32l;
    // 0x80279A70: lhu         $t6, 0x12($a0)
    ctx->r14 = MEM_HU(ctx->r4, 0X12);
    // 0x80279A74: mtc1        $a2, $f14
    ctx->f14.u32l = ctx->r6;
    // 0x80279A78: ori         $t7, $t6, 0x10
    ctx->r15 = ctx->r14 | 0X10;
    // 0x80279A7C: sh          $t7, 0x12($a0)
    MEM_H(0X12, ctx->r4) = ctx->r15;
    // 0x80279A80: lhu         $t8, 0x12($a1)
    ctx->r24 = MEM_HU(ctx->r5, 0X12);
    // 0x80279A84: mtc1        $a3, $f12
    ctx->f12.u32l = ctx->r7;
    // 0x80279A88: ori         $t9, $t8, 0x10
    ctx->r25 = ctx->r24 | 0X10;
    // 0x80279A8C: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x80279A90: or          $s1, $a1, $zero
    ctx->r17 = ctx->r5 | 0;
    // 0x80279A94: jal         0x8001C5D0
    // 0x80279A98: sh          $t9, 0x12($a1)
    MEM_H(0X12, ctx->r5) = ctx->r25;
    func_8001C5D0(rdram, ctx);
        goto after_0;
    // 0x80279A98: sh          $t9, 0x12($a1)
    MEM_H(0X12, ctx->r5) = ctx->r25;
    after_0:
    // 0x80279A9C: swc1        $f0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f0.u32l;
    // 0x80279AA0: lwc1        $f6, 0x50($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X50);
    // 0x80279AA4: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x80279AA8: lwc1        $f14, 0x2C($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x80279AAC: c.eq.s      $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f4.fl == ctx->f6.fl;
    // 0x80279AB0: nop

    // 0x80279AB4: bc1t        L_80279AFC
    if (c1cs) {
        // 0x80279AB8: nop
    
            goto L_80279AFC;
    }
    // 0x80279AB8: nop

    // 0x80279ABC: lwc1        $f12, 0x7C($s0)
    ctx->f12.u32l = MEM_W(ctx->r16, 0X7C);
    // 0x80279AC0: jal         0x8027924C
    // 0x80279AC4: nop

    ovl_8024B800_func_8027924C(rdram, ctx);
        goto after_1;
    // 0x80279AC4: nop

    after_1:
    // 0x80279AC8: swc1        $f0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f0.u32l;
    // 0x80279ACC: jal         0x80272AEC
    // 0x80279AD0: mov.s       $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    ctx->f12.fl = ctx->f0.fl;
    ovl_8024B800_func_80272AEC(rdram, ctx);
        goto after_2;
    // 0x80279AD0: mov.s       $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    ctx->f12.fl = ctx->f0.fl;
    after_2:
    // 0x80279AD4: lui         $at, 0x8028
    ctx->r1 = S32(0X8028 << 16);
    // 0x80279AD8: lwc1        $f9, -0x1B98($at)
    ctx->f_odd[(9 - 1) * 2] = MEM_W(ctx->r1, -0X1B98);
    // 0x80279ADC: lwc1        $f8, -0x1B94($at)
    ctx->f8.u32l = MEM_W(ctx->r1, -0X1B94);
    // 0x80279AE0: cvt.d.s     $f10, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f10.d = CVT_D_S(ctx->f0.fl);
    // 0x80279AE4: c.lt.d      $f8, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f8.d < ctx->f10.d;
    // 0x80279AE8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80279AEC: bc1f        L_80279AFC
    if (!c1cs) {
        // 0x80279AF0: nop
    
            goto L_80279AFC;
    }
    // 0x80279AF0: nop

    // 0x80279AF4: jal         0x802797E8
    // 0x80279AF8: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    ovl_8024B800_func_802797E8(rdram, ctx);
        goto after_3;
    // 0x80279AF8: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    after_3:
L_80279AFC:
    // 0x80279AFC: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x80279B00: lwc1        $f18, 0x50($s1)
    ctx->f18.u32l = MEM_W(ctx->r17, 0X50);
    // 0x80279B04: lwc1        $f4, 0x2C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x80279B08: c.eq.s      $f16, $f18
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f16.fl == ctx->f18.fl;
    // 0x80279B0C: lui         $at, 0x8028
    ctx->r1 = S32(0X8028 << 16);
    // 0x80279B10: bc1t        L_80279B68
    if (c1cs) {
        // 0x80279B14: nop
    
            goto L_80279B68;
    }
    // 0x80279B14: nop

    // 0x80279B18: lwc1        $f9, -0x1B90($at)
    ctx->f_odd[(9 - 1) * 2] = MEM_W(ctx->r1, -0X1B90);
    // 0x80279B1C: lwc1        $f8, -0x1B8C($at)
    ctx->f8.u32l = MEM_W(ctx->r1, -0X1B8C);
    // 0x80279B20: cvt.d.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.d = CVT_D_S(ctx->f4.fl);
    // 0x80279B24: add.d       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f8.d); 
    ctx->f10.d = ctx->f6.d + ctx->f8.d;
    // 0x80279B28: lwc1        $f12, 0x7C($s1)
    ctx->f12.u32l = MEM_W(ctx->r17, 0X7C);
    // 0x80279B2C: jal         0x8027924C
    // 0x80279B30: cvt.s.d     $f14, $f10
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f14.fl = CVT_S_D(ctx->f10.d);
    ovl_8024B800_func_8027924C(rdram, ctx);
        goto after_4;
    // 0x80279B30: cvt.s.d     $f14, $f10
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f14.fl = CVT_S_D(ctx->f10.d);
    after_4:
    // 0x80279B34: swc1        $f0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f0.u32l;
    // 0x80279B38: jal         0x80272AEC
    // 0x80279B3C: mov.s       $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    ctx->f12.fl = ctx->f0.fl;
    ovl_8024B800_func_80272AEC(rdram, ctx);
        goto after_5;
    // 0x80279B3C: mov.s       $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    ctx->f12.fl = ctx->f0.fl;
    after_5:
    // 0x80279B40: lui         $at, 0x8028
    ctx->r1 = S32(0X8028 << 16);
    // 0x80279B44: lwc1        $f17, -0x1B88($at)
    ctx->f_odd[(17 - 1) * 2] = MEM_W(ctx->r1, -0X1B88);
    // 0x80279B48: lwc1        $f16, -0x1B84($at)
    ctx->f16.u32l = MEM_W(ctx->r1, -0X1B84);
    // 0x80279B4C: cvt.d.s     $f18, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f18.d = CVT_D_S(ctx->f0.fl);
    // 0x80279B50: c.lt.d      $f16, $f18
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f16.d < ctx->f18.d;
    // 0x80279B54: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x80279B58: bc1f        L_80279B68
    if (!c1cs) {
        // 0x80279B5C: nop
    
            goto L_80279B68;
    }
    // 0x80279B5C: nop

    // 0x80279B60: jal         0x802797E8
    // 0x80279B64: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    ovl_8024B800_func_802797E8(rdram, ctx);
        goto after_6;
    // 0x80279B64: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_6:
L_80279B68:
    // 0x80279B68: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x80279B6C: lwc1        $f6, 0x50($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X50);
    // 0x80279B70: lw          $a2, 0x28($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X28);
    // 0x80279B74: c.eq.s      $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f4.fl == ctx->f6.fl;
    // 0x80279B78: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80279B7C: bc1t        L_80279B8C
    if (c1cs) {
        // 0x80279B80: nop
    
            goto L_80279B8C;
    }
    // 0x80279B80: nop

    // 0x80279B84: jal         0x80279960
    // 0x80279B88: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    ovl_8024B800_func_80279960(rdram, ctx);
        goto after_7;
    // 0x80279B88: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    after_7:
L_80279B8C:
    // 0x80279B8C: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x80279B90: lwc1        $f10, 0x50($s1)
    ctx->f10.u32l = MEM_W(ctx->r17, 0X50);
    // 0x80279B94: lw          $a2, 0x24($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X24);
    // 0x80279B98: c.eq.s      $f8, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f8.fl == ctx->f10.fl;
    // 0x80279B9C: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x80279BA0: bc1t        L_80279BB4
    if (c1cs) {
        // 0x80279BA4: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_80279BB4;
    }
    // 0x80279BA4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80279BA8: jal         0x80279960
    // 0x80279BAC: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    ovl_8024B800_func_80279960(rdram, ctx);
        goto after_8;
    // 0x80279BAC: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_8:
    // 0x80279BB0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_80279BB4:
    // 0x80279BB4: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x80279BB8: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x80279BBC: jr          $ra
    // 0x80279BC0: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x80279BC0: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void ovl_8024B800_func_80279BC4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80279BC4: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x80279BC8: lui         $t6, 0x8012
    ctx->r14 = S32(0X8012 << 16);
    // 0x80279BCC: lhu         $t6, 0xB78($t6)
    ctx->r14 = MEM_HU(ctx->r14, 0XB78);
    // 0x80279BD0: sw          $s4, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r20;
    // 0x80279BD4: lui         $s4, 0x8012
    ctx->r20 = S32(0X8012 << 16);
    // 0x80279BD8: slti        $at, $t6, 0x9
    ctx->r1 = SIGNED(ctx->r14) < 0X9 ? 1 : 0;
    // 0x80279BDC: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x80279BE0: sw          $s6, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r22;
    // 0x80279BE4: sw          $s5, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r21;
    // 0x80279BE8: sw          $s3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r19;
    // 0x80279BEC: sw          $s2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r18;
    // 0x80279BF0: sw          $s1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r17;
    // 0x80279BF4: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x80279BF8: swc1        $f21, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x80279BFC: swc1        $f20, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f20.u32l;
    // 0x80279C00: beq         $at, $zero, L_80279DC8
    if (ctx->r1 == 0) {
        // 0x80279C04: addiu       $s4, $s4, 0x358
        ctx->r20 = ADD32(ctx->r20, 0X358);
            goto L_80279DC8;
    }
    // 0x80279C04: addiu       $s4, $s4, 0x358
    ctx->r20 = ADD32(ctx->r20, 0X358);
    // 0x80279C08: lui         $t7, 0x8012
    ctx->r15 = S32(0X8012 << 16);
    // 0x80279C0C: lhu         $t7, 0xB7E($t7)
    ctx->r15 = MEM_HU(ctx->r15, 0XB7E);
    // 0x80279C10: or          $s5, $zero, $zero
    ctx->r21 = 0 | 0;
    // 0x80279C14: andi        $t8, $t7, 0x8
    ctx->r24 = ctx->r15 & 0X8;
    // 0x80279C18: bne         $t8, $zero, L_80279DC8
    if (ctx->r24 != 0) {
        // 0x80279C1C: lui         $at, 0x4140
        ctx->r1 = S32(0X4140 << 16);
            goto L_80279DC8;
    }
    // 0x80279C1C: lui         $at, 0x4140
    ctx->r1 = S32(0X4140 << 16);
    // 0x80279C20: mtc1        $at, $f20
    ctx->f20.u32l = ctx->r1;
    // 0x80279C24: addiu       $s6, $zero, 0x5
    ctx->r22 = ADD32(0, 0X5);
    // 0x80279C28: addiu       $s3, $zero, 0xB
    ctx->r19 = ADD32(0, 0XB);
L_80279C2C:
    // 0x80279C2C: lhu         $t9, 0x0($s4)
    ctx->r25 = MEM_HU(ctx->r20, 0X0);
    // 0x80279C30: lw          $s1, 0x40($s4)
    ctx->r17 = MEM_W(ctx->r20, 0X40);
    // 0x80279C34: beq         $t9, $zero, L_80279DBC
    if (ctx->r25 == 0) {
        // 0x80279C38: nop
    
            goto L_80279DBC;
    }
    // 0x80279C38: nop

    // 0x80279C3C: beq         $s1, $zero, L_80279DBC
    if (ctx->r17 == 0) {
        // 0x80279C40: nop
    
            goto L_80279DBC;
    }
    // 0x80279C40: nop

    // 0x80279C44: lw          $t0, 0xC8($s1)
    ctx->r8 = MEM_W(ctx->r17, 0XC8);
    // 0x80279C48: lhu         $t1, 0x14($s1)
    ctx->r9 = MEM_HU(ctx->r17, 0X14);
    // 0x80279C4C: lw          $s0, 0x1C($t0)
    ctx->r16 = MEM_W(ctx->r8, 0X1C);
    // 0x80279C50: andi        $t2, $t1, 0xC00
    ctx->r10 = ctx->r9 & 0XC00;
    // 0x80279C54: bne         $t2, $zero, L_80279DBC
    if (ctx->r10 != 0) {
        // 0x80279C58: nop
    
            goto L_80279DBC;
    }
    // 0x80279C58: nop

    // 0x80279C5C: lhu         $t3, 0x16($s1)
    ctx->r11 = MEM_HU(ctx->r17, 0X16);
    // 0x80279C60: or          $s2, $zero, $zero
    ctx->r18 = 0 | 0;
    // 0x80279C64: andi        $t4, $t3, 0x1
    ctx->r12 = ctx->r11 & 0X1;
    // 0x80279C68: bne         $t4, $zero, L_80279DBC
    if (ctx->r12 != 0) {
        // 0x80279C6C: nop
    
            goto L_80279DBC;
    }
    // 0x80279C6C: nop

L_80279C70:
    // 0x80279C70: lhu         $t5, 0x14($s0)
    ctx->r13 = MEM_HU(ctx->r16, 0X14);
    // 0x80279C74: nop

    // 0x80279C78: andi        $t6, $t5, 0xC00
    ctx->r14 = ctx->r13 & 0XC00;
    // 0x80279C7C: bne         $t6, $zero, L_80279DB0
    if (ctx->r14 != 0) {
        // 0x80279C80: nop
    
            goto L_80279DB0;
    }
    // 0x80279C80: nop

    // 0x80279C84: lhu         $t7, 0xC($s0)
    ctx->r15 = MEM_HU(ctx->r16, 0XC);
    // 0x80279C88: nop

    // 0x80279C8C: beq         $t7, $zero, L_80279DB0
    if (ctx->r15 == 0) {
        // 0x80279C90: nop
    
            goto L_80279DB0;
    }
    // 0x80279C90: nop

    // 0x80279C94: lhu         $t8, 0x16($s0)
    ctx->r24 = MEM_HU(ctx->r16, 0X16);
    // 0x80279C98: nop

    // 0x80279C9C: andi        $t9, $t8, 0x1
    ctx->r25 = ctx->r24 & 0X1;
    // 0x80279CA0: bne         $t9, $zero, L_80279DB0
    if (ctx->r25 != 0) {
        // 0x80279CA4: nop
    
            goto L_80279DB0;
    }
    // 0x80279CA4: nop

    // 0x80279CA8: lwc1        $f4, 0x4C($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X4C);
    // 0x80279CAC: lwc1        $f6, 0x4C($s1)
    ctx->f6.u32l = MEM_W(ctx->r17, 0X4C);
    // 0x80279CB0: nop

    // 0x80279CB4: sub.s       $f0, $f4, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f0.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x80279CB8: c.lt.s      $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f20.fl < ctx->f0.fl;
    // 0x80279CBC: nop

    // 0x80279CC0: bc1t        L_80279DB0
    if (c1cs) {
        // 0x80279CC4: nop
    
            goto L_80279DB0;
    }
    // 0x80279CC4: nop

    // 0x80279CC8: lwc1        $f8, 0x44($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X44);
    // 0x80279CCC: lwc1        $f10, 0x44($s1)
    ctx->f10.u32l = MEM_W(ctx->r17, 0X44);
    // 0x80279CD0: nop

    // 0x80279CD4: sub.s       $f2, $f8, $f10
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f2.fl = ctx->f8.fl - ctx->f10.fl;
    // 0x80279CD8: c.lt.s      $f20, $f2
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f20.fl < ctx->f2.fl;
    // 0x80279CDC: nop

    // 0x80279CE0: bc1t        L_80279DB0
    if (c1cs) {
        // 0x80279CE4: nop
    
            goto L_80279DB0;
    }
    // 0x80279CE4: nop

    // 0x80279CE8: mul.s       $f16, $f0, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f16.fl = MUL_S(ctx->f0.fl, ctx->f0.fl);
    // 0x80279CEC: lhu         $t0, 0x18($s0)
    ctx->r8 = MEM_HU(ctx->r16, 0X18);
    // 0x80279CF0: lhu         $t1, 0x18($s1)
    ctx->r9 = MEM_HU(ctx->r17, 0X18);
    // 0x80279CF4: addiu       $v0, $zero, 0x19
    ctx->r2 = ADD32(0, 0X19);
    // 0x80279CF8: mul.s       $f18, $f2, $f2
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f18.fl = MUL_S(ctx->f2.fl, ctx->f2.fl);
    // 0x80279CFC: or          $t2, $t0, $t1
    ctx->r10 = ctx->r8 | ctx->r9;
    // 0x80279D00: andi        $t3, $t2, 0x80
    ctx->r11 = ctx->r10 & 0X80;
    // 0x80279D04: beq         $t3, $zero, L_80279D14
    if (ctx->r11 == 0) {
        // 0x80279D08: add.s       $f4, $f16, $f18
        CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f16.fl + ctx->f18.fl;
            goto L_80279D14;
    }
    // 0x80279D08: add.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f16.fl + ctx->f18.fl;
    // 0x80279D0C: b           L_80279D14
    // 0x80279D10: addiu       $v0, $zero, 0xC4
    ctx->r2 = ADD32(0, 0XC4);
        goto L_80279D14;
    // 0x80279D10: addiu       $v0, $zero, 0xC4
    ctx->r2 = ADD32(0, 0XC4);
L_80279D14:
    // 0x80279D14: mtc1        $v0, $f6
    ctx->f6.u32l = ctx->r2;
    // 0x80279D18: bgez        $v0, L_80279D30
    if (SIGNED(ctx->r2) >= 0) {
        // 0x80279D1C: cvt.s.w     $f8, $f6
        CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.fl = CVT_S_W(ctx->f6.u32l);
            goto L_80279D30;
    }
    // 0x80279D1C: cvt.s.w     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.fl = CVT_S_W(ctx->f6.u32l);
    // 0x80279D20: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x80279D24: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x80279D28: nop

    // 0x80279D2C: add.s       $f8, $f8, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f8.fl = ctx->f8.fl + ctx->f10.fl;
L_80279D30:
    // 0x80279D30: c.lt.s      $f4, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f4.fl < ctx->f8.fl;
    // 0x80279D34: nop

    // 0x80279D38: bc1f        L_80279DB0
    if (!c1cs) {
        // 0x80279D3C: nop
    
            goto L_80279DB0;
    }
    // 0x80279D3C: nop

    // 0x80279D40: sw          $s1, 0xDC($s0)
    MEM_W(0XDC, ctx->r16) = ctx->r17;
    // 0x80279D44: sw          $s0, 0xDC($s1)
    MEM_W(0XDC, ctx->r17) = ctx->r16;
    // 0x80279D48: lhu         $t4, 0x14($s0)
    ctx->r12 = MEM_HU(ctx->r16, 0X14);
    // 0x80279D4C: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x80279D50: ori         $t5, $t4, 0x2000
    ctx->r13 = ctx->r12 | 0X2000;
    // 0x80279D54: sh          $t5, 0x14($s0)
    MEM_H(0X14, ctx->r16) = ctx->r13;
    // 0x80279D58: lhu         $t6, 0x14($s1)
    ctx->r14 = MEM_HU(ctx->r17, 0X14);
    // 0x80279D5C: lhu         $t8, 0x12($s1)
    ctx->r24 = MEM_HU(ctx->r17, 0X12);
    // 0x80279D60: ori         $t7, $t6, 0x2000
    ctx->r15 = ctx->r14 | 0X2000;
    // 0x80279D64: andi        $t9, $t8, 0x10
    ctx->r25 = ctx->r24 & 0X10;
    // 0x80279D68: bne         $t9, $zero, L_80279D80
    if (ctx->r25 != 0) {
        // 0x80279D6C: sh          $t7, 0x14($s1)
        MEM_H(0X14, ctx->r17) = ctx->r15;
            goto L_80279D80;
    }
    // 0x80279D6C: sh          $t7, 0x14($s1)
    MEM_H(0X14, ctx->r17) = ctx->r15;
    // 0x80279D70: mfc1        $a2, $f0
    ctx->r6 = (int32_t)ctx->f0.u32l;
    // 0x80279D74: mfc1        $a3, $f2
    ctx->r7 = (int32_t)ctx->f2.u32l;
    // 0x80279D78: jal         0x80279A54
    // 0x80279D7C: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    ovl_8024B800_func_80279A54(rdram, ctx);
        goto after_0;
    // 0x80279D7C: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_0:
L_80279D80:
    // 0x80279D80: lhu         $v0, 0x14($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X14);
    // 0x80279D84: nop

    // 0x80279D88: andi        $t0, $v0, 0x400
    ctx->r8 = ctx->r2 & 0X400;
    // 0x80279D8C: beq         $t0, $zero, L_80279D98
    if (ctx->r8 == 0) {
        // 0x80279D90: andi        $t1, $v0, 0xDFFF
        ctx->r9 = ctx->r2 & 0XDFFF;
            goto L_80279D98;
    }
    // 0x80279D90: andi        $t1, $v0, 0xDFFF
    ctx->r9 = ctx->r2 & 0XDFFF;
    // 0x80279D94: sh          $t1, 0x14($s1)
    MEM_H(0X14, ctx->r17) = ctx->r9;
L_80279D98:
    // 0x80279D98: lhu         $v0, 0x14($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X14);
    // 0x80279D9C: nop

    // 0x80279DA0: andi        $t2, $v0, 0x400
    ctx->r10 = ctx->r2 & 0X400;
    // 0x80279DA4: beq         $t2, $zero, L_80279DB0
    if (ctx->r10 == 0) {
        // 0x80279DA8: andi        $t3, $v0, 0xDFFF
        ctx->r11 = ctx->r2 & 0XDFFF;
            goto L_80279DB0;
    }
    // 0x80279DA8: andi        $t3, $v0, 0xDFFF
    ctx->r11 = ctx->r2 & 0XDFFF;
    // 0x80279DAC: sh          $t3, 0x14($s0)
    MEM_H(0X14, ctx->r16) = ctx->r11;
L_80279DB0:
    // 0x80279DB0: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
    // 0x80279DB4: bne         $s2, $s3, L_80279C70
    if (ctx->r18 != ctx->r19) {
        // 0x80279DB8: addiu       $s0, $s0, 0xF8
        ctx->r16 = ADD32(ctx->r16, 0XF8);
            goto L_80279C70;
    }
    // 0x80279DB8: addiu       $s0, $s0, 0xF8
    ctx->r16 = ADD32(ctx->r16, 0XF8);
L_80279DBC:
    // 0x80279DBC: addiu       $s5, $s5, 0x1
    ctx->r21 = ADD32(ctx->r21, 0X1);
    // 0x80279DC0: bne         $s5, $s6, L_80279C2C
    if (ctx->r21 != ctx->r22) {
        // 0x80279DC4: addiu       $s4, $s4, 0x58
        ctx->r20 = ADD32(ctx->r20, 0X58);
            goto L_80279C2C;
    }
    // 0x80279DC4: addiu       $s4, $s4, 0x58
    ctx->r20 = ADD32(ctx->r20, 0X58);
L_80279DC8:
    // 0x80279DC8: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    // 0x80279DCC: lwc1        $f21, 0x18($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X18);
    // 0x80279DD0: lwc1        $f20, 0x1C($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x80279DD4: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x80279DD8: lw          $s1, 0x24($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X24);
    // 0x80279DDC: lw          $s2, 0x28($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X28);
    // 0x80279DE0: lw          $s3, 0x2C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X2C);
    // 0x80279DE4: lw          $s4, 0x30($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X30);
    // 0x80279DE8: lw          $s5, 0x34($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X34);
    // 0x80279DEC: lw          $s6, 0x38($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X38);
    // 0x80279DF0: jr          $ra
    // 0x80279DF4: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    return;
    // 0x80279DF4: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
RECOMP_FUNC void ovl_8024B800_func_80279C14(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80279C14: andi        $t8, $t7, 0x8
    ctx->r24 = ctx->r15 & 0X8;
    // 0x80279C18: bne         $t8, $zero, L_80279DC8
    if (ctx->r24 != 0) {
        // 0x80279C1C: lui         $at, 0x4140
        ctx->r1 = S32(0X4140 << 16);
            goto L_80279DC8;
    }
    // 0x80279C1C: lui         $at, 0x4140
    ctx->r1 = S32(0X4140 << 16);
    // 0x80279C20: mtc1        $at, $f20
    ctx->f20.u32l = ctx->r1;
    // 0x80279C24: addiu       $s6, $zero, 0x5
    ctx->r22 = ADD32(0, 0X5);
    // 0x80279C28: addiu       $s3, $zero, 0xB
    ctx->r19 = ADD32(0, 0XB);
L_80279C2C:
    // 0x80279C2C: lhu         $t9, 0x0($s4)
    ctx->r25 = MEM_HU(ctx->r20, 0X0);
    // 0x80279C30: lw          $s1, 0x40($s4)
    ctx->r17 = MEM_W(ctx->r20, 0X40);
    // 0x80279C34: beq         $t9, $zero, L_80279DBC
    if (ctx->r25 == 0) {
        // 0x80279C38: nop
    
            goto L_80279DBC;
    }
    // 0x80279C38: nop

    // 0x80279C3C: beq         $s1, $zero, L_80279DBC
    if (ctx->r17 == 0) {
        // 0x80279C40: nop
    
            goto L_80279DBC;
    }
    // 0x80279C40: nop

    // 0x80279C44: lw          $t0, 0xC8($s1)
    ctx->r8 = MEM_W(ctx->r17, 0XC8);
    // 0x80279C48: lhu         $t1, 0x14($s1)
    ctx->r9 = MEM_HU(ctx->r17, 0X14);
    // 0x80279C4C: lw          $s0, 0x1C($t0)
    ctx->r16 = MEM_W(ctx->r8, 0X1C);
    // 0x80279C50: andi        $t2, $t1, 0xC00
    ctx->r10 = ctx->r9 & 0XC00;
    // 0x80279C54: bne         $t2, $zero, L_80279DBC
    if (ctx->r10 != 0) {
        // 0x80279C58: nop
    
            goto L_80279DBC;
    }
    // 0x80279C58: nop

    // 0x80279C5C: lhu         $t3, 0x16($s1)
    ctx->r11 = MEM_HU(ctx->r17, 0X16);
    // 0x80279C60: or          $s2, $zero, $zero
    ctx->r18 = 0 | 0;
    // 0x80279C64: andi        $t4, $t3, 0x1
    ctx->r12 = ctx->r11 & 0X1;
    // 0x80279C68: bne         $t4, $zero, L_80279DBC
    if (ctx->r12 != 0) {
        // 0x80279C6C: nop
    
            goto L_80279DBC;
    }
    // 0x80279C6C: nop

L_80279C70:
    // 0x80279C70: lhu         $t5, 0x14($s0)
    ctx->r13 = MEM_HU(ctx->r16, 0X14);
    // 0x80279C74: nop

    // 0x80279C78: andi        $t6, $t5, 0xC00
    ctx->r14 = ctx->r13 & 0XC00;
    // 0x80279C7C: bne         $t6, $zero, L_80279DB0
    if (ctx->r14 != 0) {
        // 0x80279C80: nop
    
            goto L_80279DB0;
    }
    // 0x80279C80: nop

    // 0x80279C84: lhu         $t7, 0xC($s0)
    ctx->r15 = MEM_HU(ctx->r16, 0XC);
    // 0x80279C88: nop

    // 0x80279C8C: beq         $t7, $zero, L_80279DB0
    if (ctx->r15 == 0) {
        // 0x80279C90: nop
    
            goto L_80279DB0;
    }
    // 0x80279C90: nop

    // 0x80279C94: lhu         $t8, 0x16($s0)
    ctx->r24 = MEM_HU(ctx->r16, 0X16);
    // 0x80279C98: nop

    // 0x80279C9C: andi        $t9, $t8, 0x1
    ctx->r25 = ctx->r24 & 0X1;
    // 0x80279CA0: bne         $t9, $zero, L_80279DB0
    if (ctx->r25 != 0) {
        // 0x80279CA4: nop
    
            goto L_80279DB0;
    }
    // 0x80279CA4: nop

    // 0x80279CA8: lwc1        $f4, 0x4C($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X4C);
    // 0x80279CAC: lwc1        $f6, 0x4C($s1)
    ctx->f6.u32l = MEM_W(ctx->r17, 0X4C);
    // 0x80279CB0: nop

    // 0x80279CB4: sub.s       $f0, $f4, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f0.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x80279CB8: c.lt.s      $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f20.fl < ctx->f0.fl;
    // 0x80279CBC: nop

    // 0x80279CC0: bc1t        L_80279DB0
    if (c1cs) {
        // 0x80279CC4: nop
    
            goto L_80279DB0;
    }
    // 0x80279CC4: nop

    // 0x80279CC8: lwc1        $f8, 0x44($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X44);
    // 0x80279CCC: lwc1        $f10, 0x44($s1)
    ctx->f10.u32l = MEM_W(ctx->r17, 0X44);
    // 0x80279CD0: nop

    // 0x80279CD4: sub.s       $f2, $f8, $f10
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f2.fl = ctx->f8.fl - ctx->f10.fl;
    // 0x80279CD8: c.lt.s      $f20, $f2
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f20.fl < ctx->f2.fl;
    // 0x80279CDC: nop

    // 0x80279CE0: bc1t        L_80279DB0
    if (c1cs) {
        // 0x80279CE4: nop
    
            goto L_80279DB0;
    }
    // 0x80279CE4: nop

    // 0x80279CE8: mul.s       $f16, $f0, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f16.fl = MUL_S(ctx->f0.fl, ctx->f0.fl);
    // 0x80279CEC: lhu         $t0, 0x18($s0)
    ctx->r8 = MEM_HU(ctx->r16, 0X18);
    // 0x80279CF0: lhu         $t1, 0x18($s1)
    ctx->r9 = MEM_HU(ctx->r17, 0X18);
    // 0x80279CF4: addiu       $v0, $zero, 0x19
    ctx->r2 = ADD32(0, 0X19);
    // 0x80279CF8: mul.s       $f18, $f2, $f2
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f18.fl = MUL_S(ctx->f2.fl, ctx->f2.fl);
    // 0x80279CFC: or          $t2, $t0, $t1
    ctx->r10 = ctx->r8 | ctx->r9;
    // 0x80279D00: andi        $t3, $t2, 0x80
    ctx->r11 = ctx->r10 & 0X80;
    // 0x80279D04: beq         $t3, $zero, L_80279D14
    if (ctx->r11 == 0) {
        // 0x80279D08: add.s       $f4, $f16, $f18
        CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f16.fl + ctx->f18.fl;
            goto L_80279D14;
    }
    // 0x80279D08: add.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f16.fl + ctx->f18.fl;
    // 0x80279D0C: b           L_80279D14
    // 0x80279D10: addiu       $v0, $zero, 0xC4
    ctx->r2 = ADD32(0, 0XC4);
        goto L_80279D14;
    // 0x80279D10: addiu       $v0, $zero, 0xC4
    ctx->r2 = ADD32(0, 0XC4);
L_80279D14:
    // 0x80279D14: mtc1        $v0, $f6
    ctx->f6.u32l = ctx->r2;
    // 0x80279D18: bgez        $v0, L_80279D30
    if (SIGNED(ctx->r2) >= 0) {
        // 0x80279D1C: cvt.s.w     $f8, $f6
        CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.fl = CVT_S_W(ctx->f6.u32l);
            goto L_80279D30;
    }
    // 0x80279D1C: cvt.s.w     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.fl = CVT_S_W(ctx->f6.u32l);
    // 0x80279D20: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x80279D24: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x80279D28: nop

    // 0x80279D2C: add.s       $f8, $f8, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f8.fl = ctx->f8.fl + ctx->f10.fl;
L_80279D30:
    // 0x80279D30: c.lt.s      $f4, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f4.fl < ctx->f8.fl;
    // 0x80279D34: nop

    // 0x80279D38: bc1f        L_80279DB0
    if (!c1cs) {
        // 0x80279D3C: nop
    
            goto L_80279DB0;
    }
    // 0x80279D3C: nop

    // 0x80279D40: sw          $s1, 0xDC($s0)
    MEM_W(0XDC, ctx->r16) = ctx->r17;
    // 0x80279D44: sw          $s0, 0xDC($s1)
    MEM_W(0XDC, ctx->r17) = ctx->r16;
    // 0x80279D48: lhu         $t4, 0x14($s0)
    ctx->r12 = MEM_HU(ctx->r16, 0X14);
    // 0x80279D4C: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x80279D50: ori         $t5, $t4, 0x2000
    ctx->r13 = ctx->r12 | 0X2000;
    // 0x80279D54: sh          $t5, 0x14($s0)
    MEM_H(0X14, ctx->r16) = ctx->r13;
    // 0x80279D58: lhu         $t6, 0x14($s1)
    ctx->r14 = MEM_HU(ctx->r17, 0X14);
    // 0x80279D5C: lhu         $t8, 0x12($s1)
    ctx->r24 = MEM_HU(ctx->r17, 0X12);
    // 0x80279D60: ori         $t7, $t6, 0x2000
    ctx->r15 = ctx->r14 | 0X2000;
    // 0x80279D64: andi        $t9, $t8, 0x10
    ctx->r25 = ctx->r24 & 0X10;
    // 0x80279D68: bne         $t9, $zero, L_80279D80
    if (ctx->r25 != 0) {
        // 0x80279D6C: sh          $t7, 0x14($s1)
        MEM_H(0X14, ctx->r17) = ctx->r15;
            goto L_80279D80;
    }
    // 0x80279D6C: sh          $t7, 0x14($s1)
    MEM_H(0X14, ctx->r17) = ctx->r15;
    // 0x80279D70: mfc1        $a2, $f0
    ctx->r6 = (int32_t)ctx->f0.u32l;
    // 0x80279D74: mfc1        $a3, $f2
    ctx->r7 = (int32_t)ctx->f2.u32l;
    // 0x80279D78: jal         0x80279A54
    // 0x80279D7C: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    ovl_8024B800_func_80279A54(rdram, ctx);
        goto after_0;
    // 0x80279D7C: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_0:
L_80279D80:
    // 0x80279D80: lhu         $v0, 0x14($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X14);
    // 0x80279D84: nop

    // 0x80279D88: andi        $t0, $v0, 0x400
    ctx->r8 = ctx->r2 & 0X400;
    // 0x80279D8C: beq         $t0, $zero, L_80279D98
    if (ctx->r8 == 0) {
        // 0x80279D90: andi        $t1, $v0, 0xDFFF
        ctx->r9 = ctx->r2 & 0XDFFF;
            goto L_80279D98;
    }
    // 0x80279D90: andi        $t1, $v0, 0xDFFF
    ctx->r9 = ctx->r2 & 0XDFFF;
    // 0x80279D94: sh          $t1, 0x14($s1)
    MEM_H(0X14, ctx->r17) = ctx->r9;
L_80279D98:
    // 0x80279D98: lhu         $v0, 0x14($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X14);
    // 0x80279D9C: nop

    // 0x80279DA0: andi        $t2, $v0, 0x400
    ctx->r10 = ctx->r2 & 0X400;
    // 0x80279DA4: beq         $t2, $zero, L_80279DB0
    if (ctx->r10 == 0) {
        // 0x80279DA8: andi        $t3, $v0, 0xDFFF
        ctx->r11 = ctx->r2 & 0XDFFF;
            goto L_80279DB0;
    }
    // 0x80279DA8: andi        $t3, $v0, 0xDFFF
    ctx->r11 = ctx->r2 & 0XDFFF;
    // 0x80279DAC: sh          $t3, 0x14($s0)
    MEM_H(0X14, ctx->r16) = ctx->r11;
L_80279DB0:
    // 0x80279DB0: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
    // 0x80279DB4: bne         $s2, $s3, L_80279C70
    if (ctx->r18 != ctx->r19) {
        // 0x80279DB8: addiu       $s0, $s0, 0xF8
        ctx->r16 = ADD32(ctx->r16, 0XF8);
            goto L_80279C70;
    }
    // 0x80279DB8: addiu       $s0, $s0, 0xF8
    ctx->r16 = ADD32(ctx->r16, 0XF8);
L_80279DBC:
    // 0x80279DBC: addiu       $s5, $s5, 0x1
    ctx->r21 = ADD32(ctx->r21, 0X1);
    // 0x80279DC0: bne         $s5, $s6, L_80279C2C
    if (ctx->r21 != ctx->r22) {
        // 0x80279DC4: addiu       $s4, $s4, 0x58
        ctx->r20 = ADD32(ctx->r20, 0X58);
            goto L_80279C2C;
    }
    // 0x80279DC4: addiu       $s4, $s4, 0x58
    ctx->r20 = ADD32(ctx->r20, 0X58);
L_80279DC8:
    // 0x80279DC8: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    // 0x80279DCC: lwc1        $f21, 0x18($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X18);
    // 0x80279DD0: lwc1        $f20, 0x1C($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x80279DD4: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x80279DD8: lw          $s1, 0x24($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X24);
    // 0x80279DDC: lw          $s2, 0x28($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X28);
    // 0x80279DE0: lw          $s3, 0x2C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X2C);
    // 0x80279DE4: lw          $s4, 0x30($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X30);
    // 0x80279DE8: lw          $s5, 0x34($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X34);
    // 0x80279DEC: lw          $s6, 0x38($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X38);
    // 0x80279DF0: jr          $ra
    // 0x80279DF4: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    return;
    // 0x80279DF4: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
RECOMP_FUNC void ovl_8024B800_func_80279DF8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80279DF8: lui         $at, 0x8028
    ctx->r1 = S32(0X8028 << 16);
    // 0x80279DFC: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x80279E00: mtc1        $a2, $f14
    ctx->f14.u32l = ctx->r6;
    // 0x80279E04: lw          $v0, 0x18($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X18);
    // 0x80279E08: lwc1        $f16, -0x1B80($at)
    ctx->f16.u32l = MEM_W(ctx->r1, -0X1B80);
    // 0x80279E0C: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
L_80279E10:
    // 0x80279E10: lwc1        $f4, 0x4C($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X4C);
    // 0x80279E14: lwc1        $f6, 0x44($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0X44);
    // 0x80279E18: sh          $v1, 0x0($a3)
    MEM_H(0X0, ctx->r7) = ctx->r3;
    // 0x80279E1C: lhu         $t6, 0xC($v0)
    ctx->r14 = MEM_HU(ctx->r2, 0XC);
    // 0x80279E20: sub.s       $f0, $f4, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f0.fl = ctx->f4.fl - ctx->f12.fl;
    // 0x80279E24: beq         $t6, $zero, L_80279E44
    if (ctx->r14 == 0) {
        // 0x80279E28: sub.s       $f2, $f6, $f14
        CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f2.fl = ctx->f6.fl - ctx->f14.fl;
            goto L_80279E44;
    }
    // 0x80279E28: sub.s       $f2, $f6, $f14
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f2.fl = ctx->f6.fl - ctx->f14.fl;
    // 0x80279E2C: mul.s       $f8, $f0, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = MUL_S(ctx->f0.fl, ctx->f0.fl);
    // 0x80279E30: nop

    // 0x80279E34: mul.s       $f10, $f2, $f2
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f10.fl = MUL_S(ctx->f2.fl, ctx->f2.fl);
    // 0x80279E38: add.s       $f18, $f8, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f18.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x80279E3C: b           L_80279E48
    // 0x80279E40: swc1        $f18, 0x4($a3)
    MEM_W(0X4, ctx->r7) = ctx->f18.u32l;
        goto L_80279E48;
    // 0x80279E40: swc1        $f18, 0x4($a3)
    MEM_W(0X4, ctx->r7) = ctx->f18.u32l;
L_80279E44:
    // 0x80279E44: swc1        $f16, 0x4($a3)
    MEM_W(0X4, ctx->r7) = ctx->f16.u32l;
L_80279E48:
    // 0x80279E48: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x80279E4C: andi        $t7, $v1, 0xFFFF
    ctx->r15 = ctx->r3 & 0XFFFF;
    // 0x80279E50: slti        $at, $t7, 0xB
    ctx->r1 = SIGNED(ctx->r15) < 0XB ? 1 : 0;
    // 0x80279E54: or          $v1, $t7, $zero
    ctx->r3 = ctx->r15 | 0;
    // 0x80279E58: addiu       $v0, $v0, 0xF8
    ctx->r2 = ADD32(ctx->r2, 0XF8);
    // 0x80279E5C: bne         $at, $zero, L_80279E10
    if (ctx->r1 != 0) {
        // 0x80279E60: addiu       $a3, $a3, 0x8
        ctx->r7 = ADD32(ctx->r7, 0X8);
            goto L_80279E10;
    }
    // 0x80279E60: addiu       $a3, $a3, 0x8
    ctx->r7 = ADD32(ctx->r7, 0X8);
    // 0x80279E64: jr          $ra
    // 0x80279E68: nop

    return;
    // 0x80279E68: nop

;}
RECOMP_FUNC void ovl_8024B800_func_80279E10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
L_80279E10:
    // 0x80279E10: lwc1        $f4, 0x4C($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X4C);
    // 0x80279E14: lwc1        $f6, 0x44($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0X44);
    // 0x80279E18: sh          $v1, 0x0($a3)
    MEM_H(0X0, ctx->r7) = ctx->r3;
    // 0x80279E1C: lhu         $t6, 0xC($v0)
    ctx->r14 = MEM_HU(ctx->r2, 0XC);
    // 0x80279E20: sub.s       $f0, $f4, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f0.fl = ctx->f4.fl - ctx->f12.fl;
    // 0x80279E24: beq         $t6, $zero, L_80279E44
    if (ctx->r14 == 0) {
        // 0x80279E28: sub.s       $f2, $f6, $f14
        CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f2.fl = ctx->f6.fl - ctx->f14.fl;
            goto L_80279E44;
    }
    // 0x80279E28: sub.s       $f2, $f6, $f14
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f2.fl = ctx->f6.fl - ctx->f14.fl;
    // 0x80279E2C: mul.s       $f8, $f0, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = MUL_S(ctx->f0.fl, ctx->f0.fl);
    // 0x80279E30: nop

    // 0x80279E34: mul.s       $f10, $f2, $f2
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f10.fl = MUL_S(ctx->f2.fl, ctx->f2.fl);
    // 0x80279E38: add.s       $f18, $f8, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f18.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x80279E3C: b           L_80279E48
    // 0x80279E40: swc1        $f18, 0x4($a3)
    MEM_W(0X4, ctx->r7) = ctx->f18.u32l;
        goto L_80279E48;
    // 0x80279E40: swc1        $f18, 0x4($a3)
    MEM_W(0X4, ctx->r7) = ctx->f18.u32l;
L_80279E44:
    // 0x80279E44: swc1        $f16, 0x4($a3)
    MEM_W(0X4, ctx->r7) = ctx->f16.u32l;
L_80279E48:
    // 0x80279E48: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x80279E4C: andi        $t7, $v1, 0xFFFF
    ctx->r15 = ctx->r3 & 0XFFFF;
    // 0x80279E50: slti        $at, $t7, 0xB
    ctx->r1 = SIGNED(ctx->r15) < 0XB ? 1 : 0;
    // 0x80279E54: or          $v1, $t7, $zero
    ctx->r3 = ctx->r15 | 0;
    // 0x80279E58: addiu       $v0, $v0, 0xF8
    ctx->r2 = ADD32(ctx->r2, 0XF8);
    // 0x80279E5C: bne         $at, $zero, L_80279E10
    if (ctx->r1 != 0) {
        // 0x80279E60: addiu       $a3, $a3, 0x8
        ctx->r7 = ADD32(ctx->r7, 0X8);
            goto L_80279E10;
    }
    // 0x80279E60: addiu       $a3, $a3, 0x8
    ctx->r7 = ADD32(ctx->r7, 0X8);
    // 0x80279E64: jr          $ra
    // 0x80279E68: nop

    return;
    // 0x80279E68: nop

;}
RECOMP_FUNC void ovl_8024B800_func_80279E2C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
L_80279E10:
    // 0x80279E2C: mul.s       $f8, $f0, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = MUL_S(ctx->f0.fl, ctx->f0.fl);
    // 0x80279E30: nop

    // 0x80279E34: mul.s       $f10, $f2, $f2
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f10.fl = MUL_S(ctx->f2.fl, ctx->f2.fl);
    // 0x80279E38: add.s       $f18, $f8, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f18.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x80279E3C: b           L_80279E48
    // 0x80279E40: swc1        $f18, 0x4($a3)
    MEM_W(0X4, ctx->r7) = ctx->f18.u32l;
        goto L_80279E48;
    // 0x80279E40: swc1        $f18, 0x4($a3)
    MEM_W(0X4, ctx->r7) = ctx->f18.u32l;
    // 0x80279E44: swc1        $f16, 0x4($a3)
    MEM_W(0X4, ctx->r7) = ctx->f16.u32l;
L_80279E48:
    // 0x80279E48: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x80279E4C: andi        $t7, $v1, 0xFFFF
    ctx->r15 = ctx->r3 & 0XFFFF;
    // 0x80279E50: slti        $at, $t7, 0xB
    ctx->r1 = SIGNED(ctx->r15) < 0XB ? 1 : 0;
    // 0x80279E54: or          $v1, $t7, $zero
    ctx->r3 = ctx->r15 | 0;
    // 0x80279E58: addiu       $v0, $v0, 0xF8
    ctx->r2 = ADD32(ctx->r2, 0XF8);
    // 0x80279E5C: bne         $at, $zero, L_80279E10
    if (ctx->r1 != 0) {
            // 0x80279E60: addiu       $a3, $a3, 0x8
    ctx->r7 = ADD32(ctx->r7, 0X8);
    ovl_8024B800_func_80279E10(rdram, ctx);
    return;
    }
    // 0x80279E60: addiu       $a3, $a3, 0x8
    ctx->r7 = ADD32(ctx->r7, 0X8);
    // 0x80279E64: jr          $ra
    // 0x80279E68: nop

    return;
    // 0x80279E68: nop

;}
RECOMP_FUNC void ovl_8024B800_func_80279E6C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80279E6C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80279E70: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80279E74: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x80279E78: sw          $a2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r6;
    // 0x80279E7C: lw          $t6, 0xD8($a0)
    ctx->r14 = MEM_W(ctx->r4, 0XD8);
    // 0x80279E80: nop

    // 0x80279E84: lbu         $a1, 0x7($t6)
    ctx->r5 = MEM_BU(ctx->r14, 0X7);
    // 0x80279E88: jal         0x802752E8
    // 0x80279E8C: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    ovl_8024B800_func_802752E8(rdram, ctx);
        goto after_0;
    // 0x80279E8C: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    after_0:
    // 0x80279E90: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    // 0x80279E94: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    // 0x80279E98: lw          $t7, 0xD8($a0)
    ctx->r15 = MEM_W(ctx->r4, 0XD8);
    // 0x80279E9C: nop

    // 0x80279EA0: lbu         $a1, 0x8($t7)
    ctx->r5 = MEM_BU(ctx->r15, 0X8);
    // 0x80279EA4: jal         0x802752E8
    // 0x80279EA8: nop

    ovl_8024B800_func_802752E8(rdram, ctx);
        goto after_1;
    // 0x80279EA8: nop

    after_1:
    // 0x80279EAC: lui         $a1, 0x801B
    ctx->r5 = S32(0X801B << 16);
    // 0x80279EB0: addiu       $a1, $a1, 0x366C
    ctx->r5 = ADD32(ctx->r5, 0X366C);
    // 0x80279EB4: lhu         $t8, 0x0($a1)
    ctx->r24 = MEM_HU(ctx->r5, 0X0);
    // 0x80279EB8: lw          $t9, 0x18($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X18);
    // 0x80279EBC: slti        $at, $t8, 0x2
    ctx->r1 = SIGNED(ctx->r24) < 0X2 ? 1 : 0;
    // 0x80279EC0: bne         $at, $zero, L_80279ED0
    if (ctx->r1 != 0) {
        // 0x80279EC4: subu        $t0, $t9, $v0
        ctx->r8 = SUB32(ctx->r25, ctx->r2);
            goto L_80279ED0;
    }
    // 0x80279EC4: subu        $t0, $t9, $v0
    ctx->r8 = SUB32(ctx->r25, ctx->r2);
    // 0x80279EC8: b           L_80279F2C
    // 0x80279ECC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_80279F2C;
    // 0x80279ECC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_80279ED0:
    // 0x80279ED0: lw          $t2, 0x20($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X20);
    // 0x80279ED4: lhu         $t1, 0x2A($sp)
    ctx->r9 = MEM_HU(ctx->r29, 0X2A);
    // 0x80279ED8: lhu         $t3, 0xE($t2)
    ctx->r11 = MEM_HU(ctx->r10, 0XE);
    // 0x80279EDC: addiu       $at, $zero, 0x17
    ctx->r1 = ADD32(0, 0X17);
    // 0x80279EE0: bne         $t3, $at, L_80279EEC
    if (ctx->r11 != ctx->r1) {
        // 0x80279EE4: addu        $v1, $t0, $t1
        ctx->r3 = ADD32(ctx->r8, ctx->r9);
            goto L_80279EEC;
    }
    // 0x80279EE4: addu        $v1, $t0, $t1
    ctx->r3 = ADD32(ctx->r8, ctx->r9);
    // 0x80279EE8: addiu       $v1, $v1, 0xA
    ctx->r3 = ADD32(ctx->r3, 0XA);
L_80279EEC:
    // 0x80279EEC: bgez        $v1, L_80279EFC
    if (SIGNED(ctx->r3) >= 0) {
        // 0x80279EF0: nop
    
            goto L_80279EFC;
    }
    // 0x80279EF0: nop

    // 0x80279EF4: b           L_80279F2C
    // 0x80279EF8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_80279F2C;
    // 0x80279EF8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_80279EFC:
    // 0x80279EFC: jal         0x80059898
    // 0x80279F00: addiu       $a0, $v1, 0xF
    ctx->r4 = ADD32(ctx->r3, 0XF);
    func_80059898(rdram, ctx);
        goto after_2;
    // 0x80279F00: addiu       $a0, $v1, 0xF
    ctx->r4 = ADD32(ctx->r3, 0XF);
    after_2:
    // 0x80279F04: lui         $a1, 0x801B
    ctx->r5 = S32(0X801B << 16);
    // 0x80279F08: sltiu       $at, $v0, 0xE
    ctx->r1 = ctx->r2 < 0XE ? 1 : 0;
    // 0x80279F0C: beq         $at, $zero, L_80279F1C
    if (ctx->r1 == 0) {
        // 0x80279F10: addiu       $a1, $a1, 0x366C
        ctx->r5 = ADD32(ctx->r5, 0X366C);
            goto L_80279F1C;
    }
    // 0x80279F10: addiu       $a1, $a1, 0x366C
    ctx->r5 = ADD32(ctx->r5, 0X366C);
    // 0x80279F14: b           L_80279F2C
    // 0x80279F18: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_80279F2C;
    // 0x80279F18: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_80279F1C:
    // 0x80279F1C: lhu         $t4, 0x0($a1)
    ctx->r12 = MEM_HU(ctx->r5, 0X0);
    // 0x80279F20: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x80279F24: addiu       $t5, $t4, 0x1
    ctx->r13 = ADD32(ctx->r12, 0X1);
    // 0x80279F28: sh          $t5, 0x0($a1)
    MEM_H(0X0, ctx->r5) = ctx->r13;
L_80279F2C:
    // 0x80279F2C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80279F30: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80279F34: jr          $ra
    // 0x80279F38: nop

    return;
    // 0x80279F38: nop

;}
RECOMP_FUNC void ovl_8024B800_func_80279E70(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80279E70: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80279E74: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x80279E78: sw          $a2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r6;
    // 0x80279E7C: lw          $t6, 0xD8($a0)
    ctx->r14 = MEM_W(ctx->r4, 0XD8);
    // 0x80279E80: nop

    // 0x80279E84: lbu         $a1, 0x7($t6)
    ctx->r5 = MEM_BU(ctx->r14, 0X7);
    // 0x80279E88: jal         0x802752E8
    // 0x80279E8C: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    ovl_8024B800_func_802752E8(rdram, ctx);
        goto after_0;
    // 0x80279E8C: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    after_0:
    // 0x80279E90: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    // 0x80279E94: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    // 0x80279E98: lw          $t7, 0xD8($a0)
    ctx->r15 = MEM_W(ctx->r4, 0XD8);
    // 0x80279E9C: nop

    // 0x80279EA0: lbu         $a1, 0x8($t7)
    ctx->r5 = MEM_BU(ctx->r15, 0X8);
    // 0x80279EA4: jal         0x802752E8
    // 0x80279EA8: nop

    ovl_8024B800_func_802752E8(rdram, ctx);
        goto after_1;
    // 0x80279EA8: nop

    after_1:
    // 0x80279EAC: lui         $a1, 0x801B
    ctx->r5 = S32(0X801B << 16);
    // 0x80279EB0: addiu       $a1, $a1, 0x366C
    ctx->r5 = ADD32(ctx->r5, 0X366C);
    // 0x80279EB4: lhu         $t8, 0x0($a1)
    ctx->r24 = MEM_HU(ctx->r5, 0X0);
    // 0x80279EB8: lw          $t9, 0x18($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X18);
    // 0x80279EBC: slti        $at, $t8, 0x2
    ctx->r1 = SIGNED(ctx->r24) < 0X2 ? 1 : 0;
    // 0x80279EC0: bne         $at, $zero, L_80279ED0
    if (ctx->r1 != 0) {
        // 0x80279EC4: subu        $t0, $t9, $v0
        ctx->r8 = SUB32(ctx->r25, ctx->r2);
            goto L_80279ED0;
    }
    // 0x80279EC4: subu        $t0, $t9, $v0
    ctx->r8 = SUB32(ctx->r25, ctx->r2);
    // 0x80279EC8: b           L_80279F2C
    // 0x80279ECC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_80279F2C;
    // 0x80279ECC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_80279ED0:
    // 0x80279ED0: lw          $t2, 0x20($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X20);
    // 0x80279ED4: lhu         $t1, 0x2A($sp)
    ctx->r9 = MEM_HU(ctx->r29, 0X2A);
    // 0x80279ED8: lhu         $t3, 0xE($t2)
    ctx->r11 = MEM_HU(ctx->r10, 0XE);
    // 0x80279EDC: addiu       $at, $zero, 0x17
    ctx->r1 = ADD32(0, 0X17);
    // 0x80279EE0: bne         $t3, $at, L_80279EEC
    if (ctx->r11 != ctx->r1) {
        // 0x80279EE4: addu        $v1, $t0, $t1
        ctx->r3 = ADD32(ctx->r8, ctx->r9);
            goto L_80279EEC;
    }
    // 0x80279EE4: addu        $v1, $t0, $t1
    ctx->r3 = ADD32(ctx->r8, ctx->r9);
    // 0x80279EE8: addiu       $v1, $v1, 0xA
    ctx->r3 = ADD32(ctx->r3, 0XA);
L_80279EEC:
    // 0x80279EEC: bgez        $v1, L_80279EFC
    if (SIGNED(ctx->r3) >= 0) {
        // 0x80279EF0: nop
    
            goto L_80279EFC;
    }
    // 0x80279EF0: nop

    // 0x80279EF4: b           L_80279F2C
    // 0x80279EF8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_80279F2C;
    // 0x80279EF8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_80279EFC:
    // 0x80279EFC: jal         0x80059898
    // 0x80279F00: addiu       $a0, $v1, 0xF
    ctx->r4 = ADD32(ctx->r3, 0XF);
    func_80059898(rdram, ctx);
        goto after_2;
    // 0x80279F00: addiu       $a0, $v1, 0xF
    ctx->r4 = ADD32(ctx->r3, 0XF);
    after_2:
    // 0x80279F04: lui         $a1, 0x801B
    ctx->r5 = S32(0X801B << 16);
    // 0x80279F08: sltiu       $at, $v0, 0xE
    ctx->r1 = ctx->r2 < 0XE ? 1 : 0;
    // 0x80279F0C: beq         $at, $zero, L_80279F1C
    if (ctx->r1 == 0) {
        // 0x80279F10: addiu       $a1, $a1, 0x366C
        ctx->r5 = ADD32(ctx->r5, 0X366C);
            goto L_80279F1C;
    }
    // 0x80279F10: addiu       $a1, $a1, 0x366C
    ctx->r5 = ADD32(ctx->r5, 0X366C);
    // 0x80279F14: b           L_80279F2C
    // 0x80279F18: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_80279F2C;
    // 0x80279F18: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_80279F1C:
    // 0x80279F1C: lhu         $t4, 0x0($a1)
    ctx->r12 = MEM_HU(ctx->r5, 0X0);
    // 0x80279F20: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x80279F24: addiu       $t5, $t4, 0x1
    ctx->r13 = ADD32(ctx->r12, 0X1);
    // 0x80279F28: sh          $t5, 0x0($a1)
    MEM_H(0X0, ctx->r5) = ctx->r13;
L_80279F2C:
    // 0x80279F2C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80279F30: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80279F34: jr          $ra
    // 0x80279F38: nop

    return;
    // 0x80279F38: nop

;}
RECOMP_FUNC void ovl_8024B800_func_80279F3C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80279F3C: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x80279F40: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80279F44: sw          $a1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r5;
    // 0x80279F48: sw          $zero, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = 0;
    // 0x80279F4C: lw          $t6, 0xD8($a0)
    ctx->r14 = MEM_W(ctx->r4, 0XD8);
    // 0x80279F50: nop

    // 0x80279F54: lbu         $a1, 0x7($t6)
    ctx->r5 = MEM_BU(ctx->r14, 0X7);
    // 0x80279F58: jal         0x80275318
    // 0x80279F5C: nop

    ovl_8024B800_func_80275318(rdram, ctx);
        goto after_0;
    // 0x80279F5C: nop

    after_0:
    // 0x80279F60: lw          $a0, 0x34($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X34);
    // 0x80279F64: swc1        $f0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f0.u32l;
    // 0x80279F68: lw          $t7, 0xD8($a0)
    ctx->r15 = MEM_W(ctx->r4, 0XD8);
    // 0x80279F6C: nop

    // 0x80279F70: lbu         $a1, 0x8($t7)
    ctx->r5 = MEM_BU(ctx->r15, 0X8);
    // 0x80279F74: jal         0x80275318
    // 0x80279F78: nop

    ovl_8024B800_func_80275318(rdram, ctx);
        goto after_1;
    // 0x80279F78: nop

    after_1:
    // 0x80279F7C: cfc1        $t8, $FpcCsr
    ctx->r24 = get_cop1_cs();
    // 0x80279F80: lwc1        $f4, 0x20($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X20);
    // 0x80279F84: ori         $at, $t8, 0x3
    ctx->r1 = ctx->r24 | 0X3;
    // 0x80279F88: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x80279F8C: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x80279F90: nop

    // 0x80279F94: cvt.w.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = CVT_W_S(ctx->f4.fl);
    // 0x80279F98: ctc1        $t8, $FpcCsr
    set_cop1_cs(ctx->r24);
    // 0x80279F9C: mfc1        $t9, $f6
    ctx->r25 = (int32_t)ctx->f6.u32l;
    // 0x80279FA0: nop

    // 0x80279FA4: cfc1        $t0, $FpcCsr
    ctx->r8 = get_cop1_cs();
    // 0x80279FA8: nop

    // 0x80279FAC: ori         $at, $t0, 0x3
    ctx->r1 = ctx->r8 | 0X3;
    // 0x80279FB0: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x80279FB4: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x80279FB8: nop

    // 0x80279FBC: cvt.w.s     $f8, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    ctx->f8.u32l = CVT_W_S(ctx->f0.fl);
    // 0x80279FC0: mfc1        $t1, $f8
    ctx->r9 = (int32_t)ctx->f8.u32l;
    // 0x80279FC4: ctc1        $t0, $FpcCsr
    set_cop1_cs(ctx->r8);
    // 0x80279FC8: subu        $v0, $t9, $t1
    ctx->r2 = SUB32(ctx->r25, ctx->r9);
    // 0x80279FCC: addiu       $v1, $v0, -0x14
    ctx->r3 = ADD32(ctx->r2, -0X14);
    // 0x80279FD0: bgez        $v1, L_80279FE0
    if (SIGNED(ctx->r3) >= 0) {
        // 0x80279FD4: addiu       $a0, $v1, 0x1E
        ctx->r4 = ADD32(ctx->r3, 0X1E);
            goto L_80279FE0;
    }
    // 0x80279FD4: addiu       $a0, $v1, 0x1E
    ctx->r4 = ADD32(ctx->r3, 0X1E);
    // 0x80279FD8: b           L_8027A01C
    // 0x80279FDC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_8027A01C;
    // 0x80279FDC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_80279FE0:
    // 0x80279FE0: jal         0x80059898
    // 0x80279FE4: sw          $a0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r4;
    func_80059898(rdram, ctx);
        goto after_2;
    // 0x80279FE4: sw          $a0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r4;
    after_2:
    // 0x80279FE8: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    // 0x80279FEC: addiu       $t2, $zero, 0x2
    ctx->r10 = ADD32(0, 0X2);
    // 0x80279FF0: slti        $at, $a0, 0x3D
    ctx->r1 = SIGNED(ctx->r4) < 0X3D ? 1 : 0;
    // 0x80279FF4: bne         $at, $zero, L_8027A008
    if (ctx->r1 != 0) {
        // 0x80279FF8: slti        $at, $a0, 0x2E
        ctx->r1 = SIGNED(ctx->r4) < 0X2E ? 1 : 0;
            goto L_8027A008;
    }
    // 0x80279FF8: slti        $at, $a0, 0x2E
    ctx->r1 = SIGNED(ctx->r4) < 0X2E ? 1 : 0;
    // 0x80279FFC: b           L_8027A014
    // 0x8027A000: sw          $t2, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r10;
        goto L_8027A014;
    // 0x8027A000: sw          $t2, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r10;
    // 0x8027A004: slti        $at, $a0, 0x2E
    ctx->r1 = SIGNED(ctx->r4) < 0X2E ? 1 : 0;
L_8027A008:
    // 0x8027A008: bne         $at, $zero, L_8027A014
    if (ctx->r1 != 0) {
        // 0x8027A00C: addiu       $t3, $zero, 0x1
        ctx->r11 = ADD32(0, 0X1);
            goto L_8027A014;
    }
    // 0x8027A00C: addiu       $t3, $zero, 0x1
    ctx->r11 = ADD32(0, 0X1);
    // 0x8027A010: sw          $t3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r11;
L_8027A014:
    // 0x8027A014: lw          $v0, 0x2C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X2C);
    // 0x8027A018: nop

L_8027A01C:
    // 0x8027A01C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8027A020: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x8027A024: jr          $ra
    // 0x8027A028: nop

    return;
    // 0x8027A028: nop

;}
RECOMP_FUNC void ovl_8024B800_func_80279F44(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80279F44: sw          $a1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r5;
    // 0x80279F48: sw          $zero, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = 0;
    // 0x80279F4C: lw          $t6, 0xD8($a0)
    ctx->r14 = MEM_W(ctx->r4, 0XD8);
    // 0x80279F50: nop

    // 0x80279F54: lbu         $a1, 0x7($t6)
    ctx->r5 = MEM_BU(ctx->r14, 0X7);
    // 0x80279F58: jal         0x80275318
    // 0x80279F5C: nop

    ovl_8024B800_func_80275318(rdram, ctx);
        goto after_0;
    // 0x80279F5C: nop

    after_0:
    // 0x80279F60: lw          $a0, 0x34($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X34);
    // 0x80279F64: swc1        $f0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f0.u32l;
    // 0x80279F68: lw          $t7, 0xD8($a0)
    ctx->r15 = MEM_W(ctx->r4, 0XD8);
    // 0x80279F6C: nop

    // 0x80279F70: lbu         $a1, 0x8($t7)
    ctx->r5 = MEM_BU(ctx->r15, 0X8);
    // 0x80279F74: jal         0x80275318
    // 0x80279F78: nop

    ovl_8024B800_func_80275318(rdram, ctx);
        goto after_1;
    // 0x80279F78: nop

    after_1:
    // 0x80279F7C: cfc1        $t8, $FpcCsr
    ctx->r24 = get_cop1_cs();
    // 0x80279F80: lwc1        $f4, 0x20($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X20);
    // 0x80279F84: ori         $at, $t8, 0x3
    ctx->r1 = ctx->r24 | 0X3;
    // 0x80279F88: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x80279F8C: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x80279F90: nop

    // 0x80279F94: cvt.w.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = CVT_W_S(ctx->f4.fl);
    // 0x80279F98: ctc1        $t8, $FpcCsr
    set_cop1_cs(ctx->r24);
    // 0x80279F9C: mfc1        $t9, $f6
    ctx->r25 = (int32_t)ctx->f6.u32l;
    // 0x80279FA0: nop

    // 0x80279FA4: cfc1        $t0, $FpcCsr
    ctx->r8 = get_cop1_cs();
    // 0x80279FA8: nop

    // 0x80279FAC: ori         $at, $t0, 0x3
    ctx->r1 = ctx->r8 | 0X3;
    // 0x80279FB0: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x80279FB4: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x80279FB8: nop

    // 0x80279FBC: cvt.w.s     $f8, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    ctx->f8.u32l = CVT_W_S(ctx->f0.fl);
    // 0x80279FC0: mfc1        $t1, $f8
    ctx->r9 = (int32_t)ctx->f8.u32l;
    // 0x80279FC4: ctc1        $t0, $FpcCsr
    set_cop1_cs(ctx->r8);
    // 0x80279FC8: subu        $v0, $t9, $t1
    ctx->r2 = SUB32(ctx->r25, ctx->r9);
    // 0x80279FCC: addiu       $v1, $v0, -0x14
    ctx->r3 = ADD32(ctx->r2, -0X14);
    // 0x80279FD0: bgez        $v1, L_80279FE0
    if (SIGNED(ctx->r3) >= 0) {
        // 0x80279FD4: addiu       $a0, $v1, 0x1E
        ctx->r4 = ADD32(ctx->r3, 0X1E);
            goto L_80279FE0;
    }
    // 0x80279FD4: addiu       $a0, $v1, 0x1E
    ctx->r4 = ADD32(ctx->r3, 0X1E);
    // 0x80279FD8: b           L_8027A01C
    // 0x80279FDC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_8027A01C;
    // 0x80279FDC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_80279FE0:
    // 0x80279FE0: jal         0x80059898
    // 0x80279FE4: sw          $a0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r4;
    func_80059898(rdram, ctx);
        goto after_2;
    // 0x80279FE4: sw          $a0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r4;
    after_2:
    // 0x80279FE8: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    // 0x80279FEC: addiu       $t2, $zero, 0x2
    ctx->r10 = ADD32(0, 0X2);
    // 0x80279FF0: slti        $at, $a0, 0x3D
    ctx->r1 = SIGNED(ctx->r4) < 0X3D ? 1 : 0;
    // 0x80279FF4: bne         $at, $zero, L_8027A008
    if (ctx->r1 != 0) {
        // 0x80279FF8: slti        $at, $a0, 0x2E
        ctx->r1 = SIGNED(ctx->r4) < 0X2E ? 1 : 0;
            goto L_8027A008;
    }
    // 0x80279FF8: slti        $at, $a0, 0x2E
    ctx->r1 = SIGNED(ctx->r4) < 0X2E ? 1 : 0;
    // 0x80279FFC: b           L_8027A014
    // 0x8027A000: sw          $t2, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r10;
        goto L_8027A014;
    // 0x8027A000: sw          $t2, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r10;
    // 0x8027A004: slti        $at, $a0, 0x2E
    ctx->r1 = SIGNED(ctx->r4) < 0X2E ? 1 : 0;
L_8027A008:
    // 0x8027A008: bne         $at, $zero, L_8027A014
    if (ctx->r1 != 0) {
        // 0x8027A00C: addiu       $t3, $zero, 0x1
        ctx->r11 = ADD32(0, 0X1);
            goto L_8027A014;
    }
    // 0x8027A00C: addiu       $t3, $zero, 0x1
    ctx->r11 = ADD32(0, 0X1);
    // 0x8027A010: sw          $t3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r11;
L_8027A014:
    // 0x8027A014: lw          $v0, 0x2C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X2C);
    // 0x8027A018: nop

L_8027A01C:
    // 0x8027A01C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8027A020: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x8027A024: jr          $ra
    // 0x8027A028: nop

    return;
    // 0x8027A028: nop

;}
RECOMP_FUNC void ovl_8024B800_func_80279F9C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80279F9C: mfc1        $t9, $f6
    ctx->r25 = (int32_t)ctx->f6.u32l;
    // 0x80279FA0: nop

    // 0x80279FA4: cfc1        $t0, $FpcCsr
    ctx->r8 = get_cop1_cs();
    // 0x80279FA8: nop

    // 0x80279FAC: ori         $at, $t0, 0x3
    ctx->r1 = ctx->r8 | 0X3;
    // 0x80279FB0: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x80279FB4: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x80279FB8: nop

    // 0x80279FBC: cvt.w.s     $f8, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    ctx->f8.u32l = CVT_W_S(ctx->f0.fl);
    // 0x80279FC0: mfc1        $t1, $f8
    ctx->r9 = (int32_t)ctx->f8.u32l;
    // 0x80279FC4: ctc1        $t0, $FpcCsr
    set_cop1_cs(ctx->r8);
    // 0x80279FC8: subu        $v0, $t9, $t1
    ctx->r2 = SUB32(ctx->r25, ctx->r9);
    // 0x80279FCC: addiu       $v1, $v0, -0x14
    ctx->r3 = ADD32(ctx->r2, -0X14);
    // 0x80279FD0: bgez        $v1, L_80279FE0
    if (SIGNED(ctx->r3) >= 0) {
        // 0x80279FD4: addiu       $a0, $v1, 0x1E
        ctx->r4 = ADD32(ctx->r3, 0X1E);
            goto L_80279FE0;
    }
    // 0x80279FD4: addiu       $a0, $v1, 0x1E
    ctx->r4 = ADD32(ctx->r3, 0X1E);
    // 0x80279FD8: b           L_8027A01C
    // 0x80279FDC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_8027A01C;
    // 0x80279FDC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_80279FE0:
    // 0x80279FE0: jal         0x80059898
    // 0x80279FE4: sw          $a0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r4;
    func_80059898(rdram, ctx);
        goto after_0;
    // 0x80279FE4: sw          $a0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r4;
    after_0:
    // 0x80279FE8: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    // 0x80279FEC: addiu       $t2, $zero, 0x2
    ctx->r10 = ADD32(0, 0X2);
    // 0x80279FF0: slti        $at, $a0, 0x3D
    ctx->r1 = SIGNED(ctx->r4) < 0X3D ? 1 : 0;
    // 0x80279FF4: bne         $at, $zero, L_8027A008
    if (ctx->r1 != 0) {
        // 0x80279FF8: slti        $at, $a0, 0x2E
        ctx->r1 = SIGNED(ctx->r4) < 0X2E ? 1 : 0;
            goto L_8027A008;
    }
    // 0x80279FF8: slti        $at, $a0, 0x2E
    ctx->r1 = SIGNED(ctx->r4) < 0X2E ? 1 : 0;
    // 0x80279FFC: b           L_8027A014
    // 0x8027A000: sw          $t2, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r10;
        goto L_8027A014;
    // 0x8027A000: sw          $t2, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r10;
    // 0x8027A004: slti        $at, $a0, 0x2E
    ctx->r1 = SIGNED(ctx->r4) < 0X2E ? 1 : 0;
L_8027A008:
    // 0x8027A008: bne         $at, $zero, L_8027A014
    if (ctx->r1 != 0) {
        // 0x8027A00C: addiu       $t3, $zero, 0x1
        ctx->r11 = ADD32(0, 0X1);
            goto L_8027A014;
    }
    // 0x8027A00C: addiu       $t3, $zero, 0x1
    ctx->r11 = ADD32(0, 0X1);
    // 0x8027A010: sw          $t3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r11;
L_8027A014:
    // 0x8027A014: lw          $v0, 0x2C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X2C);
    // 0x8027A018: nop

L_8027A01C:
    // 0x8027A01C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8027A020: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x8027A024: jr          $ra
    // 0x8027A028: nop

    return;
    // 0x8027A028: nop

;}
RECOMP_FUNC void ovl_8024B800_func_80279FF4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80279FF4: bne         $at, $zero, L_8027A008
    if (ctx->r1 != 0) {
        // 0x80279FF8: slti        $at, $a0, 0x2E
        ctx->r1 = SIGNED(ctx->r4) < 0X2E ? 1 : 0;
            goto L_8027A008;
    }
    // 0x80279FF8: slti        $at, $a0, 0x2E
    ctx->r1 = SIGNED(ctx->r4) < 0X2E ? 1 : 0;
    // 0x80279FFC: b           L_8027A014
    // 0x8027A000: sw          $t2, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r10;
        goto L_8027A014;
    // 0x8027A000: sw          $t2, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r10;
    // 0x8027A004: slti        $at, $a0, 0x2E
    ctx->r1 = SIGNED(ctx->r4) < 0X2E ? 1 : 0;
L_8027A008:
    // 0x8027A008: bne         $at, $zero, L_8027A014
    if (ctx->r1 != 0) {
        // 0x8027A00C: addiu       $t3, $zero, 0x1
        ctx->r11 = ADD32(0, 0X1);
            goto L_8027A014;
    }
    // 0x8027A00C: addiu       $t3, $zero, 0x1
    ctx->r11 = ADD32(0, 0X1);
    // 0x8027A010: sw          $t3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r11;
L_8027A014:
    // 0x8027A014: lw          $v0, 0x2C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X2C);
    // 0x8027A018: nop

    // 0x8027A01C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8027A020: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x8027A024: jr          $ra
    // 0x8027A028: nop

    return;
    // 0x8027A028: nop

;}
RECOMP_FUNC void ovl_8024B800_func_8027A02C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8027A02C: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x8027A030: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8027A034: sw          $a1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r5;
    // 0x8027A038: sw          $a2, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r6;
    // 0x8027A03C: lhu         $v1, 0x16($a0)
    ctx->r3 = MEM_HU(ctx->r4, 0X16);
    // 0x8027A040: lw          $t2, 0x3C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X3C);
    // 0x8027A044: andi        $t7, $v1, 0x40
    ctx->r15 = ctx->r3 & 0X40;
    // 0x8027A048: beq         $t7, $zero, L_8027A09C
    if (ctx->r15 == 0) {
        // 0x8027A04C: andi        $t6, $a2, 0xFFFF
        ctx->r14 = ctx->r6 & 0XFFFF;
            goto L_8027A09C;
    }
    // 0x8027A04C: andi        $t6, $a2, 0xFFFF
    ctx->r14 = ctx->r6 & 0XFFFF;
    // 0x8027A050: bne         $t6, $zero, L_8027A07C
    if (ctx->r14 != 0) {
        // 0x8027A054: lui         $t1, 0x8012
        ctx->r9 = S32(0X8012 << 16);
            goto L_8027A07C;
    }
    // 0x8027A054: lui         $t1, 0x8012
    ctx->r9 = S32(0X8012 << 16);
    // 0x8027A058: andi        $t8, $v1, 0xFFBF
    ctx->r24 = ctx->r3 & 0XFFBF;
    // 0x8027A05C: sh          $t8, 0x16($a0)
    MEM_H(0X16, ctx->r4) = ctx->r24;
    // 0x8027A060: lui         $v0, 0x8009
    ctx->r2 = S32(0X8009 << 16);
    // 0x8027A064: lw          $v0, 0x3B20($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X3B20);
    // 0x8027A068: nop

    // 0x8027A06C: lhu         $t9, 0xC2($v0)
    ctx->r25 = MEM_HU(ctx->r2, 0XC2);
    // 0x8027A070: nop

    // 0x8027A074: andi        $t0, $t9, 0xFFBF
    ctx->r8 = ctx->r25 & 0XFFBF;
    // 0x8027A078: sh          $t0, 0xC2($v0)
    MEM_H(0XC2, ctx->r2) = ctx->r8;
L_8027A07C:
    // 0x8027A07C: lb          $t1, -0x3099($t1)
    ctx->r9 = MEM_B(ctx->r9, -0X3099);
    // 0x8027A080: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x8027A084: bne         $t1, $at, L_8027A094
    if (ctx->r9 != ctx->r1) {
        // 0x8027A088: addiu       $v1, $zero, 0x2
        ctx->r3 = ADD32(0, 0X2);
            goto L_8027A094;
    }
    // 0x8027A088: addiu       $v1, $zero, 0x2
    ctx->r3 = ADD32(0, 0X2);
    // 0x8027A08C: b           L_8027A174
    // 0x8027A090: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
        goto L_8027A174;
    // 0x8027A090: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
L_8027A094:
    // 0x8027A094: b           L_8027A174
    // 0x8027A098: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
        goto L_8027A174;
    // 0x8027A098: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
L_8027A09C:
    // 0x8027A09C: lwc1        $f12, 0x8C($a0)
    ctx->f12.u32l = MEM_W(ctx->r4, 0X8C);
    // 0x8027A0A0: lwc1        $f14, 0x8C($t2)
    ctx->f14.u32l = MEM_W(ctx->r10, 0X8C);
    // 0x8027A0A4: jal         0x80279308
    // 0x8027A0A8: sw          $a0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r4;
    ovl_8024B800_func_80279308(rdram, ctx);
        goto after_0;
    // 0x8027A0A8: sw          $a0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r4;
    after_0:
    // 0x8027A0AC: lw          $v0, 0x3C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X3C);
    // 0x8027A0B0: swc1        $f0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f0.u32l;
    // 0x8027A0B4: lw          $a0, 0x38($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X38);
    // 0x8027A0B8: lw          $a2, 0x44($v0)
    ctx->r6 = MEM_W(ctx->r2, 0X44);
    // 0x8027A0BC: lw          $a1, 0x4C($v0)
    ctx->r5 = MEM_W(ctx->r2, 0X4C);
    // 0x8027A0C0: jal         0x80272B98
    // 0x8027A0C4: addiu       $a3, $sp, 0x2C
    ctx->r7 = ADD32(ctx->r29, 0X2C);
    ovl_8024B800_func_80272B98(rdram, ctx);
        goto after_1;
    // 0x8027A0C4: addiu       $a3, $sp, 0x2C
    ctx->r7 = ADD32(ctx->r29, 0X2C);
    after_1:
    // 0x8027A0C8: lw          $a0, 0x38($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X38);
    // 0x8027A0CC: lwc1        $f12, 0x2C($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x8027A0D0: lwc1        $f14, 0x8C($a0)
    ctx->f14.u32l = MEM_W(ctx->r4, 0X8C);
    // 0x8027A0D4: jal         0x80279308
    // 0x8027A0D8: nop

    ovl_8024B800_func_80279308(rdram, ctx);
        goto after_2;
    // 0x8027A0D8: nop

    after_2:
    // 0x8027A0DC: lui         $at, 0x8028
    ctx->r1 = S32(0X8028 << 16);
    // 0x8027A0E0: lwc1        $f7, -0x1B78($at)
    ctx->f_odd[(7 - 1) * 2] = MEM_W(ctx->r1, -0X1B78);
    // 0x8027A0E4: lwc1        $f6, -0x1B74($at)
    ctx->f6.u32l = MEM_W(ctx->r1, -0X1B74);
    // 0x8027A0E8: cvt.d.s     $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f4.d = CVT_D_S(ctx->f0.fl);
    // 0x8027A0EC: c.lt.d      $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f4.d < ctx->f6.d;
    // 0x8027A0F0: lwc1        $f0, 0x34($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X34);
    // 0x8027A0F4: bc1f        L_8027A104
    if (!c1cs) {
        // 0x8027A0F8: lui         $t3, 0x8012
        ctx->r11 = S32(0X8012 << 16);
            goto L_8027A104;
    }
    // 0x8027A0F8: lui         $t3, 0x8012
    ctx->r11 = S32(0X8012 << 16);
    // 0x8027A0FC: b           L_8027A174
    // 0x8027A100: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_8027A174;
    // 0x8027A100: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_8027A104:
    // 0x8027A104: lb          $t3, -0x3099($t3)
    ctx->r11 = MEM_B(ctx->r11, -0X3099);
    // 0x8027A108: lui         $at, 0x8028
    ctx->r1 = S32(0X8028 << 16);
    // 0x8027A10C: sll         $t4, $t3, 2
    ctx->r12 = S32(ctx->r11 << 2);
    // 0x8027A110: addu        $at, $at, $t4
    ctx->r1 = ADD32(ctx->r1, ctx->r12);
    // 0x8027A114: lwc1        $f8, -0x22A0($at)
    ctx->f8.u32l = MEM_W(ctx->r1, -0X22A0);
    // 0x8027A118: lw          $t5, 0x3C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X3C);
    // 0x8027A11C: c.lt.s      $f0, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f0.fl < ctx->f8.fl;
    // 0x8027A120: lui         $at, 0x8028
    ctx->r1 = S32(0X8028 << 16);
    // 0x8027A124: bc1f        L_8027A174
    if (!c1cs) {
        // 0x8027A128: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_8027A174;
    }
    // 0x8027A128: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x8027A12C: lwc1        $f17, -0x1B70($at)
    ctx->f_odd[(17 - 1) * 2] = MEM_W(ctx->r1, -0X1B70);
    // 0x8027A130: lwc1        $f16, -0x1B6C($at)
    ctx->f16.u32l = MEM_W(ctx->r1, -0X1B6C);
    // 0x8027A134: cvt.d.s     $f10, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f10.d = CVT_D_S(ctx->f0.fl);
    // 0x8027A138: c.lt.d      $f10, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f10.d < ctx->f16.d;
    // 0x8027A13C: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x8027A140: bc1f        L_8027A14C
    if (!c1cs) {
        // 0x8027A144: nop
    
            goto L_8027A14C;
    }
    // 0x8027A144: nop

    // 0x8027A148: addiu       $v1, $zero, 0x2
    ctx->r3 = ADD32(0, 0X2);
L_8027A14C:
    // 0x8027A14C: lw          $t6, 0xC8($t5)
    ctx->r14 = MEM_W(ctx->r13, 0XC8);
    // 0x8027A150: nop

    // 0x8027A154: lhu         $t7, 0x10($t6)
    ctx->r15 = MEM_HU(ctx->r14, 0X10);
    // 0x8027A158: nop

    // 0x8027A15C: andi        $t8, $t7, 0x1
    ctx->r24 = ctx->r15 & 0X1;
    // 0x8027A160: beq         $t8, $zero, L_8027A16C
    if (ctx->r24 == 0) {
        // 0x8027A164: nop
    
            goto L_8027A16C;
    }
    // 0x8027A164: nop

    // 0x8027A168: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
L_8027A16C:
    // 0x8027A16C: b           L_8027A174
    // 0x8027A170: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
        goto L_8027A174;
    // 0x8027A170: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
L_8027A174:
    // 0x8027A174: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8027A178: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    // 0x8027A17C: jr          $ra
    // 0x8027A180: nop

    return;
    // 0x8027A180: nop

;}
RECOMP_FUNC void ovl_8024B800_func_8027A04C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8027A04C: andi        $t6, $a2, 0xFFFF
    ctx->r14 = ctx->r6 & 0XFFFF;
    // 0x8027A050: bne         $t6, $zero, L_8027A07C
    if (ctx->r14 != 0) {
        // 0x8027A054: lui         $t1, 0x8012
        ctx->r9 = S32(0X8012 << 16);
            goto L_8027A07C;
    }
    // 0x8027A054: lui         $t1, 0x8012
    ctx->r9 = S32(0X8012 << 16);
    // 0x8027A058: andi        $t8, $v1, 0xFFBF
    ctx->r24 = ctx->r3 & 0XFFBF;
    // 0x8027A05C: sh          $t8, 0x16($a0)
    MEM_H(0X16, ctx->r4) = ctx->r24;
    // 0x8027A060: lui         $v0, 0x8009
    ctx->r2 = S32(0X8009 << 16);
    // 0x8027A064: lw          $v0, 0x3B20($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X3B20);
    // 0x8027A068: nop

    // 0x8027A06C: lhu         $t9, 0xC2($v0)
    ctx->r25 = MEM_HU(ctx->r2, 0XC2);
    // 0x8027A070: nop

    // 0x8027A074: andi        $t0, $t9, 0xFFBF
    ctx->r8 = ctx->r25 & 0XFFBF;
    // 0x8027A078: sh          $t0, 0xC2($v0)
    MEM_H(0XC2, ctx->r2) = ctx->r8;
L_8027A07C:
    // 0x8027A07C: lb          $t1, -0x3099($t1)
    ctx->r9 = MEM_B(ctx->r9, -0X3099);
    // 0x8027A080: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x8027A084: bne         $t1, $at, L_8027A094
    if (ctx->r9 != ctx->r1) {
        // 0x8027A088: addiu       $v1, $zero, 0x2
        ctx->r3 = ADD32(0, 0X2);
            goto L_8027A094;
    }
    // 0x8027A088: addiu       $v1, $zero, 0x2
    ctx->r3 = ADD32(0, 0X2);
    // 0x8027A08C: b           L_8027A174
    // 0x8027A090: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
        goto L_8027A174;
    // 0x8027A090: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
L_8027A094:
    // 0x8027A094: b           L_8027A174
    // 0x8027A098: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
        goto L_8027A174;
    // 0x8027A098: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    // 0x8027A09C: lwc1        $f12, 0x8C($a0)
    ctx->f12.u32l = MEM_W(ctx->r4, 0X8C);
    // 0x8027A0A0: lwc1        $f14, 0x8C($t2)
    ctx->f14.u32l = MEM_W(ctx->r10, 0X8C);
    // 0x8027A0A4: jal         0x80279308
    // 0x8027A0A8: sw          $a0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r4;
    ovl_8024B800_func_80279308(rdram, ctx);
        goto after_0;
    // 0x8027A0A8: sw          $a0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r4;
    after_0:
    // 0x8027A0AC: lw          $v0, 0x3C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X3C);
    // 0x8027A0B0: swc1        $f0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f0.u32l;
    // 0x8027A0B4: lw          $a0, 0x38($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X38);
    // 0x8027A0B8: lw          $a2, 0x44($v0)
    ctx->r6 = MEM_W(ctx->r2, 0X44);
    // 0x8027A0BC: lw          $a1, 0x4C($v0)
    ctx->r5 = MEM_W(ctx->r2, 0X4C);
    // 0x8027A0C0: jal         0x80272B98
    // 0x8027A0C4: addiu       $a3, $sp, 0x2C
    ctx->r7 = ADD32(ctx->r29, 0X2C);
    ovl_8024B800_func_80272B98(rdram, ctx);
        goto after_1;
    // 0x8027A0C4: addiu       $a3, $sp, 0x2C
    ctx->r7 = ADD32(ctx->r29, 0X2C);
    after_1:
    // 0x8027A0C8: lw          $a0, 0x38($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X38);
    // 0x8027A0CC: lwc1        $f12, 0x2C($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x8027A0D0: lwc1        $f14, 0x8C($a0)
    ctx->f14.u32l = MEM_W(ctx->r4, 0X8C);
    // 0x8027A0D4: jal         0x80279308
    // 0x8027A0D8: nop

    ovl_8024B800_func_80279308(rdram, ctx);
        goto after_2;
    // 0x8027A0D8: nop

    after_2:
    // 0x8027A0DC: lui         $at, 0x8028
    ctx->r1 = S32(0X8028 << 16);
    // 0x8027A0E0: lwc1        $f7, -0x1B78($at)
    ctx->f_odd[(7 - 1) * 2] = MEM_W(ctx->r1, -0X1B78);
    // 0x8027A0E4: lwc1        $f6, -0x1B74($at)
    ctx->f6.u32l = MEM_W(ctx->r1, -0X1B74);
    // 0x8027A0E8: cvt.d.s     $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f4.d = CVT_D_S(ctx->f0.fl);
    // 0x8027A0EC: c.lt.d      $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f4.d < ctx->f6.d;
    // 0x8027A0F0: lwc1        $f0, 0x34($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X34);
    // 0x8027A0F4: bc1f        L_8027A104
    if (!c1cs) {
        // 0x8027A0F8: lui         $t3, 0x8012
        ctx->r11 = S32(0X8012 << 16);
            goto L_8027A104;
    }
    // 0x8027A0F8: lui         $t3, 0x8012
    ctx->r11 = S32(0X8012 << 16);
    // 0x8027A0FC: b           L_8027A174
    // 0x8027A100: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_8027A174;
    // 0x8027A100: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_8027A104:
    // 0x8027A104: lb          $t3, -0x3099($t3)
    ctx->r11 = MEM_B(ctx->r11, -0X3099);
    // 0x8027A108: lui         $at, 0x8028
    ctx->r1 = S32(0X8028 << 16);
    // 0x8027A10C: sll         $t4, $t3, 2
    ctx->r12 = S32(ctx->r11 << 2);
    // 0x8027A110: addu        $at, $at, $t4
    ctx->r1 = ADD32(ctx->r1, ctx->r12);
    // 0x8027A114: lwc1        $f8, -0x22A0($at)
    ctx->f8.u32l = MEM_W(ctx->r1, -0X22A0);
    // 0x8027A118: lw          $t5, 0x3C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X3C);
    // 0x8027A11C: c.lt.s      $f0, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f0.fl < ctx->f8.fl;
    // 0x8027A120: lui         $at, 0x8028
    ctx->r1 = S32(0X8028 << 16);
    // 0x8027A124: bc1f        L_8027A174
    if (!c1cs) {
        // 0x8027A128: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_8027A174;
    }
    // 0x8027A128: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x8027A12C: lwc1        $f17, -0x1B70($at)
    ctx->f_odd[(17 - 1) * 2] = MEM_W(ctx->r1, -0X1B70);
    // 0x8027A130: lwc1        $f16, -0x1B6C($at)
    ctx->f16.u32l = MEM_W(ctx->r1, -0X1B6C);
    // 0x8027A134: cvt.d.s     $f10, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f10.d = CVT_D_S(ctx->f0.fl);
    // 0x8027A138: c.lt.d      $f10, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f10.d < ctx->f16.d;
    // 0x8027A13C: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x8027A140: bc1f        L_8027A14C
    if (!c1cs) {
        // 0x8027A144: nop
    
            goto L_8027A14C;
    }
    // 0x8027A144: nop

    // 0x8027A148: addiu       $v1, $zero, 0x2
    ctx->r3 = ADD32(0, 0X2);
L_8027A14C:
    // 0x8027A14C: lw          $t6, 0xC8($t5)
    ctx->r14 = MEM_W(ctx->r13, 0XC8);
    // 0x8027A150: nop

    // 0x8027A154: lhu         $t7, 0x10($t6)
    ctx->r15 = MEM_HU(ctx->r14, 0X10);
    // 0x8027A158: nop

    // 0x8027A15C: andi        $t8, $t7, 0x1
    ctx->r24 = ctx->r15 & 0X1;
    // 0x8027A160: beq         $t8, $zero, L_8027A16C
    if (ctx->r24 == 0) {
        // 0x8027A164: nop
    
            goto L_8027A16C;
    }
    // 0x8027A164: nop

    // 0x8027A168: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
L_8027A16C:
    // 0x8027A16C: b           L_8027A174
    // 0x8027A170: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
        goto L_8027A174;
    // 0x8027A170: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
L_8027A174:
    // 0x8027A174: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8027A178: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    // 0x8027A17C: jr          $ra
    // 0x8027A180: nop

    return;
    // 0x8027A180: nop

;}
RECOMP_FUNC void ovl_8024B800_func_8027A0A4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8027A0A4: jal         0x80279308
    // 0x8027A0A8: sw          $a0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r4;
    ovl_8024B800_func_80279308(rdram, ctx);
        goto after_0;
    // 0x8027A0A8: sw          $a0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r4;
    after_0:
    // 0x8027A0AC: lw          $v0, 0x3C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X3C);
    // 0x8027A0B0: swc1        $f0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f0.u32l;
    // 0x8027A0B4: lw          $a0, 0x38($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X38);
    // 0x8027A0B8: lw          $a2, 0x44($v0)
    ctx->r6 = MEM_W(ctx->r2, 0X44);
    // 0x8027A0BC: lw          $a1, 0x4C($v0)
    ctx->r5 = MEM_W(ctx->r2, 0X4C);
    // 0x8027A0C0: jal         0x80272B98
    // 0x8027A0C4: addiu       $a3, $sp, 0x2C
    ctx->r7 = ADD32(ctx->r29, 0X2C);
    ovl_8024B800_func_80272B98(rdram, ctx);
        goto after_1;
    // 0x8027A0C4: addiu       $a3, $sp, 0x2C
    ctx->r7 = ADD32(ctx->r29, 0X2C);
    after_1:
    // 0x8027A0C8: lw          $a0, 0x38($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X38);
    // 0x8027A0CC: lwc1        $f12, 0x2C($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x8027A0D0: lwc1        $f14, 0x8C($a0)
    ctx->f14.u32l = MEM_W(ctx->r4, 0X8C);
    // 0x8027A0D4: jal         0x80279308
    // 0x8027A0D8: nop

    ovl_8024B800_func_80279308(rdram, ctx);
        goto after_2;
    // 0x8027A0D8: nop

    after_2:
    // 0x8027A0DC: lui         $at, 0x8028
    ctx->r1 = S32(0X8028 << 16);
    // 0x8027A0E0: lwc1        $f7, -0x1B78($at)
    ctx->f_odd[(7 - 1) * 2] = MEM_W(ctx->r1, -0X1B78);
    // 0x8027A0E4: lwc1        $f6, -0x1B74($at)
    ctx->f6.u32l = MEM_W(ctx->r1, -0X1B74);
    // 0x8027A0E8: cvt.d.s     $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f4.d = CVT_D_S(ctx->f0.fl);
    // 0x8027A0EC: c.lt.d      $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f4.d < ctx->f6.d;
    // 0x8027A0F0: lwc1        $f0, 0x34($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X34);
    // 0x8027A0F4: bc1f        L_8027A104
    if (!c1cs) {
        // 0x8027A0F8: lui         $t3, 0x8012
        ctx->r11 = S32(0X8012 << 16);
            goto L_8027A104;
    }
    // 0x8027A0F8: lui         $t3, 0x8012
    ctx->r11 = S32(0X8012 << 16);
    // 0x8027A0FC: b           L_8027A174
    // 0x8027A100: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_8027A174;
    // 0x8027A100: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_8027A104:
    // 0x8027A104: lb          $t3, -0x3099($t3)
    ctx->r11 = MEM_B(ctx->r11, -0X3099);
    // 0x8027A108: lui         $at, 0x8028
    ctx->r1 = S32(0X8028 << 16);
    // 0x8027A10C: sll         $t4, $t3, 2
    ctx->r12 = S32(ctx->r11 << 2);
    // 0x8027A110: addu        $at, $at, $t4
    ctx->r1 = ADD32(ctx->r1, ctx->r12);
    // 0x8027A114: lwc1        $f8, -0x22A0($at)
    ctx->f8.u32l = MEM_W(ctx->r1, -0X22A0);
    // 0x8027A118: lw          $t5, 0x3C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X3C);
    // 0x8027A11C: c.lt.s      $f0, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f0.fl < ctx->f8.fl;
    // 0x8027A120: lui         $at, 0x8028
    ctx->r1 = S32(0X8028 << 16);
    // 0x8027A124: bc1f        L_8027A174
    if (!c1cs) {
        // 0x8027A128: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_8027A174;
    }
    // 0x8027A128: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x8027A12C: lwc1        $f17, -0x1B70($at)
    ctx->f_odd[(17 - 1) * 2] = MEM_W(ctx->r1, -0X1B70);
    // 0x8027A130: lwc1        $f16, -0x1B6C($at)
    ctx->f16.u32l = MEM_W(ctx->r1, -0X1B6C);
    // 0x8027A134: cvt.d.s     $f10, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f10.d = CVT_D_S(ctx->f0.fl);
    // 0x8027A138: c.lt.d      $f10, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f10.d < ctx->f16.d;
    // 0x8027A13C: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x8027A140: bc1f        L_8027A14C
    if (!c1cs) {
        // 0x8027A144: nop
    
            goto L_8027A14C;
    }
    // 0x8027A144: nop

    // 0x8027A148: addiu       $v1, $zero, 0x2
    ctx->r3 = ADD32(0, 0X2);
L_8027A14C:
    // 0x8027A14C: lw          $t6, 0xC8($t5)
    ctx->r14 = MEM_W(ctx->r13, 0XC8);
    // 0x8027A150: nop

    // 0x8027A154: lhu         $t7, 0x10($t6)
    ctx->r15 = MEM_HU(ctx->r14, 0X10);
    // 0x8027A158: nop

    // 0x8027A15C: andi        $t8, $t7, 0x1
    ctx->r24 = ctx->r15 & 0X1;
    // 0x8027A160: beq         $t8, $zero, L_8027A16C
    if (ctx->r24 == 0) {
        // 0x8027A164: nop
    
            goto L_8027A16C;
    }
    // 0x8027A164: nop

    // 0x8027A168: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
L_8027A16C:
    // 0x8027A16C: b           L_8027A174
    // 0x8027A170: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
        goto L_8027A174;
    // 0x8027A170: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
L_8027A174:
    // 0x8027A174: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8027A178: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    // 0x8027A17C: jr          $ra
    // 0x8027A180: nop

    return;
    // 0x8027A180: nop

;}
RECOMP_FUNC void ovl_8024B800_func_8027A0FC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8027A0FC: b           L_8027A174
    // 0x8027A100: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_8027A174;
    // 0x8027A100: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x8027A104: lb          $t3, -0x3099($t3)
    ctx->r11 = MEM_B(ctx->r11, -0X3099);
    // 0x8027A108: lui         $at, 0x8028
    ctx->r1 = S32(0X8028 << 16);
    // 0x8027A10C: sll         $t4, $t3, 2
    ctx->r12 = S32(ctx->r11 << 2);
    // 0x8027A110: addu        $at, $at, $t4
    ctx->r1 = ADD32(ctx->r1, ctx->r12);
    // 0x8027A114: lwc1        $f8, -0x22A0($at)
    ctx->f8.u32l = MEM_W(ctx->r1, -0X22A0);
    // 0x8027A118: lw          $t5, 0x3C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X3C);
    // 0x8027A11C: c.lt.s      $f0, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f0.fl < ctx->f8.fl;
    // 0x8027A120: lui         $at, 0x8028
    ctx->r1 = S32(0X8028 << 16);
    // 0x8027A124: bc1f        L_8027A174
    if (!c1cs) {
        // 0x8027A128: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_8027A174;
    }
    // 0x8027A128: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x8027A12C: lwc1        $f17, -0x1B70($at)
    ctx->f_odd[(17 - 1) * 2] = MEM_W(ctx->r1, -0X1B70);
    // 0x8027A130: lwc1        $f16, -0x1B6C($at)
    ctx->f16.u32l = MEM_W(ctx->r1, -0X1B6C);
    // 0x8027A134: cvt.d.s     $f10, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f10.d = CVT_D_S(ctx->f0.fl);
    // 0x8027A138: c.lt.d      $f10, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f10.d < ctx->f16.d;
    // 0x8027A13C: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x8027A140: bc1f        L_8027A14C
    if (!c1cs) {
        // 0x8027A144: nop
    
            goto L_8027A14C;
    }
    // 0x8027A144: nop

    // 0x8027A148: addiu       $v1, $zero, 0x2
    ctx->r3 = ADD32(0, 0X2);
L_8027A14C:
    // 0x8027A14C: lw          $t6, 0xC8($t5)
    ctx->r14 = MEM_W(ctx->r13, 0XC8);
    // 0x8027A150: nop

    // 0x8027A154: lhu         $t7, 0x10($t6)
    ctx->r15 = MEM_HU(ctx->r14, 0X10);
    // 0x8027A158: nop

    // 0x8027A15C: andi        $t8, $t7, 0x1
    ctx->r24 = ctx->r15 & 0X1;
    // 0x8027A160: beq         $t8, $zero, L_8027A16C
    if (ctx->r24 == 0) {
        // 0x8027A164: nop
    
            goto L_8027A16C;
    }
    // 0x8027A164: nop

    // 0x8027A168: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
L_8027A16C:
    // 0x8027A16C: b           L_8027A174
    // 0x8027A170: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
        goto L_8027A174;
    // 0x8027A170: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
L_8027A174:
    // 0x8027A174: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8027A178: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    // 0x8027A17C: jr          $ra
    // 0x8027A180: nop

    return;
    // 0x8027A180: nop

;}
RECOMP_FUNC void ovl_8024B800_func_8027A154(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8027A154: lhu         $t7, 0x10($t6)
    ctx->r15 = MEM_HU(ctx->r14, 0X10);
    // 0x8027A158: nop

    // 0x8027A15C: andi        $t8, $t7, 0x1
    ctx->r24 = ctx->r15 & 0X1;
    // 0x8027A160: beq         $t8, $zero, L_8027A16C
    if (ctx->r24 == 0) {
        // 0x8027A164: nop
    
            goto L_8027A16C;
    }
    // 0x8027A164: nop

    // 0x8027A168: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
L_8027A16C:
    // 0x8027A16C: b           L_8027A174
    // 0x8027A170: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
        goto L_8027A174;
    // 0x8027A170: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
L_8027A174:
    // 0x8027A174: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8027A178: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    // 0x8027A17C: jr          $ra
    // 0x8027A180: nop

    return;
    // 0x8027A180: nop

;}
RECOMP_FUNC void ovl_8024B800_func_8027A184(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8027A184: lwc1        $f4, 0x0($a2)
    ctx->f4.u32l = MEM_W(ctx->r6, 0X0);
    // 0x8027A188: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x8027A18C: c.lt.s      $f4, $f12
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f4.fl < ctx->f12.fl;
    // 0x8027A190: nop

    // 0x8027A194: bc1f        L_8027A1A0
    if (!c1cs) {
        // 0x8027A198: nop
    
            goto L_8027A1A0;
    }
    // 0x8027A198: nop

    // 0x8027A19C: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
L_8027A1A0:
    // 0x8027A1A0: lwc1        $f6, 0x4($a2)
    ctx->f6.u32l = MEM_W(ctx->r6, 0X4);
    // 0x8027A1A4: ori         $t6, $v1, 0x2
    ctx->r14 = ctx->r3 | 0X2;
    // 0x8027A1A8: c.lt.s      $f12, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f12.fl < ctx->f6.fl;
    // 0x8027A1AC: nop

    // 0x8027A1B0: bc1f        L_8027A1BC
    if (!c1cs) {
        // 0x8027A1B4: nop
    
            goto L_8027A1BC;
    }
    // 0x8027A1B4: nop

    // 0x8027A1B8: or          $v1, $t6, $zero
    ctx->r3 = ctx->r14 | 0;
L_8027A1BC:
    // 0x8027A1BC: lwc1        $f8, 0x8($a2)
    ctx->f8.u32l = MEM_W(ctx->r6, 0X8);
    // 0x8027A1C0: ori         $t7, $v1, 0x8
    ctx->r15 = ctx->r3 | 0X8;
    // 0x8027A1C4: c.lt.s      $f8, $f14
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 14);
    c1cs = ctx->f8.fl < ctx->f14.fl;
    // 0x8027A1C8: nop

    // 0x8027A1CC: bc1f        L_8027A1D8
    if (!c1cs) {
        // 0x8027A1D0: nop
    
            goto L_8027A1D8;
    }
    // 0x8027A1D0: nop

    // 0x8027A1D4: or          $v1, $t7, $zero
    ctx->r3 = ctx->r15 | 0;
L_8027A1D8:
    // 0x8027A1D8: lwc1        $f10, 0xC($a2)
    ctx->f10.u32l = MEM_W(ctx->r6, 0XC);
    // 0x8027A1DC: ori         $t8, $v1, 0x4
    ctx->r24 = ctx->r3 | 0X4;
    // 0x8027A1E0: c.lt.s      $f14, $f10
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f14.fl < ctx->f10.fl;
    // 0x8027A1E4: nop

    // 0x8027A1E8: bc1f        L_8027A1F4
    if (!c1cs) {
        // 0x8027A1EC: nop
    
            goto L_8027A1F4;
    }
    // 0x8027A1EC: nop

    // 0x8027A1F0: or          $v1, $t8, $zero
    ctx->r3 = ctx->r24 | 0;
L_8027A1F4:
    // 0x8027A1F4: jr          $ra
    // 0x8027A1F8: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    return;
    // 0x8027A1F8: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
;}
RECOMP_FUNC void ovl_8024B800_func_8027A1AC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8027A1AC: nop

    // 0x8027A1B0: bc1f        L_8027A1BC
    if (!c1cs) {
        // 0x8027A1B4: nop
    
            goto L_8027A1BC;
    }
    // 0x8027A1B4: nop

    // 0x8027A1B8: or          $v1, $t6, $zero
    ctx->r3 = ctx->r14 | 0;
L_8027A1BC:
    // 0x8027A1BC: lwc1        $f8, 0x8($a2)
    ctx->f8.u32l = MEM_W(ctx->r6, 0X8);
    // 0x8027A1C0: ori         $t7, $v1, 0x8
    ctx->r15 = ctx->r3 | 0X8;
    // 0x8027A1C4: c.lt.s      $f8, $f14
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 14);
    c1cs = ctx->f8.fl < ctx->f14.fl;
    // 0x8027A1C8: nop

    // 0x8027A1CC: bc1f        L_8027A1D8
    if (!c1cs) {
        // 0x8027A1D0: nop
    
            goto L_8027A1D8;
    }
    // 0x8027A1D0: nop

    // 0x8027A1D4: or          $v1, $t7, $zero
    ctx->r3 = ctx->r15 | 0;
L_8027A1D8:
    // 0x8027A1D8: lwc1        $f10, 0xC($a2)
    ctx->f10.u32l = MEM_W(ctx->r6, 0XC);
    // 0x8027A1DC: ori         $t8, $v1, 0x4
    ctx->r24 = ctx->r3 | 0X4;
    // 0x8027A1E0: c.lt.s      $f14, $f10
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f14.fl < ctx->f10.fl;
    // 0x8027A1E4: nop

    // 0x8027A1E8: bc1f        L_8027A1F4
    if (!c1cs) {
        // 0x8027A1EC: nop
    
            goto L_8027A1F4;
    }
    // 0x8027A1EC: nop

    // 0x8027A1F0: or          $v1, $t8, $zero
    ctx->r3 = ctx->r24 | 0;
L_8027A1F4:
    // 0x8027A1F4: jr          $ra
    // 0x8027A1F8: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    return;
    // 0x8027A1F8: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
;}
RECOMP_FUNC void ovl_8024B800_func_8027A1FC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8027A1FC: andi        $t6, $a3, 0x1
    ctx->r14 = ctx->r7 & 0X1;
    // 0x8027A200: beq         $t6, $zero, L_8027A214
    if (ctx->r14 == 0) {
        // 0x8027A204: andi        $t7, $a3, 0x2
        ctx->r15 = ctx->r7 & 0X2;
            goto L_8027A214;
    }
    // 0x8027A204: andi        $t7, $a3, 0x2
    ctx->r15 = ctx->r7 & 0X2;
    // 0x8027A208: lwc1        $f4, 0x0($a2)
    ctx->f4.u32l = MEM_W(ctx->r6, 0X0);
    // 0x8027A20C: nop

    // 0x8027A210: swc1        $f4, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->f4.u32l;
L_8027A214:
    // 0x8027A214: beq         $t7, $zero, L_8027A228
    if (ctx->r15 == 0) {
        // 0x8027A218: andi        $t8, $a3, 0x8
        ctx->r24 = ctx->r7 & 0X8;
            goto L_8027A228;
    }
    // 0x8027A218: andi        $t8, $a3, 0x8
    ctx->r24 = ctx->r7 & 0X8;
    // 0x8027A21C: lwc1        $f6, 0x4($a2)
    ctx->f6.u32l = MEM_W(ctx->r6, 0X4);
    // 0x8027A220: nop

    // 0x8027A224: swc1        $f6, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->f6.u32l;
L_8027A228:
    // 0x8027A228: beq         $t8, $zero, L_8027A23C
    if (ctx->r24 == 0) {
        // 0x8027A22C: andi        $t9, $a3, 0x4
        ctx->r25 = ctx->r7 & 0X4;
            goto L_8027A23C;
    }
    // 0x8027A22C: andi        $t9, $a3, 0x4
    ctx->r25 = ctx->r7 & 0X4;
    // 0x8027A230: lwc1        $f8, 0x8($a2)
    ctx->f8.u32l = MEM_W(ctx->r6, 0X8);
    // 0x8027A234: nop

    // 0x8027A238: swc1        $f8, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->f8.u32l;
L_8027A23C:
    // 0x8027A23C: beq         $t9, $zero, L_8027A250
    if (ctx->r25 == 0) {
        // 0x8027A240: nop
    
            goto L_8027A250;
    }
    // 0x8027A240: nop

    // 0x8027A244: lwc1        $f10, 0xC($a2)
    ctx->f10.u32l = MEM_W(ctx->r6, 0XC);
    // 0x8027A248: nop

    // 0x8027A24C: swc1        $f10, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->f10.u32l;
L_8027A250:
    // 0x8027A250: jr          $ra
    // 0x8027A254: nop

    return;
    // 0x8027A254: nop

;}
RECOMP_FUNC void ovl_8024B800_func_8027A204(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8027A204: andi        $t7, $a3, 0x2
    ctx->r15 = ctx->r7 & 0X2;
    // 0x8027A208: lwc1        $f4, 0x0($a2)
    ctx->f4.u32l = MEM_W(ctx->r6, 0X0);
    // 0x8027A20C: nop

    // 0x8027A210: swc1        $f4, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->f4.u32l;
    // 0x8027A214: beq         $t7, $zero, L_8027A228
    if (ctx->r15 == 0) {
        // 0x8027A218: andi        $t8, $a3, 0x8
        ctx->r24 = ctx->r7 & 0X8;
            goto L_8027A228;
    }
    // 0x8027A218: andi        $t8, $a3, 0x8
    ctx->r24 = ctx->r7 & 0X8;
    // 0x8027A21C: lwc1        $f6, 0x4($a2)
    ctx->f6.u32l = MEM_W(ctx->r6, 0X4);
    // 0x8027A220: nop

    // 0x8027A224: swc1        $f6, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->f6.u32l;
L_8027A228:
    // 0x8027A228: beq         $t8, $zero, L_8027A23C
    if (ctx->r24 == 0) {
        // 0x8027A22C: andi        $t9, $a3, 0x4
        ctx->r25 = ctx->r7 & 0X4;
            goto L_8027A23C;
    }
    // 0x8027A22C: andi        $t9, $a3, 0x4
    ctx->r25 = ctx->r7 & 0X4;
    // 0x8027A230: lwc1        $f8, 0x8($a2)
    ctx->f8.u32l = MEM_W(ctx->r6, 0X8);
    // 0x8027A234: nop

    // 0x8027A238: swc1        $f8, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->f8.u32l;
L_8027A23C:
    // 0x8027A23C: beq         $t9, $zero, L_8027A250
    if (ctx->r25 == 0) {
        // 0x8027A240: nop
    
            goto L_8027A250;
    }
    // 0x8027A240: nop

    // 0x8027A244: lwc1        $f10, 0xC($a2)
    ctx->f10.u32l = MEM_W(ctx->r6, 0XC);
    // 0x8027A248: nop

    // 0x8027A24C: swc1        $f10, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->f10.u32l;
L_8027A250:
    // 0x8027A250: jr          $ra
    // 0x8027A254: nop

    return;
    // 0x8027A254: nop

;}
RECOMP_FUNC void ovl_8024B800_func_8027A258(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8027A258: addiu       $sp, $sp, -0x10
    ctx->r29 = ADD32(ctx->r29, -0X10);
    // 0x8027A25C: lui         $t6, 0x8010
    ctx->r14 = S32(0X8010 << 16);
    // 0x8027A260: lhu         $t6, 0x6760($t6)
    ctx->r14 = MEM_HU(ctx->r14, 0X6760);
    // 0x8027A264: swc1        $f20, 0xC($sp)
    MEM_W(0XC, ctx->r29) = ctx->f20.u32l;
    // 0x8027A268: mtc1        $a2, $f20
    ctx->f20.u32l = ctx->r6;
    // 0x8027A26C: bne         $t6, $zero, L_8027A2C8
    if (ctx->r14 != 0) {
        // 0x8027A270: swc1        $f21, 0x8($sp)
        MEM_W(0X8, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
            goto L_8027A2C8;
    }
    // 0x8027A270: swc1        $f21, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x8027A274: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x8027A278: lui         $at, 0x8010
    ctx->r1 = S32(0X8010 << 16);
    // 0x8027A27C: sh          $t7, 0x6760($at)
    MEM_H(0X6760, ctx->r1) = ctx->r15;
    // 0x8027A280: lui         $at, 0x8010
    ctx->r1 = S32(0X8010 << 16);
    // 0x8027A284: swc1        $f12, 0x676C($at)
    MEM_W(0X676C, ctx->r1) = ctx->f12.u32l;
    // 0x8027A288: lui         $at, 0x8010
    ctx->r1 = S32(0X8010 << 16);
    // 0x8027A28C: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x8027A290: swc1        $f14, 0x6764($at)
    MEM_W(0X6764, ctx->r1) = ctx->f14.u32l;
    // 0x8027A294: lui         $at, 0x8010
    ctx->r1 = S32(0X8010 << 16);
    // 0x8027A298: swc1        $f0, 0x6768($at)
    MEM_W(0X6768, ctx->r1) = ctx->f0.u32l;
    // 0x8027A29C: lui         $at, 0x8010
    ctx->r1 = S32(0X8010 << 16);
    // 0x8027A2A0: sb          $zero, 0x6762($at)
    MEM_B(0X6762, ctx->r1) = 0;
    // 0x8027A2A4: lui         $at, 0x8010
    ctx->r1 = S32(0X8010 << 16);
    // 0x8027A2A8: swc1        $f0, 0x6770($at)
    MEM_W(0X6770, ctx->r1) = ctx->f0.u32l;
    // 0x8027A2AC: lui         $at, 0x8010
    ctx->r1 = S32(0X8010 << 16);
    // 0x8027A2B0: swc1        $f20, 0x677C($at)
    MEM_W(0X677C, ctx->r1) = ctx->f20.u32l;
    // 0x8027A2B4: lui         $at, 0x8010
    ctx->r1 = S32(0X8010 << 16);
    // 0x8027A2B8: swc1        $f20, 0x6780($at)
    MEM_W(0X6780, ctx->r1) = ctx->f20.u32l;
    // 0x8027A2BC: lui         $at, 0x8010
    ctx->r1 = S32(0X8010 << 16);
    // 0x8027A2C0: b           L_8027A41C
    // 0x8027A2C4: swc1        $f20, 0x6784($at)
    MEM_W(0X6784, ctx->r1) = ctx->f20.u32l;
        goto L_8027A41C;
    // 0x8027A2C4: swc1        $f20, 0x6784($at)
    MEM_W(0X6784, ctx->r1) = ctx->f20.u32l;
L_8027A2C8:
    // 0x8027A2C8: lui         $v0, 0x8010
    ctx->r2 = S32(0X8010 << 16);
    // 0x8027A2CC: addiu       $v0, $v0, 0x6794
    ctx->r2 = ADD32(ctx->r2, 0X6794);
    // 0x8027A2D0: lhu         $t8, 0x0($v0)
    ctx->r24 = MEM_HU(ctx->r2, 0X0);
    // 0x8027A2D4: addiu       $v1, $zero, 0x2
    ctx->r3 = ADD32(0, 0X2);
    // 0x8027A2D8: bne         $t8, $zero, L_8027A310
    if (ctx->r24 != 0) {
        // 0x8027A2DC: addiu       $a0, $zero, 0xA
        ctx->r4 = ADD32(0, 0XA);
            goto L_8027A310;
    }
    // 0x8027A2DC: addiu       $a0, $zero, 0xA
    ctx->r4 = ADD32(0, 0XA);
    // 0x8027A2E0: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x8027A2E4: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x8027A2E8: sh          $t9, 0x0($v0)
    MEM_H(0X0, ctx->r2) = ctx->r25;
    // 0x8027A2EC: swc1        $f12, 0xC($v0)
    MEM_W(0XC, ctx->r2) = ctx->f12.u32l;
    // 0x8027A2F0: swc1        $f14, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->f14.u32l;
    // 0x8027A2F4: sb          $zero, 0x2($v0)
    MEM_B(0X2, ctx->r2) = 0;
    // 0x8027A2F8: swc1        $f20, 0x1C($v0)
    MEM_W(0X1C, ctx->r2) = ctx->f20.u32l;
    // 0x8027A2FC: swc1        $f20, 0x20($v0)
    MEM_W(0X20, ctx->r2) = ctx->f20.u32l;
    // 0x8027A300: swc1        $f20, 0x24($v0)
    MEM_W(0X24, ctx->r2) = ctx->f20.u32l;
    // 0x8027A304: swc1        $f0, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->f0.u32l;
    // 0x8027A308: b           L_8027A41C
    // 0x8027A30C: swc1        $f0, 0x10($v0)
    MEM_W(0X10, ctx->r2) = ctx->f0.u32l;
        goto L_8027A41C;
    // 0x8027A30C: swc1        $f0, 0x10($v0)
    MEM_W(0X10, ctx->r2) = ctx->f0.u32l;
L_8027A310:
    // 0x8027A310: addiu       $v0, $v0, 0x34
    ctx->r2 = ADD32(ctx->r2, 0X34);
L_8027A314:
    // 0x8027A314: lhu         $t0, 0x0($v0)
    ctx->r8 = MEM_HU(ctx->r2, 0X0);
    // 0x8027A318: addiu       $v1, $v1, 0x4
    ctx->r3 = ADD32(ctx->r3, 0X4);
    // 0x8027A31C: bne         $t0, $zero, L_8027A354
    if (ctx->r8 != 0) {
        // 0x8027A320: nop
    
            goto L_8027A354;
    }
    // 0x8027A320: nop

    // 0x8027A324: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x8027A328: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
    // 0x8027A32C: sh          $t1, 0x0($v0)
    MEM_H(0X0, ctx->r2) = ctx->r9;
    // 0x8027A330: swc1        $f12, 0xC($v0)
    MEM_W(0XC, ctx->r2) = ctx->f12.u32l;
    // 0x8027A334: swc1        $f14, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->f14.u32l;
    // 0x8027A338: sb          $zero, 0x2($v0)
    MEM_B(0X2, ctx->r2) = 0;
    // 0x8027A33C: swc1        $f20, 0x1C($v0)
    MEM_W(0X1C, ctx->r2) = ctx->f20.u32l;
    // 0x8027A340: swc1        $f20, 0x20($v0)
    MEM_W(0X20, ctx->r2) = ctx->f20.u32l;
    // 0x8027A344: swc1        $f20, 0x24($v0)
    MEM_W(0X24, ctx->r2) = ctx->f20.u32l;
    // 0x8027A348: swc1        $f0, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->f0.u32l;
    // 0x8027A34C: b           L_8027A41C
    // 0x8027A350: swc1        $f0, 0x10($v0)
    MEM_W(0X10, ctx->r2) = ctx->f0.u32l;
        goto L_8027A41C;
    // 0x8027A350: swc1        $f0, 0x10($v0)
    MEM_W(0X10, ctx->r2) = ctx->f0.u32l;
L_8027A354:
    // 0x8027A354: lhu         $t2, 0x34($v0)
    ctx->r10 = MEM_HU(ctx->r2, 0X34);
    // 0x8027A358: addiu       $v0, $v0, 0x34
    ctx->r2 = ADD32(ctx->r2, 0X34);
    // 0x8027A35C: bne         $t2, $zero, L_8027A394
    if (ctx->r10 != 0) {
        // 0x8027A360: nop
    
            goto L_8027A394;
    }
    // 0x8027A360: nop

    // 0x8027A364: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x8027A368: addiu       $t3, $zero, 0x1
    ctx->r11 = ADD32(0, 0X1);
    // 0x8027A36C: sh          $t3, 0x0($v0)
    MEM_H(0X0, ctx->r2) = ctx->r11;
    // 0x8027A370: swc1        $f12, 0xC($v0)
    MEM_W(0XC, ctx->r2) = ctx->f12.u32l;
    // 0x8027A374: swc1        $f14, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->f14.u32l;
    // 0x8027A378: sb          $zero, 0x2($v0)
    MEM_B(0X2, ctx->r2) = 0;
    // 0x8027A37C: swc1        $f20, 0x1C($v0)
    MEM_W(0X1C, ctx->r2) = ctx->f20.u32l;
    // 0x8027A380: swc1        $f20, 0x20($v0)
    MEM_W(0X20, ctx->r2) = ctx->f20.u32l;
    // 0x8027A384: swc1        $f20, 0x24($v0)
    MEM_W(0X24, ctx->r2) = ctx->f20.u32l;
    // 0x8027A388: swc1        $f0, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->f0.u32l;
    // 0x8027A38C: b           L_8027A41C
    // 0x8027A390: swc1        $f0, 0x10($v0)
    MEM_W(0X10, ctx->r2) = ctx->f0.u32l;
        goto L_8027A41C;
    // 0x8027A390: swc1        $f0, 0x10($v0)
    MEM_W(0X10, ctx->r2) = ctx->f0.u32l;
L_8027A394:
    // 0x8027A394: lhu         $t4, 0x34($v0)
    ctx->r12 = MEM_HU(ctx->r2, 0X34);
    // 0x8027A398: addiu       $v0, $v0, 0x34
    ctx->r2 = ADD32(ctx->r2, 0X34);
    // 0x8027A39C: bne         $t4, $zero, L_8027A3D4
    if (ctx->r12 != 0) {
        // 0x8027A3A0: nop
    
            goto L_8027A3D4;
    }
    // 0x8027A3A0: nop

    // 0x8027A3A4: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x8027A3A8: addiu       $t5, $zero, 0x1
    ctx->r13 = ADD32(0, 0X1);
    // 0x8027A3AC: sh          $t5, 0x0($v0)
    MEM_H(0X0, ctx->r2) = ctx->r13;
    // 0x8027A3B0: swc1        $f12, 0xC($v0)
    MEM_W(0XC, ctx->r2) = ctx->f12.u32l;
    // 0x8027A3B4: swc1        $f14, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->f14.u32l;
    // 0x8027A3B8: sb          $zero, 0x2($v0)
    MEM_B(0X2, ctx->r2) = 0;
    // 0x8027A3BC: swc1        $f20, 0x1C($v0)
    MEM_W(0X1C, ctx->r2) = ctx->f20.u32l;
    // 0x8027A3C0: swc1        $f20, 0x20($v0)
    MEM_W(0X20, ctx->r2) = ctx->f20.u32l;
    // 0x8027A3C4: swc1        $f20, 0x24($v0)
    MEM_W(0X24, ctx->r2) = ctx->f20.u32l;
    // 0x8027A3C8: swc1        $f0, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->f0.u32l;
    // 0x8027A3CC: b           L_8027A41C
    // 0x8027A3D0: swc1        $f0, 0x10($v0)
    MEM_W(0X10, ctx->r2) = ctx->f0.u32l;
        goto L_8027A41C;
    // 0x8027A3D0: swc1        $f0, 0x10($v0)
    MEM_W(0X10, ctx->r2) = ctx->f0.u32l;
L_8027A3D4:
    // 0x8027A3D4: lhu         $t6, 0x34($v0)
    ctx->r14 = MEM_HU(ctx->r2, 0X34);
    // 0x8027A3D8: addiu       $v0, $v0, 0x34
    ctx->r2 = ADD32(ctx->r2, 0X34);
    // 0x8027A3DC: bne         $t6, $zero, L_8027A414
    if (ctx->r14 != 0) {
        // 0x8027A3E0: nop
    
            goto L_8027A414;
    }
    // 0x8027A3E0: nop

    // 0x8027A3E4: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x8027A3E8: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x8027A3EC: sh          $t7, 0x0($v0)
    MEM_H(0X0, ctx->r2) = ctx->r15;
    // 0x8027A3F0: swc1        $f12, 0xC($v0)
    MEM_W(0XC, ctx->r2) = ctx->f12.u32l;
    // 0x8027A3F4: swc1        $f14, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->f14.u32l;
    // 0x8027A3F8: sb          $zero, 0x2($v0)
    MEM_B(0X2, ctx->r2) = 0;
    // 0x8027A3FC: swc1        $f20, 0x1C($v0)
    MEM_W(0X1C, ctx->r2) = ctx->f20.u32l;
    // 0x8027A400: swc1        $f20, 0x20($v0)
    MEM_W(0X20, ctx->r2) = ctx->f20.u32l;
    // 0x8027A404: swc1        $f20, 0x24($v0)
    MEM_W(0X24, ctx->r2) = ctx->f20.u32l;
    // 0x8027A408: swc1        $f0, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->f0.u32l;
    // 0x8027A40C: b           L_8027A41C
    // 0x8027A410: swc1        $f0, 0x10($v0)
    MEM_W(0X10, ctx->r2) = ctx->f0.u32l;
        goto L_8027A41C;
    // 0x8027A410: swc1        $f0, 0x10($v0)
    MEM_W(0X10, ctx->r2) = ctx->f0.u32l;
L_8027A414:
    // 0x8027A414: bne         $v1, $a0, L_8027A314
    if (ctx->r3 != ctx->r4) {
        // 0x8027A418: addiu       $v0, $v0, 0x34
        ctx->r2 = ADD32(ctx->r2, 0X34);
            goto L_8027A314;
    }
    // 0x8027A418: addiu       $v0, $v0, 0x34
    ctx->r2 = ADD32(ctx->r2, 0X34);
L_8027A41C:
    // 0x8027A41C: lwc1        $f21, 0x8($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X8);
    // 0x8027A420: lwc1        $f20, 0xC($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0XC);
    // 0x8027A424: jr          $ra
    // 0x8027A428: addiu       $sp, $sp, 0x10
    ctx->r29 = ADD32(ctx->r29, 0X10);
    return;
    // 0x8027A428: addiu       $sp, $sp, 0x10
    ctx->r29 = ADD32(ctx->r29, 0X10);
;}
RECOMP_FUNC void ovl_8024B800_func_8027A314(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
L_8027A314:
    // 0x8027A314: lhu         $t0, 0x0($v0)
    ctx->r8 = MEM_HU(ctx->r2, 0X0);
    // 0x8027A318: addiu       $v1, $v1, 0x4
    ctx->r3 = ADD32(ctx->r3, 0X4);
    // 0x8027A31C: bne         $t0, $zero, L_8027A354
    if (ctx->r8 != 0) {
        // 0x8027A320: nop
    
            goto L_8027A354;
    }
    // 0x8027A320: nop

    // 0x8027A324: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x8027A328: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
    // 0x8027A32C: sh          $t1, 0x0($v0)
    MEM_H(0X0, ctx->r2) = ctx->r9;
    // 0x8027A330: swc1        $f12, 0xC($v0)
    MEM_W(0XC, ctx->r2) = ctx->f12.u32l;
    // 0x8027A334: swc1        $f14, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->f14.u32l;
    // 0x8027A338: sb          $zero, 0x2($v0)
    MEM_B(0X2, ctx->r2) = 0;
    // 0x8027A33C: swc1        $f20, 0x1C($v0)
    MEM_W(0X1C, ctx->r2) = ctx->f20.u32l;
    // 0x8027A340: swc1        $f20, 0x20($v0)
    MEM_W(0X20, ctx->r2) = ctx->f20.u32l;
    // 0x8027A344: swc1        $f20, 0x24($v0)
    MEM_W(0X24, ctx->r2) = ctx->f20.u32l;
    // 0x8027A348: swc1        $f0, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->f0.u32l;
    // 0x8027A34C: b           L_8027A41C
    // 0x8027A350: swc1        $f0, 0x10($v0)
    MEM_W(0X10, ctx->r2) = ctx->f0.u32l;
        goto L_8027A41C;
    // 0x8027A350: swc1        $f0, 0x10($v0)
    MEM_W(0X10, ctx->r2) = ctx->f0.u32l;
L_8027A354:
    // 0x8027A354: lhu         $t2, 0x34($v0)
    ctx->r10 = MEM_HU(ctx->r2, 0X34);
    // 0x8027A358: addiu       $v0, $v0, 0x34
    ctx->r2 = ADD32(ctx->r2, 0X34);
    // 0x8027A35C: bne         $t2, $zero, L_8027A394
    if (ctx->r10 != 0) {
        // 0x8027A360: nop
    
            goto L_8027A394;
    }
    // 0x8027A360: nop

    // 0x8027A364: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x8027A368: addiu       $t3, $zero, 0x1
    ctx->r11 = ADD32(0, 0X1);
    // 0x8027A36C: sh          $t3, 0x0($v0)
    MEM_H(0X0, ctx->r2) = ctx->r11;
    // 0x8027A370: swc1        $f12, 0xC($v0)
    MEM_W(0XC, ctx->r2) = ctx->f12.u32l;
    // 0x8027A374: swc1        $f14, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->f14.u32l;
    // 0x8027A378: sb          $zero, 0x2($v0)
    MEM_B(0X2, ctx->r2) = 0;
    // 0x8027A37C: swc1        $f20, 0x1C($v0)
    MEM_W(0X1C, ctx->r2) = ctx->f20.u32l;
    // 0x8027A380: swc1        $f20, 0x20($v0)
    MEM_W(0X20, ctx->r2) = ctx->f20.u32l;
    // 0x8027A384: swc1        $f20, 0x24($v0)
    MEM_W(0X24, ctx->r2) = ctx->f20.u32l;
    // 0x8027A388: swc1        $f0, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->f0.u32l;
    // 0x8027A38C: b           L_8027A41C
    // 0x8027A390: swc1        $f0, 0x10($v0)
    MEM_W(0X10, ctx->r2) = ctx->f0.u32l;
        goto L_8027A41C;
    // 0x8027A390: swc1        $f0, 0x10($v0)
    MEM_W(0X10, ctx->r2) = ctx->f0.u32l;
L_8027A394:
    // 0x8027A394: lhu         $t4, 0x34($v0)
    ctx->r12 = MEM_HU(ctx->r2, 0X34);
    // 0x8027A398: addiu       $v0, $v0, 0x34
    ctx->r2 = ADD32(ctx->r2, 0X34);
    // 0x8027A39C: bne         $t4, $zero, L_8027A3D4
    if (ctx->r12 != 0) {
        // 0x8027A3A0: nop
    
            goto L_8027A3D4;
    }
    // 0x8027A3A0: nop

    // 0x8027A3A4: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x8027A3A8: addiu       $t5, $zero, 0x1
    ctx->r13 = ADD32(0, 0X1);
    // 0x8027A3AC: sh          $t5, 0x0($v0)
    MEM_H(0X0, ctx->r2) = ctx->r13;
    // 0x8027A3B0: swc1        $f12, 0xC($v0)
    MEM_W(0XC, ctx->r2) = ctx->f12.u32l;
    // 0x8027A3B4: swc1        $f14, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->f14.u32l;
    // 0x8027A3B8: sb          $zero, 0x2($v0)
    MEM_B(0X2, ctx->r2) = 0;
    // 0x8027A3BC: swc1        $f20, 0x1C($v0)
    MEM_W(0X1C, ctx->r2) = ctx->f20.u32l;
    // 0x8027A3C0: swc1        $f20, 0x20($v0)
    MEM_W(0X20, ctx->r2) = ctx->f20.u32l;
    // 0x8027A3C4: swc1        $f20, 0x24($v0)
    MEM_W(0X24, ctx->r2) = ctx->f20.u32l;
    // 0x8027A3C8: swc1        $f0, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->f0.u32l;
    // 0x8027A3CC: b           L_8027A41C
    // 0x8027A3D0: swc1        $f0, 0x10($v0)
    MEM_W(0X10, ctx->r2) = ctx->f0.u32l;
        goto L_8027A41C;
    // 0x8027A3D0: swc1        $f0, 0x10($v0)
    MEM_W(0X10, ctx->r2) = ctx->f0.u32l;
L_8027A3D4:
    // 0x8027A3D4: lhu         $t6, 0x34($v0)
    ctx->r14 = MEM_HU(ctx->r2, 0X34);
    // 0x8027A3D8: addiu       $v0, $v0, 0x34
    ctx->r2 = ADD32(ctx->r2, 0X34);
    // 0x8027A3DC: bne         $t6, $zero, L_8027A414
    if (ctx->r14 != 0) {
        // 0x8027A3E0: nop
    
            goto L_8027A414;
    }
    // 0x8027A3E0: nop

    // 0x8027A3E4: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x8027A3E8: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x8027A3EC: sh          $t7, 0x0($v0)
    MEM_H(0X0, ctx->r2) = ctx->r15;
    // 0x8027A3F0: swc1        $f12, 0xC($v0)
    MEM_W(0XC, ctx->r2) = ctx->f12.u32l;
    // 0x8027A3F4: swc1        $f14, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->f14.u32l;
    // 0x8027A3F8: sb          $zero, 0x2($v0)
    MEM_B(0X2, ctx->r2) = 0;
    // 0x8027A3FC: swc1        $f20, 0x1C($v0)
    MEM_W(0X1C, ctx->r2) = ctx->f20.u32l;
    // 0x8027A400: swc1        $f20, 0x20($v0)
    MEM_W(0X20, ctx->r2) = ctx->f20.u32l;
    // 0x8027A404: swc1        $f20, 0x24($v0)
    MEM_W(0X24, ctx->r2) = ctx->f20.u32l;
    // 0x8027A408: swc1        $f0, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->f0.u32l;
    // 0x8027A40C: b           L_8027A41C
    // 0x8027A410: swc1        $f0, 0x10($v0)
    MEM_W(0X10, ctx->r2) = ctx->f0.u32l;
        goto L_8027A41C;
    // 0x8027A410: swc1        $f0, 0x10($v0)
    MEM_W(0X10, ctx->r2) = ctx->f0.u32l;
L_8027A414:
    // 0x8027A414: bne         $v1, $a0, L_8027A314
    if (ctx->r3 != ctx->r4) {
        // 0x8027A418: addiu       $v0, $v0, 0x34
        ctx->r2 = ADD32(ctx->r2, 0X34);
            goto L_8027A314;
    }
    // 0x8027A418: addiu       $v0, $v0, 0x34
    ctx->r2 = ADD32(ctx->r2, 0X34);
L_8027A41C:
    // 0x8027A41C: lwc1        $f21, 0x8($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X8);
    // 0x8027A420: lwc1        $f20, 0xC($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0XC);
    // 0x8027A424: jr          $ra
    // 0x8027A428: addiu       $sp, $sp, 0x10
    ctx->r29 = ADD32(ctx->r29, 0X10);
    return;
    // 0x8027A428: addiu       $sp, $sp, 0x10
    ctx->r29 = ADD32(ctx->r29, 0X10);
;}
RECOMP_FUNC void ovl_8024B800_func_8027A330(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
L_8027A314:
    // 0x8027A330: swc1        $f12, 0xC($v0)
    MEM_W(0XC, ctx->r2) = ctx->f12.u32l;
    // 0x8027A334: swc1        $f14, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->f14.u32l;
    // 0x8027A338: sb          $zero, 0x2($v0)
    MEM_B(0X2, ctx->r2) = 0;
    // 0x8027A33C: swc1        $f20, 0x1C($v0)
    MEM_W(0X1C, ctx->r2) = ctx->f20.u32l;
    // 0x8027A340: swc1        $f20, 0x20($v0)
    MEM_W(0X20, ctx->r2) = ctx->f20.u32l;
    // 0x8027A344: swc1        $f20, 0x24($v0)
    MEM_W(0X24, ctx->r2) = ctx->f20.u32l;
    // 0x8027A348: swc1        $f0, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->f0.u32l;
    // 0x8027A34C: b           L_8027A41C
    // 0x8027A350: swc1        $f0, 0x10($v0)
    MEM_W(0X10, ctx->r2) = ctx->f0.u32l;
        goto L_8027A41C;
    // 0x8027A350: swc1        $f0, 0x10($v0)
    MEM_W(0X10, ctx->r2) = ctx->f0.u32l;
    // 0x8027A354: lhu         $t2, 0x34($v0)
    ctx->r10 = MEM_HU(ctx->r2, 0X34);
    // 0x8027A358: addiu       $v0, $v0, 0x34
    ctx->r2 = ADD32(ctx->r2, 0X34);
    // 0x8027A35C: bne         $t2, $zero, L_8027A394
    if (ctx->r10 != 0) {
        // 0x8027A360: nop
    
            goto L_8027A394;
    }
    // 0x8027A360: nop

    // 0x8027A364: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x8027A368: addiu       $t3, $zero, 0x1
    ctx->r11 = ADD32(0, 0X1);
    // 0x8027A36C: sh          $t3, 0x0($v0)
    MEM_H(0X0, ctx->r2) = ctx->r11;
    // 0x8027A370: swc1        $f12, 0xC($v0)
    MEM_W(0XC, ctx->r2) = ctx->f12.u32l;
    // 0x8027A374: swc1        $f14, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->f14.u32l;
    // 0x8027A378: sb          $zero, 0x2($v0)
    MEM_B(0X2, ctx->r2) = 0;
    // 0x8027A37C: swc1        $f20, 0x1C($v0)
    MEM_W(0X1C, ctx->r2) = ctx->f20.u32l;
    // 0x8027A380: swc1        $f20, 0x20($v0)
    MEM_W(0X20, ctx->r2) = ctx->f20.u32l;
    // 0x8027A384: swc1        $f20, 0x24($v0)
    MEM_W(0X24, ctx->r2) = ctx->f20.u32l;
    // 0x8027A388: swc1        $f0, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->f0.u32l;
    // 0x8027A38C: b           L_8027A41C
    // 0x8027A390: swc1        $f0, 0x10($v0)
    MEM_W(0X10, ctx->r2) = ctx->f0.u32l;
        goto L_8027A41C;
    // 0x8027A390: swc1        $f0, 0x10($v0)
    MEM_W(0X10, ctx->r2) = ctx->f0.u32l;
L_8027A394:
    // 0x8027A394: lhu         $t4, 0x34($v0)
    ctx->r12 = MEM_HU(ctx->r2, 0X34);
    // 0x8027A398: addiu       $v0, $v0, 0x34
    ctx->r2 = ADD32(ctx->r2, 0X34);
    // 0x8027A39C: bne         $t4, $zero, L_8027A3D4
    if (ctx->r12 != 0) {
        // 0x8027A3A0: nop
    
            goto L_8027A3D4;
    }
    // 0x8027A3A0: nop

    // 0x8027A3A4: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x8027A3A8: addiu       $t5, $zero, 0x1
    ctx->r13 = ADD32(0, 0X1);
    // 0x8027A3AC: sh          $t5, 0x0($v0)
    MEM_H(0X0, ctx->r2) = ctx->r13;
    // 0x8027A3B0: swc1        $f12, 0xC($v0)
    MEM_W(0XC, ctx->r2) = ctx->f12.u32l;
    // 0x8027A3B4: swc1        $f14, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->f14.u32l;
    // 0x8027A3B8: sb          $zero, 0x2($v0)
    MEM_B(0X2, ctx->r2) = 0;
    // 0x8027A3BC: swc1        $f20, 0x1C($v0)
    MEM_W(0X1C, ctx->r2) = ctx->f20.u32l;
    // 0x8027A3C0: swc1        $f20, 0x20($v0)
    MEM_W(0X20, ctx->r2) = ctx->f20.u32l;
    // 0x8027A3C4: swc1        $f20, 0x24($v0)
    MEM_W(0X24, ctx->r2) = ctx->f20.u32l;
    // 0x8027A3C8: swc1        $f0, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->f0.u32l;
    // 0x8027A3CC: b           L_8027A41C
    // 0x8027A3D0: swc1        $f0, 0x10($v0)
    MEM_W(0X10, ctx->r2) = ctx->f0.u32l;
        goto L_8027A41C;
    // 0x8027A3D0: swc1        $f0, 0x10($v0)
    MEM_W(0X10, ctx->r2) = ctx->f0.u32l;
L_8027A3D4:
    // 0x8027A3D4: lhu         $t6, 0x34($v0)
    ctx->r14 = MEM_HU(ctx->r2, 0X34);
    // 0x8027A3D8: addiu       $v0, $v0, 0x34
    ctx->r2 = ADD32(ctx->r2, 0X34);
    // 0x8027A3DC: bne         $t6, $zero, L_8027A414
    if (ctx->r14 != 0) {
        // 0x8027A3E0: nop
    
            goto L_8027A414;
    }
    // 0x8027A3E0: nop

    // 0x8027A3E4: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x8027A3E8: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x8027A3EC: sh          $t7, 0x0($v0)
    MEM_H(0X0, ctx->r2) = ctx->r15;
    // 0x8027A3F0: swc1        $f12, 0xC($v0)
    MEM_W(0XC, ctx->r2) = ctx->f12.u32l;
    // 0x8027A3F4: swc1        $f14, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->f14.u32l;
    // 0x8027A3F8: sb          $zero, 0x2($v0)
    MEM_B(0X2, ctx->r2) = 0;
    // 0x8027A3FC: swc1        $f20, 0x1C($v0)
    MEM_W(0X1C, ctx->r2) = ctx->f20.u32l;
    // 0x8027A400: swc1        $f20, 0x20($v0)
    MEM_W(0X20, ctx->r2) = ctx->f20.u32l;
    // 0x8027A404: swc1        $f20, 0x24($v0)
    MEM_W(0X24, ctx->r2) = ctx->f20.u32l;
    // 0x8027A408: swc1        $f0, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->f0.u32l;
    // 0x8027A40C: b           L_8027A41C
    // 0x8027A410: swc1        $f0, 0x10($v0)
    MEM_W(0X10, ctx->r2) = ctx->f0.u32l;
        goto L_8027A41C;
    // 0x8027A410: swc1        $f0, 0x10($v0)
    MEM_W(0X10, ctx->r2) = ctx->f0.u32l;
L_8027A414:
    // 0x8027A414: bne         $v1, $a0, L_8027A314
    if (ctx->r3 != ctx->r4) {
            // 0x8027A418: addiu       $v0, $v0, 0x34
    ctx->r2 = ADD32(ctx->r2, 0X34);
    ovl_8024B800_func_8027A314(rdram, ctx);
    return;
    }
    // 0x8027A418: addiu       $v0, $v0, 0x34
    ctx->r2 = ADD32(ctx->r2, 0X34);
L_8027A41C:
    // 0x8027A41C: lwc1        $f21, 0x8($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X8);
    // 0x8027A420: lwc1        $f20, 0xC($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0XC);
    // 0x8027A424: jr          $ra
    // 0x8027A428: addiu       $sp, $sp, 0x10
    ctx->r29 = ADD32(ctx->r29, 0X10);
    return;
    // 0x8027A428: addiu       $sp, $sp, 0x10
    ctx->r29 = ADD32(ctx->r29, 0X10);
;}
RECOMP_FUNC void ovl_8024B800_func_8027A3E0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
L_8027A314:
    // 0x8027A3E0: nop

    // 0x8027A3E4: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x8027A3E8: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x8027A3EC: sh          $t7, 0x0($v0)
    MEM_H(0X0, ctx->r2) = ctx->r15;
    // 0x8027A3F0: swc1        $f12, 0xC($v0)
    MEM_W(0XC, ctx->r2) = ctx->f12.u32l;
    // 0x8027A3F4: swc1        $f14, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->f14.u32l;
    // 0x8027A3F8: sb          $zero, 0x2($v0)
    MEM_B(0X2, ctx->r2) = 0;
    // 0x8027A3FC: swc1        $f20, 0x1C($v0)
    MEM_W(0X1C, ctx->r2) = ctx->f20.u32l;
    // 0x8027A400: swc1        $f20, 0x20($v0)
    MEM_W(0X20, ctx->r2) = ctx->f20.u32l;
    // 0x8027A404: swc1        $f20, 0x24($v0)
    MEM_W(0X24, ctx->r2) = ctx->f20.u32l;
    // 0x8027A408: swc1        $f0, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->f0.u32l;
    // 0x8027A40C: b           L_8027A41C
    // 0x8027A410: swc1        $f0, 0x10($v0)
    MEM_W(0X10, ctx->r2) = ctx->f0.u32l;
        goto L_8027A41C;
    // 0x8027A410: swc1        $f0, 0x10($v0)
    MEM_W(0X10, ctx->r2) = ctx->f0.u32l;
    // 0x8027A414: bne         $v1, $a0, L_8027A314
    if (ctx->r3 != ctx->r4) {
            // 0x8027A418: addiu       $v0, $v0, 0x34
    ctx->r2 = ADD32(ctx->r2, 0X34);
    ovl_8024B800_func_8027A314(rdram, ctx);
    return;
    }
    // 0x8027A418: addiu       $v0, $v0, 0x34
    ctx->r2 = ADD32(ctx->r2, 0X34);
L_8027A41C:
    // 0x8027A41C: lwc1        $f21, 0x8($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X8);
    // 0x8027A420: lwc1        $f20, 0xC($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0XC);
    // 0x8027A424: jr          $ra
    // 0x8027A428: addiu       $sp, $sp, 0x10
    ctx->r29 = ADD32(ctx->r29, 0X10);
    return;
    // 0x8027A428: addiu       $sp, $sp, 0x10
    ctx->r29 = ADD32(ctx->r29, 0X10);
;}
RECOMP_FUNC void ovl_8024B800_func_8027A42C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8027A42C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8027A430: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8027A434: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x8027A438: mtc1        $a2, $f12
    ctx->f12.u32l = ctx->r6;
    // 0x8027A43C: mtc1        $a3, $f14
    ctx->f14.u32l = ctx->r7;
    // 0x8027A440: lw          $v0, 0x18($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X18);
    // 0x8027A444: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x8027A448: or          $v1, $a1, $zero
    ctx->r3 = ctx->r5 | 0;
    // 0x8027A44C: addiu       $a0, $zero, 0xB
    ctx->r4 = ADD32(0, 0XB);
    // 0x8027A450: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
L_8027A454:
    // 0x8027A454: lhu         $t6, 0xC($v0)
    ctx->r14 = MEM_HU(ctx->r2, 0XC);
    // 0x8027A458: nop

    // 0x8027A45C: beq         $t6, $zero, L_8027A490
    if (ctx->r14 == 0) {
        // 0x8027A460: nop
    
            goto L_8027A490;
    }
    // 0x8027A460: nop

    // 0x8027A464: lwc1        $f4, 0x4C($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X4C);
    // 0x8027A468: lwc1        $f6, 0x44($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0X44);
    // 0x8027A46C: sub.s       $f0, $f4, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f0.fl = ctx->f4.fl - ctx->f12.fl;
    // 0x8027A470: sh          $a2, 0x0($v1)
    MEM_H(0X0, ctx->r3) = ctx->r6;
    // 0x8027A474: mul.s       $f8, $f0, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = MUL_S(ctx->f0.fl, ctx->f0.fl);
    // 0x8027A478: sub.s       $f2, $f6, $f14
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f2.fl = ctx->f6.fl - ctx->f14.fl;
    // 0x8027A47C: addiu       $v1, $v1, 0x8
    ctx->r3 = ADD32(ctx->r3, 0X8);
    // 0x8027A480: addiu       $a3, $a3, 0x1
    ctx->r7 = ADD32(ctx->r7, 0X1);
    // 0x8027A484: mul.s       $f10, $f2, $f2
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f10.fl = MUL_S(ctx->f2.fl, ctx->f2.fl);
    // 0x8027A488: add.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x8027A48C: swc1        $f16, -0x4($v1)
    MEM_W(-0X4, ctx->r3) = ctx->f16.u32l;
L_8027A490:
    // 0x8027A490: addiu       $a2, $a2, 0x1
    ctx->r6 = ADD32(ctx->r6, 0X1);
    // 0x8027A494: bne         $a2, $a0, L_8027A454
    if (ctx->r6 != ctx->r4) {
        // 0x8027A498: addiu       $v0, $v0, 0xF8
        ctx->r2 = ADD32(ctx->r2, 0XF8);
            goto L_8027A454;
    }
    // 0x8027A498: addiu       $v0, $v0, 0xF8
    ctx->r2 = ADD32(ctx->r2, 0XF8);
    // 0x8027A49C: addiu       $a1, $a3, -0x1
    ctx->r5 = ADD32(ctx->r7, -0X1);
    // 0x8027A4A0: sll         $t7, $a1, 16
    ctx->r15 = S32(ctx->r5 << 16);
    // 0x8027A4A4: lw          $a2, 0x1C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X1C);
    // 0x8027A4A8: sra         $a1, $t7, 16
    ctx->r5 = S32(SIGNED(ctx->r15) >> 16);
    // 0x8027A4AC: jal         0x8005DE74
    // 0x8027A4B0: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    func_8005DE74(rdram, ctx);
        goto after_0;
    // 0x8027A4B0: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_0:
    // 0x8027A4B4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8027A4B8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8027A4BC: jr          $ra
    // 0x8027A4C0: nop

    return;
    // 0x8027A4C0: nop

;}
RECOMP_FUNC void ovl_8024B800_func_8027A454(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
L_8027A454:
    // 0x8027A454: lhu         $t6, 0xC($v0)
    ctx->r14 = MEM_HU(ctx->r2, 0XC);
    // 0x8027A458: nop

    // 0x8027A45C: beq         $t6, $zero, L_8027A490
    if (ctx->r14 == 0) {
        // 0x8027A460: nop
    
            goto L_8027A490;
    }
    // 0x8027A460: nop

    // 0x8027A464: lwc1        $f4, 0x4C($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X4C);
    // 0x8027A468: lwc1        $f6, 0x44($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0X44);
    // 0x8027A46C: sub.s       $f0, $f4, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f0.fl = ctx->f4.fl - ctx->f12.fl;
    // 0x8027A470: sh          $a2, 0x0($v1)
    MEM_H(0X0, ctx->r3) = ctx->r6;
    // 0x8027A474: mul.s       $f8, $f0, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = MUL_S(ctx->f0.fl, ctx->f0.fl);
    // 0x8027A478: sub.s       $f2, $f6, $f14
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f2.fl = ctx->f6.fl - ctx->f14.fl;
    // 0x8027A47C: addiu       $v1, $v1, 0x8
    ctx->r3 = ADD32(ctx->r3, 0X8);
    // 0x8027A480: addiu       $a3, $a3, 0x1
    ctx->r7 = ADD32(ctx->r7, 0X1);
    // 0x8027A484: mul.s       $f10, $f2, $f2
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f10.fl = MUL_S(ctx->f2.fl, ctx->f2.fl);
    // 0x8027A488: add.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x8027A48C: swc1        $f16, -0x4($v1)
    MEM_W(-0X4, ctx->r3) = ctx->f16.u32l;
L_8027A490:
    // 0x8027A490: addiu       $a2, $a2, 0x1
    ctx->r6 = ADD32(ctx->r6, 0X1);
    // 0x8027A494: bne         $a2, $a0, L_8027A454
    if (ctx->r6 != ctx->r4) {
        // 0x8027A498: addiu       $v0, $v0, 0xF8
        ctx->r2 = ADD32(ctx->r2, 0XF8);
            goto L_8027A454;
    }
    // 0x8027A498: addiu       $v0, $v0, 0xF8
    ctx->r2 = ADD32(ctx->r2, 0XF8);
    // 0x8027A49C: addiu       $a1, $a3, -0x1
    ctx->r5 = ADD32(ctx->r7, -0X1);
    // 0x8027A4A0: sll         $t7, $a1, 16
    ctx->r15 = S32(ctx->r5 << 16);
    // 0x8027A4A4: lw          $a2, 0x1C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X1C);
    // 0x8027A4A8: sra         $a1, $t7, 16
    ctx->r5 = S32(SIGNED(ctx->r15) >> 16);
    // 0x8027A4AC: jal         0x8005DE74
    // 0x8027A4B0: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    func_8005DE74(rdram, ctx);
        goto after_0;
    // 0x8027A4B0: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_0:
    // 0x8027A4B4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8027A4B8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8027A4BC: jr          $ra
    // 0x8027A4C0: nop

    return;
    // 0x8027A4C0: nop

;}
RECOMP_FUNC void ovl_8024B800_func_8027A490(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
L_8027A454:
    // 0x8027A490: addiu       $a2, $a2, 0x1
    ctx->r6 = ADD32(ctx->r6, 0X1);
    // 0x8027A494: bne         $a2, $a0, L_8027A454
    if (ctx->r6 != ctx->r4) {
            // 0x8027A498: addiu       $v0, $v0, 0xF8
    ctx->r2 = ADD32(ctx->r2, 0XF8);
    ovl_8024B800_func_8027A454(rdram, ctx);
    return;
    }
    // 0x8027A498: addiu       $v0, $v0, 0xF8
    ctx->r2 = ADD32(ctx->r2, 0XF8);
    // 0x8027A49C: addiu       $a1, $a3, -0x1
    ctx->r5 = ADD32(ctx->r7, -0X1);
    // 0x8027A4A0: sll         $t7, $a1, 16
    ctx->r15 = S32(ctx->r5 << 16);
    // 0x8027A4A4: lw          $a2, 0x1C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X1C);
    // 0x8027A4A8: sra         $a1, $t7, 16
    ctx->r5 = S32(SIGNED(ctx->r15) >> 16);
    // 0x8027A4AC: jal         0x8005DE74
    // 0x8027A4B0: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    func_8005DE74(rdram, ctx);
        goto after_0;
    // 0x8027A4B0: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_0:
    // 0x8027A4B4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8027A4B8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8027A4BC: jr          $ra
    // 0x8027A4C0: nop

    return;
    // 0x8027A4C0: nop

;}
RECOMP_FUNC void ovl_8024B800_func_8027A4C4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8027A4C4: lui         $t6, 0x8012
    ctx->r14 = S32(0X8012 << 16);
    // 0x8027A4C8: lhu         $t6, 0xB78($t6)
    ctx->r14 = MEM_HU(ctx->r14, 0XB78);
    // 0x8027A4CC: addiu       $v0, $a0, 0x28
    ctx->r2 = ADD32(ctx->r4, 0X28);
    // 0x8027A4D0: bne         $t6, $zero, L_8027A584
    if (ctx->r14 != 0) {
        // 0x8027A4D4: or          $v1, $zero, $zero
        ctx->r3 = 0 | 0;
            goto L_8027A584;
    }
    // 0x8027A4D4: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x8027A4D8: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
L_8027A4DC:
    // 0x8027A4DC: lhu         $a0, 0x26($v0)
    ctx->r4 = MEM_HU(ctx->r2, 0X26);
    // 0x8027A4E0: addiu       $v1, $v1, 0x4
    ctx->r3 = ADD32(ctx->r3, 0X4);
    // 0x8027A4E4: beq         $a0, $zero, L_8027A504
    if (ctx->r4 == 0) {
        // 0x8027A4E8: addiu       $t7, $a0, -0x1
        ctx->r15 = ADD32(ctx->r4, -0X1);
            goto L_8027A504;
    }
    // 0x8027A4E8: addiu       $t7, $a0, -0x1
    ctx->r15 = ADD32(ctx->r4, -0X1);
    // 0x8027A4EC: andi        $t8, $t7, 0xFFFF
    ctx->r24 = ctx->r15 & 0XFFFF;
    // 0x8027A4F0: bne         $t8, $zero, L_8027A504
    if (ctx->r24 != 0) {
        // 0x8027A4F4: sh          $t7, 0x26($v0)
        MEM_H(0X26, ctx->r2) = ctx->r15;
            goto L_8027A504;
    }
    // 0x8027A4F4: sh          $t7, 0x26($v0)
    MEM_H(0X26, ctx->r2) = ctx->r15;
    // 0x8027A4F8: lbu         $t9, 0x28($v0)
    ctx->r25 = MEM_BU(ctx->r2, 0X28);
    // 0x8027A4FC: nop

    // 0x8027A500: sb          $t9, 0x19($v0)
    MEM_B(0X19, ctx->r2) = ctx->r25;
L_8027A504:
    // 0x8027A504: lhu         $a0, 0x52($v0)
    ctx->r4 = MEM_HU(ctx->r2, 0X52);
    // 0x8027A508: addiu       $v0, $v0, 0x2C
    ctx->r2 = ADD32(ctx->r2, 0X2C);
    // 0x8027A50C: beq         $a0, $zero, L_8027A52C
    if (ctx->r4 == 0) {
        // 0x8027A510: addiu       $t0, $a0, -0x1
        ctx->r8 = ADD32(ctx->r4, -0X1);
            goto L_8027A52C;
    }
    // 0x8027A510: addiu       $t0, $a0, -0x1
    ctx->r8 = ADD32(ctx->r4, -0X1);
    // 0x8027A514: andi        $t1, $t0, 0xFFFF
    ctx->r9 = ctx->r8 & 0XFFFF;
    // 0x8027A518: bne         $t1, $zero, L_8027A52C
    if (ctx->r9 != 0) {
        // 0x8027A51C: sh          $t0, 0x26($v0)
        MEM_H(0X26, ctx->r2) = ctx->r8;
            goto L_8027A52C;
    }
    // 0x8027A51C: sh          $t0, 0x26($v0)
    MEM_H(0X26, ctx->r2) = ctx->r8;
    // 0x8027A520: lbu         $t2, 0x28($v0)
    ctx->r10 = MEM_BU(ctx->r2, 0X28);
    // 0x8027A524: nop

    // 0x8027A528: sb          $t2, 0x19($v0)
    MEM_B(0X19, ctx->r2) = ctx->r10;
L_8027A52C:
    // 0x8027A52C: lhu         $a0, 0x52($v0)
    ctx->r4 = MEM_HU(ctx->r2, 0X52);
    // 0x8027A530: addiu       $v0, $v0, 0x2C
    ctx->r2 = ADD32(ctx->r2, 0X2C);
    // 0x8027A534: beq         $a0, $zero, L_8027A554
    if (ctx->r4 == 0) {
        // 0x8027A538: addiu       $t3, $a0, -0x1
        ctx->r11 = ADD32(ctx->r4, -0X1);
            goto L_8027A554;
    }
    // 0x8027A538: addiu       $t3, $a0, -0x1
    ctx->r11 = ADD32(ctx->r4, -0X1);
    // 0x8027A53C: andi        $t4, $t3, 0xFFFF
    ctx->r12 = ctx->r11 & 0XFFFF;
    // 0x8027A540: bne         $t4, $zero, L_8027A554
    if (ctx->r12 != 0) {
        // 0x8027A544: sh          $t3, 0x26($v0)
        MEM_H(0X26, ctx->r2) = ctx->r11;
            goto L_8027A554;
    }
    // 0x8027A544: sh          $t3, 0x26($v0)
    MEM_H(0X26, ctx->r2) = ctx->r11;
    // 0x8027A548: lbu         $t5, 0x28($v0)
    ctx->r13 = MEM_BU(ctx->r2, 0X28);
    // 0x8027A54C: nop

    // 0x8027A550: sb          $t5, 0x19($v0)
    MEM_B(0X19, ctx->r2) = ctx->r13;
L_8027A554:
    // 0x8027A554: lhu         $a0, 0x52($v0)
    ctx->r4 = MEM_HU(ctx->r2, 0X52);
    // 0x8027A558: addiu       $v0, $v0, 0x2C
    ctx->r2 = ADD32(ctx->r2, 0X2C);
    // 0x8027A55C: beq         $a0, $zero, L_8027A57C
    if (ctx->r4 == 0) {
        // 0x8027A560: addiu       $t6, $a0, -0x1
        ctx->r14 = ADD32(ctx->r4, -0X1);
            goto L_8027A57C;
    }
    // 0x8027A560: addiu       $t6, $a0, -0x1
    ctx->r14 = ADD32(ctx->r4, -0X1);
    // 0x8027A564: andi        $t7, $t6, 0xFFFF
    ctx->r15 = ctx->r14 & 0XFFFF;
    // 0x8027A568: bne         $t7, $zero, L_8027A57C
    if (ctx->r15 != 0) {
        // 0x8027A56C: sh          $t6, 0x26($v0)
        MEM_H(0X26, ctx->r2) = ctx->r14;
            goto L_8027A57C;
    }
    // 0x8027A56C: sh          $t6, 0x26($v0)
    MEM_H(0X26, ctx->r2) = ctx->r14;
    // 0x8027A570: lbu         $t8, 0x28($v0)
    ctx->r24 = MEM_BU(ctx->r2, 0X28);
    // 0x8027A574: nop

    // 0x8027A578: sb          $t8, 0x19($v0)
    MEM_B(0X19, ctx->r2) = ctx->r24;
L_8027A57C:
    // 0x8027A57C: bne         $v1, $a1, L_8027A4DC
    if (ctx->r3 != ctx->r5) {
        // 0x8027A580: addiu       $v0, $v0, 0x2C
        ctx->r2 = ADD32(ctx->r2, 0X2C);
            goto L_8027A4DC;
    }
    // 0x8027A580: addiu       $v0, $v0, 0x2C
    ctx->r2 = ADD32(ctx->r2, 0X2C);
L_8027A584:
    // 0x8027A584: jr          $ra
    // 0x8027A588: nop

    return;
    // 0x8027A588: nop

;}
RECOMP_FUNC void ovl_8024B800_func_8027A4DC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
L_8027A4DC:
    // 0x8027A4DC: lhu         $a0, 0x26($v0)
    ctx->r4 = MEM_HU(ctx->r2, 0X26);
    // 0x8027A4E0: addiu       $v1, $v1, 0x4
    ctx->r3 = ADD32(ctx->r3, 0X4);
    // 0x8027A4E4: beq         $a0, $zero, L_8027A504
    if (ctx->r4 == 0) {
        // 0x8027A4E8: addiu       $t7, $a0, -0x1
        ctx->r15 = ADD32(ctx->r4, -0X1);
            goto L_8027A504;
    }
    // 0x8027A4E8: addiu       $t7, $a0, -0x1
    ctx->r15 = ADD32(ctx->r4, -0X1);
    // 0x8027A4EC: andi        $t8, $t7, 0xFFFF
    ctx->r24 = ctx->r15 & 0XFFFF;
    // 0x8027A4F0: bne         $t8, $zero, L_8027A504
    if (ctx->r24 != 0) {
        // 0x8027A4F4: sh          $t7, 0x26($v0)
        MEM_H(0X26, ctx->r2) = ctx->r15;
            goto L_8027A504;
    }
    // 0x8027A4F4: sh          $t7, 0x26($v0)
    MEM_H(0X26, ctx->r2) = ctx->r15;
    // 0x8027A4F8: lbu         $t9, 0x28($v0)
    ctx->r25 = MEM_BU(ctx->r2, 0X28);
    // 0x8027A4FC: nop

    // 0x8027A500: sb          $t9, 0x19($v0)
    MEM_B(0X19, ctx->r2) = ctx->r25;
L_8027A504:
    // 0x8027A504: lhu         $a0, 0x52($v0)
    ctx->r4 = MEM_HU(ctx->r2, 0X52);
    // 0x8027A508: addiu       $v0, $v0, 0x2C
    ctx->r2 = ADD32(ctx->r2, 0X2C);
    // 0x8027A50C: beq         $a0, $zero, L_8027A52C
    if (ctx->r4 == 0) {
        // 0x8027A510: addiu       $t0, $a0, -0x1
        ctx->r8 = ADD32(ctx->r4, -0X1);
            goto L_8027A52C;
    }
    // 0x8027A510: addiu       $t0, $a0, -0x1
    ctx->r8 = ADD32(ctx->r4, -0X1);
    // 0x8027A514: andi        $t1, $t0, 0xFFFF
    ctx->r9 = ctx->r8 & 0XFFFF;
    // 0x8027A518: bne         $t1, $zero, L_8027A52C
    if (ctx->r9 != 0) {
        // 0x8027A51C: sh          $t0, 0x26($v0)
        MEM_H(0X26, ctx->r2) = ctx->r8;
            goto L_8027A52C;
    }
    // 0x8027A51C: sh          $t0, 0x26($v0)
    MEM_H(0X26, ctx->r2) = ctx->r8;
    // 0x8027A520: lbu         $t2, 0x28($v0)
    ctx->r10 = MEM_BU(ctx->r2, 0X28);
    // 0x8027A524: nop

    // 0x8027A528: sb          $t2, 0x19($v0)
    MEM_B(0X19, ctx->r2) = ctx->r10;
L_8027A52C:
    // 0x8027A52C: lhu         $a0, 0x52($v0)
    ctx->r4 = MEM_HU(ctx->r2, 0X52);
    // 0x8027A530: addiu       $v0, $v0, 0x2C
    ctx->r2 = ADD32(ctx->r2, 0X2C);
    // 0x8027A534: beq         $a0, $zero, L_8027A554
    if (ctx->r4 == 0) {
        // 0x8027A538: addiu       $t3, $a0, -0x1
        ctx->r11 = ADD32(ctx->r4, -0X1);
            goto L_8027A554;
    }
    // 0x8027A538: addiu       $t3, $a0, -0x1
    ctx->r11 = ADD32(ctx->r4, -0X1);
    // 0x8027A53C: andi        $t4, $t3, 0xFFFF
    ctx->r12 = ctx->r11 & 0XFFFF;
    // 0x8027A540: bne         $t4, $zero, L_8027A554
    if (ctx->r12 != 0) {
        // 0x8027A544: sh          $t3, 0x26($v0)
        MEM_H(0X26, ctx->r2) = ctx->r11;
            goto L_8027A554;
    }
    // 0x8027A544: sh          $t3, 0x26($v0)
    MEM_H(0X26, ctx->r2) = ctx->r11;
    // 0x8027A548: lbu         $t5, 0x28($v0)
    ctx->r13 = MEM_BU(ctx->r2, 0X28);
    // 0x8027A54C: nop

    // 0x8027A550: sb          $t5, 0x19($v0)
    MEM_B(0X19, ctx->r2) = ctx->r13;
L_8027A554:
    // 0x8027A554: lhu         $a0, 0x52($v0)
    ctx->r4 = MEM_HU(ctx->r2, 0X52);
    // 0x8027A558: addiu       $v0, $v0, 0x2C
    ctx->r2 = ADD32(ctx->r2, 0X2C);
    // 0x8027A55C: beq         $a0, $zero, L_8027A57C
    if (ctx->r4 == 0) {
        // 0x8027A560: addiu       $t6, $a0, -0x1
        ctx->r14 = ADD32(ctx->r4, -0X1);
            goto L_8027A57C;
    }
    // 0x8027A560: addiu       $t6, $a0, -0x1
    ctx->r14 = ADD32(ctx->r4, -0X1);
    // 0x8027A564: andi        $t7, $t6, 0xFFFF
    ctx->r15 = ctx->r14 & 0XFFFF;
    // 0x8027A568: bne         $t7, $zero, L_8027A57C
    if (ctx->r15 != 0) {
        // 0x8027A56C: sh          $t6, 0x26($v0)
        MEM_H(0X26, ctx->r2) = ctx->r14;
            goto L_8027A57C;
    }
    // 0x8027A56C: sh          $t6, 0x26($v0)
    MEM_H(0X26, ctx->r2) = ctx->r14;
    // 0x8027A570: lbu         $t8, 0x28($v0)
    ctx->r24 = MEM_BU(ctx->r2, 0X28);
    // 0x8027A574: nop

    // 0x8027A578: sb          $t8, 0x19($v0)
    MEM_B(0X19, ctx->r2) = ctx->r24;
L_8027A57C:
    // 0x8027A57C: bne         $v1, $a1, L_8027A4DC
    if (ctx->r3 != ctx->r5) {
        // 0x8027A580: addiu       $v0, $v0, 0x2C
        ctx->r2 = ADD32(ctx->r2, 0X2C);
            goto L_8027A4DC;
    }
    // 0x8027A580: addiu       $v0, $v0, 0x2C
    ctx->r2 = ADD32(ctx->r2, 0X2C);
    // 0x8027A584: jr          $ra
    // 0x8027A588: nop

    return;
    // 0x8027A588: nop

;}
RECOMP_FUNC void ovl_8024B800_func_8027A58C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8027A58C: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x8027A590: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x8027A594: or          $s2, $a0, $zero
    ctx->r18 = ctx->r4 | 0;
    // 0x8027A598: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x8027A59C: sw          $s4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r20;
    // 0x8027A5A0: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x8027A5A4: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x8027A5A8: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8027A5AC: lw          $a0, 0xC8($a0)
    ctx->r4 = MEM_W(ctx->r4, 0XC8);
    // 0x8027A5B0: jal         0x802718DC
    // 0x8027A5B4: nop

    ovl_8024B800_func_802718DC(rdram, ctx);
        goto after_0;
    // 0x8027A5B4: nop

    after_0:
    // 0x8027A5B8: lw          $v1, 0xD8($s2)
    ctx->r3 = MEM_W(ctx->r18, 0XD8);
    // 0x8027A5BC: addiu       $at, $zero, 0x6
    ctx->r1 = ADD32(0, 0X6);
    // 0x8027A5C0: lbu         $t9, 0x1A($v1)
    ctx->r25 = MEM_BU(ctx->r3, 0X1A);
    // 0x8027A5C4: lbu         $a3, 0x28($v1)
    ctx->r7 = MEM_BU(ctx->r3, 0X28);
    // 0x8027A5C8: div         $zero, $t9, $at
    lo = S32(S64(S32(ctx->r25)) / S64(S32(ctx->r1))); hi = S32(S64(S32(ctx->r25)) % S64(S32(ctx->r1)));
    // 0x8027A5CC: lui         $t8, 0x8028
    ctx->r24 = S32(0X8028 << 16);
    // 0x8027A5D0: sll         $t7, $a3, 1
    ctx->r15 = S32(ctx->r7 << 1);
    // 0x8027A5D4: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x8027A5D8: lhu         $t8, -0x2294($t8)
    ctx->r24 = MEM_HU(ctx->r24, -0X2294);
    // 0x8027A5DC: lbu         $a0, 0x24($v1)
    ctx->r4 = MEM_BU(ctx->r3, 0X24);
    // 0x8027A5E0: or          $s4, $v0, $zero
    ctx->r20 = ctx->r2 | 0;
    // 0x8027A5E4: sra         $t6, $a0, 4
    ctx->r14 = S32(SIGNED(ctx->r4) >> 4);
    // 0x8027A5E8: lui         $t1, 0x8028
    ctx->r9 = S32(0X8028 << 16);
    // 0x8027A5EC: mflo        $t0
    ctx->r8 = lo;
    // 0x8027A5F0: addu        $a1, $t8, $t0
    ctx->r5 = ADD32(ctx->r24, ctx->r8);
    // 0x8027A5F4: subu        $a2, $t6, $a1
    ctx->r6 = SUB32(ctx->r14, ctx->r5);
    // 0x8027A5F8: blez        $a2, L_8027A6E0
    if (SIGNED(ctx->r6) <= 0) {
        // 0x8027A5FC: nop
    
            goto L_8027A6E0;
    }
    // 0x8027A5FC: nop

    // 0x8027A600: lh          $t1, -0x1B60($t1)
    ctx->r9 = MEM_H(ctx->r9, -0X1B60);
    // 0x8027A604: lui         $t3, 0x8028
    ctx->r11 = S32(0X8028 << 16);
    // 0x8027A608: andi        $t2, $t1, 0x1
    ctx->r10 = ctx->r9 & 0X1;
    // 0x8027A60C: bne         $t2, $zero, L_8027A6E0
    if (ctx->r10 != 0) {
        // 0x8027A610: addu        $t3, $t3, $t7
        ctx->r11 = ADD32(ctx->r11, ctx->r15);
            goto L_8027A6E0;
    }
    // 0x8027A610: addu        $t3, $t3, $t7
    ctx->r11 = ADD32(ctx->r11, ctx->r15);
    // 0x8027A614: lhu         $t3, -0x2288($t3)
    ctx->r11 = MEM_HU(ctx->r11, -0X2288);
    // 0x8027A618: jal         0x80059898
    // 0x8027A61C: addu        $a0, $a2, $t3
    ctx->r4 = ADD32(ctx->r6, ctx->r11);
    func_80059898(rdram, ctx);
        goto after_1;
    // 0x8027A61C: addu        $a0, $a2, $t3
    ctx->r4 = ADD32(ctx->r6, ctx->r11);
    after_1:
    // 0x8027A620: addiu       $s0, $v0, 0x1
    ctx->r16 = ADD32(ctx->r2, 0X1);
    // 0x8027A624: slti        $at, $s0, 0x6
    ctx->r1 = SIGNED(ctx->r16) < 0X6 ? 1 : 0;
    // 0x8027A628: bne         $at, $zero, L_8027A634
    if (ctx->r1 != 0) {
        // 0x8027A62C: lui         $s3, 0x8012
        ctx->r19 = S32(0X8012 << 16);
            goto L_8027A634;
    }
    // 0x8027A62C: lui         $s3, 0x8012
    ctx->r19 = S32(0X8012 << 16);
    // 0x8027A630: addiu       $s0, $zero, 0x5
    ctx->r16 = ADD32(0, 0X5);
L_8027A634:
    // 0x8027A634: beq         $s0, $zero, L_8027A6E0
    if (ctx->r16 == 0) {
        // 0x8027A638: addiu       $s3, $s3, -0x30A0
        ctx->r19 = ADD32(ctx->r19, -0X30A0);
            goto L_8027A6E0;
    }
    // 0x8027A638: addiu       $s3, $s3, -0x30A0
    ctx->r19 = ADD32(ctx->r19, -0X30A0);
    // 0x8027A63C: sll         $s1, $s0, 24
    ctx->r17 = S32(ctx->r16 << 24);
L_8027A640:
    // 0x8027A640: lw          $t4, 0xC8($s2)
    ctx->r12 = MEM_W(ctx->r18, 0XC8);
    // 0x8027A644: sra         $t5, $s1, 24
    ctx->r13 = S32(SIGNED(ctx->r17) >> 24);
    // 0x8027A648: sll         $a2, $t5, 24
    ctx->r6 = S32(ctx->r13 << 24);
    // 0x8027A64C: sra         $t6, $a2, 24
    ctx->r14 = S32(SIGNED(ctx->r6) >> 24);
    // 0x8027A650: lb          $a1, 0x1B($s2)
    ctx->r5 = MEM_B(ctx->r18, 0X1B);
    // 0x8027A654: lb          $a0, 0x7($t4)
    ctx->r4 = MEM_B(ctx->r12, 0X7);
    // 0x8027A658: or          $a2, $t6, $zero
    ctx->r6 = ctx->r14 | 0;
    // 0x8027A65C: jal         0x80044190
    // 0x8027A660: or          $s1, $t5, $zero
    ctx->r17 = ctx->r13 | 0;
    func_80044190(rdram, ctx);
        goto after_2;
    // 0x8027A660: or          $s1, $t5, $zero
    ctx->r17 = ctx->r13 | 0;
    after_2:
    // 0x8027A664: bne         $v0, $zero, L_8027A6D4
    if (ctx->r2 != 0) {
        // 0x8027A668: sltiu       $at, $s4, 0x8
        ctx->r1 = ctx->r20 < 0X8 ? 1 : 0;
            goto L_8027A6D4;
    }
    // 0x8027A668: sltiu       $at, $s4, 0x8
    ctx->r1 = ctx->r20 < 0X8 ? 1 : 0;
    // 0x8027A66C: bne         $at, $zero, L_8027A684
    if (ctx->r1 != 0) {
        // 0x8027A670: nop
    
            goto L_8027A684;
    }
    // 0x8027A670: nop

    // 0x8027A674: lb          $t7, 0x9($s3)
    ctx->r15 = MEM_B(ctx->r19, 0X9);
    // 0x8027A678: nop

    // 0x8027A67C: beq         $t7, $zero, L_8027A6B0
    if (ctx->r15 == 0) {
        // 0x8027A680: nop
    
            goto L_8027A6B0;
    }
    // 0x8027A680: nop

L_8027A684:
    // 0x8027A684: lw          $t9, 0xD8($s2)
    ctx->r25 = MEM_W(ctx->r18, 0XD8);
    // 0x8027A688: nop

    // 0x8027A68C: lbu         $t8, 0x1D($t9)
    ctx->r24 = MEM_BU(ctx->r25, 0X1D);
    // 0x8027A690: nop

    // 0x8027A694: sra         $t0, $t8, 5
    ctx->r8 = S32(SIGNED(ctx->r24) >> 5);
    // 0x8027A698: addu        $t1, $t0, $s0
    ctx->r9 = ADD32(ctx->r8, ctx->r16);
    // 0x8027A69C: slti        $at, $t1, 0x3
    ctx->r1 = SIGNED(ctx->r9) < 0X3 ? 1 : 0;
    // 0x8027A6A0: bne         $at, $zero, L_8027A6B0
    if (ctx->r1 != 0) {
        // 0x8027A6A4: nop
    
            goto L_8027A6B0;
    }
    // 0x8027A6A4: nop

    // 0x8027A6A8: b           L_8027A6D8
    // 0x8027A6AC: addiu       $s0, $s0, -0x1
    ctx->r16 = ADD32(ctx->r16, -0X1);
        goto L_8027A6D8;
    // 0x8027A6AC: addiu       $s0, $s0, -0x1
    ctx->r16 = ADD32(ctx->r16, -0X1);
L_8027A6B0:
    // 0x8027A6B0: lw          $t2, 0xC8($s2)
    ctx->r10 = MEM_W(ctx->r18, 0XC8);
    // 0x8027A6B4: sll         $a2, $s1, 24
    ctx->r6 = S32(ctx->r17 << 24);
    // 0x8027A6B8: sra         $t3, $a2, 24
    ctx->r11 = S32(SIGNED(ctx->r6) >> 24);
    // 0x8027A6BC: lb          $a1, 0x1B($s2)
    ctx->r5 = MEM_B(ctx->r18, 0X1B);
    // 0x8027A6C0: lb          $a0, 0x7($t2)
    ctx->r4 = MEM_B(ctx->r10, 0X7);
    // 0x8027A6C4: jal         0x800440B8
    // 0x8027A6C8: or          $a2, $t3, $zero
    ctx->r6 = ctx->r11 | 0;
    func_800440B8(rdram, ctx);
        goto after_3;
    // 0x8027A6C8: or          $a2, $t3, $zero
    ctx->r6 = ctx->r11 | 0;
    after_3:
    // 0x8027A6CC: b           L_8027A75C
    // 0x8027A6D0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_8027A75C;
    // 0x8027A6D0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_8027A6D4:
    // 0x8027A6D4: addiu       $s0, $s0, -0x1
    ctx->r16 = ADD32(ctx->r16, -0X1);
L_8027A6D8:
    // 0x8027A6D8: bne         $s0, $zero, L_8027A640
    if (ctx->r16 != 0) {
        // 0x8027A6DC: sll         $s1, $s0, 24
        ctx->r17 = S32(ctx->r16 << 24);
            goto L_8027A640;
    }
    // 0x8027A6DC: sll         $s1, $s0, 24
    ctx->r17 = S32(ctx->r16 << 24);
L_8027A6E0:
    // 0x8027A6E0: lw          $v1, 0xD8($s2)
    ctx->r3 = MEM_W(ctx->r18, 0XD8);
    // 0x8027A6E4: lui         $t0, 0x8028
    ctx->r8 = S32(0X8028 << 16);
    // 0x8027A6E8: lbu         $t4, 0x1D($v1)
    ctx->r12 = MEM_BU(ctx->r3, 0X1D);
    // 0x8027A6EC: lui         $at, 0x1
    ctx->r1 = S32(0X1 << 16);
    // 0x8027A6F0: andi        $t5, $t4, 0xE0
    ctx->r13 = ctx->r12 & 0XE0;
    // 0x8027A6F4: beq         $t5, $zero, L_8027A704
    if (ctx->r13 == 0) {
        // 0x8027A6F8: addiu       $t2, $zero, 0x5
        ctx->r10 = ADD32(0, 0X5);
            goto L_8027A704;
    }
    // 0x8027A6F8: addiu       $t2, $zero, 0x5
    ctx->r10 = ADD32(0, 0X5);
    // 0x8027A6FC: b           L_8027A75C
    // 0x8027A700: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_8027A75C;
    // 0x8027A700: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_8027A704:
    // 0x8027A704: lbu         $t9, 0x28($v1)
    ctx->r25 = MEM_BU(ctx->r3, 0X28);
    // 0x8027A708: lbu         $t6, 0x13($v1)
    ctx->r14 = MEM_BU(ctx->r3, 0X13);
    // 0x8027A70C: sll         $t8, $t9, 1
    ctx->r24 = S32(ctx->r25 << 1);
    // 0x8027A710: addu        $t0, $t0, $t8
    ctx->r8 = ADD32(ctx->r8, ctx->r24);
    // 0x8027A714: lh          $t0, -0x227C($t0)
    ctx->r8 = MEM_H(ctx->r8, -0X227C);
    // 0x8027A718: andi        $t7, $t6, 0x3F
    ctx->r15 = ctx->r14 & 0X3F;
    // 0x8027A71C: lhu         $a0, 0x26($v1)
    ctx->r4 = MEM_HU(ctx->r3, 0X26);
    // 0x8027A720: subu        $v0, $t7, $t0
    ctx->r2 = SUB32(ctx->r15, ctx->r8);
    // 0x8027A724: bgtz        $v0, L_8027A734
    if (SIGNED(ctx->r2) > 0) {
        // 0x8027A728: sll         $t1, $v0, 2
        ctx->r9 = S32(ctx->r2 << 2);
            goto L_8027A734;
    }
    // 0x8027A728: sll         $t1, $v0, 2
    ctx->r9 = S32(ctx->r2 << 2);
    // 0x8027A72C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8027A730: sll         $t1, $v0, 2
    ctx->r9 = S32(ctx->r2 << 2);
L_8027A734:
    // 0x8027A734: addu        $t1, $t1, $v0
    ctx->r9 = ADD32(ctx->r9, ctx->r2);
    // 0x8027A738: addu        $a0, $a0, $t1
    ctx->r4 = ADD32(ctx->r4, ctx->r9);
    // 0x8027A73C: sltu        $at, $a0, $at
    ctx->r1 = ctx->r4 < ctx->r1 ? 1 : 0;
    // 0x8027A740: bne         $at, $zero, L_8027A74C
    if (ctx->r1 != 0) {
        // 0x8027A744: nop
    
            goto L_8027A74C;
    }
    // 0x8027A744: nop

    // 0x8027A748: ori         $a0, $zero, 0xFFFF
    ctx->r4 = 0 | 0XFFFF;
L_8027A74C:
    // 0x8027A74C: sh          $a0, 0x26($v1)
    MEM_H(0X26, ctx->r3) = ctx->r4;
    // 0x8027A750: lw          $t3, 0xD8($s2)
    ctx->r11 = MEM_W(ctx->r18, 0XD8);
    // 0x8027A754: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x8027A758: sb          $t2, 0x19($t3)
    MEM_B(0X19, ctx->r11) = ctx->r10;
L_8027A75C:
    // 0x8027A75C: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x8027A760: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8027A764: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x8027A768: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x8027A76C: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x8027A770: lw          $s4, 0x28($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X28);
    // 0x8027A774: jr          $ra
    // 0x8027A778: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x8027A778: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void ovl_8024B800_func_8027A74C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8027A74C: sh          $a0, 0x26($v1)
    MEM_H(0X26, ctx->r3) = ctx->r4;
    // 0x8027A750: lw          $t3, 0xD8($s2)
    ctx->r11 = MEM_W(ctx->r18, 0XD8);
    // 0x8027A754: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x8027A758: sb          $t2, 0x19($t3)
    MEM_B(0X19, ctx->r11) = ctx->r10;
    // 0x8027A75C: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x8027A760: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8027A764: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x8027A768: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x8027A76C: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x8027A770: lw          $s4, 0x28($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X28);
    // 0x8027A774: jr          $ra
    // 0x8027A778: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x8027A778: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void ovl_8024B800_func_8027A77C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8027A77C: lui         $a1, 0x8009
    ctx->r5 = S32(0X8009 << 16);
    // 0x8027A780: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x8027A784: addiu       $a1, $a1, 0x3B20
    ctx->r5 = ADD32(ctx->r5, 0X3B20);
    // 0x8027A788: addiu       $sp, $sp, -0x50
    ctx->r29 = ADD32(ctx->r29, -0X50);
    // 0x8027A78C: sb          $zero, 0x3610($at)
    MEM_B(0X3610, ctx->r1) = 0;
    // 0x8027A790: lw          $t6, 0x0($a1)
    ctx->r14 = MEM_W(ctx->r5, 0X0);
    // 0x8027A794: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x8027A798: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x8027A79C: lw          $v1, 0xB4($t6)
    ctx->r3 = MEM_W(ctx->r14, 0XB4);
    // 0x8027A7A0: nop

    // 0x8027A7A4: lw          $v0, 0x24($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X24);
    // 0x8027A7A8: nop

    // 0x8027A7AC: lbu         $t8, 0x8AB($v0)
    ctx->r24 = MEM_BU(ctx->r2, 0X8AB);
    // 0x8027A7B0: lw          $t7, 0x18($v0)
    ctx->r15 = MEM_W(ctx->r2, 0X18);
    // 0x8027A7B4: sll         $t9, $t8, 5
    ctx->r25 = S32(ctx->r24 << 5);
    // 0x8027A7B8: subu        $t9, $t9, $t8
    ctx->r25 = SUB32(ctx->r25, ctx->r24);
    // 0x8027A7BC: sll         $t9, $t9, 3
    ctx->r25 = S32(ctx->r25 << 3);
    // 0x8027A7C0: addu        $t0, $t7, $t9
    ctx->r8 = ADD32(ctx->r15, ctx->r25);
    // 0x8027A7C4: sw          $t0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r8;
    // 0x8027A7C8: lw          $s0, 0x18($v1)
    ctx->r16 = MEM_W(ctx->r3, 0X18);
    // 0x8027A7CC: lbu         $a0, 0x7($v0)
    ctx->r4 = MEM_BU(ctx->r2, 0X7);
    // 0x8027A7D0: jal         0x80250B20
    // 0x8027A7D4: nop

    ovl_8024B800_func_80250B20(rdram, ctx);
        goto after_0;
    // 0x8027A7D4: nop

    after_0:
    // 0x8027A7D8: lui         $t1, 0x802C
    ctx->r9 = S32(0X802C << 16);
    // 0x8027A7DC: lw          $t1, 0x5410($t1)
    ctx->r9 = MEM_W(ctx->r9, 0X5410);
    // 0x8027A7E0: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x8027A7E4: bne         $t1, $at, L_8027A870
    if (ctx->r9 != ctx->r1) {
        // 0x8027A7E8: lw          $a0, 0x38($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X38);
            goto L_8027A870;
    }
    // 0x8027A7E8: lw          $a0, 0x38($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X38);
    // 0x8027A7EC: jal         0x80053CA0
    // 0x8027A7F0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80053CA0(rdram, ctx);
        goto after_1;
    // 0x8027A7F0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
    // 0x8027A7F4: lui         $a0, 0x801B
    ctx->r4 = S32(0X801B << 16);
    // 0x8027A7F8: addiu       $a0, $a0, 0x361E
    ctx->r4 = ADD32(ctx->r4, 0X361E);
    // 0x8027A7FC: lhu         $v0, 0x0($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X0);
    // 0x8027A800: lui         $a1, 0x8009
    ctx->r5 = S32(0X8009 << 16);
    // 0x8027A804: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x8027A808: addiu       $a1, $a1, 0x3B20
    ctx->r5 = ADD32(ctx->r5, 0X3B20);
    // 0x8027A80C: sh          $v0, 0x365C($at)
    MEM_H(0X365C, ctx->r1) = ctx->r2;
    // 0x8027A810: lw          $v1, 0x0($a1)
    ctx->r3 = MEM_W(ctx->r5, 0X0);
    // 0x8027A814: andi        $t2, $v0, 0xF7FF
    ctx->r10 = ctx->r2 & 0XF7FF;
    // 0x8027A818: sh          $t2, 0x0($a0)
    MEM_H(0X0, ctx->r4) = ctx->r10;
    // 0x8027A81C: lwc1        $f4, 0x8($v1)
    ctx->f4.u32l = MEM_W(ctx->r3, 0X8);
    // 0x8027A820: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x8027A824: swc1        $f4, 0x364C($at)
    MEM_W(0X364C, ctx->r1) = ctx->f4.u32l;
    // 0x8027A828: lwc1        $f6, 0x0($v1)
    ctx->f6.u32l = MEM_W(ctx->r3, 0X0);
    // 0x8027A82C: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x8027A830: swc1        $f6, 0x3650($at)
    MEM_W(0X3650, ctx->r1) = ctx->f6.u32l;
    // 0x8027A834: lh          $t3, 0xE8($v1)
    ctx->r11 = MEM_H(ctx->r3, 0XE8);
    // 0x8027A838: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x8027A83C: mtc1        $t3, $f8
    ctx->f8.u32l = ctx->r11;
    // 0x8027A840: addiu       $t5, $zero, 0x10
    ctx->r13 = ADD32(0, 0X10);
    // 0x8027A844: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x8027A848: swc1        $f10, 0x3654($at)
    MEM_W(0X3654, ctx->r1) = ctx->f10.u32l;
    // 0x8027A84C: lh          $t4, 0xEA($v1)
    ctx->r12 = MEM_H(ctx->r3, 0XEA);
    // 0x8027A850: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x8027A854: mtc1        $t4, $f16
    ctx->f16.u32l = ctx->r12;
    // 0x8027A858: nop

    // 0x8027A85C: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x8027A860: swc1        $f18, 0x3658($at)
    MEM_W(0X3658, ctx->r1) = ctx->f18.u32l;
    // 0x8027A864: b           L_8027A8C8
    // 0x8027A868: sb          $t5, 0xBC($v1)
    MEM_B(0XBC, ctx->r3) = ctx->r13;
        goto L_8027A8C8;
    // 0x8027A868: sb          $t5, 0xBC($v1)
    MEM_B(0XBC, ctx->r3) = ctx->r13;
    // 0x8027A86C: lw          $a0, 0x38($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X38);
L_8027A870:
    // 0x8027A870: jal         0x80053CA0
    // 0x8027A874: nop

    func_80053CA0(rdram, ctx);
        goto after_2;
    // 0x8027A874: nop

    after_2:
    // 0x8027A878: lui         $a1, 0x8009
    ctx->r5 = S32(0X8009 << 16);
    // 0x8027A87C: addiu       $a1, $a1, 0x3B20
    ctx->r5 = ADD32(ctx->r5, 0X3B20);
    // 0x8027A880: lw          $v1, 0x0($a1)
    ctx->r3 = MEM_W(ctx->r5, 0X0);
    // 0x8027A884: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x8027A888: lh          $t6, 0xE8($v1)
    ctx->r14 = MEM_H(ctx->r3, 0XE8);
    // 0x8027A88C: addiu       $t7, $zero, 0x3
    ctx->r15 = ADD32(0, 0X3);
    // 0x8027A890: mtc1        $t6, $f4
    ctx->f4.u32l = ctx->r14;
    // 0x8027A894: addiu       $t9, $zero, 0x8
    ctx->r25 = ADD32(0, 0X8);
    // 0x8027A898: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x8027A89C: swc1        $f6, 0x364C($at)
    MEM_W(0X364C, ctx->r1) = ctx->f6.u32l;
    // 0x8027A8A0: lh          $t8, 0xEA($v1)
    ctx->r24 = MEM_H(ctx->r3, 0XEA);
    // 0x8027A8A4: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x8027A8A8: mtc1        $t8, $f8
    ctx->f8.u32l = ctx->r24;
    // 0x8027A8AC: nop

    // 0x8027A8B0: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x8027A8B4: swc1        $f10, 0x3650($at)
    MEM_W(0X3650, ctx->r1) = ctx->f10.u32l;
    // 0x8027A8B8: sb          $t7, 0xBC($v1)
    MEM_B(0XBC, ctx->r3) = ctx->r15;
    // 0x8027A8BC: lw          $t0, 0x0($a1)
    ctx->r8 = MEM_W(ctx->r5, 0X0);
    // 0x8027A8C0: nop

    // 0x8027A8C4: sb          $t9, 0xBD($t0)
    MEM_B(0XBD, ctx->r8) = ctx->r25;
L_8027A8C8:
    // 0x8027A8C8: lui         $v1, 0x801B
    ctx->r3 = S32(0X801B << 16);
    // 0x8027A8CC: addiu       $v1, $v1, 0x361C
    ctx->r3 = ADD32(ctx->r3, 0X361C);
    // 0x8027A8D0: sh          $zero, 0x0($v1)
    MEM_H(0X0, ctx->r3) = 0;
    // 0x8027A8D4: lui         $v0, 0x802C
    ctx->r2 = S32(0X802C << 16);
    // 0x8027A8D8: lw          $v0, 0x5410($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X5410);
    // 0x8027A8DC: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8027A8E0: bne         $v0, $at, L_8027A90C
    if (ctx->r2 != ctx->r1) {
        // 0x8027A8E4: addiu       $t1, $zero, 0x2
        ctx->r9 = ADD32(0, 0X2);
            goto L_8027A90C;
    }
    // 0x8027A8E4: addiu       $t1, $zero, 0x2
    ctx->r9 = ADD32(0, 0X2);
    // 0x8027A8E8: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x8027A8EC: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x8027A8F0: addiu       $v0, $v0, 0xB7E
    ctx->r2 = ADD32(ctx->r2, 0XB7E);
    // 0x8027A8F4: sb          $t1, 0x3610($at)
    MEM_B(0X3610, ctx->r1) = ctx->r9;
    // 0x8027A8F8: lhu         $t2, 0x0($v0)
    ctx->r10 = MEM_HU(ctx->r2, 0X0);
    // 0x8027A8FC: nop

    // 0x8027A900: ori         $t3, $t2, 0x800
    ctx->r11 = ctx->r10 | 0X800;
    // 0x8027A904: b           L_8027A92C
    // 0x8027A908: sh          $t3, 0x0($v0)
    MEM_H(0X0, ctx->r2) = ctx->r11;
        goto L_8027A92C;
    // 0x8027A908: sh          $t3, 0x0($v0)
    MEM_H(0X0, ctx->r2) = ctx->r11;
L_8027A90C:
    // 0x8027A90C: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x8027A910: bne         $v0, $at, L_8027A924
    if (ctx->r2 != ctx->r1) {
        // 0x8027A914: addiu       $t4, $zero, 0x1
        ctx->r12 = ADD32(0, 0X1);
            goto L_8027A924;
    }
    // 0x8027A914: addiu       $t4, $zero, 0x1
    ctx->r12 = ADD32(0, 0X1);
    // 0x8027A918: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x8027A91C: b           L_8027A92C
    // 0x8027A920: sb          $t4, 0x3610($at)
    MEM_B(0X3610, ctx->r1) = ctx->r12;
        goto L_8027A92C;
    // 0x8027A920: sb          $t4, 0x3610($at)
    MEM_B(0X3610, ctx->r1) = ctx->r12;
L_8027A924:
    // 0x8027A924: addiu       $t5, $zero, 0xA
    ctx->r13 = ADD32(0, 0XA);
    // 0x8027A928: sh          $t5, 0x0($v1)
    MEM_H(0X0, ctx->r3) = ctx->r13;
L_8027A92C:
    // 0x8027A92C: lui         $v0, 0x802C
    ctx->r2 = S32(0X802C << 16);
    // 0x8027A930: addiu       $v0, $v0, 0x56C0
    ctx->r2 = ADD32(ctx->r2, 0X56C0);
    // 0x8027A934: lwc1        $f16, 0x28($v0)
    ctx->f16.u32l = MEM_W(ctx->r2, 0X28);
    // 0x8027A938: lw          $t6, 0x0($a1)
    ctx->r14 = MEM_W(ctx->r5, 0X0);
    // 0x8027A93C: mtc1        $zero, $f12
    ctx->f12.u32l = 0;
    // 0x8027A940: swc1        $f16, 0x14($t6)
    MEM_W(0X14, ctx->r14) = ctx->f16.u32l;
    // 0x8027A944: lw          $t8, 0x0($a1)
    ctx->r24 = MEM_W(ctx->r5, 0X0);
    // 0x8027A948: lwc1        $f18, 0x2C($v0)
    ctx->f18.u32l = MEM_W(ctx->r2, 0X2C);
    // 0x8027A94C: addiu       $t9, $sp, 0x44
    ctx->r25 = ADD32(ctx->r29, 0X44);
    // 0x8027A950: swc1        $f18, 0x18($t8)
    MEM_W(0X18, ctx->r24) = ctx->f18.u32l;
    // 0x8027A954: lw          $t7, 0x0($a1)
    ctx->r15 = MEM_W(ctx->r5, 0X0);
    // 0x8027A958: lwc1        $f4, 0x30($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X30);
    // 0x8027A95C: mov.s       $f14, $f12
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 12);
    ctx->f14.fl = ctx->f12.fl;
    // 0x8027A960: swc1        $f4, 0x1C($t7)
    MEM_W(0X1C, ctx->r15) = ctx->f4.u32l;
    // 0x8027A964: lw          $v1, 0x0($a1)
    ctx->r3 = MEM_W(ctx->r5, 0X0);
    // 0x8027A968: nop

    // 0x8027A96C: lw          $a2, 0x1C($v1)
    ctx->r6 = MEM_W(ctx->r3, 0X1C);
    // 0x8027A970: lw          $a3, 0x14($v1)
    ctx->r7 = MEM_W(ctx->r3, 0X14);
    // 0x8027A974: jal         0x80272B1C
    // 0x8027A978: sw          $t9, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r25;
    ovl_8024B800_func_80272B1C(rdram, ctx);
        goto after_3;
    // 0x8027A978: sw          $t9, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r25;
    after_3:
    // 0x8027A97C: lui         $a1, 0x8009
    ctx->r5 = S32(0X8009 << 16);
    // 0x8027A980: addiu       $a1, $a1, 0x3B20
    ctx->r5 = ADD32(ctx->r5, 0X3B20);
    // 0x8027A984: lw          $t0, 0x0($a1)
    ctx->r8 = MEM_W(ctx->r5, 0X0);
    // 0x8027A988: lwc1        $f6, 0x44($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X44);
    // 0x8027A98C: addiu       $t2, $zero, 0x2
    ctx->r10 = ADD32(0, 0X2);
    // 0x8027A990: swc1        $f6, 0x20($t0)
    MEM_W(0X20, ctx->r8) = ctx->f6.u32l;
    // 0x8027A994: lw          $t1, 0x0($a1)
    ctx->r9 = MEM_W(ctx->r5, 0X0);
    // 0x8027A998: lwc1        $f8, 0x48($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X48);
    // 0x8027A99C: lui         $t8, 0x802C
    ctx->r24 = S32(0X802C << 16);
    // 0x8027A9A0: swc1        $f8, 0x10($t1)
    MEM_W(0X10, ctx->r9) = ctx->f8.u32l;
    // 0x8027A9A4: lw          $t3, 0x0($a1)
    ctx->r11 = MEM_W(ctx->r5, 0X0);
    // 0x8027A9A8: lui         $a0, 0x802C
    ctx->r4 = S32(0X802C << 16);
    // 0x8027A9AC: sh          $t2, 0xBE($t3)
    MEM_H(0XBE, ctx->r11) = ctx->r10;
    // 0x8027A9B0: lw          $v1, 0x0($a1)
    ctx->r3 = MEM_W(ctx->r5, 0X0);
    // 0x8027A9B4: addiu       $t8, $t8, 0x5738
    ctx->r24 = ADD32(ctx->r24, 0X5738);
    // 0x8027A9B8: lhu         $t4, 0xC0($v1)
    ctx->r12 = MEM_HU(ctx->r3, 0XC0);
    // 0x8027A9BC: mtc1        $zero, $f12
    ctx->f12.u32l = 0;
    // 0x8027A9C0: andi        $t5, $t4, 0xFF7F
    ctx->r13 = ctx->r12 & 0XFF7F;
    // 0x8027A9C4: sh          $t5, 0xC0($v1)
    MEM_H(0XC0, ctx->r3) = ctx->r13;
    // 0x8027A9C8: lw          $t6, 0xCC($s0)
    ctx->r14 = MEM_W(ctx->r16, 0XCC);
    // 0x8027A9CC: addiu       $a0, $a0, 0x5538
    ctx->r4 = ADD32(ctx->r4, 0X5538);
    // 0x8027A9D0: lw          $t0, 0x30($t6)
    ctx->r8 = MEM_W(ctx->r14, 0X30);
    // 0x8027A9D4: addiu       $t9, $t8, 0x54
    ctx->r25 = ADD32(ctx->r24, 0X54);
L_8027A9D8:
    // 0x8027A9D8: lw          $at, 0x0($t8)
    ctx->r1 = MEM_W(ctx->r24, 0X0);
    // 0x8027A9DC: addiu       $t8, $t8, 0xC
    ctx->r24 = ADD32(ctx->r24, 0XC);
    // 0x8027A9E0: sw          $at, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->r1;
    // 0x8027A9E4: lw          $at, -0x8($t8)
    ctx->r1 = MEM_W(ctx->r24, -0X8);
    // 0x8027A9E8: addiu       $t0, $t0, 0xC
    ctx->r8 = ADD32(ctx->r8, 0XC);
    // 0x8027A9EC: sw          $at, -0x8($t0)
    MEM_W(-0X8, ctx->r8) = ctx->r1;
    // 0x8027A9F0: lw          $at, -0x4($t8)
    ctx->r1 = MEM_W(ctx->r24, -0X4);
    // 0x8027A9F4: bne         $t8, $t9, L_8027A9D8
    if (ctx->r24 != ctx->r25) {
        // 0x8027A9F8: sw          $at, -0x4($t0)
        MEM_W(-0X4, ctx->r8) = ctx->r1;
            goto L_8027A9D8;
    }
    // 0x8027A9F8: sw          $at, -0x4($t0)
    MEM_W(-0X4, ctx->r8) = ctx->r1;
    // 0x8027A9FC: lw          $at, 0x0($t8)
    ctx->r1 = MEM_W(ctx->r24, 0X0);
    // 0x8027AA00: addiu       $t1, $sp, 0x44
    ctx->r9 = ADD32(ctx->r29, 0X44);
    // 0x8027AA04: sw          $at, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->r1;
    // 0x8027AA08: lw          $t9, 0x4($t8)
    ctx->r25 = MEM_W(ctx->r24, 0X4);
    // 0x8027AA0C: mov.s       $f14, $f12
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 12);
    ctx->f14.fl = ctx->f12.fl;
    // 0x8027AA10: sw          $t9, 0x4($t0)
    MEM_W(0X4, ctx->r8) = ctx->r25;
    // 0x8027AA14: lwc1        $f10, 0x1C($a0)
    ctx->f10.u32l = MEM_W(ctx->r4, 0X1C);
    // 0x8027AA18: nop

    // 0x8027AA1C: swc1        $f10, 0x70($s0)
    MEM_W(0X70, ctx->r16) = ctx->f10.u32l;
    // 0x8027AA20: lwc1        $f16, 0x20($a0)
    ctx->f16.u32l = MEM_W(ctx->r4, 0X20);
    // 0x8027AA24: lw          $a3, 0x70($s0)
    ctx->r7 = MEM_W(ctx->r16, 0X70);
    // 0x8027AA28: swc1        $f16, 0x74($s0)
    MEM_W(0X74, ctx->r16) = ctx->f16.u32l;
    // 0x8027AA2C: lwc1        $f18, 0x24($a0)
    ctx->f18.u32l = MEM_W(ctx->r4, 0X24);
    // 0x8027AA30: nop

    // 0x8027AA34: swc1        $f18, 0x78($s0)
    MEM_W(0X78, ctx->r16) = ctx->f18.u32l;
    // 0x8027AA38: lw          $a2, 0x78($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X78);
    // 0x8027AA3C: jal         0x80272B1C
    // 0x8027AA40: sw          $t1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r9;
    ovl_8024B800_func_80272B1C(rdram, ctx);
        goto after_4;
    // 0x8027AA40: sw          $t1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r9;
    after_4:
    // 0x8027AA44: lwc1        $f4, 0x44($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X44);
    // 0x8027AA48: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8027AA4C: swc1        $f4, 0x7C($s0)
    MEM_W(0X7C, ctx->r16) = ctx->f4.u32l;
    // 0x8027AA50: lwc1        $f6, 0x48($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X48);
    // 0x8027AA54: addiu       $a1, $zero, 0x40
    ctx->r5 = ADD32(0, 0X40);
    // 0x8027AA58: jal         0x8024BC08
    // 0x8027AA5C: swc1        $f6, 0x50($s0)
    MEM_W(0X50, ctx->r16) = ctx->f6.u32l;
    ovl_8024B800_func_8024BC08(rdram, ctx);
        goto after_5;
    // 0x8027AA5C: swc1        $f6, 0x50($s0)
    MEM_W(0X50, ctx->r16) = ctx->f6.u32l;
    after_5:
    // 0x8027AA60: lui         $t2, 0x802C
    ctx->r10 = S32(0X802C << 16);
    // 0x8027AA64: lw          $t2, 0x5410($t2)
    ctx->r10 = MEM_W(ctx->r10, 0X5410);
    // 0x8027AA68: nop

    // 0x8027AA6C: bne         $t2, $zero, L_8027AA80
    if (ctx->r10 != 0) {
        // 0x8027AA70: lw          $a0, 0x38($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X38);
            goto L_8027AA80;
    }
    // 0x8027AA70: lw          $a0, 0x38($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X38);
    // 0x8027AA74: jal         0x80250BCC
    // 0x8027AA78: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_8024B800_func_80250BCC(rdram, ctx);
        goto after_6;
    // 0x8027AA78: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_6:
    // 0x8027AA7C: lw          $a0, 0x38($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X38);
L_8027AA80:
    // 0x8027AA80: lui         $t4, 0x802C
    ctx->r12 = S32(0X802C << 16);
    // 0x8027AA84: lw          $t3, 0xCC($a0)
    ctx->r11 = MEM_W(ctx->r4, 0XCC);
    // 0x8027AA88: addiu       $t4, $t4, 0x5798
    ctx->r12 = ADD32(ctx->r12, 0X5798);
    // 0x8027AA8C: lw          $t7, 0x30($t3)
    ctx->r15 = MEM_W(ctx->r11, 0X30);
    // 0x8027AA90: addiu       $t6, $t4, 0x54
    ctx->r14 = ADD32(ctx->r12, 0X54);
L_8027AA94:
    // 0x8027AA94: lw          $at, 0x0($t4)
    ctx->r1 = MEM_W(ctx->r12, 0X0);
    // 0x8027AA98: addiu       $t4, $t4, 0xC
    ctx->r12 = ADD32(ctx->r12, 0XC);
    // 0x8027AA9C: sw          $at, 0x0($t7)
    MEM_W(0X0, ctx->r15) = ctx->r1;
    // 0x8027AAA0: lw          $at, -0x8($t4)
    ctx->r1 = MEM_W(ctx->r12, -0X8);
    // 0x8027AAA4: addiu       $t7, $t7, 0xC
    ctx->r15 = ADD32(ctx->r15, 0XC);
    // 0x8027AAA8: sw          $at, -0x8($t7)
    MEM_W(-0X8, ctx->r15) = ctx->r1;
    // 0x8027AAAC: lw          $at, -0x4($t4)
    ctx->r1 = MEM_W(ctx->r12, -0X4);
    // 0x8027AAB0: bne         $t4, $t6, L_8027AA94
    if (ctx->r12 != ctx->r14) {
        // 0x8027AAB4: sw          $at, -0x4($t7)
        MEM_W(-0X4, ctx->r15) = ctx->r1;
            goto L_8027AA94;
    }
    // 0x8027AAB4: sw          $at, -0x4($t7)
    MEM_W(-0X4, ctx->r15) = ctx->r1;
    // 0x8027AAB8: lw          $at, 0x0($t4)
    ctx->r1 = MEM_W(ctx->r12, 0X0);
    // 0x8027AABC: addiu       $a1, $zero, 0x3F
    ctx->r5 = ADD32(0, 0X3F);
    // 0x8027AAC0: sw          $at, 0x0($t7)
    MEM_W(0X0, ctx->r15) = ctx->r1;
    // 0x8027AAC4: lw          $t6, 0x4($t4)
    ctx->r14 = MEM_W(ctx->r12, 0X4);
    // 0x8027AAC8: jal         0x8024BC08
    // 0x8027AACC: sw          $t6, 0x4($t7)
    MEM_W(0X4, ctx->r15) = ctx->r14;
    ovl_8024B800_func_8024BC08(rdram, ctx);
        goto after_7;
    // 0x8027AACC: sw          $t6, 0x4($t7)
    MEM_W(0X4, ctx->r15) = ctx->r14;
    after_7:
    // 0x8027AAD0: lui         $at, 0x8028
    ctx->r1 = S32(0X8028 << 16);
    // 0x8027AAD4: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x8027AAD8: lwc1        $f1, -0x1B68($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, -0X1B68);
    // 0x8027AADC: lwc1        $f0, -0x1B64($at)
    ctx->f0.u32l = MEM_W(ctx->r1, -0X1B64);
    // 0x8027AAE0: addiu       $a0, $a0, -0x17C8
    ctx->r4 = ADD32(ctx->r4, -0X17C8);
    // 0x8027AAE4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8027AAE8: addiu       $a2, $zero, 0x1C
    ctx->r6 = ADD32(0, 0X1C);
L_8027AAEC:
    // 0x8027AAEC: lhu         $t9, 0xC($a0)
    ctx->r25 = MEM_HU(ctx->r4, 0XC);
    // 0x8027AAF0: addiu       $a1, $a1, 0x1
    ctx->r5 = ADD32(ctx->r5, 0X1);
    // 0x8027AAF4: beq         $t9, $zero, L_8027AB8C
    if (ctx->r25 == 0) {
        // 0x8027AAF8: nop
    
            goto L_8027AB8C;
    }
    // 0x8027AAF8: nop

    // 0x8027AAFC: lw          $v1, 0xCC($a0)
    ctx->r3 = MEM_W(ctx->r4, 0XCC);
    // 0x8027AB00: nop

    // 0x8027AB04: lwc1        $f8, 0x4($v1)
    ctx->f8.u32l = MEM_W(ctx->r3, 0X4);
    // 0x8027AB08: lw          $v0, 0x30($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X30);
    // 0x8027AB0C: swc1        $f8, 0x44($a0)
    MEM_W(0X44, ctx->r4) = ctx->f8.u32l;
    // 0x8027AB10: lwc1        $f10, 0x8($v1)
    ctx->f10.u32l = MEM_W(ctx->r3, 0X8);
    // 0x8027AB14: nop

    // 0x8027AB18: swc1        $f10, 0x48($a0)
    MEM_W(0X48, ctx->r4) = ctx->f10.u32l;
    // 0x8027AB1C: lwc1        $f16, 0xC($v1)
    ctx->f16.u32l = MEM_W(ctx->r3, 0XC);
    // 0x8027AB20: nop

    // 0x8027AB24: swc1        $f16, 0x4C($a0)
    MEM_W(0X4C, ctx->r4) = ctx->f16.u32l;
    // 0x8027AB28: lwc1        $f18, 0x48($v0)
    ctx->f18.u32l = MEM_W(ctx->r2, 0X48);
    // 0x8027AB2C: nop

    // 0x8027AB30: cvt.d.s     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.fl); 
    ctx->f4.d = CVT_D_S(ctx->f18.fl);
    // 0x8027AB34: mul.d       $f6, $f4, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f0.d); 
    ctx->f6.d = MUL_D(ctx->f4.d, ctx->f0.d);
    // 0x8027AB38: cvt.s.d     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.d); 
    ctx->f8.fl = CVT_S_D(ctx->f6.d);
    // 0x8027AB3C: swc1        $f8, 0x8C($a0)
    MEM_W(0X8C, ctx->r4) = ctx->f8.u32l;
    // 0x8027AB40: lwl         $at, 0x30($v0)
    ctx->r1 = do_lwl(rdram, ctx->r1, ctx->r2, 0X30);
    // 0x8027AB44: lwr         $at, 0x33($v0)
    ctx->r1 = do_lwr(rdram, ctx->r1, ctx->r2, 0X33);
    // 0x8027AB48: lhu         $t3, 0x2($v0)
    ctx->r11 = MEM_HU(ctx->r2, 0X2);
    // 0x8027AB4C: lhu         $t4, 0x3C($v0)
    ctx->r12 = MEM_HU(ctx->r2, 0X3C);
    // 0x8027AB50: swl         $at, 0x1C($v0)
    do_swl(rdram, 0X1C, ctx->r2, ctx->r1);
    // 0x8027AB54: swr         $at, 0x1F($v0)
    do_swr(rdram, 0X1F, ctx->r2, ctx->r1);
    // 0x8027AB58: lwl         $at, 0x34($v0)
    ctx->r1 = do_lwl(rdram, ctx->r1, ctx->r2, 0X34);
    // 0x8027AB5C: andi        $t6, $t3, 0xFF
    ctx->r14 = ctx->r11 & 0XFF;
    // 0x8027AB60: andi        $t7, $t4, 0xFF00
    ctx->r15 = ctx->r12 & 0XFF00;
    // 0x8027AB64: lwr         $at, 0x37($v0)
    ctx->r1 = do_lwr(rdram, ctx->r1, ctx->r2, 0X37);
    // 0x8027AB68: or          $t8, $t6, $t7
    ctx->r24 = ctx->r14 | ctx->r15;
    // 0x8027AB6C: lwc1        $f10, 0x4C($v0)
    ctx->f10.u32l = MEM_W(ctx->r2, 0X4C);
    // 0x8027AB70: sh          $t6, 0x2($v0)
    MEM_H(0X2, ctx->r2) = ctx->r14;
    // 0x8027AB74: andi        $t0, $t8, 0xDFFF
    ctx->r8 = ctx->r24 & 0XDFFF;
    // 0x8027AB78: sh          $t8, 0x2($v0)
    MEM_H(0X2, ctx->r2) = ctx->r24;
    // 0x8027AB7C: swl         $at, 0x20($v0)
    do_swl(rdram, 0X20, ctx->r2, ctx->r1);
    // 0x8027AB80: sh          $t0, 0x2($v0)
    MEM_H(0X2, ctx->r2) = ctx->r8;
    // 0x8027AB84: swr         $at, 0x23($v0)
    do_swr(rdram, 0X23, ctx->r2, ctx->r1);
    // 0x8027AB88: swc1        $f10, 0x24($v0)
    MEM_W(0X24, ctx->r2) = ctx->f10.u32l;
L_8027AB8C:
    // 0x8027AB8C: bne         $a1, $a2, L_8027AAEC
    if (ctx->r5 != ctx->r6) {
        // 0x8027AB90: addiu       $a0, $a0, 0xF8
        ctx->r4 = ADD32(ctx->r4, 0XF8);
            goto L_8027AAEC;
    }
    // 0x8027AB90: addiu       $a0, $a0, 0xF8
    ctx->r4 = ADD32(ctx->r4, 0XF8);
    // 0x8027AB94: lui         $v0, 0x802C
    ctx->r2 = S32(0X802C << 16);
    // 0x8027AB98: lw          $v0, 0x5410($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X5410);
    // 0x8027AB9C: nop

    // 0x8027ABA0: bne         $v0, $zero, L_8027AC04
    if (ctx->r2 != 0) {
        // 0x8027ABA4: addiu       $at, $zero, 0x2
        ctx->r1 = ADD32(0, 0X2);
            goto L_8027AC04;
    }
    // 0x8027ABA4: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x8027ABA8: jal         0x802719DC
    // 0x8027ABAC: addiu       $a0, $zero, 0x301
    ctx->r4 = ADD32(0, 0X301);
    ovl_8024B800_func_802719DC(rdram, ctx);
        goto after_8;
    // 0x8027ABAC: addiu       $a0, $zero, 0x301
    ctx->r4 = ADD32(0, 0X301);
    after_8:
    // 0x8027ABB0: lui         $v0, 0x8028
    ctx->r2 = S32(0X8028 << 16);
    // 0x8027ABB4: lh          $v0, -0x1B60($v0)
    ctx->r2 = MEM_H(ctx->r2, -0X1B60);
    // 0x8027ABB8: nop

    // 0x8027ABBC: andi        $t1, $v0, 0x1
    ctx->r9 = ctx->r2 & 0X1;
    // 0x8027ABC0: beq         $t1, $zero, L_8027ABD8
    if (ctx->r9 == 0) {
        // 0x8027ABC4: andi        $t2, $v0, 0x2
        ctx->r10 = ctx->r2 & 0X2;
            goto L_8027ABD8;
    }
    // 0x8027ABC4: andi        $t2, $v0, 0x2
    ctx->r10 = ctx->r2 & 0X2;
    // 0x8027ABC8: jal         0x80077750
    // 0x8027ABCC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80077750(rdram, ctx);
        goto after_9;
    // 0x8027ABCC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_9:
    // 0x8027ABD0: b           L_8027AC84
    // 0x8027ABD4: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_8027AC84;
    // 0x8027ABD4: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_8027ABD8:
    // 0x8027ABD8: beq         $t2, $zero, L_8027ABF0
    if (ctx->r10 == 0) {
        // 0x8027ABDC: nop
    
            goto L_8027ABF0;
    }
    // 0x8027ABDC: nop

    // 0x8027ABE0: jal         0x800779A4
    // 0x8027ABE4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_800779A4(rdram, ctx);
        goto after_10;
    // 0x8027ABE4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_10:
    // 0x8027ABE8: b           L_8027AC84
    // 0x8027ABEC: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_8027AC84;
    // 0x8027ABEC: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_8027ABF0:
    // 0x8027ABF0: jal         0x800777DC
    // 0x8027ABF4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_800777DC(rdram, ctx);
        goto after_11;
    // 0x8027ABF4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_11:
    // 0x8027ABF8: b           L_8027AC84
    // 0x8027ABFC: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_8027AC84;
    // 0x8027ABFC: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x8027AC00: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
L_8027AC04:
    // 0x8027AC04: bne         $v0, $at, L_8027AC50
    if (ctx->r2 != ctx->r1) {
        // 0x8027AC08: addiu       $at, $zero, 0x3
        ctx->r1 = ADD32(0, 0X3);
            goto L_8027AC50;
    }
    // 0x8027AC08: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x8027AC0C: jal         0x802719DC
    // 0x8027AC10: addiu       $a0, $zero, 0x305
    ctx->r4 = ADD32(0, 0X305);
    ovl_8024B800_func_802719DC(rdram, ctx);
        goto after_12;
    // 0x8027AC10: addiu       $a0, $zero, 0x305
    ctx->r4 = ADD32(0, 0X305);
    after_12:
    // 0x8027AC14: lui         $t3, 0x8028
    ctx->r11 = S32(0X8028 << 16);
    // 0x8027AC18: lh          $t3, -0x1B60($t3)
    ctx->r11 = MEM_H(ctx->r11, -0X1B60);
    // 0x8027AC1C: nop

    // 0x8027AC20: andi        $t5, $t3, 0x1
    ctx->r13 = ctx->r11 & 0X1;
    // 0x8027AC24: beq         $t5, $zero, L_8027AC3C
    if (ctx->r13 == 0) {
        // 0x8027AC28: nop
    
            goto L_8027AC3C;
    }
    // 0x8027AC28: nop

    // 0x8027AC2C: jal         0x80077B64
    // 0x8027AC30: nop

    func_80077B64(rdram, ctx);
        goto after_13;
    // 0x8027AC30: nop

    after_13:
    // 0x8027AC34: b           L_8027AC84
    // 0x8027AC38: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_8027AC84;
    // 0x8027AC38: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_8027AC3C:
    // 0x8027AC3C: jal         0x800777DC
    // 0x8027AC40: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_800777DC(rdram, ctx);
        goto after_14;
    // 0x8027AC40: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_14:
    // 0x8027AC44: b           L_8027AC84
    // 0x8027AC48: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_8027AC84;
    // 0x8027AC48: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x8027AC4C: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
L_8027AC50:
    // 0x8027AC50: bne         $v0, $at, L_8027AC6C
    if (ctx->r2 != ctx->r1) {
        // 0x8027AC54: addiu       $at, $zero, 0x4
        ctx->r1 = ADD32(0, 0X4);
            goto L_8027AC6C;
    }
    // 0x8027AC54: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x8027AC58: jal         0x802719DC
    // 0x8027AC5C: addiu       $a0, $zero, 0x328
    ctx->r4 = ADD32(0, 0X328);
    ovl_8024B800_func_802719DC(rdram, ctx);
        goto after_15;
    // 0x8027AC5C: addiu       $a0, $zero, 0x328
    ctx->r4 = ADD32(0, 0X328);
    after_15:
    // 0x8027AC60: b           L_8027AC84
    // 0x8027AC64: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_8027AC84;
    // 0x8027AC64: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x8027AC68: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
L_8027AC6C:
    // 0x8027AC6C: bne         $v0, $at, L_8027AC84
    if (ctx->r2 != ctx->r1) {
        // 0x8027AC70: lw          $ra, 0x24($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X24);
            goto L_8027AC84;
    }
    // 0x8027AC70: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x8027AC74: lw          $a0, 0x38($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X38);
    // 0x8027AC78: jal         0x80079D30
    // 0x8027AC7C: nop

    func_80079D30(rdram, ctx);
        goto after_16;
    // 0x8027AC7C: nop

    after_16:
    // 0x8027AC80: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_8027AC84:
    // 0x8027AC84: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x8027AC88: jr          $ra
    // 0x8027AC8C: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
    return;
    // 0x8027AC8C: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
;}
