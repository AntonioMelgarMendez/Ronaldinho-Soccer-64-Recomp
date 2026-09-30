#include "iss64_recomp.h"
#include "funcs.h"

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
RECOMP_FUNC void ovl_8024B800_func_8027A7E4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
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
        goto after_0;
    // 0x8027A7F0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_0:
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
        goto after_1;
    // 0x8027A874: nop

    after_1:
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
        goto after_2;
    // 0x8027A978: sw          $t9, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r25;
    after_2:
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
        goto after_3;
    // 0x8027AA40: sw          $t1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r9;
    after_3:
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
        goto after_4;
    // 0x8027AA5C: swc1        $f6, 0x50($s0)
    MEM_W(0X50, ctx->r16) = ctx->f6.u32l;
    after_4:
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
        goto after_5;
    // 0x8027AA78: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_5:
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
        goto after_6;
    // 0x8027AACC: sw          $t6, 0x4($t7)
    MEM_W(0X4, ctx->r15) = ctx->r14;
    after_6:
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
        goto after_7;
    // 0x8027ABAC: addiu       $a0, $zero, 0x301
    ctx->r4 = ADD32(0, 0X301);
    after_7:
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
        goto after_8;
    // 0x8027ABCC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_8:
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
        goto after_9;
    // 0x8027ABE4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_9:
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
        goto after_10;
    // 0x8027ABF4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_10:
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
        goto after_11;
    // 0x8027AC10: addiu       $a0, $zero, 0x305
    ctx->r4 = ADD32(0, 0X305);
    after_11:
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
        goto after_12;
    // 0x8027AC30: nop

    after_12:
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
        goto after_13;
    // 0x8027AC40: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_13:
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
        goto after_14;
    // 0x8027AC5C: addiu       $a0, $zero, 0x328
    ctx->r4 = ADD32(0, 0X328);
    after_14:
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
        goto after_15;
    // 0x8027AC7C: nop

    after_15:
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
RECOMP_FUNC void ovl_8024B800_func_8027A85C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
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
    // 0x8027A870: jal         0x80053CA0
    // 0x8027A874: nop

    func_80053CA0(rdram, ctx);
        goto after_0;
    // 0x8027A874: nop

    after_0:
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
        goto after_1;
    // 0x8027A978: sw          $t9, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r25;
    after_1:
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
        goto after_2;
    // 0x8027AA40: sw          $t1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r9;
    after_2:
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
        goto after_3;
    // 0x8027AA5C: swc1        $f6, 0x50($s0)
    MEM_W(0X50, ctx->r16) = ctx->f6.u32l;
    after_3:
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
        goto after_4;
    // 0x8027AA78: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_4:
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
        goto after_5;
    // 0x8027AACC: sw          $t6, 0x4($t7)
    MEM_W(0X4, ctx->r15) = ctx->r14;
    after_5:
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
        goto after_6;
    // 0x8027ABAC: addiu       $a0, $zero, 0x301
    ctx->r4 = ADD32(0, 0X301);
    after_6:
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
        goto after_7;
    // 0x8027ABCC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_7:
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
        goto after_8;
    // 0x8027ABE4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_8:
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
        goto after_9;
    // 0x8027ABF4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_9:
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
        goto after_10;
    // 0x8027AC10: addiu       $a0, $zero, 0x305
    ctx->r4 = ADD32(0, 0X305);
    after_10:
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
        goto after_11;
    // 0x8027AC30: nop

    after_11:
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
        goto after_12;
    // 0x8027AC40: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_12:
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
        goto after_13;
    // 0x8027AC5C: addiu       $a0, $zero, 0x328
    ctx->r4 = ADD32(0, 0X328);
    after_13:
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
        goto after_14;
    // 0x8027AC7C: nop

    after_14:
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
RECOMP_FUNC void ovl_8024B800_func_8027A95C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
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
        goto after_0;
    // 0x8027A978: sw          $t9, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r25;
    after_0:
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
        goto after_1;
    // 0x8027AA40: sw          $t1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r9;
    after_1:
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
        goto after_2;
    // 0x8027AA5C: swc1        $f6, 0x50($s0)
    MEM_W(0X50, ctx->r16) = ctx->f6.u32l;
    after_2:
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
        goto after_3;
    // 0x8027AA78: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_3:
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
        goto after_4;
    // 0x8027AACC: sw          $t6, 0x4($t7)
    MEM_W(0X4, ctx->r15) = ctx->r14;
    after_4:
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
        goto after_5;
    // 0x8027ABAC: addiu       $a0, $zero, 0x301
    ctx->r4 = ADD32(0, 0X301);
    after_5:
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
        goto after_6;
    // 0x8027ABCC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_6:
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
        goto after_7;
    // 0x8027ABE4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_7:
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
        goto after_8;
    // 0x8027ABF4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_8:
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
        goto after_9;
    // 0x8027AC10: addiu       $a0, $zero, 0x305
    ctx->r4 = ADD32(0, 0X305);
    after_9:
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
        goto after_10;
    // 0x8027AC30: nop

    after_10:
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
        goto after_11;
    // 0x8027AC40: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_11:
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
        goto after_12;
    // 0x8027AC5C: addiu       $a0, $zero, 0x328
    ctx->r4 = ADD32(0, 0X328);
    after_12:
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
        goto after_13;
    // 0x8027AC7C: nop

    after_13:
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
RECOMP_FUNC void ovl_8024B800_func_8027AAEC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
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
        goto after_0;
    // 0x8027ABAC: addiu       $a0, $zero, 0x301
    ctx->r4 = ADD32(0, 0X301);
    after_0:
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
        goto after_1;
    // 0x8027ABCC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
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
        goto after_2;
    // 0x8027ABE4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_2:
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
        goto after_3;
    // 0x8027ABF4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_3:
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
        goto after_4;
    // 0x8027AC10: addiu       $a0, $zero, 0x305
    ctx->r4 = ADD32(0, 0X305);
    after_4:
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
        goto after_5;
    // 0x8027AC30: nop

    after_5:
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
        goto after_6;
    // 0x8027AC40: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_6:
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
        goto after_7;
    // 0x8027AC5C: addiu       $a0, $zero, 0x328
    ctx->r4 = ADD32(0, 0X328);
    after_7:
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
        goto after_8;
    // 0x8027AC7C: nop

    after_8:
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
RECOMP_FUNC void ovl_8024B800_func_8027AB18(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
L_8027AAEC:
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
    // 0x8027AB8C: bne         $a1, $a2, L_8027AAEC
    if (ctx->r5 != ctx->r6) {
            // 0x8027AB90: addiu       $a0, $a0, 0xF8
    ctx->r4 = ADD32(ctx->r4, 0XF8);
    ovl_8024B800_func_8027AAEC(rdram, ctx);
    return;
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
        goto after_0;
    // 0x8027ABAC: addiu       $a0, $zero, 0x301
    ctx->r4 = ADD32(0, 0X301);
    after_0:
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
        goto after_1;
    // 0x8027ABCC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
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
        goto after_2;
    // 0x8027ABE4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_2:
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
        goto after_3;
    // 0x8027ABF4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_3:
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
        goto after_4;
    // 0x8027AC10: addiu       $a0, $zero, 0x305
    ctx->r4 = ADD32(0, 0X305);
    after_4:
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
        goto after_5;
    // 0x8027AC30: nop

    after_5:
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
        goto after_6;
    // 0x8027AC40: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_6:
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
        goto after_7;
    // 0x8027AC5C: addiu       $a0, $zero, 0x328
    ctx->r4 = ADD32(0, 0X328);
    after_7:
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
        goto after_8;
    // 0x8027AC7C: nop

    after_8:
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
RECOMP_FUNC void ovl_80264800_func_80264800(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80264800: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80264804: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80264808: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x8026480C: jal         0x80036258
    // 0x80264810: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    func_80036258(rdram, ctx);
        goto after_0;
    // 0x80264810: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    after_0:
    // 0x80264814: lui         $a0, 0x803D
    ctx->r4 = S32(0X803D << 16);
    // 0x80264818: jal         0x80035FF0
    // 0x8026481C: addiu       $a0, $a0, 0x1C8C
    ctx->r4 = ADD32(ctx->r4, 0X1C8C);
    func_80035FF0(rdram, ctx);
        goto after_1;
    // 0x8026481C: addiu       $a0, $a0, 0x1C8C
    ctx->r4 = ADD32(ctx->r4, 0X1C8C);
    after_1:
    // 0x80264820: addiu       $a0, $zero, 0xF00
    ctx->r4 = ADD32(0, 0XF00);
    // 0x80264824: addiu       $a1, $zero, 0x14
    ctx->r5 = ADD32(0, 0X14);
    // 0x80264828: jal         0x80049E40
    // 0x8026482C: addiu       $a2, $zero, 0xF
    ctx->r6 = ADD32(0, 0XF);
    func_80049E40(rdram, ctx);
        goto after_2;
    // 0x8026482C: addiu       $a2, $zero, 0xF
    ctx->r6 = ADD32(0, 0XF);
    after_2:
    // 0x80264830: jal         0x802654F0
    // 0x80264834: nop

    ovl_80264800_func_802654F0(rdram, ctx);
        goto after_3;
    // 0x80264834: nop

    after_3:
    // 0x80264838: lui         $v0, 0x8011
    ctx->r2 = S32(0X8011 << 16);
    // 0x8026483C: addiu       $v0, $v0, -0x2F98
    ctx->r2 = ADD32(ctx->r2, -0X2F98);
    // 0x80264840: lw          $t6, 0x0($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X0);
    // 0x80264844: lui         $v1, 0x2
    ctx->r3 = S32(0X2 << 16);
    // 0x80264848: ori         $v1, $v1, 0x8000
    ctx->r3 = ctx->r3 | 0X8000;
    // 0x8026484C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80264850: addu        $t7, $t6, $v1
    ctx->r15 = ADD32(ctx->r14, ctx->r3);
    // 0x80264854: sb          $a1, 0x60E1($t7)
    MEM_B(0X60E1, ctx->r15) = ctx->r5;
    // 0x80264858: lw          $t8, 0x0($v0)
    ctx->r24 = MEM_W(ctx->r2, 0X0);
    // 0x8026485C: nop

    // 0x80264860: addu        $t9, $t8, $v1
    ctx->r25 = ADD32(ctx->r24, ctx->r3);
    // 0x80264864: sb          $a1, 0x63AD($t9)
    MEM_B(0X63AD, ctx->r25) = ctx->r5;
    // 0x80264868: lw          $t0, 0x0($v0)
    ctx->r8 = MEM_W(ctx->r2, 0X0);
    // 0x8026486C: nop

    // 0x80264870: addu        $t1, $t0, $v1
    ctx->r9 = ADD32(ctx->r8, ctx->r3);
    // 0x80264874: sb          $a1, 0x6945($t1)
    MEM_B(0X6945, ctx->r9) = ctx->r5;
    // 0x80264878: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x8026487C: jal         0x8004AFC0
    // 0x80264880: nop

    func_8004AFC0(rdram, ctx);
        goto after_4;
    // 0x80264880: nop

    after_4:
    // 0x80264884: jal         0x802658D0
    // 0x80264888: nop

    ovl_80264800_func_802658D0(rdram, ctx);
        goto after_5;
    // 0x80264888: nop

    after_5:
    // 0x8026488C: jal         0x80265968
    // 0x80264890: nop

    ovl_80264800_func_80265968(rdram, ctx);
        goto after_6;
    // 0x80264890: nop

    after_6:
    // 0x80264894: jal         0x80265A94
    // 0x80264898: nop

    ovl_80264800_func_80265A94(rdram, ctx);
        goto after_7;
    // 0x80264898: nop

    after_7:
    // 0x8026489C: lui         $a0, 0x8027
    ctx->r4 = S32(0X8027 << 16);
    // 0x802648A0: jal         0x8002AAC0
    // 0x802648A4: addiu       $a0, $a0, -0x6724
    ctx->r4 = ADD32(ctx->r4, -0X6724);
    func_8002AAC0(rdram, ctx);
        goto after_8;
    // 0x802648A4: addiu       $a0, $a0, -0x6724
    ctx->r4 = ADD32(ctx->r4, -0X6724);
    after_8:
    // 0x802648A8: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x802648AC: lbu         $a0, -0x326C($a0)
    ctx->r4 = MEM_BU(ctx->r4, -0X326C);
    // 0x802648B0: jal         0x8006F918
    // 0x802648B4: nop

    func_8006F918(rdram, ctx);
        goto after_9;
    // 0x802648B4: nop

    after_9:
    // 0x802648B8: jal         0x802656F4
    // 0x802648BC: nop

    ovl_80264800_func_802656F4(rdram, ctx);
        goto after_10;
    // 0x802648BC: nop

    after_10:
    // 0x802648C0: jal         0x802657BC
    // 0x802648C4: nop

    ovl_80264800_func_802657BC(rdram, ctx);
        goto after_11;
    // 0x802648C4: nop

    after_11:
    // 0x802648C8: jal         0x8026658C
    // 0x802648CC: nop

    ovl_80264800_func_8026658C(rdram, ctx);
        goto after_12;
    // 0x802648CC: nop

    after_12:
    // 0x802648D0: jal         0x80266470
    // 0x802648D4: nop

    ovl_80264800_func_80266470(rdram, ctx);
        goto after_13;
    // 0x802648D4: nop

    after_13:
    // 0x802648D8: jal         0x8026662C
    // 0x802648DC: nop

    ovl_80264800_func_8026662C(rdram, ctx);
        goto after_14;
    // 0x802648DC: nop

    after_14:
    // 0x802648E0: jal         0x80266974
    // 0x802648E4: nop

    ovl_80264800_func_80266974(rdram, ctx);
        goto after_15;
    // 0x802648E4: nop

    after_15:
    // 0x802648E8: jal         0x80265FBC
    // 0x802648EC: nop

    ovl_80264800_func_80265FBC(rdram, ctx);
        goto after_16;
    // 0x802648EC: nop

    after_16:
    // 0x802648F0: jal         0x802663A4
    // 0x802648F4: nop

    ovl_80264800_func_802663A4(rdram, ctx);
        goto after_17;
    // 0x802648F4: nop

    after_17:
    // 0x802648F8: jal         0x80266B8C
    // 0x802648FC: nop

    ovl_80264800_func_80266B8C(rdram, ctx);
        goto after_18;
    // 0x802648FC: nop

    after_18:
    // 0x80264900: jal         0x80266CB8
    // 0x80264904: nop

    ovl_80264800_func_80266CB8(rdram, ctx);
        goto after_19;
    // 0x80264904: nop

    after_19:
    // 0x80264908: jal         0x80266DCC
    // 0x8026490C: nop

    ovl_80264800_func_80266DCC(rdram, ctx);
        goto after_20;
    // 0x8026490C: nop

    after_20:
    // 0x80264910: jal         0x80266E94
    // 0x80264914: nop

    ovl_80264800_func_80266E94(rdram, ctx);
        goto after_21;
    // 0x80264914: nop

    after_21:
    // 0x80264918: jal         0x80266FC4
    // 0x8026491C: nop

    ovl_80264800_func_80266FC4(rdram, ctx);
        goto after_22;
    // 0x8026491C: nop

    after_22:
    // 0x80264920: jal         0x80265DC4
    // 0x80264924: nop

    ovl_80264800_func_80265DC4(rdram, ctx);
        goto after_23;
    // 0x80264924: nop

    after_23:
    // 0x80264928: jal         0x80265E1C
    // 0x8026492C: nop

    ovl_80264800_func_80265E1C(rdram, ctx);
        goto after_24;
    // 0x8026492C: nop

    after_24:
    // 0x80264930: jal         0x80265EB0
    // 0x80264934: nop

    ovl_80264800_func_80265EB0(rdram, ctx);
        goto after_25;
    // 0x80264934: nop

    after_25:
    // 0x80264938: lui         $a0, 0x8026
    ctx->r4 = S32(0X8026 << 16);
    // 0x8026493C: jal         0x80029220
    // 0x80264940: addiu       $a0, $a0, 0x7330
    ctx->r4 = ADD32(ctx->r4, 0X7330);
    func_80029220(rdram, ctx);
        goto after_26;
    // 0x80264940: addiu       $a0, $a0, 0x7330
    ctx->r4 = ADD32(ctx->r4, 0X7330);
    after_26:
    // 0x80264944: jal         0x802676E4
    // 0x80264948: nop

    ovl_80264800_func_802676E4(rdram, ctx);
        goto after_27;
    // 0x80264948: nop

    after_27:
    // 0x8026494C: jal         0x802674B8
    // 0x80264950: nop

    ovl_80264800_func_802674B8(rdram, ctx);
        goto after_28;
    // 0x80264950: nop

    after_28:
    // 0x80264954: jal         0x80265C84
    // 0x80264958: nop

    ovl_80264800_func_80265C84(rdram, ctx);
        goto after_29;
    // 0x80264958: nop

    after_29:
    // 0x8026495C: addiu       $t2, $zero, 0x28
    ctx->r10 = ADD32(0, 0X28);
    // 0x80264960: sw          $t2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r10;
    // 0x80264964: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x80264968: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8026496C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x80264970: jal         0x8004B918
    // 0x80264974: addiu       $a3, $zero, 0x140
    ctx->r7 = ADD32(0, 0X140);
    func_8004B918(rdram, ctx);
        goto after_30;
    // 0x80264974: addiu       $a3, $zero, 0x140
    ctx->r7 = ADD32(0, 0X140);
    after_30:
    // 0x80264978: lui         $a0, 0x8026
    ctx->r4 = S32(0X8026 << 16);
    // 0x8026497C: jal         0x80029220
    // 0x80264980: addiu       $a0, $a0, 0x7640
    ctx->r4 = ADD32(ctx->r4, 0X7640);
    func_80029220(rdram, ctx);
        goto after_31;
    // 0x80264980: addiu       $a0, $a0, 0x7640
    ctx->r4 = ADD32(ctx->r4, 0X7640);
    after_31:
    // 0x80264984: lui         $a0, 0x8026
    ctx->r4 = S32(0X8026 << 16);
    // 0x80264988: addiu       $a0, $a0, 0x49A4
    ctx->r4 = ADD32(ctx->r4, 0X49A4);
    // 0x8026498C: jal         0x8004AE38
    // 0x80264990: addiu       $a1, $zero, 0xB
    ctx->r5 = ADD32(0, 0XB);
    func_8004AE38(rdram, ctx);
        goto after_32;
    // 0x80264990: addiu       $a1, $zero, 0xB
    ctx->r5 = ADD32(0, 0XB);
    after_32:
    // 0x80264994: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80264998: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x8026499C: jr          $ra
    // 0x802649A0: nop

    return;
    // 0x802649A0: nop

;}
RECOMP_FUNC void ovl_80264800_func_80264940(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80264940: addiu       $a0, $a0, 0x7330
    ctx->r4 = ADD32(ctx->r4, 0X7330);
    // 0x80264944: jal         0x802676E4
    // 0x80264948: nop

    ovl_80264800_func_802676E4(rdram, ctx);
        goto after_0;
    // 0x80264948: nop

    after_0:
    // 0x8026494C: jal         0x802674B8
    // 0x80264950: nop

    ovl_80264800_func_802674B8(rdram, ctx);
        goto after_1;
    // 0x80264950: nop

    after_1:
    // 0x80264954: jal         0x80265C84
    // 0x80264958: nop

    ovl_80264800_func_80265C84(rdram, ctx);
        goto after_2;
    // 0x80264958: nop

    after_2:
    // 0x8026495C: addiu       $t2, $zero, 0x28
    ctx->r10 = ADD32(0, 0X28);
    // 0x80264960: sw          $t2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r10;
    // 0x80264964: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x80264968: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8026496C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x80264970: jal         0x8004B918
    // 0x80264974: addiu       $a3, $zero, 0x140
    ctx->r7 = ADD32(0, 0X140);
    func_8004B918(rdram, ctx);
        goto after_3;
    // 0x80264974: addiu       $a3, $zero, 0x140
    ctx->r7 = ADD32(0, 0X140);
    after_3:
    // 0x80264978: lui         $a0, 0x8026
    ctx->r4 = S32(0X8026 << 16);
    // 0x8026497C: jal         0x80029220
    // 0x80264980: addiu       $a0, $a0, 0x7640
    ctx->r4 = ADD32(ctx->r4, 0X7640);
    func_80029220(rdram, ctx);
        goto after_4;
    // 0x80264980: addiu       $a0, $a0, 0x7640
    ctx->r4 = ADD32(ctx->r4, 0X7640);
    after_4:
    // 0x80264984: lui         $a0, 0x8026
    ctx->r4 = S32(0X8026 << 16);
    // 0x80264988: addiu       $a0, $a0, 0x49A4
    ctx->r4 = ADD32(ctx->r4, 0X49A4);
    // 0x8026498C: jal         0x8004AE38
    // 0x80264990: addiu       $a1, $zero, 0xB
    ctx->r5 = ADD32(0, 0XB);
    func_8004AE38(rdram, ctx);
        goto after_5;
    // 0x80264990: addiu       $a1, $zero, 0xB
    ctx->r5 = ADD32(0, 0XB);
    after_5:
    // 0x80264994: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80264998: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x8026499C: jr          $ra
    // 0x802649A0: nop

    return;
    // 0x802649A0: nop

;}
RECOMP_FUNC void ovl_80264800_func_802649A4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802649A4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802649A8: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x802649AC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802649B0: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x802649B4: lui         $a0, 0x8026
    ctx->r4 = S32(0X8026 << 16);
    // 0x802649B8: addiu       $a0, $a0, 0x49D4
    ctx->r4 = ADD32(ctx->r4, 0X49D4);
    // 0x802649BC: jal         0x8002989C
    // 0x802649C0: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    func_8002989C(rdram, ctx);
        goto after_0;
    // 0x802649C0: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    after_0:
    // 0x802649C4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802649C8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x802649CC: jr          $ra
    // 0x802649D0: nop

    return;
    // 0x802649D0: nop

;}
RECOMP_FUNC void ovl_80264800_func_802649D4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802649D4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802649D8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802649DC: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x802649E0: jal         0x80265D1C
    // 0x802649E4: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    ovl_80264800_func_80265D1C(rdram, ctx);
        goto after_0;
    // 0x802649E4: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    after_0:
    // 0x802649E8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802649EC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x802649F0: jr          $ra
    // 0x802649F4: nop

    return;
    // 0x802649F4: nop

;}
RECOMP_FUNC void ovl_80264800_func_802649F8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802649F8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802649FC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80264A00: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x80264A04: sb          $zero, 0x48($a0)
    MEM_B(0X48, ctx->r4) = 0;
    // 0x80264A08: sb          $zero, 0x49($a0)
    MEM_B(0X49, ctx->r4) = 0;
    // 0x80264A0C: lui         $t6, 0x8012
    ctx->r14 = S32(0X8012 << 16);
    // 0x80264A10: lb          $t6, -0x326C($t6)
    ctx->r14 = MEM_B(ctx->r14, -0X326C);
    // 0x80264A14: or          $a2, $a0, $zero
    ctx->r6 = ctx->r4 | 0;
    // 0x80264A18: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80264A1C: subu        $t7, $t7, $t6
    ctx->r15 = SUB32(ctx->r15, ctx->r14);
    // 0x80264A20: sll         $t7, $t7, 3
    ctx->r15 = S32(ctx->r15 << 3);
    // 0x80264A24: lui         $a0, 0x8011
    ctx->r4 = S32(0X8011 << 16);
    // 0x80264A28: addu        $a0, $a0, $t7
    ctx->r4 = ADD32(ctx->r4, ctx->r15);
    // 0x80264A2C: lhu         $a0, -0x3078($a0)
    ctx->r4 = MEM_HU(ctx->r4, -0X3078);
    // 0x80264A30: jal         0x80035D2C
    // 0x80264A34: sw          $a2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r6;
    func_80035D2C(rdram, ctx);
        goto after_0;
    // 0x80264A34: sw          $a2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r6;
    after_0:
    // 0x80264A38: sll         $t8, $v0, 2
    ctx->r24 = S32(ctx->r2 << 2);
    // 0x80264A3C: lui         $t9, 0x8027
    ctx->r25 = S32(0X8027 << 16);
    // 0x80264A40: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x80264A44: lw          $t9, -0x66D8($t9)
    ctx->r25 = MEM_W(ctx->r25, -0X66D8);
    // 0x80264A48: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x80264A4C: lw          $a1, 0x1C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X1C);
    // 0x80264A50: jalr        $t9
    // 0x80264A54: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x80264A54: nop

    after_1:
    // 0x80264A58: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80264A5C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80264A60: jr          $ra
    // 0x80264A64: nop

    return;
    // 0x80264A64: nop

;}
RECOMP_FUNC void ovl_80264800_func_80264A3C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80264A3C: lui         $t9, 0x8027
    ctx->r25 = S32(0X8027 << 16);
    // 0x80264A40: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x80264A44: lw          $t9, -0x66D8($t9)
    ctx->r25 = MEM_W(ctx->r25, -0X66D8);
    // 0x80264A48: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x80264A4C: lw          $a1, 0x1C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X1C);
    // 0x80264A50: jalr        $t9
    // 0x80264A54: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x80264A54: nop

    after_0:
    // 0x80264A58: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80264A5C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80264A60: jr          $ra
    // 0x80264A64: nop

    return;
    // 0x80264A64: nop

