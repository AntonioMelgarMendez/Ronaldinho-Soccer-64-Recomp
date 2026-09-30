#include "iss64_recomp.h"
#include "funcs.h"

RECOMP_FUNC void ovl_803F0000_menu_func_803F0558(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803F0558: addiu       $sp, $sp, -0xA8
    ctx->r29 = ADD32(ctx->r29, -0XA8);
    // 0x803F055C: lui         $at, 0x803F
    ctx->r1 = S32(0X803F << 16);
    // 0x803F0560: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x803F0564: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x803F0568: sh          $zero, 0x7E04($at)
    MEM_H(0X7E04, ctx->r1) = 0;
    // 0x803F056C: lw          $v1, 0xC8($a0)
    ctx->r3 = MEM_W(ctx->r4, 0XC8);
    // 0x803F0570: lui         $t9, 0x8012
    ctx->r25 = S32(0X8012 << 16);
    // 0x803F0574: lhu         $t6, 0x95C($v1)
    ctx->r14 = MEM_HU(ctx->r3, 0X95C);
    // 0x803F0578: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x803F057C: andi        $t7, $t6, 0xFFEE
    ctx->r15 = ctx->r14 & 0XFFEE;
    // 0x803F0580: sh          $t7, 0x95C($v1)
    MEM_H(0X95C, ctx->r3) = ctx->r15;
    // 0x803F0584: lw          $t8, 0xC8($a0)
    ctx->r24 = MEM_W(ctx->r4, 0XC8);
    // 0x803F0588: nop

    // 0x803F058C: sw          $zero, 0x958($t8)
    MEM_W(0X958, ctx->r24) = 0;
    // 0x803F0590: lhu         $t9, 0xB78($t9)
    ctx->r25 = MEM_HU(ctx->r25, 0XB78);
    // 0x803F0594: nop

    // 0x803F0598: addiu       $t1, $t9, -0x3
    ctx->r9 = ADD32(ctx->r25, -0X3);
    // 0x803F059C: sltiu       $at, $t1, 0x5
    ctx->r1 = ctx->r9 < 0X5 ? 1 : 0;
    // 0x803F05A0: beq         $at, $zero, L_803F0EC0
    if (ctx->r1 == 0) {
        // 0x803F05A4: sll         $t1, $t1, 2
        ctx->r9 = S32(ctx->r9 << 2);
            goto L_803F0EC0;
    }
    // 0x803F05A4: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x803F05A8: lui         $at, 0x803F
    ctx->r1 = S32(0X803F << 16);
    // 0x803F05AC: addu        $at, $at, $t1
    gpr jr_addend_803F05B8 = ctx->r9;
    ctx->r1 = ADD32(ctx->r1, ctx->r9);
    // 0x803F05B0: lw          $t1, 0x7B50($at)
    ctx->r9 = ADD32(ctx->r1, 0X7B50);
    // 0x803F05B4: nop

    // 0x803F05B8: jr          $t1
    // 0x803F05BC: nop

    switch (jr_addend_803F05B8 >> 2) {
        case 0: goto L_803F0AEC; break;
        case 1: goto L_803F0B64; break;
        case 2: goto L_803F05C0; break;
        case 3: goto L_803F072C; break;
        case 4: goto L_803F05C0; break;
        default: switch_error(__func__, 0x803F05B8, 0x803F7B50);
    }
    // 0x803F05BC: nop

L_803F05C0:
    // 0x803F05C0: lw          $t2, 0xC8($s0)
    ctx->r10 = MEM_W(ctx->r16, 0XC8);
    // 0x803F05C4: lui         $at, 0x803F
    ctx->r1 = S32(0X803F << 16);
    // 0x803F05C8: lw          $t3, 0x24($t2)
    ctx->r11 = MEM_W(ctx->r10, 0X24);
    // 0x803F05CC: lwc1        $f9, 0x7B68($at)
    ctx->f_odd[(9 - 1) * 2] = MEM_W(ctx->r1, 0X7B68);
    // 0x803F05D0: lwc1        $f4, 0x8C0($t3)
    ctx->f4.u32l = MEM_W(ctx->r11, 0X8C0);
    // 0x803F05D4: lwc1        $f8, 0x7B6C($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X7B6C);
    // 0x803F05D8: cvt.d.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.d = CVT_D_S(ctx->f4.fl);
    // 0x803F05DC: add.d       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f8.d); 
    ctx->f10.d = ctx->f6.d + ctx->f8.d;
    // 0x803F05E0: lui         $at, 0x803F
    ctx->r1 = S32(0X803F << 16);
    // 0x803F05E4: cvt.s.d     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f16.fl = CVT_S_D(ctx->f10.d);
    // 0x803F05E8: addiu       $t4, $zero, 0x13
    ctx->r12 = ADD32(0, 0X13);
    // 0x803F05EC: swc1        $f16, 0x7E00($at)
    MEM_W(0X7E00, ctx->r1) = ctx->f16.u32l;
    // 0x803F05F0: lw          $t5, 0xC8($s0)
    ctx->r13 = MEM_W(ctx->r16, 0XC8);
    // 0x803F05F4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x803F05F8: sh          $t4, 0x960($t5)
    MEM_H(0X960, ctx->r13) = ctx->r12;
    // 0x803F05FC: lw          $t6, 0xC8($s0)
    ctx->r14 = MEM_W(ctx->r16, 0XC8);
    // 0x803F0600: addiu       $a1, $zero, 0x7E0
    ctx->r5 = ADD32(0, 0X7E0);
    // 0x803F0604: lh          $v0, 0x8B0($t6)
    ctx->r2 = MEM_H(ctx->r14, 0X8B0);
    // 0x803F0608: nop

    // 0x803F060C: bgtz        $v0, L_803F0630
    if (SIGNED(ctx->r2) > 0) {
        // 0x803F0610: slti        $at, $v0, -0xC7
        ctx->r1 = SIGNED(ctx->r2) < -0XC7 ? 1 : 0;
            goto L_803F0630;
    }
    // 0x803F0610: slti        $at, $v0, -0xC7
    ctx->r1 = SIGNED(ctx->r2) < -0XC7 ? 1 : 0;
    // 0x803F0614: bne         $at, $zero, L_803F06AC
    if (ctx->r1 != 0) {
        // 0x803F0618: lui         $t7, 0x8028
        ctx->r15 = S32(0X8028 << 16);
            goto L_803F06AC;
    }
    // 0x803F0618: lui         $t7, 0x8028
    ctx->r15 = S32(0X8028 << 16);
    // 0x803F061C: lh          $t7, -0x1B60($t7)
    ctx->r15 = MEM_H(ctx->r15, -0X1B60);
    // 0x803F0620: nop

    // 0x803F0624: andi        $t8, $t7, 0x1
    ctx->r24 = ctx->r15 & 0X1;
    // 0x803F0628: beq         $t8, $zero, L_803F06AC
    if (ctx->r24 == 0) {
        // 0x803F062C: nop
    
            goto L_803F06AC;
    }
    // 0x803F062C: nop

L_803F0630:
    // 0x803F0630: jal         0x803F11B4
    // 0x803F0634: addiu       $a2, $zero, 0x5
    ctx->r6 = ADD32(0, 0X5);
    ovl_803F0000_menu_func_803F11B4(rdram, ctx);
        goto after_0;
    // 0x803F0634: addiu       $a2, $zero, 0x5
    ctx->r6 = ADD32(0, 0X5);
    after_0:
    // 0x803F0638: beq         $v0, $zero, L_803F06B0
    if (ctx->r2 == 0) {
        // 0x803F063C: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_803F06B0;
    }
    // 0x803F063C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x803F0640: lwc1        $f18, 0x88($v0)
    ctx->f18.u32l = MEM_W(ctx->r2, 0X88);
    // 0x803F0644: lui         $at, 0x803F
    ctx->r1 = S32(0X803F << 16);
    // 0x803F0648: swc1        $f18, 0x7E00($at)
    MEM_W(0X7E00, ctx->r1) = ctx->f18.u32l;
    // 0x803F064C: lui         $at, 0x803F
    ctx->r1 = S32(0X803F << 16);
    // 0x803F0650: lwc1        $f4, 0x84($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X84);
    // 0x803F0654: lwc1        $f9, 0x7B70($at)
    ctx->f_odd[(9 - 1) * 2] = MEM_W(ctx->r1, 0X7B70);
    // 0x803F0658: lwc1        $f8, 0x7B74($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X7B74);
    // 0x803F065C: cvt.d.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.d = CVT_D_S(ctx->f4.fl);
    // 0x803F0660: mul.d       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f8.d); 
    ctx->f10.d = MUL_D(ctx->f6.d, ctx->f8.d);
    // 0x803F0664: lui         $at, 0x4014
    ctx->r1 = S32(0X4014 << 16);
    // 0x803F0668: mtc1        $at, $f17
    ctx->f_odd[(17 - 1) * 2] = ctx->r1;
    // 0x803F066C: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x803F0670: lw          $t2, 0xC8($s0)
    ctx->r10 = MEM_W(ctx->r16, 0XC8);
    // 0x803F0674: add.d       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f16.d); 
    ctx->f18.d = ctx->f10.d + ctx->f16.d;
    // 0x803F0678: addiu       $t3, $zero, 0x4
    ctx->r11 = ADD32(0, 0X4);
    // 0x803F067C: cfc1        $t9, $FpcCsr
    ctx->r25 = get_cop1_cs();
    // 0x803F0680: nop

    // 0x803F0684: ori         $at, $t9, 0x3
    ctx->r1 = ctx->r25 | 0X3;
    // 0x803F0688: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x803F068C: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x803F0690: nop

    // 0x803F0694: cvt.w.d     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    ctx->f4.u32l = CVT_W_D(ctx->f18.d);
    // 0x803F0698: mfc1        $t1, $f4
    ctx->r9 = (int32_t)ctx->f4.u32l;
    // 0x803F069C: ctc1        $t9, $FpcCsr
    set_cop1_cs(ctx->r25);
    // 0x803F06A0: sh          $t1, 0x960($t2)
    MEM_H(0X960, ctx->r10) = ctx->r9;
    // 0x803F06A4: b           L_803F0EC0
    // 0x803F06A8: sh          $t3, 0x36($s0)
    MEM_H(0X36, ctx->r16) = ctx->r11;
        goto L_803F0EC0;
    // 0x803F06A8: sh          $t3, 0x36($s0)
    MEM_H(0X36, ctx->r16) = ctx->r11;
L_803F06AC:
    // 0x803F06AC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
L_803F06B0:
    // 0x803F06B0: addiu       $a1, $zero, 0x700
    ctx->r5 = ADD32(0, 0X700);
    // 0x803F06B4: jal         0x803F11B4
    // 0x803F06B8: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    ovl_803F0000_menu_func_803F11B4(rdram, ctx);
        goto after_1;
    // 0x803F06B8: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    after_1:
    // 0x803F06BC: beq         $v0, $zero, L_803F0720
    if (ctx->r2 == 0) {
        // 0x803F06C0: lui         $at, 0x803F
        ctx->r1 = S32(0X803F << 16);
            goto L_803F0720;
    }
    // 0x803F06C0: lui         $at, 0x803F
    ctx->r1 = S32(0X803F << 16);
    // 0x803F06C4: lwc1        $f12, 0x7B78($at)
    ctx->f12.u32l = MEM_W(ctx->r1, 0X7B78);
    // 0x803F06C8: lui         $at, 0x803F
    ctx->r1 = S32(0X803F << 16);
    // 0x803F06CC: lwc1        $f14, 0x7B7C($at)
    ctx->f14.u32l = MEM_W(ctx->r1, 0X7B7C);
    // 0x803F06D0: lui         $a2, 0x3E8F
    ctx->r6 = S32(0X3E8F << 16);
    // 0x803F06D4: lui         $a3, 0x3D7B
    ctx->r7 = S32(0X3D7B << 16);
    // 0x803F06D8: addiu       $t4, $sp, 0x34
    ctx->r12 = ADD32(ctx->r29, 0X34);
    // 0x803F06DC: sw          $t4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r12;
    // 0x803F06E0: ori         $a3, $a3, 0x823F
    ctx->r7 = ctx->r7 | 0X823F;
    // 0x803F06E4: ori         $a2, $a2, 0xB824
    ctx->r6 = ctx->r6 | 0XB824;
    // 0x803F06E8: jal         0x8005743C
    // 0x803F06EC: sw          $v0, 0xA4($sp)
    MEM_W(0XA4, ctx->r29) = ctx->r2;
    func_8005743C(rdram, ctx);
        goto after_2;
    // 0x803F06EC: sw          $v0, 0xA4($sp)
    MEM_W(0XA4, ctx->r29) = ctx->r2;
    after_2:
    // 0x803F06F0: lw          $v1, 0xA4($sp)
    ctx->r3 = MEM_W(ctx->r29, 0XA4);
    // 0x803F06F4: lui         $at, 0x803F
    ctx->r1 = S32(0X803F << 16);
    // 0x803F06F8: lwc1        $f6, 0x88($v1)
    ctx->f6.u32l = MEM_W(ctx->r3, 0X88);
    // 0x803F06FC: addiu       $a1, $zero, 0x13
    ctx->r5 = ADD32(0, 0X13);
    // 0x803F0700: swc1        $f6, 0x7E00($at)
    MEM_W(0X7E00, ctx->r1) = ctx->f6.u32l;
    // 0x803F0704: lwc1        $f12, 0x84($v1)
    ctx->f12.u32l = MEM_W(ctx->r3, 0X84);
    // 0x803F0708: addiu       $a2, $sp, 0x34
    ctx->r6 = ADD32(ctx->r29, 0X34);
    // 0x803F070C: jal         0x803F0000
    // 0x803F0710: addiu       $a3, $sp, 0x80
    ctx->r7 = ADD32(ctx->r29, 0X80);
    ovl_803F0000_menu_func_803F0000(rdram, ctx);
        goto after_3;
    // 0x803F0710: addiu       $a3, $sp, 0x80
    ctx->r7 = ADD32(ctx->r29, 0X80);
    after_3:
    // 0x803F0714: lw          $t5, 0xC8($s0)
    ctx->r13 = MEM_W(ctx->r16, 0XC8);
    // 0x803F0718: nop

    // 0x803F071C: sh          $v0, 0x960($t5)
    MEM_H(0X960, ctx->r13) = ctx->r2;
L_803F0720:
    // 0x803F0720: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x803F0724: b           L_803F0EC0
    // 0x803F0728: sh          $t6, 0x36($s0)
    MEM_H(0X36, ctx->r16) = ctx->r14;
        goto L_803F0EC0;
    // 0x803F0728: sh          $t6, 0x36($s0)
    MEM_H(0X36, ctx->r16) = ctx->r14;
L_803F072C:
    // 0x803F072C: lui         $at, 0x803F
    ctx->r1 = S32(0X803F << 16);
    // 0x803F0730: lwc1        $f12, 0x7B80($at)
    ctx->f12.u32l = MEM_W(ctx->r1, 0X7B80);
    // 0x803F0734: lui         $at, 0x803F
    ctx->r1 = S32(0X803F << 16);
    // 0x803F0738: lwc1        $f14, 0x7B84($at)
    ctx->f14.u32l = MEM_W(ctx->r1, 0X7B84);
    // 0x803F073C: lui         $a2, 0x3E8F
    ctx->r6 = S32(0X3E8F << 16);
    // 0x803F0740: lui         $a3, 0x3D7B
    ctx->r7 = S32(0X3D7B << 16);
    // 0x803F0744: addiu       $t7, $sp, 0x34
    ctx->r15 = ADD32(ctx->r29, 0X34);
    // 0x803F0748: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x803F074C: ori         $a3, $a3, 0x823F
    ctx->r7 = ctx->r7 | 0X823F;
    // 0x803F0750: jal         0x8005743C
    // 0x803F0754: ori         $a2, $a2, 0xB824
    ctx->r6 = ctx->r6 | 0XB824;
    func_8005743C(rdram, ctx);
        goto after_4;
    // 0x803F0754: ori         $a2, $a2, 0xB824
    ctx->r6 = ctx->r6 | 0XB824;
    after_4:
    // 0x803F0758: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x803F075C: jal         0x803F0304
    // 0x803F0760: addiu       $a1, $sp, 0x88
    ctx->r5 = ADD32(ctx->r29, 0X88);
    ovl_803F0000_menu_func_803F0304(rdram, ctx);
        goto after_5;
    // 0x803F0760: addiu       $a1, $sp, 0x88
    ctx->r5 = ADD32(ctx->r29, 0X88);
    after_5:
    // 0x803F0764: beq         $v0, $zero, L_803F0924
    if (ctx->r2 == 0) {
        // 0x803F0768: nop
    
            goto L_803F0924;
    }
    // 0x803F0768: nop

    // 0x803F076C: lhu         $t8, 0x2C($s0)
    ctx->r24 = MEM_HU(ctx->r16, 0X2C);
    // 0x803F0770: lui         $v0, 0x8009
    ctx->r2 = S32(0X8009 << 16);
    // 0x803F0774: andi        $t9, $t8, 0x1
    ctx->r25 = ctx->r24 & 0X1;
    // 0x803F0778: beq         $t9, $zero, L_803F0788
    if (ctx->r25 == 0) {
        // 0x803F077C: addiu       $t4, $sp, 0x9C
        ctx->r12 = ADD32(ctx->r29, 0X9C);
            goto L_803F0788;
    }
    // 0x803F077C: addiu       $t4, $sp, 0x9C
    ctx->r12 = ADD32(ctx->r29, 0X9C);
    // 0x803F0780: b           L_803F078C
    // 0x803F0784: addiu       $v1, $zero, 0x26
    ctx->r3 = ADD32(0, 0X26);
        goto L_803F078C;
    // 0x803F0784: addiu       $v1, $zero, 0x26
    ctx->r3 = ADD32(0, 0X26);
L_803F0788:
    // 0x803F0788: addiu       $v1, $zero, -0x26
    ctx->r3 = ADD32(0, -0X26);
L_803F078C:
    // 0x803F078C: lw          $t1, 0xC8($s0)
    ctx->r9 = MEM_W(ctx->r16, 0XC8);
    // 0x803F0790: mtc1        $v1, $f10
    ctx->f10.u32l = ctx->r3;
    // 0x803F0794: lw          $t2, 0x24($t1)
    ctx->r10 = MEM_W(ctx->r9, 0X24);
    // 0x803F0798: cvt.s.w     $f10, $f10
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 10);
    ctx->f10.fl = CVT_S_W(ctx->f10.u32l);
    // 0x803F079C: lh          $t3, 0x8B8($t2)
    ctx->r11 = MEM_H(ctx->r10, 0X8B8);
    // 0x803F07A0: lw          $v0, 0x3B20($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X3B20);
    // 0x803F07A4: mtc1        $t3, $f8
    ctx->f8.u32l = ctx->r11;
    // 0x803F07A8: mfc1        $a3, $f10
    ctx->r7 = (int32_t)ctx->f10.u32l;
    // 0x803F07AC: cvt.s.w     $f8, $f8
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 8);
    ctx->f8.fl = CVT_S_W(ctx->f8.u32l);
    // 0x803F07B0: lwc1        $f12, 0x8($v0)
    ctx->f12.u32l = MEM_W(ctx->r2, 0X8);
    // 0x803F07B4: lwc1        $f14, 0x0($v0)
    ctx->f14.u32l = MEM_W(ctx->r2, 0X0);
    // 0x803F07B8: mfc1        $a2, $f8
    ctx->r6 = (int32_t)ctx->f8.u32l;
    // 0x803F07BC: jal         0x80272B1C
    // 0x803F07C0: sw          $t4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r12;
    LOOKUP_FUNC(0x80272B1C)(rdram, ctx);
        goto after_6;
    // 0x803F07C0: sw          $t4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r12;
    after_6:
    // 0x803F07C4: lwc1        $f16, 0x9C($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X9C);
    // 0x803F07C8: lui         $at, 0x803F
    ctx->r1 = S32(0X803F << 16);
    // 0x803F07CC: swc1        $f16, 0x7E00($at)
    MEM_W(0X7E00, ctx->r1) = ctx->f16.u32l;
    // 0x803F07D0: lui         $at, 0x4316
    ctx->r1 = S32(0X4316 << 16);
    // 0x803F07D4: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x803F07D8: lwc1        $f18, 0xA0($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0XA0);
    // 0x803F07DC: lui         $at, 0x803F
    ctx->r1 = S32(0X803F << 16);
    // 0x803F07E0: lhu         $t5, 0x2C($s0)
    ctx->r13 = MEM_HU(ctx->r16, 0X2C);
    // 0x803F07E4: sub.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f18.fl - ctx->f4.fl;
    // 0x803F07E8: lwc1        $f11, 0x7B88($at)
    ctx->f_odd[(11 - 1) * 2] = MEM_W(ctx->r1, 0X7B88);
    // 0x803F07EC: lwc1        $f10, 0x7B8C($at)
    ctx->f10.u32l = MEM_W(ctx->r1, 0X7B8C);
    // 0x803F07F0: cvt.d.s     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f8.d = CVT_D_S(ctx->f6.fl);
    // 0x803F07F4: andi        $t6, $t5, 0x5
    ctx->r14 = ctx->r13 & 0X5;
    // 0x803F07F8: mul.d       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f10.d); 
    ctx->f16.d = MUL_D(ctx->f8.d, ctx->f10.d);
    // 0x803F07FC: mtc1        $t6, $f18
    ctx->f18.u32l = ctx->r14;
    // 0x803F0800: lw          $t9, 0xC8($s0)
    ctx->r25 = MEM_W(ctx->r16, 0XC8);
    // 0x803F0804: addiu       $a0, $zero, 0x5
    ctx->r4 = ADD32(0, 0X5);
    // 0x803F0808: cvt.d.w     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    ctx->f4.d = CVT_D_W(ctx->f18.u32l);
    // 0x803F080C: add.d       $f6, $f16, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f16.d); NAN_CHECK(ctx->f4.d); 
    ctx->f6.d = ctx->f16.d + ctx->f4.d;
    // 0x803F0810: cfc1        $t7, $FpcCsr
    ctx->r15 = get_cop1_cs();
    // 0x803F0814: nop

    // 0x803F0818: ori         $at, $t7, 0x3
    ctx->r1 = ctx->r15 | 0X3;
    // 0x803F081C: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x803F0820: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x803F0824: nop

    // 0x803F0828: cvt.w.d     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.u32l = CVT_W_D(ctx->f6.d);
    // 0x803F082C: mfc1        $t8, $f8
    ctx->r24 = (int32_t)ctx->f8.u32l;
    // 0x803F0830: ctc1        $t7, $FpcCsr
    set_cop1_cs(ctx->r15);
    // 0x803F0834: jal         0x80058054
    // 0x803F0838: sh          $t8, 0x960($t9)
    MEM_H(0X960, ctx->r25) = ctx->r24;
    func_80058054(rdram, ctx);
        goto after_7;
    // 0x803F0838: sh          $t8, 0x960($t9)
    MEM_H(0X960, ctx->r25) = ctx->r24;
    after_7:
    // 0x803F083C: lw          $t1, 0xD8($s0)
    ctx->r9 = MEM_W(ctx->r16, 0XD8);
    // 0x803F0840: lui         $t0, 0x803F
    ctx->r8 = S32(0X803F << 16);
    // 0x803F0844: lbu         $t2, 0x13($t1)
    ctx->r10 = MEM_BU(ctx->r9, 0X13);
    // 0x803F0848: addiu       $t0, $t0, 0x7E00
    ctx->r8 = ADD32(ctx->r8, 0X7E00);
    // 0x803F084C: andi        $t3, $t2, 0x40
    ctx->r11 = ctx->r10 & 0X40;
    // 0x803F0850: beq         $t3, $zero, L_803F08A8
    if (ctx->r11 == 0) {
        // 0x803F0854: lui         $at, 0x803F
        ctx->r1 = S32(0X803F << 16);
            goto L_803F08A8;
    }
    // 0x803F0854: lui         $at, 0x803F
    ctx->r1 = S32(0X803F << 16);
    // 0x803F0858: lui         $at, 0x803F
    ctx->r1 = S32(0X803F << 16);
    // 0x803F085C: lwc1        $f10, 0x0($t0)
    ctx->f10.u32l = MEM_W(ctx->r8, 0X0);
    // 0x803F0860: lwc1        $f17, 0x7B90($at)
    ctx->f_odd[(17 - 1) * 2] = MEM_W(ctx->r1, 0X7B90);
    // 0x803F0864: lwc1        $f16, 0x7B94($at)
    ctx->f16.u32l = MEM_W(ctx->r1, 0X7B94);
    // 0x803F0868: cvt.d.s     $f18, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.fl); 
    ctx->f18.d = CVT_D_S(ctx->f10.fl);
    // 0x803F086C: add.d       $f4, $f18, $f16
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f18.d); NAN_CHECK(ctx->f16.d); 
    ctx->f4.d = ctx->f18.d + ctx->f16.d;
    // 0x803F0870: lw          $t4, 0xC8($s0)
    ctx->r12 = MEM_W(ctx->r16, 0XC8);
    // 0x803F0874: cvt.s.d     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.d); 
    ctx->f6.fl = CVT_S_D(ctx->f4.d);
    // 0x803F0878: lui         $at, 0x803F
    ctx->r1 = S32(0X803F << 16);
    // 0x803F087C: swc1        $f6, 0x970($t4)
    MEM_W(0X970, ctx->r12) = ctx->f6.u32l;
    // 0x803F0880: lwc1        $f10, 0x7B9C($at)
    ctx->f10.u32l = MEM_W(ctx->r1, 0X7B9C);
    // 0x803F0884: lwc1        $f11, 0x7B98($at)
    ctx->f_odd[(11 - 1) * 2] = MEM_W(ctx->r1, 0X7B98);
    // 0x803F0888: cvt.d.s     $f8, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f8.d = CVT_D_S(ctx->f0.fl);
    // 0x803F088C: add.d       $f18, $f8, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f10.d); 
    ctx->f18.d = ctx->f8.d + ctx->f10.d;
    // 0x803F0890: lwc1        $f4, 0x0($t0)
    ctx->f4.u32l = MEM_W(ctx->r8, 0X0);
    // 0x803F0894: cvt.s.d     $f16, $f18
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.d); 
    ctx->f16.fl = CVT_S_D(ctx->f18.d);
    // 0x803F0898: lui         $at, 0x803F
    ctx->r1 = S32(0X803F << 16);
    // 0x803F089C: sub.s       $f6, $f4, $f16
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f6.fl = ctx->f4.fl - ctx->f16.fl;
    // 0x803F08A0: b           L_803F08F0
    // 0x803F08A4: swc1        $f6, 0x7E00($at)
    MEM_W(0X7E00, ctx->r1) = ctx->f6.u32l;
        goto L_803F08F0;
    // 0x803F08A4: swc1        $f6, 0x7E00($at)
    MEM_W(0X7E00, ctx->r1) = ctx->f6.u32l;
L_803F08A8:
    // 0x803F08A8: lwc1        $f8, 0x0($t0)
    ctx->f8.u32l = MEM_W(ctx->r8, 0X0);
    // 0x803F08AC: lwc1        $f19, 0x7BA0($at)
    ctx->f_odd[(19 - 1) * 2] = MEM_W(ctx->r1, 0X7BA0);
    // 0x803F08B0: lwc1        $f18, 0x7BA4($at)
    ctx->f18.u32l = MEM_W(ctx->r1, 0X7BA4);
    // 0x803F08B4: cvt.d.s     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f10.d = CVT_D_S(ctx->f8.fl);
    // 0x803F08B8: sub.d       $f4, $f10, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f18.d); 
    ctx->f4.d = ctx->f10.d - ctx->f18.d;
    // 0x803F08BC: lw          $t5, 0xC8($s0)
    ctx->r13 = MEM_W(ctx->r16, 0XC8);
    // 0x803F08C0: cvt.s.d     $f16, $f4
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.d); 
    ctx->f16.fl = CVT_S_D(ctx->f4.d);
    // 0x803F08C4: lui         $at, 0x803F
    ctx->r1 = S32(0X803F << 16);
    // 0x803F08C8: swc1        $f16, 0x970($t5)
    MEM_W(0X970, ctx->r13) = ctx->f16.u32l;
    // 0x803F08CC: lwc1        $f8, 0x7BAC($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X7BAC);
    // 0x803F08D0: lwc1        $f9, 0x7BA8($at)
    ctx->f_odd[(9 - 1) * 2] = MEM_W(ctx->r1, 0X7BA8);
    // 0x803F08D4: cvt.d.s     $f6, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f6.d = CVT_D_S(ctx->f0.fl);
    // 0x803F08D8: add.d       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f8.d); 
    ctx->f10.d = ctx->f6.d + ctx->f8.d;
    // 0x803F08DC: lwc1        $f4, 0x0($t0)
    ctx->f4.u32l = MEM_W(ctx->r8, 0X0);
    // 0x803F08E0: cvt.s.d     $f18, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f18.fl = CVT_S_D(ctx->f10.d);
    // 0x803F08E4: lui         $at, 0x803F
    ctx->r1 = S32(0X803F << 16);
    // 0x803F08E8: add.s       $f16, $f4, $f18
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f16.fl = ctx->f4.fl + ctx->f18.fl;
    // 0x803F08EC: swc1        $f16, 0x7E00($at)
    MEM_W(0X7E00, ctx->r1) = ctx->f16.u32l;
L_803F08F0:
    // 0x803F08F0: jal         0x80059898
    // 0x803F08F4: addiu       $a0, $zero, 0xF
    ctx->r4 = ADD32(0, 0XF);
    func_80059898(rdram, ctx);
        goto after_8;
    // 0x803F08F4: addiu       $a0, $zero, 0xF
    ctx->r4 = ADD32(0, 0XF);
    after_8:
    // 0x803F08F8: lw          $t7, 0xC8($s0)
    ctx->r15 = MEM_W(ctx->r16, 0XC8);
    // 0x803F08FC: addiu       $t6, $v0, 0x14
    ctx->r14 = ADD32(ctx->r2, 0X14);
    // 0x803F0900: sh          $t6, 0x962($t7)
    MEM_H(0X962, ctx->r15) = ctx->r14;
    // 0x803F0904: lw          $v1, 0xC8($s0)
    ctx->r3 = MEM_W(ctx->r16, 0XC8);
    // 0x803F0908: addiu       $t1, $zero, 0x8
    ctx->r9 = ADD32(0, 0X8);
    // 0x803F090C: lhu         $t8, 0x95C($v1)
    ctx->r24 = MEM_HU(ctx->r3, 0X95C);
    // 0x803F0910: nop

    // 0x803F0914: ori         $t9, $t8, 0x1
    ctx->r25 = ctx->r24 | 0X1;
    // 0x803F0918: sh          $t9, 0x95C($v1)
    MEM_H(0X95C, ctx->r3) = ctx->r25;
    // 0x803F091C: b           L_803F0ACC
    // 0x803F0920: sh          $t1, 0x36($s0)
    MEM_H(0X36, ctx->r16) = ctx->r9;
        goto L_803F0ACC;
    // 0x803F0920: sh          $t1, 0x36($s0)
    MEM_H(0X36, ctx->r16) = ctx->r9;
L_803F0924:
    // 0x803F0924: lw          $t2, 0xC8($s0)
    ctx->r10 = MEM_W(ctx->r16, 0XC8);
    // 0x803F0928: nop

    // 0x803F092C: lw          $t3, 0x24($t2)
    ctx->r11 = MEM_W(ctx->r10, 0X24);
    // 0x803F0930: nop

    // 0x803F0934: lh          $t4, 0x8B8($t3)
    ctx->r12 = MEM_H(ctx->r11, 0X8B8);
    // 0x803F0938: nop

    // 0x803F093C: mtc1        $t4, $f6
    ctx->f6.u32l = ctx->r12;
    // 0x803F0940: jal         0x802645E0
    // 0x803F0944: cvt.s.w     $f12, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    ctx->f12.fl = CVT_S_W(ctx->f6.u32l);
    LOOKUP_FUNC(0x802645E0)(rdram, ctx);
        goto after_9;
    // 0x803F0944: cvt.s.w     $f12, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    ctx->f12.fl = CVT_S_W(ctx->f6.u32l);
    after_9:
    // 0x803F0948: sll         $t5, $v0, 2
    ctx->r13 = S32(ctx->r2 << 2);
    // 0x803F094C: lui         $t6, 0x800B
    ctx->r14 = S32(0X800B << 16);
    // 0x803F0950: addu        $t6, $t6, $t5
    ctx->r14 = ADD32(ctx->r14, ctx->r13);
    // 0x803F0954: lw          $t6, -0x3F54($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X3F54);
    // 0x803F0958: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
    // 0x803F095C: jal         0x80059898
    // 0x803F0960: sw          $t6, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r14;
    func_80059898(rdram, ctx);
        goto after_10;
    // 0x803F0960: sw          $t6, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r14;
    after_10:
    // 0x803F0964: lw          $t8, 0x30($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X30);
    // 0x803F0968: sll         $t7, $v0, 2
    ctx->r15 = S32(ctx->r2 << 2);
    // 0x803F096C: subu        $t7, $t7, $v0
    ctx->r15 = SUB32(ctx->r15, ctx->r2);
    // 0x803F0970: addiu       $a1, $sp, 0x94
    ctx->r5 = ADD32(ctx->r29, 0X94);
    // 0x803F0974: jal         0x803F04A8
    // 0x803F0978: addu        $a0, $t7, $t8
    ctx->r4 = ADD32(ctx->r15, ctx->r24);
    ovl_803F0000_menu_func_803F04A8(rdram, ctx);
        goto after_11;
    // 0x803F0978: addu        $a0, $t7, $t8
    ctx->r4 = ADD32(ctx->r15, ctx->r24);
    after_11:
    // 0x803F097C: lui         $v0, 0x8009
    ctx->r2 = S32(0X8009 << 16);
    // 0x803F0980: lw          $v0, 0x3B20($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X3B20);
    // 0x803F0984: lw          $a2, 0x94($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X94);
    // 0x803F0988: lw          $a3, 0x98($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X98);
    // 0x803F098C: addiu       $t9, $sp, 0x9C
    ctx->r25 = ADD32(ctx->r29, 0X9C);
    // 0x803F0990: lwc1        $f12, 0x8($v0)
    ctx->f12.u32l = MEM_W(ctx->r2, 0X8);
    // 0x803F0994: lwc1        $f14, 0x0($v0)
    ctx->f14.u32l = MEM_W(ctx->r2, 0X0);
    // 0x803F0998: jal         0x80272B1C
    // 0x803F099C: sw          $t9, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r25;
    LOOKUP_FUNC(0x80272B1C)(rdram, ctx);
        goto after_12;
    // 0x803F099C: sw          $t9, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r25;
    after_12:
    // 0x803F09A0: lwc1        $f8, 0x9C($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X9C);
    // 0x803F09A4: lui         $t0, 0x803F
    ctx->r8 = S32(0X803F << 16);
    // 0x803F09A8: addiu       $t0, $t0, 0x7E00
    ctx->r8 = ADD32(ctx->r8, 0X7E00);
    // 0x803F09AC: lwc1        $f12, 0xA0($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0XA0);
    // 0x803F09B0: addiu       $a1, $zero, 0x13
    ctx->r5 = ADD32(0, 0X13);
    // 0x803F09B4: addiu       $a2, $sp, 0x34
    ctx->r6 = ADD32(ctx->r29, 0X34);
    // 0x803F09B8: addiu       $a3, $sp, 0x80
    ctx->r7 = ADD32(ctx->r29, 0X80);
    // 0x803F09BC: jal         0x803F0000
    // 0x803F09C0: swc1        $f8, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->f8.u32l;
    ovl_803F0000_menu_func_803F0000(rdram, ctx);
        goto after_13;
    // 0x803F09C0: swc1        $f8, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->f8.u32l;
    after_13:
    // 0x803F09C4: lw          $t1, 0xC8($s0)
    ctx->r9 = MEM_W(ctx->r16, 0XC8);
    // 0x803F09C8: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x803F09CC: sh          $v0, 0x960($t1)
    MEM_H(0X960, ctx->r9) = ctx->r2;
    // 0x803F09D0: lw          $v1, 0xC8($s0)
    ctx->r3 = MEM_W(ctx->r16, 0XC8);
    // 0x803F09D4: sh          $t2, 0x36($s0)
    MEM_H(0X36, ctx->r16) = ctx->r10;
    // 0x803F09D8: lhu         $t3, 0x95C($v1)
    ctx->r11 = MEM_HU(ctx->r3, 0X95C);
    // 0x803F09DC: addiu       $a0, $zero, 0xA
    ctx->r4 = ADD32(0, 0XA);
    // 0x803F09E0: ori         $t4, $t3, 0x1
    ctx->r12 = ctx->r11 | 0X1;
    // 0x803F09E4: jal         0x80059898
    // 0x803F09E8: sh          $t4, 0x95C($v1)
    MEM_H(0X95C, ctx->r3) = ctx->r12;
    func_80059898(rdram, ctx);
        goto after_14;
    // 0x803F09E8: sh          $t4, 0x95C($v1)
    MEM_H(0X95C, ctx->r3) = ctx->r12;
    after_14:
    // 0x803F09EC: lw          $t6, 0xC8($s0)
    ctx->r14 = MEM_W(ctx->r16, 0XC8);
    // 0x803F09F0: addiu       $t5, $v0, 0xA
    ctx->r13 = ADD32(ctx->r2, 0XA);
    // 0x803F09F4: addiu       $a0, $zero, 0x5
    ctx->r4 = ADD32(0, 0X5);
    // 0x803F09F8: jal         0x80058054
    // 0x803F09FC: sh          $t5, 0x962($t6)
    MEM_H(0X962, ctx->r14) = ctx->r13;
    func_80058054(rdram, ctx);
        goto after_15;
    // 0x803F09FC: sh          $t5, 0x962($t6)
    MEM_H(0X962, ctx->r14) = ctx->r13;
    after_15:
    // 0x803F0A00: lw          $t7, 0xD8($s0)
    ctx->r15 = MEM_W(ctx->r16, 0XD8);
    // 0x803F0A04: lui         $t0, 0x803F
    ctx->r8 = S32(0X803F << 16);
    // 0x803F0A08: lbu         $t8, 0x13($t7)
    ctx->r24 = MEM_BU(ctx->r15, 0X13);
    // 0x803F0A0C: addiu       $t0, $t0, 0x7E00
    ctx->r8 = ADD32(ctx->r8, 0X7E00);
    // 0x803F0A10: andi        $t9, $t8, 0x40
    ctx->r25 = ctx->r24 & 0X40;
    // 0x803F0A14: beq         $t9, $zero, L_803F0A6C
    if (ctx->r25 == 0) {
        // 0x803F0A18: lui         $at, 0x803F
        ctx->r1 = S32(0X803F << 16);
            goto L_803F0A6C;
    }
    // 0x803F0A18: lui         $at, 0x803F
    ctx->r1 = S32(0X803F << 16);
    // 0x803F0A1C: lui         $at, 0x803F
    ctx->r1 = S32(0X803F << 16);
    // 0x803F0A20: lwc1        $f10, 0x0($t0)
    ctx->f10.u32l = MEM_W(ctx->r8, 0X0);
    // 0x803F0A24: lwc1        $f19, 0x7BB0($at)
    ctx->f_odd[(19 - 1) * 2] = MEM_W(ctx->r1, 0X7BB0);
    // 0x803F0A28: lwc1        $f18, 0x7BB4($at)
    ctx->f18.u32l = MEM_W(ctx->r1, 0X7BB4);
    // 0x803F0A2C: cvt.d.s     $f4, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.fl); 
    ctx->f4.d = CVT_D_S(ctx->f10.fl);
    // 0x803F0A30: add.d       $f16, $f4, $f18
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f18.d); 
    ctx->f16.d = ctx->f4.d + ctx->f18.d;
    // 0x803F0A34: lw          $t1, 0xC8($s0)
    ctx->r9 = MEM_W(ctx->r16, 0XC8);
    // 0x803F0A38: cvt.s.d     $f6, $f16
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.d); 
    ctx->f6.fl = CVT_S_D(ctx->f16.d);
    // 0x803F0A3C: lui         $at, 0x803F
    ctx->r1 = S32(0X803F << 16);
    // 0x803F0A40: swc1        $f6, 0x970($t1)
    MEM_W(0X970, ctx->r9) = ctx->f6.u32l;
    // 0x803F0A44: lwc1        $f10, 0x7BBC($at)
    ctx->f10.u32l = MEM_W(ctx->r1, 0X7BBC);
    // 0x803F0A48: lwc1        $f11, 0x7BB8($at)
    ctx->f_odd[(11 - 1) * 2] = MEM_W(ctx->r1, 0X7BB8);
    // 0x803F0A4C: cvt.d.s     $f8, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f8.d = CVT_D_S(ctx->f0.fl);
    // 0x803F0A50: add.d       $f4, $f8, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f10.d); 
    ctx->f4.d = ctx->f8.d + ctx->f10.d;
    // 0x803F0A54: lwc1        $f16, 0x0($t0)
    ctx->f16.u32l = MEM_W(ctx->r8, 0X0);
    // 0x803F0A58: cvt.s.d     $f18, $f4
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.d); 
    ctx->f18.fl = CVT_S_D(ctx->f4.d);
    // 0x803F0A5C: lui         $at, 0x803F
    ctx->r1 = S32(0X803F << 16);
    // 0x803F0A60: sub.s       $f6, $f16, $f18
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f6.fl = ctx->f16.fl - ctx->f18.fl;
    // 0x803F0A64: b           L_803F0AB4
    // 0x803F0A68: swc1        $f6, 0x7E00($at)
    MEM_W(0X7E00, ctx->r1) = ctx->f6.u32l;
        goto L_803F0AB4;
    // 0x803F0A68: swc1        $f6, 0x7E00($at)
    MEM_W(0X7E00, ctx->r1) = ctx->f6.u32l;
L_803F0A6C:
    // 0x803F0A6C: lwc1        $f8, 0x0($t0)
    ctx->f8.u32l = MEM_W(ctx->r8, 0X0);
    // 0x803F0A70: lwc1        $f5, 0x7BC0($at)
    ctx->f_odd[(5 - 1) * 2] = MEM_W(ctx->r1, 0X7BC0);
    // 0x803F0A74: lwc1        $f4, 0x7BC4($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X7BC4);
    // 0x803F0A78: cvt.d.s     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f10.d = CVT_D_S(ctx->f8.fl);
    // 0x803F0A7C: sub.d       $f16, $f10, $f4
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f4.d); 
    ctx->f16.d = ctx->f10.d - ctx->f4.d;
    // 0x803F0A80: lw          $t2, 0xC8($s0)
    ctx->r10 = MEM_W(ctx->r16, 0XC8);
    // 0x803F0A84: cvt.s.d     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.d); 
    ctx->f18.fl = CVT_S_D(ctx->f16.d);
    // 0x803F0A88: lui         $at, 0x803F
    ctx->r1 = S32(0X803F << 16);
    // 0x803F0A8C: swc1        $f18, 0x970($t2)
    MEM_W(0X970, ctx->r10) = ctx->f18.u32l;
    // 0x803F0A90: lwc1        $f8, 0x7BCC($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X7BCC);
    // 0x803F0A94: lwc1        $f9, 0x7BC8($at)
    ctx->f_odd[(9 - 1) * 2] = MEM_W(ctx->r1, 0X7BC8);
    // 0x803F0A98: cvt.d.s     $f6, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f6.d = CVT_D_S(ctx->f0.fl);
    // 0x803F0A9C: add.d       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f8.d); 
    ctx->f10.d = ctx->f6.d + ctx->f8.d;
    // 0x803F0AA0: lwc1        $f16, 0x0($t0)
    ctx->f16.u32l = MEM_W(ctx->r8, 0X0);
    // 0x803F0AA4: cvt.s.d     $f4, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f4.fl = CVT_S_D(ctx->f10.d);
    // 0x803F0AA8: lui         $at, 0x803F
    ctx->r1 = S32(0X803F << 16);
    // 0x803F0AAC: add.s       $f18, $f16, $f4
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f18.fl = ctx->f16.fl + ctx->f4.fl;
    // 0x803F0AB0: swc1        $f18, 0x7E00($at)
    MEM_W(0X7E00, ctx->r1) = ctx->f18.u32l;
L_803F0AB4:
    // 0x803F0AB4: lw          $v1, 0xC8($s0)
    ctx->r3 = MEM_W(ctx->r16, 0XC8);
    // 0x803F0AB8: nop

    // 0x803F0ABC: lh          $t3, 0x960($v1)
    ctx->r11 = MEM_H(ctx->r3, 0X960);
    // 0x803F0AC0: nop

    // 0x803F0AC4: addiu       $t4, $t3, 0x2
    ctx->r12 = ADD32(ctx->r11, 0X2);
    // 0x803F0AC8: sh          $t4, 0x960($v1)
    MEM_H(0X960, ctx->r3) = ctx->r12;
L_803F0ACC:
    // 0x803F0ACC: lw          $t5, 0xC8($s0)
    ctx->r13 = MEM_W(ctx->r16, 0XC8);
    // 0x803F0AD0: nop

    // 0x803F0AD4: lwc1        $f12, 0x970($t5)
    ctx->f12.u32l = MEM_W(ctx->r13, 0X970);
    // 0x803F0AD8: jal         0x803F0164
    // 0x803F0ADC: nop

    ovl_803F0000_menu_func_803F0164(rdram, ctx);
        goto after_16;
    // 0x803F0ADC: nop

    after_16:
    // 0x803F0AE0: lw          $t6, 0xC8($s0)
    ctx->r14 = MEM_W(ctx->r16, 0XC8);
    // 0x803F0AE4: b           L_803F0EC0
    // 0x803F0AE8: swc1        $f0, 0x970($t6)
    MEM_W(0X970, ctx->r14) = ctx->f0.u32l;
        goto L_803F0EC0;
    // 0x803F0AE8: swc1        $f0, 0x970($t6)
    MEM_W(0X970, ctx->r14) = ctx->f0.u32l;
L_803F0AEC:
    // 0x803F0AEC: lw          $t7, 0xC8($s0)
    ctx->r15 = MEM_W(ctx->r16, 0XC8);
    // 0x803F0AF0: lui         $t0, 0x803F
    ctx->r8 = S32(0X803F << 16);
    // 0x803F0AF4: lw          $t8, 0x24($t7)
    ctx->r24 = MEM_W(ctx->r15, 0X24);
    // 0x803F0AF8: addiu       $t0, $t0, 0x7E00
    ctx->r8 = ADD32(ctx->r8, 0X7E00);
    // 0x803F0AFC: lwc1        $f6, 0x8C0($t8)
    ctx->f6.u32l = MEM_W(ctx->r24, 0X8C0);
    // 0x803F0B00: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x803F0B04: addiu       $a1, $zero, 0x700
    ctx->r5 = ADD32(0, 0X700);
    // 0x803F0B08: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    // 0x803F0B0C: jal         0x803F11B4
    // 0x803F0B10: swc1        $f6, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->f6.u32l;
    ovl_803F0000_menu_func_803F11B4(rdram, ctx);
        goto after_17;
    // 0x803F0B10: swc1        $f6, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->f6.u32l;
    after_17:
    // 0x803F0B14: beq         $v0, $zero, L_803F0B44
    if (ctx->r2 == 0) {
        // 0x803F0B18: lui         $at, 0x43C8
        ctx->r1 = S32(0X43C8 << 16);
            goto L_803F0B44;
    }
    // 0x803F0B18: lui         $at, 0x43C8
    ctx->r1 = S32(0X43C8 << 16);
    // 0x803F0B1C: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x803F0B20: lwc1        $f10, 0x84($v0)
    ctx->f10.u32l = MEM_W(ctx->r2, 0X84);
    // 0x803F0B24: nop

    // 0x803F0B28: c.lt.s      $f8, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f8.fl < ctx->f10.fl;
    // 0x803F0B2C: nop

    // 0x803F0B30: bc1f        L_803F0B44
    if (!c1cs) {
        // 0x803F0B34: nop
    
            goto L_803F0B44;
    }
    // 0x803F0B34: nop

    // 0x803F0B38: lwc1        $f16, 0x88($v0)
    ctx->f16.u32l = MEM_W(ctx->r2, 0X88);
    // 0x803F0B3C: lui         $at, 0x803F
    ctx->r1 = S32(0X803F << 16);
    // 0x803F0B40: swc1        $f16, 0x7E00($at)
    MEM_W(0X7E00, ctx->r1) = ctx->f16.u32l;
L_803F0B44:
    // 0x803F0B44: jal         0x80059898
    // 0x803F0B48: addiu       $a0, $zero, 0x5
    ctx->r4 = ADD32(0, 0X5);
    func_80059898(rdram, ctx);
        goto after_18;
    // 0x803F0B48: addiu       $a0, $zero, 0x5
    ctx->r4 = ADD32(0, 0X5);
    after_18:
    // 0x803F0B4C: lw          $t1, 0xC8($s0)
    ctx->r9 = MEM_W(ctx->r16, 0XC8);
    // 0x803F0B50: addiu       $t9, $v0, 0xF
    ctx->r25 = ADD32(ctx->r2, 0XF);
    // 0x803F0B54: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x803F0B58: sh          $t9, 0x960($t1)
    MEM_H(0X960, ctx->r9) = ctx->r25;
    // 0x803F0B5C: b           L_803F0EC0
    // 0x803F0B60: sh          $t2, 0x36($s0)
    MEM_H(0X36, ctx->r16) = ctx->r10;
        goto L_803F0EC0;
    // 0x803F0B60: sh          $t2, 0x36($s0)
    MEM_H(0X36, ctx->r16) = ctx->r10;
L_803F0B64:
    // 0x803F0B64: lui         $at, 0x803F
    ctx->r1 = S32(0X803F << 16);
    // 0x803F0B68: lwc1        $f12, 0x7BD0($at)
    ctx->f12.u32l = MEM_W(ctx->r1, 0X7BD0);
    // 0x803F0B6C: lui         $at, 0x803F
    ctx->r1 = S32(0X803F << 16);
    // 0x803F0B70: lwc1        $f14, 0x7BD4($at)
    ctx->f14.u32l = MEM_W(ctx->r1, 0X7BD4);
    // 0x803F0B74: lui         $a2, 0x3E8F
    ctx->r6 = S32(0X3E8F << 16);
    // 0x803F0B78: lui         $a3, 0x3D7B
    ctx->r7 = S32(0X3D7B << 16);
    // 0x803F0B7C: addiu       $t3, $sp, 0x34
    ctx->r11 = ADD32(ctx->r29, 0X34);
    // 0x803F0B80: sw          $t3, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r11;
    // 0x803F0B84: ori         $a3, $a3, 0x823F
    ctx->r7 = ctx->r7 | 0X823F;
    // 0x803F0B88: jal         0x8005743C
    // 0x803F0B8C: ori         $a2, $a2, 0xB824
    ctx->r6 = ctx->r6 | 0XB824;
    func_8005743C(rdram, ctx);
        goto after_19;
    // 0x803F0B8C: ori         $a2, $a2, 0xB824
    ctx->r6 = ctx->r6 | 0XB824;
    after_19:
    // 0x803F0B90: lhu         $t4, 0x2C($s0)
    ctx->r12 = MEM_HU(ctx->r16, 0X2C);
    // 0x803F0B94: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x803F0B98: andi        $t5, $t4, 0x1
    ctx->r13 = ctx->r12 & 0X1;
    // 0x803F0B9C: beq         $t5, $zero, L_803F0CA8
    if (ctx->r13 == 0) {
        // 0x803F0BA0: nop
    
            goto L_803F0CA8;
    }
    // 0x803F0BA0: nop

    // 0x803F0BA4: lhu         $t6, 0x14($s0)
    ctx->r14 = MEM_HU(ctx->r16, 0X14);
    // 0x803F0BA8: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    // 0x803F0BAC: andi        $t7, $t6, 0x200
    ctx->r15 = ctx->r14 & 0X200;
    // 0x803F0BB0: bne         $t7, $zero, L_803F0CA8
    if (ctx->r15 != 0) {
        // 0x803F0BB4: nop
    
            goto L_803F0CA8;
    }
    // 0x803F0BB4: nop

    // 0x803F0BB8: lw          $t8, 0xC8($s0)
    ctx->r24 = MEM_W(ctx->r16, 0XC8);
    // 0x803F0BBC: lui         $v0, 0x8009
    ctx->r2 = S32(0X8009 << 16);
    // 0x803F0BC0: lhu         $t9, 0x8($t8)
    ctx->r25 = MEM_HU(ctx->r24, 0X8);
    // 0x803F0BC4: addiu       $t2, $sp, 0x9C
    ctx->r10 = ADD32(ctx->r29, 0X9C);
    // 0x803F0BC8: andi        $t1, $t9, 0x1
    ctx->r9 = ctx->r25 & 0X1;
    // 0x803F0BCC: beq         $t1, $zero, L_803F0BDC
    if (ctx->r9 == 0) {
        // 0x803F0BD0: addiu       $v1, $zero, -0x1A4
        ctx->r3 = ADD32(0, -0X1A4);
            goto L_803F0BDC;
    }
    // 0x803F0BD0: addiu       $v1, $zero, -0x1A4
    ctx->r3 = ADD32(0, -0X1A4);
    // 0x803F0BD4: b           L_803F0BDC
    // 0x803F0BD8: addiu       $v1, $zero, 0x1A4
    ctx->r3 = ADD32(0, 0X1A4);
        goto L_803F0BDC;
    // 0x803F0BD8: addiu       $v1, $zero, 0x1A4
    ctx->r3 = ADD32(0, 0X1A4);
L_803F0BDC:
    // 0x803F0BDC: mtc1        $v1, $f4
    ctx->f4.u32l = ctx->r3;
    // 0x803F0BE0: lw          $v0, 0x3B20($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X3B20);
    // 0x803F0BE4: cvt.s.w     $f4, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    ctx->f4.fl = CVT_S_W(ctx->f4.u32l);
    // 0x803F0BE8: lwc1        $f12, 0x8($v0)
    ctx->f12.u32l = MEM_W(ctx->r2, 0X8);
    // 0x803F0BEC: lwc1        $f14, 0x0($v0)
    ctx->f14.u32l = MEM_W(ctx->r2, 0X0);
    // 0x803F0BF0: mfc1        $a2, $f4
    ctx->r6 = (int32_t)ctx->f4.u32l;
    // 0x803F0BF4: jal         0x80272B1C
    // 0x803F0BF8: sw          $t2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r10;
    LOOKUP_FUNC(0x80272B1C)(rdram, ctx);
        goto after_20;
    // 0x803F0BF8: sw          $t2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r10;
    after_20:
    // 0x803F0BFC: lwc1        $f18, 0x9C($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X9C);
    // 0x803F0C00: lui         $t0, 0x803F
    ctx->r8 = S32(0X803F << 16);
    // 0x803F0C04: addiu       $t0, $t0, 0x7E00
    ctx->r8 = ADD32(ctx->r8, 0X7E00);
    // 0x803F0C08: lwc1        $f12, 0xA0($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0XA0);
    // 0x803F0C0C: addiu       $a1, $zero, 0x13
    ctx->r5 = ADD32(0, 0X13);
    // 0x803F0C10: addiu       $a2, $sp, 0x34
    ctx->r6 = ADD32(ctx->r29, 0X34);
    // 0x803F0C14: addiu       $a3, $sp, 0x80
    ctx->r7 = ADD32(ctx->r29, 0X80);
    // 0x803F0C18: jal         0x803F0000
    // 0x803F0C1C: swc1        $f18, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->f18.u32l;
    ovl_803F0000_menu_func_803F0000(rdram, ctx);
        goto after_21;
    // 0x803F0C1C: swc1        $f18, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->f18.u32l;
    after_21:
    // 0x803F0C20: lw          $t3, 0xC8($s0)
    ctx->r11 = MEM_W(ctx->r16, 0XC8);
    // 0x803F0C24: lui         $at, 0x803F
    ctx->r1 = S32(0X803F << 16);
    // 0x803F0C28: sh          $v0, 0x960($t3)
    MEM_H(0X960, ctx->r11) = ctx->r2;
    // 0x803F0C2C: lw          $v1, 0xC8($s0)
    ctx->r3 = MEM_W(ctx->r16, 0XC8);
    // 0x803F0C30: nop

    // 0x803F0C34: lhu         $t4, 0x8($v1)
    ctx->r12 = MEM_HU(ctx->r3, 0X8);
    // 0x803F0C38: nop

    // 0x803F0C3C: andi        $t5, $t4, 0x1
    ctx->r13 = ctx->r12 & 0X1;
    // 0x803F0C40: beq         $t5, $zero, L_803F0C60
    if (ctx->r13 == 0) {
        // 0x803F0C44: nop
    
            goto L_803F0C60;
    }
    // 0x803F0C44: nop

    // 0x803F0C48: mtc1        $zero, $f7
    ctx->f_odd[(7 - 1) * 2] = 0;
    // 0x803F0C4C: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x803F0C50: nop

    // 0x803F0C54: cvt.s.d     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.d); 
    ctx->f8.fl = CVT_S_D(ctx->f6.d);
    // 0x803F0C58: b           L_803F0C74
    // 0x803F0C5C: swc1        $f8, 0x970($v1)
    MEM_W(0X970, ctx->r3) = ctx->f8.u32l;
        goto L_803F0C74;
    // 0x803F0C5C: swc1        $f8, 0x970($v1)
    MEM_W(0X970, ctx->r3) = ctx->f8.u32l;
L_803F0C60:
    // 0x803F0C60: lwc1        $f11, 0x7BD8($at)
    ctx->f_odd[(11 - 1) * 2] = MEM_W(ctx->r1, 0X7BD8);
    // 0x803F0C64: lwc1        $f10, 0x7BDC($at)
    ctx->f10.u32l = MEM_W(ctx->r1, 0X7BDC);
    // 0x803F0C68: nop

    // 0x803F0C6C: cvt.s.d     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f16.fl = CVT_S_D(ctx->f10.d);
    // 0x803F0C70: swc1        $f16, 0x970($v1)
    MEM_W(0X970, ctx->r3) = ctx->f16.u32l;
L_803F0C74:
    // 0x803F0C74: jal         0x80059898
    // 0x803F0C78: addiu       $a0, $zero, 0xF
    ctx->r4 = ADD32(0, 0XF);
    func_80059898(rdram, ctx);
        goto after_22;
    // 0x803F0C78: addiu       $a0, $zero, 0xF
    ctx->r4 = ADD32(0, 0XF);
    after_22:
    // 0x803F0C7C: lw          $t7, 0xC8($s0)
    ctx->r15 = MEM_W(ctx->r16, 0XC8);
    // 0x803F0C80: addiu       $t6, $v0, 0x14
    ctx->r14 = ADD32(ctx->r2, 0X14);
    // 0x803F0C84: sh          $t6, 0x962($t7)
    MEM_H(0X962, ctx->r15) = ctx->r14;
    // 0x803F0C88: lw          $v1, 0xC8($s0)
    ctx->r3 = MEM_W(ctx->r16, 0XC8);
    // 0x803F0C8C: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
    // 0x803F0C90: lhu         $t8, 0x95C($v1)
    ctx->r24 = MEM_HU(ctx->r3, 0X95C);
    // 0x803F0C94: nop

    // 0x803F0C98: ori         $t9, $t8, 0x1
    ctx->r25 = ctx->r24 | 0X1;
    // 0x803F0C9C: sh          $t9, 0x95C($v1)
    MEM_H(0X95C, ctx->r3) = ctx->r25;
    // 0x803F0CA0: b           L_803F0EC0
    // 0x803F0CA4: sh          $t1, 0x36($s0)
    MEM_H(0X36, ctx->r16) = ctx->r9;
        goto L_803F0EC0;
    // 0x803F0CA4: sh          $t1, 0x36($s0)
    MEM_H(0X36, ctx->r16) = ctx->r9;
L_803F0CA8:
    // 0x803F0CA8: lw          $v1, 0xC8($s0)
    ctx->r3 = MEM_W(ctx->r16, 0XC8);
    // 0x803F0CAC: lui         $t8, 0x800B
    ctx->r24 = S32(0X800B << 16);
    // 0x803F0CB0: lbu         $t2, 0x0($v1)
    ctx->r10 = MEM_BU(ctx->r3, 0X0);
    // 0x803F0CB4: lbu         $t4, 0x3($v1)
    ctx->r12 = MEM_BU(ctx->r3, 0X3);
    // 0x803F0CB8: sll         $t3, $t2, 2
    ctx->r11 = S32(ctx->r10 << 2);
    // 0x803F0CBC: subu        $t3, $t3, $t2
    ctx->r11 = SUB32(ctx->r11, ctx->r10);
    // 0x803F0CC0: sll         $t3, $t3, 1
    ctx->r11 = S32(ctx->r11 << 1);
    // 0x803F0CC4: sll         $t5, $t4, 1
    ctx->r13 = S32(ctx->r12 << 1);
    // 0x803F0CC8: addu        $t6, $t3, $t5
    ctx->r14 = ADD32(ctx->r11, ctx->r13);
    // 0x803F0CCC: addu        $v0, $v0, $t6
    ctx->r2 = ADD32(ctx->r2, ctx->r14);
    // 0x803F0CD0: lhu         $v0, -0x3330($v0)
    ctx->r2 = MEM_HU(ctx->r2, -0X3330);
    // 0x803F0CD4: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
    // 0x803F0CD8: sll         $t7, $v0, 2
    ctx->r15 = S32(ctx->r2 << 2);
    // 0x803F0CDC: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x803F0CE0: lw          $t8, -0x315C($t8)
    ctx->r24 = MEM_W(ctx->r24, -0X315C);
    // 0x803F0CE4: jal         0x80059898
    // 0x803F0CE8: sw          $t8, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r24;
    func_80059898(rdram, ctx);
        goto after_23;
    // 0x803F0CE8: sw          $t8, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r24;
    after_23:
    // 0x803F0CEC: lw          $t1, 0x30($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X30);
    // 0x803F0CF0: sll         $t9, $v0, 2
    ctx->r25 = S32(ctx->r2 << 2);
    // 0x803F0CF4: subu        $t9, $t9, $v0
    ctx->r25 = SUB32(ctx->r25, ctx->r2);
    // 0x803F0CF8: addiu       $a1, $sp, 0x94
    ctx->r5 = ADD32(ctx->r29, 0X94);
    // 0x803F0CFC: jal         0x803F04A8
    // 0x803F0D00: addu        $a0, $t9, $t1
    ctx->r4 = ADD32(ctx->r25, ctx->r9);
    ovl_803F0000_menu_func_803F04A8(rdram, ctx);
        goto after_24;
    // 0x803F0D00: addu        $a0, $t9, $t1
    ctx->r4 = ADD32(ctx->r25, ctx->r9);
    after_24:
    // 0x803F0D04: lui         $v0, 0x8009
    ctx->r2 = S32(0X8009 << 16);
    // 0x803F0D08: lw          $v0, 0x3B20($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X3B20);
    // 0x803F0D0C: lw          $a2, 0x94($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X94);
    // 0x803F0D10: lw          $a3, 0x98($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X98);
    // 0x803F0D14: addiu       $t2, $sp, 0x9C
    ctx->r10 = ADD32(ctx->r29, 0X9C);
    // 0x803F0D18: lwc1        $f12, 0x8($v0)
    ctx->f12.u32l = MEM_W(ctx->r2, 0X8);
    // 0x803F0D1C: lwc1        $f14, 0x0($v0)
    ctx->f14.u32l = MEM_W(ctx->r2, 0X0);
    // 0x803F0D20: jal         0x80272B1C
    // 0x803F0D24: sw          $t2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r10;
    LOOKUP_FUNC(0x80272B1C)(rdram, ctx);
        goto after_25;
    // 0x803F0D24: sw          $t2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r10;
    after_25:
    // 0x803F0D28: lwc1        $f4, 0x9C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X9C);
    // 0x803F0D2C: lui         $t0, 0x803F
    ctx->r8 = S32(0X803F << 16);
    // 0x803F0D30: addiu       $t0, $t0, 0x7E00
    ctx->r8 = ADD32(ctx->r8, 0X7E00);
    // 0x803F0D34: lwc1        $f12, 0xA0($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0XA0);
    // 0x803F0D38: addiu       $a1, $zero, 0x13
    ctx->r5 = ADD32(0, 0X13);
    // 0x803F0D3C: addiu       $a2, $sp, 0x34
    ctx->r6 = ADD32(ctx->r29, 0X34);
    // 0x803F0D40: addiu       $a3, $sp, 0x80
    ctx->r7 = ADD32(ctx->r29, 0X80);
    // 0x803F0D44: jal         0x803F0000
    // 0x803F0D48: swc1        $f4, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->f4.u32l;
    ovl_803F0000_menu_func_803F0000(rdram, ctx);
        goto after_26;
    // 0x803F0D48: swc1        $f4, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->f4.u32l;
    after_26:
    // 0x803F0D4C: lw          $t4, 0xC8($s0)
    ctx->r12 = MEM_W(ctx->r16, 0XC8);
    // 0x803F0D50: addiu       $t3, $zero, 0x1
    ctx->r11 = ADD32(0, 0X1);
    // 0x803F0D54: sh          $v0, 0x960($t4)
    MEM_H(0X960, ctx->r12) = ctx->r2;
    // 0x803F0D58: lhu         $t5, 0x2C($s0)
    ctx->r13 = MEM_HU(ctx->r16, 0X2C);
    // 0x803F0D5C: sh          $t3, 0x36($s0)
    MEM_H(0X36, ctx->r16) = ctx->r11;
    // 0x803F0D60: andi        $t6, $t5, 0x2
    ctx->r14 = ctx->r13 & 0X2;
    // 0x803F0D64: beq         $t6, $zero, L_803F0EC0
    if (ctx->r14 == 0) {
        // 0x803F0D68: nop
    
            goto L_803F0EC0;
    }
    // 0x803F0D68: nop

    // 0x803F0D6C: lw          $v1, 0xC8($s0)
    ctx->r3 = MEM_W(ctx->r16, 0XC8);
    // 0x803F0D70: addiu       $a0, $zero, 0x5
    ctx->r4 = ADD32(0, 0X5);
    // 0x803F0D74: lhu         $t7, 0x95C($v1)
    ctx->r15 = MEM_HU(ctx->r3, 0X95C);
    // 0x803F0D78: nop

    // 0x803F0D7C: ori         $t8, $t7, 0x1
    ctx->r24 = ctx->r15 | 0X1;
    // 0x803F0D80: jal         0x80059898
    // 0x803F0D84: sh          $t8, 0x95C($v1)
    MEM_H(0X95C, ctx->r3) = ctx->r24;
    func_80059898(rdram, ctx);
        goto after_27;
    // 0x803F0D84: sh          $t8, 0x95C($v1)
    MEM_H(0X95C, ctx->r3) = ctx->r24;
    after_27:
    // 0x803F0D88: lw          $t1, 0xC8($s0)
    ctx->r9 = MEM_W(ctx->r16, 0XC8);
    // 0x803F0D8C: addiu       $t9, $v0, 0xA
    ctx->r25 = ADD32(ctx->r2, 0XA);
    // 0x803F0D90: sh          $t9, 0x962($t1)
    MEM_H(0X962, ctx->r9) = ctx->r25;
    // 0x803F0D94: lhu         $t2, 0x14($s0)
    ctx->r10 = MEM_HU(ctx->r16, 0X14);
    // 0x803F0D98: lui         $t0, 0x803F
    ctx->r8 = S32(0X803F << 16);
    // 0x803F0D9C: andi        $t4, $t2, 0x200
    ctx->r12 = ctx->r10 & 0X200;
    // 0x803F0DA0: beq         $t4, $zero, L_803F0DF4
    if (ctx->r12 == 0) {
        // 0x803F0DA4: addiu       $t0, $t0, 0x7E00
        ctx->r8 = ADD32(ctx->r8, 0X7E00);
            goto L_803F0DF4;
    }
    // 0x803F0DA4: addiu       $t0, $t0, 0x7E00
    ctx->r8 = ADD32(ctx->r8, 0X7E00);
    // 0x803F0DA8: lw          $v1, 0xC8($s0)
    ctx->r3 = MEM_W(ctx->r16, 0XC8);
    // 0x803F0DAC: lui         $at, 0x803F
    ctx->r1 = S32(0X803F << 16);
    // 0x803F0DB0: lhu         $t3, 0x8($v1)
    ctx->r11 = MEM_HU(ctx->r3, 0X8);
    // 0x803F0DB4: nop

    // 0x803F0DB8: andi        $t5, $t3, 0x1
    ctx->r13 = ctx->r11 & 0X1;
    // 0x803F0DBC: beq         $t5, $zero, L_803F0DDC
    if (ctx->r13 == 0) {
        // 0x803F0DC0: nop
    
            goto L_803F0DDC;
    }
    // 0x803F0DC0: nop

    // 0x803F0DC4: lwc1        $f19, 0x7BE0($at)
    ctx->f_odd[(19 - 1) * 2] = MEM_W(ctx->r1, 0X7BE0);
    // 0x803F0DC8: lwc1        $f18, 0x7BE4($at)
    ctx->f18.u32l = MEM_W(ctx->r1, 0X7BE4);
    // 0x803F0DCC: nop

    // 0x803F0DD0: cvt.s.d     $f6, $f18
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.d); 
    ctx->f6.fl = CVT_S_D(ctx->f18.d);
    // 0x803F0DD4: b           L_803F0E3C
    // 0x803F0DD8: swc1        $f6, 0x970($v1)
    MEM_W(0X970, ctx->r3) = ctx->f6.u32l;
        goto L_803F0E3C;
    // 0x803F0DD8: swc1        $f6, 0x970($v1)
    MEM_W(0X970, ctx->r3) = ctx->f6.u32l;
L_803F0DDC:
    // 0x803F0DDC: mtc1        $zero, $f9
    ctx->f_odd[(9 - 1) * 2] = 0;
    // 0x803F0DE0: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x803F0DE4: nop

    // 0x803F0DE8: cvt.s.d     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.d); 
    ctx->f10.fl = CVT_S_D(ctx->f8.d);
    // 0x803F0DEC: b           L_803F0E3C
    // 0x803F0DF0: swc1        $f10, 0x970($v1)
    MEM_W(0X970, ctx->r3) = ctx->f10.u32l;
        goto L_803F0E3C;
    // 0x803F0DF0: swc1        $f10, 0x970($v1)
    MEM_W(0X970, ctx->r3) = ctx->f10.u32l;
L_803F0DF4:
    // 0x803F0DF4: lw          $v1, 0xC8($s0)
    ctx->r3 = MEM_W(ctx->r16, 0XC8);
    // 0x803F0DF8: lui         $at, 0x803F
    ctx->r1 = S32(0X803F << 16);
    // 0x803F0DFC: lhu         $t6, 0x8($v1)
    ctx->r14 = MEM_HU(ctx->r3, 0X8);
    // 0x803F0E00: nop

    // 0x803F0E04: andi        $t7, $t6, 0x1
    ctx->r15 = ctx->r14 & 0X1;
    // 0x803F0E08: beq         $t7, $zero, L_803F0E28
    if (ctx->r15 == 0) {
        // 0x803F0E0C: nop
    
            goto L_803F0E28;
    }
    // 0x803F0E0C: nop

    // 0x803F0E10: mtc1        $zero, $f17
    ctx->f_odd[(17 - 1) * 2] = 0;
    // 0x803F0E14: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x803F0E18: nop

    // 0x803F0E1C: cvt.s.d     $f4, $f16
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.d); 
    ctx->f4.fl = CVT_S_D(ctx->f16.d);
    // 0x803F0E20: b           L_803F0E3C
    // 0x803F0E24: swc1        $f4, 0x970($v1)
    MEM_W(0X970, ctx->r3) = ctx->f4.u32l;
        goto L_803F0E3C;
    // 0x803F0E24: swc1        $f4, 0x970($v1)
    MEM_W(0X970, ctx->r3) = ctx->f4.u32l;
L_803F0E28:
    // 0x803F0E28: lwc1        $f19, 0x7BE8($at)
    ctx->f_odd[(19 - 1) * 2] = MEM_W(ctx->r1, 0X7BE8);
    // 0x803F0E2C: lwc1        $f18, 0x7BEC($at)
    ctx->f18.u32l = MEM_W(ctx->r1, 0X7BEC);
    // 0x803F0E30: nop

    // 0x803F0E34: cvt.s.d     $f6, $f18
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.d); 
    ctx->f6.fl = CVT_S_D(ctx->f18.d);
    // 0x803F0E38: swc1        $f6, 0x970($v1)
    MEM_W(0X970, ctx->r3) = ctx->f6.u32l;
L_803F0E3C:
    // 0x803F0E3C: lw          $t8, 0xC8($s0)
    ctx->r24 = MEM_W(ctx->r16, 0XC8);
    // 0x803F0E40: lwc1        $f12, 0x0($t0)
    ctx->f12.u32l = MEM_W(ctx->r8, 0X0);
    // 0x803F0E44: lwc1        $f14, 0x970($t8)
    ctx->f14.u32l = MEM_W(ctx->r24, 0X970);
    // 0x803F0E48: jal         0x8027924C
    // 0x803F0E4C: nop

    LOOKUP_FUNC(0x8027924C)(rdram, ctx);
        goto after_28;
    // 0x803F0E4C: nop

    after_28:
    // 0x803F0E50: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x803F0E54: lui         $t0, 0x803F
    ctx->r8 = S32(0X803F << 16);
    // 0x803F0E58: c.lt.s      $f8, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f8.fl < ctx->f0.fl;
    // 0x803F0E5C: addiu       $t0, $t0, 0x7E00
    ctx->r8 = ADD32(ctx->r8, 0X7E00);
    // 0x803F0E60: bc1f        L_803F0E8C
    if (!c1cs) {
        // 0x803F0E64: lui         $at, 0x803F
        ctx->r1 = S32(0X803F << 16);
            goto L_803F0E8C;
    }
    // 0x803F0E64: lui         $at, 0x803F
    ctx->r1 = S32(0X803F << 16);
    // 0x803F0E68: lui         $at, 0x803F
    ctx->r1 = S32(0X803F << 16);
    // 0x803F0E6C: lwc1        $f10, 0x0($t0)
    ctx->f10.u32l = MEM_W(ctx->r8, 0X0);
    // 0x803F0E70: lwc1        $f5, 0x7BF0($at)
    ctx->f_odd[(5 - 1) * 2] = MEM_W(ctx->r1, 0X7BF0);
    // 0x803F0E74: lwc1        $f4, 0x7BF4($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X7BF4);
    // 0x803F0E78: cvt.d.s     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.fl); 
    ctx->f16.d = CVT_D_S(ctx->f10.fl);
    // 0x803F0E7C: sub.d       $f18, $f16, $f4
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f16.d); NAN_CHECK(ctx->f4.d); 
    ctx->f18.d = ctx->f16.d - ctx->f4.d;
    // 0x803F0E80: cvt.s.d     $f6, $f18
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.d); 
    ctx->f6.fl = CVT_S_D(ctx->f18.d);
    // 0x803F0E84: b           L_803F0EA8
    // 0x803F0E88: swc1        $f6, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->f6.u32l;
        goto L_803F0EA8;
    // 0x803F0E88: swc1        $f6, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->f6.u32l;
L_803F0E8C:
    // 0x803F0E8C: lwc1        $f8, 0x0($t0)
    ctx->f8.u32l = MEM_W(ctx->r8, 0X0);
    // 0x803F0E90: lwc1        $f17, 0x7BF8($at)
    ctx->f_odd[(17 - 1) * 2] = MEM_W(ctx->r1, 0X7BF8);
    // 0x803F0E94: lwc1        $f16, 0x7BFC($at)
    ctx->f16.u32l = MEM_W(ctx->r1, 0X7BFC);
    // 0x803F0E98: cvt.d.s     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f10.d = CVT_D_S(ctx->f8.fl);
    // 0x803F0E9C: add.d       $f4, $f10, $f16
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f16.d); 
    ctx->f4.d = ctx->f10.d + ctx->f16.d;
    // 0x803F0EA0: cvt.s.d     $f18, $f4
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.d); 
    ctx->f18.fl = CVT_S_D(ctx->f4.d);
    // 0x803F0EA4: swc1        $f18, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->f18.u32l;
L_803F0EA8:
    // 0x803F0EA8: lw          $v1, 0xC8($s0)
    ctx->r3 = MEM_W(ctx->r16, 0XC8);
    // 0x803F0EAC: nop

    // 0x803F0EB0: lh          $t9, 0x960($v1)
    ctx->r25 = MEM_H(ctx->r3, 0X960);
    // 0x803F0EB4: nop

    // 0x803F0EB8: addiu       $t1, $t9, 0x2
    ctx->r9 = ADD32(ctx->r25, 0X2);
    // 0x803F0EBC: sh          $t1, 0x960($v1)
    MEM_H(0X960, ctx->r3) = ctx->r9;
L_803F0EC0:
    // 0x803F0EC0: lw          $v1, 0xC8($s0)
    ctx->r3 = MEM_W(ctx->r16, 0XC8);
    // 0x803F0EC4: addiu       $t4, $zero, 0x13
    ctx->r12 = ADD32(0, 0X13);
    // 0x803F0EC8: lh          $t2, 0x960($v1)
    ctx->r10 = MEM_H(ctx->r3, 0X960);
    // 0x803F0ECC: nop

    // 0x803F0ED0: slti        $at, $t2, 0x14
    ctx->r1 = SIGNED(ctx->r10) < 0X14 ? 1 : 0;
    // 0x803F0ED4: bne         $at, $zero, L_803F0EE4
    if (ctx->r1 != 0) {
        // 0x803F0ED8: lw          $ra, 0x24($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X24);
            goto L_803F0EE4;
    }
    // 0x803F0ED8: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x803F0EDC: sh          $t4, 0x960($v1)
    MEM_H(0X960, ctx->r3) = ctx->r12;
    // 0x803F0EE0: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_803F0EE4:
    // 0x803F0EE4: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x803F0EE8: jr          $ra
    // 0x803F0EEC: addiu       $sp, $sp, 0xA8
    ctx->r29 = ADD32(ctx->r29, 0XA8);
    return;
    // 0x803F0EEC: addiu       $sp, $sp, 0xA8
    ctx->r29 = ADD32(ctx->r29, 0XA8);
;}
RECOMP_FUNC void ovl_803F0000_menu_func_803F0E54(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803F0E54: lui         $t0, 0x803F
    ctx->r8 = S32(0X803F << 16);
    // 0x803F0E58: c.lt.s      $f8, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f8.fl < ctx->f0.fl;
    // 0x803F0E5C: addiu       $t0, $t0, 0x7E00
    ctx->r8 = ADD32(ctx->r8, 0X7E00);
    // 0x803F0E60: bc1f        L_803F0E8C
    if (!c1cs) {
        // 0x803F0E64: lui         $at, 0x803F
        ctx->r1 = S32(0X803F << 16);
            goto L_803F0E8C;
    }
    // 0x803F0E64: lui         $at, 0x803F
    ctx->r1 = S32(0X803F << 16);
    // 0x803F0E68: lui         $at, 0x803F
    ctx->r1 = S32(0X803F << 16);
    // 0x803F0E6C: lwc1        $f10, 0x0($t0)
    ctx->f10.u32l = MEM_W(ctx->r8, 0X0);
    // 0x803F0E70: lwc1        $f5, 0x7BF0($at)
    ctx->f_odd[(5 - 1) * 2] = MEM_W(ctx->r1, 0X7BF0);
    // 0x803F0E74: lwc1        $f4, 0x7BF4($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X7BF4);
    // 0x803F0E78: cvt.d.s     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.fl); 
    ctx->f16.d = CVT_D_S(ctx->f10.fl);
    // 0x803F0E7C: sub.d       $f18, $f16, $f4
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f16.d); NAN_CHECK(ctx->f4.d); 
    ctx->f18.d = ctx->f16.d - ctx->f4.d;
    // 0x803F0E80: cvt.s.d     $f6, $f18
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.d); 
    ctx->f6.fl = CVT_S_D(ctx->f18.d);
    // 0x803F0E84: b           L_803F0EA8
    // 0x803F0E88: swc1        $f6, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->f6.u32l;
        goto L_803F0EA8;
    // 0x803F0E88: swc1        $f6, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->f6.u32l;
L_803F0E8C:
    // 0x803F0E8C: lwc1        $f8, 0x0($t0)
    ctx->f8.u32l = MEM_W(ctx->r8, 0X0);
    // 0x803F0E90: lwc1        $f17, 0x7BF8($at)
    ctx->f_odd[(17 - 1) * 2] = MEM_W(ctx->r1, 0X7BF8);
    // 0x803F0E94: lwc1        $f16, 0x7BFC($at)
    ctx->f16.u32l = MEM_W(ctx->r1, 0X7BFC);
    // 0x803F0E98: cvt.d.s     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f10.d = CVT_D_S(ctx->f8.fl);
    // 0x803F0E9C: add.d       $f4, $f10, $f16
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f16.d); 
    ctx->f4.d = ctx->f10.d + ctx->f16.d;
    // 0x803F0EA0: cvt.s.d     $f18, $f4
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.d); 
    ctx->f18.fl = CVT_S_D(ctx->f4.d);
    // 0x803F0EA4: swc1        $f18, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->f18.u32l;
L_803F0EA8:
    // 0x803F0EA8: lw          $v1, 0xC8($s0)
    ctx->r3 = MEM_W(ctx->r16, 0XC8);
    // 0x803F0EAC: nop

    // 0x803F0EB0: lh          $t9, 0x960($v1)
    ctx->r25 = MEM_H(ctx->r3, 0X960);
    // 0x803F0EB4: nop

    // 0x803F0EB8: addiu       $t1, $t9, 0x2
    ctx->r9 = ADD32(ctx->r25, 0X2);
    // 0x803F0EBC: sh          $t1, 0x960($v1)
    MEM_H(0X960, ctx->r3) = ctx->r9;
    // 0x803F0EC0: lw          $v1, 0xC8($s0)
    ctx->r3 = MEM_W(ctx->r16, 0XC8);
    // 0x803F0EC4: addiu       $t4, $zero, 0x13
    ctx->r12 = ADD32(0, 0X13);
    // 0x803F0EC8: lh          $t2, 0x960($v1)
    ctx->r10 = MEM_H(ctx->r3, 0X960);
    // 0x803F0ECC: nop

    // 0x803F0ED0: slti        $at, $t2, 0x14
    ctx->r1 = SIGNED(ctx->r10) < 0X14 ? 1 : 0;
    // 0x803F0ED4: bne         $at, $zero, L_803F0EE4
    if (ctx->r1 != 0) {
        // 0x803F0ED8: lw          $ra, 0x24($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X24);
            goto L_803F0EE4;
    }
    // 0x803F0ED8: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x803F0EDC: sh          $t4, 0x960($v1)
    MEM_H(0X960, ctx->r3) = ctx->r12;
    // 0x803F0EE0: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_803F0EE4:
    // 0x803F0EE4: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x803F0EE8: jr          $ra
    // 0x803F0EEC: addiu       $sp, $sp, 0xA8
    ctx->r29 = ADD32(ctx->r29, 0XA8);
    return;
    // 0x803F0EEC: addiu       $sp, $sp, 0xA8
    ctx->r29 = ADD32(ctx->r29, 0XA8);
;}
RECOMP_FUNC void ovl_803F0000_menu_func_803F0EF0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803F0EF0: addiu       $sp, $sp, -0x80
    ctx->r29 = ADD32(ctx->r29, -0X80);
    // 0x803F0EF4: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x803F0EF8: sw          $s6, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r22;
    // 0x803F0EFC: sw          $s5, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r21;
    // 0x803F0F00: sw          $s4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r20;
    // 0x803F0F04: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x803F0F08: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x803F0F0C: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x803F0F10: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x803F0F14: lw          $v0, 0xC8($a0)
    ctx->r2 = MEM_W(ctx->r4, 0XC8);
    // 0x803F0F18: or          $s5, $a0, $zero
    ctx->r21 = ctx->r4 | 0;
    // 0x803F0F1C: lhu         $t6, 0x8($v0)
    ctx->r14 = MEM_HU(ctx->r2, 0X8);
    // 0x803F0F20: lw          $s0, 0x18($v0)
    ctx->r16 = MEM_W(ctx->r2, 0X18);
    // 0x803F0F24: andi        $t7, $t6, 0x1
    ctx->r15 = ctx->r14 & 0X1;
    // 0x803F0F28: beq         $t7, $zero, L_803F0F38
    if (ctx->r15 == 0) {
        // 0x803F0F2C: or          $s1, $zero, $zero
        ctx->r17 = 0 | 0;
            goto L_803F0F38;
    }
    // 0x803F0F2C: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    // 0x803F0F30: b           L_803F0F3C
    // 0x803F0F34: or          $s4, $zero, $zero
    ctx->r20 = 0 | 0;
        goto L_803F0F3C;
    // 0x803F0F34: or          $s4, $zero, $zero
    ctx->r20 = 0 | 0;
L_803F0F38:
    // 0x803F0F38: addiu       $s4, $zero, 0x1
    ctx->r20 = ADD32(0, 0X1);
L_803F0F3C:
    // 0x803F0F3C: or          $s2, $zero, $zero
    ctx->r18 = 0 | 0;
    // 0x803F0F40: addiu       $s6, $sp, 0x44
    ctx->r22 = ADD32(ctx->r29, 0X44);
    // 0x803F0F44: addiu       $s3, $zero, 0xB
    ctx->r19 = ADD32(0, 0XB);
L_803F0F48:
    // 0x803F0F48: lhu         $t8, 0xC($s0)
    ctx->r24 = MEM_HU(ctx->r16, 0XC);
    // 0x803F0F4C: nop

    // 0x803F0F50: beq         $t8, $zero, L_803F0F94
    if (ctx->r24 == 0) {
        // 0x803F0F54: nop
    
            goto L_803F0F94;
    }
    // 0x803F0F54: nop

    // 0x803F0F58: beq         $s5, $s0, L_803F0F94
    if (ctx->r21 == ctx->r16) {
        // 0x803F0F5C: nop
    
            goto L_803F0F94;
    }
    // 0x803F0F5C: nop

    // 0x803F0F60: lh          $t9, 0x2E($s0)
    ctx->r25 = MEM_H(ctx->r16, 0X2E);
    // 0x803F0F64: lh          $t0, 0x30($s0)
    ctx->r8 = MEM_H(ctx->r16, 0X30);
    // 0x803F0F68: mtc1        $t9, $f18
    ctx->f18.u32l = ctx->r25;
    // 0x803F0F6C: mtc1        $t0, $f16
    ctx->f16.u32l = ctx->r8;
    // 0x803F0F70: cvt.s.w     $f12, $f18
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 18);
    ctx->f12.fl = CVT_S_W(ctx->f18.u32l);
    // 0x803F0F74: or          $a2, $s4, $zero
    ctx->r6 = ctx->r20 | 0;
    // 0x803F0F78: jal         0x80271FD4
    // 0x803F0F7C: cvt.s.w     $f14, $f16
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 16);
    ctx->f14.fl = CVT_S_W(ctx->f16.u32l);
    LOOKUP_FUNC(0x80271FD4)(rdram, ctx);
        goto after_0;
    // 0x803F0F7C: cvt.s.w     $f14, $f16
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 16);
    ctx->f14.fl = CVT_S_W(ctx->f16.u32l);
    after_0:
    // 0x803F0F80: bne         $v0, $zero, L_803F0F94
    if (ctx->r2 != 0) {
        // 0x803F0F84: sll         $t1, $s1, 2
        ctx->r9 = S32(ctx->r17 << 2);
            goto L_803F0F94;
    }
    // 0x803F0F84: sll         $t1, $s1, 2
    ctx->r9 = S32(ctx->r17 << 2);
    // 0x803F0F88: addu        $t2, $s6, $t1
    ctx->r10 = ADD32(ctx->r22, ctx->r9);
    // 0x803F0F8C: sw          $s0, 0x0($t2)
    MEM_W(0X0, ctx->r10) = ctx->r16;
    // 0x803F0F90: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
L_803F0F94:
    // 0x803F0F94: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
    // 0x803F0F98: bne         $s2, $s3, L_803F0F48
    if (ctx->r18 != ctx->r19) {
        // 0x803F0F9C: addiu       $s0, $s0, 0xF8
        ctx->r16 = ADD32(ctx->r16, 0XF8);
            goto L_803F0F48;
    }
    // 0x803F0F9C: addiu       $s0, $s0, 0xF8
    ctx->r16 = ADD32(ctx->r16, 0XF8);
    // 0x803F0FA0: beq         $s1, $zero, L_803F0FC8
    if (ctx->r17 == 0) {
        // 0x803F0FA4: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_803F0FC8;
    }
    // 0x803F0FA4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x803F0FA8: jal         0x80059898
    // 0x803F0FAC: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    func_80059898(rdram, ctx);
        goto after_1;
    // 0x803F0FAC: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_1:
    // 0x803F0FB0: sll         $t3, $v0, 2
    ctx->r11 = S32(ctx->r2 << 2);
    // 0x803F0FB4: addu        $t4, $s6, $t3
    ctx->r12 = ADD32(ctx->r22, ctx->r11);
    // 0x803F0FB8: lw          $v0, 0x0($t4)
    ctx->r2 = MEM_W(ctx->r12, 0X0);
    // 0x803F0FBC: b           L_803F0FCC
    // 0x803F0FC0: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
        goto L_803F0FCC;
    // 0x803F0FC0: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x803F0FC4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_803F0FC8:
    // 0x803F0FC8: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
L_803F0FCC:
    // 0x803F0FCC: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x803F0FD0: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x803F0FD4: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x803F0FD8: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x803F0FDC: lw          $s4, 0x28($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X28);
    // 0x803F0FE0: lw          $s5, 0x2C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X2C);
    // 0x803F0FE4: lw          $s6, 0x30($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X30);
    // 0x803F0FE8: jr          $ra
    // 0x803F0FEC: addiu       $sp, $sp, 0x80
    ctx->r29 = ADD32(ctx->r29, 0X80);
    return;
    // 0x803F0FEC: addiu       $sp, $sp, 0x80
    ctx->r29 = ADD32(ctx->r29, 0X80);
;}
RECOMP_FUNC void ovl_803F0000_menu_func_803F0FF0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803F0FF0: addiu       $sp, $sp, -0x58
    ctx->r29 = ADD32(ctx->r29, -0X58);
    // 0x803F0FF4: swc1        $f26, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f26.u32l;
    // 0x803F0FF8: lui         $at, 0x43AC
    ctx->r1 = S32(0X43AC << 16);
    // 0x803F0FFC: mtc1        $at, $f26
    ctx->f26.u32l = ctx->r1;
    // 0x803F1000: swc1        $f24, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f24.u32l;
    // 0x803F1004: lui         $at, 0x4270
    ctx->r1 = S32(0X4270 << 16);
    // 0x803F1008: sw          $ra, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r31;
    // 0x803F100C: sw          $s7, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r23;
    // 0x803F1010: sw          $s6, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r22;
    // 0x803F1014: sw          $s5, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r21;
    // 0x803F1018: sw          $s4, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r20;
    // 0x803F101C: sw          $s3, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r19;
    // 0x803F1020: sw          $s2, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r18;
    // 0x803F1024: sw          $s1, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r17;
    // 0x803F1028: sw          $s0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r16;
    // 0x803F102C: swc1        $f27, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f_odd[(27 - 1) * 2];
    // 0x803F1030: swc1        $f25, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f_odd[(25 - 1) * 2];
    // 0x803F1034: swc1        $f23, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f_odd[(23 - 1) * 2];
    // 0x803F1038: swc1        $f22, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f22.u32l;
    // 0x803F103C: swc1        $f21, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x803F1040: swc1        $f20, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f20.u32l;
    // 0x803F1044: mtc1        $at, $f24
    ctx->f24.u32l = ctx->r1;
    // 0x803F1048: lw          $v0, 0xC8($a0)
    ctx->r2 = MEM_W(ctx->r4, 0XC8);
    // 0x803F104C: lui         $at, 0x4316
    ctx->r1 = S32(0X4316 << 16);
    // 0x803F1050: mtc1        $at, $f22
    ctx->f22.u32l = ctx->r1;
    // 0x803F1054: lh          $s5, 0x8CA($v0)
    ctx->r21 = MEM_H(ctx->r2, 0X8CA);
    // 0x803F1058: lui         $at, 0x4220
    ctx->r1 = S32(0X4220 << 16);
    // 0x803F105C: mtc1        $at, $f20
    ctx->f20.u32l = ctx->r1;
    // 0x803F1060: lw          $s4, 0x18($v0)
    ctx->r20 = MEM_W(ctx->r2, 0X18);
    // 0x803F1064: or          $s3, $a0, $zero
    ctx->r19 = ctx->r4 | 0;
    // 0x803F1068: or          $s2, $zero, $zero
    ctx->r18 = 0 | 0;
    // 0x803F106C: addiu       $s6, $zero, 0xF8
    ctx->r22 = ADD32(0, 0XF8);
    // 0x803F1070: addiu       $s7, $zero, 0xB
    ctx->r23 = ADD32(0, 0XB);
    // 0x803F1074: addiu       $s1, $v0, 0x318
    ctx->r17 = ADD32(ctx->r2, 0X318);
    // 0x803F1078: addiu       $s5, $s5, -0x64
    ctx->r21 = ADD32(ctx->r21, -0X64);
L_803F107C:
    // 0x803F107C: lhu         $t6, 0x0($s1)
    ctx->r14 = MEM_HU(ctx->r17, 0X0);
    // 0x803F1080: nop

    // 0x803F1084: multu       $t6, $s6
    result = U64(U32(ctx->r14)) * U64(U32(ctx->r22)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x803F1088: mflo        $t7
    ctx->r15 = lo;
    // 0x803F108C: addu        $s0, $t7, $s4
    ctx->r16 = ADD32(ctx->r15, ctx->r20);
    // 0x803F1090: beq         $s0, $s3, L_803F1158
    if (ctx->r16 == ctx->r19) {
        // 0x803F1094: nop
    
            goto L_803F1158;
    }
    // 0x803F1094: nop

    // 0x803F1098: lhu         $t8, 0xC($s0)
    ctx->r24 = MEM_HU(ctx->r16, 0XC);
    // 0x803F109C: nop

    // 0x803F10A0: beq         $t8, $zero, L_803F1158
    if (ctx->r24 == 0) {
        // 0x803F10A4: nop
    
            goto L_803F1158;
    }
    // 0x803F10A4: nop

    // 0x803F10A8: lw          $a1, 0x4C($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X4C);
    // 0x803F10AC: jal         0x8026AB68
    // 0x803F10B0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    LOOKUP_FUNC(0x8026AB68)(rdram, ctx);
        goto after_0;
    // 0x803F10B0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_0:
    // 0x803F10B4: cfc1        $t9, $FpcCsr
    ctx->r25 = get_cop1_cs();
    // 0x803F10B8: nop

    // 0x803F10BC: ori         $at, $t9, 0x3
    ctx->r1 = ctx->r25 | 0X3;
    // 0x803F10C0: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x803F10C4: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x803F10C8: nop

    // 0x803F10CC: cvt.w.s     $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    ctx->f4.u32l = CVT_W_S(ctx->f0.fl);
    // 0x803F10D0: mfc1        $v0, $f4
    ctx->r2 = (int32_t)ctx->f4.u32l;
    // 0x803F10D4: ctc1        $t9, $FpcCsr
    set_cop1_cs(ctx->r25);
    // 0x803F10D8: slt         $at, $s5, $v0
    ctx->r1 = SIGNED(ctx->r21) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x803F10DC: beq         $at, $zero, L_803F1158
    if (ctx->r1 == 0) {
        // 0x803F10E0: slti        $at, $v0, 0x158
        ctx->r1 = SIGNED(ctx->r2) < 0X158 ? 1 : 0;
            goto L_803F1158;
    }
    // 0x803F10E0: slti        $at, $v0, 0x158
    ctx->r1 = SIGNED(ctx->r2) < 0X158 ? 1 : 0;
    // 0x803F10E4: beq         $at, $zero, L_803F1158
    if (ctx->r1 == 0) {
        // 0x803F10E8: nop
    
            goto L_803F1158;
    }
    // 0x803F10E8: nop

    // 0x803F10EC: lwc1        $f0, 0x84($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X84);
    // 0x803F10F0: nop

    // 0x803F10F4: c.lt.s      $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f20.fl < ctx->f0.fl;
    // 0x803F10F8: nop

    // 0x803F10FC: bc1f        L_803F1158
    if (!c1cs) {
        // 0x803F1100: nop
    
            goto L_803F1158;
    }
    // 0x803F1100: nop

    // 0x803F1104: c.lt.s      $f0, $f22
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 22);
    c1cs = ctx->f0.fl < ctx->f22.fl;
    // 0x803F1108: nop

    // 0x803F110C: bc1f        L_803F1158
    if (!c1cs) {
        // 0x803F1110: nop
    
            goto L_803F1158;
    }
    // 0x803F1110: nop

    // 0x803F1114: lwc1        $f6, 0x4C($s3)
    ctx->f6.u32l = MEM_W(ctx->r19, 0X4C);
    // 0x803F1118: lwc1        $f8, 0x4C($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X4C);
    // 0x803F111C: jal         0x80272AEC
    // 0x803F1120: sub.s       $f12, $f6, $f8
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f12.fl = ctx->f6.fl - ctx->f8.fl;
    LOOKUP_FUNC(0x80272AEC)(rdram, ctx);
        goto after_1;
    // 0x803F1120: sub.s       $f12, $f6, $f8
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f12.fl = ctx->f6.fl - ctx->f8.fl;
    after_1:
    // 0x803F1124: c.lt.s      $f0, $f24
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 24);
    c1cs = ctx->f0.fl < ctx->f24.fl;
    // 0x803F1128: nop

    // 0x803F112C: bc1f        L_803F1158
    if (!c1cs) {
        // 0x803F1130: nop
    
            goto L_803F1158;
    }
    // 0x803F1130: nop

    // 0x803F1134: lwc1        $f12, 0x44($s0)
    ctx->f12.u32l = MEM_W(ctx->r16, 0X44);
    // 0x803F1138: jal         0x80272AEC
    // 0x803F113C: nop

    LOOKUP_FUNC(0x80272AEC)(rdram, ctx);
        goto after_2;
    // 0x803F113C: nop

    after_2:
    // 0x803F1140: c.lt.s      $f0, $f26
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 26);
    c1cs = ctx->f0.fl < ctx->f26.fl;
    // 0x803F1144: nop

    // 0x803F1148: bc1f        L_803F115C
    if (!c1cs) {
        // 0x803F114C: addiu       $s2, $s2, 0x1
        ctx->r18 = ADD32(ctx->r18, 0X1);
            goto L_803F115C;
    }
    // 0x803F114C: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
    // 0x803F1150: b           L_803F1168
    // 0x803F1154: or          $v0, $s0, $zero
    ctx->r2 = ctx->r16 | 0;
        goto L_803F1168;
    // 0x803F1154: or          $v0, $s0, $zero
    ctx->r2 = ctx->r16 | 0;
L_803F1158:
    // 0x803F1158: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
L_803F115C:
    // 0x803F115C: bne         $s2, $s7, L_803F107C
    if (ctx->r18 != ctx->r23) {
        // 0x803F1160: addiu       $s1, $s1, 0x8
        ctx->r17 = ADD32(ctx->r17, 0X8);
            goto L_803F107C;
    }
    // 0x803F1160: addiu       $s1, $s1, 0x8
    ctx->r17 = ADD32(ctx->r17, 0X8);
    // 0x803F1164: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_803F1168:
    // 0x803F1168: lw          $ra, 0x54($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X54);
    // 0x803F116C: lwc1        $f21, 0x10($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X10);
    // 0x803F1170: lwc1        $f20, 0x14($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X14);
    // 0x803F1174: lwc1        $f23, 0x18($sp)
    ctx->f_odd[(23 - 1) * 2] = MEM_W(ctx->r29, 0X18);
    // 0x803F1178: lwc1        $f22, 0x1C($sp)
    ctx->f22.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x803F117C: lwc1        $f25, 0x20($sp)
    ctx->f_odd[(25 - 1) * 2] = MEM_W(ctx->r29, 0X20);
    // 0x803F1180: lwc1        $f24, 0x24($sp)
    ctx->f24.u32l = MEM_W(ctx->r29, 0X24);
    // 0x803F1184: lwc1        $f27, 0x28($sp)
    ctx->f_odd[(27 - 1) * 2] = MEM_W(ctx->r29, 0X28);
    // 0x803F1188: lwc1        $f26, 0x2C($sp)
    ctx->f26.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x803F118C: lw          $s0, 0x34($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X34);
    // 0x803F1190: lw          $s1, 0x38($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X38);
    // 0x803F1194: lw          $s2, 0x3C($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X3C);
    // 0x803F1198: lw          $s3, 0x40($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X40);
    // 0x803F119C: lw          $s4, 0x44($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X44);
    // 0x803F11A0: lw          $s5, 0x48($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X48);
    // 0x803F11A4: lw          $s6, 0x4C($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X4C);
    // 0x803F11A8: lw          $s7, 0x50($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X50);
    // 0x803F11AC: jr          $ra
    // 0x803F11B0: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
    return;
    // 0x803F11B0: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
;}
RECOMP_FUNC void ovl_803F0000_menu_func_803F107C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
L_803F107C:
    // 0x803F107C: lhu         $t6, 0x0($s1)
    ctx->r14 = MEM_HU(ctx->r17, 0X0);
    // 0x803F1080: nop

    // 0x803F1084: multu       $t6, $s6
    result = U64(U32(ctx->r14)) * U64(U32(ctx->r22)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x803F1088: mflo        $t7
    ctx->r15 = lo;
    // 0x803F108C: addu        $s0, $t7, $s4
    ctx->r16 = ADD32(ctx->r15, ctx->r20);
    // 0x803F1090: beq         $s0, $s3, L_803F1158
    if (ctx->r16 == ctx->r19) {
        // 0x803F1094: nop
    
            goto L_803F1158;
    }
    // 0x803F1094: nop

    // 0x803F1098: lhu         $t8, 0xC($s0)
    ctx->r24 = MEM_HU(ctx->r16, 0XC);
    // 0x803F109C: nop

    // 0x803F10A0: beq         $t8, $zero, L_803F1158
    if (ctx->r24 == 0) {
        // 0x803F10A4: nop
    
            goto L_803F1158;
    }
    // 0x803F10A4: nop

    // 0x803F10A8: lw          $a1, 0x4C($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X4C);
    // 0x803F10AC: jal         0x8026AB68
    // 0x803F10B0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    LOOKUP_FUNC(0x8026AB68)(rdram, ctx);
        goto after_0;
    // 0x803F10B0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_0:
    // 0x803F10B4: cfc1        $t9, $FpcCsr
    ctx->r25 = get_cop1_cs();
    // 0x803F10B8: nop

    // 0x803F10BC: ori         $at, $t9, 0x3
    ctx->r1 = ctx->r25 | 0X3;
    // 0x803F10C0: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x803F10C4: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x803F10C8: nop

    // 0x803F10CC: cvt.w.s     $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    ctx->f4.u32l = CVT_W_S(ctx->f0.fl);
    // 0x803F10D0: mfc1        $v0, $f4
    ctx->r2 = (int32_t)ctx->f4.u32l;
    // 0x803F10D4: ctc1        $t9, $FpcCsr
    set_cop1_cs(ctx->r25);
    // 0x803F10D8: slt         $at, $s5, $v0
    ctx->r1 = SIGNED(ctx->r21) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x803F10DC: beq         $at, $zero, L_803F1158
    if (ctx->r1 == 0) {
        // 0x803F10E0: slti        $at, $v0, 0x158
        ctx->r1 = SIGNED(ctx->r2) < 0X158 ? 1 : 0;
            goto L_803F1158;
    }
    // 0x803F10E0: slti        $at, $v0, 0x158
    ctx->r1 = SIGNED(ctx->r2) < 0X158 ? 1 : 0;
    // 0x803F10E4: beq         $at, $zero, L_803F1158
    if (ctx->r1 == 0) {
        // 0x803F10E8: nop
    
            goto L_803F1158;
    }
    // 0x803F10E8: nop

    // 0x803F10EC: lwc1        $f0, 0x84($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X84);
    // 0x803F10F0: nop

    // 0x803F10F4: c.lt.s      $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f20.fl < ctx->f0.fl;
    // 0x803F10F8: nop

    // 0x803F10FC: bc1f        L_803F1158
    if (!c1cs) {
        // 0x803F1100: nop
    
            goto L_803F1158;
    }
    // 0x803F1100: nop

    // 0x803F1104: c.lt.s      $f0, $f22
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 22);
    c1cs = ctx->f0.fl < ctx->f22.fl;
    // 0x803F1108: nop

    // 0x803F110C: bc1f        L_803F1158
    if (!c1cs) {
        // 0x803F1110: nop
    
            goto L_803F1158;
    }
    // 0x803F1110: nop

    // 0x803F1114: lwc1        $f6, 0x4C($s3)
    ctx->f6.u32l = MEM_W(ctx->r19, 0X4C);
    // 0x803F1118: lwc1        $f8, 0x4C($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X4C);
    // 0x803F111C: jal         0x80272AEC
    // 0x803F1120: sub.s       $f12, $f6, $f8
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f12.fl = ctx->f6.fl - ctx->f8.fl;
    LOOKUP_FUNC(0x80272AEC)(rdram, ctx);
        goto after_1;
    // 0x803F1120: sub.s       $f12, $f6, $f8
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f12.fl = ctx->f6.fl - ctx->f8.fl;
    after_1:
    // 0x803F1124: c.lt.s      $f0, $f24
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 24);
    c1cs = ctx->f0.fl < ctx->f24.fl;
    // 0x803F1128: nop

    // 0x803F112C: bc1f        L_803F1158
    if (!c1cs) {
        // 0x803F1130: nop
    
            goto L_803F1158;
    }
    // 0x803F1130: nop

    // 0x803F1134: lwc1        $f12, 0x44($s0)
    ctx->f12.u32l = MEM_W(ctx->r16, 0X44);
    // 0x803F1138: jal         0x80272AEC
    // 0x803F113C: nop

    LOOKUP_FUNC(0x80272AEC)(rdram, ctx);
        goto after_2;
    // 0x803F113C: nop

    after_2:
    // 0x803F1140: c.lt.s      $f0, $f26
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 26);
    c1cs = ctx->f0.fl < ctx->f26.fl;
    // 0x803F1144: nop

    // 0x803F1148: bc1f        L_803F115C
    if (!c1cs) {
        // 0x803F114C: addiu       $s2, $s2, 0x1
        ctx->r18 = ADD32(ctx->r18, 0X1);
            goto L_803F115C;
    }
    // 0x803F114C: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
    // 0x803F1150: b           L_803F1168
    // 0x803F1154: or          $v0, $s0, $zero
    ctx->r2 = ctx->r16 | 0;
        goto L_803F1168;
    // 0x803F1154: or          $v0, $s0, $zero
    ctx->r2 = ctx->r16 | 0;
L_803F1158:
    // 0x803F1158: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
L_803F115C:
    // 0x803F115C: bne         $s2, $s7, L_803F107C
    if (ctx->r18 != ctx->r23) {
        // 0x803F1160: addiu       $s1, $s1, 0x8
        ctx->r17 = ADD32(ctx->r17, 0X8);
            goto L_803F107C;
    }
    // 0x803F1160: addiu       $s1, $s1, 0x8
    ctx->r17 = ADD32(ctx->r17, 0X8);
    // 0x803F1164: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_803F1168:
    // 0x803F1168: lw          $ra, 0x54($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X54);
    // 0x803F116C: lwc1        $f21, 0x10($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X10);
    // 0x803F1170: lwc1        $f20, 0x14($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X14);
    // 0x803F1174: lwc1        $f23, 0x18($sp)
    ctx->f_odd[(23 - 1) * 2] = MEM_W(ctx->r29, 0X18);
    // 0x803F1178: lwc1        $f22, 0x1C($sp)
    ctx->f22.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x803F117C: lwc1        $f25, 0x20($sp)
    ctx->f_odd[(25 - 1) * 2] = MEM_W(ctx->r29, 0X20);
    // 0x803F1180: lwc1        $f24, 0x24($sp)
    ctx->f24.u32l = MEM_W(ctx->r29, 0X24);
    // 0x803F1184: lwc1        $f27, 0x28($sp)
    ctx->f_odd[(27 - 1) * 2] = MEM_W(ctx->r29, 0X28);
    // 0x803F1188: lwc1        $f26, 0x2C($sp)
    ctx->f26.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x803F118C: lw          $s0, 0x34($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X34);
    // 0x803F1190: lw          $s1, 0x38($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X38);
    // 0x803F1194: lw          $s2, 0x3C($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X3C);
    // 0x803F1198: lw          $s3, 0x40($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X40);
    // 0x803F119C: lw          $s4, 0x44($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X44);
    // 0x803F11A0: lw          $s5, 0x48($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X48);
    // 0x803F11A4: lw          $s6, 0x4C($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X4C);
    // 0x803F11A8: lw          $s7, 0x50($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X50);
    // 0x803F11AC: jr          $ra
    // 0x803F11B0: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
    return;
    // 0x803F11B0: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
;}
RECOMP_FUNC void ovl_803F0000_menu_func_803F10B4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
L_803F107C:
    // 0x803F10B4: cfc1        $t9, $FpcCsr
    ctx->r25 = get_cop1_cs();
    // 0x803F10B8: nop

    // 0x803F10BC: ori         $at, $t9, 0x3
    ctx->r1 = ctx->r25 | 0X3;
    // 0x803F10C0: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x803F10C4: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x803F10C8: nop

    // 0x803F10CC: cvt.w.s     $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    ctx->f4.u32l = CVT_W_S(ctx->f0.fl);
    // 0x803F10D0: mfc1        $v0, $f4
    ctx->r2 = (int32_t)ctx->f4.u32l;
    // 0x803F10D4: ctc1        $t9, $FpcCsr
    set_cop1_cs(ctx->r25);
    // 0x803F10D8: slt         $at, $s5, $v0
    ctx->r1 = SIGNED(ctx->r21) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x803F10DC: beq         $at, $zero, L_803F1158
    if (ctx->r1 == 0) {
        // 0x803F10E0: slti        $at, $v0, 0x158
        ctx->r1 = SIGNED(ctx->r2) < 0X158 ? 1 : 0;
            goto L_803F1158;
    }
    // 0x803F10E0: slti        $at, $v0, 0x158
    ctx->r1 = SIGNED(ctx->r2) < 0X158 ? 1 : 0;
    // 0x803F10E4: beq         $at, $zero, L_803F1158
    if (ctx->r1 == 0) {
        // 0x803F10E8: nop
    
            goto L_803F1158;
    }
    // 0x803F10E8: nop

    // 0x803F10EC: lwc1        $f0, 0x84($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X84);
    // 0x803F10F0: nop

    // 0x803F10F4: c.lt.s      $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f20.fl < ctx->f0.fl;
    // 0x803F10F8: nop

    // 0x803F10FC: bc1f        L_803F1158
    if (!c1cs) {
        // 0x803F1100: nop
    
            goto L_803F1158;
    }
    // 0x803F1100: nop

    // 0x803F1104: c.lt.s      $f0, $f22
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 22);
    c1cs = ctx->f0.fl < ctx->f22.fl;
    // 0x803F1108: nop

    // 0x803F110C: bc1f        L_803F1158
    if (!c1cs) {
        // 0x803F1110: nop
    
            goto L_803F1158;
    }
    // 0x803F1110: nop

    // 0x803F1114: lwc1        $f6, 0x4C($s3)
    ctx->f6.u32l = MEM_W(ctx->r19, 0X4C);
    // 0x803F1118: lwc1        $f8, 0x4C($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X4C);
    // 0x803F111C: jal         0x80272AEC
    // 0x803F1120: sub.s       $f12, $f6, $f8
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f12.fl = ctx->f6.fl - ctx->f8.fl;
    LOOKUP_FUNC(0x80272AEC)(rdram, ctx);
        goto after_0;
    // 0x803F1120: sub.s       $f12, $f6, $f8
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f12.fl = ctx->f6.fl - ctx->f8.fl;
    after_0:
    // 0x803F1124: c.lt.s      $f0, $f24
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 24);
    c1cs = ctx->f0.fl < ctx->f24.fl;
    // 0x803F1128: nop

    // 0x803F112C: bc1f        L_803F1158
    if (!c1cs) {
        // 0x803F1130: nop
    
            goto L_803F1158;
    }
    // 0x803F1130: nop

    // 0x803F1134: lwc1        $f12, 0x44($s0)
    ctx->f12.u32l = MEM_W(ctx->r16, 0X44);
    // 0x803F1138: jal         0x80272AEC
    // 0x803F113C: nop

    LOOKUP_FUNC(0x80272AEC)(rdram, ctx);
        goto after_1;
    // 0x803F113C: nop

    after_1:
    // 0x803F1140: c.lt.s      $f0, $f26
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 26);
    c1cs = ctx->f0.fl < ctx->f26.fl;
    // 0x803F1144: nop

    // 0x803F1148: bc1f        L_803F115C
    if (!c1cs) {
        // 0x803F114C: addiu       $s2, $s2, 0x1
        ctx->r18 = ADD32(ctx->r18, 0X1);
            goto L_803F115C;
    }
    // 0x803F114C: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
    // 0x803F1150: b           L_803F1168
    // 0x803F1154: or          $v0, $s0, $zero
    ctx->r2 = ctx->r16 | 0;
        goto L_803F1168;
    // 0x803F1154: or          $v0, $s0, $zero
    ctx->r2 = ctx->r16 | 0;
L_803F1158:
    // 0x803F1158: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
L_803F115C:
    // 0x803F115C: bne         $s2, $s7, L_803F107C
    if (ctx->r18 != ctx->r23) {
            // 0x803F1160: addiu       $s1, $s1, 0x8
    ctx->r17 = ADD32(ctx->r17, 0X8);
    ovl_803F0000_menu_func_803F107C(rdram, ctx);
    return;
    }
    // 0x803F1160: addiu       $s1, $s1, 0x8
    ctx->r17 = ADD32(ctx->r17, 0X8);
    // 0x803F1164: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_803F1168:
    // 0x803F1168: lw          $ra, 0x54($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X54);
    // 0x803F116C: lwc1        $f21, 0x10($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X10);
    // 0x803F1170: lwc1        $f20, 0x14($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X14);
    // 0x803F1174: lwc1        $f23, 0x18($sp)
    ctx->f_odd[(23 - 1) * 2] = MEM_W(ctx->r29, 0X18);
    // 0x803F1178: lwc1        $f22, 0x1C($sp)
    ctx->f22.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x803F117C: lwc1        $f25, 0x20($sp)
    ctx->f_odd[(25 - 1) * 2] = MEM_W(ctx->r29, 0X20);
    // 0x803F1180: lwc1        $f24, 0x24($sp)
    ctx->f24.u32l = MEM_W(ctx->r29, 0X24);
    // 0x803F1184: lwc1        $f27, 0x28($sp)
    ctx->f_odd[(27 - 1) * 2] = MEM_W(ctx->r29, 0X28);
    // 0x803F1188: lwc1        $f26, 0x2C($sp)
    ctx->f26.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x803F118C: lw          $s0, 0x34($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X34);
    // 0x803F1190: lw          $s1, 0x38($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X38);
    // 0x803F1194: lw          $s2, 0x3C($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X3C);
    // 0x803F1198: lw          $s3, 0x40($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X40);
    // 0x803F119C: lw          $s4, 0x44($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X44);
    // 0x803F11A0: lw          $s5, 0x48($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X48);
    // 0x803F11A4: lw          $s6, 0x4C($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X4C);
    // 0x803F11A8: lw          $s7, 0x50($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X50);
    // 0x803F11AC: jr          $ra
    // 0x803F11B0: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
    return;
    // 0x803F11B0: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
;}
RECOMP_FUNC void ovl_803F0000_menu_func_803F11B4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803F11B4: addiu       $sp, $sp, -0xA0
    ctx->r29 = ADD32(ctx->r29, -0XA0);
    // 0x803F11B8: sw          $ra, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r31;
    // 0x803F11BC: sw          $s6, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r22;
    // 0x803F11C0: sw          $s5, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r21;
    // 0x803F11C4: sw          $s4, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r20;
    // 0x803F11C8: sw          $s3, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r19;
    // 0x803F11CC: sw          $s2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r18;
    // 0x803F11D0: sw          $s1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r17;
    // 0x803F11D4: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    // 0x803F11D8: swc1        $f23, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f_odd[(23 - 1) * 2];
    // 0x803F11DC: swc1        $f22, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f22.u32l;
    // 0x803F11E0: swc1        $f21, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x803F11E4: swc1        $f20, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f20.u32l;
    // 0x803F11E8: sw          $a1, 0xA4($sp)
    MEM_W(0XA4, ctx->r29) = ctx->r5;
    // 0x803F11EC: sw          $a2, 0xA8($sp)
    MEM_W(0XA8, ctx->r29) = ctx->r6;
    // 0x803F11F0: lw          $v0, 0xC8($a0)
    ctx->r2 = MEM_W(ctx->r4, 0XC8);
    // 0x803F11F4: lui         $at, 0x4348
    ctx->r1 = S32(0X4348 << 16);
    // 0x803F11F8: lw          $t7, 0x18($v0)
    ctx->r15 = MEM_W(ctx->r2, 0X18);
    // 0x803F11FC: lui         $s6, 0x8009
    ctx->r22 = S32(0X8009 << 16);
    // 0x803F1200: mtc1        $at, $f22
    ctx->f22.u32l = ctx->r1;
    // 0x803F1204: mtc1        $zero, $f20
    ctx->f20.u32l = 0;
    // 0x803F1208: andi        $s1, $a2, 0xFFFF
    ctx->r17 = ctx->r6 & 0XFFFF;
    // 0x803F120C: or          $s2, $a0, $zero
    ctx->r18 = ctx->r4 | 0;
    // 0x803F1210: or          $s5, $zero, $zero
    ctx->r21 = 0 | 0;
    // 0x803F1214: addiu       $s6, $s6, 0x3B20
    ctx->r22 = ADD32(ctx->r22, 0X3B20);
    // 0x803F1218: or          $s4, $zero, $zero
    ctx->r20 = 0 | 0;
    // 0x803F121C: addiu       $s3, $v0, 0x318
    ctx->r19 = ADD32(ctx->r2, 0X318);
    // 0x803F1220: sw          $t7, 0x8C($sp)
    MEM_W(0X8C, ctx->r29) = ctx->r15;
L_803F1224:
    // 0x803F1224: lhu         $t8, 0x0($s3)
    ctx->r24 = MEM_HU(ctx->r19, 0X0);
    // 0x803F1228: lw          $t0, 0x8C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X8C);
    // 0x803F122C: sll         $t9, $t8, 5
    ctx->r25 = S32(ctx->r24 << 5);
    // 0x803F1230: lw          $t1, 0xC8($s2)
    ctx->r9 = MEM_W(ctx->r18, 0XC8);
    // 0x803F1234: subu        $t9, $t9, $t8
    ctx->r25 = SUB32(ctx->r25, ctx->r24);
    // 0x803F1238: sll         $t9, $t9, 3
    ctx->r25 = S32(ctx->r25 << 3);
    // 0x803F123C: lhu         $v0, 0x8($t1)
    ctx->r2 = MEM_HU(ctx->r9, 0X8);
    // 0x803F1240: addu        $s0, $t9, $t0
    ctx->r16 = ADD32(ctx->r25, ctx->r8);
    // 0x803F1244: lwc1        $f4, 0x4C($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X4C);
    // 0x803F1248: lwc1        $f6, 0x4C($s2)
    ctx->f6.u32l = MEM_W(ctx->r18, 0X4C);
    // 0x803F124C: andi        $t2, $v0, 0x1
    ctx->r10 = ctx->r2 & 0X1;
    // 0x803F1250: or          $v0, $t2, $zero
    ctx->r2 = ctx->r10 | 0;
    // 0x803F1254: beq         $t2, $zero, L_803F1280
    if (ctx->r10 == 0) {
        // 0x803F1258: sub.s       $f12, $f4, $f6
        CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f12.fl = ctx->f4.fl - ctx->f6.fl;
            goto L_803F1280;
    }
    // 0x803F1258: sub.s       $f12, $f4, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f12.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x803F125C: lui         $at, 0xC2C8
    ctx->r1 = S32(0XC2C8 << 16);
    // 0x803F1260: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x803F1264: nop

    // 0x803F1268: c.lt.s      $f12, $f8
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f12.fl < ctx->f8.fl;
    // 0x803F126C: nop

    // 0x803F1270: bc1f        L_803F129C
    if (!c1cs) {
        // 0x803F1274: nop
    
            goto L_803F129C;
    }
    // 0x803F1274: nop

    // 0x803F1278: b           L_803F1490
    // 0x803F127C: addiu       $s4, $s4, 0x1
    ctx->r20 = ADD32(ctx->r20, 0X1);
        goto L_803F1490;
    // 0x803F127C: addiu       $s4, $s4, 0x1
    ctx->r20 = ADD32(ctx->r20, 0X1);
L_803F1280:
    // 0x803F1280: lui         $at, 0x42C8
    ctx->r1 = S32(0X42C8 << 16);
    // 0x803F1284: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x803F1288: nop

    // 0x803F128C: c.lt.s      $f10, $f12
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f10.fl < ctx->f12.fl;
    // 0x803F1290: nop

    // 0x803F1294: bc1t        L_803F148C
    if (c1cs) {
        // 0x803F1298: nop
    
            goto L_803F148C;
    }
    // 0x803F1298: nop

L_803F129C:
    // 0x803F129C: lw          $v1, 0xD4($s0)
    ctx->r3 = MEM_W(ctx->r16, 0XD4);
    // 0x803F12A0: lui         $t5, 0x8028
    ctx->r13 = S32(0X8028 << 16);
    // 0x803F12A4: lbu         $t3, 0x5($v1)
    ctx->r11 = MEM_BU(ctx->r3, 0X5);
    // 0x803F12A8: lhu         $t6, 0xA6($sp)
    ctx->r14 = MEM_HU(ctx->r29, 0XA6);
    // 0x803F12AC: sll         $t4, $t3, 1
    ctx->r12 = S32(ctx->r11 << 1);
    // 0x803F12B0: addu        $t5, $t5, $t4
    ctx->r13 = ADD32(ctx->r13, ctx->r12);
    // 0x803F12B4: lhu         $t5, -0x3678($t5)
    ctx->r13 = MEM_HU(ctx->r13, -0X3678);
    // 0x803F12B8: nop

    // 0x803F12BC: and         $t7, $t5, $t6
    ctx->r15 = ctx->r13 & ctx->r14;
    // 0x803F12C0: beq         $t7, $zero, L_803F148C
    if (ctx->r15 == 0) {
        // 0x803F12C4: nop
    
            goto L_803F148C;
    }
    // 0x803F12C4: nop

    // 0x803F12C8: lhu         $t8, 0xC($s0)
    ctx->r24 = MEM_HU(ctx->r16, 0XC);
    // 0x803F12CC: nop

    // 0x803F12D0: beq         $t8, $zero, L_803F148C
    if (ctx->r24 == 0) {
        // 0x803F12D4: nop
    
            goto L_803F148C;
    }
    // 0x803F12D4: nop

    // 0x803F12D8: lhu         $t9, 0x14($s0)
    ctx->r25 = MEM_HU(ctx->r16, 0X14);
    // 0x803F12DC: nop

    // 0x803F12E0: andi        $t0, $t9, 0x8000
    ctx->r8 = ctx->r25 & 0X8000;
    // 0x803F12E4: bne         $t0, $zero, L_803F148C
    if (ctx->r8 != 0) {
        // 0x803F12E8: nop
    
            goto L_803F148C;
    }
    // 0x803F12E8: nop

    // 0x803F12EC: beq         $s0, $s2, L_803F148C
    if (ctx->r16 == ctx->r18) {
        // 0x803F12F0: andi        $t1, $s1, 0x100
        ctx->r9 = ctx->r17 & 0X100;
            goto L_803F148C;
    }
    // 0x803F12F0: andi        $t1, $s1, 0x100
    ctx->r9 = ctx->r17 & 0X100;
    // 0x803F12F4: beq         $t1, $zero, L_803F132C
    if (ctx->r9 == 0) {
        // 0x803F12F8: andi        $t2, $s1, 0x80
        ctx->r10 = ctx->r17 & 0X80;
            goto L_803F132C;
    }
    // 0x803F12F8: andi        $t2, $s1, 0x80
    ctx->r10 = ctx->r17 & 0X80;
    // 0x803F12FC: beq         $v0, $zero, L_803F131C
    if (ctx->r2 == 0) {
        // 0x803F1300: nop
    
            goto L_803F131C;
    }
    // 0x803F1300: nop

    // 0x803F1304: c.lt.s      $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    c1cs = ctx->f12.fl < ctx->f20.fl;
    // 0x803F1308: nop

    // 0x803F130C: bc1f        L_803F132C
    if (!c1cs) {
        // 0x803F1310: nop
    
            goto L_803F132C;
    }
    // 0x803F1310: nop

    // 0x803F1314: b           L_803F1490
    // 0x803F1318: addiu       $s4, $s4, 0x1
    ctx->r20 = ADD32(ctx->r20, 0X1);
        goto L_803F1490;
    // 0x803F1318: addiu       $s4, $s4, 0x1
    ctx->r20 = ADD32(ctx->r20, 0X1);
L_803F131C:
    // 0x803F131C: c.lt.s      $f20, $f12
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f20.fl < ctx->f12.fl;
    // 0x803F1320: nop

    // 0x803F1324: bc1t        L_803F148C
    if (c1cs) {
        // 0x803F1328: nop
    
            goto L_803F148C;
    }
    // 0x803F1328: nop

L_803F132C:
    // 0x803F132C: beq         $t2, $zero, L_803F1360
    if (ctx->r10 == 0) {
        // 0x803F1330: andi        $t5, $s1, 0x8
        ctx->r13 = ctx->r17 & 0X8;
            goto L_803F1360;
    }
    // 0x803F1330: andi        $t5, $s1, 0x8
    ctx->r13 = ctx->r17 & 0X8;
    // 0x803F1334: lbu         $t3, 0x4($v1)
    ctx->r11 = MEM_BU(ctx->r3, 0X4);
    // 0x803F1338: nop

    // 0x803F133C: andi        $t4, $t3, 0x80
    ctx->r12 = ctx->r11 & 0X80;
    // 0x803F1340: beq         $t4, $zero, L_803F148C
    if (ctx->r12 == 0) {
        // 0x803F1344: nop
    
            goto L_803F148C;
    }
    // 0x803F1344: nop

    // 0x803F1348: jal         0x80272AEC
    // 0x803F134C: nop

    LOOKUP_FUNC(0x80272AEC)(rdram, ctx);
        goto after_0;
    // 0x803F134C: nop

    after_0:
    // 0x803F1350: c.lt.s      $f22, $f0
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f22.fl < ctx->f0.fl;
    // 0x803F1354: nop

    // 0x803F1358: bc1t        L_803F148C
    if (c1cs) {
        // 0x803F135C: andi        $t5, $s1, 0x8
        ctx->r13 = ctx->r17 & 0X8;
            goto L_803F148C;
    }
    // 0x803F135C: andi        $t5, $s1, 0x8
    ctx->r13 = ctx->r17 & 0X8;
L_803F1360:
    // 0x803F1360: beq         $t5, $zero, L_803F1380
    if (ctx->r13 == 0) {
        // 0x803F1364: lui         $at, 0x4220
        ctx->r1 = S32(0X4220 << 16);
            goto L_803F1380;
    }
    // 0x803F1364: lui         $at, 0x4220
    ctx->r1 = S32(0X4220 << 16);
    // 0x803F1368: lwc1        $f16, 0x84($s0)
    ctx->f16.u32l = MEM_W(ctx->r16, 0X84);
    // 0x803F136C: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x803F1370: nop

    // 0x803F1374: c.lt.s      $f16, $f18
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f16.fl < ctx->f18.fl;
    // 0x803F1378: nop

    // 0x803F137C: bc1t        L_803F148C
    if (c1cs) {
        // 0x803F1380: andi        $t6, $s1, 0x200
        ctx->r14 = ctx->r17 & 0X200;
            goto L_803F148C;
    }
L_803F1380:
    // 0x803F1380: andi        $t6, $s1, 0x200
    ctx->r14 = ctx->r17 & 0X200;
    // 0x803F1384: beq         $t6, $zero, L_803F13A4
    if (ctx->r14 == 0) {
        // 0x803F1388: lui         $at, 0x437A
        ctx->r1 = S32(0X437A << 16);
            goto L_803F13A4;
    }
    // 0x803F1388: lui         $at, 0x437A
    ctx->r1 = S32(0X437A << 16);
    // 0x803F138C: lwc1        $f4, 0x84($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X84);
    // 0x803F1390: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x803F1394: nop

    // 0x803F1398: c.lt.s      $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f4.fl < ctx->f6.fl;
    // 0x803F139C: nop

    // 0x803F13A0: bc1t        L_803F148C
    if (c1cs) {
        // 0x803F13A4: andi        $t7, $s1, 0x20
        ctx->r15 = ctx->r17 & 0X20;
            goto L_803F148C;
    }
L_803F13A4:
    // 0x803F13A4: andi        $t7, $s1, 0x20
    ctx->r15 = ctx->r17 & 0X20;
    // 0x803F13A8: beq         $t7, $zero, L_803F13C8
    if (ctx->r15 == 0) {
        // 0x803F13AC: andi        $t8, $s1, 0x10
        ctx->r24 = ctx->r17 & 0X10;
            goto L_803F13C8;
    }
    // 0x803F13AC: andi        $t8, $s1, 0x10
    ctx->r24 = ctx->r17 & 0X10;
    // 0x803F13B0: lwc1        $f8, 0x84($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X84);
    // 0x803F13B4: nop

    // 0x803F13B8: c.lt.s      $f8, $f22
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 22);
    c1cs = ctx->f8.fl < ctx->f22.fl;
    // 0x803F13BC: nop

    // 0x803F13C0: bc1t        L_803F148C
    if (c1cs) {
        // 0x803F13C4: nop
    
            goto L_803F148C;
    }
    // 0x803F13C4: nop

L_803F13C8:
    // 0x803F13C8: beq         $t8, $zero, L_803F140C
    if (ctx->r24 == 0) {
        // 0x803F13CC: andi        $t0, $s1, 0x40
        ctx->r8 = ctx->r17 & 0X40;
            goto L_803F140C;
    }
    // 0x803F13CC: andi        $t0, $s1, 0x40
    ctx->r8 = ctx->r17 & 0X40;
    // 0x803F13D0: lw          $t9, 0x0($s6)
    ctx->r25 = MEM_W(ctx->r22, 0X0);
    // 0x803F13D4: lwc1        $f12, 0x44($s0)
    ctx->f12.u32l = MEM_W(ctx->r16, 0X44);
    // 0x803F13D8: lwc1        $f10, 0x0($t9)
    ctx->f10.u32l = MEM_W(ctx->r25, 0X0);
    // 0x803F13DC: nop

    // 0x803F13E0: mul.s       $f16, $f12, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = MUL_S(ctx->f12.fl, ctx->f10.fl);
    // 0x803F13E4: c.lt.s      $f20, $f16
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f20.fl < ctx->f16.fl;
    // 0x803F13E8: nop

    // 0x803F13EC: bc1t        L_803F148C
    if (c1cs) {
        // 0x803F13F0: nop
    
            goto L_803F148C;
    }
    // 0x803F13F0: nop

    // 0x803F13F4: jal         0x80272AEC
    // 0x803F13F8: nop

    LOOKUP_FUNC(0x80272AEC)(rdram, ctx);
        goto after_1;
    // 0x803F13F8: nop

    after_1:
    // 0x803F13FC: c.lt.s      $f0, $f22
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 22);
    c1cs = ctx->f0.fl < ctx->f22.fl;
    // 0x803F1400: nop

    // 0x803F1404: bc1t        L_803F148C
    if (c1cs) {
        // 0x803F1408: andi        $t0, $s1, 0x40
        ctx->r8 = ctx->r17 & 0X40;
            goto L_803F148C;
    }
    // 0x803F1408: andi        $t0, $s1, 0x40
    ctx->r8 = ctx->r17 & 0X40;
L_803F140C:
    // 0x803F140C: beq         $t0, $zero, L_803F1450
    if (ctx->r8 == 0) {
        // 0x803F1410: andi        $t2, $s1, 0x1
        ctx->r10 = ctx->r17 & 0X1;
            goto L_803F1450;
    }
    // 0x803F1410: andi        $t2, $s1, 0x1
    ctx->r10 = ctx->r17 & 0X1;
    // 0x803F1414: lw          $t1, 0x0($s6)
    ctx->r9 = MEM_W(ctx->r22, 0X0);
    // 0x803F1418: lwc1        $f12, 0x44($s0)
    ctx->f12.u32l = MEM_W(ctx->r16, 0X44);
    // 0x803F141C: lwc1        $f18, 0x0($t1)
    ctx->f18.u32l = MEM_W(ctx->r9, 0X0);
    // 0x803F1420: nop

    // 0x803F1424: mul.s       $f4, $f12, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = MUL_S(ctx->f12.fl, ctx->f18.fl);
    // 0x803F1428: c.lt.s      $f4, $f20
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 20);
    c1cs = ctx->f4.fl < ctx->f20.fl;
    // 0x803F142C: nop

    // 0x803F1430: bc1t        L_803F148C
    if (c1cs) {
        // 0x803F1434: nop
    
            goto L_803F148C;
    }
    // 0x803F1434: nop

    // 0x803F1438: jal         0x80272AEC
    // 0x803F143C: nop

    LOOKUP_FUNC(0x80272AEC)(rdram, ctx);
        goto after_2;
    // 0x803F143C: nop

    after_2:
    // 0x803F1440: c.lt.s      $f0, $f22
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 22);
    c1cs = ctx->f0.fl < ctx->f22.fl;
    // 0x803F1444: nop

    // 0x803F1448: bc1t        L_803F148C
    if (c1cs) {
        // 0x803F144C: andi        $t2, $s1, 0x1
        ctx->r10 = ctx->r17 & 0X1;
            goto L_803F148C;
    }
    // 0x803F144C: andi        $t2, $s1, 0x1
    ctx->r10 = ctx->r17 & 0X1;
L_803F1450:
    // 0x803F1450: beq         $t2, $zero, L_803F1464
    if (ctx->r10 == 0) {
        // 0x803F1454: or          $a0, $s2, $zero
        ctx->r4 = ctx->r18 | 0;
            goto L_803F1464;
    }
    // 0x803F1454: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x803F1458: jal         0x803F15A8
    // 0x803F145C: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    ovl_803F0000_menu_func_803F15A8(rdram, ctx);
        goto after_3;
    // 0x803F145C: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_3:
    // 0x803F1460: bne         $v0, $zero, L_803F148C
    if (ctx->r2 != 0) {
        // 0x803F1464: andi        $t3, $s1, 0x2
        ctx->r11 = ctx->r17 & 0X2;
            goto L_803F148C;
    }
L_803F1464:
    // 0x803F1464: andi        $t3, $s1, 0x2
    ctx->r11 = ctx->r17 & 0X2;
    // 0x803F1468: beq         $t3, $zero, L_803F1478
    if (ctx->r11 == 0) {
        // 0x803F146C: andi        $t4, $s1, 0x4
        ctx->r12 = ctx->r17 & 0X4;
            goto L_803F1478;
    }
    // 0x803F146C: andi        $t4, $s1, 0x4
    ctx->r12 = ctx->r17 & 0X4;
    // 0x803F1470: b           L_803F14D0
    // 0x803F1474: or          $v0, $s0, $zero
    ctx->r2 = ctx->r16 | 0;
        goto L_803F14D0;
    // 0x803F1474: or          $v0, $s0, $zero
    ctx->r2 = ctx->r16 | 0;
L_803F1478:
    // 0x803F1478: beq         $t4, $zero, L_803F148C
    if (ctx->r12 == 0) {
        // 0x803F147C: sll         $t5, $s5, 2
        ctx->r13 = S32(ctx->r21 << 2);
            goto L_803F148C;
    }
    // 0x803F147C: sll         $t5, $s5, 2
    ctx->r13 = S32(ctx->r21 << 2);
    // 0x803F1480: addu        $t6, $sp, $t5
    ctx->r14 = ADD32(ctx->r29, ctx->r13);
    // 0x803F1484: sw          $s0, 0x5C($t6)
    MEM_W(0X5C, ctx->r14) = ctx->r16;
    // 0x803F1488: addiu       $s5, $s5, 0x1
    ctx->r21 = ADD32(ctx->r21, 0X1);
L_803F148C:
    // 0x803F148C: addiu       $s4, $s4, 0x1
    ctx->r20 = ADD32(ctx->r20, 0X1);
L_803F1490:
    // 0x803F1490: addiu       $at, $zero, 0xB
    ctx->r1 = ADD32(0, 0XB);
    // 0x803F1494: bne         $s4, $at, L_803F1224
    if (ctx->r20 != ctx->r1) {
        // 0x803F1498: addiu       $s3, $s3, 0x8
        ctx->r19 = ADD32(ctx->r19, 0X8);
            goto L_803F1224;
    }
    // 0x803F1498: addiu       $s3, $s3, 0x8
    ctx->r19 = ADD32(ctx->r19, 0X8);
    // 0x803F149C: andi        $v0, $s1, 0x4
    ctx->r2 = ctx->r17 & 0X4;
    // 0x803F14A0: beq         $v0, $zero, L_803F14D0
    if (ctx->r2 == 0) {
        // 0x803F14A4: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_803F14D0;
    }
    // 0x803F14A4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x803F14A8: beq         $s5, $zero, L_803F14D0
    if (ctx->r21 == 0) {
        // 0x803F14AC: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_803F14D0;
    }
    // 0x803F14AC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x803F14B0: jal         0x80059898
    // 0x803F14B4: or          $a0, $s5, $zero
    ctx->r4 = ctx->r21 | 0;
    func_80059898(rdram, ctx);
        goto after_4;
    // 0x803F14B4: or          $a0, $s5, $zero
    ctx->r4 = ctx->r21 | 0;
    after_4:
    // 0x803F14B8: sll         $t7, $v0, 2
    ctx->r15 = S32(ctx->r2 << 2);
    // 0x803F14BC: addu        $v0, $sp, $t7
    ctx->r2 = ADD32(ctx->r29, ctx->r15);
    // 0x803F14C0: lw          $v0, 0x5C($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X5C);
    // 0x803F14C4: b           L_803F14D4
    // 0x803F14C8: lw          $ra, 0x44($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X44);
        goto L_803F14D4;
    // 0x803F14C8: lw          $ra, 0x44($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X44);
    // 0x803F14CC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_803F14D0:
    // 0x803F14D0: lw          $ra, 0x44($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X44);
L_803F14D4:
    // 0x803F14D4: lwc1        $f21, 0x18($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X18);
    // 0x803F14D8: lwc1        $f20, 0x1C($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x803F14DC: lwc1        $f23, 0x20($sp)
    ctx->f_odd[(23 - 1) * 2] = MEM_W(ctx->r29, 0X20);
    // 0x803F14E0: lwc1        $f22, 0x24($sp)
    ctx->f22.u32l = MEM_W(ctx->r29, 0X24);
    // 0x803F14E4: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x803F14E8: lw          $s1, 0x2C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X2C);
    // 0x803F14EC: lw          $s2, 0x30($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X30);
    // 0x803F14F0: lw          $s3, 0x34($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X34);
    // 0x803F14F4: lw          $s4, 0x38($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X38);
    // 0x803F14F8: lw          $s5, 0x3C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X3C);
    // 0x803F14FC: lw          $s6, 0x40($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X40);
    // 0x803F1500: jr          $ra
    // 0x803F1504: addiu       $sp, $sp, 0xA0
    ctx->r29 = ADD32(ctx->r29, 0XA0);
    return;
    // 0x803F1504: addiu       $sp, $sp, 0xA0
    ctx->r29 = ADD32(ctx->r29, 0XA0);
;}
RECOMP_FUNC void ovl_803F0000_menu_func_803F1224(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
L_803F1224:
    // 0x803F1224: lhu         $t8, 0x0($s3)
    ctx->r24 = MEM_HU(ctx->r19, 0X0);
    // 0x803F1228: lw          $t0, 0x8C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X8C);
    // 0x803F122C: sll         $t9, $t8, 5
    ctx->r25 = S32(ctx->r24 << 5);
    // 0x803F1230: lw          $t1, 0xC8($s2)
    ctx->r9 = MEM_W(ctx->r18, 0XC8);
    // 0x803F1234: subu        $t9, $t9, $t8
    ctx->r25 = SUB32(ctx->r25, ctx->r24);
    // 0x803F1238: sll         $t9, $t9, 3
    ctx->r25 = S32(ctx->r25 << 3);
    // 0x803F123C: lhu         $v0, 0x8($t1)
    ctx->r2 = MEM_HU(ctx->r9, 0X8);
    // 0x803F1240: addu        $s0, $t9, $t0
    ctx->r16 = ADD32(ctx->r25, ctx->r8);
    // 0x803F1244: lwc1        $f4, 0x4C($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X4C);
    // 0x803F1248: lwc1        $f6, 0x4C($s2)
    ctx->f6.u32l = MEM_W(ctx->r18, 0X4C);
    // 0x803F124C: andi        $t2, $v0, 0x1
    ctx->r10 = ctx->r2 & 0X1;
    // 0x803F1250: or          $v0, $t2, $zero
    ctx->r2 = ctx->r10 | 0;
    // 0x803F1254: beq         $t2, $zero, L_803F1280
    if (ctx->r10 == 0) {
        // 0x803F1258: sub.s       $f12, $f4, $f6
        CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f12.fl = ctx->f4.fl - ctx->f6.fl;
            goto L_803F1280;
    }
    // 0x803F1258: sub.s       $f12, $f4, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f12.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x803F125C: lui         $at, 0xC2C8
    ctx->r1 = S32(0XC2C8 << 16);
    // 0x803F1260: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x803F1264: nop

    // 0x803F1268: c.lt.s      $f12, $f8
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f12.fl < ctx->f8.fl;
    // 0x803F126C: nop

    // 0x803F1270: bc1f        L_803F129C
    if (!c1cs) {
        // 0x803F1274: nop
    
            goto L_803F129C;
    }
    // 0x803F1274: nop

    // 0x803F1278: b           L_803F1490
    // 0x803F127C: addiu       $s4, $s4, 0x1
    ctx->r20 = ADD32(ctx->r20, 0X1);
        goto L_803F1490;
    // 0x803F127C: addiu       $s4, $s4, 0x1
    ctx->r20 = ADD32(ctx->r20, 0X1);
L_803F1280:
    // 0x803F1280: lui         $at, 0x42C8
    ctx->r1 = S32(0X42C8 << 16);
    // 0x803F1284: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x803F1288: nop

    // 0x803F128C: c.lt.s      $f10, $f12
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f10.fl < ctx->f12.fl;
    // 0x803F1290: nop

    // 0x803F1294: bc1t        L_803F148C
    if (c1cs) {
        // 0x803F1298: nop
    
            goto L_803F148C;
    }
    // 0x803F1298: nop

L_803F129C:
    // 0x803F129C: lw          $v1, 0xD4($s0)
    ctx->r3 = MEM_W(ctx->r16, 0XD4);
    // 0x803F12A0: lui         $t5, 0x8028
    ctx->r13 = S32(0X8028 << 16);
    // 0x803F12A4: lbu         $t3, 0x5($v1)
    ctx->r11 = MEM_BU(ctx->r3, 0X5);
    // 0x803F12A8: lhu         $t6, 0xA6($sp)
    ctx->r14 = MEM_HU(ctx->r29, 0XA6);
    // 0x803F12AC: sll         $t4, $t3, 1
    ctx->r12 = S32(ctx->r11 << 1);
    // 0x803F12B0: addu        $t5, $t5, $t4
    ctx->r13 = ADD32(ctx->r13, ctx->r12);
    // 0x803F12B4: lhu         $t5, -0x3678($t5)
    ctx->r13 = MEM_HU(ctx->r13, -0X3678);
    // 0x803F12B8: nop

    // 0x803F12BC: and         $t7, $t5, $t6
    ctx->r15 = ctx->r13 & ctx->r14;
    // 0x803F12C0: beq         $t7, $zero, L_803F148C
    if (ctx->r15 == 0) {
        // 0x803F12C4: nop
    
            goto L_803F148C;
    }
    // 0x803F12C4: nop

    // 0x803F12C8: lhu         $t8, 0xC($s0)
    ctx->r24 = MEM_HU(ctx->r16, 0XC);
    // 0x803F12CC: nop

    // 0x803F12D0: beq         $t8, $zero, L_803F148C
    if (ctx->r24 == 0) {
        // 0x803F12D4: nop
    
            goto L_803F148C;
    }
    // 0x803F12D4: nop

    // 0x803F12D8: lhu         $t9, 0x14($s0)
    ctx->r25 = MEM_HU(ctx->r16, 0X14);
    // 0x803F12DC: nop

    // 0x803F12E0: andi        $t0, $t9, 0x8000
    ctx->r8 = ctx->r25 & 0X8000;
    // 0x803F12E4: bne         $t0, $zero, L_803F148C
    if (ctx->r8 != 0) {
        // 0x803F12E8: nop
    
            goto L_803F148C;
    }
    // 0x803F12E8: nop

    // 0x803F12EC: beq         $s0, $s2, L_803F148C
    if (ctx->r16 == ctx->r18) {
        // 0x803F12F0: andi        $t1, $s1, 0x100
        ctx->r9 = ctx->r17 & 0X100;
            goto L_803F148C;
    }
    // 0x803F12F0: andi        $t1, $s1, 0x100
    ctx->r9 = ctx->r17 & 0X100;
    // 0x803F12F4: beq         $t1, $zero, L_803F132C
    if (ctx->r9 == 0) {
        // 0x803F12F8: andi        $t2, $s1, 0x80
        ctx->r10 = ctx->r17 & 0X80;
            goto L_803F132C;
    }
    // 0x803F12F8: andi        $t2, $s1, 0x80
    ctx->r10 = ctx->r17 & 0X80;
    // 0x803F12FC: beq         $v0, $zero, L_803F131C
    if (ctx->r2 == 0) {
        // 0x803F1300: nop
    
            goto L_803F131C;
    }
    // 0x803F1300: nop

    // 0x803F1304: c.lt.s      $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    c1cs = ctx->f12.fl < ctx->f20.fl;
    // 0x803F1308: nop

    // 0x803F130C: bc1f        L_803F132C
    if (!c1cs) {
        // 0x803F1310: nop
    
            goto L_803F132C;
    }
    // 0x803F1310: nop

    // 0x803F1314: b           L_803F1490
    // 0x803F1318: addiu       $s4, $s4, 0x1
    ctx->r20 = ADD32(ctx->r20, 0X1);
        goto L_803F1490;
    // 0x803F1318: addiu       $s4, $s4, 0x1
    ctx->r20 = ADD32(ctx->r20, 0X1);
L_803F131C:
    // 0x803F131C: c.lt.s      $f20, $f12
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f20.fl < ctx->f12.fl;
    // 0x803F1320: nop

    // 0x803F1324: bc1t        L_803F148C
    if (c1cs) {
        // 0x803F1328: nop
    
            goto L_803F148C;
    }
    // 0x803F1328: nop

L_803F132C:
    // 0x803F132C: beq         $t2, $zero, L_803F1360
    if (ctx->r10 == 0) {
        // 0x803F1330: andi        $t5, $s1, 0x8
        ctx->r13 = ctx->r17 & 0X8;
            goto L_803F1360;
    }
    // 0x803F1330: andi        $t5, $s1, 0x8
    ctx->r13 = ctx->r17 & 0X8;
    // 0x803F1334: lbu         $t3, 0x4($v1)
    ctx->r11 = MEM_BU(ctx->r3, 0X4);
    // 0x803F1338: nop

    // 0x803F133C: andi        $t4, $t3, 0x80
    ctx->r12 = ctx->r11 & 0X80;
    // 0x803F1340: beq         $t4, $zero, L_803F148C
    if (ctx->r12 == 0) {
        // 0x803F1344: nop
    
            goto L_803F148C;
    }
    // 0x803F1344: nop

    // 0x803F1348: jal         0x80272AEC
    // 0x803F134C: nop

    LOOKUP_FUNC(0x80272AEC)(rdram, ctx);
        goto after_0;
    // 0x803F134C: nop

    after_0:
    // 0x803F1350: c.lt.s      $f22, $f0
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f22.fl < ctx->f0.fl;
    // 0x803F1354: nop

    // 0x803F1358: bc1t        L_803F148C
    if (c1cs) {
        // 0x803F135C: andi        $t5, $s1, 0x8
        ctx->r13 = ctx->r17 & 0X8;
            goto L_803F148C;
    }
    // 0x803F135C: andi        $t5, $s1, 0x8
    ctx->r13 = ctx->r17 & 0X8;
L_803F1360:
    // 0x803F1360: beq         $t5, $zero, L_803F1380
    if (ctx->r13 == 0) {
        // 0x803F1364: lui         $at, 0x4220
        ctx->r1 = S32(0X4220 << 16);
            goto L_803F1380;
    }
    // 0x803F1364: lui         $at, 0x4220
    ctx->r1 = S32(0X4220 << 16);
    // 0x803F1368: lwc1        $f16, 0x84($s0)
    ctx->f16.u32l = MEM_W(ctx->r16, 0X84);
    // 0x803F136C: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x803F1370: nop

    // 0x803F1374: c.lt.s      $f16, $f18
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f16.fl < ctx->f18.fl;
    // 0x803F1378: nop

    // 0x803F137C: bc1t        L_803F148C
    if (c1cs) {
        // 0x803F1380: andi        $t6, $s1, 0x200
        ctx->r14 = ctx->r17 & 0X200;
            goto L_803F148C;
    }
L_803F1380:
    // 0x803F1380: andi        $t6, $s1, 0x200
    ctx->r14 = ctx->r17 & 0X200;
    // 0x803F1384: beq         $t6, $zero, L_803F13A4
    if (ctx->r14 == 0) {
        // 0x803F1388: lui         $at, 0x437A
        ctx->r1 = S32(0X437A << 16);
            goto L_803F13A4;
    }
    // 0x803F1388: lui         $at, 0x437A
    ctx->r1 = S32(0X437A << 16);
    // 0x803F138C: lwc1        $f4, 0x84($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X84);
    // 0x803F1390: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x803F1394: nop

    // 0x803F1398: c.lt.s      $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f4.fl < ctx->f6.fl;
    // 0x803F139C: nop

    // 0x803F13A0: bc1t        L_803F148C
    if (c1cs) {
        // 0x803F13A4: andi        $t7, $s1, 0x20
        ctx->r15 = ctx->r17 & 0X20;
            goto L_803F148C;
    }
L_803F13A4:
    // 0x803F13A4: andi        $t7, $s1, 0x20
    ctx->r15 = ctx->r17 & 0X20;
    // 0x803F13A8: beq         $t7, $zero, L_803F13C8
    if (ctx->r15 == 0) {
        // 0x803F13AC: andi        $t8, $s1, 0x10
        ctx->r24 = ctx->r17 & 0X10;
            goto L_803F13C8;
    }
    // 0x803F13AC: andi        $t8, $s1, 0x10
    ctx->r24 = ctx->r17 & 0X10;
    // 0x803F13B0: lwc1        $f8, 0x84($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X84);
    // 0x803F13B4: nop

    // 0x803F13B8: c.lt.s      $f8, $f22
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 22);
    c1cs = ctx->f8.fl < ctx->f22.fl;
    // 0x803F13BC: nop

    // 0x803F13C0: bc1t        L_803F148C
    if (c1cs) {
        // 0x803F13C4: nop
    
            goto L_803F148C;
    }
    // 0x803F13C4: nop

L_803F13C8:
    // 0x803F13C8: beq         $t8, $zero, L_803F140C
    if (ctx->r24 == 0) {
        // 0x803F13CC: andi        $t0, $s1, 0x40
        ctx->r8 = ctx->r17 & 0X40;
            goto L_803F140C;
    }
    // 0x803F13CC: andi        $t0, $s1, 0x40
    ctx->r8 = ctx->r17 & 0X40;
    // 0x803F13D0: lw          $t9, 0x0($s6)
    ctx->r25 = MEM_W(ctx->r22, 0X0);
    // 0x803F13D4: lwc1        $f12, 0x44($s0)
    ctx->f12.u32l = MEM_W(ctx->r16, 0X44);
    // 0x803F13D8: lwc1        $f10, 0x0($t9)
    ctx->f10.u32l = MEM_W(ctx->r25, 0X0);
    // 0x803F13DC: nop

    // 0x803F13E0: mul.s       $f16, $f12, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = MUL_S(ctx->f12.fl, ctx->f10.fl);
    // 0x803F13E4: c.lt.s      $f20, $f16
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f20.fl < ctx->f16.fl;
    // 0x803F13E8: nop

    // 0x803F13EC: bc1t        L_803F148C
    if (c1cs) {
        // 0x803F13F0: nop
    
            goto L_803F148C;
    }
    // 0x803F13F0: nop

    // 0x803F13F4: jal         0x80272AEC
    // 0x803F13F8: nop

    LOOKUP_FUNC(0x80272AEC)(rdram, ctx);
        goto after_1;
    // 0x803F13F8: nop

    after_1:
    // 0x803F13FC: c.lt.s      $f0, $f22
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 22);
    c1cs = ctx->f0.fl < ctx->f22.fl;
    // 0x803F1400: nop

    // 0x803F1404: bc1t        L_803F148C
    if (c1cs) {
        // 0x803F1408: andi        $t0, $s1, 0x40
        ctx->r8 = ctx->r17 & 0X40;
            goto L_803F148C;
    }
    // 0x803F1408: andi        $t0, $s1, 0x40
    ctx->r8 = ctx->r17 & 0X40;
L_803F140C:
    // 0x803F140C: beq         $t0, $zero, L_803F1450
    if (ctx->r8 == 0) {
        // 0x803F1410: andi        $t2, $s1, 0x1
        ctx->r10 = ctx->r17 & 0X1;
            goto L_803F1450;
    }
    // 0x803F1410: andi        $t2, $s1, 0x1
    ctx->r10 = ctx->r17 & 0X1;
    // 0x803F1414: lw          $t1, 0x0($s6)
    ctx->r9 = MEM_W(ctx->r22, 0X0);
    // 0x803F1418: lwc1        $f12, 0x44($s0)
    ctx->f12.u32l = MEM_W(ctx->r16, 0X44);
    // 0x803F141C: lwc1        $f18, 0x0($t1)
    ctx->f18.u32l = MEM_W(ctx->r9, 0X0);
    // 0x803F1420: nop

    // 0x803F1424: mul.s       $f4, $f12, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = MUL_S(ctx->f12.fl, ctx->f18.fl);
    // 0x803F1428: c.lt.s      $f4, $f20
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 20);
    c1cs = ctx->f4.fl < ctx->f20.fl;
    // 0x803F142C: nop

    // 0x803F1430: bc1t        L_803F148C
    if (c1cs) {
        // 0x803F1434: nop
    
            goto L_803F148C;
    }
    // 0x803F1434: nop

    // 0x803F1438: jal         0x80272AEC
    // 0x803F143C: nop

    LOOKUP_FUNC(0x80272AEC)(rdram, ctx);
        goto after_2;
    // 0x803F143C: nop

    after_2:
    // 0x803F1440: c.lt.s      $f0, $f22
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 22);
    c1cs = ctx->f0.fl < ctx->f22.fl;
    // 0x803F1444: nop

    // 0x803F1448: bc1t        L_803F148C
    if (c1cs) {
        // 0x803F144C: andi        $t2, $s1, 0x1
        ctx->r10 = ctx->r17 & 0X1;
            goto L_803F148C;
    }
    // 0x803F144C: andi        $t2, $s1, 0x1
    ctx->r10 = ctx->r17 & 0X1;
L_803F1450:
    // 0x803F1450: beq         $t2, $zero, L_803F1464
    if (ctx->r10 == 0) {
        // 0x803F1454: or          $a0, $s2, $zero
        ctx->r4 = ctx->r18 | 0;
            goto L_803F1464;
    }
    // 0x803F1454: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x803F1458: jal         0x803F15A8
    // 0x803F145C: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    ovl_803F0000_menu_func_803F15A8(rdram, ctx);
        goto after_3;
    // 0x803F145C: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_3:
    // 0x803F1460: bne         $v0, $zero, L_803F148C
    if (ctx->r2 != 0) {
        // 0x803F1464: andi        $t3, $s1, 0x2
        ctx->r11 = ctx->r17 & 0X2;
            goto L_803F148C;
    }
L_803F1464:
    // 0x803F1464: andi        $t3, $s1, 0x2
    ctx->r11 = ctx->r17 & 0X2;
    // 0x803F1468: beq         $t3, $zero, L_803F1478
    if (ctx->r11 == 0) {
        // 0x803F146C: andi        $t4, $s1, 0x4
        ctx->r12 = ctx->r17 & 0X4;
            goto L_803F1478;
    }
    // 0x803F146C: andi        $t4, $s1, 0x4
    ctx->r12 = ctx->r17 & 0X4;
    // 0x803F1470: b           L_803F14D0
    // 0x803F1474: or          $v0, $s0, $zero
    ctx->r2 = ctx->r16 | 0;
        goto L_803F14D0;
    // 0x803F1474: or          $v0, $s0, $zero
    ctx->r2 = ctx->r16 | 0;
L_803F1478:
    // 0x803F1478: beq         $t4, $zero, L_803F148C
    if (ctx->r12 == 0) {
        // 0x803F147C: sll         $t5, $s5, 2
        ctx->r13 = S32(ctx->r21 << 2);
            goto L_803F148C;
    }
    // 0x803F147C: sll         $t5, $s5, 2
    ctx->r13 = S32(ctx->r21 << 2);
    // 0x803F1480: addu        $t6, $sp, $t5
    ctx->r14 = ADD32(ctx->r29, ctx->r13);
    // 0x803F1484: sw          $s0, 0x5C($t6)
    MEM_W(0X5C, ctx->r14) = ctx->r16;
    // 0x803F1488: addiu       $s5, $s5, 0x1
    ctx->r21 = ADD32(ctx->r21, 0X1);
L_803F148C:
    // 0x803F148C: addiu       $s4, $s4, 0x1
    ctx->r20 = ADD32(ctx->r20, 0X1);
L_803F1490:
    // 0x803F1490: addiu       $at, $zero, 0xB
    ctx->r1 = ADD32(0, 0XB);
    // 0x803F1494: bne         $s4, $at, L_803F1224
    if (ctx->r20 != ctx->r1) {
        // 0x803F1498: addiu       $s3, $s3, 0x8
        ctx->r19 = ADD32(ctx->r19, 0X8);
            goto L_803F1224;
    }
    // 0x803F1498: addiu       $s3, $s3, 0x8
    ctx->r19 = ADD32(ctx->r19, 0X8);
    // 0x803F149C: andi        $v0, $s1, 0x4
    ctx->r2 = ctx->r17 & 0X4;
    // 0x803F14A0: beq         $v0, $zero, L_803F14D0
    if (ctx->r2 == 0) {
        // 0x803F14A4: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_803F14D0;
    }
    // 0x803F14A4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x803F14A8: beq         $s5, $zero, L_803F14D0
    if (ctx->r21 == 0) {
        // 0x803F14AC: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_803F14D0;
    }
    // 0x803F14AC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x803F14B0: jal         0x80059898
    // 0x803F14B4: or          $a0, $s5, $zero
    ctx->r4 = ctx->r21 | 0;
    func_80059898(rdram, ctx);
        goto after_4;
    // 0x803F14B4: or          $a0, $s5, $zero
    ctx->r4 = ctx->r21 | 0;
    after_4:
    // 0x803F14B8: sll         $t7, $v0, 2
    ctx->r15 = S32(ctx->r2 << 2);
    // 0x803F14BC: addu        $v0, $sp, $t7
    ctx->r2 = ADD32(ctx->r29, ctx->r15);
    // 0x803F14C0: lw          $v0, 0x5C($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X5C);
    // 0x803F14C4: b           L_803F14D4
    // 0x803F14C8: lw          $ra, 0x44($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X44);
        goto L_803F14D4;
    // 0x803F14C8: lw          $ra, 0x44($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X44);
    // 0x803F14CC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_803F14D0:
    // 0x803F14D0: lw          $ra, 0x44($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X44);
L_803F14D4:
    // 0x803F14D4: lwc1        $f21, 0x18($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X18);
    // 0x803F14D8: lwc1        $f20, 0x1C($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x803F14DC: lwc1        $f23, 0x20($sp)
    ctx->f_odd[(23 - 1) * 2] = MEM_W(ctx->r29, 0X20);
    // 0x803F14E0: lwc1        $f22, 0x24($sp)
    ctx->f22.u32l = MEM_W(ctx->r29, 0X24);
    // 0x803F14E4: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x803F14E8: lw          $s1, 0x2C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X2C);
    // 0x803F14EC: lw          $s2, 0x30($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X30);
    // 0x803F14F0: lw          $s3, 0x34($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X34);
    // 0x803F14F4: lw          $s4, 0x38($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X38);
    // 0x803F14F8: lw          $s5, 0x3C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X3C);
    // 0x803F14FC: lw          $s6, 0x40($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X40);
    // 0x803F1500: jr          $ra
    // 0x803F1504: addiu       $sp, $sp, 0xA0
    ctx->r29 = ADD32(ctx->r29, 0XA0);
    return;
    // 0x803F1504: addiu       $sp, $sp, 0xA0
    ctx->r29 = ADD32(ctx->r29, 0XA0);
;}
RECOMP_FUNC void ovl_803F0000_menu_func_803F1354(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
L_803F1224:
    // 0x803F1354: nop

    // 0x803F1358: bc1t        L_803F148C
    if (c1cs) {
        // 0x803F135C: andi        $t5, $s1, 0x8
        ctx->r13 = ctx->r17 & 0X8;
            goto L_803F148C;
    }
    // 0x803F135C: andi        $t5, $s1, 0x8
    ctx->r13 = ctx->r17 & 0X8;
    // 0x803F1360: beq         $t5, $zero, L_803F1380
    if (ctx->r13 == 0) {
        // 0x803F1364: lui         $at, 0x4220
        ctx->r1 = S32(0X4220 << 16);
            goto L_803F1380;
    }
    // 0x803F1364: lui         $at, 0x4220
    ctx->r1 = S32(0X4220 << 16);
    // 0x803F1368: lwc1        $f16, 0x84($s0)
    ctx->f16.u32l = MEM_W(ctx->r16, 0X84);
    // 0x803F136C: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x803F1370: nop

    // 0x803F1374: c.lt.s      $f16, $f18
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f16.fl < ctx->f18.fl;
    // 0x803F1378: nop

    // 0x803F137C: bc1t        L_803F148C
    if (c1cs) {
        // 0x803F1380: andi        $t6, $s1, 0x200
        ctx->r14 = ctx->r17 & 0X200;
            goto L_803F148C;
    }
L_803F1380:
    // 0x803F1380: andi        $t6, $s1, 0x200
    ctx->r14 = ctx->r17 & 0X200;
    // 0x803F1384: beq         $t6, $zero, L_803F13A4
    if (ctx->r14 == 0) {
        // 0x803F1388: lui         $at, 0x437A
        ctx->r1 = S32(0X437A << 16);
            goto L_803F13A4;
    }
    // 0x803F1388: lui         $at, 0x437A
    ctx->r1 = S32(0X437A << 16);
    // 0x803F138C: lwc1        $f4, 0x84($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X84);
    // 0x803F1390: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x803F1394: nop

    // 0x803F1398: c.lt.s      $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f4.fl < ctx->f6.fl;
    // 0x803F139C: nop

    // 0x803F13A0: bc1t        L_803F148C
    if (c1cs) {
        // 0x803F13A4: andi        $t7, $s1, 0x20
        ctx->r15 = ctx->r17 & 0X20;
            goto L_803F148C;
    }
L_803F13A4:
    // 0x803F13A4: andi        $t7, $s1, 0x20
    ctx->r15 = ctx->r17 & 0X20;
    // 0x803F13A8: beq         $t7, $zero, L_803F13C8
    if (ctx->r15 == 0) {
        // 0x803F13AC: andi        $t8, $s1, 0x10
        ctx->r24 = ctx->r17 & 0X10;
            goto L_803F13C8;
    }
    // 0x803F13AC: andi        $t8, $s1, 0x10
    ctx->r24 = ctx->r17 & 0X10;
    // 0x803F13B0: lwc1        $f8, 0x84($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X84);
    // 0x803F13B4: nop

    // 0x803F13B8: c.lt.s      $f8, $f22
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 22);
    c1cs = ctx->f8.fl < ctx->f22.fl;
    // 0x803F13BC: nop

    // 0x803F13C0: bc1t        L_803F148C
    if (c1cs) {
        // 0x803F13C4: nop
    
            goto L_803F148C;
    }
    // 0x803F13C4: nop

L_803F13C8:
    // 0x803F13C8: beq         $t8, $zero, L_803F140C
    if (ctx->r24 == 0) {
        // 0x803F13CC: andi        $t0, $s1, 0x40
        ctx->r8 = ctx->r17 & 0X40;
            goto L_803F140C;
    }
    // 0x803F13CC: andi        $t0, $s1, 0x40
    ctx->r8 = ctx->r17 & 0X40;
    // 0x803F13D0: lw          $t9, 0x0($s6)
    ctx->r25 = MEM_W(ctx->r22, 0X0);
    // 0x803F13D4: lwc1        $f12, 0x44($s0)
    ctx->f12.u32l = MEM_W(ctx->r16, 0X44);
    // 0x803F13D8: lwc1        $f10, 0x0($t9)
    ctx->f10.u32l = MEM_W(ctx->r25, 0X0);
    // 0x803F13DC: nop

    // 0x803F13E0: mul.s       $f16, $f12, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = MUL_S(ctx->f12.fl, ctx->f10.fl);
    // 0x803F13E4: c.lt.s      $f20, $f16
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f20.fl < ctx->f16.fl;
    // 0x803F13E8: nop

    // 0x803F13EC: bc1t        L_803F148C
    if (c1cs) {
        // 0x803F13F0: nop
    
            goto L_803F148C;
    }
    // 0x803F13F0: nop

    // 0x803F13F4: jal         0x80272AEC
    // 0x803F13F8: nop

    LOOKUP_FUNC(0x80272AEC)(rdram, ctx);
        goto after_0;
    // 0x803F13F8: nop

    after_0:
    // 0x803F13FC: c.lt.s      $f0, $f22
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 22);
    c1cs = ctx->f0.fl < ctx->f22.fl;
    // 0x803F1400: nop

    // 0x803F1404: bc1t        L_803F148C
    if (c1cs) {
        // 0x803F1408: andi        $t0, $s1, 0x40
        ctx->r8 = ctx->r17 & 0X40;
            goto L_803F148C;
    }
    // 0x803F1408: andi        $t0, $s1, 0x40
    ctx->r8 = ctx->r17 & 0X40;
L_803F140C:
    // 0x803F140C: beq         $t0, $zero, L_803F1450
    if (ctx->r8 == 0) {
        // 0x803F1410: andi        $t2, $s1, 0x1
        ctx->r10 = ctx->r17 & 0X1;
            goto L_803F1450;
    }
    // 0x803F1410: andi        $t2, $s1, 0x1
    ctx->r10 = ctx->r17 & 0X1;
    // 0x803F1414: lw          $t1, 0x0($s6)
    ctx->r9 = MEM_W(ctx->r22, 0X0);
    // 0x803F1418: lwc1        $f12, 0x44($s0)
    ctx->f12.u32l = MEM_W(ctx->r16, 0X44);
    // 0x803F141C: lwc1        $f18, 0x0($t1)
    ctx->f18.u32l = MEM_W(ctx->r9, 0X0);
    // 0x803F1420: nop

    // 0x803F1424: mul.s       $f4, $f12, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = MUL_S(ctx->f12.fl, ctx->f18.fl);
    // 0x803F1428: c.lt.s      $f4, $f20
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 20);
    c1cs = ctx->f4.fl < ctx->f20.fl;
    // 0x803F142C: nop

    // 0x803F1430: bc1t        L_803F148C
    if (c1cs) {
        // 0x803F1434: nop
    
            goto L_803F148C;
    }
    // 0x803F1434: nop

    // 0x803F1438: jal         0x80272AEC
    // 0x803F143C: nop

    LOOKUP_FUNC(0x80272AEC)(rdram, ctx);
        goto after_1;
    // 0x803F143C: nop

    after_1:
    // 0x803F1440: c.lt.s      $f0, $f22
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 22);
    c1cs = ctx->f0.fl < ctx->f22.fl;
    // 0x803F1444: nop

    // 0x803F1448: bc1t        L_803F148C
    if (c1cs) {
        // 0x803F144C: andi        $t2, $s1, 0x1
        ctx->r10 = ctx->r17 & 0X1;
            goto L_803F148C;
    }
    // 0x803F144C: andi        $t2, $s1, 0x1
    ctx->r10 = ctx->r17 & 0X1;
L_803F1450:
    // 0x803F1450: beq         $t2, $zero, L_803F1464
    if (ctx->r10 == 0) {
        // 0x803F1454: or          $a0, $s2, $zero
        ctx->r4 = ctx->r18 | 0;
            goto L_803F1464;
    }
    // 0x803F1454: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x803F1458: jal         0x803F15A8
    // 0x803F145C: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    ovl_803F0000_menu_func_803F15A8(rdram, ctx);
        goto after_2;
    // 0x803F145C: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_2:
    // 0x803F1460: bne         $v0, $zero, L_803F148C
    if (ctx->r2 != 0) {
        // 0x803F1464: andi        $t3, $s1, 0x2
        ctx->r11 = ctx->r17 & 0X2;
            goto L_803F148C;
    }
L_803F1464:
    // 0x803F1464: andi        $t3, $s1, 0x2
    ctx->r11 = ctx->r17 & 0X2;
    // 0x803F1468: beq         $t3, $zero, L_803F1478
    if (ctx->r11 == 0) {
        // 0x803F146C: andi        $t4, $s1, 0x4
        ctx->r12 = ctx->r17 & 0X4;
            goto L_803F1478;
    }
    // 0x803F146C: andi        $t4, $s1, 0x4
    ctx->r12 = ctx->r17 & 0X4;
    // 0x803F1470: b           L_803F14D0
    // 0x803F1474: or          $v0, $s0, $zero
    ctx->r2 = ctx->r16 | 0;
        goto L_803F14D0;
    // 0x803F1474: or          $v0, $s0, $zero
    ctx->r2 = ctx->r16 | 0;
L_803F1478:
    // 0x803F1478: beq         $t4, $zero, L_803F148C
    if (ctx->r12 == 0) {
        // 0x803F147C: sll         $t5, $s5, 2
        ctx->r13 = S32(ctx->r21 << 2);
            goto L_803F148C;
    }
    // 0x803F147C: sll         $t5, $s5, 2
    ctx->r13 = S32(ctx->r21 << 2);
    // 0x803F1480: addu        $t6, $sp, $t5
    ctx->r14 = ADD32(ctx->r29, ctx->r13);
    // 0x803F1484: sw          $s0, 0x5C($t6)
    MEM_W(0X5C, ctx->r14) = ctx->r16;
    // 0x803F1488: addiu       $s5, $s5, 0x1
    ctx->r21 = ADD32(ctx->r21, 0X1);
L_803F148C:
    // 0x803F148C: addiu       $s4, $s4, 0x1
    ctx->r20 = ADD32(ctx->r20, 0X1);
    // 0x803F1490: addiu       $at, $zero, 0xB
    ctx->r1 = ADD32(0, 0XB);
    // 0x803F1494: bne         $s4, $at, L_803F1224
    if (ctx->r20 != ctx->r1) {
            // 0x803F1498: addiu       $s3, $s3, 0x8
    ctx->r19 = ADD32(ctx->r19, 0X8);
    ovl_803F0000_menu_func_803F1224(rdram, ctx);
    return;
    }
    // 0x803F1498: addiu       $s3, $s3, 0x8
    ctx->r19 = ADD32(ctx->r19, 0X8);
    // 0x803F149C: andi        $v0, $s1, 0x4
    ctx->r2 = ctx->r17 & 0X4;
    // 0x803F14A0: beq         $v0, $zero, L_803F14D0
    if (ctx->r2 == 0) {
        // 0x803F14A4: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_803F14D0;
    }
    // 0x803F14A4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x803F14A8: beq         $s5, $zero, L_803F14D0
    if (ctx->r21 == 0) {
        // 0x803F14AC: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_803F14D0;
    }
    // 0x803F14AC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x803F14B0: jal         0x80059898
    // 0x803F14B4: or          $a0, $s5, $zero
    ctx->r4 = ctx->r21 | 0;
    func_80059898(rdram, ctx);
        goto after_3;
    // 0x803F14B4: or          $a0, $s5, $zero
    ctx->r4 = ctx->r21 | 0;
    after_3:
    // 0x803F14B8: sll         $t7, $v0, 2
    ctx->r15 = S32(ctx->r2 << 2);
    // 0x803F14BC: addu        $v0, $sp, $t7
    ctx->r2 = ADD32(ctx->r29, ctx->r15);
    // 0x803F14C0: lw          $v0, 0x5C($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X5C);
    // 0x803F14C4: b           L_803F14D4
    // 0x803F14C8: lw          $ra, 0x44($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X44);
        goto L_803F14D4;
    // 0x803F14C8: lw          $ra, 0x44($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X44);
    // 0x803F14CC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_803F14D0:
    // 0x803F14D0: lw          $ra, 0x44($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X44);
L_803F14D4:
    // 0x803F14D4: lwc1        $f21, 0x18($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X18);
    // 0x803F14D8: lwc1        $f20, 0x1C($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x803F14DC: lwc1        $f23, 0x20($sp)
    ctx->f_odd[(23 - 1) * 2] = MEM_W(ctx->r29, 0X20);
    // 0x803F14E0: lwc1        $f22, 0x24($sp)
    ctx->f22.u32l = MEM_W(ctx->r29, 0X24);
    // 0x803F14E4: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x803F14E8: lw          $s1, 0x2C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X2C);
    // 0x803F14EC: lw          $s2, 0x30($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X30);
    // 0x803F14F0: lw          $s3, 0x34($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X34);
    // 0x803F14F4: lw          $s4, 0x38($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X38);
    // 0x803F14F8: lw          $s5, 0x3C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X3C);
    // 0x803F14FC: lw          $s6, 0x40($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X40);
    // 0x803F1500: jr          $ra
    // 0x803F1504: addiu       $sp, $sp, 0xA0
    ctx->r29 = ADD32(ctx->r29, 0XA0);
    return;
    // 0x803F1504: addiu       $sp, $sp, 0xA0
    ctx->r29 = ADD32(ctx->r29, 0XA0);
;}
RECOMP_FUNC void ovl_803F0000_menu_func_803F13C0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
L_803F1224:
    // 0x803F13C0: bc1t        L_803F148C
    if (c1cs) {
        // 0x803F13C4: nop
    
            goto L_803F148C;
    }
    // 0x803F13C4: nop

    // 0x803F13C8: beq         $t8, $zero, L_803F140C
    if (ctx->r24 == 0) {
        // 0x803F13CC: andi        $t0, $s1, 0x40
        ctx->r8 = ctx->r17 & 0X40;
            goto L_803F140C;
    }
    // 0x803F13CC: andi        $t0, $s1, 0x40
    ctx->r8 = ctx->r17 & 0X40;
    // 0x803F13D0: lw          $t9, 0x0($s6)
    ctx->r25 = MEM_W(ctx->r22, 0X0);
    // 0x803F13D4: lwc1        $f12, 0x44($s0)
    ctx->f12.u32l = MEM_W(ctx->r16, 0X44);
    // 0x803F13D8: lwc1        $f10, 0x0($t9)
    ctx->f10.u32l = MEM_W(ctx->r25, 0X0);
    // 0x803F13DC: nop

    // 0x803F13E0: mul.s       $f16, $f12, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = MUL_S(ctx->f12.fl, ctx->f10.fl);
    // 0x803F13E4: c.lt.s      $f20, $f16
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f20.fl < ctx->f16.fl;
    // 0x803F13E8: nop

    // 0x803F13EC: bc1t        L_803F148C
    if (c1cs) {
        // 0x803F13F0: nop
    
            goto L_803F148C;
    }
    // 0x803F13F0: nop

    // 0x803F13F4: jal         0x80272AEC
    // 0x803F13F8: nop

    LOOKUP_FUNC(0x80272AEC)(rdram, ctx);
        goto after_0;
    // 0x803F13F8: nop

    after_0:
    // 0x803F13FC: c.lt.s      $f0, $f22
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 22);
    c1cs = ctx->f0.fl < ctx->f22.fl;
    // 0x803F1400: nop

    // 0x803F1404: bc1t        L_803F148C
    if (c1cs) {
        // 0x803F1408: andi        $t0, $s1, 0x40
        ctx->r8 = ctx->r17 & 0X40;
            goto L_803F148C;
    }
    // 0x803F1408: andi        $t0, $s1, 0x40
    ctx->r8 = ctx->r17 & 0X40;
L_803F140C:
    // 0x803F140C: beq         $t0, $zero, L_803F1450
    if (ctx->r8 == 0) {
        // 0x803F1410: andi        $t2, $s1, 0x1
        ctx->r10 = ctx->r17 & 0X1;
            goto L_803F1450;
    }
    // 0x803F1410: andi        $t2, $s1, 0x1
    ctx->r10 = ctx->r17 & 0X1;
    // 0x803F1414: lw          $t1, 0x0($s6)
    ctx->r9 = MEM_W(ctx->r22, 0X0);
    // 0x803F1418: lwc1        $f12, 0x44($s0)
    ctx->f12.u32l = MEM_W(ctx->r16, 0X44);
    // 0x803F141C: lwc1        $f18, 0x0($t1)
    ctx->f18.u32l = MEM_W(ctx->r9, 0X0);
    // 0x803F1420: nop

    // 0x803F1424: mul.s       $f4, $f12, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = MUL_S(ctx->f12.fl, ctx->f18.fl);
    // 0x803F1428: c.lt.s      $f4, $f20
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 20);
    c1cs = ctx->f4.fl < ctx->f20.fl;
    // 0x803F142C: nop

    // 0x803F1430: bc1t        L_803F148C
    if (c1cs) {
        // 0x803F1434: nop
    
            goto L_803F148C;
    }
    // 0x803F1434: nop

    // 0x803F1438: jal         0x80272AEC
    // 0x803F143C: nop

    LOOKUP_FUNC(0x80272AEC)(rdram, ctx);
        goto after_1;
    // 0x803F143C: nop

    after_1:
    // 0x803F1440: c.lt.s      $f0, $f22
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 22);
    c1cs = ctx->f0.fl < ctx->f22.fl;
    // 0x803F1444: nop

    // 0x803F1448: bc1t        L_803F148C
    if (c1cs) {
        // 0x803F144C: andi        $t2, $s1, 0x1
        ctx->r10 = ctx->r17 & 0X1;
            goto L_803F148C;
    }
    // 0x803F144C: andi        $t2, $s1, 0x1
    ctx->r10 = ctx->r17 & 0X1;
L_803F1450:
    // 0x803F1450: beq         $t2, $zero, L_803F1464
    if (ctx->r10 == 0) {
        // 0x803F1454: or          $a0, $s2, $zero
        ctx->r4 = ctx->r18 | 0;
            goto L_803F1464;
    }
    // 0x803F1454: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x803F1458: jal         0x803F15A8
    // 0x803F145C: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    ovl_803F0000_menu_func_803F15A8(rdram, ctx);
        goto after_2;
    // 0x803F145C: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_2:
    // 0x803F1460: bne         $v0, $zero, L_803F148C
    if (ctx->r2 != 0) {
        // 0x803F1464: andi        $t3, $s1, 0x2
        ctx->r11 = ctx->r17 & 0X2;
            goto L_803F148C;
    }
L_803F1464:
    // 0x803F1464: andi        $t3, $s1, 0x2
    ctx->r11 = ctx->r17 & 0X2;
    // 0x803F1468: beq         $t3, $zero, L_803F1478
    if (ctx->r11 == 0) {
        // 0x803F146C: andi        $t4, $s1, 0x4
        ctx->r12 = ctx->r17 & 0X4;
            goto L_803F1478;
    }
    // 0x803F146C: andi        $t4, $s1, 0x4
    ctx->r12 = ctx->r17 & 0X4;
    // 0x803F1470: b           L_803F14D0
    // 0x803F1474: or          $v0, $s0, $zero
    ctx->r2 = ctx->r16 | 0;
        goto L_803F14D0;
    // 0x803F1474: or          $v0, $s0, $zero
    ctx->r2 = ctx->r16 | 0;
L_803F1478:
    // 0x803F1478: beq         $t4, $zero, L_803F148C
    if (ctx->r12 == 0) {
        // 0x803F147C: sll         $t5, $s5, 2
        ctx->r13 = S32(ctx->r21 << 2);
            goto L_803F148C;
    }
    // 0x803F147C: sll         $t5, $s5, 2
    ctx->r13 = S32(ctx->r21 << 2);
    // 0x803F1480: addu        $t6, $sp, $t5
    ctx->r14 = ADD32(ctx->r29, ctx->r13);
    // 0x803F1484: sw          $s0, 0x5C($t6)
    MEM_W(0X5C, ctx->r14) = ctx->r16;
    // 0x803F1488: addiu       $s5, $s5, 0x1
    ctx->r21 = ADD32(ctx->r21, 0X1);
L_803F148C:
    // 0x803F148C: addiu       $s4, $s4, 0x1
    ctx->r20 = ADD32(ctx->r20, 0X1);
    // 0x803F1490: addiu       $at, $zero, 0xB
    ctx->r1 = ADD32(0, 0XB);
    // 0x803F1494: bne         $s4, $at, L_803F1224
    if (ctx->r20 != ctx->r1) {
            // 0x803F1498: addiu       $s3, $s3, 0x8
    ctx->r19 = ADD32(ctx->r19, 0X8);
    ovl_803F0000_menu_func_803F1224(rdram, ctx);
    return;
    }
    // 0x803F1498: addiu       $s3, $s3, 0x8
    ctx->r19 = ADD32(ctx->r19, 0X8);
    // 0x803F149C: andi        $v0, $s1, 0x4
    ctx->r2 = ctx->r17 & 0X4;
    // 0x803F14A0: beq         $v0, $zero, L_803F14D0
    if (ctx->r2 == 0) {
        // 0x803F14A4: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_803F14D0;
    }
    // 0x803F14A4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x803F14A8: beq         $s5, $zero, L_803F14D0
    if (ctx->r21 == 0) {
        // 0x803F14AC: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_803F14D0;
    }
    // 0x803F14AC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x803F14B0: jal         0x80059898
    // 0x803F14B4: or          $a0, $s5, $zero
    ctx->r4 = ctx->r21 | 0;
    func_80059898(rdram, ctx);
        goto after_3;
    // 0x803F14B4: or          $a0, $s5, $zero
    ctx->r4 = ctx->r21 | 0;
    after_3:
    // 0x803F14B8: sll         $t7, $v0, 2
    ctx->r15 = S32(ctx->r2 << 2);
    // 0x803F14BC: addu        $v0, $sp, $t7
    ctx->r2 = ADD32(ctx->r29, ctx->r15);
    // 0x803F14C0: lw          $v0, 0x5C($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X5C);
    // 0x803F14C4: b           L_803F14D4
    // 0x803F14C8: lw          $ra, 0x44($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X44);
        goto L_803F14D4;
    // 0x803F14C8: lw          $ra, 0x44($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X44);
    // 0x803F14CC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_803F14D0:
    // 0x803F14D0: lw          $ra, 0x44($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X44);
L_803F14D4:
    // 0x803F14D4: lwc1        $f21, 0x18($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X18);
    // 0x803F14D8: lwc1        $f20, 0x1C($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x803F14DC: lwc1        $f23, 0x20($sp)
    ctx->f_odd[(23 - 1) * 2] = MEM_W(ctx->r29, 0X20);
    // 0x803F14E0: lwc1        $f22, 0x24($sp)
    ctx->f22.u32l = MEM_W(ctx->r29, 0X24);
    // 0x803F14E4: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x803F14E8: lw          $s1, 0x2C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X2C);
    // 0x803F14EC: lw          $s2, 0x30($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X30);
    // 0x803F14F0: lw          $s3, 0x34($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X34);
    // 0x803F14F4: lw          $s4, 0x38($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X38);
    // 0x803F14F8: lw          $s5, 0x3C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X3C);
    // 0x803F14FC: lw          $s6, 0x40($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X40);
    // 0x803F1500: jr          $ra
    // 0x803F1504: addiu       $sp, $sp, 0xA0
    ctx->r29 = ADD32(ctx->r29, 0XA0);
    return;
    // 0x803F1504: addiu       $sp, $sp, 0xA0
    ctx->r29 = ADD32(ctx->r29, 0XA0);
;}
RECOMP_FUNC void ovl_803F0000_menu_func_803F13F0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
L_803F1224:
    // 0x803F13F0: nop

    // 0x803F13F4: jal         0x80272AEC
    // 0x803F13F8: nop

    LOOKUP_FUNC(0x80272AEC)(rdram, ctx);
        goto after_0;
    // 0x803F13F8: nop

    after_0:
    // 0x803F13FC: c.lt.s      $f0, $f22
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 22);
    c1cs = ctx->f0.fl < ctx->f22.fl;
    // 0x803F1400: nop

    // 0x803F1404: bc1t        L_803F148C
    if (c1cs) {
        // 0x803F1408: andi        $t0, $s1, 0x40
        ctx->r8 = ctx->r17 & 0X40;
            goto L_803F148C;
    }
    // 0x803F1408: andi        $t0, $s1, 0x40
    ctx->r8 = ctx->r17 & 0X40;
    // 0x803F140C: beq         $t0, $zero, L_803F1450
    if (ctx->r8 == 0) {
        // 0x803F1410: andi        $t2, $s1, 0x1
        ctx->r10 = ctx->r17 & 0X1;
            goto L_803F1450;
    }
    // 0x803F1410: andi        $t2, $s1, 0x1
    ctx->r10 = ctx->r17 & 0X1;
    // 0x803F1414: lw          $t1, 0x0($s6)
    ctx->r9 = MEM_W(ctx->r22, 0X0);
    // 0x803F1418: lwc1        $f12, 0x44($s0)
    ctx->f12.u32l = MEM_W(ctx->r16, 0X44);
    // 0x803F141C: lwc1        $f18, 0x0($t1)
    ctx->f18.u32l = MEM_W(ctx->r9, 0X0);
    // 0x803F1420: nop

    // 0x803F1424: mul.s       $f4, $f12, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = MUL_S(ctx->f12.fl, ctx->f18.fl);
    // 0x803F1428: c.lt.s      $f4, $f20
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 20);
    c1cs = ctx->f4.fl < ctx->f20.fl;
    // 0x803F142C: nop

    // 0x803F1430: bc1t        L_803F148C
    if (c1cs) {
        // 0x803F1434: nop
    
            goto L_803F148C;
    }
    // 0x803F1434: nop

    // 0x803F1438: jal         0x80272AEC
    // 0x803F143C: nop

    LOOKUP_FUNC(0x80272AEC)(rdram, ctx);
        goto after_1;
    // 0x803F143C: nop

    after_1:
    // 0x803F1440: c.lt.s      $f0, $f22
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 22);
    c1cs = ctx->f0.fl < ctx->f22.fl;
    // 0x803F1444: nop

    // 0x803F1448: bc1t        L_803F148C
    if (c1cs) {
        // 0x803F144C: andi        $t2, $s1, 0x1
        ctx->r10 = ctx->r17 & 0X1;
            goto L_803F148C;
    }
    // 0x803F144C: andi        $t2, $s1, 0x1
    ctx->r10 = ctx->r17 & 0X1;
L_803F1450:
    // 0x803F1450: beq         $t2, $zero, L_803F1464
    if (ctx->r10 == 0) {
        // 0x803F1454: or          $a0, $s2, $zero
        ctx->r4 = ctx->r18 | 0;
            goto L_803F1464;
    }
    // 0x803F1454: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x803F1458: jal         0x803F15A8
    // 0x803F145C: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    ovl_803F0000_menu_func_803F15A8(rdram, ctx);
        goto after_2;
    // 0x803F145C: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_2:
    // 0x803F1460: bne         $v0, $zero, L_803F148C
    if (ctx->r2 != 0) {
        // 0x803F1464: andi        $t3, $s1, 0x2
        ctx->r11 = ctx->r17 & 0X2;
            goto L_803F148C;
    }
L_803F1464:
    // 0x803F1464: andi        $t3, $s1, 0x2
    ctx->r11 = ctx->r17 & 0X2;
    // 0x803F1468: beq         $t3, $zero, L_803F1478
    if (ctx->r11 == 0) {
        // 0x803F146C: andi        $t4, $s1, 0x4
        ctx->r12 = ctx->r17 & 0X4;
            goto L_803F1478;
    }
    // 0x803F146C: andi        $t4, $s1, 0x4
    ctx->r12 = ctx->r17 & 0X4;
    // 0x803F1470: b           L_803F14D0
    // 0x803F1474: or          $v0, $s0, $zero
    ctx->r2 = ctx->r16 | 0;
        goto L_803F14D0;
    // 0x803F1474: or          $v0, $s0, $zero
    ctx->r2 = ctx->r16 | 0;
L_803F1478:
    // 0x803F1478: beq         $t4, $zero, L_803F148C
    if (ctx->r12 == 0) {
        // 0x803F147C: sll         $t5, $s5, 2
        ctx->r13 = S32(ctx->r21 << 2);
            goto L_803F148C;
    }
    // 0x803F147C: sll         $t5, $s5, 2
    ctx->r13 = S32(ctx->r21 << 2);
    // 0x803F1480: addu        $t6, $sp, $t5
    ctx->r14 = ADD32(ctx->r29, ctx->r13);
    // 0x803F1484: sw          $s0, 0x5C($t6)
    MEM_W(0X5C, ctx->r14) = ctx->r16;
    // 0x803F1488: addiu       $s5, $s5, 0x1
    ctx->r21 = ADD32(ctx->r21, 0X1);
L_803F148C:
    // 0x803F148C: addiu       $s4, $s4, 0x1
    ctx->r20 = ADD32(ctx->r20, 0X1);
    // 0x803F1490: addiu       $at, $zero, 0xB
    ctx->r1 = ADD32(0, 0XB);
    // 0x803F1494: bne         $s4, $at, L_803F1224
    if (ctx->r20 != ctx->r1) {
            // 0x803F1498: addiu       $s3, $s3, 0x8
    ctx->r19 = ADD32(ctx->r19, 0X8);
    ovl_803F0000_menu_func_803F1224(rdram, ctx);
    return;
    }
    // 0x803F1498: addiu       $s3, $s3, 0x8
    ctx->r19 = ADD32(ctx->r19, 0X8);
    // 0x803F149C: andi        $v0, $s1, 0x4
    ctx->r2 = ctx->r17 & 0X4;
    // 0x803F14A0: beq         $v0, $zero, L_803F14D0
    if (ctx->r2 == 0) {
        // 0x803F14A4: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_803F14D0;
    }
    // 0x803F14A4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x803F14A8: beq         $s5, $zero, L_803F14D0
    if (ctx->r21 == 0) {
        // 0x803F14AC: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_803F14D0;
    }
    // 0x803F14AC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x803F14B0: jal         0x80059898
    // 0x803F14B4: or          $a0, $s5, $zero
    ctx->r4 = ctx->r21 | 0;
    func_80059898(rdram, ctx);
        goto after_3;
    // 0x803F14B4: or          $a0, $s5, $zero
    ctx->r4 = ctx->r21 | 0;
    after_3:
    // 0x803F14B8: sll         $t7, $v0, 2
    ctx->r15 = S32(ctx->r2 << 2);
    // 0x803F14BC: addu        $v0, $sp, $t7
    ctx->r2 = ADD32(ctx->r29, ctx->r15);
    // 0x803F14C0: lw          $v0, 0x5C($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X5C);
    // 0x803F14C4: b           L_803F14D4
    // 0x803F14C8: lw          $ra, 0x44($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X44);
        goto L_803F14D4;
    // 0x803F14C8: lw          $ra, 0x44($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X44);
    // 0x803F14CC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_803F14D0:
    // 0x803F14D0: lw          $ra, 0x44($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X44);
L_803F14D4:
    // 0x803F14D4: lwc1        $f21, 0x18($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X18);
    // 0x803F14D8: lwc1        $f20, 0x1C($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x803F14DC: lwc1        $f23, 0x20($sp)
    ctx->f_odd[(23 - 1) * 2] = MEM_W(ctx->r29, 0X20);
    // 0x803F14E0: lwc1        $f22, 0x24($sp)
    ctx->f22.u32l = MEM_W(ctx->r29, 0X24);
    // 0x803F14E4: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x803F14E8: lw          $s1, 0x2C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X2C);
    // 0x803F14EC: lw          $s2, 0x30($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X30);
    // 0x803F14F0: lw          $s3, 0x34($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X34);
    // 0x803F14F4: lw          $s4, 0x38($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X38);
    // 0x803F14F8: lw          $s5, 0x3C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X3C);
    // 0x803F14FC: lw          $s6, 0x40($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X40);
    // 0x803F1500: jr          $ra
    // 0x803F1504: addiu       $sp, $sp, 0xA0
    ctx->r29 = ADD32(ctx->r29, 0XA0);
    return;
    // 0x803F1504: addiu       $sp, $sp, 0xA0
    ctx->r29 = ADD32(ctx->r29, 0XA0);
;}
RECOMP_FUNC void ovl_803F0000_menu_func_803F1508(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803F1508: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x803F150C: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x803F1510: or          $s3, $a0, $zero
    ctx->r19 = ctx->r4 | 0;
    // 0x803F1514: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x803F1518: sw          $s4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r20;
    // 0x803F151C: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x803F1520: or          $s2, $a2, $zero
    ctx->r18 = ctx->r6 | 0;
    // 0x803F1524: or          $s4, $a1, $zero
    ctx->r20 = ctx->r5 | 0;
    // 0x803F1528: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x803F152C: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x803F1530: jal         0x80059898
    // 0x803F1534: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    func_80059898(rdram, ctx);
        goto after_0;
    // 0x803F1534: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    after_0:
    // 0x803F1538: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x803F153C: beq         $s2, $zero, L_803F1584
    if (ctx->r18 == 0) {
        // 0x803F1540: or          $s1, $zero, $zero
        ctx->r17 = 0 | 0;
            goto L_803F1584;
    }
    // 0x803F1540: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    // 0x803F1544: sll         $t6, $s0, 2
    ctx->r14 = S32(ctx->r16 << 2);
L_803F1548:
    // 0x803F1548: addu        $v0, $s4, $t6
    ctx->r2 = ADD32(ctx->r20, ctx->r14);
    // 0x803F154C: lhu         $a1, 0x0($v0)
    ctx->r5 = MEM_HU(ctx->r2, 0X0);
    // 0x803F1550: lhu         $a2, 0x2($v0)
    ctx->r6 = MEM_HU(ctx->r2, 0X2);
    // 0x803F1554: jal         0x803F11B4
    // 0x803F1558: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    ovl_803F0000_menu_func_803F11B4(rdram, ctx);
        goto after_1;
    // 0x803F1558: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    after_1:
    // 0x803F155C: beq         $v0, $zero, L_803F156C
    if (ctx->r2 == 0) {
        // 0x803F1560: addiu       $s0, $s0, 0x1
        ctx->r16 = ADD32(ctx->r16, 0X1);
            goto L_803F156C;
    }
    // 0x803F1560: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x803F1564: b           L_803F158C
    // 0x803F1568: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
        goto L_803F158C;
    // 0x803F1568: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
L_803F156C:
    // 0x803F156C: sltu        $at, $s0, $s2
    ctx->r1 = ctx->r16 < ctx->r18 ? 1 : 0;
    // 0x803F1570: bne         $at, $zero, L_803F157C
    if (ctx->r1 != 0) {
        // 0x803F1574: addiu       $s1, $s1, 0x1
        ctx->r17 = ADD32(ctx->r17, 0X1);
            goto L_803F157C;
    }
    // 0x803F1574: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x803F1578: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
L_803F157C:
    // 0x803F157C: bne         $s1, $s2, L_803F1548
    if (ctx->r17 != ctx->r18) {
        // 0x803F1580: sll         $t6, $s0, 2
        ctx->r14 = S32(ctx->r16 << 2);
            goto L_803F1548;
    }
    // 0x803F1580: sll         $t6, $s0, 2
    ctx->r14 = S32(ctx->r16 << 2);
L_803F1584:
    // 0x803F1584: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x803F1588: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
L_803F158C:
    // 0x803F158C: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x803F1590: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x803F1594: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x803F1598: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x803F159C: lw          $s4, 0x28($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X28);
    // 0x803F15A0: jr          $ra
    // 0x803F15A4: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x803F15A4: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void ovl_803F0000_menu_func_803F1548(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
L_803F1548:
    // 0x803F1548: addu        $v0, $s4, $t6
    ctx->r2 = ADD32(ctx->r20, ctx->r14);
    // 0x803F154C: lhu         $a1, 0x0($v0)
    ctx->r5 = MEM_HU(ctx->r2, 0X0);
    // 0x803F1550: lhu         $a2, 0x2($v0)
    ctx->r6 = MEM_HU(ctx->r2, 0X2);
    // 0x803F1554: jal         0x803F11B4
    // 0x803F1558: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    ovl_803F0000_menu_func_803F11B4(rdram, ctx);
        goto after_0;
    // 0x803F1558: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    after_0:
    // 0x803F155C: beq         $v0, $zero, L_803F156C
    if (ctx->r2 == 0) {
        // 0x803F1560: addiu       $s0, $s0, 0x1
        ctx->r16 = ADD32(ctx->r16, 0X1);
            goto L_803F156C;
    }
    // 0x803F1560: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x803F1564: b           L_803F158C
    // 0x803F1568: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
        goto L_803F158C;
    // 0x803F1568: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
L_803F156C:
    // 0x803F156C: sltu        $at, $s0, $s2
    ctx->r1 = ctx->r16 < ctx->r18 ? 1 : 0;
    // 0x803F1570: bne         $at, $zero, L_803F157C
    if (ctx->r1 != 0) {
        // 0x803F1574: addiu       $s1, $s1, 0x1
        ctx->r17 = ADD32(ctx->r17, 0X1);
            goto L_803F157C;
    }
    // 0x803F1574: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x803F1578: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
L_803F157C:
    // 0x803F157C: bne         $s1, $s2, L_803F1548
    if (ctx->r17 != ctx->r18) {
        // 0x803F1580: sll         $t6, $s0, 2
        ctx->r14 = S32(ctx->r16 << 2);
            goto L_803F1548;
    }
    // 0x803F1580: sll         $t6, $s0, 2
    ctx->r14 = S32(ctx->r16 << 2);
    // 0x803F1584: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x803F1588: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
L_803F158C:
    // 0x803F158C: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x803F1590: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x803F1594: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x803F1598: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x803F159C: lw          $s4, 0x28($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X28);
    // 0x803F15A0: jr          $ra
    // 0x803F15A4: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x803F15A4: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void ovl_803F0000_menu_func_803F1560(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
L_803F1548:
    // 0x803F1560: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x803F1564: b           L_803F158C
    // 0x803F1568: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
        goto L_803F158C;
    // 0x803F1568: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x803F156C: sltu        $at, $s0, $s2
    ctx->r1 = ctx->r16 < ctx->r18 ? 1 : 0;
    // 0x803F1570: bne         $at, $zero, L_803F157C
    if (ctx->r1 != 0) {
        // 0x803F1574: addiu       $s1, $s1, 0x1
        ctx->r17 = ADD32(ctx->r17, 0X1);
            goto L_803F157C;
    }
    // 0x803F1574: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x803F1578: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
L_803F157C:
    // 0x803F157C: bne         $s1, $s2, L_803F1548
    if (ctx->r17 != ctx->r18) {
            // 0x803F1580: sll         $t6, $s0, 2
    ctx->r14 = S32(ctx->r16 << 2);
    ovl_803F0000_menu_func_803F1548(rdram, ctx);
    return;
    }
    // 0x803F1580: sll         $t6, $s0, 2
    ctx->r14 = S32(ctx->r16 << 2);
    // 0x803F1584: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x803F1588: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
L_803F158C:
    // 0x803F158C: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x803F1590: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x803F1594: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x803F1598: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x803F159C: lw          $s4, 0x28($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X28);
    // 0x803F15A0: jr          $ra
    // 0x803F15A4: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x803F15A4: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void ovl_803F0000_menu_func_803F1568(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
L_803F1548:
    // 0x803F1568: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x803F156C: sltu        $at, $s0, $s2
    ctx->r1 = ctx->r16 < ctx->r18 ? 1 : 0;
    // 0x803F1570: bne         $at, $zero, L_803F157C
    if (ctx->r1 != 0) {
        // 0x803F1574: addiu       $s1, $s1, 0x1
        ctx->r17 = ADD32(ctx->r17, 0X1);
            goto L_803F157C;
    }
    // 0x803F1574: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x803F1578: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
L_803F157C:
    // 0x803F157C: bne         $s1, $s2, L_803F1548
    if (ctx->r17 != ctx->r18) {
            // 0x803F1580: sll         $t6, $s0, 2
    ctx->r14 = S32(ctx->r16 << 2);
    ovl_803F0000_menu_func_803F1548(rdram, ctx);
    return;
    }
    // 0x803F1580: sll         $t6, $s0, 2
    ctx->r14 = S32(ctx->r16 << 2);
    // 0x803F1584: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x803F1588: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x803F158C: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x803F1590: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x803F1594: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x803F1598: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x803F159C: lw          $s4, 0x28($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X28);
    // 0x803F15A0: jr          $ra
    // 0x803F15A4: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x803F15A4: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void ovl_803F0000_menu_func_803F15A8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803F15A8: addiu       $sp, $sp, -0x50
    ctx->r29 = ADD32(ctx->r29, -0X50);
    // 0x803F15AC: swc1        $f28, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f28.u32l;
    // 0x803F15B0: lui         $at, 0x4170
    ctx->r1 = S32(0X4170 << 16);
    // 0x803F15B4: mtc1        $at, $f28
    ctx->f28.u32l = ctx->r1;
    // 0x803F15B8: swc1        $f26, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f26.u32l;
    // 0x803F15BC: lui         $at, 0x4361
    ctx->r1 = S32(0X4361 << 16);
    // 0x803F15C0: mtc1        $at, $f26
    ctx->f26.u32l = ctx->r1;
    // 0x803F15C4: swc1        $f24, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f24.u32l;
    // 0x803F15C8: lui         $at, 0x4180
    ctx->r1 = S32(0X4180 << 16);
    // 0x803F15CC: sw          $ra, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r31;
    // 0x803F15D0: sw          $s3, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r19;
    // 0x803F15D4: sw          $s2, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r18;
    // 0x803F15D8: sw          $s1, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r17;
    // 0x803F15DC: sw          $s0, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r16;
    // 0x803F15E0: swc1        $f29, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f_odd[(29 - 1) * 2];
    // 0x803F15E4: swc1        $f27, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f_odd[(27 - 1) * 2];
    // 0x803F15E8: swc1        $f25, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f_odd[(25 - 1) * 2];
    // 0x803F15EC: swc1        $f23, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f_odd[(23 - 1) * 2];
    // 0x803F15F0: swc1        $f22, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f22.u32l;
    // 0x803F15F4: swc1        $f21, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x803F15F8: swc1        $f20, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f20.u32l;
    // 0x803F15FC: mtc1        $at, $f24
    ctx->f24.u32l = ctx->r1;
    // 0x803F1600: lw          $t6, 0xC8($a0)
    ctx->r14 = MEM_W(ctx->r4, 0XC8);
    // 0x803F1604: lui         $at, 0x803F
    ctx->r1 = S32(0X803F << 16);
    // 0x803F1608: lwc1        $f23, 0x7C00($at)
    ctx->f_odd[(23 - 1) * 2] = MEM_W(ctx->r1, 0X7C00);
    // 0x803F160C: lwc1        $f22, 0x7C04($at)
    ctx->f22.u32l = MEM_W(ctx->r1, 0X7C04);
    // 0x803F1610: lw          $s0, 0x1C($t6)
    ctx->r16 = MEM_W(ctx->r14, 0X1C);
    // 0x803F1614: or          $s2, $a1, $zero
    ctx->r18 = ctx->r5 | 0;
    // 0x803F1618: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    // 0x803F161C: addiu       $s3, $zero, 0xB
    ctx->r19 = ADD32(0, 0XB);
L_803F1620:
    // 0x803F1620: lwc1        $f4, 0x84($s2)
    ctx->f4.u32l = MEM_W(ctx->r18, 0X84);
    // 0x803F1624: lwc1        $f6, 0x84($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X84);
    // 0x803F1628: nop

    // 0x803F162C: c.lt.s      $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f4.fl < ctx->f6.fl;
    // 0x803F1630: nop

    // 0x803F1634: bc1t        L_803F16B8
    if (c1cs) {
        // 0x803F1638: nop
    
            goto L_803F16B8;
    }
    // 0x803F1638: nop

    // 0x803F163C: lwc1        $f12, 0x88($s2)
    ctx->f12.u32l = MEM_W(ctx->r18, 0X88);
    // 0x803F1640: lwc1        $f14, 0x88($s0)
    ctx->f14.u32l = MEM_W(ctx->r16, 0X88);
    // 0x803F1644: jal         0x80279308
    // 0x803F1648: nop

    LOOKUP_FUNC(0x80279308)(rdram, ctx);
        goto after_0;
    // 0x803F1648: nop

    after_0:
    // 0x803F164C: cvt.d.s     $f8, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f8.d = CVT_D_S(ctx->f0.fl);
    // 0x803F1650: c.lt.d      $f22, $f8
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f22.d < ctx->f8.d;
    // 0x803F1654: mov.s       $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    ctx->f20.fl = ctx->f0.fl;
    // 0x803F1658: bc1t        L_803F16B8
    if (c1cs) {
        // 0x803F165C: nop
    
            goto L_803F16B8;
    }
    // 0x803F165C: nop

    // 0x803F1660: lwc1        $f0, 0x84($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X84);
    // 0x803F1664: nop

    // 0x803F1668: c.lt.s      $f0, $f24
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 24);
    c1cs = ctx->f0.fl < ctx->f24.fl;
    // 0x803F166C: nop

    // 0x803F1670: bc1f        L_803F1680
    if (!c1cs) {
        // 0x803F1674: nop
    
            goto L_803F1680;
    }
    // 0x803F1674: nop

    // 0x803F1678: b           L_803F16C8
    // 0x803F167C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_803F16C8;
    // 0x803F167C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_803F1680:
    // 0x803F1680: mul.s       $f10, $f0, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f10.fl = MUL_S(ctx->f0.fl, ctx->f0.fl);
    // 0x803F1684: jal         0x8007FA40
    // 0x803F1688: sub.s       $f12, $f10, $f26
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 26);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f26.fl); 
    ctx->f12.fl = ctx->f10.fl - ctx->f26.fl;
    func_8007FA40(rdram, ctx);
        goto after_1;
    // 0x803F1688: sub.s       $f12, $f10, $f26
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 26);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f26.fl); 
    ctx->f12.fl = ctx->f10.fl - ctx->f26.fl;
    after_1:
    // 0x803F168C: mov.s       $f12, $f28
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 28);
    ctx->f12.fl = ctx->f28.fl;
    // 0x803F1690: jal         0x8001C5D0
    // 0x803F1694: mov.s       $f14, $f0
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    ctx->f14.fl = ctx->f0.fl;
    func_8001C5D0(rdram, ctx);
        goto after_2;
    // 0x803F1694: mov.s       $f14, $f0
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    ctx->f14.fl = ctx->f0.fl;
    after_2:
    // 0x803F1698: jal         0x80272AEC
    // 0x803F169C: mov.s       $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    ctx->f12.fl = ctx->f0.fl;
    LOOKUP_FUNC(0x80272AEC)(rdram, ctx);
        goto after_3;
    // 0x803F169C: mov.s       $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    ctx->f12.fl = ctx->f0.fl;
    after_3:
    // 0x803F16A0: c.lt.s      $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f20.fl < ctx->f0.fl;
    // 0x803F16A4: nop

    // 0x803F16A8: bc1f        L_803F16BC
    if (!c1cs) {
        // 0x803F16AC: addiu       $s1, $s1, 0x1
        ctx->r17 = ADD32(ctx->r17, 0X1);
            goto L_803F16BC;
    }
    // 0x803F16AC: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x803F16B0: b           L_803F16C8
    // 0x803F16B4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_803F16C8;
    // 0x803F16B4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_803F16B8:
    // 0x803F16B8: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
L_803F16BC:
    // 0x803F16BC: bne         $s1, $s3, L_803F1620
    if (ctx->r17 != ctx->r19) {
        // 0x803F16C0: addiu       $s0, $s0, 0xF8
        ctx->r16 = ADD32(ctx->r16, 0XF8);
            goto L_803F1620;
    }
    // 0x803F16C0: addiu       $s0, $s0, 0xF8
    ctx->r16 = ADD32(ctx->r16, 0XF8);
    // 0x803F16C4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_803F16C8:
    // 0x803F16C8: lw          $ra, 0x4C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X4C);
    // 0x803F16CC: lwc1        $f21, 0x10($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X10);
    // 0x803F16D0: lwc1        $f20, 0x14($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X14);
    // 0x803F16D4: lwc1        $f23, 0x18($sp)
    ctx->f_odd[(23 - 1) * 2] = MEM_W(ctx->r29, 0X18);
    // 0x803F16D8: lwc1        $f22, 0x1C($sp)
    ctx->f22.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x803F16DC: lwc1        $f25, 0x20($sp)
    ctx->f_odd[(25 - 1) * 2] = MEM_W(ctx->r29, 0X20);
    // 0x803F16E0: lwc1        $f24, 0x24($sp)
    ctx->f24.u32l = MEM_W(ctx->r29, 0X24);
    // 0x803F16E4: lwc1        $f27, 0x28($sp)
    ctx->f_odd[(27 - 1) * 2] = MEM_W(ctx->r29, 0X28);
    // 0x803F16E8: lwc1        $f26, 0x2C($sp)
    ctx->f26.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x803F16EC: lwc1        $f29, 0x30($sp)
    ctx->f_odd[(29 - 1) * 2] = MEM_W(ctx->r29, 0X30);
    // 0x803F16F0: lwc1        $f28, 0x34($sp)
    ctx->f28.u32l = MEM_W(ctx->r29, 0X34);
    // 0x803F16F4: lw          $s0, 0x3C($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X3C);
    // 0x803F16F8: lw          $s1, 0x40($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X40);
    // 0x803F16FC: lw          $s2, 0x44($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X44);
    // 0x803F1700: lw          $s3, 0x48($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X48);
    // 0x803F1704: jr          $ra
    // 0x803F1708: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
    return;
    // 0x803F1708: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
;}
RECOMP_FUNC void ovl_803F0000_menu_func_803F15DC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803F15DC: sw          $s0, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r16;
    // 0x803F15E0: swc1        $f29, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f_odd[(29 - 1) * 2];
    // 0x803F15E4: swc1        $f27, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f_odd[(27 - 1) * 2];
    // 0x803F15E8: swc1        $f25, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f_odd[(25 - 1) * 2];
    // 0x803F15EC: swc1        $f23, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f_odd[(23 - 1) * 2];
    // 0x803F15F0: swc1        $f22, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f22.u32l;
    // 0x803F15F4: swc1        $f21, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x803F15F8: swc1        $f20, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f20.u32l;
    // 0x803F15FC: mtc1        $at, $f24
    ctx->f24.u32l = ctx->r1;
    // 0x803F1600: lw          $t6, 0xC8($a0)
    ctx->r14 = MEM_W(ctx->r4, 0XC8);
    // 0x803F1604: lui         $at, 0x803F
    ctx->r1 = S32(0X803F << 16);
    // 0x803F1608: lwc1        $f23, 0x7C00($at)
    ctx->f_odd[(23 - 1) * 2] = MEM_W(ctx->r1, 0X7C00);
    // 0x803F160C: lwc1        $f22, 0x7C04($at)
    ctx->f22.u32l = MEM_W(ctx->r1, 0X7C04);
    // 0x803F1610: lw          $s0, 0x1C($t6)
    ctx->r16 = MEM_W(ctx->r14, 0X1C);
    // 0x803F1614: or          $s2, $a1, $zero
    ctx->r18 = ctx->r5 | 0;
    // 0x803F1618: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    // 0x803F161C: addiu       $s3, $zero, 0xB
    ctx->r19 = ADD32(0, 0XB);
L_803F1620:
    // 0x803F1620: lwc1        $f4, 0x84($s2)
    ctx->f4.u32l = MEM_W(ctx->r18, 0X84);
    // 0x803F1624: lwc1        $f6, 0x84($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X84);
    // 0x803F1628: nop

    // 0x803F162C: c.lt.s      $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f4.fl < ctx->f6.fl;
    // 0x803F1630: nop

    // 0x803F1634: bc1t        L_803F16B8
    if (c1cs) {
        // 0x803F1638: nop
    
            goto L_803F16B8;
    }
    // 0x803F1638: nop

    // 0x803F163C: lwc1        $f12, 0x88($s2)
    ctx->f12.u32l = MEM_W(ctx->r18, 0X88);
    // 0x803F1640: lwc1        $f14, 0x88($s0)
    ctx->f14.u32l = MEM_W(ctx->r16, 0X88);
    // 0x803F1644: jal         0x80279308
    // 0x803F1648: nop

    LOOKUP_FUNC(0x80279308)(rdram, ctx);
        goto after_0;
    // 0x803F1648: nop

    after_0:
    // 0x803F164C: cvt.d.s     $f8, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f8.d = CVT_D_S(ctx->f0.fl);
    // 0x803F1650: c.lt.d      $f22, $f8
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f22.d < ctx->f8.d;
    // 0x803F1654: mov.s       $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    ctx->f20.fl = ctx->f0.fl;
    // 0x803F1658: bc1t        L_803F16B8
    if (c1cs) {
        // 0x803F165C: nop
    
            goto L_803F16B8;
    }
    // 0x803F165C: nop

    // 0x803F1660: lwc1        $f0, 0x84($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X84);
    // 0x803F1664: nop

    // 0x803F1668: c.lt.s      $f0, $f24
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 24);
    c1cs = ctx->f0.fl < ctx->f24.fl;
    // 0x803F166C: nop

    // 0x803F1670: bc1f        L_803F1680
    if (!c1cs) {
        // 0x803F1674: nop
    
            goto L_803F1680;
    }
    // 0x803F1674: nop

    // 0x803F1678: b           L_803F16C8
    // 0x803F167C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_803F16C8;
    // 0x803F167C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_803F1680:
    // 0x803F1680: mul.s       $f10, $f0, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f10.fl = MUL_S(ctx->f0.fl, ctx->f0.fl);
    // 0x803F1684: jal         0x8007FA40
    // 0x803F1688: sub.s       $f12, $f10, $f26
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 26);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f26.fl); 
    ctx->f12.fl = ctx->f10.fl - ctx->f26.fl;
    func_8007FA40(rdram, ctx);
        goto after_1;
    // 0x803F1688: sub.s       $f12, $f10, $f26
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 26);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f26.fl); 
    ctx->f12.fl = ctx->f10.fl - ctx->f26.fl;
    after_1:
    // 0x803F168C: mov.s       $f12, $f28
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 28);
    ctx->f12.fl = ctx->f28.fl;
    // 0x803F1690: jal         0x8001C5D0
    // 0x803F1694: mov.s       $f14, $f0
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    ctx->f14.fl = ctx->f0.fl;
    func_8001C5D0(rdram, ctx);
        goto after_2;
    // 0x803F1694: mov.s       $f14, $f0
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    ctx->f14.fl = ctx->f0.fl;
    after_2:
    // 0x803F1698: jal         0x80272AEC
    // 0x803F169C: mov.s       $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    ctx->f12.fl = ctx->f0.fl;
    LOOKUP_FUNC(0x80272AEC)(rdram, ctx);
        goto after_3;
    // 0x803F169C: mov.s       $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    ctx->f12.fl = ctx->f0.fl;
    after_3:
    // 0x803F16A0: c.lt.s      $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f20.fl < ctx->f0.fl;
    // 0x803F16A4: nop

    // 0x803F16A8: bc1f        L_803F16BC
    if (!c1cs) {
        // 0x803F16AC: addiu       $s1, $s1, 0x1
        ctx->r17 = ADD32(ctx->r17, 0X1);
            goto L_803F16BC;
    }
    // 0x803F16AC: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x803F16B0: b           L_803F16C8
    // 0x803F16B4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_803F16C8;
    // 0x803F16B4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_803F16B8:
    // 0x803F16B8: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
L_803F16BC:
    // 0x803F16BC: bne         $s1, $s3, L_803F1620
    if (ctx->r17 != ctx->r19) {
        // 0x803F16C0: addiu       $s0, $s0, 0xF8
        ctx->r16 = ADD32(ctx->r16, 0XF8);
            goto L_803F1620;
    }
    // 0x803F16C0: addiu       $s0, $s0, 0xF8
    ctx->r16 = ADD32(ctx->r16, 0XF8);
    // 0x803F16C4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_803F16C8:
    // 0x803F16C8: lw          $ra, 0x4C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X4C);
    // 0x803F16CC: lwc1        $f21, 0x10($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X10);
    // 0x803F16D0: lwc1        $f20, 0x14($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X14);
    // 0x803F16D4: lwc1        $f23, 0x18($sp)
    ctx->f_odd[(23 - 1) * 2] = MEM_W(ctx->r29, 0X18);
    // 0x803F16D8: lwc1        $f22, 0x1C($sp)
    ctx->f22.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x803F16DC: lwc1        $f25, 0x20($sp)
    ctx->f_odd[(25 - 1) * 2] = MEM_W(ctx->r29, 0X20);
    // 0x803F16E0: lwc1        $f24, 0x24($sp)
    ctx->f24.u32l = MEM_W(ctx->r29, 0X24);
    // 0x803F16E4: lwc1        $f27, 0x28($sp)
    ctx->f_odd[(27 - 1) * 2] = MEM_W(ctx->r29, 0X28);
    // 0x803F16E8: lwc1        $f26, 0x2C($sp)
    ctx->f26.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x803F16EC: lwc1        $f29, 0x30($sp)
    ctx->f_odd[(29 - 1) * 2] = MEM_W(ctx->r29, 0X30);
    // 0x803F16F0: lwc1        $f28, 0x34($sp)
    ctx->f28.u32l = MEM_W(ctx->r29, 0X34);
    // 0x803F16F4: lw          $s0, 0x3C($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X3C);
    // 0x803F16F8: lw          $s1, 0x40($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X40);
    // 0x803F16FC: lw          $s2, 0x44($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X44);
    // 0x803F1700: lw          $s3, 0x48($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X48);
    // 0x803F1704: jr          $ra
    // 0x803F1708: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
    return;
    // 0x803F1708: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
;}
RECOMP_FUNC void ovl_803F0000_menu_func_803F1620(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
L_803F1620:
    // 0x803F1620: lwc1        $f4, 0x84($s2)
    ctx->f4.u32l = MEM_W(ctx->r18, 0X84);
    // 0x803F1624: lwc1        $f6, 0x84($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X84);
    // 0x803F1628: nop

    // 0x803F162C: c.lt.s      $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f4.fl < ctx->f6.fl;
    // 0x803F1630: nop

    // 0x803F1634: bc1t        L_803F16B8
    if (c1cs) {
        // 0x803F1638: nop
    
            goto L_803F16B8;
    }
    // 0x803F1638: nop

    // 0x803F163C: lwc1        $f12, 0x88($s2)
    ctx->f12.u32l = MEM_W(ctx->r18, 0X88);
    // 0x803F1640: lwc1        $f14, 0x88($s0)
    ctx->f14.u32l = MEM_W(ctx->r16, 0X88);
    // 0x803F1644: jal         0x80279308
    // 0x803F1648: nop

    LOOKUP_FUNC(0x80279308)(rdram, ctx);
        goto after_0;
    // 0x803F1648: nop

    after_0:
    // 0x803F164C: cvt.d.s     $f8, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f8.d = CVT_D_S(ctx->f0.fl);
    // 0x803F1650: c.lt.d      $f22, $f8
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f22.d < ctx->f8.d;
    // 0x803F1654: mov.s       $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    ctx->f20.fl = ctx->f0.fl;
    // 0x803F1658: bc1t        L_803F16B8
    if (c1cs) {
        // 0x803F165C: nop
    
            goto L_803F16B8;
    }
    // 0x803F165C: nop

    // 0x803F1660: lwc1        $f0, 0x84($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X84);
    // 0x803F1664: nop

    // 0x803F1668: c.lt.s      $f0, $f24
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 24);
    c1cs = ctx->f0.fl < ctx->f24.fl;
    // 0x803F166C: nop

    // 0x803F1670: bc1f        L_803F1680
    if (!c1cs) {
        // 0x803F1674: nop
    
            goto L_803F1680;
    }
    // 0x803F1674: nop

    // 0x803F1678: b           L_803F16C8
    // 0x803F167C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_803F16C8;
    // 0x803F167C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_803F1680:
    // 0x803F1680: mul.s       $f10, $f0, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f10.fl = MUL_S(ctx->f0.fl, ctx->f0.fl);
    // 0x803F1684: jal         0x8007FA40
    // 0x803F1688: sub.s       $f12, $f10, $f26
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 26);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f26.fl); 
    ctx->f12.fl = ctx->f10.fl - ctx->f26.fl;
    func_8007FA40(rdram, ctx);
        goto after_1;
    // 0x803F1688: sub.s       $f12, $f10, $f26
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 26);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f26.fl); 
    ctx->f12.fl = ctx->f10.fl - ctx->f26.fl;
    after_1:
    // 0x803F168C: mov.s       $f12, $f28
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 28);
    ctx->f12.fl = ctx->f28.fl;
    // 0x803F1690: jal         0x8001C5D0
    // 0x803F1694: mov.s       $f14, $f0
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    ctx->f14.fl = ctx->f0.fl;
    func_8001C5D0(rdram, ctx);
        goto after_2;
    // 0x803F1694: mov.s       $f14, $f0
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    ctx->f14.fl = ctx->f0.fl;
    after_2:
    // 0x803F1698: jal         0x80272AEC
    // 0x803F169C: mov.s       $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    ctx->f12.fl = ctx->f0.fl;
    LOOKUP_FUNC(0x80272AEC)(rdram, ctx);
        goto after_3;
    // 0x803F169C: mov.s       $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    ctx->f12.fl = ctx->f0.fl;
    after_3:
    // 0x803F16A0: c.lt.s      $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f20.fl < ctx->f0.fl;
    // 0x803F16A4: nop

    // 0x803F16A8: bc1f        L_803F16BC
    if (!c1cs) {
        // 0x803F16AC: addiu       $s1, $s1, 0x1
        ctx->r17 = ADD32(ctx->r17, 0X1);
            goto L_803F16BC;
    }
    // 0x803F16AC: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x803F16B0: b           L_803F16C8
    // 0x803F16B4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_803F16C8;
    // 0x803F16B4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_803F16B8:
    // 0x803F16B8: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
L_803F16BC:
    // 0x803F16BC: bne         $s1, $s3, L_803F1620
    if (ctx->r17 != ctx->r19) {
        // 0x803F16C0: addiu       $s0, $s0, 0xF8
        ctx->r16 = ADD32(ctx->r16, 0XF8);
            goto L_803F1620;
    }
    // 0x803F16C0: addiu       $s0, $s0, 0xF8
    ctx->r16 = ADD32(ctx->r16, 0XF8);
    // 0x803F16C4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_803F16C8:
    // 0x803F16C8: lw          $ra, 0x4C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X4C);
    // 0x803F16CC: lwc1        $f21, 0x10($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X10);
    // 0x803F16D0: lwc1        $f20, 0x14($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X14);
    // 0x803F16D4: lwc1        $f23, 0x18($sp)
    ctx->f_odd[(23 - 1) * 2] = MEM_W(ctx->r29, 0X18);
    // 0x803F16D8: lwc1        $f22, 0x1C($sp)
    ctx->f22.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x803F16DC: lwc1        $f25, 0x20($sp)
    ctx->f_odd[(25 - 1) * 2] = MEM_W(ctx->r29, 0X20);
    // 0x803F16E0: lwc1        $f24, 0x24($sp)
    ctx->f24.u32l = MEM_W(ctx->r29, 0X24);
    // 0x803F16E4: lwc1        $f27, 0x28($sp)
    ctx->f_odd[(27 - 1) * 2] = MEM_W(ctx->r29, 0X28);
    // 0x803F16E8: lwc1        $f26, 0x2C($sp)
    ctx->f26.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x803F16EC: lwc1        $f29, 0x30($sp)
    ctx->f_odd[(29 - 1) * 2] = MEM_W(ctx->r29, 0X30);
    // 0x803F16F0: lwc1        $f28, 0x34($sp)
    ctx->f28.u32l = MEM_W(ctx->r29, 0X34);
    // 0x803F16F4: lw          $s0, 0x3C($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X3C);
    // 0x803F16F8: lw          $s1, 0x40($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X40);
    // 0x803F16FC: lw          $s2, 0x44($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X44);
    // 0x803F1700: lw          $s3, 0x48($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X48);
    // 0x803F1704: jr          $ra
    // 0x803F1708: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
    return;
    // 0x803F1708: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
;}
RECOMP_FUNC void ovl_803F0000_menu_func_803F1650(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
L_803F1620:
    // 0x803F1650: c.lt.d      $f22, $f8
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f22.d < ctx->f8.d;
    // 0x803F1654: mov.s       $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    ctx->f20.fl = ctx->f0.fl;
    // 0x803F1658: bc1t        L_803F16B8
    if (c1cs) {
        // 0x803F165C: nop
    
            goto L_803F16B8;
    }
    // 0x803F165C: nop

    // 0x803F1660: lwc1        $f0, 0x84($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X84);
    // 0x803F1664: nop

    // 0x803F1668: c.lt.s      $f0, $f24
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 24);
    c1cs = ctx->f0.fl < ctx->f24.fl;
    // 0x803F166C: nop

    // 0x803F1670: bc1f        L_803F1680
    if (!c1cs) {
        // 0x803F1674: nop
    
            goto L_803F1680;
    }
    // 0x803F1674: nop

    // 0x803F1678: b           L_803F16C8
    // 0x803F167C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_803F16C8;
    // 0x803F167C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_803F1680:
    // 0x803F1680: mul.s       $f10, $f0, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f10.fl = MUL_S(ctx->f0.fl, ctx->f0.fl);
    // 0x803F1684: jal         0x8007FA40
    // 0x803F1688: sub.s       $f12, $f10, $f26
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 26);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f26.fl); 
    ctx->f12.fl = ctx->f10.fl - ctx->f26.fl;
    func_8007FA40(rdram, ctx);
        goto after_0;
    // 0x803F1688: sub.s       $f12, $f10, $f26
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 26);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f26.fl); 
    ctx->f12.fl = ctx->f10.fl - ctx->f26.fl;
    after_0:
    // 0x803F168C: mov.s       $f12, $f28
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 28);
    ctx->f12.fl = ctx->f28.fl;
    // 0x803F1690: jal         0x8001C5D0
    // 0x803F1694: mov.s       $f14, $f0
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    ctx->f14.fl = ctx->f0.fl;
    func_8001C5D0(rdram, ctx);
        goto after_1;
    // 0x803F1694: mov.s       $f14, $f0
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    ctx->f14.fl = ctx->f0.fl;
    after_1:
    // 0x803F1698: jal         0x80272AEC
    // 0x803F169C: mov.s       $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    ctx->f12.fl = ctx->f0.fl;
    LOOKUP_FUNC(0x80272AEC)(rdram, ctx);
        goto after_2;
    // 0x803F169C: mov.s       $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    ctx->f12.fl = ctx->f0.fl;
    after_2:
    // 0x803F16A0: c.lt.s      $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f20.fl < ctx->f0.fl;
    // 0x803F16A4: nop

    // 0x803F16A8: bc1f        L_803F16BC
    if (!c1cs) {
        // 0x803F16AC: addiu       $s1, $s1, 0x1
        ctx->r17 = ADD32(ctx->r17, 0X1);
            goto L_803F16BC;
    }
    // 0x803F16AC: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x803F16B0: b           L_803F16C8
    // 0x803F16B4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_803F16C8;
    // 0x803F16B4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_803F16B8:
    // 0x803F16B8: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
L_803F16BC:
    // 0x803F16BC: bne         $s1, $s3, L_803F1620
    if (ctx->r17 != ctx->r19) {
            // 0x803F16C0: addiu       $s0, $s0, 0xF8
    ctx->r16 = ADD32(ctx->r16, 0XF8);
    ovl_803F0000_menu_func_803F1620(rdram, ctx);
    return;
    }
    // 0x803F16C0: addiu       $s0, $s0, 0xF8
    ctx->r16 = ADD32(ctx->r16, 0XF8);
    // 0x803F16C4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_803F16C8:
    // 0x803F16C8: lw          $ra, 0x4C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X4C);
    // 0x803F16CC: lwc1        $f21, 0x10($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X10);
    // 0x803F16D0: lwc1        $f20, 0x14($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X14);
    // 0x803F16D4: lwc1        $f23, 0x18($sp)
    ctx->f_odd[(23 - 1) * 2] = MEM_W(ctx->r29, 0X18);
    // 0x803F16D8: lwc1        $f22, 0x1C($sp)
    ctx->f22.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x803F16DC: lwc1        $f25, 0x20($sp)
    ctx->f_odd[(25 - 1) * 2] = MEM_W(ctx->r29, 0X20);
    // 0x803F16E0: lwc1        $f24, 0x24($sp)
    ctx->f24.u32l = MEM_W(ctx->r29, 0X24);
    // 0x803F16E4: lwc1        $f27, 0x28($sp)
    ctx->f_odd[(27 - 1) * 2] = MEM_W(ctx->r29, 0X28);
    // 0x803F16E8: lwc1        $f26, 0x2C($sp)
    ctx->f26.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x803F16EC: lwc1        $f29, 0x30($sp)
    ctx->f_odd[(29 - 1) * 2] = MEM_W(ctx->r29, 0X30);
    // 0x803F16F0: lwc1        $f28, 0x34($sp)
    ctx->f28.u32l = MEM_W(ctx->r29, 0X34);
    // 0x803F16F4: lw          $s0, 0x3C($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X3C);
    // 0x803F16F8: lw          $s1, 0x40($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X40);
    // 0x803F16FC: lw          $s2, 0x44($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X44);
    // 0x803F1700: lw          $s3, 0x48($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X48);
    // 0x803F1704: jr          $ra
    // 0x803F1708: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
    return;
    // 0x803F1708: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
;}
RECOMP_FUNC void ovl_803F0000_menu_func_803F16D8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803F16D8: lwc1        $f22, 0x1C($sp)
    ctx->f22.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x803F16DC: lwc1        $f25, 0x20($sp)
    ctx->f_odd[(25 - 1) * 2] = MEM_W(ctx->r29, 0X20);
    // 0x803F16E0: lwc1        $f24, 0x24($sp)
    ctx->f24.u32l = MEM_W(ctx->r29, 0X24);
    // 0x803F16E4: lwc1        $f27, 0x28($sp)
    ctx->f_odd[(27 - 1) * 2] = MEM_W(ctx->r29, 0X28);
    // 0x803F16E8: lwc1        $f26, 0x2C($sp)
    ctx->f26.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x803F16EC: lwc1        $f29, 0x30($sp)
    ctx->f_odd[(29 - 1) * 2] = MEM_W(ctx->r29, 0X30);
    // 0x803F16F0: lwc1        $f28, 0x34($sp)
    ctx->f28.u32l = MEM_W(ctx->r29, 0X34);
    // 0x803F16F4: lw          $s0, 0x3C($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X3C);
    // 0x803F16F8: lw          $s1, 0x40($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X40);
    // 0x803F16FC: lw          $s2, 0x44($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X44);
    // 0x803F1700: lw          $s3, 0x48($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X48);
    // 0x803F1704: jr          $ra
    // 0x803F1708: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
    return;
    // 0x803F1708: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
;}
RECOMP_FUNC void ovl_803F0000_menu_func_803F170C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803F170C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x803F1710: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x803F1714: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x803F1718: lhu         $t6, 0x12($a0)
    ctx->r14 = MEM_HU(ctx->r4, 0X12);
    // 0x803F171C: andi        $a2, $a1, 0xFFFF
    ctx->r6 = ctx->r5 & 0XFFFF;
    // 0x803F1720: andi        $t7, $t6, 0x40
    ctx->r15 = ctx->r14 & 0X40;
    // 0x803F1724: bne         $t7, $zero, L_803F17B0
    if (ctx->r15 != 0) {
        // 0x803F1728: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_803F17B0;
    }
    // 0x803F1728: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x803F172C: cfc1        $t9, $FpcCsr
    ctx->r25 = get_cop1_cs();
    // 0x803F1730: lw          $t8, 0xC8($a0)
    ctx->r24 = MEM_W(ctx->r4, 0XC8);
    // 0x803F1734: ori         $at, $t9, 0x3
    ctx->r1 = ctx->r25 | 0X3;
    // 0x803F1738: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x803F173C: sh          $a2, 0x938($t8)
    MEM_H(0X938, ctx->r24) = ctx->r6;
    // 0x803F1740: lwc1        $f4, 0x4C($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X4C);
    // 0x803F1744: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x803F1748: lw          $t1, 0xC8($a0)
    ctx->r9 = MEM_W(ctx->r4, 0XC8);
    // 0x803F174C: cvt.w.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = CVT_W_S(ctx->f4.fl);
    // 0x803F1750: ctc1        $t9, $FpcCsr
    set_cop1_cs(ctx->r25);
    // 0x803F1754: mfc1        $t0, $f6
    ctx->r8 = (int32_t)ctx->f6.u32l;
    // 0x803F1758: nop

    // 0x803F175C: cfc1        $t2, $FpcCsr
    ctx->r10 = get_cop1_cs();
    // 0x803F1760: sh          $t0, 0x93C($t1)
    MEM_H(0X93C, ctx->r9) = ctx->r8;
    // 0x803F1764: ori         $at, $t2, 0x3
    ctx->r1 = ctx->r10 | 0X3;
    // 0x803F1768: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x803F176C: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x803F1770: lwc1        $f8, 0x44($a0)
    ctx->f8.u32l = MEM_W(ctx->r4, 0X44);
    // 0x803F1774: lw          $t4, 0xC8($a0)
    ctx->r12 = MEM_W(ctx->r4, 0XC8);
    // 0x803F1778: cvt.w.s     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.u32l = CVT_W_S(ctx->f8.fl);
    // 0x803F177C: mfc1        $t3, $f10
    ctx->r11 = (int32_t)ctx->f10.u32l;
    // 0x803F1780: ctc1        $t2, $FpcCsr
    set_cop1_cs(ctx->r10);
    // 0x803F1784: sh          $t3, 0x93E($t4)
    MEM_H(0X93E, ctx->r12) = ctx->r11;
    // 0x803F1788: lw          $t5, 0xC8($a0)
    ctx->r13 = MEM_W(ctx->r4, 0XC8);
    // 0x803F178C: nop

    // 0x803F1790: sh          $zero, 0x93A($t5)
    MEM_H(0X93A, ctx->r13) = 0;
    // 0x803F1794: lw          $t6, 0xC8($a0)
    ctx->r14 = MEM_W(ctx->r4, 0XC8);
    // 0x803F1798: nop

    // 0x803F179C: sh          $zero, 0x948($t6)
    MEM_H(0X948, ctx->r14) = 0;
    // 0x803F17A0: lw          $a1, 0xC8($a0)
    ctx->r5 = MEM_W(ctx->r4, 0XC8);
    // 0x803F17A4: jal         0x803F17BC
    // 0x803F17A8: addiu       $a1, $a1, 0x938
    ctx->r5 = ADD32(ctx->r5, 0X938);
    ovl_803F0000_menu_func_803F17BC(rdram, ctx);
        goto after_0;
    // 0x803F17A8: addiu       $a1, $a1, 0x938
    ctx->r5 = ADD32(ctx->r5, 0X938);
    after_0:
    // 0x803F17AC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_803F17B0:
    // 0x803F17B0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x803F17B4: jr          $ra
    // 0x803F17B8: nop

    return;
    // 0x803F17B8: nop

;}
RECOMP_FUNC void ovl_803F0000_menu_func_803F1760(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803F1760: sh          $t0, 0x93C($t1)
    MEM_H(0X93C, ctx->r9) = ctx->r8;
    // 0x803F1764: ori         $at, $t2, 0x3
    ctx->r1 = ctx->r10 | 0X3;
    // 0x803F1768: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x803F176C: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x803F1770: lwc1        $f8, 0x44($a0)
    ctx->f8.u32l = MEM_W(ctx->r4, 0X44);
    // 0x803F1774: lw          $t4, 0xC8($a0)
    ctx->r12 = MEM_W(ctx->r4, 0XC8);
    // 0x803F1778: cvt.w.s     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.u32l = CVT_W_S(ctx->f8.fl);
    // 0x803F177C: mfc1        $t3, $f10
    ctx->r11 = (int32_t)ctx->f10.u32l;
    // 0x803F1780: ctc1        $t2, $FpcCsr
    set_cop1_cs(ctx->r10);
    // 0x803F1784: sh          $t3, 0x93E($t4)
    MEM_H(0X93E, ctx->r12) = ctx->r11;
    // 0x803F1788: lw          $t5, 0xC8($a0)
    ctx->r13 = MEM_W(ctx->r4, 0XC8);
    // 0x803F178C: nop

    // 0x803F1790: sh          $zero, 0x93A($t5)
    MEM_H(0X93A, ctx->r13) = 0;
    // 0x803F1794: lw          $t6, 0xC8($a0)
    ctx->r14 = MEM_W(ctx->r4, 0XC8);
    // 0x803F1798: nop

    // 0x803F179C: sh          $zero, 0x948($t6)
    MEM_H(0X948, ctx->r14) = 0;
    // 0x803F17A0: lw          $a1, 0xC8($a0)
    ctx->r5 = MEM_W(ctx->r4, 0XC8);
    // 0x803F17A4: jal         0x803F17BC
    // 0x803F17A8: addiu       $a1, $a1, 0x938
    ctx->r5 = ADD32(ctx->r5, 0X938);
    ovl_803F0000_menu_func_803F17BC(rdram, ctx);
        goto after_0;
    // 0x803F17A8: addiu       $a1, $a1, 0x938
    ctx->r5 = ADD32(ctx->r5, 0X938);
    after_0:
    // 0x803F17AC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x803F17B0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x803F17B4: jr          $ra
    // 0x803F17B8: nop

    return;
    // 0x803F17B8: nop

;}
RECOMP_FUNC void ovl_803F0000_menu_func_803F17BC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803F17BC: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x803F17C0: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x803F17C4: sw          $a0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r4;
    // 0x803F17C8: lh          $t7, 0x6($a1)
    ctx->r15 = MEM_H(ctx->r5, 0X6);
    // 0x803F17CC: lh          $t6, 0x4($a1)
    ctx->r14 = MEM_H(ctx->r5, 0X4);
    // 0x803F17D0: mtc1        $t7, $f6
    ctx->f6.u32l = ctx->r15;
    // 0x803F17D4: mtc1        $t6, $f4
    ctx->f4.u32l = ctx->r14;
    // 0x803F17D8: lui         $v0, 0x8009
    ctx->r2 = S32(0X8009 << 16);
    // 0x803F17DC: lw          $v0, 0x3B20($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X3B20);
    // 0x803F17E0: cvt.s.w     $f6, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    ctx->f6.fl = CVT_S_W(ctx->f6.u32l);
    // 0x803F17E4: lwc1        $f12, 0x8($v0)
    ctx->f12.u32l = MEM_W(ctx->r2, 0X8);
    // 0x803F17E8: lwc1        $f14, 0x0($v0)
    ctx->f14.u32l = MEM_W(ctx->r2, 0X0);
    // 0x803F17EC: cvt.s.w     $f4, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    ctx->f4.fl = CVT_S_W(ctx->f4.u32l);
    // 0x803F17F0: mfc1        $a3, $f6
    ctx->r7 = (int32_t)ctx->f6.u32l;
    // 0x803F17F4: addiu       $t8, $sp, 0x28
    ctx->r24 = ADD32(ctx->r29, 0X28);
    // 0x803F17F8: mfc1        $a2, $f4
    ctx->r6 = (int32_t)ctx->f4.u32l;
    // 0x803F17FC: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    // 0x803F1800: jal         0x80272B1C
    // 0x803F1804: sw          $a1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r5;
    LOOKUP_FUNC(0x80272B1C)(rdram, ctx);
        goto after_0;
    // 0x803F1804: sw          $a1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r5;
    after_0:
    // 0x803F1808: lw          $a1, 0x34($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X34);
    // 0x803F180C: lwc1        $f8, 0x28($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X28);
    // 0x803F1810: nop

    // 0x803F1814: swc1        $f8, 0xC($a1)
    MEM_W(0XC, ctx->r5) = ctx->f8.u32l;
    // 0x803F1818: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x803F181C: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x803F1820: jr          $ra
    // 0x803F1824: nop

    return;
    // 0x803F1824: nop

;}
RECOMP_FUNC void ovl_803F0000_menu_func_803F1828(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803F1828: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x803F182C: sw          $a2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r6;
    // 0x803F1830: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x803F1834: lwc1        $f12, 0x28($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X28);
    // 0x803F1838: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x803F183C: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x803F1840: jal         0x80081040
    // 0x803F1844: sw          $a3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r7;
    func_80081040(rdram, ctx);
        goto after_0;
    // 0x803F1844: sw          $a3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r7;
    after_0:
    // 0x803F1848: lw          $t6, 0x2C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X2C);
    // 0x803F184C: lw          $v0, 0x24($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X24);
    // 0x803F1850: mtc1        $t6, $f4
    ctx->f4.u32l = ctx->r14;
    // 0x803F1854: bgez        $t6, L_803F186C
    if (SIGNED(ctx->r14) >= 0) {
        // 0x803F1858: cvt.s.w     $f2, $f4
        CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    ctx->f2.fl = CVT_S_W(ctx->f4.u32l);
            goto L_803F186C;
    }
    // 0x803F1858: cvt.s.w     $f2, $f4
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    ctx->f2.fl = CVT_S_W(ctx->f4.u32l);
    // 0x803F185C: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x803F1860: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x803F1864: nop

    // 0x803F1868: add.s       $f2, $f2, $f6
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f2.fl = ctx->f2.fl + ctx->f6.fl;
L_803F186C:
    // 0x803F186C: mul.s       $f8, $f0, $f2
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f8.fl = MUL_S(ctx->f0.fl, ctx->f2.fl);
    // 0x803F1870: lw          $t7, 0x20($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X20);
    // 0x803F1874: nop

    // 0x803F1878: lwc1        $f10, 0x4C($t7)
    ctx->f10.u32l = MEM_W(ctx->r15, 0X4C);
    // 0x803F187C: nop

    // 0x803F1880: add.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x803F1884: cfc1        $t8, $FpcCsr
    ctx->r24 = get_cop1_cs();
    // 0x803F1888: nop

    // 0x803F188C: ori         $at, $t8, 0x3
    ctx->r1 = ctx->r24 | 0X3;
    // 0x803F1890: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x803F1894: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x803F1898: nop

    // 0x803F189C: cvt.w.s     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.u32l = CVT_W_S(ctx->f16.fl);
    // 0x803F18A0: mfc1        $t9, $f18
    ctx->r25 = (int32_t)ctx->f18.u32l;
    // 0x803F18A4: ctc1        $t8, $FpcCsr
    set_cop1_cs(ctx->r24);
    // 0x803F18A8: sh          $t9, 0x4($v0)
    MEM_H(0X4, ctx->r2) = ctx->r25;
    // 0x803F18AC: lwc1        $f12, 0x28($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X28);
    // 0x803F18B0: jal         0x80080E80
    // 0x803F18B4: swc1        $f2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f2.u32l;
    func_80080E80(rdram, ctx);
        goto after_1;
    // 0x803F18B4: swc1        $f2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f2.u32l;
    after_1:
    // 0x803F18B8: lwc1        $f2, 0x1C($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x803F18BC: lw          $t0, 0x20($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X20);
    // 0x803F18C0: mul.s       $f4, $f0, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f4.fl = MUL_S(ctx->f0.fl, ctx->f2.fl);
    // 0x803F18C4: lwc1        $f6, 0x44($t0)
    ctx->f6.u32l = MEM_W(ctx->r8, 0X44);
    // 0x803F18C8: lw          $v0, 0x24($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X24);
    // 0x803F18CC: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x803F18D0: cfc1        $t1, $FpcCsr
    ctx->r9 = get_cop1_cs();
    // 0x803F18D4: nop

    // 0x803F18D8: ori         $at, $t1, 0x3
    ctx->r1 = ctx->r9 | 0X3;
    // 0x803F18DC: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x803F18E0: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x803F18E4: nop

    // 0x803F18E8: cvt.w.s     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.u32l = CVT_W_S(ctx->f8.fl);
    // 0x803F18EC: mfc1        $t2, $f10
    ctx->r10 = (int32_t)ctx->f10.u32l;
    // 0x803F18F0: ctc1        $t1, $FpcCsr
    set_cop1_cs(ctx->r9);
    // 0x803F18F4: sh          $t2, 0x6($v0)
    MEM_H(0X6, ctx->r2) = ctx->r10;
    // 0x803F18F8: lwc1        $f16, 0x28($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X28);
    // 0x803F18FC: sh          $zero, 0x2($v0)
    MEM_H(0X2, ctx->r2) = 0;
    // 0x803F1900: swc1        $f16, 0xC($v0)
    MEM_W(0XC, ctx->r2) = ctx->f16.u32l;
    // 0x803F1904: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x803F1908: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x803F190C: jr          $ra
    // 0x803F1910: nop

    return;
    // 0x803F1910: nop

;}
RECOMP_FUNC void ovl_803F0000_menu_func_803F1914(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803F1914: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    // 0x803F1918: sw          $a2, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r6;
    // 0x803F191C: lhu         $t8, 0x1A($a0)
    ctx->r24 = MEM_HU(ctx->r4, 0X1A);
    // 0x803F1920: lw          $v1, 0xC8($a0)
    ctx->r3 = MEM_W(ctx->r4, 0XC8);
    // 0x803F1924: lui         $t2, 0x800B
    ctx->r10 = S32(0X800B << 16);
    // 0x803F1928: addu        $t9, $v1, $t8
    ctx->r25 = ADD32(ctx->r3, ctx->r24);
    // 0x803F192C: lbu         $v0, 0x308($t9)
    ctx->r2 = MEM_BU(ctx->r25, 0X308);
    // 0x803F1930: andi        $t6, $a1, 0xFFFF
    ctx->r14 = ctx->r5 & 0XFFFF;
    // 0x803F1934: sll         $t3, $v0, 1
    ctx->r11 = S32(ctx->r2 << 1);
    // 0x803F1938: addu        $t0, $v1, $t3
    ctx->r8 = ADD32(ctx->r3, ctx->r11);
    // 0x803F193C: lbu         $a3, 0x2E8($t0)
    ctx->r7 = MEM_BU(ctx->r8, 0X2E8);
    // 0x803F1940: lbu         $t1, 0x2E9($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X2E9);
    // 0x803F1944: sll         $t4, $a3, 4
    ctx->r12 = S32(ctx->r7 << 4);
    // 0x803F1948: addu        $t5, $t4, $t1
    ctx->r13 = ADD32(ctx->r12, ctx->r9);
    // 0x803F194C: addu        $t2, $t2, $t5
    ctx->r10 = ADD32(ctx->r10, ctx->r13);
    // 0x803F1950: lbu         $t2, -0x2F6C($t2)
    ctx->r10 = MEM_BU(ctx->r10, -0X2F6C);
    // 0x803F1954: andi        $t7, $a2, 0xFFFF
    ctx->r15 = ctx->r6 & 0XFFFF;
    // 0x803F1958: and         $t6, $t2, $t6
    ctx->r14 = ctx->r10 & ctx->r14;
    // 0x803F195C: bne         $t6, $zero, L_803F196C
    if (ctx->r14 != 0) {
        // 0x803F1960: or          $a2, $t7, $zero
        ctx->r6 = ctx->r15 | 0;
            goto L_803F196C;
    }
    // 0x803F1960: or          $a2, $t7, $zero
    ctx->r6 = ctx->r15 | 0;
    // 0x803F1964: jr          $ra
    // 0x803F1968: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    return;
    // 0x803F1968: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_803F196C:
    // 0x803F196C: lhu         $t7, 0x2C($a0)
    ctx->r15 = MEM_HU(ctx->r4, 0X2C);
    // 0x803F1970: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x803F1974: and         $t8, $t7, $a2
    ctx->r24 = ctx->r15 & ctx->r6;
    // 0x803F1978: beq         $t8, $zero, L_803F1988
    if (ctx->r24 == 0) {
        // 0x803F197C: nop
    
            goto L_803F1988;
    }
    // 0x803F197C: nop

    // 0x803F1980: jr          $ra
    // 0x803F1984: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    return;
    // 0x803F1984: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_803F1988:
    // 0x803F1988: jr          $ra
    // 0x803F198C: nop

    return;
    // 0x803F198C: nop

;}
RECOMP_FUNC void ovl_803F0000_menu_func_803F1954(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803F1954: andi        $t7, $a2, 0xFFFF
    ctx->r15 = ctx->r6 & 0XFFFF;
    // 0x803F1958: and         $t6, $t2, $t6
    ctx->r14 = ctx->r10 & ctx->r14;
    // 0x803F195C: bne         $t6, $zero, L_803F196C
    if (ctx->r14 != 0) {
        // 0x803F1960: or          $a2, $t7, $zero
        ctx->r6 = ctx->r15 | 0;
            goto L_803F196C;
    }
    // 0x803F1960: or          $a2, $t7, $zero
    ctx->r6 = ctx->r15 | 0;
    // 0x803F1964: jr          $ra
    // 0x803F1968: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    return;
    // 0x803F1968: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_803F196C:
    // 0x803F196C: lhu         $t7, 0x2C($a0)
    ctx->r15 = MEM_HU(ctx->r4, 0X2C);
    // 0x803F1970: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x803F1974: and         $t8, $t7, $a2
    ctx->r24 = ctx->r15 & ctx->r6;
    // 0x803F1978: beq         $t8, $zero, L_803F1988
    if (ctx->r24 == 0) {
        // 0x803F197C: nop
    
            goto L_803F1988;
    }
    // 0x803F197C: nop

    // 0x803F1980: jr          $ra
    // 0x803F1984: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    return;
    // 0x803F1984: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_803F1988:
    // 0x803F1988: jr          $ra
    // 0x803F198C: nop

    return;
    // 0x803F198C: nop

;}
RECOMP_FUNC void ovl_803F0000_menu_func_803F1990(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803F1990: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x803F1994: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x803F1998: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x803F199C: lw          $t7, 0xC8($a0)
    ctx->r15 = MEM_W(ctx->r4, 0XC8);
    // 0x803F19A0: lui         $v1, 0x800B
    ctx->r3 = S32(0X800B << 16);
    // 0x803F19A4: lbu         $t8, 0x0($t7)
    ctx->r24 = MEM_BU(ctx->r15, 0X0);
    // 0x803F19A8: andi        $t6, $a1, 0xFFFF
    ctx->r14 = ctx->r5 & 0XFFFF;
    // 0x803F19AC: sll         $t9, $t8, 1
    ctx->r25 = S32(ctx->r24 << 1);
    // 0x803F19B0: addu        $v1, $v1, $t9
    ctx->r3 = ADD32(ctx->r3, ctx->r25);
    // 0x803F19B4: lhu         $v1, -0x2FC0($v1)
    ctx->r3 = MEM_HU(ctx->r3, -0X2FC0);
    // 0x803F19B8: nop

    // 0x803F19BC: srlv        $t0, $v1, $t6
    ctx->r8 = S32(U32(ctx->r3) >> (ctx->r14 & 31));
    // 0x803F19C0: andi        $t2, $t0, 0x3
    ctx->r10 = ctx->r8 & 0X3;
    // 0x803F19C4: jal         0x80059868
    // 0x803F19C8: sh          $t2, 0x1E($sp)
    MEM_H(0X1E, ctx->r29) = ctx->r10;
    func_80059868(rdram, ctx);
        goto after_0;
    // 0x803F19C8: sh          $t2, 0x1E($sp)
    MEM_H(0X1E, ctx->r29) = ctx->r10;
    after_0:
    // 0x803F19CC: lhu         $v1, 0x1E($sp)
    ctx->r3 = MEM_HU(ctx->r29, 0X1E);
    // 0x803F19D0: lui         $t4, 0x803F
    ctx->r12 = S32(0X803F << 16);
    // 0x803F19D4: sll         $t3, $v1, 1
    ctx->r11 = S32(ctx->r3 << 1);
    // 0x803F19D8: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x803F19DC: lhu         $t4, 0x75B8($t4)
    ctx->r12 = MEM_HU(ctx->r12, 0X75B8);
    // 0x803F19E0: andi        $t5, $v0, 0x3F
    ctx->r13 = ctx->r2 & 0X3F;
    // 0x803F19E4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x803F19E8: sltu        $at, $t4, $t5
    ctx->r1 = ctx->r12 < ctx->r13 ? 1 : 0;
    // 0x803F19EC: bne         $at, $zero, L_803F19FC
    if (ctx->r1 != 0) {
        // 0x803F19F0: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_803F19FC;
    }
    // 0x803F19F0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x803F19F4: b           L_803F19FC
    // 0x803F19F8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_803F19FC;
    // 0x803F19F8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_803F19FC:
    // 0x803F19FC: jr          $ra
    // 0x803F1A00: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x803F1A00: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void ovl_803F0000_menu_func_803F1A04(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803F1A04: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x803F1A08: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x803F1A0C: lw          $v0, 0xC8($a0)
    ctx->r2 = MEM_W(ctx->r4, 0XC8);
    // 0x803F1A10: nop

    // 0x803F1A14: lw          $v1, 0x24($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X24);
    // 0x803F1A18: nop

    // 0x803F1A1C: lhu         $t6, 0x8B6($v1)
    ctx->r14 = MEM_HU(ctx->r3, 0X8B6);
    // 0x803F1A20: nop

    // 0x803F1A24: beq         $t6, $zero, L_803F1A6C
    if (ctx->r14 == 0) {
        // 0x803F1A28: nop
    
            goto L_803F1A6C;
    }
    // 0x803F1A28: nop

    // 0x803F1A2C: lh          $t7, 0x8B0($v0)
    ctx->r15 = MEM_H(ctx->r2, 0X8B0);
    // 0x803F1A30: nop

    // 0x803F1A34: slti        $at, $t7, -0x158
    ctx->r1 = SIGNED(ctx->r15) < -0X158 ? 1 : 0;
    // 0x803F1A38: beq         $at, $zero, L_803F1A6C
    if (ctx->r1 == 0) {
        // 0x803F1A3C: lui         $at, 0x4270
        ctx->r1 = S32(0X4270 << 16);
            goto L_803F1A6C;
    }
    // 0x803F1A3C: lui         $at, 0x4270
    ctx->r1 = S32(0X4270 << 16);
    // 0x803F1A40: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x803F1A44: lwc1        $f4, 0x31C($v1)
    ctx->f4.u32l = MEM_W(ctx->r3, 0X31C);
    // 0x803F1A48: nop

    // 0x803F1A4C: c.lt.s      $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f4.fl < ctx->f6.fl;
    // 0x803F1A50: nop

    // 0x803F1A54: bc1f        L_803F1A70
    if (!c1cs) {
        // 0x803F1A58: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_803F1A70;
    }
    // 0x803F1A58: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x803F1A5C: jal         0x803F170C
    // 0x803F1A60: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    ovl_803F0000_menu_func_803F170C(rdram, ctx);
        goto after_0;
    // 0x803F1A60: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_0:
    // 0x803F1A64: b           L_803F1A70
    // 0x803F1A68: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_803F1A70;
    // 0x803F1A68: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_803F1A6C:
    // 0x803F1A6C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_803F1A70:
    // 0x803F1A70: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x803F1A74: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x803F1A78: jr          $ra
    // 0x803F1A7C: nop

    return;
    // 0x803F1A7C: nop

;}
RECOMP_FUNC void ovl_803F0000_menu_func_803F1A80(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803F1A80: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x803F1A84: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x803F1A88: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x803F1A8C: lw          $t6, 0xC8($a0)
    ctx->r14 = MEM_W(ctx->r4, 0XC8);
    // 0x803F1A90: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x803F1A94: lh          $t7, 0x8B0($t6)
    ctx->r15 = MEM_H(ctx->r14, 0X8B0);
    // 0x803F1A98: lui         $t8, 0x801B
    ctx->r24 = S32(0X801B << 16);
    // 0x803F1A9C: slti        $at, $t7, 0x64
    ctx->r1 = SIGNED(ctx->r15) < 0X64 ? 1 : 0;
    // 0x803F1AA0: beq         $at, $zero, L_803F1AB0
    if (ctx->r1 == 0) {
        // 0x803F1AA4: nop
    
            goto L_803F1AB0;
    }
    // 0x803F1AA4: nop

    // 0x803F1AA8: b           L_803F1C58
    // 0x803F1AAC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_803F1C58;
    // 0x803F1AAC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_803F1AB0:
    // 0x803F1AB0: lw          $t8, 0x3618($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X3618);
    // 0x803F1AB4: nop

    // 0x803F1AB8: bne         $s0, $t8, L_803F1B28
    if (ctx->r16 != ctx->r24) {
        // 0x803F1ABC: nop
    
            goto L_803F1B28;
    }
    // 0x803F1ABC: nop

    // 0x803F1AC0: lwc1        $f12, 0x44($s0)
    ctx->f12.u32l = MEM_W(ctx->r16, 0X44);
    // 0x803F1AC4: jal         0x80272AEC
    // 0x803F1AC8: nop

    LOOKUP_FUNC(0x80272AEC)(rdram, ctx);
        goto after_0;
    // 0x803F1AC8: nop

    after_0:
    // 0x803F1ACC: lui         $at, 0x4348
    ctx->r1 = S32(0X4348 << 16);
    // 0x803F1AD0: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x803F1AD4: nop

    // 0x803F1AD8: c.lt.s      $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f0.fl < ctx->f4.fl;
    // 0x803F1ADC: nop

    // 0x803F1AE0: bc1f        L_803F1B28
    if (!c1cs) {
        // 0x803F1AE4: nop
    
            goto L_803F1B28;
    }
    // 0x803F1AE4: nop

    // 0x803F1AE8: lw          $v1, 0xC8($s0)
    ctx->r3 = MEM_W(ctx->r16, 0XC8);
    // 0x803F1AEC: nop

    // 0x803F1AF0: lh          $t0, 0x8B0($v1)
    ctx->r8 = MEM_H(ctx->r3, 0X8B0);
    // 0x803F1AF4: lw          $t9, 0x24($v1)
    ctx->r25 = MEM_W(ctx->r3, 0X24);
    // 0x803F1AF8: mtc1        $t0, $f10
    ctx->f10.u32l = ctx->r8;
    // 0x803F1AFC: lwc1        $f6, 0x3CC($t9)
    ctx->f6.u32l = MEM_W(ctx->r25, 0X3CC);
    // 0x803F1B00: cvt.s.w     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.fl = CVT_S_W(ctx->f10.u32l);
    // 0x803F1B04: neg.s       $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = -ctx->f6.fl;
    // 0x803F1B08: c.lt.s      $f8, $f16
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f8.fl < ctx->f16.fl;
    // 0x803F1B0C: nop

    // 0x803F1B10: bc1f        L_803F1B28
    if (!c1cs) {
        // 0x803F1B14: nop
    
            goto L_803F1B28;
    }
    // 0x803F1B14: nop

    // 0x803F1B18: jal         0x803F35D8
    // 0x803F1B1C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_803F0000_menu_func_803F35D8(rdram, ctx);
        goto after_1;
    // 0x803F1B1C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
    // 0x803F1B20: b           L_803F1C58
    // 0x803F1B24: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_803F1C58;
    // 0x803F1B24: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_803F1B28:
    // 0x803F1B28: lw          $t1, 0xC8($s0)
    ctx->r9 = MEM_W(ctx->r16, 0XC8);
    // 0x803F1B2C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x803F1B30: lh          $v0, 0x8B0($t1)
    ctx->r2 = MEM_H(ctx->r9, 0X8B0);
    // 0x803F1B34: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    // 0x803F1B38: slti        $at, $v0, 0xFA
    ctx->r1 = SIGNED(ctx->r2) < 0XFA ? 1 : 0;
    // 0x803F1B3C: beq         $at, $zero, L_803F1B7C
    if (ctx->r1 == 0) {
        // 0x803F1B40: slti        $at, $v0, 0x158
        ctx->r1 = SIGNED(ctx->r2) < 0X158 ? 1 : 0;
            goto L_803F1B7C;
    }
    // 0x803F1B40: slti        $at, $v0, 0x158
    ctx->r1 = SIGNED(ctx->r2) < 0X158 ? 1 : 0;
    // 0x803F1B44: jal         0x803F1914
    // 0x803F1B48: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    ovl_803F0000_menu_func_803F1914(rdram, ctx);
        goto after_2;
    // 0x803F1B48: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    after_2:
    // 0x803F1B4C: beq         $v0, $zero, L_803F1C54
    if (ctx->r2 == 0) {
        // 0x803F1B50: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_803F1C54;
    }
    // 0x803F1B50: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x803F1B54: jal         0x803F3720
    // 0x803F1B58: addiu       $a1, $zero, 0xFA
    ctx->r5 = ADD32(0, 0XFA);
    ovl_803F0000_menu_func_803F3720(rdram, ctx);
        goto after_3;
    // 0x803F1B58: addiu       $a1, $zero, 0xFA
    ctx->r5 = ADD32(0, 0XFA);
    after_3:
    // 0x803F1B5C: lw          $v1, 0xC8($s0)
    ctx->r3 = MEM_W(ctx->r16, 0XC8);
    // 0x803F1B60: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x803F1B64: lhu         $t2, 0x95C($v1)
    ctx->r10 = MEM_HU(ctx->r3, 0X95C);
    // 0x803F1B68: nop

    // 0x803F1B6C: ori         $t3, $t2, 0x4000
    ctx->r11 = ctx->r10 | 0X4000;
    // 0x803F1B70: b           L_803F1C58
    // 0x803F1B74: sh          $t3, 0x95C($v1)
    MEM_H(0X95C, ctx->r3) = ctx->r11;
        goto L_803F1C58;
    // 0x803F1B74: sh          $t3, 0x95C($v1)
    MEM_H(0X95C, ctx->r3) = ctx->r11;
    // 0x803F1B78: slti        $at, $v0, 0x158
    ctx->r1 = SIGNED(ctx->r2) < 0X158 ? 1 : 0;
L_803F1B7C:
    // 0x803F1B7C: beq         $at, $zero, L_803F1BBC
    if (ctx->r1 == 0) {
        // 0x803F1B80: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_803F1BBC;
    }
    // 0x803F1B80: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x803F1B84: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    // 0x803F1B88: jal         0x803F1914
    // 0x803F1B8C: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    ovl_803F0000_menu_func_803F1914(rdram, ctx);
        goto after_4;
    // 0x803F1B8C: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_4:
    // 0x803F1B90: beq         $v0, $zero, L_803F1C54
    if (ctx->r2 == 0) {
        // 0x803F1B94: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_803F1C54;
    }
    // 0x803F1B94: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x803F1B98: jal         0x803F3720
    // 0x803F1B9C: addiu       $a1, $zero, 0x158
    ctx->r5 = ADD32(0, 0X158);
    ovl_803F0000_menu_func_803F3720(rdram, ctx);
        goto after_5;
    // 0x803F1B9C: addiu       $a1, $zero, 0x158
    ctx->r5 = ADD32(0, 0X158);
    after_5:
    // 0x803F1BA0: lw          $v1, 0xC8($s0)
    ctx->r3 = MEM_W(ctx->r16, 0XC8);
    // 0x803F1BA4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x803F1BA8: lhu         $t4, 0x95C($v1)
    ctx->r12 = MEM_HU(ctx->r3, 0X95C);
    // 0x803F1BAC: nop

    // 0x803F1BB0: ori         $t5, $t4, 0x4000
    ctx->r13 = ctx->r12 | 0X4000;
    // 0x803F1BB4: b           L_803F1C58
    // 0x803F1BB8: sh          $t5, 0x95C($v1)
    MEM_H(0X95C, ctx->r3) = ctx->r13;
        goto L_803F1C58;
    // 0x803F1BB8: sh          $t5, 0x95C($v1)
    MEM_H(0X95C, ctx->r3) = ctx->r13;
L_803F1BBC:
    // 0x803F1BBC: lw          $a1, 0x4C($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X4C);
    // 0x803F1BC0: lw          $a2, 0x44($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X44);
    // 0x803F1BC4: jal         0x8027200C
    // 0x803F1BC8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    LOOKUP_FUNC(0x8027200C)(rdram, ctx);
        goto after_6;
    // 0x803F1BC8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_6:
    // 0x803F1BCC: bne         $v0, $zero, L_803F1C58
    if (ctx->r2 != 0) {
        // 0x803F1BD0: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_803F1C58;
    }
    // 0x803F1BD0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x803F1BD4: lw          $v1, 0xC8($s0)
    ctx->r3 = MEM_W(ctx->r16, 0XC8);
    // 0x803F1BD8: lui         $at, 0x4316
    ctx->r1 = S32(0X4316 << 16);
    // 0x803F1BDC: lw          $t6, 0x24($v1)
    ctx->r14 = MEM_W(ctx->r3, 0X24);
    // 0x803F1BE0: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x803F1BE4: lwc1        $f18, 0x8BC($t6)
    ctx->f18.u32l = MEM_W(ctx->r14, 0X8BC);
    // 0x803F1BE8: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x803F1BEC: c.lt.s      $f18, $f4
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f18.fl < ctx->f4.fl;
    // 0x803F1BF0: nop

    // 0x803F1BF4: bc1f        L_803F1C58
    if (!c1cs) {
        // 0x803F1BF8: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_803F1C58;
    }
    // 0x803F1BF8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x803F1BFC: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x803F1C00: lui         $at, 0x803F
    ctx->r1 = S32(0X803F << 16);
    // 0x803F1C04: swc1        $f6, 0xB8($s0)
    MEM_W(0XB8, ctx->r16) = ctx->f6.u32l;
    // 0x803F1C08: lwc1        $f10, 0x7C08($at)
    ctx->f10.u32l = MEM_W(ctx->r1, 0X7C08);
    // 0x803F1C0C: addiu       $t7, $zero, 0x3
    ctx->r15 = ADD32(0, 0X3);
    // 0x803F1C10: swc1        $f10, 0x940($v1)
    MEM_W(0X940, ctx->r3) = ctx->f10.u32l;
    // 0x803F1C14: lw          $t8, 0xC8($s0)
    ctx->r24 = MEM_W(ctx->r16, 0XC8);
    // 0x803F1C18: addiu       $t2, $zero, 0x4
    ctx->r10 = ADD32(0, 0X4);
    // 0x803F1C1C: sh          $t7, 0x938($t8)
    MEM_H(0X938, ctx->r24) = ctx->r15;
    // 0x803F1C20: lw          $v1, 0xC8($s0)
    ctx->r3 = MEM_W(ctx->r16, 0XC8);
    // 0x803F1C24: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x803F1C28: lw          $t9, 0x24($v1)
    ctx->r25 = MEM_W(ctx->r3, 0X24);
    // 0x803F1C2C: nop

    // 0x803F1C30: lh          $t0, 0x8B8($t9)
    ctx->r8 = MEM_H(ctx->r25, 0X8B8);
    // 0x803F1C34: nop

    // 0x803F1C38: sh          $t0, 0x93C($v1)
    MEM_H(0X93C, ctx->r3) = ctx->r8;
    // 0x803F1C3C: lw          $t1, 0xC8($s0)
    ctx->r9 = MEM_W(ctx->r16, 0XC8);
    // 0x803F1C40: nop

    // 0x803F1C44: sh          $zero, 0x93E($t1)
    MEM_H(0X93E, ctx->r9) = 0;
    // 0x803F1C48: lw          $t3, 0xC8($s0)
    ctx->r11 = MEM_W(ctx->r16, 0XC8);
    // 0x803F1C4C: b           L_803F1C58
    // 0x803F1C50: sh          $t2, 0x93A($t3)
    MEM_H(0X93A, ctx->r11) = ctx->r10;
        goto L_803F1C58;
    // 0x803F1C50: sh          $t2, 0x93A($t3)
    MEM_H(0X93A, ctx->r11) = ctx->r10;
L_803F1C54:
    // 0x803F1C54: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_803F1C58:
    // 0x803F1C58: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x803F1C5C: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x803F1C60: jr          $ra
    // 0x803F1C64: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x803F1C64: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void ovl_803F0000_menu_func_803F1B48(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803F1B48: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    // 0x803F1B4C: beq         $v0, $zero, L_803F1C54
    if (ctx->r2 == 0) {
        // 0x803F1B50: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_803F1C54;
    }
    // 0x803F1B50: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x803F1B54: jal         0x803F3720
    // 0x803F1B58: addiu       $a1, $zero, 0xFA
    ctx->r5 = ADD32(0, 0XFA);
    ovl_803F0000_menu_func_803F3720(rdram, ctx);
        goto after_0;
    // 0x803F1B58: addiu       $a1, $zero, 0xFA
    ctx->r5 = ADD32(0, 0XFA);
    after_0:
    // 0x803F1B5C: lw          $v1, 0xC8($s0)
    ctx->r3 = MEM_W(ctx->r16, 0XC8);
    // 0x803F1B60: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x803F1B64: lhu         $t2, 0x95C($v1)
    ctx->r10 = MEM_HU(ctx->r3, 0X95C);
    // 0x803F1B68: nop

    // 0x803F1B6C: ori         $t3, $t2, 0x4000
    ctx->r11 = ctx->r10 | 0X4000;
    // 0x803F1B70: b           L_803F1C58
    // 0x803F1B74: sh          $t3, 0x95C($v1)
    MEM_H(0X95C, ctx->r3) = ctx->r11;
        goto L_803F1C58;
    // 0x803F1B74: sh          $t3, 0x95C($v1)
    MEM_H(0X95C, ctx->r3) = ctx->r11;
    // 0x803F1B78: slti        $at, $v0, 0x158
    ctx->r1 = SIGNED(ctx->r2) < 0X158 ? 1 : 0;
    // 0x803F1B7C: beq         $at, $zero, L_803F1BBC
    if (ctx->r1 == 0) {
        // 0x803F1B80: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_803F1BBC;
    }
    // 0x803F1B80: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x803F1B84: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    // 0x803F1B88: jal         0x803F1914
    // 0x803F1B8C: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    ovl_803F0000_menu_func_803F1914(rdram, ctx);
        goto after_1;
    // 0x803F1B8C: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_1:
    // 0x803F1B90: beq         $v0, $zero, L_803F1C54
    if (ctx->r2 == 0) {
        // 0x803F1B94: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_803F1C54;
    }
    // 0x803F1B94: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x803F1B98: jal         0x803F3720
    // 0x803F1B9C: addiu       $a1, $zero, 0x158
    ctx->r5 = ADD32(0, 0X158);
    ovl_803F0000_menu_func_803F3720(rdram, ctx);
        goto after_2;
    // 0x803F1B9C: addiu       $a1, $zero, 0x158
    ctx->r5 = ADD32(0, 0X158);
    after_2:
    // 0x803F1BA0: lw          $v1, 0xC8($s0)
    ctx->r3 = MEM_W(ctx->r16, 0XC8);
    // 0x803F1BA4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x803F1BA8: lhu         $t4, 0x95C($v1)
    ctx->r12 = MEM_HU(ctx->r3, 0X95C);
    // 0x803F1BAC: nop

    // 0x803F1BB0: ori         $t5, $t4, 0x4000
    ctx->r13 = ctx->r12 | 0X4000;
    // 0x803F1BB4: b           L_803F1C58
    // 0x803F1BB8: sh          $t5, 0x95C($v1)
    MEM_H(0X95C, ctx->r3) = ctx->r13;
        goto L_803F1C58;
    // 0x803F1BB8: sh          $t5, 0x95C($v1)
    MEM_H(0X95C, ctx->r3) = ctx->r13;
L_803F1BBC:
    // 0x803F1BBC: lw          $a1, 0x4C($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X4C);
    // 0x803F1BC0: lw          $a2, 0x44($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X44);
    // 0x803F1BC4: jal         0x8027200C
    // 0x803F1BC8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    LOOKUP_FUNC(0x8027200C)(rdram, ctx);
        goto after_3;
    // 0x803F1BC8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_3:
    // 0x803F1BCC: bne         $v0, $zero, L_803F1C58
    if (ctx->r2 != 0) {
        // 0x803F1BD0: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_803F1C58;
    }
    // 0x803F1BD0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x803F1BD4: lw          $v1, 0xC8($s0)
    ctx->r3 = MEM_W(ctx->r16, 0XC8);
    // 0x803F1BD8: lui         $at, 0x4316
    ctx->r1 = S32(0X4316 << 16);
    // 0x803F1BDC: lw          $t6, 0x24($v1)
    ctx->r14 = MEM_W(ctx->r3, 0X24);
    // 0x803F1BE0: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x803F1BE4: lwc1        $f18, 0x8BC($t6)
    ctx->f18.u32l = MEM_W(ctx->r14, 0X8BC);
    // 0x803F1BE8: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x803F1BEC: c.lt.s      $f18, $f4
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f18.fl < ctx->f4.fl;
    // 0x803F1BF0: nop

    // 0x803F1BF4: bc1f        L_803F1C58
    if (!c1cs) {
        // 0x803F1BF8: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_803F1C58;
    }
    // 0x803F1BF8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x803F1BFC: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x803F1C00: lui         $at, 0x803F
    ctx->r1 = S32(0X803F << 16);
    // 0x803F1C04: swc1        $f6, 0xB8($s0)
    MEM_W(0XB8, ctx->r16) = ctx->f6.u32l;
    // 0x803F1C08: lwc1        $f10, 0x7C08($at)
    ctx->f10.u32l = MEM_W(ctx->r1, 0X7C08);
    // 0x803F1C0C: addiu       $t7, $zero, 0x3
    ctx->r15 = ADD32(0, 0X3);
    // 0x803F1C10: swc1        $f10, 0x940($v1)
    MEM_W(0X940, ctx->r3) = ctx->f10.u32l;
    // 0x803F1C14: lw          $t8, 0xC8($s0)
    ctx->r24 = MEM_W(ctx->r16, 0XC8);
    // 0x803F1C18: addiu       $t2, $zero, 0x4
    ctx->r10 = ADD32(0, 0X4);
    // 0x803F1C1C: sh          $t7, 0x938($t8)
    MEM_H(0X938, ctx->r24) = ctx->r15;
    // 0x803F1C20: lw          $v1, 0xC8($s0)
    ctx->r3 = MEM_W(ctx->r16, 0XC8);
    // 0x803F1C24: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x803F1C28: lw          $t9, 0x24($v1)
    ctx->r25 = MEM_W(ctx->r3, 0X24);
    // 0x803F1C2C: nop

    // 0x803F1C30: lh          $t0, 0x8B8($t9)
    ctx->r8 = MEM_H(ctx->r25, 0X8B8);
    // 0x803F1C34: nop

    // 0x803F1C38: sh          $t0, 0x93C($v1)
    MEM_H(0X93C, ctx->r3) = ctx->r8;
    // 0x803F1C3C: lw          $t1, 0xC8($s0)
    ctx->r9 = MEM_W(ctx->r16, 0XC8);
    // 0x803F1C40: nop

    // 0x803F1C44: sh          $zero, 0x93E($t1)
    MEM_H(0X93E, ctx->r9) = 0;
    // 0x803F1C48: lw          $t3, 0xC8($s0)
    ctx->r11 = MEM_W(ctx->r16, 0XC8);
    // 0x803F1C4C: b           L_803F1C58
    // 0x803F1C50: sh          $t2, 0x93A($t3)
    MEM_H(0X93A, ctx->r11) = ctx->r10;
        goto L_803F1C58;
    // 0x803F1C50: sh          $t2, 0x93A($t3)
    MEM_H(0X93A, ctx->r11) = ctx->r10;
L_803F1C54:
    // 0x803F1C54: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_803F1C58:
    // 0x803F1C58: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x803F1C5C: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x803F1C60: jr          $ra
    // 0x803F1C64: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x803F1C64: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void ovl_803F0000_menu_func_803F1BCC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803F1BCC: bne         $v0, $zero, L_803F1C58
    if (ctx->r2 != 0) {
        // 0x803F1BD0: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_803F1C58;
    }
    // 0x803F1BD0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x803F1BD4: lw          $v1, 0xC8($s0)
    ctx->r3 = MEM_W(ctx->r16, 0XC8);
    // 0x803F1BD8: lui         $at, 0x4316
    ctx->r1 = S32(0X4316 << 16);
    // 0x803F1BDC: lw          $t6, 0x24($v1)
    ctx->r14 = MEM_W(ctx->r3, 0X24);
    // 0x803F1BE0: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x803F1BE4: lwc1        $f18, 0x8BC($t6)
    ctx->f18.u32l = MEM_W(ctx->r14, 0X8BC);
    // 0x803F1BE8: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x803F1BEC: c.lt.s      $f18, $f4
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f18.fl < ctx->f4.fl;
    // 0x803F1BF0: nop

    // 0x803F1BF4: bc1f        L_803F1C58
    if (!c1cs) {
        // 0x803F1BF8: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_803F1C58;
    }
    // 0x803F1BF8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x803F1BFC: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x803F1C00: lui         $at, 0x803F
    ctx->r1 = S32(0X803F << 16);
    // 0x803F1C04: swc1        $f6, 0xB8($s0)
    MEM_W(0XB8, ctx->r16) = ctx->f6.u32l;
    // 0x803F1C08: lwc1        $f10, 0x7C08($at)
    ctx->f10.u32l = MEM_W(ctx->r1, 0X7C08);
    // 0x803F1C0C: addiu       $t7, $zero, 0x3
    ctx->r15 = ADD32(0, 0X3);
    // 0x803F1C10: swc1        $f10, 0x940($v1)
    MEM_W(0X940, ctx->r3) = ctx->f10.u32l;
    // 0x803F1C14: lw          $t8, 0xC8($s0)
    ctx->r24 = MEM_W(ctx->r16, 0XC8);
    // 0x803F1C18: addiu       $t2, $zero, 0x4
    ctx->r10 = ADD32(0, 0X4);
    // 0x803F1C1C: sh          $t7, 0x938($t8)
    MEM_H(0X938, ctx->r24) = ctx->r15;
    // 0x803F1C20: lw          $v1, 0xC8($s0)
    ctx->r3 = MEM_W(ctx->r16, 0XC8);
    // 0x803F1C24: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x803F1C28: lw          $t9, 0x24($v1)
    ctx->r25 = MEM_W(ctx->r3, 0X24);
    // 0x803F1C2C: nop

    // 0x803F1C30: lh          $t0, 0x8B8($t9)
    ctx->r8 = MEM_H(ctx->r25, 0X8B8);
    // 0x803F1C34: nop

    // 0x803F1C38: sh          $t0, 0x93C($v1)
    MEM_H(0X93C, ctx->r3) = ctx->r8;
    // 0x803F1C3C: lw          $t1, 0xC8($s0)
    ctx->r9 = MEM_W(ctx->r16, 0XC8);
    // 0x803F1C40: nop

    // 0x803F1C44: sh          $zero, 0x93E($t1)
    MEM_H(0X93E, ctx->r9) = 0;
    // 0x803F1C48: lw          $t3, 0xC8($s0)
    ctx->r11 = MEM_W(ctx->r16, 0XC8);
    // 0x803F1C4C: b           L_803F1C58
    // 0x803F1C50: sh          $t2, 0x93A($t3)
    MEM_H(0X93A, ctx->r11) = ctx->r10;
        goto L_803F1C58;
    // 0x803F1C50: sh          $t2, 0x93A($t3)
    MEM_H(0X93A, ctx->r11) = ctx->r10;
    // 0x803F1C54: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_803F1C58:
    // 0x803F1C58: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x803F1C5C: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x803F1C60: jr          $ra
    // 0x803F1C64: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x803F1C64: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void ovl_803F0000_menu_func_803F1C68(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803F1C68: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x803F1C6C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x803F1C70: lw          $t7, 0xC8($a0)
    ctx->r15 = MEM_W(ctx->r4, 0XC8);
    // 0x803F1C74: addiu       $t6, $zero, 0x15
    ctx->r14 = ADD32(0, 0X15);
    // 0x803F1C78: sh          $t6, 0x938($t7)
    MEM_H(0X938, ctx->r15) = ctx->r14;
    // 0x803F1C7C: lw          $v0, 0xC8($a0)
    ctx->r2 = MEM_W(ctx->r4, 0XC8);
    // 0x803F1C80: addiu       $v1, $zero, -0x1E
    ctx->r3 = ADD32(0, -0X1E);
    // 0x803F1C84: lhu         $t8, 0x8($v0)
    ctx->r24 = MEM_HU(ctx->r2, 0X8);
    // 0x803F1C88: nop

    // 0x803F1C8C: andi        $t9, $t8, 0x1
    ctx->r25 = ctx->r24 & 0X1;
    // 0x803F1C90: beq         $t9, $zero, L_803F1CA0
    if (ctx->r25 == 0) {
        // 0x803F1C94: nop
    
            goto L_803F1CA0;
    }
    // 0x803F1C94: nop

    // 0x803F1C98: b           L_803F1CA0
    // 0x803F1C9C: addiu       $v1, $zero, 0x1E
    ctx->r3 = ADD32(0, 0X1E);
        goto L_803F1CA0;
    // 0x803F1C9C: addiu       $v1, $zero, 0x1E
    ctx->r3 = ADD32(0, 0X1E);
L_803F1CA0:
    // 0x803F1CA0: mtc1        $v1, $f4
    ctx->f4.u32l = ctx->r3;
    // 0x803F1CA4: lwc1        $f8, 0x4C($a0)
    ctx->f8.u32l = MEM_W(ctx->r4, 0X4C);
    // 0x803F1CA8: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x803F1CAC: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x803F1CB0: add.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x803F1CB4: cfc1        $t0, $FpcCsr
    ctx->r8 = get_cop1_cs();
    // 0x803F1CB8: nop

    // 0x803F1CBC: ori         $at, $t0, 0x3
    ctx->r1 = ctx->r8 | 0X3;
    // 0x803F1CC0: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x803F1CC4: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x803F1CC8: lui         $at, 0x803F
    ctx->r1 = S32(0X803F << 16);
    // 0x803F1CCC: cvt.w.s     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.u32l = CVT_W_S(ctx->f10.fl);
    // 0x803F1CD0: mfc1        $t1, $f16
    ctx->r9 = (int32_t)ctx->f16.u32l;
    // 0x803F1CD4: ctc1        $t0, $FpcCsr
    set_cop1_cs(ctx->r8);
    // 0x803F1CD8: sh          $t1, 0x93C($v0)
    MEM_H(0X93C, ctx->r2) = ctx->r9;
    // 0x803F1CDC: lwc1        $f0, 0x44($a0)
    ctx->f0.u32l = MEM_W(ctx->r4, 0X44);
    // 0x803F1CE0: nop

    // 0x803F1CE4: c.lt.s      $f18, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f18.fl < ctx->f0.fl;
    // 0x803F1CE8: nop

    // 0x803F1CEC: bc1f        L_803F1D30
    if (!c1cs) {
        // 0x803F1CF0: nop
    
            goto L_803F1D30;
    }
    // 0x803F1CF0: nop

    // 0x803F1CF4: lui         $at, 0x803F
    ctx->r1 = S32(0X803F << 16);
    // 0x803F1CF8: lwc1        $f4, 0x7C0C($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X7C0C);
    // 0x803F1CFC: nop

    // 0x803F1D00: sub.s       $f6, $f4, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = ctx->f4.fl - ctx->f0.fl;
    // 0x803F1D04: cfc1        $t2, $FpcCsr
    ctx->r10 = get_cop1_cs();
    // 0x803F1D08: nop

    // 0x803F1D0C: ori         $at, $t2, 0x3
    ctx->r1 = ctx->r10 | 0X3;
    // 0x803F1D10: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x803F1D14: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x803F1D18: nop

    // 0x803F1D1C: cvt.w.s     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.u32l = CVT_W_S(ctx->f6.fl);
    // 0x803F1D20: mfc1        $v0, $f8
    ctx->r2 = (int32_t)ctx->f8.u32l;
    // 0x803F1D24: ctc1        $t2, $FpcCsr
    set_cop1_cs(ctx->r10);
    // 0x803F1D28: b           L_803F1D68
    // 0x803F1D2C: addiu       $at, $zero, 0x5
    ctx->r1 = ADD32(0, 0X5);
        goto L_803F1D68;
    // 0x803F1D2C: addiu       $at, $zero, 0x5
    ctx->r1 = ADD32(0, 0X5);
L_803F1D30:
    // 0x803F1D30: lwc1        $f10, 0x7C10($at)
    ctx->f10.u32l = MEM_W(ctx->r1, 0X7C10);
    // 0x803F1D34: nop

    // 0x803F1D38: sub.s       $f16, $f10, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f16.fl = ctx->f10.fl - ctx->f0.fl;
    // 0x803F1D3C: cfc1        $t3, $FpcCsr
    ctx->r11 = get_cop1_cs();
    // 0x803F1D40: nop

    // 0x803F1D44: ori         $at, $t3, 0x3
    ctx->r1 = ctx->r11 | 0X3;
    // 0x803F1D48: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x803F1D4C: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x803F1D50: nop

    // 0x803F1D54: cvt.w.s     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.u32l = CVT_W_S(ctx->f16.fl);
    // 0x803F1D58: ctc1        $t3, $FpcCsr
    set_cop1_cs(ctx->r11);
    // 0x803F1D5C: mfc1        $v0, $f18
    ctx->r2 = (int32_t)ctx->f18.u32l;
    // 0x803F1D60: nop

    // 0x803F1D64: addiu       $at, $zero, 0x5
    ctx->r1 = ADD32(0, 0X5);
L_803F1D68:
    // 0x803F1D68: div         $zero, $v0, $at
    lo = S32(S64(S32(ctx->r2)) / S64(S32(ctx->r1))); hi = S32(S64(S32(ctx->r2)) % S64(S32(ctx->r1)));
    // 0x803F1D6C: lw          $t7, 0xC8($a0)
    ctx->r15 = MEM_W(ctx->r4, 0XC8);
    // 0x803F1D70: mflo        $v0
    ctx->r2 = lo;
    // 0x803F1D74: mtc1        $v0, $f4
    ctx->f4.u32l = ctx->r2;
    // 0x803F1D78: nop

    // 0x803F1D7C: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x803F1D80: add.s       $f8, $f0, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f0.fl + ctx->f6.fl;
    // 0x803F1D84: cfc1        $t5, $FpcCsr
    ctx->r13 = get_cop1_cs();
    // 0x803F1D88: nop

    // 0x803F1D8C: ori         $at, $t5, 0x3
    ctx->r1 = ctx->r13 | 0X3;
    // 0x803F1D90: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x803F1D94: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x803F1D98: nop

    // 0x803F1D9C: cvt.w.s     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.u32l = CVT_W_S(ctx->f8.fl);
    // 0x803F1DA0: mfc1        $t6, $f10
    ctx->r14 = (int32_t)ctx->f10.u32l;
    // 0x803F1DA4: ctc1        $t5, $FpcCsr
    set_cop1_cs(ctx->r13);
    // 0x803F1DA8: sh          $t6, 0x93E($t7)
    MEM_H(0X93E, ctx->r15) = ctx->r14;
    // 0x803F1DAC: lw          $t8, 0xC8($a0)
    ctx->r24 = MEM_W(ctx->r4, 0XC8);
    // 0x803F1DB0: nop

    // 0x803F1DB4: sh          $zero, 0x93A($t8)
    MEM_H(0X93A, ctx->r24) = 0;
    // 0x803F1DB8: lw          $a1, 0xC8($a0)
    ctx->r5 = MEM_W(ctx->r4, 0XC8);
    // 0x803F1DBC: jal         0x803F17BC
    // 0x803F1DC0: addiu       $a1, $a1, 0x938
    ctx->r5 = ADD32(ctx->r5, 0X938);
    ovl_803F0000_menu_func_803F17BC(rdram, ctx);
        goto after_0;
    // 0x803F1DC0: addiu       $a1, $a1, 0x938
    ctx->r5 = ADD32(ctx->r5, 0X938);
    after_0:
    // 0x803F1DC4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x803F1DC8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x803F1DCC: jr          $ra
    // 0x803F1DD0: nop

    return;
    // 0x803F1DD0: nop

;}
RECOMP_FUNC void ovl_803F0000_menu_func_803F1CE4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803F1CE4: c.lt.s      $f18, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f18.fl < ctx->f0.fl;
    // 0x803F1CE8: nop

    // 0x803F1CEC: bc1f        L_803F1D30
    if (!c1cs) {
        // 0x803F1CF0: nop
    
            goto L_803F1D30;
    }
    // 0x803F1CF0: nop

    // 0x803F1CF4: lui         $at, 0x803F
    ctx->r1 = S32(0X803F << 16);
    // 0x803F1CF8: lwc1        $f4, 0x7C0C($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X7C0C);
    // 0x803F1CFC: nop

    // 0x803F1D00: sub.s       $f6, $f4, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = ctx->f4.fl - ctx->f0.fl;
    // 0x803F1D04: cfc1        $t2, $FpcCsr
    ctx->r10 = get_cop1_cs();
    // 0x803F1D08: nop

    // 0x803F1D0C: ori         $at, $t2, 0x3
    ctx->r1 = ctx->r10 | 0X3;
    // 0x803F1D10: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x803F1D14: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x803F1D18: nop

    // 0x803F1D1C: cvt.w.s     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.u32l = CVT_W_S(ctx->f6.fl);
    // 0x803F1D20: mfc1        $v0, $f8
    ctx->r2 = (int32_t)ctx->f8.u32l;
    // 0x803F1D24: ctc1        $t2, $FpcCsr
    set_cop1_cs(ctx->r10);
    // 0x803F1D28: b           L_803F1D68
    // 0x803F1D2C: addiu       $at, $zero, 0x5
    ctx->r1 = ADD32(0, 0X5);
        goto L_803F1D68;
    // 0x803F1D2C: addiu       $at, $zero, 0x5
    ctx->r1 = ADD32(0, 0X5);
L_803F1D30:
    // 0x803F1D30: lwc1        $f10, 0x7C10($at)
    ctx->f10.u32l = MEM_W(ctx->r1, 0X7C10);
    // 0x803F1D34: nop

    // 0x803F1D38: sub.s       $f16, $f10, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f16.fl = ctx->f10.fl - ctx->f0.fl;
    // 0x803F1D3C: cfc1        $t3, $FpcCsr
    ctx->r11 = get_cop1_cs();
    // 0x803F1D40: nop

    // 0x803F1D44: ori         $at, $t3, 0x3
    ctx->r1 = ctx->r11 | 0X3;
    // 0x803F1D48: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x803F1D4C: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x803F1D50: nop

    // 0x803F1D54: cvt.w.s     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.u32l = CVT_W_S(ctx->f16.fl);
    // 0x803F1D58: ctc1        $t3, $FpcCsr
    set_cop1_cs(ctx->r11);
    // 0x803F1D5C: mfc1        $v0, $f18
    ctx->r2 = (int32_t)ctx->f18.u32l;
    // 0x803F1D60: nop

    // 0x803F1D64: addiu       $at, $zero, 0x5
    ctx->r1 = ADD32(0, 0X5);
L_803F1D68:
    // 0x803F1D68: div         $zero, $v0, $at
    lo = S32(S64(S32(ctx->r2)) / S64(S32(ctx->r1))); hi = S32(S64(S32(ctx->r2)) % S64(S32(ctx->r1)));
    // 0x803F1D6C: lw          $t7, 0xC8($a0)
    ctx->r15 = MEM_W(ctx->r4, 0XC8);
    // 0x803F1D70: mflo        $v0
    ctx->r2 = lo;
    // 0x803F1D74: mtc1        $v0, $f4
    ctx->f4.u32l = ctx->r2;
    // 0x803F1D78: nop

    // 0x803F1D7C: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x803F1D80: add.s       $f8, $f0, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f0.fl + ctx->f6.fl;
    // 0x803F1D84: cfc1        $t5, $FpcCsr
    ctx->r13 = get_cop1_cs();
    // 0x803F1D88: nop

    // 0x803F1D8C: ori         $at, $t5, 0x3
    ctx->r1 = ctx->r13 | 0X3;
    // 0x803F1D90: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x803F1D94: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x803F1D98: nop

    // 0x803F1D9C: cvt.w.s     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.u32l = CVT_W_S(ctx->f8.fl);
    // 0x803F1DA0: mfc1        $t6, $f10
    ctx->r14 = (int32_t)ctx->f10.u32l;
    // 0x803F1DA4: ctc1        $t5, $FpcCsr
    set_cop1_cs(ctx->r13);
    // 0x803F1DA8: sh          $t6, 0x93E($t7)
    MEM_H(0X93E, ctx->r15) = ctx->r14;
    // 0x803F1DAC: lw          $t8, 0xC8($a0)
    ctx->r24 = MEM_W(ctx->r4, 0XC8);
    // 0x803F1DB0: nop

    // 0x803F1DB4: sh          $zero, 0x93A($t8)
    MEM_H(0X93A, ctx->r24) = 0;
    // 0x803F1DB8: lw          $a1, 0xC8($a0)
    ctx->r5 = MEM_W(ctx->r4, 0XC8);
    // 0x803F1DBC: jal         0x803F17BC
    // 0x803F1DC0: addiu       $a1, $a1, 0x938
    ctx->r5 = ADD32(ctx->r5, 0X938);
    ovl_803F0000_menu_func_803F17BC(rdram, ctx);
        goto after_0;
    // 0x803F1DC0: addiu       $a1, $a1, 0x938
    ctx->r5 = ADD32(ctx->r5, 0X938);
    after_0:
    // 0x803F1DC4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x803F1DC8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x803F1DCC: jr          $ra
    // 0x803F1DD0: nop

    return;
    // 0x803F1DD0: nop

;}
RECOMP_FUNC void ovl_803F0000_menu_func_803F1DBC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803F1DBC: jal         0x803F17BC
    // 0x803F1DC0: addiu       $a1, $a1, 0x938
    ctx->r5 = ADD32(ctx->r5, 0X938);
    ovl_803F0000_menu_func_803F17BC(rdram, ctx);
        goto after_0;
    // 0x803F1DC0: addiu       $a1, $a1, 0x938
    ctx->r5 = ADD32(ctx->r5, 0X938);
    after_0:
    // 0x803F1DC4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x803F1DC8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x803F1DCC: jr          $ra
    // 0x803F1DD0: nop

    return;
    // 0x803F1DD0: nop

;}
RECOMP_FUNC void ovl_803F0000_menu_func_803F1DD4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803F1DD4: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x803F1DD8: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x803F1DDC: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x803F1DE0: lw          $t6, 0xC8($a0)
    ctx->r14 = MEM_W(ctx->r4, 0XC8);
    // 0x803F1DE4: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x803F1DE8: sh          $zero, 0x948($t6)
    MEM_H(0X948, ctx->r14) = 0;
    // 0x803F1DEC: lw          $t7, 0xC8($a0)
    ctx->r15 = MEM_W(ctx->r4, 0XC8);
    // 0x803F1DF0: lwc1        $f4, 0x5C($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X5C);
    // 0x803F1DF4: nop

    // 0x803F1DF8: swc1        $f4, 0x940($t7)
    MEM_W(0X940, ctx->r15) = ctx->f4.u32l;
    // 0x803F1DFC: lw          $v0, 0xC8($a0)
    ctx->r2 = MEM_W(ctx->r4, 0XC8);
    // 0x803F1E00: nop

    // 0x803F1E04: lw          $v1, 0x24($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X24);
    // 0x803F1E08: nop

    // 0x803F1E0C: lhu         $t8, 0x318($v1)
    ctx->r24 = MEM_HU(ctx->r3, 0X318);
    // 0x803F1E10: lw          $t0, 0x18($v1)
    ctx->r8 = MEM_W(ctx->r3, 0X18);
    // 0x803F1E14: sll         $t9, $t8, 5
    ctx->r25 = S32(ctx->r24 << 5);
    // 0x803F1E18: subu        $t9, $t9, $t8
    ctx->r25 = SUB32(ctx->r25, ctx->r24);
    // 0x803F1E1C: sll         $t9, $t9, 3
    ctx->r25 = S32(ctx->r25 << 3);
    // 0x803F1E20: addu        $t1, $t9, $t0
    ctx->r9 = ADD32(ctx->r25, ctx->r8);
    // 0x803F1E24: sw          $t1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r9;
    // 0x803F1E28: lh          $a1, 0x8B0($v0)
    ctx->r5 = MEM_H(ctx->r2, 0X8B0);
    // 0x803F1E2C: nop

    // 0x803F1E30: bgez        $a1, L_803F1E6C
    if (SIGNED(ctx->r5) >= 0) {
        // 0x803F1E34: slti        $at, $a1, 0x64
        ctx->r1 = SIGNED(ctx->r5) < 0X64 ? 1 : 0;
            goto L_803F1E6C;
    }
    // 0x803F1E34: slti        $at, $a1, 0x64
    ctx->r1 = SIGNED(ctx->r5) < 0X64 ? 1 : 0;
    // 0x803F1E38: lhu         $t2, 0x2C($a0)
    ctx->r10 = MEM_HU(ctx->r4, 0X2C);
    // 0x803F1E3C: nop

    // 0x803F1E40: andi        $t3, $t2, 0x1
    ctx->r11 = ctx->r10 & 0X1;
    // 0x803F1E44: beq         $t3, $zero, L_803F1E5C
    if (ctx->r11 == 0) {
        // 0x803F1E48: nop
    
            goto L_803F1E5C;
    }
    // 0x803F1E48: nop

    // 0x803F1E4C: jal         0x803F23D0
    // 0x803F1E50: nop

    ovl_803F0000_menu_func_803F23D0(rdram, ctx);
        goto after_0;
    // 0x803F1E50: nop

    after_0:
    // 0x803F1E54: b           L_803F216C
    // 0x803F1E58: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_803F216C;
    // 0x803F1E58: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_803F1E5C:
    // 0x803F1E5C: jal         0x803F1C68
    // 0x803F1E60: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_803F0000_menu_func_803F1C68(rdram, ctx);
        goto after_1;
    // 0x803F1E60: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
    // 0x803F1E64: b           L_803F216C
    // 0x803F1E68: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_803F216C;
    // 0x803F1E68: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_803F1E6C:
    // 0x803F1E6C: beq         $at, $zero, L_803F1F30
    if (ctx->r1 == 0) {
        // 0x803F1E70: lui         $t4, 0x8028
        ctx->r12 = S32(0X8028 << 16);
            goto L_803F1F30;
    }
    // 0x803F1E70: lui         $t4, 0x8028
    ctx->r12 = S32(0X8028 << 16);
    // 0x803F1E74: jal         0x803F1C68
    // 0x803F1E78: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_803F0000_menu_func_803F1C68(rdram, ctx);
        goto after_2;
    // 0x803F1E78: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_2:
    // 0x803F1E7C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x803F1E80: addiu       $a1, $zero, 0x500
    ctx->r5 = ADD32(0, 0X500);
    // 0x803F1E84: jal         0x803F11B4
    // 0x803F1E88: addiu       $a2, $zero, 0x143
    ctx->r6 = ADD32(0, 0X143);
    ovl_803F0000_menu_func_803F11B4(rdram, ctx);
        goto after_3;
    // 0x803F1E88: addiu       $a2, $zero, 0x143
    ctx->r6 = ADD32(0, 0X143);
    after_3:
    // 0x803F1E8C: beq         $v0, $zero, L_803F1EA0
    if (ctx->r2 == 0) {
        // 0x803F1E90: addiu       $t4, $zero, 0xA
        ctx->r12 = ADD32(0, 0XA);
            goto L_803F1EA0;
    }
    // 0x803F1E90: addiu       $t4, $zero, 0xA
    ctx->r12 = ADD32(0, 0XA);
    // 0x803F1E94: lw          $t5, 0xC8($s0)
    ctx->r13 = MEM_W(ctx->r16, 0XC8);
    // 0x803F1E98: b           L_803F1EE8
    // 0x803F1E9C: sh          $t4, 0x938($t5)
    MEM_H(0X938, ctx->r13) = ctx->r12;
        goto L_803F1EE8;
    // 0x803F1E9C: sh          $t4, 0x938($t5)
    MEM_H(0X938, ctx->r13) = ctx->r12;
L_803F1EA0:
    // 0x803F1EA0: lwc1        $f12, 0x44($s0)
    ctx->f12.u32l = MEM_W(ctx->r16, 0X44);
    // 0x803F1EA4: jal         0x80272AEC
    // 0x803F1EA8: nop

    LOOKUP_FUNC(0x80272AEC)(rdram, ctx);
        goto after_4;
    // 0x803F1EA8: nop

    after_4:
    // 0x803F1EAC: lui         $at, 0x803F
    ctx->r1 = S32(0X803F << 16);
    // 0x803F1EB0: lwc1        $f6, 0x7C14($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X7C14);
    // 0x803F1EB4: nop

    // 0x803F1EB8: c.lt.s      $f0, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f0.fl < ctx->f6.fl;
    // 0x803F1EBC: nop

    // 0x803F1EC0: bc1f        L_803F1EEC
    if (!c1cs) {
        // 0x803F1EC4: lw          $t0, 0x20($sp)
        ctx->r8 = MEM_W(ctx->r29, 0X20);
            goto L_803F1EEC;
    }
    // 0x803F1EC4: lw          $t0, 0x20($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X20);
    // 0x803F1EC8: lhu         $t6, 0x2C($s0)
    ctx->r14 = MEM_HU(ctx->r16, 0X2C);
    // 0x803F1ECC: nop

    // 0x803F1ED0: andi        $t7, $t6, 0x1
    ctx->r15 = ctx->r14 & 0X1;
    // 0x803F1ED4: beq         $t7, $zero, L_803F1EEC
    if (ctx->r15 == 0) {
        // 0x803F1ED8: lw          $t0, 0x20($sp)
        ctx->r8 = MEM_W(ctx->r29, 0X20);
            goto L_803F1EEC;
    }
    // 0x803F1ED8: lw          $t0, 0x20($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X20);
    // 0x803F1EDC: lw          $t9, 0xC8($s0)
    ctx->r25 = MEM_W(ctx->r16, 0XC8);
    // 0x803F1EE0: addiu       $t8, $zero, 0xA
    ctx->r24 = ADD32(0, 0XA);
    // 0x803F1EE4: sh          $t8, 0x938($t9)
    MEM_H(0X938, ctx->r25) = ctx->r24;
L_803F1EE8:
    // 0x803F1EE8: lw          $t0, 0x20($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X20);
L_803F1EEC:
    // 0x803F1EEC: lui         $at, 0x42A0
    ctx->r1 = S32(0X42A0 << 16);
    // 0x803F1EF0: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x803F1EF4: lwc1        $f10, 0x84($t0)
    ctx->f10.u32l = MEM_W(ctx->r8, 0X84);
    // 0x803F1EF8: lui         $t1, 0x8028
    ctx->r9 = S32(0X8028 << 16);
    // 0x803F1EFC: c.lt.s      $f8, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f8.fl < ctx->f10.fl;
    // 0x803F1F00: nop

    // 0x803F1F04: bc1f        L_803F216C
    if (!c1cs) {
        // 0x803F1F08: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_803F216C;
    }
    // 0x803F1F08: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x803F1F0C: lh          $t1, -0x1B60($t1)
    ctx->r9 = MEM_H(ctx->r9, -0X1B60);
    // 0x803F1F10: lui         $at, 0x803F
    ctx->r1 = S32(0X803F << 16);
    // 0x803F1F14: andi        $t2, $t1, 0x1
    ctx->r10 = ctx->r9 & 0X1;
    // 0x803F1F18: beq         $t2, $zero, L_803F216C
    if (ctx->r10 == 0) {
        // 0x803F1F1C: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_803F216C;
    }
    // 0x803F1F1C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x803F1F20: lwc1        $f16, 0x7C18($at)
    ctx->f16.u32l = MEM_W(ctx->r1, 0X7C18);
    // 0x803F1F24: lw          $t3, 0xC8($s0)
    ctx->r11 = MEM_W(ctx->r16, 0XC8);
    // 0x803F1F28: b           L_803F2168
    // 0x803F1F2C: swc1        $f16, 0x940($t3)
    MEM_W(0X940, ctx->r11) = ctx->f16.u32l;
        goto L_803F2168;
    // 0x803F1F2C: swc1        $f16, 0x940($t3)
    MEM_W(0X940, ctx->r11) = ctx->f16.u32l;
L_803F1F30:
    // 0x803F1F30: lh          $t4, -0x1B60($t4)
    ctx->r12 = MEM_H(ctx->r12, -0X1B60);
    // 0x803F1F34: lui         $at, 0x803F
    ctx->r1 = S32(0X803F << 16);
    // 0x803F1F38: andi        $t5, $t4, 0x1
    ctx->r13 = ctx->r12 & 0X1;
    // 0x803F1F3C: beq         $t5, $zero, L_803F1F5C
    if (ctx->r13 == 0) {
        // 0x803F1F40: lui         $t6, 0x8009
        ctx->r14 = S32(0X8009 << 16);
            goto L_803F1F5C;
    }
    // 0x803F1F40: lui         $t6, 0x8009
    ctx->r14 = S32(0X8009 << 16);
    // 0x803F1F44: lwc1        $f19, 0x7C20($at)
    ctx->f_odd[(19 - 1) * 2] = MEM_W(ctx->r1, 0X7C20);
    // 0x803F1F48: lwc1        $f18, 0x7C24($at)
    ctx->f18.u32l = MEM_W(ctx->r1, 0X7C24);
    // 0x803F1F4C: nop

    // 0x803F1F50: cvt.s.d     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.d); 
    ctx->f4.fl = CVT_S_D(ctx->f18.d);
    // 0x803F1F54: b           L_803F1F70
    // 0x803F1F58: swc1        $f4, 0x940($v0)
    MEM_W(0X940, ctx->r2) = ctx->f4.u32l;
        goto L_803F1F70;
    // 0x803F1F58: swc1        $f4, 0x940($v0)
    MEM_W(0X940, ctx->r2) = ctx->f4.u32l;
L_803F1F5C:
    // 0x803F1F5C: lwc1        $f6, 0x5C($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X5C);
    // 0x803F1F60: nop

    // 0x803F1F64: cvt.d.s     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f8.d = CVT_D_S(ctx->f6.fl);
    // 0x803F1F68: cvt.s.d     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.d); 
    ctx->f10.fl = CVT_S_D(ctx->f8.d);
    // 0x803F1F6C: swc1        $f10, 0x940($v0)
    MEM_W(0X940, ctx->r2) = ctx->f10.u32l;
L_803F1F70:
    // 0x803F1F70: lw          $t6, 0x3B20($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X3B20);
    // 0x803F1F74: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x803F1F78: lwc1        $f18, 0x0($t6)
    ctx->f18.u32l = MEM_W(ctx->r14, 0X0);
    // 0x803F1F7C: addiu       $t7, $zero, 0x123
    ctx->r15 = ADD32(0, 0X123);
    // 0x803F1F80: c.lt.s      $f16, $f18
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f16.fl < ctx->f18.fl;
    // 0x803F1F84: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x803F1F88: bc1f        L_803F1F9C
    if (!c1cs) {
        // 0x803F1F8C: addiu       $a2, $zero, 0x1
        ctx->r6 = ADD32(0, 0X1);
            goto L_803F1F9C;
    }
    // 0x803F1F8C: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x803F1F90: lw          $t8, 0xC8($s0)
    ctx->r24 = MEM_W(ctx->r16, 0XC8);
    // 0x803F1F94: b           L_803F1FA8
    // 0x803F1F98: sh          $t7, 0x93E($t8)
    MEM_H(0X93E, ctx->r24) = ctx->r15;
        goto L_803F1FA8;
    // 0x803F1F98: sh          $t7, 0x93E($t8)
    MEM_H(0X93E, ctx->r24) = ctx->r15;
L_803F1F9C:
    // 0x803F1F9C: lw          $t0, 0xC8($s0)
    ctx->r8 = MEM_W(ctx->r16, 0XC8);
    // 0x803F1FA0: addiu       $t9, $zero, -0x123
    ctx->r25 = ADD32(0, -0X123);
    // 0x803F1FA4: sh          $t9, 0x93E($t0)
    MEM_H(0X93E, ctx->r8) = ctx->r25;
L_803F1FA8:
    // 0x803F1FA8: lw          $v0, 0xC8($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XC8);
    // 0x803F1FAC: nop

    // 0x803F1FB0: lh          $a1, 0x8B0($v0)
    ctx->r5 = MEM_H(ctx->r2, 0X8B0);
    // 0x803F1FB4: nop

    // 0x803F1FB8: slti        $at, $a1, 0x108
    ctx->r1 = SIGNED(ctx->r5) < 0X108 ? 1 : 0;
    // 0x803F1FBC: beq         $at, $zero, L_803F2100
    if (ctx->r1 == 0) {
        // 0x803F1FC0: slti        $at, $a1, 0x158
        ctx->r1 = SIGNED(ctx->r5) < 0X158 ? 1 : 0;
            goto L_803F2100;
    }
    // 0x803F1FC0: slti        $at, $a1, 0x158
    ctx->r1 = SIGNED(ctx->r5) < 0X158 ? 1 : 0;
    // 0x803F1FC4: jal         0x803F1914
    // 0x803F1FC8: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    ovl_803F0000_menu_func_803F1914(rdram, ctx);
        goto after_5;
    // 0x803F1FC8: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    after_5:
    // 0x803F1FCC: beq         $v0, $zero, L_803F2044
    if (ctx->r2 == 0) {
        // 0x803F1FD0: addiu       $t1, $zero, 0x16
        ctx->r9 = ADD32(0, 0X16);
            goto L_803F2044;
    }
    // 0x803F1FD0: addiu       $t1, $zero, 0x16
    ctx->r9 = ADD32(0, 0X16);
    // 0x803F1FD4: lw          $t2, 0xC8($s0)
    ctx->r10 = MEM_W(ctx->r16, 0XC8);
    // 0x803F1FD8: lui         $t3, 0x8009
    ctx->r11 = S32(0X8009 << 16);
    // 0x803F1FDC: sh          $t1, 0x938($t2)
    MEM_H(0X938, ctx->r10) = ctx->r9;
    // 0x803F1FE0: lw          $t3, 0x3B20($t3)
    ctx->r11 = MEM_W(ctx->r11, 0X3B20);
    // 0x803F1FE4: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x803F1FE8: lwc1        $f6, 0x0($t3)
    ctx->f6.u32l = MEM_W(ctx->r11, 0X0);
    // 0x803F1FEC: addiu       $t4, $zero, 0xC8
    ctx->r12 = ADD32(0, 0XC8);
    // 0x803F1FF0: c.lt.s      $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f4.fl < ctx->f6.fl;
    // 0x803F1FF4: addiu       $t1, $zero, -0x108
    ctx->r9 = ADD32(0, -0X108);
    // 0x803F1FF8: bc1f        L_803F200C
    if (!c1cs) {
        // 0x803F1FFC: addiu       $t0, $zero, 0x108
        ctx->r8 = ADD32(0, 0X108);
            goto L_803F200C;
    }
    // 0x803F1FFC: addiu       $t0, $zero, 0x108
    ctx->r8 = ADD32(0, 0X108);
    // 0x803F2000: lw          $t5, 0xC8($s0)
    ctx->r13 = MEM_W(ctx->r16, 0XC8);
    // 0x803F2004: b           L_803F2018
    // 0x803F2008: sh          $t4, 0x93E($t5)
    MEM_H(0X93E, ctx->r13) = ctx->r12;
        goto L_803F2018;
    // 0x803F2008: sh          $t4, 0x93E($t5)
    MEM_H(0X93E, ctx->r13) = ctx->r12;
L_803F200C:
    // 0x803F200C: lw          $t7, 0xC8($s0)
    ctx->r15 = MEM_W(ctx->r16, 0XC8);
    // 0x803F2010: addiu       $t6, $zero, -0xC8
    ctx->r14 = ADD32(0, -0XC8);
    // 0x803F2014: sh          $t6, 0x93E($t7)
    MEM_H(0X93E, ctx->r15) = ctx->r14;
L_803F2018:
    // 0x803F2018: lw          $v0, 0xC8($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XC8);
    // 0x803F201C: nop

    // 0x803F2020: lhu         $t8, 0x8($v0)
    ctx->r24 = MEM_HU(ctx->r2, 0X8);
    // 0x803F2024: nop

    // 0x803F2028: andi        $t9, $t8, 0x1
    ctx->r25 = ctx->r24 & 0X1;
    // 0x803F202C: beq         $t9, $zero, L_803F203C
    if (ctx->r25 == 0) {
        // 0x803F2030: nop
    
            goto L_803F203C;
    }
    // 0x803F2030: nop

    // 0x803F2034: b           L_803F2168
    // 0x803F2038: sh          $t0, 0x93C($v0)
    MEM_H(0X93C, ctx->r2) = ctx->r8;
        goto L_803F2168;
    // 0x803F2038: sh          $t0, 0x93C($v0)
    MEM_H(0X93C, ctx->r2) = ctx->r8;
L_803F203C:
    // 0x803F203C: b           L_803F2168
    // 0x803F2040: sh          $t1, 0x93C($v0)
    MEM_H(0X93C, ctx->r2) = ctx->r9;
        goto L_803F2168;
    // 0x803F2040: sh          $t1, 0x93C($v0)
    MEM_H(0X93C, ctx->r2) = ctx->r9;
L_803F2044:
    // 0x803F2044: jal         0x803F1C68
    // 0x803F2048: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_803F0000_menu_func_803F1C68(rdram, ctx);
        goto after_6;
    // 0x803F2048: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_6:
    // 0x803F204C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x803F2050: addiu       $a1, $zero, 0x500
    ctx->r5 = ADD32(0, 0X500);
    // 0x803F2054: jal         0x803F11B4
    // 0x803F2058: addiu       $a2, $zero, 0x143
    ctx->r6 = ADD32(0, 0X143);
    ovl_803F0000_menu_func_803F11B4(rdram, ctx);
        goto after_7;
    // 0x803F2058: addiu       $a2, $zero, 0x143
    ctx->r6 = ADD32(0, 0X143);
    after_7:
    // 0x803F205C: beq         $v0, $zero, L_803F2074
    if (ctx->r2 == 0) {
        // 0x803F2060: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_803F2074;
    }
    // 0x803F2060: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x803F2064: lw          $t3, 0xC8($s0)
    ctx->r11 = MEM_W(ctx->r16, 0XC8);
    // 0x803F2068: addiu       $t2, $zero, 0xA
    ctx->r10 = ADD32(0, 0XA);
    // 0x803F206C: b           L_803F20B4
    // 0x803F2070: sh          $t2, 0x938($t3)
    MEM_H(0X938, ctx->r11) = ctx->r10;
        goto L_803F20B4;
    // 0x803F2070: sh          $t2, 0x938($t3)
    MEM_H(0X938, ctx->r11) = ctx->r10;
L_803F2074:
    // 0x803F2074: jal         0x803F1990
    // 0x803F2078: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
    ovl_803F0000_menu_func_803F1990(rdram, ctx);
        goto after_8;
    // 0x803F2078: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
    after_8:
    // 0x803F207C: beq         $v0, $zero, L_803F20B8
    if (ctx->r2 == 0) {
        // 0x803F2080: lw          $t4, 0x20($sp)
        ctx->r12 = MEM_W(ctx->r29, 0X20);
            goto L_803F20B8;
    }
    // 0x803F2080: lw          $t4, 0x20($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X20);
    // 0x803F2084: lwc1        $f12, 0x44($s0)
    ctx->f12.u32l = MEM_W(ctx->r16, 0X44);
    // 0x803F2088: jal         0x80272AEC
    // 0x803F208C: nop

    LOOKUP_FUNC(0x80272AEC)(rdram, ctx);
        goto after_9;
    // 0x803F208C: nop

    after_9:
    // 0x803F2090: lui         $at, 0x803F
    ctx->r1 = S32(0X803F << 16);
    // 0x803F2094: lwc1        $f8, 0x7C28($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X7C28);
    // 0x803F2098: nop

    // 0x803F209C: c.lt.s      $f8, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f8.fl < ctx->f0.fl;
    // 0x803F20A0: nop

    // 0x803F20A4: bc1f        L_803F20B8
    if (!c1cs) {
        // 0x803F20A8: lw          $t4, 0x20($sp)
        ctx->r12 = MEM_W(ctx->r29, 0X20);
            goto L_803F20B8;
    }
    // 0x803F20A8: lw          $t4, 0x20($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X20);
    // 0x803F20AC: jal         0x803F34D4
    // 0x803F20B0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_803F0000_menu_func_803F34D4(rdram, ctx);
        goto after_10;
    // 0x803F20B0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_10:
L_803F20B4:
    // 0x803F20B4: lw          $t4, 0x20($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X20);
L_803F20B8:
    // 0x803F20B8: lui         $at, 0x42A0
    ctx->r1 = S32(0X42A0 << 16);
    // 0x803F20BC: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x803F20C0: lwc1        $f16, 0x84($t4)
    ctx->f16.u32l = MEM_W(ctx->r12, 0X84);
    // 0x803F20C4: lui         $t5, 0x8028
    ctx->r13 = S32(0X8028 << 16);
    // 0x803F20C8: c.lt.s      $f10, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f10.fl < ctx->f16.fl;
    // 0x803F20CC: nop

    // 0x803F20D0: bc1f        L_803F216C
    if (!c1cs) {
        // 0x803F20D4: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_803F216C;
    }
    // 0x803F20D4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x803F20D8: lh          $t5, -0x1B60($t5)
    ctx->r13 = MEM_H(ctx->r13, -0X1B60);
    // 0x803F20DC: lui         $at, 0x803F
    ctx->r1 = S32(0X803F << 16);
    // 0x803F20E0: andi        $t6, $t5, 0x1
    ctx->r14 = ctx->r13 & 0X1;
    // 0x803F20E4: beq         $t6, $zero, L_803F216C
    if (ctx->r14 == 0) {
        // 0x803F20E8: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_803F216C;
    }
    // 0x803F20E8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x803F20EC: lwc1        $f18, 0x7C2C($at)
    ctx->f18.u32l = MEM_W(ctx->r1, 0X7C2C);
    // 0x803F20F0: lw          $t7, 0xC8($s0)
    ctx->r15 = MEM_W(ctx->r16, 0XC8);
    // 0x803F20F4: b           L_803F2168
    // 0x803F20F8: swc1        $f18, 0x940($t7)
    MEM_W(0X940, ctx->r15) = ctx->f18.u32l;
        goto L_803F2168;
    // 0x803F20F8: swc1        $f18, 0x940($t7)
    MEM_W(0X940, ctx->r15) = ctx->f18.u32l;
    // 0x803F20FC: slti        $at, $a1, 0x158
    ctx->r1 = SIGNED(ctx->r5) < 0X158 ? 1 : 0;
L_803F2100:
    // 0x803F2100: beq         $at, $zero, L_803F2160
    if (ctx->r1 == 0) {
        // 0x803F2104: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_803F2160;
    }
    // 0x803F2104: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x803F2108: lwc1        $f4, 0x5C($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X5C);
    // 0x803F210C: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    // 0x803F2110: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x803F2114: jal         0x803F1914
    // 0x803F2118: swc1        $f4, 0x940($v0)
    MEM_W(0X940, ctx->r2) = ctx->f4.u32l;
    ovl_803F0000_menu_func_803F1914(rdram, ctx);
        goto after_11;
    // 0x803F2118: swc1        $f4, 0x940($v0)
    MEM_W(0X940, ctx->r2) = ctx->f4.u32l;
    after_11:
    // 0x803F211C: beq         $v0, $zero, L_803F212C
    if (ctx->r2 == 0) {
        // 0x803F2120: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_803F212C;
    }
    // 0x803F2120: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x803F2124: jal         0x803F3720
    // 0x803F2128: addiu       $a1, $zero, 0x158
    ctx->r5 = ADD32(0, 0X158);
    ovl_803F0000_menu_func_803F3720(rdram, ctx);
        goto after_12;
    // 0x803F2128: addiu       $a1, $zero, 0x158
    ctx->r5 = ADD32(0, 0X158);
    after_12:
L_803F212C:
    // 0x803F212C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x803F2130: jal         0x803F1990
    // 0x803F2134: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
    ovl_803F0000_menu_func_803F1990(rdram, ctx);
        goto after_13;
    // 0x803F2134: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
    after_13:
    // 0x803F2138: beq         $v0, $zero, L_803F2150
    if (ctx->r2 == 0) {
        // 0x803F213C: nop
    
            goto L_803F2150;
    }
    // 0x803F213C: nop

    // 0x803F2140: jal         0x803F34D4
    // 0x803F2144: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_803F0000_menu_func_803F34D4(rdram, ctx);
        goto after_14;
    // 0x803F2144: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_14:
    // 0x803F2148: b           L_803F216C
    // 0x803F214C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_803F216C;
    // 0x803F214C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_803F2150:
    // 0x803F2150: jal         0x803F3A98
    // 0x803F2154: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_803F0000_menu_func_803F3A98(rdram, ctx);
        goto after_15;
    // 0x803F2154: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_15:
    // 0x803F2158: b           L_803F216C
    // 0x803F215C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_803F216C;
    // 0x803F215C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_803F2160:
    // 0x803F2160: jal         0x803F3A98
    // 0x803F2164: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_803F0000_menu_func_803F3A98(rdram, ctx);
        goto after_16;
    // 0x803F2164: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_16:
L_803F2168:
    // 0x803F2168: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_803F216C:
    // 0x803F216C: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x803F2170: jr          $ra
    // 0x803F2174: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x803F2174: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void ovl_803F0000_menu_func_803F1EB4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803F1EB4: nop

    // 0x803F1EB8: c.lt.s      $f0, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f0.fl < ctx->f6.fl;
    // 0x803F1EBC: nop

    // 0x803F1EC0: bc1f        L_803F1EEC
    if (!c1cs) {
        // 0x803F1EC4: lw          $t0, 0x20($sp)
        ctx->r8 = MEM_W(ctx->r29, 0X20);
            goto L_803F1EEC;
    }
    // 0x803F1EC4: lw          $t0, 0x20($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X20);
    // 0x803F1EC8: lhu         $t6, 0x2C($s0)
    ctx->r14 = MEM_HU(ctx->r16, 0X2C);
    // 0x803F1ECC: nop

    // 0x803F1ED0: andi        $t7, $t6, 0x1
    ctx->r15 = ctx->r14 & 0X1;
    // 0x803F1ED4: beq         $t7, $zero, L_803F1EEC
    if (ctx->r15 == 0) {
        // 0x803F1ED8: lw          $t0, 0x20($sp)
        ctx->r8 = MEM_W(ctx->r29, 0X20);
            goto L_803F1EEC;
    }
    // 0x803F1ED8: lw          $t0, 0x20($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X20);
    // 0x803F1EDC: lw          $t9, 0xC8($s0)
    ctx->r25 = MEM_W(ctx->r16, 0XC8);
    // 0x803F1EE0: addiu       $t8, $zero, 0xA
    ctx->r24 = ADD32(0, 0XA);
    // 0x803F1EE4: sh          $t8, 0x938($t9)
    MEM_H(0X938, ctx->r25) = ctx->r24;
    // 0x803F1EE8: lw          $t0, 0x20($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X20);
L_803F1EEC:
    // 0x803F1EEC: lui         $at, 0x42A0
    ctx->r1 = S32(0X42A0 << 16);
    // 0x803F1EF0: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x803F1EF4: lwc1        $f10, 0x84($t0)
    ctx->f10.u32l = MEM_W(ctx->r8, 0X84);
    // 0x803F1EF8: lui         $t1, 0x8028
    ctx->r9 = S32(0X8028 << 16);
    // 0x803F1EFC: c.lt.s      $f8, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f8.fl < ctx->f10.fl;
    // 0x803F1F00: nop

    // 0x803F1F04: bc1f        L_803F216C
    if (!c1cs) {
        // 0x803F1F08: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_803F216C;
    }
    // 0x803F1F08: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x803F1F0C: lh          $t1, -0x1B60($t1)
    ctx->r9 = MEM_H(ctx->r9, -0X1B60);
    // 0x803F1F10: lui         $at, 0x803F
    ctx->r1 = S32(0X803F << 16);
    // 0x803F1F14: andi        $t2, $t1, 0x1
    ctx->r10 = ctx->r9 & 0X1;
    // 0x803F1F18: beq         $t2, $zero, L_803F216C
    if (ctx->r10 == 0) {
        // 0x803F1F1C: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_803F216C;
    }
    // 0x803F1F1C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x803F1F20: lwc1        $f16, 0x7C18($at)
    ctx->f16.u32l = MEM_W(ctx->r1, 0X7C18);
    // 0x803F1F24: lw          $t3, 0xC8($s0)
    ctx->r11 = MEM_W(ctx->r16, 0XC8);
    // 0x803F1F28: b           L_803F2168
    // 0x803F1F2C: swc1        $f16, 0x940($t3)
    MEM_W(0X940, ctx->r11) = ctx->f16.u32l;
        goto L_803F2168;
    // 0x803F1F2C: swc1        $f16, 0x940($t3)
    MEM_W(0X940, ctx->r11) = ctx->f16.u32l;
    // 0x803F1F30: lh          $t4, -0x1B60($t4)
    ctx->r12 = MEM_H(ctx->r12, -0X1B60);
    // 0x803F1F34: lui         $at, 0x803F
    ctx->r1 = S32(0X803F << 16);
    // 0x803F1F38: andi        $t5, $t4, 0x1
    ctx->r13 = ctx->r12 & 0X1;
    // 0x803F1F3C: beq         $t5, $zero, L_803F1F5C
    if (ctx->r13 == 0) {
        // 0x803F1F40: lui         $t6, 0x8009
        ctx->r14 = S32(0X8009 << 16);
            goto L_803F1F5C;
    }
    // 0x803F1F40: lui         $t6, 0x8009
    ctx->r14 = S32(0X8009 << 16);
    // 0x803F1F44: lwc1        $f19, 0x7C20($at)
    ctx->f_odd[(19 - 1) * 2] = MEM_W(ctx->r1, 0X7C20);
    // 0x803F1F48: lwc1        $f18, 0x7C24($at)
    ctx->f18.u32l = MEM_W(ctx->r1, 0X7C24);
    // 0x803F1F4C: nop

    // 0x803F1F50: cvt.s.d     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.d); 
    ctx->f4.fl = CVT_S_D(ctx->f18.d);
    // 0x803F1F54: b           L_803F1F70
    // 0x803F1F58: swc1        $f4, 0x940($v0)
    MEM_W(0X940, ctx->r2) = ctx->f4.u32l;
        goto L_803F1F70;
    // 0x803F1F58: swc1        $f4, 0x940($v0)
    MEM_W(0X940, ctx->r2) = ctx->f4.u32l;
L_803F1F5C:
    // 0x803F1F5C: lwc1        $f6, 0x5C($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X5C);
    // 0x803F1F60: nop

    // 0x803F1F64: cvt.d.s     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f8.d = CVT_D_S(ctx->f6.fl);
    // 0x803F1F68: cvt.s.d     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.d); 
    ctx->f10.fl = CVT_S_D(ctx->f8.d);
    // 0x803F1F6C: swc1        $f10, 0x940($v0)
    MEM_W(0X940, ctx->r2) = ctx->f10.u32l;
L_803F1F70:
    // 0x803F1F70: lw          $t6, 0x3B20($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X3B20);
    // 0x803F1F74: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x803F1F78: lwc1        $f18, 0x0($t6)
    ctx->f18.u32l = MEM_W(ctx->r14, 0X0);
    // 0x803F1F7C: addiu       $t7, $zero, 0x123
    ctx->r15 = ADD32(0, 0X123);
    // 0x803F1F80: c.lt.s      $f16, $f18
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f16.fl < ctx->f18.fl;
    // 0x803F1F84: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x803F1F88: bc1f        L_803F1F9C
    if (!c1cs) {
        // 0x803F1F8C: addiu       $a2, $zero, 0x1
        ctx->r6 = ADD32(0, 0X1);
            goto L_803F1F9C;
    }
    // 0x803F1F8C: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x803F1F90: lw          $t8, 0xC8($s0)
    ctx->r24 = MEM_W(ctx->r16, 0XC8);
    // 0x803F1F94: b           L_803F1FA8
    // 0x803F1F98: sh          $t7, 0x93E($t8)
    MEM_H(0X93E, ctx->r24) = ctx->r15;
        goto L_803F1FA8;
    // 0x803F1F98: sh          $t7, 0x93E($t8)
    MEM_H(0X93E, ctx->r24) = ctx->r15;
L_803F1F9C:
    // 0x803F1F9C: lw          $t0, 0xC8($s0)
    ctx->r8 = MEM_W(ctx->r16, 0XC8);
    // 0x803F1FA0: addiu       $t9, $zero, -0x123
    ctx->r25 = ADD32(0, -0X123);
    // 0x803F1FA4: sh          $t9, 0x93E($t0)
    MEM_H(0X93E, ctx->r8) = ctx->r25;
L_803F1FA8:
    // 0x803F1FA8: lw          $v0, 0xC8($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XC8);
    // 0x803F1FAC: nop

    // 0x803F1FB0: lh          $a1, 0x8B0($v0)
    ctx->r5 = MEM_H(ctx->r2, 0X8B0);
    // 0x803F1FB4: nop

    // 0x803F1FB8: slti        $at, $a1, 0x108
    ctx->r1 = SIGNED(ctx->r5) < 0X108 ? 1 : 0;
    // 0x803F1FBC: beq         $at, $zero, L_803F2100
    if (ctx->r1 == 0) {
        // 0x803F1FC0: slti        $at, $a1, 0x158
        ctx->r1 = SIGNED(ctx->r5) < 0X158 ? 1 : 0;
            goto L_803F2100;
    }
    // 0x803F1FC0: slti        $at, $a1, 0x158
    ctx->r1 = SIGNED(ctx->r5) < 0X158 ? 1 : 0;
    // 0x803F1FC4: jal         0x803F1914
    // 0x803F1FC8: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    ovl_803F0000_menu_func_803F1914(rdram, ctx);
        goto after_0;
    // 0x803F1FC8: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    after_0:
    // 0x803F1FCC: beq         $v0, $zero, L_803F2044
    if (ctx->r2 == 0) {
        // 0x803F1FD0: addiu       $t1, $zero, 0x16
        ctx->r9 = ADD32(0, 0X16);
            goto L_803F2044;
    }
    // 0x803F1FD0: addiu       $t1, $zero, 0x16
    ctx->r9 = ADD32(0, 0X16);
    // 0x803F1FD4: lw          $t2, 0xC8($s0)
    ctx->r10 = MEM_W(ctx->r16, 0XC8);
    // 0x803F1FD8: lui         $t3, 0x8009
    ctx->r11 = S32(0X8009 << 16);
    // 0x803F1FDC: sh          $t1, 0x938($t2)
    MEM_H(0X938, ctx->r10) = ctx->r9;
    // 0x803F1FE0: lw          $t3, 0x3B20($t3)
    ctx->r11 = MEM_W(ctx->r11, 0X3B20);
    // 0x803F1FE4: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x803F1FE8: lwc1        $f6, 0x0($t3)
    ctx->f6.u32l = MEM_W(ctx->r11, 0X0);
    // 0x803F1FEC: addiu       $t4, $zero, 0xC8
    ctx->r12 = ADD32(0, 0XC8);
    // 0x803F1FF0: c.lt.s      $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f4.fl < ctx->f6.fl;
    // 0x803F1FF4: addiu       $t1, $zero, -0x108
    ctx->r9 = ADD32(0, -0X108);
    // 0x803F1FF8: bc1f        L_803F200C
    if (!c1cs) {
        // 0x803F1FFC: addiu       $t0, $zero, 0x108
        ctx->r8 = ADD32(0, 0X108);
            goto L_803F200C;
    }
    // 0x803F1FFC: addiu       $t0, $zero, 0x108
    ctx->r8 = ADD32(0, 0X108);
    // 0x803F2000: lw          $t5, 0xC8($s0)
    ctx->r13 = MEM_W(ctx->r16, 0XC8);
    // 0x803F2004: b           L_803F2018
    // 0x803F2008: sh          $t4, 0x93E($t5)
    MEM_H(0X93E, ctx->r13) = ctx->r12;
        goto L_803F2018;
    // 0x803F2008: sh          $t4, 0x93E($t5)
    MEM_H(0X93E, ctx->r13) = ctx->r12;
L_803F200C:
    // 0x803F200C: lw          $t7, 0xC8($s0)
    ctx->r15 = MEM_W(ctx->r16, 0XC8);
    // 0x803F2010: addiu       $t6, $zero, -0xC8
    ctx->r14 = ADD32(0, -0XC8);
    // 0x803F2014: sh          $t6, 0x93E($t7)
    MEM_H(0X93E, ctx->r15) = ctx->r14;
L_803F2018:
    // 0x803F2018: lw          $v0, 0xC8($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XC8);
    // 0x803F201C: nop

    // 0x803F2020: lhu         $t8, 0x8($v0)
    ctx->r24 = MEM_HU(ctx->r2, 0X8);
    // 0x803F2024: nop

    // 0x803F2028: andi        $t9, $t8, 0x1
    ctx->r25 = ctx->r24 & 0X1;
    // 0x803F202C: beq         $t9, $zero, L_803F203C
    if (ctx->r25 == 0) {
        // 0x803F2030: nop
    
            goto L_803F203C;
    }
    // 0x803F2030: nop

    // 0x803F2034: b           L_803F2168
    // 0x803F2038: sh          $t0, 0x93C($v0)
    MEM_H(0X93C, ctx->r2) = ctx->r8;
        goto L_803F2168;
    // 0x803F2038: sh          $t0, 0x93C($v0)
    MEM_H(0X93C, ctx->r2) = ctx->r8;
L_803F203C:
    // 0x803F203C: b           L_803F2168
    // 0x803F2040: sh          $t1, 0x93C($v0)
    MEM_H(0X93C, ctx->r2) = ctx->r9;
        goto L_803F2168;
    // 0x803F2040: sh          $t1, 0x93C($v0)
    MEM_H(0X93C, ctx->r2) = ctx->r9;
L_803F2044:
    // 0x803F2044: jal         0x803F1C68
    // 0x803F2048: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_803F0000_menu_func_803F1C68(rdram, ctx);
        goto after_1;
    // 0x803F2048: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
    // 0x803F204C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x803F2050: addiu       $a1, $zero, 0x500
    ctx->r5 = ADD32(0, 0X500);
    // 0x803F2054: jal         0x803F11B4
    // 0x803F2058: addiu       $a2, $zero, 0x143
    ctx->r6 = ADD32(0, 0X143);
    ovl_803F0000_menu_func_803F11B4(rdram, ctx);
        goto after_2;
    // 0x803F2058: addiu       $a2, $zero, 0x143
    ctx->r6 = ADD32(0, 0X143);
    after_2:
    // 0x803F205C: beq         $v0, $zero, L_803F2074
    if (ctx->r2 == 0) {
        // 0x803F2060: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_803F2074;
    }
    // 0x803F2060: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x803F2064: lw          $t3, 0xC8($s0)
    ctx->r11 = MEM_W(ctx->r16, 0XC8);
    // 0x803F2068: addiu       $t2, $zero, 0xA
    ctx->r10 = ADD32(0, 0XA);
    // 0x803F206C: b           L_803F20B4
    // 0x803F2070: sh          $t2, 0x938($t3)
    MEM_H(0X938, ctx->r11) = ctx->r10;
        goto L_803F20B4;
    // 0x803F2070: sh          $t2, 0x938($t3)
    MEM_H(0X938, ctx->r11) = ctx->r10;
L_803F2074:
    // 0x803F2074: jal         0x803F1990
    // 0x803F2078: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
    ovl_803F0000_menu_func_803F1990(rdram, ctx);
        goto after_3;
    // 0x803F2078: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
    after_3:
    // 0x803F207C: beq         $v0, $zero, L_803F20B8
    if (ctx->r2 == 0) {
        // 0x803F2080: lw          $t4, 0x20($sp)
        ctx->r12 = MEM_W(ctx->r29, 0X20);
            goto L_803F20B8;
    }
    // 0x803F2080: lw          $t4, 0x20($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X20);
    // 0x803F2084: lwc1        $f12, 0x44($s0)
    ctx->f12.u32l = MEM_W(ctx->r16, 0X44);
    // 0x803F2088: jal         0x80272AEC
    // 0x803F208C: nop

    LOOKUP_FUNC(0x80272AEC)(rdram, ctx);
        goto after_4;
    // 0x803F208C: nop

    after_4:
    // 0x803F2090: lui         $at, 0x803F
    ctx->r1 = S32(0X803F << 16);
    // 0x803F2094: lwc1        $f8, 0x7C28($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X7C28);
    // 0x803F2098: nop

    // 0x803F209C: c.lt.s      $f8, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f8.fl < ctx->f0.fl;
    // 0x803F20A0: nop

    // 0x803F20A4: bc1f        L_803F20B8
    if (!c1cs) {
        // 0x803F20A8: lw          $t4, 0x20($sp)
        ctx->r12 = MEM_W(ctx->r29, 0X20);
            goto L_803F20B8;
    }
    // 0x803F20A8: lw          $t4, 0x20($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X20);
    // 0x803F20AC: jal         0x803F34D4
    // 0x803F20B0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_803F0000_menu_func_803F34D4(rdram, ctx);
        goto after_5;
    // 0x803F20B0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_5:
L_803F20B4:
    // 0x803F20B4: lw          $t4, 0x20($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X20);
L_803F20B8:
    // 0x803F20B8: lui         $at, 0x42A0
    ctx->r1 = S32(0X42A0 << 16);
    // 0x803F20BC: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x803F20C0: lwc1        $f16, 0x84($t4)
    ctx->f16.u32l = MEM_W(ctx->r12, 0X84);
    // 0x803F20C4: lui         $t5, 0x8028
    ctx->r13 = S32(0X8028 << 16);
    // 0x803F20C8: c.lt.s      $f10, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f10.fl < ctx->f16.fl;
    // 0x803F20CC: nop

    // 0x803F20D0: bc1f        L_803F216C
    if (!c1cs) {
        // 0x803F20D4: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_803F216C;
    }
    // 0x803F20D4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x803F20D8: lh          $t5, -0x1B60($t5)
    ctx->r13 = MEM_H(ctx->r13, -0X1B60);
    // 0x803F20DC: lui         $at, 0x803F
    ctx->r1 = S32(0X803F << 16);
    // 0x803F20E0: andi        $t6, $t5, 0x1
    ctx->r14 = ctx->r13 & 0X1;
    // 0x803F20E4: beq         $t6, $zero, L_803F216C
    if (ctx->r14 == 0) {
        // 0x803F20E8: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_803F216C;
    }
    // 0x803F20E8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x803F20EC: lwc1        $f18, 0x7C2C($at)
    ctx->f18.u32l = MEM_W(ctx->r1, 0X7C2C);
    // 0x803F20F0: lw          $t7, 0xC8($s0)
    ctx->r15 = MEM_W(ctx->r16, 0XC8);
    // 0x803F20F4: b           L_803F2168
    // 0x803F20F8: swc1        $f18, 0x940($t7)
    MEM_W(0X940, ctx->r15) = ctx->f18.u32l;
        goto L_803F2168;
    // 0x803F20F8: swc1        $f18, 0x940($t7)
    MEM_W(0X940, ctx->r15) = ctx->f18.u32l;
    // 0x803F20FC: slti        $at, $a1, 0x158
    ctx->r1 = SIGNED(ctx->r5) < 0X158 ? 1 : 0;
L_803F2100:
    // 0x803F2100: beq         $at, $zero, L_803F2160
    if (ctx->r1 == 0) {
        // 0x803F2104: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_803F2160;
    }
    // 0x803F2104: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x803F2108: lwc1        $f4, 0x5C($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X5C);
    // 0x803F210C: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    // 0x803F2110: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x803F2114: jal         0x803F1914
    // 0x803F2118: swc1        $f4, 0x940($v0)
    MEM_W(0X940, ctx->r2) = ctx->f4.u32l;
    ovl_803F0000_menu_func_803F1914(rdram, ctx);
        goto after_6;
    // 0x803F2118: swc1        $f4, 0x940($v0)
    MEM_W(0X940, ctx->r2) = ctx->f4.u32l;
    after_6:
    // 0x803F211C: beq         $v0, $zero, L_803F212C
    if (ctx->r2 == 0) {
        // 0x803F2120: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_803F212C;
    }
    // 0x803F2120: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x803F2124: jal         0x803F3720
    // 0x803F2128: addiu       $a1, $zero, 0x158
    ctx->r5 = ADD32(0, 0X158);
    ovl_803F0000_menu_func_803F3720(rdram, ctx);
        goto after_7;
    // 0x803F2128: addiu       $a1, $zero, 0x158
    ctx->r5 = ADD32(0, 0X158);
    after_7:
L_803F212C:
    // 0x803F212C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x803F2130: jal         0x803F1990
    // 0x803F2134: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
    ovl_803F0000_menu_func_803F1990(rdram, ctx);
        goto after_8;
    // 0x803F2134: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
    after_8:
    // 0x803F2138: beq         $v0, $zero, L_803F2150
    if (ctx->r2 == 0) {
        // 0x803F213C: nop
    
            goto L_803F2150;
    }
    // 0x803F213C: nop

    // 0x803F2140: jal         0x803F34D4
    // 0x803F2144: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_803F0000_menu_func_803F34D4(rdram, ctx);
        goto after_9;
    // 0x803F2144: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_9:
    // 0x803F2148: b           L_803F216C
    // 0x803F214C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_803F216C;
    // 0x803F214C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_803F2150:
    // 0x803F2150: jal         0x803F3A98
    // 0x803F2154: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_803F0000_menu_func_803F3A98(rdram, ctx);
        goto after_10;
    // 0x803F2154: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_10:
    // 0x803F2158: b           L_803F216C
    // 0x803F215C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_803F216C;
    // 0x803F215C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_803F2160:
    // 0x803F2160: jal         0x803F3A98
    // 0x803F2164: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_803F0000_menu_func_803F3A98(rdram, ctx);
        goto after_11;
    // 0x803F2164: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_11:
L_803F2168:
    // 0x803F2168: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_803F216C:
    // 0x803F216C: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x803F2170: jr          $ra
    // 0x803F2174: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x803F2174: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void ovl_803F0000_menu_func_803F1F30(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803F1F30: lh          $t4, -0x1B60($t4)
    ctx->r12 = MEM_H(ctx->r12, -0X1B60);
    // 0x803F1F34: lui         $at, 0x803F
    ctx->r1 = S32(0X803F << 16);
    // 0x803F1F38: andi        $t5, $t4, 0x1
    ctx->r13 = ctx->r12 & 0X1;
    // 0x803F1F3C: beq         $t5, $zero, L_803F1F5C
    if (ctx->r13 == 0) {
        // 0x803F1F40: lui         $t6, 0x8009
        ctx->r14 = S32(0X8009 << 16);
            goto L_803F1F5C;
    }
    // 0x803F1F40: lui         $t6, 0x8009
    ctx->r14 = S32(0X8009 << 16);
    // 0x803F1F44: lwc1        $f19, 0x7C20($at)
    ctx->f_odd[(19 - 1) * 2] = MEM_W(ctx->r1, 0X7C20);
    // 0x803F1F48: lwc1        $f18, 0x7C24($at)
    ctx->f18.u32l = MEM_W(ctx->r1, 0X7C24);
    // 0x803F1F4C: nop

    // 0x803F1F50: cvt.s.d     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.d); 
    ctx->f4.fl = CVT_S_D(ctx->f18.d);
    // 0x803F1F54: b           L_803F1F70
    // 0x803F1F58: swc1        $f4, 0x940($v0)
    MEM_W(0X940, ctx->r2) = ctx->f4.u32l;
        goto L_803F1F70;
    // 0x803F1F58: swc1        $f4, 0x940($v0)
    MEM_W(0X940, ctx->r2) = ctx->f4.u32l;
L_803F1F5C:
    // 0x803F1F5C: lwc1        $f6, 0x5C($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X5C);
    // 0x803F1F60: nop

    // 0x803F1F64: cvt.d.s     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f8.d = CVT_D_S(ctx->f6.fl);
    // 0x803F1F68: cvt.s.d     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.d); 
    ctx->f10.fl = CVT_S_D(ctx->f8.d);
    // 0x803F1F6C: swc1        $f10, 0x940($v0)
    MEM_W(0X940, ctx->r2) = ctx->f10.u32l;
L_803F1F70:
    // 0x803F1F70: lw          $t6, 0x3B20($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X3B20);
    // 0x803F1F74: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x803F1F78: lwc1        $f18, 0x0($t6)
    ctx->f18.u32l = MEM_W(ctx->r14, 0X0);
    // 0x803F1F7C: addiu       $t7, $zero, 0x123
    ctx->r15 = ADD32(0, 0X123);
    // 0x803F1F80: c.lt.s      $f16, $f18
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f16.fl < ctx->f18.fl;
    // 0x803F1F84: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x803F1F88: bc1f        L_803F1F9C
    if (!c1cs) {
        // 0x803F1F8C: addiu       $a2, $zero, 0x1
        ctx->r6 = ADD32(0, 0X1);
            goto L_803F1F9C;
    }
    // 0x803F1F8C: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x803F1F90: lw          $t8, 0xC8($s0)
    ctx->r24 = MEM_W(ctx->r16, 0XC8);
    // 0x803F1F94: b           L_803F1FA8
    // 0x803F1F98: sh          $t7, 0x93E($t8)
    MEM_H(0X93E, ctx->r24) = ctx->r15;
        goto L_803F1FA8;
    // 0x803F1F98: sh          $t7, 0x93E($t8)
    MEM_H(0X93E, ctx->r24) = ctx->r15;
L_803F1F9C:
    // 0x803F1F9C: lw          $t0, 0xC8($s0)
    ctx->r8 = MEM_W(ctx->r16, 0XC8);
    // 0x803F1FA0: addiu       $t9, $zero, -0x123
    ctx->r25 = ADD32(0, -0X123);
    // 0x803F1FA4: sh          $t9, 0x93E($t0)
    MEM_H(0X93E, ctx->r8) = ctx->r25;
L_803F1FA8:
    // 0x803F1FA8: lw          $v0, 0xC8($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XC8);
    // 0x803F1FAC: nop

    // 0x803F1FB0: lh          $a1, 0x8B0($v0)
    ctx->r5 = MEM_H(ctx->r2, 0X8B0);
    // 0x803F1FB4: nop

    // 0x803F1FB8: slti        $at, $a1, 0x108
    ctx->r1 = SIGNED(ctx->r5) < 0X108 ? 1 : 0;
    // 0x803F1FBC: beq         $at, $zero, L_803F2100
    if (ctx->r1 == 0) {
        // 0x803F1FC0: slti        $at, $a1, 0x158
        ctx->r1 = SIGNED(ctx->r5) < 0X158 ? 1 : 0;
            goto L_803F2100;
    }
    // 0x803F1FC0: slti        $at, $a1, 0x158
    ctx->r1 = SIGNED(ctx->r5) < 0X158 ? 1 : 0;
    // 0x803F1FC4: jal         0x803F1914
    // 0x803F1FC8: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    ovl_803F0000_menu_func_803F1914(rdram, ctx);
        goto after_0;
    // 0x803F1FC8: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    after_0:
    // 0x803F1FCC: beq         $v0, $zero, L_803F2044
    if (ctx->r2 == 0) {
        // 0x803F1FD0: addiu       $t1, $zero, 0x16
        ctx->r9 = ADD32(0, 0X16);
            goto L_803F2044;
    }
    // 0x803F1FD0: addiu       $t1, $zero, 0x16
    ctx->r9 = ADD32(0, 0X16);
    // 0x803F1FD4: lw          $t2, 0xC8($s0)
    ctx->r10 = MEM_W(ctx->r16, 0XC8);
    // 0x803F1FD8: lui         $t3, 0x8009
    ctx->r11 = S32(0X8009 << 16);
    // 0x803F1FDC: sh          $t1, 0x938($t2)
    MEM_H(0X938, ctx->r10) = ctx->r9;
    // 0x803F1FE0: lw          $t3, 0x3B20($t3)
    ctx->r11 = MEM_W(ctx->r11, 0X3B20);
    // 0x803F1FE4: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x803F1FE8: lwc1        $f6, 0x0($t3)
    ctx->f6.u32l = MEM_W(ctx->r11, 0X0);
    // 0x803F1FEC: addiu       $t4, $zero, 0xC8
    ctx->r12 = ADD32(0, 0XC8);
    // 0x803F1FF0: c.lt.s      $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f4.fl < ctx->f6.fl;
    // 0x803F1FF4: addiu       $t1, $zero, -0x108
    ctx->r9 = ADD32(0, -0X108);
    // 0x803F1FF8: bc1f        L_803F200C
    if (!c1cs) {
        // 0x803F1FFC: addiu       $t0, $zero, 0x108
        ctx->r8 = ADD32(0, 0X108);
            goto L_803F200C;
    }
    // 0x803F1FFC: addiu       $t0, $zero, 0x108
    ctx->r8 = ADD32(0, 0X108);
    // 0x803F2000: lw          $t5, 0xC8($s0)
    ctx->r13 = MEM_W(ctx->r16, 0XC8);
    // 0x803F2004: b           L_803F2018
    // 0x803F2008: sh          $t4, 0x93E($t5)
    MEM_H(0X93E, ctx->r13) = ctx->r12;
        goto L_803F2018;
    // 0x803F2008: sh          $t4, 0x93E($t5)
    MEM_H(0X93E, ctx->r13) = ctx->r12;
L_803F200C:
    // 0x803F200C: lw          $t7, 0xC8($s0)
    ctx->r15 = MEM_W(ctx->r16, 0XC8);
    // 0x803F2010: addiu       $t6, $zero, -0xC8
    ctx->r14 = ADD32(0, -0XC8);
    // 0x803F2014: sh          $t6, 0x93E($t7)
    MEM_H(0X93E, ctx->r15) = ctx->r14;
L_803F2018:
    // 0x803F2018: lw          $v0, 0xC8($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XC8);
    // 0x803F201C: nop

    // 0x803F2020: lhu         $t8, 0x8($v0)
    ctx->r24 = MEM_HU(ctx->r2, 0X8);
    // 0x803F2024: nop

    // 0x803F2028: andi        $t9, $t8, 0x1
    ctx->r25 = ctx->r24 & 0X1;
    // 0x803F202C: beq         $t9, $zero, L_803F203C
    if (ctx->r25 == 0) {
        // 0x803F2030: nop
    
            goto L_803F203C;
    }
    // 0x803F2030: nop

    // 0x803F2034: b           L_803F2168
    // 0x803F2038: sh          $t0, 0x93C($v0)
    MEM_H(0X93C, ctx->r2) = ctx->r8;
        goto L_803F2168;
    // 0x803F2038: sh          $t0, 0x93C($v0)
    MEM_H(0X93C, ctx->r2) = ctx->r8;
L_803F203C:
    // 0x803F203C: b           L_803F2168
    // 0x803F2040: sh          $t1, 0x93C($v0)
    MEM_H(0X93C, ctx->r2) = ctx->r9;
        goto L_803F2168;
    // 0x803F2040: sh          $t1, 0x93C($v0)
    MEM_H(0X93C, ctx->r2) = ctx->r9;
L_803F2044:
    // 0x803F2044: jal         0x803F1C68
    // 0x803F2048: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_803F0000_menu_func_803F1C68(rdram, ctx);
        goto after_1;
    // 0x803F2048: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
    // 0x803F204C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x803F2050: addiu       $a1, $zero, 0x500
    ctx->r5 = ADD32(0, 0X500);
    // 0x803F2054: jal         0x803F11B4
    // 0x803F2058: addiu       $a2, $zero, 0x143
    ctx->r6 = ADD32(0, 0X143);
    ovl_803F0000_menu_func_803F11B4(rdram, ctx);
        goto after_2;
    // 0x803F2058: addiu       $a2, $zero, 0x143
    ctx->r6 = ADD32(0, 0X143);
    after_2:
    // 0x803F205C: beq         $v0, $zero, L_803F2074
    if (ctx->r2 == 0) {
        // 0x803F2060: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_803F2074;
    }
    // 0x803F2060: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x803F2064: lw          $t3, 0xC8($s0)
    ctx->r11 = MEM_W(ctx->r16, 0XC8);
    // 0x803F2068: addiu       $t2, $zero, 0xA
    ctx->r10 = ADD32(0, 0XA);
    // 0x803F206C: b           L_803F20B4
    // 0x803F2070: sh          $t2, 0x938($t3)
    MEM_H(0X938, ctx->r11) = ctx->r10;
        goto L_803F20B4;
    // 0x803F2070: sh          $t2, 0x938($t3)
    MEM_H(0X938, ctx->r11) = ctx->r10;
L_803F2074:
    // 0x803F2074: jal         0x803F1990
    // 0x803F2078: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
    ovl_803F0000_menu_func_803F1990(rdram, ctx);
        goto after_3;
    // 0x803F2078: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
    after_3:
    // 0x803F207C: beq         $v0, $zero, L_803F20B8
    if (ctx->r2 == 0) {
        // 0x803F2080: lw          $t4, 0x20($sp)
        ctx->r12 = MEM_W(ctx->r29, 0X20);
            goto L_803F20B8;
    }
    // 0x803F2080: lw          $t4, 0x20($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X20);
    // 0x803F2084: lwc1        $f12, 0x44($s0)
    ctx->f12.u32l = MEM_W(ctx->r16, 0X44);
    // 0x803F2088: jal         0x80272AEC
    // 0x803F208C: nop

    LOOKUP_FUNC(0x80272AEC)(rdram, ctx);
        goto after_4;
    // 0x803F208C: nop

    after_4:
    // 0x803F2090: lui         $at, 0x803F
    ctx->r1 = S32(0X803F << 16);
    // 0x803F2094: lwc1        $f8, 0x7C28($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X7C28);
    // 0x803F2098: nop

    // 0x803F209C: c.lt.s      $f8, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f8.fl < ctx->f0.fl;
    // 0x803F20A0: nop

    // 0x803F20A4: bc1f        L_803F20B8
    if (!c1cs) {
        // 0x803F20A8: lw          $t4, 0x20($sp)
        ctx->r12 = MEM_W(ctx->r29, 0X20);
            goto L_803F20B8;
    }
    // 0x803F20A8: lw          $t4, 0x20($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X20);
    // 0x803F20AC: jal         0x803F34D4
    // 0x803F20B0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_803F0000_menu_func_803F34D4(rdram, ctx);
        goto after_5;
    // 0x803F20B0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_5:
L_803F20B4:
    // 0x803F20B4: lw          $t4, 0x20($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X20);
L_803F20B8:
    // 0x803F20B8: lui         $at, 0x42A0
    ctx->r1 = S32(0X42A0 << 16);
    // 0x803F20BC: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x803F20C0: lwc1        $f16, 0x84($t4)
    ctx->f16.u32l = MEM_W(ctx->r12, 0X84);
    // 0x803F20C4: lui         $t5, 0x8028
    ctx->r13 = S32(0X8028 << 16);
    // 0x803F20C8: c.lt.s      $f10, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f10.fl < ctx->f16.fl;
    // 0x803F20CC: nop

    // 0x803F20D0: bc1f        L_803F216C
    if (!c1cs) {
        // 0x803F20D4: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_803F216C;
    }
    // 0x803F20D4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x803F20D8: lh          $t5, -0x1B60($t5)
    ctx->r13 = MEM_H(ctx->r13, -0X1B60);
    // 0x803F20DC: lui         $at, 0x803F
    ctx->r1 = S32(0X803F << 16);
    // 0x803F20E0: andi        $t6, $t5, 0x1
    ctx->r14 = ctx->r13 & 0X1;
    // 0x803F20E4: beq         $t6, $zero, L_803F216C
    if (ctx->r14 == 0) {
        // 0x803F20E8: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_803F216C;
    }
    // 0x803F20E8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x803F20EC: lwc1        $f18, 0x7C2C($at)
    ctx->f18.u32l = MEM_W(ctx->r1, 0X7C2C);
    // 0x803F20F0: lw          $t7, 0xC8($s0)
    ctx->r15 = MEM_W(ctx->r16, 0XC8);
    // 0x803F20F4: b           L_803F2168
    // 0x803F20F8: swc1        $f18, 0x940($t7)
    MEM_W(0X940, ctx->r15) = ctx->f18.u32l;
        goto L_803F2168;
    // 0x803F20F8: swc1        $f18, 0x940($t7)
    MEM_W(0X940, ctx->r15) = ctx->f18.u32l;
    // 0x803F20FC: slti        $at, $a1, 0x158
    ctx->r1 = SIGNED(ctx->r5) < 0X158 ? 1 : 0;
L_803F2100:
    // 0x803F2100: beq         $at, $zero, L_803F2160
    if (ctx->r1 == 0) {
        // 0x803F2104: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_803F2160;
    }
    // 0x803F2104: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x803F2108: lwc1        $f4, 0x5C($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X5C);
    // 0x803F210C: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    // 0x803F2110: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x803F2114: jal         0x803F1914
    // 0x803F2118: swc1        $f4, 0x940($v0)
    MEM_W(0X940, ctx->r2) = ctx->f4.u32l;
    ovl_803F0000_menu_func_803F1914(rdram, ctx);
        goto after_6;
    // 0x803F2118: swc1        $f4, 0x940($v0)
    MEM_W(0X940, ctx->r2) = ctx->f4.u32l;
    after_6:
    // 0x803F211C: beq         $v0, $zero, L_803F212C
    if (ctx->r2 == 0) {
        // 0x803F2120: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_803F212C;
    }
    // 0x803F2120: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x803F2124: jal         0x803F3720
    // 0x803F2128: addiu       $a1, $zero, 0x158
    ctx->r5 = ADD32(0, 0X158);
    ovl_803F0000_menu_func_803F3720(rdram, ctx);
        goto after_7;
    // 0x803F2128: addiu       $a1, $zero, 0x158
    ctx->r5 = ADD32(0, 0X158);
    after_7:
L_803F212C:
    // 0x803F212C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x803F2130: jal         0x803F1990
    // 0x803F2134: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
    ovl_803F0000_menu_func_803F1990(rdram, ctx);
        goto after_8;
    // 0x803F2134: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
    after_8:
    // 0x803F2138: beq         $v0, $zero, L_803F2150
    if (ctx->r2 == 0) {
        // 0x803F213C: nop
    
            goto L_803F2150;
    }
    // 0x803F213C: nop

    // 0x803F2140: jal         0x803F34D4
    // 0x803F2144: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_803F0000_menu_func_803F34D4(rdram, ctx);
        goto after_9;
    // 0x803F2144: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_9:
    // 0x803F2148: b           L_803F216C
    // 0x803F214C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_803F216C;
    // 0x803F214C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_803F2150:
    // 0x803F2150: jal         0x803F3A98
    // 0x803F2154: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_803F0000_menu_func_803F3A98(rdram, ctx);
        goto after_10;
    // 0x803F2154: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_10:
    // 0x803F2158: b           L_803F216C
    // 0x803F215C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_803F216C;
    // 0x803F215C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_803F2160:
    // 0x803F2160: jal         0x803F3A98
    // 0x803F2164: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_803F0000_menu_func_803F3A98(rdram, ctx);
        goto after_11;
    // 0x803F2164: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_11:
L_803F2168:
    // 0x803F2168: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_803F216C:
    // 0x803F216C: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x803F2170: jr          $ra
    // 0x803F2174: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x803F2174: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void ovl_803F0000_menu_func_803F1F8C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803F1F8C: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x803F1F90: lw          $t8, 0xC8($s0)
    ctx->r24 = MEM_W(ctx->r16, 0XC8);
    // 0x803F1F94: b           L_803F1FA8
    // 0x803F1F98: sh          $t7, 0x93E($t8)
    MEM_H(0X93E, ctx->r24) = ctx->r15;
        goto L_803F1FA8;
    // 0x803F1F98: sh          $t7, 0x93E($t8)
    MEM_H(0X93E, ctx->r24) = ctx->r15;
    // 0x803F1F9C: lw          $t0, 0xC8($s0)
    ctx->r8 = MEM_W(ctx->r16, 0XC8);
    // 0x803F1FA0: addiu       $t9, $zero, -0x123
    ctx->r25 = ADD32(0, -0X123);
    // 0x803F1FA4: sh          $t9, 0x93E($t0)
    MEM_H(0X93E, ctx->r8) = ctx->r25;
L_803F1FA8:
    // 0x803F1FA8: lw          $v0, 0xC8($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XC8);
    // 0x803F1FAC: nop

    // 0x803F1FB0: lh          $a1, 0x8B0($v0)
    ctx->r5 = MEM_H(ctx->r2, 0X8B0);
    // 0x803F1FB4: nop

    // 0x803F1FB8: slti        $at, $a1, 0x108
    ctx->r1 = SIGNED(ctx->r5) < 0X108 ? 1 : 0;
    // 0x803F1FBC: beq         $at, $zero, L_803F2100
    if (ctx->r1 == 0) {
        // 0x803F1FC0: slti        $at, $a1, 0x158
        ctx->r1 = SIGNED(ctx->r5) < 0X158 ? 1 : 0;
            goto L_803F2100;
    }
    // 0x803F1FC0: slti        $at, $a1, 0x158
    ctx->r1 = SIGNED(ctx->r5) < 0X158 ? 1 : 0;
    // 0x803F1FC4: jal         0x803F1914
    // 0x803F1FC8: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    ovl_803F0000_menu_func_803F1914(rdram, ctx);
        goto after_0;
    // 0x803F1FC8: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    after_0:
    // 0x803F1FCC: beq         $v0, $zero, L_803F2044
    if (ctx->r2 == 0) {
        // 0x803F1FD0: addiu       $t1, $zero, 0x16
        ctx->r9 = ADD32(0, 0X16);
            goto L_803F2044;
    }
    // 0x803F1FD0: addiu       $t1, $zero, 0x16
    ctx->r9 = ADD32(0, 0X16);
    // 0x803F1FD4: lw          $t2, 0xC8($s0)
    ctx->r10 = MEM_W(ctx->r16, 0XC8);
    // 0x803F1FD8: lui         $t3, 0x8009
    ctx->r11 = S32(0X8009 << 16);
    // 0x803F1FDC: sh          $t1, 0x938($t2)
    MEM_H(0X938, ctx->r10) = ctx->r9;
    // 0x803F1FE0: lw          $t3, 0x3B20($t3)
    ctx->r11 = MEM_W(ctx->r11, 0X3B20);
    // 0x803F1FE4: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x803F1FE8: lwc1        $f6, 0x0($t3)
    ctx->f6.u32l = MEM_W(ctx->r11, 0X0);
    // 0x803F1FEC: addiu       $t4, $zero, 0xC8
    ctx->r12 = ADD32(0, 0XC8);
    // 0x803F1FF0: c.lt.s      $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f4.fl < ctx->f6.fl;
    // 0x803F1FF4: addiu       $t1, $zero, -0x108
    ctx->r9 = ADD32(0, -0X108);
    // 0x803F1FF8: bc1f        L_803F200C
    if (!c1cs) {
        // 0x803F1FFC: addiu       $t0, $zero, 0x108
        ctx->r8 = ADD32(0, 0X108);
            goto L_803F200C;
    }
    // 0x803F1FFC: addiu       $t0, $zero, 0x108
    ctx->r8 = ADD32(0, 0X108);
    // 0x803F2000: lw          $t5, 0xC8($s0)
    ctx->r13 = MEM_W(ctx->r16, 0XC8);
    // 0x803F2004: b           L_803F2018
    // 0x803F2008: sh          $t4, 0x93E($t5)
    MEM_H(0X93E, ctx->r13) = ctx->r12;
        goto L_803F2018;
    // 0x803F2008: sh          $t4, 0x93E($t5)
    MEM_H(0X93E, ctx->r13) = ctx->r12;
L_803F200C:
    // 0x803F200C: lw          $t7, 0xC8($s0)
    ctx->r15 = MEM_W(ctx->r16, 0XC8);
    // 0x803F2010: addiu       $t6, $zero, -0xC8
    ctx->r14 = ADD32(0, -0XC8);
    // 0x803F2014: sh          $t6, 0x93E($t7)
    MEM_H(0X93E, ctx->r15) = ctx->r14;
L_803F2018:
    // 0x803F2018: lw          $v0, 0xC8($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XC8);
    // 0x803F201C: nop

    // 0x803F2020: lhu         $t8, 0x8($v0)
    ctx->r24 = MEM_HU(ctx->r2, 0X8);
    // 0x803F2024: nop

    // 0x803F2028: andi        $t9, $t8, 0x1
    ctx->r25 = ctx->r24 & 0X1;
    // 0x803F202C: beq         $t9, $zero, L_803F203C
    if (ctx->r25 == 0) {
        // 0x803F2030: nop
    
            goto L_803F203C;
    }
    // 0x803F2030: nop

    // 0x803F2034: b           L_803F2168
    // 0x803F2038: sh          $t0, 0x93C($v0)
    MEM_H(0X93C, ctx->r2) = ctx->r8;
        goto L_803F2168;
    // 0x803F2038: sh          $t0, 0x93C($v0)
    MEM_H(0X93C, ctx->r2) = ctx->r8;
L_803F203C:
    // 0x803F203C: b           L_803F2168
    // 0x803F2040: sh          $t1, 0x93C($v0)
    MEM_H(0X93C, ctx->r2) = ctx->r9;
        goto L_803F2168;
    // 0x803F2040: sh          $t1, 0x93C($v0)
    MEM_H(0X93C, ctx->r2) = ctx->r9;
L_803F2044:
    // 0x803F2044: jal         0x803F1C68
    // 0x803F2048: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_803F0000_menu_func_803F1C68(rdram, ctx);
        goto after_1;
    // 0x803F2048: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
    // 0x803F204C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x803F2050: addiu       $a1, $zero, 0x500
    ctx->r5 = ADD32(0, 0X500);
    // 0x803F2054: jal         0x803F11B4
    // 0x803F2058: addiu       $a2, $zero, 0x143
    ctx->r6 = ADD32(0, 0X143);
    ovl_803F0000_menu_func_803F11B4(rdram, ctx);
        goto after_2;
    // 0x803F2058: addiu       $a2, $zero, 0x143
    ctx->r6 = ADD32(0, 0X143);
    after_2:
    // 0x803F205C: beq         $v0, $zero, L_803F2074
    if (ctx->r2 == 0) {
        // 0x803F2060: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_803F2074;
    }
    // 0x803F2060: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x803F2064: lw          $t3, 0xC8($s0)
    ctx->r11 = MEM_W(ctx->r16, 0XC8);
    // 0x803F2068: addiu       $t2, $zero, 0xA
    ctx->r10 = ADD32(0, 0XA);
    // 0x803F206C: b           L_803F20B4
    // 0x803F2070: sh          $t2, 0x938($t3)
    MEM_H(0X938, ctx->r11) = ctx->r10;
        goto L_803F20B4;
    // 0x803F2070: sh          $t2, 0x938($t3)
    MEM_H(0X938, ctx->r11) = ctx->r10;
L_803F2074:
    // 0x803F2074: jal         0x803F1990
    // 0x803F2078: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
    ovl_803F0000_menu_func_803F1990(rdram, ctx);
        goto after_3;
    // 0x803F2078: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
    after_3:
    // 0x803F207C: beq         $v0, $zero, L_803F20B8
    if (ctx->r2 == 0) {
        // 0x803F2080: lw          $t4, 0x20($sp)
        ctx->r12 = MEM_W(ctx->r29, 0X20);
            goto L_803F20B8;
    }
    // 0x803F2080: lw          $t4, 0x20($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X20);
    // 0x803F2084: lwc1        $f12, 0x44($s0)
    ctx->f12.u32l = MEM_W(ctx->r16, 0X44);
    // 0x803F2088: jal         0x80272AEC
    // 0x803F208C: nop

    LOOKUP_FUNC(0x80272AEC)(rdram, ctx);
        goto after_4;
    // 0x803F208C: nop

    after_4:
    // 0x803F2090: lui         $at, 0x803F
    ctx->r1 = S32(0X803F << 16);
    // 0x803F2094: lwc1        $f8, 0x7C28($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X7C28);
    // 0x803F2098: nop

    // 0x803F209C: c.lt.s      $f8, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f8.fl < ctx->f0.fl;
    // 0x803F20A0: nop

    // 0x803F20A4: bc1f        L_803F20B8
    if (!c1cs) {
        // 0x803F20A8: lw          $t4, 0x20($sp)
        ctx->r12 = MEM_W(ctx->r29, 0X20);
            goto L_803F20B8;
    }
    // 0x803F20A8: lw          $t4, 0x20($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X20);
    // 0x803F20AC: jal         0x803F34D4
    // 0x803F20B0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_803F0000_menu_func_803F34D4(rdram, ctx);
        goto after_5;
    // 0x803F20B0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_5:
L_803F20B4:
    // 0x803F20B4: lw          $t4, 0x20($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X20);
L_803F20B8:
    // 0x803F20B8: lui         $at, 0x42A0
    ctx->r1 = S32(0X42A0 << 16);
    // 0x803F20BC: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x803F20C0: lwc1        $f16, 0x84($t4)
    ctx->f16.u32l = MEM_W(ctx->r12, 0X84);
    // 0x803F20C4: lui         $t5, 0x8028
    ctx->r13 = S32(0X8028 << 16);
    // 0x803F20C8: c.lt.s      $f10, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f10.fl < ctx->f16.fl;
    // 0x803F20CC: nop

    // 0x803F20D0: bc1f        L_803F216C
    if (!c1cs) {
        // 0x803F20D4: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_803F216C;
    }
    // 0x803F20D4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x803F20D8: lh          $t5, -0x1B60($t5)
    ctx->r13 = MEM_H(ctx->r13, -0X1B60);
    // 0x803F20DC: lui         $at, 0x803F
    ctx->r1 = S32(0X803F << 16);
    // 0x803F20E0: andi        $t6, $t5, 0x1
    ctx->r14 = ctx->r13 & 0X1;
    // 0x803F20E4: beq         $t6, $zero, L_803F216C
    if (ctx->r14 == 0) {
        // 0x803F20E8: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_803F216C;
    }
    // 0x803F20E8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x803F20EC: lwc1        $f18, 0x7C2C($at)
    ctx->f18.u32l = MEM_W(ctx->r1, 0X7C2C);
    // 0x803F20F0: lw          $t7, 0xC8($s0)
    ctx->r15 = MEM_W(ctx->r16, 0XC8);
    // 0x803F20F4: b           L_803F2168
    // 0x803F20F8: swc1        $f18, 0x940($t7)
    MEM_W(0X940, ctx->r15) = ctx->f18.u32l;
        goto L_803F2168;
    // 0x803F20F8: swc1        $f18, 0x940($t7)
    MEM_W(0X940, ctx->r15) = ctx->f18.u32l;
    // 0x803F20FC: slti        $at, $a1, 0x158
    ctx->r1 = SIGNED(ctx->r5) < 0X158 ? 1 : 0;
L_803F2100:
    // 0x803F2100: beq         $at, $zero, L_803F2160
    if (ctx->r1 == 0) {
        // 0x803F2104: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_803F2160;
    }
    // 0x803F2104: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x803F2108: lwc1        $f4, 0x5C($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X5C);
    // 0x803F210C: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    // 0x803F2110: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x803F2114: jal         0x803F1914
    // 0x803F2118: swc1        $f4, 0x940($v0)
    MEM_W(0X940, ctx->r2) = ctx->f4.u32l;
    ovl_803F0000_menu_func_803F1914(rdram, ctx);
        goto after_6;
    // 0x803F2118: swc1        $f4, 0x940($v0)
    MEM_W(0X940, ctx->r2) = ctx->f4.u32l;
    after_6:
    // 0x803F211C: beq         $v0, $zero, L_803F212C
    if (ctx->r2 == 0) {
        // 0x803F2120: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_803F212C;
    }
    // 0x803F2120: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x803F2124: jal         0x803F3720
    // 0x803F2128: addiu       $a1, $zero, 0x158
    ctx->r5 = ADD32(0, 0X158);
    ovl_803F0000_menu_func_803F3720(rdram, ctx);
        goto after_7;
    // 0x803F2128: addiu       $a1, $zero, 0x158
    ctx->r5 = ADD32(0, 0X158);
    after_7:
L_803F212C:
    // 0x803F212C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x803F2130: jal         0x803F1990
    // 0x803F2134: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
    ovl_803F0000_menu_func_803F1990(rdram, ctx);
        goto after_8;
    // 0x803F2134: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
    after_8:
    // 0x803F2138: beq         $v0, $zero, L_803F2150
    if (ctx->r2 == 0) {
        // 0x803F213C: nop
    
            goto L_803F2150;
    }
    // 0x803F213C: nop

    // 0x803F2140: jal         0x803F34D4
    // 0x803F2144: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_803F0000_menu_func_803F34D4(rdram, ctx);
        goto after_9;
    // 0x803F2144: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_9:
    // 0x803F2148: b           L_803F216C
    // 0x803F214C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_803F216C;
    // 0x803F214C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_803F2150:
    // 0x803F2150: jal         0x803F3A98
    // 0x803F2154: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_803F0000_menu_func_803F3A98(rdram, ctx);
        goto after_10;
    // 0x803F2154: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_10:
    // 0x803F2158: b           L_803F216C
    // 0x803F215C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_803F216C;
    // 0x803F215C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_803F2160:
    // 0x803F2160: jal         0x803F3A98
    // 0x803F2164: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_803F0000_menu_func_803F3A98(rdram, ctx);
        goto after_11;
    // 0x803F2164: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_11:
L_803F2168:
    // 0x803F2168: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_803F216C:
    // 0x803F216C: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x803F2170: jr          $ra
    // 0x803F2174: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x803F2174: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void ovl_803F0000_menu_func_803F1FC8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803F1FC8: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    // 0x803F1FCC: beq         $v0, $zero, L_803F2044
    if (ctx->r2 == 0) {
        // 0x803F1FD0: addiu       $t1, $zero, 0x16
        ctx->r9 = ADD32(0, 0X16);
            goto L_803F2044;
    }
    // 0x803F1FD0: addiu       $t1, $zero, 0x16
    ctx->r9 = ADD32(0, 0X16);
    // 0x803F1FD4: lw          $t2, 0xC8($s0)
    ctx->r10 = MEM_W(ctx->r16, 0XC8);
    // 0x803F1FD8: lui         $t3, 0x8009
    ctx->r11 = S32(0X8009 << 16);
    // 0x803F1FDC: sh          $t1, 0x938($t2)
    MEM_H(0X938, ctx->r10) = ctx->r9;
    // 0x803F1FE0: lw          $t3, 0x3B20($t3)
    ctx->r11 = MEM_W(ctx->r11, 0X3B20);
    // 0x803F1FE4: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x803F1FE8: lwc1        $f6, 0x0($t3)
    ctx->f6.u32l = MEM_W(ctx->r11, 0X0);
    // 0x803F1FEC: addiu       $t4, $zero, 0xC8
    ctx->r12 = ADD32(0, 0XC8);
    // 0x803F1FF0: c.lt.s      $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f4.fl < ctx->f6.fl;
    // 0x803F1FF4: addiu       $t1, $zero, -0x108
    ctx->r9 = ADD32(0, -0X108);
    // 0x803F1FF8: bc1f        L_803F200C
    if (!c1cs) {
        // 0x803F1FFC: addiu       $t0, $zero, 0x108
        ctx->r8 = ADD32(0, 0X108);
            goto L_803F200C;
    }
    // 0x803F1FFC: addiu       $t0, $zero, 0x108
    ctx->r8 = ADD32(0, 0X108);
    // 0x803F2000: lw          $t5, 0xC8($s0)
    ctx->r13 = MEM_W(ctx->r16, 0XC8);
    // 0x803F2004: b           L_803F2018
    // 0x803F2008: sh          $t4, 0x93E($t5)
    MEM_H(0X93E, ctx->r13) = ctx->r12;
        goto L_803F2018;
    // 0x803F2008: sh          $t4, 0x93E($t5)
    MEM_H(0X93E, ctx->r13) = ctx->r12;
L_803F200C:
    // 0x803F200C: lw          $t7, 0xC8($s0)
    ctx->r15 = MEM_W(ctx->r16, 0XC8);
    // 0x803F2010: addiu       $t6, $zero, -0xC8
    ctx->r14 = ADD32(0, -0XC8);
    // 0x803F2014: sh          $t6, 0x93E($t7)
    MEM_H(0X93E, ctx->r15) = ctx->r14;
L_803F2018:
    // 0x803F2018: lw          $v0, 0xC8($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XC8);
    // 0x803F201C: nop

    // 0x803F2020: lhu         $t8, 0x8($v0)
    ctx->r24 = MEM_HU(ctx->r2, 0X8);
    // 0x803F2024: nop

    // 0x803F2028: andi        $t9, $t8, 0x1
    ctx->r25 = ctx->r24 & 0X1;
    // 0x803F202C: beq         $t9, $zero, L_803F203C
    if (ctx->r25 == 0) {
        // 0x803F2030: nop
    
            goto L_803F203C;
    }
    // 0x803F2030: nop

    // 0x803F2034: b           L_803F2168
    // 0x803F2038: sh          $t0, 0x93C($v0)
    MEM_H(0X93C, ctx->r2) = ctx->r8;
        goto L_803F2168;
    // 0x803F2038: sh          $t0, 0x93C($v0)
    MEM_H(0X93C, ctx->r2) = ctx->r8;
L_803F203C:
    // 0x803F203C: b           L_803F2168
    // 0x803F2040: sh          $t1, 0x93C($v0)
    MEM_H(0X93C, ctx->r2) = ctx->r9;
        goto L_803F2168;
    // 0x803F2040: sh          $t1, 0x93C($v0)
    MEM_H(0X93C, ctx->r2) = ctx->r9;
L_803F2044:
    // 0x803F2044: jal         0x803F1C68
    // 0x803F2048: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_803F0000_menu_func_803F1C68(rdram, ctx);
        goto after_0;
    // 0x803F2048: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_0:
    // 0x803F204C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x803F2050: addiu       $a1, $zero, 0x500
    ctx->r5 = ADD32(0, 0X500);
    // 0x803F2054: jal         0x803F11B4
    // 0x803F2058: addiu       $a2, $zero, 0x143
    ctx->r6 = ADD32(0, 0X143);
    ovl_803F0000_menu_func_803F11B4(rdram, ctx);
        goto after_1;
    // 0x803F2058: addiu       $a2, $zero, 0x143
    ctx->r6 = ADD32(0, 0X143);
    after_1:
    // 0x803F205C: beq         $v0, $zero, L_803F2074
    if (ctx->r2 == 0) {
        // 0x803F2060: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_803F2074;
    }
    // 0x803F2060: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x803F2064: lw          $t3, 0xC8($s0)
    ctx->r11 = MEM_W(ctx->r16, 0XC8);
    // 0x803F2068: addiu       $t2, $zero, 0xA
    ctx->r10 = ADD32(0, 0XA);
    // 0x803F206C: b           L_803F20B4
    // 0x803F2070: sh          $t2, 0x938($t3)
    MEM_H(0X938, ctx->r11) = ctx->r10;
        goto L_803F20B4;
    // 0x803F2070: sh          $t2, 0x938($t3)
    MEM_H(0X938, ctx->r11) = ctx->r10;
L_803F2074:
    // 0x803F2074: jal         0x803F1990
    // 0x803F2078: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
    ovl_803F0000_menu_func_803F1990(rdram, ctx);
        goto after_2;
    // 0x803F2078: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
    after_2:
    // 0x803F207C: beq         $v0, $zero, L_803F20B8
    if (ctx->r2 == 0) {
        // 0x803F2080: lw          $t4, 0x20($sp)
        ctx->r12 = MEM_W(ctx->r29, 0X20);
            goto L_803F20B8;
    }
    // 0x803F2080: lw          $t4, 0x20($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X20);
    // 0x803F2084: lwc1        $f12, 0x44($s0)
    ctx->f12.u32l = MEM_W(ctx->r16, 0X44);
    // 0x803F2088: jal         0x80272AEC
    // 0x803F208C: nop

    LOOKUP_FUNC(0x80272AEC)(rdram, ctx);
        goto after_3;
    // 0x803F208C: nop

    after_3:
    // 0x803F2090: lui         $at, 0x803F
    ctx->r1 = S32(0X803F << 16);
    // 0x803F2094: lwc1        $f8, 0x7C28($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X7C28);
    // 0x803F2098: nop

    // 0x803F209C: c.lt.s      $f8, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f8.fl < ctx->f0.fl;
    // 0x803F20A0: nop

    // 0x803F20A4: bc1f        L_803F20B8
    if (!c1cs) {
        // 0x803F20A8: lw          $t4, 0x20($sp)
        ctx->r12 = MEM_W(ctx->r29, 0X20);
            goto L_803F20B8;
    }
    // 0x803F20A8: lw          $t4, 0x20($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X20);
    // 0x803F20AC: jal         0x803F34D4
    // 0x803F20B0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_803F0000_menu_func_803F34D4(rdram, ctx);
        goto after_4;
    // 0x803F20B0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_4:
L_803F20B4:
    // 0x803F20B4: lw          $t4, 0x20($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X20);
L_803F20B8:
    // 0x803F20B8: lui         $at, 0x42A0
    ctx->r1 = S32(0X42A0 << 16);
    // 0x803F20BC: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x803F20C0: lwc1        $f16, 0x84($t4)
    ctx->f16.u32l = MEM_W(ctx->r12, 0X84);
    // 0x803F20C4: lui         $t5, 0x8028
    ctx->r13 = S32(0X8028 << 16);
    // 0x803F20C8: c.lt.s      $f10, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f10.fl < ctx->f16.fl;
    // 0x803F20CC: nop

    // 0x803F20D0: bc1f        L_803F216C
    if (!c1cs) {
        // 0x803F20D4: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_803F216C;
    }
    // 0x803F20D4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x803F20D8: lh          $t5, -0x1B60($t5)
    ctx->r13 = MEM_H(ctx->r13, -0X1B60);
    // 0x803F20DC: lui         $at, 0x803F
    ctx->r1 = S32(0X803F << 16);
    // 0x803F20E0: andi        $t6, $t5, 0x1
    ctx->r14 = ctx->r13 & 0X1;
    // 0x803F20E4: beq         $t6, $zero, L_803F216C
    if (ctx->r14 == 0) {
        // 0x803F20E8: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_803F216C;
    }
    // 0x803F20E8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x803F20EC: lwc1        $f18, 0x7C2C($at)
    ctx->f18.u32l = MEM_W(ctx->r1, 0X7C2C);
    // 0x803F20F0: lw          $t7, 0xC8($s0)
    ctx->r15 = MEM_W(ctx->r16, 0XC8);
    // 0x803F20F4: b           L_803F2168
    // 0x803F20F8: swc1        $f18, 0x940($t7)
    MEM_W(0X940, ctx->r15) = ctx->f18.u32l;
        goto L_803F2168;
    // 0x803F20F8: swc1        $f18, 0x940($t7)
    MEM_W(0X940, ctx->r15) = ctx->f18.u32l;
    // 0x803F20FC: slti        $at, $a1, 0x158
    ctx->r1 = SIGNED(ctx->r5) < 0X158 ? 1 : 0;
    // 0x803F2100: beq         $at, $zero, L_803F2160
    if (ctx->r1 == 0) {
        // 0x803F2104: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_803F2160;
    }
    // 0x803F2104: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x803F2108: lwc1        $f4, 0x5C($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X5C);
    // 0x803F210C: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    // 0x803F2110: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x803F2114: jal         0x803F1914
    // 0x803F2118: swc1        $f4, 0x940($v0)
    MEM_W(0X940, ctx->r2) = ctx->f4.u32l;
    ovl_803F0000_menu_func_803F1914(rdram, ctx);
        goto after_5;
    // 0x803F2118: swc1        $f4, 0x940($v0)
    MEM_W(0X940, ctx->r2) = ctx->f4.u32l;
    after_5:
    // 0x803F211C: beq         $v0, $zero, L_803F212C
    if (ctx->r2 == 0) {
        // 0x803F2120: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_803F212C;
    }
    // 0x803F2120: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x803F2124: jal         0x803F3720
    // 0x803F2128: addiu       $a1, $zero, 0x158
    ctx->r5 = ADD32(0, 0X158);
    ovl_803F0000_menu_func_803F3720(rdram, ctx);
        goto after_6;
    // 0x803F2128: addiu       $a1, $zero, 0x158
    ctx->r5 = ADD32(0, 0X158);
    after_6:
L_803F212C:
    // 0x803F212C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x803F2130: jal         0x803F1990
    // 0x803F2134: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
    ovl_803F0000_menu_func_803F1990(rdram, ctx);
        goto after_7;
    // 0x803F2134: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
    after_7:
    // 0x803F2138: beq         $v0, $zero, L_803F2150
    if (ctx->r2 == 0) {
        // 0x803F213C: nop
    
            goto L_803F2150;
    }
    // 0x803F213C: nop

    // 0x803F2140: jal         0x803F34D4
    // 0x803F2144: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_803F0000_menu_func_803F34D4(rdram, ctx);
        goto after_8;
    // 0x803F2144: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_8:
    // 0x803F2148: b           L_803F216C
    // 0x803F214C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_803F216C;
    // 0x803F214C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_803F2150:
    // 0x803F2150: jal         0x803F3A98
    // 0x803F2154: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_803F0000_menu_func_803F3A98(rdram, ctx);
        goto after_9;
    // 0x803F2154: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_9:
    // 0x803F2158: b           L_803F216C
    // 0x803F215C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_803F216C;
    // 0x803F215C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_803F2160:
    // 0x803F2160: jal         0x803F3A98
    // 0x803F2164: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_803F0000_menu_func_803F3A98(rdram, ctx);
        goto after_10;
    // 0x803F2164: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_10:
L_803F2168:
    // 0x803F2168: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_803F216C:
    // 0x803F216C: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x803F2170: jr          $ra
    // 0x803F2174: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x803F2174: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void ovl_803F0000_menu_func_803F2178(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803F2178: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x803F217C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x803F2180: lw          $t6, 0xC8($a0)
    ctx->r14 = MEM_W(ctx->r4, 0XC8);
    // 0x803F2184: or          $a3, $a0, $zero
    ctx->r7 = ctx->r4 | 0;
    // 0x803F2188: sh          $zero, 0x948($t6)
    MEM_H(0X948, ctx->r14) = 0;
    // 0x803F218C: lhu         $t7, 0x2C($a0)
    ctx->r15 = MEM_HU(ctx->r4, 0X2C);
    // 0x803F2190: lui         $at, 0x4008
    ctx->r1 = S32(0X4008 << 16);
    // 0x803F2194: andi        $t8, $t7, 0x1
    ctx->r24 = ctx->r15 & 0X1;
    // 0x803F2198: beq         $t8, $zero, L_803F21BC
    if (ctx->r24 == 0) {
        // 0x803F219C: lui         $t0, 0x8028
        ctx->r8 = S32(0X8028 << 16);
            goto L_803F21BC;
    }
    // 0x803F219C: lui         $t0, 0x8028
    ctx->r8 = S32(0X8028 << 16);
    // 0x803F21A0: lui         $at, 0x803F
    ctx->r1 = S32(0X803F << 16);
    // 0x803F21A4: lwc1        $f5, 0x7C30($at)
    ctx->f_odd[(5 - 1) * 2] = MEM_W(ctx->r1, 0X7C30);
    // 0x803F21A8: lwc1        $f4, 0x7C34($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X7C34);
    // 0x803F21AC: lw          $t9, 0xC8($a0)
    ctx->r25 = MEM_W(ctx->r4, 0XC8);
    // 0x803F21B0: cvt.s.d     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.d); 
    ctx->f6.fl = CVT_S_D(ctx->f4.d);
    // 0x803F21B4: b           L_803F21D0
    // 0x803F21B8: swc1        $f6, 0x940($t9)
    MEM_W(0X940, ctx->r25) = ctx->f6.u32l;
        goto L_803F21D0;
    // 0x803F21B8: swc1        $f6, 0x940($t9)
    MEM_W(0X940, ctx->r25) = ctx->f6.u32l;
L_803F21BC:
    // 0x803F21BC: mtc1        $at, $f9
    ctx->f_odd[(9 - 1) * 2] = ctx->r1;
    // 0x803F21C0: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x803F21C4: lw          $t1, 0xC8($a3)
    ctx->r9 = MEM_W(ctx->r7, 0XC8);
    // 0x803F21C8: cvt.s.d     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.d); 
    ctx->f10.fl = CVT_S_D(ctx->f8.d);
    // 0x803F21CC: swc1        $f10, 0x940($t1)
    MEM_W(0X940, ctx->r9) = ctx->f10.u32l;
L_803F21D0:
    // 0x803F21D0: lw          $v1, 0xC8($a3)
    ctx->r3 = MEM_W(ctx->r7, 0XC8);
    // 0x803F21D4: lbu         $t2, 0x6($a3)
    ctx->r10 = MEM_BU(ctx->r7, 0X6);
    // 0x803F21D8: lhu         $t5, 0x8($v1)
    ctx->r13 = MEM_HU(ctx->r3, 0X8);
    // 0x803F21DC: addu        $t3, $v1, $t2
    ctx->r11 = ADD32(ctx->r3, ctx->r10);
    // 0x803F21E0: lbu         $v0, 0x8E1($t3)
    ctx->r2 = MEM_BU(ctx->r11, 0X8E1);
    // 0x803F21E4: andi        $t6, $t5, 0x1
    ctx->r14 = ctx->r13 & 0X1;
    // 0x803F21E8: sll         $t4, $v0, 1
    ctx->r12 = S32(ctx->r2 << 1);
    // 0x803F21EC: addu        $t0, $t0, $t4
    ctx->r8 = ADD32(ctx->r8, ctx->r12);
    // 0x803F21F0: lh          $t0, -0x36A0($t0)
    ctx->r8 = MEM_H(ctx->r8, -0X36A0);
    // 0x803F21F4: beq         $t6, $zero, L_803F2200
    if (ctx->r14 == 0) {
        // 0x803F21F8: addiu       $t7, $zero, 0x1C
        ctx->r15 = ADD32(0, 0X1C);
            goto L_803F2200;
    }
    // 0x803F21F8: addiu       $t7, $zero, 0x1C
    ctx->r15 = ADD32(0, 0X1C);
    // 0x803F21FC: negu        $t0, $t0
    ctx->r8 = SUB32(0, ctx->r8);
L_803F2200:
    // 0x803F2200: lh          $v0, 0x8B0($v1)
    ctx->r2 = MEM_H(ctx->r3, 0X8B0);
    // 0x803F2204: nop

    // 0x803F2208: slti        $at, $v0, 0x108
    ctx->r1 = SIGNED(ctx->r2) < 0X108 ? 1 : 0;
    // 0x803F220C: beq         $at, $zero, L_803F2334
    if (ctx->r1 == 0) {
        // 0x803F2210: slti        $at, $v0, 0x158
        ctx->r1 = SIGNED(ctx->r2) < 0X158 ? 1 : 0;
            goto L_803F2334;
    }
    // 0x803F2210: slti        $at, $v0, 0x158
    ctx->r1 = SIGNED(ctx->r2) < 0X158 ? 1 : 0;
    // 0x803F2214: sh          $t7, 0x938($v1)
    MEM_H(0X938, ctx->r3) = ctx->r15;
    // 0x803F2218: lw          $v1, 0xC8($a3)
    ctx->r3 = MEM_W(ctx->r7, 0XC8);
    // 0x803F221C: addiu       $a2, $zero, -0x1E
    ctx->r6 = ADD32(0, -0X1E);
    // 0x803F2220: lhu         $t8, 0x8($v1)
    ctx->r24 = MEM_HU(ctx->r3, 0X8);
    // 0x803F2224: nop

    // 0x803F2228: andi        $t9, $t8, 0x1
    ctx->r25 = ctx->r24 & 0X1;
    // 0x803F222C: beq         $t9, $zero, L_803F223C
    if (ctx->r25 == 0) {
        // 0x803F2230: nop
    
            goto L_803F223C;
    }
    // 0x803F2230: nop

    // 0x803F2234: b           L_803F223C
    // 0x803F2238: addiu       $a2, $zero, 0x1E
    ctx->r6 = ADD32(0, 0X1E);
        goto L_803F223C;
    // 0x803F2238: addiu       $a2, $zero, 0x1E
    ctx->r6 = ADD32(0, 0X1E);
L_803F223C:
    // 0x803F223C: mtc1        $a2, $f16
    ctx->f16.u32l = ctx->r6;
    // 0x803F2240: lwc1        $f4, 0x4C($a3)
    ctx->f4.u32l = MEM_W(ctx->r7, 0X4C);
    // 0x803F2244: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x803F2248: mtc1        $t0, $f10
    ctx->f10.u32l = ctx->r8;
    // 0x803F224C: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
    // 0x803F2250: add.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f18.fl + ctx->f4.fl;
    // 0x803F2254: cfc1        $t1, $FpcCsr
    ctx->r9 = get_cop1_cs();
    // 0x803F2258: nop

    // 0x803F225C: ori         $at, $t1, 0x3
    ctx->r1 = ctx->r9 | 0X3;
    // 0x803F2260: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x803F2264: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x803F2268: nop

    // 0x803F226C: cvt.w.s     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.u32l = CVT_W_S(ctx->f6.fl);
    // 0x803F2270: ctc1        $t1, $FpcCsr
    set_cop1_cs(ctx->r9);
    // 0x803F2274: mfc1        $t2, $f8
    ctx->r10 = (int32_t)ctx->f8.u32l;
    // 0x803F2278: cvt.s.w     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.fl = CVT_S_W(ctx->f10.u32l);
    // 0x803F227C: sh          $t2, 0x93C($v1)
    MEM_H(0X93C, ctx->r3) = ctx->r10;
    // 0x803F2280: lwc1        $f0, 0x44($a3)
    ctx->f0.u32l = MEM_W(ctx->r7, 0X44);
    // 0x803F2284: lw          $t7, 0xC8($a3)
    ctx->r15 = MEM_W(ctx->r7, 0XC8);
    // 0x803F2288: sub.s       $f18, $f16, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f18.fl = ctx->f16.fl - ctx->f0.fl;
    // 0x803F228C: cfc1        $t3, $FpcCsr
    ctx->r11 = get_cop1_cs();
    // 0x803F2290: nop

    // 0x803F2294: ori         $at, $t3, 0x3
    ctx->r1 = ctx->r11 | 0X3;
    // 0x803F2298: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x803F229C: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x803F22A0: addiu       $at, $zero, 0x5
    ctx->r1 = ADD32(0, 0X5);
    // 0x803F22A4: cvt.w.s     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    ctx->f4.u32l = CVT_W_S(ctx->f18.fl);
    // 0x803F22A8: mfc1        $v0, $f4
    ctx->r2 = (int32_t)ctx->f4.u32l;
    // 0x803F22AC: ctc1        $t3, $FpcCsr
    set_cop1_cs(ctx->r11);
    // 0x803F22B0: div         $zero, $v0, $at
    lo = S32(S64(S32(ctx->r2)) / S64(S32(ctx->r1))); hi = S32(S64(S32(ctx->r2)) % S64(S32(ctx->r1)));
    // 0x803F22B4: mflo        $v0
    ctx->r2 = lo;
    // 0x803F22B8: mtc1        $v0, $f6
    ctx->f6.u32l = ctx->r2;
    // 0x803F22BC: nop

    // 0x803F22C0: cvt.s.w     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.fl = CVT_S_W(ctx->f6.u32l);
    // 0x803F22C4: add.s       $f10, $f0, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f0.fl + ctx->f8.fl;
    // 0x803F22C8: cfc1        $t5, $FpcCsr
    ctx->r13 = get_cop1_cs();
    // 0x803F22CC: nop

    // 0x803F22D0: ori         $at, $t5, 0x3
    ctx->r1 = ctx->r13 | 0X3;
    // 0x803F22D4: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x803F22D8: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x803F22DC: nop

    // 0x803F22E0: cvt.w.s     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.u32l = CVT_W_S(ctx->f10.fl);
    // 0x803F22E4: mfc1        $t6, $f16
    ctx->r14 = (int32_t)ctx->f16.u32l;
    // 0x803F22E8: ctc1        $t5, $FpcCsr
    set_cop1_cs(ctx->r13);
    // 0x803F22EC: sh          $t6, 0x93E($t7)
    MEM_H(0X93E, ctx->r15) = ctx->r14;
    // 0x803F22F0: lw          $t8, 0xC8($a3)
    ctx->r24 = MEM_W(ctx->r7, 0XC8);
    // 0x803F22F4: nop

    // 0x803F22F8: sh          $zero, 0x93A($t8)
    MEM_H(0X93A, ctx->r24) = 0;
    // 0x803F22FC: lw          $a1, 0xC8($a3)
    ctx->r5 = MEM_W(ctx->r7, 0XC8);
    // 0x803F2300: sw          $a3, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r7;
    // 0x803F2304: jal         0x803F17BC
    // 0x803F2308: addiu       $a1, $a1, 0x938
    ctx->r5 = ADD32(ctx->r5, 0X938);
    ovl_803F0000_menu_func_803F17BC(rdram, ctx);
        goto after_0;
    // 0x803F2308: addiu       $a1, $a1, 0x938
    ctx->r5 = ADD32(ctx->r5, 0X938);
    after_0:
    // 0x803F230C: lui         $t9, 0x8028
    ctx->r25 = S32(0X8028 << 16);
    // 0x803F2310: lh          $t9, -0x1B60($t9)
    ctx->r25 = MEM_H(ctx->r25, -0X1B60);
    // 0x803F2314: lw          $a3, 0x18($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X18);
    // 0x803F2318: andi        $t1, $t9, 0x1
    ctx->r9 = ctx->r25 & 0X1;
    // 0x803F231C: beq         $t1, $zero, L_803F23C0
    if (ctx->r9 == 0) {
        // 0x803F2320: addiu       $t2, $zero, 0xA
        ctx->r10 = ADD32(0, 0XA);
            goto L_803F23C0;
    }
    // 0x803F2320: addiu       $t2, $zero, 0xA
    ctx->r10 = ADD32(0, 0XA);
    // 0x803F2324: lw          $t3, 0xC8($a3)
    ctx->r11 = MEM_W(ctx->r7, 0XC8);
    // 0x803F2328: b           L_803F23C0
    // 0x803F232C: sh          $t2, 0x938($t3)
    MEM_H(0X938, ctx->r11) = ctx->r10;
        goto L_803F23C0;
    // 0x803F232C: sh          $t2, 0x938($t3)
    MEM_H(0X938, ctx->r11) = ctx->r10;
    // 0x803F2330: slti        $at, $v0, 0x158
    ctx->r1 = SIGNED(ctx->r2) < 0X158 ? 1 : 0;
L_803F2334:
    // 0x803F2334: beq         $at, $zero, L_803F23B8
    if (ctx->r1 == 0) {
        // 0x803F2338: or          $a0, $a3, $zero
        ctx->r4 = ctx->r7 | 0;
            goto L_803F23B8;
    }
    // 0x803F2338: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
    // 0x803F233C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x803F2340: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x803F2344: jal         0x803F1914
    // 0x803F2348: sw          $a3, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r7;
    ovl_803F0000_menu_func_803F1914(rdram, ctx);
        goto after_1;
    // 0x803F2348: sw          $a3, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r7;
    after_1:
    // 0x803F234C: lw          $a3, 0x18($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X18);
    // 0x803F2350: beq         $v0, $zero, L_803F2368
    if (ctx->r2 == 0) {
        // 0x803F2354: addiu       $a0, $zero, 0xF
        ctx->r4 = ADD32(0, 0XF);
            goto L_803F2368;
    }
    // 0x803F2354: addiu       $a0, $zero, 0xF
    ctx->r4 = ADD32(0, 0XF);
    // 0x803F2358: jal         0x803F35D8
    // 0x803F235C: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
    ovl_803F0000_menu_func_803F35D8(rdram, ctx);
        goto after_2;
    // 0x803F235C: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
    after_2:
    // 0x803F2360: b           L_803F23C4
    // 0x803F2364: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_803F23C4;
    // 0x803F2364: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_803F2368:
    // 0x803F2368: lw          $v1, 0xC8($a3)
    ctx->r3 = MEM_W(ctx->r7, 0XC8);
    // 0x803F236C: addiu       $t7, $zero, -0x130
    ctx->r15 = ADD32(0, -0X130);
    // 0x803F2370: lhu         $t4, 0x8($v1)
    ctx->r12 = MEM_HU(ctx->r3, 0X8);
    // 0x803F2374: addiu       $t6, $zero, 0x130
    ctx->r14 = ADD32(0, 0X130);
    // 0x803F2378: andi        $t5, $t4, 0x1
    ctx->r13 = ctx->r12 & 0X1;
    // 0x803F237C: beq         $t5, $zero, L_803F238C
    if (ctx->r13 == 0) {
        // 0x803F2380: nop
    
            goto L_803F238C;
    }
    // 0x803F2380: nop

    // 0x803F2384: b           L_803F2390
    // 0x803F2388: sh          $t6, 0x93C($v1)
    MEM_H(0X93C, ctx->r3) = ctx->r14;
        goto L_803F2390;
    // 0x803F2388: sh          $t6, 0x93C($v1)
    MEM_H(0X93C, ctx->r3) = ctx->r14;
L_803F238C:
    // 0x803F238C: sh          $t7, 0x93C($v1)
    MEM_H(0X93C, ctx->r3) = ctx->r15;
L_803F2390:
    // 0x803F2390: jal         0x80059898
    // 0x803F2394: sw          $a3, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r7;
    func_80059898(rdram, ctx);
        goto after_3;
    // 0x803F2394: sw          $a3, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r7;
    after_3:
    // 0x803F2398: lw          $a3, 0x18($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X18);
    // 0x803F239C: addiu       $t9, $zero, 0xA
    ctx->r25 = ADD32(0, 0XA);
    // 0x803F23A0: lw          $t8, 0xC8($a3)
    ctx->r24 = MEM_W(ctx->r7, 0XC8);
    // 0x803F23A4: nop

    // 0x803F23A8: sh          $v0, 0x93A($t8)
    MEM_H(0X93A, ctx->r24) = ctx->r2;
    // 0x803F23AC: lw          $t1, 0xC8($a3)
    ctx->r9 = MEM_W(ctx->r7, 0XC8);
    // 0x803F23B0: b           L_803F23C0
    // 0x803F23B4: sh          $t9, 0x938($t1)
    MEM_H(0X938, ctx->r9) = ctx->r25;
        goto L_803F23C0;
    // 0x803F23B4: sh          $t9, 0x938($t1)
    MEM_H(0X938, ctx->r9) = ctx->r25;
L_803F23B8:
    // 0x803F23B8: jal         0x803F3A98
    // 0x803F23BC: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
    ovl_803F0000_menu_func_803F3A98(rdram, ctx);
        goto after_4;
    // 0x803F23BC: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
    after_4:
L_803F23C0:
    // 0x803F23C0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_803F23C4:
    // 0x803F23C4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x803F23C8: jr          $ra
    // 0x803F23CC: nop

    return;
    // 0x803F23CC: nop

;}
RECOMP_FUNC void ovl_803F0000_menu_func_803F218C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803F218C: lhu         $t7, 0x2C($a0)
    ctx->r15 = MEM_HU(ctx->r4, 0X2C);
    // 0x803F2190: lui         $at, 0x4008
    ctx->r1 = S32(0X4008 << 16);
    // 0x803F2194: andi        $t8, $t7, 0x1
    ctx->r24 = ctx->r15 & 0X1;
    // 0x803F2198: beq         $t8, $zero, L_803F21BC
    if (ctx->r24 == 0) {
        // 0x803F219C: lui         $t0, 0x8028
        ctx->r8 = S32(0X8028 << 16);
            goto L_803F21BC;
    }
    // 0x803F219C: lui         $t0, 0x8028
    ctx->r8 = S32(0X8028 << 16);
    // 0x803F21A0: lui         $at, 0x803F
    ctx->r1 = S32(0X803F << 16);
    // 0x803F21A4: lwc1        $f5, 0x7C30($at)
    ctx->f_odd[(5 - 1) * 2] = MEM_W(ctx->r1, 0X7C30);
    // 0x803F21A8: lwc1        $f4, 0x7C34($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X7C34);
    // 0x803F21AC: lw          $t9, 0xC8($a0)
    ctx->r25 = MEM_W(ctx->r4, 0XC8);
    // 0x803F21B0: cvt.s.d     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.d); 
    ctx->f6.fl = CVT_S_D(ctx->f4.d);
    // 0x803F21B4: b           L_803F21D0
    // 0x803F21B8: swc1        $f6, 0x940($t9)
    MEM_W(0X940, ctx->r25) = ctx->f6.u32l;
        goto L_803F21D0;
    // 0x803F21B8: swc1        $f6, 0x940($t9)
    MEM_W(0X940, ctx->r25) = ctx->f6.u32l;
L_803F21BC:
    // 0x803F21BC: mtc1        $at, $f9
    ctx->f_odd[(9 - 1) * 2] = ctx->r1;
    // 0x803F21C0: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x803F21C4: lw          $t1, 0xC8($a3)
    ctx->r9 = MEM_W(ctx->r7, 0XC8);
    // 0x803F21C8: cvt.s.d     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.d); 
    ctx->f10.fl = CVT_S_D(ctx->f8.d);
    // 0x803F21CC: swc1        $f10, 0x940($t1)
    MEM_W(0X940, ctx->r9) = ctx->f10.u32l;
L_803F21D0:
    // 0x803F21D0: lw          $v1, 0xC8($a3)
    ctx->r3 = MEM_W(ctx->r7, 0XC8);
    // 0x803F21D4: lbu         $t2, 0x6($a3)
    ctx->r10 = MEM_BU(ctx->r7, 0X6);
    // 0x803F21D8: lhu         $t5, 0x8($v1)
    ctx->r13 = MEM_HU(ctx->r3, 0X8);
    // 0x803F21DC: addu        $t3, $v1, $t2
    ctx->r11 = ADD32(ctx->r3, ctx->r10);
    // 0x803F21E0: lbu         $v0, 0x8E1($t3)
    ctx->r2 = MEM_BU(ctx->r11, 0X8E1);
    // 0x803F21E4: andi        $t6, $t5, 0x1
    ctx->r14 = ctx->r13 & 0X1;
    // 0x803F21E8: sll         $t4, $v0, 1
    ctx->r12 = S32(ctx->r2 << 1);
    // 0x803F21EC: addu        $t0, $t0, $t4
    ctx->r8 = ADD32(ctx->r8, ctx->r12);
    // 0x803F21F0: lh          $t0, -0x36A0($t0)
    ctx->r8 = MEM_H(ctx->r8, -0X36A0);
    // 0x803F21F4: beq         $t6, $zero, L_803F2200
    if (ctx->r14 == 0) {
        // 0x803F21F8: addiu       $t7, $zero, 0x1C
        ctx->r15 = ADD32(0, 0X1C);
            goto L_803F2200;
    }
    // 0x803F21F8: addiu       $t7, $zero, 0x1C
    ctx->r15 = ADD32(0, 0X1C);
    // 0x803F21FC: negu        $t0, $t0
    ctx->r8 = SUB32(0, ctx->r8);
L_803F2200:
    // 0x803F2200: lh          $v0, 0x8B0($v1)
    ctx->r2 = MEM_H(ctx->r3, 0X8B0);
    // 0x803F2204: nop

    // 0x803F2208: slti        $at, $v0, 0x108
    ctx->r1 = SIGNED(ctx->r2) < 0X108 ? 1 : 0;
    // 0x803F220C: beq         $at, $zero, L_803F2334
    if (ctx->r1 == 0) {
        // 0x803F2210: slti        $at, $v0, 0x158
        ctx->r1 = SIGNED(ctx->r2) < 0X158 ? 1 : 0;
            goto L_803F2334;
    }
    // 0x803F2210: slti        $at, $v0, 0x158
    ctx->r1 = SIGNED(ctx->r2) < 0X158 ? 1 : 0;
    // 0x803F2214: sh          $t7, 0x938($v1)
    MEM_H(0X938, ctx->r3) = ctx->r15;
    // 0x803F2218: lw          $v1, 0xC8($a3)
    ctx->r3 = MEM_W(ctx->r7, 0XC8);
    // 0x803F221C: addiu       $a2, $zero, -0x1E
    ctx->r6 = ADD32(0, -0X1E);
    // 0x803F2220: lhu         $t8, 0x8($v1)
    ctx->r24 = MEM_HU(ctx->r3, 0X8);
    // 0x803F2224: nop

    // 0x803F2228: andi        $t9, $t8, 0x1
    ctx->r25 = ctx->r24 & 0X1;
    // 0x803F222C: beq         $t9, $zero, L_803F223C
    if (ctx->r25 == 0) {
        // 0x803F2230: nop
    
            goto L_803F223C;
    }
    // 0x803F2230: nop

    // 0x803F2234: b           L_803F223C
    // 0x803F2238: addiu       $a2, $zero, 0x1E
    ctx->r6 = ADD32(0, 0X1E);
        goto L_803F223C;
    // 0x803F2238: addiu       $a2, $zero, 0x1E
    ctx->r6 = ADD32(0, 0X1E);
L_803F223C:
    // 0x803F223C: mtc1        $a2, $f16
    ctx->f16.u32l = ctx->r6;
    // 0x803F2240: lwc1        $f4, 0x4C($a3)
    ctx->f4.u32l = MEM_W(ctx->r7, 0X4C);
    // 0x803F2244: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x803F2248: mtc1        $t0, $f10
    ctx->f10.u32l = ctx->r8;
    // 0x803F224C: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
    // 0x803F2250: add.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f18.fl + ctx->f4.fl;
    // 0x803F2254: cfc1        $t1, $FpcCsr
    ctx->r9 = get_cop1_cs();
    // 0x803F2258: nop

    // 0x803F225C: ori         $at, $t1, 0x3
    ctx->r1 = ctx->r9 | 0X3;
    // 0x803F2260: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x803F2264: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x803F2268: nop

    // 0x803F226C: cvt.w.s     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.u32l = CVT_W_S(ctx->f6.fl);
    // 0x803F2270: ctc1        $t1, $FpcCsr
    set_cop1_cs(ctx->r9);
    // 0x803F2274: mfc1        $t2, $f8
    ctx->r10 = (int32_t)ctx->f8.u32l;
    // 0x803F2278: cvt.s.w     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.fl = CVT_S_W(ctx->f10.u32l);
    // 0x803F227C: sh          $t2, 0x93C($v1)
    MEM_H(0X93C, ctx->r3) = ctx->r10;
    // 0x803F2280: lwc1        $f0, 0x44($a3)
    ctx->f0.u32l = MEM_W(ctx->r7, 0X44);
    // 0x803F2284: lw          $t7, 0xC8($a3)
    ctx->r15 = MEM_W(ctx->r7, 0XC8);
    // 0x803F2288: sub.s       $f18, $f16, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f18.fl = ctx->f16.fl - ctx->f0.fl;
    // 0x803F228C: cfc1        $t3, $FpcCsr
    ctx->r11 = get_cop1_cs();
    // 0x803F2290: nop

    // 0x803F2294: ori         $at, $t3, 0x3
    ctx->r1 = ctx->r11 | 0X3;
    // 0x803F2298: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x803F229C: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x803F22A0: addiu       $at, $zero, 0x5
    ctx->r1 = ADD32(0, 0X5);
    // 0x803F22A4: cvt.w.s     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    ctx->f4.u32l = CVT_W_S(ctx->f18.fl);
    // 0x803F22A8: mfc1        $v0, $f4
    ctx->r2 = (int32_t)ctx->f4.u32l;
    // 0x803F22AC: ctc1        $t3, $FpcCsr
    set_cop1_cs(ctx->r11);
    // 0x803F22B0: div         $zero, $v0, $at
    lo = S32(S64(S32(ctx->r2)) / S64(S32(ctx->r1))); hi = S32(S64(S32(ctx->r2)) % S64(S32(ctx->r1)));
    // 0x803F22B4: mflo        $v0
    ctx->r2 = lo;
    // 0x803F22B8: mtc1        $v0, $f6
    ctx->f6.u32l = ctx->r2;
    // 0x803F22BC: nop

    // 0x803F22C0: cvt.s.w     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.fl = CVT_S_W(ctx->f6.u32l);
    // 0x803F22C4: add.s       $f10, $f0, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f0.fl + ctx->f8.fl;
    // 0x803F22C8: cfc1        $t5, $FpcCsr
    ctx->r13 = get_cop1_cs();
    // 0x803F22CC: nop

    // 0x803F22D0: ori         $at, $t5, 0x3
    ctx->r1 = ctx->r13 | 0X3;
    // 0x803F22D4: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x803F22D8: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x803F22DC: nop

    // 0x803F22E0: cvt.w.s     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.u32l = CVT_W_S(ctx->f10.fl);
    // 0x803F22E4: mfc1        $t6, $f16
    ctx->r14 = (int32_t)ctx->f16.u32l;
    // 0x803F22E8: ctc1        $t5, $FpcCsr
    set_cop1_cs(ctx->r13);
    // 0x803F22EC: sh          $t6, 0x93E($t7)
    MEM_H(0X93E, ctx->r15) = ctx->r14;
    // 0x803F22F0: lw          $t8, 0xC8($a3)
    ctx->r24 = MEM_W(ctx->r7, 0XC8);
    // 0x803F22F4: nop

    // 0x803F22F8: sh          $zero, 0x93A($t8)
    MEM_H(0X93A, ctx->r24) = 0;
    // 0x803F22FC: lw          $a1, 0xC8($a3)
    ctx->r5 = MEM_W(ctx->r7, 0XC8);
    // 0x803F2300: sw          $a3, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r7;
    // 0x803F2304: jal         0x803F17BC
    // 0x803F2308: addiu       $a1, $a1, 0x938
    ctx->r5 = ADD32(ctx->r5, 0X938);
    ovl_803F0000_menu_func_803F17BC(rdram, ctx);
        goto after_0;
    // 0x803F2308: addiu       $a1, $a1, 0x938
    ctx->r5 = ADD32(ctx->r5, 0X938);
    after_0:
    // 0x803F230C: lui         $t9, 0x8028
    ctx->r25 = S32(0X8028 << 16);
    // 0x803F2310: lh          $t9, -0x1B60($t9)
    ctx->r25 = MEM_H(ctx->r25, -0X1B60);
    // 0x803F2314: lw          $a3, 0x18($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X18);
    // 0x803F2318: andi        $t1, $t9, 0x1
    ctx->r9 = ctx->r25 & 0X1;
    // 0x803F231C: beq         $t1, $zero, L_803F23C0
    if (ctx->r9 == 0) {
        // 0x803F2320: addiu       $t2, $zero, 0xA
        ctx->r10 = ADD32(0, 0XA);
            goto L_803F23C0;
    }
    // 0x803F2320: addiu       $t2, $zero, 0xA
    ctx->r10 = ADD32(0, 0XA);
    // 0x803F2324: lw          $t3, 0xC8($a3)
    ctx->r11 = MEM_W(ctx->r7, 0XC8);
    // 0x803F2328: b           L_803F23C0
    // 0x803F232C: sh          $t2, 0x938($t3)
    MEM_H(0X938, ctx->r11) = ctx->r10;
        goto L_803F23C0;
    // 0x803F232C: sh          $t2, 0x938($t3)
    MEM_H(0X938, ctx->r11) = ctx->r10;
    // 0x803F2330: slti        $at, $v0, 0x158
    ctx->r1 = SIGNED(ctx->r2) < 0X158 ? 1 : 0;
L_803F2334:
    // 0x803F2334: beq         $at, $zero, L_803F23B8
    if (ctx->r1 == 0) {
        // 0x803F2338: or          $a0, $a3, $zero
        ctx->r4 = ctx->r7 | 0;
            goto L_803F23B8;
    }
    // 0x803F2338: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
    // 0x803F233C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x803F2340: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x803F2344: jal         0x803F1914
    // 0x803F2348: sw          $a3, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r7;
    ovl_803F0000_menu_func_803F1914(rdram, ctx);
        goto after_1;
    // 0x803F2348: sw          $a3, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r7;
    after_1:
    // 0x803F234C: lw          $a3, 0x18($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X18);
    // 0x803F2350: beq         $v0, $zero, L_803F2368
    if (ctx->r2 == 0) {
        // 0x803F2354: addiu       $a0, $zero, 0xF
        ctx->r4 = ADD32(0, 0XF);
            goto L_803F2368;
    }
    // 0x803F2354: addiu       $a0, $zero, 0xF
    ctx->r4 = ADD32(0, 0XF);
    // 0x803F2358: jal         0x803F35D8
    // 0x803F235C: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
    ovl_803F0000_menu_func_803F35D8(rdram, ctx);
        goto after_2;
    // 0x803F235C: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
    after_2:
    // 0x803F2360: b           L_803F23C4
    // 0x803F2364: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_803F23C4;
    // 0x803F2364: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_803F2368:
    // 0x803F2368: lw          $v1, 0xC8($a3)
    ctx->r3 = MEM_W(ctx->r7, 0XC8);
    // 0x803F236C: addiu       $t7, $zero, -0x130
    ctx->r15 = ADD32(0, -0X130);
    // 0x803F2370: lhu         $t4, 0x8($v1)
    ctx->r12 = MEM_HU(ctx->r3, 0X8);
    // 0x803F2374: addiu       $t6, $zero, 0x130
    ctx->r14 = ADD32(0, 0X130);
    // 0x803F2378: andi        $t5, $t4, 0x1
    ctx->r13 = ctx->r12 & 0X1;
    // 0x803F237C: beq         $t5, $zero, L_803F238C
    if (ctx->r13 == 0) {
        // 0x803F2380: nop
    
            goto L_803F238C;
    }
    // 0x803F2380: nop

    // 0x803F2384: b           L_803F2390
    // 0x803F2388: sh          $t6, 0x93C($v1)
    MEM_H(0X93C, ctx->r3) = ctx->r14;
        goto L_803F2390;
    // 0x803F2388: sh          $t6, 0x93C($v1)
    MEM_H(0X93C, ctx->r3) = ctx->r14;
L_803F238C:
    // 0x803F238C: sh          $t7, 0x93C($v1)
    MEM_H(0X93C, ctx->r3) = ctx->r15;
L_803F2390:
    // 0x803F2390: jal         0x80059898
    // 0x803F2394: sw          $a3, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r7;
    func_80059898(rdram, ctx);
        goto after_3;
    // 0x803F2394: sw          $a3, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r7;
    after_3:
    // 0x803F2398: lw          $a3, 0x18($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X18);
    // 0x803F239C: addiu       $t9, $zero, 0xA
    ctx->r25 = ADD32(0, 0XA);
    // 0x803F23A0: lw          $t8, 0xC8($a3)
    ctx->r24 = MEM_W(ctx->r7, 0XC8);
    // 0x803F23A4: nop

    // 0x803F23A8: sh          $v0, 0x93A($t8)
    MEM_H(0X93A, ctx->r24) = ctx->r2;
    // 0x803F23AC: lw          $t1, 0xC8($a3)
    ctx->r9 = MEM_W(ctx->r7, 0XC8);
    // 0x803F23B0: b           L_803F23C0
    // 0x803F23B4: sh          $t9, 0x938($t1)
    MEM_H(0X938, ctx->r9) = ctx->r25;
        goto L_803F23C0;
    // 0x803F23B4: sh          $t9, 0x938($t1)
    MEM_H(0X938, ctx->r9) = ctx->r25;
L_803F23B8:
    // 0x803F23B8: jal         0x803F3A98
    // 0x803F23BC: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
    ovl_803F0000_menu_func_803F3A98(rdram, ctx);
        goto after_4;
    // 0x803F23BC: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
    after_4:
L_803F23C0:
    // 0x803F23C0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_803F23C4:
    // 0x803F23C4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x803F23C8: jr          $ra
    // 0x803F23CC: nop

    return;
    // 0x803F23CC: nop

;}
RECOMP_FUNC void ovl_803F0000_menu_func_803F225C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803F225C: ori         $at, $t1, 0x3
    ctx->r1 = ctx->r9 | 0X3;
    // 0x803F2260: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x803F2264: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x803F2268: nop

    // 0x803F226C: cvt.w.s     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.u32l = CVT_W_S(ctx->f6.fl);
    // 0x803F2270: ctc1        $t1, $FpcCsr
    set_cop1_cs(ctx->r9);
    // 0x803F2274: mfc1        $t2, $f8
    ctx->r10 = (int32_t)ctx->f8.u32l;
    // 0x803F2278: cvt.s.w     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.fl = CVT_S_W(ctx->f10.u32l);
    // 0x803F227C: sh          $t2, 0x93C($v1)
    MEM_H(0X93C, ctx->r3) = ctx->r10;
    // 0x803F2280: lwc1        $f0, 0x44($a3)
    ctx->f0.u32l = MEM_W(ctx->r7, 0X44);
    // 0x803F2284: lw          $t7, 0xC8($a3)
    ctx->r15 = MEM_W(ctx->r7, 0XC8);
    // 0x803F2288: sub.s       $f18, $f16, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f18.fl = ctx->f16.fl - ctx->f0.fl;
    // 0x803F228C: cfc1        $t3, $FpcCsr
    ctx->r11 = get_cop1_cs();
    // 0x803F2290: nop

    // 0x803F2294: ori         $at, $t3, 0x3
    ctx->r1 = ctx->r11 | 0X3;
    // 0x803F2298: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x803F229C: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x803F22A0: addiu       $at, $zero, 0x5
    ctx->r1 = ADD32(0, 0X5);
    // 0x803F22A4: cvt.w.s     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    ctx->f4.u32l = CVT_W_S(ctx->f18.fl);
    // 0x803F22A8: mfc1        $v0, $f4
    ctx->r2 = (int32_t)ctx->f4.u32l;
    // 0x803F22AC: ctc1        $t3, $FpcCsr
    set_cop1_cs(ctx->r11);
    // 0x803F22B0: div         $zero, $v0, $at
    lo = S32(S64(S32(ctx->r2)) / S64(S32(ctx->r1))); hi = S32(S64(S32(ctx->r2)) % S64(S32(ctx->r1)));
    // 0x803F22B4: mflo        $v0
    ctx->r2 = lo;
    // 0x803F22B8: mtc1        $v0, $f6
    ctx->f6.u32l = ctx->r2;
    // 0x803F22BC: nop

    // 0x803F22C0: cvt.s.w     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.fl = CVT_S_W(ctx->f6.u32l);
    // 0x803F22C4: add.s       $f10, $f0, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f0.fl + ctx->f8.fl;
    // 0x803F22C8: cfc1        $t5, $FpcCsr
    ctx->r13 = get_cop1_cs();
    // 0x803F22CC: nop

    // 0x803F22D0: ori         $at, $t5, 0x3
    ctx->r1 = ctx->r13 | 0X3;
    // 0x803F22D4: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x803F22D8: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x803F22DC: nop

    // 0x803F22E0: cvt.w.s     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.u32l = CVT_W_S(ctx->f10.fl);
    // 0x803F22E4: mfc1        $t6, $f16
    ctx->r14 = (int32_t)ctx->f16.u32l;
    // 0x803F22E8: ctc1        $t5, $FpcCsr
    set_cop1_cs(ctx->r13);
    // 0x803F22EC: sh          $t6, 0x93E($t7)
    MEM_H(0X93E, ctx->r15) = ctx->r14;
    // 0x803F22F0: lw          $t8, 0xC8($a3)
    ctx->r24 = MEM_W(ctx->r7, 0XC8);
    // 0x803F22F4: nop

    // 0x803F22F8: sh          $zero, 0x93A($t8)
    MEM_H(0X93A, ctx->r24) = 0;
    // 0x803F22FC: lw          $a1, 0xC8($a3)
    ctx->r5 = MEM_W(ctx->r7, 0XC8);
    // 0x803F2300: sw          $a3, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r7;
    // 0x803F2304: jal         0x803F17BC
    // 0x803F2308: addiu       $a1, $a1, 0x938
    ctx->r5 = ADD32(ctx->r5, 0X938);
    ovl_803F0000_menu_func_803F17BC(rdram, ctx);
        goto after_0;
    // 0x803F2308: addiu       $a1, $a1, 0x938
    ctx->r5 = ADD32(ctx->r5, 0X938);
    after_0:
    // 0x803F230C: lui         $t9, 0x8028
    ctx->r25 = S32(0X8028 << 16);
    // 0x803F2310: lh          $t9, -0x1B60($t9)
    ctx->r25 = MEM_H(ctx->r25, -0X1B60);
    // 0x803F2314: lw          $a3, 0x18($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X18);
    // 0x803F2318: andi        $t1, $t9, 0x1
    ctx->r9 = ctx->r25 & 0X1;
    // 0x803F231C: beq         $t1, $zero, L_803F23C0
    if (ctx->r9 == 0) {
        // 0x803F2320: addiu       $t2, $zero, 0xA
        ctx->r10 = ADD32(0, 0XA);
            goto L_803F23C0;
    }
    // 0x803F2320: addiu       $t2, $zero, 0xA
    ctx->r10 = ADD32(0, 0XA);
    // 0x803F2324: lw          $t3, 0xC8($a3)
    ctx->r11 = MEM_W(ctx->r7, 0XC8);
    // 0x803F2328: b           L_803F23C0
    // 0x803F232C: sh          $t2, 0x938($t3)
    MEM_H(0X938, ctx->r11) = ctx->r10;
        goto L_803F23C0;
    // 0x803F232C: sh          $t2, 0x938($t3)
    MEM_H(0X938, ctx->r11) = ctx->r10;
    // 0x803F2330: slti        $at, $v0, 0x158
    ctx->r1 = SIGNED(ctx->r2) < 0X158 ? 1 : 0;
    // 0x803F2334: beq         $at, $zero, L_803F23B8
    if (ctx->r1 == 0) {
        // 0x803F2338: or          $a0, $a3, $zero
        ctx->r4 = ctx->r7 | 0;
            goto L_803F23B8;
    }
    // 0x803F2338: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
    // 0x803F233C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x803F2340: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x803F2344: jal         0x803F1914
    // 0x803F2348: sw          $a3, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r7;
    ovl_803F0000_menu_func_803F1914(rdram, ctx);
        goto after_1;
    // 0x803F2348: sw          $a3, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r7;
    after_1:
    // 0x803F234C: lw          $a3, 0x18($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X18);
    // 0x803F2350: beq         $v0, $zero, L_803F2368
    if (ctx->r2 == 0) {
        // 0x803F2354: addiu       $a0, $zero, 0xF
        ctx->r4 = ADD32(0, 0XF);
            goto L_803F2368;
    }
    // 0x803F2354: addiu       $a0, $zero, 0xF
    ctx->r4 = ADD32(0, 0XF);
    // 0x803F2358: jal         0x803F35D8
    // 0x803F235C: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
    ovl_803F0000_menu_func_803F35D8(rdram, ctx);
        goto after_2;
    // 0x803F235C: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
    after_2:
    // 0x803F2360: b           L_803F23C4
    // 0x803F2364: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_803F23C4;
    // 0x803F2364: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_803F2368:
    // 0x803F2368: lw          $v1, 0xC8($a3)
    ctx->r3 = MEM_W(ctx->r7, 0XC8);
    // 0x803F236C: addiu       $t7, $zero, -0x130
    ctx->r15 = ADD32(0, -0X130);
    // 0x803F2370: lhu         $t4, 0x8($v1)
    ctx->r12 = MEM_HU(ctx->r3, 0X8);
    // 0x803F2374: addiu       $t6, $zero, 0x130
    ctx->r14 = ADD32(0, 0X130);
    // 0x803F2378: andi        $t5, $t4, 0x1
    ctx->r13 = ctx->r12 & 0X1;
    // 0x803F237C: beq         $t5, $zero, L_803F238C
    if (ctx->r13 == 0) {
        // 0x803F2380: nop
    
            goto L_803F238C;
    }
    // 0x803F2380: nop

    // 0x803F2384: b           L_803F2390
    // 0x803F2388: sh          $t6, 0x93C($v1)
    MEM_H(0X93C, ctx->r3) = ctx->r14;
        goto L_803F2390;
    // 0x803F2388: sh          $t6, 0x93C($v1)
    MEM_H(0X93C, ctx->r3) = ctx->r14;
L_803F238C:
    // 0x803F238C: sh          $t7, 0x93C($v1)
    MEM_H(0X93C, ctx->r3) = ctx->r15;
L_803F2390:
    // 0x803F2390: jal         0x80059898
    // 0x803F2394: sw          $a3, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r7;
    func_80059898(rdram, ctx);
        goto after_3;
    // 0x803F2394: sw          $a3, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r7;
    after_3:
    // 0x803F2398: lw          $a3, 0x18($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X18);
    // 0x803F239C: addiu       $t9, $zero, 0xA
    ctx->r25 = ADD32(0, 0XA);
    // 0x803F23A0: lw          $t8, 0xC8($a3)
    ctx->r24 = MEM_W(ctx->r7, 0XC8);
    // 0x803F23A4: nop

    // 0x803F23A8: sh          $v0, 0x93A($t8)
    MEM_H(0X93A, ctx->r24) = ctx->r2;
    // 0x803F23AC: lw          $t1, 0xC8($a3)
    ctx->r9 = MEM_W(ctx->r7, 0XC8);
    // 0x803F23B0: b           L_803F23C0
    // 0x803F23B4: sh          $t9, 0x938($t1)
    MEM_H(0X938, ctx->r9) = ctx->r25;
        goto L_803F23C0;
    // 0x803F23B4: sh          $t9, 0x938($t1)
    MEM_H(0X938, ctx->r9) = ctx->r25;
L_803F23B8:
    // 0x803F23B8: jal         0x803F3A98
    // 0x803F23BC: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
    ovl_803F0000_menu_func_803F3A98(rdram, ctx);
        goto after_4;
    // 0x803F23BC: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
    after_4:
L_803F23C0:
    // 0x803F23C0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_803F23C4:
    // 0x803F23C4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x803F23C8: jr          $ra
    // 0x803F23CC: nop

    return;
    // 0x803F23CC: nop

;}
RECOMP_FUNC void ovl_803F0000_menu_func_803F22EC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803F22EC: sh          $t6, 0x93E($t7)
    MEM_H(0X93E, ctx->r15) = ctx->r14;
    // 0x803F22F0: lw          $t8, 0xC8($a3)
    ctx->r24 = MEM_W(ctx->r7, 0XC8);
    // 0x803F22F4: nop

    // 0x803F22F8: sh          $zero, 0x93A($t8)
    MEM_H(0X93A, ctx->r24) = 0;
    // 0x803F22FC: lw          $a1, 0xC8($a3)
    ctx->r5 = MEM_W(ctx->r7, 0XC8);
    // 0x803F2300: sw          $a3, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r7;
    // 0x803F2304: jal         0x803F17BC
    // 0x803F2308: addiu       $a1, $a1, 0x938
    ctx->r5 = ADD32(ctx->r5, 0X938);
    ovl_803F0000_menu_func_803F17BC(rdram, ctx);
        goto after_0;
    // 0x803F2308: addiu       $a1, $a1, 0x938
    ctx->r5 = ADD32(ctx->r5, 0X938);
    after_0:
    // 0x803F230C: lui         $t9, 0x8028
    ctx->r25 = S32(0X8028 << 16);
    // 0x803F2310: lh          $t9, -0x1B60($t9)
    ctx->r25 = MEM_H(ctx->r25, -0X1B60);
    // 0x803F2314: lw          $a3, 0x18($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X18);
    // 0x803F2318: andi        $t1, $t9, 0x1
    ctx->r9 = ctx->r25 & 0X1;
    // 0x803F231C: beq         $t1, $zero, L_803F23C0
    if (ctx->r9 == 0) {
        // 0x803F2320: addiu       $t2, $zero, 0xA
        ctx->r10 = ADD32(0, 0XA);
            goto L_803F23C0;
    }
    // 0x803F2320: addiu       $t2, $zero, 0xA
    ctx->r10 = ADD32(0, 0XA);
    // 0x803F2324: lw          $t3, 0xC8($a3)
    ctx->r11 = MEM_W(ctx->r7, 0XC8);
    // 0x803F2328: b           L_803F23C0
    // 0x803F232C: sh          $t2, 0x938($t3)
    MEM_H(0X938, ctx->r11) = ctx->r10;
        goto L_803F23C0;
    // 0x803F232C: sh          $t2, 0x938($t3)
    MEM_H(0X938, ctx->r11) = ctx->r10;
    // 0x803F2330: slti        $at, $v0, 0x158
    ctx->r1 = SIGNED(ctx->r2) < 0X158 ? 1 : 0;
    // 0x803F2334: beq         $at, $zero, L_803F23B8
    if (ctx->r1 == 0) {
        // 0x803F2338: or          $a0, $a3, $zero
        ctx->r4 = ctx->r7 | 0;
            goto L_803F23B8;
    }
    // 0x803F2338: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
    // 0x803F233C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x803F2340: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x803F2344: jal         0x803F1914
    // 0x803F2348: sw          $a3, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r7;
    ovl_803F0000_menu_func_803F1914(rdram, ctx);
        goto after_1;
    // 0x803F2348: sw          $a3, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r7;
    after_1:
    // 0x803F234C: lw          $a3, 0x18($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X18);
    // 0x803F2350: beq         $v0, $zero, L_803F2368
    if (ctx->r2 == 0) {
        // 0x803F2354: addiu       $a0, $zero, 0xF
        ctx->r4 = ADD32(0, 0XF);
            goto L_803F2368;
    }
    // 0x803F2354: addiu       $a0, $zero, 0xF
    ctx->r4 = ADD32(0, 0XF);
    // 0x803F2358: jal         0x803F35D8
    // 0x803F235C: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
    ovl_803F0000_menu_func_803F35D8(rdram, ctx);
        goto after_2;
    // 0x803F235C: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
    after_2:
    // 0x803F2360: b           L_803F23C4
    // 0x803F2364: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_803F23C4;
    // 0x803F2364: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_803F2368:
    // 0x803F2368: lw          $v1, 0xC8($a3)
    ctx->r3 = MEM_W(ctx->r7, 0XC8);
    // 0x803F236C: addiu       $t7, $zero, -0x130
    ctx->r15 = ADD32(0, -0X130);
    // 0x803F2370: lhu         $t4, 0x8($v1)
    ctx->r12 = MEM_HU(ctx->r3, 0X8);
    // 0x803F2374: addiu       $t6, $zero, 0x130
    ctx->r14 = ADD32(0, 0X130);
    // 0x803F2378: andi        $t5, $t4, 0x1
    ctx->r13 = ctx->r12 & 0X1;
    // 0x803F237C: beq         $t5, $zero, L_803F238C
    if (ctx->r13 == 0) {
        // 0x803F2380: nop
    
            goto L_803F238C;
    }
    // 0x803F2380: nop

    // 0x803F2384: b           L_803F2390
    // 0x803F2388: sh          $t6, 0x93C($v1)
    MEM_H(0X93C, ctx->r3) = ctx->r14;
        goto L_803F2390;
    // 0x803F2388: sh          $t6, 0x93C($v1)
    MEM_H(0X93C, ctx->r3) = ctx->r14;
L_803F238C:
    // 0x803F238C: sh          $t7, 0x93C($v1)
    MEM_H(0X93C, ctx->r3) = ctx->r15;
L_803F2390:
    // 0x803F2390: jal         0x80059898
    // 0x803F2394: sw          $a3, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r7;
    func_80059898(rdram, ctx);
        goto after_3;
    // 0x803F2394: sw          $a3, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r7;
    after_3:
    // 0x803F2398: lw          $a3, 0x18($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X18);
    // 0x803F239C: addiu       $t9, $zero, 0xA
    ctx->r25 = ADD32(0, 0XA);
    // 0x803F23A0: lw          $t8, 0xC8($a3)
    ctx->r24 = MEM_W(ctx->r7, 0XC8);
    // 0x803F23A4: nop

    // 0x803F23A8: sh          $v0, 0x93A($t8)
    MEM_H(0X93A, ctx->r24) = ctx->r2;
    // 0x803F23AC: lw          $t1, 0xC8($a3)
    ctx->r9 = MEM_W(ctx->r7, 0XC8);
    // 0x803F23B0: b           L_803F23C0
    // 0x803F23B4: sh          $t9, 0x938($t1)
    MEM_H(0X938, ctx->r9) = ctx->r25;
        goto L_803F23C0;
    // 0x803F23B4: sh          $t9, 0x938($t1)
    MEM_H(0X938, ctx->r9) = ctx->r25;
L_803F23B8:
    // 0x803F23B8: jal         0x803F3A98
    // 0x803F23BC: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
    ovl_803F0000_menu_func_803F3A98(rdram, ctx);
        goto after_4;
    // 0x803F23BC: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
    after_4:
L_803F23C0:
    // 0x803F23C0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_803F23C4:
    // 0x803F23C4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x803F23C8: jr          $ra
    // 0x803F23CC: nop

    return;
    // 0x803F23CC: nop

;}
RECOMP_FUNC void ovl_803F0000_menu_func_803F23D0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803F23D0: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x803F23D4: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x803F23D8: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x803F23DC: lw          $t6, 0xC8($a0)
    ctx->r14 = MEM_W(ctx->r4, 0XC8);
    // 0x803F23E0: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x803F23E4: lbu         $t7, 0x8AC($t6)
    ctx->r15 = MEM_BU(ctx->r14, 0X8AC);
    // 0x803F23E8: lui         $a0, 0x803F
    ctx->r4 = S32(0X803F << 16);
    // 0x803F23EC: addu        $a0, $a0, $t7
    ctx->r4 = ADD32(ctx->r4, ctx->r15);
    // 0x803F23F0: lbu         $a0, 0x7600($a0)
    ctx->r4 = MEM_BU(ctx->r4, 0X7600);
    // 0x803F23F4: jal         0x80059898
    // 0x803F23F8: nop

    func_80059898(rdram, ctx);
        goto after_0;
    // 0x803F23F8: nop

    after_0:
    // 0x803F23FC: lw          $v1, 0xC8($s0)
    ctx->r3 = MEM_W(ctx->r16, 0XC8);
    // 0x803F2400: lui         $at, 0x803F
    ctx->r1 = S32(0X803F << 16);
    // 0x803F2404: lw          $t8, 0x24($v1)
    ctx->r24 = MEM_W(ctx->r3, 0X24);
    // 0x803F2408: lwc1        $f9, 0x7C38($at)
    ctx->f_odd[(9 - 1) * 2] = MEM_W(ctx->r1, 0X7C38);
    // 0x803F240C: lwc1        $f4, 0x8C0($t8)
    ctx->f4.u32l = MEM_W(ctx->r24, 0X8C0);
    // 0x803F2410: lwc1        $f8, 0x7C3C($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X7C3C);
    // 0x803F2414: cvt.d.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.d = CVT_D_S(ctx->f4.fl);
    // 0x803F2418: add.d       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f8.d); 
    ctx->f10.d = ctx->f6.d + ctx->f8.d;
    // 0x803F241C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x803F2420: cvt.s.d     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f16.fl = CVT_S_D(ctx->f10.d);
    // 0x803F2424: addiu       $a3, $v0, 0x3
    ctx->r7 = ADD32(ctx->r2, 0X3);
    // 0x803F2428: mfc1        $a2, $f16
    ctx->r6 = (int32_t)ctx->f16.u32l;
    // 0x803F242C: jal         0x803F1828
    // 0x803F2430: addiu       $a1, $v1, 0x938
    ctx->r5 = ADD32(ctx->r3, 0X938);
    ovl_803F0000_menu_func_803F1828(rdram, ctx);
        goto after_1;
    // 0x803F2430: addiu       $a1, $v1, 0x938
    ctx->r5 = ADD32(ctx->r3, 0X938);
    after_1:
    // 0x803F2434: lw          $t0, 0xC8($s0)
    ctx->r8 = MEM_W(ctx->r16, 0XC8);
    // 0x803F2438: addiu       $t9, $zero, 0xA
    ctx->r25 = ADD32(0, 0XA);
    // 0x803F243C: sh          $t9, 0x938($t0)
    MEM_H(0X938, ctx->r8) = ctx->r25;
    // 0x803F2440: lui         $at, 0x803F
    ctx->r1 = S32(0X803F << 16);
    // 0x803F2444: lwc1        $f18, 0x7C40($at)
    ctx->f18.u32l = MEM_W(ctx->r1, 0X7C40);
    // 0x803F2448: lw          $t1, 0xC8($s0)
    ctx->r9 = MEM_W(ctx->r16, 0XC8);
    // 0x803F244C: nop

    // 0x803F2450: swc1        $f18, 0x940($t1)
    MEM_W(0X940, ctx->r9) = ctx->f18.u32l;
    // 0x803F2454: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x803F2458: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x803F245C: jr          $ra
    // 0x803F2460: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x803F2460: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void ovl_803F0000_menu_func_803F2464(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803F2464: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x803F2468: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x803F246C: lhu         $t6, 0x12($a0)
    ctx->r14 = MEM_HU(ctx->r4, 0X12);
    // 0x803F2470: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x803F2474: andi        $t7, $t6, 0x40
    ctx->r15 = ctx->r14 & 0X40;
    // 0x803F2478: bne         $t7, $zero, L_803F273C
    if (ctx->r15 != 0) {
        // 0x803F247C: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_803F273C;
    }
    // 0x803F247C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x803F2480: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x803F2484: lui         $at, 0x803F
    ctx->r1 = S32(0X803F << 16);
    // 0x803F2488: swc1        $f4, 0xB8($a0)
    MEM_W(0XB8, ctx->r4) = ctx->f4.u32l;
    // 0x803F248C: lwc1        $f6, 0x7C44($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X7C44);
    // 0x803F2490: lw          $t8, 0xC8($a0)
    ctx->r24 = MEM_W(ctx->r4, 0XC8);
    // 0x803F2494: nop

    // 0x803F2498: swc1        $f6, 0x940($t8)
    MEM_W(0X940, ctx->r24) = ctx->f6.u32l;
    // 0x803F249C: lw          $t9, 0xC8($a0)
    ctx->r25 = MEM_W(ctx->r4, 0XC8);
    // 0x803F24A0: nop

    // 0x803F24A4: sw          $zero, 0x958($t9)
    MEM_W(0X958, ctx->r25) = 0;
    // 0x803F24A8: lw          $t0, 0xC8($a0)
    ctx->r8 = MEM_W(ctx->r4, 0XC8);
    // 0x803F24AC: nop

    // 0x803F24B0: sh          $zero, 0x948($t0)
    MEM_H(0X948, ctx->r8) = 0;
    // 0x803F24B4: lw          $t1, 0xC8($a0)
    ctx->r9 = MEM_W(ctx->r4, 0XC8);
    // 0x803F24B8: nop

    // 0x803F24BC: sh          $zero, 0x94A($t1)
    MEM_H(0X94A, ctx->r9) = 0;
    // 0x803F24C0: lw          $t2, 0xC8($a0)
    ctx->r10 = MEM_W(ctx->r4, 0XC8);
    // 0x803F24C4: nop

    // 0x803F24C8: sh          $zero, 0x93A($t2)
    MEM_H(0X93A, ctx->r10) = 0;
    // 0x803F24CC: lw          $v0, 0xC8($a0)
    ctx->r2 = MEM_W(ctx->r4, 0XC8);
    // 0x803F24D0: nop

    // 0x803F24D4: lhu         $t3, 0x95C($v0)
    ctx->r11 = MEM_HU(ctx->r2, 0X95C);
    // 0x803F24D8: nop

    // 0x803F24DC: andi        $t4, $t3, 0x9418
    ctx->r12 = ctx->r11 & 0X9418;
    // 0x803F24E0: sh          $t4, 0x95C($v0)
    MEM_H(0X95C, ctx->r2) = ctx->r12;
    // 0x803F24E4: lhu         $t5, 0x16($a0)
    ctx->r13 = MEM_HU(ctx->r4, 0X16);
    // 0x803F24E8: nop

    // 0x803F24EC: andi        $t6, $t5, 0x40
    ctx->r14 = ctx->r13 & 0X40;
    // 0x803F24F0: bne         $t6, $zero, L_803F2520
    if (ctx->r14 != 0) {
        // 0x803F24F4: nop
    
            goto L_803F2520;
    }
    // 0x803F24F4: nop

    // 0x803F24F8: jal         0x803F1A04
    // 0x803F24FC: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    ovl_803F0000_menu_func_803F1A04(rdram, ctx);
        goto after_0;
    // 0x803F24FC: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x803F2500: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x803F2504: bne         $v0, $zero, L_803F273C
    if (ctx->r2 != 0) {
        // 0x803F2508: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_803F273C;
    }
    // 0x803F2508: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x803F250C: jal         0x803F1A80
    // 0x803F2510: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    ovl_803F0000_menu_func_803F1A80(rdram, ctx);
        goto after_1;
    // 0x803F2510: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_1:
    // 0x803F2514: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x803F2518: bne         $v0, $zero, L_803F273C
    if (ctx->r2 != 0) {
        // 0x803F251C: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_803F273C;
    }
    // 0x803F251C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_803F2520:
    // 0x803F2520: lw          $v0, 0xD4($a0)
    ctx->r2 = MEM_W(ctx->r4, 0XD4);
    // 0x803F2524: nop

    // 0x803F2528: lbu         $t7, 0x5($v0)
    ctx->r15 = MEM_BU(ctx->r2, 0X5);
    // 0x803F252C: nop

    // 0x803F2530: sltiu       $at, $t7, 0xB
    ctx->r1 = ctx->r15 < 0XB ? 1 : 0;
    // 0x803F2534: beq         $at, $zero, L_803F2738
    if (ctx->r1 == 0) {
        // 0x803F2538: sll         $t7, $t7, 2
        ctx->r15 = S32(ctx->r15 << 2);
            goto L_803F2738;
    }
    // 0x803F2538: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x803F253C: lui         $at, 0x803F
    ctx->r1 = S32(0X803F << 16);
    // 0x803F2540: addu        $at, $at, $t7
    gpr jr_addend_803F254C = ctx->r15;
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x803F2544: lw          $t7, 0x7C48($at)
    ctx->r15 = ADD32(ctx->r1, 0X7C48);
    // 0x803F2548: nop

    // 0x803F254C: jr          $t7
    // 0x803F2550: nop

    switch (jr_addend_803F254C >> 2) {
        case 0: goto L_803F2554; break;
        case 1: goto L_803F2684; break;
        case 2: goto L_803F2684; break;
        case 3: goto L_803F2684; break;
        case 4: goto L_803F2660; break;
        case 5: goto L_803F2660; break;
        case 6: goto L_803F2684; break;
        case 7: goto L_803F2694; break;
        case 8: goto L_803F2650; break;
        case 9: goto L_803F2704; break;
        case 10: goto L_803F26CC; break;
        default: switch_error(__func__, 0x803F254C, 0x803F7C48);
    }
    // 0x803F2550: nop

L_803F2554:
    // 0x803F2554: lhu         $t8, 0x16($a0)
    ctx->r24 = MEM_HU(ctx->r4, 0X16);
    // 0x803F2558: lui         $a1, 0x803F
    ctx->r5 = S32(0X803F << 16);
    // 0x803F255C: andi        $t9, $t8, 0x40
    ctx->r25 = ctx->r24 & 0X40;
    // 0x803F2560: bne         $t9, $zero, L_803F2578
    if (ctx->r25 != 0) {
        // 0x803F2564: addiu       $a1, $a1, 0x7410
        ctx->r5 = ADD32(ctx->r5, 0X7410);
            goto L_803F2578;
    }
    // 0x803F2564: addiu       $a1, $a1, 0x7410
    ctx->r5 = ADD32(ctx->r5, 0X7410);
    // 0x803F2568: jal         0x803F170C
    // 0x803F256C: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    ovl_803F0000_menu_func_803F170C(rdram, ctx);
        goto after_2;
    // 0x803F256C: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_2:
    // 0x803F2570: b           L_803F273C
    // 0x803F2574: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_803F273C;
    // 0x803F2574: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_803F2578:
    // 0x803F2578: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    // 0x803F257C: jal         0x803F1508
    // 0x803F2580: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    ovl_803F0000_menu_func_803F1508(rdram, ctx);
        goto after_3;
    // 0x803F2580: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_3:
    // 0x803F2584: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x803F2588: beq         $v0, $zero, L_803F25F8
    if (ctx->r2 == 0) {
        // 0x803F258C: or          $v1, $v0, $zero
        ctx->r3 = ctx->r2 | 0;
            goto L_803F25F8;
    }
    // 0x803F258C: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
    // 0x803F2590: lw          $t0, 0xC8($a0)
    ctx->r8 = MEM_W(ctx->r4, 0XC8);
    // 0x803F2594: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x803F2598: sw          $v0, 0x958($t0)
    MEM_W(0X958, ctx->r8) = ctx->r2;
    // 0x803F259C: lw          $t1, 0xD4($v0)
    ctx->r9 = MEM_W(ctx->r2, 0XD4);
    // 0x803F25A0: addiu       $t4, $zero, 0x4
    ctx->r12 = ADD32(0, 0X4);
    // 0x803F25A4: lbu         $t2, 0x4($t1)
    ctx->r10 = MEM_BU(ctx->r9, 0X4);
    // 0x803F25A8: addiu       $a3, $zero, 0xA
    ctx->r7 = ADD32(0, 0XA);
    // 0x803F25AC: andi        $t3, $t2, 0x7F
    ctx->r11 = ctx->r10 & 0X7F;
    // 0x803F25B0: bne         $t3, $at, L_803F25C4
    if (ctx->r11 != ctx->r1) {
        // 0x803F25B4: nop
    
            goto L_803F25C4;
    }
    // 0x803F25B4: nop

    // 0x803F25B8: lw          $t5, 0xC8($a0)
    ctx->r13 = MEM_W(ctx->r4, 0XC8);
    // 0x803F25BC: b           L_803F25D0
    // 0x803F25C0: sh          $t4, 0x938($t5)
    MEM_H(0X938, ctx->r13) = ctx->r12;
        goto L_803F25D0;
    // 0x803F25C0: sh          $t4, 0x938($t5)
    MEM_H(0X938, ctx->r13) = ctx->r12;
L_803F25C4:
    // 0x803F25C4: lw          $t7, 0xC8($a0)
    ctx->r15 = MEM_W(ctx->r4, 0XC8);
    // 0x803F25C8: addiu       $t6, $zero, 0x5
    ctx->r14 = ADD32(0, 0X5);
    // 0x803F25CC: sh          $t6, 0x938($t7)
    MEM_H(0X938, ctx->r15) = ctx->r14;
L_803F25D0:
    // 0x803F25D0: lw          $a1, 0xC8($a0)
    ctx->r5 = MEM_W(ctx->r4, 0XC8);
    // 0x803F25D4: lw          $a2, 0x88($v1)
    ctx->r6 = MEM_W(ctx->r3, 0X88);
    // 0x803F25D8: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x803F25DC: jal         0x803F1828
    // 0x803F25E0: addiu       $a1, $a1, 0x938
    ctx->r5 = ADD32(ctx->r5, 0X938);
    ovl_803F0000_menu_func_803F1828(rdram, ctx);
        goto after_4;
    // 0x803F25E0: addiu       $a1, $a1, 0x938
    ctx->r5 = ADD32(ctx->r5, 0X938);
    after_4:
    // 0x803F25E4: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x803F25E8: addiu       $t8, $zero, 0xA
    ctx->r24 = ADD32(0, 0XA);
    // 0x803F25EC: lw          $t9, 0xC8($a0)
    ctx->r25 = MEM_W(ctx->r4, 0XC8);
    // 0x803F25F0: b           L_803F2738
    // 0x803F25F4: sh          $t8, 0x93A($t9)
    MEM_H(0X93A, ctx->r25) = ctx->r24;
        goto L_803F2738;
    // 0x803F25F4: sh          $t8, 0x93A($t9)
    MEM_H(0X93A, ctx->r25) = ctx->r24;
L_803F25F8:
    // 0x803F25F8: lw          $v0, 0xC8($a0)
    ctx->r2 = MEM_W(ctx->r4, 0XC8);
    // 0x803F25FC: lui         $at, 0x803F
    ctx->r1 = S32(0X803F << 16);
    // 0x803F2600: lw          $t0, 0x24($v0)
    ctx->r8 = MEM_W(ctx->r2, 0X24);
    // 0x803F2604: lwc1        $f17, 0x7C78($at)
    ctx->f_odd[(17 - 1) * 2] = MEM_W(ctx->r1, 0X7C78);
    // 0x803F2608: lwc1        $f8, 0x8C0($t0)
    ctx->f8.u32l = MEM_W(ctx->r8, 0X8C0);
    // 0x803F260C: lwc1        $f16, 0x7C7C($at)
    ctx->f16.u32l = MEM_W(ctx->r1, 0X7C7C);
    // 0x803F2610: cvt.d.s     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f10.d = CVT_D_S(ctx->f8.fl);
    // 0x803F2614: add.d       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f16.d); 
    ctx->f18.d = ctx->f10.d + ctx->f16.d;
    // 0x803F2618: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x803F261C: cvt.s.d     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.d); 
    ctx->f4.fl = CVT_S_D(ctx->f18.d);
    // 0x803F2620: addiu       $a3, $zero, 0xA
    ctx->r7 = ADD32(0, 0XA);
    // 0x803F2624: mfc1        $a2, $f4
    ctx->r6 = (int32_t)ctx->f4.u32l;
    // 0x803F2628: jal         0x803F1828
    // 0x803F262C: addiu       $a1, $v0, 0x938
    ctx->r5 = ADD32(ctx->r2, 0X938);
    ovl_803F0000_menu_func_803F1828(rdram, ctx);
        goto after_5;
    // 0x803F262C: addiu       $a1, $v0, 0x938
    ctx->r5 = ADD32(ctx->r2, 0X938);
    after_5:
    // 0x803F2630: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x803F2634: addiu       $t1, $zero, 0xA
    ctx->r9 = ADD32(0, 0XA);
    // 0x803F2638: lw          $t2, 0xC8($a0)
    ctx->r10 = MEM_W(ctx->r4, 0XC8);
    // 0x803F263C: addiu       $t3, $zero, 0x4
    ctx->r11 = ADD32(0, 0X4);
    // 0x803F2640: sh          $t1, 0x93A($t2)
    MEM_H(0X93A, ctx->r10) = ctx->r9;
    // 0x803F2644: lw          $t4, 0xC8($a0)
    ctx->r12 = MEM_W(ctx->r4, 0XC8);
    // 0x803F2648: b           L_803F2738
    // 0x803F264C: sh          $t3, 0x938($t4)
    MEM_H(0X938, ctx->r12) = ctx->r11;
        goto L_803F2738;
    // 0x803F264C: sh          $t3, 0x938($t4)
    MEM_H(0X938, ctx->r12) = ctx->r11;
L_803F2650:
    // 0x803F2650: jal         0x803F1DD4
    // 0x803F2654: nop

    ovl_803F0000_menu_func_803F1DD4(rdram, ctx);
        goto after_6;
    // 0x803F2654: nop

    after_6:
    // 0x803F2658: b           L_803F273C
    // 0x803F265C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_803F273C;
    // 0x803F265C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_803F2660:
    // 0x803F2660: lbu         $t5, 0x4($v0)
    ctx->r13 = MEM_BU(ctx->r2, 0X4);
    // 0x803F2664: nop

    // 0x803F2668: andi        $t6, $t5, 0x80
    ctx->r14 = ctx->r13 & 0X80;
    // 0x803F266C: beq         $t6, $zero, L_803F2684
    if (ctx->r14 == 0) {
        // 0x803F2670: nop
    
            goto L_803F2684;
    }
    // 0x803F2670: nop

    // 0x803F2674: jal         0x803F1DD4
    // 0x803F2678: nop

    ovl_803F0000_menu_func_803F1DD4(rdram, ctx);
        goto after_7;
    // 0x803F2678: nop

    after_7:
    // 0x803F267C: b           L_803F273C
    // 0x803F2680: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_803F273C;
    // 0x803F2680: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_803F2684:
    // 0x803F2684: jal         0x803F23D0
    // 0x803F2688: nop

    ovl_803F0000_menu_func_803F23D0(rdram, ctx);
        goto after_8;
    // 0x803F2688: nop

    after_8:
    // 0x803F268C: b           L_803F273C
    // 0x803F2690: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_803F273C;
    // 0x803F2690: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_803F2694:
    // 0x803F2694: lui         $t7, 0x8028
    ctx->r15 = S32(0X8028 << 16);
    // 0x803F2698: lh          $t7, -0x1B60($t7)
    ctx->r15 = MEM_H(ctx->r15, -0X1B60);
    // 0x803F269C: nop

    // 0x803F26A0: andi        $t8, $t7, 0x1
    ctx->r24 = ctx->r15 & 0X1;
    // 0x803F26A4: beq         $t8, $zero, L_803F26BC
    if (ctx->r24 == 0) {
        // 0x803F26A8: nop
    
            goto L_803F26BC;
    }
    // 0x803F26A8: nop

    // 0x803F26AC: jal         0x803F23D0
    // 0x803F26B0: nop

    ovl_803F0000_menu_func_803F23D0(rdram, ctx);
        goto after_9;
    // 0x803F26B0: nop

    after_9:
    // 0x803F26B4: b           L_803F273C
    // 0x803F26B8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_803F273C;
    // 0x803F26B8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_803F26BC:
    // 0x803F26BC: jal         0x803F2178
    // 0x803F26C0: nop

    ovl_803F0000_menu_func_803F2178(rdram, ctx);
        goto after_10;
    // 0x803F26C0: nop

    after_10:
    // 0x803F26C4: b           L_803F273C
    // 0x803F26C8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_803F273C;
    // 0x803F26C8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_803F26CC:
    // 0x803F26CC: lwc1        $f12, 0x44($a0)
    ctx->f12.u32l = MEM_W(ctx->r4, 0X44);
    // 0x803F26D0: jal         0x80272AEC
    // 0x803F26D4: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    LOOKUP_FUNC(0x80272AEC)(rdram, ctx);
        goto after_11;
    // 0x803F26D4: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_11:
    // 0x803F26D8: lui         $at, 0x4348
    ctx->r1 = S32(0X4348 << 16);
    // 0x803F26DC: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x803F26E0: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x803F26E4: c.lt.s      $f6, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f6.fl < ctx->f0.fl;
    // 0x803F26E8: nop

    // 0x803F26EC: bc1f        L_803F2708
    if (!c1cs) {
        // 0x803F26F0: addiu       $a1, $zero, 0x4
        ctx->r5 = ADD32(0, 0X4);
            goto L_803F2708;
    }
    // 0x803F26F0: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x803F26F4: jal         0x803F1DD4
    // 0x803F26F8: nop

    ovl_803F0000_menu_func_803F1DD4(rdram, ctx);
        goto after_12;
    // 0x803F26F8: nop

    after_12:
    // 0x803F26FC: b           L_803F273C
    // 0x803F2700: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_803F273C;
    // 0x803F2700: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_803F2704:
    // 0x803F2704: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
L_803F2708:
    // 0x803F2708: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x803F270C: jal         0x803F1914
    // 0x803F2710: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    ovl_803F0000_menu_func_803F1914(rdram, ctx);
        goto after_13;
    // 0x803F2710: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_13:
    // 0x803F2714: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x803F2718: beq         $v0, $zero, L_803F2730
    if (ctx->r2 == 0) {
        // 0x803F271C: nop
    
            goto L_803F2730;
    }
    // 0x803F271C: nop

    // 0x803F2720: jal         0x803F3508
    // 0x803F2724: nop

    ovl_803F0000_menu_func_803F3508(rdram, ctx);
        goto after_14;
    // 0x803F2724: nop

    after_14:
    // 0x803F2728: b           L_803F273C
    // 0x803F272C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_803F273C;
    // 0x803F272C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_803F2730:
    // 0x803F2730: jal         0x803F35D8
    // 0x803F2734: nop

    ovl_803F0000_menu_func_803F35D8(rdram, ctx);
        goto after_15;
    // 0x803F2734: nop

    after_15:
L_803F2738:
    // 0x803F2738: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_803F273C:
    // 0x803F273C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x803F2740: jr          $ra
    // 0x803F2744: nop

    return;
    // 0x803F2744: nop

;}
RECOMP_FUNC void ovl_803F0000_menu_func_803F24E4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803F24E4: lhu         $t5, 0x16($a0)
    ctx->r13 = MEM_HU(ctx->r4, 0X16);
    // 0x803F24E8: nop

    // 0x803F24EC: andi        $t6, $t5, 0x40
    ctx->r14 = ctx->r13 & 0X40;
    // 0x803F24F0: bne         $t6, $zero, L_803F2520
    if (ctx->r14 != 0) {
        // 0x803F24F4: nop
    
            goto L_803F2520;
    }
    // 0x803F24F4: nop

    // 0x803F24F8: jal         0x803F1A04
    // 0x803F24FC: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    ovl_803F0000_menu_func_803F1A04(rdram, ctx);
        goto after_0;
    // 0x803F24FC: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x803F2500: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x803F2504: bne         $v0, $zero, L_803F273C
    if (ctx->r2 != 0) {
        // 0x803F2508: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_803F273C;
    }
    // 0x803F2508: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x803F250C: jal         0x803F1A80
    // 0x803F2510: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    ovl_803F0000_menu_func_803F1A80(rdram, ctx);
        goto after_1;
    // 0x803F2510: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_1:
    // 0x803F2514: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x803F2518: bne         $v0, $zero, L_803F273C
    if (ctx->r2 != 0) {
        // 0x803F251C: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_803F273C;
    }
    // 0x803F251C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_803F2520:
    // 0x803F2520: lw          $v0, 0xD4($a0)
    ctx->r2 = MEM_W(ctx->r4, 0XD4);
    // 0x803F2524: nop

    // 0x803F2528: lbu         $t7, 0x5($v0)
    ctx->r15 = MEM_BU(ctx->r2, 0X5);
    // 0x803F252C: nop

    // 0x803F2530: sltiu       $at, $t7, 0xB
    ctx->r1 = ctx->r15 < 0XB ? 1 : 0;
    // 0x803F2534: beq         $at, $zero, L_803F2738
    if (ctx->r1 == 0) {
        // 0x803F2538: sll         $t7, $t7, 2
        ctx->r15 = S32(ctx->r15 << 2);
            goto L_803F2738;
    }
    // 0x803F2538: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x803F253C: lui         $at, 0x803F
    ctx->r1 = S32(0X803F << 16);
    // 0x803F2540: addu        $at, $at, $t7
    gpr jr_addend_803F254C = ctx->r15;
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x803F2544: lw          $t7, 0x7C48($at)
    ctx->r15 = ADD32(ctx->r1, 0X7C48);
    // 0x803F2548: nop

    // 0x803F254C: jr          $t7
    // 0x803F2550: nop

    switch (jr_addend_803F254C >> 2) {
        case 0: goto L_803F2554; break;
        case 1: goto L_803F2684; break;
        case 2: goto L_803F2684; break;
        case 3: goto L_803F2684; break;
        case 4: goto L_803F2660; break;
        case 5: goto L_803F2660; break;
        case 6: goto L_803F2684; break;
        case 7: goto L_803F2694; break;
        case 8: goto L_803F2650; break;
        case 9: goto L_803F2704; break;
        case 10: goto L_803F26CC; break;
        default: switch_error(__func__, 0x803F254C, 0x803F7C48);
    }
    // 0x803F2550: nop

L_803F2554:
    // 0x803F2554: lhu         $t8, 0x16($a0)
    ctx->r24 = MEM_HU(ctx->r4, 0X16);
    // 0x803F2558: lui         $a1, 0x803F
    ctx->r5 = S32(0X803F << 16);
    // 0x803F255C: andi        $t9, $t8, 0x40
    ctx->r25 = ctx->r24 & 0X40;
    // 0x803F2560: bne         $t9, $zero, L_803F2578
    if (ctx->r25 != 0) {
        // 0x803F2564: addiu       $a1, $a1, 0x7410
        ctx->r5 = ADD32(ctx->r5, 0X7410);
            goto L_803F2578;
    }
    // 0x803F2564: addiu       $a1, $a1, 0x7410
    ctx->r5 = ADD32(ctx->r5, 0X7410);
    // 0x803F2568: jal         0x803F170C
    // 0x803F256C: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    ovl_803F0000_menu_func_803F170C(rdram, ctx);
        goto after_2;
    // 0x803F256C: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_2:
    // 0x803F2570: b           L_803F273C
    // 0x803F2574: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_803F273C;
    // 0x803F2574: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_803F2578:
    // 0x803F2578: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    // 0x803F257C: jal         0x803F1508
    // 0x803F2580: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    ovl_803F0000_menu_func_803F1508(rdram, ctx);
        goto after_3;
    // 0x803F2580: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_3:
    // 0x803F2584: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x803F2588: beq         $v0, $zero, L_803F25F8
    if (ctx->r2 == 0) {
        // 0x803F258C: or          $v1, $v0, $zero
        ctx->r3 = ctx->r2 | 0;
            goto L_803F25F8;
    }
    // 0x803F258C: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
    // 0x803F2590: lw          $t0, 0xC8($a0)
    ctx->r8 = MEM_W(ctx->r4, 0XC8);
    // 0x803F2594: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x803F2598: sw          $v0, 0x958($t0)
    MEM_W(0X958, ctx->r8) = ctx->r2;
    // 0x803F259C: lw          $t1, 0xD4($v0)
    ctx->r9 = MEM_W(ctx->r2, 0XD4);
    // 0x803F25A0: addiu       $t4, $zero, 0x4
    ctx->r12 = ADD32(0, 0X4);
    // 0x803F25A4: lbu         $t2, 0x4($t1)
    ctx->r10 = MEM_BU(ctx->r9, 0X4);
    // 0x803F25A8: addiu       $a3, $zero, 0xA
    ctx->r7 = ADD32(0, 0XA);
    // 0x803F25AC: andi        $t3, $t2, 0x7F
    ctx->r11 = ctx->r10 & 0X7F;
    // 0x803F25B0: bne         $t3, $at, L_803F25C4
    if (ctx->r11 != ctx->r1) {
        // 0x803F25B4: nop
    
            goto L_803F25C4;
    }
    // 0x803F25B4: nop

    // 0x803F25B8: lw          $t5, 0xC8($a0)
    ctx->r13 = MEM_W(ctx->r4, 0XC8);
    // 0x803F25BC: b           L_803F25D0
    // 0x803F25C0: sh          $t4, 0x938($t5)
    MEM_H(0X938, ctx->r13) = ctx->r12;
        goto L_803F25D0;
    // 0x803F25C0: sh          $t4, 0x938($t5)
    MEM_H(0X938, ctx->r13) = ctx->r12;
L_803F25C4:
    // 0x803F25C4: lw          $t7, 0xC8($a0)
    ctx->r15 = MEM_W(ctx->r4, 0XC8);
    // 0x803F25C8: addiu       $t6, $zero, 0x5
    ctx->r14 = ADD32(0, 0X5);
    // 0x803F25CC: sh          $t6, 0x938($t7)
    MEM_H(0X938, ctx->r15) = ctx->r14;
L_803F25D0:
    // 0x803F25D0: lw          $a1, 0xC8($a0)
    ctx->r5 = MEM_W(ctx->r4, 0XC8);
    // 0x803F25D4: lw          $a2, 0x88($v1)
    ctx->r6 = MEM_W(ctx->r3, 0X88);
    // 0x803F25D8: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x803F25DC: jal         0x803F1828
    // 0x803F25E0: addiu       $a1, $a1, 0x938
    ctx->r5 = ADD32(ctx->r5, 0X938);
    ovl_803F0000_menu_func_803F1828(rdram, ctx);
        goto after_4;
    // 0x803F25E0: addiu       $a1, $a1, 0x938
    ctx->r5 = ADD32(ctx->r5, 0X938);
    after_4:
    // 0x803F25E4: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x803F25E8: addiu       $t8, $zero, 0xA
    ctx->r24 = ADD32(0, 0XA);
    // 0x803F25EC: lw          $t9, 0xC8($a0)
    ctx->r25 = MEM_W(ctx->r4, 0XC8);
    // 0x803F25F0: b           L_803F2738
    // 0x803F25F4: sh          $t8, 0x93A($t9)
    MEM_H(0X93A, ctx->r25) = ctx->r24;
        goto L_803F2738;
    // 0x803F25F4: sh          $t8, 0x93A($t9)
    MEM_H(0X93A, ctx->r25) = ctx->r24;
L_803F25F8:
    // 0x803F25F8: lw          $v0, 0xC8($a0)
    ctx->r2 = MEM_W(ctx->r4, 0XC8);
    // 0x803F25FC: lui         $at, 0x803F
    ctx->r1 = S32(0X803F << 16);
    // 0x803F2600: lw          $t0, 0x24($v0)
    ctx->r8 = MEM_W(ctx->r2, 0X24);
    // 0x803F2604: lwc1        $f17, 0x7C78($at)
    ctx->f_odd[(17 - 1) * 2] = MEM_W(ctx->r1, 0X7C78);
    // 0x803F2608: lwc1        $f8, 0x8C0($t0)
    ctx->f8.u32l = MEM_W(ctx->r8, 0X8C0);
    // 0x803F260C: lwc1        $f16, 0x7C7C($at)
    ctx->f16.u32l = MEM_W(ctx->r1, 0X7C7C);
    // 0x803F2610: cvt.d.s     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f10.d = CVT_D_S(ctx->f8.fl);
    // 0x803F2614: add.d       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f16.d); 
    ctx->f18.d = ctx->f10.d + ctx->f16.d;
    // 0x803F2618: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x803F261C: cvt.s.d     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.d); 
    ctx->f4.fl = CVT_S_D(ctx->f18.d);
    // 0x803F2620: addiu       $a3, $zero, 0xA
    ctx->r7 = ADD32(0, 0XA);
    // 0x803F2624: mfc1        $a2, $f4
    ctx->r6 = (int32_t)ctx->f4.u32l;
    // 0x803F2628: jal         0x803F1828
    // 0x803F262C: addiu       $a1, $v0, 0x938
    ctx->r5 = ADD32(ctx->r2, 0X938);
    ovl_803F0000_menu_func_803F1828(rdram, ctx);
        goto after_5;
    // 0x803F262C: addiu       $a1, $v0, 0x938
    ctx->r5 = ADD32(ctx->r2, 0X938);
    after_5:
    // 0x803F2630: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x803F2634: addiu       $t1, $zero, 0xA
    ctx->r9 = ADD32(0, 0XA);
    // 0x803F2638: lw          $t2, 0xC8($a0)
    ctx->r10 = MEM_W(ctx->r4, 0XC8);
    // 0x803F263C: addiu       $t3, $zero, 0x4
    ctx->r11 = ADD32(0, 0X4);
    // 0x803F2640: sh          $t1, 0x93A($t2)
    MEM_H(0X93A, ctx->r10) = ctx->r9;
    // 0x803F2644: lw          $t4, 0xC8($a0)
    ctx->r12 = MEM_W(ctx->r4, 0XC8);
    // 0x803F2648: b           L_803F2738
    // 0x803F264C: sh          $t3, 0x938($t4)
    MEM_H(0X938, ctx->r12) = ctx->r11;
        goto L_803F2738;
    // 0x803F264C: sh          $t3, 0x938($t4)
    MEM_H(0X938, ctx->r12) = ctx->r11;
L_803F2650:
    // 0x803F2650: jal         0x803F1DD4
    // 0x803F2654: nop

    ovl_803F0000_menu_func_803F1DD4(rdram, ctx);
        goto after_6;
    // 0x803F2654: nop

    after_6:
    // 0x803F2658: b           L_803F273C
    // 0x803F265C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_803F273C;
    // 0x803F265C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_803F2660:
    // 0x803F2660: lbu         $t5, 0x4($v0)
    ctx->r13 = MEM_BU(ctx->r2, 0X4);
    // 0x803F2664: nop

    // 0x803F2668: andi        $t6, $t5, 0x80
    ctx->r14 = ctx->r13 & 0X80;
    // 0x803F266C: beq         $t6, $zero, L_803F2684
    if (ctx->r14 == 0) {
        // 0x803F2670: nop
    
            goto L_803F2684;
    }
    // 0x803F2670: nop

    // 0x803F2674: jal         0x803F1DD4
    // 0x803F2678: nop

    ovl_803F0000_menu_func_803F1DD4(rdram, ctx);
        goto after_7;
    // 0x803F2678: nop

    after_7:
    // 0x803F267C: b           L_803F273C
    // 0x803F2680: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_803F273C;
    // 0x803F2680: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_803F2684:
    // 0x803F2684: jal         0x803F23D0
    // 0x803F2688: nop

    ovl_803F0000_menu_func_803F23D0(rdram, ctx);
        goto after_8;
    // 0x803F2688: nop

    after_8:
    // 0x803F268C: b           L_803F273C
    // 0x803F2690: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_803F273C;
    // 0x803F2690: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_803F2694:
    // 0x803F2694: lui         $t7, 0x8028
    ctx->r15 = S32(0X8028 << 16);
    // 0x803F2698: lh          $t7, -0x1B60($t7)
    ctx->r15 = MEM_H(ctx->r15, -0X1B60);
    // 0x803F269C: nop

    // 0x803F26A0: andi        $t8, $t7, 0x1
    ctx->r24 = ctx->r15 & 0X1;
    // 0x803F26A4: beq         $t8, $zero, L_803F26BC
    if (ctx->r24 == 0) {
        // 0x803F26A8: nop
    
            goto L_803F26BC;
    }
    // 0x803F26A8: nop

    // 0x803F26AC: jal         0x803F23D0
    // 0x803F26B0: nop

    ovl_803F0000_menu_func_803F23D0(rdram, ctx);
        goto after_9;
    // 0x803F26B0: nop

    after_9:
    // 0x803F26B4: b           L_803F273C
    // 0x803F26B8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_803F273C;
    // 0x803F26B8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_803F26BC:
    // 0x803F26BC: jal         0x803F2178
    // 0x803F26C0: nop

    ovl_803F0000_menu_func_803F2178(rdram, ctx);
        goto after_10;
    // 0x803F26C0: nop

    after_10:
    // 0x803F26C4: b           L_803F273C
    // 0x803F26C8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_803F273C;
    // 0x803F26C8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_803F26CC:
    // 0x803F26CC: lwc1        $f12, 0x44($a0)
    ctx->f12.u32l = MEM_W(ctx->r4, 0X44);
    // 0x803F26D0: jal         0x80272AEC
    // 0x803F26D4: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    LOOKUP_FUNC(0x80272AEC)(rdram, ctx);
        goto after_11;
    // 0x803F26D4: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_11:
    // 0x803F26D8: lui         $at, 0x4348
    ctx->r1 = S32(0X4348 << 16);
    // 0x803F26DC: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x803F26E0: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x803F26E4: c.lt.s      $f6, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f6.fl < ctx->f0.fl;
    // 0x803F26E8: nop

    // 0x803F26EC: bc1f        L_803F2708
    if (!c1cs) {
        // 0x803F26F0: addiu       $a1, $zero, 0x4
        ctx->r5 = ADD32(0, 0X4);
            goto L_803F2708;
    }
    // 0x803F26F0: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x803F26F4: jal         0x803F1DD4
    // 0x803F26F8: nop

    ovl_803F0000_menu_func_803F1DD4(rdram, ctx);
        goto after_12;
    // 0x803F26F8: nop

    after_12:
    // 0x803F26FC: b           L_803F273C
    // 0x803F2700: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_803F273C;
    // 0x803F2700: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_803F2704:
    // 0x803F2704: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
L_803F2708:
    // 0x803F2708: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x803F270C: jal         0x803F1914
    // 0x803F2710: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    ovl_803F0000_menu_func_803F1914(rdram, ctx);
        goto after_13;
    // 0x803F2710: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_13:
    // 0x803F2714: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x803F2718: beq         $v0, $zero, L_803F2730
    if (ctx->r2 == 0) {
        // 0x803F271C: nop
    
            goto L_803F2730;
    }
    // 0x803F271C: nop

    // 0x803F2720: jal         0x803F3508
    // 0x803F2724: nop

    ovl_803F0000_menu_func_803F3508(rdram, ctx);
        goto after_14;
    // 0x803F2724: nop

    after_14:
    // 0x803F2728: b           L_803F273C
    // 0x803F272C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_803F273C;
    // 0x803F272C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_803F2730:
    // 0x803F2730: jal         0x803F35D8
    // 0x803F2734: nop

    ovl_803F0000_menu_func_803F35D8(rdram, ctx);
        goto after_15;
    // 0x803F2734: nop

    after_15:
L_803F2738:
    // 0x803F2738: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_803F273C:
    // 0x803F273C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x803F2740: jr          $ra
    // 0x803F2744: nop

    return;
    // 0x803F2744: nop

;}
RECOMP_FUNC void ovl_803F0000_menu_func_803F2634(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803F2634: addiu       $t1, $zero, 0xA
    ctx->r9 = ADD32(0, 0XA);
    // 0x803F2638: lw          $t2, 0xC8($a0)
    ctx->r10 = MEM_W(ctx->r4, 0XC8);
    // 0x803F263C: addiu       $t3, $zero, 0x4
    ctx->r11 = ADD32(0, 0X4);
    // 0x803F2640: sh          $t1, 0x93A($t2)
    MEM_H(0X93A, ctx->r10) = ctx->r9;
    // 0x803F2644: lw          $t4, 0xC8($a0)
    ctx->r12 = MEM_W(ctx->r4, 0XC8);
    // 0x803F2648: b           L_803F2738
    // 0x803F264C: sh          $t3, 0x938($t4)
    MEM_H(0X938, ctx->r12) = ctx->r11;
        goto L_803F2738;
    // 0x803F264C: sh          $t3, 0x938($t4)
    MEM_H(0X938, ctx->r12) = ctx->r11;
    // 0x803F2650: jal         0x803F1DD4
    // 0x803F2654: nop

    ovl_803F0000_menu_func_803F1DD4(rdram, ctx);
        goto after_0;
    // 0x803F2654: nop

    after_0:
    // 0x803F2658: b           L_803F273C
    // 0x803F265C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_803F273C;
    // 0x803F265C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x803F2660: lbu         $t5, 0x4($v0)
    ctx->r13 = MEM_BU(ctx->r2, 0X4);
    // 0x803F2664: nop

    // 0x803F2668: andi        $t6, $t5, 0x80
    ctx->r14 = ctx->r13 & 0X80;
    // 0x803F266C: beq         $t6, $zero, L_803F2684
    if (ctx->r14 == 0) {
        // 0x803F2670: nop
    
            goto L_803F2684;
    }
    // 0x803F2670: nop

    // 0x803F2674: jal         0x803F1DD4
    // 0x803F2678: nop

    ovl_803F0000_menu_func_803F1DD4(rdram, ctx);
        goto after_1;
    // 0x803F2678: nop

    after_1:
    // 0x803F267C: b           L_803F273C
    // 0x803F2680: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_803F273C;
    // 0x803F2680: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_803F2684:
    // 0x803F2684: jal         0x803F23D0
    // 0x803F2688: nop

    ovl_803F0000_menu_func_803F23D0(rdram, ctx);
        goto after_2;
    // 0x803F2688: nop

    after_2:
    // 0x803F268C: b           L_803F273C
    // 0x803F2690: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_803F273C;
    // 0x803F2690: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x803F2694: lui         $t7, 0x8028
    ctx->r15 = S32(0X8028 << 16);
    // 0x803F2698: lh          $t7, -0x1B60($t7)
    ctx->r15 = MEM_H(ctx->r15, -0X1B60);
    // 0x803F269C: nop

    // 0x803F26A0: andi        $t8, $t7, 0x1
    ctx->r24 = ctx->r15 & 0X1;
    // 0x803F26A4: beq         $t8, $zero, L_803F26BC
    if (ctx->r24 == 0) {
        // 0x803F26A8: nop
    
            goto L_803F26BC;
    }
    // 0x803F26A8: nop

    // 0x803F26AC: jal         0x803F23D0
    // 0x803F26B0: nop

    ovl_803F0000_menu_func_803F23D0(rdram, ctx);
        goto after_3;
    // 0x803F26B0: nop

    after_3:
    // 0x803F26B4: b           L_803F273C
    // 0x803F26B8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_803F273C;
    // 0x803F26B8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_803F26BC:
    // 0x803F26BC: jal         0x803F2178
    // 0x803F26C0: nop

    ovl_803F0000_menu_func_803F2178(rdram, ctx);
        goto after_4;
    // 0x803F26C0: nop

    after_4:
    // 0x803F26C4: b           L_803F273C
    // 0x803F26C8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_803F273C;
    // 0x803F26C8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x803F26CC: lwc1        $f12, 0x44($a0)
    ctx->f12.u32l = MEM_W(ctx->r4, 0X44);
    // 0x803F26D0: jal         0x80272AEC
    // 0x803F26D4: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    LOOKUP_FUNC(0x80272AEC)(rdram, ctx);
        goto after_5;
    // 0x803F26D4: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_5:
    // 0x803F26D8: lui         $at, 0x4348
    ctx->r1 = S32(0X4348 << 16);
    // 0x803F26DC: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x803F26E0: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x803F26E4: c.lt.s      $f6, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f6.fl < ctx->f0.fl;
    // 0x803F26E8: nop

    // 0x803F26EC: bc1f        L_803F2708
    if (!c1cs) {
        // 0x803F26F0: addiu       $a1, $zero, 0x4
        ctx->r5 = ADD32(0, 0X4);
            goto L_803F2708;
    }
    // 0x803F26F0: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x803F26F4: jal         0x803F1DD4
    // 0x803F26F8: nop

    ovl_803F0000_menu_func_803F1DD4(rdram, ctx);
        goto after_6;
    // 0x803F26F8: nop

    after_6:
    // 0x803F26FC: b           L_803F273C
    // 0x803F2700: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_803F273C;
    // 0x803F2700: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x803F2704: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
L_803F2708:
    // 0x803F2708: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x803F270C: jal         0x803F1914
    // 0x803F2710: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    ovl_803F0000_menu_func_803F1914(rdram, ctx);
        goto after_7;
    // 0x803F2710: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_7:
    // 0x803F2714: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x803F2718: beq         $v0, $zero, L_803F2730
    if (ctx->r2 == 0) {
        // 0x803F271C: nop
    
            goto L_803F2730;
    }
    // 0x803F271C: nop

    // 0x803F2720: jal         0x803F3508
    // 0x803F2724: nop

    ovl_803F0000_menu_func_803F3508(rdram, ctx);
        goto after_8;
    // 0x803F2724: nop

    after_8:
    // 0x803F2728: b           L_803F273C
    // 0x803F272C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_803F273C;
    // 0x803F272C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_803F2730:
    // 0x803F2730: jal         0x803F35D8
    // 0x803F2734: nop

    ovl_803F0000_menu_func_803F35D8(rdram, ctx);
        goto after_9;
    // 0x803F2734: nop

    after_9:
L_803F2738:
    // 0x803F2738: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_803F273C:
    // 0x803F273C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x803F2740: jr          $ra
    // 0x803F2744: nop

    return;
    // 0x803F2744: nop

;}
RECOMP_FUNC void ovl_803F0000_menu_func_803F2704(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803F2704: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x803F2708: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x803F270C: jal         0x803F1914
    // 0x803F2710: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    ovl_803F0000_menu_func_803F1914(rdram, ctx);
        goto after_0;
    // 0x803F2710: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x803F2714: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x803F2718: beq         $v0, $zero, L_803F2730
    if (ctx->r2 == 0) {
        // 0x803F271C: nop
    
            goto L_803F2730;
    }
    // 0x803F271C: nop

    // 0x803F2720: jal         0x803F3508
    // 0x803F2724: nop

    ovl_803F0000_menu_func_803F3508(rdram, ctx);
        goto after_1;
    // 0x803F2724: nop

    after_1:
    // 0x803F2728: b           L_803F273C
    // 0x803F272C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_803F273C;
    // 0x803F272C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_803F2730:
    // 0x803F2730: jal         0x803F35D8
    // 0x803F2734: nop

    ovl_803F0000_menu_func_803F35D8(rdram, ctx);
        goto after_2;
    // 0x803F2734: nop

    after_2:
    // 0x803F2738: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_803F273C:
    // 0x803F273C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x803F2740: jr          $ra
    // 0x803F2744: nop

    return;
    // 0x803F2744: nop

;}
RECOMP_FUNC void ovl_803F0000_menu_func_803F2748(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803F2748: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x803F274C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x803F2750: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    // 0x803F2754: andi        $t6, $a2, 0xFFFF
    ctx->r14 = ctx->r6 & 0XFFFF;
    // 0x803F2758: or          $a2, $t6, $zero
    ctx->r6 = ctx->r14 | 0;
    // 0x803F275C: sw          $a3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r7;
    // 0x803F2760: jal         0x803F1508
    // 0x803F2764: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    ovl_803F0000_menu_func_803F1508(rdram, ctx);
        goto after_0;
    // 0x803F2764: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x803F2768: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x803F276C: beq         $v0, $zero, L_803F2818
    if (ctx->r2 == 0) {
        // 0x803F2770: nop
    
            goto L_803F2818;
    }
    // 0x803F2770: nop

    // 0x803F2774: lw          $t7, 0xC8($a0)
    ctx->r15 = MEM_W(ctx->r4, 0XC8);
    // 0x803F2778: addiu       $a3, $zero, 0x28
    ctx->r7 = ADD32(0, 0X28);
    // 0x803F277C: sw          $v0, 0x958($t7)
    MEM_W(0X958, ctx->r15) = ctx->r2;
    // 0x803F2780: lw          $t9, 0xC8($a0)
    ctx->r25 = MEM_W(ctx->r4, 0XC8);
    // 0x803F2784: lhu         $t8, 0x26($sp)
    ctx->r24 = MEM_HU(ctx->r29, 0X26);
    // 0x803F2788: nop

    // 0x803F278C: sh          $t8, 0x938($t9)
    MEM_H(0X938, ctx->r25) = ctx->r24;
    // 0x803F2790: lw          $a1, 0xC8($a0)
    ctx->r5 = MEM_W(ctx->r4, 0XC8);
    // 0x803F2794: lw          $a2, 0x88($v0)
    ctx->r6 = MEM_W(ctx->r2, 0X88);
    // 0x803F2798: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x803F279C: jal         0x803F1828
    // 0x803F27A0: addiu       $a1, $a1, 0x938
    ctx->r5 = ADD32(ctx->r5, 0X938);
    ovl_803F0000_menu_func_803F1828(rdram, ctx);
        goto after_1;
    // 0x803F27A0: addiu       $a1, $a1, 0x938
    ctx->r5 = ADD32(ctx->r5, 0X938);
    after_1:
    // 0x803F27A4: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x803F27A8: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x803F27AC: lw          $v0, 0xC8($a0)
    ctx->r2 = MEM_W(ctx->r4, 0XC8);
    // 0x803F27B0: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
    // 0x803F27B4: lbu         $t0, 0x8AC($v0)
    ctx->r8 = MEM_BU(ctx->r2, 0X8AC);
    // 0x803F27B8: addiu       $t2, $zero, 0x5
    ctx->r10 = ADD32(0, 0X5);
    // 0x803F27BC: bne         $t0, $at, L_803F27CC
    if (ctx->r8 != ctx->r1) {
        // 0x803F27C0: nop
    
            goto L_803F27CC;
    }
    // 0x803F27C0: nop

    // 0x803F27C4: b           L_803F27D0
    // 0x803F27C8: sh          $t1, 0x93A($v0)
    MEM_H(0X93A, ctx->r2) = ctx->r9;
        goto L_803F27D0;
    // 0x803F27C8: sh          $t1, 0x93A($v0)
    MEM_H(0X93A, ctx->r2) = ctx->r9;
L_803F27CC:
    // 0x803F27CC: sh          $t2, 0x93A($v0)
    MEM_H(0X93A, ctx->r2) = ctx->r10;
L_803F27D0:
    // 0x803F27D0: lw          $v0, 0xC8($a0)
    ctx->r2 = MEM_W(ctx->r4, 0XC8);
    // 0x803F27D4: lui         $at, 0x43C8
    ctx->r1 = S32(0X43C8 << 16);
    // 0x803F27D8: lw          $t3, 0x24($v0)
    ctx->r11 = MEM_W(ctx->r2, 0X24);
    // 0x803F27DC: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x803F27E0: lwc1        $f4, 0x8BC($t3)
    ctx->f4.u32l = MEM_W(ctx->r11, 0X8BC);
    // 0x803F27E4: nop

    // 0x803F27E8: c.lt.s      $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f4.fl < ctx->f6.fl;
    // 0x803F27EC: nop

    // 0x803F27F0: bc1f        L_803F2810
    if (!c1cs) {
        // 0x803F27F4: nop
    
            goto L_803F2810;
    }
    // 0x803F27F4: nop

    // 0x803F27F8: lhu         $t4, 0x2C($a0)
    ctx->r12 = MEM_HU(ctx->r4, 0X2C);
    // 0x803F27FC: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x803F2800: andi        $t5, $t4, 0x1
    ctx->r13 = ctx->r12 & 0X1;
    // 0x803F2804: beq         $t5, $zero, L_803F2810
    if (ctx->r13 == 0) {
        // 0x803F2808: nop
    
            goto L_803F2810;
    }
    // 0x803F2808: nop

    // 0x803F280C: sh          $t6, 0x93A($v0)
    MEM_H(0X93A, ctx->r2) = ctx->r14;
L_803F2810:
    // 0x803F2810: b           L_803F281C
    // 0x803F2814: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_803F281C;
    // 0x803F2814: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_803F2818:
    // 0x803F2818: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_803F281C:
    // 0x803F281C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x803F2820: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x803F2824: jr          $ra
    // 0x803F2828: nop

    return;
    // 0x803F2828: nop

;}
RECOMP_FUNC void ovl_803F0000_menu_func_803F27B0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803F27B0: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
    // 0x803F27B4: lbu         $t0, 0x8AC($v0)
    ctx->r8 = MEM_BU(ctx->r2, 0X8AC);
    // 0x803F27B8: addiu       $t2, $zero, 0x5
    ctx->r10 = ADD32(0, 0X5);
    // 0x803F27BC: bne         $t0, $at, L_803F27CC
    if (ctx->r8 != ctx->r1) {
        // 0x803F27C0: nop
    
            goto L_803F27CC;
    }
    // 0x803F27C0: nop

    // 0x803F27C4: b           L_803F27D0
    // 0x803F27C8: sh          $t1, 0x93A($v0)
    MEM_H(0X93A, ctx->r2) = ctx->r9;
        goto L_803F27D0;
    // 0x803F27C8: sh          $t1, 0x93A($v0)
    MEM_H(0X93A, ctx->r2) = ctx->r9;
L_803F27CC:
    // 0x803F27CC: sh          $t2, 0x93A($v0)
    MEM_H(0X93A, ctx->r2) = ctx->r10;
L_803F27D0:
    // 0x803F27D0: lw          $v0, 0xC8($a0)
    ctx->r2 = MEM_W(ctx->r4, 0XC8);
    // 0x803F27D4: lui         $at, 0x43C8
    ctx->r1 = S32(0X43C8 << 16);
    // 0x803F27D8: lw          $t3, 0x24($v0)
    ctx->r11 = MEM_W(ctx->r2, 0X24);
    // 0x803F27DC: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x803F27E0: lwc1        $f4, 0x8BC($t3)
    ctx->f4.u32l = MEM_W(ctx->r11, 0X8BC);
    // 0x803F27E4: nop

    // 0x803F27E8: c.lt.s      $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f4.fl < ctx->f6.fl;
    // 0x803F27EC: nop

    // 0x803F27F0: bc1f        L_803F2810
    if (!c1cs) {
        // 0x803F27F4: nop
    
            goto L_803F2810;
    }
    // 0x803F27F4: nop

    // 0x803F27F8: lhu         $t4, 0x2C($a0)
    ctx->r12 = MEM_HU(ctx->r4, 0X2C);
    // 0x803F27FC: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x803F2800: andi        $t5, $t4, 0x1
    ctx->r13 = ctx->r12 & 0X1;
    // 0x803F2804: beq         $t5, $zero, L_803F2810
    if (ctx->r13 == 0) {
        // 0x803F2808: nop
    
            goto L_803F2810;
    }
    // 0x803F2808: nop

    // 0x803F280C: sh          $t6, 0x93A($v0)
    MEM_H(0X93A, ctx->r2) = ctx->r14;
L_803F2810:
    // 0x803F2810: b           L_803F281C
    // 0x803F2814: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_803F281C;
    // 0x803F2814: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x803F2818: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_803F281C:
    // 0x803F281C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x803F2820: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x803F2824: jr          $ra
    // 0x803F2828: nop

    return;
    // 0x803F2828: nop

;}
RECOMP_FUNC void ovl_803F0000_menu_func_803F282C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803F282C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x803F2830: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x803F2834: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x803F2838: addiu       $a1, $zero, 0x700
    ctx->r5 = ADD32(0, 0X700);
    // 0x803F283C: jal         0x803F11B4
    // 0x803F2840: addiu       $a2, $zero, 0x24
    ctx->r6 = ADD32(0, 0X24);
    ovl_803F0000_menu_func_803F11B4(rdram, ctx);
        goto after_0;
    // 0x803F2840: addiu       $a2, $zero, 0x24
    ctx->r6 = ADD32(0, 0X24);
    after_0:
    // 0x803F2844: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x803F2848: beq         $v0, $zero, L_803F2894
    if (ctx->r2 == 0) {
        // 0x803F284C: nop
    
            goto L_803F2894;
    }
    // 0x803F284C: nop

    // 0x803F2850: lw          $t6, 0xC8($a0)
    ctx->r14 = MEM_W(ctx->r4, 0XC8);
    // 0x803F2854: addiu       $t7, $zero, 0xB
    ctx->r15 = ADD32(0, 0XB);
    // 0x803F2858: sw          $v0, 0x958($t6)
    MEM_W(0X958, ctx->r14) = ctx->r2;
    // 0x803F285C: lw          $t8, 0xC8($a0)
    ctx->r24 = MEM_W(ctx->r4, 0XC8);
    // 0x803F2860: addiu       $a3, $zero, 0x28
    ctx->r7 = ADD32(0, 0X28);
    // 0x803F2864: sh          $t7, 0x938($t8)
    MEM_H(0X938, ctx->r24) = ctx->r15;
    // 0x803F2868: lw          $a1, 0xC8($a0)
    ctx->r5 = MEM_W(ctx->r4, 0XC8);
    // 0x803F286C: lw          $a2, 0x88($v0)
    ctx->r6 = MEM_W(ctx->r2, 0X88);
    // 0x803F2870: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x803F2874: jal         0x803F1828
    // 0x803F2878: addiu       $a1, $a1, 0x938
    ctx->r5 = ADD32(ctx->r5, 0X938);
    ovl_803F0000_menu_func_803F1828(rdram, ctx);
        goto after_1;
    // 0x803F2878: addiu       $a1, $a1, 0x938
    ctx->r5 = ADD32(ctx->r5, 0X938);
    after_1:
    // 0x803F287C: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x803F2880: addiu       $t9, $zero, 0x5
    ctx->r25 = ADD32(0, 0X5);
    // 0x803F2884: lw          $t0, 0xC8($a0)
    ctx->r8 = MEM_W(ctx->r4, 0XC8);
    // 0x803F2888: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x803F288C: b           L_803F2898
    // 0x803F2890: sh          $t9, 0x93A($t0)
    MEM_H(0X93A, ctx->r8) = ctx->r25;
        goto L_803F2898;
    // 0x803F2890: sh          $t9, 0x93A($t0)
    MEM_H(0X93A, ctx->r8) = ctx->r25;
L_803F2894:
    // 0x803F2894: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_803F2898:
    // 0x803F2898: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x803F289C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x803F28A0: jr          $ra
    // 0x803F28A4: nop

    return;
    // 0x803F28A4: nop

;}
RECOMP_FUNC void ovl_803F0000_menu_func_803F28A8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803F28A8: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x803F28AC: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x803F28B0: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x803F28B4: jal         0x803F0FF0
    // 0x803F28B8: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    ovl_803F0000_menu_func_803F0FF0(rdram, ctx);
        goto after_0;
    // 0x803F28B8: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    after_0:
    // 0x803F28BC: beq         $v0, $zero, L_803F2A2C
    if (ctx->r2 == 0) {
        // 0x803F28C0: or          $v1, $v0, $zero
        ctx->r3 = ctx->r2 | 0;
            goto L_803F2A2C;
    }
    // 0x803F28C0: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
    // 0x803F28C4: lw          $t6, 0xC8($s0)
    ctx->r14 = MEM_W(ctx->r16, 0XC8);
    // 0x803F28C8: addiu       $t7, $zero, 0x13
    ctx->r15 = ADD32(0, 0X13);
    // 0x803F28CC: sw          $v0, 0x958($t6)
    MEM_W(0X958, ctx->r14) = ctx->r2;
    // 0x803F28D0: lw          $t8, 0xC8($s0)
    ctx->r24 = MEM_W(ctx->r16, 0XC8);
    // 0x803F28D4: lui         $at, 0x803F
    ctx->r1 = S32(0X803F << 16);
    // 0x803F28D8: sh          $t7, 0x938($t8)
    MEM_H(0X938, ctx->r24) = ctx->r15;
    // 0x803F28DC: lw          $t9, 0xC8($s0)
    ctx->r25 = MEM_W(ctx->r16, 0XC8);
    // 0x803F28E0: lwc1        $f4, 0x7C80($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X7C80);
    // 0x803F28E4: nop

    // 0x803F28E8: swc1        $f4, 0x940($t9)
    MEM_W(0X940, ctx->r25) = ctx->f4.u32l;
    // 0x803F28EC: lw          $v0, 0xC8($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XC8);
    // 0x803F28F0: nop

    // 0x803F28F4: lw          $t0, 0x24($v0)
    ctx->r8 = MEM_W(ctx->r2, 0X24);
    // 0x803F28F8: nop

    // 0x803F28FC: lh          $t1, 0x8B8($t0)
    ctx->r9 = MEM_H(ctx->r8, 0X8B8);
    // 0x803F2900: nop

    // 0x803F2904: sh          $t1, 0x93C($v0)
    MEM_H(0X93C, ctx->r2) = ctx->r9;
    // 0x803F2908: lwc1        $f12, 0x44($s0)
    ctx->f12.u32l = MEM_W(ctx->r16, 0X44);
    // 0x803F290C: jal         0x80272AEC
    // 0x803F2910: sw          $v1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r3;
    LOOKUP_FUNC(0x80272AEC)(rdram, ctx);
        goto after_1;
    // 0x803F2910: sw          $v1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r3;
    after_1:
    // 0x803F2914: lui         $at, 0x4348
    ctx->r1 = S32(0X4348 << 16);
    // 0x803F2918: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x803F291C: lw          $v1, 0x24($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X24);
    // 0x803F2920: c.lt.s      $f6, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f6.fl < ctx->f0.fl;
    // 0x803F2924: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x803F2928: bc1f        L_803F295C
    if (!c1cs) {
        // 0x803F292C: nop
    
            goto L_803F295C;
    }
    // 0x803F292C: nop

    // 0x803F2930: cfc1        $t2, $FpcCsr
    ctx->r10 = get_cop1_cs();
    // 0x803F2934: lwc1        $f8, 0x44($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X44);
    // 0x803F2938: ori         $at, $t2, 0x3
    ctx->r1 = ctx->r10 | 0X3;
    // 0x803F293C: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x803F2940: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x803F2944: lw          $t4, 0xC8($s0)
    ctx->r12 = MEM_W(ctx->r16, 0XC8);
    // 0x803F2948: cvt.w.s     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.u32l = CVT_W_S(ctx->f8.fl);
    // 0x803F294C: mfc1        $t3, $f10
    ctx->r11 = (int32_t)ctx->f10.u32l;
    // 0x803F2950: ctc1        $t2, $FpcCsr
    set_cop1_cs(ctx->r10);
    // 0x803F2954: b           L_803F2A0C
    // 0x803F2958: sh          $t3, 0x93E($t4)
    MEM_H(0X93E, ctx->r12) = ctx->r11;
        goto L_803F2A0C;
    // 0x803F2958: sh          $t3, 0x93E($t4)
    MEM_H(0X93E, ctx->r12) = ctx->r11;
L_803F295C:
    // 0x803F295C: mtc1        $zero, $f2
    ctx->f2.u32l = 0;
    // 0x803F2960: lwc1        $f0, 0x44($v1)
    ctx->f0.u32l = MEM_W(ctx->r3, 0X44);
    // 0x803F2964: nop

    // 0x803F2968: c.lt.s      $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f2.fl < ctx->f0.fl;
    // 0x803F296C: nop

    // 0x803F2970: bc1f        L_803F299C
    if (!c1cs) {
        // 0x803F2974: nop
    
            goto L_803F299C;
    }
    // 0x803F2974: nop

    // 0x803F2978: lwc1        $f16, 0x44($s0)
    ctx->f16.u32l = MEM_W(ctx->r16, 0X44);
    // 0x803F297C: addiu       $t5, $zero, 0x32
    ctx->r13 = ADD32(0, 0X32);
    // 0x803F2980: c.lt.s      $f2, $f16
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f2.fl < ctx->f16.fl;
    // 0x803F2984: nop

    // 0x803F2988: bc1f        L_803F299C
    if (!c1cs) {
        // 0x803F298C: nop
    
            goto L_803F299C;
    }
    // 0x803F298C: nop

    // 0x803F2990: lw          $t6, 0xC8($s0)
    ctx->r14 = MEM_W(ctx->r16, 0XC8);
    // 0x803F2994: b           L_803F2A0C
    // 0x803F2998: sh          $t5, 0x93E($t6)
    MEM_H(0X93E, ctx->r14) = ctx->r13;
        goto L_803F2A0C;
    // 0x803F2998: sh          $t5, 0x93E($t6)
    MEM_H(0X93E, ctx->r14) = ctx->r13;
L_803F299C:
    // 0x803F299C: c.lt.s      $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f0.fl < ctx->f2.fl;
    // 0x803F29A0: lwc1        $f12, 0x44($s0)
    ctx->f12.u32l = MEM_W(ctx->r16, 0X44);
    // 0x803F29A4: bc1f        L_803F29C8
    if (!c1cs) {
        // 0x803F29A8: nop
    
            goto L_803F29C8;
    }
    // 0x803F29A8: nop

    // 0x803F29AC: c.lt.s      $f12, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f12.fl < ctx->f2.fl;
    // 0x803F29B0: addiu       $t7, $zero, -0x32
    ctx->r15 = ADD32(0, -0X32);
    // 0x803F29B4: bc1f        L_803F29C8
    if (!c1cs) {
        // 0x803F29B8: nop
    
            goto L_803F29C8;
    }
    // 0x803F29B8: nop

    // 0x803F29BC: lw          $t8, 0xC8($s0)
    ctx->r24 = MEM_W(ctx->r16, 0XC8);
    // 0x803F29C0: b           L_803F2A0C
    // 0x803F29C4: sh          $t7, 0x93E($t8)
    MEM_H(0X93E, ctx->r24) = ctx->r15;
        goto L_803F2A0C;
    // 0x803F29C4: sh          $t7, 0x93E($t8)
    MEM_H(0X93E, ctx->r24) = ctx->r15;
L_803F29C8:
    // 0x803F29C8: mul.s       $f18, $f0, $f12
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f18.fl = MUL_S(ctx->f0.fl, ctx->f12.fl);
    // 0x803F29CC: lui         $t9, 0x8028
    ctx->r25 = S32(0X8028 << 16);
    // 0x803F29D0: c.lt.s      $f18, $f2
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f18.fl < ctx->f2.fl;
    // 0x803F29D4: nop

    // 0x803F29D8: bc1f        L_803F2A0C
    if (!c1cs) {
        // 0x803F29DC: nop
    
            goto L_803F2A0C;
    }
    // 0x803F29DC: nop

    // 0x803F29E0: lh          $t9, -0x1B60($t9)
    ctx->r25 = MEM_H(ctx->r25, -0X1B60);
    // 0x803F29E4: addiu       $t1, $zero, -0x32
    ctx->r9 = ADD32(0, -0X32);
    // 0x803F29E8: andi        $t0, $t9, 0x1
    ctx->r8 = ctx->r25 & 0X1;
    // 0x803F29EC: beq         $t0, $zero, L_803F2A00
    if (ctx->r8 == 0) {
        // 0x803F29F0: nop
    
            goto L_803F2A00;
    }
    // 0x803F29F0: nop

    // 0x803F29F4: lw          $t2, 0xC8($s0)
    ctx->r10 = MEM_W(ctx->r16, 0XC8);
    // 0x803F29F8: b           L_803F2A0C
    // 0x803F29FC: sh          $t1, 0x93E($t2)
    MEM_H(0X93E, ctx->r10) = ctx->r9;
        goto L_803F2A0C;
    // 0x803F29FC: sh          $t1, 0x93E($t2)
    MEM_H(0X93E, ctx->r10) = ctx->r9;
L_803F2A00:
    // 0x803F2A00: lw          $t4, 0xC8($s0)
    ctx->r12 = MEM_W(ctx->r16, 0XC8);
    // 0x803F2A04: addiu       $t3, $zero, 0x32
    ctx->r11 = ADD32(0, 0X32);
    // 0x803F2A08: sh          $t3, 0x93E($t4)
    MEM_H(0X93E, ctx->r12) = ctx->r11;
L_803F2A0C:
    // 0x803F2A0C: lw          $a1, 0xC8($s0)
    ctx->r5 = MEM_W(ctx->r16, 0XC8);
    // 0x803F2A10: jal         0x803F17BC
    // 0x803F2A14: addiu       $a1, $a1, 0x938
    ctx->r5 = ADD32(ctx->r5, 0X938);
    ovl_803F0000_menu_func_803F17BC(rdram, ctx);
        goto after_2;
    // 0x803F2A14: addiu       $a1, $a1, 0x938
    ctx->r5 = ADD32(ctx->r5, 0X938);
    after_2:
    // 0x803F2A18: lw          $t6, 0xC8($s0)
    ctx->r14 = MEM_W(ctx->r16, 0XC8);
    // 0x803F2A1C: addiu       $t5, $zero, 0xA
    ctx->r13 = ADD32(0, 0XA);
    // 0x803F2A20: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x803F2A24: b           L_803F2A30
    // 0x803F2A28: sh          $t5, 0x93A($t6)
    MEM_H(0X93A, ctx->r14) = ctx->r13;
        goto L_803F2A30;
    // 0x803F2A28: sh          $t5, 0x93A($t6)
    MEM_H(0X93A, ctx->r14) = ctx->r13;
L_803F2A2C:
    // 0x803F2A2C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_803F2A30:
    // 0x803F2A30: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x803F2A34: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x803F2A38: jr          $ra
    // 0x803F2A3C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x803F2A3C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void ovl_803F0000_menu_func_803F299C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803F299C: c.lt.s      $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f0.fl < ctx->f2.fl;
    // 0x803F29A0: lwc1        $f12, 0x44($s0)
    ctx->f12.u32l = MEM_W(ctx->r16, 0X44);
    // 0x803F29A4: bc1f        L_803F29C8
    if (!c1cs) {
        // 0x803F29A8: nop
    
            goto L_803F29C8;
    }
    // 0x803F29A8: nop

    // 0x803F29AC: c.lt.s      $f12, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f12.fl < ctx->f2.fl;
    // 0x803F29B0: addiu       $t7, $zero, -0x32
    ctx->r15 = ADD32(0, -0X32);
    // 0x803F29B4: bc1f        L_803F29C8
    if (!c1cs) {
        // 0x803F29B8: nop
    
            goto L_803F29C8;
    }
    // 0x803F29B8: nop

    // 0x803F29BC: lw          $t8, 0xC8($s0)
    ctx->r24 = MEM_W(ctx->r16, 0XC8);
    // 0x803F29C0: b           L_803F2A0C
    // 0x803F29C4: sh          $t7, 0x93E($t8)
    MEM_H(0X93E, ctx->r24) = ctx->r15;
        goto L_803F2A0C;
    // 0x803F29C4: sh          $t7, 0x93E($t8)
    MEM_H(0X93E, ctx->r24) = ctx->r15;
L_803F29C8:
    // 0x803F29C8: mul.s       $f18, $f0, $f12
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f18.fl = MUL_S(ctx->f0.fl, ctx->f12.fl);
    // 0x803F29CC: lui         $t9, 0x8028
    ctx->r25 = S32(0X8028 << 16);
    // 0x803F29D0: c.lt.s      $f18, $f2
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f18.fl < ctx->f2.fl;
    // 0x803F29D4: nop

    // 0x803F29D8: bc1f        L_803F2A0C
    if (!c1cs) {
        // 0x803F29DC: nop
    
            goto L_803F2A0C;
    }
    // 0x803F29DC: nop

    // 0x803F29E0: lh          $t9, -0x1B60($t9)
    ctx->r25 = MEM_H(ctx->r25, -0X1B60);
    // 0x803F29E4: addiu       $t1, $zero, -0x32
    ctx->r9 = ADD32(0, -0X32);
    // 0x803F29E8: andi        $t0, $t9, 0x1
    ctx->r8 = ctx->r25 & 0X1;
    // 0x803F29EC: beq         $t0, $zero, L_803F2A00
    if (ctx->r8 == 0) {
        // 0x803F29F0: nop
    
            goto L_803F2A00;
    }
    // 0x803F29F0: nop

    // 0x803F29F4: lw          $t2, 0xC8($s0)
    ctx->r10 = MEM_W(ctx->r16, 0XC8);
    // 0x803F29F8: b           L_803F2A0C
    // 0x803F29FC: sh          $t1, 0x93E($t2)
    MEM_H(0X93E, ctx->r10) = ctx->r9;
        goto L_803F2A0C;
    // 0x803F29FC: sh          $t1, 0x93E($t2)
    MEM_H(0X93E, ctx->r10) = ctx->r9;
L_803F2A00:
    // 0x803F2A00: lw          $t4, 0xC8($s0)
    ctx->r12 = MEM_W(ctx->r16, 0XC8);
    // 0x803F2A04: addiu       $t3, $zero, 0x32
    ctx->r11 = ADD32(0, 0X32);
    // 0x803F2A08: sh          $t3, 0x93E($t4)
    MEM_H(0X93E, ctx->r12) = ctx->r11;
L_803F2A0C:
    // 0x803F2A0C: lw          $a1, 0xC8($s0)
    ctx->r5 = MEM_W(ctx->r16, 0XC8);
    // 0x803F2A10: jal         0x803F17BC
    // 0x803F2A14: addiu       $a1, $a1, 0x938
    ctx->r5 = ADD32(ctx->r5, 0X938);
    ovl_803F0000_menu_func_803F17BC(rdram, ctx);
        goto after_0;
    // 0x803F2A14: addiu       $a1, $a1, 0x938
    ctx->r5 = ADD32(ctx->r5, 0X938);
    after_0:
    // 0x803F2A18: lw          $t6, 0xC8($s0)
    ctx->r14 = MEM_W(ctx->r16, 0XC8);
    // 0x803F2A1C: addiu       $t5, $zero, 0xA
    ctx->r13 = ADD32(0, 0XA);
    // 0x803F2A20: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x803F2A24: b           L_803F2A30
    // 0x803F2A28: sh          $t5, 0x93A($t6)
    MEM_H(0X93A, ctx->r14) = ctx->r13;
        goto L_803F2A30;
    // 0x803F2A28: sh          $t5, 0x93A($t6)
    MEM_H(0X93A, ctx->r14) = ctx->r13;
    // 0x803F2A2C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_803F2A30:
    // 0x803F2A30: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x803F2A34: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x803F2A38: jr          $ra
    // 0x803F2A3C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x803F2A3C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void ovl_803F0000_menu_func_803F2A40(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803F2A40: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x803F2A44: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x803F2A48: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x803F2A4C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x803F2A50: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x803F2A54: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x803F2A58: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x803F2A5C: lw          $t6, 0xC8($a0)
    ctx->r14 = MEM_W(ctx->r4, 0XC8);
    // 0x803F2A60: swc1        $f4, 0xB8($a0)
    MEM_W(0XB8, ctx->r4) = ctx->f4.u32l;
    // 0x803F2A64: swc1        $f6, 0x940($t6)
    MEM_W(0X940, ctx->r14) = ctx->f6.u32l;
    // 0x803F2A68: lw          $t7, 0xC8($a0)
    ctx->r15 = MEM_W(ctx->r4, 0XC8);
    // 0x803F2A6C: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x803F2A70: sh          $zero, 0x948($t7)
    MEM_H(0X948, ctx->r15) = 0;
    // 0x803F2A74: lw          $t8, 0xC8($a0)
    ctx->r24 = MEM_W(ctx->r4, 0XC8);
    // 0x803F2A78: nop

    // 0x803F2A7C: sh          $zero, 0x93A($t8)
    MEM_H(0X93A, ctx->r24) = 0;
    // 0x803F2A80: lw          $a2, 0x44($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X44);
    // 0x803F2A84: lw          $a1, 0x4C($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X4C);
    // 0x803F2A88: jal         0x8027200C
    // 0x803F2A8C: nop

    LOOKUP_FUNC(0x8027200C)(rdram, ctx);
        goto after_0;
    // 0x803F2A8C: nop

    after_0:
    // 0x803F2A90: bne         $v0, $zero, L_803F2BFC
    if (ctx->r2 != 0) {
        // 0x803F2A94: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_803F2BFC;
    }
    // 0x803F2A94: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x803F2A98: jal         0x803F0EF0
    // 0x803F2A9C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_803F0000_menu_func_803F0EF0(rdram, ctx);
        goto after_1;
    // 0x803F2A9C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
    // 0x803F2AA0: beq         $v0, $zero, L_803F2BF8
    if (ctx->r2 == 0) {
        // 0x803F2AA4: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_803F2BF8;
    }
    // 0x803F2AA4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x803F2AA8: lw          $a1, 0x4C($v0)
    ctx->r5 = MEM_W(ctx->r2, 0X4C);
    // 0x803F2AAC: lw          $a2, 0x44($v0)
    ctx->r6 = MEM_W(ctx->r2, 0X44);
    // 0x803F2AB0: jal         0x8027200C
    // 0x803F2AB4: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
    LOOKUP_FUNC(0x8027200C)(rdram, ctx);
        goto after_2;
    // 0x803F2AB4: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
    after_2:
    // 0x803F2AB8: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x803F2ABC: bne         $v0, $zero, L_803F2B94
    if (ctx->r2 != 0) {
        // 0x803F2AC0: lui         $at, 0x4120
        ctx->r1 = S32(0X4120 << 16);
            goto L_803F2B94;
    }
    // 0x803F2AC0: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x803F2AC4: lw          $t9, 0xC8($s0)
    ctx->r25 = MEM_W(ctx->r16, 0XC8);
    // 0x803F2AC8: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
    // 0x803F2ACC: sw          $t0, 0x958($t9)
    MEM_W(0X958, ctx->r25) = ctx->r8;
    // 0x803F2AD0: lw          $t2, 0xC8($s0)
    ctx->r10 = MEM_W(ctx->r16, 0XC8);
    // 0x803F2AD4: addiu       $t3, $zero, 0x2
    ctx->r11 = ADD32(0, 0X2);
    // 0x803F2AD8: sh          $t1, 0x938($t2)
    MEM_H(0X938, ctx->r10) = ctx->r9;
    // 0x803F2ADC: lw          $t4, 0xC8($s0)
    ctx->r12 = MEM_W(ctx->r16, 0XC8);
    // 0x803F2AE0: lui         $at, 0x803F
    ctx->r1 = S32(0X803F << 16);
    // 0x803F2AE4: sh          $t3, 0x93A($t4)
    MEM_H(0X93A, ctx->r12) = ctx->r11;
    // 0x803F2AE8: lwc1        $f8, 0x7C84($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X7C84);
    // 0x803F2AEC: lui         $at, 0x4220
    ctx->r1 = S32(0X4220 << 16);
    // 0x803F2AF0: cfc1        $t6, $FpcCsr
    ctx->r14 = get_cop1_cs();
    // 0x803F2AF4: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    // 0x803F2AF8: ctc1        $a3, $FpcCsr
    set_cop1_cs(ctx->r7);
    // 0x803F2AFC: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x803F2B00: lw          $t5, 0xC8($s0)
    ctx->r13 = MEM_W(ctx->r16, 0XC8);
    // 0x803F2B04: cvt.w.s     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.u32l = CVT_W_S(ctx->f10.fl);
    // 0x803F2B08: swc1        $f8, 0x940($t5)
    MEM_W(0X940, ctx->r13) = ctx->f8.u32l;
    // 0x803F2B0C: cfc1        $a3, $FpcCsr
    ctx->r7 = get_cop1_cs();
    // 0x803F2B10: lw          $a1, 0xC8($s0)
    ctx->r5 = MEM_W(ctx->r16, 0XC8);
    // 0x803F2B14: lw          $a2, 0x88($t0)
    ctx->r6 = MEM_W(ctx->r8, 0X88);
    // 0x803F2B18: andi        $a3, $a3, 0x78
    ctx->r7 = ctx->r7 & 0X78;
    // 0x803F2B1C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x803F2B20: beq         $a3, $zero, L_803F2B70
    if (ctx->r7 == 0) {
        // 0x803F2B24: addiu       $a1, $a1, 0x938
        ctx->r5 = ADD32(ctx->r5, 0X938);
            goto L_803F2B70;
    }
    // 0x803F2B24: addiu       $a1, $a1, 0x938
    ctx->r5 = ADD32(ctx->r5, 0X938);
    // 0x803F2B28: lui         $at, 0x4F00
    ctx->r1 = S32(0X4F00 << 16);
    // 0x803F2B2C: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x803F2B30: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    // 0x803F2B34: sub.s       $f16, $f10, $f16
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f16.fl = ctx->f10.fl - ctx->f16.fl;
    // 0x803F2B38: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x803F2B3C: ctc1        $a3, $FpcCsr
    set_cop1_cs(ctx->r7);
    // 0x803F2B40: nop

    // 0x803F2B44: cvt.w.s     $f16, $f16
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    ctx->f16.u32l = CVT_W_S(ctx->f16.fl);
    // 0x803F2B48: cfc1        $a3, $FpcCsr
    ctx->r7 = get_cop1_cs();
    // 0x803F2B4C: nop

    // 0x803F2B50: andi        $a3, $a3, 0x78
    ctx->r7 = ctx->r7 & 0X78;
    // 0x803F2B54: bne         $a3, $zero, L_803F2B68
    if (ctx->r7 != 0) {
        // 0x803F2B58: nop
    
            goto L_803F2B68;
    }
    // 0x803F2B58: nop

    // 0x803F2B5C: mfc1        $a3, $f16
    ctx->r7 = (int32_t)ctx->f16.u32l;
    // 0x803F2B60: b           L_803F2B80
    // 0x803F2B64: or          $a3, $a3, $at
    ctx->r7 = ctx->r7 | ctx->r1;
        goto L_803F2B80;
    // 0x803F2B64: or          $a3, $a3, $at
    ctx->r7 = ctx->r7 | ctx->r1;
L_803F2B68:
    // 0x803F2B68: b           L_803F2B80
    // 0x803F2B6C: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
        goto L_803F2B80;
    // 0x803F2B6C: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
L_803F2B70:
    // 0x803F2B70: mfc1        $a3, $f16
    ctx->r7 = (int32_t)ctx->f16.u32l;
    // 0x803F2B74: nop

    // 0x803F2B78: bltz        $a3, L_803F2B68
    if (SIGNED(ctx->r7) < 0) {
        // 0x803F2B7C: nop
    
            goto L_803F2B68;
    }
    // 0x803F2B7C: nop

L_803F2B80:
    // 0x803F2B80: ctc1        $t6, $FpcCsr
    set_cop1_cs(ctx->r14);
    // 0x803F2B84: jal         0x803F1828
    // 0x803F2B88: nop

    ovl_803F0000_menu_func_803F1828(rdram, ctx);
        goto after_3;
    // 0x803F2B88: nop

    after_3:
    // 0x803F2B8C: b           L_803F34C4
    // 0x803F2B90: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_803F34C4;
    // 0x803F2B90: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_803F2B94:
    // 0x803F2B94: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x803F2B98: lui         $at, 0x803F
    ctx->r1 = S32(0X803F << 16);
    // 0x803F2B9C: swc1        $f18, 0xB8($s0)
    MEM_W(0XB8, ctx->r16) = ctx->f18.u32l;
    // 0x803F2BA0: lwc1        $f4, 0x7C88($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X7C88);
    // 0x803F2BA4: lw          $t7, 0xC8($s0)
    ctx->r15 = MEM_W(ctx->r16, 0XC8);
    // 0x803F2BA8: addiu       $t8, $zero, 0x3
    ctx->r24 = ADD32(0, 0X3);
    // 0x803F2BAC: swc1        $f4, 0x940($t7)
    MEM_W(0X940, ctx->r15) = ctx->f4.u32l;
    // 0x803F2BB0: lw          $t9, 0xC8($s0)
    ctx->r25 = MEM_W(ctx->r16, 0XC8);
    // 0x803F2BB4: addiu       $t4, $zero, 0x4
    ctx->r12 = ADD32(0, 0X4);
    // 0x803F2BB8: sh          $t8, 0x938($t9)
    MEM_H(0X938, ctx->r25) = ctx->r24;
    // 0x803F2BBC: lw          $v1, 0xC8($s0)
    ctx->r3 = MEM_W(ctx->r16, 0XC8);
    // 0x803F2BC0: nop

    // 0x803F2BC4: lw          $t1, 0x24($v1)
    ctx->r9 = MEM_W(ctx->r3, 0X24);
    // 0x803F2BC8: nop

    // 0x803F2BCC: lh          $t2, 0x8B8($t1)
    ctx->r10 = MEM_H(ctx->r9, 0X8B8);
    // 0x803F2BD0: nop

    // 0x803F2BD4: sh          $t2, 0x93C($v1)
    MEM_H(0X93C, ctx->r3) = ctx->r10;
    // 0x803F2BD8: lw          $t3, 0xC8($s0)
    ctx->r11 = MEM_W(ctx->r16, 0XC8);
    // 0x803F2BDC: nop

    // 0x803F2BE0: sh          $zero, 0x93E($t3)
    MEM_H(0X93E, ctx->r11) = 0;
    // 0x803F2BE4: lw          $t5, 0xC8($s0)
    ctx->r13 = MEM_W(ctx->r16, 0XC8);
    // 0x803F2BE8: nop

    // 0x803F2BEC: sh          $t4, 0x93A($t5)
    MEM_H(0X93A, ctx->r13) = ctx->r12;
    // 0x803F2BF0: b           L_803F34C4
    // 0x803F2BF4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_803F34C4;
    // 0x803F2BF4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_803F2BF8:
    // 0x803F2BF8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
L_803F2BFC:
    // 0x803F2BFC: jal         0x803F1990
    // 0x803F2C00: addiu       $a1, $zero, 0xE
    ctx->r5 = ADD32(0, 0XE);
    ovl_803F0000_menu_func_803F1990(rdram, ctx);
        goto after_4;
    // 0x803F2C00: addiu       $a1, $zero, 0xE
    ctx->r5 = ADD32(0, 0XE);
    after_4:
    // 0x803F2C04: beq         $v0, $zero, L_803F2C60
    if (ctx->r2 == 0) {
        // 0x803F2C08: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_803F2C60;
    }
    // 0x803F2C08: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x803F2C0C: lw          $v1, 0xC8($s0)
    ctx->r3 = MEM_W(ctx->r16, 0XC8);
    // 0x803F2C10: nop

    // 0x803F2C14: lbu         $t6, 0x8AC($v1)
    ctx->r14 = MEM_BU(ctx->r3, 0X8AC);
    // 0x803F2C18: nop

    // 0x803F2C1C: beq         $t6, $zero, L_803F2C60
    if (ctx->r14 == 0) {
        // 0x803F2C20: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_803F2C60;
    }
    // 0x803F2C20: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x803F2C24: lh          $t7, 0x8CA($v1)
    ctx->r15 = MEM_H(ctx->r3, 0X8CA);
    // 0x803F2C28: lh          $v0, 0x8B0($v1)
    ctx->r2 = MEM_H(ctx->r3, 0X8B0);
    // 0x803F2C2C: addiu       $t8, $t7, -0x64
    ctx->r24 = ADD32(ctx->r15, -0X64);
    // 0x803F2C30: slt         $at, $t8, $v0
    ctx->r1 = SIGNED(ctx->r24) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x803F2C34: beq         $at, $zero, L_803F2C5C
    if (ctx->r1 == 0) {
        // 0x803F2C38: slti        $at, $v0, 0x158
        ctx->r1 = SIGNED(ctx->r2) < 0X158 ? 1 : 0;
            goto L_803F2C5C;
    }
    // 0x803F2C38: slti        $at, $v0, 0x158
    ctx->r1 = SIGNED(ctx->r2) < 0X158 ? 1 : 0;
    // 0x803F2C3C: beq         $at, $zero, L_803F2C60
    if (ctx->r1 == 0) {
        // 0x803F2C40: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_803F2C60;
    }
    // 0x803F2C40: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x803F2C44: jal         0x803F28A8
    // 0x803F2C48: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_803F0000_menu_func_803F28A8(rdram, ctx);
        goto after_5;
    // 0x803F2C48: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_5:
    // 0x803F2C4C: beq         $v0, $zero, L_803F2C60
    if (ctx->r2 == 0) {
        // 0x803F2C50: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_803F2C60;
    }
    // 0x803F2C50: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x803F2C54: b           L_803F34C4
    // 0x803F2C58: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_803F34C4;
    // 0x803F2C58: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_803F2C5C:
    // 0x803F2C5C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
L_803F2C60:
    // 0x803F2C60: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x803F2C64: jal         0x803F1914
    // 0x803F2C68: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    ovl_803F0000_menu_func_803F1914(rdram, ctx);
        goto after_6;
    // 0x803F2C68: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_6:
    // 0x803F2C6C: beq         $v0, $zero, L_803F2E40
    if (ctx->r2 == 0) {
        // 0x803F2C70: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_803F2E40;
    }
    // 0x803F2C70: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x803F2C74: lw          $v1, 0xC8($s0)
    ctx->r3 = MEM_W(ctx->r16, 0XC8);
    // 0x803F2C78: nop

    // 0x803F2C7C: lbu         $t9, 0x8AC($v1)
    ctx->r25 = MEM_BU(ctx->r3, 0X8AC);
    // 0x803F2C80: nop

    // 0x803F2C84: beq         $t9, $zero, L_803F2E40
    if (ctx->r25 == 0) {
        // 0x803F2C88: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_803F2E40;
    }
    // 0x803F2C88: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x803F2C8C: lw          $t1, 0x24($v1)
    ctx->r9 = MEM_W(ctx->r3, 0X24);
    // 0x803F2C90: lh          $t4, 0x8B0($v1)
    ctx->r12 = MEM_H(ctx->r3, 0X8B0);
    // 0x803F2C94: lh          $t2, 0x8B4($t1)
    ctx->r10 = MEM_H(ctx->r9, 0X8B4);
    // 0x803F2C98: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x803F2C9C: negu        $t3, $t2
    ctx->r11 = SUB32(0, ctx->r10);
    // 0x803F2CA0: subu        $v0, $t3, $t4
    ctx->r2 = SUB32(ctx->r11, ctx->r12);
    // 0x803F2CA4: slti        $at, $v0, 0x12C
    ctx->r1 = SIGNED(ctx->r2) < 0X12C ? 1 : 0;
    // 0x803F2CA8: beq         $at, $zero, L_803F2E3C
    if (ctx->r1 == 0) {
        // 0x803F2CAC: addiu       $a1, $zero, 0x700
        ctx->r5 = ADD32(0, 0X700);
            goto L_803F2E3C;
    }
    // 0x803F2CAC: addiu       $a1, $zero, 0x700
    ctx->r5 = ADD32(0, 0X700);
    // 0x803F2CB0: jal         0x803F11B4
    // 0x803F2CB4: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    ovl_803F0000_menu_func_803F11B4(rdram, ctx);
        goto after_7;
    // 0x803F2CB4: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    after_7:
    // 0x803F2CB8: beq         $v0, $zero, L_803F2E3C
    if (ctx->r2 == 0) {
        // 0x803F2CBC: or          $t0, $v0, $zero
        ctx->r8 = ctx->r2 | 0;
            goto L_803F2E3C;
    }
    // 0x803F2CBC: or          $t0, $v0, $zero
    ctx->r8 = ctx->r2 | 0;
    // 0x803F2CC0: lw          $t5, 0xC8($s0)
    ctx->r13 = MEM_W(ctx->r16, 0XC8);
    // 0x803F2CC4: addiu       $t6, $zero, 0x12
    ctx->r14 = ADD32(0, 0X12);
    // 0x803F2CC8: sw          $v0, 0x958($t5)
    MEM_W(0X958, ctx->r13) = ctx->r2;
    // 0x803F2CCC: lw          $t7, 0xC8($s0)
    ctx->r15 = MEM_W(ctx->r16, 0XC8);
    // 0x803F2CD0: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    // 0x803F2CD4: sh          $t6, 0x938($t7)
    MEM_H(0X938, ctx->r15) = ctx->r14;
    // 0x803F2CD8: lw          $v1, 0xC8($s0)
    ctx->r3 = MEM_W(ctx->r16, 0XC8);
    // 0x803F2CDC: nop

    // 0x803F2CE0: lh          $t8, 0x8B0($v1)
    ctx->r24 = MEM_H(ctx->r3, 0X8B0);
    // 0x803F2CE4: nop

    // 0x803F2CE8: slti        $at, $t8, 0xFB
    ctx->r1 = SIGNED(ctx->r24) < 0XFB ? 1 : 0;
    // 0x803F2CEC: bne         $at, $zero, L_803F2D98
    if (ctx->r1 != 0) {
        // 0x803F2CF0: lui         $at, 0x4220
        ctx->r1 = S32(0X4220 << 16);
            goto L_803F2D98;
    }
    // 0x803F2CF0: lui         $at, 0x4220
    ctx->r1 = S32(0X4220 << 16);
    // 0x803F2CF4: cfc1        $t9, $FpcCsr
    ctx->r25 = get_cop1_cs();
    // 0x803F2CF8: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    // 0x803F2CFC: ctc1        $a3, $FpcCsr
    set_cop1_cs(ctx->r7);
    // 0x803F2D00: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x803F2D04: lw          $a2, 0xB0($s0)
    ctx->r6 = MEM_W(ctx->r16, 0XB0);
    // 0x803F2D08: cvt.w.s     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.u32l = CVT_W_S(ctx->f6.fl);
    // 0x803F2D0C: lui         $at, 0x4F00
    ctx->r1 = S32(0X4F00 << 16);
    // 0x803F2D10: cfc1        $a3, $FpcCsr
    ctx->r7 = get_cop1_cs();
    // 0x803F2D14: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x803F2D18: andi        $a3, $a3, 0x78
    ctx->r7 = ctx->r7 & 0X78;
    // 0x803F2D1C: beq         $a3, $zero, L_803F2D68
    if (ctx->r7 == 0) {
        // 0x803F2D20: addiu       $a1, $v1, 0x938
        ctx->r5 = ADD32(ctx->r3, 0X938);
            goto L_803F2D68;
    }
    // 0x803F2D20: addiu       $a1, $v1, 0x938
    ctx->r5 = ADD32(ctx->r3, 0X938);
    // 0x803F2D24: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x803F2D28: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    // 0x803F2D2C: sub.s       $f8, $f6, $f8
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f8.fl = ctx->f6.fl - ctx->f8.fl;
    // 0x803F2D30: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x803F2D34: ctc1        $a3, $FpcCsr
    set_cop1_cs(ctx->r7);
    // 0x803F2D38: nop

    // 0x803F2D3C: cvt.w.s     $f8, $f8
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 8);
    ctx->f8.u32l = CVT_W_S(ctx->f8.fl);
    // 0x803F2D40: cfc1        $a3, $FpcCsr
    ctx->r7 = get_cop1_cs();
    // 0x803F2D44: nop

    // 0x803F2D48: andi        $a3, $a3, 0x78
    ctx->r7 = ctx->r7 & 0X78;
    // 0x803F2D4C: bne         $a3, $zero, L_803F2D60
    if (ctx->r7 != 0) {
        // 0x803F2D50: nop
    
            goto L_803F2D60;
    }
    // 0x803F2D50: nop

    // 0x803F2D54: mfc1        $a3, $f8
    ctx->r7 = (int32_t)ctx->f8.u32l;
    // 0x803F2D58: b           L_803F2D78
    // 0x803F2D5C: or          $a3, $a3, $at
    ctx->r7 = ctx->r7 | ctx->r1;
        goto L_803F2D78;
    // 0x803F2D5C: or          $a3, $a3, $at
    ctx->r7 = ctx->r7 | ctx->r1;
L_803F2D60:
    // 0x803F2D60: b           L_803F2D78
    // 0x803F2D64: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
        goto L_803F2D78;
    // 0x803F2D64: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
L_803F2D68:
    // 0x803F2D68: mfc1        $a3, $f8
    ctx->r7 = (int32_t)ctx->f8.u32l;
    // 0x803F2D6C: nop

    // 0x803F2D70: bltz        $a3, L_803F2D60
    if (SIGNED(ctx->r7) < 0) {
        // 0x803F2D74: nop
    
            goto L_803F2D60;
    }
    // 0x803F2D74: nop

L_803F2D78:
    // 0x803F2D78: ctc1        $t9, $FpcCsr
    set_cop1_cs(ctx->r25);
    // 0x803F2D7C: jal         0x803F1828
    // 0x803F2D80: nop

    ovl_803F0000_menu_func_803F1828(rdram, ctx);
        goto after_8;
    // 0x803F2D80: nop

    after_8:
    // 0x803F2D84: lw          $t2, 0xC8($s0)
    ctx->r10 = MEM_W(ctx->r16, 0XC8);
    // 0x803F2D88: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
    // 0x803F2D8C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x803F2D90: b           L_803F34C4
    // 0x803F2D94: sh          $t1, 0x93A($t2)
    MEM_H(0X93A, ctx->r10) = ctx->r9;
        goto L_803F34C4;
    // 0x803F2D94: sh          $t1, 0x93A($t2)
    MEM_H(0X93A, ctx->r10) = ctx->r9;
L_803F2D98:
    // 0x803F2D98: lui         $at, 0x4220
    ctx->r1 = S32(0X4220 << 16);
    // 0x803F2D9C: cfc1        $t3, $FpcCsr
    ctx->r11 = get_cop1_cs();
    // 0x803F2DA0: ctc1        $a3, $FpcCsr
    set_cop1_cs(ctx->r7);
    // 0x803F2DA4: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x803F2DA8: lw          $a2, 0x88($t0)
    ctx->r6 = MEM_W(ctx->r8, 0X88);
    // 0x803F2DAC: cvt.w.s     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.u32l = CVT_W_S(ctx->f10.fl);
    // 0x803F2DB0: lui         $at, 0x4F00
    ctx->r1 = S32(0X4F00 << 16);
    // 0x803F2DB4: cfc1        $a3, $FpcCsr
    ctx->r7 = get_cop1_cs();
    // 0x803F2DB8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x803F2DBC: andi        $a3, $a3, 0x78
    ctx->r7 = ctx->r7 & 0X78;
    // 0x803F2DC0: beq         $a3, $zero, L_803F2E0C
    if (ctx->r7 == 0) {
        // 0x803F2DC4: addiu       $a1, $v1, 0x938
        ctx->r5 = ADD32(ctx->r3, 0X938);
            goto L_803F2E0C;
    }
    // 0x803F2DC4: addiu       $a1, $v1, 0x938
    ctx->r5 = ADD32(ctx->r3, 0X938);
    // 0x803F2DC8: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x803F2DCC: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    // 0x803F2DD0: sub.s       $f16, $f10, $f16
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f16.fl = ctx->f10.fl - ctx->f16.fl;
    // 0x803F2DD4: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x803F2DD8: ctc1        $a3, $FpcCsr
    set_cop1_cs(ctx->r7);
    // 0x803F2DDC: nop

    // 0x803F2DE0: cvt.w.s     $f16, $f16
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    ctx->f16.u32l = CVT_W_S(ctx->f16.fl);
    // 0x803F2DE4: cfc1        $a3, $FpcCsr
    ctx->r7 = get_cop1_cs();
    // 0x803F2DE8: nop

    // 0x803F2DEC: andi        $a3, $a3, 0x78
    ctx->r7 = ctx->r7 & 0X78;
    // 0x803F2DF0: bne         $a3, $zero, L_803F2E04
    if (ctx->r7 != 0) {
        // 0x803F2DF4: nop
    
            goto L_803F2E04;
    }
    // 0x803F2DF4: nop

    // 0x803F2DF8: mfc1        $a3, $f16
    ctx->r7 = (int32_t)ctx->f16.u32l;
    // 0x803F2DFC: b           L_803F2E1C
    // 0x803F2E00: or          $a3, $a3, $at
    ctx->r7 = ctx->r7 | ctx->r1;
        goto L_803F2E1C;
    // 0x803F2E00: or          $a3, $a3, $at
    ctx->r7 = ctx->r7 | ctx->r1;
L_803F2E04:
    // 0x803F2E04: b           L_803F2E1C
    // 0x803F2E08: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
        goto L_803F2E1C;
    // 0x803F2E08: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
L_803F2E0C:
    // 0x803F2E0C: mfc1        $a3, $f16
    ctx->r7 = (int32_t)ctx->f16.u32l;
    // 0x803F2E10: nop

    // 0x803F2E14: bltz        $a3, L_803F2E04
    if (SIGNED(ctx->r7) < 0) {
        // 0x803F2E18: nop
    
            goto L_803F2E04;
    }
    // 0x803F2E18: nop

L_803F2E1C:
    // 0x803F2E1C: ctc1        $t3, $FpcCsr
    set_cop1_cs(ctx->r11);
    // 0x803F2E20: jal         0x803F1828
    // 0x803F2E24: nop

    ovl_803F0000_menu_func_803F1828(rdram, ctx);
        goto after_9;
    // 0x803F2E24: nop

    after_9:
    // 0x803F2E28: lw          $t5, 0xC8($s0)
    ctx->r13 = MEM_W(ctx->r16, 0XC8);
    // 0x803F2E2C: addiu       $t4, $zero, 0x5
    ctx->r12 = ADD32(0, 0X5);
    // 0x803F2E30: sh          $t4, 0x93A($t5)
    MEM_H(0X93A, ctx->r13) = ctx->r12;
    // 0x803F2E34: b           L_803F34C4
    // 0x803F2E38: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_803F34C4;
    // 0x803F2E38: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_803F2E3C:
    // 0x803F2E3C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
L_803F2E40:
    // 0x803F2E40: jal         0x803F1990
    // 0x803F2E44: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
    ovl_803F0000_menu_func_803F1990(rdram, ctx);
        goto after_10;
    // 0x803F2E44: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
    after_10:
    // 0x803F2E48: beq         $v0, $zero, L_803F2EB8
    if (ctx->r2 == 0) {
        // 0x803F2E4C: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_803F2EB8;
    }
    // 0x803F2E4C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x803F2E50: lw          $t6, 0xC8($s0)
    ctx->r14 = MEM_W(ctx->r16, 0XC8);
    // 0x803F2E54: nop

    // 0x803F2E58: lh          $v0, 0x8B0($t6)
    ctx->r2 = MEM_H(ctx->r14, 0X8B0);
    // 0x803F2E5C: nop

    // 0x803F2E60: slti        $at, $v0, 0x108
    ctx->r1 = SIGNED(ctx->r2) < 0X108 ? 1 : 0;
    // 0x803F2E64: beq         $at, $zero, L_803F2EB4
    if (ctx->r1 == 0) {
        // 0x803F2E68: slti        $at, $v0, 0x97
        ctx->r1 = SIGNED(ctx->r2) < 0X97 ? 1 : 0;
            goto L_803F2EB4;
    }
    // 0x803F2E68: slti        $at, $v0, 0x97
    ctx->r1 = SIGNED(ctx->r2) < 0X97 ? 1 : 0;
    // 0x803F2E6C: bne         $at, $zero, L_803F2EB4
    if (ctx->r1 != 0) {
        // 0x803F2E70: lui         $t7, 0x8009
        ctx->r15 = S32(0X8009 << 16);
            goto L_803F2EB4;
    }
    // 0x803F2E70: lui         $t7, 0x8009
    ctx->r15 = S32(0X8009 << 16);
    // 0x803F2E74: lw          $t7, 0x3B20($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X3B20);
    // 0x803F2E78: nop

    // 0x803F2E7C: lwc1        $f12, 0x0($t7)
    ctx->f12.u32l = MEM_W(ctx->r15, 0X0);
    // 0x803F2E80: jal         0x80272AEC
    // 0x803F2E84: nop

    LOOKUP_FUNC(0x80272AEC)(rdram, ctx);
        goto after_11;
    // 0x803F2E84: nop

    after_11:
    // 0x803F2E88: lui         $at, 0x437B
    ctx->r1 = S32(0X437B << 16);
    // 0x803F2E8C: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x803F2E90: nop

    // 0x803F2E94: c.lt.s      $f18, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f18.fl < ctx->f0.fl;
    // 0x803F2E98: nop

    // 0x803F2E9C: bc1f        L_803F2EB8
    if (!c1cs) {
        // 0x803F2EA0: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_803F2EB8;
    }
    // 0x803F2EA0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x803F2EA4: jal         0x803F34D4
    // 0x803F2EA8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_803F0000_menu_func_803F34D4(rdram, ctx);
        goto after_12;
    // 0x803F2EA8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_12:
    // 0x803F2EAC: b           L_803F34C4
    // 0x803F2EB0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_803F34C4;
    // 0x803F2EB0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_803F2EB4:
    // 0x803F2EB4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
L_803F2EB8:
    // 0x803F2EB8: jal         0x803F1990
    // 0x803F2EBC: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    ovl_803F0000_menu_func_803F1990(rdram, ctx);
        goto after_13;
    // 0x803F2EBC: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    after_13:
    // 0x803F2EC0: beq         $v0, $zero, L_803F2FE4
    if (ctx->r2 == 0) {
        // 0x803F2EC4: lui         $t8, 0x8009
        ctx->r24 = S32(0X8009 << 16);
            goto L_803F2FE4;
    }
    // 0x803F2EC4: lui         $t8, 0x8009
    ctx->r24 = S32(0X8009 << 16);
    // 0x803F2EC8: lw          $t8, 0x3B20($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X3B20);
    // 0x803F2ECC: nop

    // 0x803F2ED0: lwc1        $f12, 0x0($t8)
    ctx->f12.u32l = MEM_W(ctx->r24, 0X0);
    // 0x803F2ED4: jal         0x80272AEC
    // 0x803F2ED8: nop

    LOOKUP_FUNC(0x80272AEC)(rdram, ctx);
        goto after_14;
    // 0x803F2ED8: nop

    after_14:
    // 0x803F2EDC: lw          $t9, 0xC8($s0)
    ctx->r25 = MEM_W(ctx->r16, 0XC8);
    // 0x803F2EE0: nop

    // 0x803F2EE4: lh          $v0, 0x8B0($t9)
    ctx->r2 = MEM_H(ctx->r25, 0X8B0);
    // 0x803F2EE8: nop

    // 0x803F2EEC: slti        $at, $v0, 0x108
    ctx->r1 = SIGNED(ctx->r2) < 0X108 ? 1 : 0;
    // 0x803F2EF0: beq         $at, $zero, L_803F2FE4
    if (ctx->r1 == 0) {
        // 0x803F2EF4: slti        $at, $v0, -0x107
        ctx->r1 = SIGNED(ctx->r2) < -0X107 ? 1 : 0;
            goto L_803F2FE4;
    }
    // 0x803F2EF4: slti        $at, $v0, -0x107
    ctx->r1 = SIGNED(ctx->r2) < -0X107 ? 1 : 0;
    // 0x803F2EF8: bne         $at, $zero, L_803F2FE4
    if (ctx->r1 != 0) {
        // 0x803F2EFC: lui         $at, 0x4348
        ctx->r1 = S32(0X4348 << 16);
            goto L_803F2FE4;
    }
    // 0x803F2EFC: lui         $at, 0x4348
    ctx->r1 = S32(0X4348 << 16);
    // 0x803F2F00: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x803F2F04: lui         $a1, 0x803F
    ctx->r5 = S32(0X803F << 16);
    // 0x803F2F08: c.lt.s      $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f0.fl < ctx->f4.fl;
    // 0x803F2F0C: addiu       $a1, $a1, 0x74C8
    ctx->r5 = ADD32(ctx->r5, 0X74C8);
    // 0x803F2F10: bc1f        L_803F2FE4
    if (!c1cs) {
        // 0x803F2F14: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_803F2FE4;
    }
    // 0x803F2F14: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x803F2F18: jal         0x803F1508
    // 0x803F2F1C: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    ovl_803F0000_menu_func_803F1508(rdram, ctx);
        goto after_15;
    // 0x803F2F1C: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    after_15:
    // 0x803F2F20: beq         $v0, $zero, L_803F2FE4
    if (ctx->r2 == 0) {
        // 0x803F2F24: addiu       $t2, $zero, 0x11
        ctx->r10 = ADD32(0, 0X11);
            goto L_803F2FE4;
    }
    // 0x803F2F24: addiu       $t2, $zero, 0x11
    ctx->r10 = ADD32(0, 0X11);
    // 0x803F2F28: lw          $t1, 0xC8($s0)
    ctx->r9 = MEM_W(ctx->r16, 0XC8);
    // 0x803F2F2C: lui         $at, 0x4220
    ctx->r1 = S32(0X4220 << 16);
    // 0x803F2F30: cfc1        $t4, $FpcCsr
    ctx->r12 = get_cop1_cs();
    // 0x803F2F34: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    // 0x803F2F38: ctc1        $a3, $FpcCsr
    set_cop1_cs(ctx->r7);
    // 0x803F2F3C: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x803F2F40: sw          $v0, 0x958($t1)
    MEM_W(0X958, ctx->r9) = ctx->r2;
    // 0x803F2F44: lw          $t3, 0xC8($s0)
    ctx->r11 = MEM_W(ctx->r16, 0XC8);
    // 0x803F2F48: cvt.w.s     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.u32l = CVT_W_S(ctx->f6.fl);
    // 0x803F2F4C: sh          $t2, 0x938($t3)
    MEM_H(0X938, ctx->r11) = ctx->r10;
    // 0x803F2F50: cfc1        $a3, $FpcCsr
    ctx->r7 = get_cop1_cs();
    // 0x803F2F54: lw          $a1, 0xC8($s0)
    ctx->r5 = MEM_W(ctx->r16, 0XC8);
    // 0x803F2F58: lw          $a2, 0x88($v0)
    ctx->r6 = MEM_W(ctx->r2, 0X88);
    // 0x803F2F5C: andi        $a3, $a3, 0x78
    ctx->r7 = ctx->r7 & 0X78;
    // 0x803F2F60: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x803F2F64: beq         $a3, $zero, L_803F2FB4
    if (ctx->r7 == 0) {
        // 0x803F2F68: addiu       $a1, $a1, 0x938
        ctx->r5 = ADD32(ctx->r5, 0X938);
            goto L_803F2FB4;
    }
    // 0x803F2F68: addiu       $a1, $a1, 0x938
    ctx->r5 = ADD32(ctx->r5, 0X938);
    // 0x803F2F6C: lui         $at, 0x4F00
    ctx->r1 = S32(0X4F00 << 16);
    // 0x803F2F70: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x803F2F74: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    // 0x803F2F78: sub.s       $f8, $f6, $f8
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f8.fl = ctx->f6.fl - ctx->f8.fl;
    // 0x803F2F7C: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x803F2F80: ctc1        $a3, $FpcCsr
    set_cop1_cs(ctx->r7);
    // 0x803F2F84: nop

    // 0x803F2F88: cvt.w.s     $f8, $f8
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 8);
    ctx->f8.u32l = CVT_W_S(ctx->f8.fl);
    // 0x803F2F8C: cfc1        $a3, $FpcCsr
    ctx->r7 = get_cop1_cs();
    // 0x803F2F90: nop

    // 0x803F2F94: andi        $a3, $a3, 0x78
    ctx->r7 = ctx->r7 & 0X78;
    // 0x803F2F98: bne         $a3, $zero, L_803F2FAC
    if (ctx->r7 != 0) {
        // 0x803F2F9C: nop
    
            goto L_803F2FAC;
    }
    // 0x803F2F9C: nop

    // 0x803F2FA0: mfc1        $a3, $f8
    ctx->r7 = (int32_t)ctx->f8.u32l;
    // 0x803F2FA4: b           L_803F2FC4
    // 0x803F2FA8: or          $a3, $a3, $at
    ctx->r7 = ctx->r7 | ctx->r1;
        goto L_803F2FC4;
    // 0x803F2FA8: or          $a3, $a3, $at
    ctx->r7 = ctx->r7 | ctx->r1;
L_803F2FAC:
    // 0x803F2FAC: b           L_803F2FC4
    // 0x803F2FB0: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
        goto L_803F2FC4;
    // 0x803F2FB0: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
L_803F2FB4:
    // 0x803F2FB4: mfc1        $a3, $f8
    ctx->r7 = (int32_t)ctx->f8.u32l;
    // 0x803F2FB8: nop

    // 0x803F2FBC: bltz        $a3, L_803F2FAC
    if (SIGNED(ctx->r7) < 0) {
        // 0x803F2FC0: nop
    
            goto L_803F2FAC;
    }
    // 0x803F2FC0: nop

L_803F2FC4:
    // 0x803F2FC4: ctc1        $t4, $FpcCsr
    set_cop1_cs(ctx->r12);
    // 0x803F2FC8: jal         0x803F1828
    // 0x803F2FCC: nop

    ovl_803F0000_menu_func_803F1828(rdram, ctx);
        goto after_16;
    // 0x803F2FCC: nop

    after_16:
    // 0x803F2FD0: lw          $t6, 0xC8($s0)
    ctx->r14 = MEM_W(ctx->r16, 0XC8);
    // 0x803F2FD4: addiu       $t5, $zero, 0x5
    ctx->r13 = ADD32(0, 0X5);
    // 0x803F2FD8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x803F2FDC: b           L_803F34C4
    // 0x803F2FE0: sh          $t5, 0x93A($t6)
    MEM_H(0X93A, ctx->r14) = ctx->r13;
        goto L_803F34C4;
    // 0x803F2FE0: sh          $t5, 0x93A($t6)
    MEM_H(0X93A, ctx->r14) = ctx->r13;
L_803F2FE4:
    // 0x803F2FE4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x803F2FE8: jal         0x803F1990
    // 0x803F2FEC: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    ovl_803F0000_menu_func_803F1990(rdram, ctx);
        goto after_17;
    // 0x803F2FEC: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_17:
    // 0x803F2FF0: beq         $v0, $zero, L_803F3034
    if (ctx->r2 == 0) {
        // 0x803F2FF4: nop
    
            goto L_803F3034;
    }
    // 0x803F2FF4: nop

    // 0x803F2FF8: lw          $v1, 0xC8($s0)
    ctx->r3 = MEM_W(ctx->r16, 0XC8);
    // 0x803F2FFC: nop

    // 0x803F3000: lh          $t7, 0x8CA($v1)
    ctx->r15 = MEM_H(ctx->r3, 0X8CA);
    // 0x803F3004: lh          $t8, 0x8B0($v1)
    ctx->r24 = MEM_H(ctx->r3, 0X8B0);
    // 0x803F3008: nop

    // 0x803F300C: subu        $t9, $t7, $t8
    ctx->r25 = SUB32(ctx->r15, ctx->r24);
    // 0x803F3010: slti        $at, $t9, 0xFB
    ctx->r1 = SIGNED(ctx->r25) < 0XFB ? 1 : 0;
    // 0x803F3014: bne         $at, $zero, L_803F3034
    if (ctx->r1 != 0) {
        // 0x803F3018: nop
    
            goto L_803F3034;
    }
    // 0x803F3018: nop

    // 0x803F301C: jal         0x803F282C
    // 0x803F3020: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_803F0000_menu_func_803F282C(rdram, ctx);
        goto after_18;
    // 0x803F3020: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_18:
    // 0x803F3024: beq         $v0, $zero, L_803F3034
    if (ctx->r2 == 0) {
        // 0x803F3028: nop
    
            goto L_803F3034;
    }
    // 0x803F3028: nop

    // 0x803F302C: b           L_803F34C4
    // 0x803F3030: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_803F34C4;
    // 0x803F3030: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_803F3034:
    // 0x803F3034: lw          $t1, 0xD4($s0)
    ctx->r9 = MEM_W(ctx->r16, 0XD4);
    // 0x803F3038: nop

    // 0x803F303C: lbu         $t2, 0x5($t1)
    ctx->r10 = MEM_BU(ctx->r9, 0X5);
    // 0x803F3040: nop

    // 0x803F3044: sltiu       $at, $t2, 0xB
    ctx->r1 = ctx->r10 < 0XB ? 1 : 0;
    // 0x803F3048: beq         $at, $zero, L_803F3418
    if (ctx->r1 == 0) {
        // 0x803F304C: sll         $t2, $t2, 2
        ctx->r10 = S32(ctx->r10 << 2);
            goto L_803F3418;
    }
    // 0x803F304C: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x803F3050: lui         $at, 0x803F
    ctx->r1 = S32(0X803F << 16);
    // 0x803F3054: addu        $at, $at, $t2
    gpr jr_addend_803F3060 = ctx->r10;
    ctx->r1 = ADD32(ctx->r1, ctx->r10);
    // 0x803F3058: lw          $t2, 0x7C8C($at)
    ctx->r10 = ADD32(ctx->r1, 0X7C8C);
    // 0x803F305C: nop

    // 0x803F3060: jr          $t2
    // 0x803F3064: nop

    switch (jr_addend_803F3060 >> 2) {
        case 0: goto L_803F3068; break;
        case 1: goto L_803F3068; break;
        case 2: goto L_803F3068; break;
        case 3: goto L_803F3068; break;
        case 4: goto L_803F3090; break;
        case 5: goto L_803F3090; break;
        case 6: goto L_803F3194; break;
        case 7: goto L_803F3194; break;
        case 8: goto L_803F32EC; break;
        case 9: goto L_803F3338; break;
        case 10: goto L_803F3338; break;
        default: switch_error(__func__, 0x803F3060, 0x803F7C8C);
    }
    // 0x803F3064: nop

L_803F3068:
    // 0x803F3068: lui         $a1, 0x803F
    ctx->r5 = S32(0X803F << 16);
    // 0x803F306C: addiu       $a1, $a1, 0x7438
    ctx->r5 = ADD32(ctx->r5, 0X7438);
    // 0x803F3070: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x803F3074: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    // 0x803F3078: jal         0x803F2748
    // 0x803F307C: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    ovl_803F0000_menu_func_803F2748(rdram, ctx);
        goto after_19;
    // 0x803F307C: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_19:
    // 0x803F3080: beq         $v0, $zero, L_803F3418
    if (ctx->r2 == 0) {
        // 0x803F3084: nop
    
            goto L_803F3418;
    }
    // 0x803F3084: nop

    // 0x803F3088: b           L_803F34C4
    // 0x803F308C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_803F34C4;
    // 0x803F308C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_803F3090:
    // 0x803F3090: lw          $t3, 0xC8($s0)
    ctx->r11 = MEM_W(ctx->r16, 0XC8);
    // 0x803F3094: lui         $a1, 0x803F
    ctx->r5 = S32(0X803F << 16);
    // 0x803F3098: lh          $t4, 0x8B0($t3)
    ctx->r12 = MEM_H(ctx->r11, 0X8B0);
    // 0x803F309C: addiu       $a1, $a1, 0x745C
    ctx->r5 = ADD32(ctx->r5, 0X745C);
    // 0x803F30A0: blez        $t4, L_803F3154
    if (SIGNED(ctx->r12) <= 0) {
        // 0x803F30A4: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_803F3154;
    }
    // 0x803F30A4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x803F30A8: lui         $a1, 0x803F
    ctx->r5 = S32(0X803F << 16);
    // 0x803F30AC: addiu       $a1, $a1, 0x744C
    ctx->r5 = ADD32(ctx->r5, 0X744C);
    // 0x803F30B0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x803F30B4: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x803F30B8: jal         0x803F2748
    // 0x803F30BC: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    ovl_803F0000_menu_func_803F2748(rdram, ctx);
        goto after_20;
    // 0x803F30BC: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_20:
    // 0x803F30C0: beq         $v0, $zero, L_803F30D0
    if (ctx->r2 == 0) {
        // 0x803F30C4: nop
    
            goto L_803F30D0;
    }
    // 0x803F30C4: nop

    // 0x803F30C8: b           L_803F34C4
    // 0x803F30CC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_803F34C4;
    // 0x803F30CC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_803F30D0:
    // 0x803F30D0: lw          $t5, 0xC8($s0)
    ctx->r13 = MEM_W(ctx->r16, 0XC8);
    // 0x803F30D4: lui         $a1, 0x803F
    ctx->r5 = S32(0X803F << 16);
    // 0x803F30D8: lh          $t6, 0x8B0($t5)
    ctx->r14 = MEM_H(ctx->r13, 0X8B0);
    // 0x803F30DC: addiu       $a1, $a1, 0x745C
    ctx->r5 = ADD32(ctx->r5, 0X745C);
    // 0x803F30E0: slti        $at, $t6, 0xC9
    ctx->r1 = SIGNED(ctx->r14) < 0XC9 ? 1 : 0;
    // 0x803F30E4: bne         $at, $zero, L_803F3114
    if (ctx->r1 != 0) {
        // 0x803F30E8: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_803F3114;
    }
    // 0x803F30E8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x803F30EC: lui         $a1, 0x803F
    ctx->r5 = S32(0X803F << 16);
    // 0x803F30F0: addiu       $a1, $a1, 0x7450
    ctx->r5 = ADD32(ctx->r5, 0X7450);
    // 0x803F30F4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x803F30F8: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    // 0x803F30FC: jal         0x803F2748
    // 0x803F3100: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    ovl_803F0000_menu_func_803F2748(rdram, ctx);
        goto after_21;
    // 0x803F3100: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_21:
    // 0x803F3104: beq         $v0, $zero, L_803F3418
    if (ctx->r2 == 0) {
        // 0x803F3108: nop
    
            goto L_803F3418;
    }
    // 0x803F3108: nop

    // 0x803F310C: b           L_803F34C4
    // 0x803F3110: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_803F34C4;
    // 0x803F3110: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_803F3114:
    // 0x803F3114: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x803F3118: jal         0x803F2748
    // 0x803F311C: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    ovl_803F0000_menu_func_803F2748(rdram, ctx);
        goto after_22;
    // 0x803F311C: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_22:
    // 0x803F3120: beq         $v0, $zero, L_803F3130
    if (ctx->r2 == 0) {
        // 0x803F3124: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_803F3130;
    }
    // 0x803F3124: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x803F3128: b           L_803F34C4
    // 0x803F312C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_803F34C4;
    // 0x803F312C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_803F3130:
    // 0x803F3130: lui         $a1, 0x803F
    ctx->r5 = S32(0X803F << 16);
    // 0x803F3134: addiu       $a1, $a1, 0x7440
    ctx->r5 = ADD32(ctx->r5, 0X7440);
    // 0x803F3138: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    // 0x803F313C: jal         0x803F2748
    // 0x803F3140: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    ovl_803F0000_menu_func_803F2748(rdram, ctx);
        goto after_23;
    // 0x803F3140: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_23:
    // 0x803F3144: beq         $v0, $zero, L_803F3418
    if (ctx->r2 == 0) {
        // 0x803F3148: nop
    
            goto L_803F3418;
    }
    // 0x803F3148: nop

    // 0x803F314C: b           L_803F34C4
    // 0x803F3150: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_803F34C4;
    // 0x803F3150: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_803F3154:
    // 0x803F3154: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x803F3158: jal         0x803F2748
    // 0x803F315C: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    ovl_803F0000_menu_func_803F2748(rdram, ctx);
        goto after_24;
    // 0x803F315C: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_24:
    // 0x803F3160: beq         $v0, $zero, L_803F3170
    if (ctx->r2 == 0) {
        // 0x803F3164: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_803F3170;
    }
    // 0x803F3164: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x803F3168: b           L_803F34C4
    // 0x803F316C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_803F34C4;
    // 0x803F316C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_803F3170:
    // 0x803F3170: lui         $a1, 0x803F
    ctx->r5 = S32(0X803F << 16);
    // 0x803F3174: addiu       $a1, $a1, 0x7440
    ctx->r5 = ADD32(ctx->r5, 0X7440);
    // 0x803F3178: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    // 0x803F317C: jal         0x803F2748
    // 0x803F3180: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    ovl_803F0000_menu_func_803F2748(rdram, ctx);
        goto after_25;
    // 0x803F3180: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_25:
    // 0x803F3184: beq         $v0, $zero, L_803F3418
    if (ctx->r2 == 0) {
        // 0x803F3188: nop
    
            goto L_803F3418;
    }
    // 0x803F3188: nop

    // 0x803F318C: b           L_803F34C4
    // 0x803F3190: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_803F34C4;
    // 0x803F3190: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_803F3194:
    // 0x803F3194: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x803F3198: jal         0x803F1990
    // 0x803F319C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    ovl_803F0000_menu_func_803F1990(rdram, ctx);
        goto after_26;
    // 0x803F319C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_26:
    // 0x803F31A0: beq         $v0, $zero, L_803F32A0
    if (ctx->r2 == 0) {
        // 0x803F31A4: nop
    
            goto L_803F32A0;
    }
    // 0x803F31A4: nop

    // 0x803F31A8: lw          $t7, 0xC8($s0)
    ctx->r15 = MEM_W(ctx->r16, 0XC8);
    // 0x803F31AC: lui         $a1, 0x803F
    ctx->r5 = S32(0X803F << 16);
    // 0x803F31B0: lh          $v0, 0x8B0($t7)
    ctx->r2 = MEM_H(ctx->r15, 0X8B0);
    // 0x803F31B4: addiu       $a1, $a1, 0x747C
    ctx->r5 = ADD32(ctx->r5, 0X747C);
    // 0x803F31B8: slti        $at, $v0, 0x65
    ctx->r1 = SIGNED(ctx->r2) < 0X65 ? 1 : 0;
    // 0x803F31BC: bne         $at, $zero, L_803F3204
    if (ctx->r1 != 0) {
        // 0x803F31C0: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_803F3204;
    }
    // 0x803F31C0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x803F31C4: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    // 0x803F31C8: jal         0x803F2748
    // 0x803F31CC: addiu       $a3, $zero, 0x12
    ctx->r7 = ADD32(0, 0X12);
    ovl_803F0000_menu_func_803F2748(rdram, ctx);
        goto after_27;
    // 0x803F31CC: addiu       $a3, $zero, 0x12
    ctx->r7 = ADD32(0, 0X12);
    after_27:
    // 0x803F31D0: beq         $v0, $zero, L_803F31E0
    if (ctx->r2 == 0) {
        // 0x803F31D4: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_803F31E0;
    }
    // 0x803F31D4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x803F31D8: b           L_803F34C4
    // 0x803F31DC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_803F34C4;
    // 0x803F31DC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_803F31E0:
    // 0x803F31E0: lui         $a1, 0x803F
    ctx->r5 = S32(0X803F << 16);
    // 0x803F31E4: addiu       $a1, $a1, 0x7474
    ctx->r5 = ADD32(ctx->r5, 0X7474);
    // 0x803F31E8: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x803F31EC: jal         0x803F2748
    // 0x803F31F0: addiu       $a3, $zero, 0x12
    ctx->r7 = ADD32(0, 0X12);
    ovl_803F0000_menu_func_803F2748(rdram, ctx);
        goto after_28;
    // 0x803F31F0: addiu       $a3, $zero, 0x12
    ctx->r7 = ADD32(0, 0X12);
    after_28:
    // 0x803F31F4: beq         $v0, $zero, L_803F32A0
    if (ctx->r2 == 0) {
        // 0x803F31F8: nop
    
            goto L_803F32A0;
    }
    // 0x803F31F8: nop

    // 0x803F31FC: b           L_803F34C4
    // 0x803F3200: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_803F34C4;
    // 0x803F3200: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_803F3204:
    // 0x803F3204: blez        $v0, L_803F327C
    if (SIGNED(ctx->r2) <= 0) {
        // 0x803F3208: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_803F327C;
    }
    // 0x803F3208: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x803F320C: lui         $a1, 0x803F
    ctx->r5 = S32(0X803F << 16);
    // 0x803F3210: addiu       $a1, $a1, 0x7484
    ctx->r5 = ADD32(ctx->r5, 0X7484);
    // 0x803F3214: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x803F3218: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    // 0x803F321C: jal         0x803F2748
    // 0x803F3220: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    ovl_803F0000_menu_func_803F2748(rdram, ctx);
        goto after_29;
    // 0x803F3220: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_29:
    // 0x803F3224: beq         $v0, $zero, L_803F3234
    if (ctx->r2 == 0) {
        // 0x803F3228: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_803F3234;
    }
    // 0x803F3228: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x803F322C: b           L_803F34C4
    // 0x803F3230: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_803F34C4;
    // 0x803F3230: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_803F3234:
    // 0x803F3234: lui         $a1, 0x803F
    ctx->r5 = S32(0X803F << 16);
    // 0x803F3238: addiu       $a1, $a1, 0x746C
    ctx->r5 = ADD32(ctx->r5, 0X746C);
    // 0x803F323C: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    // 0x803F3240: jal         0x803F2748
    // 0x803F3244: addiu       $a3, $zero, 0x12
    ctx->r7 = ADD32(0, 0X12);
    ovl_803F0000_menu_func_803F2748(rdram, ctx);
        goto after_30;
    // 0x803F3244: addiu       $a3, $zero, 0x12
    ctx->r7 = ADD32(0, 0X12);
    after_30:
    // 0x803F3248: beq         $v0, $zero, L_803F3258
    if (ctx->r2 == 0) {
        // 0x803F324C: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_803F3258;
    }
    // 0x803F324C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x803F3250: b           L_803F34C4
    // 0x803F3254: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_803F34C4;
    // 0x803F3254: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_803F3258:
    // 0x803F3258: lui         $a1, 0x803F
    ctx->r5 = S32(0X803F << 16);
    // 0x803F325C: addiu       $a1, $a1, 0x7460
    ctx->r5 = ADD32(ctx->r5, 0X7460);
    // 0x803F3260: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x803F3264: jal         0x803F2748
    // 0x803F3268: addiu       $a3, $zero, 0x12
    ctx->r7 = ADD32(0, 0X12);
    ovl_803F0000_menu_func_803F2748(rdram, ctx);
        goto after_31;
    // 0x803F3268: addiu       $a3, $zero, 0x12
    ctx->r7 = ADD32(0, 0X12);
    after_31:
    // 0x803F326C: beq         $v0, $zero, L_803F32A0
    if (ctx->r2 == 0) {
        // 0x803F3270: nop
    
            goto L_803F32A0;
    }
    // 0x803F3270: nop

    // 0x803F3274: b           L_803F34C4
    // 0x803F3278: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_803F34C4;
    // 0x803F3278: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_803F327C:
    // 0x803F327C: lui         $a1, 0x803F
    ctx->r5 = S32(0X803F << 16);
    // 0x803F3280: addiu       $a1, $a1, 0x748C
    ctx->r5 = ADD32(ctx->r5, 0X748C);
    // 0x803F3284: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x803F3288: jal         0x803F2748
    // 0x803F328C: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    ovl_803F0000_menu_func_803F2748(rdram, ctx);
        goto after_32;
    // 0x803F328C: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_32:
    // 0x803F3290: beq         $v0, $zero, L_803F32A0
    if (ctx->r2 == 0) {
        // 0x803F3294: nop
    
            goto L_803F32A0;
    }
    // 0x803F3294: nop

    // 0x803F3298: b           L_803F34C4
    // 0x803F329C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_803F34C4;
    // 0x803F329C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_803F32A0:
    // 0x803F32A0: lui         $a1, 0x803F
    ctx->r5 = S32(0X803F << 16);
    // 0x803F32A4: addiu       $a1, $a1, 0x7464
    ctx->r5 = ADD32(ctx->r5, 0X7464);
    // 0x803F32A8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x803F32AC: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    // 0x803F32B0: jal         0x803F2748
    // 0x803F32B4: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    ovl_803F0000_menu_func_803F2748(rdram, ctx);
        goto after_33;
    // 0x803F32B4: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_33:
    // 0x803F32B8: beq         $v0, $zero, L_803F32C8
    if (ctx->r2 == 0) {
        // 0x803F32BC: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_803F32C8;
    }
    // 0x803F32BC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x803F32C0: b           L_803F34C4
    // 0x803F32C4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_803F34C4;
    // 0x803F32C4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_803F32C8:
    // 0x803F32C8: lui         $a1, 0x803F
    ctx->r5 = S32(0X803F << 16);
    // 0x803F32CC: addiu       $a1, $a1, 0x7478
    ctx->r5 = ADD32(ctx->r5, 0X7478);
    // 0x803F32D0: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x803F32D4: jal         0x803F2748
    // 0x803F32D8: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    ovl_803F0000_menu_func_803F2748(rdram, ctx);
        goto after_34;
    // 0x803F32D8: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_34:
    // 0x803F32DC: beq         $v0, $zero, L_803F3418
    if (ctx->r2 == 0) {
        // 0x803F32E0: nop
    
            goto L_803F3418;
    }
    // 0x803F32E0: nop

    // 0x803F32E4: b           L_803F34C4
    // 0x803F32E8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_803F34C4;
    // 0x803F32E8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_803F32EC:
    // 0x803F32EC: lui         $a1, 0x803F
    ctx->r5 = S32(0X803F << 16);
    // 0x803F32F0: addiu       $a1, $a1, 0x74AC
    ctx->r5 = ADD32(ctx->r5, 0X74AC);
    // 0x803F32F4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x803F32F8: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    // 0x803F32FC: jal         0x803F2748
    // 0x803F3300: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    ovl_803F0000_menu_func_803F2748(rdram, ctx);
        goto after_35;
    // 0x803F3300: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_35:
    // 0x803F3304: beq         $v0, $zero, L_803F3314
    if (ctx->r2 == 0) {
        // 0x803F3308: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_803F3314;
    }
    // 0x803F3308: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x803F330C: b           L_803F34C4
    // 0x803F3310: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_803F34C4;
    // 0x803F3310: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_803F3314:
    // 0x803F3314: lui         $a1, 0x803F
    ctx->r5 = S32(0X803F << 16);
    // 0x803F3318: addiu       $a1, $a1, 0x7498
    ctx->r5 = ADD32(ctx->r5, 0X7498);
    // 0x803F331C: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x803F3320: jal         0x803F2748
    // 0x803F3324: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    ovl_803F0000_menu_func_803F2748(rdram, ctx);
        goto after_36;
    // 0x803F3324: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_36:
    // 0x803F3328: beq         $v0, $zero, L_803F3418
    if (ctx->r2 == 0) {
        // 0x803F332C: nop
    
            goto L_803F3418;
    }
    // 0x803F332C: nop

    // 0x803F3330: b           L_803F34C4
    // 0x803F3334: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_803F34C4;
    // 0x803F3334: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_803F3338:
    // 0x803F3338: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x803F333C: jal         0x803F1990
    // 0x803F3340: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    ovl_803F0000_menu_func_803F1990(rdram, ctx);
        goto after_37;
    // 0x803F3340: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_37:
    // 0x803F3344: beq         $v0, $zero, L_803F3394
    if (ctx->r2 == 0) {
        // 0x803F3348: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_803F3394;
    }
    // 0x803F3348: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x803F334C: lui         $a1, 0x803F
    ctx->r5 = S32(0X803F << 16);
    // 0x803F3350: addiu       $a1, $a1, 0x749C
    ctx->r5 = ADD32(ctx->r5, 0X749C);
    // 0x803F3354: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    // 0x803F3358: jal         0x803F2748
    // 0x803F335C: addiu       $a3, $zero, 0x12
    ctx->r7 = ADD32(0, 0X12);
    ovl_803F0000_menu_func_803F2748(rdram, ctx);
        goto after_38;
    // 0x803F335C: addiu       $a3, $zero, 0x12
    ctx->r7 = ADD32(0, 0X12);
    after_38:
    // 0x803F3360: beq         $v0, $zero, L_803F3370
    if (ctx->r2 == 0) {
        // 0x803F3364: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_803F3370;
    }
    // 0x803F3364: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x803F3368: b           L_803F34C4
    // 0x803F336C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_803F34C4;
    // 0x803F336C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_803F3370:
    // 0x803F3370: lui         $a1, 0x803F
    ctx->r5 = S32(0X803F << 16);
    // 0x803F3374: addiu       $a1, $a1, 0x74A4
    ctx->r5 = ADD32(ctx->r5, 0X74A4);
    // 0x803F3378: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x803F337C: jal         0x803F2748
    // 0x803F3380: addiu       $a3, $zero, 0x12
    ctx->r7 = ADD32(0, 0X12);
    ovl_803F0000_menu_func_803F2748(rdram, ctx);
        goto after_39;
    // 0x803F3380: addiu       $a3, $zero, 0x12
    ctx->r7 = ADD32(0, 0X12);
    after_39:
    // 0x803F3384: beq         $v0, $zero, L_803F3394
    if (ctx->r2 == 0) {
        // 0x803F3388: nop
    
            goto L_803F3394;
    }
    // 0x803F3388: nop

    // 0x803F338C: b           L_803F34C4
    // 0x803F3390: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_803F34C4;
    // 0x803F3390: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_803F3394:
    // 0x803F3394: lui         $t8, 0x8028
    ctx->r24 = S32(0X8028 << 16);
    // 0x803F3398: lh          $t8, -0x1B60($t8)
    ctx->r24 = MEM_H(ctx->r24, -0X1B60);
    // 0x803F339C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x803F33A0: andi        $t9, $t8, 0x1
    ctx->r25 = ctx->r24 & 0X1;
    // 0x803F33A4: beq         $t9, $zero, L_803F33CC
    if (ctx->r25 == 0) {
        // 0x803F33A8: lui         $a1, 0x803F
        ctx->r5 = S32(0X803F << 16);
            goto L_803F33CC;
    }
    // 0x803F33A8: lui         $a1, 0x803F
    ctx->r5 = S32(0X803F << 16);
    // 0x803F33AC: addiu       $a1, $a1, 0x74A8
    ctx->r5 = ADD32(ctx->r5, 0X74A8);
    // 0x803F33B0: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x803F33B4: jal         0x803F2748
    // 0x803F33B8: addiu       $a3, $zero, 0x12
    ctx->r7 = ADD32(0, 0X12);
    ovl_803F0000_menu_func_803F2748(rdram, ctx);
        goto after_40;
    // 0x803F33B8: addiu       $a3, $zero, 0x12
    ctx->r7 = ADD32(0, 0X12);
    after_40:
    // 0x803F33BC: beq         $v0, $zero, L_803F33CC
    if (ctx->r2 == 0) {
        // 0x803F33C0: nop
    
            goto L_803F33CC;
    }
    // 0x803F33C0: nop

    // 0x803F33C4: b           L_803F34C4
    // 0x803F33C8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_803F34C4;
    // 0x803F33C8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_803F33CC:
    // 0x803F33CC: lui         $a1, 0x803F
    ctx->r5 = S32(0X803F << 16);
    // 0x803F33D0: addiu       $a1, $a1, 0x7490
    ctx->r5 = ADD32(ctx->r5, 0X7490);
    // 0x803F33D4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x803F33D8: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    // 0x803F33DC: jal         0x803F2748
    // 0x803F33E0: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    ovl_803F0000_menu_func_803F2748(rdram, ctx);
        goto after_41;
    // 0x803F33E0: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_41:
    // 0x803F33E4: beq         $v0, $zero, L_803F33F4
    if (ctx->r2 == 0) {
        // 0x803F33E8: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_803F33F4;
    }
    // 0x803F33E8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x803F33EC: b           L_803F34C4
    // 0x803F33F0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_803F34C4;
    // 0x803F33F0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_803F33F4:
    // 0x803F33F4: lui         $a1, 0x803F
    ctx->r5 = S32(0X803F << 16);
    // 0x803F33F8: addiu       $a1, $a1, 0x7498
    ctx->r5 = ADD32(ctx->r5, 0X7498);
    // 0x803F33FC: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x803F3400: jal         0x803F2748
    // 0x803F3404: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    ovl_803F0000_menu_func_803F2748(rdram, ctx);
        goto after_42;
    // 0x803F3404: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_42:
    // 0x803F3408: beq         $v0, $zero, L_803F3418
    if (ctx->r2 == 0) {
        // 0x803F340C: nop
    
            goto L_803F3418;
    }
    // 0x803F340C: nop

    // 0x803F3410: b           L_803F34C4
    // 0x803F3414: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_803F34C4;
    // 0x803F3414: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_803F3418:
    // 0x803F3418: lw          $t1, 0xC8($s0)
    ctx->r9 = MEM_W(ctx->r16, 0XC8);
    // 0x803F341C: lui         $a1, 0x803F
    ctx->r5 = S32(0X803F << 16);
    // 0x803F3420: lh          $t2, 0x8B0($t1)
    ctx->r10 = MEM_H(ctx->r9, 0X8B0);
    // 0x803F3424: addiu       $a1, $a1, 0x74C0
    ctx->r5 = ADD32(ctx->r5, 0X74C0);
    // 0x803F3428: slti        $at, $t2, 0xC9
    ctx->r1 = SIGNED(ctx->r10) < 0XC9 ? 1 : 0;
    // 0x803F342C: bne         $at, $zero, L_803F3474
    if (ctx->r1 != 0) {
        // 0x803F3430: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_803F3474;
    }
    // 0x803F3430: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x803F3434: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x803F3438: jal         0x803F2748
    // 0x803F343C: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    ovl_803F0000_menu_func_803F2748(rdram, ctx);
        goto after_43;
    // 0x803F343C: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_43:
    // 0x803F3440: beq         $v0, $zero, L_803F3450
    if (ctx->r2 == 0) {
        // 0x803F3444: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_803F3450;
    }
    // 0x803F3444: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x803F3448: b           L_803F34C4
    // 0x803F344C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_803F34C4;
    // 0x803F344C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_803F3450:
    // 0x803F3450: lui         $a1, 0x803F
    ctx->r5 = S32(0X803F << 16);
    // 0x803F3454: addiu       $a1, $a1, 0x74C4
    ctx->r5 = ADD32(ctx->r5, 0X74C4);
    // 0x803F3458: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x803F345C: jal         0x803F2748
    // 0x803F3460: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    ovl_803F0000_menu_func_803F2748(rdram, ctx);
        goto after_44;
    // 0x803F3460: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_44:
    // 0x803F3464: beq         $v0, $zero, L_803F3474
    if (ctx->r2 == 0) {
        // 0x803F3468: nop
    
            goto L_803F3474;
    }
    // 0x803F3468: nop

    // 0x803F346C: b           L_803F34C4
    // 0x803F3470: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_803F34C4;
    // 0x803F3470: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_803F3474:
    // 0x803F3474: lui         $a1, 0x803F
    ctx->r5 = S32(0X803F << 16);
    // 0x803F3478: addiu       $a1, $a1, 0x74B8
    ctx->r5 = ADD32(ctx->r5, 0X74B8);
    // 0x803F347C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x803F3480: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x803F3484: jal         0x803F2748
    // 0x803F3488: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    ovl_803F0000_menu_func_803F2748(rdram, ctx);
        goto after_45;
    // 0x803F3488: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_45:
    // 0x803F348C: beq         $v0, $zero, L_803F349C
    if (ctx->r2 == 0) {
        // 0x803F3490: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_803F349C;
    }
    // 0x803F3490: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x803F3494: b           L_803F34C4
    // 0x803F3498: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_803F34C4;
    // 0x803F3498: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_803F349C:
    // 0x803F349C: lui         $a1, 0x803F
    ctx->r5 = S32(0X803F << 16);
    // 0x803F34A0: addiu       $a1, $a1, 0x74BC
    ctx->r5 = ADD32(ctx->r5, 0X74BC);
    // 0x803F34A4: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x803F34A8: jal         0x803F2748
    // 0x803F34AC: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    ovl_803F0000_menu_func_803F2748(rdram, ctx);
        goto after_46;
    // 0x803F34AC: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_46:
    // 0x803F34B0: beq         $v0, $zero, L_803F34C4
    if (ctx->r2 == 0) {
        // 0x803F34B4: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_803F34C4;
    }
    // 0x803F34B4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x803F34B8: b           L_803F34C4
    // 0x803F34BC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_803F34C4;
    // 0x803F34BC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x803F34C0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_803F34C4:
    // 0x803F34C4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x803F34C8: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x803F34CC: jr          $ra
    // 0x803F34D0: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x803F34D0: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void ovl_803F0000_menu_func_803F2C18(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803F2C18: nop

    // 0x803F2C1C: beq         $t6, $zero, L_803F2C60
    if (ctx->r14 == 0) {
        // 0x803F2C20: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_803F2C60;
    }
    // 0x803F2C20: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x803F2C24: lh          $t7, 0x8CA($v1)
    ctx->r15 = MEM_H(ctx->r3, 0X8CA);
    // 0x803F2C28: lh          $v0, 0x8B0($v1)
    ctx->r2 = MEM_H(ctx->r3, 0X8B0);
    // 0x803F2C2C: addiu       $t8, $t7, -0x64
    ctx->r24 = ADD32(ctx->r15, -0X64);
    // 0x803F2C30: slt         $at, $t8, $v0
    ctx->r1 = SIGNED(ctx->r24) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x803F2C34: beq         $at, $zero, L_803F2C5C
    if (ctx->r1 == 0) {
        // 0x803F2C38: slti        $at, $v0, 0x158
        ctx->r1 = SIGNED(ctx->r2) < 0X158 ? 1 : 0;
            goto L_803F2C5C;
    }
    // 0x803F2C38: slti        $at, $v0, 0x158
    ctx->r1 = SIGNED(ctx->r2) < 0X158 ? 1 : 0;
    // 0x803F2C3C: beq         $at, $zero, L_803F2C60
    if (ctx->r1 == 0) {
        // 0x803F2C40: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_803F2C60;
    }
    // 0x803F2C40: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x803F2C44: jal         0x803F28A8
    // 0x803F2C48: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_803F0000_menu_func_803F28A8(rdram, ctx);
        goto after_0;
    // 0x803F2C48: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_0:
    // 0x803F2C4C: beq         $v0, $zero, L_803F2C60
    if (ctx->r2 == 0) {
        // 0x803F2C50: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_803F2C60;
    }
    // 0x803F2C50: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x803F2C54: b           L_803F34C4
    // 0x803F2C58: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_803F34C4;
    // 0x803F2C58: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_803F2C5C:
    // 0x803F2C5C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
L_803F2C60:
    // 0x803F2C60: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x803F2C64: jal         0x803F1914
    // 0x803F2C68: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    ovl_803F0000_menu_func_803F1914(rdram, ctx);
        goto after_1;
    // 0x803F2C68: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_1:
    // 0x803F2C6C: beq         $v0, $zero, L_803F2E40
    if (ctx->r2 == 0) {
        // 0x803F2C70: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_803F2E40;
    }
    // 0x803F2C70: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x803F2C74: lw          $v1, 0xC8($s0)
    ctx->r3 = MEM_W(ctx->r16, 0XC8);
    // 0x803F2C78: nop

    // 0x803F2C7C: lbu         $t9, 0x8AC($v1)
    ctx->r25 = MEM_BU(ctx->r3, 0X8AC);
    // 0x803F2C80: nop

    // 0x803F2C84: beq         $t9, $zero, L_803F2E40
    if (ctx->r25 == 0) {
        // 0x803F2C88: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_803F2E40;
    }
    // 0x803F2C88: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x803F2C8C: lw          $t1, 0x24($v1)
    ctx->r9 = MEM_W(ctx->r3, 0X24);
    // 0x803F2C90: lh          $t4, 0x8B0($v1)
    ctx->r12 = MEM_H(ctx->r3, 0X8B0);
    // 0x803F2C94: lh          $t2, 0x8B4($t1)
    ctx->r10 = MEM_H(ctx->r9, 0X8B4);
    // 0x803F2C98: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x803F2C9C: negu        $t3, $t2
    ctx->r11 = SUB32(0, ctx->r10);
    // 0x803F2CA0: subu        $v0, $t3, $t4
    ctx->r2 = SUB32(ctx->r11, ctx->r12);
    // 0x803F2CA4: slti        $at, $v0, 0x12C
    ctx->r1 = SIGNED(ctx->r2) < 0X12C ? 1 : 0;
    // 0x803F2CA8: beq         $at, $zero, L_803F2E3C
    if (ctx->r1 == 0) {
        // 0x803F2CAC: addiu       $a1, $zero, 0x700
        ctx->r5 = ADD32(0, 0X700);
            goto L_803F2E3C;
    }
    // 0x803F2CAC: addiu       $a1, $zero, 0x700
    ctx->r5 = ADD32(0, 0X700);
    // 0x803F2CB0: jal         0x803F11B4
    // 0x803F2CB4: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    ovl_803F0000_menu_func_803F11B4(rdram, ctx);
        goto after_2;
    // 0x803F2CB4: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    after_2:
    // 0x803F2CB8: beq         $v0, $zero, L_803F2E3C
    if (ctx->r2 == 0) {
        // 0x803F2CBC: or          $t0, $v0, $zero
        ctx->r8 = ctx->r2 | 0;
            goto L_803F2E3C;
    }
    // 0x803F2CBC: or          $t0, $v0, $zero
    ctx->r8 = ctx->r2 | 0;
    // 0x803F2CC0: lw          $t5, 0xC8($s0)
    ctx->r13 = MEM_W(ctx->r16, 0XC8);
    // 0x803F2CC4: addiu       $t6, $zero, 0x12
    ctx->r14 = ADD32(0, 0X12);
    // 0x803F2CC8: sw          $v0, 0x958($t5)
    MEM_W(0X958, ctx->r13) = ctx->r2;
    // 0x803F2CCC: lw          $t7, 0xC8($s0)
    ctx->r15 = MEM_W(ctx->r16, 0XC8);
    // 0x803F2CD0: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    // 0x803F2CD4: sh          $t6, 0x938($t7)
    MEM_H(0X938, ctx->r15) = ctx->r14;
    // 0x803F2CD8: lw          $v1, 0xC8($s0)
    ctx->r3 = MEM_W(ctx->r16, 0XC8);
    // 0x803F2CDC: nop

    // 0x803F2CE0: lh          $t8, 0x8B0($v1)
    ctx->r24 = MEM_H(ctx->r3, 0X8B0);
    // 0x803F2CE4: nop

    // 0x803F2CE8: slti        $at, $t8, 0xFB
    ctx->r1 = SIGNED(ctx->r24) < 0XFB ? 1 : 0;
    // 0x803F2CEC: bne         $at, $zero, L_803F2D98
    if (ctx->r1 != 0) {
        // 0x803F2CF0: lui         $at, 0x4220
        ctx->r1 = S32(0X4220 << 16);
            goto L_803F2D98;
    }
    // 0x803F2CF0: lui         $at, 0x4220
    ctx->r1 = S32(0X4220 << 16);
    // 0x803F2CF4: cfc1        $t9, $FpcCsr
    ctx->r25 = get_cop1_cs();
    // 0x803F2CF8: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    // 0x803F2CFC: ctc1        $a3, $FpcCsr
    set_cop1_cs(ctx->r7);
    // 0x803F2D00: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x803F2D04: lw          $a2, 0xB0($s0)
    ctx->r6 = MEM_W(ctx->r16, 0XB0);
    // 0x803F2D08: cvt.w.s     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.u32l = CVT_W_S(ctx->f6.fl);
    // 0x803F2D0C: lui         $at, 0x4F00
    ctx->r1 = S32(0X4F00 << 16);
    // 0x803F2D10: cfc1        $a3, $FpcCsr
    ctx->r7 = get_cop1_cs();
    // 0x803F2D14: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x803F2D18: andi        $a3, $a3, 0x78
    ctx->r7 = ctx->r7 & 0X78;
    // 0x803F2D1C: beq         $a3, $zero, L_803F2D68
    if (ctx->r7 == 0) {
        // 0x803F2D20: addiu       $a1, $v1, 0x938
        ctx->r5 = ADD32(ctx->r3, 0X938);
            goto L_803F2D68;
    }
    // 0x803F2D20: addiu       $a1, $v1, 0x938
    ctx->r5 = ADD32(ctx->r3, 0X938);
    // 0x803F2D24: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x803F2D28: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    // 0x803F2D2C: sub.s       $f8, $f6, $f8
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f8.fl = ctx->f6.fl - ctx->f8.fl;
    // 0x803F2D30: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x803F2D34: ctc1        $a3, $FpcCsr
    set_cop1_cs(ctx->r7);
    // 0x803F2D38: nop

    // 0x803F2D3C: cvt.w.s     $f8, $f8
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 8);
    ctx->f8.u32l = CVT_W_S(ctx->f8.fl);
    // 0x803F2D40: cfc1        $a3, $FpcCsr
    ctx->r7 = get_cop1_cs();
    // 0x803F2D44: nop

    // 0x803F2D48: andi        $a3, $a3, 0x78
    ctx->r7 = ctx->r7 & 0X78;
    // 0x803F2D4C: bne         $a3, $zero, L_803F2D60
    if (ctx->r7 != 0) {
        // 0x803F2D50: nop
    
            goto L_803F2D60;
    }
    // 0x803F2D50: nop

    // 0x803F2D54: mfc1        $a3, $f8
    ctx->r7 = (int32_t)ctx->f8.u32l;
    // 0x803F2D58: b           L_803F2D78
    // 0x803F2D5C: or          $a3, $a3, $at
    ctx->r7 = ctx->r7 | ctx->r1;
        goto L_803F2D78;
    // 0x803F2D5C: or          $a3, $a3, $at
    ctx->r7 = ctx->r7 | ctx->r1;
L_803F2D60:
    // 0x803F2D60: b           L_803F2D78
    // 0x803F2D64: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
        goto L_803F2D78;
    // 0x803F2D64: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
L_803F2D68:
    // 0x803F2D68: mfc1        $a3, $f8
    ctx->r7 = (int32_t)ctx->f8.u32l;
    // 0x803F2D6C: nop

    // 0x803F2D70: bltz        $a3, L_803F2D60
    if (SIGNED(ctx->r7) < 0) {
        // 0x803F2D74: nop
    
            goto L_803F2D60;
    }
    // 0x803F2D74: nop

L_803F2D78:
    // 0x803F2D78: ctc1        $t9, $FpcCsr
    set_cop1_cs(ctx->r25);
    // 0x803F2D7C: jal         0x803F1828
    // 0x803F2D80: nop

    ovl_803F0000_menu_func_803F1828(rdram, ctx);
        goto after_3;
    // 0x803F2D80: nop

    after_3:
    // 0x803F2D84: lw          $t2, 0xC8($s0)
    ctx->r10 = MEM_W(ctx->r16, 0XC8);
    // 0x803F2D88: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
    // 0x803F2D8C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x803F2D90: b           L_803F34C4
    // 0x803F2D94: sh          $t1, 0x93A($t2)
    MEM_H(0X93A, ctx->r10) = ctx->r9;
        goto L_803F34C4;
    // 0x803F2D94: sh          $t1, 0x93A($t2)
    MEM_H(0X93A, ctx->r10) = ctx->r9;
L_803F2D98:
    // 0x803F2D98: lui         $at, 0x4220
    ctx->r1 = S32(0X4220 << 16);
    // 0x803F2D9C: cfc1        $t3, $FpcCsr
    ctx->r11 = get_cop1_cs();
    // 0x803F2DA0: ctc1        $a3, $FpcCsr
    set_cop1_cs(ctx->r7);
    // 0x803F2DA4: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x803F2DA8: lw          $a2, 0x88($t0)
    ctx->r6 = MEM_W(ctx->r8, 0X88);
    // 0x803F2DAC: cvt.w.s     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.u32l = CVT_W_S(ctx->f10.fl);
    // 0x803F2DB0: lui         $at, 0x4F00
    ctx->r1 = S32(0X4F00 << 16);
    // 0x803F2DB4: cfc1        $a3, $FpcCsr
    ctx->r7 = get_cop1_cs();
    // 0x803F2DB8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x803F2DBC: andi        $a3, $a3, 0x78
    ctx->r7 = ctx->r7 & 0X78;
    // 0x803F2DC0: beq         $a3, $zero, L_803F2E0C
    if (ctx->r7 == 0) {
        // 0x803F2DC4: addiu       $a1, $v1, 0x938
        ctx->r5 = ADD32(ctx->r3, 0X938);
            goto L_803F2E0C;
    }
    // 0x803F2DC4: addiu       $a1, $v1, 0x938
    ctx->r5 = ADD32(ctx->r3, 0X938);
    // 0x803F2DC8: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x803F2DCC: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    // 0x803F2DD0: sub.s       $f16, $f10, $f16
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f16.fl = ctx->f10.fl - ctx->f16.fl;
    // 0x803F2DD4: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x803F2DD8: ctc1        $a3, $FpcCsr
    set_cop1_cs(ctx->r7);
    // 0x803F2DDC: nop

    // 0x803F2DE0: cvt.w.s     $f16, $f16
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    ctx->f16.u32l = CVT_W_S(ctx->f16.fl);
    // 0x803F2DE4: cfc1        $a3, $FpcCsr
    ctx->r7 = get_cop1_cs();
    // 0x803F2DE8: nop

    // 0x803F2DEC: andi        $a3, $a3, 0x78
    ctx->r7 = ctx->r7 & 0X78;
    // 0x803F2DF0: bne         $a3, $zero, L_803F2E04
    if (ctx->r7 != 0) {
        // 0x803F2DF4: nop
    
            goto L_803F2E04;
    }
    // 0x803F2DF4: nop

    // 0x803F2DF8: mfc1        $a3, $f16
    ctx->r7 = (int32_t)ctx->f16.u32l;
    // 0x803F2DFC: b           L_803F2E1C
    // 0x803F2E00: or          $a3, $a3, $at
    ctx->r7 = ctx->r7 | ctx->r1;
        goto L_803F2E1C;
    // 0x803F2E00: or          $a3, $a3, $at
    ctx->r7 = ctx->r7 | ctx->r1;
L_803F2E04:
    // 0x803F2E04: b           L_803F2E1C
    // 0x803F2E08: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
        goto L_803F2E1C;
    // 0x803F2E08: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
L_803F2E0C:
    // 0x803F2E0C: mfc1        $a3, $f16
    ctx->r7 = (int32_t)ctx->f16.u32l;
    // 0x803F2E10: nop

    // 0x803F2E14: bltz        $a3, L_803F2E04
    if (SIGNED(ctx->r7) < 0) {
        // 0x803F2E18: nop
    
            goto L_803F2E04;
    }
    // 0x803F2E18: nop

L_803F2E1C:
    // 0x803F2E1C: ctc1        $t3, $FpcCsr
    set_cop1_cs(ctx->r11);
    // 0x803F2E20: jal         0x803F1828
    // 0x803F2E24: nop

    ovl_803F0000_menu_func_803F1828(rdram, ctx);
        goto after_4;
    // 0x803F2E24: nop

    after_4:
    // 0x803F2E28: lw          $t5, 0xC8($s0)
    ctx->r13 = MEM_W(ctx->r16, 0XC8);
    // 0x803F2E2C: addiu       $t4, $zero, 0x5
    ctx->r12 = ADD32(0, 0X5);
    // 0x803F2E30: sh          $t4, 0x93A($t5)
    MEM_H(0X93A, ctx->r13) = ctx->r12;
    // 0x803F2E34: b           L_803F34C4
    // 0x803F2E38: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_803F34C4;
    // 0x803F2E38: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_803F2E3C:
    // 0x803F2E3C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
L_803F2E40:
    // 0x803F2E40: jal         0x803F1990
    // 0x803F2E44: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
    ovl_803F0000_menu_func_803F1990(rdram, ctx);
        goto after_5;
    // 0x803F2E44: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
    after_5:
    // 0x803F2E48: beq         $v0, $zero, L_803F2EB8
    if (ctx->r2 == 0) {
        // 0x803F2E4C: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_803F2EB8;
    }
    // 0x803F2E4C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x803F2E50: lw          $t6, 0xC8($s0)
    ctx->r14 = MEM_W(ctx->r16, 0XC8);
    // 0x803F2E54: nop

    // 0x803F2E58: lh          $v0, 0x8B0($t6)
    ctx->r2 = MEM_H(ctx->r14, 0X8B0);
    // 0x803F2E5C: nop

    // 0x803F2E60: slti        $at, $v0, 0x108
    ctx->r1 = SIGNED(ctx->r2) < 0X108 ? 1 : 0;
    // 0x803F2E64: beq         $at, $zero, L_803F2EB4
    if (ctx->r1 == 0) {
        // 0x803F2E68: slti        $at, $v0, 0x97
        ctx->r1 = SIGNED(ctx->r2) < 0X97 ? 1 : 0;
            goto L_803F2EB4;
    }
    // 0x803F2E68: slti        $at, $v0, 0x97
    ctx->r1 = SIGNED(ctx->r2) < 0X97 ? 1 : 0;
    // 0x803F2E6C: bne         $at, $zero, L_803F2EB4
    if (ctx->r1 != 0) {
        // 0x803F2E70: lui         $t7, 0x8009
        ctx->r15 = S32(0X8009 << 16);
            goto L_803F2EB4;
    }
    // 0x803F2E70: lui         $t7, 0x8009
    ctx->r15 = S32(0X8009 << 16);
    // 0x803F2E74: lw          $t7, 0x3B20($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X3B20);
    // 0x803F2E78: nop

    // 0x803F2E7C: lwc1        $f12, 0x0($t7)
    ctx->f12.u32l = MEM_W(ctx->r15, 0X0);
    // 0x803F2E80: jal         0x80272AEC
    // 0x803F2E84: nop

    LOOKUP_FUNC(0x80272AEC)(rdram, ctx);
        goto after_6;
    // 0x803F2E84: nop

    after_6:
    // 0x803F2E88: lui         $at, 0x437B
    ctx->r1 = S32(0X437B << 16);
    // 0x803F2E8C: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x803F2E90: nop

    // 0x803F2E94: c.lt.s      $f18, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f18.fl < ctx->f0.fl;
    // 0x803F2E98: nop

    // 0x803F2E9C: bc1f        L_803F2EB8
    if (!c1cs) {
        // 0x803F2EA0: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_803F2EB8;
    }
    // 0x803F2EA0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x803F2EA4: jal         0x803F34D4
    // 0x803F2EA8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_803F0000_menu_func_803F34D4(rdram, ctx);
        goto after_7;
    // 0x803F2EA8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_7:
    // 0x803F2EAC: b           L_803F34C4
    // 0x803F2EB0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_803F34C4;
    // 0x803F2EB0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_803F2EB4:
    // 0x803F2EB4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
L_803F2EB8:
    // 0x803F2EB8: jal         0x803F1990
    // 0x803F2EBC: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    ovl_803F0000_menu_func_803F1990(rdram, ctx);
        goto after_8;
    // 0x803F2EBC: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    after_8:
    // 0x803F2EC0: beq         $v0, $zero, L_803F2FE4
    if (ctx->r2 == 0) {
        // 0x803F2EC4: lui         $t8, 0x8009
        ctx->r24 = S32(0X8009 << 16);
            goto L_803F2FE4;
    }
    // 0x803F2EC4: lui         $t8, 0x8009
    ctx->r24 = S32(0X8009 << 16);
    // 0x803F2EC8: lw          $t8, 0x3B20($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X3B20);
    // 0x803F2ECC: nop

    // 0x803F2ED0: lwc1        $f12, 0x0($t8)
    ctx->f12.u32l = MEM_W(ctx->r24, 0X0);
    // 0x803F2ED4: jal         0x80272AEC
    // 0x803F2ED8: nop

    LOOKUP_FUNC(0x80272AEC)(rdram, ctx);
        goto after_9;
    // 0x803F2ED8: nop

    after_9:
    // 0x803F2EDC: lw          $t9, 0xC8($s0)
    ctx->r25 = MEM_W(ctx->r16, 0XC8);
    // 0x803F2EE0: nop

    // 0x803F2EE4: lh          $v0, 0x8B0($t9)
    ctx->r2 = MEM_H(ctx->r25, 0X8B0);
    // 0x803F2EE8: nop

    // 0x803F2EEC: slti        $at, $v0, 0x108
    ctx->r1 = SIGNED(ctx->r2) < 0X108 ? 1 : 0;
    // 0x803F2EF0: beq         $at, $zero, L_803F2FE4
    if (ctx->r1 == 0) {
        // 0x803F2EF4: slti        $at, $v0, -0x107
        ctx->r1 = SIGNED(ctx->r2) < -0X107 ? 1 : 0;
            goto L_803F2FE4;
    }
    // 0x803F2EF4: slti        $at, $v0, -0x107
    ctx->r1 = SIGNED(ctx->r2) < -0X107 ? 1 : 0;
    // 0x803F2EF8: bne         $at, $zero, L_803F2FE4
    if (ctx->r1 != 0) {
        // 0x803F2EFC: lui         $at, 0x4348
        ctx->r1 = S32(0X4348 << 16);
            goto L_803F2FE4;
    }
    // 0x803F2EFC: lui         $at, 0x4348
    ctx->r1 = S32(0X4348 << 16);
    // 0x803F2F00: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x803F2F04: lui         $a1, 0x803F
    ctx->r5 = S32(0X803F << 16);
    // 0x803F2F08: c.lt.s      $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f0.fl < ctx->f4.fl;
    // 0x803F2F0C: addiu       $a1, $a1, 0x74C8
    ctx->r5 = ADD32(ctx->r5, 0X74C8);
    // 0x803F2F10: bc1f        L_803F2FE4
    if (!c1cs) {
        // 0x803F2F14: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_803F2FE4;
    }
    // 0x803F2F14: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x803F2F18: jal         0x803F1508
    // 0x803F2F1C: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    ovl_803F0000_menu_func_803F1508(rdram, ctx);
        goto after_10;
    // 0x803F2F1C: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    after_10:
    // 0x803F2F20: beq         $v0, $zero, L_803F2FE4
    if (ctx->r2 == 0) {
        // 0x803F2F24: addiu       $t2, $zero, 0x11
        ctx->r10 = ADD32(0, 0X11);
            goto L_803F2FE4;
    }
    // 0x803F2F24: addiu       $t2, $zero, 0x11
    ctx->r10 = ADD32(0, 0X11);
    // 0x803F2F28: lw          $t1, 0xC8($s0)
    ctx->r9 = MEM_W(ctx->r16, 0XC8);
    // 0x803F2F2C: lui         $at, 0x4220
    ctx->r1 = S32(0X4220 << 16);
    // 0x803F2F30: cfc1        $t4, $FpcCsr
    ctx->r12 = get_cop1_cs();
    // 0x803F2F34: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    // 0x803F2F38: ctc1        $a3, $FpcCsr
    set_cop1_cs(ctx->r7);
    // 0x803F2F3C: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x803F2F40: sw          $v0, 0x958($t1)
    MEM_W(0X958, ctx->r9) = ctx->r2;
    // 0x803F2F44: lw          $t3, 0xC8($s0)
    ctx->r11 = MEM_W(ctx->r16, 0XC8);
    // 0x803F2F48: cvt.w.s     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.u32l = CVT_W_S(ctx->f6.fl);
    // 0x803F2F4C: sh          $t2, 0x938($t3)
    MEM_H(0X938, ctx->r11) = ctx->r10;
    // 0x803F2F50: cfc1        $a3, $FpcCsr
    ctx->r7 = get_cop1_cs();
    // 0x803F2F54: lw          $a1, 0xC8($s0)
    ctx->r5 = MEM_W(ctx->r16, 0XC8);
    // 0x803F2F58: lw          $a2, 0x88($v0)
    ctx->r6 = MEM_W(ctx->r2, 0X88);
    // 0x803F2F5C: andi        $a3, $a3, 0x78
    ctx->r7 = ctx->r7 & 0X78;
    // 0x803F2F60: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x803F2F64: beq         $a3, $zero, L_803F2FB4
    if (ctx->r7 == 0) {
        // 0x803F2F68: addiu       $a1, $a1, 0x938
        ctx->r5 = ADD32(ctx->r5, 0X938);
            goto L_803F2FB4;
    }
    // 0x803F2F68: addiu       $a1, $a1, 0x938
    ctx->r5 = ADD32(ctx->r5, 0X938);
    // 0x803F2F6C: lui         $at, 0x4F00
    ctx->r1 = S32(0X4F00 << 16);
    // 0x803F2F70: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x803F2F74: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    // 0x803F2F78: sub.s       $f8, $f6, $f8
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f8.fl = ctx->f6.fl - ctx->f8.fl;
    // 0x803F2F7C: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x803F2F80: ctc1        $a3, $FpcCsr
    set_cop1_cs(ctx->r7);
    // 0x803F2F84: nop

    // 0x803F2F88: cvt.w.s     $f8, $f8
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 8);
    ctx->f8.u32l = CVT_W_S(ctx->f8.fl);
    // 0x803F2F8C: cfc1        $a3, $FpcCsr
    ctx->r7 = get_cop1_cs();
    // 0x803F2F90: nop

    // 0x803F2F94: andi        $a3, $a3, 0x78
    ctx->r7 = ctx->r7 & 0X78;
    // 0x803F2F98: bne         $a3, $zero, L_803F2FAC
    if (ctx->r7 != 0) {
        // 0x803F2F9C: nop
    
            goto L_803F2FAC;
    }
    // 0x803F2F9C: nop

    // 0x803F2FA0: mfc1        $a3, $f8
    ctx->r7 = (int32_t)ctx->f8.u32l;
    // 0x803F2FA4: b           L_803F2FC4
    // 0x803F2FA8: or          $a3, $a3, $at
    ctx->r7 = ctx->r7 | ctx->r1;
        goto L_803F2FC4;
    // 0x803F2FA8: or          $a3, $a3, $at
    ctx->r7 = ctx->r7 | ctx->r1;
L_803F2FAC:
    // 0x803F2FAC: b           L_803F2FC4
    // 0x803F2FB0: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
        goto L_803F2FC4;
    // 0x803F2FB0: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
L_803F2FB4:
    // 0x803F2FB4: mfc1        $a3, $f8
    ctx->r7 = (int32_t)ctx->f8.u32l;
    // 0x803F2FB8: nop

    // 0x803F2FBC: bltz        $a3, L_803F2FAC
    if (SIGNED(ctx->r7) < 0) {
        // 0x803F2FC0: nop
    
            goto L_803F2FAC;
    }
    // 0x803F2FC0: nop

L_803F2FC4:
    // 0x803F2FC4: ctc1        $t4, $FpcCsr
    set_cop1_cs(ctx->r12);
    // 0x803F2FC8: jal         0x803F1828
    // 0x803F2FCC: nop

    ovl_803F0000_menu_func_803F1828(rdram, ctx);
        goto after_11;
    // 0x803F2FCC: nop

    after_11:
    // 0x803F2FD0: lw          $t6, 0xC8($s0)
    ctx->r14 = MEM_W(ctx->r16, 0XC8);
    // 0x803F2FD4: addiu       $t5, $zero, 0x5
    ctx->r13 = ADD32(0, 0X5);
    // 0x803F2FD8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x803F2FDC: b           L_803F34C4
    // 0x803F2FE0: sh          $t5, 0x93A($t6)
    MEM_H(0X93A, ctx->r14) = ctx->r13;
        goto L_803F34C4;
    // 0x803F2FE0: sh          $t5, 0x93A($t6)
    MEM_H(0X93A, ctx->r14) = ctx->r13;
L_803F2FE4:
    // 0x803F2FE4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x803F2FE8: jal         0x803F1990
    // 0x803F2FEC: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    ovl_803F0000_menu_func_803F1990(rdram, ctx);
        goto after_12;
    // 0x803F2FEC: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_12:
    // 0x803F2FF0: beq         $v0, $zero, L_803F3034
    if (ctx->r2 == 0) {
        // 0x803F2FF4: nop
    
            goto L_803F3034;
    }
    // 0x803F2FF4: nop

    // 0x803F2FF8: lw          $v1, 0xC8($s0)
    ctx->r3 = MEM_W(ctx->r16, 0XC8);
    // 0x803F2FFC: nop

    // 0x803F3000: lh          $t7, 0x8CA($v1)
    ctx->r15 = MEM_H(ctx->r3, 0X8CA);
    // 0x803F3004: lh          $t8, 0x8B0($v1)
    ctx->r24 = MEM_H(ctx->r3, 0X8B0);
    // 0x803F3008: nop

    // 0x803F300C: subu        $t9, $t7, $t8
    ctx->r25 = SUB32(ctx->r15, ctx->r24);
    // 0x803F3010: slti        $at, $t9, 0xFB
    ctx->r1 = SIGNED(ctx->r25) < 0XFB ? 1 : 0;
    // 0x803F3014: bne         $at, $zero, L_803F3034
    if (ctx->r1 != 0) {
        // 0x803F3018: nop
    
            goto L_803F3034;
    }
    // 0x803F3018: nop

    // 0x803F301C: jal         0x803F282C
    // 0x803F3020: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_803F0000_menu_func_803F282C(rdram, ctx);
        goto after_13;
    // 0x803F3020: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_13:
    // 0x803F3024: beq         $v0, $zero, L_803F3034
    if (ctx->r2 == 0) {
        // 0x803F3028: nop
    
            goto L_803F3034;
    }
    // 0x803F3028: nop

    // 0x803F302C: b           L_803F34C4
    // 0x803F3030: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_803F34C4;
    // 0x803F3030: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_803F3034:
    // 0x803F3034: lw          $t1, 0xD4($s0)
    ctx->r9 = MEM_W(ctx->r16, 0XD4);
    // 0x803F3038: nop

    // 0x803F303C: lbu         $t2, 0x5($t1)
    ctx->r10 = MEM_BU(ctx->r9, 0X5);
    // 0x803F3040: nop

    // 0x803F3044: sltiu       $at, $t2, 0xB
    ctx->r1 = ctx->r10 < 0XB ? 1 : 0;
    // 0x803F3048: beq         $at, $zero, L_803F3418
    if (ctx->r1 == 0) {
        // 0x803F304C: sll         $t2, $t2, 2
        ctx->r10 = S32(ctx->r10 << 2);
            goto L_803F3418;
    }
    // 0x803F304C: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x803F3050: lui         $at, 0x803F
    ctx->r1 = S32(0X803F << 16);
    // 0x803F3054: addu        $at, $at, $t2
    gpr jr_addend_803F3060 = ctx->r10;
    ctx->r1 = ADD32(ctx->r1, ctx->r10);
    // 0x803F3058: lw          $t2, 0x7C8C($at)
    ctx->r10 = ADD32(ctx->r1, 0X7C8C);
    // 0x803F305C: nop

    // 0x803F3060: jr          $t2
    // 0x803F3064: nop

    switch (jr_addend_803F3060 >> 2) {
        case 0: goto L_803F3068; break;
        case 1: goto L_803F3068; break;
        case 2: goto L_803F3068; break;
        case 3: goto L_803F3068; break;
        case 4: goto L_803F3090; break;
        case 5: goto L_803F3090; break;
        case 6: goto L_803F3194; break;
        case 7: goto L_803F3194; break;
        case 8: goto L_803F32EC; break;
        case 9: goto L_803F3338; break;
        case 10: goto L_803F3338; break;
        default: switch_error(__func__, 0x803F3060, 0x803F7C8C);
    }
    // 0x803F3064: nop

L_803F3068:
    // 0x803F3068: lui         $a1, 0x803F
    ctx->r5 = S32(0X803F << 16);
    // 0x803F306C: addiu       $a1, $a1, 0x7438
    ctx->r5 = ADD32(ctx->r5, 0X7438);
    // 0x803F3070: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x803F3074: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    // 0x803F3078: jal         0x803F2748
    // 0x803F307C: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    ovl_803F0000_menu_func_803F2748(rdram, ctx);
        goto after_14;
    // 0x803F307C: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_14:
    // 0x803F3080: beq         $v0, $zero, L_803F3418
    if (ctx->r2 == 0) {
        // 0x803F3084: nop
    
            goto L_803F3418;
    }
    // 0x803F3084: nop

    // 0x803F3088: b           L_803F34C4
    // 0x803F308C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_803F34C4;
    // 0x803F308C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_803F3090:
    // 0x803F3090: lw          $t3, 0xC8($s0)
    ctx->r11 = MEM_W(ctx->r16, 0XC8);
    // 0x803F3094: lui         $a1, 0x803F
    ctx->r5 = S32(0X803F << 16);
    // 0x803F3098: lh          $t4, 0x8B0($t3)
    ctx->r12 = MEM_H(ctx->r11, 0X8B0);
    // 0x803F309C: addiu       $a1, $a1, 0x745C
    ctx->r5 = ADD32(ctx->r5, 0X745C);
    // 0x803F30A0: blez        $t4, L_803F3154
    if (SIGNED(ctx->r12) <= 0) {
        // 0x803F30A4: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_803F3154;
    }
    // 0x803F30A4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x803F30A8: lui         $a1, 0x803F
    ctx->r5 = S32(0X803F << 16);
    // 0x803F30AC: addiu       $a1, $a1, 0x744C
    ctx->r5 = ADD32(ctx->r5, 0X744C);
    // 0x803F30B0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x803F30B4: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x803F30B8: jal         0x803F2748
    // 0x803F30BC: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    ovl_803F0000_menu_func_803F2748(rdram, ctx);
        goto after_15;
    // 0x803F30BC: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_15:
    // 0x803F30C0: beq         $v0, $zero, L_803F30D0
    if (ctx->r2 == 0) {
        // 0x803F30C4: nop
    
            goto L_803F30D0;
    }
    // 0x803F30C4: nop

    // 0x803F30C8: b           L_803F34C4
    // 0x803F30CC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_803F34C4;
    // 0x803F30CC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_803F30D0:
    // 0x803F30D0: lw          $t5, 0xC8($s0)
    ctx->r13 = MEM_W(ctx->r16, 0XC8);
    // 0x803F30D4: lui         $a1, 0x803F
    ctx->r5 = S32(0X803F << 16);
    // 0x803F30D8: lh          $t6, 0x8B0($t5)
    ctx->r14 = MEM_H(ctx->r13, 0X8B0);
    // 0x803F30DC: addiu       $a1, $a1, 0x745C
    ctx->r5 = ADD32(ctx->r5, 0X745C);
    // 0x803F30E0: slti        $at, $t6, 0xC9
    ctx->r1 = SIGNED(ctx->r14) < 0XC9 ? 1 : 0;
    // 0x803F30E4: bne         $at, $zero, L_803F3114
    if (ctx->r1 != 0) {
        // 0x803F30E8: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_803F3114;
    }
    // 0x803F30E8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x803F30EC: lui         $a1, 0x803F
    ctx->r5 = S32(0X803F << 16);
    // 0x803F30F0: addiu       $a1, $a1, 0x7450
    ctx->r5 = ADD32(ctx->r5, 0X7450);
    // 0x803F30F4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x803F30F8: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    // 0x803F30FC: jal         0x803F2748
    // 0x803F3100: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    ovl_803F0000_menu_func_803F2748(rdram, ctx);
        goto after_16;
    // 0x803F3100: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_16:
    // 0x803F3104: beq         $v0, $zero, L_803F3418
    if (ctx->r2 == 0) {
        // 0x803F3108: nop
    
            goto L_803F3418;
    }
    // 0x803F3108: nop

    // 0x803F310C: b           L_803F34C4
    // 0x803F3110: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_803F34C4;
    // 0x803F3110: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_803F3114:
    // 0x803F3114: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x803F3118: jal         0x803F2748
    // 0x803F311C: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    ovl_803F0000_menu_func_803F2748(rdram, ctx);
        goto after_17;
    // 0x803F311C: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_17:
    // 0x803F3120: beq         $v0, $zero, L_803F3130
    if (ctx->r2 == 0) {
        // 0x803F3124: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_803F3130;
    }
    // 0x803F3124: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x803F3128: b           L_803F34C4
    // 0x803F312C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_803F34C4;
    // 0x803F312C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_803F3130:
    // 0x803F3130: lui         $a1, 0x803F
    ctx->r5 = S32(0X803F << 16);
    // 0x803F3134: addiu       $a1, $a1, 0x7440
    ctx->r5 = ADD32(ctx->r5, 0X7440);
    // 0x803F3138: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    // 0x803F313C: jal         0x803F2748
    // 0x803F3140: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    ovl_803F0000_menu_func_803F2748(rdram, ctx);
        goto after_18;
    // 0x803F3140: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_18:
    // 0x803F3144: beq         $v0, $zero, L_803F3418
    if (ctx->r2 == 0) {
        // 0x803F3148: nop
    
            goto L_803F3418;
    }
    // 0x803F3148: nop

    // 0x803F314C: b           L_803F34C4
    // 0x803F3150: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_803F34C4;
    // 0x803F3150: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_803F3154:
    // 0x803F3154: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x803F3158: jal         0x803F2748
    // 0x803F315C: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    ovl_803F0000_menu_func_803F2748(rdram, ctx);
        goto after_19;
    // 0x803F315C: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_19:
    // 0x803F3160: beq         $v0, $zero, L_803F3170
    if (ctx->r2 == 0) {
        // 0x803F3164: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_803F3170;
    }
    // 0x803F3164: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x803F3168: b           L_803F34C4
    // 0x803F316C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_803F34C4;
    // 0x803F316C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_803F3170:
    // 0x803F3170: lui         $a1, 0x803F
    ctx->r5 = S32(0X803F << 16);
    // 0x803F3174: addiu       $a1, $a1, 0x7440
    ctx->r5 = ADD32(ctx->r5, 0X7440);
    // 0x803F3178: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    // 0x803F317C: jal         0x803F2748
    // 0x803F3180: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    ovl_803F0000_menu_func_803F2748(rdram, ctx);
        goto after_20;
    // 0x803F3180: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_20:
    // 0x803F3184: beq         $v0, $zero, L_803F3418
    if (ctx->r2 == 0) {
        // 0x803F3188: nop
    
            goto L_803F3418;
    }
    // 0x803F3188: nop

    // 0x803F318C: b           L_803F34C4
    // 0x803F3190: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_803F34C4;
    // 0x803F3190: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_803F3194:
    // 0x803F3194: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x803F3198: jal         0x803F1990
    // 0x803F319C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    ovl_803F0000_menu_func_803F1990(rdram, ctx);
        goto after_21;
    // 0x803F319C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_21:
    // 0x803F31A0: beq         $v0, $zero, L_803F32A0
    if (ctx->r2 == 0) {
        // 0x803F31A4: nop
    
            goto L_803F32A0;
    }
    // 0x803F31A4: nop

    // 0x803F31A8: lw          $t7, 0xC8($s0)
    ctx->r15 = MEM_W(ctx->r16, 0XC8);
    // 0x803F31AC: lui         $a1, 0x803F
    ctx->r5 = S32(0X803F << 16);
    // 0x803F31B0: lh          $v0, 0x8B0($t7)
    ctx->r2 = MEM_H(ctx->r15, 0X8B0);
    // 0x803F31B4: addiu       $a1, $a1, 0x747C
    ctx->r5 = ADD32(ctx->r5, 0X747C);
    // 0x803F31B8: slti        $at, $v0, 0x65
    ctx->r1 = SIGNED(ctx->r2) < 0X65 ? 1 : 0;
    // 0x803F31BC: bne         $at, $zero, L_803F3204
    if (ctx->r1 != 0) {
        // 0x803F31C0: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_803F3204;
    }
    // 0x803F31C0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x803F31C4: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    // 0x803F31C8: jal         0x803F2748
    // 0x803F31CC: addiu       $a3, $zero, 0x12
    ctx->r7 = ADD32(0, 0X12);
    ovl_803F0000_menu_func_803F2748(rdram, ctx);
        goto after_22;
    // 0x803F31CC: addiu       $a3, $zero, 0x12
    ctx->r7 = ADD32(0, 0X12);
    after_22:
    // 0x803F31D0: beq         $v0, $zero, L_803F31E0
    if (ctx->r2 == 0) {
        // 0x803F31D4: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_803F31E0;
    }
    // 0x803F31D4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x803F31D8: b           L_803F34C4
    // 0x803F31DC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_803F34C4;
    // 0x803F31DC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_803F31E0:
    // 0x803F31E0: lui         $a1, 0x803F
    ctx->r5 = S32(0X803F << 16);
    // 0x803F31E4: addiu       $a1, $a1, 0x7474
    ctx->r5 = ADD32(ctx->r5, 0X7474);
    // 0x803F31E8: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x803F31EC: jal         0x803F2748
    // 0x803F31F0: addiu       $a3, $zero, 0x12
    ctx->r7 = ADD32(0, 0X12);
    ovl_803F0000_menu_func_803F2748(rdram, ctx);
        goto after_23;
    // 0x803F31F0: addiu       $a3, $zero, 0x12
    ctx->r7 = ADD32(0, 0X12);
    after_23:
    // 0x803F31F4: beq         $v0, $zero, L_803F32A0
    if (ctx->r2 == 0) {
        // 0x803F31F8: nop
    
            goto L_803F32A0;
    }
    // 0x803F31F8: nop

    // 0x803F31FC: b           L_803F34C4
    // 0x803F3200: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_803F34C4;
    // 0x803F3200: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_803F3204:
    // 0x803F3204: blez        $v0, L_803F327C
    if (SIGNED(ctx->r2) <= 0) {
        // 0x803F3208: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_803F327C;
    }
    // 0x803F3208: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x803F320C: lui         $a1, 0x803F
    ctx->r5 = S32(0X803F << 16);
    // 0x803F3210: addiu       $a1, $a1, 0x7484
    ctx->r5 = ADD32(ctx->r5, 0X7484);
    // 0x803F3214: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x803F3218: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    // 0x803F321C: jal         0x803F2748
    // 0x803F3220: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    ovl_803F0000_menu_func_803F2748(rdram, ctx);
        goto after_24;
    // 0x803F3220: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_24:
    // 0x803F3224: beq         $v0, $zero, L_803F3234
    if (ctx->r2 == 0) {
        // 0x803F3228: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_803F3234;
    }
    // 0x803F3228: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x803F322C: b           L_803F34C4
    // 0x803F3230: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_803F34C4;
    // 0x803F3230: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_803F3234:
    // 0x803F3234: lui         $a1, 0x803F
    ctx->r5 = S32(0X803F << 16);
    // 0x803F3238: addiu       $a1, $a1, 0x746C
    ctx->r5 = ADD32(ctx->r5, 0X746C);
    // 0x803F323C: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    // 0x803F3240: jal         0x803F2748
    // 0x803F3244: addiu       $a3, $zero, 0x12
    ctx->r7 = ADD32(0, 0X12);
    ovl_803F0000_menu_func_803F2748(rdram, ctx);
        goto after_25;
    // 0x803F3244: addiu       $a3, $zero, 0x12
    ctx->r7 = ADD32(0, 0X12);
    after_25:
    // 0x803F3248: beq         $v0, $zero, L_803F3258
    if (ctx->r2 == 0) {
        // 0x803F324C: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_803F3258;
    }
    // 0x803F324C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x803F3250: b           L_803F34C4
    // 0x803F3254: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_803F34C4;
    // 0x803F3254: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_803F3258:
    // 0x803F3258: lui         $a1, 0x803F
    ctx->r5 = S32(0X803F << 16);
    // 0x803F325C: addiu       $a1, $a1, 0x7460
    ctx->r5 = ADD32(ctx->r5, 0X7460);
    // 0x803F3260: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x803F3264: jal         0x803F2748
    // 0x803F3268: addiu       $a3, $zero, 0x12
    ctx->r7 = ADD32(0, 0X12);
    ovl_803F0000_menu_func_803F2748(rdram, ctx);
        goto after_26;
    // 0x803F3268: addiu       $a3, $zero, 0x12
    ctx->r7 = ADD32(0, 0X12);
    after_26:
    // 0x803F326C: beq         $v0, $zero, L_803F32A0
    if (ctx->r2 == 0) {
        // 0x803F3270: nop
    
            goto L_803F32A0;
    }
    // 0x803F3270: nop

    // 0x803F3274: b           L_803F34C4
    // 0x803F3278: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_803F34C4;
    // 0x803F3278: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_803F327C:
    // 0x803F327C: lui         $a1, 0x803F
    ctx->r5 = S32(0X803F << 16);
    // 0x803F3280: addiu       $a1, $a1, 0x748C
    ctx->r5 = ADD32(ctx->r5, 0X748C);
    // 0x803F3284: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x803F3288: jal         0x803F2748
    // 0x803F328C: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    ovl_803F0000_menu_func_803F2748(rdram, ctx);
        goto after_27;
    // 0x803F328C: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_27:
    // 0x803F3290: beq         $v0, $zero, L_803F32A0
    if (ctx->r2 == 0) {
        // 0x803F3294: nop
    
            goto L_803F32A0;
    }
    // 0x803F3294: nop

    // 0x803F3298: b           L_803F34C4
    // 0x803F329C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_803F34C4;
    // 0x803F329C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_803F32A0:
    // 0x803F32A0: lui         $a1, 0x803F
    ctx->r5 = S32(0X803F << 16);
    // 0x803F32A4: addiu       $a1, $a1, 0x7464
    ctx->r5 = ADD32(ctx->r5, 0X7464);
    // 0x803F32A8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x803F32AC: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    // 0x803F32B0: jal         0x803F2748
    // 0x803F32B4: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    ovl_803F0000_menu_func_803F2748(rdram, ctx);
        goto after_28;
    // 0x803F32B4: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_28:
    // 0x803F32B8: beq         $v0, $zero, L_803F32C8
    if (ctx->r2 == 0) {
        // 0x803F32BC: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_803F32C8;
    }
    // 0x803F32BC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x803F32C0: b           L_803F34C4
    // 0x803F32C4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_803F34C4;
    // 0x803F32C4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_803F32C8:
    // 0x803F32C8: lui         $a1, 0x803F
    ctx->r5 = S32(0X803F << 16);
    // 0x803F32CC: addiu       $a1, $a1, 0x7478
    ctx->r5 = ADD32(ctx->r5, 0X7478);
    // 0x803F32D0: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x803F32D4: jal         0x803F2748
    // 0x803F32D8: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    ovl_803F0000_menu_func_803F2748(rdram, ctx);
        goto after_29;
    // 0x803F32D8: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_29:
    // 0x803F32DC: beq         $v0, $zero, L_803F3418
    if (ctx->r2 == 0) {
        // 0x803F32E0: nop
    
            goto L_803F3418;
    }
    // 0x803F32E0: nop

    // 0x803F32E4: b           L_803F34C4
    // 0x803F32E8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_803F34C4;
    // 0x803F32E8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_803F32EC:
    // 0x803F32EC: lui         $a1, 0x803F
    ctx->r5 = S32(0X803F << 16);
    // 0x803F32F0: addiu       $a1, $a1, 0x74AC
    ctx->r5 = ADD32(ctx->r5, 0X74AC);
    // 0x803F32F4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x803F32F8: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    // 0x803F32FC: jal         0x803F2748
    // 0x803F3300: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    ovl_803F0000_menu_func_803F2748(rdram, ctx);
        goto after_30;
    // 0x803F3300: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_30:
    // 0x803F3304: beq         $v0, $zero, L_803F3314
    if (ctx->r2 == 0) {
        // 0x803F3308: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_803F3314;
    }
    // 0x803F3308: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x803F330C: b           L_803F34C4
    // 0x803F3310: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_803F34C4;
    // 0x803F3310: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_803F3314:
    // 0x803F3314: lui         $a1, 0x803F
    ctx->r5 = S32(0X803F << 16);
    // 0x803F3318: addiu       $a1, $a1, 0x7498
    ctx->r5 = ADD32(ctx->r5, 0X7498);
    // 0x803F331C: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x803F3320: jal         0x803F2748
    // 0x803F3324: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    ovl_803F0000_menu_func_803F2748(rdram, ctx);
        goto after_31;
    // 0x803F3324: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_31:
    // 0x803F3328: beq         $v0, $zero, L_803F3418
    if (ctx->r2 == 0) {
        // 0x803F332C: nop
    
            goto L_803F3418;
    }
    // 0x803F332C: nop

    // 0x803F3330: b           L_803F34C4
    // 0x803F3334: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_803F34C4;
    // 0x803F3334: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_803F3338:
    // 0x803F3338: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x803F333C: jal         0x803F1990
    // 0x803F3340: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    ovl_803F0000_menu_func_803F1990(rdram, ctx);
        goto after_32;
    // 0x803F3340: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_32:
    // 0x803F3344: beq         $v0, $zero, L_803F3394
    if (ctx->r2 == 0) {
        // 0x803F3348: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_803F3394;
    }
    // 0x803F3348: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x803F334C: lui         $a1, 0x803F
    ctx->r5 = S32(0X803F << 16);
    // 0x803F3350: addiu       $a1, $a1, 0x749C
    ctx->r5 = ADD32(ctx->r5, 0X749C);
    // 0x803F3354: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    // 0x803F3358: jal         0x803F2748
    // 0x803F335C: addiu       $a3, $zero, 0x12
    ctx->r7 = ADD32(0, 0X12);
    ovl_803F0000_menu_func_803F2748(rdram, ctx);
        goto after_33;
    // 0x803F335C: addiu       $a3, $zero, 0x12
    ctx->r7 = ADD32(0, 0X12);
    after_33:
    // 0x803F3360: beq         $v0, $zero, L_803F3370
    if (ctx->r2 == 0) {
        // 0x803F3364: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_803F3370;
    }
    // 0x803F3364: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x803F3368: b           L_803F34C4
    // 0x803F336C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_803F34C4;
    // 0x803F336C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_803F3370:
    // 0x803F3370: lui         $a1, 0x803F
    ctx->r5 = S32(0X803F << 16);
    // 0x803F3374: addiu       $a1, $a1, 0x74A4
    ctx->r5 = ADD32(ctx->r5, 0X74A4);
    // 0x803F3378: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x803F337C: jal         0x803F2748
    // 0x803F3380: addiu       $a3, $zero, 0x12
    ctx->r7 = ADD32(0, 0X12);
    ovl_803F0000_menu_func_803F2748(rdram, ctx);
        goto after_34;
    // 0x803F3380: addiu       $a3, $zero, 0x12
    ctx->r7 = ADD32(0, 0X12);
    after_34:
    // 0x803F3384: beq         $v0, $zero, L_803F3394
    if (ctx->r2 == 0) {
        // 0x803F3388: nop
    
            goto L_803F3394;
    }
    // 0x803F3388: nop

    // 0x803F338C: b           L_803F34C4
    // 0x803F3390: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_803F34C4;
    // 0x803F3390: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_803F3394:
    // 0x803F3394: lui         $t8, 0x8028
    ctx->r24 = S32(0X8028 << 16);
    // 0x803F3398: lh          $t8, -0x1B60($t8)
    ctx->r24 = MEM_H(ctx->r24, -0X1B60);
    // 0x803F339C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x803F33A0: andi        $t9, $t8, 0x1
    ctx->r25 = ctx->r24 & 0X1;
    // 0x803F33A4: beq         $t9, $zero, L_803F33CC
    if (ctx->r25 == 0) {
        // 0x803F33A8: lui         $a1, 0x803F
        ctx->r5 = S32(0X803F << 16);
            goto L_803F33CC;
    }
    // 0x803F33A8: lui         $a1, 0x803F
    ctx->r5 = S32(0X803F << 16);
    // 0x803F33AC: addiu       $a1, $a1, 0x74A8
    ctx->r5 = ADD32(ctx->r5, 0X74A8);
    // 0x803F33B0: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x803F33B4: jal         0x803F2748
    // 0x803F33B8: addiu       $a3, $zero, 0x12
    ctx->r7 = ADD32(0, 0X12);
    ovl_803F0000_menu_func_803F2748(rdram, ctx);
        goto after_35;
    // 0x803F33B8: addiu       $a3, $zero, 0x12
    ctx->r7 = ADD32(0, 0X12);
    after_35:
    // 0x803F33BC: beq         $v0, $zero, L_803F33CC
    if (ctx->r2 == 0) {
        // 0x803F33C0: nop
    
            goto L_803F33CC;
    }
    // 0x803F33C0: nop

    // 0x803F33C4: b           L_803F34C4
    // 0x803F33C8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_803F34C4;
    // 0x803F33C8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_803F33CC:
    // 0x803F33CC: lui         $a1, 0x803F
    ctx->r5 = S32(0X803F << 16);
    // 0x803F33D0: addiu       $a1, $a1, 0x7490
    ctx->r5 = ADD32(ctx->r5, 0X7490);
    // 0x803F33D4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x803F33D8: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    // 0x803F33DC: jal         0x803F2748
    // 0x803F33E0: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    ovl_803F0000_menu_func_803F2748(rdram, ctx);
        goto after_36;
    // 0x803F33E0: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_36:
    // 0x803F33E4: beq         $v0, $zero, L_803F33F4
    if (ctx->r2 == 0) {
        // 0x803F33E8: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_803F33F4;
    }
    // 0x803F33E8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x803F33EC: b           L_803F34C4
    // 0x803F33F0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_803F34C4;
    // 0x803F33F0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_803F33F4:
    // 0x803F33F4: lui         $a1, 0x803F
    ctx->r5 = S32(0X803F << 16);
    // 0x803F33F8: addiu       $a1, $a1, 0x7498
    ctx->r5 = ADD32(ctx->r5, 0X7498);
    // 0x803F33FC: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x803F3400: jal         0x803F2748
    // 0x803F3404: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    ovl_803F0000_menu_func_803F2748(rdram, ctx);
        goto after_37;
    // 0x803F3404: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_37:
    // 0x803F3408: beq         $v0, $zero, L_803F3418
    if (ctx->r2 == 0) {
        // 0x803F340C: nop
    
            goto L_803F3418;
    }
    // 0x803F340C: nop

    // 0x803F3410: b           L_803F34C4
    // 0x803F3414: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_803F34C4;
    // 0x803F3414: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_803F3418:
    // 0x803F3418: lw          $t1, 0xC8($s0)
    ctx->r9 = MEM_W(ctx->r16, 0XC8);
    // 0x803F341C: lui         $a1, 0x803F
    ctx->r5 = S32(0X803F << 16);
    // 0x803F3420: lh          $t2, 0x8B0($t1)
    ctx->r10 = MEM_H(ctx->r9, 0X8B0);
    // 0x803F3424: addiu       $a1, $a1, 0x74C0
    ctx->r5 = ADD32(ctx->r5, 0X74C0);
    // 0x803F3428: slti        $at, $t2, 0xC9
    ctx->r1 = SIGNED(ctx->r10) < 0XC9 ? 1 : 0;
    // 0x803F342C: bne         $at, $zero, L_803F3474
    if (ctx->r1 != 0) {
        // 0x803F3430: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_803F3474;
    }
    // 0x803F3430: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x803F3434: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x803F3438: jal         0x803F2748
    // 0x803F343C: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    ovl_803F0000_menu_func_803F2748(rdram, ctx);
        goto after_38;
    // 0x803F343C: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_38:
    // 0x803F3440: beq         $v0, $zero, L_803F3450
    if (ctx->r2 == 0) {
        // 0x803F3444: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_803F3450;
    }
    // 0x803F3444: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x803F3448: b           L_803F34C4
    // 0x803F344C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_803F34C4;
    // 0x803F344C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_803F3450:
    // 0x803F3450: lui         $a1, 0x803F
    ctx->r5 = S32(0X803F << 16);
    // 0x803F3454: addiu       $a1, $a1, 0x74C4
    ctx->r5 = ADD32(ctx->r5, 0X74C4);
    // 0x803F3458: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x803F345C: jal         0x803F2748
    // 0x803F3460: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    ovl_803F0000_menu_func_803F2748(rdram, ctx);
        goto after_39;
    // 0x803F3460: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_39:
    // 0x803F3464: beq         $v0, $zero, L_803F3474
    if (ctx->r2 == 0) {
        // 0x803F3468: nop
    
            goto L_803F3474;
    }
    // 0x803F3468: nop

    // 0x803F346C: b           L_803F34C4
    // 0x803F3470: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_803F34C4;
    // 0x803F3470: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_803F3474:
    // 0x803F3474: lui         $a1, 0x803F
    ctx->r5 = S32(0X803F << 16);
    // 0x803F3478: addiu       $a1, $a1, 0x74B8
    ctx->r5 = ADD32(ctx->r5, 0X74B8);
    // 0x803F347C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x803F3480: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x803F3484: jal         0x803F2748
    // 0x803F3488: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    ovl_803F0000_menu_func_803F2748(rdram, ctx);
        goto after_40;
    // 0x803F3488: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_40:
    // 0x803F348C: beq         $v0, $zero, L_803F349C
    if (ctx->r2 == 0) {
        // 0x803F3490: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_803F349C;
    }
    // 0x803F3490: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x803F3494: b           L_803F34C4
    // 0x803F3498: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_803F34C4;
    // 0x803F3498: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_803F349C:
    // 0x803F349C: lui         $a1, 0x803F
    ctx->r5 = S32(0X803F << 16);
    // 0x803F34A0: addiu       $a1, $a1, 0x74BC
    ctx->r5 = ADD32(ctx->r5, 0X74BC);
    // 0x803F34A4: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x803F34A8: jal         0x803F2748
    // 0x803F34AC: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    ovl_803F0000_menu_func_803F2748(rdram, ctx);
        goto after_41;
    // 0x803F34AC: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_41:
    // 0x803F34B0: beq         $v0, $zero, L_803F34C4
    if (ctx->r2 == 0) {
        // 0x803F34B4: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_803F34C4;
    }
    // 0x803F34B4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x803F34B8: b           L_803F34C4
    // 0x803F34BC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_803F34C4;
    // 0x803F34BC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x803F34C0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_803F34C4:
    // 0x803F34C4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x803F34C8: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x803F34CC: jr          $ra
    // 0x803F34D0: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x803F34D0: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void ovl_803F0000_menu_func_803F2ED4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803F2ED4: jal         0x80272AEC
    // 0x803F2ED8: nop

    LOOKUP_FUNC(0x80272AEC)(rdram, ctx);
        goto after_0;
    // 0x803F2ED8: nop

    after_0:
    // 0x803F2EDC: lw          $t9, 0xC8($s0)
    ctx->r25 = MEM_W(ctx->r16, 0XC8);
    // 0x803F2EE0: nop

    // 0x803F2EE4: lh          $v0, 0x8B0($t9)
    ctx->r2 = MEM_H(ctx->r25, 0X8B0);
    // 0x803F2EE8: nop

    // 0x803F2EEC: slti        $at, $v0, 0x108
    ctx->r1 = SIGNED(ctx->r2) < 0X108 ? 1 : 0;
    // 0x803F2EF0: beq         $at, $zero, L_803F2FE4
    if (ctx->r1 == 0) {
        // 0x803F2EF4: slti        $at, $v0, -0x107
        ctx->r1 = SIGNED(ctx->r2) < -0X107 ? 1 : 0;
            goto L_803F2FE4;
    }
    // 0x803F2EF4: slti        $at, $v0, -0x107
    ctx->r1 = SIGNED(ctx->r2) < -0X107 ? 1 : 0;
    // 0x803F2EF8: bne         $at, $zero, L_803F2FE4
    if (ctx->r1 != 0) {
        // 0x803F2EFC: lui         $at, 0x4348
        ctx->r1 = S32(0X4348 << 16);
            goto L_803F2FE4;
    }
    // 0x803F2EFC: lui         $at, 0x4348
    ctx->r1 = S32(0X4348 << 16);
    // 0x803F2F00: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x803F2F04: lui         $a1, 0x803F
    ctx->r5 = S32(0X803F << 16);
    // 0x803F2F08: c.lt.s      $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f0.fl < ctx->f4.fl;
    // 0x803F2F0C: addiu       $a1, $a1, 0x74C8
    ctx->r5 = ADD32(ctx->r5, 0X74C8);
    // 0x803F2F10: bc1f        L_803F2FE4
    if (!c1cs) {
        // 0x803F2F14: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_803F2FE4;
    }
    // 0x803F2F14: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x803F2F18: jal         0x803F1508
    // 0x803F2F1C: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    ovl_803F0000_menu_func_803F1508(rdram, ctx);
        goto after_1;
    // 0x803F2F1C: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    after_1:
    // 0x803F2F20: beq         $v0, $zero, L_803F2FE4
    if (ctx->r2 == 0) {
        // 0x803F2F24: addiu       $t2, $zero, 0x11
        ctx->r10 = ADD32(0, 0X11);
            goto L_803F2FE4;
    }
    // 0x803F2F24: addiu       $t2, $zero, 0x11
    ctx->r10 = ADD32(0, 0X11);
    // 0x803F2F28: lw          $t1, 0xC8($s0)
    ctx->r9 = MEM_W(ctx->r16, 0XC8);
    // 0x803F2F2C: lui         $at, 0x4220
    ctx->r1 = S32(0X4220 << 16);
    // 0x803F2F30: cfc1        $t4, $FpcCsr
    ctx->r12 = get_cop1_cs();
    // 0x803F2F34: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    // 0x803F2F38: ctc1        $a3, $FpcCsr
    set_cop1_cs(ctx->r7);
    // 0x803F2F3C: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x803F2F40: sw          $v0, 0x958($t1)
    MEM_W(0X958, ctx->r9) = ctx->r2;
    // 0x803F2F44: lw          $t3, 0xC8($s0)
    ctx->r11 = MEM_W(ctx->r16, 0XC8);
    // 0x803F2F48: cvt.w.s     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.u32l = CVT_W_S(ctx->f6.fl);
    // 0x803F2F4C: sh          $t2, 0x938($t3)
    MEM_H(0X938, ctx->r11) = ctx->r10;
    // 0x803F2F50: cfc1        $a3, $FpcCsr
    ctx->r7 = get_cop1_cs();
    // 0x803F2F54: lw          $a1, 0xC8($s0)
    ctx->r5 = MEM_W(ctx->r16, 0XC8);
    // 0x803F2F58: lw          $a2, 0x88($v0)
    ctx->r6 = MEM_W(ctx->r2, 0X88);
    // 0x803F2F5C: andi        $a3, $a3, 0x78
    ctx->r7 = ctx->r7 & 0X78;
    // 0x803F2F60: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x803F2F64: beq         $a3, $zero, L_803F2FB4
    if (ctx->r7 == 0) {
        // 0x803F2F68: addiu       $a1, $a1, 0x938
        ctx->r5 = ADD32(ctx->r5, 0X938);
            goto L_803F2FB4;
    }
    // 0x803F2F68: addiu       $a1, $a1, 0x938
    ctx->r5 = ADD32(ctx->r5, 0X938);
    // 0x803F2F6C: lui         $at, 0x4F00
    ctx->r1 = S32(0X4F00 << 16);
    // 0x803F2F70: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x803F2F74: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    // 0x803F2F78: sub.s       $f8, $f6, $f8
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f8.fl = ctx->f6.fl - ctx->f8.fl;
    // 0x803F2F7C: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x803F2F80: ctc1        $a3, $FpcCsr
    set_cop1_cs(ctx->r7);
    // 0x803F2F84: nop

    // 0x803F2F88: cvt.w.s     $f8, $f8
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 8);
    ctx->f8.u32l = CVT_W_S(ctx->f8.fl);
    // 0x803F2F8C: cfc1        $a3, $FpcCsr
    ctx->r7 = get_cop1_cs();
    // 0x803F2F90: nop

    // 0x803F2F94: andi        $a3, $a3, 0x78
    ctx->r7 = ctx->r7 & 0X78;
    // 0x803F2F98: bne         $a3, $zero, L_803F2FAC
    if (ctx->r7 != 0) {
        // 0x803F2F9C: nop
    
            goto L_803F2FAC;
    }
    // 0x803F2F9C: nop

    // 0x803F2FA0: mfc1        $a3, $f8
    ctx->r7 = (int32_t)ctx->f8.u32l;
    // 0x803F2FA4: b           L_803F2FC4
    // 0x803F2FA8: or          $a3, $a3, $at
    ctx->r7 = ctx->r7 | ctx->r1;
        goto L_803F2FC4;
    // 0x803F2FA8: or          $a3, $a3, $at
    ctx->r7 = ctx->r7 | ctx->r1;
L_803F2FAC:
    // 0x803F2FAC: b           L_803F2FC4
    // 0x803F2FB0: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
        goto L_803F2FC4;
    // 0x803F2FB0: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
L_803F2FB4:
    // 0x803F2FB4: mfc1        $a3, $f8
    ctx->r7 = (int32_t)ctx->f8.u32l;
    // 0x803F2FB8: nop

    // 0x803F2FBC: bltz        $a3, L_803F2FAC
    if (SIGNED(ctx->r7) < 0) {
        // 0x803F2FC0: nop
    
            goto L_803F2FAC;
    }
    // 0x803F2FC0: nop

L_803F2FC4:
    // 0x803F2FC4: ctc1        $t4, $FpcCsr
    set_cop1_cs(ctx->r12);
    // 0x803F2FC8: jal         0x803F1828
    // 0x803F2FCC: nop

    ovl_803F0000_menu_func_803F1828(rdram, ctx);
        goto after_2;
    // 0x803F2FCC: nop

    after_2:
    // 0x803F2FD0: lw          $t6, 0xC8($s0)
    ctx->r14 = MEM_W(ctx->r16, 0XC8);
    // 0x803F2FD4: addiu       $t5, $zero, 0x5
    ctx->r13 = ADD32(0, 0X5);
    // 0x803F2FD8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x803F2FDC: b           L_803F34C4
    // 0x803F2FE0: sh          $t5, 0x93A($t6)
    MEM_H(0X93A, ctx->r14) = ctx->r13;
        goto L_803F34C4;
    // 0x803F2FE0: sh          $t5, 0x93A($t6)
    MEM_H(0X93A, ctx->r14) = ctx->r13;
L_803F2FE4:
    // 0x803F2FE4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x803F2FE8: jal         0x803F1990
    // 0x803F2FEC: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    ovl_803F0000_menu_func_803F1990(rdram, ctx);
        goto after_3;
    // 0x803F2FEC: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_3:
    // 0x803F2FF0: beq         $v0, $zero, L_803F3034
    if (ctx->r2 == 0) {
        // 0x803F2FF4: nop
    
            goto L_803F3034;
    }
    // 0x803F2FF4: nop

    // 0x803F2FF8: lw          $v1, 0xC8($s0)
    ctx->r3 = MEM_W(ctx->r16, 0XC8);
    // 0x803F2FFC: nop

    // 0x803F3000: lh          $t7, 0x8CA($v1)
    ctx->r15 = MEM_H(ctx->r3, 0X8CA);
    // 0x803F3004: lh          $t8, 0x8B0($v1)
    ctx->r24 = MEM_H(ctx->r3, 0X8B0);
    // 0x803F3008: nop

    // 0x803F300C: subu        $t9, $t7, $t8
    ctx->r25 = SUB32(ctx->r15, ctx->r24);
    // 0x803F3010: slti        $at, $t9, 0xFB
    ctx->r1 = SIGNED(ctx->r25) < 0XFB ? 1 : 0;
    // 0x803F3014: bne         $at, $zero, L_803F3034
    if (ctx->r1 != 0) {
        // 0x803F3018: nop
    
            goto L_803F3034;
    }
    // 0x803F3018: nop

    // 0x803F301C: jal         0x803F282C
    // 0x803F3020: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_803F0000_menu_func_803F282C(rdram, ctx);
        goto after_4;
    // 0x803F3020: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_4:
    // 0x803F3024: beq         $v0, $zero, L_803F3034
    if (ctx->r2 == 0) {
        // 0x803F3028: nop
    
            goto L_803F3034;
    }
    // 0x803F3028: nop

    // 0x803F302C: b           L_803F34C4
    // 0x803F3030: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_803F34C4;
    // 0x803F3030: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_803F3034:
    // 0x803F3034: lw          $t1, 0xD4($s0)
    ctx->r9 = MEM_W(ctx->r16, 0XD4);
    // 0x803F3038: nop

    // 0x803F303C: lbu         $t2, 0x5($t1)
    ctx->r10 = MEM_BU(ctx->r9, 0X5);
    // 0x803F3040: nop

    // 0x803F3044: sltiu       $at, $t2, 0xB
    ctx->r1 = ctx->r10 < 0XB ? 1 : 0;
    // 0x803F3048: beq         $at, $zero, L_803F3418
    if (ctx->r1 == 0) {
        // 0x803F304C: sll         $t2, $t2, 2
        ctx->r10 = S32(ctx->r10 << 2);
            goto L_803F3418;
    }
    // 0x803F304C: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x803F3050: lui         $at, 0x803F
    ctx->r1 = S32(0X803F << 16);
    // 0x803F3054: addu        $at, $at, $t2
    gpr jr_addend_803F3060 = ctx->r10;
    ctx->r1 = ADD32(ctx->r1, ctx->r10);
    // 0x803F3058: lw          $t2, 0x7C8C($at)
    ctx->r10 = ADD32(ctx->r1, 0X7C8C);
    // 0x803F305C: nop

    // 0x803F3060: jr          $t2
    // 0x803F3064: nop

    switch (jr_addend_803F3060 >> 2) {
        case 0: goto L_803F3068; break;
        case 1: goto L_803F3068; break;
        case 2: goto L_803F3068; break;
        case 3: goto L_803F3068; break;
        case 4: goto L_803F3090; break;
        case 5: goto L_803F3090; break;
        case 6: goto L_803F3194; break;
        case 7: goto L_803F3194; break;
        case 8: goto L_803F32EC; break;
        case 9: goto L_803F3338; break;
        case 10: goto L_803F3338; break;
        default: switch_error(__func__, 0x803F3060, 0x803F7C8C);
    }
    // 0x803F3064: nop

L_803F3068:
    // 0x803F3068: lui         $a1, 0x803F
    ctx->r5 = S32(0X803F << 16);
    // 0x803F306C: addiu       $a1, $a1, 0x7438
    ctx->r5 = ADD32(ctx->r5, 0X7438);
    // 0x803F3070: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x803F3074: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    // 0x803F3078: jal         0x803F2748
    // 0x803F307C: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    ovl_803F0000_menu_func_803F2748(rdram, ctx);
        goto after_5;
    // 0x803F307C: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_5:
    // 0x803F3080: beq         $v0, $zero, L_803F3418
    if (ctx->r2 == 0) {
        // 0x803F3084: nop
    
            goto L_803F3418;
    }
    // 0x803F3084: nop

    // 0x803F3088: b           L_803F34C4
    // 0x803F308C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_803F34C4;
    // 0x803F308C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_803F3090:
    // 0x803F3090: lw          $t3, 0xC8($s0)
    ctx->r11 = MEM_W(ctx->r16, 0XC8);
    // 0x803F3094: lui         $a1, 0x803F
    ctx->r5 = S32(0X803F << 16);
    // 0x803F3098: lh          $t4, 0x8B0($t3)
    ctx->r12 = MEM_H(ctx->r11, 0X8B0);
    // 0x803F309C: addiu       $a1, $a1, 0x745C
    ctx->r5 = ADD32(ctx->r5, 0X745C);
    // 0x803F30A0: blez        $t4, L_803F3154
    if (SIGNED(ctx->r12) <= 0) {
        // 0x803F30A4: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_803F3154;
    }
    // 0x803F30A4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x803F30A8: lui         $a1, 0x803F
    ctx->r5 = S32(0X803F << 16);
    // 0x803F30AC: addiu       $a1, $a1, 0x744C
    ctx->r5 = ADD32(ctx->r5, 0X744C);
    // 0x803F30B0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x803F30B4: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x803F30B8: jal         0x803F2748
    // 0x803F30BC: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    ovl_803F0000_menu_func_803F2748(rdram, ctx);
        goto after_6;
    // 0x803F30BC: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_6:
    // 0x803F30C0: beq         $v0, $zero, L_803F30D0
    if (ctx->r2 == 0) {
        // 0x803F30C4: nop
    
            goto L_803F30D0;
    }
    // 0x803F30C4: nop

    // 0x803F30C8: b           L_803F34C4
    // 0x803F30CC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_803F34C4;
    // 0x803F30CC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_803F30D0:
    // 0x803F30D0: lw          $t5, 0xC8($s0)
    ctx->r13 = MEM_W(ctx->r16, 0XC8);
    // 0x803F30D4: lui         $a1, 0x803F
    ctx->r5 = S32(0X803F << 16);
    // 0x803F30D8: lh          $t6, 0x8B0($t5)
    ctx->r14 = MEM_H(ctx->r13, 0X8B0);
    // 0x803F30DC: addiu       $a1, $a1, 0x745C
    ctx->r5 = ADD32(ctx->r5, 0X745C);
    // 0x803F30E0: slti        $at, $t6, 0xC9
    ctx->r1 = SIGNED(ctx->r14) < 0XC9 ? 1 : 0;
    // 0x803F30E4: bne         $at, $zero, L_803F3114
    if (ctx->r1 != 0) {
        // 0x803F30E8: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_803F3114;
    }
    // 0x803F30E8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x803F30EC: lui         $a1, 0x803F
    ctx->r5 = S32(0X803F << 16);
    // 0x803F30F0: addiu       $a1, $a1, 0x7450
    ctx->r5 = ADD32(ctx->r5, 0X7450);
    // 0x803F30F4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x803F30F8: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    // 0x803F30FC: jal         0x803F2748
    // 0x803F3100: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    ovl_803F0000_menu_func_803F2748(rdram, ctx);
        goto after_7;
    // 0x803F3100: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_7:
    // 0x803F3104: beq         $v0, $zero, L_803F3418
    if (ctx->r2 == 0) {
        // 0x803F3108: nop
    
            goto L_803F3418;
    }
    // 0x803F3108: nop

    // 0x803F310C: b           L_803F34C4
    // 0x803F3110: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_803F34C4;
    // 0x803F3110: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_803F3114:
    // 0x803F3114: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x803F3118: jal         0x803F2748
    // 0x803F311C: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    ovl_803F0000_menu_func_803F2748(rdram, ctx);
        goto after_8;
    // 0x803F311C: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_8:
    // 0x803F3120: beq         $v0, $zero, L_803F3130
    if (ctx->r2 == 0) {
        // 0x803F3124: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_803F3130;
    }
    // 0x803F3124: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x803F3128: b           L_803F34C4
    // 0x803F312C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_803F34C4;
    // 0x803F312C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_803F3130:
    // 0x803F3130: lui         $a1, 0x803F
    ctx->r5 = S32(0X803F << 16);
    // 0x803F3134: addiu       $a1, $a1, 0x7440
    ctx->r5 = ADD32(ctx->r5, 0X7440);
    // 0x803F3138: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    // 0x803F313C: jal         0x803F2748
    // 0x803F3140: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    ovl_803F0000_menu_func_803F2748(rdram, ctx);
        goto after_9;
    // 0x803F3140: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_9:
    // 0x803F3144: beq         $v0, $zero, L_803F3418
    if (ctx->r2 == 0) {
        // 0x803F3148: nop
    
            goto L_803F3418;
    }
    // 0x803F3148: nop

    // 0x803F314C: b           L_803F34C4
    // 0x803F3150: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_803F34C4;
    // 0x803F3150: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_803F3154:
    // 0x803F3154: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x803F3158: jal         0x803F2748
    // 0x803F315C: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    ovl_803F0000_menu_func_803F2748(rdram, ctx);
        goto after_10;
    // 0x803F315C: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_10:
    // 0x803F3160: beq         $v0, $zero, L_803F3170
    if (ctx->r2 == 0) {
        // 0x803F3164: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_803F3170;
    }
    // 0x803F3164: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x803F3168: b           L_803F34C4
    // 0x803F316C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_803F34C4;
    // 0x803F316C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_803F3170:
    // 0x803F3170: lui         $a1, 0x803F
    ctx->r5 = S32(0X803F << 16);
    // 0x803F3174: addiu       $a1, $a1, 0x7440
    ctx->r5 = ADD32(ctx->r5, 0X7440);
    // 0x803F3178: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    // 0x803F317C: jal         0x803F2748
    // 0x803F3180: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    ovl_803F0000_menu_func_803F2748(rdram, ctx);
        goto after_11;
    // 0x803F3180: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_11:
    // 0x803F3184: beq         $v0, $zero, L_803F3418
    if (ctx->r2 == 0) {
        // 0x803F3188: nop
    
            goto L_803F3418;
    }
    // 0x803F3188: nop

    // 0x803F318C: b           L_803F34C4
    // 0x803F3190: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_803F34C4;
    // 0x803F3190: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_803F3194:
    // 0x803F3194: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x803F3198: jal         0x803F1990
    // 0x803F319C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    ovl_803F0000_menu_func_803F1990(rdram, ctx);
        goto after_12;
    // 0x803F319C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_12:
    // 0x803F31A0: beq         $v0, $zero, L_803F32A0
    if (ctx->r2 == 0) {
        // 0x803F31A4: nop
    
            goto L_803F32A0;
    }
    // 0x803F31A4: nop

    // 0x803F31A8: lw          $t7, 0xC8($s0)
    ctx->r15 = MEM_W(ctx->r16, 0XC8);
    // 0x803F31AC: lui         $a1, 0x803F
    ctx->r5 = S32(0X803F << 16);
    // 0x803F31B0: lh          $v0, 0x8B0($t7)
    ctx->r2 = MEM_H(ctx->r15, 0X8B0);
    // 0x803F31B4: addiu       $a1, $a1, 0x747C
    ctx->r5 = ADD32(ctx->r5, 0X747C);
    // 0x803F31B8: slti        $at, $v0, 0x65
    ctx->r1 = SIGNED(ctx->r2) < 0X65 ? 1 : 0;
    // 0x803F31BC: bne         $at, $zero, L_803F3204
    if (ctx->r1 != 0) {
        // 0x803F31C0: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_803F3204;
    }
    // 0x803F31C0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x803F31C4: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    // 0x803F31C8: jal         0x803F2748
    // 0x803F31CC: addiu       $a3, $zero, 0x12
    ctx->r7 = ADD32(0, 0X12);
    ovl_803F0000_menu_func_803F2748(rdram, ctx);
        goto after_13;
    // 0x803F31CC: addiu       $a3, $zero, 0x12
    ctx->r7 = ADD32(0, 0X12);
    after_13:
    // 0x803F31D0: beq         $v0, $zero, L_803F31E0
    if (ctx->r2 == 0) {
        // 0x803F31D4: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_803F31E0;
    }
    // 0x803F31D4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x803F31D8: b           L_803F34C4
    // 0x803F31DC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_803F34C4;
    // 0x803F31DC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_803F31E0:
    // 0x803F31E0: lui         $a1, 0x803F
    ctx->r5 = S32(0X803F << 16);
    // 0x803F31E4: addiu       $a1, $a1, 0x7474
    ctx->r5 = ADD32(ctx->r5, 0X7474);
    // 0x803F31E8: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x803F31EC: jal         0x803F2748
    // 0x803F31F0: addiu       $a3, $zero, 0x12
    ctx->r7 = ADD32(0, 0X12);
    ovl_803F0000_menu_func_803F2748(rdram, ctx);
        goto after_14;
    // 0x803F31F0: addiu       $a3, $zero, 0x12
    ctx->r7 = ADD32(0, 0X12);
    after_14:
    // 0x803F31F4: beq         $v0, $zero, L_803F32A0
    if (ctx->r2 == 0) {
        // 0x803F31F8: nop
    
            goto L_803F32A0;
    }
    // 0x803F31F8: nop

    // 0x803F31FC: b           L_803F34C4
    // 0x803F3200: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_803F34C4;
    // 0x803F3200: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_803F3204:
    // 0x803F3204: blez        $v0, L_803F327C
    if (SIGNED(ctx->r2) <= 0) {
        // 0x803F3208: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_803F327C;
    }
    // 0x803F3208: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x803F320C: lui         $a1, 0x803F
    ctx->r5 = S32(0X803F << 16);
    // 0x803F3210: addiu       $a1, $a1, 0x7484
    ctx->r5 = ADD32(ctx->r5, 0X7484);
    // 0x803F3214: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x803F3218: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    // 0x803F321C: jal         0x803F2748
    // 0x803F3220: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    ovl_803F0000_menu_func_803F2748(rdram, ctx);
        goto after_15;
    // 0x803F3220: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_15:
    // 0x803F3224: beq         $v0, $zero, L_803F3234
    if (ctx->r2 == 0) {
        // 0x803F3228: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_803F3234;
    }
    // 0x803F3228: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x803F322C: b           L_803F34C4
    // 0x803F3230: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_803F34C4;
    // 0x803F3230: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_803F3234:
    // 0x803F3234: lui         $a1, 0x803F
    ctx->r5 = S32(0X803F << 16);
    // 0x803F3238: addiu       $a1, $a1, 0x746C
    ctx->r5 = ADD32(ctx->r5, 0X746C);
    // 0x803F323C: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    // 0x803F3240: jal         0x803F2748
    // 0x803F3244: addiu       $a3, $zero, 0x12
    ctx->r7 = ADD32(0, 0X12);
    ovl_803F0000_menu_func_803F2748(rdram, ctx);
        goto after_16;
    // 0x803F3244: addiu       $a3, $zero, 0x12
    ctx->r7 = ADD32(0, 0X12);
    after_16:
    // 0x803F3248: beq         $v0, $zero, L_803F3258
    if (ctx->r2 == 0) {
        // 0x803F324C: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_803F3258;
    }
    // 0x803F324C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x803F3250: b           L_803F34C4
    // 0x803F3254: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_803F34C4;
    // 0x803F3254: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_803F3258:
    // 0x803F3258: lui         $a1, 0x803F
    ctx->r5 = S32(0X803F << 16);
    // 0x803F325C: addiu       $a1, $a1, 0x7460
    ctx->r5 = ADD32(ctx->r5, 0X7460);
    // 0x803F3260: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x803F3264: jal         0x803F2748
    // 0x803F3268: addiu       $a3, $zero, 0x12
    ctx->r7 = ADD32(0, 0X12);
    ovl_803F0000_menu_func_803F2748(rdram, ctx);
        goto after_17;
    // 0x803F3268: addiu       $a3, $zero, 0x12
    ctx->r7 = ADD32(0, 0X12);
    after_17:
    // 0x803F326C: beq         $v0, $zero, L_803F32A0
    if (ctx->r2 == 0) {
        // 0x803F3270: nop
    
            goto L_803F32A0;
    }
    // 0x803F3270: nop

    // 0x803F3274: b           L_803F34C4
    // 0x803F3278: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_803F34C4;
    // 0x803F3278: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_803F327C:
    // 0x803F327C: lui         $a1, 0x803F
    ctx->r5 = S32(0X803F << 16);
    // 0x803F3280: addiu       $a1, $a1, 0x748C
    ctx->r5 = ADD32(ctx->r5, 0X748C);
    // 0x803F3284: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x803F3288: jal         0x803F2748
    // 0x803F328C: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    ovl_803F0000_menu_func_803F2748(rdram, ctx);
        goto after_18;
    // 0x803F328C: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_18:
    // 0x803F3290: beq         $v0, $zero, L_803F32A0
    if (ctx->r2 == 0) {
        // 0x803F3294: nop
    
            goto L_803F32A0;
    }
    // 0x803F3294: nop

    // 0x803F3298: b           L_803F34C4
    // 0x803F329C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_803F34C4;
    // 0x803F329C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_803F32A0:
    // 0x803F32A0: lui         $a1, 0x803F
    ctx->r5 = S32(0X803F << 16);
    // 0x803F32A4: addiu       $a1, $a1, 0x7464
    ctx->r5 = ADD32(ctx->r5, 0X7464);
    // 0x803F32A8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x803F32AC: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    // 0x803F32B0: jal         0x803F2748
    // 0x803F32B4: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    ovl_803F0000_menu_func_803F2748(rdram, ctx);
        goto after_19;
    // 0x803F32B4: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_19:
    // 0x803F32B8: beq         $v0, $zero, L_803F32C8
    if (ctx->r2 == 0) {
        // 0x803F32BC: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_803F32C8;
    }
    // 0x803F32BC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x803F32C0: b           L_803F34C4
    // 0x803F32C4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_803F34C4;
    // 0x803F32C4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_803F32C8:
    // 0x803F32C8: lui         $a1, 0x803F
    ctx->r5 = S32(0X803F << 16);
    // 0x803F32CC: addiu       $a1, $a1, 0x7478
    ctx->r5 = ADD32(ctx->r5, 0X7478);
    // 0x803F32D0: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x803F32D4: jal         0x803F2748
    // 0x803F32D8: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    ovl_803F0000_menu_func_803F2748(rdram, ctx);
        goto after_20;
    // 0x803F32D8: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_20:
    // 0x803F32DC: beq         $v0, $zero, L_803F3418
    if (ctx->r2 == 0) {
        // 0x803F32E0: nop
    
            goto L_803F3418;
    }
    // 0x803F32E0: nop

    // 0x803F32E4: b           L_803F34C4
    // 0x803F32E8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_803F34C4;
    // 0x803F32E8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_803F32EC:
    // 0x803F32EC: lui         $a1, 0x803F
    ctx->r5 = S32(0X803F << 16);
    // 0x803F32F0: addiu       $a1, $a1, 0x74AC
    ctx->r5 = ADD32(ctx->r5, 0X74AC);
    // 0x803F32F4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x803F32F8: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    // 0x803F32FC: jal         0x803F2748
    // 0x803F3300: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    ovl_803F0000_menu_func_803F2748(rdram, ctx);
        goto after_21;
    // 0x803F3300: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_21:
    // 0x803F3304: beq         $v0, $zero, L_803F3314
    if (ctx->r2 == 0) {
        // 0x803F3308: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_803F3314;
    }
    // 0x803F3308: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x803F330C: b           L_803F34C4
    // 0x803F3310: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_803F34C4;
    // 0x803F3310: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_803F3314:
    // 0x803F3314: lui         $a1, 0x803F
    ctx->r5 = S32(0X803F << 16);
    // 0x803F3318: addiu       $a1, $a1, 0x7498
    ctx->r5 = ADD32(ctx->r5, 0X7498);
    // 0x803F331C: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x803F3320: jal         0x803F2748
    // 0x803F3324: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    ovl_803F0000_menu_func_803F2748(rdram, ctx);
        goto after_22;
    // 0x803F3324: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_22:
    // 0x803F3328: beq         $v0, $zero, L_803F3418
    if (ctx->r2 == 0) {
        // 0x803F332C: nop
    
            goto L_803F3418;
    }
    // 0x803F332C: nop

    // 0x803F3330: b           L_803F34C4
    // 0x803F3334: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_803F34C4;
    // 0x803F3334: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_803F3338:
    // 0x803F3338: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x803F333C: jal         0x803F1990
    // 0x803F3340: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    ovl_803F0000_menu_func_803F1990(rdram, ctx);
        goto after_23;
    // 0x803F3340: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_23:
    // 0x803F3344: beq         $v0, $zero, L_803F3394
    if (ctx->r2 == 0) {
        // 0x803F3348: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_803F3394;
    }
    // 0x803F3348: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x803F334C: lui         $a1, 0x803F
    ctx->r5 = S32(0X803F << 16);
    // 0x803F3350: addiu       $a1, $a1, 0x749C
    ctx->r5 = ADD32(ctx->r5, 0X749C);
    // 0x803F3354: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    // 0x803F3358: jal         0x803F2748
    // 0x803F335C: addiu       $a3, $zero, 0x12
    ctx->r7 = ADD32(0, 0X12);
    ovl_803F0000_menu_func_803F2748(rdram, ctx);
        goto after_24;
    // 0x803F335C: addiu       $a3, $zero, 0x12
    ctx->r7 = ADD32(0, 0X12);
    after_24:
    // 0x803F3360: beq         $v0, $zero, L_803F3370
    if (ctx->r2 == 0) {
        // 0x803F3364: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_803F3370;
    }
    // 0x803F3364: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x803F3368: b           L_803F34C4
    // 0x803F336C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_803F34C4;
    // 0x803F336C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_803F3370:
    // 0x803F3370: lui         $a1, 0x803F
    ctx->r5 = S32(0X803F << 16);
    // 0x803F3374: addiu       $a1, $a1, 0x74A4
    ctx->r5 = ADD32(ctx->r5, 0X74A4);
    // 0x803F3378: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x803F337C: jal         0x803F2748
    // 0x803F3380: addiu       $a3, $zero, 0x12
    ctx->r7 = ADD32(0, 0X12);
    ovl_803F0000_menu_func_803F2748(rdram, ctx);
        goto after_25;
    // 0x803F3380: addiu       $a3, $zero, 0x12
    ctx->r7 = ADD32(0, 0X12);
    after_25:
    // 0x803F3384: beq         $v0, $zero, L_803F3394
    if (ctx->r2 == 0) {
        // 0x803F3388: nop
    
            goto L_803F3394;
    }
    // 0x803F3388: nop

    // 0x803F338C: b           L_803F34C4
    // 0x803F3390: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_803F34C4;
    // 0x803F3390: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_803F3394:
    // 0x803F3394: lui         $t8, 0x8028
    ctx->r24 = S32(0X8028 << 16);
    // 0x803F3398: lh          $t8, -0x1B60($t8)
    ctx->r24 = MEM_H(ctx->r24, -0X1B60);
    // 0x803F339C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x803F33A0: andi        $t9, $t8, 0x1
    ctx->r25 = ctx->r24 & 0X1;
    // 0x803F33A4: beq         $t9, $zero, L_803F33CC
    if (ctx->r25 == 0) {
        // 0x803F33A8: lui         $a1, 0x803F
        ctx->r5 = S32(0X803F << 16);
            goto L_803F33CC;
    }
    // 0x803F33A8: lui         $a1, 0x803F
    ctx->r5 = S32(0X803F << 16);
    // 0x803F33AC: addiu       $a1, $a1, 0x74A8
    ctx->r5 = ADD32(ctx->r5, 0X74A8);
    // 0x803F33B0: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x803F33B4: jal         0x803F2748
    // 0x803F33B8: addiu       $a3, $zero, 0x12
    ctx->r7 = ADD32(0, 0X12);
    ovl_803F0000_menu_func_803F2748(rdram, ctx);
        goto after_26;
    // 0x803F33B8: addiu       $a3, $zero, 0x12
    ctx->r7 = ADD32(0, 0X12);
    after_26:
    // 0x803F33BC: beq         $v0, $zero, L_803F33CC
    if (ctx->r2 == 0) {
        // 0x803F33C0: nop
    
            goto L_803F33CC;
    }
    // 0x803F33C0: nop

    // 0x803F33C4: b           L_803F34C4
    // 0x803F33C8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_803F34C4;
    // 0x803F33C8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_803F33CC:
    // 0x803F33CC: lui         $a1, 0x803F
    ctx->r5 = S32(0X803F << 16);
    // 0x803F33D0: addiu       $a1, $a1, 0x7490
    ctx->r5 = ADD32(ctx->r5, 0X7490);
    // 0x803F33D4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x803F33D8: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    // 0x803F33DC: jal         0x803F2748
    // 0x803F33E0: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    ovl_803F0000_menu_func_803F2748(rdram, ctx);
        goto after_27;
    // 0x803F33E0: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_27:
    // 0x803F33E4: beq         $v0, $zero, L_803F33F4
    if (ctx->r2 == 0) {
        // 0x803F33E8: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_803F33F4;
    }
    // 0x803F33E8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x803F33EC: b           L_803F34C4
    // 0x803F33F0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_803F34C4;
    // 0x803F33F0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_803F33F4:
    // 0x803F33F4: lui         $a1, 0x803F
    ctx->r5 = S32(0X803F << 16);
    // 0x803F33F8: addiu       $a1, $a1, 0x7498
    ctx->r5 = ADD32(ctx->r5, 0X7498);
    // 0x803F33FC: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x803F3400: jal         0x803F2748
    // 0x803F3404: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    ovl_803F0000_menu_func_803F2748(rdram, ctx);
        goto after_28;
    // 0x803F3404: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_28:
    // 0x803F3408: beq         $v0, $zero, L_803F3418
    if (ctx->r2 == 0) {
        // 0x803F340C: nop
    
            goto L_803F3418;
    }
    // 0x803F340C: nop

    // 0x803F3410: b           L_803F34C4
    // 0x803F3414: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_803F34C4;
    // 0x803F3414: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_803F3418:
    // 0x803F3418: lw          $t1, 0xC8($s0)
    ctx->r9 = MEM_W(ctx->r16, 0XC8);
    // 0x803F341C: lui         $a1, 0x803F
    ctx->r5 = S32(0X803F << 16);
    // 0x803F3420: lh          $t2, 0x8B0($t1)
    ctx->r10 = MEM_H(ctx->r9, 0X8B0);
    // 0x803F3424: addiu       $a1, $a1, 0x74C0
    ctx->r5 = ADD32(ctx->r5, 0X74C0);
    // 0x803F3428: slti        $at, $t2, 0xC9
    ctx->r1 = SIGNED(ctx->r10) < 0XC9 ? 1 : 0;
    // 0x803F342C: bne         $at, $zero, L_803F3474
    if (ctx->r1 != 0) {
        // 0x803F3430: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_803F3474;
    }
    // 0x803F3430: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x803F3434: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x803F3438: jal         0x803F2748
    // 0x803F343C: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    ovl_803F0000_menu_func_803F2748(rdram, ctx);
        goto after_29;
    // 0x803F343C: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_29:
    // 0x803F3440: beq         $v0, $zero, L_803F3450
    if (ctx->r2 == 0) {
        // 0x803F3444: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_803F3450;
    }
    // 0x803F3444: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x803F3448: b           L_803F34C4
    // 0x803F344C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_803F34C4;
    // 0x803F344C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_803F3450:
    // 0x803F3450: lui         $a1, 0x803F
    ctx->r5 = S32(0X803F << 16);
    // 0x803F3454: addiu       $a1, $a1, 0x74C4
    ctx->r5 = ADD32(ctx->r5, 0X74C4);
    // 0x803F3458: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x803F345C: jal         0x803F2748
    // 0x803F3460: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    ovl_803F0000_menu_func_803F2748(rdram, ctx);
        goto after_30;
    // 0x803F3460: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_30:
    // 0x803F3464: beq         $v0, $zero, L_803F3474
    if (ctx->r2 == 0) {
        // 0x803F3468: nop
    
            goto L_803F3474;
    }
    // 0x803F3468: nop

    // 0x803F346C: b           L_803F34C4
    // 0x803F3470: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_803F34C4;
    // 0x803F3470: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_803F3474:
    // 0x803F3474: lui         $a1, 0x803F
    ctx->r5 = S32(0X803F << 16);
    // 0x803F3478: addiu       $a1, $a1, 0x74B8
    ctx->r5 = ADD32(ctx->r5, 0X74B8);
    // 0x803F347C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x803F3480: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x803F3484: jal         0x803F2748
    // 0x803F3488: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    ovl_803F0000_menu_func_803F2748(rdram, ctx);
        goto after_31;
    // 0x803F3488: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_31:
    // 0x803F348C: beq         $v0, $zero, L_803F349C
    if (ctx->r2 == 0) {
        // 0x803F3490: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_803F349C;
    }
    // 0x803F3490: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x803F3494: b           L_803F34C4
    // 0x803F3498: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_803F34C4;
    // 0x803F3498: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_803F349C:
    // 0x803F349C: lui         $a1, 0x803F
    ctx->r5 = S32(0X803F << 16);
    // 0x803F34A0: addiu       $a1, $a1, 0x74BC
    ctx->r5 = ADD32(ctx->r5, 0X74BC);
    // 0x803F34A4: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x803F34A8: jal         0x803F2748
    // 0x803F34AC: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    ovl_803F0000_menu_func_803F2748(rdram, ctx);
        goto after_32;
    // 0x803F34AC: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_32:
    // 0x803F34B0: beq         $v0, $zero, L_803F34C4
    if (ctx->r2 == 0) {
        // 0x803F34B4: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_803F34C4;
    }
    // 0x803F34B4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x803F34B8: b           L_803F34C4
    // 0x803F34BC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_803F34C4;
    // 0x803F34BC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x803F34C0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_803F34C4:
    // 0x803F34C4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x803F34C8: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x803F34CC: jr          $ra
    // 0x803F34D0: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x803F34D0: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void ovl_803F0000_menu_func_803F2F44(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803F2F44: lw          $t3, 0xC8($s0)
    ctx->r11 = MEM_W(ctx->r16, 0XC8);
    // 0x803F2F48: cvt.w.s     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.u32l = CVT_W_S(ctx->f6.fl);
    // 0x803F2F4C: sh          $t2, 0x938($t3)
    MEM_H(0X938, ctx->r11) = ctx->r10;
    // 0x803F2F50: cfc1        $a3, $FpcCsr
    ctx->r7 = get_cop1_cs();
    // 0x803F2F54: lw          $a1, 0xC8($s0)
    ctx->r5 = MEM_W(ctx->r16, 0XC8);
    // 0x803F2F58: lw          $a2, 0x88($v0)
    ctx->r6 = MEM_W(ctx->r2, 0X88);
    // 0x803F2F5C: andi        $a3, $a3, 0x78
    ctx->r7 = ctx->r7 & 0X78;
    // 0x803F2F60: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x803F2F64: beq         $a3, $zero, L_803F2FB4
    if (ctx->r7 == 0) {
        // 0x803F2F68: addiu       $a1, $a1, 0x938
        ctx->r5 = ADD32(ctx->r5, 0X938);
            goto L_803F2FB4;
    }
    // 0x803F2F68: addiu       $a1, $a1, 0x938
    ctx->r5 = ADD32(ctx->r5, 0X938);
    // 0x803F2F6C: lui         $at, 0x4F00
    ctx->r1 = S32(0X4F00 << 16);
    // 0x803F2F70: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x803F2F74: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    // 0x803F2F78: sub.s       $f8, $f6, $f8
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f8.fl = ctx->f6.fl - ctx->f8.fl;
    // 0x803F2F7C: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x803F2F80: ctc1        $a3, $FpcCsr
    set_cop1_cs(ctx->r7);
    // 0x803F2F84: nop

    // 0x803F2F88: cvt.w.s     $f8, $f8
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 8);
    ctx->f8.u32l = CVT_W_S(ctx->f8.fl);
    // 0x803F2F8C: cfc1        $a3, $FpcCsr
    ctx->r7 = get_cop1_cs();
    // 0x803F2F90: nop

    // 0x803F2F94: andi        $a3, $a3, 0x78
    ctx->r7 = ctx->r7 & 0X78;
    // 0x803F2F98: bne         $a3, $zero, L_803F2FAC
    if (ctx->r7 != 0) {
        // 0x803F2F9C: nop
    
            goto L_803F2FAC;
    }
    // 0x803F2F9C: nop

    // 0x803F2FA0: mfc1        $a3, $f8
    ctx->r7 = (int32_t)ctx->f8.u32l;
    // 0x803F2FA4: b           L_803F2FC4
    // 0x803F2FA8: or          $a3, $a3, $at
    ctx->r7 = ctx->r7 | ctx->r1;
        goto L_803F2FC4;
    // 0x803F2FA8: or          $a3, $a3, $at
    ctx->r7 = ctx->r7 | ctx->r1;
L_803F2FAC:
    // 0x803F2FAC: b           L_803F2FC4
    // 0x803F2FB0: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
        goto L_803F2FC4;
    // 0x803F2FB0: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
L_803F2FB4:
    // 0x803F2FB4: mfc1        $a3, $f8
    ctx->r7 = (int32_t)ctx->f8.u32l;
    // 0x803F2FB8: nop

    // 0x803F2FBC: bltz        $a3, L_803F2FAC
    if (SIGNED(ctx->r7) < 0) {
        // 0x803F2FC0: nop
    
            goto L_803F2FAC;
    }
    // 0x803F2FC0: nop

L_803F2FC4:
    // 0x803F2FC4: ctc1        $t4, $FpcCsr
    set_cop1_cs(ctx->r12);
    // 0x803F2FC8: jal         0x803F1828
    // 0x803F2FCC: nop

    ovl_803F0000_menu_func_803F1828(rdram, ctx);
        goto after_0;
    // 0x803F2FCC: nop

    after_0:
    // 0x803F2FD0: lw          $t6, 0xC8($s0)
    ctx->r14 = MEM_W(ctx->r16, 0XC8);
    // 0x803F2FD4: addiu       $t5, $zero, 0x5
    ctx->r13 = ADD32(0, 0X5);
    // 0x803F2FD8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x803F2FDC: b           L_803F34C4
    // 0x803F2FE0: sh          $t5, 0x93A($t6)
    MEM_H(0X93A, ctx->r14) = ctx->r13;
        goto L_803F34C4;
    // 0x803F2FE0: sh          $t5, 0x93A($t6)
    MEM_H(0X93A, ctx->r14) = ctx->r13;
    // 0x803F2FE4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x803F2FE8: jal         0x803F1990
    // 0x803F2FEC: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    ovl_803F0000_menu_func_803F1990(rdram, ctx);
        goto after_1;
    // 0x803F2FEC: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_1:
    // 0x803F2FF0: beq         $v0, $zero, L_803F3034
    if (ctx->r2 == 0) {
        // 0x803F2FF4: nop
    
            goto L_803F3034;
    }
    // 0x803F2FF4: nop

    // 0x803F2FF8: lw          $v1, 0xC8($s0)
    ctx->r3 = MEM_W(ctx->r16, 0XC8);
    // 0x803F2FFC: nop

    // 0x803F3000: lh          $t7, 0x8CA($v1)
    ctx->r15 = MEM_H(ctx->r3, 0X8CA);
    // 0x803F3004: lh          $t8, 0x8B0($v1)
    ctx->r24 = MEM_H(ctx->r3, 0X8B0);
    // 0x803F3008: nop

    // 0x803F300C: subu        $t9, $t7, $t8
    ctx->r25 = SUB32(ctx->r15, ctx->r24);
    // 0x803F3010: slti        $at, $t9, 0xFB
    ctx->r1 = SIGNED(ctx->r25) < 0XFB ? 1 : 0;
    // 0x803F3014: bne         $at, $zero, L_803F3034
    if (ctx->r1 != 0) {
        // 0x803F3018: nop
    
            goto L_803F3034;
    }
    // 0x803F3018: nop

    // 0x803F301C: jal         0x803F282C
    // 0x803F3020: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_803F0000_menu_func_803F282C(rdram, ctx);
        goto after_2;
    // 0x803F3020: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_2:
    // 0x803F3024: beq         $v0, $zero, L_803F3034
    if (ctx->r2 == 0) {
        // 0x803F3028: nop
    
            goto L_803F3034;
    }
    // 0x803F3028: nop

    // 0x803F302C: b           L_803F34C4
    // 0x803F3030: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_803F34C4;
    // 0x803F3030: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_803F3034:
    // 0x803F3034: lw          $t1, 0xD4($s0)
    ctx->r9 = MEM_W(ctx->r16, 0XD4);
    // 0x803F3038: nop

    // 0x803F303C: lbu         $t2, 0x5($t1)
    ctx->r10 = MEM_BU(ctx->r9, 0X5);
    // 0x803F3040: nop

    // 0x803F3044: sltiu       $at, $t2, 0xB
    ctx->r1 = ctx->r10 < 0XB ? 1 : 0;
    // 0x803F3048: beq         $at, $zero, L_803F3418
    if (ctx->r1 == 0) {
        // 0x803F304C: sll         $t2, $t2, 2
        ctx->r10 = S32(ctx->r10 << 2);
            goto L_803F3418;
    }
    // 0x803F304C: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x803F3050: lui         $at, 0x803F
    ctx->r1 = S32(0X803F << 16);
    // 0x803F3054: addu        $at, $at, $t2
    gpr jr_addend_803F3060 = ctx->r10;
    ctx->r1 = ADD32(ctx->r1, ctx->r10);
    // 0x803F3058: lw          $t2, 0x7C8C($at)
    ctx->r10 = ADD32(ctx->r1, 0X7C8C);
    // 0x803F305C: nop

    // 0x803F3060: jr          $t2
    // 0x803F3064: nop

    switch (jr_addend_803F3060 >> 2) {
        case 0: goto L_803F3068; break;
        case 1: goto L_803F3068; break;
        case 2: goto L_803F3068; break;
        case 3: goto L_803F3068; break;
        case 4: goto L_803F3090; break;
        case 5: goto L_803F3090; break;
        case 6: goto L_803F3194; break;
        case 7: goto L_803F3194; break;
        case 8: goto L_803F32EC; break;
        case 9: goto L_803F3338; break;
        case 10: goto L_803F3338; break;
        default: switch_error(__func__, 0x803F3060, 0x803F7C8C);
    }
    // 0x803F3064: nop

L_803F3068:
    // 0x803F3068: lui         $a1, 0x803F
    ctx->r5 = S32(0X803F << 16);
    // 0x803F306C: addiu       $a1, $a1, 0x7438
    ctx->r5 = ADD32(ctx->r5, 0X7438);
    // 0x803F3070: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x803F3074: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    // 0x803F3078: jal         0x803F2748
    // 0x803F307C: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    ovl_803F0000_menu_func_803F2748(rdram, ctx);
        goto after_3;
    // 0x803F307C: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_3:
    // 0x803F3080: beq         $v0, $zero, L_803F3418
    if (ctx->r2 == 0) {
        // 0x803F3084: nop
    
            goto L_803F3418;
    }
    // 0x803F3084: nop

    // 0x803F3088: b           L_803F34C4
    // 0x803F308C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_803F34C4;
    // 0x803F308C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_803F3090:
    // 0x803F3090: lw          $t3, 0xC8($s0)
    ctx->r11 = MEM_W(ctx->r16, 0XC8);
    // 0x803F3094: lui         $a1, 0x803F
    ctx->r5 = S32(0X803F << 16);
    // 0x803F3098: lh          $t4, 0x8B0($t3)
    ctx->r12 = MEM_H(ctx->r11, 0X8B0);
    // 0x803F309C: addiu       $a1, $a1, 0x745C
    ctx->r5 = ADD32(ctx->r5, 0X745C);
    // 0x803F30A0: blez        $t4, L_803F3154
    if (SIGNED(ctx->r12) <= 0) {
        // 0x803F30A4: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_803F3154;
    }
    // 0x803F30A4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x803F30A8: lui         $a1, 0x803F
    ctx->r5 = S32(0X803F << 16);
    // 0x803F30AC: addiu       $a1, $a1, 0x744C
    ctx->r5 = ADD32(ctx->r5, 0X744C);
    // 0x803F30B0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x803F30B4: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x803F30B8: jal         0x803F2748
    // 0x803F30BC: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    ovl_803F0000_menu_func_803F2748(rdram, ctx);
        goto after_4;
    // 0x803F30BC: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_4:
    // 0x803F30C0: beq         $v0, $zero, L_803F30D0
    if (ctx->r2 == 0) {
        // 0x803F30C4: nop
    
            goto L_803F30D0;
    }
    // 0x803F30C4: nop

    // 0x803F30C8: b           L_803F34C4
    // 0x803F30CC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_803F34C4;
    // 0x803F30CC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_803F30D0:
    // 0x803F30D0: lw          $t5, 0xC8($s0)
    ctx->r13 = MEM_W(ctx->r16, 0XC8);
    // 0x803F30D4: lui         $a1, 0x803F
    ctx->r5 = S32(0X803F << 16);
    // 0x803F30D8: lh          $t6, 0x8B0($t5)
    ctx->r14 = MEM_H(ctx->r13, 0X8B0);
    // 0x803F30DC: addiu       $a1, $a1, 0x745C
    ctx->r5 = ADD32(ctx->r5, 0X745C);
    // 0x803F30E0: slti        $at, $t6, 0xC9
    ctx->r1 = SIGNED(ctx->r14) < 0XC9 ? 1 : 0;
    // 0x803F30E4: bne         $at, $zero, L_803F3114
    if (ctx->r1 != 0) {
        // 0x803F30E8: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_803F3114;
    }
    // 0x803F30E8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x803F30EC: lui         $a1, 0x803F
    ctx->r5 = S32(0X803F << 16);
    // 0x803F30F0: addiu       $a1, $a1, 0x7450
    ctx->r5 = ADD32(ctx->r5, 0X7450);
    // 0x803F30F4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x803F30F8: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    // 0x803F30FC: jal         0x803F2748
    // 0x803F3100: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    ovl_803F0000_menu_func_803F2748(rdram, ctx);
        goto after_5;
    // 0x803F3100: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_5:
    // 0x803F3104: beq         $v0, $zero, L_803F3418
    if (ctx->r2 == 0) {
        // 0x803F3108: nop
    
            goto L_803F3418;
    }
    // 0x803F3108: nop

    // 0x803F310C: b           L_803F34C4
    // 0x803F3110: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_803F34C4;
    // 0x803F3110: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_803F3114:
    // 0x803F3114: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x803F3118: jal         0x803F2748
    // 0x803F311C: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    ovl_803F0000_menu_func_803F2748(rdram, ctx);
        goto after_6;
    // 0x803F311C: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_6:
    // 0x803F3120: beq         $v0, $zero, L_803F3130
    if (ctx->r2 == 0) {
        // 0x803F3124: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_803F3130;
    }
    // 0x803F3124: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x803F3128: b           L_803F34C4
    // 0x803F312C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_803F34C4;
    // 0x803F312C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_803F3130:
    // 0x803F3130: lui         $a1, 0x803F
    ctx->r5 = S32(0X803F << 16);
    // 0x803F3134: addiu       $a1, $a1, 0x7440
    ctx->r5 = ADD32(ctx->r5, 0X7440);
    // 0x803F3138: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    // 0x803F313C: jal         0x803F2748
    // 0x803F3140: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    ovl_803F0000_menu_func_803F2748(rdram, ctx);
        goto after_7;
    // 0x803F3140: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_7:
    // 0x803F3144: beq         $v0, $zero, L_803F3418
    if (ctx->r2 == 0) {
        // 0x803F3148: nop
    
            goto L_803F3418;
    }
    // 0x803F3148: nop

    // 0x803F314C: b           L_803F34C4
    // 0x803F3150: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_803F34C4;
    // 0x803F3150: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_803F3154:
    // 0x803F3154: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x803F3158: jal         0x803F2748
    // 0x803F315C: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    ovl_803F0000_menu_func_803F2748(rdram, ctx);
        goto after_8;
    // 0x803F315C: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_8:
    // 0x803F3160: beq         $v0, $zero, L_803F3170
    if (ctx->r2 == 0) {
        // 0x803F3164: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_803F3170;
    }
    // 0x803F3164: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x803F3168: b           L_803F34C4
    // 0x803F316C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_803F34C4;
    // 0x803F316C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_803F3170:
    // 0x803F3170: lui         $a1, 0x803F
    ctx->r5 = S32(0X803F << 16);
    // 0x803F3174: addiu       $a1, $a1, 0x7440
    ctx->r5 = ADD32(ctx->r5, 0X7440);
    // 0x803F3178: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    // 0x803F317C: jal         0x803F2748
    // 0x803F3180: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    ovl_803F0000_menu_func_803F2748(rdram, ctx);
        goto after_9;
    // 0x803F3180: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_9:
    // 0x803F3184: beq         $v0, $zero, L_803F3418
    if (ctx->r2 == 0) {
        // 0x803F3188: nop
    
            goto L_803F3418;
    }
    // 0x803F3188: nop

    // 0x803F318C: b           L_803F34C4
    // 0x803F3190: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_803F34C4;
    // 0x803F3190: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_803F3194:
    // 0x803F3194: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x803F3198: jal         0x803F1990
    // 0x803F319C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    ovl_803F0000_menu_func_803F1990(rdram, ctx);
        goto after_10;
    // 0x803F319C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_10:
    // 0x803F31A0: beq         $v0, $zero, L_803F32A0
    if (ctx->r2 == 0) {
        // 0x803F31A4: nop
    
            goto L_803F32A0;
    }
    // 0x803F31A4: nop

    // 0x803F31A8: lw          $t7, 0xC8($s0)
    ctx->r15 = MEM_W(ctx->r16, 0XC8);
    // 0x803F31AC: lui         $a1, 0x803F
    ctx->r5 = S32(0X803F << 16);
    // 0x803F31B0: lh          $v0, 0x8B0($t7)
    ctx->r2 = MEM_H(ctx->r15, 0X8B0);
    // 0x803F31B4: addiu       $a1, $a1, 0x747C
    ctx->r5 = ADD32(ctx->r5, 0X747C);
    // 0x803F31B8: slti        $at, $v0, 0x65
    ctx->r1 = SIGNED(ctx->r2) < 0X65 ? 1 : 0;
    // 0x803F31BC: bne         $at, $zero, L_803F3204
    if (ctx->r1 != 0) {
        // 0x803F31C0: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_803F3204;
    }
    // 0x803F31C0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x803F31C4: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    // 0x803F31C8: jal         0x803F2748
    // 0x803F31CC: addiu       $a3, $zero, 0x12
    ctx->r7 = ADD32(0, 0X12);
    ovl_803F0000_menu_func_803F2748(rdram, ctx);
        goto after_11;
    // 0x803F31CC: addiu       $a3, $zero, 0x12
    ctx->r7 = ADD32(0, 0X12);
    after_11:
    // 0x803F31D0: beq         $v0, $zero, L_803F31E0
    if (ctx->r2 == 0) {
        // 0x803F31D4: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_803F31E0;
    }
    // 0x803F31D4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x803F31D8: b           L_803F34C4
    // 0x803F31DC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_803F34C4;
    // 0x803F31DC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_803F31E0:
    // 0x803F31E0: lui         $a1, 0x803F
    ctx->r5 = S32(0X803F << 16);
    // 0x803F31E4: addiu       $a1, $a1, 0x7474
    ctx->r5 = ADD32(ctx->r5, 0X7474);
    // 0x803F31E8: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x803F31EC: jal         0x803F2748
    // 0x803F31F0: addiu       $a3, $zero, 0x12
    ctx->r7 = ADD32(0, 0X12);
    ovl_803F0000_menu_func_803F2748(rdram, ctx);
        goto after_12;
    // 0x803F31F0: addiu       $a3, $zero, 0x12
    ctx->r7 = ADD32(0, 0X12);
    after_12:
    // 0x803F31F4: beq         $v0, $zero, L_803F32A0
    if (ctx->r2 == 0) {
        // 0x803F31F8: nop
    
            goto L_803F32A0;
    }
    // 0x803F31F8: nop

    // 0x803F31FC: b           L_803F34C4
    // 0x803F3200: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_803F34C4;
    // 0x803F3200: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_803F3204:
    // 0x803F3204: blez        $v0, L_803F327C
    if (SIGNED(ctx->r2) <= 0) {
        // 0x803F3208: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_803F327C;
    }
    // 0x803F3208: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x803F320C: lui         $a1, 0x803F
    ctx->r5 = S32(0X803F << 16);
    // 0x803F3210: addiu       $a1, $a1, 0x7484
    ctx->r5 = ADD32(ctx->r5, 0X7484);
    // 0x803F3214: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x803F3218: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    // 0x803F321C: jal         0x803F2748
    // 0x803F3220: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    ovl_803F0000_menu_func_803F2748(rdram, ctx);
        goto after_13;
    // 0x803F3220: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_13:
    // 0x803F3224: beq         $v0, $zero, L_803F3234
    if (ctx->r2 == 0) {
        // 0x803F3228: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_803F3234;
    }
    // 0x803F3228: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x803F322C: b           L_803F34C4
    // 0x803F3230: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_803F34C4;
    // 0x803F3230: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_803F3234:
    // 0x803F3234: lui         $a1, 0x803F
    ctx->r5 = S32(0X803F << 16);
    // 0x803F3238: addiu       $a1, $a1, 0x746C
    ctx->r5 = ADD32(ctx->r5, 0X746C);
    // 0x803F323C: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    // 0x803F3240: jal         0x803F2748
    // 0x803F3244: addiu       $a3, $zero, 0x12
    ctx->r7 = ADD32(0, 0X12);
    ovl_803F0000_menu_func_803F2748(rdram, ctx);
        goto after_14;
    // 0x803F3244: addiu       $a3, $zero, 0x12
    ctx->r7 = ADD32(0, 0X12);
    after_14:
    // 0x803F3248: beq         $v0, $zero, L_803F3258
    if (ctx->r2 == 0) {
        // 0x803F324C: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_803F3258;
    }
    // 0x803F324C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x803F3250: b           L_803F34C4
    // 0x803F3254: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_803F34C4;
    // 0x803F3254: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_803F3258:
    // 0x803F3258: lui         $a1, 0x803F
    ctx->r5 = S32(0X803F << 16);
    // 0x803F325C: addiu       $a1, $a1, 0x7460
    ctx->r5 = ADD32(ctx->r5, 0X7460);
    // 0x803F3260: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x803F3264: jal         0x803F2748
    // 0x803F3268: addiu       $a3, $zero, 0x12
    ctx->r7 = ADD32(0, 0X12);
    ovl_803F0000_menu_func_803F2748(rdram, ctx);
        goto after_15;
    // 0x803F3268: addiu       $a3, $zero, 0x12
    ctx->r7 = ADD32(0, 0X12);
    after_15:
    // 0x803F326C: beq         $v0, $zero, L_803F32A0
    if (ctx->r2 == 0) {
        // 0x803F3270: nop
    
            goto L_803F32A0;
    }
    // 0x803F3270: nop

    // 0x803F3274: b           L_803F34C4
    // 0x803F3278: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_803F34C4;
    // 0x803F3278: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_803F327C:
    // 0x803F327C: lui         $a1, 0x803F
    ctx->r5 = S32(0X803F << 16);
    // 0x803F3280: addiu       $a1, $a1, 0x748C
    ctx->r5 = ADD32(ctx->r5, 0X748C);
    // 0x803F3284: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x803F3288: jal         0x803F2748
    // 0x803F328C: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    ovl_803F0000_menu_func_803F2748(rdram, ctx);
        goto after_16;
    // 0x803F328C: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_16:
    // 0x803F3290: beq         $v0, $zero, L_803F32A0
    if (ctx->r2 == 0) {
        // 0x803F3294: nop
    
            goto L_803F32A0;
    }
    // 0x803F3294: nop

    // 0x803F3298: b           L_803F34C4
    // 0x803F329C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_803F34C4;
    // 0x803F329C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_803F32A0:
    // 0x803F32A0: lui         $a1, 0x803F
    ctx->r5 = S32(0X803F << 16);
    // 0x803F32A4: addiu       $a1, $a1, 0x7464
    ctx->r5 = ADD32(ctx->r5, 0X7464);
    // 0x803F32A8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x803F32AC: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    // 0x803F32B0: jal         0x803F2748
    // 0x803F32B4: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    ovl_803F0000_menu_func_803F2748(rdram, ctx);
        goto after_17;
    // 0x803F32B4: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_17:
    // 0x803F32B8: beq         $v0, $zero, L_803F32C8
    if (ctx->r2 == 0) {
        // 0x803F32BC: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_803F32C8;
    }
    // 0x803F32BC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x803F32C0: b           L_803F34C4
    // 0x803F32C4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_803F34C4;
    // 0x803F32C4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_803F32C8:
    // 0x803F32C8: lui         $a1, 0x803F
    ctx->r5 = S32(0X803F << 16);
    // 0x803F32CC: addiu       $a1, $a1, 0x7478
    ctx->r5 = ADD32(ctx->r5, 0X7478);
    // 0x803F32D0: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x803F32D4: jal         0x803F2748
    // 0x803F32D8: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    ovl_803F0000_menu_func_803F2748(rdram, ctx);
        goto after_18;
    // 0x803F32D8: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_18:
    // 0x803F32DC: beq         $v0, $zero, L_803F3418
    if (ctx->r2 == 0) {
        // 0x803F32E0: nop
    
            goto L_803F3418;
    }
    // 0x803F32E0: nop

    // 0x803F32E4: b           L_803F34C4
    // 0x803F32E8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_803F34C4;
    // 0x803F32E8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_803F32EC:
    // 0x803F32EC: lui         $a1, 0x803F
    ctx->r5 = S32(0X803F << 16);
    // 0x803F32F0: addiu       $a1, $a1, 0x74AC
    ctx->r5 = ADD32(ctx->r5, 0X74AC);
    // 0x803F32F4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x803F32F8: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    // 0x803F32FC: jal         0x803F2748
    // 0x803F3300: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    ovl_803F0000_menu_func_803F2748(rdram, ctx);
        goto after_19;
    // 0x803F3300: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_19:
    // 0x803F3304: beq         $v0, $zero, L_803F3314
    if (ctx->r2 == 0) {
        // 0x803F3308: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_803F3314;
    }
    // 0x803F3308: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x803F330C: b           L_803F34C4
    // 0x803F3310: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_803F34C4;
    // 0x803F3310: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_803F3314:
    // 0x803F3314: lui         $a1, 0x803F
    ctx->r5 = S32(0X803F << 16);
    // 0x803F3318: addiu       $a1, $a1, 0x7498
    ctx->r5 = ADD32(ctx->r5, 0X7498);
    // 0x803F331C: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x803F3320: jal         0x803F2748
    // 0x803F3324: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    ovl_803F0000_menu_func_803F2748(rdram, ctx);
        goto after_20;
    // 0x803F3324: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_20:
    // 0x803F3328: beq         $v0, $zero, L_803F3418
    if (ctx->r2 == 0) {
        // 0x803F332C: nop
    
            goto L_803F3418;
    }
    // 0x803F332C: nop

    // 0x803F3330: b           L_803F34C4
    // 0x803F3334: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_803F34C4;
    // 0x803F3334: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_803F3338:
    // 0x803F3338: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x803F333C: jal         0x803F1990
    // 0x803F3340: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    ovl_803F0000_menu_func_803F1990(rdram, ctx);
        goto after_21;
    // 0x803F3340: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_21:
    // 0x803F3344: beq         $v0, $zero, L_803F3394
    if (ctx->r2 == 0) {
        // 0x803F3348: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_803F3394;
    }
    // 0x803F3348: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x803F334C: lui         $a1, 0x803F
    ctx->r5 = S32(0X803F << 16);
    // 0x803F3350: addiu       $a1, $a1, 0x749C
    ctx->r5 = ADD32(ctx->r5, 0X749C);
    // 0x803F3354: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    // 0x803F3358: jal         0x803F2748
    // 0x803F335C: addiu       $a3, $zero, 0x12
    ctx->r7 = ADD32(0, 0X12);
    ovl_803F0000_menu_func_803F2748(rdram, ctx);
        goto after_22;
    // 0x803F335C: addiu       $a3, $zero, 0x12
    ctx->r7 = ADD32(0, 0X12);
    after_22:
    // 0x803F3360: beq         $v0, $zero, L_803F3370
    if (ctx->r2 == 0) {
        // 0x803F3364: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_803F3370;
    }
    // 0x803F3364: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x803F3368: b           L_803F34C4
    // 0x803F336C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_803F34C4;
    // 0x803F336C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_803F3370:
    // 0x803F3370: lui         $a1, 0x803F
    ctx->r5 = S32(0X803F << 16);
    // 0x803F3374: addiu       $a1, $a1, 0x74A4
    ctx->r5 = ADD32(ctx->r5, 0X74A4);
    // 0x803F3378: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x803F337C: jal         0x803F2748
    // 0x803F3380: addiu       $a3, $zero, 0x12
    ctx->r7 = ADD32(0, 0X12);
    ovl_803F0000_menu_func_803F2748(rdram, ctx);
        goto after_23;
    // 0x803F3380: addiu       $a3, $zero, 0x12
    ctx->r7 = ADD32(0, 0X12);
    after_23:
    // 0x803F3384: beq         $v0, $zero, L_803F3394
    if (ctx->r2 == 0) {
        // 0x803F3388: nop
    
            goto L_803F3394;
    }
    // 0x803F3388: nop

    // 0x803F338C: b           L_803F34C4
    // 0x803F3390: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_803F34C4;
    // 0x803F3390: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_803F3394:
    // 0x803F3394: lui         $t8, 0x8028
    ctx->r24 = S32(0X8028 << 16);
    // 0x803F3398: lh          $t8, -0x1B60($t8)
    ctx->r24 = MEM_H(ctx->r24, -0X1B60);
    // 0x803F339C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x803F33A0: andi        $t9, $t8, 0x1
    ctx->r25 = ctx->r24 & 0X1;
    // 0x803F33A4: beq         $t9, $zero, L_803F33CC
    if (ctx->r25 == 0) {
        // 0x803F33A8: lui         $a1, 0x803F
        ctx->r5 = S32(0X803F << 16);
            goto L_803F33CC;
    }
    // 0x803F33A8: lui         $a1, 0x803F
    ctx->r5 = S32(0X803F << 16);
    // 0x803F33AC: addiu       $a1, $a1, 0x74A8
    ctx->r5 = ADD32(ctx->r5, 0X74A8);
    // 0x803F33B0: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x803F33B4: jal         0x803F2748
    // 0x803F33B8: addiu       $a3, $zero, 0x12
    ctx->r7 = ADD32(0, 0X12);
    ovl_803F0000_menu_func_803F2748(rdram, ctx);
        goto after_24;
    // 0x803F33B8: addiu       $a3, $zero, 0x12
    ctx->r7 = ADD32(0, 0X12);
    after_24:
    // 0x803F33BC: beq         $v0, $zero, L_803F33CC
    if (ctx->r2 == 0) {
        // 0x803F33C0: nop
    
            goto L_803F33CC;
    }
    // 0x803F33C0: nop

    // 0x803F33C4: b           L_803F34C4
    // 0x803F33C8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_803F34C4;
    // 0x803F33C8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_803F33CC:
    // 0x803F33CC: lui         $a1, 0x803F
    ctx->r5 = S32(0X803F << 16);
    // 0x803F33D0: addiu       $a1, $a1, 0x7490
    ctx->r5 = ADD32(ctx->r5, 0X7490);
    // 0x803F33D4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x803F33D8: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    // 0x803F33DC: jal         0x803F2748
    // 0x803F33E0: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    ovl_803F0000_menu_func_803F2748(rdram, ctx);
        goto after_25;
    // 0x803F33E0: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_25:
    // 0x803F33E4: beq         $v0, $zero, L_803F33F4
    if (ctx->r2 == 0) {
        // 0x803F33E8: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_803F33F4;
    }
    // 0x803F33E8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x803F33EC: b           L_803F34C4
    // 0x803F33F0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_803F34C4;
    // 0x803F33F0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_803F33F4:
    // 0x803F33F4: lui         $a1, 0x803F
    ctx->r5 = S32(0X803F << 16);
    // 0x803F33F8: addiu       $a1, $a1, 0x7498
    ctx->r5 = ADD32(ctx->r5, 0X7498);
    // 0x803F33FC: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x803F3400: jal         0x803F2748
    // 0x803F3404: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    ovl_803F0000_menu_func_803F2748(rdram, ctx);
        goto after_26;
    // 0x803F3404: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_26:
    // 0x803F3408: beq         $v0, $zero, L_803F3418
    if (ctx->r2 == 0) {
        // 0x803F340C: nop
    
            goto L_803F3418;
    }
    // 0x803F340C: nop

    // 0x803F3410: b           L_803F34C4
    // 0x803F3414: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_803F34C4;
    // 0x803F3414: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_803F3418:
    // 0x803F3418: lw          $t1, 0xC8($s0)
    ctx->r9 = MEM_W(ctx->r16, 0XC8);
    // 0x803F341C: lui         $a1, 0x803F
    ctx->r5 = S32(0X803F << 16);
    // 0x803F3420: lh          $t2, 0x8B0($t1)
    ctx->r10 = MEM_H(ctx->r9, 0X8B0);
    // 0x803F3424: addiu       $a1, $a1, 0x74C0
    ctx->r5 = ADD32(ctx->r5, 0X74C0);
    // 0x803F3428: slti        $at, $t2, 0xC9
    ctx->r1 = SIGNED(ctx->r10) < 0XC9 ? 1 : 0;
    // 0x803F342C: bne         $at, $zero, L_803F3474
    if (ctx->r1 != 0) {
        // 0x803F3430: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_803F3474;
    }
    // 0x803F3430: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x803F3434: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x803F3438: jal         0x803F2748
    // 0x803F343C: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    ovl_803F0000_menu_func_803F2748(rdram, ctx);
        goto after_27;
    // 0x803F343C: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_27:
    // 0x803F3440: beq         $v0, $zero, L_803F3450
    if (ctx->r2 == 0) {
        // 0x803F3444: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_803F3450;
    }
    // 0x803F3444: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x803F3448: b           L_803F34C4
    // 0x803F344C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_803F34C4;
    // 0x803F344C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_803F3450:
    // 0x803F3450: lui         $a1, 0x803F
    ctx->r5 = S32(0X803F << 16);
    // 0x803F3454: addiu       $a1, $a1, 0x74C4
    ctx->r5 = ADD32(ctx->r5, 0X74C4);
    // 0x803F3458: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x803F345C: jal         0x803F2748
    // 0x803F3460: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    ovl_803F0000_menu_func_803F2748(rdram, ctx);
        goto after_28;
    // 0x803F3460: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_28:
    // 0x803F3464: beq         $v0, $zero, L_803F3474
    if (ctx->r2 == 0) {
        // 0x803F3468: nop
    
            goto L_803F3474;
    }
    // 0x803F3468: nop

    // 0x803F346C: b           L_803F34C4
    // 0x803F3470: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_803F34C4;
    // 0x803F3470: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_803F3474:
    // 0x803F3474: lui         $a1, 0x803F
    ctx->r5 = S32(0X803F << 16);
    // 0x803F3478: addiu       $a1, $a1, 0x74B8
    ctx->r5 = ADD32(ctx->r5, 0X74B8);
    // 0x803F347C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x803F3480: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x803F3484: jal         0x803F2748
    // 0x803F3488: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    ovl_803F0000_menu_func_803F2748(rdram, ctx);
        goto after_29;
    // 0x803F3488: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_29:
    // 0x803F348C: beq         $v0, $zero, L_803F349C
    if (ctx->r2 == 0) {
        // 0x803F3490: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_803F349C;
    }
    // 0x803F3490: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x803F3494: b           L_803F34C4
    // 0x803F3498: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_803F34C4;
    // 0x803F3498: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_803F349C:
    // 0x803F349C: lui         $a1, 0x803F
    ctx->r5 = S32(0X803F << 16);
    // 0x803F34A0: addiu       $a1, $a1, 0x74BC
    ctx->r5 = ADD32(ctx->r5, 0X74BC);
    // 0x803F34A4: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x803F34A8: jal         0x803F2748
    // 0x803F34AC: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    ovl_803F0000_menu_func_803F2748(rdram, ctx);
        goto after_30;
    // 0x803F34AC: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_30:
    // 0x803F34B0: beq         $v0, $zero, L_803F34C4
    if (ctx->r2 == 0) {
        // 0x803F34B4: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_803F34C4;
    }
    // 0x803F34B4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x803F34B8: b           L_803F34C4
    // 0x803F34BC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_803F34C4;
    // 0x803F34BC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x803F34C0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_803F34C4:
    // 0x803F34C4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x803F34C8: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x803F34CC: jr          $ra
    // 0x803F34D0: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x803F34D0: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void ovl_803F0000_menu_func_803F2FA8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803F2FA8: or          $a3, $a3, $at
    ctx->r7 = ctx->r7 | ctx->r1;
L_803F2FAC:
    // 0x803F2FAC: b           L_803F2FC4
    // 0x803F2FB0: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
        goto L_803F2FC4;
    // 0x803F2FB0: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    // 0x803F2FB4: mfc1        $a3, $f8
    ctx->r7 = (int32_t)ctx->f8.u32l;
    // 0x803F2FB8: nop

    // 0x803F2FBC: bltz        $a3, L_803F2FAC
    if (SIGNED(ctx->r7) < 0) {
        // 0x803F2FC0: nop
    
            goto L_803F2FAC;
    }
    // 0x803F2FC0: nop

L_803F2FC4:
    // 0x803F2FC4: ctc1        $t4, $FpcCsr
    set_cop1_cs(ctx->r12);
    // 0x803F2FC8: jal         0x803F1828
    // 0x803F2FCC: nop

    ovl_803F0000_menu_func_803F1828(rdram, ctx);
        goto after_0;
    // 0x803F2FCC: nop

    after_0:
    // 0x803F2FD0: lw          $t6, 0xC8($s0)
    ctx->r14 = MEM_W(ctx->r16, 0XC8);
    // 0x803F2FD4: addiu       $t5, $zero, 0x5
    ctx->r13 = ADD32(0, 0X5);
    // 0x803F2FD8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x803F2FDC: b           L_803F34C4
    // 0x803F2FE0: sh          $t5, 0x93A($t6)
    MEM_H(0X93A, ctx->r14) = ctx->r13;
        goto L_803F34C4;
    // 0x803F2FE0: sh          $t5, 0x93A($t6)
    MEM_H(0X93A, ctx->r14) = ctx->r13;
    // 0x803F2FE4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x803F2FE8: jal         0x803F1990
    // 0x803F2FEC: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    ovl_803F0000_menu_func_803F1990(rdram, ctx);
        goto after_1;
    // 0x803F2FEC: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_1:
    // 0x803F2FF0: beq         $v0, $zero, L_803F3034
    if (ctx->r2 == 0) {
        // 0x803F2FF4: nop
    
            goto L_803F3034;
    }
    // 0x803F2FF4: nop

    // 0x803F2FF8: lw          $v1, 0xC8($s0)
    ctx->r3 = MEM_W(ctx->r16, 0XC8);
    // 0x803F2FFC: nop

    // 0x803F3000: lh          $t7, 0x8CA($v1)
    ctx->r15 = MEM_H(ctx->r3, 0X8CA);
    // 0x803F3004: lh          $t8, 0x8B0($v1)
    ctx->r24 = MEM_H(ctx->r3, 0X8B0);
    // 0x803F3008: nop

    // 0x803F300C: subu        $t9, $t7, $t8
    ctx->r25 = SUB32(ctx->r15, ctx->r24);
    // 0x803F3010: slti        $at, $t9, 0xFB
    ctx->r1 = SIGNED(ctx->r25) < 0XFB ? 1 : 0;
    // 0x803F3014: bne         $at, $zero, L_803F3034
    if (ctx->r1 != 0) {
        // 0x803F3018: nop
    
            goto L_803F3034;
    }
    // 0x803F3018: nop

    // 0x803F301C: jal         0x803F282C
    // 0x803F3020: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_803F0000_menu_func_803F282C(rdram, ctx);
        goto after_2;
    // 0x803F3020: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_2:
    // 0x803F3024: beq         $v0, $zero, L_803F3034
    if (ctx->r2 == 0) {
        // 0x803F3028: nop
    
            goto L_803F3034;
    }
    // 0x803F3028: nop

    // 0x803F302C: b           L_803F34C4
    // 0x803F3030: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_803F34C4;
    // 0x803F3030: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_803F3034:
    // 0x803F3034: lw          $t1, 0xD4($s0)
    ctx->r9 = MEM_W(ctx->r16, 0XD4);
    // 0x803F3038: nop

    // 0x803F303C: lbu         $t2, 0x5($t1)
    ctx->r10 = MEM_BU(ctx->r9, 0X5);
    // 0x803F3040: nop

    // 0x803F3044: sltiu       $at, $t2, 0xB
    ctx->r1 = ctx->r10 < 0XB ? 1 : 0;
    // 0x803F3048: beq         $at, $zero, L_803F3418
    if (ctx->r1 == 0) {
        // 0x803F304C: sll         $t2, $t2, 2
        ctx->r10 = S32(ctx->r10 << 2);
            goto L_803F3418;
    }
    // 0x803F304C: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x803F3050: lui         $at, 0x803F
    ctx->r1 = S32(0X803F << 16);
    // 0x803F3054: addu        $at, $at, $t2
    gpr jr_addend_803F3060 = ctx->r10;
    ctx->r1 = ADD32(ctx->r1, ctx->r10);
    // 0x803F3058: lw          $t2, 0x7C8C($at)
    ctx->r10 = ADD32(ctx->r1, 0X7C8C);
    // 0x803F305C: nop

    // 0x803F3060: jr          $t2
    // 0x803F3064: nop

    switch (jr_addend_803F3060 >> 2) {
        case 0: goto L_803F3068; break;
        case 1: goto L_803F3068; break;
        case 2: goto L_803F3068; break;
        case 3: goto L_803F3068; break;
        case 4: goto L_803F3090; break;
        case 5: goto L_803F3090; break;
        case 6: goto L_803F3194; break;
        case 7: goto L_803F3194; break;
        case 8: goto L_803F32EC; break;
        case 9: goto L_803F3338; break;
        case 10: goto L_803F3338; break;
        default: switch_error(__func__, 0x803F3060, 0x803F7C8C);
    }
    // 0x803F3064: nop

L_803F3068:
    // 0x803F3068: lui         $a1, 0x803F
    ctx->r5 = S32(0X803F << 16);
    // 0x803F306C: addiu       $a1, $a1, 0x7438
    ctx->r5 = ADD32(ctx->r5, 0X7438);
    // 0x803F3070: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x803F3074: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    // 0x803F3078: jal         0x803F2748
    // 0x803F307C: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    ovl_803F0000_menu_func_803F2748(rdram, ctx);
        goto after_3;
    // 0x803F307C: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_3:
    // 0x803F3080: beq         $v0, $zero, L_803F3418
    if (ctx->r2 == 0) {
        // 0x803F3084: nop
    
            goto L_803F3418;
    }
    // 0x803F3084: nop

    // 0x803F3088: b           L_803F34C4
    // 0x803F308C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_803F34C4;
    // 0x803F308C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_803F3090:
    // 0x803F3090: lw          $t3, 0xC8($s0)
    ctx->r11 = MEM_W(ctx->r16, 0XC8);
    // 0x803F3094: lui         $a1, 0x803F
    ctx->r5 = S32(0X803F << 16);
    // 0x803F3098: lh          $t4, 0x8B0($t3)
    ctx->r12 = MEM_H(ctx->r11, 0X8B0);
    // 0x803F309C: addiu       $a1, $a1, 0x745C
    ctx->r5 = ADD32(ctx->r5, 0X745C);
    // 0x803F30A0: blez        $t4, L_803F3154
    if (SIGNED(ctx->r12) <= 0) {
        // 0x803F30A4: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_803F3154;
    }
    // 0x803F30A4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x803F30A8: lui         $a1, 0x803F
    ctx->r5 = S32(0X803F << 16);
    // 0x803F30AC: addiu       $a1, $a1, 0x744C
    ctx->r5 = ADD32(ctx->r5, 0X744C);
    // 0x803F30B0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x803F30B4: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x803F30B8: jal         0x803F2748
    // 0x803F30BC: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    ovl_803F0000_menu_func_803F2748(rdram, ctx);
        goto after_4;
    // 0x803F30BC: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_4:
    // 0x803F30C0: beq         $v0, $zero, L_803F30D0
    if (ctx->r2 == 0) {
        // 0x803F30C4: nop
    
            goto L_803F30D0;
    }
    // 0x803F30C4: nop

    // 0x803F30C8: b           L_803F34C4
    // 0x803F30CC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_803F34C4;
    // 0x803F30CC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_803F30D0:
    // 0x803F30D0: lw          $t5, 0xC8($s0)
    ctx->r13 = MEM_W(ctx->r16, 0XC8);
    // 0x803F30D4: lui         $a1, 0x803F
    ctx->r5 = S32(0X803F << 16);
    // 0x803F30D8: lh          $t6, 0x8B0($t5)
    ctx->r14 = MEM_H(ctx->r13, 0X8B0);
    // 0x803F30DC: addiu       $a1, $a1, 0x745C
    ctx->r5 = ADD32(ctx->r5, 0X745C);
    // 0x803F30E0: slti        $at, $t6, 0xC9
    ctx->r1 = SIGNED(ctx->r14) < 0XC9 ? 1 : 0;
    // 0x803F30E4: bne         $at, $zero, L_803F3114
    if (ctx->r1 != 0) {
        // 0x803F30E8: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_803F3114;
    }
    // 0x803F30E8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x803F30EC: lui         $a1, 0x803F
    ctx->r5 = S32(0X803F << 16);
    // 0x803F30F0: addiu       $a1, $a1, 0x7450
    ctx->r5 = ADD32(ctx->r5, 0X7450);
    // 0x803F30F4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x803F30F8: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    // 0x803F30FC: jal         0x803F2748
    // 0x803F3100: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    ovl_803F0000_menu_func_803F2748(rdram, ctx);
        goto after_5;
    // 0x803F3100: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_5:
    // 0x803F3104: beq         $v0, $zero, L_803F3418
    if (ctx->r2 == 0) {
        // 0x803F3108: nop
    
            goto L_803F3418;
    }
    // 0x803F3108: nop

    // 0x803F310C: b           L_803F34C4
    // 0x803F3110: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_803F34C4;
    // 0x803F3110: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_803F3114:
    // 0x803F3114: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x803F3118: jal         0x803F2748
    // 0x803F311C: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    ovl_803F0000_menu_func_803F2748(rdram, ctx);
        goto after_6;
    // 0x803F311C: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_6:
    // 0x803F3120: beq         $v0, $zero, L_803F3130
    if (ctx->r2 == 0) {
        // 0x803F3124: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_803F3130;
    }
    // 0x803F3124: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x803F3128: b           L_803F34C4
    // 0x803F312C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_803F34C4;
    // 0x803F312C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_803F3130:
    // 0x803F3130: lui         $a1, 0x803F
    ctx->r5 = S32(0X803F << 16);
    // 0x803F3134: addiu       $a1, $a1, 0x7440
    ctx->r5 = ADD32(ctx->r5, 0X7440);
    // 0x803F3138: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    // 0x803F313C: jal         0x803F2748
    // 0x803F3140: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    ovl_803F0000_menu_func_803F2748(rdram, ctx);
        goto after_7;
    // 0x803F3140: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_7:
    // 0x803F3144: beq         $v0, $zero, L_803F3418
    if (ctx->r2 == 0) {
        // 0x803F3148: nop
    
            goto L_803F3418;
    }
    // 0x803F3148: nop

    // 0x803F314C: b           L_803F34C4
    // 0x803F3150: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_803F34C4;
    // 0x803F3150: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_803F3154:
    // 0x803F3154: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x803F3158: jal         0x803F2748
    // 0x803F315C: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    ovl_803F0000_menu_func_803F2748(rdram, ctx);
        goto after_8;
    // 0x803F315C: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_8:
    // 0x803F3160: beq         $v0, $zero, L_803F3170
    if (ctx->r2 == 0) {
        // 0x803F3164: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_803F3170;
    }
    // 0x803F3164: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x803F3168: b           L_803F34C4
    // 0x803F316C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_803F34C4;
    // 0x803F316C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_803F3170:
    // 0x803F3170: lui         $a1, 0x803F
    ctx->r5 = S32(0X803F << 16);
    // 0x803F3174: addiu       $a1, $a1, 0x7440
    ctx->r5 = ADD32(ctx->r5, 0X7440);
    // 0x803F3178: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    // 0x803F317C: jal         0x803F2748
    // 0x803F3180: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    ovl_803F0000_menu_func_803F2748(rdram, ctx);
        goto after_9;
    // 0x803F3180: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_9:
    // 0x803F3184: beq         $v0, $zero, L_803F3418
    if (ctx->r2 == 0) {
        // 0x803F3188: nop
    
            goto L_803F3418;
    }
    // 0x803F3188: nop

    // 0x803F318C: b           L_803F34C4
    // 0x803F3190: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_803F34C4;
    // 0x803F3190: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_803F3194:
    // 0x803F3194: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x803F3198: jal         0x803F1990
    // 0x803F319C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    ovl_803F0000_menu_func_803F1990(rdram, ctx);
        goto after_10;
    // 0x803F319C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_10:
    // 0x803F31A0: beq         $v0, $zero, L_803F32A0
    if (ctx->r2 == 0) {
        // 0x803F31A4: nop
    
            goto L_803F32A0;
    }
    // 0x803F31A4: nop

    // 0x803F31A8: lw          $t7, 0xC8($s0)
    ctx->r15 = MEM_W(ctx->r16, 0XC8);
    // 0x803F31AC: lui         $a1, 0x803F
    ctx->r5 = S32(0X803F << 16);
    // 0x803F31B0: lh          $v0, 0x8B0($t7)
    ctx->r2 = MEM_H(ctx->r15, 0X8B0);
    // 0x803F31B4: addiu       $a1, $a1, 0x747C
    ctx->r5 = ADD32(ctx->r5, 0X747C);
    // 0x803F31B8: slti        $at, $v0, 0x65
    ctx->r1 = SIGNED(ctx->r2) < 0X65 ? 1 : 0;
    // 0x803F31BC: bne         $at, $zero, L_803F3204
    if (ctx->r1 != 0) {
        // 0x803F31C0: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_803F3204;
    }
    // 0x803F31C0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x803F31C4: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    // 0x803F31C8: jal         0x803F2748
    // 0x803F31CC: addiu       $a3, $zero, 0x12
    ctx->r7 = ADD32(0, 0X12);
    ovl_803F0000_menu_func_803F2748(rdram, ctx);
        goto after_11;
    // 0x803F31CC: addiu       $a3, $zero, 0x12
    ctx->r7 = ADD32(0, 0X12);
    after_11:
    // 0x803F31D0: beq         $v0, $zero, L_803F31E0
    if (ctx->r2 == 0) {
        // 0x803F31D4: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_803F31E0;
    }
    // 0x803F31D4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x803F31D8: b           L_803F34C4
    // 0x803F31DC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_803F34C4;
    // 0x803F31DC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_803F31E0:
    // 0x803F31E0: lui         $a1, 0x803F
    ctx->r5 = S32(0X803F << 16);
    // 0x803F31E4: addiu       $a1, $a1, 0x7474
    ctx->r5 = ADD32(ctx->r5, 0X7474);
    // 0x803F31E8: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x803F31EC: jal         0x803F2748
    // 0x803F31F0: addiu       $a3, $zero, 0x12
    ctx->r7 = ADD32(0, 0X12);
    ovl_803F0000_menu_func_803F2748(rdram, ctx);
        goto after_12;
    // 0x803F31F0: addiu       $a3, $zero, 0x12
    ctx->r7 = ADD32(0, 0X12);
    after_12:
    // 0x803F31F4: beq         $v0, $zero, L_803F32A0
    if (ctx->r2 == 0) {
        // 0x803F31F8: nop
    
            goto L_803F32A0;
    }
    // 0x803F31F8: nop

    // 0x803F31FC: b           L_803F34C4
    // 0x803F3200: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_803F34C4;
    // 0x803F3200: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_803F3204:
    // 0x803F3204: blez        $v0, L_803F327C
    if (SIGNED(ctx->r2) <= 0) {
        // 0x803F3208: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_803F327C;
    }
    // 0x803F3208: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x803F320C: lui         $a1, 0x803F
    ctx->r5 = S32(0X803F << 16);
    // 0x803F3210: addiu       $a1, $a1, 0x7484
    ctx->r5 = ADD32(ctx->r5, 0X7484);
    // 0x803F3214: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x803F3218: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    // 0x803F321C: jal         0x803F2748
    // 0x803F3220: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    ovl_803F0000_menu_func_803F2748(rdram, ctx);
        goto after_13;
    // 0x803F3220: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_13:
    // 0x803F3224: beq         $v0, $zero, L_803F3234
    if (ctx->r2 == 0) {
        // 0x803F3228: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_803F3234;
    }
    // 0x803F3228: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x803F322C: b           L_803F34C4
    // 0x803F3230: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_803F34C4;
    // 0x803F3230: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_803F3234:
    // 0x803F3234: lui         $a1, 0x803F
    ctx->r5 = S32(0X803F << 16);
    // 0x803F3238: addiu       $a1, $a1, 0x746C
    ctx->r5 = ADD32(ctx->r5, 0X746C);
    // 0x803F323C: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    // 0x803F3240: jal         0x803F2748
    // 0x803F3244: addiu       $a3, $zero, 0x12
    ctx->r7 = ADD32(0, 0X12);
    ovl_803F0000_menu_func_803F2748(rdram, ctx);
        goto after_14;
    // 0x803F3244: addiu       $a3, $zero, 0x12
    ctx->r7 = ADD32(0, 0X12);
    after_14:
    // 0x803F3248: beq         $v0, $zero, L_803F3258
    if (ctx->r2 == 0) {
        // 0x803F324C: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_803F3258;
    }
    // 0x803F324C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x803F3250: b           L_803F34C4
    // 0x803F3254: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_803F34C4;
    // 0x803F3254: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_803F3258:
    // 0x803F3258: lui         $a1, 0x803F
    ctx->r5 = S32(0X803F << 16);
    // 0x803F325C: addiu       $a1, $a1, 0x7460
    ctx->r5 = ADD32(ctx->r5, 0X7460);
    // 0x803F3260: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x803F3264: jal         0x803F2748
    // 0x803F3268: addiu       $a3, $zero, 0x12
    ctx->r7 = ADD32(0, 0X12);
    ovl_803F0000_menu_func_803F2748(rdram, ctx);
        goto after_15;
    // 0x803F3268: addiu       $a3, $zero, 0x12
    ctx->r7 = ADD32(0, 0X12);
    after_15:
    // 0x803F326C: beq         $v0, $zero, L_803F32A0
    if (ctx->r2 == 0) {
        // 0x803F3270: nop
    
            goto L_803F32A0;
    }
    // 0x803F3270: nop

    // 0x803F3274: b           L_803F34C4
    // 0x803F3278: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_803F34C4;
    // 0x803F3278: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_803F327C:
    // 0x803F327C: lui         $a1, 0x803F
    ctx->r5 = S32(0X803F << 16);
    // 0x803F3280: addiu       $a1, $a1, 0x748C
    ctx->r5 = ADD32(ctx->r5, 0X748C);
    // 0x803F3284: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x803F3288: jal         0x803F2748
    // 0x803F328C: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    ovl_803F0000_menu_func_803F2748(rdram, ctx);
        goto after_16;
    // 0x803F328C: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_16:
    // 0x803F3290: beq         $v0, $zero, L_803F32A0
    if (ctx->r2 == 0) {
        // 0x803F3294: nop
    
            goto L_803F32A0;
    }
    // 0x803F3294: nop

    // 0x803F3298: b           L_803F34C4
    // 0x803F329C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_803F34C4;
    // 0x803F329C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_803F32A0:
    // 0x803F32A0: lui         $a1, 0x803F
    ctx->r5 = S32(0X803F << 16);
    // 0x803F32A4: addiu       $a1, $a1, 0x7464
    ctx->r5 = ADD32(ctx->r5, 0X7464);
    // 0x803F32A8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x803F32AC: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    // 0x803F32B0: jal         0x803F2748
    // 0x803F32B4: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    ovl_803F0000_menu_func_803F2748(rdram, ctx);
        goto after_17;
    // 0x803F32B4: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_17:
    // 0x803F32B8: beq         $v0, $zero, L_803F32C8
    if (ctx->r2 == 0) {
        // 0x803F32BC: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_803F32C8;
    }
    // 0x803F32BC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x803F32C0: b           L_803F34C4
    // 0x803F32C4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_803F34C4;
    // 0x803F32C4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_803F32C8:
    // 0x803F32C8: lui         $a1, 0x803F
    ctx->r5 = S32(0X803F << 16);
    // 0x803F32CC: addiu       $a1, $a1, 0x7478
    ctx->r5 = ADD32(ctx->r5, 0X7478);
    // 0x803F32D0: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x803F32D4: jal         0x803F2748
    // 0x803F32D8: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    ovl_803F0000_menu_func_803F2748(rdram, ctx);
        goto after_18;
    // 0x803F32D8: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_18:
    // 0x803F32DC: beq         $v0, $zero, L_803F3418
    if (ctx->r2 == 0) {
        // 0x803F32E0: nop
    
            goto L_803F3418;
    }
    // 0x803F32E0: nop

    // 0x803F32E4: b           L_803F34C4
    // 0x803F32E8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_803F34C4;
    // 0x803F32E8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_803F32EC:
    // 0x803F32EC: lui         $a1, 0x803F
    ctx->r5 = S32(0X803F << 16);
    // 0x803F32F0: addiu       $a1, $a1, 0x74AC
    ctx->r5 = ADD32(ctx->r5, 0X74AC);
    // 0x803F32F4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x803F32F8: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    // 0x803F32FC: jal         0x803F2748
    // 0x803F3300: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    ovl_803F0000_menu_func_803F2748(rdram, ctx);
        goto after_19;
    // 0x803F3300: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_19:
    // 0x803F3304: beq         $v0, $zero, L_803F3314
    if (ctx->r2 == 0) {
        // 0x803F3308: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_803F3314;
    }
    // 0x803F3308: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x803F330C: b           L_803F34C4
    // 0x803F3310: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_803F34C4;
    // 0x803F3310: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_803F3314:
    // 0x803F3314: lui         $a1, 0x803F
    ctx->r5 = S32(0X803F << 16);
    // 0x803F3318: addiu       $a1, $a1, 0x7498
    ctx->r5 = ADD32(ctx->r5, 0X7498);
    // 0x803F331C: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x803F3320: jal         0x803F2748
    // 0x803F3324: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    ovl_803F0000_menu_func_803F2748(rdram, ctx);
        goto after_20;
    // 0x803F3324: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_20:
    // 0x803F3328: beq         $v0, $zero, L_803F3418
    if (ctx->r2 == 0) {
        // 0x803F332C: nop
    
            goto L_803F3418;
    }
    // 0x803F332C: nop

    // 0x803F3330: b           L_803F34C4
    // 0x803F3334: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_803F34C4;
    // 0x803F3334: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_803F3338:
    // 0x803F3338: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x803F333C: jal         0x803F1990
    // 0x803F3340: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    ovl_803F0000_menu_func_803F1990(rdram, ctx);
        goto after_21;
    // 0x803F3340: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_21:
    // 0x803F3344: beq         $v0, $zero, L_803F3394
    if (ctx->r2 == 0) {
        // 0x803F3348: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_803F3394;
    }
    // 0x803F3348: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x803F334C: lui         $a1, 0x803F
    ctx->r5 = S32(0X803F << 16);
    // 0x803F3350: addiu       $a1, $a1, 0x749C
    ctx->r5 = ADD32(ctx->r5, 0X749C);
    // 0x803F3354: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    // 0x803F3358: jal         0x803F2748
    // 0x803F335C: addiu       $a3, $zero, 0x12
    ctx->r7 = ADD32(0, 0X12);
    ovl_803F0000_menu_func_803F2748(rdram, ctx);
        goto after_22;
    // 0x803F335C: addiu       $a3, $zero, 0x12
    ctx->r7 = ADD32(0, 0X12);
    after_22:
    // 0x803F3360: beq         $v0, $zero, L_803F3370
    if (ctx->r2 == 0) {
        // 0x803F3364: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_803F3370;
    }
    // 0x803F3364: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x803F3368: b           L_803F34C4
    // 0x803F336C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_803F34C4;
    // 0x803F336C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_803F3370:
    // 0x803F3370: lui         $a1, 0x803F
    ctx->r5 = S32(0X803F << 16);
    // 0x803F3374: addiu       $a1, $a1, 0x74A4
    ctx->r5 = ADD32(ctx->r5, 0X74A4);
    // 0x803F3378: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x803F337C: jal         0x803F2748
    // 0x803F3380: addiu       $a3, $zero, 0x12
    ctx->r7 = ADD32(0, 0X12);
    ovl_803F0000_menu_func_803F2748(rdram, ctx);
        goto after_23;
    // 0x803F3380: addiu       $a3, $zero, 0x12
    ctx->r7 = ADD32(0, 0X12);
    after_23:
    // 0x803F3384: beq         $v0, $zero, L_803F3394
    if (ctx->r2 == 0) {
        // 0x803F3388: nop
    
            goto L_803F3394;
    }
    // 0x803F3388: nop

    // 0x803F338C: b           L_803F34C4
    // 0x803F3390: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_803F34C4;
    // 0x803F3390: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_803F3394:
    // 0x803F3394: lui         $t8, 0x8028
    ctx->r24 = S32(0X8028 << 16);
    // 0x803F3398: lh          $t8, -0x1B60($t8)
    ctx->r24 = MEM_H(ctx->r24, -0X1B60);
    // 0x803F339C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x803F33A0: andi        $t9, $t8, 0x1
    ctx->r25 = ctx->r24 & 0X1;
    // 0x803F33A4: beq         $t9, $zero, L_803F33CC
    if (ctx->r25 == 0) {
        // 0x803F33A8: lui         $a1, 0x803F
        ctx->r5 = S32(0X803F << 16);
            goto L_803F33CC;
    }
    // 0x803F33A8: lui         $a1, 0x803F
    ctx->r5 = S32(0X803F << 16);
    // 0x803F33AC: addiu       $a1, $a1, 0x74A8
    ctx->r5 = ADD32(ctx->r5, 0X74A8);
    // 0x803F33B0: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x803F33B4: jal         0x803F2748
    // 0x803F33B8: addiu       $a3, $zero, 0x12
    ctx->r7 = ADD32(0, 0X12);
    ovl_803F0000_menu_func_803F2748(rdram, ctx);
        goto after_24;
    // 0x803F33B8: addiu       $a3, $zero, 0x12
    ctx->r7 = ADD32(0, 0X12);
    after_24:
    // 0x803F33BC: beq         $v0, $zero, L_803F33CC
    if (ctx->r2 == 0) {
        // 0x803F33C0: nop
    
            goto L_803F33CC;
    }
    // 0x803F33C0: nop

    // 0x803F33C4: b           L_803F34C4
    // 0x803F33C8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_803F34C4;
    // 0x803F33C8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_803F33CC:
    // 0x803F33CC: lui         $a1, 0x803F
    ctx->r5 = S32(0X803F << 16);
    // 0x803F33D0: addiu       $a1, $a1, 0x7490
    ctx->r5 = ADD32(ctx->r5, 0X7490);
    // 0x803F33D4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x803F33D8: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    // 0x803F33DC: jal         0x803F2748
    // 0x803F33E0: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    ovl_803F0000_menu_func_803F2748(rdram, ctx);
        goto after_25;
    // 0x803F33E0: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_25:
    // 0x803F33E4: beq         $v0, $zero, L_803F33F4
    if (ctx->r2 == 0) {
        // 0x803F33E8: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_803F33F4;
    }
    // 0x803F33E8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x803F33EC: b           L_803F34C4
    // 0x803F33F0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_803F34C4;
    // 0x803F33F0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_803F33F4:
    // 0x803F33F4: lui         $a1, 0x803F
    ctx->r5 = S32(0X803F << 16);
    // 0x803F33F8: addiu       $a1, $a1, 0x7498
    ctx->r5 = ADD32(ctx->r5, 0X7498);
    // 0x803F33FC: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x803F3400: jal         0x803F2748
    // 0x803F3404: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    ovl_803F0000_menu_func_803F2748(rdram, ctx);
        goto after_26;
    // 0x803F3404: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_26:
    // 0x803F3408: beq         $v0, $zero, L_803F3418
    if (ctx->r2 == 0) {
        // 0x803F340C: nop
    
            goto L_803F3418;
    }
    // 0x803F340C: nop

    // 0x803F3410: b           L_803F34C4
    // 0x803F3414: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_803F34C4;
    // 0x803F3414: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_803F3418:
    // 0x803F3418: lw          $t1, 0xC8($s0)
    ctx->r9 = MEM_W(ctx->r16, 0XC8);
    // 0x803F341C: lui         $a1, 0x803F
    ctx->r5 = S32(0X803F << 16);
    // 0x803F3420: lh          $t2, 0x8B0($t1)
    ctx->r10 = MEM_H(ctx->r9, 0X8B0);
    // 0x803F3424: addiu       $a1, $a1, 0x74C0
    ctx->r5 = ADD32(ctx->r5, 0X74C0);
    // 0x803F3428: slti        $at, $t2, 0xC9
    ctx->r1 = SIGNED(ctx->r10) < 0XC9 ? 1 : 0;
    // 0x803F342C: bne         $at, $zero, L_803F3474
    if (ctx->r1 != 0) {
        // 0x803F3430: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_803F3474;
    }
    // 0x803F3430: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x803F3434: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x803F3438: jal         0x803F2748
    // 0x803F343C: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    ovl_803F0000_menu_func_803F2748(rdram, ctx);
        goto after_27;
    // 0x803F343C: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_27:
    // 0x803F3440: beq         $v0, $zero, L_803F3450
    if (ctx->r2 == 0) {
        // 0x803F3444: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_803F3450;
    }
    // 0x803F3444: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x803F3448: b           L_803F34C4
    // 0x803F344C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_803F34C4;
    // 0x803F344C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_803F3450:
    // 0x803F3450: lui         $a1, 0x803F
    ctx->r5 = S32(0X803F << 16);
    // 0x803F3454: addiu       $a1, $a1, 0x74C4
    ctx->r5 = ADD32(ctx->r5, 0X74C4);
    // 0x803F3458: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x803F345C: jal         0x803F2748
    // 0x803F3460: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    ovl_803F0000_menu_func_803F2748(rdram, ctx);
        goto after_28;
    // 0x803F3460: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_28:
    // 0x803F3464: beq         $v0, $zero, L_803F3474
    if (ctx->r2 == 0) {
        // 0x803F3468: nop
    
            goto L_803F3474;
    }
    // 0x803F3468: nop

    // 0x803F346C: b           L_803F34C4
    // 0x803F3470: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_803F34C4;
    // 0x803F3470: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_803F3474:
    // 0x803F3474: lui         $a1, 0x803F
    ctx->r5 = S32(0X803F << 16);
    // 0x803F3478: addiu       $a1, $a1, 0x74B8
    ctx->r5 = ADD32(ctx->r5, 0X74B8);
    // 0x803F347C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x803F3480: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x803F3484: jal         0x803F2748
    // 0x803F3488: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    ovl_803F0000_menu_func_803F2748(rdram, ctx);
        goto after_29;
    // 0x803F3488: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_29:
    // 0x803F348C: beq         $v0, $zero, L_803F349C
    if (ctx->r2 == 0) {
        // 0x803F3490: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_803F349C;
    }
    // 0x803F3490: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x803F3494: b           L_803F34C4
    // 0x803F3498: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_803F34C4;
    // 0x803F3498: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_803F349C:
    // 0x803F349C: lui         $a1, 0x803F
    ctx->r5 = S32(0X803F << 16);
    // 0x803F34A0: addiu       $a1, $a1, 0x74BC
    ctx->r5 = ADD32(ctx->r5, 0X74BC);
    // 0x803F34A4: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x803F34A8: jal         0x803F2748
    // 0x803F34AC: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    ovl_803F0000_menu_func_803F2748(rdram, ctx);
        goto after_30;
    // 0x803F34AC: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_30:
    // 0x803F34B0: beq         $v0, $zero, L_803F34C4
    if (ctx->r2 == 0) {
        // 0x803F34B4: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_803F34C4;
    }
    // 0x803F34B4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x803F34B8: b           L_803F34C4
    // 0x803F34BC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_803F34C4;
    // 0x803F34BC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x803F34C0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_803F34C4:
    // 0x803F34C4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x803F34C8: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x803F34CC: jr          $ra
    // 0x803F34D0: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x803F34D0: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void ovl_803F0000_menu_func_803F3044(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803F3044: sltiu       $at, $t2, 0xB
    ctx->r1 = ctx->r10 < 0XB ? 1 : 0;
    // 0x803F3048: beq         $at, $zero, L_803F3418
    if (ctx->r1 == 0) {
        // 0x803F304C: sll         $t2, $t2, 2
        ctx->r10 = S32(ctx->r10 << 2);
            goto L_803F3418;
    }
    // 0x803F304C: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x803F3050: lui         $at, 0x803F
    ctx->r1 = S32(0X803F << 16);
    // 0x803F3054: addu        $at, $at, $t2
    gpr jr_addend_803F3060 = ctx->r10;
    ctx->r1 = ADD32(ctx->r1, ctx->r10);
    // 0x803F3058: lw          $t2, 0x7C8C($at)
    ctx->r10 = ADD32(ctx->r1, 0X7C8C);
    // 0x803F305C: nop

    // 0x803F3060: jr          $t2
    // 0x803F3064: nop

    switch (jr_addend_803F3060 >> 2) {
        case 0: goto L_803F3068; break;
        case 1: goto L_803F3068; break;
        case 2: goto L_803F3068; break;
        case 3: goto L_803F3068; break;
        case 4: goto L_803F3090; break;
        case 5: goto L_803F3090; break;
        case 6: goto L_803F3194; break;
        case 7: goto L_803F3194; break;
        case 8: goto L_803F32EC; break;
        case 9: goto L_803F3338; break;
        case 10: goto L_803F3338; break;
        default: switch_error(__func__, 0x803F3060, 0x803F7C8C);
    }
    // 0x803F3064: nop

L_803F3068:
    // 0x803F3068: lui         $a1, 0x803F
    ctx->r5 = S32(0X803F << 16);
    // 0x803F306C: addiu       $a1, $a1, 0x7438
    ctx->r5 = ADD32(ctx->r5, 0X7438);
    // 0x803F3070: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x803F3074: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    // 0x803F3078: jal         0x803F2748
    // 0x803F307C: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    ovl_803F0000_menu_func_803F2748(rdram, ctx);
        goto after_0;
    // 0x803F307C: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_0:
    // 0x803F3080: beq         $v0, $zero, L_803F3418
    if (ctx->r2 == 0) {
        // 0x803F3084: nop
    
            goto L_803F3418;
    }
    // 0x803F3084: nop

    // 0x803F3088: b           L_803F34C4
    // 0x803F308C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_803F34C4;
    // 0x803F308C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_803F3090:
    // 0x803F3090: lw          $t3, 0xC8($s0)
    ctx->r11 = MEM_W(ctx->r16, 0XC8);
    // 0x803F3094: lui         $a1, 0x803F
    ctx->r5 = S32(0X803F << 16);
    // 0x803F3098: lh          $t4, 0x8B0($t3)
    ctx->r12 = MEM_H(ctx->r11, 0X8B0);
    // 0x803F309C: addiu       $a1, $a1, 0x745C
    ctx->r5 = ADD32(ctx->r5, 0X745C);
    // 0x803F30A0: blez        $t4, L_803F3154
    if (SIGNED(ctx->r12) <= 0) {
        // 0x803F30A4: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_803F3154;
    }
    // 0x803F30A4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x803F30A8: lui         $a1, 0x803F
    ctx->r5 = S32(0X803F << 16);
    // 0x803F30AC: addiu       $a1, $a1, 0x744C
    ctx->r5 = ADD32(ctx->r5, 0X744C);
    // 0x803F30B0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x803F30B4: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x803F30B8: jal         0x803F2748
    // 0x803F30BC: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    ovl_803F0000_menu_func_803F2748(rdram, ctx);
        goto after_1;
    // 0x803F30BC: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_1:
    // 0x803F30C0: beq         $v0, $zero, L_803F30D0
    if (ctx->r2 == 0) {
        // 0x803F30C4: nop
    
            goto L_803F30D0;
    }
    // 0x803F30C4: nop

    // 0x803F30C8: b           L_803F34C4
    // 0x803F30CC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_803F34C4;
    // 0x803F30CC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_803F30D0:
    // 0x803F30D0: lw          $t5, 0xC8($s0)
    ctx->r13 = MEM_W(ctx->r16, 0XC8);
    // 0x803F30D4: lui         $a1, 0x803F
    ctx->r5 = S32(0X803F << 16);
    // 0x803F30D8: lh          $t6, 0x8B0($t5)
    ctx->r14 = MEM_H(ctx->r13, 0X8B0);
    // 0x803F30DC: addiu       $a1, $a1, 0x745C
    ctx->r5 = ADD32(ctx->r5, 0X745C);
    // 0x803F30E0: slti        $at, $t6, 0xC9
    ctx->r1 = SIGNED(ctx->r14) < 0XC9 ? 1 : 0;
    // 0x803F30E4: bne         $at, $zero, L_803F3114
    if (ctx->r1 != 0) {
        // 0x803F30E8: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_803F3114;
    }
    // 0x803F30E8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x803F30EC: lui         $a1, 0x803F
    ctx->r5 = S32(0X803F << 16);
    // 0x803F30F0: addiu       $a1, $a1, 0x7450
    ctx->r5 = ADD32(ctx->r5, 0X7450);
    // 0x803F30F4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x803F30F8: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    // 0x803F30FC: jal         0x803F2748
    // 0x803F3100: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    ovl_803F0000_menu_func_803F2748(rdram, ctx);
        goto after_2;
    // 0x803F3100: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_2:
    // 0x803F3104: beq         $v0, $zero, L_803F3418
    if (ctx->r2 == 0) {
        // 0x803F3108: nop
    
            goto L_803F3418;
    }
    // 0x803F3108: nop

    // 0x803F310C: b           L_803F34C4
    // 0x803F3110: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_803F34C4;
    // 0x803F3110: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_803F3114:
    // 0x803F3114: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x803F3118: jal         0x803F2748
    // 0x803F311C: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    ovl_803F0000_menu_func_803F2748(rdram, ctx);
        goto after_3;
    // 0x803F311C: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_3:
    // 0x803F3120: beq         $v0, $zero, L_803F3130
    if (ctx->r2 == 0) {
        // 0x803F3124: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_803F3130;
    }
    // 0x803F3124: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x803F3128: b           L_803F34C4
    // 0x803F312C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_803F34C4;
    // 0x803F312C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_803F3130:
    // 0x803F3130: lui         $a1, 0x803F
    ctx->r5 = S32(0X803F << 16);
    // 0x803F3134: addiu       $a1, $a1, 0x7440
    ctx->r5 = ADD32(ctx->r5, 0X7440);
    // 0x803F3138: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    // 0x803F313C: jal         0x803F2748
    // 0x803F3140: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    ovl_803F0000_menu_func_803F2748(rdram, ctx);
        goto after_4;
    // 0x803F3140: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_4:
    // 0x803F3144: beq         $v0, $zero, L_803F3418
    if (ctx->r2 == 0) {
        // 0x803F3148: nop
    
            goto L_803F3418;
    }
    // 0x803F3148: nop

    // 0x803F314C: b           L_803F34C4
    // 0x803F3150: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_803F34C4;
    // 0x803F3150: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_803F3154:
    // 0x803F3154: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x803F3158: jal         0x803F2748
    // 0x803F315C: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    ovl_803F0000_menu_func_803F2748(rdram, ctx);
        goto after_5;
    // 0x803F315C: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_5:
    // 0x803F3160: beq         $v0, $zero, L_803F3170
    if (ctx->r2 == 0) {
        // 0x803F3164: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_803F3170;
    }
    // 0x803F3164: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x803F3168: b           L_803F34C4
    // 0x803F316C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_803F34C4;
    // 0x803F316C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_803F3170:
    // 0x803F3170: lui         $a1, 0x803F
    ctx->r5 = S32(0X803F << 16);
    // 0x803F3174: addiu       $a1, $a1, 0x7440
    ctx->r5 = ADD32(ctx->r5, 0X7440);
    // 0x803F3178: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    // 0x803F317C: jal         0x803F2748
    // 0x803F3180: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    ovl_803F0000_menu_func_803F2748(rdram, ctx);
        goto after_6;
    // 0x803F3180: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_6:
    // 0x803F3184: beq         $v0, $zero, L_803F3418
    if (ctx->r2 == 0) {
        // 0x803F3188: nop
    
            goto L_803F3418;
    }
    // 0x803F3188: nop

    // 0x803F318C: b           L_803F34C4
    // 0x803F3190: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_803F34C4;
    // 0x803F3190: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_803F3194:
    // 0x803F3194: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x803F3198: jal         0x803F1990
    // 0x803F319C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    ovl_803F0000_menu_func_803F1990(rdram, ctx);
        goto after_7;
    // 0x803F319C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_7:
    // 0x803F31A0: beq         $v0, $zero, L_803F32A0
    if (ctx->r2 == 0) {
        // 0x803F31A4: nop
    
            goto L_803F32A0;
    }
    // 0x803F31A4: nop

    // 0x803F31A8: lw          $t7, 0xC8($s0)
    ctx->r15 = MEM_W(ctx->r16, 0XC8);
    // 0x803F31AC: lui         $a1, 0x803F
    ctx->r5 = S32(0X803F << 16);
    // 0x803F31B0: lh          $v0, 0x8B0($t7)
    ctx->r2 = MEM_H(ctx->r15, 0X8B0);
    // 0x803F31B4: addiu       $a1, $a1, 0x747C
    ctx->r5 = ADD32(ctx->r5, 0X747C);
    // 0x803F31B8: slti        $at, $v0, 0x65
    ctx->r1 = SIGNED(ctx->r2) < 0X65 ? 1 : 0;
    // 0x803F31BC: bne         $at, $zero, L_803F3204
    if (ctx->r1 != 0) {
        // 0x803F31C0: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_803F3204;
    }
    // 0x803F31C0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x803F31C4: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    // 0x803F31C8: jal         0x803F2748
    // 0x803F31CC: addiu       $a3, $zero, 0x12
    ctx->r7 = ADD32(0, 0X12);
    ovl_803F0000_menu_func_803F2748(rdram, ctx);
        goto after_8;
    // 0x803F31CC: addiu       $a3, $zero, 0x12
    ctx->r7 = ADD32(0, 0X12);
    after_8:
    // 0x803F31D0: beq         $v0, $zero, L_803F31E0
    if (ctx->r2 == 0) {
        // 0x803F31D4: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_803F31E0;
    }
    // 0x803F31D4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x803F31D8: b           L_803F34C4
    // 0x803F31DC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_803F34C4;
    // 0x803F31DC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_803F31E0:
    // 0x803F31E0: lui         $a1, 0x803F
    ctx->r5 = S32(0X803F << 16);
    // 0x803F31E4: addiu       $a1, $a1, 0x7474
    ctx->r5 = ADD32(ctx->r5, 0X7474);
    // 0x803F31E8: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x803F31EC: jal         0x803F2748
    // 0x803F31F0: addiu       $a3, $zero, 0x12
    ctx->r7 = ADD32(0, 0X12);
    ovl_803F0000_menu_func_803F2748(rdram, ctx);
        goto after_9;
    // 0x803F31F0: addiu       $a3, $zero, 0x12
    ctx->r7 = ADD32(0, 0X12);
    after_9:
    // 0x803F31F4: beq         $v0, $zero, L_803F32A0
    if (ctx->r2 == 0) {
        // 0x803F31F8: nop
    
            goto L_803F32A0;
    }
    // 0x803F31F8: nop

    // 0x803F31FC: b           L_803F34C4
    // 0x803F3200: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_803F34C4;
    // 0x803F3200: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_803F3204:
    // 0x803F3204: blez        $v0, L_803F327C
    if (SIGNED(ctx->r2) <= 0) {
        // 0x803F3208: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_803F327C;
    }
    // 0x803F3208: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x803F320C: lui         $a1, 0x803F
    ctx->r5 = S32(0X803F << 16);
    // 0x803F3210: addiu       $a1, $a1, 0x7484
    ctx->r5 = ADD32(ctx->r5, 0X7484);
    // 0x803F3214: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x803F3218: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    // 0x803F321C: jal         0x803F2748
    // 0x803F3220: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    ovl_803F0000_menu_func_803F2748(rdram, ctx);
        goto after_10;
    // 0x803F3220: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_10:
    // 0x803F3224: beq         $v0, $zero, L_803F3234
    if (ctx->r2 == 0) {
        // 0x803F3228: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_803F3234;
    }
    // 0x803F3228: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x803F322C: b           L_803F34C4
    // 0x803F3230: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_803F34C4;
    // 0x803F3230: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_803F3234:
    // 0x803F3234: lui         $a1, 0x803F
    ctx->r5 = S32(0X803F << 16);
    // 0x803F3238: addiu       $a1, $a1, 0x746C
    ctx->r5 = ADD32(ctx->r5, 0X746C);
    // 0x803F323C: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    // 0x803F3240: jal         0x803F2748
    // 0x803F3244: addiu       $a3, $zero, 0x12
    ctx->r7 = ADD32(0, 0X12);
    ovl_803F0000_menu_func_803F2748(rdram, ctx);
        goto after_11;
    // 0x803F3244: addiu       $a3, $zero, 0x12
    ctx->r7 = ADD32(0, 0X12);
    after_11:
    // 0x803F3248: beq         $v0, $zero, L_803F3258
    if (ctx->r2 == 0) {
        // 0x803F324C: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_803F3258;
    }
    // 0x803F324C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x803F3250: b           L_803F34C4
    // 0x803F3254: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_803F34C4;
    // 0x803F3254: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_803F3258:
    // 0x803F3258: lui         $a1, 0x803F
    ctx->r5 = S32(0X803F << 16);
    // 0x803F325C: addiu       $a1, $a1, 0x7460
    ctx->r5 = ADD32(ctx->r5, 0X7460);
    // 0x803F3260: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x803F3264: jal         0x803F2748
    // 0x803F3268: addiu       $a3, $zero, 0x12
    ctx->r7 = ADD32(0, 0X12);
    ovl_803F0000_menu_func_803F2748(rdram, ctx);
        goto after_12;
    // 0x803F3268: addiu       $a3, $zero, 0x12
    ctx->r7 = ADD32(0, 0X12);
    after_12:
    // 0x803F326C: beq         $v0, $zero, L_803F32A0
    if (ctx->r2 == 0) {
        // 0x803F3270: nop
    
            goto L_803F32A0;
    }
    // 0x803F3270: nop

    // 0x803F3274: b           L_803F34C4
    // 0x803F3278: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_803F34C4;
    // 0x803F3278: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_803F327C:
    // 0x803F327C: lui         $a1, 0x803F
    ctx->r5 = S32(0X803F << 16);
    // 0x803F3280: addiu       $a1, $a1, 0x748C
    ctx->r5 = ADD32(ctx->r5, 0X748C);
    // 0x803F3284: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x803F3288: jal         0x803F2748
    // 0x803F328C: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    ovl_803F0000_menu_func_803F2748(rdram, ctx);
        goto after_13;
    // 0x803F328C: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_13:
    // 0x803F3290: beq         $v0, $zero, L_803F32A0
    if (ctx->r2 == 0) {
        // 0x803F3294: nop
    
            goto L_803F32A0;
    }
    // 0x803F3294: nop

    // 0x803F3298: b           L_803F34C4
    // 0x803F329C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_803F34C4;
    // 0x803F329C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_803F32A0:
    // 0x803F32A0: lui         $a1, 0x803F
    ctx->r5 = S32(0X803F << 16);
    // 0x803F32A4: addiu       $a1, $a1, 0x7464
    ctx->r5 = ADD32(ctx->r5, 0X7464);
    // 0x803F32A8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x803F32AC: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    // 0x803F32B0: jal         0x803F2748
    // 0x803F32B4: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    ovl_803F0000_menu_func_803F2748(rdram, ctx);
        goto after_14;
    // 0x803F32B4: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_14:
    // 0x803F32B8: beq         $v0, $zero, L_803F32C8
    if (ctx->r2 == 0) {
        // 0x803F32BC: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_803F32C8;
    }
    // 0x803F32BC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x803F32C0: b           L_803F34C4
    // 0x803F32C4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_803F34C4;
    // 0x803F32C4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_803F32C8:
    // 0x803F32C8: lui         $a1, 0x803F
    ctx->r5 = S32(0X803F << 16);
    // 0x803F32CC: addiu       $a1, $a1, 0x7478
    ctx->r5 = ADD32(ctx->r5, 0X7478);
    // 0x803F32D0: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x803F32D4: jal         0x803F2748
    // 0x803F32D8: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    ovl_803F0000_menu_func_803F2748(rdram, ctx);
        goto after_15;
    // 0x803F32D8: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_15:
    // 0x803F32DC: beq         $v0, $zero, L_803F3418
    if (ctx->r2 == 0) {
        // 0x803F32E0: nop
    
            goto L_803F3418;
    }
    // 0x803F32E0: nop

    // 0x803F32E4: b           L_803F34C4
    // 0x803F32E8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_803F34C4;
    // 0x803F32E8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_803F32EC:
    // 0x803F32EC: lui         $a1, 0x803F
    ctx->r5 = S32(0X803F << 16);
    // 0x803F32F0: addiu       $a1, $a1, 0x74AC
    ctx->r5 = ADD32(ctx->r5, 0X74AC);
    // 0x803F32F4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x803F32F8: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    // 0x803F32FC: jal         0x803F2748
    // 0x803F3300: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    ovl_803F0000_menu_func_803F2748(rdram, ctx);
        goto after_16;
    // 0x803F3300: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_16:
    // 0x803F3304: beq         $v0, $zero, L_803F3314
    if (ctx->r2 == 0) {
        // 0x803F3308: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_803F3314;
    }
    // 0x803F3308: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x803F330C: b           L_803F34C4
    // 0x803F3310: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_803F34C4;
    // 0x803F3310: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_803F3314:
    // 0x803F3314: lui         $a1, 0x803F
    ctx->r5 = S32(0X803F << 16);
    // 0x803F3318: addiu       $a1, $a1, 0x7498
    ctx->r5 = ADD32(ctx->r5, 0X7498);
    // 0x803F331C: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x803F3320: jal         0x803F2748
    // 0x803F3324: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    ovl_803F0000_menu_func_803F2748(rdram, ctx);
        goto after_17;
    // 0x803F3324: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_17:
    // 0x803F3328: beq         $v0, $zero, L_803F3418
    if (ctx->r2 == 0) {
        // 0x803F332C: nop
    
            goto L_803F3418;
    }
    // 0x803F332C: nop

    // 0x803F3330: b           L_803F34C4
    // 0x803F3334: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_803F34C4;
    // 0x803F3334: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_803F3338:
    // 0x803F3338: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x803F333C: jal         0x803F1990
    // 0x803F3340: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    ovl_803F0000_menu_func_803F1990(rdram, ctx);
        goto after_18;
    // 0x803F3340: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_18:
    // 0x803F3344: beq         $v0, $zero, L_803F3394
    if (ctx->r2 == 0) {
        // 0x803F3348: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_803F3394;
    }
    // 0x803F3348: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x803F334C: lui         $a1, 0x803F
    ctx->r5 = S32(0X803F << 16);
    // 0x803F3350: addiu       $a1, $a1, 0x749C
    ctx->r5 = ADD32(ctx->r5, 0X749C);
    // 0x803F3354: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    // 0x803F3358: jal         0x803F2748
    // 0x803F335C: addiu       $a3, $zero, 0x12
    ctx->r7 = ADD32(0, 0X12);
    ovl_803F0000_menu_func_803F2748(rdram, ctx);
        goto after_19;
    // 0x803F335C: addiu       $a3, $zero, 0x12
    ctx->r7 = ADD32(0, 0X12);
    after_19:
    // 0x803F3360: beq         $v0, $zero, L_803F3370
    if (ctx->r2 == 0) {
        // 0x803F3364: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_803F3370;
    }
    // 0x803F3364: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x803F3368: b           L_803F34C4
    // 0x803F336C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_803F34C4;
    // 0x803F336C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_803F3370:
    // 0x803F3370: lui         $a1, 0x803F
    ctx->r5 = S32(0X803F << 16);
    // 0x803F3374: addiu       $a1, $a1, 0x74A4
    ctx->r5 = ADD32(ctx->r5, 0X74A4);
    // 0x803F3378: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x803F337C: jal         0x803F2748
    // 0x803F3380: addiu       $a3, $zero, 0x12
    ctx->r7 = ADD32(0, 0X12);
    ovl_803F0000_menu_func_803F2748(rdram, ctx);
        goto after_20;
    // 0x803F3380: addiu       $a3, $zero, 0x12
    ctx->r7 = ADD32(0, 0X12);
    after_20:
    // 0x803F3384: beq         $v0, $zero, L_803F3394
    if (ctx->r2 == 0) {
        // 0x803F3388: nop
    
            goto L_803F3394;
    }
    // 0x803F3388: nop

    // 0x803F338C: b           L_803F34C4
    // 0x803F3390: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_803F34C4;
    // 0x803F3390: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_803F3394:
    // 0x803F3394: lui         $t8, 0x8028
    ctx->r24 = S32(0X8028 << 16);
    // 0x803F3398: lh          $t8, -0x1B60($t8)
    ctx->r24 = MEM_H(ctx->r24, -0X1B60);
    // 0x803F339C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x803F33A0: andi        $t9, $t8, 0x1
    ctx->r25 = ctx->r24 & 0X1;
    // 0x803F33A4: beq         $t9, $zero, L_803F33CC
    if (ctx->r25 == 0) {
        // 0x803F33A8: lui         $a1, 0x803F
        ctx->r5 = S32(0X803F << 16);
            goto L_803F33CC;
    }
    // 0x803F33A8: lui         $a1, 0x803F
    ctx->r5 = S32(0X803F << 16);
    // 0x803F33AC: addiu       $a1, $a1, 0x74A8
    ctx->r5 = ADD32(ctx->r5, 0X74A8);
    // 0x803F33B0: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x803F33B4: jal         0x803F2748
    // 0x803F33B8: addiu       $a3, $zero, 0x12
    ctx->r7 = ADD32(0, 0X12);
    ovl_803F0000_menu_func_803F2748(rdram, ctx);
        goto after_21;
    // 0x803F33B8: addiu       $a3, $zero, 0x12
    ctx->r7 = ADD32(0, 0X12);
    after_21:
    // 0x803F33BC: beq         $v0, $zero, L_803F33CC
    if (ctx->r2 == 0) {
        // 0x803F33C0: nop
    
            goto L_803F33CC;
    }
    // 0x803F33C0: nop

    // 0x803F33C4: b           L_803F34C4
    // 0x803F33C8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_803F34C4;
    // 0x803F33C8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_803F33CC:
    // 0x803F33CC: lui         $a1, 0x803F
    ctx->r5 = S32(0X803F << 16);
    // 0x803F33D0: addiu       $a1, $a1, 0x7490
    ctx->r5 = ADD32(ctx->r5, 0X7490);
    // 0x803F33D4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x803F33D8: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    // 0x803F33DC: jal         0x803F2748
    // 0x803F33E0: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    ovl_803F0000_menu_func_803F2748(rdram, ctx);
        goto after_22;
    // 0x803F33E0: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_22:
    // 0x803F33E4: beq         $v0, $zero, L_803F33F4
    if (ctx->r2 == 0) {
        // 0x803F33E8: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_803F33F4;
    }
    // 0x803F33E8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x803F33EC: b           L_803F34C4
    // 0x803F33F0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_803F34C4;
    // 0x803F33F0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_803F33F4:
    // 0x803F33F4: lui         $a1, 0x803F
    ctx->r5 = S32(0X803F << 16);
    // 0x803F33F8: addiu       $a1, $a1, 0x7498
    ctx->r5 = ADD32(ctx->r5, 0X7498);
    // 0x803F33FC: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x803F3400: jal         0x803F2748
    // 0x803F3404: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    ovl_803F0000_menu_func_803F2748(rdram, ctx);
        goto after_23;
    // 0x803F3404: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_23:
    // 0x803F3408: beq         $v0, $zero, L_803F3418
    if (ctx->r2 == 0) {
        // 0x803F340C: nop
    
            goto L_803F3418;
    }
    // 0x803F340C: nop

    // 0x803F3410: b           L_803F34C4
    // 0x803F3414: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_803F34C4;
    // 0x803F3414: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_803F3418:
    // 0x803F3418: lw          $t1, 0xC8($s0)
    ctx->r9 = MEM_W(ctx->r16, 0XC8);
    // 0x803F341C: lui         $a1, 0x803F
    ctx->r5 = S32(0X803F << 16);
    // 0x803F3420: lh          $t2, 0x8B0($t1)
    ctx->r10 = MEM_H(ctx->r9, 0X8B0);
    // 0x803F3424: addiu       $a1, $a1, 0x74C0
    ctx->r5 = ADD32(ctx->r5, 0X74C0);
    // 0x803F3428: slti        $at, $t2, 0xC9
    ctx->r1 = SIGNED(ctx->r10) < 0XC9 ? 1 : 0;
    // 0x803F342C: bne         $at, $zero, L_803F3474
    if (ctx->r1 != 0) {
        // 0x803F3430: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_803F3474;
    }
    // 0x803F3430: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x803F3434: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x803F3438: jal         0x803F2748
    // 0x803F343C: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    ovl_803F0000_menu_func_803F2748(rdram, ctx);
        goto after_24;
    // 0x803F343C: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_24:
    // 0x803F3440: beq         $v0, $zero, L_803F3450
    if (ctx->r2 == 0) {
        // 0x803F3444: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_803F3450;
    }
    // 0x803F3444: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x803F3448: b           L_803F34C4
    // 0x803F344C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_803F34C4;
    // 0x803F344C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_803F3450:
    // 0x803F3450: lui         $a1, 0x803F
    ctx->r5 = S32(0X803F << 16);
    // 0x803F3454: addiu       $a1, $a1, 0x74C4
    ctx->r5 = ADD32(ctx->r5, 0X74C4);
    // 0x803F3458: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x803F345C: jal         0x803F2748
    // 0x803F3460: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    ovl_803F0000_menu_func_803F2748(rdram, ctx);
        goto after_25;
    // 0x803F3460: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_25:
    // 0x803F3464: beq         $v0, $zero, L_803F3474
    if (ctx->r2 == 0) {
        // 0x803F3468: nop
    
            goto L_803F3474;
    }
    // 0x803F3468: nop

    // 0x803F346C: b           L_803F34C4
    // 0x803F3470: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_803F34C4;
    // 0x803F3470: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_803F3474:
    // 0x803F3474: lui         $a1, 0x803F
    ctx->r5 = S32(0X803F << 16);
    // 0x803F3478: addiu       $a1, $a1, 0x74B8
    ctx->r5 = ADD32(ctx->r5, 0X74B8);
    // 0x803F347C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x803F3480: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x803F3484: jal         0x803F2748
    // 0x803F3488: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    ovl_803F0000_menu_func_803F2748(rdram, ctx);
        goto after_26;
    // 0x803F3488: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_26:
    // 0x803F348C: beq         $v0, $zero, L_803F349C
    if (ctx->r2 == 0) {
        // 0x803F3490: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_803F349C;
    }
    // 0x803F3490: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x803F3494: b           L_803F34C4
    // 0x803F3498: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_803F34C4;
    // 0x803F3498: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_803F349C:
    // 0x803F349C: lui         $a1, 0x803F
    ctx->r5 = S32(0X803F << 16);
    // 0x803F34A0: addiu       $a1, $a1, 0x74BC
    ctx->r5 = ADD32(ctx->r5, 0X74BC);
    // 0x803F34A4: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x803F34A8: jal         0x803F2748
    // 0x803F34AC: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    ovl_803F0000_menu_func_803F2748(rdram, ctx);
        goto after_27;
    // 0x803F34AC: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_27:
    // 0x803F34B0: beq         $v0, $zero, L_803F34C4
    if (ctx->r2 == 0) {
        // 0x803F34B4: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_803F34C4;
    }
    // 0x803F34B4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x803F34B8: b           L_803F34C4
    // 0x803F34BC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_803F34C4;
    // 0x803F34BC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x803F34C0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_803F34C4:
    // 0x803F34C4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x803F34C8: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x803F34CC: jr          $ra
    // 0x803F34D0: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x803F34D0: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void ovl_803F0000_menu_func_803F30FC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803F30FC: jal         0x803F2748
    // 0x803F3100: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    ovl_803F0000_menu_func_803F2748(rdram, ctx);
        goto after_0;
    // 0x803F3100: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_0:
    // 0x803F3104: beq         $v0, $zero, L_803F3418
    if (ctx->r2 == 0) {
        // 0x803F3108: nop
    
            goto L_803F3418;
    }
    // 0x803F3108: nop

    // 0x803F310C: b           L_803F34C4
    // 0x803F3110: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_803F34C4;
    // 0x803F3110: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x803F3114: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x803F3118: jal         0x803F2748
    // 0x803F311C: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    ovl_803F0000_menu_func_803F2748(rdram, ctx);
        goto after_1;
    // 0x803F311C: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_1:
    // 0x803F3120: beq         $v0, $zero, L_803F3130
    if (ctx->r2 == 0) {
        // 0x803F3124: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_803F3130;
    }
    // 0x803F3124: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x803F3128: b           L_803F34C4
    // 0x803F312C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_803F34C4;
    // 0x803F312C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_803F3130:
    // 0x803F3130: lui         $a1, 0x803F
    ctx->r5 = S32(0X803F << 16);
    // 0x803F3134: addiu       $a1, $a1, 0x7440
    ctx->r5 = ADD32(ctx->r5, 0X7440);
    // 0x803F3138: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    // 0x803F313C: jal         0x803F2748
    // 0x803F3140: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    ovl_803F0000_menu_func_803F2748(rdram, ctx);
        goto after_2;
    // 0x803F3140: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_2:
    // 0x803F3144: beq         $v0, $zero, L_803F3418
    if (ctx->r2 == 0) {
        // 0x803F3148: nop
    
            goto L_803F3418;
    }
    // 0x803F3148: nop

    // 0x803F314C: b           L_803F34C4
    // 0x803F3150: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_803F34C4;
    // 0x803F3150: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x803F3154: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x803F3158: jal         0x803F2748
    // 0x803F315C: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    ovl_803F0000_menu_func_803F2748(rdram, ctx);
        goto after_3;
    // 0x803F315C: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_3:
    // 0x803F3160: beq         $v0, $zero, L_803F3170
    if (ctx->r2 == 0) {
        // 0x803F3164: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_803F3170;
    }
    // 0x803F3164: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x803F3168: b           L_803F34C4
    // 0x803F316C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_803F34C4;
    // 0x803F316C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_803F3170:
    // 0x803F3170: lui         $a1, 0x803F
    ctx->r5 = S32(0X803F << 16);
    // 0x803F3174: addiu       $a1, $a1, 0x7440
    ctx->r5 = ADD32(ctx->r5, 0X7440);
    // 0x803F3178: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    // 0x803F317C: jal         0x803F2748
    // 0x803F3180: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    ovl_803F0000_menu_func_803F2748(rdram, ctx);
        goto after_4;
    // 0x803F3180: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_4:
    // 0x803F3184: beq         $v0, $zero, L_803F3418
    if (ctx->r2 == 0) {
        // 0x803F3188: nop
    
            goto L_803F3418;
    }
    // 0x803F3188: nop

    // 0x803F318C: b           L_803F34C4
    // 0x803F3190: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_803F34C4;
    // 0x803F3190: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x803F3194: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x803F3198: jal         0x803F1990
    // 0x803F319C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    ovl_803F0000_menu_func_803F1990(rdram, ctx);
        goto after_5;
    // 0x803F319C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_5:
    // 0x803F31A0: beq         $v0, $zero, L_803F32A0
    if (ctx->r2 == 0) {
        // 0x803F31A4: nop
    
            goto L_803F32A0;
    }
    // 0x803F31A4: nop

    // 0x803F31A8: lw          $t7, 0xC8($s0)
    ctx->r15 = MEM_W(ctx->r16, 0XC8);
    // 0x803F31AC: lui         $a1, 0x803F
    ctx->r5 = S32(0X803F << 16);
    // 0x803F31B0: lh          $v0, 0x8B0($t7)
    ctx->r2 = MEM_H(ctx->r15, 0X8B0);
    // 0x803F31B4: addiu       $a1, $a1, 0x747C
    ctx->r5 = ADD32(ctx->r5, 0X747C);
    // 0x803F31B8: slti        $at, $v0, 0x65
    ctx->r1 = SIGNED(ctx->r2) < 0X65 ? 1 : 0;
    // 0x803F31BC: bne         $at, $zero, L_803F3204
    if (ctx->r1 != 0) {
        // 0x803F31C0: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_803F3204;
    }
    // 0x803F31C0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x803F31C4: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    // 0x803F31C8: jal         0x803F2748
    // 0x803F31CC: addiu       $a3, $zero, 0x12
    ctx->r7 = ADD32(0, 0X12);
    ovl_803F0000_menu_func_803F2748(rdram, ctx);
        goto after_6;
    // 0x803F31CC: addiu       $a3, $zero, 0x12
    ctx->r7 = ADD32(0, 0X12);
    after_6:
    // 0x803F31D0: beq         $v0, $zero, L_803F31E0
    if (ctx->r2 == 0) {
        // 0x803F31D4: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_803F31E0;
    }
    // 0x803F31D4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x803F31D8: b           L_803F34C4
    // 0x803F31DC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_803F34C4;
    // 0x803F31DC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_803F31E0:
    // 0x803F31E0: lui         $a1, 0x803F
    ctx->r5 = S32(0X803F << 16);
    // 0x803F31E4: addiu       $a1, $a1, 0x7474
    ctx->r5 = ADD32(ctx->r5, 0X7474);
    // 0x803F31E8: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x803F31EC: jal         0x803F2748
    // 0x803F31F0: addiu       $a3, $zero, 0x12
    ctx->r7 = ADD32(0, 0X12);
    ovl_803F0000_menu_func_803F2748(rdram, ctx);
        goto after_7;
    // 0x803F31F0: addiu       $a3, $zero, 0x12
    ctx->r7 = ADD32(0, 0X12);
    after_7:
    // 0x803F31F4: beq         $v0, $zero, L_803F32A0
    if (ctx->r2 == 0) {
        // 0x803F31F8: nop
    
            goto L_803F32A0;
    }
    // 0x803F31F8: nop

    // 0x803F31FC: b           L_803F34C4
    // 0x803F3200: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_803F34C4;
    // 0x803F3200: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_803F3204:
    // 0x803F3204: blez        $v0, L_803F327C
    if (SIGNED(ctx->r2) <= 0) {
        // 0x803F3208: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_803F327C;
    }
    // 0x803F3208: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x803F320C: lui         $a1, 0x803F
    ctx->r5 = S32(0X803F << 16);
    // 0x803F3210: addiu       $a1, $a1, 0x7484
    ctx->r5 = ADD32(ctx->r5, 0X7484);
    // 0x803F3214: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x803F3218: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    // 0x803F321C: jal         0x803F2748
    // 0x803F3220: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    ovl_803F0000_menu_func_803F2748(rdram, ctx);
        goto after_8;
    // 0x803F3220: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_8:
    // 0x803F3224: beq         $v0, $zero, L_803F3234
    if (ctx->r2 == 0) {
        // 0x803F3228: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_803F3234;
    }
    // 0x803F3228: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x803F322C: b           L_803F34C4
    // 0x803F3230: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_803F34C4;
    // 0x803F3230: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_803F3234:
    // 0x803F3234: lui         $a1, 0x803F
    ctx->r5 = S32(0X803F << 16);
    // 0x803F3238: addiu       $a1, $a1, 0x746C
    ctx->r5 = ADD32(ctx->r5, 0X746C);
    // 0x803F323C: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    // 0x803F3240: jal         0x803F2748
    // 0x803F3244: addiu       $a3, $zero, 0x12
    ctx->r7 = ADD32(0, 0X12);
    ovl_803F0000_menu_func_803F2748(rdram, ctx);
        goto after_9;
    // 0x803F3244: addiu       $a3, $zero, 0x12
    ctx->r7 = ADD32(0, 0X12);
    after_9:
    // 0x803F3248: beq         $v0, $zero, L_803F3258
    if (ctx->r2 == 0) {
        // 0x803F324C: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_803F3258;
    }
    // 0x803F324C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x803F3250: b           L_803F34C4
    // 0x803F3254: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_803F34C4;
    // 0x803F3254: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_803F3258:
    // 0x803F3258: lui         $a1, 0x803F
    ctx->r5 = S32(0X803F << 16);
    // 0x803F325C: addiu       $a1, $a1, 0x7460
    ctx->r5 = ADD32(ctx->r5, 0X7460);
    // 0x803F3260: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x803F3264: jal         0x803F2748
    // 0x803F3268: addiu       $a3, $zero, 0x12
    ctx->r7 = ADD32(0, 0X12);
    ovl_803F0000_menu_func_803F2748(rdram, ctx);
        goto after_10;
    // 0x803F3268: addiu       $a3, $zero, 0x12
    ctx->r7 = ADD32(0, 0X12);
    after_10:
    // 0x803F326C: beq         $v0, $zero, L_803F32A0
    if (ctx->r2 == 0) {
        // 0x803F3270: nop
    
            goto L_803F32A0;
    }
    // 0x803F3270: nop

    // 0x803F3274: b           L_803F34C4
    // 0x803F3278: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_803F34C4;
    // 0x803F3278: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_803F327C:
    // 0x803F327C: lui         $a1, 0x803F
    ctx->r5 = S32(0X803F << 16);
    // 0x803F3280: addiu       $a1, $a1, 0x748C
    ctx->r5 = ADD32(ctx->r5, 0X748C);
    // 0x803F3284: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x803F3288: jal         0x803F2748
    // 0x803F328C: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    ovl_803F0000_menu_func_803F2748(rdram, ctx);
        goto after_11;
    // 0x803F328C: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_11:
    // 0x803F3290: beq         $v0, $zero, L_803F32A0
    if (ctx->r2 == 0) {
        // 0x803F3294: nop
    
            goto L_803F32A0;
    }
    // 0x803F3294: nop

    // 0x803F3298: b           L_803F34C4
    // 0x803F329C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_803F34C4;
    // 0x803F329C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_803F32A0:
    // 0x803F32A0: lui         $a1, 0x803F
    ctx->r5 = S32(0X803F << 16);
    // 0x803F32A4: addiu       $a1, $a1, 0x7464
    ctx->r5 = ADD32(ctx->r5, 0X7464);
    // 0x803F32A8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x803F32AC: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    // 0x803F32B0: jal         0x803F2748
    // 0x803F32B4: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    ovl_803F0000_menu_func_803F2748(rdram, ctx);
        goto after_12;
    // 0x803F32B4: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_12:
    // 0x803F32B8: beq         $v0, $zero, L_803F32C8
    if (ctx->r2 == 0) {
        // 0x803F32BC: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_803F32C8;
    }
    // 0x803F32BC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x803F32C0: b           L_803F34C4
    // 0x803F32C4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_803F34C4;
    // 0x803F32C4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_803F32C8:
    // 0x803F32C8: lui         $a1, 0x803F
    ctx->r5 = S32(0X803F << 16);
    // 0x803F32CC: addiu       $a1, $a1, 0x7478
    ctx->r5 = ADD32(ctx->r5, 0X7478);
    // 0x803F32D0: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x803F32D4: jal         0x803F2748
    // 0x803F32D8: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    ovl_803F0000_menu_func_803F2748(rdram, ctx);
        goto after_13;
    // 0x803F32D8: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_13:
    // 0x803F32DC: beq         $v0, $zero, L_803F3418
    if (ctx->r2 == 0) {
        // 0x803F32E0: nop
    
            goto L_803F3418;
    }
    // 0x803F32E0: nop

    // 0x803F32E4: b           L_803F34C4
    // 0x803F32E8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_803F34C4;
    // 0x803F32E8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x803F32EC: lui         $a1, 0x803F
    ctx->r5 = S32(0X803F << 16);
    // 0x803F32F0: addiu       $a1, $a1, 0x74AC
    ctx->r5 = ADD32(ctx->r5, 0X74AC);
    // 0x803F32F4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x803F32F8: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    // 0x803F32FC: jal         0x803F2748
    // 0x803F3300: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    ovl_803F0000_menu_func_803F2748(rdram, ctx);
        goto after_14;
    // 0x803F3300: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_14:
    // 0x803F3304: beq         $v0, $zero, L_803F3314
    if (ctx->r2 == 0) {
        // 0x803F3308: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_803F3314;
    }
    // 0x803F3308: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x803F330C: b           L_803F34C4
    // 0x803F3310: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_803F34C4;
    // 0x803F3310: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_803F3314:
    // 0x803F3314: lui         $a1, 0x803F
    ctx->r5 = S32(0X803F << 16);
    // 0x803F3318: addiu       $a1, $a1, 0x7498
    ctx->r5 = ADD32(ctx->r5, 0X7498);
    // 0x803F331C: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x803F3320: jal         0x803F2748
    // 0x803F3324: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    ovl_803F0000_menu_func_803F2748(rdram, ctx);
        goto after_15;
    // 0x803F3324: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_15:
    // 0x803F3328: beq         $v0, $zero, L_803F3418
    if (ctx->r2 == 0) {
        // 0x803F332C: nop
    
            goto L_803F3418;
    }
    // 0x803F332C: nop

    // 0x803F3330: b           L_803F34C4
    // 0x803F3334: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_803F34C4;
    // 0x803F3334: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x803F3338: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x803F333C: jal         0x803F1990
    // 0x803F3340: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    ovl_803F0000_menu_func_803F1990(rdram, ctx);
        goto after_16;
    // 0x803F3340: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_16:
    // 0x803F3344: beq         $v0, $zero, L_803F3394
    if (ctx->r2 == 0) {
        // 0x803F3348: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_803F3394;
    }
    // 0x803F3348: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x803F334C: lui         $a1, 0x803F
    ctx->r5 = S32(0X803F << 16);
    // 0x803F3350: addiu       $a1, $a1, 0x749C
    ctx->r5 = ADD32(ctx->r5, 0X749C);
    // 0x803F3354: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    // 0x803F3358: jal         0x803F2748
    // 0x803F335C: addiu       $a3, $zero, 0x12
    ctx->r7 = ADD32(0, 0X12);
    ovl_803F0000_menu_func_803F2748(rdram, ctx);
        goto after_17;
    // 0x803F335C: addiu       $a3, $zero, 0x12
    ctx->r7 = ADD32(0, 0X12);
    after_17:
    // 0x803F3360: beq         $v0, $zero, L_803F3370
    if (ctx->r2 == 0) {
        // 0x803F3364: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_803F3370;
    }
    // 0x803F3364: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x803F3368: b           L_803F34C4
    // 0x803F336C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_803F34C4;
    // 0x803F336C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_803F3370:
    // 0x803F3370: lui         $a1, 0x803F
    ctx->r5 = S32(0X803F << 16);
    // 0x803F3374: addiu       $a1, $a1, 0x74A4
    ctx->r5 = ADD32(ctx->r5, 0X74A4);
    // 0x803F3378: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x803F337C: jal         0x803F2748
    // 0x803F3380: addiu       $a3, $zero, 0x12
    ctx->r7 = ADD32(0, 0X12);
    ovl_803F0000_menu_func_803F2748(rdram, ctx);
        goto after_18;
    // 0x803F3380: addiu       $a3, $zero, 0x12
    ctx->r7 = ADD32(0, 0X12);
    after_18:
    // 0x803F3384: beq         $v0, $zero, L_803F3394
    if (ctx->r2 == 0) {
        // 0x803F3388: nop
    
            goto L_803F3394;
    }
    // 0x803F3388: nop

    // 0x803F338C: b           L_803F34C4
    // 0x803F3390: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_803F34C4;
    // 0x803F3390: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_803F3394:
    // 0x803F3394: lui         $t8, 0x8028
    ctx->r24 = S32(0X8028 << 16);
    // 0x803F3398: lh          $t8, -0x1B60($t8)
    ctx->r24 = MEM_H(ctx->r24, -0X1B60);
    // 0x803F339C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x803F33A0: andi        $t9, $t8, 0x1
    ctx->r25 = ctx->r24 & 0X1;
    // 0x803F33A4: beq         $t9, $zero, L_803F33CC
    if (ctx->r25 == 0) {
        // 0x803F33A8: lui         $a1, 0x803F
        ctx->r5 = S32(0X803F << 16);
            goto L_803F33CC;
    }
    // 0x803F33A8: lui         $a1, 0x803F
    ctx->r5 = S32(0X803F << 16);
    // 0x803F33AC: addiu       $a1, $a1, 0x74A8
    ctx->r5 = ADD32(ctx->r5, 0X74A8);
    // 0x803F33B0: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x803F33B4: jal         0x803F2748
    // 0x803F33B8: addiu       $a3, $zero, 0x12
    ctx->r7 = ADD32(0, 0X12);
    ovl_803F0000_menu_func_803F2748(rdram, ctx);
        goto after_19;
    // 0x803F33B8: addiu       $a3, $zero, 0x12
    ctx->r7 = ADD32(0, 0X12);
    after_19:
    // 0x803F33BC: beq         $v0, $zero, L_803F33CC
    if (ctx->r2 == 0) {
        // 0x803F33C0: nop
    
            goto L_803F33CC;
    }
    // 0x803F33C0: nop

    // 0x803F33C4: b           L_803F34C4
    // 0x803F33C8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_803F34C4;
    // 0x803F33C8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_803F33CC:
    // 0x803F33CC: lui         $a1, 0x803F
    ctx->r5 = S32(0X803F << 16);
    // 0x803F33D0: addiu       $a1, $a1, 0x7490
    ctx->r5 = ADD32(ctx->r5, 0X7490);
    // 0x803F33D4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x803F33D8: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    // 0x803F33DC: jal         0x803F2748
    // 0x803F33E0: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    ovl_803F0000_menu_func_803F2748(rdram, ctx);
        goto after_20;
    // 0x803F33E0: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_20:
    // 0x803F33E4: beq         $v0, $zero, L_803F33F4
    if (ctx->r2 == 0) {
        // 0x803F33E8: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_803F33F4;
    }
    // 0x803F33E8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x803F33EC: b           L_803F34C4
    // 0x803F33F0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_803F34C4;
    // 0x803F33F0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_803F33F4:
    // 0x803F33F4: lui         $a1, 0x803F
    ctx->r5 = S32(0X803F << 16);
    // 0x803F33F8: addiu       $a1, $a1, 0x7498
    ctx->r5 = ADD32(ctx->r5, 0X7498);
    // 0x803F33FC: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x803F3400: jal         0x803F2748
    // 0x803F3404: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    ovl_803F0000_menu_func_803F2748(rdram, ctx);
        goto after_21;
    // 0x803F3404: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_21:
    // 0x803F3408: beq         $v0, $zero, L_803F3418
    if (ctx->r2 == 0) {
        // 0x803F340C: nop
    
            goto L_803F3418;
    }
    // 0x803F340C: nop

    // 0x803F3410: b           L_803F34C4
    // 0x803F3414: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_803F34C4;
    // 0x803F3414: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_803F3418:
    // 0x803F3418: lw          $t1, 0xC8($s0)
    ctx->r9 = MEM_W(ctx->r16, 0XC8);
    // 0x803F341C: lui         $a1, 0x803F
    ctx->r5 = S32(0X803F << 16);
    // 0x803F3420: lh          $t2, 0x8B0($t1)
    ctx->r10 = MEM_H(ctx->r9, 0X8B0);
    // 0x803F3424: addiu       $a1, $a1, 0x74C0
    ctx->r5 = ADD32(ctx->r5, 0X74C0);
    // 0x803F3428: slti        $at, $t2, 0xC9
    ctx->r1 = SIGNED(ctx->r10) < 0XC9 ? 1 : 0;
    // 0x803F342C: bne         $at, $zero, L_803F3474
    if (ctx->r1 != 0) {
        // 0x803F3430: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_803F3474;
    }
    // 0x803F3430: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x803F3434: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x803F3438: jal         0x803F2748
    // 0x803F343C: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    ovl_803F0000_menu_func_803F2748(rdram, ctx);
        goto after_22;
    // 0x803F343C: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_22:
    // 0x803F3440: beq         $v0, $zero, L_803F3450
    if (ctx->r2 == 0) {
        // 0x803F3444: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_803F3450;
    }
    // 0x803F3444: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x803F3448: b           L_803F34C4
    // 0x803F344C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_803F34C4;
    // 0x803F344C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_803F3450:
    // 0x803F3450: lui         $a1, 0x803F
    ctx->r5 = S32(0X803F << 16);
    // 0x803F3454: addiu       $a1, $a1, 0x74C4
    ctx->r5 = ADD32(ctx->r5, 0X74C4);
    // 0x803F3458: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x803F345C: jal         0x803F2748
    // 0x803F3460: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    ovl_803F0000_menu_func_803F2748(rdram, ctx);
        goto after_23;
    // 0x803F3460: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_23:
    // 0x803F3464: beq         $v0, $zero, L_803F3474
    if (ctx->r2 == 0) {
        // 0x803F3468: nop
    
            goto L_803F3474;
    }
    // 0x803F3468: nop

    // 0x803F346C: b           L_803F34C4
    // 0x803F3470: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_803F34C4;
    // 0x803F3470: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_803F3474:
    // 0x803F3474: lui         $a1, 0x803F
    ctx->r5 = S32(0X803F << 16);
    // 0x803F3478: addiu       $a1, $a1, 0x74B8
    ctx->r5 = ADD32(ctx->r5, 0X74B8);
    // 0x803F347C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x803F3480: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x803F3484: jal         0x803F2748
    // 0x803F3488: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    ovl_803F0000_menu_func_803F2748(rdram, ctx);
        goto after_24;
    // 0x803F3488: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_24:
    // 0x803F348C: beq         $v0, $zero, L_803F349C
    if (ctx->r2 == 0) {
        // 0x803F3490: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_803F349C;
    }
    // 0x803F3490: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x803F3494: b           L_803F34C4
    // 0x803F3498: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_803F34C4;
    // 0x803F3498: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_803F349C:
    // 0x803F349C: lui         $a1, 0x803F
    ctx->r5 = S32(0X803F << 16);
    // 0x803F34A0: addiu       $a1, $a1, 0x74BC
    ctx->r5 = ADD32(ctx->r5, 0X74BC);
    // 0x803F34A4: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x803F34A8: jal         0x803F2748
    // 0x803F34AC: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    ovl_803F0000_menu_func_803F2748(rdram, ctx);
        goto after_25;
    // 0x803F34AC: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_25:
    // 0x803F34B0: beq         $v0, $zero, L_803F34C4
    if (ctx->r2 == 0) {
        // 0x803F34B4: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_803F34C4;
    }
    // 0x803F34B4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x803F34B8: b           L_803F34C4
    // 0x803F34BC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_803F34C4;
    // 0x803F34BC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x803F34C0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_803F34C4:
    // 0x803F34C4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x803F34C8: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x803F34CC: jr          $ra
    // 0x803F34D0: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x803F34D0: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void ovl_803F0000_menu_func_803F316C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803F316C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x803F3170: lui         $a1, 0x803F
    ctx->r5 = S32(0X803F << 16);
    // 0x803F3174: addiu       $a1, $a1, 0x7440
    ctx->r5 = ADD32(ctx->r5, 0X7440);
    // 0x803F3178: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    // 0x803F317C: jal         0x803F2748
    // 0x803F3180: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    ovl_803F0000_menu_func_803F2748(rdram, ctx);
        goto after_0;
    // 0x803F3180: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_0:
    // 0x803F3184: beq         $v0, $zero, L_803F3418
    if (ctx->r2 == 0) {
        // 0x803F3188: nop
    
            goto L_803F3418;
    }
    // 0x803F3188: nop

    // 0x803F318C: b           L_803F34C4
    // 0x803F3190: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_803F34C4;
    // 0x803F3190: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x803F3194: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x803F3198: jal         0x803F1990
    // 0x803F319C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    ovl_803F0000_menu_func_803F1990(rdram, ctx);
        goto after_1;
    // 0x803F319C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_1:
    // 0x803F31A0: beq         $v0, $zero, L_803F32A0
    if (ctx->r2 == 0) {
        // 0x803F31A4: nop
    
            goto L_803F32A0;
    }
    // 0x803F31A4: nop

    // 0x803F31A8: lw          $t7, 0xC8($s0)
    ctx->r15 = MEM_W(ctx->r16, 0XC8);
    // 0x803F31AC: lui         $a1, 0x803F
    ctx->r5 = S32(0X803F << 16);
    // 0x803F31B0: lh          $v0, 0x8B0($t7)
    ctx->r2 = MEM_H(ctx->r15, 0X8B0);
    // 0x803F31B4: addiu       $a1, $a1, 0x747C
    ctx->r5 = ADD32(ctx->r5, 0X747C);
    // 0x803F31B8: slti        $at, $v0, 0x65
    ctx->r1 = SIGNED(ctx->r2) < 0X65 ? 1 : 0;
    // 0x803F31BC: bne         $at, $zero, L_803F3204
    if (ctx->r1 != 0) {
        // 0x803F31C0: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_803F3204;
    }
    // 0x803F31C0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x803F31C4: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    // 0x803F31C8: jal         0x803F2748
    // 0x803F31CC: addiu       $a3, $zero, 0x12
    ctx->r7 = ADD32(0, 0X12);
    ovl_803F0000_menu_func_803F2748(rdram, ctx);
        goto after_2;
    // 0x803F31CC: addiu       $a3, $zero, 0x12
    ctx->r7 = ADD32(0, 0X12);
    after_2:
    // 0x803F31D0: beq         $v0, $zero, L_803F31E0
    if (ctx->r2 == 0) {
        // 0x803F31D4: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_803F31E0;
    }
    // 0x803F31D4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x803F31D8: b           L_803F34C4
    // 0x803F31DC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_803F34C4;
    // 0x803F31DC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_803F31E0:
    // 0x803F31E0: lui         $a1, 0x803F
    ctx->r5 = S32(0X803F << 16);
    // 0x803F31E4: addiu       $a1, $a1, 0x7474
    ctx->r5 = ADD32(ctx->r5, 0X7474);
    // 0x803F31E8: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x803F31EC: jal         0x803F2748
    // 0x803F31F0: addiu       $a3, $zero, 0x12
    ctx->r7 = ADD32(0, 0X12);
    ovl_803F0000_menu_func_803F2748(rdram, ctx);
        goto after_3;
    // 0x803F31F0: addiu       $a3, $zero, 0x12
    ctx->r7 = ADD32(0, 0X12);
    after_3:
    // 0x803F31F4: beq         $v0, $zero, L_803F32A0
    if (ctx->r2 == 0) {
        // 0x803F31F8: nop
    
            goto L_803F32A0;
    }
    // 0x803F31F8: nop

    // 0x803F31FC: b           L_803F34C4
    // 0x803F3200: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_803F34C4;
    // 0x803F3200: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_803F3204:
    // 0x803F3204: blez        $v0, L_803F327C
    if (SIGNED(ctx->r2) <= 0) {
        // 0x803F3208: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_803F327C;
    }
    // 0x803F3208: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x803F320C: lui         $a1, 0x803F
    ctx->r5 = S32(0X803F << 16);
    // 0x803F3210: addiu       $a1, $a1, 0x7484
    ctx->r5 = ADD32(ctx->r5, 0X7484);
    // 0x803F3214: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x803F3218: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    // 0x803F321C: jal         0x803F2748
    // 0x803F3220: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    ovl_803F0000_menu_func_803F2748(rdram, ctx);
        goto after_4;
    // 0x803F3220: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_4:
    // 0x803F3224: beq         $v0, $zero, L_803F3234
    if (ctx->r2 == 0) {
        // 0x803F3228: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_803F3234;
    }
    // 0x803F3228: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x803F322C: b           L_803F34C4
    // 0x803F3230: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_803F34C4;
    // 0x803F3230: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_803F3234:
    // 0x803F3234: lui         $a1, 0x803F
    ctx->r5 = S32(0X803F << 16);
    // 0x803F3238: addiu       $a1, $a1, 0x746C
    ctx->r5 = ADD32(ctx->r5, 0X746C);
    // 0x803F323C: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    // 0x803F3240: jal         0x803F2748
    // 0x803F3244: addiu       $a3, $zero, 0x12
    ctx->r7 = ADD32(0, 0X12);
    ovl_803F0000_menu_func_803F2748(rdram, ctx);
        goto after_5;
    // 0x803F3244: addiu       $a3, $zero, 0x12
    ctx->r7 = ADD32(0, 0X12);
    after_5:
    // 0x803F3248: beq         $v0, $zero, L_803F3258
    if (ctx->r2 == 0) {
        // 0x803F324C: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_803F3258;
    }
    // 0x803F324C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x803F3250: b           L_803F34C4
    // 0x803F3254: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_803F34C4;
    // 0x803F3254: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_803F3258:
    // 0x803F3258: lui         $a1, 0x803F
    ctx->r5 = S32(0X803F << 16);
    // 0x803F325C: addiu       $a1, $a1, 0x7460
    ctx->r5 = ADD32(ctx->r5, 0X7460);
    // 0x803F3260: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x803F3264: jal         0x803F2748
    // 0x803F3268: addiu       $a3, $zero, 0x12
    ctx->r7 = ADD32(0, 0X12);
    ovl_803F0000_menu_func_803F2748(rdram, ctx);
        goto after_6;
    // 0x803F3268: addiu       $a3, $zero, 0x12
    ctx->r7 = ADD32(0, 0X12);
    after_6:
    // 0x803F326C: beq         $v0, $zero, L_803F32A0
    if (ctx->r2 == 0) {
        // 0x803F3270: nop
    
            goto L_803F32A0;
    }
    // 0x803F3270: nop

    // 0x803F3274: b           L_803F34C4
    // 0x803F3278: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_803F34C4;
    // 0x803F3278: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_803F327C:
    // 0x803F327C: lui         $a1, 0x803F
    ctx->r5 = S32(0X803F << 16);
    // 0x803F3280: addiu       $a1, $a1, 0x748C
    ctx->r5 = ADD32(ctx->r5, 0X748C);
    // 0x803F3284: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x803F3288: jal         0x803F2748
    // 0x803F328C: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    ovl_803F0000_menu_func_803F2748(rdram, ctx);
        goto after_7;
    // 0x803F328C: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_7:
    // 0x803F3290: beq         $v0, $zero, L_803F32A0
    if (ctx->r2 == 0) {
        // 0x803F3294: nop
    
            goto L_803F32A0;
    }
    // 0x803F3294: nop

    // 0x803F3298: b           L_803F34C4
    // 0x803F329C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_803F34C4;
    // 0x803F329C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_803F32A0:
    // 0x803F32A0: lui         $a1, 0x803F
    ctx->r5 = S32(0X803F << 16);
    // 0x803F32A4: addiu       $a1, $a1, 0x7464
    ctx->r5 = ADD32(ctx->r5, 0X7464);
    // 0x803F32A8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x803F32AC: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    // 0x803F32B0: jal         0x803F2748
    // 0x803F32B4: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    ovl_803F0000_menu_func_803F2748(rdram, ctx);
        goto after_8;
    // 0x803F32B4: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_8:
    // 0x803F32B8: beq         $v0, $zero, L_803F32C8
    if (ctx->r2 == 0) {
        // 0x803F32BC: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_803F32C8;
    }
    // 0x803F32BC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x803F32C0: b           L_803F34C4
    // 0x803F32C4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_803F34C4;
    // 0x803F32C4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_803F32C8:
    // 0x803F32C8: lui         $a1, 0x803F
    ctx->r5 = S32(0X803F << 16);
    // 0x803F32CC: addiu       $a1, $a1, 0x7478
    ctx->r5 = ADD32(ctx->r5, 0X7478);
    // 0x803F32D0: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x803F32D4: jal         0x803F2748
    // 0x803F32D8: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    ovl_803F0000_menu_func_803F2748(rdram, ctx);
        goto after_9;
    // 0x803F32D8: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_9:
    // 0x803F32DC: beq         $v0, $zero, L_803F3418
    if (ctx->r2 == 0) {
        // 0x803F32E0: nop
    
            goto L_803F3418;
    }
    // 0x803F32E0: nop

    // 0x803F32E4: b           L_803F34C4
    // 0x803F32E8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_803F34C4;
    // 0x803F32E8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x803F32EC: lui         $a1, 0x803F
    ctx->r5 = S32(0X803F << 16);
    // 0x803F32F0: addiu       $a1, $a1, 0x74AC
    ctx->r5 = ADD32(ctx->r5, 0X74AC);
    // 0x803F32F4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x803F32F8: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    // 0x803F32FC: jal         0x803F2748
    // 0x803F3300: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    ovl_803F0000_menu_func_803F2748(rdram, ctx);
        goto after_10;
    // 0x803F3300: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_10:
    // 0x803F3304: beq         $v0, $zero, L_803F3314
    if (ctx->r2 == 0) {
        // 0x803F3308: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_803F3314;
    }
    // 0x803F3308: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x803F330C: b           L_803F34C4
    // 0x803F3310: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_803F34C4;
    // 0x803F3310: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_803F3314:
    // 0x803F3314: lui         $a1, 0x803F
    ctx->r5 = S32(0X803F << 16);
    // 0x803F3318: addiu       $a1, $a1, 0x7498
    ctx->r5 = ADD32(ctx->r5, 0X7498);
    // 0x803F331C: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x803F3320: jal         0x803F2748
    // 0x803F3324: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    ovl_803F0000_menu_func_803F2748(rdram, ctx);
        goto after_11;
    // 0x803F3324: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_11:
    // 0x803F3328: beq         $v0, $zero, L_803F3418
    if (ctx->r2 == 0) {
        // 0x803F332C: nop
    
            goto L_803F3418;
    }
    // 0x803F332C: nop

    // 0x803F3330: b           L_803F34C4
    // 0x803F3334: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_803F34C4;
    // 0x803F3334: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x803F3338: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x803F333C: jal         0x803F1990
    // 0x803F3340: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    ovl_803F0000_menu_func_803F1990(rdram, ctx);
        goto after_12;
    // 0x803F3340: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_12:
    // 0x803F3344: beq         $v0, $zero, L_803F3394
    if (ctx->r2 == 0) {
        // 0x803F3348: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_803F3394;
    }
    // 0x803F3348: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x803F334C: lui         $a1, 0x803F
    ctx->r5 = S32(0X803F << 16);
    // 0x803F3350: addiu       $a1, $a1, 0x749C
    ctx->r5 = ADD32(ctx->r5, 0X749C);
    // 0x803F3354: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    // 0x803F3358: jal         0x803F2748
    // 0x803F335C: addiu       $a3, $zero, 0x12
    ctx->r7 = ADD32(0, 0X12);
    ovl_803F0000_menu_func_803F2748(rdram, ctx);
        goto after_13;
    // 0x803F335C: addiu       $a3, $zero, 0x12
    ctx->r7 = ADD32(0, 0X12);
    after_13:
    // 0x803F3360: beq         $v0, $zero, L_803F3370
    if (ctx->r2 == 0) {
        // 0x803F3364: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_803F3370;
    }
    // 0x803F3364: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x803F3368: b           L_803F34C4
    // 0x803F336C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_803F34C4;
    // 0x803F336C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_803F3370:
    // 0x803F3370: lui         $a1, 0x803F
    ctx->r5 = S32(0X803F << 16);
    // 0x803F3374: addiu       $a1, $a1, 0x74A4
    ctx->r5 = ADD32(ctx->r5, 0X74A4);
    // 0x803F3378: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x803F337C: jal         0x803F2748
    // 0x803F3380: addiu       $a3, $zero, 0x12
    ctx->r7 = ADD32(0, 0X12);
    ovl_803F0000_menu_func_803F2748(rdram, ctx);
        goto after_14;
    // 0x803F3380: addiu       $a3, $zero, 0x12
    ctx->r7 = ADD32(0, 0X12);
    after_14:
    // 0x803F3384: beq         $v0, $zero, L_803F3394
    if (ctx->r2 == 0) {
        // 0x803F3388: nop
    
            goto L_803F3394;
    }
    // 0x803F3388: nop

    // 0x803F338C: b           L_803F34C4
    // 0x803F3390: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_803F34C4;
    // 0x803F3390: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_803F3394:
    // 0x803F3394: lui         $t8, 0x8028
    ctx->r24 = S32(0X8028 << 16);
    // 0x803F3398: lh          $t8, -0x1B60($t8)
    ctx->r24 = MEM_H(ctx->r24, -0X1B60);
    // 0x803F339C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x803F33A0: andi        $t9, $t8, 0x1
    ctx->r25 = ctx->r24 & 0X1;
    // 0x803F33A4: beq         $t9, $zero, L_803F33CC
    if (ctx->r25 == 0) {
        // 0x803F33A8: lui         $a1, 0x803F
        ctx->r5 = S32(0X803F << 16);
            goto L_803F33CC;
    }
    // 0x803F33A8: lui         $a1, 0x803F
    ctx->r5 = S32(0X803F << 16);
    // 0x803F33AC: addiu       $a1, $a1, 0x74A8
    ctx->r5 = ADD32(ctx->r5, 0X74A8);
    // 0x803F33B0: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x803F33B4: jal         0x803F2748
    // 0x803F33B8: addiu       $a3, $zero, 0x12
    ctx->r7 = ADD32(0, 0X12);
    ovl_803F0000_menu_func_803F2748(rdram, ctx);
        goto after_15;
    // 0x803F33B8: addiu       $a3, $zero, 0x12
    ctx->r7 = ADD32(0, 0X12);
    after_15:
    // 0x803F33BC: beq         $v0, $zero, L_803F33CC
    if (ctx->r2 == 0) {
        // 0x803F33C0: nop
    
            goto L_803F33CC;
    }
    // 0x803F33C0: nop

    // 0x803F33C4: b           L_803F34C4
    // 0x803F33C8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_803F34C4;
    // 0x803F33C8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_803F33CC:
    // 0x803F33CC: lui         $a1, 0x803F
    ctx->r5 = S32(0X803F << 16);
    // 0x803F33D0: addiu       $a1, $a1, 0x7490
    ctx->r5 = ADD32(ctx->r5, 0X7490);
    // 0x803F33D4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x803F33D8: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    // 0x803F33DC: jal         0x803F2748
    // 0x803F33E0: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    ovl_803F0000_menu_func_803F2748(rdram, ctx);
        goto after_16;
    // 0x803F33E0: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_16:
    // 0x803F33E4: beq         $v0, $zero, L_803F33F4
    if (ctx->r2 == 0) {
        // 0x803F33E8: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_803F33F4;
    }
    // 0x803F33E8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x803F33EC: b           L_803F34C4
    // 0x803F33F0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_803F34C4;
    // 0x803F33F0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_803F33F4:
    // 0x803F33F4: lui         $a1, 0x803F
    ctx->r5 = S32(0X803F << 16);
    // 0x803F33F8: addiu       $a1, $a1, 0x7498
    ctx->r5 = ADD32(ctx->r5, 0X7498);
    // 0x803F33FC: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x803F3400: jal         0x803F2748
    // 0x803F3404: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    ovl_803F0000_menu_func_803F2748(rdram, ctx);
        goto after_17;
    // 0x803F3404: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_17:
    // 0x803F3408: beq         $v0, $zero, L_803F3418
    if (ctx->r2 == 0) {
        // 0x803F340C: nop
    
            goto L_803F3418;
    }
    // 0x803F340C: nop

    // 0x803F3410: b           L_803F34C4
    // 0x803F3414: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_803F34C4;
    // 0x803F3414: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_803F3418:
    // 0x803F3418: lw          $t1, 0xC8($s0)
    ctx->r9 = MEM_W(ctx->r16, 0XC8);
    // 0x803F341C: lui         $a1, 0x803F
    ctx->r5 = S32(0X803F << 16);
    // 0x803F3420: lh          $t2, 0x8B0($t1)
    ctx->r10 = MEM_H(ctx->r9, 0X8B0);
    // 0x803F3424: addiu       $a1, $a1, 0x74C0
    ctx->r5 = ADD32(ctx->r5, 0X74C0);
    // 0x803F3428: slti        $at, $t2, 0xC9
    ctx->r1 = SIGNED(ctx->r10) < 0XC9 ? 1 : 0;
    // 0x803F342C: bne         $at, $zero, L_803F3474
    if (ctx->r1 != 0) {
        // 0x803F3430: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_803F3474;
    }
    // 0x803F3430: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x803F3434: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x803F3438: jal         0x803F2748
    // 0x803F343C: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    ovl_803F0000_menu_func_803F2748(rdram, ctx);
        goto after_18;
    // 0x803F343C: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_18:
    // 0x803F3440: beq         $v0, $zero, L_803F3450
    if (ctx->r2 == 0) {
        // 0x803F3444: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_803F3450;
    }
    // 0x803F3444: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x803F3448: b           L_803F34C4
    // 0x803F344C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_803F34C4;
    // 0x803F344C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_803F3450:
    // 0x803F3450: lui         $a1, 0x803F
    ctx->r5 = S32(0X803F << 16);
    // 0x803F3454: addiu       $a1, $a1, 0x74C4
    ctx->r5 = ADD32(ctx->r5, 0X74C4);
    // 0x803F3458: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x803F345C: jal         0x803F2748
    // 0x803F3460: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    ovl_803F0000_menu_func_803F2748(rdram, ctx);
        goto after_19;
    // 0x803F3460: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_19:
    // 0x803F3464: beq         $v0, $zero, L_803F3474
    if (ctx->r2 == 0) {
        // 0x803F3468: nop
    
            goto L_803F3474;
    }
    // 0x803F3468: nop

    // 0x803F346C: b           L_803F34C4
    // 0x803F3470: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_803F34C4;
    // 0x803F3470: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_803F3474:
    // 0x803F3474: lui         $a1, 0x803F
    ctx->r5 = S32(0X803F << 16);
    // 0x803F3478: addiu       $a1, $a1, 0x74B8
    ctx->r5 = ADD32(ctx->r5, 0X74B8);
    // 0x803F347C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x803F3480: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x803F3484: jal         0x803F2748
    // 0x803F3488: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    ovl_803F0000_menu_func_803F2748(rdram, ctx);
        goto after_20;
    // 0x803F3488: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_20:
    // 0x803F348C: beq         $v0, $zero, L_803F349C
    if (ctx->r2 == 0) {
        // 0x803F3490: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_803F349C;
    }
    // 0x803F3490: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x803F3494: b           L_803F34C4
    // 0x803F3498: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_803F34C4;
    // 0x803F3498: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_803F349C:
    // 0x803F349C: lui         $a1, 0x803F
    ctx->r5 = S32(0X803F << 16);
    // 0x803F34A0: addiu       $a1, $a1, 0x74BC
    ctx->r5 = ADD32(ctx->r5, 0X74BC);
    // 0x803F34A4: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x803F34A8: jal         0x803F2748
    // 0x803F34AC: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    ovl_803F0000_menu_func_803F2748(rdram, ctx);
        goto after_21;
    // 0x803F34AC: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_21:
    // 0x803F34B0: beq         $v0, $zero, L_803F34C4
    if (ctx->r2 == 0) {
        // 0x803F34B4: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_803F34C4;
    }
    // 0x803F34B4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x803F34B8: b           L_803F34C4
    // 0x803F34BC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_803F34C4;
    // 0x803F34BC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x803F34C0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_803F34C4:
    // 0x803F34C4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x803F34C8: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x803F34CC: jr          $ra
    // 0x803F34D0: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x803F34D0: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void ovl_803F0000_menu_func_803F31D0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803F31D0: beq         $v0, $zero, L_803F31E0
    if (ctx->r2 == 0) {
        // 0x803F31D4: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_803F31E0;
    }
    // 0x803F31D4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x803F31D8: b           L_803F34C4
    // 0x803F31DC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_803F34C4;
    // 0x803F31DC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_803F31E0:
    // 0x803F31E0: lui         $a1, 0x803F
    ctx->r5 = S32(0X803F << 16);
    // 0x803F31E4: addiu       $a1, $a1, 0x7474
    ctx->r5 = ADD32(ctx->r5, 0X7474);
    // 0x803F31E8: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x803F31EC: jal         0x803F2748
    // 0x803F31F0: addiu       $a3, $zero, 0x12
    ctx->r7 = ADD32(0, 0X12);
    ovl_803F0000_menu_func_803F2748(rdram, ctx);
        goto after_0;
    // 0x803F31F0: addiu       $a3, $zero, 0x12
    ctx->r7 = ADD32(0, 0X12);
    after_0:
    // 0x803F31F4: beq         $v0, $zero, L_803F32A0
    if (ctx->r2 == 0) {
        // 0x803F31F8: nop
    
            goto L_803F32A0;
    }
    // 0x803F31F8: nop

    // 0x803F31FC: b           L_803F34C4
    // 0x803F3200: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_803F34C4;
    // 0x803F3200: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x803F3204: blez        $v0, L_803F327C
    if (SIGNED(ctx->r2) <= 0) {
        // 0x803F3208: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_803F327C;
    }
    // 0x803F3208: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x803F320C: lui         $a1, 0x803F
    ctx->r5 = S32(0X803F << 16);
    // 0x803F3210: addiu       $a1, $a1, 0x7484
    ctx->r5 = ADD32(ctx->r5, 0X7484);
    // 0x803F3214: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x803F3218: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    // 0x803F321C: jal         0x803F2748
    // 0x803F3220: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    ovl_803F0000_menu_func_803F2748(rdram, ctx);
        goto after_1;
    // 0x803F3220: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_1:
    // 0x803F3224: beq         $v0, $zero, L_803F3234
    if (ctx->r2 == 0) {
        // 0x803F3228: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_803F3234;
    }
    // 0x803F3228: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x803F322C: b           L_803F34C4
    // 0x803F3230: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_803F34C4;
    // 0x803F3230: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_803F3234:
    // 0x803F3234: lui         $a1, 0x803F
    ctx->r5 = S32(0X803F << 16);
    // 0x803F3238: addiu       $a1, $a1, 0x746C
    ctx->r5 = ADD32(ctx->r5, 0X746C);
    // 0x803F323C: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    // 0x803F3240: jal         0x803F2748
    // 0x803F3244: addiu       $a3, $zero, 0x12
    ctx->r7 = ADD32(0, 0X12);
    ovl_803F0000_menu_func_803F2748(rdram, ctx);
        goto after_2;
    // 0x803F3244: addiu       $a3, $zero, 0x12
    ctx->r7 = ADD32(0, 0X12);
    after_2:
    // 0x803F3248: beq         $v0, $zero, L_803F3258
    if (ctx->r2 == 0) {
        // 0x803F324C: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_803F3258;
    }
    // 0x803F324C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x803F3250: b           L_803F34C4
    // 0x803F3254: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_803F34C4;
    // 0x803F3254: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_803F3258:
    // 0x803F3258: lui         $a1, 0x803F
    ctx->r5 = S32(0X803F << 16);
    // 0x803F325C: addiu       $a1, $a1, 0x7460
    ctx->r5 = ADD32(ctx->r5, 0X7460);
    // 0x803F3260: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x803F3264: jal         0x803F2748
    // 0x803F3268: addiu       $a3, $zero, 0x12
    ctx->r7 = ADD32(0, 0X12);
    ovl_803F0000_menu_func_803F2748(rdram, ctx);
        goto after_3;
    // 0x803F3268: addiu       $a3, $zero, 0x12
    ctx->r7 = ADD32(0, 0X12);
    after_3:
    // 0x803F326C: beq         $v0, $zero, L_803F32A0
    if (ctx->r2 == 0) {
        // 0x803F3270: nop
    
            goto L_803F32A0;
    }
    // 0x803F3270: nop

    // 0x803F3274: b           L_803F34C4
    // 0x803F3278: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_803F34C4;
    // 0x803F3278: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_803F327C:
    // 0x803F327C: lui         $a1, 0x803F
    ctx->r5 = S32(0X803F << 16);
    // 0x803F3280: addiu       $a1, $a1, 0x748C
    ctx->r5 = ADD32(ctx->r5, 0X748C);
    // 0x803F3284: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x803F3288: jal         0x803F2748
    // 0x803F328C: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    ovl_803F0000_menu_func_803F2748(rdram, ctx);
        goto after_4;
    // 0x803F328C: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_4:
    // 0x803F3290: beq         $v0, $zero, L_803F32A0
    if (ctx->r2 == 0) {
        // 0x803F3294: nop
    
            goto L_803F32A0;
    }
    // 0x803F3294: nop

    // 0x803F3298: b           L_803F34C4
    // 0x803F329C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_803F34C4;
    // 0x803F329C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_803F32A0:
    // 0x803F32A0: lui         $a1, 0x803F
    ctx->r5 = S32(0X803F << 16);
    // 0x803F32A4: addiu       $a1, $a1, 0x7464
    ctx->r5 = ADD32(ctx->r5, 0X7464);
    // 0x803F32A8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x803F32AC: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    // 0x803F32B0: jal         0x803F2748
    // 0x803F32B4: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    ovl_803F0000_menu_func_803F2748(rdram, ctx);
        goto after_5;
    // 0x803F32B4: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_5:
    // 0x803F32B8: beq         $v0, $zero, L_803F32C8
    if (ctx->r2 == 0) {
        // 0x803F32BC: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_803F32C8;
    }
    // 0x803F32BC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x803F32C0: b           L_803F34C4
    // 0x803F32C4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_803F34C4;
    // 0x803F32C4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_803F32C8:
    // 0x803F32C8: lui         $a1, 0x803F
    ctx->r5 = S32(0X803F << 16);
    // 0x803F32CC: addiu       $a1, $a1, 0x7478
    ctx->r5 = ADD32(ctx->r5, 0X7478);
    // 0x803F32D0: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x803F32D4: jal         0x803F2748
    // 0x803F32D8: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    ovl_803F0000_menu_func_803F2748(rdram, ctx);
        goto after_6;
    // 0x803F32D8: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_6:
    // 0x803F32DC: beq         $v0, $zero, L_803F3418
    if (ctx->r2 == 0) {
        // 0x803F32E0: nop
    
            goto L_803F3418;
    }
    // 0x803F32E0: nop

    // 0x803F32E4: b           L_803F34C4
    // 0x803F32E8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_803F34C4;
    // 0x803F32E8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x803F32EC: lui         $a1, 0x803F
    ctx->r5 = S32(0X803F << 16);
    // 0x803F32F0: addiu       $a1, $a1, 0x74AC
    ctx->r5 = ADD32(ctx->r5, 0X74AC);
    // 0x803F32F4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x803F32F8: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    // 0x803F32FC: jal         0x803F2748
    // 0x803F3300: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    ovl_803F0000_menu_func_803F2748(rdram, ctx);
        goto after_7;
    // 0x803F3300: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_7:
    // 0x803F3304: beq         $v0, $zero, L_803F3314
    if (ctx->r2 == 0) {
        // 0x803F3308: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_803F3314;
    }
    // 0x803F3308: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x803F330C: b           L_803F34C4
    // 0x803F3310: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_803F34C4;
    // 0x803F3310: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_803F3314:
    // 0x803F3314: lui         $a1, 0x803F
    ctx->r5 = S32(0X803F << 16);
    // 0x803F3318: addiu       $a1, $a1, 0x7498
    ctx->r5 = ADD32(ctx->r5, 0X7498);
    // 0x803F331C: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x803F3320: jal         0x803F2748
    // 0x803F3324: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    ovl_803F0000_menu_func_803F2748(rdram, ctx);
        goto after_8;
    // 0x803F3324: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_8:
    // 0x803F3328: beq         $v0, $zero, L_803F3418
    if (ctx->r2 == 0) {
        // 0x803F332C: nop
    
            goto L_803F3418;
    }
    // 0x803F332C: nop

    // 0x803F3330: b           L_803F34C4
    // 0x803F3334: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_803F34C4;
    // 0x803F3334: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x803F3338: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x803F333C: jal         0x803F1990
    // 0x803F3340: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    ovl_803F0000_menu_func_803F1990(rdram, ctx);
        goto after_9;
    // 0x803F3340: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_9:
    // 0x803F3344: beq         $v0, $zero, L_803F3394
    if (ctx->r2 == 0) {
        // 0x803F3348: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_803F3394;
    }
    // 0x803F3348: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x803F334C: lui         $a1, 0x803F
    ctx->r5 = S32(0X803F << 16);
    // 0x803F3350: addiu       $a1, $a1, 0x749C
    ctx->r5 = ADD32(ctx->r5, 0X749C);
    // 0x803F3354: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    // 0x803F3358: jal         0x803F2748
    // 0x803F335C: addiu       $a3, $zero, 0x12
    ctx->r7 = ADD32(0, 0X12);
    ovl_803F0000_menu_func_803F2748(rdram, ctx);
        goto after_10;
    // 0x803F335C: addiu       $a3, $zero, 0x12
    ctx->r7 = ADD32(0, 0X12);
    after_10:
    // 0x803F3360: beq         $v0, $zero, L_803F3370
    if (ctx->r2 == 0) {
        // 0x803F3364: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_803F3370;
    }
    // 0x803F3364: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x803F3368: b           L_803F34C4
    // 0x803F336C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_803F34C4;
    // 0x803F336C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_803F3370:
    // 0x803F3370: lui         $a1, 0x803F
    ctx->r5 = S32(0X803F << 16);
    // 0x803F3374: addiu       $a1, $a1, 0x74A4
    ctx->r5 = ADD32(ctx->r5, 0X74A4);
    // 0x803F3378: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x803F337C: jal         0x803F2748
    // 0x803F3380: addiu       $a3, $zero, 0x12
    ctx->r7 = ADD32(0, 0X12);
    ovl_803F0000_menu_func_803F2748(rdram, ctx);
        goto after_11;
    // 0x803F3380: addiu       $a3, $zero, 0x12
    ctx->r7 = ADD32(0, 0X12);
    after_11:
    // 0x803F3384: beq         $v0, $zero, L_803F3394
    if (ctx->r2 == 0) {
        // 0x803F3388: nop
    
            goto L_803F3394;
    }
    // 0x803F3388: nop

    // 0x803F338C: b           L_803F34C4
    // 0x803F3390: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_803F34C4;
    // 0x803F3390: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_803F3394:
    // 0x803F3394: lui         $t8, 0x8028
    ctx->r24 = S32(0X8028 << 16);
    // 0x803F3398: lh          $t8, -0x1B60($t8)
    ctx->r24 = MEM_H(ctx->r24, -0X1B60);
    // 0x803F339C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x803F33A0: andi        $t9, $t8, 0x1
    ctx->r25 = ctx->r24 & 0X1;
    // 0x803F33A4: beq         $t9, $zero, L_803F33CC
    if (ctx->r25 == 0) {
        // 0x803F33A8: lui         $a1, 0x803F
        ctx->r5 = S32(0X803F << 16);
            goto L_803F33CC;
    }
    // 0x803F33A8: lui         $a1, 0x803F
    ctx->r5 = S32(0X803F << 16);
    // 0x803F33AC: addiu       $a1, $a1, 0x74A8
    ctx->r5 = ADD32(ctx->r5, 0X74A8);
    // 0x803F33B0: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x803F33B4: jal         0x803F2748
    // 0x803F33B8: addiu       $a3, $zero, 0x12
    ctx->r7 = ADD32(0, 0X12);
    ovl_803F0000_menu_func_803F2748(rdram, ctx);
        goto after_12;
    // 0x803F33B8: addiu       $a3, $zero, 0x12
    ctx->r7 = ADD32(0, 0X12);
    after_12:
    // 0x803F33BC: beq         $v0, $zero, L_803F33CC
    if (ctx->r2 == 0) {
        // 0x803F33C0: nop
    
            goto L_803F33CC;
    }
    // 0x803F33C0: nop

    // 0x803F33C4: b           L_803F34C4
    // 0x803F33C8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_803F34C4;
    // 0x803F33C8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_803F33CC:
    // 0x803F33CC: lui         $a1, 0x803F
    ctx->r5 = S32(0X803F << 16);
    // 0x803F33D0: addiu       $a1, $a1, 0x7490
    ctx->r5 = ADD32(ctx->r5, 0X7490);
    // 0x803F33D4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x803F33D8: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    // 0x803F33DC: jal         0x803F2748
    // 0x803F33E0: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    ovl_803F0000_menu_func_803F2748(rdram, ctx);
        goto after_13;
    // 0x803F33E0: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_13:
    // 0x803F33E4: beq         $v0, $zero, L_803F33F4
    if (ctx->r2 == 0) {
        // 0x803F33E8: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_803F33F4;
    }
    // 0x803F33E8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x803F33EC: b           L_803F34C4
    // 0x803F33F0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_803F34C4;
    // 0x803F33F0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_803F33F4:
    // 0x803F33F4: lui         $a1, 0x803F
    ctx->r5 = S32(0X803F << 16);
    // 0x803F33F8: addiu       $a1, $a1, 0x7498
    ctx->r5 = ADD32(ctx->r5, 0X7498);
    // 0x803F33FC: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x803F3400: jal         0x803F2748
    // 0x803F3404: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    ovl_803F0000_menu_func_803F2748(rdram, ctx);
        goto after_14;
    // 0x803F3404: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_14:
    // 0x803F3408: beq         $v0, $zero, L_803F3418
    if (ctx->r2 == 0) {
        // 0x803F340C: nop
    
            goto L_803F3418;
    }
    // 0x803F340C: nop

    // 0x803F3410: b           L_803F34C4
    // 0x803F3414: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_803F34C4;
    // 0x803F3414: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_803F3418:
    // 0x803F3418: lw          $t1, 0xC8($s0)
    ctx->r9 = MEM_W(ctx->r16, 0XC8);
    // 0x803F341C: lui         $a1, 0x803F
    ctx->r5 = S32(0X803F << 16);
    // 0x803F3420: lh          $t2, 0x8B0($t1)
    ctx->r10 = MEM_H(ctx->r9, 0X8B0);
    // 0x803F3424: addiu       $a1, $a1, 0x74C0
    ctx->r5 = ADD32(ctx->r5, 0X74C0);
    // 0x803F3428: slti        $at, $t2, 0xC9
    ctx->r1 = SIGNED(ctx->r10) < 0XC9 ? 1 : 0;
    // 0x803F342C: bne         $at, $zero, L_803F3474
    if (ctx->r1 != 0) {
        // 0x803F3430: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_803F3474;
    }
    // 0x803F3430: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x803F3434: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x803F3438: jal         0x803F2748
    // 0x803F343C: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    ovl_803F0000_menu_func_803F2748(rdram, ctx);
        goto after_15;
    // 0x803F343C: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_15:
    // 0x803F3440: beq         $v0, $zero, L_803F3450
    if (ctx->r2 == 0) {
        // 0x803F3444: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_803F3450;
    }
    // 0x803F3444: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x803F3448: b           L_803F34C4
    // 0x803F344C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_803F34C4;
    // 0x803F344C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_803F3450:
    // 0x803F3450: lui         $a1, 0x803F
    ctx->r5 = S32(0X803F << 16);
    // 0x803F3454: addiu       $a1, $a1, 0x74C4
    ctx->r5 = ADD32(ctx->r5, 0X74C4);
    // 0x803F3458: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x803F345C: jal         0x803F2748
    // 0x803F3460: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    ovl_803F0000_menu_func_803F2748(rdram, ctx);
        goto after_16;
    // 0x803F3460: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_16:
    // 0x803F3464: beq         $v0, $zero, L_803F3474
    if (ctx->r2 == 0) {
        // 0x803F3468: nop
    
            goto L_803F3474;
    }
    // 0x803F3468: nop

    // 0x803F346C: b           L_803F34C4
    // 0x803F3470: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_803F34C4;
    // 0x803F3470: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_803F3474:
    // 0x803F3474: lui         $a1, 0x803F
    ctx->r5 = S32(0X803F << 16);
    // 0x803F3478: addiu       $a1, $a1, 0x74B8
    ctx->r5 = ADD32(ctx->r5, 0X74B8);
    // 0x803F347C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x803F3480: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x803F3484: jal         0x803F2748
    // 0x803F3488: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    ovl_803F0000_menu_func_803F2748(rdram, ctx);
        goto after_17;
    // 0x803F3488: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_17:
    // 0x803F348C: beq         $v0, $zero, L_803F349C
    if (ctx->r2 == 0) {
        // 0x803F3490: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_803F349C;
    }
    // 0x803F3490: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x803F3494: b           L_803F34C4
    // 0x803F3498: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_803F34C4;
    // 0x803F3498: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_803F349C:
    // 0x803F349C: lui         $a1, 0x803F
    ctx->r5 = S32(0X803F << 16);
    // 0x803F34A0: addiu       $a1, $a1, 0x74BC
    ctx->r5 = ADD32(ctx->r5, 0X74BC);
    // 0x803F34A4: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x803F34A8: jal         0x803F2748
    // 0x803F34AC: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    ovl_803F0000_menu_func_803F2748(rdram, ctx);
        goto after_18;
    // 0x803F34AC: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_18:
    // 0x803F34B0: beq         $v0, $zero, L_803F34C4
    if (ctx->r2 == 0) {
        // 0x803F34B4: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_803F34C4;
    }
    // 0x803F34B4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x803F34B8: b           L_803F34C4
    // 0x803F34BC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_803F34C4;
    // 0x803F34BC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x803F34C0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_803F34C4:
    // 0x803F34C4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x803F34C8: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x803F34CC: jr          $ra
    // 0x803F34D0: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x803F34D0: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void ovl_803F0000_menu_func_803F3290(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803F3290: beq         $v0, $zero, L_803F32A0
    if (ctx->r2 == 0) {
        // 0x803F3294: nop
    
            goto L_803F32A0;
    }
    // 0x803F3294: nop

    // 0x803F3298: b           L_803F34C4
    // 0x803F329C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_803F34C4;
    // 0x803F329C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_803F32A0:
    // 0x803F32A0: lui         $a1, 0x803F
    ctx->r5 = S32(0X803F << 16);
    // 0x803F32A4: addiu       $a1, $a1, 0x7464
    ctx->r5 = ADD32(ctx->r5, 0X7464);
    // 0x803F32A8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x803F32AC: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    // 0x803F32B0: jal         0x803F2748
    // 0x803F32B4: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    ovl_803F0000_menu_func_803F2748(rdram, ctx);
        goto after_0;
    // 0x803F32B4: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_0:
    // 0x803F32B8: beq         $v0, $zero, L_803F32C8
    if (ctx->r2 == 0) {
        // 0x803F32BC: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_803F32C8;
    }
    // 0x803F32BC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x803F32C0: b           L_803F34C4
    // 0x803F32C4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_803F34C4;
    // 0x803F32C4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_803F32C8:
    // 0x803F32C8: lui         $a1, 0x803F
    ctx->r5 = S32(0X803F << 16);
    // 0x803F32CC: addiu       $a1, $a1, 0x7478
    ctx->r5 = ADD32(ctx->r5, 0X7478);
    // 0x803F32D0: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x803F32D4: jal         0x803F2748
    // 0x803F32D8: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    ovl_803F0000_menu_func_803F2748(rdram, ctx);
        goto after_1;
    // 0x803F32D8: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_1:
    // 0x803F32DC: beq         $v0, $zero, L_803F3418
    if (ctx->r2 == 0) {
        // 0x803F32E0: nop
    
            goto L_803F3418;
    }
    // 0x803F32E0: nop

    // 0x803F32E4: b           L_803F34C4
    // 0x803F32E8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_803F34C4;
    // 0x803F32E8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x803F32EC: lui         $a1, 0x803F
    ctx->r5 = S32(0X803F << 16);
    // 0x803F32F0: addiu       $a1, $a1, 0x74AC
    ctx->r5 = ADD32(ctx->r5, 0X74AC);
    // 0x803F32F4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x803F32F8: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    // 0x803F32FC: jal         0x803F2748
    // 0x803F3300: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    ovl_803F0000_menu_func_803F2748(rdram, ctx);
        goto after_2;
    // 0x803F3300: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_2:
    // 0x803F3304: beq         $v0, $zero, L_803F3314
    if (ctx->r2 == 0) {
        // 0x803F3308: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_803F3314;
    }
    // 0x803F3308: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x803F330C: b           L_803F34C4
    // 0x803F3310: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_803F34C4;
    // 0x803F3310: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_803F3314:
    // 0x803F3314: lui         $a1, 0x803F
    ctx->r5 = S32(0X803F << 16);
    // 0x803F3318: addiu       $a1, $a1, 0x7498
    ctx->r5 = ADD32(ctx->r5, 0X7498);
    // 0x803F331C: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x803F3320: jal         0x803F2748
    // 0x803F3324: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    ovl_803F0000_menu_func_803F2748(rdram, ctx);
        goto after_3;
    // 0x803F3324: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_3:
    // 0x803F3328: beq         $v0, $zero, L_803F3418
    if (ctx->r2 == 0) {
        // 0x803F332C: nop
    
            goto L_803F3418;
    }
    // 0x803F332C: nop

    // 0x803F3330: b           L_803F34C4
    // 0x803F3334: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_803F34C4;
    // 0x803F3334: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x803F3338: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x803F333C: jal         0x803F1990
    // 0x803F3340: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    ovl_803F0000_menu_func_803F1990(rdram, ctx);
        goto after_4;
    // 0x803F3340: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_4:
    // 0x803F3344: beq         $v0, $zero, L_803F3394
    if (ctx->r2 == 0) {
        // 0x803F3348: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_803F3394;
    }
    // 0x803F3348: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x803F334C: lui         $a1, 0x803F
    ctx->r5 = S32(0X803F << 16);
    // 0x803F3350: addiu       $a1, $a1, 0x749C
    ctx->r5 = ADD32(ctx->r5, 0X749C);
    // 0x803F3354: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    // 0x803F3358: jal         0x803F2748
    // 0x803F335C: addiu       $a3, $zero, 0x12
    ctx->r7 = ADD32(0, 0X12);
    ovl_803F0000_menu_func_803F2748(rdram, ctx);
        goto after_5;
    // 0x803F335C: addiu       $a3, $zero, 0x12
    ctx->r7 = ADD32(0, 0X12);
    after_5:
    // 0x803F3360: beq         $v0, $zero, L_803F3370
    if (ctx->r2 == 0) {
        // 0x803F3364: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_803F3370;
    }
    // 0x803F3364: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x803F3368: b           L_803F34C4
    // 0x803F336C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_803F34C4;
    // 0x803F336C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_803F3370:
    // 0x803F3370: lui         $a1, 0x803F
    ctx->r5 = S32(0X803F << 16);
    // 0x803F3374: addiu       $a1, $a1, 0x74A4
    ctx->r5 = ADD32(ctx->r5, 0X74A4);
    // 0x803F3378: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x803F337C: jal         0x803F2748
    // 0x803F3380: addiu       $a3, $zero, 0x12
    ctx->r7 = ADD32(0, 0X12);
    ovl_803F0000_menu_func_803F2748(rdram, ctx);
        goto after_6;
    // 0x803F3380: addiu       $a3, $zero, 0x12
    ctx->r7 = ADD32(0, 0X12);
    after_6:
    // 0x803F3384: beq         $v0, $zero, L_803F3394
    if (ctx->r2 == 0) {
        // 0x803F3388: nop
    
            goto L_803F3394;
    }
    // 0x803F3388: nop

    // 0x803F338C: b           L_803F34C4
    // 0x803F3390: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_803F34C4;
    // 0x803F3390: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_803F3394:
    // 0x803F3394: lui         $t8, 0x8028
    ctx->r24 = S32(0X8028 << 16);
    // 0x803F3398: lh          $t8, -0x1B60($t8)
    ctx->r24 = MEM_H(ctx->r24, -0X1B60);
    // 0x803F339C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x803F33A0: andi        $t9, $t8, 0x1
    ctx->r25 = ctx->r24 & 0X1;
    // 0x803F33A4: beq         $t9, $zero, L_803F33CC
    if (ctx->r25 == 0) {
        // 0x803F33A8: lui         $a1, 0x803F
        ctx->r5 = S32(0X803F << 16);
            goto L_803F33CC;
    }
    // 0x803F33A8: lui         $a1, 0x803F
    ctx->r5 = S32(0X803F << 16);
    // 0x803F33AC: addiu       $a1, $a1, 0x74A8
    ctx->r5 = ADD32(ctx->r5, 0X74A8);
    // 0x803F33B0: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x803F33B4: jal         0x803F2748
    // 0x803F33B8: addiu       $a3, $zero, 0x12
    ctx->r7 = ADD32(0, 0X12);
    ovl_803F0000_menu_func_803F2748(rdram, ctx);
        goto after_7;
    // 0x803F33B8: addiu       $a3, $zero, 0x12
    ctx->r7 = ADD32(0, 0X12);
    after_7:
    // 0x803F33BC: beq         $v0, $zero, L_803F33CC
    if (ctx->r2 == 0) {
        // 0x803F33C0: nop
    
            goto L_803F33CC;
    }
    // 0x803F33C0: nop

    // 0x803F33C4: b           L_803F34C4
    // 0x803F33C8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_803F34C4;
    // 0x803F33C8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_803F33CC:
    // 0x803F33CC: lui         $a1, 0x803F
    ctx->r5 = S32(0X803F << 16);
    // 0x803F33D0: addiu       $a1, $a1, 0x7490
    ctx->r5 = ADD32(ctx->r5, 0X7490);
    // 0x803F33D4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x803F33D8: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    // 0x803F33DC: jal         0x803F2748
    // 0x803F33E0: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    ovl_803F0000_menu_func_803F2748(rdram, ctx);
        goto after_8;
    // 0x803F33E0: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_8:
    // 0x803F33E4: beq         $v0, $zero, L_803F33F4
    if (ctx->r2 == 0) {
        // 0x803F33E8: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_803F33F4;
    }
    // 0x803F33E8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x803F33EC: b           L_803F34C4
    // 0x803F33F0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_803F34C4;
    // 0x803F33F0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_803F33F4:
    // 0x803F33F4: lui         $a1, 0x803F
    ctx->r5 = S32(0X803F << 16);
    // 0x803F33F8: addiu       $a1, $a1, 0x7498
    ctx->r5 = ADD32(ctx->r5, 0X7498);
    // 0x803F33FC: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x803F3400: jal         0x803F2748
    // 0x803F3404: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    ovl_803F0000_menu_func_803F2748(rdram, ctx);
        goto after_9;
    // 0x803F3404: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_9:
    // 0x803F3408: beq         $v0, $zero, L_803F3418
    if (ctx->r2 == 0) {
        // 0x803F340C: nop
    
            goto L_803F3418;
    }
    // 0x803F340C: nop

    // 0x803F3410: b           L_803F34C4
    // 0x803F3414: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_803F34C4;
    // 0x803F3414: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_803F3418:
    // 0x803F3418: lw          $t1, 0xC8($s0)
    ctx->r9 = MEM_W(ctx->r16, 0XC8);
    // 0x803F341C: lui         $a1, 0x803F
    ctx->r5 = S32(0X803F << 16);
    // 0x803F3420: lh          $t2, 0x8B0($t1)
    ctx->r10 = MEM_H(ctx->r9, 0X8B0);
    // 0x803F3424: addiu       $a1, $a1, 0x74C0
    ctx->r5 = ADD32(ctx->r5, 0X74C0);
    // 0x803F3428: slti        $at, $t2, 0xC9
    ctx->r1 = SIGNED(ctx->r10) < 0XC9 ? 1 : 0;
    // 0x803F342C: bne         $at, $zero, L_803F3474
    if (ctx->r1 != 0) {
        // 0x803F3430: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_803F3474;
    }
    // 0x803F3430: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x803F3434: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x803F3438: jal         0x803F2748
    // 0x803F343C: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    ovl_803F0000_menu_func_803F2748(rdram, ctx);
        goto after_10;
    // 0x803F343C: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_10:
    // 0x803F3440: beq         $v0, $zero, L_803F3450
    if (ctx->r2 == 0) {
        // 0x803F3444: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_803F3450;
    }
    // 0x803F3444: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x803F3448: b           L_803F34C4
    // 0x803F344C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_803F34C4;
    // 0x803F344C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_803F3450:
    // 0x803F3450: lui         $a1, 0x803F
    ctx->r5 = S32(0X803F << 16);
    // 0x803F3454: addiu       $a1, $a1, 0x74C4
    ctx->r5 = ADD32(ctx->r5, 0X74C4);
    // 0x803F3458: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x803F345C: jal         0x803F2748
    // 0x803F3460: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    ovl_803F0000_menu_func_803F2748(rdram, ctx);
        goto after_11;
    // 0x803F3460: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_11:
    // 0x803F3464: beq         $v0, $zero, L_803F3474
    if (ctx->r2 == 0) {
        // 0x803F3468: nop
    
            goto L_803F3474;
    }
    // 0x803F3468: nop

    // 0x803F346C: b           L_803F34C4
    // 0x803F3470: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_803F34C4;
    // 0x803F3470: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_803F3474:
    // 0x803F3474: lui         $a1, 0x803F
    ctx->r5 = S32(0X803F << 16);
    // 0x803F3478: addiu       $a1, $a1, 0x74B8
    ctx->r5 = ADD32(ctx->r5, 0X74B8);
    // 0x803F347C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x803F3480: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x803F3484: jal         0x803F2748
    // 0x803F3488: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    ovl_803F0000_menu_func_803F2748(rdram, ctx);
        goto after_12;
    // 0x803F3488: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_12:
    // 0x803F348C: beq         $v0, $zero, L_803F349C
    if (ctx->r2 == 0) {
        // 0x803F3490: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_803F349C;
    }
    // 0x803F3490: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x803F3494: b           L_803F34C4
    // 0x803F3498: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_803F34C4;
    // 0x803F3498: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_803F349C:
    // 0x803F349C: lui         $a1, 0x803F
    ctx->r5 = S32(0X803F << 16);
    // 0x803F34A0: addiu       $a1, $a1, 0x74BC
    ctx->r5 = ADD32(ctx->r5, 0X74BC);
    // 0x803F34A4: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x803F34A8: jal         0x803F2748
    // 0x803F34AC: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    ovl_803F0000_menu_func_803F2748(rdram, ctx);
        goto after_13;
    // 0x803F34AC: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_13:
    // 0x803F34B0: beq         $v0, $zero, L_803F34C4
    if (ctx->r2 == 0) {
        // 0x803F34B4: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_803F34C4;
    }
    // 0x803F34B4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x803F34B8: b           L_803F34C4
    // 0x803F34BC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_803F34C4;
    // 0x803F34BC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x803F34C0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_803F34C4:
    // 0x803F34C4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x803F34C8: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x803F34CC: jr          $ra
    // 0x803F34D0: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x803F34D0: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void ovl_803F0000_menu_func_803F3328(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803F3328: beq         $v0, $zero, L_803F3418
    if (ctx->r2 == 0) {
        // 0x803F332C: nop
    
            goto L_803F3418;
    }
    // 0x803F332C: nop

    // 0x803F3330: b           L_803F34C4
    // 0x803F3334: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_803F34C4;
    // 0x803F3334: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x803F3338: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x803F333C: jal         0x803F1990
    // 0x803F3340: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    ovl_803F0000_menu_func_803F1990(rdram, ctx);
        goto after_0;
    // 0x803F3340: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_0:
    // 0x803F3344: beq         $v0, $zero, L_803F3394
    if (ctx->r2 == 0) {
        // 0x803F3348: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_803F3394;
    }
    // 0x803F3348: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x803F334C: lui         $a1, 0x803F
    ctx->r5 = S32(0X803F << 16);
    // 0x803F3350: addiu       $a1, $a1, 0x749C
    ctx->r5 = ADD32(ctx->r5, 0X749C);
    // 0x803F3354: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    // 0x803F3358: jal         0x803F2748
    // 0x803F335C: addiu       $a3, $zero, 0x12
    ctx->r7 = ADD32(0, 0X12);
    ovl_803F0000_menu_func_803F2748(rdram, ctx);
        goto after_1;
    // 0x803F335C: addiu       $a3, $zero, 0x12
    ctx->r7 = ADD32(0, 0X12);
    after_1:
    // 0x803F3360: beq         $v0, $zero, L_803F3370
    if (ctx->r2 == 0) {
        // 0x803F3364: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_803F3370;
    }
    // 0x803F3364: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x803F3368: b           L_803F34C4
    // 0x803F336C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_803F34C4;
    // 0x803F336C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_803F3370:
    // 0x803F3370: lui         $a1, 0x803F
    ctx->r5 = S32(0X803F << 16);
    // 0x803F3374: addiu       $a1, $a1, 0x74A4
    ctx->r5 = ADD32(ctx->r5, 0X74A4);
    // 0x803F3378: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x803F337C: jal         0x803F2748
    // 0x803F3380: addiu       $a3, $zero, 0x12
    ctx->r7 = ADD32(0, 0X12);
    ovl_803F0000_menu_func_803F2748(rdram, ctx);
        goto after_2;
    // 0x803F3380: addiu       $a3, $zero, 0x12
    ctx->r7 = ADD32(0, 0X12);
    after_2:
    // 0x803F3384: beq         $v0, $zero, L_803F3394
    if (ctx->r2 == 0) {
        // 0x803F3388: nop
    
            goto L_803F3394;
    }
    // 0x803F3388: nop

    // 0x803F338C: b           L_803F34C4
    // 0x803F3390: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_803F34C4;
    // 0x803F3390: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_803F3394:
    // 0x803F3394: lui         $t8, 0x8028
    ctx->r24 = S32(0X8028 << 16);
    // 0x803F3398: lh          $t8, -0x1B60($t8)
    ctx->r24 = MEM_H(ctx->r24, -0X1B60);
    // 0x803F339C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x803F33A0: andi        $t9, $t8, 0x1
    ctx->r25 = ctx->r24 & 0X1;
    // 0x803F33A4: beq         $t9, $zero, L_803F33CC
    if (ctx->r25 == 0) {
        // 0x803F33A8: lui         $a1, 0x803F
        ctx->r5 = S32(0X803F << 16);
            goto L_803F33CC;
    }
    // 0x803F33A8: lui         $a1, 0x803F
    ctx->r5 = S32(0X803F << 16);
    // 0x803F33AC: addiu       $a1, $a1, 0x74A8
    ctx->r5 = ADD32(ctx->r5, 0X74A8);
    // 0x803F33B0: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x803F33B4: jal         0x803F2748
    // 0x803F33B8: addiu       $a3, $zero, 0x12
    ctx->r7 = ADD32(0, 0X12);
    ovl_803F0000_menu_func_803F2748(rdram, ctx);
        goto after_3;
    // 0x803F33B8: addiu       $a3, $zero, 0x12
    ctx->r7 = ADD32(0, 0X12);
    after_3:
    // 0x803F33BC: beq         $v0, $zero, L_803F33CC
    if (ctx->r2 == 0) {
        // 0x803F33C0: nop
    
            goto L_803F33CC;
    }
    // 0x803F33C0: nop

    // 0x803F33C4: b           L_803F34C4
    // 0x803F33C8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_803F34C4;
    // 0x803F33C8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_803F33CC:
    // 0x803F33CC: lui         $a1, 0x803F
    ctx->r5 = S32(0X803F << 16);
    // 0x803F33D0: addiu       $a1, $a1, 0x7490
    ctx->r5 = ADD32(ctx->r5, 0X7490);
    // 0x803F33D4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x803F33D8: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    // 0x803F33DC: jal         0x803F2748
    // 0x803F33E0: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    ovl_803F0000_menu_func_803F2748(rdram, ctx);
        goto after_4;
    // 0x803F33E0: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_4:
    // 0x803F33E4: beq         $v0, $zero, L_803F33F4
    if (ctx->r2 == 0) {
        // 0x803F33E8: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_803F33F4;
    }
    // 0x803F33E8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x803F33EC: b           L_803F34C4
    // 0x803F33F0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_803F34C4;
    // 0x803F33F0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_803F33F4:
    // 0x803F33F4: lui         $a1, 0x803F
    ctx->r5 = S32(0X803F << 16);
    // 0x803F33F8: addiu       $a1, $a1, 0x7498
    ctx->r5 = ADD32(ctx->r5, 0X7498);
    // 0x803F33FC: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x803F3400: jal         0x803F2748
    // 0x803F3404: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    ovl_803F0000_menu_func_803F2748(rdram, ctx);
        goto after_5;
    // 0x803F3404: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_5:
    // 0x803F3408: beq         $v0, $zero, L_803F3418
    if (ctx->r2 == 0) {
        // 0x803F340C: nop
    
            goto L_803F3418;
    }
    // 0x803F340C: nop

    // 0x803F3410: b           L_803F34C4
    // 0x803F3414: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_803F34C4;
    // 0x803F3414: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_803F3418:
    // 0x803F3418: lw          $t1, 0xC8($s0)
    ctx->r9 = MEM_W(ctx->r16, 0XC8);
    // 0x803F341C: lui         $a1, 0x803F
    ctx->r5 = S32(0X803F << 16);
    // 0x803F3420: lh          $t2, 0x8B0($t1)
    ctx->r10 = MEM_H(ctx->r9, 0X8B0);
    // 0x803F3424: addiu       $a1, $a1, 0x74C0
    ctx->r5 = ADD32(ctx->r5, 0X74C0);
    // 0x803F3428: slti        $at, $t2, 0xC9
    ctx->r1 = SIGNED(ctx->r10) < 0XC9 ? 1 : 0;
    // 0x803F342C: bne         $at, $zero, L_803F3474
    if (ctx->r1 != 0) {
        // 0x803F3430: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_803F3474;
    }
    // 0x803F3430: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x803F3434: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x803F3438: jal         0x803F2748
    // 0x803F343C: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    ovl_803F0000_menu_func_803F2748(rdram, ctx);
        goto after_6;
    // 0x803F343C: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_6:
    // 0x803F3440: beq         $v0, $zero, L_803F3450
    if (ctx->r2 == 0) {
        // 0x803F3444: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_803F3450;
    }
    // 0x803F3444: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x803F3448: b           L_803F34C4
    // 0x803F344C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_803F34C4;
    // 0x803F344C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_803F3450:
    // 0x803F3450: lui         $a1, 0x803F
    ctx->r5 = S32(0X803F << 16);
    // 0x803F3454: addiu       $a1, $a1, 0x74C4
    ctx->r5 = ADD32(ctx->r5, 0X74C4);
    // 0x803F3458: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x803F345C: jal         0x803F2748
    // 0x803F3460: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    ovl_803F0000_menu_func_803F2748(rdram, ctx);
        goto after_7;
    // 0x803F3460: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_7:
    // 0x803F3464: beq         $v0, $zero, L_803F3474
    if (ctx->r2 == 0) {
        // 0x803F3468: nop
    
            goto L_803F3474;
    }
    // 0x803F3468: nop

    // 0x803F346C: b           L_803F34C4
    // 0x803F3470: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_803F34C4;
    // 0x803F3470: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_803F3474:
    // 0x803F3474: lui         $a1, 0x803F
    ctx->r5 = S32(0X803F << 16);
    // 0x803F3478: addiu       $a1, $a1, 0x74B8
    ctx->r5 = ADD32(ctx->r5, 0X74B8);
    // 0x803F347C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x803F3480: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x803F3484: jal         0x803F2748
    // 0x803F3488: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    ovl_803F0000_menu_func_803F2748(rdram, ctx);
        goto after_8;
    // 0x803F3488: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_8:
    // 0x803F348C: beq         $v0, $zero, L_803F349C
    if (ctx->r2 == 0) {
        // 0x803F3490: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_803F349C;
    }
    // 0x803F3490: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x803F3494: b           L_803F34C4
    // 0x803F3498: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_803F34C4;
    // 0x803F3498: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_803F349C:
    // 0x803F349C: lui         $a1, 0x803F
    ctx->r5 = S32(0X803F << 16);
    // 0x803F34A0: addiu       $a1, $a1, 0x74BC
    ctx->r5 = ADD32(ctx->r5, 0X74BC);
    // 0x803F34A4: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x803F34A8: jal         0x803F2748
    // 0x803F34AC: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    ovl_803F0000_menu_func_803F2748(rdram, ctx);
        goto after_9;
    // 0x803F34AC: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_9:
    // 0x803F34B0: beq         $v0, $zero, L_803F34C4
    if (ctx->r2 == 0) {
        // 0x803F34B4: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_803F34C4;
    }
    // 0x803F34B4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x803F34B8: b           L_803F34C4
    // 0x803F34BC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_803F34C4;
    // 0x803F34BC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x803F34C0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_803F34C4:
    // 0x803F34C4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x803F34C8: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x803F34CC: jr          $ra
    // 0x803F34D0: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x803F34D0: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
