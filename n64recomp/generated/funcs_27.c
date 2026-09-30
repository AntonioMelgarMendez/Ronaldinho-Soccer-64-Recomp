#include "iss64_recomp.h"
#include "funcs.h"

RECOMP_FUNC void func_80059E2C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80059E2C: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x80059E30: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80059E34: lh          $t6, 0x2E($a0)
    ctx->r14 = MEM_H(ctx->r4, 0X2E);
    // 0x80059E38: lh          $t7, 0x30($a0)
    ctx->r15 = MEM_H(ctx->r4, 0X30);
    // 0x80059E3C: mtc1        $t6, $f4
    ctx->f4.u32l = ctx->r14;
    // 0x80059E40: mtc1        $t7, $f8
    ctx->f8.u32l = ctx->r15;
    // 0x80059E44: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x80059E48: lw          $t8, 0xCC($a0)
    ctx->r24 = MEM_W(ctx->r4, 0XCC);
    // 0x80059E4C: lui         $t1, 0x8012
    ctx->r9 = S32(0X8012 << 16);
    // 0x80059E50: cvt.s.w     $f0, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    ctx->f0.fl = CVT_S_W(ctx->f8.u32l);
    // 0x80059E54: swc1        $f6, 0x4C($a0)
    MEM_W(0X4C, ctx->r4) = ctx->f6.u32l;
    // 0x80059E58: addiu       $at, $zero, 0x8
    ctx->r1 = ADD32(0, 0X8);
    // 0x80059E5C: swc1        $f0, 0x44($a0)
    MEM_W(0X44, ctx->r4) = ctx->f0.u32l;
    // 0x80059E60: swc1        $f0, 0x4($t8)
    MEM_W(0X4, ctx->r24) = ctx->f0.u32l;
    // 0x80059E64: lw          $t9, 0xCC($a0)
    ctx->r25 = MEM_W(ctx->r4, 0XCC);
    // 0x80059E68: lwc1        $f10, 0x48($a0)
    ctx->f10.u32l = MEM_W(ctx->r4, 0X48);
    // 0x80059E6C: lui         $v0, 0x8009
    ctx->r2 = S32(0X8009 << 16);
    // 0x80059E70: swc1        $f10, 0x8($t9)
    MEM_W(0X8, ctx->r25) = ctx->f10.u32l;
    // 0x80059E74: lw          $t0, 0xCC($a0)
    ctx->r8 = MEM_W(ctx->r4, 0XCC);
    // 0x80059E78: lwc1        $f16, 0x4C($a0)
    ctx->f16.u32l = MEM_W(ctx->r4, 0X4C);
    // 0x80059E7C: lui         $t8, 0x8009
    ctx->r24 = S32(0X8009 << 16);
    // 0x80059E80: swc1        $f16, 0xC($t0)
    MEM_W(0XC, ctx->r8) = ctx->f16.u32l;
    // 0x80059E84: lhu         $t1, 0xB78($t1)
    ctx->r9 = MEM_HU(ctx->r9, 0XB78);
    // 0x80059E88: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    // 0x80059E8C: beq         $t1, $at, L_80059F04
    if (ctx->r9 == ctx->r1) {
        // 0x80059E90: nop
    
            goto L_80059F04;
    }
    // 0x80059E90: nop

    // 0x80059E94: lw          $v0, 0x3B20($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X3B20);
    // 0x80059E98: lwc1        $f12, 0x4C($a0)
    ctx->f12.u32l = MEM_W(ctx->r4, 0X4C);
    // 0x80059E9C: lh          $t2, 0xE8($v0)
    ctx->r10 = MEM_H(ctx->r2, 0XE8);
    // 0x80059EA0: lh          $t3, 0xEA($v0)
    ctx->r11 = MEM_H(ctx->r2, 0XEA);
    // 0x80059EA4: mtc1        $t2, $f18
    ctx->f18.u32l = ctx->r10;
    // 0x80059EA8: mtc1        $t3, $f4
    ctx->f4.u32l = ctx->r11;
    // 0x80059EAC: cvt.s.w     $f18, $f18
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    ctx->f18.fl = CVT_S_W(ctx->f18.u32l);
    // 0x80059EB0: lwc1        $f14, 0x44($a0)
    ctx->f14.u32l = MEM_W(ctx->r4, 0X44);
    // 0x80059EB4: addiu       $t4, $sp, 0x28
    ctx->r12 = ADD32(ctx->r29, 0X28);
    // 0x80059EB8: cvt.s.w     $f4, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    ctx->f4.fl = CVT_S_W(ctx->f4.u32l);
    // 0x80059EBC: mfc1        $a2, $f18
    ctx->r6 = (int32_t)ctx->f18.u32l;
    // 0x80059EC0: sw          $t4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r12;
    // 0x80059EC4: mfc1        $a3, $f4
    ctx->r7 = (int32_t)ctx->f4.u32l;
    // 0x80059EC8: jal         0x80272B1C
    // 0x80059ECC: sw          $a0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r4;
    LOOKUP_FUNC(0x80272B1C)(rdram, ctx);
        goto after_0;
    // 0x80059ECC: sw          $a0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r4;
    after_0:
    // 0x80059ED0: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    // 0x80059ED4: lwc1        $f6, 0x28($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X28);
    // 0x80059ED8: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x80059EDC: swc1        $f6, 0x8C($a0)
    MEM_W(0X8C, ctx->r4) = ctx->f6.u32l;
    // 0x80059EE0: lwc1        $f8, 0x8C($a0)
    ctx->f8.u32l = MEM_W(ctx->r4, 0X8C);
    // 0x80059EE4: lwc1        $f16, -0x685C($at)
    ctx->f16.u32l = MEM_W(ctx->r1, -0X685C);
    // 0x80059EE8: lwc1        $f17, -0x6860($at)
    ctx->f_odd[(17 - 1) * 2] = MEM_W(ctx->r1, -0X6860);
    // 0x80059EEC: cvt.d.s     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f10.d = CVT_D_S(ctx->f8.fl);
    // 0x80059EF0: mul.d       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f16.d); 
    ctx->f18.d = MUL_D(ctx->f10.d, ctx->f16.d);
    // 0x80059EF4: lw          $t5, 0xCC($a0)
    ctx->r13 = MEM_W(ctx->r4, 0XCC);
    // 0x80059EF8: cvt.s.d     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.d); 
    ctx->f4.fl = CVT_S_D(ctx->f18.d);
    // 0x80059EFC: b           L_80059F74
    // 0x80059F00: swc1        $f4, 0x14($t5)
    MEM_W(0X14, ctx->r13) = ctx->f4.u32l;
        goto L_80059F74;
    // 0x80059F00: swc1        $f4, 0x14($t5)
    MEM_W(0X14, ctx->r13) = ctx->f4.u32l;
L_80059F04:
    // 0x80059F04: lw          $t8, 0x3B20($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X3B20);
    // 0x80059F08: lh          $t6, 0x2E($a0)
    ctx->r14 = MEM_H(ctx->r4, 0X2E);
    // 0x80059F0C: lw          $t9, 0xB4($t8)
    ctx->r25 = MEM_W(ctx->r24, 0XB4);
    // 0x80059F10: lh          $t7, 0x30($a0)
    ctx->r15 = MEM_H(ctx->r4, 0X30);
    // 0x80059F14: lh          $t0, 0x8B8($t9)
    ctx->r8 = MEM_H(ctx->r25, 0X8B8);
    // 0x80059F18: mtc1        $t6, $f6
    ctx->f6.u32l = ctx->r14;
    // 0x80059F1C: mtc1        $t0, $f10
    ctx->f10.u32l = ctx->r8;
    // 0x80059F20: mtc1        $t7, $f8
    ctx->f8.u32l = ctx->r15;
    // 0x80059F24: cvt.s.w     $f10, $f10
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 10);
    ctx->f10.fl = CVT_S_W(ctx->f10.u32l);
    // 0x80059F28: addiu       $t1, $sp, 0x28
    ctx->r9 = ADD32(ctx->r29, 0X28);
    // 0x80059F2C: sw          $t1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r9;
    // 0x80059F30: mfc1        $a2, $f10
    ctx->r6 = (int32_t)ctx->f10.u32l;
    // 0x80059F34: sw          $a0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r4;
    // 0x80059F38: cvt.s.w     $f12, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    ctx->f12.fl = CVT_S_W(ctx->f6.u32l);
    // 0x80059F3C: jal         0x80272B1C
    // 0x80059F40: cvt.s.w     $f14, $f8
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 8);
    ctx->f14.fl = CVT_S_W(ctx->f8.u32l);
    LOOKUP_FUNC(0x80272B1C)(rdram, ctx);
        goto after_1;
    // 0x80059F40: cvt.s.w     $f14, $f8
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 8);
    ctx->f14.fl = CVT_S_W(ctx->f8.u32l);
    after_1:
    // 0x80059F44: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    // 0x80059F48: lwc1        $f16, 0x28($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X28);
    // 0x80059F4C: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x80059F50: swc1        $f16, 0x8C($a0)
    MEM_W(0X8C, ctx->r4) = ctx->f16.u32l;
    // 0x80059F54: lwc1        $f18, 0x8C($a0)
    ctx->f18.u32l = MEM_W(ctx->r4, 0X8C);
    // 0x80059F58: lwc1        $f6, -0x6854($at)
    ctx->f6.u32l = MEM_W(ctx->r1, -0X6854);
    // 0x80059F5C: lwc1        $f7, -0x6858($at)
    ctx->f_odd[(7 - 1) * 2] = MEM_W(ctx->r1, -0X6858);
    // 0x80059F60: cvt.d.s     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.fl); 
    ctx->f4.d = CVT_D_S(ctx->f18.fl);
    // 0x80059F64: mul.d       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f6.d); 
    ctx->f8.d = MUL_D(ctx->f4.d, ctx->f6.d);
    // 0x80059F68: lw          $t2, 0xCC($a0)
    ctx->r10 = MEM_W(ctx->r4, 0XCC);
    // 0x80059F6C: cvt.s.d     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.d); 
    ctx->f10.fl = CVT_S_D(ctx->f8.d);
    // 0x80059F70: swc1        $f10, 0x14($t2)
    MEM_W(0X14, ctx->r10) = ctx->f10.u32l;
L_80059F74:
    // 0x80059F74: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80059F78: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x80059F7C: jr          $ra
    // 0x80059F80: nop

    return;
    // 0x80059F80: nop

;}
RECOMP_FUNC void func_80059F84(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80059F84: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80059F88: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x80059F8C: lui         $s0, 0x8009
    ctx->r16 = S32(0X8009 << 16);
    // 0x80059F90: addiu       $s0, $s0, 0x3B20
    ctx->r16 = ADD32(ctx->r16, 0X3B20);
    // 0x80059F94: lw          $v0, 0x0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X0);
    // 0x80059F98: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x80059F9C: sw          $s3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r19;
    // 0x80059FA0: sw          $s2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r18;
    // 0x80059FA4: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x80059FA8: lh          $t6, 0xE8($v0)
    ctx->r14 = MEM_H(ctx->r2, 0XE8);
    // 0x80059FAC: lui         $s3, 0x8012
    ctx->r19 = S32(0X8012 << 16);
    // 0x80059FB0: mtc1        $t6, $f4
    ctx->f4.u32l = ctx->r14;
    // 0x80059FB4: addiu       $s3, $s3, -0x2CF0
    ctx->r19 = ADD32(ctx->r19, -0X2CF0);
    // 0x80059FB8: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x80059FBC: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    // 0x80059FC0: swc1        $f6, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->f6.u32l;
    // 0x80059FC4: lw          $v0, 0x0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X0);
    // 0x80059FC8: nop

    // 0x80059FCC: lh          $t7, 0xEA($v0)
    ctx->r15 = MEM_H(ctx->r2, 0XEA);
    // 0x80059FD0: nop

    // 0x80059FD4: mtc1        $t7, $f8
    ctx->f8.u32l = ctx->r15;
    // 0x80059FD8: nop

    // 0x80059FDC: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x80059FE0: swc1        $f10, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->f10.u32l;
    // 0x80059FE4: lw          $t8, 0x0($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X0);
    // 0x80059FE8: cfc1        $t0, $FpcCsr
    ctx->r8 = get_cop1_cs();
    // 0x80059FEC: sh          $zero, 0xBE($t8)
    MEM_H(0XBE, ctx->r24) = 0;
    // 0x80059FF0: lw          $t9, 0x0($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X0);
    // 0x80059FF4: ori         $at, $t0, 0x3
    ctx->r1 = ctx->r8 | 0X3;
    // 0x80059FF8: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x80059FFC: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x8005A000: lwc1        $f16, 0x8($t9)
    ctx->f16.u32l = MEM_W(ctx->r25, 0X8);
    // 0x8005A004: nop

    // 0x8005A008: cvt.w.s     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.u32l = CVT_W_S(ctx->f16.fl);
    // 0x8005A00C: mfc1        $a1, $f18
    ctx->r5 = (int32_t)ctx->f18.u32l;
    // 0x8005A010: ctc1        $t0, $FpcCsr
    set_cop1_cs(ctx->r8);
    // 0x8005A014: sll         $t1, $a1, 16
    ctx->r9 = S32(ctx->r5 << 16);
    // 0x8005A018: jal         0x8026A7C8
    // 0x8005A01C: sra         $a1, $t1, 16
    ctx->r5 = S32(SIGNED(ctx->r9) >> 16);
    LOOKUP_FUNC(0x8026A7C8)(rdram, ctx);
        goto after_0;
    // 0x8005A01C: sra         $a1, $t1, 16
    ctx->r5 = S32(SIGNED(ctx->r9) >> 16);
    after_0:
    // 0x8005A020: cfc1        $t4, $FpcCsr
    ctx->r12 = get_cop1_cs();
    // 0x8005A024: lw          $t3, 0x0($s0)
    ctx->r11 = MEM_W(ctx->r16, 0X0);
    // 0x8005A028: ori         $at, $t4, 0x3
    ctx->r1 = ctx->r12 | 0X3;
    // 0x8005A02C: sh          $v0, 0x8B0($s3)
    MEM_H(0X8B0, ctx->r19) = ctx->r2;
    // 0x8005A030: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x8005A034: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x8005A038: lwc1        $f4, 0x8($t3)
    ctx->f4.u32l = MEM_W(ctx->r11, 0X8);
    // 0x8005A03C: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x8005A040: cvt.w.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = CVT_W_S(ctx->f4.fl);
    // 0x8005A044: addiu       $a0, $a0, -0x225C
    ctx->r4 = ADD32(ctx->r4, -0X225C);
    // 0x8005A048: mfc1        $a1, $f6
    ctx->r5 = (int32_t)ctx->f6.u32l;
    // 0x8005A04C: ctc1        $t4, $FpcCsr
    set_cop1_cs(ctx->r12);
    // 0x8005A050: sll         $t5, $a1, 16
    ctx->r13 = S32(ctx->r5 << 16);
    // 0x8005A054: jal         0x8026A7C8
    // 0x8005A058: sra         $a1, $t5, 16
    ctx->r5 = S32(SIGNED(ctx->r13) >> 16);
    LOOKUP_FUNC(0x8026A7C8)(rdram, ctx);
        goto after_1;
    // 0x8005A058: sra         $a1, $t5, 16
    ctx->r5 = S32(SIGNED(ctx->r13) >> 16);
    after_1:
    // 0x8005A05C: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x8005A060: sh          $v0, 0x1344($s3)
    MEM_H(0X1344, ctx->r19) = ctx->r2;
    // 0x8005A064: jal         0x80266FCC
    // 0x8005A068: addiu       $a0, $a0, -0x225C
    ctx->r4 = ADD32(ctx->r4, -0X225C);
    LOOKUP_FUNC(0x80266FCC)(rdram, ctx);
        goto after_2;
    // 0x8005A068: addiu       $a0, $a0, -0x225C
    ctx->r4 = ADD32(ctx->r4, -0X225C);
    after_2:
    // 0x8005A06C: jal         0x80059DD8
    // 0x8005A070: nop

    func_80059DD8(rdram, ctx);
        goto after_3;
    // 0x8005A070: nop

    after_3:
    // 0x8005A074: jal         0x8025267C
    // 0x8005A078: nop

    LOOKUP_FUNC(0x8025267C)(rdram, ctx);
        goto after_4;
    // 0x8005A078: nop

    after_4:
    // 0x8005A07C: jal         0x80059DD8
    // 0x8005A080: nop

    func_80059DD8(rdram, ctx);
        goto after_5;
    // 0x8005A080: nop

    after_5:
    // 0x8005A084: jal         0x8025267C
    // 0x8005A088: nop

    LOOKUP_FUNC(0x8025267C)(rdram, ctx);
        goto after_6;
    // 0x8005A088: nop

    after_6:
    // 0x8005A08C: jal         0x80059DD8
    // 0x8005A090: nop

    func_80059DD8(rdram, ctx);
        goto after_7;
    // 0x8005A090: nop

    after_7:
    // 0x8005A094: lhu         $t7, 0x10($s3)
    ctx->r15 = MEM_HU(ctx->r19, 0X10);
    // 0x8005A098: lhu         $t9, 0xAA4($s3)
    ctx->r25 = MEM_HU(ctx->r19, 0XAA4);
    // 0x8005A09C: ori         $t8, $t7, 0x4
    ctx->r24 = ctx->r15 | 0X4;
    // 0x8005A0A0: ori         $t0, $t9, 0x4
    ctx->r8 = ctx->r25 | 0X4;
    // 0x8005A0A4: sh          $t8, 0x10($s3)
    MEM_H(0X10, ctx->r19) = ctx->r24;
    // 0x8005A0A8: jal         0x8025267C
    // 0x8005A0AC: sh          $t0, 0xAA4($s3)
    MEM_H(0XAA4, ctx->r19) = ctx->r8;
    LOOKUP_FUNC(0x8025267C)(rdram, ctx);
        goto after_8;
    // 0x8005A0AC: sh          $t0, 0xAA4($s3)
    MEM_H(0XAA4, ctx->r19) = ctx->r8;
    after_8:
    // 0x8005A0B0: lui         $s0, 0x8012
    ctx->r16 = S32(0X8012 << 16);
    // 0x8005A0B4: addiu       $s0, $s0, -0x17C8
    ctx->r16 = ADD32(ctx->r16, -0X17C8);
    // 0x8005A0B8: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    // 0x8005A0BC: addiu       $s2, $zero, 0x1C
    ctx->r18 = ADD32(0, 0X1C);
L_8005A0C0:
    // 0x8005A0C0: jal         0x80059E2C
    // 0x8005A0C4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80059E2C(rdram, ctx);
        goto after_9;
    // 0x8005A0C4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_9:
    // 0x8005A0C8: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x8005A0CC: bne         $s1, $s2, L_8005A0C0
    if (ctx->r17 != ctx->r18) {
        // 0x8005A0D0: addiu       $s0, $s0, 0xF8
        ctx->r16 = ADD32(ctx->r16, 0XF8);
            goto L_8005A0C0;
    }
    // 0x8005A0D0: addiu       $s0, $s0, 0xF8
    ctx->r16 = ADD32(ctx->r16, 0XF8);
    // 0x8005A0D4: lui         $t1, 0x8012
    ctx->r9 = S32(0X8012 << 16);
    // 0x8005A0D8: lhu         $t1, 0xB78($t1)
    ctx->r9 = MEM_HU(ctx->r9, 0XB78);
    // 0x8005A0DC: addiu       $at, $zero, 0x8
    ctx->r1 = ADD32(0, 0X8);
    // 0x8005A0E0: beq         $t1, $at, L_8005A10C
    if (ctx->r9 == ctx->r1) {
        // 0x8005A0E4: lui         $t2, 0x8012
        ctx->r10 = S32(0X8012 << 16);
            goto L_8005A10C;
    }
    // 0x8005A0E4: lui         $t2, 0x8012
    ctx->r10 = S32(0X8012 << 16);
    // 0x8005A0E8: lbu         $t2, -0x32A4($t2)
    ctx->r10 = MEM_BU(ctx->r10, -0X32A4);
    // 0x8005A0EC: addiu       $at, $zero, 0x7
    ctx->r1 = ADD32(0, 0X7);
    // 0x8005A0F0: beq         $t2, $at, L_8005A110
    if (ctx->r10 == ctx->r1) {
        // 0x8005A0F4: lw          $ra, 0x24($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X24);
            goto L_8005A110;
    }
    // 0x8005A0F4: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x8005A0F8: jal         0x80059BB0
    // 0x8005A0FC: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    func_80059BB0(rdram, ctx);
        goto after_10;
    // 0x8005A0FC: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    after_10:
    // 0x8005A100: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x8005A104: jal         0x80059BB0
    // 0x8005A108: addiu       $a0, $a0, -0x225C
    ctx->r4 = ADD32(ctx->r4, -0X225C);
    func_80059BB0(rdram, ctx);
        goto after_11;
    // 0x8005A108: addiu       $a0, $a0, -0x225C
    ctx->r4 = ADD32(ctx->r4, -0X225C);
    after_11:
L_8005A10C:
    // 0x8005A10C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_8005A110:
    // 0x8005A110: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x8005A114: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x8005A118: lw          $s2, 0x1C($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X1C);
    // 0x8005A11C: lw          $s3, 0x20($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X20);
    // 0x8005A120: jr          $ra
    // 0x8005A124: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x8005A124: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_8005A128(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8005A128: lui         $t6, 0x8013
    ctx->r14 = S32(0X8013 << 16);
    // 0x8005A12C: lhu         $t6, 0xB02($t6)
    ctx->r14 = MEM_HU(ctx->r14, 0XB02);
    // 0x8005A130: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x8005A134: ori         $t7, $t6, 0x4000
    ctx->r15 = ctx->r14 | 0X4000;
    // 0x8005A138: sh          $t7, 0xB02($at)
    MEM_H(0XB02, ctx->r1) = ctx->r15;
    // 0x8005A13C: lui         $t8, 0x8013
    ctx->r24 = S32(0X8013 << 16);
    // 0x8005A140: lhu         $t8, 0xB3C($t8)
    ctx->r24 = MEM_HU(ctx->r24, 0XB3C);
    // 0x8005A144: lui         $v0, 0x8013
    ctx->r2 = S32(0X8013 << 16);
    // 0x8005A148: addiu       $v0, $v0, 0xB5C
    ctx->r2 = ADD32(ctx->r2, 0XB5C);
    // 0x8005A14C: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x8005A150: ori         $t9, $t8, 0x4000
    ctx->r25 = ctx->r24 | 0X4000;
    // 0x8005A154: sh          $t9, 0xB3C($at)
    MEM_H(0XB3C, ctx->r1) = ctx->r25;
    // 0x8005A158: lhu         $t6, 0x98($v0)
    ctx->r14 = MEM_HU(ctx->r2, 0X98);
    // 0x8005A15C: lhu         $t4, 0x5E($v0)
    ctx->r12 = MEM_HU(ctx->r2, 0X5E);
    // 0x8005A160: lhu         $t2, 0x3C($v0)
    ctx->r10 = MEM_HU(ctx->r2, 0X3C);
    // 0x8005A164: lhu         $t0, 0x2($v0)
    ctx->r8 = MEM_HU(ctx->r2, 0X2);
    // 0x8005A168: ori         $t7, $t6, 0x4000
    ctx->r15 = ctx->r14 | 0X4000;
    // 0x8005A16C: ori         $t5, $t4, 0x4000
    ctx->r13 = ctx->r12 | 0X4000;
    // 0x8005A170: ori         $t3, $t2, 0x4000
    ctx->r11 = ctx->r10 | 0X4000;
    // 0x8005A174: ori         $t1, $t0, 0x4000
    ctx->r9 = ctx->r8 | 0X4000;
    // 0x8005A178: sh          $t1, 0x2($v0)
    MEM_H(0X2, ctx->r2) = ctx->r9;
    // 0x8005A17C: sh          $t3, 0x3C($v0)
    MEM_H(0X3C, ctx->r2) = ctx->r11;
    // 0x8005A180: sh          $t5, 0x5E($v0)
    MEM_H(0X5E, ctx->r2) = ctx->r13;
    // 0x8005A184: sh          $t7, 0x98($v0)
    MEM_H(0X98, ctx->r2) = ctx->r15;
    // 0x8005A188: addiu       $v0, $v0, 0xB8
    ctx->r2 = ADD32(ctx->r2, 0XB8);
    // 0x8005A18C: addiu       $v1, $zero, 0x3
    ctx->r3 = ADD32(0, 0X3);
    // 0x8005A190: addiu       $a0, $zero, 0x1F
    ctx->r4 = ADD32(0, 0X1F);
L_8005A194:
    // 0x8005A194: lhu         $t2, 0x5E($v0)
    ctx->r10 = MEM_HU(ctx->r2, 0X5E);
    // 0x8005A198: lhu         $t8, 0x2($v0)
    ctx->r24 = MEM_HU(ctx->r2, 0X2);
    // 0x8005A19C: lhu         $t0, 0x3C($v0)
    ctx->r8 = MEM_HU(ctx->r2, 0X3C);
    // 0x8005A1A0: ori         $t3, $t2, 0x4000
    ctx->r11 = ctx->r10 | 0X4000;
    // 0x8005A1A4: ori         $t9, $t8, 0x4000
    ctx->r25 = ctx->r24 | 0X4000;
    // 0x8005A1A8: ori         $t1, $t0, 0x4000
    ctx->r9 = ctx->r8 | 0X4000;
    // 0x8005A1AC: lhu         $t0, 0x116($v0)
    ctx->r8 = MEM_HU(ctx->r2, 0X116);
    // 0x8005A1B0: lhu         $t8, 0xF4($v0)
    ctx->r24 = MEM_HU(ctx->r2, 0XF4);
    // 0x8005A1B4: lhu         $t2, 0x150($v0)
    ctx->r10 = MEM_HU(ctx->r2, 0X150);
    // 0x8005A1B8: lhu         $t4, 0x98($v0)
    ctx->r12 = MEM_HU(ctx->r2, 0X98);
    // 0x8005A1BC: lhu         $t6, 0xBA($v0)
    ctx->r14 = MEM_HU(ctx->r2, 0XBA);
    // 0x8005A1C0: sh          $t3, 0x5E($v0)
    MEM_H(0X5E, ctx->r2) = ctx->r11;
    // 0x8005A1C4: sh          $t9, 0x2($v0)
    MEM_H(0X2, ctx->r2) = ctx->r25;
    // 0x8005A1C8: sh          $t1, 0x3C($v0)
    MEM_H(0X3C, ctx->r2) = ctx->r9;
    // 0x8005A1CC: addiu       $v1, $v1, 0x4
    ctx->r3 = ADD32(ctx->r3, 0X4);
    // 0x8005A1D0: ori         $t1, $t0, 0x4000
    ctx->r9 = ctx->r8 | 0X4000;
    // 0x8005A1D4: ori         $t9, $t8, 0x4000
    ctx->r25 = ctx->r24 | 0X4000;
    // 0x8005A1D8: ori         $t3, $t2, 0x4000
    ctx->r11 = ctx->r10 | 0X4000;
    // 0x8005A1DC: ori         $t5, $t4, 0x4000
    ctx->r13 = ctx->r12 | 0X4000;
    // 0x8005A1E0: ori         $t7, $t6, 0x4000
    ctx->r15 = ctx->r14 | 0X4000;
    // 0x8005A1E4: sh          $t7, 0xBA($v0)
    MEM_H(0XBA, ctx->r2) = ctx->r15;
    // 0x8005A1E8: sh          $t5, 0x98($v0)
    MEM_H(0X98, ctx->r2) = ctx->r13;
    // 0x8005A1EC: sh          $t3, 0x150($v0)
    MEM_H(0X150, ctx->r2) = ctx->r11;
    // 0x8005A1F0: sh          $t9, 0xF4($v0)
    MEM_H(0XF4, ctx->r2) = ctx->r25;
    // 0x8005A1F4: sh          $t1, 0x116($v0)
    MEM_H(0X116, ctx->r2) = ctx->r9;
    // 0x8005A1F8: bne         $v1, $a0, L_8005A194
    if (ctx->r3 != ctx->r4) {
        // 0x8005A1FC: addiu       $v0, $v0, 0x170
        ctx->r2 = ADD32(ctx->r2, 0X170);
            goto L_8005A194;
    }
    // 0x8005A1FC: addiu       $v0, $v0, 0x170
    ctx->r2 = ADD32(ctx->r2, 0X170);
    // 0x8005A200: jr          $ra
    // 0x8005A204: nop

    return;
    // 0x8005A204: nop

;}
RECOMP_FUNC void func_8005A208(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8005A208: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8005A20C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8005A210: jal         0x8005A128
    // 0x8005A214: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    func_8005A128(rdram, ctx);
        goto after_0;
    // 0x8005A214: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    after_0:
    // 0x8005A218: lui         $v1, 0x8009
    ctx->r3 = S32(0X8009 << 16);
    // 0x8005A21C: addiu       $v1, $v1, 0x3B20
    ctx->r3 = ADD32(ctx->r3, 0X3B20);
    // 0x8005A220: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x8005A224: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x8005A228: lh          $t6, 0xE8($v0)
    ctx->r14 = MEM_H(ctx->r2, 0XE8);
    // 0x8005A22C: lui         $s0, 0x8012
    ctx->r16 = S32(0X8012 << 16);
    // 0x8005A230: mtc1        $t6, $f4
    ctx->f4.u32l = ctx->r14;
    // 0x8005A234: addiu       $s0, $s0, 0xB2C
    ctx->r16 = ADD32(ctx->r16, 0XB2C);
    // 0x8005A238: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x8005A23C: lui         $t9, 0x8012
    ctx->r25 = S32(0X8012 << 16);
    // 0x8005A240: swc1        $f6, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->f6.u32l;
    // 0x8005A244: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x8005A248: nop

    // 0x8005A24C: lh          $t7, 0xEA($v0)
    ctx->r15 = MEM_H(ctx->r2, 0XEA);
    // 0x8005A250: nop

    // 0x8005A254: mtc1        $t7, $f8
    ctx->f8.u32l = ctx->r15;
    // 0x8005A258: nop

    // 0x8005A25C: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x8005A260: swc1        $f10, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->f10.u32l;
    // 0x8005A264: lw          $t8, 0x0($v1)
    ctx->r24 = MEM_W(ctx->r3, 0X0);
    // 0x8005A268: nop

    // 0x8005A26C: swc1        $f16, 0x4($t8)
    MEM_W(0X4, ctx->r24) = ctx->f16.u32l;
    // 0x8005A270: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    // 0x8005A274: nop

    // 0x8005A278: beq         $a0, $zero, L_8005A3C8
    if (ctx->r4 == 0) {
        // 0x8005A27C: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_8005A3C8;
    }
    // 0x8005A27C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8005A280: lhu         $t9, 0xB7E($t9)
    ctx->r25 = MEM_HU(ctx->r25, 0XB7E);
    // 0x8005A284: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x8005A288: andi        $t0, $t9, 0x4
    ctx->r8 = ctx->r25 & 0X4;
    // 0x8005A28C: bne         $t0, $zero, L_8005A3C4
    if (ctx->r8 != 0) {
        // 0x8005A290: addiu       $v0, $v0, -0x2CF0
        ctx->r2 = ADD32(ctx->r2, -0X2CF0);
            goto L_8005A3C4;
    }
    // 0x8005A290: addiu       $v0, $v0, -0x2CF0
    ctx->r2 = ADD32(ctx->r2, -0X2CF0);
    // 0x8005A294: lhu         $t1, 0xA9C($v0)
    ctx->r9 = MEM_HU(ctx->r2, 0XA9C);
    // 0x8005A298: lhu         $t2, 0x8($v0)
    ctx->r10 = MEM_HU(ctx->r2, 0X8);
    // 0x8005A29C: lui         $t5, 0x8012
    ctx->r13 = S32(0X8012 << 16);
    // 0x8005A2A0: and         $t3, $t1, $t2
    ctx->r11 = ctx->r9 & ctx->r10;
    // 0x8005A2A4: andi        $t4, $t3, 0x100
    ctx->r12 = ctx->r11 & 0X100;
    // 0x8005A2A8: bne         $t4, $zero, L_8005A3C8
    if (ctx->r12 != 0) {
        // 0x8005A2AC: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_8005A3C8;
    }
    // 0x8005A2AC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8005A2B0: lhu         $t5, 0xB78($t5)
    ctx->r13 = MEM_HU(ctx->r13, 0XB78);
    // 0x8005A2B4: nop

    // 0x8005A2B8: addiu       $t6, $t5, -0x2
    ctx->r14 = ADD32(ctx->r13, -0X2);
    // 0x8005A2BC: sltiu       $at, $t6, 0x6
    ctx->r1 = ctx->r14 < 0X6 ? 1 : 0;
    // 0x8005A2C0: beq         $at, $zero, L_8005A3C4
    if (ctx->r1 == 0) {
        // 0x8005A2C4: sll         $t6, $t6, 2
        ctx->r14 = S32(ctx->r14 << 2);
            goto L_8005A3C4;
    }
    // 0x8005A2C4: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x8005A2C8: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x8005A2CC: addu        $at, $at, $t6
    gpr jr_addend_8005A2D8 = ctx->r14;
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x8005A2D0: lw          $t6, -0x6850($at)
    ctx->r14 = ADD32(ctx->r1, -0X6850);
    // 0x8005A2D4: nop

    // 0x8005A2D8: jr          $t6
    // 0x8005A2DC: nop

    switch (jr_addend_8005A2D8 >> 2) {
        case 0: goto L_8005A2E0; break;
        case 1: goto L_8005A36C; break;
        case 2: goto L_8005A398; break;
        case 3: goto L_8005A340; break;
        case 4: goto L_8005A340; break;
        case 5: goto L_8005A340; break;
        default: switch_error(__func__, 0x8005A2D8, 0x800D97B0);
    }
    // 0x8005A2DC: nop

L_8005A2E0:
    // 0x8005A2E0: jal         0x8024BC08
    // 0x8005A2E4: addiu       $a1, $zero, 0xF
    ctx->r5 = ADD32(0, 0XF);
    LOOKUP_FUNC(0x8024BC08)(rdram, ctx);
        goto after_1;
    // 0x8005A2E4: addiu       $a1, $zero, 0xF
    ctx->r5 = ADD32(0, 0XF);
    after_1:
    // 0x8005A2E8: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    // 0x8005A2EC: jal         0x8026DD08
    // 0x8005A2F0: nop

    LOOKUP_FUNC(0x8026DD08)(rdram, ctx);
        goto after_2;
    // 0x8005A2F0: nop

    after_2:
    // 0x8005A2F4: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    // 0x8005A2F8: jal         0x80059E2C
    // 0x8005A2FC: nop

    func_80059E2C(rdram, ctx);
        goto after_3;
    // 0x8005A2FC: nop

    after_3:
    // 0x8005A300: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    // 0x8005A304: jal         0x80258884
    // 0x8005A308: nop

    LOOKUP_FUNC(0x80258884)(rdram, ctx);
        goto after_4;
    // 0x8005A308: nop

    after_4:
    // 0x8005A30C: lw          $t7, 0x0($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X0);
    // 0x8005A310: nop

    // 0x8005A314: lw          $t8, 0xCC($t7)
    ctx->r24 = MEM_W(ctx->r15, 0XCC);
    // 0x8005A318: nop

    // 0x8005A31C: lw          $v0, 0x30($t8)
    ctx->r2 = MEM_W(ctx->r24, 0X30);
    // 0x8005A320: nop

    // 0x8005A324: lhu         $t9, 0x2($v0)
    ctx->r25 = MEM_HU(ctx->r2, 0X2);
    // 0x8005A328: nop

    // 0x8005A32C: andi        $t0, $t9, 0xBFFF
    ctx->r8 = ctx->r25 & 0XBFFF;
    // 0x8005A330: sh          $t0, 0x2($v0)
    MEM_H(0X2, ctx->r2) = ctx->r8;
    // 0x8005A334: lw          $t1, 0x0($s0)
    ctx->r9 = MEM_W(ctx->r16, 0X0);
    // 0x8005A338: b           L_8005A3C4
    // 0x8005A33C: sw          $zero, 0x28($t1)
    MEM_W(0X28, ctx->r9) = 0;
        goto L_8005A3C4;
    // 0x8005A33C: sw          $zero, 0x28($t1)
    MEM_W(0X28, ctx->r9) = 0;
L_8005A340:
    // 0x8005A340: jal         0x8024BC08
    // 0x8005A344: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    LOOKUP_FUNC(0x8024BC08)(rdram, ctx);
        goto after_5;
    // 0x8005A344: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    after_5:
    // 0x8005A348: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    // 0x8005A34C: jal         0x8026E178
    // 0x8005A350: nop

    LOOKUP_FUNC(0x8026E178)(rdram, ctx);
        goto after_6;
    // 0x8005A350: nop

    after_6:
    // 0x8005A354: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    // 0x8005A358: jal         0x80059E2C
    // 0x8005A35C: nop

    func_80059E2C(rdram, ctx);
        goto after_7;
    // 0x8005A35C: nop

    after_7:
    // 0x8005A360: lw          $t2, 0x0($s0)
    ctx->r10 = MEM_W(ctx->r16, 0X0);
    // 0x8005A364: b           L_8005A3C4
    // 0x8005A368: sw          $zero, 0x28($t2)
    MEM_W(0X28, ctx->r10) = 0;
        goto L_8005A3C4;
    // 0x8005A368: sw          $zero, 0x28($t2)
    MEM_W(0X28, ctx->r10) = 0;
L_8005A36C:
    // 0x8005A36C: jal         0x8024BC08
    // 0x8005A370: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    LOOKUP_FUNC(0x8024BC08)(rdram, ctx);
        goto after_8;
    // 0x8005A370: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    after_8:
    // 0x8005A374: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    // 0x8005A378: jal         0x8026E11C
    // 0x8005A37C: nop

    LOOKUP_FUNC(0x8026E11C)(rdram, ctx);
        goto after_9;
    // 0x8005A37C: nop

    after_9:
    // 0x8005A380: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    // 0x8005A384: jal         0x80059E2C
    // 0x8005A388: nop

    func_80059E2C(rdram, ctx);
        goto after_10;
    // 0x8005A388: nop

    after_10:
    // 0x8005A38C: lw          $t3, 0x0($s0)
    ctx->r11 = MEM_W(ctx->r16, 0X0);
    // 0x8005A390: b           L_8005A3C4
    // 0x8005A394: sw          $zero, 0x28($t3)
    MEM_W(0X28, ctx->r11) = 0;
        goto L_8005A3C4;
    // 0x8005A394: sw          $zero, 0x28($t3)
    MEM_W(0X28, ctx->r11) = 0;
L_8005A398:
    // 0x8005A398: jal         0x8024BC08
    // 0x8005A39C: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    LOOKUP_FUNC(0x8024BC08)(rdram, ctx);
        goto after_11;
    // 0x8005A39C: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    after_11:
    // 0x8005A3A0: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    // 0x8005A3A4: jal         0x8026E044
    // 0x8005A3A8: nop

    LOOKUP_FUNC(0x8026E044)(rdram, ctx);
        goto after_12;
    // 0x8005A3A8: nop

    after_12:
    // 0x8005A3AC: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    // 0x8005A3B0: jal         0x80059E2C
    // 0x8005A3B4: nop

    func_80059E2C(rdram, ctx);
        goto after_13;
    // 0x8005A3B4: nop

    after_13:
    // 0x8005A3B8: lw          $t4, 0x0($s0)
    ctx->r12 = MEM_W(ctx->r16, 0X0);
    // 0x8005A3BC: nop

    // 0x8005A3C0: sw          $zero, 0x28($t4)
    MEM_W(0X28, ctx->r12) = 0;
L_8005A3C4:
    // 0x8005A3C4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_8005A3C8:
    // 0x8005A3C8: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8005A3CC: jr          $ra
    // 0x8005A3D0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x8005A3D0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_8005A3D4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8005A3D4: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x8005A3D8: sw          $zero, 0x398($at)
    MEM_W(0X398, ctx->r1) = 0;
    // 0x8005A3DC: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x8005A3E0: addiu       $v0, $v0, 0x3B0
    ctx->r2 = ADD32(ctx->r2, 0X3B0);
    // 0x8005A3E4: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x8005A3E8: sh          $zero, 0x35A($at)
    MEM_H(0X35A, ctx->r1) = 0;
    // 0x8005A3EC: sh          $zero, 0x10A($v0)
    MEM_H(0X10A, ctx->r2) = 0;
    // 0x8005A3F0: sw          $zero, 0x148($v0)
    MEM_W(0X148, ctx->r2) = 0;
    // 0x8005A3F4: sh          $zero, 0xB2($v0)
    MEM_H(0XB2, ctx->r2) = 0;
    // 0x8005A3F8: sw          $zero, 0xF0($v0)
    MEM_W(0XF0, ctx->r2) = 0;
    // 0x8005A3FC: sh          $zero, 0x5A($v0)
    MEM_H(0X5A, ctx->r2) = 0;
    // 0x8005A400: sw          $zero, 0x98($v0)
    MEM_W(0X98, ctx->r2) = 0;
    // 0x8005A404: addiu       $v0, $v0, 0x108
    ctx->r2 = ADD32(ctx->r2, 0X108);
    // 0x8005A408: sw          $zero, -0xC8($v0)
    MEM_W(-0XC8, ctx->r2) = 0;
    // 0x8005A40C: jr          $ra
    // 0x8005A410: sh          $zero, -0x106($v0)
    MEM_H(-0X106, ctx->r2) = 0;
    return;
    // 0x8005A410: sh          $zero, -0x106($v0)
    MEM_H(-0X106, ctx->r2) = 0;
;}
RECOMP_FUNC void func_8005A414(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8005A414: lui         $t6, 0x8012
    ctx->r14 = S32(0X8012 << 16);
    // 0x8005A418: lhu         $t6, 0xB78($t6)
    ctx->r14 = MEM_HU(ctx->r14, 0XB78);
    // 0x8005A41C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8005A420: addiu       $t7, $t6, -0x2
    ctx->r15 = ADD32(ctx->r14, -0X2);
    // 0x8005A424: sltiu       $at, $t7, 0x6
    ctx->r1 = ctx->r15 < 0X6 ? 1 : 0;
    // 0x8005A428: beq         $at, $zero, L_8005A494
    if (ctx->r1 == 0) {
        // 0x8005A42C: sw          $ra, 0x14($sp)
        MEM_W(0X14, ctx->r29) = ctx->r31;
            goto L_8005A494;
    }
    // 0x8005A42C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8005A430: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8005A434: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x8005A438: addu        $at, $at, $t7
    gpr jr_addend_8005A444 = ctx->r15;
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x8005A43C: lw          $t7, -0x6838($at)
    ctx->r15 = ADD32(ctx->r1, -0X6838);
    // 0x8005A440: nop

    // 0x8005A444: jr          $t7
    // 0x8005A448: nop

    switch (jr_addend_8005A444 >> 2) {
        case 0: goto L_8005A48C; break;
        case 1: goto L_8005A44C; break;
        case 2: goto L_8005A45C; break;
        case 3: goto L_8005A47C; break;
        case 4: goto L_8005A46C; break;
        case 5: goto L_8005A47C; break;
        default: switch_error(__func__, 0x8005A444, 0x800D97C8);
    }
    // 0x8005A448: nop

L_8005A44C:
    // 0x8005A44C: jal         0x8028EA48
    // 0x8005A450: nop

    LOOKUP_FUNC(0x8028EA48)(rdram, ctx);
        goto after_0;
    // 0x8005A450: nop

    after_0:
    // 0x8005A454: b           L_8005A498
    // 0x8005A458: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_8005A498;
    // 0x8005A458: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8005A45C:
    // 0x8005A45C: jal         0x8028FDEC
    // 0x8005A460: nop

    LOOKUP_FUNC(0x8028FDEC)(rdram, ctx);
        goto after_1;
    // 0x8005A460: nop

    after_1:
    // 0x8005A464: b           L_8005A498
    // 0x8005A468: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_8005A498;
    // 0x8005A468: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8005A46C:
    // 0x8005A46C: jal         0x802912A8
    // 0x8005A470: nop

    LOOKUP_FUNC(0x802912A8)(rdram, ctx);
        goto after_2;
    // 0x8005A470: nop

    after_2:
    // 0x8005A474: b           L_8005A498
    // 0x8005A478: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_8005A498;
    // 0x8005A478: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8005A47C:
    // 0x8005A47C: jal         0x80290F98
    // 0x8005A480: nop

    LOOKUP_FUNC(0x80290F98)(rdram, ctx);
        goto after_3;
    // 0x8005A480: nop

    after_3:
    // 0x8005A484: b           L_8005A498
    // 0x8005A488: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_8005A498;
    // 0x8005A488: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8005A48C:
    // 0x8005A48C: jal         0x80290BE4
    // 0x8005A490: nop

    LOOKUP_FUNC(0x80290BE4)(rdram, ctx);
        goto after_4;
    // 0x8005A490: nop

    after_4:
L_8005A494:
    // 0x8005A494: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8005A498:
    // 0x8005A498: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8005A49C: jr          $ra
    // 0x8005A4A0: nop

    return;
    // 0x8005A4A0: nop

;}
RECOMP_FUNC void func_8005A4A4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8005A4A4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8005A4A8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8005A4AC: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8005A4B0: jal         0x80266D28
    // 0x8005A4B4: addiu       $a1, $a0, 0x8E1
    ctx->r5 = ADD32(ctx->r4, 0X8E1);
    LOOKUP_FUNC(0x80266D28)(rdram, ctx);
        goto after_0;
    // 0x8005A4B4: addiu       $a1, $a0, 0x8E1
    ctx->r5 = ADD32(ctx->r4, 0X8E1);
    after_0:
    // 0x8005A4B8: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x8005A4BC: jal         0x80266D28
    // 0x8005A4C0: addiu       $a1, $a0, 0x8EC
    ctx->r5 = ADD32(ctx->r4, 0X8EC);
    LOOKUP_FUNC(0x80266D28)(rdram, ctx);
        goto after_1;
    // 0x8005A4C0: addiu       $a1, $a0, 0x8EC
    ctx->r5 = ADD32(ctx->r4, 0X8EC);
    after_1:
    // 0x8005A4C4: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x8005A4C8: jal         0x80266CC8
    // 0x8005A4CC: nop

    LOOKUP_FUNC(0x80266CC8)(rdram, ctx);
        goto after_2;
    // 0x8005A4CC: nop

    after_2:
    // 0x8005A4D0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8005A4D4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8005A4D8: jr          $ra
    // 0x8005A4DC: nop

    return;
    // 0x8005A4DC: nop

;}
RECOMP_FUNC void func_8005A4E0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8005A4E0: lui         $t6, 0x8012
    ctx->r14 = S32(0X8012 << 16);
    // 0x8005A4E4: lhu         $t6, 0xB78($t6)
    ctx->r14 = MEM_HU(ctx->r14, 0XB78);
    // 0x8005A4E8: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8005A4EC: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8005A4F0: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8005A4F4: bne         $t6, $at, L_8005A5AC
    if (ctx->r14 != ctx->r1) {
        // 0x8005A4F8: sw          $s0, 0x18($sp)
        MEM_W(0X18, ctx->r29) = ctx->r16;
            goto L_8005A5AC;
    }
    // 0x8005A4F8: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8005A4FC: jal         0x8005ACAC
    // 0x8005A500: nop

    func_8005ACAC(rdram, ctx);
        goto after_0;
    // 0x8005A500: nop

    after_0:
    // 0x8005A504: jal         0x80059810
    // 0x8005A508: nop

    func_80059810(rdram, ctx);
        goto after_1;
    // 0x8005A508: nop

    after_1:
    // 0x8005A50C: jal         0x8005AE5C
    // 0x8005A510: nop

    func_8005AE5C(rdram, ctx);
        goto after_2;
    // 0x8005A510: nop

    after_2:
    // 0x8005A514: lui         $s0, 0x8012
    ctx->r16 = S32(0X8012 << 16);
    // 0x8005A518: addiu       $s0, $s0, -0x2CF0
    ctx->r16 = ADD32(ctx->r16, -0X2CF0);
    // 0x8005A51C: lhu         $t7, 0x10($s0)
    ctx->r15 = MEM_HU(ctx->r16, 0X10);
    // 0x8005A520: lhu         $t9, 0x8($s0)
    ctx->r25 = MEM_HU(ctx->r16, 0X8);
    // 0x8005A524: ori         $t8, $t7, 0x40
    ctx->r24 = ctx->r15 | 0X40;
    // 0x8005A528: andi        $t0, $t9, 0xBFFF
    ctx->r8 = ctx->r25 & 0XBFFF;
    // 0x8005A52C: sh          $t8, 0x10($s0)
    MEM_H(0X10, ctx->r16) = ctx->r24;
    // 0x8005A530: jal         0x8005C930
    // 0x8005A534: sh          $t0, 0x8($s0)
    MEM_H(0X8, ctx->r16) = ctx->r8;
    func_8005C930(rdram, ctx);
        goto after_3;
    // 0x8005A534: sh          $t0, 0x8($s0)
    MEM_H(0X8, ctx->r16) = ctx->r8;
    after_3:
    // 0x8005A538: jal         0x80059898
    // 0x8005A53C: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
    func_80059898(rdram, ctx);
        goto after_4;
    // 0x8005A53C: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
    after_4:
    // 0x8005A540: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x8005A544: sb          $v0, 0xB66($at)
    MEM_B(0XB66, ctx->r1) = ctx->r2;
    // 0x8005A548: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x8005A54C: jal         0x80059868
    // 0x8005A550: sb          $zero, 0xB67($at)
    MEM_B(0XB67, ctx->r1) = 0;
    func_80059868(rdram, ctx);
        goto after_5;
    // 0x8005A550: sb          $zero, 0xB67($at)
    MEM_B(0XB67, ctx->r1) = 0;
    after_5:
    // 0x8005A554: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x8005A558: sb          $v0, 0xB68($at)
    MEM_B(0XB68, ctx->r1) = ctx->r2;
    // 0x8005A55C: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x8005A560: addiu       $t1, $zero, 0x80
    ctx->r9 = ADD32(0, 0X80);
    // 0x8005A564: jal         0x80059868
    // 0x8005A568: sb          $t1, 0x36C0($at)
    MEM_B(0X36C0, ctx->r1) = ctx->r9;
    func_80059868(rdram, ctx);
        goto after_6;
    // 0x8005A568: sb          $t1, 0x36C0($at)
    MEM_B(0X36C0, ctx->r1) = ctx->r9;
    after_6:
    // 0x8005A56C: lhu         $t2, 0x8($s0)
    ctx->r10 = MEM_HU(ctx->r16, 0X8);
    // 0x8005A570: andi        $t3, $v0, 0x8000
    ctx->r11 = ctx->r2 & 0X8000;
    // 0x8005A574: or          $t4, $t2, $t3
    ctx->r12 = ctx->r10 | ctx->r11;
    // 0x8005A578: jal         0x80059868
    // 0x8005A57C: sh          $t4, 0x8($s0)
    MEM_H(0X8, ctx->r16) = ctx->r12;
    func_80059868(rdram, ctx);
        goto after_7;
    // 0x8005A57C: sh          $t4, 0x8($s0)
    MEM_H(0X8, ctx->r16) = ctx->r12;
    after_7:
    // 0x8005A580: lhu         $t5, 0xA9C($s0)
    ctx->r13 = MEM_HU(ctx->r16, 0XA9C);
    // 0x8005A584: andi        $t6, $v0, 0x8000
    ctx->r14 = ctx->r2 & 0X8000;
    // 0x8005A588: or          $t7, $t5, $t6
    ctx->r15 = ctx->r13 | ctx->r14;
    // 0x8005A58C: sh          $t7, 0xA9C($s0)
    MEM_H(0XA9C, ctx->r16) = ctx->r15;
    // 0x8005A590: lui         $t8, 0x8010
    ctx->r24 = S32(0X8010 << 16);
    // 0x8005A594: lbu         $t8, 0x522C($t8)
    ctx->r24 = MEM_BU(ctx->r24, 0X522C);
    // 0x8005A598: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x8005A59C: bne         $t8, $at, L_8005A5AC
    if (ctx->r24 != ctx->r1) {
        // 0x8005A5A0: nop
    
            goto L_8005A5AC;
    }
    // 0x8005A5A0: nop

    // 0x8005A5A4: jal         0x802719DC
    // 0x8005A5A8: addiu       $a0, $zero, 0x3BB
    ctx->r4 = ADD32(0, 0X3BB);
    LOOKUP_FUNC(0x802719DC)(rdram, ctx);
        goto after_8;
    // 0x8005A5A8: addiu       $a0, $zero, 0x3BB
    ctx->r4 = ADD32(0, 0X3BB);
    after_8:
L_8005A5AC:
    // 0x8005A5AC: lui         $t9, 0x8009
    ctx->r25 = S32(0X8009 << 16);
    // 0x8005A5B0: lw          $t9, 0x3B20($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X3B20);
    // 0x8005A5B4: lui         $at, 0x803F
    ctx->r1 = S32(0X803F << 16);
    // 0x8005A5B8: sh          $zero, 0xBE($t9)
    MEM_H(0XBE, ctx->r25) = 0;
    // 0x8005A5BC: sh          $zero, 0x7E06($at)
    MEM_H(0X7E06, ctx->r1) = 0;
    // 0x8005A5C0: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x8005A5C4: sh          $zero, 0x362C($at)
    MEM_H(0X362C, ctx->r1) = 0;
    // 0x8005A5C8: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x8005A5CC: sh          $zero, 0x4FC0($at)
    MEM_H(0X4FC0, ctx->r1) = 0;
    // 0x8005A5D0: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x8005A5D4: sh          $zero, 0xB4A($at)
    MEM_H(0XB4A, ctx->r1) = 0;
    // 0x8005A5D8: lui         $s0, 0x8012
    ctx->r16 = S32(0X8012 << 16);
    // 0x8005A5DC: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x8005A5E0: addiu       $s0, $s0, -0x2CF0
    ctx->r16 = ADD32(ctx->r16, -0X2CF0);
    // 0x8005A5E4: jal         0x8005AA8C
    // 0x8005A5E8: sb          $zero, 0x3610($at)
    MEM_B(0X3610, ctx->r1) = 0;
    func_8005AA8C(rdram, ctx);
        goto after_9;
    // 0x8005A5E8: sb          $zero, 0x3610($at)
    MEM_B(0X3610, ctx->r1) = 0;
    after_9:
    // 0x8005A5EC: jal         0x8005A8BC
    // 0x8005A5F0: nop

    func_8005A8BC(rdram, ctx);
        goto after_10;
    // 0x8005A5F0: nop

    after_10:
    // 0x8005A5F4: jal         0x8005B004
    // 0x8005A5F8: nop

    func_8005B004(rdram, ctx);
        goto after_11;
    // 0x8005A5F8: nop

    after_11:
    // 0x8005A5FC: jal         0x8005C9BC
    // 0x8005A600: nop

    func_8005C9BC(rdram, ctx);
        goto after_12;
    // 0x8005A600: nop

    after_12:
    // 0x8005A604: jal         0x8005A3D4
    // 0x8005A608: nop

    func_8005A3D4(rdram, ctx);
        goto after_13;
    // 0x8005A608: nop

    after_13:
    // 0x8005A60C: lhu         $t0, 0x8($s0)
    ctx->r8 = MEM_HU(ctx->r16, 0X8);
    // 0x8005A610: lhu         $t2, 0xA9C($s0)
    ctx->r10 = MEM_HU(ctx->r16, 0XA9C);
    // 0x8005A614: andi        $t1, $t0, 0xFF7B
    ctx->r9 = ctx->r8 & 0XFF7B;
    // 0x8005A618: andi        $t3, $t2, 0xFF7B
    ctx->r11 = ctx->r10 & 0XFF7B;
    // 0x8005A61C: sh          $t1, 0x8($s0)
    MEM_H(0X8, ctx->r16) = ctx->r9;
    // 0x8005A620: sh          $t3, 0xA9C($s0)
    MEM_H(0XA9C, ctx->r16) = ctx->r11;
    // 0x8005A624: lui         $t4, 0x8012
    ctx->r12 = S32(0X8012 << 16);
    // 0x8005A628: lhu         $t4, 0xB72($t4)
    ctx->r12 = MEM_HU(ctx->r12, 0XB72);
    // 0x8005A62C: lui         $t6, 0x800B
    ctx->r14 = S32(0X800B << 16);
    // 0x8005A630: addiu       $t6, $t6, -0x2BBC
    ctx->r14 = ADD32(ctx->r14, -0X2BBC);
    // 0x8005A634: sll         $t5, $t4, 1
    ctx->r13 = S32(ctx->r12 << 1);
    // 0x8005A638: addu        $v0, $t5, $t6
    ctx->r2 = ADD32(ctx->r13, ctx->r14);
    // 0x8005A63C: lbu         $t7, 0x0($v0)
    ctx->r15 = MEM_BU(ctx->r2, 0X0);
    // 0x8005A640: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x8005A644: bne         $t7, $zero, L_8005A654
    if (ctx->r15 != 0) {
        // 0x8005A648: addiu       $t3, $zero, 0x1
        ctx->r11 = ADD32(0, 0X1);
            goto L_8005A654;
    }
    // 0x8005A648: addiu       $t3, $zero, 0x1
    ctx->r11 = ADD32(0, 0X1);
    // 0x8005A64C: ori         $t9, $t1, 0x80
    ctx->r25 = ctx->r9 | 0X80;
    // 0x8005A650: sh          $t9, 0x8($s0)
    MEM_H(0X8, ctx->r16) = ctx->r25;
L_8005A654:
    // 0x8005A654: lbu         $t0, 0x1($v0)
    ctx->r8 = MEM_BU(ctx->r2, 0X1);
    // 0x8005A658: lui         $v0, 0x8028
    ctx->r2 = S32(0X8028 << 16);
    // 0x8005A65C: bne         $t0, $zero, L_8005A674
    if (ctx->r8 != 0) {
        // 0x8005A660: addiu       $v0, $v0, -0x1B30
        ctx->r2 = ADD32(ctx->r2, -0X1B30);
            goto L_8005A674;
    }
    // 0x8005A660: addiu       $v0, $v0, -0x1B30
    ctx->r2 = ADD32(ctx->r2, -0X1B30);
    // 0x8005A664: lhu         $t1, 0xA9C($s0)
    ctx->r9 = MEM_HU(ctx->r16, 0XA9C);
    // 0x8005A668: nop

    // 0x8005A66C: ori         $t2, $t1, 0x80
    ctx->r10 = ctx->r9 | 0X80;
    // 0x8005A670: sh          $t2, 0xA9C($s0)
    MEM_H(0XA9C, ctx->r16) = ctx->r10;
L_8005A674:
    // 0x8005A674: sh          $zero, 0xB6C($at)
    MEM_H(0XB6C, ctx->r1) = 0;
    // 0x8005A678: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x8005A67C: sh          $zero, 0xB6E($at)
    MEM_H(0XB6E, ctx->r1) = 0;
    // 0x8005A680: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x8005A684: sw          $zero, 0xB2C($at)
    MEM_W(0XB2C, ctx->r1) = 0;
    // 0x8005A688: sw          $zero, 0x0($v0)
    MEM_W(0X0, ctx->r2) = 0;
    // 0x8005A68C: sw          $zero, 0x4($v0)
    MEM_W(0X4, ctx->r2) = 0;
    // 0x8005A690: lui         $at, 0x8010
    ctx->r1 = S32(0X8010 << 16);
    // 0x8005A694: sh          $t3, 0x6420($at)
    MEM_H(0X6420, ctx->r1) = ctx->r11;
    // 0x8005A698: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x8005A69C: sh          $zero, 0xB3E($at)
    MEM_H(0XB3E, ctx->r1) = 0;
    // 0x8005A6A0: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x8005A6A4: sh          $zero, 0xB40($at)
    MEM_H(0XB40, ctx->r1) = 0;
    // 0x8005A6A8: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x8005A6AC: sh          $zero, 0xB7E($at)
    MEM_H(0XB7E, ctx->r1) = 0;
    // 0x8005A6B0: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x8005A6B4: sh          $zero, 0x3698($at)
    MEM_H(0X3698, ctx->r1) = 0;
    // 0x8005A6B8: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x8005A6BC: sb          $zero, 0xB69($at)
    MEM_B(0XB69, ctx->r1) = 0;
    // 0x8005A6C0: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x8005A6C4: jal         0x800598D0
    // 0x8005A6C8: sh          $zero, -0x3A06($at)
    MEM_H(-0X3A06, ctx->r1) = 0;
    func_800598D0(rdram, ctx);
        goto after_14;
    // 0x8005A6C8: sh          $zero, -0x3A06($at)
    MEM_H(-0X3A06, ctx->r1) = 0;
    after_14:
    // 0x8005A6CC: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x8005A6D0: lhu         $a0, 0xB78($a0)
    ctx->r4 = MEM_HU(ctx->r4, 0XB78);
    // 0x8005A6D4: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x8005A6D8: sltiu       $at, $a0, 0xD
    ctx->r1 = ctx->r4 < 0XD ? 1 : 0;
    // 0x8005A6DC: beq         $at, $zero, L_8005A804
    if (ctx->r1 == 0) {
        // 0x8005A6E0: addiu       $v0, $v0, 0xB7E
        ctx->r2 = ADD32(ctx->r2, 0XB7E);
            goto L_8005A804;
    }
    // 0x8005A6E0: addiu       $v0, $v0, 0xB7E
    ctx->r2 = ADD32(ctx->r2, 0XB7E);
    // 0x8005A6E4: sll         $t4, $a0, 2
    ctx->r12 = S32(ctx->r4 << 2);
    // 0x8005A6E8: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x8005A6EC: addu        $at, $at, $t4
    gpr jr_addend_8005A6F8 = ctx->r12;
    ctx->r1 = ADD32(ctx->r1, ctx->r12);
    // 0x8005A6F0: lw          $t4, -0x6820($at)
    ctx->r12 = ADD32(ctx->r1, -0X6820);
    // 0x8005A6F4: nop

    // 0x8005A6F8: jr          $t4
    // 0x8005A6FC: nop

    switch (jr_addend_8005A6F8 >> 2) {
        case 0: goto L_8005A720; break;
        case 1: goto L_8005A720; break;
        case 2: goto L_8005A804; break;
        case 3: goto L_8005A7F8; break;
        case 4: goto L_8005A7F8; break;
        case 5: goto L_8005A7F8; break;
        case 6: goto L_8005A7F8; break;
        case 7: goto L_8005A7F8; break;
        case 8: goto L_8005A7C0; break;
        case 9: goto L_8005A73C; break;
        case 10: goto L_8005A700; break;
        case 11: goto L_8005A700; break;
        case 12: goto L_8005A73C; break;
        default: switch_error(__func__, 0x8005A6F8, 0x800D97E0);
    }
    // 0x8005A6FC: nop

L_8005A700:
    // 0x8005A700: jal         0x802719DC
    // 0x8005A704: addiu       $a0, $zero, 0x3BB
    ctx->r4 = ADD32(0, 0X3BB);
    LOOKUP_FUNC(0x802719DC)(rdram, ctx);
        goto after_15;
    // 0x8005A704: addiu       $a0, $zero, 0x3BB
    ctx->r4 = ADD32(0, 0X3BB);
    after_15:
    // 0x8005A708: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x8005A70C: addiu       $v0, $v0, 0xB74
    ctx->r2 = ADD32(ctx->r2, 0XB74);
    // 0x8005A710: lhu         $t5, 0x0($v0)
    ctx->r13 = MEM_HU(ctx->r2, 0X0);
    // 0x8005A714: nop

    // 0x8005A718: addiu       $t6, $t5, 0x1
    ctx->r14 = ADD32(ctx->r13, 0X1);
    // 0x8005A71C: sh          $t6, 0x0($v0)
    MEM_H(0X0, ctx->r2) = ctx->r14;
L_8005A720:
    // 0x8005A720: jal         0x80293EAC
    // 0x8005A724: nop

    LOOKUP_FUNC(0x80293EAC)(rdram, ctx);
        goto after_16;
    // 0x8005A724: nop

    after_16:
    // 0x8005A728: jal         0x80059B84
    // 0x8005A72C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80059B84(rdram, ctx);
        goto after_17;
    // 0x8005A72C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_17:
    // 0x8005A730: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x8005A734: jal         0x80059B84
    // 0x8005A738: addiu       $a0, $a0, -0x225C
    ctx->r4 = ADD32(ctx->r4, -0X225C);
    func_80059B84(rdram, ctx);
        goto after_18;
    // 0x8005A738: addiu       $a0, $a0, -0x225C
    ctx->r4 = ADD32(ctx->r4, -0X225C);
    after_18:
L_8005A73C:
    // 0x8005A73C: jal         0x8007A90C
    // 0x8005A740: nop

    func_8007A90C(rdram, ctx);
        goto after_19;
    // 0x8005A740: nop

    after_19:
    // 0x8005A744: lhu         $t7, 0x8($s0)
    ctx->r15 = MEM_HU(ctx->r16, 0X8);
    // 0x8005A748: nop

    // 0x8005A74C: andi        $t8, $t7, 0x4000
    ctx->r24 = ctx->r15 & 0X4000;
    // 0x8005A750: beq         $t8, $zero, L_8005A770
    if (ctx->r24 == 0) {
        // 0x8005A754: nop
    
            goto L_8005A770;
    }
    // 0x8005A754: nop

    // 0x8005A758: jal         0x802719DC
    // 0x8005A75C: addiu       $a0, $zero, 0x3BB
    ctx->r4 = ADD32(0, 0X3BB);
    LOOKUP_FUNC(0x802719DC)(rdram, ctx);
        goto after_20;
    // 0x8005A75C: addiu       $a0, $zero, 0x3BB
    ctx->r4 = ADD32(0, 0X3BB);
    after_20:
    // 0x8005A760: lhu         $t9, 0x8($s0)
    ctx->r25 = MEM_HU(ctx->r16, 0X8);
    // 0x8005A764: nop

    // 0x8005A768: andi        $t0, $t9, 0xBFFF
    ctx->r8 = ctx->r25 & 0XBFFF;
    // 0x8005A76C: sh          $t0, 0x8($s0)
    MEM_H(0X8, ctx->r16) = ctx->r8;
L_8005A770:
    // 0x8005A770: jal         0x8005AC60
    // 0x8005A774: nop

    func_8005AC60(rdram, ctx);
        goto after_21;
    // 0x8005A774: nop

    after_21:
    // 0x8005A778: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
    // 0x8005A77C: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x8005A780: sh          $t1, 0xB78($at)
    MEM_H(0XB78, ctx->r1) = ctx->r9;
    // 0x8005A784: lui         $v0, 0x8009
    ctx->r2 = S32(0X8009 << 16);
    // 0x8005A788: lw          $v0, 0x3B20($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X3B20);
    // 0x8005A78C: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x8005A790: sw          $zero, 0xB24($at)
    MEM_W(0XB24, ctx->r1) = 0;
    // 0x8005A794: lhu         $t2, 0xC0($v0)
    ctx->r10 = MEM_HU(ctx->r2, 0XC0);
    // 0x8005A798: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x8005A79C: ori         $t3, $t2, 0x80
    ctx->r11 = ctx->r10 | 0X80;
    // 0x8005A7A0: addiu       $t4, $zero, 0x80
    ctx->r12 = ADD32(0, 0X80);
    // 0x8005A7A4: sh          $t3, 0xC0($v0)
    MEM_H(0XC0, ctx->r2) = ctx->r11;
    // 0x8005A7A8: jal         0x8005D170
    // 0x8005A7AC: sb          $t4, 0x36C0($at)
    MEM_B(0X36C0, ctx->r1) = ctx->r12;
    func_8005D170(rdram, ctx);
        goto after_22;
    // 0x8005A7AC: sb          $t4, 0x36C0($at)
    MEM_B(0X36C0, ctx->r1) = ctx->r12;
    after_22:
    // 0x8005A7B0: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x8005A7B4: lhu         $a0, 0xB78($a0)
    ctx->r4 = MEM_HU(ctx->r4, 0XB78);
    // 0x8005A7B8: b           L_8005A804
    // 0x8005A7BC: nop

        goto L_8005A804;
    // 0x8005A7BC: nop

L_8005A7C0:
    // 0x8005A7C0: addiu       $t5, $zero, 0x80
    ctx->r13 = ADD32(0, 0X80);
    // 0x8005A7C4: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x8005A7C8: sb          $t5, 0x36C0($at)
    MEM_B(0X36C0, ctx->r1) = ctx->r13;
    // 0x8005A7CC: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x8005A7D0: sh          $zero, 0xB4A($at)
    MEM_H(0XB4A, ctx->r1) = 0;
    // 0x8005A7D4: lhu         $t6, 0x0($v0)
    ctx->r14 = MEM_HU(ctx->r2, 0X0);
    // 0x8005A7D8: nop

    // 0x8005A7DC: ori         $t7, $t6, 0x4100
    ctx->r15 = ctx->r14 | 0X4100;
    // 0x8005A7E0: jal         0x8007BA6C
    // 0x8005A7E4: sh          $t7, 0x0($v0)
    MEM_H(0X0, ctx->r2) = ctx->r15;
    func_8007BA6C(rdram, ctx);
        goto after_23;
    // 0x8005A7E4: sh          $t7, 0x0($v0)
    MEM_H(0X0, ctx->r2) = ctx->r15;
    after_23:
    // 0x8005A7E8: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x8005A7EC: lhu         $a0, 0xB78($a0)
    ctx->r4 = MEM_HU(ctx->r4, 0XB78);
    // 0x8005A7F0: b           L_8005A804
    // 0x8005A7F4: nop

        goto L_8005A804;
    // 0x8005A7F4: nop

L_8005A7F8:
    // 0x8005A7F8: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x8005A7FC: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x8005A800: sh          $t8, 0xB4A($at)
    MEM_H(0XB4A, ctx->r1) = ctx->r24;
L_8005A804:
    // 0x8005A804: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x8005A808: jal         0x8005C5FC
    // 0x8005A80C: sh          $a0, 0xB7A($at)
    MEM_H(0XB7A, ctx->r1) = ctx->r4;
    func_8005C5FC(rdram, ctx);
        goto after_24;
    // 0x8005A80C: sh          $a0, 0xB7A($at)
    MEM_H(0XB7A, ctx->r1) = ctx->r4;
    after_24:
    // 0x8005A810: jal         0x8005D710
    // 0x8005A814: nop

    func_8005D710(rdram, ctx);
        goto after_25;
    // 0x8005A814: nop

    after_25:
    // 0x8005A818: jal         0x802A2434
    // 0x8005A81C: nop

    LOOKUP_FUNC(0x802A2434)(rdram, ctx);
        goto after_26;
    // 0x8005A81C: nop

    after_26:
    // 0x8005A820: jal         0x8005E18C
    // 0x8005A824: nop

    func_8005E18C(rdram, ctx);
        goto after_27;
    // 0x8005A824: nop

    after_27:
    // 0x8005A828: jal         0x8005E498
    // 0x8005A82C: nop

    func_8005E498(rdram, ctx);
        goto after_28;
    // 0x8005A82C: nop

    after_28:
    // 0x8005A830: jal         0x8005A4A4
    // 0x8005A834: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8005A4A4(rdram, ctx);
        goto after_29;
    // 0x8005A834: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_29:
    // 0x8005A838: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x8005A83C: jal         0x8005A4A4
    // 0x8005A840: addiu       $a0, $a0, -0x225C
    ctx->r4 = ADD32(ctx->r4, -0X225C);
    func_8005A4A4(rdram, ctx);
        goto after_30;
    // 0x8005A840: addiu       $a0, $a0, -0x225C
    ctx->r4 = ADD32(ctx->r4, -0X225C);
    after_30:
    // 0x8005A844: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x8005A848: lhu         $a0, 0xB78($a0)
    ctx->r4 = MEM_HU(ctx->r4, 0XB78);
    // 0x8005A84C: nop

    // 0x8005A850: slti        $at, $a0, 0x2
    ctx->r1 = SIGNED(ctx->r4) < 0X2 ? 1 : 0;
    // 0x8005A854: bne         $at, $zero, L_8005A87C
    if (ctx->r1 != 0) {
        // 0x8005A858: or          $v0, $a0, $zero
        ctx->r2 = ctx->r4 | 0;
            goto L_8005A87C;
    }
    // 0x8005A858: or          $v0, $a0, $zero
    ctx->r2 = ctx->r4 | 0;
    // 0x8005A85C: slti        $at, $v0, 0x9
    ctx->r1 = SIGNED(ctx->r2) < 0X9 ? 1 : 0;
    // 0x8005A860: beq         $at, $zero, L_8005A87C
    if (ctx->r1 == 0) {
        // 0x8005A864: nop
    
            goto L_8005A87C;
    }
    // 0x8005A864: nop

    // 0x8005A868: jal         0x80059F84
    // 0x8005A86C: nop

    func_80059F84(rdram, ctx);
        goto after_31;
    // 0x8005A86C: nop

    after_31:
    // 0x8005A870: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x8005A874: lhu         $a0, 0xB78($a0)
    ctx->r4 = MEM_HU(ctx->r4, 0XB78);
    // 0x8005A878: nop

L_8005A87C:
    // 0x8005A87C: jal         0x8005D74C
    // 0x8005A880: nop

    func_8005D74C(rdram, ctx);
        goto after_32;
    // 0x8005A880: nop

    after_32:
    // 0x8005A884: jal         0x8005A414
    // 0x8005A888: nop

    func_8005A414(rdram, ctx);
        goto after_33;
    // 0x8005A888: nop

    after_33:
    // 0x8005A88C: lui         $t9, 0x8009
    ctx->r25 = S32(0X8009 << 16);
    // 0x8005A890: lw          $t9, 0x3B20($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X3B20);
    // 0x8005A894: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8005A898: jal         0x802A4210
    // 0x8005A89C: sh          $zero, 0xCC($t9)
    MEM_H(0XCC, ctx->r25) = 0;
    LOOKUP_FUNC(0x802A4210)(rdram, ctx);
        goto after_34;
    // 0x8005A89C: sh          $zero, 0xCC($t9)
    MEM_H(0XCC, ctx->r25) = 0;
    after_34:
    // 0x8005A8A0: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x8005A8A4: jal         0x802A4210
    // 0x8005A8A8: addiu       $a0, $a0, -0x225C
    ctx->r4 = ADD32(ctx->r4, -0X225C);
    LOOKUP_FUNC(0x802A4210)(rdram, ctx);
        goto after_35;
    // 0x8005A8A8: addiu       $a0, $a0, -0x225C
    ctx->r4 = ADD32(ctx->r4, -0X225C);
    after_35:
    // 0x8005A8AC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8005A8B0: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8005A8B4: jr          $ra
    // 0x8005A8B8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x8005A8B8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_8005A8BC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8005A8BC: lui         $a0, 0x8011
    ctx->r4 = S32(0X8011 << 16);
    // 0x8005A8C0: addiu       $a0, $a0, -0x2F98
    ctx->r4 = ADD32(ctx->r4, -0X2F98);
    // 0x8005A8C4: lw          $t6, 0x0($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X0);
    // 0x8005A8C8: lui         $a1, 0x2
    ctx->r5 = S32(0X2 << 16);
    // 0x8005A8CC: ori         $a1, $a1, 0x95E0
    ctx->r5 = ctx->r5 | 0X95E0;
    // 0x8005A8D0: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x8005A8D4: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x8005A8D8: addu        $v0, $t6, $a1
    ctx->r2 = ADD32(ctx->r14, ctx->r5);
L_8005A8DC:
    // 0x8005A8DC: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x8005A8E0: sll         $t7, $v1, 16
    ctx->r15 = S32(ctx->r3 << 16);
    // 0x8005A8E4: sra         $v1, $t7, 16
    ctx->r3 = S32(SIGNED(ctx->r15) >> 16);
    // 0x8005A8E8: slti        $at, $v1, 0x36
    ctx->r1 = SIGNED(ctx->r3) < 0X36 ? 1 : 0;
    // 0x8005A8EC: addiu       $v0, $v0, 0x34
    ctx->r2 = ADD32(ctx->r2, 0X34);
    // 0x8005A8F0: swc1        $f0, -0x30($v0)
    MEM_W(-0X30, ctx->r2) = ctx->f0.u32l;
    // 0x8005A8F4: swc1        $f0, -0x2C($v0)
    MEM_W(-0X2C, ctx->r2) = ctx->f0.u32l;
    // 0x8005A8F8: swc1        $f0, -0x28($v0)
    MEM_W(-0X28, ctx->r2) = ctx->f0.u32l;
    // 0x8005A8FC: swc1        $f0, -0x24($v0)
    MEM_W(-0X24, ctx->r2) = ctx->f0.u32l;
    // 0x8005A900: swc1        $f0, -0x20($v0)
    MEM_W(-0X20, ctx->r2) = ctx->f0.u32l;
    // 0x8005A904: bne         $at, $zero, L_8005A8DC
    if (ctx->r1 != 0) {
        // 0x8005A908: swc1        $f0, -0x1C($v0)
        MEM_W(-0X1C, ctx->r2) = ctx->f0.u32l;
            goto L_8005A8DC;
    }
    // 0x8005A908: swc1        $f0, -0x1C($v0)
    MEM_W(-0X1C, ctx->r2) = ctx->f0.u32l;
    // 0x8005A90C: lw          $t9, 0x0($a0)
    ctx->r25 = MEM_W(ctx->r4, 0X0);
    // 0x8005A910: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x8005A914: lwc1        $f0, -0x67EC($at)
    ctx->f0.u32l = MEM_W(ctx->r1, -0X67EC);
    // 0x8005A918: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x8005A91C: addu        $v0, $t9, $a1
    ctx->r2 = ADD32(ctx->r25, ctx->r5);
L_8005A920:
    // 0x8005A920: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x8005A924: sll         $t0, $v1, 16
    ctx->r8 = S32(ctx->r3 << 16);
    // 0x8005A928: sra         $v1, $t0, 16
    ctx->r3 = S32(SIGNED(ctx->r8) >> 16);
    // 0x8005A92C: slti        $at, $v1, 0x1C
    ctx->r1 = SIGNED(ctx->r3) < 0X1C ? 1 : 0;
    // 0x8005A930: addiu       $v0, $v0, 0x34
    ctx->r2 = ADD32(ctx->r2, 0X34);
    // 0x8005A934: swc1        $f0, -0x18($v0)
    MEM_W(-0X18, ctx->r2) = ctx->f0.u32l;
    // 0x8005A938: swc1        $f0, -0x14($v0)
    MEM_W(-0X14, ctx->r2) = ctx->f0.u32l;
    // 0x8005A93C: bne         $at, $zero, L_8005A920
    if (ctx->r1 != 0) {
        // 0x8005A940: swc1        $f0, -0x10($v0)
        MEM_W(-0X10, ctx->r2) = ctx->f0.u32l;
            goto L_8005A920;
    }
    // 0x8005A940: swc1        $f0, -0x10($v0)
    MEM_W(-0X10, ctx->r2) = ctx->f0.u32l;
    // 0x8005A944: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x8005A948: lui         $at, 0x2
    ctx->r1 = S32(0X2 << 16);
    // 0x8005A94C: ori         $at, $at, 0x98B8
    ctx->r1 = ctx->r1 | 0X98B8;
    // 0x8005A950: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x8005A954: addu        $v0, $v0, $at
    ctx->r2 = ADD32(ctx->r2, ctx->r1);
L_8005A958:
    // 0x8005A958: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x8005A95C: sll         $t2, $v1, 16
    ctx->r10 = S32(ctx->r3 << 16);
    // 0x8005A960: sra         $v1, $t2, 16
    ctx->r3 = S32(SIGNED(ctx->r10) >> 16);
    // 0x8005A964: slti        $at, $v1, 0xE
    ctx->r1 = SIGNED(ctx->r3) < 0XE ? 1 : 0;
    // 0x8005A968: addiu       $v0, $v0, 0x34
    ctx->r2 = ADD32(ctx->r2, 0X34);
    // 0x8005A96C: swc1        $f0, -0x18($v0)
    MEM_W(-0X18, ctx->r2) = ctx->f0.u32l;
    // 0x8005A970: swc1        $f0, -0x14($v0)
    MEM_W(-0X14, ctx->r2) = ctx->f0.u32l;
    // 0x8005A974: bne         $at, $zero, L_8005A958
    if (ctx->r1 != 0) {
        // 0x8005A978: swc1        $f0, -0x10($v0)
        MEM_W(-0X10, ctx->r2) = ctx->f0.u32l;
            goto L_8005A958;
    }
    // 0x8005A978: swc1        $f0, -0x10($v0)
    MEM_W(-0X10, ctx->r2) = ctx->f0.u32l;
    // 0x8005A97C: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x8005A980: lwc1        $f0, -0x67E8($at)
    ctx->f0.u32l = MEM_W(ctx->r1, -0X67E8);
    // 0x8005A984: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x8005A988: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    // 0x8005A98C: lui         $at, 0x3F00
    ctx->r1 = S32(0X3F00 << 16);
    // 0x8005A990: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    // 0x8005A994: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x8005A998: lui         $at, 0x2
    ctx->r1 = S32(0X2 << 16);
    // 0x8005A99C: ori         $at, $at, 0x9B90
    ctx->r1 = ctx->r1 | 0X9B90;
    // 0x8005A9A0: addu        $v0, $v0, $at
    ctx->r2 = ADD32(ctx->r2, ctx->r1);
    // 0x8005A9A4: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x8005A9A8: sh          $a1, 0x0($v0)
    MEM_H(0X0, ctx->r2) = ctx->r5;
    // 0x8005A9AC: swc1        $f0, 0x1C($v0)
    MEM_W(0X1C, ctx->r2) = ctx->f0.u32l;
    // 0x8005A9B0: swc1        $f0, 0x20($v0)
    MEM_W(0X20, ctx->r2) = ctx->f0.u32l;
    // 0x8005A9B4: swc1        $f0, 0x24($v0)
    MEM_W(0X24, ctx->r2) = ctx->f0.u32l;
    // 0x8005A9B8: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x8005A9BC: lui         $at, 0x2
    ctx->r1 = S32(0X2 << 16);
    // 0x8005A9C0: ori         $at, $at, 0x9D98
    ctx->r1 = ctx->r1 | 0X9D98;
    // 0x8005A9C4: addu        $v0, $v0, $at
    ctx->r2 = ADD32(ctx->r2, ctx->r1);
    // 0x8005A9C8: sh          $a1, 0x0($v0)
    MEM_H(0X0, ctx->r2) = ctx->r5;
    // 0x8005A9CC: swc1        $f2, 0x1C($v0)
    MEM_W(0X1C, ctx->r2) = ctx->f2.u32l;
    // 0x8005A9D0: swc1        $f2, 0x20($v0)
    MEM_W(0X20, ctx->r2) = ctx->f2.u32l;
    // 0x8005A9D4: swc1        $f2, 0x24($v0)
    MEM_W(0X24, ctx->r2) = ctx->f2.u32l;
    // 0x8005A9D8: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x8005A9DC: lui         $at, 0x2
    ctx->r1 = S32(0X2 << 16);
    // 0x8005A9E0: ori         $at, $at, 0x9BF8
    ctx->r1 = ctx->r1 | 0X9BF8;
    // 0x8005A9E4: addu        $v0, $v0, $at
    ctx->r2 = ADD32(ctx->r2, ctx->r1);
    // 0x8005A9E8: sh          $a1, 0x0($v0)
    MEM_H(0X0, ctx->r2) = ctx->r5;
    // 0x8005A9EC: swc1        $f0, 0x1C($v0)
    MEM_W(0X1C, ctx->r2) = ctx->f0.u32l;
    // 0x8005A9F0: swc1        $f0, 0x20($v0)
    MEM_W(0X20, ctx->r2) = ctx->f0.u32l;
    // 0x8005A9F4: swc1        $f0, 0x24($v0)
    MEM_W(0X24, ctx->r2) = ctx->f0.u32l;
    // 0x8005A9F8: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x8005A9FC: lui         $at, 0x2
    ctx->r1 = S32(0X2 << 16);
    // 0x8005AA00: ori         $at, $at, 0x9C2C
    ctx->r1 = ctx->r1 | 0X9C2C;
    // 0x8005AA04: addu        $v0, $v0, $at
    ctx->r2 = ADD32(ctx->r2, ctx->r1);
    // 0x8005AA08: swc1        $f12, 0x1C($v0)
    MEM_W(0X1C, ctx->r2) = ctx->f12.u32l;
    // 0x8005AA0C: swc1        $f12, 0x20($v0)
    MEM_W(0X20, ctx->r2) = ctx->f12.u32l;
    // 0x8005AA10: swc1        $f12, 0x24($v0)
    MEM_W(0X24, ctx->r2) = ctx->f12.u32l;
    // 0x8005AA14: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x8005AA18: lui         $at, 0x2
    ctx->r1 = S32(0X2 << 16);
    // 0x8005AA1C: ori         $at, $at, 0x9C60
    ctx->r1 = ctx->r1 | 0X9C60;
    // 0x8005AA20: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x8005AA24: addu        $v0, $v0, $at
    ctx->r2 = ADD32(ctx->r2, ctx->r1);
L_8005AA28:
    // 0x8005AA28: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x8005AA2C: sll         $t4, $v1, 16
    ctx->r12 = S32(ctx->r3 << 16);
    // 0x8005AA30: sra         $v1, $t4, 16
    ctx->r3 = S32(SIGNED(ctx->r12) >> 16);
    // 0x8005AA34: slti        $at, $v1, 0x6
    ctx->r1 = SIGNED(ctx->r3) < 0X6 ? 1 : 0;
    // 0x8005AA38: addiu       $v0, $v0, 0x34
    ctx->r2 = ADD32(ctx->r2, 0X34);
    // 0x8005AA3C: swc1        $f12, -0x18($v0)
    MEM_W(-0X18, ctx->r2) = ctx->f12.u32l;
    // 0x8005AA40: swc1        $f12, -0x14($v0)
    MEM_W(-0X14, ctx->r2) = ctx->f12.u32l;
    // 0x8005AA44: bne         $at, $zero, L_8005AA28
    if (ctx->r1 != 0) {
        // 0x8005AA48: swc1        $f12, -0x10($v0)
        MEM_W(-0X10, ctx->r2) = ctx->f12.u32l;
            goto L_8005AA28;
    }
    // 0x8005AA48: swc1        $f12, -0x10($v0)
    MEM_W(-0X10, ctx->r2) = ctx->f12.u32l;
    // 0x8005AA4C: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x8005AA50: lui         $at, 0x2
    ctx->r1 = S32(0X2 << 16);
    // 0x8005AA54: ori         $at, $at, 0x9DCC
    ctx->r1 = ctx->r1 | 0X9DCC;
    // 0x8005AA58: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x8005AA5C: addu        $v0, $v0, $at
    ctx->r2 = ADD32(ctx->r2, ctx->r1);
L_8005AA60:
    // 0x8005AA60: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x8005AA64: sll         $t6, $v1, 16
    ctx->r14 = S32(ctx->r3 << 16);
    // 0x8005AA68: sra         $v1, $t6, 16
    ctx->r3 = S32(SIGNED(ctx->r14) >> 16);
    // 0x8005AA6C: slti        $at, $v1, 0x2
    ctx->r1 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
    // 0x8005AA70: addiu       $v0, $v0, 0x34
    ctx->r2 = ADD32(ctx->r2, 0X34);
    // 0x8005AA74: swc1        $f12, -0x18($v0)
    MEM_W(-0X18, ctx->r2) = ctx->f12.u32l;
    // 0x8005AA78: swc1        $f12, -0x14($v0)
    MEM_W(-0X14, ctx->r2) = ctx->f12.u32l;
    // 0x8005AA7C: bne         $at, $zero, L_8005AA60
    if (ctx->r1 != 0) {
        // 0x8005AA80: swc1        $f12, -0x10($v0)
        MEM_W(-0X10, ctx->r2) = ctx->f12.u32l;
            goto L_8005AA60;
    }
    // 0x8005AA80: swc1        $f12, -0x10($v0)
    MEM_W(-0X10, ctx->r2) = ctx->f12.u32l;
    // 0x8005AA84: jr          $ra
    // 0x8005AA88: nop

    return;
    // 0x8005AA88: nop

;}
RECOMP_FUNC void func_8005AA8C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8005AA8C: lui         $v1, 0x8009
    ctx->r3 = S32(0X8009 << 16);
    // 0x8005AA90: addiu       $v1, $v1, 0x3B20
    ctx->r3 = ADD32(ctx->r3, 0X3B20);
    // 0x8005AA94: lw          $t6, 0x0($v1)
    ctx->r14 = MEM_W(ctx->r3, 0X0);
    // 0x8005AA98: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x8005AA9C: sb          $zero, 0xBC($t6)
    MEM_B(0XBC, ctx->r14) = 0;
    // 0x8005AAA0: lw          $t7, 0x0($v1)
    ctx->r15 = MEM_W(ctx->r3, 0X0);
    // 0x8005AAA4: nop

    // 0x8005AAA8: sb          $zero, 0xBD($t7)
    MEM_B(0XBD, ctx->r15) = 0;
    // 0x8005AAAC: lw          $t8, 0x0($v1)
    ctx->r24 = MEM_W(ctx->r3, 0X0);
    // 0x8005AAB0: nop

    // 0x8005AAB4: sh          $zero, 0xBE($t8)
    MEM_H(0XBE, ctx->r24) = 0;
    // 0x8005AAB8: lw          $t9, 0x0($v1)
    ctx->r25 = MEM_W(ctx->r3, 0X0);
    // 0x8005AABC: nop

    // 0x8005AAC0: sh          $zero, 0xC0($t9)
    MEM_H(0XC0, ctx->r25) = 0;
    // 0x8005AAC4: lw          $t0, 0x0($v1)
    ctx->r8 = MEM_W(ctx->r3, 0X0);
    // 0x8005AAC8: nop

    // 0x8005AACC: sh          $zero, 0xC2($t0)
    MEM_H(0XC2, ctx->r8) = 0;
    // 0x8005AAD0: lw          $t1, 0x0($v1)
    ctx->r9 = MEM_W(ctx->r3, 0X0);
    // 0x8005AAD4: nop

    // 0x8005AAD8: sh          $zero, 0xC4($t1)
    MEM_H(0XC4, ctx->r9) = 0;
    // 0x8005AADC: lw          $t2, 0x0($v1)
    ctx->r10 = MEM_W(ctx->r3, 0X0);
    // 0x8005AAE0: nop

    // 0x8005AAE4: sh          $zero, 0xCC($t2)
    MEM_H(0XCC, ctx->r10) = 0;
    // 0x8005AAE8: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x8005AAEC: nop

    // 0x8005AAF0: lhu         $t3, 0xC0($v0)
    ctx->r11 = MEM_HU(ctx->r2, 0XC0);
    // 0x8005AAF4: nop

    // 0x8005AAF8: ori         $t4, $t3, 0x80
    ctx->r12 = ctx->r11 | 0X80;
    // 0x8005AAFC: sh          $t4, 0xC0($v0)
    MEM_H(0XC0, ctx->r2) = ctx->r12;
    // 0x8005AB00: jr          $ra
    // 0x8005AB04: sh          $zero, 0x361E($at)
    MEM_H(0X361E, ctx->r1) = 0;
    return;
    // 0x8005AB04: sh          $zero, 0x361E($at)
    MEM_H(0X361E, ctx->r1) = 0;
;}
RECOMP_FUNC void func_8005AB08(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8005AB08: lui         $v1, 0x8009
    ctx->r3 = S32(0X8009 << 16);
    // 0x8005AB0C: lui         $t6, 0x8012
    ctx->r14 = S32(0X8012 << 16);
    // 0x8005AB10: addiu       $v1, $v1, 0x3B20
    ctx->r3 = ADD32(ctx->r3, 0X3B20);
    // 0x8005AB14: addiu       $t6, $t6, -0x2DE0
    ctx->r14 = ADD32(ctx->r14, -0X2DE0);
    // 0x8005AB18: sw          $t6, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r14;
    // 0x8005AB1C: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x8005AB20: sb          $t7, 0xBC($t6)
    MEM_B(0XBC, ctx->r14) = ctx->r15;
    // 0x8005AB24: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x8005AB28: lw          $t9, 0x0($v1)
    ctx->r25 = MEM_W(ctx->r3, 0X0);
    // 0x8005AB2C: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x8005AB30: swc1        $f0, 0x58($t9)
    MEM_W(0X58, ctx->r25) = ctx->f0.u32l;
    // 0x8005AB34: lw          $t0, 0x0($v1)
    ctx->r8 = MEM_W(ctx->r3, 0X0);
    // 0x8005AB38: addiu       $a0, $a0, 0x358
    ctx->r4 = ADD32(ctx->r4, 0X358);
    // 0x8005AB3C: swc1        $f0, 0x5C($t0)
    MEM_W(0X5C, ctx->r8) = ctx->f0.u32l;
    // 0x8005AB40: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x8005AB44: nop

    // 0x8005AB48: lhu         $t1, 0xC0($v0)
    ctx->r9 = MEM_HU(ctx->r2, 0XC0);
    // 0x8005AB4C: nop

    // 0x8005AB50: ori         $t2, $t1, 0x80
    ctx->r10 = ctx->r9 | 0X80;
    // 0x8005AB54: sh          $t2, 0xC0($v0)
    MEM_H(0XC0, ctx->r2) = ctx->r10;
    // 0x8005AB58: sh          $zero, 0x2($a0)
    MEM_H(0X2, ctx->r4) = 0;
    // 0x8005AB5C: sh          $zero, 0x5A($a0)
    MEM_H(0X5A, ctx->r4) = 0;
    // 0x8005AB60: sh          $zero, 0xB2($a0)
    MEM_H(0XB2, ctx->r4) = 0;
    // 0x8005AB64: sh          $zero, 0x10A($a0)
    MEM_H(0X10A, ctx->r4) = 0;
    // 0x8005AB68: jr          $ra
    // 0x8005AB6C: sh          $zero, 0x162($a0)
    MEM_H(0X162, ctx->r4) = 0;
    return;
    // 0x8005AB6C: sh          $zero, 0x162($a0)
    MEM_H(0X162, ctx->r4) = 0;
;}
RECOMP_FUNC void func_8005AB78(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8005AB78: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x8005AB7C: sh          $zero, 0xB74($at)
    MEM_H(0XB74, ctx->r1) = 0;
    // 0x8005AB80: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x8005AB84: lui         $v1, 0x8012
    ctx->r3 = S32(0X8012 << 16);
    // 0x8005AB88: sh          $zero, 0xB76($at)
    MEM_H(0XB76, ctx->r1) = 0;
    // 0x8005AB8C: addiu       $v1, $v1, 0xB78
    ctx->r3 = ADD32(ctx->r3, 0XB78);
    // 0x8005AB90: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x8005AB94: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x8005AB98: sh          $t6, 0x0($v1)
    MEM_H(0X0, ctx->r3) = ctx->r14;
    // 0x8005AB9C: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x8005ABA0: addiu       $v0, $v0, -0x2CF0
    ctx->r2 = ADD32(ctx->r2, -0X2CF0);
    // 0x8005ABA4: sh          $t6, 0xB7A($at)
    MEM_H(0XB7A, ctx->r1) = ctx->r14;
    // 0x8005ABA8: lhu         $t7, 0x8($v0)
    ctx->r15 = MEM_HU(ctx->r2, 0X8);
    // 0x8005ABAC: lhu         $t9, 0xA9C($v0)
    ctx->r25 = MEM_HU(ctx->r2, 0XA9C);
    // 0x8005ABB0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8005ABB4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8005ABB8: lbu         $a1, 0xA94($v0)
    ctx->r5 = MEM_BU(ctx->r2, 0XA94);
    // 0x8005ABBC: lbu         $a0, 0x0($v0)
    ctx->r4 = MEM_BU(ctx->r2, 0X0);
    // 0x8005ABC0: ori         $t8, $t7, 0x10
    ctx->r24 = ctx->r15 | 0X10;
    // 0x8005ABC4: andi        $t0, $t9, 0xFFEF
    ctx->r8 = ctx->r25 & 0XFFEF;
    // 0x8005ABC8: sh          $t8, 0x8($v0)
    MEM_H(0X8, ctx->r2) = ctx->r24;
    // 0x8005ABCC: jal         0x80070410
    // 0x8005ABD0: sh          $t0, 0xA9C($v0)
    MEM_H(0XA9C, ctx->r2) = ctx->r8;
    func_80070410(rdram, ctx);
        goto after_0;
    // 0x8005ABD0: sh          $t0, 0xA9C($v0)
    MEM_H(0XA9C, ctx->r2) = ctx->r8;
    after_0:
    // 0x8005ABD4: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x8005ABD8: addiu       $v0, $v0, -0x2CF0
    ctx->r2 = ADD32(ctx->r2, -0X2CF0);
    // 0x8005ABDC: addiu       $v1, $zero, 0x2
    ctx->r3 = ADD32(0, 0X2);
    // 0x8005ABE0: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x8005ABE4: addiu       $a0, $a0, 0xB14
    ctx->r4 = ADD32(ctx->r4, 0XB14);
    // 0x8005ABE8: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x8005ABEC: sh          $zero, 0xE($v0)
    MEM_H(0XE, ctx->r2) = 0;
    // 0x8005ABF0: sh          $zero, 0xAA2($v0)
    MEM_H(0XAA2, ctx->r2) = 0;
    // 0x8005ABF4: sh          $zero, 0x8B6($v0)
    MEM_H(0X8B6, ctx->r2) = 0;
    // 0x8005ABF8: sh          $zero, 0x134A($v0)
    MEM_H(0X134A, ctx->r2) = 0;
    // 0x8005ABFC: sb          $zero, 0x86A($v0)
    MEM_B(0X86A, ctx->r2) = 0;
    // 0x8005AC00: sb          $zero, 0x12FE($v0)
    MEM_B(0X12FE, ctx->r2) = 0;
    // 0x8005AC04: sb          $v1, 0x8A8($v0)
    MEM_B(0X8A8, ctx->r2) = ctx->r3;
    // 0x8005AC08: sb          $v1, 0x133C($v0)
    MEM_B(0X133C, ctx->r2) = ctx->r3;
    // 0x8005AC0C: sb          $v1, 0x8AC($v0)
    MEM_B(0X8AC, ctx->r2) = ctx->r3;
    // 0x8005AC10: sb          $v1, 0x1340($v0)
    MEM_B(0X1340, ctx->r2) = ctx->r3;
    // 0x8005AC14: sb          $a2, 0x0($a0)
    MEM_B(0X0, ctx->r4) = ctx->r6;
    // 0x8005AC18: lui         $a1, 0x8012
    ctx->r5 = S32(0X8012 << 16);
    // 0x8005AC1C: lhu         $a1, 0xB72($a1)
    ctx->r5 = MEM_HU(ctx->r5, 0XB72);
    // 0x8005AC20: addiu       $a3, $zero, 0x4
    ctx->r7 = ADD32(0, 0X4);
    // 0x8005AC24: bne         $a3, $a1, L_8005AC34
    if (ctx->r7 != ctx->r5) {
        // 0x8005AC28: nop
    
            goto L_8005AC34;
    }
    // 0x8005AC28: nop

    // 0x8005AC2C: b           L_8005AC38
    // 0x8005AC30: sb          $a2, 0x1($a0)
    MEM_B(0X1, ctx->r4) = ctx->r6;
        goto L_8005AC38;
    // 0x8005AC30: sb          $a2, 0x1($a0)
    MEM_B(0X1, ctx->r4) = ctx->r6;
L_8005AC34:
    // 0x8005AC34: sb          $zero, 0x1($a0)
    MEM_B(0X1, ctx->r4) = 0;
L_8005AC38:
    // 0x8005AC38: sb          $zero, 0x2($a0)
    MEM_B(0X2, ctx->r4) = 0;
    // 0x8005AC3C: beq         $a3, $a1, L_8005AC4C
    if (ctx->r7 == ctx->r5) {
        // 0x8005AC40: sb          $zero, 0x3($a0)
        MEM_B(0X3, ctx->r4) = 0;
            goto L_8005AC4C;
    }
    // 0x8005AC40: sb          $zero, 0x3($a0)
    MEM_B(0X3, ctx->r4) = 0;
    // 0x8005AC44: b           L_8005AC50
    // 0x8005AC48: sb          $a2, 0x4($a0)
    MEM_B(0X4, ctx->r4) = ctx->r6;
        goto L_8005AC50;
    // 0x8005AC48: sb          $a2, 0x4($a0)
    MEM_B(0X4, ctx->r4) = ctx->r6;
L_8005AC4C:
    // 0x8005AC4C: sb          $zero, 0x4($a0)
    MEM_B(0X4, ctx->r4) = 0;
L_8005AC50:
    // 0x8005AC50: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8005AC54: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8005AC58: jr          $ra
    // 0x8005AC5C: nop

    return;
    // 0x8005AC5C: nop

;}
RECOMP_FUNC void func_8005AC60(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8005AC60: lui         $a0, 0x8009
    ctx->r4 = S32(0X8009 << 16);
    // 0x8005AC64: addiu       $a0, $a0, 0x3B20
    ctx->r4 = ADD32(ctx->r4, 0X3B20);
    // 0x8005AC68: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x8005AC6C: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x8005AC70: addiu       $a1, $zero, 0xEC
    ctx->r5 = ADD32(0, 0XEC);
L_8005AC74:
    // 0x8005AC74: addiu       $v1, $v1, 0x4
    ctx->r3 = ADD32(ctx->r3, 0X4);
    // 0x8005AC78: sb          $zero, 0x1($v0)
    MEM_B(0X1, ctx->r2) = 0;
    // 0x8005AC7C: sb          $zero, 0x2($v0)
    MEM_B(0X2, ctx->r2) = 0;
    // 0x8005AC80: sb          $zero, 0x3($v0)
    MEM_B(0X3, ctx->r2) = 0;
    // 0x8005AC84: addiu       $v0, $v0, 0x4
    ctx->r2 = ADD32(ctx->r2, 0X4);
    // 0x8005AC88: bne         $v1, $a1, L_8005AC74
    if (ctx->r3 != ctx->r5) {
        // 0x8005AC8C: sb          $zero, -0x4($v0)
        MEM_B(-0X4, ctx->r2) = 0;
            goto L_8005AC74;
    }
    // 0x8005AC8C: sb          $zero, -0x4($v0)
    MEM_B(-0X4, ctx->r2) = 0;
    // 0x8005AC90: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x8005AC94: lw          $t6, 0x0($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X0);
    // 0x8005AC98: nop

    // 0x8005AC9C: swc1        $f0, 0x34($t6)
    MEM_W(0X34, ctx->r14) = ctx->f0.u32l;
    // 0x8005ACA0: lw          $t7, 0x0($a0)
    ctx->r15 = MEM_W(ctx->r4, 0X0);
    // 0x8005ACA4: jr          $ra
    // 0x8005ACA8: swc1        $f0, 0x38($t7)
    MEM_W(0X38, ctx->r15) = ctx->f0.u32l;
    return;
    // 0x8005ACA8: swc1        $f0, 0x38($t7)
    MEM_W(0X38, ctx->r15) = ctx->f0.u32l;
;}
RECOMP_FUNC void func_8005ACAC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8005ACAC: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x8005ACB0: addiu       $v0, $v0, -0x17C8
    ctx->r2 = ADD32(ctx->r2, -0X17C8);
    // 0x8005ACB4: addiu       $v1, $zero, 0xF8
    ctx->r3 = ADD32(0, 0XF8);
    // 0x8005ACB8: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x8005ACBC: addiu       $t1, $zero, 0x1C
    ctx->r9 = ADD32(0, 0X1C);
    // 0x8005ACC0: addiu       $t0, $zero, 0xF8
    ctx->r8 = ADD32(0, 0XF8);
L_8005ACC4:
    // 0x8005ACC4: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    // 0x8005ACC8: b           L_8005ACE8
    // 0x8005ACCC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
        goto L_8005ACE8;
    // 0x8005ACCC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x8005ACD0: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
L_8005ACD4:
    // 0x8005ACD4: addiu       $a2, $a2, 0x1
    ctx->r6 = ADD32(ctx->r6, 0X1);
    // 0x8005ACD8: sb          $zero, 0x0($a1)
    MEM_B(0X0, ctx->r5) = 0;
    // 0x8005ACDC: bne         $a3, $a2, L_8005ACD4
    if (ctx->r7 != ctx->r6) {
        // 0x8005ACE0: addiu       $a1, $a1, 0x1
        ctx->r5 = ADD32(ctx->r5, 0X1);
            goto L_8005ACD4;
    }
    // 0x8005ACE0: addiu       $a1, $a1, 0x1
    ctx->r5 = ADD32(ctx->r5, 0X1);
    // 0x8005ACE4: beq         $a2, $t0, L_8005AD04
    if (ctx->r6 == ctx->r8) {
        // 0x8005ACE8: addiu       $a2, $a2, 0x4
        ctx->r6 = ADD32(ctx->r6, 0X4);
            goto L_8005AD04;
    }
L_8005ACE8:
    // 0x8005ACE8: addiu       $a2, $a2, 0x4
    ctx->r6 = ADD32(ctx->r6, 0X4);
    // 0x8005ACEC: sb          $zero, 0x1($a1)
    MEM_B(0X1, ctx->r5) = 0;
    // 0x8005ACF0: sb          $zero, 0x2($a1)
    MEM_B(0X2, ctx->r5) = 0;
    // 0x8005ACF4: sb          $zero, 0x3($a1)
    MEM_B(0X3, ctx->r5) = 0;
    // 0x8005ACF8: addiu       $a1, $a1, 0x4
    ctx->r5 = ADD32(ctx->r5, 0X4);
    // 0x8005ACFC: bne         $a2, $v1, L_8005ACE8
    if (ctx->r6 != ctx->r3) {
        // 0x8005AD00: sb          $zero, -0x4($a1)
        MEM_B(-0X4, ctx->r5) = 0;
            goto L_8005ACE8;
    }
    // 0x8005AD00: sb          $zero, -0x4($a1)
    MEM_B(-0X4, ctx->r5) = 0;
L_8005AD04:
    // 0x8005AD04: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    // 0x8005AD08: bne         $a0, $t1, L_8005ACC4
    if (ctx->r4 != ctx->r9) {
        // 0x8005AD0C: addiu       $v0, $v0, 0xF8
        ctx->r2 = ADD32(ctx->r2, 0XF8);
            goto L_8005ACC4;
    }
    // 0x8005AD0C: addiu       $v0, $v0, 0xF8
    ctx->r2 = ADD32(ctx->r2, 0XF8);
    // 0x8005AD10: jr          $ra
    // 0x8005AD14: nop

    return;
    // 0x8005AD14: nop

;}
RECOMP_FUNC void func_8005AD18(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8005AD18: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x8005AD1C: sw          $s4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r20;
    // 0x8005AD20: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x8005AD24: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x8005AD28: lui         $s3, 0x8012
    ctx->r19 = S32(0X8012 << 16);
    // 0x8005AD2C: lui         $s4, 0x8012
    ctx->r20 = S32(0X8012 << 16);
    // 0x8005AD30: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x8005AD34: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x8005AD38: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8005AD3C: addiu       $s4, $s4, -0x17C8
    ctx->r20 = ADD32(ctx->r20, -0X17C8);
    // 0x8005AD40: addiu       $s3, $s3, -0x2CF0
    ctx->r19 = ADD32(ctx->r19, -0X2CF0);
    // 0x8005AD44: addiu       $s2, $zero, 0xB
    ctx->r18 = ADD32(0, 0XB);
L_8005AD48:
    // 0x8005AD48: lw          $s0, 0x18($s3)
    ctx->r16 = MEM_W(ctx->r19, 0X18);
    // 0x8005AD4C: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
L_8005AD50:
    // 0x8005AD50: lhu         $t6, 0xC($s0)
    ctx->r14 = MEM_HU(ctx->r16, 0XC);
    // 0x8005AD54: nop

    // 0x8005AD58: beq         $t6, $zero, L_8005AD68
    if (ctx->r14 == 0) {
        // 0x8005AD5C: nop
    
            goto L_8005AD68;
    }
    // 0x8005AD5C: nop

    // 0x8005AD60: jal         0x80275290
    // 0x8005AD64: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    LOOKUP_FUNC(0x80275290)(rdram, ctx);
        goto after_0;
    // 0x8005AD64: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_0:
L_8005AD68:
    // 0x8005AD68: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x8005AD6C: bne         $s1, $s2, L_8005AD50
    if (ctx->r17 != ctx->r18) {
        // 0x8005AD70: addiu       $s0, $s0, 0xF8
        ctx->r16 = ADD32(ctx->r16, 0XF8);
            goto L_8005AD50;
    }
    // 0x8005AD70: addiu       $s0, $s0, 0xF8
    ctx->r16 = ADD32(ctx->r16, 0XF8);
    // 0x8005AD74: addiu       $s3, $s3, 0xA94
    ctx->r19 = ADD32(ctx->r19, 0XA94);
    // 0x8005AD78: bne         $s3, $s4, L_8005AD48
    if (ctx->r19 != ctx->r20) {
        // 0x8005AD7C: nop
    
            goto L_8005AD48;
    }
    // 0x8005AD7C: nop

    // 0x8005AD80: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x8005AD84: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8005AD88: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x8005AD8C: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x8005AD90: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x8005AD94: lw          $s4, 0x28($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X28);
    // 0x8005AD98: jr          $ra
    // 0x8005AD9C: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x8005AD9C: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_8005ADA0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8005ADA0: lui         $v1, 0x8012
    ctx->r3 = S32(0X8012 << 16);
    // 0x8005ADA4: lui         $t1, 0x8012
    ctx->r9 = S32(0X8012 << 16);
    // 0x8005ADA8: lui         $a3, 0x3D0
    ctx->r7 = S32(0X3D0 << 16);
    // 0x8005ADAC: ori         $a3, $a3, 0x9000
    ctx->r7 = ctx->r7 | 0X9000;
    // 0x8005ADB0: addiu       $t1, $t1, -0x17A0
    ctx->r9 = ADD32(ctx->r9, -0X17A0);
    // 0x8005ADB4: addiu       $v1, $v1, -0x2CC8
    ctx->r3 = ADD32(ctx->r3, -0X2CC8);
    // 0x8005ADB8: addiu       $t0, $zero, 0x10
    ctx->r8 = ADD32(0, 0X10);
    // 0x8005ADBC: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    // 0x8005ADC0: addiu       $a1, $zero, 0xC
    ctx->r5 = ADD32(0, 0XC);
    // 0x8005ADC4: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
L_8005ADC8:
    // 0x8005ADC8: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
L_8005ADCC:
    // 0x8005ADCC: addiu       $a0, $a0, 0x4
    ctx->r4 = ADD32(ctx->r4, 0X4);
    // 0x8005ADD0: sb          $a1, 0x46($v0)
    MEM_B(0X46, ctx->r2) = ctx->r5;
    // 0x8005ADD4: sb          $zero, 0x47($v0)
    MEM_B(0X47, ctx->r2) = 0;
    // 0x8005ADD8: sb          $zero, 0x48($v0)
    MEM_B(0X48, ctx->r2) = 0;
    // 0x8005ADDC: sb          $a2, 0x45($v0)
    MEM_B(0X45, ctx->r2) = ctx->r6;
    // 0x8005ADE0: sb          $zero, 0x49($v0)
    MEM_B(0X49, ctx->r2) = 0;
    // 0x8005ADE4: sb          $zero, 0x4A($v0)
    MEM_B(0X4A, ctx->r2) = 0;
    // 0x8005ADE8: sw          $a3, 0x4C($v0)
    MEM_W(0X4C, ctx->r2) = ctx->r7;
    // 0x8005ADEC: sb          $a1, 0x72($v0)
    MEM_B(0X72, ctx->r2) = ctx->r5;
    // 0x8005ADF0: sb          $zero, 0x73($v0)
    MEM_B(0X73, ctx->r2) = 0;
    // 0x8005ADF4: sb          $zero, 0x74($v0)
    MEM_B(0X74, ctx->r2) = 0;
    // 0x8005ADF8: sb          $a2, 0x71($v0)
    MEM_B(0X71, ctx->r2) = ctx->r6;
    // 0x8005ADFC: sb          $zero, 0x75($v0)
    MEM_B(0X75, ctx->r2) = 0;
    // 0x8005AE00: sb          $zero, 0x76($v0)
    MEM_B(0X76, ctx->r2) = 0;
    // 0x8005AE04: sw          $a3, 0x78($v0)
    MEM_W(0X78, ctx->r2) = ctx->r7;
    // 0x8005AE08: sb          $a1, 0x9E($v0)
    MEM_B(0X9E, ctx->r2) = ctx->r5;
    // 0x8005AE0C: sb          $zero, 0x9F($v0)
    MEM_B(0X9F, ctx->r2) = 0;
    // 0x8005AE10: sb          $zero, 0xA0($v0)
    MEM_B(0XA0, ctx->r2) = 0;
    // 0x8005AE14: sb          $a2, 0x9D($v0)
    MEM_B(0X9D, ctx->r2) = ctx->r6;
    // 0x8005AE18: sb          $zero, 0xA1($v0)
    MEM_B(0XA1, ctx->r2) = 0;
    // 0x8005AE1C: sb          $zero, 0xA2($v0)
    MEM_B(0XA2, ctx->r2) = 0;
    // 0x8005AE20: sw          $a3, 0xA4($v0)
    MEM_W(0XA4, ctx->r2) = ctx->r7;
    // 0x8005AE24: addiu       $v0, $v0, 0xB0
    ctx->r2 = ADD32(ctx->r2, 0XB0);
    // 0x8005AE28: sb          $a1, -0x96($v0)
    MEM_B(-0X96, ctx->r2) = ctx->r5;
    // 0x8005AE2C: sb          $zero, -0x95($v0)
    MEM_B(-0X95, ctx->r2) = 0;
    // 0x8005AE30: sb          $zero, -0x94($v0)
    MEM_B(-0X94, ctx->r2) = 0;
    // 0x8005AE34: sb          $a2, -0x97($v0)
    MEM_B(-0X97, ctx->r2) = ctx->r6;
    // 0x8005AE38: sb          $zero, -0x93($v0)
    MEM_B(-0X93, ctx->r2) = 0;
    // 0x8005AE3C: sb          $zero, -0x92($v0)
    MEM_B(-0X92, ctx->r2) = 0;
    // 0x8005AE40: bne         $a0, $t0, L_8005ADCC
    if (ctx->r4 != ctx->r8) {
        // 0x8005AE44: sw          $a3, -0x90($v0)
        MEM_W(-0X90, ctx->r2) = ctx->r7;
            goto L_8005ADCC;
    }
    // 0x8005AE44: sw          $a3, -0x90($v0)
    MEM_W(-0X90, ctx->r2) = ctx->r7;
    // 0x8005AE48: addiu       $v1, $v1, 0xA94
    ctx->r3 = ADD32(ctx->r3, 0XA94);
    // 0x8005AE4C: bne         $v1, $t1, L_8005ADC8
    if (ctx->r3 != ctx->r9) {
        // 0x8005AE50: or          $v0, $v1, $zero
        ctx->r2 = ctx->r3 | 0;
            goto L_8005ADC8;
    }
    // 0x8005AE50: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    // 0x8005AE54: jr          $ra
    // 0x8005AE58: nop

    return;
    // 0x8005AE58: nop

;}
RECOMP_FUNC void func_8005AE5C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8005AE5C: lui         $v1, 0x8012
    ctx->r3 = S32(0X8012 << 16);
    // 0x8005AE60: lui         $t0, 0x8012
    ctx->r8 = S32(0X8012 << 16);
    // 0x8005AE64: lui         $a1, 0x3D0
    ctx->r5 = S32(0X3D0 << 16);
    // 0x8005AE68: ori         $a1, $a1, 0x9000
    ctx->r5 = ctx->r5 | 0X9000;
    // 0x8005AE6C: addiu       $t0, $t0, -0x17A0
    ctx->r8 = ADD32(ctx->r8, -0X17A0);
    // 0x8005AE70: addiu       $v1, $v1, -0x2CC8
    ctx->r3 = ADD32(ctx->r3, -0X2CC8);
    // 0x8005AE74: addiu       $a3, $zero, 0x10
    ctx->r7 = ADD32(0, 0X10);
    // 0x8005AE78: addiu       $a2, $zero, 0xD
    ctx->r6 = ADD32(0, 0XD);
    // 0x8005AE7C: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
L_8005AE80:
    // 0x8005AE80: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
L_8005AE84:
    // 0x8005AE84: lbu         $t6, 0x1A($v0)
    ctx->r14 = MEM_BU(ctx->r2, 0X1A);
    // 0x8005AE88: lbu         $t2, 0x46($v0)
    ctx->r10 = MEM_BU(ctx->r2, 0X46);
    // 0x8005AE8C: multu       $t6, $a1
    result = U64(U32(ctx->r14)) * U64(U32(ctx->r5)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8005AE90: lbu         $t1, 0x19($v0)
    ctx->r9 = MEM_BU(ctx->r2, 0X19);
    // 0x8005AE94: lbu         $t6, 0x45($v0)
    ctx->r14 = MEM_BU(ctx->r2, 0X45);
    // 0x8005AE98: sb          $t1, 0x28($v0)
    MEM_B(0X28, ctx->r2) = ctx->r9;
    // 0x8005AE9C: sb          $t6, 0x54($v0)
    MEM_B(0X54, ctx->r2) = ctx->r14;
    // 0x8005AEA0: addiu       $a0, $a0, 0x4
    ctx->r4 = ADD32(ctx->r4, 0X4);
    // 0x8005AEA4: sb          $zero, 0x50($v0)
    MEM_B(0X50, ctx->r2) = 0;
    // 0x8005AEA8: sh          $zero, 0x52($v0)
    MEM_H(0X52, ctx->r2) = 0;
    // 0x8005AEAC: sb          $zero, 0x7C($v0)
    MEM_B(0X7C, ctx->r2) = 0;
    // 0x8005AEB0: sh          $zero, 0x7E($v0)
    MEM_H(0X7E, ctx->r2) = 0;
    // 0x8005AEB4: sb          $zero, 0xA8($v0)
    MEM_B(0XA8, ctx->r2) = 0;
    // 0x8005AEB8: sh          $zero, 0xAA($v0)
    MEM_H(0XAA, ctx->r2) = 0;
    // 0x8005AEBC: mflo        $t7
    ctx->r15 = lo;
    // 0x8005AEC0: addu        $t8, $t7, $a1
    ctx->r24 = ADD32(ctx->r15, ctx->r5);
    // 0x8005AEC4: lbu         $t7, 0x72($v0)
    ctx->r15 = MEM_BU(ctx->r2, 0X72);
    // 0x8005AEC8: div         $zero, $t8, $a2
    lo = S32(S64(S32(ctx->r24)) / S64(S32(ctx->r6))); hi = S32(S64(S32(ctx->r24)) % S64(S32(ctx->r6)));
    // 0x8005AECC: addiu       $v0, $v0, 0xB0
    ctx->r2 = ADD32(ctx->r2, 0XB0);
    // 0x8005AED0: bne         $a2, $zero, L_8005AEDC
    if (ctx->r6 != 0) {
        // 0x8005AED4: nop
    
            goto L_8005AEDC;
    }
    // 0x8005AED4: nop

    // 0x8005AED8: break       7
    do_break(2147856088);
L_8005AEDC:
    // 0x8005AEDC: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x8005AEE0: bne         $a2, $at, L_8005AEF4
    if (ctx->r6 != ctx->r1) {
        // 0x8005AEE4: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_8005AEF4;
    }
    // 0x8005AEE4: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x8005AEE8: bne         $t8, $at, L_8005AEF4
    if (ctx->r24 != ctx->r1) {
        // 0x8005AEEC: nop
    
            goto L_8005AEF4;
    }
    // 0x8005AEEC: nop

    // 0x8005AEF0: break       6
    do_break(2147856112);
L_8005AEF4:
    // 0x8005AEF4: sb          $zero, -0x8C($v0)
    MEM_B(-0X8C, ctx->r2) = 0;
    // 0x8005AEF8: sh          $zero, -0x8A($v0)
    MEM_H(-0X8A, ctx->r2) = 0;
    // 0x8005AEFC: mflo        $t9
    ctx->r25 = lo;
    // 0x8005AF00: sw          $t9, -0x90($v0)
    MEM_W(-0X90, ctx->r2) = ctx->r25;
    // 0x8005AF04: nop

    // 0x8005AF08: multu       $t2, $a1
    result = U64(U32(ctx->r10)) * U64(U32(ctx->r5)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8005AF0C: lbu         $t2, -0x3F($v0)
    ctx->r10 = MEM_BU(ctx->r2, -0X3F);
    // 0x8005AF10: nop

    // 0x8005AF14: sb          $t2, -0x30($v0)
    MEM_B(-0X30, ctx->r2) = ctx->r10;
    // 0x8005AF18: mflo        $t3
    ctx->r11 = lo;
    // 0x8005AF1C: addu        $t4, $t3, $a1
    ctx->r12 = ADD32(ctx->r11, ctx->r5);
    // 0x8005AF20: lbu         $t3, -0x12($v0)
    ctx->r11 = MEM_BU(ctx->r2, -0X12);
    // 0x8005AF24: div         $zero, $t4, $a2
    lo = S32(S64(S32(ctx->r12)) / S64(S32(ctx->r6))); hi = S32(S64(S32(ctx->r12)) % S64(S32(ctx->r6)));
    // 0x8005AF28: bne         $a2, $zero, L_8005AF34
    if (ctx->r6 != 0) {
        // 0x8005AF2C: nop
    
            goto L_8005AF34;
    }
    // 0x8005AF2C: nop

    // 0x8005AF30: break       7
    do_break(2147856176);
L_8005AF34:
    // 0x8005AF34: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x8005AF38: bne         $a2, $at, L_8005AF4C
    if (ctx->r6 != ctx->r1) {
        // 0x8005AF3C: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_8005AF4C;
    }
    // 0x8005AF3C: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x8005AF40: bne         $t4, $at, L_8005AF4C
    if (ctx->r12 != ctx->r1) {
        // 0x8005AF44: nop
    
            goto L_8005AF4C;
    }
    // 0x8005AF44: nop

    // 0x8005AF48: break       6
    do_break(2147856200);
L_8005AF4C:
    // 0x8005AF4C: mflo        $t5
    ctx->r13 = lo;
    // 0x8005AF50: sw          $t5, -0x64($v0)
    MEM_W(-0X64, ctx->r2) = ctx->r13;
    // 0x8005AF54: nop

    // 0x8005AF58: multu       $t7, $a1
    result = U64(U32(ctx->r15)) * U64(U32(ctx->r5)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8005AF5C: lbu         $t7, -0x13($v0)
    ctx->r15 = MEM_BU(ctx->r2, -0X13);
    // 0x8005AF60: nop

    // 0x8005AF64: sb          $t7, -0x4($v0)
    MEM_B(-0X4, ctx->r2) = ctx->r15;
    // 0x8005AF68: mflo        $t8
    ctx->r24 = lo;
    // 0x8005AF6C: addu        $t9, $t8, $a1
    ctx->r25 = ADD32(ctx->r24, ctx->r5);
    // 0x8005AF70: nop

    // 0x8005AF74: div         $zero, $t9, $a2
    lo = S32(S64(S32(ctx->r25)) / S64(S32(ctx->r6))); hi = S32(S64(S32(ctx->r25)) % S64(S32(ctx->r6)));
    // 0x8005AF78: bne         $a2, $zero, L_8005AF84
    if (ctx->r6 != 0) {
        // 0x8005AF7C: nop
    
            goto L_8005AF84;
    }
    // 0x8005AF7C: nop

    // 0x8005AF80: break       7
    do_break(2147856256);
L_8005AF84:
    // 0x8005AF84: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x8005AF88: bne         $a2, $at, L_8005AF9C
    if (ctx->r6 != ctx->r1) {
        // 0x8005AF8C: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_8005AF9C;
    }
    // 0x8005AF8C: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x8005AF90: bne         $t9, $at, L_8005AF9C
    if (ctx->r25 != ctx->r1) {
        // 0x8005AF94: nop
    
            goto L_8005AF9C;
    }
    // 0x8005AF94: nop

    // 0x8005AF98: break       6
    do_break(2147856280);
L_8005AF9C:
    // 0x8005AF9C: mflo        $t1
    ctx->r9 = lo;
    // 0x8005AFA0: sw          $t1, -0x38($v0)
    MEM_W(-0X38, ctx->r2) = ctx->r9;
    // 0x8005AFA4: nop

    // 0x8005AFA8: multu       $t3, $a1
    result = U64(U32(ctx->r11)) * U64(U32(ctx->r5)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8005AFAC: mflo        $t4
    ctx->r12 = lo;
    // 0x8005AFB0: addu        $t5, $t4, $a1
    ctx->r13 = ADD32(ctx->r12, ctx->r5);
    // 0x8005AFB4: nop

    // 0x8005AFB8: div         $zero, $t5, $a2
    lo = S32(S64(S32(ctx->r13)) / S64(S32(ctx->r6))); hi = S32(S64(S32(ctx->r13)) % S64(S32(ctx->r6)));
    // 0x8005AFBC: bne         $a2, $zero, L_8005AFC8
    if (ctx->r6 != 0) {
        // 0x8005AFC0: nop
    
            goto L_8005AFC8;
    }
    // 0x8005AFC0: nop

    // 0x8005AFC4: break       7
    do_break(2147856324);
L_8005AFC8:
    // 0x8005AFC8: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x8005AFCC: bne         $a2, $at, L_8005AFE0
    if (ctx->r6 != ctx->r1) {
        // 0x8005AFD0: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_8005AFE0;
    }
    // 0x8005AFD0: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x8005AFD4: bne         $t5, $at, L_8005AFE0
    if (ctx->r13 != ctx->r1) {
        // 0x8005AFD8: nop
    
            goto L_8005AFE0;
    }
    // 0x8005AFD8: nop

    // 0x8005AFDC: break       6
    do_break(2147856348);
L_8005AFE0:
    // 0x8005AFE0: mflo        $t6
    ctx->r14 = lo;
    // 0x8005AFE4: sw          $t6, -0xC($v0)
    MEM_W(-0XC, ctx->r2) = ctx->r14;
    // 0x8005AFE8: bne         $a0, $a3, L_8005AE84
    if (ctx->r4 != ctx->r7) {
        // 0x8005AFEC: nop
    
            goto L_8005AE84;
    }
    // 0x8005AFEC: nop

    // 0x8005AFF0: addiu       $v1, $v1, 0xA94
    ctx->r3 = ADD32(ctx->r3, 0XA94);
    // 0x8005AFF4: bne         $v1, $t0, L_8005AE80
    if (ctx->r3 != ctx->r8) {
        // 0x8005AFF8: or          $v0, $v1, $zero
        ctx->r2 = ctx->r3 | 0;
            goto L_8005AE80;
    }
    // 0x8005AFF8: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    // 0x8005AFFC: jr          $ra
    // 0x8005B000: nop

    return;
    // 0x8005B000: nop

;}
RECOMP_FUNC void func_8005B004(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8005B004: addiu       $sp, $sp, -0x68
    ctx->r29 = ADD32(ctx->r29, -0X68);
    // 0x8005B008: sw          $s3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r19;
    // 0x8005B00C: lui         $s3, 0x8011
    ctx->r19 = S32(0X8011 << 16);
    // 0x8005B010: lw          $s3, -0x2F98($s3)
    ctx->r19 = MEM_W(ctx->r19, -0X2F98);
    // 0x8005B014: sw          $s7, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r23;
    // 0x8005B018: sw          $s6, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r22;
    // 0x8005B01C: sw          $s4, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r20;
    // 0x8005B020: swc1        $f20, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f20.u32l;
    // 0x8005B024: lui         $at, 0x2
    ctx->r1 = S32(0X2 << 16);
    // 0x8005B028: lui         $t6, 0x8012
    ctx->r14 = S32(0X8012 << 16);
    // 0x8005B02C: sw          $fp, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r30;
    // 0x8005B030: sw          $s2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r18;
    // 0x8005B034: ori         $at, $at, 0x95E0
    ctx->r1 = ctx->r1 | 0X95E0;
    // 0x8005B038: addiu       $s4, $t6, -0x2CF0
    ctx->r20 = ADD32(ctx->r14, -0X2CF0);
    // 0x8005B03C: lui         $s6, 0x8012
    ctx->r22 = S32(0X8012 << 16);
    // 0x8005B040: lui         $s7, 0x802B
    ctx->r23 = S32(0X802B << 16);
    // 0x8005B044: mtc1        $zero, $f20
    ctx->f20.u32l = 0;
    // 0x8005B048: sw          $ra, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r31;
    // 0x8005B04C: sw          $s5, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r21;
    // 0x8005B050: sw          $s1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r17;
    // 0x8005B054: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x8005B058: swc1        $f21, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x8005B05C: addiu       $s2, $zero, 0x13F
    ctx->r18 = ADD32(0, 0X13F);
    // 0x8005B060: addiu       $s7, $s7, 0x5F10
    ctx->r23 = ADD32(ctx->r23, 0X5F10);
    // 0x8005B064: addiu       $s6, $s6, 0xA20
    ctx->r22 = ADD32(ctx->r22, 0XA20);
    // 0x8005B068: sw          $s4, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r20;
    // 0x8005B06C: addiu       $fp, $zero, 0xF8
    ctx->r30 = ADD32(0, 0XF8);
    // 0x8005B070: sw          $zero, 0x54($sp)
    MEM_W(0X54, ctx->r29) = 0;
    // 0x8005B074: addu        $s3, $s3, $at
    ctx->r19 = ADD32(ctx->r19, ctx->r1);
L_8005B078:
    // 0x8005B078: lw          $t8, 0x54($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X54);
    // 0x8005B07C: lw          $t7, 0x48($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X48);
    // 0x8005B080: xori        $t9, $t8, 0x1
    ctx->r25 = ctx->r24 ^ 0X1;
    // 0x8005B084: sll         $t0, $t9, 2
    ctx->r8 = S32(ctx->r25 << 2);
    // 0x8005B088: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x8005B08C: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x8005B090: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x8005B094: sll         $t0, $t0, 3
    ctx->r8 = S32(ctx->r8 << 3);
    // 0x8005B098: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x8005B09C: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x8005B0A0: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x8005B0A4: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x8005B0A8: lui         $s5, 0x8012
    ctx->r21 = S32(0X8012 << 16);
    // 0x8005B0AC: addu        $s5, $s5, $t0
    ctx->r21 = ADD32(ctx->r21, ctx->r8);
    // 0x8005B0B0: lw          $s5, -0x2CD8($s5)
    ctx->r21 = MEM_W(ctx->r21, -0X2CD8);
    // 0x8005B0B4: lw          $s0, 0x18($t7)
    ctx->r16 = MEM_W(ctx->r15, 0X18);
    // 0x8005B0B8: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
L_8005B0BC:
    // 0x8005B0BC: sw          $s3, 0xCC($s0)
    MEM_W(0XCC, ctx->r16) = ctx->r19;
    // 0x8005B0C0: lw          $t1, 0xCC($s0)
    ctx->r9 = MEM_W(ctx->r16, 0XCC);
    // 0x8005B0C4: sh          $zero, 0xC($s0)
    MEM_H(0XC, ctx->r16) = 0;
    // 0x8005B0C8: sh          $zero, 0x12($s0)
    MEM_H(0X12, ctx->r16) = 0;
    // 0x8005B0CC: sh          $zero, 0x14($s0)
    MEM_H(0X14, ctx->r16) = 0;
    // 0x8005B0D0: sh          $zero, 0x16($s0)
    MEM_H(0X16, ctx->r16) = 0;
    // 0x8005B0D4: sh          $zero, 0x18($s0)
    MEM_H(0X18, ctx->r16) = 0;
    // 0x8005B0D8: sh          $zero, 0xE($s0)
    MEM_H(0XE, ctx->r16) = 0;
    // 0x8005B0DC: sh          $zero, 0x20($s0)
    MEM_H(0X20, ctx->r16) = 0;
    // 0x8005B0E0: sw          $zero, 0x28($s0)
    MEM_W(0X28, ctx->r16) = 0;
    // 0x8005B0E4: sh          $zero, 0x22($s0)
    MEM_H(0X22, ctx->r16) = 0;
    // 0x8005B0E8: sb          $zero, 0x0($s0)
    MEM_B(0X0, ctx->r16) = 0;
    // 0x8005B0EC: sb          $zero, 0x1($s0)
    MEM_B(0X1, ctx->r16) = 0;
    // 0x8005B0F0: sb          $zero, 0x2($s0)
    MEM_B(0X2, ctx->r16) = 0;
    // 0x8005B0F4: sb          $zero, 0x3($s0)
    MEM_B(0X3, ctx->r16) = 0;
    // 0x8005B0F8: sb          $zero, 0x9($s0)
    MEM_B(0X9, ctx->r16) = 0;
    // 0x8005B0FC: sh          $zero, 0x0($t1)
    MEM_H(0X0, ctx->r9) = 0;
    // 0x8005B100: addiu       $s3, $s3, 0x34
    ctx->r19 = ADD32(ctx->r19, 0X34);
    // 0x8005B104: sw          $s4, 0xC8($s0)
    MEM_W(0XC8, ctx->r16) = ctx->r20;
    // 0x8005B108: sh          $s1, 0x1A($s0)
    MEM_H(0X1A, ctx->r16) = ctx->r17;
    // 0x8005B10C: sw          $s6, 0xC4($s0)
    MEM_W(0XC4, ctx->r16) = ctx->r22;
    // 0x8005B110: swc1        $f20, 0x94($s0)
    MEM_W(0X94, ctx->r16) = ctx->f20.u32l;
    // 0x8005B114: swc1        $f20, 0x98($s0)
    MEM_W(0X98, ctx->r16) = ctx->f20.u32l;
    // 0x8005B118: swc1        $f20, 0x48($s0)
    MEM_W(0X48, ctx->r16) = ctx->f20.u32l;
    // 0x8005B11C: swc1        $f20, 0x50($s0)
    MEM_W(0X50, ctx->r16) = ctx->f20.u32l;
    // 0x8005B120: swc1        $f20, 0x70($s0)
    MEM_W(0X70, ctx->r16) = ctx->f20.u32l;
    // 0x8005B124: swc1        $f20, 0x74($s0)
    MEM_W(0X74, ctx->r16) = ctx->f20.u32l;
    // 0x8005B128: jal         0x80059868
    // 0x8005B12C: swc1        $f20, 0x78($s0)
    MEM_W(0X78, ctx->r16) = ctx->f20.u32l;
    func_80059868(rdram, ctx);
        goto after_0;
    // 0x8005B12C: swc1        $f20, 0x78($s0)
    MEM_W(0X78, ctx->r16) = ctx->f20.u32l;
    after_0:
    // 0x8005B130: sltiu       $at, $s1, 0xB
    ctx->r1 = ctx->r17 < 0XB ? 1 : 0;
    // 0x8005B134: beq         $at, $zero, L_8005B188
    if (ctx->r1 == 0) {
        // 0x8005B138: sh          $v0, 0x2C($s0)
        MEM_H(0X2C, ctx->r16) = ctx->r2;
            goto L_8005B188;
    }
    // 0x8005B138: sh          $v0, 0x2C($s0)
    MEM_H(0X2C, ctx->r16) = ctx->r2;
    // 0x8005B13C: sh          $s2, 0x3E($s0)
    MEM_H(0X3E, ctx->r16) = ctx->r18;
    // 0x8005B140: lhu         $t2, 0x3E($s0)
    ctx->r10 = MEM_HU(ctx->r16, 0X3E);
    // 0x8005B144: addu        $t6, $s4, $s1
    ctx->r14 = ADD32(ctx->r20, ctx->r17);
    // 0x8005B148: sll         $t3, $t2, 2
    ctx->r11 = S32(ctx->r10 << 2);
    // 0x8005B14C: addu        $t4, $s7, $t3
    ctx->r12 = ADD32(ctx->r23, ctx->r11);
    // 0x8005B150: lw          $t5, 0x0($t4)
    ctx->r13 = MEM_W(ctx->r12, 0X0);
    // 0x8005B154: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
    // 0x8005B158: sw          $t5, 0xE0($s0)
    MEM_W(0XE0, ctx->r16) = ctx->r13;
    // 0x8005B15C: lbu         $v1, 0x86F($t6)
    ctx->r3 = MEM_BU(ctx->r14, 0X86F);
    // 0x8005B160: nop

    // 0x8005B164: beq         $v1, $zero, L_8005B188
    if (ctx->r3 == 0) {
        // 0x8005B168: nop
    
            goto L_8005B188;
    }
    // 0x8005B168: nop

    // 0x8005B16C: multu       $v1, $fp
    result = U64(U32(ctx->r3)) * U64(U32(ctx->r30)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8005B170: mflo        $t7
    ctx->r15 = lo;
    // 0x8005B174: addu        $v0, $s5, $t7
    ctx->r2 = ADD32(ctx->r21, ctx->r15);
    // 0x8005B178: lhu         $t8, 0x12($v0)
    ctx->r24 = MEM_HU(ctx->r2, 0X12);
    // 0x8005B17C: nop

    // 0x8005B180: ori         $t9, $t8, 0x400
    ctx->r25 = ctx->r24 | 0X400;
    // 0x8005B184: sh          $t9, 0x12($v0)
    MEM_H(0X12, ctx->r2) = ctx->r25;
L_8005B188:
    // 0x8005B188: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x8005B18C: addiu       $at, $zero, 0xE
    ctx->r1 = ADD32(0, 0XE);
    // 0x8005B190: bne         $s1, $at, L_8005B0BC
    if (ctx->r17 != ctx->r1) {
        // 0x8005B194: addiu       $s0, $s0, 0xF8
        ctx->r16 = ADD32(ctx->r16, 0XF8);
            goto L_8005B0BC;
    }
    // 0x8005B194: addiu       $s0, $s0, 0xF8
    ctx->r16 = ADD32(ctx->r16, 0XF8);
    // 0x8005B198: lw          $t0, 0x54($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X54);
    // 0x8005B19C: lw          $t2, 0x48($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X48);
    // 0x8005B1A0: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x8005B1A4: addiu       $t1, $t0, 0x1
    ctx->r9 = ADD32(ctx->r8, 0X1);
    // 0x8005B1A8: addiu       $t3, $t2, 0xA94
    ctx->r11 = ADD32(ctx->r10, 0XA94);
    // 0x8005B1AC: sw          $t3, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r11;
    // 0x8005B1B0: sw          $t1, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r9;
    // 0x8005B1B4: bne         $t1, $at, L_8005B078
    if (ctx->r9 != ctx->r1) {
        // 0x8005B1B8: addiu       $s4, $s4, 0xA94
        ctx->r20 = ADD32(ctx->r20, 0XA94);
            goto L_8005B078;
    }
    // 0x8005B1B8: addiu       $s4, $s4, 0xA94
    ctx->r20 = ADD32(ctx->r20, 0XA94);
    // 0x8005B1BC: lw          $ra, 0x44($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X44);
    // 0x8005B1C0: lwc1        $f21, 0x18($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X18);
    // 0x8005B1C4: lwc1        $f20, 0x1C($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x8005B1C8: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x8005B1CC: lw          $s1, 0x24($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X24);
    // 0x8005B1D0: lw          $s2, 0x28($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X28);
    // 0x8005B1D4: lw          $s3, 0x2C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X2C);
    // 0x8005B1D8: lw          $s4, 0x30($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X30);
    // 0x8005B1DC: lw          $s5, 0x34($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X34);
    // 0x8005B1E0: lw          $s6, 0x38($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X38);
    // 0x8005B1E4: lw          $s7, 0x3C($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X3C);
    // 0x8005B1E8: lw          $fp, 0x40($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X40);
    // 0x8005B1EC: jr          $ra
    // 0x8005B1F0: addiu       $sp, $sp, 0x68
    ctx->r29 = ADD32(ctx->r29, 0X68);
    return;
    // 0x8005B1F0: addiu       $sp, $sp, 0x68
    ctx->r29 = ADD32(ctx->r29, 0X68);
;}
RECOMP_FUNC void func_8005B1F4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8005B1F4: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x8005B1F8: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8005B1FC: lui         $s0, 0x8011
    ctx->r16 = S32(0X8011 << 16);
    // 0x8005B200: lw          $s0, -0x2F98($s0)
    ctx->r16 = MEM_W(ctx->r16, -0X2F98);
    // 0x8005B204: lui         $at, 0x2
    ctx->r1 = S32(0X2 << 16);
    // 0x8005B208: sw          $s4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r20;
    // 0x8005B20C: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x8005B210: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x8005B214: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x8005B218: ori         $at, $at, 0x9370
    ctx->r1 = ctx->r1 | 0X9370;
    // 0x8005B21C: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x8005B220: sh          $zero, 0x38($sp)
    MEM_H(0X38, ctx->r29) = 0;
    // 0x8005B224: sh          $zero, 0x3A($sp)
    MEM_H(0X3A, ctx->r29) = 0;
    // 0x8005B228: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    // 0x8005B22C: addiu       $s2, $zero, 0x2
    ctx->r18 = ADD32(0, 0X2);
    // 0x8005B230: addiu       $s3, $sp, 0x38
    ctx->r19 = ADD32(ctx->r29, 0X38);
    // 0x8005B234: addiu       $s4, $zero, 0x42
    ctx->r20 = ADD32(0, 0X42);
    // 0x8005B238: addu        $s0, $s0, $at
    ctx->r16 = ADD32(ctx->r16, ctx->r1);
L_8005B23C:
    // 0x8005B23C: lhu         $t6, 0x0($s0)
    ctx->r14 = MEM_HU(ctx->r16, 0X0);
    // 0x8005B240: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8005B244: bne         $s2, $t6, L_8005B254
    if (ctx->r18 != ctx->r14) {
        // 0x8005B248: nop
    
            goto L_8005B254;
    }
    // 0x8005B248: nop

    // 0x8005B24C: jal         0x80000450
    // 0x8005B250: or          $a1, $s3, $zero
    ctx->r5 = ctx->r19 | 0;
    func_80000450(rdram, ctx);
        goto after_0;
    // 0x8005B250: or          $a1, $s3, $zero
    ctx->r5 = ctx->r19 | 0;
    after_0:
L_8005B254:
    // 0x8005B254: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x8005B258: bne         $s1, $s4, L_8005B23C
    if (ctx->r17 != ctx->r20) {
        // 0x8005B25C: addiu       $s0, $s0, 0x34
        ctx->r16 = ADD32(ctx->r16, 0X34);
            goto L_8005B23C;
    }
    // 0x8005B25C: addiu       $s0, $s0, 0x34
    ctx->r16 = ADD32(ctx->r16, 0X34);
    // 0x8005B260: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x8005B264: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8005B268: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x8005B26C: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x8005B270: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x8005B274: lw          $s4, 0x28($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X28);
    // 0x8005B278: jr          $ra
    // 0x8005B27C: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    return;
    // 0x8005B27C: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
RECOMP_FUNC void func_8005B2C8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8005B2C8: lui         $t7, 0x800B
    ctx->r15 = S32(0X800B << 16);
    // 0x8005B2CC: addiu       $t7, $t7, -0x436C
    ctx->r15 = ADD32(ctx->r15, -0X436C);
    // 0x8005B2D0: sll         $t6, $a1, 4
    ctx->r14 = S32(ctx->r5 << 4);
    // 0x8005B2D4: sb          $a1, 0x0($a0)
    MEM_B(0X0, ctx->r4) = ctx->r5;
    // 0x8005B2D8: sb          $zero, 0x1($a0)
    MEM_B(0X1, ctx->r4) = 0;
    // 0x8005B2DC: addu        $v1, $t6, $t7
    ctx->r3 = ADD32(ctx->r14, ctx->r15);
    // 0x8005B2E0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x8005B2E4: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
L_8005B2E8:
    // 0x8005B2E8: sb          $a1, 0x0($a0)
    MEM_B(0X0, ctx->r4) = ctx->r5;
    // 0x8005B2EC: lbu         $t8, 0x0($v1)
    ctx->r24 = MEM_BU(ctx->r3, 0X0);
    // 0x8005B2F0: sb          $a1, 0x2($a0)
    MEM_B(0X2, ctx->r4) = ctx->r5;
    // 0x8005B2F4: sb          $t8, 0x1($a0)
    MEM_B(0X1, ctx->r4) = ctx->r24;
    // 0x8005B2F8: lbu         $t9, 0x1($v1)
    ctx->r25 = MEM_BU(ctx->r3, 0X1);
    // 0x8005B2FC: sb          $a1, 0x4($a0)
    MEM_B(0X4, ctx->r4) = ctx->r5;
    // 0x8005B300: sb          $t9, 0x3($a0)
    MEM_B(0X3, ctx->r4) = ctx->r25;
    // 0x8005B304: lbu         $t0, 0x2($v1)
    ctx->r8 = MEM_BU(ctx->r3, 0X2);
    // 0x8005B308: sb          $a1, 0x6($a0)
    MEM_B(0X6, ctx->r4) = ctx->r5;
    // 0x8005B30C: sb          $t0, 0x5($a0)
    MEM_B(0X5, ctx->r4) = ctx->r8;
    // 0x8005B310: lbu         $t1, 0x3($v1)
    ctx->r9 = MEM_BU(ctx->r3, 0X3);
    // 0x8005B314: addiu       $v0, $v0, 0x4
    ctx->r2 = ADD32(ctx->r2, 0X4);
    // 0x8005B318: addiu       $v1, $v1, 0x4
    ctx->r3 = ADD32(ctx->r3, 0X4);
    // 0x8005B31C: addiu       $a0, $a0, 0x8
    ctx->r4 = ADD32(ctx->r4, 0X8);
    // 0x8005B320: bne         $v0, $a2, L_8005B2E8
    if (ctx->r2 != ctx->r6) {
        // 0x8005B324: sb          $t1, -0x1($a0)
        MEM_B(-0X1, ctx->r4) = ctx->r9;
            goto L_8005B2E8;
    }
    // 0x8005B324: sb          $t1, -0x1($a0)
    MEM_B(-0X1, ctx->r4) = ctx->r9;
    // 0x8005B328: jr          $ra
    // 0x8005B32C: nop

    return;
    // 0x8005B32C: nop

;}
RECOMP_FUNC void func_8005B330(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8005B330: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x8005B334: addiu       $a0, $a0, -0x2CF0
    ctx->r4 = ADD32(ctx->r4, -0X2CF0);
    // 0x8005B338: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_8005B33C:
    // 0x8005B33C: addu        $v1, $a0, $v0
    ctx->r3 = ADD32(ctx->r4, ctx->r2);
    // 0x8005B340: sb          $v0, 0x308($v1)
    MEM_B(0X308, ctx->r3) = ctx->r2;
    // 0x8005B344: sb          $v0, 0xD9C($v1)
    MEM_B(0XD9C, ctx->r3) = ctx->r2;
    // 0x8005B348: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8005B34C: andi        $t6, $v0, 0xFFFF
    ctx->r14 = ctx->r2 & 0XFFFF;
    // 0x8005B350: slti        $at, $t6, 0x10
    ctx->r1 = SIGNED(ctx->r14) < 0X10 ? 1 : 0;
    // 0x8005B354: bne         $at, $zero, L_8005B33C
    if (ctx->r1 != 0) {
        // 0x8005B358: or          $v0, $t6, $zero
        ctx->r2 = ctx->r14 | 0;
            goto L_8005B33C;
    }
    // 0x8005B358: or          $v0, $t6, $zero
    ctx->r2 = ctx->r14 | 0;
    // 0x8005B35C: jr          $ra
    // 0x8005B360: nop

    return;
    // 0x8005B360: nop

;}
RECOMP_FUNC void func_8005B364(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8005B364: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8005B368: sw          $s3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r19;
    // 0x8005B36C: sw          $s2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r18;
    // 0x8005B370: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x8005B374: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x8005B378: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x8005B37C: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x8005B380: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    // 0x8005B384: addiu       $s2, $a0, 0x28
    ctx->r18 = ADD32(ctx->r4, 0X28);
    // 0x8005B388: addiu       $s3, $zero, 0x20
    ctx->r19 = ADD32(0, 0X20);
L_8005B38C:
    // 0x8005B38C: lbu         $a0, 0x2E8($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X2E8);
    // 0x8005B390: lbu         $a1, 0x2E9($s0)
    ctx->r5 = MEM_BU(ctx->r16, 0X2E9);
    // 0x8005B394: jal         0x8006F274
    // 0x8005B398: nop

    func_8006F274(rdram, ctx);
        goto after_0;
    // 0x8005B398: nop

    after_0:
    // 0x8005B39C: lwl         $at, 0x0($v0)
    ctx->r1 = do_lwl(rdram, ctx->r1, ctx->r2, 0X0);
    // 0x8005B3A0: lwr         $at, 0x3($v0)
    ctx->r1 = do_lwr(rdram, ctx->r1, ctx->r2, 0X3);
    // 0x8005B3A4: addiu       $s1, $s1, 0x2
    ctx->r17 = ADD32(ctx->r17, 0X2);
    // 0x8005B3A8: swl         $at, 0x0($s2)
    do_swl(rdram, 0X0, ctx->r18, ctx->r1);
    // 0x8005B3AC: swr         $at, 0x3($s2)
    do_swr(rdram, 0X3, ctx->r18, ctx->r1);
    // 0x8005B3B0: lwl         $t8, 0x4($v0)
    ctx->r24 = do_lwl(rdram, ctx->r24, ctx->r2, 0X4);
    // 0x8005B3B4: lwr         $t8, 0x7($v0)
    ctx->r24 = do_lwr(rdram, ctx->r24, ctx->r2, 0X7);
    // 0x8005B3B8: addiu       $s0, $s0, 0x2
    ctx->r16 = ADD32(ctx->r16, 0X2);
    // 0x8005B3BC: swl         $t8, 0x4($s2)
    do_swl(rdram, 0X4, ctx->r18, ctx->r24);
    // 0x8005B3C0: swr         $t8, 0x7($s2)
    do_swr(rdram, 0X7, ctx->r18, ctx->r24);
    // 0x8005B3C4: lwl         $at, 0x8($v0)
    ctx->r1 = do_lwl(rdram, ctx->r1, ctx->r2, 0X8);
    // 0x8005B3C8: lwr         $at, 0xB($v0)
    ctx->r1 = do_lwr(rdram, ctx->r1, ctx->r2, 0XB);
    // 0x8005B3CC: addiu       $s2, $s2, 0x2C
    ctx->r18 = ADD32(ctx->r18, 0X2C);
    // 0x8005B3D0: swl         $at, -0x24($s2)
    do_swl(rdram, -0X24, ctx->r18, ctx->r1);
    // 0x8005B3D4: swr         $at, -0x21($s2)
    do_swr(rdram, -0X21, ctx->r18, ctx->r1);
    // 0x8005B3D8: lwl         $t8, 0xC($v0)
    ctx->r24 = do_lwl(rdram, ctx->r24, ctx->r2, 0XC);
    // 0x8005B3DC: lwr         $t8, 0xF($v0)
    ctx->r24 = do_lwr(rdram, ctx->r24, ctx->r2, 0XF);
    // 0x8005B3E0: nop

    // 0x8005B3E4: swl         $t8, -0x20($s2)
    do_swl(rdram, -0X20, ctx->r18, ctx->r24);
    // 0x8005B3E8: swr         $t8, -0x1D($s2)
    do_swr(rdram, -0X1D, ctx->r18, ctx->r24);
    // 0x8005B3EC: lwl         $at, 0x10($v0)
    ctx->r1 = do_lwl(rdram, ctx->r1, ctx->r2, 0X10);
    // 0x8005B3F0: lwr         $at, 0x13($v0)
    ctx->r1 = do_lwr(rdram, ctx->r1, ctx->r2, 0X13);
    // 0x8005B3F4: nop

    // 0x8005B3F8: swl         $at, -0x1C($s2)
    do_swl(rdram, -0X1C, ctx->r18, ctx->r1);
    // 0x8005B3FC: swr         $at, -0x19($s2)
    do_swr(rdram, -0X19, ctx->r18, ctx->r1);
    // 0x8005B400: lwl         $t8, 0x14($v0)
    ctx->r24 = do_lwl(rdram, ctx->r24, ctx->r2, 0X14);
    // 0x8005B404: lwr         $t8, 0x17($v0)
    ctx->r24 = do_lwr(rdram, ctx->r24, ctx->r2, 0X17);
    // 0x8005B408: nop

    // 0x8005B40C: swl         $t8, -0x18($s2)
    do_swl(rdram, -0X18, ctx->r18, ctx->r24);
    // 0x8005B410: swr         $t8, -0x15($s2)
    do_swr(rdram, -0X15, ctx->r18, ctx->r24);
    // 0x8005B414: lbu         $at, 0x18($v0)
    ctx->r1 = MEM_BU(ctx->r2, 0X18);
    // 0x8005B418: bne         $s1, $s3, L_8005B38C
    if (ctx->r17 != ctx->r19) {
        // 0x8005B41C: sb          $at, -0x14($s2)
        MEM_B(-0X14, ctx->r18) = ctx->r1;
            goto L_8005B38C;
    }
    // 0x8005B41C: sb          $at, -0x14($s2)
    MEM_B(-0X14, ctx->r18) = ctx->r1;
    // 0x8005B420: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x8005B424: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x8005B428: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x8005B42C: lw          $s2, 0x1C($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X1C);
    // 0x8005B430: lw          $s3, 0x20($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X20);
    // 0x8005B434: jr          $ra
    // 0x8005B438: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x8005B438: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_8005B43C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8005B43C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8005B440: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x8005B444: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x8005B448: lui         $s0, 0x8012
    ctx->r16 = S32(0X8012 << 16);
    // 0x8005B44C: lui         $s1, 0x8012
    ctx->r17 = S32(0X8012 << 16);
    // 0x8005B450: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8005B454: addiu       $s1, $s1, -0x17C8
    ctx->r17 = ADD32(ctx->r17, -0X17C8);
    // 0x8005B458: addiu       $s0, $s0, -0x2CF0
    ctx->r16 = ADD32(ctx->r16, -0X2CF0);
L_8005B45C:
    // 0x8005B45C: jal         0x8005B364
    // 0x8005B460: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8005B364(rdram, ctx);
        goto after_0;
    // 0x8005B460: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_0:
    // 0x8005B464: addiu       $s0, $s0, 0xA94
    ctx->r16 = ADD32(ctx->r16, 0XA94);
    // 0x8005B468: bne         $s0, $s1, L_8005B45C
    if (ctx->r16 != ctx->r17) {
        // 0x8005B46C: nop
    
            goto L_8005B45C;
    }
    // 0x8005B46C: nop

    // 0x8005B470: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8005B474: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x8005B478: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x8005B47C: jr          $ra
    // 0x8005B480: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x8005B480: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_8005B484(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8005B484: sll         $t6, $a0, 4
    ctx->r14 = S32(ctx->r4 << 4);
    // 0x8005B488: lui         $t7, 0x800B
    ctx->r15 = S32(0X800B << 16);
    // 0x8005B48C: addiu       $t7, $t7, -0x436C
    ctx->r15 = ADD32(ctx->r15, -0X436C);
    // 0x8005B490: addu        $v0, $t6, $t7
    ctx->r2 = ADD32(ctx->r14, ctx->r15);
    // 0x8005B494: addiu       $a0, $zero, 0x10
    ctx->r4 = ADD32(0, 0X10);
    // 0x8005B498: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
L_8005B49C:
    // 0x8005B49C: lbu         $t8, 0x0($v0)
    ctx->r24 = MEM_BU(ctx->r2, 0X0);
    // 0x8005B4A0: nop

    // 0x8005B4A4: beq         $a1, $t8, L_8005B4B8
    if (ctx->r5 == ctx->r24) {
        // 0x8005B4A8: nop
    
            goto L_8005B4B8;
    }
    // 0x8005B4A8: nop

    // 0x8005B4AC: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x8005B4B0: bne         $v1, $a0, L_8005B49C
    if (ctx->r3 != ctx->r4) {
        // 0x8005B4B4: addiu       $v0, $v0, 0x1
        ctx->r2 = ADD32(ctx->r2, 0X1);
            goto L_8005B49C;
    }
    // 0x8005B4B4: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
L_8005B4B8:
    // 0x8005B4B8: jr          $ra
    // 0x8005B4BC: andi        $v0, $v1, 0xFF
    ctx->r2 = ctx->r3 & 0XFF;
    return;
    // 0x8005B4BC: andi        $v0, $v1, 0xFF
    ctx->r2 = ctx->r3 & 0XFF;
;}
RECOMP_FUNC void func_8005B4C0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8005B4C0: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x8005B4C4: addu        $t6, $t6, $a0
    ctx->r14 = ADD32(ctx->r14, ctx->r4);
    // 0x8005B4C8: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x8005B4CC: addu        $t6, $t6, $a0
    ctx->r14 = ADD32(ctx->r14, ctx->r4);
    // 0x8005B4D0: sll         $t6, $t6, 3
    ctx->r14 = S32(ctx->r14 << 3);
    // 0x8005B4D4: addu        $t6, $t6, $a0
    ctx->r14 = ADD32(ctx->r14, ctx->r4);
    // 0x8005B4D8: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x8005B4DC: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8005B4E0: addu        $t6, $t6, $a0
    ctx->r14 = ADD32(ctx->r14, ctx->r4);
    // 0x8005B4E4: lui         $t7, 0x8012
    ctx->r15 = S32(0X8012 << 16);
    // 0x8005B4E8: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8005B4EC: addiu       $t7, $t7, -0x2CF0
    ctx->r15 = ADD32(ctx->r15, -0X2CF0);
    // 0x8005B4F0: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x8005B4F4: addu        $s0, $t6, $t7
    ctx->r16 = ADD32(ctx->r14, ctx->r15);
    // 0x8005B4F8: lbu         $a0, 0x0($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X0);
    // 0x8005B4FC: lui         $a1, 0x800B
    ctx->r5 = S32(0X800B << 16);
    // 0x8005B500: addu        $a1, $a1, $a0
    ctx->r5 = ADD32(ctx->r5, ctx->r4);
    // 0x8005B504: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8005B508: lbu         $a1, -0x2BA8($a1)
    ctx->r5 = MEM_BU(ctx->r5, -0X2BA8);
    // 0x8005B50C: jal         0x8005B484
    // 0x8005B510: nop

    func_8005B484(rdram, ctx);
        goto after_0;
    // 0x8005B510: nop

    after_0:
    // 0x8005B514: lbu         $a0, 0x0($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X0);
    // 0x8005B518: lui         $a1, 0x800B
    ctx->r5 = S32(0X800B << 16);
    // 0x8005B51C: sb          $v0, 0x8A9($s0)
    MEM_B(0X8A9, ctx->r16) = ctx->r2;
    // 0x8005B520: addu        $a1, $a1, $a0
    ctx->r5 = ADD32(ctx->r5, ctx->r4);
    // 0x8005B524: lbu         $a1, -0x2B7C($a1)
    ctx->r5 = MEM_BU(ctx->r5, -0X2B7C);
    // 0x8005B528: jal         0x8005B484
    // 0x8005B52C: nop

    func_8005B484(rdram, ctx);
        goto after_1;
    // 0x8005B52C: nop

    after_1:
    // 0x8005B530: lbu         $a0, 0x0($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X0);
    // 0x8005B534: lui         $a1, 0x800B
    ctx->r5 = S32(0X800B << 16);
    // 0x8005B538: sb          $v0, 0x8AA($s0)
    MEM_B(0X8AA, ctx->r16) = ctx->r2;
    // 0x8005B53C: addu        $a1, $a1, $a0
    ctx->r5 = ADD32(ctx->r5, ctx->r4);
    // 0x8005B540: lbu         $a1, -0x2B50($a1)
    ctx->r5 = MEM_BU(ctx->r5, -0X2B50);
    // 0x8005B544: jal         0x8005B484
    // 0x8005B548: nop

    func_8005B484(rdram, ctx);
        goto after_2;
    // 0x8005B548: nop

    after_2:
    // 0x8005B54C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8005B550: sb          $v0, 0x8AB($s0)
    MEM_B(0X8AB, ctx->r16) = ctx->r2;
    // 0x8005B554: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8005B558: jr          $ra
    // 0x8005B55C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x8005B55C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_8005B560(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8005B560: lui         $a1, 0x8012
    ctx->r5 = S32(0X8012 << 16);
    // 0x8005B564: addiu       $a1, $a1, -0x2CF0
    ctx->r5 = ADD32(ctx->r5, -0X2CF0);
    // 0x8005B568: lhu         $v1, 0xA9C($a1)
    ctx->r3 = MEM_HU(ctx->r5, 0XA9C);
    // 0x8005B56C: lhu         $a0, 0x8($a1)
    ctx->r4 = MEM_HU(ctx->r5, 0X8);
    // 0x8005B570: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8005B574: or          $t6, $v1, $a0
    ctx->r14 = ctx->r3 | ctx->r4;
    // 0x8005B578: andi        $t7, $t6, 0x1000
    ctx->r15 = ctx->r14 & 0X1000;
    // 0x8005B57C: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x8005B580: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x8005B584: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x8005B588: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8005B58C: beq         $t7, $zero, L_8005B648
    if (ctx->r15 == 0) {
        // 0x8005B590: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_8005B648;
    }
    // 0x8005B590: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x8005B594: jal         0x8007895C
    // 0x8005B598: nop

    func_8007895C(rdram, ctx);
        goto after_0;
    // 0x8005B598: nop

    after_0:
    // 0x8005B59C: lui         $s0, 0x8012
    ctx->r16 = S32(0X8012 << 16);
    // 0x8005B5A0: addiu       $s0, $s0, -0x17C8
    ctx->r16 = ADD32(ctx->r16, -0X17C8);
    // 0x8005B5A4: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    // 0x8005B5A8: addiu       $s2, $zero, 0x1C
    ctx->r18 = ADD32(0, 0X1C);
L_8005B5AC:
    // 0x8005B5AC: lhu         $t8, 0xC($s0)
    ctx->r24 = MEM_HU(ctx->r16, 0XC);
    // 0x8005B5B0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8005B5B4: beq         $t8, $zero, L_8005B5C4
    if (ctx->r24 == 0) {
        // 0x8005B5B8: nop
    
            goto L_8005B5C4;
    }
    // 0x8005B5B8: nop

    // 0x8005B5BC: jal         0x8024BC08
    // 0x8005B5C0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    LOOKUP_FUNC(0x8024BC08)(rdram, ctx);
        goto after_1;
    // 0x8005B5C0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_1:
L_8005B5C4:
    // 0x8005B5C4: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x8005B5C8: bne         $s1, $s2, L_8005B5AC
    if (ctx->r17 != ctx->r18) {
        // 0x8005B5CC: addiu       $s0, $s0, 0xF8
        ctx->r16 = ADD32(ctx->r16, 0XF8);
            goto L_8005B5AC;
    }
    // 0x8005B5CC: addiu       $s0, $s0, 0xF8
    ctx->r16 = ADD32(ctx->r16, 0XF8);
    // 0x8005B5D0: lui         $s0, 0x8009
    ctx->r16 = S32(0X8009 << 16);
    // 0x8005B5D4: addiu       $s0, $s0, 0x3B20
    ctx->r16 = ADD32(ctx->r16, 0X3B20);
    // 0x8005B5D8: lw          $v0, 0x0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X0);
    // 0x8005B5DC: nop

    // 0x8005B5E0: lhu         $t9, 0xC2($v0)
    ctx->r25 = MEM_HU(ctx->r2, 0XC2);
    // 0x8005B5E4: nop

    // 0x8005B5E8: andi        $t0, $t9, 0xFFFB
    ctx->r8 = ctx->r25 & 0XFFFB;
    // 0x8005B5EC: jal         0x8005AD18
    // 0x8005B5F0: sh          $t0, 0xC2($v0)
    MEM_H(0XC2, ctx->r2) = ctx->r8;
    func_8005AD18(rdram, ctx);
        goto after_2;
    // 0x8005B5F0: sh          $t0, 0xC2($v0)
    MEM_H(0XC2, ctx->r2) = ctx->r8;
    after_2:
    // 0x8005B5F4: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x8005B5F8: addiu       $v0, $v0, 0xB7E
    ctx->r2 = ADD32(ctx->r2, 0XB7E);
    // 0x8005B5FC: lhu         $t1, 0x0($v0)
    ctx->r9 = MEM_HU(ctx->r2, 0X0);
    // 0x8005B600: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x8005B604: ori         $t2, $t1, 0x2020
    ctx->r10 = ctx->r9 | 0X2020;
    // 0x8005B608: sh          $t2, 0x0($v0)
    MEM_H(0X0, ctx->r2) = ctx->r10;
    // 0x8005B60C: jal         0x80268EBC
    // 0x8005B610: addiu       $a0, $a0, -0x2CF0
    ctx->r4 = ADD32(ctx->r4, -0X2CF0);
    LOOKUP_FUNC(0x80268EBC)(rdram, ctx);
        goto after_3;
    // 0x8005B610: addiu       $a0, $a0, -0x2CF0
    ctx->r4 = ADD32(ctx->r4, -0X2CF0);
    after_3:
    // 0x8005B614: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x8005B618: jal         0x80268EBC
    // 0x8005B61C: addiu       $a0, $a0, -0x225C
    ctx->r4 = ADD32(ctx->r4, -0X225C);
    LOOKUP_FUNC(0x80268EBC)(rdram, ctx);
        goto after_4;
    // 0x8005B61C: addiu       $a0, $a0, -0x225C
    ctx->r4 = ADD32(ctx->r4, -0X225C);
    after_4:
    // 0x8005B620: lui         $v1, 0x8012
    ctx->r3 = S32(0X8012 << 16);
    // 0x8005B624: addiu       $v1, $v1, 0xB78
    ctx->r3 = ADD32(ctx->r3, 0XB78);
    // 0x8005B628: addiu       $t4, $zero, 0xC
    ctx->r12 = ADD32(0, 0XC);
    // 0x8005B62C: sh          $t4, 0x0($v1)
    MEM_H(0X0, ctx->r3) = ctx->r12;
    // 0x8005B630: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x8005B634: sh          $t4, 0xB7A($at)
    MEM_H(0XB7A, ctx->r1) = ctx->r12;
    // 0x8005B638: lw          $t5, 0x0($s0)
    ctx->r13 = MEM_W(ctx->r16, 0X0);
    // 0x8005B63C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8005B640: b           L_8005B6D8
    // 0x8005B644: sh          $zero, 0xDC($t5)
    MEM_H(0XDC, ctx->r13) = 0;
        goto L_8005B6D8;
    // 0x8005B644: sh          $zero, 0xDC($t5)
    MEM_H(0XDC, ctx->r13) = 0;
L_8005B648:
    // 0x8005B648: andi        $t6, $a0, 0x80
    ctx->r14 = ctx->r4 & 0X80;
    // 0x8005B64C: beq         $t6, $zero, L_8005B66C
    if (ctx->r14 == 0) {
        // 0x8005B650: andi        $t9, $v1, 0x80
        ctx->r25 = ctx->r3 & 0X80;
            goto L_8005B66C;
    }
    // 0x8005B650: andi        $t9, $v1, 0x80
    ctx->r25 = ctx->r3 & 0X80;
    // 0x8005B654: lhu         $t7, 0x10($a1)
    ctx->r15 = MEM_HU(ctx->r5, 0X10);
    // 0x8005B658: nop

    // 0x8005B65C: andi        $t8, $t7, 0x5000
    ctx->r24 = ctx->r15 & 0X5000;
    // 0x8005B660: beq         $t8, $zero, L_8005B66C
    if (ctx->r24 == 0) {
        // 0x8005B664: nop
    
            goto L_8005B66C;
    }
    // 0x8005B664: nop

    // 0x8005B668: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_8005B66C:
    // 0x8005B66C: beq         $t9, $zero, L_8005B68C
    if (ctx->r25 == 0) {
        // 0x8005B670: nop
    
            goto L_8005B68C;
    }
    // 0x8005B670: nop

    // 0x8005B674: lhu         $t0, 0xAA4($a1)
    ctx->r8 = MEM_HU(ctx->r5, 0XAA4);
    // 0x8005B678: ori         $t2, $v0, 0x2
    ctx->r10 = ctx->r2 | 0X2;
    // 0x8005B67C: andi        $t1, $t0, 0x5000
    ctx->r9 = ctx->r8 & 0X5000;
    // 0x8005B680: beq         $t1, $zero, L_8005B68C
    if (ctx->r9 == 0) {
        // 0x8005B684: nop
    
            goto L_8005B68C;
    }
    // 0x8005B684: nop

    // 0x8005B688: or          $v0, $t2, $zero
    ctx->r2 = ctx->r10 | 0;
L_8005B68C:
    // 0x8005B68C: bne         $v0, $zero, L_8005B6CC
    if (ctx->r2 != 0) {
        // 0x8005B690: addiu       $v0, $v0, -0x1
        ctx->r2 = ADD32(ctx->r2, -0X1);
            goto L_8005B6CC;
    }
    // 0x8005B690: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x8005B694: lhu         $t3, 0xAA4($a1)
    ctx->r11 = MEM_HU(ctx->r5, 0XAA4);
    // 0x8005B698: lhu         $t4, 0x10($a1)
    ctx->r12 = MEM_HU(ctx->r5, 0X10);
    // 0x8005B69C: nop

    // 0x8005B6A0: or          $t5, $t3, $t4
    ctx->r13 = ctx->r11 | ctx->r12;
    // 0x8005B6A4: andi        $t6, $t5, 0x1000
    ctx->r14 = ctx->r13 & 0X1000;
    // 0x8005B6A8: beq         $t6, $zero, L_8005B6B8
    if (ctx->r14 == 0) {
        // 0x8005B6AC: nop
    
            goto L_8005B6B8;
    }
    // 0x8005B6AC: nop

    // 0x8005B6B0: jal         0x800489A8
    // 0x8005B6B4: nop

    func_800489A8(rdram, ctx);
        goto after_5;
    // 0x8005B6B4: nop

    after_5:
L_8005B6B8:
    // 0x8005B6B8: jal         0x80036CB0
    // 0x8005B6BC: nop

    func_80036CB0(rdram, ctx);
        goto after_6;
    // 0x8005B6BC: nop

    after_6:
    // 0x8005B6C0: b           L_8005B6D8
    // 0x8005B6C4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_8005B6D8;
    // 0x8005B6C4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x8005B6C8: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
L_8005B6CC:
    // 0x8005B6CC: jal         0x80036DE8
    // 0x8005B6D0: andi        $a0, $v0, 0xFF
    ctx->r4 = ctx->r2 & 0XFF;
    func_80036DE8(rdram, ctx);
        goto after_7;
    // 0x8005B6D0: andi        $a0, $v0, 0xFF
    ctx->r4 = ctx->r2 & 0XFF;
    after_7:
    // 0x8005B6D4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_8005B6D8:
    // 0x8005B6D8: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x8005B6DC: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8005B6E0: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x8005B6E4: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x8005B6E8: jr          $ra
    // 0x8005B6EC: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x8005B6EC: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_8005B6F0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8005B6F0: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x8005B6F4: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x8005B6F8: lwc1        $f1, -0x67E0($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, -0X67E0);
    // 0x8005B6FC: lwc1        $f0, -0x67DC($at)
    ctx->f0.u32l = MEM_W(ctx->r1, -0X67DC);
    // 0x8005B700: addiu       $v0, $v0, -0x17C8
    ctx->r2 = ADD32(ctx->r2, -0X17C8);
    // 0x8005B704: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x8005B708: addiu       $a1, $zero, 0x1C
    ctx->r5 = ADD32(0, 0X1C);
L_8005B70C:
    // 0x8005B70C: lhu         $t6, 0xC($v0)
    ctx->r14 = MEM_HU(ctx->r2, 0XC);
    // 0x8005B710: addiu       $v1, $v1, 0x2
    ctx->r3 = ADD32(ctx->r3, 0X2);
    // 0x8005B714: beq         $t6, $zero, L_8005B798
    if (ctx->r14 == 0) {
        // 0x8005B718: nop
    
            goto L_8005B798;
    }
    // 0x8005B718: nop

    // 0x8005B71C: lwc1        $f4, 0x44($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X44);
    // 0x8005B720: lw          $t7, 0xCC($v0)
    ctx->r15 = MEM_W(ctx->r2, 0XCC);
    // 0x8005B724: nop

    // 0x8005B728: swc1        $f4, 0x4($t7)
    MEM_W(0X4, ctx->r15) = ctx->f4.u32l;
    // 0x8005B72C: lw          $t8, 0xCC($v0)
    ctx->r24 = MEM_W(ctx->r2, 0XCC);
    // 0x8005B730: lwc1        $f6, 0x48($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0X48);
    // 0x8005B734: nop

    // 0x8005B738: swc1        $f6, 0x8($t8)
    MEM_W(0X8, ctx->r24) = ctx->f6.u32l;
    // 0x8005B73C: lw          $t9, 0xCC($v0)
    ctx->r25 = MEM_W(ctx->r2, 0XCC);
    // 0x8005B740: lwc1        $f8, 0x4C($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X4C);
    // 0x8005B744: nop

    // 0x8005B748: swc1        $f8, 0xC($t9)
    MEM_W(0XC, ctx->r25) = ctx->f8.u32l;
    // 0x8005B74C: lwc1        $f10, 0x8C($v0)
    ctx->f10.u32l = MEM_W(ctx->r2, 0X8C);
    // 0x8005B750: lw          $t0, 0xCC($v0)
    ctx->r8 = MEM_W(ctx->r2, 0XCC);
    // 0x8005B754: cvt.d.s     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.fl); 
    ctx->f16.d = CVT_D_S(ctx->f10.fl);
    // 0x8005B758: mul.d       $f18, $f16, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f16.d); NAN_CHECK(ctx->f0.d); 
    ctx->f18.d = MUL_D(ctx->f16.d, ctx->f0.d);
    // 0x8005B75C: cvt.s.d     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.d); 
    ctx->f4.fl = CVT_S_D(ctx->f18.d);
    // 0x8005B760: swc1        $f4, 0x14($t0)
    MEM_W(0X14, ctx->r8) = ctx->f4.u32l;
    // 0x8005B764: lhu         $t1, 0x12($v0)
    ctx->r9 = MEM_HU(ctx->r2, 0X12);
    // 0x8005B768: nop

    // 0x8005B76C: andi        $t2, $t1, 0x1
    ctx->r10 = ctx->r9 & 0X1;
    // 0x8005B770: beq         $t2, $zero, L_8005B798
    if (ctx->r10 == 0) {
        // 0x8005B774: nop
    
            goto L_8005B798;
    }
    // 0x8005B774: nop

    // 0x8005B778: lw          $t3, 0xC4($v0)
    ctx->r11 = MEM_W(ctx->r2, 0XC4);
    // 0x8005B77C: lwc1        $f6, 0x4C($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0X4C);
    // 0x8005B780: lw          $a0, 0x3C($t3)
    ctx->r4 = MEM_W(ctx->r11, 0X3C);
    // 0x8005B784: nop

    // 0x8005B788: swc1        $f6, 0xC($a0)
    MEM_W(0XC, ctx->r4) = ctx->f6.u32l;
    // 0x8005B78C: lwc1        $f8, 0x44($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X44);
    // 0x8005B790: nop

    // 0x8005B794: swc1        $f8, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->f8.u32l;
L_8005B798:
    // 0x8005B798: lhu         $t4, 0x104($v0)
    ctx->r12 = MEM_HU(ctx->r2, 0X104);
    // 0x8005B79C: addiu       $v0, $v0, 0xF8
    ctx->r2 = ADD32(ctx->r2, 0XF8);
    // 0x8005B7A0: beq         $t4, $zero, L_8005B824
    if (ctx->r12 == 0) {
        // 0x8005B7A4: nop
    
            goto L_8005B824;
    }
    // 0x8005B7A4: nop

    // 0x8005B7A8: lwc1        $f10, 0x44($v0)
    ctx->f10.u32l = MEM_W(ctx->r2, 0X44);
    // 0x8005B7AC: lw          $t5, 0xCC($v0)
    ctx->r13 = MEM_W(ctx->r2, 0XCC);
    // 0x8005B7B0: nop

    // 0x8005B7B4: swc1        $f10, 0x4($t5)
    MEM_W(0X4, ctx->r13) = ctx->f10.u32l;
    // 0x8005B7B8: lw          $t6, 0xCC($v0)
    ctx->r14 = MEM_W(ctx->r2, 0XCC);
    // 0x8005B7BC: lwc1        $f16, 0x48($v0)
    ctx->f16.u32l = MEM_W(ctx->r2, 0X48);
    // 0x8005B7C0: nop

    // 0x8005B7C4: swc1        $f16, 0x8($t6)
    MEM_W(0X8, ctx->r14) = ctx->f16.u32l;
    // 0x8005B7C8: lw          $t7, 0xCC($v0)
    ctx->r15 = MEM_W(ctx->r2, 0XCC);
    // 0x8005B7CC: lwc1        $f18, 0x4C($v0)
    ctx->f18.u32l = MEM_W(ctx->r2, 0X4C);
    // 0x8005B7D0: nop

    // 0x8005B7D4: swc1        $f18, 0xC($t7)
    MEM_W(0XC, ctx->r15) = ctx->f18.u32l;
    // 0x8005B7D8: lwc1        $f4, 0x8C($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X8C);
    // 0x8005B7DC: lw          $t8, 0xCC($v0)
    ctx->r24 = MEM_W(ctx->r2, 0XCC);
    // 0x8005B7E0: cvt.d.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.d = CVT_D_S(ctx->f4.fl);
    // 0x8005B7E4: mul.d       $f8, $f6, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f0.d); 
    ctx->f8.d = MUL_D(ctx->f6.d, ctx->f0.d);
    // 0x8005B7E8: cvt.s.d     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.d); 
    ctx->f10.fl = CVT_S_D(ctx->f8.d);
    // 0x8005B7EC: swc1        $f10, 0x14($t8)
    MEM_W(0X14, ctx->r24) = ctx->f10.u32l;
    // 0x8005B7F0: lhu         $t9, 0x12($v0)
    ctx->r25 = MEM_HU(ctx->r2, 0X12);
    // 0x8005B7F4: nop

    // 0x8005B7F8: andi        $t0, $t9, 0x1
    ctx->r8 = ctx->r25 & 0X1;
    // 0x8005B7FC: beq         $t0, $zero, L_8005B824
    if (ctx->r8 == 0) {
        // 0x8005B800: nop
    
            goto L_8005B824;
    }
    // 0x8005B800: nop

    // 0x8005B804: lw          $t1, 0xC4($v0)
    ctx->r9 = MEM_W(ctx->r2, 0XC4);
    // 0x8005B808: lwc1        $f16, 0x4C($v0)
    ctx->f16.u32l = MEM_W(ctx->r2, 0X4C);
    // 0x8005B80C: lw          $a0, 0x3C($t1)
    ctx->r4 = MEM_W(ctx->r9, 0X3C);
    // 0x8005B810: nop

    // 0x8005B814: swc1        $f16, 0xC($a0)
    MEM_W(0XC, ctx->r4) = ctx->f16.u32l;
    // 0x8005B818: lwc1        $f18, 0x44($v0)
    ctx->f18.u32l = MEM_W(ctx->r2, 0X44);
    // 0x8005B81C: nop

    // 0x8005B820: swc1        $f18, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->f18.u32l;
L_8005B824:
    // 0x8005B824: bne         $v1, $a1, L_8005B70C
    if (ctx->r3 != ctx->r5) {
        // 0x8005B828: addiu       $v0, $v0, 0xF8
        ctx->r2 = ADD32(ctx->r2, 0XF8);
            goto L_8005B70C;
    }
    // 0x8005B828: addiu       $v0, $v0, 0xF8
    ctx->r2 = ADD32(ctx->r2, 0XF8);
    // 0x8005B82C: jr          $ra
    // 0x8005B830: nop

    return;
    // 0x8005B830: nop

;}
RECOMP_FUNC void func_8005B834(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8005B834: lui         $v0, 0x801B
    ctx->r2 = S32(0X801B << 16);
    // 0x8005B838: lhu         $v0, -0x3A06($v0)
    ctx->r2 = MEM_HU(ctx->r2, -0X3A06);
    // 0x8005B83C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8005B840: bne         $a0, $v0, L_8005B860
    if (ctx->r4 != ctx->r2) {
        // 0x8005B844: sw          $ra, 0x14($sp)
        MEM_W(0X14, ctx->r29) = ctx->r31;
            goto L_8005B860;
    }
    // 0x8005B844: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8005B848: jal         0x80021960
    // 0x8005B84C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_80021960(rdram, ctx);
        goto after_0;
    // 0x8005B84C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x8005B850: lui         $v0, 0x801B
    ctx->r2 = S32(0X801B << 16);
    // 0x8005B854: lhu         $v0, -0x3A06($v0)
    ctx->r2 = MEM_HU(ctx->r2, -0X3A06);
    // 0x8005B858: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x8005B85C: nop

L_8005B860:
    // 0x8005B860: addiu       $t6, $a0, 0x1E
    ctx->r14 = ADD32(ctx->r4, 0X1E);
    // 0x8005B864: bne         $t6, $v0, L_8005BAF8
    if (ctx->r14 != ctx->r2) {
        // 0x8005B868: lui         $t7, 0x8012
        ctx->r15 = S32(0X8012 << 16);
            goto L_8005BAF8;
    }
    // 0x8005B868: lui         $t7, 0x8012
    ctx->r15 = S32(0X8012 << 16);
    // 0x8005B86C: lhu         $t7, 0xB78($t7)
    ctx->r15 = MEM_HU(ctx->r15, 0XB78);
    // 0x8005B870: nop

    // 0x8005B874: addiu       $t8, $t7, -0x1
    ctx->r24 = ADD32(ctx->r15, -0X1);
    // 0x8005B878: sltiu       $at, $t8, 0xD
    ctx->r1 = ctx->r24 < 0XD ? 1 : 0;
    // 0x8005B87C: beq         $at, $zero, L_8005BAF8
    if (ctx->r1 == 0) {
        // 0x8005B880: sll         $t8, $t8, 2
        ctx->r24 = S32(ctx->r24 << 2);
            goto L_8005BAF8;
    }
    // 0x8005B880: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x8005B884: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x8005B888: addu        $at, $at, $t8
    gpr jr_addend_8005B894 = ctx->r24;
    ctx->r1 = ADD32(ctx->r1, ctx->r24);
    // 0x8005B88C: lw          $t8, -0x67D8($at)
    ctx->r24 = ADD32(ctx->r1, -0X67D8);
    // 0x8005B890: nop

    // 0x8005B894: jr          $t8
    // 0x8005B898: nop

    switch (jr_addend_8005B894 >> 2) {
        case 0: goto L_8005BA1C; break;
        case 1: goto L_8005BA1C; break;
        case 2: goto L_8005BA1C; break;
        case 3: goto L_8005BA1C; break;
        case 4: goto L_8005BA1C; break;
        case 5: goto L_8005BA1C; break;
        case 6: goto L_8005BA1C; break;
        case 7: goto L_8005B974; break;
        case 8: goto L_8005B9FC; break;
        case 9: goto L_8005BA48; break;
        case 10: goto L_8005BA48; break;
        case 11: goto L_8005BAD4; break;
        case 12: goto L_8005B89C; break;
        default: switch_error(__func__, 0x8005B894, 0x800D9828);
    }
    // 0x8005B898: nop

L_8005B89C:
    // 0x8005B89C: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x8005B8A0: lbu         $v0, -0x32A2($v0)
    ctx->r2 = MEM_BU(ctx->r2, -0X32A2);
    // 0x8005B8A4: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x8005B8A8: bne         $v0, $at, L_8005B8C4
    if (ctx->r2 != ctx->r1) {
        // 0x8005B8AC: addiu       $at, $zero, 0x1
        ctx->r1 = ADD32(0, 0X1);
            goto L_8005B8C4;
    }
    // 0x8005B8AC: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8005B8B0: jal         0x8005EC6C
    // 0x8005B8B4: nop

    func_8005EC6C(rdram, ctx);
        goto after_1;
    // 0x8005B8B4: nop

    after_1:
    // 0x8005B8B8: b           L_8005B8D4
    // 0x8005B8BC: nop

        goto L_8005B8D4;
    // 0x8005B8BC: nop

    // 0x8005B8C0: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
L_8005B8C4:
    // 0x8005B8C4: bne         $v0, $at, L_8005B8D4
    if (ctx->r2 != ctx->r1) {
        // 0x8005B8C8: nop
    
            goto L_8005B8D4;
    }
    // 0x8005B8C8: nop

    // 0x8005B8CC: jal         0x8005EDCC
    // 0x8005B8D0: nop

    func_8005EDCC(rdram, ctx);
        goto after_2;
    // 0x8005B8D0: nop

    after_2:
L_8005B8D4:
    // 0x8005B8D4: jal         0x8005AA8C
    // 0x8005B8D8: nop

    func_8005AA8C(rdram, ctx);
        goto after_3;
    // 0x8005B8D8: nop

    after_3:
    // 0x8005B8DC: jal         0x8005C5FC
    // 0x8005B8E0: nop

    func_8005C5FC(rdram, ctx);
        goto after_4;
    // 0x8005B8E0: nop

    after_4:
    // 0x8005B8E4: jal         0x8005B004
    // 0x8005B8E8: nop

    func_8005B004(rdram, ctx);
        goto after_5;
    // 0x8005B8E8: nop

    after_5:
    // 0x8005B8EC: jal         0x8005C9BC
    // 0x8005B8F0: nop

    func_8005C9BC(rdram, ctx);
        goto after_6;
    // 0x8005B8F0: nop

    after_6:
    // 0x8005B8F4: jal         0x8005D710
    // 0x8005B8F8: nop

    func_8005D710(rdram, ctx);
        goto after_7;
    // 0x8005B8F8: nop

    after_7:
    // 0x8005B8FC: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x8005B900: lhu         $a0, 0xB78($a0)
    ctx->r4 = MEM_HU(ctx->r4, 0XB78);
    // 0x8005B904: jal         0x8005D74C
    // 0x8005B908: nop

    func_8005D74C(rdram, ctx);
        goto after_8;
    // 0x8005B908: nop

    after_8:
    // 0x8005B90C: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x8005B910: addiu       $v0, $v0, 0xB7E
    ctx->r2 = ADD32(ctx->r2, 0XB7E);
    // 0x8005B914: lhu         $t9, 0x0($v0)
    ctx->r25 = MEM_HU(ctx->r2, 0X0);
    // 0x8005B918: nop

    // 0x8005B91C: ori         $t0, $t9, 0x1000
    ctx->r8 = ctx->r25 | 0X1000;
    // 0x8005B920: jal         0x80059F84
    // 0x8005B924: sh          $t0, 0x0($v0)
    MEM_H(0X0, ctx->r2) = ctx->r8;
    func_80059F84(rdram, ctx);
        goto after_9;
    // 0x8005B924: sh          $t0, 0x0($v0)
    MEM_H(0X0, ctx->r2) = ctx->r8;
    after_9:
    // 0x8005B928: jal         0x8005A208
    // 0x8005B92C: nop

    func_8005A208(rdram, ctx);
        goto after_10;
    // 0x8005B92C: nop

    after_10:
    // 0x8005B930: jal         0x802936B0
    // 0x8005B934: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    LOOKUP_FUNC(0x802936B0)(rdram, ctx);
        goto after_11;
    // 0x8005B934: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_11:
    // 0x8005B938: lui         $t1, 0x8012
    ctx->r9 = S32(0X8012 << 16);
    // 0x8005B93C: lui         $t2, 0x8009
    ctx->r10 = S32(0X8009 << 16);
    // 0x8005B940: lw          $t2, 0x3B20($t2)
    ctx->r10 = MEM_W(ctx->r10, 0X3B20);
    // 0x8005B944: lw          $t1, 0xB2C($t1)
    ctx->r9 = MEM_W(ctx->r9, 0XB2C);
    // 0x8005B948: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x8005B94C: sw          $t1, 0x88($t2)
    MEM_W(0X88, ctx->r10) = ctx->r9;
    // 0x8005B950: jal         0x8005F0A8
    // 0x8005B954: sh          $zero, 0xB7E($at)
    MEM_H(0XB7E, ctx->r1) = 0;
    func_8005F0A8(rdram, ctx);
        goto after_12;
    // 0x8005B954: sh          $zero, 0xB7E($at)
    MEM_H(0XB7E, ctx->r1) = 0;
    after_12:
    // 0x8005B958: jal         0x8001B854
    // 0x8005B95C: addiu       $a0, $zero, 0x5
    ctx->r4 = ADD32(0, 0X5);
    func_8001B854(rdram, ctx);
        goto after_13;
    // 0x8005B95C: addiu       $a0, $zero, 0x5
    ctx->r4 = ADD32(0, 0X5);
    after_13:
    // 0x8005B960: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x8005B964: jal         0x8002198C
    // 0x8005B968: sh          $zero, -0x3A06($at)
    MEM_H(-0X3A06, ctx->r1) = 0;
    func_8002198C(rdram, ctx);
        goto after_14;
    // 0x8005B968: sh          $zero, -0x3A06($at)
    MEM_H(-0X3A06, ctx->r1) = 0;
    after_14:
    // 0x8005B96C: b           L_8005BAFC
    // 0x8005B970: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_8005BAFC;
    // 0x8005B970: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8005B974:
    // 0x8005B974: lui         $v0, 0x8011
    ctx->r2 = S32(0X8011 << 16);
    // 0x8005B978: addiu       $v0, $v0, -0x3770
    ctx->r2 = ADD32(ctx->r2, -0X3770);
    // 0x8005B97C: lbu         $t3, 0x754($v0)
    ctx->r11 = MEM_BU(ctx->r2, 0X754);
    // 0x8005B980: nop

    // 0x8005B984: andi        $t4, $t3, 0xFC
    ctx->r12 = ctx->r11 & 0XFC;
    // 0x8005B988: jal         0x800603F0
    // 0x8005B98C: sb          $t4, 0x754($v0)
    MEM_B(0X754, ctx->r2) = ctx->r12;
    func_800603F0(rdram, ctx);
        goto after_15;
    // 0x8005B98C: sb          $t4, 0x754($v0)
    MEM_B(0X754, ctx->r2) = ctx->r12;
    after_15:
    // 0x8005B990: lui         $t5, 0x8012
    ctx->r13 = S32(0X8012 << 16);
    // 0x8005B994: lhu         $t5, 0xB7E($t5)
    ctx->r13 = MEM_HU(ctx->r13, 0XB7E);
    // 0x8005B998: lui         $v1, 0x8012
    ctx->r3 = S32(0X8012 << 16);
    // 0x8005B99C: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x8005B9A0: ori         $t6, $t5, 0x100
    ctx->r14 = ctx->r13 | 0X100;
    // 0x8005B9A4: addiu       $v1, $v1, -0x2CF0
    ctx->r3 = ADD32(ctx->r3, -0X2CF0);
    // 0x8005B9A8: sh          $t6, 0xB7E($at)
    MEM_H(0XB7E, ctx->r1) = ctx->r14;
    // 0x8005B9AC: lhu         $t8, 0x10($v1)
    ctx->r24 = MEM_HU(ctx->r3, 0X10);
    // 0x8005B9B0: lui         $v0, 0x8011
    ctx->r2 = S32(0X8011 << 16);
    // 0x8005B9B4: addiu       $v0, $v0, -0x3770
    ctx->r2 = ADD32(ctx->r2, -0X3770);
    // 0x8005B9B8: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x8005B9BC: andi        $t9, $t8, 0x40
    ctx->r25 = ctx->r24 & 0X40;
    // 0x8005B9C0: bne         $t9, $zero, L_8005B9DC
    if (ctx->r25 != 0) {
        // 0x8005B9C4: sb          $t7, 0x7D6($v0)
        MEM_B(0X7D6, ctx->r2) = ctx->r15;
            goto L_8005B9DC;
    }
    // 0x8005B9C4: sb          $t7, 0x7D6($v0)
    MEM_B(0X7D6, ctx->r2) = ctx->r15;
    // 0x8005B9C8: lhu         $t0, 0xAA4($v1)
    ctx->r8 = MEM_HU(ctx->r3, 0XAA4);
    // 0x8005B9CC: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x8005B9D0: andi        $t1, $t0, 0x40
    ctx->r9 = ctx->r8 & 0X40;
    // 0x8005B9D4: beq         $t1, $zero, L_8005B9EC
    if (ctx->r9 == 0) {
        // 0x8005B9D8: addiu       $a0, $zero, 0xA
        ctx->r4 = ADD32(0, 0XA);
            goto L_8005B9EC;
    }
    // 0x8005B9D8: addiu       $a0, $zero, 0xA
    ctx->r4 = ADD32(0, 0XA);
L_8005B9DC:
    // 0x8005B9DC: jal         0x8005B560
    // 0x8005B9E0: nop

    func_8005B560(rdram, ctx);
        goto after_16;
    // 0x8005B9E0: nop

    after_16:
    // 0x8005B9E4: b           L_8005BAFC
    // 0x8005B9E8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_8005BAFC;
    // 0x8005B9E8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8005B9EC:
    // 0x8005B9EC: jal         0x8001B854
    // 0x8005B9F0: sw          $zero, 0x540C($at)
    MEM_W(0X540C, ctx->r1) = 0;
    func_8001B854(rdram, ctx);
        goto after_17;
    // 0x8005B9F0: sw          $zero, 0x540C($at)
    MEM_W(0X540C, ctx->r1) = 0;
    after_17:
    // 0x8005B9F4: b           L_8005BAFC
    // 0x8005B9F8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_8005BAFC;
    // 0x8005B9F8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8005B9FC:
    // 0x8005B9FC: lui         $t2, 0x8012
    ctx->r10 = S32(0X8012 << 16);
    // 0x8005BA00: lhu         $t2, 0xB7E($t2)
    ctx->r10 = MEM_HU(ctx->r10, 0XB7E);
    // 0x8005BA04: nop

    // 0x8005BA08: andi        $t3, $t2, 0x800
    ctx->r11 = ctx->r10 & 0X800;
    // 0x8005BA0C: bne         $t3, $zero, L_8005BA1C
    if (ctx->r11 != 0) {
        // 0x8005BA10: nop
    
            goto L_8005BA1C;
    }
    // 0x8005BA10: nop

    // 0x8005BA14: jal         0x8007ADA8
    // 0x8005BA18: nop

    func_8007ADA8(rdram, ctx);
        goto after_18;
    // 0x8005BA18: nop

    after_18:
L_8005BA1C:
    // 0x8005BA1C: lui         $v0, 0x8011
    ctx->r2 = S32(0X8011 << 16);
    // 0x8005BA20: addiu       $v0, $v0, -0x3770
    ctx->r2 = ADD32(ctx->r2, -0X3770);
    // 0x8005BA24: lbu         $t4, 0x754($v0)
    ctx->r12 = MEM_BU(ctx->r2, 0X754);
    // 0x8005BA28: nop

    // 0x8005BA2C: andi        $t5, $t4, 0xFC
    ctx->r13 = ctx->r12 & 0XFC;
    // 0x8005BA30: jal         0x800603F0
    // 0x8005BA34: sb          $t5, 0x754($v0)
    MEM_B(0X754, ctx->r2) = ctx->r13;
    func_800603F0(rdram, ctx);
        goto after_19;
    // 0x8005BA34: sb          $t5, 0x754($v0)
    MEM_B(0X754, ctx->r2) = ctx->r13;
    after_19:
    // 0x8005BA38: jal         0x8005B560
    // 0x8005BA3C: nop

    func_8005B560(rdram, ctx);
        goto after_20;
    // 0x8005BA3C: nop

    after_20:
    // 0x8005BA40: b           L_8005BAFC
    // 0x8005BA44: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_8005BAFC;
    // 0x8005BA44: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8005BA48:
    // 0x8005BA48: lui         $v1, 0x8012
    ctx->r3 = S32(0X8012 << 16);
    // 0x8005BA4C: addiu       $v1, $v1, -0x2CF0
    ctx->r3 = ADD32(ctx->r3, -0X2CF0);
    // 0x8005BA50: lui         $v0, 0x8011
    ctx->r2 = S32(0X8011 << 16);
    // 0x8005BA54: addiu       $v0, $v0, -0x3770
    ctx->r2 = ADD32(ctx->r2, -0X3770);
    // 0x8005BA58: lhu         $t6, 0x8($v1)
    ctx->r14 = MEM_HU(ctx->r3, 0X8);
    // 0x8005BA5C: lhu         $t8, 0xA9C($v1)
    ctx->r24 = MEM_HU(ctx->r3, 0XA9C);
    // 0x8005BA60: lbu         $t0, 0x754($v0)
    ctx->r8 = MEM_BU(ctx->r2, 0X754);
    // 0x8005BA64: xori        $t7, $t6, 0x11
    ctx->r15 = ctx->r14 ^ 0X11;
    // 0x8005BA68: xori        $t9, $t8, 0x11
    ctx->r25 = ctx->r24 ^ 0X11;
    // 0x8005BA6C: andi        $t1, $t0, 0xFC
    ctx->r9 = ctx->r8 & 0XFC;
    // 0x8005BA70: sh          $t7, 0x8($v1)
    MEM_H(0X8, ctx->r3) = ctx->r15;
    // 0x8005BA74: sh          $t9, 0xA9C($v1)
    MEM_H(0XA9C, ctx->r3) = ctx->r25;
    // 0x8005BA78: jal         0x800603F0
    // 0x8005BA7C: sb          $t1, 0x754($v0)
    MEM_B(0X754, ctx->r2) = ctx->r9;
    func_800603F0(rdram, ctx);
        goto after_21;
    // 0x8005BA7C: sb          $t1, 0x754($v0)
    MEM_B(0X754, ctx->r2) = ctx->r9;
    after_21:
    // 0x8005BA80: lui         $t2, 0x8012
    ctx->r10 = S32(0X8012 << 16);
    // 0x8005BA84: lbu         $t2, -0x32A4($t2)
    ctx->r10 = MEM_BU(ctx->r10, -0X32A4);
    // 0x8005BA88: addiu       $at, $zero, 0x6
    ctx->r1 = ADD32(0, 0X6);
    // 0x8005BA8C: bne         $t2, $at, L_8005BAA4
    if (ctx->r10 != ctx->r1) {
        // 0x8005BA90: lui         $t3, 0x8012
        ctx->r11 = S32(0X8012 << 16);
            goto L_8005BAA4;
    }
    // 0x8005BA90: lui         $t3, 0x8012
    ctx->r11 = S32(0X8012 << 16);
    // 0x8005BA94: jal         0x80036C78
    // 0x8005BA98: nop

    func_80036C78(rdram, ctx);
        goto after_22;
    // 0x8005BA98: nop

    after_22:
    // 0x8005BA9C: b           L_8005BAFC
    // 0x8005BAA0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_8005BAFC;
    // 0x8005BAA0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8005BAA4:
    // 0x8005BAA4: lhu         $t3, 0xB74($t3)
    ctx->r11 = MEM_HU(ctx->r11, 0XB74);
    // 0x8005BAA8: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x8005BAAC: bne         $t3, $at, L_8005BAC4
    if (ctx->r11 != ctx->r1) {
        // 0x8005BAB0: nop
    
            goto L_8005BAC4;
    }
    // 0x8005BAB0: nop

    // 0x8005BAB4: jal         0x80036D8C
    // 0x8005BAB8: nop

    func_80036D8C(rdram, ctx);
        goto after_23;
    // 0x8005BAB8: nop

    after_23:
    // 0x8005BABC: b           L_8005BAFC
    // 0x8005BAC0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_8005BAFC;
    // 0x8005BAC0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8005BAC4:
    // 0x8005BAC4: jal         0x80036D18
    // 0x8005BAC8: nop

    func_80036D18(rdram, ctx);
        goto after_24;
    // 0x8005BAC8: nop

    after_24:
    // 0x8005BACC: b           L_8005BAFC
    // 0x8005BAD0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_8005BAFC;
    // 0x8005BAD0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8005BAD4:
    // 0x8005BAD4: lui         $v0, 0x8011
    ctx->r2 = S32(0X8011 << 16);
    // 0x8005BAD8: addiu       $v0, $v0, -0x3770
    ctx->r2 = ADD32(ctx->r2, -0X3770);
    // 0x8005BADC: lbu         $t4, 0x754($v0)
    ctx->r12 = MEM_BU(ctx->r2, 0X754);
    // 0x8005BAE0: nop

    // 0x8005BAE4: andi        $t5, $t4, 0xFC
    ctx->r13 = ctx->r12 & 0XFC;
    // 0x8005BAE8: jal         0x800603F0
    // 0x8005BAEC: sb          $t5, 0x754($v0)
    MEM_B(0X754, ctx->r2) = ctx->r13;
    func_800603F0(rdram, ctx);
        goto after_25;
    // 0x8005BAEC: sb          $t5, 0x754($v0)
    MEM_B(0X754, ctx->r2) = ctx->r13;
    after_25:
    // 0x8005BAF0: jal         0x80036C78
    // 0x8005BAF4: nop

    func_80036C78(rdram, ctx);
        goto after_26;
    // 0x8005BAF4: nop

    after_26:
L_8005BAF8:
    // 0x8005BAF8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8005BAFC:
    // 0x8005BAFC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8005BB00: jr          $ra
    // 0x8005BB04: nop

    return;
    // 0x8005BB04: nop

;}
RECOMP_FUNC void func_8005BB08(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8005BB08: lui         $v1, 0x801B
    ctx->r3 = S32(0X801B << 16);
    // 0x8005BB0C: addiu       $v1, $v1, 0x369A
    ctx->r3 = ADD32(ctx->r3, 0X369A);
    // 0x8005BB10: lhu         $t7, 0x0($v1)
    ctx->r15 = MEM_HU(ctx->r3, 0X0);
    // 0x8005BB14: lui         $a2, 0x8012
    ctx->r6 = S32(0X8012 << 16);
    // 0x8005BB18: addiu       $a2, $a2, 0x358
    ctx->r6 = ADD32(ctx->r6, 0X358);
    // 0x8005BB1C: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x8005BB20: andi        $t6, $a0, 0xFFFF
    ctx->r14 = ctx->r4 & 0XFFFF;
    // 0x8005BB24: addiu       $t8, $t7, 0x1
    ctx->r24 = ADD32(ctx->r15, 0X1);
    // 0x8005BB28: or          $a0, $t6, $zero
    ctx->r4 = ctx->r14 | 0;
    // 0x8005BB2C: or          $v0, $a2, $zero
    ctx->r2 = ctx->r6 | 0;
    // 0x8005BB30: beq         $t6, $zero, L_8005BC8C
    if (ctx->r14 == 0) {
        // 0x8005BB34: sh          $t8, 0x0($v1)
        MEM_H(0X0, ctx->r3) = ctx->r24;
            goto L_8005BC8C;
    }
    // 0x8005BB34: sh          $t8, 0x0($v1)
    MEM_H(0X0, ctx->r3) = ctx->r24;
    // 0x8005BB38: lui         $t9, 0x8012
    ctx->r25 = S32(0X8012 << 16);
    // 0x8005BB3C: lbu         $t9, 0xB65($t9)
    ctx->r25 = MEM_BU(ctx->r25, 0XB65);
    // 0x8005BB40: lui         $t0, 0x8012
    ctx->r8 = S32(0X8012 << 16);
    // 0x8005BB44: beq         $t9, $zero, L_8005BB80
    if (ctx->r25 == 0) {
        // 0x8005BB48: addiu       $t0, $t0, 0xB72
        ctx->r8 = ADD32(ctx->r8, 0XB72);
            goto L_8005BB80;
    }
    // 0x8005BB48: addiu       $t0, $t0, 0xB72
    ctx->r8 = ADD32(ctx->r8, 0XB72);
    // 0x8005BB4C: lui         $a3, 0x8009
    ctx->r7 = S32(0X8009 << 16);
    // 0x8005BB50: addiu       $a3, $a3, 0x3B20
    ctx->r7 = ADD32(ctx->r7, 0X3B20);
    // 0x8005BB54: lw          $t2, 0x0($a3)
    ctx->r10 = MEM_W(ctx->r7, 0X0);
    // 0x8005BB58: nop

    // 0x8005BB5C: lw          $t3, 0xB8($t2)
    ctx->r11 = MEM_W(ctx->r10, 0XB8);
    // 0x8005BB60: nop

    // 0x8005BB64: lhu         $t4, 0x10($t3)
    ctx->r12 = MEM_HU(ctx->r11, 0X10);
    // 0x8005BB68: nop

    // 0x8005BB6C: andi        $t5, $t4, 0x200
    ctx->r13 = ctx->r12 & 0X200;
    // 0x8005BB70: beq         $t5, $zero, L_8005BC8C
    if (ctx->r13 == 0) {
        // 0x8005BB74: nop
    
            goto L_8005BC8C;
    }
    // 0x8005BB74: nop

    // 0x8005BB78: jr          $ra
    // 0x8005BB7C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    return;
    // 0x8005BB7C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_8005BB80:
    // 0x8005BB80: lhu         $t6, 0x0($t0)
    ctx->r14 = MEM_HU(ctx->r8, 0X0);
    // 0x8005BB84: lui         $t7, 0x8012
    ctx->r15 = S32(0X8012 << 16);
    // 0x8005BB88: slti        $at, $t6, 0x4
    ctx->r1 = SIGNED(ctx->r14) < 0X4 ? 1 : 0;
    // 0x8005BB8C: bne         $at, $zero, L_8005BC2C
    if (ctx->r1 != 0) {
        // 0x8005BB90: lui         $t4, 0x8012
        ctx->r12 = S32(0X8012 << 16);
            goto L_8005BC2C;
    }
    // 0x8005BB90: lui         $t4, 0x8012
    ctx->r12 = S32(0X8012 << 16);
    // 0x8005BB94: lhu         $t7, 0xB7E($t7)
    ctx->r15 = MEM_HU(ctx->r15, 0XB7E);
    // 0x8005BB98: lui         $a3, 0x8009
    ctx->r7 = S32(0X8009 << 16);
    // 0x8005BB9C: andi        $t8, $t7, 0x800
    ctx->r24 = ctx->r15 & 0X800;
    // 0x8005BBA0: beq         $t8, $zero, L_8005BBF8
    if (ctx->r24 == 0) {
        // 0x8005BBA4: addiu       $a3, $a3, 0x3B20
        ctx->r7 = ADD32(ctx->r7, 0X3B20);
            goto L_8005BBF8;
    }
    // 0x8005BBA4: addiu       $a3, $a3, 0x3B20
    ctx->r7 = ADD32(ctx->r7, 0X3B20);
    // 0x8005BBA8: lhu         $t9, 0x0($v1)
    ctx->r25 = MEM_HU(ctx->r3, 0X0);
    // 0x8005BBAC: lui         $a3, 0x8009
    ctx->r7 = S32(0X8009 << 16);
    // 0x8005BBB0: slti        $at, $t9, 0x12D
    ctx->r1 = SIGNED(ctx->r25) < 0X12D ? 1 : 0;
    // 0x8005BBB4: bne         $at, $zero, L_8005BBF0
    if (ctx->r1 != 0) {
        // 0x8005BBB8: addiu       $a3, $a3, 0x3B20
        ctx->r7 = ADD32(ctx->r7, 0X3B20);
            goto L_8005BBF0;
    }
    // 0x8005BBB8: addiu       $a3, $a3, 0x3B20
    ctx->r7 = ADD32(ctx->r7, 0X3B20);
    // 0x8005BBBC: lw          $t2, 0x0($a3)
    ctx->r10 = MEM_W(ctx->r7, 0X0);
    // 0x8005BBC0: nop

    // 0x8005BBC4: lw          $t3, 0xB8($t2)
    ctx->r11 = MEM_W(ctx->r10, 0XB8);
    // 0x8005BBC8: nop

    // 0x8005BBCC: lw          $t4, 0x24($t3)
    ctx->r12 = MEM_W(ctx->r11, 0X24);
    // 0x8005BBD0: nop

    // 0x8005BBD4: lhu         $t5, 0x10($t4)
    ctx->r13 = MEM_HU(ctx->r12, 0X10);
    // 0x8005BBD8: nop

    // 0x8005BBDC: andi        $t6, $t5, 0x200
    ctx->r14 = ctx->r13 & 0X200;
    // 0x8005BBE0: beq         $t6, $zero, L_8005BBF0
    if (ctx->r14 == 0) {
        // 0x8005BBE4: nop
    
            goto L_8005BBF0;
    }
    // 0x8005BBE4: nop

    // 0x8005BBE8: jr          $ra
    // 0x8005BBEC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    return;
    // 0x8005BBEC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_8005BBF0:
    // 0x8005BBF0: b           L_8005BC8C
    // 0x8005BBF4: nop

        goto L_8005BC8C;
    // 0x8005BBF4: nop

L_8005BBF8:
    // 0x8005BBF8: lw          $t7, 0x0($a3)
    ctx->r15 = MEM_W(ctx->r7, 0X0);
    // 0x8005BBFC: nop

    // 0x8005BC00: lw          $t8, 0xB8($t7)
    ctx->r24 = MEM_W(ctx->r15, 0XB8);
    // 0x8005BC04: nop

    // 0x8005BC08: lw          $t9, 0x24($t8)
    ctx->r25 = MEM_W(ctx->r24, 0X24);
    // 0x8005BC0C: nop

    // 0x8005BC10: lhu         $t2, 0x10($t9)
    ctx->r10 = MEM_HU(ctx->r25, 0X10);
    // 0x8005BC14: nop

    // 0x8005BC18: andi        $t3, $t2, 0x200
    ctx->r11 = ctx->r10 & 0X200;
    // 0x8005BC1C: beq         $t3, $zero, L_8005BC8C
    if (ctx->r11 == 0) {
        // 0x8005BC20: nop
    
            goto L_8005BC8C;
    }
    // 0x8005BC20: nop

    // 0x8005BC24: jr          $ra
    // 0x8005BC28: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    return;
    // 0x8005BC28: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_8005BC2C:
    // 0x8005BC2C: lhu         $t4, 0xB7E($t4)
    ctx->r12 = MEM_HU(ctx->r12, 0XB7E);
    // 0x8005BC30: lui         $t9, 0x8012
    ctx->r25 = S32(0X8012 << 16);
    // 0x8005BC34: andi        $t5, $t4, 0x800
    ctx->r13 = ctx->r12 & 0X800;
    // 0x8005BC38: beq         $t5, $zero, L_8005BC70
    if (ctx->r13 == 0) {
        // 0x8005BC3C: nop
    
            goto L_8005BC70;
    }
    // 0x8005BC3C: nop

    // 0x8005BC40: lhu         $t6, 0x0($v1)
    ctx->r14 = MEM_HU(ctx->r3, 0X0);
    // 0x8005BC44: lui         $t7, 0x8012
    ctx->r15 = S32(0X8012 << 16);
    // 0x8005BC48: slti        $at, $t6, 0x12D
    ctx->r1 = SIGNED(ctx->r14) < 0X12D ? 1 : 0;
    // 0x8005BC4C: bne         $at, $zero, L_8005BC8C
    if (ctx->r1 != 0) {
        // 0x8005BC50: nop
    
            goto L_8005BC8C;
    }
    // 0x8005BC50: nop

    // 0x8005BC54: lhu         $t7, -0x2CE0($t7)
    ctx->r15 = MEM_HU(ctx->r15, -0X2CE0);
    // 0x8005BC58: nop

    // 0x8005BC5C: andi        $t8, $t7, 0x200
    ctx->r24 = ctx->r15 & 0X200;
    // 0x8005BC60: beq         $t8, $zero, L_8005BC8C
    if (ctx->r24 == 0) {
        // 0x8005BC64: nop
    
            goto L_8005BC8C;
    }
    // 0x8005BC64: nop

    // 0x8005BC68: jr          $ra
    // 0x8005BC6C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    return;
    // 0x8005BC6C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_8005BC70:
    // 0x8005BC70: lhu         $t9, -0x2CE0($t9)
    ctx->r25 = MEM_HU(ctx->r25, -0X2CE0);
    // 0x8005BC74: nop

    // 0x8005BC78: andi        $t2, $t9, 0x200
    ctx->r10 = ctx->r25 & 0X200;
    // 0x8005BC7C: beq         $t2, $zero, L_8005BC8C
    if (ctx->r10 == 0) {
        // 0x8005BC80: nop
    
            goto L_8005BC8C;
    }
    // 0x8005BC80: nop

    // 0x8005BC84: jr          $ra
    // 0x8005BC88: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    return;
    // 0x8005BC88: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_8005BC8C:
    // 0x8005BC8C: lui         $a3, 0x8009
    ctx->r7 = S32(0X8009 << 16);
    // 0x8005BC90: lui         $t0, 0x8012
    ctx->r8 = S32(0X8012 << 16);
    // 0x8005BC94: addiu       $t0, $t0, 0xB72
    ctx->r8 = ADD32(ctx->r8, 0XB72);
    // 0x8005BC98: addiu       $a3, $a3, 0x3B20
    ctx->r7 = ADD32(ctx->r7, 0X3B20);
    // 0x8005BC9C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8005BCA0: addiu       $t1, $zero, 0x4
    ctx->r9 = ADD32(0, 0X4);
L_8005BCA4:
    // 0x8005BCA4: lhu         $t3, 0x0($v0)
    ctx->r11 = MEM_HU(ctx->r2, 0X0);
    // 0x8005BCA8: nop

    // 0x8005BCAC: beq         $t3, $zero, L_8005BD40
    if (ctx->r11 == 0) {
        // 0x8005BCB0: nop
    
            goto L_8005BD40;
    }
    // 0x8005BCB0: nop

    // 0x8005BCB4: lhu         $t4, 0x2($v0)
    ctx->r12 = MEM_HU(ctx->r2, 0X2);
    // 0x8005BCB8: nop

    // 0x8005BCBC: andi        $t5, $t4, 0x4
    ctx->r13 = ctx->r12 & 0X4;
    // 0x8005BCC0: bne         $t5, $zero, L_8005BD40
    if (ctx->r13 != 0) {
        // 0x8005BCC4: nop
    
            goto L_8005BD40;
    }
    // 0x8005BCC4: nop

    // 0x8005BCC8: beq         $a0, $zero, L_8005BD24
    if (ctx->r4 == 0) {
        // 0x8005BCCC: nop
    
            goto L_8005BD24;
    }
    // 0x8005BCCC: nop

    // 0x8005BCD0: lhu         $v1, 0x0($t0)
    ctx->r3 = MEM_HU(ctx->r8, 0X0);
    // 0x8005BCD4: nop

    // 0x8005BCD8: slti        $at, $v1, 0x4
    ctx->r1 = SIGNED(ctx->r3) < 0X4 ? 1 : 0;
    // 0x8005BCDC: bne         $at, $zero, L_8005BD24
    if (ctx->r1 != 0) {
        // 0x8005BCE0: slti        $at, $v1, 0x8
        ctx->r1 = SIGNED(ctx->r3) < 0X8 ? 1 : 0;
            goto L_8005BD24;
    }
    // 0x8005BCE0: slti        $at, $v1, 0x8
    ctx->r1 = SIGNED(ctx->r3) < 0X8 ? 1 : 0;
    // 0x8005BCE4: beq         $at, $zero, L_8005BD24
    if (ctx->r1 == 0) {
        // 0x8005BCE8: nop
    
            goto L_8005BD24;
    }
    // 0x8005BCE8: nop

    // 0x8005BCEC: lw          $t6, 0x0($a3)
    ctx->r14 = MEM_W(ctx->r7, 0X0);
    // 0x8005BCF0: lw          $t8, 0x40($v0)
    ctx->r24 = MEM_W(ctx->r2, 0X40);
    // 0x8005BCF4: lw          $t7, 0xB8($t6)
    ctx->r15 = MEM_W(ctx->r14, 0XB8);
    // 0x8005BCF8: lw          $t9, 0xC8($t8)
    ctx->r25 = MEM_W(ctx->r24, 0XC8);
    // 0x8005BCFC: nop

    // 0x8005BD00: beq         $t7, $t9, L_8005BD40
    if (ctx->r15 == ctx->r25) {
        // 0x8005BD04: nop
    
            goto L_8005BD40;
    }
    // 0x8005BD04: nop

    // 0x8005BD08: lhu         $t2, 0x4($v0)
    ctx->r10 = MEM_HU(ctx->r2, 0X4);
    // 0x8005BD0C: nop

    // 0x8005BD10: andi        $t3, $t2, 0x1000
    ctx->r11 = ctx->r10 & 0X1000;
    // 0x8005BD14: beq         $t3, $zero, L_8005BD40
    if (ctx->r11 == 0) {
        // 0x8005BD18: nop
    
            goto L_8005BD40;
    }
    // 0x8005BD18: nop

    // 0x8005BD1C: jr          $ra
    // 0x8005BD20: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    return;
    // 0x8005BD20: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_8005BD24:
    // 0x8005BD24: lhu         $t4, 0x4($v0)
    ctx->r12 = MEM_HU(ctx->r2, 0X4);
    // 0x8005BD28: nop

    // 0x8005BD2C: andi        $t5, $t4, 0x1000
    ctx->r13 = ctx->r12 & 0X1000;
    // 0x8005BD30: beq         $t5, $zero, L_8005BD40
    if (ctx->r13 == 0) {
        // 0x8005BD34: nop
    
            goto L_8005BD40;
    }
    // 0x8005BD34: nop

    // 0x8005BD38: jr          $ra
    // 0x8005BD3C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    return;
    // 0x8005BD3C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_8005BD40:
    // 0x8005BD40: lhu         $t6, 0x58($v0)
    ctx->r14 = MEM_HU(ctx->r2, 0X58);
    // 0x8005BD44: addiu       $v0, $v0, 0x58
    ctx->r2 = ADD32(ctx->r2, 0X58);
    // 0x8005BD48: beq         $t6, $zero, L_8005BDDC
    if (ctx->r14 == 0) {
        // 0x8005BD4C: addiu       $a1, $a1, 0x2
        ctx->r5 = ADD32(ctx->r5, 0X2);
            goto L_8005BDDC;
    }
    // 0x8005BD4C: addiu       $a1, $a1, 0x2
    ctx->r5 = ADD32(ctx->r5, 0X2);
    // 0x8005BD50: lhu         $t8, 0x2($v0)
    ctx->r24 = MEM_HU(ctx->r2, 0X2);
    // 0x8005BD54: nop

    // 0x8005BD58: andi        $t7, $t8, 0x4
    ctx->r15 = ctx->r24 & 0X4;
    // 0x8005BD5C: bne         $t7, $zero, L_8005BDDC
    if (ctx->r15 != 0) {
        // 0x8005BD60: nop
    
            goto L_8005BDDC;
    }
    // 0x8005BD60: nop

    // 0x8005BD64: beq         $a0, $zero, L_8005BDC0
    if (ctx->r4 == 0) {
        // 0x8005BD68: nop
    
            goto L_8005BDC0;
    }
    // 0x8005BD68: nop

    // 0x8005BD6C: lhu         $v1, 0x0($t0)
    ctx->r3 = MEM_HU(ctx->r8, 0X0);
    // 0x8005BD70: nop

    // 0x8005BD74: slti        $at, $v1, 0x4
    ctx->r1 = SIGNED(ctx->r3) < 0X4 ? 1 : 0;
    // 0x8005BD78: bne         $at, $zero, L_8005BDC0
    if (ctx->r1 != 0) {
        // 0x8005BD7C: slti        $at, $v1, 0x8
        ctx->r1 = SIGNED(ctx->r3) < 0X8 ? 1 : 0;
            goto L_8005BDC0;
    }
    // 0x8005BD7C: slti        $at, $v1, 0x8
    ctx->r1 = SIGNED(ctx->r3) < 0X8 ? 1 : 0;
    // 0x8005BD80: beq         $at, $zero, L_8005BDC0
    if (ctx->r1 == 0) {
        // 0x8005BD84: nop
    
            goto L_8005BDC0;
    }
    // 0x8005BD84: nop

    // 0x8005BD88: lw          $t9, 0x0($a3)
    ctx->r25 = MEM_W(ctx->r7, 0X0);
    // 0x8005BD8C: lw          $t3, 0x40($v0)
    ctx->r11 = MEM_W(ctx->r2, 0X40);
    // 0x8005BD90: lw          $t2, 0xB8($t9)
    ctx->r10 = MEM_W(ctx->r25, 0XB8);
    // 0x8005BD94: lw          $t4, 0xC8($t3)
    ctx->r12 = MEM_W(ctx->r11, 0XC8);
    // 0x8005BD98: nop

    // 0x8005BD9C: beq         $t2, $t4, L_8005BDDC
    if (ctx->r10 == ctx->r12) {
        // 0x8005BDA0: nop
    
            goto L_8005BDDC;
    }
    // 0x8005BDA0: nop

    // 0x8005BDA4: lhu         $t5, 0x4($v0)
    ctx->r13 = MEM_HU(ctx->r2, 0X4);
    // 0x8005BDA8: nop

    // 0x8005BDAC: andi        $t6, $t5, 0x1000
    ctx->r14 = ctx->r13 & 0X1000;
    // 0x8005BDB0: beq         $t6, $zero, L_8005BDDC
    if (ctx->r14 == 0) {
        // 0x8005BDB4: nop
    
            goto L_8005BDDC;
    }
    // 0x8005BDB4: nop

    // 0x8005BDB8: jr          $ra
    // 0x8005BDBC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    return;
    // 0x8005BDBC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_8005BDC0:
    // 0x8005BDC0: lhu         $t8, 0x4($v0)
    ctx->r24 = MEM_HU(ctx->r2, 0X4);
    // 0x8005BDC4: nop

    // 0x8005BDC8: andi        $t7, $t8, 0x1000
    ctx->r15 = ctx->r24 & 0X1000;
    // 0x8005BDCC: beq         $t7, $zero, L_8005BDDC
    if (ctx->r15 == 0) {
        // 0x8005BDD0: nop
    
            goto L_8005BDDC;
    }
    // 0x8005BDD0: nop

    // 0x8005BDD4: jr          $ra
    // 0x8005BDD8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    return;
    // 0x8005BDD8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_8005BDDC:
    // 0x8005BDDC: bne         $a1, $t1, L_8005BCA4
    if (ctx->r5 != ctx->r9) {
        // 0x8005BDE0: addiu       $v0, $v0, 0x58
        ctx->r2 = ADD32(ctx->r2, 0X58);
            goto L_8005BCA4;
    }
    // 0x8005BDE0: addiu       $v0, $v0, 0x58
    ctx->r2 = ADD32(ctx->r2, 0X58);
    // 0x8005BDE4: lui         $v1, 0x8012
    ctx->r3 = S32(0X8012 << 16);
    // 0x8005BDE8: lhu         $v1, 0xB72($v1)
    ctx->r3 = MEM_HU(ctx->r3, 0XB72);
    // 0x8005BDEC: addiu       $at, $zero, 0x8
    ctx->r1 = ADD32(0, 0X8);
    // 0x8005BDF0: bne         $v1, $at, L_8005BE14
    if (ctx->r3 != ctx->r1) {
        // 0x8005BDF4: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_8005BE14;
    }
    // 0x8005BDF4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x8005BDF8: lhu         $t9, 0x4($a2)
    ctx->r25 = MEM_HU(ctx->r6, 0X4);
    // 0x8005BDFC: nop

    // 0x8005BE00: andi        $t3, $t9, 0x1000
    ctx->r11 = ctx->r25 & 0X1000;
    // 0x8005BE04: beq         $t3, $zero, L_8005BE14
    if (ctx->r11 == 0) {
        // 0x8005BE08: nop
    
            goto L_8005BE14;
    }
    // 0x8005BE08: nop

    // 0x8005BE0C: jr          $ra
    // 0x8005BE10: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    return;
    // 0x8005BE10: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_8005BE14:
    // 0x8005BE14: jr          $ra
    // 0x8005BE18: nop

    return;
    // 0x8005BE18: nop

;}
RECOMP_FUNC void func_8005BE1C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8005BE1C: lui         $v0, 0x8009
    ctx->r2 = S32(0X8009 << 16);
    // 0x8005BE20: lw          $v0, 0x3B20($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X3B20);
    // 0x8005BE24: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8005BE28: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8005BE2C: lw          $a0, 0x88($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X88);
    // 0x8005BE30: nop

    // 0x8005BE34: beq         $a0, $zero, L_8005BEAC
    if (ctx->r4 == 0) {
        // 0x8005BE38: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_8005BEAC;
    }
    // 0x8005BE38: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8005BE3C: lhu         $t6, 0xC2($v0)
    ctx->r14 = MEM_HU(ctx->r2, 0XC2);
    // 0x8005BE40: nop

    // 0x8005BE44: andi        $t7, $t6, 0x40
    ctx->r15 = ctx->r14 & 0X40;
    // 0x8005BE48: bne         $t7, $zero, L_8005BEAC
    if (ctx->r15 != 0) {
        // 0x8005BE4C: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_8005BEAC;
    }
    // 0x8005BE4C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8005BE50: lhu         $t8, 0x12($a0)
    ctx->r24 = MEM_HU(ctx->r4, 0X12);
    // 0x8005BE54: nop

    // 0x8005BE58: andi        $t9, $t8, 0x2
    ctx->r25 = ctx->r24 & 0X2;
    // 0x8005BE5C: bne         $t9, $zero, L_8005BE78
    if (ctx->r25 != 0) {
        // 0x8005BE60: nop
    
            goto L_8005BE78;
    }
    // 0x8005BE60: nop

    // 0x8005BE64: jal         0x8024BC08
    // 0x8005BE68: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    LOOKUP_FUNC(0x8024BC08)(rdram, ctx);
        goto after_0;
    // 0x8005BE68: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_0:
    // 0x8005BE6C: lui         $v0, 0x8009
    ctx->r2 = S32(0X8009 << 16);
    // 0x8005BE70: lw          $v0, 0x3B20($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X3B20);
    // 0x8005BE74: nop

L_8005BE78:
    // 0x8005BE78: lw          $t0, 0x84($v0)
    ctx->r8 = MEM_W(ctx->r2, 0X84);
    // 0x8005BE7C: nop

    // 0x8005BE80: beq         $t0, $zero, L_8005BEA4
    if (ctx->r8 == 0) {
        // 0x8005BE84: nop
    
            goto L_8005BEA4;
    }
    // 0x8005BE84: nop

    // 0x8005BE88: lw          $a0, 0x88($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X88);
    // 0x8005BE8C: lui         $a2, 0x4000
    ctx->r6 = S32(0X4000 << 16);
    // 0x8005BE90: lw          $a1, 0x8C($a0)
    ctx->r5 = MEM_W(ctx->r4, 0X8C);
    // 0x8005BE94: jal         0x80057F00
    // 0x8005BE98: nop

    func_80057F00(rdram, ctx);
        goto after_1;
    // 0x8005BE98: nop

    after_1:
    // 0x8005BE9C: b           L_8005BEAC
    // 0x8005BEA0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_8005BEAC;
    // 0x8005BEA0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8005BEA4:
    // 0x8005BEA4: sw          $zero, 0x88($v0)
    MEM_W(0X88, ctx->r2) = 0;
    // 0x8005BEA8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8005BEAC:
    // 0x8005BEAC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8005BEB0: jr          $ra
    // 0x8005BEB4: nop

    return;
    // 0x8005BEB4: nop

;}
RECOMP_FUNC void func_8005BEB8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8005BEB8: lui         $t6, 0x8012
    ctx->r14 = S32(0X8012 << 16);
    // 0x8005BEBC: lbu         $t6, -0x32A4($t6)
    ctx->r14 = MEM_BU(ctx->r14, -0X32A4);
    // 0x8005BEC0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8005BEC4: addiu       $at, $zero, 0x7
    ctx->r1 = ADD32(0, 0X7);
    // 0x8005BEC8: beq         $t6, $at, L_8005C0EC
    if (ctx->r14 == ctx->r1) {
        // 0x8005BECC: sw          $ra, 0x14($sp)
        MEM_W(0X14, ctx->r29) = ctx->r31;
            goto L_8005C0EC;
    }
    // 0x8005BECC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8005BED0: lui         $t7, 0x802C
    ctx->r15 = S32(0X802C << 16);
    // 0x8005BED4: lhu         $t7, 0x38D4($t7)
    ctx->r15 = MEM_HU(ctx->r15, 0X38D4);
    // 0x8005BED8: lui         $t8, 0x802C
    ctx->r24 = S32(0X802C << 16);
    // 0x8005BEDC: bne         $t7, $zero, L_8005C0F0
    if (ctx->r15 != 0) {
        // 0x8005BEE0: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_8005C0F0;
    }
    // 0x8005BEE0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8005BEE4: lhu         $t8, 0x38D6($t8)
    ctx->r24 = MEM_HU(ctx->r24, 0X38D6);
    // 0x8005BEE8: lui         $a2, 0x801B
    ctx->r6 = S32(0X801B << 16);
    // 0x8005BEEC: bne         $t8, $zero, L_8005C0EC
    if (ctx->r24 != 0) {
        // 0x8005BEF0: addiu       $a2, $a2, -0x3A06
        ctx->r6 = ADD32(ctx->r6, -0X3A06);
            goto L_8005C0EC;
    }
    // 0x8005BEF0: addiu       $a2, $a2, -0x3A06
    ctx->r6 = ADD32(ctx->r6, -0X3A06);
    // 0x8005BEF4: lhu         $t9, 0x0($a2)
    ctx->r25 = MEM_HU(ctx->r6, 0X0);
    // 0x8005BEF8: lui         $a0, 0x8009
    ctx->r4 = S32(0X8009 << 16);
    // 0x8005BEFC: bne         $t9, $zero, L_8005C048
    if (ctx->r25 != 0) {
        // 0x8005BF00: lui         $t1, 0x801B
        ctx->r9 = S32(0X801B << 16);
            goto L_8005C048;
    }
    // 0x8005BF00: lui         $t1, 0x801B
    ctx->r9 = S32(0X801B << 16);
    // 0x8005BF04: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x8005BF08: addiu       $a0, $a0, 0x3B20
    ctx->r4 = ADD32(ctx->r4, 0X3B20);
    // 0x8005BF0C: sw          $zero, 0x36CC($at)
    MEM_W(0X36CC, ctx->r1) = 0;
    // 0x8005BF10: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x8005BF14: lui         $v1, 0x8012
    ctx->r3 = S32(0X8012 << 16);
    // 0x8005BF18: lhu         $t0, 0xCE($v0)
    ctx->r8 = MEM_HU(ctx->r2, 0XCE);
    // 0x8005BF1C: addiu       $v1, $v1, -0x2CF0
    ctx->r3 = ADD32(ctx->r3, -0X2CF0);
    // 0x8005BF20: ori         $t1, $t0, 0x40
    ctx->r9 = ctx->r8 | 0X40;
    // 0x8005BF24: sh          $t1, 0xCE($v0)
    MEM_H(0XCE, ctx->r2) = ctx->r9;
    // 0x8005BF28: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x8005BF2C: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x8005BF30: lhu         $t2, 0xCE($v0)
    ctx->r10 = MEM_HU(ctx->r2, 0XCE);
    // 0x8005BF34: nop

    // 0x8005BF38: sh          $t2, 0xD0($v0)
    MEM_H(0XD0, ctx->r2) = ctx->r10;
    // 0x8005BF3C: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x8005BF40: nop

    // 0x8005BF44: lhu         $t3, 0xC0($v0)
    ctx->r11 = MEM_HU(ctx->r2, 0XC0);
    // 0x8005BF48: nop

    // 0x8005BF4C: ori         $t4, $t3, 0x80
    ctx->r12 = ctx->r11 | 0X80;
    // 0x8005BF50: sh          $t4, 0xC0($v0)
    MEM_H(0XC0, ctx->r2) = ctx->r12;
    // 0x8005BF54: lhu         $t5, 0x10($v1)
    ctx->r13 = MEM_HU(ctx->r3, 0X10);
    // 0x8005BF58: lhu         $t7, 0xAA4($v1)
    ctx->r15 = MEM_HU(ctx->r3, 0XAA4);
    // 0x8005BF5C: ori         $t6, $t5, 0x4
    ctx->r14 = ctx->r13 | 0X4;
    // 0x8005BF60: ori         $t8, $t7, 0x4
    ctx->r24 = ctx->r15 | 0X4;
    // 0x8005BF64: sh          $t6, 0x10($v1)
    MEM_H(0X10, ctx->r3) = ctx->r14;
    // 0x8005BF68: sh          $t8, 0xAA4($v1)
    MEM_H(0XAA4, ctx->r3) = ctx->r24;
    // 0x8005BF6C: jal         0x8005AD18
    // 0x8005BF70: sw          $zero, 0x36D0($at)
    MEM_W(0X36D0, ctx->r1) = 0;
    func_8005AD18(rdram, ctx);
        goto after_0;
    // 0x8005BF70: sw          $zero, 0x36D0($at)
    MEM_W(0X36D0, ctx->r1) = 0;
    after_0:
    // 0x8005BF74: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x8005BF78: addiu       $a0, $a0, 0xB7E
    ctx->r4 = ADD32(ctx->r4, 0XB7E);
    // 0x8005BF7C: lhu         $t9, 0x0($a0)
    ctx->r25 = MEM_HU(ctx->r4, 0X0);
    // 0x8005BF80: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x8005BF84: ori         $t0, $t9, 0x2020
    ctx->r8 = ctx->r25 | 0X2020;
    // 0x8005BF88: sh          $t0, 0x0($a0)
    MEM_H(0X0, ctx->r4) = ctx->r8;
    // 0x8005BF8C: lhu         $v0, 0xB74($v0)
    ctx->r2 = MEM_HU(ctx->r2, 0XB74);
    // 0x8005BF90: lui         $v1, 0x8012
    ctx->r3 = S32(0X8012 << 16);
    // 0x8005BF94: addiu       $t1, $zero, 0x78
    ctx->r9 = ADD32(0, 0X78);
    // 0x8005BF98: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x8005BF9C: addiu       $v1, $v1, -0x2CF0
    ctx->r3 = ADD32(ctx->r3, -0X2CF0);
    // 0x8005BFA0: beq         $v0, $zero, L_8005BFB0
    if (ctx->r2 == 0) {
        // 0x8005BFA4: sh          $t1, 0x36C8($at)
        MEM_H(0X36C8, ctx->r1) = ctx->r9;
            goto L_8005BFB0;
    }
    // 0x8005BFA4: sh          $t1, 0x36C8($at)
    MEM_H(0X36C8, ctx->r1) = ctx->r9;
    // 0x8005BFA8: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    // 0x8005BFAC: bne         $a0, $v0, L_8005BFD0
    if (ctx->r4 != ctx->r2) {
        // 0x8005BFB0: addiu       $t2, $zero, 0xA
        ctx->r10 = ADD32(0, 0XA);
            goto L_8005BFD0;
    }
L_8005BFB0:
    // 0x8005BFB0: addiu       $t2, $zero, 0xA
    ctx->r10 = ADD32(0, 0XA);
    // 0x8005BFB4: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x8005BFB8: jal         0x802928B4
    // 0x8005BFBC: sh          $t2, 0xB78($at)
    MEM_H(0XB78, ctx->r1) = ctx->r10;
    LOOKUP_FUNC(0x802928B4)(rdram, ctx);
        goto after_1;
    // 0x8005BFBC: sh          $t2, 0xB78($at)
    MEM_H(0XB78, ctx->r1) = ctx->r10;
    after_1:
    // 0x8005BFC0: jal         0x8005BE1C
    // 0x8005BFC4: nop

    func_8005BE1C(rdram, ctx);
        goto after_2;
    // 0x8005BFC4: nop

    after_2:
    // 0x8005BFC8: b           L_8005C034
    // 0x8005BFCC: nop

        goto L_8005C034;
    // 0x8005BFCC: nop

L_8005BFD0:
    // 0x8005BFD0: lhu         $t3, 0xA($v1)
    ctx->r11 = MEM_HU(ctx->r3, 0XA);
    // 0x8005BFD4: lhu         $t4, 0xA9E($v1)
    ctx->r12 = MEM_HU(ctx->r3, 0XA9E);
    // 0x8005BFD8: lui         $t5, 0x8012
    ctx->r13 = S32(0X8012 << 16);
    // 0x8005BFDC: bne         $t3, $t4, L_8005BFF4
    if (ctx->r11 != ctx->r12) {
        // 0x8005BFE0: addiu       $t6, $zero, 0xC
        ctx->r14 = ADD32(0, 0XC);
            goto L_8005BFF4;
    }
    // 0x8005BFE0: addiu       $t6, $zero, 0xC
    ctx->r14 = ADD32(0, 0XC);
    // 0x8005BFE4: lb          $t5, -0x3093($t5)
    ctx->r13 = MEM_B(ctx->r13, -0X3093);
    // 0x8005BFE8: addiu       $t9, $zero, 0xB
    ctx->r25 = ADD32(0, 0XB);
    // 0x8005BFEC: bne         $a0, $t5, L_8005C024
    if (ctx->r4 != ctx->r13) {
        // 0x8005BFF0: lui         $at, 0x8012
        ctx->r1 = S32(0X8012 << 16);
            goto L_8005C024;
    }
    // 0x8005BFF0: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
L_8005BFF4:
    // 0x8005BFF4: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x8005BFF8: lui         $t8, 0x8012
    ctx->r24 = S32(0X8012 << 16);
    // 0x8005BFFC: lb          $t8, -0x3093($t8)
    ctx->r24 = MEM_B(ctx->r24, -0X3093);
    // 0x8005C000: sh          $t6, 0xB78($at)
    MEM_H(0XB78, ctx->r1) = ctx->r14;
    // 0x8005C004: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x8005C008: addiu       $t7, $zero, 0x12C
    ctx->r15 = ADD32(0, 0X12C);
    // 0x8005C00C: bne         $a0, $t8, L_8005C034
    if (ctx->r4 != ctx->r24) {
        // 0x8005C010: sh          $t7, 0x36C8($at)
        MEM_H(0X36C8, ctx->r1) = ctx->r15;
            goto L_8005C034;
    }
    // 0x8005C010: sh          $t7, 0x36C8($at)
    MEM_H(0X36C8, ctx->r1) = ctx->r15;
    // 0x8005C014: jal         0x802928B4
    // 0x8005C018: nop

    LOOKUP_FUNC(0x802928B4)(rdram, ctx);
        goto after_3;
    // 0x8005C018: nop

    after_3:
    // 0x8005C01C: b           L_8005C034
    // 0x8005C020: nop

        goto L_8005C034;
    // 0x8005C020: nop

L_8005C024:
    // 0x8005C024: jal         0x802928B4
    // 0x8005C028: sh          $t9, 0xB78($at)
    MEM_H(0XB78, ctx->r1) = ctx->r25;
    LOOKUP_FUNC(0x802928B4)(rdram, ctx);
        goto after_4;
    // 0x8005C028: sh          $t9, 0xB78($at)
    MEM_H(0XB78, ctx->r1) = ctx->r25;
    after_4:
    // 0x8005C02C: jal         0x8005BE1C
    // 0x8005C030: nop

    func_8005BE1C(rdram, ctx);
        goto after_5;
    // 0x8005C030: nop

    after_5:
L_8005C034:
    // 0x8005C034: lui         $t0, 0x8012
    ctx->r8 = S32(0X8012 << 16);
    // 0x8005C038: lhu         $t0, 0xB78($t0)
    ctx->r8 = MEM_HU(ctx->r8, 0XB78);
    // 0x8005C03C: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x8005C040: b           L_8005C0D4
    // 0x8005C044: sh          $t0, 0xB7A($at)
    MEM_H(0XB7A, ctx->r1) = ctx->r8;
        goto L_8005C0D4;
    // 0x8005C044: sh          $t0, 0xB7A($at)
    MEM_H(0XB7A, ctx->r1) = ctx->r8;
L_8005C048:
    // 0x8005C048: lw          $t1, 0x36CC($t1)
    ctx->r9 = MEM_W(ctx->r9, 0X36CC);
    // 0x8005C04C: lui         $t2, 0x802C
    ctx->r10 = S32(0X802C << 16);
    // 0x8005C050: beq         $t1, $zero, L_8005C068
    if (ctx->r9 == 0) {
        // 0x8005C054: nop
    
            goto L_8005C068;
    }
    // 0x8005C054: nop

    // 0x8005C058: jal         0x8005B834
    // 0x8005C05C: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    func_8005B834(rdram, ctx);
        goto after_6;
    // 0x8005C05C: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_6:
    // 0x8005C060: b           L_8005C0D4
    // 0x8005C064: nop

        goto L_8005C0D4;
    // 0x8005C064: nop

L_8005C068:
    // 0x8005C068: lbu         $t2, 0x39DD($t2)
    ctx->r10 = MEM_BU(ctx->r10, 0X39DD);
    // 0x8005C06C: nop

    // 0x8005C070: beq         $t2, $zero, L_8005C0D4
    if (ctx->r10 == 0) {
        // 0x8005C074: nop
    
            goto L_8005C0D4;
    }
    // 0x8005C074: nop

    // 0x8005C078: jal         0x8005BB08
    // 0x8005C07C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    func_8005BB08(rdram, ctx);
        goto after_7;
    // 0x8005C07C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_7:
    // 0x8005C080: bne         $v0, $zero, L_8005C0A8
    if (ctx->r2 != 0) {
        // 0x8005C084: lui         $a1, 0x801B
        ctx->r5 = S32(0X801B << 16);
            goto L_8005C0A8;
    }
    // 0x8005C084: lui         $a1, 0x801B
    ctx->r5 = S32(0X801B << 16);
    // 0x8005C088: lui         $t3, 0x801B
    ctx->r11 = S32(0X801B << 16);
    // 0x8005C08C: lhu         $t3, 0x36C8($t3)
    ctx->r11 = MEM_HU(ctx->r11, 0X36C8);
    // 0x8005C090: lw          $a1, 0x36D0($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X36D0);
    // 0x8005C094: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x8005C098: sltu        $v0, $t3, $a1
    ctx->r2 = ctx->r11 < ctx->r5 ? 1 : 0;
    // 0x8005C09C: addiu       $a1, $a1, 0x1
    ctx->r5 = ADD32(ctx->r5, 0X1);
    // 0x8005C0A0: beq         $v0, $zero, L_8005C0D4
    if (ctx->r2 == 0) {
        // 0x8005C0A4: sw          $a1, 0x36D0($at)
        MEM_W(0X36D0, ctx->r1) = ctx->r5;
            goto L_8005C0D4;
    }
    // 0x8005C0A4: sw          $a1, 0x36D0($at)
    MEM_W(0X36D0, ctx->r1) = ctx->r5;
L_8005C0A8:
    // 0x8005C0A8: lui         $t4, 0x801B
    ctx->r12 = S32(0X801B << 16);
    // 0x8005C0AC: lw          $t4, 0x36CC($t4)
    ctx->r12 = MEM_W(ctx->r12, 0X36CC);
    // 0x8005C0B0: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x8005C0B4: addiu       $t5, $t4, 0x1
    ctx->r13 = ADD32(ctx->r12, 0X1);
    // 0x8005C0B8: jal         0x80021960
    // 0x8005C0BC: sw          $t5, 0x36CC($at)
    MEM_W(0X36CC, ctx->r1) = ctx->r13;
    func_80021960(rdram, ctx);
        goto after_8;
    // 0x8005C0BC: sw          $t5, 0x36CC($at)
    MEM_W(0X36CC, ctx->r1) = ctx->r13;
    after_8:
    // 0x8005C0C0: jal         0x802719DC
    // 0x8005C0C4: addiu       $a0, $zero, 0xA
    ctx->r4 = ADD32(0, 0XA);
    LOOKUP_FUNC(0x802719DC)(rdram, ctx);
        goto after_9;
    // 0x8005C0C4: addiu       $a0, $zero, 0xA
    ctx->r4 = ADD32(0, 0XA);
    after_9:
    // 0x8005C0C8: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x8005C0CC: jal         0x802A13CC
    // 0x8005C0D0: sh          $zero, -0x3A06($at)
    MEM_H(-0X3A06, ctx->r1) = 0;
    LOOKUP_FUNC(0x802A13CC)(rdram, ctx);
        goto after_10;
    // 0x8005C0D0: sh          $zero, -0x3A06($at)
    MEM_H(-0X3A06, ctx->r1) = 0;
    after_10:
L_8005C0D4:
    // 0x8005C0D4: lui         $a2, 0x801B
    ctx->r6 = S32(0X801B << 16);
    // 0x8005C0D8: addiu       $a2, $a2, -0x3A06
    ctx->r6 = ADD32(ctx->r6, -0X3A06);
    // 0x8005C0DC: lhu         $t6, 0x0($a2)
    ctx->r14 = MEM_HU(ctx->r6, 0X0);
    // 0x8005C0E0: nop

    // 0x8005C0E4: addiu       $t7, $t6, 0x1
    ctx->r15 = ADD32(ctx->r14, 0X1);
    // 0x8005C0E8: sh          $t7, 0x0($a2)
    MEM_H(0X0, ctx->r6) = ctx->r15;
L_8005C0EC:
    // 0x8005C0EC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8005C0F0:
    // 0x8005C0F0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8005C0F4: jr          $ra
    // 0x8005C0F8: nop

    return;
    // 0x8005C0F8: nop

;}
RECOMP_FUNC void func_8005C0FC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8005C0FC: lui         $v1, 0x8012
    ctx->r3 = S32(0X8012 << 16);
    // 0x8005C100: addiu       $v1, $v1, -0x2CF0
    ctx->r3 = ADD32(ctx->r3, -0X2CF0);
    // 0x8005C104: lui         $t9, 0x8012
    ctx->r25 = S32(0X8012 << 16);
    // 0x8005C108: lhu         $t6, 0xAA4($v1)
    ctx->r14 = MEM_HU(ctx->r3, 0XAA4);
    // 0x8005C10C: lhu         $t7, 0x10($v1)
    ctx->r15 = MEM_HU(ctx->r3, 0X10);
    // 0x8005C110: lhu         $t9, 0xB78($t9)
    ctx->r25 = MEM_HU(ctx->r25, 0XB78);
    // 0x8005C114: or          $a1, $t6, $t7
    ctx->r5 = ctx->r14 | ctx->r15;
    // 0x8005C118: addiu       $t0, $t9, -0x2
    ctx->r8 = ADD32(ctx->r25, -0X2);
    // 0x8005C11C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8005C120: andi        $t8, $a1, 0xFFFF
    ctx->r24 = ctx->r5 & 0XFFFF;
    // 0x8005C124: sltiu       $at, $t0, 0xC
    ctx->r1 = ctx->r8 < 0XC ? 1 : 0;
    // 0x8005C128: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8005C12C: beq         $at, $zero, L_8005C5BC
    if (ctx->r1 == 0) {
        // 0x8005C130: or          $a1, $t8, $zero
        ctx->r5 = ctx->r24 | 0;
            goto L_8005C5BC;
    }
    // 0x8005C130: or          $a1, $t8, $zero
    ctx->r5 = ctx->r24 | 0;
    // 0x8005C134: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x8005C138: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x8005C13C: addu        $at, $at, $t0
    gpr jr_addend_8005C148 = ctx->r8;
    ctx->r1 = ADD32(ctx->r1, ctx->r8);
    // 0x8005C140: lw          $t0, -0x67A4($at)
    ctx->r8 = ADD32(ctx->r1, -0X67A4);
    // 0x8005C144: nop

    // 0x8005C148: jr          $t0
    // 0x8005C14C: nop

    switch (jr_addend_8005C148 >> 2) {
        case 0: goto L_8005C300; break;
        case 1: goto L_8005C300; break;
        case 2: goto L_8005C300; break;
        case 3: goto L_8005C300; break;
        case 4: goto L_8005C300; break;
        case 5: goto L_8005C300; break;
        case 6: goto L_8005C274; break;
        case 7: goto L_8005C400; break;
        case 8: goto L_8005C5BC; break;
        case 9: goto L_8005C5BC; break;
        case 10: goto L_8005C150; break;
        case 11: goto L_8005C23C; break;
        default: switch_error(__func__, 0x8005C148, 0x800D985C);
    }
    // 0x8005C14C: nop

L_8005C150:
    // 0x8005C150: lhu         $t1, 0xA9C($v1)
    ctx->r9 = MEM_HU(ctx->r3, 0XA9C);
    // 0x8005C154: lhu         $t2, 0x8($v1)
    ctx->r10 = MEM_HU(ctx->r3, 0X8);
    // 0x8005C158: lui         $v0, 0x801B
    ctx->r2 = S32(0X801B << 16);
    // 0x8005C15C: or          $t3, $t1, $t2
    ctx->r11 = ctx->r9 | ctx->r10;
    // 0x8005C160: andi        $t4, $t3, 0x1000
    ctx->r12 = ctx->r11 & 0X1000;
    // 0x8005C164: beq         $t4, $zero, L_8005C5BC
    if (ctx->r12 == 0) {
        // 0x8005C168: addiu       $v0, $v0, -0x3A06
        ctx->r2 = ADD32(ctx->r2, -0X3A06);
            goto L_8005C5BC;
    }
    // 0x8005C168: addiu       $v0, $v0, -0x3A06
    ctx->r2 = ADD32(ctx->r2, -0X3A06);
    // 0x8005C16C: lhu         $t5, 0x0($v0)
    ctx->r13 = MEM_HU(ctx->r2, 0X0);
    // 0x8005C170: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x8005C174: bne         $t5, $zero, L_8005C198
    if (ctx->r13 != 0) {
        // 0x8005C178: lui         $t7, 0x801B
        ctx->r15 = S32(0X801B << 16);
            goto L_8005C198;
    }
    // 0x8005C178: lui         $t7, 0x801B
    ctx->r15 = S32(0X801B << 16);
    // 0x8005C17C: sh          $zero, 0x3692($at)
    MEM_H(0X3692, ctx->r1) = 0;
    // 0x8005C180: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x8005C184: addiu       $t6, $zero, 0xD2
    ctx->r14 = ADD32(0, 0XD2);
    // 0x8005C188: sh          $t6, 0x3694($at)
    MEM_H(0X3694, ctx->r1) = ctx->r14;
    // 0x8005C18C: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x8005C190: b           L_8005C220
    // 0x8005C194: sh          $zero, 0x3690($at)
    MEM_H(0X3690, ctx->r1) = 0;
        goto L_8005C220;
    // 0x8005C194: sh          $zero, 0x3690($at)
    MEM_H(0X3690, ctx->r1) = 0;
L_8005C198:
    // 0x8005C198: lhu         $t7, 0x3692($t7)
    ctx->r15 = MEM_HU(ctx->r15, 0X3692);
    // 0x8005C19C: lui         $t8, 0x802C
    ctx->r24 = S32(0X802C << 16);
    // 0x8005C1A0: beq         $t7, $zero, L_8005C1B8
    if (ctx->r15 == 0) {
        // 0x8005C1A4: nop
    
            goto L_8005C1B8;
    }
    // 0x8005C1A4: nop

    // 0x8005C1A8: jal         0x8005B834
    // 0x8005C1AC: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    func_8005B834(rdram, ctx);
        goto after_0;
    // 0x8005C1AC: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_0:
    // 0x8005C1B0: b           L_8005C220
    // 0x8005C1B4: nop

        goto L_8005C220;
    // 0x8005C1B4: nop

L_8005C1B8:
    // 0x8005C1B8: lbu         $t8, 0x39DD($t8)
    ctx->r24 = MEM_BU(ctx->r24, 0X39DD);
    // 0x8005C1BC: nop

    // 0x8005C1C0: beq         $t8, $zero, L_8005C220
    if (ctx->r24 == 0) {
        // 0x8005C1C4: nop
    
            goto L_8005C220;
    }
    // 0x8005C1C4: nop

    // 0x8005C1C8: jal         0x8005BB08
    // 0x8005C1CC: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    func_8005BB08(rdram, ctx);
        goto after_1;
    // 0x8005C1CC: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_1:
    // 0x8005C1D0: bne         $v0, $zero, L_8005C1F8
    if (ctx->r2 != 0) {
        // 0x8005C1D4: lui         $a0, 0x801B
        ctx->r4 = S32(0X801B << 16);
            goto L_8005C1F8;
    }
    // 0x8005C1D4: lui         $a0, 0x801B
    ctx->r4 = S32(0X801B << 16);
    // 0x8005C1D8: lhu         $a0, 0x3690($a0)
    ctx->r4 = MEM_HU(ctx->r4, 0X3690);
    // 0x8005C1DC: lui         $t9, 0x801B
    ctx->r25 = S32(0X801B << 16);
    // 0x8005C1E0: lhu         $t9, 0x3694($t9)
    ctx->r25 = MEM_HU(ctx->r25, 0X3694);
    // 0x8005C1E4: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x8005C1E8: addiu       $t0, $a0, 0x1
    ctx->r8 = ADD32(ctx->r4, 0X1);
    // 0x8005C1EC: slt         $v0, $t9, $a0
    ctx->r2 = SIGNED(ctx->r25) < SIGNED(ctx->r4) ? 1 : 0;
    // 0x8005C1F0: beq         $v0, $zero, L_8005C220
    if (ctx->r2 == 0) {
        // 0x8005C1F4: sh          $t0, 0x3690($at)
        MEM_H(0X3690, ctx->r1) = ctx->r8;
            goto L_8005C220;
    }
    // 0x8005C1F4: sh          $t0, 0x3690($at)
    MEM_H(0X3690, ctx->r1) = ctx->r8;
L_8005C1F8:
    // 0x8005C1F8: lui         $t1, 0x801B
    ctx->r9 = S32(0X801B << 16);
    // 0x8005C1FC: lhu         $t1, 0x3692($t1)
    ctx->r9 = MEM_HU(ctx->r9, 0X3692);
    // 0x8005C200: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x8005C204: addiu       $t2, $t1, 0x1
    ctx->r10 = ADD32(ctx->r9, 0X1);
    // 0x8005C208: jal         0x80021960
    // 0x8005C20C: sh          $t2, 0x3692($at)
    MEM_H(0X3692, ctx->r1) = ctx->r10;
    func_80021960(rdram, ctx);
        goto after_2;
    // 0x8005C20C: sh          $t2, 0x3692($at)
    MEM_H(0X3692, ctx->r1) = ctx->r10;
    after_2:
    // 0x8005C210: jal         0x802719DC
    // 0x8005C214: addiu       $a0, $zero, 0xA
    ctx->r4 = ADD32(0, 0XA);
    LOOKUP_FUNC(0x802719DC)(rdram, ctx);
        goto after_3;
    // 0x8005C214: addiu       $a0, $zero, 0xA
    ctx->r4 = ADD32(0, 0XA);
    after_3:
    // 0x8005C218: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x8005C21C: sh          $zero, -0x3A06($at)
    MEM_H(-0X3A06, ctx->r1) = 0;
L_8005C220:
    // 0x8005C220: lui         $v0, 0x801B
    ctx->r2 = S32(0X801B << 16);
    // 0x8005C224: addiu       $v0, $v0, -0x3A06
    ctx->r2 = ADD32(ctx->r2, -0X3A06);
    // 0x8005C228: lhu         $t3, 0x0($v0)
    ctx->r11 = MEM_HU(ctx->r2, 0X0);
    // 0x8005C22C: nop

    // 0x8005C230: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x8005C234: b           L_8005C5BC
    // 0x8005C238: sh          $t4, 0x0($v0)
    MEM_H(0X0, ctx->r2) = ctx->r12;
        goto L_8005C5BC;
    // 0x8005C238: sh          $t4, 0x0($v0)
    MEM_H(0X0, ctx->r2) = ctx->r12;
L_8005C23C:
    // 0x8005C23C: lui         $v1, 0x801B
    ctx->r3 = S32(0X801B << 16);
    // 0x8005C240: addiu       $v1, $v1, -0x3A06
    ctx->r3 = ADD32(ctx->r3, -0X3A06);
    // 0x8005C244: lhu         $v0, 0x0($v1)
    ctx->r2 = MEM_HU(ctx->r3, 0X0);
    // 0x8005C248: nop

    // 0x8005C24C: bne         $v0, $zero, L_8005C25C
    if (ctx->r2 != 0) {
        // 0x8005C250: addiu       $t5, $v0, 0x1
        ctx->r13 = ADD32(ctx->r2, 0X1);
            goto L_8005C25C;
    }
    // 0x8005C250: addiu       $t5, $v0, 0x1
    ctx->r13 = ADD32(ctx->r2, 0X1);
    // 0x8005C254: b           L_8005C5BC
    // 0x8005C258: sh          $t5, 0x0($v1)
    MEM_H(0X0, ctx->r3) = ctx->r13;
        goto L_8005C5BC;
    // 0x8005C258: sh          $t5, 0x0($v1)
    MEM_H(0X0, ctx->r3) = ctx->r13;
L_8005C25C:
    // 0x8005C25C: addiu       $t6, $v0, 0x1
    ctx->r14 = ADD32(ctx->r2, 0X1);
    // 0x8005C260: sh          $t6, 0x0($v1)
    MEM_H(0X0, ctx->r3) = ctx->r14;
    // 0x8005C264: jal         0x8005B834
    // 0x8005C268: addiu       $a0, $zero, 0x1E
    ctx->r4 = ADD32(0, 0X1E);
    func_8005B834(rdram, ctx);
        goto after_4;
    // 0x8005C268: addiu       $a0, $zero, 0x1E
    ctx->r4 = ADD32(0, 0X1E);
    after_4:
    // 0x8005C26C: b           L_8005C5C0
    // 0x8005C270: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_8005C5C0;
    // 0x8005C270: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8005C274:
    // 0x8005C274: lui         $v0, 0x801B
    ctx->r2 = S32(0X801B << 16);
    // 0x8005C278: lhu         $v0, -0x3A06($v0)
    ctx->r2 = MEM_HU(ctx->r2, -0X3A06);
    // 0x8005C27C: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x8005C280: bne         $v0, $zero, L_8005C2B8
    if (ctx->r2 != 0) {
        // 0x8005C284: addiu       $at, $zero, 0x78
        ctx->r1 = ADD32(0, 0X78);
            goto L_8005C2B8;
    }
    // 0x8005C284: addiu       $at, $zero, 0x78
    ctx->r1 = ADD32(0, 0X78);
    // 0x8005C288: addiu       $a0, $a0, 0xB7E
    ctx->r4 = ADD32(ctx->r4, 0XB7E);
    // 0x8005C28C: lhu         $v1, 0x0($a0)
    ctx->r3 = MEM_HU(ctx->r4, 0X0);
    // 0x8005C290: addiu       $t9, $v0, 0x1
    ctx->r25 = ADD32(ctx->r2, 0X1);
    // 0x8005C294: andi        $t7, $v1, 0x109
    ctx->r15 = ctx->r3 & 0X109;
    // 0x8005C298: bne         $t7, $zero, L_8005C5BC
    if (ctx->r15 != 0) {
        // 0x8005C29C: ori         $t8, $v1, 0x1
        ctx->r24 = ctx->r3 | 0X1;
            goto L_8005C5BC;
    }
    // 0x8005C29C: ori         $t8, $v1, 0x1
    ctx->r24 = ctx->r3 | 0X1;
    // 0x8005C2A0: sh          $t8, 0x0($a0)
    MEM_H(0X0, ctx->r4) = ctx->r24;
    // 0x8005C2A4: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x8005C2A8: jal         0x8005AD18
    // 0x8005C2AC: sh          $t9, -0x3A06($at)
    MEM_H(-0X3A06, ctx->r1) = ctx->r25;
    func_8005AD18(rdram, ctx);
        goto after_5;
    // 0x8005C2AC: sh          $t9, -0x3A06($at)
    MEM_H(-0X3A06, ctx->r1) = ctx->r25;
    after_5:
    // 0x8005C2B0: b           L_8005C5C0
    // 0x8005C2B4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_8005C5C0;
    // 0x8005C2B4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8005C2B8:
    // 0x8005C2B8: bne         $v0, $at, L_8005C2E0
    if (ctx->r2 != ctx->r1) {
        // 0x8005C2BC: andi        $t0, $a1, 0x40
        ctx->r8 = ctx->r5 & 0X40;
            goto L_8005C2E0;
    }
    // 0x8005C2BC: andi        $t0, $a1, 0x40
    ctx->r8 = ctx->r5 & 0X40;
    // 0x8005C2C0: beq         $t0, $zero, L_8005C2D8
    if (ctx->r8 == 0) {
        // 0x8005C2C4: nop
    
            goto L_8005C2D8;
    }
    // 0x8005C2C4: nop

    // 0x8005C2C8: jal         0x802719DC
    // 0x8005C2CC: addiu       $a0, $zero, 0xA
    ctx->r4 = ADD32(0, 0XA);
    LOOKUP_FUNC(0x802719DC)(rdram, ctx);
        goto after_6;
    // 0x8005C2CC: addiu       $a0, $zero, 0xA
    ctx->r4 = ADD32(0, 0XA);
    after_6:
    // 0x8005C2D0: b           L_8005C2E0
    // 0x8005C2D4: nop

        goto L_8005C2E0;
    // 0x8005C2D4: nop

L_8005C2D8:
    // 0x8005C2D8: jal         0x802719DC
    // 0x8005C2DC: addiu       $a0, $zero, 0xA
    ctx->r4 = ADD32(0, 0XA);
    LOOKUP_FUNC(0x802719DC)(rdram, ctx);
        goto after_7;
    // 0x8005C2DC: addiu       $a0, $zero, 0xA
    ctx->r4 = ADD32(0, 0XA);
    after_7:
L_8005C2E0:
    // 0x8005C2E0: jal         0x8005B834
    // 0x8005C2E4: addiu       $a0, $zero, 0x78
    ctx->r4 = ADD32(0, 0X78);
    func_8005B834(rdram, ctx);
        goto after_8;
    // 0x8005C2E4: addiu       $a0, $zero, 0x78
    ctx->r4 = ADD32(0, 0X78);
    after_8:
    // 0x8005C2E8: lui         $t1, 0x801B
    ctx->r9 = S32(0X801B << 16);
    // 0x8005C2EC: lhu         $t1, -0x3A06($t1)
    ctx->r9 = MEM_HU(ctx->r9, -0X3A06);
    // 0x8005C2F0: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x8005C2F4: addiu       $t2, $t1, 0x1
    ctx->r10 = ADD32(ctx->r9, 0X1);
    // 0x8005C2F8: b           L_8005C5BC
    // 0x8005C2FC: sh          $t2, -0x3A06($at)
    MEM_H(-0X3A06, ctx->r1) = ctx->r10;
        goto L_8005C5BC;
    // 0x8005C2FC: sh          $t2, -0x3A06($at)
    MEM_H(-0X3A06, ctx->r1) = ctx->r10;
L_8005C300:
    // 0x8005C300: lui         $v0, 0x801B
    ctx->r2 = S32(0X801B << 16);
    // 0x8005C304: lhu         $v0, -0x3A06($v0)
    ctx->r2 = MEM_HU(ctx->r2, -0X3A06);
    // 0x8005C308: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x8005C30C: bne         $v0, $zero, L_8005C3C0
    if (ctx->r2 != 0) {
        // 0x8005C310: addiu       $t4, $v0, 0x1
        ctx->r12 = ADD32(ctx->r2, 0X1);
            goto L_8005C3C0;
    }
    // 0x8005C310: addiu       $t4, $v0, 0x1
    ctx->r12 = ADD32(ctx->r2, 0X1);
    // 0x8005C314: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x8005C318: addiu       $a0, $a0, 0xB7E
    ctx->r4 = ADD32(ctx->r4, 0XB7E);
    // 0x8005C31C: lhu         $v1, 0x0($a0)
    ctx->r3 = MEM_HU(ctx->r4, 0X0);
    // 0x8005C320: andi        $t4, $a1, 0x40
    ctx->r12 = ctx->r5 & 0X40;
    // 0x8005C324: andi        $t3, $v1, 0xF
    ctx->r11 = ctx->r3 & 0XF;
    // 0x8005C328: bne         $t3, $zero, L_8005C5C0
    if (ctx->r11 != 0) {
        // 0x8005C32C: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_8005C5C0;
    }
    // 0x8005C32C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8005C330: beq         $t4, $zero, L_8005C5BC
    if (ctx->r12 == 0) {
        // 0x8005C334: ori         $t5, $v1, 0x1
        ctx->r13 = ctx->r3 | 0X1;
            goto L_8005C5BC;
    }
    // 0x8005C334: ori         $t5, $v1, 0x1
    ctx->r13 = ctx->r3 | 0X1;
    // 0x8005C338: andi        $t6, $a1, 0x1000
    ctx->r14 = ctx->r5 & 0X1000;
    // 0x8005C33C: beq         $t6, $zero, L_8005C36C
    if (ctx->r14 == 0) {
        // 0x8005C340: sh          $t5, 0x0($a0)
        MEM_H(0X0, ctx->r4) = ctx->r13;
            goto L_8005C36C;
    }
    // 0x8005C340: sh          $t5, 0x0($a0)
    MEM_H(0X0, ctx->r4) = ctx->r13;
    // 0x8005C344: jal         0x80077C64
    // 0x8005C348: nop

    func_80077C64(rdram, ctx);
        goto after_9;
    // 0x8005C348: nop

    after_9:
    // 0x8005C34C: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x8005C350: lw          $a0, 0xB30($a0)
    ctx->r4 = MEM_W(ctx->r4, 0XB30);
    // 0x8005C354: jal         0x80077CB4
    // 0x8005C358: nop

    func_80077CB4(rdram, ctx);
        goto after_10;
    // 0x8005C358: nop

    after_10:
    // 0x8005C35C: addiu       $t7, $zero, 0xF0
    ctx->r15 = ADD32(0, 0XF0);
    // 0x8005C360: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x8005C364: b           L_8005C3A0
    // 0x8005C368: sh          $t7, 0x3694($at)
    MEM_H(0X3694, ctx->r1) = ctx->r15;
        goto L_8005C3A0;
    // 0x8005C368: sh          $t7, 0x3694($at)
    MEM_H(0X3694, ctx->r1) = ctx->r15;
L_8005C36C:
    // 0x8005C36C: jal         0x80077EC8
    // 0x8005C370: nop

    func_80077EC8(rdram, ctx);
        goto after_11;
    // 0x8005C370: nop

    after_11:
    // 0x8005C374: lui         $t8, 0x801B
    ctx->r24 = S32(0X801B << 16);
    // 0x8005C378: lhu         $t8, 0x3698($t8)
    ctx->r24 = MEM_HU(ctx->r24, 0X3698);
    // 0x8005C37C: addiu       $t1, $zero, 0x5A
    ctx->r9 = ADD32(0, 0X5A);
    // 0x8005C380: andi        $t9, $t8, 0x2
    ctx->r25 = ctx->r24 & 0X2;
    // 0x8005C384: beq         $t9, $zero, L_8005C39C
    if (ctx->r25 == 0) {
        // 0x8005C388: lui         $at, 0x801B
        ctx->r1 = S32(0X801B << 16);
            goto L_8005C39C;
    }
    // 0x8005C388: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x8005C38C: addiu       $t0, $zero, 0xB4
    ctx->r8 = ADD32(0, 0XB4);
    // 0x8005C390: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x8005C394: b           L_8005C3A0
    // 0x8005C398: sh          $t0, 0x3694($at)
    MEM_H(0X3694, ctx->r1) = ctx->r8;
        goto L_8005C3A0;
    // 0x8005C398: sh          $t0, 0x3694($at)
    MEM_H(0X3694, ctx->r1) = ctx->r8;
L_8005C39C:
    // 0x8005C39C: sh          $t1, 0x3694($at)
    MEM_H(0X3694, ctx->r1) = ctx->r9;
L_8005C3A0:
    // 0x8005C3A0: lui         $t2, 0x801B
    ctx->r10 = S32(0X801B << 16);
    // 0x8005C3A4: lhu         $t2, -0x3A06($t2)
    ctx->r10 = MEM_HU(ctx->r10, -0X3A06);
    // 0x8005C3A8: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x8005C3AC: addiu       $t3, $t2, 0x1
    ctx->r11 = ADD32(ctx->r10, 0X1);
    // 0x8005C3B0: jal         0x8005AD18
    // 0x8005C3B4: sh          $t3, -0x3A06($at)
    MEM_H(-0X3A06, ctx->r1) = ctx->r11;
    func_8005AD18(rdram, ctx);
        goto after_12;
    // 0x8005C3B4: sh          $t3, -0x3A06($at)
    MEM_H(-0X3A06, ctx->r1) = ctx->r11;
    after_12:
    // 0x8005C3B8: b           L_8005C5C0
    // 0x8005C3BC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_8005C5C0;
    // 0x8005C3BC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8005C3C0:
    // 0x8005C3C0: sh          $t4, -0x3A06($at)
    MEM_H(-0X3A06, ctx->r1) = ctx->r12;
    // 0x8005C3C4: lui         $t5, 0x801B
    ctx->r13 = S32(0X801B << 16);
    // 0x8005C3C8: lui         $t6, 0x801B
    ctx->r14 = S32(0X801B << 16);
    // 0x8005C3CC: lhu         $t6, -0x3A06($t6)
    ctx->r14 = MEM_HU(ctx->r14, -0X3A06);
    // 0x8005C3D0: lhu         $t5, 0x3694($t5)
    ctx->r13 = MEM_HU(ctx->r13, 0X3694);
    // 0x8005C3D4: nop

    // 0x8005C3D8: bne         $t5, $t6, L_8005C3E8
    if (ctx->r13 != ctx->r14) {
        // 0x8005C3DC: nop
    
            goto L_8005C3E8;
    }
    // 0x8005C3DC: nop

    // 0x8005C3E0: jal         0x802719DC
    // 0x8005C3E4: addiu       $a0, $zero, 0xA
    ctx->r4 = ADD32(0, 0XA);
    LOOKUP_FUNC(0x802719DC)(rdram, ctx);
        goto after_13;
    // 0x8005C3E4: addiu       $a0, $zero, 0xA
    ctx->r4 = ADD32(0, 0XA);
    after_13:
L_8005C3E8:
    // 0x8005C3E8: lui         $a0, 0x801B
    ctx->r4 = S32(0X801B << 16);
    // 0x8005C3EC: lhu         $a0, 0x3694($a0)
    ctx->r4 = MEM_HU(ctx->r4, 0X3694);
    // 0x8005C3F0: jal         0x8005B834
    // 0x8005C3F4: nop

    func_8005B834(rdram, ctx);
        goto after_14;
    // 0x8005C3F4: nop

    after_14:
    // 0x8005C3F8: b           L_8005C5C0
    // 0x8005C3FC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_8005C5C0;
    // 0x8005C3FC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8005C400:
    // 0x8005C400: lui         $t7, 0x801B
    ctx->r15 = S32(0X801B << 16);
    // 0x8005C404: lhu         $t7, -0x3A06($t7)
    ctx->r15 = MEM_HU(ctx->r15, -0X3A06);
    // 0x8005C408: lui         $t8, 0x801B
    ctx->r24 = S32(0X801B << 16);
    // 0x8005C40C: bne         $t7, $zero, L_8005C438
    if (ctx->r15 != 0) {
        // 0x8005C410: nop
    
            goto L_8005C438;
    }
    // 0x8005C410: nop

    // 0x8005C414: jal         0x8005AD18
    // 0x8005C418: nop

    func_8005AD18(rdram, ctx);
        goto after_15;
    // 0x8005C418: nop

    after_15:
    // 0x8005C41C: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x8005C420: sh          $zero, 0x3692($at)
    MEM_H(0X3692, ctx->r1) = 0;
    // 0x8005C424: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x8005C428: sh          $zero, 0x369A($at)
    MEM_H(0X369A, ctx->r1) = 0;
    // 0x8005C42C: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x8005C430: b           L_8005C5A8
    // 0x8005C434: sh          $zero, 0x3690($at)
    MEM_H(0X3690, ctx->r1) = 0;
        goto L_8005C5A8;
    // 0x8005C434: sh          $zero, 0x3690($at)
    MEM_H(0X3690, ctx->r1) = 0;
L_8005C438:
    // 0x8005C438: lhu         $t8, 0x3692($t8)
    ctx->r24 = MEM_HU(ctx->r24, 0X3692);
    // 0x8005C43C: lui         $a0, 0x801B
    ctx->r4 = S32(0X801B << 16);
    // 0x8005C440: beq         $t8, $zero, L_8005C548
    if (ctx->r24 == 0) {
        // 0x8005C444: nop
    
            goto L_8005C548;
    }
    // 0x8005C444: nop

    // 0x8005C448: lhu         $a0, 0x3690($a0)
    ctx->r4 = MEM_HU(ctx->r4, 0X3690);
    // 0x8005C44C: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x8005C450: xori        $v0, $a0, 0x1E
    ctx->r2 = ctx->r4 ^ 0X1E;
    // 0x8005C454: addiu       $t9, $a0, 0x1
    ctx->r25 = ADD32(ctx->r4, 0X1);
    // 0x8005C458: bne         $v0, $zero, L_8005C5A8
    if (ctx->r2 != 0) {
        // 0x8005C45C: sh          $t9, 0x3690($at)
        MEM_H(0X3690, ctx->r1) = ctx->r25;
            goto L_8005C5A8;
    }
    // 0x8005C45C: sh          $t9, 0x3690($at)
    MEM_H(0X3690, ctx->r1) = ctx->r25;
    // 0x8005C460: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x8005C464: addiu       $a0, $a0, 0xB7E
    ctx->r4 = ADD32(ctx->r4, 0XB7E);
    // 0x8005C468: lhu         $t0, 0x0($a0)
    ctx->r8 = MEM_HU(ctx->r4, 0X0);
    // 0x8005C46C: lui         $t2, 0x8012
    ctx->r10 = S32(0X8012 << 16);
    // 0x8005C470: andi        $t1, $t0, 0xFFDF
    ctx->r9 = ctx->r8 & 0XFFDF;
    // 0x8005C474: sh          $t1, 0x0($a0)
    MEM_H(0X0, ctx->r4) = ctx->r9;
    // 0x8005C478: lb          $t2, -0x3093($t2)
    ctx->r10 = MEM_B(ctx->r10, -0X3093);
    // 0x8005C47C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x8005C480: bne         $t2, $zero, L_8005C4B4
    if (ctx->r10 != 0) {
        // 0x8005C484: lui         $t3, 0x8012
        ctx->r11 = S32(0X8012 << 16);
            goto L_8005C4B4;
    }
    // 0x8005C484: lui         $t3, 0x8012
    ctx->r11 = S32(0X8012 << 16);
    // 0x8005C488: lhu         $t3, 0xB74($t3)
    ctx->r11 = MEM_HU(ctx->r11, 0XB74);
    // 0x8005C48C: nop

    // 0x8005C490: slti        $at, $t3, 0x2
    ctx->r1 = SIGNED(ctx->r11) < 0X2 ? 1 : 0;
    // 0x8005C494: bne         $at, $zero, L_8005C4B4
    if (ctx->r1 != 0) {
        // 0x8005C498: nop
    
            goto L_8005C4B4;
    }
    // 0x8005C498: nop

    // 0x8005C49C: lhu         $t4, 0xA($v1)
    ctx->r12 = MEM_HU(ctx->r3, 0XA);
    // 0x8005C4A0: lhu         $t5, 0xA9E($v1)
    ctx->r13 = MEM_HU(ctx->r3, 0XA9E);
    // 0x8005C4A4: nop

    // 0x8005C4A8: beq         $t4, $t5, L_8005C4B4
    if (ctx->r12 == ctx->r13) {
        // 0x8005C4AC: nop
    
            goto L_8005C4B4;
    }
    // 0x8005C4AC: nop

    // 0x8005C4B0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_8005C4B4:
    // 0x8005C4B4: lhu         $t6, 0x0($a0)
    ctx->r14 = MEM_HU(ctx->r4, 0X0);
    // 0x8005C4B8: nop

    // 0x8005C4BC: andi        $t7, $t6, 0x800
    ctx->r15 = ctx->r14 & 0X800;
    // 0x8005C4C0: bne         $t7, $zero, L_8005C4E0
    if (ctx->r15 != 0) {
        // 0x8005C4C4: nop
    
            goto L_8005C4E0;
    }
    // 0x8005C4C4: nop

    // 0x8005C4C8: jal         0x80073F40
    // 0x8005C4CC: nop

    func_80073F40(rdram, ctx);
        goto after_16;
    // 0x8005C4CC: nop

    after_16:
    // 0x8005C4D0: jal         0x8007ADA8
    // 0x8005C4D4: nop

    func_8007ADA8(rdram, ctx);
        goto after_17;
    // 0x8005C4D4: nop

    after_17:
    // 0x8005C4D8: b           L_8005C5A8
    // 0x8005C4DC: nop

        goto L_8005C5A8;
    // 0x8005C4DC: nop

L_8005C4E0:
    // 0x8005C4E0: beq         $v0, $zero, L_8005C510
    if (ctx->r2 == 0) {
        // 0x8005C4E4: lui         $v0, 0x8011
        ctx->r2 = S32(0X8011 << 16);
            goto L_8005C510;
    }
    // 0x8005C4E4: lui         $v0, 0x8011
    ctx->r2 = S32(0X8011 << 16);
    // 0x8005C4E8: addiu       $v0, $v0, -0x3770
    ctx->r2 = ADD32(ctx->r2, -0X3770);
    // 0x8005C4EC: lbu         $t8, 0x754($v0)
    ctx->r24 = MEM_BU(ctx->r2, 0X754);
    // 0x8005C4F0: nop

    // 0x8005C4F4: andi        $t9, $t8, 0xFC
    ctx->r25 = ctx->r24 & 0XFC;
    // 0x8005C4F8: jal         0x800603F0
    // 0x8005C4FC: sb          $t9, 0x754($v0)
    MEM_B(0X754, ctx->r2) = ctx->r25;
    func_800603F0(rdram, ctx);
        goto after_18;
    // 0x8005C4FC: sb          $t9, 0x754($v0)
    MEM_B(0X754, ctx->r2) = ctx->r25;
    after_18:
    // 0x8005C500: jal         0x80036C78
    // 0x8005C504: nop

    func_80036C78(rdram, ctx);
        goto after_19;
    // 0x8005C504: nop

    after_19:
    // 0x8005C508: b           L_8005C5A8
    // 0x8005C50C: nop

        goto L_8005C5A8;
    // 0x8005C50C: nop

L_8005C510:
    // 0x8005C510: jal         0x802719DC
    // 0x8005C514: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    LOOKUP_FUNC(0x802719DC)(rdram, ctx);
        goto after_20;
    // 0x8005C514: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_20:
    // 0x8005C518: lui         $v1, 0x8012
    ctx->r3 = S32(0X8012 << 16);
    // 0x8005C51C: addiu       $v1, $v1, -0x2CF0
    ctx->r3 = ADD32(ctx->r3, -0X2CF0);
    // 0x8005C520: lhu         $t0, 0x8($v1)
    ctx->r8 = MEM_HU(ctx->r3, 0X8);
    // 0x8005C524: lui         $v0, 0x8011
    ctx->r2 = S32(0X8011 << 16);
    // 0x8005C528: addiu       $v0, $v0, -0x3770
    ctx->r2 = ADD32(ctx->r2, -0X3770);
    // 0x8005C52C: ori         $t1, $t0, 0x4000
    ctx->r9 = ctx->r8 | 0X4000;
    // 0x8005C530: sh          $t1, 0x8($v1)
    MEM_H(0X8, ctx->r3) = ctx->r9;
    // 0x8005C534: sb          $zero, 0x7D6($v0)
    MEM_B(0X7D6, ctx->r2) = 0;
    // 0x8005C538: jal         0x8001B854
    // 0x8005C53C: addiu       $a0, $zero, 0x3
    ctx->r4 = ADD32(0, 0X3);
    func_8001B854(rdram, ctx);
        goto after_21;
    // 0x8005C53C: addiu       $a0, $zero, 0x3
    ctx->r4 = ADD32(0, 0X3);
    after_21:
    // 0x8005C540: b           L_8005C5A8
    // 0x8005C544: nop

        goto L_8005C5A8;
    // 0x8005C544: nop

L_8005C548:
    // 0x8005C548: jal         0x8005BB08
    // 0x8005C54C: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    func_8005BB08(rdram, ctx);
        goto after_22;
    // 0x8005C54C: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_22:
    // 0x8005C550: beq         $v0, $zero, L_8005C5A8
    if (ctx->r2 == 0) {
        // 0x8005C554: lui         $t2, 0x801B
        ctx->r10 = S32(0X801B << 16);
            goto L_8005C5A8;
    }
    // 0x8005C554: lui         $t2, 0x801B
    ctx->r10 = S32(0X801B << 16);
    // 0x8005C558: lhu         $t2, 0x3692($t2)
    ctx->r10 = MEM_HU(ctx->r10, 0X3692);
    // 0x8005C55C: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x8005C560: addiu       $t3, $t2, 0x1
    ctx->r11 = ADD32(ctx->r10, 0X1);
    // 0x8005C564: jal         0x80021960
    // 0x8005C568: sh          $t3, 0x3692($at)
    MEM_H(0X3692, ctx->r1) = ctx->r11;
    func_80021960(rdram, ctx);
        goto after_23;
    // 0x8005C568: sh          $t3, 0x3692($at)
    MEM_H(0X3692, ctx->r1) = ctx->r11;
    after_23:
    // 0x8005C56C: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x8005C570: addiu       $a0, $a0, 0xB7E
    ctx->r4 = ADD32(ctx->r4, 0XB7E);
    // 0x8005C574: lhu         $t4, 0x0($a0)
    ctx->r12 = MEM_HU(ctx->r4, 0X0);
    // 0x8005C578: nop

    // 0x8005C57C: ori         $t6, $t4, 0x1
    ctx->r14 = ctx->r12 | 0X1;
    // 0x8005C580: andi        $t7, $t6, 0x800
    ctx->r15 = ctx->r14 & 0X800;
    // 0x8005C584: beq         $t7, $zero, L_8005C5A8
    if (ctx->r15 == 0) {
        // 0x8005C588: sh          $t6, 0x0($a0)
        MEM_H(0X0, ctx->r4) = ctx->r14;
            goto L_8005C5A8;
    }
    // 0x8005C588: sh          $t6, 0x0($a0)
    MEM_H(0X0, ctx->r4) = ctx->r14;
    // 0x8005C58C: jal         0x802A13CC
    // 0x8005C590: nop

    LOOKUP_FUNC(0x802A13CC)(rdram, ctx);
        goto after_24;
    // 0x8005C590: nop

    after_24:
    // 0x8005C594: jal         0x802719DC
    // 0x8005C598: addiu       $a0, $zero, 0xA
    ctx->r4 = ADD32(0, 0XA);
    LOOKUP_FUNC(0x802719DC)(rdram, ctx);
        goto after_25;
    // 0x8005C598: addiu       $a0, $zero, 0xA
    ctx->r4 = ADD32(0, 0XA);
    after_25:
    // 0x8005C59C: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x8005C5A0: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x8005C5A4: sb          $t8, 0x3AD0($at)
    MEM_B(0X3AD0, ctx->r1) = ctx->r24;
L_8005C5A8:
    // 0x8005C5A8: lui         $t9, 0x801B
    ctx->r25 = S32(0X801B << 16);
    // 0x8005C5AC: lhu         $t9, -0x3A06($t9)
    ctx->r25 = MEM_HU(ctx->r25, -0X3A06);
    // 0x8005C5B0: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x8005C5B4: addiu       $t0, $t9, 0x1
    ctx->r8 = ADD32(ctx->r25, 0X1);
    // 0x8005C5B8: sh          $t0, -0x3A06($at)
    MEM_H(-0X3A06, ctx->r1) = ctx->r8;
L_8005C5BC:
    // 0x8005C5BC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8005C5C0:
    // 0x8005C5C0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8005C5C4: jr          $ra
    // 0x8005C5C8: nop

    return;
    // 0x8005C5C8: nop

;}
RECOMP_FUNC void func_8005C5CC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8005C5CC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8005C5D0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8005C5D4: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8005C5D8: jal         0x80059898
    // 0x8005C5DC: addiu       $a0, $zero, 0x384
    ctx->r4 = ADD32(0, 0X384);
    func_80059898(rdram, ctx);
        goto after_0;
    // 0x8005C5DC: addiu       $a0, $zero, 0x384
    ctx->r4 = ADD32(0, 0X384);
    after_0:
    // 0x8005C5E0: lw          $t7, 0x18($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X18);
    // 0x8005C5E4: addiu       $t6, $v0, 0x384
    ctx->r14 = ADD32(ctx->r2, 0X384);
    // 0x8005C5E8: sh          $t6, 0x974($t7)
    MEM_H(0X974, ctx->r15) = ctx->r14;
    // 0x8005C5EC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8005C5F0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8005C5F4: jr          $ra
    // 0x8005C5F8: nop

    return;
    // 0x8005C5F8: nop

;}
RECOMP_FUNC void func_8005C5FC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8005C5FC: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x8005C600: sw          $s4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r20;
    // 0x8005C604: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x8005C608: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x8005C60C: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8005C610: sw          $fp, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r30;
    // 0x8005C614: sw          $s7, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r23;
    // 0x8005C618: sw          $s6, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r22;
    // 0x8005C61C: sw          $s5, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r21;
    // 0x8005C620: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x8005C624: lui         $s0, 0x8012
    ctx->r16 = S32(0X8012 << 16);
    // 0x8005C628: lui         $s1, 0x800B
    ctx->r17 = S32(0X800B << 16);
    // 0x8005C62C: lui         $s3, 0x8012
    ctx->r19 = S32(0X8012 << 16);
    // 0x8005C630: lui         $s4, 0x8012
    ctx->r20 = S32(0X8012 << 16);
    // 0x8005C634: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x8005C638: addiu       $s4, $s4, -0x2CF0
    ctx->r20 = ADD32(ctx->r20, -0X2CF0);
    // 0x8005C63C: addiu       $s3, $s3, 0xB72
    ctx->r19 = ADD32(ctx->r19, 0XB72);
    // 0x8005C640: addiu       $s1, $s1, -0x2CA0
    ctx->r17 = ADD32(ctx->r17, -0X2CA0);
    // 0x8005C644: addiu       $s0, $s0, -0x2CF0
    ctx->r16 = ADD32(ctx->r16, -0X2CF0);
    // 0x8005C648: addiu       $s2, $zero, 0x8
    ctx->r18 = ADD32(0, 0X8);
    // 0x8005C64C: addiu       $s5, $zero, 0xA
    ctx->r21 = ADD32(0, 0XA);
    // 0x8005C650: addiu       $s6, $zero, -0x1FD
    ctx->r22 = ADD32(0, -0X1FD);
    // 0x8005C654: addiu       $s7, $zero, -0x1AD
    ctx->r23 = ADD32(0, -0X1AD);
    // 0x8005C658: addiu       $fp, $zero, 0x2
    ctx->r30 = ADD32(0, 0X2);
L_8005C65C:
    // 0x8005C65C: lhu         $v0, 0x0($s3)
    ctx->r2 = MEM_HU(ctx->r19, 0X0);
    // 0x8005C660: beq         $s0, $s4, L_8005C680
    if (ctx->r16 == ctx->r20) {
        // 0x8005C664: sll         $t9, $v0, 2
        ctx->r25 = S32(ctx->r2 << 2);
            goto L_8005C680;
    }
    // 0x8005C664: sll         $t9, $v0, 2
    ctx->r25 = S32(ctx->r2 << 2);
    // 0x8005C668: multu       $v0, $s5
    result = U64(U32(ctx->r2)) * U64(U32(ctx->r21)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8005C66C: mflo        $t6
    ctx->r14 = lo;
    // 0x8005C670: addu        $t7, $s1, $t6
    ctx->r15 = ADD32(ctx->r17, ctx->r14);
    // 0x8005C674: addiu       $t8, $t7, 0x5A
    ctx->r24 = ADD32(ctx->r15, 0X5A);
    // 0x8005C678: b           L_8005C690
    // 0x8005C67C: sw          $t8, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r24;
        goto L_8005C690;
    // 0x8005C67C: sw          $t8, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r24;
L_8005C680:
    // 0x8005C680: addu        $t9, $t9, $v0
    ctx->r25 = ADD32(ctx->r25, ctx->r2);
    // 0x8005C684: sll         $t9, $t9, 1
    ctx->r25 = S32(ctx->r25 << 1);
    // 0x8005C688: addu        $t0, $s1, $t9
    ctx->r8 = ADD32(ctx->r17, ctx->r25);
    // 0x8005C68C: sw          $t0, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r8;
L_8005C690:
    // 0x8005C690: lhu         $t1, 0x8($s0)
    ctx->r9 = MEM_HU(ctx->r16, 0X8);
    // 0x8005C694: addiu       $t3, $zero, 0x1FD
    ctx->r11 = ADD32(0, 0X1FD);
    // 0x8005C698: andi        $t2, $t1, 0x1
    ctx->r10 = ctx->r9 & 0X1;
    // 0x8005C69C: beq         $t2, $zero, L_8005C6AC
    if (ctx->r10 == 0) {
        // 0x8005C6A0: addiu       $t6, $zero, 0x1AD
        ctx->r14 = ADD32(0, 0X1AD);
            goto L_8005C6AC;
    }
    // 0x8005C6A0: addiu       $t6, $zero, 0x1AD
    ctx->r14 = ADD32(0, 0X1AD);
    // 0x8005C6A4: b           L_8005C6B0
    // 0x8005C6A8: sh          $s6, 0x8B8($s0)
    MEM_H(0X8B8, ctx->r16) = ctx->r22;
        goto L_8005C6B0;
    // 0x8005C6A8: sh          $s6, 0x8B8($s0)
    MEM_H(0X8B8, ctx->r16) = ctx->r22;
L_8005C6AC:
    // 0x8005C6AC: sh          $t3, 0x8B8($s0)
    MEM_H(0X8B8, ctx->r16) = ctx->r11;
L_8005C6B0:
    // 0x8005C6B0: lhu         $t4, 0x8($s0)
    ctx->r12 = MEM_HU(ctx->r16, 0X8);
    // 0x8005C6B4: nop

    // 0x8005C6B8: andi        $t5, $t4, 0x1
    ctx->r13 = ctx->r12 & 0X1;
    // 0x8005C6BC: beq         $t5, $zero, L_8005C6CC
    if (ctx->r13 == 0) {
        // 0x8005C6C0: nop
    
            goto L_8005C6CC;
    }
    // 0x8005C6C0: nop

    // 0x8005C6C4: b           L_8005C6D0
    // 0x8005C6C8: sh          $s7, 0x8BA($s0)
    MEM_H(0X8BA, ctx->r16) = ctx->r23;
        goto L_8005C6D0;
    // 0x8005C6C8: sh          $s7, 0x8BA($s0)
    MEM_H(0X8BA, ctx->r16) = ctx->r23;
L_8005C6CC:
    // 0x8005C6CC: sh          $t6, 0x8BA($s0)
    MEM_H(0X8BA, ctx->r16) = ctx->r14;
L_8005C6D0:
    // 0x8005C6D0: jal         0x80059868
    // 0x8005C6D4: nop

    func_80059868(rdram, ctx);
        goto after_0;
    // 0x8005C6D4: nop

    after_0:
    // 0x8005C6D8: lhu         $t7, 0x6($s0)
    ctx->r15 = MEM_HU(ctx->r16, 0X6);
    // 0x8005C6DC: sh          $v0, 0x92C($s0)
    MEM_H(0X92C, ctx->r16) = ctx->r2;
    // 0x8005C6E0: sh          $zero, 0xE($s0)
    MEM_H(0XE, ctx->r16) = 0;
    // 0x8005C6E4: sh          $zero, 0x8B6($s0)
    MEM_H(0X8B6, ctx->r16) = 0;
    // 0x8005C6E8: sb          $zero, 0x8DC($s0)
    MEM_B(0X8DC, ctx->r16) = 0;
    // 0x8005C6EC: sb          $zero, 0x8DD($s0)
    MEM_B(0X8DD, ctx->r16) = 0;
    // 0x8005C6F0: sb          $zero, 0x8DE($s0)
    MEM_B(0X8DE, ctx->r16) = 0;
    // 0x8005C6F4: sb          $zero, 0x8E0($s0)
    MEM_B(0X8E0, ctx->r16) = 0;
    // 0x8005C6F8: sb          $zero, 0x8DF($s0)
    MEM_B(0X8DF, ctx->r16) = 0;
    // 0x8005C6FC: sb          $zero, 0x90E($s0)
    MEM_B(0X90E, ctx->r16) = 0;
    // 0x8005C700: sb          $zero, 0x90F($s0)
    MEM_B(0X90F, ctx->r16) = 0;
    // 0x8005C704: sb          $zero, 0x910($s0)
    MEM_B(0X910, ctx->r16) = 0;
    // 0x8005C708: sb          $zero, 0x911($s0)
    MEM_B(0X911, ctx->r16) = 0;
    // 0x8005C70C: sh          $zero, 0x10($s0)
    MEM_H(0X10, ctx->r16) = 0;
    // 0x8005C710: sw          $zero, 0x918($s0)
    MEM_W(0X918, ctx->r16) = 0;
    // 0x8005C714: sw          $zero, 0x91C($s0)
    MEM_W(0X91C, ctx->r16) = 0;
    // 0x8005C718: sw          $zero, 0x958($s0)
    MEM_W(0X958, ctx->r16) = 0;
    // 0x8005C71C: sh          $zero, 0x95C($s0)
    MEM_H(0X95C, ctx->r16) = 0;
    // 0x8005C720: sb          $fp, 0x8AC($s0)
    MEM_B(0X8AC, ctx->r16) = ctx->r30;
    // 0x8005C724: sb          $zero, 0x92F($s0)
    MEM_B(0X92F, ctx->r16) = 0;
    // 0x8005C728: bne         $t7, $zero, L_8005C740
    if (ctx->r15 != 0) {
        // 0x8005C72C: sh          $zero, 0x12($s0)
        MEM_H(0X12, ctx->r16) = 0;
            goto L_8005C740;
    }
    // 0x8005C72C: sh          $zero, 0x12($s0)
    MEM_H(0X12, ctx->r16) = 0;
    // 0x8005C730: lhu         $t8, 0x0($s3)
    ctx->r24 = MEM_HU(ctx->r19, 0X0);
    // 0x8005C734: nop

    // 0x8005C738: bne         $s2, $t8, L_8005C768
    if (ctx->r18 != ctx->r24) {
        // 0x8005C73C: nop
    
            goto L_8005C768;
    }
    // 0x8005C73C: nop

L_8005C740:
    // 0x8005C740: lhu         $v0, 0x0($s3)
    ctx->r2 = MEM_HU(ctx->r19, 0X0);
    // 0x8005C744: lui         $t9, 0x8012
    ctx->r25 = S32(0X8012 << 16);
    // 0x8005C748: slti        $at, $v0, 0x4
    ctx->r1 = SIGNED(ctx->r2) < 0X4 ? 1 : 0;
    // 0x8005C74C: bne         $at, $zero, L_8005C75C
    if (ctx->r1 != 0) {
        // 0x8005C750: nop
    
            goto L_8005C75C;
    }
    // 0x8005C750: nop

    // 0x8005C754: bne         $s2, $v0, L_8005C768
    if (ctx->r18 != ctx->r2) {
        // 0x8005C758: nop
    
            goto L_8005C768;
    }
    // 0x8005C758: nop

L_8005C75C:
    // 0x8005C75C: lb          $t9, -0x309E($t9)
    ctx->r25 = MEM_B(ctx->r25, -0X309E);
    // 0x8005C760: nop

    // 0x8005C764: sb          $t9, 0x8AC($s0)
    MEM_B(0X8AC, ctx->r16) = ctx->r25;
L_8005C768:
    // 0x8005C768: lui         $t0, 0x8012
    ctx->r8 = S32(0X8012 << 16);
    // 0x8005C76C: addiu       $t0, $t0, -0x17C8
    ctx->r8 = ADD32(ctx->r8, -0X17C8);
    // 0x8005C770: addiu       $s0, $s0, 0xA94
    ctx->r16 = ADD32(ctx->r16, 0XA94);
    // 0x8005C774: bne         $s0, $t0, L_8005C65C
    if (ctx->r16 != ctx->r8) {
        // 0x8005C778: nop
    
            goto L_8005C65C;
    }
    // 0x8005C778: nop

    // 0x8005C77C: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    // 0x8005C780: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8005C784: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x8005C788: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x8005C78C: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x8005C790: lw          $s4, 0x28($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X28);
    // 0x8005C794: lw          $s5, 0x2C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X2C);
    // 0x8005C798: lw          $s6, 0x30($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X30);
    // 0x8005C79C: lw          $s7, 0x34($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X34);
    // 0x8005C7A0: lw          $fp, 0x38($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X38);
    // 0x8005C7A4: jr          $ra
    // 0x8005C7A8: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    return;
    // 0x8005C7A8: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
RECOMP_FUNC void func_8005C7AC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8005C7AC: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x8005C7B0: addiu       $v0, $v0, -0x2CF0
    ctx->r2 = ADD32(ctx->r2, -0X2CF0);
    // 0x8005C7B4: lhu         $t6, 0x8($v0)
    ctx->r14 = MEM_HU(ctx->r2, 0X8);
    // 0x8005C7B8: lhu         $t8, 0xA9C($v0)
    ctx->r24 = MEM_HU(ctx->r2, 0XA9C);
    // 0x8005C7BC: andi        $t7, $t6, 0xFBFF
    ctx->r15 = ctx->r14 & 0XFBFF;
    // 0x8005C7C0: andi        $t9, $t8, 0xFBFF
    ctx->r25 = ctx->r24 & 0XFBFF;
    // 0x8005C7C4: sh          $t7, 0x8($v0)
    MEM_H(0X8, ctx->r2) = ctx->r15;
    // 0x8005C7C8: jr          $ra
    // 0x8005C7CC: sh          $t9, 0xA9C($v0)
    MEM_H(0XA9C, ctx->r2) = ctx->r25;
    return;
    // 0x8005C7CC: sh          $t9, 0xA9C($v0)
    MEM_H(0XA9C, ctx->r2) = ctx->r25;
;}
RECOMP_FUNC void func_8005C7D0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8005C7D0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8005C7D4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8005C7D8: lhu         $t6, 0x8($a0)
    ctx->r14 = MEM_HU(ctx->r4, 0X8);
    // 0x8005C7DC: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x8005C7E0: andi        $t7, $t6, 0xE7FF
    ctx->r15 = ctx->r14 & 0XE7FF;
    // 0x8005C7E4: addiu       $v0, $v0, -0x2ACC
    ctx->r2 = ADD32(ctx->r2, -0X2ACC);
    // 0x8005C7E8: sh          $t7, 0x8($a0)
    MEM_H(0X8, ctx->r4) = ctx->r15;
    // 0x8005C7EC: sh          $a1, 0x6($a0)
    MEM_H(0X6, ctx->r4) = ctx->r5;
    // 0x8005C7F0: sh          $zero, 0x930($a0)
    MEM_H(0X930, ctx->r4) = 0;
    // 0x8005C7F4: sb          $zero, 0x2($a0)
    MEM_B(0X2, ctx->r4) = 0;
    // 0x8005C7F8: sw          $zero, 0x91C($a0)
    MEM_W(0X91C, ctx->r4) = 0;
    // 0x8005C7FC: sw          $zero, 0x920($a0)
    MEM_W(0X920, ctx->r4) = 0;
    // 0x8005C800: sw          $zero, 0x924($a0)
    MEM_W(0X924, ctx->r4) = 0;
    // 0x8005C804: sh          $zero, 0x936($a0)
    MEM_H(0X936, ctx->r4) = 0;
    // 0x8005C808: sh          $zero, 0x8AE($a0)
    MEM_H(0X8AE, ctx->r4) = 0;
    // 0x8005C80C: lw          $at, 0x0($v0)
    ctx->r1 = MEM_W(ctx->r2, 0X0);
    // 0x8005C810: lui         $t3, 0x8012
    ctx->r11 = S32(0X8012 << 16);
    // 0x8005C814: sw          $at, 0x938($a0)
    MEM_W(0X938, ctx->r4) = ctx->r1;
    // 0x8005C818: lw          $t9, 0x4($v0)
    ctx->r25 = MEM_W(ctx->r2, 0X4);
    // 0x8005C81C: lui         $t2, 0x8012
    ctx->r10 = S32(0X8012 << 16);
    // 0x8005C820: sw          $t9, 0x93C($a0)
    MEM_W(0X93C, ctx->r4) = ctx->r25;
    // 0x8005C824: lw          $at, 0x8($v0)
    ctx->r1 = MEM_W(ctx->r2, 0X8);
    // 0x8005C828: lui         $t5, 0x8012
    ctx->r13 = S32(0X8012 << 16);
    // 0x8005C82C: sw          $at, 0x940($a0)
    MEM_W(0X940, ctx->r4) = ctx->r1;
    // 0x8005C830: lw          $t9, 0xC($v0)
    ctx->r25 = MEM_W(ctx->r2, 0XC);
    // 0x8005C834: addiu       $t2, $t2, -0xA38
    ctx->r10 = ADD32(ctx->r10, -0XA38);
    // 0x8005C838: sw          $t9, 0x944($a0)
    MEM_W(0X944, ctx->r4) = ctx->r25;
    // 0x8005C83C: lw          $at, 0x0($v0)
    ctx->r1 = MEM_W(ctx->r2, 0X0);
    // 0x8005C840: addiu       $t3, $t3, -0x17C8
    ctx->r11 = ADD32(ctx->r11, -0X17C8);
    // 0x8005C844: sw          $at, 0x948($a0)
    MEM_W(0X948, ctx->r4) = ctx->r1;
    // 0x8005C848: lw          $t1, 0x4($v0)
    ctx->r9 = MEM_W(ctx->r2, 0X4);
    // 0x8005C84C: addiu       $t5, $t5, -0xA38
    ctx->r13 = ADD32(ctx->r13, -0XA38);
    // 0x8005C850: sw          $t1, 0x94C($a0)
    MEM_W(0X94C, ctx->r4) = ctx->r9;
    // 0x8005C854: lw          $at, 0x8($v0)
    ctx->r1 = MEM_W(ctx->r2, 0X8);
    // 0x8005C858: lui         $t4, 0x8012
    ctx->r12 = S32(0X8012 << 16);
    // 0x8005C85C: sw          $at, 0x950($a0)
    MEM_W(0X950, ctx->r4) = ctx->r1;
    // 0x8005C860: lw          $t1, 0xC($v0)
    ctx->r9 = MEM_W(ctx->r2, 0XC);
    // 0x8005C864: sw          $zero, 0x958($a0)
    MEM_W(0X958, ctx->r4) = 0;
    // 0x8005C868: sw          $zero, 0x960($a0)
    MEM_W(0X960, ctx->r4) = 0;
    // 0x8005C86C: sw          $zero, 0x964($a0)
    MEM_W(0X964, ctx->r4) = 0;
    // 0x8005C870: sw          $zero, 0x968($a0)
    MEM_W(0X968, ctx->r4) = 0;
    // 0x8005C874: sw          $zero, 0x96C($a0)
    MEM_W(0X96C, ctx->r4) = 0;
    // 0x8005C878: sw          $zero, 0x970($a0)
    MEM_W(0X970, ctx->r4) = 0;
    // 0x8005C87C: beq         $a1, $zero, L_8005C88C
    if (ctx->r5 == 0) {
        // 0x8005C880: sw          $t1, 0x954($a0)
        MEM_W(0X954, ctx->r4) = ctx->r9;
            goto L_8005C88C;
    }
    // 0x8005C880: sw          $t1, 0x954($a0)
    MEM_W(0X954, ctx->r4) = ctx->r9;
    // 0x8005C884: b           L_8005C890
    // 0x8005C888: sw          $t2, 0x18($a0)
    MEM_W(0X18, ctx->r4) = ctx->r10;
        goto L_8005C890;
    // 0x8005C888: sw          $t2, 0x18($a0)
    MEM_W(0X18, ctx->r4) = ctx->r10;
L_8005C88C:
    // 0x8005C88C: sw          $t3, 0x18($a0)
    MEM_W(0X18, ctx->r4) = ctx->r11;
L_8005C890:
    // 0x8005C890: beq         $a1, $zero, L_8005C8A0
    if (ctx->r5 == 0) {
        // 0x8005C894: addiu       $t4, $t4, -0x17C8
        ctx->r12 = ADD32(ctx->r12, -0X17C8);
            goto L_8005C8A0;
    }
    // 0x8005C894: addiu       $t4, $t4, -0x17C8
    ctx->r12 = ADD32(ctx->r12, -0X17C8);
    // 0x8005C898: b           L_8005C8A4
    // 0x8005C89C: sw          $t4, 0x1C($a0)
    MEM_W(0X1C, ctx->r4) = ctx->r12;
        goto L_8005C8A4;
    // 0x8005C89C: sw          $t4, 0x1C($a0)
    MEM_W(0X1C, ctx->r4) = ctx->r12;
L_8005C8A0:
    // 0x8005C8A0: sw          $t5, 0x1C($a0)
    MEM_W(0X1C, ctx->r4) = ctx->r13;
L_8005C8A4:
    // 0x8005C8A4: beq         $a1, $zero, L_8005C8BC
    if (ctx->r5 == 0) {
        // 0x8005C8A8: lui         $t7, 0x8012
        ctx->r15 = S32(0X8012 << 16);
            goto L_8005C8BC;
    }
    // 0x8005C8A8: lui         $t7, 0x8012
    ctx->r15 = S32(0X8012 << 16);
    // 0x8005C8AC: lui         $t6, 0x8012
    ctx->r14 = S32(0X8012 << 16);
    // 0x8005C8B0: addiu       $t6, $t6, -0x2CF0
    ctx->r14 = ADD32(ctx->r14, -0X2CF0);
    // 0x8005C8B4: b           L_8005C8C4
    // 0x8005C8B8: sw          $t6, 0x24($a0)
    MEM_W(0X24, ctx->r4) = ctx->r14;
        goto L_8005C8C4;
    // 0x8005C8B8: sw          $t6, 0x24($a0)
    MEM_W(0X24, ctx->r4) = ctx->r14;
L_8005C8BC:
    // 0x8005C8BC: addiu       $t7, $t7, -0x225C
    ctx->r15 = ADD32(ctx->r15, -0X225C);
    // 0x8005C8C0: sw          $t7, 0x24($a0)
    MEM_W(0X24, ctx->r4) = ctx->r15;
L_8005C8C4:
    // 0x8005C8C4: beq         $a1, $zero, L_8005C8F8
    if (ctx->r5 == 0) {
        // 0x8005C8C8: lui         $t3, 0x8012
        ctx->r11 = S32(0X8012 << 16);
            goto L_8005C8F8;
    }
    // 0x8005C8C8: lui         $t3, 0x8012
    ctx->r11 = S32(0X8012 << 16);
    // 0x8005C8CC: lui         $t8, 0x8012
    ctx->r24 = S32(0X8012 << 16);
    // 0x8005C8D0: lhu         $t8, 0xB72($t8)
    ctx->r24 = MEM_HU(ctx->r24, 0XB72);
    // 0x8005C8D4: lui         $t1, 0x800B
    ctx->r9 = S32(0X800B << 16);
    // 0x8005C8D8: sll         $t9, $t8, 2
    ctx->r25 = S32(ctx->r24 << 2);
    // 0x8005C8DC: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x8005C8E0: sll         $t9, $t9, 1
    ctx->r25 = S32(ctx->r25 << 1);
    // 0x8005C8E4: addiu       $t0, $t9, 0x5A
    ctx->r8 = ADD32(ctx->r25, 0X5A);
    // 0x8005C8E8: addiu       $t1, $t1, -0x2CA0
    ctx->r9 = ADD32(ctx->r9, -0X2CA0);
    // 0x8005C8EC: addu        $t2, $t0, $t1
    ctx->r10 = ADD32(ctx->r8, ctx->r9);
    // 0x8005C8F0: b           L_8005C918
    // 0x8005C8F4: sw          $t2, 0x20($a0)
    MEM_W(0X20, ctx->r4) = ctx->r10;
        goto L_8005C918;
    // 0x8005C8F4: sw          $t2, 0x20($a0)
    MEM_W(0X20, ctx->r4) = ctx->r10;
L_8005C8F8:
    // 0x8005C8F8: lhu         $t3, 0xB72($t3)
    ctx->r11 = MEM_HU(ctx->r11, 0XB72);
    // 0x8005C8FC: lui         $t5, 0x800B
    ctx->r13 = S32(0X800B << 16);
    // 0x8005C900: sll         $t4, $t3, 2
    ctx->r12 = S32(ctx->r11 << 2);
    // 0x8005C904: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x8005C908: sll         $t4, $t4, 1
    ctx->r12 = S32(ctx->r12 << 1);
    // 0x8005C90C: addiu       $t5, $t5, -0x2CA0
    ctx->r13 = ADD32(ctx->r13, -0X2CA0);
    // 0x8005C910: addu        $t6, $t4, $t5
    ctx->r14 = ADD32(ctx->r12, ctx->r13);
    // 0x8005C914: sw          $t6, 0x20($a0)
    MEM_W(0X20, ctx->r4) = ctx->r14;
L_8005C918:
    // 0x8005C918: jal         0x8005C5CC
    // 0x8005C91C: nop

    func_8005C5CC(rdram, ctx);
        goto after_0;
    // 0x8005C91C: nop

    after_0:
    // 0x8005C920: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8005C924: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8005C928: jr          $ra
    // 0x8005C92C: nop

    return;
    // 0x8005C92C: nop

;}
RECOMP_FUNC void func_8005C930(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8005C930: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8005C934: sw          $s2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r18;
    // 0x8005C938: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x8005C93C: sw          $s3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r19;
    // 0x8005C940: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x8005C944: lui         $s0, 0x8012
    ctx->r16 = S32(0X8012 << 16);
    // 0x8005C948: lui         $s2, 0x8012
    ctx->r18 = S32(0X8012 << 16);
    // 0x8005C94C: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x8005C950: addiu       $s2, $s2, 0xB76
    ctx->r18 = ADD32(ctx->r18, 0XB76);
    // 0x8005C954: addiu       $s0, $s0, -0x2CF0
    ctx->r16 = ADD32(ctx->r16, -0X2CF0);
    // 0x8005C958: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    // 0x8005C95C: addiu       $s3, $zero, 0x2
    ctx->r19 = ADD32(0, 0X2);
L_8005C960:
    // 0x8005C960: lhu         $t6, 0x8($s0)
    ctx->r14 = MEM_HU(ctx->r16, 0X8);
    // 0x8005C964: lhu         $t8, 0x0($s2)
    ctx->r24 = MEM_HU(ctx->r18, 0X0);
    // 0x8005C968: andi        $t7, $t6, 0xE7FE
    ctx->r15 = ctx->r14 & 0XE7FE;
    // 0x8005C96C: beq         $t8, $s1, L_8005C97C
    if (ctx->r24 == ctx->r17) {
        // 0x8005C970: sh          $t7, 0x8($s0)
        MEM_H(0X8, ctx->r16) = ctx->r15;
            goto L_8005C97C;
    }
    // 0x8005C970: sh          $t7, 0x8($s0)
    MEM_H(0X8, ctx->r16) = ctx->r15;
    // 0x8005C974: ori         $t1, $t7, 0x1
    ctx->r9 = ctx->r15 | 0X1;
    // 0x8005C978: sh          $t1, 0x8($s0)
    MEM_H(0X8, ctx->r16) = ctx->r9;
L_8005C97C:
    // 0x8005C97C: sh          $zero, 0xA($s0)
    MEM_H(0XA, ctx->r16) = 0;
    // 0x8005C980: sh          $zero, 0xC($s0)
    MEM_H(0XC, ctx->r16) = 0;
    // 0x8005C984: sh          $zero, 0x14($s0)
    MEM_H(0X14, ctx->r16) = 0;
    // 0x8005C988: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8005C98C: jal         0x8005C7D0
    // 0x8005C990: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    func_8005C7D0(rdram, ctx);
        goto after_0;
    // 0x8005C990: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    after_0:
    // 0x8005C994: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x8005C998: bne         $s1, $s3, L_8005C960
    if (ctx->r17 != ctx->r19) {
        // 0x8005C99C: addiu       $s0, $s0, 0xA94
        ctx->r16 = ADD32(ctx->r16, 0XA94);
            goto L_8005C960;
    }
    // 0x8005C99C: addiu       $s0, $s0, 0xA94
    ctx->r16 = ADD32(ctx->r16, 0XA94);
    // 0x8005C9A0: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x8005C9A4: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x8005C9A8: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x8005C9AC: lw          $s2, 0x1C($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X1C);
    // 0x8005C9B0: lw          $s3, 0x20($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X20);
    // 0x8005C9B4: jr          $ra
    // 0x8005C9B8: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x8005C9B8: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_8005C9BC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8005C9BC: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8005C9C0: lui         $t6, 0x8012
    ctx->r14 = S32(0X8012 << 16);
    // 0x8005C9C4: sw          $s4, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r20;
    // 0x8005C9C8: addiu       $t4, $t6, -0x2CF0
    ctx->r12 = ADD32(ctx->r14, -0X2CF0);
    // 0x8005C9CC: sw          $s5, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r21;
    // 0x8005C9D0: sw          $s3, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r19;
    // 0x8005C9D4: sw          $s2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r18;
    // 0x8005C9D8: sw          $s1, 0xC($sp)
    MEM_W(0XC, ctx->r29) = ctx->r17;
    // 0x8005C9DC: sw          $s0, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r16;
    // 0x8005C9E0: lui         $s4, 0x801B
    ctx->r20 = S32(0X801B << 16);
    // 0x8005C9E4: lui         $a2, 0x8012
    ctx->r6 = S32(0X8012 << 16);
    // 0x8005C9E8: addiu       $a2, $a2, -0x2CC8
    ctx->r6 = ADD32(ctx->r6, -0X2CC8);
    // 0x8005C9EC: addiu       $s4, $s4, 0x36A0
    ctx->r20 = ADD32(ctx->r20, 0X36A0);
    // 0x8005C9F0: addiu       $s0, $zero, 0x2C
    ctx->r16 = ADD32(0, 0X2C);
    // 0x8005C9F4: addiu       $s1, $zero, 0x30
    ctx->r17 = ADD32(0, 0X30);
    // 0x8005C9F8: addiu       $s2, $zero, 0x1
    ctx->r18 = ADD32(0, 0X1);
    // 0x8005C9FC: addiu       $s3, $zero, 0x2
    ctx->r19 = ADD32(0, 0X2);
    // 0x8005CA00: addiu       $s5, $zero, 0xB
    ctx->r21 = ADD32(0, 0XB);
    // 0x8005CA04: or          $a0, $t4, $zero
    ctx->r4 = ctx->r12 | 0;
    // 0x8005CA08: or          $t0, $t4, $zero
    ctx->r8 = ctx->r12 | 0;
    // 0x8005CA0C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x8005CA10: addiu       $t5, $zero, 0xB
    ctx->r13 = ADD32(0, 0XB);
L_8005CA14:
    // 0x8005CA14: lbu         $t7, 0x1($a0)
    ctx->r15 = MEM_BU(ctx->r4, 0X1);
    // 0x8005CA18: lbu         $t6, 0x308($t4)
    ctx->r14 = MEM_BU(ctx->r12, 0X308);
    // 0x8005CA1C: multu       $t7, $t5
    result = U64(U32(ctx->r15)) * U64(U32(ctx->r13)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8005CA20: lw          $v1, 0x18($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X18);
    // 0x8005CA24: addiu       $t1, $t0, 0x1
    ctx->r9 = ADD32(ctx->r8, 0X1);
    // 0x8005CA28: addiu       $t0, $t0, 0xA94
    ctx->r8 = ADD32(ctx->r8, 0XA94);
    // 0x8005CA2C: or          $a3, $s2, $zero
    ctx->r7 = ctx->r18 | 0;
    // 0x8005CA30: mflo        $t8
    ctx->r24 = lo;
    // 0x8005CA34: sll         $t9, $t8, 2
    ctx->r25 = S32(ctx->r24 << 2);
    // 0x8005CA38: subu        $t9, $t9, $t8
    ctx->r25 = SUB32(ctx->r25, ctx->r24);
    // 0x8005CA3C: multu       $t6, $s0
    result = U64(U32(ctx->r14)) * U64(U32(ctx->r16)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8005CA40: sll         $t9, $t9, 1
    ctx->r25 = S32(ctx->r25 << 1);
    // 0x8005CA44: addu        $a1, $a0, $t9
    ctx->r5 = ADD32(ctx->r4, ctx->r25);
    // 0x8005CA48: addiu       $a1, $a1, 0x418
    ctx->r5 = ADD32(ctx->r5, 0X418);
    // 0x8005CA4C: sw          $a1, 0xD4($v1)
    MEM_W(0XD4, ctx->r3) = ctx->r5;
    // 0x8005CA50: addiu       $a0, $a0, 0xA94
    ctx->r4 = ADD32(ctx->r4, 0XA94);
    // 0x8005CA54: addiu       $a1, $a1, 0x6
    ctx->r5 = ADD32(ctx->r5, 0X6);
    // 0x8005CA58: mflo        $t7
    ctx->r15 = lo;
    // 0x8005CA5C: addu        $t8, $t7, $a2
    ctx->r24 = ADD32(ctx->r15, ctx->r6);
    // 0x8005CA60: sw          $t8, 0xD8($v1)
    MEM_W(0XD8, ctx->r3) = ctx->r24;
    // 0x8005CA64: lbu         $t3, 0x1B($t8)
    ctx->r11 = MEM_BU(ctx->r24, 0X1B);
    // 0x8005CA68: or          $t2, $t8, $zero
    ctx->r10 = ctx->r24 | 0;
    // 0x8005CA6C: andi        $t9, $t3, 0x30
    ctx->r25 = ctx->r11 & 0X30;
    // 0x8005CA70: beq         $s1, $t9, L_8005CAD8
    if (ctx->r17 == ctx->r25) {
        // 0x8005CA74: andi        $t6, $t3, 0x88
        ctx->r14 = ctx->r11 & 0X88;
            goto L_8005CAD8;
    }
    // 0x8005CA74: andi        $t6, $t3, 0x88
    ctx->r14 = ctx->r11 & 0X88;
    // 0x8005CA78: bne         $t6, $zero, L_8005CAD8
    if (ctx->r14 != 0) {
        // 0x8005CA7C: nop
    
            goto L_8005CAD8;
    }
    // 0x8005CA7C: nop

    // 0x8005CA80: lbu         $t7, 0x1D($t8)
    ctx->r15 = MEM_BU(ctx->r24, 0X1D);
    // 0x8005CA84: nop

    // 0x8005CA88: andi        $t8, $t7, 0xE0
    ctx->r24 = ctx->r15 & 0XE0;
    // 0x8005CA8C: slti        $at, $t8, 0x60
    ctx->r1 = SIGNED(ctx->r24) < 0X60 ? 1 : 0;
    // 0x8005CA90: beq         $at, $zero, L_8005CAD8
    if (ctx->r1 == 0) {
        // 0x8005CA94: nop
    
            goto L_8005CAD8;
    }
    // 0x8005CA94: nop

    // 0x8005CA98: lbu         $t9, 0x1E($t2)
    ctx->r25 = MEM_BU(ctx->r10, 0X1E);
    // 0x8005CA9C: nop

    // 0x8005CAA0: bne         $t9, $zero, L_8005CAD8
    if (ctx->r25 != 0) {
        // 0x8005CAA4: nop
    
            goto L_8005CAD8;
    }
    // 0x8005CAA4: nop

    // 0x8005CAA8: lw          $t6, 0xCC($v1)
    ctx->r14 = MEM_W(ctx->r3, 0XCC);
    // 0x8005CAAC: sh          $s2, 0xC($v1)
    MEM_H(0XC, ctx->r3) = ctx->r18;
    // 0x8005CAB0: sh          $s3, 0x0($t6)
    MEM_H(0X0, ctx->r14) = ctx->r19;
    // 0x8005CAB4: lw          $t7, 0xD4($v1)
    ctx->r15 = MEM_W(ctx->r3, 0XD4);
    // 0x8005CAB8: sll         $t6, $v0, 4
    ctx->r14 = S32(ctx->r2 << 4);
    // 0x8005CABC: lbu         $t8, 0x4($t7)
    ctx->r24 = MEM_BU(ctx->r15, 0X4);
    // 0x8005CAC0: addu        $t7, $s4, $t6
    ctx->r15 = ADD32(ctx->r20, ctx->r14);
    // 0x8005CAC4: andi        $t9, $t8, 0x7F
    ctx->r25 = ctx->r24 & 0X7F;
    // 0x8005CAC8: lbu         $t8, 0x308($t4)
    ctx->r24 = MEM_BU(ctx->r12, 0X308);
    // 0x8005CACC: nop

    // 0x8005CAD0: addu        $t6, $t7, $t8
    ctx->r14 = ADD32(ctx->r15, ctx->r24);
    // 0x8005CAD4: sb          $t9, 0x0($t6)
    MEM_B(0X0, ctx->r14) = ctx->r25;
L_8005CAD8:
    // 0x8005CAD8: addiu       $v1, $v1, 0xF8
    ctx->r3 = ADD32(ctx->r3, 0XF8);
L_8005CADC:
    // 0x8005CADC: lbu         $t7, 0x308($t1)
    ctx->r15 = MEM_BU(ctx->r9, 0X308);
    // 0x8005CAE0: sw          $a1, 0xD4($v1)
    MEM_W(0XD4, ctx->r3) = ctx->r5;
    // 0x8005CAE4: multu       $t7, $s0
    result = U64(U32(ctx->r15)) * U64(U32(ctx->r16)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8005CAE8: addiu       $a3, $a3, 0x2
    ctx->r7 = ADD32(ctx->r7, 0X2);
    // 0x8005CAEC: mflo        $t8
    ctx->r24 = lo;
    // 0x8005CAF0: addu        $t9, $t8, $a2
    ctx->r25 = ADD32(ctx->r24, ctx->r6);
    // 0x8005CAF4: sw          $t9, 0xD8($v1)
    MEM_W(0XD8, ctx->r3) = ctx->r25;
    // 0x8005CAF8: lbu         $t3, 0x1B($t9)
    ctx->r11 = MEM_BU(ctx->r25, 0X1B);
    // 0x8005CAFC: or          $t2, $t9, $zero
    ctx->r10 = ctx->r25 | 0;
    // 0x8005CB00: andi        $t6, $t3, 0x30
    ctx->r14 = ctx->r11 & 0X30;
    // 0x8005CB04: beq         $s1, $t6, L_8005CB6C
    if (ctx->r17 == ctx->r14) {
        // 0x8005CB08: andi        $t7, $t3, 0x88
        ctx->r15 = ctx->r11 & 0X88;
            goto L_8005CB6C;
    }
    // 0x8005CB08: andi        $t7, $t3, 0x88
    ctx->r15 = ctx->r11 & 0X88;
    // 0x8005CB0C: bne         $t7, $zero, L_8005CB6C
    if (ctx->r15 != 0) {
        // 0x8005CB10: nop
    
            goto L_8005CB6C;
    }
    // 0x8005CB10: nop

    // 0x8005CB14: lbu         $t8, 0x1D($t9)
    ctx->r24 = MEM_BU(ctx->r25, 0X1D);
    // 0x8005CB18: nop

    // 0x8005CB1C: andi        $t9, $t8, 0xE0
    ctx->r25 = ctx->r24 & 0XE0;
    // 0x8005CB20: slti        $at, $t9, 0x60
    ctx->r1 = SIGNED(ctx->r25) < 0X60 ? 1 : 0;
    // 0x8005CB24: beq         $at, $zero, L_8005CB6C
    if (ctx->r1 == 0) {
        // 0x8005CB28: nop
    
            goto L_8005CB6C;
    }
    // 0x8005CB28: nop

    // 0x8005CB2C: lbu         $t6, 0x1E($t2)
    ctx->r14 = MEM_BU(ctx->r10, 0X1E);
    // 0x8005CB30: nop

    // 0x8005CB34: bne         $t6, $zero, L_8005CB6C
    if (ctx->r14 != 0) {
        // 0x8005CB38: nop
    
            goto L_8005CB6C;
    }
    // 0x8005CB38: nop

    // 0x8005CB3C: lw          $t7, 0xCC($v1)
    ctx->r15 = MEM_W(ctx->r3, 0XCC);
    // 0x8005CB40: sh          $s2, 0xC($v1)
    MEM_H(0XC, ctx->r3) = ctx->r18;
    // 0x8005CB44: sh          $s3, 0x0($t7)
    MEM_H(0X0, ctx->r15) = ctx->r19;
    // 0x8005CB48: lw          $t8, 0xD4($v1)
    ctx->r24 = MEM_W(ctx->r3, 0XD4);
    // 0x8005CB4C: sll         $t7, $v0, 4
    ctx->r15 = S32(ctx->r2 << 4);
    // 0x8005CB50: lbu         $t9, 0x4($t8)
    ctx->r25 = MEM_BU(ctx->r24, 0X4);
    // 0x8005CB54: addu        $t8, $s4, $t7
    ctx->r24 = ADD32(ctx->r20, ctx->r15);
    // 0x8005CB58: andi        $t6, $t9, 0x7F
    ctx->r14 = ctx->r25 & 0X7F;
    // 0x8005CB5C: lbu         $t9, 0x308($t1)
    ctx->r25 = MEM_BU(ctx->r9, 0X308);
    // 0x8005CB60: nop

    // 0x8005CB64: addu        $t7, $t8, $t9
    ctx->r15 = ADD32(ctx->r24, ctx->r25);
    // 0x8005CB68: sb          $t6, 0x0($t7)
    MEM_B(0X0, ctx->r15) = ctx->r14;
L_8005CB6C:
    // 0x8005CB6C: lbu         $t8, 0x309($t1)
    ctx->r24 = MEM_BU(ctx->r9, 0X309);
    // 0x8005CB70: addiu       $a1, $a1, 0x6
    ctx->r5 = ADD32(ctx->r5, 0X6);
    // 0x8005CB74: multu       $t8, $s0
    result = U64(U32(ctx->r24)) * U64(U32(ctx->r16)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8005CB78: sw          $a1, 0x1CC($v1)
    MEM_W(0X1CC, ctx->r3) = ctx->r5;
    // 0x8005CB7C: addiu       $a1, $a1, 0x6
    ctx->r5 = ADD32(ctx->r5, 0X6);
    // 0x8005CB80: addiu       $v1, $v1, 0xF8
    ctx->r3 = ADD32(ctx->r3, 0XF8);
    // 0x8005CB84: mflo        $t9
    ctx->r25 = lo;
    // 0x8005CB88: addu        $t6, $t9, $a2
    ctx->r14 = ADD32(ctx->r25, ctx->r6);
    // 0x8005CB8C: sw          $t6, 0xD8($v1)
    MEM_W(0XD8, ctx->r3) = ctx->r14;
    // 0x8005CB90: lbu         $t3, 0x1B($t6)
    ctx->r11 = MEM_BU(ctx->r14, 0X1B);
    // 0x8005CB94: or          $t2, $t6, $zero
    ctx->r10 = ctx->r14 | 0;
    // 0x8005CB98: andi        $t7, $t3, 0x30
    ctx->r15 = ctx->r11 & 0X30;
    // 0x8005CB9C: beq         $s1, $t7, L_8005CC04
    if (ctx->r17 == ctx->r15) {
        // 0x8005CBA0: andi        $t8, $t3, 0x88
        ctx->r24 = ctx->r11 & 0X88;
            goto L_8005CC04;
    }
    // 0x8005CBA0: andi        $t8, $t3, 0x88
    ctx->r24 = ctx->r11 & 0X88;
    // 0x8005CBA4: bne         $t8, $zero, L_8005CC04
    if (ctx->r24 != 0) {
        // 0x8005CBA8: nop
    
            goto L_8005CC04;
    }
    // 0x8005CBA8: nop

    // 0x8005CBAC: lbu         $t9, 0x1D($t6)
    ctx->r25 = MEM_BU(ctx->r14, 0X1D);
    // 0x8005CBB0: nop

    // 0x8005CBB4: andi        $t6, $t9, 0xE0
    ctx->r14 = ctx->r25 & 0XE0;
    // 0x8005CBB8: slti        $at, $t6, 0x60
    ctx->r1 = SIGNED(ctx->r14) < 0X60 ? 1 : 0;
    // 0x8005CBBC: beq         $at, $zero, L_8005CC04
    if (ctx->r1 == 0) {
        // 0x8005CBC0: nop
    
            goto L_8005CC04;
    }
    // 0x8005CBC0: nop

    // 0x8005CBC4: lbu         $t7, 0x1E($t2)
    ctx->r15 = MEM_BU(ctx->r10, 0X1E);
    // 0x8005CBC8: nop

    // 0x8005CBCC: bne         $t7, $zero, L_8005CC04
    if (ctx->r15 != 0) {
        // 0x8005CBD0: nop
    
            goto L_8005CC04;
    }
    // 0x8005CBD0: nop

    // 0x8005CBD4: lw          $t8, 0xCC($v1)
    ctx->r24 = MEM_W(ctx->r3, 0XCC);
    // 0x8005CBD8: sh          $s2, 0xC($v1)
    MEM_H(0XC, ctx->r3) = ctx->r18;
    // 0x8005CBDC: sh          $s3, 0x0($t8)
    MEM_H(0X0, ctx->r24) = ctx->r19;
    // 0x8005CBE0: lw          $t9, 0xD4($v1)
    ctx->r25 = MEM_W(ctx->r3, 0XD4);
    // 0x8005CBE4: sll         $t8, $v0, 4
    ctx->r24 = S32(ctx->r2 << 4);
    // 0x8005CBE8: lbu         $t6, 0x4($t9)
    ctx->r14 = MEM_BU(ctx->r25, 0X4);
    // 0x8005CBEC: addu        $t9, $s4, $t8
    ctx->r25 = ADD32(ctx->r20, ctx->r24);
    // 0x8005CBF0: andi        $t7, $t6, 0x7F
    ctx->r15 = ctx->r14 & 0X7F;
    // 0x8005CBF4: lbu         $t6, 0x309($t1)
    ctx->r14 = MEM_BU(ctx->r9, 0X309);
    // 0x8005CBF8: nop

    // 0x8005CBFC: addu        $t8, $t9, $t6
    ctx->r24 = ADD32(ctx->r25, ctx->r14);
    // 0x8005CC00: sb          $t7, 0x0($t8)
    MEM_B(0X0, ctx->r24) = ctx->r15;
L_8005CC04:
    // 0x8005CC04: addiu       $t1, $t1, 0x2
    ctx->r9 = ADD32(ctx->r9, 0X2);
    // 0x8005CC08: bne         $a3, $s5, L_8005CADC
    if (ctx->r7 != ctx->r21) {
        // 0x8005CC0C: addiu       $v1, $v1, 0xF8
        ctx->r3 = ADD32(ctx->r3, 0XF8);
            goto L_8005CADC;
    }
    // 0x8005CC0C: addiu       $v1, $v1, 0xF8
    ctx->r3 = ADD32(ctx->r3, 0XF8);
    // 0x8005CC10: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8005CC14: addiu       $a2, $a2, 0xA94
    ctx->r6 = ADD32(ctx->r6, 0XA94);
    // 0x8005CC18: bne         $v0, $s3, L_8005CA14
    if (ctx->r2 != ctx->r19) {
        // 0x8005CC1C: addiu       $t4, $t4, 0xA94
        ctx->r12 = ADD32(ctx->r12, 0XA94);
            goto L_8005CA14;
    }
    // 0x8005CC1C: addiu       $t4, $t4, 0xA94
    ctx->r12 = ADD32(ctx->r12, 0XA94);
    // 0x8005CC20: lw          $s0, 0x8($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X8);
    // 0x8005CC24: lw          $s1, 0xC($sp)
    ctx->r17 = MEM_W(ctx->r29, 0XC);
    // 0x8005CC28: lw          $s2, 0x10($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X10);
    // 0x8005CC2C: lw          $s3, 0x14($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X14);
    // 0x8005CC30: lw          $s4, 0x18($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X18);
    // 0x8005CC34: lw          $s5, 0x1C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X1C);
    // 0x8005CC38: jr          $ra
    // 0x8005CC3C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x8005CC3C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_8005CC40(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8005CC40: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x8005CC44: addu        $t6, $t6, $a0
    ctx->r14 = ADD32(ctx->r14, ctx->r4);
    // 0x8005CC48: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x8005CC4C: addu        $t6, $t6, $a0
    ctx->r14 = ADD32(ctx->r14, ctx->r4);
    // 0x8005CC50: sll         $t6, $t6, 3
    ctx->r14 = S32(ctx->r14 << 3);
    // 0x8005CC54: addu        $t6, $t6, $a0
    ctx->r14 = ADD32(ctx->r14, ctx->r4);
    // 0x8005CC58: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x8005CC5C: addu        $t6, $t6, $a0
    ctx->r14 = ADD32(ctx->r14, ctx->r4);
    // 0x8005CC60: lui         $t7, 0x8012
    ctx->r15 = S32(0X8012 << 16);
    // 0x8005CC64: addiu       $t7, $t7, -0x2CF0
    ctx->r15 = ADD32(ctx->r15, -0X2CF0);
    // 0x8005CC68: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x8005CC6C: addu        $v0, $t6, $t7
    ctx->r2 = ADD32(ctx->r14, ctx->r15);
    // 0x8005CC70: lbu         $v1, 0x0($v0)
    ctx->r3 = MEM_BU(ctx->r2, 0X0);
    // 0x8005CC74: lui         $t8, 0x800B
    ctx->r24 = S32(0X800B << 16);
    // 0x8005CC78: addu        $t8, $t8, $v1
    ctx->r24 = ADD32(ctx->r24, ctx->r3);
    // 0x8005CC7C: lbu         $t8, -0x2B24($t8)
    ctx->r24 = MEM_BU(ctx->r24, -0X2B24);
    // 0x8005CC80: addiu       $a2, $zero, 0xB
    ctx->r6 = ADD32(0, 0XB);
    // 0x8005CC84: andi        $t9, $t8, 0xFF
    ctx->r25 = ctx->r24 & 0XFF;
    // 0x8005CC88: multu       $t9, $a2
    result = U64(U32(ctx->r25)) * U64(U32(ctx->r6)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8005CC8C: sll         $t3, $v1, 5
    ctx->r11 = S32(ctx->r3 << 5);
    // 0x8005CC90: lui         $a3, 0x800B
    ctx->r7 = S32(0X800B << 16);
    // 0x8005CC94: addu        $t3, $t3, $v1
    ctx->r11 = ADD32(ctx->r11, ctx->r3);
    // 0x8005CC98: sll         $t3, $t3, 1
    ctx->r11 = S32(ctx->r11 << 1);
    // 0x8005CC9C: addiu       $a3, $a3, -0x4E40
    ctx->r7 = ADD32(ctx->r7, -0X4E40);
    // 0x8005CCA0: addu        $t4, $a3, $t3
    ctx->r12 = ADD32(ctx->r7, ctx->r11);
    // 0x8005CCA4: sb          $t8, 0x1($v0)
    MEM_B(0X1, ctx->r2) = ctx->r24;
    // 0x8005CCA8: lwl         $at, 0x0($t4)
    ctx->r1 = do_lwl(rdram, ctx->r1, ctx->r12, 0X0);
    // 0x8005CCAC: lwr         $at, 0x3($t4)
    ctx->r1 = do_lwr(rdram, ctx->r1, ctx->r12, 0X3);
    // 0x8005CCB0: addiu       $v1, $zero, 0x42
    ctx->r3 = ADD32(0, 0X42);
    // 0x8005CCB4: addiu       $a1, $zero, 0x12
    ctx->r5 = ADD32(0, 0X12);
    // 0x8005CCB8: mflo        $t0
    ctx->r8 = lo;
    // 0x8005CCBC: sll         $t1, $t0, 2
    ctx->r9 = S32(ctx->r8 << 2);
    // 0x8005CCC0: subu        $t1, $t1, $t0
    ctx->r9 = SUB32(ctx->r9, ctx->r8);
    // 0x8005CCC4: sll         $t1, $t1, 1
    ctx->r9 = S32(ctx->r9 << 1);
    // 0x8005CCC8: addu        $t2, $v0, $t1
    ctx->r10 = ADD32(ctx->r2, ctx->r9);
    // 0x8005CCCC: swl         $at, 0x418($t2)
    do_swl(rdram, 0X418, ctx->r10, ctx->r1);
    // 0x8005CCD0: swr         $at, 0x41B($t2)
    do_swr(rdram, 0X41B, ctx->r10, ctx->r1);
    // 0x8005CCD4: lhu         $at, 0x4($t4)
    ctx->r1 = MEM_HU(ctx->r12, 0X4);
    // 0x8005CCD8: nop

    // 0x8005CCDC: sh          $at, 0x41C($t2)
    MEM_H(0X41C, ctx->r10) = ctx->r1;
    // 0x8005CCE0: lbu         $t7, 0x1($v0)
    ctx->r15 = MEM_BU(ctx->r2, 0X1);
    // 0x8005CCE4: lbu         $t1, 0x0($v0)
    ctx->r9 = MEM_BU(ctx->r2, 0X0);
    // 0x8005CCE8: multu       $t7, $a2
    result = U64(U32(ctx->r15)) * U64(U32(ctx->r6)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8005CCEC: sll         $t3, $t1, 5
    ctx->r11 = S32(ctx->r9 << 5);
    // 0x8005CCF0: addu        $t3, $t3, $t1
    ctx->r11 = ADD32(ctx->r11, ctx->r9);
    // 0x8005CCF4: sll         $t3, $t3, 1
    ctx->r11 = S32(ctx->r11 << 1);
    // 0x8005CCF8: addu        $t5, $a3, $t3
    ctx->r13 = ADD32(ctx->r7, ctx->r11);
    // 0x8005CCFC: lwl         $at, 0x6($t5)
    ctx->r1 = do_lwl(rdram, ctx->r1, ctx->r13, 0X6);
    // 0x8005CD00: lwr         $at, 0x9($t5)
    ctx->r1 = do_lwr(rdram, ctx->r1, ctx->r13, 0X9);
    // 0x8005CD04: mflo        $t8
    ctx->r24 = lo;
    // 0x8005CD08: sll         $t9, $t8, 2
    ctx->r25 = S32(ctx->r24 << 2);
    // 0x8005CD0C: subu        $t9, $t9, $t8
    ctx->r25 = SUB32(ctx->r25, ctx->r24);
    // 0x8005CD10: sll         $t9, $t9, 1
    ctx->r25 = S32(ctx->r25 << 1);
    // 0x8005CD14: addu        $t0, $v0, $t9
    ctx->r8 = ADD32(ctx->r2, ctx->r25);
    // 0x8005CD18: swl         $at, 0x41E($t0)
    do_swl(rdram, 0X41E, ctx->r8, ctx->r1);
    // 0x8005CD1C: swr         $at, 0x421($t0)
    do_swr(rdram, 0X421, ctx->r8, ctx->r1);
    // 0x8005CD20: lhu         $at, 0xA($t5)
    ctx->r1 = MEM_HU(ctx->r13, 0XA);
    // 0x8005CD24: nop

    // 0x8005CD28: sh          $at, 0x422($t0)
    MEM_H(0X422, ctx->r8) = ctx->r1;
    // 0x8005CD2C: lbu         $t6, 0x1($v0)
    ctx->r14 = MEM_BU(ctx->r2, 0X1);
    // 0x8005CD30: lbu         $t1, 0x0($v0)
    ctx->r9 = MEM_BU(ctx->r2, 0X0);
    // 0x8005CD34: multu       $t6, $a2
    result = U64(U32(ctx->r14)) * U64(U32(ctx->r6)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8005CD38: sll         $t3, $t1, 5
    ctx->r11 = S32(ctx->r9 << 5);
    // 0x8005CD3C: addu        $t3, $t3, $t1
    ctx->r11 = ADD32(ctx->r11, ctx->r9);
    // 0x8005CD40: sll         $t3, $t3, 1
    ctx->r11 = S32(ctx->r11 << 1);
    // 0x8005CD44: addu        $t2, $a3, $t3
    ctx->r10 = ADD32(ctx->r7, ctx->r11);
    // 0x8005CD48: lwl         $at, 0xC($t2)
    ctx->r1 = do_lwl(rdram, ctx->r1, ctx->r10, 0XC);
    // 0x8005CD4C: lwr         $at, 0xF($t2)
    ctx->r1 = do_lwr(rdram, ctx->r1, ctx->r10, 0XF);
    // 0x8005CD50: mflo        $t7
    ctx->r15 = lo;
    // 0x8005CD54: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x8005CD58: subu        $t8, $t8, $t7
    ctx->r24 = SUB32(ctx->r24, ctx->r15);
    // 0x8005CD5C: sll         $t8, $t8, 1
    ctx->r24 = S32(ctx->r24 << 1);
    // 0x8005CD60: addu        $t9, $v0, $t8
    ctx->r25 = ADD32(ctx->r2, ctx->r24);
    // 0x8005CD64: swl         $at, 0x424($t9)
    do_swl(rdram, 0X424, ctx->r25, ctx->r1);
    // 0x8005CD68: swr         $at, 0x427($t9)
    do_swr(rdram, 0X427, ctx->r25, ctx->r1);
    // 0x8005CD6C: lhu         $at, 0x10($t2)
    ctx->r1 = MEM_HU(ctx->r10, 0X10);
    // 0x8005CD70: nop

    // 0x8005CD74: sh          $at, 0x428($t9)
    MEM_H(0X428, ctx->r25) = ctx->r1;
L_8005CD78:
    // 0x8005CD78: lbu         $t4, 0x1($v0)
    ctx->r12 = MEM_BU(ctx->r2, 0X1);
    // 0x8005CD7C: lbu         $t3, 0x0($v0)
    ctx->r11 = MEM_BU(ctx->r2, 0X0);
    // 0x8005CD80: multu       $t4, $a2
    result = U64(U32(ctx->r12)) * U64(U32(ctx->r6)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8005CD84: sll         $t0, $t3, 5
    ctx->r8 = S32(ctx->r11 << 5);
    // 0x8005CD88: addu        $t0, $t0, $t3
    ctx->r8 = ADD32(ctx->r8, ctx->r11);
    // 0x8005CD8C: sll         $t0, $t0, 1
    ctx->r8 = S32(ctx->r8 << 1);
    // 0x8005CD90: addu        $t9, $a3, $t0
    ctx->r25 = ADD32(ctx->r7, ctx->r8);
    // 0x8005CD94: addu        $t2, $t9, $a1
    ctx->r10 = ADD32(ctx->r25, ctx->r5);
    // 0x8005CD98: lwl         $at, 0x0($t2)
    ctx->r1 = do_lwl(rdram, ctx->r1, ctx->r10, 0X0);
    // 0x8005CD9C: lwr         $at, 0x3($t2)
    ctx->r1 = do_lwr(rdram, ctx->r1, ctx->r10, 0X3);
    // 0x8005CDA0: mflo        $t6
    ctx->r14 = lo;
    // 0x8005CDA4: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x8005CDA8: subu        $t7, $t7, $t6
    ctx->r15 = SUB32(ctx->r15, ctx->r14);
    // 0x8005CDAC: sll         $t7, $t7, 1
    ctx->r15 = S32(ctx->r15 << 1);
    // 0x8005CDB0: addu        $t8, $v0, $t7
    ctx->r24 = ADD32(ctx->r2, ctx->r15);
    // 0x8005CDB4: addu        $t1, $t8, $a1
    ctx->r9 = ADD32(ctx->r24, ctx->r5);
    // 0x8005CDB8: swl         $at, 0x418($t1)
    do_swl(rdram, 0X418, ctx->r9, ctx->r1);
    // 0x8005CDBC: swr         $at, 0x41B($t1)
    do_swr(rdram, 0X41B, ctx->r9, ctx->r1);
    // 0x8005CDC0: lhu         $at, 0x4($t2)
    ctx->r1 = MEM_HU(ctx->r10, 0X4);
    // 0x8005CDC4: nop

    // 0x8005CDC8: sh          $at, 0x41C($t1)
    MEM_H(0X41C, ctx->r9) = ctx->r1;
    // 0x8005CDCC: lbu         $t6, 0x1($v0)
    ctx->r14 = MEM_BU(ctx->r2, 0X1);
    // 0x8005CDD0: lbu         $t9, 0x0($v0)
    ctx->r25 = MEM_BU(ctx->r2, 0X0);
    // 0x8005CDD4: multu       $t6, $a2
    result = U64(U32(ctx->r14)) * U64(U32(ctx->r6)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8005CDD8: sll         $t5, $t9, 5
    ctx->r13 = S32(ctx->r25 << 5);
    // 0x8005CDDC: addu        $t5, $t5, $t9
    ctx->r13 = ADD32(ctx->r13, ctx->r25);
    // 0x8005CDE0: sll         $t5, $t5, 1
    ctx->r13 = S32(ctx->r13 << 1);
    // 0x8005CDE4: addu        $t1, $a3, $t5
    ctx->r9 = ADD32(ctx->r7, ctx->r13);
    // 0x8005CDE8: addu        $t2, $t1, $a1
    ctx->r10 = ADD32(ctx->r9, ctx->r5);
    // 0x8005CDEC: lwl         $at, 0x6($t2)
    ctx->r1 = do_lwl(rdram, ctx->r1, ctx->r10, 0X6);
    // 0x8005CDF0: lwr         $at, 0x9($t2)
    ctx->r1 = do_lwr(rdram, ctx->r1, ctx->r10, 0X9);
    // 0x8005CDF4: mflo        $t7
    ctx->r15 = lo;
    // 0x8005CDF8: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x8005CDFC: subu        $t8, $t8, $t7
    ctx->r24 = SUB32(ctx->r24, ctx->r15);
    // 0x8005CE00: sll         $t8, $t8, 1
    ctx->r24 = S32(ctx->r24 << 1);
    // 0x8005CE04: addu        $t3, $v0, $t8
    ctx->r11 = ADD32(ctx->r2, ctx->r24);
    // 0x8005CE08: addu        $t0, $t3, $a1
    ctx->r8 = ADD32(ctx->r11, ctx->r5);
    // 0x8005CE0C: swl         $at, 0x41E($t0)
    do_swl(rdram, 0X41E, ctx->r8, ctx->r1);
    // 0x8005CE10: swr         $at, 0x421($t0)
    do_swr(rdram, 0X421, ctx->r8, ctx->r1);
    // 0x8005CE14: lhu         $at, 0xA($t2)
    ctx->r1 = MEM_HU(ctx->r10, 0XA);
    // 0x8005CE18: nop

    // 0x8005CE1C: sh          $at, 0x422($t0)
    MEM_H(0X422, ctx->r8) = ctx->r1;
    // 0x8005CE20: lbu         $t7, 0x1($v0)
    ctx->r15 = MEM_BU(ctx->r2, 0X1);
    // 0x8005CE24: lbu         $t1, 0x0($v0)
    ctx->r9 = MEM_BU(ctx->r2, 0X0);
    // 0x8005CE28: multu       $t7, $a2
    result = U64(U32(ctx->r15)) * U64(U32(ctx->r6)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8005CE2C: sll         $t4, $t1, 5
    ctx->r12 = S32(ctx->r9 << 5);
    // 0x8005CE30: addu        $t4, $t4, $t1
    ctx->r12 = ADD32(ctx->r12, ctx->r9);
    // 0x8005CE34: sll         $t4, $t4, 1
    ctx->r12 = S32(ctx->r12 << 1);
    // 0x8005CE38: addu        $t0, $a3, $t4
    ctx->r8 = ADD32(ctx->r7, ctx->r12);
    // 0x8005CE3C: addu        $t2, $t0, $a1
    ctx->r10 = ADD32(ctx->r8, ctx->r5);
    // 0x8005CE40: lwl         $at, 0xC($t2)
    ctx->r1 = do_lwl(rdram, ctx->r1, ctx->r10, 0XC);
    // 0x8005CE44: lwr         $at, 0xF($t2)
    ctx->r1 = do_lwr(rdram, ctx->r1, ctx->r10, 0XF);
    // 0x8005CE48: mflo        $t8
    ctx->r24 = lo;
    // 0x8005CE4C: sll         $t3, $t8, 2
    ctx->r11 = S32(ctx->r24 << 2);
    // 0x8005CE50: subu        $t3, $t3, $t8
    ctx->r11 = SUB32(ctx->r11, ctx->r24);
    // 0x8005CE54: sll         $t3, $t3, 1
    ctx->r11 = S32(ctx->r11 << 1);
    // 0x8005CE58: addu        $t9, $v0, $t3
    ctx->r25 = ADD32(ctx->r2, ctx->r11);
    // 0x8005CE5C: addu        $t5, $t9, $a1
    ctx->r13 = ADD32(ctx->r25, ctx->r5);
    // 0x8005CE60: swl         $at, 0x424($t5)
    do_swl(rdram, 0X424, ctx->r13, ctx->r1);
    // 0x8005CE64: swr         $at, 0x427($t5)
    do_swr(rdram, 0X427, ctx->r13, ctx->r1);
    // 0x8005CE68: lhu         $at, 0x10($t2)
    ctx->r1 = MEM_HU(ctx->r10, 0X10);
    // 0x8005CE6C: nop

    // 0x8005CE70: sh          $at, 0x428($t5)
    MEM_H(0X428, ctx->r13) = ctx->r1;
    // 0x8005CE74: lbu         $t8, 0x1($v0)
    ctx->r24 = MEM_BU(ctx->r2, 0X1);
    // 0x8005CE78: lbu         $t0, 0x0($v0)
    ctx->r8 = MEM_BU(ctx->r2, 0X0);
    // 0x8005CE7C: multu       $t8, $a2
    result = U64(U32(ctx->r24)) * U64(U32(ctx->r6)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8005CE80: sll         $t6, $t0, 5
    ctx->r14 = S32(ctx->r8 << 5);
    // 0x8005CE84: addu        $t6, $t6, $t0
    ctx->r14 = ADD32(ctx->r14, ctx->r8);
    // 0x8005CE88: sll         $t6, $t6, 1
    ctx->r14 = S32(ctx->r14 << 1);
    // 0x8005CE8C: addu        $t5, $a3, $t6
    ctx->r13 = ADD32(ctx->r7, ctx->r14);
    // 0x8005CE90: addu        $t2, $t5, $a1
    ctx->r10 = ADD32(ctx->r13, ctx->r5);
    // 0x8005CE94: lwl         $at, 0x12($t2)
    ctx->r1 = do_lwl(rdram, ctx->r1, ctx->r10, 0X12);
    // 0x8005CE98: lwr         $at, 0x15($t2)
    ctx->r1 = do_lwr(rdram, ctx->r1, ctx->r10, 0X15);
    // 0x8005CE9C: mflo        $t3
    ctx->r11 = lo;
    // 0x8005CEA0: sll         $t9, $t3, 2
    ctx->r25 = S32(ctx->r11 << 2);
    // 0x8005CEA4: subu        $t9, $t9, $t3
    ctx->r25 = SUB32(ctx->r25, ctx->r11);
    // 0x8005CEA8: sll         $t9, $t9, 1
    ctx->r25 = S32(ctx->r25 << 1);
    // 0x8005CEAC: addu        $t1, $v0, $t9
    ctx->r9 = ADD32(ctx->r2, ctx->r25);
    // 0x8005CEB0: addu        $t4, $t1, $a1
    ctx->r12 = ADD32(ctx->r9, ctx->r5);
    // 0x8005CEB4: swl         $at, 0x42A($t4)
    do_swl(rdram, 0X42A, ctx->r12, ctx->r1);
    // 0x8005CEB8: swr         $at, 0x42D($t4)
    do_swr(rdram, 0X42D, ctx->r12, ctx->r1);
    // 0x8005CEBC: lhu         $at, 0x16($t2)
    ctx->r1 = MEM_HU(ctx->r10, 0X16);
    // 0x8005CEC0: addiu       $a1, $a1, 0x18
    ctx->r5 = ADD32(ctx->r5, 0X18);
    // 0x8005CEC4: bne         $a1, $v1, L_8005CD78
    if (ctx->r5 != ctx->r3) {
        // 0x8005CEC8: sh          $at, 0x42E($t4)
        MEM_H(0X42E, ctx->r12) = ctx->r1;
            goto L_8005CD78;
    }
    // 0x8005CEC8: sh          $at, 0x42E($t4)
    MEM_H(0X42E, ctx->r12) = ctx->r1;
    // 0x8005CECC: jr          $ra
    // 0x8005CED0: nop

    return;
    // 0x8005CED0: nop

;}
RECOMP_FUNC void func_8005CED4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8005CED4: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x8005CED8: addu        $t6, $t6, $a0
    ctx->r14 = ADD32(ctx->r14, ctx->r4);
    // 0x8005CEDC: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x8005CEE0: addu        $t6, $t6, $a0
    ctx->r14 = ADD32(ctx->r14, ctx->r4);
    // 0x8005CEE4: sll         $t6, $t6, 3
    ctx->r14 = S32(ctx->r14 << 3);
    // 0x8005CEE8: addu        $t6, $t6, $a0
    ctx->r14 = ADD32(ctx->r14, ctx->r4);
    // 0x8005CEEC: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x8005CEF0: addu        $t6, $t6, $a0
    ctx->r14 = ADD32(ctx->r14, ctx->r4);
    // 0x8005CEF4: lui         $t7, 0x8012
    ctx->r15 = S32(0X8012 << 16);
    // 0x8005CEF8: addiu       $t7, $t7, -0x2CF0
    ctx->r15 = ADD32(ctx->r15, -0X2CF0);
    // 0x8005CEFC: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x8005CF00: addu        $v1, $t6, $t7
    ctx->r3 = ADD32(ctx->r14, ctx->r15);
    // 0x8005CF04: lui         $a2, 0x800B
    ctx->r6 = S32(0X800B << 16);
    // 0x8005CF08: lui         $t0, 0x800B
    ctx->r8 = S32(0X800B << 16);
    // 0x8005CF0C: lui         $t2, 0x800B
    ctx->r10 = S32(0X800B << 16);
    // 0x8005CF10: lui         $t4, 0x800B
    ctx->r12 = S32(0X800B << 16);
    // 0x8005CF14: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x8005CF18: addiu       $v0, $v0, -0x4E2E
    ctx->r2 = ADD32(ctx->r2, -0X4E2E);
    // 0x8005CF1C: addiu       $t4, $t4, -0x524E
    ctx->r12 = ADD32(ctx->r12, -0X524E);
    // 0x8005CF20: addiu       $t2, $t2, -0x5254
    ctx->r10 = ADD32(ctx->r10, -0X5254);
    // 0x8005CF24: addiu       $t0, $t0, -0x525A
    ctx->r8 = ADD32(ctx->r8, -0X525A);
    // 0x8005CF28: addiu       $a2, $a2, -0x5260
    ctx->r6 = ADD32(ctx->r6, -0X5260);
    // 0x8005CF2C: addiu       $a1, $v1, 0x418
    ctx->r5 = ADD32(ctx->r3, 0X418);
    // 0x8005CF30: addiu       $a3, $v1, 0x41E
    ctx->r7 = ADD32(ctx->r3, 0X41E);
    // 0x8005CF34: addiu       $t1, $v1, 0x424
    ctx->r9 = ADD32(ctx->r3, 0X424);
    // 0x8005CF38: addiu       $t3, $v1, 0x42A
    ctx->r11 = ADD32(ctx->r3, 0X42A);
L_8005CF3C:
    // 0x8005CF3C: lwl         $at, 0x0($a2)
    ctx->r1 = do_lwl(rdram, ctx->r1, ctx->r6, 0X0);
    // 0x8005CF40: lwr         $at, 0x3($a2)
    ctx->r1 = do_lwr(rdram, ctx->r1, ctx->r6, 0X3);
    // 0x8005CF44: addiu       $t4, $t4, 0x18
    ctx->r12 = ADD32(ctx->r12, 0X18);
    // 0x8005CF48: swl         $at, 0x0($a1)
    do_swl(rdram, 0X0, ctx->r5, ctx->r1);
    // 0x8005CF4C: swr         $at, 0x3($a1)
    do_swr(rdram, 0X3, ctx->r5, ctx->r1);
    // 0x8005CF50: lhu         $at, 0x4($a2)
    ctx->r1 = MEM_HU(ctx->r6, 0X4);
    // 0x8005CF54: addiu       $a1, $a1, 0x18
    ctx->r5 = ADD32(ctx->r5, 0X18);
    // 0x8005CF58: sh          $at, -0x14($a1)
    MEM_H(-0X14, ctx->r5) = ctx->r1;
    // 0x8005CF5C: lwl         $at, 0x0($t0)
    ctx->r1 = do_lwl(rdram, ctx->r1, ctx->r8, 0X0);
    // 0x8005CF60: lwr         $at, 0x3($t0)
    ctx->r1 = do_lwr(rdram, ctx->r1, ctx->r8, 0X3);
    // 0x8005CF64: addiu       $a2, $a2, 0x18
    ctx->r6 = ADD32(ctx->r6, 0X18);
    // 0x8005CF68: swl         $at, 0x0($a3)
    do_swl(rdram, 0X0, ctx->r7, ctx->r1);
    // 0x8005CF6C: swr         $at, 0x3($a3)
    do_swr(rdram, 0X3, ctx->r7, ctx->r1);
    // 0x8005CF70: lhu         $at, 0x4($t0)
    ctx->r1 = MEM_HU(ctx->r8, 0X4);
    // 0x8005CF74: addiu       $a3, $a3, 0x18
    ctx->r7 = ADD32(ctx->r7, 0X18);
    // 0x8005CF78: sh          $at, -0x14($a3)
    MEM_H(-0X14, ctx->r7) = ctx->r1;
    // 0x8005CF7C: lwl         $at, 0x0($t2)
    ctx->r1 = do_lwl(rdram, ctx->r1, ctx->r10, 0X0);
    // 0x8005CF80: lwr         $at, 0x3($t2)
    ctx->r1 = do_lwr(rdram, ctx->r1, ctx->r10, 0X3);
    // 0x8005CF84: addiu       $t0, $t0, 0x18
    ctx->r8 = ADD32(ctx->r8, 0X18);
    // 0x8005CF88: swl         $at, 0x0($t1)
    do_swl(rdram, 0X0, ctx->r9, ctx->r1);
    // 0x8005CF8C: swr         $at, 0x3($t1)
    do_swr(rdram, 0X3, ctx->r9, ctx->r1);
    // 0x8005CF90: lhu         $at, 0x4($t2)
    ctx->r1 = MEM_HU(ctx->r10, 0X4);
    // 0x8005CF94: addiu       $t1, $t1, 0x18
    ctx->r9 = ADD32(ctx->r9, 0X18);
    // 0x8005CF98: sh          $at, -0x14($t1)
    MEM_H(-0X14, ctx->r9) = ctx->r1;
    // 0x8005CF9C: lwl         $at, -0x18($t4)
    ctx->r1 = do_lwl(rdram, ctx->r1, ctx->r12, -0X18);
    // 0x8005CFA0: lwr         $at, -0x15($t4)
    ctx->r1 = do_lwr(rdram, ctx->r1, ctx->r12, -0X15);
    // 0x8005CFA4: addiu       $t2, $t2, 0x18
    ctx->r10 = ADD32(ctx->r10, 0X18);
    // 0x8005CFA8: swl         $at, 0x0($t3)
    do_swl(rdram, 0X0, ctx->r11, ctx->r1);
    // 0x8005CFAC: swr         $at, 0x3($t3)
    do_swr(rdram, 0X3, ctx->r11, ctx->r1);
    // 0x8005CFB0: lhu         $at, -0x14($t4)
    ctx->r1 = MEM_HU(ctx->r12, -0X14);
    // 0x8005CFB4: addiu       $t3, $t3, 0x18
    ctx->r11 = ADD32(ctx->r11, 0X18);
    // 0x8005CFB8: bne         $t4, $v0, L_8005CF3C
    if (ctx->r12 != ctx->r2) {
        // 0x8005CFBC: sh          $at, -0x14($t3)
        MEM_H(-0X14, ctx->r11) = ctx->r1;
            goto L_8005CF3C;
    }
    // 0x8005CFBC: sh          $at, -0x14($t3)
    MEM_H(-0X14, ctx->r11) = ctx->r1;
    // 0x8005CFC0: jr          $ra
    // 0x8005CFC4: nop

    return;
    // 0x8005CFC4: nop

;}
RECOMP_FUNC void func_8005CFC8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8005CFC8: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8005CFCC: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x8005CFD0: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x8005CFD4: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8005CFD8: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x8005CFDC: addiu       $s1, $zero, 0x2
    ctx->r17 = ADD32(0, 0X2);
L_8005CFE0:
    // 0x8005CFE0: jal         0x8005CED4
    // 0x8005CFE4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8005CED4(rdram, ctx);
        goto after_0;
    // 0x8005CFE4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_0:
    // 0x8005CFE8: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x8005CFEC: bne         $s0, $s1, L_8005CFE0
    if (ctx->r16 != ctx->r17) {
        // 0x8005CFF0: nop
    
            goto L_8005CFE0;
    }
    // 0x8005CFF0: nop

    // 0x8005CFF4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8005CFF8: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x8005CFFC: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x8005D000: jr          $ra
    // 0x8005D004: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x8005D004: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_8005D008(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8005D008: sll         $t9, $a1, 2
    ctx->r25 = S32(ctx->r5 << 2);
    // 0x8005D00C: addu        $t9, $t9, $a1
    ctx->r25 = ADD32(ctx->r25, ctx->r5);
    // 0x8005D010: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x8005D014: addu        $t9, $t9, $a1
    ctx->r25 = ADD32(ctx->r25, ctx->r5);
    // 0x8005D018: sll         $t9, $t9, 3
    ctx->r25 = S32(ctx->r25 << 3);
    // 0x8005D01C: lw          $v1, 0xD4($a0)
    ctx->r3 = MEM_W(ctx->r4, 0XD4);
    // 0x8005D020: addu        $t9, $t9, $a1
    ctx->r25 = ADD32(ctx->r25, ctx->r5);
    // 0x8005D024: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x8005D028: lbu         $t6, 0x4($v1)
    ctx->r14 = MEM_BU(ctx->r3, 0X4);
    // 0x8005D02C: addu        $t9, $t9, $a1
    ctx->r25 = ADD32(ctx->r25, ctx->r5);
    // 0x8005D030: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x8005D034: lui         $t0, 0x8012
    ctx->r8 = S32(0X8012 << 16);
    // 0x8005D038: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x8005D03C: andi        $t7, $t6, 0xFF7F
    ctx->r15 = ctx->r14 & 0XFF7F;
    // 0x8005D040: lhu         $t0, -0x2CE8($t0)
    ctx->r8 = MEM_HU(ctx->r8, -0X2CE8);
    // 0x8005D044: sll         $t8, $t7, 1
    ctx->r24 = S32(ctx->r15 << 1);
    // 0x8005D048: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x8005D04C: addu        $v0, $v0, $t8
    ctx->r2 = ADD32(ctx->r2, ctx->r24);
    // 0x8005D050: lh          $v0, -0x2ABC($v0)
    ctx->r2 = MEM_H(ctx->r2, -0X2ABC);
    // 0x8005D054: andi        $t1, $t0, 0x1
    ctx->r9 = ctx->r8 & 0X1;
    // 0x8005D058: beq         $t1, $zero, L_8005D0A0
    if (ctx->r9 == 0) {
        // 0x8005D05C: nop
    
            goto L_8005D0A0;
    }
    // 0x8005D05C: nop

    // 0x8005D060: lh          $t2, 0x0($v1)
    ctx->r10 = MEM_H(ctx->r3, 0X0);
    // 0x8005D064: mtc1        $zero, $f2
    ctx->f2.u32l = 0;
    // 0x8005D068: addu        $a1, $t2, $v0
    ctx->r5 = ADD32(ctx->r10, ctx->r2);
    // 0x8005D06C: addiu       $a1, $a1, -0x1FD
    ctx->r5 = ADD32(ctx->r5, -0X1FD);
    // 0x8005D070: sll         $t3, $a1, 16
    ctx->r11 = S32(ctx->r5 << 16);
    // 0x8005D074: sra         $t4, $t3, 16
    ctx->r12 = S32(SIGNED(ctx->r11) >> 16);
    // 0x8005D078: slti        $at, $t4, -0x9
    ctx->r1 = SIGNED(ctx->r12) < -0X9 ? 1 : 0;
    // 0x8005D07C: bne         $at, $zero, L_8005D090
    if (ctx->r1 != 0) {
        // 0x8005D080: sh          $t4, 0x2E($a0)
        MEM_H(0X2E, ctx->r4) = ctx->r12;
            goto L_8005D090;
    }
    // 0x8005D080: sh          $t4, 0x2E($a0)
    MEM_H(0X2E, ctx->r4) = ctx->r12;
    // 0x8005D084: addiu       $t5, $zero, -0xA
    ctx->r13 = ADD32(0, -0XA);
    // 0x8005D088: lw          $v1, 0xD4($a0)
    ctx->r3 = MEM_W(ctx->r4, 0XD4);
    // 0x8005D08C: sh          $t5, 0x2E($a0)
    MEM_H(0X2E, ctx->r4) = ctx->r13;
L_8005D090:
    // 0x8005D090: lh          $t6, 0x2($v1)
    ctx->r14 = MEM_H(ctx->r3, 0X2);
    // 0x8005D094: mov.s       $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    ctx->f0.fl = ctx->f2.fl;
    // 0x8005D098: jr          $ra
    // 0x8005D09C: sh          $t6, 0x30($a0)
    MEM_H(0X30, ctx->r4) = ctx->r14;
    return;
    // 0x8005D09C: sh          $t6, 0x30($a0)
    MEM_H(0X30, ctx->r4) = ctx->r14;
L_8005D0A0:
    // 0x8005D0A0: lh          $t7, 0x0($v1)
    ctx->r15 = MEM_H(ctx->r3, 0X0);
    // 0x8005D0A4: addiu       $t1, $zero, 0xA
    ctx->r9 = ADD32(0, 0XA);
    // 0x8005D0A8: negu        $t8, $t7
    ctx->r24 = SUB32(0, ctx->r15);
    // 0x8005D0AC: subu        $a1, $t8, $v0
    ctx->r5 = SUB32(ctx->r24, ctx->r2);
    // 0x8005D0B0: addiu       $a1, $a1, 0x1FD
    ctx->r5 = ADD32(ctx->r5, 0X1FD);
    // 0x8005D0B4: sll         $t9, $a1, 16
    ctx->r25 = S32(ctx->r5 << 16);
    // 0x8005D0B8: sra         $t0, $t9, 16
    ctx->r8 = S32(SIGNED(ctx->r25) >> 16);
    // 0x8005D0BC: slti        $at, $t0, 0xA
    ctx->r1 = SIGNED(ctx->r8) < 0XA ? 1 : 0;
    // 0x8005D0C0: beq         $at, $zero, L_8005D0D0
    if (ctx->r1 == 0) {
        // 0x8005D0C4: sh          $t0, 0x2E($a0)
        MEM_H(0X2E, ctx->r4) = ctx->r8;
            goto L_8005D0D0;
    }
    // 0x8005D0C4: sh          $t0, 0x2E($a0)
    MEM_H(0X2E, ctx->r4) = ctx->r8;
    // 0x8005D0C8: lw          $v1, 0xD4($a0)
    ctx->r3 = MEM_W(ctx->r4, 0XD4);
    // 0x8005D0CC: sh          $t1, 0x2E($a0)
    MEM_H(0X2E, ctx->r4) = ctx->r9;
L_8005D0D0:
    // 0x8005D0D0: lh          $t2, 0x2($v1)
    ctx->r10 = MEM_H(ctx->r3, 0X2);
    // 0x8005D0D4: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x8005D0D8: negu        $t3, $t2
    ctx->r11 = SUB32(0, ctx->r10);
    // 0x8005D0DC: sh          $t3, 0x30($a0)
    MEM_H(0X30, ctx->r4) = ctx->r11;
    // 0x8005D0E0: lwc1        $f2, -0x6774($at)
    ctx->f2.u32l = MEM_W(ctx->r1, -0X6774);
    // 0x8005D0E4: nop

    // 0x8005D0E8: jr          $ra
    // 0x8005D0EC: mov.s       $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    ctx->f0.fl = ctx->f2.fl;
    return;
    // 0x8005D0EC: mov.s       $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    ctx->f0.fl = ctx->f2.fl;
;}
RECOMP_FUNC void func_8005D0F0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8005D0F0: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x8005D0F4: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x8005D0F8: lwc1        $f4, -0x6770($at)
    ctx->f4.u32l = MEM_W(ctx->r1, -0X6770);
    // 0x8005D0FC: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8005D100: c.lt.s      $f12, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f12.fl < ctx->f4.fl;
    // 0x8005D104: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8005D108: bc1f        L_8005D164
    if (!c1cs) {
        // 0x8005D10C: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_8005D164;
    }
    // 0x8005D10C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8005D110: lwc1        $f12, 0x44($a0)
    ctx->f12.u32l = MEM_W(ctx->r4, 0X44);
    // 0x8005D114: lwc1        $f14, 0x4C($a0)
    ctx->f14.u32l = MEM_W(ctx->r4, 0X4C);
    // 0x8005D118: jal         0x8001C5D0
    // 0x8005D11C: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    func_8001C5D0(rdram, ctx);
        goto after_0;
    // 0x8005D11C: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    after_0:
    // 0x8005D120: swc1        $f0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f0.u32l;
    // 0x8005D124: jal         0x80081040
    // 0x8005D128: mov.s       $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    ctx->f12.fl = ctx->f0.fl;
    func_80081040(rdram, ctx);
        goto after_1;
    // 0x8005D128: mov.s       $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    ctx->f12.fl = ctx->f0.fl;
    after_1:
    // 0x8005D12C: lui         $at, 0x42C6
    ctx->r1 = S32(0X42C6 << 16);
    // 0x8005D130: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x8005D134: lw          $t6, 0x20($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X20);
    // 0x8005D138: mul.s       $f8, $f0, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f0.fl, ctx->f6.fl);
    // 0x8005D13C: swc1        $f8, 0x4C($t6)
    MEM_W(0X4C, ctx->r14) = ctx->f8.u32l;
    // 0x8005D140: lwc1        $f12, 0x1C($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x8005D144: jal         0x80080E80
    // 0x8005D148: nop

    func_80080E80(rdram, ctx);
        goto after_2;
    // 0x8005D148: nop

    after_2:
    // 0x8005D14C: lui         $at, 0x42C6
    ctx->r1 = S32(0X42C6 << 16);
    // 0x8005D150: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x8005D154: lw          $t7, 0x20($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X20);
    // 0x8005D158: mul.s       $f16, $f0, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = MUL_S(ctx->f0.fl, ctx->f10.fl);
    // 0x8005D15C: swc1        $f16, 0x44($t7)
    MEM_W(0X44, ctx->r15) = ctx->f16.u32l;
    // 0x8005D160: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8005D164:
    // 0x8005D164: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x8005D168: jr          $ra
    // 0x8005D16C: nop

    return;
    // 0x8005D16C: nop

;}
RECOMP_FUNC void func_8005D170(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8005D170: addiu       $sp, $sp, -0x78
    ctx->r29 = ADD32(ctx->r29, -0X78);
    // 0x8005D174: swc1        $f22, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f22.u32l;
    // 0x8005D178: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x8005D17C: lwc1        $f22, -0x676C($at)
    ctx->f22.u32l = MEM_W(ctx->r1, -0X676C);
    // 0x8005D180: swc1        $f30, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->f30.u32l;
    // 0x8005D184: lui         $at, 0x4170
    ctx->r1 = S32(0X4170 << 16);
    // 0x8005D188: mtc1        $at, $f30
    ctx->f30.u32l = ctx->r1;
    // 0x8005D18C: swc1        $f28, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f28.u32l;
    // 0x8005D190: lui         $at, 0xC080
    ctx->r1 = S32(0XC080 << 16);
    // 0x8005D194: mtc1        $at, $f28
    ctx->f28.u32l = ctx->r1;
    // 0x8005D198: sw          $s7, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r23;
    // 0x8005D19C: sw          $s6, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r22;
    // 0x8005D1A0: sw          $s4, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r20;
    // 0x8005D1A4: sw          $s3, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r19;
    // 0x8005D1A8: swc1        $f26, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f26.u32l;
    // 0x8005D1AC: swc1        $f24, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f24.u32l;
    // 0x8005D1B0: lui         $at, 0xC0A0
    ctx->r1 = S32(0XC0A0 << 16);
    // 0x8005D1B4: sw          $fp, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->r30;
    // 0x8005D1B8: sw          $s5, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r21;
    // 0x8005D1BC: swc1        $f21, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x8005D1C0: swc1        $f20, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f20.u32l;
    // 0x8005D1C4: lui         $s6, 0x8009
    ctx->r22 = S32(0X8009 << 16);
    // 0x8005D1C8: lui         $s7, 0x8012
    ctx->r23 = S32(0X8012 << 16);
    // 0x8005D1CC: mtc1        $at, $f26
    ctx->f26.u32l = ctx->r1;
    // 0x8005D1D0: mtc1        $zero, $f24
    ctx->f24.u32l = 0;
    // 0x8005D1D4: lhu         $s3, 0x70($sp)
    ctx->r19 = MEM_HU(ctx->r29, 0X70);
    // 0x8005D1D8: lhu         $s4, 0x72($sp)
    ctx->r20 = MEM_HU(ctx->r29, 0X72);
    // 0x8005D1DC: sw          $ra, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->r31;
    // 0x8005D1E0: sw          $s2, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r18;
    // 0x8005D1E4: sw          $s1, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r17;
    // 0x8005D1E8: sw          $s0, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r16;
    // 0x8005D1EC: swc1        $f31, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->f_odd[(31 - 1) * 2];
    // 0x8005D1F0: swc1        $f29, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f_odd[(29 - 1) * 2];
    // 0x8005D1F4: swc1        $f27, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f_odd[(27 - 1) * 2];
    // 0x8005D1F8: swc1        $f25, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f_odd[(25 - 1) * 2];
    // 0x8005D1FC: swc1        $f23, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f_odd[(23 - 1) * 2];
    // 0x8005D200: addiu       $s7, $s7, -0x2CF0
    ctx->r23 = ADD32(ctx->r23, -0X2CF0);
    // 0x8005D204: addiu       $s6, $s6, 0x3B20
    ctx->r22 = ADD32(ctx->r22, 0X3B20);
    // 0x8005D208: or          $s5, $zero, $zero
    ctx->r21 = 0 | 0;
    // 0x8005D20C: addiu       $fp, $zero, 0xA94
    ctx->r30 = ADD32(0, 0XA94);
    // 0x8005D210: mov.s       $f20, $f22
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 22);
    ctx->f20.fl = ctx->f22.fl;
L_8005D214:
    // 0x8005D214: multu       $s5, $fp
    result = U64(U32(ctx->r21)) * U64(U32(ctx->r30)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8005D218: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    // 0x8005D21C: mflo        $t6
    ctx->r14 = lo;
    // 0x8005D220: addu        $s2, $s7, $t6
    ctx->r18 = ADD32(ctx->r23, ctx->r14);
    // 0x8005D224: lw          $s0, 0x18($s2)
    ctx->r16 = MEM_W(ctx->r18, 0X18);
    // 0x8005D228: nop

L_8005D22C:
    // 0x8005D22C: lhu         $t7, 0xC($s0)
    ctx->r15 = MEM_HU(ctx->r16, 0XC);
    // 0x8005D230: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8005D234: beq         $t7, $zero, L_8005D2CC
    if (ctx->r15 == 0) {
        // 0x8005D238: nop
    
            goto L_8005D2CC;
    }
    // 0x8005D238: nop

    // 0x8005D23C: jal         0x8005D008
    // 0x8005D240: or          $a1, $s5, $zero
    ctx->r5 = ctx->r21 | 0;
    func_8005D008(rdram, ctx);
        goto after_0;
    // 0x8005D240: or          $a1, $s5, $zero
    ctx->r5 = ctx->r21 | 0;
    after_0:
    // 0x8005D244: lh          $t8, 0x2E($s0)
    ctx->r24 = MEM_H(ctx->r16, 0X2E);
    // 0x8005D248: lh          $t9, 0x30($s0)
    ctx->r25 = MEM_H(ctx->r16, 0X30);
    // 0x8005D24C: mtc1        $t8, $f4
    ctx->f4.u32l = ctx->r24;
    // 0x8005D250: mtc1        $t9, $f6
    ctx->f6.u32l = ctx->r25;
    // 0x8005D254: cvt.s.w     $f2, $f4
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    ctx->f2.fl = CVT_S_W(ctx->f4.u32l);
    // 0x8005D258: swc1        $f0, 0x8C($s0)
    MEM_W(0X8C, ctx->r16) = ctx->f0.u32l;
    // 0x8005D25C: cvt.s.w     $f12, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    ctx->f12.fl = CVT_S_W(ctx->f6.u32l);
    // 0x8005D260: swc1        $f2, 0x4C($s0)
    MEM_W(0X4C, ctx->r16) = ctx->f2.u32l;
    // 0x8005D264: mul.s       $f8, $f2, $f2
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f8.fl = MUL_S(ctx->f2.fl, ctx->f2.fl);
    // 0x8005D268: swc1        $f12, 0x44($s0)
    MEM_W(0X44, ctx->r16) = ctx->f12.u32l;
    // 0x8005D26C: lhu         $t0, 0x8($s2)
    ctx->r8 = MEM_HU(ctx->r18, 0X8);
    // 0x8005D270: mul.s       $f10, $f12, $f12
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f10.fl = MUL_S(ctx->f12.fl, ctx->f12.fl);
    // 0x8005D274: andi        $t1, $t0, 0x2
    ctx->r9 = ctx->r8 & 0X2;
    // 0x8005D278: beq         $t1, $zero, L_8005D2C0
    if (ctx->r9 == 0) {
        // 0x8005D27C: add.s       $f14, $f8, $f10
        CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f14.fl = ctx->f8.fl + ctx->f10.fl;
            goto L_8005D2C0;
    }
    // 0x8005D27C: add.s       $f14, $f8, $f10
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f14.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x8005D280: c.lt.s      $f14, $f20
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 20);
    c1cs = ctx->f14.fl < ctx->f20.fl;
    // 0x8005D284: nop

    // 0x8005D288: bc1f        L_8005D2A4
    if (!c1cs) {
        // 0x8005D28C: nop
    
            goto L_8005D2A4;
    }
    // 0x8005D28C: nop

    // 0x8005D290: mov.s       $f22, $f20
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 20);
    ctx->f22.fl = ctx->f20.fl;
    // 0x8005D294: andi        $s3, $s4, 0xFFFF
    ctx->r19 = ctx->r20 & 0XFFFF;
    // 0x8005D298: mov.s       $f20, $f14
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 14);
    ctx->f20.fl = ctx->f14.fl;
    // 0x8005D29C: b           L_8005D2CC
    // 0x8005D2A0: andi        $s4, $s1, 0xFFFF
    ctx->r20 = ctx->r17 & 0XFFFF;
        goto L_8005D2CC;
    // 0x8005D2A0: andi        $s4, $s1, 0xFFFF
    ctx->r20 = ctx->r17 & 0XFFFF;
L_8005D2A4:
    // 0x8005D2A4: c.lt.s      $f14, $f22
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 22);
    c1cs = ctx->f14.fl < ctx->f22.fl;
    // 0x8005D2A8: nop

    // 0x8005D2AC: bc1f        L_8005D2CC
    if (!c1cs) {
        // 0x8005D2B0: nop
    
            goto L_8005D2CC;
    }
    // 0x8005D2B0: nop

    // 0x8005D2B4: mov.s       $f22, $f14
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 14);
    ctx->f22.fl = ctx->f14.fl;
    // 0x8005D2B8: b           L_8005D2CC
    // 0x8005D2BC: andi        $s3, $s1, 0xFFFF
    ctx->r19 = ctx->r17 & 0XFFFF;
        goto L_8005D2CC;
    // 0x8005D2BC: andi        $s3, $s1, 0xFFFF
    ctx->r19 = ctx->r17 & 0XFFFF;
L_8005D2C0:
    // 0x8005D2C0: mfc1        $a1, $f14
    ctx->r5 = (int32_t)ctx->f14.u32l;
    // 0x8005D2C4: jal         0x8005D0F0
    // 0x8005D2C8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8005D0F0(rdram, ctx);
        goto after_1;
    // 0x8005D2C8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
L_8005D2CC:
    // 0x8005D2CC: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x8005D2D0: sll         $t2, $s1, 16
    ctx->r10 = S32(ctx->r17 << 16);
    // 0x8005D2D4: sra         $s1, $t2, 16
    ctx->r17 = S32(SIGNED(ctx->r10) >> 16);
    // 0x8005D2D8: slti        $at, $s1, 0xB
    ctx->r1 = SIGNED(ctx->r17) < 0XB ? 1 : 0;
    // 0x8005D2DC: bne         $at, $zero, L_8005D22C
    if (ctx->r1 != 0) {
        // 0x8005D2E0: addiu       $s0, $s0, 0xF8
        ctx->r16 = ADD32(ctx->r16, 0XF8);
            goto L_8005D22C;
    }
    // 0x8005D2E0: addiu       $s0, $s0, 0xF8
    ctx->r16 = ADD32(ctx->r16, 0XF8);
    // 0x8005D2E4: lhu         $v0, 0x8($s2)
    ctx->r2 = MEM_HU(ctx->r18, 0X8);
    // 0x8005D2E8: sll         $t4, $s5, 2
    ctx->r12 = S32(ctx->r21 << 2);
    // 0x8005D2EC: andi        $v1, $v0, 0x2
    ctx->r3 = ctx->r2 & 0X2;
    // 0x8005D2F0: beq         $v1, $zero, L_8005D3F0
    if (ctx->r3 == 0) {
        // 0x8005D2F4: addu        $t4, $t4, $s5
        ctx->r12 = ADD32(ctx->r12, ctx->r21);
            goto L_8005D3F0;
    }
    // 0x8005D2F4: addu        $t4, $t4, $s5
    ctx->r12 = ADD32(ctx->r12, ctx->r21);
    // 0x8005D2F8: sll         $t5, $s4, 5
    ctx->r13 = S32(ctx->r20 << 5);
    // 0x8005D2FC: lw          $t4, 0x18($s2)
    ctx->r12 = MEM_W(ctx->r18, 0X18);
    // 0x8005D300: subu        $t5, $t5, $s4
    ctx->r13 = SUB32(ctx->r13, ctx->r20);
    // 0x8005D304: sll         $s1, $s3, 5
    ctx->r17 = S32(ctx->r19 << 5);
    // 0x8005D308: sll         $t5, $t5, 3
    ctx->r13 = S32(ctx->r13 << 3);
    // 0x8005D30C: subu        $s1, $s1, $s3
    ctx->r17 = SUB32(ctx->r17, ctx->r19);
    // 0x8005D310: andi        $t6, $v0, 0x1
    ctx->r14 = ctx->r2 & 0X1;
    // 0x8005D314: sll         $s1, $s1, 3
    ctx->r17 = S32(ctx->r17 << 3);
    // 0x8005D318: beq         $t6, $zero, L_8005D328
    if (ctx->r14 == 0) {
        // 0x8005D31C: addu        $s0, $t4, $t5
        ctx->r16 = ADD32(ctx->r12, ctx->r13);
            goto L_8005D328;
    }
    // 0x8005D31C: addu        $s0, $t4, $t5
    ctx->r16 = ADD32(ctx->r12, ctx->r13);
    // 0x8005D320: b           L_8005D338
    // 0x8005D324: swc1        $f26, 0x4C($s0)
    MEM_W(0X4C, ctx->r16) = ctx->f26.u32l;
        goto L_8005D338;
    // 0x8005D324: swc1        $f26, 0x4C($s0)
    MEM_W(0X4C, ctx->r16) = ctx->f26.u32l;
L_8005D328:
    // 0x8005D328: lui         $at, 0x40A0
    ctx->r1 = S32(0X40A0 << 16);
    // 0x8005D32C: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x8005D330: nop

    // 0x8005D334: swc1        $f16, 0x4C($s0)
    MEM_W(0X4C, ctx->r16) = ctx->f16.u32l;
L_8005D338:
    // 0x8005D338: swc1        $f24, 0x44($s0)
    MEM_W(0X44, ctx->r16) = ctx->f24.u32l;
    // 0x8005D33C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8005D340: jal         0x8024BC08
    // 0x8005D344: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    LOOKUP_FUNC(0x8024BC08)(rdram, ctx);
        goto after_2;
    // 0x8005D344: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_2:
    // 0x8005D348: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x8005D34C: sw          $s0, 0xB2C($at)
    MEM_W(0XB2C, ctx->r1) = ctx->r16;
    // 0x8005D350: jal         0x80055528
    // 0x8005D354: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80055528(rdram, ctx);
        goto after_3;
    // 0x8005D354: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_3:
    // 0x8005D358: lw          $t7, 0x0($s6)
    ctx->r15 = MEM_W(ctx->r22, 0X0);
    // 0x8005D35C: lui         $at, 0x4080
    ctx->r1 = S32(0X4080 << 16);
    // 0x8005D360: swc1        $f24, 0x8($t7)
    MEM_W(0X8, ctx->r15) = ctx->f24.u32l;
    // 0x8005D364: lw          $t8, 0x0($s6)
    ctx->r24 = MEM_W(ctx->r22, 0X0);
    // 0x8005D368: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    // 0x8005D36C: swc1        $f24, 0x0($t8)
    MEM_W(0X0, ctx->r24) = ctx->f24.u32l;
    // 0x8005D370: lw          $t9, 0x0($s6)
    ctx->r25 = MEM_W(ctx->r22, 0X0);
    // 0x8005D374: nop

    // 0x8005D378: sh          $zero, 0xE8($t9)
    MEM_H(0XE8, ctx->r25) = 0;
    // 0x8005D37C: lw          $t0, 0x0($s6)
    ctx->r8 = MEM_W(ctx->r22, 0X0);
    // 0x8005D380: nop

    // 0x8005D384: sh          $zero, 0xEA($t0)
    MEM_H(0XEA, ctx->r8) = 0;
    // 0x8005D388: lhu         $t2, 0x8($s2)
    ctx->r10 = MEM_HU(ctx->r18, 0X8);
    // 0x8005D38C: lw          $t1, 0x18($s2)
    ctx->r9 = MEM_W(ctx->r18, 0X18);
    // 0x8005D390: andi        $t3, $t2, 0x1
    ctx->r11 = ctx->r10 & 0X1;
    // 0x8005D394: sb          $s3, 0x912($s2)
    MEM_B(0X912, ctx->r18) = ctx->r19;
    // 0x8005D398: beq         $t3, $zero, L_8005D3A8
    if (ctx->r11 == 0) {
        // 0x8005D39C: addu        $s0, $t1, $s1
        ctx->r16 = ADD32(ctx->r9, ctx->r17);
            goto L_8005D3A8;
    }
    // 0x8005D39C: addu        $s0, $t1, $s1
    ctx->r16 = ADD32(ctx->r9, ctx->r17);
    // 0x8005D3A0: b           L_8005D3B4
    // 0x8005D3A4: swc1        $f28, 0x4C($s0)
    MEM_W(0X4C, ctx->r16) = ctx->f28.u32l;
        goto L_8005D3B4;
    // 0x8005D3A4: swc1        $f28, 0x4C($s0)
    MEM_W(0X4C, ctx->r16) = ctx->f28.u32l;
L_8005D3A8:
    // 0x8005D3A8: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x8005D3AC: nop

    // 0x8005D3B0: swc1        $f18, 0x4C($s0)
    MEM_W(0X4C, ctx->r16) = ctx->f18.u32l;
L_8005D3B4:
    // 0x8005D3B4: lwc1        $f4, 0x44($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X44);
    // 0x8005D3B8: lui         $at, 0xC170
    ctx->r1 = S32(0XC170 << 16);
    // 0x8005D3BC: c.lt.s      $f24, $f4
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f24.fl < ctx->f4.fl;
    // 0x8005D3C0: nop

    // 0x8005D3C4: bc1f        L_8005D3D4
    if (!c1cs) {
        // 0x8005D3C8: nop
    
            goto L_8005D3D4;
    }
    // 0x8005D3C8: nop

    // 0x8005D3CC: b           L_8005D3E0
    // 0x8005D3D0: swc1        $f30, 0x44($s0)
    MEM_W(0X44, ctx->r16) = ctx->f30.u32l;
        goto L_8005D3E0;
    // 0x8005D3D0: swc1        $f30, 0x44($s0)
    MEM_W(0X44, ctx->r16) = ctx->f30.u32l;
L_8005D3D4:
    // 0x8005D3D4: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x8005D3D8: nop

    // 0x8005D3DC: swc1        $f6, 0x44($s0)
    MEM_W(0X44, ctx->r16) = ctx->f6.u32l;
L_8005D3E0:
    // 0x8005D3E0: jal         0x8024BC08
    // 0x8005D3E4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    LOOKUP_FUNC(0x8024BC08)(rdram, ctx);
        goto after_4;
    // 0x8005D3E4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_4:
    // 0x8005D3E8: b           L_8005D41C
    // 0x8005D3EC: addiu       $s5, $s5, 0x1
    ctx->r21 = ADD32(ctx->r21, 0X1);
        goto L_8005D41C;
    // 0x8005D3EC: addiu       $s5, $s5, 0x1
    ctx->r21 = ADD32(ctx->r21, 0X1);
L_8005D3F0:
    // 0x8005D3F0: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x8005D3F4: addu        $t4, $t4, $s5
    ctx->r12 = ADD32(ctx->r12, ctx->r21);
    // 0x8005D3F8: sll         $t4, $t4, 3
    ctx->r12 = S32(ctx->r12 << 3);
    // 0x8005D3FC: addu        $t4, $t4, $s5
    ctx->r12 = ADD32(ctx->r12, ctx->r21);
    // 0x8005D400: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x8005D404: addu        $t4, $t4, $s5
    ctx->r12 = ADD32(ctx->r12, ctx->r21);
    // 0x8005D408: lw          $t6, 0x0($s6)
    ctx->r14 = MEM_W(ctx->r22, 0X0);
    // 0x8005D40C: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x8005D410: addu        $t5, $s7, $t4
    ctx->r13 = ADD32(ctx->r23, ctx->r12);
    // 0x8005D414: sw          $t5, 0xB4($t6)
    MEM_W(0XB4, ctx->r14) = ctx->r13;
    // 0x8005D418: addiu       $s5, $s5, 0x1
    ctx->r21 = ADD32(ctx->r21, 0X1);
L_8005D41C:
    // 0x8005D41C: sll         $t7, $s5, 16
    ctx->r15 = S32(ctx->r21 << 16);
    // 0x8005D420: sra         $s5, $t7, 16
    ctx->r21 = S32(SIGNED(ctx->r15) >> 16);
    // 0x8005D424: slti        $at, $s5, 0x2
    ctx->r1 = SIGNED(ctx->r21) < 0X2 ? 1 : 0;
    // 0x8005D428: bne         $at, $zero, L_8005D214
    if (ctx->r1 != 0) {
        // 0x8005D42C: nop
    
            goto L_8005D214;
    }
    // 0x8005D42C: nop

    // 0x8005D430: lw          $ra, 0x6C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X6C);
    // 0x8005D434: sh          $s4, 0x72($sp)
    MEM_H(0X72, ctx->r29) = ctx->r20;
    // 0x8005D438: sh          $s3, 0x70($sp)
    MEM_H(0X70, ctx->r29) = ctx->r19;
    // 0x8005D43C: lw          $s3, 0x54($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X54);
    // 0x8005D440: lw          $s4, 0x58($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X58);
    // 0x8005D444: lwc1        $f21, 0x18($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X18);
    // 0x8005D448: lwc1        $f20, 0x1C($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x8005D44C: lwc1        $f23, 0x20($sp)
    ctx->f_odd[(23 - 1) * 2] = MEM_W(ctx->r29, 0X20);
    // 0x8005D450: lwc1        $f22, 0x24($sp)
    ctx->f22.u32l = MEM_W(ctx->r29, 0X24);
    // 0x8005D454: lwc1        $f25, 0x28($sp)
    ctx->f_odd[(25 - 1) * 2] = MEM_W(ctx->r29, 0X28);
    // 0x8005D458: lwc1        $f24, 0x2C($sp)
    ctx->f24.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x8005D45C: lwc1        $f27, 0x30($sp)
    ctx->f_odd[(27 - 1) * 2] = MEM_W(ctx->r29, 0X30);
    // 0x8005D460: lwc1        $f26, 0x34($sp)
    ctx->f26.u32l = MEM_W(ctx->r29, 0X34);
    // 0x8005D464: lwc1        $f29, 0x38($sp)
    ctx->f_odd[(29 - 1) * 2] = MEM_W(ctx->r29, 0X38);
    // 0x8005D468: lwc1        $f28, 0x3C($sp)
    ctx->f28.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x8005D46C: lwc1        $f31, 0x40($sp)
    ctx->f_odd[(31 - 1) * 2] = MEM_W(ctx->r29, 0X40);
    // 0x8005D470: lwc1        $f30, 0x44($sp)
    ctx->f30.u32l = MEM_W(ctx->r29, 0X44);
    // 0x8005D474: lw          $s0, 0x48($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X48);
    // 0x8005D478: lw          $s1, 0x4C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X4C);
    // 0x8005D47C: lw          $s2, 0x50($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X50);
    // 0x8005D480: lw          $s5, 0x5C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X5C);
    // 0x8005D484: lw          $s6, 0x60($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X60);
    // 0x8005D488: lw          $s7, 0x64($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X64);
    // 0x8005D48C: lw          $fp, 0x68($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X68);
    // 0x8005D490: jr          $ra
    // 0x8005D494: addiu       $sp, $sp, 0x78
    ctx->r29 = ADD32(ctx->r29, 0X78);
    return;
    // 0x8005D494: addiu       $sp, $sp, 0x78
    ctx->r29 = ADD32(ctx->r29, 0X78);
;}
RECOMP_FUNC void func_8005D498(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8005D498: lui         $v0, 0x8011
    ctx->r2 = S32(0X8011 << 16);
    // 0x8005D49C: lw          $v0, -0x2F98($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X2F98);
    // 0x8005D4A0: lui         $at, 0x2
    ctx->r1 = S32(0X2 << 16);
    // 0x8005D4A4: ori         $at, $at, 0x89A8
    ctx->r1 = ctx->r1 | 0X89A8;
    // 0x8005D4A8: addu        $t6, $v0, $at
    ctx->r14 = ADD32(ctx->r2, ctx->r1);
    // 0x8005D4AC: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x8005D4B0: sw          $t6, 0x390($at)
    MEM_W(0X390, ctx->r1) = ctx->r14;
    // 0x8005D4B4: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x8005D4B8: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x8005D4BC: sh          $t7, 0x362($at)
    MEM_H(0X362, ctx->r1) = ctx->r15;
    // 0x8005D4C0: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x8005D4C4: addiu       $t8, $zero, 0x8
    ctx->r24 = ADD32(0, 0X8);
    // 0x8005D4C8: sh          $t8, 0x364($at)
    MEM_H(0X364, ctx->r1) = ctx->r24;
    // 0x8005D4CC: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x8005D4D0: addiu       $t9, $zero, 0x4
    ctx->r25 = ADD32(0, 0X4);
    // 0x8005D4D4: sh          $t9, 0x366($at)
    MEM_H(0X366, ctx->r1) = ctx->r25;
    // 0x8005D4D8: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x8005D4DC: ori         $t0, $zero, 0x8000
    ctx->r8 = 0 | 0X8000;
    // 0x8005D4E0: sh          $t0, 0x368($at)
    MEM_H(0X368, ctx->r1) = ctx->r8;
    // 0x8005D4E4: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x8005D4E8: addiu       $t1, $zero, 0x4000
    ctx->r9 = ADD32(0, 0X4000);
    // 0x8005D4EC: sh          $t1, 0x36A($at)
    MEM_H(0X36A, ctx->r1) = ctx->r9;
    // 0x8005D4F0: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x8005D4F4: addiu       $t2, $zero, 0x2
    ctx->r10 = ADD32(0, 0X2);
    // 0x8005D4F8: sh          $t2, 0x36C($at)
    MEM_H(0X36C, ctx->r1) = ctx->r10;
    // 0x8005D4FC: lui         $at, 0x2
    ctx->r1 = S32(0X2 << 16);
    // 0x8005D500: ori         $at, $at, 0x89B2
    ctx->r1 = ctx->r1 | 0X89B2;
    // 0x8005D504: addu        $t3, $v0, $at
    ctx->r11 = ADD32(ctx->r2, ctx->r1);
    // 0x8005D508: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x8005D50C: sw          $t3, 0x3E8($at)
    MEM_W(0X3E8, ctx->r1) = ctx->r11;
    // 0x8005D510: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x8005D514: addiu       $t4, $zero, 0x1
    ctx->r12 = ADD32(0, 0X1);
    // 0x8005D518: sh          $t4, 0x3BA($at)
    MEM_H(0X3BA, ctx->r1) = ctx->r12;
    // 0x8005D51C: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x8005D520: addiu       $t5, $zero, 0x8
    ctx->r13 = ADD32(0, 0X8);
    // 0x8005D524: sh          $t5, 0x3BC($at)
    MEM_H(0X3BC, ctx->r1) = ctx->r13;
    // 0x8005D528: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x8005D52C: addiu       $t6, $zero, 0x4
    ctx->r14 = ADD32(0, 0X4);
    // 0x8005D530: sh          $t6, 0x3BE($at)
    MEM_H(0X3BE, ctx->r1) = ctx->r14;
    // 0x8005D534: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x8005D538: ori         $t7, $zero, 0x8000
    ctx->r15 = 0 | 0X8000;
    // 0x8005D53C: sh          $t7, 0x3C0($at)
    MEM_H(0X3C0, ctx->r1) = ctx->r15;
    // 0x8005D540: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x8005D544: addiu       $t8, $zero, 0x4000
    ctx->r24 = ADD32(0, 0X4000);
    // 0x8005D548: sh          $t8, 0x3C2($at)
    MEM_H(0X3C2, ctx->r1) = ctx->r24;
    // 0x8005D54C: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x8005D550: addiu       $t9, $zero, 0x2
    ctx->r25 = ADD32(0, 0X2);
    // 0x8005D554: sh          $t9, 0x3C4($at)
    MEM_H(0X3C4, ctx->r1) = ctx->r25;
    // 0x8005D558: lui         $at, 0x2
    ctx->r1 = S32(0X2 << 16);
    // 0x8005D55C: ori         $at, $at, 0x89BC
    ctx->r1 = ctx->r1 | 0X89BC;
    // 0x8005D560: addu        $t0, $v0, $at
    ctx->r8 = ADD32(ctx->r2, ctx->r1);
    // 0x8005D564: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x8005D568: sw          $t0, 0x440($at)
    MEM_W(0X440, ctx->r1) = ctx->r8;
    // 0x8005D56C: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x8005D570: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
    // 0x8005D574: sh          $t1, 0x412($at)
    MEM_H(0X412, ctx->r1) = ctx->r9;
    // 0x8005D578: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x8005D57C: addiu       $t2, $zero, 0x8
    ctx->r10 = ADD32(0, 0X8);
    // 0x8005D580: sh          $t2, 0x414($at)
    MEM_H(0X414, ctx->r1) = ctx->r10;
    // 0x8005D584: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x8005D588: addiu       $t3, $zero, 0x4
    ctx->r11 = ADD32(0, 0X4);
    // 0x8005D58C: sh          $t3, 0x416($at)
    MEM_H(0X416, ctx->r1) = ctx->r11;
    // 0x8005D590: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x8005D594: ori         $t4, $zero, 0x8000
    ctx->r12 = 0 | 0X8000;
    // 0x8005D598: sh          $t4, 0x418($at)
    MEM_H(0X418, ctx->r1) = ctx->r12;
    // 0x8005D59C: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x8005D5A0: addiu       $t5, $zero, 0x4000
    ctx->r13 = ADD32(0, 0X4000);
    // 0x8005D5A4: sh          $t5, 0x41A($at)
    MEM_H(0X41A, ctx->r1) = ctx->r13;
    // 0x8005D5A8: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x8005D5AC: addiu       $t6, $zero, 0x2
    ctx->r14 = ADD32(0, 0X2);
    // 0x8005D5B0: sh          $t6, 0x41C($at)
    MEM_H(0X41C, ctx->r1) = ctx->r14;
    // 0x8005D5B4: lui         $at, 0x2
    ctx->r1 = S32(0X2 << 16);
    // 0x8005D5B8: ori         $at, $at, 0x89C6
    ctx->r1 = ctx->r1 | 0X89C6;
    // 0x8005D5BC: addu        $t7, $v0, $at
    ctx->r15 = ADD32(ctx->r2, ctx->r1);
    // 0x8005D5C0: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x8005D5C4: sw          $t7, 0x498($at)
    MEM_W(0X498, ctx->r1) = ctx->r15;
    // 0x8005D5C8: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x8005D5CC: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x8005D5D0: sh          $t8, 0x46A($at)
    MEM_H(0X46A, ctx->r1) = ctx->r24;
    // 0x8005D5D4: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x8005D5D8: addiu       $t9, $zero, 0x8
    ctx->r25 = ADD32(0, 0X8);
    // 0x8005D5DC: sh          $t9, 0x46C($at)
    MEM_H(0X46C, ctx->r1) = ctx->r25;
    // 0x8005D5E0: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x8005D5E4: addiu       $t0, $zero, 0x4
    ctx->r8 = ADD32(0, 0X4);
    // 0x8005D5E8: sh          $t0, 0x46E($at)
    MEM_H(0X46E, ctx->r1) = ctx->r8;
    // 0x8005D5EC: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x8005D5F0: ori         $t1, $zero, 0x8000
    ctx->r9 = 0 | 0X8000;
    // 0x8005D5F4: sh          $t1, 0x470($at)
    MEM_H(0X470, ctx->r1) = ctx->r9;
    // 0x8005D5F8: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x8005D5FC: addiu       $t2, $zero, 0x4000
    ctx->r10 = ADD32(0, 0X4000);
    // 0x8005D600: sh          $t2, 0x472($at)
    MEM_H(0X472, ctx->r1) = ctx->r10;
    // 0x8005D604: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x8005D608: addiu       $t3, $zero, 0x2
    ctx->r11 = ADD32(0, 0X2);
    // 0x8005D60C: jr          $ra
    // 0x8005D610: sh          $t3, 0x474($at)
    MEM_H(0X474, ctx->r1) = ctx->r11;
    return;
    // 0x8005D610: sh          $t3, 0x474($at)
    MEM_H(0X474, ctx->r1) = ctx->r11;
;}
RECOMP_FUNC void func_8005D614(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8005D614: lui         $v0, 0x8011
    ctx->r2 = S32(0X8011 << 16);
    // 0x8005D618: lw          $v0, -0x2F98($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X2F98);
    // 0x8005D61C: lui         $at, 0x2
    ctx->r1 = S32(0X2 << 16);
    // 0x8005D620: ori         $at, $at, 0x9C60
    ctx->r1 = ctx->r1 | 0X9C60;
    // 0x8005D624: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x8005D628: addu        $v0, $v0, $at
    ctx->r2 = ADD32(ctx->r2, ctx->r1);
    // 0x8005D62C: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    // 0x8005D630: addiu       $a0, $a0, 0x358
    ctx->r4 = ADD32(ctx->r4, 0X358);
    // 0x8005D634: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
L_8005D638:
    // 0x8005D638: sb          $v1, 0x54($a0)
    MEM_B(0X54, ctx->r4) = ctx->r3;
    // 0x8005D63C: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x8005D640: sltiu       $at, $v1, 0x5
    ctx->r1 = ctx->r3 < 0X5 ? 1 : 0;
    // 0x8005D644: sh          $zero, 0x0($a0)
    MEM_H(0X0, ctx->r4) = 0;
    // 0x8005D648: sw          $zero, 0x40($a0)
    MEM_W(0X40, ctx->r4) = 0;
    // 0x8005D64C: addiu       $a0, $a0, 0x58
    ctx->r4 = ADD32(ctx->r4, 0X58);
    // 0x8005D650: addiu       $a1, $a1, 0x34
    ctx->r5 = ADD32(ctx->r5, 0X34);
    // 0x8005D654: bne         $at, $zero, L_8005D638
    if (ctx->r1 != 0) {
        // 0x8005D658: sh          $zero, -0x34($a1)
        MEM_H(-0X34, ctx->r5) = 0;
            goto L_8005D638;
    }
    // 0x8005D658: sh          $zero, -0x34($a1)
    MEM_H(-0X34, ctx->r5) = 0;
    // 0x8005D65C: lui         $a1, 0x8012
    ctx->r5 = S32(0X8012 << 16);
    // 0x8005D660: lui         $t5, 0x8012
    ctx->r13 = S32(0X8012 << 16);
    // 0x8005D664: lui         $t3, 0x8012
    ctx->r11 = S32(0X8012 << 16);
    // 0x8005D668: lui         $t0, 0x8012
    ctx->r8 = S32(0X8012 << 16);
    // 0x8005D66C: addiu       $t0, $t0, 0x358
    ctx->r8 = ADD32(ctx->r8, 0X358);
    // 0x8005D670: addiu       $t3, $t3, -0x17C8
    ctx->r11 = ADD32(ctx->r11, -0X17C8);
    // 0x8005D674: addiu       $t5, $t5, -0x17C8
    ctx->r13 = ADD32(ctx->r13, -0X17C8);
    // 0x8005D678: addiu       $a1, $a1, -0x2CF0
    ctx->r5 = ADD32(ctx->r5, -0X2CF0);
    // 0x8005D67C: addiu       $t4, $zero, 0x1
    ctx->r12 = ADD32(0, 0X1);
    // 0x8005D680: addiu       $t2, $zero, 0x34
    ctx->r10 = ADD32(0, 0X34);
    // 0x8005D684: addiu       $t1, $zero, 0x58
    ctx->r9 = ADD32(0, 0X58);
L_8005D688:
    // 0x8005D688: lw          $a2, 0x20($a1)
    ctx->r6 = MEM_W(ctx->r5, 0X20);
    // 0x8005D68C: addiu       $a1, $a1, 0xA94
    ctx->r5 = ADD32(ctx->r5, 0XA94);
    // 0x8005D690: lh          $a0, 0x0($a2)
    ctx->r4 = MEM_H(ctx->r6, 0X0);
    // 0x8005D694: or          $a3, $a2, $zero
    ctx->r7 = ctx->r6 | 0;
    // 0x8005D698: bltz        $a0, L_8005D700
    if (SIGNED(ctx->r4) < 0) {
        // 0x8005D69C: andi        $a2, $a0, 0xF
        ctx->r6 = ctx->r4 & 0XF;
            goto L_8005D700;
    }
    // 0x8005D69C: andi        $a2, $a0, 0xF
    ctx->r6 = ctx->r4 & 0XF;
L_8005D6A0:
    // 0x8005D6A0: andi        $t6, $a0, 0x80
    ctx->r14 = ctx->r4 & 0X80;
    // 0x8005D6A4: beq         $t6, $zero, L_8005D6C8
    if (ctx->r14 == 0) {
        // 0x8005D6A8: or          $v1, $a2, $zero
        ctx->r3 = ctx->r6 | 0;
            goto L_8005D6C8;
    }
    // 0x8005D6A8: or          $v1, $a2, $zero
    ctx->r3 = ctx->r6 | 0;
    // 0x8005D6AC: multu       $a2, $t1
    result = U64(U32(ctx->r6)) * U64(U32(ctx->r9)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8005D6B0: mflo        $t7
    ctx->r15 = lo;
    // 0x8005D6B4: addu        $a0, $t0, $t7
    ctx->r4 = ADD32(ctx->r8, ctx->r15);
    // 0x8005D6B8: lhu         $t8, 0x2($a0)
    ctx->r24 = MEM_HU(ctx->r4, 0X2);
    // 0x8005D6BC: nop

    // 0x8005D6C0: ori         $t9, $t8, 0x4
    ctx->r25 = ctx->r24 | 0X4;
    // 0x8005D6C4: sh          $t9, 0x2($a0)
    MEM_H(0X2, ctx->r4) = ctx->r25;
L_8005D6C8:
    // 0x8005D6C8: multu       $v1, $t1
    result = U64(U32(ctx->r3)) * U64(U32(ctx->r9)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8005D6CC: addiu       $a3, $a3, 0x2
    ctx->r7 = ADD32(ctx->r7, 0X2);
    // 0x8005D6D0: mflo        $t6
    ctx->r14 = lo;
    // 0x8005D6D4: addu        $a2, $t0, $t6
    ctx->r6 = ADD32(ctx->r8, ctx->r14);
    // 0x8005D6D8: sw          $t3, 0x40($a2)
    MEM_W(0X40, ctx->r6) = ctx->r11;
    // 0x8005D6DC: multu       $v1, $t2
    result = U64(U32(ctx->r3)) * U64(U32(ctx->r10)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8005D6E0: sh          $t4, 0x0($a2)
    MEM_H(0X0, ctx->r6) = ctx->r12;
    // 0x8005D6E4: mflo        $t7
    ctx->r15 = lo;
    // 0x8005D6E8: addu        $t8, $t7, $v0
    ctx->r24 = ADD32(ctx->r15, ctx->r2);
    // 0x8005D6EC: sw          $t8, 0x3C($a2)
    MEM_W(0X3C, ctx->r6) = ctx->r24;
    // 0x8005D6F0: lh          $a0, 0x0($a3)
    ctx->r4 = MEM_H(ctx->r7, 0X0);
    // 0x8005D6F4: nop

    // 0x8005D6F8: bgez        $a0, L_8005D6A0
    if (SIGNED(ctx->r4) >= 0) {
        // 0x8005D6FC: andi        $a2, $a0, 0xF
        ctx->r6 = ctx->r4 & 0XF;
            goto L_8005D6A0;
    }
    // 0x8005D6FC: andi        $a2, $a0, 0xF
    ctx->r6 = ctx->r4 & 0XF;
L_8005D700:
    // 0x8005D700: bne         $a1, $t5, L_8005D688
    if (ctx->r5 != ctx->r13) {
        // 0x8005D704: nop
    
            goto L_8005D688;
    }
    // 0x8005D704: nop

    // 0x8005D708: jr          $ra
    // 0x8005D70C: nop

    return;
    // 0x8005D70C: nop

;}
RECOMP_FUNC void func_8005D710(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8005D710: lui         $v1, 0x8012
    ctx->r3 = S32(0X8012 << 16);
    // 0x8005D714: addiu       $v1, $v1, 0xB14
    ctx->r3 = ADD32(ctx->r3, 0XB14);
    // 0x8005D718: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x8005D71C: addiu       $v0, $v0, 0x358
    ctx->r2 = ADD32(ctx->r2, 0X358);
    // 0x8005D720: lbu         $t6, 0x0($v1)
    ctx->r14 = MEM_BU(ctx->r3, 0X0);
    // 0x8005D724: lbu         $t7, 0x1($v1)
    ctx->r15 = MEM_BU(ctx->r3, 0X1);
    // 0x8005D728: lbu         $t8, 0x2($v1)
    ctx->r24 = MEM_BU(ctx->r3, 0X2);
    // 0x8005D72C: lbu         $t9, 0x3($v1)
    ctx->r25 = MEM_BU(ctx->r3, 0X3);
    // 0x8005D730: lbu         $t0, 0x4($v1)
    ctx->r8 = MEM_BU(ctx->r3, 0X4);
    // 0x8005D734: sh          $t6, 0x0($v0)
    MEM_H(0X0, ctx->r2) = ctx->r14;
    // 0x8005D738: sh          $t7, 0x58($v0)
    MEM_H(0X58, ctx->r2) = ctx->r15;
    // 0x8005D73C: sh          $t8, 0xB0($v0)
    MEM_H(0XB0, ctx->r2) = ctx->r24;
    // 0x8005D740: sh          $t9, 0x108($v0)
    MEM_H(0X108, ctx->r2) = ctx->r25;
    // 0x8005D744: jr          $ra
    // 0x8005D748: sh          $t0, 0x160($v0)
    MEM_H(0X160, ctx->r2) = ctx->r8;
    return;
    // 0x8005D748: sh          $t0, 0x160($v0)
    MEM_H(0X160, ctx->r2) = ctx->r8;
;}
RECOMP_FUNC void func_8005D74C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8005D74C: addiu       $sp, $sp, -0x70
    ctx->r29 = ADD32(ctx->r29, -0X70);
    // 0x8005D750: sw          $s7, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r23;
    // 0x8005D754: sw          $a0, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->r4;
    // 0x8005D758: andi        $t6, $a0, 0xFFFF
    ctx->r14 = ctx->r4 & 0XFFFF;
    // 0x8005D75C: lui         $v1, 0x8012
    ctx->r3 = S32(0X8012 << 16);
    // 0x8005D760: or          $a0, $t6, $zero
    ctx->r4 = ctx->r14 | 0;
    // 0x8005D764: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x8005D768: sw          $fp, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r30;
    // 0x8005D76C: sw          $s6, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r22;
    // 0x8005D770: sw          $s5, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r21;
    // 0x8005D774: sw          $s4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r20;
    // 0x8005D778: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x8005D77C: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x8005D780: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x8005D784: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8005D788: addiu       $v1, $v1, 0x358
    ctx->r3 = ADD32(ctx->r3, 0X358);
    // 0x8005D78C: or          $s7, $zero, $zero
    ctx->r23 = 0 | 0;
L_8005D790:
    // 0x8005D790: sb          $s7, 0x54($v1)
    MEM_B(0X54, ctx->r3) = ctx->r23;
    // 0x8005D794: addiu       $s7, $s7, 0x1
    ctx->r23 = ADD32(ctx->r23, 0X1);
    // 0x8005D798: sltiu       $at, $s7, 0x5
    ctx->r1 = ctx->r23 < 0X5 ? 1 : 0;
    // 0x8005D79C: bne         $at, $zero, L_8005D790
    if (ctx->r1 != 0) {
        // 0x8005D7A0: addiu       $v1, $v1, 0x58
        ctx->r3 = ADD32(ctx->r3, 0X58);
            goto L_8005D790;
    }
    // 0x8005D7A0: addiu       $v1, $v1, 0x58
    ctx->r3 = ADD32(ctx->r3, 0X58);
    // 0x8005D7A4: sltiu       $at, $a0, 0xB
    ctx->r1 = ctx->r4 < 0XB ? 1 : 0;
    // 0x8005D7A8: beq         $at, $zero, L_8005DA28
    if (ctx->r1 == 0) {
        // 0x8005D7AC: sll         $t7, $a0, 2
        ctx->r15 = S32(ctx->r4 << 2);
            goto L_8005DA28;
    }
    // 0x8005D7AC: sll         $t7, $a0, 2
    ctx->r15 = S32(ctx->r4 << 2);
    // 0x8005D7B0: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x8005D7B4: addu        $at, $at, $t7
    gpr jr_addend_8005D7C0 = ctx->r15;
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x8005D7B8: lw          $t7, -0x6768($at)
    ctx->r15 = ADD32(ctx->r1, -0X6768);
    // 0x8005D7BC: nop

    // 0x8005D7C0: jr          $t7
    // 0x8005D7C4: nop

    switch (jr_addend_8005D7C0 >> 2) {
        case 0: goto L_8005D7C8; break;
        case 1: goto L_8005D7C8; break;
        case 2: goto L_8005D7C8; break;
        case 3: goto L_8005D7C8; break;
        case 4: goto L_8005D7C8; break;
        case 5: goto L_8005D7C8; break;
        case 6: goto L_8005D7C8; break;
        case 7: goto L_8005D7C8; break;
        case 8: goto L_8005D7C8; break;
        case 9: goto L_8005D7C8; break;
        case 10: goto L_8005D7C8; break;
        default: switch_error(__func__, 0x8005D7C0, 0x800D9898);
    }
    // 0x8005D7C4: nop

L_8005D7C8:
    // 0x8005D7C8: lui         $t8, 0x8012
    ctx->r24 = S32(0X8012 << 16);
    // 0x8005D7CC: addiu       $t8, $t8, -0x29D8
    ctx->r24 = ADD32(ctx->r24, -0X29D8);
    // 0x8005D7D0: lui         $s3, 0x8012
    ctx->r19 = S32(0X8012 << 16);
    // 0x8005D7D4: lui         $fp, 0x8012
    ctx->r30 = S32(0X8012 << 16);
    // 0x8005D7D8: addiu       $fp, $fp, 0xB2C
    ctx->r30 = ADD32(ctx->r30, 0XB2C);
    // 0x8005D7DC: addiu       $s3, $s3, -0x2CF0
    ctx->r19 = ADD32(ctx->r19, -0X2CF0);
    // 0x8005D7E0: sw          $t8, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r24;
    // 0x8005D7E4: or          $s7, $zero, $zero
    ctx->r23 = 0 | 0;
    // 0x8005D7E8: addiu       $s6, $zero, 0x2
    ctx->r22 = ADD32(0, 0X2);
    // 0x8005D7EC: addiu       $s2, $zero, 0xF8
    ctx->r18 = ADD32(0, 0XF8);
L_8005D7F0:
    // 0x8005D7F0: lw          $s1, 0x18($s3)
    ctx->r17 = MEM_W(ctx->r19, 0X18);
    // 0x8005D7F4: lw          $s0, 0x40($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X40);
    // 0x8005D7F8: or          $s5, $zero, $zero
    ctx->r21 = 0 | 0;
    // 0x8005D7FC: or          $s4, $zero, $zero
    ctx->r20 = 0 | 0;
    // 0x8005D800: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    // 0x8005D804: jal         0x8005DCA8
    // 0x8005D808: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    func_8005DCA8(rdram, ctx);
        goto after_0;
    // 0x8005D808: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    after_0:
    // 0x8005D80C: lw          $a2, 0x40($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X40);
    // 0x8005D810: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x8005D814: jal         0x8005DE74
    // 0x8005D818: addiu       $a1, $zero, 0xA
    ctx->r5 = ADD32(0, 0XA);
    func_8005DE74(rdram, ctx);
        goto after_1;
    // 0x8005D818: addiu       $a1, $zero, 0xA
    ctx->r5 = ADD32(0, 0XA);
    after_1:
    // 0x8005D81C: lw          $t9, 0x20($s3)
    ctx->r25 = MEM_W(ctx->r19, 0X20);
    // 0x8005D820: lui         $t0, 0x8012
    ctx->r8 = S32(0X8012 << 16);
    // 0x8005D824: lh          $v0, 0x0($t9)
    ctx->r2 = MEM_H(ctx->r25, 0X0);
    // 0x8005D828: lui         $t3, 0x8012
    ctx->r11 = S32(0X8012 << 16);
    // 0x8005D82C: lui         $t4, 0x8009
    ctx->r12 = S32(0X8009 << 16);
    // 0x8005D830: addiu       $t4, $t4, 0x3B20
    ctx->r12 = ADD32(ctx->r12, 0X3B20);
    // 0x8005D834: addiu       $t3, $t3, 0xB78
    ctx->r11 = ADD32(ctx->r11, 0XB78);
    // 0x8005D838: addiu       $t0, $t0, 0x358
    ctx->r8 = ADD32(ctx->r8, 0X358);
    // 0x8005D83C: addiu       $t1, $zero, 0x58
    ctx->r9 = ADD32(0, 0X58);
    // 0x8005D840: bltz        $v0, L_8005DA04
    if (SIGNED(ctx->r2) < 0) {
        // 0x8005D844: addiu       $t2, $zero, 0x8
        ctx->r10 = ADD32(0, 0X8);
            goto L_8005DA04;
    }
    // 0x8005D844: addiu       $t2, $zero, 0x8
    ctx->r10 = ADD32(0, 0X8);
    // 0x8005D848: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x8005D84C: andi        $a3, $v0, 0x80
    ctx->r7 = ctx->r2 & 0X80;
L_8005D850:
    // 0x8005D850: beq         $a3, $zero, L_8005D878
    if (ctx->r7 == 0) {
        // 0x8005D854: addiu       $v1, $zero, -0x1
        ctx->r3 = ADD32(0, -0X1);
            goto L_8005D878;
    }
    // 0x8005D854: addiu       $v1, $zero, -0x1
    ctx->r3 = ADD32(0, -0X1);
    // 0x8005D858: andi        $t5, $v0, 0xF
    ctx->r13 = ctx->r2 & 0XF;
    // 0x8005D85C: multu       $t5, $t1
    result = U64(U32(ctx->r13)) * U64(U32(ctx->r9)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8005D860: mflo        $t6
    ctx->r14 = lo;
    // 0x8005D864: addu        $a1, $t0, $t6
    ctx->r5 = ADD32(ctx->r8, ctx->r14);
    // 0x8005D868: lhu         $t7, 0x2($a1)
    ctx->r15 = MEM_HU(ctx->r5, 0X2);
    // 0x8005D86C: nop

    // 0x8005D870: ori         $t8, $t7, 0x4
    ctx->r24 = ctx->r15 | 0X4;
    // 0x8005D874: sh          $t8, 0x2($a1)
    MEM_H(0X2, ctx->r5) = ctx->r24;
L_8005D878:
    // 0x8005D878: andi        $t9, $v0, 0xF
    ctx->r25 = ctx->r2 & 0XF;
    // 0x8005D87C: sll         $t5, $t9, 2
    ctx->r13 = S32(ctx->r25 << 2);
    // 0x8005D880: subu        $t5, $t5, $t9
    ctx->r13 = SUB32(ctx->r13, ctx->r25);
    // 0x8005D884: sll         $t5, $t5, 2
    ctx->r13 = S32(ctx->r13 << 2);
    // 0x8005D888: lhu         $a0, 0x0($t3)
    ctx->r4 = MEM_HU(ctx->r11, 0X0);
    // 0x8005D88C: subu        $t5, $t5, $t9
    ctx->r13 = SUB32(ctx->r13, ctx->r25);
    // 0x8005D890: sll         $t5, $t5, 3
    ctx->r13 = S32(ctx->r13 << 3);
    // 0x8005D894: bne         $t2, $a0, L_8005D8EC
    if (ctx->r10 != ctx->r4) {
        // 0x8005D898: addu        $a1, $t0, $t5
        ctx->r5 = ADD32(ctx->r8, ctx->r13);
            goto L_8005D8EC;
    }
    // 0x8005D898: addu        $a1, $t0, $t5
    ctx->r5 = ADD32(ctx->r8, ctx->r13);
    // 0x8005D89C: bne         $s4, $zero, L_8005D8EC
    if (ctx->r20 != 0) {
        // 0x8005D8A0: nop
    
            goto L_8005D8EC;
    }
    // 0x8005D8A0: nop

    // 0x8005D8A4: bne         $a2, $zero, L_8005D8E0
    if (ctx->r6 != 0) {
        // 0x8005D8A8: nop
    
            goto L_8005D8E0;
    }
    // 0x8005D8A8: nop

    // 0x8005D8AC: lw          $t6, 0x0($t4)
    ctx->r14 = MEM_W(ctx->r12, 0X0);
    // 0x8005D8B0: nop

    // 0x8005D8B4: lw          $t7, 0xB4($t6)
    ctx->r15 = MEM_W(ctx->r14, 0XB4);
    // 0x8005D8B8: nop

    // 0x8005D8BC: bne         $s3, $t7, L_8005D8E0
    if (ctx->r19 != ctx->r15) {
        // 0x8005D8C0: nop
    
            goto L_8005D8E0;
    }
    // 0x8005D8C0: nop

    // 0x8005D8C4: lbu         $t8, 0x868($s3)
    ctx->r24 = MEM_BU(ctx->r19, 0X868);
    // 0x8005D8C8: nop

    // 0x8005D8CC: bne         $s6, $t8, L_8005D938
    if (ctx->r22 != ctx->r24) {
        // 0x8005D8D0: nop
    
            goto L_8005D938;
    }
    // 0x8005D8D0: nop

    // 0x8005D8D4: addiu       $s4, $zero, 0x1
    ctx->r20 = ADD32(0, 0X1);
    // 0x8005D8D8: b           L_8005D938
    // 0x8005D8DC: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
        goto L_8005D938;
    // 0x8005D8DC: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
L_8005D8E0:
    // 0x8005D8E0: lbu         $v1, 0x8AB($s3)
    ctx->r3 = MEM_BU(ctx->r19, 0X8AB);
    // 0x8005D8E4: b           L_8005D938
    // 0x8005D8E8: addiu       $s4, $zero, 0x1
    ctx->r20 = ADD32(0, 0X1);
        goto L_8005D938;
    // 0x8005D8E8: addiu       $s4, $zero, 0x1
    ctx->r20 = ADD32(0, 0X1);
L_8005D8EC:
    // 0x8005D8EC: bne         $s6, $a0, L_8005D938
    if (ctx->r22 != ctx->r4) {
        // 0x8005D8F0: nop
    
            goto L_8005D938;
    }
    // 0x8005D8F0: nop

    // 0x8005D8F4: lw          $a0, 0x0($fp)
    ctx->r4 = MEM_W(ctx->r30, 0X0);
    // 0x8005D8F8: nop

L_8005D8FC:
    // 0x8005D8FC: lhu         $v1, 0x0($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X0);
    // 0x8005D900: addiu       $s0, $s0, 0x8
    ctx->r16 = ADD32(ctx->r16, 0X8);
    // 0x8005D904: multu       $v1, $s2
    result = U64(U32(ctx->r3)) * U64(U32(ctx->r18)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8005D908: mflo        $v0
    ctx->r2 = lo;
    // 0x8005D90C: addu        $t9, $s1, $v0
    ctx->r25 = ADD32(ctx->r17, ctx->r2);
    // 0x8005D910: lhu         $t5, 0x12($t9)
    ctx->r13 = MEM_HU(ctx->r25, 0X12);
    // 0x8005D914: nop

    // 0x8005D918: andi        $t6, $t5, 0x1
    ctx->r14 = ctx->r13 & 0X1;
    // 0x8005D91C: bne         $t6, $zero, L_8005D8FC
    if (ctx->r14 != 0) {
        // 0x8005D920: nop
    
            goto L_8005D8FC;
    }
    // 0x8005D920: nop

    // 0x8005D924: beq         $v1, $zero, L_8005D8FC
    if (ctx->r3 == 0) {
        // 0x8005D928: nop
    
            goto L_8005D8FC;
    }
    // 0x8005D928: nop

    // 0x8005D92C: addu        $t7, $v0, $s1
    ctx->r15 = ADD32(ctx->r2, ctx->r17);
    // 0x8005D930: beq         $a0, $t7, L_8005D8FC
    if (ctx->r4 == ctx->r15) {
        // 0x8005D934: nop
    
            goto L_8005D8FC;
    }
    // 0x8005D934: nop

L_8005D938:
    // 0x8005D938: bgez        $v1, L_8005D978
    if (SIGNED(ctx->r3) >= 0) {
        // 0x8005D93C: nop
    
            goto L_8005D978;
    }
    // 0x8005D93C: nop

    // 0x8005D940: lw          $a0, 0x0($fp)
    ctx->r4 = MEM_W(ctx->r30, 0X0);
    // 0x8005D944: nop

    // 0x8005D948: beq         $a0, $zero, L_8005D978
    if (ctx->r4 == 0) {
        // 0x8005D94C: nop
    
            goto L_8005D978;
    }
    // 0x8005D94C: nop

    // 0x8005D950: bne         $s5, $zero, L_8005D978
    if (ctx->r21 != 0) {
        // 0x8005D954: nop
    
            goto L_8005D978;
    }
    // 0x8005D954: nop

    // 0x8005D958: lw          $t8, 0xC8($a0)
    ctx->r24 = MEM_W(ctx->r4, 0XC8);
    // 0x8005D95C: nop

    // 0x8005D960: lhu         $t9, 0x6($t8)
    ctx->r25 = MEM_HU(ctx->r24, 0X6);
    // 0x8005D964: nop

    // 0x8005D968: bne         $s7, $t9, L_8005D978
    if (ctx->r23 != ctx->r25) {
        // 0x8005D96C: nop
    
            goto L_8005D978;
    }
    // 0x8005D96C: nop

    // 0x8005D970: lhu         $v1, 0x1A($a0)
    ctx->r3 = MEM_HU(ctx->r4, 0X1A);
    // 0x8005D974: addiu       $s5, $zero, 0x1
    ctx->r21 = ADD32(0, 0X1);
L_8005D978:
    // 0x8005D978: bgez        $v1, L_8005D9B0
    if (SIGNED(ctx->r3) >= 0) {
        // 0x8005D97C: nop
    
            goto L_8005D9B0;
    }
    // 0x8005D97C: nop

L_8005D980:
    // 0x8005D980: lhu         $v1, 0x0($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X0);
    // 0x8005D984: addiu       $s0, $s0, 0x8
    ctx->r16 = ADD32(ctx->r16, 0X8);
    // 0x8005D988: multu       $v1, $s2
    result = U64(U32(ctx->r3)) * U64(U32(ctx->r18)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8005D98C: mflo        $t5
    ctx->r13 = lo;
    // 0x8005D990: addu        $t6, $s1, $t5
    ctx->r14 = ADD32(ctx->r17, ctx->r13);
    // 0x8005D994: lhu         $t7, 0x12($t6)
    ctx->r15 = MEM_HU(ctx->r14, 0X12);
    // 0x8005D998: nop

    // 0x8005D99C: andi        $t8, $t7, 0x1
    ctx->r24 = ctx->r15 & 0X1;
    // 0x8005D9A0: bne         $t8, $zero, L_8005D980
    if (ctx->r24 != 0) {
        // 0x8005D9A4: nop
    
            goto L_8005D980;
    }
    // 0x8005D9A4: nop

    // 0x8005D9A8: beq         $v1, $zero, L_8005D980
    if (ctx->r3 == 0) {
        // 0x8005D9AC: nop
    
            goto L_8005D980;
    }
    // 0x8005D9AC: nop

L_8005D9B0:
    // 0x8005D9B0: multu       $v1, $s2
    result = U64(U32(ctx->r3)) * U64(U32(ctx->r18)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8005D9B4: mflo        $v0
    ctx->r2 = lo;
    // 0x8005D9B8: addu        $a0, $s1, $v0
    ctx->r4 = ADD32(ctx->r17, ctx->r2);
    // 0x8005D9BC: lhu         $t9, 0x12($a0)
    ctx->r25 = MEM_HU(ctx->r4, 0X12);
    // 0x8005D9C0: sw          $a1, 0xC4($a0)
    MEM_W(0XC4, ctx->r4) = ctx->r5;
    // 0x8005D9C4: ori         $t5, $t9, 0x1
    ctx->r13 = ctx->r25 | 0X1;
    // 0x8005D9C8: sh          $t5, 0x12($a0)
    MEM_H(0X12, ctx->r4) = ctx->r13;
    // 0x8005D9CC: addu        $t6, $v0, $s1
    ctx->r14 = ADD32(ctx->r2, ctx->r17);
    // 0x8005D9D0: bne         $a3, $zero, L_8005D9E8
    if (ctx->r7 != 0) {
        // 0x8005D9D4: sw          $t6, 0x40($a1)
        MEM_W(0X40, ctx->r5) = ctx->r14;
            goto L_8005D9E8;
    }
    // 0x8005D9D4: sw          $t6, 0x40($a1)
    MEM_W(0X40, ctx->r5) = ctx->r14;
    // 0x8005D9D8: lhu         $t7, 0x12($a0)
    ctx->r15 = MEM_HU(ctx->r4, 0X12);
    // 0x8005D9DC: nop

    // 0x8005D9E0: ori         $t8, $t7, 0x40
    ctx->r24 = ctx->r15 | 0X40;
    // 0x8005D9E4: sh          $t8, 0x12($a0)
    MEM_H(0X12, ctx->r4) = ctx->r24;
L_8005D9E8:
    // 0x8005D9E8: lw          $t9, 0x20($s3)
    ctx->r25 = MEM_W(ctx->r19, 0X20);
    // 0x8005D9EC: addiu       $a2, $a2, 0x2
    ctx->r6 = ADD32(ctx->r6, 0X2);
    // 0x8005D9F0: addu        $t5, $t9, $a2
    ctx->r13 = ADD32(ctx->r25, ctx->r6);
    // 0x8005D9F4: lh          $v0, 0x0($t5)
    ctx->r2 = MEM_H(ctx->r13, 0X0);
    // 0x8005D9F8: nop

    // 0x8005D9FC: bgez        $v0, L_8005D850
    if (SIGNED(ctx->r2) >= 0) {
        // 0x8005DA00: andi        $a3, $v0, 0x80
        ctx->r7 = ctx->r2 & 0X80;
            goto L_8005D850;
    }
    // 0x8005DA00: andi        $a3, $v0, 0x80
    ctx->r7 = ctx->r2 & 0X80;
L_8005DA04:
    // 0x8005DA04: lw          $t6, 0x40($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X40);
    // 0x8005DA08: addiu       $s7, $s7, 0x1
    ctx->r23 = ADD32(ctx->r23, 0X1);
    // 0x8005DA0C: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x8005DA10: addiu       $t7, $t6, 0xA94
    ctx->r15 = ADD32(ctx->r14, 0XA94);
    // 0x8005DA14: sw          $t7, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r15;
    // 0x8005DA18: bne         $s7, $at, L_8005D7F0
    if (ctx->r23 != ctx->r1) {
        // 0x8005DA1C: addiu       $s3, $s3, 0xA94
        ctx->r19 = ADD32(ctx->r19, 0XA94);
            goto L_8005D7F0;
    }
    // 0x8005DA1C: addiu       $s3, $s3, 0xA94
    ctx->r19 = ADD32(ctx->r19, 0XA94);
    // 0x8005DA20: b           L_8005DA38
    // 0x8005DA24: nop

        goto L_8005DA38;
    // 0x8005DA24: nop

L_8005DA28:
    // 0x8005DA28: lui         $fp, 0x8012
    ctx->r30 = S32(0X8012 << 16);
    // 0x8005DA2C: lui         $t0, 0x8012
    ctx->r8 = S32(0X8012 << 16);
    // 0x8005DA30: addiu       $t0, $t0, 0x358
    ctx->r8 = ADD32(ctx->r8, 0X358);
    // 0x8005DA34: addiu       $fp, $fp, 0xB2C
    ctx->r30 = ADD32(ctx->r30, 0XB2C);
L_8005DA38:
    // 0x8005DA38: lui         $a2, 0x801B
    ctx->r6 = S32(0X801B << 16);
    // 0x8005DA3C: lbu         $a2, 0x36C0($a2)
    ctx->r6 = MEM_BU(ctx->r6, 0X36C0);
    // 0x8005DA40: addiu       $at, $zero, 0x80
    ctx->r1 = ADD32(0, 0X80);
    // 0x8005DA44: beq         $a2, $at, L_8005DC7C
    if (ctx->r6 == ctx->r1) {
        // 0x8005DA48: lw          $ra, 0x3C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X3C);
            goto L_8005DC7C;
    }
    // 0x8005DA48: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    // 0x8005DA4C: lw          $a0, 0x0($fp)
    ctx->r4 = MEM_W(ctx->r30, 0X0);
    // 0x8005DA50: lui         $t8, 0x8012
    ctx->r24 = S32(0X8012 << 16);
    // 0x8005DA54: beq         $a0, $zero, L_8005DC78
    if (ctx->r4 == 0) {
        // 0x8005DA58: lui         $t5, 0x800B
        ctx->r13 = S32(0X800B << 16);
            goto L_8005DC78;
    }
    // 0x8005DA58: lui         $t5, 0x800B
    ctx->r13 = S32(0X800B << 16);
    // 0x8005DA5C: lhu         $t8, 0xB72($t8)
    ctx->r24 = MEM_HU(ctx->r24, 0XB72);
    // 0x8005DA60: lw          $t6, 0xC4($a0)
    ctx->r14 = MEM_W(ctx->r4, 0XC4);
    // 0x8005DA64: sll         $t9, $t8, 2
    ctx->r25 = S32(ctx->r24 << 2);
    // 0x8005DA68: lbu         $t7, 0x54($t6)
    ctx->r15 = MEM_BU(ctx->r14, 0X54);
    // 0x8005DA6C: addiu       $t5, $t5, -0x2BEC
    ctx->r13 = ADD32(ctx->r13, -0X2BEC);
    // 0x8005DA70: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x8005DA74: addu        $v1, $t9, $t5
    ctx->r3 = ADD32(ctx->r25, ctx->r13);
    // 0x8005DA78: addu        $t8, $v1, $t7
    ctx->r24 = ADD32(ctx->r3, ctx->r15);
    // 0x8005DA7C: lbu         $v0, 0x0($t8)
    ctx->r2 = MEM_BU(ctx->r24, 0X0);
    // 0x8005DA80: addiu       $s7, $zero, 0x1
    ctx->r23 = ADD32(0, 0X1);
    // 0x8005DA84: beq         $v0, $a2, L_8005DC7C
    if (ctx->r2 == ctx->r6) {
        // 0x8005DA88: lw          $ra, 0x3C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X3C);
            goto L_8005DC7C;
    }
    // 0x8005DA88: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    // 0x8005DA8C: lbu         $t9, 0x0($v1)
    ctx->r25 = MEM_BU(ctx->r3, 0X0);
    // 0x8005DA90: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x8005DA94: bne         $a2, $t9, L_8005DAE0
    if (ctx->r6 != ctx->r25) {
        // 0x8005DA98: lui         $at, 0x8012
        ctx->r1 = S32(0X8012 << 16);
            goto L_8005DAE0;
    }
    // 0x8005DA98: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x8005DA9C: lw          $v0, 0x398($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X398);
    // 0x8005DAA0: sw          $a0, 0x398($at)
    MEM_W(0X398, ctx->r1) = ctx->r4;
    // 0x8005DAA4: lw          $t5, 0xC4($a0)
    ctx->r13 = MEM_W(ctx->r4, 0XC4);
    // 0x8005DAA8: lui         $t8, 0x8012
    ctx->r24 = S32(0X8012 << 16);
    // 0x8005DAAC: sw          $t5, 0xC4($v0)
    MEM_W(0XC4, ctx->r2) = ctx->r13;
    // 0x8005DAB0: lw          $t6, 0x0($fp)
    ctx->r14 = MEM_W(ctx->r30, 0X0);
    // 0x8005DAB4: lui         $t5, 0x800B
    ctx->r13 = S32(0X800B << 16);
    // 0x8005DAB8: sw          $t0, 0xC4($t6)
    MEM_W(0XC4, ctx->r14) = ctx->r8;
    // 0x8005DABC: lw          $t7, 0xC4($v0)
    ctx->r15 = MEM_W(ctx->r2, 0XC4);
    // 0x8005DAC0: lui         $a2, 0x801B
    ctx->r6 = S32(0X801B << 16);
    // 0x8005DAC4: sw          $v0, 0x40($t7)
    MEM_W(0X40, ctx->r15) = ctx->r2;
    // 0x8005DAC8: lhu         $t8, 0xB72($t8)
    ctx->r24 = MEM_HU(ctx->r24, 0XB72);
    // 0x8005DACC: addiu       $t5, $t5, -0x2BEC
    ctx->r13 = ADD32(ctx->r13, -0X2BEC);
    // 0x8005DAD0: sll         $t9, $t8, 2
    ctx->r25 = S32(ctx->r24 << 2);
    // 0x8005DAD4: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x8005DAD8: lbu         $a2, 0x36C0($a2)
    ctx->r6 = MEM_BU(ctx->r6, 0X36C0);
    // 0x8005DADC: addu        $v1, $t9, $t5
    ctx->r3 = ADD32(ctx->r25, ctx->r13);
L_8005DAE0:
    // 0x8005DAE0: addu        $a1, $v1, $s7
    ctx->r5 = ADD32(ctx->r3, ctx->r23);
    // 0x8005DAE4: lbu         $t6, 0x0($a1)
    ctx->r14 = MEM_BU(ctx->r5, 0X0);
    // 0x8005DAE8: addiu       $a3, $zero, 0x58
    ctx->r7 = ADD32(0, 0X58);
    // 0x8005DAEC: bne         $a2, $t6, L_8005DB54
    if (ctx->r6 != ctx->r14) {
        // 0x8005DAF0: nop
    
            goto L_8005DB54;
    }
    // 0x8005DAF0: nop

    // 0x8005DAF4: multu       $s7, $a3
    result = U64(U32(ctx->r23)) * U64(U32(ctx->r7)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8005DAF8: lw          $a0, 0x0($fp)
    ctx->r4 = MEM_W(ctx->r30, 0X0);
    // 0x8005DAFC: lui         $t6, 0x8012
    ctx->r14 = S32(0X8012 << 16);
    // 0x8005DB00: lui         $a2, 0x801B
    ctx->r6 = S32(0X801B << 16);
    // 0x8005DB04: mflo        $t7
    ctx->r15 = lo;
    // 0x8005DB08: addu        $v1, $t0, $t7
    ctx->r3 = ADD32(ctx->r8, ctx->r15);
    // 0x8005DB0C: lw          $v0, 0x40($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X40);
    // 0x8005DB10: sw          $a0, 0x40($v1)
    MEM_W(0X40, ctx->r3) = ctx->r4;
    // 0x8005DB14: lw          $t8, 0xC4($a0)
    ctx->r24 = MEM_W(ctx->r4, 0XC4);
    // 0x8005DB18: nop

    // 0x8005DB1C: sw          $t8, 0xC4($v0)
    MEM_W(0XC4, ctx->r2) = ctx->r24;
    // 0x8005DB20: lw          $t9, 0x0($fp)
    ctx->r25 = MEM_W(ctx->r30, 0X0);
    // 0x8005DB24: nop

    // 0x8005DB28: sw          $v1, 0xC4($t9)
    MEM_W(0XC4, ctx->r25) = ctx->r3;
    // 0x8005DB2C: lw          $t5, 0xC4($v0)
    ctx->r13 = MEM_W(ctx->r2, 0XC4);
    // 0x8005DB30: lui         $t9, 0x800B
    ctx->r25 = S32(0X800B << 16);
    // 0x8005DB34: sw          $v0, 0x40($t5)
    MEM_W(0X40, ctx->r13) = ctx->r2;
    // 0x8005DB38: lhu         $t6, 0xB72($t6)
    ctx->r14 = MEM_HU(ctx->r14, 0XB72);
    // 0x8005DB3C: addiu       $t9, $t9, -0x2BEC
    ctx->r25 = ADD32(ctx->r25, -0X2BEC);
    // 0x8005DB40: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x8005DB44: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8005DB48: addu        $t8, $t7, $s7
    ctx->r24 = ADD32(ctx->r15, ctx->r23);
    // 0x8005DB4C: lbu         $a2, 0x36C0($a2)
    ctx->r6 = MEM_BU(ctx->r6, 0X36C0);
    // 0x8005DB50: addu        $a1, $t8, $t9
    ctx->r5 = ADD32(ctx->r24, ctx->r25);
L_8005DB54:
    // 0x8005DB54: lbu         $t5, 0x1($a1)
    ctx->r13 = MEM_BU(ctx->r5, 0X1);
    // 0x8005DB58: addiu       $a3, $zero, 0x58
    ctx->r7 = ADD32(0, 0X58);
    // 0x8005DB5C: bne         $a2, $t5, L_8005DBC0
    if (ctx->r6 != ctx->r13) {
        // 0x8005DB60: nop
    
            goto L_8005DBC0;
    }
    // 0x8005DB60: nop

    // 0x8005DB64: multu       $s7, $a3
    result = U64(U32(ctx->r23)) * U64(U32(ctx->r7)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8005DB68: lw          $a0, 0x0($fp)
    ctx->r4 = MEM_W(ctx->r30, 0X0);
    // 0x8005DB6C: lui         $a2, 0x801B
    ctx->r6 = S32(0X801B << 16);
    // 0x8005DB70: mflo        $t6
    ctx->r14 = lo;
    // 0x8005DB74: addu        $v1, $t0, $t6
    ctx->r3 = ADD32(ctx->r8, ctx->r14);
    // 0x8005DB78: lw          $v0, 0x98($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X98);
    // 0x8005DB7C: sw          $a0, 0x98($v1)
    MEM_W(0X98, ctx->r3) = ctx->r4;
    // 0x8005DB80: lw          $t7, 0xC4($a0)
    ctx->r15 = MEM_W(ctx->r4, 0XC4);
    // 0x8005DB84: addiu       $t8, $v1, 0x58
    ctx->r24 = ADD32(ctx->r3, 0X58);
    // 0x8005DB88: sw          $t7, 0xC4($v0)
    MEM_W(0XC4, ctx->r2) = ctx->r15;
    // 0x8005DB8C: lw          $t9, 0x0($fp)
    ctx->r25 = MEM_W(ctx->r30, 0X0);
    // 0x8005DB90: lui         $t6, 0x8012
    ctx->r14 = S32(0X8012 << 16);
    // 0x8005DB94: sw          $t8, 0xC4($t9)
    MEM_W(0XC4, ctx->r25) = ctx->r24;
    // 0x8005DB98: lw          $t5, 0xC4($v0)
    ctx->r13 = MEM_W(ctx->r2, 0XC4);
    // 0x8005DB9C: lui         $t9, 0x800B
    ctx->r25 = S32(0X800B << 16);
    // 0x8005DBA0: sw          $v0, 0x40($t5)
    MEM_W(0X40, ctx->r13) = ctx->r2;
    // 0x8005DBA4: lhu         $t6, 0xB72($t6)
    ctx->r14 = MEM_HU(ctx->r14, 0XB72);
    // 0x8005DBA8: addiu       $t9, $t9, -0x2BEC
    ctx->r25 = ADD32(ctx->r25, -0X2BEC);
    // 0x8005DBAC: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x8005DBB0: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8005DBB4: addu        $t8, $t7, $s7
    ctx->r24 = ADD32(ctx->r15, ctx->r23);
    // 0x8005DBB8: lbu         $a2, 0x36C0($a2)
    ctx->r6 = MEM_BU(ctx->r6, 0X36C0);
    // 0x8005DBBC: addu        $a1, $t8, $t9
    ctx->r5 = ADD32(ctx->r24, ctx->r25);
L_8005DBC0:
    // 0x8005DBC0: lbu         $t5, 0x2($a1)
    ctx->r13 = MEM_BU(ctx->r5, 0X2);
    // 0x8005DBC4: nop

    // 0x8005DBC8: bne         $a2, $t5, L_8005DC2C
    if (ctx->r6 != ctx->r13) {
        // 0x8005DBCC: nop
    
            goto L_8005DC2C;
    }
    // 0x8005DBCC: nop

    // 0x8005DBD0: multu       $s7, $a3
    result = U64(U32(ctx->r23)) * U64(U32(ctx->r7)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8005DBD4: lw          $a0, 0x0($fp)
    ctx->r4 = MEM_W(ctx->r30, 0X0);
    // 0x8005DBD8: lui         $a2, 0x801B
    ctx->r6 = S32(0X801B << 16);
    // 0x8005DBDC: mflo        $t6
    ctx->r14 = lo;
    // 0x8005DBE0: addu        $v1, $t0, $t6
    ctx->r3 = ADD32(ctx->r8, ctx->r14);
    // 0x8005DBE4: lw          $v0, 0xF0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0XF0);
    // 0x8005DBE8: sw          $a0, 0xF0($v1)
    MEM_W(0XF0, ctx->r3) = ctx->r4;
    // 0x8005DBEC: lw          $t7, 0xC4($a0)
    ctx->r15 = MEM_W(ctx->r4, 0XC4);
    // 0x8005DBF0: addiu       $t8, $v1, 0xB0
    ctx->r24 = ADD32(ctx->r3, 0XB0);
    // 0x8005DBF4: sw          $t7, 0xC4($v0)
    MEM_W(0XC4, ctx->r2) = ctx->r15;
    // 0x8005DBF8: lw          $t9, 0x0($fp)
    ctx->r25 = MEM_W(ctx->r30, 0X0);
    // 0x8005DBFC: lui         $t6, 0x8012
    ctx->r14 = S32(0X8012 << 16);
    // 0x8005DC00: sw          $t8, 0xC4($t9)
    MEM_W(0XC4, ctx->r25) = ctx->r24;
    // 0x8005DC04: lw          $t5, 0xC4($v0)
    ctx->r13 = MEM_W(ctx->r2, 0XC4);
    // 0x8005DC08: lui         $t9, 0x800B
    ctx->r25 = S32(0X800B << 16);
    // 0x8005DC0C: sw          $v0, 0x40($t5)
    MEM_W(0X40, ctx->r13) = ctx->r2;
    // 0x8005DC10: lhu         $t6, 0xB72($t6)
    ctx->r14 = MEM_HU(ctx->r14, 0XB72);
    // 0x8005DC14: addiu       $t9, $t9, -0x2BEC
    ctx->r25 = ADD32(ctx->r25, -0X2BEC);
    // 0x8005DC18: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x8005DC1C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8005DC20: addu        $t8, $t7, $s7
    ctx->r24 = ADD32(ctx->r15, ctx->r23);
    // 0x8005DC24: lbu         $a2, 0x36C0($a2)
    ctx->r6 = MEM_BU(ctx->r6, 0X36C0);
    // 0x8005DC28: addu        $a1, $t8, $t9
    ctx->r5 = ADD32(ctx->r24, ctx->r25);
L_8005DC2C:
    // 0x8005DC2C: lbu         $t5, 0x3($a1)
    ctx->r13 = MEM_BU(ctx->r5, 0X3);
    // 0x8005DC30: nop

    // 0x8005DC34: bne         $a2, $t5, L_8005DC7C
    if (ctx->r6 != ctx->r13) {
        // 0x8005DC38: lw          $ra, 0x3C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X3C);
            goto L_8005DC7C;
    }
    // 0x8005DC38: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    // 0x8005DC3C: multu       $s7, $a3
    result = U64(U32(ctx->r23)) * U64(U32(ctx->r7)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8005DC40: lw          $a0, 0x0($fp)
    ctx->r4 = MEM_W(ctx->r30, 0X0);
    // 0x8005DC44: mflo        $t6
    ctx->r14 = lo;
    // 0x8005DC48: addu        $v1, $t0, $t6
    ctx->r3 = ADD32(ctx->r8, ctx->r14);
    // 0x8005DC4C: lw          $v0, 0x148($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X148);
    // 0x8005DC50: sw          $a0, 0x148($v1)
    MEM_W(0X148, ctx->r3) = ctx->r4;
    // 0x8005DC54: lw          $t7, 0xC4($a0)
    ctx->r15 = MEM_W(ctx->r4, 0XC4);
    // 0x8005DC58: addiu       $t8, $v1, 0x108
    ctx->r24 = ADD32(ctx->r3, 0X108);
    // 0x8005DC5C: sw          $t7, 0xC4($v0)
    MEM_W(0XC4, ctx->r2) = ctx->r15;
    // 0x8005DC60: lw          $t9, 0x0($fp)
    ctx->r25 = MEM_W(ctx->r30, 0X0);
    // 0x8005DC64: nop

    // 0x8005DC68: sw          $t8, 0xC4($t9)
    MEM_W(0XC4, ctx->r25) = ctx->r24;
    // 0x8005DC6C: lw          $t5, 0xC4($v0)
    ctx->r13 = MEM_W(ctx->r2, 0XC4);
    // 0x8005DC70: nop

    // 0x8005DC74: sw          $v0, 0x40($t5)
    MEM_W(0X40, ctx->r13) = ctx->r2;
L_8005DC78:
    // 0x8005DC78: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
L_8005DC7C:
    // 0x8005DC7C: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8005DC80: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x8005DC84: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x8005DC88: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x8005DC8C: lw          $s4, 0x28($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X28);
    // 0x8005DC90: lw          $s5, 0x2C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X2C);
    // 0x8005DC94: lw          $s6, 0x30($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X30);
    // 0x8005DC98: lw          $s7, 0x34($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X34);
    // 0x8005DC9C: lw          $fp, 0x38($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X38);
    // 0x8005DCA0: jr          $ra
    // 0x8005DCA4: addiu       $sp, $sp, 0x70
    ctx->r29 = ADD32(ctx->r29, 0X70);
    return;
    // 0x8005DCA4: addiu       $sp, $sp, 0x70
    ctx->r29 = ADD32(ctx->r29, 0X70);
;}
RECOMP_FUNC void func_8005DCA8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8005DCA8: addiu       $sp, $sp, -0x70
    ctx->r29 = ADD32(ctx->r29, -0X70);
    // 0x8005DCAC: lui         $t6, 0x8010
    ctx->r14 = S32(0X8010 << 16);
    // 0x8005DCB0: lbu         $t6, 0x5232($t6)
    ctx->r14 = MEM_BU(ctx->r14, 0X5232);
    // 0x8005DCB4: sw          $s4, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r20;
    // 0x8005DCB8: addiu       $at, $zero, 0x5
    ctx->r1 = ADD32(0, 0X5);
    // 0x8005DCBC: or          $s4, $a0, $zero
    ctx->r20 = ctx->r4 | 0;
    // 0x8005DCC0: sw          $ra, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r31;
    // 0x8005DCC4: sw          $s3, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r19;
    // 0x8005DCC8: sw          $s2, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r18;
    // 0x8005DCCC: sw          $s1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r17;
    // 0x8005DCD0: sw          $s0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r16;
    // 0x8005DCD4: swc1        $f25, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f_odd[(25 - 1) * 2];
    // 0x8005DCD8: swc1        $f24, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f24.u32l;
    // 0x8005DCDC: swc1        $f23, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f_odd[(23 - 1) * 2];
    // 0x8005DCE0: swc1        $f22, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f22.u32l;
    // 0x8005DCE4: swc1        $f21, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x8005DCE8: bne         $t6, $at, L_8005DD14
    if (ctx->r14 != ctx->r1) {
        // 0x8005DCEC: swc1        $f20, 0x1C($sp)
        MEM_W(0X1C, ctx->r29) = ctx->f20.u32l;
            goto L_8005DD14;
    }
    // 0x8005DCEC: swc1        $f20, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f20.u32l;
    // 0x8005DCF0: lui         $s3, 0x8009
    ctx->r19 = S32(0X8009 << 16);
    // 0x8005DCF4: addiu       $s3, $s3, 0x3B20
    ctx->r19 = ADD32(ctx->r19, 0X3B20);
    // 0x8005DCF8: lw          $v0, 0x0($s3)
    ctx->r2 = MEM_W(ctx->r19, 0X0);
    // 0x8005DCFC: lui         $a0, 0x8010
    ctx->r4 = S32(0X8010 << 16);
    // 0x8005DD00: addiu       $a0, $a0, 0x6420
    ctx->r4 = ADD32(ctx->r4, 0X6420);
    // 0x8005DD04: addiu       $a3, $sp, 0x58
    ctx->r7 = ADD32(ctx->r29, 0X58);
    // 0x8005DD08: addiu       $a1, $v0, 0x34
    ctx->r5 = ADD32(ctx->r2, 0X34);
    // 0x8005DD0C: jal         0x8000460C
    // 0x8005DD10: addiu       $a2, $v0, 0x38
    ctx->r6 = ADD32(ctx->r2, 0X38);
    func_8000460C(rdram, ctx);
        goto after_0;
    // 0x8005DD10: addiu       $a2, $v0, 0x38
    ctx->r6 = ADD32(ctx->r2, 0X38);
    after_0:
L_8005DD14:
    // 0x8005DD14: lw          $s0, 0x18($s4)
    ctx->r16 = MEM_W(ctx->r20, 0X18);
    // 0x8005DD18: addiu       $s1, $s4, 0x318
    ctx->r17 = ADD32(ctx->r20, 0X318);
    // 0x8005DD1C: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x8005DD20: lui         $s3, 0x8009
    ctx->r19 = S32(0X8009 << 16);
    // 0x8005DD24: lui         $s4, 0x8010
    ctx->r20 = S32(0X8010 << 16);
    // 0x8005DD28: lwc1        $f24, -0x673C($at)
    ctx->f24.u32l = MEM_W(ctx->r1, -0X673C);
    // 0x8005DD2C: addiu       $s3, $s3, 0x3B20
    ctx->r19 = ADD32(ctx->r19, 0X3B20);
    // 0x8005DD30: addiu       $s4, $s4, 0x4890
    ctx->r20 = ADD32(ctx->r20, 0X4890);
    // 0x8005DD34: or          $s2, $zero, $zero
    ctx->r18 = 0 | 0;
L_8005DD38:
    // 0x8005DD38: lw          $v0, 0x0($s3)
    ctx->r2 = MEM_W(ctx->r19, 0X0);
    // 0x8005DD3C: lwc1        $f6, 0x94($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X94);
    // 0x8005DD40: lwc1        $f10, 0x98($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X98);
    // 0x8005DD44: lwc1        $f4, 0x34($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X34);
    // 0x8005DD48: lwc1        $f8, 0x38($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X38);
    // 0x8005DD4C: sub.s       $f20, $f4, $f6
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f20.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x8005DD50: sub.s       $f22, $f8, $f10
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f22.fl = ctx->f8.fl - ctx->f10.fl;
    // 0x8005DD54: mov.s       $f12, $f22
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 22);
    ctx->f12.fl = ctx->f22.fl;
    // 0x8005DD58: jal         0x8001C5D0
    // 0x8005DD5C: mov.s       $f14, $f20
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 20);
    ctx->f14.fl = ctx->f20.fl;
    func_8001C5D0(rdram, ctx);
        goto after_1;
    // 0x8005DD5C: mov.s       $f14, $f20
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 20);
    ctx->f14.fl = ctx->f20.fl;
    after_1:
    // 0x8005DD60: mul.s       $f16, $f20, $f20
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f16.fl = MUL_S(ctx->f20.fl, ctx->f20.fl);
    // 0x8005DD64: swc1        $f0, 0x9C($s0)
    MEM_W(0X9C, ctx->r16) = ctx->f0.u32l;
    // 0x8005DD68: mul.s       $f18, $f22, $f22
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f22.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f18.fl = MUL_S(ctx->f22.fl, ctx->f22.fl);
    // 0x8005DD6C: jal         0x8007FA40
    // 0x8005DD70: add.s       $f12, $f16, $f18
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f12.fl = ctx->f16.fl + ctx->f18.fl;
    func_8007FA40(rdram, ctx);
        goto after_2;
    // 0x8005DD70: add.s       $f12, $f16, $f18
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f12.fl = ctx->f16.fl + ctx->f18.fl;
    after_2:
    // 0x8005DD74: swc1        $f0, 0xA0($s0)
    MEM_W(0XA0, ctx->r16) = ctx->f0.u32l;
    // 0x8005DD78: lw          $v0, 0x0($s3)
    ctx->r2 = MEM_W(ctx->r19, 0X0);
    // 0x8005DD7C: lwc1        $f4, 0x4C($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X4C);
    // 0x8005DD80: lwc1        $f6, 0x8($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0X8);
    // 0x8005DD84: lwc1        $f8, 0x44($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X44);
    // 0x8005DD88: sub.s       $f20, $f4, $f6
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f20.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x8005DD8C: lwc1        $f10, 0x0($v0)
    ctx->f10.u32l = MEM_W(ctx->r2, 0X0);
    // 0x8005DD90: mul.s       $f16, $f20, $f20
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f16.fl = MUL_S(ctx->f20.fl, ctx->f20.fl);
    // 0x8005DD94: sub.s       $f22, $f8, $f10
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f22.fl = ctx->f8.fl - ctx->f10.fl;
    // 0x8005DD98: mul.s       $f18, $f22, $f22
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f22.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f18.fl = MUL_S(ctx->f22.fl, ctx->f22.fl);
    // 0x8005DD9C: jal         0x8007FA40
    // 0x8005DDA0: add.s       $f12, $f16, $f18
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f12.fl = ctx->f16.fl + ctx->f18.fl;
    func_8007FA40(rdram, ctx);
        goto after_3;
    // 0x8005DDA0: add.s       $f12, $f16, $f18
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f12.fl = ctx->f16.fl + ctx->f18.fl;
    after_3:
    // 0x8005DDA4: swc1        $f0, 0x84($s0)
    MEM_W(0X84, ctx->r16) = ctx->f0.u32l;
    // 0x8005DDA8: mov.s       $f12, $f22
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 22);
    ctx->f12.fl = ctx->f22.fl;
    // 0x8005DDAC: jal         0x8001C5D0
    // 0x8005DDB0: mov.s       $f14, $f20
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 20);
    ctx->f14.fl = ctx->f20.fl;
    func_8001C5D0(rdram, ctx);
        goto after_4;
    // 0x8005DDB0: mov.s       $f14, $f20
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 20);
    ctx->f14.fl = ctx->f20.fl;
    after_4:
    // 0x8005DDB4: swc1        $f0, 0x88($s0)
    MEM_W(0X88, ctx->r16) = ctx->f0.u32l;
    // 0x8005DDB8: sh          $s2, 0x0($s1)
    MEM_H(0X0, ctx->r17) = ctx->r18;
    // 0x8005DDBC: lw          $t7, 0x0($s3)
    ctx->r15 = MEM_W(ctx->r19, 0X0);
    // 0x8005DDC0: nop

    // 0x8005DDC4: lhu         $t8, 0xC0($t7)
    ctx->r24 = MEM_HU(ctx->r15, 0XC0);
    // 0x8005DDC8: nop

    // 0x8005DDCC: andi        $t9, $t8, 0x1
    ctx->r25 = ctx->r24 & 0X1;
    // 0x8005DDD0: beq         $t9, $zero, L_8005DE08
    if (ctx->r25 == 0) {
        // 0x8005DDD4: nop
    
            goto L_8005DE08;
    }
    // 0x8005DDD4: nop

    // 0x8005DDD8: lwc1        $f4, 0x4C($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X4C);
    // 0x8005DDDC: lwc1        $f6, 0x1C38($s4)
    ctx->f6.u32l = MEM_W(ctx->r20, 0X1C38);
    // 0x8005DDE0: lwc1        $f8, 0x44($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X44);
    // 0x8005DDE4: sub.s       $f20, $f4, $f6
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f20.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x8005DDE8: lwc1        $f10, 0x1C30($s4)
    ctx->f10.u32l = MEM_W(ctx->r20, 0X1C30);
    // 0x8005DDEC: mul.s       $f16, $f20, $f20
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f16.fl = MUL_S(ctx->f20.fl, ctx->f20.fl);
    // 0x8005DDF0: sub.s       $f22, $f8, $f10
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f22.fl = ctx->f8.fl - ctx->f10.fl;
    // 0x8005DDF4: mul.s       $f18, $f22, $f22
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f22.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f18.fl = MUL_S(ctx->f22.fl, ctx->f22.fl);
    // 0x8005DDF8: jal         0x8007FA40
    // 0x8005DDFC: add.s       $f12, $f16, $f18
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f12.fl = ctx->f16.fl + ctx->f18.fl;
    func_8007FA40(rdram, ctx);
        goto after_5;
    // 0x8005DDFC: add.s       $f12, $f16, $f18
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f12.fl = ctx->f16.fl + ctx->f18.fl;
    after_5:
    // 0x8005DE00: b           L_8005DE14
    // 0x8005DE04: swc1        $f0, 0x4($s1)
    MEM_W(0X4, ctx->r17) = ctx->f0.u32l;
        goto L_8005DE14;
    // 0x8005DE04: swc1        $f0, 0x4($s1)
    MEM_W(0X4, ctx->r17) = ctx->f0.u32l;
L_8005DE08:
    // 0x8005DE08: lwc1        $f4, 0x84($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X84);
    // 0x8005DE0C: nop

    // 0x8005DE10: swc1        $f4, 0x4($s1)
    MEM_W(0X4, ctx->r17) = ctx->f4.u32l;
L_8005DE14:
    // 0x8005DE14: lhu         $t0, 0xC($s0)
    ctx->r8 = MEM_HU(ctx->r16, 0XC);
    // 0x8005DE18: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
    // 0x8005DE1C: bne         $t0, $zero, L_8005DE28
    if (ctx->r8 != 0) {
        // 0x8005DE20: andi        $t1, $s2, 0xFFFF
        ctx->r9 = ctx->r18 & 0XFFFF;
            goto L_8005DE28;
    }
    // 0x8005DE20: andi        $t1, $s2, 0xFFFF
    ctx->r9 = ctx->r18 & 0XFFFF;
    // 0x8005DE24: swc1        $f24, 0x4($s1)
    MEM_W(0X4, ctx->r17) = ctx->f24.u32l;
L_8005DE28:
    // 0x8005DE28: slti        $at, $t1, 0xB
    ctx->r1 = SIGNED(ctx->r9) < 0XB ? 1 : 0;
    // 0x8005DE2C: or          $s2, $t1, $zero
    ctx->r18 = ctx->r9 | 0;
    // 0x8005DE30: addiu       $s0, $s0, 0xF8
    ctx->r16 = ADD32(ctx->r16, 0XF8);
    // 0x8005DE34: bne         $at, $zero, L_8005DD38
    if (ctx->r1 != 0) {
        // 0x8005DE38: addiu       $s1, $s1, 0x8
        ctx->r17 = ADD32(ctx->r17, 0X8);
            goto L_8005DD38;
    }
    // 0x8005DE38: addiu       $s1, $s1, 0x8
    ctx->r17 = ADD32(ctx->r17, 0X8);
    // 0x8005DE3C: lw          $ra, 0x44($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X44);
    // 0x8005DE40: lwc1        $f21, 0x18($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X18);
    // 0x8005DE44: lwc1        $f20, 0x1C($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x8005DE48: lwc1        $f23, 0x20($sp)
    ctx->f_odd[(23 - 1) * 2] = MEM_W(ctx->r29, 0X20);
    // 0x8005DE4C: lwc1        $f22, 0x24($sp)
    ctx->f22.u32l = MEM_W(ctx->r29, 0X24);
    // 0x8005DE50: lwc1        $f25, 0x28($sp)
    ctx->f_odd[(25 - 1) * 2] = MEM_W(ctx->r29, 0X28);
    // 0x8005DE54: lwc1        $f24, 0x2C($sp)
    ctx->f24.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x8005DE58: lw          $s0, 0x30($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X30);
    // 0x8005DE5C: lw          $s1, 0x34($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X34);
    // 0x8005DE60: lw          $s2, 0x38($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X38);
    // 0x8005DE64: lw          $s3, 0x3C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X3C);
    // 0x8005DE68: lw          $s4, 0x40($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X40);
    // 0x8005DE6C: jr          $ra
    // 0x8005DE70: addiu       $sp, $sp, 0x70
    ctx->r29 = ADD32(ctx->r29, 0X70);
    return;
    // 0x8005DE70: addiu       $sp, $sp, 0x70
    ctx->r29 = ADD32(ctx->r29, 0X70);
;}
RECOMP_FUNC void func_8005DE74(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8005DE74: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x8005DE78: sw          $a0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r4;
    // 0x8005DE7C: lh          $t6, 0x42($sp)
    ctx->r14 = MEM_H(ctx->r29, 0X42);
    // 0x8005DE80: sw          $a1, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r5;
    // 0x8005DE84: lh          $t7, 0x46($sp)
    ctx->r15 = MEM_H(ctx->r29, 0X46);
    // 0x8005DE88: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8005DE8C: addu        $t8, $t6, $t7
    ctx->r24 = ADD32(ctx->r14, ctx->r15);
    // 0x8005DE90: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8005DE94: or          $a3, $t6, $zero
    ctx->r7 = ctx->r14 | 0;
    // 0x8005DE98: or          $s0, $t7, $zero
    ctx->r16 = ctx->r15 | 0;
    // 0x8005DE9C: bgez        $t8, L_8005DEAC
    if (SIGNED(ctx->r24) >= 0) {
        // 0x8005DEA0: sra         $t9, $t8, 1
        ctx->r25 = S32(SIGNED(ctx->r24) >> 1);
            goto L_8005DEAC;
    }
    // 0x8005DEA0: sra         $t9, $t8, 1
    ctx->r25 = S32(SIGNED(ctx->r24) >> 1);
    // 0x8005DEA4: addiu       $at, $t8, 0x1
    ctx->r1 = ADD32(ctx->r24, 0X1);
    // 0x8005DEA8: sra         $t9, $at, 1
    ctx->r25 = S32(SIGNED(ctx->r1) >> 1);
L_8005DEAC:
    // 0x8005DEAC: sll         $t0, $t9, 3
    ctx->r8 = S32(ctx->r25 << 3);
    // 0x8005DEB0: addu        $t1, $a2, $t0
    ctx->r9 = ADD32(ctx->r6, ctx->r8);
    // 0x8005DEB4: lwc1        $f0, 0x4($t1)
    ctx->f0.u32l = MEM_W(ctx->r9, 0X4);
    // 0x8005DEB8: addiu       $a0, $sp, 0x2C
    ctx->r4 = ADD32(ctx->r29, 0X2C);
    // 0x8005DEBC: sll         $t2, $a3, 3
    ctx->r10 = S32(ctx->r7 << 3);
L_8005DEC0:
    // 0x8005DEC0: addu        $v0, $a2, $t2
    ctx->r2 = ADD32(ctx->r6, ctx->r10);
    // 0x8005DEC4: lwc1        $f4, 0x4($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X4);
    // 0x8005DEC8: sll         $t3, $s0, 3
    ctx->r11 = S32(ctx->r16 << 3);
    // 0x8005DECC: c.lt.s      $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f4.fl < ctx->f0.fl;
    // 0x8005DED0: addu        $v1, $a2, $t3
    ctx->r3 = ADD32(ctx->r6, ctx->r11);
    // 0x8005DED4: lwc1        $f2, 0x4($v1)
    ctx->f2.u32l = MEM_W(ctx->r3, 0X4);
    // 0x8005DED8: bc1f        L_8005DF0C
    if (!c1cs) {
        // 0x8005DEDC: nop
    
            goto L_8005DF0C;
    }
    // 0x8005DEDC: nop

L_8005DEE0:
    // 0x8005DEE0: addiu       $a3, $a3, 0x1
    ctx->r7 = ADD32(ctx->r7, 0X1);
    // 0x8005DEE4: sll         $t4, $a3, 16
    ctx->r12 = S32(ctx->r7 << 16);
    // 0x8005DEE8: sra         $a3, $t4, 16
    ctx->r7 = S32(SIGNED(ctx->r12) >> 16);
    // 0x8005DEEC: sll         $t6, $a3, 3
    ctx->r14 = S32(ctx->r7 << 3);
    // 0x8005DEF0: addu        $v0, $a2, $t6
    ctx->r2 = ADD32(ctx->r6, ctx->r14);
    // 0x8005DEF4: lwc1        $f6, 0x4($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0X4);
    // 0x8005DEF8: nop

    // 0x8005DEFC: c.lt.s      $f6, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f6.fl < ctx->f0.fl;
    // 0x8005DF00: nop

    // 0x8005DF04: bc1t        L_8005DEE0
    if (c1cs) {
        // 0x8005DF08: nop
    
            goto L_8005DEE0;
    }
    // 0x8005DF08: nop

L_8005DF0C:
    // 0x8005DF0C: c.lt.s      $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f0.fl < ctx->f2.fl;
    // 0x8005DF10: nop

    // 0x8005DF14: bc1f        L_8005DF4C
    if (!c1cs) {
        // 0x8005DF18: slt         $at, $s0, $a3
        ctx->r1 = SIGNED(ctx->r16) < SIGNED(ctx->r7) ? 1 : 0;
            goto L_8005DF4C;
    }
    // 0x8005DF18: slt         $at, $s0, $a3
    ctx->r1 = SIGNED(ctx->r16) < SIGNED(ctx->r7) ? 1 : 0;
L_8005DF1C:
    // 0x8005DF1C: addiu       $s0, $s0, -0x1
    ctx->r16 = ADD32(ctx->r16, -0X1);
    // 0x8005DF20: sll         $t7, $s0, 16
    ctx->r15 = S32(ctx->r16 << 16);
    // 0x8005DF24: sra         $s0, $t7, 16
    ctx->r16 = S32(SIGNED(ctx->r15) >> 16);
    // 0x8005DF28: sll         $t9, $s0, 3
    ctx->r25 = S32(ctx->r16 << 3);
    // 0x8005DF2C: addu        $v1, $a2, $t9
    ctx->r3 = ADD32(ctx->r6, ctx->r25);
    // 0x8005DF30: lwc1        $f8, 0x4($v1)
    ctx->f8.u32l = MEM_W(ctx->r3, 0X4);
    // 0x8005DF34: nop

    // 0x8005DF38: c.lt.s      $f0, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f0.fl < ctx->f8.fl;
    // 0x8005DF3C: nop

    // 0x8005DF40: bc1t        L_8005DF1C
    if (c1cs) {
        // 0x8005DF44: nop
    
            goto L_8005DF1C;
    }
    // 0x8005DF44: nop

    // 0x8005DF48: slt         $at, $s0, $a3
    ctx->r1 = SIGNED(ctx->r16) < SIGNED(ctx->r7) ? 1 : 0;
L_8005DF4C:
    // 0x8005DF4C: bne         $at, $zero, L_8005DFA0
    if (ctx->r1 != 0) {
        // 0x8005DF50: slt         $at, $s0, $a3
        ctx->r1 = SIGNED(ctx->r16) < SIGNED(ctx->r7) ? 1 : 0;
            goto L_8005DFA0;
    }
    // 0x8005DF50: slt         $at, $s0, $a3
    ctx->r1 = SIGNED(ctx->r16) < SIGNED(ctx->r7) ? 1 : 0;
    // 0x8005DF54: lw          $at, 0x0($v0)
    ctx->r1 = MEM_W(ctx->r2, 0X0);
    // 0x8005DF58: addiu       $a3, $a3, 0x1
    ctx->r7 = ADD32(ctx->r7, 0X1);
    // 0x8005DF5C: sw          $at, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r1;
    // 0x8005DF60: lw          $t1, 0x4($v0)
    ctx->r9 = MEM_W(ctx->r2, 0X4);
    // 0x8005DF64: addiu       $s0, $s0, -0x1
    ctx->r16 = ADD32(ctx->r16, -0X1);
    // 0x8005DF68: sw          $t1, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->r9;
    // 0x8005DF6C: lw          $at, 0x0($v1)
    ctx->r1 = MEM_W(ctx->r3, 0X0);
    // 0x8005DF70: sll         $t6, $a3, 16
    ctx->r14 = S32(ctx->r7 << 16);
    // 0x8005DF74: sw          $at, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r1;
    // 0x8005DF78: lw          $t3, 0x4($v1)
    ctx->r11 = MEM_W(ctx->r3, 0X4);
    // 0x8005DF7C: sll         $t8, $s0, 16
    ctx->r24 = S32(ctx->r16 << 16);
    // 0x8005DF80: sw          $t3, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r11;
    // 0x8005DF84: lw          $at, 0x0($a0)
    ctx->r1 = MEM_W(ctx->r4, 0X0);
    // 0x8005DF88: sra         $a3, $t6, 16
    ctx->r7 = S32(SIGNED(ctx->r14) >> 16);
    // 0x8005DF8C: sw          $at, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r1;
    // 0x8005DF90: lw          $t5, 0x4($a0)
    ctx->r13 = MEM_W(ctx->r4, 0X4);
    // 0x8005DF94: sra         $s0, $t8, 16
    ctx->r16 = S32(SIGNED(ctx->r24) >> 16);
    // 0x8005DF98: sw          $t5, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r13;
    // 0x8005DF9C: slt         $at, $s0, $a3
    ctx->r1 = SIGNED(ctx->r16) < SIGNED(ctx->r7) ? 1 : 0;
L_8005DFA0:
    // 0x8005DFA0: beq         $at, $zero, L_8005DEC0
    if (ctx->r1 == 0) {
        // 0x8005DFA4: sll         $t2, $a3, 3
        ctx->r10 = S32(ctx->r7 << 3);
            goto L_8005DEC0;
    }
    // 0x8005DFA4: sll         $t2, $a3, 3
    ctx->r10 = S32(ctx->r7 << 3);
    // 0x8005DFA8: lh          $t0, 0x42($sp)
    ctx->r8 = MEM_H(ctx->r29, 0X42);
    // 0x8005DFAC: sll         $a1, $s0, 16
    ctx->r5 = S32(ctx->r16 << 16);
    // 0x8005DFB0: slt         $at, $t0, $s0
    ctx->r1 = SIGNED(ctx->r8) < SIGNED(ctx->r16) ? 1 : 0;
    // 0x8005DFB4: beq         $at, $zero, L_8005DFDC
    if (ctx->r1 == 0) {
        // 0x8005DFB8: or          $a0, $t0, $zero
        ctx->r4 = ctx->r8 | 0;
            goto L_8005DFDC;
    }
    // 0x8005DFB8: or          $a0, $t0, $zero
    ctx->r4 = ctx->r8 | 0;
    // 0x8005DFBC: sra         $t1, $a1, 16
    ctx->r9 = S32(SIGNED(ctx->r5) >> 16);
    // 0x8005DFC0: or          $a1, $t1, $zero
    ctx->r5 = ctx->r9 | 0;
    // 0x8005DFC4: sw          $a2, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r6;
    // 0x8005DFC8: jal         0x8005DE74
    // 0x8005DFCC: sh          $a3, 0x3E($sp)
    MEM_H(0X3E, ctx->r29) = ctx->r7;
    func_8005DE74(rdram, ctx);
        goto after_0;
    // 0x8005DFCC: sh          $a3, 0x3E($sp)
    MEM_H(0X3E, ctx->r29) = ctx->r7;
    after_0:
    // 0x8005DFD0: lw          $a2, 0x48($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X48);
    // 0x8005DFD4: lh          $a3, 0x3E($sp)
    ctx->r7 = MEM_H(ctx->r29, 0X3E);
    // 0x8005DFD8: nop

L_8005DFDC:
    // 0x8005DFDC: lh          $t2, 0x46($sp)
    ctx->r10 = MEM_H(ctx->r29, 0X46);
    // 0x8005DFE0: sll         $a0, $a3, 16
    ctx->r4 = S32(ctx->r7 << 16);
    // 0x8005DFE4: slt         $at, $a3, $t2
    ctx->r1 = SIGNED(ctx->r7) < SIGNED(ctx->r10) ? 1 : 0;
    // 0x8005DFE8: beq         $at, $zero, L_8005DFFC
    if (ctx->r1 == 0) {
        // 0x8005DFEC: sra         $t3, $a0, 16
        ctx->r11 = S32(SIGNED(ctx->r4) >> 16);
            goto L_8005DFFC;
    }
    // 0x8005DFEC: sra         $t3, $a0, 16
    ctx->r11 = S32(SIGNED(ctx->r4) >> 16);
    // 0x8005DFF0: or          $a0, $t3, $zero
    ctx->r4 = ctx->r11 | 0;
    // 0x8005DFF4: jal         0x8005DE74
    // 0x8005DFF8: or          $a1, $t2, $zero
    ctx->r5 = ctx->r10 | 0;
    func_8005DE74(rdram, ctx);
        goto after_1;
    // 0x8005DFF8: or          $a1, $t2, $zero
    ctx->r5 = ctx->r10 | 0;
    after_1:
L_8005DFFC:
    // 0x8005DFFC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8005E000: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8005E004: jr          $ra
    // 0x8005E008: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    return;
    // 0x8005E008: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
RECOMP_FUNC void func_8005E00C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8005E00C: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8005E010: sw          $s3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r19;
    // 0x8005E014: sw          $s2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r18;
    // 0x8005E018: sll         $s2, $a0, 16
    ctx->r18 = S32(ctx->r4 << 16);
    // 0x8005E01C: sll         $s3, $a1, 16
    ctx->r19 = S32(ctx->r5 << 16);
    // 0x8005E020: sra         $t7, $s3, 16
    ctx->r15 = S32(SIGNED(ctx->r19) >> 16);
    // 0x8005E024: sra         $t6, $s2, 16
    ctx->r14 = S32(SIGNED(ctx->r18) >> 16);
    // 0x8005E028: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x8005E02C: or          $s1, $a2, $zero
    ctx->r17 = ctx->r6 | 0;
    // 0x8005E030: or          $s2, $t6, $zero
    ctx->r18 = ctx->r14 | 0;
    // 0x8005E034: or          $s3, $t7, $zero
    ctx->r19 = ctx->r15 | 0;
    // 0x8005E038: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x8005E03C: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x8005E040: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x8005E044: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
L_8005E048:
    // 0x8005E048: addu        $t1, $s2, $s3
    ctx->r9 = ADD32(ctx->r18, ctx->r19);
    // 0x8005E04C: sll         $s0, $s2, 16
    ctx->r16 = S32(ctx->r18 << 16);
    // 0x8005E050: sll         $a3, $s3, 16
    ctx->r7 = S32(ctx->r19 << 16);
    // 0x8005E054: sra         $t9, $a3, 16
    ctx->r25 = S32(SIGNED(ctx->r7) >> 16);
    // 0x8005E058: sra         $t8, $s0, 16
    ctx->r24 = S32(SIGNED(ctx->r16) >> 16);
    // 0x8005E05C: or          $s0, $t8, $zero
    ctx->r16 = ctx->r24 | 0;
    // 0x8005E060: or          $a3, $t9, $zero
    ctx->r7 = ctx->r25 | 0;
    // 0x8005E064: bgez        $t1, L_8005E074
    if (SIGNED(ctx->r9) >= 0) {
        // 0x8005E068: sra         $t2, $t1, 1
        ctx->r10 = S32(SIGNED(ctx->r9) >> 1);
            goto L_8005E074;
    }
    // 0x8005E068: sra         $t2, $t1, 1
    ctx->r10 = S32(SIGNED(ctx->r9) >> 1);
    // 0x8005E06C: addiu       $at, $t1, 0x1
    ctx->r1 = ADD32(ctx->r9, 0X1);
    // 0x8005E070: sra         $t2, $at, 1
    ctx->r10 = S32(SIGNED(ctx->r1) >> 1);
L_8005E074:
    // 0x8005E074: addu        $t3, $t2, $s1
    ctx->r11 = ADD32(ctx->r10, ctx->r17);
    // 0x8005E078: lbu         $a2, 0x0($t3)
    ctx->r6 = MEM_BU(ctx->r11, 0X0);
    // 0x8005E07C: nop

    // 0x8005E080: addu        $v0, $s0, $s1
    ctx->r2 = ADD32(ctx->r16, ctx->r17);
L_8005E084:
    // 0x8005E084: lbu         $v1, 0x0($v0)
    ctx->r3 = MEM_BU(ctx->r2, 0X0);
    // 0x8005E088: addu        $a0, $a3, $s1
    ctx->r4 = ADD32(ctx->r7, ctx->r17);
    // 0x8005E08C: lbu         $a1, 0x0($a0)
    ctx->r5 = MEM_BU(ctx->r4, 0X0);
    // 0x8005E090: slt         $at, $v1, $a2
    ctx->r1 = SIGNED(ctx->r3) < SIGNED(ctx->r6) ? 1 : 0;
    // 0x8005E094: beq         $at, $zero, L_8005E0C0
    if (ctx->r1 == 0) {
        // 0x8005E098: or          $t0, $a1, $zero
        ctx->r8 = ctx->r5 | 0;
            goto L_8005E0C0;
    }
    // 0x8005E098: or          $t0, $a1, $zero
    ctx->r8 = ctx->r5 | 0;
L_8005E09C:
    // 0x8005E09C: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x8005E0A0: sll         $t4, $s0, 16
    ctx->r12 = S32(ctx->r16 << 16);
    // 0x8005E0A4: sra         $s0, $t4, 16
    ctx->r16 = S32(SIGNED(ctx->r12) >> 16);
    // 0x8005E0A8: addu        $v0, $s0, $s1
    ctx->r2 = ADD32(ctx->r16, ctx->r17);
    // 0x8005E0AC: lbu         $v1, 0x0($v0)
    ctx->r3 = MEM_BU(ctx->r2, 0X0);
    // 0x8005E0B0: nop

    // 0x8005E0B4: slt         $at, $v1, $a2
    ctx->r1 = SIGNED(ctx->r3) < SIGNED(ctx->r6) ? 1 : 0;
    // 0x8005E0B8: bne         $at, $zero, L_8005E09C
    if (ctx->r1 != 0) {
        // 0x8005E0BC: nop
    
            goto L_8005E09C;
    }
    // 0x8005E0BC: nop

L_8005E0C0:
    // 0x8005E0C0: slt         $at, $a2, $t0
    ctx->r1 = SIGNED(ctx->r6) < SIGNED(ctx->r8) ? 1 : 0;
    // 0x8005E0C4: beq         $at, $zero, L_8005E0F4
    if (ctx->r1 == 0) {
        // 0x8005E0C8: slt         $at, $a3, $s0
        ctx->r1 = SIGNED(ctx->r7) < SIGNED(ctx->r16) ? 1 : 0;
            goto L_8005E0F4;
    }
    // 0x8005E0C8: slt         $at, $a3, $s0
    ctx->r1 = SIGNED(ctx->r7) < SIGNED(ctx->r16) ? 1 : 0;
L_8005E0CC:
    // 0x8005E0CC: addiu       $a3, $a3, -0x1
    ctx->r7 = ADD32(ctx->r7, -0X1);
    // 0x8005E0D0: sll         $t6, $a3, 16
    ctx->r14 = S32(ctx->r7 << 16);
    // 0x8005E0D4: sra         $a3, $t6, 16
    ctx->r7 = S32(SIGNED(ctx->r14) >> 16);
    // 0x8005E0D8: addu        $a0, $a3, $s1
    ctx->r4 = ADD32(ctx->r7, ctx->r17);
    // 0x8005E0DC: lbu         $a1, 0x0($a0)
    ctx->r5 = MEM_BU(ctx->r4, 0X0);
    // 0x8005E0E0: nop

    // 0x8005E0E4: slt         $at, $a2, $a1
    ctx->r1 = SIGNED(ctx->r6) < SIGNED(ctx->r5) ? 1 : 0;
    // 0x8005E0E8: bne         $at, $zero, L_8005E0CC
    if (ctx->r1 != 0) {
        // 0x8005E0EC: nop
    
            goto L_8005E0CC;
    }
    // 0x8005E0EC: nop

    // 0x8005E0F0: slt         $at, $a3, $s0
    ctx->r1 = SIGNED(ctx->r7) < SIGNED(ctx->r16) ? 1 : 0;
L_8005E0F4:
    // 0x8005E0F4: bne         $at, $zero, L_8005E120
    if (ctx->r1 != 0) {
        // 0x8005E0F8: slt         $at, $a3, $s0
        ctx->r1 = SIGNED(ctx->r7) < SIGNED(ctx->r16) ? 1 : 0;
            goto L_8005E120;
    }
    // 0x8005E0F8: slt         $at, $a3, $s0
    ctx->r1 = SIGNED(ctx->r7) < SIGNED(ctx->r16) ? 1 : 0;
    // 0x8005E0FC: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x8005E100: addiu       $a3, $a3, -0x1
    ctx->r7 = ADD32(ctx->r7, -0X1);
    // 0x8005E104: sb          $a1, 0x0($v0)
    MEM_B(0X0, ctx->r2) = ctx->r5;
    // 0x8005E108: sll         $t8, $s0, 16
    ctx->r24 = S32(ctx->r16 << 16);
    // 0x8005E10C: sll         $t1, $a3, 16
    ctx->r9 = S32(ctx->r7 << 16);
    // 0x8005E110: sb          $v1, 0x0($a0)
    MEM_B(0X0, ctx->r4) = ctx->r3;
    // 0x8005E114: sra         $s0, $t8, 16
    ctx->r16 = S32(SIGNED(ctx->r24) >> 16);
    // 0x8005E118: sra         $a3, $t1, 16
    ctx->r7 = S32(SIGNED(ctx->r9) >> 16);
    // 0x8005E11C: slt         $at, $a3, $s0
    ctx->r1 = SIGNED(ctx->r7) < SIGNED(ctx->r16) ? 1 : 0;
L_8005E120:
    // 0x8005E120: beq         $at, $zero, L_8005E084
    if (ctx->r1 == 0) {
        // 0x8005E124: addu        $v0, $s0, $s1
        ctx->r2 = ADD32(ctx->r16, ctx->r17);
            goto L_8005E084;
    }
    // 0x8005E124: addu        $v0, $s0, $s1
    ctx->r2 = ADD32(ctx->r16, ctx->r17);
    // 0x8005E128: slt         $at, $s2, $a3
    ctx->r1 = SIGNED(ctx->r18) < SIGNED(ctx->r7) ? 1 : 0;
    // 0x8005E12C: beq         $at, $zero, L_8005E150
    if (ctx->r1 == 0) {
        // 0x8005E130: sll         $a0, $s2, 16
        ctx->r4 = S32(ctx->r18 << 16);
            goto L_8005E150;
    }
    // 0x8005E130: sll         $a0, $s2, 16
    ctx->r4 = S32(ctx->r18 << 16);
    // 0x8005E134: sll         $a1, $a3, 16
    ctx->r5 = S32(ctx->r7 << 16);
    // 0x8005E138: sra         $t4, $a1, 16
    ctx->r12 = S32(SIGNED(ctx->r5) >> 16);
    // 0x8005E13C: sra         $t3, $a0, 16
    ctx->r11 = S32(SIGNED(ctx->r4) >> 16);
    // 0x8005E140: or          $a0, $t3, $zero
    ctx->r4 = ctx->r11 | 0;
    // 0x8005E144: or          $a1, $t4, $zero
    ctx->r5 = ctx->r12 | 0;
    // 0x8005E148: jal         0x8005E00C
    // 0x8005E14C: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    func_8005E00C(rdram, ctx);
        goto after_0;
    // 0x8005E14C: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    after_0:
L_8005E150:
    // 0x8005E150: slt         $at, $s0, $s3
    ctx->r1 = SIGNED(ctx->r16) < SIGNED(ctx->r19) ? 1 : 0;
    // 0x8005E154: beq         $at, $zero, L_8005E170
    if (ctx->r1 == 0) {
        // 0x8005E158: sll         $s2, $s0, 16
        ctx->r18 = S32(ctx->r16 << 16);
            goto L_8005E170;
    }
    // 0x8005E158: sll         $s2, $s0, 16
    ctx->r18 = S32(ctx->r16 << 16);
    // 0x8005E15C: sra         $t5, $s2, 16
    ctx->r13 = S32(SIGNED(ctx->r18) >> 16);
    // 0x8005E160: sll         $t6, $s3, 16
    ctx->r14 = S32(ctx->r19 << 16);
    // 0x8005E164: sra         $s3, $t6, 16
    ctx->r19 = S32(SIGNED(ctx->r14) >> 16);
    // 0x8005E168: b           L_8005E048
    // 0x8005E16C: or          $s2, $t5, $zero
    ctx->r18 = ctx->r13 | 0;
        goto L_8005E048;
    // 0x8005E16C: or          $s2, $t5, $zero
    ctx->r18 = ctx->r13 | 0;
L_8005E170:
    // 0x8005E170: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x8005E174: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x8005E178: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x8005E17C: lw          $s2, 0x1C($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X1C);
    // 0x8005E180: lw          $s3, 0x20($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X20);
    // 0x8005E184: jr          $ra
    // 0x8005E188: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x8005E188: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_8005E18C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8005E18C: addiu       $sp, $sp, -0xF8
    ctx->r29 = ADD32(ctx->r29, -0XF8);
    // 0x8005E190: sw          $fp, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r30;
    // 0x8005E194: sw          $s7, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r23;
    // 0x8005E198: sw          $s6, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r22;
    // 0x8005E19C: sw          $s5, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r21;
    // 0x8005E1A0: sw          $s4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r20;
    // 0x8005E1A4: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x8005E1A8: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x8005E1AC: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x8005E1B0: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x8005E1B4: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8005E1B8: addiu       $s3, $sp, 0xA8
    ctx->r19 = ADD32(ctx->r29, 0XA8);
    // 0x8005E1BC: addiu       $s4, $sp, 0x60
    ctx->r20 = ADD32(ctx->r29, 0X60);
    // 0x8005E1C0: addiu       $s5, $zero, 0x1
    ctx->r21 = ADD32(0, 0X1);
    // 0x8005E1C4: addiu       $s6, $zero, 0xF8
    ctx->r22 = ADD32(0, 0XF8);
    // 0x8005E1C8: addiu       $s7, $sp, 0xD0
    ctx->r23 = ADD32(ctx->r29, 0XD0);
    // 0x8005E1CC: addiu       $fp, $zero, 0x4
    ctx->r30 = ADD32(0, 0X4);
    // 0x8005E1D0: or          $t2, $zero, $zero
    ctx->r10 = 0 | 0;
    // 0x8005E1D4: addiu       $t0, $zero, 0x3
    ctx->r8 = ADD32(0, 0X3);
    // 0x8005E1D8: sll         $t6, $t2, 2
    ctx->r14 = S32(ctx->r10 << 2);
L_8005E1DC:
    // 0x8005E1DC: addu        $t6, $t6, $t2
    ctx->r14 = ADD32(ctx->r14, ctx->r10);
    // 0x8005E1E0: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x8005E1E4: addu        $t6, $t6, $t2
    ctx->r14 = ADD32(ctx->r14, ctx->r10);
    // 0x8005E1E8: sll         $t6, $t6, 3
    ctx->r14 = S32(ctx->r14 << 3);
    // 0x8005E1EC: addu        $t6, $t6, $t2
    ctx->r14 = ADD32(ctx->r14, ctx->r10);
    // 0x8005E1F0: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x8005E1F4: addu        $t6, $t6, $t2
    ctx->r14 = ADD32(ctx->r14, ctx->r10);
    // 0x8005E1F8: lui         $t7, 0x8012
    ctx->r15 = S32(0X8012 << 16);
    // 0x8005E1FC: addiu       $t7, $t7, -0x2CF0
    ctx->r15 = ADD32(ctx->r15, -0X2CF0);
    // 0x8005E200: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x8005E204: addu        $t1, $t6, $t7
    ctx->r9 = ADD32(ctx->r14, ctx->r15);
    // 0x8005E208: lw          $v1, 0x18($t1)
    ctx->r3 = MEM_W(ctx->r9, 0X18);
    // 0x8005E20C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x8005E210: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    // 0x8005E214: or          $s2, $zero, $zero
    ctx->r18 = 0 | 0;
    // 0x8005E218: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
L_8005E21C:
    // 0x8005E21C: lhu         $t8, 0xC($v1)
    ctx->r24 = MEM_HU(ctx->r3, 0XC);
    // 0x8005E220: nop

    // 0x8005E224: beq         $t8, $zero, L_8005E288
    if (ctx->r24 == 0) {
        // 0x8005E228: nop
    
            goto L_8005E288;
    }
    // 0x8005E228: nop

    // 0x8005E22C: lw          $v0, 0xD4($v1)
    ctx->r2 = MEM_W(ctx->r3, 0XD4);
    // 0x8005E230: nop

    // 0x8005E234: lbu         $t9, 0x4($v0)
    ctx->r25 = MEM_BU(ctx->r2, 0X4);
    // 0x8005E238: nop

    // 0x8005E23C: andi        $t3, $t9, 0xFF7F
    ctx->r11 = ctx->r25 & 0XFF7F;
    // 0x8005E240: bne         $s5, $t3, L_8005E288
    if (ctx->r21 != ctx->r11) {
        // 0x8005E244: nop
    
            goto L_8005E288;
    }
    // 0x8005E244: nop

    // 0x8005E248: lbu         $a0, 0x5($v0)
    ctx->r4 = MEM_BU(ctx->r2, 0X5);
    // 0x8005E24C: nop

    // 0x8005E250: beq         $s5, $a0, L_8005E288
    if (ctx->r21 == ctx->r4) {
        // 0x8005E254: nop
    
            goto L_8005E288;
    }
    // 0x8005E254: nop

    // 0x8005E258: beq         $fp, $a0, L_8005E288
    if (ctx->r30 == ctx->r4) {
        // 0x8005E25C: sll         $t4, $a3, 3
        ctx->r12 = S32(ctx->r7 << 3);
            goto L_8005E288;
    }
    // 0x8005E25C: sll         $t4, $a3, 3
    ctx->r12 = S32(ctx->r7 << 3);
    // 0x8005E260: addu        $v0, $s7, $t4
    ctx->r2 = ADD32(ctx->r23, ctx->r12);
    // 0x8005E264: sh          $s0, 0x0($v0)
    MEM_H(0X0, ctx->r2) = ctx->r16;
    // 0x8005E268: lw          $t5, 0xD4($v1)
    ctx->r13 = MEM_W(ctx->r3, 0XD4);
    // 0x8005E26C: addiu       $a3, $a3, 0x1
    ctx->r7 = ADD32(ctx->r7, 0X1);
    // 0x8005E270: lh          $t6, 0x0($t5)
    ctx->r14 = MEM_H(ctx->r13, 0X0);
    // 0x8005E274: sll         $t7, $a3, 16
    ctx->r15 = S32(ctx->r7 << 16);
    // 0x8005E278: mtc1        $t6, $f4
    ctx->f4.u32l = ctx->r14;
    // 0x8005E27C: sra         $a3, $t7, 16
    ctx->r7 = S32(SIGNED(ctx->r15) >> 16);
    // 0x8005E280: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x8005E284: swc1        $f6, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->f6.u32l;
L_8005E288:
    // 0x8005E288: lw          $t9, 0xD4($v1)
    ctx->r25 = MEM_W(ctx->r3, 0XD4);
    // 0x8005E28C: sll         $t3, $s1, 3
    ctx->r11 = S32(ctx->r17 << 3);
    // 0x8005E290: lbu         $v0, 0x4($t9)
    ctx->r2 = MEM_BU(ctx->r25, 0X4);
    // 0x8005E294: nop

    // 0x8005E298: bne         $t0, $v0, L_8005E2CC
    if (ctx->r8 != ctx->r2) {
        // 0x8005E29C: nop
    
            goto L_8005E2CC;
    }
    // 0x8005E29C: nop

    // 0x8005E2A0: addu        $v0, $s3, $t3
    ctx->r2 = ADD32(ctx->r19, ctx->r11);
    // 0x8005E2A4: sh          $s0, 0x0($v0)
    MEM_H(0X0, ctx->r2) = ctx->r16;
    // 0x8005E2A8: lw          $t4, 0xD4($v1)
    ctx->r12 = MEM_W(ctx->r3, 0XD4);
    // 0x8005E2AC: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x8005E2B0: lh          $t5, 0x2($t4)
    ctx->r13 = MEM_H(ctx->r12, 0X2);
    // 0x8005E2B4: sll         $t6, $s1, 16
    ctx->r14 = S32(ctx->r17 << 16);
    // 0x8005E2B8: mtc1        $t5, $f8
    ctx->f8.u32l = ctx->r13;
    // 0x8005E2BC: sra         $s1, $t6, 16
    ctx->r17 = S32(SIGNED(ctx->r14) >> 16);
    // 0x8005E2C0: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x8005E2C4: b           L_8005E2FC
    // 0x8005E2C8: swc1        $f10, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->f10.u32l;
        goto L_8005E2FC;
    // 0x8005E2C8: swc1        $f10, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->f10.u32l;
L_8005E2CC:
    // 0x8005E2CC: beq         $v0, $zero, L_8005E2FC
    if (ctx->r2 == 0) {
        // 0x8005E2D0: sll         $t8, $s2, 3
        ctx->r24 = S32(ctx->r18 << 3);
            goto L_8005E2FC;
    }
    // 0x8005E2D0: sll         $t8, $s2, 3
    ctx->r24 = S32(ctx->r18 << 3);
    // 0x8005E2D4: addu        $v0, $s4, $t8
    ctx->r2 = ADD32(ctx->r20, ctx->r24);
    // 0x8005E2D8: sh          $s0, 0x0($v0)
    MEM_H(0X0, ctx->r2) = ctx->r16;
    // 0x8005E2DC: lw          $t9, 0xD4($v1)
    ctx->r25 = MEM_W(ctx->r3, 0XD4);
    // 0x8005E2E0: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
    // 0x8005E2E4: lh          $t3, 0x2($t9)
    ctx->r11 = MEM_H(ctx->r25, 0X2);
    // 0x8005E2E8: sll         $t4, $s2, 16
    ctx->r12 = S32(ctx->r18 << 16);
    // 0x8005E2EC: mtc1        $t3, $f16
    ctx->f16.u32l = ctx->r11;
    // 0x8005E2F0: sra         $s2, $t4, 16
    ctx->r18 = S32(SIGNED(ctx->r12) >> 16);
    // 0x8005E2F4: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x8005E2F8: swc1        $f18, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->f18.u32l;
L_8005E2FC:
    // 0x8005E2FC: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x8005E300: sll         $t6, $s0, 16
    ctx->r14 = S32(ctx->r16 << 16);
    // 0x8005E304: sra         $s0, $t6, 16
    ctx->r16 = S32(SIGNED(ctx->r14) >> 16);
    // 0x8005E308: slti        $at, $s0, 0xB
    ctx->r1 = SIGNED(ctx->r16) < 0XB ? 1 : 0;
    // 0x8005E30C: bne         $at, $zero, L_8005E21C
    if (ctx->r1 != 0) {
        // 0x8005E310: addiu       $v1, $v1, 0xF8
        ctx->r3 = ADD32(ctx->r3, 0XF8);
            goto L_8005E21C;
    }
    // 0x8005E310: addiu       $v1, $v1, 0xF8
    ctx->r3 = ADD32(ctx->r3, 0XF8);
    // 0x8005E314: beq         $a3, $zero, L_8005E368
    if (ctx->r7 == 0) {
        // 0x8005E318: addiu       $a1, $a3, -0x1
        ctx->r5 = ADD32(ctx->r7, -0X1);
            goto L_8005E368;
    }
    // 0x8005E318: addiu       $a1, $a3, -0x1
    ctx->r5 = ADD32(ctx->r7, -0X1);
    // 0x8005E31C: sll         $t8, $a1, 16
    ctx->r24 = S32(ctx->r5 << 16);
    // 0x8005E320: sra         $a1, $t8, 16
    ctx->r5 = S32(SIGNED(ctx->r24) >> 16);
    // 0x8005E324: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x8005E328: or          $a2, $s7, $zero
    ctx->r6 = ctx->r23 | 0;
    // 0x8005E32C: sw          $t1, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r9;
    // 0x8005E330: jal         0x8005DE74
    // 0x8005E334: sh          $t2, 0x5A($sp)
    MEM_H(0X5A, ctx->r29) = ctx->r10;
    func_8005DE74(rdram, ctx);
        goto after_0;
    // 0x8005E334: sh          $t2, 0x5A($sp)
    MEM_H(0X5A, ctx->r29) = ctx->r10;
    after_0:
    // 0x8005E338: cfc1        $t3, $FpcCsr
    ctx->r11 = get_cop1_cs();
    // 0x8005E33C: lwc1        $f4, 0xD4($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0XD4);
    // 0x8005E340: ori         $at, $t3, 0x3
    ctx->r1 = ctx->r11 | 0X3;
    // 0x8005E344: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x8005E348: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x8005E34C: lw          $t1, 0x4C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X4C);
    // 0x8005E350: cvt.w.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = CVT_W_S(ctx->f4.fl);
    // 0x8005E354: lh          $t2, 0x5A($sp)
    ctx->r10 = MEM_H(ctx->r29, 0X5A);
    // 0x8005E358: mfc1        $t4, $f6
    ctx->r12 = (int32_t)ctx->f6.u32l;
    // 0x8005E35C: ctc1        $t3, $FpcCsr
    set_cop1_cs(ctx->r11);
    // 0x8005E360: b           L_8005E36C
    // 0x8005E364: sh          $t4, 0x8C8($t1)
    MEM_H(0X8C8, ctx->r9) = ctx->r12;
        goto L_8005E36C;
    // 0x8005E364: sh          $t4, 0x8C8($t1)
    MEM_H(0X8C8, ctx->r9) = ctx->r12;
L_8005E368:
    // 0x8005E368: sh          $zero, 0x8C8($t1)
    MEM_H(0X8C8, ctx->r9) = 0;
L_8005E36C:
    // 0x8005E36C: slti        $at, $s1, 0x2
    ctx->r1 = SIGNED(ctx->r17) < 0X2 ? 1 : 0;
    // 0x8005E370: bne         $at, $zero, L_8005E3A0
    if (ctx->r1 != 0) {
        // 0x8005E374: addiu       $a1, $s1, -0x1
        ctx->r5 = ADD32(ctx->r17, -0X1);
            goto L_8005E3A0;
    }
    // 0x8005E374: addiu       $a1, $s1, -0x1
    ctx->r5 = ADD32(ctx->r17, -0X1);
    // 0x8005E378: sll         $t5, $a1, 16
    ctx->r13 = S32(ctx->r5 << 16);
    // 0x8005E37C: sra         $a1, $t5, 16
    ctx->r5 = S32(SIGNED(ctx->r13) >> 16);
    // 0x8005E380: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x8005E384: or          $a2, $s3, $zero
    ctx->r6 = ctx->r19 | 0;
    // 0x8005E388: sw          $t1, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r9;
    // 0x8005E38C: jal         0x8005DE74
    // 0x8005E390: sh          $t2, 0x5A($sp)
    MEM_H(0X5A, ctx->r29) = ctx->r10;
    func_8005DE74(rdram, ctx);
        goto after_1;
    // 0x8005E390: sh          $t2, 0x5A($sp)
    MEM_H(0X5A, ctx->r29) = ctx->r10;
    after_1:
    // 0x8005E394: lw          $t1, 0x4C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X4C);
    // 0x8005E398: lh          $t2, 0x5A($sp)
    ctx->r10 = MEM_H(ctx->r29, 0X5A);
    // 0x8005E39C: nop

L_8005E3A0:
    // 0x8005E3A0: lw          $v1, 0x18($t1)
    ctx->r3 = MEM_W(ctx->r9, 0X18);
    // 0x8005E3A4: blez        $s1, L_8005E3E8
    if (SIGNED(ctx->r17) <= 0) {
        // 0x8005E3A8: or          $s0, $zero, $zero
        ctx->r16 = 0 | 0;
            goto L_8005E3E8;
    }
    // 0x8005E3A8: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x8005E3AC: sll         $t7, $s0, 3
    ctx->r15 = S32(ctx->r16 << 3);
L_8005E3B0:
    // 0x8005E3B0: addu        $t8, $s3, $t7
    ctx->r24 = ADD32(ctx->r19, ctx->r15);
    // 0x8005E3B4: lhu         $t9, 0x0($t8)
    ctx->r25 = MEM_HU(ctx->r24, 0X0);
    // 0x8005E3B8: nop

    // 0x8005E3BC: multu       $t9, $s6
    result = U64(U32(ctx->r25)) * U64(U32(ctx->r22)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8005E3C0: mflo        $t3
    ctx->r11 = lo;
    // 0x8005E3C4: addu        $t4, $v1, $t3
    ctx->r12 = ADD32(ctx->r3, ctx->r11);
    // 0x8005E3C8: sb          $s0, 0x6($t4)
    MEM_B(0X6, ctx->r12) = ctx->r16;
    // 0x8005E3CC: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x8005E3D0: sll         $t5, $s0, 16
    ctx->r13 = S32(ctx->r16 << 16);
    // 0x8005E3D4: sra         $s0, $t5, 16
    ctx->r16 = S32(SIGNED(ctx->r13) >> 16);
    // 0x8005E3D8: slt         $at, $s0, $s1
    ctx->r1 = SIGNED(ctx->r16) < SIGNED(ctx->r17) ? 1 : 0;
    // 0x8005E3DC: bne         $at, $zero, L_8005E3B0
    if (ctx->r1 != 0) {
        // 0x8005E3E0: sll         $t7, $s0, 3
        ctx->r15 = S32(ctx->r16 << 3);
            goto L_8005E3B0;
    }
    // 0x8005E3E0: sll         $t7, $s0, 3
    ctx->r15 = S32(ctx->r16 << 3);
    // 0x8005E3E4: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
L_8005E3E8:
    // 0x8005E3E8: addiu       $a1, $s2, -0x1
    ctx->r5 = ADD32(ctx->r18, -0X1);
    // 0x8005E3EC: sll         $t7, $a1, 16
    ctx->r15 = S32(ctx->r5 << 16);
    // 0x8005E3F0: sra         $a1, $t7, 16
    ctx->r5 = S32(SIGNED(ctx->r15) >> 16);
    // 0x8005E3F4: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x8005E3F8: or          $a2, $s4, $zero
    ctx->r6 = ctx->r20 | 0;
    // 0x8005E3FC: sw          $t1, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r9;
    // 0x8005E400: jal         0x8005DE74
    // 0x8005E404: sh          $t2, 0x5A($sp)
    MEM_H(0X5A, ctx->r29) = ctx->r10;
    func_8005DE74(rdram, ctx);
        goto after_2;
    // 0x8005E404: sh          $t2, 0x5A($sp)
    MEM_H(0X5A, ctx->r29) = ctx->r10;
    after_2:
    // 0x8005E408: lw          $t1, 0x4C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X4C);
    // 0x8005E40C: lh          $t2, 0x5A($sp)
    ctx->r10 = MEM_H(ctx->r29, 0X5A);
    // 0x8005E410: lw          $v1, 0x18($t1)
    ctx->r3 = MEM_W(ctx->r9, 0X18);
    // 0x8005E414: blez        $s2, L_8005E450
    if (SIGNED(ctx->r18) <= 0) {
        // 0x8005E418: addiu       $t0, $zero, 0x3
        ctx->r8 = ADD32(0, 0X3);
            goto L_8005E450;
    }
    // 0x8005E418: addiu       $t0, $zero, 0x3
    ctx->r8 = ADD32(0, 0X3);
L_8005E41C:
    // 0x8005E41C: sll         $t3, $s0, 3
    ctx->r11 = S32(ctx->r16 << 3);
    // 0x8005E420: addu        $t4, $s4, $t3
    ctx->r12 = ADD32(ctx->r20, ctx->r11);
    // 0x8005E424: lhu         $t5, 0x0($t4)
    ctx->r13 = MEM_HU(ctx->r12, 0X0);
    // 0x8005E428: addu        $t9, $s0, $s1
    ctx->r25 = ADD32(ctx->r16, ctx->r17);
    // 0x8005E42C: multu       $t5, $s6
    result = U64(U32(ctx->r13)) * U64(U32(ctx->r22)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8005E430: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x8005E434: sll         $t8, $s0, 16
    ctx->r24 = S32(ctx->r16 << 16);
    // 0x8005E438: sra         $s0, $t8, 16
    ctx->r16 = S32(SIGNED(ctx->r24) >> 16);
    // 0x8005E43C: slt         $at, $s0, $s2
    ctx->r1 = SIGNED(ctx->r16) < SIGNED(ctx->r18) ? 1 : 0;
    // 0x8005E440: mflo        $t6
    ctx->r14 = lo;
    // 0x8005E444: addu        $t7, $v1, $t6
    ctx->r15 = ADD32(ctx->r3, ctx->r14);
    // 0x8005E448: bne         $at, $zero, L_8005E41C
    if (ctx->r1 != 0) {
        // 0x8005E44C: sb          $t9, 0x6($t7)
        MEM_B(0X6, ctx->r15) = ctx->r25;
            goto L_8005E41C;
    }
    // 0x8005E44C: sb          $t9, 0x6($t7)
    MEM_B(0X6, ctx->r15) = ctx->r25;
L_8005E450:
    // 0x8005E450: addiu       $t2, $t2, 0x1
    ctx->r10 = ADD32(ctx->r10, 0X1);
    // 0x8005E454: sll         $t4, $t2, 16
    ctx->r12 = S32(ctx->r10 << 16);
    // 0x8005E458: sra         $t2, $t4, 16
    ctx->r10 = S32(SIGNED(ctx->r12) >> 16);
    // 0x8005E45C: slti        $at, $t2, 0x2
    ctx->r1 = SIGNED(ctx->r10) < 0X2 ? 1 : 0;
    // 0x8005E460: bne         $at, $zero, L_8005E1DC
    if (ctx->r1 != 0) {
        // 0x8005E464: sll         $t6, $t2, 2
        ctx->r14 = S32(ctx->r10 << 2);
            goto L_8005E1DC;
    }
    // 0x8005E464: sll         $t6, $t2, 2
    ctx->r14 = S32(ctx->r10 << 2);
    // 0x8005E468: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    // 0x8005E46C: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8005E470: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x8005E474: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x8005E478: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x8005E47C: lw          $s4, 0x28($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X28);
    // 0x8005E480: lw          $s5, 0x2C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X2C);
    // 0x8005E484: lw          $s6, 0x30($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X30);
    // 0x8005E488: lw          $s7, 0x34($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X34);
    // 0x8005E48C: lw          $fp, 0x38($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X38);
    // 0x8005E490: jr          $ra
    // 0x8005E494: addiu       $sp, $sp, 0xF8
    ctx->r29 = ADD32(ctx->r29, 0XF8);
    return;
    // 0x8005E494: addiu       $sp, $sp, 0xF8
    ctx->r29 = ADD32(ctx->r29, 0XF8);
;}
RECOMP_FUNC void func_8005E498(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8005E498: addiu       $sp, $sp, -0xC8
    ctx->r29 = ADD32(ctx->r29, -0XC8);
    // 0x8005E49C: sw          $s5, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r21;
    // 0x8005E4A0: sw          $s2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r18;
    // 0x8005E4A4: sw          $s4, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r20;
    // 0x8005E4A8: sw          $s3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r19;
    // 0x8005E4AC: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x8005E4B0: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x8005E4B4: lui         $s2, 0x8028
    ctx->r18 = S32(0X8028 << 16);
    // 0x8005E4B8: lui         $s5, 0x8012
    ctx->r21 = S32(0X8012 << 16);
    // 0x8005E4BC: lui         $t1, 0x8012
    ctx->r9 = S32(0X8012 << 16);
    // 0x8005E4C0: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x8005E4C4: addiu       $t1, $t1, -0x2CF0
    ctx->r9 = ADD32(ctx->r9, -0X2CF0);
    // 0x8005E4C8: addiu       $s5, $s5, -0x2CE7
    ctx->r21 = ADD32(ctx->r21, -0X2CE7);
    // 0x8005E4CC: addiu       $s2, $s2, -0x3660
    ctx->r18 = ADD32(ctx->r18, -0X3660);
    // 0x8005E4D0: addiu       $s0, $sp, 0x70
    ctx->r16 = ADD32(ctx->r29, 0X70);
    // 0x8005E4D4: addiu       $s1, $zero, 0x63
    ctx->r17 = ADD32(0, 0X63);
    // 0x8005E4D8: addiu       $s3, $sp, 0xC0
    ctx->r19 = ADD32(ctx->r29, 0XC0);
    // 0x8005E4DC: addiu       $s4, $zero, 0x8
    ctx->r20 = ADD32(0, 0X8);
L_8005E4E0:
    // 0x8005E4E0: lw          $v0, 0x18($t1)
    ctx->r2 = MEM_W(ctx->r9, 0X18);
    // 0x8005E4E4: or          $t2, $t1, $zero
    ctx->r10 = ctx->r9 | 0;
    // 0x8005E4E8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x8005E4EC: addiu       $a0, $sp, 0x70
    ctx->r4 = ADD32(ctx->r29, 0X70);
    // 0x8005E4F0: addiu       $v0, $v0, 0xF8
    ctx->r2 = ADD32(ctx->r2, 0XF8);
L_8005E4F4:
    // 0x8005E4F4: addiu       $a1, $a2, 0x1
    ctx->r5 = ADD32(ctx->r6, 0X1);
    // 0x8005E4F8: sh          $a1, 0x0($a0)
    MEM_H(0X0, ctx->r4) = ctx->r5;
    // 0x8005E4FC: lw          $t6, 0xD8($v0)
    ctx->r14 = MEM_W(ctx->r2, 0XD8);
    // 0x8005E500: or          $a2, $a1, $zero
    ctx->r6 = ctx->r5 | 0;
    // 0x8005E504: lbu         $t7, 0x6($t6)
    ctx->r15 = MEM_BU(ctx->r14, 0X6);
    // 0x8005E508: sltiu       $at, $a1, 0xA
    ctx->r1 = ctx->r5 < 0XA ? 1 : 0;
    // 0x8005E50C: subu        $t8, $s1, $t7
    ctx->r24 = SUB32(ctx->r17, ctx->r15);
    // 0x8005E510: mtc1        $t8, $f4
    ctx->f4.u32l = ctx->r24;
    // 0x8005E514: addiu       $a0, $a0, 0x8
    ctx->r4 = ADD32(ctx->r4, 0X8);
    // 0x8005E518: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x8005E51C: swc1        $f6, -0x4($a0)
    MEM_W(-0X4, ctx->r4) = ctx->f6.u32l;
    // 0x8005E520: lw          $t9, 0xD4($v0)
    ctx->r25 = MEM_W(ctx->r2, 0XD4);
    // 0x8005E524: nop

    // 0x8005E528: lbu         $t6, 0x4($t9)
    ctx->r14 = MEM_BU(ctx->r25, 0X4);
    // 0x8005E52C: nop

    // 0x8005E530: andi        $t7, $t6, 0xFF7F
    ctx->r15 = ctx->r14 & 0XFF7F;
    // 0x8005E534: sll         $t8, $t7, 1
    ctx->r24 = S32(ctx->r15 << 1);
    // 0x8005E538: lw          $t7, 0xD8($v0)
    ctx->r15 = MEM_W(ctx->r2, 0XD8);
    // 0x8005E53C: addu        $t9, $s2, $t8
    ctx->r25 = ADD32(ctx->r18, ctx->r24);
    // 0x8005E540: lhu         $t6, 0x0($t9)
    ctx->r14 = MEM_HU(ctx->r25, 0X0);
    // 0x8005E544: lbu         $t8, 0x18($t7)
    ctx->r24 = MEM_BU(ctx->r15, 0X18);
    // 0x8005E548: nop

    // 0x8005E54C: and         $v1, $t6, $t8
    ctx->r3 = ctx->r14 & ctx->r24;
    // 0x8005E550: sltiu       $t9, $v1, 0x1
    ctx->r25 = ctx->r3 < 0X1 ? 1 : 0;
    // 0x8005E554: andi        $t7, $t9, 0xF
    ctx->r15 = ctx->r25 & 0XF;
    // 0x8005E558: beq         $t7, $zero, L_8005E570
    if (ctx->r15 == 0) {
        // 0x8005E55C: nop
    
            goto L_8005E570;
    }
    // 0x8005E55C: nop

    // 0x8005E560: lhu         $t6, 0x20($v0)
    ctx->r14 = MEM_HU(ctx->r2, 0X20);
    // 0x8005E564: nop

    // 0x8005E568: ori         $t8, $t6, 0x4
    ctx->r24 = ctx->r14 | 0X4;
    // 0x8005E56C: sh          $t8, 0x20($v0)
    MEM_H(0X20, ctx->r2) = ctx->r24;
L_8005E570:
    // 0x8005E570: bne         $at, $zero, L_8005E4F4
    if (ctx->r1 != 0) {
        // 0x8005E574: addiu       $v0, $v0, 0xF8
        ctx->r2 = ADD32(ctx->r2, 0XF8);
            goto L_8005E4F4;
    }
    // 0x8005E574: addiu       $v0, $v0, 0xF8
    ctx->r2 = ADD32(ctx->r2, 0XF8);
    // 0x8005E578: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x8005E57C: addiu       $a1, $zero, 0x9
    ctx->r5 = ADD32(0, 0X9);
    // 0x8005E580: or          $a2, $s0, $zero
    ctx->r6 = ctx->r16 | 0;
    // 0x8005E584: sw          $t1, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r9;
    // 0x8005E588: jal         0x8005DE74
    // 0x8005E58C: sw          $t2, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->r10;
    func_8005DE74(rdram, ctx);
        goto after_0;
    // 0x8005E58C: sw          $t2, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->r10;
    after_0:
    // 0x8005E590: lw          $t1, 0x44($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X44);
    // 0x8005E594: lw          $t2, 0x6C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X6C);
    // 0x8005E598: addiu       $a3, $sp, 0xC8
    ctx->r7 = ADD32(ctx->r29, 0XC8);
    // 0x8005E59C: ori         $t3, $zero, 0xFFFF
    ctx->r11 = 0 | 0XFFFF;
    // 0x8005E5A0: addiu       $t4, $zero, 0xB
    ctx->r12 = ADD32(0, 0XB);
    // 0x8005E5A4: addiu       $ra, $zero, -0x1
    ctx->r31 = ADD32(0, -0X1);
    // 0x8005E5A8: sh          $zero, 0xC0($sp)
    MEM_H(0XC0, ctx->r29) = 0;
    // 0x8005E5AC: addiu       $a0, $sp, 0x70
    ctx->r4 = ADD32(ctx->r29, 0X70);
    // 0x8005E5B0: or          $v0, $s5, $zero
    ctx->r2 = ctx->r21 | 0;
L_8005E5B4:
    // 0x8005E5B4: lhu         $t9, 0x0($a0)
    ctx->r25 = MEM_HU(ctx->r4, 0X0);
    // 0x8005E5B8: addiu       $a0, $a0, 0x8
    ctx->r4 = ADD32(ctx->r4, 0X8);
    // 0x8005E5BC: sltu        $at, $a0, $s3
    ctx->r1 = ctx->r4 < ctx->r19 ? 1 : 0;
    // 0x8005E5C0: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x8005E5C4: bne         $at, $zero, L_8005E5B4
    if (ctx->r1 != 0) {
        // 0x8005E5C8: sb          $t9, 0x87B($v0)
        MEM_B(0X87B, ctx->r2) = ctx->r25;
            goto L_8005E5B4;
    }
    // 0x8005E5C8: sb          $t9, 0x87B($v0)
    MEM_B(0X87B, ctx->r2) = ctx->r25;
    // 0x8005E5CC: sb          $zero, 0x884($t1)
    MEM_B(0X884, ctx->r9) = 0;
    // 0x8005E5D0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x8005E5D4: or          $v0, $t1, $zero
    ctx->r2 = ctx->r9 | 0;
L_8005E5D8:
    // 0x8005E5D8: addiu       $a2, $a2, 0x1
    ctx->r6 = ADD32(ctx->r6, 0X1);
    // 0x8005E5DC: sltiu       $at, $a2, 0x8
    ctx->r1 = ctx->r6 < 0X8 ? 1 : 0;
    // 0x8005E5E0: sb          $ra, 0x885($v0)
    MEM_B(0X885, ctx->r2) = ctx->r31;
    // 0x8005E5E4: bne         $at, $zero, L_8005E5D8
    if (ctx->r1 != 0) {
        // 0x8005E5E8: addiu       $v0, $v0, 0x1
        ctx->r2 = ADD32(ctx->r2, 0X1);
            goto L_8005E5D8;
    }
    // 0x8005E5E8: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8005E5EC: lbu         $t7, 0x0($t1)
    ctx->r15 = MEM_BU(ctx->r9, 0X0);
    // 0x8005E5F0: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x8005E5F4: sll         $t6, $t7, 2
    ctx->r14 = S32(ctx->r15 << 2);
    // 0x8005E5F8: subu        $t6, $t6, $t7
    ctx->r14 = SUB32(ctx->r14, ctx->r15);
    // 0x8005E5FC: sll         $t6, $t6, 1
    ctx->r14 = S32(ctx->r14 << 1);
    // 0x8005E600: addu        $v0, $v0, $t6
    ctx->r2 = ADD32(ctx->r2, ctx->r14);
    // 0x8005E604: lhu         $v0, -0x3330($v0)
    ctx->r2 = MEM_HU(ctx->r2, -0X3330);
    // 0x8005E608: lui         $t5, 0x800B
    ctx->r13 = S32(0X800B << 16);
    // 0x8005E60C: sll         $t8, $v0, 2
    ctx->r24 = S32(ctx->r2 << 2);
    // 0x8005E610: addu        $t5, $t5, $t8
    ctx->r13 = ADD32(ctx->r13, ctx->r24);
    // 0x8005E614: lw          $t5, -0x3228($t5)
    ctx->r13 = MEM_W(ctx->r13, -0X3228);
    // 0x8005E618: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x8005E61C: lbu         $t0, 0x2($t5)
    ctx->r8 = MEM_BU(ctx->r13, 0X2);
    // 0x8005E620: or          $a1, $t1, $zero
    ctx->r5 = ctx->r9 | 0;
    // 0x8005E624: andi        $t9, $t0, 0x7F
    ctx->r25 = ctx->r8 & 0X7F;
    // 0x8005E628: sltiu       $at, $t9, 0xC
    ctx->r1 = ctx->r25 < 0XC ? 1 : 0;
    // 0x8005E62C: beq         $at, $zero, L_8005E6C8
    if (ctx->r1 == 0) {
        // 0x8005E630: or          $t0, $t9, $zero
        ctx->r8 = ctx->r25 | 0;
            goto L_8005E6C8;
    }
    // 0x8005E630: or          $t0, $t9, $zero
    ctx->r8 = ctx->r25 | 0;
L_8005E634:
    // 0x8005E634: addiu       $t5, $t5, 0x3
    ctx->r13 = ADD32(ctx->r13, 0X3);
    // 0x8005E638: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x8005E63C: or          $a0, $t1, $zero
    ctx->r4 = ctx->r9 | 0;
L_8005E640:
    // 0x8005E640: lbu         $t7, 0x0($t1)
    ctx->r15 = MEM_BU(ctx->r9, 0X0);
    // 0x8005E644: lbu         $t6, 0x2E8($a0)
    ctx->r14 = MEM_BU(ctx->r4, 0X2E8);
    // 0x8005E648: nop

    // 0x8005E64C: bne         $t7, $t6, L_8005E6A0
    if (ctx->r15 != ctx->r14) {
        // 0x8005E650: nop
    
            goto L_8005E6A0;
    }
    // 0x8005E650: nop

    // 0x8005E654: lbu         $t8, 0x2E9($a0)
    ctx->r24 = MEM_BU(ctx->r4, 0X2E9);
    // 0x8005E658: nop

    // 0x8005E65C: bne         $t0, $t8, L_8005E6A0
    if (ctx->r8 != ctx->r24) {
        // 0x8005E660: nop
    
            goto L_8005E6A0;
    }
    // 0x8005E660: nop

    // 0x8005E664: lbu         $t9, 0x8AA($t1)
    ctx->r25 = MEM_BU(ctx->r9, 0X8AA);
    // 0x8005E668: addu        $t7, $t1, $a2
    ctx->r15 = ADD32(ctx->r9, ctx->r6);
    // 0x8005E66C: beq         $v1, $t9, L_8005E6A0
    if (ctx->r3 == ctx->r25) {
        // 0x8005E670: addiu       $v0, $sp, 0x70
        ctx->r2 = ADD32(ctx->r29, 0X70);
            goto L_8005E6A0;
    }
    // 0x8005E670: addiu       $v0, $sp, 0x70
    ctx->r2 = ADD32(ctx->r29, 0X70);
    // 0x8005E674: sb          $v1, 0x885($t7)
    MEM_B(0X885, ctx->r15) = ctx->r3;
    // 0x8005E678: addiu       $a2, $a2, 0x1
    ctx->r6 = ADD32(ctx->r6, 0X1);
L_8005E67C:
    // 0x8005E67C: lhu         $t6, 0x0($v0)
    ctx->r14 = MEM_HU(ctx->r2, 0X0);
    // 0x8005E680: nop

    // 0x8005E684: bne         $v1, $t6, L_8005E694
    if (ctx->r3 != ctx->r14) {
        // 0x8005E688: nop
    
            goto L_8005E694;
    }
    // 0x8005E688: nop

    // 0x8005E68C: b           L_8005E6A0
    // 0x8005E690: sh          $t3, 0x0($v0)
    MEM_H(0X0, ctx->r2) = ctx->r11;
        goto L_8005E6A0;
    // 0x8005E690: sh          $t3, 0x0($v0)
    MEM_H(0X0, ctx->r2) = ctx->r11;
L_8005E694:
    // 0x8005E694: addiu       $v0, $v0, 0x8
    ctx->r2 = ADD32(ctx->r2, 0X8);
    // 0x8005E698: bne         $v0, $a3, L_8005E67C
    if (ctx->r2 != ctx->r7) {
        // 0x8005E69C: nop
    
            goto L_8005E67C;
    }
    // 0x8005E69C: nop

L_8005E6A0:
    // 0x8005E6A0: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x8005E6A4: bne         $v1, $t4, L_8005E640
    if (ctx->r3 != ctx->r12) {
        // 0x8005E6A8: addiu       $a0, $a0, 0x2
        ctx->r4 = ADD32(ctx->r4, 0X2);
            goto L_8005E640;
    }
    // 0x8005E6A8: addiu       $a0, $a0, 0x2
    ctx->r4 = ADD32(ctx->r4, 0X2);
    // 0x8005E6AC: lbu         $t0, 0x2($t5)
    ctx->r8 = MEM_BU(ctx->r13, 0X2);
    // 0x8005E6B0: nop

    // 0x8005E6B4: andi        $t8, $t0, 0x7F
    ctx->r24 = ctx->r8 & 0X7F;
    // 0x8005E6B8: sltiu       $at, $t8, 0xC
    ctx->r1 = ctx->r24 < 0XC ? 1 : 0;
    // 0x8005E6BC: bne         $at, $zero, L_8005E634
    if (ctx->r1 != 0) {
        // 0x8005E6C0: or          $t0, $t8, $zero
        ctx->r8 = ctx->r24 | 0;
            goto L_8005E634;
    }
    // 0x8005E6C0: or          $t0, $t8, $zero
    ctx->r8 = ctx->r24 | 0;
    // 0x8005E6C4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
L_8005E6C8:
    // 0x8005E6C8: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
L_8005E6CC:
    // 0x8005E6CC: lb          $t9, 0x885($a1)
    ctx->r25 = MEM_B(ctx->r5, 0X885);
    // 0x8005E6D0: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x8005E6D4: bne         $ra, $t9, L_8005E73C
    if (ctx->r31 != ctx->r25) {
        // 0x8005E6D8: sltiu       $at, $v1, 0x8
        ctx->r1 = ctx->r3 < 0X8 ? 1 : 0;
            goto L_8005E73C;
    }
    // 0x8005E6D8: sltiu       $at, $v1, 0x8
    ctx->r1 = ctx->r3 < 0X8 ? 1 : 0;
    // 0x8005E6DC: sll         $t7, $a2, 3
    ctx->r15 = S32(ctx->r6 << 3);
    // 0x8005E6E0: addu        $a0, $s0, $t7
    ctx->r4 = ADD32(ctx->r16, ctx->r15);
    // 0x8005E6E4: lhu         $v0, 0x0($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X0);
    // 0x8005E6E8: nop

    // 0x8005E6EC: sll         $t6, $v0, 16
    ctx->r14 = S32(ctx->r2 << 16);
    // 0x8005E6F0: sra         $t8, $t6, 16
    ctx->r24 = S32(SIGNED(ctx->r14) >> 16);
    // 0x8005E6F4: bltz        $t8, L_8005E70C
    if (SIGNED(ctx->r24) < 0) {
        // 0x8005E6F8: nop
    
            goto L_8005E70C;
    }
    // 0x8005E6F8: nop

    // 0x8005E6FC: lbu         $t9, 0x8AA($t1)
    ctx->r25 = MEM_BU(ctx->r9, 0X8AA);
    // 0x8005E700: nop

    // 0x8005E704: bne         $t9, $v0, L_8005E734
    if (ctx->r25 != ctx->r2) {
        // 0x8005E708: nop
    
            goto L_8005E734;
    }
    // 0x8005E708: nop

L_8005E70C:
    // 0x8005E70C: lhu         $v0, 0x8($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X8);
    // 0x8005E710: addiu       $a2, $a2, 0x1
    ctx->r6 = ADD32(ctx->r6, 0X1);
    // 0x8005E714: sll         $t7, $v0, 16
    ctx->r15 = S32(ctx->r2 << 16);
    // 0x8005E718: sra         $t6, $t7, 16
    ctx->r14 = S32(SIGNED(ctx->r15) >> 16);
    // 0x8005E71C: bltz        $t6, L_8005E70C
    if (SIGNED(ctx->r14) < 0) {
        // 0x8005E720: addiu       $a0, $a0, 0x8
        ctx->r4 = ADD32(ctx->r4, 0X8);
            goto L_8005E70C;
    }
    // 0x8005E720: addiu       $a0, $a0, 0x8
    ctx->r4 = ADD32(ctx->r4, 0X8);
    // 0x8005E724: lbu         $t8, 0x8AA($t2)
    ctx->r24 = MEM_BU(ctx->r10, 0X8AA);
    // 0x8005E728: nop

    // 0x8005E72C: beq         $t8, $v0, L_8005E70C
    if (ctx->r24 == ctx->r2) {
        // 0x8005E730: nop
    
            goto L_8005E70C;
    }
    // 0x8005E730: nop

L_8005E734:
    // 0x8005E734: sb          $v0, 0x885($a1)
    MEM_B(0X885, ctx->r5) = ctx->r2;
    // 0x8005E738: addiu       $a2, $a2, 0x1
    ctx->r6 = ADD32(ctx->r6, 0X1);
L_8005E73C:
    // 0x8005E73C: bne         $at, $zero, L_8005E6CC
    if (ctx->r1 != 0) {
        // 0x8005E740: addiu       $a1, $a1, 0x1
        ctx->r5 = ADD32(ctx->r5, 0X1);
            goto L_8005E6CC;
    }
    // 0x8005E740: addiu       $a1, $a1, 0x1
    ctx->r5 = ADD32(ctx->r5, 0X1);
    // 0x8005E744: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x8005E748: or          $a1, $t1, $zero
    ctx->r5 = ctx->r9 | 0;
    // 0x8005E74C: or          $v0, $t1, $zero
    ctx->r2 = ctx->r9 | 0;
L_8005E750:
    // 0x8005E750: lb          $a0, 0x885($v0)
    ctx->r4 = MEM_B(ctx->r2, 0X885);
    // 0x8005E754: lbu         $t9, 0x8A9($t1)
    ctx->r25 = MEM_BU(ctx->r9, 0X8A9);
    // 0x8005E758: addiu       $v1, $v1, 0x4
    ctx->r3 = ADD32(ctx->r3, 0X4);
    // 0x8005E75C: bne         $t9, $a0, L_8005E76C
    if (ctx->r25 != ctx->r4) {
        // 0x8005E760: nop
    
            goto L_8005E76C;
    }
    // 0x8005E760: nop

    // 0x8005E764: lb          $a0, 0x886($v0)
    ctx->r4 = MEM_B(ctx->r2, 0X886);
    // 0x8005E768: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
L_8005E76C:
    // 0x8005E76C: sb          $a0, 0x88E($a1)
    MEM_B(0X88E, ctx->r5) = ctx->r4;
    // 0x8005E770: lbu         $t7, 0x8A9($t1)
    ctx->r15 = MEM_BU(ctx->r9, 0X8A9);
    // 0x8005E774: lb          $a0, 0x886($v0)
    ctx->r4 = MEM_B(ctx->r2, 0X886);
    // 0x8005E778: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8005E77C: bne         $t7, $a0, L_8005E78C
    if (ctx->r15 != ctx->r4) {
        // 0x8005E780: nop
    
            goto L_8005E78C;
    }
    // 0x8005E780: nop

    // 0x8005E784: lb          $a0, 0x886($v0)
    ctx->r4 = MEM_B(ctx->r2, 0X886);
    // 0x8005E788: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
L_8005E78C:
    // 0x8005E78C: sb          $a0, 0x88F($a1)
    MEM_B(0X88F, ctx->r5) = ctx->r4;
    // 0x8005E790: lbu         $t6, 0x8A9($t1)
    ctx->r14 = MEM_BU(ctx->r9, 0X8A9);
    // 0x8005E794: lb          $a0, 0x886($v0)
    ctx->r4 = MEM_B(ctx->r2, 0X886);
    // 0x8005E798: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8005E79C: bne         $t6, $a0, L_8005E7AC
    if (ctx->r14 != ctx->r4) {
        // 0x8005E7A0: nop
    
            goto L_8005E7AC;
    }
    // 0x8005E7A0: nop

    // 0x8005E7A4: lb          $a0, 0x886($v0)
    ctx->r4 = MEM_B(ctx->r2, 0X886);
    // 0x8005E7A8: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
L_8005E7AC:
    // 0x8005E7AC: sb          $a0, 0x890($a1)
    MEM_B(0X890, ctx->r5) = ctx->r4;
    // 0x8005E7B0: lbu         $t8, 0x8A9($t1)
    ctx->r24 = MEM_BU(ctx->r9, 0X8A9);
    // 0x8005E7B4: lb          $a0, 0x886($v0)
    ctx->r4 = MEM_B(ctx->r2, 0X886);
    // 0x8005E7B8: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8005E7BC: bne         $t8, $a0, L_8005E7CC
    if (ctx->r24 != ctx->r4) {
        // 0x8005E7C0: nop
    
            goto L_8005E7CC;
    }
    // 0x8005E7C0: nop

    // 0x8005E7C4: lb          $a0, 0x886($v0)
    ctx->r4 = MEM_B(ctx->r2, 0X886);
    // 0x8005E7C8: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
L_8005E7CC:
    // 0x8005E7CC: sb          $a0, 0x891($a1)
    MEM_B(0X891, ctx->r5) = ctx->r4;
    // 0x8005E7D0: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8005E7D4: bne         $v1, $s4, L_8005E750
    if (ctx->r3 != ctx->r20) {
        // 0x8005E7D8: addiu       $a1, $a1, 0x4
        ctx->r5 = ADD32(ctx->r5, 0X4);
            goto L_8005E750;
    }
    // 0x8005E7D8: addiu       $a1, $a1, 0x4
    ctx->r5 = ADD32(ctx->r5, 0X4);
    // 0x8005E7DC: lbu         $t9, 0x8A9($t2)
    ctx->r25 = MEM_BU(ctx->r10, 0X8A9);
    // 0x8005E7E0: lui         $t7, 0x8012
    ctx->r15 = S32(0X8012 << 16);
    // 0x8005E7E4: addiu       $t7, $t7, -0x17BF
    ctx->r15 = ADD32(ctx->r15, -0X17BF);
    // 0x8005E7E8: addiu       $s5, $s5, 0xA94
    ctx->r21 = ADD32(ctx->r21, 0XA94);
    // 0x8005E7EC: addiu       $t1, $t1, 0xA94
    ctx->r9 = ADD32(ctx->r9, 0XA94);
    // 0x8005E7F0: bne         $s5, $t7, L_8005E4E0
    if (ctx->r21 != ctx->r15) {
        // 0x8005E7F4: sb          $t9, 0x896($t2)
        MEM_B(0X896, ctx->r10) = ctx->r25;
            goto L_8005E4E0;
    }
    // 0x8005E7F4: sb          $t9, 0x896($t2)
    MEM_B(0X896, ctx->r10) = ctx->r25;
    // 0x8005E7F8: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x8005E7FC: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x8005E800: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x8005E804: lw          $s2, 0x1C($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X1C);
    // 0x8005E808: lw          $s3, 0x20($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X20);
    // 0x8005E80C: lw          $s4, 0x24($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X24);
    // 0x8005E810: lw          $s5, 0x28($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X28);
    // 0x8005E814: jr          $ra
    // 0x8005E818: addiu       $sp, $sp, 0xC8
    ctx->r29 = ADD32(ctx->r29, 0XC8);
    return;
    // 0x8005E818: addiu       $sp, $sp, 0xC8
    ctx->r29 = ADD32(ctx->r29, 0XC8);
;}
RECOMP_FUNC void func_8005E81C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8005E81C: lwc1        $f4, 0x44($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X44);
    // 0x8005E820: lw          $t6, 0xCC($a0)
    ctx->r14 = MEM_W(ctx->r4, 0XCC);
    // 0x8005E824: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x8005E828: swc1        $f4, 0x4($t6)
    MEM_W(0X4, ctx->r14) = ctx->f4.u32l;
    // 0x8005E82C: lw          $t7, 0xCC($a0)
    ctx->r15 = MEM_W(ctx->r4, 0XCC);
    // 0x8005E830: lwc1        $f6, 0x48($a0)
    ctx->f6.u32l = MEM_W(ctx->r4, 0X48);
    // 0x8005E834: nop

    // 0x8005E838: swc1        $f6, 0x8($t7)
    MEM_W(0X8, ctx->r15) = ctx->f6.u32l;
    // 0x8005E83C: lw          $t8, 0xCC($a0)
    ctx->r24 = MEM_W(ctx->r4, 0XCC);
    // 0x8005E840: lwc1        $f8, 0x4C($a0)
    ctx->f8.u32l = MEM_W(ctx->r4, 0X4C);
    // 0x8005E844: nop

    // 0x8005E848: swc1        $f8, 0xC($t8)
    MEM_W(0XC, ctx->r24) = ctx->f8.u32l;
    // 0x8005E84C: lwc1        $f10, 0x8C($a0)
    ctx->f10.u32l = MEM_W(ctx->r4, 0X8C);
    // 0x8005E850: lwc1        $f18, -0x6734($at)
    ctx->f18.u32l = MEM_W(ctx->r1, -0X6734);
    // 0x8005E854: lwc1        $f19, -0x6738($at)
    ctx->f_odd[(19 - 1) * 2] = MEM_W(ctx->r1, -0X6738);
    // 0x8005E858: cvt.d.s     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.fl); 
    ctx->f16.d = CVT_D_S(ctx->f10.fl);
    // 0x8005E85C: mul.d       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.d); NAN_CHECK(ctx->f18.d); 
    ctx->f4.d = MUL_D(ctx->f16.d, ctx->f18.d);
    // 0x8005E860: lw          $t9, 0xCC($a0)
    ctx->r25 = MEM_W(ctx->r4, 0XCC);
    // 0x8005E864: cvt.s.d     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.d); 
    ctx->f6.fl = CVT_S_D(ctx->f4.d);
    // 0x8005E868: jr          $ra
    // 0x8005E86C: swc1        $f6, 0x14($t9)
    MEM_W(0X14, ctx->r25) = ctx->f6.u32l;
    return;
    // 0x8005E86C: swc1        $f6, 0x14($t9)
    MEM_W(0X14, ctx->r25) = ctx->f6.u32l;
;}
RECOMP_FUNC void func_8005E870(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8005E870: addiu       $sp, $sp, -0xA0
    ctx->r29 = ADD32(ctx->r29, -0XA0);
    // 0x8005E874: sw          $ra, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r31;
    // 0x8005E878: sw          $fp, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r30;
    // 0x8005E87C: sw          $s7, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r23;
    // 0x8005E880: sw          $s6, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r22;
    // 0x8005E884: sw          $s5, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r21;
    // 0x8005E888: sw          $s4, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r20;
    // 0x8005E88C: sw          $s3, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r19;
    // 0x8005E890: sw          $s2, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r18;
    // 0x8005E894: sw          $s1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r17;
    // 0x8005E898: sw          $s0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r16;
    // 0x8005E89C: swc1        $f25, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f_odd[(25 - 1) * 2];
    // 0x8005E8A0: swc1        $f24, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f24.u32l;
    // 0x8005E8A4: swc1        $f23, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f_odd[(23 - 1) * 2];
    // 0x8005E8A8: swc1        $f22, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f22.u32l;
    // 0x8005E8AC: swc1        $f21, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x8005E8B0: jal         0x8005AC60
    // 0x8005E8B4: swc1        $f20, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f20.u32l;
    func_8005AC60(rdram, ctx);
        goto after_0;
    // 0x8005E8B4: swc1        $f20, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f20.u32l;
    after_0:
    // 0x8005E8B8: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x8005E8BC: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x8005E8C0: sh          $t6, 0xB78($at)
    MEM_H(0XB78, ctx->r1) = ctx->r14;
    // 0x8005E8C4: jal         0x80059898
    // 0x8005E8C8: addiu       $a0, $zero, 0x3
    ctx->r4 = ADD32(0, 0X3);
    func_80059898(rdram, ctx);
        goto after_1;
    // 0x8005E8C8: addiu       $a0, $zero, 0x3
    ctx->r4 = ADD32(0, 0X3);
    after_1:
    // 0x8005E8CC: lui         $at, 0x41A0
    ctx->r1 = S32(0X41A0 << 16);
    // 0x8005E8D0: mtc1        $at, $f24
    ctx->f24.u32l = ctx->r1;
    // 0x8005E8D4: lui         $at, 0xC1A0
    ctx->r1 = S32(0XC1A0 << 16);
    // 0x8005E8D8: andi        $t7, $v0, 0x1
    ctx->r15 = ctx->r2 & 0X1;
    // 0x8005E8DC: lui         $s4, 0x8012
    ctx->r20 = S32(0X8012 << 16);
    // 0x8005E8E0: mtc1        $at, $f22
    ctx->f22.u32l = ctx->r1;
    // 0x8005E8E4: mtc1        $zero, $f20
    ctx->f20.u32l = 0;
    // 0x8005E8E8: lw          $s7, 0x8C($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X8C);
    // 0x8005E8EC: or          $s2, $v0, $zero
    ctx->r18 = ctx->r2 | 0;
    // 0x8005E8F0: sw          $t7, 0x84($sp)
    MEM_W(0X84, ctx->r29) = ctx->r15;
    // 0x8005E8F4: addiu       $s5, $zero, -0x1
    ctx->r21 = ADD32(0, -0X1);
    // 0x8005E8F8: addiu       $s4, $s4, -0x2CF0
    ctx->r20 = ADD32(ctx->r20, -0X2CF0);
    // 0x8005E8FC: or          $s6, $zero, $zero
    ctx->r22 = 0 | 0;
    // 0x8005E900: addiu       $fp, $zero, 0xB
    ctx->r30 = ADD32(0, 0XB);
L_8005E904:
    // 0x8005E904: lw          $s0, 0x18($s4)
    ctx->r16 = MEM_W(ctx->r20, 0X18);
    // 0x8005E908: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
L_8005E90C:
    // 0x8005E90C: lhu         $t8, 0xC($s0)
    ctx->r24 = MEM_HU(ctx->r16, 0XC);
    // 0x8005E910: addu        $t9, $s4, $s1
    ctx->r25 = ADD32(ctx->r20, ctx->r17);
    // 0x8005E914: beq         $t8, $zero, L_8005EA04
    if (ctx->r24 == 0) {
        // 0x8005E918: sll         $t2, $s2, 1
        ctx->r10 = S32(ctx->r18 << 1);
            goto L_8005EA04;
    }
    // 0x8005E918: sll         $t2, $s2, 1
    ctx->r10 = S32(ctx->r18 << 1);
    // 0x8005E91C: lbu         $t0, 0x308($t9)
    ctx->r8 = MEM_BU(ctx->r25, 0X308);
    // 0x8005E920: lbu         $v1, 0x0($s4)
    ctx->r3 = MEM_BU(ctx->r20, 0X0);
    // 0x8005E924: lui         $t5, 0x800B
    ctx->r13 = S32(0X800B << 16);
    // 0x8005E928: sll         $t1, $t0, 1
    ctx->r9 = S32(ctx->r8 << 1);
    // 0x8005E92C: addu        $v0, $s4, $t1
    ctx->r2 = ADD32(ctx->r20, ctx->r9);
    // 0x8005E930: addu        $t5, $t5, $v1
    ctx->r13 = ADD32(ctx->r13, ctx->r3);
    // 0x8005E934: lbu         $t5, -0x2AF8($t5)
    ctx->r13 = MEM_BU(ctx->r13, -0X2AF8);
    // 0x8005E938: lbu         $t4, 0x2E9($v0)
    ctx->r12 = MEM_BU(ctx->r2, 0X2E9);
    // 0x8005E93C: lui         $t3, 0x800B
    ctx->r11 = S32(0X800B << 16);
    // 0x8005E940: addiu       $t3, $t3, -0x2AB4
    ctx->r11 = ADD32(ctx->r11, -0X2AB4);
    // 0x8005E944: or          $s7, $s1, $zero
    ctx->r23 = ctx->r17 | 0;
    // 0x8005E948: bne         $t4, $t5, L_8005E964
    if (ctx->r12 != ctx->r13) {
        // 0x8005E94C: addu        $s3, $t2, $t3
        ctx->r19 = ADD32(ctx->r10, ctx->r11);
            goto L_8005E964;
    }
    // 0x8005E94C: addu        $s3, $t2, $t3
    ctx->r19 = ADD32(ctx->r10, ctx->r11);
    // 0x8005E950: lbu         $t6, 0x2E8($v0)
    ctx->r14 = MEM_BU(ctx->r2, 0X2E8);
    // 0x8005E954: nop

    // 0x8005E958: bne         $t6, $v1, L_8005E968
    if (ctx->r14 != ctx->r3) {
        // 0x8005E95C: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_8005E968;
    }
    // 0x8005E95C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8005E960: or          $s5, $s1, $zero
    ctx->r21 = ctx->r17 | 0;
L_8005E964:
    // 0x8005E964: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
L_8005E968:
    // 0x8005E968: jal         0x8005D008
    // 0x8005E96C: or          $a1, $s6, $zero
    ctx->r5 = ctx->r22 | 0;
    func_8005D008(rdram, ctx);
        goto after_2;
    // 0x8005E96C: or          $a1, $s6, $zero
    ctx->r5 = ctx->r22 | 0;
    after_2:
    // 0x8005E970: lh          $t7, 0x2E($s0)
    ctx->r15 = MEM_H(ctx->r16, 0X2E);
    // 0x8005E974: lh          $t8, 0x30($s0)
    ctx->r24 = MEM_H(ctx->r16, 0X30);
    // 0x8005E978: mtc1        $t7, $f4
    ctx->f4.u32l = ctx->r15;
    // 0x8005E97C: mtc1        $t8, $f6
    ctx->f6.u32l = ctx->r24;
    // 0x8005E980: cvt.s.w     $f12, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    ctx->f12.fl = CVT_S_W(ctx->f4.u32l);
    // 0x8005E984: swc1        $f0, 0x8C($s0)
    MEM_W(0X8C, ctx->r16) = ctx->f0.u32l;
    // 0x8005E988: swc1        $f0, 0xE4($s0)
    MEM_W(0XE4, ctx->r16) = ctx->f0.u32l;
    // 0x8005E98C: cvt.s.w     $f14, $f6
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 6);
    ctx->f14.fl = CVT_S_W(ctx->f6.u32l);
    // 0x8005E990: swc1        $f12, 0x4C($s0)
    MEM_W(0X4C, ctx->r16) = ctx->f12.u32l;
    // 0x8005E994: mfc1        $a2, $f20
    ctx->r6 = (int32_t)ctx->f20.u32l;
    // 0x8005E998: swc1        $f14, 0x44($s0)
    MEM_W(0X44, ctx->r16) = ctx->f14.u32l;
    // 0x8005E99C: mfc1        $a3, $f20
    ctx->r7 = (int32_t)ctx->f20.u32l;
    // 0x8005E9A0: addiu       $t9, $sp, 0x7C
    ctx->r25 = ADD32(ctx->r29, 0X7C);
    // 0x8005E9A4: jal         0x80272B1C
    // 0x8005E9A8: sw          $t9, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r25;
    LOOKUP_FUNC(0x80272B1C)(rdram, ctx);
        goto after_3;
    // 0x8005E9A8: sw          $t9, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r25;
    after_3:
    // 0x8005E9AC: lwc1        $f8, 0x7C($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X7C);
    // 0x8005E9B0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8005E9B4: swc1        $f8, 0x8C($s0)
    MEM_W(0X8C, ctx->r16) = ctx->f8.u32l;
    // 0x8005E9B8: lhu         $a1, 0x0($s3)
    ctx->r5 = MEM_HU(ctx->r19, 0X0);
    // 0x8005E9BC: jal         0x80272D3C
    // 0x8005E9C0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    LOOKUP_FUNC(0x80272D3C)(rdram, ctx);
        goto after_4;
    // 0x8005E9C0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_4:
    // 0x8005E9C4: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
    // 0x8005E9C8: sltiu       $at, $s2, 0x4
    ctx->r1 = ctx->r18 < 0X4 ? 1 : 0;
    // 0x8005E9CC: bne         $at, $zero, L_8005E9D8
    if (ctx->r1 != 0) {
        // 0x8005E9D0: nop
    
            goto L_8005E9D8;
    }
    // 0x8005E9D0: nop

    // 0x8005E9D4: or          $s2, $zero, $zero
    ctx->r18 = 0 | 0;
L_8005E9D8:
    // 0x8005E9D8: lwc1        $f0, 0x4C($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X4C);
    // 0x8005E9DC: lwc1        $f2, 0x44($s0)
    ctx->f2.u32l = MEM_W(ctx->r16, 0X44);
    // 0x8005E9E0: mul.s       $f10, $f0, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f10.fl = MUL_S(ctx->f0.fl, ctx->f0.fl);
    // 0x8005E9E4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8005E9E8: mul.s       $f16, $f2, $f2
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f16.fl = MUL_S(ctx->f2.fl, ctx->f2.fl);
    // 0x8005E9EC: add.s       $f12, $f10, $f16
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f12.fl = ctx->f10.fl + ctx->f16.fl;
    // 0x8005E9F0: mfc1        $a1, $f12
    ctx->r5 = (int32_t)ctx->f12.u32l;
    // 0x8005E9F4: jal         0x8005D0F0
    // 0x8005E9F8: nop

    func_8005D0F0(rdram, ctx);
        goto after_5;
    // 0x8005E9F8: nop

    after_5:
    // 0x8005E9FC: jal         0x8005E81C
    // 0x8005EA00: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8005E81C(rdram, ctx);
        goto after_6;
    // 0x8005EA00: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_6:
L_8005EA04:
    // 0x8005EA04: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x8005EA08: bne         $s1, $fp, L_8005E90C
    if (ctx->r17 != ctx->r30) {
        // 0x8005EA0C: addiu       $s0, $s0, 0xF8
        ctx->r16 = ADD32(ctx->r16, 0XF8);
            goto L_8005E90C;
    }
    // 0x8005EA0C: addiu       $s0, $s0, 0xF8
    ctx->r16 = ADD32(ctx->r16, 0XF8);
    // 0x8005EA10: lw          $v0, 0x18($s4)
    ctx->r2 = MEM_W(ctx->r20, 0X18);
    // 0x8005EA14: bgez        $s5, L_8005EA20
    if (SIGNED(ctx->r21) >= 0) {
        // 0x8005EA18: lui         $a1, 0x800B
        ctx->r5 = S32(0X800B << 16);
            goto L_8005EA20;
    }
    // 0x8005EA18: lui         $a1, 0x800B
    ctx->r5 = S32(0X800B << 16);
    // 0x8005EA1C: or          $s5, $s7, $zero
    ctx->r21 = ctx->r23 | 0;
L_8005EA20:
    // 0x8005EA20: sll         $t0, $s5, 5
    ctx->r8 = S32(ctx->r21 << 5);
    // 0x8005EA24: subu        $t0, $t0, $s5
    ctx->r8 = SUB32(ctx->r8, ctx->r21);
    // 0x8005EA28: sll         $t0, $t0, 3
    ctx->r8 = S32(ctx->r8 << 3);
    // 0x8005EA2C: addu        $s0, $v0, $t0
    ctx->r16 = ADD32(ctx->r2, ctx->r8);
    // 0x8005EA30: swc1        $f20, 0x44($s0)
    MEM_W(0X44, ctx->r16) = ctx->f20.u32l;
    // 0x8005EA34: lhu         $t1, 0x8($s4)
    ctx->r9 = MEM_HU(ctx->r20, 0X8);
    // 0x8005EA38: nop

    // 0x8005EA3C: andi        $t2, $t1, 0x1
    ctx->r10 = ctx->r9 & 0X1;
    // 0x8005EA40: beq         $t2, $zero, L_8005EA50
    if (ctx->r10 == 0) {
        // 0x8005EA44: nop
    
            goto L_8005EA50;
    }
    // 0x8005EA44: nop

    // 0x8005EA48: b           L_8005EA54
    // 0x8005EA4C: swc1        $f22, 0x4C($s0)
    MEM_W(0X4C, ctx->r16) = ctx->f22.u32l;
        goto L_8005EA54;
    // 0x8005EA4C: swc1        $f22, 0x4C($s0)
    MEM_W(0X4C, ctx->r16) = ctx->f22.u32l;
L_8005EA50:
    // 0x8005EA50: swc1        $f24, 0x4C($s0)
    MEM_W(0X4C, ctx->r16) = ctx->f24.u32l;
L_8005EA54:
    // 0x8005EA54: lw          $t3, 0x84($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X84);
    // 0x8005EA58: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8005EA5C: sll         $t4, $t3, 1
    ctx->r12 = S32(ctx->r11 << 1);
    // 0x8005EA60: addu        $a1, $a1, $t4
    ctx->r5 = ADD32(ctx->r5, ctx->r12);
    // 0x8005EA64: lhu         $a1, -0x2AB4($a1)
    ctx->r5 = MEM_HU(ctx->r5, -0X2AB4);
    // 0x8005EA68: jal         0x80272D3C
    // 0x8005EA6C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    LOOKUP_FUNC(0x80272D3C)(rdram, ctx);
        goto after_7;
    // 0x8005EA6C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_7:
    // 0x8005EA70: lw          $t5, 0x84($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X84);
    // 0x8005EA74: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8005EA78: xori        $t6, $t5, 0x1
    ctx->r14 = ctx->r13 ^ 0X1;
    // 0x8005EA7C: sw          $t6, 0x84($sp)
    MEM_W(0X84, ctx->r29) = ctx->r14;
    // 0x8005EA80: lwc1        $f18, 0xE4($s0)
    ctx->f18.u32l = MEM_W(ctx->r16, 0XE4);
    // 0x8005EA84: jal         0x8005E81C
    // 0x8005EA88: swc1        $f18, 0x8C($s0)
    MEM_W(0X8C, ctx->r16) = ctx->f18.u32l;
    func_8005E81C(rdram, ctx);
        goto after_8;
    // 0x8005EA88: swc1        $f18, 0x8C($s0)
    MEM_W(0X8C, ctx->r16) = ctx->f18.u32l;
    after_8:
    // 0x8005EA8C: addiu       $s6, $s6, 0x1
    ctx->r22 = ADD32(ctx->r22, 0X1);
    // 0x8005EA90: slti        $at, $s6, 0x2
    ctx->r1 = SIGNED(ctx->r22) < 0X2 ? 1 : 0;
    // 0x8005EA94: bne         $at, $zero, L_8005E904
    if (ctx->r1 != 0) {
        // 0x8005EA98: addiu       $s4, $s4, 0xA94
        ctx->r20 = ADD32(ctx->r20, 0XA94);
            goto L_8005E904;
    }
    // 0x8005EA98: addiu       $s4, $s4, 0xA94
    ctx->r20 = ADD32(ctx->r20, 0XA94);
    // 0x8005EA9C: lui         $at, 0x8010
    ctx->r1 = S32(0X8010 << 16);
    // 0x8005EAA0: lui         $v0, 0x8010
    ctx->r2 = S32(0X8010 << 16);
    // 0x8005EAA4: sw          $s7, 0x8C($sp)
    MEM_W(0X8C, ctx->r29) = ctx->r23;
    // 0x8005EAA8: addiu       $v0, $v0, 0x6524
    ctx->r2 = ADD32(ctx->r2, 0X6524);
    // 0x8005EAAC: sh          $zero, 0x64F0($at)
    MEM_H(0X64F0, ctx->r1) = 0;
    // 0x8005EAB0: sh          $zero, 0x9C($v0)
    MEM_H(0X9C, ctx->r2) = 0;
    // 0x8005EAB4: sh          $zero, 0x68($v0)
    MEM_H(0X68, ctx->r2) = 0;
    // 0x8005EAB8: sh          $zero, 0x34($v0)
    MEM_H(0X34, ctx->r2) = 0;
    // 0x8005EABC: sh          $zero, 0x0($v0)
    MEM_H(0X0, ctx->r2) = 0;
    // 0x8005EAC0: lw          $ra, 0x5C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X5C);
    // 0x8005EAC4: lui         $at, 0x8010
    ctx->r1 = S32(0X8010 << 16);
    // 0x8005EAC8: lw          $fp, 0x58($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X58);
    // 0x8005EACC: lw          $s7, 0x54($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X54);
    // 0x8005EAD0: lw          $s6, 0x50($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X50);
    // 0x8005EAD4: lw          $s5, 0x4C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X4C);
    // 0x8005EAD8: lw          $s4, 0x48($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X48);
    // 0x8005EADC: lw          $s3, 0x44($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X44);
    // 0x8005EAE0: lw          $s2, 0x40($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X40);
    // 0x8005EAE4: lw          $s1, 0x3C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X3C);
    // 0x8005EAE8: lw          $s0, 0x38($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X38);
    // 0x8005EAEC: lwc1        $f24, 0x34($sp)
    ctx->f24.u32l = MEM_W(ctx->r29, 0X34);
    // 0x8005EAF0: lwc1        $f25, 0x30($sp)
    ctx->f_odd[(25 - 1) * 2] = MEM_W(ctx->r29, 0X30);
    // 0x8005EAF4: lwc1        $f22, 0x2C($sp)
    ctx->f22.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x8005EAF8: lwc1        $f23, 0x28($sp)
    ctx->f_odd[(23 - 1) * 2] = MEM_W(ctx->r29, 0X28);
    // 0x8005EAFC: lwc1        $f20, 0x24($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X24);
    // 0x8005EB00: lwc1        $f21, 0x20($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X20);
    // 0x8005EB04: addiu       $v0, $v0, 0x9C
    ctx->r2 = ADD32(ctx->r2, 0X9C);
    // 0x8005EB08: sh          $zero, 0x65F4($at)
    MEM_H(0X65F4, ctx->r1) = 0;
    // 0x8005EB0C: jr          $ra
    // 0x8005EB10: addiu       $sp, $sp, 0xA0
    ctx->r29 = ADD32(ctx->r29, 0XA0);
    return;
    // 0x8005EB10: addiu       $sp, $sp, 0xA0
    ctx->r29 = ADD32(ctx->r29, 0XA0);
;}
RECOMP_FUNC void func_8005EB14(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8005EB14: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x8005EB18: sh          $zero, -0xA2C($at)
    MEM_H(-0XA2C, ctx->r1) = 0;
    // 0x8005EB1C: lui         $t6, 0x8012
    ctx->r14 = S32(0X8012 << 16);
    // 0x8005EB20: lw          $t6, -0x96C($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X96C);
    // 0x8005EB24: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x8005EB28: addiu       $v0, $v0, -0x940
    ctx->r2 = ADD32(ctx->r2, -0X940);
    // 0x8005EB2C: sh          $zero, 0x0($t6)
    MEM_H(0X0, ctx->r14) = 0;
    // 0x8005EB30: lw          $t7, 0xCC($v0)
    ctx->r15 = MEM_W(ctx->r2, 0XCC);
    // 0x8005EB34: sh          $zero, 0xC($v0)
    MEM_H(0XC, ctx->r2) = 0;
    // 0x8005EB38: sh          $zero, 0x0($t7)
    MEM_H(0X0, ctx->r15) = 0;
    // 0x8005EB3C: lw          $t8, 0x1C4($v0)
    ctx->r24 = MEM_W(ctx->r2, 0X1C4);
    // 0x8005EB40: sh          $zero, 0x104($v0)
    MEM_H(0X104, ctx->r2) = 0;
    // 0x8005EB44: addiu       $v0, $v0, 0x1F0
    ctx->r2 = ADD32(ctx->r2, 0X1F0);
    // 0x8005EB48: addiu       $v1, $zero, 0x3
    ctx->r3 = ADD32(0, 0X3);
    // 0x8005EB4C: addiu       $a0, $zero, 0xB
    ctx->r4 = ADD32(0, 0XB);
    // 0x8005EB50: sh          $zero, 0x0($t8)
    MEM_H(0X0, ctx->r24) = 0;
L_8005EB54:
    // 0x8005EB54: lw          $t9, 0xCC($v0)
    ctx->r25 = MEM_W(ctx->r2, 0XCC);
    // 0x8005EB58: sh          $zero, 0xC($v0)
    MEM_H(0XC, ctx->r2) = 0;
    // 0x8005EB5C: sh          $zero, 0x0($t9)
    MEM_H(0X0, ctx->r25) = 0;
    // 0x8005EB60: lw          $t0, 0x1C4($v0)
    ctx->r8 = MEM_W(ctx->r2, 0X1C4);
    // 0x8005EB64: sh          $zero, 0x104($v0)
    MEM_H(0X104, ctx->r2) = 0;
    // 0x8005EB68: sh          $zero, 0x0($t0)
    MEM_H(0X0, ctx->r8) = 0;
    // 0x8005EB6C: lw          $t1, 0x2BC($v0)
    ctx->r9 = MEM_W(ctx->r2, 0X2BC);
    // 0x8005EB70: sh          $zero, 0x1FC($v0)
    MEM_H(0X1FC, ctx->r2) = 0;
    // 0x8005EB74: sh          $zero, 0x0($t1)
    MEM_H(0X0, ctx->r9) = 0;
    // 0x8005EB78: lw          $t2, 0x3B4($v0)
    ctx->r10 = MEM_W(ctx->r2, 0X3B4);
    // 0x8005EB7C: sh          $zero, 0x2F4($v0)
    MEM_H(0X2F4, ctx->r2) = 0;
    // 0x8005EB80: addiu       $v1, $v1, 0x4
    ctx->r3 = ADD32(ctx->r3, 0X4);
    // 0x8005EB84: addiu       $v0, $v0, 0x3E0
    ctx->r2 = ADD32(ctx->r2, 0X3E0);
    // 0x8005EB88: bne         $v1, $a0, L_8005EB54
    if (ctx->r3 != ctx->r4) {
        // 0x8005EB8C: sh          $zero, 0x0($t2)
        MEM_H(0X0, ctx->r10) = 0;
            goto L_8005EB54;
    }
    // 0x8005EB8C: sh          $zero, 0x0($t2)
    MEM_H(0X0, ctx->r10) = 0;
    // 0x8005EB90: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x8005EB94: addiu       $v0, $v0, 0x358
    ctx->r2 = ADD32(ctx->r2, 0X358);
    // 0x8005EB98: lw          $t3, 0x19C($v0)
    ctx->r11 = MEM_W(ctx->r2, 0X19C);
    // 0x8005EB9C: sh          $zero, 0x160($v0)
    MEM_H(0X160, ctx->r2) = 0;
    // 0x8005EBA0: jr          $ra
    // 0x8005EBA4: sh          $zero, 0x0($t3)
    MEM_H(0X0, ctx->r11) = 0;
    return;
    // 0x8005EBA4: sh          $zero, 0x0($t3)
    MEM_H(0X0, ctx->r11) = 0;
;}
RECOMP_FUNC void func_8005EBA8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8005EBA8: lui         $v1, 0x8009
    ctx->r3 = S32(0X8009 << 16);
    // 0x8005EBAC: addiu       $v1, $v1, 0x3B20
    ctx->r3 = ADD32(ctx->r3, 0X3B20);
    // 0x8005EBB0: lw          $t0, 0x0($v1)
    ctx->r8 = MEM_W(ctx->r3, 0X0);
    // 0x8005EBB4: sll         $t6, $a0, 16
    ctx->r14 = S32(ctx->r4 << 16);
    // 0x8005EBB8: sra         $t7, $t6, 16
    ctx->r15 = S32(SIGNED(ctx->r14) >> 16);
    // 0x8005EBBC: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x8005EBC0: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    // 0x8005EBC4: sll         $t8, $a1, 16
    ctx->r24 = S32(ctx->r5 << 16);
    // 0x8005EBC8: sra         $a1, $t8, 16
    ctx->r5 = S32(SIGNED(ctx->r24) >> 16);
    // 0x8005EBCC: blez        $t7, L_8005EBF0
    if (SIGNED(ctx->r15) <= 0) {
        // 0x8005EBD0: sh          $zero, 0xCE($t0)
        MEM_H(0XCE, ctx->r8) = 0;
            goto L_8005EBF0;
    }
    // 0x8005EBD0: sh          $zero, 0xCE($t0)
    MEM_H(0XCE, ctx->r8) = 0;
    // 0x8005EBD4: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x8005EBD8: nop

    // 0x8005EBDC: lhu         $t1, 0xCE($v0)
    ctx->r9 = MEM_HU(ctx->r2, 0XCE);
    // 0x8005EBE0: nop

    // 0x8005EBE4: ori         $t2, $t1, 0x1
    ctx->r10 = ctx->r9 | 0X1;
    // 0x8005EBE8: b           L_8005EC08
    // 0x8005EBEC: sh          $t2, 0xCE($v0)
    MEM_H(0XCE, ctx->r2) = ctx->r10;
        goto L_8005EC08;
    // 0x8005EBEC: sh          $t2, 0xCE($v0)
    MEM_H(0XCE, ctx->r2) = ctx->r10;
L_8005EBF0:
    // 0x8005EBF0: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x8005EBF4: nop

    // 0x8005EBF8: lhu         $t3, 0xCE($v0)
    ctx->r11 = MEM_HU(ctx->r2, 0XCE);
    // 0x8005EBFC: nop

    // 0x8005EC00: ori         $t4, $t3, 0x2
    ctx->r12 = ctx->r11 | 0X2;
    // 0x8005EC04: sh          $t4, 0xCE($v0)
    MEM_H(0XCE, ctx->r2) = ctx->r12;
L_8005EC08:
    // 0x8005EC08: blez        $a1, L_8005EC2C
    if (SIGNED(ctx->r5) <= 0) {
        // 0x8005EC0C: nop
    
            goto L_8005EC2C;
    }
    // 0x8005EC0C: nop

    // 0x8005EC10: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x8005EC14: nop

    // 0x8005EC18: lhu         $t5, 0xCE($v0)
    ctx->r13 = MEM_HU(ctx->r2, 0XCE);
    // 0x8005EC1C: nop

    // 0x8005EC20: ori         $t6, $t5, 0x8
    ctx->r14 = ctx->r13 | 0X8;
    // 0x8005EC24: b           L_8005EC44
    // 0x8005EC28: sh          $t6, 0xCE($v0)
    MEM_H(0XCE, ctx->r2) = ctx->r14;
        goto L_8005EC44;
    // 0x8005EC28: sh          $t6, 0xCE($v0)
    MEM_H(0XCE, ctx->r2) = ctx->r14;
L_8005EC2C:
    // 0x8005EC2C: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x8005EC30: nop

    // 0x8005EC34: lhu         $t7, 0xCE($v0)
    ctx->r15 = MEM_HU(ctx->r2, 0XCE);
    // 0x8005EC38: nop

    // 0x8005EC3C: ori         $t8, $t7, 0x4
    ctx->r24 = ctx->r15 | 0X4;
    // 0x8005EC40: sh          $t8, 0xCE($v0)
    MEM_H(0XCE, ctx->r2) = ctx->r24;
L_8005EC44:
    // 0x8005EC44: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x8005EC48: nop

    // 0x8005EC4C: lhu         $t9, 0xCE($v0)
    ctx->r25 = MEM_HU(ctx->r2, 0XCE);
    // 0x8005EC50: nop

    // 0x8005EC54: sh          $t9, 0xD0($v0)
    MEM_H(0XD0, ctx->r2) = ctx->r25;
    // 0x8005EC58: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x8005EC5C: nop

    // 0x8005EC60: lhu         $t0, 0xCE($v0)
    ctx->r8 = MEM_HU(ctx->r2, 0XCE);
    // 0x8005EC64: jr          $ra
    // 0x8005EC68: sh          $t0, 0xD2($v0)
    MEM_H(0XD2, ctx->r2) = ctx->r8;
    return;
    // 0x8005EC68: sh          $t0, 0xD2($v0)
    MEM_H(0XD2, ctx->r2) = ctx->r8;
;}
RECOMP_FUNC void func_8005EC6C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8005EC6C: lui         $a3, 0x8012
    ctx->r7 = S32(0X8012 << 16);
    // 0x8005EC70: addiu       $a3, $a3, 0xB78
    ctx->r7 = ADD32(ctx->r7, 0XB78);
    // 0x8005EC74: addiu       $t7, $zero, 0x4
    ctx->r15 = ADD32(0, 0X4);
    // 0x8005EC78: sh          $t7, 0x0($a3)
    MEM_H(0X0, ctx->r7) = ctx->r15;
    // 0x8005EC7C: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x8005EC80: sh          $t7, 0xB7A($at)
    MEM_H(0XB7A, ctx->r1) = ctx->r15;
    // 0x8005EC84: lui         $t0, 0x801B
    ctx->r8 = S32(0X801B << 16);
    // 0x8005EC88: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x8005EC8C: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x8005EC90: addiu       $t0, $t0, 0x3696
    ctx->r8 = ADD32(ctx->r8, 0X3696);
    // 0x8005EC94: sh          $t8, 0xB4A($at)
    MEM_H(0XB4A, ctx->r1) = ctx->r24;
    // 0x8005EC98: lhu         $v1, 0x0($t0)
    ctx->r3 = MEM_HU(ctx->r8, 0X0);
    // 0x8005EC9C: lui         $t2, 0x800B
    ctx->r10 = S32(0X800B << 16);
    // 0x8005ECA0: andi        $a1, $v1, 0x3
    ctx->r5 = ctx->r3 & 0X3;
    // 0x8005ECA4: lui         $a2, 0x8009
    ctx->r6 = S32(0X8009 << 16);
    // 0x8005ECA8: sll         $t1, $a1, 2
    ctx->r9 = S32(ctx->r5 << 2);
    // 0x8005ECAC: addiu       $t2, $t2, -0x2AA8
    ctx->r10 = ADD32(ctx->r10, -0X2AA8);
    // 0x8005ECB0: addiu       $a2, $a2, 0x3B20
    ctx->r6 = ADD32(ctx->r6, 0X3B20);
    // 0x8005ECB4: addu        $a0, $t1, $t2
    ctx->r4 = ADD32(ctx->r9, ctx->r10);
    // 0x8005ECB8: lh          $t3, 0x0($a0)
    ctx->r11 = MEM_H(ctx->r4, 0X0);
    // 0x8005ECBC: lw          $t4, 0x0($a2)
    ctx->r12 = MEM_W(ctx->r6, 0X0);
    // 0x8005ECC0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8005ECC4: addiu       $t9, $v1, 0x1
    ctx->r25 = ADD32(ctx->r3, 0X1);
    // 0x8005ECC8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8005ECCC: sh          $t9, 0x0($t0)
    MEM_H(0X0, ctx->r8) = ctx->r25;
    // 0x8005ECD0: sh          $t3, 0xE8($t4)
    MEM_H(0XE8, ctx->r12) = ctx->r11;
    // 0x8005ECD4: lw          $t6, 0x0($a2)
    ctx->r14 = MEM_W(ctx->r6, 0X0);
    // 0x8005ECD8: lh          $t5, 0x2($a0)
    ctx->r13 = MEM_H(ctx->r4, 0X2);
    // 0x8005ECDC: lui         $v1, 0x8012
    ctx->r3 = S32(0X8012 << 16);
    // 0x8005ECE0: sh          $t5, 0xEA($t6)
    MEM_H(0XEA, ctx->r14) = ctx->r13;
    // 0x8005ECE4: lw          $v0, 0x0($a2)
    ctx->r2 = MEM_W(ctx->r6, 0X0);
    // 0x8005ECE8: addiu       $v1, $v1, -0x2CF0
    ctx->r3 = ADD32(ctx->r3, -0X2CF0);
    // 0x8005ECEC: lh          $t7, 0xE8($v0)
    ctx->r15 = MEM_H(ctx->r2, 0XE8);
    // 0x8005ECF0: nop

    // 0x8005ECF4: sh          $t7, 0xD8($v0)
    MEM_H(0XD8, ctx->r2) = ctx->r15;
    // 0x8005ECF8: lw          $v0, 0x0($a2)
    ctx->r2 = MEM_W(ctx->r6, 0X0);
    // 0x8005ECFC: nop

    // 0x8005ED00: lh          $t8, 0xEA($v0)
    ctx->r24 = MEM_H(ctx->r2, 0XEA);
    // 0x8005ED04: nop

    // 0x8005ED08: sh          $t8, 0xDA($v0)
    MEM_H(0XDA, ctx->r2) = ctx->r24;
    // 0x8005ED0C: lw          $v0, 0x0($a2)
    ctx->r2 = MEM_W(ctx->r6, 0X0);
    // 0x8005ED10: nop

    // 0x8005ED14: lh          $t9, 0xE8($v0)
    ctx->r25 = MEM_H(ctx->r2, 0XE8);
    // 0x8005ED18: nop

    // 0x8005ED1C: blez        $t9, L_8005ED48
    if (SIGNED(ctx->r25) <= 0) {
        // 0x8005ED20: nop
    
            goto L_8005ED48;
    }
    // 0x8005ED20: nop

    // 0x8005ED24: lui         $v1, 0x8012
    ctx->r3 = S32(0X8012 << 16);
    // 0x8005ED28: addiu       $v1, $v1, -0x2CF0
    ctx->r3 = ADD32(ctx->r3, -0X2CF0);
    // 0x8005ED2C: lhu         $t1, 0x8($v1)
    ctx->r9 = MEM_HU(ctx->r3, 0X8);
    // 0x8005ED30: lhu         $t3, 0xA9C($v1)
    ctx->r11 = MEM_HU(ctx->r3, 0XA9C);
    // 0x8005ED34: ori         $t2, $t1, 0x1
    ctx->r10 = ctx->r9 | 0X1;
    // 0x8005ED38: andi        $t4, $t3, 0xFFFE
    ctx->r12 = ctx->r11 & 0XFFFE;
    // 0x8005ED3C: sh          $t2, 0x8($v1)
    MEM_H(0X8, ctx->r3) = ctx->r10;
    // 0x8005ED40: b           L_8005ED60
    // 0x8005ED44: sh          $t4, 0xA9C($v1)
    MEM_H(0XA9C, ctx->r3) = ctx->r12;
        goto L_8005ED60;
    // 0x8005ED44: sh          $t4, 0xA9C($v1)
    MEM_H(0XA9C, ctx->r3) = ctx->r12;
L_8005ED48:
    // 0x8005ED48: lhu         $t5, 0x8($v1)
    ctx->r13 = MEM_HU(ctx->r3, 0X8);
    // 0x8005ED4C: lhu         $t7, 0xA9C($v1)
    ctx->r15 = MEM_HU(ctx->r3, 0XA9C);
    // 0x8005ED50: andi        $t6, $t5, 0xFFFE
    ctx->r14 = ctx->r13 & 0XFFFE;
    // 0x8005ED54: ori         $t8, $t7, 0x1
    ctx->r24 = ctx->r15 | 0X1;
    // 0x8005ED58: sh          $t6, 0x8($v1)
    MEM_H(0X8, ctx->r3) = ctx->r14;
    // 0x8005ED5C: sh          $t8, 0xA9C($v1)
    MEM_H(0XA9C, ctx->r3) = ctx->r24;
L_8005ED60:
    // 0x8005ED60: lh          $a0, 0xE8($v0)
    ctx->r4 = MEM_H(ctx->r2, 0XE8);
    // 0x8005ED64: lh          $a1, 0xEA($v0)
    ctx->r5 = MEM_H(ctx->r2, 0XEA);
    // 0x8005ED68: jal         0x8005EBA8
    // 0x8005ED6C: nop

    func_8005EBA8(rdram, ctx);
        goto after_0;
    // 0x8005ED6C: nop

    after_0:
    // 0x8005ED70: lui         $a2, 0x8009
    ctx->r6 = S32(0X8009 << 16);
    // 0x8005ED74: addiu       $a2, $a2, 0x3B20
    ctx->r6 = ADD32(ctx->r6, 0X3B20);
    // 0x8005ED78: lw          $t1, 0x0($a2)
    ctx->r9 = MEM_W(ctx->r6, 0X0);
    // 0x8005ED7C: lui         $t9, 0x8012
    ctx->r25 = S32(0X8012 << 16);
    // 0x8005ED80: addiu       $t9, $t9, -0xA38
    ctx->r25 = ADD32(ctx->r25, -0XA38);
    // 0x8005ED84: jal         0x80051268
    // 0x8005ED88: sw          $t9, 0x8C($t1)
    MEM_W(0X8C, ctx->r9) = ctx->r25;
    func_80051268(rdram, ctx);
        goto after_1;
    // 0x8005ED88: sw          $t9, 0x8C($t1)
    MEM_W(0X8C, ctx->r9) = ctx->r25;
    after_1:
    // 0x8005ED8C: lui         $a2, 0x8009
    ctx->r6 = S32(0X8009 << 16);
    // 0x8005ED90: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x8005ED94: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x8005ED98: addiu       $a2, $a2, 0x3B20
    ctx->r6 = ADD32(ctx->r6, 0X3B20);
    // 0x8005ED9C: sh          $t2, 0xB4C($at)
    MEM_H(0XB4C, ctx->r1) = ctx->r10;
    // 0x8005EDA0: lw          $v0, 0x0($a2)
    ctx->r2 = MEM_W(ctx->r6, 0X0);
    // 0x8005EDA4: nop

    // 0x8005EDA8: lw          $t3, 0x8C($v0)
    ctx->r11 = MEM_W(ctx->r2, 0X8C);
    // 0x8005EDAC: nop

    // 0x8005EDB0: lw          $t4, 0xC8($t3)
    ctx->r12 = MEM_W(ctx->r11, 0XC8);
    // 0x8005EDB4: nop

    // 0x8005EDB8: sw          $t4, 0xB4($v0)
    MEM_W(0XB4, ctx->r2) = ctx->r12;
    // 0x8005EDBC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8005EDC0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8005EDC4: jr          $ra
    // 0x8005EDC8: nop

    return;
    // 0x8005EDC8: nop

;}
RECOMP_FUNC void func_8005EDCC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8005EDCC: lui         $a2, 0x8012
    ctx->r6 = S32(0X8012 << 16);
    // 0x8005EDD0: addiu       $a2, $a2, 0xB78
    ctx->r6 = ADD32(ctx->r6, 0XB78);
    // 0x8005EDD4: addiu       $t6, $zero, 0x6
    ctx->r14 = ADD32(0, 0X6);
    // 0x8005EDD8: sh          $t6, 0x0($a2)
    MEM_H(0X0, ctx->r6) = ctx->r14;
    // 0x8005EDDC: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x8005EDE0: sh          $t6, 0xB7A($at)
    MEM_H(0XB7A, ctx->r1) = ctx->r14;
    // 0x8005EDE4: lui         $t0, 0x801B
    ctx->r8 = S32(0X801B << 16);
    // 0x8005EDE8: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x8005EDEC: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x8005EDF0: addiu       $t0, $t0, 0x3696
    ctx->r8 = ADD32(ctx->r8, 0X3696);
    // 0x8005EDF4: sh          $t7, 0xB4A($at)
    MEM_H(0XB4A, ctx->r1) = ctx->r15;
    // 0x8005EDF8: lhu         $v0, 0x0($t0)
    ctx->r2 = MEM_HU(ctx->r8, 0X0);
    // 0x8005EDFC: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x8005EE00: div         $zero, $v0, $at
    lo = S32(S64(S32(ctx->r2)) / S64(S32(ctx->r1))); hi = S32(S64(S32(ctx->r2)) % S64(S32(ctx->r1)));
    // 0x8005EE04: lui         $t1, 0x800B
    ctx->r9 = S32(0X800B << 16);
    // 0x8005EE08: addiu       $t1, $t1, -0x2A98
    ctx->r9 = ADD32(ctx->r9, -0X2A98);
    // 0x8005EE0C: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x8005EE10: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8005EE14: addiu       $t8, $v0, 0x1
    ctx->r24 = ADD32(ctx->r2, 0X1);
    // 0x8005EE18: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8005EE1C: sh          $t8, 0x0($t0)
    MEM_H(0X0, ctx->r8) = ctx->r24;
    // 0x8005EE20: mfhi        $v1
    ctx->r3 = hi;
    // 0x8005EE24: nop

    // 0x8005EE28: nop

    // 0x8005EE2C: multu       $v1, $t6
    result = U64(U32(ctx->r3)) * U64(U32(ctx->r14)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8005EE30: mflo        $t9
    ctx->r25 = lo;
    // 0x8005EE34: addu        $a1, $t9, $t1
    ctx->r5 = ADD32(ctx->r25, ctx->r9);
    // 0x8005EE38: lhu         $a0, 0x2($a1)
    ctx->r4 = MEM_HU(ctx->r5, 0X2);
    // 0x8005EE3C: jal         0x80059898
    // 0x8005EE40: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    func_80059898(rdram, ctx);
        goto after_0;
    // 0x8005EE40: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    after_0:
    // 0x8005EE44: lui         $s0, 0x8009
    ctx->r16 = S32(0X8009 << 16);
    // 0x8005EE48: addiu       $s0, $s0, 0x3B20
    ctx->r16 = ADD32(ctx->r16, 0X3B20);
    // 0x8005EE4C: lw          $t4, 0x0($s0)
    ctx->r12 = MEM_W(ctx->r16, 0X0);
    // 0x8005EE50: addiu       $t2, $zero, -0x130
    ctx->r10 = ADD32(0, -0X130);
    // 0x8005EE54: subu        $t3, $t2, $v0
    ctx->r11 = SUB32(ctx->r10, ctx->r2);
    // 0x8005EE58: sh          $t3, 0xE8($t4)
    MEM_H(0XE8, ctx->r12) = ctx->r11;
    // 0x8005EE5C: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x8005EE60: nop

    // 0x8005EE64: lhu         $a0, 0x4($t5)
    ctx->r4 = MEM_HU(ctx->r13, 0X4);
    // 0x8005EE68: jal         0x80059898
    // 0x8005EE6C: nop

    func_80059898(rdram, ctx);
        goto after_1;
    // 0x8005EE6C: nop

    after_1:
    // 0x8005EE70: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x8005EE74: lw          $t9, 0x0($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X0);
    // 0x8005EE78: lh          $t7, 0x0($t6)
    ctx->r15 = MEM_H(ctx->r14, 0X0);
    // 0x8005EE7C: nop

    // 0x8005EE80: addu        $t8, $v0, $t7
    ctx->r24 = ADD32(ctx->r2, ctx->r15);
    // 0x8005EE84: sh          $t8, 0xEA($t9)
    MEM_H(0XEA, ctx->r25) = ctx->r24;
    // 0x8005EE88: lw          $v1, 0x0($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X0);
    // 0x8005EE8C: nop

    // 0x8005EE90: lh          $t1, 0xE8($v1)
    ctx->r9 = MEM_H(ctx->r3, 0XE8);
    // 0x8005EE94: nop

    // 0x8005EE98: sh          $t1, 0xD8($v1)
    MEM_H(0XD8, ctx->r3) = ctx->r9;
    // 0x8005EE9C: lw          $v1, 0x0($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X0);
    // 0x8005EEA0: nop

    // 0x8005EEA4: lh          $t2, 0xEA($v1)
    ctx->r10 = MEM_H(ctx->r3, 0XEA);
    // 0x8005EEA8: nop

    // 0x8005EEAC: sh          $t2, 0xDA($v1)
    MEM_H(0XDA, ctx->r3) = ctx->r10;
    // 0x8005EEB0: lw          $v1, 0x0($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X0);
    // 0x8005EEB4: nop

    // 0x8005EEB8: lh          $a0, 0xE8($v1)
    ctx->r4 = MEM_H(ctx->r3, 0XE8);
    // 0x8005EEBC: lh          $a1, 0xEA($v1)
    ctx->r5 = MEM_H(ctx->r3, 0XEA);
    // 0x8005EEC0: jal         0x8005EBA8
    // 0x8005EEC4: nop

    func_8005EBA8(rdram, ctx);
        goto after_2;
    // 0x8005EEC4: nop

    after_2:
    // 0x8005EEC8: lw          $t4, 0x0($s0)
    ctx->r12 = MEM_W(ctx->r16, 0X0);
    // 0x8005EECC: lui         $t3, 0x8012
    ctx->r11 = S32(0X8012 << 16);
    // 0x8005EED0: addiu       $t3, $t3, -0xA38
    ctx->r11 = ADD32(ctx->r11, -0XA38);
    // 0x8005EED4: jal         0x80051268
    // 0x8005EED8: sw          $t3, 0x8C($t4)
    MEM_W(0X8C, ctx->r12) = ctx->r11;
    func_80051268(rdram, ctx);
        goto after_3;
    // 0x8005EED8: sw          $t3, 0x8C($t4)
    MEM_W(0X8C, ctx->r12) = ctx->r11;
    after_3:
    // 0x8005EEDC: addiu       $t5, $zero, 0x1
    ctx->r13 = ADD32(0, 0X1);
    // 0x8005EEE0: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x8005EEE4: sh          $t5, 0xB4C($at)
    MEM_H(0XB4C, ctx->r1) = ctx->r13;
    // 0x8005EEE8: lw          $v1, 0x0($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X0);
    // 0x8005EEEC: nop

    // 0x8005EEF0: lw          $t6, 0x8C($v1)
    ctx->r14 = MEM_W(ctx->r3, 0X8C);
    // 0x8005EEF4: nop

    // 0x8005EEF8: lw          $t7, 0xC8($t6)
    ctx->r15 = MEM_W(ctx->r14, 0XC8);
    // 0x8005EEFC: nop

    // 0x8005EF00: sw          $t7, 0xB4($v1)
    MEM_W(0XB4, ctx->r3) = ctx->r15;
    // 0x8005EF04: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8005EF08: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8005EF0C: jr          $ra
    // 0x8005EF10: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x8005EF10: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_8005EF14(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8005EF14: lui         $a2, 0x8012
    ctx->r6 = S32(0X8012 << 16);
    // 0x8005EF18: addiu       $a2, $a2, 0xB78
    ctx->r6 = ADD32(ctx->r6, 0XB78);
    // 0x8005EF1C: lhu         $t6, 0x0($a2)
    ctx->r14 = MEM_HU(ctx->r6, 0X0);
    // 0x8005EF20: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8005EF24: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x8005EF28: bne         $a1, $t6, L_8005F048
    if (ctx->r5 != ctx->r14) {
        // 0x8005EF2C: sw          $ra, 0x14($sp)
        MEM_W(0X14, ctx->r29) = ctx->r31;
            goto L_8005F048;
    }
    // 0x8005EF2C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8005EF30: lui         $v1, 0x8012
    ctx->r3 = S32(0X8012 << 16);
    // 0x8005EF34: addiu       $v1, $v1, -0x30A0
    ctx->r3 = ADD32(ctx->r3, -0X30A0);
    // 0x8005EF38: sb          $zero, 0x0($v1)
    MEM_B(0X0, ctx->r3) = 0;
    // 0x8005EF3C: sb          $zero, 0x2($v1)
    MEM_B(0X2, ctx->r3) = 0;
    // 0x8005EF40: sb          $a1, 0x8($v1)
    MEM_B(0X8, ctx->r3) = ctx->r5;
    // 0x8005EF44: sb          $a1, 0x9($v1)
    MEM_B(0X9, ctx->r3) = ctx->r5;
    // 0x8005EF48: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x8005EF4C: sh          $zero, 0xB74($at)
    MEM_H(0XB74, ctx->r1) = 0;
    // 0x8005EF50: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x8005EF54: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x8005EF58: sb          $zero, 0x38DF($at)
    MEM_B(0X38DF, ctx->r1) = 0;
    // 0x8005EF5C: addiu       $v0, $v0, -0x2CF0
    ctx->r2 = ADD32(ctx->r2, -0X2CF0);
    // 0x8005EF60: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x8005EF64: addiu       $t7, $zero, 0x80
    ctx->r15 = ADD32(0, 0X80);
    // 0x8005EF68: sb          $t7, 0x36C0($at)
    MEM_B(0X36C0, ctx->r1) = ctx->r15;
    // 0x8005EF6C: lhu         $t9, 0x8($v0)
    ctx->r25 = MEM_HU(ctx->r2, 0X8);
    // 0x8005EF70: lhu         $t1, 0xA9C($v0)
    ctx->r9 = MEM_HU(ctx->r2, 0XA9C);
    // 0x8005EF74: ori         $t3, $t9, 0x18
    ctx->r11 = ctx->r25 | 0X18;
    // 0x8005EF78: andi        $t5, $t1, 0xFFE7
    ctx->r13 = ctx->r9 & 0XFFE7;
    // 0x8005EF7C: lbu         $t8, 0x0($v0)
    ctx->r24 = MEM_BU(ctx->r2, 0X0);
    // 0x8005EF80: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    // 0x8005EF84: sh          $t3, 0x8($v0)
    MEM_H(0X8, ctx->r2) = ctx->r11;
    // 0x8005EF88: sh          $t5, 0xA9C($v0)
    MEM_H(0XA9C, ctx->r2) = ctx->r13;
    // 0x8005EF8C: andi        $t4, $t3, 0xFDFF
    ctx->r12 = ctx->r11 & 0XFDFF;
    // 0x8005EF90: ori         $t6, $t5, 0x200
    ctx->r14 = ctx->r13 | 0X200;
    // 0x8005EF94: sb          $a3, 0xA95($v0)
    MEM_B(0XA95, ctx->r2) = ctx->r7;
    // 0x8005EF98: sb          $zero, 0x133C($v0)
    MEM_B(0X133C, ctx->r2) = 0;
    // 0x8005EF9C: sh          $t4, 0x8($v0)
    MEM_H(0X8, ctx->r2) = ctx->r12;
    // 0x8005EFA0: sh          $t6, 0xA9C($v0)
    MEM_H(0XA9C, ctx->r2) = ctx->r14;
    // 0x8005EFA4: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x8005EFA8: sb          $t8, 0xA94($v0)
    MEM_B(0XA94, ctx->r2) = ctx->r24;
    // 0x8005EFAC: sh          $zero, 0xB72($at)
    MEM_H(0XB72, ctx->r1) = 0;
    // 0x8005EFB0: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x8005EFB4: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x8005EFB8: addiu       $a0, $a0, 0xB14
    ctx->r4 = ADD32(ctx->r4, 0XB14);
    // 0x8005EFBC: sh          $zero, 0xB76($at)
    MEM_H(0XB76, ctx->r1) = 0;
    // 0x8005EFC0: sb          $zero, 0x1($a0)
    MEM_B(0X1, ctx->r4) = 0;
    // 0x8005EFC4: sb          $zero, 0x2($a0)
    MEM_B(0X2, ctx->r4) = 0;
    // 0x8005EFC8: sb          $zero, 0x3($a0)
    MEM_B(0X3, ctx->r4) = 0;
    // 0x8005EFCC: jal         0x80059AE8
    // 0x8005EFD0: sb          $a3, 0x4($a0)
    MEM_B(0X4, ctx->r4) = ctx->r7;
    func_80059AE8(rdram, ctx);
        goto after_0;
    // 0x8005EFD0: sb          $a3, 0x4($a0)
    MEM_B(0X4, ctx->r4) = ctx->r7;
    after_0:
    // 0x8005EFD4: lui         $v1, 0x8012
    ctx->r3 = S32(0X8012 << 16);
    // 0x8005EFD8: lbu         $v1, -0x32A2($v1)
    ctx->r3 = MEM_BU(ctx->r3, -0X32A2);
    // 0x8005EFDC: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x8005EFE0: lui         $a2, 0x8012
    ctx->r6 = S32(0X8012 << 16);
    // 0x8005EFE4: addiu       $a2, $a2, 0xB78
    ctx->r6 = ADD32(ctx->r6, 0XB78);
    // 0x8005EFE8: addiu       $v0, $v0, -0x2CF0
    ctx->r2 = ADD32(ctx->r2, -0X2CF0);
    // 0x8005EFEC: beq         $v1, $zero, L_8005F00C
    if (ctx->r3 == 0) {
        // 0x8005EFF0: addiu       $a1, $zero, 0x1
        ctx->r5 = ADD32(0, 0X1);
            goto L_8005F00C;
    }
    // 0x8005EFF0: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x8005EFF4: beq         $v1, $a1, L_8005F030
    if (ctx->r3 == ctx->r5) {
        // 0x8005EFF8: addiu       $at, $zero, 0x2
        ctx->r1 = ADD32(0, 0X2);
            goto L_8005F030;
    }
    // 0x8005EFF8: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x8005EFFC: beq         $v1, $at, L_8005F040
    if (ctx->r3 == ctx->r1) {
        // 0x8005F000: nop
    
            goto L_8005F040;
    }
    // 0x8005F000: nop

    // 0x8005F004: b           L_8005F04C
    // 0x8005F008: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_8005F04C;
    // 0x8005F008: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8005F00C:
    // 0x8005F00C: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x8005F010: sh          $t8, 0x0($a2)
    MEM_H(0X0, ctx->r6) = ctx->r24;
    // 0x8005F014: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x8005F018: sh          $t8, 0xB7A($at)
    MEM_H(0XB7A, ctx->r1) = ctx->r24;
    // 0x8005F01C: lhu         $t9, 0xA9C($v0)
    ctx->r25 = MEM_HU(ctx->r2, 0XA9C);
    // 0x8005F020: nop

    // 0x8005F024: ori         $t0, $t9, 0x400
    ctx->r8 = ctx->r25 | 0X400;
    // 0x8005F028: b           L_8005F048
    // 0x8005F02C: sh          $t0, 0xA9C($v0)
    MEM_H(0XA9C, ctx->r2) = ctx->r8;
        goto L_8005F048;
    // 0x8005F02C: sh          $t0, 0xA9C($v0)
    MEM_H(0XA9C, ctx->r2) = ctx->r8;
L_8005F030:
    // 0x8005F030: jal         0x8005EDCC
    // 0x8005F034: nop

    func_8005EDCC(rdram, ctx);
        goto after_1;
    // 0x8005F034: nop

    after_1:
    // 0x8005F038: b           L_8005F04C
    // 0x8005F03C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_8005F04C;
    // 0x8005F03C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8005F040:
    // 0x8005F040: jal         0x8005EC6C
    // 0x8005F044: nop

    func_8005EC6C(rdram, ctx);
        goto after_2;
    // 0x8005F044: nop

    after_2:
L_8005F048:
    // 0x8005F048: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8005F04C:
    // 0x8005F04C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8005F050: jr          $ra
    // 0x8005F054: nop

    return;
    // 0x8005F054: nop

;}
RECOMP_FUNC void func_8005F058(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8005F058: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x8005F05C: lui         $a0, 0x800B
    ctx->r4 = S32(0X800B << 16);
    // 0x8005F060: lui         $v1, 0x800B
    ctx->r3 = S32(0X800B << 16);
    // 0x8005F064: addiu       $v0, $v0, -0x2234
    ctx->r2 = ADD32(ctx->r2, -0X2234);
    // 0x8005F068: addiu       $v1, $v1, -0x2A58
    ctx->r3 = ADD32(ctx->r3, -0X2A58);
    // 0x8005F06C: addiu       $a0, $a0, -0x2A68
    ctx->r4 = ADD32(ctx->r4, -0X2A68);
L_8005F070:
    // 0x8005F070: lbu         $t6, 0x0($a0)
    ctx->r14 = MEM_BU(ctx->r4, 0X0);
    // 0x8005F074: addiu       $a0, $a0, 0x4
    ctx->r4 = ADD32(ctx->r4, 0X4);
    // 0x8005F078: sb          $t6, 0x18($v0)
    MEM_B(0X18, ctx->r2) = ctx->r14;
    // 0x8005F07C: lbu         $t7, -0x3($a0)
    ctx->r15 = MEM_BU(ctx->r4, -0X3);
    // 0x8005F080: addiu       $v0, $v0, 0xB0
    ctx->r2 = ADD32(ctx->r2, 0XB0);
    // 0x8005F084: sb          $t7, -0x6C($v0)
    MEM_B(-0X6C, ctx->r2) = ctx->r15;
    // 0x8005F088: lbu         $t8, -0x2($a0)
    ctx->r24 = MEM_BU(ctx->r4, -0X2);
    // 0x8005F08C: nop

    // 0x8005F090: sb          $t8, -0x40($v0)
    MEM_B(-0X40, ctx->r2) = ctx->r24;
    // 0x8005F094: lbu         $t9, -0x1($a0)
    ctx->r25 = MEM_BU(ctx->r4, -0X1);
    // 0x8005F098: bne         $a0, $v1, L_8005F070
    if (ctx->r4 != ctx->r3) {
        // 0x8005F09C: sb          $t9, -0x14($v0)
        MEM_B(-0X14, ctx->r2) = ctx->r25;
            goto L_8005F070;
    }
    // 0x8005F09C: sb          $t9, -0x14($v0)
    MEM_B(-0X14, ctx->r2) = ctx->r25;
    // 0x8005F0A0: jr          $ra
    // 0x8005F0A4: nop

    return;
    // 0x8005F0A4: nop

;}
RECOMP_FUNC void func_8005F0A8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8005F0A8: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x8005F0AC: lbu         $v0, -0x32A2($v0)
    ctx->r2 = MEM_BU(ctx->r2, -0X32A2);
    // 0x8005F0B0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8005F0B4: bne         $v0, $zero, L_8005F0F8
    if (ctx->r2 != 0) {
        // 0x8005F0B8: sw          $ra, 0x14($sp)
        MEM_W(0X14, ctx->r29) = ctx->r31;
            goto L_8005F0F8;
    }
    // 0x8005F0B8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8005F0BC: jal         0x8005EB14
    // 0x8005F0C0: nop

    func_8005EB14(rdram, ctx);
        goto after_0;
    // 0x8005F0C0: nop

    after_0:
    // 0x8005F0C4: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x8005F0C8: lui         $v1, 0x8012
    ctx->r3 = S32(0X8012 << 16);
    // 0x8005F0CC: addiu       $v1, $v1, 0xB7E
    ctx->r3 = ADD32(ctx->r3, 0XB7E);
    // 0x8005F0D0: addiu       $v0, $v0, -0x2CF0
    ctx->r2 = ADD32(ctx->r2, -0X2CF0);
    // 0x8005F0D4: lhu         $t6, 0xA9C($v0)
    ctx->r14 = MEM_HU(ctx->r2, 0XA9C);
    // 0x8005F0D8: lhu         $t9, 0x0($v1)
    ctx->r25 = MEM_HU(ctx->r3, 0X0);
    // 0x8005F0DC: addiu       $t8, $zero, -0x1FD
    ctx->r24 = ADD32(0, -0X1FD);
    // 0x8005F0E0: ori         $t7, $t6, 0x400
    ctx->r15 = ctx->r14 | 0X400;
    // 0x8005F0E4: ori         $t0, $t9, 0x200
    ctx->r8 = ctx->r25 | 0X200;
    // 0x8005F0E8: sh          $t7, 0xA9C($v0)
    MEM_H(0XA9C, ctx->r2) = ctx->r15;
    // 0x8005F0EC: sh          $t8, 0x1348($v0)
    MEM_H(0X1348, ctx->r2) = ctx->r24;
    // 0x8005F0F0: b           L_8005F140
    // 0x8005F0F4: sh          $t0, 0x0($v1)
    MEM_H(0X0, ctx->r3) = ctx->r8;
        goto L_8005F140;
    // 0x8005F0F4: sh          $t0, 0x0($v1)
    MEM_H(0X0, ctx->r3) = ctx->r8;
L_8005F0F8:
    // 0x8005F0F8: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8005F0FC: bne         $v0, $at, L_8005F124
    if (ctx->r2 != ctx->r1) {
        // 0x8005F100: lui         $v1, 0x8012
        ctx->r3 = S32(0X8012 << 16);
            goto L_8005F124;
    }
    // 0x8005F100: lui         $v1, 0x8012
    ctx->r3 = S32(0X8012 << 16);
    // 0x8005F104: addiu       $v1, $v1, 0xB7E
    ctx->r3 = ADD32(ctx->r3, 0XB7E);
    // 0x8005F108: lhu         $t1, 0x0($v1)
    ctx->r9 = MEM_HU(ctx->r3, 0X0);
    // 0x8005F10C: nop

    // 0x8005F110: ori         $t2, $t1, 0x400
    ctx->r10 = ctx->r9 | 0X400;
    // 0x8005F114: jal         0x802912A8
    // 0x8005F118: sh          $t2, 0x0($v1)
    MEM_H(0X0, ctx->r3) = ctx->r10;
    LOOKUP_FUNC(0x802912A8)(rdram, ctx);
        goto after_1;
    // 0x8005F118: sh          $t2, 0x0($v1)
    MEM_H(0X0, ctx->r3) = ctx->r10;
    after_1:
    // 0x8005F11C: b           L_8005F144
    // 0x8005F120: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_8005F144;
    // 0x8005F120: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8005F124:
    // 0x8005F124: lui         $v1, 0x8012
    ctx->r3 = S32(0X8012 << 16);
    // 0x8005F128: addiu       $v1, $v1, 0xB7E
    ctx->r3 = ADD32(ctx->r3, 0XB7E);
    // 0x8005F12C: lhu         $t3, 0x0($v1)
    ctx->r11 = MEM_HU(ctx->r3, 0X0);
    // 0x8005F130: nop

    // 0x8005F134: ori         $t4, $t3, 0x400
    ctx->r12 = ctx->r11 | 0X400;
    // 0x8005F138: jal         0x8028FDEC
    // 0x8005F13C: sh          $t4, 0x0($v1)
    MEM_H(0X0, ctx->r3) = ctx->r12;
    LOOKUP_FUNC(0x8028FDEC)(rdram, ctx);
        goto after_2;
    // 0x8005F13C: sh          $t4, 0x0($v1)
    MEM_H(0X0, ctx->r3) = ctx->r12;
    after_2:
L_8005F140:
    // 0x8005F140: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8005F144:
    // 0x8005F144: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8005F148: jr          $ra
    // 0x8005F14C: nop

    return;
    // 0x8005F14C: nop

;}
RECOMP_FUNC void func_8005F150(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8005F150: lui         $t6, 0x8012
    ctx->r14 = S32(0X8012 << 16);
    // 0x8005F154: lbu         $t6, 0xB6A($t6)
    ctx->r14 = MEM_BU(ctx->r14, 0XB6A);
    // 0x8005F158: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8005F15C: bne         $t6, $zero, L_8005F294
    if (ctx->r14 != 0) {
        // 0x8005F160: sw          $ra, 0x14($sp)
        MEM_W(0X14, ctx->r29) = ctx->r31;
            goto L_8005F294;
    }
    // 0x8005F160: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8005F164: jal         0x802719DC
    // 0x8005F168: addiu       $a0, $zero, 0x3BB
    ctx->r4 = ADD32(0, 0X3BB);
    LOOKUP_FUNC(0x802719DC)(rdram, ctx);
        goto after_0;
    // 0x8005F168: addiu       $a0, $zero, 0x3BB
    ctx->r4 = ADD32(0, 0X3BB);
    after_0:
    // 0x8005F16C: jal         0x800598D0
    // 0x8005F170: nop

    func_800598D0(rdram, ctx);
        goto after_1;
    // 0x8005F170: nop

    after_1:
    // 0x8005F174: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x8005F178: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x8005F17C: sb          $t7, 0xB6A($at)
    MEM_B(0XB6A, ctx->r1) = ctx->r15;
    // 0x8005F180: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x8005F184: addiu       $t8, $zero, 0x80
    ctx->r24 = ADD32(0, 0X80);
    // 0x8005F188: lui         $t9, 0x8012
    ctx->r25 = S32(0X8012 << 16);
    // 0x8005F18C: lhu         $t9, 0xB78($t9)
    ctx->r25 = MEM_HU(ctx->r25, 0XB78);
    // 0x8005F190: sb          $t8, 0x36C0($at)
    MEM_B(0X36C0, ctx->r1) = ctx->r24;
    // 0x8005F194: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x8005F198: jal         0x80059810
    // 0x8005F19C: sh          $t9, 0xB7A($at)
    MEM_H(0XB7A, ctx->r1) = ctx->r25;
    func_80059810(rdram, ctx);
        goto after_2;
    // 0x8005F19C: sh          $t9, 0xB7A($at)
    MEM_H(0XB7A, ctx->r1) = ctx->r25;
    after_2:
    // 0x8005F1A0: lui         $v1, 0x8009
    ctx->r3 = S32(0X8009 << 16);
    // 0x8005F1A4: addiu       $v1, $v1, 0x3B20
    ctx->r3 = ADD32(ctx->r3, 0X3B20);
    // 0x8005F1A8: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x8005F1AC: lui         $t2, 0x8012
    ctx->r10 = S32(0X8012 << 16);
    // 0x8005F1B0: lh          $t0, 0xE8($v0)
    ctx->r8 = MEM_H(ctx->r2, 0XE8);
    // 0x8005F1B4: addiu       $t2, $t2, -0xA38
    ctx->r10 = ADD32(ctx->r10, -0XA38);
    // 0x8005F1B8: sh          $t0, 0xD8($v0)
    MEM_H(0XD8, ctx->r2) = ctx->r8;
    // 0x8005F1BC: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x8005F1C0: nop

    // 0x8005F1C4: lh          $t1, 0xEA($v0)
    ctx->r9 = MEM_H(ctx->r2, 0XEA);
    // 0x8005F1C8: nop

    // 0x8005F1CC: sh          $t1, 0xDA($v0)
    MEM_H(0XDA, ctx->r2) = ctx->r9;
    // 0x8005F1D0: lw          $t3, 0x0($v1)
    ctx->r11 = MEM_W(ctx->r3, 0X0);
    // 0x8005F1D4: nop

    // 0x8005F1D8: sw          $t2, 0x8C($t3)
    MEM_W(0X8C, ctx->r11) = ctx->r10;
    // 0x8005F1DC: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x8005F1E0: nop

    // 0x8005F1E4: lh          $a0, 0xE8($v0)
    ctx->r4 = MEM_H(ctx->r2, 0XE8);
    // 0x8005F1E8: lh          $a1, 0xEA($v0)
    ctx->r5 = MEM_H(ctx->r2, 0XEA);
    // 0x8005F1EC: jal         0x8005EBA8
    // 0x8005F1F0: nop

    func_8005EBA8(rdram, ctx);
        goto after_3;
    // 0x8005F1F0: nop

    after_3:
    // 0x8005F1F4: jal         0x80050F74
    // 0x8005F1F8: nop

    func_80050F74(rdram, ctx);
        goto after_4;
    // 0x8005F1F8: nop

    after_4:
    // 0x8005F1FC: lui         $v1, 0x8009
    ctx->r3 = S32(0X8009 << 16);
    // 0x8005F200: addiu       $v1, $v1, 0x3B20
    ctx->r3 = ADD32(ctx->r3, 0X3B20);
    // 0x8005F204: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x8005F208: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x8005F20C: lh          $t4, 0xE8($v0)
    ctx->r12 = MEM_H(ctx->r2, 0XE8);
    // 0x8005F210: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x8005F214: sh          $t4, 0xD8($v0)
    MEM_H(0XD8, ctx->r2) = ctx->r12;
    // 0x8005F218: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x8005F21C: addiu       $a0, $a0, -0x2CF0
    ctx->r4 = ADD32(ctx->r4, -0X2CF0);
    // 0x8005F220: lh          $t5, 0xEA($v0)
    ctx->r13 = MEM_H(ctx->r2, 0XEA);
    // 0x8005F224: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8005F228: sh          $t5, 0xDA($v0)
    MEM_H(0XDA, ctx->r2) = ctx->r13;
    // 0x8005F22C: jal         0x8005C7D0
    // 0x8005F230: sh          $zero, 0xB4C($at)
    MEM_H(0XB4C, ctx->r1) = 0;
    func_8005C7D0(rdram, ctx);
        goto after_5;
    // 0x8005F230: sh          $zero, 0xB4C($at)
    MEM_H(0XB4C, ctx->r1) = 0;
    after_5:
    // 0x8005F234: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x8005F238: addiu       $a0, $a0, -0x225C
    ctx->r4 = ADD32(ctx->r4, -0X225C);
    // 0x8005F23C: jal         0x8005C7D0
    // 0x8005F240: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_8005C7D0(rdram, ctx);
        goto after_6;
    // 0x8005F240: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_6:
    // 0x8005F244: jal         0x8005AE5C
    // 0x8005F248: nop

    func_8005AE5C(rdram, ctx);
        goto after_7;
    // 0x8005F248: nop

    after_7:
    // 0x8005F24C: lui         $t6, 0x8012
    ctx->r14 = S32(0X8012 << 16);
    // 0x8005F250: lhu         $t6, 0xB78($t6)
    ctx->r14 = MEM_HU(ctx->r14, 0XB78);
    // 0x8005F254: nop

    // 0x8005F258: addiu       $t7, $t6, -0x2
    ctx->r15 = ADD32(ctx->r14, -0X2);
    // 0x8005F25C: sltiu       $at, $t7, 0x5
    ctx->r1 = ctx->r15 < 0X5 ? 1 : 0;
    // 0x8005F260: beq         $at, $zero, L_8005F294
    if (ctx->r1 == 0) {
        // 0x8005F264: sll         $t7, $t7, 2
        ctx->r15 = S32(ctx->r15 << 2);
            goto L_8005F294;
    }
    // 0x8005F264: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8005F268: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x8005F26C: addu        $at, $at, $t7
    gpr jr_addend_8005F278 = ctx->r15;
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x8005F270: lw          $t7, -0x6730($at)
    ctx->r15 = ADD32(ctx->r1, -0X6730);
    // 0x8005F274: nop

    // 0x8005F278: jr          $t7
    // 0x8005F27C: nop

    switch (jr_addend_8005F278 >> 2) {
        case 0: goto L_8005F280; break;
        case 1: goto L_8005F28C; break;
        case 2: goto L_8005F280; break;
        case 3: goto L_8005F28C; break;
        case 4: goto L_8005F28C; break;
        default: switch_error(__func__, 0x8005F278, 0x800D98D0);
    }
    // 0x8005F27C: nop

L_8005F280:
    // 0x8005F280: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x8005F284: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x8005F288: sh          $t8, 0xB4C($at)
    MEM_H(0XB4C, ctx->r1) = ctx->r24;
L_8005F28C:
    // 0x8005F28C: jal         0x80051268
    // 0x8005F290: nop

    func_80051268(rdram, ctx);
        goto after_8;
    // 0x8005F290: nop

    after_8:
L_8005F294:
    // 0x8005F294: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8005F298: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8005F29C: jr          $ra
    // 0x8005F2A0: nop

    return;
    // 0x8005F2A0: nop

    // 0x8005F2A4: nop

    // 0x8005F2A8: nop

    // 0x8005F2AC: nop

;}
RECOMP_FUNC void func_8005F2B0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8005F2B0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8005F2B4: sw          $s3, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r19;
    // 0x8005F2B8: sw          $s2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r18;
    // 0x8005F2BC: sw          $s1, 0xC($sp)
    MEM_W(0XC, ctx->r29) = ctx->r17;
    // 0x8005F2C0: sw          $s0, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r16;
    // 0x8005F2C4: lwc1        $f4, 0x18($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X18);
    // 0x8005F2C8: lui         $v0, 0x8010
    ctx->r2 = S32(0X8010 << 16);
    // 0x8005F2CC: addiu       $v0, $v0, 0x4890
    ctx->r2 = ADD32(ctx->r2, 0X4890);
    // 0x8005F2D0: swc1        $f4, 0x1B94($v0)
    MEM_W(0X1B94, ctx->r2) = ctx->f4.u32l;
    // 0x8005F2D4: lwc1        $f6, 0x1C($a0)
    ctx->f6.u32l = MEM_W(ctx->r4, 0X1C);
    // 0x8005F2D8: lui         $v1, 0x8009
    ctx->r3 = S32(0X8009 << 16);
    // 0x8005F2DC: swc1        $f6, 0x1B98($v0)
    MEM_W(0X1B98, ctx->r2) = ctx->f6.u32l;
    // 0x8005F2E0: lwc1        $f8, 0x20($a0)
    ctx->f8.u32l = MEM_W(ctx->r4, 0X20);
    // 0x8005F2E4: addiu       $v1, $v1, 0x3B20
    ctx->r3 = ADD32(ctx->r3, 0X3B20);
    // 0x8005F2E8: swc1        $f8, 0x1B9C($v0)
    MEM_W(0X1B9C, ctx->r2) = ctx->f8.u32l;
    // 0x8005F2EC: lhu         $t6, 0x24($a0)
    ctx->r14 = MEM_HU(ctx->r4, 0X24);
    // 0x8005F2F0: lw          $t7, 0x0($v1)
    ctx->r15 = MEM_W(ctx->r3, 0X0);
    // 0x8005F2F4: lui         $t2, 0x8012
    ctx->r10 = S32(0X8012 << 16);
    // 0x8005F2F8: sh          $t6, 0x50($t7)
    MEM_H(0X50, ctx->r15) = ctx->r14;
    // 0x8005F2FC: lw          $t8, 0x0($v1)
    ctx->r24 = MEM_W(ctx->r3, 0X0);
    // 0x8005F300: lwc1        $f10, 0x28($a0)
    ctx->f10.u32l = MEM_W(ctx->r4, 0X28);
    // 0x8005F304: lui         $t6, 0x8012
    ctx->r14 = S32(0X8012 << 16);
    // 0x8005F308: swc1        $f10, 0x5C($t8)
    MEM_W(0X5C, ctx->r24) = ctx->f10.u32l;
    // 0x8005F30C: lw          $t9, 0x0($v1)
    ctx->r25 = MEM_W(ctx->r3, 0X0);
    // 0x8005F310: lwc1        $f16, 0x2C($a0)
    ctx->f16.u32l = MEM_W(ctx->r4, 0X2C);
    // 0x8005F314: addiu       $t2, $t2, -0x17C8
    ctx->r10 = ADD32(ctx->r10, -0X17C8);
    // 0x8005F318: swc1        $f16, 0x58($t9)
    MEM_W(0X58, ctx->r25) = ctx->f16.u32l;
    // 0x8005F31C: lhu         $t6, 0xB7E($t6)
    ctx->r14 = MEM_HU(ctx->r14, 0XB7E);
    // 0x8005F320: or          $v0, $t2, $zero
    ctx->r2 = ctx->r10 | 0;
    // 0x8005F324: andi        $t7, $t6, 0x4000
    ctx->r15 = ctx->r14 & 0X4000;
    // 0x8005F328: bne         $t7, $zero, L_8005F544
    if (ctx->r15 != 0) {
        // 0x8005F32C: or          $v1, $zero, $zero
        ctx->r3 = 0 | 0;
            goto L_8005F544;
    }
    // 0x8005F32C: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
L_8005F330:
    // 0x8005F330: lhu         $t8, 0xC($v0)
    ctx->r24 = MEM_HU(ctx->r2, 0XC);
    // 0x8005F334: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x8005F338: beq         $t8, $zero, L_8005F350
    if (ctx->r24 == 0) {
        // 0x8005F33C: sltiu       $at, $v1, 0x1C
        ctx->r1 = ctx->r3 < 0X1C ? 1 : 0;
            goto L_8005F350;
    }
    // 0x8005F33C: sltiu       $at, $v1, 0x1C
    ctx->r1 = ctx->r3 < 0X1C ? 1 : 0;
    // 0x8005F340: lhu         $t9, 0x20($v0)
    ctx->r25 = MEM_HU(ctx->r2, 0X20);
    // 0x8005F344: nop

    // 0x8005F348: andi        $t6, $t9, 0xF7FF
    ctx->r14 = ctx->r25 & 0XF7FF;
    // 0x8005F34C: sh          $t6, 0x20($v0)
    MEM_H(0X20, ctx->r2) = ctx->r14;
L_8005F350:
    // 0x8005F350: bne         $at, $zero, L_8005F330
    if (ctx->r1 != 0) {
        // 0x8005F354: addiu       $v0, $v0, 0xF8
        ctx->r2 = ADD32(ctx->r2, 0XF8);
            goto L_8005F330;
    }
    // 0x8005F354: addiu       $v0, $v0, 0xF8
    ctx->r2 = ADD32(ctx->r2, 0XF8);
    // 0x8005F358: lui         $t7, 0x8010
    ctx->r15 = S32(0X8010 << 16);
    // 0x8005F35C: lhu         $t7, 0x64F0($t7)
    ctx->r15 = MEM_HU(ctx->r15, 0X64F0);
    // 0x8005F360: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x8005F364: beq         $t7, $zero, L_8005F408
    if (ctx->r15 == 0) {
        // 0x8005F368: lui         $v0, 0x8010
        ctx->r2 = S32(0X8010 << 16);
            goto L_8005F408;
    }
    // 0x8005F368: lui         $v0, 0x8010
    ctx->r2 = S32(0X8010 << 16);
    // 0x8005F36C: lbu         $t9, 0x30($a0)
    ctx->r25 = MEM_BU(ctx->r4, 0X30);
    // 0x8005F370: addiu       $t3, $zero, 0xE
    ctx->r11 = ADD32(0, 0XE);
    // 0x8005F374: multu       $t9, $t3
    result = U64(U32(ctx->r25)) * U64(U32(ctx->r11)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8005F378: lbu         $t8, 0x35($a0)
    ctx->r24 = MEM_BU(ctx->r4, 0X35);
    // 0x8005F37C: addiu       $t4, $zero, 0xF8
    ctx->r12 = ADD32(0, 0XF8);
    // 0x8005F380: addiu       $s0, $zero, 0x34
    ctx->r16 = ADD32(0, 0X34);
    // 0x8005F384: lui         $t5, 0x800E
    ctx->r13 = S32(0X800E << 16);
    // 0x8005F388: lui         $at, 0x8010
    ctx->r1 = S32(0X8010 << 16);
    // 0x8005F38C: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x8005F390: addiu       $t5, $t5, -0x3770
    ctx->r13 = ADD32(ctx->r13, -0X3770);
    // 0x8005F394: lui         $s1, 0x2
    ctx->r17 = S32(0X2 << 16);
    // 0x8005F398: ori         $s1, $s1, 0x8000
    ctx->r17 = ctx->r17 | 0X8000;
    // 0x8005F39C: mflo        $t6
    ctx->r14 = lo;
    // 0x8005F3A0: addu        $a1, $t8, $t6
    ctx->r5 = ADD32(ctx->r24, ctx->r14);
    // 0x8005F3A4: nop

    // 0x8005F3A8: multu       $a1, $t4
    result = U64(U32(ctx->r5)) * U64(U32(ctx->r12)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8005F3AC: mflo        $t7
    ctx->r15 = lo;
    // 0x8005F3B0: addu        $a3, $t2, $t7
    ctx->r7 = ADD32(ctx->r10, ctx->r15);
    // 0x8005F3B4: lhu         $t9, 0x20($a3)
    ctx->r25 = MEM_HU(ctx->r7, 0X20);
    // 0x8005F3B8: multu       $a1, $s0
    result = U64(U32(ctx->r5)) * U64(U32(ctx->r16)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8005F3BC: ori         $t8, $t9, 0x800
    ctx->r24 = ctx->r25 | 0X800;
    // 0x8005F3C0: sh          $t8, 0x20($a3)
    MEM_H(0X20, ctx->r7) = ctx->r24;
    // 0x8005F3C4: lwc1        $f18, 0x3C($a0)
    ctx->f18.u32l = MEM_W(ctx->r4, 0X3C);
    // 0x8005F3C8: nop

    // 0x8005F3CC: swc1        $f18, 0x6504($at)
    MEM_W(0X6504, ctx->r1) = ctx->f18.u32l;
    // 0x8005F3D0: lui         $at, 0x8010
    ctx->r1 = S32(0X8010 << 16);
    // 0x8005F3D4: swc1        $f0, 0x64F8($at)
    MEM_W(0X64F8, ctx->r1) = ctx->f0.u32l;
    // 0x8005F3D8: lui         $at, 0x8010
    ctx->r1 = S32(0X8010 << 16);
    // 0x8005F3DC: mflo        $t6
    ctx->r14 = lo;
    // 0x8005F3E0: addu        $t7, $t5, $t6
    ctx->r15 = ADD32(ctx->r13, ctx->r14);
    // 0x8005F3E4: addu        $t1, $t7, $s1
    ctx->r9 = ADD32(ctx->r15, ctx->r17);
    // 0x8005F3E8: lwc1        $f4, 0x15E4($t1)
    ctx->f4.u32l = MEM_W(ctx->r9, 0X15E4);
    // 0x8005F3EC: nop

    // 0x8005F3F0: swc1        $f4, 0x64F4($at)
    MEM_W(0X64F4, ctx->r1) = ctx->f4.u32l;
    // 0x8005F3F4: lwc1        $f6, 0x15EC($t1)
    ctx->f6.u32l = MEM_W(ctx->r9, 0X15EC);
    // 0x8005F3F8: lui         $at, 0x8010
    ctx->r1 = S32(0X8010 << 16);
    // 0x8005F3FC: swc1        $f6, 0x64FC($at)
    MEM_W(0X64FC, ctx->r1) = ctx->f6.u32l;
    // 0x8005F400: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x8005F404: sw          $a3, 0xAD8($at)
    MEM_W(0XAD8, ctx->r1) = ctx->r7;
L_8005F408:
    // 0x8005F408: lui         $t5, 0x800E
    ctx->r13 = S32(0X800E << 16);
    // 0x8005F40C: lui         $s1, 0x2
    ctx->r17 = S32(0X2 << 16);
    // 0x8005F410: lui         $s2, 0x8012
    ctx->r18 = S32(0X8012 << 16);
    // 0x8005F414: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x8005F418: addiu       $s2, $s2, 0xAD8
    ctx->r18 = ADD32(ctx->r18, 0XAD8);
    // 0x8005F41C: ori         $s1, $s1, 0x8000
    ctx->r17 = ctx->r17 | 0X8000;
    // 0x8005F420: addiu       $t5, $t5, -0x3770
    ctx->r13 = ADD32(ctx->r13, -0X3770);
    // 0x8005F424: addiu       $t3, $zero, 0xE
    ctx->r11 = ADD32(0, 0XE);
    // 0x8005F428: addiu       $t4, $zero, 0xF8
    ctx->r12 = ADD32(0, 0XF8);
    // 0x8005F42C: addiu       $s0, $zero, 0x34
    ctx->r16 = ADD32(0, 0X34);
    // 0x8005F430: addiu       $v0, $v0, 0x6524
    ctx->r2 = ADD32(ctx->r2, 0X6524);
    // 0x8005F434: addiu       $s3, $zero, 0x5
    ctx->r19 = ADD32(0, 0X5);
L_8005F438:
    // 0x8005F438: lhu         $t9, 0x0($v0)
    ctx->r25 = MEM_HU(ctx->r2, 0X0);
    // 0x8005F43C: addu        $a2, $a0, $v1
    ctx->r6 = ADD32(ctx->r4, ctx->r3);
    // 0x8005F440: beq         $t9, $zero, L_8005F4B8
    if (ctx->r25 == 0) {
        // 0x8005F444: nop
    
            goto L_8005F4B8;
    }
    // 0x8005F444: nop

    // 0x8005F448: lbu         $t6, 0x30($a2)
    ctx->r14 = MEM_BU(ctx->r6, 0X30);
    // 0x8005F44C: lbu         $t8, 0x35($a2)
    ctx->r24 = MEM_BU(ctx->r6, 0X35);
    // 0x8005F450: multu       $t6, $t3
    result = U64(U32(ctx->r14)) * U64(U32(ctx->r11)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8005F454: sll         $t0, $v1, 2
    ctx->r8 = S32(ctx->r3 << 2);
    // 0x8005F458: mflo        $t7
    ctx->r15 = lo;
    // 0x8005F45C: addu        $a1, $t8, $t7
    ctx->r5 = ADD32(ctx->r24, ctx->r15);
    // 0x8005F460: addu        $t7, $a0, $t0
    ctx->r15 = ADD32(ctx->r4, ctx->r8);
    // 0x8005F464: multu       $a1, $t4
    result = U64(U32(ctx->r5)) * U64(U32(ctx->r12)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8005F468: mflo        $t9
    ctx->r25 = lo;
    // 0x8005F46C: addu        $a3, $t2, $t9
    ctx->r7 = ADD32(ctx->r10, ctx->r25);
    // 0x8005F470: lhu         $t6, 0x20($a3)
    ctx->r14 = MEM_HU(ctx->r7, 0X20);
    // 0x8005F474: multu       $a1, $s0
    result = U64(U32(ctx->r5)) * U64(U32(ctx->r16)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8005F478: ori         $t8, $t6, 0x800
    ctx->r24 = ctx->r14 | 0X800;
    // 0x8005F47C: sh          $t8, 0x20($a3)
    MEM_H(0X20, ctx->r7) = ctx->r24;
    // 0x8005F480: lwc1        $f8, 0x3C($t7)
    ctx->f8.u32l = MEM_W(ctx->r15, 0X3C);
    // 0x8005F484: swc1        $f0, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->f0.u32l;
    // 0x8005F488: swc1        $f8, 0x14($v0)
    MEM_W(0X14, ctx->r2) = ctx->f8.u32l;
    // 0x8005F48C: addu        $t8, $s2, $t0
    ctx->r24 = ADD32(ctx->r18, ctx->r8);
    // 0x8005F490: mflo        $t9
    ctx->r25 = lo;
    // 0x8005F494: addu        $t6, $t5, $t9
    ctx->r14 = ADD32(ctx->r13, ctx->r25);
    // 0x8005F498: addu        $t1, $t6, $s1
    ctx->r9 = ADD32(ctx->r14, ctx->r17);
    // 0x8005F49C: lwc1        $f10, 0x15E4($t1)
    ctx->f10.u32l = MEM_W(ctx->r9, 0X15E4);
    // 0x8005F4A0: nop

    // 0x8005F4A4: swc1        $f10, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->f10.u32l;
    // 0x8005F4A8: lwc1        $f16, 0x15EC($t1)
    ctx->f16.u32l = MEM_W(ctx->r9, 0X15EC);
    // 0x8005F4AC: nop

    // 0x8005F4B0: swc1        $f16, 0xC($v0)
    MEM_W(0XC, ctx->r2) = ctx->f16.u32l;
    // 0x8005F4B4: sw          $a3, 0x0($t8)
    MEM_W(0X0, ctx->r24) = ctx->r7;
L_8005F4B8:
    // 0x8005F4B8: lhu         $t7, 0x34($v0)
    ctx->r15 = MEM_HU(ctx->r2, 0X34);
    // 0x8005F4BC: addiu       $v0, $v0, 0x34
    ctx->r2 = ADD32(ctx->r2, 0X34);
    // 0x8005F4C0: beq         $t7, $zero, L_8005F538
    if (ctx->r15 == 0) {
        // 0x8005F4C4: addu        $a2, $a0, $v1
        ctx->r6 = ADD32(ctx->r4, ctx->r3);
            goto L_8005F538;
    }
    // 0x8005F4C4: addu        $a2, $a0, $v1
    ctx->r6 = ADD32(ctx->r4, ctx->r3);
    // 0x8005F4C8: lbu         $t6, 0x31($a2)
    ctx->r14 = MEM_BU(ctx->r6, 0X31);
    // 0x8005F4CC: lbu         $t9, 0x36($a2)
    ctx->r25 = MEM_BU(ctx->r6, 0X36);
    // 0x8005F4D0: multu       $t6, $t3
    result = U64(U32(ctx->r14)) * U64(U32(ctx->r11)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8005F4D4: sll         $t0, $v1, 2
    ctx->r8 = S32(ctx->r3 << 2);
    // 0x8005F4D8: mflo        $t8
    ctx->r24 = lo;
    // 0x8005F4DC: addu        $a1, $t9, $t8
    ctx->r5 = ADD32(ctx->r25, ctx->r24);
    // 0x8005F4E0: addu        $t8, $a0, $t0
    ctx->r24 = ADD32(ctx->r4, ctx->r8);
    // 0x8005F4E4: multu       $a1, $t4
    result = U64(U32(ctx->r5)) * U64(U32(ctx->r12)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8005F4E8: mflo        $t7
    ctx->r15 = lo;
    // 0x8005F4EC: addu        $a3, $t2, $t7
    ctx->r7 = ADD32(ctx->r10, ctx->r15);
    // 0x8005F4F0: lhu         $t6, 0x20($a3)
    ctx->r14 = MEM_HU(ctx->r7, 0X20);
    // 0x8005F4F4: multu       $a1, $s0
    result = U64(U32(ctx->r5)) * U64(U32(ctx->r16)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8005F4F8: ori         $t9, $t6, 0x800
    ctx->r25 = ctx->r14 | 0X800;
    // 0x8005F4FC: sh          $t9, 0x20($a3)
    MEM_H(0X20, ctx->r7) = ctx->r25;
    // 0x8005F500: lwc1        $f18, 0x40($t8)
    ctx->f18.u32l = MEM_W(ctx->r24, 0X40);
    // 0x8005F504: swc1        $f0, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->f0.u32l;
    // 0x8005F508: swc1        $f18, 0x14($v0)
    MEM_W(0X14, ctx->r2) = ctx->f18.u32l;
    // 0x8005F50C: addu        $t9, $s2, $t0
    ctx->r25 = ADD32(ctx->r18, ctx->r8);
    // 0x8005F510: mflo        $t7
    ctx->r15 = lo;
    // 0x8005F514: addu        $t6, $t5, $t7
    ctx->r14 = ADD32(ctx->r13, ctx->r15);
    // 0x8005F518: addu        $t1, $t6, $s1
    ctx->r9 = ADD32(ctx->r14, ctx->r17);
    // 0x8005F51C: lwc1        $f4, 0x15E4($t1)
    ctx->f4.u32l = MEM_W(ctx->r9, 0X15E4);
    // 0x8005F520: nop

    // 0x8005F524: swc1        $f4, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->f4.u32l;
    // 0x8005F528: lwc1        $f6, 0x15EC($t1)
    ctx->f6.u32l = MEM_W(ctx->r9, 0X15EC);
    // 0x8005F52C: nop

    // 0x8005F530: swc1        $f6, 0xC($v0)
    MEM_W(0XC, ctx->r2) = ctx->f6.u32l;
    // 0x8005F534: sw          $a3, 0x4($t9)
    MEM_W(0X4, ctx->r25) = ctx->r7;
L_8005F538:
    // 0x8005F538: addiu       $v1, $v1, 0x2
    ctx->r3 = ADD32(ctx->r3, 0X2);
    // 0x8005F53C: bne         $v1, $s3, L_8005F438
    if (ctx->r3 != ctx->r19) {
        // 0x8005F540: addiu       $v0, $v0, 0x34
        ctx->r2 = ADD32(ctx->r2, 0X34);
            goto L_8005F438;
    }
    // 0x8005F540: addiu       $v0, $v0, 0x34
    ctx->r2 = ADD32(ctx->r2, 0X34);
L_8005F544:
    // 0x8005F544: lw          $s0, 0x8($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X8);
    // 0x8005F548: lw          $s1, 0xC($sp)
    ctx->r17 = MEM_W(ctx->r29, 0XC);
    // 0x8005F54C: lw          $s2, 0x10($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X10);
    // 0x8005F550: lw          $s3, 0x14($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X14);
    // 0x8005F554: jr          $ra
    // 0x8005F558: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x8005F558: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8005F55C: nop

;}