;}
RECOMP_FUNC void ovl_80264800_func_80264A68(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80264A68: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80264A6C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80264A70: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x80264A74: jal         0x80035770
    // 0x80264A78: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_80035770(rdram, ctx);
        goto after_0;
    // 0x80264A78: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x80264A7C: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x80264A80: nop

    // 0x80264A84: lbu         $t6, 0x38($a0)
    ctx->r14 = MEM_BU(ctx->r4, 0X38);
    // 0x80264A88: nop

    // 0x80264A8C: sltiu       $at, $t6, 0x6
    ctx->r1 = ctx->r14 < 0X6 ? 1 : 0;
    // 0x80264A90: beq         $at, $zero, L_80264D3C
    if (ctx->r1 == 0) {
        // 0x80264A94: sll         $t6, $t6, 2
        ctx->r14 = S32(ctx->r14 << 2);
            goto L_80264D3C;
    }
    // 0x80264A94: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x80264A98: lui         $at, 0x8027
    ctx->r1 = S32(0X8027 << 16);
    // 0x80264A9C: addu        $at, $at, $t6
    gpr jr_addend_80264AA8 = ctx->r14;
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x80264AA0: lw          $t6, -0x6650($at)
    ctx->r14 = ADD32(ctx->r1, -0X6650);
    // 0x80264AA4: nop

    // 0x80264AA8: jr          $t6
    // 0x80264AAC: nop

    switch (jr_addend_80264AA8 >> 2) {
        case 0: goto L_80264AB0; break;
        case 1: goto L_80264B9C; break;
        case 2: goto L_80264C0C; break;
        case 3: goto L_80264C38; break;
        case 4: goto L_80264C50; break;
        case 5: goto L_80264C90; break;
        default: switch_error(__func__, 0x80264AA8, 0x802699B0);
    }
    // 0x80264AAC: nop

L_80264AB0:
    // 0x80264AB0: lbu         $t7, 0x3C($a0)
    ctx->r15 = MEM_BU(ctx->r4, 0X3C);
    // 0x80264AB4: nop

    // 0x80264AB8: sltiu       $at, $t7, 0x6
    ctx->r1 = ctx->r15 < 0X6 ? 1 : 0;
    // 0x80264ABC: beq         $at, $zero, L_80264D3C
    if (ctx->r1 == 0) {
        // 0x80264AC0: sll         $t7, $t7, 2
        ctx->r15 = S32(ctx->r15 << 2);
            goto L_80264D3C;
    }
    // 0x80264AC0: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80264AC4: lui         $at, 0x8027
    ctx->r1 = S32(0X8027 << 16);
    // 0x80264AC8: addu        $at, $at, $t7
    gpr jr_addend_80264AD4 = ctx->r15;
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x80264ACC: lw          $t7, -0x6638($at)
    ctx->r15 = ADD32(ctx->r1, -0X6638);
    // 0x80264AD0: nop

    // 0x80264AD4: jr          $t7
    // 0x80264AD8: nop

    switch (jr_addend_80264AD4 >> 2) {
        case 0: goto L_80264ADC; break;
        case 1: goto L_80264AF4; break;
        case 2: goto L_80264B10; break;
        case 3: goto L_80264B44; break;
        case 4: goto L_80264B64; break;
        case 5: goto L_80264B88; break;
        default: switch_error(__func__, 0x80264AD4, 0x802699C8);
    }
    // 0x80264AD8: nop

L_80264ADC:
    // 0x80264ADC: jal         0x802655F8
    // 0x80264AE0: nop

    ovl_80264800_func_802655F8(rdram, ctx);
        goto after_1;
    // 0x80264AE0: nop

    after_1:
    // 0x80264AE4: jal         0x800373A4
    // 0x80264AE8: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    func_800373A4(rdram, ctx);
        goto after_2;
    // 0x80264AE8: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_2:
    // 0x80264AEC: b           L_80264D40
    // 0x80264AF0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80264D40;
    // 0x80264AF0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80264AF4:
    // 0x80264AF4: jal         0x80265D70
    // 0x80264AF8: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    ovl_80264800_func_80265D70(rdram, ctx);
        goto after_3;
    // 0x80264AF8: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_3:
    // 0x80264AFC: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x80264B00: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x80264B04: sb          $zero, 0x39($a0)
    MEM_B(0X39, ctx->r4) = 0;
    // 0x80264B08: b           L_80264D3C
    // 0x80264B0C: sb          $v1, 0x38($a0)
    MEM_B(0X38, ctx->r4) = ctx->r3;
        goto L_80264D3C;
    // 0x80264B0C: sb          $v1, 0x38($a0)
    MEM_B(0X38, ctx->r4) = ctx->r3;
L_80264B10:
    // 0x80264B10: jal         0x80265D70
    // 0x80264B14: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    ovl_80264800_func_80265D70(rdram, ctx);
        goto after_4;
    // 0x80264B14: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_4:
    // 0x80264B18: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x80264B1C: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x80264B20: lb          $t8, 0x43($a0)
    ctx->r24 = MEM_B(ctx->r4, 0X43);
    // 0x80264B24: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x80264B28: bne         $t8, $at, L_80264B38
    if (ctx->r24 != ctx->r1) {
        // 0x80264B2C: addiu       $t9, $zero, 0x2
        ctx->r25 = ADD32(0, 0X2);
            goto L_80264B38;
    }
    // 0x80264B2C: addiu       $t9, $zero, 0x2
    ctx->r25 = ADD32(0, 0X2);
    // 0x80264B30: b           L_80264B3C
    // 0x80264B34: sb          $zero, 0x3F($a0)
    MEM_B(0X3F, ctx->r4) = 0;
        goto L_80264B3C;
    // 0x80264B34: sb          $zero, 0x3F($a0)
    MEM_B(0X3F, ctx->r4) = 0;
L_80264B38:
    // 0x80264B38: sb          $v1, 0x3F($a0)
    MEM_B(0X3F, ctx->r4) = ctx->r3;
L_80264B3C:
    // 0x80264B3C: b           L_80264D3C
    // 0x80264B40: sb          $t9, 0x38($a0)
    MEM_B(0X38, ctx->r4) = ctx->r25;
        goto L_80264D3C;
    // 0x80264B40: sb          $t9, 0x38($a0)
    MEM_B(0X38, ctx->r4) = ctx->r25;
L_80264B44:
    // 0x80264B44: jal         0x80265D70
    // 0x80264B48: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    ovl_80264800_func_80265D70(rdram, ctx);
        goto after_5;
    // 0x80264B48: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_5:
    // 0x80264B4C: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x80264B50: addiu       $t0, $zero, 0x3
    ctx->r8 = ADD32(0, 0X3);
    // 0x80264B54: lb          $t1, 0x44($a0)
    ctx->r9 = MEM_B(ctx->r4, 0X44);
    // 0x80264B58: sb          $t0, 0x38($a0)
    MEM_B(0X38, ctx->r4) = ctx->r8;
    // 0x80264B5C: b           L_80264D3C
    // 0x80264B60: sb          $t1, 0x40($a0)
    MEM_B(0X40, ctx->r4) = ctx->r9;
        goto L_80264D3C;
    // 0x80264B60: sb          $t1, 0x40($a0)
    MEM_B(0X40, ctx->r4) = ctx->r9;
L_80264B64:
    // 0x80264B64: jal         0x80265D70
    // 0x80264B68: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    ovl_80264800_func_80265D70(rdram, ctx);
        goto after_6;
    // 0x80264B68: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_6:
    // 0x80264B6C: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x80264B70: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x80264B74: addiu       $t2, $zero, 0x4
    ctx->r10 = ADD32(0, 0X4);
    // 0x80264B78: sb          $t2, 0x38($a0)
    MEM_B(0X38, ctx->r4) = ctx->r10;
    // 0x80264B7C: sb          $zero, 0x3B($a0)
    MEM_B(0X3B, ctx->r4) = 0;
    // 0x80264B80: b           L_80264D3C
    // 0x80264B84: sb          $v1, 0x3E($a0)
    MEM_B(0X3E, ctx->r4) = ctx->r3;
        goto L_80264D3C;
    // 0x80264B84: sb          $v1, 0x3E($a0)
    MEM_B(0X3E, ctx->r4) = ctx->r3;
L_80264B88:
    // 0x80264B88: addiu       $t3, $zero, 0x5
    ctx->r11 = ADD32(0, 0X5);
    // 0x80264B8C: sb          $t3, 0x38($a0)
    MEM_B(0X38, ctx->r4) = ctx->r11;
    // 0x80264B90: sb          $zero, 0x3A($a0)
    MEM_B(0X3A, ctx->r4) = 0;
    // 0x80264B94: b           L_80264D3C
    // 0x80264B98: sb          $zero, 0x41($a0)
    MEM_B(0X41, ctx->r4) = 0;
        goto L_80264D3C;
    // 0x80264B98: sb          $zero, 0x41($a0)
    MEM_B(0X41, ctx->r4) = 0;
L_80264B9C:
    // 0x80264B9C: lb          $v0, 0x39($a0)
    ctx->r2 = MEM_B(ctx->r4, 0X39);
    // 0x80264BA0: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x80264BA4: beq         $v0, $zero, L_80264BC8
    if (ctx->r2 == 0) {
        // 0x80264BA8: nop
    
            goto L_80264BC8;
    }
    // 0x80264BA8: nop

    // 0x80264BAC: beq         $v0, $v1, L_80264BDC
    if (ctx->r2 == ctx->r3) {
        // 0x80264BB0: addiu       $t4, $zero, 0x2
        ctx->r12 = ADD32(0, 0X2);
            goto L_80264BDC;
    }
    // 0x80264BB0: addiu       $t4, $zero, 0x2
    ctx->r12 = ADD32(0, 0X2);
    // 0x80264BB4: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x80264BB8: beq         $v0, $at, L_80264BF4
    if (ctx->r2 == ctx->r1) {
        // 0x80264BBC: nop
    
            goto L_80264BF4;
    }
    // 0x80264BBC: nop

    // 0x80264BC0: b           L_80264D40
    // 0x80264BC4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80264D40;
    // 0x80264BC4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80264BC8:
    // 0x80264BC8: jal         0x80265D1C
    // 0x80264BCC: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    ovl_80264800_func_80265D1C(rdram, ctx);
        goto after_7;
    // 0x80264BCC: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_7:
    // 0x80264BD0: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x80264BD4: b           L_80264D3C
    // 0x80264BD8: sb          $zero, 0x38($a0)
    MEM_B(0X38, ctx->r4) = 0;
        goto L_80264D3C;
    // 0x80264BD8: sb          $zero, 0x38($a0)
    MEM_B(0X38, ctx->r4) = 0;
L_80264BDC:
    // 0x80264BDC: lb          $t5, 0x3D($a0)
    ctx->r13 = MEM_B(ctx->r4, 0X3D);
    // 0x80264BE0: sb          $t4, 0x39($a0)
    MEM_B(0X39, ctx->r4) = ctx->r12;
    // 0x80264BE4: addu        $t6, $a0, $t5
    ctx->r14 = ADD32(ctx->r4, ctx->r13);
    // 0x80264BE8: lb          $t7, 0x4C($t6)
    ctx->r15 = MEM_B(ctx->r14, 0X4C);
    // 0x80264BEC: b           L_80264D3C
    // 0x80264BF0: sb          $t7, 0x3E($a0)
    MEM_B(0X3E, ctx->r4) = ctx->r15;
        goto L_80264D3C;
    // 0x80264BF0: sb          $t7, 0x3E($a0)
    MEM_B(0X3E, ctx->r4) = ctx->r15;
L_80264BF4:
    // 0x80264BF4: lb          $t9, 0x3D($a0)
    ctx->r25 = MEM_B(ctx->r4, 0X3D);
    // 0x80264BF8: lb          $t8, 0x3E($a0)
    ctx->r24 = MEM_B(ctx->r4, 0X3E);
    // 0x80264BFC: sb          $v1, 0x39($a0)
    MEM_B(0X39, ctx->r4) = ctx->r3;
    // 0x80264C00: addu        $t0, $a0, $t9
    ctx->r8 = ADD32(ctx->r4, ctx->r25);
    // 0x80264C04: b           L_80264D3C
    // 0x80264C08: sb          $t8, 0x4C($t0)
    MEM_B(0X4C, ctx->r8) = ctx->r24;
        goto L_80264D3C;
    // 0x80264C08: sb          $t8, 0x4C($t0)
    MEM_B(0X4C, ctx->r8) = ctx->r24;
L_80264C0C:
    // 0x80264C0C: lb          $t1, 0x3F($a0)
    ctx->r9 = MEM_B(ctx->r4, 0X3F);
    // 0x80264C10: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x80264C14: bne         $t1, $zero, L_80264C24
    if (ctx->r9 != 0) {
        // 0x80264C18: addiu       $t2, $zero, 0x4
        ctx->r10 = ADD32(0, 0X4);
            goto L_80264C24;
    }
    // 0x80264C18: addiu       $t2, $zero, 0x4
    ctx->r10 = ADD32(0, 0X4);
    // 0x80264C1C: b           L_80264C28
    // 0x80264C20: sb          $t2, 0x43($a0)
    MEM_B(0X43, ctx->r4) = ctx->r10;
        goto L_80264C28;
    // 0x80264C20: sb          $t2, 0x43($a0)
    MEM_B(0X43, ctx->r4) = ctx->r10;
L_80264C24:
    // 0x80264C24: sb          $v1, 0x43($a0)
    MEM_B(0X43, ctx->r4) = ctx->r3;
L_80264C28:
    // 0x80264C28: jal         0x80265D1C
    // 0x80264C2C: sb          $zero, 0x38($a0)
    MEM_B(0X38, ctx->r4) = 0;
    ovl_80264800_func_80265D1C(rdram, ctx);
        goto after_8;
    // 0x80264C2C: sb          $zero, 0x38($a0)
    MEM_B(0X38, ctx->r4) = 0;
    after_8:
    // 0x80264C30: b           L_80264D40
    // 0x80264C34: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80264D40;
    // 0x80264C34: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80264C38:
    // 0x80264C38: lb          $t3, 0x40($a0)
    ctx->r11 = MEM_B(ctx->r4, 0X40);
    // 0x80264C3C: sb          $zero, 0x38($a0)
    MEM_B(0X38, ctx->r4) = 0;
    // 0x80264C40: jal         0x80265D1C
    // 0x80264C44: sb          $t3, 0x44($a0)
    MEM_B(0X44, ctx->r4) = ctx->r11;
    ovl_80264800_func_80265D1C(rdram, ctx);
        goto after_9;
    // 0x80264C44: sb          $t3, 0x44($a0)
    MEM_B(0X44, ctx->r4) = ctx->r11;
    after_9:
    // 0x80264C48: b           L_80264D40
    // 0x80264C4C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80264D40;
    // 0x80264C4C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80264C50:
    // 0x80264C50: lb          $v0, 0x3B($a0)
    ctx->r2 = MEM_B(ctx->r4, 0X3B);
    // 0x80264C54: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x80264C58: beq         $v0, $zero, L_80264C74
    if (ctx->r2 == 0) {
        // 0x80264C5C: nop
    
            goto L_80264C74;
    }
    // 0x80264C5C: nop

    // 0x80264C60: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x80264C64: beq         $v0, $v1, L_80264C84
    if (ctx->r2 == ctx->r3) {
        // 0x80264C68: nop
    
            goto L_80264C84;
    }
    // 0x80264C68: nop

    // 0x80264C6C: b           L_80264D40
    // 0x80264C70: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80264D40;
    // 0x80264C70: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80264C74:
    // 0x80264C74: sb          $v1, 0x48($a0)
    MEM_B(0X48, ctx->r4) = ctx->r3;
    // 0x80264C78: sb          $zero, 0x45($a0)
    MEM_B(0X45, ctx->r4) = 0;
    // 0x80264C7C: b           L_80264D3C
    // 0x80264C80: sb          $v1, 0x3B($a0)
    MEM_B(0X3B, ctx->r4) = ctx->r3;
        goto L_80264D3C;
    // 0x80264C80: sb          $v1, 0x3B($a0)
    MEM_B(0X3B, ctx->r4) = ctx->r3;
L_80264C84:
    // 0x80264C84: sb          $zero, 0x3B($a0)
    MEM_B(0X3B, ctx->r4) = 0;
    // 0x80264C88: b           L_80264D3C
    // 0x80264C8C: sb          $v1, 0x49($a0)
    MEM_B(0X49, ctx->r4) = ctx->r3;
        goto L_80264D3C;
    // 0x80264C8C: sb          $v1, 0x49($a0)
    MEM_B(0X49, ctx->r4) = ctx->r3;
L_80264C90:
    // 0x80264C90: lb          $v0, 0x3A($a0)
    ctx->r2 = MEM_B(ctx->r4, 0X3A);
    // 0x80264C94: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x80264C98: beq         $v0, $zero, L_80264CB4
    if (ctx->r2 == 0) {
        // 0x80264C9C: nop
    
            goto L_80264CB4;
    }
    // 0x80264C9C: nop

    // 0x80264CA0: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x80264CA4: beq         $v0, $v1, L_80264CC0
    if (ctx->r2 == ctx->r3) {
        // 0x80264CA8: nop
    
            goto L_80264CC0;
    }
    // 0x80264CA8: nop

    // 0x80264CAC: b           L_80264D40
    // 0x80264CB0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80264D40;
    // 0x80264CB0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80264CB4:
    // 0x80264CB4: sb          $v1, 0x3A($a0)
    MEM_B(0X3A, ctx->r4) = ctx->r3;
    // 0x80264CB8: b           L_80264D3C
    // 0x80264CBC: sb          $v1, 0x42($a0)
    MEM_B(0X42, ctx->r4) = ctx->r3;
        goto L_80264D3C;
    // 0x80264CBC: sb          $v1, 0x42($a0)
    MEM_B(0X42, ctx->r4) = ctx->r3;
L_80264CC0:
    // 0x80264CC0: lb          $v0, 0x42($a0)
    ctx->r2 = MEM_B(ctx->r4, 0X42);
    // 0x80264CC4: nop

    // 0x80264CC8: beq         $v0, $zero, L_80264CE0
    if (ctx->r2 == 0) {
        // 0x80264CCC: nop
    
            goto L_80264CE0;
    }
    // 0x80264CCC: nop

    // 0x80264CD0: beq         $v0, $v1, L_80264D38
    if (ctx->r2 == ctx->r3) {
        // 0x80264CD4: nop
    
            goto L_80264D38;
    }
    // 0x80264CD4: nop

    // 0x80264CD8: b           L_80264D40
    // 0x80264CDC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80264D40;
    // 0x80264CDC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80264CE0:
    // 0x80264CE0: lb          $v0, 0x41($a0)
    ctx->r2 = MEM_B(ctx->r4, 0X41);
    // 0x80264CE4: nop

    // 0x80264CE8: beq         $v0, $zero, L_80264D00
    if (ctx->r2 == 0) {
        // 0x80264CEC: nop
    
            goto L_80264D00;
    }
    // 0x80264CEC: nop

    // 0x80264CF0: beq         $v0, $v1, L_80264D20
    if (ctx->r2 == ctx->r3) {
        // 0x80264CF4: nop
    
            goto L_80264D20;
    }
    // 0x80264CF4: nop

    // 0x80264CF8: b           L_80264D28
    // 0x80264CFC: nop

        goto L_80264D28;
    // 0x80264CFC: nop

L_80264D00:
    // 0x80264D00: jal         0x80265B68
    // 0x80264D04: nop

    ovl_80264800_func_80265B68(rdram, ctx);
        goto after_10;
    // 0x80264D04: nop

    after_10:
    // 0x80264D08: jal         0x80265BA0
    // 0x80264D0C: nop

    ovl_80264800_func_80265BA0(rdram, ctx);
        goto after_11;
    // 0x80264D0C: nop

    after_11:
    // 0x80264D10: jal         0x80265BB4
    // 0x80264D14: nop

    ovl_80264800_func_80265BB4(rdram, ctx);
        goto after_12;
    // 0x80264D14: nop

    after_12:
    // 0x80264D18: b           L_80264D28
    // 0x80264D1C: nop

        goto L_80264D28;
    // 0x80264D1C: nop

L_80264D20:
    // 0x80264D20: jal         0x80265B68
    // 0x80264D24: nop

    ovl_80264800_func_80265B68(rdram, ctx);
        goto after_13;
    // 0x80264D24: nop

    after_13:
L_80264D28:
    // 0x80264D28: jal         0x80265BC4
    // 0x80264D2C: nop

    ovl_80264800_func_80265BC4(rdram, ctx);
        goto after_14;
    // 0x80264D2C: nop

    after_14:
    // 0x80264D30: b           L_80264D40
    // 0x80264D34: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80264D40;
    // 0x80264D34: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80264D38:
    // 0x80264D38: sb          $zero, 0x38($a0)
    MEM_B(0X38, ctx->r4) = 0;
L_80264D3C:
    // 0x80264D3C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80264D40:
    // 0x80264D40: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80264D44: jr          $ra
    // 0x80264D48: nop

    return;
    // 0x80264D48: nop

;}
RECOMP_FUNC void ovl_80264800_func_80264B30(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80264B30: b           L_80264B3C
    // 0x80264B34: sb          $zero, 0x3F($a0)
    MEM_B(0X3F, ctx->r4) = 0;
        goto L_80264B3C;
    // 0x80264B34: sb          $zero, 0x3F($a0)
    MEM_B(0X3F, ctx->r4) = 0;
    // 0x80264B38: sb          $v1, 0x3F($a0)
    MEM_B(0X3F, ctx->r4) = ctx->r3;
L_80264B3C:
    // 0x80264B3C: b           L_80264D3C
    // 0x80264B40: sb          $t9, 0x38($a0)
    MEM_B(0X38, ctx->r4) = ctx->r25;
        goto L_80264D3C;
    // 0x80264B40: sb          $t9, 0x38($a0)
    MEM_B(0X38, ctx->r4) = ctx->r25;
    // 0x80264B44: jal         0x80265D70
    // 0x80264B48: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    ovl_80264800_func_80265D70(rdram, ctx);
        goto after_0;
    // 0x80264B48: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x80264B4C: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x80264B50: addiu       $t0, $zero, 0x3
    ctx->r8 = ADD32(0, 0X3);
    // 0x80264B54: lb          $t1, 0x44($a0)
    ctx->r9 = MEM_B(ctx->r4, 0X44);
    // 0x80264B58: sb          $t0, 0x38($a0)
    MEM_B(0X38, ctx->r4) = ctx->r8;
    // 0x80264B5C: b           L_80264D3C
    // 0x80264B60: sb          $t1, 0x40($a0)
    MEM_B(0X40, ctx->r4) = ctx->r9;
        goto L_80264D3C;
    // 0x80264B60: sb          $t1, 0x40($a0)
    MEM_B(0X40, ctx->r4) = ctx->r9;
    // 0x80264B64: jal         0x80265D70
    // 0x80264B68: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    ovl_80264800_func_80265D70(rdram, ctx);
        goto after_1;
    // 0x80264B68: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_1:
    // 0x80264B6C: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x80264B70: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x80264B74: addiu       $t2, $zero, 0x4
    ctx->r10 = ADD32(0, 0X4);
    // 0x80264B78: sb          $t2, 0x38($a0)
    MEM_B(0X38, ctx->r4) = ctx->r10;
    // 0x80264B7C: sb          $zero, 0x3B($a0)
    MEM_B(0X3B, ctx->r4) = 0;
    // 0x80264B80: b           L_80264D3C
    // 0x80264B84: sb          $v1, 0x3E($a0)
    MEM_B(0X3E, ctx->r4) = ctx->r3;
        goto L_80264D3C;
    // 0x80264B84: sb          $v1, 0x3E($a0)
    MEM_B(0X3E, ctx->r4) = ctx->r3;
    // 0x80264B88: addiu       $t3, $zero, 0x5
    ctx->r11 = ADD32(0, 0X5);
    // 0x80264B8C: sb          $t3, 0x38($a0)
    MEM_B(0X38, ctx->r4) = ctx->r11;
    // 0x80264B90: sb          $zero, 0x3A($a0)
    MEM_B(0X3A, ctx->r4) = 0;
    // 0x80264B94: b           L_80264D3C
    // 0x80264B98: sb          $zero, 0x41($a0)
    MEM_B(0X41, ctx->r4) = 0;
        goto L_80264D3C;
    // 0x80264B98: sb          $zero, 0x41($a0)
    MEM_B(0X41, ctx->r4) = 0;
    // 0x80264B9C: lb          $v0, 0x39($a0)
    ctx->r2 = MEM_B(ctx->r4, 0X39);
    // 0x80264BA0: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x80264BA4: beq         $v0, $zero, L_80264BC8
    if (ctx->r2 == 0) {
        // 0x80264BA8: nop
    
            goto L_80264BC8;
    }
    // 0x80264BA8: nop

    // 0x80264BAC: beq         $v0, $v1, L_80264BDC
    if (ctx->r2 == ctx->r3) {
        // 0x80264BB0: addiu       $t4, $zero, 0x2
        ctx->r12 = ADD32(0, 0X2);
            goto L_80264BDC;
    }
    // 0x80264BB0: addiu       $t4, $zero, 0x2
    ctx->r12 = ADD32(0, 0X2);
    // 0x80264BB4: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x80264BB8: beq         $v0, $at, L_80264BF4
    if (ctx->r2 == ctx->r1) {
        // 0x80264BBC: nop
    
            goto L_80264BF4;
    }
    // 0x80264BBC: nop

    // 0x80264BC0: b           L_80264D40
    // 0x80264BC4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80264D40;
    // 0x80264BC4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80264BC8:
    // 0x80264BC8: jal         0x80265D1C
    // 0x80264BCC: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    ovl_80264800_func_80265D1C(rdram, ctx);
        goto after_2;
    // 0x80264BCC: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_2:
    // 0x80264BD0: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x80264BD4: b           L_80264D3C
    // 0x80264BD8: sb          $zero, 0x38($a0)
    MEM_B(0X38, ctx->r4) = 0;
        goto L_80264D3C;
    // 0x80264BD8: sb          $zero, 0x38($a0)
    MEM_B(0X38, ctx->r4) = 0;
L_80264BDC:
    // 0x80264BDC: lb          $t5, 0x3D($a0)
    ctx->r13 = MEM_B(ctx->r4, 0X3D);
    // 0x80264BE0: sb          $t4, 0x39($a0)
    MEM_B(0X39, ctx->r4) = ctx->r12;
    // 0x80264BE4: addu        $t6, $a0, $t5
    ctx->r14 = ADD32(ctx->r4, ctx->r13);
    // 0x80264BE8: lb          $t7, 0x4C($t6)
    ctx->r15 = MEM_B(ctx->r14, 0X4C);
    // 0x80264BEC: b           L_80264D3C
    // 0x80264BF0: sb          $t7, 0x3E($a0)
    MEM_B(0X3E, ctx->r4) = ctx->r15;
        goto L_80264D3C;
    // 0x80264BF0: sb          $t7, 0x3E($a0)
    MEM_B(0X3E, ctx->r4) = ctx->r15;
L_80264BF4:
    // 0x80264BF4: lb          $t9, 0x3D($a0)
    ctx->r25 = MEM_B(ctx->r4, 0X3D);
    // 0x80264BF8: lb          $t8, 0x3E($a0)
    ctx->r24 = MEM_B(ctx->r4, 0X3E);
    // 0x80264BFC: sb          $v1, 0x39($a0)
    MEM_B(0X39, ctx->r4) = ctx->r3;
    // 0x80264C00: addu        $t0, $a0, $t9
    ctx->r8 = ADD32(ctx->r4, ctx->r25);
    // 0x80264C04: b           L_80264D3C
    // 0x80264C08: sb          $t8, 0x4C($t0)
    MEM_B(0X4C, ctx->r8) = ctx->r24;
        goto L_80264D3C;
    // 0x80264C08: sb          $t8, 0x4C($t0)
    MEM_B(0X4C, ctx->r8) = ctx->r24;
    // 0x80264C0C: lb          $t1, 0x3F($a0)
    ctx->r9 = MEM_B(ctx->r4, 0X3F);
    // 0x80264C10: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x80264C14: bne         $t1, $zero, L_80264C24
    if (ctx->r9 != 0) {
        // 0x80264C18: addiu       $t2, $zero, 0x4
        ctx->r10 = ADD32(0, 0X4);
            goto L_80264C24;
    }
    // 0x80264C18: addiu       $t2, $zero, 0x4
    ctx->r10 = ADD32(0, 0X4);
    // 0x80264C1C: b           L_80264C28
    // 0x80264C20: sb          $t2, 0x43($a0)
    MEM_B(0X43, ctx->r4) = ctx->r10;
        goto L_80264C28;
    // 0x80264C20: sb          $t2, 0x43($a0)
    MEM_B(0X43, ctx->r4) = ctx->r10;
L_80264C24:
    // 0x80264C24: sb          $v1, 0x43($a0)
    MEM_B(0X43, ctx->r4) = ctx->r3;
L_80264C28:
    // 0x80264C28: jal         0x80265D1C
    // 0x80264C2C: sb          $zero, 0x38($a0)
    MEM_B(0X38, ctx->r4) = 0;
    ovl_80264800_func_80265D1C(rdram, ctx);
        goto after_3;
    // 0x80264C2C: sb          $zero, 0x38($a0)
    MEM_B(0X38, ctx->r4) = 0;
    after_3:
    // 0x80264C30: b           L_80264D40
    // 0x80264C34: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80264D40;
    // 0x80264C34: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80264C38: lb          $t3, 0x40($a0)
    ctx->r11 = MEM_B(ctx->r4, 0X40);
    // 0x80264C3C: sb          $zero, 0x38($a0)
    MEM_B(0X38, ctx->r4) = 0;
    // 0x80264C40: jal         0x80265D1C
    // 0x80264C44: sb          $t3, 0x44($a0)
    MEM_B(0X44, ctx->r4) = ctx->r11;
    ovl_80264800_func_80265D1C(rdram, ctx);
        goto after_4;
    // 0x80264C44: sb          $t3, 0x44($a0)
    MEM_B(0X44, ctx->r4) = ctx->r11;
    after_4:
    // 0x80264C48: b           L_80264D40
    // 0x80264C4C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80264D40;
    // 0x80264C4C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80264C50: lb          $v0, 0x3B($a0)
    ctx->r2 = MEM_B(ctx->r4, 0X3B);
    // 0x80264C54: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x80264C58: beq         $v0, $zero, L_80264C74
    if (ctx->r2 == 0) {
        // 0x80264C5C: nop
    
            goto L_80264C74;
    }
    // 0x80264C5C: nop

    // 0x80264C60: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x80264C64: beq         $v0, $v1, L_80264C84
    if (ctx->r2 == ctx->r3) {
        // 0x80264C68: nop
    
            goto L_80264C84;
    }
    // 0x80264C68: nop

    // 0x80264C6C: b           L_80264D40
    // 0x80264C70: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80264D40;
    // 0x80264C70: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80264C74:
    // 0x80264C74: sb          $v1, 0x48($a0)
    MEM_B(0X48, ctx->r4) = ctx->r3;
    // 0x80264C78: sb          $zero, 0x45($a0)
    MEM_B(0X45, ctx->r4) = 0;
    // 0x80264C7C: b           L_80264D3C
    // 0x80264C80: sb          $v1, 0x3B($a0)
    MEM_B(0X3B, ctx->r4) = ctx->r3;
        goto L_80264D3C;
    // 0x80264C80: sb          $v1, 0x3B($a0)
    MEM_B(0X3B, ctx->r4) = ctx->r3;
L_80264C84:
    // 0x80264C84: sb          $zero, 0x3B($a0)
    MEM_B(0X3B, ctx->r4) = 0;
    // 0x80264C88: b           L_80264D3C
    // 0x80264C8C: sb          $v1, 0x49($a0)
    MEM_B(0X49, ctx->r4) = ctx->r3;
        goto L_80264D3C;
    // 0x80264C8C: sb          $v1, 0x49($a0)
    MEM_B(0X49, ctx->r4) = ctx->r3;
    // 0x80264C90: lb          $v0, 0x3A($a0)
    ctx->r2 = MEM_B(ctx->r4, 0X3A);
    // 0x80264C94: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x80264C98: beq         $v0, $zero, L_80264CB4
    if (ctx->r2 == 0) {
        // 0x80264C9C: nop
    
            goto L_80264CB4;
    }
    // 0x80264C9C: nop

    // 0x80264CA0: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x80264CA4: beq         $v0, $v1, L_80264CC0
    if (ctx->r2 == ctx->r3) {
        // 0x80264CA8: nop
    
            goto L_80264CC0;
    }
    // 0x80264CA8: nop

    // 0x80264CAC: b           L_80264D40
    // 0x80264CB0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80264D40;
    // 0x80264CB0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80264CB4:
    // 0x80264CB4: sb          $v1, 0x3A($a0)
    MEM_B(0X3A, ctx->r4) = ctx->r3;
    // 0x80264CB8: b           L_80264D3C
    // 0x80264CBC: sb          $v1, 0x42($a0)
    MEM_B(0X42, ctx->r4) = ctx->r3;
        goto L_80264D3C;
    // 0x80264CBC: sb          $v1, 0x42($a0)
    MEM_B(0X42, ctx->r4) = ctx->r3;
L_80264CC0:
    // 0x80264CC0: lb          $v0, 0x42($a0)
    ctx->r2 = MEM_B(ctx->r4, 0X42);
    // 0x80264CC4: nop

    // 0x80264CC8: beq         $v0, $zero, L_80264CE0
    if (ctx->r2 == 0) {
        // 0x80264CCC: nop
    
            goto L_80264CE0;
    }
    // 0x80264CCC: nop

    // 0x80264CD0: beq         $v0, $v1, L_80264D38
    if (ctx->r2 == ctx->r3) {
        // 0x80264CD4: nop
    
            goto L_80264D38;
    }
    // 0x80264CD4: nop

    // 0x80264CD8: b           L_80264D40
    // 0x80264CDC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80264D40;
    // 0x80264CDC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80264CE0:
    // 0x80264CE0: lb          $v0, 0x41($a0)
    ctx->r2 = MEM_B(ctx->r4, 0X41);
    // 0x80264CE4: nop

    // 0x80264CE8: beq         $v0, $zero, L_80264D00
    if (ctx->r2 == 0) {
        // 0x80264CEC: nop
    
            goto L_80264D00;
    }
    // 0x80264CEC: nop

    // 0x80264CF0: beq         $v0, $v1, L_80264D20
    if (ctx->r2 == ctx->r3) {
        // 0x80264CF4: nop
    
            goto L_80264D20;
    }
    // 0x80264CF4: nop

    // 0x80264CF8: b           L_80264D28
    // 0x80264CFC: nop

        goto L_80264D28;
    // 0x80264CFC: nop

L_80264D00:
    // 0x80264D00: jal         0x80265B68
    // 0x80264D04: nop

    ovl_80264800_func_80265B68(rdram, ctx);
        goto after_5;
    // 0x80264D04: nop

    after_5:
    // 0x80264D08: jal         0x80265BA0
    // 0x80264D0C: nop

    ovl_80264800_func_80265BA0(rdram, ctx);
        goto after_6;
    // 0x80264D0C: nop

    after_6:
    // 0x80264D10: jal         0x80265BB4
    // 0x80264D14: nop

    ovl_80264800_func_80265BB4(rdram, ctx);
        goto after_7;
    // 0x80264D14: nop

    after_7:
    // 0x80264D18: b           L_80264D28
    // 0x80264D1C: nop

        goto L_80264D28;
    // 0x80264D1C: nop

L_80264D20:
    // 0x80264D20: jal         0x80265B68
    // 0x80264D24: nop

    ovl_80264800_func_80265B68(rdram, ctx);
        goto after_8;
    // 0x80264D24: nop

    after_8:
L_80264D28:
    // 0x80264D28: jal         0x80265BC4
    // 0x80264D2C: nop

    ovl_80264800_func_80265BC4(rdram, ctx);
        goto after_9;
    // 0x80264D2C: nop

    after_9:
    // 0x80264D30: b           L_80264D40
    // 0x80264D34: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80264D40;
    // 0x80264D34: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80264D38:
    // 0x80264D38: sb          $zero, 0x38($a0)
    MEM_B(0X38, ctx->r4) = 0;
L_80264D3C:
    // 0x80264D3C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80264D40:
    // 0x80264D40: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80264D44: jr          $ra
    // 0x80264D48: nop

    return;
    // 0x80264D48: nop

;}
RECOMP_FUNC void ovl_80264800_func_80264D0C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80264D0C: nop

    // 0x80264D10: jal         0x80265BB4
    // 0x80264D14: nop

    ovl_80264800_func_80265BB4(rdram, ctx);
        goto after_0;
    // 0x80264D14: nop

    after_0:
    // 0x80264D18: b           L_80264D28
    // 0x80264D1C: nop

        goto L_80264D28;
    // 0x80264D1C: nop

    // 0x80264D20: jal         0x80265B68
    // 0x80264D24: nop

    ovl_80264800_func_80265B68(rdram, ctx);
        goto after_1;
    // 0x80264D24: nop

    after_1:
