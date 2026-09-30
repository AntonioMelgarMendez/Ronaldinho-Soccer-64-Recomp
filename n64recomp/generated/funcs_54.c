#include "iss64_recomp.h"
#include "funcs.h"

RECOMP_FUNC void ovl_8024B800_func_802658D0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802658D0: addiu       $a0, $zero, 0x5
    ctx->r4 = ADD32(0, 0X5);
    // 0x802658D4: addiu       $t1, $zero, 0x3
    ctx->r9 = ADD32(0, 0X3);
    // 0x802658D8: sw          $t1, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->r9;
    // 0x802658DC: bne         $a0, $v0, L_802658E8
    if (ctx->r4 != ctx->r2) {
        // 0x802658E0: addiu       $t2, $zero, 0x5
        ctx->r10 = ADD32(0, 0X5);
            goto L_802658E8;
    }
    // 0x802658E0: addiu       $t2, $zero, 0x5
    ctx->r10 = ADD32(0, 0X5);
    // 0x802658E4: sw          $t2, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->r10;
L_802658E8:
    // 0x802658E8: lw          $t3, 0x24($s5)
    ctx->r11 = MEM_W(ctx->r21, 0X24);
    // 0x802658EC: addiu       $t4, $zero, 0x5
    ctx->r12 = ADD32(0, 0X5);
    // 0x802658F0: lbu         $v0, 0x2($t3)
    ctx->r2 = MEM_BU(ctx->r11, 0X2);
    // 0x802658F4: addiu       $t5, $zero, 0x2
    ctx->r13 = ADD32(0, 0X2);
    // 0x802658F8: bne         $v1, $v0, L_80265904
    if (ctx->r3 != ctx->r2) {
        // 0x802658FC: nop
    
            goto L_80265904;
    }
    // 0x802658FC: nop

    // 0x80265900: sw          $t4, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->r12;
L_80265904:
    // 0x80265904: bne         $a0, $v0, L_80265910
    if (ctx->r4 != ctx->r2) {
        // 0x80265908: nop
    
            goto L_80265910;
    }
    // 0x80265908: nop

    // 0x8026590C: sw          $t5, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->r13;
L_80265910:
    // 0x80265910: lh          $t6, 0x8B8($s5)
    ctx->r14 = MEM_H(ctx->r21, 0X8B8);
    // 0x80265914: nop

    // 0x80265918: mtc1        $t6, $f10
    ctx->f10.u32l = ctx->r14;
    // 0x8026591C: jal         0x802645E0
    // 0x80265920: cvt.s.w     $f12, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    ctx->f12.fl = CVT_S_W(ctx->f10.u32l);
    ovl_8024B800_func_802645E0(rdram, ctx);
        goto after_0;
    // 0x80265920: cvt.s.w     $f12, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    ctx->f12.fl = CVT_S_W(ctx->f10.u32l);
    after_0:
    // 0x80265924: sll         $t7, $v0, 2
    ctx->r15 = S32(ctx->r2 << 2);
    // 0x80265928: lui         $s2, 0x800B
    ctx->r18 = S32(0X800B << 16);
    // 0x8026592C: lw          $t8, 0x70($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X70);
    // 0x80265930: addu        $s2, $s2, $t7
    ctx->r18 = ADD32(ctx->r18, ctx->r15);
    // 0x80265934: lw          $s2, -0x3F3C($s2)
    ctx->r18 = MEM_W(ctx->r18, -0X3F3C);
    // 0x80265938: beq         $t8, $zero, L_80265A0C
    if (ctx->r24 == 0) {
        // 0x8026593C: sll         $s1, $zero, 5
        ctx->r17 = S32(0 << 5);
            goto L_80265A0C;
    }
    // 0x8026593C: sll         $s1, $zero, 5
    ctx->r17 = S32(0 << 5);
    // 0x80265940: subu        $s1, $s1, $zero
    ctx->r17 = SUB32(ctx->r17, 0);
    // 0x80265944: sll         $s1, $s1, 3
    ctx->r17 = S32(ctx->r17 << 3);
    // 0x80265948: addiu       $s4, $zero, 0x9B0
    ctx->r20 = ADD32(0, 0X9B0);
L_8026594C:
    // 0x8026594C: lw          $t9, 0x18($s5)
    ctx->r25 = MEM_W(ctx->r21, 0X18);
    // 0x80265950: lw          $t2, 0x6C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X6C);
    // 0x80265954: addu        $s0, $t9, $s1
    ctx->r16 = ADD32(ctx->r25, ctx->r17);
    // 0x80265958: lhu         $t0, 0x10A($s0)
    ctx->r8 = MEM_HU(ctx->r16, 0X10A);
    // 0x8026595C: addiu       $s0, $s0, 0xF8
    ctx->r16 = ADD32(ctx->r16, 0XF8);
    // 0x80265960: andi        $t1, $t0, 0x200
    ctx->r9 = ctx->r8 & 0X200;
    // 0x80265964: bne         $t1, $zero, L_802659F8
    if (ctx->r9 != 0) {
        // 0x80265968: lw          $t8, 0x70($sp)
        ctx->r24 = MEM_W(ctx->r29, 0X70);
            goto L_802659F8;
    }
    // 0x80265968: lw          $t8, 0x70($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X70);
    // 0x8026596C: lbu         $v1, 0x3($s2)
    ctx->r3 = MEM_BU(ctx->r18, 0X3);
    // 0x80265970: addiu       $t6, $zero, 0xC
    ctx->r14 = ADD32(0, 0XC);
    // 0x80265974: sltu        $at, $v1, $t2
    ctx->r1 = ctx->r3 < ctx->r10 ? 1 : 0;
    // 0x80265978: beq         $at, $zero, L_802659B4
    if (ctx->r1 == 0) {
        // 0x8026597C: nop
    
            goto L_802659B4;
    }
    // 0x8026597C: nop

    // 0x80265980: lw          $v0, 0x24($s5)
    ctx->r2 = MEM_W(ctx->r21, 0X24);
    // 0x80265984: addiu       $at, $zero, 0x5
    ctx->r1 = ADD32(0, 0X5);
    // 0x80265988: lbu         $t3, 0x2($v0)
    ctx->r11 = MEM_BU(ctx->r2, 0X2);
    // 0x8026598C: addu        $t4, $v0, $v1
    ctx->r12 = ADD32(ctx->r2, ctx->r3);
    // 0x80265990: bne         $t3, $at, L_802659A8
    if (ctx->r11 != ctx->r1) {
        // 0x80265994: nop
    
            goto L_802659A8;
    }
    // 0x80265994: nop

    // 0x80265998: jal         0x80264E0C
    // 0x8026599C: or          $a0, $s5, $zero
    ctx->r4 = ctx->r21 | 0;
    ovl_8024B800_func_80264E0C(rdram, ctx);
        goto after_1;
    // 0x8026599C: or          $a0, $s5, $zero
    ctx->r4 = ctx->r21 | 0;
    after_1:
    // 0x802659A0: b           L_802659B8
    // 0x802659A4: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
        goto L_802659B8;
    // 0x802659A4: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
L_802659A8:
    // 0x802659A8: lb          $t5, 0x88E($t4)
    ctx->r13 = MEM_B(ctx->r12, 0X88E);
    // 0x802659AC: b           L_802659B8
    // 0x802659B0: sb          $t5, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r13;
        goto L_802659B8;
    // 0x802659B0: sb          $t5, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r13;
L_802659B4:
    // 0x802659B4: sb          $t6, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r14;
L_802659B8:
    // 0x802659B8: lbu         $t7, 0xA($s0)
    ctx->r15 = MEM_BU(ctx->r16, 0XA);
    // 0x802659BC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802659C0: slti        $at, $t7, 0xB
    ctx->r1 = SIGNED(ctx->r15) < 0XB ? 1 : 0;
    // 0x802659C4: beq         $at, $zero, L_802659D4
    if (ctx->r1 == 0) {
        // 0x802659C8: or          $a1, $s2, $zero
        ctx->r5 = ctx->r18 | 0;
            goto L_802659D4;
    }
    // 0x802659C8: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    // 0x802659CC: b           L_802659D8
    // 0x802659D0: addiu       $v0, $zero, 0x1F
    ctx->r2 = ADD32(0, 0X1F);
        goto L_802659D8;
    // 0x802659D0: addiu       $v0, $zero, 0x1F
    ctx->r2 = ADD32(0, 0X1F);
L_802659D4:
    // 0x802659D4: addiu       $v0, $zero, 0x29
    ctx->r2 = ADD32(0, 0X29);
L_802659D8:
    // 0x802659D8: jal         0x80264520
    // 0x802659DC: andi        $a2, $v0, 0xFFFF
    ctx->r6 = ctx->r2 & 0XFFFF;
    ovl_8024B800_func_80264520(rdram, ctx);
        goto after_2;
    // 0x802659DC: andi        $a2, $v0, 0xFFFF
    ctx->r6 = ctx->r2 & 0XFFFF;
    after_2:
    // 0x802659E0: lh          $a1, 0x8B8($s5)
    ctx->r5 = MEM_H(ctx->r21, 0X8B8);
    // 0x802659E4: jal         0x80264710
    // 0x802659E8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_8024B800_func_80264710(rdram, ctx);
        goto after_3;
    // 0x802659E8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_3:
    // 0x802659EC: addiu       $s3, $s3, 0x1
    ctx->r19 = ADD32(ctx->r19, 0X1);
    // 0x802659F0: addiu       $s2, $s2, 0x4
    ctx->r18 = ADD32(ctx->r18, 0X4);
    // 0x802659F4: lw          $t8, 0x70($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X70);
L_802659F8:
    // 0x802659F8: addiu       $s1, $s1, 0xF8
    ctx->r17 = ADD32(ctx->r17, 0XF8);
    // 0x802659FC: beq         $s3, $t8, L_80265A10
    if (ctx->r19 == ctx->r24) {
        // 0x80265A00: lw          $ra, 0x44($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X44);
            goto L_80265A10;
    }
    // 0x80265A00: lw          $ra, 0x44($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X44);
    // 0x80265A04: bne         $s1, $s4, L_8026594C
    if (ctx->r17 != ctx->r20) {
        // 0x80265A08: nop
    
            goto L_8026594C;
    }
    // 0x80265A08: nop

L_80265A0C:
    // 0x80265A0C: lw          $ra, 0x44($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X44);
L_80265A10:
    // 0x80265A10: lwc1        $f21, 0x18($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X18);
    // 0x80265A14: lwc1        $f20, 0x1C($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x80265A18: lwc1        $f23, 0x20($sp)
    ctx->f_odd[(23 - 1) * 2] = MEM_W(ctx->r29, 0X20);
    // 0x80265A1C: lwc1        $f22, 0x24($sp)
    ctx->f22.u32l = MEM_W(ctx->r29, 0X24);
    // 0x80265A20: lw          $s0, 0x2C($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X2C);
    // 0x80265A24: lw          $s1, 0x30($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X30);
    // 0x80265A28: lw          $s2, 0x34($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X34);
    // 0x80265A2C: lw          $s3, 0x38($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X38);
    // 0x80265A30: lw          $s4, 0x3C($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X3C);
    // 0x80265A34: lw          $s5, 0x40($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X40);
    // 0x80265A38: jr          $ra
    // 0x80265A3C: addiu       $sp, $sp, 0xB8
    ctx->r29 = ADD32(ctx->r29, 0XB8);
    return;
    // 0x80265A3C: addiu       $sp, $sp, 0xB8
    ctx->r29 = ADD32(ctx->r29, 0XB8);
;}
RECOMP_FUNC void ovl_8024B800_func_8026594C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
L_8026594C:
    // 0x8026594C: lw          $t9, 0x18($s5)
    ctx->r25 = MEM_W(ctx->r21, 0X18);
    // 0x80265950: lw          $t2, 0x6C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X6C);
    // 0x80265954: addu        $s0, $t9, $s1
    ctx->r16 = ADD32(ctx->r25, ctx->r17);
    // 0x80265958: lhu         $t0, 0x10A($s0)
    ctx->r8 = MEM_HU(ctx->r16, 0X10A);
    // 0x8026595C: addiu       $s0, $s0, 0xF8
    ctx->r16 = ADD32(ctx->r16, 0XF8);
    // 0x80265960: andi        $t1, $t0, 0x200
    ctx->r9 = ctx->r8 & 0X200;
    // 0x80265964: bne         $t1, $zero, L_802659F8
    if (ctx->r9 != 0) {
        // 0x80265968: lw          $t8, 0x70($sp)
        ctx->r24 = MEM_W(ctx->r29, 0X70);
            goto L_802659F8;
    }
    // 0x80265968: lw          $t8, 0x70($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X70);
    // 0x8026596C: lbu         $v1, 0x3($s2)
    ctx->r3 = MEM_BU(ctx->r18, 0X3);
    // 0x80265970: addiu       $t6, $zero, 0xC
    ctx->r14 = ADD32(0, 0XC);
    // 0x80265974: sltu        $at, $v1, $t2
    ctx->r1 = ctx->r3 < ctx->r10 ? 1 : 0;
    // 0x80265978: beq         $at, $zero, L_802659B4
    if (ctx->r1 == 0) {
        // 0x8026597C: nop
    
            goto L_802659B4;
    }
    // 0x8026597C: nop

    // 0x80265980: lw          $v0, 0x24($s5)
    ctx->r2 = MEM_W(ctx->r21, 0X24);
    // 0x80265984: addiu       $at, $zero, 0x5
    ctx->r1 = ADD32(0, 0X5);
    // 0x80265988: lbu         $t3, 0x2($v0)
    ctx->r11 = MEM_BU(ctx->r2, 0X2);
    // 0x8026598C: addu        $t4, $v0, $v1
    ctx->r12 = ADD32(ctx->r2, ctx->r3);
    // 0x80265990: bne         $t3, $at, L_802659A8
    if (ctx->r11 != ctx->r1) {
        // 0x80265994: nop
    
            goto L_802659A8;
    }
    // 0x80265994: nop

    // 0x80265998: jal         0x80264E0C
    // 0x8026599C: or          $a0, $s5, $zero
    ctx->r4 = ctx->r21 | 0;
    ovl_8024B800_func_80264E0C(rdram, ctx);
        goto after_0;
    // 0x8026599C: or          $a0, $s5, $zero
    ctx->r4 = ctx->r21 | 0;
    after_0:
    // 0x802659A0: b           L_802659B8
    // 0x802659A4: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
        goto L_802659B8;
    // 0x802659A4: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
L_802659A8:
    // 0x802659A8: lb          $t5, 0x88E($t4)
    ctx->r13 = MEM_B(ctx->r12, 0X88E);
    // 0x802659AC: b           L_802659B8
    // 0x802659B0: sb          $t5, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r13;
        goto L_802659B8;
    // 0x802659B0: sb          $t5, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r13;
L_802659B4:
    // 0x802659B4: sb          $t6, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r14;
L_802659B8:
    // 0x802659B8: lbu         $t7, 0xA($s0)
    ctx->r15 = MEM_BU(ctx->r16, 0XA);
    // 0x802659BC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802659C0: slti        $at, $t7, 0xB
    ctx->r1 = SIGNED(ctx->r15) < 0XB ? 1 : 0;
    // 0x802659C4: beq         $at, $zero, L_802659D4
    if (ctx->r1 == 0) {
        // 0x802659C8: or          $a1, $s2, $zero
        ctx->r5 = ctx->r18 | 0;
            goto L_802659D4;
    }
    // 0x802659C8: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    // 0x802659CC: b           L_802659D8
    // 0x802659D0: addiu       $v0, $zero, 0x1F
    ctx->r2 = ADD32(0, 0X1F);
        goto L_802659D8;
    // 0x802659D0: addiu       $v0, $zero, 0x1F
    ctx->r2 = ADD32(0, 0X1F);
L_802659D4:
    // 0x802659D4: addiu       $v0, $zero, 0x29
    ctx->r2 = ADD32(0, 0X29);
L_802659D8:
    // 0x802659D8: jal         0x80264520
    // 0x802659DC: andi        $a2, $v0, 0xFFFF
    ctx->r6 = ctx->r2 & 0XFFFF;
    ovl_8024B800_func_80264520(rdram, ctx);
        goto after_1;
    // 0x802659DC: andi        $a2, $v0, 0xFFFF
    ctx->r6 = ctx->r2 & 0XFFFF;
    after_1:
    // 0x802659E0: lh          $a1, 0x8B8($s5)
    ctx->r5 = MEM_H(ctx->r21, 0X8B8);
    // 0x802659E4: jal         0x80264710
    // 0x802659E8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_8024B800_func_80264710(rdram, ctx);
        goto after_2;
    // 0x802659E8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_2:
    // 0x802659EC: addiu       $s3, $s3, 0x1
    ctx->r19 = ADD32(ctx->r19, 0X1);
    // 0x802659F0: addiu       $s2, $s2, 0x4
    ctx->r18 = ADD32(ctx->r18, 0X4);
    // 0x802659F4: lw          $t8, 0x70($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X70);
L_802659F8:
    // 0x802659F8: addiu       $s1, $s1, 0xF8
    ctx->r17 = ADD32(ctx->r17, 0XF8);
    // 0x802659FC: beq         $s3, $t8, L_80265A10
    if (ctx->r19 == ctx->r24) {
        // 0x80265A00: lw          $ra, 0x44($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X44);
            goto L_80265A10;
    }
    // 0x80265A00: lw          $ra, 0x44($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X44);
    // 0x80265A04: bne         $s1, $s4, L_8026594C
    if (ctx->r17 != ctx->r20) {
        // 0x80265A08: nop
    
            goto L_8026594C;
    }
    // 0x80265A08: nop

    // 0x80265A0C: lw          $ra, 0x44($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X44);
L_80265A10:
    // 0x80265A10: lwc1        $f21, 0x18($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X18);
    // 0x80265A14: lwc1        $f20, 0x1C($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x80265A18: lwc1        $f23, 0x20($sp)
    ctx->f_odd[(23 - 1) * 2] = MEM_W(ctx->r29, 0X20);
    // 0x80265A1C: lwc1        $f22, 0x24($sp)
    ctx->f22.u32l = MEM_W(ctx->r29, 0X24);
    // 0x80265A20: lw          $s0, 0x2C($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X2C);
    // 0x80265A24: lw          $s1, 0x30($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X30);
    // 0x80265A28: lw          $s2, 0x34($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X34);
    // 0x80265A2C: lw          $s3, 0x38($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X38);
    // 0x80265A30: lw          $s4, 0x3C($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X3C);
    // 0x80265A34: lw          $s5, 0x40($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X40);
    // 0x80265A38: jr          $ra
    // 0x80265A3C: addiu       $sp, $sp, 0xB8
    ctx->r29 = ADD32(ctx->r29, 0XB8);
    return;
    // 0x80265A3C: addiu       $sp, $sp, 0xB8
    ctx->r29 = ADD32(ctx->r29, 0XB8);
;}
RECOMP_FUNC void ovl_8024B800_func_80265968(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
L_8026594C:
    // 0x80265968: lw          $t8, 0x70($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X70);
    // 0x8026596C: lbu         $v1, 0x3($s2)
    ctx->r3 = MEM_BU(ctx->r18, 0X3);
    // 0x80265970: addiu       $t6, $zero, 0xC
    ctx->r14 = ADD32(0, 0XC);
    // 0x80265974: sltu        $at, $v1, $t2
    ctx->r1 = ctx->r3 < ctx->r10 ? 1 : 0;
    // 0x80265978: beq         $at, $zero, L_802659B4
    if (ctx->r1 == 0) {
        // 0x8026597C: nop
    
            goto L_802659B4;
    }
    // 0x8026597C: nop

    // 0x80265980: lw          $v0, 0x24($s5)
    ctx->r2 = MEM_W(ctx->r21, 0X24);
    // 0x80265984: addiu       $at, $zero, 0x5
    ctx->r1 = ADD32(0, 0X5);
    // 0x80265988: lbu         $t3, 0x2($v0)
    ctx->r11 = MEM_BU(ctx->r2, 0X2);
    // 0x8026598C: addu        $t4, $v0, $v1
    ctx->r12 = ADD32(ctx->r2, ctx->r3);
    // 0x80265990: bne         $t3, $at, L_802659A8
    if (ctx->r11 != ctx->r1) {
        // 0x80265994: nop
    
            goto L_802659A8;
    }
    // 0x80265994: nop

    // 0x80265998: jal         0x80264E0C
    // 0x8026599C: or          $a0, $s5, $zero
    ctx->r4 = ctx->r21 | 0;
    ovl_8024B800_func_80264E0C(rdram, ctx);
        goto after_0;
    // 0x8026599C: or          $a0, $s5, $zero
    ctx->r4 = ctx->r21 | 0;
    after_0:
    // 0x802659A0: b           L_802659B8
    // 0x802659A4: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
        goto L_802659B8;
    // 0x802659A4: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
L_802659A8:
    // 0x802659A8: lb          $t5, 0x88E($t4)
    ctx->r13 = MEM_B(ctx->r12, 0X88E);
    // 0x802659AC: b           L_802659B8
    // 0x802659B0: sb          $t5, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r13;
        goto L_802659B8;
    // 0x802659B0: sb          $t5, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r13;
L_802659B4:
    // 0x802659B4: sb          $t6, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r14;
L_802659B8:
    // 0x802659B8: lbu         $t7, 0xA($s0)
    ctx->r15 = MEM_BU(ctx->r16, 0XA);
    // 0x802659BC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802659C0: slti        $at, $t7, 0xB
    ctx->r1 = SIGNED(ctx->r15) < 0XB ? 1 : 0;
    // 0x802659C4: beq         $at, $zero, L_802659D4
    if (ctx->r1 == 0) {
        // 0x802659C8: or          $a1, $s2, $zero
        ctx->r5 = ctx->r18 | 0;
            goto L_802659D4;
    }
    // 0x802659C8: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    // 0x802659CC: b           L_802659D8
    // 0x802659D0: addiu       $v0, $zero, 0x1F
    ctx->r2 = ADD32(0, 0X1F);
        goto L_802659D8;
    // 0x802659D0: addiu       $v0, $zero, 0x1F
    ctx->r2 = ADD32(0, 0X1F);
L_802659D4:
    // 0x802659D4: addiu       $v0, $zero, 0x29
    ctx->r2 = ADD32(0, 0X29);
L_802659D8:
    // 0x802659D8: jal         0x80264520
    // 0x802659DC: andi        $a2, $v0, 0xFFFF
    ctx->r6 = ctx->r2 & 0XFFFF;
    ovl_8024B800_func_80264520(rdram, ctx);
        goto after_1;
    // 0x802659DC: andi        $a2, $v0, 0xFFFF
    ctx->r6 = ctx->r2 & 0XFFFF;
    after_1:
    // 0x802659E0: lh          $a1, 0x8B8($s5)
    ctx->r5 = MEM_H(ctx->r21, 0X8B8);
    // 0x802659E4: jal         0x80264710
    // 0x802659E8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_8024B800_func_80264710(rdram, ctx);
        goto after_2;
    // 0x802659E8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_2:
    // 0x802659EC: addiu       $s3, $s3, 0x1
    ctx->r19 = ADD32(ctx->r19, 0X1);
    // 0x802659F0: addiu       $s2, $s2, 0x4
    ctx->r18 = ADD32(ctx->r18, 0X4);
    // 0x802659F4: lw          $t8, 0x70($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X70);
    // 0x802659F8: addiu       $s1, $s1, 0xF8
    ctx->r17 = ADD32(ctx->r17, 0XF8);
    // 0x802659FC: beq         $s3, $t8, L_80265A10
    if (ctx->r19 == ctx->r24) {
        // 0x80265A00: lw          $ra, 0x44($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X44);
            goto L_80265A10;
    }
    // 0x80265A00: lw          $ra, 0x44($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X44);
    // 0x80265A04: bne         $s1, $s4, L_8026594C
    if (ctx->r17 != ctx->r20) {
            // 0x80265A08: nop

    ovl_8024B800_func_8026594C(rdram, ctx);
    return;
    }
    // 0x80265A08: nop

    // 0x80265A0C: lw          $ra, 0x44($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X44);
L_80265A10:
    // 0x80265A10: lwc1        $f21, 0x18($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X18);
    // 0x80265A14: lwc1        $f20, 0x1C($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x80265A18: lwc1        $f23, 0x20($sp)
    ctx->f_odd[(23 - 1) * 2] = MEM_W(ctx->r29, 0X20);
    // 0x80265A1C: lwc1        $f22, 0x24($sp)
    ctx->f22.u32l = MEM_W(ctx->r29, 0X24);
    // 0x80265A20: lw          $s0, 0x2C($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X2C);
    // 0x80265A24: lw          $s1, 0x30($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X30);
    // 0x80265A28: lw          $s2, 0x34($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X34);
    // 0x80265A2C: lw          $s3, 0x38($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X38);
    // 0x80265A30: lw          $s4, 0x3C($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X3C);
    // 0x80265A34: lw          $s5, 0x40($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X40);
    // 0x80265A38: jr          $ra
    // 0x80265A3C: addiu       $sp, $sp, 0xB8
    ctx->r29 = ADD32(ctx->r29, 0XB8);
    return;
    // 0x80265A3C: addiu       $sp, $sp, 0xB8
    ctx->r29 = ADD32(ctx->r29, 0XB8);
;}
RECOMP_FUNC void ovl_8024B800_func_80265A40(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80265A40: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80265A44: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80265A48: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80265A4C: lhu         $t6, 0x4($a0)
    ctx->r14 = MEM_HU(ctx->r4, 0X4);
    // 0x80265A50: lw          $t1, 0x18($a0)
    ctx->r9 = MEM_W(ctx->r4, 0X18);
    // 0x80265A54: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x80265A58: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x80265A5C: addiu       $v0, $a0, 0x318
    ctx->r2 = ADD32(ctx->r4, 0X318);
    // 0x80265A60: bne         $t6, $at, L_80265B9C
    if (ctx->r14 != ctx->r1) {
        // 0x80265A64: or          $t3, $zero, $zero
        ctx->r11 = 0 | 0;
            goto L_80265B9C;
    }
    // 0x80265A64: or          $t3, $zero, $zero
    ctx->r11 = 0 | 0;
    // 0x80265A68: lw          $a0, 0x91C($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X91C);
    // 0x80265A6C: lui         $t0, 0x8009
    ctx->r8 = S32(0X8009 << 16);
    // 0x80265A70: bne         $a0, $zero, L_80265B70
    if (ctx->r4 != 0) {
        // 0x80265A74: lui         $a3, 0x8028
        ctx->r7 = S32(0X8028 << 16);
            goto L_80265B70;
    }
    // 0x80265A74: lui         $a3, 0x8028
    ctx->r7 = S32(0X8028 << 16);
    // 0x80265A78: lw          $t0, 0x3B20($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X3B20);
    // 0x80265A7C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x80265A80: lw          $t2, 0x88($t0)
    ctx->r10 = MEM_W(ctx->r8, 0X88);
    // 0x80265A84: addiu       $a3, $a3, -0x3678
    ctx->r7 = ADD32(ctx->r7, -0X3678);
    // 0x80265A88: addiu       $a2, $zero, 0xB
    ctx->r6 = ADD32(0, 0XB);
    // 0x80265A8C: addiu       $a1, $zero, 0xF8
    ctx->r5 = ADD32(0, 0XF8);
L_80265A90:
    // 0x80265A90: lhu         $t7, 0x0($v0)
    ctx->r15 = MEM_HU(ctx->r2, 0X0);
    // 0x80265A94: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    // 0x80265A98: multu       $t7, $a1
    result = U64(U32(ctx->r15)) * U64(U32(ctx->r5)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80265A9C: mflo        $t8
    ctx->r24 = lo;
    // 0x80265AA0: addu        $v1, $t8, $t1
    ctx->r3 = ADD32(ctx->r24, ctx->r9);
    // 0x80265AA4: beq         $v1, $t2, L_80265B2C
    if (ctx->r3 == ctx->r10) {
        // 0x80265AA8: nop
    
            goto L_80265B2C;
    }
    // 0x80265AA8: nop

    // 0x80265AAC: lw          $t9, 0xD4($v1)
    ctx->r25 = MEM_W(ctx->r3, 0XD4);
    // 0x80265AB0: nop

    // 0x80265AB4: lbu         $t4, 0x5($t9)
    ctx->r12 = MEM_BU(ctx->r25, 0X5);
    // 0x80265AB8: nop

    // 0x80265ABC: sll         $t5, $t4, 1
    ctx->r13 = S32(ctx->r12 << 1);
    // 0x80265AC0: addu        $t6, $a3, $t5
    ctx->r14 = ADD32(ctx->r7, ctx->r13);
    // 0x80265AC4: lhu         $t7, 0x0($t6)
    ctx->r15 = MEM_HU(ctx->r14, 0X0);
    // 0x80265AC8: nop

    // 0x80265ACC: andi        $t8, $t7, 0xFE
    ctx->r24 = ctx->r15 & 0XFE;
    // 0x80265AD0: beq         $t8, $zero, L_80265B2C
    if (ctx->r24 == 0) {
        // 0x80265AD4: nop
    
            goto L_80265B2C;
    }
    // 0x80265AD4: nop

    // 0x80265AD8: lhu         $t9, 0x8($s0)
    ctx->r25 = MEM_HU(ctx->r16, 0X8);
    // 0x80265ADC: lwc1        $f0, 0x8($t0)
    ctx->f0.u32l = MEM_W(ctx->r8, 0X8);
    // 0x80265AE0: andi        $t4, $t9, 0x1
    ctx->r12 = ctx->r25 & 0X1;
    // 0x80265AE4: beq         $t4, $zero, L_80265B0C
    if (ctx->r12 == 0) {
        // 0x80265AE8: nop
    
            goto L_80265B0C;
    }
    // 0x80265AE8: nop

    // 0x80265AEC: lwc1        $f4, 0x4C($v1)
    ctx->f4.u32l = MEM_W(ctx->r3, 0X4C);
    // 0x80265AF0: nop

    // 0x80265AF4: c.le.s      $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f4.fl <= ctx->f0.fl;
    // 0x80265AF8: nop

    // 0x80265AFC: bc1f        L_80265B2C
    if (!c1cs) {
        // 0x80265B00: nop
    
            goto L_80265B2C;
    }
    // 0x80265B00: nop

    // 0x80265B04: b           L_80265B34
    // 0x80265B08: addiu       $t3, $zero, 0x1
    ctx->r11 = ADD32(0, 0X1);
        goto L_80265B34;
    // 0x80265B08: addiu       $t3, $zero, 0x1
    ctx->r11 = ADD32(0, 0X1);
L_80265B0C:
    // 0x80265B0C: lwc1        $f6, 0x4C($v1)
    ctx->f6.u32l = MEM_W(ctx->r3, 0X4C);
    // 0x80265B10: nop

    // 0x80265B14: c.le.s      $f0, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f0.fl <= ctx->f6.fl;
    // 0x80265B18: nop

    // 0x80265B1C: bc1f        L_80265B2C
    if (!c1cs) {
        // 0x80265B20: nop
    
            goto L_80265B2C;
    }
    // 0x80265B20: nop

    // 0x80265B24: b           L_80265B34
    // 0x80265B28: addiu       $t3, $zero, 0x1
    ctx->r11 = ADD32(0, 0X1);
        goto L_80265B34;
    // 0x80265B28: addiu       $t3, $zero, 0x1
    ctx->r11 = ADD32(0, 0X1);
L_80265B2C:
    // 0x80265B2C: bne         $a0, $a2, L_80265A90
    if (ctx->r4 != ctx->r6) {
        // 0x80265B30: addiu       $v0, $v0, 0x8
        ctx->r2 = ADD32(ctx->r2, 0X8);
            goto L_80265A90;
    }
    // 0x80265B30: addiu       $v0, $v0, 0x8
    ctx->r2 = ADD32(ctx->r2, 0X8);
L_80265B34:
    // 0x80265B34: bne         $t3, $zero, L_80265B50
    if (ctx->r11 != 0) {
        // 0x80265B38: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80265B50;
    }
    // 0x80265B38: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80265B3C: addiu       $a1, $zero, 0xFE
    ctx->r5 = ADD32(0, 0XFE);
    // 0x80265B40: jal         0x80262B58
    // 0x80265B44: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    ovl_8024B800_func_80262B58(rdram, ctx);
        goto after_0;
    // 0x80265B44: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_0:
    // 0x80265B48: beq         $v0, $zero, L_80265B9C
    if (ctx->r2 == 0) {
        // 0x80265B4C: or          $v1, $v0, $zero
        ctx->r3 = ctx->r2 | 0;
            goto L_80265B9C;
    }
    // 0x80265B4C: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
L_80265B50:
    // 0x80265B50: lhu         $t5, 0x10($s0)
    ctx->r13 = MEM_HU(ctx->r16, 0X10);
    // 0x80265B54: sw          $v1, 0x91C($s0)
    MEM_W(0X91C, ctx->r16) = ctx->r3;
    // 0x80265B58: ori         $t6, $t5, 0x2000
    ctx->r14 = ctx->r13 | 0X2000;
    // 0x80265B5C: sh          $t6, 0x10($s0)
    MEM_H(0X10, ctx->r16) = ctx->r14;
    // 0x80265B60: sh          $zero, 0x32($v1)
    MEM_H(0X32, ctx->r3) = 0;
    // 0x80265B64: sh          $zero, 0x34($v1)
    MEM_H(0X34, ctx->r3) = 0;
    // 0x80265B68: lw          $a0, 0x91C($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X91C);
    // 0x80265B6C: nop

L_80265B70:
    // 0x80265B70: lhu         $t7, 0x20($a0)
    ctx->r15 = MEM_HU(ctx->r4, 0X20);
    // 0x80265B74: nop

    // 0x80265B78: andi        $t8, $t7, 0x200
    ctx->r24 = ctx->r15 & 0X200;
    // 0x80265B7C: bne         $t8, $zero, L_80265BA0
    if (ctx->r24 != 0) {
        // 0x80265B80: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_80265BA0;
    }
    // 0x80265B80: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80265B84: lhu         $t9, 0x12($a0)
    ctx->r25 = MEM_HU(ctx->r4, 0X12);
    // 0x80265B88: addiu       $t5, $zero, 0x13
    ctx->r13 = ADD32(0, 0X13);
    // 0x80265B8C: andi        $t4, $t9, 0x200
    ctx->r12 = ctx->r25 & 0X200;
    // 0x80265B90: bne         $t4, $zero, L_80265BA0
    if (ctx->r12 != 0) {
        // 0x80265B94: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_80265BA0;
    }
    // 0x80265B94: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80265B98: sb          $t5, 0x0($a0)
    MEM_B(0X0, ctx->r4) = ctx->r13;
L_80265B9C:
    // 0x80265B9C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_80265BA0:
    // 0x80265BA0: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80265BA4: jr          $ra
    // 0x80265BA8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x80265BA8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void ovl_8024B800_func_80265A90(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
L_80265A90:
    // 0x80265A90: lhu         $t7, 0x0($v0)
    ctx->r15 = MEM_HU(ctx->r2, 0X0);
    // 0x80265A94: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    // 0x80265A98: multu       $t7, $a1
    result = U64(U32(ctx->r15)) * U64(U32(ctx->r5)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80265A9C: mflo        $t8
    ctx->r24 = lo;
    // 0x80265AA0: addu        $v1, $t8, $t1
    ctx->r3 = ADD32(ctx->r24, ctx->r9);
    // 0x80265AA4: beq         $v1, $t2, L_80265B2C
    if (ctx->r3 == ctx->r10) {
        // 0x80265AA8: nop
    
            goto L_80265B2C;
    }
    // 0x80265AA8: nop

    // 0x80265AAC: lw          $t9, 0xD4($v1)
    ctx->r25 = MEM_W(ctx->r3, 0XD4);
    // 0x80265AB0: nop

    // 0x80265AB4: lbu         $t4, 0x5($t9)
    ctx->r12 = MEM_BU(ctx->r25, 0X5);
    // 0x80265AB8: nop

    // 0x80265ABC: sll         $t5, $t4, 1
    ctx->r13 = S32(ctx->r12 << 1);
    // 0x80265AC0: addu        $t6, $a3, $t5
    ctx->r14 = ADD32(ctx->r7, ctx->r13);
    // 0x80265AC4: lhu         $t7, 0x0($t6)
    ctx->r15 = MEM_HU(ctx->r14, 0X0);
    // 0x80265AC8: nop

    // 0x80265ACC: andi        $t8, $t7, 0xFE
    ctx->r24 = ctx->r15 & 0XFE;
    // 0x80265AD0: beq         $t8, $zero, L_80265B2C
    if (ctx->r24 == 0) {
        // 0x80265AD4: nop
    
            goto L_80265B2C;
    }
    // 0x80265AD4: nop

    // 0x80265AD8: lhu         $t9, 0x8($s0)
    ctx->r25 = MEM_HU(ctx->r16, 0X8);
    // 0x80265ADC: lwc1        $f0, 0x8($t0)
    ctx->f0.u32l = MEM_W(ctx->r8, 0X8);
    // 0x80265AE0: andi        $t4, $t9, 0x1
    ctx->r12 = ctx->r25 & 0X1;
    // 0x80265AE4: beq         $t4, $zero, L_80265B0C
    if (ctx->r12 == 0) {
        // 0x80265AE8: nop
    
            goto L_80265B0C;
    }
    // 0x80265AE8: nop

    // 0x80265AEC: lwc1        $f4, 0x4C($v1)
    ctx->f4.u32l = MEM_W(ctx->r3, 0X4C);
    // 0x80265AF0: nop

    // 0x80265AF4: c.le.s      $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f4.fl <= ctx->f0.fl;
    // 0x80265AF8: nop

    // 0x80265AFC: bc1f        L_80265B2C
    if (!c1cs) {
        // 0x80265B00: nop
    
            goto L_80265B2C;
    }
    // 0x80265B00: nop

    // 0x80265B04: b           L_80265B34
    // 0x80265B08: addiu       $t3, $zero, 0x1
    ctx->r11 = ADD32(0, 0X1);
        goto L_80265B34;
    // 0x80265B08: addiu       $t3, $zero, 0x1
    ctx->r11 = ADD32(0, 0X1);
L_80265B0C:
    // 0x80265B0C: lwc1        $f6, 0x4C($v1)
    ctx->f6.u32l = MEM_W(ctx->r3, 0X4C);
    // 0x80265B10: nop

    // 0x80265B14: c.le.s      $f0, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f0.fl <= ctx->f6.fl;
    // 0x80265B18: nop

    // 0x80265B1C: bc1f        L_80265B2C
    if (!c1cs) {
        // 0x80265B20: nop
    
            goto L_80265B2C;
    }
    // 0x80265B20: nop

    // 0x80265B24: b           L_80265B34
    // 0x80265B28: addiu       $t3, $zero, 0x1
    ctx->r11 = ADD32(0, 0X1);
        goto L_80265B34;
    // 0x80265B28: addiu       $t3, $zero, 0x1
    ctx->r11 = ADD32(0, 0X1);
L_80265B2C:
    // 0x80265B2C: bne         $a0, $a2, L_80265A90
    if (ctx->r4 != ctx->r6) {
        // 0x80265B30: addiu       $v0, $v0, 0x8
        ctx->r2 = ADD32(ctx->r2, 0X8);
            goto L_80265A90;
    }
    // 0x80265B30: addiu       $v0, $v0, 0x8
    ctx->r2 = ADD32(ctx->r2, 0X8);
L_80265B34:
    // 0x80265B34: bne         $t3, $zero, L_80265B50
    if (ctx->r11 != 0) {
        // 0x80265B38: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80265B50;
    }
    // 0x80265B38: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80265B3C: addiu       $a1, $zero, 0xFE
    ctx->r5 = ADD32(0, 0XFE);
    // 0x80265B40: jal         0x80262B58
    // 0x80265B44: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    ovl_8024B800_func_80262B58(rdram, ctx);
        goto after_0;
    // 0x80265B44: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_0:
    // 0x80265B48: beq         $v0, $zero, L_80265B9C
    if (ctx->r2 == 0) {
        // 0x80265B4C: or          $v1, $v0, $zero
        ctx->r3 = ctx->r2 | 0;
            goto L_80265B9C;
    }
    // 0x80265B4C: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
L_80265B50:
    // 0x80265B50: lhu         $t5, 0x10($s0)
    ctx->r13 = MEM_HU(ctx->r16, 0X10);
    // 0x80265B54: sw          $v1, 0x91C($s0)
    MEM_W(0X91C, ctx->r16) = ctx->r3;
    // 0x80265B58: ori         $t6, $t5, 0x2000
    ctx->r14 = ctx->r13 | 0X2000;
    // 0x80265B5C: sh          $t6, 0x10($s0)
    MEM_H(0X10, ctx->r16) = ctx->r14;
    // 0x80265B60: sh          $zero, 0x32($v1)
    MEM_H(0X32, ctx->r3) = 0;
    // 0x80265B64: sh          $zero, 0x34($v1)
    MEM_H(0X34, ctx->r3) = 0;
    // 0x80265B68: lw          $a0, 0x91C($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X91C);
    // 0x80265B6C: nop

    // 0x80265B70: lhu         $t7, 0x20($a0)
    ctx->r15 = MEM_HU(ctx->r4, 0X20);
    // 0x80265B74: nop

    // 0x80265B78: andi        $t8, $t7, 0x200
    ctx->r24 = ctx->r15 & 0X200;
    // 0x80265B7C: bne         $t8, $zero, L_80265BA0
    if (ctx->r24 != 0) {
        // 0x80265B80: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_80265BA0;
    }
    // 0x80265B80: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80265B84: lhu         $t9, 0x12($a0)
    ctx->r25 = MEM_HU(ctx->r4, 0X12);
    // 0x80265B88: addiu       $t5, $zero, 0x13
    ctx->r13 = ADD32(0, 0X13);
    // 0x80265B8C: andi        $t4, $t9, 0x200
    ctx->r12 = ctx->r25 & 0X200;
    // 0x80265B90: bne         $t4, $zero, L_80265BA0
    if (ctx->r12 != 0) {
        // 0x80265B94: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_80265BA0;
    }
    // 0x80265B94: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80265B98: sb          $t5, 0x0($a0)
    MEM_B(0X0, ctx->r4) = ctx->r13;
L_80265B9C:
    // 0x80265B9C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_80265BA0:
    // 0x80265BA0: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80265BA4: jr          $ra
    // 0x80265BA8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x80265BA8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void ovl_8024B800_func_80265A94(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
L_80265A90:
    // 0x80265A94: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    // 0x80265A98: multu       $t7, $a1
    result = U64(U32(ctx->r15)) * U64(U32(ctx->r5)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80265A9C: mflo        $t8
    ctx->r24 = lo;
    // 0x80265AA0: addu        $v1, $t8, $t1
    ctx->r3 = ADD32(ctx->r24, ctx->r9);
    // 0x80265AA4: beq         $v1, $t2, L_80265B2C
    if (ctx->r3 == ctx->r10) {
        // 0x80265AA8: nop
    
            goto L_80265B2C;
    }
    // 0x80265AA8: nop

    // 0x80265AAC: lw          $t9, 0xD4($v1)
    ctx->r25 = MEM_W(ctx->r3, 0XD4);
    // 0x80265AB0: nop

    // 0x80265AB4: lbu         $t4, 0x5($t9)
    ctx->r12 = MEM_BU(ctx->r25, 0X5);
    // 0x80265AB8: nop

    // 0x80265ABC: sll         $t5, $t4, 1
    ctx->r13 = S32(ctx->r12 << 1);
    // 0x80265AC0: addu        $t6, $a3, $t5
    ctx->r14 = ADD32(ctx->r7, ctx->r13);
    // 0x80265AC4: lhu         $t7, 0x0($t6)
    ctx->r15 = MEM_HU(ctx->r14, 0X0);
    // 0x80265AC8: nop

    // 0x80265ACC: andi        $t8, $t7, 0xFE
    ctx->r24 = ctx->r15 & 0XFE;
    // 0x80265AD0: beq         $t8, $zero, L_80265B2C
    if (ctx->r24 == 0) {
        // 0x80265AD4: nop
    
            goto L_80265B2C;
    }
    // 0x80265AD4: nop

    // 0x80265AD8: lhu         $t9, 0x8($s0)
    ctx->r25 = MEM_HU(ctx->r16, 0X8);
    // 0x80265ADC: lwc1        $f0, 0x8($t0)
    ctx->f0.u32l = MEM_W(ctx->r8, 0X8);
    // 0x80265AE0: andi        $t4, $t9, 0x1
    ctx->r12 = ctx->r25 & 0X1;
    // 0x80265AE4: beq         $t4, $zero, L_80265B0C
    if (ctx->r12 == 0) {
        // 0x80265AE8: nop
    
            goto L_80265B0C;
    }
    // 0x80265AE8: nop

    // 0x80265AEC: lwc1        $f4, 0x4C($v1)
    ctx->f4.u32l = MEM_W(ctx->r3, 0X4C);
    // 0x80265AF0: nop

    // 0x80265AF4: c.le.s      $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f4.fl <= ctx->f0.fl;
    // 0x80265AF8: nop

    // 0x80265AFC: bc1f        L_80265B2C
    if (!c1cs) {
        // 0x80265B00: nop
    
            goto L_80265B2C;
    }
    // 0x80265B00: nop

    // 0x80265B04: b           L_80265B34
    // 0x80265B08: addiu       $t3, $zero, 0x1
    ctx->r11 = ADD32(0, 0X1);
        goto L_80265B34;
    // 0x80265B08: addiu       $t3, $zero, 0x1
    ctx->r11 = ADD32(0, 0X1);
L_80265B0C:
    // 0x80265B0C: lwc1        $f6, 0x4C($v1)
    ctx->f6.u32l = MEM_W(ctx->r3, 0X4C);
    // 0x80265B10: nop

    // 0x80265B14: c.le.s      $f0, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f0.fl <= ctx->f6.fl;
    // 0x80265B18: nop

    // 0x80265B1C: bc1f        L_80265B2C
    if (!c1cs) {
        // 0x80265B20: nop
    
            goto L_80265B2C;
    }
    // 0x80265B20: nop

    // 0x80265B24: b           L_80265B34
    // 0x80265B28: addiu       $t3, $zero, 0x1
    ctx->r11 = ADD32(0, 0X1);
        goto L_80265B34;
    // 0x80265B28: addiu       $t3, $zero, 0x1
    ctx->r11 = ADD32(0, 0X1);
L_80265B2C:
    // 0x80265B2C: bne         $a0, $a2, L_80265A90
    if (ctx->r4 != ctx->r6) {
            // 0x80265B30: addiu       $v0, $v0, 0x8
    ctx->r2 = ADD32(ctx->r2, 0X8);
    ovl_8024B800_func_80265A90(rdram, ctx);
    return;
    }
    // 0x80265B30: addiu       $v0, $v0, 0x8
    ctx->r2 = ADD32(ctx->r2, 0X8);
L_80265B34:
    // 0x80265B34: bne         $t3, $zero, L_80265B50
    if (ctx->r11 != 0) {
        // 0x80265B38: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80265B50;
    }
    // 0x80265B38: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80265B3C: addiu       $a1, $zero, 0xFE
    ctx->r5 = ADD32(0, 0XFE);
    // 0x80265B40: jal         0x80262B58
    // 0x80265B44: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    ovl_8024B800_func_80262B58(rdram, ctx);
        goto after_0;
    // 0x80265B44: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_0:
    // 0x80265B48: beq         $v0, $zero, L_80265B9C
    if (ctx->r2 == 0) {
        // 0x80265B4C: or          $v1, $v0, $zero
        ctx->r3 = ctx->r2 | 0;
            goto L_80265B9C;
    }
    // 0x80265B4C: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
L_80265B50:
    // 0x80265B50: lhu         $t5, 0x10($s0)
    ctx->r13 = MEM_HU(ctx->r16, 0X10);
    // 0x80265B54: sw          $v1, 0x91C($s0)
    MEM_W(0X91C, ctx->r16) = ctx->r3;
    // 0x80265B58: ori         $t6, $t5, 0x2000
    ctx->r14 = ctx->r13 | 0X2000;
    // 0x80265B5C: sh          $t6, 0x10($s0)
    MEM_H(0X10, ctx->r16) = ctx->r14;
    // 0x80265B60: sh          $zero, 0x32($v1)
    MEM_H(0X32, ctx->r3) = 0;
    // 0x80265B64: sh          $zero, 0x34($v1)
    MEM_H(0X34, ctx->r3) = 0;
    // 0x80265B68: lw          $a0, 0x91C($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X91C);
    // 0x80265B6C: nop

    // 0x80265B70: lhu         $t7, 0x20($a0)
    ctx->r15 = MEM_HU(ctx->r4, 0X20);
    // 0x80265B74: nop

    // 0x80265B78: andi        $t8, $t7, 0x200
    ctx->r24 = ctx->r15 & 0X200;
    // 0x80265B7C: bne         $t8, $zero, L_80265BA0
    if (ctx->r24 != 0) {
        // 0x80265B80: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_80265BA0;
    }
    // 0x80265B80: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80265B84: lhu         $t9, 0x12($a0)
    ctx->r25 = MEM_HU(ctx->r4, 0X12);
    // 0x80265B88: addiu       $t5, $zero, 0x13
    ctx->r13 = ADD32(0, 0X13);
    // 0x80265B8C: andi        $t4, $t9, 0x200
    ctx->r12 = ctx->r25 & 0X200;
    // 0x80265B90: bne         $t4, $zero, L_80265BA0
    if (ctx->r12 != 0) {
        // 0x80265B94: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_80265BA0;
    }
    // 0x80265B94: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80265B98: sb          $t5, 0x0($a0)
    MEM_B(0X0, ctx->r4) = ctx->r13;
L_80265B9C:
    // 0x80265B9C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_80265BA0:
    // 0x80265BA0: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80265BA4: jr          $ra
    // 0x80265BA8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x80265BA8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void ovl_8024B800_func_80265B68(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80265B68: lw          $a0, 0x91C($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X91C);
    // 0x80265B6C: nop

    // 0x80265B70: lhu         $t7, 0x20($a0)
    ctx->r15 = MEM_HU(ctx->r4, 0X20);
    // 0x80265B74: nop

    // 0x80265B78: andi        $t8, $t7, 0x200
    ctx->r24 = ctx->r15 & 0X200;
    // 0x80265B7C: bne         $t8, $zero, L_80265BA0
    if (ctx->r24 != 0) {
        // 0x80265B80: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_80265BA0;
    }
    // 0x80265B80: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80265B84: lhu         $t9, 0x12($a0)
    ctx->r25 = MEM_HU(ctx->r4, 0X12);
    // 0x80265B88: addiu       $t5, $zero, 0x13
    ctx->r13 = ADD32(0, 0X13);
    // 0x80265B8C: andi        $t4, $t9, 0x200
    ctx->r12 = ctx->r25 & 0X200;
    // 0x80265B90: bne         $t4, $zero, L_80265BA0
    if (ctx->r12 != 0) {
        // 0x80265B94: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_80265BA0;
    }
    // 0x80265B94: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80265B98: sb          $t5, 0x0($a0)
    MEM_B(0X0, ctx->r4) = ctx->r13;
    // 0x80265B9C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_80265BA0:
    // 0x80265BA0: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80265BA4: jr          $ra
    // 0x80265BA8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x80265BA8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void ovl_8024B800_func_80265BA0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80265BA0: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80265BA4: jr          $ra
    // 0x80265BA8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x80265BA8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void ovl_8024B800_func_80265BAC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80265BAC: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x80265BB0: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80265BB4: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80265BB8: lhu         $t6, 0x10($a0)
    ctx->r14 = MEM_HU(ctx->r4, 0X10);
    // 0x80265BBC: lhu         $t8, 0x92C($a0)
    ctx->r24 = MEM_HU(ctx->r4, 0X92C);
    // 0x80265BC0: andi        $t7, $t6, 0xFF7F
    ctx->r15 = ctx->r14 & 0XFF7F;
    // 0x80265BC4: andi        $t9, $t8, 0x1
    ctx->r25 = ctx->r24 & 0X1;
    // 0x80265BC8: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x80265BCC: beq         $t9, $zero, L_80265BDC
    if (ctx->r25 == 0) {
        // 0x80265BD0: sh          $t7, 0x10($a0)
        MEM_H(0X10, ctx->r4) = ctx->r15;
            goto L_80265BDC;
    }
    // 0x80265BD0: sh          $t7, 0x10($a0)
    MEM_H(0X10, ctx->r4) = ctx->r15;
    // 0x80265BD4: b           L_80265BE0
    // 0x80265BD8: addiu       $a1, $zero, 0x100
    ctx->r5 = ADD32(0, 0X100);
        goto L_80265BE0;
    // 0x80265BD8: addiu       $a1, $zero, 0x100
    ctx->r5 = ADD32(0, 0X100);
L_80265BDC:
    // 0x80265BDC: addiu       $a1, $zero, 0x500
    ctx->r5 = ADD32(0, 0X500);
L_80265BE0:
    // 0x80265BE0: addiu       $t0, $zero, 0x80
    ctx->r8 = ADD32(0, 0X80);
    // 0x80265BE4: sh          $t0, 0x2C($sp)
    MEM_H(0X2C, ctx->r29) = ctx->r8;
    // 0x80265BE8: lhu         $v0, 0x4($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X4);
    // 0x80265BEC: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x80265BF0: bne         $v0, $at, L_80265C0C
    if (ctx->r2 != ctx->r1) {
        // 0x80265BF4: addiu       $v1, $zero, 0x3
        ctx->r3 = ADD32(0, 0X3);
            goto L_80265C0C;
    }
    // 0x80265BF4: addiu       $v1, $zero, 0x3
    ctx->r3 = ADD32(0, 0X3);
    // 0x80265BF8: addiu       $t1, $zero, 0xFE
    ctx->r9 = ADD32(0, 0XFE);
    // 0x80265BFC: addiu       $a1, $zero, 0x700
    ctx->r5 = ADD32(0, 0X700);
    // 0x80265C00: sh          $t1, 0x2C($sp)
    MEM_H(0X2C, ctx->r29) = ctx->r9;
    // 0x80265C04: b           L_80265C2C
    // 0x80265C08: addiu       $v1, $zero, 0x2
    ctx->r3 = ADD32(0, 0X2);
        goto L_80265C2C;
    // 0x80265C08: addiu       $v1, $zero, 0x2
    ctx->r3 = ADD32(0, 0X2);
L_80265C0C:
    // 0x80265C0C: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80265C10: bne         $v0, $at, L_80265C24
    if (ctx->r2 != ctx->r1) {
        // 0x80265C14: addiu       $t2, $zero, 0xFE
        ctx->r10 = ADD32(0, 0XFE);
            goto L_80265C24;
    }
    // 0x80265C14: addiu       $t2, $zero, 0xFE
    ctx->r10 = ADD32(0, 0XFE);
    // 0x80265C18: sh          $t2, 0x2C($sp)
    MEM_H(0X2C, ctx->r29) = ctx->r10;
    // 0x80265C1C: b           L_80265C2C
    // 0x80265C20: addiu       $v1, $zero, 0x2
    ctx->r3 = ADD32(0, 0X2);
        goto L_80265C2C;
    // 0x80265C20: addiu       $v1, $zero, 0x2
    ctx->r3 = ADD32(0, 0X2);
L_80265C24:
    // 0x80265C24: addiu       $at, $zero, 0x5
    ctx->r1 = ADD32(0, 0X5);
    // 0x80265C28: beq         $v0, $at, L_80265D58
    if (ctx->r2 == ctx->r1) {
        // 0x80265C2C: addiu       $at, $zero, 0x2
        ctx->r1 = ADD32(0, 0X2);
            goto L_80265D58;
    }
L_80265C2C:
    // 0x80265C2C: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x80265C30: beq         $v0, $at, L_80265CAC
    if (ctx->r2 == ctx->r1) {
        // 0x80265C34: lui         $t3, 0x8009
        ctx->r11 = S32(0X8009 << 16);
            goto L_80265CAC;
    }
    // 0x80265C34: lui         $t3, 0x8009
    ctx->r11 = S32(0X8009 << 16);
    // 0x80265C38: lw          $t3, 0x3B20($t3)
    ctx->r11 = MEM_W(ctx->r11, 0X3B20);
    // 0x80265C3C: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x80265C40: lw          $t4, 0x8C($t3)
    ctx->r12 = MEM_W(ctx->r11, 0X8C);
    // 0x80265C44: nop

    // 0x80265C48: lw          $t5, 0xD4($t4)
    ctx->r13 = MEM_W(ctx->r12, 0XD4);
    // 0x80265C4C: nop

    // 0x80265C50: lbu         $t6, 0x4($t5)
    ctx->r14 = MEM_BU(ctx->r13, 0X4);
    // 0x80265C54: nop

    // 0x80265C58: andi        $t7, $t6, 0x7F
    ctx->r15 = ctx->r14 & 0X7F;
    // 0x80265C5C: beq         $t7, $at, L_80265CAC
    if (ctx->r15 == ctx->r1) {
        // 0x80265C60: nop
    
            goto L_80265CAC;
    }
    // 0x80265C60: nop

    // 0x80265C64: lh          $t8, 0x8B0($s0)
    ctx->r24 = MEM_H(ctx->r16, 0X8B0);
    // 0x80265C68: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80265C6C: slti        $at, $t8, 0x158
    ctx->r1 = SIGNED(ctx->r24) < 0X158 ? 1 : 0;
    // 0x80265C70: beq         $at, $zero, L_80265CAC
    if (ctx->r1 == 0) {
        // 0x80265C74: or          $a2, $zero, $zero
        ctx->r6 = 0 | 0;
            goto L_80265CAC;
    }
    // 0x80265C74: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x80265C78: jal         0x80262D90
    // 0x80265C7C: sh          $v1, 0x2A($sp)
    MEM_H(0X2A, ctx->r29) = ctx->r3;
    ovl_8024B800_func_80262D90(rdram, ctx);
        goto after_0;
    // 0x80265C7C: sh          $v1, 0x2A($sp)
    MEM_H(0X2A, ctx->r29) = ctx->r3;
    after_0:
    // 0x80265C80: lhu         $v1, 0x2A($sp)
    ctx->r3 = MEM_HU(ctx->r29, 0X2A);
    // 0x80265C84: beq         $v0, $zero, L_80265CAC
    if (ctx->r2 == 0) {
        // 0x80265C88: addiu       $t9, $zero, 0x2E
        ctx->r25 = ADD32(0, 0X2E);
            goto L_80265CAC;
    }
    // 0x80265C88: addiu       $t9, $zero, 0x2E
    ctx->r25 = ADD32(0, 0X2E);
    // 0x80265C8C: lhu         $t0, 0x12($v0)
    ctx->r8 = MEM_HU(ctx->r2, 0X12);
    // 0x80265C90: sb          $t9, 0x0($v0)
    MEM_B(0X0, ctx->r2) = ctx->r25;
    // 0x80265C94: ori         $t1, $t0, 0x100
    ctx->r9 = ctx->r8 | 0X100;
    // 0x80265C98: sh          $t1, 0x12($v0)
    MEM_H(0X12, ctx->r2) = ctx->r9;
    // 0x80265C9C: lhu         $t2, 0x10($s0)
    ctx->r10 = MEM_HU(ctx->r16, 0X10);
    // 0x80265CA0: nop

    // 0x80265CA4: ori         $t3, $t2, 0x80
    ctx->r11 = ctx->r10 | 0X80;
    // 0x80265CA8: sh          $t3, 0x10($s0)
    MEM_H(0X10, ctx->r16) = ctx->r11;
L_80265CAC:
    // 0x80265CAC: lhu         $t4, 0x10($s0)
    ctx->r12 = MEM_HU(ctx->r16, 0X10);
    // 0x80265CB0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80265CB4: andi        $t5, $t4, 0x80
    ctx->r13 = ctx->r12 & 0X80;
    // 0x80265CB8: bne         $t5, $zero, L_80265CE0
    if (ctx->r13 != 0) {
        // 0x80265CBC: addiu       $a1, $zero, 0x100
        ctx->r5 = ADD32(0, 0X100);
            goto L_80265CE0;
    }
    // 0x80265CBC: addiu       $a1, $zero, 0x100
    ctx->r5 = ADD32(0, 0X100);
    // 0x80265CC0: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    // 0x80265CC4: jal         0x80262D90
    // 0x80265CC8: sh          $v1, 0x2A($sp)
    MEM_H(0X2A, ctx->r29) = ctx->r3;
    ovl_8024B800_func_80262D90(rdram, ctx);
        goto after_1;
    // 0x80265CC8: sh          $v1, 0x2A($sp)
    MEM_H(0X2A, ctx->r29) = ctx->r3;
    after_1:
    // 0x80265CCC: lhu         $v1, 0x2A($sp)
    ctx->r3 = MEM_HU(ctx->r29, 0X2A);
    // 0x80265CD0: beq         $v0, $zero, L_80265CE0
    if (ctx->r2 == 0) {
        // 0x80265CD4: addiu       $t6, $zero, 0x11
        ctx->r14 = ADD32(0, 0X11);
            goto L_80265CE0;
    }
    // 0x80265CD4: addiu       $t6, $zero, 0x11
    ctx->r14 = ADD32(0, 0X11);
    // 0x80265CD8: b           L_80265D58
    // 0x80265CDC: sb          $t6, 0x0($v0)
    MEM_B(0X0, ctx->r2) = ctx->r14;
        goto L_80265D58;
    // 0x80265CDC: sb          $t6, 0x0($v0)
    MEM_B(0X0, ctx->r2) = ctx->r14;
L_80265CE0:
    // 0x80265CE0: sll         $a2, $v1, 16
    ctx->r6 = S32(ctx->r3 << 16);
    // 0x80265CE4: sra         $t7, $a2, 16
    ctx->r15 = S32(SIGNED(ctx->r6) >> 16);
    // 0x80265CE8: or          $a2, $t7, $zero
    ctx->r6 = ctx->r15 | 0;
    // 0x80265CEC: sw          $t7, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r15;
    // 0x80265CF0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80265CF4: jal         0x80262D90
    // 0x80265CF8: addiu       $a1, $zero, 0x20
    ctx->r5 = ADD32(0, 0X20);
    ovl_8024B800_func_80262D90(rdram, ctx);
        goto after_2;
    // 0x80265CF8: addiu       $a1, $zero, 0x20
    ctx->r5 = ADD32(0, 0X20);
    after_2:
    // 0x80265CFC: lw          $a2, 0x20($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X20);
    // 0x80265D00: bne         $v0, $zero, L_80265D54
    if (ctx->r2 != 0) {
        // 0x80265D04: addiu       $t1, $zero, 0x11
        ctx->r9 = ADD32(0, 0X11);
            goto L_80265D54;
    }
    // 0x80265D04: addiu       $t1, $zero, 0x11
    ctx->r9 = ADD32(0, 0X11);
    // 0x80265D08: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80265D0C: jal         0x80262D90
    // 0x80265D10: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    ovl_8024B800_func_80262D90(rdram, ctx);
        goto after_3;
    // 0x80265D10: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    after_3:
    // 0x80265D14: bne         $v0, $zero, L_80265D4C
    if (ctx->r2 != 0) {
        // 0x80265D18: addiu       $t0, $zero, 0x11
        ctx->r8 = ADD32(0, 0X11);
            goto L_80265D4C;
    }
    // 0x80265D18: addiu       $t0, $zero, 0x11
    ctx->r8 = ADD32(0, 0X11);
    // 0x80265D1C: lhu         $a1, 0x2C($sp)
    ctx->r5 = MEM_HU(ctx->r29, 0X2C);
    // 0x80265D20: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80265D24: jal         0x80262D90
    // 0x80265D28: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    ovl_8024B800_func_80262D90(rdram, ctx);
        goto after_4;
    // 0x80265D28: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    after_4:
    // 0x80265D2C: beq         $v0, $zero, L_80265D5C
    if (ctx->r2 == 0) {
        // 0x80265D30: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_80265D5C;
    }
    // 0x80265D30: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80265D34: lhu         $t8, 0x4($s0)
    ctx->r24 = MEM_HU(ctx->r16, 0X4);
    // 0x80265D38: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x80265D3C: bne         $t8, $at, L_80265D58
    if (ctx->r24 != ctx->r1) {
        // 0x80265D40: addiu       $t9, $zero, 0x11
        ctx->r25 = ADD32(0, 0X11);
            goto L_80265D58;
    }
    // 0x80265D40: addiu       $t9, $zero, 0x11
    ctx->r25 = ADD32(0, 0X11);
    // 0x80265D44: b           L_80265D58
    // 0x80265D48: sb          $t9, 0x0($v0)
    MEM_B(0X0, ctx->r2) = ctx->r25;
        goto L_80265D58;
    // 0x80265D48: sb          $t9, 0x0($v0)
    MEM_B(0X0, ctx->r2) = ctx->r25;
L_80265D4C:
    // 0x80265D4C: b           L_80265D58
    // 0x80265D50: sb          $t0, 0x0($v0)
    MEM_B(0X0, ctx->r2) = ctx->r8;
        goto L_80265D58;
    // 0x80265D50: sb          $t0, 0x0($v0)
    MEM_B(0X0, ctx->r2) = ctx->r8;
L_80265D54:
    // 0x80265D54: sb          $t1, 0x0($v0)
    MEM_B(0X0, ctx->r2) = ctx->r9;
L_80265D58:
    // 0x80265D58: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_80265D5C:
    // 0x80265D5C: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80265D60: jr          $ra
    // 0x80265D64: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x80265D64: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void ovl_8024B800_func_80265BB4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80265BB4: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80265BB8: lhu         $t6, 0x10($a0)
    ctx->r14 = MEM_HU(ctx->r4, 0X10);
    // 0x80265BBC: lhu         $t8, 0x92C($a0)
    ctx->r24 = MEM_HU(ctx->r4, 0X92C);
    // 0x80265BC0: andi        $t7, $t6, 0xFF7F
    ctx->r15 = ctx->r14 & 0XFF7F;
    // 0x80265BC4: andi        $t9, $t8, 0x1
    ctx->r25 = ctx->r24 & 0X1;
    // 0x80265BC8: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x80265BCC: beq         $t9, $zero, L_80265BDC
    if (ctx->r25 == 0) {
        // 0x80265BD0: sh          $t7, 0x10($a0)
        MEM_H(0X10, ctx->r4) = ctx->r15;
            goto L_80265BDC;
    }
    // 0x80265BD0: sh          $t7, 0x10($a0)
    MEM_H(0X10, ctx->r4) = ctx->r15;
    // 0x80265BD4: b           L_80265BE0
    // 0x80265BD8: addiu       $a1, $zero, 0x100
    ctx->r5 = ADD32(0, 0X100);
        goto L_80265BE0;
    // 0x80265BD8: addiu       $a1, $zero, 0x100
    ctx->r5 = ADD32(0, 0X100);
L_80265BDC:
    // 0x80265BDC: addiu       $a1, $zero, 0x500
    ctx->r5 = ADD32(0, 0X500);
L_80265BE0:
    // 0x80265BE0: addiu       $t0, $zero, 0x80
    ctx->r8 = ADD32(0, 0X80);
    // 0x80265BE4: sh          $t0, 0x2C($sp)
    MEM_H(0X2C, ctx->r29) = ctx->r8;
    // 0x80265BE8: lhu         $v0, 0x4($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X4);
    // 0x80265BEC: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x80265BF0: bne         $v0, $at, L_80265C0C
    if (ctx->r2 != ctx->r1) {
        // 0x80265BF4: addiu       $v1, $zero, 0x3
        ctx->r3 = ADD32(0, 0X3);
            goto L_80265C0C;
    }
    // 0x80265BF4: addiu       $v1, $zero, 0x3
    ctx->r3 = ADD32(0, 0X3);
    // 0x80265BF8: addiu       $t1, $zero, 0xFE
    ctx->r9 = ADD32(0, 0XFE);
    // 0x80265BFC: addiu       $a1, $zero, 0x700
    ctx->r5 = ADD32(0, 0X700);
    // 0x80265C00: sh          $t1, 0x2C($sp)
    MEM_H(0X2C, ctx->r29) = ctx->r9;
    // 0x80265C04: b           L_80265C2C
    // 0x80265C08: addiu       $v1, $zero, 0x2
    ctx->r3 = ADD32(0, 0X2);
        goto L_80265C2C;
    // 0x80265C08: addiu       $v1, $zero, 0x2
    ctx->r3 = ADD32(0, 0X2);
L_80265C0C:
    // 0x80265C0C: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80265C10: bne         $v0, $at, L_80265C24
    if (ctx->r2 != ctx->r1) {
        // 0x80265C14: addiu       $t2, $zero, 0xFE
        ctx->r10 = ADD32(0, 0XFE);
            goto L_80265C24;
    }
    // 0x80265C14: addiu       $t2, $zero, 0xFE
    ctx->r10 = ADD32(0, 0XFE);
    // 0x80265C18: sh          $t2, 0x2C($sp)
    MEM_H(0X2C, ctx->r29) = ctx->r10;
    // 0x80265C1C: b           L_80265C2C
    // 0x80265C20: addiu       $v1, $zero, 0x2
    ctx->r3 = ADD32(0, 0X2);
        goto L_80265C2C;
    // 0x80265C20: addiu       $v1, $zero, 0x2
    ctx->r3 = ADD32(0, 0X2);
L_80265C24:
    // 0x80265C24: addiu       $at, $zero, 0x5
    ctx->r1 = ADD32(0, 0X5);
    // 0x80265C28: beq         $v0, $at, L_80265D58
    if (ctx->r2 == ctx->r1) {
        // 0x80265C2C: addiu       $at, $zero, 0x2
        ctx->r1 = ADD32(0, 0X2);
            goto L_80265D58;
    }
L_80265C2C:
    // 0x80265C2C: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x80265C30: beq         $v0, $at, L_80265CAC
    if (ctx->r2 == ctx->r1) {
        // 0x80265C34: lui         $t3, 0x8009
        ctx->r11 = S32(0X8009 << 16);
            goto L_80265CAC;
    }
    // 0x80265C34: lui         $t3, 0x8009
    ctx->r11 = S32(0X8009 << 16);
    // 0x80265C38: lw          $t3, 0x3B20($t3)
    ctx->r11 = MEM_W(ctx->r11, 0X3B20);
    // 0x80265C3C: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x80265C40: lw          $t4, 0x8C($t3)
    ctx->r12 = MEM_W(ctx->r11, 0X8C);
    // 0x80265C44: nop

    // 0x80265C48: lw          $t5, 0xD4($t4)
    ctx->r13 = MEM_W(ctx->r12, 0XD4);
    // 0x80265C4C: nop

    // 0x80265C50: lbu         $t6, 0x4($t5)
    ctx->r14 = MEM_BU(ctx->r13, 0X4);
    // 0x80265C54: nop

    // 0x80265C58: andi        $t7, $t6, 0x7F
    ctx->r15 = ctx->r14 & 0X7F;
    // 0x80265C5C: beq         $t7, $at, L_80265CAC
    if (ctx->r15 == ctx->r1) {
        // 0x80265C60: nop
    
            goto L_80265CAC;
    }
    // 0x80265C60: nop

    // 0x80265C64: lh          $t8, 0x8B0($s0)
    ctx->r24 = MEM_H(ctx->r16, 0X8B0);
    // 0x80265C68: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80265C6C: slti        $at, $t8, 0x158
    ctx->r1 = SIGNED(ctx->r24) < 0X158 ? 1 : 0;
    // 0x80265C70: beq         $at, $zero, L_80265CAC
    if (ctx->r1 == 0) {
        // 0x80265C74: or          $a2, $zero, $zero
        ctx->r6 = 0 | 0;
            goto L_80265CAC;
    }
    // 0x80265C74: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x80265C78: jal         0x80262D90
    // 0x80265C7C: sh          $v1, 0x2A($sp)
    MEM_H(0X2A, ctx->r29) = ctx->r3;
    ovl_8024B800_func_80262D90(rdram, ctx);
        goto after_0;
    // 0x80265C7C: sh          $v1, 0x2A($sp)
    MEM_H(0X2A, ctx->r29) = ctx->r3;
    after_0:
    // 0x80265C80: lhu         $v1, 0x2A($sp)
    ctx->r3 = MEM_HU(ctx->r29, 0X2A);
    // 0x80265C84: beq         $v0, $zero, L_80265CAC
    if (ctx->r2 == 0) {
        // 0x80265C88: addiu       $t9, $zero, 0x2E
        ctx->r25 = ADD32(0, 0X2E);
            goto L_80265CAC;
    }
    // 0x80265C88: addiu       $t9, $zero, 0x2E
    ctx->r25 = ADD32(0, 0X2E);
    // 0x80265C8C: lhu         $t0, 0x12($v0)
    ctx->r8 = MEM_HU(ctx->r2, 0X12);
    // 0x80265C90: sb          $t9, 0x0($v0)
    MEM_B(0X0, ctx->r2) = ctx->r25;
    // 0x80265C94: ori         $t1, $t0, 0x100
    ctx->r9 = ctx->r8 | 0X100;
    // 0x80265C98: sh          $t1, 0x12($v0)
    MEM_H(0X12, ctx->r2) = ctx->r9;
    // 0x80265C9C: lhu         $t2, 0x10($s0)
    ctx->r10 = MEM_HU(ctx->r16, 0X10);
    // 0x80265CA0: nop

    // 0x80265CA4: ori         $t3, $t2, 0x80
    ctx->r11 = ctx->r10 | 0X80;
    // 0x80265CA8: sh          $t3, 0x10($s0)
    MEM_H(0X10, ctx->r16) = ctx->r11;
L_80265CAC:
    // 0x80265CAC: lhu         $t4, 0x10($s0)
    ctx->r12 = MEM_HU(ctx->r16, 0X10);
    // 0x80265CB0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80265CB4: andi        $t5, $t4, 0x80
    ctx->r13 = ctx->r12 & 0X80;
    // 0x80265CB8: bne         $t5, $zero, L_80265CE0
    if (ctx->r13 != 0) {
        // 0x80265CBC: addiu       $a1, $zero, 0x100
        ctx->r5 = ADD32(0, 0X100);
            goto L_80265CE0;
    }
    // 0x80265CBC: addiu       $a1, $zero, 0x100
    ctx->r5 = ADD32(0, 0X100);
    // 0x80265CC0: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    // 0x80265CC4: jal         0x80262D90
    // 0x80265CC8: sh          $v1, 0x2A($sp)
    MEM_H(0X2A, ctx->r29) = ctx->r3;
    ovl_8024B800_func_80262D90(rdram, ctx);
        goto after_1;
    // 0x80265CC8: sh          $v1, 0x2A($sp)
    MEM_H(0X2A, ctx->r29) = ctx->r3;
    after_1:
    // 0x80265CCC: lhu         $v1, 0x2A($sp)
    ctx->r3 = MEM_HU(ctx->r29, 0X2A);
    // 0x80265CD0: beq         $v0, $zero, L_80265CE0
    if (ctx->r2 == 0) {
        // 0x80265CD4: addiu       $t6, $zero, 0x11
        ctx->r14 = ADD32(0, 0X11);
            goto L_80265CE0;
    }
    // 0x80265CD4: addiu       $t6, $zero, 0x11
    ctx->r14 = ADD32(0, 0X11);
    // 0x80265CD8: b           L_80265D58
    // 0x80265CDC: sb          $t6, 0x0($v0)
    MEM_B(0X0, ctx->r2) = ctx->r14;
        goto L_80265D58;
    // 0x80265CDC: sb          $t6, 0x0($v0)
    MEM_B(0X0, ctx->r2) = ctx->r14;
L_80265CE0:
    // 0x80265CE0: sll         $a2, $v1, 16
    ctx->r6 = S32(ctx->r3 << 16);
    // 0x80265CE4: sra         $t7, $a2, 16
    ctx->r15 = S32(SIGNED(ctx->r6) >> 16);
    // 0x80265CE8: or          $a2, $t7, $zero
    ctx->r6 = ctx->r15 | 0;
    // 0x80265CEC: sw          $t7, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r15;
    // 0x80265CF0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80265CF4: jal         0x80262D90
    // 0x80265CF8: addiu       $a1, $zero, 0x20
    ctx->r5 = ADD32(0, 0X20);
    ovl_8024B800_func_80262D90(rdram, ctx);
        goto after_2;
    // 0x80265CF8: addiu       $a1, $zero, 0x20
    ctx->r5 = ADD32(0, 0X20);
    after_2:
    // 0x80265CFC: lw          $a2, 0x20($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X20);
    // 0x80265D00: bne         $v0, $zero, L_80265D54
    if (ctx->r2 != 0) {
        // 0x80265D04: addiu       $t1, $zero, 0x11
        ctx->r9 = ADD32(0, 0X11);
            goto L_80265D54;
    }
    // 0x80265D04: addiu       $t1, $zero, 0x11
    ctx->r9 = ADD32(0, 0X11);
    // 0x80265D08: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80265D0C: jal         0x80262D90
    // 0x80265D10: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    ovl_8024B800_func_80262D90(rdram, ctx);
        goto after_3;
    // 0x80265D10: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    after_3:
    // 0x80265D14: bne         $v0, $zero, L_80265D4C
    if (ctx->r2 != 0) {
        // 0x80265D18: addiu       $t0, $zero, 0x11
        ctx->r8 = ADD32(0, 0X11);
            goto L_80265D4C;
    }
    // 0x80265D18: addiu       $t0, $zero, 0x11
    ctx->r8 = ADD32(0, 0X11);
    // 0x80265D1C: lhu         $a1, 0x2C($sp)
    ctx->r5 = MEM_HU(ctx->r29, 0X2C);
    // 0x80265D20: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80265D24: jal         0x80262D90
    // 0x80265D28: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    ovl_8024B800_func_80262D90(rdram, ctx);
        goto after_4;
    // 0x80265D28: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    after_4:
    // 0x80265D2C: beq         $v0, $zero, L_80265D5C
    if (ctx->r2 == 0) {
        // 0x80265D30: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_80265D5C;
    }
    // 0x80265D30: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80265D34: lhu         $t8, 0x4($s0)
    ctx->r24 = MEM_HU(ctx->r16, 0X4);
    // 0x80265D38: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x80265D3C: bne         $t8, $at, L_80265D58
    if (ctx->r24 != ctx->r1) {
        // 0x80265D40: addiu       $t9, $zero, 0x11
        ctx->r25 = ADD32(0, 0X11);
            goto L_80265D58;
    }
    // 0x80265D40: addiu       $t9, $zero, 0x11
    ctx->r25 = ADD32(0, 0X11);
    // 0x80265D44: b           L_80265D58
    // 0x80265D48: sb          $t9, 0x0($v0)
    MEM_B(0X0, ctx->r2) = ctx->r25;
        goto L_80265D58;
    // 0x80265D48: sb          $t9, 0x0($v0)
    MEM_B(0X0, ctx->r2) = ctx->r25;
L_80265D4C:
    // 0x80265D4C: b           L_80265D58
    // 0x80265D50: sb          $t0, 0x0($v0)
    MEM_B(0X0, ctx->r2) = ctx->r8;
        goto L_80265D58;
    // 0x80265D50: sb          $t0, 0x0($v0)
    MEM_B(0X0, ctx->r2) = ctx->r8;
L_80265D54:
    // 0x80265D54: sb          $t1, 0x0($v0)
    MEM_B(0X0, ctx->r2) = ctx->r9;
L_80265D58:
    // 0x80265D58: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_80265D5C:
    // 0x80265D5C: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80265D60: jr          $ra
    // 0x80265D64: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x80265D64: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void ovl_8024B800_func_80265BC4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80265BC4: andi        $t9, $t8, 0x1
    ctx->r25 = ctx->r24 & 0X1;
    // 0x80265BC8: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x80265BCC: beq         $t9, $zero, L_80265BDC
    if (ctx->r25 == 0) {
        // 0x80265BD0: sh          $t7, 0x10($a0)
        MEM_H(0X10, ctx->r4) = ctx->r15;
            goto L_80265BDC;
    }
    // 0x80265BD0: sh          $t7, 0x10($a0)
    MEM_H(0X10, ctx->r4) = ctx->r15;
    // 0x80265BD4: b           L_80265BE0
    // 0x80265BD8: addiu       $a1, $zero, 0x100
    ctx->r5 = ADD32(0, 0X100);
        goto L_80265BE0;
    // 0x80265BD8: addiu       $a1, $zero, 0x100
    ctx->r5 = ADD32(0, 0X100);
L_80265BDC:
    // 0x80265BDC: addiu       $a1, $zero, 0x500
    ctx->r5 = ADD32(0, 0X500);
L_80265BE0:
    // 0x80265BE0: addiu       $t0, $zero, 0x80
    ctx->r8 = ADD32(0, 0X80);
    // 0x80265BE4: sh          $t0, 0x2C($sp)
    MEM_H(0X2C, ctx->r29) = ctx->r8;
    // 0x80265BE8: lhu         $v0, 0x4($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X4);
    // 0x80265BEC: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x80265BF0: bne         $v0, $at, L_80265C0C
    if (ctx->r2 != ctx->r1) {
        // 0x80265BF4: addiu       $v1, $zero, 0x3
        ctx->r3 = ADD32(0, 0X3);
            goto L_80265C0C;
    }
    // 0x80265BF4: addiu       $v1, $zero, 0x3
    ctx->r3 = ADD32(0, 0X3);
    // 0x80265BF8: addiu       $t1, $zero, 0xFE
    ctx->r9 = ADD32(0, 0XFE);
    // 0x80265BFC: addiu       $a1, $zero, 0x700
    ctx->r5 = ADD32(0, 0X700);
    // 0x80265C00: sh          $t1, 0x2C($sp)
    MEM_H(0X2C, ctx->r29) = ctx->r9;
    // 0x80265C04: b           L_80265C2C
    // 0x80265C08: addiu       $v1, $zero, 0x2
    ctx->r3 = ADD32(0, 0X2);
        goto L_80265C2C;
    // 0x80265C08: addiu       $v1, $zero, 0x2
    ctx->r3 = ADD32(0, 0X2);
L_80265C0C:
    // 0x80265C0C: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80265C10: bne         $v0, $at, L_80265C24
    if (ctx->r2 != ctx->r1) {
        // 0x80265C14: addiu       $t2, $zero, 0xFE
        ctx->r10 = ADD32(0, 0XFE);
            goto L_80265C24;
    }
    // 0x80265C14: addiu       $t2, $zero, 0xFE
    ctx->r10 = ADD32(0, 0XFE);
    // 0x80265C18: sh          $t2, 0x2C($sp)
    MEM_H(0X2C, ctx->r29) = ctx->r10;
    // 0x80265C1C: b           L_80265C2C
    // 0x80265C20: addiu       $v1, $zero, 0x2
    ctx->r3 = ADD32(0, 0X2);
        goto L_80265C2C;
    // 0x80265C20: addiu       $v1, $zero, 0x2
    ctx->r3 = ADD32(0, 0X2);
L_80265C24:
    // 0x80265C24: addiu       $at, $zero, 0x5
    ctx->r1 = ADD32(0, 0X5);
    // 0x80265C28: beq         $v0, $at, L_80265D58
    if (ctx->r2 == ctx->r1) {
        // 0x80265C2C: addiu       $at, $zero, 0x2
        ctx->r1 = ADD32(0, 0X2);
            goto L_80265D58;
    }
L_80265C2C:
    // 0x80265C2C: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x80265C30: beq         $v0, $at, L_80265CAC
    if (ctx->r2 == ctx->r1) {
        // 0x80265C34: lui         $t3, 0x8009
        ctx->r11 = S32(0X8009 << 16);
            goto L_80265CAC;
    }
    // 0x80265C34: lui         $t3, 0x8009
    ctx->r11 = S32(0X8009 << 16);
    // 0x80265C38: lw          $t3, 0x3B20($t3)
    ctx->r11 = MEM_W(ctx->r11, 0X3B20);
    // 0x80265C3C: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x80265C40: lw          $t4, 0x8C($t3)
    ctx->r12 = MEM_W(ctx->r11, 0X8C);
    // 0x80265C44: nop

    // 0x80265C48: lw          $t5, 0xD4($t4)
    ctx->r13 = MEM_W(ctx->r12, 0XD4);
    // 0x80265C4C: nop

    // 0x80265C50: lbu         $t6, 0x4($t5)
    ctx->r14 = MEM_BU(ctx->r13, 0X4);
    // 0x80265C54: nop

    // 0x80265C58: andi        $t7, $t6, 0x7F
    ctx->r15 = ctx->r14 & 0X7F;
    // 0x80265C5C: beq         $t7, $at, L_80265CAC
    if (ctx->r15 == ctx->r1) {
        // 0x80265C60: nop
    
            goto L_80265CAC;
    }
    // 0x80265C60: nop

    // 0x80265C64: lh          $t8, 0x8B0($s0)
    ctx->r24 = MEM_H(ctx->r16, 0X8B0);
    // 0x80265C68: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80265C6C: slti        $at, $t8, 0x158
    ctx->r1 = SIGNED(ctx->r24) < 0X158 ? 1 : 0;
    // 0x80265C70: beq         $at, $zero, L_80265CAC
    if (ctx->r1 == 0) {
        // 0x80265C74: or          $a2, $zero, $zero
        ctx->r6 = 0 | 0;
            goto L_80265CAC;
    }
    // 0x80265C74: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x80265C78: jal         0x80262D90
    // 0x80265C7C: sh          $v1, 0x2A($sp)
    MEM_H(0X2A, ctx->r29) = ctx->r3;
    ovl_8024B800_func_80262D90(rdram, ctx);
        goto after_0;
    // 0x80265C7C: sh          $v1, 0x2A($sp)
    MEM_H(0X2A, ctx->r29) = ctx->r3;
    after_0:
    // 0x80265C80: lhu         $v1, 0x2A($sp)
    ctx->r3 = MEM_HU(ctx->r29, 0X2A);
    // 0x80265C84: beq         $v0, $zero, L_80265CAC
    if (ctx->r2 == 0) {
        // 0x80265C88: addiu       $t9, $zero, 0x2E
        ctx->r25 = ADD32(0, 0X2E);
            goto L_80265CAC;
    }
    // 0x80265C88: addiu       $t9, $zero, 0x2E
    ctx->r25 = ADD32(0, 0X2E);
    // 0x80265C8C: lhu         $t0, 0x12($v0)
    ctx->r8 = MEM_HU(ctx->r2, 0X12);
    // 0x80265C90: sb          $t9, 0x0($v0)
    MEM_B(0X0, ctx->r2) = ctx->r25;
    // 0x80265C94: ori         $t1, $t0, 0x100
    ctx->r9 = ctx->r8 | 0X100;
    // 0x80265C98: sh          $t1, 0x12($v0)
    MEM_H(0X12, ctx->r2) = ctx->r9;
    // 0x80265C9C: lhu         $t2, 0x10($s0)
    ctx->r10 = MEM_HU(ctx->r16, 0X10);
    // 0x80265CA0: nop

    // 0x80265CA4: ori         $t3, $t2, 0x80
    ctx->r11 = ctx->r10 | 0X80;
    // 0x80265CA8: sh          $t3, 0x10($s0)
    MEM_H(0X10, ctx->r16) = ctx->r11;
L_80265CAC:
    // 0x80265CAC: lhu         $t4, 0x10($s0)
    ctx->r12 = MEM_HU(ctx->r16, 0X10);
    // 0x80265CB0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80265CB4: andi        $t5, $t4, 0x80
    ctx->r13 = ctx->r12 & 0X80;
    // 0x80265CB8: bne         $t5, $zero, L_80265CE0
    if (ctx->r13 != 0) {
        // 0x80265CBC: addiu       $a1, $zero, 0x100
        ctx->r5 = ADD32(0, 0X100);
            goto L_80265CE0;
    }
    // 0x80265CBC: addiu       $a1, $zero, 0x100
    ctx->r5 = ADD32(0, 0X100);
    // 0x80265CC0: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    // 0x80265CC4: jal         0x80262D90
    // 0x80265CC8: sh          $v1, 0x2A($sp)
    MEM_H(0X2A, ctx->r29) = ctx->r3;
    ovl_8024B800_func_80262D90(rdram, ctx);
        goto after_1;
    // 0x80265CC8: sh          $v1, 0x2A($sp)
    MEM_H(0X2A, ctx->r29) = ctx->r3;
    after_1:
    // 0x80265CCC: lhu         $v1, 0x2A($sp)
    ctx->r3 = MEM_HU(ctx->r29, 0X2A);
    // 0x80265CD0: beq         $v0, $zero, L_80265CE0
    if (ctx->r2 == 0) {
        // 0x80265CD4: addiu       $t6, $zero, 0x11
        ctx->r14 = ADD32(0, 0X11);
            goto L_80265CE0;
    }
    // 0x80265CD4: addiu       $t6, $zero, 0x11
    ctx->r14 = ADD32(0, 0X11);
    // 0x80265CD8: b           L_80265D58
    // 0x80265CDC: sb          $t6, 0x0($v0)
    MEM_B(0X0, ctx->r2) = ctx->r14;
        goto L_80265D58;
    // 0x80265CDC: sb          $t6, 0x0($v0)
    MEM_B(0X0, ctx->r2) = ctx->r14;
L_80265CE0:
    // 0x80265CE0: sll         $a2, $v1, 16
    ctx->r6 = S32(ctx->r3 << 16);
    // 0x80265CE4: sra         $t7, $a2, 16
    ctx->r15 = S32(SIGNED(ctx->r6) >> 16);
    // 0x80265CE8: or          $a2, $t7, $zero
    ctx->r6 = ctx->r15 | 0;
    // 0x80265CEC: sw          $t7, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r15;
    // 0x80265CF0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80265CF4: jal         0x80262D90
    // 0x80265CF8: addiu       $a1, $zero, 0x20
    ctx->r5 = ADD32(0, 0X20);
    ovl_8024B800_func_80262D90(rdram, ctx);
        goto after_2;
    // 0x80265CF8: addiu       $a1, $zero, 0x20
    ctx->r5 = ADD32(0, 0X20);
    after_2:
    // 0x80265CFC: lw          $a2, 0x20($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X20);
    // 0x80265D00: bne         $v0, $zero, L_80265D54
    if (ctx->r2 != 0) {
        // 0x80265D04: addiu       $t1, $zero, 0x11
        ctx->r9 = ADD32(0, 0X11);
            goto L_80265D54;
    }
    // 0x80265D04: addiu       $t1, $zero, 0x11
    ctx->r9 = ADD32(0, 0X11);
    // 0x80265D08: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80265D0C: jal         0x80262D90
    // 0x80265D10: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    ovl_8024B800_func_80262D90(rdram, ctx);
        goto after_3;
    // 0x80265D10: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    after_3:
    // 0x80265D14: bne         $v0, $zero, L_80265D4C
    if (ctx->r2 != 0) {
        // 0x80265D18: addiu       $t0, $zero, 0x11
        ctx->r8 = ADD32(0, 0X11);
            goto L_80265D4C;
    }
    // 0x80265D18: addiu       $t0, $zero, 0x11
    ctx->r8 = ADD32(0, 0X11);
    // 0x80265D1C: lhu         $a1, 0x2C($sp)
    ctx->r5 = MEM_HU(ctx->r29, 0X2C);
    // 0x80265D20: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80265D24: jal         0x80262D90
    // 0x80265D28: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    ovl_8024B800_func_80262D90(rdram, ctx);
        goto after_4;
    // 0x80265D28: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    after_4:
    // 0x80265D2C: beq         $v0, $zero, L_80265D5C
    if (ctx->r2 == 0) {
        // 0x80265D30: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_80265D5C;
    }
    // 0x80265D30: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80265D34: lhu         $t8, 0x4($s0)
    ctx->r24 = MEM_HU(ctx->r16, 0X4);
    // 0x80265D38: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x80265D3C: bne         $t8, $at, L_80265D58
    if (ctx->r24 != ctx->r1) {
        // 0x80265D40: addiu       $t9, $zero, 0x11
        ctx->r25 = ADD32(0, 0X11);
            goto L_80265D58;
    }
    // 0x80265D40: addiu       $t9, $zero, 0x11
    ctx->r25 = ADD32(0, 0X11);
    // 0x80265D44: b           L_80265D58
    // 0x80265D48: sb          $t9, 0x0($v0)
    MEM_B(0X0, ctx->r2) = ctx->r25;
        goto L_80265D58;
    // 0x80265D48: sb          $t9, 0x0($v0)
    MEM_B(0X0, ctx->r2) = ctx->r25;
L_80265D4C:
    // 0x80265D4C: b           L_80265D58
    // 0x80265D50: sb          $t0, 0x0($v0)
    MEM_B(0X0, ctx->r2) = ctx->r8;
        goto L_80265D58;
    // 0x80265D50: sb          $t0, 0x0($v0)
    MEM_B(0X0, ctx->r2) = ctx->r8;
L_80265D54:
    // 0x80265D54: sb          $t1, 0x0($v0)
    MEM_B(0X0, ctx->r2) = ctx->r9;
L_80265D58:
    // 0x80265D58: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_80265D5C:
    // 0x80265D5C: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80265D60: jr          $ra
    // 0x80265D64: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x80265D64: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void ovl_8024B800_func_80265C84(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80265C84: beq         $v0, $zero, L_80265CAC
    if (ctx->r2 == 0) {
        // 0x80265C88: addiu       $t9, $zero, 0x2E
        ctx->r25 = ADD32(0, 0X2E);
            goto L_80265CAC;
    }
    // 0x80265C88: addiu       $t9, $zero, 0x2E
    ctx->r25 = ADD32(0, 0X2E);
    // 0x80265C8C: lhu         $t0, 0x12($v0)
    ctx->r8 = MEM_HU(ctx->r2, 0X12);
    // 0x80265C90: sb          $t9, 0x0($v0)
    MEM_B(0X0, ctx->r2) = ctx->r25;
    // 0x80265C94: ori         $t1, $t0, 0x100
    ctx->r9 = ctx->r8 | 0X100;
    // 0x80265C98: sh          $t1, 0x12($v0)
    MEM_H(0X12, ctx->r2) = ctx->r9;
    // 0x80265C9C: lhu         $t2, 0x10($s0)
    ctx->r10 = MEM_HU(ctx->r16, 0X10);
    // 0x80265CA0: nop

    // 0x80265CA4: ori         $t3, $t2, 0x80
    ctx->r11 = ctx->r10 | 0X80;
    // 0x80265CA8: sh          $t3, 0x10($s0)
    MEM_H(0X10, ctx->r16) = ctx->r11;
L_80265CAC:
    // 0x80265CAC: lhu         $t4, 0x10($s0)
    ctx->r12 = MEM_HU(ctx->r16, 0X10);
    // 0x80265CB0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80265CB4: andi        $t5, $t4, 0x80
    ctx->r13 = ctx->r12 & 0X80;
    // 0x80265CB8: bne         $t5, $zero, L_80265CE0
    if (ctx->r13 != 0) {
        // 0x80265CBC: addiu       $a1, $zero, 0x100
        ctx->r5 = ADD32(0, 0X100);
            goto L_80265CE0;
    }
    // 0x80265CBC: addiu       $a1, $zero, 0x100
    ctx->r5 = ADD32(0, 0X100);
    // 0x80265CC0: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    // 0x80265CC4: jal         0x80262D90
    // 0x80265CC8: sh          $v1, 0x2A($sp)
    MEM_H(0X2A, ctx->r29) = ctx->r3;
    ovl_8024B800_func_80262D90(rdram, ctx);
        goto after_0;
    // 0x80265CC8: sh          $v1, 0x2A($sp)
    MEM_H(0X2A, ctx->r29) = ctx->r3;
    after_0:
    // 0x80265CCC: lhu         $v1, 0x2A($sp)
    ctx->r3 = MEM_HU(ctx->r29, 0X2A);
    // 0x80265CD0: beq         $v0, $zero, L_80265CE0
    if (ctx->r2 == 0) {
        // 0x80265CD4: addiu       $t6, $zero, 0x11
        ctx->r14 = ADD32(0, 0X11);
            goto L_80265CE0;
    }
    // 0x80265CD4: addiu       $t6, $zero, 0x11
    ctx->r14 = ADD32(0, 0X11);
    // 0x80265CD8: b           L_80265D58
    // 0x80265CDC: sb          $t6, 0x0($v0)
    MEM_B(0X0, ctx->r2) = ctx->r14;
        goto L_80265D58;
    // 0x80265CDC: sb          $t6, 0x0($v0)
    MEM_B(0X0, ctx->r2) = ctx->r14;
L_80265CE0:
    // 0x80265CE0: sll         $a2, $v1, 16
    ctx->r6 = S32(ctx->r3 << 16);
    // 0x80265CE4: sra         $t7, $a2, 16
    ctx->r15 = S32(SIGNED(ctx->r6) >> 16);
    // 0x80265CE8: or          $a2, $t7, $zero
    ctx->r6 = ctx->r15 | 0;
    // 0x80265CEC: sw          $t7, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r15;
    // 0x80265CF0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80265CF4: jal         0x80262D90
    // 0x80265CF8: addiu       $a1, $zero, 0x20
    ctx->r5 = ADD32(0, 0X20);
    ovl_8024B800_func_80262D90(rdram, ctx);
        goto after_1;
    // 0x80265CF8: addiu       $a1, $zero, 0x20
    ctx->r5 = ADD32(0, 0X20);
    after_1:
    // 0x80265CFC: lw          $a2, 0x20($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X20);
    // 0x80265D00: bne         $v0, $zero, L_80265D54
    if (ctx->r2 != 0) {
        // 0x80265D04: addiu       $t1, $zero, 0x11
        ctx->r9 = ADD32(0, 0X11);
            goto L_80265D54;
    }
    // 0x80265D04: addiu       $t1, $zero, 0x11
    ctx->r9 = ADD32(0, 0X11);
    // 0x80265D08: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80265D0C: jal         0x80262D90
    // 0x80265D10: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    ovl_8024B800_func_80262D90(rdram, ctx);
        goto after_2;
    // 0x80265D10: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    after_2:
    // 0x80265D14: bne         $v0, $zero, L_80265D4C
    if (ctx->r2 != 0) {
        // 0x80265D18: addiu       $t0, $zero, 0x11
        ctx->r8 = ADD32(0, 0X11);
            goto L_80265D4C;
    }
    // 0x80265D18: addiu       $t0, $zero, 0x11
    ctx->r8 = ADD32(0, 0X11);
    // 0x80265D1C: lhu         $a1, 0x2C($sp)
    ctx->r5 = MEM_HU(ctx->r29, 0X2C);
    // 0x80265D20: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80265D24: jal         0x80262D90
    // 0x80265D28: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    ovl_8024B800_func_80262D90(rdram, ctx);
        goto after_3;
    // 0x80265D28: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    after_3:
    // 0x80265D2C: beq         $v0, $zero, L_80265D5C
    if (ctx->r2 == 0) {
        // 0x80265D30: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_80265D5C;
    }
    // 0x80265D30: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80265D34: lhu         $t8, 0x4($s0)
    ctx->r24 = MEM_HU(ctx->r16, 0X4);
    // 0x80265D38: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x80265D3C: bne         $t8, $at, L_80265D58
    if (ctx->r24 != ctx->r1) {
        // 0x80265D40: addiu       $t9, $zero, 0x11
        ctx->r25 = ADD32(0, 0X11);
            goto L_80265D58;
    }
    // 0x80265D40: addiu       $t9, $zero, 0x11
    ctx->r25 = ADD32(0, 0X11);
    // 0x80265D44: b           L_80265D58
    // 0x80265D48: sb          $t9, 0x0($v0)
    MEM_B(0X0, ctx->r2) = ctx->r25;
        goto L_80265D58;
    // 0x80265D48: sb          $t9, 0x0($v0)
    MEM_B(0X0, ctx->r2) = ctx->r25;
L_80265D4C:
    // 0x80265D4C: b           L_80265D58
    // 0x80265D50: sb          $t0, 0x0($v0)
    MEM_B(0X0, ctx->r2) = ctx->r8;
        goto L_80265D58;
    // 0x80265D50: sb          $t0, 0x0($v0)
    MEM_B(0X0, ctx->r2) = ctx->r8;
L_80265D54:
    // 0x80265D54: sb          $t1, 0x0($v0)
    MEM_B(0X0, ctx->r2) = ctx->r9;
L_80265D58:
    // 0x80265D58: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_80265D5C:
    // 0x80265D5C: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80265D60: jr          $ra
    // 0x80265D64: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x80265D64: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void ovl_8024B800_func_80265D1C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80265D1C: lhu         $a1, 0x2C($sp)
    ctx->r5 = MEM_HU(ctx->r29, 0X2C);
    // 0x80265D20: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80265D24: jal         0x80262D90
    // 0x80265D28: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    ovl_8024B800_func_80262D90(rdram, ctx);
        goto after_0;
    // 0x80265D28: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    after_0:
    // 0x80265D2C: beq         $v0, $zero, L_80265D5C
    if (ctx->r2 == 0) {
        // 0x80265D30: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_80265D5C;
    }
    // 0x80265D30: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80265D34: lhu         $t8, 0x4($s0)
    ctx->r24 = MEM_HU(ctx->r16, 0X4);
    // 0x80265D38: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x80265D3C: bne         $t8, $at, L_80265D58
    if (ctx->r24 != ctx->r1) {
        // 0x80265D40: addiu       $t9, $zero, 0x11
        ctx->r25 = ADD32(0, 0X11);
            goto L_80265D58;
    }
    // 0x80265D40: addiu       $t9, $zero, 0x11
    ctx->r25 = ADD32(0, 0X11);
    // 0x80265D44: b           L_80265D58
    // 0x80265D48: sb          $t9, 0x0($v0)
    MEM_B(0X0, ctx->r2) = ctx->r25;
        goto L_80265D58;
    // 0x80265D48: sb          $t9, 0x0($v0)
    MEM_B(0X0, ctx->r2) = ctx->r25;
    // 0x80265D4C: b           L_80265D58
    // 0x80265D50: sb          $t0, 0x0($v0)
    MEM_B(0X0, ctx->r2) = ctx->r8;
        goto L_80265D58;
    // 0x80265D50: sb          $t0, 0x0($v0)
    MEM_B(0X0, ctx->r2) = ctx->r8;
    // 0x80265D54: sb          $t1, 0x0($v0)
    MEM_B(0X0, ctx->r2) = ctx->r9;
L_80265D58:
    // 0x80265D58: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_80265D5C:
    // 0x80265D5C: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80265D60: jr          $ra
    // 0x80265D64: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x80265D64: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void ovl_8024B800_func_80265D68(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80265D68: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80265D6C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80265D70: lhu         $t6, 0x4($a0)
    ctx->r14 = MEM_HU(ctx->r4, 0X4);
    // 0x80265D74: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x80265D78: bne         $t6, $at, L_80265D84
    if (ctx->r14 != ctx->r1) {
        // 0x80265D7C: addiu       $a1, $zero, 0x600
        ctx->r5 = ADD32(0, 0X600);
            goto L_80265D84;
    }
    // 0x80265D7C: addiu       $a1, $zero, 0x600
    ctx->r5 = ADD32(0, 0X600);
    // 0x80265D80: addiu       $a1, $zero, 0x700
    ctx->r5 = ADD32(0, 0X700);
L_80265D84:
    // 0x80265D84: jal         0x80262FC0
    // 0x80265D88: addiu       $a2, $zero, 0x12
    ctx->r6 = ADD32(0, 0X12);
    ovl_8024B800_func_80262FC0(rdram, ctx);
        goto after_0;
    // 0x80265D88: addiu       $a2, $zero, 0x12
    ctx->r6 = ADD32(0, 0X12);
    after_0:
    // 0x80265D8C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80265D90: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80265D94: jr          $ra
    // 0x80265D98: nop

    return;
    // 0x80265D98: nop

;}
RECOMP_FUNC void ovl_8024B800_func_80265D70(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80265D70: lhu         $t6, 0x4($a0)
    ctx->r14 = MEM_HU(ctx->r4, 0X4);
    // 0x80265D74: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x80265D78: bne         $t6, $at, L_80265D84
    if (ctx->r14 != ctx->r1) {
        // 0x80265D7C: addiu       $a1, $zero, 0x600
        ctx->r5 = ADD32(0, 0X600);
            goto L_80265D84;
    }
    // 0x80265D7C: addiu       $a1, $zero, 0x600
    ctx->r5 = ADD32(0, 0X600);
    // 0x80265D80: addiu       $a1, $zero, 0x700
    ctx->r5 = ADD32(0, 0X700);
L_80265D84:
    // 0x80265D84: jal         0x80262FC0
    // 0x80265D88: addiu       $a2, $zero, 0x12
    ctx->r6 = ADD32(0, 0X12);
    ovl_8024B800_func_80262FC0(rdram, ctx);
        goto after_0;
    // 0x80265D88: addiu       $a2, $zero, 0x12
    ctx->r6 = ADD32(0, 0X12);
    after_0:
    // 0x80265D8C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80265D90: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80265D94: jr          $ra
    // 0x80265D98: nop

    return;
    // 0x80265D98: nop

;}
RECOMP_FUNC void ovl_8024B800_func_80265D9C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80265D9C: lui         $a3, 0x8009
    ctx->r7 = S32(0X8009 << 16);
    // 0x80265DA0: addiu       $a3, $a3, 0x3B20
    ctx->r7 = ADD32(ctx->r7, 0X3B20);
    // 0x80265DA4: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80265DA8: lw          $v0, 0x0($a3)
    ctx->r2 = MEM_W(ctx->r7, 0X0);
    // 0x80265DAC: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80265DB0: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80265DB4: lw          $a2, 0x88($v0)
    ctx->r6 = MEM_W(ctx->r2, 0X88);
    // 0x80265DB8: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x80265DBC: bne         $a2, $zero, L_80265DDC
    if (ctx->r6 != 0) {
        // 0x80265DC0: or          $a1, $a2, $zero
        ctx->r5 = ctx->r6 | 0;
            goto L_80265DDC;
    }
    // 0x80265DC0: or          $a1, $a2, $zero
    ctx->r5 = ctx->r6 | 0;
    // 0x80265DC4: lw          $a1, 0x90($v0)
    ctx->r5 = MEM_W(ctx->r2, 0X90);
    // 0x80265DC8: nop

    // 0x80265DCC: bne         $a1, $zero, L_80265DDC
    if (ctx->r5 != 0) {
        // 0x80265DD0: nop
    
            goto L_80265DDC;
    }
    // 0x80265DD0: nop

    // 0x80265DD4: lw          $a1, 0x8C($v0)
    ctx->r5 = MEM_W(ctx->r2, 0X8C);
    // 0x80265DD8: nop

L_80265DDC:
    // 0x80265DDC: lw          $v1, 0xA0($v0)
    ctx->r3 = MEM_W(ctx->r2, 0XA0);
    // 0x80265DE0: addiu       $t6, $zero, 0x2C
    ctx->r14 = ADD32(0, 0X2C);
    // 0x80265DE4: beq         $v1, $zero, L_80265E0C
    if (ctx->r3 == 0) {
        // 0x80265DE8: lui         $at, 0x4296
        ctx->r1 = S32(0X4296 << 16);
            goto L_80265E0C;
    }
    // 0x80265DE8: lui         $at, 0x4296
    ctx->r1 = S32(0X4296 << 16);
    // 0x80265DEC: lhu         $t7, 0x12($v1)
    ctx->r15 = MEM_HU(ctx->r3, 0X12);
    // 0x80265DF0: sb          $t6, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r14;
    // 0x80265DF4: ori         $t8, $t7, 0x100
    ctx->r24 = ctx->r15 | 0X100;
    // 0x80265DF8: sh          $t8, 0x12($v1)
    MEM_H(0X12, ctx->r3) = ctx->r24;
    // 0x80265DFC: lw          $v0, 0x0($a3)
    ctx->r2 = MEM_W(ctx->r7, 0X0);
    // 0x80265E00: nop

    // 0x80265E04: lw          $a2, 0x88($v0)
    ctx->r6 = MEM_W(ctx->r2, 0X88);
    // 0x80265E08: nop

L_80265E0C:
    // 0x80265E0C: bne         $a2, $zero, L_80265E64
    if (ctx->r6 != 0) {
        // 0x80265E10: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80265E64;
    }
    // 0x80265E10: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80265E14: lbu         $t9, 0xBD($v0)
    ctx->r25 = MEM_BU(ctx->r2, 0XBD);
    // 0x80265E18: lui         $t1, 0x8012
    ctx->r9 = S32(0X8012 << 16);
    // 0x80265E1C: andi        $t0, $t9, 0x4
    ctx->r8 = ctx->r25 & 0X4;
    // 0x80265E20: beq         $t0, $zero, L_80265E64
    if (ctx->r8 == 0) {
        // 0x80265E24: nop
    
            goto L_80265E64;
    }
    // 0x80265E24: nop

    // 0x80265E28: lhu         $t1, 0xB78($t1)
    ctx->r9 = MEM_HU(ctx->r9, 0XB78);
    // 0x80265E2C: nop

    // 0x80265E30: bne         $t1, $zero, L_80265E64
    if (ctx->r9 != 0) {
        // 0x80265E34: nop
    
            goto L_80265E64;
    }
    // 0x80265E34: nop

    // 0x80265E38: lw          $t2, 0x8C($v0)
    ctx->r10 = MEM_W(ctx->r2, 0X8C);
    // 0x80265E3C: nop

    // 0x80265E40: sb          $zero, 0x0($t2)
    MEM_B(0X0, ctx->r10) = 0;
    // 0x80265E44: lw          $t3, 0x0($a3)
    ctx->r11 = MEM_W(ctx->r7, 0X0);
    // 0x80265E48: nop

    // 0x80265E4C: lw          $v1, 0x8C($t3)
    ctx->r3 = MEM_W(ctx->r11, 0X8C);
    // 0x80265E50: nop

    // 0x80265E54: lhu         $t4, 0x12($v1)
    ctx->r12 = MEM_HU(ctx->r3, 0X12);
    // 0x80265E58: nop

    // 0x80265E5C: ori         $t5, $t4, 0x100
    ctx->r13 = ctx->r12 | 0X100;
    // 0x80265E60: sh          $t5, 0x12($v1)
    MEM_H(0X12, ctx->r3) = ctx->r13;
L_80265E64:
    // 0x80265E64: lh          $v0, 0x8B0($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X8B0);
    // 0x80265E68: lh          $t6, 0x8C4($s0)
    ctx->r14 = MEM_H(ctx->r16, 0X8C4);
    // 0x80265E6C: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x80265E70: lwc1        $f10, 0x8D8($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X8D8);
    // 0x80265E74: mtc1        $v0, $f4
    ctx->f4.u32l = ctx->r2;
    // 0x80265E78: mtc1        $t6, $f18
    ctx->f18.u32l = ctx->r14;
    // 0x80265E7C: mul.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = MUL_S(ctx->f8.fl, ctx->f10.fl);
    // 0x80265E80: slti        $at, $v0, 0x15E
    ctx->r1 = SIGNED(ctx->r2) < 0X15E ? 1 : 0;
    // 0x80265E84: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x80265E88: cvt.s.w     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    ctx->f4.fl = CVT_S_W(ctx->f18.u32l);
    // 0x80265E8C: add.s       $f8, $f4, $f16
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f16.fl;
    // 0x80265E90: c.lt.s      $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f6.fl < ctx->f8.fl;
    // 0x80265E94: nop

    // 0x80265E98: bc1f        L_80265F80
    if (!c1cs) {
        // 0x80265E9C: nop
    
            goto L_80265F80;
    }
    // 0x80265E9C: nop

    // 0x80265EA0: jal         0x80265D68
    // 0x80265EA4: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    ovl_8024B800_func_80265D68(rdram, ctx);
        goto after_0;
    // 0x80265EA4: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    after_0:
    // 0x80265EA8: lw          $a1, 0x24($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X24);
    // 0x80265EAC: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80265EB0: lw          $t7, 0xD4($a1)
    ctx->r15 = MEM_W(ctx->r5, 0XD4);
    // 0x80265EB4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x80265EB8: lbu         $t8, 0x4($t7)
    ctx->r24 = MEM_BU(ctx->r15, 0X4);
    // 0x80265EBC: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
    // 0x80265EC0: andi        $t9, $t8, 0x7F
    ctx->r25 = ctx->r24 & 0X7F;
    // 0x80265EC4: bne         $t9, $at, L_80265F08
    if (ctx->r25 != ctx->r1) {
        // 0x80265EC8: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80265F08;
    }
    // 0x80265EC8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80265ECC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80265ED0: jal         0x80262B58
    // 0x80265ED4: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    ovl_8024B800_func_80262B58(rdram, ctx);
        goto after_1;
    // 0x80265ED4: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_1:
    // 0x80265ED8: beq         $v0, $zero, L_80265EEC
    if (ctx->r2 == 0) {
        // 0x80265EDC: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80265EEC;
    }
    // 0x80265EDC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80265EE0: addiu       $t0, $zero, 0x8
    ctx->r8 = ADD32(0, 0X8);
    // 0x80265EE4: b           L_80265F10
    // 0x80265EE8: sb          $t0, 0x0($v0)
    MEM_B(0X0, ctx->r2) = ctx->r8;
        goto L_80265F10;
    // 0x80265EE8: sb          $t0, 0x0($v0)
    MEM_B(0X0, ctx->r2) = ctx->r8;
L_80265EEC:
    // 0x80265EEC: addiu       $a1, $zero, 0xC
    ctx->r5 = ADD32(0, 0XC);
    // 0x80265EF0: jal         0x80262B58
    // 0x80265EF4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    ovl_8024B800_func_80262B58(rdram, ctx);
        goto after_2;
    // 0x80265EF4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_2:
    // 0x80265EF8: beq         $v0, $zero, L_80265F10
    if (ctx->r2 == 0) {
        // 0x80265EFC: addiu       $t1, $zero, 0x8
        ctx->r9 = ADD32(0, 0X8);
            goto L_80265F10;
    }
    // 0x80265EFC: addiu       $t1, $zero, 0x8
    ctx->r9 = ADD32(0, 0X8);
    // 0x80265F00: b           L_80265F10
    // 0x80265F04: sb          $t1, 0x0($v0)
    MEM_B(0X0, ctx->r2) = ctx->r9;
        goto L_80265F10;
    // 0x80265F04: sb          $t1, 0x0($v0)
    MEM_B(0X0, ctx->r2) = ctx->r9;
L_80265F08:
    // 0x80265F08: jal         0x80262FC0
    // 0x80265F0C: addiu       $a2, $zero, 0xA
    ctx->r6 = ADD32(0, 0XA);
    ovl_8024B800_func_80262FC0(rdram, ctx);
        goto after_3;
    // 0x80265F0C: addiu       $a2, $zero, 0xA
    ctx->r6 = ADD32(0, 0XA);
    after_3:
L_80265F10:
    // 0x80265F10: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80265F14: addiu       $a1, $zero, 0x40
    ctx->r5 = ADD32(0, 0X40);
    // 0x80265F18: jal         0x80262FC0
    // 0x80265F1C: addiu       $a2, $zero, 0xC
    ctx->r6 = ADD32(0, 0XC);
    ovl_8024B800_func_80262FC0(rdram, ctx);
        goto after_4;
    // 0x80265F1C: addiu       $a2, $zero, 0xC
    ctx->r6 = ADD32(0, 0XC);
    after_4:
    // 0x80265F20: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80265F24: addiu       $a1, $zero, 0x40
    ctx->r5 = ADD32(0, 0X40);
    // 0x80265F28: jal         0x80262D90
    // 0x80265F2C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    ovl_8024B800_func_80262D90(rdram, ctx);
        goto after_5;
    // 0x80265F2C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_5:
    // 0x80265F30: beq         $v0, $zero, L_80265F40
    if (ctx->r2 == 0) {
        // 0x80265F34: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80265F40;
    }
    // 0x80265F34: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80265F38: addiu       $t2, $zero, 0xD
    ctx->r10 = ADD32(0, 0XD);
    // 0x80265F3C: sb          $t2, 0x0($v0)
    MEM_B(0X0, ctx->r2) = ctx->r10;
L_80265F40:
    // 0x80265F40: addiu       $a1, $zero, 0x80
    ctx->r5 = ADD32(0, 0X80);
    // 0x80265F44: jal         0x80262D90
    // 0x80265F48: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    ovl_8024B800_func_80262D90(rdram, ctx);
        goto after_6;
    // 0x80265F48: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_6:
    // 0x80265F4C: beq         $v0, $zero, L_80265F58
    if (ctx->r2 == 0) {
        // 0x80265F50: addiu       $t3, $zero, 0xE
        ctx->r11 = ADD32(0, 0XE);
            goto L_80265F58;
    }
    // 0x80265F50: addiu       $t3, $zero, 0xE
    ctx->r11 = ADD32(0, 0XE);
    // 0x80265F54: sb          $t3, 0x0($v0)
    MEM_B(0X0, ctx->r2) = ctx->r11;
L_80265F58:
    // 0x80265F58: jal         0x80263650
    // 0x80265F5C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_8024B800_func_80263650(rdram, ctx);
        goto after_7;
    // 0x80265F5C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_7:
    // 0x80265F60: lhu         $t4, 0x4($s0)
    ctx->r12 = MEM_HU(ctx->r16, 0X4);
    // 0x80265F64: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x80265F68: bne         $t4, $at, L_80266044
    if (ctx->r12 != ctx->r1) {
        // 0x80265F6C: nop
    
            goto L_80266044;
    }
    // 0x80265F6C: nop

    // 0x80265F70: jal         0x80265BAC
    // 0x80265F74: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_8024B800_func_80265BAC(rdram, ctx);
        goto after_8;
    // 0x80265F74: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_8:
    // 0x80265F78: b           L_80266044
    // 0x80265F7C: nop

        goto L_80266044;
    // 0x80265F7C: nop

L_80265F80:
    // 0x80265F80: beq         $at, $zero, L_80266004
    if (ctx->r1 == 0) {
        // 0x80265F84: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80266004;
    }
    // 0x80265F84: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80265F88: jal         0x80265D68
    // 0x80265F8C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_8024B800_func_80265D68(rdram, ctx);
        goto after_9;
    // 0x80265F8C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_9:
    // 0x80265F90: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80265F94: addiu       $a1, $zero, 0x40
    ctx->r5 = ADD32(0, 0X40);
    // 0x80265F98: jal         0x80262D90
    // 0x80265F9C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    ovl_8024B800_func_80262D90(rdram, ctx);
        goto after_10;
    // 0x80265F9C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_10:
    // 0x80265FA0: beq         $v0, $zero, L_80265FAC
    if (ctx->r2 == 0) {
        // 0x80265FA4: addiu       $t5, $zero, 0xF
        ctx->r13 = ADD32(0, 0XF);
            goto L_80265FAC;
    }
    // 0x80265FA4: addiu       $t5, $zero, 0xF
    ctx->r13 = ADD32(0, 0XF);
    // 0x80265FA8: sb          $t5, 0x0($v0)
    MEM_B(0X0, ctx->r2) = ctx->r13;
L_80265FAC:
    // 0x80265FAC: lh          $t6, 0x8B0($s0)
    ctx->r14 = MEM_H(ctx->r16, 0X8B0);
    // 0x80265FB0: nop

    // 0x80265FB4: blez        $t6, L_80265FC4
    if (SIGNED(ctx->r14) <= 0) {
        // 0x80265FB8: nop
    
            goto L_80265FC4;
    }
    // 0x80265FB8: nop

    // 0x80265FBC: jal         0x80263608
    // 0x80265FC0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_8024B800_func_80263608(rdram, ctx);
        goto after_11;
    // 0x80265FC0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_11:
L_80265FC4:
    // 0x80265FC4: jal         0x80263650
    // 0x80265FC8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_8024B800_func_80263650(rdram, ctx);
        goto after_12;
    // 0x80265FC8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_12:
    // 0x80265FCC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80265FD0: addiu       $a1, $zero, 0x80
    ctx->r5 = ADD32(0, 0X80);
    // 0x80265FD4: jal         0x80262D90
    // 0x80265FD8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    ovl_8024B800_func_80262D90(rdram, ctx);
        goto after_13;
    // 0x80265FD8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_13:
    // 0x80265FDC: beq         $v0, $zero, L_80265FF4
    if (ctx->r2 == 0) {
        // 0x80265FE0: addiu       $t7, $zero, 0x10
        ctx->r15 = ADD32(0, 0X10);
            goto L_80265FF4;
    }
    // 0x80265FE0: addiu       $t7, $zero, 0x10
    ctx->r15 = ADD32(0, 0X10);
    // 0x80265FE4: lhu         $t8, 0x12($v0)
    ctx->r24 = MEM_HU(ctx->r2, 0X12);
    // 0x80265FE8: sb          $t7, 0x0($v0)
    MEM_B(0X0, ctx->r2) = ctx->r15;
    // 0x80265FEC: ori         $t9, $t8, 0x100
    ctx->r25 = ctx->r24 | 0X100;
    // 0x80265FF0: sh          $t9, 0x12($v0)
    MEM_H(0X12, ctx->r2) = ctx->r25;
L_80265FF4:
    // 0x80265FF4: jal         0x80265BAC
    // 0x80265FF8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_8024B800_func_80265BAC(rdram, ctx);
        goto after_14;
    // 0x80265FF8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_14:
    // 0x80265FFC: b           L_80266044
    // 0x80266000: nop

        goto L_80266044;
    // 0x80266000: nop

L_80266004:
    // 0x80266004: addiu       $a1, $zero, 0x700
    ctx->r5 = ADD32(0, 0X700);
    // 0x80266008: jal         0x80262FC0
    // 0x8026600C: addiu       $a2, $zero, 0x12
    ctx->r6 = ADD32(0, 0X12);
    ovl_8024B800_func_80262FC0(rdram, ctx);
        goto after_15;
    // 0x8026600C: addiu       $a2, $zero, 0x12
    ctx->r6 = ADD32(0, 0X12);
    after_15:
    // 0x80266010: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80266014: addiu       $a1, $zero, 0x40
    ctx->r5 = ADD32(0, 0X40);
    // 0x80266018: jal         0x80262D90
    // 0x8026601C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    ovl_8024B800_func_80262D90(rdram, ctx);
        goto after_16;
    // 0x8026601C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_16:
    // 0x80266020: beq         $v0, $zero, L_8026602C
    if (ctx->r2 == 0) {
        // 0x80266024: addiu       $t0, $zero, 0xF
        ctx->r8 = ADD32(0, 0XF);
            goto L_8026602C;
    }
    // 0x80266024: addiu       $t0, $zero, 0xF
    ctx->r8 = ADD32(0, 0XF);
    // 0x80266028: sb          $t0, 0x0($v0)
    MEM_B(0X0, ctx->r2) = ctx->r8;
L_8026602C:
    // 0x8026602C: jal         0x80263608
    // 0x80266030: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_8024B800_func_80263608(rdram, ctx);
        goto after_17;
    // 0x80266030: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_17:
    // 0x80266034: jal         0x80263650
    // 0x80266038: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_8024B800_func_80263650(rdram, ctx);
        goto after_18;
    // 0x80266038: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_18:
    // 0x8026603C: jal         0x80265BAC
    // 0x80266040: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_8024B800_func_80265BAC(rdram, ctx);
        goto after_19;
    // 0x80266040: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_19:
L_80266044:
    // 0x80266044: jal         0x80265A40
    // 0x80266048: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_8024B800_func_80265A40(rdram, ctx);
        goto after_20;
    // 0x80266048: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_20:
    // 0x8026604C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80266050: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80266054: jr          $ra
    // 0x80266058: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x80266058: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void ovl_8024B800_func_80265DC4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80265DC4: lw          $a1, 0x90($v0)
    ctx->r5 = MEM_W(ctx->r2, 0X90);
    // 0x80265DC8: nop

    // 0x80265DCC: bne         $a1, $zero, L_80265DDC
    if (ctx->r5 != 0) {
        // 0x80265DD0: nop
    
            goto L_80265DDC;
    }
    // 0x80265DD0: nop

    // 0x80265DD4: lw          $a1, 0x8C($v0)
    ctx->r5 = MEM_W(ctx->r2, 0X8C);
    // 0x80265DD8: nop

L_80265DDC:
    // 0x80265DDC: lw          $v1, 0xA0($v0)
    ctx->r3 = MEM_W(ctx->r2, 0XA0);
    // 0x80265DE0: addiu       $t6, $zero, 0x2C
    ctx->r14 = ADD32(0, 0X2C);
    // 0x80265DE4: beq         $v1, $zero, L_80265E0C
    if (ctx->r3 == 0) {
        // 0x80265DE8: lui         $at, 0x4296
        ctx->r1 = S32(0X4296 << 16);
            goto L_80265E0C;
    }
    // 0x80265DE8: lui         $at, 0x4296
    ctx->r1 = S32(0X4296 << 16);
    // 0x80265DEC: lhu         $t7, 0x12($v1)
    ctx->r15 = MEM_HU(ctx->r3, 0X12);
    // 0x80265DF0: sb          $t6, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r14;
    // 0x80265DF4: ori         $t8, $t7, 0x100
    ctx->r24 = ctx->r15 | 0X100;
    // 0x80265DF8: sh          $t8, 0x12($v1)
    MEM_H(0X12, ctx->r3) = ctx->r24;
    // 0x80265DFC: lw          $v0, 0x0($a3)
    ctx->r2 = MEM_W(ctx->r7, 0X0);
    // 0x80265E00: nop

    // 0x80265E04: lw          $a2, 0x88($v0)
    ctx->r6 = MEM_W(ctx->r2, 0X88);
    // 0x80265E08: nop

L_80265E0C:
    // 0x80265E0C: bne         $a2, $zero, L_80265E64
    if (ctx->r6 != 0) {
        // 0x80265E10: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80265E64;
    }
    // 0x80265E10: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80265E14: lbu         $t9, 0xBD($v0)
    ctx->r25 = MEM_BU(ctx->r2, 0XBD);
    // 0x80265E18: lui         $t1, 0x8012
    ctx->r9 = S32(0X8012 << 16);
    // 0x80265E1C: andi        $t0, $t9, 0x4
    ctx->r8 = ctx->r25 & 0X4;
    // 0x80265E20: beq         $t0, $zero, L_80265E64
    if (ctx->r8 == 0) {
        // 0x80265E24: nop
    
            goto L_80265E64;
    }
    // 0x80265E24: nop

    // 0x80265E28: lhu         $t1, 0xB78($t1)
    ctx->r9 = MEM_HU(ctx->r9, 0XB78);
    // 0x80265E2C: nop

    // 0x80265E30: bne         $t1, $zero, L_80265E64
    if (ctx->r9 != 0) {
        // 0x80265E34: nop
    
            goto L_80265E64;
    }
    // 0x80265E34: nop

    // 0x80265E38: lw          $t2, 0x8C($v0)
    ctx->r10 = MEM_W(ctx->r2, 0X8C);
    // 0x80265E3C: nop

    // 0x80265E40: sb          $zero, 0x0($t2)
    MEM_B(0X0, ctx->r10) = 0;
    // 0x80265E44: lw          $t3, 0x0($a3)
    ctx->r11 = MEM_W(ctx->r7, 0X0);
    // 0x80265E48: nop

    // 0x80265E4C: lw          $v1, 0x8C($t3)
    ctx->r3 = MEM_W(ctx->r11, 0X8C);
    // 0x80265E50: nop

    // 0x80265E54: lhu         $t4, 0x12($v1)
    ctx->r12 = MEM_HU(ctx->r3, 0X12);
    // 0x80265E58: nop

    // 0x80265E5C: ori         $t5, $t4, 0x100
    ctx->r13 = ctx->r12 | 0X100;
    // 0x80265E60: sh          $t5, 0x12($v1)
    MEM_H(0X12, ctx->r3) = ctx->r13;
L_80265E64:
    // 0x80265E64: lh          $v0, 0x8B0($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X8B0);
    // 0x80265E68: lh          $t6, 0x8C4($s0)
    ctx->r14 = MEM_H(ctx->r16, 0X8C4);
    // 0x80265E6C: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x80265E70: lwc1        $f10, 0x8D8($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X8D8);
    // 0x80265E74: mtc1        $v0, $f4
    ctx->f4.u32l = ctx->r2;
    // 0x80265E78: mtc1        $t6, $f18
    ctx->f18.u32l = ctx->r14;
    // 0x80265E7C: mul.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = MUL_S(ctx->f8.fl, ctx->f10.fl);
    // 0x80265E80: slti        $at, $v0, 0x15E
    ctx->r1 = SIGNED(ctx->r2) < 0X15E ? 1 : 0;
    // 0x80265E84: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x80265E88: cvt.s.w     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    ctx->f4.fl = CVT_S_W(ctx->f18.u32l);
    // 0x80265E8C: add.s       $f8, $f4, $f16
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f16.fl;
    // 0x80265E90: c.lt.s      $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f6.fl < ctx->f8.fl;
    // 0x80265E94: nop

    // 0x80265E98: bc1f        L_80265F80
    if (!c1cs) {
        // 0x80265E9C: nop
    
            goto L_80265F80;
    }
    // 0x80265E9C: nop

    // 0x80265EA0: jal         0x80265D68
    // 0x80265EA4: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    ovl_8024B800_func_80265D68(rdram, ctx);
        goto after_0;
    // 0x80265EA4: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    after_0:
    // 0x80265EA8: lw          $a1, 0x24($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X24);
    // 0x80265EAC: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80265EB0: lw          $t7, 0xD4($a1)
    ctx->r15 = MEM_W(ctx->r5, 0XD4);
    // 0x80265EB4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x80265EB8: lbu         $t8, 0x4($t7)
    ctx->r24 = MEM_BU(ctx->r15, 0X4);
    // 0x80265EBC: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
    // 0x80265EC0: andi        $t9, $t8, 0x7F
    ctx->r25 = ctx->r24 & 0X7F;
    // 0x80265EC4: bne         $t9, $at, L_80265F08
    if (ctx->r25 != ctx->r1) {
        // 0x80265EC8: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80265F08;
    }
    // 0x80265EC8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80265ECC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80265ED0: jal         0x80262B58
    // 0x80265ED4: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    ovl_8024B800_func_80262B58(rdram, ctx);
        goto after_1;
    // 0x80265ED4: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_1:
    // 0x80265ED8: beq         $v0, $zero, L_80265EEC
    if (ctx->r2 == 0) {
        // 0x80265EDC: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80265EEC;
    }
    // 0x80265EDC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80265EE0: addiu       $t0, $zero, 0x8
    ctx->r8 = ADD32(0, 0X8);
    // 0x80265EE4: b           L_80265F10
    // 0x80265EE8: sb          $t0, 0x0($v0)
    MEM_B(0X0, ctx->r2) = ctx->r8;
        goto L_80265F10;
    // 0x80265EE8: sb          $t0, 0x0($v0)
    MEM_B(0X0, ctx->r2) = ctx->r8;
L_80265EEC:
    // 0x80265EEC: addiu       $a1, $zero, 0xC
    ctx->r5 = ADD32(0, 0XC);
    // 0x80265EF0: jal         0x80262B58
    // 0x80265EF4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    ovl_8024B800_func_80262B58(rdram, ctx);
        goto after_2;
    // 0x80265EF4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_2:
    // 0x80265EF8: beq         $v0, $zero, L_80265F10
    if (ctx->r2 == 0) {
        // 0x80265EFC: addiu       $t1, $zero, 0x8
        ctx->r9 = ADD32(0, 0X8);
            goto L_80265F10;
    }
    // 0x80265EFC: addiu       $t1, $zero, 0x8
    ctx->r9 = ADD32(0, 0X8);
    // 0x80265F00: b           L_80265F10
    // 0x80265F04: sb          $t1, 0x0($v0)
    MEM_B(0X0, ctx->r2) = ctx->r9;
        goto L_80265F10;
    // 0x80265F04: sb          $t1, 0x0($v0)
    MEM_B(0X0, ctx->r2) = ctx->r9;
L_80265F08:
    // 0x80265F08: jal         0x80262FC0
    // 0x80265F0C: addiu       $a2, $zero, 0xA
    ctx->r6 = ADD32(0, 0XA);
    ovl_8024B800_func_80262FC0(rdram, ctx);
        goto after_3;
    // 0x80265F0C: addiu       $a2, $zero, 0xA
    ctx->r6 = ADD32(0, 0XA);
    after_3:
L_80265F10:
    // 0x80265F10: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80265F14: addiu       $a1, $zero, 0x40
    ctx->r5 = ADD32(0, 0X40);
    // 0x80265F18: jal         0x80262FC0
    // 0x80265F1C: addiu       $a2, $zero, 0xC
    ctx->r6 = ADD32(0, 0XC);
    ovl_8024B800_func_80262FC0(rdram, ctx);
        goto after_4;
    // 0x80265F1C: addiu       $a2, $zero, 0xC
    ctx->r6 = ADD32(0, 0XC);
    after_4:
    // 0x80265F20: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80265F24: addiu       $a1, $zero, 0x40
    ctx->r5 = ADD32(0, 0X40);
    // 0x80265F28: jal         0x80262D90
    // 0x80265F2C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    ovl_8024B800_func_80262D90(rdram, ctx);
        goto after_5;
    // 0x80265F2C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_5:
    // 0x80265F30: beq         $v0, $zero, L_80265F40
    if (ctx->r2 == 0) {
        // 0x80265F34: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80265F40;
    }
    // 0x80265F34: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80265F38: addiu       $t2, $zero, 0xD
    ctx->r10 = ADD32(0, 0XD);
    // 0x80265F3C: sb          $t2, 0x0($v0)
    MEM_B(0X0, ctx->r2) = ctx->r10;
L_80265F40:
    // 0x80265F40: addiu       $a1, $zero, 0x80
    ctx->r5 = ADD32(0, 0X80);
    // 0x80265F44: jal         0x80262D90
    // 0x80265F48: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    ovl_8024B800_func_80262D90(rdram, ctx);
        goto after_6;
    // 0x80265F48: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_6:
    // 0x80265F4C: beq         $v0, $zero, L_80265F58
    if (ctx->r2 == 0) {
        // 0x80265F50: addiu       $t3, $zero, 0xE
        ctx->r11 = ADD32(0, 0XE);
            goto L_80265F58;
    }
    // 0x80265F50: addiu       $t3, $zero, 0xE
    ctx->r11 = ADD32(0, 0XE);
    // 0x80265F54: sb          $t3, 0x0($v0)
    MEM_B(0X0, ctx->r2) = ctx->r11;
L_80265F58:
    // 0x80265F58: jal         0x80263650
    // 0x80265F5C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_8024B800_func_80263650(rdram, ctx);
        goto after_7;
    // 0x80265F5C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_7:
    // 0x80265F60: lhu         $t4, 0x4($s0)
    ctx->r12 = MEM_HU(ctx->r16, 0X4);
    // 0x80265F64: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x80265F68: bne         $t4, $at, L_80266044
    if (ctx->r12 != ctx->r1) {
        // 0x80265F6C: nop
    
            goto L_80266044;
    }
    // 0x80265F6C: nop

    // 0x80265F70: jal         0x80265BAC
    // 0x80265F74: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_8024B800_func_80265BAC(rdram, ctx);
        goto after_8;
    // 0x80265F74: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_8:
    // 0x80265F78: b           L_80266044
    // 0x80265F7C: nop

        goto L_80266044;
    // 0x80265F7C: nop

L_80265F80:
    // 0x80265F80: beq         $at, $zero, L_80266004
    if (ctx->r1 == 0) {
        // 0x80265F84: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80266004;
    }
    // 0x80265F84: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80265F88: jal         0x80265D68
    // 0x80265F8C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_8024B800_func_80265D68(rdram, ctx);
        goto after_9;
    // 0x80265F8C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_9:
    // 0x80265F90: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80265F94: addiu       $a1, $zero, 0x40
    ctx->r5 = ADD32(0, 0X40);
    // 0x80265F98: jal         0x80262D90
    // 0x80265F9C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    ovl_8024B800_func_80262D90(rdram, ctx);
        goto after_10;
    // 0x80265F9C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_10:
    // 0x80265FA0: beq         $v0, $zero, L_80265FAC
    if (ctx->r2 == 0) {
        // 0x80265FA4: addiu       $t5, $zero, 0xF
        ctx->r13 = ADD32(0, 0XF);
            goto L_80265FAC;
    }
    // 0x80265FA4: addiu       $t5, $zero, 0xF
    ctx->r13 = ADD32(0, 0XF);
    // 0x80265FA8: sb          $t5, 0x0($v0)
    MEM_B(0X0, ctx->r2) = ctx->r13;
L_80265FAC:
    // 0x80265FAC: lh          $t6, 0x8B0($s0)
    ctx->r14 = MEM_H(ctx->r16, 0X8B0);
    // 0x80265FB0: nop

    // 0x80265FB4: blez        $t6, L_80265FC4
    if (SIGNED(ctx->r14) <= 0) {
        // 0x80265FB8: nop
    
            goto L_80265FC4;
    }
    // 0x80265FB8: nop

    // 0x80265FBC: jal         0x80263608
    // 0x80265FC0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_8024B800_func_80263608(rdram, ctx);
        goto after_11;
    // 0x80265FC0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_11:
L_80265FC4:
    // 0x80265FC4: jal         0x80263650
    // 0x80265FC8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_8024B800_func_80263650(rdram, ctx);
        goto after_12;
    // 0x80265FC8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_12:
    // 0x80265FCC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80265FD0: addiu       $a1, $zero, 0x80
    ctx->r5 = ADD32(0, 0X80);
    // 0x80265FD4: jal         0x80262D90
    // 0x80265FD8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    ovl_8024B800_func_80262D90(rdram, ctx);
        goto after_13;
    // 0x80265FD8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_13:
    // 0x80265FDC: beq         $v0, $zero, L_80265FF4
    if (ctx->r2 == 0) {
        // 0x80265FE0: addiu       $t7, $zero, 0x10
        ctx->r15 = ADD32(0, 0X10);
            goto L_80265FF4;
    }
    // 0x80265FE0: addiu       $t7, $zero, 0x10
    ctx->r15 = ADD32(0, 0X10);
    // 0x80265FE4: lhu         $t8, 0x12($v0)
    ctx->r24 = MEM_HU(ctx->r2, 0X12);
    // 0x80265FE8: sb          $t7, 0x0($v0)
    MEM_B(0X0, ctx->r2) = ctx->r15;
    // 0x80265FEC: ori         $t9, $t8, 0x100
    ctx->r25 = ctx->r24 | 0X100;
    // 0x80265FF0: sh          $t9, 0x12($v0)
    MEM_H(0X12, ctx->r2) = ctx->r25;
L_80265FF4:
    // 0x80265FF4: jal         0x80265BAC
    // 0x80265FF8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_8024B800_func_80265BAC(rdram, ctx);
        goto after_14;
    // 0x80265FF8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_14:
    // 0x80265FFC: b           L_80266044
    // 0x80266000: nop

        goto L_80266044;
    // 0x80266000: nop

L_80266004:
    // 0x80266004: addiu       $a1, $zero, 0x700
    ctx->r5 = ADD32(0, 0X700);
    // 0x80266008: jal         0x80262FC0
    // 0x8026600C: addiu       $a2, $zero, 0x12
    ctx->r6 = ADD32(0, 0X12);
    ovl_8024B800_func_80262FC0(rdram, ctx);
        goto after_15;
    // 0x8026600C: addiu       $a2, $zero, 0x12
    ctx->r6 = ADD32(0, 0X12);
    after_15:
    // 0x80266010: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80266014: addiu       $a1, $zero, 0x40
    ctx->r5 = ADD32(0, 0X40);
    // 0x80266018: jal         0x80262D90
    // 0x8026601C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    ovl_8024B800_func_80262D90(rdram, ctx);
        goto after_16;
    // 0x8026601C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_16:
    // 0x80266020: beq         $v0, $zero, L_8026602C
    if (ctx->r2 == 0) {
        // 0x80266024: addiu       $t0, $zero, 0xF
        ctx->r8 = ADD32(0, 0XF);
            goto L_8026602C;
    }
    // 0x80266024: addiu       $t0, $zero, 0xF
    ctx->r8 = ADD32(0, 0XF);
    // 0x80266028: sb          $t0, 0x0($v0)
    MEM_B(0X0, ctx->r2) = ctx->r8;
L_8026602C:
    // 0x8026602C: jal         0x80263608
    // 0x80266030: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_8024B800_func_80263608(rdram, ctx);
        goto after_17;
    // 0x80266030: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_17:
    // 0x80266034: jal         0x80263650
    // 0x80266038: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_8024B800_func_80263650(rdram, ctx);
        goto after_18;
    // 0x80266038: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_18:
    // 0x8026603C: jal         0x80265BAC
    // 0x80266040: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_8024B800_func_80265BAC(rdram, ctx);
        goto after_19;
    // 0x80266040: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_19:
L_80266044:
    // 0x80266044: jal         0x80265A40
    // 0x80266048: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_8024B800_func_80265A40(rdram, ctx);
        goto after_20;
    // 0x80266048: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_20:
    // 0x8026604C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80266050: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80266054: jr          $ra
    // 0x80266058: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x80266058: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void ovl_8024B800_func_80265E1C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80265E1C: andi        $t0, $t9, 0x4
    ctx->r8 = ctx->r25 & 0X4;
    // 0x80265E20: beq         $t0, $zero, L_80265E64
    if (ctx->r8 == 0) {
        // 0x80265E24: nop
    
            goto L_80265E64;
    }
    // 0x80265E24: nop

    // 0x80265E28: lhu         $t1, 0xB78($t1)
    ctx->r9 = MEM_HU(ctx->r9, 0XB78);
    // 0x80265E2C: nop

    // 0x80265E30: bne         $t1, $zero, L_80265E64
    if (ctx->r9 != 0) {
        // 0x80265E34: nop
    
            goto L_80265E64;
    }
    // 0x80265E34: nop

    // 0x80265E38: lw          $t2, 0x8C($v0)
    ctx->r10 = MEM_W(ctx->r2, 0X8C);
    // 0x80265E3C: nop

    // 0x80265E40: sb          $zero, 0x0($t2)
    MEM_B(0X0, ctx->r10) = 0;
    // 0x80265E44: lw          $t3, 0x0($a3)
    ctx->r11 = MEM_W(ctx->r7, 0X0);
    // 0x80265E48: nop

    // 0x80265E4C: lw          $v1, 0x8C($t3)
    ctx->r3 = MEM_W(ctx->r11, 0X8C);
    // 0x80265E50: nop

    // 0x80265E54: lhu         $t4, 0x12($v1)
    ctx->r12 = MEM_HU(ctx->r3, 0X12);
    // 0x80265E58: nop

    // 0x80265E5C: ori         $t5, $t4, 0x100
    ctx->r13 = ctx->r12 | 0X100;
    // 0x80265E60: sh          $t5, 0x12($v1)
    MEM_H(0X12, ctx->r3) = ctx->r13;
L_80265E64:
    // 0x80265E64: lh          $v0, 0x8B0($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X8B0);
    // 0x80265E68: lh          $t6, 0x8C4($s0)
    ctx->r14 = MEM_H(ctx->r16, 0X8C4);
    // 0x80265E6C: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x80265E70: lwc1        $f10, 0x8D8($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X8D8);
    // 0x80265E74: mtc1        $v0, $f4
    ctx->f4.u32l = ctx->r2;
    // 0x80265E78: mtc1        $t6, $f18
    ctx->f18.u32l = ctx->r14;
    // 0x80265E7C: mul.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = MUL_S(ctx->f8.fl, ctx->f10.fl);
    // 0x80265E80: slti        $at, $v0, 0x15E
    ctx->r1 = SIGNED(ctx->r2) < 0X15E ? 1 : 0;
    // 0x80265E84: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x80265E88: cvt.s.w     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    ctx->f4.fl = CVT_S_W(ctx->f18.u32l);
    // 0x80265E8C: add.s       $f8, $f4, $f16
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f16.fl;
    // 0x80265E90: c.lt.s      $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f6.fl < ctx->f8.fl;
    // 0x80265E94: nop

    // 0x80265E98: bc1f        L_80265F80
    if (!c1cs) {
        // 0x80265E9C: nop
    
            goto L_80265F80;
    }
    // 0x80265E9C: nop

    // 0x80265EA0: jal         0x80265D68
    // 0x80265EA4: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    ovl_8024B800_func_80265D68(rdram, ctx);
        goto after_0;
    // 0x80265EA4: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    after_0:
    // 0x80265EA8: lw          $a1, 0x24($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X24);
    // 0x80265EAC: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80265EB0: lw          $t7, 0xD4($a1)
    ctx->r15 = MEM_W(ctx->r5, 0XD4);
    // 0x80265EB4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x80265EB8: lbu         $t8, 0x4($t7)
    ctx->r24 = MEM_BU(ctx->r15, 0X4);
    // 0x80265EBC: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
    // 0x80265EC0: andi        $t9, $t8, 0x7F
    ctx->r25 = ctx->r24 & 0X7F;
    // 0x80265EC4: bne         $t9, $at, L_80265F08
    if (ctx->r25 != ctx->r1) {
        // 0x80265EC8: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80265F08;
    }
    // 0x80265EC8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80265ECC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80265ED0: jal         0x80262B58
    // 0x80265ED4: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    ovl_8024B800_func_80262B58(rdram, ctx);
        goto after_1;
    // 0x80265ED4: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_1:
    // 0x80265ED8: beq         $v0, $zero, L_80265EEC
    if (ctx->r2 == 0) {
        // 0x80265EDC: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80265EEC;
    }
    // 0x80265EDC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80265EE0: addiu       $t0, $zero, 0x8
    ctx->r8 = ADD32(0, 0X8);
    // 0x80265EE4: b           L_80265F10
    // 0x80265EE8: sb          $t0, 0x0($v0)
    MEM_B(0X0, ctx->r2) = ctx->r8;
        goto L_80265F10;
    // 0x80265EE8: sb          $t0, 0x0($v0)
    MEM_B(0X0, ctx->r2) = ctx->r8;
L_80265EEC:
    // 0x80265EEC: addiu       $a1, $zero, 0xC
    ctx->r5 = ADD32(0, 0XC);
    // 0x80265EF0: jal         0x80262B58
    // 0x80265EF4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    ovl_8024B800_func_80262B58(rdram, ctx);
        goto after_2;
    // 0x80265EF4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_2:
    // 0x80265EF8: beq         $v0, $zero, L_80265F10
    if (ctx->r2 == 0) {
        // 0x80265EFC: addiu       $t1, $zero, 0x8
        ctx->r9 = ADD32(0, 0X8);
            goto L_80265F10;
    }
    // 0x80265EFC: addiu       $t1, $zero, 0x8
    ctx->r9 = ADD32(0, 0X8);
    // 0x80265F00: b           L_80265F10
    // 0x80265F04: sb          $t1, 0x0($v0)
    MEM_B(0X0, ctx->r2) = ctx->r9;
        goto L_80265F10;
    // 0x80265F04: sb          $t1, 0x0($v0)
    MEM_B(0X0, ctx->r2) = ctx->r9;
L_80265F08:
    // 0x80265F08: jal         0x80262FC0
    // 0x80265F0C: addiu       $a2, $zero, 0xA
    ctx->r6 = ADD32(0, 0XA);
    ovl_8024B800_func_80262FC0(rdram, ctx);
        goto after_3;
    // 0x80265F0C: addiu       $a2, $zero, 0xA
    ctx->r6 = ADD32(0, 0XA);
    after_3:
L_80265F10:
    // 0x80265F10: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80265F14: addiu       $a1, $zero, 0x40
    ctx->r5 = ADD32(0, 0X40);
    // 0x80265F18: jal         0x80262FC0
    // 0x80265F1C: addiu       $a2, $zero, 0xC
    ctx->r6 = ADD32(0, 0XC);
    ovl_8024B800_func_80262FC0(rdram, ctx);
        goto after_4;
    // 0x80265F1C: addiu       $a2, $zero, 0xC
    ctx->r6 = ADD32(0, 0XC);
    after_4:
    // 0x80265F20: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80265F24: addiu       $a1, $zero, 0x40
    ctx->r5 = ADD32(0, 0X40);
    // 0x80265F28: jal         0x80262D90
    // 0x80265F2C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    ovl_8024B800_func_80262D90(rdram, ctx);
        goto after_5;
    // 0x80265F2C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_5:
    // 0x80265F30: beq         $v0, $zero, L_80265F40
    if (ctx->r2 == 0) {
        // 0x80265F34: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80265F40;
    }
    // 0x80265F34: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80265F38: addiu       $t2, $zero, 0xD
    ctx->r10 = ADD32(0, 0XD);
    // 0x80265F3C: sb          $t2, 0x0($v0)
    MEM_B(0X0, ctx->r2) = ctx->r10;
L_80265F40:
    // 0x80265F40: addiu       $a1, $zero, 0x80
    ctx->r5 = ADD32(0, 0X80);
    // 0x80265F44: jal         0x80262D90
    // 0x80265F48: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    ovl_8024B800_func_80262D90(rdram, ctx);
        goto after_6;
    // 0x80265F48: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_6:
    // 0x80265F4C: beq         $v0, $zero, L_80265F58
    if (ctx->r2 == 0) {
        // 0x80265F50: addiu       $t3, $zero, 0xE
        ctx->r11 = ADD32(0, 0XE);
            goto L_80265F58;
    }
    // 0x80265F50: addiu       $t3, $zero, 0xE
    ctx->r11 = ADD32(0, 0XE);
    // 0x80265F54: sb          $t3, 0x0($v0)
    MEM_B(0X0, ctx->r2) = ctx->r11;
L_80265F58:
    // 0x80265F58: jal         0x80263650
    // 0x80265F5C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_8024B800_func_80263650(rdram, ctx);
        goto after_7;
    // 0x80265F5C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_7:
    // 0x80265F60: lhu         $t4, 0x4($s0)
    ctx->r12 = MEM_HU(ctx->r16, 0X4);
    // 0x80265F64: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x80265F68: bne         $t4, $at, L_80266044
    if (ctx->r12 != ctx->r1) {
        // 0x80265F6C: nop
    
            goto L_80266044;
    }
    // 0x80265F6C: nop

    // 0x80265F70: jal         0x80265BAC
    // 0x80265F74: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_8024B800_func_80265BAC(rdram, ctx);
        goto after_8;
    // 0x80265F74: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_8:
    // 0x80265F78: b           L_80266044
    // 0x80265F7C: nop

        goto L_80266044;
    // 0x80265F7C: nop

L_80265F80:
    // 0x80265F80: beq         $at, $zero, L_80266004
    if (ctx->r1 == 0) {
        // 0x80265F84: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80266004;
    }
    // 0x80265F84: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80265F88: jal         0x80265D68
    // 0x80265F8C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_8024B800_func_80265D68(rdram, ctx);
        goto after_9;
    // 0x80265F8C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_9:
    // 0x80265F90: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80265F94: addiu       $a1, $zero, 0x40
    ctx->r5 = ADD32(0, 0X40);
    // 0x80265F98: jal         0x80262D90
    // 0x80265F9C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    ovl_8024B800_func_80262D90(rdram, ctx);
        goto after_10;
    // 0x80265F9C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_10:
    // 0x80265FA0: beq         $v0, $zero, L_80265FAC
    if (ctx->r2 == 0) {
        // 0x80265FA4: addiu       $t5, $zero, 0xF
        ctx->r13 = ADD32(0, 0XF);
            goto L_80265FAC;
    }
    // 0x80265FA4: addiu       $t5, $zero, 0xF
    ctx->r13 = ADD32(0, 0XF);
    // 0x80265FA8: sb          $t5, 0x0($v0)
    MEM_B(0X0, ctx->r2) = ctx->r13;
L_80265FAC:
    // 0x80265FAC: lh          $t6, 0x8B0($s0)
    ctx->r14 = MEM_H(ctx->r16, 0X8B0);
    // 0x80265FB0: nop

    // 0x80265FB4: blez        $t6, L_80265FC4
    if (SIGNED(ctx->r14) <= 0) {
        // 0x80265FB8: nop
    
            goto L_80265FC4;
    }
    // 0x80265FB8: nop

    // 0x80265FBC: jal         0x80263608
    // 0x80265FC0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_8024B800_func_80263608(rdram, ctx);
        goto after_11;
    // 0x80265FC0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_11:
L_80265FC4:
    // 0x80265FC4: jal         0x80263650
    // 0x80265FC8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_8024B800_func_80263650(rdram, ctx);
        goto after_12;
    // 0x80265FC8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_12:
    // 0x80265FCC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80265FD0: addiu       $a1, $zero, 0x80
    ctx->r5 = ADD32(0, 0X80);
    // 0x80265FD4: jal         0x80262D90
    // 0x80265FD8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    ovl_8024B800_func_80262D90(rdram, ctx);
        goto after_13;
    // 0x80265FD8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_13:
    // 0x80265FDC: beq         $v0, $zero, L_80265FF4
    if (ctx->r2 == 0) {
        // 0x80265FE0: addiu       $t7, $zero, 0x10
        ctx->r15 = ADD32(0, 0X10);
            goto L_80265FF4;
    }
    // 0x80265FE0: addiu       $t7, $zero, 0x10
    ctx->r15 = ADD32(0, 0X10);
    // 0x80265FE4: lhu         $t8, 0x12($v0)
    ctx->r24 = MEM_HU(ctx->r2, 0X12);
    // 0x80265FE8: sb          $t7, 0x0($v0)
    MEM_B(0X0, ctx->r2) = ctx->r15;
    // 0x80265FEC: ori         $t9, $t8, 0x100
    ctx->r25 = ctx->r24 | 0X100;
    // 0x80265FF0: sh          $t9, 0x12($v0)
    MEM_H(0X12, ctx->r2) = ctx->r25;
L_80265FF4:
    // 0x80265FF4: jal         0x80265BAC
    // 0x80265FF8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_8024B800_func_80265BAC(rdram, ctx);
        goto after_14;
    // 0x80265FF8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_14:
    // 0x80265FFC: b           L_80266044
    // 0x80266000: nop

        goto L_80266044;
    // 0x80266000: nop

L_80266004:
    // 0x80266004: addiu       $a1, $zero, 0x700
    ctx->r5 = ADD32(0, 0X700);
    // 0x80266008: jal         0x80262FC0
    // 0x8026600C: addiu       $a2, $zero, 0x12
    ctx->r6 = ADD32(0, 0X12);
    ovl_8024B800_func_80262FC0(rdram, ctx);
        goto after_15;
    // 0x8026600C: addiu       $a2, $zero, 0x12
    ctx->r6 = ADD32(0, 0X12);
    after_15:
    // 0x80266010: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80266014: addiu       $a1, $zero, 0x40
    ctx->r5 = ADD32(0, 0X40);
    // 0x80266018: jal         0x80262D90
    // 0x8026601C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    ovl_8024B800_func_80262D90(rdram, ctx);
        goto after_16;
    // 0x8026601C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_16:
    // 0x80266020: beq         $v0, $zero, L_8026602C
    if (ctx->r2 == 0) {
        // 0x80266024: addiu       $t0, $zero, 0xF
        ctx->r8 = ADD32(0, 0XF);
            goto L_8026602C;
    }
    // 0x80266024: addiu       $t0, $zero, 0xF
    ctx->r8 = ADD32(0, 0XF);
    // 0x80266028: sb          $t0, 0x0($v0)
    MEM_B(0X0, ctx->r2) = ctx->r8;
L_8026602C:
    // 0x8026602C: jal         0x80263608
    // 0x80266030: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_8024B800_func_80263608(rdram, ctx);
        goto after_17;
    // 0x80266030: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_17:
    // 0x80266034: jal         0x80263650
    // 0x80266038: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_8024B800_func_80263650(rdram, ctx);
        goto after_18;
    // 0x80266038: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_18:
    // 0x8026603C: jal         0x80265BAC
    // 0x80266040: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_8024B800_func_80265BAC(rdram, ctx);
        goto after_19;
    // 0x80266040: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_19:
L_80266044:
    // 0x80266044: jal         0x80265A40
    // 0x80266048: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_8024B800_func_80265A40(rdram, ctx);
        goto after_20;
    // 0x80266048: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_20:
    // 0x8026604C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80266050: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80266054: jr          $ra
    // 0x80266058: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x80266058: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void ovl_8024B800_func_80265EB0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80265EB0: lw          $t7, 0xD4($a1)
    ctx->r15 = MEM_W(ctx->r5, 0XD4);
    // 0x80265EB4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x80265EB8: lbu         $t8, 0x4($t7)
    ctx->r24 = MEM_BU(ctx->r15, 0X4);
    // 0x80265EBC: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
    // 0x80265EC0: andi        $t9, $t8, 0x7F
    ctx->r25 = ctx->r24 & 0X7F;
    // 0x80265EC4: bne         $t9, $at, L_80265F08
    if (ctx->r25 != ctx->r1) {
        // 0x80265EC8: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80265F08;
    }
    // 0x80265EC8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80265ECC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80265ED0: jal         0x80262B58
    // 0x80265ED4: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    ovl_8024B800_func_80262B58(rdram, ctx);
        goto after_0;
    // 0x80265ED4: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_0:
    // 0x80265ED8: beq         $v0, $zero, L_80265EEC
    if (ctx->r2 == 0) {
        // 0x80265EDC: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80265EEC;
    }
    // 0x80265EDC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80265EE0: addiu       $t0, $zero, 0x8
    ctx->r8 = ADD32(0, 0X8);
    // 0x80265EE4: b           L_80265F10
    // 0x80265EE8: sb          $t0, 0x0($v0)
    MEM_B(0X0, ctx->r2) = ctx->r8;
        goto L_80265F10;
    // 0x80265EE8: sb          $t0, 0x0($v0)
    MEM_B(0X0, ctx->r2) = ctx->r8;
L_80265EEC:
    // 0x80265EEC: addiu       $a1, $zero, 0xC
    ctx->r5 = ADD32(0, 0XC);
    // 0x80265EF0: jal         0x80262B58
    // 0x80265EF4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    ovl_8024B800_func_80262B58(rdram, ctx);
        goto after_1;
    // 0x80265EF4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_1:
    // 0x80265EF8: beq         $v0, $zero, L_80265F10
    if (ctx->r2 == 0) {
        // 0x80265EFC: addiu       $t1, $zero, 0x8
        ctx->r9 = ADD32(0, 0X8);
            goto L_80265F10;
    }
    // 0x80265EFC: addiu       $t1, $zero, 0x8
    ctx->r9 = ADD32(0, 0X8);
    // 0x80265F00: b           L_80265F10
    // 0x80265F04: sb          $t1, 0x0($v0)
    MEM_B(0X0, ctx->r2) = ctx->r9;
        goto L_80265F10;
    // 0x80265F04: sb          $t1, 0x0($v0)
    MEM_B(0X0, ctx->r2) = ctx->r9;
L_80265F08:
    // 0x80265F08: jal         0x80262FC0
    // 0x80265F0C: addiu       $a2, $zero, 0xA
    ctx->r6 = ADD32(0, 0XA);
    ovl_8024B800_func_80262FC0(rdram, ctx);
        goto after_2;
    // 0x80265F0C: addiu       $a2, $zero, 0xA
    ctx->r6 = ADD32(0, 0XA);
    after_2:
L_80265F10:
    // 0x80265F10: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80265F14: addiu       $a1, $zero, 0x40
    ctx->r5 = ADD32(0, 0X40);
    // 0x80265F18: jal         0x80262FC0
    // 0x80265F1C: addiu       $a2, $zero, 0xC
    ctx->r6 = ADD32(0, 0XC);
    ovl_8024B800_func_80262FC0(rdram, ctx);
        goto after_3;
    // 0x80265F1C: addiu       $a2, $zero, 0xC
    ctx->r6 = ADD32(0, 0XC);
    after_3:
    // 0x80265F20: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80265F24: addiu       $a1, $zero, 0x40
    ctx->r5 = ADD32(0, 0X40);
    // 0x80265F28: jal         0x80262D90
    // 0x80265F2C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    ovl_8024B800_func_80262D90(rdram, ctx);
        goto after_4;
    // 0x80265F2C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_4:
    // 0x80265F30: beq         $v0, $zero, L_80265F40
    if (ctx->r2 == 0) {
        // 0x80265F34: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80265F40;
    }
    // 0x80265F34: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80265F38: addiu       $t2, $zero, 0xD
    ctx->r10 = ADD32(0, 0XD);
    // 0x80265F3C: sb          $t2, 0x0($v0)
    MEM_B(0X0, ctx->r2) = ctx->r10;
L_80265F40:
    // 0x80265F40: addiu       $a1, $zero, 0x80
    ctx->r5 = ADD32(0, 0X80);
    // 0x80265F44: jal         0x80262D90
    // 0x80265F48: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    ovl_8024B800_func_80262D90(rdram, ctx);
        goto after_5;
    // 0x80265F48: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_5:
    // 0x80265F4C: beq         $v0, $zero, L_80265F58
    if (ctx->r2 == 0) {
        // 0x80265F50: addiu       $t3, $zero, 0xE
        ctx->r11 = ADD32(0, 0XE);
            goto L_80265F58;
    }
    // 0x80265F50: addiu       $t3, $zero, 0xE
    ctx->r11 = ADD32(0, 0XE);
    // 0x80265F54: sb          $t3, 0x0($v0)
    MEM_B(0X0, ctx->r2) = ctx->r11;
L_80265F58:
    // 0x80265F58: jal         0x80263650
    // 0x80265F5C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_8024B800_func_80263650(rdram, ctx);
        goto after_6;
    // 0x80265F5C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_6:
    // 0x80265F60: lhu         $t4, 0x4($s0)
    ctx->r12 = MEM_HU(ctx->r16, 0X4);
    // 0x80265F64: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x80265F68: bne         $t4, $at, L_80266044
    if (ctx->r12 != ctx->r1) {
        // 0x80265F6C: nop
    
            goto L_80266044;
    }
    // 0x80265F6C: nop

    // 0x80265F70: jal         0x80265BAC
    // 0x80265F74: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_8024B800_func_80265BAC(rdram, ctx);
        goto after_7;
    // 0x80265F74: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_7:
    // 0x80265F78: b           L_80266044
    // 0x80265F7C: nop

        goto L_80266044;
    // 0x80265F7C: nop

    // 0x80265F80: beq         $at, $zero, L_80266004
    if (ctx->r1 == 0) {
        // 0x80265F84: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80266004;
    }
    // 0x80265F84: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80265F88: jal         0x80265D68
    // 0x80265F8C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_8024B800_func_80265D68(rdram, ctx);
        goto after_8;
    // 0x80265F8C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_8:
    // 0x80265F90: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80265F94: addiu       $a1, $zero, 0x40
    ctx->r5 = ADD32(0, 0X40);
    // 0x80265F98: jal         0x80262D90
    // 0x80265F9C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    ovl_8024B800_func_80262D90(rdram, ctx);
        goto after_9;
    // 0x80265F9C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_9:
    // 0x80265FA0: beq         $v0, $zero, L_80265FAC
    if (ctx->r2 == 0) {
        // 0x80265FA4: addiu       $t5, $zero, 0xF
        ctx->r13 = ADD32(0, 0XF);
            goto L_80265FAC;
    }
    // 0x80265FA4: addiu       $t5, $zero, 0xF
    ctx->r13 = ADD32(0, 0XF);
    // 0x80265FA8: sb          $t5, 0x0($v0)
    MEM_B(0X0, ctx->r2) = ctx->r13;
L_80265FAC:
    // 0x80265FAC: lh          $t6, 0x8B0($s0)
    ctx->r14 = MEM_H(ctx->r16, 0X8B0);
    // 0x80265FB0: nop

    // 0x80265FB4: blez        $t6, L_80265FC4
    if (SIGNED(ctx->r14) <= 0) {
        // 0x80265FB8: nop
    
            goto L_80265FC4;
    }
    // 0x80265FB8: nop

    // 0x80265FBC: jal         0x80263608
    // 0x80265FC0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_8024B800_func_80263608(rdram, ctx);
        goto after_10;
    // 0x80265FC0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_10:
L_80265FC4:
    // 0x80265FC4: jal         0x80263650
    // 0x80265FC8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_8024B800_func_80263650(rdram, ctx);
        goto after_11;
    // 0x80265FC8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_11:
    // 0x80265FCC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80265FD0: addiu       $a1, $zero, 0x80
    ctx->r5 = ADD32(0, 0X80);
    // 0x80265FD4: jal         0x80262D90
    // 0x80265FD8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    ovl_8024B800_func_80262D90(rdram, ctx);
        goto after_12;
    // 0x80265FD8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_12:
    // 0x80265FDC: beq         $v0, $zero, L_80265FF4
    if (ctx->r2 == 0) {
        // 0x80265FE0: addiu       $t7, $zero, 0x10
        ctx->r15 = ADD32(0, 0X10);
            goto L_80265FF4;
    }
    // 0x80265FE0: addiu       $t7, $zero, 0x10
    ctx->r15 = ADD32(0, 0X10);
    // 0x80265FE4: lhu         $t8, 0x12($v0)
    ctx->r24 = MEM_HU(ctx->r2, 0X12);
    // 0x80265FE8: sb          $t7, 0x0($v0)
    MEM_B(0X0, ctx->r2) = ctx->r15;
    // 0x80265FEC: ori         $t9, $t8, 0x100
    ctx->r25 = ctx->r24 | 0X100;
    // 0x80265FF0: sh          $t9, 0x12($v0)
    MEM_H(0X12, ctx->r2) = ctx->r25;
L_80265FF4:
    // 0x80265FF4: jal         0x80265BAC
    // 0x80265FF8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_8024B800_func_80265BAC(rdram, ctx);
        goto after_13;
    // 0x80265FF8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_13:
    // 0x80265FFC: b           L_80266044
    // 0x80266000: nop

        goto L_80266044;
    // 0x80266000: nop

L_80266004:
    // 0x80266004: addiu       $a1, $zero, 0x700
    ctx->r5 = ADD32(0, 0X700);
    // 0x80266008: jal         0x80262FC0
    // 0x8026600C: addiu       $a2, $zero, 0x12
    ctx->r6 = ADD32(0, 0X12);
    ovl_8024B800_func_80262FC0(rdram, ctx);
        goto after_14;
    // 0x8026600C: addiu       $a2, $zero, 0x12
    ctx->r6 = ADD32(0, 0X12);
    after_14:
    // 0x80266010: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80266014: addiu       $a1, $zero, 0x40
    ctx->r5 = ADD32(0, 0X40);
    // 0x80266018: jal         0x80262D90
    // 0x8026601C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    ovl_8024B800_func_80262D90(rdram, ctx);
        goto after_15;
    // 0x8026601C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_15:
    // 0x80266020: beq         $v0, $zero, L_8026602C
    if (ctx->r2 == 0) {
        // 0x80266024: addiu       $t0, $zero, 0xF
        ctx->r8 = ADD32(0, 0XF);
            goto L_8026602C;
    }
    // 0x80266024: addiu       $t0, $zero, 0xF
    ctx->r8 = ADD32(0, 0XF);
    // 0x80266028: sb          $t0, 0x0($v0)
    MEM_B(0X0, ctx->r2) = ctx->r8;
L_8026602C:
    // 0x8026602C: jal         0x80263608
    // 0x80266030: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_8024B800_func_80263608(rdram, ctx);
        goto after_16;
    // 0x80266030: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_16:
    // 0x80266034: jal         0x80263650
    // 0x80266038: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_8024B800_func_80263650(rdram, ctx);
        goto after_17;
    // 0x80266038: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_17:
    // 0x8026603C: jal         0x80265BAC
    // 0x80266040: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_8024B800_func_80265BAC(rdram, ctx);
        goto after_18;
    // 0x80266040: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_18:
L_80266044:
    // 0x80266044: jal         0x80265A40
    // 0x80266048: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_8024B800_func_80265A40(rdram, ctx);
        goto after_19;
    // 0x80266048: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_19:
    // 0x8026604C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80266050: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80266054: jr          $ra
    // 0x80266058: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x80266058: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void ovl_8024B800_func_80265FBC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80265FBC: jal         0x80263608
    // 0x80265FC0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_8024B800_func_80263608(rdram, ctx);
        goto after_0;
    // 0x80265FC0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_0:
    // 0x80265FC4: jal         0x80263650
    // 0x80265FC8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_8024B800_func_80263650(rdram, ctx);
        goto after_1;
    // 0x80265FC8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
    // 0x80265FCC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80265FD0: addiu       $a1, $zero, 0x80
    ctx->r5 = ADD32(0, 0X80);
    // 0x80265FD4: jal         0x80262D90
    // 0x80265FD8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    ovl_8024B800_func_80262D90(rdram, ctx);
        goto after_2;
    // 0x80265FD8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_2:
    // 0x80265FDC: beq         $v0, $zero, L_80265FF4
    if (ctx->r2 == 0) {
        // 0x80265FE0: addiu       $t7, $zero, 0x10
        ctx->r15 = ADD32(0, 0X10);
            goto L_80265FF4;
    }
    // 0x80265FE0: addiu       $t7, $zero, 0x10
    ctx->r15 = ADD32(0, 0X10);
    // 0x80265FE4: lhu         $t8, 0x12($v0)
    ctx->r24 = MEM_HU(ctx->r2, 0X12);
    // 0x80265FE8: sb          $t7, 0x0($v0)
    MEM_B(0X0, ctx->r2) = ctx->r15;
    // 0x80265FEC: ori         $t9, $t8, 0x100
    ctx->r25 = ctx->r24 | 0X100;
    // 0x80265FF0: sh          $t9, 0x12($v0)
    MEM_H(0X12, ctx->r2) = ctx->r25;
L_80265FF4:
    // 0x80265FF4: jal         0x80265BAC
    // 0x80265FF8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_8024B800_func_80265BAC(rdram, ctx);
        goto after_3;
    // 0x80265FF8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_3:
    // 0x80265FFC: b           L_80266044
    // 0x80266000: nop

        goto L_80266044;
    // 0x80266000: nop

    // 0x80266004: addiu       $a1, $zero, 0x700
    ctx->r5 = ADD32(0, 0X700);
    // 0x80266008: jal         0x80262FC0
    // 0x8026600C: addiu       $a2, $zero, 0x12
    ctx->r6 = ADD32(0, 0X12);
    ovl_8024B800_func_80262FC0(rdram, ctx);
        goto after_4;
    // 0x8026600C: addiu       $a2, $zero, 0x12
    ctx->r6 = ADD32(0, 0X12);
    after_4:
    // 0x80266010: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80266014: addiu       $a1, $zero, 0x40
    ctx->r5 = ADD32(0, 0X40);
    // 0x80266018: jal         0x80262D90
    // 0x8026601C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    ovl_8024B800_func_80262D90(rdram, ctx);
        goto after_5;
    // 0x8026601C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_5:
    // 0x80266020: beq         $v0, $zero, L_8026602C
    if (ctx->r2 == 0) {
        // 0x80266024: addiu       $t0, $zero, 0xF
        ctx->r8 = ADD32(0, 0XF);
            goto L_8026602C;
    }
    // 0x80266024: addiu       $t0, $zero, 0xF
    ctx->r8 = ADD32(0, 0XF);
    // 0x80266028: sb          $t0, 0x0($v0)
    MEM_B(0X0, ctx->r2) = ctx->r8;
L_8026602C:
    // 0x8026602C: jal         0x80263608
    // 0x80266030: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_8024B800_func_80263608(rdram, ctx);
        goto after_6;
    // 0x80266030: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_6:
    // 0x80266034: jal         0x80263650
    // 0x80266038: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_8024B800_func_80263650(rdram, ctx);
        goto after_7;
    // 0x80266038: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_7:
    // 0x8026603C: jal         0x80265BAC
    // 0x80266040: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_8024B800_func_80265BAC(rdram, ctx);
        goto after_8;
    // 0x80266040: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_8:
L_80266044:
    // 0x80266044: jal         0x80265A40
    // 0x80266048: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_8024B800_func_80265A40(rdram, ctx);
        goto after_9;
    // 0x80266048: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_9:
    // 0x8026604C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80266050: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80266054: jr          $ra
    // 0x80266058: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x80266058: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void ovl_8024B800_func_8026605C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8026605C: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x80266060: lui         $a2, 0x8028
    ctx->r6 = S32(0X8028 << 16);
    // 0x80266064: addiu       $a2, $a2, -0x1B3A
    ctx->r6 = ADD32(ctx->r6, -0X1B3A);
    // 0x80266068: lhu         $v0, 0x0($a2)
    ctx->r2 = MEM_HU(ctx->r6, 0X0);
    // 0x8026606C: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x80266070: sw          $s7, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r23;
    // 0x80266074: sw          $s6, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r22;
    // 0x80266078: sw          $s5, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r21;
    // 0x8026607C: sw          $s4, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r20;
    // 0x80266080: sw          $s3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r19;
    // 0x80266084: sw          $s2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r18;
    // 0x80266088: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x8026608C: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x80266090: bne         $v0, $zero, L_802661A0
    if (ctx->r2 != 0) {
        // 0x80266094: or          $a1, $a0, $zero
        ctx->r5 = ctx->r4 | 0;
            goto L_802661A0;
    }
    // 0x80266094: or          $a1, $a0, $zero
    ctx->r5 = ctx->r4 | 0;
    // 0x80266098: lui         $a0, 0x8028
    ctx->r4 = S32(0X8028 << 16);
    // 0x8026609C: lh          $a0, -0x1B60($a0)
    ctx->r4 = MEM_H(ctx->r4, -0X1B60);
    // 0x802660A0: lui         $s7, 0x8009
    ctx->r23 = S32(0X8009 << 16);
    // 0x802660A4: addiu       $s7, $s7, 0x3B20
    ctx->r23 = ADD32(ctx->r23, 0X3B20);
    // 0x802660A8: andi        $t6, $a0, 0x7F
    ctx->r14 = ctx->r4 & 0X7F;
    // 0x802660AC: lw          $t8, 0x0($s7)
    ctx->r24 = MEM_W(ctx->r23, 0X0);
    // 0x802660B0: addiu       $t7, $t6, 0x3C
    ctx->r15 = ADD32(ctx->r14, 0X3C);
    // 0x802660B4: sh          $t7, 0x0($a2)
    MEM_H(0X0, ctx->r6) = ctx->r15;
    // 0x802660B8: lh          $s4, 0xE8($t8)
    ctx->r20 = MEM_H(ctx->r24, 0XE8);
    // 0x802660BC: andi        $v0, $a0, 0x7
    ctx->r2 = ctx->r4 & 0X7;
    // 0x802660C0: slti        $at, $s4, 0x1AE
    ctx->r1 = SIGNED(ctx->r20) < 0X1AE ? 1 : 0;
    // 0x802660C4: bne         $at, $zero, L_802660D0
    if (ctx->r1 != 0) {
        // 0x802660C8: sll         $t1, $v0, 1
        ctx->r9 = S32(ctx->r2 << 1);
            goto L_802660D0;
    }
    // 0x802660C8: sll         $t1, $v0, 1
    ctx->r9 = S32(ctx->r2 << 1);
    // 0x802660CC: addiu       $s4, $zero, 0x1AD
    ctx->r20 = ADD32(0, 0X1AD);
L_802660D0:
    // 0x802660D0: slti        $at, $s4, -0x1AD
    ctx->r1 = SIGNED(ctx->r20) < -0X1AD ? 1 : 0;
    // 0x802660D4: beq         $at, $zero, L_802660E0
    if (ctx->r1 == 0) {
        // 0x802660D8: lui         $t2, 0x8028
        ctx->r10 = S32(0X8028 << 16);
            goto L_802660E0;
    }
    // 0x802660D8: lui         $t2, 0x8028
    ctx->r10 = S32(0X8028 << 16);
    // 0x802660DC: addiu       $s4, $zero, -0x1AD
    ctx->r20 = ADD32(0, -0X1AD);
L_802660E0:
    // 0x802660E0: lhu         $t9, 0x8($a1)
    ctx->r25 = MEM_HU(ctx->r5, 0X8);
    // 0x802660E4: addiu       $t2, $t2, -0x309C
    ctx->r10 = ADD32(ctx->r10, -0X309C);
    // 0x802660E8: andi        $t0, $t9, 0x1
    ctx->r8 = ctx->r25 & 0X1;
    // 0x802660EC: beq         $t0, $zero, L_80266108
    if (ctx->r8 == 0) {
        // 0x802660F0: addu        $s2, $t1, $t2
        ctx->r18 = ADD32(ctx->r9, ctx->r10);
            goto L_80266108;
    }
    // 0x802660F0: addu        $s2, $t1, $t2
    ctx->r18 = ADD32(ctx->r9, ctx->r10);
    // 0x802660F4: slti        $at, $s4, -0x158
    ctx->r1 = SIGNED(ctx->r20) < -0X158 ? 1 : 0;
    // 0x802660F8: beq         $at, $zero, L_80266118
    if (ctx->r1 == 0) {
        // 0x802660FC: nop
    
            goto L_80266118;
    }
    // 0x802660FC: nop

    // 0x80266100: b           L_80266118
    // 0x80266104: addiu       $s4, $s4, 0x28
    ctx->r20 = ADD32(ctx->r20, 0X28);
        goto L_80266118;
    // 0x80266104: addiu       $s4, $s4, 0x28
    ctx->r20 = ADD32(ctx->r20, 0X28);
L_80266108:
    // 0x80266108: slti        $at, $s4, 0x159
    ctx->r1 = SIGNED(ctx->r20) < 0X159 ? 1 : 0;
    // 0x8026610C: bne         $at, $zero, L_80266118
    if (ctx->r1 != 0) {
        // 0x80266110: nop
    
            goto L_80266118;
    }
    // 0x80266110: nop

    // 0x80266114: addiu       $s4, $s4, -0x28
    ctx->r20 = ADD32(ctx->r20, -0X28);
L_80266118:
    // 0x80266118: lui         $s0, 0x8028
    ctx->r16 = S32(0X8028 << 16);
    // 0x8026611C: lui         $s6, 0x8028
    ctx->r22 = S32(0X8028 << 16);
    // 0x80266120: lui         $s5, 0x8028
    ctx->r21 = S32(0X8028 << 16);
    // 0x80266124: addiu       $s5, $s5, -0x30AC
    ctx->r21 = ADD32(ctx->r21, -0X30AC);
    // 0x80266128: addiu       $s6, $s6, -0x1B30
    ctx->r22 = ADD32(ctx->r22, -0X1B30);
    // 0x8026612C: addiu       $s0, $s0, -0x1B38
    ctx->r16 = ADD32(ctx->r16, -0X1B38);
L_80266130:
    // 0x80266130: lbu         $s3, 0x0($s2)
    ctx->r19 = MEM_BU(ctx->r18, 0X0);
    // 0x80266134: jal         0x80059898
    // 0x80266138: addiu       $a0, $zero, 0x3C
    ctx->r4 = ADD32(0, 0X3C);
    func_80059898(rdram, ctx);
        goto after_0;
    // 0x80266138: addiu       $a0, $zero, 0x3C
    ctx->r4 = ADD32(0, 0X3C);
    after_0:
    // 0x8026613C: sll         $t3, $s3, 2
    ctx->r11 = S32(ctx->r19 << 2);
    // 0x80266140: addu        $s1, $s5, $t3
    ctx->r17 = ADD32(ctx->r21, ctx->r11);
    // 0x80266144: lh          $t4, 0x0($s1)
    ctx->r12 = MEM_H(ctx->r17, 0X0);
    // 0x80266148: addiu       $a0, $zero, 0x3C
    ctx->r4 = ADD32(0, 0X3C);
    // 0x8026614C: addu        $t5, $s4, $t4
    ctx->r13 = ADD32(ctx->r20, ctx->r12);
    // 0x80266150: addu        $t6, $v0, $t5
    ctx->r14 = ADD32(ctx->r2, ctx->r13);
    // 0x80266154: jal         0x80059898
    // 0x80266158: sh          $t6, 0x0($s0)
    MEM_H(0X0, ctx->r16) = ctx->r14;
    func_80059898(rdram, ctx);
        goto after_1;
    // 0x80266158: sh          $t6, 0x0($s0)
    MEM_H(0X0, ctx->r16) = ctx->r14;
    after_1:
    // 0x8026615C: lw          $t8, 0x0($s7)
    ctx->r24 = MEM_W(ctx->r23, 0X0);
    // 0x80266160: lh          $t7, 0x2($s1)
    ctx->r15 = MEM_H(ctx->r17, 0X2);
    // 0x80266164: lh          $a0, 0xEA($t8)
    ctx->r4 = MEM_H(ctx->r24, 0XEA);
    // 0x80266168: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
    // 0x8026616C: blez        $a0, L_8026617C
    if (SIGNED(ctx->r4) <= 0) {
        // 0x80266170: addu        $v1, $v0, $t7
        ctx->r3 = ADD32(ctx->r2, ctx->r15);
            goto L_8026617C;
    }
    // 0x80266170: addu        $v1, $v0, $t7
    ctx->r3 = ADD32(ctx->r2, ctx->r15);
    // 0x80266174: b           L_80266180
    // 0x80266178: negu        $v0, $v1
    ctx->r2 = SUB32(0, ctx->r3);
        goto L_80266180;
    // 0x80266178: negu        $v0, $v1
    ctx->r2 = SUB32(0, ctx->r3);
L_8026617C:
    // 0x8026617C: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
L_80266180:
    // 0x80266180: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
    // 0x80266184: addu        $t9, $v0, $a0
    ctx->r25 = ADD32(ctx->r2, ctx->r4);
    // 0x80266188: bne         $s0, $s6, L_80266130
    if (ctx->r16 != ctx->r22) {
        // 0x8026618C: sh          $t9, -0x2($s0)
        MEM_H(-0X2, ctx->r16) = ctx->r25;
            goto L_80266130;
    }
    // 0x8026618C: sh          $t9, -0x2($s0)
    MEM_H(-0X2, ctx->r16) = ctx->r25;
    // 0x80266190: lui         $v0, 0x8028
    ctx->r2 = S32(0X8028 << 16);
    // 0x80266194: lui         $a2, 0x8028
    ctx->r6 = S32(0X8028 << 16);
    // 0x80266198: lhu         $v0, -0x1B3A($v0)
    ctx->r2 = MEM_HU(ctx->r2, -0X1B3A);
    // 0x8026619C: addiu       $a2, $a2, -0x1B3A
    ctx->r6 = ADD32(ctx->r6, -0X1B3A);
L_802661A0:
    // 0x802661A0: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x802661A4: addiu       $t0, $v0, -0x1
    ctx->r8 = ADD32(ctx->r2, -0X1);
    // 0x802661A8: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x802661AC: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x802661B0: lw          $s2, 0x1C($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X1C);
    // 0x802661B4: lw          $s3, 0x20($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X20);
    // 0x802661B8: lw          $s4, 0x24($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X24);
    // 0x802661BC: lw          $s5, 0x28($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X28);
    // 0x802661C0: lw          $s6, 0x2C($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X2C);
    // 0x802661C4: lw          $s7, 0x30($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X30);
    // 0x802661C8: sh          $t0, 0x0($a2)
    MEM_H(0X0, ctx->r6) = ctx->r8;
    // 0x802661CC: jr          $ra
    // 0x802661D0: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    return;
    // 0x802661D0: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void ovl_8024B800_func_802661D4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802661D4: lui         $t6, 0x8012
    ctx->r14 = S32(0X8012 << 16);
    // 0x802661D8: lhu         $t6, 0xB7A($t6)
    ctx->r14 = MEM_HU(ctx->r14, 0XB7A);
    // 0x802661DC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802661E0: sltiu       $at, $t6, 0xE
    ctx->r1 = ctx->r14 < 0XE ? 1 : 0;
    // 0x802661E4: beq         $at, $zero, L_8026640C
    if (ctx->r1 == 0) {
        // 0x802661E8: sw          $ra, 0x14($sp)
        MEM_W(0X14, ctx->r29) = ctx->r31;
            goto L_8026640C;
    }
    // 0x802661E8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802661EC: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x802661F0: lui         $at, 0x8028
    ctx->r1 = S32(0X8028 << 16);
    // 0x802661F4: addu        $at, $at, $t6
    gpr jr_addend_80266200 = ctx->r14;
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x802661F8: lw          $t6, -0x2DBC($at)
    ctx->r14 = ADD32(ctx->r1, -0X2DBC);
    // 0x802661FC: nop

    // 0x80266200: jr          $t6
    // 0x80266204: nop

    switch (jr_addend_80266200 >> 2) {
        case 0: goto L_80266270; break;
        case 1: goto L_8026638C; break;
        case 2: goto L_80266404; break;
        case 3: goto L_8026640C; break;
        case 4: goto L_802662A0; break;
        case 5: goto L_802663F4; break;
        case 6: goto L_80266354; break;
        case 7: goto L_8026640C; break;
        case 8: goto L_8026621C; break;
        case 9: goto L_8026639C; break;
        case 10: goto L_8026640C; break;
        case 11: goto L_8026640C; break;
        case 12: goto L_8026640C; break;
        case 13: goto L_80266208; break;
        default: switch_error(__func__, 0x80266200, 0x8027D244);
    }
    // 0x80266204: nop

L_80266208:
    // 0x80266208: addiu       $a1, $zero, 0x7FE
    ctx->r5 = ADD32(0, 0X7FE);
    // 0x8026620C: jal         0x80262FC0
    // 0x80266210: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    ovl_8024B800_func_80262FC0(rdram, ctx);
        goto after_0;
    // 0x80266210: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_0:
    // 0x80266214: b           L_80266410
    // 0x80266218: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80266410;
    // 0x80266218: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8026621C:
    // 0x8026621C: lui         $t7, 0x8012
    ctx->r15 = S32(0X8012 << 16);
    // 0x80266220: lhu         $t7, 0xB7E($t7)
    ctx->r15 = MEM_HU(ctx->r15, 0XB7E);
    // 0x80266224: nop

    // 0x80266228: andi        $t8, $t7, 0x100
    ctx->r24 = ctx->r15 & 0X100;
    // 0x8026622C: beq         $t8, $zero, L_80266250
    if (ctx->r24 == 0) {
        // 0x80266230: nop
    
            goto L_80266250;
    }
    // 0x80266230: nop

    // 0x80266234: jal         0x80264D0C
    // 0x80266238: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    ovl_8024B800_func_80264D0C(rdram, ctx);
        goto after_1;
    // 0x80266238: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_1:
    // 0x8026623C: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x80266240: jal         0x80264B30
    // 0x80266244: nop

    ovl_8024B800_func_80264B30(rdram, ctx);
        goto after_2;
    // 0x80266244: nop

    after_2:
    // 0x80266248: b           L_80266410
    // 0x8026624C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80266410;
    // 0x8026624C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80266250:
    // 0x80266250: jal         0x8026F314
    // 0x80266254: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    ovl_8024B800_func_8026F314(rdram, ctx);
        goto after_3;
    // 0x80266254: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_3:
    // 0x80266258: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x8026625C: addiu       $a1, $zero, 0x7FE
    ctx->r5 = ADD32(0, 0X7FE);
    // 0x80266260: jal         0x80262FC0
    // 0x80266264: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    ovl_8024B800_func_80262FC0(rdram, ctx);
        goto after_4;
    // 0x80266264: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_4:
    // 0x80266268: b           L_80266410
    // 0x8026626C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80266410;
    // 0x8026626C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80266270:
    // 0x80266270: lui         $t9, 0x8009
    ctx->r25 = S32(0X8009 << 16);
    // 0x80266274: lw          $t9, 0x3B20($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X3B20);
    // 0x80266278: nop

    // 0x8026627C: lhu         $t0, 0xC2($t9)
    ctx->r8 = MEM_HU(ctx->r25, 0XC2);
    // 0x80266280: nop

    // 0x80266284: andi        $t1, $t0, 0x40
    ctx->r9 = ctx->r8 & 0X40;
    // 0x80266288: bne         $t1, $zero, L_80266410
    if (ctx->r9 != 0) {
        // 0x8026628C: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_80266410;
    }
    // 0x8026628C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80266290: jal         0x80266640
    // 0x80266294: nop

    ovl_8024B800_func_80266640(rdram, ctx);
        goto after_5;
    // 0x80266294: nop

    after_5:
    // 0x80266298: b           L_80266410
    // 0x8026629C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80266410;
    // 0x8026629C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_802662A0:
    // 0x802662A0: lhu         $t2, 0x8($a0)
    ctx->r10 = MEM_HU(ctx->r4, 0X8);
    // 0x802662A4: lui         $t4, 0x8009
    ctx->r12 = S32(0X8009 << 16);
    // 0x802662A8: andi        $t3, $t2, 0x80
    ctx->r11 = ctx->r10 & 0X80;
    // 0x802662AC: bne         $t3, $zero, L_80266328
    if (ctx->r11 != 0) {
        // 0x802662B0: nop
    
            goto L_80266328;
    }
    // 0x802662B0: nop

    // 0x802662B4: lw          $t4, 0x3B20($t4)
    ctx->r12 = MEM_W(ctx->r12, 0X3B20);
    // 0x802662B8: nop

    // 0x802662BC: lhu         $t5, 0xC2($t4)
    ctx->r13 = MEM_HU(ctx->r12, 0XC2);
    // 0x802662C0: nop

    // 0x802662C4: andi        $t6, $t5, 0x800
    ctx->r14 = ctx->r13 & 0X800;
    // 0x802662C8: bne         $t6, $zero, L_80266328
    if (ctx->r14 != 0) {
        // 0x802662CC: nop
    
            goto L_80266328;
    }
    // 0x802662CC: nop

    // 0x802662D0: lw          $t7, 0x24($a0)
    ctx->r15 = MEM_W(ctx->r4, 0X24);
    // 0x802662D4: lbu         $t9, 0x3($a0)
    ctx->r25 = MEM_BU(ctx->r4, 0X3);
    // 0x802662D8: lbu         $t8, 0x3($t7)
    ctx->r24 = MEM_BU(ctx->r15, 0X3);
    // 0x802662DC: lui         $a1, 0x8028
    ctx->r5 = S32(0X8028 << 16);
    // 0x802662E0: beq         $t8, $t9, L_80266328
    if (ctx->r24 == ctx->r25) {
        // 0x802662E4: addiu       $a1, $a1, -0x1B3A
        ctx->r5 = ADD32(ctx->r5, -0X1B3A);
            goto L_80266328;
    }
    // 0x802662E4: addiu       $a1, $a1, -0x1B3A
    ctx->r5 = ADD32(ctx->r5, -0X1B3A);
    // 0x802662E8: lbu         $t0, 0x8AC($a0)
    ctx->r8 = MEM_BU(ctx->r4, 0X8AC);
    // 0x802662EC: lui         $t2, 0x8028
    ctx->r10 = S32(0X8028 << 16);
    // 0x802662F0: sll         $t1, $t0, 2
    ctx->r9 = S32(ctx->r8 << 2);
    // 0x802662F4: lhu         $v0, 0x0($a1)
    ctx->r2 = MEM_HU(ctx->r5, 0X0);
    // 0x802662F8: addu        $t2, $t2, $t1
    ctx->r10 = ADD32(ctx->r10, ctx->r9);
    // 0x802662FC: lw          $t2, -0x308C($t2)
    ctx->r10 = MEM_W(ctx->r10, -0X308C);
    // 0x80266300: addiu       $t3, $v0, 0x1
    ctx->r11 = ADD32(ctx->r2, 0X1);
    // 0x80266304: slt         $v1, $t2, $v0
    ctx->r3 = SIGNED(ctx->r10) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x80266308: beq         $v1, $zero, L_80266328
    if (ctx->r3 == 0) {
        // 0x8026630C: sh          $t3, 0x0($a1)
        MEM_H(0X0, ctx->r5) = ctx->r11;
            goto L_80266328;
    }
    // 0x8026630C: sh          $t3, 0x0($a1)
    MEM_H(0X0, ctx->r5) = ctx->r11;
    // 0x80266310: sh          $zero, 0x0($a1)
    MEM_H(0X0, ctx->r5) = 0;
    // 0x80266314: lw          $t4, 0x24($a0)
    ctx->r12 = MEM_W(ctx->r4, 0X24);
    // 0x80266318: nop

    // 0x8026631C: lbu         $t5, 0x3($t4)
    ctx->r13 = MEM_BU(ctx->r12, 0X3);
    // 0x80266320: nop

    // 0x80266324: sb          $t5, 0x3($a0)
    MEM_B(0X3, ctx->r4) = ctx->r13;
L_80266328:
    // 0x80266328: jal         0x802650B4
    // 0x8026632C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    ovl_8024B800_func_802650B4(rdram, ctx);
        goto after_6;
    // 0x8026632C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_6:
    // 0x80266330: lui         $t6, 0x8012
    ctx->r14 = S32(0X8012 << 16);
    // 0x80266334: lhu         $t6, 0xB78($t6)
    ctx->r14 = MEM_HU(ctx->r14, 0XB78);
    // 0x80266338: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x8026633C: bne         $t6, $zero, L_80266410
    if (ctx->r14 != 0) {
        // 0x80266340: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_80266410;
    }
    // 0x80266340: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80266344: jal         0x80266A50
    // 0x80266348: nop

    ovl_8024B800_func_80266A50(rdram, ctx);
        goto after_7;
    // 0x80266348: nop

    after_7:
    // 0x8026634C: b           L_80266410
    // 0x80266350: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80266410;
    // 0x80266350: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80266354:
    // 0x80266354: jal         0x8026F314
    // 0x80266358: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    ovl_8024B800_func_8026F314(rdram, ctx);
        goto after_8;
    // 0x80266358: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_8:
    // 0x8026635C: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x80266360: jal         0x80265480
    // 0x80266364: nop

    ovl_8024B800_func_80265480(rdram, ctx);
        goto after_9;
    // 0x80266364: nop

    after_9:
    // 0x80266368: lui         $t7, 0x8012
    ctx->r15 = S32(0X8012 << 16);
    // 0x8026636C: lhu         $t7, 0xB78($t7)
    ctx->r15 = MEM_HU(ctx->r15, 0XB78);
    // 0x80266370: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x80266374: bne         $t7, $zero, L_80266410
    if (ctx->r15 != 0) {
        // 0x80266378: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_80266410;
    }
    // 0x80266378: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8026637C: jal         0x80266A50
    // 0x80266380: nop

    ovl_8024B800_func_80266A50(rdram, ctx);
        goto after_10;
    // 0x80266380: nop

    after_10:
    // 0x80266384: b           L_80266410
    // 0x80266388: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80266410;
    // 0x80266388: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8026638C:
    // 0x8026638C: jal         0x80263E80
    // 0x80266390: nop

    ovl_8024B800_func_80263E80(rdram, ctx);
        goto after_11;
    // 0x80266390: nop

    after_11:
    // 0x80266394: b           L_80266410
    // 0x80266398: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80266410;
    // 0x80266398: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8026639C:
    // 0x8026639C: lui         $v0, 0x8028
    ctx->r2 = S32(0X8028 << 16);
    // 0x802663A0: addiu       $v0, $v0, -0x1B3E
    ctx->r2 = ADD32(ctx->r2, -0X1B3E);
    // 0x802663A4: lhu         $t8, 0x0($v0)
    ctx->r24 = MEM_HU(ctx->r2, 0X0);
    // 0x802663A8: addiu       $at, $zero, 0xB4
    ctx->r1 = ADD32(0, 0XB4);
    // 0x802663AC: addiu       $t9, $t8, 0x1
    ctx->r25 = ADD32(ctx->r24, 0X1);
    // 0x802663B0: andi        $t0, $t9, 0xFFFF
    ctx->r8 = ctx->r25 & 0XFFFF;
    // 0x802663B4: bne         $t0, $at, L_802663CC
    if (ctx->r8 != ctx->r1) {
        // 0x802663B8: sh          $t9, 0x0($v0)
        MEM_H(0X0, ctx->r2) = ctx->r25;
            goto L_802663CC;
    }
    // 0x802663B8: sh          $t9, 0x0($v0)
    MEM_H(0X0, ctx->r2) = ctx->r25;
    // 0x802663BC: lhu         $t1, 0x10($a0)
    ctx->r9 = MEM_HU(ctx->r4, 0X10);
    // 0x802663C0: nop

    // 0x802663C4: ori         $t2, $t1, 0x200
    ctx->r10 = ctx->r9 | 0X200;
    // 0x802663C8: sh          $t2, 0x10($a0)
    MEM_H(0X10, ctx->r4) = ctx->r10;
L_802663CC:
    // 0x802663CC: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x802663D0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x802663D4: jal         0x80262FC0
    // 0x802663D8: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    ovl_8024B800_func_80262FC0(rdram, ctx);
        goto after_12;
    // 0x802663D8: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_12:
    // 0x802663DC: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x802663E0: addiu       $a1, $zero, 0x7FE
    ctx->r5 = ADD32(0, 0X7FE);
    // 0x802663E4: jal         0x80262FC0
    // 0x802663E8: addiu       $a2, $zero, 0x33
    ctx->r6 = ADD32(0, 0X33);
    ovl_8024B800_func_80262FC0(rdram, ctx);
        goto after_13;
    // 0x802663E8: addiu       $a2, $zero, 0x33
    ctx->r6 = ADD32(0, 0X33);
    after_13:
    // 0x802663EC: b           L_80266410
    // 0x802663F0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80266410;
    // 0x802663F0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_802663F4:
    // 0x802663F4: jal         0x8026F314
    // 0x802663F8: nop

    ovl_8024B800_func_8026F314(rdram, ctx);
        goto after_14;
    // 0x802663F8: nop

    after_14:
    // 0x802663FC: b           L_80266410
    // 0x80266400: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80266410;
    // 0x80266400: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80266404:
    // 0x80266404: jal         0x80266640
    // 0x80266408: nop

    ovl_8024B800_func_80266640(rdram, ctx);
        goto after_15;
    // 0x80266408: nop

    after_15:
L_8026640C:
    // 0x8026640C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80266410:
    // 0x80266410: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80266414: jr          $ra
    // 0x80266418: nop

    return;
    // 0x80266418: nop

;}
RECOMP_FUNC void ovl_8024B800_func_8026627C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8026627C: lhu         $t0, 0xC2($t9)
    ctx->r8 = MEM_HU(ctx->r25, 0XC2);
    // 0x80266280: nop

    // 0x80266284: andi        $t1, $t0, 0x40
    ctx->r9 = ctx->r8 & 0X40;
    // 0x80266288: bne         $t1, $zero, L_80266410
    if (ctx->r9 != 0) {
        // 0x8026628C: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_80266410;
    }
    // 0x8026628C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80266290: jal         0x80266640
    // 0x80266294: nop

    ovl_8024B800_func_80266640(rdram, ctx);
        goto after_0;
    // 0x80266294: nop

    after_0:
    // 0x80266298: b           L_80266410
    // 0x8026629C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80266410;
    // 0x8026629C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802662A0: lhu         $t2, 0x8($a0)
    ctx->r10 = MEM_HU(ctx->r4, 0X8);
    // 0x802662A4: lui         $t4, 0x8009
    ctx->r12 = S32(0X8009 << 16);
    // 0x802662A8: andi        $t3, $t2, 0x80
    ctx->r11 = ctx->r10 & 0X80;
    // 0x802662AC: bne         $t3, $zero, L_80266328
    if (ctx->r11 != 0) {
        // 0x802662B0: nop
    
            goto L_80266328;
    }
    // 0x802662B0: nop

    // 0x802662B4: lw          $t4, 0x3B20($t4)
    ctx->r12 = MEM_W(ctx->r12, 0X3B20);
    // 0x802662B8: nop

    // 0x802662BC: lhu         $t5, 0xC2($t4)
    ctx->r13 = MEM_HU(ctx->r12, 0XC2);
    // 0x802662C0: nop

    // 0x802662C4: andi        $t6, $t5, 0x800
    ctx->r14 = ctx->r13 & 0X800;
    // 0x802662C8: bne         $t6, $zero, L_80266328
    if (ctx->r14 != 0) {
        // 0x802662CC: nop
    
            goto L_80266328;
    }
    // 0x802662CC: nop

    // 0x802662D0: lw          $t7, 0x24($a0)
    ctx->r15 = MEM_W(ctx->r4, 0X24);
    // 0x802662D4: lbu         $t9, 0x3($a0)
    ctx->r25 = MEM_BU(ctx->r4, 0X3);
    // 0x802662D8: lbu         $t8, 0x3($t7)
    ctx->r24 = MEM_BU(ctx->r15, 0X3);
    // 0x802662DC: lui         $a1, 0x8028
    ctx->r5 = S32(0X8028 << 16);
    // 0x802662E0: beq         $t8, $t9, L_80266328
    if (ctx->r24 == ctx->r25) {
        // 0x802662E4: addiu       $a1, $a1, -0x1B3A
        ctx->r5 = ADD32(ctx->r5, -0X1B3A);
            goto L_80266328;
    }
    // 0x802662E4: addiu       $a1, $a1, -0x1B3A
    ctx->r5 = ADD32(ctx->r5, -0X1B3A);
    // 0x802662E8: lbu         $t0, 0x8AC($a0)
    ctx->r8 = MEM_BU(ctx->r4, 0X8AC);
    // 0x802662EC: lui         $t2, 0x8028
    ctx->r10 = S32(0X8028 << 16);
    // 0x802662F0: sll         $t1, $t0, 2
    ctx->r9 = S32(ctx->r8 << 2);
    // 0x802662F4: lhu         $v0, 0x0($a1)
    ctx->r2 = MEM_HU(ctx->r5, 0X0);
    // 0x802662F8: addu        $t2, $t2, $t1
    ctx->r10 = ADD32(ctx->r10, ctx->r9);
    // 0x802662FC: lw          $t2, -0x308C($t2)
    ctx->r10 = MEM_W(ctx->r10, -0X308C);
    // 0x80266300: addiu       $t3, $v0, 0x1
    ctx->r11 = ADD32(ctx->r2, 0X1);
    // 0x80266304: slt         $v1, $t2, $v0
    ctx->r3 = SIGNED(ctx->r10) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x80266308: beq         $v1, $zero, L_80266328
    if (ctx->r3 == 0) {
        // 0x8026630C: sh          $t3, 0x0($a1)
        MEM_H(0X0, ctx->r5) = ctx->r11;
            goto L_80266328;
    }
    // 0x8026630C: sh          $t3, 0x0($a1)
    MEM_H(0X0, ctx->r5) = ctx->r11;
    // 0x80266310: sh          $zero, 0x0($a1)
    MEM_H(0X0, ctx->r5) = 0;
    // 0x80266314: lw          $t4, 0x24($a0)
    ctx->r12 = MEM_W(ctx->r4, 0X24);
    // 0x80266318: nop

    // 0x8026631C: lbu         $t5, 0x3($t4)
    ctx->r13 = MEM_BU(ctx->r12, 0X3);
    // 0x80266320: nop

    // 0x80266324: sb          $t5, 0x3($a0)
    MEM_B(0X3, ctx->r4) = ctx->r13;
L_80266328:
    // 0x80266328: jal         0x802650B4
    // 0x8026632C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    ovl_8024B800_func_802650B4(rdram, ctx);
        goto after_1;
    // 0x8026632C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_1:
    // 0x80266330: lui         $t6, 0x8012
    ctx->r14 = S32(0X8012 << 16);
    // 0x80266334: lhu         $t6, 0xB78($t6)
    ctx->r14 = MEM_HU(ctx->r14, 0XB78);
    // 0x80266338: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x8026633C: bne         $t6, $zero, L_80266410
    if (ctx->r14 != 0) {
        // 0x80266340: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_80266410;
    }
    // 0x80266340: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80266344: jal         0x80266A50
    // 0x80266348: nop

    ovl_8024B800_func_80266A50(rdram, ctx);
        goto after_2;
    // 0x80266348: nop

    after_2:
    // 0x8026634C: b           L_80266410
    // 0x80266350: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80266410;
    // 0x80266350: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80266354: jal         0x8026F314
    // 0x80266358: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    ovl_8024B800_func_8026F314(rdram, ctx);
        goto after_3;
    // 0x80266358: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_3:
    // 0x8026635C: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x80266360: jal         0x80265480
    // 0x80266364: nop

    ovl_8024B800_func_80265480(rdram, ctx);
        goto after_4;
    // 0x80266364: nop

    after_4:
    // 0x80266368: lui         $t7, 0x8012
    ctx->r15 = S32(0X8012 << 16);
    // 0x8026636C: lhu         $t7, 0xB78($t7)
    ctx->r15 = MEM_HU(ctx->r15, 0XB78);
    // 0x80266370: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x80266374: bne         $t7, $zero, L_80266410
    if (ctx->r15 != 0) {
        // 0x80266378: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_80266410;
    }
    // 0x80266378: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8026637C: jal         0x80266A50
    // 0x80266380: nop

    ovl_8024B800_func_80266A50(rdram, ctx);
        goto after_5;
    // 0x80266380: nop

    after_5:
    // 0x80266384: b           L_80266410
    // 0x80266388: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80266410;
    // 0x80266388: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8026638C: jal         0x80263E80
    // 0x80266390: nop

    ovl_8024B800_func_80263E80(rdram, ctx);
        goto after_6;
    // 0x80266390: nop

    after_6:
    // 0x80266394: b           L_80266410
    // 0x80266398: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80266410;
    // 0x80266398: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8026639C: lui         $v0, 0x8028
    ctx->r2 = S32(0X8028 << 16);
    // 0x802663A0: addiu       $v0, $v0, -0x1B3E
    ctx->r2 = ADD32(ctx->r2, -0X1B3E);
    // 0x802663A4: lhu         $t8, 0x0($v0)
    ctx->r24 = MEM_HU(ctx->r2, 0X0);
    // 0x802663A8: addiu       $at, $zero, 0xB4
    ctx->r1 = ADD32(0, 0XB4);
    // 0x802663AC: addiu       $t9, $t8, 0x1
    ctx->r25 = ADD32(ctx->r24, 0X1);
    // 0x802663B0: andi        $t0, $t9, 0xFFFF
    ctx->r8 = ctx->r25 & 0XFFFF;
    // 0x802663B4: bne         $t0, $at, L_802663CC
    if (ctx->r8 != ctx->r1) {
        // 0x802663B8: sh          $t9, 0x0($v0)
        MEM_H(0X0, ctx->r2) = ctx->r25;
            goto L_802663CC;
    }
    // 0x802663B8: sh          $t9, 0x0($v0)
    MEM_H(0X0, ctx->r2) = ctx->r25;
    // 0x802663BC: lhu         $t1, 0x10($a0)
    ctx->r9 = MEM_HU(ctx->r4, 0X10);
    // 0x802663C0: nop

    // 0x802663C4: ori         $t2, $t1, 0x200
    ctx->r10 = ctx->r9 | 0X200;
    // 0x802663C8: sh          $t2, 0x10($a0)
    MEM_H(0X10, ctx->r4) = ctx->r10;
L_802663CC:
    // 0x802663CC: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x802663D0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x802663D4: jal         0x80262FC0
    // 0x802663D8: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    ovl_8024B800_func_80262FC0(rdram, ctx);
        goto after_7;
    // 0x802663D8: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_7:
    // 0x802663DC: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x802663E0: addiu       $a1, $zero, 0x7FE
    ctx->r5 = ADD32(0, 0X7FE);
    // 0x802663E4: jal         0x80262FC0
    // 0x802663E8: addiu       $a2, $zero, 0x33
    ctx->r6 = ADD32(0, 0X33);
    ovl_8024B800_func_80262FC0(rdram, ctx);
        goto after_8;
    // 0x802663E8: addiu       $a2, $zero, 0x33
    ctx->r6 = ADD32(0, 0X33);
    after_8:
    // 0x802663EC: b           L_80266410
    // 0x802663F0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80266410;
    // 0x802663F0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802663F4: jal         0x8026F314
    // 0x802663F8: nop

    ovl_8024B800_func_8026F314(rdram, ctx);
        goto after_9;
    // 0x802663F8: nop

    after_9:
    // 0x802663FC: b           L_80266410
    // 0x80266400: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80266410;
    // 0x80266400: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80266404: jal         0x80266640
    // 0x80266408: nop

    ovl_8024B800_func_80266640(rdram, ctx);
        goto after_10;
    // 0x80266408: nop

    after_10:
    // 0x8026640C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80266410:
    // 0x80266410: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80266414: jr          $ra
    // 0x80266418: nop

    return;
    // 0x80266418: nop

;}
RECOMP_FUNC void ovl_8024B800_func_802662CC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802662CC: nop

    // 0x802662D0: lw          $t7, 0x24($a0)
    ctx->r15 = MEM_W(ctx->r4, 0X24);
    // 0x802662D4: lbu         $t9, 0x3($a0)
    ctx->r25 = MEM_BU(ctx->r4, 0X3);
    // 0x802662D8: lbu         $t8, 0x3($t7)
    ctx->r24 = MEM_BU(ctx->r15, 0X3);
    // 0x802662DC: lui         $a1, 0x8028
    ctx->r5 = S32(0X8028 << 16);
    // 0x802662E0: beq         $t8, $t9, L_80266328
    if (ctx->r24 == ctx->r25) {
        // 0x802662E4: addiu       $a1, $a1, -0x1B3A
        ctx->r5 = ADD32(ctx->r5, -0X1B3A);
            goto L_80266328;
    }
    // 0x802662E4: addiu       $a1, $a1, -0x1B3A
    ctx->r5 = ADD32(ctx->r5, -0X1B3A);
    // 0x802662E8: lbu         $t0, 0x8AC($a0)
    ctx->r8 = MEM_BU(ctx->r4, 0X8AC);
    // 0x802662EC: lui         $t2, 0x8028
    ctx->r10 = S32(0X8028 << 16);
    // 0x802662F0: sll         $t1, $t0, 2
    ctx->r9 = S32(ctx->r8 << 2);
    // 0x802662F4: lhu         $v0, 0x0($a1)
    ctx->r2 = MEM_HU(ctx->r5, 0X0);
    // 0x802662F8: addu        $t2, $t2, $t1
    ctx->r10 = ADD32(ctx->r10, ctx->r9);
    // 0x802662FC: lw          $t2, -0x308C($t2)
    ctx->r10 = MEM_W(ctx->r10, -0X308C);
    // 0x80266300: addiu       $t3, $v0, 0x1
    ctx->r11 = ADD32(ctx->r2, 0X1);
    // 0x80266304: slt         $v1, $t2, $v0
    ctx->r3 = SIGNED(ctx->r10) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x80266308: beq         $v1, $zero, L_80266328
    if (ctx->r3 == 0) {
        // 0x8026630C: sh          $t3, 0x0($a1)
        MEM_H(0X0, ctx->r5) = ctx->r11;
            goto L_80266328;
    }
    // 0x8026630C: sh          $t3, 0x0($a1)
    MEM_H(0X0, ctx->r5) = ctx->r11;
    // 0x80266310: sh          $zero, 0x0($a1)
    MEM_H(0X0, ctx->r5) = 0;
    // 0x80266314: lw          $t4, 0x24($a0)
    ctx->r12 = MEM_W(ctx->r4, 0X24);
    // 0x80266318: nop

    // 0x8026631C: lbu         $t5, 0x3($t4)
    ctx->r13 = MEM_BU(ctx->r12, 0X3);
    // 0x80266320: nop

    // 0x80266324: sb          $t5, 0x3($a0)
    MEM_B(0X3, ctx->r4) = ctx->r13;
L_80266328:
    // 0x80266328: jal         0x802650B4
    // 0x8026632C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    ovl_8024B800_func_802650B4(rdram, ctx);
        goto after_0;
    // 0x8026632C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x80266330: lui         $t6, 0x8012
    ctx->r14 = S32(0X8012 << 16);
    // 0x80266334: lhu         $t6, 0xB78($t6)
    ctx->r14 = MEM_HU(ctx->r14, 0XB78);
    // 0x80266338: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x8026633C: bne         $t6, $zero, L_80266410
    if (ctx->r14 != 0) {
        // 0x80266340: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_80266410;
    }
    // 0x80266340: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80266344: jal         0x80266A50
    // 0x80266348: nop

    ovl_8024B800_func_80266A50(rdram, ctx);
        goto after_1;
    // 0x80266348: nop

    after_1:
    // 0x8026634C: b           L_80266410
    // 0x80266350: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80266410;
    // 0x80266350: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80266354: jal         0x8026F314
    // 0x80266358: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    ovl_8024B800_func_8026F314(rdram, ctx);
        goto after_2;
    // 0x80266358: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_2:
    // 0x8026635C: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x80266360: jal         0x80265480
    // 0x80266364: nop

    ovl_8024B800_func_80265480(rdram, ctx);
        goto after_3;
    // 0x80266364: nop

    after_3:
    // 0x80266368: lui         $t7, 0x8012
    ctx->r15 = S32(0X8012 << 16);
    // 0x8026636C: lhu         $t7, 0xB78($t7)
    ctx->r15 = MEM_HU(ctx->r15, 0XB78);
    // 0x80266370: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x80266374: bne         $t7, $zero, L_80266410
    if (ctx->r15 != 0) {
        // 0x80266378: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_80266410;
    }
    // 0x80266378: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8026637C: jal         0x80266A50
    // 0x80266380: nop

    ovl_8024B800_func_80266A50(rdram, ctx);
        goto after_4;
    // 0x80266380: nop

    after_4:
    // 0x80266384: b           L_80266410
    // 0x80266388: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80266410;
    // 0x80266388: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8026638C: jal         0x80263E80
    // 0x80266390: nop

    ovl_8024B800_func_80263E80(rdram, ctx);
        goto after_5;
    // 0x80266390: nop

    after_5:
    // 0x80266394: b           L_80266410
    // 0x80266398: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80266410;
    // 0x80266398: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8026639C: lui         $v0, 0x8028
    ctx->r2 = S32(0X8028 << 16);
    // 0x802663A0: addiu       $v0, $v0, -0x1B3E
    ctx->r2 = ADD32(ctx->r2, -0X1B3E);
    // 0x802663A4: lhu         $t8, 0x0($v0)
    ctx->r24 = MEM_HU(ctx->r2, 0X0);
    // 0x802663A8: addiu       $at, $zero, 0xB4
    ctx->r1 = ADD32(0, 0XB4);
    // 0x802663AC: addiu       $t9, $t8, 0x1
    ctx->r25 = ADD32(ctx->r24, 0X1);
    // 0x802663B0: andi        $t0, $t9, 0xFFFF
    ctx->r8 = ctx->r25 & 0XFFFF;
    // 0x802663B4: bne         $t0, $at, L_802663CC
    if (ctx->r8 != ctx->r1) {
        // 0x802663B8: sh          $t9, 0x0($v0)
        MEM_H(0X0, ctx->r2) = ctx->r25;
            goto L_802663CC;
    }
    // 0x802663B8: sh          $t9, 0x0($v0)
    MEM_H(0X0, ctx->r2) = ctx->r25;
    // 0x802663BC: lhu         $t1, 0x10($a0)
    ctx->r9 = MEM_HU(ctx->r4, 0X10);
    // 0x802663C0: nop

    // 0x802663C4: ori         $t2, $t1, 0x200
    ctx->r10 = ctx->r9 | 0X200;
    // 0x802663C8: sh          $t2, 0x10($a0)
    MEM_H(0X10, ctx->r4) = ctx->r10;
L_802663CC:
    // 0x802663CC: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x802663D0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x802663D4: jal         0x80262FC0
    // 0x802663D8: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    ovl_8024B800_func_80262FC0(rdram, ctx);
        goto after_6;
    // 0x802663D8: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_6:
    // 0x802663DC: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x802663E0: addiu       $a1, $zero, 0x7FE
    ctx->r5 = ADD32(0, 0X7FE);
    // 0x802663E4: jal         0x80262FC0
    // 0x802663E8: addiu       $a2, $zero, 0x33
    ctx->r6 = ADD32(0, 0X33);
    ovl_8024B800_func_80262FC0(rdram, ctx);
        goto after_7;
    // 0x802663E8: addiu       $a2, $zero, 0x33
    ctx->r6 = ADD32(0, 0X33);
    after_7:
    // 0x802663EC: b           L_80266410
    // 0x802663F0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80266410;
    // 0x802663F0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802663F4: jal         0x8026F314
    // 0x802663F8: nop

    ovl_8024B800_func_8026F314(rdram, ctx);
        goto after_8;
    // 0x802663F8: nop

    after_8:
    // 0x802663FC: b           L_80266410
    // 0x80266400: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80266410;
    // 0x80266400: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80266404: jal         0x80266640
    // 0x80266408: nop

    ovl_8024B800_func_80266640(rdram, ctx);
        goto after_9;
    // 0x80266408: nop

    after_9:
    // 0x8026640C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80266410:
    // 0x80266410: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80266414: jr          $ra
    // 0x80266418: nop

    return;
    // 0x80266418: nop

;}
RECOMP_FUNC void ovl_8024B800_func_8026631C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8026631C: lbu         $t5, 0x3($t4)
    ctx->r13 = MEM_BU(ctx->r12, 0X3);
    // 0x80266320: nop

    // 0x80266324: sb          $t5, 0x3($a0)
    MEM_B(0X3, ctx->r4) = ctx->r13;
    // 0x80266328: jal         0x802650B4
    // 0x8026632C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    ovl_8024B800_func_802650B4(rdram, ctx);
        goto after_0;
    // 0x8026632C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x80266330: lui         $t6, 0x8012
    ctx->r14 = S32(0X8012 << 16);
    // 0x80266334: lhu         $t6, 0xB78($t6)
    ctx->r14 = MEM_HU(ctx->r14, 0XB78);
    // 0x80266338: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x8026633C: bne         $t6, $zero, L_80266410
    if (ctx->r14 != 0) {
        // 0x80266340: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_80266410;
    }
    // 0x80266340: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80266344: jal         0x80266A50
    // 0x80266348: nop

    ovl_8024B800_func_80266A50(rdram, ctx);
        goto after_1;
    // 0x80266348: nop

    after_1:
    // 0x8026634C: b           L_80266410
    // 0x80266350: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80266410;
    // 0x80266350: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80266354: jal         0x8026F314
    // 0x80266358: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    ovl_8024B800_func_8026F314(rdram, ctx);
        goto after_2;
    // 0x80266358: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_2:
    // 0x8026635C: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x80266360: jal         0x80265480
    // 0x80266364: nop

    ovl_8024B800_func_80265480(rdram, ctx);
        goto after_3;
    // 0x80266364: nop

    after_3:
    // 0x80266368: lui         $t7, 0x8012
    ctx->r15 = S32(0X8012 << 16);
    // 0x8026636C: lhu         $t7, 0xB78($t7)
    ctx->r15 = MEM_HU(ctx->r15, 0XB78);
    // 0x80266370: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x80266374: bne         $t7, $zero, L_80266410
    if (ctx->r15 != 0) {
        // 0x80266378: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_80266410;
    }
    // 0x80266378: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8026637C: jal         0x80266A50
    // 0x80266380: nop

    ovl_8024B800_func_80266A50(rdram, ctx);
        goto after_4;
    // 0x80266380: nop

    after_4:
    // 0x80266384: b           L_80266410
    // 0x80266388: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80266410;
    // 0x80266388: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8026638C: jal         0x80263E80
    // 0x80266390: nop

    ovl_8024B800_func_80263E80(rdram, ctx);
        goto after_5;
    // 0x80266390: nop

    after_5:
    // 0x80266394: b           L_80266410
    // 0x80266398: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80266410;
    // 0x80266398: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8026639C: lui         $v0, 0x8028
    ctx->r2 = S32(0X8028 << 16);
    // 0x802663A0: addiu       $v0, $v0, -0x1B3E
    ctx->r2 = ADD32(ctx->r2, -0X1B3E);
    // 0x802663A4: lhu         $t8, 0x0($v0)
    ctx->r24 = MEM_HU(ctx->r2, 0X0);
    // 0x802663A8: addiu       $at, $zero, 0xB4
    ctx->r1 = ADD32(0, 0XB4);
    // 0x802663AC: addiu       $t9, $t8, 0x1
    ctx->r25 = ADD32(ctx->r24, 0X1);
    // 0x802663B0: andi        $t0, $t9, 0xFFFF
    ctx->r8 = ctx->r25 & 0XFFFF;
    // 0x802663B4: bne         $t0, $at, L_802663CC
    if (ctx->r8 != ctx->r1) {
        // 0x802663B8: sh          $t9, 0x0($v0)
        MEM_H(0X0, ctx->r2) = ctx->r25;
            goto L_802663CC;
    }
    // 0x802663B8: sh          $t9, 0x0($v0)
    MEM_H(0X0, ctx->r2) = ctx->r25;
    // 0x802663BC: lhu         $t1, 0x10($a0)
    ctx->r9 = MEM_HU(ctx->r4, 0X10);
    // 0x802663C0: nop

    // 0x802663C4: ori         $t2, $t1, 0x200
    ctx->r10 = ctx->r9 | 0X200;
    // 0x802663C8: sh          $t2, 0x10($a0)
    MEM_H(0X10, ctx->r4) = ctx->r10;
L_802663CC:
    // 0x802663CC: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x802663D0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x802663D4: jal         0x80262FC0
    // 0x802663D8: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    ovl_8024B800_func_80262FC0(rdram, ctx);
        goto after_6;
    // 0x802663D8: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_6:
    // 0x802663DC: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x802663E0: addiu       $a1, $zero, 0x7FE
    ctx->r5 = ADD32(0, 0X7FE);
    // 0x802663E4: jal         0x80262FC0
    // 0x802663E8: addiu       $a2, $zero, 0x33
    ctx->r6 = ADD32(0, 0X33);
    ovl_8024B800_func_80262FC0(rdram, ctx);
        goto after_7;
    // 0x802663E8: addiu       $a2, $zero, 0x33
    ctx->r6 = ADD32(0, 0X33);
    after_7:
    // 0x802663EC: b           L_80266410
    // 0x802663F0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80266410;
    // 0x802663F0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802663F4: jal         0x8026F314
    // 0x802663F8: nop

    ovl_8024B800_func_8026F314(rdram, ctx);
        goto after_8;
    // 0x802663F8: nop

    after_8:
    // 0x802663FC: b           L_80266410
    // 0x80266400: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80266410;
    // 0x80266400: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80266404: jal         0x80266640
    // 0x80266408: nop

    ovl_8024B800_func_80266640(rdram, ctx);
        goto after_9;
    // 0x80266408: nop

    after_9:
    // 0x8026640C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80266410:
    // 0x80266410: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80266414: jr          $ra
    // 0x80266418: nop

    return;
    // 0x80266418: nop

;}
RECOMP_FUNC void ovl_8024B800_func_80266358(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80266358: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8026635C: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x80266360: jal         0x80265480
    // 0x80266364: nop

    ovl_8024B800_func_80265480(rdram, ctx);
        goto after_0;
    // 0x80266364: nop

    after_0:
    // 0x80266368: lui         $t7, 0x8012
    ctx->r15 = S32(0X8012 << 16);
    // 0x8026636C: lhu         $t7, 0xB78($t7)
    ctx->r15 = MEM_HU(ctx->r15, 0XB78);
    // 0x80266370: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x80266374: bne         $t7, $zero, L_80266410
    if (ctx->r15 != 0) {
        // 0x80266378: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_80266410;
    }
    // 0x80266378: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8026637C: jal         0x80266A50
    // 0x80266380: nop

    ovl_8024B800_func_80266A50(rdram, ctx);
        goto after_1;
    // 0x80266380: nop

    after_1:
    // 0x80266384: b           L_80266410
    // 0x80266388: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80266410;
    // 0x80266388: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8026638C: jal         0x80263E80
    // 0x80266390: nop

    ovl_8024B800_func_80263E80(rdram, ctx);
        goto after_2;
    // 0x80266390: nop

    after_2:
    // 0x80266394: b           L_80266410
    // 0x80266398: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80266410;
    // 0x80266398: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8026639C: lui         $v0, 0x8028
    ctx->r2 = S32(0X8028 << 16);
    // 0x802663A0: addiu       $v0, $v0, -0x1B3E
    ctx->r2 = ADD32(ctx->r2, -0X1B3E);
    // 0x802663A4: lhu         $t8, 0x0($v0)
    ctx->r24 = MEM_HU(ctx->r2, 0X0);
    // 0x802663A8: addiu       $at, $zero, 0xB4
    ctx->r1 = ADD32(0, 0XB4);
    // 0x802663AC: addiu       $t9, $t8, 0x1
    ctx->r25 = ADD32(ctx->r24, 0X1);
    // 0x802663B0: andi        $t0, $t9, 0xFFFF
    ctx->r8 = ctx->r25 & 0XFFFF;
    // 0x802663B4: bne         $t0, $at, L_802663CC
    if (ctx->r8 != ctx->r1) {
        // 0x802663B8: sh          $t9, 0x0($v0)
        MEM_H(0X0, ctx->r2) = ctx->r25;
            goto L_802663CC;
    }
    // 0x802663B8: sh          $t9, 0x0($v0)
    MEM_H(0X0, ctx->r2) = ctx->r25;
    // 0x802663BC: lhu         $t1, 0x10($a0)
    ctx->r9 = MEM_HU(ctx->r4, 0X10);
    // 0x802663C0: nop

    // 0x802663C4: ori         $t2, $t1, 0x200
    ctx->r10 = ctx->r9 | 0X200;
    // 0x802663C8: sh          $t2, 0x10($a0)
    MEM_H(0X10, ctx->r4) = ctx->r10;
L_802663CC:
    // 0x802663CC: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x802663D0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x802663D4: jal         0x80262FC0
    // 0x802663D8: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    ovl_8024B800_func_80262FC0(rdram, ctx);
        goto after_3;
    // 0x802663D8: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_3:
    // 0x802663DC: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x802663E0: addiu       $a1, $zero, 0x7FE
    ctx->r5 = ADD32(0, 0X7FE);
    // 0x802663E4: jal         0x80262FC0
    // 0x802663E8: addiu       $a2, $zero, 0x33
    ctx->r6 = ADD32(0, 0X33);
    ovl_8024B800_func_80262FC0(rdram, ctx);
        goto after_4;
    // 0x802663E8: addiu       $a2, $zero, 0x33
    ctx->r6 = ADD32(0, 0X33);
    after_4:
    // 0x802663EC: b           L_80266410
    // 0x802663F0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80266410;
    // 0x802663F0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802663F4: jal         0x8026F314
    // 0x802663F8: nop

    ovl_8024B800_func_8026F314(rdram, ctx);
        goto after_5;
    // 0x802663F8: nop

    after_5:
    // 0x802663FC: b           L_80266410
    // 0x80266400: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80266410;
    // 0x80266400: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80266404: jal         0x80266640
    // 0x80266408: nop

    ovl_8024B800_func_80266640(rdram, ctx);
        goto after_6;
    // 0x80266408: nop

    after_6:
    // 0x8026640C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80266410:
    // 0x80266410: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80266414: jr          $ra
    // 0x80266418: nop

    return;
    // 0x80266418: nop

;}
RECOMP_FUNC void ovl_8024B800_func_802663A4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802663A4: lhu         $t8, 0x0($v0)
    ctx->r24 = MEM_HU(ctx->r2, 0X0);
    // 0x802663A8: addiu       $at, $zero, 0xB4
    ctx->r1 = ADD32(0, 0XB4);
    // 0x802663AC: addiu       $t9, $t8, 0x1
    ctx->r25 = ADD32(ctx->r24, 0X1);
    // 0x802663B0: andi        $t0, $t9, 0xFFFF
    ctx->r8 = ctx->r25 & 0XFFFF;
    // 0x802663B4: bne         $t0, $at, L_802663CC
    if (ctx->r8 != ctx->r1) {
        // 0x802663B8: sh          $t9, 0x0($v0)
        MEM_H(0X0, ctx->r2) = ctx->r25;
            goto L_802663CC;
    }
    // 0x802663B8: sh          $t9, 0x0($v0)
    MEM_H(0X0, ctx->r2) = ctx->r25;
    // 0x802663BC: lhu         $t1, 0x10($a0)
    ctx->r9 = MEM_HU(ctx->r4, 0X10);
    // 0x802663C0: nop

    // 0x802663C4: ori         $t2, $t1, 0x200
    ctx->r10 = ctx->r9 | 0X200;
    // 0x802663C8: sh          $t2, 0x10($a0)
    MEM_H(0X10, ctx->r4) = ctx->r10;
L_802663CC:
    // 0x802663CC: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x802663D0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x802663D4: jal         0x80262FC0
    // 0x802663D8: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    ovl_8024B800_func_80262FC0(rdram, ctx);
        goto after_0;
    // 0x802663D8: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x802663DC: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x802663E0: addiu       $a1, $zero, 0x7FE
    ctx->r5 = ADD32(0, 0X7FE);
    // 0x802663E4: jal         0x80262FC0
    // 0x802663E8: addiu       $a2, $zero, 0x33
    ctx->r6 = ADD32(0, 0X33);
    ovl_8024B800_func_80262FC0(rdram, ctx);
        goto after_1;
    // 0x802663E8: addiu       $a2, $zero, 0x33
    ctx->r6 = ADD32(0, 0X33);
    after_1:
    // 0x802663EC: b           L_80266410
    // 0x802663F0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80266410;
    // 0x802663F0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802663F4: jal         0x8026F314
    // 0x802663F8: nop

    ovl_8024B800_func_8026F314(rdram, ctx);
        goto after_2;
    // 0x802663F8: nop

    after_2:
    // 0x802663FC: b           L_80266410
    // 0x80266400: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80266410;
    // 0x80266400: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80266404: jal         0x80266640
    // 0x80266408: nop

    ovl_8024B800_func_80266640(rdram, ctx);
        goto after_3;
    // 0x80266408: nop

    after_3:
    // 0x8026640C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80266410:
    // 0x80266410: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80266414: jr          $ra
    // 0x80266418: nop

    return;
    // 0x80266418: nop

;}
RECOMP_FUNC void ovl_8024B800_func_8026641C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8026641C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80266420: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80266424: lhu         $t6, 0x4($a0)
    ctx->r14 = MEM_HU(ctx->r4, 0X4);
    // 0x80266428: addiu       $at, $zero, 0x7
    ctx->r1 = ADD32(0, 0X7);
    // 0x8026642C: beq         $t6, $at, L_80266454
    if (ctx->r14 == ctx->r1) {
        // 0x80266430: addiu       $a1, $zero, 0xE0
        ctx->r5 = ADD32(0, 0XE0);
            goto L_80266454;
    }
    // 0x80266430: addiu       $a1, $zero, 0xE0
    ctx->r5 = ADD32(0, 0XE0);
    // 0x80266434: jal         0x80262B58
    // 0x80266438: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    ovl_8024B800_func_80262B58(rdram, ctx);
        goto after_0;
    // 0x80266438: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_0:
    // 0x8026643C: beq         $v0, $zero, L_80266454
    if (ctx->r2 == 0) {
        // 0x80266440: addiu       $t7, $zero, 0x2F
        ctx->r15 = ADD32(0, 0X2F);
            goto L_80266454;
    }
    // 0x80266440: addiu       $t7, $zero, 0x2F
    ctx->r15 = ADD32(0, 0X2F);
    // 0x80266444: lhu         $t8, 0x12($v0)
    ctx->r24 = MEM_HU(ctx->r2, 0X12);
    // 0x80266448: sb          $t7, 0x0($v0)
    MEM_B(0X0, ctx->r2) = ctx->r15;
    // 0x8026644C: ori         $t9, $t8, 0x100
    ctx->r25 = ctx->r24 | 0X100;
    // 0x80266450: sh          $t9, 0x12($v0)
    MEM_H(0X12, ctx->r2) = ctx->r25;
L_80266454:
    // 0x80266454: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80266458: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8026645C: jr          $ra
    // 0x80266460: nop

    return;
    // 0x80266460: nop

;}
RECOMP_FUNC void ovl_8024B800_func_80266464(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80266464: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80266468: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8026646C: lhu         $t6, 0x4($a0)
    ctx->r14 = MEM_HU(ctx->r4, 0X4);
    // 0x80266470: addiu       $at, $zero, 0x7
    ctx->r1 = ADD32(0, 0X7);
    // 0x80266474: bne         $t6, $at, L_80266590
    if (ctx->r14 != ctx->r1) {
        // 0x80266478: addiu       $a1, $zero, 0x7E0
        ctx->r5 = ADD32(0, 0X7E0);
            goto L_80266590;
    }
    // 0x80266478: addiu       $a1, $zero, 0x7E0
    ctx->r5 = ADD32(0, 0X7E0);
    // 0x8026647C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x80266480: jal         0x80262B58
    // 0x80266484: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    ovl_8024B800_func_80262B58(rdram, ctx);
        goto after_0;
    // 0x80266484: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x80266488: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x8026648C: beq         $v0, $zero, L_80266590
    if (ctx->r2 == 0) {
        // 0x80266490: addiu       $t7, $zero, 0x2F
        ctx->r15 = ADD32(0, 0X2F);
            goto L_80266590;
    }
    // 0x80266490: addiu       $t7, $zero, 0x2F
    ctx->r15 = ADD32(0, 0X2F);
    // 0x80266494: lhu         $t8, 0x12($v0)
    ctx->r24 = MEM_HU(ctx->r2, 0X12);
    // 0x80266498: sb          $t7, 0x0($v0)
    MEM_B(0X0, ctx->r2) = ctx->r15;
    // 0x8026649C: ori         $t9, $t8, 0x100
    ctx->r25 = ctx->r24 | 0X100;
    // 0x802664A0: sh          $t9, 0x12($v0)
    MEM_H(0X12, ctx->r2) = ctx->r25;
    // 0x802664A4: lw          $t0, 0x920($a0)
    ctx->r8 = MEM_W(ctx->r4, 0X920);
    // 0x802664A8: addiu       $a1, $zero, 0x7E0
    ctx->r5 = ADD32(0, 0X7E0);
    // 0x802664AC: beq         $v0, $t0, L_80266508
    if (ctx->r2 == ctx->r8) {
        // 0x802664B0: or          $a2, $zero, $zero
        ctx->r6 = 0 | 0;
            goto L_80266508;
    }
    // 0x802664B0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x802664B4: cfc1        $t1, $FpcCsr
    ctx->r9 = get_cop1_cs();
    // 0x802664B8: lwc1        $f4, 0x4C($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X4C);
    // 0x802664BC: ori         $at, $t1, 0x3
    ctx->r1 = ctx->r9 | 0X3;
    // 0x802664C0: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x802664C4: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x802664C8: lwc1        $f8, 0x44($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X44);
    // 0x802664CC: cvt.w.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = CVT_W_S(ctx->f4.fl);
    // 0x802664D0: ctc1        $t1, $FpcCsr
    set_cop1_cs(ctx->r9);
    // 0x802664D4: mfc1        $t2, $f6
    ctx->r10 = (int32_t)ctx->f6.u32l;
    // 0x802664D8: nop

    // 0x802664DC: cfc1        $t3, $FpcCsr
    ctx->r11 = get_cop1_cs();
    // 0x802664E0: sh          $t2, 0x32($v0)
    MEM_H(0X32, ctx->r2) = ctx->r10;
    // 0x802664E4: ori         $at, $t3, 0x3
    ctx->r1 = ctx->r11 | 0X3;
    // 0x802664E8: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x802664EC: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x802664F0: nop

    // 0x802664F4: cvt.w.s     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.u32l = CVT_W_S(ctx->f8.fl);
    // 0x802664F8: mfc1        $t4, $f10
    ctx->r12 = (int32_t)ctx->f10.u32l;
    // 0x802664FC: ctc1        $t3, $FpcCsr
    set_cop1_cs(ctx->r11);
    // 0x80266500: sh          $t4, 0x34($v0)
    MEM_H(0X34, ctx->r2) = ctx->r12;
    // 0x80266504: nop

L_80266508:
    // 0x80266508: jal         0x80262B58
    // 0x8026650C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    ovl_8024B800_func_80262B58(rdram, ctx);
        goto after_1;
    // 0x8026650C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_1:
    // 0x80266510: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x80266514: beq         $v0, $zero, L_80266590
    if (ctx->r2 == 0) {
        // 0x80266518: addiu       $t5, $zero, 0x30
        ctx->r13 = ADD32(0, 0X30);
            goto L_80266590;
    }
    // 0x80266518: addiu       $t5, $zero, 0x30
    ctx->r13 = ADD32(0, 0X30);
    // 0x8026651C: lhu         $t6, 0x12($v0)
    ctx->r14 = MEM_HU(ctx->r2, 0X12);
    // 0x80266520: sb          $t5, 0x0($v0)
    MEM_B(0X0, ctx->r2) = ctx->r13;
    // 0x80266524: ori         $t7, $t6, 0x100
    ctx->r15 = ctx->r14 | 0X100;
    // 0x80266528: sh          $t7, 0x12($v0)
    MEM_H(0X12, ctx->r2) = ctx->r15;
    // 0x8026652C: lw          $t8, 0x924($a0)
    ctx->r24 = MEM_W(ctx->r4, 0X924);
    // 0x80266530: nop

    // 0x80266534: beq         $v0, $t8, L_80266594
    if (ctx->r2 == ctx->r24) {
        // 0x80266538: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_80266594;
    }
    // 0x80266538: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8026653C: cfc1        $t9, $FpcCsr
    ctx->r25 = get_cop1_cs();
    // 0x80266540: lwc1        $f16, 0x4C($v0)
    ctx->f16.u32l = MEM_W(ctx->r2, 0X4C);
    // 0x80266544: ori         $at, $t9, 0x3
    ctx->r1 = ctx->r25 | 0X3;
    // 0x80266548: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x8026654C: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x80266550: lwc1        $f4, 0x44($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X44);
    // 0x80266554: cvt.w.s     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.u32l = CVT_W_S(ctx->f16.fl);
    // 0x80266558: ctc1        $t9, $FpcCsr
    set_cop1_cs(ctx->r25);
    // 0x8026655C: mfc1        $t0, $f18
    ctx->r8 = (int32_t)ctx->f18.u32l;
    // 0x80266560: nop

    // 0x80266564: cfc1        $t1, $FpcCsr
    ctx->r9 = get_cop1_cs();
    // 0x80266568: sh          $t0, 0x32($v0)
    MEM_H(0X32, ctx->r2) = ctx->r8;
    // 0x8026656C: ori         $at, $t1, 0x3
    ctx->r1 = ctx->r9 | 0X3;
    // 0x80266570: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x80266574: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x80266578: nop

    // 0x8026657C: cvt.w.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = CVT_W_S(ctx->f4.fl);
    // 0x80266580: mfc1        $t2, $f6
    ctx->r10 = (int32_t)ctx->f6.u32l;
    // 0x80266584: ctc1        $t1, $FpcCsr
    set_cop1_cs(ctx->r9);
    // 0x80266588: sh          $t2, 0x34($v0)
    MEM_H(0X34, ctx->r2) = ctx->r10;
    // 0x8026658C: nop

L_80266590:
    // 0x80266590: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80266594:
    // 0x80266594: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80266598: jr          $ra
    // 0x8026659C: nop

    return;
    // 0x8026659C: nop

;}
RECOMP_FUNC void ovl_8024B800_func_80266470(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80266470: addiu       $at, $zero, 0x7
    ctx->r1 = ADD32(0, 0X7);
    // 0x80266474: bne         $t6, $at, L_80266590
    if (ctx->r14 != ctx->r1) {
        // 0x80266478: addiu       $a1, $zero, 0x7E0
        ctx->r5 = ADD32(0, 0X7E0);
            goto L_80266590;
    }
    // 0x80266478: addiu       $a1, $zero, 0x7E0
    ctx->r5 = ADD32(0, 0X7E0);
    // 0x8026647C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x80266480: jal         0x80262B58
    // 0x80266484: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    ovl_8024B800_func_80262B58(rdram, ctx);
        goto after_0;
    // 0x80266484: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x80266488: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x8026648C: beq         $v0, $zero, L_80266590
    if (ctx->r2 == 0) {
        // 0x80266490: addiu       $t7, $zero, 0x2F
        ctx->r15 = ADD32(0, 0X2F);
            goto L_80266590;
    }
    // 0x80266490: addiu       $t7, $zero, 0x2F
    ctx->r15 = ADD32(0, 0X2F);
    // 0x80266494: lhu         $t8, 0x12($v0)
    ctx->r24 = MEM_HU(ctx->r2, 0X12);
    // 0x80266498: sb          $t7, 0x0($v0)
    MEM_B(0X0, ctx->r2) = ctx->r15;
    // 0x8026649C: ori         $t9, $t8, 0x100
    ctx->r25 = ctx->r24 | 0X100;
    // 0x802664A0: sh          $t9, 0x12($v0)
    MEM_H(0X12, ctx->r2) = ctx->r25;
    // 0x802664A4: lw          $t0, 0x920($a0)
    ctx->r8 = MEM_W(ctx->r4, 0X920);
    // 0x802664A8: addiu       $a1, $zero, 0x7E0
    ctx->r5 = ADD32(0, 0X7E0);
    // 0x802664AC: beq         $v0, $t0, L_80266508
    if (ctx->r2 == ctx->r8) {
        // 0x802664B0: or          $a2, $zero, $zero
        ctx->r6 = 0 | 0;
            goto L_80266508;
    }
    // 0x802664B0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x802664B4: cfc1        $t1, $FpcCsr
    ctx->r9 = get_cop1_cs();
    // 0x802664B8: lwc1        $f4, 0x4C($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X4C);
    // 0x802664BC: ori         $at, $t1, 0x3
    ctx->r1 = ctx->r9 | 0X3;
    // 0x802664C0: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x802664C4: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x802664C8: lwc1        $f8, 0x44($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X44);
    // 0x802664CC: cvt.w.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = CVT_W_S(ctx->f4.fl);
    // 0x802664D0: ctc1        $t1, $FpcCsr
    set_cop1_cs(ctx->r9);
    // 0x802664D4: mfc1        $t2, $f6
    ctx->r10 = (int32_t)ctx->f6.u32l;
    // 0x802664D8: nop

    // 0x802664DC: cfc1        $t3, $FpcCsr
    ctx->r11 = get_cop1_cs();
    // 0x802664E0: sh          $t2, 0x32($v0)
    MEM_H(0X32, ctx->r2) = ctx->r10;
    // 0x802664E4: ori         $at, $t3, 0x3
    ctx->r1 = ctx->r11 | 0X3;
    // 0x802664E8: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x802664EC: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x802664F0: nop

    // 0x802664F4: cvt.w.s     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.u32l = CVT_W_S(ctx->f8.fl);
    // 0x802664F8: mfc1        $t4, $f10
    ctx->r12 = (int32_t)ctx->f10.u32l;
    // 0x802664FC: ctc1        $t3, $FpcCsr
    set_cop1_cs(ctx->r11);
    // 0x80266500: sh          $t4, 0x34($v0)
    MEM_H(0X34, ctx->r2) = ctx->r12;
    // 0x80266504: nop

L_80266508:
    // 0x80266508: jal         0x80262B58
    // 0x8026650C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    ovl_8024B800_func_80262B58(rdram, ctx);
        goto after_1;
    // 0x8026650C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_1:
    // 0x80266510: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x80266514: beq         $v0, $zero, L_80266590
    if (ctx->r2 == 0) {
        // 0x80266518: addiu       $t5, $zero, 0x30
        ctx->r13 = ADD32(0, 0X30);
            goto L_80266590;
    }
    // 0x80266518: addiu       $t5, $zero, 0x30
    ctx->r13 = ADD32(0, 0X30);
    // 0x8026651C: lhu         $t6, 0x12($v0)
    ctx->r14 = MEM_HU(ctx->r2, 0X12);
    // 0x80266520: sb          $t5, 0x0($v0)
    MEM_B(0X0, ctx->r2) = ctx->r13;
    // 0x80266524: ori         $t7, $t6, 0x100
    ctx->r15 = ctx->r14 | 0X100;
    // 0x80266528: sh          $t7, 0x12($v0)
    MEM_H(0X12, ctx->r2) = ctx->r15;
    // 0x8026652C: lw          $t8, 0x924($a0)
    ctx->r24 = MEM_W(ctx->r4, 0X924);
    // 0x80266530: nop

    // 0x80266534: beq         $v0, $t8, L_80266594
    if (ctx->r2 == ctx->r24) {
        // 0x80266538: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_80266594;
    }
    // 0x80266538: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8026653C: cfc1        $t9, $FpcCsr
    ctx->r25 = get_cop1_cs();
    // 0x80266540: lwc1        $f16, 0x4C($v0)
    ctx->f16.u32l = MEM_W(ctx->r2, 0X4C);
    // 0x80266544: ori         $at, $t9, 0x3
    ctx->r1 = ctx->r25 | 0X3;
    // 0x80266548: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x8026654C: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x80266550: lwc1        $f4, 0x44($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X44);
    // 0x80266554: cvt.w.s     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.u32l = CVT_W_S(ctx->f16.fl);
    // 0x80266558: ctc1        $t9, $FpcCsr
    set_cop1_cs(ctx->r25);
    // 0x8026655C: mfc1        $t0, $f18
    ctx->r8 = (int32_t)ctx->f18.u32l;
    // 0x80266560: nop

    // 0x80266564: cfc1        $t1, $FpcCsr
    ctx->r9 = get_cop1_cs();
    // 0x80266568: sh          $t0, 0x32($v0)
    MEM_H(0X32, ctx->r2) = ctx->r8;
    // 0x8026656C: ori         $at, $t1, 0x3
    ctx->r1 = ctx->r9 | 0X3;
    // 0x80266570: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x80266574: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x80266578: nop

    // 0x8026657C: cvt.w.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = CVT_W_S(ctx->f4.fl);
    // 0x80266580: mfc1        $t2, $f6
    ctx->r10 = (int32_t)ctx->f6.u32l;
    // 0x80266584: ctc1        $t1, $FpcCsr
    set_cop1_cs(ctx->r9);
    // 0x80266588: sh          $t2, 0x34($v0)
    MEM_H(0X34, ctx->r2) = ctx->r10;
    // 0x8026658C: nop

L_80266590:
    // 0x80266590: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80266594:
    // 0x80266594: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80266598: jr          $ra
    // 0x8026659C: nop

    return;
    // 0x8026659C: nop

;}
RECOMP_FUNC void ovl_8024B800_func_8026658C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8026658C: nop

    // 0x80266590: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80266594: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80266598: jr          $ra
    // 0x8026659C: nop

    return;
    // 0x8026659C: nop

;}
RECOMP_FUNC void ovl_8024B800_func_802665A0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802665A0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802665A4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802665A8: lbu         $t6, 0x8E0($a0)
    ctx->r14 = MEM_BU(ctx->r4, 0X8E0);
    // 0x802665AC: addiu       $t7, $zero, 0xF
    ctx->r15 = ADD32(0, 0XF);
    // 0x802665B0: bne         $t6, $zero, L_80266600
    if (ctx->r14 != 0) {
        // 0x802665B4: addiu       $a1, $zero, 0x2
        ctx->r5 = ADD32(0, 0X2);
            goto L_80266600;
    }
    // 0x802665B4: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x802665B8: sb          $t7, 0x8E0($a0)
    MEM_B(0X8E0, ctx->r4) = ctx->r15;
    // 0x802665BC: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x802665C0: jal         0x80262D90
    // 0x802665C4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    ovl_8024B800_func_80262D90(rdram, ctx);
        goto after_0;
    // 0x802665C4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_0:
    // 0x802665C8: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x802665CC: bne         $v0, $zero, L_802665E8
    if (ctx->r2 != 0) {
        // 0x802665D0: addiu       $a1, $zero, 0x4
        ctx->r5 = ADD32(0, 0X4);
            goto L_802665E8;
    }
    // 0x802665D0: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x802665D4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x802665D8: jal         0x80262D90
    // 0x802665DC: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    ovl_8024B800_func_80262D90(rdram, ctx);
        goto after_1;
    // 0x802665DC: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_1:
    // 0x802665E0: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x802665E4: nop

L_802665E8:
    // 0x802665E8: beq         $v0, $zero, L_802665FC
    if (ctx->r2 == 0) {
        // 0x802665EC: nop
    
            goto L_802665FC;
    }
    // 0x802665EC: nop

    // 0x802665F0: lhu         $t8, 0x1A($v0)
    ctx->r24 = MEM_HU(ctx->r2, 0X1A);
    // 0x802665F4: b           L_80266600
    // 0x802665F8: sb          $t8, 0x8DF($a0)
    MEM_B(0X8DF, ctx->r4) = ctx->r24;
        goto L_80266600;
    // 0x802665F8: sb          $t8, 0x8DF($a0)
    MEM_B(0X8DF, ctx->r4) = ctx->r24;
L_802665FC:
    // 0x802665FC: sb          $zero, 0x8DF($a0)
    MEM_B(0X8DF, ctx->r4) = 0;
L_80266600:
    // 0x80266600: lbu         $v1, 0x8DF($a0)
    ctx->r3 = MEM_BU(ctx->r4, 0X8DF);
    // 0x80266604: addiu       $t1, $zero, 0x24
    ctx->r9 = ADD32(0, 0X24);
    // 0x80266608: beq         $v1, $zero, L_80266630
    if (ctx->r3 == 0) {
        // 0x8026660C: sll         $t0, $v1, 5
        ctx->r8 = S32(ctx->r3 << 5);
            goto L_80266630;
    }
    // 0x8026660C: sll         $t0, $v1, 5
    ctx->r8 = S32(ctx->r3 << 5);
    // 0x80266610: lw          $t9, 0x18($a0)
    ctx->r25 = MEM_W(ctx->r4, 0X18);
    // 0x80266614: subu        $t0, $t0, $v1
    ctx->r8 = SUB32(ctx->r8, ctx->r3);
    // 0x80266618: sll         $t0, $t0, 3
    ctx->r8 = S32(ctx->r8 << 3);
    // 0x8026661C: addu        $v0, $t9, $t0
    ctx->r2 = ADD32(ctx->r25, ctx->r8);
    // 0x80266620: lhu         $t2, 0x12($v0)
    ctx->r10 = MEM_HU(ctx->r2, 0X12);
    // 0x80266624: sb          $t1, 0x0($v0)
    MEM_B(0X0, ctx->r2) = ctx->r9;
    // 0x80266628: ori         $t3, $t2, 0x100
    ctx->r11 = ctx->r10 | 0X100;
    // 0x8026662C: sh          $t3, 0x12($v0)
    MEM_H(0X12, ctx->r2) = ctx->r11;
L_80266630:
    // 0x80266630: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80266634: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80266638: jr          $ra
    // 0x8026663C: nop

    return;
    // 0x8026663C: nop

;}
RECOMP_FUNC void ovl_8024B800_func_8026662C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8026662C: sh          $t3, 0x12($v0)
    MEM_H(0X12, ctx->r2) = ctx->r11;
    // 0x80266630: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80266634: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80266638: jr          $ra
    // 0x8026663C: nop

    return;
    // 0x8026663C: nop

;}
RECOMP_FUNC void ovl_8024B800_func_80266640(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80266640: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x80266644: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x80266648: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x8026664C: lhu         $t6, 0x10($a0)
    ctx->r14 = MEM_HU(ctx->r4, 0X10);
    // 0x80266650: lh          $v0, 0x8CC($a0)
    ctx->r2 = MEM_H(ctx->r4, 0X8CC);
    // 0x80266654: andi        $t7, $t6, 0xFFFE
    ctx->r15 = ctx->r14 & 0XFFFE;
    // 0x80266658: sh          $t7, 0x10($a0)
    MEM_H(0X10, ctx->r4) = ctx->r15;
    // 0x8026665C: addiu       $t8, $v0, 0x96
    ctx->r24 = ADD32(ctx->r2, 0X96);
    // 0x80266660: addiu       $t9, $v0, 0x3C
    ctx->r25 = ADD32(ctx->r2, 0X3C);
    // 0x80266664: sw          $t8, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r24;
    // 0x80266668: sw          $t9, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r25;
    // 0x8026666C: lw          $v1, 0x24($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X24);
    // 0x80266670: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x80266674: lh          $t1, 0x8C4($v1)
    ctx->r9 = MEM_H(ctx->r3, 0X8C4);
    // 0x80266678: lh          $t0, 0x8B0($v1)
    ctx->r8 = MEM_H(ctx->r3, 0X8B0);
    // 0x8026667C: addiu       $t2, $t1, 0x4B
    ctx->r10 = ADD32(ctx->r9, 0X4B);
    // 0x80266680: slt         $at, $t0, $t2
    ctx->r1 = SIGNED(ctx->r8) < SIGNED(ctx->r10) ? 1 : 0;
    // 0x80266684: beq         $at, $zero, L_802667E4
    if (ctx->r1 == 0) {
        // 0x80266688: lui         $t3, 0x8012
        ctx->r11 = S32(0X8012 << 16);
            goto L_802667E4;
    }
    // 0x80266688: lui         $t3, 0x8012
    ctx->r11 = S32(0X8012 << 16);
    // 0x8026668C: lhu         $t3, 0xB78($t3)
    ctx->r11 = MEM_HU(ctx->r11, 0XB78);
    // 0x80266690: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x80266694: bne         $t3, $at, L_80266760
    if (ctx->r11 != ctx->r1) {
        // 0x80266698: lui         $t4, 0x8012
        ctx->r12 = S32(0X8012 << 16);
            goto L_80266760;
    }
    // 0x80266698: lui         $t4, 0x8012
    ctx->r12 = S32(0X8012 << 16);
    // 0x8026669C: lhu         $t4, 0xB7E($t4)
    ctx->r12 = MEM_HU(ctx->r12, 0XB7E);
    // 0x802666A0: lui         $t6, 0x8028
    ctx->r14 = S32(0X8028 << 16);
    // 0x802666A4: andi        $t5, $t4, 0x4
    ctx->r13 = ctx->r12 & 0X4;
    // 0x802666A8: bne         $t5, $zero, L_80266760
    if (ctx->r13 != 0) {
        // 0x802666AC: nop
    
            goto L_80266760;
    }
    // 0x802666AC: nop

    // 0x802666B0: lw          $t6, -0x1B30($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X1B30);
    // 0x802666B4: addiu       $a1, $zero, 0x700
    ctx->r5 = ADD32(0, 0X700);
    // 0x802666B8: beq         $t6, $zero, L_80266A44
    if (ctx->r14 == 0) {
        // 0x802666BC: lw          $ra, 0x24($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X24);
            goto L_80266A44;
    }
    // 0x802666BC: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x802666C0: jal         0x80262B58
    // 0x802666C4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    ovl_8024B800_func_80262B58(rdram, ctx);
        goto after_0;
    // 0x802666C4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_0:
    // 0x802666C8: beq         $v0, $zero, L_80266A40
    if (ctx->r2 == 0) {
        // 0x802666CC: lui         $t7, 0x8010
        ctx->r15 = S32(0X8010 << 16);
            goto L_80266A40;
    }
    // 0x802666CC: lui         $t7, 0x8010
    ctx->r15 = S32(0X8010 << 16);
    // 0x802666D0: lbu         $t7, 0x5232($t7)
    ctx->r15 = MEM_BU(ctx->r15, 0X5232);
    // 0x802666D4: addiu       $at, $zero, 0x5
    ctx->r1 = ADD32(0, 0X5);
    // 0x802666D8: bne         $t7, $at, L_8026670C
    if (ctx->r15 != ctx->r1) {
        // 0x802666DC: lui         $v1, 0x8009
        ctx->r3 = S32(0X8009 << 16);
            goto L_8026670C;
    }
    // 0x802666DC: lui         $v1, 0x8009
    ctx->r3 = S32(0X8009 << 16);
    // 0x802666E0: lhu         $t9, 0x12($v0)
    ctx->r25 = MEM_HU(ctx->r2, 0X12);
    // 0x802666E4: addiu       $t8, $zero, 0x17
    ctx->r24 = ADD32(0, 0X17);
    // 0x802666E8: ori         $t1, $t9, 0x100
    ctx->r9 = ctx->r25 | 0X100;
    // 0x802666EC: sb          $t8, 0x0($v0)
    MEM_B(0X0, ctx->r2) = ctx->r24;
    // 0x802666F0: sh          $t1, 0x12($v0)
    MEM_H(0X12, ctx->r2) = ctx->r9;
    // 0x802666F4: lui         $t0, 0x8028
    ctx->r8 = S32(0X8028 << 16);
    // 0x802666F8: lw          $t0, -0x1B30($t0)
    ctx->r8 = MEM_W(ctx->r8, -0X1B30);
    // 0x802666FC: nop

    // 0x80266700: lhu         $t2, 0x1A($t0)
    ctx->r10 = MEM_HU(ctx->r8, 0X1A);
    // 0x80266704: b           L_80266A40
    // 0x80266708: sb          $t2, 0x7($v0)
    MEM_B(0X7, ctx->r2) = ctx->r10;
        goto L_80266A40;
    // 0x80266708: sb          $t2, 0x7($v0)
    MEM_B(0X7, ctx->r2) = ctx->r10;
L_8026670C:
    // 0x8026670C: lhu         $t4, 0x12($v0)
    ctx->r12 = MEM_HU(ctx->r2, 0X12);
    // 0x80266710: addiu       $t3, $zero, 0x1E
    ctx->r11 = ADD32(0, 0X1E);
    // 0x80266714: ori         $t5, $t4, 0x100
    ctx->r13 = ctx->r12 | 0X100;
    // 0x80266718: addiu       $v1, $v1, 0x3B20
    ctx->r3 = ADD32(ctx->r3, 0X3B20);
    // 0x8026671C: sb          $t3, 0x0($v0)
    MEM_B(0X0, ctx->r2) = ctx->r11;
    // 0x80266720: sh          $t5, 0x12($v0)
    MEM_H(0X12, ctx->r2) = ctx->r13;
    // 0x80266724: lw          $t6, 0x0($v1)
    ctx->r14 = MEM_W(ctx->r3, 0X0);
    // 0x80266728: addiu       $t0, $zero, -0x123
    ctx->r8 = ADD32(0, -0X123);
    // 0x8026672C: lh          $t7, 0xE8($t6)
    ctx->r15 = MEM_H(ctx->r14, 0XE8);
    // 0x80266730: addiu       $t1, $zero, 0x123
    ctx->r9 = ADD32(0, 0X123);
    // 0x80266734: sh          $t7, 0x2E($v0)
    MEM_H(0X2E, ctx->r2) = ctx->r15;
    // 0x80266738: lw          $t8, 0x0($v1)
    ctx->r24 = MEM_W(ctx->r3, 0X0);
    // 0x8026673C: nop

    // 0x80266740: lh          $t9, 0xEA($t8)
    ctx->r25 = MEM_H(ctx->r24, 0XEA);
    // 0x80266744: nop

    // 0x80266748: blez        $t9, L_80266758
    if (SIGNED(ctx->r25) <= 0) {
        // 0x8026674C: nop
    
            goto L_80266758;
    }
    // 0x8026674C: nop

    // 0x80266750: b           L_80266A40
    // 0x80266754: sh          $t1, 0x30($v0)
    MEM_H(0X30, ctx->r2) = ctx->r9;
        goto L_80266A40;
    // 0x80266754: sh          $t1, 0x30($v0)
    MEM_H(0X30, ctx->r2) = ctx->r9;
L_80266758:
    // 0x80266758: b           L_80266A40
    // 0x8026675C: sh          $t0, 0x30($v0)
    MEM_H(0X30, ctx->r2) = ctx->r8;
        goto L_80266A40;
    // 0x8026675C: sh          $t0, 0x30($v0)
    MEM_H(0X30, ctx->r2) = ctx->r8;
L_80266760:
    // 0x80266760: lhu         $t2, 0xE($s0)
    ctx->r10 = MEM_HU(ctx->r16, 0XE);
    // 0x80266764: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80266768: bne         $t2, $at, L_802667B0
    if (ctx->r10 != ctx->r1) {
        // 0x8026676C: nop
    
            goto L_802667B0;
    }
    // 0x8026676C: nop

    // 0x80266770: jal         0x80267090
    // 0x80266774: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_8024B800_func_80267090(rdram, ctx);
        goto after_1;
    // 0x80266774: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
    // 0x80266778: beq         $v0, $zero, L_802667D4
    if (ctx->r2 == 0) {
        // 0x8026677C: lui         $v1, 0x8009
        ctx->r3 = S32(0X8009 << 16);
            goto L_802667D4;
    }
    // 0x8026677C: lui         $v1, 0x8009
    ctx->r3 = S32(0X8009 << 16);
    // 0x80266780: addiu       $v1, $v1, 0x3B20
    ctx->r3 = ADD32(ctx->r3, 0X3B20);
    // 0x80266784: lw          $t3, 0x0($v1)
    ctx->r11 = MEM_W(ctx->r3, 0X0);
    // 0x80266788: addiu       $t5, $zero, 0x15
    ctx->r13 = ADD32(0, 0X15);
    // 0x8026678C: lw          $t4, 0x88($t3)
    ctx->r12 = MEM_W(ctx->r11, 0X88);
    // 0x80266790: nop

    // 0x80266794: beq         $t4, $zero, L_802667D4
    if (ctx->r12 == 0) {
        // 0x80266798: nop
    
            goto L_802667D4;
    }
    // 0x80266798: nop

    // 0x8026679C: lhu         $t6, 0x12($v0)
    ctx->r14 = MEM_HU(ctx->r2, 0X12);
    // 0x802667A0: sb          $t5, 0x0($v0)
    MEM_B(0X0, ctx->r2) = ctx->r13;
    // 0x802667A4: ori         $t7, $t6, 0x100
    ctx->r15 = ctx->r14 | 0X100;
    // 0x802667A8: b           L_802667D4
    // 0x802667AC: sh          $t7, 0x12($v0)
    MEM_H(0X12, ctx->r2) = ctx->r15;
        goto L_802667D4;
    // 0x802667AC: sh          $t7, 0x12($v0)
    MEM_H(0X12, ctx->r2) = ctx->r15;
L_802667B0:
    // 0x802667B0: jal         0x80267090
    // 0x802667B4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_8024B800_func_80267090(rdram, ctx);
        goto after_2;
    // 0x802667B4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_2:
    // 0x802667B8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802667BC: addiu       $a1, $zero, 0x780
    ctx->r5 = ADD32(0, 0X780);
    // 0x802667C0: jal         0x80262B58
    // 0x802667C4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    ovl_8024B800_func_80262B58(rdram, ctx);
        goto after_3;
    // 0x802667C4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_3:
    // 0x802667C8: beq         $v0, $zero, L_802667D4
    if (ctx->r2 == 0) {
        // 0x802667CC: addiu       $t8, $zero, 0x14
        ctx->r24 = ADD32(0, 0X14);
            goto L_802667D4;
    }
    // 0x802667CC: addiu       $t8, $zero, 0x14
    ctx->r24 = ADD32(0, 0X14);
    // 0x802667D0: sb          $t8, 0x0($v0)
    MEM_B(0X0, ctx->r2) = ctx->r24;
L_802667D4:
    // 0x802667D4: jal         0x80266464
    // 0x802667D8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_8024B800_func_80266464(rdram, ctx);
        goto after_4;
    // 0x802667D8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_4:
    // 0x802667DC: b           L_80266A44
    // 0x802667E0: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_80266A44;
    // 0x802667E0: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_802667E4:
    // 0x802667E4: lh          $t9, 0x8B0($s0)
    ctx->r25 = MEM_H(ctx->r16, 0X8B0);
    // 0x802667E8: lui         $t1, 0x8012
    ctx->r9 = S32(0X8012 << 16);
    // 0x802667EC: slti        $at, $t9, -0x112
    ctx->r1 = SIGNED(ctx->r25) < -0X112 ? 1 : 0;
    // 0x802667F0: bne         $at, $zero, L_80266938
    if (ctx->r1 != 0) {
        // 0x802667F4: lui         $t7, 0x8012
        ctx->r15 = S32(0X8012 << 16);
            goto L_80266938;
    }
    // 0x802667F4: lui         $t7, 0x8012
    ctx->r15 = S32(0X8012 << 16);
    // 0x802667F8: lhu         $t1, 0xB78($t1)
    ctx->r9 = MEM_HU(ctx->r9, 0XB78);
    // 0x802667FC: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x80266800: beq         $t1, $at, L_80266858
    if (ctx->r9 == ctx->r1) {
        // 0x80266804: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80266858;
    }
    // 0x80266804: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80266808: jal         0x80267090
    // 0x8026680C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_8024B800_func_80267090(rdram, ctx);
        goto after_5;
    // 0x8026680C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_5:
    // 0x80266810: beq         $v0, $zero, L_8026684C
    if (ctx->r2 == 0) {
        // 0x80266814: or          $a1, $v0, $zero
        ctx->r5 = ctx->r2 | 0;
            goto L_8026684C;
    }
    // 0x80266814: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    // 0x80266818: lui         $v1, 0x8009
    ctx->r3 = S32(0X8009 << 16);
    // 0x8026681C: addiu       $v1, $v1, 0x3B20
    ctx->r3 = ADD32(ctx->r3, 0X3B20);
    // 0x80266820: lw          $t0, 0x0($v1)
    ctx->r8 = MEM_W(ctx->r3, 0X0);
    // 0x80266824: addiu       $t3, $zero, 0x15
    ctx->r11 = ADD32(0, 0X15);
    // 0x80266828: lw          $t2, 0x88($t0)
    ctx->r10 = MEM_W(ctx->r8, 0X88);
    // 0x8026682C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80266830: beq         $t2, $zero, L_8026684C
    if (ctx->r10 == 0) {
        // 0x80266834: nop
    
            goto L_8026684C;
    }
    // 0x80266834: nop

    // 0x80266838: lhu         $t4, 0x12($v0)
    ctx->r12 = MEM_HU(ctx->r2, 0X12);
    // 0x8026683C: sb          $t3, 0x0($v0)
    MEM_B(0X0, ctx->r2) = ctx->r11;
    // 0x80266840: ori         $t5, $t4, 0x100
    ctx->r13 = ctx->r12 | 0X100;
    // 0x80266844: jal         0x802672B4
    // 0x80266848: sh          $t5, 0x12($v0)
    MEM_H(0X12, ctx->r2) = ctx->r13;
    ovl_8024B800_func_802672B4(rdram, ctx);
        goto after_6;
    // 0x80266848: sh          $t5, 0x12($v0)
    MEM_H(0X12, ctx->r2) = ctx->r13;
    after_6:
L_8026684C:
    // 0x8026684C: jal         0x80266464
    // 0x80266850: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_8024B800_func_80266464(rdram, ctx);
        goto after_7;
    // 0x80266850: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_7:
    // 0x80266854: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
L_80266858:
    // 0x80266858: addiu       $a1, $zero, 0x40
    ctx->r5 = ADD32(0, 0X40);
    // 0x8026685C: jal         0x80262D90
    // 0x80266860: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    ovl_8024B800_func_80262D90(rdram, ctx);
        goto after_8;
    // 0x80266860: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_8:
    // 0x80266864: beq         $v0, $zero, L_80266874
    if (ctx->r2 == 0) {
        // 0x80266868: lui         $t7, 0x8012
        ctx->r15 = S32(0X8012 << 16);
            goto L_80266874;
    }
    // 0x80266868: lui         $t7, 0x8012
    ctx->r15 = S32(0X8012 << 16);
    // 0x8026686C: addiu       $t6, $zero, 0x16
    ctx->r14 = ADD32(0, 0X16);
    // 0x80266870: sb          $t6, 0x0($v0)
    MEM_B(0X0, ctx->r2) = ctx->r14;
L_80266874:
    // 0x80266874: lhu         $t7, 0xB78($t7)
    ctx->r15 = MEM_HU(ctx->r15, 0XB78);
    // 0x80266878: nop

    // 0x8026687C: bne         $t7, $zero, L_80266890
    if (ctx->r15 != 0) {
        // 0x80266880: lw          $t8, 0x30($sp)
        ctx->r24 = MEM_W(ctx->r29, 0X30);
            goto L_80266890;
    }
    // 0x80266880: lw          $t8, 0x30($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X30);
    // 0x80266884: jal         0x8026641C
    // 0x80266888: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_8024B800_func_8026641C(rdram, ctx);
        goto after_9;
    // 0x80266888: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_9:
    // 0x8026688C: lw          $t8, 0x30($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X30);
L_80266890:
    // 0x80266890: addiu       $t9, $zero, -0x225
    ctx->r25 = ADD32(0, -0X225);
    // 0x80266894: sw          $t9, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r25;
    // 0x80266898: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8026689C: addiu       $a1, $zero, 0x20
    ctx->r5 = ADD32(0, 0X20);
    // 0x802668A0: addiu       $a2, $zero, 0x130
    ctx->r6 = ADD32(0, 0X130);
    // 0x802668A4: addiu       $a3, $zero, 0x2
    ctx->r7 = ADD32(0, 0X2);
    // 0x802668A8: jal         0x8026732C
    // 0x802668AC: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    ovl_8024B800_func_8026732C(rdram, ctx);
        goto after_10;
    // 0x802668AC: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    after_10:
    // 0x802668B0: lw          $t1, 0x28($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X28);
    // 0x802668B4: addiu       $t0, $zero, -0x225
    ctx->r8 = ADD32(0, -0X225);
    // 0x802668B8: sw          $t0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r8;
    // 0x802668BC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802668C0: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    // 0x802668C4: addiu       $a2, $zero, 0x130
    ctx->r6 = ADD32(0, 0X130);
    // 0x802668C8: addiu       $a3, $zero, 0x2
    ctx->r7 = ADD32(0, 0X2);
    // 0x802668CC: jal         0x8026732C
    // 0x802668D0: sw          $t1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r9;
    ovl_8024B800_func_8026732C(rdram, ctx);
        goto after_11;
    // 0x802668D0: sw          $t1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r9;
    after_11:
    // 0x802668D4: lw          $t2, 0x28($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X28);
    // 0x802668D8: addiu       $t3, $zero, -0x225
    ctx->r11 = ADD32(0, -0X225);
    // 0x802668DC: sw          $t3, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r11;
    // 0x802668E0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802668E4: addiu       $a1, $zero, 0x1E
    ctx->r5 = ADD32(0, 0X1E);
    // 0x802668E8: addiu       $a2, $zero, 0x700
    ctx->r6 = ADD32(0, 0X700);
    // 0x802668EC: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x802668F0: jal         0x8026732C
    // 0x802668F4: sw          $t2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r10;
    ovl_8024B800_func_8026732C(rdram, ctx);
        goto after_12;
    // 0x802668F4: sw          $t2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r10;
    after_12:
    // 0x802668F8: lhu         $t4, 0x4($s0)
    ctx->r12 = MEM_HU(ctx->r16, 0X4);
    // 0x802668FC: addiu       $at, $zero, 0x5
    ctx->r1 = ADD32(0, 0X5);
    // 0x80266900: bne         $t4, $at, L_80266910
    if (ctx->r12 != ctx->r1) {
        // 0x80266904: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80266910;
    }
    // 0x80266904: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80266908: b           L_80266914
    // 0x8026690C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
        goto L_80266914;
    // 0x8026690C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
L_80266910:
    // 0x80266910: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
L_80266914:
    // 0x80266914: lw          $t5, 0x30($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X30);
    // 0x80266918: addiu       $t6, $zero, -0x225
    ctx->r14 = ADD32(0, -0X225);
    // 0x8026691C: sw          $t6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r14;
    // 0x80266920: addiu       $a1, $zero, 0xC0
    ctx->r5 = ADD32(0, 0XC0);
    // 0x80266924: addiu       $a2, $zero, 0xFE
    ctx->r6 = ADD32(0, 0XFE);
    // 0x80266928: jal         0x8026732C
    // 0x8026692C: sw          $t5, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r13;
    ovl_8024B800_func_8026732C(rdram, ctx);
        goto after_13;
    // 0x8026692C: sw          $t5, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r13;
    after_13:
    // 0x80266930: b           L_80266A44
    // 0x80266934: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_80266A44;
    // 0x80266934: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_80266938:
    // 0x80266938: lhu         $t7, 0xB78($t7)
    ctx->r15 = MEM_HU(ctx->r15, 0XB78);
    // 0x8026693C: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x80266940: beq         $t7, $at, L_80266994
    if (ctx->r15 == ctx->r1) {
        // 0x80266944: nop
    
            goto L_80266994;
    }
    // 0x80266944: nop

    // 0x80266948: jal         0x80267090
    // 0x8026694C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_8024B800_func_80267090(rdram, ctx);
        goto after_14;
    // 0x8026694C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_14:
    // 0x80266950: beq         $v0, $zero, L_8026698C
    if (ctx->r2 == 0) {
        // 0x80266954: or          $a1, $v0, $zero
        ctx->r5 = ctx->r2 | 0;
            goto L_8026698C;
    }
    // 0x80266954: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    // 0x80266958: lui         $v1, 0x8009
    ctx->r3 = S32(0X8009 << 16);
    // 0x8026695C: addiu       $v1, $v1, 0x3B20
    ctx->r3 = ADD32(ctx->r3, 0X3B20);
    // 0x80266960: lw          $t8, 0x0($v1)
    ctx->r24 = MEM_W(ctx->r3, 0X0);
    // 0x80266964: addiu       $t1, $zero, 0x15
    ctx->r9 = ADD32(0, 0X15);
    // 0x80266968: lw          $t9, 0x88($t8)
    ctx->r25 = MEM_W(ctx->r24, 0X88);
    // 0x8026696C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80266970: beq         $t9, $zero, L_8026698C
    if (ctx->r25 == 0) {
        // 0x80266974: nop
    
            goto L_8026698C;
    }
    // 0x80266974: nop

    // 0x80266978: lhu         $t0, 0x12($v0)
    ctx->r8 = MEM_HU(ctx->r2, 0X12);
    // 0x8026697C: sb          $t1, 0x0($v0)
    MEM_B(0X0, ctx->r2) = ctx->r9;
    // 0x80266980: ori         $t2, $t0, 0x100
    ctx->r10 = ctx->r8 | 0X100;
    // 0x80266984: jal         0x802672B4
    // 0x80266988: sh          $t2, 0x12($v0)
    MEM_H(0X12, ctx->r2) = ctx->r10;
    ovl_8024B800_func_802672B4(rdram, ctx);
        goto after_15;
    // 0x80266988: sh          $t2, 0x12($v0)
    MEM_H(0X12, ctx->r2) = ctx->r10;
    after_15:
L_8026698C:
    // 0x8026698C: jal         0x80266464
    // 0x80266990: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_8024B800_func_80266464(rdram, ctx);
        goto after_16;
    // 0x80266990: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_16:
L_80266994:
    // 0x80266994: jal         0x802665A0
    // 0x80266998: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_8024B800_func_802665A0(rdram, ctx);
        goto after_17;
    // 0x80266998: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_17:
    // 0x8026699C: lw          $t3, 0x30($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X30);
    // 0x802669A0: addiu       $t4, $zero, -0x225
    ctx->r12 = ADD32(0, -0X225);
    // 0x802669A4: sw          $t4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r12;
    // 0x802669A8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802669AC: addiu       $a1, $zero, 0x20
    ctx->r5 = ADD32(0, 0X20);
    // 0x802669B0: addiu       $a2, $zero, 0x130
    ctx->r6 = ADD32(0, 0X130);
    // 0x802669B4: addiu       $a3, $zero, 0x2
    ctx->r7 = ADD32(0, 0X2);
    // 0x802669B8: jal         0x8026732C
    // 0x802669BC: sw          $t3, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r11;
    ovl_8024B800_func_8026732C(rdram, ctx);
        goto after_18;
    // 0x802669BC: sw          $t3, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r11;
    after_18:
    // 0x802669C0: lw          $t5, 0x28($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X28);
    // 0x802669C4: addiu       $t6, $zero, -0x225
    ctx->r14 = ADD32(0, -0X225);
    // 0x802669C8: sw          $t6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r14;
    // 0x802669CC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802669D0: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    // 0x802669D4: addiu       $a2, $zero, 0x130
    ctx->r6 = ADD32(0, 0X130);
    // 0x802669D8: addiu       $a3, $zero, 0x2
    ctx->r7 = ADD32(0, 0X2);
    // 0x802669DC: jal         0x8026732C
    // 0x802669E0: sw          $t5, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r13;
    ovl_8024B800_func_8026732C(rdram, ctx);
        goto after_19;
    // 0x802669E0: sw          $t5, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r13;
    after_19:
    // 0x802669E4: lw          $t7, 0x28($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X28);
    // 0x802669E8: addiu       $t8, $zero, -0x225
    ctx->r24 = ADD32(0, -0X225);
    // 0x802669EC: sw          $t8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r24;
    // 0x802669F0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802669F4: addiu       $a1, $zero, 0x1E
    ctx->r5 = ADD32(0, 0X1E);
    // 0x802669F8: addiu       $a2, $zero, 0x700
    ctx->r6 = ADD32(0, 0X700);
    // 0x802669FC: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x80266A00: jal         0x8026732C
    // 0x80266A04: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    ovl_8024B800_func_8026732C(rdram, ctx);
        goto after_20;
    // 0x80266A04: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    after_20:
    // 0x80266A08: lhu         $t9, 0x4($s0)
    ctx->r25 = MEM_HU(ctx->r16, 0X4);
    // 0x80266A0C: addiu       $at, $zero, 0x5
    ctx->r1 = ADD32(0, 0X5);
    // 0x80266A10: bne         $t9, $at, L_80266A20
    if (ctx->r25 != ctx->r1) {
        // 0x80266A14: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80266A20;
    }
    // 0x80266A14: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80266A18: b           L_80266A24
    // 0x80266A1C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
        goto L_80266A24;
    // 0x80266A1C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
L_80266A20:
    // 0x80266A20: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
L_80266A24:
    // 0x80266A24: lw          $t1, 0x30($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X30);
    // 0x80266A28: addiu       $t0, $zero, -0x225
    ctx->r8 = ADD32(0, -0X225);
    // 0x80266A2C: sw          $t0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r8;
    // 0x80266A30: addiu       $a1, $zero, 0xC0
    ctx->r5 = ADD32(0, 0XC0);
    // 0x80266A34: addiu       $a2, $zero, 0xFE
    ctx->r6 = ADD32(0, 0XFE);
    // 0x80266A38: jal         0x8026732C
    // 0x80266A3C: sw          $t1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r9;
    ovl_8024B800_func_8026732C(rdram, ctx);
        goto after_21;
    // 0x80266A3C: sw          $t1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r9;
    after_21:
L_80266A40:
    // 0x80266A40: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_80266A44:
    // 0x80266A44: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x80266A48: jr          $ra
    // 0x80266A4C: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    return;
    // 0x80266A4C: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void ovl_8024B800_func_80266974(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80266974: nop

    // 0x80266978: lhu         $t0, 0x12($v0)
    ctx->r8 = MEM_HU(ctx->r2, 0X12);
    // 0x8026697C: sb          $t1, 0x0($v0)
    MEM_B(0X0, ctx->r2) = ctx->r9;
    // 0x80266980: ori         $t2, $t0, 0x100
    ctx->r10 = ctx->r8 | 0X100;
    // 0x80266984: jal         0x802672B4
    // 0x80266988: sh          $t2, 0x12($v0)
    MEM_H(0X12, ctx->r2) = ctx->r10;
    ovl_8024B800_func_802672B4(rdram, ctx);
        goto after_0;
    // 0x80266988: sh          $t2, 0x12($v0)
    MEM_H(0X12, ctx->r2) = ctx->r10;
    after_0:
    // 0x8026698C: jal         0x80266464
    // 0x80266990: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_8024B800_func_80266464(rdram, ctx);
        goto after_1;
    // 0x80266990: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
    // 0x80266994: jal         0x802665A0
    // 0x80266998: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_8024B800_func_802665A0(rdram, ctx);
        goto after_2;
    // 0x80266998: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_2:
    // 0x8026699C: lw          $t3, 0x30($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X30);
    // 0x802669A0: addiu       $t4, $zero, -0x225
    ctx->r12 = ADD32(0, -0X225);
    // 0x802669A4: sw          $t4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r12;
    // 0x802669A8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802669AC: addiu       $a1, $zero, 0x20
    ctx->r5 = ADD32(0, 0X20);
    // 0x802669B0: addiu       $a2, $zero, 0x130
    ctx->r6 = ADD32(0, 0X130);
    // 0x802669B4: addiu       $a3, $zero, 0x2
    ctx->r7 = ADD32(0, 0X2);
    // 0x802669B8: jal         0x8026732C
    // 0x802669BC: sw          $t3, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r11;
    ovl_8024B800_func_8026732C(rdram, ctx);
        goto after_3;
    // 0x802669BC: sw          $t3, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r11;
    after_3:
    // 0x802669C0: lw          $t5, 0x28($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X28);
    // 0x802669C4: addiu       $t6, $zero, -0x225
    ctx->r14 = ADD32(0, -0X225);
    // 0x802669C8: sw          $t6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r14;
    // 0x802669CC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802669D0: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    // 0x802669D4: addiu       $a2, $zero, 0x130
    ctx->r6 = ADD32(0, 0X130);
    // 0x802669D8: addiu       $a3, $zero, 0x2
    ctx->r7 = ADD32(0, 0X2);
    // 0x802669DC: jal         0x8026732C
    // 0x802669E0: sw          $t5, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r13;
    ovl_8024B800_func_8026732C(rdram, ctx);
        goto after_4;
    // 0x802669E0: sw          $t5, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r13;
    after_4:
    // 0x802669E4: lw          $t7, 0x28($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X28);
    // 0x802669E8: addiu       $t8, $zero, -0x225
    ctx->r24 = ADD32(0, -0X225);
    // 0x802669EC: sw          $t8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r24;
    // 0x802669F0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802669F4: addiu       $a1, $zero, 0x1E
    ctx->r5 = ADD32(0, 0X1E);
    // 0x802669F8: addiu       $a2, $zero, 0x700
    ctx->r6 = ADD32(0, 0X700);
    // 0x802669FC: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x80266A00: jal         0x8026732C
    // 0x80266A04: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    ovl_8024B800_func_8026732C(rdram, ctx);
        goto after_5;
    // 0x80266A04: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    after_5:
    // 0x80266A08: lhu         $t9, 0x4($s0)
    ctx->r25 = MEM_HU(ctx->r16, 0X4);
    // 0x80266A0C: addiu       $at, $zero, 0x5
    ctx->r1 = ADD32(0, 0X5);
    // 0x80266A10: bne         $t9, $at, L_80266A20
    if (ctx->r25 != ctx->r1) {
        // 0x80266A14: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80266A20;
    }
    // 0x80266A14: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80266A18: b           L_80266A24
    // 0x80266A1C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
        goto L_80266A24;
    // 0x80266A1C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
L_80266A20:
    // 0x80266A20: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
L_80266A24:
    // 0x80266A24: lw          $t1, 0x30($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X30);
    // 0x80266A28: addiu       $t0, $zero, -0x225
    ctx->r8 = ADD32(0, -0X225);
    // 0x80266A2C: sw          $t0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r8;
    // 0x80266A30: addiu       $a1, $zero, 0xC0
    ctx->r5 = ADD32(0, 0XC0);
    // 0x80266A34: addiu       $a2, $zero, 0xFE
    ctx->r6 = ADD32(0, 0XFE);
    // 0x80266A38: jal         0x8026732C
    // 0x80266A3C: sw          $t1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r9;
    ovl_8024B800_func_8026732C(rdram, ctx);
        goto after_6;
    // 0x80266A3C: sw          $t1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r9;
    after_6:
    // 0x80266A40: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x80266A44: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x80266A48: jr          $ra
    // 0x80266A4C: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    return;
    // 0x80266A4C: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void ovl_8024B800_func_80266A50(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80266A50: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80266A54: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80266A58: lhu         $t6, 0x10($a0)
    ctx->r14 = MEM_HU(ctx->r4, 0X10);
    // 0x80266A5C: nop

    // 0x80266A60: andi        $t7, $t6, 0xFFFE
    ctx->r15 = ctx->r14 & 0XFFFE;
    // 0x80266A64: sh          $t7, 0x10($a0)
    MEM_H(0X10, ctx->r4) = ctx->r15;
    // 0x80266A68: jal         0x80267090
    // 0x80266A6C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    ovl_8024B800_func_80267090(rdram, ctx);
        goto after_0;
    // 0x80266A6C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x80266A70: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x80266A74: beq         $v0, $zero, L_80266AA4
    if (ctx->r2 == 0) {
        // 0x80266A78: lui         $t8, 0x8009
        ctx->r24 = S32(0X8009 << 16);
            goto L_80266AA4;
    }
    // 0x80266A78: lui         $t8, 0x8009
    ctx->r24 = S32(0X8009 << 16);
    // 0x80266A7C: lw          $t8, 0x3B20($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X3B20);
    // 0x80266A80: addiu       $t0, $zero, 0x15
    ctx->r8 = ADD32(0, 0X15);
    // 0x80266A84: lw          $t9, 0x88($t8)
    ctx->r25 = MEM_W(ctx->r24, 0X88);
    // 0x80266A88: nop

    // 0x80266A8C: beq         $t9, $zero, L_80266AA4
    if (ctx->r25 == 0) {
        // 0x80266A90: nop
    
            goto L_80266AA4;
    }
    // 0x80266A90: nop

    // 0x80266A94: lhu         $t1, 0x12($v0)
    ctx->r9 = MEM_HU(ctx->r2, 0X12);
    // 0x80266A98: sb          $t0, 0x0($v0)
    MEM_B(0X0, ctx->r2) = ctx->r8;
    // 0x80266A9C: ori         $t2, $t1, 0x100
    ctx->r10 = ctx->r9 | 0X100;
    // 0x80266AA0: sh          $t2, 0x12($v0)
    MEM_H(0X12, ctx->r2) = ctx->r10;
L_80266AA4:
    // 0x80266AA4: jal         0x80266464
    // 0x80266AA8: nop

    ovl_8024B800_func_80266464(rdram, ctx);
        goto after_1;
    // 0x80266AA8: nop

    after_1:
    // 0x80266AAC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80266AB0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80266AB4: jr          $ra
    // 0x80266AB8: nop

    return;
    // 0x80266AB8: nop

;}
RECOMP_FUNC void ovl_8024B800_func_80266ABC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80266ABC: lh          $v0, 0x2E($a0)
    ctx->r2 = MEM_H(ctx->r4, 0X2E);
    // 0x80266AC0: addiu       $t0, $zero, -0x15E
    ctx->r8 = ADD32(0, -0X15E);
    // 0x80266AC4: slti        $at, $v0, -0x15D
    ctx->r1 = SIGNED(ctx->r2) < -0X15D ? 1 : 0;
    // 0x80266AC8: bne         $at, $zero, L_80266B14
    if (ctx->r1 != 0) {
        // 0x80266ACC: subu        $t1, $t0, $v0
        ctx->r9 = SUB32(ctx->r8, ctx->r2);
            goto L_80266B14;
    }
    // 0x80266ACC: subu        $t1, $t0, $v0
    ctx->r9 = SUB32(ctx->r8, ctx->r2);
    // 0x80266AD0: lh          $t6, 0x30($a0)
    ctx->r14 = MEM_H(ctx->r4, 0X30);
    // 0x80266AD4: lw          $t7, 0xC8($a0)
    ctx->r15 = MEM_W(ctx->r4, 0XC8);
    // 0x80266AD8: mtc1        $t6, $f4
    ctx->f4.u32l = ctx->r14;
    // 0x80266ADC: lwc1        $f8, 0x8D0($t7)
    ctx->f8.u32l = MEM_W(ctx->r15, 0X8D0);
    // 0x80266AE0: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x80266AE4: mul.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = MUL_S(ctx->f6.fl, ctx->f8.fl);
    // 0x80266AE8: cfc1        $t8, $FpcCsr
    ctx->r24 = get_cop1_cs();
    // 0x80266AEC: nop

    // 0x80266AF0: ori         $at, $t8, 0x3
    ctx->r1 = ctx->r24 | 0X3;
    // 0x80266AF4: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x80266AF8: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x80266AFC: nop

    // 0x80266B00: cvt.w.s     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.u32l = CVT_W_S(ctx->f10.fl);
    // 0x80266B04: mfc1        $t9, $f16
    ctx->r25 = (int32_t)ctx->f16.u32l;
    // 0x80266B08: ctc1        $t8, $FpcCsr
    set_cop1_cs(ctx->r24);
    // 0x80266B0C: jr          $ra
    // 0x80266B10: sh          $t9, 0x30($a0)
    MEM_H(0X30, ctx->r4) = ctx->r25;
    return;
    // 0x80266B10: sh          $t9, 0x30($a0)
    MEM_H(0X30, ctx->r4) = ctx->r25;
L_80266B14:
    // 0x80266B14: mtc1        $t1, $f18
    ctx->f18.u32l = ctx->r9;
    // 0x80266B18: lui         $at, 0x431F
    ctx->r1 = S32(0X431F << 16);
    // 0x80266B1C: cvt.s.w     $f0, $f18
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    ctx->f0.fl = CVT_S_W(ctx->f18.u32l);
    // 0x80266B20: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80266B24: lui         $at, 0x8028
    ctx->r1 = S32(0X8028 << 16);
    // 0x80266B28: div.s       $f0, $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f0.fl = DIV_S(ctx->f0.fl, ctx->f4.fl);
    // 0x80266B2C: lwc1        $f9, -0x2D80($at)
    ctx->f_odd[(9 - 1) * 2] = MEM_W(ctx->r1, -0X2D80);
    // 0x80266B30: lwc1        $f8, -0x2D7C($at)
    ctx->f8.u32l = MEM_W(ctx->r1, -0X2D7C);
    // 0x80266B34: lui         $at, 0x8028
    ctx->r1 = S32(0X8028 << 16);
    // 0x80266B38: lh          $t2, 0x30($a0)
    ctx->r10 = MEM_H(ctx->r4, 0X30);
    // 0x80266B3C: lwc1        $f17, -0x2D78($at)
    ctx->f_odd[(17 - 1) * 2] = MEM_W(ctx->r1, -0X2D78);
    // 0x80266B40: lwc1        $f16, -0x2D74($at)
    ctx->f16.u32l = MEM_W(ctx->r1, -0X2D74);
    // 0x80266B44: cvt.d.s     $f6, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f6.d = CVT_D_S(ctx->f0.fl);
    // 0x80266B48: mul.d       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f8.d); 
    ctx->f10.d = MUL_D(ctx->f6.d, ctx->f8.d);
    // 0x80266B4C: mtc1        $t2, $f6
    ctx->f6.u32l = ctx->r10;
    // 0x80266B50: cvt.s.d     $f0, $f10
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f0.fl = CVT_S_D(ctx->f10.d);
    // 0x80266B54: cvt.d.s     $f18, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f18.d = CVT_D_S(ctx->f0.fl);
    // 0x80266B58: sub.d       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.d); NAN_CHECK(ctx->f18.d); 
    ctx->f4.d = ctx->f16.d - ctx->f18.d;
    // 0x80266B5C: cvt.s.w     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.fl = CVT_S_W(ctx->f6.u32l);
    // 0x80266B60: cvt.s.d     $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.d); 
    ctx->f0.fl = CVT_S_D(ctx->f4.d);
    // 0x80266B64: mul.s       $f10, $f8, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f10.fl = MUL_S(ctx->f8.fl, ctx->f0.fl);
    // 0x80266B68: cfc1        $t3, $FpcCsr
    ctx->r11 = get_cop1_cs();
    // 0x80266B6C: nop

    // 0x80266B70: ori         $at, $t3, 0x3
    ctx->r1 = ctx->r11 | 0X3;
    // 0x80266B74: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x80266B78: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x80266B7C: nop

    // 0x80266B80: cvt.w.s     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.u32l = CVT_W_S(ctx->f10.fl);
    // 0x80266B84: mfc1        $t4, $f16
    ctx->r12 = (int32_t)ctx->f16.u32l;
    // 0x80266B88: ctc1        $t3, $FpcCsr
    set_cop1_cs(ctx->r11);
    // 0x80266B8C: sh          $t4, 0x30($a0)
    MEM_H(0X30, ctx->r4) = ctx->r12;
    // 0x80266B90: nop

    // 0x80266B94: jr          $ra
    // 0x80266B98: nop

    return;
    // 0x80266B98: nop

;}
RECOMP_FUNC void ovl_8024B800_func_80266B8C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80266B8C: sh          $t4, 0x30($a0)
    MEM_H(0X30, ctx->r4) = ctx->r12;
    // 0x80266B90: nop

    // 0x80266B94: jr          $ra
    // 0x80266B98: nop

    return;
    // 0x80266B98: nop

;}
RECOMP_FUNC void ovl_8024B800_func_80266B9C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80266B9C: lh          $v0, 0x8CC($a0)
    ctx->r2 = MEM_H(ctx->r4, 0X8CC);
    // 0x80266BA0: nop

    // 0x80266BA4: slti        $at, $v0, -0x96
    ctx->r1 = SIGNED(ctx->r2) < -0X96 ? 1 : 0;
    // 0x80266BA8: bne         $at, $zero, L_80266BC0
    if (ctx->r1 != 0) {
        // 0x80266BAC: lui         $at, 0x8028
        ctx->r1 = S32(0X8028 << 16);
            goto L_80266BC0;
    }
    // 0x80266BAC: lui         $at, 0x8028
    ctx->r1 = S32(0X8028 << 16);
    // 0x80266BB0: lwc1        $f4, -0x2D70($at)
    ctx->f4.u32l = MEM_W(ctx->r1, -0X2D70);
    // 0x80266BB4: lh          $v0, 0x8CC($a0)
    ctx->r2 = MEM_H(ctx->r4, 0X8CC);
    // 0x80266BB8: b           L_80266C6C
    // 0x80266BBC: swc1        $f4, 0x8D0($a0)
    MEM_W(0X8D0, ctx->r4) = ctx->f4.u32l;
        goto L_80266C6C;
    // 0x80266BBC: swc1        $f4, 0x8D0($a0)
    MEM_W(0X8D0, ctx->r4) = ctx->f4.u32l;
L_80266BC0:
    // 0x80266BC0: slti        $at, $v0, -0x15E
    ctx->r1 = SIGNED(ctx->r2) < -0X15E ? 1 : 0;
    // 0x80266BC4: bne         $at, $zero, L_80266C20
    if (ctx->r1 != 0) {
        // 0x80266BC8: addiu       $t8, $zero, -0x15E
        ctx->r24 = ADD32(0, -0X15E);
            goto L_80266C20;
    }
    // 0x80266BC8: addiu       $t8, $zero, -0x15E
    ctx->r24 = ADD32(0, -0X15E);
    // 0x80266BCC: addiu       $t6, $zero, -0x96
    ctx->r14 = ADD32(0, -0X96);
    // 0x80266BD0: subu        $t7, $t6, $v0
    ctx->r15 = SUB32(ctx->r14, ctx->r2);
    // 0x80266BD4: mtc1        $t7, $f6
    ctx->f6.u32l = ctx->r15;
    // 0x80266BD8: lui         $at, 0x4348
    ctx->r1 = S32(0X4348 << 16);
    // 0x80266BDC: cvt.s.w     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.fl = CVT_S_W(ctx->f6.u32l);
    // 0x80266BE0: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x80266BE4: lui         $at, 0x8028
    ctx->r1 = S32(0X8028 << 16);
    // 0x80266BE8: div.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = DIV_S(ctx->f8.fl, ctx->f10.fl);
    // 0x80266BEC: lwc1        $f5, -0x2D68($at)
    ctx->f_odd[(5 - 1) * 2] = MEM_W(ctx->r1, -0X2D68);
    // 0x80266BF0: lwc1        $f4, -0x2D64($at)
    ctx->f4.u32l = MEM_W(ctx->r1, -0X2D64);
    // 0x80266BF4: lui         $at, 0x8028
    ctx->r1 = S32(0X8028 << 16);
    // 0x80266BF8: lwc1        $f17, -0x2D60($at)
    ctx->f_odd[(17 - 1) * 2] = MEM_W(ctx->r1, -0X2D60);
    // 0x80266BFC: cvt.d.s     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); 
    ctx->f18.d = CVT_D_S(ctx->f16.fl);
    // 0x80266C00: mul.d       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.d); NAN_CHECK(ctx->f4.d); 
    ctx->f6.d = MUL_D(ctx->f18.d, ctx->f4.d);
    // 0x80266C04: lwc1        $f16, -0x2D5C($at)
    ctx->f16.u32l = MEM_W(ctx->r1, -0X2D5C);
    // 0x80266C08: cvt.s.d     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.d); 
    ctx->f8.fl = CVT_S_D(ctx->f6.d);
    // 0x80266C0C: cvt.d.s     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f10.d = CVT_D_S(ctx->f8.fl);
    // 0x80266C10: sub.d       $f18, $f16, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f16.d); NAN_CHECK(ctx->f10.d); 
    ctx->f18.d = ctx->f16.d - ctx->f10.d;
    // 0x80266C14: cvt.s.d     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.d); 
    ctx->f4.fl = CVT_S_D(ctx->f18.d);
    // 0x80266C18: b           L_80266C6C
    // 0x80266C1C: swc1        $f4, 0x8D0($a0)
    MEM_W(0X8D0, ctx->r4) = ctx->f4.u32l;
        goto L_80266C6C;
    // 0x80266C1C: swc1        $f4, 0x8D0($a0)
    MEM_W(0X8D0, ctx->r4) = ctx->f4.u32l;
L_80266C20:
    // 0x80266C20: subu        $t9, $t8, $v0
    ctx->r25 = SUB32(ctx->r24, ctx->r2);
    // 0x80266C24: mtc1        $t9, $f6
    ctx->f6.u32l = ctx->r25;
    // 0x80266C28: lui         $at, 0x431F
    ctx->r1 = S32(0X431F << 16);
    // 0x80266C2C: cvt.s.w     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.fl = CVT_S_W(ctx->f6.u32l);
    // 0x80266C30: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x80266C34: lui         $at, 0x8028
    ctx->r1 = S32(0X8028 << 16);
    // 0x80266C38: div.s       $f10, $f8, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f10.fl = DIV_S(ctx->f8.fl, ctx->f16.fl);
    // 0x80266C3C: lwc1        $f5, -0x2D58($at)
    ctx->f_odd[(5 - 1) * 2] = MEM_W(ctx->r1, -0X2D58);
    // 0x80266C40: lwc1        $f4, -0x2D54($at)
    ctx->f4.u32l = MEM_W(ctx->r1, -0X2D54);
    // 0x80266C44: lui         $at, 0x8028
    ctx->r1 = S32(0X8028 << 16);
    // 0x80266C48: lwc1        $f11, -0x2D50($at)
    ctx->f_odd[(11 - 1) * 2] = MEM_W(ctx->r1, -0X2D50);
    // 0x80266C4C: cvt.d.s     $f18, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.fl); 
    ctx->f18.d = CVT_D_S(ctx->f10.fl);
    // 0x80266C50: mul.d       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.d); NAN_CHECK(ctx->f4.d); 
    ctx->f6.d = MUL_D(ctx->f18.d, ctx->f4.d);
    // 0x80266C54: lwc1        $f10, -0x2D4C($at)
    ctx->f10.u32l = MEM_W(ctx->r1, -0X2D4C);
    // 0x80266C58: cvt.s.d     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.d); 
    ctx->f8.fl = CVT_S_D(ctx->f6.d);
    // 0x80266C5C: cvt.d.s     $f16, $f8
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f16.d = CVT_D_S(ctx->f8.fl);
    // 0x80266C60: sub.d       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f16.d); 
    ctx->f18.d = ctx->f10.d - ctx->f16.d;
    // 0x80266C64: cvt.s.d     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.d); 
    ctx->f4.fl = CVT_S_D(ctx->f18.d);
    // 0x80266C68: swc1        $f4, 0x8D0($a0)
    MEM_W(0X8D0, ctx->r4) = ctx->f4.u32l;
L_80266C6C:
    // 0x80266C6C: bltz        $v0, L_80266C80
    if (SIGNED(ctx->r2) < 0) {
        // 0x80266C70: lui         $at, 0x8028
        ctx->r1 = S32(0X8028 << 16);
            goto L_80266C80;
    }
    // 0x80266C70: lui         $at, 0x8028
    ctx->r1 = S32(0X8028 << 16);
    // 0x80266C74: lwc1        $f6, -0x2D48($at)
    ctx->f6.u32l = MEM_W(ctx->r1, -0X2D48);
    // 0x80266C78: lh          $v0, 0x8CC($a0)
    ctx->r2 = MEM_H(ctx->r4, 0X8CC);
    // 0x80266C7C: swc1        $f6, 0x8D4($a0)
    MEM_W(0X8D4, ctx->r4) = ctx->f6.u32l;
L_80266C80:
    // 0x80266C80: mtc1        $v0, $f8
    ctx->f8.u32l = ctx->r2;
    // 0x80266C84: lui         $at, 0x8028
    ctx->r1 = S32(0X8028 << 16);
    // 0x80266C88: cvt.d.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.d = CVT_D_W(ctx->f8.u32l);
    // 0x80266C8C: lwc1        $f17, -0x2D40($at)
    ctx->f_odd[(17 - 1) * 2] = MEM_W(ctx->r1, -0X2D40);
    // 0x80266C90: lwc1        $f16, -0x2D3C($at)
    ctx->f16.u32l = MEM_W(ctx->r1, -0X2D3C);
    // 0x80266C94: lui         $at, 0x8028
    ctx->r1 = S32(0X8028 << 16);
    // 0x80266C98: mul.d       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f16.d); 
    ctx->f18.d = MUL_D(ctx->f10.d, ctx->f16.d);
    // 0x80266C9C: lwc1        $f5, -0x2D38($at)
    ctx->f_odd[(5 - 1) * 2] = MEM_W(ctx->r1, -0X2D38);
    // 0x80266CA0: lwc1        $f4, -0x2D34($at)
    ctx->f4.u32l = MEM_W(ctx->r1, -0X2D34);
    // 0x80266CA4: lui         $at, 0x8028
    ctx->r1 = S32(0X8028 << 16);
    // 0x80266CA8: lwc1        $f9, -0x2D30($at)
    ctx->f_odd[(9 - 1) * 2] = MEM_W(ctx->r1, -0X2D30);
    // 0x80266CAC: div.d       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.d); NAN_CHECK(ctx->f4.d); 
    ctx->f6.d = DIV_D(ctx->f18.d, ctx->f4.d);
    // 0x80266CB0: lwc1        $f8, -0x2D2C($at)
    ctx->f8.u32l = MEM_W(ctx->r1, -0X2D2C);
    // 0x80266CB4: nop

    // 0x80266CB8: add.d       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f8.d); 
    ctx->f10.d = ctx->f6.d + ctx->f8.d;
    // 0x80266CBC: cvt.s.d     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f16.fl = CVT_S_D(ctx->f10.d);
    // 0x80266CC0: jr          $ra
    // 0x80266CC4: swc1        $f16, 0x8D4($a0)
    MEM_W(0X8D4, ctx->r4) = ctx->f16.u32l;
    return;
    // 0x80266CC4: swc1        $f16, 0x8D4($a0)
    MEM_W(0X8D4, ctx->r4) = ctx->f16.u32l;
;}
RECOMP_FUNC void ovl_8024B800_func_80266CB8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80266CB8: add.d       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f8.d); 
    ctx->f10.d = ctx->f6.d + ctx->f8.d;
    // 0x80266CBC: cvt.s.d     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f16.fl = CVT_S_D(ctx->f10.d);
    // 0x80266CC0: jr          $ra
    // 0x80266CC4: swc1        $f16, 0x8D4($a0)
    MEM_W(0X8D4, ctx->r4) = ctx->f16.u32l;
    return;
    // 0x80266CC4: swc1        $f16, 0x8D4($a0)
    MEM_W(0X8D4, ctx->r4) = ctx->f16.u32l;
;}
RECOMP_FUNC void ovl_8024B800_func_80266CC8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80266CC8: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80266CCC: sw          $s3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r19;
    // 0x80266CD0: sw          $s2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r18;
    // 0x80266CD4: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x80266CD8: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x80266CDC: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x80266CE0: addiu       $s0, $a0, 0x8F8
    ctx->r16 = ADD32(ctx->r4, 0X8F8);
    // 0x80266CE4: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    // 0x80266CE8: addiu       $s2, $zero, 0x1E9
    ctx->r18 = ADD32(0, 0X1E9);
    // 0x80266CEC: addiu       $s3, $zero, 0xB
    ctx->r19 = ADD32(0, 0XB);
L_80266CF0:
    // 0x80266CF0: jal         0x80059898
    // 0x80266CF4: addiu       $a0, $zero, 0x64
    ctx->r4 = ADD32(0, 0X64);
    func_80059898(rdram, ctx);
        goto after_0;
    // 0x80266CF4: addiu       $a0, $zero, 0x64
    ctx->r4 = ADD32(0, 0X64);
    after_0:
    // 0x80266CF8: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x80266CFC: subu        $t6, $s2, $v0
    ctx->r14 = SUB32(ctx->r18, ctx->r2);
    // 0x80266D00: addiu       $s0, $s0, 0x2
    ctx->r16 = ADD32(ctx->r16, 0X2);
    // 0x80266D04: bne         $s1, $s3, L_80266CF0
    if (ctx->r17 != ctx->r19) {
        // 0x80266D08: sh          $t6, -0x2($s0)
        MEM_H(-0X2, ctx->r16) = ctx->r14;
            goto L_80266CF0;
    }
    // 0x80266D08: sh          $t6, -0x2($s0)
    MEM_H(-0X2, ctx->r16) = ctx->r14;
    // 0x80266D0C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x80266D10: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x80266D14: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x80266D18: lw          $s2, 0x1C($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X1C);
    // 0x80266D1C: lw          $s3, 0x20($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X20);
    // 0x80266D20: jr          $ra
    // 0x80266D24: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x80266D24: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void ovl_8024B800_func_80266D28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80266D28: addiu       $sp, $sp, -0x58
    ctx->r29 = ADD32(ctx->r29, -0X58);
    // 0x80266D2C: lui         $t6, 0x8028
    ctx->r14 = S32(0X8028 << 16);
    // 0x80266D30: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x80266D34: sw          $s4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r20;
    // 0x80266D38: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x80266D3C: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x80266D40: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x80266D44: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80266D48: sw          $a0, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r4;
    // 0x80266D4C: addiu       $t6, $t6, -0x3078
    ctx->r14 = ADD32(ctx->r14, -0X3078);
    // 0x80266D50: lw          $at, 0x0($t6)
    ctx->r1 = MEM_W(ctx->r14, 0X0);
    // 0x80266D54: addiu       $s0, $sp, 0x38
    ctx->r16 = ADD32(ctx->r29, 0X38);
    // 0x80266D58: sw          $at, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r1;
    // 0x80266D5C: lw          $t9, 0x4($t6)
    ctx->r25 = MEM_W(ctx->r14, 0X4);
    // 0x80266D60: or          $s3, $a1, $zero
    ctx->r19 = ctx->r5 | 0;
    // 0x80266D64: sw          $t9, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->r25;
    // 0x80266D68: lw          $at, 0x8($t6)
    ctx->r1 = MEM_W(ctx->r14, 0X8);
    // 0x80266D6C: addiu       $s2, $zero, 0xB
    ctx->r18 = ADD32(0, 0XB);
    // 0x80266D70: sw          $at, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->r1;
    // 0x80266D74: lw          $t9, 0xC($t6)
    ctx->r25 = MEM_W(ctx->r14, 0XC);
    // 0x80266D78: addiu       $s4, $zero, -0x1
    ctx->r20 = ADD32(0, -0X1);
    // 0x80266D7C: sw          $t9, 0xC($s0)
    MEM_W(0XC, ctx->r16) = ctx->r25;
    // 0x80266D80: lw          $at, 0x10($t6)
    ctx->r1 = MEM_W(ctx->r14, 0X10);
    // 0x80266D84: nop

    // 0x80266D88: sw          $at, 0x10($s0)
    MEM_W(0X10, ctx->r16) = ctx->r1;
    // 0x80266D8C: lw          $t9, 0x14($t6)
    ctx->r25 = MEM_W(ctx->r14, 0X14);
    // 0x80266D90: nop

    // 0x80266D94: sw          $t9, 0x14($s0)
    MEM_W(0X14, ctx->r16) = ctx->r25;
    // 0x80266D98: sw          $a1, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r5;
L_80266D9C:
    // 0x80266D9C: beq         $s2, $zero, L_80266DBC
    if (ctx->r18 == 0) {
        // 0x80266DA0: or          $s1, $zero, $zero
        ctx->r17 = 0 | 0;
            goto L_80266DBC;
    }
    // 0x80266DA0: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    // 0x80266DA4: jal         0x80059898
    // 0x80266DA8: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    func_80059898(rdram, ctx);
        goto after_0;
    // 0x80266DA8: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    after_0:
    // 0x80266DAC: sll         $v1, $v0, 16
    ctx->r3 = S32(ctx->r2 << 16);
    // 0x80266DB0: sra         $t0, $v1, 16
    ctx->r8 = S32(SIGNED(ctx->r3) >> 16);
    // 0x80266DB4: b           L_80266DC0
    // 0x80266DB8: or          $v1, $t0, $zero
    ctx->r3 = ctx->r8 | 0;
        goto L_80266DC0;
    // 0x80266DB8: or          $v1, $t0, $zero
    ctx->r3 = ctx->r8 | 0;
L_80266DBC:
    // 0x80266DBC: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
L_80266DC0:
    // 0x80266DC0: bltz        $v1, L_80266E1C
    if (SIGNED(ctx->r3) < 0) {
        // 0x80266DC4: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_80266E1C;
    }
    // 0x80266DC4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_80266DC8:
    // 0x80266DC8: sll         $t1, $v0, 1
    ctx->r9 = S32(ctx->r2 << 1);
    // 0x80266DCC: addu        $t2, $s0, $t1
    ctx->r10 = ADD32(ctx->r16, ctx->r9);
    // 0x80266DD0: lh          $t3, 0x0($t2)
    ctx->r11 = MEM_H(ctx->r10, 0X0);
    // 0x80266DD4: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x80266DD8: bgez        $t3, L_80266E04
    if (SIGNED(ctx->r11) >= 0) {
        // 0x80266DDC: sll         $t9, $s1, 16
        ctx->r25 = S32(ctx->r17 << 16);
            goto L_80266E04;
    }
    // 0x80266DDC: sll         $t9, $s1, 16
    ctx->r25 = S32(ctx->r17 << 16);
L_80266DE0:
    // 0x80266DE0: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80266DE4: sll         $t4, $v0, 16
    ctx->r12 = S32(ctx->r2 << 16);
    // 0x80266DE8: sra         $v0, $t4, 16
    ctx->r2 = S32(SIGNED(ctx->r12) >> 16);
    // 0x80266DEC: sll         $t8, $v0, 1
    ctx->r24 = S32(ctx->r2 << 1);
    // 0x80266DF0: addu        $t7, $s0, $t8
    ctx->r15 = ADD32(ctx->r16, ctx->r24);
    // 0x80266DF4: lh          $t6, 0x0($t7)
    ctx->r14 = MEM_H(ctx->r15, 0X0);
    // 0x80266DF8: nop

    // 0x80266DFC: bltz        $t6, L_80266DE0
    if (SIGNED(ctx->r14) < 0) {
        // 0x80266E00: nop
    
            goto L_80266DE0;
    }
    // 0x80266E00: nop

L_80266E04:
    // 0x80266E04: sra         $s1, $t9, 16
    ctx->r17 = S32(SIGNED(ctx->r25) >> 16);
    // 0x80266E08: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80266E0C: sll         $t1, $v0, 16
    ctx->r9 = S32(ctx->r2 << 16);
    // 0x80266E10: slt         $at, $v1, $s1
    ctx->r1 = SIGNED(ctx->r3) < SIGNED(ctx->r17) ? 1 : 0;
    // 0x80266E14: beq         $at, $zero, L_80266DC8
    if (ctx->r1 == 0) {
        // 0x80266E18: sra         $v0, $t1, 16
        ctx->r2 = S32(SIGNED(ctx->r9) >> 16);
            goto L_80266DC8;
    }
    // 0x80266E18: sra         $v0, $t1, 16
    ctx->r2 = S32(SIGNED(ctx->r9) >> 16);
L_80266E1C:
    // 0x80266E1C: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x80266E20: sll         $t3, $v0, 16
    ctx->r11 = S32(ctx->r2 << 16);
    // 0x80266E24: sra         $t4, $t3, 16
    ctx->r12 = S32(SIGNED(ctx->r11) >> 16);
    // 0x80266E28: sll         $t5, $t4, 1
    ctx->r13 = S32(ctx->r12 << 1);
    // 0x80266E2C: addu        $v1, $s0, $t5
    ctx->r3 = ADD32(ctx->r16, ctx->r13);
    // 0x80266E30: lh          $t8, 0x0($v1)
    ctx->r24 = MEM_H(ctx->r3, 0X0);
    // 0x80266E34: addiu       $s2, $s2, -0x1
    ctx->r18 = ADD32(ctx->r18, -0X1);
    // 0x80266E38: sll         $t7, $s2, 16
    ctx->r15 = S32(ctx->r18 << 16);
    // 0x80266E3C: sra         $s2, $t7, 16
    ctx->r18 = S32(SIGNED(ctx->r15) >> 16);
    // 0x80266E40: sb          $t8, 0x0($s3)
    MEM_B(0X0, ctx->r19) = ctx->r24;
    // 0x80266E44: addiu       $s3, $s3, 0x1
    ctx->r19 = ADD32(ctx->r19, 0X1);
    // 0x80266E48: bne         $s2, $zero, L_80266D9C
    if (ctx->r18 != 0) {
        // 0x80266E4C: sh          $s4, 0x0($v1)
        MEM_H(0X0, ctx->r3) = ctx->r20;
            goto L_80266D9C;
    }
    // 0x80266E4C: sh          $s4, 0x0($v1)
    MEM_H(0X0, ctx->r3) = ctx->r20;
    // 0x80266E50: lw          $t9, 0x58($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X58);
    // 0x80266E54: lui         $s0, 0x8028
    ctx->r16 = S32(0X8028 << 16);
    // 0x80266E58: lbu         $t0, 0x1($t9)
    ctx->r8 = MEM_BU(ctx->r25, 0X1);
    // 0x80266E5C: lw          $a2, 0x30($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X30);
    // 0x80266E60: addu        $s0, $s0, $t0
    ctx->r16 = ADD32(ctx->r16, ctx->r8);
    // 0x80266E64: lbu         $s0, -0x3658($s0)
    ctx->r16 = MEM_BU(ctx->r16, -0X3658);
    // 0x80266E68: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x80266E6C: sll         $a1, $s0, 16
    ctx->r5 = S32(ctx->r16 << 16);
    // 0x80266E70: sra         $t1, $a1, 16
    ctx->r9 = S32(SIGNED(ctx->r5) >> 16);
    // 0x80266E74: jal         0x8005E00C
    // 0x80266E78: or          $a1, $t1, $zero
    ctx->r5 = ctx->r9 | 0;
    func_8005E00C(rdram, ctx);
        goto after_1;
    // 0x80266E78: or          $a1, $t1, $zero
    ctx->r5 = ctx->r9 | 0;
    after_1:
    // 0x80266E7C: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x80266E80: andi        $t2, $s0, 0xFF
    ctx->r10 = ctx->r16 & 0XFF;
    // 0x80266E84: sll         $a0, $t2, 16
    ctx->r4 = S32(ctx->r10 << 16);
    // 0x80266E88: sra         $t3, $a0, 16
    ctx->r11 = S32(SIGNED(ctx->r4) >> 16);
    // 0x80266E8C: lw          $a2, 0x30($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X30);
    // 0x80266E90: or          $a0, $t3, $zero
    ctx->r4 = ctx->r11 | 0;
    // 0x80266E94: jal         0x8005E00C
    // 0x80266E98: addiu       $a1, $zero, 0xA
    ctx->r5 = ADD32(0, 0XA);
    func_8005E00C(rdram, ctx);
        goto after_2;
    // 0x80266E98: addiu       $a1, $zero, 0xA
    ctx->r5 = ADD32(0, 0XA);
    after_2:
    // 0x80266E9C: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x80266EA0: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80266EA4: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x80266EA8: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x80266EAC: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x80266EB0: lw          $s4, 0x28($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X28);
    // 0x80266EB4: jr          $ra
    // 0x80266EB8: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
    return;
    // 0x80266EB8: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
;}
RECOMP_FUNC void ovl_8024B800_func_80266D9C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
L_80266D9C:
    // 0x80266D9C: beq         $s2, $zero, L_80266DBC
    if (ctx->r18 == 0) {
        // 0x80266DA0: or          $s1, $zero, $zero
        ctx->r17 = 0 | 0;
            goto L_80266DBC;
    }
    // 0x80266DA0: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    // 0x80266DA4: jal         0x80059898
    // 0x80266DA8: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    func_80059898(rdram, ctx);
        goto after_0;
    // 0x80266DA8: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    after_0:
    // 0x80266DAC: sll         $v1, $v0, 16
    ctx->r3 = S32(ctx->r2 << 16);
    // 0x80266DB0: sra         $t0, $v1, 16
    ctx->r8 = S32(SIGNED(ctx->r3) >> 16);
    // 0x80266DB4: b           L_80266DC0
    // 0x80266DB8: or          $v1, $t0, $zero
    ctx->r3 = ctx->r8 | 0;
        goto L_80266DC0;
    // 0x80266DB8: or          $v1, $t0, $zero
    ctx->r3 = ctx->r8 | 0;
L_80266DBC:
    // 0x80266DBC: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
L_80266DC0:
    // 0x80266DC0: bltz        $v1, L_80266E1C
    if (SIGNED(ctx->r3) < 0) {
        // 0x80266DC4: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_80266E1C;
    }
    // 0x80266DC4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_80266DC8:
    // 0x80266DC8: sll         $t1, $v0, 1
    ctx->r9 = S32(ctx->r2 << 1);
    // 0x80266DCC: addu        $t2, $s0, $t1
    ctx->r10 = ADD32(ctx->r16, ctx->r9);
    // 0x80266DD0: lh          $t3, 0x0($t2)
    ctx->r11 = MEM_H(ctx->r10, 0X0);
    // 0x80266DD4: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x80266DD8: bgez        $t3, L_80266E04
    if (SIGNED(ctx->r11) >= 0) {
        // 0x80266DDC: sll         $t9, $s1, 16
        ctx->r25 = S32(ctx->r17 << 16);
            goto L_80266E04;
    }
    // 0x80266DDC: sll         $t9, $s1, 16
    ctx->r25 = S32(ctx->r17 << 16);
L_80266DE0:
    // 0x80266DE0: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80266DE4: sll         $t4, $v0, 16
    ctx->r12 = S32(ctx->r2 << 16);
    // 0x80266DE8: sra         $v0, $t4, 16
    ctx->r2 = S32(SIGNED(ctx->r12) >> 16);
    // 0x80266DEC: sll         $t8, $v0, 1
    ctx->r24 = S32(ctx->r2 << 1);
    // 0x80266DF0: addu        $t7, $s0, $t8
    ctx->r15 = ADD32(ctx->r16, ctx->r24);
    // 0x80266DF4: lh          $t6, 0x0($t7)
    ctx->r14 = MEM_H(ctx->r15, 0X0);
    // 0x80266DF8: nop

    // 0x80266DFC: bltz        $t6, L_80266DE0
    if (SIGNED(ctx->r14) < 0) {
        // 0x80266E00: nop
    
            goto L_80266DE0;
    }
    // 0x80266E00: nop

L_80266E04:
    // 0x80266E04: sra         $s1, $t9, 16
    ctx->r17 = S32(SIGNED(ctx->r25) >> 16);
    // 0x80266E08: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80266E0C: sll         $t1, $v0, 16
    ctx->r9 = S32(ctx->r2 << 16);
    // 0x80266E10: slt         $at, $v1, $s1
    ctx->r1 = SIGNED(ctx->r3) < SIGNED(ctx->r17) ? 1 : 0;
    // 0x80266E14: beq         $at, $zero, L_80266DC8
    if (ctx->r1 == 0) {
        // 0x80266E18: sra         $v0, $t1, 16
        ctx->r2 = S32(SIGNED(ctx->r9) >> 16);
            goto L_80266DC8;
    }
    // 0x80266E18: sra         $v0, $t1, 16
    ctx->r2 = S32(SIGNED(ctx->r9) >> 16);
L_80266E1C:
    // 0x80266E1C: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x80266E20: sll         $t3, $v0, 16
    ctx->r11 = S32(ctx->r2 << 16);
    // 0x80266E24: sra         $t4, $t3, 16
    ctx->r12 = S32(SIGNED(ctx->r11) >> 16);
    // 0x80266E28: sll         $t5, $t4, 1
    ctx->r13 = S32(ctx->r12 << 1);
    // 0x80266E2C: addu        $v1, $s0, $t5
    ctx->r3 = ADD32(ctx->r16, ctx->r13);
    // 0x80266E30: lh          $t8, 0x0($v1)
    ctx->r24 = MEM_H(ctx->r3, 0X0);
    // 0x80266E34: addiu       $s2, $s2, -0x1
    ctx->r18 = ADD32(ctx->r18, -0X1);
    // 0x80266E38: sll         $t7, $s2, 16
    ctx->r15 = S32(ctx->r18 << 16);
    // 0x80266E3C: sra         $s2, $t7, 16
    ctx->r18 = S32(SIGNED(ctx->r15) >> 16);
    // 0x80266E40: sb          $t8, 0x0($s3)
    MEM_B(0X0, ctx->r19) = ctx->r24;
    // 0x80266E44: addiu       $s3, $s3, 0x1
    ctx->r19 = ADD32(ctx->r19, 0X1);
    // 0x80266E48: bne         $s2, $zero, L_80266D9C
    if (ctx->r18 != 0) {
        // 0x80266E4C: sh          $s4, 0x0($v1)
        MEM_H(0X0, ctx->r3) = ctx->r20;
            goto L_80266D9C;
    }
    // 0x80266E4C: sh          $s4, 0x0($v1)
    MEM_H(0X0, ctx->r3) = ctx->r20;
    // 0x80266E50: lw          $t9, 0x58($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X58);
    // 0x80266E54: lui         $s0, 0x8028
    ctx->r16 = S32(0X8028 << 16);
    // 0x80266E58: lbu         $t0, 0x1($t9)
    ctx->r8 = MEM_BU(ctx->r25, 0X1);
    // 0x80266E5C: lw          $a2, 0x30($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X30);
    // 0x80266E60: addu        $s0, $s0, $t0
    ctx->r16 = ADD32(ctx->r16, ctx->r8);
    // 0x80266E64: lbu         $s0, -0x3658($s0)
    ctx->r16 = MEM_BU(ctx->r16, -0X3658);
    // 0x80266E68: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x80266E6C: sll         $a1, $s0, 16
    ctx->r5 = S32(ctx->r16 << 16);
    // 0x80266E70: sra         $t1, $a1, 16
    ctx->r9 = S32(SIGNED(ctx->r5) >> 16);
    // 0x80266E74: jal         0x8005E00C
    // 0x80266E78: or          $a1, $t1, $zero
    ctx->r5 = ctx->r9 | 0;
    func_8005E00C(rdram, ctx);
        goto after_1;
    // 0x80266E78: or          $a1, $t1, $zero
    ctx->r5 = ctx->r9 | 0;
    after_1:
    // 0x80266E7C: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x80266E80: andi        $t2, $s0, 0xFF
    ctx->r10 = ctx->r16 & 0XFF;
    // 0x80266E84: sll         $a0, $t2, 16
    ctx->r4 = S32(ctx->r10 << 16);
    // 0x80266E88: sra         $t3, $a0, 16
    ctx->r11 = S32(SIGNED(ctx->r4) >> 16);
    // 0x80266E8C: lw          $a2, 0x30($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X30);
    // 0x80266E90: or          $a0, $t3, $zero
    ctx->r4 = ctx->r11 | 0;
    // 0x80266E94: jal         0x8005E00C
    // 0x80266E98: addiu       $a1, $zero, 0xA
    ctx->r5 = ADD32(0, 0XA);
    func_8005E00C(rdram, ctx);
        goto after_2;
    // 0x80266E98: addiu       $a1, $zero, 0xA
    ctx->r5 = ADD32(0, 0XA);
    after_2:
    // 0x80266E9C: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x80266EA0: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80266EA4: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x80266EA8: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x80266EAC: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x80266EB0: lw          $s4, 0x28($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X28);
    // 0x80266EB4: jr          $ra
    // 0x80266EB8: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
    return;
    // 0x80266EB8: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
;}
RECOMP_FUNC void ovl_8024B800_func_80266DC8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
L_80266D9C:
    // 0x80266DC8: sll         $t1, $v0, 1
    ctx->r9 = S32(ctx->r2 << 1);
L_80266DC8:
    // 0x80266DCC: addu        $t2, $s0, $t1
    ctx->r10 = ADD32(ctx->r16, ctx->r9);
    // 0x80266DD0: lh          $t3, 0x0($t2)
    ctx->r11 = MEM_H(ctx->r10, 0X0);
    // 0x80266DD4: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x80266DD8: bgez        $t3, L_80266E04
    if (SIGNED(ctx->r11) >= 0) {
        // 0x80266DDC: sll         $t9, $s1, 16
        ctx->r25 = S32(ctx->r17 << 16);
            goto L_80266E04;
    }
    // 0x80266DDC: sll         $t9, $s1, 16
    ctx->r25 = S32(ctx->r17 << 16);
L_80266DE0:
    // 0x80266DE0: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80266DE4: sll         $t4, $v0, 16
    ctx->r12 = S32(ctx->r2 << 16);
    // 0x80266DE8: sra         $v0, $t4, 16
    ctx->r2 = S32(SIGNED(ctx->r12) >> 16);
    // 0x80266DEC: sll         $t8, $v0, 1
    ctx->r24 = S32(ctx->r2 << 1);
    // 0x80266DF0: addu        $t7, $s0, $t8
    ctx->r15 = ADD32(ctx->r16, ctx->r24);
    // 0x80266DF4: lh          $t6, 0x0($t7)
    ctx->r14 = MEM_H(ctx->r15, 0X0);
    // 0x80266DF8: nop

    // 0x80266DFC: bltz        $t6, L_80266DE0
    if (SIGNED(ctx->r14) < 0) {
        // 0x80266E00: nop
    
            goto L_80266DE0;
    }
    // 0x80266E00: nop

L_80266E04:
    // 0x80266E04: sra         $s1, $t9, 16
    ctx->r17 = S32(SIGNED(ctx->r25) >> 16);
    // 0x80266E08: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80266E0C: sll         $t1, $v0, 16
    ctx->r9 = S32(ctx->r2 << 16);
    // 0x80266E10: slt         $at, $v1, $s1
    ctx->r1 = SIGNED(ctx->r3) < SIGNED(ctx->r17) ? 1 : 0;
    // 0x80266E14: beq         $at, $zero, L_80266DC8
    if (ctx->r1 == 0) {
        // 0x80266E18: sra         $v0, $t1, 16
        ctx->r2 = S32(SIGNED(ctx->r9) >> 16);
            goto L_80266DC8;
    }
    // 0x80266E18: sra         $v0, $t1, 16
    ctx->r2 = S32(SIGNED(ctx->r9) >> 16);
    // 0x80266E1C: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x80266E20: sll         $t3, $v0, 16
    ctx->r11 = S32(ctx->r2 << 16);
    // 0x80266E24: sra         $t4, $t3, 16
    ctx->r12 = S32(SIGNED(ctx->r11) >> 16);
    // 0x80266E28: sll         $t5, $t4, 1
    ctx->r13 = S32(ctx->r12 << 1);
    // 0x80266E2C: addu        $v1, $s0, $t5
    ctx->r3 = ADD32(ctx->r16, ctx->r13);
    // 0x80266E30: lh          $t8, 0x0($v1)
    ctx->r24 = MEM_H(ctx->r3, 0X0);
    // 0x80266E34: addiu       $s2, $s2, -0x1
    ctx->r18 = ADD32(ctx->r18, -0X1);
    // 0x80266E38: sll         $t7, $s2, 16
    ctx->r15 = S32(ctx->r18 << 16);
    // 0x80266E3C: sra         $s2, $t7, 16
    ctx->r18 = S32(SIGNED(ctx->r15) >> 16);
    // 0x80266E40: sb          $t8, 0x0($s3)
    MEM_B(0X0, ctx->r19) = ctx->r24;
    // 0x80266E44: addiu       $s3, $s3, 0x1
    ctx->r19 = ADD32(ctx->r19, 0X1);
    // 0x80266E48: bne         $s2, $zero, L_80266D9C
    if (ctx->r18 != 0) {
            // 0x80266E4C: sh          $s4, 0x0($v1)
    MEM_H(0X0, ctx->r3) = ctx->r20;
    ovl_8024B800_func_80266D9C(rdram, ctx);
    return;
    }
    // 0x80266E4C: sh          $s4, 0x0($v1)
    MEM_H(0X0, ctx->r3) = ctx->r20;
    // 0x80266E50: lw          $t9, 0x58($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X58);
    // 0x80266E54: lui         $s0, 0x8028
    ctx->r16 = S32(0X8028 << 16);
    // 0x80266E58: lbu         $t0, 0x1($t9)
    ctx->r8 = MEM_BU(ctx->r25, 0X1);
    // 0x80266E5C: lw          $a2, 0x30($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X30);
    // 0x80266E60: addu        $s0, $s0, $t0
    ctx->r16 = ADD32(ctx->r16, ctx->r8);
    // 0x80266E64: lbu         $s0, -0x3658($s0)
    ctx->r16 = MEM_BU(ctx->r16, -0X3658);
    // 0x80266E68: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x80266E6C: sll         $a1, $s0, 16
    ctx->r5 = S32(ctx->r16 << 16);
    // 0x80266E70: sra         $t1, $a1, 16
    ctx->r9 = S32(SIGNED(ctx->r5) >> 16);
    // 0x80266E74: jal         0x8005E00C
    // 0x80266E78: or          $a1, $t1, $zero
    ctx->r5 = ctx->r9 | 0;
    func_8005E00C(rdram, ctx);
        goto after_0;
    // 0x80266E78: or          $a1, $t1, $zero
    ctx->r5 = ctx->r9 | 0;
    after_0:
    // 0x80266E7C: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x80266E80: andi        $t2, $s0, 0xFF
    ctx->r10 = ctx->r16 & 0XFF;
    // 0x80266E84: sll         $a0, $t2, 16
    ctx->r4 = S32(ctx->r10 << 16);
    // 0x80266E88: sra         $t3, $a0, 16
    ctx->r11 = S32(SIGNED(ctx->r4) >> 16);
    // 0x80266E8C: lw          $a2, 0x30($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X30);
    // 0x80266E90: or          $a0, $t3, $zero
    ctx->r4 = ctx->r11 | 0;
    // 0x80266E94: jal         0x8005E00C
    // 0x80266E98: addiu       $a1, $zero, 0xA
    ctx->r5 = ADD32(0, 0XA);
    func_8005E00C(rdram, ctx);
        goto after_1;
    // 0x80266E98: addiu       $a1, $zero, 0xA
    ctx->r5 = ADD32(0, 0XA);
    after_1:
    // 0x80266E9C: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x80266EA0: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80266EA4: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x80266EA8: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x80266EAC: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x80266EB0: lw          $s4, 0x28($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X28);
    // 0x80266EB4: jr          $ra
    // 0x80266EB8: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
    return;
    // 0x80266EB8: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
;}
RECOMP_FUNC void ovl_8024B800_func_80266DCC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
L_80266D9C:
    // 0x80266DCC: addu        $t2, $s0, $t1
    ctx->r10 = ADD32(ctx->r16, ctx->r9);
L_80266DC8:
    // 0x80266DD0: lh          $t3, 0x0($t2)
    ctx->r11 = MEM_H(ctx->r10, 0X0);
    // 0x80266DD4: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x80266DD8: bgez        $t3, L_80266E04
    if (SIGNED(ctx->r11) >= 0) {
        // 0x80266DDC: sll         $t9, $s1, 16
        ctx->r25 = S32(ctx->r17 << 16);
            goto L_80266E04;
    }
    // 0x80266DDC: sll         $t9, $s1, 16
    ctx->r25 = S32(ctx->r17 << 16);
L_80266DE0:
    // 0x80266DE0: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80266DE4: sll         $t4, $v0, 16
    ctx->r12 = S32(ctx->r2 << 16);
    // 0x80266DE8: sra         $v0, $t4, 16
    ctx->r2 = S32(SIGNED(ctx->r12) >> 16);
    // 0x80266DEC: sll         $t8, $v0, 1
    ctx->r24 = S32(ctx->r2 << 1);
    // 0x80266DF0: addu        $t7, $s0, $t8
    ctx->r15 = ADD32(ctx->r16, ctx->r24);
    // 0x80266DF4: lh          $t6, 0x0($t7)
    ctx->r14 = MEM_H(ctx->r15, 0X0);
    // 0x80266DF8: nop

    // 0x80266DFC: bltz        $t6, L_80266DE0
    if (SIGNED(ctx->r14) < 0) {
        // 0x80266E00: nop
    
            goto L_80266DE0;
    }
    // 0x80266E00: nop

L_80266E04:
    // 0x80266E04: sra         $s1, $t9, 16
    ctx->r17 = S32(SIGNED(ctx->r25) >> 16);
    // 0x80266E08: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80266E0C: sll         $t1, $v0, 16
    ctx->r9 = S32(ctx->r2 << 16);
    // 0x80266E10: slt         $at, $v1, $s1
    ctx->r1 = SIGNED(ctx->r3) < SIGNED(ctx->r17) ? 1 : 0;
    // 0x80266E14: beq         $at, $zero, L_80266DC8
    if (ctx->r1 == 0) {
            // 0x80266E18: sra         $v0, $t1, 16
    ctx->r2 = S32(SIGNED(ctx->r9) >> 16);
    ovl_8024B800_func_80266DC8(rdram, ctx);
    return;
    }
    // 0x80266E18: sra         $v0, $t1, 16
    ctx->r2 = S32(SIGNED(ctx->r9) >> 16);
    // 0x80266E1C: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x80266E20: sll         $t3, $v0, 16
    ctx->r11 = S32(ctx->r2 << 16);
    // 0x80266E24: sra         $t4, $t3, 16
    ctx->r12 = S32(SIGNED(ctx->r11) >> 16);
    // 0x80266E28: sll         $t5, $t4, 1
    ctx->r13 = S32(ctx->r12 << 1);
    // 0x80266E2C: addu        $v1, $s0, $t5
    ctx->r3 = ADD32(ctx->r16, ctx->r13);
    // 0x80266E30: lh          $t8, 0x0($v1)
    ctx->r24 = MEM_H(ctx->r3, 0X0);
    // 0x80266E34: addiu       $s2, $s2, -0x1
    ctx->r18 = ADD32(ctx->r18, -0X1);
    // 0x80266E38: sll         $t7, $s2, 16
    ctx->r15 = S32(ctx->r18 << 16);
    // 0x80266E3C: sra         $s2, $t7, 16
    ctx->r18 = S32(SIGNED(ctx->r15) >> 16);
    // 0x80266E40: sb          $t8, 0x0($s3)
    MEM_B(0X0, ctx->r19) = ctx->r24;
    // 0x80266E44: addiu       $s3, $s3, 0x1
    ctx->r19 = ADD32(ctx->r19, 0X1);
    // 0x80266E48: bne         $s2, $zero, L_80266D9C
    if (ctx->r18 != 0) {
            // 0x80266E4C: sh          $s4, 0x0($v1)
    MEM_H(0X0, ctx->r3) = ctx->r20;
    ovl_8024B800_func_80266D9C(rdram, ctx);
    return;
    }
    // 0x80266E4C: sh          $s4, 0x0($v1)
    MEM_H(0X0, ctx->r3) = ctx->r20;
    // 0x80266E50: lw          $t9, 0x58($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X58);
    // 0x80266E54: lui         $s0, 0x8028
    ctx->r16 = S32(0X8028 << 16);
    // 0x80266E58: lbu         $t0, 0x1($t9)
    ctx->r8 = MEM_BU(ctx->r25, 0X1);
    // 0x80266E5C: lw          $a2, 0x30($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X30);
    // 0x80266E60: addu        $s0, $s0, $t0
    ctx->r16 = ADD32(ctx->r16, ctx->r8);
    // 0x80266E64: lbu         $s0, -0x3658($s0)
    ctx->r16 = MEM_BU(ctx->r16, -0X3658);
    // 0x80266E68: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x80266E6C: sll         $a1, $s0, 16
    ctx->r5 = S32(ctx->r16 << 16);
    // 0x80266E70: sra         $t1, $a1, 16
    ctx->r9 = S32(SIGNED(ctx->r5) >> 16);
    // 0x80266E74: jal         0x8005E00C
    // 0x80266E78: or          $a1, $t1, $zero
    ctx->r5 = ctx->r9 | 0;
    func_8005E00C(rdram, ctx);
        goto after_0;
    // 0x80266E78: or          $a1, $t1, $zero
    ctx->r5 = ctx->r9 | 0;
    after_0:
    // 0x80266E7C: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x80266E80: andi        $t2, $s0, 0xFF
    ctx->r10 = ctx->r16 & 0XFF;
    // 0x80266E84: sll         $a0, $t2, 16
    ctx->r4 = S32(ctx->r10 << 16);
    // 0x80266E88: sra         $t3, $a0, 16
    ctx->r11 = S32(SIGNED(ctx->r4) >> 16);
    // 0x80266E8C: lw          $a2, 0x30($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X30);
    // 0x80266E90: or          $a0, $t3, $zero
    ctx->r4 = ctx->r11 | 0;
    // 0x80266E94: jal         0x8005E00C
    // 0x80266E98: addiu       $a1, $zero, 0xA
    ctx->r5 = ADD32(0, 0XA);
    func_8005E00C(rdram, ctx);
        goto after_1;
    // 0x80266E98: addiu       $a1, $zero, 0xA
    ctx->r5 = ADD32(0, 0XA);
    after_1:
    // 0x80266E9C: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x80266EA0: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80266EA4: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x80266EA8: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x80266EAC: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x80266EB0: lw          $s4, 0x28($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X28);
    // 0x80266EB4: jr          $ra
    // 0x80266EB8: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
    return;
    // 0x80266EB8: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
;}
RECOMP_FUNC void ovl_8024B800_func_80266E94(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80266E94: jal         0x8005E00C
    // 0x80266E98: addiu       $a1, $zero, 0xA
    ctx->r5 = ADD32(0, 0XA);
    func_8005E00C(rdram, ctx);
        goto after_0;
    // 0x80266E98: addiu       $a1, $zero, 0xA
    ctx->r5 = ADD32(0, 0XA);
    after_0:
    // 0x80266E9C: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x80266EA0: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80266EA4: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x80266EA8: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x80266EAC: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x80266EB0: lw          $s4, 0x28($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X28);
    // 0x80266EB4: jr          $ra
    // 0x80266EB8: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
    return;
    // 0x80266EB8: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
;}
RECOMP_FUNC void ovl_8024B800_func_80266EBC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80266EBC: lui         $t6, 0x8009
    ctx->r14 = S32(0X8009 << 16);
    // 0x80266EC0: lw          $t6, 0x3B20($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X3B20);
    // 0x80266EC4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80266EC8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80266ECC: lw          $t7, 0x8C($t6)
    ctx->r15 = MEM_W(ctx->r14, 0X8C);
    // 0x80266ED0: lw          $t9, 0xC8($a0)
    ctx->r25 = MEM_W(ctx->r4, 0XC8);
    // 0x80266ED4: lw          $t8, 0xC8($t7)
    ctx->r24 = MEM_W(ctx->r15, 0XC8);
    // 0x80266ED8: or          $a2, $a0, $zero
    ctx->r6 = ctx->r4 | 0;
    // 0x80266EDC: beq         $t8, $t9, L_80266F0C
    if (ctx->r24 == ctx->r25) {
        // 0x80266EE0: lui         $v0, 0x803F
        ctx->r2 = S32(0X803F << 16);
            goto L_80266F0C;
    }
    // 0x80266EE0: lui         $v0, 0x803F
    ctx->r2 = S32(0X803F << 16);
    // 0x80266EE4: addiu       $v0, $v0, 0x7E08
    ctx->r2 = ADD32(ctx->r2, 0X7E08);
    // 0x80266EE8: addiu       $v1, $zero, 0xFF
    ctx->r3 = ADD32(0, 0XFF);
    // 0x80266EEC: sb          $v1, 0x3($v0)
    MEM_B(0X3, ctx->r2) = ctx->r3;
    // 0x80266EF0: sb          $v1, 0x2($v0)
    MEM_B(0X2, ctx->r2) = ctx->r3;
    // 0x80266EF4: sb          $v1, 0x1($v0)
    MEM_B(0X1, ctx->r2) = ctx->r3;
    // 0x80266EF8: sb          $v1, 0x0($v0)
    MEM_B(0X0, ctx->r2) = ctx->r3;
    // 0x80266EFC: sb          $v1, 0x7($v0)
    MEM_B(0X7, ctx->r2) = ctx->r3;
    // 0x80266F00: sb          $v1, 0x6($v0)
    MEM_B(0X6, ctx->r2) = ctx->r3;
    // 0x80266F04: sb          $v1, 0x5($v0)
    MEM_B(0X5, ctx->r2) = ctx->r3;
    // 0x80266F08: sb          $v1, 0x4($v0)
    MEM_B(0X4, ctx->r2) = ctx->r3;
L_80266F0C:
    // 0x80266F0C: beq         $a2, $a1, L_80266FC0
    if (ctx->r6 == ctx->r5) {
        // 0x80266F10: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_80266FC0;
    }
    // 0x80266F10: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80266F14: lw          $a0, 0xC8($a2)
    ctx->r4 = MEM_W(ctx->r6, 0XC8);
    // 0x80266F18: sw          $a2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r6;
    // 0x80266F1C: jal         0x80266D28
    // 0x80266F20: addiu       $a1, $a0, 0x8E1
    ctx->r5 = ADD32(ctx->r4, 0X8E1);
    ovl_8024B800_func_80266D28(rdram, ctx);
        goto after_0;
    // 0x80266F20: addiu       $a1, $a0, 0x8E1
    ctx->r5 = ADD32(ctx->r4, 0X8E1);
    after_0:
    // 0x80266F24: lw          $a2, 0x18($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X18);
    // 0x80266F28: nop

    // 0x80266F2C: lw          $a0, 0xC8($a2)
    ctx->r4 = MEM_W(ctx->r6, 0XC8);
    // 0x80266F30: jal         0x80266D28
    // 0x80266F34: addiu       $a1, $a0, 0x8EC
    ctx->r5 = ADD32(ctx->r4, 0X8EC);
    ovl_8024B800_func_80266D28(rdram, ctx);
        goto after_1;
    // 0x80266F34: addiu       $a1, $a0, 0x8EC
    ctx->r5 = ADD32(ctx->r4, 0X8EC);
    after_1:
    // 0x80266F38: lw          $a2, 0x18($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X18);
    // 0x80266F3C: nop

    // 0x80266F40: lw          $a0, 0xC8($a2)
    ctx->r4 = MEM_W(ctx->r6, 0XC8);
    // 0x80266F44: jal         0x80266CC8
    // 0x80266F48: nop

    ovl_8024B800_func_80266CC8(rdram, ctx);
        goto after_2;
    // 0x80266F48: nop

    after_2:
    // 0x80266F4C: lui         $a1, 0x8012
    ctx->r5 = S32(0X8012 << 16);
    // 0x80266F50: lui         $a2, 0x8012
    ctx->r6 = S32(0X8012 << 16);
    // 0x80266F54: addiu       $a2, $a2, -0x17C8
    ctx->r6 = ADD32(ctx->r6, -0X17C8);
    // 0x80266F58: addiu       $a1, $a1, -0x2CF0
    ctx->r5 = ADD32(ctx->r5, -0X2CF0);
    // 0x80266F5C: addiu       $a0, $zero, 0xB
    ctx->r4 = ADD32(0, 0XB);
L_80266F60:
    // 0x80266F60: lw          $v0, 0x18($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X18);
    // 0x80266F64: addiu       $v1, $zero, 0x3
    ctx->r3 = ADD32(0, 0X3);
    // 0x80266F68: sb          $zero, 0x2($v0)
    MEM_B(0X2, ctx->r2) = 0;
    // 0x80266F6C: sb          $zero, 0x1($v0)
    MEM_B(0X1, ctx->r2) = 0;
    // 0x80266F70: sb          $zero, 0xFA($v0)
    MEM_B(0XFA, ctx->r2) = 0;
    // 0x80266F74: sb          $zero, 0xF9($v0)
    MEM_B(0XF9, ctx->r2) = 0;
    // 0x80266F78: sb          $zero, 0x1F2($v0)
    MEM_B(0X1F2, ctx->r2) = 0;
    // 0x80266F7C: sb          $zero, 0x1F1($v0)
    MEM_B(0X1F1, ctx->r2) = 0;
    // 0x80266F80: addiu       $v0, $v0, 0x2E8
    ctx->r2 = ADD32(ctx->r2, 0X2E8);
L_80266F84:
    // 0x80266F84: addiu       $v1, $v1, 0x4
    ctx->r3 = ADD32(ctx->r3, 0X4);
    // 0x80266F88: sb          $zero, 0xFA($v0)
    MEM_B(0XFA, ctx->r2) = 0;
    // 0x80266F8C: sb          $zero, 0xF9($v0)
    MEM_B(0XF9, ctx->r2) = 0;
    // 0x80266F90: sb          $zero, 0x1F2($v0)
    MEM_B(0X1F2, ctx->r2) = 0;
    // 0x80266F94: sb          $zero, 0x1F1($v0)
    MEM_B(0X1F1, ctx->r2) = 0;
    // 0x80266F98: sb          $zero, 0x2EA($v0)
    MEM_B(0X2EA, ctx->r2) = 0;
    // 0x80266F9C: sb          $zero, 0x2E9($v0)
    MEM_B(0X2E9, ctx->r2) = 0;
    // 0x80266FA0: addiu       $v0, $v0, 0x3E0
    ctx->r2 = ADD32(ctx->r2, 0X3E0);
    // 0x80266FA4: sb          $zero, -0x3DE($v0)
    MEM_B(-0X3DE, ctx->r2) = 0;
    // 0x80266FA8: bne         $v1, $a0, L_80266F84
    if (ctx->r3 != ctx->r4) {
        // 0x80266FAC: sb          $zero, -0x3DF($v0)
        MEM_B(-0X3DF, ctx->r2) = 0;
            goto L_80266F84;
    }
    // 0x80266FAC: sb          $zero, -0x3DF($v0)
    MEM_B(-0X3DF, ctx->r2) = 0;
    // 0x80266FB0: addiu       $a1, $a1, 0xA94
    ctx->r5 = ADD32(ctx->r5, 0XA94);
    // 0x80266FB4: bne         $a1, $a2, L_80266F60
    if (ctx->r5 != ctx->r6) {
        // 0x80266FB8: nop
    
            goto L_80266F60;
    }
    // 0x80266FB8: nop

    // 0x80266FBC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80266FC0:
    // 0x80266FC0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80266FC4: jr          $ra
    // 0x80266FC8: nop

    return;
    // 0x80266FC8: nop

;}
RECOMP_FUNC void ovl_8024B800_func_80266FC4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80266FC4: jr          $ra
    // 0x80266FC8: nop

    return;
    // 0x80266FC8: nop

;}
RECOMP_FUNC void ovl_8024B800_func_80266FCC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80266FCC: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80266FD0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80266FD4: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x80266FD8: lh          $t7, 0x8B8($a0)
    ctx->r15 = MEM_H(ctx->r4, 0X8B8);
    // 0x80266FDC: lui         $v0, 0x8009
    ctx->r2 = S32(0X8009 << 16);
    // 0x80266FE0: mtc1        $t7, $f6
    ctx->f6.u32l = ctx->r15;
    // 0x80266FE4: lw          $v0, 0x3B20($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X3B20);
    // 0x80266FE8: cvt.s.w     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.fl = CVT_S_W(ctx->f6.u32l);
    // 0x80266FEC: lwc1        $f4, 0x8($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X8);
    // 0x80266FF0: lwc1        $f0, 0x0($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X0);
    // 0x80266FF4: sub.s       $f14, $f4, $f8
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f14.fl = ctx->f4.fl - ctx->f8.fl;
    // 0x80266FF8: swc1        $f0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f0.u32l;
    // 0x80266FFC: mul.s       $f10, $f14, $f14
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f10.fl = MUL_S(ctx->f14.fl, ctx->f14.fl);
    // 0x80267000: swc1        $f14, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f14.u32l;
    // 0x80267004: mul.s       $f16, $f0, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f16.fl = MUL_S(ctx->f0.fl, ctx->f0.fl);
    // 0x80267008: jal         0x8007FA40
    // 0x8026700C: add.s       $f12, $f10, $f16
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f12.fl = ctx->f10.fl + ctx->f16.fl;
    func_8007FA40(rdram, ctx);
        goto after_0;
    // 0x8026700C: add.s       $f12, $f10, $f16
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f12.fl = ctx->f10.fl + ctx->f16.fl;
    after_0:
    // 0x80267010: lw          $t8, 0x20($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X20);
    // 0x80267014: lwc1        $f14, 0x18($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X18);
    // 0x80267018: swc1        $f0, 0x8BC($t8)
    MEM_W(0X8BC, ctx->r24) = ctx->f0.u32l;
    // 0x8026701C: lwc1        $f12, 0x1C($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x80267020: jal         0x8001C5D0
    // 0x80267024: nop

    func_8001C5D0(rdram, ctx);
        goto after_1;
    // 0x80267024: nop

    after_1:
    // 0x80267028: lw          $t9, 0x20($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X20);
    // 0x8026702C: nop

    // 0x80267030: swc1        $f0, 0x8C0($t9)
    MEM_W(0X8C0, ctx->r25) = ctx->f0.u32l;
    // 0x80267034: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80267038: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x8026703C: jr          $ra
    // 0x80267040: nop

    return;
    // 0x80267040: nop

;}
RECOMP_FUNC void ovl_8024B800_func_80267044(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80267044: lui         $at, 0x8028
    ctx->r1 = S32(0X8028 << 16);
    // 0x80267048: lwc1        $f13, -0x2D28($at)
    ctx->f_odd[(13 - 1) * 2] = MEM_W(ctx->r1, -0X2D28);
    // 0x8026704C: lwc1        $f12, -0x2D24($at)
    ctx->f12.u32l = MEM_W(ctx->r1, -0X2D24);
    // 0x80267050: lui         $at, 0x8028
    ctx->r1 = S32(0X8028 << 16);
    // 0x80267054: lwc1        $f4, 0x8C0($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X8C0);
    // 0x80267058: lwc1        $f9, -0x2D20($at)
    ctx->f_odd[(9 - 1) * 2] = MEM_W(ctx->r1, -0X2D20);
    // 0x8026705C: lwc1        $f8, -0x2D1C($at)
    ctx->f8.u32l = MEM_W(ctx->r1, -0X2D1C);
    // 0x80267060: cvt.d.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.d = CVT_D_S(ctx->f4.fl);
    // 0x80267064: add.d       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f8.d); 
    ctx->f10.d = ctx->f6.d + ctx->f8.d;
    // 0x80267068: cvt.s.d     $f2, $f10
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f2.fl = CVT_S_D(ctx->f10.d);
    // 0x8026706C: cvt.d.s     $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f0.d = CVT_D_S(ctx->f2.fl);
    // 0x80267070: c.le.d      $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f12.d <= ctx->f0.d;
    // 0x80267074: nop

    // 0x80267078: bc1f        L_80267088
    if (!c1cs) {
        // 0x8026707C: nop
    
            goto L_80267088;
    }
    // 0x8026707C: nop

    // 0x80267080: sub.d       $f16, $f0, $f12
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f0.d); NAN_CHECK(ctx->f12.d); 
    ctx->f16.d = ctx->f0.d - ctx->f12.d;
    // 0x80267084: cvt.s.d     $f2, $f16
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.d); 
    ctx->f2.fl = CVT_S_D(ctx->f16.d);
L_80267088:
    // 0x80267088: jr          $ra
    // 0x8026708C: mov.s       $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    ctx->f0.fl = ctx->f2.fl;
    return;
    // 0x8026708C: mov.s       $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    ctx->f0.fl = ctx->f2.fl;
;}
RECOMP_FUNC void ovl_8024B800_func_80267090(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80267090: addiu       $sp, $sp, -0x78
    ctx->r29 = ADD32(ctx->r29, -0X78);
    // 0x80267094: sw          $ra, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r31;
    // 0x80267098: sw          $s6, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r22;
    // 0x8026709C: sw          $s5, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r21;
    // 0x802670A0: sw          $s4, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r20;
    // 0x802670A4: sw          $s3, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r19;
    // 0x802670A8: sw          $s2, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r18;
    // 0x802670AC: sw          $s1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r17;
    // 0x802670B0: sw          $s0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r16;
    // 0x802670B4: swc1        $f25, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f_odd[(25 - 1) * 2];
    // 0x802670B8: swc1        $f24, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f24.u32l;
    // 0x802670BC: swc1        $f23, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f_odd[(23 - 1) * 2];
    // 0x802670C0: swc1        $f22, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f22.u32l;
    // 0x802670C4: swc1        $f21, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x802670C8: swc1        $f20, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f20.u32l;
    // 0x802670CC: addiu       $t6, $zero, -0x1
    ctx->r14 = ADD32(0, -0X1);
    // 0x802670D0: or          $s4, $a0, $zero
    ctx->r20 = ctx->r4 | 0;
    // 0x802670D4: or          $s3, $zero, $zero
    ctx->r19 = 0 | 0;
    // 0x802670D8: or          $s2, $zero, $zero
    ctx->r18 = 0 | 0;
    // 0x802670DC: jal         0x80267044
    // 0x802670E0: sb          $t6, 0x8DC($a0)
    MEM_B(0X8DC, ctx->r4) = ctx->r14;
    ovl_8024B800_func_80267044(rdram, ctx);
        goto after_0;
    // 0x802670E0: sb          $t6, 0x8DC($a0)
    MEM_B(0X8DC, ctx->r4) = ctx->r14;
    after_0:
    // 0x802670E4: lui         $at, 0x8028
    ctx->r1 = S32(0X8028 << 16);
    // 0x802670E8: lwc1        $f23, -0x2D18($at)
    ctx->f_odd[(23 - 1) * 2] = MEM_W(ctx->r1, -0X2D18);
    // 0x802670EC: lwc1        $f22, -0x2D14($at)
    ctx->f22.u32l = MEM_W(ctx->r1, -0X2D14);
    // 0x802670F0: lui         $at, 0x8028
    ctx->r1 = S32(0X8028 << 16);
    // 0x802670F4: addiu       $s0, $s4, 0x318
    ctx->r16 = ADD32(ctx->r20, 0X318);
    // 0x802670F8: lwc1        $f21, -0x2D10($at)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r1, -0X2D10);
    // 0x802670FC: lwc1        $f20, -0x2D0C($at)
    ctx->f20.u32l = MEM_W(ctx->r1, -0X2D0C);
    // 0x80267100: mov.s       $f24, $f0
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 0);
    ctx->f24.fl = ctx->f0.fl;
    // 0x80267104: sw          $s0, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r16;
    // 0x80267108: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    // 0x8026710C: addiu       $s6, $zero, 0x58
    ctx->r22 = ADD32(0, 0X58);
    // 0x80267110: addiu       $s5, $zero, 0xF8
    ctx->r21 = ADD32(0, 0XF8);
L_80267114:
    // 0x80267114: lhu         $t8, 0x0($s0)
    ctx->r24 = MEM_HU(ctx->r16, 0X0);
    // 0x80267118: lw          $t0, 0x18($s4)
    ctx->r8 = MEM_W(ctx->r20, 0X18);
    // 0x8026711C: multu       $t8, $s5
    result = U64(U32(ctx->r24)) * U64(U32(ctx->r21)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80267120: mflo        $t9
    ctx->r25 = lo;
    // 0x80267124: addu        $v1, $t9, $t0
    ctx->r3 = ADD32(ctx->r25, ctx->r8);
    // 0x80267128: lhu         $t1, 0xC($v1)
    ctx->r9 = MEM_HU(ctx->r3, 0XC);
    // 0x8026712C: nop

    // 0x80267130: beq         $t1, $zero, L_8026718C
    if (ctx->r9 == 0) {
        // 0x80267134: nop
    
            goto L_8026718C;
    }
    // 0x80267134: nop

    // 0x80267138: lhu         $t2, 0x1A($v1)
    ctx->r10 = MEM_HU(ctx->r3, 0X1A);
    // 0x8026713C: nop

    // 0x80267140: beq         $t2, $zero, L_8026718C
    if (ctx->r10 == 0) {
        // 0x80267144: nop
    
            goto L_8026718C;
    }
    // 0x80267144: nop

    // 0x80267148: lwc1        $f12, 0x88($v1)
    ctx->f12.u32l = MEM_W(ctx->r3, 0X88);
    // 0x8026714C: jal         0x80279308
    // 0x80267150: mov.s       $f14, $f24
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 24);
    ctx->f14.fl = ctx->f24.fl;
    ovl_8024B800_func_80279308(rdram, ctx);
        goto after_1;
    // 0x80267150: mov.s       $f14, $f24
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 24);
    ctx->f14.fl = ctx->f24.fl;
    after_1:
    // 0x80267154: cvt.d.s     $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f2.d = CVT_D_S(ctx->f0.fl);
    // 0x80267158: c.lt.d      $f2, $f20
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 20);
    c1cs = ctx->f2.d < ctx->f20.d;
    // 0x8026715C: nop

    // 0x80267160: bc1f        L_80267178
    if (!c1cs) {
        // 0x80267164: nop
    
            goto L_80267178;
    }
    // 0x80267164: nop

    // 0x80267168: bne         $s3, $zero, L_80267178
    if (ctx->r19 != 0) {
        // 0x8026716C: nop
    
            goto L_80267178;
    }
    // 0x8026716C: nop

    // 0x80267170: lhu         $s3, 0x0($s0)
    ctx->r19 = MEM_HU(ctx->r16, 0X0);
    // 0x80267174: nop

L_80267178:
    // 0x80267178: c.lt.d      $f2, $f22
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 22);
    c1cs = ctx->f2.d < ctx->f22.d;
    // 0x8026717C: nop

    // 0x80267180: bc1f        L_8026718C
    if (!c1cs) {
        // 0x80267184: nop
    
            goto L_8026718C;
    }
    // 0x80267184: nop

    // 0x80267188: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
L_8026718C:
    // 0x8026718C: addiu       $s1, $s1, 0x8
    ctx->r17 = ADD32(ctx->r17, 0X8);
    // 0x80267190: bne         $s1, $s6, L_80267114
    if (ctx->r17 != ctx->r22) {
        // 0x80267194: addiu       $s0, $s0, 0x8
        ctx->r16 = ADD32(ctx->r16, 0X8);
            goto L_80267114;
    }
    // 0x80267194: addiu       $s0, $s0, 0x8
    ctx->r16 = ADD32(ctx->r16, 0X8);
    // 0x80267198: bne         $s2, $zero, L_802671B0
    if (ctx->r18 != 0) {
        // 0x8026719C: addiu       $a2, $zero, 0xF8
        ctx->r6 = ADD32(0, 0XF8);
            goto L_802671B0;
    }
    // 0x8026719C: addiu       $a2, $zero, 0xF8
    ctx->r6 = ADD32(0, 0XF8);
    // 0x802671A0: lhu         $t3, 0x10($s4)
    ctx->r11 = MEM_HU(ctx->r20, 0X10);
    // 0x802671A4: nop

    // 0x802671A8: ori         $t4, $t3, 0x1
    ctx->r12 = ctx->r11 | 0X1;
    // 0x802671AC: sh          $t4, 0x10($s4)
    MEM_H(0X10, ctx->r20) = ctx->r12;
L_802671B0:
    // 0x802671B0: beq         $s3, $zero, L_8026723C
    if (ctx->r19 == 0) {
        // 0x802671B4: lw          $a1, 0x54($sp)
        ctx->r5 = MEM_W(ctx->r29, 0X54);
            goto L_8026723C;
    }
    // 0x802671B4: lw          $a1, 0x54($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X54);
    // 0x802671B8: lb          $a0, 0x8DD($s4)
    ctx->r4 = MEM_B(ctx->r20, 0X8DD);
    // 0x802671BC: nop

    // 0x802671C0: beq         $s3, $a0, L_802671CC
    if (ctx->r19 == ctx->r4) {
        // 0x802671C4: nop
    
            goto L_802671CC;
    }
    // 0x802671C4: nop

    // 0x802671C8: sb          $a0, 0x8DE($s4)
    MEM_B(0X8DE, ctx->r20) = ctx->r4;
L_802671CC:
    // 0x802671CC: multu       $s3, $a2
    result = U64(U32(ctx->r19)) * U64(U32(ctx->r6)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x802671D0: lw          $v0, 0x18($s4)
    ctx->r2 = MEM_W(ctx->r20, 0X18);
    // 0x802671D4: sb          $s3, 0x8DC($s4)
    MEM_B(0X8DC, ctx->r20) = ctx->r19;
    // 0x802671D8: mflo        $t5
    ctx->r13 = lo;
    // 0x802671DC: addu        $a1, $v0, $t5
    ctx->r5 = ADD32(ctx->r2, ctx->r13);
    // 0x802671E0: beq         $s3, $a0, L_8026722C
    if (ctx->r19 == ctx->r4) {
        // 0x802671E4: nop
    
            goto L_8026722C;
    }
    // 0x802671E4: nop

    // 0x802671E8: blez        $a0, L_8026722C
    if (SIGNED(ctx->r4) <= 0) {
        // 0x802671EC: nop
    
            goto L_8026722C;
    }
    // 0x802671EC: nop

    // 0x802671F0: multu       $a0, $a2
    result = U64(U32(ctx->r4)) * U64(U32(ctx->r6)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x802671F4: lwc1        $f6, 0x84($a1)
    ctx->f6.u32l = MEM_W(ctx->r5, 0X84);
    // 0x802671F8: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x802671FC: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80267200: mflo        $t6
    ctx->r14 = lo;
    // 0x80267204: addu        $v1, $v0, $t6
    ctx->r3 = ADD32(ctx->r2, ctx->r14);
    // 0x80267208: lwc1        $f8, 0x84($v1)
    ctx->f8.u32l = MEM_W(ctx->r3, 0X84);
    // 0x8026720C: nop

    // 0x80267210: sub.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl - ctx->f8.fl;
    // 0x80267214: c.lt.s      $f4, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f4.fl < ctx->f10.fl;
    // 0x80267218: nop

    // 0x8026721C: bc1f        L_8026722C
    if (!c1cs) {
        // 0x80267220: nop
    
            goto L_8026722C;
    }
    // 0x80267220: nop

    // 0x80267224: b           L_80267274
    // 0x80267228: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
        goto L_80267274;
    // 0x80267228: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
L_8026722C:
    // 0x8026722C: sb          $s3, 0x8DD($s4)
    MEM_B(0X8DD, ctx->r20) = ctx->r19;
    // 0x80267230: b           L_80267274
    // 0x80267234: or          $v0, $a1, $zero
    ctx->r2 = ctx->r5 | 0;
        goto L_80267274;
    // 0x80267234: or          $v0, $a1, $zero
    ctx->r2 = ctx->r5 | 0;
    // 0x80267238: lw          $a1, 0x54($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X54);
L_8026723C:
    // 0x8026723C: jal         0x802636CC
    // 0x80267240: or          $a0, $s4, $zero
    ctx->r4 = ctx->r20 | 0;
    ovl_8024B800_func_802636CC(rdram, ctx);
        goto after_2;
    // 0x80267240: or          $a0, $s4, $zero
    ctx->r4 = ctx->r20 | 0;
    after_2:
    // 0x80267244: lb          $a0, 0x8DD($s4)
    ctx->r4 = MEM_B(ctx->r20, 0X8DD);
    // 0x80267248: lhu         $t7, 0x1A($v0)
    ctx->r15 = MEM_HU(ctx->r2, 0X1A);
    // 0x8026724C: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
    // 0x80267250: beq         $a0, $t7, L_8026725C
    if (ctx->r4 == ctx->r15) {
        // 0x80267254: nop
    
            goto L_8026725C;
    }
    // 0x80267254: nop

    // 0x80267258: sb          $a0, 0x8DE($s4)
    MEM_B(0X8DE, ctx->r20) = ctx->r4;
L_8026725C:
    // 0x8026725C: lhu         $t8, 0x1A($v1)
    ctx->r24 = MEM_HU(ctx->r3, 0X1A);
    // 0x80267260: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    // 0x80267264: sb          $t8, 0x8DC($s4)
    MEM_B(0X8DC, ctx->r20) = ctx->r24;
    // 0x80267268: lhu         $t9, 0x1A($v1)
    ctx->r25 = MEM_HU(ctx->r3, 0X1A);
    // 0x8026726C: nop

    // 0x80267270: sb          $t9, 0x8DD($s4)
    MEM_B(0X8DD, ctx->r20) = ctx->r25;
L_80267274:
    // 0x80267274: lw          $ra, 0x4C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X4C);
    // 0x80267278: lwc1        $f21, 0x18($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X18);
    // 0x8026727C: lwc1        $f20, 0x1C($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x80267280: lwc1        $f23, 0x20($sp)
    ctx->f_odd[(23 - 1) * 2] = MEM_W(ctx->r29, 0X20);
    // 0x80267284: lwc1        $f22, 0x24($sp)
    ctx->f22.u32l = MEM_W(ctx->r29, 0X24);
    // 0x80267288: lwc1        $f25, 0x28($sp)
    ctx->f_odd[(25 - 1) * 2] = MEM_W(ctx->r29, 0X28);
    // 0x8026728C: lwc1        $f24, 0x2C($sp)
    ctx->f24.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x80267290: lw          $s0, 0x30($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X30);
    // 0x80267294: lw          $s1, 0x34($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X34);
    // 0x80267298: lw          $s2, 0x38($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X38);
    // 0x8026729C: lw          $s3, 0x3C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X3C);
    // 0x802672A0: lw          $s4, 0x40($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X40);
    // 0x802672A4: lw          $s5, 0x44($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X44);
    // 0x802672A8: lw          $s6, 0x48($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X48);
    // 0x802672AC: jr          $ra
    // 0x802672B0: addiu       $sp, $sp, 0x78
    ctx->r29 = ADD32(ctx->r29, 0X78);
    return;
    // 0x802672B0: addiu       $sp, $sp, 0x78
    ctx->r29 = ADD32(ctx->r29, 0X78);
;}
RECOMP_FUNC void ovl_8024B800_func_80267110(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80267110: addiu       $s5, $zero, 0xF8
    ctx->r21 = ADD32(0, 0XF8);
L_80267114:
    // 0x80267114: lhu         $t8, 0x0($s0)
    ctx->r24 = MEM_HU(ctx->r16, 0X0);
    // 0x80267118: lw          $t0, 0x18($s4)
    ctx->r8 = MEM_W(ctx->r20, 0X18);
    // 0x8026711C: multu       $t8, $s5
    result = U64(U32(ctx->r24)) * U64(U32(ctx->r21)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80267120: mflo        $t9
    ctx->r25 = lo;
    // 0x80267124: addu        $v1, $t9, $t0
    ctx->r3 = ADD32(ctx->r25, ctx->r8);
    // 0x80267128: lhu         $t1, 0xC($v1)
    ctx->r9 = MEM_HU(ctx->r3, 0XC);
    // 0x8026712C: nop

    // 0x80267130: beq         $t1, $zero, L_8026718C
    if (ctx->r9 == 0) {
        // 0x80267134: nop
    
            goto L_8026718C;
    }
    // 0x80267134: nop

    // 0x80267138: lhu         $t2, 0x1A($v1)
    ctx->r10 = MEM_HU(ctx->r3, 0X1A);
    // 0x8026713C: nop

    // 0x80267140: beq         $t2, $zero, L_8026718C
    if (ctx->r10 == 0) {
        // 0x80267144: nop
    
            goto L_8026718C;
    }
    // 0x80267144: nop

    // 0x80267148: lwc1        $f12, 0x88($v1)
    ctx->f12.u32l = MEM_W(ctx->r3, 0X88);
    // 0x8026714C: jal         0x80279308
    // 0x80267150: mov.s       $f14, $f24
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 24);
    ctx->f14.fl = ctx->f24.fl;
    ovl_8024B800_func_80279308(rdram, ctx);
        goto after_0;
    // 0x80267150: mov.s       $f14, $f24
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 24);
    ctx->f14.fl = ctx->f24.fl;
    after_0:
    // 0x80267154: cvt.d.s     $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f2.d = CVT_D_S(ctx->f0.fl);
    // 0x80267158: c.lt.d      $f2, $f20
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 20);
    c1cs = ctx->f2.d < ctx->f20.d;
    // 0x8026715C: nop

    // 0x80267160: bc1f        L_80267178
    if (!c1cs) {
        // 0x80267164: nop
    
            goto L_80267178;
    }
    // 0x80267164: nop

    // 0x80267168: bne         $s3, $zero, L_80267178
    if (ctx->r19 != 0) {
        // 0x8026716C: nop
    
            goto L_80267178;
    }
    // 0x8026716C: nop

    // 0x80267170: lhu         $s3, 0x0($s0)
    ctx->r19 = MEM_HU(ctx->r16, 0X0);
    // 0x80267174: nop

L_80267178:
    // 0x80267178: c.lt.d      $f2, $f22
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 22);
    c1cs = ctx->f2.d < ctx->f22.d;
    // 0x8026717C: nop

    // 0x80267180: bc1f        L_8026718C
    if (!c1cs) {
        // 0x80267184: nop
    
            goto L_8026718C;
    }
    // 0x80267184: nop

    // 0x80267188: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
L_8026718C:
    // 0x8026718C: addiu       $s1, $s1, 0x8
    ctx->r17 = ADD32(ctx->r17, 0X8);
    // 0x80267190: bne         $s1, $s6, L_80267114
    if (ctx->r17 != ctx->r22) {
        // 0x80267194: addiu       $s0, $s0, 0x8
        ctx->r16 = ADD32(ctx->r16, 0X8);
            goto L_80267114;
    }
    // 0x80267194: addiu       $s0, $s0, 0x8
    ctx->r16 = ADD32(ctx->r16, 0X8);
    // 0x80267198: bne         $s2, $zero, L_802671B0
    if (ctx->r18 != 0) {
        // 0x8026719C: addiu       $a2, $zero, 0xF8
        ctx->r6 = ADD32(0, 0XF8);
            goto L_802671B0;
    }
    // 0x8026719C: addiu       $a2, $zero, 0xF8
    ctx->r6 = ADD32(0, 0XF8);
    // 0x802671A0: lhu         $t3, 0x10($s4)
    ctx->r11 = MEM_HU(ctx->r20, 0X10);
    // 0x802671A4: nop

    // 0x802671A8: ori         $t4, $t3, 0x1
    ctx->r12 = ctx->r11 | 0X1;
    // 0x802671AC: sh          $t4, 0x10($s4)
    MEM_H(0X10, ctx->r20) = ctx->r12;
L_802671B0:
    // 0x802671B0: beq         $s3, $zero, L_8026723C
    if (ctx->r19 == 0) {
        // 0x802671B4: lw          $a1, 0x54($sp)
        ctx->r5 = MEM_W(ctx->r29, 0X54);
            goto L_8026723C;
    }
    // 0x802671B4: lw          $a1, 0x54($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X54);
    // 0x802671B8: lb          $a0, 0x8DD($s4)
    ctx->r4 = MEM_B(ctx->r20, 0X8DD);
    // 0x802671BC: nop

    // 0x802671C0: beq         $s3, $a0, L_802671CC
    if (ctx->r19 == ctx->r4) {
        // 0x802671C4: nop
    
            goto L_802671CC;
    }
    // 0x802671C4: nop

    // 0x802671C8: sb          $a0, 0x8DE($s4)
    MEM_B(0X8DE, ctx->r20) = ctx->r4;
L_802671CC:
    // 0x802671CC: multu       $s3, $a2
    result = U64(U32(ctx->r19)) * U64(U32(ctx->r6)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x802671D0: lw          $v0, 0x18($s4)
    ctx->r2 = MEM_W(ctx->r20, 0X18);
    // 0x802671D4: sb          $s3, 0x8DC($s4)
    MEM_B(0X8DC, ctx->r20) = ctx->r19;
    // 0x802671D8: mflo        $t5
    ctx->r13 = lo;
    // 0x802671DC: addu        $a1, $v0, $t5
    ctx->r5 = ADD32(ctx->r2, ctx->r13);
    // 0x802671E0: beq         $s3, $a0, L_8026722C
    if (ctx->r19 == ctx->r4) {
        // 0x802671E4: nop
    
            goto L_8026722C;
    }
    // 0x802671E4: nop

    // 0x802671E8: blez        $a0, L_8026722C
    if (SIGNED(ctx->r4) <= 0) {
        // 0x802671EC: nop
    
            goto L_8026722C;
    }
    // 0x802671EC: nop

    // 0x802671F0: multu       $a0, $a2
    result = U64(U32(ctx->r4)) * U64(U32(ctx->r6)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x802671F4: lwc1        $f6, 0x84($a1)
    ctx->f6.u32l = MEM_W(ctx->r5, 0X84);
    // 0x802671F8: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x802671FC: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80267200: mflo        $t6
    ctx->r14 = lo;
    // 0x80267204: addu        $v1, $v0, $t6
    ctx->r3 = ADD32(ctx->r2, ctx->r14);
    // 0x80267208: lwc1        $f8, 0x84($v1)
    ctx->f8.u32l = MEM_W(ctx->r3, 0X84);
    // 0x8026720C: nop

    // 0x80267210: sub.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl - ctx->f8.fl;
    // 0x80267214: c.lt.s      $f4, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f4.fl < ctx->f10.fl;
    // 0x80267218: nop

    // 0x8026721C: bc1f        L_8026722C
    if (!c1cs) {
        // 0x80267220: nop
    
            goto L_8026722C;
    }
    // 0x80267220: nop

    // 0x80267224: b           L_80267274
    // 0x80267228: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
        goto L_80267274;
    // 0x80267228: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
L_8026722C:
    // 0x8026722C: sb          $s3, 0x8DD($s4)
    MEM_B(0X8DD, ctx->r20) = ctx->r19;
    // 0x80267230: b           L_80267274
    // 0x80267234: or          $v0, $a1, $zero
    ctx->r2 = ctx->r5 | 0;
        goto L_80267274;
    // 0x80267234: or          $v0, $a1, $zero
    ctx->r2 = ctx->r5 | 0;
    // 0x80267238: lw          $a1, 0x54($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X54);
L_8026723C:
    // 0x8026723C: jal         0x802636CC
    // 0x80267240: or          $a0, $s4, $zero
    ctx->r4 = ctx->r20 | 0;
    ovl_8024B800_func_802636CC(rdram, ctx);
        goto after_1;
    // 0x80267240: or          $a0, $s4, $zero
    ctx->r4 = ctx->r20 | 0;
    after_1:
    // 0x80267244: lb          $a0, 0x8DD($s4)
    ctx->r4 = MEM_B(ctx->r20, 0X8DD);
    // 0x80267248: lhu         $t7, 0x1A($v0)
    ctx->r15 = MEM_HU(ctx->r2, 0X1A);
    // 0x8026724C: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
    // 0x80267250: beq         $a0, $t7, L_8026725C
    if (ctx->r4 == ctx->r15) {
        // 0x80267254: nop
    
            goto L_8026725C;
    }
    // 0x80267254: nop

    // 0x80267258: sb          $a0, 0x8DE($s4)
    MEM_B(0X8DE, ctx->r20) = ctx->r4;
L_8026725C:
    // 0x8026725C: lhu         $t8, 0x1A($v1)
    ctx->r24 = MEM_HU(ctx->r3, 0X1A);
    // 0x80267260: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    // 0x80267264: sb          $t8, 0x8DC($s4)
    MEM_B(0X8DC, ctx->r20) = ctx->r24;
    // 0x80267268: lhu         $t9, 0x1A($v1)
    ctx->r25 = MEM_HU(ctx->r3, 0X1A);
    // 0x8026726C: nop

    // 0x80267270: sb          $t9, 0x8DD($s4)
    MEM_B(0X8DD, ctx->r20) = ctx->r25;
L_80267274:
    // 0x80267274: lw          $ra, 0x4C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X4C);
    // 0x80267278: lwc1        $f21, 0x18($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X18);
    // 0x8026727C: lwc1        $f20, 0x1C($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x80267280: lwc1        $f23, 0x20($sp)
    ctx->f_odd[(23 - 1) * 2] = MEM_W(ctx->r29, 0X20);
    // 0x80267284: lwc1        $f22, 0x24($sp)
    ctx->f22.u32l = MEM_W(ctx->r29, 0X24);
    // 0x80267288: lwc1        $f25, 0x28($sp)
    ctx->f_odd[(25 - 1) * 2] = MEM_W(ctx->r29, 0X28);
    // 0x8026728C: lwc1        $f24, 0x2C($sp)
    ctx->f24.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x80267290: lw          $s0, 0x30($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X30);
    // 0x80267294: lw          $s1, 0x34($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X34);
    // 0x80267298: lw          $s2, 0x38($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X38);
    // 0x8026729C: lw          $s3, 0x3C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X3C);
    // 0x802672A0: lw          $s4, 0x40($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X40);
    // 0x802672A4: lw          $s5, 0x44($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X44);
    // 0x802672A8: lw          $s6, 0x48($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X48);
    // 0x802672AC: jr          $ra
    // 0x802672B0: addiu       $sp, $sp, 0x78
    ctx->r29 = ADD32(ctx->r29, 0X78);
    return;
    // 0x802672B0: addiu       $sp, $sp, 0x78
    ctx->r29 = ADD32(ctx->r29, 0X78);
;}
RECOMP_FUNC void ovl_8024B800_func_802671B4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802671B4: lw          $a1, 0x54($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X54);
    // 0x802671B8: lb          $a0, 0x8DD($s4)
    ctx->r4 = MEM_B(ctx->r20, 0X8DD);
    // 0x802671BC: nop

    // 0x802671C0: beq         $s3, $a0, L_802671CC
    if (ctx->r19 == ctx->r4) {
        // 0x802671C4: nop
    
            goto L_802671CC;
    }
    // 0x802671C4: nop

    // 0x802671C8: sb          $a0, 0x8DE($s4)
    MEM_B(0X8DE, ctx->r20) = ctx->r4;
L_802671CC:
    // 0x802671CC: multu       $s3, $a2
    result = U64(U32(ctx->r19)) * U64(U32(ctx->r6)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x802671D0: lw          $v0, 0x18($s4)
    ctx->r2 = MEM_W(ctx->r20, 0X18);
    // 0x802671D4: sb          $s3, 0x8DC($s4)
    MEM_B(0X8DC, ctx->r20) = ctx->r19;
    // 0x802671D8: mflo        $t5
    ctx->r13 = lo;
    // 0x802671DC: addu        $a1, $v0, $t5
    ctx->r5 = ADD32(ctx->r2, ctx->r13);
    // 0x802671E0: beq         $s3, $a0, L_8026722C
    if (ctx->r19 == ctx->r4) {
        // 0x802671E4: nop
    
            goto L_8026722C;
    }
    // 0x802671E4: nop

    // 0x802671E8: blez        $a0, L_8026722C
    if (SIGNED(ctx->r4) <= 0) {
        // 0x802671EC: nop
    
            goto L_8026722C;
    }
    // 0x802671EC: nop

    // 0x802671F0: multu       $a0, $a2
    result = U64(U32(ctx->r4)) * U64(U32(ctx->r6)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x802671F4: lwc1        $f6, 0x84($a1)
    ctx->f6.u32l = MEM_W(ctx->r5, 0X84);
    // 0x802671F8: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x802671FC: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80267200: mflo        $t6
    ctx->r14 = lo;
    // 0x80267204: addu        $v1, $v0, $t6
    ctx->r3 = ADD32(ctx->r2, ctx->r14);
    // 0x80267208: lwc1        $f8, 0x84($v1)
    ctx->f8.u32l = MEM_W(ctx->r3, 0X84);
    // 0x8026720C: nop

    // 0x80267210: sub.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl - ctx->f8.fl;
    // 0x80267214: c.lt.s      $f4, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f4.fl < ctx->f10.fl;
    // 0x80267218: nop

    // 0x8026721C: bc1f        L_8026722C
    if (!c1cs) {
        // 0x80267220: nop
    
            goto L_8026722C;
    }
    // 0x80267220: nop

    // 0x80267224: b           L_80267274
    // 0x80267228: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
        goto L_80267274;
    // 0x80267228: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
L_8026722C:
    // 0x8026722C: sb          $s3, 0x8DD($s4)
    MEM_B(0X8DD, ctx->r20) = ctx->r19;
    // 0x80267230: b           L_80267274
    // 0x80267234: or          $v0, $a1, $zero
    ctx->r2 = ctx->r5 | 0;
        goto L_80267274;
    // 0x80267234: or          $v0, $a1, $zero
    ctx->r2 = ctx->r5 | 0;
    // 0x80267238: lw          $a1, 0x54($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X54);
    // 0x8026723C: jal         0x802636CC
    // 0x80267240: or          $a0, $s4, $zero
    ctx->r4 = ctx->r20 | 0;
    ovl_8024B800_func_802636CC(rdram, ctx);
        goto after_0;
    // 0x80267240: or          $a0, $s4, $zero
    ctx->r4 = ctx->r20 | 0;
    after_0:
    // 0x80267244: lb          $a0, 0x8DD($s4)
    ctx->r4 = MEM_B(ctx->r20, 0X8DD);
    // 0x80267248: lhu         $t7, 0x1A($v0)
    ctx->r15 = MEM_HU(ctx->r2, 0X1A);
    // 0x8026724C: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
    // 0x80267250: beq         $a0, $t7, L_8026725C
    if (ctx->r4 == ctx->r15) {
        // 0x80267254: nop
    
            goto L_8026725C;
    }
    // 0x80267254: nop

    // 0x80267258: sb          $a0, 0x8DE($s4)
    MEM_B(0X8DE, ctx->r20) = ctx->r4;
L_8026725C:
    // 0x8026725C: lhu         $t8, 0x1A($v1)
    ctx->r24 = MEM_HU(ctx->r3, 0X1A);
    // 0x80267260: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    // 0x80267264: sb          $t8, 0x8DC($s4)
    MEM_B(0X8DC, ctx->r20) = ctx->r24;
    // 0x80267268: lhu         $t9, 0x1A($v1)
    ctx->r25 = MEM_HU(ctx->r3, 0X1A);
    // 0x8026726C: nop

    // 0x80267270: sb          $t9, 0x8DD($s4)
    MEM_B(0X8DD, ctx->r20) = ctx->r25;
L_80267274:
    // 0x80267274: lw          $ra, 0x4C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X4C);
    // 0x80267278: lwc1        $f21, 0x18($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X18);
    // 0x8026727C: lwc1        $f20, 0x1C($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x80267280: lwc1        $f23, 0x20($sp)
    ctx->f_odd[(23 - 1) * 2] = MEM_W(ctx->r29, 0X20);
    // 0x80267284: lwc1        $f22, 0x24($sp)
    ctx->f22.u32l = MEM_W(ctx->r29, 0X24);
    // 0x80267288: lwc1        $f25, 0x28($sp)
    ctx->f_odd[(25 - 1) * 2] = MEM_W(ctx->r29, 0X28);
    // 0x8026728C: lwc1        $f24, 0x2C($sp)
    ctx->f24.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x80267290: lw          $s0, 0x30($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X30);
    // 0x80267294: lw          $s1, 0x34($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X34);
    // 0x80267298: lw          $s2, 0x38($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X38);
    // 0x8026729C: lw          $s3, 0x3C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X3C);
    // 0x802672A0: lw          $s4, 0x40($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X40);
    // 0x802672A4: lw          $s5, 0x44($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X44);
    // 0x802672A8: lw          $s6, 0x48($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X48);
    // 0x802672AC: jr          $ra
    // 0x802672B0: addiu       $sp, $sp, 0x78
    ctx->r29 = ADD32(ctx->r29, 0X78);
    return;
    // 0x802672B0: addiu       $sp, $sp, 0x78
    ctx->r29 = ADD32(ctx->r29, 0X78);
;}
RECOMP_FUNC void ovl_8024B800_func_802672B4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802672B4: lb          $v0, 0x8DE($a0)
    ctx->r2 = MEM_B(ctx->r4, 0X8DE);
    // 0x802672B8: nop

    // 0x802672BC: beq         $v0, $zero, L_80267324
    if (ctx->r2 == 0) {
        // 0x802672C0: sll         $t7, $v0, 5
        ctx->r15 = S32(ctx->r2 << 5);
            goto L_80267324;
    }
    // 0x802672C0: sll         $t7, $v0, 5
    ctx->r15 = S32(ctx->r2 << 5);
    // 0x802672C4: lw          $t6, 0x18($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X18);
    // 0x802672C8: subu        $t7, $t7, $v0
    ctx->r15 = SUB32(ctx->r15, ctx->r2);
    // 0x802672CC: sll         $t7, $t7, 3
    ctx->r15 = S32(ctx->r15 << 3);
    // 0x802672D0: addu        $v1, $t6, $t7
    ctx->r3 = ADD32(ctx->r14, ctx->r15);
    // 0x802672D4: beq         $v1, $a1, L_80267324
    if (ctx->r3 == ctx->r5) {
        // 0x802672D8: lui         $at, 0x42A0
        ctx->r1 = S32(0X42A0 << 16);
            goto L_80267324;
    }
    // 0x802672D8: lui         $at, 0x42A0
    ctx->r1 = S32(0X42A0 << 16);
    // 0x802672DC: lwc1        $f4, 0x84($v1)
    ctx->f4.u32l = MEM_W(ctx->r3, 0X84);
    // 0x802672E0: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x802672E4: lui         $at, 0x4270
    ctx->r1 = S32(0X4270 << 16);
    // 0x802672E8: c.lt.s      $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f4.fl < ctx->f6.fl;
    // 0x802672EC: nop

    // 0x802672F0: bc1f        L_80267324
    if (!c1cs) {
        // 0x802672F4: nop
    
            goto L_80267324;
    }
    // 0x802672F4: nop

    // 0x802672F8: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x802672FC: lwc1        $f10, 0x84($a1)
    ctx->f10.u32l = MEM_W(ctx->r5, 0X84);
    // 0x80267300: addiu       $t8, $zero, 0x15
    ctx->r24 = ADD32(0, 0X15);
    // 0x80267304: c.lt.s      $f8, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f8.fl < ctx->f10.fl;
    // 0x80267308: nop

    // 0x8026730C: bc1f        L_80267324
    if (!c1cs) {
        // 0x80267310: nop
    
            goto L_80267324;
    }
    // 0x80267310: nop

    // 0x80267314: lhu         $t9, 0x12($v1)
    ctx->r25 = MEM_HU(ctx->r3, 0X12);
    // 0x80267318: sb          $t8, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r24;
    // 0x8026731C: ori         $t0, $t9, 0x100
    ctx->r8 = ctx->r25 | 0X100;
    // 0x80267320: sh          $t0, 0x12($v1)
    MEM_H(0X12, ctx->r3) = ctx->r8;
L_80267324:
    // 0x80267324: jr          $ra
    // 0x80267328: nop

    return;
    // 0x80267328: nop

;}
RECOMP_FUNC void ovl_8024B800_func_8026732C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8026732C: addiu       $sp, $sp, -0x130
    ctx->r29 = ADD32(ctx->r29, -0X130);
    // 0x80267330: lui         $t7, 0x8012
    ctx->r15 = S32(0X8012 << 16);
    // 0x80267334: lhu         $t7, 0xB7E($t7)
    ctx->r15 = MEM_HU(ctx->r15, 0XB7E);
    // 0x80267338: sw          $fp, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r30;
    // 0x8026733C: andi        $t8, $t7, 0x4
    ctx->r24 = ctx->r15 & 0X4;
    // 0x80267340: andi        $fp, $a3, 0xFFFF
    ctx->r30 = ctx->r7 & 0XFFFF;
    // 0x80267344: sw          $ra, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r31;
    // 0x80267348: sw          $s7, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r23;
    // 0x8026734C: sw          $s6, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r22;
    // 0x80267350: sw          $s5, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r21;
    // 0x80267354: sw          $s4, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r20;
    // 0x80267358: sw          $s3, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r19;
    // 0x8026735C: sw          $s2, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r18;
    // 0x80267360: sw          $s1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r17;
    // 0x80267364: sw          $s0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r16;
    // 0x80267368: swc1        $f25, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f_odd[(25 - 1) * 2];
    // 0x8026736C: swc1        $f24, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f24.u32l;
    // 0x80267370: swc1        $f23, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f_odd[(23 - 1) * 2];
    // 0x80267374: swc1        $f22, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f22.u32l;
    // 0x80267378: swc1        $f21, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x8026737C: swc1        $f20, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f20.u32l;
    // 0x80267380: sw          $a0, 0x130($sp)
    MEM_W(0X130, ctx->r29) = ctx->r4;
    // 0x80267384: sw          $a1, 0x134($sp)
    MEM_W(0X134, ctx->r29) = ctx->r5;
    // 0x80267388: sw          $a2, 0x138($sp)
    MEM_W(0X138, ctx->r29) = ctx->r6;
    // 0x8026738C: sw          $a3, 0x13C($sp)
    MEM_W(0X13C, ctx->r29) = ctx->r7;
    // 0x80267390: andi        $t6, $a2, 0xFFFF
    ctx->r14 = ctx->r6 & 0XFFFF;
    // 0x80267394: bne         $t8, $zero, L_80267894
    if (ctx->r24 != 0) {
        // 0x80267398: or          $t4, $zero, $zero
        ctx->r12 = 0 | 0;
            goto L_80267894;
    }
    // 0x80267398: or          $t4, $zero, $zero
    ctx->r12 = 0 | 0;
    // 0x8026739C: lw          $t5, 0x24($a0)
    ctx->r13 = MEM_W(ctx->r4, 0X24);
    // 0x802673A0: lui         $at, 0x4248
    ctx->r1 = S32(0X4248 << 16);
    // 0x802673A4: lui         $s7, 0x8009
    ctx->r23 = S32(0X8009 << 16);
    // 0x802673A8: lui         $t0, 0x8028
    ctx->r8 = S32(0X8028 << 16);
    // 0x802673AC: mtc1        $at, $f24
    ctx->f24.u32l = ctx->r1;
    // 0x802673B0: mtc1        $zero, $f20
    ctx->f20.u32l = 0;
    // 0x802673B4: lw          $s2, 0x144($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X144);
    // 0x802673B8: lw          $s1, 0x140($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X140);
    // 0x802673BC: lw          $s6, 0x18($t5)
    ctx->r22 = MEM_W(ctx->r13, 0X18);
    // 0x802673C0: addiu       $t0, $t0, -0x3678
    ctx->r8 = ADD32(ctx->r8, -0X3678);
    // 0x802673C4: addiu       $s7, $s7, 0x3B20
    ctx->r23 = ADD32(ctx->r23, 0X3B20);
    // 0x802673C8: or          $t2, $zero, $zero
    ctx->r10 = 0 | 0;
    // 0x802673CC: or          $s0, $t6, $zero
    ctx->r16 = ctx->r14 | 0;
L_802673D0:
    // 0x802673D0: lw          $t6, 0xD4($s6)
    ctx->r14 = MEM_W(ctx->r22, 0XD4);
    // 0x802673D4: nop

    // 0x802673D8: lbu         $t7, 0x5($t6)
    ctx->r15 = MEM_BU(ctx->r14, 0X5);
    // 0x802673DC: nop

    // 0x802673E0: sll         $t8, $t7, 1
    ctx->r24 = S32(ctx->r15 << 1);
    // 0x802673E4: addu        $t9, $t0, $t8
    ctx->r25 = ADD32(ctx->r8, ctx->r24);
    // 0x802673E8: lhu         $t5, 0x0($t9)
    ctx->r13 = MEM_HU(ctx->r25, 0X0);
    // 0x802673EC: nop

    // 0x802673F0: and         $t6, $t5, $s0
    ctx->r14 = ctx->r13 & ctx->r16;
    // 0x802673F4: beq         $t6, $zero, L_80267588
    if (ctx->r14 == 0) {
        // 0x802673F8: nop
    
            goto L_80267588;
    }
    // 0x802673F8: nop

    // 0x802673FC: lhu         $t7, 0xC($s6)
    ctx->r15 = MEM_HU(ctx->r22, 0XC);
    // 0x80267400: nop

    // 0x80267404: beq         $t7, $zero, L_80267588
    if (ctx->r15 == 0) {
        // 0x80267408: nop
    
            goto L_80267588;
    }
    // 0x80267408: nop

    // 0x8026740C: lw          $t8, 0x0($s7)
    ctx->r24 = MEM_W(ctx->r23, 0X0);
    // 0x80267410: nop

    // 0x80267414: lw          $t9, 0x84($t8)
    ctx->r25 = MEM_W(ctx->r24, 0X84);
    // 0x80267418: nop

    // 0x8026741C: beq         $s6, $t9, L_80267588
    if (ctx->r22 == ctx->r25) {
        // 0x80267420: nop
    
            goto L_80267588;
    }
    // 0x80267420: nop

    // 0x80267424: lbu         $t5, 0x8($s6)
    ctx->r13 = MEM_BU(ctx->r22, 0X8);
    // 0x80267428: or          $a0, $s6, $zero
    ctx->r4 = ctx->r22 | 0;
    // 0x8026742C: bne         $t5, $zero, L_80267588
    if (ctx->r13 != 0) {
        // 0x80267430: nop
    
            goto L_80267588;
    }
    // 0x80267430: nop

    // 0x80267434: mtc1        $s1, $f4
    ctx->f4.u32l = ctx->r17;
    // 0x80267438: sh          $t2, 0x12E($sp)
    MEM_H(0X12E, ctx->r29) = ctx->r10;
    // 0x8026743C: sh          $t4, 0x12A($sp)
    MEM_H(0X12A, ctx->r29) = ctx->r12;
    // 0x80267440: jal         0x8026AB2C
    // 0x80267444: cvt.s.w     $f22, $f4
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 4);
    ctx->f22.fl = CVT_S_W(ctx->f4.u32l);
    ovl_8024B800_func_8026AB2C(rdram, ctx);
        goto after_0;
    // 0x80267444: cvt.s.w     $f22, $f4
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 4);
    ctx->f22.fl = CVT_S_W(ctx->f4.u32l);
    after_0:
    // 0x80267448: neg.s       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = -ctx->f0.fl;
    // 0x8026744C: c.lt.s      $f22, $f2
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f22.fl < ctx->f2.fl;
    // 0x80267450: lui         $t0, 0x8028
    ctx->r8 = S32(0X8028 << 16);
    // 0x80267454: lh          $t2, 0x12E($sp)
    ctx->r10 = MEM_H(ctx->r29, 0X12E);
    // 0x80267458: lh          $t4, 0x12A($sp)
    ctx->r12 = MEM_H(ctx->r29, 0X12A);
    // 0x8026745C: bc1t        L_80267588
    if (c1cs) {
        // 0x80267460: addiu       $t0, $t0, -0x3678
        ctx->r8 = ADD32(ctx->r8, -0X3678);
            goto L_80267588;
    }
    // 0x80267460: addiu       $t0, $t0, -0x3678
    ctx->r8 = ADD32(ctx->r8, -0X3678);
    // 0x80267464: mtc1        $s2, $f6
    ctx->f6.u32l = ctx->r18;
    // 0x80267468: lw          $t6, 0x130($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X130);
    // 0x8026746C: cvt.s.w     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.fl = CVT_S_W(ctx->f6.u32l);
    // 0x80267470: c.lt.s      $f2, $f8
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f2.fl < ctx->f8.fl;
    // 0x80267474: nop

    // 0x80267478: bc1t        L_80267588
    if (c1cs) {
        // 0x8026747C: nop
    
            goto L_80267588;
    }
    // 0x8026747C: nop

    // 0x80267480: lh          $t7, 0x8C4($t6)
    ctx->r15 = MEM_H(ctx->r14, 0X8C4);
    // 0x80267484: nop

    // 0x80267488: mtc1        $t7, $f10
    ctx->f10.u32l = ctx->r15;
    // 0x8026748C: nop

    // 0x80267490: cvt.s.w     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.fl = CVT_S_W(ctx->f10.u32l);
    // 0x80267494: sub.s       $f0, $f16, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = ctx->f16.fl - ctx->f2.fl;
    // 0x80267498: c.lt.s      $f24, $f0
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f24.fl < ctx->f0.fl;
    // 0x8026749C: nop

    // 0x802674A0: bc1t        L_80267588
    if (c1cs) {
        // 0x802674A4: nop
    
            goto L_80267588;
    }
    // 0x802674A4: nop

    // 0x802674A8: lhu         $t8, 0x12($s6)
    ctx->r24 = MEM_HU(ctx->r22, 0X12);
    // 0x802674AC: nop

    // 0x802674B0: andi        $t9, $t8, 0x400
    ctx->r25 = ctx->r24 & 0X400;
    // 0x802674B4: bne         $t9, $zero, L_80267588
    if (ctx->r25 != 0) {
        // 0x802674B8: nop
    
            goto L_80267588;
    }
    // 0x802674B8: nop

    // 0x802674BC: lw          $t5, 0x0($s7)
    ctx->r13 = MEM_W(ctx->r23, 0X0);
    // 0x802674C0: lwc1        $f18, 0x44($s6)
    ctx->f18.u32l = MEM_W(ctx->r22, 0X44);
    // 0x802674C4: lwc1        $f4, 0x0($t5)
    ctx->f4.u32l = MEM_W(ctx->r13, 0X0);
    // 0x802674C8: sh          $t4, 0x12A($sp)
    MEM_H(0X12A, ctx->r29) = ctx->r12;
    // 0x802674CC: sh          $t2, 0x12E($sp)
    MEM_H(0X12E, ctx->r29) = ctx->r10;
    // 0x802674D0: jal         0x80272AEC
    // 0x802674D4: sub.s       $f12, $f18, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f12.fl = ctx->f18.fl - ctx->f4.fl;
    ovl_8024B800_func_80272AEC(rdram, ctx);
        goto after_1;
    // 0x802674D4: sub.s       $f12, $f18, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f12.fl = ctx->f18.fl - ctx->f4.fl;
    after_1:
    // 0x802674D8: lui         $at, 0x8028
    ctx->r1 = S32(0X8028 << 16);
    // 0x802674DC: lwc1        $f6, -0x2D08($at)
    ctx->f6.u32l = MEM_W(ctx->r1, -0X2D08);
    // 0x802674E0: lui         $t0, 0x8028
    ctx->r8 = S32(0X8028 << 16);
    // 0x802674E4: c.lt.s      $f6, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f6.fl < ctx->f0.fl;
    // 0x802674E8: lh          $t2, 0x12E($sp)
    ctx->r10 = MEM_H(ctx->r29, 0X12E);
    // 0x802674EC: lh          $t4, 0x12A($sp)
    ctx->r12 = MEM_H(ctx->r29, 0X12A);
    // 0x802674F0: bc1t        L_80267588
    if (c1cs) {
        // 0x802674F4: addiu       $t0, $t0, -0x3678
        ctx->r8 = ADD32(ctx->r8, -0X3678);
            goto L_80267588;
    }
    // 0x802674F4: addiu       $t0, $t0, -0x3678
    ctx->r8 = ADD32(ctx->r8, -0X3678);
    // 0x802674F8: lhu         $t8, 0x1A($s6)
    ctx->r24 = MEM_HU(ctx->r22, 0X1A);
    // 0x802674FC: sll         $t6, $t4, 3
    ctx->r14 = S32(ctx->r12 << 3);
    // 0x80267500: addiu       $t7, $sp, 0xB8
    ctx->r15 = ADD32(ctx->r29, 0XB8);
    // 0x80267504: lw          $t9, 0x0($s7)
    ctx->r25 = MEM_W(ctx->r23, 0X0);
    // 0x80267508: addu        $v0, $t6, $t7
    ctx->r2 = ADD32(ctx->r14, ctx->r15);
    // 0x8026750C: lui         $at, 0xC248
    ctx->r1 = S32(0XC248 << 16);
    // 0x80267510: sh          $t8, 0x0($v0)
    MEM_H(0X0, ctx->r2) = ctx->r24;
    // 0x80267514: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x80267518: lwc1        $f0, 0x0($t9)
    ctx->f0.u32l = MEM_W(ctx->r25, 0X0);
    // 0x8026751C: addiu       $t4, $t4, 0x1
    ctx->r12 = ADD32(ctx->r12, 0X1);
    // 0x80267520: c.lt.s      $f0, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f0.fl < ctx->f8.fl;
    // 0x80267524: sll         $t5, $t4, 16
    ctx->r13 = S32(ctx->r12 << 16);
    // 0x80267528: bc1f        L_8026753C
    if (!c1cs) {
        // 0x8026752C: sra         $t4, $t5, 16
        ctx->r12 = S32(SIGNED(ctx->r13) >> 16);
            goto L_8026753C;
    }
    // 0x8026752C: sra         $t4, $t5, 16
    ctx->r12 = S32(SIGNED(ctx->r13) >> 16);
    // 0x80267530: lwc1        $f10, 0x44($s6)
    ctx->f10.u32l = MEM_W(ctx->r22, 0X44);
    // 0x80267534: b           L_80267588
    // 0x80267538: swc1        $f10, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->f10.u32l;
        goto L_80267588;
    // 0x80267538: swc1        $f10, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->f10.u32l;
L_8026753C:
    // 0x8026753C: c.lt.s      $f0, $f24
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 24);
    c1cs = ctx->f0.fl < ctx->f24.fl;
    // 0x80267540: nop

    // 0x80267544: bc1f        L_80267578
    if (!c1cs) {
        // 0x80267548: nop
    
            goto L_80267578;
    }
    // 0x80267548: nop

    // 0x8026754C: lwc1        $f0, 0x44($s6)
    ctx->f0.u32l = MEM_W(ctx->r22, 0X44);
    // 0x80267550: nop

    // 0x80267554: c.lt.s      $f0, $f20
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    c1cs = ctx->f0.fl < ctx->f20.fl;
    // 0x80267558: nop

    // 0x8026755C: bc1f        L_80267570
    if (!c1cs) {
        // 0x80267560: nop
    
            goto L_80267570;
    }
    // 0x80267560: nop

    // 0x80267564: neg.s       $f16, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f16.fl = -ctx->f0.fl;
    // 0x80267568: b           L_80267588
    // 0x8026756C: swc1        $f16, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->f16.u32l;
        goto L_80267588;
    // 0x8026756C: swc1        $f16, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->f16.u32l;
L_80267570:
    // 0x80267570: b           L_80267588
    // 0x80267574: swc1        $f0, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->f0.u32l;
        goto L_80267588;
    // 0x80267574: swc1        $f0, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->f0.u32l;
L_80267578:
    // 0x80267578: lwc1        $f18, 0x44($s6)
    ctx->f18.u32l = MEM_W(ctx->r22, 0X44);
    // 0x8026757C: nop

    // 0x80267580: neg.s       $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = -ctx->f18.fl;
    // 0x80267584: swc1        $f4, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->f4.u32l;
L_80267588:
    // 0x80267588: addiu       $t2, $t2, 0x1
    ctx->r10 = ADD32(ctx->r10, 0X1);
    // 0x8026758C: sll         $t7, $t2, 16
    ctx->r15 = S32(ctx->r10 << 16);
    // 0x80267590: sra         $t2, $t7, 16
    ctx->r10 = S32(SIGNED(ctx->r15) >> 16);
    // 0x80267594: slti        $at, $t2, 0xB
    ctx->r1 = SIGNED(ctx->r10) < 0XB ? 1 : 0;
    // 0x80267598: bne         $at, $zero, L_802673D0
    if (ctx->r1 != 0) {
        // 0x8026759C: addiu       $s6, $s6, 0xF8
        ctx->r22 = ADD32(ctx->r22, 0XF8);
            goto L_802673D0;
    }
    // 0x8026759C: addiu       $s6, $s6, 0xF8
    ctx->r22 = ADD32(ctx->r22, 0XF8);
    // 0x802675A0: lw          $t9, 0x130($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X130);
    // 0x802675A4: slti        $at, $t4, 0x3
    ctx->r1 = SIGNED(ctx->r12) < 0X3 ? 1 : 0;
    // 0x802675A8: lw          $t5, 0x24($t9)
    ctx->r13 = MEM_W(ctx->r25, 0X24);
    // 0x802675AC: nop

    // 0x802675B0: lw          $s6, 0x18($t5)
    ctx->r22 = MEM_W(ctx->r13, 0X18);
    // 0x802675B4: beq         $t4, $zero, L_80267898
    if (ctx->r12 == 0) {
        // 0x802675B8: lw          $ra, 0x54($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X54);
            goto L_80267898;
    }
    // 0x802675B8: lw          $ra, 0x54($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X54);
    // 0x802675BC: bne         $at, $zero, L_802675E8
    if (ctx->r1 != 0) {
        // 0x802675C0: or          $a0, $zero, $zero
        ctx->r4 = 0 | 0;
            goto L_802675E8;
    }
    // 0x802675C0: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x802675C4: addiu       $a1, $t4, -0x1
    ctx->r5 = ADD32(ctx->r12, -0X1);
    // 0x802675C8: sll         $t6, $a1, 16
    ctx->r14 = S32(ctx->r5 << 16);
    // 0x802675CC: sra         $a1, $t6, 16
    ctx->r5 = S32(SIGNED(ctx->r14) >> 16);
    // 0x802675D0: addiu       $a2, $sp, 0xB8
    ctx->r6 = ADD32(ctx->r29, 0XB8);
    // 0x802675D4: jal         0x8005DE74
    // 0x802675D8: sh          $t4, 0x12A($sp)
    MEM_H(0X12A, ctx->r29) = ctx->r12;
    func_8005DE74(rdram, ctx);
        goto after_2;
    // 0x802675D8: sh          $t4, 0x12A($sp)
    MEM_H(0X12A, ctx->r29) = ctx->r12;
    after_2:
    // 0x802675DC: lui         $t0, 0x8028
    ctx->r8 = S32(0X8028 << 16);
    // 0x802675E0: lh          $t4, 0x12A($sp)
    ctx->r12 = MEM_H(ctx->r29, 0X12A);
    // 0x802675E4: addiu       $t0, $t0, -0x3678
    ctx->r8 = ADD32(ctx->r8, -0X3678);
L_802675E8:
    // 0x802675E8: blez        $t4, L_80267894
    if (SIGNED(ctx->r12) <= 0) {
        // 0x802675EC: or          $t2, $zero, $zero
        ctx->r10 = 0 | 0;
            goto L_80267894;
    }
    // 0x802675EC: or          $t2, $zero, $zero
    ctx->r10 = 0 | 0;
    // 0x802675F0: lui         $s2, 0x8028
    ctx->r18 = S32(0X8028 << 16);
    // 0x802675F4: lhu         $t1, 0x136($sp)
    ctx->r9 = MEM_HU(ctx->r29, 0X136);
    // 0x802675F8: addiu       $s2, $s2, -0x3060
    ctx->r18 = ADD32(ctx->r18, -0X3060);
    // 0x802675FC: addiu       $s4, $sp, 0x68
    ctx->r20 = ADD32(ctx->r29, 0X68);
    // 0x80267600: addiu       $s3, $zero, 0xF8
    ctx->r19 = ADD32(0, 0XF8);
    // 0x80267604: sll         $t9, $t2, 3
    ctx->r25 = S32(ctx->r10 << 3);
L_80267608:
    // 0x80267608: addiu       $t5, $sp, 0xB8
    ctx->r13 = ADD32(ctx->r29, 0XB8);
    // 0x8026760C: addu        $t3, $t9, $t5
    ctx->r11 = ADD32(ctx->r25, ctx->r13);
    // 0x80267610: lhu         $t6, 0x0($t3)
    ctx->r14 = MEM_HU(ctx->r11, 0X0);
    // 0x80267614: lw          $t8, 0x130($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X130);
    // 0x80267618: sll         $t7, $t6, 5
    ctx->r15 = S32(ctx->r14 << 5);
    // 0x8026761C: subu        $t7, $t7, $t6
    ctx->r15 = SUB32(ctx->r15, ctx->r14);
    // 0x80267620: sll         $t7, $t7, 3
    ctx->r15 = S32(ctx->r15 << 3);
    // 0x80267624: lw          $s1, 0x18($t8)
    ctx->r17 = MEM_W(ctx->r24, 0X18);
    // 0x80267628: addu        $s0, $t7, $s6
    ctx->r16 = ADD32(ctx->r15, ctx->r22);
    // 0x8026762C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x80267630: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x80267634: addu        $t8, $s2, $a0
    ctx->r24 = ADD32(ctx->r18, ctx->r4);
L_80267638:
    // 0x80267638: lb          $v0, 0x0($t8)
    ctx->r2 = MEM_B(ctx->r24, 0X0);
    // 0x8026763C: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    // 0x80267640: beq         $v0, $zero, L_80267728
    if (ctx->r2 == 0) {
        // 0x80267644: sll         $t9, $a0, 16
        ctx->r25 = S32(ctx->r4 << 16);
            goto L_80267728;
    }
    // 0x80267644: sll         $t9, $a0, 16
    ctx->r25 = S32(ctx->r4 << 16);
    // 0x80267648: multu       $v0, $s3
    result = U64(U32(ctx->r2)) * U64(U32(ctx->r19)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8026764C: andi        $t5, $fp, 0x2
    ctx->r13 = ctx->r30 & 0X2;
    // 0x80267650: mflo        $t9
    ctx->r25 = lo;
    // 0x80267654: addu        $v1, $t9, $s1
    ctx->r3 = ADD32(ctx->r25, ctx->r17);
    // 0x80267658: beq         $t5, $zero, L_802676A4
    if (ctx->r13 == 0) {
        // 0x8026765C: nop
    
            goto L_802676A4;
    }
    // 0x8026765C: nop

    // 0x80267660: lwc1        $f0, 0x44($v1)
    ctx->f0.u32l = MEM_W(ctx->r3, 0X44);
    // 0x80267664: lwc1        $f6, 0x44($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X44);
    // 0x80267668: nop

    // 0x8026766C: mul.s       $f8, $f6, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = MUL_S(ctx->f6.fl, ctx->f0.fl);
    // 0x80267670: c.lt.s      $f8, $f20
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 20);
    c1cs = ctx->f8.fl < ctx->f20.fl;
    // 0x80267674: nop

    // 0x80267678: bc1t        L_80267728
    if (c1cs) {
        // 0x8026767C: sll         $t9, $a0, 16
        ctx->r25 = S32(ctx->r4 << 16);
            goto L_80267728;
    }
    // 0x8026767C: sll         $t9, $a0, 16
    ctx->r25 = S32(ctx->r4 << 16);
    // 0x80267680: lw          $t6, 0x0($s7)
    ctx->r14 = MEM_W(ctx->r23, 0X0);
    // 0x80267684: nop

    // 0x80267688: lwc1        $f10, 0x0($t6)
    ctx->f10.u32l = MEM_W(ctx->r14, 0X0);
    // 0x8026768C: nop

    // 0x80267690: mul.s       $f16, $f0, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = MUL_S(ctx->f0.fl, ctx->f10.fl);
    // 0x80267694: c.lt.s      $f16, $f20
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 20);
    c1cs = ctx->f16.fl < ctx->f20.fl;
    // 0x80267698: nop

    // 0x8026769C: bc1t        L_80267728
    if (c1cs) {
        // 0x802676A0: sll         $t9, $a0, 16
        ctx->r25 = S32(ctx->r4 << 16);
            goto L_80267728;
    }
    // 0x802676A0: sll         $t9, $a0, 16
    ctx->r25 = S32(ctx->r4 << 16);
L_802676A4:
    // 0x802676A4: lw          $t7, 0xD4($v1)
    ctx->r15 = MEM_W(ctx->r3, 0XD4);
    // 0x802676A8: nop

    // 0x802676AC: lbu         $t8, 0x5($t7)
    ctx->r24 = MEM_BU(ctx->r15, 0X5);
    // 0x802676B0: nop

    // 0x802676B4: sll         $t9, $t8, 1
    ctx->r25 = S32(ctx->r24 << 1);
    // 0x802676B8: addu        $t5, $t0, $t9
    ctx->r13 = ADD32(ctx->r8, ctx->r25);
    // 0x802676BC: lhu         $t6, 0x0($t5)
    ctx->r14 = MEM_HU(ctx->r13, 0X0);
    // 0x802676C0: nop

    // 0x802676C4: and         $t7, $t6, $t1
    ctx->r15 = ctx->r14 & ctx->r9;
    // 0x802676C8: beq         $t7, $zero, L_80267728
    if (ctx->r15 == 0) {
        // 0x802676CC: sll         $t9, $a0, 16
        ctx->r25 = S32(ctx->r4 << 16);
            goto L_80267728;
    }
    // 0x802676CC: sll         $t9, $a0, 16
    ctx->r25 = S32(ctx->r4 << 16);
    // 0x802676D0: lhu         $t8, 0x12($v1)
    ctx->r24 = MEM_HU(ctx->r3, 0X12);
    // 0x802676D4: sll         $t5, $a3, 3
    ctx->r13 = S32(ctx->r7 << 3);
    // 0x802676D8: andi        $t9, $t8, 0x300
    ctx->r25 = ctx->r24 & 0X300;
    // 0x802676DC: bne         $t9, $zero, L_80267728
    if (ctx->r25 != 0) {
        // 0x802676E0: sll         $t9, $a0, 16
        ctx->r25 = S32(ctx->r4 << 16);
            goto L_80267728;
    }
    // 0x802676E0: sll         $t9, $a0, 16
    ctx->r25 = S32(ctx->r4 << 16);
    // 0x802676E4: lhu         $t6, 0x1A($v1)
    ctx->r14 = MEM_HU(ctx->r3, 0X1A);
    // 0x802676E8: addu        $v0, $s4, $t5
    ctx->r2 = ADD32(ctx->r20, ctx->r13);
    // 0x802676EC: sh          $t6, 0x0($v0)
    MEM_H(0X0, ctx->r2) = ctx->r14;
    // 0x802676F0: lwc1        $f4, 0x4C($v1)
    ctx->f4.u32l = MEM_W(ctx->r3, 0X4C);
    // 0x802676F4: lwc1        $f18, 0x4C($s0)
    ctx->f18.u32l = MEM_W(ctx->r16, 0X4C);
    // 0x802676F8: lwc1        $f8, 0x44($v1)
    ctx->f8.u32l = MEM_W(ctx->r3, 0X44);
    // 0x802676FC: sub.s       $f0, $f18, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f0.fl = ctx->f18.fl - ctx->f4.fl;
    // 0x80267700: lwc1        $f6, 0x44($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X44);
    // 0x80267704: mul.s       $f10, $f0, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f10.fl = MUL_S(ctx->f0.fl, ctx->f0.fl);
    // 0x80267708: sub.s       $f2, $f6, $f8
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f2.fl = ctx->f6.fl - ctx->f8.fl;
    // 0x8026770C: addiu       $a3, $a3, 0x1
    ctx->r7 = ADD32(ctx->r7, 0X1);
    // 0x80267710: sll         $t7, $a3, 16
    ctx->r15 = S32(ctx->r7 << 16);
    // 0x80267714: mul.s       $f16, $f2, $f2
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f16.fl = MUL_S(ctx->f2.fl, ctx->f2.fl);
    // 0x80267718: sra         $a3, $t7, 16
    ctx->r7 = S32(SIGNED(ctx->r15) >> 16);
    // 0x8026771C: add.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl + ctx->f16.fl;
    // 0x80267720: swc1        $f18, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->f18.u32l;
    // 0x80267724: sll         $t9, $a0, 16
    ctx->r25 = S32(ctx->r4 << 16);
L_80267728:
    // 0x80267728: sra         $a0, $t9, 16
    ctx->r4 = S32(SIGNED(ctx->r25) >> 16);
    // 0x8026772C: slti        $at, $a0, 0xA
    ctx->r1 = SIGNED(ctx->r4) < 0XA ? 1 : 0;
    // 0x80267730: bne         $at, $zero, L_80267638
    if (ctx->r1 != 0) {
        // 0x80267734: addu        $t8, $s2, $a0
        ctx->r24 = ADD32(ctx->r18, ctx->r4);
            goto L_80267638;
    }
    // 0x80267734: addu        $t8, $s2, $a0
    ctx->r24 = ADD32(ctx->r18, ctx->r4);
    // 0x80267738: beq         $a3, $zero, L_8026787C
    if (ctx->r7 == 0) {
        // 0x8026773C: or          $a0, $zero, $zero
        ctx->r4 = 0 | 0;
            goto L_8026787C;
    }
    // 0x8026773C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x80267740: addiu       $a1, $a3, -0x1
    ctx->r5 = ADD32(ctx->r7, -0X1);
    // 0x80267744: sll         $t6, $a1, 16
    ctx->r14 = S32(ctx->r5 << 16);
    // 0x80267748: sra         $a1, $t6, 16
    ctx->r5 = S32(SIGNED(ctx->r14) >> 16);
    // 0x8026774C: or          $a2, $s4, $zero
    ctx->r6 = ctx->r20 | 0;
    // 0x80267750: andi        $s5, $fp, 0x1
    ctx->r21 = ctx->r30 & 0X1;
    // 0x80267754: sh          $t2, 0x12E($sp)
    MEM_H(0X12E, ctx->r29) = ctx->r10;
    // 0x80267758: sw          $t3, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r11;
    // 0x8026775C: jal         0x8005DE74
    // 0x80267760: sh          $t4, 0x12A($sp)
    MEM_H(0X12A, ctx->r29) = ctx->r12;
    func_8005DE74(rdram, ctx);
        goto after_3;
    // 0x80267760: sh          $t4, 0x12A($sp)
    MEM_H(0X12A, ctx->r29) = ctx->r12;
    after_3:
    // 0x80267764: lh          $a1, 0x68($sp)
    ctx->r5 = MEM_H(ctx->r29, 0X68);
    // 0x80267768: lui         $t0, 0x8028
    ctx->r8 = S32(0X8028 << 16);
    // 0x8026776C: lhu         $t1, 0x136($sp)
    ctx->r9 = MEM_HU(ctx->r29, 0X136);
    // 0x80267770: lh          $t2, 0x12E($sp)
    ctx->r10 = MEM_H(ctx->r29, 0X12E);
    // 0x80267774: lw          $t3, 0x64($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X64);
    // 0x80267778: lh          $t4, 0x12A($sp)
    ctx->r12 = MEM_H(ctx->r29, 0X12A);
    // 0x8026777C: addu        $t8, $s2, $a1
    ctx->r24 = ADD32(ctx->r18, ctx->r5);
    // 0x80267780: addiu       $t0, $t0, -0x3678
    ctx->r8 = ADD32(ctx->r8, -0X3678);
    // 0x80267784: beq         $s5, $zero, L_8026782C
    if (ctx->r21 == 0) {
        // 0x80267788: sb          $zero, -0x1($t8)
        MEM_B(-0X1, ctx->r24) = 0;
            goto L_8026782C;
    }
    // 0x80267788: sb          $zero, -0x1($t8)
    MEM_B(-0X1, ctx->r24) = 0;
    // 0x8026778C: lbu         $t9, 0x0($s0)
    ctx->r25 = MEM_BU(ctx->r16, 0X0);
    // 0x80267790: addiu       $at, $zero, 0x13
    ctx->r1 = ADD32(0, 0X13);
    // 0x80267794: bne         $t9, $at, L_8026782C
    if (ctx->r25 != ctx->r1) {
        // 0x80267798: nop
    
            goto L_8026782C;
    }
    // 0x80267798: nop

    // 0x8026779C: lh          $a0, 0x30($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X30);
    // 0x802677A0: sh          $t4, 0x12A($sp)
    MEM_H(0X12A, ctx->r29) = ctx->r12;
    // 0x802677A4: sw          $t3, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r11;
    // 0x802677A8: sh          $t2, 0x12E($sp)
    MEM_H(0X12E, ctx->r29) = ctx->r10;
    // 0x802677AC: jal         0x80272AD4
    // 0x802677B0: sh          $a1, 0x126($sp)
    MEM_H(0X126, ctx->r29) = ctx->r5;
    ovl_8024B800_func_80272AD4(rdram, ctx);
        goto after_4;
    // 0x802677B0: sh          $a1, 0x126($sp)
    MEM_H(0X126, ctx->r29) = ctx->r5;
    after_4:
    // 0x802677B4: lh          $a1, 0x126($sp)
    ctx->r5 = MEM_H(ctx->r29, 0X126);
    // 0x802677B8: lui         $t0, 0x8028
    ctx->r8 = S32(0X8028 << 16);
    // 0x802677BC: lhu         $t1, 0x136($sp)
    ctx->r9 = MEM_HU(ctx->r29, 0X136);
    // 0x802677C0: lh          $t2, 0x12E($sp)
    ctx->r10 = MEM_H(ctx->r29, 0X12E);
    // 0x802677C4: lw          $t3, 0x64($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X64);
    // 0x802677C8: lh          $t4, 0x12A($sp)
    ctx->r12 = MEM_H(ctx->r29, 0X12A);
    // 0x802677CC: sltiu       $at, $v0, 0xC8
    ctx->r1 = ctx->r2 < 0XC8 ? 1 : 0;
    // 0x802677D0: beq         $at, $zero, L_8026782C
    if (ctx->r1 == 0) {
        // 0x802677D4: addiu       $t0, $t0, -0x3678
        ctx->r8 = ADD32(ctx->r8, -0X3678);
            goto L_8026782C;
    }
    // 0x802677D4: addiu       $t0, $t0, -0x3678
    ctx->r8 = ADD32(ctx->r8, -0X3678);
    // 0x802677D8: lw          $v1, 0xC8($s0)
    ctx->r3 = MEM_W(ctx->r16, 0XC8);
    // 0x802677DC: nop

    // 0x802677E0: lhu         $t5, 0x8($v1)
    ctx->r13 = MEM_HU(ctx->r3, 0X8);
    // 0x802677E4: nop

    // 0x802677E8: andi        $t6, $t5, 0x1
    ctx->r14 = ctx->r13 & 0X1;
    // 0x802677EC: beq         $t6, $zero, L_80267800
    if (ctx->r14 == 0) {
        // 0x802677F0: nop
    
            goto L_80267800;
    }
    // 0x802677F0: nop

    // 0x802677F4: lh          $v0, 0x2E($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X2E);
    // 0x802677F8: b           L_80267810
    // 0x802677FC: lh          $t7, 0x8CA($v1)
    ctx->r15 = MEM_H(ctx->r3, 0X8CA);
        goto L_80267810;
    // 0x802677FC: lh          $t7, 0x8CA($v1)
    ctx->r15 = MEM_H(ctx->r3, 0X8CA);
L_80267800:
    // 0x80267800: lh          $v0, 0x2E($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X2E);
    // 0x80267804: nop

    // 0x80267808: negu        $v0, $v0
    ctx->r2 = SUB32(0, ctx->r2);
    // 0x8026780C: lh          $t7, 0x8CA($v1)
    ctx->r15 = MEM_H(ctx->r3, 0X8CA);
L_80267810:
    // 0x80267810: nop

    // 0x80267814: addiu       $t8, $t7, -0x3C
    ctx->r24 = ADD32(ctx->r15, -0X3C);
    // 0x80267818: slt         $at, $t8, $v0
    ctx->r1 = SIGNED(ctx->r24) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x8026781C: bne         $at, $zero, L_80267894
    if (ctx->r1 != 0) {
        // 0x80267820: slti        $at, $v0, 0x123
        ctx->r1 = SIGNED(ctx->r2) < 0X123 ? 1 : 0;
            goto L_80267894;
    }
    // 0x80267820: slti        $at, $v0, 0x123
    ctx->r1 = SIGNED(ctx->r2) < 0X123 ? 1 : 0;
    // 0x80267824: beq         $at, $zero, L_80267898
    if (ctx->r1 == 0) {
        // 0x80267828: lw          $ra, 0x54($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X54);
            goto L_80267898;
    }
    // 0x80267828: lw          $ra, 0x54($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X54);
L_8026782C:
    // 0x8026782C: multu       $a1, $s3
    result = U64(U32(ctx->r5)) * U64(U32(ctx->r19)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80267830: lhu         $v1, 0x0($t3)
    ctx->r3 = MEM_HU(ctx->r11, 0X0);
    // 0x80267834: addiu       $t8, $zero, 0x17
    ctx->r24 = ADD32(0, 0X17);
    // 0x80267838: mflo        $t9
    ctx->r25 = lo;
    // 0x8026783C: addu        $v0, $s1, $t9
    ctx->r2 = ADD32(ctx->r17, ctx->r25);
    // 0x80267840: lbu         $t5, 0x7($v0)
    ctx->r13 = MEM_BU(ctx->r2, 0X7);
    // 0x80267844: nop

    // 0x80267848: beq         $t5, $v1, L_80267868
    if (ctx->r13 == ctx->r3) {
        // 0x8026784C: nop
    
            goto L_80267868;
    }
    // 0x8026784C: nop

    // 0x80267850: lbu         $t6, 0x9($v0)
    ctx->r14 = MEM_BU(ctx->r2, 0X9);
    // 0x80267854: addiu       $t7, $zero, 0xF
    ctx->r15 = ADD32(0, 0XF);
    // 0x80267858: bne         $t6, $zero, L_80267868
    if (ctx->r14 != 0) {
        // 0x8026785C: nop
    
            goto L_80267868;
    }
    // 0x8026785C: nop

    // 0x80267860: sb          $v1, 0x7($v0)
    MEM_B(0X7, ctx->r2) = ctx->r3;
    // 0x80267864: sb          $t7, 0x9($v0)
    MEM_B(0X9, ctx->r2) = ctx->r15;
L_80267868:
    // 0x80267868: lhu         $t9, 0x12($v0)
    ctx->r25 = MEM_HU(ctx->r2, 0X12);
    // 0x8026786C: sb          $t8, 0x0($v0)
    MEM_B(0X0, ctx->r2) = ctx->r24;
    // 0x80267870: ori         $t5, $t9, 0x100
    ctx->r13 = ctx->r25 | 0X100;
    // 0x80267874: sh          $t5, 0x12($v0)
    MEM_H(0X12, ctx->r2) = ctx->r13;
    // 0x80267878: sb          $a1, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r5;
L_8026787C:
    // 0x8026787C: addiu       $t2, $t2, 0x1
    ctx->r10 = ADD32(ctx->r10, 0X1);
    // 0x80267880: sll         $t6, $t2, 16
    ctx->r14 = S32(ctx->r10 << 16);
    // 0x80267884: sra         $t2, $t6, 16
    ctx->r10 = S32(SIGNED(ctx->r14) >> 16);
    // 0x80267888: slt         $at, $t2, $t4
    ctx->r1 = SIGNED(ctx->r10) < SIGNED(ctx->r12) ? 1 : 0;
    // 0x8026788C: bne         $at, $zero, L_80267608
    if (ctx->r1 != 0) {
        // 0x80267890: sll         $t9, $t2, 3
        ctx->r25 = S32(ctx->r10 << 3);
            goto L_80267608;
    }
    // 0x80267890: sll         $t9, $t2, 3
    ctx->r25 = S32(ctx->r10 << 3);
L_80267894:
    // 0x80267894: lw          $ra, 0x54($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X54);
L_80267898:
    // 0x80267898: lwc1        $f21, 0x18($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X18);
    // 0x8026789C: lwc1        $f20, 0x1C($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x802678A0: lwc1        $f23, 0x20($sp)
    ctx->f_odd[(23 - 1) * 2] = MEM_W(ctx->r29, 0X20);
    // 0x802678A4: lwc1        $f22, 0x24($sp)
    ctx->f22.u32l = MEM_W(ctx->r29, 0X24);
    // 0x802678A8: lwc1        $f25, 0x28($sp)
    ctx->f_odd[(25 - 1) * 2] = MEM_W(ctx->r29, 0X28);
    // 0x802678AC: lwc1        $f24, 0x2C($sp)
    ctx->f24.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x802678B0: lw          $s0, 0x30($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X30);
    // 0x802678B4: lw          $s1, 0x34($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X34);
    // 0x802678B8: lw          $s2, 0x38($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X38);
    // 0x802678BC: lw          $s3, 0x3C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X3C);
    // 0x802678C0: lw          $s4, 0x40($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X40);
    // 0x802678C4: lw          $s5, 0x44($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X44);
    // 0x802678C8: lw          $s6, 0x48($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X48);
    // 0x802678CC: lw          $s7, 0x4C($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X4C);
    // 0x802678D0: lw          $fp, 0x50($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X50);
    // 0x802678D4: jr          $ra
    // 0x802678D8: addiu       $sp, $sp, 0x130
    ctx->r29 = ADD32(ctx->r29, 0X130);
    return;
    // 0x802678D8: addiu       $sp, $sp, 0x130
    ctx->r29 = ADD32(ctx->r29, 0X130);
;}
RECOMP_FUNC void ovl_8024B800_func_802673D0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
L_802673D0:
    // 0x802673D0: lw          $t6, 0xD4($s6)
    ctx->r14 = MEM_W(ctx->r22, 0XD4);
    // 0x802673D4: nop

    // 0x802673D8: lbu         $t7, 0x5($t6)
    ctx->r15 = MEM_BU(ctx->r14, 0X5);
    // 0x802673DC: nop

    // 0x802673E0: sll         $t8, $t7, 1
    ctx->r24 = S32(ctx->r15 << 1);
    // 0x802673E4: addu        $t9, $t0, $t8
    ctx->r25 = ADD32(ctx->r8, ctx->r24);
    // 0x802673E8: lhu         $t5, 0x0($t9)
    ctx->r13 = MEM_HU(ctx->r25, 0X0);
    // 0x802673EC: nop

    // 0x802673F0: and         $t6, $t5, $s0
    ctx->r14 = ctx->r13 & ctx->r16;
    // 0x802673F4: beq         $t6, $zero, L_80267588
    if (ctx->r14 == 0) {
        // 0x802673F8: nop
    
            goto L_80267588;
    }
    // 0x802673F8: nop

    // 0x802673FC: lhu         $t7, 0xC($s6)
    ctx->r15 = MEM_HU(ctx->r22, 0XC);
    // 0x80267400: nop

    // 0x80267404: beq         $t7, $zero, L_80267588
    if (ctx->r15 == 0) {
        // 0x80267408: nop
    
            goto L_80267588;
    }
    // 0x80267408: nop

    // 0x8026740C: lw          $t8, 0x0($s7)
    ctx->r24 = MEM_W(ctx->r23, 0X0);
    // 0x80267410: nop

    // 0x80267414: lw          $t9, 0x84($t8)
    ctx->r25 = MEM_W(ctx->r24, 0X84);
    // 0x80267418: nop

    // 0x8026741C: beq         $s6, $t9, L_80267588
    if (ctx->r22 == ctx->r25) {
        // 0x80267420: nop
    
            goto L_80267588;
    }
    // 0x80267420: nop

    // 0x80267424: lbu         $t5, 0x8($s6)
    ctx->r13 = MEM_BU(ctx->r22, 0X8);
    // 0x80267428: or          $a0, $s6, $zero
    ctx->r4 = ctx->r22 | 0;
    // 0x8026742C: bne         $t5, $zero, L_80267588
    if (ctx->r13 != 0) {
        // 0x80267430: nop
    
            goto L_80267588;
    }
    // 0x80267430: nop

    // 0x80267434: mtc1        $s1, $f4
    ctx->f4.u32l = ctx->r17;
    // 0x80267438: sh          $t2, 0x12E($sp)
    MEM_H(0X12E, ctx->r29) = ctx->r10;
    // 0x8026743C: sh          $t4, 0x12A($sp)
    MEM_H(0X12A, ctx->r29) = ctx->r12;
    // 0x80267440: jal         0x8026AB2C
    // 0x80267444: cvt.s.w     $f22, $f4
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 4);
    ctx->f22.fl = CVT_S_W(ctx->f4.u32l);
    ovl_8024B800_func_8026AB2C(rdram, ctx);
        goto after_0;
    // 0x80267444: cvt.s.w     $f22, $f4
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 4);
    ctx->f22.fl = CVT_S_W(ctx->f4.u32l);
    after_0:
    // 0x80267448: neg.s       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = -ctx->f0.fl;
    // 0x8026744C: c.lt.s      $f22, $f2
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f22.fl < ctx->f2.fl;
    // 0x80267450: lui         $t0, 0x8028
    ctx->r8 = S32(0X8028 << 16);
    // 0x80267454: lh          $t2, 0x12E($sp)
    ctx->r10 = MEM_H(ctx->r29, 0X12E);
    // 0x80267458: lh          $t4, 0x12A($sp)
    ctx->r12 = MEM_H(ctx->r29, 0X12A);
    // 0x8026745C: bc1t        L_80267588
    if (c1cs) {
        // 0x80267460: addiu       $t0, $t0, -0x3678
        ctx->r8 = ADD32(ctx->r8, -0X3678);
            goto L_80267588;
    }
    // 0x80267460: addiu       $t0, $t0, -0x3678
    ctx->r8 = ADD32(ctx->r8, -0X3678);
    // 0x80267464: mtc1        $s2, $f6
    ctx->f6.u32l = ctx->r18;
    // 0x80267468: lw          $t6, 0x130($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X130);
    // 0x8026746C: cvt.s.w     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.fl = CVT_S_W(ctx->f6.u32l);
    // 0x80267470: c.lt.s      $f2, $f8
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f2.fl < ctx->f8.fl;
    // 0x80267474: nop

    // 0x80267478: bc1t        L_80267588
    if (c1cs) {
        // 0x8026747C: nop
    
            goto L_80267588;
    }
    // 0x8026747C: nop

    // 0x80267480: lh          $t7, 0x8C4($t6)
    ctx->r15 = MEM_H(ctx->r14, 0X8C4);
    // 0x80267484: nop

    // 0x80267488: mtc1        $t7, $f10
    ctx->f10.u32l = ctx->r15;
    // 0x8026748C: nop

    // 0x80267490: cvt.s.w     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.fl = CVT_S_W(ctx->f10.u32l);
    // 0x80267494: sub.s       $f0, $f16, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = ctx->f16.fl - ctx->f2.fl;
    // 0x80267498: c.lt.s      $f24, $f0
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f24.fl < ctx->f0.fl;
    // 0x8026749C: nop

    // 0x802674A0: bc1t        L_80267588
    if (c1cs) {
        // 0x802674A4: nop
    
            goto L_80267588;
    }
    // 0x802674A4: nop

    // 0x802674A8: lhu         $t8, 0x12($s6)
    ctx->r24 = MEM_HU(ctx->r22, 0X12);
    // 0x802674AC: nop

    // 0x802674B0: andi        $t9, $t8, 0x400
    ctx->r25 = ctx->r24 & 0X400;
    // 0x802674B4: bne         $t9, $zero, L_80267588
    if (ctx->r25 != 0) {
        // 0x802674B8: nop
    
            goto L_80267588;
    }
    // 0x802674B8: nop

    // 0x802674BC: lw          $t5, 0x0($s7)
    ctx->r13 = MEM_W(ctx->r23, 0X0);
    // 0x802674C0: lwc1        $f18, 0x44($s6)
    ctx->f18.u32l = MEM_W(ctx->r22, 0X44);
    // 0x802674C4: lwc1        $f4, 0x0($t5)
    ctx->f4.u32l = MEM_W(ctx->r13, 0X0);
    // 0x802674C8: sh          $t4, 0x12A($sp)
    MEM_H(0X12A, ctx->r29) = ctx->r12;
    // 0x802674CC: sh          $t2, 0x12E($sp)
    MEM_H(0X12E, ctx->r29) = ctx->r10;
    // 0x802674D0: jal         0x80272AEC
    // 0x802674D4: sub.s       $f12, $f18, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f12.fl = ctx->f18.fl - ctx->f4.fl;
    ovl_8024B800_func_80272AEC(rdram, ctx);
        goto after_1;
    // 0x802674D4: sub.s       $f12, $f18, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f12.fl = ctx->f18.fl - ctx->f4.fl;
    after_1:
    // 0x802674D8: lui         $at, 0x8028
    ctx->r1 = S32(0X8028 << 16);
    // 0x802674DC: lwc1        $f6, -0x2D08($at)
    ctx->f6.u32l = MEM_W(ctx->r1, -0X2D08);
    // 0x802674E0: lui         $t0, 0x8028
    ctx->r8 = S32(0X8028 << 16);
    // 0x802674E4: c.lt.s      $f6, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f6.fl < ctx->f0.fl;
    // 0x802674E8: lh          $t2, 0x12E($sp)
    ctx->r10 = MEM_H(ctx->r29, 0X12E);
    // 0x802674EC: lh          $t4, 0x12A($sp)
    ctx->r12 = MEM_H(ctx->r29, 0X12A);
    // 0x802674F0: bc1t        L_80267588
    if (c1cs) {
        // 0x802674F4: addiu       $t0, $t0, -0x3678
        ctx->r8 = ADD32(ctx->r8, -0X3678);
            goto L_80267588;
    }
    // 0x802674F4: addiu       $t0, $t0, -0x3678
    ctx->r8 = ADD32(ctx->r8, -0X3678);
    // 0x802674F8: lhu         $t8, 0x1A($s6)
    ctx->r24 = MEM_HU(ctx->r22, 0X1A);
    // 0x802674FC: sll         $t6, $t4, 3
    ctx->r14 = S32(ctx->r12 << 3);
    // 0x80267500: addiu       $t7, $sp, 0xB8
    ctx->r15 = ADD32(ctx->r29, 0XB8);
    // 0x80267504: lw          $t9, 0x0($s7)
    ctx->r25 = MEM_W(ctx->r23, 0X0);
    // 0x80267508: addu        $v0, $t6, $t7
    ctx->r2 = ADD32(ctx->r14, ctx->r15);
    // 0x8026750C: lui         $at, 0xC248
    ctx->r1 = S32(0XC248 << 16);
    // 0x80267510: sh          $t8, 0x0($v0)
    MEM_H(0X0, ctx->r2) = ctx->r24;
    // 0x80267514: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x80267518: lwc1        $f0, 0x0($t9)
    ctx->f0.u32l = MEM_W(ctx->r25, 0X0);
    // 0x8026751C: addiu       $t4, $t4, 0x1
    ctx->r12 = ADD32(ctx->r12, 0X1);
    // 0x80267520: c.lt.s      $f0, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f0.fl < ctx->f8.fl;
    // 0x80267524: sll         $t5, $t4, 16
    ctx->r13 = S32(ctx->r12 << 16);
    // 0x80267528: bc1f        L_8026753C
    if (!c1cs) {
        // 0x8026752C: sra         $t4, $t5, 16
        ctx->r12 = S32(SIGNED(ctx->r13) >> 16);
            goto L_8026753C;
    }
    // 0x8026752C: sra         $t4, $t5, 16
    ctx->r12 = S32(SIGNED(ctx->r13) >> 16);
    // 0x80267530: lwc1        $f10, 0x44($s6)
    ctx->f10.u32l = MEM_W(ctx->r22, 0X44);
    // 0x80267534: b           L_80267588
    // 0x80267538: swc1        $f10, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->f10.u32l;
        goto L_80267588;
    // 0x80267538: swc1        $f10, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->f10.u32l;
L_8026753C:
    // 0x8026753C: c.lt.s      $f0, $f24
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 24);
    c1cs = ctx->f0.fl < ctx->f24.fl;
    // 0x80267540: nop

    // 0x80267544: bc1f        L_80267578
    if (!c1cs) {
        // 0x80267548: nop
    
            goto L_80267578;
    }
    // 0x80267548: nop

    // 0x8026754C: lwc1        $f0, 0x44($s6)
    ctx->f0.u32l = MEM_W(ctx->r22, 0X44);
    // 0x80267550: nop

    // 0x80267554: c.lt.s      $f0, $f20
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    c1cs = ctx->f0.fl < ctx->f20.fl;
    // 0x80267558: nop

    // 0x8026755C: bc1f        L_80267570
    if (!c1cs) {
        // 0x80267560: nop
    
            goto L_80267570;
    }
    // 0x80267560: nop

    // 0x80267564: neg.s       $f16, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f16.fl = -ctx->f0.fl;
    // 0x80267568: b           L_80267588
    // 0x8026756C: swc1        $f16, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->f16.u32l;
        goto L_80267588;
    // 0x8026756C: swc1        $f16, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->f16.u32l;
L_80267570:
    // 0x80267570: b           L_80267588
    // 0x80267574: swc1        $f0, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->f0.u32l;
        goto L_80267588;
    // 0x80267574: swc1        $f0, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->f0.u32l;
L_80267578:
    // 0x80267578: lwc1        $f18, 0x44($s6)
    ctx->f18.u32l = MEM_W(ctx->r22, 0X44);
    // 0x8026757C: nop

    // 0x80267580: neg.s       $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = -ctx->f18.fl;
    // 0x80267584: swc1        $f4, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->f4.u32l;
L_80267588:
    // 0x80267588: addiu       $t2, $t2, 0x1
    ctx->r10 = ADD32(ctx->r10, 0X1);
    // 0x8026758C: sll         $t7, $t2, 16
    ctx->r15 = S32(ctx->r10 << 16);
    // 0x80267590: sra         $t2, $t7, 16
    ctx->r10 = S32(SIGNED(ctx->r15) >> 16);
    // 0x80267594: slti        $at, $t2, 0xB
    ctx->r1 = SIGNED(ctx->r10) < 0XB ? 1 : 0;
    // 0x80267598: bne         $at, $zero, L_802673D0
    if (ctx->r1 != 0) {
        // 0x8026759C: addiu       $s6, $s6, 0xF8
        ctx->r22 = ADD32(ctx->r22, 0XF8);
            goto L_802673D0;
    }
    // 0x8026759C: addiu       $s6, $s6, 0xF8
    ctx->r22 = ADD32(ctx->r22, 0XF8);
    // 0x802675A0: lw          $t9, 0x130($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X130);
    // 0x802675A4: slti        $at, $t4, 0x3
    ctx->r1 = SIGNED(ctx->r12) < 0X3 ? 1 : 0;
    // 0x802675A8: lw          $t5, 0x24($t9)
    ctx->r13 = MEM_W(ctx->r25, 0X24);
    // 0x802675AC: nop

    // 0x802675B0: lw          $s6, 0x18($t5)
    ctx->r22 = MEM_W(ctx->r13, 0X18);
    // 0x802675B4: beq         $t4, $zero, L_80267898
    if (ctx->r12 == 0) {
        // 0x802675B8: lw          $ra, 0x54($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X54);
            goto L_80267898;
    }
    // 0x802675B8: lw          $ra, 0x54($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X54);
    // 0x802675BC: bne         $at, $zero, L_802675E8
    if (ctx->r1 != 0) {
        // 0x802675C0: or          $a0, $zero, $zero
        ctx->r4 = 0 | 0;
            goto L_802675E8;
    }
    // 0x802675C0: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x802675C4: addiu       $a1, $t4, -0x1
    ctx->r5 = ADD32(ctx->r12, -0X1);
    // 0x802675C8: sll         $t6, $a1, 16
    ctx->r14 = S32(ctx->r5 << 16);
    // 0x802675CC: sra         $a1, $t6, 16
    ctx->r5 = S32(SIGNED(ctx->r14) >> 16);
    // 0x802675D0: addiu       $a2, $sp, 0xB8
    ctx->r6 = ADD32(ctx->r29, 0XB8);
    // 0x802675D4: jal         0x8005DE74
    // 0x802675D8: sh          $t4, 0x12A($sp)
    MEM_H(0X12A, ctx->r29) = ctx->r12;
    func_8005DE74(rdram, ctx);
        goto after_2;
    // 0x802675D8: sh          $t4, 0x12A($sp)
    MEM_H(0X12A, ctx->r29) = ctx->r12;
    after_2:
    // 0x802675DC: lui         $t0, 0x8028
    ctx->r8 = S32(0X8028 << 16);
    // 0x802675E0: lh          $t4, 0x12A($sp)
    ctx->r12 = MEM_H(ctx->r29, 0X12A);
    // 0x802675E4: addiu       $t0, $t0, -0x3678
    ctx->r8 = ADD32(ctx->r8, -0X3678);
L_802675E8:
    // 0x802675E8: blez        $t4, L_80267894
    if (SIGNED(ctx->r12) <= 0) {
        // 0x802675EC: or          $t2, $zero, $zero
        ctx->r10 = 0 | 0;
            goto L_80267894;
    }
    // 0x802675EC: or          $t2, $zero, $zero
    ctx->r10 = 0 | 0;
    // 0x802675F0: lui         $s2, 0x8028
    ctx->r18 = S32(0X8028 << 16);
    // 0x802675F4: lhu         $t1, 0x136($sp)
    ctx->r9 = MEM_HU(ctx->r29, 0X136);
    // 0x802675F8: addiu       $s2, $s2, -0x3060
    ctx->r18 = ADD32(ctx->r18, -0X3060);
    // 0x802675FC: addiu       $s4, $sp, 0x68
    ctx->r20 = ADD32(ctx->r29, 0X68);
    // 0x80267600: addiu       $s3, $zero, 0xF8
    ctx->r19 = ADD32(0, 0XF8);
    // 0x80267604: sll         $t9, $t2, 3
    ctx->r25 = S32(ctx->r10 << 3);
L_80267608:
    // 0x80267608: addiu       $t5, $sp, 0xB8
    ctx->r13 = ADD32(ctx->r29, 0XB8);
    // 0x8026760C: addu        $t3, $t9, $t5
    ctx->r11 = ADD32(ctx->r25, ctx->r13);
    // 0x80267610: lhu         $t6, 0x0($t3)
    ctx->r14 = MEM_HU(ctx->r11, 0X0);
    // 0x80267614: lw          $t8, 0x130($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X130);
    // 0x80267618: sll         $t7, $t6, 5
    ctx->r15 = S32(ctx->r14 << 5);
    // 0x8026761C: subu        $t7, $t7, $t6
    ctx->r15 = SUB32(ctx->r15, ctx->r14);
    // 0x80267620: sll         $t7, $t7, 3
    ctx->r15 = S32(ctx->r15 << 3);
    // 0x80267624: lw          $s1, 0x18($t8)
    ctx->r17 = MEM_W(ctx->r24, 0X18);
    // 0x80267628: addu        $s0, $t7, $s6
    ctx->r16 = ADD32(ctx->r15, ctx->r22);
    // 0x8026762C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x80267630: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x80267634: addu        $t8, $s2, $a0
    ctx->r24 = ADD32(ctx->r18, ctx->r4);
L_80267638:
    // 0x80267638: lb          $v0, 0x0($t8)
    ctx->r2 = MEM_B(ctx->r24, 0X0);
    // 0x8026763C: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    // 0x80267640: beq         $v0, $zero, L_80267728
    if (ctx->r2 == 0) {
        // 0x80267644: sll         $t9, $a0, 16
        ctx->r25 = S32(ctx->r4 << 16);
            goto L_80267728;
    }
    // 0x80267644: sll         $t9, $a0, 16
    ctx->r25 = S32(ctx->r4 << 16);
    // 0x80267648: multu       $v0, $s3
    result = U64(U32(ctx->r2)) * U64(U32(ctx->r19)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8026764C: andi        $t5, $fp, 0x2
    ctx->r13 = ctx->r30 & 0X2;
    // 0x80267650: mflo        $t9
    ctx->r25 = lo;
    // 0x80267654: addu        $v1, $t9, $s1
    ctx->r3 = ADD32(ctx->r25, ctx->r17);
    // 0x80267658: beq         $t5, $zero, L_802676A4
    if (ctx->r13 == 0) {
        // 0x8026765C: nop
    
            goto L_802676A4;
    }
    // 0x8026765C: nop

    // 0x80267660: lwc1        $f0, 0x44($v1)
    ctx->f0.u32l = MEM_W(ctx->r3, 0X44);
    // 0x80267664: lwc1        $f6, 0x44($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X44);
    // 0x80267668: nop

    // 0x8026766C: mul.s       $f8, $f6, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = MUL_S(ctx->f6.fl, ctx->f0.fl);
    // 0x80267670: c.lt.s      $f8, $f20
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 20);
    c1cs = ctx->f8.fl < ctx->f20.fl;
    // 0x80267674: nop

    // 0x80267678: bc1t        L_80267728
    if (c1cs) {
        // 0x8026767C: sll         $t9, $a0, 16
        ctx->r25 = S32(ctx->r4 << 16);
            goto L_80267728;
    }
    // 0x8026767C: sll         $t9, $a0, 16
    ctx->r25 = S32(ctx->r4 << 16);
    // 0x80267680: lw          $t6, 0x0($s7)
    ctx->r14 = MEM_W(ctx->r23, 0X0);
    // 0x80267684: nop

    // 0x80267688: lwc1        $f10, 0x0($t6)
    ctx->f10.u32l = MEM_W(ctx->r14, 0X0);
    // 0x8026768C: nop

    // 0x80267690: mul.s       $f16, $f0, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = MUL_S(ctx->f0.fl, ctx->f10.fl);
    // 0x80267694: c.lt.s      $f16, $f20
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 20);
    c1cs = ctx->f16.fl < ctx->f20.fl;
    // 0x80267698: nop

    // 0x8026769C: bc1t        L_80267728
    if (c1cs) {
        // 0x802676A0: sll         $t9, $a0, 16
        ctx->r25 = S32(ctx->r4 << 16);
            goto L_80267728;
    }
    // 0x802676A0: sll         $t9, $a0, 16
    ctx->r25 = S32(ctx->r4 << 16);
L_802676A4:
    // 0x802676A4: lw          $t7, 0xD4($v1)
    ctx->r15 = MEM_W(ctx->r3, 0XD4);
    // 0x802676A8: nop

    // 0x802676AC: lbu         $t8, 0x5($t7)
    ctx->r24 = MEM_BU(ctx->r15, 0X5);
    // 0x802676B0: nop

    // 0x802676B4: sll         $t9, $t8, 1
    ctx->r25 = S32(ctx->r24 << 1);
    // 0x802676B8: addu        $t5, $t0, $t9
    ctx->r13 = ADD32(ctx->r8, ctx->r25);
    // 0x802676BC: lhu         $t6, 0x0($t5)
    ctx->r14 = MEM_HU(ctx->r13, 0X0);
    // 0x802676C0: nop

    // 0x802676C4: and         $t7, $t6, $t1
    ctx->r15 = ctx->r14 & ctx->r9;
    // 0x802676C8: beq         $t7, $zero, L_80267728
    if (ctx->r15 == 0) {
        // 0x802676CC: sll         $t9, $a0, 16
        ctx->r25 = S32(ctx->r4 << 16);
            goto L_80267728;
    }
    // 0x802676CC: sll         $t9, $a0, 16
    ctx->r25 = S32(ctx->r4 << 16);
    // 0x802676D0: lhu         $t8, 0x12($v1)
    ctx->r24 = MEM_HU(ctx->r3, 0X12);
    // 0x802676D4: sll         $t5, $a3, 3
    ctx->r13 = S32(ctx->r7 << 3);
    // 0x802676D8: andi        $t9, $t8, 0x300
    ctx->r25 = ctx->r24 & 0X300;
    // 0x802676DC: bne         $t9, $zero, L_80267728
    if (ctx->r25 != 0) {
        // 0x802676E0: sll         $t9, $a0, 16
        ctx->r25 = S32(ctx->r4 << 16);
            goto L_80267728;
    }
    // 0x802676E0: sll         $t9, $a0, 16
    ctx->r25 = S32(ctx->r4 << 16);
    // 0x802676E4: lhu         $t6, 0x1A($v1)
    ctx->r14 = MEM_HU(ctx->r3, 0X1A);
    // 0x802676E8: addu        $v0, $s4, $t5
    ctx->r2 = ADD32(ctx->r20, ctx->r13);
    // 0x802676EC: sh          $t6, 0x0($v0)
    MEM_H(0X0, ctx->r2) = ctx->r14;
    // 0x802676F0: lwc1        $f4, 0x4C($v1)
    ctx->f4.u32l = MEM_W(ctx->r3, 0X4C);
    // 0x802676F4: lwc1        $f18, 0x4C($s0)
    ctx->f18.u32l = MEM_W(ctx->r16, 0X4C);
    // 0x802676F8: lwc1        $f8, 0x44($v1)
    ctx->f8.u32l = MEM_W(ctx->r3, 0X44);
    // 0x802676FC: sub.s       $f0, $f18, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f0.fl = ctx->f18.fl - ctx->f4.fl;
    // 0x80267700: lwc1        $f6, 0x44($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X44);
    // 0x80267704: mul.s       $f10, $f0, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f10.fl = MUL_S(ctx->f0.fl, ctx->f0.fl);
    // 0x80267708: sub.s       $f2, $f6, $f8
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f2.fl = ctx->f6.fl - ctx->f8.fl;
    // 0x8026770C: addiu       $a3, $a3, 0x1
    ctx->r7 = ADD32(ctx->r7, 0X1);
    // 0x80267710: sll         $t7, $a3, 16
    ctx->r15 = S32(ctx->r7 << 16);
    // 0x80267714: mul.s       $f16, $f2, $f2
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f16.fl = MUL_S(ctx->f2.fl, ctx->f2.fl);
    // 0x80267718: sra         $a3, $t7, 16
    ctx->r7 = S32(SIGNED(ctx->r15) >> 16);
    // 0x8026771C: add.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl + ctx->f16.fl;
    // 0x80267720: swc1        $f18, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->f18.u32l;
    // 0x80267724: sll         $t9, $a0, 16
    ctx->r25 = S32(ctx->r4 << 16);
L_80267728:
    // 0x80267728: sra         $a0, $t9, 16
    ctx->r4 = S32(SIGNED(ctx->r25) >> 16);
    // 0x8026772C: slti        $at, $a0, 0xA
    ctx->r1 = SIGNED(ctx->r4) < 0XA ? 1 : 0;
    // 0x80267730: bne         $at, $zero, L_80267638
    if (ctx->r1 != 0) {
        // 0x80267734: addu        $t8, $s2, $a0
        ctx->r24 = ADD32(ctx->r18, ctx->r4);
            goto L_80267638;
    }
    // 0x80267734: addu        $t8, $s2, $a0
    ctx->r24 = ADD32(ctx->r18, ctx->r4);
    // 0x80267738: beq         $a3, $zero, L_8026787C
    if (ctx->r7 == 0) {
        // 0x8026773C: or          $a0, $zero, $zero
        ctx->r4 = 0 | 0;
            goto L_8026787C;
    }
    // 0x8026773C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x80267740: addiu       $a1, $a3, -0x1
    ctx->r5 = ADD32(ctx->r7, -0X1);
    // 0x80267744: sll         $t6, $a1, 16
    ctx->r14 = S32(ctx->r5 << 16);
    // 0x80267748: sra         $a1, $t6, 16
    ctx->r5 = S32(SIGNED(ctx->r14) >> 16);
    // 0x8026774C: or          $a2, $s4, $zero
    ctx->r6 = ctx->r20 | 0;
    // 0x80267750: andi        $s5, $fp, 0x1
    ctx->r21 = ctx->r30 & 0X1;
    // 0x80267754: sh          $t2, 0x12E($sp)
    MEM_H(0X12E, ctx->r29) = ctx->r10;
    // 0x80267758: sw          $t3, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r11;
    // 0x8026775C: jal         0x8005DE74
    // 0x80267760: sh          $t4, 0x12A($sp)
    MEM_H(0X12A, ctx->r29) = ctx->r12;
    func_8005DE74(rdram, ctx);
        goto after_3;
    // 0x80267760: sh          $t4, 0x12A($sp)
    MEM_H(0X12A, ctx->r29) = ctx->r12;
    after_3:
    // 0x80267764: lh          $a1, 0x68($sp)
    ctx->r5 = MEM_H(ctx->r29, 0X68);
    // 0x80267768: lui         $t0, 0x8028
    ctx->r8 = S32(0X8028 << 16);
    // 0x8026776C: lhu         $t1, 0x136($sp)
    ctx->r9 = MEM_HU(ctx->r29, 0X136);
    // 0x80267770: lh          $t2, 0x12E($sp)
    ctx->r10 = MEM_H(ctx->r29, 0X12E);
    // 0x80267774: lw          $t3, 0x64($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X64);
    // 0x80267778: lh          $t4, 0x12A($sp)
    ctx->r12 = MEM_H(ctx->r29, 0X12A);
    // 0x8026777C: addu        $t8, $s2, $a1
    ctx->r24 = ADD32(ctx->r18, ctx->r5);
    // 0x80267780: addiu       $t0, $t0, -0x3678
    ctx->r8 = ADD32(ctx->r8, -0X3678);
    // 0x80267784: beq         $s5, $zero, L_8026782C
    if (ctx->r21 == 0) {
        // 0x80267788: sb          $zero, -0x1($t8)
        MEM_B(-0X1, ctx->r24) = 0;
            goto L_8026782C;
    }
    // 0x80267788: sb          $zero, -0x1($t8)
    MEM_B(-0X1, ctx->r24) = 0;
    // 0x8026778C: lbu         $t9, 0x0($s0)
    ctx->r25 = MEM_BU(ctx->r16, 0X0);
    // 0x80267790: addiu       $at, $zero, 0x13
    ctx->r1 = ADD32(0, 0X13);
    // 0x80267794: bne         $t9, $at, L_8026782C
    if (ctx->r25 != ctx->r1) {
        // 0x80267798: nop
    
            goto L_8026782C;
    }
    // 0x80267798: nop

    // 0x8026779C: lh          $a0, 0x30($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X30);
    // 0x802677A0: sh          $t4, 0x12A($sp)
    MEM_H(0X12A, ctx->r29) = ctx->r12;
    // 0x802677A4: sw          $t3, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r11;
    // 0x802677A8: sh          $t2, 0x12E($sp)
    MEM_H(0X12E, ctx->r29) = ctx->r10;
    // 0x802677AC: jal         0x80272AD4
    // 0x802677B0: sh          $a1, 0x126($sp)
    MEM_H(0X126, ctx->r29) = ctx->r5;
    ovl_8024B800_func_80272AD4(rdram, ctx);
        goto after_4;
    // 0x802677B0: sh          $a1, 0x126($sp)
    MEM_H(0X126, ctx->r29) = ctx->r5;
    after_4:
    // 0x802677B4: lh          $a1, 0x126($sp)
    ctx->r5 = MEM_H(ctx->r29, 0X126);
    // 0x802677B8: lui         $t0, 0x8028
    ctx->r8 = S32(0X8028 << 16);
    // 0x802677BC: lhu         $t1, 0x136($sp)
    ctx->r9 = MEM_HU(ctx->r29, 0X136);
    // 0x802677C0: lh          $t2, 0x12E($sp)
    ctx->r10 = MEM_H(ctx->r29, 0X12E);
    // 0x802677C4: lw          $t3, 0x64($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X64);
    // 0x802677C8: lh          $t4, 0x12A($sp)
    ctx->r12 = MEM_H(ctx->r29, 0X12A);
    // 0x802677CC: sltiu       $at, $v0, 0xC8
    ctx->r1 = ctx->r2 < 0XC8 ? 1 : 0;
    // 0x802677D0: beq         $at, $zero, L_8026782C
    if (ctx->r1 == 0) {
        // 0x802677D4: addiu       $t0, $t0, -0x3678
        ctx->r8 = ADD32(ctx->r8, -0X3678);
            goto L_8026782C;
    }
    // 0x802677D4: addiu       $t0, $t0, -0x3678
    ctx->r8 = ADD32(ctx->r8, -0X3678);
    // 0x802677D8: lw          $v1, 0xC8($s0)
    ctx->r3 = MEM_W(ctx->r16, 0XC8);
    // 0x802677DC: nop

    // 0x802677E0: lhu         $t5, 0x8($v1)
    ctx->r13 = MEM_HU(ctx->r3, 0X8);
    // 0x802677E4: nop

    // 0x802677E8: andi        $t6, $t5, 0x1
    ctx->r14 = ctx->r13 & 0X1;
    // 0x802677EC: beq         $t6, $zero, L_80267800
    if (ctx->r14 == 0) {
        // 0x802677F0: nop
    
            goto L_80267800;
    }
    // 0x802677F0: nop

    // 0x802677F4: lh          $v0, 0x2E($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X2E);
    // 0x802677F8: b           L_80267810
    // 0x802677FC: lh          $t7, 0x8CA($v1)
    ctx->r15 = MEM_H(ctx->r3, 0X8CA);
        goto L_80267810;
    // 0x802677FC: lh          $t7, 0x8CA($v1)
    ctx->r15 = MEM_H(ctx->r3, 0X8CA);
L_80267800:
    // 0x80267800: lh          $v0, 0x2E($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X2E);
    // 0x80267804: nop

    // 0x80267808: negu        $v0, $v0
    ctx->r2 = SUB32(0, ctx->r2);
    // 0x8026780C: lh          $t7, 0x8CA($v1)
    ctx->r15 = MEM_H(ctx->r3, 0X8CA);
L_80267810:
    // 0x80267810: nop

    // 0x80267814: addiu       $t8, $t7, -0x3C
    ctx->r24 = ADD32(ctx->r15, -0X3C);
    // 0x80267818: slt         $at, $t8, $v0
    ctx->r1 = SIGNED(ctx->r24) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x8026781C: bne         $at, $zero, L_80267894
    if (ctx->r1 != 0) {
        // 0x80267820: slti        $at, $v0, 0x123
        ctx->r1 = SIGNED(ctx->r2) < 0X123 ? 1 : 0;
            goto L_80267894;
    }
    // 0x80267820: slti        $at, $v0, 0x123
    ctx->r1 = SIGNED(ctx->r2) < 0X123 ? 1 : 0;
    // 0x80267824: beq         $at, $zero, L_80267898
    if (ctx->r1 == 0) {
        // 0x80267828: lw          $ra, 0x54($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X54);
            goto L_80267898;
    }
    // 0x80267828: lw          $ra, 0x54($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X54);
L_8026782C:
    // 0x8026782C: multu       $a1, $s3
    result = U64(U32(ctx->r5)) * U64(U32(ctx->r19)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80267830: lhu         $v1, 0x0($t3)
    ctx->r3 = MEM_HU(ctx->r11, 0X0);
    // 0x80267834: addiu       $t8, $zero, 0x17
    ctx->r24 = ADD32(0, 0X17);
    // 0x80267838: mflo        $t9
    ctx->r25 = lo;
    // 0x8026783C: addu        $v0, $s1, $t9
    ctx->r2 = ADD32(ctx->r17, ctx->r25);
    // 0x80267840: lbu         $t5, 0x7($v0)
    ctx->r13 = MEM_BU(ctx->r2, 0X7);
    // 0x80267844: nop

    // 0x80267848: beq         $t5, $v1, L_80267868
    if (ctx->r13 == ctx->r3) {
        // 0x8026784C: nop
    
            goto L_80267868;
    }
    // 0x8026784C: nop

    // 0x80267850: lbu         $t6, 0x9($v0)
    ctx->r14 = MEM_BU(ctx->r2, 0X9);
    // 0x80267854: addiu       $t7, $zero, 0xF
    ctx->r15 = ADD32(0, 0XF);
    // 0x80267858: bne         $t6, $zero, L_80267868
    if (ctx->r14 != 0) {
        // 0x8026785C: nop
    
            goto L_80267868;
    }
    // 0x8026785C: nop

    // 0x80267860: sb          $v1, 0x7($v0)
    MEM_B(0X7, ctx->r2) = ctx->r3;
    // 0x80267864: sb          $t7, 0x9($v0)
    MEM_B(0X9, ctx->r2) = ctx->r15;
L_80267868:
    // 0x80267868: lhu         $t9, 0x12($v0)
    ctx->r25 = MEM_HU(ctx->r2, 0X12);
    // 0x8026786C: sb          $t8, 0x0($v0)
    MEM_B(0X0, ctx->r2) = ctx->r24;
    // 0x80267870: ori         $t5, $t9, 0x100
    ctx->r13 = ctx->r25 | 0X100;
    // 0x80267874: sh          $t5, 0x12($v0)
    MEM_H(0X12, ctx->r2) = ctx->r13;
    // 0x80267878: sb          $a1, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r5;
L_8026787C:
    // 0x8026787C: addiu       $t2, $t2, 0x1
    ctx->r10 = ADD32(ctx->r10, 0X1);
    // 0x80267880: sll         $t6, $t2, 16
    ctx->r14 = S32(ctx->r10 << 16);
    // 0x80267884: sra         $t2, $t6, 16
    ctx->r10 = S32(SIGNED(ctx->r14) >> 16);
    // 0x80267888: slt         $at, $t2, $t4
    ctx->r1 = SIGNED(ctx->r10) < SIGNED(ctx->r12) ? 1 : 0;
    // 0x8026788C: bne         $at, $zero, L_80267608
    if (ctx->r1 != 0) {
        // 0x80267890: sll         $t9, $t2, 3
        ctx->r25 = S32(ctx->r10 << 3);
            goto L_80267608;
    }
    // 0x80267890: sll         $t9, $t2, 3
    ctx->r25 = S32(ctx->r10 << 3);
L_80267894:
    // 0x80267894: lw          $ra, 0x54($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X54);
L_80267898:
    // 0x80267898: lwc1        $f21, 0x18($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X18);
    // 0x8026789C: lwc1        $f20, 0x1C($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x802678A0: lwc1        $f23, 0x20($sp)
    ctx->f_odd[(23 - 1) * 2] = MEM_W(ctx->r29, 0X20);
    // 0x802678A4: lwc1        $f22, 0x24($sp)
    ctx->f22.u32l = MEM_W(ctx->r29, 0X24);
    // 0x802678A8: lwc1        $f25, 0x28($sp)
    ctx->f_odd[(25 - 1) * 2] = MEM_W(ctx->r29, 0X28);
    // 0x802678AC: lwc1        $f24, 0x2C($sp)
    ctx->f24.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x802678B0: lw          $s0, 0x30($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X30);
    // 0x802678B4: lw          $s1, 0x34($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X34);
    // 0x802678B8: lw          $s2, 0x38($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X38);
    // 0x802678BC: lw          $s3, 0x3C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X3C);
    // 0x802678C0: lw          $s4, 0x40($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X40);
    // 0x802678C4: lw          $s5, 0x44($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X44);
    // 0x802678C8: lw          $s6, 0x48($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X48);
    // 0x802678CC: lw          $s7, 0x4C($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X4C);
    // 0x802678D0: lw          $fp, 0x50($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X50);
    // 0x802678D4: jr          $ra
    // 0x802678D8: addiu       $sp, $sp, 0x130
    ctx->r29 = ADD32(ctx->r29, 0X130);
    return;
    // 0x802678D8: addiu       $sp, $sp, 0x130
    ctx->r29 = ADD32(ctx->r29, 0X130);
;}
RECOMP_FUNC void ovl_8024B800_func_802674B8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
L_802673D0:
    // 0x802674B8: nop

    // 0x802674BC: lw          $t5, 0x0($s7)
    ctx->r13 = MEM_W(ctx->r23, 0X0);
    // 0x802674C0: lwc1        $f18, 0x44($s6)
    ctx->f18.u32l = MEM_W(ctx->r22, 0X44);
    // 0x802674C4: lwc1        $f4, 0x0($t5)
    ctx->f4.u32l = MEM_W(ctx->r13, 0X0);
    // 0x802674C8: sh          $t4, 0x12A($sp)
    MEM_H(0X12A, ctx->r29) = ctx->r12;
    // 0x802674CC: sh          $t2, 0x12E($sp)
    MEM_H(0X12E, ctx->r29) = ctx->r10;
    // 0x802674D0: jal         0x80272AEC
    // 0x802674D4: sub.s       $f12, $f18, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f12.fl = ctx->f18.fl - ctx->f4.fl;
    ovl_8024B800_func_80272AEC(rdram, ctx);
        goto after_0;
    // 0x802674D4: sub.s       $f12, $f18, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f12.fl = ctx->f18.fl - ctx->f4.fl;
    after_0:
    // 0x802674D8: lui         $at, 0x8028
    ctx->r1 = S32(0X8028 << 16);
    // 0x802674DC: lwc1        $f6, -0x2D08($at)
    ctx->f6.u32l = MEM_W(ctx->r1, -0X2D08);
    // 0x802674E0: lui         $t0, 0x8028
    ctx->r8 = S32(0X8028 << 16);
    // 0x802674E4: c.lt.s      $f6, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f6.fl < ctx->f0.fl;
    // 0x802674E8: lh          $t2, 0x12E($sp)
    ctx->r10 = MEM_H(ctx->r29, 0X12E);
    // 0x802674EC: lh          $t4, 0x12A($sp)
    ctx->r12 = MEM_H(ctx->r29, 0X12A);
    // 0x802674F0: bc1t        L_80267588
    if (c1cs) {
        // 0x802674F4: addiu       $t0, $t0, -0x3678
        ctx->r8 = ADD32(ctx->r8, -0X3678);
            goto L_80267588;
    }
    // 0x802674F4: addiu       $t0, $t0, -0x3678
    ctx->r8 = ADD32(ctx->r8, -0X3678);
    // 0x802674F8: lhu         $t8, 0x1A($s6)
    ctx->r24 = MEM_HU(ctx->r22, 0X1A);
    // 0x802674FC: sll         $t6, $t4, 3
    ctx->r14 = S32(ctx->r12 << 3);
    // 0x80267500: addiu       $t7, $sp, 0xB8
    ctx->r15 = ADD32(ctx->r29, 0XB8);
    // 0x80267504: lw          $t9, 0x0($s7)
    ctx->r25 = MEM_W(ctx->r23, 0X0);
    // 0x80267508: addu        $v0, $t6, $t7
    ctx->r2 = ADD32(ctx->r14, ctx->r15);
    // 0x8026750C: lui         $at, 0xC248
    ctx->r1 = S32(0XC248 << 16);
    // 0x80267510: sh          $t8, 0x0($v0)
    MEM_H(0X0, ctx->r2) = ctx->r24;
    // 0x80267514: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x80267518: lwc1        $f0, 0x0($t9)
    ctx->f0.u32l = MEM_W(ctx->r25, 0X0);
    // 0x8026751C: addiu       $t4, $t4, 0x1
    ctx->r12 = ADD32(ctx->r12, 0X1);
    // 0x80267520: c.lt.s      $f0, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f0.fl < ctx->f8.fl;
    // 0x80267524: sll         $t5, $t4, 16
    ctx->r13 = S32(ctx->r12 << 16);
    // 0x80267528: bc1f        L_8026753C
    if (!c1cs) {
        // 0x8026752C: sra         $t4, $t5, 16
        ctx->r12 = S32(SIGNED(ctx->r13) >> 16);
            goto L_8026753C;
    }
    // 0x8026752C: sra         $t4, $t5, 16
    ctx->r12 = S32(SIGNED(ctx->r13) >> 16);
    // 0x80267530: lwc1        $f10, 0x44($s6)
    ctx->f10.u32l = MEM_W(ctx->r22, 0X44);
    // 0x80267534: b           L_80267588
    // 0x80267538: swc1        $f10, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->f10.u32l;
        goto L_80267588;
    // 0x80267538: swc1        $f10, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->f10.u32l;
L_8026753C:
    // 0x8026753C: c.lt.s      $f0, $f24
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 24);
    c1cs = ctx->f0.fl < ctx->f24.fl;
    // 0x80267540: nop

    // 0x80267544: bc1f        L_80267578
    if (!c1cs) {
        // 0x80267548: nop
    
            goto L_80267578;
    }
    // 0x80267548: nop

    // 0x8026754C: lwc1        $f0, 0x44($s6)
    ctx->f0.u32l = MEM_W(ctx->r22, 0X44);
    // 0x80267550: nop

    // 0x80267554: c.lt.s      $f0, $f20
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    c1cs = ctx->f0.fl < ctx->f20.fl;
    // 0x80267558: nop

    // 0x8026755C: bc1f        L_80267570
    if (!c1cs) {
        // 0x80267560: nop
    
            goto L_80267570;
    }
    // 0x80267560: nop

    // 0x80267564: neg.s       $f16, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f16.fl = -ctx->f0.fl;
    // 0x80267568: b           L_80267588
    // 0x8026756C: swc1        $f16, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->f16.u32l;
        goto L_80267588;
    // 0x8026756C: swc1        $f16, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->f16.u32l;
L_80267570:
    // 0x80267570: b           L_80267588
    // 0x80267574: swc1        $f0, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->f0.u32l;
        goto L_80267588;
    // 0x80267574: swc1        $f0, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->f0.u32l;
L_80267578:
    // 0x80267578: lwc1        $f18, 0x44($s6)
    ctx->f18.u32l = MEM_W(ctx->r22, 0X44);
    // 0x8026757C: nop

    // 0x80267580: neg.s       $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = -ctx->f18.fl;
    // 0x80267584: swc1        $f4, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->f4.u32l;
L_80267588:
    // 0x80267588: addiu       $t2, $t2, 0x1
    ctx->r10 = ADD32(ctx->r10, 0X1);
    // 0x8026758C: sll         $t7, $t2, 16
    ctx->r15 = S32(ctx->r10 << 16);
    // 0x80267590: sra         $t2, $t7, 16
    ctx->r10 = S32(SIGNED(ctx->r15) >> 16);
    // 0x80267594: slti        $at, $t2, 0xB
    ctx->r1 = SIGNED(ctx->r10) < 0XB ? 1 : 0;
    // 0x80267598: bne         $at, $zero, L_802673D0
    if (ctx->r1 != 0) {
            // 0x8026759C: addiu       $s6, $s6, 0xF8
    ctx->r22 = ADD32(ctx->r22, 0XF8);
    ovl_8024B800_func_802673D0(rdram, ctx);
    return;
    }
    // 0x8026759C: addiu       $s6, $s6, 0xF8
    ctx->r22 = ADD32(ctx->r22, 0XF8);
    // 0x802675A0: lw          $t9, 0x130($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X130);
    // 0x802675A4: slti        $at, $t4, 0x3
    ctx->r1 = SIGNED(ctx->r12) < 0X3 ? 1 : 0;
    // 0x802675A8: lw          $t5, 0x24($t9)
    ctx->r13 = MEM_W(ctx->r25, 0X24);
    // 0x802675AC: nop

    // 0x802675B0: lw          $s6, 0x18($t5)
    ctx->r22 = MEM_W(ctx->r13, 0X18);
    // 0x802675B4: beq         $t4, $zero, L_80267898
    if (ctx->r12 == 0) {
        // 0x802675B8: lw          $ra, 0x54($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X54);
            goto L_80267898;
    }
    // 0x802675B8: lw          $ra, 0x54($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X54);
    // 0x802675BC: bne         $at, $zero, L_802675E8
    if (ctx->r1 != 0) {
        // 0x802675C0: or          $a0, $zero, $zero
        ctx->r4 = 0 | 0;
            goto L_802675E8;
    }
    // 0x802675C0: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x802675C4: addiu       $a1, $t4, -0x1
    ctx->r5 = ADD32(ctx->r12, -0X1);
    // 0x802675C8: sll         $t6, $a1, 16
    ctx->r14 = S32(ctx->r5 << 16);
    // 0x802675CC: sra         $a1, $t6, 16
    ctx->r5 = S32(SIGNED(ctx->r14) >> 16);
    // 0x802675D0: addiu       $a2, $sp, 0xB8
    ctx->r6 = ADD32(ctx->r29, 0XB8);
    // 0x802675D4: jal         0x8005DE74
    // 0x802675D8: sh          $t4, 0x12A($sp)
    MEM_H(0X12A, ctx->r29) = ctx->r12;
    func_8005DE74(rdram, ctx);
        goto after_1;
    // 0x802675D8: sh          $t4, 0x12A($sp)
    MEM_H(0X12A, ctx->r29) = ctx->r12;
    after_1:
    // 0x802675DC: lui         $t0, 0x8028
    ctx->r8 = S32(0X8028 << 16);
    // 0x802675E0: lh          $t4, 0x12A($sp)
    ctx->r12 = MEM_H(ctx->r29, 0X12A);
    // 0x802675E4: addiu       $t0, $t0, -0x3678
    ctx->r8 = ADD32(ctx->r8, -0X3678);
L_802675E8:
    // 0x802675E8: blez        $t4, L_80267894
    if (SIGNED(ctx->r12) <= 0) {
        // 0x802675EC: or          $t2, $zero, $zero
        ctx->r10 = 0 | 0;
            goto L_80267894;
    }
    // 0x802675EC: or          $t2, $zero, $zero
    ctx->r10 = 0 | 0;
    // 0x802675F0: lui         $s2, 0x8028
    ctx->r18 = S32(0X8028 << 16);
    // 0x802675F4: lhu         $t1, 0x136($sp)
    ctx->r9 = MEM_HU(ctx->r29, 0X136);
    // 0x802675F8: addiu       $s2, $s2, -0x3060
    ctx->r18 = ADD32(ctx->r18, -0X3060);
    // 0x802675FC: addiu       $s4, $sp, 0x68
    ctx->r20 = ADD32(ctx->r29, 0X68);
    // 0x80267600: addiu       $s3, $zero, 0xF8
    ctx->r19 = ADD32(0, 0XF8);
    // 0x80267604: sll         $t9, $t2, 3
    ctx->r25 = S32(ctx->r10 << 3);
L_80267608:
    // 0x80267608: addiu       $t5, $sp, 0xB8
    ctx->r13 = ADD32(ctx->r29, 0XB8);
    // 0x8026760C: addu        $t3, $t9, $t5
    ctx->r11 = ADD32(ctx->r25, ctx->r13);
    // 0x80267610: lhu         $t6, 0x0($t3)
    ctx->r14 = MEM_HU(ctx->r11, 0X0);
    // 0x80267614: lw          $t8, 0x130($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X130);
    // 0x80267618: sll         $t7, $t6, 5
    ctx->r15 = S32(ctx->r14 << 5);
    // 0x8026761C: subu        $t7, $t7, $t6
    ctx->r15 = SUB32(ctx->r15, ctx->r14);
    // 0x80267620: sll         $t7, $t7, 3
    ctx->r15 = S32(ctx->r15 << 3);
    // 0x80267624: lw          $s1, 0x18($t8)
    ctx->r17 = MEM_W(ctx->r24, 0X18);
    // 0x80267628: addu        $s0, $t7, $s6
    ctx->r16 = ADD32(ctx->r15, ctx->r22);
    // 0x8026762C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x80267630: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x80267634: addu        $t8, $s2, $a0
    ctx->r24 = ADD32(ctx->r18, ctx->r4);
L_80267638:
    // 0x80267638: lb          $v0, 0x0($t8)
    ctx->r2 = MEM_B(ctx->r24, 0X0);
    // 0x8026763C: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    // 0x80267640: beq         $v0, $zero, L_80267728
    if (ctx->r2 == 0) {
        // 0x80267644: sll         $t9, $a0, 16
        ctx->r25 = S32(ctx->r4 << 16);
            goto L_80267728;
    }
    // 0x80267644: sll         $t9, $a0, 16
    ctx->r25 = S32(ctx->r4 << 16);
    // 0x80267648: multu       $v0, $s3
    result = U64(U32(ctx->r2)) * U64(U32(ctx->r19)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8026764C: andi        $t5, $fp, 0x2
    ctx->r13 = ctx->r30 & 0X2;
    // 0x80267650: mflo        $t9
    ctx->r25 = lo;
    // 0x80267654: addu        $v1, $t9, $s1
    ctx->r3 = ADD32(ctx->r25, ctx->r17);
    // 0x80267658: beq         $t5, $zero, L_802676A4
    if (ctx->r13 == 0) {
        // 0x8026765C: nop
    
            goto L_802676A4;
    }
    // 0x8026765C: nop

    // 0x80267660: lwc1        $f0, 0x44($v1)
    ctx->f0.u32l = MEM_W(ctx->r3, 0X44);
    // 0x80267664: lwc1        $f6, 0x44($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X44);
    // 0x80267668: nop

    // 0x8026766C: mul.s       $f8, $f6, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = MUL_S(ctx->f6.fl, ctx->f0.fl);
    // 0x80267670: c.lt.s      $f8, $f20
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 20);
    c1cs = ctx->f8.fl < ctx->f20.fl;
    // 0x80267674: nop

    // 0x80267678: bc1t        L_80267728
    if (c1cs) {
        // 0x8026767C: sll         $t9, $a0, 16
        ctx->r25 = S32(ctx->r4 << 16);
            goto L_80267728;
    }
    // 0x8026767C: sll         $t9, $a0, 16
    ctx->r25 = S32(ctx->r4 << 16);
    // 0x80267680: lw          $t6, 0x0($s7)
    ctx->r14 = MEM_W(ctx->r23, 0X0);
    // 0x80267684: nop

    // 0x80267688: lwc1        $f10, 0x0($t6)
    ctx->f10.u32l = MEM_W(ctx->r14, 0X0);
    // 0x8026768C: nop

    // 0x80267690: mul.s       $f16, $f0, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = MUL_S(ctx->f0.fl, ctx->f10.fl);
    // 0x80267694: c.lt.s      $f16, $f20
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 20);
    c1cs = ctx->f16.fl < ctx->f20.fl;
    // 0x80267698: nop

    // 0x8026769C: bc1t        L_80267728
    if (c1cs) {
        // 0x802676A0: sll         $t9, $a0, 16
        ctx->r25 = S32(ctx->r4 << 16);
            goto L_80267728;
    }
    // 0x802676A0: sll         $t9, $a0, 16
    ctx->r25 = S32(ctx->r4 << 16);
L_802676A4:
    // 0x802676A4: lw          $t7, 0xD4($v1)
    ctx->r15 = MEM_W(ctx->r3, 0XD4);
    // 0x802676A8: nop

    // 0x802676AC: lbu         $t8, 0x5($t7)
    ctx->r24 = MEM_BU(ctx->r15, 0X5);
    // 0x802676B0: nop

    // 0x802676B4: sll         $t9, $t8, 1
    ctx->r25 = S32(ctx->r24 << 1);
    // 0x802676B8: addu        $t5, $t0, $t9
    ctx->r13 = ADD32(ctx->r8, ctx->r25);
    // 0x802676BC: lhu         $t6, 0x0($t5)
    ctx->r14 = MEM_HU(ctx->r13, 0X0);
    // 0x802676C0: nop

    // 0x802676C4: and         $t7, $t6, $t1
    ctx->r15 = ctx->r14 & ctx->r9;
    // 0x802676C8: beq         $t7, $zero, L_80267728
    if (ctx->r15 == 0) {
        // 0x802676CC: sll         $t9, $a0, 16
        ctx->r25 = S32(ctx->r4 << 16);
            goto L_80267728;
    }
    // 0x802676CC: sll         $t9, $a0, 16
    ctx->r25 = S32(ctx->r4 << 16);
    // 0x802676D0: lhu         $t8, 0x12($v1)
    ctx->r24 = MEM_HU(ctx->r3, 0X12);
    // 0x802676D4: sll         $t5, $a3, 3
    ctx->r13 = S32(ctx->r7 << 3);
    // 0x802676D8: andi        $t9, $t8, 0x300
    ctx->r25 = ctx->r24 & 0X300;
    // 0x802676DC: bne         $t9, $zero, L_80267728
    if (ctx->r25 != 0) {
        // 0x802676E0: sll         $t9, $a0, 16
        ctx->r25 = S32(ctx->r4 << 16);
            goto L_80267728;
    }
    // 0x802676E0: sll         $t9, $a0, 16
    ctx->r25 = S32(ctx->r4 << 16);
    // 0x802676E4: lhu         $t6, 0x1A($v1)
    ctx->r14 = MEM_HU(ctx->r3, 0X1A);
    // 0x802676E8: addu        $v0, $s4, $t5
    ctx->r2 = ADD32(ctx->r20, ctx->r13);
    // 0x802676EC: sh          $t6, 0x0($v0)
    MEM_H(0X0, ctx->r2) = ctx->r14;
    // 0x802676F0: lwc1        $f4, 0x4C($v1)
    ctx->f4.u32l = MEM_W(ctx->r3, 0X4C);
    // 0x802676F4: lwc1        $f18, 0x4C($s0)
    ctx->f18.u32l = MEM_W(ctx->r16, 0X4C);
    // 0x802676F8: lwc1        $f8, 0x44($v1)
    ctx->f8.u32l = MEM_W(ctx->r3, 0X44);
    // 0x802676FC: sub.s       $f0, $f18, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f0.fl = ctx->f18.fl - ctx->f4.fl;
    // 0x80267700: lwc1        $f6, 0x44($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X44);
    // 0x80267704: mul.s       $f10, $f0, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f10.fl = MUL_S(ctx->f0.fl, ctx->f0.fl);
    // 0x80267708: sub.s       $f2, $f6, $f8
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f2.fl = ctx->f6.fl - ctx->f8.fl;
    // 0x8026770C: addiu       $a3, $a3, 0x1
    ctx->r7 = ADD32(ctx->r7, 0X1);
    // 0x80267710: sll         $t7, $a3, 16
    ctx->r15 = S32(ctx->r7 << 16);
    // 0x80267714: mul.s       $f16, $f2, $f2
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f16.fl = MUL_S(ctx->f2.fl, ctx->f2.fl);
    // 0x80267718: sra         $a3, $t7, 16
    ctx->r7 = S32(SIGNED(ctx->r15) >> 16);
    // 0x8026771C: add.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl + ctx->f16.fl;
    // 0x80267720: swc1        $f18, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->f18.u32l;
    // 0x80267724: sll         $t9, $a0, 16
    ctx->r25 = S32(ctx->r4 << 16);
L_80267728:
    // 0x80267728: sra         $a0, $t9, 16
    ctx->r4 = S32(SIGNED(ctx->r25) >> 16);
    // 0x8026772C: slti        $at, $a0, 0xA
    ctx->r1 = SIGNED(ctx->r4) < 0XA ? 1 : 0;
    // 0x80267730: bne         $at, $zero, L_80267638
    if (ctx->r1 != 0) {
        // 0x80267734: addu        $t8, $s2, $a0
        ctx->r24 = ADD32(ctx->r18, ctx->r4);
            goto L_80267638;
    }
    // 0x80267734: addu        $t8, $s2, $a0
    ctx->r24 = ADD32(ctx->r18, ctx->r4);
    // 0x80267738: beq         $a3, $zero, L_8026787C
    if (ctx->r7 == 0) {
        // 0x8026773C: or          $a0, $zero, $zero
        ctx->r4 = 0 | 0;
            goto L_8026787C;
    }
    // 0x8026773C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x80267740: addiu       $a1, $a3, -0x1
    ctx->r5 = ADD32(ctx->r7, -0X1);
    // 0x80267744: sll         $t6, $a1, 16
    ctx->r14 = S32(ctx->r5 << 16);
    // 0x80267748: sra         $a1, $t6, 16
    ctx->r5 = S32(SIGNED(ctx->r14) >> 16);
    // 0x8026774C: or          $a2, $s4, $zero
    ctx->r6 = ctx->r20 | 0;
    // 0x80267750: andi        $s5, $fp, 0x1
    ctx->r21 = ctx->r30 & 0X1;
    // 0x80267754: sh          $t2, 0x12E($sp)
    MEM_H(0X12E, ctx->r29) = ctx->r10;
    // 0x80267758: sw          $t3, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r11;
    // 0x8026775C: jal         0x8005DE74
    // 0x80267760: sh          $t4, 0x12A($sp)
    MEM_H(0X12A, ctx->r29) = ctx->r12;
    func_8005DE74(rdram, ctx);
        goto after_2;
    // 0x80267760: sh          $t4, 0x12A($sp)
    MEM_H(0X12A, ctx->r29) = ctx->r12;
    after_2:
    // 0x80267764: lh          $a1, 0x68($sp)
    ctx->r5 = MEM_H(ctx->r29, 0X68);
    // 0x80267768: lui         $t0, 0x8028
    ctx->r8 = S32(0X8028 << 16);
    // 0x8026776C: lhu         $t1, 0x136($sp)
    ctx->r9 = MEM_HU(ctx->r29, 0X136);
    // 0x80267770: lh          $t2, 0x12E($sp)
    ctx->r10 = MEM_H(ctx->r29, 0X12E);
    // 0x80267774: lw          $t3, 0x64($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X64);
    // 0x80267778: lh          $t4, 0x12A($sp)
    ctx->r12 = MEM_H(ctx->r29, 0X12A);
    // 0x8026777C: addu        $t8, $s2, $a1
    ctx->r24 = ADD32(ctx->r18, ctx->r5);
    // 0x80267780: addiu       $t0, $t0, -0x3678
    ctx->r8 = ADD32(ctx->r8, -0X3678);
    // 0x80267784: beq         $s5, $zero, L_8026782C
    if (ctx->r21 == 0) {
        // 0x80267788: sb          $zero, -0x1($t8)
        MEM_B(-0X1, ctx->r24) = 0;
            goto L_8026782C;
    }
    // 0x80267788: sb          $zero, -0x1($t8)
    MEM_B(-0X1, ctx->r24) = 0;
    // 0x8026778C: lbu         $t9, 0x0($s0)
    ctx->r25 = MEM_BU(ctx->r16, 0X0);
    // 0x80267790: addiu       $at, $zero, 0x13
    ctx->r1 = ADD32(0, 0X13);
    // 0x80267794: bne         $t9, $at, L_8026782C
    if (ctx->r25 != ctx->r1) {
        // 0x80267798: nop
    
            goto L_8026782C;
    }
    // 0x80267798: nop

    // 0x8026779C: lh          $a0, 0x30($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X30);
    // 0x802677A0: sh          $t4, 0x12A($sp)
    MEM_H(0X12A, ctx->r29) = ctx->r12;
    // 0x802677A4: sw          $t3, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r11;
    // 0x802677A8: sh          $t2, 0x12E($sp)
    MEM_H(0X12E, ctx->r29) = ctx->r10;
    // 0x802677AC: jal         0x80272AD4
    // 0x802677B0: sh          $a1, 0x126($sp)
    MEM_H(0X126, ctx->r29) = ctx->r5;
    ovl_8024B800_func_80272AD4(rdram, ctx);
        goto after_3;
    // 0x802677B0: sh          $a1, 0x126($sp)
    MEM_H(0X126, ctx->r29) = ctx->r5;
    after_3:
    // 0x802677B4: lh          $a1, 0x126($sp)
    ctx->r5 = MEM_H(ctx->r29, 0X126);
    // 0x802677B8: lui         $t0, 0x8028
    ctx->r8 = S32(0X8028 << 16);
    // 0x802677BC: lhu         $t1, 0x136($sp)
    ctx->r9 = MEM_HU(ctx->r29, 0X136);
    // 0x802677C0: lh          $t2, 0x12E($sp)
    ctx->r10 = MEM_H(ctx->r29, 0X12E);
    // 0x802677C4: lw          $t3, 0x64($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X64);
    // 0x802677C8: lh          $t4, 0x12A($sp)
    ctx->r12 = MEM_H(ctx->r29, 0X12A);
    // 0x802677CC: sltiu       $at, $v0, 0xC8
    ctx->r1 = ctx->r2 < 0XC8 ? 1 : 0;
    // 0x802677D0: beq         $at, $zero, L_8026782C
    if (ctx->r1 == 0) {
        // 0x802677D4: addiu       $t0, $t0, -0x3678
        ctx->r8 = ADD32(ctx->r8, -0X3678);
            goto L_8026782C;
    }
    // 0x802677D4: addiu       $t0, $t0, -0x3678
    ctx->r8 = ADD32(ctx->r8, -0X3678);
    // 0x802677D8: lw          $v1, 0xC8($s0)
    ctx->r3 = MEM_W(ctx->r16, 0XC8);
    // 0x802677DC: nop

    // 0x802677E0: lhu         $t5, 0x8($v1)
    ctx->r13 = MEM_HU(ctx->r3, 0X8);
    // 0x802677E4: nop

    // 0x802677E8: andi        $t6, $t5, 0x1
    ctx->r14 = ctx->r13 & 0X1;
    // 0x802677EC: beq         $t6, $zero, L_80267800
    if (ctx->r14 == 0) {
        // 0x802677F0: nop
    
            goto L_80267800;
    }
    // 0x802677F0: nop

    // 0x802677F4: lh          $v0, 0x2E($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X2E);
    // 0x802677F8: b           L_80267810
    // 0x802677FC: lh          $t7, 0x8CA($v1)
    ctx->r15 = MEM_H(ctx->r3, 0X8CA);
        goto L_80267810;
    // 0x802677FC: lh          $t7, 0x8CA($v1)
    ctx->r15 = MEM_H(ctx->r3, 0X8CA);
L_80267800:
    // 0x80267800: lh          $v0, 0x2E($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X2E);
    // 0x80267804: nop

    // 0x80267808: negu        $v0, $v0
    ctx->r2 = SUB32(0, ctx->r2);
    // 0x8026780C: lh          $t7, 0x8CA($v1)
    ctx->r15 = MEM_H(ctx->r3, 0X8CA);
L_80267810:
    // 0x80267810: nop

    // 0x80267814: addiu       $t8, $t7, -0x3C
    ctx->r24 = ADD32(ctx->r15, -0X3C);
    // 0x80267818: slt         $at, $t8, $v0
    ctx->r1 = SIGNED(ctx->r24) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x8026781C: bne         $at, $zero, L_80267894
    if (ctx->r1 != 0) {
        // 0x80267820: slti        $at, $v0, 0x123
        ctx->r1 = SIGNED(ctx->r2) < 0X123 ? 1 : 0;
            goto L_80267894;
    }
    // 0x80267820: slti        $at, $v0, 0x123
    ctx->r1 = SIGNED(ctx->r2) < 0X123 ? 1 : 0;
    // 0x80267824: beq         $at, $zero, L_80267898
    if (ctx->r1 == 0) {
        // 0x80267828: lw          $ra, 0x54($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X54);
            goto L_80267898;
    }
    // 0x80267828: lw          $ra, 0x54($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X54);
L_8026782C:
    // 0x8026782C: multu       $a1, $s3
    result = U64(U32(ctx->r5)) * U64(U32(ctx->r19)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80267830: lhu         $v1, 0x0($t3)
    ctx->r3 = MEM_HU(ctx->r11, 0X0);
    // 0x80267834: addiu       $t8, $zero, 0x17
    ctx->r24 = ADD32(0, 0X17);
    // 0x80267838: mflo        $t9
    ctx->r25 = lo;
    // 0x8026783C: addu        $v0, $s1, $t9
    ctx->r2 = ADD32(ctx->r17, ctx->r25);
    // 0x80267840: lbu         $t5, 0x7($v0)
    ctx->r13 = MEM_BU(ctx->r2, 0X7);
    // 0x80267844: nop

    // 0x80267848: beq         $t5, $v1, L_80267868
    if (ctx->r13 == ctx->r3) {
        // 0x8026784C: nop
    
            goto L_80267868;
    }
    // 0x8026784C: nop

    // 0x80267850: lbu         $t6, 0x9($v0)
    ctx->r14 = MEM_BU(ctx->r2, 0X9);
    // 0x80267854: addiu       $t7, $zero, 0xF
    ctx->r15 = ADD32(0, 0XF);
    // 0x80267858: bne         $t6, $zero, L_80267868
    if (ctx->r14 != 0) {
        // 0x8026785C: nop
    
            goto L_80267868;
    }
    // 0x8026785C: nop

    // 0x80267860: sb          $v1, 0x7($v0)
    MEM_B(0X7, ctx->r2) = ctx->r3;
    // 0x80267864: sb          $t7, 0x9($v0)
    MEM_B(0X9, ctx->r2) = ctx->r15;
L_80267868:
    // 0x80267868: lhu         $t9, 0x12($v0)
    ctx->r25 = MEM_HU(ctx->r2, 0X12);
    // 0x8026786C: sb          $t8, 0x0($v0)
    MEM_B(0X0, ctx->r2) = ctx->r24;
    // 0x80267870: ori         $t5, $t9, 0x100
    ctx->r13 = ctx->r25 | 0X100;
    // 0x80267874: sh          $t5, 0x12($v0)
    MEM_H(0X12, ctx->r2) = ctx->r13;
    // 0x80267878: sb          $a1, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r5;
L_8026787C:
    // 0x8026787C: addiu       $t2, $t2, 0x1
    ctx->r10 = ADD32(ctx->r10, 0X1);
    // 0x80267880: sll         $t6, $t2, 16
    ctx->r14 = S32(ctx->r10 << 16);
    // 0x80267884: sra         $t2, $t6, 16
    ctx->r10 = S32(SIGNED(ctx->r14) >> 16);
    // 0x80267888: slt         $at, $t2, $t4
    ctx->r1 = SIGNED(ctx->r10) < SIGNED(ctx->r12) ? 1 : 0;
    // 0x8026788C: bne         $at, $zero, L_80267608
    if (ctx->r1 != 0) {
        // 0x80267890: sll         $t9, $t2, 3
        ctx->r25 = S32(ctx->r10 << 3);
            goto L_80267608;
    }
    // 0x80267890: sll         $t9, $t2, 3
    ctx->r25 = S32(ctx->r10 << 3);
L_80267894:
    // 0x80267894: lw          $ra, 0x54($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X54);
L_80267898:
    // 0x80267898: lwc1        $f21, 0x18($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X18);
    // 0x8026789C: lwc1        $f20, 0x1C($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x802678A0: lwc1        $f23, 0x20($sp)
    ctx->f_odd[(23 - 1) * 2] = MEM_W(ctx->r29, 0X20);
    // 0x802678A4: lwc1        $f22, 0x24($sp)
    ctx->f22.u32l = MEM_W(ctx->r29, 0X24);
    // 0x802678A8: lwc1        $f25, 0x28($sp)
    ctx->f_odd[(25 - 1) * 2] = MEM_W(ctx->r29, 0X28);
    // 0x802678AC: lwc1        $f24, 0x2C($sp)
    ctx->f24.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x802678B0: lw          $s0, 0x30($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X30);
    // 0x802678B4: lw          $s1, 0x34($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X34);
    // 0x802678B8: lw          $s2, 0x38($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X38);
    // 0x802678BC: lw          $s3, 0x3C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X3C);
    // 0x802678C0: lw          $s4, 0x40($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X40);
    // 0x802678C4: lw          $s5, 0x44($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X44);
    // 0x802678C8: lw          $s6, 0x48($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X48);
    // 0x802678CC: lw          $s7, 0x4C($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X4C);
    // 0x802678D0: lw          $fp, 0x50($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X50);
    // 0x802678D4: jr          $ra
    // 0x802678D8: addiu       $sp, $sp, 0x130
    ctx->r29 = ADD32(ctx->r29, 0X130);
    return;
    // 0x802678D8: addiu       $sp, $sp, 0x130
    ctx->r29 = ADD32(ctx->r29, 0X130);
;}
RECOMP_FUNC void ovl_8024B800_func_80267608(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
L_80267608:
    // 0x80267608: addiu       $t5, $sp, 0xB8
    ctx->r13 = ADD32(ctx->r29, 0XB8);
    // 0x8026760C: addu        $t3, $t9, $t5
    ctx->r11 = ADD32(ctx->r25, ctx->r13);
    // 0x80267610: lhu         $t6, 0x0($t3)
    ctx->r14 = MEM_HU(ctx->r11, 0X0);
    // 0x80267614: lw          $t8, 0x130($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X130);
    // 0x80267618: sll         $t7, $t6, 5
    ctx->r15 = S32(ctx->r14 << 5);
    // 0x8026761C: subu        $t7, $t7, $t6
    ctx->r15 = SUB32(ctx->r15, ctx->r14);
    // 0x80267620: sll         $t7, $t7, 3
    ctx->r15 = S32(ctx->r15 << 3);
    // 0x80267624: lw          $s1, 0x18($t8)
    ctx->r17 = MEM_W(ctx->r24, 0X18);
    // 0x80267628: addu        $s0, $t7, $s6
    ctx->r16 = ADD32(ctx->r15, ctx->r22);
    // 0x8026762C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x80267630: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x80267634: addu        $t8, $s2, $a0
    ctx->r24 = ADD32(ctx->r18, ctx->r4);
L_80267638:
    // 0x80267638: lb          $v0, 0x0($t8)
    ctx->r2 = MEM_B(ctx->r24, 0X0);
    // 0x8026763C: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    // 0x80267640: beq         $v0, $zero, L_80267728
    if (ctx->r2 == 0) {
        // 0x80267644: sll         $t9, $a0, 16
        ctx->r25 = S32(ctx->r4 << 16);
            goto L_80267728;
    }
    // 0x80267644: sll         $t9, $a0, 16
    ctx->r25 = S32(ctx->r4 << 16);
    // 0x80267648: multu       $v0, $s3
    result = U64(U32(ctx->r2)) * U64(U32(ctx->r19)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8026764C: andi        $t5, $fp, 0x2
    ctx->r13 = ctx->r30 & 0X2;
    // 0x80267650: mflo        $t9
    ctx->r25 = lo;
    // 0x80267654: addu        $v1, $t9, $s1
    ctx->r3 = ADD32(ctx->r25, ctx->r17);
    // 0x80267658: beq         $t5, $zero, L_802676A4
    if (ctx->r13 == 0) {
        // 0x8026765C: nop
    
            goto L_802676A4;
    }
    // 0x8026765C: nop

    // 0x80267660: lwc1        $f0, 0x44($v1)
    ctx->f0.u32l = MEM_W(ctx->r3, 0X44);
    // 0x80267664: lwc1        $f6, 0x44($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X44);
    // 0x80267668: nop

    // 0x8026766C: mul.s       $f8, $f6, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = MUL_S(ctx->f6.fl, ctx->f0.fl);
    // 0x80267670: c.lt.s      $f8, $f20
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 20);
    c1cs = ctx->f8.fl < ctx->f20.fl;
    // 0x80267674: nop

    // 0x80267678: bc1t        L_80267728
    if (c1cs) {
        // 0x8026767C: sll         $t9, $a0, 16
        ctx->r25 = S32(ctx->r4 << 16);
            goto L_80267728;
    }
    // 0x8026767C: sll         $t9, $a0, 16
    ctx->r25 = S32(ctx->r4 << 16);
    // 0x80267680: lw          $t6, 0x0($s7)
    ctx->r14 = MEM_W(ctx->r23, 0X0);
    // 0x80267684: nop

    // 0x80267688: lwc1        $f10, 0x0($t6)
    ctx->f10.u32l = MEM_W(ctx->r14, 0X0);
    // 0x8026768C: nop

    // 0x80267690: mul.s       $f16, $f0, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = MUL_S(ctx->f0.fl, ctx->f10.fl);
    // 0x80267694: c.lt.s      $f16, $f20
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 20);
    c1cs = ctx->f16.fl < ctx->f20.fl;
    // 0x80267698: nop

    // 0x8026769C: bc1t        L_80267728
    if (c1cs) {
        // 0x802676A0: sll         $t9, $a0, 16
        ctx->r25 = S32(ctx->r4 << 16);
            goto L_80267728;
    }
    // 0x802676A0: sll         $t9, $a0, 16
    ctx->r25 = S32(ctx->r4 << 16);
L_802676A4:
    // 0x802676A4: lw          $t7, 0xD4($v1)
    ctx->r15 = MEM_W(ctx->r3, 0XD4);
    // 0x802676A8: nop

    // 0x802676AC: lbu         $t8, 0x5($t7)
    ctx->r24 = MEM_BU(ctx->r15, 0X5);
    // 0x802676B0: nop

    // 0x802676B4: sll         $t9, $t8, 1
    ctx->r25 = S32(ctx->r24 << 1);
    // 0x802676B8: addu        $t5, $t0, $t9
    ctx->r13 = ADD32(ctx->r8, ctx->r25);
    // 0x802676BC: lhu         $t6, 0x0($t5)
    ctx->r14 = MEM_HU(ctx->r13, 0X0);
    // 0x802676C0: nop

    // 0x802676C4: and         $t7, $t6, $t1
    ctx->r15 = ctx->r14 & ctx->r9;
    // 0x802676C8: beq         $t7, $zero, L_80267728
    if (ctx->r15 == 0) {
        // 0x802676CC: sll         $t9, $a0, 16
        ctx->r25 = S32(ctx->r4 << 16);
            goto L_80267728;
    }
    // 0x802676CC: sll         $t9, $a0, 16
    ctx->r25 = S32(ctx->r4 << 16);
    // 0x802676D0: lhu         $t8, 0x12($v1)
    ctx->r24 = MEM_HU(ctx->r3, 0X12);
    // 0x802676D4: sll         $t5, $a3, 3
    ctx->r13 = S32(ctx->r7 << 3);
    // 0x802676D8: andi        $t9, $t8, 0x300
    ctx->r25 = ctx->r24 & 0X300;
    // 0x802676DC: bne         $t9, $zero, L_80267728
    if (ctx->r25 != 0) {
        // 0x802676E0: sll         $t9, $a0, 16
        ctx->r25 = S32(ctx->r4 << 16);
            goto L_80267728;
    }
    // 0x802676E0: sll         $t9, $a0, 16
    ctx->r25 = S32(ctx->r4 << 16);
    // 0x802676E4: lhu         $t6, 0x1A($v1)
    ctx->r14 = MEM_HU(ctx->r3, 0X1A);
    // 0x802676E8: addu        $v0, $s4, $t5
    ctx->r2 = ADD32(ctx->r20, ctx->r13);
    // 0x802676EC: sh          $t6, 0x0($v0)
    MEM_H(0X0, ctx->r2) = ctx->r14;
    // 0x802676F0: lwc1        $f4, 0x4C($v1)
    ctx->f4.u32l = MEM_W(ctx->r3, 0X4C);
    // 0x802676F4: lwc1        $f18, 0x4C($s0)
    ctx->f18.u32l = MEM_W(ctx->r16, 0X4C);
    // 0x802676F8: lwc1        $f8, 0x44($v1)
    ctx->f8.u32l = MEM_W(ctx->r3, 0X44);
    // 0x802676FC: sub.s       $f0, $f18, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f0.fl = ctx->f18.fl - ctx->f4.fl;
    // 0x80267700: lwc1        $f6, 0x44($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X44);
    // 0x80267704: mul.s       $f10, $f0, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f10.fl = MUL_S(ctx->f0.fl, ctx->f0.fl);
    // 0x80267708: sub.s       $f2, $f6, $f8
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f2.fl = ctx->f6.fl - ctx->f8.fl;
    // 0x8026770C: addiu       $a3, $a3, 0x1
    ctx->r7 = ADD32(ctx->r7, 0X1);
    // 0x80267710: sll         $t7, $a3, 16
    ctx->r15 = S32(ctx->r7 << 16);
    // 0x80267714: mul.s       $f16, $f2, $f2
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f16.fl = MUL_S(ctx->f2.fl, ctx->f2.fl);
    // 0x80267718: sra         $a3, $t7, 16
    ctx->r7 = S32(SIGNED(ctx->r15) >> 16);
    // 0x8026771C: add.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl + ctx->f16.fl;
    // 0x80267720: swc1        $f18, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->f18.u32l;
    // 0x80267724: sll         $t9, $a0, 16
    ctx->r25 = S32(ctx->r4 << 16);
L_80267728:
    // 0x80267728: sra         $a0, $t9, 16
    ctx->r4 = S32(SIGNED(ctx->r25) >> 16);
    // 0x8026772C: slti        $at, $a0, 0xA
    ctx->r1 = SIGNED(ctx->r4) < 0XA ? 1 : 0;
    // 0x80267730: bne         $at, $zero, L_80267638
    if (ctx->r1 != 0) {
        // 0x80267734: addu        $t8, $s2, $a0
        ctx->r24 = ADD32(ctx->r18, ctx->r4);
            goto L_80267638;
    }
    // 0x80267734: addu        $t8, $s2, $a0
    ctx->r24 = ADD32(ctx->r18, ctx->r4);
    // 0x80267738: beq         $a3, $zero, L_8026787C
    if (ctx->r7 == 0) {
        // 0x8026773C: or          $a0, $zero, $zero
        ctx->r4 = 0 | 0;
            goto L_8026787C;
    }
    // 0x8026773C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x80267740: addiu       $a1, $a3, -0x1
    ctx->r5 = ADD32(ctx->r7, -0X1);
    // 0x80267744: sll         $t6, $a1, 16
    ctx->r14 = S32(ctx->r5 << 16);
    // 0x80267748: sra         $a1, $t6, 16
    ctx->r5 = S32(SIGNED(ctx->r14) >> 16);
    // 0x8026774C: or          $a2, $s4, $zero
    ctx->r6 = ctx->r20 | 0;
    // 0x80267750: andi        $s5, $fp, 0x1
    ctx->r21 = ctx->r30 & 0X1;
    // 0x80267754: sh          $t2, 0x12E($sp)
    MEM_H(0X12E, ctx->r29) = ctx->r10;
    // 0x80267758: sw          $t3, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r11;
    // 0x8026775C: jal         0x8005DE74
    // 0x80267760: sh          $t4, 0x12A($sp)
    MEM_H(0X12A, ctx->r29) = ctx->r12;
    func_8005DE74(rdram, ctx);
        goto after_0;
    // 0x80267760: sh          $t4, 0x12A($sp)
    MEM_H(0X12A, ctx->r29) = ctx->r12;
    after_0:
    // 0x80267764: lh          $a1, 0x68($sp)
    ctx->r5 = MEM_H(ctx->r29, 0X68);
    // 0x80267768: lui         $t0, 0x8028
    ctx->r8 = S32(0X8028 << 16);
    // 0x8026776C: lhu         $t1, 0x136($sp)
    ctx->r9 = MEM_HU(ctx->r29, 0X136);
    // 0x80267770: lh          $t2, 0x12E($sp)
    ctx->r10 = MEM_H(ctx->r29, 0X12E);
    // 0x80267774: lw          $t3, 0x64($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X64);
    // 0x80267778: lh          $t4, 0x12A($sp)
    ctx->r12 = MEM_H(ctx->r29, 0X12A);
    // 0x8026777C: addu        $t8, $s2, $a1
    ctx->r24 = ADD32(ctx->r18, ctx->r5);
    // 0x80267780: addiu       $t0, $t0, -0x3678
    ctx->r8 = ADD32(ctx->r8, -0X3678);
    // 0x80267784: beq         $s5, $zero, L_8026782C
    if (ctx->r21 == 0) {
        // 0x80267788: sb          $zero, -0x1($t8)
        MEM_B(-0X1, ctx->r24) = 0;
            goto L_8026782C;
    }
    // 0x80267788: sb          $zero, -0x1($t8)
    MEM_B(-0X1, ctx->r24) = 0;
    // 0x8026778C: lbu         $t9, 0x0($s0)
    ctx->r25 = MEM_BU(ctx->r16, 0X0);
    // 0x80267790: addiu       $at, $zero, 0x13
    ctx->r1 = ADD32(0, 0X13);
    // 0x80267794: bne         $t9, $at, L_8026782C
    if (ctx->r25 != ctx->r1) {
        // 0x80267798: nop
    
            goto L_8026782C;
    }
    // 0x80267798: nop

    // 0x8026779C: lh          $a0, 0x30($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X30);
    // 0x802677A0: sh          $t4, 0x12A($sp)
    MEM_H(0X12A, ctx->r29) = ctx->r12;
    // 0x802677A4: sw          $t3, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r11;
    // 0x802677A8: sh          $t2, 0x12E($sp)
    MEM_H(0X12E, ctx->r29) = ctx->r10;
    // 0x802677AC: jal         0x80272AD4
    // 0x802677B0: sh          $a1, 0x126($sp)
    MEM_H(0X126, ctx->r29) = ctx->r5;
    ovl_8024B800_func_80272AD4(rdram, ctx);
        goto after_1;
    // 0x802677B0: sh          $a1, 0x126($sp)
    MEM_H(0X126, ctx->r29) = ctx->r5;
    after_1:
    // 0x802677B4: lh          $a1, 0x126($sp)
    ctx->r5 = MEM_H(ctx->r29, 0X126);
    // 0x802677B8: lui         $t0, 0x8028
    ctx->r8 = S32(0X8028 << 16);
    // 0x802677BC: lhu         $t1, 0x136($sp)
    ctx->r9 = MEM_HU(ctx->r29, 0X136);
    // 0x802677C0: lh          $t2, 0x12E($sp)
    ctx->r10 = MEM_H(ctx->r29, 0X12E);
    // 0x802677C4: lw          $t3, 0x64($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X64);
    // 0x802677C8: lh          $t4, 0x12A($sp)
    ctx->r12 = MEM_H(ctx->r29, 0X12A);
    // 0x802677CC: sltiu       $at, $v0, 0xC8
    ctx->r1 = ctx->r2 < 0XC8 ? 1 : 0;
    // 0x802677D0: beq         $at, $zero, L_8026782C
    if (ctx->r1 == 0) {
        // 0x802677D4: addiu       $t0, $t0, -0x3678
        ctx->r8 = ADD32(ctx->r8, -0X3678);
            goto L_8026782C;
    }
    // 0x802677D4: addiu       $t0, $t0, -0x3678
    ctx->r8 = ADD32(ctx->r8, -0X3678);
    // 0x802677D8: lw          $v1, 0xC8($s0)
    ctx->r3 = MEM_W(ctx->r16, 0XC8);
    // 0x802677DC: nop

    // 0x802677E0: lhu         $t5, 0x8($v1)
    ctx->r13 = MEM_HU(ctx->r3, 0X8);
    // 0x802677E4: nop

    // 0x802677E8: andi        $t6, $t5, 0x1
    ctx->r14 = ctx->r13 & 0X1;
    // 0x802677EC: beq         $t6, $zero, L_80267800
    if (ctx->r14 == 0) {
        // 0x802677F0: nop
    
            goto L_80267800;
    }
    // 0x802677F0: nop

    // 0x802677F4: lh          $v0, 0x2E($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X2E);
    // 0x802677F8: b           L_80267810
    // 0x802677FC: lh          $t7, 0x8CA($v1)
    ctx->r15 = MEM_H(ctx->r3, 0X8CA);
        goto L_80267810;
    // 0x802677FC: lh          $t7, 0x8CA($v1)
    ctx->r15 = MEM_H(ctx->r3, 0X8CA);
L_80267800:
    // 0x80267800: lh          $v0, 0x2E($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X2E);
    // 0x80267804: nop

    // 0x80267808: negu        $v0, $v0
    ctx->r2 = SUB32(0, ctx->r2);
    // 0x8026780C: lh          $t7, 0x8CA($v1)
    ctx->r15 = MEM_H(ctx->r3, 0X8CA);
L_80267810:
    // 0x80267810: nop

    // 0x80267814: addiu       $t8, $t7, -0x3C
    ctx->r24 = ADD32(ctx->r15, -0X3C);
    // 0x80267818: slt         $at, $t8, $v0
    ctx->r1 = SIGNED(ctx->r24) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x8026781C: bne         $at, $zero, L_80267894
    if (ctx->r1 != 0) {
        // 0x80267820: slti        $at, $v0, 0x123
        ctx->r1 = SIGNED(ctx->r2) < 0X123 ? 1 : 0;
            goto L_80267894;
    }
    // 0x80267820: slti        $at, $v0, 0x123
    ctx->r1 = SIGNED(ctx->r2) < 0X123 ? 1 : 0;
    // 0x80267824: beq         $at, $zero, L_80267898
    if (ctx->r1 == 0) {
        // 0x80267828: lw          $ra, 0x54($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X54);
            goto L_80267898;
    }
    // 0x80267828: lw          $ra, 0x54($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X54);
L_8026782C:
    // 0x8026782C: multu       $a1, $s3
    result = U64(U32(ctx->r5)) * U64(U32(ctx->r19)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80267830: lhu         $v1, 0x0($t3)
    ctx->r3 = MEM_HU(ctx->r11, 0X0);
    // 0x80267834: addiu       $t8, $zero, 0x17
    ctx->r24 = ADD32(0, 0X17);
    // 0x80267838: mflo        $t9
    ctx->r25 = lo;
    // 0x8026783C: addu        $v0, $s1, $t9
    ctx->r2 = ADD32(ctx->r17, ctx->r25);
    // 0x80267840: lbu         $t5, 0x7($v0)
    ctx->r13 = MEM_BU(ctx->r2, 0X7);
    // 0x80267844: nop

    // 0x80267848: beq         $t5, $v1, L_80267868
    if (ctx->r13 == ctx->r3) {
        // 0x8026784C: nop
    
            goto L_80267868;
    }
    // 0x8026784C: nop

    // 0x80267850: lbu         $t6, 0x9($v0)
    ctx->r14 = MEM_BU(ctx->r2, 0X9);
    // 0x80267854: addiu       $t7, $zero, 0xF
    ctx->r15 = ADD32(0, 0XF);
    // 0x80267858: bne         $t6, $zero, L_80267868
    if (ctx->r14 != 0) {
        // 0x8026785C: nop
    
            goto L_80267868;
    }
    // 0x8026785C: nop

    // 0x80267860: sb          $v1, 0x7($v0)
    MEM_B(0X7, ctx->r2) = ctx->r3;
    // 0x80267864: sb          $t7, 0x9($v0)
    MEM_B(0X9, ctx->r2) = ctx->r15;
L_80267868:
    // 0x80267868: lhu         $t9, 0x12($v0)
    ctx->r25 = MEM_HU(ctx->r2, 0X12);
    // 0x8026786C: sb          $t8, 0x0($v0)
    MEM_B(0X0, ctx->r2) = ctx->r24;
    // 0x80267870: ori         $t5, $t9, 0x100
    ctx->r13 = ctx->r25 | 0X100;
    // 0x80267874: sh          $t5, 0x12($v0)
    MEM_H(0X12, ctx->r2) = ctx->r13;
    // 0x80267878: sb          $a1, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r5;
L_8026787C:
    // 0x8026787C: addiu       $t2, $t2, 0x1
    ctx->r10 = ADD32(ctx->r10, 0X1);
    // 0x80267880: sll         $t6, $t2, 16
    ctx->r14 = S32(ctx->r10 << 16);
    // 0x80267884: sra         $t2, $t6, 16
    ctx->r10 = S32(SIGNED(ctx->r14) >> 16);
    // 0x80267888: slt         $at, $t2, $t4
    ctx->r1 = SIGNED(ctx->r10) < SIGNED(ctx->r12) ? 1 : 0;
    // 0x8026788C: bne         $at, $zero, L_80267608
    if (ctx->r1 != 0) {
        // 0x80267890: sll         $t9, $t2, 3
        ctx->r25 = S32(ctx->r10 << 3);
            goto L_80267608;
    }
    // 0x80267890: sll         $t9, $t2, 3
    ctx->r25 = S32(ctx->r10 << 3);
L_80267894:
    // 0x80267894: lw          $ra, 0x54($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X54);
L_80267898:
    // 0x80267898: lwc1        $f21, 0x18($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X18);
    // 0x8026789C: lwc1        $f20, 0x1C($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x802678A0: lwc1        $f23, 0x20($sp)
    ctx->f_odd[(23 - 1) * 2] = MEM_W(ctx->r29, 0X20);
    // 0x802678A4: lwc1        $f22, 0x24($sp)
    ctx->f22.u32l = MEM_W(ctx->r29, 0X24);
    // 0x802678A8: lwc1        $f25, 0x28($sp)
    ctx->f_odd[(25 - 1) * 2] = MEM_W(ctx->r29, 0X28);
    // 0x802678AC: lwc1        $f24, 0x2C($sp)
    ctx->f24.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x802678B0: lw          $s0, 0x30($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X30);
    // 0x802678B4: lw          $s1, 0x34($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X34);
    // 0x802678B8: lw          $s2, 0x38($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X38);
    // 0x802678BC: lw          $s3, 0x3C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X3C);
    // 0x802678C0: lw          $s4, 0x40($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X40);
    // 0x802678C4: lw          $s5, 0x44($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X44);
    // 0x802678C8: lw          $s6, 0x48($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X48);
    // 0x802678CC: lw          $s7, 0x4C($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X4C);
    // 0x802678D0: lw          $fp, 0x50($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X50);
    // 0x802678D4: jr          $ra
    // 0x802678D8: addiu       $sp, $sp, 0x130
    ctx->r29 = ADD32(ctx->r29, 0X130);
    return;
    // 0x802678D8: addiu       $sp, $sp, 0x130
    ctx->r29 = ADD32(ctx->r29, 0X130);
;}
RECOMP_FUNC void ovl_8024B800_func_80267638(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
L_80267608:
    // 0x80267638: lb          $v0, 0x0($t8)
    ctx->r2 = MEM_B(ctx->r24, 0X0);
L_80267638:
    // 0x8026763C: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    // 0x80267640: beq         $v0, $zero, L_80267728
    if (ctx->r2 == 0) {
        // 0x80267644: sll         $t9, $a0, 16
        ctx->r25 = S32(ctx->r4 << 16);
            goto L_80267728;
    }
    // 0x80267644: sll         $t9, $a0, 16
    ctx->r25 = S32(ctx->r4 << 16);
    // 0x80267648: multu       $v0, $s3
    result = U64(U32(ctx->r2)) * U64(U32(ctx->r19)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8026764C: andi        $t5, $fp, 0x2
    ctx->r13 = ctx->r30 & 0X2;
    // 0x80267650: mflo        $t9
    ctx->r25 = lo;
    // 0x80267654: addu        $v1, $t9, $s1
    ctx->r3 = ADD32(ctx->r25, ctx->r17);
    // 0x80267658: beq         $t5, $zero, L_802676A4
    if (ctx->r13 == 0) {
        // 0x8026765C: nop
    
            goto L_802676A4;
    }
    // 0x8026765C: nop

    // 0x80267660: lwc1        $f0, 0x44($v1)
    ctx->f0.u32l = MEM_W(ctx->r3, 0X44);
    // 0x80267664: lwc1        $f6, 0x44($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X44);
    // 0x80267668: nop

    // 0x8026766C: mul.s       $f8, $f6, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = MUL_S(ctx->f6.fl, ctx->f0.fl);
    // 0x80267670: c.lt.s      $f8, $f20
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 20);
    c1cs = ctx->f8.fl < ctx->f20.fl;
    // 0x80267674: nop

    // 0x80267678: bc1t        L_80267728
    if (c1cs) {
        // 0x8026767C: sll         $t9, $a0, 16
        ctx->r25 = S32(ctx->r4 << 16);
            goto L_80267728;
    }
    // 0x8026767C: sll         $t9, $a0, 16
    ctx->r25 = S32(ctx->r4 << 16);
    // 0x80267680: lw          $t6, 0x0($s7)
    ctx->r14 = MEM_W(ctx->r23, 0X0);
    // 0x80267684: nop

    // 0x80267688: lwc1        $f10, 0x0($t6)
    ctx->f10.u32l = MEM_W(ctx->r14, 0X0);
    // 0x8026768C: nop

    // 0x80267690: mul.s       $f16, $f0, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = MUL_S(ctx->f0.fl, ctx->f10.fl);
    // 0x80267694: c.lt.s      $f16, $f20
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 20);
    c1cs = ctx->f16.fl < ctx->f20.fl;
    // 0x80267698: nop

    // 0x8026769C: bc1t        L_80267728
    if (c1cs) {
        // 0x802676A0: sll         $t9, $a0, 16
        ctx->r25 = S32(ctx->r4 << 16);
            goto L_80267728;
    }
    // 0x802676A0: sll         $t9, $a0, 16
    ctx->r25 = S32(ctx->r4 << 16);
L_802676A4:
    // 0x802676A4: lw          $t7, 0xD4($v1)
    ctx->r15 = MEM_W(ctx->r3, 0XD4);
    // 0x802676A8: nop

    // 0x802676AC: lbu         $t8, 0x5($t7)
    ctx->r24 = MEM_BU(ctx->r15, 0X5);
    // 0x802676B0: nop

    // 0x802676B4: sll         $t9, $t8, 1
    ctx->r25 = S32(ctx->r24 << 1);
    // 0x802676B8: addu        $t5, $t0, $t9
    ctx->r13 = ADD32(ctx->r8, ctx->r25);
    // 0x802676BC: lhu         $t6, 0x0($t5)
    ctx->r14 = MEM_HU(ctx->r13, 0X0);
    // 0x802676C0: nop

    // 0x802676C4: and         $t7, $t6, $t1
    ctx->r15 = ctx->r14 & ctx->r9;
    // 0x802676C8: beq         $t7, $zero, L_80267728
    if (ctx->r15 == 0) {
        // 0x802676CC: sll         $t9, $a0, 16
        ctx->r25 = S32(ctx->r4 << 16);
            goto L_80267728;
    }
    // 0x802676CC: sll         $t9, $a0, 16
    ctx->r25 = S32(ctx->r4 << 16);
    // 0x802676D0: lhu         $t8, 0x12($v1)
    ctx->r24 = MEM_HU(ctx->r3, 0X12);
    // 0x802676D4: sll         $t5, $a3, 3
    ctx->r13 = S32(ctx->r7 << 3);
    // 0x802676D8: andi        $t9, $t8, 0x300
    ctx->r25 = ctx->r24 & 0X300;
    // 0x802676DC: bne         $t9, $zero, L_80267728
    if (ctx->r25 != 0) {
        // 0x802676E0: sll         $t9, $a0, 16
        ctx->r25 = S32(ctx->r4 << 16);
            goto L_80267728;
    }
    // 0x802676E0: sll         $t9, $a0, 16
    ctx->r25 = S32(ctx->r4 << 16);
    // 0x802676E4: lhu         $t6, 0x1A($v1)
    ctx->r14 = MEM_HU(ctx->r3, 0X1A);
    // 0x802676E8: addu        $v0, $s4, $t5
    ctx->r2 = ADD32(ctx->r20, ctx->r13);
    // 0x802676EC: sh          $t6, 0x0($v0)
    MEM_H(0X0, ctx->r2) = ctx->r14;
    // 0x802676F0: lwc1        $f4, 0x4C($v1)
    ctx->f4.u32l = MEM_W(ctx->r3, 0X4C);
    // 0x802676F4: lwc1        $f18, 0x4C($s0)
    ctx->f18.u32l = MEM_W(ctx->r16, 0X4C);
    // 0x802676F8: lwc1        $f8, 0x44($v1)
    ctx->f8.u32l = MEM_W(ctx->r3, 0X44);
    // 0x802676FC: sub.s       $f0, $f18, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f0.fl = ctx->f18.fl - ctx->f4.fl;
    // 0x80267700: lwc1        $f6, 0x44($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X44);
    // 0x80267704: mul.s       $f10, $f0, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f10.fl = MUL_S(ctx->f0.fl, ctx->f0.fl);
    // 0x80267708: sub.s       $f2, $f6, $f8
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f2.fl = ctx->f6.fl - ctx->f8.fl;
    // 0x8026770C: addiu       $a3, $a3, 0x1
    ctx->r7 = ADD32(ctx->r7, 0X1);
    // 0x80267710: sll         $t7, $a3, 16
    ctx->r15 = S32(ctx->r7 << 16);
    // 0x80267714: mul.s       $f16, $f2, $f2
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f16.fl = MUL_S(ctx->f2.fl, ctx->f2.fl);
    // 0x80267718: sra         $a3, $t7, 16
    ctx->r7 = S32(SIGNED(ctx->r15) >> 16);
    // 0x8026771C: add.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl + ctx->f16.fl;
    // 0x80267720: swc1        $f18, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->f18.u32l;
    // 0x80267724: sll         $t9, $a0, 16
    ctx->r25 = S32(ctx->r4 << 16);
L_80267728:
    // 0x80267728: sra         $a0, $t9, 16
    ctx->r4 = S32(SIGNED(ctx->r25) >> 16);
    // 0x8026772C: slti        $at, $a0, 0xA
    ctx->r1 = SIGNED(ctx->r4) < 0XA ? 1 : 0;
    // 0x80267730: bne         $at, $zero, L_80267638
    if (ctx->r1 != 0) {
        // 0x80267734: addu        $t8, $s2, $a0
        ctx->r24 = ADD32(ctx->r18, ctx->r4);
            goto L_80267638;
    }
    // 0x80267734: addu        $t8, $s2, $a0
    ctx->r24 = ADD32(ctx->r18, ctx->r4);
    // 0x80267738: beq         $a3, $zero, L_8026787C
    if (ctx->r7 == 0) {
        // 0x8026773C: or          $a0, $zero, $zero
        ctx->r4 = 0 | 0;
            goto L_8026787C;
    }
    // 0x8026773C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x80267740: addiu       $a1, $a3, -0x1
    ctx->r5 = ADD32(ctx->r7, -0X1);
    // 0x80267744: sll         $t6, $a1, 16
    ctx->r14 = S32(ctx->r5 << 16);
    // 0x80267748: sra         $a1, $t6, 16
    ctx->r5 = S32(SIGNED(ctx->r14) >> 16);
    // 0x8026774C: or          $a2, $s4, $zero
    ctx->r6 = ctx->r20 | 0;
    // 0x80267750: andi        $s5, $fp, 0x1
    ctx->r21 = ctx->r30 & 0X1;
    // 0x80267754: sh          $t2, 0x12E($sp)
    MEM_H(0X12E, ctx->r29) = ctx->r10;
    // 0x80267758: sw          $t3, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r11;
    // 0x8026775C: jal         0x8005DE74
    // 0x80267760: sh          $t4, 0x12A($sp)
    MEM_H(0X12A, ctx->r29) = ctx->r12;
    func_8005DE74(rdram, ctx);
        goto after_0;
    // 0x80267760: sh          $t4, 0x12A($sp)
    MEM_H(0X12A, ctx->r29) = ctx->r12;
    after_0:
    // 0x80267764: lh          $a1, 0x68($sp)
    ctx->r5 = MEM_H(ctx->r29, 0X68);
    // 0x80267768: lui         $t0, 0x8028
    ctx->r8 = S32(0X8028 << 16);
    // 0x8026776C: lhu         $t1, 0x136($sp)
    ctx->r9 = MEM_HU(ctx->r29, 0X136);
    // 0x80267770: lh          $t2, 0x12E($sp)
    ctx->r10 = MEM_H(ctx->r29, 0X12E);
    // 0x80267774: lw          $t3, 0x64($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X64);
    // 0x80267778: lh          $t4, 0x12A($sp)
    ctx->r12 = MEM_H(ctx->r29, 0X12A);
    // 0x8026777C: addu        $t8, $s2, $a1
    ctx->r24 = ADD32(ctx->r18, ctx->r5);
    // 0x80267780: addiu       $t0, $t0, -0x3678
    ctx->r8 = ADD32(ctx->r8, -0X3678);
    // 0x80267784: beq         $s5, $zero, L_8026782C
    if (ctx->r21 == 0) {
        // 0x80267788: sb          $zero, -0x1($t8)
        MEM_B(-0X1, ctx->r24) = 0;
            goto L_8026782C;
    }
    // 0x80267788: sb          $zero, -0x1($t8)
    MEM_B(-0X1, ctx->r24) = 0;
    // 0x8026778C: lbu         $t9, 0x0($s0)
    ctx->r25 = MEM_BU(ctx->r16, 0X0);
    // 0x80267790: addiu       $at, $zero, 0x13
    ctx->r1 = ADD32(0, 0X13);
    // 0x80267794: bne         $t9, $at, L_8026782C
    if (ctx->r25 != ctx->r1) {
        // 0x80267798: nop
    
            goto L_8026782C;
    }
    // 0x80267798: nop

    // 0x8026779C: lh          $a0, 0x30($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X30);
    // 0x802677A0: sh          $t4, 0x12A($sp)
    MEM_H(0X12A, ctx->r29) = ctx->r12;
    // 0x802677A4: sw          $t3, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r11;
    // 0x802677A8: sh          $t2, 0x12E($sp)
    MEM_H(0X12E, ctx->r29) = ctx->r10;
    // 0x802677AC: jal         0x80272AD4
    // 0x802677B0: sh          $a1, 0x126($sp)
    MEM_H(0X126, ctx->r29) = ctx->r5;
    ovl_8024B800_func_80272AD4(rdram, ctx);
        goto after_1;
    // 0x802677B0: sh          $a1, 0x126($sp)
    MEM_H(0X126, ctx->r29) = ctx->r5;
    after_1:
    // 0x802677B4: lh          $a1, 0x126($sp)
    ctx->r5 = MEM_H(ctx->r29, 0X126);
    // 0x802677B8: lui         $t0, 0x8028
    ctx->r8 = S32(0X8028 << 16);
    // 0x802677BC: lhu         $t1, 0x136($sp)
    ctx->r9 = MEM_HU(ctx->r29, 0X136);
    // 0x802677C0: lh          $t2, 0x12E($sp)
    ctx->r10 = MEM_H(ctx->r29, 0X12E);
    // 0x802677C4: lw          $t3, 0x64($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X64);
    // 0x802677C8: lh          $t4, 0x12A($sp)
    ctx->r12 = MEM_H(ctx->r29, 0X12A);
    // 0x802677CC: sltiu       $at, $v0, 0xC8
    ctx->r1 = ctx->r2 < 0XC8 ? 1 : 0;
    // 0x802677D0: beq         $at, $zero, L_8026782C
    if (ctx->r1 == 0) {
        // 0x802677D4: addiu       $t0, $t0, -0x3678
        ctx->r8 = ADD32(ctx->r8, -0X3678);
            goto L_8026782C;
    }
    // 0x802677D4: addiu       $t0, $t0, -0x3678
    ctx->r8 = ADD32(ctx->r8, -0X3678);
    // 0x802677D8: lw          $v1, 0xC8($s0)
    ctx->r3 = MEM_W(ctx->r16, 0XC8);
    // 0x802677DC: nop

    // 0x802677E0: lhu         $t5, 0x8($v1)
    ctx->r13 = MEM_HU(ctx->r3, 0X8);
    // 0x802677E4: nop

    // 0x802677E8: andi        $t6, $t5, 0x1
    ctx->r14 = ctx->r13 & 0X1;
    // 0x802677EC: beq         $t6, $zero, L_80267800
    if (ctx->r14 == 0) {
        // 0x802677F0: nop
    
            goto L_80267800;
    }
    // 0x802677F0: nop

    // 0x802677F4: lh          $v0, 0x2E($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X2E);
    // 0x802677F8: b           L_80267810
    // 0x802677FC: lh          $t7, 0x8CA($v1)
    ctx->r15 = MEM_H(ctx->r3, 0X8CA);
        goto L_80267810;
    // 0x802677FC: lh          $t7, 0x8CA($v1)
    ctx->r15 = MEM_H(ctx->r3, 0X8CA);
L_80267800:
    // 0x80267800: lh          $v0, 0x2E($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X2E);
    // 0x80267804: nop

    // 0x80267808: negu        $v0, $v0
    ctx->r2 = SUB32(0, ctx->r2);
    // 0x8026780C: lh          $t7, 0x8CA($v1)
    ctx->r15 = MEM_H(ctx->r3, 0X8CA);
L_80267810:
    // 0x80267810: nop

    // 0x80267814: addiu       $t8, $t7, -0x3C
    ctx->r24 = ADD32(ctx->r15, -0X3C);
    // 0x80267818: slt         $at, $t8, $v0
    ctx->r1 = SIGNED(ctx->r24) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x8026781C: bne         $at, $zero, L_80267894
    if (ctx->r1 != 0) {
        // 0x80267820: slti        $at, $v0, 0x123
        ctx->r1 = SIGNED(ctx->r2) < 0X123 ? 1 : 0;
            goto L_80267894;
    }
    // 0x80267820: slti        $at, $v0, 0x123
    ctx->r1 = SIGNED(ctx->r2) < 0X123 ? 1 : 0;
    // 0x80267824: beq         $at, $zero, L_80267898
    if (ctx->r1 == 0) {
        // 0x80267828: lw          $ra, 0x54($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X54);
            goto L_80267898;
    }
    // 0x80267828: lw          $ra, 0x54($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X54);
L_8026782C:
    // 0x8026782C: multu       $a1, $s3
    result = U64(U32(ctx->r5)) * U64(U32(ctx->r19)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80267830: lhu         $v1, 0x0($t3)
    ctx->r3 = MEM_HU(ctx->r11, 0X0);
    // 0x80267834: addiu       $t8, $zero, 0x17
    ctx->r24 = ADD32(0, 0X17);
    // 0x80267838: mflo        $t9
    ctx->r25 = lo;
    // 0x8026783C: addu        $v0, $s1, $t9
    ctx->r2 = ADD32(ctx->r17, ctx->r25);
    // 0x80267840: lbu         $t5, 0x7($v0)
    ctx->r13 = MEM_BU(ctx->r2, 0X7);
    // 0x80267844: nop

    // 0x80267848: beq         $t5, $v1, L_80267868
    if (ctx->r13 == ctx->r3) {
        // 0x8026784C: nop
    
            goto L_80267868;
    }
    // 0x8026784C: nop

    // 0x80267850: lbu         $t6, 0x9($v0)
    ctx->r14 = MEM_BU(ctx->r2, 0X9);
    // 0x80267854: addiu       $t7, $zero, 0xF
    ctx->r15 = ADD32(0, 0XF);
    // 0x80267858: bne         $t6, $zero, L_80267868
    if (ctx->r14 != 0) {
        // 0x8026785C: nop
    
            goto L_80267868;
    }
    // 0x8026785C: nop

    // 0x80267860: sb          $v1, 0x7($v0)
    MEM_B(0X7, ctx->r2) = ctx->r3;
    // 0x80267864: sb          $t7, 0x9($v0)
    MEM_B(0X9, ctx->r2) = ctx->r15;
L_80267868:
    // 0x80267868: lhu         $t9, 0x12($v0)
    ctx->r25 = MEM_HU(ctx->r2, 0X12);
    // 0x8026786C: sb          $t8, 0x0($v0)
    MEM_B(0X0, ctx->r2) = ctx->r24;
    // 0x80267870: ori         $t5, $t9, 0x100
    ctx->r13 = ctx->r25 | 0X100;
    // 0x80267874: sh          $t5, 0x12($v0)
    MEM_H(0X12, ctx->r2) = ctx->r13;
    // 0x80267878: sb          $a1, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r5;
L_8026787C:
    // 0x8026787C: addiu       $t2, $t2, 0x1
    ctx->r10 = ADD32(ctx->r10, 0X1);
    // 0x80267880: sll         $t6, $t2, 16
    ctx->r14 = S32(ctx->r10 << 16);
    // 0x80267884: sra         $t2, $t6, 16
    ctx->r10 = S32(SIGNED(ctx->r14) >> 16);
    // 0x80267888: slt         $at, $t2, $t4
    ctx->r1 = SIGNED(ctx->r10) < SIGNED(ctx->r12) ? 1 : 0;
    // 0x8026788C: bne         $at, $zero, L_80267608
    if (ctx->r1 != 0) {
            // 0x80267890: sll         $t9, $t2, 3
    ctx->r25 = S32(ctx->r10 << 3);
    ovl_8024B800_func_80267608(rdram, ctx);
    return;
    }
    // 0x80267890: sll         $t9, $t2, 3
    ctx->r25 = S32(ctx->r10 << 3);
L_80267894:
    // 0x80267894: lw          $ra, 0x54($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X54);
L_80267898:
    // 0x80267898: lwc1        $f21, 0x18($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X18);
    // 0x8026789C: lwc1        $f20, 0x1C($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x802678A0: lwc1        $f23, 0x20($sp)
    ctx->f_odd[(23 - 1) * 2] = MEM_W(ctx->r29, 0X20);
    // 0x802678A4: lwc1        $f22, 0x24($sp)
    ctx->f22.u32l = MEM_W(ctx->r29, 0X24);
    // 0x802678A8: lwc1        $f25, 0x28($sp)
    ctx->f_odd[(25 - 1) * 2] = MEM_W(ctx->r29, 0X28);
    // 0x802678AC: lwc1        $f24, 0x2C($sp)
    ctx->f24.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x802678B0: lw          $s0, 0x30($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X30);
    // 0x802678B4: lw          $s1, 0x34($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X34);
    // 0x802678B8: lw          $s2, 0x38($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X38);
    // 0x802678BC: lw          $s3, 0x3C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X3C);
    // 0x802678C0: lw          $s4, 0x40($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X40);
    // 0x802678C4: lw          $s5, 0x44($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X44);
    // 0x802678C8: lw          $s6, 0x48($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X48);
    // 0x802678CC: lw          $s7, 0x4C($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X4C);
    // 0x802678D0: lw          $fp, 0x50($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X50);
    // 0x802678D4: jr          $ra
    // 0x802678D8: addiu       $sp, $sp, 0x130
    ctx->r29 = ADD32(ctx->r29, 0X130);
    return;
    // 0x802678D8: addiu       $sp, $sp, 0x130
    ctx->r29 = ADD32(ctx->r29, 0X130);
;}
RECOMP_FUNC void ovl_8024B800_func_802676E4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
L_80267608:
    // 0x802676E4: lhu         $t6, 0x1A($v1)
    ctx->r14 = MEM_HU(ctx->r3, 0X1A);
L_80267638:
    // 0x802676E8: addu        $v0, $s4, $t5
    ctx->r2 = ADD32(ctx->r20, ctx->r13);
    // 0x802676EC: sh          $t6, 0x0($v0)
    MEM_H(0X0, ctx->r2) = ctx->r14;
    // 0x802676F0: lwc1        $f4, 0x4C($v1)
    ctx->f4.u32l = MEM_W(ctx->r3, 0X4C);
    // 0x802676F4: lwc1        $f18, 0x4C($s0)
    ctx->f18.u32l = MEM_W(ctx->r16, 0X4C);
    // 0x802676F8: lwc1        $f8, 0x44($v1)
    ctx->f8.u32l = MEM_W(ctx->r3, 0X44);
    // 0x802676FC: sub.s       $f0, $f18, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f0.fl = ctx->f18.fl - ctx->f4.fl;
    // 0x80267700: lwc1        $f6, 0x44($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X44);
    // 0x80267704: mul.s       $f10, $f0, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f10.fl = MUL_S(ctx->f0.fl, ctx->f0.fl);
    // 0x80267708: sub.s       $f2, $f6, $f8
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f2.fl = ctx->f6.fl - ctx->f8.fl;
    // 0x8026770C: addiu       $a3, $a3, 0x1
    ctx->r7 = ADD32(ctx->r7, 0X1);
    // 0x80267710: sll         $t7, $a3, 16
    ctx->r15 = S32(ctx->r7 << 16);
    // 0x80267714: mul.s       $f16, $f2, $f2
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f16.fl = MUL_S(ctx->f2.fl, ctx->f2.fl);
    // 0x80267718: sra         $a3, $t7, 16
    ctx->r7 = S32(SIGNED(ctx->r15) >> 16);
    // 0x8026771C: add.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl + ctx->f16.fl;
    // 0x80267720: swc1        $f18, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->f18.u32l;
    // 0x80267724: sll         $t9, $a0, 16
    ctx->r25 = S32(ctx->r4 << 16);
    // 0x80267728: sra         $a0, $t9, 16
    ctx->r4 = S32(SIGNED(ctx->r25) >> 16);
    // 0x8026772C: slti        $at, $a0, 0xA
    ctx->r1 = SIGNED(ctx->r4) < 0XA ? 1 : 0;
    // 0x80267730: bne         $at, $zero, L_80267638
    if (ctx->r1 != 0) {
            // 0x80267734: addu        $t8, $s2, $a0
    ctx->r24 = ADD32(ctx->r18, ctx->r4);
    ovl_8024B800_func_80267638(rdram, ctx);
    return;
    }
    // 0x80267734: addu        $t8, $s2, $a0
    ctx->r24 = ADD32(ctx->r18, ctx->r4);
    // 0x80267738: beq         $a3, $zero, L_8026787C
    if (ctx->r7 == 0) {
        // 0x8026773C: or          $a0, $zero, $zero
        ctx->r4 = 0 | 0;
            goto L_8026787C;
    }
    // 0x8026773C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x80267740: addiu       $a1, $a3, -0x1
    ctx->r5 = ADD32(ctx->r7, -0X1);
    // 0x80267744: sll         $t6, $a1, 16
    ctx->r14 = S32(ctx->r5 << 16);
    // 0x80267748: sra         $a1, $t6, 16
    ctx->r5 = S32(SIGNED(ctx->r14) >> 16);
    // 0x8026774C: or          $a2, $s4, $zero
    ctx->r6 = ctx->r20 | 0;
    // 0x80267750: andi        $s5, $fp, 0x1
    ctx->r21 = ctx->r30 & 0X1;
    // 0x80267754: sh          $t2, 0x12E($sp)
    MEM_H(0X12E, ctx->r29) = ctx->r10;
    // 0x80267758: sw          $t3, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r11;
    // 0x8026775C: jal         0x8005DE74
    // 0x80267760: sh          $t4, 0x12A($sp)
    MEM_H(0X12A, ctx->r29) = ctx->r12;
    func_8005DE74(rdram, ctx);
        goto after_0;
    // 0x80267760: sh          $t4, 0x12A($sp)
    MEM_H(0X12A, ctx->r29) = ctx->r12;
    after_0:
    // 0x80267764: lh          $a1, 0x68($sp)
    ctx->r5 = MEM_H(ctx->r29, 0X68);
    // 0x80267768: lui         $t0, 0x8028
    ctx->r8 = S32(0X8028 << 16);
    // 0x8026776C: lhu         $t1, 0x136($sp)
    ctx->r9 = MEM_HU(ctx->r29, 0X136);
    // 0x80267770: lh          $t2, 0x12E($sp)
    ctx->r10 = MEM_H(ctx->r29, 0X12E);
    // 0x80267774: lw          $t3, 0x64($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X64);
    // 0x80267778: lh          $t4, 0x12A($sp)
    ctx->r12 = MEM_H(ctx->r29, 0X12A);
    // 0x8026777C: addu        $t8, $s2, $a1
    ctx->r24 = ADD32(ctx->r18, ctx->r5);
    // 0x80267780: addiu       $t0, $t0, -0x3678
    ctx->r8 = ADD32(ctx->r8, -0X3678);
    // 0x80267784: beq         $s5, $zero, L_8026782C
    if (ctx->r21 == 0) {
        // 0x80267788: sb          $zero, -0x1($t8)
        MEM_B(-0X1, ctx->r24) = 0;
            goto L_8026782C;
    }
    // 0x80267788: sb          $zero, -0x1($t8)
    MEM_B(-0X1, ctx->r24) = 0;
    // 0x8026778C: lbu         $t9, 0x0($s0)
    ctx->r25 = MEM_BU(ctx->r16, 0X0);
    // 0x80267790: addiu       $at, $zero, 0x13
    ctx->r1 = ADD32(0, 0X13);
    // 0x80267794: bne         $t9, $at, L_8026782C
    if (ctx->r25 != ctx->r1) {
        // 0x80267798: nop
    
            goto L_8026782C;
    }
    // 0x80267798: nop

    // 0x8026779C: lh          $a0, 0x30($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X30);
    // 0x802677A0: sh          $t4, 0x12A($sp)
    MEM_H(0X12A, ctx->r29) = ctx->r12;
    // 0x802677A4: sw          $t3, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r11;
    // 0x802677A8: sh          $t2, 0x12E($sp)
    MEM_H(0X12E, ctx->r29) = ctx->r10;
    // 0x802677AC: jal         0x80272AD4
    // 0x802677B0: sh          $a1, 0x126($sp)
    MEM_H(0X126, ctx->r29) = ctx->r5;
    ovl_8024B800_func_80272AD4(rdram, ctx);
        goto after_1;
    // 0x802677B0: sh          $a1, 0x126($sp)
    MEM_H(0X126, ctx->r29) = ctx->r5;
    after_1:
    // 0x802677B4: lh          $a1, 0x126($sp)
    ctx->r5 = MEM_H(ctx->r29, 0X126);
    // 0x802677B8: lui         $t0, 0x8028
    ctx->r8 = S32(0X8028 << 16);
    // 0x802677BC: lhu         $t1, 0x136($sp)
    ctx->r9 = MEM_HU(ctx->r29, 0X136);
    // 0x802677C0: lh          $t2, 0x12E($sp)
    ctx->r10 = MEM_H(ctx->r29, 0X12E);
    // 0x802677C4: lw          $t3, 0x64($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X64);
    // 0x802677C8: lh          $t4, 0x12A($sp)
    ctx->r12 = MEM_H(ctx->r29, 0X12A);
    // 0x802677CC: sltiu       $at, $v0, 0xC8
    ctx->r1 = ctx->r2 < 0XC8 ? 1 : 0;
    // 0x802677D0: beq         $at, $zero, L_8026782C
    if (ctx->r1 == 0) {
        // 0x802677D4: addiu       $t0, $t0, -0x3678
        ctx->r8 = ADD32(ctx->r8, -0X3678);
            goto L_8026782C;
    }
    // 0x802677D4: addiu       $t0, $t0, -0x3678
    ctx->r8 = ADD32(ctx->r8, -0X3678);
    // 0x802677D8: lw          $v1, 0xC8($s0)
    ctx->r3 = MEM_W(ctx->r16, 0XC8);
    // 0x802677DC: nop

    // 0x802677E0: lhu         $t5, 0x8($v1)
    ctx->r13 = MEM_HU(ctx->r3, 0X8);
    // 0x802677E4: nop

    // 0x802677E8: andi        $t6, $t5, 0x1
    ctx->r14 = ctx->r13 & 0X1;
    // 0x802677EC: beq         $t6, $zero, L_80267800
    if (ctx->r14 == 0) {
        // 0x802677F0: nop
    
            goto L_80267800;
    }
    // 0x802677F0: nop

    // 0x802677F4: lh          $v0, 0x2E($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X2E);
    // 0x802677F8: b           L_80267810
    // 0x802677FC: lh          $t7, 0x8CA($v1)
    ctx->r15 = MEM_H(ctx->r3, 0X8CA);
        goto L_80267810;
    // 0x802677FC: lh          $t7, 0x8CA($v1)
    ctx->r15 = MEM_H(ctx->r3, 0X8CA);
L_80267800:
    // 0x80267800: lh          $v0, 0x2E($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X2E);
    // 0x80267804: nop

    // 0x80267808: negu        $v0, $v0
    ctx->r2 = SUB32(0, ctx->r2);
    // 0x8026780C: lh          $t7, 0x8CA($v1)
    ctx->r15 = MEM_H(ctx->r3, 0X8CA);
L_80267810:
    // 0x80267810: nop

    // 0x80267814: addiu       $t8, $t7, -0x3C
    ctx->r24 = ADD32(ctx->r15, -0X3C);
    // 0x80267818: slt         $at, $t8, $v0
    ctx->r1 = SIGNED(ctx->r24) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x8026781C: bne         $at, $zero, L_80267894
    if (ctx->r1 != 0) {
        // 0x80267820: slti        $at, $v0, 0x123
        ctx->r1 = SIGNED(ctx->r2) < 0X123 ? 1 : 0;
            goto L_80267894;
    }
    // 0x80267820: slti        $at, $v0, 0x123
    ctx->r1 = SIGNED(ctx->r2) < 0X123 ? 1 : 0;
    // 0x80267824: beq         $at, $zero, L_80267898
    if (ctx->r1 == 0) {
        // 0x80267828: lw          $ra, 0x54($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X54);
            goto L_80267898;
    }
    // 0x80267828: lw          $ra, 0x54($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X54);
L_8026782C:
    // 0x8026782C: multu       $a1, $s3
    result = U64(U32(ctx->r5)) * U64(U32(ctx->r19)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80267830: lhu         $v1, 0x0($t3)
    ctx->r3 = MEM_HU(ctx->r11, 0X0);
    // 0x80267834: addiu       $t8, $zero, 0x17
    ctx->r24 = ADD32(0, 0X17);
    // 0x80267838: mflo        $t9
    ctx->r25 = lo;
    // 0x8026783C: addu        $v0, $s1, $t9
    ctx->r2 = ADD32(ctx->r17, ctx->r25);
    // 0x80267840: lbu         $t5, 0x7($v0)
    ctx->r13 = MEM_BU(ctx->r2, 0X7);
    // 0x80267844: nop

    // 0x80267848: beq         $t5, $v1, L_80267868
    if (ctx->r13 == ctx->r3) {
        // 0x8026784C: nop
    
            goto L_80267868;
    }
    // 0x8026784C: nop

    // 0x80267850: lbu         $t6, 0x9($v0)
    ctx->r14 = MEM_BU(ctx->r2, 0X9);
    // 0x80267854: addiu       $t7, $zero, 0xF
    ctx->r15 = ADD32(0, 0XF);
    // 0x80267858: bne         $t6, $zero, L_80267868
    if (ctx->r14 != 0) {
        // 0x8026785C: nop
    
            goto L_80267868;
    }
    // 0x8026785C: nop

    // 0x80267860: sb          $v1, 0x7($v0)
    MEM_B(0X7, ctx->r2) = ctx->r3;
    // 0x80267864: sb          $t7, 0x9($v0)
    MEM_B(0X9, ctx->r2) = ctx->r15;
L_80267868:
    // 0x80267868: lhu         $t9, 0x12($v0)
    ctx->r25 = MEM_HU(ctx->r2, 0X12);
    // 0x8026786C: sb          $t8, 0x0($v0)
    MEM_B(0X0, ctx->r2) = ctx->r24;
    // 0x80267870: ori         $t5, $t9, 0x100
    ctx->r13 = ctx->r25 | 0X100;
    // 0x80267874: sh          $t5, 0x12($v0)
    MEM_H(0X12, ctx->r2) = ctx->r13;
    // 0x80267878: sb          $a1, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r5;
L_8026787C:
    // 0x8026787C: addiu       $t2, $t2, 0x1
    ctx->r10 = ADD32(ctx->r10, 0X1);
    // 0x80267880: sll         $t6, $t2, 16
    ctx->r14 = S32(ctx->r10 << 16);
    // 0x80267884: sra         $t2, $t6, 16
    ctx->r10 = S32(SIGNED(ctx->r14) >> 16);
    // 0x80267888: slt         $at, $t2, $t4
    ctx->r1 = SIGNED(ctx->r10) < SIGNED(ctx->r12) ? 1 : 0;
    // 0x8026788C: bne         $at, $zero, L_80267608
    if (ctx->r1 != 0) {
            // 0x80267890: sll         $t9, $t2, 3
    ctx->r25 = S32(ctx->r10 << 3);
    ovl_8024B800_func_80267608(rdram, ctx);
    return;
    }
    // 0x80267890: sll         $t9, $t2, 3
    ctx->r25 = S32(ctx->r10 << 3);
L_80267894:
    // 0x80267894: lw          $ra, 0x54($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X54);
L_80267898:
    // 0x80267898: lwc1        $f21, 0x18($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X18);
    // 0x8026789C: lwc1        $f20, 0x1C($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x802678A0: lwc1        $f23, 0x20($sp)
    ctx->f_odd[(23 - 1) * 2] = MEM_W(ctx->r29, 0X20);
    // 0x802678A4: lwc1        $f22, 0x24($sp)
    ctx->f22.u32l = MEM_W(ctx->r29, 0X24);
    // 0x802678A8: lwc1        $f25, 0x28($sp)
    ctx->f_odd[(25 - 1) * 2] = MEM_W(ctx->r29, 0X28);
    // 0x802678AC: lwc1        $f24, 0x2C($sp)
    ctx->f24.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x802678B0: lw          $s0, 0x30($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X30);
    // 0x802678B4: lw          $s1, 0x34($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X34);
    // 0x802678B8: lw          $s2, 0x38($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X38);
    // 0x802678BC: lw          $s3, 0x3C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X3C);
    // 0x802678C0: lw          $s4, 0x40($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X40);
    // 0x802678C4: lw          $s5, 0x44($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X44);
    // 0x802678C8: lw          $s6, 0x48($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X48);
    // 0x802678CC: lw          $s7, 0x4C($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X4C);
    // 0x802678D0: lw          $fp, 0x50($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X50);
    // 0x802678D4: jr          $ra
    // 0x802678D8: addiu       $sp, $sp, 0x130
    ctx->r29 = ADD32(ctx->r29, 0X130);
    return;
    // 0x802678D8: addiu       $sp, $sp, 0x130
    ctx->r29 = ADD32(ctx->r29, 0X130);
;}
RECOMP_FUNC void ovl_8024B800_func_802677D0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
L_80267608:
    // 0x802677D0: beq         $at, $zero, L_8026782C
    if (ctx->r1 == 0) {
        // 0x802677D4: addiu       $t0, $t0, -0x3678
        ctx->r8 = ADD32(ctx->r8, -0X3678);
            goto L_8026782C;
    }
    // 0x802677D4: addiu       $t0, $t0, -0x3678
    ctx->r8 = ADD32(ctx->r8, -0X3678);
    // 0x802677D8: lw          $v1, 0xC8($s0)
    ctx->r3 = MEM_W(ctx->r16, 0XC8);
    // 0x802677DC: nop

    // 0x802677E0: lhu         $t5, 0x8($v1)
    ctx->r13 = MEM_HU(ctx->r3, 0X8);
    // 0x802677E4: nop

    // 0x802677E8: andi        $t6, $t5, 0x1
    ctx->r14 = ctx->r13 & 0X1;
    // 0x802677EC: beq         $t6, $zero, L_80267800
    if (ctx->r14 == 0) {
        // 0x802677F0: nop
    
            goto L_80267800;
    }
    // 0x802677F0: nop

    // 0x802677F4: lh          $v0, 0x2E($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X2E);
    // 0x802677F8: b           L_80267810
    // 0x802677FC: lh          $t7, 0x8CA($v1)
    ctx->r15 = MEM_H(ctx->r3, 0X8CA);
        goto L_80267810;
    // 0x802677FC: lh          $t7, 0x8CA($v1)
    ctx->r15 = MEM_H(ctx->r3, 0X8CA);
L_80267800:
    // 0x80267800: lh          $v0, 0x2E($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X2E);
    // 0x80267804: nop

    // 0x80267808: negu        $v0, $v0
    ctx->r2 = SUB32(0, ctx->r2);
    // 0x8026780C: lh          $t7, 0x8CA($v1)
    ctx->r15 = MEM_H(ctx->r3, 0X8CA);
L_80267810:
    // 0x80267810: nop

    // 0x80267814: addiu       $t8, $t7, -0x3C
    ctx->r24 = ADD32(ctx->r15, -0X3C);
    // 0x80267818: slt         $at, $t8, $v0
    ctx->r1 = SIGNED(ctx->r24) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x8026781C: bne         $at, $zero, L_80267894
    if (ctx->r1 != 0) {
        // 0x80267820: slti        $at, $v0, 0x123
        ctx->r1 = SIGNED(ctx->r2) < 0X123 ? 1 : 0;
            goto L_80267894;
    }
    // 0x80267820: slti        $at, $v0, 0x123
    ctx->r1 = SIGNED(ctx->r2) < 0X123 ? 1 : 0;
    // 0x80267824: beq         $at, $zero, L_80267898
    if (ctx->r1 == 0) {
        // 0x80267828: lw          $ra, 0x54($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X54);
            goto L_80267898;
    }
    // 0x80267828: lw          $ra, 0x54($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X54);
L_8026782C:
    // 0x8026782C: multu       $a1, $s3
    result = U64(U32(ctx->r5)) * U64(U32(ctx->r19)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80267830: lhu         $v1, 0x0($t3)
    ctx->r3 = MEM_HU(ctx->r11, 0X0);
    // 0x80267834: addiu       $t8, $zero, 0x17
    ctx->r24 = ADD32(0, 0X17);
    // 0x80267838: mflo        $t9
    ctx->r25 = lo;
    // 0x8026783C: addu        $v0, $s1, $t9
    ctx->r2 = ADD32(ctx->r17, ctx->r25);
    // 0x80267840: lbu         $t5, 0x7($v0)
    ctx->r13 = MEM_BU(ctx->r2, 0X7);
    // 0x80267844: nop

    // 0x80267848: beq         $t5, $v1, L_80267868
    if (ctx->r13 == ctx->r3) {
        // 0x8026784C: nop
    
            goto L_80267868;
    }
    // 0x8026784C: nop

    // 0x80267850: lbu         $t6, 0x9($v0)
    ctx->r14 = MEM_BU(ctx->r2, 0X9);
    // 0x80267854: addiu       $t7, $zero, 0xF
    ctx->r15 = ADD32(0, 0XF);
    // 0x80267858: bne         $t6, $zero, L_80267868
    if (ctx->r14 != 0) {
        // 0x8026785C: nop
    
            goto L_80267868;
    }
    // 0x8026785C: nop

    // 0x80267860: sb          $v1, 0x7($v0)
    MEM_B(0X7, ctx->r2) = ctx->r3;
    // 0x80267864: sb          $t7, 0x9($v0)
    MEM_B(0X9, ctx->r2) = ctx->r15;
L_80267868:
    // 0x80267868: lhu         $t9, 0x12($v0)
    ctx->r25 = MEM_HU(ctx->r2, 0X12);
    // 0x8026786C: sb          $t8, 0x0($v0)
    MEM_B(0X0, ctx->r2) = ctx->r24;
    // 0x80267870: ori         $t5, $t9, 0x100
    ctx->r13 = ctx->r25 | 0X100;
    // 0x80267874: sh          $t5, 0x12($v0)
    MEM_H(0X12, ctx->r2) = ctx->r13;
    // 0x80267878: sb          $a1, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r5;
    // 0x8026787C: addiu       $t2, $t2, 0x1
    ctx->r10 = ADD32(ctx->r10, 0X1);
    // 0x80267880: sll         $t6, $t2, 16
    ctx->r14 = S32(ctx->r10 << 16);
    // 0x80267884: sra         $t2, $t6, 16
    ctx->r10 = S32(SIGNED(ctx->r14) >> 16);
    // 0x80267888: slt         $at, $t2, $t4
    ctx->r1 = SIGNED(ctx->r10) < SIGNED(ctx->r12) ? 1 : 0;
    // 0x8026788C: bne         $at, $zero, L_80267608
    if (ctx->r1 != 0) {
            // 0x80267890: sll         $t9, $t2, 3
    ctx->r25 = S32(ctx->r10 << 3);
    ovl_8024B800_func_80267608(rdram, ctx);
    return;
    }
    // 0x80267890: sll         $t9, $t2, 3
    ctx->r25 = S32(ctx->r10 << 3);
L_80267894:
    // 0x80267894: lw          $ra, 0x54($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X54);
L_80267898:
    // 0x80267898: lwc1        $f21, 0x18($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X18);
    // 0x8026789C: lwc1        $f20, 0x1C($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x802678A0: lwc1        $f23, 0x20($sp)
    ctx->f_odd[(23 - 1) * 2] = MEM_W(ctx->r29, 0X20);
    // 0x802678A4: lwc1        $f22, 0x24($sp)
    ctx->f22.u32l = MEM_W(ctx->r29, 0X24);
    // 0x802678A8: lwc1        $f25, 0x28($sp)
    ctx->f_odd[(25 - 1) * 2] = MEM_W(ctx->r29, 0X28);
    // 0x802678AC: lwc1        $f24, 0x2C($sp)
    ctx->f24.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x802678B0: lw          $s0, 0x30($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X30);
    // 0x802678B4: lw          $s1, 0x34($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X34);
    // 0x802678B8: lw          $s2, 0x38($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X38);
    // 0x802678BC: lw          $s3, 0x3C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X3C);
    // 0x802678C0: lw          $s4, 0x40($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X40);
    // 0x802678C4: lw          $s5, 0x44($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X44);
    // 0x802678C8: lw          $s6, 0x48($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X48);
    // 0x802678CC: lw          $s7, 0x4C($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X4C);
    // 0x802678D0: lw          $fp, 0x50($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X50);
    // 0x802678D4: jr          $ra
    // 0x802678D8: addiu       $sp, $sp, 0x130
    ctx->r29 = ADD32(ctx->r29, 0X130);
    return;
    // 0x802678D8: addiu       $sp, $sp, 0x130
    ctx->r29 = ADD32(ctx->r29, 0X130);
;}
RECOMP_FUNC void ovl_8024B800_func_80267840(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
L_80267608:
    // 0x80267840: lbu         $t5, 0x7($v0)
    ctx->r13 = MEM_BU(ctx->r2, 0X7);
    // 0x80267844: nop

    // 0x80267848: beq         $t5, $v1, L_80267868
    if (ctx->r13 == ctx->r3) {
        // 0x8026784C: nop
    
            goto L_80267868;
    }
    // 0x8026784C: nop

    // 0x80267850: lbu         $t6, 0x9($v0)
    ctx->r14 = MEM_BU(ctx->r2, 0X9);
    // 0x80267854: addiu       $t7, $zero, 0xF
    ctx->r15 = ADD32(0, 0XF);
    // 0x80267858: bne         $t6, $zero, L_80267868
    if (ctx->r14 != 0) {
        // 0x8026785C: nop
    
            goto L_80267868;
    }
    // 0x8026785C: nop

    // 0x80267860: sb          $v1, 0x7($v0)
    MEM_B(0X7, ctx->r2) = ctx->r3;
    // 0x80267864: sb          $t7, 0x9($v0)
    MEM_B(0X9, ctx->r2) = ctx->r15;
L_80267868:
    // 0x80267868: lhu         $t9, 0x12($v0)
    ctx->r25 = MEM_HU(ctx->r2, 0X12);
    // 0x8026786C: sb          $t8, 0x0($v0)
    MEM_B(0X0, ctx->r2) = ctx->r24;
    // 0x80267870: ori         $t5, $t9, 0x100
    ctx->r13 = ctx->r25 | 0X100;
    // 0x80267874: sh          $t5, 0x12($v0)
    MEM_H(0X12, ctx->r2) = ctx->r13;
    // 0x80267878: sb          $a1, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r5;
    // 0x8026787C: addiu       $t2, $t2, 0x1
    ctx->r10 = ADD32(ctx->r10, 0X1);
    // 0x80267880: sll         $t6, $t2, 16
    ctx->r14 = S32(ctx->r10 << 16);
    // 0x80267884: sra         $t2, $t6, 16
    ctx->r10 = S32(SIGNED(ctx->r14) >> 16);
    // 0x80267888: slt         $at, $t2, $t4
    ctx->r1 = SIGNED(ctx->r10) < SIGNED(ctx->r12) ? 1 : 0;
    // 0x8026788C: bne         $at, $zero, L_80267608
    if (ctx->r1 != 0) {
            // 0x80267890: sll         $t9, $t2, 3
    ctx->r25 = S32(ctx->r10 << 3);
    ovl_8024B800_func_80267608(rdram, ctx);
    return;
    }
    // 0x80267890: sll         $t9, $t2, 3
    ctx->r25 = S32(ctx->r10 << 3);
    // 0x80267894: lw          $ra, 0x54($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X54);
    // 0x80267898: lwc1        $f21, 0x18($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X18);
    // 0x8026789C: lwc1        $f20, 0x1C($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x802678A0: lwc1        $f23, 0x20($sp)
    ctx->f_odd[(23 - 1) * 2] = MEM_W(ctx->r29, 0X20);
    // 0x802678A4: lwc1        $f22, 0x24($sp)
    ctx->f22.u32l = MEM_W(ctx->r29, 0X24);
    // 0x802678A8: lwc1        $f25, 0x28($sp)
    ctx->f_odd[(25 - 1) * 2] = MEM_W(ctx->r29, 0X28);
    // 0x802678AC: lwc1        $f24, 0x2C($sp)
    ctx->f24.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x802678B0: lw          $s0, 0x30($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X30);
    // 0x802678B4: lw          $s1, 0x34($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X34);
    // 0x802678B8: lw          $s2, 0x38($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X38);
    // 0x802678BC: lw          $s3, 0x3C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X3C);
    // 0x802678C0: lw          $s4, 0x40($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X40);
    // 0x802678C4: lw          $s5, 0x44($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X44);
    // 0x802678C8: lw          $s6, 0x48($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X48);
    // 0x802678CC: lw          $s7, 0x4C($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X4C);
    // 0x802678D0: lw          $fp, 0x50($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X50);
    // 0x802678D4: jr          $ra
    // 0x802678D8: addiu       $sp, $sp, 0x130
    ctx->r29 = ADD32(ctx->r29, 0X130);
    return;
    // 0x802678D8: addiu       $sp, $sp, 0x130
    ctx->r29 = ADD32(ctx->r29, 0X130);
;}
RECOMP_FUNC void ovl_8024B800_func_802678DC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802678DC: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x802678E0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802678E4: or          $a1, $a0, $zero
    ctx->r5 = ctx->r4 | 0;
    // 0x802678E8: sw          $a1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r5;
    // 0x802678EC: jal         0x80059898
    // 0x802678F0: addiu       $a0, $zero, 0x50
    ctx->r4 = ADD32(0, 0X50);
    func_80059898(rdram, ctx);
        goto after_0;
    // 0x802678F0: addiu       $a0, $zero, 0x50
    ctx->r4 = ADD32(0, 0X50);
    after_0:
    // 0x802678F4: addiu       $t7, $v0, 0x50
    ctx->r15 = ADD32(ctx->r2, 0X50);
    // 0x802678F8: sh          $t7, 0x1E($sp)
    MEM_H(0X1E, ctx->r29) = ctx->r15;
    // 0x802678FC: jal         0x80059898
    // 0x80267900: addiu       $a0, $zero, 0x64
    ctx->r4 = ADD32(0, 0X64);
    func_80059898(rdram, ctx);
        goto after_1;
    // 0x80267900: addiu       $a0, $zero, 0x64
    ctx->r4 = ADD32(0, 0X64);
    after_1:
    // 0x80267904: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x80267908: addiu       $a0, $a0, 0xB24
    ctx->r4 = ADD32(ctx->r4, 0XB24);
    // 0x8026790C: lw          $t8, 0x0($a0)
    ctx->r24 = MEM_W(ctx->r4, 0X0);
    // 0x80267910: mtc1        $zero, $f12
    ctx->f12.u32l = 0;
    // 0x80267914: lwc1        $f0, 0x4C($t8)
    ctx->f0.u32l = MEM_W(ctx->r24, 0X4C);
    // 0x80267918: lh          $a2, 0x1E($sp)
    ctx->r6 = MEM_H(ctx->r29, 0X1E);
    // 0x8026791C: c.lt.s      $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f12.fl < ctx->f0.fl;
    // 0x80267920: lw          $a1, 0x20($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X20);
    // 0x80267924: bc1f        L_80267934
    if (!c1cs) {
        // 0x80267928: or          $v1, $a2, $zero
        ctx->r3 = ctx->r6 | 0;
            goto L_80267934;
    }
    // 0x80267928: or          $v1, $a2, $zero
    ctx->r3 = ctx->r6 | 0;
    // 0x8026792C: b           L_80267934
    // 0x80267930: negu        $v1, $a2
    ctx->r3 = SUB32(0, ctx->r6);
        goto L_80267934;
    // 0x80267930: negu        $v1, $a2
    ctx->r3 = SUB32(0, ctx->r6);
L_80267934:
    // 0x80267934: cfc1        $t1, $FpcCsr
    ctx->r9 = get_cop1_cs();
    // 0x80267938: nop

    // 0x8026793C: ori         $at, $t1, 0x3
    ctx->r1 = ctx->r9 | 0X3;
    // 0x80267940: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x80267944: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x80267948: nop

    // 0x8026794C: cvt.w.s     $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    ctx->f4.u32l = CVT_W_S(ctx->f0.fl);
    // 0x80267950: mfc1        $t4, $f4
    ctx->r12 = (int32_t)ctx->f4.u32l;
    // 0x80267954: ctc1        $t1, $FpcCsr
    set_cop1_cs(ctx->r9);
    // 0x80267958: addu        $t5, $v1, $t4
    ctx->r13 = ADD32(ctx->r3, ctx->r12);
    // 0x8026795C: sh          $t5, 0x932($a1)
    MEM_H(0X932, ctx->r5) = ctx->r13;
    // 0x80267960: lw          $t6, 0x0($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X0);
    // 0x80267964: sll         $v1, $v0, 16
    ctx->r3 = S32(ctx->r2 << 16);
    // 0x80267968: lwc1        $f2, 0x44($t6)
    ctx->f2.u32l = MEM_W(ctx->r14, 0X44);
    // 0x8026796C: sra         $t8, $v1, 16
    ctx->r24 = S32(SIGNED(ctx->r3) >> 16);
    // 0x80267970: c.lt.s      $f12, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f12.fl < ctx->f2.fl;
    // 0x80267974: negu        $v1, $t8
    ctx->r3 = SUB32(0, ctx->r24);
    // 0x80267978: bc1f        L_80267990
    if (!c1cs) {
        // 0x8026797C: addiu       $t6, $zero, 0x123
        ctx->r14 = ADD32(0, 0X123);
            goto L_80267990;
    }
    // 0x8026797C: addiu       $t6, $zero, 0x123
    ctx->r14 = ADD32(0, 0X123);
    // 0x80267980: sll         $v1, $v0, 16
    ctx->r3 = S32(ctx->r2 << 16);
    // 0x80267984: sra         $t7, $v1, 16
    ctx->r15 = S32(SIGNED(ctx->r3) >> 16);
    // 0x80267988: b           L_80267990
    // 0x8026798C: or          $v1, $t7, $zero
    ctx->r3 = ctx->r15 | 0;
        goto L_80267990;
    // 0x8026798C: or          $v1, $t7, $zero
    ctx->r3 = ctx->r15 | 0;
L_80267990:
    // 0x80267990: cfc1        $t2, $FpcCsr
    ctx->r10 = get_cop1_cs();
    // 0x80267994: addiu       $t7, $zero, -0x123
    ctx->r15 = ADD32(0, -0X123);
    // 0x80267998: ori         $at, $t2, 0x3
    ctx->r1 = ctx->r10 | 0X3;
    // 0x8026799C: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x802679A0: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x802679A4: nop

    // 0x802679A8: cvt.w.s     $f6, $f2
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    ctx->f6.u32l = CVT_W_S(ctx->f2.fl);
    // 0x802679AC: mfc1        $t4, $f6
    ctx->r12 = (int32_t)ctx->f6.u32l;
    // 0x802679B0: ctc1        $t2, $FpcCsr
    set_cop1_cs(ctx->r10);
    // 0x802679B4: addu        $t5, $v1, $t4
    ctx->r13 = ADD32(ctx->r3, ctx->r12);
    // 0x802679B8: sh          $t5, 0x934($a1)
    MEM_H(0X934, ctx->r5) = ctx->r13;
    // 0x802679BC: lh          $v0, 0x934($a1)
    ctx->r2 = MEM_H(ctx->r5, 0X934);
    // 0x802679C0: nop

    // 0x802679C4: slti        $at, $v0, 0x124
    ctx->r1 = SIGNED(ctx->r2) < 0X124 ? 1 : 0;
    // 0x802679C8: bne         $at, $zero, L_802679E0
    if (ctx->r1 != 0) {
        // 0x802679CC: slti        $at, $v0, -0x123
        ctx->r1 = SIGNED(ctx->r2) < -0X123 ? 1 : 0;
            goto L_802679E0;
    }
    // 0x802679CC: slti        $at, $v0, -0x123
    ctx->r1 = SIGNED(ctx->r2) < -0X123 ? 1 : 0;
    // 0x802679D0: sh          $t6, 0x934($a1)
    MEM_H(0X934, ctx->r5) = ctx->r14;
    // 0x802679D4: lh          $v0, 0x934($a1)
    ctx->r2 = MEM_H(ctx->r5, 0X934);
    // 0x802679D8: nop

    // 0x802679DC: slti        $at, $v0, -0x123
    ctx->r1 = SIGNED(ctx->r2) < -0X123 ? 1 : 0;
L_802679E0:
    // 0x802679E0: beq         $at, $zero, L_802679F4
    if (ctx->r1 == 0) {
        // 0x802679E4: nop
    
            goto L_802679F4;
    }
    // 0x802679E4: nop

    // 0x802679E8: sh          $t7, 0x934($a1)
    MEM_H(0X934, ctx->r5) = ctx->r15;
    // 0x802679EC: lh          $v0, 0x934($a1)
    ctx->r2 = MEM_H(ctx->r5, 0X934);
    // 0x802679F0: nop

L_802679F4:
    // 0x802679F4: blez        $v0, L_80267A18
    if (SIGNED(ctx->r2) <= 0) {
        // 0x802679F8: lui         $at, 0x8028
        ctx->r1 = S32(0X8028 << 16);
            goto L_80267A18;
    }
    // 0x802679F8: lui         $at, 0x8028
    ctx->r1 = S32(0X8028 << 16);
    // 0x802679FC: lui         $at, 0x8028
    ctx->r1 = S32(0X8028 << 16);
    // 0x80267A00: lwc1        $f9, -0x2D00($at)
    ctx->f_odd[(9 - 1) * 2] = MEM_W(ctx->r1, -0X2D00);
    // 0x80267A04: lwc1        $f8, -0x2CFC($at)
    ctx->f8.u32l = MEM_W(ctx->r1, -0X2CFC);
    // 0x80267A08: lw          $t8, 0x0($a0)
    ctx->r24 = MEM_W(ctx->r4, 0X0);
    // 0x80267A0C: cvt.s.d     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.d); 
    ctx->f10.fl = CVT_S_D(ctx->f8.d);
    // 0x80267A10: b           L_80267A2C
    // 0x80267A14: swc1        $f10, 0xBC($t8)
    MEM_W(0XBC, ctx->r24) = ctx->f10.u32l;
        goto L_80267A2C;
    // 0x80267A14: swc1        $f10, 0xBC($t8)
    MEM_W(0XBC, ctx->r24) = ctx->f10.u32l;
L_80267A18:
    // 0x80267A18: lwc1        $f17, -0x2CF8($at)
    ctx->f_odd[(17 - 1) * 2] = MEM_W(ctx->r1, -0X2CF8);
    // 0x80267A1C: lwc1        $f16, -0x2CF4($at)
    ctx->f16.u32l = MEM_W(ctx->r1, -0X2CF4);
    // 0x80267A20: lw          $t9, 0x0($a0)
    ctx->r25 = MEM_W(ctx->r4, 0X0);
    // 0x80267A24: cvt.s.d     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.d); 
    ctx->f18.fl = CVT_S_D(ctx->f16.d);
    // 0x80267A28: swc1        $f18, 0xBC($t9)
    MEM_W(0XBC, ctx->r25) = ctx->f18.u32l;
L_80267A2C:
    // 0x80267A2C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80267A30: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80267A34: jr          $ra
    // 0x80267A38: nop

    return;
    // 0x80267A38: nop

;}
RECOMP_FUNC void ovl_8024B800_func_80267A3C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80267A3C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80267A40: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80267A44: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x80267A48: lhu         $v0, 0x8($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X8);
    // 0x80267A4C: or          $a2, $a0, $zero
    ctx->r6 = ctx->r4 | 0;
    // 0x80267A50: andi        $v1, $v0, 0x1
    ctx->r3 = ctx->r2 & 0X1;
    // 0x80267A54: beq         $v1, $zero, L_80267A6C
    if (ctx->r3 == 0) {
        // 0x80267A58: or          $a3, $zero, $zero
        ctx->r7 = 0 | 0;
            goto L_80267A6C;
    }
    // 0x80267A58: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x80267A5C: andi        $t6, $v0, 0x8
    ctx->r14 = ctx->r2 & 0X8;
    // 0x80267A60: bne         $t6, $zero, L_80267A6C
    if (ctx->r14 != 0) {
        // 0x80267A64: nop
    
            goto L_80267A6C;
    }
    // 0x80267A64: nop

    // 0x80267A68: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
L_80267A6C:
    // 0x80267A6C: bne         $v1, $zero, L_80267A84
    if (ctx->r3 != 0) {
        // 0x80267A70: addiu       $a0, $zero, 0x64
        ctx->r4 = ADD32(0, 0X64);
            goto L_80267A84;
    }
    // 0x80267A70: addiu       $a0, $zero, 0x64
    ctx->r4 = ADD32(0, 0X64);
    // 0x80267A74: andi        $t7, $v0, 0x8
    ctx->r15 = ctx->r2 & 0X8;
    // 0x80267A78: beq         $t7, $zero, L_80267A84
    if (ctx->r15 == 0) {
        // 0x80267A7C: nop
    
            goto L_80267A84;
    }
    // 0x80267A7C: nop

    // 0x80267A80: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
L_80267A84:
    // 0x80267A84: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    // 0x80267A88: jal         0x80059898
    // 0x80267A8C: sw          $a3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r7;
    func_80059898(rdram, ctx);
        goto after_0;
    // 0x80267A8C: sw          $a3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r7;
    after_0:
    // 0x80267A90: addiu       $a0, $zero, 0x14
    ctx->r4 = ADD32(0, 0X14);
    // 0x80267A94: jal         0x80059898
    // 0x80267A98: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    func_80059898(rdram, ctx);
        goto after_1;
    // 0x80267A98: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    after_1:
    // 0x80267A9C: lw          $a3, 0x1C($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X1C);
    // 0x80267AA0: lw          $a2, 0x20($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X20);
    // 0x80267AA4: lw          $t0, 0x18($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X18);
    // 0x80267AA8: beq         $a3, $zero, L_80267B88
    if (ctx->r7 == 0) {
        // 0x80267AAC: lui         $a1, 0x8012
        ctx->r5 = S32(0X8012 << 16);
            goto L_80267B88;
    }
    // 0x80267AAC: lui         $a1, 0x8012
    ctx->r5 = S32(0X8012 << 16);
    // 0x80267AB0: lhu         $t8, 0x26($sp)
    ctx->r24 = MEM_HU(ctx->r29, 0X26);
    // 0x80267AB4: nop

    // 0x80267AB8: bne         $t8, $zero, L_80267B88
    if (ctx->r24 != 0) {
        // 0x80267ABC: nop
    
            goto L_80267B88;
    }
    // 0x80267ABC: nop

    // 0x80267AC0: lhu         $t9, 0x10($a2)
    ctx->r25 = MEM_HU(ctx->r6, 0X10);
    // 0x80267AC4: lhu         $t2, 0x8($a2)
    ctx->r10 = MEM_HU(ctx->r6, 0X8);
    // 0x80267AC8: ori         $t1, $t9, 0x800
    ctx->r9 = ctx->r25 | 0X800;
    // 0x80267ACC: andi        $t3, $t2, 0x1
    ctx->r11 = ctx->r10 & 0X1;
    // 0x80267AD0: beq         $t3, $zero, L_80267AE0
    if (ctx->r11 == 0) {
        // 0x80267AD4: sh          $t1, 0x10($a2)
        MEM_H(0X10, ctx->r6) = ctx->r9;
            goto L_80267AE0;
    }
    // 0x80267AD4: sh          $t1, 0x10($a2)
    MEM_H(0X10, ctx->r6) = ctx->r9;
    // 0x80267AD8: b           L_80267AE4
    // 0x80267ADC: addiu       $v1, $zero, 0x1FD
    ctx->r3 = ADD32(0, 0X1FD);
        goto L_80267AE4;
    // 0x80267ADC: addiu       $v1, $zero, 0x1FD
    ctx->r3 = ADD32(0, 0X1FD);
L_80267AE0:
    // 0x80267AE0: addiu       $v1, $zero, -0x211
    ctx->r3 = ADD32(0, -0X211);
L_80267AE4:
    // 0x80267AE4: lui         $a1, 0x8012
    ctx->r5 = S32(0X8012 << 16);
    // 0x80267AE8: addu        $t4, $v1, $v0
    ctx->r12 = ADD32(ctx->r3, ctx->r2);
    // 0x80267AEC: sh          $t4, 0x932($a2)
    MEM_H(0X932, ctx->r6) = ctx->r12;
    // 0x80267AF0: addiu       $a1, $a1, 0xB24
    ctx->r5 = ADD32(ctx->r5, 0XB24);
    // 0x80267AF4: lw          $t5, 0x0($a1)
    ctx->r13 = MEM_W(ctx->r5, 0X0);
    // 0x80267AF8: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x80267AFC: lwc1        $f6, 0x44($t5)
    ctx->f6.u32l = MEM_W(ctx->r13, 0X44);
    // 0x80267B00: addiu       $v1, $zero, -0xBC
    ctx->r3 = ADD32(0, -0XBC);
    // 0x80267B04: c.lt.s      $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f4.fl < ctx->f6.fl;
    // 0x80267B08: lui         $at, 0x8028
    ctx->r1 = S32(0X8028 << 16);
    // 0x80267B0C: bc1f        L_80267B1C
    if (!c1cs) {
        // 0x80267B10: nop
    
            goto L_80267B1C;
    }
    // 0x80267B10: nop

    // 0x80267B14: b           L_80267B1C
    // 0x80267B18: addiu       $v1, $zero, 0x58
    ctx->r3 = ADD32(0, 0X58);
        goto L_80267B1C;
    // 0x80267B18: addiu       $v1, $zero, 0x58
    ctx->r3 = ADD32(0, 0X58);
L_80267B1C:
    // 0x80267B1C: lh          $v0, 0x932($a2)
    ctx->r2 = MEM_H(ctx->r6, 0X932);
    // 0x80267B20: addu        $t6, $v1, $t0
    ctx->r14 = ADD32(ctx->r3, ctx->r8);
    // 0x80267B24: blez        $v0, L_80267B40
    if (SIGNED(ctx->r2) <= 0) {
        // 0x80267B28: sh          $t6, 0x934($a2)
        MEM_H(0X934, ctx->r6) = ctx->r14;
            goto L_80267B40;
    }
    // 0x80267B28: sh          $t6, 0x934($a2)
    MEM_H(0X934, ctx->r6) = ctx->r14;
    // 0x80267B2C: lui         $at, 0x8028
    ctx->r1 = S32(0X8028 << 16);
    // 0x80267B30: lwc1        $f9, -0x2CF0($at)
    ctx->f_odd[(9 - 1) * 2] = MEM_W(ctx->r1, -0X2CF0);
    // 0x80267B34: lwc1        $f8, -0x2CEC($at)
    ctx->f8.u32l = MEM_W(ctx->r1, -0X2CEC);
    // 0x80267B38: b           L_80267B50
    // 0x80267B3C: cvt.s.d     $f2, $f8
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.d); 
    ctx->f2.fl = CVT_S_D(ctx->f8.d);
        goto L_80267B50;
    // 0x80267B3C: cvt.s.d     $f2, $f8
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.d); 
    ctx->f2.fl = CVT_S_D(ctx->f8.d);
L_80267B40:
    // 0x80267B40: lwc1        $f11, -0x2CE8($at)
    ctx->f_odd[(11 - 1) * 2] = MEM_W(ctx->r1, -0X2CE8);
    // 0x80267B44: lwc1        $f10, -0x2CE4($at)
    ctx->f10.u32l = MEM_W(ctx->r1, -0X2CE4);
    // 0x80267B48: nop

    // 0x80267B4C: cvt.s.d     $f2, $f10
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f2.fl = CVT_S_D(ctx->f10.d);
L_80267B50:
    // 0x80267B50: blez        $v0, L_80267B70
    if (SIGNED(ctx->r2) <= 0) {
        // 0x80267B54: lui         $at, 0x8028
        ctx->r1 = S32(0X8028 << 16);
            goto L_80267B70;
    }
    // 0x80267B54: lui         $at, 0x8028
    ctx->r1 = S32(0X8028 << 16);
    // 0x80267B58: lwc1        $f17, -0x2CE0($at)
    ctx->f_odd[(17 - 1) * 2] = MEM_W(ctx->r1, -0X2CE0);
    // 0x80267B5C: lwc1        $f16, -0x2CDC($at)
    ctx->f16.u32l = MEM_W(ctx->r1, -0X2CDC);
    // 0x80267B60: lw          $t7, 0x0($a1)
    ctx->r15 = MEM_W(ctx->r5, 0X0);
    // 0x80267B64: cvt.s.d     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.d); 
    ctx->f18.fl = CVT_S_D(ctx->f16.d);
    // 0x80267B68: b           L_80267C44
    // 0x80267B6C: swc1        $f18, 0xBC($t7)
    MEM_W(0XBC, ctx->r15) = ctx->f18.u32l;
        goto L_80267C44;
    // 0x80267B6C: swc1        $f18, 0xBC($t7)
    MEM_W(0XBC, ctx->r15) = ctx->f18.u32l;
L_80267B70:
    // 0x80267B70: mtc1        $zero, $f5
    ctx->f_odd[(5 - 1) * 2] = 0;
    // 0x80267B74: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x80267B78: lw          $t8, 0x0($a1)
    ctx->r24 = MEM_W(ctx->r5, 0X0);
    // 0x80267B7C: cvt.s.d     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.d); 
    ctx->f6.fl = CVT_S_D(ctx->f4.d);
    // 0x80267B80: b           L_80267C44
    // 0x80267B84: swc1        $f6, 0xBC($t8)
    MEM_W(0XBC, ctx->r24) = ctx->f6.u32l;
        goto L_80267C44;
    // 0x80267B84: swc1        $f6, 0xBC($t8)
    MEM_W(0XBC, ctx->r24) = ctx->f6.u32l;
L_80267B88:
    // 0x80267B88: lhu         $t9, 0x8($a2)
    ctx->r25 = MEM_HU(ctx->r6, 0X8);
    // 0x80267B8C: addiu       $a1, $a1, 0xB24
    ctx->r5 = ADD32(ctx->r5, 0XB24);
    // 0x80267B90: andi        $t1, $t9, 0x1
    ctx->r9 = ctx->r25 & 0X1;
    // 0x80267B94: beq         $t1, $zero, L_80267BA4
    if (ctx->r9 == 0) {
        // 0x80267B98: addiu       $v1, $zero, -0x1FD
        ctx->r3 = ADD32(0, -0X1FD);
            goto L_80267BA4;
    }
    // 0x80267B98: addiu       $v1, $zero, -0x1FD
    ctx->r3 = ADD32(0, -0X1FD);
    // 0x80267B9C: b           L_80267BA4
    // 0x80267BA0: addiu       $v1, $zero, 0x199
    ctx->r3 = ADD32(0, 0X199);
        goto L_80267BA4;
    // 0x80267BA0: addiu       $v1, $zero, 0x199
    ctx->r3 = ADD32(0, 0X199);
L_80267BA4:
    // 0x80267BA4: addu        $t2, $v1, $t0
    ctx->r10 = ADD32(ctx->r3, ctx->r8);
    // 0x80267BA8: sh          $t2, 0x932($a2)
    MEM_H(0X932, ctx->r6) = ctx->r10;
    // 0x80267BAC: lw          $t3, 0x0($a1)
    ctx->r11 = MEM_W(ctx->r5, 0X0);
    // 0x80267BB0: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x80267BB4: lwc1        $f10, 0x44($t3)
    ctx->f10.u32l = MEM_W(ctx->r11, 0X44);
    // 0x80267BB8: addiu       $v1, $zero, -0x169
    ctx->r3 = ADD32(0, -0X169);
    // 0x80267BBC: c.lt.s      $f8, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f8.fl < ctx->f10.fl;
    // 0x80267BC0: lui         $at, 0x8028
    ctx->r1 = S32(0X8028 << 16);
    // 0x80267BC4: bc1f        L_80267BD4
    if (!c1cs) {
        // 0x80267BC8: nop
    
            goto L_80267BD4;
    }
    // 0x80267BC8: nop

    // 0x80267BCC: b           L_80267BD4
    // 0x80267BD0: addiu       $v1, $zero, 0x155
    ctx->r3 = ADD32(0, 0X155);
        goto L_80267BD4;
    // 0x80267BD0: addiu       $v1, $zero, 0x155
    ctx->r3 = ADD32(0, 0X155);
L_80267BD4:
    // 0x80267BD4: addu        $t4, $v1, $v0
    ctx->r12 = ADD32(ctx->r3, ctx->r2);
    // 0x80267BD8: sh          $t4, 0x934($a2)
    MEM_H(0X934, ctx->r6) = ctx->r12;
    // 0x80267BDC: lh          $a0, 0x934($a2)
    ctx->r4 = MEM_H(ctx->r6, 0X934);
    // 0x80267BE0: nop

    // 0x80267BE4: blez        $a0, L_80267BFC
    if (SIGNED(ctx->r4) <= 0) {
        // 0x80267BE8: nop
    
            goto L_80267BFC;
    }
    // 0x80267BE8: nop

    // 0x80267BEC: lwc1        $f17, -0x2CD8($at)
    ctx->f_odd[(17 - 1) * 2] = MEM_W(ctx->r1, -0X2CD8);
    // 0x80267BF0: lwc1        $f16, -0x2CD4($at)
    ctx->f16.u32l = MEM_W(ctx->r1, -0X2CD4);
    // 0x80267BF4: b           L_80267C0C
    // 0x80267BF8: cvt.s.d     $f2, $f16
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.d); 
    ctx->f2.fl = CVT_S_D(ctx->f16.d);
        goto L_80267C0C;
    // 0x80267BF8: cvt.s.d     $f2, $f16
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.d); 
    ctx->f2.fl = CVT_S_D(ctx->f16.d);
L_80267BFC:
    // 0x80267BFC: mtc1        $zero, $f19
    ctx->f_odd[(19 - 1) * 2] = 0;
    // 0x80267C00: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x80267C04: nop

    // 0x80267C08: cvt.s.d     $f2, $f18
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.d); 
    ctx->f2.fl = CVT_S_D(ctx->f18.d);
L_80267C0C:
    // 0x80267C0C: blez        $a0, L_80267C30
    if (SIGNED(ctx->r4) <= 0) {
        // 0x80267C10: lui         $at, 0x8028
        ctx->r1 = S32(0X8028 << 16);
            goto L_80267C30;
    }
    // 0x80267C10: lui         $at, 0x8028
    ctx->r1 = S32(0X8028 << 16);
    // 0x80267C14: lui         $at, 0x8028
    ctx->r1 = S32(0X8028 << 16);
    // 0x80267C18: lwc1        $f5, -0x2CD0($at)
    ctx->f_odd[(5 - 1) * 2] = MEM_W(ctx->r1, -0X2CD0);
    // 0x80267C1C: lwc1        $f4, -0x2CCC($at)
    ctx->f4.u32l = MEM_W(ctx->r1, -0X2CCC);
    // 0x80267C20: lw          $t5, 0x0($a1)
    ctx->r13 = MEM_W(ctx->r5, 0X0);
    // 0x80267C24: cvt.s.d     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.d); 
    ctx->f6.fl = CVT_S_D(ctx->f4.d);
    // 0x80267C28: b           L_80267C44
    // 0x80267C2C: swc1        $f6, 0xBC($t5)
    MEM_W(0XBC, ctx->r13) = ctx->f6.u32l;
        goto L_80267C44;
    // 0x80267C2C: swc1        $f6, 0xBC($t5)
    MEM_W(0XBC, ctx->r13) = ctx->f6.u32l;
L_80267C30:
    // 0x80267C30: lwc1        $f9, -0x2CC8($at)
    ctx->f_odd[(9 - 1) * 2] = MEM_W(ctx->r1, -0X2CC8);
    // 0x80267C34: lwc1        $f8, -0x2CC4($at)
    ctx->f8.u32l = MEM_W(ctx->r1, -0X2CC4);
    // 0x80267C38: lw          $t6, 0x0($a1)
    ctx->r14 = MEM_W(ctx->r5, 0X0);
    // 0x80267C3C: cvt.s.d     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.d); 
    ctx->f10.fl = CVT_S_D(ctx->f8.d);
    // 0x80267C40: swc1        $f10, 0xBC($t6)
    MEM_W(0XBC, ctx->r14) = ctx->f10.u32l;
L_80267C44:
    // 0x80267C44: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80267C48: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80267C4C: jr          $ra
    // 0x80267C50: mov.s       $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    ctx->f0.fl = ctx->f2.fl;
    return;
    // 0x80267C50: mov.s       $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    ctx->f0.fl = ctx->f2.fl;
;}
