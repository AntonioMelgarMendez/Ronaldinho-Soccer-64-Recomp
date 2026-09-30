#include "iss64_recomp.h"
#include "funcs.h"

RECOMP_FUNC void ovl_8024B800_func_8026B0FC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8026B0FC: mul.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f4.fl, ctx->f6.fl);
    // 0x8026B100: cvt.s.w     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.fl = CVT_S_W(ctx->f10.u32l);
    // 0x8026B104: add.s       $f18, $f16, $f8
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f18.fl = ctx->f16.fl + ctx->f8.fl;
    // 0x8026B108: cfc1        $t9, $FpcCsr
    ctx->r25 = get_cop1_cs();
    // 0x8026B10C: nop

    // 0x8026B110: ori         $at, $t9, 0x3
    ctx->r1 = ctx->r25 | 0X3;
    // 0x8026B114: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x8026B118: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x8026B11C: nop

    // 0x8026B120: cvt.w.s     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    ctx->f4.u32l = CVT_W_S(ctx->f18.fl);
    // 0x8026B124: mfc1        $v1, $f4
    ctx->r3 = (int32_t)ctx->f4.u32l;
    // 0x8026B128: ctc1        $t9, $FpcCsr
    set_cop1_cs(ctx->r25);
    // 0x8026B12C: sll         $t0, $v1, 16
    ctx->r8 = S32(ctx->r3 << 16);
    // 0x8026B130: sra         $t1, $t0, 16
    ctx->r9 = S32(SIGNED(ctx->r8) >> 16);
    // 0x8026B134: slt         $at, $a1, $t1
    ctx->r1 = SIGNED(ctx->r5) < SIGNED(ctx->r9) ? 1 : 0;
    // 0x8026B138: beq         $at, $zero, L_8026B148
    if (ctx->r1 == 0) {
        // 0x8026B13C: nop
    
            goto L_8026B148;
    }
    // 0x8026B13C: nop

    // 0x8026B140: lw          $v0, 0xC8($a0)
    ctx->r2 = MEM_W(ctx->r4, 0XC8);
    // 0x8026B144: sh          $t1, 0x2E($a0)
    MEM_H(0X2E, ctx->r4) = ctx->r9;
L_8026B148:
    // 0x8026B148: lw          $a1, 0x8D4($v0)
    ctx->r5 = MEM_W(ctx->r2, 0X8D4);
    // 0x8026B14C: jal         0x8026CB48
    // 0x8026B150: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    ovl_8024B800_func_8026CB48(rdram, ctx);
        goto after_0;
    // 0x8026B150: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x8026B154: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x8026B158: lui         $t2, 0x8009
    ctx->r10 = S32(0X8009 << 16);
    // 0x8026B15C: lh          $v0, 0x30($a0)
    ctx->r2 = MEM_H(ctx->r4, 0X30);
    // 0x8026B160: lw          $t2, 0x3B20($t2)
    ctx->r10 = MEM_W(ctx->r10, 0X3B20);
    // 0x8026B164: mtc1        $v0, $f10
    ctx->f10.u32l = ctx->r2;
    // 0x8026B168: lwc1        $f6, 0x0($t2)
    ctx->f6.u32l = MEM_W(ctx->r10, 0X0);
    // 0x8026B16C: cvt.s.w     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.fl = CVT_S_W(ctx->f10.u32l);
    // 0x8026B170: lui         $at, 0x8028
    ctx->r1 = S32(0X8028 << 16);
    // 0x8026B174: lwc1        $f18, -0x2AAC($at)
    ctx->f18.u32l = MEM_W(ctx->r1, -0X2AAC);
    // 0x8026B178: sub.s       $f8, $f6, $f16
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f8.fl = ctx->f6.fl - ctx->f16.fl;
    // 0x8026B17C: mul.s       $f4, $f8, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = MUL_S(ctx->f8.fl, ctx->f18.fl);
    // 0x8026B180: cfc1        $t3, $FpcCsr
    ctx->r11 = get_cop1_cs();
    // 0x8026B184: nop

    // 0x8026B188: ori         $at, $t3, 0x3
    ctx->r1 = ctx->r11 | 0X3;
    // 0x8026B18C: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x8026B190: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x8026B194: nop

    // 0x8026B198: cvt.w.s     $f10, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    ctx->f10.u32l = CVT_W_S(ctx->f4.fl);
    // 0x8026B19C: mfc1        $t6, $f10
    ctx->r14 = (int32_t)ctx->f10.u32l;
    // 0x8026B1A0: ctc1        $t3, $FpcCsr
    set_cop1_cs(ctx->r11);
    // 0x8026B1A4: addu        $t7, $v0, $t6
    ctx->r15 = ADD32(ctx->r2, ctx->r14);
    // 0x8026B1A8: jal         0x8026AA98
    // 0x8026B1AC: sh          $t7, 0x30($a0)
    MEM_H(0X30, ctx->r4) = ctx->r15;
    ovl_8024B800_func_8026AA98(rdram, ctx);
        goto after_1;
    // 0x8026B1AC: sh          $t7, 0x30($a0)
    MEM_H(0X30, ctx->r4) = ctx->r15;
    after_1:
    // 0x8026B1B0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8026B1B4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8026B1B8: jr          $ra
    // 0x8026B1BC: nop

    return;
    // 0x8026B1BC: nop

;}
RECOMP_FUNC void ovl_8024B800_func_8026B1C0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8026B1C0: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x8026B1C4: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x8026B1C8: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x8026B1CC: lw          $t6, 0xC8($a0)
    ctx->r14 = MEM_W(ctx->r4, 0XC8);
    // 0x8026B1D0: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x8026B1D4: lh          $t7, 0x8B0($t6)
    ctx->r15 = MEM_H(ctx->r14, 0X8B0);
    // 0x8026B1D8: addiu       $t9, $zero, -0x17B
    ctx->r25 = ADD32(0, -0X17B);
    // 0x8026B1DC: addiu       $t8, $t7, -0x3C
    ctx->r24 = ADD32(ctx->r15, -0X3C);
    // 0x8026B1E0: sh          $t8, 0x2E($a0)
    MEM_H(0X2E, ctx->r4) = ctx->r24;
    // 0x8026B1E4: lh          $v0, 0x2E($a0)
    ctx->r2 = MEM_H(ctx->r4, 0X2E);
    // 0x8026B1E8: addiu       $t0, $zero, -0x1D0
    ctx->r8 = ADD32(0, -0X1D0);
    // 0x8026B1EC: slti        $at, $v0, -0x184
    ctx->r1 = SIGNED(ctx->r2) < -0X184 ? 1 : 0;
    // 0x8026B1F0: bne         $at, $zero, L_8026B204
    if (ctx->r1 != 0) {
        // 0x8026B1F4: lui         $a2, 0x408A
        ctx->r6 = S32(0X408A << 16);
            goto L_8026B204;
    }
    // 0x8026B1F4: lui         $a2, 0x408A
    ctx->r6 = S32(0X408A << 16);
    // 0x8026B1F8: sh          $t9, 0x2E($a0)
    MEM_H(0X2E, ctx->r4) = ctx->r25;
    // 0x8026B1FC: lh          $v0, 0x2E($a0)
    ctx->r2 = MEM_H(ctx->r4, 0X2E);
    // 0x8026B200: nop

L_8026B204:
    // 0x8026B204: slti        $at, $v0, -0x1D0
    ctx->r1 = SIGNED(ctx->r2) < -0X1D0 ? 1 : 0;
    // 0x8026B208: beq         $at, $zero, L_8026B21C
    if (ctx->r1 == 0) {
        // 0x8026B20C: ori         $a2, $a2, 0x3AE6
        ctx->r6 = ctx->r6 | 0X3AE6;
            goto L_8026B21C;
    }
    // 0x8026B20C: ori         $a2, $a2, 0x3AE6
    ctx->r6 = ctx->r6 | 0X3AE6;
    // 0x8026B210: sh          $t0, 0x2E($s0)
    MEM_H(0X2E, ctx->r16) = ctx->r8;
    // 0x8026B214: lh          $v0, 0x2E($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X2E);
    // 0x8026B218: nop

L_8026B21C:
    // 0x8026B21C: addiu       $t1, $v0, 0x1FD
    ctx->r9 = ADD32(ctx->r2, 0X1FD);
    // 0x8026B220: mtc1        $t1, $f4
    ctx->f4.u32l = ctx->r9;
    // 0x8026B224: lui         $at, 0x8028
    ctx->r1 = S32(0X8028 << 16);
    // 0x8026B228: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x8026B22C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x8026B230: swc1        $f6, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f6.u32l;
    // 0x8026B234: lw          $v1, 0xC8($s0)
    ctx->r3 = MEM_W(ctx->r16, 0XC8);
    // 0x8026B238: nop

    // 0x8026B23C: lhu         $t2, 0x8($v1)
    ctx->r10 = MEM_HU(ctx->r3, 0X8);
    // 0x8026B240: nop

    // 0x8026B244: andi        $t3, $t2, 0x1
    ctx->r11 = ctx->r10 & 0X1;
    // 0x8026B248: beq         $t3, $zero, L_8026B280
    if (ctx->r11 == 0) {
        // 0x8026B24C: nop
    
            goto L_8026B280;
    }
    // 0x8026B24C: nop

    // 0x8026B250: lui         $at, 0x8028
    ctx->r1 = S32(0X8028 << 16);
    // 0x8026B254: lwc1        $f14, -0x2AA8($at)
    ctx->f14.u32l = MEM_W(ctx->r1, -0X2AA8);
    // 0x8026B258: lui         $at, 0xBF80
    ctx->r1 = S32(0XBF80 << 16);
    // 0x8026B25C: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x8026B260: lwc1        $f12, 0x8C0($v1)
    ctx->f12.u32l = MEM_W(ctx->r3, 0X8C0);
    // 0x8026B264: lui         $a2, 0x3F96
    ctx->r6 = S32(0X3F96 << 16);
    // 0x8026B268: ori         $a2, $a2, 0xCBE4
    ctx->r6 = ctx->r6 | 0XCBE4;
    // 0x8026B26C: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    // 0x8026B270: jal         0x802A28B0
    // 0x8026B274: swc1        $f8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f8.u32l;
    LOOKUP_FUNC(0x802A28B0)(rdram, ctx);
        goto after_0;
    // 0x8026B274: swc1        $f8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f8.u32l;
    after_0:
    // 0x8026B278: b           L_8026B29C
    // 0x8026B27C: mov.s       $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    ctx->f12.fl = ctx->f0.fl;
        goto L_8026B29C;
    // 0x8026B27C: mov.s       $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    ctx->f12.fl = ctx->f0.fl;
L_8026B280:
    // 0x8026B280: lwc1        $f14, -0x2AA4($at)
    ctx->f14.u32l = MEM_W(ctx->r1, -0X2AA4);
    // 0x8026B284: lui         $at, 0xBF80
    ctx->r1 = S32(0XBF80 << 16);
    // 0x8026B288: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x8026B28C: lwc1        $f12, 0x8C0($v1)
    ctx->f12.u32l = MEM_W(ctx->r3, 0X8C0);
    // 0x8026B290: jal         0x802A28B0
    // 0x8026B294: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    LOOKUP_FUNC(0x802A28B0)(rdram, ctx);
        goto after_1;
    // 0x8026B294: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    after_1:
    // 0x8026B298: mov.s       $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    ctx->f12.fl = ctx->f0.fl;
L_8026B29C:
    // 0x8026B29C: jal         0x80080E80
    // 0x8026B2A0: swc1        $f12, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f12.u32l;
    func_80080E80(rdram, ctx);
        goto after_2;
    // 0x8026B2A0: swc1        $f12, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f12.u32l;
    after_2:
    // 0x8026B2A4: lwc1        $f12, 0x30($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X30);
    // 0x8026B2A8: jal         0x80081040
    // 0x8026B2AC: swc1        $f0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f0.u32l;
    func_80081040(rdram, ctx);
        goto after_3;
    // 0x8026B2AC: swc1        $f0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f0.u32l;
    after_3:
    // 0x8026B2B0: jal         0x80272AEC
    // 0x8026B2B4: mov.s       $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    ctx->f12.fl = ctx->f0.fl;
    ovl_8024B800_func_80272AEC(rdram, ctx);
        goto after_4;
    // 0x8026B2B4: mov.s       $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    ctx->f12.fl = ctx->f0.fl;
    after_4:
    // 0x8026B2B8: lwc1        $f16, 0x34($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X34);
    // 0x8026B2BC: lwc1        $f18, 0x28($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X28);
    // 0x8026B2C0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8026B2C4: mul.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = MUL_S(ctx->f16.fl, ctx->f18.fl);
    // 0x8026B2C8: nop

    // 0x8026B2CC: div.s       $f6, $f4, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = DIV_S(ctx->f4.fl, ctx->f0.fl);
    // 0x8026B2D0: cfc1        $t4, $FpcCsr
    ctx->r12 = get_cop1_cs();
    // 0x8026B2D4: nop

    // 0x8026B2D8: ori         $at, $t4, 0x3
    ctx->r1 = ctx->r12 | 0X3;
    // 0x8026B2DC: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x8026B2E0: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x8026B2E4: nop

    // 0x8026B2E8: cvt.w.s     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.u32l = CVT_W_S(ctx->f6.fl);
    // 0x8026B2EC: mfc1        $t5, $f8
    ctx->r13 = (int32_t)ctx->f8.u32l;
    // 0x8026B2F0: ctc1        $t4, $FpcCsr
    set_cop1_cs(ctx->r12);
    // 0x8026B2F4: jal         0x8026AA98
    // 0x8026B2F8: sh          $t5, 0x30($s0)
    MEM_H(0X30, ctx->r16) = ctx->r13;
    ovl_8024B800_func_8026AA98(rdram, ctx);
        goto after_5;
    // 0x8026B2F8: sh          $t5, 0x30($s0)
    MEM_H(0X30, ctx->r16) = ctx->r13;
    after_5:
    // 0x8026B2FC: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x8026B300: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x8026B304: jr          $ra
    // 0x8026B308: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    return;
    // 0x8026B308: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void ovl_8024B800_func_8026B240(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8026B240: nop

    // 0x8026B244: andi        $t3, $t2, 0x1
    ctx->r11 = ctx->r10 & 0X1;
    // 0x8026B248: beq         $t3, $zero, L_8026B280
    if (ctx->r11 == 0) {
        // 0x8026B24C: nop
    
            goto L_8026B280;
    }
    // 0x8026B24C: nop

    // 0x8026B250: lui         $at, 0x8028
    ctx->r1 = S32(0X8028 << 16);
    // 0x8026B254: lwc1        $f14, -0x2AA8($at)
    ctx->f14.u32l = MEM_W(ctx->r1, -0X2AA8);
    // 0x8026B258: lui         $at, 0xBF80
    ctx->r1 = S32(0XBF80 << 16);
    // 0x8026B25C: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x8026B260: lwc1        $f12, 0x8C0($v1)
    ctx->f12.u32l = MEM_W(ctx->r3, 0X8C0);
    // 0x8026B264: lui         $a2, 0x3F96
    ctx->r6 = S32(0X3F96 << 16);
    // 0x8026B268: ori         $a2, $a2, 0xCBE4
    ctx->r6 = ctx->r6 | 0XCBE4;
    // 0x8026B26C: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    // 0x8026B270: jal         0x802A28B0
    // 0x8026B274: swc1        $f8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f8.u32l;
    LOOKUP_FUNC(0x802A28B0)(rdram, ctx);
        goto after_0;
    // 0x8026B274: swc1        $f8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f8.u32l;
    after_0:
    // 0x8026B278: b           L_8026B29C
    // 0x8026B27C: mov.s       $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    ctx->f12.fl = ctx->f0.fl;
        goto L_8026B29C;
    // 0x8026B27C: mov.s       $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    ctx->f12.fl = ctx->f0.fl;
L_8026B280:
    // 0x8026B280: lwc1        $f14, -0x2AA4($at)
    ctx->f14.u32l = MEM_W(ctx->r1, -0X2AA4);
    // 0x8026B284: lui         $at, 0xBF80
    ctx->r1 = S32(0XBF80 << 16);
    // 0x8026B288: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x8026B28C: lwc1        $f12, 0x8C0($v1)
    ctx->f12.u32l = MEM_W(ctx->r3, 0X8C0);
    // 0x8026B290: jal         0x802A28B0
    // 0x8026B294: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    LOOKUP_FUNC(0x802A28B0)(rdram, ctx);
        goto after_1;
    // 0x8026B294: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    after_1:
    // 0x8026B298: mov.s       $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    ctx->f12.fl = ctx->f0.fl;
L_8026B29C:
    // 0x8026B29C: jal         0x80080E80
    // 0x8026B2A0: swc1        $f12, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f12.u32l;
    func_80080E80(rdram, ctx);
        goto after_2;
    // 0x8026B2A0: swc1        $f12, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f12.u32l;
    after_2:
    // 0x8026B2A4: lwc1        $f12, 0x30($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X30);
    // 0x8026B2A8: jal         0x80081040
    // 0x8026B2AC: swc1        $f0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f0.u32l;
    func_80081040(rdram, ctx);
        goto after_3;
    // 0x8026B2AC: swc1        $f0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f0.u32l;
    after_3:
    // 0x8026B2B0: jal         0x80272AEC
    // 0x8026B2B4: mov.s       $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    ctx->f12.fl = ctx->f0.fl;
    ovl_8024B800_func_80272AEC(rdram, ctx);
        goto after_4;
    // 0x8026B2B4: mov.s       $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    ctx->f12.fl = ctx->f0.fl;
    after_4:
    // 0x8026B2B8: lwc1        $f16, 0x34($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X34);
    // 0x8026B2BC: lwc1        $f18, 0x28($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X28);
    // 0x8026B2C0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8026B2C4: mul.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = MUL_S(ctx->f16.fl, ctx->f18.fl);
    // 0x8026B2C8: nop

    // 0x8026B2CC: div.s       $f6, $f4, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = DIV_S(ctx->f4.fl, ctx->f0.fl);
    // 0x8026B2D0: cfc1        $t4, $FpcCsr
    ctx->r12 = get_cop1_cs();
    // 0x8026B2D4: nop

    // 0x8026B2D8: ori         $at, $t4, 0x3
    ctx->r1 = ctx->r12 | 0X3;
    // 0x8026B2DC: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x8026B2E0: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x8026B2E4: nop

    // 0x8026B2E8: cvt.w.s     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.u32l = CVT_W_S(ctx->f6.fl);
    // 0x8026B2EC: mfc1        $t5, $f8
    ctx->r13 = (int32_t)ctx->f8.u32l;
    // 0x8026B2F0: ctc1        $t4, $FpcCsr
    set_cop1_cs(ctx->r12);
    // 0x8026B2F4: jal         0x8026AA98
    // 0x8026B2F8: sh          $t5, 0x30($s0)
    MEM_H(0X30, ctx->r16) = ctx->r13;
    ovl_8024B800_func_8026AA98(rdram, ctx);
        goto after_5;
    // 0x8026B2F8: sh          $t5, 0x30($s0)
    MEM_H(0X30, ctx->r16) = ctx->r13;
    after_5:
    // 0x8026B2FC: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x8026B300: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x8026B304: jr          $ra
    // 0x8026B308: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    return;
    // 0x8026B308: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void ovl_8024B800_func_8026B304(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8026B304: jr          $ra
    // 0x8026B308: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    return;
    // 0x8026B308: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void ovl_8024B800_func_8026B30C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8026B30C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8026B310: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8026B314: jal         0x8026CC18
    // 0x8026B318: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    ovl_8024B800_func_8026CC18(rdram, ctx);
        goto after_0;
    // 0x8026B318: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x8026B31C: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x8026B320: nop

    // 0x8026B324: lw          $v1, 0xC8($a0)
    ctx->r3 = MEM_W(ctx->r4, 0XC8);
    // 0x8026B328: lh          $a1, 0x2E($a0)
    ctx->r5 = MEM_H(ctx->r4, 0X2E);
    // 0x8026B32C: lh          $v0, 0x8B0($v1)
    ctx->r2 = MEM_H(ctx->r3, 0X8B0);
    // 0x8026B330: nop

    // 0x8026B334: addiu       $v0, $v0, -0x64
    ctx->r2 = ADD32(ctx->r2, -0X64);
    // 0x8026B338: sll         $t6, $v0, 16
    ctx->r14 = S32(ctx->r2 << 16);
    // 0x8026B33C: sra         $t7, $t6, 16
    ctx->r15 = S32(SIGNED(ctx->r14) >> 16);
    // 0x8026B340: slt         $at, $t7, $a1
    ctx->r1 = SIGNED(ctx->r15) < SIGNED(ctx->r5) ? 1 : 0;
    // 0x8026B344: beq         $at, $zero, L_8026B35C
    if (ctx->r1 == 0) {
        // 0x8026B348: nop
    
            goto L_8026B35C;
    }
    // 0x8026B348: nop

    // 0x8026B34C: sh          $t7, 0x2E($a0)
    MEM_H(0X2E, ctx->r4) = ctx->r15;
    // 0x8026B350: lh          $a1, 0x2E($a0)
    ctx->r5 = MEM_H(ctx->r4, 0X2E);
    // 0x8026B354: lw          $v1, 0xC8($a0)
    ctx->r3 = MEM_W(ctx->r4, 0XC8);
    // 0x8026B358: nop

L_8026B35C:
    // 0x8026B35C: lh          $v0, 0x8CC($v1)
    ctx->r2 = MEM_H(ctx->r3, 0X8CC);
    // 0x8026B360: nop

    // 0x8026B364: addiu       $v0, $v0, 0x3C
    ctx->r2 = ADD32(ctx->r2, 0X3C);
    // 0x8026B368: sll         $t8, $v0, 16
    ctx->r24 = S32(ctx->r2 << 16);
    // 0x8026B36C: sra         $t9, $t8, 16
    ctx->r25 = S32(SIGNED(ctx->r24) >> 16);
    // 0x8026B370: slt         $at, $a1, $t9
    ctx->r1 = SIGNED(ctx->r5) < SIGNED(ctx->r25) ? 1 : 0;
    // 0x8026B374: beq         $at, $zero, L_8026B384
    if (ctx->r1 == 0) {
        // 0x8026B378: nop
    
            goto L_8026B384;
    }
    // 0x8026B378: nop

    // 0x8026B37C: lw          $v1, 0xC8($a0)
    ctx->r3 = MEM_W(ctx->r4, 0XC8);
    // 0x8026B380: sh          $t9, 0x2E($a0)
    MEM_H(0X2E, ctx->r4) = ctx->r25;
L_8026B384:
    // 0x8026B384: lw          $a1, 0x8D4($v1)
    ctx->r5 = MEM_W(ctx->r3, 0X8D4);
    // 0x8026B388: jal         0x8026CB48
    // 0x8026B38C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    ovl_8024B800_func_8026CB48(rdram, ctx);
        goto after_1;
    // 0x8026B38C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_1:
    // 0x8026B390: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x8026B394: lui         $t0, 0x8009
    ctx->r8 = S32(0X8009 << 16);
    // 0x8026B398: lh          $v0, 0x30($a0)
    ctx->r2 = MEM_H(ctx->r4, 0X30);
    // 0x8026B39C: lw          $t0, 0x3B20($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X3B20);
    // 0x8026B3A0: mtc1        $v0, $f6
    ctx->f6.u32l = ctx->r2;
    // 0x8026B3A4: lwc1        $f4, 0x0($t0)
    ctx->f4.u32l = MEM_W(ctx->r8, 0X0);
    // 0x8026B3A8: cvt.s.w     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.fl = CVT_S_W(ctx->f6.u32l);
    // 0x8026B3AC: lui         $at, 0x8028
    ctx->r1 = S32(0X8028 << 16);
    // 0x8026B3B0: lwc1        $f16, -0x2AA0($at)
    ctx->f16.u32l = MEM_W(ctx->r1, -0X2AA0);
    // 0x8026B3B4: sub.s       $f10, $f4, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f4.fl - ctx->f8.fl;
    // 0x8026B3B8: mul.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = MUL_S(ctx->f10.fl, ctx->f16.fl);
    // 0x8026B3BC: cfc1        $t1, $FpcCsr
    ctx->r9 = get_cop1_cs();
    // 0x8026B3C0: nop

    // 0x8026B3C4: ori         $at, $t1, 0x3
    ctx->r1 = ctx->r9 | 0X3;
    // 0x8026B3C8: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x8026B3CC: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x8026B3D0: nop

    // 0x8026B3D4: cvt.w.s     $f6, $f18
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    ctx->f6.u32l = CVT_W_S(ctx->f18.fl);
    // 0x8026B3D8: mfc1        $t4, $f6
    ctx->r12 = (int32_t)ctx->f6.u32l;
    // 0x8026B3DC: ctc1        $t1, $FpcCsr
    set_cop1_cs(ctx->r9);
    // 0x8026B3E0: addu        $t5, $v0, $t4
    ctx->r13 = ADD32(ctx->r2, ctx->r12);
    // 0x8026B3E4: jal         0x8026AA98
    // 0x8026B3E8: sh          $t5, 0x30($a0)
    MEM_H(0X30, ctx->r4) = ctx->r13;
    ovl_8024B800_func_8026AA98(rdram, ctx);
        goto after_2;
    // 0x8026B3E8: sh          $t5, 0x30($a0)
    MEM_H(0X30, ctx->r4) = ctx->r13;
    after_2:
    // 0x8026B3EC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8026B3F0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8026B3F4: jr          $ra
    // 0x8026B3F8: nop

    return;
    // 0x8026B3F8: nop

;}
RECOMP_FUNC void ovl_8024B800_func_8026B3FC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8026B3FC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8026B400: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8026B404: lw          $v0, 0xC8($a0)
    ctx->r2 = MEM_W(ctx->r4, 0XC8);
    // 0x8026B408: lui         $at, 0x4316
    ctx->r1 = S32(0X4316 << 16);
    // 0x8026B40C: lh          $t6, 0x8CC($v0)
    ctx->r14 = MEM_H(ctx->r2, 0X8CC);
    // 0x8026B410: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x8026B414: lwc1        $f6, 0x8D8($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0X8D8);
    // 0x8026B418: mtc1        $t6, $f10
    ctx->f10.u32l = ctx->r14;
    // 0x8026B41C: mul.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f4.fl, ctx->f6.fl);
    // 0x8026B420: cvt.s.w     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.fl = CVT_S_W(ctx->f10.u32l);
    // 0x8026B424: add.s       $f18, $f16, $f8
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f18.fl = ctx->f16.fl + ctx->f8.fl;
    // 0x8026B428: cfc1        $t7, $FpcCsr
    ctx->r15 = get_cop1_cs();
    // 0x8026B42C: nop

    // 0x8026B430: ori         $at, $t7, 0x3
    ctx->r1 = ctx->r15 | 0X3;
    // 0x8026B434: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x8026B438: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x8026B43C: nop

    // 0x8026B440: cvt.w.s     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    ctx->f4.u32l = CVT_W_S(ctx->f18.fl);
    // 0x8026B444: mfc1        $t8, $f4
    ctx->r24 = (int32_t)ctx->f4.u32l;
    // 0x8026B448: ctc1        $t7, $FpcCsr
    set_cop1_cs(ctx->r15);
    // 0x8026B44C: sh          $t8, 0x2E($a0)
    MEM_H(0X2E, ctx->r4) = ctx->r24;
    // 0x8026B450: lw          $a1, 0x8D4($v0)
    ctx->r5 = MEM_W(ctx->r2, 0X8D4);
    // 0x8026B454: jal         0x8026CB48
    // 0x8026B458: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    ovl_8024B800_func_8026CB48(rdram, ctx);
        goto after_0;
    // 0x8026B458: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x8026B45C: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x8026B460: lui         $t9, 0x8009
    ctx->r25 = S32(0X8009 << 16);
    // 0x8026B464: lh          $v0, 0x30($a0)
    ctx->r2 = MEM_H(ctx->r4, 0X30);
    // 0x8026B468: lw          $t9, 0x3B20($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X3B20);
    // 0x8026B46C: mtc1        $v0, $f10
    ctx->f10.u32l = ctx->r2;
    // 0x8026B470: lwc1        $f6, 0x0($t9)
    ctx->f6.u32l = MEM_W(ctx->r25, 0X0);
    // 0x8026B474: cvt.s.w     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.fl = CVT_S_W(ctx->f10.u32l);
    // 0x8026B478: lui         $at, 0x8028
    ctx->r1 = S32(0X8028 << 16);
    // 0x8026B47C: lwc1        $f18, -0x2A9C($at)
    ctx->f18.u32l = MEM_W(ctx->r1, -0X2A9C);
    // 0x8026B480: sub.s       $f8, $f6, $f16
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f8.fl = ctx->f6.fl - ctx->f16.fl;
    // 0x8026B484: mul.s       $f4, $f8, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = MUL_S(ctx->f8.fl, ctx->f18.fl);
    // 0x8026B488: cfc1        $t0, $FpcCsr
    ctx->r8 = get_cop1_cs();
    // 0x8026B48C: nop

    // 0x8026B490: ori         $at, $t0, 0x3
    ctx->r1 = ctx->r8 | 0X3;
    // 0x8026B494: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x8026B498: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x8026B49C: nop

    // 0x8026B4A0: cvt.w.s     $f10, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    ctx->f10.u32l = CVT_W_S(ctx->f4.fl);
    // 0x8026B4A4: mfc1        $t3, $f10
    ctx->r11 = (int32_t)ctx->f10.u32l;
    // 0x8026B4A8: ctc1        $t0, $FpcCsr
    set_cop1_cs(ctx->r8);
    // 0x8026B4AC: addu        $t4, $v0, $t3
    ctx->r12 = ADD32(ctx->r2, ctx->r11);
    // 0x8026B4B0: jal         0x8026AA98
    // 0x8026B4B4: sh          $t4, 0x30($a0)
    MEM_H(0X30, ctx->r4) = ctx->r12;
    ovl_8024B800_func_8026AA98(rdram, ctx);
        goto after_1;
    // 0x8026B4B4: sh          $t4, 0x30($a0)
    MEM_H(0X30, ctx->r4) = ctx->r12;
    after_1:
    // 0x8026B4B8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8026B4BC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8026B4C0: jr          $ra
    // 0x8026B4C4: nop

    return;
    // 0x8026B4C4: nop

;}
RECOMP_FUNC void ovl_8024B800_func_8026B4C8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8026B4C8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8026B4CC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8026B4D0: lw          $v0, 0xC8($a0)
    ctx->r2 = MEM_W(ctx->r4, 0XC8);
    // 0x8026B4D4: nop

    // 0x8026B4D8: lh          $t6, 0x8B0($v0)
    ctx->r14 = MEM_H(ctx->r2, 0X8B0);
    // 0x8026B4DC: nop

    // 0x8026B4E0: addiu       $t7, $t6, 0x50
    ctx->r15 = ADD32(ctx->r14, 0X50);
    // 0x8026B4E4: sh          $t7, 0x2E($a0)
    MEM_H(0X2E, ctx->r4) = ctx->r15;
    // 0x8026B4E8: lh          $v1, 0x8CA($v0)
    ctx->r3 = MEM_H(ctx->r2, 0X8CA);
    // 0x8026B4EC: lh          $t8, 0x2E($a0)
    ctx->r24 = MEM_H(ctx->r4, 0X2E);
    // 0x8026B4F0: addiu       $v1, $v1, -0x50
    ctx->r3 = ADD32(ctx->r3, -0X50);
    // 0x8026B4F4: slt         $at, $v1, $t8
    ctx->r1 = SIGNED(ctx->r3) < SIGNED(ctx->r24) ? 1 : 0;
    // 0x8026B4F8: beq         $at, $zero, L_8026B504
    if (ctx->r1 == 0) {
        // 0x8026B4FC: nop
    
            goto L_8026B504;
    }
    // 0x8026B4FC: nop

    // 0x8026B500: sh          $v1, 0x2E($a0)
    MEM_H(0X2E, ctx->r4) = ctx->r3;
L_8026B504:
    // 0x8026B504: jal         0x8026AACC
    // 0x8026B508: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    ovl_8024B800_func_8026AACC(rdram, ctx);
        goto after_0;
    // 0x8026B508: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x8026B50C: lui         $t9, 0x8009
    ctx->r25 = S32(0X8009 << 16);
    // 0x8026B510: lw          $t9, 0x3B20($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X3B20);
    // 0x8026B514: lui         $at, 0x4367
    ctx->r1 = S32(0X4367 << 16);
    // 0x8026B518: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x8026B51C: lwc1        $f0, 0x0($t9)
    ctx->f0.u32l = MEM_W(ctx->r25, 0X0);
    // 0x8026B520: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x8026B524: c.lt.s      $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f4.fl < ctx->f0.fl;
    // 0x8026B528: lui         $at, 0xC367
    ctx->r1 = S32(0XC367 << 16);
    // 0x8026B52C: bc1f        L_8026B570
    if (!c1cs) {
        // 0x8026B530: nop
    
            goto L_8026B570;
    }
    // 0x8026B530: nop

    // 0x8026B534: lui         $at, 0x42A0
    ctx->r1 = S32(0X42A0 << 16);
    // 0x8026B538: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x8026B53C: nop

    // 0x8026B540: sub.s       $f8, $f0, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f0.fl - ctx->f6.fl;
    // 0x8026B544: cfc1        $t0, $FpcCsr
    ctx->r8 = get_cop1_cs();
    // 0x8026B548: nop

    // 0x8026B54C: ori         $at, $t0, 0x3
    ctx->r1 = ctx->r8 | 0X3;
    // 0x8026B550: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x8026B554: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x8026B558: nop

    // 0x8026B55C: cvt.w.s     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.u32l = CVT_W_S(ctx->f8.fl);
    // 0x8026B560: mfc1        $t1, $f10
    ctx->r9 = (int32_t)ctx->f10.u32l;
    // 0x8026B564: ctc1        $t0, $FpcCsr
    set_cop1_cs(ctx->r8);
    // 0x8026B568: b           L_8026B650
    // 0x8026B56C: sh          $t1, 0x30($a0)
    MEM_H(0X30, ctx->r4) = ctx->r9;
        goto L_8026B650;
    // 0x8026B56C: sh          $t1, 0x30($a0)
    MEM_H(0X30, ctx->r4) = ctx->r9;
L_8026B570:
    // 0x8026B570: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x8026B574: lui         $at, 0x42A0
    ctx->r1 = S32(0X42A0 << 16);
    // 0x8026B578: c.lt.s      $f0, $f16
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f0.fl < ctx->f16.fl;
    // 0x8026B57C: nop

    // 0x8026B580: bc1f        L_8026B5C0
    if (!c1cs) {
        // 0x8026B584: nop
    
            goto L_8026B5C0;
    }
    // 0x8026B584: nop

    // 0x8026B588: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x8026B58C: nop

    // 0x8026B590: add.s       $f4, $f0, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f0.fl + ctx->f18.fl;
    // 0x8026B594: cfc1        $t2, $FpcCsr
    ctx->r10 = get_cop1_cs();
    // 0x8026B598: nop

    // 0x8026B59C: ori         $at, $t2, 0x3
    ctx->r1 = ctx->r10 | 0X3;
    // 0x8026B5A0: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x8026B5A4: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x8026B5A8: nop

    // 0x8026B5AC: cvt.w.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = CVT_W_S(ctx->f4.fl);
    // 0x8026B5B0: mfc1        $t3, $f6
    ctx->r11 = (int32_t)ctx->f6.u32l;
    // 0x8026B5B4: ctc1        $t2, $FpcCsr
    set_cop1_cs(ctx->r10);
    // 0x8026B5B8: b           L_8026B650
    // 0x8026B5BC: sh          $t3, 0x30($a0)
    MEM_H(0X30, ctx->r4) = ctx->r11;
        goto L_8026B650;
    // 0x8026B5BC: sh          $t3, 0x30($a0)
    MEM_H(0X30, ctx->r4) = ctx->r11;
L_8026B5C0:
    // 0x8026B5C0: mtc1        $v0, $f8
    ctx->f8.u32l = ctx->r2;
    // 0x8026B5C4: lui         $at, 0x42A0
    ctx->r1 = S32(0X42A0 << 16);
    // 0x8026B5C8: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x8026B5CC: c.lt.s      $f0, $f10
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f0.fl < ctx->f10.fl;
    // 0x8026B5D0: nop

    // 0x8026B5D4: bc1f        L_8026B618
    if (!c1cs) {
        // 0x8026B5D8: nop
    
            goto L_8026B618;
    }
    // 0x8026B5D8: nop

    // 0x8026B5DC: lui         $at, 0x42A0
    ctx->r1 = S32(0X42A0 << 16);
    // 0x8026B5E0: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x8026B5E4: nop

    // 0x8026B5E8: add.s       $f18, $f0, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f0.fl + ctx->f16.fl;
    // 0x8026B5EC: cfc1        $t4, $FpcCsr
    ctx->r12 = get_cop1_cs();
    // 0x8026B5F0: nop

    // 0x8026B5F4: ori         $at, $t4, 0x3
    ctx->r1 = ctx->r12 | 0X3;
    // 0x8026B5F8: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x8026B5FC: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x8026B600: nop

    // 0x8026B604: cvt.w.s     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    ctx->f4.u32l = CVT_W_S(ctx->f18.fl);
    // 0x8026B608: mfc1        $t5, $f4
    ctx->r13 = (int32_t)ctx->f4.u32l;
    // 0x8026B60C: ctc1        $t4, $FpcCsr
    set_cop1_cs(ctx->r12);
    // 0x8026B610: b           L_8026B650
    // 0x8026B614: sh          $t5, 0x30($a0)
    MEM_H(0X30, ctx->r4) = ctx->r13;
        goto L_8026B650;
    // 0x8026B614: sh          $t5, 0x30($a0)
    MEM_H(0X30, ctx->r4) = ctx->r13;
L_8026B618:
    // 0x8026B618: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x8026B61C: nop

    // 0x8026B620: sub.s       $f8, $f0, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f0.fl - ctx->f6.fl;
    // 0x8026B624: cfc1        $t6, $FpcCsr
    ctx->r14 = get_cop1_cs();
    // 0x8026B628: nop

    // 0x8026B62C: ori         $at, $t6, 0x3
    ctx->r1 = ctx->r14 | 0X3;
    // 0x8026B630: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x8026B634: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x8026B638: nop

    // 0x8026B63C: cvt.w.s     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.u32l = CVT_W_S(ctx->f8.fl);
    // 0x8026B640: mfc1        $t7, $f10
    ctx->r15 = (int32_t)ctx->f10.u32l;
    // 0x8026B644: ctc1        $t6, $FpcCsr
    set_cop1_cs(ctx->r14);
    // 0x8026B648: sh          $t7, 0x30($a0)
    MEM_H(0X30, ctx->r4) = ctx->r15;
    // 0x8026B64C: nop

L_8026B650:
    // 0x8026B650: jal         0x8026AA98
    // 0x8026B654: nop

    ovl_8024B800_func_8026AA98(rdram, ctx);
        goto after_1;
    // 0x8026B654: nop

    after_1:
    // 0x8026B658: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8026B65C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8026B660: jr          $ra
    // 0x8026B664: nop

    return;
    // 0x8026B664: nop

;}
RECOMP_FUNC void ovl_8024B800_func_8026B504(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8026B504: jal         0x8026AACC
    // 0x8026B508: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    ovl_8024B800_func_8026AACC(rdram, ctx);
        goto after_0;
    // 0x8026B508: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x8026B50C: lui         $t9, 0x8009
    ctx->r25 = S32(0X8009 << 16);
    // 0x8026B510: lw          $t9, 0x3B20($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X3B20);
    // 0x8026B514: lui         $at, 0x4367
    ctx->r1 = S32(0X4367 << 16);
    // 0x8026B518: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x8026B51C: lwc1        $f0, 0x0($t9)
    ctx->f0.u32l = MEM_W(ctx->r25, 0X0);
    // 0x8026B520: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x8026B524: c.lt.s      $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f4.fl < ctx->f0.fl;
    // 0x8026B528: lui         $at, 0xC367
    ctx->r1 = S32(0XC367 << 16);
    // 0x8026B52C: bc1f        L_8026B570
    if (!c1cs) {
        // 0x8026B530: nop
    
            goto L_8026B570;
    }
    // 0x8026B530: nop

    // 0x8026B534: lui         $at, 0x42A0
    ctx->r1 = S32(0X42A0 << 16);
    // 0x8026B538: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x8026B53C: nop

    // 0x8026B540: sub.s       $f8, $f0, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f0.fl - ctx->f6.fl;
    // 0x8026B544: cfc1        $t0, $FpcCsr
    ctx->r8 = get_cop1_cs();
    // 0x8026B548: nop

    // 0x8026B54C: ori         $at, $t0, 0x3
    ctx->r1 = ctx->r8 | 0X3;
    // 0x8026B550: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x8026B554: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x8026B558: nop

    // 0x8026B55C: cvt.w.s     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.u32l = CVT_W_S(ctx->f8.fl);
    // 0x8026B560: mfc1        $t1, $f10
    ctx->r9 = (int32_t)ctx->f10.u32l;
    // 0x8026B564: ctc1        $t0, $FpcCsr
    set_cop1_cs(ctx->r8);
    // 0x8026B568: b           L_8026B650
    // 0x8026B56C: sh          $t1, 0x30($a0)
    MEM_H(0X30, ctx->r4) = ctx->r9;
        goto L_8026B650;
    // 0x8026B56C: sh          $t1, 0x30($a0)
    MEM_H(0X30, ctx->r4) = ctx->r9;
L_8026B570:
    // 0x8026B570: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x8026B574: lui         $at, 0x42A0
    ctx->r1 = S32(0X42A0 << 16);
    // 0x8026B578: c.lt.s      $f0, $f16
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f0.fl < ctx->f16.fl;
    // 0x8026B57C: nop

    // 0x8026B580: bc1f        L_8026B5C0
    if (!c1cs) {
        // 0x8026B584: nop
    
            goto L_8026B5C0;
    }
    // 0x8026B584: nop

    // 0x8026B588: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x8026B58C: nop

    // 0x8026B590: add.s       $f4, $f0, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f0.fl + ctx->f18.fl;
    // 0x8026B594: cfc1        $t2, $FpcCsr
    ctx->r10 = get_cop1_cs();
    // 0x8026B598: nop

    // 0x8026B59C: ori         $at, $t2, 0x3
    ctx->r1 = ctx->r10 | 0X3;
    // 0x8026B5A0: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x8026B5A4: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x8026B5A8: nop

    // 0x8026B5AC: cvt.w.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = CVT_W_S(ctx->f4.fl);
    // 0x8026B5B0: mfc1        $t3, $f6
    ctx->r11 = (int32_t)ctx->f6.u32l;
    // 0x8026B5B4: ctc1        $t2, $FpcCsr
    set_cop1_cs(ctx->r10);
    // 0x8026B5B8: b           L_8026B650
    // 0x8026B5BC: sh          $t3, 0x30($a0)
    MEM_H(0X30, ctx->r4) = ctx->r11;
        goto L_8026B650;
    // 0x8026B5BC: sh          $t3, 0x30($a0)
    MEM_H(0X30, ctx->r4) = ctx->r11;
L_8026B5C0:
    // 0x8026B5C0: mtc1        $v0, $f8
    ctx->f8.u32l = ctx->r2;
    // 0x8026B5C4: lui         $at, 0x42A0
    ctx->r1 = S32(0X42A0 << 16);
    // 0x8026B5C8: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x8026B5CC: c.lt.s      $f0, $f10
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f0.fl < ctx->f10.fl;
    // 0x8026B5D0: nop

    // 0x8026B5D4: bc1f        L_8026B618
    if (!c1cs) {
        // 0x8026B5D8: nop
    
            goto L_8026B618;
    }
    // 0x8026B5D8: nop

    // 0x8026B5DC: lui         $at, 0x42A0
    ctx->r1 = S32(0X42A0 << 16);
    // 0x8026B5E0: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x8026B5E4: nop

    // 0x8026B5E8: add.s       $f18, $f0, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f0.fl + ctx->f16.fl;
    // 0x8026B5EC: cfc1        $t4, $FpcCsr
    ctx->r12 = get_cop1_cs();
    // 0x8026B5F0: nop

    // 0x8026B5F4: ori         $at, $t4, 0x3
    ctx->r1 = ctx->r12 | 0X3;
    // 0x8026B5F8: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x8026B5FC: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x8026B600: nop

    // 0x8026B604: cvt.w.s     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    ctx->f4.u32l = CVT_W_S(ctx->f18.fl);
    // 0x8026B608: mfc1        $t5, $f4
    ctx->r13 = (int32_t)ctx->f4.u32l;
    // 0x8026B60C: ctc1        $t4, $FpcCsr
    set_cop1_cs(ctx->r12);
    // 0x8026B610: b           L_8026B650
    // 0x8026B614: sh          $t5, 0x30($a0)
    MEM_H(0X30, ctx->r4) = ctx->r13;
        goto L_8026B650;
    // 0x8026B614: sh          $t5, 0x30($a0)
    MEM_H(0X30, ctx->r4) = ctx->r13;
L_8026B618:
    // 0x8026B618: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x8026B61C: nop

    // 0x8026B620: sub.s       $f8, $f0, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f0.fl - ctx->f6.fl;
    // 0x8026B624: cfc1        $t6, $FpcCsr
    ctx->r14 = get_cop1_cs();
    // 0x8026B628: nop

    // 0x8026B62C: ori         $at, $t6, 0x3
    ctx->r1 = ctx->r14 | 0X3;
    // 0x8026B630: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x8026B634: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x8026B638: nop

    // 0x8026B63C: cvt.w.s     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.u32l = CVT_W_S(ctx->f8.fl);
    // 0x8026B640: mfc1        $t7, $f10
    ctx->r15 = (int32_t)ctx->f10.u32l;
    // 0x8026B644: ctc1        $t6, $FpcCsr
    set_cop1_cs(ctx->r14);
    // 0x8026B648: sh          $t7, 0x30($a0)
    MEM_H(0X30, ctx->r4) = ctx->r15;
    // 0x8026B64C: nop

L_8026B650:
    // 0x8026B650: jal         0x8026AA98
    // 0x8026B654: nop

    ovl_8024B800_func_8026AA98(rdram, ctx);
        goto after_1;
    // 0x8026B654: nop

    after_1:
    // 0x8026B658: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8026B65C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8026B660: jr          $ra
    // 0x8026B664: nop

    return;
    // 0x8026B664: nop

;}
RECOMP_FUNC void ovl_8024B800_func_8026B5A4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8026B5A4: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x8026B5A8: nop

    // 0x8026B5AC: cvt.w.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = CVT_W_S(ctx->f4.fl);
    // 0x8026B5B0: mfc1        $t3, $f6
    ctx->r11 = (int32_t)ctx->f6.u32l;
    // 0x8026B5B4: ctc1        $t2, $FpcCsr
    set_cop1_cs(ctx->r10);
    // 0x8026B5B8: b           L_8026B650
    // 0x8026B5BC: sh          $t3, 0x30($a0)
    MEM_H(0X30, ctx->r4) = ctx->r11;
        goto L_8026B650;
    // 0x8026B5BC: sh          $t3, 0x30($a0)
    MEM_H(0X30, ctx->r4) = ctx->r11;
    // 0x8026B5C0: mtc1        $v0, $f8
    ctx->f8.u32l = ctx->r2;
    // 0x8026B5C4: lui         $at, 0x42A0
    ctx->r1 = S32(0X42A0 << 16);
    // 0x8026B5C8: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x8026B5CC: c.lt.s      $f0, $f10
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f0.fl < ctx->f10.fl;
    // 0x8026B5D0: nop

    // 0x8026B5D4: bc1f        L_8026B618
    if (!c1cs) {
        // 0x8026B5D8: nop
    
            goto L_8026B618;
    }
    // 0x8026B5D8: nop

    // 0x8026B5DC: lui         $at, 0x42A0
    ctx->r1 = S32(0X42A0 << 16);
    // 0x8026B5E0: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x8026B5E4: nop

    // 0x8026B5E8: add.s       $f18, $f0, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f0.fl + ctx->f16.fl;
    // 0x8026B5EC: cfc1        $t4, $FpcCsr
    ctx->r12 = get_cop1_cs();
    // 0x8026B5F0: nop

    // 0x8026B5F4: ori         $at, $t4, 0x3
    ctx->r1 = ctx->r12 | 0X3;
    // 0x8026B5F8: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x8026B5FC: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x8026B600: nop

    // 0x8026B604: cvt.w.s     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    ctx->f4.u32l = CVT_W_S(ctx->f18.fl);
    // 0x8026B608: mfc1        $t5, $f4
    ctx->r13 = (int32_t)ctx->f4.u32l;
    // 0x8026B60C: ctc1        $t4, $FpcCsr
    set_cop1_cs(ctx->r12);
    // 0x8026B610: b           L_8026B650
    // 0x8026B614: sh          $t5, 0x30($a0)
    MEM_H(0X30, ctx->r4) = ctx->r13;
        goto L_8026B650;
    // 0x8026B614: sh          $t5, 0x30($a0)
    MEM_H(0X30, ctx->r4) = ctx->r13;
L_8026B618:
    // 0x8026B618: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x8026B61C: nop

    // 0x8026B620: sub.s       $f8, $f0, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f0.fl - ctx->f6.fl;
    // 0x8026B624: cfc1        $t6, $FpcCsr
    ctx->r14 = get_cop1_cs();
    // 0x8026B628: nop

    // 0x8026B62C: ori         $at, $t6, 0x3
    ctx->r1 = ctx->r14 | 0X3;
    // 0x8026B630: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x8026B634: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x8026B638: nop

    // 0x8026B63C: cvt.w.s     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.u32l = CVT_W_S(ctx->f8.fl);
    // 0x8026B640: mfc1        $t7, $f10
    ctx->r15 = (int32_t)ctx->f10.u32l;
    // 0x8026B644: ctc1        $t6, $FpcCsr
    set_cop1_cs(ctx->r14);
    // 0x8026B648: sh          $t7, 0x30($a0)
    MEM_H(0X30, ctx->r4) = ctx->r15;
    // 0x8026B64C: nop

L_8026B650:
    // 0x8026B650: jal         0x8026AA98
    // 0x8026B654: nop

    ovl_8024B800_func_8026AA98(rdram, ctx);
        goto after_0;
    // 0x8026B654: nop

    after_0:
    // 0x8026B658: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8026B65C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8026B660: jr          $ra
    // 0x8026B664: nop

    return;
    // 0x8026B664: nop

;}
RECOMP_FUNC void ovl_8024B800_func_8026B654(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8026B654: nop

    // 0x8026B658: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8026B65C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8026B660: jr          $ra
    // 0x8026B664: nop

    return;
    // 0x8026B664: nop

;}
RECOMP_FUNC void ovl_8024B800_func_8026B668(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8026B668: lw          $t6, 0xC8($a1)
    ctx->r14 = MEM_W(ctx->r5, 0XC8);
    // 0x8026B66C: addiu       $sp, $sp, -0x10
    ctx->r29 = ADD32(ctx->r29, -0X10);
    // 0x8026B670: lw          $v0, 0x914($t6)
    ctx->r2 = MEM_W(ctx->r14, 0X914);
    // 0x8026B674: addiu       $t9, $sp, 0x4
    ctx->r25 = ADD32(ctx->r29, 0X4);
    // 0x8026B678: beq         $v0, $zero, L_8026B6A8
    if (ctx->r2 == 0) {
        // 0x8026B67C: nop
    
            goto L_8026B6A8;
    }
    // 0x8026B67C: nop

    // 0x8026B680: lwc1        $f4, 0x4C($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X4C);
    // 0x8026B684: nop

    // 0x8026B688: swc1        $f4, 0xC($sp)
    MEM_W(0XC, ctx->r29) = ctx->f4.u32l;
    // 0x8026B68C: lw          $t7, 0xC8($a1)
    ctx->r15 = MEM_W(ctx->r5, 0XC8);
    // 0x8026B690: nop

    // 0x8026B694: lw          $t8, 0x914($t7)
    ctx->r24 = MEM_W(ctx->r15, 0X914);
    // 0x8026B698: nop

    // 0x8026B69C: lwc1        $f6, 0x44($t8)
    ctx->f6.u32l = MEM_W(ctx->r24, 0X44);
    // 0x8026B6A0: b           L_8026B6CC
    // 0x8026B6A4: swc1        $f6, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->f6.u32l;
        goto L_8026B6CC;
    // 0x8026B6A4: swc1        $f6, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->f6.u32l;
L_8026B6A8:
    // 0x8026B6A8: lui         $v0, 0x8009
    ctx->r2 = S32(0X8009 << 16);
    // 0x8026B6AC: lw          $v0, 0x3B20($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X3B20);
    // 0x8026B6B0: nop

    // 0x8026B6B4: lwc1        $f8, 0x8($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X8);
    // 0x8026B6B8: nop

    // 0x8026B6BC: swc1        $f8, 0xC($sp)
    MEM_W(0XC, ctx->r29) = ctx->f8.u32l;
    // 0x8026B6C0: lwc1        $f10, 0x0($v0)
    ctx->f10.u32l = MEM_W(ctx->r2, 0X0);
    // 0x8026B6C4: nop

    // 0x8026B6C8: swc1        $f10, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->f10.u32l;
L_8026B6CC:
    // 0x8026B6CC: lw          $at, 0x0($t9)
    ctx->r1 = MEM_W(ctx->r25, 0X0);
    // 0x8026B6D0: or          $v0, $a0, $zero
    ctx->r2 = ctx->r4 | 0;
    // 0x8026B6D4: sw          $at, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r1;
    // 0x8026B6D8: lw          $t2, 0x4($t9)
    ctx->r10 = MEM_W(ctx->r25, 0X4);
    // 0x8026B6DC: nop

    // 0x8026B6E0: sw          $t2, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->r10;
    // 0x8026B6E4: lw          $at, 0x8($t9)
    ctx->r1 = MEM_W(ctx->r25, 0X8);
    // 0x8026B6E8: addiu       $sp, $sp, 0x10
    ctx->r29 = ADD32(ctx->r29, 0X10);
    // 0x8026B6EC: jr          $ra
    // 0x8026B6F0: sw          $at, 0x8($a0)
    MEM_W(0X8, ctx->r4) = ctx->r1;
    return;
    // 0x8026B6F0: sw          $at, 0x8($a0)
    MEM_W(0X8, ctx->r4) = ctx->r1;
;}
RECOMP_FUNC void ovl_8024B800_func_8026B6F4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8026B6F4: lui         $t6, 0x8028
    ctx->r14 = S32(0X8028 << 16);
    // 0x8026B6F8: lw          $t6, -0x1B30($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X1B30);
    // 0x8026B6FC: lui         $v0, 0x8028
    ctx->r2 = S32(0X8028 << 16);
    // 0x8026B700: bne         $a0, $t6, L_8026B728
    if (ctx->r4 != ctx->r14) {
        // 0x8026B704: addiu       $v0, $v0, -0x1B38
        ctx->r2 = ADD32(ctx->r2, -0X1B38);
            goto L_8026B728;
    }
    // 0x8026B704: addiu       $v0, $v0, -0x1B38
    ctx->r2 = ADD32(ctx->r2, -0X1B38);
    // 0x8026B708: lui         $v0, 0x8028
    ctx->r2 = S32(0X8028 << 16);
    // 0x8026B70C: addiu       $v0, $v0, -0x1B38
    ctx->r2 = ADD32(ctx->r2, -0X1B38);
    // 0x8026B710: lh          $t7, 0x0($v0)
    ctx->r15 = MEM_H(ctx->r2, 0X0);
    // 0x8026B714: nop

    // 0x8026B718: sh          $t7, 0x2E($a0)
    MEM_H(0X2E, ctx->r4) = ctx->r15;
    // 0x8026B71C: lh          $t8, 0x2($v0)
    ctx->r24 = MEM_H(ctx->r2, 0X2);
    // 0x8026B720: jr          $ra
    // 0x8026B724: sh          $t8, 0x30($a0)
    MEM_H(0X30, ctx->r4) = ctx->r24;
    return;
    // 0x8026B724: sh          $t8, 0x30($a0)
    MEM_H(0X30, ctx->r4) = ctx->r24;
L_8026B728:
    // 0x8026B728: lh          $t9, 0x4($v0)
    ctx->r25 = MEM_H(ctx->r2, 0X4);
    // 0x8026B72C: nop

    // 0x8026B730: sh          $t9, 0x2E($a0)
    MEM_H(0X2E, ctx->r4) = ctx->r25;
    // 0x8026B734: lh          $t0, 0x6($v0)
    ctx->r8 = MEM_H(ctx->r2, 0X6);
    // 0x8026B738: nop

    // 0x8026B73C: sh          $t0, 0x30($a0)
    MEM_H(0X30, ctx->r4) = ctx->r8;
    // 0x8026B740: jr          $ra
    // 0x8026B744: nop

    return;
    // 0x8026B744: nop

;}
RECOMP_FUNC void ovl_8024B800_func_8026B744(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8026B744: nop

;}
RECOMP_FUNC void ovl_8024B800_func_8026B748(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8026B748: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x8026B74C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8026B750: or          $a1, $a0, $zero
    ctx->r5 = ctx->r4 | 0;
    // 0x8026B754: sw          $a1, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r5;
    // 0x8026B758: jal         0x8026B668
    // 0x8026B75C: addiu       $a0, $sp, 0x24
    ctx->r4 = ADD32(ctx->r29, 0X24);
    ovl_8024B800_func_8026B668(rdram, ctx);
        goto after_0;
    // 0x8026B75C: addiu       $a0, $sp, 0x24
    ctx->r4 = ADD32(ctx->r29, 0X24);
    after_0:
    // 0x8026B760: lw          $a0, 0x38($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X38);
    // 0x8026B764: jal         0x8026AB2C
    // 0x8026B768: nop

    ovl_8024B800_func_8026AB2C(rdram, ctx);
        goto after_1;
    // 0x8026B768: nop

    after_1:
    // 0x8026B76C: lw          $a1, 0x38($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X38);
    // 0x8026B770: nop

    // 0x8026B774: lw          $v0, 0xC8($a1)
    ctx->r2 = MEM_W(ctx->r5, 0XC8);
    // 0x8026B778: nop

    // 0x8026B77C: lh          $v1, 0x8B0($v0)
    ctx->r3 = MEM_H(ctx->r2, 0X8B0);
    // 0x8026B780: nop

    // 0x8026B784: slti        $at, $v1, 0x191
    ctx->r1 = SIGNED(ctx->r3) < 0X191 ? 1 : 0;
    // 0x8026B788: bne         $at, $zero, L_8026B7D8
    if (ctx->r1 != 0) {
        // 0x8026B78C: addiu       $t1, $v1, -0x3C
        ctx->r9 = ADD32(ctx->r3, -0X3C);
            goto L_8026B7D8;
    }
    // 0x8026B78C: addiu       $t1, $v1, -0x3C
    ctx->r9 = ADD32(ctx->r3, -0X3C);
    // 0x8026B790: addiu       $t6, $v1, -0x50
    ctx->r14 = ADD32(ctx->r3, -0X50);
    // 0x8026B794: sh          $t6, 0x2E($a1)
    MEM_H(0X2E, ctx->r5) = ctx->r14;
    // 0x8026B798: lh          $t7, 0x2E($a1)
    ctx->r15 = MEM_H(ctx->r5, 0X2E);
    // 0x8026B79C: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x8026B7A0: slti        $at, $t7, 0x15E
    ctx->r1 = SIGNED(ctx->r15) < 0X15E ? 1 : 0;
    // 0x8026B7A4: beq         $at, $zero, L_8026B7B0
    if (ctx->r1 == 0) {
        // 0x8026B7A8: addiu       $t8, $zero, 0x15E
        ctx->r24 = ADD32(0, 0X15E);
            goto L_8026B7B0;
    }
    // 0x8026B7A8: addiu       $t8, $zero, 0x15E
    ctx->r24 = ADD32(0, 0X15E);
    // 0x8026B7AC: sh          $t8, 0x2E($a1)
    MEM_H(0X2E, ctx->r5) = ctx->r24;
L_8026B7B0:
    // 0x8026B7B0: lwc1        $f4, 0x24($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X24);
    // 0x8026B7B4: addiu       $t0, $zero, -0x123
    ctx->r8 = ADD32(0, -0X123);
    // 0x8026B7B8: c.le.s      $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f6.fl <= ctx->f4.fl;
    // 0x8026B7BC: addiu       $t9, $zero, 0x123
    ctx->r25 = ADD32(0, 0X123);
    // 0x8026B7C0: bc1f        L_8026B7D0
    if (!c1cs) {
        // 0x8026B7C4: nop
    
            goto L_8026B7D0;
    }
    // 0x8026B7C4: nop

    // 0x8026B7C8: b           L_8026B948
    // 0x8026B7CC: sh          $t9, 0x30($a1)
    MEM_H(0X30, ctx->r5) = ctx->r25;
        goto L_8026B948;
    // 0x8026B7CC: sh          $t9, 0x30($a1)
    MEM_H(0X30, ctx->r5) = ctx->r25;
L_8026B7D0:
    // 0x8026B7D0: b           L_8026B948
    // 0x8026B7D4: sh          $t0, 0x30($a1)
    MEM_H(0X30, ctx->r5) = ctx->r8;
        goto L_8026B948;
    // 0x8026B7D4: sh          $t0, 0x30($a1)
    MEM_H(0X30, ctx->r5) = ctx->r8;
L_8026B7D8:
    // 0x8026B7D8: mtc1        $t1, $f8
    ctx->f8.u32l = ctx->r9;
    // 0x8026B7DC: addiu       $t2, $v1, -0x28
    ctx->r10 = ADD32(ctx->r3, -0X28);
    // 0x8026B7E0: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x8026B7E4: addiu       $t1, $v1, 0x64
    ctx->r9 = ADD32(ctx->r3, 0X64);
    // 0x8026B7E8: c.lt.s      $f0, $f10
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f0.fl < ctx->f10.fl;
    // 0x8026B7EC: nop

    // 0x8026B7F0: bc1f        L_8026B8BC
    if (!c1cs) {
        // 0x8026B7F4: nop
    
            goto L_8026B8BC;
    }
    // 0x8026B7F4: nop

    // 0x8026B7F8: sh          $t2, 0x2E($a1)
    MEM_H(0X2E, ctx->r5) = ctx->r10;
    // 0x8026B7FC: lwc1        $f16, 0x24($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X24);
    // 0x8026B800: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x8026B804: lwc1        $f10, 0x24($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X24);
    // 0x8026B808: c.le.s      $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f18.fl <= ctx->f16.fl;
    // 0x8026B80C: lui         $at, 0x4220
    ctx->r1 = S32(0X4220 << 16);
    // 0x8026B810: bc1f        L_8026B86C
    if (!c1cs) {
        // 0x8026B814: nop
    
            goto L_8026B86C;
    }
    // 0x8026B814: nop

    // 0x8026B818: lui         $at, 0x4220
    ctx->r1 = S32(0X4220 << 16);
    // 0x8026B81C: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x8026B820: addiu       $t6, $zero, 0x137
    ctx->r14 = ADD32(0, 0X137);
    // 0x8026B824: add.s       $f6, $f16, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f16.fl + ctx->f4.fl;
    // 0x8026B828: cfc1        $t3, $FpcCsr
    ctx->r11 = get_cop1_cs();
    // 0x8026B82C: nop

    // 0x8026B830: ori         $at, $t3, 0x3
    ctx->r1 = ctx->r11 | 0X3;
    // 0x8026B834: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x8026B838: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x8026B83C: nop

    // 0x8026B840: cvt.w.s     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.u32l = CVT_W_S(ctx->f6.fl);
    // 0x8026B844: mfc1        $t4, $f8
    ctx->r12 = (int32_t)ctx->f8.u32l;
    // 0x8026B848: ctc1        $t3, $FpcCsr
    set_cop1_cs(ctx->r11);
    // 0x8026B84C: sh          $t4, 0x30($a1)
    MEM_H(0X30, ctx->r5) = ctx->r12;
    // 0x8026B850: lh          $t5, 0x30($a1)
    ctx->r13 = MEM_H(ctx->r5, 0X30);
    // 0x8026B854: nop

    // 0x8026B858: slti        $at, $t5, 0x137
    ctx->r1 = SIGNED(ctx->r13) < 0X137 ? 1 : 0;
    // 0x8026B85C: beq         $at, $zero, L_8026B94C
    if (ctx->r1 == 0) {
        // 0x8026B860: or          $a0, $a1, $zero
        ctx->r4 = ctx->r5 | 0;
            goto L_8026B94C;
    }
    // 0x8026B860: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    // 0x8026B864: b           L_8026B948
    // 0x8026B868: sh          $t6, 0x30($a1)
    MEM_H(0X30, ctx->r5) = ctx->r14;
        goto L_8026B948;
    // 0x8026B868: sh          $t6, 0x30($a1)
    MEM_H(0X30, ctx->r5) = ctx->r14;
L_8026B86C:
    // 0x8026B86C: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x8026B870: addiu       $t0, $zero, -0x137
    ctx->r8 = ADD32(0, -0X137);
    // 0x8026B874: sub.s       $f16, $f10, $f18
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f16.fl = ctx->f10.fl - ctx->f18.fl;
    // 0x8026B878: cfc1        $t7, $FpcCsr
    ctx->r15 = get_cop1_cs();
    // 0x8026B87C: nop

    // 0x8026B880: ori         $at, $t7, 0x3
    ctx->r1 = ctx->r15 | 0X3;
    // 0x8026B884: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x8026B888: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x8026B88C: nop

    // 0x8026B890: cvt.w.s     $f4, $f16
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    ctx->f4.u32l = CVT_W_S(ctx->f16.fl);
    // 0x8026B894: mfc1        $t8, $f4
    ctx->r24 = (int32_t)ctx->f4.u32l;
    // 0x8026B898: ctc1        $t7, $FpcCsr
    set_cop1_cs(ctx->r15);
    // 0x8026B89C: sh          $t8, 0x30($a1)
    MEM_H(0X30, ctx->r5) = ctx->r24;
    // 0x8026B8A0: lh          $t9, 0x30($a1)
    ctx->r25 = MEM_H(ctx->r5, 0X30);
    // 0x8026B8A4: nop

    // 0x8026B8A8: slti        $at, $t9, -0x136
    ctx->r1 = SIGNED(ctx->r25) < -0X136 ? 1 : 0;
    // 0x8026B8AC: bne         $at, $zero, L_8026B94C
    if (ctx->r1 != 0) {
        // 0x8026B8B0: or          $a0, $a1, $zero
        ctx->r4 = ctx->r5 | 0;
            goto L_8026B94C;
    }
    // 0x8026B8B0: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    // 0x8026B8B4: b           L_8026B948
    // 0x8026B8B8: sh          $t0, 0x30($a1)
    MEM_H(0X30, ctx->r5) = ctx->r8;
        goto L_8026B948;
    // 0x8026B8B8: sh          $t0, 0x30($a1)
    MEM_H(0X30, ctx->r5) = ctx->r8;
L_8026B8BC:
    // 0x8026B8BC: sh          $t1, 0x2E($a1)
    MEM_H(0X2E, ctx->r5) = ctx->r9;
    // 0x8026B8C0: lw          $t2, 0x24($v0)
    ctx->r10 = MEM_W(ctx->r2, 0X24);
    // 0x8026B8C4: lh          $t3, 0x2E($a1)
    ctx->r11 = MEM_H(ctx->r5, 0X2E);
    // 0x8026B8C8: lh          $a0, 0x8CC($t2)
    ctx->r4 = MEM_H(ctx->r10, 0X8CC);
    // 0x8026B8CC: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x8026B8D0: negu        $a0, $a0
    ctx->r4 = SUB32(0, ctx->r4);
    // 0x8026B8D4: slt         $at, $a0, $t3
    ctx->r1 = SIGNED(ctx->r4) < SIGNED(ctx->r11) ? 1 : 0;
    // 0x8026B8D8: beq         $at, $zero, L_8026B8E4
    if (ctx->r1 == 0) {
        // 0x8026B8DC: addiu       $t5, $zero, -0x123
        ctx->r13 = ADD32(0, -0X123);
            goto L_8026B8E4;
    }
    // 0x8026B8DC: addiu       $t5, $zero, -0x123
    ctx->r13 = ADD32(0, -0X123);
    // 0x8026B8E0: sh          $a0, 0x2E($a1)
    MEM_H(0X2E, ctx->r5) = ctx->r4;
L_8026B8E4:
    // 0x8026B8E4: lwc1        $f6, 0x24($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X24);
    // 0x8026B8E8: addiu       $t4, $zero, 0x123
    ctx->r12 = ADD32(0, 0X123);
    // 0x8026B8EC: c.le.s      $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f8.fl <= ctx->f6.fl;
    // 0x8026B8F0: nop

    // 0x8026B8F4: bc1f        L_8026B904
    if (!c1cs) {
        // 0x8026B8F8: nop
    
            goto L_8026B904;
    }
    // 0x8026B8F8: nop

    // 0x8026B8FC: b           L_8026B908
    // 0x8026B900: sh          $t4, 0x30($a1)
    MEM_H(0X30, ctx->r5) = ctx->r12;
        goto L_8026B908;
    // 0x8026B900: sh          $t4, 0x30($a1)
    MEM_H(0X30, ctx->r5) = ctx->r12;
L_8026B904:
    // 0x8026B904: sh          $t5, 0x30($a1)
    MEM_H(0X30, ctx->r5) = ctx->r13;
L_8026B908:
    // 0x8026B908: lw          $v0, 0xC8($a1)
    ctx->r2 = MEM_W(ctx->r5, 0XC8);
    // 0x8026B90C: nop

    // 0x8026B910: lhu         $t6, 0x10($v0)
    ctx->r14 = MEM_HU(ctx->r2, 0X10);
    // 0x8026B914: nop

    // 0x8026B918: andi        $t7, $t6, 0x80
    ctx->r15 = ctx->r14 & 0X80;
    // 0x8026B91C: beq         $t7, $zero, L_8026B94C
    if (ctx->r15 == 0) {
        // 0x8026B920: or          $a0, $a1, $zero
        ctx->r4 = ctx->r5 | 0;
            goto L_8026B94C;
    }
    // 0x8026B920: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    // 0x8026B924: lw          $t8, 0x24($v0)
    ctx->r24 = MEM_W(ctx->r2, 0X24);
    // 0x8026B928: lh          $t1, 0x2E($a1)
    ctx->r9 = MEM_H(ctx->r5, 0X2E);
    // 0x8026B92C: lh          $t9, 0x8CC($t8)
    ctx->r25 = MEM_H(ctx->r24, 0X8CC);
    // 0x8026B930: addiu       $t0, $zero, -0x64
    ctx->r8 = ADD32(0, -0X64);
    // 0x8026B934: subu        $v1, $t0, $t9
    ctx->r3 = SUB32(ctx->r8, ctx->r25);
    // 0x8026B938: slt         $at, $v1, $t1
    ctx->r1 = SIGNED(ctx->r3) < SIGNED(ctx->r9) ? 1 : 0;
    // 0x8026B93C: beq         $at, $zero, L_8026B94C
    if (ctx->r1 == 0) {
        // 0x8026B940: or          $a0, $a1, $zero
        ctx->r4 = ctx->r5 | 0;
            goto L_8026B94C;
    }
    // 0x8026B940: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    // 0x8026B944: sh          $v1, 0x2E($a1)
    MEM_H(0X2E, ctx->r5) = ctx->r3;
L_8026B948:
    // 0x8026B948: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
L_8026B94C:
    // 0x8026B94C: jal         0x8026AA98
    // 0x8026B950: sw          $a1, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r5;
    ovl_8024B800_func_8026AA98(rdram, ctx);
        goto after_2;
    // 0x8026B950: sw          $a1, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r5;
    after_2:
    // 0x8026B954: lw          $a0, 0x38($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X38);
    // 0x8026B958: jal         0x8026BB00
    // 0x8026B95C: nop

    ovl_8024B800_func_8026BB00(rdram, ctx);
        goto after_3;
    // 0x8026B95C: nop

    after_3:
    // 0x8026B960: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8026B964: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    // 0x8026B968: jr          $ra
    // 0x8026B96C: nop

    return;
    // 0x8026B96C: nop

;}
RECOMP_FUNC void ovl_8024B800_func_8026B808(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8026B808: c.le.s      $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f18.fl <= ctx->f16.fl;
    // 0x8026B80C: lui         $at, 0x4220
    ctx->r1 = S32(0X4220 << 16);
    // 0x8026B810: bc1f        L_8026B86C
    if (!c1cs) {
        // 0x8026B814: nop
    
            goto L_8026B86C;
    }
    // 0x8026B814: nop

    // 0x8026B818: lui         $at, 0x4220
    ctx->r1 = S32(0X4220 << 16);
    // 0x8026B81C: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x8026B820: addiu       $t6, $zero, 0x137
    ctx->r14 = ADD32(0, 0X137);
    // 0x8026B824: add.s       $f6, $f16, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f16.fl + ctx->f4.fl;
    // 0x8026B828: cfc1        $t3, $FpcCsr
    ctx->r11 = get_cop1_cs();
    // 0x8026B82C: nop

    // 0x8026B830: ori         $at, $t3, 0x3
    ctx->r1 = ctx->r11 | 0X3;
    // 0x8026B834: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x8026B838: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x8026B83C: nop

    // 0x8026B840: cvt.w.s     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.u32l = CVT_W_S(ctx->f6.fl);
    // 0x8026B844: mfc1        $t4, $f8
    ctx->r12 = (int32_t)ctx->f8.u32l;
    // 0x8026B848: ctc1        $t3, $FpcCsr
    set_cop1_cs(ctx->r11);
    // 0x8026B84C: sh          $t4, 0x30($a1)
    MEM_H(0X30, ctx->r5) = ctx->r12;
    // 0x8026B850: lh          $t5, 0x30($a1)
    ctx->r13 = MEM_H(ctx->r5, 0X30);
    // 0x8026B854: nop

    // 0x8026B858: slti        $at, $t5, 0x137
    ctx->r1 = SIGNED(ctx->r13) < 0X137 ? 1 : 0;
    // 0x8026B85C: beq         $at, $zero, L_8026B94C
    if (ctx->r1 == 0) {
        // 0x8026B860: or          $a0, $a1, $zero
        ctx->r4 = ctx->r5 | 0;
            goto L_8026B94C;
    }
    // 0x8026B860: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    // 0x8026B864: b           L_8026B948
    // 0x8026B868: sh          $t6, 0x30($a1)
    MEM_H(0X30, ctx->r5) = ctx->r14;
        goto L_8026B948;
    // 0x8026B868: sh          $t6, 0x30($a1)
    MEM_H(0X30, ctx->r5) = ctx->r14;
L_8026B86C:
    // 0x8026B86C: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x8026B870: addiu       $t0, $zero, -0x137
    ctx->r8 = ADD32(0, -0X137);
    // 0x8026B874: sub.s       $f16, $f10, $f18
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f16.fl = ctx->f10.fl - ctx->f18.fl;
    // 0x8026B878: cfc1        $t7, $FpcCsr
    ctx->r15 = get_cop1_cs();
    // 0x8026B87C: nop

    // 0x8026B880: ori         $at, $t7, 0x3
    ctx->r1 = ctx->r15 | 0X3;
    // 0x8026B884: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x8026B888: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x8026B88C: nop

    // 0x8026B890: cvt.w.s     $f4, $f16
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    ctx->f4.u32l = CVT_W_S(ctx->f16.fl);
    // 0x8026B894: mfc1        $t8, $f4
    ctx->r24 = (int32_t)ctx->f4.u32l;
    // 0x8026B898: ctc1        $t7, $FpcCsr
    set_cop1_cs(ctx->r15);
    // 0x8026B89C: sh          $t8, 0x30($a1)
    MEM_H(0X30, ctx->r5) = ctx->r24;
    // 0x8026B8A0: lh          $t9, 0x30($a1)
    ctx->r25 = MEM_H(ctx->r5, 0X30);
    // 0x8026B8A4: nop

    // 0x8026B8A8: slti        $at, $t9, -0x136
    ctx->r1 = SIGNED(ctx->r25) < -0X136 ? 1 : 0;
    // 0x8026B8AC: bne         $at, $zero, L_8026B94C
    if (ctx->r1 != 0) {
        // 0x8026B8B0: or          $a0, $a1, $zero
        ctx->r4 = ctx->r5 | 0;
            goto L_8026B94C;
    }
    // 0x8026B8B0: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    // 0x8026B8B4: b           L_8026B948
    // 0x8026B8B8: sh          $t0, 0x30($a1)
    MEM_H(0X30, ctx->r5) = ctx->r8;
        goto L_8026B948;
    // 0x8026B8B8: sh          $t0, 0x30($a1)
    MEM_H(0X30, ctx->r5) = ctx->r8;
    // 0x8026B8BC: sh          $t1, 0x2E($a1)
    MEM_H(0X2E, ctx->r5) = ctx->r9;
    // 0x8026B8C0: lw          $t2, 0x24($v0)
    ctx->r10 = MEM_W(ctx->r2, 0X24);
    // 0x8026B8C4: lh          $t3, 0x2E($a1)
    ctx->r11 = MEM_H(ctx->r5, 0X2E);
    // 0x8026B8C8: lh          $a0, 0x8CC($t2)
    ctx->r4 = MEM_H(ctx->r10, 0X8CC);
    // 0x8026B8CC: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x8026B8D0: negu        $a0, $a0
    ctx->r4 = SUB32(0, ctx->r4);
    // 0x8026B8D4: slt         $at, $a0, $t3
    ctx->r1 = SIGNED(ctx->r4) < SIGNED(ctx->r11) ? 1 : 0;
    // 0x8026B8D8: beq         $at, $zero, L_8026B8E4
    if (ctx->r1 == 0) {
        // 0x8026B8DC: addiu       $t5, $zero, -0x123
        ctx->r13 = ADD32(0, -0X123);
            goto L_8026B8E4;
    }
    // 0x8026B8DC: addiu       $t5, $zero, -0x123
    ctx->r13 = ADD32(0, -0X123);
    // 0x8026B8E0: sh          $a0, 0x2E($a1)
    MEM_H(0X2E, ctx->r5) = ctx->r4;
L_8026B8E4:
    // 0x8026B8E4: lwc1        $f6, 0x24($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X24);
    // 0x8026B8E8: addiu       $t4, $zero, 0x123
    ctx->r12 = ADD32(0, 0X123);
    // 0x8026B8EC: c.le.s      $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f8.fl <= ctx->f6.fl;
    // 0x8026B8F0: nop

    // 0x8026B8F4: bc1f        L_8026B904
    if (!c1cs) {
        // 0x8026B8F8: nop
    
            goto L_8026B904;
    }
    // 0x8026B8F8: nop

    // 0x8026B8FC: b           L_8026B908
    // 0x8026B900: sh          $t4, 0x30($a1)
    MEM_H(0X30, ctx->r5) = ctx->r12;
        goto L_8026B908;
    // 0x8026B900: sh          $t4, 0x30($a1)
    MEM_H(0X30, ctx->r5) = ctx->r12;
L_8026B904:
    // 0x8026B904: sh          $t5, 0x30($a1)
    MEM_H(0X30, ctx->r5) = ctx->r13;
L_8026B908:
    // 0x8026B908: lw          $v0, 0xC8($a1)
    ctx->r2 = MEM_W(ctx->r5, 0XC8);
    // 0x8026B90C: nop

    // 0x8026B910: lhu         $t6, 0x10($v0)
    ctx->r14 = MEM_HU(ctx->r2, 0X10);
    // 0x8026B914: nop

    // 0x8026B918: andi        $t7, $t6, 0x80
    ctx->r15 = ctx->r14 & 0X80;
    // 0x8026B91C: beq         $t7, $zero, L_8026B94C
    if (ctx->r15 == 0) {
        // 0x8026B920: or          $a0, $a1, $zero
        ctx->r4 = ctx->r5 | 0;
            goto L_8026B94C;
    }
    // 0x8026B920: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    // 0x8026B924: lw          $t8, 0x24($v0)
    ctx->r24 = MEM_W(ctx->r2, 0X24);
    // 0x8026B928: lh          $t1, 0x2E($a1)
    ctx->r9 = MEM_H(ctx->r5, 0X2E);
    // 0x8026B92C: lh          $t9, 0x8CC($t8)
    ctx->r25 = MEM_H(ctx->r24, 0X8CC);
    // 0x8026B930: addiu       $t0, $zero, -0x64
    ctx->r8 = ADD32(0, -0X64);
    // 0x8026B934: subu        $v1, $t0, $t9
    ctx->r3 = SUB32(ctx->r8, ctx->r25);
    // 0x8026B938: slt         $at, $v1, $t1
    ctx->r1 = SIGNED(ctx->r3) < SIGNED(ctx->r9) ? 1 : 0;
    // 0x8026B93C: beq         $at, $zero, L_8026B94C
    if (ctx->r1 == 0) {
        // 0x8026B940: or          $a0, $a1, $zero
        ctx->r4 = ctx->r5 | 0;
            goto L_8026B94C;
    }
    // 0x8026B940: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    // 0x8026B944: sh          $v1, 0x2E($a1)
    MEM_H(0X2E, ctx->r5) = ctx->r3;
L_8026B948:
    // 0x8026B948: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
L_8026B94C:
    // 0x8026B94C: jal         0x8026AA98
    // 0x8026B950: sw          $a1, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r5;
    ovl_8024B800_func_8026AA98(rdram, ctx);
        goto after_0;
    // 0x8026B950: sw          $a1, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r5;
    after_0:
    // 0x8026B954: lw          $a0, 0x38($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X38);
    // 0x8026B958: jal         0x8026BB00
    // 0x8026B95C: nop

    ovl_8024B800_func_8026BB00(rdram, ctx);
        goto after_1;
    // 0x8026B95C: nop

    after_1:
    // 0x8026B960: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8026B964: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    // 0x8026B968: jr          $ra
    // 0x8026B96C: nop

    return;
    // 0x8026B96C: nop

;}
RECOMP_FUNC void ovl_8024B800_func_8026B8AC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8026B8AC: bne         $at, $zero, L_8026B94C
    if (ctx->r1 != 0) {
        // 0x8026B8B0: or          $a0, $a1, $zero
        ctx->r4 = ctx->r5 | 0;
            goto L_8026B94C;
    }
    // 0x8026B8B0: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    // 0x8026B8B4: b           L_8026B948
    // 0x8026B8B8: sh          $t0, 0x30($a1)
    MEM_H(0X30, ctx->r5) = ctx->r8;
        goto L_8026B948;
    // 0x8026B8B8: sh          $t0, 0x30($a1)
    MEM_H(0X30, ctx->r5) = ctx->r8;
    // 0x8026B8BC: sh          $t1, 0x2E($a1)
    MEM_H(0X2E, ctx->r5) = ctx->r9;
    // 0x8026B8C0: lw          $t2, 0x24($v0)
    ctx->r10 = MEM_W(ctx->r2, 0X24);
    // 0x8026B8C4: lh          $t3, 0x2E($a1)
    ctx->r11 = MEM_H(ctx->r5, 0X2E);
    // 0x8026B8C8: lh          $a0, 0x8CC($t2)
    ctx->r4 = MEM_H(ctx->r10, 0X8CC);
    // 0x8026B8CC: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x8026B8D0: negu        $a0, $a0
    ctx->r4 = SUB32(0, ctx->r4);
    // 0x8026B8D4: slt         $at, $a0, $t3
    ctx->r1 = SIGNED(ctx->r4) < SIGNED(ctx->r11) ? 1 : 0;
    // 0x8026B8D8: beq         $at, $zero, L_8026B8E4
    if (ctx->r1 == 0) {
        // 0x8026B8DC: addiu       $t5, $zero, -0x123
        ctx->r13 = ADD32(0, -0X123);
            goto L_8026B8E4;
    }
    // 0x8026B8DC: addiu       $t5, $zero, -0x123
    ctx->r13 = ADD32(0, -0X123);
    // 0x8026B8E0: sh          $a0, 0x2E($a1)
    MEM_H(0X2E, ctx->r5) = ctx->r4;
L_8026B8E4:
    // 0x8026B8E4: lwc1        $f6, 0x24($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X24);
    // 0x8026B8E8: addiu       $t4, $zero, 0x123
    ctx->r12 = ADD32(0, 0X123);
    // 0x8026B8EC: c.le.s      $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f8.fl <= ctx->f6.fl;
    // 0x8026B8F0: nop

    // 0x8026B8F4: bc1f        L_8026B904
    if (!c1cs) {
        // 0x8026B8F8: nop
    
            goto L_8026B904;
    }
    // 0x8026B8F8: nop

    // 0x8026B8FC: b           L_8026B908
    // 0x8026B900: sh          $t4, 0x30($a1)
    MEM_H(0X30, ctx->r5) = ctx->r12;
        goto L_8026B908;
    // 0x8026B900: sh          $t4, 0x30($a1)
    MEM_H(0X30, ctx->r5) = ctx->r12;
L_8026B904:
    // 0x8026B904: sh          $t5, 0x30($a1)
    MEM_H(0X30, ctx->r5) = ctx->r13;
L_8026B908:
    // 0x8026B908: lw          $v0, 0xC8($a1)
    ctx->r2 = MEM_W(ctx->r5, 0XC8);
    // 0x8026B90C: nop

    // 0x8026B910: lhu         $t6, 0x10($v0)
    ctx->r14 = MEM_HU(ctx->r2, 0X10);
    // 0x8026B914: nop

    // 0x8026B918: andi        $t7, $t6, 0x80
    ctx->r15 = ctx->r14 & 0X80;
    // 0x8026B91C: beq         $t7, $zero, L_8026B94C
    if (ctx->r15 == 0) {
        // 0x8026B920: or          $a0, $a1, $zero
        ctx->r4 = ctx->r5 | 0;
            goto L_8026B94C;
    }
    // 0x8026B920: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    // 0x8026B924: lw          $t8, 0x24($v0)
    ctx->r24 = MEM_W(ctx->r2, 0X24);
    // 0x8026B928: lh          $t1, 0x2E($a1)
    ctx->r9 = MEM_H(ctx->r5, 0X2E);
    // 0x8026B92C: lh          $t9, 0x8CC($t8)
    ctx->r25 = MEM_H(ctx->r24, 0X8CC);
    // 0x8026B930: addiu       $t0, $zero, -0x64
    ctx->r8 = ADD32(0, -0X64);
    // 0x8026B934: subu        $v1, $t0, $t9
    ctx->r3 = SUB32(ctx->r8, ctx->r25);
    // 0x8026B938: slt         $at, $v1, $t1
    ctx->r1 = SIGNED(ctx->r3) < SIGNED(ctx->r9) ? 1 : 0;
    // 0x8026B93C: beq         $at, $zero, L_8026B94C
    if (ctx->r1 == 0) {
        // 0x8026B940: or          $a0, $a1, $zero
        ctx->r4 = ctx->r5 | 0;
            goto L_8026B94C;
    }
    // 0x8026B940: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    // 0x8026B944: sh          $v1, 0x2E($a1)
    MEM_H(0X2E, ctx->r5) = ctx->r3;
L_8026B948:
    // 0x8026B948: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
L_8026B94C:
    // 0x8026B94C: jal         0x8026AA98
    // 0x8026B950: sw          $a1, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r5;
    ovl_8024B800_func_8026AA98(rdram, ctx);
        goto after_0;
    // 0x8026B950: sw          $a1, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r5;
    after_0:
    // 0x8026B954: lw          $a0, 0x38($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X38);
    // 0x8026B958: jal         0x8026BB00
    // 0x8026B95C: nop

    ovl_8024B800_func_8026BB00(rdram, ctx);
        goto after_1;
    // 0x8026B95C: nop

    after_1:
    // 0x8026B960: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8026B964: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    // 0x8026B968: jr          $ra
    // 0x8026B96C: nop

    return;
    // 0x8026B96C: nop

;}
RECOMP_FUNC void ovl_8024B800_func_8026B970(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8026B970: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x8026B974: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x8026B978: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x8026B97C: lh          $t8, 0x2E($a0)
    ctx->r24 = MEM_H(ctx->r4, 0X2E);
    // 0x8026B980: lh          $t9, 0x30($a0)
    ctx->r25 = MEM_H(ctx->r4, 0X30);
    // 0x8026B984: mtc1        $t8, $f18
    ctx->f18.u32l = ctx->r24;
    // 0x8026B988: mtc1        $t9, $f16
    ctx->f16.u32l = ctx->r25;
    // 0x8026B98C: cvt.s.w     $f18, $f18
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    ctx->f18.fl = CVT_S_W(ctx->f18.u32l);
    // 0x8026B990: lui         $v0, 0x8009
    ctx->r2 = S32(0X8009 << 16);
    // 0x8026B994: lw          $v0, 0x3B20($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X3B20);
    // 0x8026B998: cvt.s.w     $f16, $f16
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    ctx->f16.fl = CVT_S_W(ctx->f16.u32l);
    // 0x8026B99C: lh          $t6, 0xE8($v0)
    ctx->r14 = MEM_H(ctx->r2, 0XE8);
    // 0x8026B9A0: lh          $t7, 0xEA($v0)
    ctx->r15 = MEM_H(ctx->r2, 0XEA);
    // 0x8026B9A4: mtc1        $t6, $f10
    ctx->f10.u32l = ctx->r14;
    // 0x8026B9A8: mtc1        $t7, $f8
    ctx->f8.u32l = ctx->r15;
    // 0x8026B9AC: mfc1        $a2, $f18
    ctx->r6 = (int32_t)ctx->f18.u32l;
    // 0x8026B9B0: mfc1        $a3, $f16
    ctx->r7 = (int32_t)ctx->f16.u32l;
    // 0x8026B9B4: cvt.s.w     $f12, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    ctx->f12.fl = CVT_S_W(ctx->f10.u32l);
    // 0x8026B9B8: addiu       $t0, $sp, 0x30
    ctx->r8 = ADD32(ctx->r29, 0X30);
    // 0x8026B9BC: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x8026B9C0: cvt.s.w     $f14, $f8
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 8);
    ctx->f14.fl = CVT_S_W(ctx->f8.u32l);
    // 0x8026B9C4: jal         0x80272B1C
    // 0x8026B9C8: sw          $t0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r8;
    ovl_8024B800_func_80272B1C(rdram, ctx);
        goto after_0;
    // 0x8026B9C8: sw          $t0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r8;
    after_0:
    // 0x8026B9CC: lui         $t1, 0x8009
    ctx->r9 = S32(0X8009 << 16);
    // 0x8026B9D0: lw          $t1, 0x3B20($t1)
    ctx->r9 = MEM_W(ctx->r9, 0X3B20);
    // 0x8026B9D4: lw          $t3, 0xC8($s0)
    ctx->r11 = MEM_W(ctx->r16, 0XC8);
    // 0x8026B9D8: lw          $t2, 0xB4($t1)
    ctx->r10 = MEM_W(ctx->r9, 0XB4);
    // 0x8026B9DC: lwc1        $f16, 0x34($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X34);
    // 0x8026B9E0: bne         $t2, $t3, L_8026B9F8
    if (ctx->r10 != ctx->r11) {
        // 0x8026B9E4: lui         $at, 0x4270
        ctx->r1 = S32(0X4270 << 16);
            goto L_8026B9F8;
    }
    // 0x8026B9E4: lui         $at, 0x4270
    ctx->r1 = S32(0X4270 << 16);
    // 0x8026B9E8: lui         $at, 0x42B4
    ctx->r1 = S32(0X42B4 << 16);
    // 0x8026B9EC: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    // 0x8026B9F0: b           L_8026BA04
    // 0x8026B9F4: c.lt.s      $f16, $f2
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f16.fl < ctx->f2.fl;
        goto L_8026BA04;
    // 0x8026B9F4: c.lt.s      $f16, $f2
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f16.fl < ctx->f2.fl;
L_8026B9F8:
    // 0x8026B9F8: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    // 0x8026B9FC: nop

    // 0x8026BA00: c.lt.s      $f16, $f2
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f16.fl < ctx->f2.fl;
L_8026BA04:
    // 0x8026BA04: lui         $t4, 0x8012
    ctx->r12 = S32(0X8012 << 16);
    // 0x8026BA08: bc1f        L_8026BAF4
    if (!c1cs) {
        // 0x8026BA0C: lw          $ra, 0x24($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X24);
            goto L_8026BAF4;
    }
    // 0x8026BA0C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x8026BA10: lw          $t4, 0xB2C($t4)
    ctx->r12 = MEM_W(ctx->r12, 0XB2C);
    // 0x8026BA14: nop

    // 0x8026BA18: beq         $s0, $t4, L_8026BAF4
    if (ctx->r16 == ctx->r12) {
        // 0x8026BA1C: lw          $ra, 0x24($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X24);
            goto L_8026BAF4;
    }
    // 0x8026BA1C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x8026BA20: lhu         $t5, 0x14($s0)
    ctx->r13 = MEM_HU(ctx->r16, 0X14);
    // 0x8026BA24: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x8026BA28: andi        $t6, $t5, 0x400
    ctx->r14 = ctx->r13 & 0X400;
    // 0x8026BA2C: bne         $t6, $zero, L_8026BAF4
    if (ctx->r14 != 0) {
        // 0x8026BA30: lw          $ra, 0x24($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X24);
            goto L_8026BAF4;
    }
    // 0x8026BA30: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x8026BA34: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x8026BA38: lwc1        $f12, 0x30($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X30);
    // 0x8026BA3C: add.s       $f2, $f2, $f18
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f2.fl = ctx->f2.fl + ctx->f18.fl;
    // 0x8026BA40: jal         0x80081040
    // 0x8026BA44: swc1        $f2, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f2.u32l;
    func_80081040(rdram, ctx);
        goto after_1;
    // 0x8026BA44: swc1        $f2, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f2.u32l;
    after_1:
    // 0x8026BA48: lui         $t7, 0x8009
    ctx->r15 = S32(0X8009 << 16);
    // 0x8026BA4C: lw          $t7, 0x3B20($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X3B20);
    // 0x8026BA50: lwc1        $f2, 0x2C($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x8026BA54: lh          $t8, 0xE8($t7)
    ctx->r24 = MEM_H(ctx->r15, 0XE8);
    // 0x8026BA58: mul.s       $f4, $f0, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f4.fl = MUL_S(ctx->f0.fl, ctx->f2.fl);
    // 0x8026BA5C: mtc1        $t8, $f6
    ctx->f6.u32l = ctx->r24;
    // 0x8026BA60: nop

    // 0x8026BA64: cvt.s.w     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.fl = CVT_S_W(ctx->f6.u32l);
    // 0x8026BA68: add.s       $f10, $f4, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f4.fl + ctx->f8.fl;
    // 0x8026BA6C: cfc1        $t9, $FpcCsr
    ctx->r25 = get_cop1_cs();
    // 0x8026BA70: nop

    // 0x8026BA74: ori         $at, $t9, 0x3
    ctx->r1 = ctx->r25 | 0X3;
    // 0x8026BA78: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x8026BA7C: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x8026BA80: nop

    // 0x8026BA84: cvt.w.s     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.u32l = CVT_W_S(ctx->f10.fl);
    // 0x8026BA88: mfc1        $t0, $f16
    ctx->r8 = (int32_t)ctx->f16.u32l;
    // 0x8026BA8C: ctc1        $t9, $FpcCsr
    set_cop1_cs(ctx->r25);
    // 0x8026BA90: sh          $t0, 0x2E($s0)
    MEM_H(0X2E, ctx->r16) = ctx->r8;
    // 0x8026BA94: lwc1        $f12, 0x30($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X30);
    // 0x8026BA98: jal         0x80080E80
    // 0x8026BA9C: nop

    func_80080E80(rdram, ctx);
        goto after_2;
    // 0x8026BA9C: nop

    after_2:
    // 0x8026BAA0: lui         $t1, 0x8009
    ctx->r9 = S32(0X8009 << 16);
    // 0x8026BAA4: lw          $t1, 0x3B20($t1)
    ctx->r9 = MEM_W(ctx->r9, 0X3B20);
    // 0x8026BAA8: lwc1        $f2, 0x2C($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x8026BAAC: lh          $t2, 0xEA($t1)
    ctx->r10 = MEM_H(ctx->r9, 0XEA);
    // 0x8026BAB0: mul.s       $f18, $f0, $f2
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f18.fl = MUL_S(ctx->f0.fl, ctx->f2.fl);
    // 0x8026BAB4: mtc1        $t2, $f6
    ctx->f6.u32l = ctx->r10;
    // 0x8026BAB8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8026BABC: cvt.s.w     $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    ctx->f4.fl = CVT_S_W(ctx->f6.u32l);
    // 0x8026BAC0: add.s       $f8, $f18, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f8.fl = ctx->f18.fl + ctx->f4.fl;
    // 0x8026BAC4: cfc1        $t3, $FpcCsr
    ctx->r11 = get_cop1_cs();
    // 0x8026BAC8: nop

    // 0x8026BACC: ori         $at, $t3, 0x3
    ctx->r1 = ctx->r11 | 0X3;
    // 0x8026BAD0: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x8026BAD4: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x8026BAD8: nop

    // 0x8026BADC: cvt.w.s     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.u32l = CVT_W_S(ctx->f8.fl);
    // 0x8026BAE0: mfc1        $t4, $f10
    ctx->r12 = (int32_t)ctx->f10.u32l;
    // 0x8026BAE4: ctc1        $t3, $FpcCsr
    set_cop1_cs(ctx->r11);
    // 0x8026BAE8: jal         0x8026BB00
    // 0x8026BAEC: sh          $t4, 0x30($s0)
    MEM_H(0X30, ctx->r16) = ctx->r12;
    ovl_8024B800_func_8026BB00(rdram, ctx);
        goto after_3;
    // 0x8026BAEC: sh          $t4, 0x30($s0)
    MEM_H(0X30, ctx->r16) = ctx->r12;
    after_3:
    // 0x8026BAF0: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_8026BAF4:
    // 0x8026BAF4: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x8026BAF8: jr          $ra
    // 0x8026BAFC: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    return;
    // 0x8026BAFC: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void ovl_8024B800_func_8026B99C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8026B99C: lh          $t6, 0xE8($v0)
    ctx->r14 = MEM_H(ctx->r2, 0XE8);
    // 0x8026B9A0: lh          $t7, 0xEA($v0)
    ctx->r15 = MEM_H(ctx->r2, 0XEA);
    // 0x8026B9A4: mtc1        $t6, $f10
    ctx->f10.u32l = ctx->r14;
    // 0x8026B9A8: mtc1        $t7, $f8
    ctx->f8.u32l = ctx->r15;
    // 0x8026B9AC: mfc1        $a2, $f18
    ctx->r6 = (int32_t)ctx->f18.u32l;
    // 0x8026B9B0: mfc1        $a3, $f16
    ctx->r7 = (int32_t)ctx->f16.u32l;
    // 0x8026B9B4: cvt.s.w     $f12, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    ctx->f12.fl = CVT_S_W(ctx->f10.u32l);
    // 0x8026B9B8: addiu       $t0, $sp, 0x30
    ctx->r8 = ADD32(ctx->r29, 0X30);
    // 0x8026B9BC: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x8026B9C0: cvt.s.w     $f14, $f8
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 8);
    ctx->f14.fl = CVT_S_W(ctx->f8.u32l);
    // 0x8026B9C4: jal         0x80272B1C
    // 0x8026B9C8: sw          $t0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r8;
    ovl_8024B800_func_80272B1C(rdram, ctx);
        goto after_0;
    // 0x8026B9C8: sw          $t0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r8;
    after_0:
    // 0x8026B9CC: lui         $t1, 0x8009
    ctx->r9 = S32(0X8009 << 16);
    // 0x8026B9D0: lw          $t1, 0x3B20($t1)
    ctx->r9 = MEM_W(ctx->r9, 0X3B20);
    // 0x8026B9D4: lw          $t3, 0xC8($s0)
    ctx->r11 = MEM_W(ctx->r16, 0XC8);
    // 0x8026B9D8: lw          $t2, 0xB4($t1)
    ctx->r10 = MEM_W(ctx->r9, 0XB4);
    // 0x8026B9DC: lwc1        $f16, 0x34($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X34);
    // 0x8026B9E0: bne         $t2, $t3, L_8026B9F8
    if (ctx->r10 != ctx->r11) {
        // 0x8026B9E4: lui         $at, 0x4270
        ctx->r1 = S32(0X4270 << 16);
            goto L_8026B9F8;
    }
    // 0x8026B9E4: lui         $at, 0x4270
    ctx->r1 = S32(0X4270 << 16);
    // 0x8026B9E8: lui         $at, 0x42B4
    ctx->r1 = S32(0X42B4 << 16);
    // 0x8026B9EC: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    // 0x8026B9F0: b           L_8026BA04
    // 0x8026B9F4: c.lt.s      $f16, $f2
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f16.fl < ctx->f2.fl;
        goto L_8026BA04;
    // 0x8026B9F4: c.lt.s      $f16, $f2
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f16.fl < ctx->f2.fl;
L_8026B9F8:
    // 0x8026B9F8: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    // 0x8026B9FC: nop

    // 0x8026BA00: c.lt.s      $f16, $f2
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f16.fl < ctx->f2.fl;
L_8026BA04:
    // 0x8026BA04: lui         $t4, 0x8012
    ctx->r12 = S32(0X8012 << 16);
    // 0x8026BA08: bc1f        L_8026BAF4
    if (!c1cs) {
        // 0x8026BA0C: lw          $ra, 0x24($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X24);
            goto L_8026BAF4;
    }
    // 0x8026BA0C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x8026BA10: lw          $t4, 0xB2C($t4)
    ctx->r12 = MEM_W(ctx->r12, 0XB2C);
    // 0x8026BA14: nop

    // 0x8026BA18: beq         $s0, $t4, L_8026BAF4
    if (ctx->r16 == ctx->r12) {
        // 0x8026BA1C: lw          $ra, 0x24($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X24);
            goto L_8026BAF4;
    }
    // 0x8026BA1C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x8026BA20: lhu         $t5, 0x14($s0)
    ctx->r13 = MEM_HU(ctx->r16, 0X14);
    // 0x8026BA24: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x8026BA28: andi        $t6, $t5, 0x400
    ctx->r14 = ctx->r13 & 0X400;
    // 0x8026BA2C: bne         $t6, $zero, L_8026BAF4
    if (ctx->r14 != 0) {
        // 0x8026BA30: lw          $ra, 0x24($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X24);
            goto L_8026BAF4;
    }
    // 0x8026BA30: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x8026BA34: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x8026BA38: lwc1        $f12, 0x30($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X30);
    // 0x8026BA3C: add.s       $f2, $f2, $f18
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f2.fl = ctx->f2.fl + ctx->f18.fl;
    // 0x8026BA40: jal         0x80081040
    // 0x8026BA44: swc1        $f2, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f2.u32l;
    func_80081040(rdram, ctx);
        goto after_1;
    // 0x8026BA44: swc1        $f2, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f2.u32l;
    after_1:
    // 0x8026BA48: lui         $t7, 0x8009
    ctx->r15 = S32(0X8009 << 16);
    // 0x8026BA4C: lw          $t7, 0x3B20($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X3B20);
    // 0x8026BA50: lwc1        $f2, 0x2C($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x8026BA54: lh          $t8, 0xE8($t7)
    ctx->r24 = MEM_H(ctx->r15, 0XE8);
    // 0x8026BA58: mul.s       $f4, $f0, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f4.fl = MUL_S(ctx->f0.fl, ctx->f2.fl);
    // 0x8026BA5C: mtc1        $t8, $f6
    ctx->f6.u32l = ctx->r24;
    // 0x8026BA60: nop

    // 0x8026BA64: cvt.s.w     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.fl = CVT_S_W(ctx->f6.u32l);
    // 0x8026BA68: add.s       $f10, $f4, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f4.fl + ctx->f8.fl;
    // 0x8026BA6C: cfc1        $t9, $FpcCsr
    ctx->r25 = get_cop1_cs();
    // 0x8026BA70: nop

    // 0x8026BA74: ori         $at, $t9, 0x3
    ctx->r1 = ctx->r25 | 0X3;
    // 0x8026BA78: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x8026BA7C: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x8026BA80: nop

    // 0x8026BA84: cvt.w.s     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.u32l = CVT_W_S(ctx->f10.fl);
    // 0x8026BA88: mfc1        $t0, $f16
    ctx->r8 = (int32_t)ctx->f16.u32l;
    // 0x8026BA8C: ctc1        $t9, $FpcCsr
    set_cop1_cs(ctx->r25);
    // 0x8026BA90: sh          $t0, 0x2E($s0)
    MEM_H(0X2E, ctx->r16) = ctx->r8;
    // 0x8026BA94: lwc1        $f12, 0x30($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X30);
    // 0x8026BA98: jal         0x80080E80
    // 0x8026BA9C: nop

    func_80080E80(rdram, ctx);
        goto after_2;
    // 0x8026BA9C: nop

    after_2:
    // 0x8026BAA0: lui         $t1, 0x8009
    ctx->r9 = S32(0X8009 << 16);
    // 0x8026BAA4: lw          $t1, 0x3B20($t1)
    ctx->r9 = MEM_W(ctx->r9, 0X3B20);
    // 0x8026BAA8: lwc1        $f2, 0x2C($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x8026BAAC: lh          $t2, 0xEA($t1)
    ctx->r10 = MEM_H(ctx->r9, 0XEA);
    // 0x8026BAB0: mul.s       $f18, $f0, $f2
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f18.fl = MUL_S(ctx->f0.fl, ctx->f2.fl);
    // 0x8026BAB4: mtc1        $t2, $f6
    ctx->f6.u32l = ctx->r10;
    // 0x8026BAB8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8026BABC: cvt.s.w     $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    ctx->f4.fl = CVT_S_W(ctx->f6.u32l);
    // 0x8026BAC0: add.s       $f8, $f18, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f8.fl = ctx->f18.fl + ctx->f4.fl;
    // 0x8026BAC4: cfc1        $t3, $FpcCsr
    ctx->r11 = get_cop1_cs();
    // 0x8026BAC8: nop

    // 0x8026BACC: ori         $at, $t3, 0x3
    ctx->r1 = ctx->r11 | 0X3;
    // 0x8026BAD0: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x8026BAD4: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x8026BAD8: nop

    // 0x8026BADC: cvt.w.s     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.u32l = CVT_W_S(ctx->f8.fl);
    // 0x8026BAE0: mfc1        $t4, $f10
    ctx->r12 = (int32_t)ctx->f10.u32l;
    // 0x8026BAE4: ctc1        $t3, $FpcCsr
    set_cop1_cs(ctx->r11);
    // 0x8026BAE8: jal         0x8026BB00
    // 0x8026BAEC: sh          $t4, 0x30($s0)
    MEM_H(0X30, ctx->r16) = ctx->r12;
    ovl_8024B800_func_8026BB00(rdram, ctx);
        goto after_3;
    // 0x8026BAEC: sh          $t4, 0x30($s0)
    MEM_H(0X30, ctx->r16) = ctx->r12;
    after_3:
    // 0x8026BAF0: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_8026BAF4:
    // 0x8026BAF4: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x8026BAF8: jr          $ra
    // 0x8026BAFC: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    return;
    // 0x8026BAFC: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void ovl_8024B800_func_8026B9D0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8026B9D0: lw          $t1, 0x3B20($t1)
    ctx->r9 = MEM_W(ctx->r9, 0X3B20);
    // 0x8026B9D4: lw          $t3, 0xC8($s0)
    ctx->r11 = MEM_W(ctx->r16, 0XC8);
    // 0x8026B9D8: lw          $t2, 0xB4($t1)
    ctx->r10 = MEM_W(ctx->r9, 0XB4);
    // 0x8026B9DC: lwc1        $f16, 0x34($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X34);
    // 0x8026B9E0: bne         $t2, $t3, L_8026B9F8
    if (ctx->r10 != ctx->r11) {
        // 0x8026B9E4: lui         $at, 0x4270
        ctx->r1 = S32(0X4270 << 16);
            goto L_8026B9F8;
    }
    // 0x8026B9E4: lui         $at, 0x4270
    ctx->r1 = S32(0X4270 << 16);
    // 0x8026B9E8: lui         $at, 0x42B4
    ctx->r1 = S32(0X42B4 << 16);
    // 0x8026B9EC: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    // 0x8026B9F0: b           L_8026BA04
    // 0x8026B9F4: c.lt.s      $f16, $f2
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f16.fl < ctx->f2.fl;
        goto L_8026BA04;
    // 0x8026B9F4: c.lt.s      $f16, $f2
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f16.fl < ctx->f2.fl;
L_8026B9F8:
    // 0x8026B9F8: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    // 0x8026B9FC: nop

    // 0x8026BA00: c.lt.s      $f16, $f2
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f16.fl < ctx->f2.fl;
L_8026BA04:
    // 0x8026BA04: lui         $t4, 0x8012
    ctx->r12 = S32(0X8012 << 16);
    // 0x8026BA08: bc1f        L_8026BAF4
    if (!c1cs) {
        // 0x8026BA0C: lw          $ra, 0x24($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X24);
            goto L_8026BAF4;
    }
    // 0x8026BA0C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x8026BA10: lw          $t4, 0xB2C($t4)
    ctx->r12 = MEM_W(ctx->r12, 0XB2C);
    // 0x8026BA14: nop

    // 0x8026BA18: beq         $s0, $t4, L_8026BAF4
    if (ctx->r16 == ctx->r12) {
        // 0x8026BA1C: lw          $ra, 0x24($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X24);
            goto L_8026BAF4;
    }
    // 0x8026BA1C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x8026BA20: lhu         $t5, 0x14($s0)
    ctx->r13 = MEM_HU(ctx->r16, 0X14);
    // 0x8026BA24: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x8026BA28: andi        $t6, $t5, 0x400
    ctx->r14 = ctx->r13 & 0X400;
    // 0x8026BA2C: bne         $t6, $zero, L_8026BAF4
    if (ctx->r14 != 0) {
        // 0x8026BA30: lw          $ra, 0x24($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X24);
            goto L_8026BAF4;
    }
    // 0x8026BA30: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x8026BA34: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x8026BA38: lwc1        $f12, 0x30($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X30);
    // 0x8026BA3C: add.s       $f2, $f2, $f18
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f2.fl = ctx->f2.fl + ctx->f18.fl;
    // 0x8026BA40: jal         0x80081040
    // 0x8026BA44: swc1        $f2, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f2.u32l;
    func_80081040(rdram, ctx);
        goto after_0;
    // 0x8026BA44: swc1        $f2, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f2.u32l;
    after_0:
    // 0x8026BA48: lui         $t7, 0x8009
    ctx->r15 = S32(0X8009 << 16);
    // 0x8026BA4C: lw          $t7, 0x3B20($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X3B20);
    // 0x8026BA50: lwc1        $f2, 0x2C($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x8026BA54: lh          $t8, 0xE8($t7)
    ctx->r24 = MEM_H(ctx->r15, 0XE8);
    // 0x8026BA58: mul.s       $f4, $f0, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f4.fl = MUL_S(ctx->f0.fl, ctx->f2.fl);
    // 0x8026BA5C: mtc1        $t8, $f6
    ctx->f6.u32l = ctx->r24;
    // 0x8026BA60: nop

    // 0x8026BA64: cvt.s.w     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.fl = CVT_S_W(ctx->f6.u32l);
    // 0x8026BA68: add.s       $f10, $f4, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f4.fl + ctx->f8.fl;
    // 0x8026BA6C: cfc1        $t9, $FpcCsr
    ctx->r25 = get_cop1_cs();
    // 0x8026BA70: nop

    // 0x8026BA74: ori         $at, $t9, 0x3
    ctx->r1 = ctx->r25 | 0X3;
    // 0x8026BA78: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x8026BA7C: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x8026BA80: nop

    // 0x8026BA84: cvt.w.s     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.u32l = CVT_W_S(ctx->f10.fl);
    // 0x8026BA88: mfc1        $t0, $f16
    ctx->r8 = (int32_t)ctx->f16.u32l;
    // 0x8026BA8C: ctc1        $t9, $FpcCsr
    set_cop1_cs(ctx->r25);
    // 0x8026BA90: sh          $t0, 0x2E($s0)
    MEM_H(0X2E, ctx->r16) = ctx->r8;
    // 0x8026BA94: lwc1        $f12, 0x30($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X30);
    // 0x8026BA98: jal         0x80080E80
    // 0x8026BA9C: nop

    func_80080E80(rdram, ctx);
        goto after_1;
    // 0x8026BA9C: nop

    after_1:
    // 0x8026BAA0: lui         $t1, 0x8009
    ctx->r9 = S32(0X8009 << 16);
    // 0x8026BAA4: lw          $t1, 0x3B20($t1)
    ctx->r9 = MEM_W(ctx->r9, 0X3B20);
    // 0x8026BAA8: lwc1        $f2, 0x2C($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x8026BAAC: lh          $t2, 0xEA($t1)
    ctx->r10 = MEM_H(ctx->r9, 0XEA);
    // 0x8026BAB0: mul.s       $f18, $f0, $f2
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f18.fl = MUL_S(ctx->f0.fl, ctx->f2.fl);
    // 0x8026BAB4: mtc1        $t2, $f6
    ctx->f6.u32l = ctx->r10;
    // 0x8026BAB8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8026BABC: cvt.s.w     $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    ctx->f4.fl = CVT_S_W(ctx->f6.u32l);
    // 0x8026BAC0: add.s       $f8, $f18, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f8.fl = ctx->f18.fl + ctx->f4.fl;
    // 0x8026BAC4: cfc1        $t3, $FpcCsr
    ctx->r11 = get_cop1_cs();
    // 0x8026BAC8: nop

    // 0x8026BACC: ori         $at, $t3, 0x3
    ctx->r1 = ctx->r11 | 0X3;
    // 0x8026BAD0: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x8026BAD4: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x8026BAD8: nop

    // 0x8026BADC: cvt.w.s     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.u32l = CVT_W_S(ctx->f8.fl);
    // 0x8026BAE0: mfc1        $t4, $f10
    ctx->r12 = (int32_t)ctx->f10.u32l;
    // 0x8026BAE4: ctc1        $t3, $FpcCsr
    set_cop1_cs(ctx->r11);
    // 0x8026BAE8: jal         0x8026BB00
    // 0x8026BAEC: sh          $t4, 0x30($s0)
    MEM_H(0X30, ctx->r16) = ctx->r12;
    ovl_8024B800_func_8026BB00(rdram, ctx);
        goto after_2;
    // 0x8026BAEC: sh          $t4, 0x30($s0)
    MEM_H(0X30, ctx->r16) = ctx->r12;
    after_2:
    // 0x8026BAF0: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_8026BAF4:
    // 0x8026BAF4: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x8026BAF8: jr          $ra
    // 0x8026BAFC: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    return;
    // 0x8026BAFC: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void ovl_8024B800_func_8026BA74(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8026BA74: ori         $at, $t9, 0x3
    ctx->r1 = ctx->r25 | 0X3;
    // 0x8026BA78: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x8026BA7C: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x8026BA80: nop

    // 0x8026BA84: cvt.w.s     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.u32l = CVT_W_S(ctx->f10.fl);
    // 0x8026BA88: mfc1        $t0, $f16
    ctx->r8 = (int32_t)ctx->f16.u32l;
    // 0x8026BA8C: ctc1        $t9, $FpcCsr
    set_cop1_cs(ctx->r25);
    // 0x8026BA90: sh          $t0, 0x2E($s0)
    MEM_H(0X2E, ctx->r16) = ctx->r8;
    // 0x8026BA94: lwc1        $f12, 0x30($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X30);
    // 0x8026BA98: jal         0x80080E80
    // 0x8026BA9C: nop

    func_80080E80(rdram, ctx);
        goto after_0;
    // 0x8026BA9C: nop

    after_0:
    // 0x8026BAA0: lui         $t1, 0x8009
    ctx->r9 = S32(0X8009 << 16);
    // 0x8026BAA4: lw          $t1, 0x3B20($t1)
    ctx->r9 = MEM_W(ctx->r9, 0X3B20);
    // 0x8026BAA8: lwc1        $f2, 0x2C($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x8026BAAC: lh          $t2, 0xEA($t1)
    ctx->r10 = MEM_H(ctx->r9, 0XEA);
    // 0x8026BAB0: mul.s       $f18, $f0, $f2
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f18.fl = MUL_S(ctx->f0.fl, ctx->f2.fl);
    // 0x8026BAB4: mtc1        $t2, $f6
    ctx->f6.u32l = ctx->r10;
    // 0x8026BAB8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8026BABC: cvt.s.w     $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    ctx->f4.fl = CVT_S_W(ctx->f6.u32l);
    // 0x8026BAC0: add.s       $f8, $f18, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f8.fl = ctx->f18.fl + ctx->f4.fl;
    // 0x8026BAC4: cfc1        $t3, $FpcCsr
    ctx->r11 = get_cop1_cs();
    // 0x8026BAC8: nop

    // 0x8026BACC: ori         $at, $t3, 0x3
    ctx->r1 = ctx->r11 | 0X3;
    // 0x8026BAD0: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x8026BAD4: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x8026BAD8: nop

    // 0x8026BADC: cvt.w.s     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.u32l = CVT_W_S(ctx->f8.fl);
    // 0x8026BAE0: mfc1        $t4, $f10
    ctx->r12 = (int32_t)ctx->f10.u32l;
    // 0x8026BAE4: ctc1        $t3, $FpcCsr
    set_cop1_cs(ctx->r11);
    // 0x8026BAE8: jal         0x8026BB00
    // 0x8026BAEC: sh          $t4, 0x30($s0)
    MEM_H(0X30, ctx->r16) = ctx->r12;
    ovl_8024B800_func_8026BB00(rdram, ctx);
        goto after_1;
    // 0x8026BAEC: sh          $t4, 0x30($s0)
    MEM_H(0X30, ctx->r16) = ctx->r12;
    after_1:
    // 0x8026BAF0: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x8026BAF4: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x8026BAF8: jr          $ra
    // 0x8026BAFC: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    return;
    // 0x8026BAFC: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void ovl_8024B800_func_8026BAF0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8026BAF0: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x8026BAF4: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x8026BAF8: jr          $ra
    // 0x8026BAFC: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    return;
    // 0x8026BAFC: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void ovl_8024B800_func_8026BB00(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8026BB00: lh          $v0, 0x2E($a0)
    ctx->r2 = MEM_H(ctx->r4, 0X2E);
    // 0x8026BB04: addiu       $t6, $zero, 0x1F3
    ctx->r14 = ADD32(0, 0X1F3);
    // 0x8026BB08: slti        $at, $v0, 0x1F4
    ctx->r1 = SIGNED(ctx->r2) < 0X1F4 ? 1 : 0;
    // 0x8026BB0C: bne         $at, $zero, L_8026BB20
    if (ctx->r1 != 0) {
        // 0x8026BB10: addiu       $t7, $zero, -0x1F3
        ctx->r15 = ADD32(0, -0X1F3);
            goto L_8026BB20;
    }
    // 0x8026BB10: addiu       $t7, $zero, -0x1F3
    ctx->r15 = ADD32(0, -0X1F3);
    // 0x8026BB14: sh          $t6, 0x2E($a0)
    MEM_H(0X2E, ctx->r4) = ctx->r14;
    // 0x8026BB18: lh          $v0, 0x2E($a0)
    ctx->r2 = MEM_H(ctx->r4, 0X2E);
    // 0x8026BB1C: nop

L_8026BB20:
    // 0x8026BB20: slti        $at, $v0, -0x1F3
    ctx->r1 = SIGNED(ctx->r2) < -0X1F3 ? 1 : 0;
    // 0x8026BB24: beq         $at, $zero, L_8026BB30
    if (ctx->r1 == 0) {
        // 0x8026BB28: addiu       $t8, $zero, 0x155
        ctx->r24 = ADD32(0, 0X155);
            goto L_8026BB30;
    }
    // 0x8026BB28: addiu       $t8, $zero, 0x155
    ctx->r24 = ADD32(0, 0X155);
    // 0x8026BB2C: sh          $t7, 0x2E($a0)
    MEM_H(0X2E, ctx->r4) = ctx->r15;
L_8026BB30:
    // 0x8026BB30: lh          $v0, 0x30($a0)
    ctx->r2 = MEM_H(ctx->r4, 0X30);
    // 0x8026BB34: addiu       $t9, $zero, -0x155
    ctx->r25 = ADD32(0, -0X155);
    // 0x8026BB38: slti        $at, $v0, 0x156
    ctx->r1 = SIGNED(ctx->r2) < 0X156 ? 1 : 0;
    // 0x8026BB3C: bne         $at, $zero, L_8026BB54
    if (ctx->r1 != 0) {
        // 0x8026BB40: slti        $at, $v0, -0x155
        ctx->r1 = SIGNED(ctx->r2) < -0X155 ? 1 : 0;
            goto L_8026BB54;
    }
    // 0x8026BB40: slti        $at, $v0, -0x155
    ctx->r1 = SIGNED(ctx->r2) < -0X155 ? 1 : 0;
    // 0x8026BB44: sh          $t8, 0x30($a0)
    MEM_H(0X30, ctx->r4) = ctx->r24;
    // 0x8026BB48: lh          $v0, 0x30($a0)
    ctx->r2 = MEM_H(ctx->r4, 0X30);
    // 0x8026BB4C: nop

    // 0x8026BB50: slti        $at, $v0, -0x155
    ctx->r1 = SIGNED(ctx->r2) < -0X155 ? 1 : 0;
L_8026BB54:
    // 0x8026BB54: beq         $at, $zero, L_8026BB60
    if (ctx->r1 == 0) {
        // 0x8026BB58: nop
    
            goto L_8026BB60;
    }
    // 0x8026BB58: nop

    // 0x8026BB5C: sh          $t9, 0x30($a0)
    MEM_H(0X30, ctx->r4) = ctx->r25;
L_8026BB60:
    // 0x8026BB60: jr          $ra
    // 0x8026BB64: nop

    return;
    // 0x8026BB64: nop

;}
RECOMP_FUNC void ovl_8024B800_func_8026BB68(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8026BB68: lw          $v0, 0xC8($a0)
    ctx->r2 = MEM_W(ctx->r4, 0XC8);
    // 0x8026BB6C: lui         $v1, 0x8009
    ctx->r3 = S32(0X8009 << 16);
    // 0x8026BB70: lw          $t6, 0x91C($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X91C);
    // 0x8026BB74: nop

    // 0x8026BB78: bne         $a0, $t6, L_8026BB94
    if (ctx->r4 != ctx->r14) {
        // 0x8026BB7C: nop
    
            goto L_8026BB94;
    }
    // 0x8026BB7C: nop

    // 0x8026BB80: lhu         $t7, 0x10($v0)
    ctx->r15 = MEM_HU(ctx->r2, 0X10);
    // 0x8026BB84: nop

    // 0x8026BB88: andi        $t8, $t7, 0x2000
    ctx->r24 = ctx->r15 & 0X2000;
    // 0x8026BB8C: bne         $t8, $zero, L_8026BC54
    if (ctx->r24 != 0) {
        // 0x8026BB90: nop
    
            goto L_8026BC54;
    }
    // 0x8026BB90: nop

L_8026BB94:
    // 0x8026BB94: lw          $v1, 0x3B20($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X3B20);
    // 0x8026BB98: nop

    // 0x8026BB9C: lw          $t9, 0xA0($v1)
    ctx->r25 = MEM_W(ctx->r3, 0XA0);
    // 0x8026BBA0: nop

    // 0x8026BBA4: beq         $a0, $t9, L_8026BC54
    if (ctx->r4 == ctx->r25) {
        // 0x8026BBA8: nop
    
            goto L_8026BC54;
    }
    // 0x8026BBA8: nop

    // 0x8026BBAC: lw          $t0, 0x88($v1)
    ctx->r8 = MEM_W(ctx->r3, 0X88);
    // 0x8026BBB0: lui         $t2, 0x8012
    ctx->r10 = S32(0X8012 << 16);
    // 0x8026BBB4: bne         $t0, $zero, L_8026BBCC
    if (ctx->r8 != 0) {
        // 0x8026BBB8: nop
    
            goto L_8026BBCC;
    }
    // 0x8026BBB8: nop

    // 0x8026BBBC: lw          $t1, 0x914($v0)
    ctx->r9 = MEM_W(ctx->r2, 0X914);
    // 0x8026BBC0: nop

    // 0x8026BBC4: beq         $a0, $t1, L_8026BC54
    if (ctx->r4 == ctx->r9) {
        // 0x8026BBC8: nop
    
            goto L_8026BC54;
    }
    // 0x8026BBC8: nop

L_8026BBCC:
    // 0x8026BBCC: lhu         $t2, 0xB78($t2)
    ctx->r10 = MEM_HU(ctx->r10, 0XB78);
    // 0x8026BBD0: nop

    // 0x8026BBD4: slti        $at, $t2, 0x8
    ctx->r1 = SIGNED(ctx->r10) < 0X8 ? 1 : 0;
    // 0x8026BBD8: beq         $at, $zero, L_8026BC54
    if (ctx->r1 == 0) {
        // 0x8026BBDC: nop
    
            goto L_8026BC54;
    }
    // 0x8026BBDC: nop

    // 0x8026BBE0: lhu         $t3, 0x14($a0)
    ctx->r11 = MEM_HU(ctx->r4, 0X14);
    // 0x8026BBE4: nop

    // 0x8026BBE8: andi        $t4, $t3, 0x400
    ctx->r12 = ctx->r11 & 0X400;
    // 0x8026BBEC: bne         $t4, $zero, L_8026BC54
    if (ctx->r12 != 0) {
        // 0x8026BBF0: nop
    
            goto L_8026BC54;
    }
    // 0x8026BBF0: nop

    // 0x8026BBF4: lhu         $t5, 0x8($v0)
    ctx->r13 = MEM_HU(ctx->r2, 0X8);
    // 0x8026BBF8: nop

    // 0x8026BBFC: andi        $t6, $t5, 0x1
    ctx->r14 = ctx->r13 & 0X1;
    // 0x8026BC00: beq         $t6, $zero, L_8026BC30
    if (ctx->r14 == 0) {
        // 0x8026BC04: nop
    
            goto L_8026BC30;
    }
    // 0x8026BC04: nop

    // 0x8026BC08: lw          $t7, 0x24($v0)
    ctx->r15 = MEM_W(ctx->r2, 0X24);
    // 0x8026BC0C: lh          $t0, 0x2E($a0)
    ctx->r8 = MEM_H(ctx->r4, 0X2E);
    // 0x8026BC10: lh          $t8, 0x8B4($t7)
    ctx->r24 = MEM_H(ctx->r15, 0X8B4);
    // 0x8026BC14: addiu       $t9, $zero, -0xA
    ctx->r25 = ADD32(0, -0XA);
    // 0x8026BC18: subu        $v1, $t9, $t8
    ctx->r3 = SUB32(ctx->r25, ctx->r24);
    // 0x8026BC1C: slt         $at, $v1, $t0
    ctx->r1 = SIGNED(ctx->r3) < SIGNED(ctx->r8) ? 1 : 0;
    // 0x8026BC20: beq         $at, $zero, L_8026BC54
    if (ctx->r1 == 0) {
        // 0x8026BC24: nop
    
            goto L_8026BC54;
    }
    // 0x8026BC24: nop

    // 0x8026BC28: jr          $ra
    // 0x8026BC2C: sh          $v1, 0x2E($a0)
    MEM_H(0X2E, ctx->r4) = ctx->r3;
    return;
    // 0x8026BC2C: sh          $v1, 0x2E($a0)
    MEM_H(0X2E, ctx->r4) = ctx->r3;
L_8026BC30:
    // 0x8026BC30: lw          $t1, 0x24($v0)
    ctx->r9 = MEM_W(ctx->r2, 0X24);
    // 0x8026BC34: lh          $t2, 0x2E($a0)
    ctx->r10 = MEM_H(ctx->r4, 0X2E);
    // 0x8026BC38: lh          $v1, 0x8B4($t1)
    ctx->r3 = MEM_H(ctx->r9, 0X8B4);
    // 0x8026BC3C: nop

    // 0x8026BC40: addiu       $v1, $v1, 0xA
    ctx->r3 = ADD32(ctx->r3, 0XA);
    // 0x8026BC44: slt         $at, $t2, $v1
    ctx->r1 = SIGNED(ctx->r10) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x8026BC48: beq         $at, $zero, L_8026BC54
    if (ctx->r1 == 0) {
        // 0x8026BC4C: nop
    
            goto L_8026BC54;
    }
    // 0x8026BC4C: nop

    // 0x8026BC50: sh          $v1, 0x2E($a0)
    MEM_H(0X2E, ctx->r4) = ctx->r3;
L_8026BC54:
    // 0x8026BC54: jr          $ra
    // 0x8026BC58: nop

    return;
    // 0x8026BC58: nop

;}
RECOMP_FUNC void ovl_8024B800_func_8026BC0C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8026BC0C: lh          $t0, 0x2E($a0)
    ctx->r8 = MEM_H(ctx->r4, 0X2E);
    // 0x8026BC10: lh          $t8, 0x8B4($t7)
    ctx->r24 = MEM_H(ctx->r15, 0X8B4);
    // 0x8026BC14: addiu       $t9, $zero, -0xA
    ctx->r25 = ADD32(0, -0XA);
    // 0x8026BC18: subu        $v1, $t9, $t8
    ctx->r3 = SUB32(ctx->r25, ctx->r24);
    // 0x8026BC1C: slt         $at, $v1, $t0
    ctx->r1 = SIGNED(ctx->r3) < SIGNED(ctx->r8) ? 1 : 0;
    // 0x8026BC20: beq         $at, $zero, L_8026BC54
    if (ctx->r1 == 0) {
        // 0x8026BC24: nop
    
            goto L_8026BC54;
    }
    // 0x8026BC24: nop

    // 0x8026BC28: jr          $ra
    // 0x8026BC2C: sh          $v1, 0x2E($a0)
    MEM_H(0X2E, ctx->r4) = ctx->r3;
    return;
    // 0x8026BC2C: sh          $v1, 0x2E($a0)
    MEM_H(0X2E, ctx->r4) = ctx->r3;
    // 0x8026BC30: lw          $t1, 0x24($v0)
    ctx->r9 = MEM_W(ctx->r2, 0X24);
    // 0x8026BC34: lh          $t2, 0x2E($a0)
    ctx->r10 = MEM_H(ctx->r4, 0X2E);
    // 0x8026BC38: lh          $v1, 0x8B4($t1)
    ctx->r3 = MEM_H(ctx->r9, 0X8B4);
    // 0x8026BC3C: nop

    // 0x8026BC40: addiu       $v1, $v1, 0xA
    ctx->r3 = ADD32(ctx->r3, 0XA);
    // 0x8026BC44: slt         $at, $t2, $v1
    ctx->r1 = SIGNED(ctx->r10) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x8026BC48: beq         $at, $zero, L_8026BC54
    if (ctx->r1 == 0) {
        // 0x8026BC4C: nop
    
            goto L_8026BC54;
    }
    // 0x8026BC4C: nop

    // 0x8026BC50: sh          $v1, 0x2E($a0)
    MEM_H(0X2E, ctx->r4) = ctx->r3;
L_8026BC54:
    // 0x8026BC54: jr          $ra
    // 0x8026BC58: nop

    return;
    // 0x8026BC58: nop

;}
RECOMP_FUNC void ovl_8024B800_func_8026BC5C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8026BC5C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8026BC60: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8026BC64: lh          $t6, 0x2E($a0)
    ctx->r14 = MEM_H(ctx->r4, 0X2E);
    // 0x8026BC68: lh          $t7, 0x30($a0)
    ctx->r15 = MEM_H(ctx->r4, 0X30);
    // 0x8026BC6C: mtc1        $t6, $f18
    ctx->f18.u32l = ctx->r14;
    // 0x8026BC70: mtc1        $t7, $f16
    ctx->f16.u32l = ctx->r15;
    // 0x8026BC74: cvt.s.w     $f12, $f18
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 18);
    ctx->f12.fl = CVT_S_W(ctx->f18.u32l);
    // 0x8026BC78: lui         $a2, 0x8028
    ctx->r6 = S32(0X8028 << 16);
    // 0x8026BC7C: addiu       $a2, $a2, -0x3000
    ctx->r6 = ADD32(ctx->r6, -0X3000);
    // 0x8026BC80: cvt.s.w     $f14, $f16
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 16);
    ctx->f14.fl = CVT_S_W(ctx->f16.u32l);
    // 0x8026BC84: jal         0x8027A184
    // 0x8026BC88: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    ovl_8024B800_func_8027A184(rdram, ctx);
        goto after_0;
    // 0x8026BC88: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x8026BC8C: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x8026BC90: beq         $v0, $zero, L_8026BD28
    if (ctx->r2 == 0) {
        // 0x8026BC94: or          $v1, $v0, $zero
        ctx->r3 = ctx->r2 | 0;
            goto L_8026BD28;
    }
    // 0x8026BC94: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
    // 0x8026BC98: lui         $a1, 0x8009
    ctx->r5 = S32(0X8009 << 16);
    // 0x8026BC9C: addiu       $a1, $a1, 0x3B20
    ctx->r5 = ADD32(ctx->r5, 0X3B20);
    // 0x8026BCA0: lw          $t8, 0x0($a1)
    ctx->r24 = MEM_W(ctx->r5, 0X0);
    // 0x8026BCA4: addiu       $a2, $zero, 0xC
    ctx->r6 = ADD32(0, 0XC);
    // 0x8026BCA8: lh          $t9, 0xD6($t8)
    ctx->r25 = MEM_H(ctx->r24, 0XD6);
    // 0x8026BCAC: cfc1        $t2, $FpcCsr
    ctx->r10 = get_cop1_cs();
    // 0x8026BCB0: multu       $t9, $a2
    result = U64(U32(ctx->r25)) * U64(U32(ctx->r6)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8026BCB4: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x8026BCB8: addiu       $v0, $v0, 0x680
    ctx->r2 = ADD32(ctx->r2, 0X680);
    // 0x8026BCBC: ori         $at, $t2, 0x3
    ctx->r1 = ctx->r10 | 0X3;
    // 0x8026BCC0: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x8026BCC4: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x8026BCC8: mflo        $t0
    ctx->r8 = lo;
    // 0x8026BCCC: addu        $t1, $v0, $t0
    ctx->r9 = ADD32(ctx->r2, ctx->r8);
    // 0x8026BCD0: lwc1        $f8, 0x8($t1)
    ctx->f8.u32l = MEM_W(ctx->r9, 0X8);
    // 0x8026BCD4: nop

    // 0x8026BCD8: cvt.w.s     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.u32l = CVT_W_S(ctx->f8.fl);
    // 0x8026BCDC: mfc1        $t3, $f10
    ctx->r11 = (int32_t)ctx->f10.u32l;
    // 0x8026BCE0: ctc1        $t2, $FpcCsr
    set_cop1_cs(ctx->r10);
    // 0x8026BCE4: sh          $t3, 0x2E($a0)
    MEM_H(0X2E, ctx->r4) = ctx->r11;
    // 0x8026BCE8: lw          $t4, 0x0($a1)
    ctx->r12 = MEM_W(ctx->r5, 0X0);
    // 0x8026BCEC: cfc1        $t8, $FpcCsr
    ctx->r24 = get_cop1_cs();
    // 0x8026BCF0: lh          $t5, 0xD6($t4)
    ctx->r13 = MEM_H(ctx->r12, 0XD6);
    // 0x8026BCF4: ori         $at, $t8, 0x3
    ctx->r1 = ctx->r24 | 0X3;
    // 0x8026BCF8: multu       $t5, $a2
    result = U64(U32(ctx->r13)) * U64(U32(ctx->r6)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8026BCFC: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x8026BD00: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x8026BD04: mflo        $t6
    ctx->r14 = lo;
    // 0x8026BD08: addu        $t7, $v0, $t6
    ctx->r15 = ADD32(ctx->r2, ctx->r14);
    // 0x8026BD0C: lwc1        $f16, 0x0($t7)
    ctx->f16.u32l = MEM_W(ctx->r15, 0X0);
    // 0x8026BD10: nop

    // 0x8026BD14: cvt.w.s     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.u32l = CVT_W_S(ctx->f16.fl);
    // 0x8026BD18: mfc1        $t9, $f18
    ctx->r25 = (int32_t)ctx->f18.u32l;
    // 0x8026BD1C: ctc1        $t8, $FpcCsr
    set_cop1_cs(ctx->r24);
    // 0x8026BD20: sh          $t9, 0x30($a0)
    MEM_H(0X30, ctx->r4) = ctx->r25;
    // 0x8026BD24: nop

L_8026BD28:
    // 0x8026BD28: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8026BD2C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8026BD30: jr          $ra
    // 0x8026BD34: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    return;
    // 0x8026BD34: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
;}
RECOMP_FUNC void ovl_8024B800_func_8026BD38(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8026BD38: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8026BD3C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8026BD40: lh          $t6, 0x2E($a0)
    ctx->r14 = MEM_H(ctx->r4, 0X2E);
    // 0x8026BD44: lh          $t7, 0x30($a0)
    ctx->r15 = MEM_H(ctx->r4, 0X30);
    // 0x8026BD48: mtc1        $t6, $f4
    ctx->f4.u32l = ctx->r14;
    // 0x8026BD4C: lwc1        $f8, 0x4C($a0)
    ctx->f8.u32l = MEM_W(ctx->r4, 0X4C);
    // 0x8026BD50: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x8026BD54: mtc1        $t7, $f10
    ctx->f10.u32l = ctx->r15;
    // 0x8026BD58: lwc1        $f18, 0x44($a0)
    ctx->f18.u32l = MEM_W(ctx->r4, 0X44);
    // 0x8026BD5C: cvt.s.w     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.fl = CVT_S_W(ctx->f10.u32l);
    // 0x8026BD60: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x8026BD64: sub.s       $f14, $f6, $f8
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f14.fl = ctx->f6.fl - ctx->f8.fl;
    // 0x8026BD68: mul.s       $f4, $f14, $f14
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f4.fl = MUL_S(ctx->f14.fl, ctx->f14.fl);
    // 0x8026BD6C: sub.s       $f0, $f16, $f18
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f0.fl = ctx->f16.fl - ctx->f18.fl;
    // 0x8026BD70: swc1        $f14, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f14.u32l;
    // 0x8026BD74: swc1        $f0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f0.u32l;
    // 0x8026BD78: mul.s       $f6, $f0, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = MUL_S(ctx->f0.fl, ctx->f0.fl);
    // 0x8026BD7C: jal         0x8007FA40
    // 0x8026BD80: add.s       $f12, $f4, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f12.fl = ctx->f4.fl + ctx->f6.fl;
    func_8007FA40(rdram, ctx);
        goto after_0;
    // 0x8026BD80: add.s       $f12, $f4, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f12.fl = ctx->f4.fl + ctx->f6.fl;
    after_0:
    // 0x8026BD84: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x8026BD88: lwc1        $f14, 0x1C($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x8026BD8C: swc1        $f0, 0xB4($a0)
    MEM_W(0XB4, ctx->r4) = ctx->f0.u32l;
    // 0x8026BD90: lwc1        $f12, 0x18($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X18);
    // 0x8026BD94: jal         0x8001C5D0
    // 0x8026BD98: nop

    func_8001C5D0(rdram, ctx);
        goto after_1;
    // 0x8026BD98: nop

    after_1:
    // 0x8026BD9C: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x8026BDA0: nop

    // 0x8026BDA4: swc1        $f0, 0xB0($a0)
    MEM_W(0XB0, ctx->r4) = ctx->f0.u32l;
    // 0x8026BDA8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8026BDAC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x8026BDB0: jr          $ra
    // 0x8026BDB4: nop

    return;
    // 0x8026BDB4: nop

;}
RECOMP_FUNC void ovl_8024B800_func_8026BDB8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8026BDB8: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x8026BDBC: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8026BDC0: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x8026BDC4: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x8026BDC8: sw          $a1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r5;
    // 0x8026BDCC: lw          $v0, 0xC8($a0)
    ctx->r2 = MEM_W(ctx->r4, 0XC8);
    // 0x8026BDD0: lbu         $t8, 0x7($a0)
    ctx->r24 = MEM_BU(ctx->r4, 0X7);
    // 0x8026BDD4: lw          $t6, 0x24($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X24);
    // 0x8026BDD8: sll         $t9, $t8, 5
    ctx->r25 = S32(ctx->r24 << 5);
    // 0x8026BDDC: lh          $t0, 0x8B8($v0)
    ctx->r8 = MEM_H(ctx->r2, 0X8B8);
    // 0x8026BDE0: lw          $t7, 0x18($t6)
    ctx->r15 = MEM_W(ctx->r14, 0X18);
    // 0x8026BDE4: subu        $t9, $t9, $t8
    ctx->r25 = SUB32(ctx->r25, ctx->r24);
    // 0x8026BDE8: sll         $t9, $t9, 3
    ctx->r25 = S32(ctx->r25 << 3);
    // 0x8026BDEC: mtc1        $t0, $f4
    ctx->f4.u32l = ctx->r8;
    // 0x8026BDF0: addu        $s1, $t7, $t9
    ctx->r17 = ADD32(ctx->r15, ctx->r25);
    // 0x8026BDF4: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x8026BDF8: lwc1        $f8, 0x4C($s1)
    ctx->f8.u32l = MEM_W(ctx->r17, 0X4C);
    // 0x8026BDFC: lwc1        $f12, 0x44($s1)
    ctx->f12.u32l = MEM_W(ctx->r17, 0X44);
    // 0x8026BE00: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x8026BE04: sub.s       $f14, $f6, $f8
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f14.fl = ctx->f6.fl - ctx->f8.fl;
    // 0x8026BE08: jal         0x8001C5D0
    // 0x8026BE0C: neg.s       $f12, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); 
    ctx->f12.fl = -ctx->f12.fl;
    func_8001C5D0(rdram, ctx);
        goto after_0;
    // 0x8026BE0C: neg.s       $f12, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); 
    ctx->f12.fl = -ctx->f12.fl;
    after_0:
    // 0x8026BE10: swc1        $f0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f0.u32l;
    // 0x8026BE14: jal         0x80081040
    // 0x8026BE18: mov.s       $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    ctx->f12.fl = ctx->f0.fl;
    func_80081040(rdram, ctx);
        goto after_1;
    // 0x8026BE18: mov.s       $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    ctx->f12.fl = ctx->f0.fl;
    after_1:
    // 0x8026BE1C: lwc1        $f10, 0x34($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X34);
    // 0x8026BE20: lwc1        $f18, 0x4C($s1)
    ctx->f18.u32l = MEM_W(ctx->r17, 0X4C);
    // 0x8026BE24: mul.s       $f16, $f0, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = MUL_S(ctx->f0.fl, ctx->f10.fl);
    // 0x8026BE28: add.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f16.fl + ctx->f18.fl;
    // 0x8026BE2C: cfc1        $t1, $FpcCsr
    ctx->r9 = get_cop1_cs();
    // 0x8026BE30: nop

    // 0x8026BE34: ori         $at, $t1, 0x3
    ctx->r1 = ctx->r9 | 0X3;
    // 0x8026BE38: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x8026BE3C: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x8026BE40: nop

    // 0x8026BE44: cvt.w.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = CVT_W_S(ctx->f4.fl);
    // 0x8026BE48: mfc1        $t2, $f6
    ctx->r10 = (int32_t)ctx->f6.u32l;
    // 0x8026BE4C: ctc1        $t1, $FpcCsr
    set_cop1_cs(ctx->r9);
    // 0x8026BE50: sh          $t2, 0x2E($s0)
    MEM_H(0X2E, ctx->r16) = ctx->r10;
    // 0x8026BE54: lwc1        $f12, 0x2C($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x8026BE58: jal         0x80080E80
    // 0x8026BE5C: nop

    func_80080E80(rdram, ctx);
        goto after_2;
    // 0x8026BE5C: nop

    after_2:
    // 0x8026BE60: lwc1        $f8, 0x34($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X34);
    // 0x8026BE64: lwc1        $f16, 0x44($s1)
    ctx->f16.u32l = MEM_W(ctx->r17, 0X44);
    // 0x8026BE68: mul.s       $f10, $f0, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = MUL_S(ctx->f0.fl, ctx->f8.fl);
    // 0x8026BE6C: lbu         $t5, 0x0($s0)
    ctx->r13 = MEM_BU(ctx->r16, 0X0);
    // 0x8026BE70: add.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl + ctx->f16.fl;
    // 0x8026BE74: cfc1        $t3, $FpcCsr
    ctx->r11 = get_cop1_cs();
    // 0x8026BE78: nop

    // 0x8026BE7C: ori         $at, $t3, 0x3
    ctx->r1 = ctx->r11 | 0X3;
    // 0x8026BE80: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x8026BE84: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x8026BE88: addiu       $at, $zero, 0x1A
    ctx->r1 = ADD32(0, 0X1A);
    // 0x8026BE8C: cvt.w.s     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    ctx->f4.u32l = CVT_W_S(ctx->f18.fl);
    // 0x8026BE90: mfc1        $t4, $f4
    ctx->r12 = (int32_t)ctx->f4.u32l;
    // 0x8026BE94: ctc1        $t3, $FpcCsr
    set_cop1_cs(ctx->r11);
    // 0x8026BE98: beq         $t5, $at, L_8026BFCC
    if (ctx->r13 == ctx->r1) {
        // 0x8026BE9C: sh          $t4, 0x30($s0)
        MEM_H(0X30, ctx->r16) = ctx->r12;
            goto L_8026BFCC;
    }
    // 0x8026BE9C: sh          $t4, 0x30($s0)
    MEM_H(0X30, ctx->r16) = ctx->r12;
    // 0x8026BEA0: lw          $t6, 0xD4($s0)
    ctx->r14 = MEM_W(ctx->r16, 0XD4);
    // 0x8026BEA4: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x8026BEA8: lbu         $t8, 0x4($t6)
    ctx->r24 = MEM_BU(ctx->r14, 0X4);
    // 0x8026BEAC: lui         $s1, 0x8009
    ctx->r17 = S32(0X8009 << 16);
    // 0x8026BEB0: andi        $t7, $t8, 0x7F
    ctx->r15 = ctx->r24 & 0X7F;
    // 0x8026BEB4: bne         $t7, $at, L_8026BFCC
    if (ctx->r15 != ctx->r1) {
        // 0x8026BEB8: nop
    
            goto L_8026BFCC;
    }
    // 0x8026BEB8: nop

    // 0x8026BEBC: lh          $t9, 0x30($s0)
    ctx->r25 = MEM_H(ctx->r16, 0X30);
    // 0x8026BEC0: addiu       $s1, $s1, 0x3B20
    ctx->r17 = ADD32(ctx->r17, 0X3B20);
    // 0x8026BEC4: mtc1        $t9, $f6
    ctx->f6.u32l = ctx->r25;
    // 0x8026BEC8: lw          $t0, 0x0($s1)
    ctx->r8 = MEM_W(ctx->r17, 0X0);
    // 0x8026BECC: cvt.s.w     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.fl = CVT_S_W(ctx->f6.u32l);
    // 0x8026BED0: lwc1        $f10, 0x0($t0)
    ctx->f10.u32l = MEM_W(ctx->r8, 0X0);
    // 0x8026BED4: nop

    // 0x8026BED8: sub.s       $f12, $f8, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f12.fl = ctx->f8.fl - ctx->f10.fl;
    // 0x8026BEDC: jal         0x80272AEC
    // 0x8026BEE0: swc1        $f12, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f12.u32l;
    ovl_8024B800_func_80272AEC(rdram, ctx);
        goto after_3;
    // 0x8026BEE0: swc1        $f12, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f12.u32l;
    after_3:
    // 0x8026BEE4: lui         $at, 0x42C8
    ctx->r1 = S32(0X42C8 << 16);
    // 0x8026BEE8: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    // 0x8026BEEC: lwc1        $f12, 0x20($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X20);
    // 0x8026BEF0: c.lt.s      $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f2.fl < ctx->f0.fl;
    // 0x8026BEF4: nop

    // 0x8026BEF8: bc1f        L_8026BFCC
    if (!c1cs) {
        // 0x8026BEFC: nop
    
            goto L_8026BFCC;
    }
    // 0x8026BEFC: nop

    // 0x8026BF00: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x8026BF04: lui         $at, 0x8028
    ctx->r1 = S32(0X8028 << 16);
    // 0x8026BF08: c.lt.s      $f16, $f12
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f16.fl < ctx->f12.fl;
    // 0x8026BF0C: nop

    // 0x8026BF10: bc1f        L_8026BF74
    if (!c1cs) {
        // 0x8026BF14: nop
    
            goto L_8026BF74;
    }
    // 0x8026BF14: nop

    // 0x8026BF18: lui         $at, 0x8028
    ctx->r1 = S32(0X8028 << 16);
    // 0x8026BF1C: sub.s       $f18, $f0, $f2
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f18.fl = ctx->f0.fl - ctx->f2.fl;
    // 0x8026BF20: lwc1        $f7, -0x2A98($at)
    ctx->f_odd[(7 - 1) * 2] = MEM_W(ctx->r1, -0X2A98);
    // 0x8026BF24: lwc1        $f6, -0x2A94($at)
    ctx->f6.u32l = MEM_W(ctx->r1, -0X2A94);
    // 0x8026BF28: lw          $t1, 0x0($s1)
    ctx->r9 = MEM_W(ctx->r17, 0X0);
    // 0x8026BF2C: cvt.d.s     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.fl); 
    ctx->f4.d = CVT_D_S(ctx->f18.fl);
    // 0x8026BF30: mul.d       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f6.d); 
    ctx->f8.d = MUL_D(ctx->f4.d, ctx->f6.d);
    // 0x8026BF34: lwc1        $f10, 0x0($t1)
    ctx->f10.u32l = MEM_W(ctx->r9, 0X0);
    // 0x8026BF38: nop

    // 0x8026BF3C: add.s       $f16, $f10, $f2
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f16.fl = ctx->f10.fl + ctx->f2.fl;
    // 0x8026BF40: cvt.d.s     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); 
    ctx->f18.d = CVT_D_S(ctx->f16.fl);
    // 0x8026BF44: add.d       $f4, $f18, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f18.d); NAN_CHECK(ctx->f8.d); 
    ctx->f4.d = ctx->f18.d + ctx->f8.d;
    // 0x8026BF48: cfc1        $t2, $FpcCsr
    ctx->r10 = get_cop1_cs();
    // 0x8026BF4C: nop

    // 0x8026BF50: ori         $at, $t2, 0x3
    ctx->r1 = ctx->r10 | 0X3;
    // 0x8026BF54: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x8026BF58: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x8026BF5C: nop

    // 0x8026BF60: cvt.w.d     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = CVT_W_D(ctx->f4.d);
    // 0x8026BF64: mfc1        $t3, $f6
    ctx->r11 = (int32_t)ctx->f6.u32l;
    // 0x8026BF68: ctc1        $t2, $FpcCsr
    set_cop1_cs(ctx->r10);
    // 0x8026BF6C: b           L_8026BFCC
    // 0x8026BF70: sh          $t3, 0x30($s0)
    MEM_H(0X30, ctx->r16) = ctx->r11;
        goto L_8026BFCC;
    // 0x8026BF70: sh          $t3, 0x30($s0)
    MEM_H(0X30, ctx->r16) = ctx->r11;
L_8026BF74:
    // 0x8026BF74: sub.s       $f10, $f0, $f2
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f10.fl = ctx->f0.fl - ctx->f2.fl;
    // 0x8026BF78: lwc1        $f19, -0x2A90($at)
    ctx->f_odd[(19 - 1) * 2] = MEM_W(ctx->r1, -0X2A90);
    // 0x8026BF7C: lwc1        $f18, -0x2A8C($at)
    ctx->f18.u32l = MEM_W(ctx->r1, -0X2A8C);
    // 0x8026BF80: lw          $t4, 0x0($s1)
    ctx->r12 = MEM_W(ctx->r17, 0X0);
    // 0x8026BF84: cvt.d.s     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.fl); 
    ctx->f16.d = CVT_D_S(ctx->f10.fl);
    // 0x8026BF88: mul.d       $f8, $f16, $f18
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.d); NAN_CHECK(ctx->f18.d); 
    ctx->f8.d = MUL_D(ctx->f16.d, ctx->f18.d);
    // 0x8026BF8C: lwc1        $f4, 0x0($t4)
    ctx->f4.u32l = MEM_W(ctx->r12, 0X0);
    // 0x8026BF90: nop

    // 0x8026BF94: sub.s       $f6, $f4, $f2
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f6.fl = ctx->f4.fl - ctx->f2.fl;
    // 0x8026BF98: cvt.d.s     $f10, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f10.d = CVT_D_S(ctx->f6.fl);
    // 0x8026BF9C: sub.d       $f16, $f10, $f8
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f8.d); 
    ctx->f16.d = ctx->f10.d - ctx->f8.d;
    // 0x8026BFA0: cfc1        $t5, $FpcCsr
    ctx->r13 = get_cop1_cs();
    // 0x8026BFA4: nop

    // 0x8026BFA8: ori         $at, $t5, 0x3
    ctx->r1 = ctx->r13 | 0X3;
    // 0x8026BFAC: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x8026BFB0: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x8026BFB4: nop

    // 0x8026BFB8: cvt.w.d     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.u32l = CVT_W_D(ctx->f16.d);
    // 0x8026BFBC: mfc1        $t6, $f18
    ctx->r14 = (int32_t)ctx->f18.u32l;
    // 0x8026BFC0: ctc1        $t5, $FpcCsr
    set_cop1_cs(ctx->r13);
    // 0x8026BFC4: sh          $t6, 0x30($s0)
    MEM_H(0X30, ctx->r16) = ctx->r14;
    // 0x8026BFC8: nop

L_8026BFCC:
    // 0x8026BFCC: lui         $s1, 0x8009
    ctx->r17 = S32(0X8009 << 16);
    // 0x8026BFD0: addiu       $s1, $s1, 0x3B20
    ctx->r17 = ADD32(ctx->r17, 0X3B20);
    // 0x8026BFD4: lw          $t8, 0x0($s1)
    ctx->r24 = MEM_W(ctx->r17, 0X0);
    // 0x8026BFD8: nop

    // 0x8026BFDC: lwc1        $f12, 0x0($t8)
    ctx->f12.u32l = MEM_W(ctx->r24, 0X0);
    // 0x8026BFE0: jal         0x80272AEC
    // 0x8026BFE4: nop

    ovl_8024B800_func_80272AEC(rdram, ctx);
        goto after_4;
    // 0x8026BFE4: nop

    after_4:
    // 0x8026BFE8: lui         $at, 0x4248
    ctx->r1 = S32(0X4248 << 16);
    // 0x8026BFEC: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x8026BFF0: nop

    // 0x8026BFF4: add.s       $f6, $f0, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f0.fl + ctx->f4.fl;
    // 0x8026BFF8: cfc1        $t7, $FpcCsr
    ctx->r15 = get_cop1_cs();
    // 0x8026BFFC: nop

    // 0x8026C000: ori         $at, $t7, 0x3
    ctx->r1 = ctx->r15 | 0X3;
    // 0x8026C004: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x8026C008: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x8026C00C: nop

    // 0x8026C010: cvt.w.s     $f10, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    ctx->f10.u32l = CVT_W_S(ctx->f6.fl);
    // 0x8026C014: mfc1        $v1, $f10
    ctx->r3 = (int32_t)ctx->f10.u32l;
    // 0x8026C018: ctc1        $t7, $FpcCsr
    set_cop1_cs(ctx->r15);
    // 0x8026C01C: slti        $at, $v1, 0xC8
    ctx->r1 = SIGNED(ctx->r3) < 0XC8 ? 1 : 0;
    // 0x8026C020: beq         $at, $zero, L_8026C02C
    if (ctx->r1 == 0) {
        // 0x8026C024: nop
    
            goto L_8026C02C;
    }
    // 0x8026C024: nop

    // 0x8026C028: addiu       $v1, $zero, 0xC8
    ctx->r3 = ADD32(0, 0XC8);
L_8026C02C:
    // 0x8026C02C: lh          $v0, 0x30($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X30);
    // 0x8026C030: negu        $a0, $v1
    ctx->r4 = SUB32(0, ctx->r3);
    // 0x8026C034: slt         $at, $v1, $v0
    ctx->r1 = SIGNED(ctx->r3) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x8026C038: beq         $at, $zero, L_8026C050
    if (ctx->r1 == 0) {
        // 0x8026C03C: slt         $at, $v0, $a0
        ctx->r1 = SIGNED(ctx->r2) < SIGNED(ctx->r4) ? 1 : 0;
            goto L_8026C050;
    }
    // 0x8026C03C: slt         $at, $v0, $a0
    ctx->r1 = SIGNED(ctx->r2) < SIGNED(ctx->r4) ? 1 : 0;
    // 0x8026C040: sh          $v1, 0x30($s0)
    MEM_H(0X30, ctx->r16) = ctx->r3;
    // 0x8026C044: lh          $v0, 0x30($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X30);
    // 0x8026C048: nop

    // 0x8026C04C: slt         $at, $v0, $a0
    ctx->r1 = SIGNED(ctx->r2) < SIGNED(ctx->r4) ? 1 : 0;
L_8026C050:
    // 0x8026C050: beq         $at, $zero, L_8026C060
    if (ctx->r1 == 0) {
        // 0x8026C054: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_8026C060;
    }
    // 0x8026C054: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8026C058: sh          $a0, 0x30($s0)
    MEM_H(0X30, ctx->r16) = ctx->r4;
    // 0x8026C05C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_8026C060:
    // 0x8026C060: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x8026C064: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x8026C068: jr          $ra
    // 0x8026C06C: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x8026C06C: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void ovl_8024B800_func_8026BE98(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8026BE98: beq         $t5, $at, L_8026BFCC
    if (ctx->r13 == ctx->r1) {
        // 0x8026BE9C: sh          $t4, 0x30($s0)
        MEM_H(0X30, ctx->r16) = ctx->r12;
            goto L_8026BFCC;
    }
    // 0x8026BE9C: sh          $t4, 0x30($s0)
    MEM_H(0X30, ctx->r16) = ctx->r12;
    // 0x8026BEA0: lw          $t6, 0xD4($s0)
    ctx->r14 = MEM_W(ctx->r16, 0XD4);
    // 0x8026BEA4: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x8026BEA8: lbu         $t8, 0x4($t6)
    ctx->r24 = MEM_BU(ctx->r14, 0X4);
    // 0x8026BEAC: lui         $s1, 0x8009
    ctx->r17 = S32(0X8009 << 16);
    // 0x8026BEB0: andi        $t7, $t8, 0x7F
    ctx->r15 = ctx->r24 & 0X7F;
    // 0x8026BEB4: bne         $t7, $at, L_8026BFCC
    if (ctx->r15 != ctx->r1) {
        // 0x8026BEB8: nop
    
            goto L_8026BFCC;
    }
    // 0x8026BEB8: nop

    // 0x8026BEBC: lh          $t9, 0x30($s0)
    ctx->r25 = MEM_H(ctx->r16, 0X30);
    // 0x8026BEC0: addiu       $s1, $s1, 0x3B20
    ctx->r17 = ADD32(ctx->r17, 0X3B20);
    // 0x8026BEC4: mtc1        $t9, $f6
    ctx->f6.u32l = ctx->r25;
    // 0x8026BEC8: lw          $t0, 0x0($s1)
    ctx->r8 = MEM_W(ctx->r17, 0X0);
    // 0x8026BECC: cvt.s.w     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.fl = CVT_S_W(ctx->f6.u32l);
    // 0x8026BED0: lwc1        $f10, 0x0($t0)
    ctx->f10.u32l = MEM_W(ctx->r8, 0X0);
    // 0x8026BED4: nop

    // 0x8026BED8: sub.s       $f12, $f8, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f12.fl = ctx->f8.fl - ctx->f10.fl;
    // 0x8026BEDC: jal         0x80272AEC
    // 0x8026BEE0: swc1        $f12, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f12.u32l;
    ovl_8024B800_func_80272AEC(rdram, ctx);
        goto after_0;
    // 0x8026BEE0: swc1        $f12, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f12.u32l;
    after_0:
    // 0x8026BEE4: lui         $at, 0x42C8
    ctx->r1 = S32(0X42C8 << 16);
    // 0x8026BEE8: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    // 0x8026BEEC: lwc1        $f12, 0x20($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X20);
    // 0x8026BEF0: c.lt.s      $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f2.fl < ctx->f0.fl;
    // 0x8026BEF4: nop

    // 0x8026BEF8: bc1f        L_8026BFCC
    if (!c1cs) {
        // 0x8026BEFC: nop
    
            goto L_8026BFCC;
    }
    // 0x8026BEFC: nop

    // 0x8026BF00: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x8026BF04: lui         $at, 0x8028
    ctx->r1 = S32(0X8028 << 16);
    // 0x8026BF08: c.lt.s      $f16, $f12
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f16.fl < ctx->f12.fl;
    // 0x8026BF0C: nop

    // 0x8026BF10: bc1f        L_8026BF74
    if (!c1cs) {
        // 0x8026BF14: nop
    
            goto L_8026BF74;
    }
    // 0x8026BF14: nop

    // 0x8026BF18: lui         $at, 0x8028
    ctx->r1 = S32(0X8028 << 16);
    // 0x8026BF1C: sub.s       $f18, $f0, $f2
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f18.fl = ctx->f0.fl - ctx->f2.fl;
    // 0x8026BF20: lwc1        $f7, -0x2A98($at)
    ctx->f_odd[(7 - 1) * 2] = MEM_W(ctx->r1, -0X2A98);
    // 0x8026BF24: lwc1        $f6, -0x2A94($at)
    ctx->f6.u32l = MEM_W(ctx->r1, -0X2A94);
    // 0x8026BF28: lw          $t1, 0x0($s1)
    ctx->r9 = MEM_W(ctx->r17, 0X0);
    // 0x8026BF2C: cvt.d.s     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.fl); 
    ctx->f4.d = CVT_D_S(ctx->f18.fl);
    // 0x8026BF30: mul.d       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f6.d); 
    ctx->f8.d = MUL_D(ctx->f4.d, ctx->f6.d);
    // 0x8026BF34: lwc1        $f10, 0x0($t1)
    ctx->f10.u32l = MEM_W(ctx->r9, 0X0);
    // 0x8026BF38: nop

    // 0x8026BF3C: add.s       $f16, $f10, $f2
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f16.fl = ctx->f10.fl + ctx->f2.fl;
    // 0x8026BF40: cvt.d.s     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); 
    ctx->f18.d = CVT_D_S(ctx->f16.fl);
    // 0x8026BF44: add.d       $f4, $f18, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f18.d); NAN_CHECK(ctx->f8.d); 
    ctx->f4.d = ctx->f18.d + ctx->f8.d;
    // 0x8026BF48: cfc1        $t2, $FpcCsr
    ctx->r10 = get_cop1_cs();
    // 0x8026BF4C: nop

    // 0x8026BF50: ori         $at, $t2, 0x3
    ctx->r1 = ctx->r10 | 0X3;
    // 0x8026BF54: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x8026BF58: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x8026BF5C: nop

    // 0x8026BF60: cvt.w.d     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = CVT_W_D(ctx->f4.d);
    // 0x8026BF64: mfc1        $t3, $f6
    ctx->r11 = (int32_t)ctx->f6.u32l;
    // 0x8026BF68: ctc1        $t2, $FpcCsr
    set_cop1_cs(ctx->r10);
    // 0x8026BF6C: b           L_8026BFCC
    // 0x8026BF70: sh          $t3, 0x30($s0)
    MEM_H(0X30, ctx->r16) = ctx->r11;
        goto L_8026BFCC;
    // 0x8026BF70: sh          $t3, 0x30($s0)
    MEM_H(0X30, ctx->r16) = ctx->r11;
L_8026BF74:
    // 0x8026BF74: sub.s       $f10, $f0, $f2
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f10.fl = ctx->f0.fl - ctx->f2.fl;
    // 0x8026BF78: lwc1        $f19, -0x2A90($at)
    ctx->f_odd[(19 - 1) * 2] = MEM_W(ctx->r1, -0X2A90);
    // 0x8026BF7C: lwc1        $f18, -0x2A8C($at)
    ctx->f18.u32l = MEM_W(ctx->r1, -0X2A8C);
    // 0x8026BF80: lw          $t4, 0x0($s1)
    ctx->r12 = MEM_W(ctx->r17, 0X0);
    // 0x8026BF84: cvt.d.s     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.fl); 
    ctx->f16.d = CVT_D_S(ctx->f10.fl);
    // 0x8026BF88: mul.d       $f8, $f16, $f18
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.d); NAN_CHECK(ctx->f18.d); 
    ctx->f8.d = MUL_D(ctx->f16.d, ctx->f18.d);
    // 0x8026BF8C: lwc1        $f4, 0x0($t4)
    ctx->f4.u32l = MEM_W(ctx->r12, 0X0);
    // 0x8026BF90: nop

    // 0x8026BF94: sub.s       $f6, $f4, $f2
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f6.fl = ctx->f4.fl - ctx->f2.fl;
    // 0x8026BF98: cvt.d.s     $f10, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f10.d = CVT_D_S(ctx->f6.fl);
    // 0x8026BF9C: sub.d       $f16, $f10, $f8
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f8.d); 
    ctx->f16.d = ctx->f10.d - ctx->f8.d;
    // 0x8026BFA0: cfc1        $t5, $FpcCsr
    ctx->r13 = get_cop1_cs();
    // 0x8026BFA4: nop

    // 0x8026BFA8: ori         $at, $t5, 0x3
    ctx->r1 = ctx->r13 | 0X3;
    // 0x8026BFAC: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x8026BFB0: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x8026BFB4: nop

    // 0x8026BFB8: cvt.w.d     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.u32l = CVT_W_D(ctx->f16.d);
    // 0x8026BFBC: mfc1        $t6, $f18
    ctx->r14 = (int32_t)ctx->f18.u32l;
    // 0x8026BFC0: ctc1        $t5, $FpcCsr
    set_cop1_cs(ctx->r13);
    // 0x8026BFC4: sh          $t6, 0x30($s0)
    MEM_H(0X30, ctx->r16) = ctx->r14;
    // 0x8026BFC8: nop

L_8026BFCC:
    // 0x8026BFCC: lui         $s1, 0x8009
    ctx->r17 = S32(0X8009 << 16);
    // 0x8026BFD0: addiu       $s1, $s1, 0x3B20
    ctx->r17 = ADD32(ctx->r17, 0X3B20);
    // 0x8026BFD4: lw          $t8, 0x0($s1)
    ctx->r24 = MEM_W(ctx->r17, 0X0);
    // 0x8026BFD8: nop

    // 0x8026BFDC: lwc1        $f12, 0x0($t8)
    ctx->f12.u32l = MEM_W(ctx->r24, 0X0);
    // 0x8026BFE0: jal         0x80272AEC
    // 0x8026BFE4: nop

    ovl_8024B800_func_80272AEC(rdram, ctx);
        goto after_1;
    // 0x8026BFE4: nop

    after_1:
    // 0x8026BFE8: lui         $at, 0x4248
    ctx->r1 = S32(0X4248 << 16);
    // 0x8026BFEC: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x8026BFF0: nop

    // 0x8026BFF4: add.s       $f6, $f0, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f0.fl + ctx->f4.fl;
    // 0x8026BFF8: cfc1        $t7, $FpcCsr
    ctx->r15 = get_cop1_cs();
    // 0x8026BFFC: nop

    // 0x8026C000: ori         $at, $t7, 0x3
    ctx->r1 = ctx->r15 | 0X3;
    // 0x8026C004: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x8026C008: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x8026C00C: nop

    // 0x8026C010: cvt.w.s     $f10, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    ctx->f10.u32l = CVT_W_S(ctx->f6.fl);
    // 0x8026C014: mfc1        $v1, $f10
    ctx->r3 = (int32_t)ctx->f10.u32l;
    // 0x8026C018: ctc1        $t7, $FpcCsr
    set_cop1_cs(ctx->r15);
    // 0x8026C01C: slti        $at, $v1, 0xC8
    ctx->r1 = SIGNED(ctx->r3) < 0XC8 ? 1 : 0;
    // 0x8026C020: beq         $at, $zero, L_8026C02C
    if (ctx->r1 == 0) {
        // 0x8026C024: nop
    
            goto L_8026C02C;
    }
    // 0x8026C024: nop

    // 0x8026C028: addiu       $v1, $zero, 0xC8
    ctx->r3 = ADD32(0, 0XC8);
L_8026C02C:
    // 0x8026C02C: lh          $v0, 0x30($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X30);
    // 0x8026C030: negu        $a0, $v1
    ctx->r4 = SUB32(0, ctx->r3);
    // 0x8026C034: slt         $at, $v1, $v0
    ctx->r1 = SIGNED(ctx->r3) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x8026C038: beq         $at, $zero, L_8026C050
    if (ctx->r1 == 0) {
        // 0x8026C03C: slt         $at, $v0, $a0
        ctx->r1 = SIGNED(ctx->r2) < SIGNED(ctx->r4) ? 1 : 0;
            goto L_8026C050;
    }
    // 0x8026C03C: slt         $at, $v0, $a0
    ctx->r1 = SIGNED(ctx->r2) < SIGNED(ctx->r4) ? 1 : 0;
    // 0x8026C040: sh          $v1, 0x30($s0)
    MEM_H(0X30, ctx->r16) = ctx->r3;
    // 0x8026C044: lh          $v0, 0x30($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X30);
    // 0x8026C048: nop

    // 0x8026C04C: slt         $at, $v0, $a0
    ctx->r1 = SIGNED(ctx->r2) < SIGNED(ctx->r4) ? 1 : 0;
L_8026C050:
    // 0x8026C050: beq         $at, $zero, L_8026C060
    if (ctx->r1 == 0) {
        // 0x8026C054: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_8026C060;
    }
    // 0x8026C054: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8026C058: sh          $a0, 0x30($s0)
    MEM_H(0X30, ctx->r16) = ctx->r4;
    // 0x8026C05C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_8026C060:
    // 0x8026C060: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x8026C064: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x8026C068: jr          $ra
    // 0x8026C06C: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x8026C06C: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void ovl_8024B800_func_8026BEF4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8026BEF4: nop

    // 0x8026BEF8: bc1f        L_8026BFCC
    if (!c1cs) {
        // 0x8026BEFC: nop
    
            goto L_8026BFCC;
    }
    // 0x8026BEFC: nop

    // 0x8026BF00: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x8026BF04: lui         $at, 0x8028
    ctx->r1 = S32(0X8028 << 16);
    // 0x8026BF08: c.lt.s      $f16, $f12
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f16.fl < ctx->f12.fl;
    // 0x8026BF0C: nop

    // 0x8026BF10: bc1f        L_8026BF74
    if (!c1cs) {
        // 0x8026BF14: nop
    
            goto L_8026BF74;
    }
    // 0x8026BF14: nop

    // 0x8026BF18: lui         $at, 0x8028
    ctx->r1 = S32(0X8028 << 16);
    // 0x8026BF1C: sub.s       $f18, $f0, $f2
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f18.fl = ctx->f0.fl - ctx->f2.fl;
    // 0x8026BF20: lwc1        $f7, -0x2A98($at)
    ctx->f_odd[(7 - 1) * 2] = MEM_W(ctx->r1, -0X2A98);
    // 0x8026BF24: lwc1        $f6, -0x2A94($at)
    ctx->f6.u32l = MEM_W(ctx->r1, -0X2A94);
    // 0x8026BF28: lw          $t1, 0x0($s1)
    ctx->r9 = MEM_W(ctx->r17, 0X0);
    // 0x8026BF2C: cvt.d.s     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.fl); 
    ctx->f4.d = CVT_D_S(ctx->f18.fl);
    // 0x8026BF30: mul.d       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f6.d); 
    ctx->f8.d = MUL_D(ctx->f4.d, ctx->f6.d);
    // 0x8026BF34: lwc1        $f10, 0x0($t1)
    ctx->f10.u32l = MEM_W(ctx->r9, 0X0);
    // 0x8026BF38: nop

    // 0x8026BF3C: add.s       $f16, $f10, $f2
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f16.fl = ctx->f10.fl + ctx->f2.fl;
    // 0x8026BF40: cvt.d.s     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); 
    ctx->f18.d = CVT_D_S(ctx->f16.fl);
    // 0x8026BF44: add.d       $f4, $f18, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f18.d); NAN_CHECK(ctx->f8.d); 
    ctx->f4.d = ctx->f18.d + ctx->f8.d;
    // 0x8026BF48: cfc1        $t2, $FpcCsr
    ctx->r10 = get_cop1_cs();
    // 0x8026BF4C: nop

    // 0x8026BF50: ori         $at, $t2, 0x3
    ctx->r1 = ctx->r10 | 0X3;
    // 0x8026BF54: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x8026BF58: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x8026BF5C: nop

    // 0x8026BF60: cvt.w.d     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = CVT_W_D(ctx->f4.d);
    // 0x8026BF64: mfc1        $t3, $f6
    ctx->r11 = (int32_t)ctx->f6.u32l;
    // 0x8026BF68: ctc1        $t2, $FpcCsr
    set_cop1_cs(ctx->r10);
    // 0x8026BF6C: b           L_8026BFCC
    // 0x8026BF70: sh          $t3, 0x30($s0)
    MEM_H(0X30, ctx->r16) = ctx->r11;
        goto L_8026BFCC;
    // 0x8026BF70: sh          $t3, 0x30($s0)
    MEM_H(0X30, ctx->r16) = ctx->r11;
L_8026BF74:
    // 0x8026BF74: sub.s       $f10, $f0, $f2
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f10.fl = ctx->f0.fl - ctx->f2.fl;
    // 0x8026BF78: lwc1        $f19, -0x2A90($at)
    ctx->f_odd[(19 - 1) * 2] = MEM_W(ctx->r1, -0X2A90);
    // 0x8026BF7C: lwc1        $f18, -0x2A8C($at)
    ctx->f18.u32l = MEM_W(ctx->r1, -0X2A8C);
    // 0x8026BF80: lw          $t4, 0x0($s1)
    ctx->r12 = MEM_W(ctx->r17, 0X0);
    // 0x8026BF84: cvt.d.s     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.fl); 
    ctx->f16.d = CVT_D_S(ctx->f10.fl);
    // 0x8026BF88: mul.d       $f8, $f16, $f18
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.d); NAN_CHECK(ctx->f18.d); 
    ctx->f8.d = MUL_D(ctx->f16.d, ctx->f18.d);
    // 0x8026BF8C: lwc1        $f4, 0x0($t4)
    ctx->f4.u32l = MEM_W(ctx->r12, 0X0);
    // 0x8026BF90: nop

    // 0x8026BF94: sub.s       $f6, $f4, $f2
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f6.fl = ctx->f4.fl - ctx->f2.fl;
    // 0x8026BF98: cvt.d.s     $f10, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f10.d = CVT_D_S(ctx->f6.fl);
    // 0x8026BF9C: sub.d       $f16, $f10, $f8
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f8.d); 
    ctx->f16.d = ctx->f10.d - ctx->f8.d;
    // 0x8026BFA0: cfc1        $t5, $FpcCsr
    ctx->r13 = get_cop1_cs();
    // 0x8026BFA4: nop

    // 0x8026BFA8: ori         $at, $t5, 0x3
    ctx->r1 = ctx->r13 | 0X3;
    // 0x8026BFAC: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x8026BFB0: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x8026BFB4: nop

    // 0x8026BFB8: cvt.w.d     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.u32l = CVT_W_D(ctx->f16.d);
    // 0x8026BFBC: mfc1        $t6, $f18
    ctx->r14 = (int32_t)ctx->f18.u32l;
    // 0x8026BFC0: ctc1        $t5, $FpcCsr
    set_cop1_cs(ctx->r13);
    // 0x8026BFC4: sh          $t6, 0x30($s0)
    MEM_H(0X30, ctx->r16) = ctx->r14;
    // 0x8026BFC8: nop

L_8026BFCC:
    // 0x8026BFCC: lui         $s1, 0x8009
    ctx->r17 = S32(0X8009 << 16);
    // 0x8026BFD0: addiu       $s1, $s1, 0x3B20
    ctx->r17 = ADD32(ctx->r17, 0X3B20);
    // 0x8026BFD4: lw          $t8, 0x0($s1)
    ctx->r24 = MEM_W(ctx->r17, 0X0);
    // 0x8026BFD8: nop

    // 0x8026BFDC: lwc1        $f12, 0x0($t8)
    ctx->f12.u32l = MEM_W(ctx->r24, 0X0);
    // 0x8026BFE0: jal         0x80272AEC
    // 0x8026BFE4: nop

    ovl_8024B800_func_80272AEC(rdram, ctx);
        goto after_0;
    // 0x8026BFE4: nop

    after_0:
    // 0x8026BFE8: lui         $at, 0x4248
    ctx->r1 = S32(0X4248 << 16);
    // 0x8026BFEC: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x8026BFF0: nop

    // 0x8026BFF4: add.s       $f6, $f0, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f0.fl + ctx->f4.fl;
    // 0x8026BFF8: cfc1        $t7, $FpcCsr
    ctx->r15 = get_cop1_cs();
    // 0x8026BFFC: nop

    // 0x8026C000: ori         $at, $t7, 0x3
    ctx->r1 = ctx->r15 | 0X3;
    // 0x8026C004: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x8026C008: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x8026C00C: nop

    // 0x8026C010: cvt.w.s     $f10, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    ctx->f10.u32l = CVT_W_S(ctx->f6.fl);
    // 0x8026C014: mfc1        $v1, $f10
    ctx->r3 = (int32_t)ctx->f10.u32l;
    // 0x8026C018: ctc1        $t7, $FpcCsr
    set_cop1_cs(ctx->r15);
    // 0x8026C01C: slti        $at, $v1, 0xC8
    ctx->r1 = SIGNED(ctx->r3) < 0XC8 ? 1 : 0;
    // 0x8026C020: beq         $at, $zero, L_8026C02C
    if (ctx->r1 == 0) {
        // 0x8026C024: nop
    
            goto L_8026C02C;
    }
    // 0x8026C024: nop

    // 0x8026C028: addiu       $v1, $zero, 0xC8
    ctx->r3 = ADD32(0, 0XC8);
L_8026C02C:
    // 0x8026C02C: lh          $v0, 0x30($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X30);
    // 0x8026C030: negu        $a0, $v1
    ctx->r4 = SUB32(0, ctx->r3);
    // 0x8026C034: slt         $at, $v1, $v0
    ctx->r1 = SIGNED(ctx->r3) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x8026C038: beq         $at, $zero, L_8026C050
    if (ctx->r1 == 0) {
        // 0x8026C03C: slt         $at, $v0, $a0
        ctx->r1 = SIGNED(ctx->r2) < SIGNED(ctx->r4) ? 1 : 0;
            goto L_8026C050;
    }
    // 0x8026C03C: slt         $at, $v0, $a0
    ctx->r1 = SIGNED(ctx->r2) < SIGNED(ctx->r4) ? 1 : 0;
    // 0x8026C040: sh          $v1, 0x30($s0)
    MEM_H(0X30, ctx->r16) = ctx->r3;
    // 0x8026C044: lh          $v0, 0x30($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X30);
    // 0x8026C048: nop

    // 0x8026C04C: slt         $at, $v0, $a0
    ctx->r1 = SIGNED(ctx->r2) < SIGNED(ctx->r4) ? 1 : 0;
L_8026C050:
    // 0x8026C050: beq         $at, $zero, L_8026C060
    if (ctx->r1 == 0) {
        // 0x8026C054: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_8026C060;
    }
    // 0x8026C054: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8026C058: sh          $a0, 0x30($s0)
    MEM_H(0X30, ctx->r16) = ctx->r4;
    // 0x8026C05C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_8026C060:
    // 0x8026C060: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x8026C064: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x8026C068: jr          $ra
    // 0x8026C06C: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x8026C06C: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void ovl_8024B800_func_8026BF98(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8026BF98: cvt.d.s     $f10, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f10.d = CVT_D_S(ctx->f6.fl);
    // 0x8026BF9C: sub.d       $f16, $f10, $f8
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f8.d); 
    ctx->f16.d = ctx->f10.d - ctx->f8.d;
    // 0x8026BFA0: cfc1        $t5, $FpcCsr
    ctx->r13 = get_cop1_cs();
    // 0x8026BFA4: nop

    // 0x8026BFA8: ori         $at, $t5, 0x3
    ctx->r1 = ctx->r13 | 0X3;
    // 0x8026BFAC: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x8026BFB0: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x8026BFB4: nop

    // 0x8026BFB8: cvt.w.d     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.u32l = CVT_W_D(ctx->f16.d);
    // 0x8026BFBC: mfc1        $t6, $f18
    ctx->r14 = (int32_t)ctx->f18.u32l;
    // 0x8026BFC0: ctc1        $t5, $FpcCsr
    set_cop1_cs(ctx->r13);
    // 0x8026BFC4: sh          $t6, 0x30($s0)
    MEM_H(0X30, ctx->r16) = ctx->r14;
    // 0x8026BFC8: nop

    // 0x8026BFCC: lui         $s1, 0x8009
    ctx->r17 = S32(0X8009 << 16);
    // 0x8026BFD0: addiu       $s1, $s1, 0x3B20
    ctx->r17 = ADD32(ctx->r17, 0X3B20);
    // 0x8026BFD4: lw          $t8, 0x0($s1)
    ctx->r24 = MEM_W(ctx->r17, 0X0);
    // 0x8026BFD8: nop

    // 0x8026BFDC: lwc1        $f12, 0x0($t8)
    ctx->f12.u32l = MEM_W(ctx->r24, 0X0);
    // 0x8026BFE0: jal         0x80272AEC
    // 0x8026BFE4: nop

    ovl_8024B800_func_80272AEC(rdram, ctx);
        goto after_0;
    // 0x8026BFE4: nop

    after_0:
    // 0x8026BFE8: lui         $at, 0x4248
    ctx->r1 = S32(0X4248 << 16);
    // 0x8026BFEC: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x8026BFF0: nop

    // 0x8026BFF4: add.s       $f6, $f0, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f0.fl + ctx->f4.fl;
    // 0x8026BFF8: cfc1        $t7, $FpcCsr
    ctx->r15 = get_cop1_cs();
    // 0x8026BFFC: nop

    // 0x8026C000: ori         $at, $t7, 0x3
    ctx->r1 = ctx->r15 | 0X3;
    // 0x8026C004: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x8026C008: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x8026C00C: nop

    // 0x8026C010: cvt.w.s     $f10, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    ctx->f10.u32l = CVT_W_S(ctx->f6.fl);
    // 0x8026C014: mfc1        $v1, $f10
    ctx->r3 = (int32_t)ctx->f10.u32l;
    // 0x8026C018: ctc1        $t7, $FpcCsr
    set_cop1_cs(ctx->r15);
    // 0x8026C01C: slti        $at, $v1, 0xC8
    ctx->r1 = SIGNED(ctx->r3) < 0XC8 ? 1 : 0;
    // 0x8026C020: beq         $at, $zero, L_8026C02C
    if (ctx->r1 == 0) {
        // 0x8026C024: nop
    
            goto L_8026C02C;
    }
    // 0x8026C024: nop

    // 0x8026C028: addiu       $v1, $zero, 0xC8
    ctx->r3 = ADD32(0, 0XC8);
L_8026C02C:
    // 0x8026C02C: lh          $v0, 0x30($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X30);
    // 0x8026C030: negu        $a0, $v1
    ctx->r4 = SUB32(0, ctx->r3);
    // 0x8026C034: slt         $at, $v1, $v0
    ctx->r1 = SIGNED(ctx->r3) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x8026C038: beq         $at, $zero, L_8026C050
    if (ctx->r1 == 0) {
        // 0x8026C03C: slt         $at, $v0, $a0
        ctx->r1 = SIGNED(ctx->r2) < SIGNED(ctx->r4) ? 1 : 0;
            goto L_8026C050;
    }
    // 0x8026C03C: slt         $at, $v0, $a0
    ctx->r1 = SIGNED(ctx->r2) < SIGNED(ctx->r4) ? 1 : 0;
    // 0x8026C040: sh          $v1, 0x30($s0)
    MEM_H(0X30, ctx->r16) = ctx->r3;
    // 0x8026C044: lh          $v0, 0x30($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X30);
    // 0x8026C048: nop

    // 0x8026C04C: slt         $at, $v0, $a0
    ctx->r1 = SIGNED(ctx->r2) < SIGNED(ctx->r4) ? 1 : 0;
L_8026C050:
    // 0x8026C050: beq         $at, $zero, L_8026C060
    if (ctx->r1 == 0) {
        // 0x8026C054: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_8026C060;
    }
    // 0x8026C054: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8026C058: sh          $a0, 0x30($s0)
    MEM_H(0X30, ctx->r16) = ctx->r4;
    // 0x8026C05C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_8026C060:
    // 0x8026C060: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x8026C064: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x8026C068: jr          $ra
    // 0x8026C06C: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x8026C06C: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void ovl_8024B800_func_8026C070(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8026C070: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8026C074: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8026C078: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x8026C07C: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x8026C080: sw          $a2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r6;
    // 0x8026C084: sw          $a3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r7;
    // 0x8026C088: lui         $at, 0x4248
    ctx->r1 = S32(0X4248 << 16);
    // 0x8026C08C: lw          $v0, 0xC8($a0)
    ctx->r2 = MEM_W(ctx->r4, 0XC8);
    // 0x8026C090: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x8026C094: lui         $at, 0x42C8
    ctx->r1 = S32(0X42C8 << 16);
    // 0x8026C098: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x8026C09C: lwc1        $f2, 0x8BC($v0)
    ctx->f2.u32l = MEM_W(ctx->r2, 0X8BC);
    // 0x8026C0A0: lwc1        $f12, 0x28($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X28);
    // 0x8026C0A4: c.lt.s      $f2, $f4
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f2.fl < ctx->f4.fl;
    // 0x8026C0A8: lwc1        $f4, 0x24($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X24);
    // 0x8026C0AC: bc1f        L_8026C0CC
    if (!c1cs) {
        // 0x8026C0B0: neg.s       $f12, $f12
        CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); 
    ctx->f12.fl = -ctx->f12.fl;
            goto L_8026C0CC;
    }
    // 0x8026C0B0: neg.s       $f12, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); 
    ctx->f12.fl = -ctx->f12.fl;
    // 0x8026C0B4: lui         $at, 0x3FE0
    ctx->r1 = S32(0X3FE0 << 16);
    // 0x8026C0B8: mtc1        $at, $f9
    ctx->f_odd[(9 - 1) * 2] = ctx->r1;
    // 0x8026C0BC: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x8026C0C0: cvt.d.s     $f6, $f2
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f6.d = CVT_D_S(ctx->f2.fl);
    // 0x8026C0C4: mul.d       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f8.d); 
    ctx->f10.d = MUL_D(ctx->f6.d, ctx->f8.d);
    // 0x8026C0C8: cvt.s.d     $f0, $f10
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f0.fl = CVT_S_D(ctx->f10.d);
L_8026C0CC:
    // 0x8026C0CC: lhu         $t7, 0x8($v0)
    ctx->r15 = MEM_HU(ctx->r2, 0X8);
    // 0x8026C0D0: lui         $at, 0x8028
    ctx->r1 = S32(0X8028 << 16);
    // 0x8026C0D4: andi        $t8, $t7, 0x1
    ctx->r24 = ctx->r15 & 0X1;
    // 0x8026C0D8: beq         $t8, $zero, L_8026C0F0
    if (ctx->r24 == 0) {
        // 0x8026C0DC: nop
    
            goto L_8026C0F0;
    }
    // 0x8026C0DC: nop

    // 0x8026C0E0: lui         $at, 0x8028
    ctx->r1 = S32(0X8028 << 16);
    // 0x8026C0E4: lwc1        $f16, -0x2A88($at)
    ctx->f16.u32l = MEM_W(ctx->r1, -0X2A88);
    // 0x8026C0E8: b           L_8026C0FC
    // 0x8026C0EC: add.s       $f14, $f16, $f0
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f14.fl = ctx->f16.fl + ctx->f0.fl;
        goto L_8026C0FC;
    // 0x8026C0EC: add.s       $f14, $f16, $f0
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f14.fl = ctx->f16.fl + ctx->f0.fl;
L_8026C0F0:
    // 0x8026C0F0: lwc1        $f18, -0x2A84($at)
    ctx->f18.u32l = MEM_W(ctx->r1, -0X2A84);
    // 0x8026C0F4: nop

    // 0x8026C0F8: sub.s       $f14, $f18, $f0
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f14.fl = ctx->f18.fl - ctx->f0.fl;
L_8026C0FC:
    // 0x8026C0FC: jal         0x8001C5D0
    // 0x8026C100: sub.s       $f14, $f14, $f4
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f14.fl = ctx->f14.fl - ctx->f4.fl;
    func_8001C5D0(rdram, ctx);
        goto after_0;
    // 0x8026C100: sub.s       $f14, $f14, $f4
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f14.fl = ctx->f14.fl - ctx->f4.fl;
    after_0:
    // 0x8026C104: swc1        $f0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f0.u32l;
    // 0x8026C108: jal         0x80081040
    // 0x8026C10C: mov.s       $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    ctx->f12.fl = ctx->f0.fl;
    func_80081040(rdram, ctx);
        goto after_1;
    // 0x8026C10C: mov.s       $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    ctx->f12.fl = ctx->f0.fl;
    after_1:
    // 0x8026C110: lwc1        $f6, 0x2C($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x8026C114: lwc1        $f10, 0x24($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X24);
    // 0x8026C118: mul.s       $f8, $f0, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f0.fl, ctx->f6.fl);
    // 0x8026C11C: lw          $t1, 0x20($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X20);
    // 0x8026C120: add.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x8026C124: cfc1        $t9, $FpcCsr
    ctx->r25 = get_cop1_cs();
    // 0x8026C128: nop

    // 0x8026C12C: ori         $at, $t9, 0x3
    ctx->r1 = ctx->r25 | 0X3;
    // 0x8026C130: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x8026C134: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x8026C138: nop

    // 0x8026C13C: cvt.w.s     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.u32l = CVT_W_S(ctx->f16.fl);
    // 0x8026C140: mfc1        $t0, $f18
    ctx->r8 = (int32_t)ctx->f18.u32l;
    // 0x8026C144: ctc1        $t9, $FpcCsr
    set_cop1_cs(ctx->r25);
    // 0x8026C148: sh          $t0, 0x2E($t1)
    MEM_H(0X2E, ctx->r9) = ctx->r8;
    // 0x8026C14C: lwc1        $f12, 0x18($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X18);
    // 0x8026C150: jal         0x80080E80
    // 0x8026C154: nop

    func_80080E80(rdram, ctx);
        goto after_2;
    // 0x8026C154: nop

    after_2:
    // 0x8026C158: lwc1        $f4, 0x2C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x8026C15C: lwc1        $f8, 0x28($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X28);
    // 0x8026C160: mul.s       $f6, $f0, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f0.fl, ctx->f4.fl);
    // 0x8026C164: lw          $t4, 0x20($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X20);
    // 0x8026C168: add.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x8026C16C: cfc1        $t2, $FpcCsr
    ctx->r10 = get_cop1_cs();
    // 0x8026C170: nop

    // 0x8026C174: ori         $at, $t2, 0x3
    ctx->r1 = ctx->r10 | 0X3;
    // 0x8026C178: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x8026C17C: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x8026C180: nop

    // 0x8026C184: cvt.w.s     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.u32l = CVT_W_S(ctx->f10.fl);
    // 0x8026C188: mfc1        $t3, $f16
    ctx->r11 = (int32_t)ctx->f16.u32l;
    // 0x8026C18C: ctc1        $t2, $FpcCsr
    set_cop1_cs(ctx->r10);
    // 0x8026C190: sh          $t3, 0x30($t4)
    MEM_H(0X30, ctx->r12) = ctx->r11;
    // 0x8026C194: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8026C198: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x8026C19C: jr          $ra
    // 0x8026C1A0: nop

    return;
    // 0x8026C1A0: nop

;}
RECOMP_FUNC void ovl_8024B800_func_8026C090(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8026C090: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x8026C094: lui         $at, 0x42C8
    ctx->r1 = S32(0X42C8 << 16);
    // 0x8026C098: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x8026C09C: lwc1        $f2, 0x8BC($v0)
    ctx->f2.u32l = MEM_W(ctx->r2, 0X8BC);
    // 0x8026C0A0: lwc1        $f12, 0x28($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X28);
    // 0x8026C0A4: c.lt.s      $f2, $f4
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f2.fl < ctx->f4.fl;
    // 0x8026C0A8: lwc1        $f4, 0x24($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X24);
    // 0x8026C0AC: bc1f        L_8026C0CC
    if (!c1cs) {
        // 0x8026C0B0: neg.s       $f12, $f12
        CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); 
    ctx->f12.fl = -ctx->f12.fl;
            goto L_8026C0CC;
    }
    // 0x8026C0B0: neg.s       $f12, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); 
    ctx->f12.fl = -ctx->f12.fl;
    // 0x8026C0B4: lui         $at, 0x3FE0
    ctx->r1 = S32(0X3FE0 << 16);
    // 0x8026C0B8: mtc1        $at, $f9
    ctx->f_odd[(9 - 1) * 2] = ctx->r1;
    // 0x8026C0BC: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x8026C0C0: cvt.d.s     $f6, $f2
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f6.d = CVT_D_S(ctx->f2.fl);
    // 0x8026C0C4: mul.d       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f8.d); 
    ctx->f10.d = MUL_D(ctx->f6.d, ctx->f8.d);
    // 0x8026C0C8: cvt.s.d     $f0, $f10
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f0.fl = CVT_S_D(ctx->f10.d);
L_8026C0CC:
    // 0x8026C0CC: lhu         $t7, 0x8($v0)
    ctx->r15 = MEM_HU(ctx->r2, 0X8);
    // 0x8026C0D0: lui         $at, 0x8028
    ctx->r1 = S32(0X8028 << 16);
    // 0x8026C0D4: andi        $t8, $t7, 0x1
    ctx->r24 = ctx->r15 & 0X1;
    // 0x8026C0D8: beq         $t8, $zero, L_8026C0F0
    if (ctx->r24 == 0) {
        // 0x8026C0DC: nop
    
            goto L_8026C0F0;
    }
    // 0x8026C0DC: nop

    // 0x8026C0E0: lui         $at, 0x8028
    ctx->r1 = S32(0X8028 << 16);
    // 0x8026C0E4: lwc1        $f16, -0x2A88($at)
    ctx->f16.u32l = MEM_W(ctx->r1, -0X2A88);
    // 0x8026C0E8: b           L_8026C0FC
    // 0x8026C0EC: add.s       $f14, $f16, $f0
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f14.fl = ctx->f16.fl + ctx->f0.fl;
        goto L_8026C0FC;
    // 0x8026C0EC: add.s       $f14, $f16, $f0
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f14.fl = ctx->f16.fl + ctx->f0.fl;
L_8026C0F0:
    // 0x8026C0F0: lwc1        $f18, -0x2A84($at)
    ctx->f18.u32l = MEM_W(ctx->r1, -0X2A84);
    // 0x8026C0F4: nop

    // 0x8026C0F8: sub.s       $f14, $f18, $f0
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f14.fl = ctx->f18.fl - ctx->f0.fl;
L_8026C0FC:
    // 0x8026C0FC: jal         0x8001C5D0
    // 0x8026C100: sub.s       $f14, $f14, $f4
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f14.fl = ctx->f14.fl - ctx->f4.fl;
    func_8001C5D0(rdram, ctx);
        goto after_0;
    // 0x8026C100: sub.s       $f14, $f14, $f4
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f14.fl = ctx->f14.fl - ctx->f4.fl;
    after_0:
    // 0x8026C104: swc1        $f0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f0.u32l;
    // 0x8026C108: jal         0x80081040
    // 0x8026C10C: mov.s       $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    ctx->f12.fl = ctx->f0.fl;
    func_80081040(rdram, ctx);
        goto after_1;
    // 0x8026C10C: mov.s       $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    ctx->f12.fl = ctx->f0.fl;
    after_1:
    // 0x8026C110: lwc1        $f6, 0x2C($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x8026C114: lwc1        $f10, 0x24($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X24);
    // 0x8026C118: mul.s       $f8, $f0, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f0.fl, ctx->f6.fl);
    // 0x8026C11C: lw          $t1, 0x20($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X20);
    // 0x8026C120: add.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x8026C124: cfc1        $t9, $FpcCsr
    ctx->r25 = get_cop1_cs();
    // 0x8026C128: nop

    // 0x8026C12C: ori         $at, $t9, 0x3
    ctx->r1 = ctx->r25 | 0X3;
    // 0x8026C130: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x8026C134: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x8026C138: nop

    // 0x8026C13C: cvt.w.s     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.u32l = CVT_W_S(ctx->f16.fl);
    // 0x8026C140: mfc1        $t0, $f18
    ctx->r8 = (int32_t)ctx->f18.u32l;
    // 0x8026C144: ctc1        $t9, $FpcCsr
    set_cop1_cs(ctx->r25);
    // 0x8026C148: sh          $t0, 0x2E($t1)
    MEM_H(0X2E, ctx->r9) = ctx->r8;
    // 0x8026C14C: lwc1        $f12, 0x18($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X18);
    // 0x8026C150: jal         0x80080E80
    // 0x8026C154: nop

    func_80080E80(rdram, ctx);
        goto after_2;
    // 0x8026C154: nop

    after_2:
    // 0x8026C158: lwc1        $f4, 0x2C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x8026C15C: lwc1        $f8, 0x28($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X28);
    // 0x8026C160: mul.s       $f6, $f0, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f0.fl, ctx->f4.fl);
    // 0x8026C164: lw          $t4, 0x20($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X20);
    // 0x8026C168: add.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x8026C16C: cfc1        $t2, $FpcCsr
    ctx->r10 = get_cop1_cs();
    // 0x8026C170: nop

    // 0x8026C174: ori         $at, $t2, 0x3
    ctx->r1 = ctx->r10 | 0X3;
    // 0x8026C178: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x8026C17C: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x8026C180: nop

    // 0x8026C184: cvt.w.s     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.u32l = CVT_W_S(ctx->f10.fl);
    // 0x8026C188: mfc1        $t3, $f16
    ctx->r11 = (int32_t)ctx->f16.u32l;
    // 0x8026C18C: ctc1        $t2, $FpcCsr
    set_cop1_cs(ctx->r10);
    // 0x8026C190: sh          $t3, 0x30($t4)
    MEM_H(0X30, ctx->r12) = ctx->r11;
    // 0x8026C194: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8026C198: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x8026C19C: jr          $ra
    // 0x8026C1A0: nop

    return;
    // 0x8026C1A0: nop

;}
RECOMP_FUNC void ovl_8024B800_func_8026C1A4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8026C1A4: lui         $t6, 0x8009
    ctx->r14 = S32(0X8009 << 16);
    // 0x8026C1A8: lw          $t6, 0x3B20($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X3B20);
    // 0x8026C1AC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8026C1B0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8026C1B4: lw          $v0, 0x8C($t6)
    ctx->r2 = MEM_W(ctx->r14, 0X8C);
    // 0x8026C1B8: lui         $a3, 0x4170
    ctx->r7 = S32(0X4170 << 16);
    // 0x8026C1BC: lw          $a1, 0x4C($v0)
    ctx->r5 = MEM_W(ctx->r2, 0X4C);
    // 0x8026C1C0: lw          $a2, 0x44($v0)
    ctx->r6 = MEM_W(ctx->r2, 0X44);
    // 0x8026C1C4: jal         0x8026C070
    // 0x8026C1C8: nop

    ovl_8024B800_func_8026C070(rdram, ctx);
        goto after_0;
    // 0x8026C1C8: nop

    after_0:
    // 0x8026C1CC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8026C1D0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8026C1D4: jr          $ra
    // 0x8026C1D8: nop

    return;
    // 0x8026C1D8: nop

;}
RECOMP_FUNC void ovl_8024B800_func_8026C1DC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8026C1DC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8026C1E0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8026C1E4: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8026C1E8: jal         0x8026BDB8
    // 0x8026C1EC: lui         $a1, 0x41A0
    ctx->r5 = S32(0X41A0 << 16);
    ovl_8024B800_func_8026BDB8(rdram, ctx);
        goto after_0;
    // 0x8026C1EC: lui         $a1, 0x41A0
    ctx->r5 = S32(0X41A0 << 16);
    after_0:
    // 0x8026C1F0: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x8026C1F4: jal         0x8026BB00
    // 0x8026C1F8: nop

    ovl_8024B800_func_8026BB00(rdram, ctx);
        goto after_1;
    // 0x8026C1F8: nop

    after_1:
    // 0x8026C1FC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8026C200: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8026C204: jr          $ra
    // 0x8026C208: nop

    return;
    // 0x8026C208: nop

;}
RECOMP_FUNC void ovl_8024B800_func_8026C20C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8026C20C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8026C210: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8026C214: jal         0x8026BDB8
    // 0x8026C218: lui         $a1, 0x4120
    ctx->r5 = S32(0X4120 << 16);
    ovl_8024B800_func_8026BDB8(rdram, ctx);
        goto after_0;
    // 0x8026C218: lui         $a1, 0x4120
    ctx->r5 = S32(0X4120 << 16);
    after_0:
    // 0x8026C21C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8026C220: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8026C224: jr          $ra
    // 0x8026C228: nop

    return;
    // 0x8026C228: nop

;}
RECOMP_FUNC void ovl_8024B800_func_8026C22C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8026C22C: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x8026C230: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8026C234: sw          $a1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r5;
    // 0x8026C238: sw          $a2, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r6;
    // 0x8026C23C: lw          $t6, 0xC8($a0)
    ctx->r14 = MEM_W(ctx->r4, 0XC8);
    // 0x8026C240: lw          $a3, 0x38($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X38);
    // 0x8026C244: lh          $t7, 0x8B8($t6)
    ctx->r15 = MEM_H(ctx->r14, 0X8B8);
    // 0x8026C248: addiu       $t8, $sp, 0x28
    ctx->r24 = ADD32(ctx->r29, 0X28);
    // 0x8026C24C: mtc1        $t7, $f4
    ctx->f4.u32l = ctx->r15;
    // 0x8026C250: mtc1        $zero, $f14
    ctx->f14.u32l = 0;
    // 0x8026C254: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    // 0x8026C258: or          $a2, $a1, $zero
    ctx->r6 = ctx->r5 | 0;
    // 0x8026C25C: jal         0x80272B1C
    // 0x8026C260: cvt.s.w     $f12, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    ctx->f12.fl = CVT_S_W(ctx->f4.u32l);
    ovl_8024B800_func_80272B1C(rdram, ctx);
        goto after_0;
    // 0x8026C260: cvt.s.w     $f12, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    ctx->f12.fl = CVT_S_W(ctx->f4.u32l);
    after_0:
    // 0x8026C264: lui         $at, 0x437A
    ctx->r1 = S32(0X437A << 16);
    // 0x8026C268: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x8026C26C: lwc1        $f12, 0x2C($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x8026C270: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8026C274: c.lt.s      $f14, $f12
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f14.fl < ctx->f12.fl;
    // 0x8026C278: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x8026C27C: bc1f        L_8026C294
    if (!c1cs) {
        // 0x8026C280: nop
    
            goto L_8026C294;
    }
    // 0x8026C280: nop

    // 0x8026C284: lui         $at, 0x41A0
    ctx->r1 = S32(0X41A0 << 16);
    // 0x8026C288: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x8026C28C: b           L_8026C2E4
    // 0x8026C290: nop

        goto L_8026C2E4;
    // 0x8026C290: nop

L_8026C294:
    // 0x8026C294: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x8026C298: sub.s       $f6, $f14, $f12
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f6.fl = ctx->f14.fl - ctx->f12.fl;
    // 0x8026C29C: lui         $at, 0x8028
    ctx->r1 = S32(0X8028 << 16);
    // 0x8026C2A0: mul.s       $f8, $f6, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = MUL_S(ctx->f6.fl, ctx->f0.fl);
    // 0x8026C2A4: lwc1        $f17, -0x2A80($at)
    ctx->f_odd[(17 - 1) * 2] = MEM_W(ctx->r1, -0X2A80);
    // 0x8026C2A8: lwc1        $f16, -0x2A7C($at)
    ctx->f16.u32l = MEM_W(ctx->r1, -0X2A7C);
    // 0x8026C2AC: lui         $at, 0x4034
    ctx->r1 = S32(0X4034 << 16);
    // 0x8026C2B0: cvt.d.s     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f10.d = CVT_D_S(ctx->f8.fl);
    // 0x8026C2B4: mul.d       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f16.d); 
    ctx->f18.d = MUL_D(ctx->f10.d, ctx->f16.d);
    // 0x8026C2B8: mtc1        $at, $f5
    ctx->f_odd[(5 - 1) * 2] = ctx->r1;
    // 0x8026C2BC: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x8026C2C0: nop

    // 0x8026C2C4: sub.d       $f6, $f4, $f18
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f18.d); 
    ctx->f6.d = ctx->f4.d - ctx->f18.d;
    // 0x8026C2C8: cvt.s.d     $f2, $f6
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.d); 
    ctx->f2.fl = CVT_S_D(ctx->f6.d);
    // 0x8026C2CC: c.lt.s      $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f2.fl < ctx->f0.fl;
    // 0x8026C2D0: nop

    // 0x8026C2D4: bc1f        L_8026C2E0
    if (!c1cs) {
        // 0x8026C2D8: nop
    
            goto L_8026C2E0;
    }
    // 0x8026C2D8: nop

    // 0x8026C2DC: mov.s       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.fl = ctx->f0.fl;
L_8026C2E0:
    // 0x8026C2E0: mov.s       $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    ctx->f0.fl = ctx->f2.fl;
L_8026C2E4:
    // 0x8026C2E4: jr          $ra
    // 0x8026C2E8: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x8026C2E8: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void ovl_8024B800_func_8026C2B0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8026C2B0: cvt.d.s     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f10.d = CVT_D_S(ctx->f8.fl);
    // 0x8026C2B4: mul.d       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f16.d); 
    ctx->f18.d = MUL_D(ctx->f10.d, ctx->f16.d);
    // 0x8026C2B8: mtc1        $at, $f5
    ctx->f_odd[(5 - 1) * 2] = ctx->r1;
    // 0x8026C2BC: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x8026C2C0: nop

    // 0x8026C2C4: sub.d       $f6, $f4, $f18
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f18.d); 
    ctx->f6.d = ctx->f4.d - ctx->f18.d;
    // 0x8026C2C8: cvt.s.d     $f2, $f6
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.d); 
    ctx->f2.fl = CVT_S_D(ctx->f6.d);
    // 0x8026C2CC: c.lt.s      $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f2.fl < ctx->f0.fl;
    // 0x8026C2D0: nop

    // 0x8026C2D4: bc1f        L_8026C2E0
    if (!c1cs) {
        // 0x8026C2D8: nop
    
            goto L_8026C2E0;
    }
    // 0x8026C2D8: nop

    // 0x8026C2DC: mov.s       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.fl = ctx->f0.fl;
L_8026C2E0:
    // 0x8026C2E0: mov.s       $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    ctx->f0.fl = ctx->f2.fl;
    // 0x8026C2E4: jr          $ra
    // 0x8026C2E8: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x8026C2E8: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void ovl_8024B800_func_8026C2EC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8026C2EC: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8026C2F0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8026C2F4: lui         $at, 0x8028
    ctx->r1 = S32(0X8028 << 16);
    // 0x8026C2F8: lwc1        $f4, 0x84($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X84);
    // 0x8026C2FC: lwc1        $f9, -0x2A78($at)
    ctx->f_odd[(9 - 1) * 2] = MEM_W(ctx->r1, -0X2A78);
    // 0x8026C300: lwc1        $f8, -0x2A74($at)
    ctx->f8.u32l = MEM_W(ctx->r1, -0X2A74);
    // 0x8026C304: cvt.d.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.d = CVT_D_S(ctx->f4.fl);
    // 0x8026C308: mul.d       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f8.d); 
    ctx->f10.d = MUL_D(ctx->f6.d, ctx->f8.d);
    // 0x8026C30C: lui         $v0, 0x8009
    ctx->r2 = S32(0X8009 << 16);
    // 0x8026C310: lw          $v0, 0x3B20($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X3B20);
    // 0x8026C314: nop

    // 0x8026C318: lw          $a1, 0x8($v0)
    ctx->r5 = MEM_W(ctx->r2, 0X8);
    // 0x8026C31C: lw          $a2, 0x0($v0)
    ctx->r6 = MEM_W(ctx->r2, 0X0);
    // 0x8026C320: cvt.s.d     $f2, $f10
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f2.fl = CVT_S_D(ctx->f10.d);
    // 0x8026C324: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x8026C328: jal         0x8026C22C
    // 0x8026C32C: swc1        $f2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f2.u32l;
    ovl_8024B800_func_8026C22C(rdram, ctx);
        goto after_0;
    // 0x8026C32C: swc1        $f2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f2.u32l;
    after_0:
    // 0x8026C330: lwc1        $f2, 0x1C($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x8026C334: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x8026C338: c.lt.s      $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f2.fl < ctx->f0.fl;
    // 0x8026C33C: lui         $at, 0x437A
    ctx->r1 = S32(0X437A << 16);
    // 0x8026C340: bc1f        L_8026C34C
    if (!c1cs) {
        // 0x8026C344: lui         $t6, 0x8009
        ctx->r14 = S32(0X8009 << 16);
            goto L_8026C34C;
    }
    // 0x8026C344: lui         $t6, 0x8009
    ctx->r14 = S32(0X8009 << 16);
    // 0x8026C348: mov.s       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.fl = ctx->f0.fl;
L_8026C34C:
    // 0x8026C34C: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x8026C350: nop

    // 0x8026C354: c.lt.s      $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f0.fl < ctx->f2.fl;
    // 0x8026C358: nop

    // 0x8026C35C: bc1f        L_8026C368
    if (!c1cs) {
        // 0x8026C360: nop
    
            goto L_8026C368;
    }
    // 0x8026C360: nop

    // 0x8026C364: mov.s       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.fl = ctx->f0.fl;
L_8026C368:
    // 0x8026C368: lw          $t6, 0x3B20($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X3B20);
    // 0x8026C36C: mfc1        $a3, $f2
    ctx->r7 = (int32_t)ctx->f2.u32l;
    // 0x8026C370: lw          $v0, 0x8C($t6)
    ctx->r2 = MEM_W(ctx->r14, 0X8C);
    // 0x8026C374: nop

    // 0x8026C378: lw          $a1, 0x4C($v0)
    ctx->r5 = MEM_W(ctx->r2, 0X4C);
    // 0x8026C37C: lw          $a2, 0x44($v0)
    ctx->r6 = MEM_W(ctx->r2, 0X44);
    // 0x8026C380: jal         0x8026C070
    // 0x8026C384: nop

    ovl_8024B800_func_8026C070(rdram, ctx);
        goto after_1;
    // 0x8026C384: nop

    after_1:
    // 0x8026C388: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8026C38C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x8026C390: jr          $ra
    // 0x8026C394: nop

    return;
    // 0x8026C394: nop

;}
RECOMP_FUNC void ovl_8024B800_func_8026C364(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8026C364: mov.s       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.fl = ctx->f0.fl;
    // 0x8026C368: lw          $t6, 0x3B20($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X3B20);
    // 0x8026C36C: mfc1        $a3, $f2
    ctx->r7 = (int32_t)ctx->f2.u32l;
    // 0x8026C370: lw          $v0, 0x8C($t6)
    ctx->r2 = MEM_W(ctx->r14, 0X8C);
    // 0x8026C374: nop

    // 0x8026C378: lw          $a1, 0x4C($v0)
    ctx->r5 = MEM_W(ctx->r2, 0X4C);
    // 0x8026C37C: lw          $a2, 0x44($v0)
    ctx->r6 = MEM_W(ctx->r2, 0X44);
    // 0x8026C380: jal         0x8026C070
    // 0x8026C384: nop

    ovl_8024B800_func_8026C070(rdram, ctx);
        goto after_0;
    // 0x8026C384: nop

    after_0:
    // 0x8026C388: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8026C38C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x8026C390: jr          $ra
    // 0x8026C394: nop

    return;
    // 0x8026C394: nop

;}
RECOMP_FUNC void ovl_8024B800_func_8026C398(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8026C398: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x8026C39C: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x8026C3A0: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x8026C3A4: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x8026C3A8: lw          $t6, 0xD4($s0)
    ctx->r14 = MEM_W(ctx->r16, 0XD4);
    // 0x8026C3AC: lui         $t9, 0x8028
    ctx->r25 = S32(0X8028 << 16);
    // 0x8026C3B0: lbu         $t7, 0x5($t6)
    ctx->r15 = MEM_BU(ctx->r14, 0X5);
    // 0x8026C3B4: nop

    // 0x8026C3B8: sll         $t8, $t7, 1
    ctx->r24 = S32(ctx->r15 << 1);
    // 0x8026C3BC: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x8026C3C0: lhu         $t9, -0x3648($t9)
    ctx->r25 = MEM_HU(ctx->r25, -0X3648);
    // 0x8026C3C4: nop

    // 0x8026C3C8: sll         $t0, $t9, 2
    ctx->r8 = S32(ctx->r25 << 2);
    // 0x8026C3CC: lui         $t9, 0x8028
    ctx->r25 = S32(0X8028 << 16);
    // 0x8026C3D0: addu        $t9, $t9, $t0
    ctx->r25 = ADD32(ctx->r25, ctx->r8);
    // 0x8026C3D4: lw          $t9, -0x3630($t9)
    ctx->r25 = MEM_W(ctx->r25, -0X3630);
    // 0x8026C3D8: nop

    // 0x8026C3DC: jalr        $t9
    // 0x8026C3E0: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x8026C3E0: nop

    after_0:
    // 0x8026C3E4: addiu       $a0, $sp, 0x2C
    ctx->r4 = ADD32(ctx->r29, 0X2C);
    // 0x8026C3E8: jal         0x8026B668
    // 0x8026C3EC: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    ovl_8024B800_func_8026B668(rdram, ctx);
        goto after_1;
    // 0x8026C3EC: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_1:
    // 0x8026C3F0: lh          $t1, 0x2E($s0)
    ctx->r9 = MEM_H(ctx->r16, 0X2E);
    // 0x8026C3F4: lh          $t2, 0x30($s0)
    ctx->r10 = MEM_H(ctx->r16, 0X30);
    // 0x8026C3F8: mtc1        $t1, $f4
    ctx->f4.u32l = ctx->r9;
    // 0x8026C3FC: mtc1        $t2, $f6
    ctx->f6.u32l = ctx->r10;
    // 0x8026C400: cvt.s.w     $f4, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    ctx->f4.fl = CVT_S_W(ctx->f4.u32l);
    // 0x8026C404: lwc1        $f12, 0x34($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X34);
    // 0x8026C408: lwc1        $f14, 0x2C($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x8026C40C: cvt.s.w     $f6, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    ctx->f6.fl = CVT_S_W(ctx->f6.u32l);
    // 0x8026C410: mfc1        $a2, $f4
    ctx->r6 = (int32_t)ctx->f4.u32l;
    // 0x8026C414: addiu       $t3, $sp, 0x38
    ctx->r11 = ADD32(ctx->r29, 0X38);
    // 0x8026C418: mfc1        $a3, $f6
    ctx->r7 = (int32_t)ctx->f6.u32l;
    // 0x8026C41C: jal         0x80272B1C
    // 0x8026C420: sw          $t3, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r11;
    ovl_8024B800_func_80272B1C(rdram, ctx);
        goto after_2;
    // 0x8026C420: sw          $t3, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r11;
    after_2:
    // 0x8026C424: lwc1        $f12, 0x38($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X38);
    // 0x8026C428: jal         0x80081040
    // 0x8026C42C: nop

    func_80081040(rdram, ctx);
        goto after_3;
    // 0x8026C42C: nop

    after_3:
    // 0x8026C430: lui         $at, 0x41F0
    ctx->r1 = S32(0X41F0 << 16);
    // 0x8026C434: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x8026C438: lwc1        $f16, 0x34($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X34);
    // 0x8026C43C: mul.s       $f10, $f0, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = MUL_S(ctx->f0.fl, ctx->f8.fl);
    // 0x8026C440: add.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl + ctx->f16.fl;
    // 0x8026C444: cfc1        $t4, $FpcCsr
    ctx->r12 = get_cop1_cs();
    // 0x8026C448: nop

    // 0x8026C44C: ori         $at, $t4, 0x3
    ctx->r1 = ctx->r12 | 0X3;
    // 0x8026C450: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x8026C454: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x8026C458: nop

    // 0x8026C45C: cvt.w.s     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    ctx->f4.u32l = CVT_W_S(ctx->f18.fl);
    // 0x8026C460: mfc1        $t5, $f4
    ctx->r13 = (int32_t)ctx->f4.u32l;
    // 0x8026C464: ctc1        $t4, $FpcCsr
    set_cop1_cs(ctx->r12);
    // 0x8026C468: sh          $t5, 0x2E($s0)
    MEM_H(0X2E, ctx->r16) = ctx->r13;
    // 0x8026C46C: lwc1        $f12, 0x38($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X38);
    // 0x8026C470: jal         0x80080E80
    // 0x8026C474: nop

    func_80080E80(rdram, ctx);
        goto after_4;
    // 0x8026C474: nop

    after_4:
    // 0x8026C478: lui         $at, 0x41F0
    ctx->r1 = S32(0X41F0 << 16);
    // 0x8026C47C: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x8026C480: lwc1        $f10, 0x2C($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x8026C484: mul.s       $f8, $f0, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f0.fl, ctx->f6.fl);
    // 0x8026C488: add.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x8026C48C: cfc1        $t6, $FpcCsr
    ctx->r14 = get_cop1_cs();
    // 0x8026C490: nop

    // 0x8026C494: ori         $at, $t6, 0x3
    ctx->r1 = ctx->r14 | 0X3;
    // 0x8026C498: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x8026C49C: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x8026C4A0: nop

    // 0x8026C4A4: cvt.w.s     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.u32l = CVT_W_S(ctx->f16.fl);
    // 0x8026C4A8: mfc1        $t7, $f18
    ctx->r15 = (int32_t)ctx->f18.u32l;
    // 0x8026C4AC: ctc1        $t6, $FpcCsr
    set_cop1_cs(ctx->r14);
    // 0x8026C4B0: sh          $t7, 0x30($s0)
    MEM_H(0X30, ctx->r16) = ctx->r15;
    // 0x8026C4B4: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x8026C4B8: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x8026C4BC: jr          $ra
    // 0x8026C4C0: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    return;
    // 0x8026C4C0: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
RECOMP_FUNC void ovl_8024B800_func_8026C4C4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8026C4C4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8026C4C8: lui         $t6, 0x8009
    ctx->r14 = S32(0X8009 << 16);
    // 0x8026C4CC: lw          $t6, 0x3B20($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X3B20);
    // 0x8026C4D0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8026C4D4: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8026C4D8: lw          $v0, 0x90($t6)
    ctx->r2 = MEM_W(ctx->r14, 0X90);
    // 0x8026C4DC: nop

    // 0x8026C4E0: beq         $v0, $zero, L_8026C520
    if (ctx->r2 == 0) {
        // 0x8026C4E4: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_8026C520;
    }
    // 0x8026C4E4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8026C4E8: lw          $a1, 0x4C($v0)
    ctx->r5 = MEM_W(ctx->r2, 0X4C);
    // 0x8026C4EC: lw          $a2, 0x44($v0)
    ctx->r6 = MEM_W(ctx->r2, 0X44);
    // 0x8026C4F0: jal         0x8026C22C
    // 0x8026C4F4: nop

    ovl_8024B800_func_8026C22C(rdram, ctx);
        goto after_0;
    // 0x8026C4F4: nop

    after_0:
    // 0x8026C4F8: lui         $t7, 0x8009
    ctx->r15 = S32(0X8009 << 16);
    // 0x8026C4FC: lw          $t7, 0x3B20($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X3B20);
    // 0x8026C500: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x8026C504: lw          $v0, 0x90($t7)
    ctx->r2 = MEM_W(ctx->r15, 0X90);
    // 0x8026C508: mfc1        $a3, $f0
    ctx->r7 = (int32_t)ctx->f0.u32l;
    // 0x8026C50C: lw          $a1, 0x4C($v0)
    ctx->r5 = MEM_W(ctx->r2, 0X4C);
    // 0x8026C510: lw          $a2, 0x44($v0)
    ctx->r6 = MEM_W(ctx->r2, 0X44);
    // 0x8026C514: jal         0x8026C070
    // 0x8026C518: nop

    ovl_8024B800_func_8026C070(rdram, ctx);
        goto after_1;
    // 0x8026C518: nop

    after_1:
    // 0x8026C51C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8026C520:
    // 0x8026C520: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8026C524: jr          $ra
    // 0x8026C528: nop

    return;
    // 0x8026C528: nop

;}
RECOMP_FUNC void ovl_8024B800_func_8026C4FC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8026C4FC: lw          $t7, 0x3B20($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X3B20);
    // 0x8026C500: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x8026C504: lw          $v0, 0x90($t7)
    ctx->r2 = MEM_W(ctx->r15, 0X90);
    // 0x8026C508: mfc1        $a3, $f0
    ctx->r7 = (int32_t)ctx->f0.u32l;
    // 0x8026C50C: lw          $a1, 0x4C($v0)
    ctx->r5 = MEM_W(ctx->r2, 0X4C);
    // 0x8026C510: lw          $a2, 0x44($v0)
    ctx->r6 = MEM_W(ctx->r2, 0X44);
    // 0x8026C514: jal         0x8026C070
    // 0x8026C518: nop

    ovl_8024B800_func_8026C070(rdram, ctx);
        goto after_0;
    // 0x8026C518: nop

    after_0:
    // 0x8026C51C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8026C520: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8026C524: jr          $ra
    // 0x8026C528: nop

    return;
    // 0x8026C528: nop

;}
RECOMP_FUNC void ovl_8024B800_func_8026C52C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8026C52C: lui         $t6, 0x8012
    ctx->r14 = S32(0X8012 << 16);
    // 0x8026C530: lw          $t6, 0xB44($t6)
    ctx->r14 = MEM_W(ctx->r14, 0XB44);
    // 0x8026C534: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x8026C538: sltiu       $at, $t6, 0x51
    ctx->r1 = ctx->r14 < 0X51 ? 1 : 0;
    // 0x8026C53C: bne         $at, $zero, L_8026C58C
    if (ctx->r1 != 0) {
        // 0x8026C540: sw          $ra, 0x14($sp)
        MEM_W(0X14, ctx->r29) = ctx->r31;
            goto L_8026C58C;
    }
    // 0x8026C540: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8026C544: lbu         $v0, 0xA($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0XA);
    // 0x8026C548: nop

    // 0x8026C54C: slti        $at, $v0, 0xB
    ctx->r1 = SIGNED(ctx->r2) < 0XB ? 1 : 0;
    // 0x8026C550: beq         $at, $zero, L_8026C58C
    if (ctx->r1 == 0) {
        // 0x8026C554: nop
    
            goto L_8026C58C;
    }
    // 0x8026C554: nop

    // 0x8026C558: lw          $t7, 0xC8($a0)
    ctx->r15 = MEM_W(ctx->r4, 0XC8);
    // 0x8026C55C: sll         $t1, $v0, 5
    ctx->r9 = S32(ctx->r2 << 5);
    // 0x8026C560: lw          $t8, 0x24($t7)
    ctx->r24 = MEM_W(ctx->r15, 0X24);
    // 0x8026C564: subu        $t1, $t1, $v0
    ctx->r9 = SUB32(ctx->r9, ctx->r2);
    // 0x8026C568: lw          $t9, 0x18($t8)
    ctx->r25 = MEM_W(ctx->r24, 0X18);
    // 0x8026C56C: sll         $t1, $t1, 3
    ctx->r9 = S32(ctx->r9 << 3);
    // 0x8026C570: addu        $t0, $t9, $t1
    ctx->r8 = ADD32(ctx->r25, ctx->r9);
    // 0x8026C574: lw          $a1, 0x4C($t0)
    ctx->r5 = MEM_W(ctx->r8, 0X4C);
    // 0x8026C578: lw          $a2, 0x44($t0)
    ctx->r6 = MEM_W(ctx->r8, 0X44);
    // 0x8026C57C: jal         0x8026C070
    // 0x8026C580: lui         $a3, 0x4110
    ctx->r7 = S32(0X4110 << 16);
    ovl_8024B800_func_8026C070(rdram, ctx);
        goto after_0;
    // 0x8026C580: lui         $a3, 0x4110
    ctx->r7 = S32(0X4110 << 16);
    after_0:
    // 0x8026C584: b           L_8026C6F8
    // 0x8026C588: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_8026C6F8;
    // 0x8026C588: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8026C58C:
    // 0x8026C58C: lui         $t2, 0x8009
    ctx->r10 = S32(0X8009 << 16);
    // 0x8026C590: lw          $t2, 0x3B20($t2)
    ctx->r10 = MEM_W(ctx->r10, 0X3B20);
    // 0x8026C594: nop

    // 0x8026C598: lhu         $t3, 0xC2($t2)
    ctx->r11 = MEM_HU(ctx->r10, 0XC2);
    // 0x8026C59C: nop

    // 0x8026C5A0: andi        $t4, $t3, 0x10
    ctx->r12 = ctx->r11 & 0X10;
    // 0x8026C5A4: beq         $t4, $zero, L_8026C6E4
    if (ctx->r12 == 0) {
        // 0x8026C5A8: nop
    
            goto L_8026C6E4;
    }
    // 0x8026C5A8: nop

    // 0x8026C5AC: lbu         $v0, 0xA($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0XA);
    // 0x8026C5B0: nop

    // 0x8026C5B4: slti        $at, $v0, 0xB
    ctx->r1 = SIGNED(ctx->r2) < 0XB ? 1 : 0;
    // 0x8026C5B8: beq         $at, $zero, L_8026C6F4
    if (ctx->r1 == 0) {
        // 0x8026C5BC: sll         $t7, $v0, 5
        ctx->r15 = S32(ctx->r2 << 5);
            goto L_8026C6F4;
    }
    // 0x8026C5BC: sll         $t7, $v0, 5
    ctx->r15 = S32(ctx->r2 << 5);
    // 0x8026C5C0: lw          $v1, 0xC8($a0)
    ctx->r3 = MEM_W(ctx->r4, 0XC8);
    // 0x8026C5C4: subu        $t7, $t7, $v0
    ctx->r15 = SUB32(ctx->r15, ctx->r2);
    // 0x8026C5C8: lw          $t5, 0x24($v1)
    ctx->r13 = MEM_W(ctx->r3, 0X24);
    // 0x8026C5CC: lhu         $t8, 0x8($v1)
    ctx->r24 = MEM_HU(ctx->r3, 0X8);
    // 0x8026C5D0: lw          $t6, 0x18($t5)
    ctx->r14 = MEM_W(ctx->r13, 0X18);
    // 0x8026C5D4: sll         $t7, $t7, 3
    ctx->r15 = S32(ctx->r15 << 3);
    // 0x8026C5D8: andi        $t9, $t8, 0x1
    ctx->r25 = ctx->r24 & 0X1;
    // 0x8026C5DC: beq         $t9, $zero, L_8026C63C
    if (ctx->r25 == 0) {
        // 0x8026C5E0: addu        $t0, $t6, $t7
        ctx->r8 = ADD32(ctx->r14, ctx->r15);
            goto L_8026C63C;
    }
    // 0x8026C5E0: addu        $t0, $t6, $t7
    ctx->r8 = ADD32(ctx->r14, ctx->r15);
    // 0x8026C5E4: lwc1        $f0, 0x4C($t0)
    ctx->f0.u32l = MEM_W(ctx->r8, 0X4C);
    // 0x8026C5E8: lwc1        $f4, 0x4C($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X4C);
    // 0x8026C5EC: nop

    // 0x8026C5F0: c.le.s      $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f0.fl <= ctx->f4.fl;
    // 0x8026C5F4: nop

    // 0x8026C5F8: bc1t        L_8026C614
    if (c1cs) {
        // 0x8026C5FC: nop
    
            goto L_8026C614;
    }
    // 0x8026C5FC: nop

    // 0x8026C600: lhu         $t1, 0x18($a0)
    ctx->r9 = MEM_HU(ctx->r4, 0X18);
    // 0x8026C604: nop

    // 0x8026C608: andi        $t2, $t1, 0x4
    ctx->r10 = ctx->r9 & 0X4;
    // 0x8026C60C: beq         $t2, $zero, L_8026C694
    if (ctx->r10 == 0) {
        // 0x8026C610: nop
    
            goto L_8026C694;
    }
    // 0x8026C610: nop

L_8026C614:
    // 0x8026C614: lhu         $t3, 0x18($a0)
    ctx->r11 = MEM_HU(ctx->r4, 0X18);
    // 0x8026C618: lui         $a3, 0x4110
    ctx->r7 = S32(0X4110 << 16);
    // 0x8026C61C: ori         $t4, $t3, 0x4
    ctx->r12 = ctx->r11 | 0X4;
    // 0x8026C620: sh          $t4, 0x18($a0)
    MEM_H(0X18, ctx->r4) = ctx->r12;
    // 0x8026C624: lw          $a2, 0x44($t0)
    ctx->r6 = MEM_W(ctx->r8, 0X44);
    // 0x8026C628: lw          $a1, 0x4C($t0)
    ctx->r5 = MEM_W(ctx->r8, 0X4C);
    // 0x8026C62C: jal         0x8026C070
    // 0x8026C630: nop

    ovl_8024B800_func_8026C070(rdram, ctx);
        goto after_1;
    // 0x8026C630: nop

    after_1:
    // 0x8026C634: b           L_8026C6F8
    // 0x8026C638: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_8026C6F8;
    // 0x8026C638: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8026C63C:
    // 0x8026C63C: lwc1        $f0, 0x4C($t0)
    ctx->f0.u32l = MEM_W(ctx->r8, 0X4C);
    // 0x8026C640: lwc1        $f6, 0x4C($a0)
    ctx->f6.u32l = MEM_W(ctx->r4, 0X4C);
    // 0x8026C644: nop

    // 0x8026C648: c.le.s      $f6, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f6.fl <= ctx->f0.fl;
    // 0x8026C64C: nop

    // 0x8026C650: bc1t        L_8026C66C
    if (c1cs) {
        // 0x8026C654: nop
    
            goto L_8026C66C;
    }
    // 0x8026C654: nop

    // 0x8026C658: lhu         $t5, 0x18($a0)
    ctx->r13 = MEM_HU(ctx->r4, 0X18);
    // 0x8026C65C: nop

    // 0x8026C660: andi        $t6, $t5, 0x4
    ctx->r14 = ctx->r13 & 0X4;
    // 0x8026C664: beq         $t6, $zero, L_8026C694
    if (ctx->r14 == 0) {
        // 0x8026C668: nop
    
            goto L_8026C694;
    }
    // 0x8026C668: nop

L_8026C66C:
    // 0x8026C66C: lhu         $t7, 0x18($a0)
    ctx->r15 = MEM_HU(ctx->r4, 0X18);
    // 0x8026C670: lui         $a3, 0x4110
    ctx->r7 = S32(0X4110 << 16);
    // 0x8026C674: ori         $t8, $t7, 0x4
    ctx->r24 = ctx->r15 | 0X4;
    // 0x8026C678: sh          $t8, 0x18($a0)
    MEM_H(0X18, ctx->r4) = ctx->r24;
    // 0x8026C67C: lw          $a2, 0x44($t0)
    ctx->r6 = MEM_W(ctx->r8, 0X44);
    // 0x8026C680: lw          $a1, 0x4C($t0)
    ctx->r5 = MEM_W(ctx->r8, 0X4C);
    // 0x8026C684: jal         0x8026C070
    // 0x8026C688: nop

    ovl_8024B800_func_8026C070(rdram, ctx);
        goto after_2;
    // 0x8026C688: nop

    after_2:
    // 0x8026C68C: b           L_8026C6F8
    // 0x8026C690: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_8026C6F8;
    // 0x8026C690: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8026C694:
    // 0x8026C694: lw          $a2, 0x44($t0)
    ctx->r6 = MEM_W(ctx->r8, 0X44);
    // 0x8026C698: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x8026C69C: sw          $t0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r8;
    // 0x8026C6A0: sw          $a0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r4;
    // 0x8026C6A4: jal         0x80272B98
    // 0x8026C6A8: addiu       $a3, $sp, 0x24
    ctx->r7 = ADD32(ctx->r29, 0X24);
    ovl_8024B800_func_80272B98(rdram, ctx);
        goto after_3;
    // 0x8026C6A8: addiu       $a3, $sp, 0x24
    ctx->r7 = ADD32(ctx->r29, 0X24);
    after_3:
    // 0x8026C6AC: lui         $at, 0x4220
    ctx->r1 = S32(0X4220 << 16);
    // 0x8026C6B0: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x8026C6B4: lwc1        $f10, 0x28($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X28);
    // 0x8026C6B8: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    // 0x8026C6BC: c.lt.s      $f8, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f8.fl < ctx->f10.fl;
    // 0x8026C6C0: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x8026C6C4: bc1f        L_8026C6F8
    if (!c1cs) {
        // 0x8026C6C8: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_8026C6F8;
    }
    // 0x8026C6C8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8026C6CC: lw          $a1, 0x4C($t0)
    ctx->r5 = MEM_W(ctx->r8, 0X4C);
    // 0x8026C6D0: lw          $a2, 0x44($t0)
    ctx->r6 = MEM_W(ctx->r8, 0X44);
    // 0x8026C6D4: jal         0x8026C070
    // 0x8026C6D8: lui         $a3, 0x4110
    ctx->r7 = S32(0X4110 << 16);
    ovl_8024B800_func_8026C070(rdram, ctx);
        goto after_4;
    // 0x8026C6D8: lui         $a3, 0x4110
    ctx->r7 = S32(0X4110 << 16);
    after_4:
    // 0x8026C6DC: b           L_8026C6F8
    // 0x8026C6E0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_8026C6F8;
    // 0x8026C6E0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8026C6E4:
    // 0x8026C6E4: lhu         $t9, 0x18($a0)
    ctx->r25 = MEM_HU(ctx->r4, 0X18);
    // 0x8026C6E8: nop

    // 0x8026C6EC: andi        $t1, $t9, 0xFFFB
    ctx->r9 = ctx->r25 & 0XFFFB;
    // 0x8026C6F0: sh          $t1, 0x18($a0)
    MEM_H(0X18, ctx->r4) = ctx->r9;
L_8026C6F4:
    // 0x8026C6F4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8026C6F8:
    // 0x8026C6F8: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x8026C6FC: jr          $ra
    // 0x8026C700: nop

    return;
    // 0x8026C700: nop

;}
RECOMP_FUNC void ovl_8024B800_func_8026C610(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8026C610: nop

    // 0x8026C614: lhu         $t3, 0x18($a0)
    ctx->r11 = MEM_HU(ctx->r4, 0X18);
    // 0x8026C618: lui         $a3, 0x4110
    ctx->r7 = S32(0X4110 << 16);
    // 0x8026C61C: ori         $t4, $t3, 0x4
    ctx->r12 = ctx->r11 | 0X4;
    // 0x8026C620: sh          $t4, 0x18($a0)
    MEM_H(0X18, ctx->r4) = ctx->r12;
    // 0x8026C624: lw          $a2, 0x44($t0)
    ctx->r6 = MEM_W(ctx->r8, 0X44);
    // 0x8026C628: lw          $a1, 0x4C($t0)
    ctx->r5 = MEM_W(ctx->r8, 0X4C);
    // 0x8026C62C: jal         0x8026C070
    // 0x8026C630: nop

    ovl_8024B800_func_8026C070(rdram, ctx);
        goto after_0;
    // 0x8026C630: nop

    after_0:
    // 0x8026C634: b           L_8026C6F8
    // 0x8026C638: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_8026C6F8;
    // 0x8026C638: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8026C63C: lwc1        $f0, 0x4C($t0)
    ctx->f0.u32l = MEM_W(ctx->r8, 0X4C);
    // 0x8026C640: lwc1        $f6, 0x4C($a0)
    ctx->f6.u32l = MEM_W(ctx->r4, 0X4C);
    // 0x8026C644: nop

    // 0x8026C648: c.le.s      $f6, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f6.fl <= ctx->f0.fl;
    // 0x8026C64C: nop

    // 0x8026C650: bc1t        L_8026C66C
    if (c1cs) {
        // 0x8026C654: nop
    
            goto L_8026C66C;
    }
    // 0x8026C654: nop

    // 0x8026C658: lhu         $t5, 0x18($a0)
    ctx->r13 = MEM_HU(ctx->r4, 0X18);
    // 0x8026C65C: nop

    // 0x8026C660: andi        $t6, $t5, 0x4
    ctx->r14 = ctx->r13 & 0X4;
    // 0x8026C664: beq         $t6, $zero, L_8026C694
    if (ctx->r14 == 0) {
        // 0x8026C668: nop
    
            goto L_8026C694;
    }
    // 0x8026C668: nop

L_8026C66C:
    // 0x8026C66C: lhu         $t7, 0x18($a0)
    ctx->r15 = MEM_HU(ctx->r4, 0X18);
    // 0x8026C670: lui         $a3, 0x4110
    ctx->r7 = S32(0X4110 << 16);
    // 0x8026C674: ori         $t8, $t7, 0x4
    ctx->r24 = ctx->r15 | 0X4;
    // 0x8026C678: sh          $t8, 0x18($a0)
    MEM_H(0X18, ctx->r4) = ctx->r24;
    // 0x8026C67C: lw          $a2, 0x44($t0)
    ctx->r6 = MEM_W(ctx->r8, 0X44);
    // 0x8026C680: lw          $a1, 0x4C($t0)
    ctx->r5 = MEM_W(ctx->r8, 0X4C);
    // 0x8026C684: jal         0x8026C070
    // 0x8026C688: nop

    ovl_8024B800_func_8026C070(rdram, ctx);
        goto after_1;
    // 0x8026C688: nop

    after_1:
    // 0x8026C68C: b           L_8026C6F8
    // 0x8026C690: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_8026C6F8;
    // 0x8026C690: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8026C694:
    // 0x8026C694: lw          $a2, 0x44($t0)
    ctx->r6 = MEM_W(ctx->r8, 0X44);
    // 0x8026C698: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x8026C69C: sw          $t0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r8;
    // 0x8026C6A0: sw          $a0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r4;
    // 0x8026C6A4: jal         0x80272B98
    // 0x8026C6A8: addiu       $a3, $sp, 0x24
    ctx->r7 = ADD32(ctx->r29, 0X24);
    ovl_8024B800_func_80272B98(rdram, ctx);
        goto after_2;
    // 0x8026C6A8: addiu       $a3, $sp, 0x24
    ctx->r7 = ADD32(ctx->r29, 0X24);
    after_2:
    // 0x8026C6AC: lui         $at, 0x4220
    ctx->r1 = S32(0X4220 << 16);
    // 0x8026C6B0: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x8026C6B4: lwc1        $f10, 0x28($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X28);
    // 0x8026C6B8: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    // 0x8026C6BC: c.lt.s      $f8, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f8.fl < ctx->f10.fl;
    // 0x8026C6C0: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x8026C6C4: bc1f        L_8026C6F8
    if (!c1cs) {
        // 0x8026C6C8: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_8026C6F8;
    }
    // 0x8026C6C8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8026C6CC: lw          $a1, 0x4C($t0)
    ctx->r5 = MEM_W(ctx->r8, 0X4C);
    // 0x8026C6D0: lw          $a2, 0x44($t0)
    ctx->r6 = MEM_W(ctx->r8, 0X44);
    // 0x8026C6D4: jal         0x8026C070
    // 0x8026C6D8: lui         $a3, 0x4110
    ctx->r7 = S32(0X4110 << 16);
    ovl_8024B800_func_8026C070(rdram, ctx);
        goto after_3;
    // 0x8026C6D8: lui         $a3, 0x4110
    ctx->r7 = S32(0X4110 << 16);
    after_3:
    // 0x8026C6DC: b           L_8026C6F8
    // 0x8026C6E0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_8026C6F8;
    // 0x8026C6E0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8026C6E4: lhu         $t9, 0x18($a0)
    ctx->r25 = MEM_HU(ctx->r4, 0X18);
    // 0x8026C6E8: nop

    // 0x8026C6EC: andi        $t1, $t9, 0xFFFB
    ctx->r9 = ctx->r25 & 0XFFFB;
    // 0x8026C6F0: sh          $t1, 0x18($a0)
    MEM_H(0X18, ctx->r4) = ctx->r9;
    // 0x8026C6F4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8026C6F8:
    // 0x8026C6F8: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x8026C6FC: jr          $ra
    // 0x8026C700: nop

    return;
    // 0x8026C700: nop

;}
RECOMP_FUNC void ovl_8024B800_func_8026C6CC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8026C6CC: lw          $a1, 0x4C($t0)
    ctx->r5 = MEM_W(ctx->r8, 0X4C);
    // 0x8026C6D0: lw          $a2, 0x44($t0)
    ctx->r6 = MEM_W(ctx->r8, 0X44);
    // 0x8026C6D4: jal         0x8026C070
    // 0x8026C6D8: lui         $a3, 0x4110
    ctx->r7 = S32(0X4110 << 16);
    ovl_8024B800_func_8026C070(rdram, ctx);
        goto after_0;
    // 0x8026C6D8: lui         $a3, 0x4110
    ctx->r7 = S32(0X4110 << 16);
    after_0:
    // 0x8026C6DC: b           L_8026C6F8
    // 0x8026C6E0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_8026C6F8;
    // 0x8026C6E0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8026C6E4: lhu         $t9, 0x18($a0)
    ctx->r25 = MEM_HU(ctx->r4, 0X18);
    // 0x8026C6E8: nop

    // 0x8026C6EC: andi        $t1, $t9, 0xFFFB
    ctx->r9 = ctx->r25 & 0XFFFB;
    // 0x8026C6F0: sh          $t1, 0x18($a0)
    MEM_H(0X18, ctx->r4) = ctx->r9;
    // 0x8026C6F4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8026C6F8:
    // 0x8026C6F8: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x8026C6FC: jr          $ra
    // 0x8026C700: nop

    return;
    // 0x8026C700: nop

;}
RECOMP_FUNC void ovl_8024B800_func_8026C704(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8026C704: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x8026C708: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x8026C70C: sw          $s1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r17;
    // 0x8026C710: sw          $s0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r16;
    // 0x8026C714: swc1        $f21, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x8026C718: swc1        $f20, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f20.u32l;
    // 0x8026C71C: lbu         $v1, 0x7($a0)
    ctx->r3 = MEM_BU(ctx->r4, 0X7);
    // 0x8026C720: or          $s1, $a0, $zero
    ctx->r17 = ctx->r4 | 0;
    // 0x8026C724: beq         $v1, $zero, L_8026C7D8
    if (ctx->r3 == 0) {
        // 0x8026C728: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_8026C7D8;
    }
    // 0x8026C728: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x8026C72C: lw          $v0, 0xC8($a0)
    ctx->r2 = MEM_W(ctx->r4, 0XC8);
    // 0x8026C730: sll         $t7, $v1, 5
    ctx->r15 = S32(ctx->r3 << 5);
    // 0x8026C734: lw          $t6, 0x1C($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X1C);
    // 0x8026C738: lh          $t8, 0x8B8($v0)
    ctx->r24 = MEM_H(ctx->r2, 0X8B8);
    // 0x8026C73C: subu        $t7, $t7, $v1
    ctx->r15 = SUB32(ctx->r15, ctx->r3);
    // 0x8026C740: sll         $t7, $t7, 3
    ctx->r15 = S32(ctx->r15 << 3);
    // 0x8026C744: mtc1        $t8, $f4
    ctx->f4.u32l = ctx->r24;
    // 0x8026C748: addu        $s0, $t6, $t7
    ctx->r16 = ADD32(ctx->r14, ctx->r15);
    // 0x8026C74C: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x8026C750: lwc1        $f8, 0x4C($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X4C);
    // 0x8026C754: lwc1        $f20, 0x44($s0)
    ctx->f20.u32l = MEM_W(ctx->r16, 0X44);
    // 0x8026C758: sub.s       $f14, $f6, $f8
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f14.fl = ctx->f6.fl - ctx->f8.fl;
    // 0x8026C75C: jal         0x8001C5D0
    // 0x8026C760: neg.s       $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f20.fl); 
    ctx->f12.fl = -ctx->f20.fl;
    func_8001C5D0(rdram, ctx);
        goto after_0;
    // 0x8026C760: neg.s       $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f20.fl); 
    ctx->f12.fl = -ctx->f20.fl;
    after_0:
    // 0x8026C764: swc1        $f0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f0.u32l;
    // 0x8026C768: lwc1        $f16, 0x4C($s0)
    ctx->f16.u32l = MEM_W(ctx->r16, 0X4C);
    // 0x8026C76C: lwc1        $f10, 0x4C($s1)
    ctx->f10.u32l = MEM_W(ctx->r17, 0X4C);
    // 0x8026C770: lwc1        $f4, 0x44($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X44);
    // 0x8026C774: sub.s       $f14, $f10, $f16
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f14.fl = ctx->f10.fl - ctx->f16.fl;
    // 0x8026C778: lwc1        $f18, 0x44($s1)
    ctx->f18.u32l = MEM_W(ctx->r17, 0X44);
    // 0x8026C77C: mul.s       $f6, $f14, $f14
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f6.fl = MUL_S(ctx->f14.fl, ctx->f14.fl);
    // 0x8026C780: sub.s       $f20, $f18, $f4
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f20.fl = ctx->f18.fl - ctx->f4.fl;
    // 0x8026C784: mul.s       $f8, $f20, $f20
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f8.fl = MUL_S(ctx->f20.fl, ctx->f20.fl);
    // 0x8026C788: jal         0x8007FA40
    // 0x8026C78C: add.s       $f12, $f6, $f8
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f12.fl = ctx->f6.fl + ctx->f8.fl;
    func_8007FA40(rdram, ctx);
        goto after_1;
    // 0x8026C78C: add.s       $f12, $f6, $f8
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f12.fl = ctx->f6.fl + ctx->f8.fl;
    after_1:
    // 0x8026C790: lwc1        $f12, 0x2C($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x8026C794: jal         0x80080E80
    // 0x8026C798: mov.s       $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    ctx->f20.fl = ctx->f0.fl;
    func_80080E80(rdram, ctx);
        goto after_2;
    // 0x8026C798: mov.s       $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    ctx->f20.fl = ctx->f0.fl;
    after_2:
    // 0x8026C79C: mul.s       $f10, $f0, $f20
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f10.fl = MUL_S(ctx->f0.fl, ctx->f20.fl);
    // 0x8026C7A0: lwc1        $f16, 0x44($s0)
    ctx->f16.u32l = MEM_W(ctx->r16, 0X44);
    // 0x8026C7A4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8026C7A8: add.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl + ctx->f16.fl;
    // 0x8026C7AC: cfc1        $t9, $FpcCsr
    ctx->r25 = get_cop1_cs();
    // 0x8026C7B0: nop

    // 0x8026C7B4: ori         $at, $t9, 0x3
    ctx->r1 = ctx->r25 | 0X3;
    // 0x8026C7B8: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x8026C7BC: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x8026C7C0: nop

    // 0x8026C7C4: cvt.w.s     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    ctx->f4.u32l = CVT_W_S(ctx->f18.fl);
    // 0x8026C7C8: mfc1        $t0, $f4
    ctx->r8 = (int32_t)ctx->f4.u32l;
    // 0x8026C7CC: ctc1        $t9, $FpcCsr
    set_cop1_cs(ctx->r25);
    // 0x8026C7D0: b           L_8026C7D8
    // 0x8026C7D4: sh          $t0, 0x30($s1)
    MEM_H(0X30, ctx->r17) = ctx->r8;
        goto L_8026C7D8;
    // 0x8026C7D4: sh          $t0, 0x30($s1)
    MEM_H(0X30, ctx->r17) = ctx->r8;
L_8026C7D8:
    // 0x8026C7D8: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x8026C7DC: lwc1        $f21, 0x10($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X10);
    // 0x8026C7E0: lwc1        $f20, 0x14($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X14);
    // 0x8026C7E4: lw          $s0, 0x1C($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X1C);
    // 0x8026C7E8: lw          $s1, 0x20($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X20);
    // 0x8026C7EC: jr          $ra
    // 0x8026C7F0: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    return;
    // 0x8026C7F0: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void ovl_8024B800_func_8026C784(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8026C784: mul.s       $f8, $f20, $f20
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f8.fl = MUL_S(ctx->f20.fl, ctx->f20.fl);
    // 0x8026C788: jal         0x8007FA40
    // 0x8026C78C: add.s       $f12, $f6, $f8
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f12.fl = ctx->f6.fl + ctx->f8.fl;
    func_8007FA40(rdram, ctx);
        goto after_0;
    // 0x8026C78C: add.s       $f12, $f6, $f8
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f12.fl = ctx->f6.fl + ctx->f8.fl;
    after_0:
    // 0x8026C790: lwc1        $f12, 0x2C($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x8026C794: jal         0x80080E80
    // 0x8026C798: mov.s       $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    ctx->f20.fl = ctx->f0.fl;
    func_80080E80(rdram, ctx);
        goto after_1;
    // 0x8026C798: mov.s       $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    ctx->f20.fl = ctx->f0.fl;
    after_1:
    // 0x8026C79C: mul.s       $f10, $f0, $f20
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f10.fl = MUL_S(ctx->f0.fl, ctx->f20.fl);
    // 0x8026C7A0: lwc1        $f16, 0x44($s0)
    ctx->f16.u32l = MEM_W(ctx->r16, 0X44);
    // 0x8026C7A4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8026C7A8: add.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl + ctx->f16.fl;
    // 0x8026C7AC: cfc1        $t9, $FpcCsr
    ctx->r25 = get_cop1_cs();
    // 0x8026C7B0: nop

    // 0x8026C7B4: ori         $at, $t9, 0x3
    ctx->r1 = ctx->r25 | 0X3;
    // 0x8026C7B8: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x8026C7BC: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x8026C7C0: nop

    // 0x8026C7C4: cvt.w.s     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    ctx->f4.u32l = CVT_W_S(ctx->f18.fl);
    // 0x8026C7C8: mfc1        $t0, $f4
    ctx->r8 = (int32_t)ctx->f4.u32l;
    // 0x8026C7CC: ctc1        $t9, $FpcCsr
    set_cop1_cs(ctx->r25);
    // 0x8026C7D0: b           L_8026C7D8
    // 0x8026C7D4: sh          $t0, 0x30($s1)
    MEM_H(0X30, ctx->r17) = ctx->r8;
        goto L_8026C7D8;
    // 0x8026C7D4: sh          $t0, 0x30($s1)
    MEM_H(0X30, ctx->r17) = ctx->r8;
L_8026C7D8:
    // 0x8026C7D8: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x8026C7DC: lwc1        $f21, 0x10($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X10);
    // 0x8026C7E0: lwc1        $f20, 0x14($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X14);
    // 0x8026C7E4: lw          $s0, 0x1C($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X1C);
    // 0x8026C7E8: lw          $s1, 0x20($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X20);
    // 0x8026C7EC: jr          $ra
    // 0x8026C7F0: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    return;
    // 0x8026C7F0: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void ovl_8024B800_func_8026C7F4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8026C7F4: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8026C7F8: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8026C7FC: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8026C800: lbu         $v0, 0xA($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0XA);
    // 0x8026C804: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x8026C808: slti        $at, $v0, 0xC
    ctx->r1 = SIGNED(ctx->r2) < 0XC ? 1 : 0;
    // 0x8026C80C: bne         $at, $zero, L_8026C830
    if (ctx->r1 != 0) {
        // 0x8026C810: sll         $t0, $v0, 5
        ctx->r8 = S32(ctx->r2 << 5);
            goto L_8026C830;
    }
    // 0x8026C810: sll         $t0, $v0, 5
    ctx->r8 = S32(ctx->r2 << 5);
    // 0x8026C814: jal         0x8026D61C
    // 0x8026C818: nop

    ovl_8024B800_func_8026D61C(rdram, ctx);
        goto after_0;
    // 0x8026C818: nop

    after_0:
    // 0x8026C81C: lhu         $t6, 0x20($s0)
    ctx->r14 = MEM_HU(ctx->r16, 0X20);
    // 0x8026C820: nop

    // 0x8026C824: andi        $t7, $t6, 0xFFEF
    ctx->r15 = ctx->r14 & 0XFFEF;
    // 0x8026C828: b           L_8026C924
    // 0x8026C82C: sh          $t7, 0x20($s0)
    MEM_H(0X20, ctx->r16) = ctx->r15;
        goto L_8026C924;
    // 0x8026C82C: sh          $t7, 0x20($s0)
    MEM_H(0X20, ctx->r16) = ctx->r15;
L_8026C830:
    // 0x8026C830: lw          $t8, 0xC8($s0)
    ctx->r24 = MEM_W(ctx->r16, 0XC8);
    // 0x8026C834: subu        $t0, $t0, $v0
    ctx->r8 = SUB32(ctx->r8, ctx->r2);
    // 0x8026C838: lw          $t9, 0x18($t8)
    ctx->r25 = MEM_W(ctx->r24, 0X18);
    // 0x8026C83C: sll         $t0, $t0, 3
    ctx->r8 = S32(ctx->r8 << 3);
    // 0x8026C840: addu        $a0, $t9, $t0
    ctx->r4 = ADD32(ctx->r25, ctx->r8);
    // 0x8026C844: lwc1        $f6, 0x4C($a0)
    ctx->f6.u32l = MEM_W(ctx->r4, 0X4C);
    // 0x8026C848: lwc1        $f4, 0x4C($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X4C);
    // 0x8026C84C: sw          $a0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r4;
    // 0x8026C850: jal         0x80272AEC
    // 0x8026C854: sub.s       $f12, $f4, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f12.fl = ctx->f4.fl - ctx->f6.fl;
    ovl_8024B800_func_80272AEC(rdram, ctx);
        goto after_1;
    // 0x8026C854: sub.s       $f12, $f4, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f12.fl = ctx->f4.fl - ctx->f6.fl;
    after_1:
    // 0x8026C858: lui         $at, 0x4220
    ctx->r1 = S32(0X4220 << 16);
    // 0x8026C85C: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x8026C860: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    // 0x8026C864: c.lt.s      $f0, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f0.fl < ctx->f8.fl;
    // 0x8026C868: nop

    // 0x8026C86C: bc1f        L_8026C884
    if (!c1cs) {
        // 0x8026C870: nop
    
            goto L_8026C884;
    }
    // 0x8026C870: nop

    // 0x8026C874: lhu         $t1, 0x20($s0)
    ctx->r9 = MEM_HU(ctx->r16, 0X20);
    // 0x8026C878: nop

    // 0x8026C87C: andi        $t2, $t1, 0xFFEF
    ctx->r10 = ctx->r9 & 0XFFEF;
    // 0x8026C880: sh          $t2, 0x20($s0)
    MEM_H(0X20, ctx->r16) = ctx->r10;
L_8026C884:
    // 0x8026C884: lw          $v0, 0xC8($a0)
    ctx->r2 = MEM_W(ctx->r4, 0XC8);
    // 0x8026C888: lw          $t3, 0xD4($a0)
    ctx->r11 = MEM_W(ctx->r4, 0XD4);
    // 0x8026C88C: lh          $t5, 0x8C8($v0)
    ctx->r13 = MEM_H(ctx->r2, 0X8C8);
    // 0x8026C890: lh          $t4, 0x0($t3)
    ctx->r12 = MEM_H(ctx->r11, 0X0);
    // 0x8026C894: lh          $t7, 0x8CC($v0)
    ctx->r15 = MEM_H(ctx->r2, 0X8CC);
    // 0x8026C898: subu        $t6, $t4, $t5
    ctx->r14 = SUB32(ctx->r12, ctx->r13);
    // 0x8026C89C: mtc1        $t6, $f10
    ctx->f10.u32l = ctx->r14;
    // 0x8026C8A0: lwc1        $f18, 0x8D8($v0)
    ctx->f18.u32l = MEM_W(ctx->r2, 0X8D8);
    // 0x8026C8A4: cvt.s.w     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.fl = CVT_S_W(ctx->f10.u32l);
    // 0x8026C8A8: mtc1        $t7, $f6
    ctx->f6.u32l = ctx->r15;
    // 0x8026C8AC: mul.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = MUL_S(ctx->f16.fl, ctx->f18.fl);
    // 0x8026C8B0: cvt.s.w     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.fl = CVT_S_W(ctx->f6.u32l);
    // 0x8026C8B4: add.s       $f10, $f8, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f10.fl = ctx->f8.fl + ctx->f4.fl;
    // 0x8026C8B8: cfc1        $t8, $FpcCsr
    ctx->r24 = get_cop1_cs();
    // 0x8026C8BC: nop

    // 0x8026C8C0: ori         $at, $t8, 0x3
    ctx->r1 = ctx->r24 | 0X3;
    // 0x8026C8C4: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x8026C8C8: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x8026C8CC: nop

    // 0x8026C8D0: cvt.w.s     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.u32l = CVT_W_S(ctx->f10.fl);
    // 0x8026C8D4: mfc1        $t9, $f16
    ctx->r25 = (int32_t)ctx->f16.u32l;
    // 0x8026C8D8: ctc1        $t8, $FpcCsr
    set_cop1_cs(ctx->r24);
    // 0x8026C8DC: jal         0x8026AACC
    // 0x8026C8E0: sh          $t9, 0x2E($s0)
    MEM_H(0X2E, ctx->r16) = ctx->r25;
    ovl_8024B800_func_8026AACC(rdram, ctx);
        goto after_2;
    // 0x8026C8E0: sh          $t9, 0x2E($s0)
    MEM_H(0X2E, ctx->r16) = ctx->r25;
    after_2:
    // 0x8026C8E4: lw          $t0, 0xC8($s0)
    ctx->r8 = MEM_W(ctx->r16, 0XC8);
    // 0x8026C8E8: sh          $v0, 0x30($s0)
    MEM_H(0X30, ctx->r16) = ctx->r2;
    // 0x8026C8EC: lh          $t1, 0x8AE($t0)
    ctx->r9 = MEM_H(ctx->r8, 0X8AE);
    // 0x8026C8F0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8026C8F4: bne         $t1, $zero, L_8026C90C
    if (ctx->r9 != 0) {
        // 0x8026C8F8: nop
    
            goto L_8026C90C;
    }
    // 0x8026C8F8: nop

    // 0x8026C8FC: jal         0x8026AA70
    // 0x8026C900: addiu       $a1, $zero, 0x50
    ctx->r5 = ADD32(0, 0X50);
    ovl_8024B800_func_8026AA70(rdram, ctx);
        goto after_3;
    // 0x8026C900: addiu       $a1, $zero, 0x50
    ctx->r5 = ADD32(0, 0X50);
    after_3:
    // 0x8026C904: jal         0x80266ABC
    // 0x8026C908: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_8024B800_func_80266ABC(rdram, ctx);
        goto after_4;
    // 0x8026C908: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_4:
L_8026C90C:
    // 0x8026C90C: jal         0x8026AA98
    // 0x8026C910: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_8024B800_func_8026AA98(rdram, ctx);
        goto after_5;
    // 0x8026C910: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_5:
    // 0x8026C914: jal         0x8026AB9C
    // 0x8026C918: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_8024B800_func_8026AB9C(rdram, ctx);
        goto after_6;
    // 0x8026C918: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_6:
    // 0x8026C91C: jal         0x8026BB00
    // 0x8026C920: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_8024B800_func_8026BB00(rdram, ctx);
        goto after_7;
    // 0x8026C920: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_7:
L_8026C924:
    // 0x8026C924: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8026C928: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8026C92C: jr          $ra
    // 0x8026C930: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x8026C930: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void ovl_8024B800_func_8026C828(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8026C828: b           L_8026C924
    // 0x8026C82C: sh          $t7, 0x20($s0)
    MEM_H(0X20, ctx->r16) = ctx->r15;
        goto L_8026C924;
    // 0x8026C82C: sh          $t7, 0x20($s0)
    MEM_H(0X20, ctx->r16) = ctx->r15;
    // 0x8026C830: lw          $t8, 0xC8($s0)
    ctx->r24 = MEM_W(ctx->r16, 0XC8);
    // 0x8026C834: subu        $t0, $t0, $v0
    ctx->r8 = SUB32(ctx->r8, ctx->r2);
    // 0x8026C838: lw          $t9, 0x18($t8)
    ctx->r25 = MEM_W(ctx->r24, 0X18);
    // 0x8026C83C: sll         $t0, $t0, 3
    ctx->r8 = S32(ctx->r8 << 3);
    // 0x8026C840: addu        $a0, $t9, $t0
    ctx->r4 = ADD32(ctx->r25, ctx->r8);
    // 0x8026C844: lwc1        $f6, 0x4C($a0)
    ctx->f6.u32l = MEM_W(ctx->r4, 0X4C);
    // 0x8026C848: lwc1        $f4, 0x4C($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X4C);
    // 0x8026C84C: sw          $a0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r4;
    // 0x8026C850: jal         0x80272AEC
    // 0x8026C854: sub.s       $f12, $f4, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f12.fl = ctx->f4.fl - ctx->f6.fl;
    ovl_8024B800_func_80272AEC(rdram, ctx);
        goto after_0;
    // 0x8026C854: sub.s       $f12, $f4, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f12.fl = ctx->f4.fl - ctx->f6.fl;
    after_0:
    // 0x8026C858: lui         $at, 0x4220
    ctx->r1 = S32(0X4220 << 16);
    // 0x8026C85C: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x8026C860: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    // 0x8026C864: c.lt.s      $f0, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f0.fl < ctx->f8.fl;
    // 0x8026C868: nop

    // 0x8026C86C: bc1f        L_8026C884
    if (!c1cs) {
        // 0x8026C870: nop
    
            goto L_8026C884;
    }
    // 0x8026C870: nop

    // 0x8026C874: lhu         $t1, 0x20($s0)
    ctx->r9 = MEM_HU(ctx->r16, 0X20);
    // 0x8026C878: nop

    // 0x8026C87C: andi        $t2, $t1, 0xFFEF
    ctx->r10 = ctx->r9 & 0XFFEF;
    // 0x8026C880: sh          $t2, 0x20($s0)
    MEM_H(0X20, ctx->r16) = ctx->r10;
L_8026C884:
    // 0x8026C884: lw          $v0, 0xC8($a0)
    ctx->r2 = MEM_W(ctx->r4, 0XC8);
    // 0x8026C888: lw          $t3, 0xD4($a0)
    ctx->r11 = MEM_W(ctx->r4, 0XD4);
    // 0x8026C88C: lh          $t5, 0x8C8($v0)
    ctx->r13 = MEM_H(ctx->r2, 0X8C8);
    // 0x8026C890: lh          $t4, 0x0($t3)
    ctx->r12 = MEM_H(ctx->r11, 0X0);
    // 0x8026C894: lh          $t7, 0x8CC($v0)
    ctx->r15 = MEM_H(ctx->r2, 0X8CC);
    // 0x8026C898: subu        $t6, $t4, $t5
    ctx->r14 = SUB32(ctx->r12, ctx->r13);
    // 0x8026C89C: mtc1        $t6, $f10
    ctx->f10.u32l = ctx->r14;
    // 0x8026C8A0: lwc1        $f18, 0x8D8($v0)
    ctx->f18.u32l = MEM_W(ctx->r2, 0X8D8);
    // 0x8026C8A4: cvt.s.w     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.fl = CVT_S_W(ctx->f10.u32l);
    // 0x8026C8A8: mtc1        $t7, $f6
    ctx->f6.u32l = ctx->r15;
    // 0x8026C8AC: mul.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = MUL_S(ctx->f16.fl, ctx->f18.fl);
    // 0x8026C8B0: cvt.s.w     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.fl = CVT_S_W(ctx->f6.u32l);
    // 0x8026C8B4: add.s       $f10, $f8, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f10.fl = ctx->f8.fl + ctx->f4.fl;
    // 0x8026C8B8: cfc1        $t8, $FpcCsr
    ctx->r24 = get_cop1_cs();
    // 0x8026C8BC: nop

    // 0x8026C8C0: ori         $at, $t8, 0x3
    ctx->r1 = ctx->r24 | 0X3;
    // 0x8026C8C4: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x8026C8C8: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x8026C8CC: nop

    // 0x8026C8D0: cvt.w.s     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.u32l = CVT_W_S(ctx->f10.fl);
    // 0x8026C8D4: mfc1        $t9, $f16
    ctx->r25 = (int32_t)ctx->f16.u32l;
    // 0x8026C8D8: ctc1        $t8, $FpcCsr
    set_cop1_cs(ctx->r24);
    // 0x8026C8DC: jal         0x8026AACC
    // 0x8026C8E0: sh          $t9, 0x2E($s0)
    MEM_H(0X2E, ctx->r16) = ctx->r25;
    ovl_8024B800_func_8026AACC(rdram, ctx);
        goto after_1;
    // 0x8026C8E0: sh          $t9, 0x2E($s0)
    MEM_H(0X2E, ctx->r16) = ctx->r25;
    after_1:
    // 0x8026C8E4: lw          $t0, 0xC8($s0)
    ctx->r8 = MEM_W(ctx->r16, 0XC8);
    // 0x8026C8E8: sh          $v0, 0x30($s0)
    MEM_H(0X30, ctx->r16) = ctx->r2;
    // 0x8026C8EC: lh          $t1, 0x8AE($t0)
    ctx->r9 = MEM_H(ctx->r8, 0X8AE);
    // 0x8026C8F0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8026C8F4: bne         $t1, $zero, L_8026C90C
    if (ctx->r9 != 0) {
        // 0x8026C8F8: nop
    
            goto L_8026C90C;
    }
    // 0x8026C8F8: nop

    // 0x8026C8FC: jal         0x8026AA70
    // 0x8026C900: addiu       $a1, $zero, 0x50
    ctx->r5 = ADD32(0, 0X50);
    ovl_8024B800_func_8026AA70(rdram, ctx);
        goto after_2;
    // 0x8026C900: addiu       $a1, $zero, 0x50
    ctx->r5 = ADD32(0, 0X50);
    after_2:
    // 0x8026C904: jal         0x80266ABC
    // 0x8026C908: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_8024B800_func_80266ABC(rdram, ctx);
        goto after_3;
    // 0x8026C908: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_3:
L_8026C90C:
    // 0x8026C90C: jal         0x8026AA98
    // 0x8026C910: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_8024B800_func_8026AA98(rdram, ctx);
        goto after_4;
    // 0x8026C910: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_4:
    // 0x8026C914: jal         0x8026AB9C
    // 0x8026C918: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_8024B800_func_8026AB9C(rdram, ctx);
        goto after_5;
    // 0x8026C918: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_5:
    // 0x8026C91C: jal         0x8026BB00
    // 0x8026C920: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_8024B800_func_8026BB00(rdram, ctx);
        goto after_6;
    // 0x8026C920: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_6:
L_8026C924:
    // 0x8026C924: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8026C928: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8026C92C: jr          $ra
    // 0x8026C930: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x8026C930: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void ovl_8024B800_func_8026C8B8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8026C8B8: cfc1        $t8, $FpcCsr
    ctx->r24 = get_cop1_cs();
    // 0x8026C8BC: nop

    // 0x8026C8C0: ori         $at, $t8, 0x3
    ctx->r1 = ctx->r24 | 0X3;
    // 0x8026C8C4: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x8026C8C8: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x8026C8CC: nop

    // 0x8026C8D0: cvt.w.s     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.u32l = CVT_W_S(ctx->f10.fl);
    // 0x8026C8D4: mfc1        $t9, $f16
    ctx->r25 = (int32_t)ctx->f16.u32l;
    // 0x8026C8D8: ctc1        $t8, $FpcCsr
    set_cop1_cs(ctx->r24);
    // 0x8026C8DC: jal         0x8026AACC
    // 0x8026C8E0: sh          $t9, 0x2E($s0)
    MEM_H(0X2E, ctx->r16) = ctx->r25;
    ovl_8024B800_func_8026AACC(rdram, ctx);
        goto after_0;
    // 0x8026C8E0: sh          $t9, 0x2E($s0)
    MEM_H(0X2E, ctx->r16) = ctx->r25;
    after_0:
    // 0x8026C8E4: lw          $t0, 0xC8($s0)
    ctx->r8 = MEM_W(ctx->r16, 0XC8);
    // 0x8026C8E8: sh          $v0, 0x30($s0)
    MEM_H(0X30, ctx->r16) = ctx->r2;
    // 0x8026C8EC: lh          $t1, 0x8AE($t0)
    ctx->r9 = MEM_H(ctx->r8, 0X8AE);
    // 0x8026C8F0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8026C8F4: bne         $t1, $zero, L_8026C90C
    if (ctx->r9 != 0) {
        // 0x8026C8F8: nop
    
            goto L_8026C90C;
    }
    // 0x8026C8F8: nop

    // 0x8026C8FC: jal         0x8026AA70
    // 0x8026C900: addiu       $a1, $zero, 0x50
    ctx->r5 = ADD32(0, 0X50);
    ovl_8024B800_func_8026AA70(rdram, ctx);
        goto after_1;
    // 0x8026C900: addiu       $a1, $zero, 0x50
    ctx->r5 = ADD32(0, 0X50);
    after_1:
    // 0x8026C904: jal         0x80266ABC
    // 0x8026C908: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_8024B800_func_80266ABC(rdram, ctx);
        goto after_2;
    // 0x8026C908: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_2:
L_8026C90C:
    // 0x8026C90C: jal         0x8026AA98
    // 0x8026C910: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_8024B800_func_8026AA98(rdram, ctx);
        goto after_3;
    // 0x8026C910: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_3:
    // 0x8026C914: jal         0x8026AB9C
    // 0x8026C918: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_8024B800_func_8026AB9C(rdram, ctx);
        goto after_4;
    // 0x8026C918: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_4:
    // 0x8026C91C: jal         0x8026BB00
    // 0x8026C920: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_8024B800_func_8026BB00(rdram, ctx);
        goto after_5;
    // 0x8026C920: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_5:
    // 0x8026C924: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8026C928: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8026C92C: jr          $ra
    // 0x8026C930: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x8026C930: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void ovl_8024B800_func_8026C934(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8026C934: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8026C938: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8026C93C: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8026C940: lw          $t6, 0xD4($a0)
    ctx->r14 = MEM_W(ctx->r4, 0XD4);
    // 0x8026C944: lw          $v0, 0xC8($a0)
    ctx->r2 = MEM_W(ctx->r4, 0XC8);
    // 0x8026C948: lh          $t7, 0x0($t6)
    ctx->r15 = MEM_H(ctx->r14, 0X0);
    // 0x8026C94C: lh          $t8, 0x8C8($v0)
    ctx->r24 = MEM_H(ctx->r2, 0X8C8);
    // 0x8026C950: lh          $t0, 0x8CC($v0)
    ctx->r8 = MEM_H(ctx->r2, 0X8CC);
    // 0x8026C954: subu        $t9, $t7, $t8
    ctx->r25 = SUB32(ctx->r15, ctx->r24);
    // 0x8026C958: mtc1        $t9, $f4
    ctx->f4.u32l = ctx->r25;
    // 0x8026C95C: lwc1        $f8, 0x8D8($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X8D8);
    // 0x8026C960: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x8026C964: mtc1        $t0, $f16
    ctx->f16.u32l = ctx->r8;
    // 0x8026C968: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x8026C96C: mul.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = MUL_S(ctx->f6.fl, ctx->f8.fl);
    // 0x8026C970: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x8026C974: add.s       $f4, $f18, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = ctx->f18.fl + ctx->f10.fl;
    // 0x8026C978: cfc1        $t1, $FpcCsr
    ctx->r9 = get_cop1_cs();
    // 0x8026C97C: nop

    // 0x8026C980: ori         $at, $t1, 0x3
    ctx->r1 = ctx->r9 | 0X3;
    // 0x8026C984: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x8026C988: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x8026C98C: nop

    // 0x8026C990: cvt.w.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = CVT_W_S(ctx->f4.fl);
    // 0x8026C994: mfc1        $t2, $f6
    ctx->r10 = (int32_t)ctx->f6.u32l;
    // 0x8026C998: ctc1        $t1, $FpcCsr
    set_cop1_cs(ctx->r9);
    // 0x8026C99C: jal         0x8026AACC
    // 0x8026C9A0: sh          $t2, 0x2E($a0)
    MEM_H(0X2E, ctx->r4) = ctx->r10;
    ovl_8024B800_func_8026AACC(rdram, ctx);
        goto after_0;
    // 0x8026C9A0: sh          $t2, 0x2E($a0)
    MEM_H(0X2E, ctx->r4) = ctx->r10;
    after_0:
    // 0x8026C9A4: lw          $t3, 0xC8($s0)
    ctx->r11 = MEM_W(ctx->r16, 0XC8);
    // 0x8026C9A8: sh          $v0, 0x30($s0)
    MEM_H(0X30, ctx->r16) = ctx->r2;
    // 0x8026C9AC: lh          $t4, 0x8AE($t3)
    ctx->r12 = MEM_H(ctx->r11, 0X8AE);
    // 0x8026C9B0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8026C9B4: bne         $t4, $zero, L_8026C9CC
    if (ctx->r12 != 0) {
        // 0x8026C9B8: nop
    
            goto L_8026C9CC;
    }
    // 0x8026C9B8: nop

    // 0x8026C9BC: jal         0x8026AA70
    // 0x8026C9C0: addiu       $a1, $zero, 0x50
    ctx->r5 = ADD32(0, 0X50);
    ovl_8024B800_func_8026AA70(rdram, ctx);
        goto after_1;
    // 0x8026C9C0: addiu       $a1, $zero, 0x50
    ctx->r5 = ADD32(0, 0X50);
    after_1:
    // 0x8026C9C4: jal         0x80266ABC
    // 0x8026C9C8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_8024B800_func_80266ABC(rdram, ctx);
        goto after_2;
    // 0x8026C9C8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_2:
L_8026C9CC:
    // 0x8026C9CC: jal         0x8026AA98
    // 0x8026C9D0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_8024B800_func_8026AA98(rdram, ctx);
        goto after_3;
    // 0x8026C9D0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_3:
    // 0x8026C9D4: jal         0x8026AB9C
    // 0x8026C9D8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_8024B800_func_8026AB9C(rdram, ctx);
        goto after_4;
    // 0x8026C9D8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_4:
    // 0x8026C9DC: jal         0x8026BB00
    // 0x8026C9E0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_8024B800_func_8026BB00(rdram, ctx);
        goto after_5;
    // 0x8026C9E0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_5:
    // 0x8026C9E4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8026C9E8: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8026C9EC: jr          $ra
    // 0x8026C9F0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x8026C9F0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void ovl_8024B800_func_8026C9F4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8026C9F4: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8026C9F8: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8026C9FC: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8026CA00: lw          $t6, 0xD4($a0)
    ctx->r14 = MEM_W(ctx->r4, 0XD4);
    // 0x8026CA04: lw          $v0, 0xC8($a0)
    ctx->r2 = MEM_W(ctx->r4, 0XC8);
    // 0x8026CA08: lh          $t7, 0x0($t6)
    ctx->r15 = MEM_H(ctx->r14, 0X0);
    // 0x8026CA0C: lh          $t8, 0x8C8($v0)
    ctx->r24 = MEM_H(ctx->r2, 0X8C8);
    // 0x8026CA10: lh          $t0, 0x8CC($v0)
    ctx->r8 = MEM_H(ctx->r2, 0X8CC);
    // 0x8026CA14: subu        $t9, $t7, $t8
    ctx->r25 = SUB32(ctx->r15, ctx->r24);
    // 0x8026CA18: mtc1        $t9, $f4
    ctx->f4.u32l = ctx->r25;
    // 0x8026CA1C: lwc1        $f8, 0x8D8($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X8D8);
    // 0x8026CA20: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x8026CA24: mtc1        $t0, $f16
    ctx->f16.u32l = ctx->r8;
    // 0x8026CA28: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x8026CA2C: mul.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = MUL_S(ctx->f6.fl, ctx->f8.fl);
    // 0x8026CA30: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x8026CA34: add.s       $f4, $f18, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = ctx->f18.fl + ctx->f10.fl;
    // 0x8026CA38: cfc1        $t1, $FpcCsr
    ctx->r9 = get_cop1_cs();
    // 0x8026CA3C: nop

    // 0x8026CA40: ori         $at, $t1, 0x3
    ctx->r1 = ctx->r9 | 0X3;
    // 0x8026CA44: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x8026CA48: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x8026CA4C: nop

    // 0x8026CA50: cvt.w.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = CVT_W_S(ctx->f4.fl);
    // 0x8026CA54: mfc1        $t2, $f6
    ctx->r10 = (int32_t)ctx->f6.u32l;
    // 0x8026CA58: ctc1        $t1, $FpcCsr
    set_cop1_cs(ctx->r9);
    // 0x8026CA5C: jal         0x8026AACC
    // 0x8026CA60: sh          $t2, 0x2E($a0)
    MEM_H(0X2E, ctx->r4) = ctx->r10;
    ovl_8024B800_func_8026AACC(rdram, ctx);
        goto after_0;
    // 0x8026CA60: sh          $t2, 0x2E($a0)
    MEM_H(0X2E, ctx->r4) = ctx->r10;
    after_0:
    // 0x8026CA64: lw          $t3, 0xC8($s0)
    ctx->r11 = MEM_W(ctx->r16, 0XC8);
    // 0x8026CA68: sh          $v0, 0x30($s0)
    MEM_H(0X30, ctx->r16) = ctx->r2;
    // 0x8026CA6C: lh          $t4, 0x8AE($t3)
    ctx->r12 = MEM_H(ctx->r11, 0X8AE);
    // 0x8026CA70: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8026CA74: beq         $t4, $zero, L_8026CA94
    if (ctx->r12 == 0) {
        // 0x8026CA78: nop
    
            goto L_8026CA94;
    }
    // 0x8026CA78: nop

    // 0x8026CA7C: jal         0x8026AB9C
    // 0x8026CA80: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_8024B800_func_8026AB9C(rdram, ctx);
        goto after_1;
    // 0x8026CA80: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
    // 0x8026CA84: jal         0x8026AC10
    // 0x8026CA88: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_8024B800_func_8026AC10(rdram, ctx);
        goto after_2;
    // 0x8026CA88: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_2:
    // 0x8026CA8C: b           L_8026CAAC
    // 0x8026CA90: nop

        goto L_8026CAAC;
    // 0x8026CA90: nop

L_8026CA94:
    // 0x8026CA94: jal         0x8026AA70
    // 0x8026CA98: addiu       $a1, $zero, 0x50
    ctx->r5 = ADD32(0, 0X50);
    ovl_8024B800_func_8026AA70(rdram, ctx);
        goto after_3;
    // 0x8026CA98: addiu       $a1, $zero, 0x50
    ctx->r5 = ADD32(0, 0X50);
    after_3:
    // 0x8026CA9C: jal         0x80266ABC
    // 0x8026CAA0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_8024B800_func_80266ABC(rdram, ctx);
        goto after_4;
    // 0x8026CAA0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_4:
    // 0x8026CAA4: jal         0x8026AB9C
    // 0x8026CAA8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_8024B800_func_8026AB9C(rdram, ctx);
        goto after_5;
    // 0x8026CAA8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_5:
L_8026CAAC:
    // 0x8026CAAC: jal         0x8026AA98
    // 0x8026CAB0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_8024B800_func_8026AA98(rdram, ctx);
        goto after_6;
    // 0x8026CAB0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_6:
    // 0x8026CAB4: jal         0x8026BB00
    // 0x8026CAB8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_8024B800_func_8026BB00(rdram, ctx);
        goto after_7;
    // 0x8026CAB8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_7:
    // 0x8026CABC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8026CAC0: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8026CAC4: jr          $ra
    // 0x8026CAC8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x8026CAC8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void ovl_8024B800_func_8026CACC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8026CACC: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8026CAD0: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8026CAD4: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8026CAD8: lw          $t7, 0xD4($a0)
    ctx->r15 = MEM_W(ctx->r4, 0XD4);
    // 0x8026CADC: lw          $v0, 0xC8($a0)
    ctx->r2 = MEM_W(ctx->r4, 0XC8);
    // 0x8026CAE0: lh          $t8, 0x0($t7)
    ctx->r24 = MEM_H(ctx->r15, 0X0);
    // 0x8026CAE4: lh          $t6, 0x8CC($v0)
    ctx->r14 = MEM_H(ctx->r2, 0X8CC);
    // 0x8026CAE8: lh          $t0, 0x8C6($v0)
    ctx->r8 = MEM_H(ctx->r2, 0X8C6);
    // 0x8026CAEC: addu        $t9, $t6, $t8
    ctx->r25 = ADD32(ctx->r14, ctx->r24);
    // 0x8026CAF0: addu        $t1, $t9, $t0
    ctx->r9 = ADD32(ctx->r25, ctx->r8);
    // 0x8026CAF4: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x8026CAF8: sh          $t1, 0x2E($a0)
    MEM_H(0X2E, ctx->r4) = ctx->r9;
    // 0x8026CAFC: jal         0x8026AA70
    // 0x8026CB00: addiu       $a1, $zero, 0x28
    ctx->r5 = ADD32(0, 0X28);
    ovl_8024B800_func_8026AA70(rdram, ctx);
        goto after_0;
    // 0x8026CB00: addiu       $a1, $zero, 0x28
    ctx->r5 = ADD32(0, 0X28);
    after_0:
    // 0x8026CB04: jal         0x8026AA98
    // 0x8026CB08: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_8024B800_func_8026AA98(rdram, ctx);
        goto after_1;
    // 0x8026CB08: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
    // 0x8026CB0C: jal         0x8026AACC
    // 0x8026CB10: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_8024B800_func_8026AACC(rdram, ctx);
        goto after_2;
    // 0x8026CB10: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_2:
    // 0x8026CB14: sh          $v0, 0x30($s0)
    MEM_H(0X30, ctx->r16) = ctx->r2;
    // 0x8026CB18: lui         $t3, 0x8009
    ctx->r11 = S32(0X8009 << 16);
    // 0x8026CB1C: lw          $t3, 0x3B20($t3)
    ctx->r11 = MEM_W(ctx->r11, 0X3B20);
    // 0x8026CB20: lh          $t2, 0x30($s0)
    ctx->r10 = MEM_H(ctx->r16, 0X30);
    // 0x8026CB24: lh          $t4, 0xCA($t3)
    ctx->r12 = MEM_H(ctx->r11, 0XCA);
    // 0x8026CB28: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8026CB2C: addu        $t5, $t2, $t4
    ctx->r13 = ADD32(ctx->r10, ctx->r12);
    // 0x8026CB30: jal         0x8026BB00
    // 0x8026CB34: sh          $t5, 0x30($s0)
    MEM_H(0X30, ctx->r16) = ctx->r13;
    ovl_8024B800_func_8026BB00(rdram, ctx);
        goto after_3;
    // 0x8026CB34: sh          $t5, 0x30($s0)
    MEM_H(0X30, ctx->r16) = ctx->r13;
    after_3:
    // 0x8026CB38: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8026CB3C: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8026CB40: jr          $ra
    // 0x8026CB44: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x8026CB44: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void ovl_8024B800_func_8026CB48(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8026CB48: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8026CB4C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8026CB50: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x8026CB54: lw          $v1, 0xC8($a0)
    ctx->r3 = MEM_W(ctx->r4, 0XC8);
    // 0x8026CB58: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x8026CB5C: jal         0x8026AACC
    // 0x8026CB60: sw          $v1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r3;
    ovl_8024B800_func_8026AACC(rdram, ctx);
        goto after_0;
    // 0x8026CB60: sw          $v1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r3;
    after_0:
    // 0x8026CB64: lw          $v1, 0x1C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X1C);
    // 0x8026CB68: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x8026CB6C: lui         $t3, 0x8009
    ctx->r11 = S32(0X8009 << 16);
    // 0x8026CB70: sh          $v0, 0x30($a0)
    MEM_H(0X30, ctx->r4) = ctx->r2;
    // 0x8026CB74: lh          $t6, 0x8AE($v1)
    ctx->r14 = MEM_H(ctx->r3, 0X8AE);
    // 0x8026CB78: nop

    // 0x8026CB7C: bne         $t6, $zero, L_8026CBE8
    if (ctx->r14 != 0) {
        // 0x8026CB80: nop
    
            goto L_8026CBE8;
    }
    // 0x8026CB80: nop

    // 0x8026CB84: lhu         $t7, 0x8B6($v1)
    ctx->r15 = MEM_HU(ctx->r3, 0X8B6);
    // 0x8026CB88: nop

    // 0x8026CB8C: bne         $t7, $zero, L_8026CBE8
    if (ctx->r15 != 0) {
        // 0x8026CB90: nop
    
            goto L_8026CBE8;
    }
    // 0x8026CB90: nop

    // 0x8026CB94: lh          $t9, 0x30($a0)
    ctx->r25 = MEM_H(ctx->r4, 0X30);
    // 0x8026CB98: lui         $t8, 0x8009
    ctx->r24 = S32(0X8009 << 16);
    // 0x8026CB9C: mtc1        $t9, $f4
    ctx->f4.u32l = ctx->r25;
    // 0x8026CBA0: lw          $t8, 0x3B20($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X3B20);
    // 0x8026CBA4: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x8026CBA8: lwc1        $f0, 0x0($t8)
    ctx->f0.u32l = MEM_W(ctx->r24, 0X0);
    // 0x8026CBAC: lwc1        $f10, 0x24($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X24);
    // 0x8026CBB0: sub.s       $f8, $f6, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = ctx->f6.fl - ctx->f0.fl;
    // 0x8026CBB4: mul.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = MUL_S(ctx->f8.fl, ctx->f10.fl);
    // 0x8026CBB8: add.s       $f18, $f0, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f0.fl + ctx->f16.fl;
    // 0x8026CBBC: cfc1        $t0, $FpcCsr
    ctx->r8 = get_cop1_cs();
    // 0x8026CBC0: nop

    // 0x8026CBC4: ori         $at, $t0, 0x3
    ctx->r1 = ctx->r8 | 0X3;
    // 0x8026CBC8: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x8026CBCC: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x8026CBD0: nop

    // 0x8026CBD4: cvt.w.s     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    ctx->f4.u32l = CVT_W_S(ctx->f18.fl);
    // 0x8026CBD8: mfc1        $t1, $f4
    ctx->r9 = (int32_t)ctx->f4.u32l;
    // 0x8026CBDC: ctc1        $t0, $FpcCsr
    set_cop1_cs(ctx->r8);
    // 0x8026CBE0: b           L_8026CC00
    // 0x8026CBE4: sh          $t1, 0x30($a0)
    MEM_H(0X30, ctx->r4) = ctx->r9;
        goto L_8026CC00;
    // 0x8026CBE4: sh          $t1, 0x30($a0)
    MEM_H(0X30, ctx->r4) = ctx->r9;
L_8026CBE8:
    // 0x8026CBE8: lw          $t3, 0x3B20($t3)
    ctx->r11 = MEM_W(ctx->r11, 0X3B20);
    // 0x8026CBEC: lh          $t2, 0x30($a0)
    ctx->r10 = MEM_H(ctx->r4, 0X30);
    // 0x8026CBF0: lh          $t4, 0xCA($t3)
    ctx->r12 = MEM_H(ctx->r11, 0XCA);
    // 0x8026CBF4: nop

    // 0x8026CBF8: addu        $t5, $t2, $t4
    ctx->r13 = ADD32(ctx->r10, ctx->r12);
    // 0x8026CBFC: sh          $t5, 0x30($a0)
    MEM_H(0X30, ctx->r4) = ctx->r13;
L_8026CC00:
    // 0x8026CC00: jal         0x8026BB00
    // 0x8026CC04: nop

    ovl_8024B800_func_8026BB00(rdram, ctx);
        goto after_1;
    // 0x8026CC04: nop

    after_1:
    // 0x8026CC08: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8026CC0C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x8026CC10: jr          $ra
    // 0x8026CC14: nop

    return;
    // 0x8026CC14: nop

;}
RECOMP_FUNC void ovl_8024B800_func_8026CBA8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8026CBA8: lwc1        $f0, 0x0($t8)
    ctx->f0.u32l = MEM_W(ctx->r24, 0X0);
    // 0x8026CBAC: lwc1        $f10, 0x24($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X24);
    // 0x8026CBB0: sub.s       $f8, $f6, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = ctx->f6.fl - ctx->f0.fl;
    // 0x8026CBB4: mul.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = MUL_S(ctx->f8.fl, ctx->f10.fl);
    // 0x8026CBB8: add.s       $f18, $f0, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f0.fl + ctx->f16.fl;
    // 0x8026CBBC: cfc1        $t0, $FpcCsr
    ctx->r8 = get_cop1_cs();
    // 0x8026CBC0: nop

    // 0x8026CBC4: ori         $at, $t0, 0x3
    ctx->r1 = ctx->r8 | 0X3;
    // 0x8026CBC8: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x8026CBCC: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x8026CBD0: nop

    // 0x8026CBD4: cvt.w.s     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    ctx->f4.u32l = CVT_W_S(ctx->f18.fl);
    // 0x8026CBD8: mfc1        $t1, $f4
    ctx->r9 = (int32_t)ctx->f4.u32l;
    // 0x8026CBDC: ctc1        $t0, $FpcCsr
    set_cop1_cs(ctx->r8);
    // 0x8026CBE0: b           L_8026CC00
    // 0x8026CBE4: sh          $t1, 0x30($a0)
    MEM_H(0X30, ctx->r4) = ctx->r9;
        goto L_8026CC00;
    // 0x8026CBE4: sh          $t1, 0x30($a0)
    MEM_H(0X30, ctx->r4) = ctx->r9;
    // 0x8026CBE8: lw          $t3, 0x3B20($t3)
    ctx->r11 = MEM_W(ctx->r11, 0X3B20);
    // 0x8026CBEC: lh          $t2, 0x30($a0)
    ctx->r10 = MEM_H(ctx->r4, 0X30);
    // 0x8026CBF0: lh          $t4, 0xCA($t3)
    ctx->r12 = MEM_H(ctx->r11, 0XCA);
    // 0x8026CBF4: nop

    // 0x8026CBF8: addu        $t5, $t2, $t4
    ctx->r13 = ADD32(ctx->r10, ctx->r12);
    // 0x8026CBFC: sh          $t5, 0x30($a0)
    MEM_H(0X30, ctx->r4) = ctx->r13;
L_8026CC00:
    // 0x8026CC00: jal         0x8026BB00
    // 0x8026CC04: nop

    ovl_8024B800_func_8026BB00(rdram, ctx);
        goto after_0;
    // 0x8026CC04: nop

    after_0:
    // 0x8026CC08: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8026CC0C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x8026CC10: jr          $ra
    // 0x8026CC14: nop

    return;
    // 0x8026CC14: nop

;}
RECOMP_FUNC void ovl_8024B800_func_8026CC04(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8026CC04: nop

    // 0x8026CC08: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8026CC0C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x8026CC10: jr          $ra
    // 0x8026CC14: nop

    return;
    // 0x8026CC14: nop

;}
RECOMP_FUNC void ovl_8024B800_func_8026CC18(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8026CC18: lw          $t6, 0xC8($a0)
    ctx->r14 = MEM_W(ctx->r4, 0XC8);
    // 0x8026CC1C: lw          $t8, 0xD4($a0)
    ctx->r24 = MEM_W(ctx->r4, 0XD4);
    // 0x8026CC20: lh          $t7, 0x8CE($t6)
    ctx->r15 = MEM_H(ctx->r14, 0X8CE);
    // 0x8026CC24: lh          $t9, 0x0($t8)
    ctx->r25 = MEM_H(ctx->r24, 0X0);
    // 0x8026CC28: addiu       $t2, $zero, 0xC8
    ctx->r10 = ADD32(0, 0XC8);
    // 0x8026CC2C: addu        $t0, $t7, $t9
    ctx->r8 = ADD32(ctx->r15, ctx->r25);
    // 0x8026CC30: sh          $t0, 0x2E($a0)
    MEM_H(0X2E, ctx->r4) = ctx->r8;
    // 0x8026CC34: lh          $t1, 0x2E($a0)
    ctx->r9 = MEM_H(ctx->r4, 0X2E);
    // 0x8026CC38: nop

    // 0x8026CC3C: slti        $at, $t1, 0xC9
    ctx->r1 = SIGNED(ctx->r9) < 0XC9 ? 1 : 0;
    // 0x8026CC40: bne         $at, $zero, L_8026CC4C
    if (ctx->r1 != 0) {
        // 0x8026CC44: nop
    
            goto L_8026CC4C;
    }
    // 0x8026CC44: nop

    // 0x8026CC48: sh          $t2, 0x2E($a0)
    MEM_H(0X2E, ctx->r4) = ctx->r10;
L_8026CC4C:
    // 0x8026CC4C: jr          $ra
    // 0x8026CC50: nop

    return;
    // 0x8026CC50: nop

;}
RECOMP_FUNC void ovl_8024B800_func_8026CC54(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8026CC54: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8026CC58: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8026CC5C: jal         0x8026CC18
    // 0x8026CC60: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    ovl_8024B800_func_8026CC18(rdram, ctx);
        goto after_0;
    // 0x8026CC60: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x8026CC64: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x8026CC68: jal         0x8026AA98
    // 0x8026CC6C: nop

    ovl_8024B800_func_8026AA98(rdram, ctx);
        goto after_1;
    // 0x8026CC6C: nop

    after_1:
    // 0x8026CC70: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x8026CC74: nop

    // 0x8026CC78: lw          $t6, 0xC8($a0)
    ctx->r14 = MEM_W(ctx->r4, 0XC8);
    // 0x8026CC7C: nop

    // 0x8026CC80: lw          $a1, 0x8D4($t6)
    ctx->r5 = MEM_W(ctx->r14, 0X8D4);
    // 0x8026CC84: jal         0x8026CB48
    // 0x8026CC88: nop

    ovl_8024B800_func_8026CB48(rdram, ctx);
        goto after_2;
    // 0x8026CC88: nop

    after_2:
    // 0x8026CC8C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8026CC90: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8026CC94: jr          $ra
    // 0x8026CC98: nop

    return;
    // 0x8026CC98: nop

;}
RECOMP_FUNC void ovl_8024B800_func_8026CC9C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8026CC9C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8026CCA0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8026CCA4: lw          $t8, 0xD4($a0)
    ctx->r24 = MEM_W(ctx->r4, 0XD4);
    // 0x8026CCA8: lw          $t6, 0xC8($a0)
    ctx->r14 = MEM_W(ctx->r4, 0XC8);
    // 0x8026CCAC: lh          $t9, 0x0($t8)
    ctx->r25 = MEM_H(ctx->r24, 0X0);
    // 0x8026CCB0: lh          $t7, 0x8CE($t6)
    ctx->r15 = MEM_H(ctx->r14, 0X8CE);
    // 0x8026CCB4: nop

    // 0x8026CCB8: addu        $t0, $t7, $t9
    ctx->r8 = ADD32(ctx->r15, ctx->r25);
    // 0x8026CCBC: sh          $t0, 0x2E($a0)
    MEM_H(0X2E, ctx->r4) = ctx->r8;
    // 0x8026CCC0: jal         0x8026AA98
    // 0x8026CCC4: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    ovl_8024B800_func_8026AA98(rdram, ctx);
        goto after_0;
    // 0x8026CCC4: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x8026CCC8: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x8026CCCC: nop

    // 0x8026CCD0: lw          $t1, 0xC8($a0)
    ctx->r9 = MEM_W(ctx->r4, 0XC8);
    // 0x8026CCD4: nop

    // 0x8026CCD8: lw          $a1, 0x8D4($t1)
    ctx->r5 = MEM_W(ctx->r9, 0X8D4);
    // 0x8026CCDC: jal         0x8026CB48
    // 0x8026CCE0: nop

    ovl_8024B800_func_8026CB48(rdram, ctx);
        goto after_1;
    // 0x8026CCE0: nop

    after_1:
    // 0x8026CCE4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8026CCE8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8026CCEC: jr          $ra
    // 0x8026CCF0: nop

    return;
    // 0x8026CCF0: nop

;}
RECOMP_FUNC void ovl_8024B800_func_8026CCF4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8026CCF4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8026CCF8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8026CCFC: lw          $t8, 0xD4($a0)
    ctx->r24 = MEM_W(ctx->r4, 0XD4);
    // 0x8026CD00: lw          $t6, 0xC8($a0)
    ctx->r14 = MEM_W(ctx->r4, 0XC8);
    // 0x8026CD04: lh          $t9, 0x0($t8)
    ctx->r25 = MEM_H(ctx->r24, 0X0);
    // 0x8026CD08: lh          $t7, 0x8CE($t6)
    ctx->r15 = MEM_H(ctx->r14, 0X8CE);
    // 0x8026CD0C: nop

    // 0x8026CD10: addu        $t0, $t7, $t9
    ctx->r8 = ADD32(ctx->r15, ctx->r25);
    // 0x8026CD14: sh          $t0, 0x2E($a0)
    MEM_H(0X2E, ctx->r4) = ctx->r8;
    // 0x8026CD18: jal         0x8026AA98
    // 0x8026CD1C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    ovl_8024B800_func_8026AA98(rdram, ctx);
        goto after_0;
    // 0x8026CD1C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x8026CD20: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x8026CD24: lui         $a1, 0x3F4C
    ctx->r5 = S32(0X3F4C << 16);
    // 0x8026CD28: jal         0x8026CB48
    // 0x8026CD2C: ori         $a1, $a1, 0xCCCD
    ctx->r5 = ctx->r5 | 0XCCCD;
    ovl_8024B800_func_8026CB48(rdram, ctx);
        goto after_1;
    // 0x8026CD2C: ori         $a1, $a1, 0xCCCD
    ctx->r5 = ctx->r5 | 0XCCCD;
    after_1:
    // 0x8026CD30: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8026CD34: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8026CD38: jr          $ra
    // 0x8026CD3C: nop

    return;
    // 0x8026CD3C: nop

;}
RECOMP_FUNC void ovl_8024B800_func_8026CD40(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8026CD40: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x8026CD44: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8026CD48: lw          $v0, 0xC8($a0)
    ctx->r2 = MEM_W(ctx->r4, 0XC8);
    // 0x8026CD4C: or          $a1, $a0, $zero
    ctx->r5 = ctx->r4 | 0;
    // 0x8026CD50: lh          $t6, 0x8AE($v0)
    ctx->r14 = MEM_H(ctx->r2, 0X8AE);
    // 0x8026CD54: lui         $v1, 0x8012
    ctx->r3 = S32(0X8012 << 16);
    // 0x8026CD58: bne         $t6, $zero, L_8026CD70
    if (ctx->r14 != 0) {
        // 0x8026CD5C: or          $a0, $a1, $zero
        ctx->r4 = ctx->r5 | 0;
            goto L_8026CD70;
    }
    // 0x8026CD5C: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    // 0x8026CD60: lhu         $t7, 0x4($v0)
    ctx->r15 = MEM_HU(ctx->r2, 0X4);
    // 0x8026CD64: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x8026CD68: bne         $t7, $at, L_8026CDE0
    if (ctx->r15 != ctx->r1) {
        // 0x8026CD6C: nop
    
            goto L_8026CDE0;
    }
    // 0x8026CD6C: nop

L_8026CD70:
    // 0x8026CD70: lhu         $v1, 0xB7A($v1)
    ctx->r3 = MEM_HU(ctx->r3, 0XB7A);
    // 0x8026CD74: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x8026CD78: beq         $v1, $at, L_8026CD8C
    if (ctx->r3 == ctx->r1) {
        // 0x8026CD7C: addiu       $t8, $zero, 0x14A
        ctx->r24 = ADD32(0, 0X14A);
            goto L_8026CD8C;
    }
    // 0x8026CD7C: addiu       $t8, $zero, 0x14A
    ctx->r24 = ADD32(0, 0X14A);
    // 0x8026CD80: addiu       $at, $zero, 0x6
    ctx->r1 = ADD32(0, 0X6);
    // 0x8026CD84: bne         $v1, $at, L_8026CD94
    if (ctx->r3 != ctx->r1) {
        // 0x8026CD88: addiu       $t1, $zero, -0xA
        ctx->r9 = ADD32(0, -0XA);
            goto L_8026CD94;
    }
    // 0x8026CD88: addiu       $t1, $zero, -0xA
    ctx->r9 = ADD32(0, -0XA);
L_8026CD8C:
    // 0x8026CD8C: b           L_8026CE58
    // 0x8026CD90: sh          $t8, 0x2E($a1)
    MEM_H(0X2E, ctx->r5) = ctx->r24;
        goto L_8026CE58;
    // 0x8026CD90: sh          $t8, 0x2E($a1)
    MEM_H(0X2E, ctx->r5) = ctx->r24;
L_8026CD94:
    // 0x8026CD94: lw          $t9, 0x24($v0)
    ctx->r25 = MEM_W(ctx->r2, 0X24);
    // 0x8026CD98: lbu         $t3, 0x0($a1)
    ctx->r11 = MEM_BU(ctx->r5, 0X0);
    // 0x8026CD9C: lh          $t0, 0x8CC($t9)
    ctx->r8 = MEM_H(ctx->r25, 0X8CC);
    // 0x8026CDA0: addiu       $at, $zero, 0x13
    ctx->r1 = ADD32(0, 0X13);
    // 0x8026CDA4: subu        $t2, $t1, $t0
    ctx->r10 = SUB32(ctx->r9, ctx->r8);
    // 0x8026CDA8: bne         $t3, $at, L_8026CDC4
    if (ctx->r11 != ctx->r1) {
        // 0x8026CDAC: sh          $t2, 0x2E($a1)
        MEM_H(0X2E, ctx->r5) = ctx->r10;
            goto L_8026CDC4;
    }
    // 0x8026CDAC: sh          $t2, 0x2E($a1)
    MEM_H(0X2E, ctx->r5) = ctx->r10;
    // 0x8026CDB0: lh          $t4, 0x2E($a1)
    ctx->r12 = MEM_H(ctx->r5, 0X2E);
    // 0x8026CDB4: nop

    // 0x8026CDB8: addiu       $t5, $t4, -0x64
    ctx->r13 = ADD32(ctx->r12, -0X64);
    // 0x8026CDBC: b           L_8026CE58
    // 0x8026CDC0: sh          $t5, 0x2E($a1)
    MEM_H(0X2E, ctx->r5) = ctx->r13;
        goto L_8026CE58;
    // 0x8026CDC0: sh          $t5, 0x2E($a1)
    MEM_H(0X2E, ctx->r5) = ctx->r13;
L_8026CDC4:
    // 0x8026CDC4: lw          $t7, 0xD4($a1)
    ctx->r15 = MEM_W(ctx->r5, 0XD4);
    // 0x8026CDC8: lh          $t6, 0x2E($a1)
    ctx->r14 = MEM_H(ctx->r5, 0X2E);
    // 0x8026CDCC: lh          $t8, 0x0($t7)
    ctx->r24 = MEM_H(ctx->r15, 0X0);
    // 0x8026CDD0: nop

    // 0x8026CDD4: addu        $t9, $t6, $t8
    ctx->r25 = ADD32(ctx->r14, ctx->r24);
    // 0x8026CDD8: b           L_8026CE58
    // 0x8026CDDC: sh          $t9, 0x2E($a1)
    MEM_H(0X2E, ctx->r5) = ctx->r25;
        goto L_8026CE58;
    // 0x8026CDDC: sh          $t9, 0x2E($a1)
    MEM_H(0X2E, ctx->r5) = ctx->r25;
L_8026CDE0:
    // 0x8026CDE0: lh          $v1, 0x8CC($v0)
    ctx->r3 = MEM_H(ctx->r2, 0X8CC);
    // 0x8026CDE4: addiu       $t1, $zero, -0x1AE
    ctx->r9 = ADD32(0, -0X1AE);
    // 0x8026CDE8: slti        $at, $v1, -0x1AE
    ctx->r1 = SIGNED(ctx->r3) < -0X1AE ? 1 : 0;
    // 0x8026CDEC: bne         $at, $zero, L_8026CDFC
    if (ctx->r1 != 0) {
        // 0x8026CDF0: nop
    
            goto L_8026CDFC;
    }
    // 0x8026CDF0: nop

    // 0x8026CDF4: b           L_8026CE00
    // 0x8026CDF8: sh          $v1, 0x2E($a1)
    MEM_H(0X2E, ctx->r5) = ctx->r3;
        goto L_8026CE00;
    // 0x8026CDF8: sh          $v1, 0x2E($a1)
    MEM_H(0X2E, ctx->r5) = ctx->r3;
L_8026CDFC:
    // 0x8026CDFC: sh          $t1, 0x2E($a1)
    MEM_H(0X2E, ctx->r5) = ctx->r9;
L_8026CE00:
    // 0x8026CE00: lw          $t0, 0xD4($a1)
    ctx->r8 = MEM_W(ctx->r5, 0XD4);
    // 0x8026CE04: lh          $t4, 0x2E($a1)
    ctx->r12 = MEM_H(ctx->r5, 0X2E);
    // 0x8026CE08: lh          $t2, 0x0($t0)
    ctx->r10 = MEM_H(ctx->r8, 0X0);
    // 0x8026CE0C: lwc1        $f8, 0x8D8($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X8D8);
    // 0x8026CE10: addiu       $t3, $t2, 0x12C
    ctx->r11 = ADD32(ctx->r10, 0X12C);
    // 0x8026CE14: mtc1        $t3, $f4
    ctx->f4.u32l = ctx->r11;
    // 0x8026CE18: mtc1        $t4, $f16
    ctx->f16.u32l = ctx->r12;
    // 0x8026CE1C: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x8026CE20: mul.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = MUL_S(ctx->f6.fl, ctx->f8.fl);
    // 0x8026CE24: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x8026CE28: add.s       $f4, $f18, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = ctx->f18.fl + ctx->f10.fl;
    // 0x8026CE2C: cfc1        $t5, $FpcCsr
    ctx->r13 = get_cop1_cs();
    // 0x8026CE30: nop

    // 0x8026CE34: ori         $at, $t5, 0x3
    ctx->r1 = ctx->r13 | 0X3;
    // 0x8026CE38: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x8026CE3C: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x8026CE40: nop

    // 0x8026CE44: cvt.w.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = CVT_W_S(ctx->f4.fl);
    // 0x8026CE48: mfc1        $t7, $f6
    ctx->r15 = (int32_t)ctx->f6.u32l;
    // 0x8026CE4C: ctc1        $t5, $FpcCsr
    set_cop1_cs(ctx->r13);
    // 0x8026CE50: sh          $t7, 0x2E($a1)
    MEM_H(0X2E, ctx->r5) = ctx->r15;
    // 0x8026CE54: nop

L_8026CE58:
    // 0x8026CE58: jal         0x8026AA98
    // 0x8026CE5C: sw          $a1, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r5;
    ovl_8024B800_func_8026AA98(rdram, ctx);
        goto after_0;
    // 0x8026CE5C: sw          $a1, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r5;
    after_0:
    // 0x8026CE60: lw          $a1, 0x30($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X30);
    // 0x8026CE64: addiu       $at, $zero, 0x2E
    ctx->r1 = ADD32(0, 0X2E);
    // 0x8026CE68: lbu         $t6, 0x0($a1)
    ctx->r14 = MEM_BU(ctx->r5, 0X0);
    // 0x8026CE6C: addiu       $a0, $sp, 0x20
    ctx->r4 = ADD32(ctx->r29, 0X20);
    // 0x8026CE70: beq         $t6, $at, L_8026CEAC
    if (ctx->r14 == ctx->r1) {
        // 0x8026CE74: nop
    
            goto L_8026CEAC;
    }
    // 0x8026CE74: nop

    // 0x8026CE78: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    // 0x8026CE7C: jal         0x8026AACC
    // 0x8026CE80: sw          $a1, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r5;
    ovl_8024B800_func_8026AACC(rdram, ctx);
        goto after_1;
    // 0x8026CE80: sw          $a1, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r5;
    after_1:
    // 0x8026CE84: lw          $a1, 0x30($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X30);
    // 0x8026CE88: lui         $t9, 0x8009
    ctx->r25 = S32(0X8009 << 16);
    // 0x8026CE8C: sh          $v0, 0x30($a1)
    MEM_H(0X30, ctx->r5) = ctx->r2;
    // 0x8026CE90: lw          $t9, 0x3B20($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X3B20);
    // 0x8026CE94: lh          $t8, 0x30($a1)
    ctx->r24 = MEM_H(ctx->r5, 0X30);
    // 0x8026CE98: lh          $t1, 0xCA($t9)
    ctx->r9 = MEM_H(ctx->r25, 0XCA);
    // 0x8026CE9C: nop

    // 0x8026CEA0: addu        $t0, $t8, $t1
    ctx->r8 = ADD32(ctx->r24, ctx->r9);
    // 0x8026CEA4: b           L_8026CEDC
    // 0x8026CEA8: sh          $t0, 0x30($a1)
    MEM_H(0X30, ctx->r5) = ctx->r8;
        goto L_8026CEDC;
    // 0x8026CEA8: sh          $t0, 0x30($a1)
    MEM_H(0X30, ctx->r5) = ctx->r8;
L_8026CEAC:
    // 0x8026CEAC: jal         0x8026B668
    // 0x8026CEB0: sw          $a1, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r5;
    ovl_8024B800_func_8026B668(rdram, ctx);
        goto after_2;
    // 0x8026CEB0: sw          $a1, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r5;
    after_2:
    // 0x8026CEB4: lwc1        $f8, 0x20($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X20);
    // 0x8026CEB8: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x8026CEBC: lw          $a1, 0x30($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X30);
    // 0x8026CEC0: c.le.s      $f16, $f8
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f16.fl <= ctx->f8.fl;
    // 0x8026CEC4: addiu       $t2, $zero, 0x137
    ctx->r10 = ADD32(0, 0X137);
    // 0x8026CEC8: bc1f        L_8026CED8
    if (!c1cs) {
        // 0x8026CECC: addiu       $t3, $zero, -0x137
        ctx->r11 = ADD32(0, -0X137);
            goto L_8026CED8;
    }
    // 0x8026CECC: addiu       $t3, $zero, -0x137
    ctx->r11 = ADD32(0, -0X137);
    // 0x8026CED0: b           L_8026CEDC
    // 0x8026CED4: sh          $t2, 0x30($a1)
    MEM_H(0X30, ctx->r5) = ctx->r10;
        goto L_8026CEDC;
    // 0x8026CED4: sh          $t2, 0x30($a1)
    MEM_H(0X30, ctx->r5) = ctx->r10;
L_8026CED8:
    // 0x8026CED8: sh          $t3, 0x30($a1)
    MEM_H(0X30, ctx->r5) = ctx->r11;
L_8026CEDC:
    // 0x8026CEDC: jal         0x8026BB00
    // 0x8026CEE0: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    ovl_8024B800_func_8026BB00(rdram, ctx);
        goto after_3;
    // 0x8026CEE0: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    after_3:
    // 0x8026CEE4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8026CEE8: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x8026CEEC: jr          $ra
    // 0x8026CEF0: nop

    return;
    // 0x8026CEF0: nop

;}
RECOMP_FUNC void ovl_8024B800_func_8026CD78(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8026CD78: beq         $v1, $at, L_8026CD8C
    if (ctx->r3 == ctx->r1) {
        // 0x8026CD7C: addiu       $t8, $zero, 0x14A
        ctx->r24 = ADD32(0, 0X14A);
            goto L_8026CD8C;
    }
    // 0x8026CD7C: addiu       $t8, $zero, 0x14A
    ctx->r24 = ADD32(0, 0X14A);
    // 0x8026CD80: addiu       $at, $zero, 0x6
    ctx->r1 = ADD32(0, 0X6);
    // 0x8026CD84: bne         $v1, $at, L_8026CD94
    if (ctx->r3 != ctx->r1) {
        // 0x8026CD88: addiu       $t1, $zero, -0xA
        ctx->r9 = ADD32(0, -0XA);
            goto L_8026CD94;
    }
    // 0x8026CD88: addiu       $t1, $zero, -0xA
    ctx->r9 = ADD32(0, -0XA);
L_8026CD8C:
    // 0x8026CD8C: b           L_8026CE58
    // 0x8026CD90: sh          $t8, 0x2E($a1)
    MEM_H(0X2E, ctx->r5) = ctx->r24;
        goto L_8026CE58;
    // 0x8026CD90: sh          $t8, 0x2E($a1)
    MEM_H(0X2E, ctx->r5) = ctx->r24;
L_8026CD94:
    // 0x8026CD94: lw          $t9, 0x24($v0)
    ctx->r25 = MEM_W(ctx->r2, 0X24);
    // 0x8026CD98: lbu         $t3, 0x0($a1)
    ctx->r11 = MEM_BU(ctx->r5, 0X0);
    // 0x8026CD9C: lh          $t0, 0x8CC($t9)
    ctx->r8 = MEM_H(ctx->r25, 0X8CC);
    // 0x8026CDA0: addiu       $at, $zero, 0x13
    ctx->r1 = ADD32(0, 0X13);
    // 0x8026CDA4: subu        $t2, $t1, $t0
    ctx->r10 = SUB32(ctx->r9, ctx->r8);
    // 0x8026CDA8: bne         $t3, $at, L_8026CDC4
    if (ctx->r11 != ctx->r1) {
        // 0x8026CDAC: sh          $t2, 0x2E($a1)
        MEM_H(0X2E, ctx->r5) = ctx->r10;
            goto L_8026CDC4;
    }
    // 0x8026CDAC: sh          $t2, 0x2E($a1)
    MEM_H(0X2E, ctx->r5) = ctx->r10;
    // 0x8026CDB0: lh          $t4, 0x2E($a1)
    ctx->r12 = MEM_H(ctx->r5, 0X2E);
    // 0x8026CDB4: nop

    // 0x8026CDB8: addiu       $t5, $t4, -0x64
    ctx->r13 = ADD32(ctx->r12, -0X64);
    // 0x8026CDBC: b           L_8026CE58
    // 0x8026CDC0: sh          $t5, 0x2E($a1)
    MEM_H(0X2E, ctx->r5) = ctx->r13;
        goto L_8026CE58;
    // 0x8026CDC0: sh          $t5, 0x2E($a1)
    MEM_H(0X2E, ctx->r5) = ctx->r13;
L_8026CDC4:
    // 0x8026CDC4: lw          $t7, 0xD4($a1)
    ctx->r15 = MEM_W(ctx->r5, 0XD4);
    // 0x8026CDC8: lh          $t6, 0x2E($a1)
    ctx->r14 = MEM_H(ctx->r5, 0X2E);
    // 0x8026CDCC: lh          $t8, 0x0($t7)
    ctx->r24 = MEM_H(ctx->r15, 0X0);
    // 0x8026CDD0: nop

    // 0x8026CDD4: addu        $t9, $t6, $t8
    ctx->r25 = ADD32(ctx->r14, ctx->r24);
    // 0x8026CDD8: b           L_8026CE58
    // 0x8026CDDC: sh          $t9, 0x2E($a1)
    MEM_H(0X2E, ctx->r5) = ctx->r25;
        goto L_8026CE58;
    // 0x8026CDDC: sh          $t9, 0x2E($a1)
    MEM_H(0X2E, ctx->r5) = ctx->r25;
    // 0x8026CDE0: lh          $v1, 0x8CC($v0)
    ctx->r3 = MEM_H(ctx->r2, 0X8CC);
    // 0x8026CDE4: addiu       $t1, $zero, -0x1AE
    ctx->r9 = ADD32(0, -0X1AE);
    // 0x8026CDE8: slti        $at, $v1, -0x1AE
    ctx->r1 = SIGNED(ctx->r3) < -0X1AE ? 1 : 0;
    // 0x8026CDEC: bne         $at, $zero, L_8026CDFC
    if (ctx->r1 != 0) {
        // 0x8026CDF0: nop
    
            goto L_8026CDFC;
    }
    // 0x8026CDF0: nop

    // 0x8026CDF4: b           L_8026CE00
    // 0x8026CDF8: sh          $v1, 0x2E($a1)
    MEM_H(0X2E, ctx->r5) = ctx->r3;
        goto L_8026CE00;
    // 0x8026CDF8: sh          $v1, 0x2E($a1)
    MEM_H(0X2E, ctx->r5) = ctx->r3;
L_8026CDFC:
    // 0x8026CDFC: sh          $t1, 0x2E($a1)
    MEM_H(0X2E, ctx->r5) = ctx->r9;
L_8026CE00:
    // 0x8026CE00: lw          $t0, 0xD4($a1)
    ctx->r8 = MEM_W(ctx->r5, 0XD4);
    // 0x8026CE04: lh          $t4, 0x2E($a1)
    ctx->r12 = MEM_H(ctx->r5, 0X2E);
    // 0x8026CE08: lh          $t2, 0x0($t0)
    ctx->r10 = MEM_H(ctx->r8, 0X0);
    // 0x8026CE0C: lwc1        $f8, 0x8D8($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X8D8);
    // 0x8026CE10: addiu       $t3, $t2, 0x12C
    ctx->r11 = ADD32(ctx->r10, 0X12C);
    // 0x8026CE14: mtc1        $t3, $f4
    ctx->f4.u32l = ctx->r11;
    // 0x8026CE18: mtc1        $t4, $f16
    ctx->f16.u32l = ctx->r12;
    // 0x8026CE1C: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x8026CE20: mul.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = MUL_S(ctx->f6.fl, ctx->f8.fl);
    // 0x8026CE24: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x8026CE28: add.s       $f4, $f18, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = ctx->f18.fl + ctx->f10.fl;
    // 0x8026CE2C: cfc1        $t5, $FpcCsr
    ctx->r13 = get_cop1_cs();
    // 0x8026CE30: nop

    // 0x8026CE34: ori         $at, $t5, 0x3
    ctx->r1 = ctx->r13 | 0X3;
    // 0x8026CE38: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x8026CE3C: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x8026CE40: nop

    // 0x8026CE44: cvt.w.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = CVT_W_S(ctx->f4.fl);
    // 0x8026CE48: mfc1        $t7, $f6
    ctx->r15 = (int32_t)ctx->f6.u32l;
    // 0x8026CE4C: ctc1        $t5, $FpcCsr
    set_cop1_cs(ctx->r13);
    // 0x8026CE50: sh          $t7, 0x2E($a1)
    MEM_H(0X2E, ctx->r5) = ctx->r15;
    // 0x8026CE54: nop

L_8026CE58:
    // 0x8026CE58: jal         0x8026AA98
    // 0x8026CE5C: sw          $a1, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r5;
    ovl_8024B800_func_8026AA98(rdram, ctx);
        goto after_0;
    // 0x8026CE5C: sw          $a1, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r5;
    after_0:
    // 0x8026CE60: lw          $a1, 0x30($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X30);
    // 0x8026CE64: addiu       $at, $zero, 0x2E
    ctx->r1 = ADD32(0, 0X2E);
    // 0x8026CE68: lbu         $t6, 0x0($a1)
    ctx->r14 = MEM_BU(ctx->r5, 0X0);
    // 0x8026CE6C: addiu       $a0, $sp, 0x20
    ctx->r4 = ADD32(ctx->r29, 0X20);
    // 0x8026CE70: beq         $t6, $at, L_8026CEAC
    if (ctx->r14 == ctx->r1) {
        // 0x8026CE74: nop
    
            goto L_8026CEAC;
    }
    // 0x8026CE74: nop

    // 0x8026CE78: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    // 0x8026CE7C: jal         0x8026AACC
    // 0x8026CE80: sw          $a1, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r5;
    ovl_8024B800_func_8026AACC(rdram, ctx);
        goto after_1;
    // 0x8026CE80: sw          $a1, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r5;
    after_1:
    // 0x8026CE84: lw          $a1, 0x30($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X30);
    // 0x8026CE88: lui         $t9, 0x8009
    ctx->r25 = S32(0X8009 << 16);
    // 0x8026CE8C: sh          $v0, 0x30($a1)
    MEM_H(0X30, ctx->r5) = ctx->r2;
    // 0x8026CE90: lw          $t9, 0x3B20($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X3B20);
    // 0x8026CE94: lh          $t8, 0x30($a1)
    ctx->r24 = MEM_H(ctx->r5, 0X30);
    // 0x8026CE98: lh          $t1, 0xCA($t9)
    ctx->r9 = MEM_H(ctx->r25, 0XCA);
    // 0x8026CE9C: nop

    // 0x8026CEA0: addu        $t0, $t8, $t1
    ctx->r8 = ADD32(ctx->r24, ctx->r9);
    // 0x8026CEA4: b           L_8026CEDC
    // 0x8026CEA8: sh          $t0, 0x30($a1)
    MEM_H(0X30, ctx->r5) = ctx->r8;
        goto L_8026CEDC;
    // 0x8026CEA8: sh          $t0, 0x30($a1)
    MEM_H(0X30, ctx->r5) = ctx->r8;
L_8026CEAC:
    // 0x8026CEAC: jal         0x8026B668
    // 0x8026CEB0: sw          $a1, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r5;
    ovl_8024B800_func_8026B668(rdram, ctx);
        goto after_2;
    // 0x8026CEB0: sw          $a1, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r5;
    after_2:
    // 0x8026CEB4: lwc1        $f8, 0x20($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X20);
    // 0x8026CEB8: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x8026CEBC: lw          $a1, 0x30($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X30);
    // 0x8026CEC0: c.le.s      $f16, $f8
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f16.fl <= ctx->f8.fl;
    // 0x8026CEC4: addiu       $t2, $zero, 0x137
    ctx->r10 = ADD32(0, 0X137);
    // 0x8026CEC8: bc1f        L_8026CED8
    if (!c1cs) {
        // 0x8026CECC: addiu       $t3, $zero, -0x137
        ctx->r11 = ADD32(0, -0X137);
            goto L_8026CED8;
    }
    // 0x8026CECC: addiu       $t3, $zero, -0x137
    ctx->r11 = ADD32(0, -0X137);
    // 0x8026CED0: b           L_8026CEDC
    // 0x8026CED4: sh          $t2, 0x30($a1)
    MEM_H(0X30, ctx->r5) = ctx->r10;
        goto L_8026CEDC;
    // 0x8026CED4: sh          $t2, 0x30($a1)
    MEM_H(0X30, ctx->r5) = ctx->r10;
L_8026CED8:
    // 0x8026CED8: sh          $t3, 0x30($a1)
    MEM_H(0X30, ctx->r5) = ctx->r11;
L_8026CEDC:
    // 0x8026CEDC: jal         0x8026BB00
    // 0x8026CEE0: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    ovl_8024B800_func_8026BB00(rdram, ctx);
        goto after_3;
    // 0x8026CEE0: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    after_3:
    // 0x8026CEE4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8026CEE8: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x8026CEEC: jr          $ra
    // 0x8026CEF0: nop

    return;
    // 0x8026CEF0: nop

;}
RECOMP_FUNC void ovl_8024B800_func_8026CEF4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8026CEF4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8026CEF8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8026CEFC: lw          $v1, 0xC8($a0)
    ctx->r3 = MEM_W(ctx->r4, 0XC8);
    // 0x8026CF00: lbu         $t6, 0x6($a0)
    ctx->r14 = MEM_BU(ctx->r4, 0X6);
    // 0x8026CF04: addiu       $v0, $v1, 0x8EC
    ctx->r2 = ADD32(ctx->r3, 0X8EC);
    // 0x8026CF08: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x8026CF0C: addu        $t7, $t6, $v0
    ctx->r15 = ADD32(ctx->r14, ctx->r2);
    // 0x8026CF10: lbu         $a1, 0x0($t7)
    ctx->r5 = MEM_BU(ctx->r15, 0X0);
    // 0x8026CF14: lui         $t8, 0x8028
    ctx->r24 = S32(0X8028 << 16);
    // 0x8026CF18: sll         $a2, $a1, 1
    ctx->r6 = S32(ctx->r5 << 1);
    // 0x8026CF1C: addu        $t8, $t8, $a2
    ctx->r24 = ADD32(ctx->r24, ctx->r6);
    // 0x8026CF20: lh          $t8, -0x368C($t8)
    ctx->r24 = MEM_H(ctx->r24, -0X368C);
    // 0x8026CF24: lhu         $t9, 0x8($v1)
    ctx->r25 = MEM_HU(ctx->r3, 0X8);
    // 0x8026CF28: mtc1        $t8, $f4
    ctx->f4.u32l = ctx->r24;
    // 0x8026CF2C: andi        $t0, $t9, 0x1
    ctx->r8 = ctx->r25 & 0X1;
    // 0x8026CF30: beq         $t0, $zero, L_8026CF40
    if (ctx->r8 == 0) {
        // 0x8026CF34: cvt.s.w     $f0, $f4
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    ctx->f0.fl = CVT_S_W(ctx->f4.u32l);
            goto L_8026CF40;
    }
    // 0x8026CF34: cvt.s.w     $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    ctx->f0.fl = CVT_S_W(ctx->f4.u32l);
    // 0x8026CF38: neg.s       $f12, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); 
    ctx->f12.fl = -ctx->f12.fl;
    // 0x8026CF3C: neg.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = -ctx->f0.fl;
L_8026CF40:
    // 0x8026CF40: addu        $t1, $v1, $a2
    ctx->r9 = ADD32(ctx->r3, ctx->r6);
    // 0x8026CF44: lh          $a1, 0x8F8($t1)
    ctx->r5 = MEM_H(ctx->r9, 0X8F8);
    // 0x8026CF48: lh          $v0, 0x2E($a0)
    ctx->r2 = MEM_H(ctx->r4, 0X2E);
    // 0x8026CF4C: sub.s       $f6, $f0, $f12
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f6.fl = ctx->f0.fl - ctx->f12.fl;
    // 0x8026CF50: slt         $at, $a1, $v0
    ctx->r1 = SIGNED(ctx->r5) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x8026CF54: beq         $at, $zero, L_8026CF6C
    if (ctx->r1 == 0) {
        // 0x8026CF58: addiu       $t2, $v0, -0x15E
        ctx->r10 = ADD32(ctx->r2, -0X15E);
            goto L_8026CF6C;
    }
    // 0x8026CF58: addiu       $t2, $v0, -0x15E
    ctx->r10 = ADD32(ctx->r2, -0X15E);
    // 0x8026CF5C: sh          $a1, 0x2E($a0)
    MEM_H(0X2E, ctx->r4) = ctx->r5;
    // 0x8026CF60: lh          $v0, 0x2E($a0)
    ctx->r2 = MEM_H(ctx->r4, 0X2E);
    // 0x8026CF64: nop

    // 0x8026CF68: addiu       $t2, $v0, -0x15E
    ctx->r10 = ADD32(ctx->r2, -0X15E);
L_8026CF6C:
    // 0x8026CF6C: mtc1        $t2, $f8
    ctx->f8.u32l = ctx->r10;
    // 0x8026CF70: lui         $at, 0x431F
    ctx->r1 = S32(0X431F << 16);
    // 0x8026CF74: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x8026CF78: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x8026CF7C: mul.s       $f16, $f6, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = MUL_S(ctx->f6.fl, ctx->f10.fl);
    // 0x8026CF80: nop

    // 0x8026CF84: div.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = DIV_S(ctx->f16.fl, ctx->f18.fl);
    // 0x8026CF88: add.s       $f8, $f4, $f12
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f12.fl;
    // 0x8026CF8C: cfc1        $t3, $FpcCsr
    ctx->r11 = get_cop1_cs();
    // 0x8026CF90: nop

    // 0x8026CF94: ori         $at, $t3, 0x3
    ctx->r1 = ctx->r11 | 0X3;
    // 0x8026CF98: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x8026CF9C: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x8026CFA0: nop

    // 0x8026CFA4: cvt.w.s     $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    ctx->f6.u32l = CVT_W_S(ctx->f8.fl);
    // 0x8026CFA8: mfc1        $t4, $f6
    ctx->r12 = (int32_t)ctx->f6.u32l;
    // 0x8026CFAC: ctc1        $t3, $FpcCsr
    set_cop1_cs(ctx->r11);
    // 0x8026CFB0: sh          $t4, 0x30($a0)
    MEM_H(0X30, ctx->r4) = ctx->r12;
    // 0x8026CFB4: jal         0x8026AA98
    // 0x8026CFB8: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    ovl_8024B800_func_8026AA98(rdram, ctx);
        goto after_0;
    // 0x8026CFB8: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x8026CFBC: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x8026CFC0: jal         0x8026BB00
    // 0x8026CFC4: nop

    ovl_8024B800_func_8026BB00(rdram, ctx);
        goto after_1;
    // 0x8026CFC4: nop

    after_1:
    // 0x8026CFC8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8026CFCC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8026CFD0: jr          $ra
    // 0x8026CFD4: nop

    return;
    // 0x8026CFD4: nop

;}
RECOMP_FUNC void ovl_8024B800_func_8026CF08(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8026CF08: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x8026CF0C: addu        $t7, $t6, $v0
    ctx->r15 = ADD32(ctx->r14, ctx->r2);
    // 0x8026CF10: lbu         $a1, 0x0($t7)
    ctx->r5 = MEM_BU(ctx->r15, 0X0);
    // 0x8026CF14: lui         $t8, 0x8028
    ctx->r24 = S32(0X8028 << 16);
    // 0x8026CF18: sll         $a2, $a1, 1
    ctx->r6 = S32(ctx->r5 << 1);
    // 0x8026CF1C: addu        $t8, $t8, $a2
    ctx->r24 = ADD32(ctx->r24, ctx->r6);
    // 0x8026CF20: lh          $t8, -0x368C($t8)
    ctx->r24 = MEM_H(ctx->r24, -0X368C);
    // 0x8026CF24: lhu         $t9, 0x8($v1)
    ctx->r25 = MEM_HU(ctx->r3, 0X8);
    // 0x8026CF28: mtc1        $t8, $f4
    ctx->f4.u32l = ctx->r24;
    // 0x8026CF2C: andi        $t0, $t9, 0x1
    ctx->r8 = ctx->r25 & 0X1;
    // 0x8026CF30: beq         $t0, $zero, L_8026CF40
    if (ctx->r8 == 0) {
        // 0x8026CF34: cvt.s.w     $f0, $f4
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    ctx->f0.fl = CVT_S_W(ctx->f4.u32l);
            goto L_8026CF40;
    }
    // 0x8026CF34: cvt.s.w     $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    ctx->f0.fl = CVT_S_W(ctx->f4.u32l);
    // 0x8026CF38: neg.s       $f12, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); 
    ctx->f12.fl = -ctx->f12.fl;
    // 0x8026CF3C: neg.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = -ctx->f0.fl;
L_8026CF40:
    // 0x8026CF40: addu        $t1, $v1, $a2
    ctx->r9 = ADD32(ctx->r3, ctx->r6);
    // 0x8026CF44: lh          $a1, 0x8F8($t1)
    ctx->r5 = MEM_H(ctx->r9, 0X8F8);
    // 0x8026CF48: lh          $v0, 0x2E($a0)
    ctx->r2 = MEM_H(ctx->r4, 0X2E);
    // 0x8026CF4C: sub.s       $f6, $f0, $f12
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f6.fl = ctx->f0.fl - ctx->f12.fl;
    // 0x8026CF50: slt         $at, $a1, $v0
    ctx->r1 = SIGNED(ctx->r5) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x8026CF54: beq         $at, $zero, L_8026CF6C
    if (ctx->r1 == 0) {
        // 0x8026CF58: addiu       $t2, $v0, -0x15E
        ctx->r10 = ADD32(ctx->r2, -0X15E);
            goto L_8026CF6C;
    }
    // 0x8026CF58: addiu       $t2, $v0, -0x15E
    ctx->r10 = ADD32(ctx->r2, -0X15E);
    // 0x8026CF5C: sh          $a1, 0x2E($a0)
    MEM_H(0X2E, ctx->r4) = ctx->r5;
    // 0x8026CF60: lh          $v0, 0x2E($a0)
    ctx->r2 = MEM_H(ctx->r4, 0X2E);
    // 0x8026CF64: nop

    // 0x8026CF68: addiu       $t2, $v0, -0x15E
    ctx->r10 = ADD32(ctx->r2, -0X15E);
L_8026CF6C:
    // 0x8026CF6C: mtc1        $t2, $f8
    ctx->f8.u32l = ctx->r10;
    // 0x8026CF70: lui         $at, 0x431F
    ctx->r1 = S32(0X431F << 16);
    // 0x8026CF74: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x8026CF78: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x8026CF7C: mul.s       $f16, $f6, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = MUL_S(ctx->f6.fl, ctx->f10.fl);
    // 0x8026CF80: nop

    // 0x8026CF84: div.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = DIV_S(ctx->f16.fl, ctx->f18.fl);
    // 0x8026CF88: add.s       $f8, $f4, $f12
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f12.fl;
    // 0x8026CF8C: cfc1        $t3, $FpcCsr
    ctx->r11 = get_cop1_cs();
    // 0x8026CF90: nop

    // 0x8026CF94: ori         $at, $t3, 0x3
    ctx->r1 = ctx->r11 | 0X3;
    // 0x8026CF98: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x8026CF9C: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x8026CFA0: nop

    // 0x8026CFA4: cvt.w.s     $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    ctx->f6.u32l = CVT_W_S(ctx->f8.fl);
    // 0x8026CFA8: mfc1        $t4, $f6
    ctx->r12 = (int32_t)ctx->f6.u32l;
    // 0x8026CFAC: ctc1        $t3, $FpcCsr
    set_cop1_cs(ctx->r11);
    // 0x8026CFB0: sh          $t4, 0x30($a0)
    MEM_H(0X30, ctx->r4) = ctx->r12;
    // 0x8026CFB4: jal         0x8026AA98
    // 0x8026CFB8: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    ovl_8024B800_func_8026AA98(rdram, ctx);
        goto after_0;
    // 0x8026CFB8: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x8026CFBC: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x8026CFC0: jal         0x8026BB00
    // 0x8026CFC4: nop

    ovl_8024B800_func_8026BB00(rdram, ctx);
        goto after_1;
    // 0x8026CFC4: nop

    after_1:
    // 0x8026CFC8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8026CFCC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8026CFD0: jr          $ra
    // 0x8026CFD4: nop

    return;
    // 0x8026CFD4: nop

;}