L_80264D28:
    // 0x80264D28: jal         0x80265BC4
    // 0x80264D2C: nop

    ovl_80264800_func_80265BC4(rdram, ctx);
        goto after_2;
    // 0x80264D2C: nop

    after_2:
    // 0x80264D30: b           L_80264D40
    // 0x80264D34: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80264D40;
    // 0x80264D34: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80264D38: sb          $zero, 0x38($a0)
    MEM_B(0X38, ctx->r4) = 0;
    // 0x80264D3C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80264D40:
    // 0x80264D40: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80264D44: jr          $ra
    // 0x80264D48: nop

    return;
    // 0x80264D48: nop

;}
RECOMP_FUNC void ovl_80264800_func_80264D4C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80264D4C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80264D50: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80264D54: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x80264D58: lbu         $t6, 0x38($a0)
    ctx->r14 = MEM_BU(ctx->r4, 0X38);
    // 0x80264D5C: nop

    // 0x80264D60: sltiu       $at, $t6, 0x6
    ctx->r1 = ctx->r14 < 0X6 ? 1 : 0;
    // 0x80264D64: beq         $at, $zero, L_80264E6C
    if (ctx->r1 == 0) {
        // 0x80264D68: sll         $t6, $t6, 2
        ctx->r14 = S32(ctx->r14 << 2);
            goto L_80264E6C;
    }
    // 0x80264D68: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x80264D6C: lui         $at, 0x8027
    ctx->r1 = S32(0X8027 << 16);
    // 0x80264D70: addu        $at, $at, $t6
    gpr jr_addend_80264D7C = ctx->r14;
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x80264D74: lw          $t6, -0x6620($at)
    ctx->r14 = ADD32(ctx->r1, -0X6620);
    // 0x80264D78: nop

    // 0x80264D7C: jr          $t6
    // 0x80264D80: nop

    switch (jr_addend_80264D7C >> 2) {
        case 0: goto L_80264D84; break;
        case 1: goto L_80264D8C; break;
        case 2: goto L_80264DDC; break;
        case 3: goto L_80264E30; break;
        case 4: goto L_80264DEC; break;
        case 5: goto L_80264E40; break;
        default: switch_error(__func__, 0x80264D7C, 0x802699E0);
    }
    // 0x80264D80: nop

L_80264D84:
    // 0x80264D84: b           L_80264E6C
    // 0x80264D88: sb          $zero, 0x3C($a0)
    MEM_B(0X3C, ctx->r4) = 0;
        goto L_80264E6C;
    // 0x80264D88: sb          $zero, 0x3C($a0)
    MEM_B(0X3C, ctx->r4) = 0;
L_80264D8C:
    // 0x80264D8C: lb          $v0, 0x39($a0)
    ctx->r2 = MEM_B(ctx->r4, 0X39);
    // 0x80264D90: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x80264D94: beq         $v0, $zero, L_80264E70
    if (ctx->r2 == 0) {
        // 0x80264D98: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_80264E70;
    }
    // 0x80264D98: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80264D9C: beq         $v0, $v1, L_80264DB4
    if (ctx->r2 == ctx->r3) {
        // 0x80264DA0: addiu       $at, $zero, 0x2
        ctx->r1 = ADD32(0, 0X2);
            goto L_80264DB4;
    }
    // 0x80264DA0: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x80264DA4: beq         $v0, $at, L_80264DC0
    if (ctx->r2 == ctx->r1) {
        // 0x80264DA8: nop
    
            goto L_80264DC0;
    }
    // 0x80264DA8: nop

    // 0x80264DAC: b           L_80264E70
    // 0x80264DB0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80264E70;
    // 0x80264DB0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80264DB4:
    // 0x80264DB4: sb          $zero, 0x39($a0)
    MEM_B(0X39, ctx->r4) = 0;
    // 0x80264DB8: b           L_80264E6C
    // 0x80264DBC: sb          $v1, 0x49($a0)
    MEM_B(0X49, ctx->r4) = ctx->r3;
        goto L_80264E6C;
    // 0x80264DBC: sb          $v1, 0x49($a0)
    MEM_B(0X49, ctx->r4) = ctx->r3;
L_80264DC0:
    // 0x80264DC0: lb          $t7, 0x3D($a0)
    ctx->r15 = MEM_B(ctx->r4, 0X3D);
    // 0x80264DC4: sb          $v1, 0x39($a0)
    MEM_B(0X39, ctx->r4) = ctx->r3;
    // 0x80264DC8: sb          $v1, 0x48($a0)
    MEM_B(0X48, ctx->r4) = ctx->r3;
    // 0x80264DCC: addu        $t8, $a0, $t7
    ctx->r24 = ADD32(ctx->r4, ctx->r15);
    // 0x80264DD0: lb          $t9, 0x4C($t8)
    ctx->r25 = MEM_B(ctx->r24, 0X4C);
    // 0x80264DD4: b           L_80264E6C
    // 0x80264DD8: sb          $t9, 0x3E($a0)
    MEM_B(0X3E, ctx->r4) = ctx->r25;
        goto L_80264E6C;
    // 0x80264DD8: sb          $t9, 0x3E($a0)
    MEM_B(0X3E, ctx->r4) = ctx->r25;
L_80264DDC:
    // 0x80264DDC: jal         0x80265D1C
    // 0x80264DE0: sb          $zero, 0x38($a0)
    MEM_B(0X38, ctx->r4) = 0;
    ovl_80264800_func_80265D1C(rdram, ctx);
        goto after_0;
    // 0x80264DE0: sb          $zero, 0x38($a0)
    MEM_B(0X38, ctx->r4) = 0;
    after_0:
    // 0x80264DE4: b           L_80264E70
    // 0x80264DE8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80264E70;
    // 0x80264DE8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80264DEC:
    // 0x80264DEC: lb          $v0, 0x3B($a0)
    ctx->r2 = MEM_B(ctx->r4, 0X3B);
    // 0x80264DF0: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x80264DF4: beq         $v0, $zero, L_80264E10
    if (ctx->r2 == 0) {
        // 0x80264DF8: nop
    
            goto L_80264E10;
    }
    // 0x80264DF8: nop

    // 0x80264DFC: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x80264E00: beq         $v0, $v1, L_80264E24
    if (ctx->r2 == ctx->r3) {
        // 0x80264E04: nop
    
            goto L_80264E24;
    }
    // 0x80264E04: nop

    // 0x80264E08: b           L_80264E70
    // 0x80264E0C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80264E70;
    // 0x80264E0C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80264E10:
    // 0x80264E10: sb          $v1, 0x49($a0)
    MEM_B(0X49, ctx->r4) = ctx->r3;
    // 0x80264E14: jal         0x80265D1C
    // 0x80264E18: sb          $zero, 0x38($a0)
    MEM_B(0X38, ctx->r4) = 0;
    ovl_80264800_func_80265D1C(rdram, ctx);
        goto after_1;
    // 0x80264E18: sb          $zero, 0x38($a0)
    MEM_B(0X38, ctx->r4) = 0;
    after_1:
    // 0x80264E1C: b           L_80264E70
    // 0x80264E20: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80264E70;
    // 0x80264E20: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80264E24:
    // 0x80264E24: sb          $zero, 0x3B($a0)
    MEM_B(0X3B, ctx->r4) = 0;
    // 0x80264E28: b           L_80264E6C
    // 0x80264E2C: sb          $v1, 0x49($a0)
    MEM_B(0X49, ctx->r4) = ctx->r3;
        goto L_80264E6C;
    // 0x80264E2C: sb          $v1, 0x49($a0)
    MEM_B(0X49, ctx->r4) = ctx->r3;
L_80264E30:
    // 0x80264E30: jal         0x80265D1C
    // 0x80264E34: sb          $zero, 0x38($a0)
    MEM_B(0X38, ctx->r4) = 0;
    ovl_80264800_func_80265D1C(rdram, ctx);
        goto after_2;
    // 0x80264E34: sb          $zero, 0x38($a0)
    MEM_B(0X38, ctx->r4) = 0;
    after_2:
    // 0x80264E38: b           L_80264E70
    // 0x80264E3C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80264E70;
    // 0x80264E3C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80264E40:
    // 0x80264E40: lb          $v0, 0x3A($a0)
    ctx->r2 = MEM_B(ctx->r4, 0X3A);
    // 0x80264E44: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x80264E48: beq         $v0, $zero, L_80264E60
    if (ctx->r2 == 0) {
        // 0x80264E4C: nop
    
            goto L_80264E60;
    }
    // 0x80264E4C: nop

    // 0x80264E50: beq         $v0, $v1, L_80264E68
    if (ctx->r2 == ctx->r3) {
        // 0x80264E54: nop
    
            goto L_80264E68;
    }
    // 0x80264E54: nop

    // 0x80264E58: b           L_80264E70
    // 0x80264E5C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80264E70;
    // 0x80264E5C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80264E60:
    // 0x80264E60: b           L_80264E6C
    // 0x80264E64: sb          $zero, 0x38($a0)
    MEM_B(0X38, ctx->r4) = 0;
        goto L_80264E6C;
    // 0x80264E64: sb          $zero, 0x38($a0)
    MEM_B(0X38, ctx->r4) = 0;
L_80264E68:
    // 0x80264E68: sb          $zero, 0x3A($a0)
    MEM_B(0X3A, ctx->r4) = 0;
L_80264E6C:
    // 0x80264E6C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80264E70:
    // 0x80264E70: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80264E74: jr          $ra
    // 0x80264E78: nop

    return;
    // 0x80264E78: nop

;}
RECOMP_FUNC void ovl_80264800_func_80264E0C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80264E0C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80264E10: sb          $v1, 0x49($a0)
    MEM_B(0X49, ctx->r4) = ctx->r3;
    // 0x80264E14: jal         0x80265D1C
    // 0x80264E18: sb          $zero, 0x38($a0)
    MEM_B(0X38, ctx->r4) = 0;
    ovl_80264800_func_80265D1C(rdram, ctx);
        goto after_0;
    // 0x80264E18: sb          $zero, 0x38($a0)
    MEM_B(0X38, ctx->r4) = 0;
    after_0:
    // 0x80264E1C: b           L_80264E70
    // 0x80264E20: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80264E70;
    // 0x80264E20: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80264E24: sb          $zero, 0x3B($a0)
    MEM_B(0X3B, ctx->r4) = 0;
    // 0x80264E28: b           L_80264E6C
    // 0x80264E2C: sb          $v1, 0x49($a0)
    MEM_B(0X49, ctx->r4) = ctx->r3;
        goto L_80264E6C;
    // 0x80264E2C: sb          $v1, 0x49($a0)
    MEM_B(0X49, ctx->r4) = ctx->r3;
    // 0x80264E30: jal         0x80265D1C
    // 0x80264E34: sb          $zero, 0x38($a0)
    MEM_B(0X38, ctx->r4) = 0;
    ovl_80264800_func_80265D1C(rdram, ctx);
        goto after_1;
    // 0x80264E34: sb          $zero, 0x38($a0)
    MEM_B(0X38, ctx->r4) = 0;
    after_1:
    // 0x80264E38: b           L_80264E70
    // 0x80264E3C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80264E70;
    // 0x80264E3C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80264E40: lb          $v0, 0x3A($a0)
    ctx->r2 = MEM_B(ctx->r4, 0X3A);
    // 0x80264E44: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x80264E48: beq         $v0, $zero, L_80264E60
    if (ctx->r2 == 0) {
        // 0x80264E4C: nop
    
            goto L_80264E60;
    }
    // 0x80264E4C: nop

    // 0x80264E50: beq         $v0, $v1, L_80264E68
    if (ctx->r2 == ctx->r3) {
        // 0x80264E54: nop
    
            goto L_80264E68;
    }
    // 0x80264E54: nop

    // 0x80264E58: b           L_80264E70
    // 0x80264E5C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80264E70;
    // 0x80264E5C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80264E60:
    // 0x80264E60: b           L_80264E6C
    // 0x80264E64: sb          $zero, 0x38($a0)
    MEM_B(0X38, ctx->r4) = 0;
        goto L_80264E6C;
    // 0x80264E64: sb          $zero, 0x38($a0)
    MEM_B(0X38, ctx->r4) = 0;
L_80264E68:
    // 0x80264E68: sb          $zero, 0x3A($a0)
    MEM_B(0X3A, ctx->r4) = 0;
L_80264E6C:
    // 0x80264E6C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80264E70:
    // 0x80264E70: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80264E74: jr          $ra
    // 0x80264E78: nop

    return;
    // 0x80264E78: nop

;}
RECOMP_FUNC void ovl_80264800_func_80264E70(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80264E70: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80264E74: jr          $ra
    // 0x80264E78: nop

    return;
    // 0x80264E78: nop

;}
RECOMP_FUNC void ovl_80264800_func_80264E7C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80264E7C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80264E80: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80264E84: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x80264E88: lbu         $t6, 0x38($a0)
    ctx->r14 = MEM_BU(ctx->r4, 0X38);
    // 0x80264E8C: or          $a2, $a0, $zero
    ctx->r6 = ctx->r4 | 0;
    // 0x80264E90: sltiu       $at, $t6, 0x6
    ctx->r1 = ctx->r14 < 0X6 ? 1 : 0;
    // 0x80264E94: beq         $at, $zero, L_80264FF0
    if (ctx->r1 == 0) {
        // 0x80264E98: sll         $t6, $t6, 2
        ctx->r14 = S32(ctx->r14 << 2);
            goto L_80264FF0;
    }
    // 0x80264E98: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x80264E9C: lui         $at, 0x8027
    ctx->r1 = S32(0X8027 << 16);
    // 0x80264EA0: addu        $at, $at, $t6
    gpr jr_addend_80264EAC = ctx->r14;
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x80264EA4: lw          $t6, -0x6608($at)
    ctx->r14 = ADD32(ctx->r1, -0X6608);
    // 0x80264EA8: nop

    // 0x80264EAC: jr          $t6
    // 0x80264EB0: nop

    switch (jr_addend_80264EAC >> 2) {
        case 0: goto L_80264FF0; break;
        case 1: goto L_80264EB4; break;
        case 2: goto L_80264FF0; break;
        case 3: goto L_80264FF0; break;
        case 4: goto L_80264FC8; break;
        case 5: goto L_80264FF0; break;
        default: switch_error(__func__, 0x80264EAC, 0x802699F8);
    }
    // 0x80264EB0: nop

L_80264EB4:
    // 0x80264EB4: lb          $v0, 0x39($a2)
    ctx->r2 = MEM_B(ctx->r6, 0X39);
    // 0x80264EB8: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x80264EBC: beq         $v0, $zero, L_80264EDC
    if (ctx->r2 == 0) {
        // 0x80264EC0: nop
    
            goto L_80264EDC;
    }
    // 0x80264EC0: nop

    // 0x80264EC4: beq         $v0, $v1, L_80264F20
    if (ctx->r2 == ctx->r3) {
        // 0x80264EC8: addiu       $at, $zero, 0x2
        ctx->r1 = ADD32(0, 0X2);
            goto L_80264F20;
    }
    // 0x80264EC8: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x80264ECC: beq         $v0, $at, L_80264FA4
    if (ctx->r2 == ctx->r1) {
        // 0x80264ED0: lui         $a1, 0x8027
        ctx->r5 = S32(0X8027 << 16);
            goto L_80264FA4;
    }
    // 0x80264ED0: lui         $a1, 0x8027
    ctx->r5 = S32(0X8027 << 16);
    // 0x80264ED4: b           L_80264FF4
    // 0x80264ED8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80264FF4;
    // 0x80264ED8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80264EDC:
    // 0x80264EDC: lb          $t7, 0x43($a2)
    ctx->r15 = MEM_B(ctx->r6, 0X43);
    // 0x80264EE0: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x80264EE4: bne         $t7, $at, L_80264FF4
    if (ctx->r15 != ctx->r1) {
        // 0x80264EE8: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_80264FF4;
    }
    // 0x80264EE8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80264EEC: jal         0x80035734
    // 0x80264EF0: sw          $a2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r6;
    func_80035734(rdram, ctx);
        goto after_0;
    // 0x80264EF0: sw          $a2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r6;
    after_0:
    // 0x80264EF4: lw          $a2, 0x18($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X18);
    // 0x80264EF8: addiu       $t8, $zero, 0x3
    ctx->r24 = ADD32(0, 0X3);
    // 0x80264EFC: sb          $t8, 0x3D($a2)
    MEM_B(0X3D, ctx->r6) = ctx->r24;
    // 0x80264F00: lb          $t9, 0x3D($a2)
    ctx->r25 = MEM_B(ctx->r6, 0X3D);
    // 0x80264F04: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x80264F08: sb          $v1, 0x39($a2)
    MEM_B(0X39, ctx->r6) = ctx->r3;
    // 0x80264F0C: sb          $v1, 0x48($a2)
    MEM_B(0X48, ctx->r6) = ctx->r3;
    // 0x80264F10: addu        $t0, $a2, $t9
    ctx->r8 = ADD32(ctx->r6, ctx->r25);
    // 0x80264F14: lb          $t1, 0x4C($t0)
    ctx->r9 = MEM_B(ctx->r8, 0X4C);
    // 0x80264F18: b           L_80264FF0
    // 0x80264F1C: sb          $t1, 0x3E($a2)
    MEM_B(0X3E, ctx->r6) = ctx->r9;
        goto L_80264FF0;
    // 0x80264F1C: sb          $t1, 0x3E($a2)
    MEM_B(0X3E, ctx->r6) = ctx->r9;
L_80264F20:
    // 0x80264F20: jal         0x80035734
    // 0x80264F24: sw          $a2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r6;
    func_80035734(rdram, ctx);
        goto after_1;
    // 0x80264F24: sw          $a2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r6;
    after_1:
    // 0x80264F28: lw          $a2, 0x18($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X18);
    // 0x80264F2C: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x80264F30: lb          $t2, 0x43($a2)
    ctx->r10 = MEM_B(ctx->r6, 0X43);
    // 0x80264F34: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x80264F38: bne         $t2, $at, L_80264F98
    if (ctx->r10 != ctx->r1) {
        // 0x80264F3C: nop
    
            goto L_80264F98;
    }
    // 0x80264F3C: nop

    // 0x80264F40: lb          $a0, 0x3D($a2)
    ctx->r4 = MEM_B(ctx->r6, 0X3D);
    // 0x80264F44: nop

    // 0x80264F48: beq         $a0, $zero, L_80264F58
    if (ctx->r4 == 0) {
        // 0x80264F4C: nop
    
            goto L_80264F58;
    }
    // 0x80264F4C: nop

    // 0x80264F50: bne         $v1, $a0, L_80264F64
    if (ctx->r3 != ctx->r4) {
        // 0x80264F54: lui         $a1, 0x8027
        ctx->r5 = S32(0X8027 << 16);
            goto L_80264F64;
    }
    // 0x80264F54: lui         $a1, 0x8027
    ctx->r5 = S32(0X8027 << 16);
L_80264F58:
    // 0x80264F58: sb          $zero, 0x39($a2)
    MEM_B(0X39, ctx->r6) = 0;
    // 0x80264F5C: b           L_80264FF0
    // 0x80264F60: sb          $v1, 0x49($a2)
    MEM_B(0X49, ctx->r6) = ctx->r3;
        goto L_80264FF0;
    // 0x80264F60: sb          $v1, 0x49($a2)
    MEM_B(0X49, ctx->r6) = ctx->r3;
L_80264F64:
    // 0x80264F64: addiu       $a1, $a1, -0x6B6C
    ctx->r5 = ADD32(ctx->r5, -0X6B6C);
    // 0x80264F68: jal         0x8004BF74
    // 0x80264F6C: sw          $a2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r6;
    func_8004BF74(rdram, ctx);
        goto after_2;
    // 0x80264F6C: sw          $a2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r6;
    after_2:
    // 0x80264F70: lw          $a2, 0x18($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X18);
    // 0x80264F74: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x80264F78: sb          $v0, 0x3D($a2)
    MEM_B(0X3D, ctx->r6) = ctx->r2;
    // 0x80264F7C: lb          $t3, 0x3D($a2)
    ctx->r11 = MEM_B(ctx->r6, 0X3D);
    // 0x80264F80: nop

    // 0x80264F84: addu        $t4, $a2, $t3
    ctx->r12 = ADD32(ctx->r6, ctx->r11);
    // 0x80264F88: lb          $t5, 0x4C($t4)
    ctx->r13 = MEM_B(ctx->r12, 0X4C);
    // 0x80264F8C: sb          $v1, 0x48($a2)
    MEM_B(0X48, ctx->r6) = ctx->r3;
    // 0x80264F90: b           L_80264FF0
    // 0x80264F94: sb          $t5, 0x3E($a2)
    MEM_B(0X3E, ctx->r6) = ctx->r13;
        goto L_80264FF0;
    // 0x80264F94: sb          $t5, 0x3E($a2)
    MEM_B(0X3E, ctx->r6) = ctx->r13;
L_80264F98:
    // 0x80264F98: sb          $zero, 0x39($a2)
    MEM_B(0X39, ctx->r6) = 0;
    // 0x80264F9C: b           L_80264FF0
    // 0x80264FA0: sb          $v1, 0x49($a2)
    MEM_B(0X49, ctx->r6) = ctx->r3;
        goto L_80264FF0;
    // 0x80264FA0: sb          $v1, 0x49($a2)
    MEM_B(0X49, ctx->r6) = ctx->r3;
L_80264FA4:
    // 0x80264FA4: lb          $a0, 0x3E($a2)
    ctx->r4 = MEM_B(ctx->r6, 0X3E);
    // 0x80264FA8: sw          $a2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r6;
    // 0x80264FAC: jal         0x8004BF30
    // 0x80264FB0: addiu       $a1, $a1, -0x6B40
    ctx->r5 = ADD32(ctx->r5, -0X6B40);
    func_8004BF30(rdram, ctx);
        goto after_3;
    // 0x80264FB0: addiu       $a1, $a1, -0x6B40
    ctx->r5 = ADD32(ctx->r5, -0X6B40);
    after_3:
    // 0x80264FB4: lw          $a2, 0x18($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X18);
    // 0x80264FB8: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x80264FBC: sb          $v0, 0x3E($a2)
    MEM_B(0X3E, ctx->r6) = ctx->r2;
    // 0x80264FC0: b           L_80264FF0
    // 0x80264FC4: sb          $v1, 0x48($a2)
    MEM_B(0X48, ctx->r6) = ctx->r3;
        goto L_80264FF0;
    // 0x80264FC4: sb          $v1, 0x48($a2)
    MEM_B(0X48, ctx->r6) = ctx->r3;
L_80264FC8:
    // 0x80264FC8: lb          $t6, 0x3B($a2)
    ctx->r14 = MEM_B(ctx->r6, 0X3B);
    // 0x80264FCC: lui         $a1, 0x8027
    ctx->r5 = S32(0X8027 << 16);
    // 0x80264FD0: bne         $t6, $zero, L_80264FF0
    if (ctx->r14 != 0) {
        // 0x80264FD4: addiu       $a1, $a1, -0x6B10
        ctx->r5 = ADD32(ctx->r5, -0X6B10);
            goto L_80264FF0;
    }
    // 0x80264FD4: addiu       $a1, $a1, -0x6B10
    ctx->r5 = ADD32(ctx->r5, -0X6B10);
    // 0x80264FD8: lb          $a0, 0x3E($a2)
    ctx->r4 = MEM_B(ctx->r6, 0X3E);
    // 0x80264FDC: jal         0x8004BF30
    // 0x80264FE0: sw          $a2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r6;
    func_8004BF30(rdram, ctx);
        goto after_4;
    // 0x80264FE0: sw          $a2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r6;
    after_4:
    // 0x80264FE4: lw          $a2, 0x18($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X18);
    // 0x80264FE8: nop

    // 0x80264FEC: sb          $v0, 0x3E($a2)
    MEM_B(0X3E, ctx->r6) = ctx->r2;
L_80264FF0:
    // 0x80264FF0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80264FF4:
    // 0x80264FF4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80264FF8: jr          $ra
    // 0x80264FFC: nop

    return;
    // 0x80264FFC: nop

;}
RECOMP_FUNC void ovl_80264800_func_80265000(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80265000: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80265004: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80265008: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x8026500C: lbu         $t6, 0x38($a0)
    ctx->r14 = MEM_BU(ctx->r4, 0X38);
    // 0x80265010: or          $a2, $a0, $zero
    ctx->r6 = ctx->r4 | 0;
    // 0x80265014: sltiu       $at, $t6, 0x6
    ctx->r1 = ctx->r14 < 0X6 ? 1 : 0;
    // 0x80265018: beq         $at, $zero, L_8026514C
    if (ctx->r1 == 0) {
        // 0x8026501C: sll         $t6, $t6, 2
        ctx->r14 = S32(ctx->r14 << 2);
            goto L_8026514C;
    }
    // 0x8026501C: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x80265020: lui         $at, 0x8027
    ctx->r1 = S32(0X8027 << 16);
    // 0x80265024: addu        $at, $at, $t6
    gpr jr_addend_80265030 = ctx->r14;
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x80265028: lw          $t6, -0x65F0($at)
    ctx->r14 = ADD32(ctx->r1, -0X65F0);
    // 0x8026502C: nop

    // 0x80265030: jr          $t6
    // 0x80265034: nop

    switch (jr_addend_80265030 >> 2) {
        case 0: goto L_8026514C; break;
        case 1: goto L_80265038; break;
        case 2: goto L_8026514C; break;
        case 3: goto L_8026514C; break;
        case 4: goto L_80265124; break;
        case 5: goto L_8026514C; break;
        default: switch_error(__func__, 0x80265030, 0x80269A10);
    }
    // 0x80265034: nop

L_80265038:
    // 0x80265038: lb          $v0, 0x39($a2)
    ctx->r2 = MEM_B(ctx->r6, 0X39);
    // 0x8026503C: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x80265040: beq         $v0, $zero, L_80265060
    if (ctx->r2 == 0) {
        // 0x80265044: nop
    
            goto L_80265060;
    }
    // 0x80265044: nop

    // 0x80265048: beq         $v0, $v1, L_80265090
    if (ctx->r2 == ctx->r3) {
        // 0x8026504C: addiu       $at, $zero, 0x2
        ctx->r1 = ADD32(0, 0X2);
            goto L_80265090;
    }
    // 0x8026504C: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x80265050: beq         $v0, $at, L_80265104
    if (ctx->r2 == ctx->r1) {
        // 0x80265054: lui         $a1, 0x8027
        ctx->r5 = S32(0X8027 << 16);
            goto L_80265104;
    }
    // 0x80265054: lui         $a1, 0x8027
    ctx->r5 = S32(0X8027 << 16);
    // 0x80265058: b           L_80265150
    // 0x8026505C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80265150;
    // 0x8026505C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80265060:
    // 0x80265060: jal         0x80035734
    // 0x80265064: sw          $a2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r6;
    func_80035734(rdram, ctx);
        goto after_0;
    // 0x80265064: sw          $a2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r6;
    after_0:
    // 0x80265068: lw          $a2, 0x18($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X18);
    // 0x8026506C: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x80265070: sb          $zero, 0x3D($a2)
    MEM_B(0X3D, ctx->r6) = 0;
    // 0x80265074: lb          $t7, 0x3D($a2)
    ctx->r15 = MEM_B(ctx->r6, 0X3D);
    // 0x80265078: sb          $v1, 0x39($a2)
    MEM_B(0X39, ctx->r6) = ctx->r3;
    // 0x8026507C: sb          $v1, 0x48($a2)
    MEM_B(0X48, ctx->r6) = ctx->r3;
    // 0x80265080: addu        $t8, $a2, $t7
    ctx->r24 = ADD32(ctx->r6, ctx->r15);
    // 0x80265084: lb          $t9, 0x4C($t8)
    ctx->r25 = MEM_B(ctx->r24, 0X4C);
    // 0x80265088: b           L_8026514C
    // 0x8026508C: sb          $t9, 0x3E($a2)
    MEM_B(0X3E, ctx->r6) = ctx->r25;
        goto L_8026514C;
    // 0x8026508C: sb          $t9, 0x3E($a2)
    MEM_B(0X3E, ctx->r6) = ctx->r25;
L_80265090:
    // 0x80265090: lb          $t0, 0x43($a2)
    ctx->r8 = MEM_B(ctx->r6, 0X43);
    // 0x80265094: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x80265098: bne         $t0, $at, L_80265150
    if (ctx->r8 != ctx->r1) {
        // 0x8026509C: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_80265150;
    }
    // 0x8026509C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802650A0: jal         0x80035734
    // 0x802650A4: sw          $a2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r6;
    func_80035734(rdram, ctx);
        goto after_1;
    // 0x802650A4: sw          $a2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r6;
    after_1:
    // 0x802650A8: lw          $a2, 0x18($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X18);
    // 0x802650AC: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x802650B0: lb          $a0, 0x3D($a2)
    ctx->r4 = MEM_B(ctx->r6, 0X3D);
    // 0x802650B4: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x802650B8: beq         $a0, $at, L_802650C8
    if (ctx->r4 == ctx->r1) {
        // 0x802650BC: addiu       $at, $zero, 0x3
        ctx->r1 = ADD32(0, 0X3);
            goto L_802650C8;
    }
    // 0x802650BC: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x802650C0: bne         $a0, $at, L_802650D4
    if (ctx->r4 != ctx->r1) {
        // 0x802650C4: lui         $a1, 0x8027
        ctx->r5 = S32(0X8027 << 16);
            goto L_802650D4;
    }
    // 0x802650C4: lui         $a1, 0x8027
    ctx->r5 = S32(0X8027 << 16);
L_802650C8:
    // 0x802650C8: sb          $zero, 0x39($a2)
    MEM_B(0X39, ctx->r6) = 0;
    // 0x802650CC: b           L_8026514C
    // 0x802650D0: sb          $v1, 0x49($a2)
    MEM_B(0X49, ctx->r6) = ctx->r3;
        goto L_8026514C;
    // 0x802650D0: sb          $v1, 0x49($a2)
    MEM_B(0X49, ctx->r6) = ctx->r3;
L_802650D4:
    // 0x802650D4: addiu       $a1, $a1, -0x6B6C
    ctx->r5 = ADD32(ctx->r5, -0X6B6C);
    // 0x802650D8: jal         0x8004C000
    // 0x802650DC: sw          $a2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r6;
    func_8004C000(rdram, ctx);
        goto after_2;
    // 0x802650DC: sw          $a2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r6;
    after_2:
    // 0x802650E0: lw          $a2, 0x18($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X18);
    // 0x802650E4: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x802650E8: sb          $v0, 0x3D($a2)
    MEM_B(0X3D, ctx->r6) = ctx->r2;
    // 0x802650EC: lb          $t1, 0x3D($a2)
    ctx->r9 = MEM_B(ctx->r6, 0X3D);
    // 0x802650F0: sb          $v1, 0x48($a2)
    MEM_B(0X48, ctx->r6) = ctx->r3;
    // 0x802650F4: addu        $t2, $a2, $t1
    ctx->r10 = ADD32(ctx->r6, ctx->r9);
    // 0x802650F8: lb          $t3, 0x4C($t2)
    ctx->r11 = MEM_B(ctx->r10, 0X4C);
    // 0x802650FC: b           L_8026514C
    // 0x80265100: sb          $t3, 0x3E($a2)
    MEM_B(0X3E, ctx->r6) = ctx->r11;
        goto L_8026514C;
    // 0x80265100: sb          $t3, 0x3E($a2)
    MEM_B(0X3E, ctx->r6) = ctx->r11;
L_80265104:
    // 0x80265104: sb          $v1, 0x48($a2)
    MEM_B(0X48, ctx->r6) = ctx->r3;
    // 0x80265108: lb          $a0, 0x3E($a2)
    ctx->r4 = MEM_B(ctx->r6, 0X3E);
    // 0x8026510C: sw          $a2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r6;
    // 0x80265110: jal         0x8004BFBC
    // 0x80265114: addiu       $a1, $a1, -0x6B40
    ctx->r5 = ADD32(ctx->r5, -0X6B40);
    func_8004BFBC(rdram, ctx);
        goto after_3;
    // 0x80265114: addiu       $a1, $a1, -0x6B40
    ctx->r5 = ADD32(ctx->r5, -0X6B40);
    after_3:
    // 0x80265118: lw          $a2, 0x18($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X18);
    // 0x8026511C: b           L_8026514C
    // 0x80265120: sb          $v0, 0x3E($a2)
    MEM_B(0X3E, ctx->r6) = ctx->r2;
        goto L_8026514C;
    // 0x80265120: sb          $v0, 0x3E($a2)
    MEM_B(0X3E, ctx->r6) = ctx->r2;
L_80265124:
    // 0x80265124: lb          $t4, 0x3B($a2)
    ctx->r12 = MEM_B(ctx->r6, 0X3B);
    // 0x80265128: lui         $a1, 0x8027
    ctx->r5 = S32(0X8027 << 16);
    // 0x8026512C: bne         $t4, $zero, L_8026514C
    if (ctx->r12 != 0) {
        // 0x80265130: addiu       $a1, $a1, -0x6B10
        ctx->r5 = ADD32(ctx->r5, -0X6B10);
            goto L_8026514C;
    }
    // 0x80265130: addiu       $a1, $a1, -0x6B10
    ctx->r5 = ADD32(ctx->r5, -0X6B10);
    // 0x80265134: lb          $a0, 0x3E($a2)
    ctx->r4 = MEM_B(ctx->r6, 0X3E);
    // 0x80265138: jal         0x8004BFBC
    // 0x8026513C: sw          $a2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r6;
    func_8004BFBC(rdram, ctx);
        goto after_4;
    // 0x8026513C: sw          $a2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r6;
    after_4:
    // 0x80265140: lw          $a2, 0x18($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X18);
    // 0x80265144: nop

    // 0x80265148: sb          $v0, 0x3E($a2)
    MEM_B(0X3E, ctx->r6) = ctx->r2;
L_8026514C:
    // 0x8026514C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80265150:
    // 0x80265150: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80265154: jr          $ra
    // 0x80265158: nop

    return;
    // 0x80265158: nop

;}
RECOMP_FUNC void ovl_80264800_func_802650B4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802650B4: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x802650B8: beq         $a0, $at, L_802650C8
    if (ctx->r4 == ctx->r1) {
        // 0x802650BC: addiu       $at, $zero, 0x3
        ctx->r1 = ADD32(0, 0X3);
            goto L_802650C8;
    }
    // 0x802650BC: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x802650C0: bne         $a0, $at, L_802650D4
    if (ctx->r4 != ctx->r1) {
        // 0x802650C4: lui         $a1, 0x8027
        ctx->r5 = S32(0X8027 << 16);
            goto L_802650D4;
    }
    // 0x802650C4: lui         $a1, 0x8027
    ctx->r5 = S32(0X8027 << 16);
L_802650C8:
    // 0x802650C8: sb          $zero, 0x39($a2)
    MEM_B(0X39, ctx->r6) = 0;
    // 0x802650CC: b           L_8026514C
    // 0x802650D0: sb          $v1, 0x49($a2)
    MEM_B(0X49, ctx->r6) = ctx->r3;
        goto L_8026514C;
    // 0x802650D0: sb          $v1, 0x49($a2)
    MEM_B(0X49, ctx->r6) = ctx->r3;
L_802650D4:
    // 0x802650D4: addiu       $a1, $a1, -0x6B6C
    ctx->r5 = ADD32(ctx->r5, -0X6B6C);
    // 0x802650D8: jal         0x8004C000
    // 0x802650DC: sw          $a2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r6;
    func_8004C000(rdram, ctx);
        goto after_0;
    // 0x802650DC: sw          $a2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r6;
    after_0:
    // 0x802650E0: lw          $a2, 0x18($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X18);
    // 0x802650E4: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x802650E8: sb          $v0, 0x3D($a2)
    MEM_B(0X3D, ctx->r6) = ctx->r2;
    // 0x802650EC: lb          $t1, 0x3D($a2)
    ctx->r9 = MEM_B(ctx->r6, 0X3D);
    // 0x802650F0: sb          $v1, 0x48($a2)
    MEM_B(0X48, ctx->r6) = ctx->r3;
    // 0x802650F4: addu        $t2, $a2, $t1
    ctx->r10 = ADD32(ctx->r6, ctx->r9);
    // 0x802650F8: lb          $t3, 0x4C($t2)
    ctx->r11 = MEM_B(ctx->r10, 0X4C);
    // 0x802650FC: b           L_8026514C
    // 0x80265100: sb          $t3, 0x3E($a2)
    MEM_B(0X3E, ctx->r6) = ctx->r11;
        goto L_8026514C;
    // 0x80265100: sb          $t3, 0x3E($a2)
    MEM_B(0X3E, ctx->r6) = ctx->r11;
    // 0x80265104: sb          $v1, 0x48($a2)
    MEM_B(0X48, ctx->r6) = ctx->r3;
    // 0x80265108: lb          $a0, 0x3E($a2)
    ctx->r4 = MEM_B(ctx->r6, 0X3E);
    // 0x8026510C: sw          $a2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r6;
    // 0x80265110: jal         0x8004BFBC
    // 0x80265114: addiu       $a1, $a1, -0x6B40
    ctx->r5 = ADD32(ctx->r5, -0X6B40);
    func_8004BFBC(rdram, ctx);
        goto after_1;
    // 0x80265114: addiu       $a1, $a1, -0x6B40
    ctx->r5 = ADD32(ctx->r5, -0X6B40);
    after_1:
    // 0x80265118: lw          $a2, 0x18($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X18);
    // 0x8026511C: b           L_8026514C
    // 0x80265120: sb          $v0, 0x3E($a2)
    MEM_B(0X3E, ctx->r6) = ctx->r2;
        goto L_8026514C;
    // 0x80265120: sb          $v0, 0x3E($a2)
    MEM_B(0X3E, ctx->r6) = ctx->r2;
    // 0x80265124: lb          $t4, 0x3B($a2)
    ctx->r12 = MEM_B(ctx->r6, 0X3B);
    // 0x80265128: lui         $a1, 0x8027
    ctx->r5 = S32(0X8027 << 16);
    // 0x8026512C: bne         $t4, $zero, L_8026514C
    if (ctx->r12 != 0) {
        // 0x80265130: addiu       $a1, $a1, -0x6B10
        ctx->r5 = ADD32(ctx->r5, -0X6B10);
            goto L_8026514C;
    }
    // 0x80265130: addiu       $a1, $a1, -0x6B10
    ctx->r5 = ADD32(ctx->r5, -0X6B10);
    // 0x80265134: lb          $a0, 0x3E($a2)
    ctx->r4 = MEM_B(ctx->r6, 0X3E);
    // 0x80265138: jal         0x8004BFBC
    // 0x8026513C: sw          $a2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r6;
    func_8004BFBC(rdram, ctx);
        goto after_2;
    // 0x8026513C: sw          $a2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r6;
    after_2:
    // 0x80265140: lw          $a2, 0x18($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X18);
    // 0x80265144: nop

    // 0x80265148: sb          $v0, 0x3E($a2)
    MEM_B(0X3E, ctx->r6) = ctx->r2;
L_8026514C:
    // 0x8026514C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80265150: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80265154: jr          $ra
    // 0x80265158: nop

    return;
    // 0x80265158: nop

;}
RECOMP_FUNC void ovl_80264800_func_8026515C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8026515C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80265160: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80265164: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80265168: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x8026516C: lbu         $t6, 0x38($a0)
    ctx->r14 = MEM_BU(ctx->r4, 0X38);
    // 0x80265170: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x80265174: sltiu       $at, $t6, 0x6
    ctx->r1 = ctx->r14 < 0X6 ? 1 : 0;
    // 0x80265178: beq         $at, $zero, L_802652C8
    if (ctx->r1 == 0) {
        // 0x8026517C: sll         $t6, $t6, 2
        ctx->r14 = S32(ctx->r14 << 2);
            goto L_802652C8;
    }
    // 0x8026517C: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x80265180: lui         $at, 0x8027
    ctx->r1 = S32(0X8027 << 16);
    // 0x80265184: addu        $at, $at, $t6
    gpr jr_addend_80265190 = ctx->r14;
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x80265188: lw          $t6, -0x65D8($at)
    ctx->r14 = ADD32(ctx->r1, -0X65D8);
    // 0x8026518C: nop

    // 0x80265190: jr          $t6
    // 0x80265194: nop

    switch (jr_addend_80265190 >> 2) {
        case 0: goto L_80265198; break;
        case 1: goto L_802651B0; break;
        case 2: goto L_80265230; break;
        case 3: goto L_80265248; break;
        case 4: goto L_80265260; break;
        case 5: goto L_80265284; break;
        default: switch_error(__func__, 0x80265190, 0x80269A28);
    }
    // 0x80265194: nop

L_80265198:
    // 0x80265198: lb          $a0, 0x3C($s0)
    ctx->r4 = MEM_B(ctx->r16, 0X3C);
    // 0x8026519C: lui         $a1, 0x8027
    ctx->r5 = S32(0X8027 << 16);
    // 0x802651A0: jal         0x8004C0D4
    // 0x802651A4: addiu       $a1, $a1, -0x6B8C
    ctx->r5 = ADD32(ctx->r5, -0X6B8C);
    func_8004C0D4(rdram, ctx);
        goto after_0;
    // 0x802651A4: addiu       $a1, $a1, -0x6B8C
    ctx->r5 = ADD32(ctx->r5, -0X6B8C);
    after_0:
    // 0x802651A8: b           L_802652C8
    // 0x802651AC: sb          $v0, 0x3C($s0)
    MEM_B(0X3C, ctx->r16) = ctx->r2;
        goto L_802652C8;
    // 0x802651AC: sb          $v0, 0x3C($s0)
    MEM_B(0X3C, ctx->r16) = ctx->r2;
L_802651B0:
    // 0x802651B0: lb          $v0, 0x39($s0)
    ctx->r2 = MEM_B(ctx->r16, 0X39);
    // 0x802651B4: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x802651B8: beq         $v0, $zero, L_802652CC
    if (ctx->r2 == 0) {
        // 0x802651BC: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_802652CC;
    }
    // 0x802651BC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x802651C0: beq         $v0, $at, L_802651D8
    if (ctx->r2 == ctx->r1) {
        // 0x802651C4: addiu       $at, $zero, 0x2
        ctx->r1 = ADD32(0, 0X2);
            goto L_802651D8;
    }
    // 0x802651C4: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x802651C8: beq         $v0, $at, L_80265214
    if (ctx->r2 == ctx->r1) {
        // 0x802651CC: lui         $a1, 0x8027
        ctx->r5 = S32(0X8027 << 16);
            goto L_80265214;
    }
    // 0x802651CC: lui         $a1, 0x8027
    ctx->r5 = S32(0X8027 << 16);
    // 0x802651D0: b           L_802652CC
    // 0x802651D4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_802652CC;
    // 0x802651D4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_802651D8:
    // 0x802651D8: lb          $t7, 0x43($s0)
    ctx->r15 = MEM_B(ctx->r16, 0X43);
    // 0x802651DC: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x802651E0: bne         $t7, $at, L_802652C8
    if (ctx->r15 != ctx->r1) {
        // 0x802651E4: lui         $a1, 0x8027
        ctx->r5 = S32(0X8027 << 16);
            goto L_802652C8;
    }
    // 0x802651E4: lui         $a1, 0x8027
    ctx->r5 = S32(0X8027 << 16);
    // 0x802651E8: lb          $a0, 0x3D($s0)
    ctx->r4 = MEM_B(ctx->r16, 0X3D);
    // 0x802651EC: jal         0x8004C0D4
    // 0x802651F0: addiu       $a1, $a1, -0x6B6C
    ctx->r5 = ADD32(ctx->r5, -0X6B6C);
    func_8004C0D4(rdram, ctx);
        goto after_1;
    // 0x802651F0: addiu       $a1, $a1, -0x6B6C
    ctx->r5 = ADD32(ctx->r5, -0X6B6C);
    after_1:
    // 0x802651F4: sb          $v0, 0x3D($s0)
    MEM_B(0X3D, ctx->r16) = ctx->r2;
    // 0x802651F8: lb          $t9, 0x3D($s0)
    ctx->r25 = MEM_B(ctx->r16, 0X3D);
    // 0x802651FC: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x80265200: sb          $t8, 0x48($s0)
    MEM_B(0X48, ctx->r16) = ctx->r24;
    // 0x80265204: addu        $t0, $s0, $t9
    ctx->r8 = ADD32(ctx->r16, ctx->r25);
    // 0x80265208: lb          $t1, 0x4C($t0)
    ctx->r9 = MEM_B(ctx->r8, 0X4C);
    // 0x8026520C: b           L_802652C8
    // 0x80265210: sb          $t1, 0x3E($s0)
    MEM_B(0X3E, ctx->r16) = ctx->r9;
        goto L_802652C8;
    // 0x80265210: sb          $t1, 0x3E($s0)
    MEM_B(0X3E, ctx->r16) = ctx->r9;
L_80265214:
    // 0x80265214: lb          $a0, 0x3E($s0)
    ctx->r4 = MEM_B(ctx->r16, 0X3E);
    // 0x80265218: jal         0x8004C0D4
    // 0x8026521C: addiu       $a1, $a1, -0x6B40
    ctx->r5 = ADD32(ctx->r5, -0X6B40);
    func_8004C0D4(rdram, ctx);
        goto after_2;
    // 0x8026521C: addiu       $a1, $a1, -0x6B40
    ctx->r5 = ADD32(ctx->r5, -0X6B40);
    after_2:
    // 0x80265220: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x80265224: sb          $v0, 0x3E($s0)
    MEM_B(0X3E, ctx->r16) = ctx->r2;
    // 0x80265228: b           L_802652C8
    // 0x8026522C: sb          $t2, 0x48($s0)
    MEM_B(0X48, ctx->r16) = ctx->r10;
        goto L_802652C8;
    // 0x8026522C: sb          $t2, 0x48($s0)
    MEM_B(0X48, ctx->r16) = ctx->r10;
L_80265230:
    // 0x80265230: lb          $a0, 0x3F($s0)
    ctx->r4 = MEM_B(ctx->r16, 0X3F);
    // 0x80265234: lui         $a1, 0x8027
    ctx->r5 = S32(0X8027 << 16);
    // 0x80265238: jal         0x8004C0D4
    // 0x8026523C: addiu       $a1, $a1, -0x6B4C
    ctx->r5 = ADD32(ctx->r5, -0X6B4C);
    func_8004C0D4(rdram, ctx);
        goto after_3;
    // 0x8026523C: addiu       $a1, $a1, -0x6B4C
    ctx->r5 = ADD32(ctx->r5, -0X6B4C);
    after_3:
    // 0x80265240: b           L_802652C8
    // 0x80265244: sb          $v0, 0x3F($s0)
    MEM_B(0X3F, ctx->r16) = ctx->r2;
        goto L_802652C8;
    // 0x80265244: sb          $v0, 0x3F($s0)
    MEM_B(0X3F, ctx->r16) = ctx->r2;
L_80265248:
    // 0x80265248: lb          $a0, 0x40($s0)
    ctx->r4 = MEM_B(ctx->r16, 0X40);
    // 0x8026524C: lui         $a1, 0x8027
    ctx->r5 = S32(0X8027 << 16);
    // 0x80265250: jal         0x8004C0D4
    // 0x80265254: addiu       $a1, $a1, -0x6AE0
    ctx->r5 = ADD32(ctx->r5, -0X6AE0);
    func_8004C0D4(rdram, ctx);
        goto after_4;
    // 0x80265254: addiu       $a1, $a1, -0x6AE0
    ctx->r5 = ADD32(ctx->r5, -0X6AE0);
    after_4:
    // 0x80265258: b           L_802652C8
    // 0x8026525C: sb          $v0, 0x40($s0)
    MEM_B(0X40, ctx->r16) = ctx->r2;
        goto L_802652C8;
    // 0x8026525C: sb          $v0, 0x40($s0)
    MEM_B(0X40, ctx->r16) = ctx->r2;
L_80265260:
    // 0x80265260: lb          $t3, 0x3B($s0)
    ctx->r11 = MEM_B(ctx->r16, 0X3B);
    // 0x80265264: lui         $a1, 0x8027
    ctx->r5 = S32(0X8027 << 16);
    // 0x80265268: bne         $t3, $zero, L_802652CC
    if (ctx->r11 != 0) {
        // 0x8026526C: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_802652CC;
    }
    // 0x8026526C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80265270: lb          $a0, 0x3E($s0)
    ctx->r4 = MEM_B(ctx->r16, 0X3E);
    // 0x80265274: jal         0x8004C0D4
    // 0x80265278: addiu       $a1, $a1, -0x6B10
    ctx->r5 = ADD32(ctx->r5, -0X6B10);
    func_8004C0D4(rdram, ctx);
        goto after_5;
    // 0x80265278: addiu       $a1, $a1, -0x6B10
    ctx->r5 = ADD32(ctx->r5, -0X6B10);
    after_5:
    // 0x8026527C: b           L_802652C8
    // 0x80265280: sb          $v0, 0x3E($s0)
    MEM_B(0X3E, ctx->r16) = ctx->r2;
        goto L_802652C8;
    // 0x80265280: sb          $v0, 0x3E($s0)
    MEM_B(0X3E, ctx->r16) = ctx->r2;
L_80265284:
    // 0x80265284: lb          $v0, 0x3A($s0)
    ctx->r2 = MEM_B(ctx->r16, 0X3A);
    // 0x80265288: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8026528C: beq         $v0, $zero, L_802652A4
    if (ctx->r2 == 0) {
        // 0x80265290: lui         $a1, 0x8027
        ctx->r5 = S32(0X8027 << 16);
            goto L_802652A4;
    }
    // 0x80265290: lui         $a1, 0x8027
    ctx->r5 = S32(0X8027 << 16);
    // 0x80265294: beq         $v0, $at, L_802652B8
    if (ctx->r2 == ctx->r1) {
        // 0x80265298: lui         $a1, 0x8027
        ctx->r5 = S32(0X8027 << 16);
            goto L_802652B8;
    }
    // 0x80265298: lui         $a1, 0x8027
    ctx->r5 = S32(0X8027 << 16);
    // 0x8026529C: b           L_802652CC
    // 0x802652A0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_802652CC;
    // 0x802652A0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_802652A4:
    // 0x802652A4: lb          $a0, 0x41($s0)
    ctx->r4 = MEM_B(ctx->r16, 0X41);
    // 0x802652A8: jal         0x8004C0D4
    // 0x802652AC: addiu       $a1, $a1, -0x6AD0
    ctx->r5 = ADD32(ctx->r5, -0X6AD0);
    func_8004C0D4(rdram, ctx);
        goto after_6;
    // 0x802652AC: addiu       $a1, $a1, -0x6AD0
    ctx->r5 = ADD32(ctx->r5, -0X6AD0);
    after_6:
    // 0x802652B0: b           L_802652C8
    // 0x802652B4: sb          $v0, 0x41($s0)
    MEM_B(0X41, ctx->r16) = ctx->r2;
        goto L_802652C8;
    // 0x802652B4: sb          $v0, 0x41($s0)
    MEM_B(0X41, ctx->r16) = ctx->r2;
L_802652B8:
    // 0x802652B8: lb          $a0, 0x42($s0)
    ctx->r4 = MEM_B(ctx->r16, 0X42);
    // 0x802652BC: jal         0x8004C0D4
    // 0x802652C0: addiu       $a1, $a1, -0x6AC4
    ctx->r5 = ADD32(ctx->r5, -0X6AC4);
    func_8004C0D4(rdram, ctx);
        goto after_7;
    // 0x802652C0: addiu       $a1, $a1, -0x6AC4
    ctx->r5 = ADD32(ctx->r5, -0X6AC4);
    after_7:
    // 0x802652C4: sb          $v0, 0x42($s0)
    MEM_B(0X42, ctx->r16) = ctx->r2;
L_802652C8:
    // 0x802652C8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_802652CC:
    // 0x802652CC: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x802652D0: jr          $ra
    // 0x802652D4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x802652D4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void ovl_80264800_func_80265238(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80265238: jal         0x8004C0D4
    // 0x8026523C: addiu       $a1, $a1, -0x6B4C
    ctx->r5 = ADD32(ctx->r5, -0X6B4C);
    func_8004C0D4(rdram, ctx);
        goto after_0;
    // 0x8026523C: addiu       $a1, $a1, -0x6B4C
    ctx->r5 = ADD32(ctx->r5, -0X6B4C);
    after_0:
    // 0x80265240: b           L_802652C8
    // 0x80265244: sb          $v0, 0x3F($s0)
    MEM_B(0X3F, ctx->r16) = ctx->r2;
        goto L_802652C8;
    // 0x80265244: sb          $v0, 0x3F($s0)
    MEM_B(0X3F, ctx->r16) = ctx->r2;
    // 0x80265248: lb          $a0, 0x40($s0)
    ctx->r4 = MEM_B(ctx->r16, 0X40);
    // 0x8026524C: lui         $a1, 0x8027
    ctx->r5 = S32(0X8027 << 16);
    // 0x80265250: jal         0x8004C0D4
    // 0x80265254: addiu       $a1, $a1, -0x6AE0
    ctx->r5 = ADD32(ctx->r5, -0X6AE0);
    func_8004C0D4(rdram, ctx);
        goto after_1;
    // 0x80265254: addiu       $a1, $a1, -0x6AE0
    ctx->r5 = ADD32(ctx->r5, -0X6AE0);
    after_1:
    // 0x80265258: b           L_802652C8
    // 0x8026525C: sb          $v0, 0x40($s0)
    MEM_B(0X40, ctx->r16) = ctx->r2;
        goto L_802652C8;
    // 0x8026525C: sb          $v0, 0x40($s0)
    MEM_B(0X40, ctx->r16) = ctx->r2;
    // 0x80265260: lb          $t3, 0x3B($s0)
    ctx->r11 = MEM_B(ctx->r16, 0X3B);
    // 0x80265264: lui         $a1, 0x8027
    ctx->r5 = S32(0X8027 << 16);
    // 0x80265268: bne         $t3, $zero, L_802652CC
    if (ctx->r11 != 0) {
        // 0x8026526C: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_802652CC;
    }
    // 0x8026526C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80265270: lb          $a0, 0x3E($s0)
    ctx->r4 = MEM_B(ctx->r16, 0X3E);
    // 0x80265274: jal         0x8004C0D4
    // 0x80265278: addiu       $a1, $a1, -0x6B10
    ctx->r5 = ADD32(ctx->r5, -0X6B10);
    func_8004C0D4(rdram, ctx);
        goto after_2;
    // 0x80265278: addiu       $a1, $a1, -0x6B10
    ctx->r5 = ADD32(ctx->r5, -0X6B10);
    after_2:
    // 0x8026527C: b           L_802652C8
    // 0x80265280: sb          $v0, 0x3E($s0)
    MEM_B(0X3E, ctx->r16) = ctx->r2;
        goto L_802652C8;
    // 0x80265280: sb          $v0, 0x3E($s0)
    MEM_B(0X3E, ctx->r16) = ctx->r2;
    // 0x80265284: lb          $v0, 0x3A($s0)
    ctx->r2 = MEM_B(ctx->r16, 0X3A);
    // 0x80265288: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8026528C: beq         $v0, $zero, L_802652A4
    if (ctx->r2 == 0) {
        // 0x80265290: lui         $a1, 0x8027
        ctx->r5 = S32(0X8027 << 16);
            goto L_802652A4;
    }
    // 0x80265290: lui         $a1, 0x8027
    ctx->r5 = S32(0X8027 << 16);
    // 0x80265294: beq         $v0, $at, L_802652B8
    if (ctx->r2 == ctx->r1) {
        // 0x80265298: lui         $a1, 0x8027
        ctx->r5 = S32(0X8027 << 16);
            goto L_802652B8;
    }
    // 0x80265298: lui         $a1, 0x8027
    ctx->r5 = S32(0X8027 << 16);
    // 0x8026529C: b           L_802652CC
    // 0x802652A0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_802652CC;
    // 0x802652A0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_802652A4:
    // 0x802652A4: lb          $a0, 0x41($s0)
    ctx->r4 = MEM_B(ctx->r16, 0X41);
    // 0x802652A8: jal         0x8004C0D4
    // 0x802652AC: addiu       $a1, $a1, -0x6AD0
    ctx->r5 = ADD32(ctx->r5, -0X6AD0);
    func_8004C0D4(rdram, ctx);
        goto after_3;
    // 0x802652AC: addiu       $a1, $a1, -0x6AD0
    ctx->r5 = ADD32(ctx->r5, -0X6AD0);
    after_3:
    // 0x802652B0: b           L_802652C8
    // 0x802652B4: sb          $v0, 0x41($s0)
    MEM_B(0X41, ctx->r16) = ctx->r2;
        goto L_802652C8;
    // 0x802652B4: sb          $v0, 0x41($s0)
    MEM_B(0X41, ctx->r16) = ctx->r2;
L_802652B8:
    // 0x802652B8: lb          $a0, 0x42($s0)
    ctx->r4 = MEM_B(ctx->r16, 0X42);
    // 0x802652BC: jal         0x8004C0D4
    // 0x802652C0: addiu       $a1, $a1, -0x6AC4
    ctx->r5 = ADD32(ctx->r5, -0X6AC4);
    func_8004C0D4(rdram, ctx);
        goto after_4;
    // 0x802652C0: addiu       $a1, $a1, -0x6AC4
    ctx->r5 = ADD32(ctx->r5, -0X6AC4);
    after_4:
    // 0x802652C4: sb          $v0, 0x42($s0)
    MEM_B(0X42, ctx->r16) = ctx->r2;
L_802652C8:
    // 0x802652C8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_802652CC:
    // 0x802652CC: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x802652D0: jr          $ra
    // 0x802652D4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x802652D4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void ovl_80264800_func_802652D8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802652D8: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x802652DC: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x802652E0: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x802652E4: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x802652E8: lbu         $t6, 0x38($a0)
    ctx->r14 = MEM_BU(ctx->r4, 0X38);
    // 0x802652EC: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x802652F0: sltiu       $at, $t6, 0x6
    ctx->r1 = ctx->r14 < 0X6 ? 1 : 0;
    // 0x802652F4: beq         $at, $zero, L_80265444
    if (ctx->r1 == 0) {
        // 0x802652F8: sll         $t6, $t6, 2
        ctx->r14 = S32(ctx->r14 << 2);
            goto L_80265444;
    }
    // 0x802652F8: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x802652FC: lui         $at, 0x8027
    ctx->r1 = S32(0X8027 << 16);
    // 0x80265300: addu        $at, $at, $t6
    gpr jr_addend_8026530C = ctx->r14;
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x80265304: lw          $t6, -0x65C0($at)
    ctx->r14 = ADD32(ctx->r1, -0X65C0);
    // 0x80265308: nop

    // 0x8026530C: jr          $t6
    // 0x80265310: nop

    switch (jr_addend_8026530C >> 2) {
        case 0: goto L_80265314; break;
        case 1: goto L_8026532C; break;
        case 2: goto L_802653AC; break;
        case 3: goto L_802653C4; break;
        case 4: goto L_802653DC; break;
        case 5: goto L_80265400; break;
        default: switch_error(__func__, 0x8026530C, 0x80269A40);
    }
    // 0x80265310: nop

L_80265314:
    // 0x80265314: lb          $a0, 0x3C($s0)
    ctx->r4 = MEM_B(ctx->r16, 0X3C);
    // 0x80265318: lui         $a1, 0x8027
    ctx->r5 = S32(0X8027 << 16);
    // 0x8026531C: jal         0x8004C048
    // 0x80265320: addiu       $a1, $a1, -0x6B8C
    ctx->r5 = ADD32(ctx->r5, -0X6B8C);
    func_8004C048(rdram, ctx);
        goto after_0;
    // 0x80265320: addiu       $a1, $a1, -0x6B8C
    ctx->r5 = ADD32(ctx->r5, -0X6B8C);
    after_0:
    // 0x80265324: b           L_80265444
    // 0x80265328: sb          $v0, 0x3C($s0)
    MEM_B(0X3C, ctx->r16) = ctx->r2;
        goto L_80265444;
    // 0x80265328: sb          $v0, 0x3C($s0)
    MEM_B(0X3C, ctx->r16) = ctx->r2;
L_8026532C:
    // 0x8026532C: lb          $v0, 0x39($s0)
    ctx->r2 = MEM_B(ctx->r16, 0X39);
    // 0x80265330: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80265334: beq         $v0, $zero, L_80265448
    if (ctx->r2 == 0) {
        // 0x80265338: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_80265448;
    }
    // 0x80265338: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8026533C: beq         $v0, $at, L_80265354
    if (ctx->r2 == ctx->r1) {
        // 0x80265340: addiu       $at, $zero, 0x2
        ctx->r1 = ADD32(0, 0X2);
            goto L_80265354;
    }
    // 0x80265340: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x80265344: beq         $v0, $at, L_80265390
    if (ctx->r2 == ctx->r1) {
        // 0x80265348: lui         $a1, 0x8027
        ctx->r5 = S32(0X8027 << 16);
            goto L_80265390;
    }
    // 0x80265348: lui         $a1, 0x8027
    ctx->r5 = S32(0X8027 << 16);
    // 0x8026534C: b           L_80265448
    // 0x80265350: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_80265448;
    // 0x80265350: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_80265354:
    // 0x80265354: lb          $t7, 0x43($s0)
    ctx->r15 = MEM_B(ctx->r16, 0X43);
    // 0x80265358: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x8026535C: bne         $t7, $at, L_80265444
    if (ctx->r15 != ctx->r1) {
        // 0x80265360: lui         $a1, 0x8027
        ctx->r5 = S32(0X8027 << 16);
            goto L_80265444;
    }
    // 0x80265360: lui         $a1, 0x8027
    ctx->r5 = S32(0X8027 << 16);
    // 0x80265364: lb          $a0, 0x3D($s0)
    ctx->r4 = MEM_B(ctx->r16, 0X3D);
    // 0x80265368: jal         0x8004C048
    // 0x8026536C: addiu       $a1, $a1, -0x6B6C
    ctx->r5 = ADD32(ctx->r5, -0X6B6C);
    func_8004C048(rdram, ctx);
        goto after_1;
    // 0x8026536C: addiu       $a1, $a1, -0x6B6C
    ctx->r5 = ADD32(ctx->r5, -0X6B6C);
    after_1:
    // 0x80265370: sb          $v0, 0x3D($s0)
    MEM_B(0X3D, ctx->r16) = ctx->r2;
    // 0x80265374: lb          $t9, 0x3D($s0)
    ctx->r25 = MEM_B(ctx->r16, 0X3D);
    // 0x80265378: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x8026537C: sb          $t8, 0x48($s0)
    MEM_B(0X48, ctx->r16) = ctx->r24;
    // 0x80265380: addu        $t0, $s0, $t9
    ctx->r8 = ADD32(ctx->r16, ctx->r25);
    // 0x80265384: lb          $t1, 0x4C($t0)
    ctx->r9 = MEM_B(ctx->r8, 0X4C);
    // 0x80265388: b           L_80265444
    // 0x8026538C: sb          $t1, 0x3E($s0)
    MEM_B(0X3E, ctx->r16) = ctx->r9;
        goto L_80265444;
    // 0x8026538C: sb          $t1, 0x3E($s0)
    MEM_B(0X3E, ctx->r16) = ctx->r9;
L_80265390:
    // 0x80265390: lb          $a0, 0x3E($s0)
    ctx->r4 = MEM_B(ctx->r16, 0X3E);
    // 0x80265394: jal         0x8004C048
    // 0x80265398: addiu       $a1, $a1, -0x6B40
    ctx->r5 = ADD32(ctx->r5, -0X6B40);
    func_8004C048(rdram, ctx);
        goto after_2;
    // 0x80265398: addiu       $a1, $a1, -0x6B40
    ctx->r5 = ADD32(ctx->r5, -0X6B40);
    after_2:
    // 0x8026539C: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x802653A0: sb          $v0, 0x3E($s0)
    MEM_B(0X3E, ctx->r16) = ctx->r2;
    // 0x802653A4: b           L_80265444
    // 0x802653A8: sb          $t2, 0x48($s0)
    MEM_B(0X48, ctx->r16) = ctx->r10;
        goto L_80265444;
    // 0x802653A8: sb          $t2, 0x48($s0)
    MEM_B(0X48, ctx->r16) = ctx->r10;
L_802653AC:
    // 0x802653AC: lb          $a0, 0x3F($s0)
    ctx->r4 = MEM_B(ctx->r16, 0X3F);
    // 0x802653B0: lui         $a1, 0x8027
    ctx->r5 = S32(0X8027 << 16);
    // 0x802653B4: jal         0x8004C048
    // 0x802653B8: addiu       $a1, $a1, -0x6B4C
    ctx->r5 = ADD32(ctx->r5, -0X6B4C);
    func_8004C048(rdram, ctx);
        goto after_3;
    // 0x802653B8: addiu       $a1, $a1, -0x6B4C
    ctx->r5 = ADD32(ctx->r5, -0X6B4C);
    after_3:
    // 0x802653BC: b           L_80265444
    // 0x802653C0: sb          $v0, 0x3F($s0)
    MEM_B(0X3F, ctx->r16) = ctx->r2;
        goto L_80265444;
    // 0x802653C0: sb          $v0, 0x3F($s0)
    MEM_B(0X3F, ctx->r16) = ctx->r2;
L_802653C4:
    // 0x802653C4: lb          $a0, 0x40($s0)
    ctx->r4 = MEM_B(ctx->r16, 0X40);
    // 0x802653C8: lui         $a1, 0x8027
    ctx->r5 = S32(0X8027 << 16);
    // 0x802653CC: jal         0x8004C048
    // 0x802653D0: addiu       $a1, $a1, -0x6AE0
    ctx->r5 = ADD32(ctx->r5, -0X6AE0);
    func_8004C048(rdram, ctx);
        goto after_4;
    // 0x802653D0: addiu       $a1, $a1, -0x6AE0
    ctx->r5 = ADD32(ctx->r5, -0X6AE0);
    after_4:
    // 0x802653D4: b           L_80265444
    // 0x802653D8: sb          $v0, 0x40($s0)
    MEM_B(0X40, ctx->r16) = ctx->r2;
        goto L_80265444;
    // 0x802653D8: sb          $v0, 0x40($s0)
    MEM_B(0X40, ctx->r16) = ctx->r2;
L_802653DC:
    // 0x802653DC: lb          $t3, 0x3B($s0)
    ctx->r11 = MEM_B(ctx->r16, 0X3B);
    // 0x802653E0: lui         $a1, 0x8027
    ctx->r5 = S32(0X8027 << 16);
    // 0x802653E4: bne         $t3, $zero, L_80265448
    if (ctx->r11 != 0) {
        // 0x802653E8: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_80265448;
    }
    // 0x802653E8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x802653EC: lb          $a0, 0x3E($s0)
    ctx->r4 = MEM_B(ctx->r16, 0X3E);
    // 0x802653F0: jal         0x8004C048
    // 0x802653F4: addiu       $a1, $a1, -0x6B10
    ctx->r5 = ADD32(ctx->r5, -0X6B10);
    func_8004C048(rdram, ctx);
        goto after_5;
    // 0x802653F4: addiu       $a1, $a1, -0x6B10
    ctx->r5 = ADD32(ctx->r5, -0X6B10);
    after_5:
    // 0x802653F8: b           L_80265444
    // 0x802653FC: sb          $v0, 0x3E($s0)
    MEM_B(0X3E, ctx->r16) = ctx->r2;
        goto L_80265444;
    // 0x802653FC: sb          $v0, 0x3E($s0)
    MEM_B(0X3E, ctx->r16) = ctx->r2;
L_80265400:
    // 0x80265400: lb          $v0, 0x3A($s0)
    ctx->r2 = MEM_B(ctx->r16, 0X3A);
    // 0x80265404: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80265408: beq         $v0, $zero, L_80265420
    if (ctx->r2 == 0) {
        // 0x8026540C: lui         $a1, 0x8027
        ctx->r5 = S32(0X8027 << 16);
            goto L_80265420;
    }
    // 0x8026540C: lui         $a1, 0x8027
    ctx->r5 = S32(0X8027 << 16);
    // 0x80265410: beq         $v0, $at, L_80265434
    if (ctx->r2 == ctx->r1) {
        // 0x80265414: lui         $a1, 0x8027
        ctx->r5 = S32(0X8027 << 16);
            goto L_80265434;
    }
    // 0x80265414: lui         $a1, 0x8027
    ctx->r5 = S32(0X8027 << 16);
    // 0x80265418: b           L_80265448
    // 0x8026541C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_80265448;
    // 0x8026541C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_80265420:
    // 0x80265420: lb          $a0, 0x41($s0)
    ctx->r4 = MEM_B(ctx->r16, 0X41);
    // 0x80265424: jal         0x8004C048
    // 0x80265428: addiu       $a1, $a1, -0x6AD0
    ctx->r5 = ADD32(ctx->r5, -0X6AD0);
    func_8004C048(rdram, ctx);
        goto after_6;
    // 0x80265428: addiu       $a1, $a1, -0x6AD0
    ctx->r5 = ADD32(ctx->r5, -0X6AD0);
    after_6:
    // 0x8026542C: b           L_80265444
    // 0x80265430: sb          $v0, 0x41($s0)
    MEM_B(0X41, ctx->r16) = ctx->r2;
        goto L_80265444;
    // 0x80265430: sb          $v0, 0x41($s0)
    MEM_B(0X41, ctx->r16) = ctx->r2;
L_80265434:
    // 0x80265434: lb          $a0, 0x42($s0)
    ctx->r4 = MEM_B(ctx->r16, 0X42);
    // 0x80265438: jal         0x8004C048
    // 0x8026543C: addiu       $a1, $a1, -0x6AC4
    ctx->r5 = ADD32(ctx->r5, -0X6AC4);
    func_8004C048(rdram, ctx);
        goto after_7;
    // 0x8026543C: addiu       $a1, $a1, -0x6AC4
    ctx->r5 = ADD32(ctx->r5, -0X6AC4);
    after_7:
    // 0x80265440: sb          $v0, 0x42($s0)
    MEM_B(0X42, ctx->r16) = ctx->r2;
L_80265444:
    // 0x80265444: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_80265448:
    // 0x80265448: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8026544C: jr          $ra
    // 0x80265450: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x80265450: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void ovl_80264800_func_80265454(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80265454: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80265458: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8026545C: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x80265460: lb          $t6, 0x38($a0)
    ctx->r14 = MEM_B(ctx->r4, 0X38);
    // 0x80265464: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x80265468: bne         $t6, $at, L_8026548C
    if (ctx->r14 != ctx->r1) {
        // 0x8026546C: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_8026548C;
    }
    // 0x8026546C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80265470: lb          $t7, 0x3B($a0)
    ctx->r15 = MEM_B(ctx->r4, 0X3B);
    // 0x80265474: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80265478: bne         $t7, $at, L_8026548C
    if (ctx->r15 != ctx->r1) {
        // 0x8026547C: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_8026548C;
    }
    // 0x8026547C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80265480: jal         0x80267840
    // 0x80265484: nop

    ovl_80264800_func_80267840(rdram, ctx);
        goto after_0;
    // 0x80265484: nop

    after_0:
    // 0x80265488: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8026548C:
    // 0x8026548C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80265490: jr          $ra
    // 0x80265494: nop

    return;
    // 0x80265494: nop

;}
RECOMP_FUNC void ovl_80264800_func_80265480(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80265480: jal         0x80267840
    // 0x80265484: nop

    ovl_80264800_func_80267840(rdram, ctx);
        goto after_0;
    // 0x80265484: nop

    after_0:
    // 0x80265488: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8026548C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80265490: jr          $ra
    // 0x80265494: nop

    return;
    // 0x80265494: nop

;}
RECOMP_FUNC void ovl_80264800_func_80265498(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80265498: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8026549C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802654A0: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x802654A4: lb          $t6, 0x38($a0)
    ctx->r14 = MEM_B(ctx->r4, 0X38);
    // 0x802654A8: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x802654AC: bne         $t6, $at, L_802654D0
    if (ctx->r14 != ctx->r1) {
        // 0x802654B0: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_802654D0;
    }
    // 0x802654B0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802654B4: lb          $t7, 0x3B($a0)
    ctx->r15 = MEM_B(ctx->r4, 0X3B);
    // 0x802654B8: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x802654BC: bne         $t7, $at, L_802654D0
    if (ctx->r15 != ctx->r1) {
        // 0x802654C0: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_802654D0;
    }
    // 0x802654C0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802654C4: jal         0x802677D0
    // 0x802654C8: nop

    ovl_80264800_func_802677D0(rdram, ctx);
        goto after_0;
    // 0x802654C8: nop

    after_0:
    // 0x802654CC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_802654D0:
    // 0x802654D0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x802654D4: jr          $ra
    // 0x802654D8: nop

    return;
    // 0x802654D8: nop

;}
RECOMP_FUNC void ovl_80264800_func_802654DC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802654DC: jr          $ra
    // 0x802654E0: nop

    return;
    // 0x802654E0: nop

;}
RECOMP_FUNC void ovl_80264800_func_802654E4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802654E4: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x802654E8: jr          $ra
    // 0x802654EC: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    return;
    // 0x802654EC: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
;}
RECOMP_FUNC void ovl_80264800_func_802654F0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802654F0: lui         $a1, 0x801B
    ctx->r5 = S32(0X801B << 16);
    // 0x802654F4: addiu       $a1, $a1, 0x1CF0
    ctx->r5 = ADD32(ctx->r5, 0X1CF0);
    // 0x802654F8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802654FC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80265500: lw          $a0, 0x0($a1)
    ctx->r4 = MEM_W(ctx->r5, 0X0);
    // 0x80265504: jal         0x8006F5B8
    // 0x80265508: nop

    func_8006F5B8(rdram, ctx);
        goto after_0;
    // 0x80265508: nop

    after_0:
    // 0x8026550C: lui         $a1, 0x801B
    ctx->r5 = S32(0X801B << 16);
    // 0x80265510: addiu       $a1, $a1, 0x1CF0
    ctx->r5 = ADD32(ctx->r5, 0X1CF0);
    // 0x80265514: lw          $t6, 0x0($a1)
    ctx->r14 = MEM_W(ctx->r5, 0X0);
    // 0x80265518: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8026551C: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x80265520: addiu       $a0, $a0, -0x32B0
    ctx->r4 = ADD32(ctx->r4, -0X32B0);
    // 0x80265524: sb          $v0, 0x2F($t6)
    MEM_B(0X2F, ctx->r14) = ctx->r2;
    // 0x80265528: lb          $t7, 0x44($a0)
    ctx->r15 = MEM_B(ctx->r4, 0X44);
    // 0x8026552C: addiu       $a2, $zero, 0xA94
    ctx->r6 = ADD32(0, 0XA94);
    // 0x80265530: multu       $t7, $a2
    result = U64(U32(ctx->r15)) * U64(U32(ctx->r6)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80265534: lui         $v1, 0x8012
    ctx->r3 = S32(0X8012 << 16);
    // 0x80265538: addiu       $v1, $v1, -0x2CF0
    ctx->r3 = ADD32(ctx->r3, -0X2CF0);
    // 0x8026553C: addiu       $t1, $zero, 0x4
    ctx->r9 = ADD32(0, 0X4);
    // 0x80265540: mflo        $t8
    ctx->r24 = lo;
    // 0x80265544: addu        $t9, $v1, $t8
    ctx->r25 = ADD32(ctx->r3, ctx->r24);
    // 0x80265548: lbu         $t0, 0x86A($t9)
    ctx->r8 = MEM_BU(ctx->r25, 0X86A);
    // 0x8026554C: nop

    // 0x80265550: bne         $t0, $zero, L_80265564
    if (ctx->r8 != 0) {
        // 0x80265554: nop
    
            goto L_80265564;
    }
    // 0x80265554: nop

    // 0x80265558: lw          $t2, 0x0($a1)
    ctx->r10 = MEM_W(ctx->r5, 0X0);
    // 0x8026555C: b           L_80265570
    // 0x80265560: sb          $t1, 0x43($t2)
    MEM_B(0X43, ctx->r10) = ctx->r9;
        goto L_80265570;
    // 0x80265560: sb          $t1, 0x43($t2)
    MEM_B(0X43, ctx->r10) = ctx->r9;
L_80265564:
    // 0x80265564: lw          $t3, 0x0($a1)
    ctx->r11 = MEM_W(ctx->r5, 0X0);
    // 0x80265568: nop

    // 0x8026556C: sb          $v0, 0x43($t3)
    MEM_B(0X43, ctx->r11) = ctx->r2;
L_80265570:
    // 0x80265570: lb          $t4, 0x44($a0)
    ctx->r12 = MEM_B(ctx->r4, 0X44);
    // 0x80265574: lw          $t8, 0x0($a1)
    ctx->r24 = MEM_W(ctx->r5, 0X0);
    // 0x80265578: multu       $t4, $a2
    result = U64(U32(ctx->r12)) * U64(U32(ctx->r6)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8026557C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x80265580: mflo        $t5
    ctx->r13 = lo;
    // 0x80265584: addu        $t6, $v1, $t5
    ctx->r14 = ADD32(ctx->r3, ctx->r13);
    // 0x80265588: lbu         $t7, 0x869($t6)
    ctx->r15 = MEM_BU(ctx->r14, 0X869);
    // 0x8026558C: nop

    // 0x80265590: sb          $t7, 0x44($t8)
    MEM_B(0X44, ctx->r24) = ctx->r15;
L_80265594:
    // 0x80265594: lb          $t9, 0x44($a0)
    ctx->r25 = MEM_B(ctx->r4, 0X44);
    // 0x80265598: lw          $t4, 0x0($a1)
    ctx->r12 = MEM_W(ctx->r5, 0X0);
    // 0x8026559C: sll         $t0, $t9, 2
    ctx->r8 = S32(ctx->r25 << 2);
    // 0x802655A0: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x802655A4: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x802655A8: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x802655AC: sll         $t0, $t0, 3
    ctx->r8 = S32(ctx->r8 << 3);
    // 0x802655B0: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x802655B4: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x802655B8: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x802655BC: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x802655C0: addu        $t1, $v1, $t0
    ctx->r9 = ADD32(ctx->r3, ctx->r8);
    // 0x802655C4: addu        $t2, $t1, $v0
    ctx->r10 = ADD32(ctx->r9, ctx->r2);
    // 0x802655C8: addu        $t5, $t4, $v0
    ctx->r13 = ADD32(ctx->r12, ctx->r2);
    // 0x802655CC: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x802655D0: lbu         $t3, 0x86B($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X86B);
    // 0x802655D4: andi        $t6, $v0, 0xFF
    ctx->r14 = ctx->r2 & 0XFF;
    // 0x802655D8: slti        $at, $t6, 0x4
    ctx->r1 = SIGNED(ctx->r14) < 0X4 ? 1 : 0;
    // 0x802655DC: or          $v0, $t6, $zero
    ctx->r2 = ctx->r14 | 0;
    // 0x802655E0: bne         $at, $zero, L_80265594
    if (ctx->r1 != 0) {
        // 0x802655E4: sb          $t3, 0x4C($t5)
        MEM_B(0X4C, ctx->r13) = ctx->r11;
            goto L_80265594;
    }
    // 0x802655E4: sb          $t3, 0x4C($t5)
    MEM_B(0X4C, ctx->r13) = ctx->r11;
    // 0x802655E8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802655EC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x802655F0: jr          $ra
    // 0x802655F4: nop

    return;
    // 0x802655F4: nop

;}
RECOMP_FUNC void ovl_80264800_func_802655F8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802655F8: lui         $v0, 0x801B
    ctx->r2 = S32(0X801B << 16);
    // 0x802655FC: lw          $v0, 0x1CF0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X1CF0);
    // 0x80265600: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x80265604: lb          $t6, 0x43($v0)
    ctx->r14 = MEM_B(ctx->r2, 0X43);
    // 0x80265608: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8026560C: bne         $t6, $at, L_80265654
    if (ctx->r14 != ctx->r1) {
        // 0x80265610: lui         $t4, 0x8012
        ctx->r12 = S32(0X8012 << 16);
            goto L_80265654;
    }
    // 0x80265610: lui         $t4, 0x8012
    ctx->r12 = S32(0X8012 << 16);
    // 0x80265614: lui         $v1, 0x8012
    ctx->r3 = S32(0X8012 << 16);
    // 0x80265618: lb          $v1, -0x326C($v1)
    ctx->r3 = MEM_B(ctx->r3, -0X326C);
    // 0x8026561C: lui         $t8, 0x8012
    ctx->r24 = S32(0X8012 << 16);
    // 0x80265620: sll         $t7, $v1, 2
    ctx->r15 = S32(ctx->r3 << 2);
    // 0x80265624: addu        $t7, $t7, $v1
    ctx->r15 = ADD32(ctx->r15, ctx->r3);
    // 0x80265628: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8026562C: addu        $t7, $t7, $v1
    ctx->r15 = ADD32(ctx->r15, ctx->r3);
    // 0x80265630: sll         $t7, $t7, 3
    ctx->r15 = S32(ctx->r15 << 3);
    // 0x80265634: addu        $t7, $t7, $v1
    ctx->r15 = ADD32(ctx->r15, ctx->r3);
    // 0x80265638: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8026563C: addu        $t7, $t7, $v1
    ctx->r15 = ADD32(ctx->r15, ctx->r3);
    // 0x80265640: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80265644: addiu       $t8, $t8, -0x2CF0
    ctx->r24 = ADD32(ctx->r24, -0X2CF0);
    // 0x80265648: addu        $a0, $t7, $t8
    ctx->r4 = ADD32(ctx->r15, ctx->r24);
    // 0x8026564C: b           L_80265694
    // 0x80265650: sb          $zero, 0x86A($a0)
    MEM_B(0X86A, ctx->r4) = 0;
        goto L_80265694;
    // 0x80265650: sb          $zero, 0x86A($a0)
    MEM_B(0X86A, ctx->r4) = 0;
L_80265654:
    // 0x80265654: lui         $v1, 0x8012
    ctx->r3 = S32(0X8012 << 16);
    // 0x80265658: lb          $v1, -0x326C($v1)
    ctx->r3 = MEM_B(ctx->r3, -0X326C);
    // 0x8026565C: lui         $t0, 0x8012
    ctx->r8 = S32(0X8012 << 16);
    // 0x80265660: sll         $t9, $v1, 2
    ctx->r25 = S32(ctx->r3 << 2);
    // 0x80265664: addu        $t9, $t9, $v1
    ctx->r25 = ADD32(ctx->r25, ctx->r3);
    // 0x80265668: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x8026566C: addu        $t9, $t9, $v1
    ctx->r25 = ADD32(ctx->r25, ctx->r3);
    // 0x80265670: sll         $t9, $t9, 3
    ctx->r25 = S32(ctx->r25 << 3);
    // 0x80265674: addu        $t9, $t9, $v1
    ctx->r25 = ADD32(ctx->r25, ctx->r3);
    // 0x80265678: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x8026567C: addu        $t9, $t9, $v1
    ctx->r25 = ADD32(ctx->r25, ctx->r3);
    // 0x80265680: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x80265684: addiu       $t0, $t0, -0x2CF0
    ctx->r8 = ADD32(ctx->r8, -0X2CF0);
    // 0x80265688: addu        $a0, $t9, $t0
    ctx->r4 = ADD32(ctx->r25, ctx->r8);
    // 0x8026568C: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
    // 0x80265690: sb          $t1, 0x86A($a0)
    MEM_B(0X86A, ctx->r4) = ctx->r9;
L_80265694:
    // 0x80265694: sll         $t3, $v1, 2
    ctx->r11 = S32(ctx->r3 << 2);
    // 0x80265698: addu        $t3, $t3, $v1
    ctx->r11 = ADD32(ctx->r11, ctx->r3);
    // 0x8026569C: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x802656A0: addu        $t3, $t3, $v1
    ctx->r11 = ADD32(ctx->r11, ctx->r3);
    // 0x802656A4: sll         $t3, $t3, 3
    ctx->r11 = S32(ctx->r11 << 3);
    // 0x802656A8: addu        $t3, $t3, $v1
    ctx->r11 = ADD32(ctx->r11, ctx->r3);
    // 0x802656AC: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x802656B0: lb          $t2, 0x44($v0)
    ctx->r10 = MEM_B(ctx->r2, 0X44);
    // 0x802656B4: addu        $t3, $t3, $v1
    ctx->r11 = ADD32(ctx->r11, ctx->r3);
    // 0x802656B8: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x802656BC: addiu       $t4, $t4, -0x2CF0
    ctx->r12 = ADD32(ctx->r12, -0X2CF0);
    // 0x802656C0: addu        $a2, $t3, $t4
    ctx->r6 = ADD32(ctx->r11, ctx->r12);
    // 0x802656C4: sb          $t2, 0x869($a0)
    MEM_B(0X869, ctx->r4) = ctx->r10;
L_802656C8:
    // 0x802656C8: addu        $t5, $v0, $a1
    ctx->r13 = ADD32(ctx->r2, ctx->r5);
    // 0x802656CC: addu        $t7, $a2, $a1
    ctx->r15 = ADD32(ctx->r6, ctx->r5);
    // 0x802656D0: addiu       $a1, $a1, 0x1
    ctx->r5 = ADD32(ctx->r5, 0X1);
    // 0x802656D4: lb          $t6, 0x4C($t5)
    ctx->r14 = MEM_B(ctx->r13, 0X4C);
    // 0x802656D8: andi        $t8, $a1, 0xFF
    ctx->r24 = ctx->r5 & 0XFF;
    // 0x802656DC: slti        $at, $t8, 0x4
    ctx->r1 = SIGNED(ctx->r24) < 0X4 ? 1 : 0;
    // 0x802656E0: or          $a1, $t8, $zero
    ctx->r5 = ctx->r24 | 0;
    // 0x802656E4: bne         $at, $zero, L_802656C8
    if (ctx->r1 != 0) {
        // 0x802656E8: sb          $t6, 0x86B($t7)
        MEM_B(0X86B, ctx->r15) = ctx->r14;
            goto L_802656C8;
    }
    // 0x802656E8: sb          $t6, 0x86B($t7)
    MEM_B(0X86B, ctx->r15) = ctx->r14;
    // 0x802656EC: jr          $ra
    // 0x802656F0: nop

    return;
    // 0x802656F0: nop

;}
RECOMP_FUNC void ovl_80264800_func_802656F4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802656F4: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x802656F8: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x802656FC: lui         $a0, 0x8026
    ctx->r4 = S32(0X8026 << 16);
    // 0x80265700: sw          $s4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r20;
    // 0x80265704: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x80265708: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x8026570C: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x80265710: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80265714: addiu       $a0, $a0, 0x57B0
    ctx->r4 = ADD32(ctx->r4, 0X57B0);
    // 0x80265718: jal         0x800293DC
    // 0x8026571C: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    func_800293DC(rdram, ctx);
        goto after_0;
    // 0x8026571C: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    after_0:
    // 0x80265720: lw          $s0, 0x14($v0)
    ctx->r16 = MEM_W(ctx->r2, 0X14);
    // 0x80265724: addiu       $s2, $zero, -0x1
    ctx->r18 = ADD32(0, -0X1);
    // 0x80265728: beq         $s0, $s2, L_80265790
    if (ctx->r16 == ctx->r18) {
        // 0x8026572C: or          $s1, $zero, $zero
        ctx->r17 = 0 | 0;
            goto L_80265790;
    }
    // 0x8026572C: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    // 0x80265730: lui         $s4, 0x8027
    ctx->r20 = S32(0X8027 << 16);
    // 0x80265734: lui         $s3, 0x8027
    ctx->r19 = S32(0X8027 << 16);
    // 0x80265738: addiu       $s3, $s3, -0x6C30
    ctx->r19 = ADD32(ctx->r19, -0X6C30);
    // 0x8026573C: addiu       $s4, $s4, -0x6C00
    ctx->r20 = ADD32(ctx->r20, -0X6C00);
L_80265740:
    // 0x80265740: sll         $t6, $s1, 3
    ctx->r14 = S32(ctx->r17 << 3);
    // 0x80265744: addu        $v0, $s3, $t6
    ctx->r2 = ADD32(ctx->r19, ctx->r14);
    // 0x80265748: lhu         $a1, 0x4($v0)
    ctx->r5 = MEM_HU(ctx->r2, 0X4);
    // 0x8026574C: lw          $a3, 0x0($v0)
    ctx->r7 = MEM_W(ctx->r2, 0X0);
    // 0x80265750: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80265754: jal         0x8004CD24
    // 0x80265758: addiu       $a2, $zero, 0xA
    ctx->r6 = ADD32(0, 0XA);
    func_8004CD24(rdram, ctx);
        goto after_1;
    // 0x80265758: addiu       $a2, $zero, 0xA
    ctx->r6 = ADD32(0, 0XA);
    after_1:
    // 0x8026575C: lhu         $t7, 0x16($s0)
    ctx->r15 = MEM_HU(ctx->r16, 0X16);
    // 0x80265760: addu        $t9, $s4, $s1
    ctx->r25 = ADD32(ctx->r20, ctx->r17);
    // 0x80265764: ori         $t8, $t7, 0x400
    ctx->r24 = ctx->r15 | 0X400;
    // 0x80265768: sh          $t8, 0x16($s0)
    MEM_H(0X16, ctx->r16) = ctx->r24;
    // 0x8026576C: lbu         $a2, 0x0($t9)
    ctx->r6 = MEM_BU(ctx->r25, 0X0);
    // 0x80265770: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80265774: jal         0x8002135C
    // 0x80265778: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_8002135C(rdram, ctx);
        goto after_2;
    // 0x80265778: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_2:
    // 0x8026577C: lw          $s0, 0x0($s0)
    ctx->r16 = MEM_W(ctx->r16, 0X0);
    // 0x80265780: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x80265784: andi        $t0, $s1, 0xFF
    ctx->r8 = ctx->r17 & 0XFF;
    // 0x80265788: bne         $s0, $s2, L_80265740
    if (ctx->r16 != ctx->r18) {
        // 0x8026578C: or          $s1, $t0, $zero
        ctx->r17 = ctx->r8 | 0;
            goto L_80265740;
    }
    // 0x8026578C: or          $s1, $t0, $zero
    ctx->r17 = ctx->r8 | 0;
L_80265790:
    // 0x80265790: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x80265794: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80265798: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x8026579C: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x802657A0: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x802657A4: lw          $s4, 0x28($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X28);
    // 0x802657A8: jr          $ra
    // 0x802657AC: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x802657AC: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void ovl_80264800_func_802657B0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802657B0: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x802657B4: jr          $ra
    // 0x802657B8: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    return;
    // 0x802657B8: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
;}
RECOMP_FUNC void ovl_80264800_func_802657BC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802657BC: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x802657C0: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x802657C4: lui         $a0, 0x8026
    ctx->r4 = S32(0X8026 << 16);
    // 0x802657C8: sw          $s4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r20;
    // 0x802657CC: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x802657D0: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x802657D4: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x802657D8: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x802657DC: addiu       $a0, $a0, 0x5880
    ctx->r4 = ADD32(ctx->r4, 0X5880);
    // 0x802657E0: jal         0x800293DC
    // 0x802657E4: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_800293DC(rdram, ctx);
        goto after_0;
    // 0x802657E4: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_0:
    // 0x802657E8: lw          $s0, 0x14($v0)
    ctx->r16 = MEM_W(ctx->r2, 0X14);
    // 0x802657EC: addiu       $s4, $zero, -0x1
    ctx->r20 = ADD32(0, -0X1);
    // 0x802657F0: beq         $s0, $s4, L_80265860
    if (ctx->r16 == ctx->r20) {
        // 0x802657F4: or          $s1, $zero, $zero
        ctx->r17 = 0 | 0;
            goto L_80265860;
    }
    // 0x802657F4: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    // 0x802657F8: lui         $s3, 0x8027
    ctx->r19 = S32(0X8027 << 16);
    // 0x802657FC: lui         $s2, 0x8027
    ctx->r18 = S32(0X8027 << 16);
    // 0x80265800: addiu       $s2, $s2, -0x6964
    ctx->r18 = ADD32(ctx->r18, -0X6964);
    // 0x80265804: addiu       $s3, $s3, -0x6954
    ctx->r19 = ADD32(ctx->r19, -0X6954);
L_80265808:
    // 0x80265808: sll         $t6, $s1, 3
    ctx->r14 = S32(ctx->r17 << 3);
    // 0x8026580C: addu        $v0, $s2, $t6
    ctx->r2 = ADD32(ctx->r18, ctx->r14);
    // 0x80265810: lhu         $a1, 0x4($v0)
    ctx->r5 = MEM_HU(ctx->r2, 0X4);
    // 0x80265814: lw          $a3, 0x0($v0)
    ctx->r7 = MEM_W(ctx->r2, 0X0);
    // 0x80265818: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8026581C: jal         0x8004CD24
    // 0x80265820: addiu       $a2, $zero, 0xA
    ctx->r6 = ADD32(0, 0XA);
    func_8004CD24(rdram, ctx);
        goto after_1;
    // 0x80265820: addiu       $a2, $zero, 0xA
    ctx->r6 = ADD32(0, 0XA);
    after_1:
    // 0x80265824: sll         $t7, $s1, 2
    ctx->r15 = S32(ctx->r17 << 2);
    // 0x80265828: addu        $v0, $s3, $t7
    ctx->r2 = ADD32(ctx->r19, ctx->r15);
    // 0x8026582C: lh          $a1, 0x0($v0)
    ctx->r5 = MEM_H(ctx->r2, 0X0);
    // 0x80265830: lh          $a2, 0x2($v0)
    ctx->r6 = MEM_H(ctx->r2, 0X2);
    // 0x80265834: jal         0x8004CD44
    // 0x80265838: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8004CD44(rdram, ctx);
        goto after_2;
    // 0x80265838: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_2:
    // 0x8026583C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80265840: addiu       $a1, $zero, 0x7
    ctx->r5 = ADD32(0, 0X7);
    // 0x80265844: jal         0x8002135C
    // 0x80265848: addiu       $a2, $zero, 0x28
    ctx->r6 = ADD32(0, 0X28);
    func_8002135C(rdram, ctx);
        goto after_3;
    // 0x80265848: addiu       $a2, $zero, 0x28
    ctx->r6 = ADD32(0, 0X28);
    after_3:
    // 0x8026584C: lw          $s0, 0x0($s0)
    ctx->r16 = MEM_W(ctx->r16, 0X0);
    // 0x80265850: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x80265854: andi        $t8, $s1, 0xFF
    ctx->r24 = ctx->r17 & 0XFF;
    // 0x80265858: bne         $s0, $s4, L_80265808
    if (ctx->r16 != ctx->r20) {
        // 0x8026585C: or          $s1, $t8, $zero
        ctx->r17 = ctx->r24 | 0;
            goto L_80265808;
    }
    // 0x8026585C: or          $s1, $t8, $zero
    ctx->r17 = ctx->r24 | 0;
L_80265860:
    // 0x80265860: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x80265864: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80265868: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x8026586C: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x80265870: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x80265874: lw          $s4, 0x28($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X28);
    // 0x80265878: jr          $ra
    // 0x8026587C: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x8026587C: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void ovl_80264800_func_80265880(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80265880: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80265884: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80265888: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x8026588C: lw          $v0, 0x8($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X8);
    // 0x80265890: addiu       $at, $zero, 0x5
    ctx->r1 = ADD32(0, 0X5);
    // 0x80265894: lb          $t6, 0x38($v0)
    ctx->r14 = MEM_B(ctx->r2, 0X38);
    // 0x80265898: lui         $a0, 0x8005
    ctx->r4 = S32(0X8005 << 16);
    // 0x8026589C: bne         $t6, $at, L_802658B8
    if (ctx->r14 != ctx->r1) {
        // 0x802658A0: nop
    
            goto L_802658B8;
    }
    // 0x802658A0: nop

    // 0x802658A4: lui         $a0, 0x8005
    ctx->r4 = S32(0X8005 << 16);
    // 0x802658A8: jal         0x8002A468
    // 0x802658AC: addiu       $a0, $a0, -0x3228
    ctx->r4 = ADD32(ctx->r4, -0X3228);
    func_8002A468(rdram, ctx);
        goto after_0;
    // 0x802658AC: addiu       $a0, $a0, -0x3228
    ctx->r4 = ADD32(ctx->r4, -0X3228);
    after_0:
    // 0x802658B0: b           L_802658C4
    // 0x802658B4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_802658C4;
    // 0x802658B4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_802658B8:
    // 0x802658B8: jal         0x8002A468
    // 0x802658BC: addiu       $a0, $a0, -0x3230
    ctx->r4 = ADD32(ctx->r4, -0X3230);
    func_8002A468(rdram, ctx);
        goto after_1;
    // 0x802658BC: addiu       $a0, $a0, -0x3230
    ctx->r4 = ADD32(ctx->r4, -0X3230);
    after_1:
    // 0x802658C0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_802658C4:
    // 0x802658C4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x802658C8: jr          $ra
    // 0x802658CC: nop

    return;
    // 0x802658CC: nop

;}
RECOMP_FUNC void ovl_80264800_func_802658D0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802658D0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802658D4: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x802658D8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802658DC: lbu         $a0, -0x326C($a0)
    ctx->r4 = MEM_BU(ctx->r4, -0X326C);
    // 0x802658E0: jal         0x8004BD64
    // 0x802658E4: nop

    func_8004BD64(rdram, ctx);
        goto after_0;
    // 0x802658E4: nop

    after_0:
    // 0x802658E8: lui         $t6, 0x8026
    ctx->r14 = S32(0X8026 << 16);
    // 0x802658EC: lw          $v1, 0x14($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X14);
    // 0x802658F0: addiu       $t6, $t6, 0x5918
    ctx->r14 = ADD32(ctx->r14, 0X5918);
    // 0x802658F4: sw          $t6, 0xC($v0)
    MEM_W(0XC, ctx->r2) = ctx->r14;
    // 0x802658F8: lhu         $t7, 0x16($v1)
    ctx->r15 = MEM_HU(ctx->r3, 0X16);
    // 0x802658FC: nop

    // 0x80265900: ori         $t8, $t7, 0x400
    ctx->r24 = ctx->r15 | 0X400;
    // 0x80265904: sh          $t8, 0x16($v1)
    MEM_H(0X16, ctx->r3) = ctx->r24;
    // 0x80265908: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8026590C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80265910: jr          $ra
    // 0x80265914: nop

    return;
    // 0x80265914: nop

;}
RECOMP_FUNC void ovl_80264800_func_80265918(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80265918: lw          $v0, 0x8($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X8);
    // 0x8026591C: addiu       $at, $zero, 0x5
    ctx->r1 = ADD32(0, 0X5);
    // 0x80265920: lb          $v1, 0x38($v0)
    ctx->r3 = MEM_B(ctx->r2, 0X38);
    // 0x80265924: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x80265928: beq         $v1, $zero, L_80265940
    if (ctx->r3 == 0) {
        // 0x8026592C: nop
    
            goto L_80265940;
    }
    // 0x8026592C: nop

    // 0x80265930: beq         $v1, $at, L_80265940
    if (ctx->r3 == ctx->r1) {
        // 0x80265934: nop
    
            goto L_80265940;
    }
    // 0x80265934: nop

    // 0x80265938: jr          $ra
    // 0x8026593C: sb          $zero, 0x4($a1)
    MEM_B(0X4, ctx->r5) = 0;
    return;
    // 0x8026593C: sb          $zero, 0x4($a1)
    MEM_B(0X4, ctx->r5) = 0;
L_80265940:
    // 0x80265940: sb          $t6, 0x4($a1)
    MEM_B(0X4, ctx->r5) = ctx->r14;
    // 0x80265944: lb          $t7, 0x3C($v0)
    ctx->r15 = MEM_B(ctx->r2, 0X3C);
    // 0x80265948: lui         $t9, 0x8027
    ctx->r25 = S32(0X8027 << 16);
    // 0x8026594C: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x80265950: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x80265954: lw          $t9, -0x6BC8($t9)
    ctx->r25 = MEM_W(ctx->r25, -0X6BC8);
    // 0x80265958: nop

    // 0x8026595C: sw          $t9, 0x30($a1)
    MEM_W(0X30, ctx->r5) = ctx->r25;
    // 0x80265960: jr          $ra
    // 0x80265964: nop

    return;
    // 0x80265964: nop

;}
RECOMP_FUNC void ovl_80264800_func_80265968(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80265968: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8026596C: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x80265970: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80265974: lbu         $a0, -0x326C($a0)
    ctx->r4 = MEM_BU(ctx->r4, -0X326C);
    // 0x80265978: jal         0x8004BD64
    // 0x8026597C: nop

    func_8004BD64(rdram, ctx);
        goto after_0;
    // 0x8026597C: nop

    after_0:
    // 0x80265980: lui         $t6, 0x8026
    ctx->r14 = S32(0X8026 << 16);
    // 0x80265984: addiu       $t6, $t6, 0x599C
    ctx->r14 = ADD32(ctx->r14, 0X599C);
    // 0x80265988: sw          $t6, 0xC($v0)
    MEM_W(0XC, ctx->r2) = ctx->r14;
    // 0x8026598C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80265990: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80265994: jr          $ra
    // 0x80265998: nop

    return;
    // 0x80265998: nop

;}
RECOMP_FUNC void ovl_80264800_func_8026599C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8026599C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802659A0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802659A4: lw          $v1, 0x8($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X8);
    // 0x802659A8: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x802659AC: lb          $v0, 0x38($v1)
    ctx->r2 = MEM_B(ctx->r3, 0X38);
    // 0x802659B0: or          $a3, $a1, $zero
    ctx->r7 = ctx->r5 | 0;
    // 0x802659B4: beq         $v0, $at, L_802659DC
    if (ctx->r2 == ctx->r1) {
        // 0x802659B8: addiu       $t6, $zero, 0x1
        ctx->r14 = ADD32(0, 0X1);
            goto L_802659DC;
    }
    // 0x802659B8: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x802659BC: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x802659C0: beq         $v0, $at, L_80265A10
    if (ctx->r2 == ctx->r1) {
        // 0x802659C4: addiu       $t0, $zero, 0x1
        ctx->r8 = ADD32(0, 0X1);
            goto L_80265A10;
    }
    // 0x802659C4: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x802659C8: addiu       $at, $zero, 0x5
    ctx->r1 = ADD32(0, 0X5);
    // 0x802659CC: beq         $v0, $at, L_80265A44
    if (ctx->r2 == ctx->r1) {
        // 0x802659D0: addiu       $t4, $zero, 0x1
        ctx->r12 = ADD32(0, 0X1);
            goto L_80265A44;
    }
    // 0x802659D0: addiu       $t4, $zero, 0x1
    ctx->r12 = ADD32(0, 0X1);
    // 0x802659D4: b           L_80265A84
    // 0x802659D8: sb          $zero, 0x4($a1)
    MEM_B(0X4, ctx->r5) = 0;
        goto L_80265A84;
    // 0x802659D8: sb          $zero, 0x4($a1)
    MEM_B(0X4, ctx->r5) = 0;
L_802659DC:
    // 0x802659DC: sb          $t6, 0x4($a3)
    MEM_B(0X4, ctx->r7) = ctx->r14;
    // 0x802659E0: lb          $t7, 0x3F($v1)
    ctx->r15 = MEM_B(ctx->r3, 0X3F);
    // 0x802659E4: lui         $t9, 0x8027
    ctx->r25 = S32(0X8027 << 16);
    // 0x802659E8: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x802659EC: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x802659F0: lw          $t9, -0x6BB0($t9)
    ctx->r25 = MEM_W(ctx->r25, -0X6BB0);
    // 0x802659F4: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
    // 0x802659F8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x802659FC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x80265A00: jal         0x8004CD44
    // 0x80265A04: sw          $t9, 0x30($a3)
    MEM_W(0X30, ctx->r7) = ctx->r25;
    func_8004CD44(rdram, ctx);
        goto after_0;
    // 0x80265A04: sw          $t9, 0x30($a3)
    MEM_W(0X30, ctx->r7) = ctx->r25;
    after_0:
    // 0x80265A08: b           L_80265A88
    // 0x80265A0C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80265A88;
    // 0x80265A0C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80265A10:
    // 0x80265A10: sb          $t0, 0x4($a3)
    MEM_B(0X4, ctx->r7) = ctx->r8;
    // 0x80265A14: lb          $t1, 0x40($v1)
    ctx->r9 = MEM_B(ctx->r3, 0X40);
    // 0x80265A18: lui         $t3, 0x8027
    ctx->r11 = S32(0X8027 << 16);
    // 0x80265A1C: sll         $t2, $t1, 2
    ctx->r10 = S32(ctx->r9 << 2);
    // 0x80265A20: addu        $t3, $t3, $t2
    ctx->r11 = ADD32(ctx->r11, ctx->r10);
    // 0x80265A24: lw          $t3, -0x6BA8($t3)
    ctx->r11 = MEM_W(ctx->r11, -0X6BA8);
    // 0x80265A28: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
    // 0x80265A2C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80265A30: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x80265A34: jal         0x8004CD44
    // 0x80265A38: sw          $t3, 0x30($a3)
    MEM_W(0X30, ctx->r7) = ctx->r11;
    func_8004CD44(rdram, ctx);
        goto after_1;
    // 0x80265A38: sw          $t3, 0x30($a3)
    MEM_W(0X30, ctx->r7) = ctx->r11;
    after_1:
    // 0x80265A3C: b           L_80265A88
    // 0x80265A40: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80265A88;
    // 0x80265A40: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80265A44:
    // 0x80265A44: sb          $t4, 0x4($a3)
    MEM_B(0X4, ctx->r7) = ctx->r12;
    // 0x80265A48: lb          $t5, 0x41($v1)
    ctx->r13 = MEM_B(ctx->r3, 0X41);
    // 0x80265A4C: lui         $t7, 0x8027
    ctx->r15 = S32(0X8027 << 16);
    // 0x80265A50: sll         $t6, $t5, 2
    ctx->r14 = S32(ctx->r13 << 2);
    // 0x80265A54: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80265A58: lw          $t7, -0x6B9C($t7)
    ctx->r15 = MEM_W(ctx->r15, -0X6B9C);
    // 0x80265A5C: lui         $t0, 0x8027
    ctx->r8 = S32(0X8027 << 16);
    // 0x80265A60: sw          $t7, 0x30($a3)
    MEM_W(0X30, ctx->r7) = ctx->r15;
    // 0x80265A64: lb          $t8, 0x41($v1)
    ctx->r24 = MEM_B(ctx->r3, 0X41);
    // 0x80265A68: addiu       $t0, $t0, -0x6954
    ctx->r8 = ADD32(ctx->r8, -0X6954);
    // 0x80265A6C: sll         $t9, $t8, 2
    ctx->r25 = S32(ctx->r24 << 2);
    // 0x80265A70: addu        $v0, $t9, $t0
    ctx->r2 = ADD32(ctx->r25, ctx->r8);
    // 0x80265A74: lh          $a1, 0x0($v0)
    ctx->r5 = MEM_H(ctx->r2, 0X0);
    // 0x80265A78: lh          $a2, 0x2($v0)
    ctx->r6 = MEM_H(ctx->r2, 0X2);
    // 0x80265A7C: jal         0x8004CD44
    // 0x80265A80: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
    func_8004CD44(rdram, ctx);
        goto after_2;
    // 0x80265A80: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
    after_2:
L_80265A84:
    // 0x80265A84: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80265A88:
    // 0x80265A88: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80265A8C: jr          $ra
    // 0x80265A90: nop

    return;
    // 0x80265A90: nop

;}
RECOMP_FUNC void ovl_80264800_func_80265A40(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80265A40: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80265A44: sb          $t4, 0x4($a3)
    MEM_B(0X4, ctx->r7) = ctx->r12;
    // 0x80265A48: lb          $t5, 0x41($v1)
    ctx->r13 = MEM_B(ctx->r3, 0X41);
    // 0x80265A4C: lui         $t7, 0x8027
    ctx->r15 = S32(0X8027 << 16);
    // 0x80265A50: sll         $t6, $t5, 2
    ctx->r14 = S32(ctx->r13 << 2);
    // 0x80265A54: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80265A58: lw          $t7, -0x6B9C($t7)
    ctx->r15 = MEM_W(ctx->r15, -0X6B9C);
    // 0x80265A5C: lui         $t0, 0x8027
    ctx->r8 = S32(0X8027 << 16);
    // 0x80265A60: sw          $t7, 0x30($a3)
    MEM_W(0X30, ctx->r7) = ctx->r15;
    // 0x80265A64: lb          $t8, 0x41($v1)
    ctx->r24 = MEM_B(ctx->r3, 0X41);
    // 0x80265A68: addiu       $t0, $t0, -0x6954
    ctx->r8 = ADD32(ctx->r8, -0X6954);
    // 0x80265A6C: sll         $t9, $t8, 2
    ctx->r25 = S32(ctx->r24 << 2);
    // 0x80265A70: addu        $v0, $t9, $t0
    ctx->r2 = ADD32(ctx->r25, ctx->r8);
    // 0x80265A74: lh          $a1, 0x0($v0)
    ctx->r5 = MEM_H(ctx->r2, 0X0);
    // 0x80265A78: lh          $a2, 0x2($v0)
    ctx->r6 = MEM_H(ctx->r2, 0X2);
    // 0x80265A7C: jal         0x8004CD44
    // 0x80265A80: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
    func_8004CD44(rdram, ctx);
        goto after_0;
    // 0x80265A80: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
    after_0:
    // 0x80265A84: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80265A88: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80265A8C: jr          $ra
    // 0x80265A90: nop

    return;
    // 0x80265A90: nop

;}
RECOMP_FUNC void ovl_80264800_func_80265A94(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80265A94: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80265A98: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x80265A9C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80265AA0: lbu         $a0, -0x326C($a0)
    ctx->r4 = MEM_BU(ctx->r4, -0X326C);
    // 0x80265AA4: jal         0x8004BD64
    // 0x80265AA8: nop

    func_8004BD64(rdram, ctx);
        goto after_0;
    // 0x80265AA8: nop

    after_0:
    // 0x80265AAC: lui         $t6, 0x8026
    ctx->r14 = S32(0X8026 << 16);
    // 0x80265AB0: addiu       $t6, $t6, 0x5AC8
    ctx->r14 = ADD32(ctx->r14, 0X5AC8);
    // 0x80265AB4: sw          $t6, 0xC($v0)
    MEM_W(0XC, ctx->r2) = ctx->r14;
    // 0x80265AB8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80265ABC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80265AC0: jr          $ra
    // 0x80265AC4: nop

    return;
    // 0x80265AC4: nop

;}
RECOMP_FUNC void ovl_80264800_func_80265AC8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80265AC8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80265ACC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80265AD0: lw          $v1, 0x8($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X8);
    // 0x80265AD4: addiu       $at, $zero, 0x5
    ctx->r1 = ADD32(0, 0X5);
    // 0x80265AD8: lb          $t6, 0x38($v1)
    ctx->r14 = MEM_B(ctx->r3, 0X38);
    // 0x80265ADC: or          $a3, $a1, $zero
    ctx->r7 = ctx->r5 | 0;
    // 0x80265AE0: bne         $t6, $at, L_80265B54
    if (ctx->r14 != ctx->r1) {
        // 0x80265AE4: nop
    
            goto L_80265B54;
    }
    // 0x80265AE4: nop

    // 0x80265AE8: lb          $v0, 0x3A($v1)
    ctx->r2 = MEM_B(ctx->r3, 0X3A);
    // 0x80265AEC: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80265AF0: beq         $v0, $zero, L_80265B08
    if (ctx->r2 == 0) {
        // 0x80265AF4: nop
    
            goto L_80265B08;
    }
    // 0x80265AF4: nop

    // 0x80265AF8: beq         $v0, $at, L_80265B10
    if (ctx->r2 == ctx->r1) {
        // 0x80265AFC: nop
    
            goto L_80265B10;
    }
    // 0x80265AFC: nop

    // 0x80265B00: b           L_80265B5C
    // 0x80265B04: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80265B5C;
    // 0x80265B04: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80265B08:
    // 0x80265B08: b           L_80265B58
    // 0x80265B0C: sw          $zero, 0x30($a3)
    MEM_W(0X30, ctx->r7) = 0;
        goto L_80265B58;
    // 0x80265B0C: sw          $zero, 0x30($a3)
    MEM_W(0X30, ctx->r7) = 0;
L_80265B10:
    // 0x80265B10: lb          $t7, 0x42($v1)
    ctx->r15 = MEM_B(ctx->r3, 0X42);
    // 0x80265B14: lui         $t9, 0x803D
    ctx->r25 = S32(0X803D << 16);
    // 0x80265B18: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x80265B1C: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x80265B20: lw          $t9, 0x1A2C($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X1A2C);
    // 0x80265B24: lui         $t2, 0x8027
    ctx->r10 = S32(0X8027 << 16);
    // 0x80265B28: sw          $t9, 0x30($a3)
    MEM_W(0X30, ctx->r7) = ctx->r25;
    // 0x80265B2C: lb          $t0, 0x42($v1)
    ctx->r8 = MEM_B(ctx->r3, 0X42);
    // 0x80265B30: addiu       $t2, $t2, -0x6B94
    ctx->r10 = ADD32(ctx->r10, -0X6B94);
    // 0x80265B34: sll         $t1, $t0, 2
    ctx->r9 = S32(ctx->r8 << 2);
    // 0x80265B38: addu        $v0, $t1, $t2
    ctx->r2 = ADD32(ctx->r9, ctx->r10);
    // 0x80265B3C: lh          $a1, 0x0($v0)
    ctx->r5 = MEM_H(ctx->r2, 0X0);
    // 0x80265B40: lh          $a2, 0x2($v0)
    ctx->r6 = MEM_H(ctx->r2, 0X2);
    // 0x80265B44: jal         0x8004CD44
    // 0x80265B48: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
    func_8004CD44(rdram, ctx);
        goto after_0;
    // 0x80265B48: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
    after_0:
    // 0x80265B4C: b           L_80265B5C
    // 0x80265B50: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80265B5C;
    // 0x80265B50: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80265B54:
    // 0x80265B54: sw          $zero, 0x30($a3)
    MEM_W(0X30, ctx->r7) = 0;
L_80265B58:
    // 0x80265B58: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80265B5C:
    // 0x80265B5C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80265B60: jr          $ra
    // 0x80265B64: nop

    return;
    // 0x80265B64: nop

;}
RECOMP_FUNC void ovl_80264800_func_80265B68(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80265B68: lui         $v1, 0x801B
    ctx->r3 = S32(0X801B << 16);
    // 0x80265B6C: addiu       $v1, $v1, 0x1CF0
    ctx->r3 = ADD32(ctx->r3, 0X1CF0);
    // 0x80265B70: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_80265B74:
    // 0x80265B74: lw          $t6, 0x0($v1)
    ctx->r14 = MEM_W(ctx->r3, 0X0);
    // 0x80265B78: nop

    // 0x80265B7C: addu        $t7, $t6, $v0
    ctx->r15 = ADD32(ctx->r14, ctx->r2);
    // 0x80265B80: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80265B84: andi        $t8, $v0, 0xFF
    ctx->r24 = ctx->r2 & 0XFF;
    // 0x80265B88: slti        $at, $t8, 0x4
    ctx->r1 = SIGNED(ctx->r24) < 0X4 ? 1 : 0;
    // 0x80265B8C: or          $v0, $t8, $zero
    ctx->r2 = ctx->r24 | 0;
    // 0x80265B90: bne         $at, $zero, L_80265B74
    if (ctx->r1 != 0) {
        // 0x80265B94: sb          $zero, 0x4C($t7)
        MEM_B(0X4C, ctx->r15) = 0;
            goto L_80265B74;
    }
    // 0x80265B94: sb          $zero, 0x4C($t7)
    MEM_B(0X4C, ctx->r15) = 0;
    // 0x80265B98: jr          $ra
    // 0x80265B9C: nop

    return;
    // 0x80265B9C: nop

;}
RECOMP_FUNC void ovl_80264800_func_80265BA0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80265BA0: lui         $t7, 0x801B
    ctx->r15 = S32(0X801B << 16);
    // 0x80265BA4: lw          $t7, 0x1CF0($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X1CF0);
    // 0x80265BA8: addiu       $t6, $zero, 0x4
    ctx->r14 = ADD32(0, 0X4);
    // 0x80265BAC: jr          $ra
    // 0x80265BB0: sb          $t6, 0x43($t7)
    MEM_B(0X43, ctx->r15) = ctx->r14;
    return;
    // 0x80265BB0: sb          $t6, 0x43($t7)
    MEM_B(0X43, ctx->r15) = ctx->r14;
;}
RECOMP_FUNC void ovl_80264800_func_80265BAC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80265BAC: jr          $ra
    // 0x80265BB0: sb          $t6, 0x43($t7)
    MEM_B(0X43, ctx->r15) = ctx->r14;
    return;
    // 0x80265BB0: sb          $t6, 0x43($t7)
    MEM_B(0X43, ctx->r15) = ctx->r14;
;}
RECOMP_FUNC void ovl_80264800_func_80265BB4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80265BB4: lui         $t6, 0x801B
    ctx->r14 = S32(0X801B << 16);
    // 0x80265BB8: lw          $t6, 0x1CF0($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X1CF0);
    // 0x80265BBC: jr          $ra
    // 0x80265BC0: sb          $zero, 0x44($t6)
    MEM_B(0X44, ctx->r14) = 0;
    return;
    // 0x80265BC0: sb          $zero, 0x44($t6)
    MEM_B(0X44, ctx->r14) = 0;
;}
RECOMP_FUNC void ovl_80264800_func_80265BC4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80265BC4: lui         $t7, 0x8012
    ctx->r15 = S32(0X8012 << 16);
    // 0x80265BC8: lb          $t7, -0x326C($t7)
    ctx->r15 = MEM_B(ctx->r15, -0X326C);
    // 0x80265BCC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80265BD0: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x80265BD4: subu        $t8, $t8, $t7
    ctx->r24 = SUB32(ctx->r24, ctx->r15);
    // 0x80265BD8: sll         $t8, $t8, 3
    ctx->r24 = S32(ctx->r24 << 3);
    // 0x80265BDC: lui         $at, 0x8011
    ctx->r1 = S32(0X8011 << 16);
    // 0x80265BE0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80265BE4: addu        $at, $at, $t8
    ctx->r1 = ADD32(ctx->r1, ctx->r24);
    // 0x80265BE8: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x80265BEC: lui         $a0, 0x8026
    ctx->r4 = S32(0X8026 << 16);
    // 0x80265BF0: sb          $t6, -0x3066($at)
    MEM_B(-0X3066, ctx->r1) = ctx->r14;
    // 0x80265BF4: jal         0x80029220
    // 0x80265BF8: addiu       $a0, $a0, 0x5C0C
    ctx->r4 = ADD32(ctx->r4, 0X5C0C);
    func_80029220(rdram, ctx);
        goto after_0;
    // 0x80265BF8: addiu       $a0, $a0, 0x5C0C
    ctx->r4 = ADD32(ctx->r4, 0X5C0C);
    after_0:
    // 0x80265BFC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80265C00: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80265C04: jr          $ra
    // 0x80265C08: nop

    return;
    // 0x80265C08: nop

;}
RECOMP_FUNC void ovl_80264800_func_80265C0C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80265C0C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80265C10: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x80265C14: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80265C18: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x80265C1C: lui         $a0, 0x8026
    ctx->r4 = S32(0X8026 << 16);
    // 0x80265C20: addiu       $a0, $a0, 0x5C3C
    ctx->r4 = ADD32(ctx->r4, 0X5C3C);
    // 0x80265C24: jal         0x8002989C
    // 0x80265C28: addiu       $a1, $zero, 0x20
    ctx->r5 = ADD32(0, 0X20);
    func_8002989C(rdram, ctx);
        goto after_0;
    // 0x80265C28: addiu       $a1, $zero, 0x20
    ctx->r5 = ADD32(0, 0X20);
    after_0:
    // 0x80265C2C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80265C30: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80265C34: jr          $ra
    // 0x80265C38: nop

    return;
    // 0x80265C38: nop

;}
RECOMP_FUNC void ovl_80264800_func_80265C3C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80265C3C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80265C40: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80265C44: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x80265C48: lw          $v0, 0x8($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X8);
    // 0x80265C4C: lui         $t6, 0x8012
    ctx->r14 = S32(0X8012 << 16);
    // 0x80265C50: sb          $zero, 0x38($v0)
    MEM_B(0X38, ctx->r2) = 0;
    // 0x80265C54: lb          $t6, -0x326C($t6)
    ctx->r14 = MEM_B(ctx->r14, -0X326C);
    // 0x80265C58: lui         $at, 0x8011
    ctx->r1 = S32(0X8011 << 16);
    // 0x80265C5C: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80265C60: subu        $t7, $t7, $t6
    ctx->r15 = SUB32(ctx->r15, ctx->r14);
    // 0x80265C64: sll         $t7, $t7, 3
    ctx->r15 = S32(ctx->r15 << 3);
    // 0x80265C68: addu        $at, $at, $t7
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x80265C6C: jal         0x800294F8
    // 0x80265C70: sb          $zero, -0x3066($at)
    MEM_B(-0X3066, ctx->r1) = 0;
    func_800294F8(rdram, ctx);
        goto after_0;
    // 0x80265C70: sb          $zero, -0x3066($at)
    MEM_B(-0X3066, ctx->r1) = 0;
    after_0:
    // 0x80265C74: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80265C78: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80265C7C: jr          $ra
    // 0x80265C80: nop

    return;
    // 0x80265C80: nop

;}
RECOMP_FUNC void ovl_80264800_func_80265C84(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80265C84: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x80265C88: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x80265C8C: lui         $a0, 0x8005
    ctx->r4 = S32(0X8005 << 16);
    // 0x80265C90: jal         0x80029354
    // 0x80265C94: addiu       $a0, $a0, -0x1E98
    ctx->r4 = ADD32(ctx->r4, -0X1E98);
    func_80029354(rdram, ctx);
        goto after_0;
    // 0x80265C94: addiu       $a0, $a0, -0x1E98
    ctx->r4 = ADD32(ctx->r4, -0X1E98);
    after_0:
    // 0x80265C98: lw          $a0, 0x14($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X14);
    // 0x80265C9C: addiu       $t6, $zero, 0x80
    ctx->r14 = ADD32(0, 0X80);
    // 0x80265CA0: addiu       $t7, $zero, 0x34
    ctx->r15 = ADD32(0, 0X34);
    // 0x80265CA4: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x80265CA8: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x80265CAC: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x80265CB0: addiu       $t1, $zero, 0xB3
    ctx->r9 = ADD32(0, 0XB3);
    // 0x80265CB4: sw          $t1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r9;
    // 0x80265CB8: sw          $t0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r8;
    // 0x80265CBC: sw          $t9, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r25;
    // 0x80265CC0: sw          $t8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r24;
    // 0x80265CC4: sw          $t7, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r15;
    // 0x80265CC8: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x80265CCC: sw          $v0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r2;
    // 0x80265CD0: addiu       $a1, $zero, 0x82
    ctx->r5 = ADD32(0, 0X82);
    // 0x80265CD4: addiu       $a2, $zero, 0x98
    ctx->r6 = ADD32(0, 0X98);
    // 0x80265CD8: jal         0x8004A5E4
    // 0x80265CDC: addiu       $a3, $zero, 0x28
    ctx->r7 = ADD32(0, 0X28);
    func_8004A5E4(rdram, ctx);
        goto after_1;
    // 0x80265CDC: addiu       $a3, $zero, 0x28
    ctx->r7 = ADD32(0, 0X28);
    after_1:
    // 0x80265CE0: lw          $v1, 0x34($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X34);
    // 0x80265CE4: addiu       $t4, $zero, 0x9
    ctx->r12 = ADD32(0, 0X9);
    // 0x80265CE8: lw          $v0, 0x14($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X14);
    // 0x80265CEC: nop

    // 0x80265CF0: lhu         $t2, 0x16($v0)
    ctx->r10 = MEM_HU(ctx->r2, 0X16);
    // 0x80265CF4: nop

    // 0x80265CF8: ori         $t3, $t2, 0x400
    ctx->r11 = ctx->r10 | 0X400;
    // 0x80265CFC: sh          $t3, 0x16($v0)
    MEM_H(0X16, ctx->r2) = ctx->r11;
    // 0x80265D00: lw          $t5, 0x14($v1)
    ctx->r13 = MEM_W(ctx->r3, 0X14);
    // 0x80265D04: nop

    // 0x80265D08: sb          $t4, 0x5($t5)
    MEM_B(0X5, ctx->r13) = ctx->r12;
    // 0x80265D0C: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x80265D10: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    // 0x80265D14: jr          $ra
    // 0x80265D18: nop

    return;
    // 0x80265D18: nop

;}
RECOMP_FUNC void ovl_80264800_func_80265D1C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80265D1C: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80265D20: lui         $a0, 0x801B
    ctx->r4 = S32(0X801B << 16);
    // 0x80265D24: lui         $t9, 0x8026
    ctx->r25 = S32(0X8026 << 16);
    // 0x80265D28: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x80265D2C: addiu       $t9, $t9, 0x49F8
    ctx->r25 = ADD32(ctx->r25, 0X49F8);
    // 0x80265D30: lw          $a0, 0x1CF0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X1CF0);
    // 0x80265D34: addiu       $t6, $zero, 0x140
    ctx->r14 = ADD32(0, 0X140);
    // 0x80265D38: addiu       $t7, $zero, 0x5A
    ctx->r15 = ADD32(0, 0X5A);
    // 0x80265D3C: addiu       $t8, $zero, 0x3
    ctx->r24 = ADD32(0, 0X3);
    // 0x80265D40: sw          $t8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r24;
    // 0x80265D44: sw          $t7, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r15;
    // 0x80265D48: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x80265D4C: sw          $t9, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r25;
    // 0x80265D50: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80265D54: addiu       $a2, $zero, 0x140
    ctx->r6 = ADD32(0, 0X140);
    // 0x80265D58: jal         0x8004B300
    // 0x80265D5C: addiu       $a3, $zero, 0x28
    ctx->r7 = ADD32(0, 0X28);
    func_8004B300(rdram, ctx);
        goto after_0;
    // 0x80265D5C: addiu       $a3, $zero, 0x28
    ctx->r7 = ADD32(0, 0X28);
    after_0:
    // 0x80265D60: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x80265D64: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80265D68: jr          $ra
    // 0x80265D6C: nop

    return;
    // 0x80265D6C: nop

;}
RECOMP_FUNC void ovl_80264800_func_80265D68(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80265D68: jr          $ra
    // 0x80265D6C: nop

    return;
    // 0x80265D6C: nop

;}
RECOMP_FUNC void ovl_80264800_func_80265D70(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80265D70: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80265D74: lui         $a0, 0x801B
    ctx->r4 = S32(0X801B << 16);
    // 0x80265D78: lui         $t9, 0x8026
    ctx->r25 = S32(0X8026 << 16);
    // 0x80265D7C: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x80265D80: addiu       $t9, $t9, 0x49F8
    ctx->r25 = ADD32(ctx->r25, 0X49F8);
    // 0x80265D84: lw          $a0, 0x1CF0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X1CF0);
    // 0x80265D88: addiu       $t6, $zero, 0x140
    ctx->r14 = ADD32(0, 0X140);
    // 0x80265D8C: addiu       $t7, $zero, 0x28
    ctx->r15 = ADD32(0, 0X28);
    // 0x80265D90: addiu       $t8, $zero, 0x3
    ctx->r24 = ADD32(0, 0X3);
    // 0x80265D94: sw          $t8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r24;
    // 0x80265D98: sw          $t7, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r15;
    // 0x80265D9C: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x80265DA0: sw          $t9, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r25;
    // 0x80265DA4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80265DA8: addiu       $a2, $zero, 0x140
    ctx->r6 = ADD32(0, 0X140);
    // 0x80265DAC: jal         0x8004B4B4
    // 0x80265DB0: addiu       $a3, $zero, 0x5A
    ctx->r7 = ADD32(0, 0X5A);
    func_8004B4B4(rdram, ctx);
        goto after_0;
    // 0x80265DB0: addiu       $a3, $zero, 0x5A
    ctx->r7 = ADD32(0, 0X5A);
    after_0:
    // 0x80265DB4: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x80265DB8: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80265DBC: jr          $ra
    // 0x80265DC0: nop

    return;
    // 0x80265DC0: nop

;}
RECOMP_FUNC void ovl_80264800_func_80265D9C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80265D9C: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x80265DA0: sw          $t9, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r25;
    // 0x80265DA4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80265DA8: addiu       $a2, $zero, 0x140
    ctx->r6 = ADD32(0, 0X140);
    // 0x80265DAC: jal         0x8004B4B4
    // 0x80265DB0: addiu       $a3, $zero, 0x5A
    ctx->r7 = ADD32(0, 0X5A);
    func_8004B4B4(rdram, ctx);
        goto after_0;
    // 0x80265DB0: addiu       $a3, $zero, 0x5A
    ctx->r7 = ADD32(0, 0X5A);
    after_0:
    // 0x80265DB4: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x80265DB8: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80265DBC: jr          $ra
    // 0x80265DC0: nop

    return;
    // 0x80265DC0: nop

;}
RECOMP_FUNC void ovl_80264800_func_80265DC4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80265DC4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80265DC8: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x80265DCC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80265DD0: lb          $a0, -0x326B($a0)
    ctx->r4 = MEM_B(ctx->r4, -0X326B);
    // 0x80265DD4: addiu       $a1, $zero, 0x2A
    ctx->r5 = ADD32(0, 0X2A);
    // 0x80265DD8: addiu       $a2, $zero, 0x18
    ctx->r6 = ADD32(0, 0X18);
    // 0x80265DDC: jal         0x80039F1C
    // 0x80265DE0: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    func_80039F1C(rdram, ctx);
        goto after_0;
    // 0x80265DE0: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_0:
    // 0x80265DE4: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x80265DE8: lbu         $a0, -0x326C($a0)
    ctx->r4 = MEM_BU(ctx->r4, -0X326C);
    // 0x80265DEC: lui         $a1, 0x803D
    ctx->r5 = S32(0X803D << 16);
    // 0x80265DF0: jal         0x8004C2C8
    // 0x80265DF4: addiu       $a1, $a1, -0x11C0
    ctx->r5 = ADD32(ctx->r5, -0X11C0);
    func_8004C2C8(rdram, ctx);
        goto after_1;
    // 0x80265DF4: addiu       $a1, $a1, -0x11C0
    ctx->r5 = ADD32(ctx->r5, -0X11C0);
    after_1:
    // 0x80265DF8: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x80265DFC: lbu         $a0, -0x326B($a0)
    ctx->r4 = MEM_BU(ctx->r4, -0X326B);
    // 0x80265E00: lui         $a1, 0x803D
    ctx->r5 = S32(0X803D << 16);
    // 0x80265E04: jal         0x8004BC1C
    // 0x80265E08: addiu       $a1, $a1, -0x11B4
    ctx->r5 = ADD32(ctx->r5, -0X11B4);
    func_8004BC1C(rdram, ctx);
        goto after_2;
    // 0x80265E08: addiu       $a1, $a1, -0x11B4
    ctx->r5 = ADD32(ctx->r5, -0X11B4);
    after_2:
    // 0x80265E0C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80265E10: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80265E14: jr          $ra
    // 0x80265E18: nop

    return;
    // 0x80265E18: nop

;}
RECOMP_FUNC void ovl_80264800_func_80265E1C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80265E1C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80265E20: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80265E24: lui         $a0, 0x8026
    ctx->r4 = S32(0X8026 << 16);
    // 0x80265E28: jal         0x80029354
    // 0x80265E2C: addiu       $a0, $a0, 0x5E6C
    ctx->r4 = ADD32(ctx->r4, 0X5E6C);
    func_80029354(rdram, ctx);
        goto after_0;
    // 0x80265E2C: addiu       $a0, $a0, 0x5E6C
    ctx->r4 = ADD32(ctx->r4, 0X5E6C);
    after_0:
    // 0x80265E30: lw          $a0, 0x14($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X14);
    // 0x80265E34: lui         $a3, 0x803D
    ctx->r7 = S32(0X803D << 16);
    // 0x80265E38: addiu       $a3, $a3, -0x11A8
    ctx->r7 = ADD32(ctx->r7, -0X11A8);
    // 0x80265E3C: addiu       $a1, $zero, 0x1A9
    ctx->r5 = ADD32(0, 0X1A9);
    // 0x80265E40: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    // 0x80265E44: jal         0x8004CD24
    // 0x80265E48: sw          $a0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r4;
    func_8004CD24(rdram, ctx);
        goto after_1;
    // 0x80265E48: sw          $a0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r4;
    after_1:
    // 0x80265E4C: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    // 0x80265E50: addiu       $a1, $zero, 0x7
    ctx->r5 = ADD32(0, 0X7);
    // 0x80265E54: jal         0x8002135C
    // 0x80265E58: addiu       $a2, $zero, 0x23
    ctx->r6 = ADD32(0, 0X23);
    func_8002135C(rdram, ctx);
        goto after_2;
    // 0x80265E58: addiu       $a2, $zero, 0x23
    ctx->r6 = ADD32(0, 0X23);
    after_2:
    // 0x80265E5C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80265E60: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80265E64: jr          $ra
    // 0x80265E68: nop

    return;
    // 0x80265E68: nop

;}
RECOMP_FUNC void ovl_80264800_func_80265E6C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80265E6C: lw          $v0, 0x8($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X8);
    // 0x80265E70: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x80265E74: lb          $v1, 0x38($v0)
    ctx->r3 = MEM_B(ctx->r2, 0X38);
    // 0x80265E78: lui         $t7, 0x803D
    ctx->r15 = S32(0X803D << 16);
    // 0x80265E7C: beq         $v1, $at, L_80265E9C
    if (ctx->r3 == ctx->r1) {
        // 0x80265E80: addiu       $t7, $t7, -0x314
        ctx->r15 = ADD32(ctx->r15, -0X314);
            goto L_80265E9C;
    }
    // 0x80265E80: addiu       $t7, $t7, -0x314
    ctx->r15 = ADD32(ctx->r15, -0X314);
    // 0x80265E84: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x80265E88: beq         $v1, $at, L_80265EA4
    if (ctx->r3 == ctx->r1) {
        // 0x80265E8C: lui         $t6, 0x803D
        ctx->r14 = S32(0X803D << 16);
            goto L_80265EA4;
    }
    // 0x80265E8C: lui         $t6, 0x803D
    ctx->r14 = S32(0X803D << 16);
    // 0x80265E90: addiu       $t6, $t6, -0x11A8
    ctx->r14 = ADD32(ctx->r14, -0X11A8);
    // 0x80265E94: jr          $ra
    // 0x80265E98: sw          $t6, 0x30($a1)
    MEM_W(0X30, ctx->r5) = ctx->r14;
    return;
    // 0x80265E98: sw          $t6, 0x30($a1)
    MEM_W(0X30, ctx->r5) = ctx->r14;
L_80265E9C:
    // 0x80265E9C: jr          $ra
    // 0x80265EA0: sw          $t7, 0x30($a1)
    MEM_W(0X30, ctx->r5) = ctx->r15;
    return;
    // 0x80265EA0: sw          $t7, 0x30($a1)
    MEM_W(0X30, ctx->r5) = ctx->r15;
L_80265EA4:
    // 0x80265EA4: sw          $zero, 0x30($a1)
    MEM_W(0X30, ctx->r5) = 0;
    // 0x80265EA8: jr          $ra
    // 0x80265EAC: nop

    return;
    // 0x80265EAC: nop

;}
RECOMP_FUNC void ovl_80264800_func_80265EB0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80265EB0: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x80265EB4: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x80265EB8: lui         $a0, 0x8026
    ctx->r4 = S32(0X8026 << 16);
    // 0x80265EBC: sw          $s4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r20;
    // 0x80265EC0: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x80265EC4: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x80265EC8: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x80265ECC: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80265ED0: addiu       $a0, $a0, 0x5F6C
    ctx->r4 = ADD32(ctx->r4, 0X5F6C);
    // 0x80265ED4: jal         0x800293DC
    // 0x80265ED8: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    func_800293DC(rdram, ctx);
        goto after_0;
    // 0x80265ED8: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_0:
    // 0x80265EDC: lw          $s0, 0x14($v0)
    ctx->r16 = MEM_W(ctx->r2, 0X14);
    // 0x80265EE0: addiu       $s4, $zero, -0x1
    ctx->r20 = ADD32(0, -0X1);
    // 0x80265EE4: beq         $s0, $s4, L_80265F4C
    if (ctx->r16 == ctx->r20) {
        // 0x80265EE8: or          $s1, $zero, $zero
        ctx->r17 = 0 | 0;
            goto L_80265F4C;
    }
    // 0x80265EE8: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    // 0x80265EEC: lui         $s3, 0x8027
    ctx->r19 = S32(0X8027 << 16);
    // 0x80265EF0: lui         $s2, 0x803D
    ctx->r18 = S32(0X803D << 16);
    // 0x80265EF4: addiu       $s2, $s2, 0x43C
    ctx->r18 = ADD32(ctx->r18, 0X43C);
    // 0x80265EF8: addiu       $s3, $s3, -0x66B4
    ctx->r19 = ADD32(ctx->r19, -0X66B4);
L_80265EFC:
    // 0x80265EFC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80265F00: addiu       $a1, $zero, 0x1A9
    ctx->r5 = ADD32(0, 0X1A9);
    // 0x80265F04: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    // 0x80265F08: jal         0x8004CD24
    // 0x80265F0C: or          $a3, $s2, $zero
    ctx->r7 = ctx->r18 | 0;
    func_8004CD24(rdram, ctx);
        goto after_1;
    // 0x80265F0C: or          $a3, $s2, $zero
    ctx->r7 = ctx->r18 | 0;
    after_1:
    // 0x80265F10: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80265F14: addiu       $a1, $zero, 0x7
    ctx->r5 = ADD32(0, 0X7);
    // 0x80265F18: jal         0x8002135C
    // 0x80265F1C: addiu       $a2, $zero, 0x23
    ctx->r6 = ADD32(0, 0X23);
    func_8002135C(rdram, ctx);
        goto after_2;
    // 0x80265F1C: addiu       $a2, $zero, 0x23
    ctx->r6 = ADD32(0, 0X23);
    after_2:
    // 0x80265F20: sll         $t6, $s1, 2
    ctx->r14 = S32(ctx->r17 << 2);
    // 0x80265F24: addu        $v0, $s3, $t6
    ctx->r2 = ADD32(ctx->r19, ctx->r14);
    // 0x80265F28: lh          $a1, 0x0($v0)
    ctx->r5 = MEM_H(ctx->r2, 0X0);
    // 0x80265F2C: lh          $a2, 0x2($v0)
    ctx->r6 = MEM_H(ctx->r2, 0X2);
    // 0x80265F30: jal         0x8004CD44
    // 0x80265F34: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8004CD44(rdram, ctx);
        goto after_3;
    // 0x80265F34: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_3:
    // 0x80265F38: lw          $s0, 0x0($s0)
    ctx->r16 = MEM_W(ctx->r16, 0X0);
    // 0x80265F3C: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x80265F40: andi        $t7, $s1, 0xFF
    ctx->r15 = ctx->r17 & 0XFF;
    // 0x80265F44: bne         $s0, $s4, L_80265EFC
    if (ctx->r16 != ctx->r20) {
        // 0x80265F48: or          $s1, $t7, $zero
        ctx->r17 = ctx->r15 | 0;
            goto L_80265EFC;
    }
    // 0x80265F48: or          $s1, $t7, $zero
    ctx->r17 = ctx->r15 | 0;
L_80265F4C:
    // 0x80265F4C: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x80265F50: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80265F54: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x80265F58: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x80265F5C: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x80265F60: lw          $s4, 0x28($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X28);
    // 0x80265F64: jr          $ra
    // 0x80265F68: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x80265F68: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void ovl_80264800_func_80265F6C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80265F6C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80265F70: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80265F74: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x80265F78: lw          $v0, 0x8($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X8);
    // 0x80265F7C: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x80265F80: lb          $t6, 0x38($v0)
    ctx->r14 = MEM_B(ctx->r2, 0X38);
    // 0x80265F84: lui         $a0, 0x8005
    ctx->r4 = S32(0X8005 << 16);
    // 0x80265F88: bne         $t6, $at, L_80265FA4
    if (ctx->r14 != ctx->r1) {
        // 0x80265F8C: nop
    
            goto L_80265FA4;
    }
    // 0x80265F8C: nop

    // 0x80265F90: lui         $a0, 0x8005
    ctx->r4 = S32(0X8005 << 16);
    // 0x80265F94: jal         0x8002A468
    // 0x80265F98: addiu       $a0, $a0, -0x3228
    ctx->r4 = ADD32(ctx->r4, -0X3228);
    func_8002A468(rdram, ctx);
        goto after_0;
    // 0x80265F98: addiu       $a0, $a0, -0x3228
    ctx->r4 = ADD32(ctx->r4, -0X3228);
    after_0:
    // 0x80265F9C: b           L_80265FB0
    // 0x80265FA0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80265FB0;
    // 0x80265FA0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80265FA4:
    // 0x80265FA4: jal         0x8002A468
    // 0x80265FA8: addiu       $a0, $a0, -0x3230
    ctx->r4 = ADD32(ctx->r4, -0X3230);
    func_8002A468(rdram, ctx);
        goto after_1;
    // 0x80265FA8: addiu       $a0, $a0, -0x3230
    ctx->r4 = ADD32(ctx->r4, -0X3230);
    after_1:
    // 0x80265FAC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80265FB0:
    // 0x80265FB0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80265FB4: jr          $ra
    // 0x80265FB8: nop

    return;
    // 0x80265FB8: nop

;}
RECOMP_FUNC void ovl_80264800_func_80265FBC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80265FBC: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x80265FC0: sw          $fp, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r30;
    // 0x80265FC4: sw          $s7, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r23;
    // 0x80265FC8: sw          $s6, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r22;
    // 0x80265FCC: sw          $s5, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r21;
    // 0x80265FD0: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x80265FD4: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x80265FD8: lui         $s5, 0x8026
    ctx->r21 = S32(0X8026 << 16);
    // 0x80265FDC: lui         $s6, 0x8027
    ctx->r22 = S32(0X8027 << 16);
    // 0x80265FE0: lui         $s7, 0x8027
    ctx->r23 = S32(0X8027 << 16);
    // 0x80265FE4: lui         $fp, 0x8027
    ctx->r30 = S32(0X8027 << 16);
    // 0x80265FE8: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x80265FEC: sw          $s4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r20;
    // 0x80265FF0: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x80265FF4: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80265FF8: addiu       $fp, $fp, -0x6A80
    ctx->r30 = ADD32(ctx->r30, -0X6A80);
    // 0x80265FFC: addiu       $s7, $s7, -0x6AA4
    ctx->r23 = ADD32(ctx->r23, -0X6AA4);
    // 0x80266000: addiu       $s6, $s6, -0x6A5C
    ctx->r22 = ADD32(ctx->r22, -0X6A5C);
    // 0x80266004: addiu       $s5, $s5, 0x60E0
    ctx->r21 = ADD32(ctx->r21, 0X60E0);
    // 0x80266008: or          $s2, $zero, $zero
    ctx->r18 = 0 | 0;
    // 0x8026600C: or          $s3, $zero, $zero
    ctx->r19 = 0 | 0;
L_80266010:
    // 0x80266010: or          $a0, $s5, $zero
    ctx->r4 = ctx->r21 | 0;
    // 0x80266014: jal         0x800293DC
    // 0x80266018: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    func_800293DC(rdram, ctx);
        goto after_0;
    // 0x80266018: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    after_0:
    // 0x8026601C: sll         $s1, $s3, 2
    ctx->r17 = S32(ctx->r19 << 2);
    // 0x80266020: lw          $s0, 0x14($v0)
    ctx->r16 = MEM_W(ctx->r2, 0X14);
    // 0x80266024: sb          $s2, 0x3C($v0)
    MEM_B(0X3C, ctx->r2) = ctx->r18;
    // 0x80266028: addu        $t6, $s6, $s1
    ctx->r14 = ADD32(ctx->r22, ctx->r17);
    // 0x8026602C: lw          $a1, 0x0($t6)
    ctx->r5 = MEM_W(ctx->r14, 0X0);
    // 0x80266030: jal         0x8026631C
    // 0x80266034: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_80264800_func_8026631C(rdram, ctx);
        goto after_1;
    // 0x80266034: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
    // 0x80266038: sll         $s4, $s2, 24
    ctx->r20 = S32(ctx->r18 << 24);
    // 0x8026603C: sra         $t7, $s4, 24
    ctx->r15 = S32(SIGNED(ctx->r20) >> 24);
    // 0x80266040: lw          $s0, 0x0($s0)
    ctx->r16 = MEM_W(ctx->r16, 0X0);
    // 0x80266044: sll         $a1, $t7, 24
    ctx->r5 = S32(ctx->r15 << 24);
    // 0x80266048: addu        $t9, $s7, $s1
    ctx->r25 = ADD32(ctx->r23, ctx->r17);
    // 0x8026604C: lw          $a2, 0x0($t9)
    ctx->r6 = MEM_W(ctx->r25, 0X0);
    // 0x80266050: sra         $t8, $a1, 24
    ctx->r24 = S32(SIGNED(ctx->r5) >> 24);
    // 0x80266054: or          $a1, $t8, $zero
    ctx->r5 = ctx->r24 | 0;
    // 0x80266058: or          $s4, $t7, $zero
    ctx->r20 = ctx->r15 | 0;
    // 0x8026605C: jal         0x8026627C
    // 0x80266060: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_80264800_func_8026627C(rdram, ctx);
        goto after_2;
    // 0x80266060: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_2:
    // 0x80266064: lw          $s0, 0x0($s0)
    ctx->r16 = MEM_W(ctx->r16, 0X0);
    // 0x80266068: sll         $a1, $s4, 24
    ctx->r5 = S32(ctx->r20 << 24);
    // 0x8026606C: addu        $t1, $fp, $s1
    ctx->r9 = ADD32(ctx->r30, ctx->r17);
    // 0x80266070: lw          $a2, 0x0($t1)
    ctx->r6 = MEM_W(ctx->r9, 0X0);
    // 0x80266074: sra         $t0, $a1, 24
    ctx->r8 = S32(SIGNED(ctx->r5) >> 24);
    // 0x80266078: or          $a1, $t0, $zero
    ctx->r5 = ctx->r8 | 0;
    // 0x8026607C: jal         0x802662CC
    // 0x80266080: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_80264800_func_802662CC(rdram, ctx);
        goto after_3;
    // 0x80266080: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_3:
    // 0x80266084: lui         $a2, 0x8027
    ctx->r6 = S32(0X8027 << 16);
    // 0x80266088: addu        $a2, $a2, $s1
    ctx->r6 = ADD32(ctx->r6, ctx->r17);
    // 0x8026608C: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    // 0x80266090: lw          $a2, -0x6A38($a2)
    ctx->r6 = MEM_W(ctx->r6, -0X6A38);
    // 0x80266094: jal         0x80266358
    // 0x80266098: andi        $a1, $s3, 0xFF
    ctx->r5 = ctx->r19 & 0XFF;
    ovl_80264800_func_80266358(rdram, ctx);
        goto after_4;
    // 0x80266098: andi        $a1, $s3, 0xFF
    ctx->r5 = ctx->r19 & 0XFF;
    after_4:
    // 0x8026609C: addiu       $s3, $s3, 0x1
    ctx->r19 = ADD32(ctx->r19, 0X1);
    // 0x802660A0: andi        $s2, $s3, 0xFF
    ctx->r18 = ctx->r19 & 0XFF;
    // 0x802660A4: slti        $at, $s2, 0x9
    ctx->r1 = SIGNED(ctx->r18) < 0X9 ? 1 : 0;
    // 0x802660A8: bne         $at, $zero, L_80266010
    if (ctx->r1 != 0) {
        // 0x802660AC: or          $s3, $s2, $zero
        ctx->r19 = ctx->r18 | 0;
            goto L_80266010;
    }
    // 0x802660AC: or          $s3, $s2, $zero
    ctx->r19 = ctx->r18 | 0;
    // 0x802660B0: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    // 0x802660B4: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x802660B8: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x802660BC: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x802660C0: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x802660C4: lw          $s4, 0x28($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X28);
    // 0x802660C8: lw          $s5, 0x2C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X2C);
    // 0x802660CC: lw          $s6, 0x30($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X30);
    // 0x802660D0: lw          $s7, 0x34($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X34);
    // 0x802660D4: lw          $fp, 0x38($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X38);
    // 0x802660D8: jr          $ra
    // 0x802660DC: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    return;
    // 0x802660DC: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
RECOMP_FUNC void ovl_80264800_func_80266010(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
L_80266010:
    // 0x80266010: or          $a0, $s5, $zero
    ctx->r4 = ctx->r21 | 0;
    // 0x80266014: jal         0x800293DC
    // 0x80266018: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    func_800293DC(rdram, ctx);
        goto after_0;
    // 0x80266018: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    after_0:
    // 0x8026601C: sll         $s1, $s3, 2
    ctx->r17 = S32(ctx->r19 << 2);
    // 0x80266020: lw          $s0, 0x14($v0)
    ctx->r16 = MEM_W(ctx->r2, 0X14);
    // 0x80266024: sb          $s2, 0x3C($v0)
    MEM_B(0X3C, ctx->r2) = ctx->r18;
    // 0x80266028: addu        $t6, $s6, $s1
    ctx->r14 = ADD32(ctx->r22, ctx->r17);
    // 0x8026602C: lw          $a1, 0x0($t6)
    ctx->r5 = MEM_W(ctx->r14, 0X0);
    // 0x80266030: jal         0x8026631C
    // 0x80266034: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_80264800_func_8026631C(rdram, ctx);
        goto after_1;
    // 0x80266034: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
    // 0x80266038: sll         $s4, $s2, 24
    ctx->r20 = S32(ctx->r18 << 24);
    // 0x8026603C: sra         $t7, $s4, 24
    ctx->r15 = S32(SIGNED(ctx->r20) >> 24);
    // 0x80266040: lw          $s0, 0x0($s0)
    ctx->r16 = MEM_W(ctx->r16, 0X0);
    // 0x80266044: sll         $a1, $t7, 24
    ctx->r5 = S32(ctx->r15 << 24);
    // 0x80266048: addu        $t9, $s7, $s1
    ctx->r25 = ADD32(ctx->r23, ctx->r17);
    // 0x8026604C: lw          $a2, 0x0($t9)
    ctx->r6 = MEM_W(ctx->r25, 0X0);
    // 0x80266050: sra         $t8, $a1, 24
    ctx->r24 = S32(SIGNED(ctx->r5) >> 24);
    // 0x80266054: or          $a1, $t8, $zero
    ctx->r5 = ctx->r24 | 0;
    // 0x80266058: or          $s4, $t7, $zero
    ctx->r20 = ctx->r15 | 0;
    // 0x8026605C: jal         0x8026627C
    // 0x80266060: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_80264800_func_8026627C(rdram, ctx);
        goto after_2;
    // 0x80266060: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_2:
    // 0x80266064: lw          $s0, 0x0($s0)
    ctx->r16 = MEM_W(ctx->r16, 0X0);
    // 0x80266068: sll         $a1, $s4, 24
    ctx->r5 = S32(ctx->r20 << 24);
    // 0x8026606C: addu        $t1, $fp, $s1
    ctx->r9 = ADD32(ctx->r30, ctx->r17);
    // 0x80266070: lw          $a2, 0x0($t1)
    ctx->r6 = MEM_W(ctx->r9, 0X0);
    // 0x80266074: sra         $t0, $a1, 24
    ctx->r8 = S32(SIGNED(ctx->r5) >> 24);
    // 0x80266078: or          $a1, $t0, $zero
    ctx->r5 = ctx->r8 | 0;
    // 0x8026607C: jal         0x802662CC
    // 0x80266080: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_80264800_func_802662CC(rdram, ctx);
        goto after_3;
    // 0x80266080: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_3:
    // 0x80266084: lui         $a2, 0x8027
    ctx->r6 = S32(0X8027 << 16);
    // 0x80266088: addu        $a2, $a2, $s1
    ctx->r6 = ADD32(ctx->r6, ctx->r17);
    // 0x8026608C: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    // 0x80266090: lw          $a2, -0x6A38($a2)
    ctx->r6 = MEM_W(ctx->r6, -0X6A38);
    // 0x80266094: jal         0x80266358
    // 0x80266098: andi        $a1, $s3, 0xFF
    ctx->r5 = ctx->r19 & 0XFF;
    ovl_80264800_func_80266358(rdram, ctx);
        goto after_4;
    // 0x80266098: andi        $a1, $s3, 0xFF
    ctx->r5 = ctx->r19 & 0XFF;
    after_4:
    // 0x8026609C: addiu       $s3, $s3, 0x1
    ctx->r19 = ADD32(ctx->r19, 0X1);
    // 0x802660A0: andi        $s2, $s3, 0xFF
    ctx->r18 = ctx->r19 & 0XFF;
    // 0x802660A4: slti        $at, $s2, 0x9
    ctx->r1 = SIGNED(ctx->r18) < 0X9 ? 1 : 0;
    // 0x802660A8: bne         $at, $zero, L_80266010
    if (ctx->r1 != 0) {
        // 0x802660AC: or          $s3, $s2, $zero
        ctx->r19 = ctx->r18 | 0;
            goto L_80266010;
    }
    // 0x802660AC: or          $s3, $s2, $zero
    ctx->r19 = ctx->r18 | 0;
    // 0x802660B0: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    // 0x802660B4: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x802660B8: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x802660BC: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x802660C0: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x802660C4: lw          $s4, 0x28($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X28);
    // 0x802660C8: lw          $s5, 0x2C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X2C);
    // 0x802660CC: lw          $s6, 0x30($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X30);
    // 0x802660D0: lw          $s7, 0x34($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X34);
    // 0x802660D4: lw          $fp, 0x38($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X38);
    // 0x802660D8: jr          $ra
    // 0x802660DC: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    return;
    // 0x802660DC: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
RECOMP_FUNC void ovl_80264800_func_8026605C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
L_80266010:
    // 0x8026605C: jal         0x8026627C
    // 0x80266060: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_80264800_func_8026627C(rdram, ctx);
        goto after_0;
    // 0x80266060: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_0:
    // 0x80266064: lw          $s0, 0x0($s0)
    ctx->r16 = MEM_W(ctx->r16, 0X0);
    // 0x80266068: sll         $a1, $s4, 24
    ctx->r5 = S32(ctx->r20 << 24);
    // 0x8026606C: addu        $t1, $fp, $s1
    ctx->r9 = ADD32(ctx->r30, ctx->r17);
    // 0x80266070: lw          $a2, 0x0($t1)
    ctx->r6 = MEM_W(ctx->r9, 0X0);
    // 0x80266074: sra         $t0, $a1, 24
    ctx->r8 = S32(SIGNED(ctx->r5) >> 24);
    // 0x80266078: or          $a1, $t0, $zero
    ctx->r5 = ctx->r8 | 0;
    // 0x8026607C: jal         0x802662CC
    // 0x80266080: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_80264800_func_802662CC(rdram, ctx);
        goto after_1;
    // 0x80266080: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
    // 0x80266084: lui         $a2, 0x8027
    ctx->r6 = S32(0X8027 << 16);
    // 0x80266088: addu        $a2, $a2, $s1
    ctx->r6 = ADD32(ctx->r6, ctx->r17);
    // 0x8026608C: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    // 0x80266090: lw          $a2, -0x6A38($a2)
    ctx->r6 = MEM_W(ctx->r6, -0X6A38);
    // 0x80266094: jal         0x80266358
    // 0x80266098: andi        $a1, $s3, 0xFF
    ctx->r5 = ctx->r19 & 0XFF;
    ovl_80264800_func_80266358(rdram, ctx);
        goto after_2;
    // 0x80266098: andi        $a1, $s3, 0xFF
    ctx->r5 = ctx->r19 & 0XFF;
    after_2:
    // 0x8026609C: addiu       $s3, $s3, 0x1
    ctx->r19 = ADD32(ctx->r19, 0X1);
    // 0x802660A0: andi        $s2, $s3, 0xFF
    ctx->r18 = ctx->r19 & 0XFF;
    // 0x802660A4: slti        $at, $s2, 0x9
    ctx->r1 = SIGNED(ctx->r18) < 0X9 ? 1 : 0;
    // 0x802660A8: bne         $at, $zero, L_80266010
    if (ctx->r1 != 0) {
            // 0x802660AC: or          $s3, $s2, $zero
    ctx->r19 = ctx->r18 | 0;
    ovl_80264800_func_80266010(rdram, ctx);
    return;
    }
    // 0x802660AC: or          $s3, $s2, $zero
    ctx->r19 = ctx->r18 | 0;
    // 0x802660B0: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    // 0x802660B4: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x802660B8: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x802660BC: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x802660C0: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x802660C4: lw          $s4, 0x28($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X28);
    // 0x802660C8: lw          $s5, 0x2C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X2C);
    // 0x802660CC: lw          $s6, 0x30($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X30);
    // 0x802660D0: lw          $s7, 0x34($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X34);
    // 0x802660D4: lw          $fp, 0x38($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X38);
    // 0x802660D8: jr          $ra
    // 0x802660DC: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    return;
    // 0x802660DC: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
RECOMP_FUNC void ovl_80264800_func_802660E0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802660E0: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x802660E4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802660E8: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x802660EC: lw          $v1, 0x8($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X8);
    // 0x802660F0: lb          $a3, 0x3C($a0)
    ctx->r7 = MEM_B(ctx->r4, 0X3C);
    // 0x802660F4: lbu         $t6, 0x38($v1)
    ctx->r14 = MEM_BU(ctx->r3, 0X38);
    // 0x802660F8: or          $a2, $a0, $zero
    ctx->r6 = ctx->r4 | 0;
    // 0x802660FC: sltiu       $at, $t6, 0x6
    ctx->r1 = ctx->r14 < 0X6 ? 1 : 0;
    // 0x80266100: beq         $at, $zero, L_80266234
    if (ctx->r1 == 0) {
        // 0x80266104: sll         $t6, $t6, 2
        ctx->r14 = S32(ctx->r14 << 2);
            goto L_80266234;
    }
    // 0x80266104: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x80266108: lui         $at, 0x8027
    ctx->r1 = S32(0X8027 << 16);
    // 0x8026610C: addu        $at, $at, $t6
    gpr jr_addend_80266118 = ctx->r14;
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x80266110: lw          $t6, -0x65A8($at)
    ctx->r14 = ADD32(ctx->r1, -0X65A8);
    // 0x80266114: nop

    // 0x80266118: jr          $t6
    // 0x8026611C: nop

    switch (jr_addend_80266118 >> 2) {
        case 0: goto L_802661F8; break;
        case 1: goto L_80266120; break;
        case 2: goto L_8026621C; break;
        case 3: goto L_8026621C; break;
        case 4: goto L_802661A8; break;
        case 5: goto L_802661F8; break;
        default: switch_error(__func__, 0x80266118, 0x80269A58);
    }
    // 0x8026611C: nop

L_80266120:
    // 0x80266120: lui         $a0, 0x8005
    ctx->r4 = S32(0X8005 << 16);
    // 0x80266124: addiu       $a0, $a0, -0x3228
    ctx->r4 = ADD32(ctx->r4, -0X3228);
    // 0x80266128: sw          $v1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r3;
    // 0x8026612C: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    // 0x80266130: jal         0x8002A468
    // 0x80266134: sb          $a3, 0x1F($sp)
    MEM_B(0X1F, ctx->r29) = ctx->r7;
    func_8002A468(rdram, ctx);
        goto after_0;
    // 0x80266134: sb          $a3, 0x1F($sp)
    MEM_B(0X1F, ctx->r29) = ctx->r7;
    after_0:
    // 0x80266138: lw          $v1, 0x18($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X18);
    // 0x8026613C: lw          $a2, 0x20($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X20);
    // 0x80266140: lb          $v0, 0x39($v1)
    ctx->r2 = MEM_B(ctx->r3, 0X39);
    // 0x80266144: lb          $a3, 0x1F($sp)
    ctx->r7 = MEM_B(ctx->r29, 0X1F);
    // 0x80266148: beq         $v0, $zero, L_80266168
    if (ctx->r2 == 0) {
        // 0x8026614C: addiu       $at, $zero, 0x1
        ctx->r1 = ADD32(0, 0X1);
            goto L_80266168;
    }
    // 0x8026614C: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80266150: beq         $v0, $at, L_80266168
    if (ctx->r2 == ctx->r1) {
        // 0x80266154: addiu       $at, $zero, 0x2
        ctx->r1 = ADD32(0, 0X2);
            goto L_80266168;
    }
    // 0x80266154: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x80266158: beq         $v0, $at, L_80266178
    if (ctx->r2 == ctx->r1) {
        // 0x8026615C: nop
    
            goto L_80266178;
    }
    // 0x8026615C: nop

    // 0x80266160: b           L_80266238
    // 0x80266164: lhu         $v0, 0x3A($a2)
    ctx->r2 = MEM_HU(ctx->r6, 0X3A);
        goto L_80266238;
    // 0x80266164: lhu         $v0, 0x3A($a2)
    ctx->r2 = MEM_HU(ctx->r6, 0X3A);
L_80266168:
    // 0x80266168: addiu       $t7, $zero, 0xA
    ctx->r15 = ADD32(0, 0XA);
    // 0x8026616C: sh          $t7, 0x38($a2)
    MEM_H(0X38, ctx->r6) = ctx->r15;
    // 0x80266170: b           L_80266234
    // 0x80266174: sh          $zero, 0x3A($a2)
    MEM_H(0X3A, ctx->r6) = 0;
        goto L_80266234;
    // 0x80266174: sh          $zero, 0x3A($a2)
    MEM_H(0X3A, ctx->r6) = 0;
L_80266178:
    // 0x80266178: lb          $t8, 0x3E($v1)
    ctx->r24 = MEM_B(ctx->r3, 0X3E);
    // 0x8026617C: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    // 0x80266180: bne         $a3, $t8, L_8026619C
    if (ctx->r7 != ctx->r24) {
        // 0x80266184: addiu       $t9, $zero, 0xA
        ctx->r25 = ADD32(0, 0XA);
            goto L_8026619C;
    }
    // 0x80266184: addiu       $t9, $zero, 0xA
    ctx->r25 = ADD32(0, 0XA);
    // 0x80266188: jal         0x8006F678
    // 0x8026618C: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    func_8006F678(rdram, ctx);
        goto after_1;
    // 0x8026618C: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    after_1:
    // 0x80266190: lw          $a2, 0x20($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X20);
    // 0x80266194: b           L_80266238
    // 0x80266198: lhu         $v0, 0x3A($a2)
    ctx->r2 = MEM_HU(ctx->r6, 0X3A);
        goto L_80266238;
    // 0x80266198: lhu         $v0, 0x3A($a2)
    ctx->r2 = MEM_HU(ctx->r6, 0X3A);
L_8026619C:
    // 0x8026619C: sh          $t9, 0x38($a2)
    MEM_H(0X38, ctx->r6) = ctx->r25;
    // 0x802661A0: b           L_80266234
    // 0x802661A4: sh          $zero, 0x3A($a2)
    MEM_H(0X3A, ctx->r6) = 0;
        goto L_80266234;
    // 0x802661A4: sh          $zero, 0x3A($a2)
    MEM_H(0X3A, ctx->r6) = 0;
L_802661A8:
    // 0x802661A8: bne         $a3, $zero, L_802661C8
    if (ctx->r7 != 0) {
        // 0x802661AC: lui         $a0, 0x8005
        ctx->r4 = S32(0X8005 << 16);
            goto L_802661C8;
    }
    // 0x802661AC: lui         $a0, 0x8005
    ctx->r4 = S32(0X8005 << 16);
    // 0x802661B0: addiu       $a0, $a0, -0x3230
    ctx->r4 = ADD32(ctx->r4, -0X3230);
    // 0x802661B4: jal         0x8002A468
    // 0x802661B8: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    func_8002A468(rdram, ctx);
        goto after_2;
    // 0x802661B8: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    after_2:
    // 0x802661BC: lw          $a2, 0x20($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X20);
    // 0x802661C0: b           L_80266238
    // 0x802661C4: lhu         $v0, 0x3A($a2)
    ctx->r2 = MEM_HU(ctx->r6, 0X3A);
        goto L_80266238;
    // 0x802661C4: lhu         $v0, 0x3A($a2)
    ctx->r2 = MEM_HU(ctx->r6, 0X3A);
L_802661C8:
    // 0x802661C8: lb          $t0, 0x3E($v1)
    ctx->r8 = MEM_B(ctx->r3, 0X3E);
    // 0x802661CC: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    // 0x802661D0: bne         $a3, $t0, L_802661EC
    if (ctx->r7 != ctx->r8) {
        // 0x802661D4: addiu       $t1, $zero, 0xA
        ctx->r9 = ADD32(0, 0XA);
            goto L_802661EC;
    }
    // 0x802661D4: addiu       $t1, $zero, 0xA
    ctx->r9 = ADD32(0, 0XA);
    // 0x802661D8: jal         0x8006F678
    // 0x802661DC: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    func_8006F678(rdram, ctx);
        goto after_3;
    // 0x802661DC: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    after_3:
    // 0x802661E0: lw          $a2, 0x20($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X20);
    // 0x802661E4: b           L_80266238
    // 0x802661E8: lhu         $v0, 0x3A($a2)
    ctx->r2 = MEM_HU(ctx->r6, 0X3A);
        goto L_80266238;
    // 0x802661E8: lhu         $v0, 0x3A($a2)
    ctx->r2 = MEM_HU(ctx->r6, 0X3A);
L_802661EC:
    // 0x802661EC: sh          $t1, 0x38($a2)
    MEM_H(0X38, ctx->r6) = ctx->r9;
    // 0x802661F0: b           L_80266234
    // 0x802661F4: sh          $zero, 0x3A($a2)
    MEM_H(0X3A, ctx->r6) = 0;
        goto L_80266234;
    // 0x802661F4: sh          $zero, 0x3A($a2)
    MEM_H(0X3A, ctx->r6) = 0;
L_802661F8:
    // 0x802661F8: lui         $a0, 0x8005
    ctx->r4 = S32(0X8005 << 16);
    // 0x802661FC: addiu       $a0, $a0, -0x3228
    ctx->r4 = ADD32(ctx->r4, -0X3228);
    // 0x80266200: jal         0x8002A468
    // 0x80266204: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    func_8002A468(rdram, ctx);
        goto after_4;
    // 0x80266204: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    after_4:
    // 0x80266208: lw          $a2, 0x20($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X20);
    // 0x8026620C: nop

    // 0x80266210: sh          $zero, 0x38($a2)
    MEM_H(0X38, ctx->r6) = 0;
    // 0x80266214: b           L_80266234
    // 0x80266218: sh          $zero, 0x3A($a2)
    MEM_H(0X3A, ctx->r6) = 0;
        goto L_80266234;
    // 0x80266218: sh          $zero, 0x3A($a2)
    MEM_H(0X3A, ctx->r6) = 0;
L_8026621C:
    // 0x8026621C: lui         $a0, 0x8005
    ctx->r4 = S32(0X8005 << 16);
    // 0x80266220: addiu       $a0, $a0, -0x3230
    ctx->r4 = ADD32(ctx->r4, -0X3230);
    // 0x80266224: jal         0x8002A468
    // 0x80266228: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    func_8002A468(rdram, ctx);
        goto after_5;
    // 0x80266228: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    after_5:
    // 0x8026622C: lw          $a2, 0x20($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X20);
    // 0x80266230: nop

L_80266234:
    // 0x80266234: lhu         $v0, 0x3A($a2)
    ctx->r2 = MEM_HU(ctx->r6, 0X3A);
L_80266238:
    // 0x80266238: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    // 0x8026623C: beq         $v0, $zero, L_80266264
    if (ctx->r2 == 0) {
        // 0x80266240: addiu       $a1, $zero, 0x2
        ctx->r5 = ADD32(0, 0X2);
            goto L_80266264;
    }
    // 0x80266240: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x80266244: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80266248: bne         $v0, $at, L_8026626C
    if (ctx->r2 != ctx->r1) {
        // 0x8026624C: addiu       $a1, $zero, 0x2
        ctx->r5 = ADD32(0, 0X2);
            goto L_8026626C;
    }
    // 0x8026624C: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x80266250: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    // 0x80266254: jal         0x8002135C
    // 0x80266258: addiu       $a2, $zero, 0xA8
    ctx->r6 = ADD32(0, 0XA8);
    func_8002135C(rdram, ctx);
        goto after_6;
    // 0x80266258: addiu       $a2, $zero, 0xA8
    ctx->r6 = ADD32(0, 0XA8);
    after_6:
    // 0x8026625C: b           L_80266270
    // 0x80266260: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80266270;
    // 0x80266260: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80266264:
    // 0x80266264: jal         0x8002135C
    // 0x80266268: addiu       $a2, $zero, 0xA3
    ctx->r6 = ADD32(0, 0XA3);
    func_8002135C(rdram, ctx);
        goto after_7;
    // 0x80266268: addiu       $a2, $zero, 0xA3
    ctx->r6 = ADD32(0, 0XA3);
    after_7:
L_8026626C:
    // 0x8026626C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80266270:
    // 0x80266270: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80266274: jr          $ra
    // 0x80266278: nop

    return;
    // 0x80266278: nop

;}
RECOMP_FUNC void ovl_80264800_func_802661D4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802661D4: addiu       $t1, $zero, 0xA
    ctx->r9 = ADD32(0, 0XA);
    // 0x802661D8: jal         0x8006F678
    // 0x802661DC: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    func_8006F678(rdram, ctx);
        goto after_0;
    // 0x802661DC: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    after_0:
    // 0x802661E0: lw          $a2, 0x20($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X20);
    // 0x802661E4: b           L_80266238
    // 0x802661E8: lhu         $v0, 0x3A($a2)
    ctx->r2 = MEM_HU(ctx->r6, 0X3A);
        goto L_80266238;
    // 0x802661E8: lhu         $v0, 0x3A($a2)
    ctx->r2 = MEM_HU(ctx->r6, 0X3A);
    // 0x802661EC: sh          $t1, 0x38($a2)
    MEM_H(0X38, ctx->r6) = ctx->r9;
    // 0x802661F0: b           L_80266234
    // 0x802661F4: sh          $zero, 0x3A($a2)
    MEM_H(0X3A, ctx->r6) = 0;
        goto L_80266234;
    // 0x802661F4: sh          $zero, 0x3A($a2)
    MEM_H(0X3A, ctx->r6) = 0;
    // 0x802661F8: lui         $a0, 0x8005
    ctx->r4 = S32(0X8005 << 16);
    // 0x802661FC: addiu       $a0, $a0, -0x3228
    ctx->r4 = ADD32(ctx->r4, -0X3228);
    // 0x80266200: jal         0x8002A468
    // 0x80266204: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    func_8002A468(rdram, ctx);
        goto after_1;
    // 0x80266204: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    after_1:
    // 0x80266208: lw          $a2, 0x20($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X20);
    // 0x8026620C: nop

    // 0x80266210: sh          $zero, 0x38($a2)
    MEM_H(0X38, ctx->r6) = 0;
    // 0x80266214: b           L_80266234
    // 0x80266218: sh          $zero, 0x3A($a2)
    MEM_H(0X3A, ctx->r6) = 0;
        goto L_80266234;
    // 0x80266218: sh          $zero, 0x3A($a2)
    MEM_H(0X3A, ctx->r6) = 0;
    // 0x8026621C: lui         $a0, 0x8005
    ctx->r4 = S32(0X8005 << 16);
    // 0x80266220: addiu       $a0, $a0, -0x3230
    ctx->r4 = ADD32(ctx->r4, -0X3230);
    // 0x80266224: jal         0x8002A468
    // 0x80266228: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    func_8002A468(rdram, ctx);
        goto after_2;
    // 0x80266228: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    after_2:
    // 0x8026622C: lw          $a2, 0x20($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X20);
    // 0x80266230: nop

L_80266234:
    // 0x80266234: lhu         $v0, 0x3A($a2)
    ctx->r2 = MEM_HU(ctx->r6, 0X3A);
L_80266238:
    // 0x80266238: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    // 0x8026623C: beq         $v0, $zero, L_80266264
    if (ctx->r2 == 0) {
        // 0x80266240: addiu       $a1, $zero, 0x2
        ctx->r5 = ADD32(0, 0X2);
            goto L_80266264;
    }
    // 0x80266240: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x80266244: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80266248: bne         $v0, $at, L_8026626C
    if (ctx->r2 != ctx->r1) {
        // 0x8026624C: addiu       $a1, $zero, 0x2
        ctx->r5 = ADD32(0, 0X2);
            goto L_8026626C;
    }
    // 0x8026624C: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x80266250: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    // 0x80266254: jal         0x8002135C
    // 0x80266258: addiu       $a2, $zero, 0xA8
    ctx->r6 = ADD32(0, 0XA8);
    func_8002135C(rdram, ctx);
        goto after_3;
    // 0x80266258: addiu       $a2, $zero, 0xA8
    ctx->r6 = ADD32(0, 0XA8);
    after_3:
    // 0x8026625C: b           L_80266270
    // 0x80266260: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80266270;
    // 0x80266260: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80266264:
    // 0x80266264: jal         0x8002135C
    // 0x80266268: addiu       $a2, $zero, 0xA3
    ctx->r6 = ADD32(0, 0XA3);
    func_8002135C(rdram, ctx);
        goto after_4;
    // 0x80266268: addiu       $a2, $zero, 0xA3
    ctx->r6 = ADD32(0, 0XA3);
    after_4:
L_8026626C:
    // 0x8026626C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80266270:
    // 0x80266270: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80266274: jr          $ra
    // 0x80266278: nop

    return;
    // 0x80266278: nop

;}
