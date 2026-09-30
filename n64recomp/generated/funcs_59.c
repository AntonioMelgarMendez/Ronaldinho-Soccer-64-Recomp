#include "iss64_recomp.h"
#include "funcs.h"

RECOMP_FUNC void ovl_8024B800_func_8027285C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8027285C: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x80272860: lui         $v0, 0x8009
    ctx->r2 = S32(0X8009 << 16);
    // 0x80272864: lw          $v0, 0x3B20($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X3B20);
    // 0x80272868: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x8027286C: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x80272870: lw          $t6, 0xA8($v0)
    ctx->r14 = MEM_W(ctx->r2, 0XA8);
    // 0x80272874: or          $s0, $a1, $zero
    ctx->r16 = ctx->r5 | 0;
    // 0x80272878: bne         $a0, $t6, L_802728AC
    if (ctx->r4 != ctx->r14) {
        // 0x8027287C: or          $a2, $a1, $zero
        ctx->r6 = ctx->r5 | 0;
            goto L_802728AC;
    }
    // 0x8027287C: or          $a2, $a1, $zero
    ctx->r6 = ctx->r5 | 0;
    // 0x80272880: lwc1        $f12, 0x4C($a0)
    ctx->f12.u32l = MEM_W(ctx->r4, 0X4C);
    // 0x80272884: lwc1        $f14, 0x44($a0)
    ctx->f14.u32l = MEM_W(ctx->r4, 0X44);
    // 0x80272888: addiu       $t7, $sp, 0x2C
    ctx->r15 = ADD32(ctx->r29, 0X2C);
    // 0x8027288C: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x80272890: lwc1        $f4, 0x5C($a1)
    ctx->f4.u32l = MEM_W(ctx->r5, 0X5C);
    // 0x80272894: addiu       $a3, $zero, 0x33
    ctx->r7 = ADD32(0, 0X33);
    // 0x80272898: jal         0x80056168
    // 0x8027289C: swc1        $f4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f4.u32l;
    func_80056168(rdram, ctx);
        goto after_0;
    // 0x8027289C: swc1        $f4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f4.u32l;
    after_0:
    // 0x802728A0: lwc1        $f0, 0x2C($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x802728A4: b           L_80272AC8
    // 0x802728A8: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_80272AC8;
    // 0x802728A8: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_802728AC:
    // 0x802728AC: lhu         $t8, 0x36($a0)
    ctx->r24 = MEM_HU(ctx->r4, 0X36);
    // 0x802728B0: nop

    // 0x802728B4: andi        $t9, $t8, 0x4000
    ctx->r25 = ctx->r24 & 0X4000;
    // 0x802728B8: beq         $t9, $zero, L_802728F8
    if (ctx->r25 == 0) {
        // 0x802728BC: nop
    
            goto L_802728F8;
    }
    // 0x802728BC: nop

    // 0x802728C0: lh          $t0, 0xDE($v0)
    ctx->r8 = MEM_H(ctx->r2, 0XDE);
    // 0x802728C4: lh          $t1, 0xE0($v0)
    ctx->r9 = MEM_H(ctx->r2, 0XE0);
    // 0x802728C8: mtc1        $t0, $f6
    ctx->f6.u32l = ctx->r8;
    // 0x802728CC: mtc1        $t1, $f8
    ctx->f8.u32l = ctx->r9;
    // 0x802728D0: cvt.s.w     $f6, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    ctx->f6.fl = CVT_S_W(ctx->f6.u32l);
    // 0x802728D4: addiu       $a3, $sp, 0x2C
    ctx->r7 = ADD32(ctx->r29, 0X2C);
    // 0x802728D8: cvt.s.w     $f8, $f8
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 8);
    ctx->f8.fl = CVT_S_W(ctx->f8.u32l);
    // 0x802728DC: mfc1        $a1, $f6
    ctx->r5 = (int32_t)ctx->f6.u32l;
    // 0x802728E0: mfc1        $a2, $f8
    ctx->r6 = (int32_t)ctx->f8.u32l;
    // 0x802728E4: jal         0x80272B98
    // 0x802728E8: nop

    ovl_8024B800_func_80272B98(rdram, ctx);
        goto after_1;
    // 0x802728E8: nop

    after_1:
    // 0x802728EC: lwc1        $f0, 0x2C($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x802728F0: b           L_80272AC8
    // 0x802728F4: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_80272AC8;
    // 0x802728F4: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_802728F8:
    // 0x802728F8: lwc1        $f10, 0xBC($a0)
    ctx->f10.u32l = MEM_W(ctx->r4, 0XBC);
    // 0x802728FC: lui         $t4, 0x8012
    ctx->r12 = S32(0X8012 << 16);
    // 0x80272900: swc1        $f10, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f10.u32l;
    // 0x80272904: lhu         $t2, 0x16($a0)
    ctx->r10 = MEM_HU(ctx->r4, 0X16);
    // 0x80272908: nop

    // 0x8027290C: andi        $t3, $t2, 0x10
    ctx->r11 = ctx->r10 & 0X10;
    // 0x80272910: beq         $t3, $zero, L_802729F4
    if (ctx->r11 == 0) {
        // 0x80272914: nop
    
            goto L_802729F4;
    }
    // 0x80272914: nop

    // 0x80272918: lhu         $t4, 0xB78($t4)
    ctx->r12 = MEM_HU(ctx->r12, 0XB78);
    // 0x8027291C: nop

    // 0x80272920: addiu       $t5, $t4, -0x1
    ctx->r13 = ADD32(ctx->r12, -0X1);
    // 0x80272924: sltiu       $at, $t5, 0x7
    ctx->r1 = ctx->r13 < 0X7 ? 1 : 0;
    // 0x80272928: beq         $at, $zero, L_802729F4
    if (ctx->r1 == 0) {
        // 0x8027292C: sll         $t5, $t5, 2
        ctx->r13 = S32(ctx->r13 << 2);
            goto L_802729F4;
    }
    // 0x8027292C: sll         $t5, $t5, 2
    ctx->r13 = S32(ctx->r13 << 2);
    // 0x80272930: lui         $at, 0x8028
    ctx->r1 = S32(0X8028 << 16);
    // 0x80272934: addu        $at, $at, $t5
    gpr jr_addend_80272940 = ctx->r13;
    ctx->r1 = ADD32(ctx->r1, ctx->r13);
    // 0x80272938: lw          $t5, -0x1E98($at)
    ctx->r13 = ADD32(ctx->r1, -0X1E98);
    // 0x8027293C: nop

    // 0x80272940: jr          $t5
    // 0x80272944: nop

    switch (jr_addend_80272940 >> 2) {
        case 0: goto L_80272948; break;
        case 1: goto L_802729F4; break;
        case 2: goto L_8027299C; break;
        case 3: goto L_8027299C; break;
        case 4: goto L_8027299C; break;
        case 5: goto L_8027299C; break;
        case 6: goto L_8027299C; break;
        default: switch_error(__func__, 0x80272940, 0x8027E168);
    }
    // 0x80272944: nop

L_80272948:
    // 0x80272948: lw          $v0, 0xC8($a0)
    ctx->r2 = MEM_W(ctx->r4, 0XC8);
    // 0x8027294C: addiu       $a3, $sp, 0x2C
    ctx->r7 = ADD32(ctx->r29, 0X2C);
    // 0x80272950: lbu         $t7, 0x912($v0)
    ctx->r15 = MEM_BU(ctx->r2, 0X912);
    // 0x80272954: lw          $t6, 0x18($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X18);
    // 0x80272958: sll         $t8, $t7, 5
    ctx->r24 = S32(ctx->r15 << 5);
    // 0x8027295C: subu        $t8, $t8, $t7
    ctx->r24 = SUB32(ctx->r24, ctx->r15);
    // 0x80272960: sll         $t8, $t8, 3
    ctx->r24 = S32(ctx->r24 << 3);
    // 0x80272964: addu        $s0, $t6, $t8
    ctx->r16 = ADD32(ctx->r14, ctx->r24);
    // 0x80272968: lh          $t9, 0x2E($s0)
    ctx->r25 = MEM_H(ctx->r16, 0X2E);
    // 0x8027296C: lh          $t0, 0x30($s0)
    ctx->r8 = MEM_H(ctx->r16, 0X30);
    // 0x80272970: mtc1        $t9, $f16
    ctx->f16.u32l = ctx->r25;
    // 0x80272974: mtc1        $t0, $f18
    ctx->f18.u32l = ctx->r8;
    // 0x80272978: cvt.s.w     $f16, $f16
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    ctx->f16.fl = CVT_S_W(ctx->f16.u32l);
    // 0x8027297C: cvt.s.w     $f18, $f18
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    ctx->f18.fl = CVT_S_W(ctx->f18.u32l);
    // 0x80272980: mfc1        $a1, $f16
    ctx->r5 = (int32_t)ctx->f16.u32l;
    // 0x80272984: mfc1        $a2, $f18
    ctx->r6 = (int32_t)ctx->f18.u32l;
    // 0x80272988: jal         0x80272B98
    // 0x8027298C: nop

    ovl_8024B800_func_80272B98(rdram, ctx);
        goto after_2;
    // 0x8027298C: nop

    after_2:
    // 0x80272990: lwc1        $f0, 0x2C($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x80272994: b           L_80272AC8
    // 0x80272998: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_80272AC8;
    // 0x80272998: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_8027299C:
    // 0x8027299C: lhu         $t1, 0xC2($v0)
    ctx->r9 = MEM_HU(ctx->r2, 0XC2);
    // 0x802729A0: nop

    // 0x802729A4: andi        $t2, $t1, 0x4
    ctx->r10 = ctx->r9 & 0X4;
    // 0x802729A8: beq         $t2, $zero, L_802729C0
    if (ctx->r10 == 0) {
        // 0x802729AC: nop
    
            goto L_802729C0;
    }
    // 0x802729AC: nop

    // 0x802729B0: jal         0x802A2AFC
    // 0x802729B4: nop

    LOOKUP_FUNC(0x802A2AFC)(rdram, ctx);
        goto after_3;
    // 0x802729B4: nop

    after_3:
    // 0x802729B8: b           L_80272AC8
    // 0x802729BC: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_80272AC8;
    // 0x802729BC: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_802729C0:
    // 0x802729C0: lhu         $t3, 0x36($a0)
    ctx->r11 = MEM_HU(ctx->r4, 0X36);
    // 0x802729C4: nop

    // 0x802729C8: andi        $t4, $t3, 0x4
    ctx->r12 = ctx->r11 & 0X4;
    // 0x802729CC: beq         $t4, $zero, L_802729F4
    if (ctx->r12 == 0) {
        // 0x802729D0: nop
    
            goto L_802729F4;
    }
    // 0x802729D0: nop

    // 0x802729D4: beq         $s0, $zero, L_802729F4
    if (ctx->r16 == 0) {
        // 0x802729D8: addiu       $a3, $sp, 0x2C
        ctx->r7 = ADD32(ctx->r29, 0X2C);
            goto L_802729F4;
    }
    // 0x802729D8: addiu       $a3, $sp, 0x2C
    ctx->r7 = ADD32(ctx->r29, 0X2C);
    // 0x802729DC: lw          $a1, 0x4C($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X4C);
    // 0x802729E0: lw          $a2, 0x44($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X44);
    // 0x802729E4: jal         0x80272B98
    // 0x802729E8: sw          $a0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r4;
    ovl_8024B800_func_80272B98(rdram, ctx);
        goto after_4;
    // 0x802729E8: sw          $a0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r4;
    after_4:
    // 0x802729EC: lw          $a0, 0x38($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X38);
    // 0x802729F0: nop

L_802729F4:
    // 0x802729F4: lhu         $v0, 0x36($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X36);
    // 0x802729F8: nop

    // 0x802729FC: andi        $t5, $v0, 0x8004
    ctx->r13 = ctx->r2 & 0X8004;
    // 0x80272A00: beq         $t5, $zero, L_80272A3C
    if (ctx->r13 == 0) {
        // 0x80272A04: andi        $t8, $v0, 0x1
        ctx->r24 = ctx->r2 & 0X1;
            goto L_80272A3C;
    }
    // 0x80272A04: andi        $t8, $v0, 0x1
    ctx->r24 = ctx->r2 & 0X1;
    // 0x80272A08: lhu         $t7, 0x14($a0)
    ctx->r15 = MEM_HU(ctx->r4, 0X14);
    // 0x80272A0C: nop

    // 0x80272A10: andi        $t6, $t7, 0x8
    ctx->r14 = ctx->r15 & 0X8;
    // 0x80272A14: bne         $t6, $zero, L_80272ABC
    if (ctx->r14 != 0) {
        // 0x80272A18: nop
    
            goto L_80272ABC;
    }
    // 0x80272A18: nop

    // 0x80272A1C: beq         $s0, $zero, L_80272ABC
    if (ctx->r16 == 0) {
        // 0x80272A20: nop
    
            goto L_80272ABC;
    }
    // 0x80272A20: nop

    // 0x80272A24: lw          $a1, 0x4C($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X4C);
    // 0x80272A28: lw          $a2, 0x44($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X44);
    // 0x80272A2C: jal         0x80272B98
    // 0x80272A30: addiu       $a3, $sp, 0x2C
    ctx->r7 = ADD32(ctx->r29, 0X2C);
    ovl_8024B800_func_80272B98(rdram, ctx);
        goto after_5;
    // 0x80272A30: addiu       $a3, $sp, 0x2C
    ctx->r7 = ADD32(ctx->r29, 0X2C);
    after_5:
    // 0x80272A34: b           L_80272AC0
    // 0x80272A38: lwc1        $f0, 0x2C($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X2C);
        goto L_80272AC0;
    // 0x80272A38: lwc1        $f0, 0x2C($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X2C);
L_80272A3C:
    // 0x80272A3C: beq         $t8, $zero, L_80272A58
    if (ctx->r24 == 0) {
        // 0x80272A40: andi        $t9, $v0, 0x8
        ctx->r25 = ctx->r2 & 0X8;
            goto L_80272A58;
    }
    // 0x80272A40: andi        $t9, $v0, 0x8
    ctx->r25 = ctx->r2 & 0X8;
    // 0x80272A44: lw          $a1, 0x2C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X2C);
    // 0x80272A48: jal         0x80057240
    // 0x80272A4C: nop

    func_80057240(rdram, ctx);
        goto after_6;
    // 0x80272A4C: nop

    after_6:
    // 0x80272A50: b           L_80272ABC
    // 0x80272A54: swc1        $f0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f0.u32l;
        goto L_80272ABC;
    // 0x80272A54: swc1        $f0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f0.u32l;
L_80272A58:
    // 0x80272A58: beq         $t9, $zero, L_80272ABC
    if (ctx->r25 == 0) {
        // 0x80272A5C: nop
    
            goto L_80272ABC;
    }
    // 0x80272A5C: nop

    // 0x80272A60: jal         0x80271F6C
    // 0x80272A64: sw          $a0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r4;
    ovl_8024B800_func_80271F6C(rdram, ctx);
        goto after_7;
    // 0x80272A64: sw          $a0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r4;
    after_7:
    // 0x80272A68: lw          $a0, 0x38($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X38);
    // 0x80272A6C: bne         $v0, $zero, L_80272ABC
    if (ctx->r2 != 0) {
        // 0x80272A70: lui         $at, 0x801B
        ctx->r1 = S32(0X801B << 16);
            goto L_80272ABC;
    }
    // 0x80272A70: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x80272A74: sb          $zero, 0x3688($at)
    MEM_B(0X3688, ctx->r1) = 0;
    // 0x80272A78: lhu         $t0, 0x14($a0)
    ctx->r8 = MEM_HU(ctx->r4, 0X14);
    // 0x80272A7C: addiu       $a1, $sp, 0x34
    ctx->r5 = ADD32(ctx->r29, 0X34);
    // 0x80272A80: andi        $t1, $t0, 0x8
    ctx->r9 = ctx->r8 & 0X8;
    // 0x80272A84: bne         $t1, $zero, L_80272A9C
    if (ctx->r9 != 0) {
        // 0x80272A88: nop
    
            goto L_80272A9C;
    }
    // 0x80272A88: nop

    // 0x80272A8C: jal         0x80054FD4
    // 0x80272A90: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    func_80054FD4(rdram, ctx);
        goto after_8;
    // 0x80272A90: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    after_8:
    // 0x80272A94: b           L_80272ABC
    // 0x80272A98: swc1        $f0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f0.u32l;
        goto L_80272ABC;
    // 0x80272A98: swc1        $f0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f0.u32l;
L_80272A9C:
    // 0x80272A9C: lhu         $t2, 0x12($a0)
    ctx->r10 = MEM_HU(ctx->r4, 0X12);
    // 0x80272AA0: nop

    // 0x80272AA4: andi        $t3, $t2, 0x8
    ctx->r11 = ctx->r10 & 0X8;
    // 0x80272AA8: beq         $t3, $zero, L_80272ABC
    if (ctx->r11 == 0) {
        // 0x80272AAC: nop
    
            goto L_80272ABC;
    }
    // 0x80272AAC: nop

    // 0x80272AB0: lwc1        $f4, 0x8C($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X8C);
    // 0x80272AB4: nop

    // 0x80272AB8: swc1        $f4, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f4.u32l;
L_80272ABC:
    // 0x80272ABC: lwc1        $f0, 0x2C($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X2C);
L_80272AC0:
    // 0x80272AC0: nop

    // 0x80272AC4: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_80272AC8:
    // 0x80272AC8: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x80272ACC: jr          $ra
    // 0x80272AD0: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    return;
    // 0x80272AD0: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void ovl_8024B800_func_8027287C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8027287C: or          $a2, $a1, $zero
    ctx->r6 = ctx->r5 | 0;
    // 0x80272880: lwc1        $f12, 0x4C($a0)
    ctx->f12.u32l = MEM_W(ctx->r4, 0X4C);
    // 0x80272884: lwc1        $f14, 0x44($a0)
    ctx->f14.u32l = MEM_W(ctx->r4, 0X44);
    // 0x80272888: addiu       $t7, $sp, 0x2C
    ctx->r15 = ADD32(ctx->r29, 0X2C);
    // 0x8027288C: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x80272890: lwc1        $f4, 0x5C($a1)
    ctx->f4.u32l = MEM_W(ctx->r5, 0X5C);
    // 0x80272894: addiu       $a3, $zero, 0x33
    ctx->r7 = ADD32(0, 0X33);
    // 0x80272898: jal         0x80056168
    // 0x8027289C: swc1        $f4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f4.u32l;
    func_80056168(rdram, ctx);
        goto after_0;
    // 0x8027289C: swc1        $f4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f4.u32l;
    after_0:
    // 0x802728A0: lwc1        $f0, 0x2C($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x802728A4: b           L_80272AC8
    // 0x802728A8: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_80272AC8;
    // 0x802728A8: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x802728AC: lhu         $t8, 0x36($a0)
    ctx->r24 = MEM_HU(ctx->r4, 0X36);
    // 0x802728B0: nop

    // 0x802728B4: andi        $t9, $t8, 0x4000
    ctx->r25 = ctx->r24 & 0X4000;
    // 0x802728B8: beq         $t9, $zero, L_802728F8
    if (ctx->r25 == 0) {
        // 0x802728BC: nop
    
            goto L_802728F8;
    }
    // 0x802728BC: nop

    // 0x802728C0: lh          $t0, 0xDE($v0)
    ctx->r8 = MEM_H(ctx->r2, 0XDE);
    // 0x802728C4: lh          $t1, 0xE0($v0)
    ctx->r9 = MEM_H(ctx->r2, 0XE0);
    // 0x802728C8: mtc1        $t0, $f6
    ctx->f6.u32l = ctx->r8;
    // 0x802728CC: mtc1        $t1, $f8
    ctx->f8.u32l = ctx->r9;
    // 0x802728D0: cvt.s.w     $f6, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    ctx->f6.fl = CVT_S_W(ctx->f6.u32l);
    // 0x802728D4: addiu       $a3, $sp, 0x2C
    ctx->r7 = ADD32(ctx->r29, 0X2C);
    // 0x802728D8: cvt.s.w     $f8, $f8
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 8);
    ctx->f8.fl = CVT_S_W(ctx->f8.u32l);
    // 0x802728DC: mfc1        $a1, $f6
    ctx->r5 = (int32_t)ctx->f6.u32l;
    // 0x802728E0: mfc1        $a2, $f8
    ctx->r6 = (int32_t)ctx->f8.u32l;
    // 0x802728E4: jal         0x80272B98
    // 0x802728E8: nop

    ovl_8024B800_func_80272B98(rdram, ctx);
        goto after_1;
    // 0x802728E8: nop

    after_1:
    // 0x802728EC: lwc1        $f0, 0x2C($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x802728F0: b           L_80272AC8
    // 0x802728F4: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_80272AC8;
    // 0x802728F4: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_802728F8:
    // 0x802728F8: lwc1        $f10, 0xBC($a0)
    ctx->f10.u32l = MEM_W(ctx->r4, 0XBC);
    // 0x802728FC: lui         $t4, 0x8012
    ctx->r12 = S32(0X8012 << 16);
    // 0x80272900: swc1        $f10, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f10.u32l;
    // 0x80272904: lhu         $t2, 0x16($a0)
    ctx->r10 = MEM_HU(ctx->r4, 0X16);
    // 0x80272908: nop

    // 0x8027290C: andi        $t3, $t2, 0x10
    ctx->r11 = ctx->r10 & 0X10;
    // 0x80272910: beq         $t3, $zero, L_802729F4
    if (ctx->r11 == 0) {
        // 0x80272914: nop
    
            goto L_802729F4;
    }
    // 0x80272914: nop

    // 0x80272918: lhu         $t4, 0xB78($t4)
    ctx->r12 = MEM_HU(ctx->r12, 0XB78);
    // 0x8027291C: nop

    // 0x80272920: addiu       $t5, $t4, -0x1
    ctx->r13 = ADD32(ctx->r12, -0X1);
    // 0x80272924: sltiu       $at, $t5, 0x7
    ctx->r1 = ctx->r13 < 0X7 ? 1 : 0;
    // 0x80272928: beq         $at, $zero, L_802729F4
    if (ctx->r1 == 0) {
        // 0x8027292C: sll         $t5, $t5, 2
        ctx->r13 = S32(ctx->r13 << 2);
            goto L_802729F4;
    }
    // 0x8027292C: sll         $t5, $t5, 2
    ctx->r13 = S32(ctx->r13 << 2);
    // 0x80272930: lui         $at, 0x8028
    ctx->r1 = S32(0X8028 << 16);
    // 0x80272934: addu        $at, $at, $t5
    gpr jr_addend_80272940 = ctx->r13;
    ctx->r1 = ADD32(ctx->r1, ctx->r13);
    // 0x80272938: lw          $t5, -0x1E98($at)
    ctx->r13 = ADD32(ctx->r1, -0X1E98);
    // 0x8027293C: nop

    // 0x80272940: jr          $t5
    // 0x80272944: nop

    switch (jr_addend_80272940 >> 2) {
        case 0: goto L_80272948; break;
        case 1: goto L_802729F4; break;
        case 2: goto L_8027299C; break;
        case 3: goto L_8027299C; break;
        case 4: goto L_8027299C; break;
        case 5: goto L_8027299C; break;
        case 6: goto L_8027299C; break;
        default: switch_error(__func__, 0x80272940, 0x8027E168);
    }
    // 0x80272944: nop

L_80272948:
    // 0x80272948: lw          $v0, 0xC8($a0)
    ctx->r2 = MEM_W(ctx->r4, 0XC8);
    // 0x8027294C: addiu       $a3, $sp, 0x2C
    ctx->r7 = ADD32(ctx->r29, 0X2C);
    // 0x80272950: lbu         $t7, 0x912($v0)
    ctx->r15 = MEM_BU(ctx->r2, 0X912);
    // 0x80272954: lw          $t6, 0x18($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X18);
    // 0x80272958: sll         $t8, $t7, 5
    ctx->r24 = S32(ctx->r15 << 5);
    // 0x8027295C: subu        $t8, $t8, $t7
    ctx->r24 = SUB32(ctx->r24, ctx->r15);
    // 0x80272960: sll         $t8, $t8, 3
    ctx->r24 = S32(ctx->r24 << 3);
    // 0x80272964: addu        $s0, $t6, $t8
    ctx->r16 = ADD32(ctx->r14, ctx->r24);
    // 0x80272968: lh          $t9, 0x2E($s0)
    ctx->r25 = MEM_H(ctx->r16, 0X2E);
    // 0x8027296C: lh          $t0, 0x30($s0)
    ctx->r8 = MEM_H(ctx->r16, 0X30);
    // 0x80272970: mtc1        $t9, $f16
    ctx->f16.u32l = ctx->r25;
    // 0x80272974: mtc1        $t0, $f18
    ctx->f18.u32l = ctx->r8;
    // 0x80272978: cvt.s.w     $f16, $f16
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    ctx->f16.fl = CVT_S_W(ctx->f16.u32l);
    // 0x8027297C: cvt.s.w     $f18, $f18
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    ctx->f18.fl = CVT_S_W(ctx->f18.u32l);
    // 0x80272980: mfc1        $a1, $f16
    ctx->r5 = (int32_t)ctx->f16.u32l;
    // 0x80272984: mfc1        $a2, $f18
    ctx->r6 = (int32_t)ctx->f18.u32l;
    // 0x80272988: jal         0x80272B98
    // 0x8027298C: nop

    ovl_8024B800_func_80272B98(rdram, ctx);
        goto after_2;
    // 0x8027298C: nop

    after_2:
    // 0x80272990: lwc1        $f0, 0x2C($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x80272994: b           L_80272AC8
    // 0x80272998: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_80272AC8;
    // 0x80272998: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_8027299C:
    // 0x8027299C: lhu         $t1, 0xC2($v0)
    ctx->r9 = MEM_HU(ctx->r2, 0XC2);
    // 0x802729A0: nop

    // 0x802729A4: andi        $t2, $t1, 0x4
    ctx->r10 = ctx->r9 & 0X4;
    // 0x802729A8: beq         $t2, $zero, L_802729C0
    if (ctx->r10 == 0) {
        // 0x802729AC: nop
    
            goto L_802729C0;
    }
    // 0x802729AC: nop

    // 0x802729B0: jal         0x802A2AFC
    // 0x802729B4: nop

    LOOKUP_FUNC(0x802A2AFC)(rdram, ctx);
        goto after_3;
    // 0x802729B4: nop

    after_3:
    // 0x802729B8: b           L_80272AC8
    // 0x802729BC: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_80272AC8;
    // 0x802729BC: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_802729C0:
    // 0x802729C0: lhu         $t3, 0x36($a0)
    ctx->r11 = MEM_HU(ctx->r4, 0X36);
    // 0x802729C4: nop

    // 0x802729C8: andi        $t4, $t3, 0x4
    ctx->r12 = ctx->r11 & 0X4;
    // 0x802729CC: beq         $t4, $zero, L_802729F4
    if (ctx->r12 == 0) {
        // 0x802729D0: nop
    
            goto L_802729F4;
    }
    // 0x802729D0: nop

    // 0x802729D4: beq         $s0, $zero, L_802729F4
    if (ctx->r16 == 0) {
        // 0x802729D8: addiu       $a3, $sp, 0x2C
        ctx->r7 = ADD32(ctx->r29, 0X2C);
            goto L_802729F4;
    }
    // 0x802729D8: addiu       $a3, $sp, 0x2C
    ctx->r7 = ADD32(ctx->r29, 0X2C);
    // 0x802729DC: lw          $a1, 0x4C($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X4C);
    // 0x802729E0: lw          $a2, 0x44($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X44);
    // 0x802729E4: jal         0x80272B98
    // 0x802729E8: sw          $a0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r4;
    ovl_8024B800_func_80272B98(rdram, ctx);
        goto after_4;
    // 0x802729E8: sw          $a0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r4;
    after_4:
    // 0x802729EC: lw          $a0, 0x38($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X38);
    // 0x802729F0: nop

L_802729F4:
    // 0x802729F4: lhu         $v0, 0x36($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X36);
    // 0x802729F8: nop

    // 0x802729FC: andi        $t5, $v0, 0x8004
    ctx->r13 = ctx->r2 & 0X8004;
    // 0x80272A00: beq         $t5, $zero, L_80272A3C
    if (ctx->r13 == 0) {
        // 0x80272A04: andi        $t8, $v0, 0x1
        ctx->r24 = ctx->r2 & 0X1;
            goto L_80272A3C;
    }
    // 0x80272A04: andi        $t8, $v0, 0x1
    ctx->r24 = ctx->r2 & 0X1;
    // 0x80272A08: lhu         $t7, 0x14($a0)
    ctx->r15 = MEM_HU(ctx->r4, 0X14);
    // 0x80272A0C: nop

    // 0x80272A10: andi        $t6, $t7, 0x8
    ctx->r14 = ctx->r15 & 0X8;
    // 0x80272A14: bne         $t6, $zero, L_80272ABC
    if (ctx->r14 != 0) {
        // 0x80272A18: nop
    
            goto L_80272ABC;
    }
    // 0x80272A18: nop

    // 0x80272A1C: beq         $s0, $zero, L_80272ABC
    if (ctx->r16 == 0) {
        // 0x80272A20: nop
    
            goto L_80272ABC;
    }
    // 0x80272A20: nop

    // 0x80272A24: lw          $a1, 0x4C($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X4C);
    // 0x80272A28: lw          $a2, 0x44($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X44);
    // 0x80272A2C: jal         0x80272B98
    // 0x80272A30: addiu       $a3, $sp, 0x2C
    ctx->r7 = ADD32(ctx->r29, 0X2C);
    ovl_8024B800_func_80272B98(rdram, ctx);
        goto after_5;
    // 0x80272A30: addiu       $a3, $sp, 0x2C
    ctx->r7 = ADD32(ctx->r29, 0X2C);
    after_5:
    // 0x80272A34: b           L_80272AC0
    // 0x80272A38: lwc1        $f0, 0x2C($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X2C);
        goto L_80272AC0;
    // 0x80272A38: lwc1        $f0, 0x2C($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X2C);
L_80272A3C:
    // 0x80272A3C: beq         $t8, $zero, L_80272A58
    if (ctx->r24 == 0) {
        // 0x80272A40: andi        $t9, $v0, 0x8
        ctx->r25 = ctx->r2 & 0X8;
            goto L_80272A58;
    }
    // 0x80272A40: andi        $t9, $v0, 0x8
    ctx->r25 = ctx->r2 & 0X8;
    // 0x80272A44: lw          $a1, 0x2C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X2C);
    // 0x80272A48: jal         0x80057240
    // 0x80272A4C: nop

    func_80057240(rdram, ctx);
        goto after_6;
    // 0x80272A4C: nop

    after_6:
    // 0x80272A50: b           L_80272ABC
    // 0x80272A54: swc1        $f0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f0.u32l;
        goto L_80272ABC;
    // 0x80272A54: swc1        $f0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f0.u32l;
L_80272A58:
    // 0x80272A58: beq         $t9, $zero, L_80272ABC
    if (ctx->r25 == 0) {
        // 0x80272A5C: nop
    
            goto L_80272ABC;
    }
    // 0x80272A5C: nop

    // 0x80272A60: jal         0x80271F6C
    // 0x80272A64: sw          $a0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r4;
    ovl_8024B800_func_80271F6C(rdram, ctx);
        goto after_7;
    // 0x80272A64: sw          $a0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r4;
    after_7:
    // 0x80272A68: lw          $a0, 0x38($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X38);
    // 0x80272A6C: bne         $v0, $zero, L_80272ABC
    if (ctx->r2 != 0) {
        // 0x80272A70: lui         $at, 0x801B
        ctx->r1 = S32(0X801B << 16);
            goto L_80272ABC;
    }
    // 0x80272A70: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x80272A74: sb          $zero, 0x3688($at)
    MEM_B(0X3688, ctx->r1) = 0;
    // 0x80272A78: lhu         $t0, 0x14($a0)
    ctx->r8 = MEM_HU(ctx->r4, 0X14);
    // 0x80272A7C: addiu       $a1, $sp, 0x34
    ctx->r5 = ADD32(ctx->r29, 0X34);
    // 0x80272A80: andi        $t1, $t0, 0x8
    ctx->r9 = ctx->r8 & 0X8;
    // 0x80272A84: bne         $t1, $zero, L_80272A9C
    if (ctx->r9 != 0) {
        // 0x80272A88: nop
    
            goto L_80272A9C;
    }
    // 0x80272A88: nop

    // 0x80272A8C: jal         0x80054FD4
    // 0x80272A90: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    func_80054FD4(rdram, ctx);
        goto after_8;
    // 0x80272A90: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    after_8:
    // 0x80272A94: b           L_80272ABC
    // 0x80272A98: swc1        $f0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f0.u32l;
        goto L_80272ABC;
    // 0x80272A98: swc1        $f0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f0.u32l;
L_80272A9C:
    // 0x80272A9C: lhu         $t2, 0x12($a0)
    ctx->r10 = MEM_HU(ctx->r4, 0X12);
    // 0x80272AA0: nop

    // 0x80272AA4: andi        $t3, $t2, 0x8
    ctx->r11 = ctx->r10 & 0X8;
    // 0x80272AA8: beq         $t3, $zero, L_80272ABC
    if (ctx->r11 == 0) {
        // 0x80272AAC: nop
    
            goto L_80272ABC;
    }
    // 0x80272AAC: nop

    // 0x80272AB0: lwc1        $f4, 0x8C($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X8C);
    // 0x80272AB4: nop

    // 0x80272AB8: swc1        $f4, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f4.u32l;
L_80272ABC:
    // 0x80272ABC: lwc1        $f0, 0x2C($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X2C);
L_80272AC0:
    // 0x80272AC0: nop

    // 0x80272AC4: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_80272AC8:
    // 0x80272AC8: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x80272ACC: jr          $ra
    // 0x80272AD0: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    return;
    // 0x80272AD0: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void ovl_8024B800_func_802729F4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802729F4: lhu         $v0, 0x36($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X36);
    // 0x802729F8: nop

    // 0x802729FC: andi        $t5, $v0, 0x8004
    ctx->r13 = ctx->r2 & 0X8004;
    // 0x80272A00: beq         $t5, $zero, L_80272A3C
    if (ctx->r13 == 0) {
        // 0x80272A04: andi        $t8, $v0, 0x1
        ctx->r24 = ctx->r2 & 0X1;
            goto L_80272A3C;
    }
    // 0x80272A04: andi        $t8, $v0, 0x1
    ctx->r24 = ctx->r2 & 0X1;
    // 0x80272A08: lhu         $t7, 0x14($a0)
    ctx->r15 = MEM_HU(ctx->r4, 0X14);
    // 0x80272A0C: nop

    // 0x80272A10: andi        $t6, $t7, 0x8
    ctx->r14 = ctx->r15 & 0X8;
    // 0x80272A14: bne         $t6, $zero, L_80272ABC
    if (ctx->r14 != 0) {
        // 0x80272A18: nop
    
            goto L_80272ABC;
    }
    // 0x80272A18: nop

    // 0x80272A1C: beq         $s0, $zero, L_80272ABC
    if (ctx->r16 == 0) {
        // 0x80272A20: nop
    
            goto L_80272ABC;
    }
    // 0x80272A20: nop

    // 0x80272A24: lw          $a1, 0x4C($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X4C);
    // 0x80272A28: lw          $a2, 0x44($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X44);
    // 0x80272A2C: jal         0x80272B98
    // 0x80272A30: addiu       $a3, $sp, 0x2C
    ctx->r7 = ADD32(ctx->r29, 0X2C);
    ovl_8024B800_func_80272B98(rdram, ctx);
        goto after_0;
    // 0x80272A30: addiu       $a3, $sp, 0x2C
    ctx->r7 = ADD32(ctx->r29, 0X2C);
    after_0:
    // 0x80272A34: b           L_80272AC0
    // 0x80272A38: lwc1        $f0, 0x2C($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X2C);
        goto L_80272AC0;
    // 0x80272A38: lwc1        $f0, 0x2C($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X2C);
L_80272A3C:
    // 0x80272A3C: beq         $t8, $zero, L_80272A58
    if (ctx->r24 == 0) {
        // 0x80272A40: andi        $t9, $v0, 0x8
        ctx->r25 = ctx->r2 & 0X8;
            goto L_80272A58;
    }
    // 0x80272A40: andi        $t9, $v0, 0x8
    ctx->r25 = ctx->r2 & 0X8;
    // 0x80272A44: lw          $a1, 0x2C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X2C);
    // 0x80272A48: jal         0x80057240
    // 0x80272A4C: nop

    func_80057240(rdram, ctx);
        goto after_1;
    // 0x80272A4C: nop

    after_1:
    // 0x80272A50: b           L_80272ABC
    // 0x80272A54: swc1        $f0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f0.u32l;
        goto L_80272ABC;
    // 0x80272A54: swc1        $f0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f0.u32l;
L_80272A58:
    // 0x80272A58: beq         $t9, $zero, L_80272ABC
    if (ctx->r25 == 0) {
        // 0x80272A5C: nop
    
            goto L_80272ABC;
    }
    // 0x80272A5C: nop

    // 0x80272A60: jal         0x80271F6C
    // 0x80272A64: sw          $a0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r4;
    ovl_8024B800_func_80271F6C(rdram, ctx);
        goto after_2;
    // 0x80272A64: sw          $a0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r4;
    after_2:
    // 0x80272A68: lw          $a0, 0x38($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X38);
    // 0x80272A6C: bne         $v0, $zero, L_80272ABC
    if (ctx->r2 != 0) {
        // 0x80272A70: lui         $at, 0x801B
        ctx->r1 = S32(0X801B << 16);
            goto L_80272ABC;
    }
    // 0x80272A70: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x80272A74: sb          $zero, 0x3688($at)
    MEM_B(0X3688, ctx->r1) = 0;
    // 0x80272A78: lhu         $t0, 0x14($a0)
    ctx->r8 = MEM_HU(ctx->r4, 0X14);
    // 0x80272A7C: addiu       $a1, $sp, 0x34
    ctx->r5 = ADD32(ctx->r29, 0X34);
    // 0x80272A80: andi        $t1, $t0, 0x8
    ctx->r9 = ctx->r8 & 0X8;
    // 0x80272A84: bne         $t1, $zero, L_80272A9C
    if (ctx->r9 != 0) {
        // 0x80272A88: nop
    
            goto L_80272A9C;
    }
    // 0x80272A88: nop

    // 0x80272A8C: jal         0x80054FD4
    // 0x80272A90: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    func_80054FD4(rdram, ctx);
        goto after_3;
    // 0x80272A90: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    after_3:
    // 0x80272A94: b           L_80272ABC
    // 0x80272A98: swc1        $f0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f0.u32l;
        goto L_80272ABC;
    // 0x80272A98: swc1        $f0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f0.u32l;
L_80272A9C:
    // 0x80272A9C: lhu         $t2, 0x12($a0)
    ctx->r10 = MEM_HU(ctx->r4, 0X12);
    // 0x80272AA0: nop

    // 0x80272AA4: andi        $t3, $t2, 0x8
    ctx->r11 = ctx->r10 & 0X8;
    // 0x80272AA8: beq         $t3, $zero, L_80272ABC
    if (ctx->r11 == 0) {
        // 0x80272AAC: nop
    
            goto L_80272ABC;
    }
    // 0x80272AAC: nop

    // 0x80272AB0: lwc1        $f4, 0x8C($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X8C);
    // 0x80272AB4: nop

    // 0x80272AB8: swc1        $f4, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f4.u32l;
L_80272ABC:
    // 0x80272ABC: lwc1        $f0, 0x2C($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X2C);
L_80272AC0:
    // 0x80272AC0: nop

    // 0x80272AC4: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x80272AC8: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x80272ACC: jr          $ra
    // 0x80272AD0: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    return;
    // 0x80272AD0: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void ovl_8024B800_func_80272AD4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80272AD4: bgez        $a0, L_80272AE4
    if (SIGNED(ctx->r4) >= 0) {
        // 0x80272AD8: or          $v1, $a0, $zero
        ctx->r3 = ctx->r4 | 0;
            goto L_80272AE4;
    }
    // 0x80272AD8: or          $v1, $a0, $zero
    ctx->r3 = ctx->r4 | 0;
    // 0x80272ADC: jr          $ra
    // 0x80272AE0: negu        $v0, $a0
    ctx->r2 = SUB32(0, ctx->r4);
    return;
    // 0x80272AE0: negu        $v0, $a0
    ctx->r2 = SUB32(0, ctx->r4);
L_80272AE4:
    // 0x80272AE4: jr          $ra
    // 0x80272AE8: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    return;
    // 0x80272AE8: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
;}
RECOMP_FUNC void ovl_8024B800_func_80272AEC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80272AEC: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x80272AF0: nop

    // 0x80272AF4: c.lt.s      $f12, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f12.fl < ctx->f4.fl;
    // 0x80272AF8: nop

    // 0x80272AFC: bc1f        L_80272B10
    if (!c1cs) {
        // 0x80272B00: nop
    
            goto L_80272B10;
    }
    // 0x80272B00: nop

    // 0x80272B04: neg.s       $f2, $f12
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); 
    ctx->f2.fl = -ctx->f12.fl;
    // 0x80272B08: jr          $ra
    // 0x80272B0C: mov.s       $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    ctx->f0.fl = ctx->f2.fl;
    return;
    // 0x80272B0C: mov.s       $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    ctx->f0.fl = ctx->f2.fl;
L_80272B10:
    // 0x80272B10: mov.s       $f2, $f12
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    ctx->f2.fl = ctx->f12.fl;
    // 0x80272B14: jr          $ra
    // 0x80272B18: mov.s       $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    ctx->f0.fl = ctx->f2.fl;
    return;
    // 0x80272B18: mov.s       $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    ctx->f0.fl = ctx->f2.fl;
;}
RECOMP_FUNC void ovl_8024B800_func_80272B1C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80272B1C: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80272B20: swc1        $f12, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f12.u32l;
    // 0x80272B24: swc1        $f14, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f14.u32l;
    // 0x80272B28: sw          $a2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r6;
    // 0x80272B2C: sw          $a3, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r7;
    // 0x80272B30: lwc1        $f4, 0x34($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X34);
    // 0x80272B34: lwc1        $f8, 0x30($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X30);
    // 0x80272B38: lwc1        $f6, 0x2C($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x80272B3C: lwc1        $f10, 0x28($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X28);
    // 0x80272B40: sub.s       $f12, $f4, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f12.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x80272B44: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80272B48: sub.s       $f14, $f8, $f10
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f14.fl = ctx->f8.fl - ctx->f10.fl;
    // 0x80272B4C: swc1        $f12, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f12.u32l;
    // 0x80272B50: jal         0x8001C5D0
    // 0x80272B54: swc1        $f14, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f14.u32l;
    func_8001C5D0(rdram, ctx);
        goto after_0;
    // 0x80272B54: swc1        $f14, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f14.u32l;
    after_0:
    // 0x80272B58: lwc1        $f14, 0x1C($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x80272B5C: lwc1        $f2, 0x18($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X18);
    // 0x80272B60: mul.s       $f16, $f14, $f14
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f16.fl = MUL_S(ctx->f14.fl, ctx->f14.fl);
    // 0x80272B64: lw          $t6, 0x38($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X38);
    // 0x80272B68: nop

    // 0x80272B6C: swc1        $f0, 0x0($t6)
    MEM_W(0X0, ctx->r14) = ctx->f0.u32l;
    // 0x80272B70: mul.s       $f18, $f2, $f2
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f18.fl = MUL_S(ctx->f2.fl, ctx->f2.fl);
    // 0x80272B74: jal         0x8007FA40
    // 0x80272B78: add.s       $f12, $f16, $f18
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f12.fl = ctx->f16.fl + ctx->f18.fl;
    func_8007FA40(rdram, ctx);
        goto after_1;
    // 0x80272B78: add.s       $f12, $f16, $f18
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f12.fl = ctx->f16.fl + ctx->f18.fl;
    after_1:
    // 0x80272B7C: lw          $t7, 0x38($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X38);
    // 0x80272B80: nop

    // 0x80272B84: swc1        $f0, 0x4($t7)
    MEM_W(0X4, ctx->r15) = ctx->f0.u32l;
    // 0x80272B88: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80272B8C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80272B90: jr          $ra
    // 0x80272B94: nop

    return;
    // 0x80272B94: nop

;}
RECOMP_FUNC void ovl_8024B800_func_80272B98(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80272B98: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80272B9C: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x80272BA0: sw          $a2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r6;
    // 0x80272BA4: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80272BA8: or          $a1, $a3, $zero
    ctx->r5 = ctx->r7 | 0;
    // 0x80272BAC: lw          $a3, 0x28($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X28);
    // 0x80272BB0: lwc1        $f14, 0x44($a0)
    ctx->f14.u32l = MEM_W(ctx->r4, 0X44);
    // 0x80272BB4: lwc1        $f12, 0x4C($a0)
    ctx->f12.u32l = MEM_W(ctx->r4, 0X4C);
    // 0x80272BB8: lw          $a2, 0x24($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X24);
    // 0x80272BBC: jal         0x80272B1C
    // 0x80272BC0: sw          $a1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r5;
    ovl_8024B800_func_80272B1C(rdram, ctx);
        goto after_0;
    // 0x80272BC0: sw          $a1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r5;
    after_0:
    // 0x80272BC4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80272BC8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80272BCC: jr          $ra
    // 0x80272BD0: nop

    return;
    // 0x80272BD0: nop

;}
RECOMP_FUNC void ovl_8024B800_func_80272BD4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80272BD4: sh          $zero, 0x0($a3)
    MEM_H(0X0, ctx->r7) = 0;
    // 0x80272BD8: lui         $t6, 0x8009
    ctx->r14 = S32(0X8009 << 16);
    // 0x80272BDC: lw          $t6, 0x3B20($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X3B20);
    // 0x80272BE0: mtc1        $a1, $f14
    ctx->f14.u32l = ctx->r5;
    // 0x80272BE4: lw          $t7, 0x84($t6)
    ctx->r15 = MEM_W(ctx->r14, 0X84);
    // 0x80272BE8: mtc1        $a2, $f12
    ctx->f12.u32l = ctx->r6;
    // 0x80272BEC: beq         $a0, $t7, L_80272C08
    if (ctx->r4 == ctx->r15) {
        // 0x80272BF0: nop
    
            goto L_80272C08;
    }
    // 0x80272BF0: nop

    // 0x80272BF4: c.lt.s      $f12, $f14
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 14);
    c1cs = ctx->f12.fl < ctx->f14.fl;
    // 0x80272BF8: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x80272BFC: bc1f        L_80272C08
    if (!c1cs) {
        // 0x80272C00: nop
    
            goto L_80272C08;
    }
    // 0x80272C00: nop

    // 0x80272C04: sh          $t8, 0x0($a3)
    MEM_H(0X0, ctx->r7) = ctx->r24;
L_80272C08:
    // 0x80272C08: jr          $ra
    // 0x80272C0C: nop

    return;
    // 0x80272C0C: nop

;}
RECOMP_FUNC void ovl_8024B800_func_80272C10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80272C10: sh          $zero, 0x0($a1)
    MEM_H(0X0, ctx->r5) = 0;
    // 0x80272C14: lui         $at, 0x8028
    ctx->r1 = S32(0X8028 << 16);
    // 0x80272C18: lwc1        $f6, 0x50($a0)
    ctx->f6.u32l = MEM_W(ctx->r4, 0X50);
    // 0x80272C1C: lwc1        $f5, -0x1E78($at)
    ctx->f_odd[(5 - 1) * 2] = MEM_W(ctx->r1, -0X1E78);
    // 0x80272C20: lwc1        $f4, -0x1E74($at)
    ctx->f4.u32l = MEM_W(ctx->r1, -0X1E74);
    // 0x80272C24: cvt.d.s     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f8.d = CVT_D_S(ctx->f6.fl);
    // 0x80272C28: c.lt.d      $f4, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f4.d < ctx->f8.d;
    // 0x80272C2C: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x80272C30: bc1f        L_80272C40
    if (!c1cs) {
        // 0x80272C34: lui         $v0, 0x8009
        ctx->r2 = S32(0X8009 << 16);
            goto L_80272C40;
    }
    // 0x80272C34: lui         $v0, 0x8009
    ctx->r2 = S32(0X8009 << 16);
    // 0x80272C38: jr          $ra
    // 0x80272C3C: sh          $t6, 0x0($a1)
    MEM_H(0X0, ctx->r5) = ctx->r14;
    return;
    // 0x80272C3C: sh          $t6, 0x0($a1)
    MEM_H(0X0, ctx->r5) = ctx->r14;
L_80272C40:
    // 0x80272C40: lw          $v0, 0x3B20($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X3B20);
    // 0x80272C44: nop

    // 0x80272C48: lw          $t7, 0x84($v0)
    ctx->r15 = MEM_W(ctx->r2, 0X84);
    // 0x80272C4C: nop

    // 0x80272C50: bne         $t7, $zero, L_80272C6C
    if (ctx->r15 != 0) {
        // 0x80272C54: nop
    
            goto L_80272C6C;
    }
    // 0x80272C54: nop

    // 0x80272C58: lw          $t8, 0x88($v0)
    ctx->r24 = MEM_W(ctx->r2, 0X88);
    // 0x80272C5C: addiu       $t9, $zero, 0x3
    ctx->r25 = ADD32(0, 0X3);
    // 0x80272C60: bne         $a0, $t8, L_80272C6C
    if (ctx->r4 != ctx->r24) {
        // 0x80272C64: nop
    
            goto L_80272C6C;
    }
    // 0x80272C64: nop

    // 0x80272C68: sh          $t9, 0x0($a1)
    MEM_H(0X0, ctx->r5) = ctx->r25;
L_80272C6C:
    // 0x80272C6C: jr          $ra
    // 0x80272C70: nop

    return;
    // 0x80272C70: nop

;}
RECOMP_FUNC void ovl_8024B800_func_80272C74(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80272C74: lw          $t6, 0xCC($a0)
    ctx->r14 = MEM_W(ctx->r4, 0XCC);
    // 0x80272C78: nop

    // 0x80272C7C: lw          $t7, 0x30($t6)
    ctx->r15 = MEM_W(ctx->r14, 0X30);
    // 0x80272C80: nop

    // 0x80272C84: lhu         $v0, 0x4($t7)
    ctx->r2 = MEM_HU(ctx->r15, 0X4);
    // 0x80272C88: jr          $ra
    // 0x80272C8C: nop

    return;
    // 0x80272C8C: nop

;}
RECOMP_FUNC void ovl_8024B800_func_80272C90(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80272C90: lw          $t6, 0xCC($a0)
    ctx->r14 = MEM_W(ctx->r4, 0XCC);
    // 0x80272C94: nop

    // 0x80272C98: lw          $t7, 0x30($t6)
    ctx->r15 = MEM_W(ctx->r14, 0X30);
    // 0x80272C9C: jr          $ra
    // 0x80272CA0: sh          $zero, 0x4($t7)
    MEM_H(0X4, ctx->r15) = 0;
    return;
    // 0x80272CA0: sh          $zero, 0x4($t7)
    MEM_H(0X4, ctx->r15) = 0;
;}
RECOMP_FUNC void ovl_8024B800_func_80272CA4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80272CA4: lw          $t6, 0xCC($a0)
    ctx->r14 = MEM_W(ctx->r4, 0XCC);
    // 0x80272CA8: nop

    // 0x80272CAC: lw          $t7, 0x30($t6)
    ctx->r15 = MEM_W(ctx->r14, 0X30);
    // 0x80272CB0: nop

    // 0x80272CB4: lhu         $v0, 0x1E($t7)
    ctx->r2 = MEM_HU(ctx->r15, 0X1E);
    // 0x80272CB8: jr          $ra
    // 0x80272CBC: nop

    return;
    // 0x80272CBC: nop

;}
RECOMP_FUNC void ovl_8024B800_func_80272CC0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80272CC0: lw          $t6, 0xCC($a0)
    ctx->r14 = MEM_W(ctx->r4, 0XCC);
    // 0x80272CC4: nop

    // 0x80272CC8: lw          $t7, 0x30($t6)
    ctx->r15 = MEM_W(ctx->r14, 0X30);
    // 0x80272CCC: nop

    // 0x80272CD0: lhu         $v0, 0x1C($t7)
    ctx->r2 = MEM_HU(ctx->r15, 0X1C);
    // 0x80272CD4: jr          $ra
    // 0x80272CD8: nop

    return;
    // 0x80272CD8: nop

;}
RECOMP_FUNC void ovl_8024B800_func_80272CDC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80272CDC: lw          $t6, 0xCC($a0)
    ctx->r14 = MEM_W(ctx->r4, 0XCC);
    // 0x80272CE0: nop

    // 0x80272CE4: lw          $t7, 0x30($t6)
    ctx->r15 = MEM_W(ctx->r14, 0X30);
    // 0x80272CE8: nop

    // 0x80272CEC: lhu         $v0, 0x10($t7)
    ctx->r2 = MEM_HU(ctx->r15, 0X10);
    // 0x80272CF0: jr          $ra
    // 0x80272CF4: nop

    return;
    // 0x80272CF4: nop

;}
RECOMP_FUNC void ovl_8024B800_func_80272CF8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80272CF8: andi        $v1, $a2, 0xFFFF
    ctx->r3 = ctx->r6 & 0XFFFF;
    // 0x80272CFC: sw          $a2, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r6;
    // 0x80272D00: blez        $v1, L_80272D34
    if (SIGNED(ctx->r3) <= 0) {
        // 0x80272D04: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_80272D34;
    }
    // 0x80272D04: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_80272D08:
    // 0x80272D08: lw          $at, 0x0($a0)
    ctx->r1 = MEM_W(ctx->r4, 0X0);
    // 0x80272D0C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80272D10: sw          $at, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r1;
    // 0x80272D14: lw          $t8, 0x4($a0)
    ctx->r24 = MEM_W(ctx->r4, 0X4);
    // 0x80272D18: andi        $t9, $v0, 0xFFFF
    ctx->r25 = ctx->r2 & 0XFFFF;
    // 0x80272D1C: slt         $at, $t9, $v1
    ctx->r1 = SIGNED(ctx->r25) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x80272D20: or          $v0, $t9, $zero
    ctx->r2 = ctx->r25 | 0;
    // 0x80272D24: addiu       $a1, $a1, 0x8
    ctx->r5 = ADD32(ctx->r5, 0X8);
    // 0x80272D28: addiu       $a0, $a0, 0x8
    ctx->r4 = ADD32(ctx->r4, 0X8);
    // 0x80272D2C: bne         $at, $zero, L_80272D08
    if (ctx->r1 != 0) {
        // 0x80272D30: sw          $t8, -0x4($a1)
        MEM_W(-0X4, ctx->r5) = ctx->r24;
            goto L_80272D08;
    }
    // 0x80272D30: sw          $t8, -0x4($a1)
    MEM_W(-0X4, ctx->r5) = ctx->r24;
L_80272D34:
    // 0x80272D34: jr          $ra
    // 0x80272D38: nop

    return;
    // 0x80272D38: nop

;}
RECOMP_FUNC void ovl_8024B800_func_80272D3C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80272D3C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80272D40: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x80272D44: lhu         $t7, 0x26($sp)
    ctx->r15 = MEM_HU(ctx->r29, 0X26);
    // 0x80272D48: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80272D4C: sw          $a2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r6;
    // 0x80272D50: sh          $a2, 0x1E($sp)
    MEM_H(0X1E, ctx->r29) = ctx->r6;
    // 0x80272D54: sh          $t7, 0x1C($sp)
    MEM_H(0X1C, ctx->r29) = ctx->r15;
    // 0x80272D58: lw          $t8, 0xCC($a0)
    ctx->r24 = MEM_W(ctx->r4, 0XCC);
    // 0x80272D5C: addiu       $a1, $sp, 0x1C
    ctx->r5 = ADD32(ctx->r29, 0X1C);
    // 0x80272D60: lw          $t9, 0x30($t8)
    ctx->r25 = MEM_W(ctx->r24, 0X30);
    // 0x80272D64: nop

    // 0x80272D68: sh          $zero, 0x4($t9)
    MEM_H(0X4, ctx->r25) = 0;
    // 0x80272D6C: lw          $a0, 0xCC($a0)
    ctx->r4 = MEM_W(ctx->r4, 0XCC);
    // 0x80272D70: jal         0x80000450
    // 0x80272D74: nop

    func_80000450(rdram, ctx);
        goto after_0;
    // 0x80272D74: nop

    after_0:
    // 0x80272D78: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80272D7C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80272D80: jr          $ra
    // 0x80272D84: nop

    return;
    // 0x80272D84: nop

;}
RECOMP_FUNC void ovl_8024B800_func_80272D88(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80272D88: sw          $a2, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r6;
    // 0x80272D8C: sw          $a3, 0xC($sp)
    MEM_W(0XC, ctx->r29) = ctx->r7;
    // 0x80272D90: lhu         $v1, 0x12($a0)
    ctx->r3 = MEM_HU(ctx->r4, 0X12);
    // 0x80272D94: andi        $t7, $a3, 0xFFFF
    ctx->r15 = ctx->r7 & 0XFFFF;
    // 0x80272D98: andi        $t8, $v1, 0x40
    ctx->r24 = ctx->r3 & 0X40;
    // 0x80272D9C: or          $a3, $t7, $zero
    ctx->r7 = ctx->r15 | 0;
    // 0x80272DA0: beq         $t8, $zero, L_80272E10
    if (ctx->r24 == 0) {
        // 0x80272DA4: andi        $t6, $a2, 0xFFFF
        ctx->r14 = ctx->r6 & 0XFFFF;
            goto L_80272E10;
    }
    // 0x80272DA4: andi        $t6, $a2, 0xFFFF
    ctx->r14 = ctx->r6 & 0XFFFF;
    // 0x80272DA8: andi        $t9, $v1, 0x4000
    ctx->r25 = ctx->r3 & 0X4000;
    // 0x80272DAC: bne         $t9, $zero, L_80272E08
    if (ctx->r25 != 0) {
        // 0x80272DB0: nop
    
            goto L_80272E08;
    }
    // 0x80272DB0: nop

    // 0x80272DB4: lw          $t0, 0xC4($a0)
    ctx->r8 = MEM_W(ctx->r4, 0XC4);
    // 0x80272DB8: ori         $t5, $v1, 0x4000
    ctx->r13 = ctx->r3 | 0X4000;
    // 0x80272DBC: lhu         $t1, 0x6($t0)
    ctx->r9 = MEM_HU(ctx->r8, 0X6);
    // 0x80272DC0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80272DC4: and         $t2, $t1, $t6
    ctx->r10 = ctx->r9 & ctx->r14;
    // 0x80272DC8: beq         $t2, $zero, L_80272DFC
    if (ctx->r10 == 0) {
        // 0x80272DCC: nop
    
            goto L_80272DFC;
    }
    // 0x80272DCC: nop

    // 0x80272DD0: lhu         $v0, 0x0($a1)
    ctx->r2 = MEM_HU(ctx->r5, 0X0);
    // 0x80272DD4: nop

    // 0x80272DD8: slt         $at, $v0, $t7
    ctx->r1 = SIGNED(ctx->r2) < SIGNED(ctx->r15) ? 1 : 0;
    // 0x80272DDC: bne         $at, $zero, L_80272E04
    if (ctx->r1 != 0) {
        // 0x80272DE0: addiu       $t6, $v0, 0x1
        ctx->r14 = ADD32(ctx->r2, 0X1);
            goto L_80272E04;
    }
    // 0x80272DE0: addiu       $t6, $v0, 0x1
    ctx->r14 = ADD32(ctx->r2, 0X1);
    // 0x80272DE4: sh          $t7, 0x0($a1)
    MEM_H(0X0, ctx->r5) = ctx->r15;
    // 0x80272DE8: lhu         $t3, 0x12($a0)
    ctx->r11 = MEM_HU(ctx->r4, 0X12);
    // 0x80272DEC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80272DF0: ori         $t4, $t3, 0x4000
    ctx->r12 = ctx->r11 | 0X4000;
    // 0x80272DF4: jr          $ra
    // 0x80272DF8: sh          $t4, 0x12($a0)
    MEM_H(0X12, ctx->r4) = ctx->r12;
    return;
    // 0x80272DF8: sh          $t4, 0x12($a0)
    MEM_H(0X12, ctx->r4) = ctx->r12;
L_80272DFC:
    // 0x80272DFC: jr          $ra
    // 0x80272E00: sh          $t5, 0x12($a0)
    MEM_H(0X12, ctx->r4) = ctx->r13;
    return;
    // 0x80272E00: sh          $t5, 0x12($a0)
    MEM_H(0X12, ctx->r4) = ctx->r13;
L_80272E04:
    // 0x80272E04: sh          $t6, 0x0($a1)
    MEM_H(0X0, ctx->r5) = ctx->r14;
L_80272E08:
    // 0x80272E08: jr          $ra
    // 0x80272E0C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    return;
    // 0x80272E0C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_80272E10:
    // 0x80272E10: lw          $v0, 0xC8($a0)
    ctx->r2 = MEM_W(ctx->r4, 0XC8);
    // 0x80272E14: nop

    // 0x80272E18: lh          $t7, 0x960($v0)
    ctx->r15 = MEM_H(ctx->r2, 0X960);
    // 0x80272E1C: nop

    // 0x80272E20: addiu       $t8, $t7, -0x1
    ctx->r24 = ADD32(ctx->r15, -0X1);
    // 0x80272E24: sh          $t8, 0x960($v0)
    MEM_H(0X960, ctx->r2) = ctx->r24;
    // 0x80272E28: lw          $t9, 0xC8($a0)
    ctx->r25 = MEM_W(ctx->r4, 0XC8);
    // 0x80272E2C: nop

    // 0x80272E30: lh          $t0, 0x960($t9)
    ctx->r8 = MEM_H(ctx->r25, 0X960);
    // 0x80272E34: nop

    // 0x80272E38: bgez        $t0, L_80272E70
    if (SIGNED(ctx->r8) >= 0) {
        // 0x80272E3C: nop
    
            goto L_80272E70;
    }
    // 0x80272E3C: nop

    // 0x80272E40: lhu         $t1, 0x12($a0)
    ctx->r9 = MEM_HU(ctx->r4, 0X12);
    // 0x80272E44: nop

    // 0x80272E48: ori         $t2, $t1, 0x4000
    ctx->r10 = ctx->r9 | 0X4000;
    // 0x80272E4C: sh          $t2, 0x12($a0)
    MEM_H(0X12, ctx->r4) = ctx->r10;
    // 0x80272E50: lhu         $t3, 0x0($a1)
    ctx->r11 = MEM_HU(ctx->r5, 0X0);
    // 0x80272E54: nop

    // 0x80272E58: slt         $at, $t3, $a3
    ctx->r1 = SIGNED(ctx->r11) < SIGNED(ctx->r7) ? 1 : 0;
    // 0x80272E5C: bne         $at, $zero, L_80272E68
    if (ctx->r1 != 0) {
        // 0x80272E60: nop
    
            goto L_80272E68;
    }
    // 0x80272E60: nop

    // 0x80272E64: sh          $a3, 0x0($a1)
    MEM_H(0X0, ctx->r5) = ctx->r7;
L_80272E68:
    // 0x80272E68: jr          $ra
    // 0x80272E6C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    return;
    // 0x80272E6C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_80272E70:
    // 0x80272E70: lhu         $t4, 0x0($a1)
    ctx->r12 = MEM_HU(ctx->r5, 0X0);
    // 0x80272E74: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x80272E78: addiu       $t5, $t4, 0x1
    ctx->r13 = ADD32(ctx->r12, 0X1);
    // 0x80272E7C: sh          $t5, 0x0($a1)
    MEM_H(0X0, ctx->r5) = ctx->r13;
    // 0x80272E80: jr          $ra
    // 0x80272E84: nop

    return;
    // 0x80272E84: nop

;}
RECOMP_FUNC void ovl_8024B800_func_80272E88(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80272E88: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x80272E8C: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
L_80272E90:
    // 0x80272E90: sll         $t6, $v0, 1
    ctx->r14 = S32(ctx->r2 << 1);
    // 0x80272E94: addu        $t7, $a1, $t6
    ctx->r15 = ADD32(ctx->r5, ctx->r14);
    // 0x80272E98: lh          $t8, 0x0($t7)
    ctx->r24 = MEM_H(ctx->r15, 0X0);
    // 0x80272E9C: lwc1        $f2, 0x4C($a0)
    ctx->f2.u32l = MEM_W(ctx->r4, 0X4C);
    // 0x80272EA0: mtc1        $t8, $f4
    ctx->f4.u32l = ctx->r24;
    // 0x80272EA4: sll         $t9, $v1, 1
    ctx->r25 = S32(ctx->r3 << 1);
    // 0x80272EA8: cvt.s.w     $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    ctx->f0.fl = CVT_S_W(ctx->f4.u32l);
    // 0x80272EAC: addu        $v0, $a1, $t9
    ctx->r2 = ADD32(ctx->r5, ctx->r25);
    // 0x80272EB0: c.le.s      $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f2.fl <= ctx->f0.fl;
    // 0x80272EB4: nop

    // 0x80272EB8: bc1f        L_80272FC4
    if (!c1cs) {
        // 0x80272EBC: nop
    
            goto L_80272FC4;
    }
    // 0x80272EBC: nop

    // 0x80272EC0: lh          $t0, 0x2($v0)
    ctx->r8 = MEM_H(ctx->r2, 0X2);
    // 0x80272EC4: nop

    // 0x80272EC8: mtc1        $t0, $f6
    ctx->f6.u32l = ctx->r8;
    // 0x80272ECC: nop

    // 0x80272ED0: cvt.s.w     $f12, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    ctx->f12.fl = CVT_S_W(ctx->f6.u32l);
    // 0x80272ED4: c.le.s      $f12, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f12.fl <= ctx->f2.fl;
    // 0x80272ED8: nop

    // 0x80272EDC: bc1f        L_80272FC4
    if (!c1cs) {
        // 0x80272EE0: nop
    
            goto L_80272FC4;
    }
    // 0x80272EE0: nop

    // 0x80272EE4: lh          $t1, 0x4($v0)
    ctx->r9 = MEM_H(ctx->r2, 0X4);
    // 0x80272EE8: lwc1        $f2, 0x44($a0)
    ctx->f2.u32l = MEM_W(ctx->r4, 0X44);
    // 0x80272EEC: mtc1        $t1, $f8
    ctx->f8.u32l = ctx->r9;
    // 0x80272EF0: nop

    // 0x80272EF4: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x80272EF8: c.le.s      $f10, $f2
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f10.fl <= ctx->f2.fl;
    // 0x80272EFC: nop

    // 0x80272F00: bc1f        L_80272FC4
    if (!c1cs) {
        // 0x80272F04: nop
    
            goto L_80272FC4;
    }
    // 0x80272F04: nop

    // 0x80272F08: lh          $t2, 0x6($v0)
    ctx->r10 = MEM_H(ctx->r2, 0X6);
    // 0x80272F0C: nop

    // 0x80272F10: mtc1        $t2, $f16
    ctx->f16.u32l = ctx->r10;
    // 0x80272F14: nop

    // 0x80272F18: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x80272F1C: c.le.s      $f2, $f18
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f2.fl <= ctx->f18.fl;
    // 0x80272F20: nop

    // 0x80272F24: bc1f        L_80272FC4
    if (!c1cs) {
        // 0x80272F28: nop
    
            goto L_80272FC4;
    }
    // 0x80272F28: nop

    // 0x80272F2C: lwc1        $f2, 0xA4($a0)
    ctx->f2.u32l = MEM_W(ctx->r4, 0XA4);
    // 0x80272F30: nop

    // 0x80272F34: c.le.s      $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f0.fl <= ctx->f2.fl;
    // 0x80272F38: nop

    // 0x80272F3C: bc1f        L_80272F5C
    if (!c1cs) {
        // 0x80272F40: nop
    
            goto L_80272F5C;
    }
    // 0x80272F40: nop

    // 0x80272F44: swc1        $f0, 0x4C($a0)
    MEM_W(0X4C, ctx->r4) = ctx->f0.u32l;
    // 0x80272F48: lh          $t3, 0x2($v0)
    ctx->r11 = MEM_H(ctx->r2, 0X2);
    // 0x80272F4C: lwc1        $f2, 0xA4($a0)
    ctx->f2.u32l = MEM_W(ctx->r4, 0XA4);
    // 0x80272F50: mtc1        $t3, $f4
    ctx->f4.u32l = ctx->r11;
    // 0x80272F54: nop

    // 0x80272F58: cvt.s.w     $f12, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    ctx->f12.fl = CVT_S_W(ctx->f4.u32l);
L_80272F5C:
    // 0x80272F5C: c.le.s      $f2, $f12
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f2.fl <= ctx->f12.fl;
    // 0x80272F60: nop

    // 0x80272F64: bc1f        L_80272F70
    if (!c1cs) {
        // 0x80272F68: nop
    
            goto L_80272F70;
    }
    // 0x80272F68: nop

    // 0x80272F6C: swc1        $f12, 0x4C($a0)
    MEM_W(0X4C, ctx->r4) = ctx->f12.u32l;
L_80272F70:
    // 0x80272F70: lh          $t4, 0x4($v0)
    ctx->r12 = MEM_H(ctx->r2, 0X4);
    // 0x80272F74: lwc1        $f2, 0xA8($a0)
    ctx->f2.u32l = MEM_W(ctx->r4, 0XA8);
    // 0x80272F78: mtc1        $t4, $f6
    ctx->f6.u32l = ctx->r12;
    // 0x80272F7C: nop

    // 0x80272F80: cvt.s.w     $f0, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    ctx->f0.fl = CVT_S_W(ctx->f6.u32l);
    // 0x80272F84: c.le.s      $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f2.fl <= ctx->f0.fl;
    // 0x80272F88: nop

    // 0x80272F8C: bc1f        L_80272F9C
    if (!c1cs) {
        // 0x80272F90: nop
    
            goto L_80272F9C;
    }
    // 0x80272F90: nop

    // 0x80272F94: lwc1        $f2, 0xA8($a0)
    ctx->f2.u32l = MEM_W(ctx->r4, 0XA8);
    // 0x80272F98: swc1        $f0, 0x44($a0)
    MEM_W(0X44, ctx->r4) = ctx->f0.u32l;
L_80272F9C:
    // 0x80272F9C: lh          $t5, 0x6($v0)
    ctx->r13 = MEM_H(ctx->r2, 0X6);
    // 0x80272FA0: nop

    // 0x80272FA4: mtc1        $t5, $f8
    ctx->f8.u32l = ctx->r13;
    // 0x80272FA8: nop

    // 0x80272FAC: cvt.s.w     $f0, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    ctx->f0.fl = CVT_S_W(ctx->f8.u32l);
    // 0x80272FB0: c.le.s      $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f0.fl <= ctx->f2.fl;
    // 0x80272FB4: nop

    // 0x80272FB8: bc1f        L_80272FC8
    if (!c1cs) {
        // 0x80272FBC: addiu       $v0, $v1, 0x4
        ctx->r2 = ADD32(ctx->r3, 0X4);
            goto L_80272FC8;
    }
    // 0x80272FBC: addiu       $v0, $v1, 0x4
    ctx->r2 = ADD32(ctx->r3, 0X4);
    // 0x80272FC0: swc1        $f0, 0x44($a0)
    MEM_W(0X44, ctx->r4) = ctx->f0.u32l;
L_80272FC4:
    // 0x80272FC4: addiu       $v0, $v1, 0x4
    ctx->r2 = ADD32(ctx->r3, 0X4);
L_80272FC8:
    // 0x80272FC8: andi        $v1, $v0, 0xFFFF
    ctx->r3 = ctx->r2 & 0XFFFF;
    // 0x80272FCC: slti        $at, $v1, 0xC
    ctx->r1 = SIGNED(ctx->r3) < 0XC ? 1 : 0;
    // 0x80272FD0: bne         $at, $zero, L_80272E90
    if (ctx->r1 != 0) {
        // 0x80272FD4: or          $v0, $v1, $zero
        ctx->r2 = ctx->r3 | 0;
            goto L_80272E90;
    }
    // 0x80272FD4: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    // 0x80272FD8: jr          $ra
    // 0x80272FDC: nop

    return;
    // 0x80272FDC: nop

;}
RECOMP_FUNC void ovl_8024B800_func_80272E90(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
L_80272E90:
    // 0x80272E90: sll         $t6, $v0, 1
    ctx->r14 = S32(ctx->r2 << 1);
    // 0x80272E94: addu        $t7, $a1, $t6
    ctx->r15 = ADD32(ctx->r5, ctx->r14);
    // 0x80272E98: lh          $t8, 0x0($t7)
    ctx->r24 = MEM_H(ctx->r15, 0X0);
    // 0x80272E9C: lwc1        $f2, 0x4C($a0)
    ctx->f2.u32l = MEM_W(ctx->r4, 0X4C);
    // 0x80272EA0: mtc1        $t8, $f4
    ctx->f4.u32l = ctx->r24;
    // 0x80272EA4: sll         $t9, $v1, 1
    ctx->r25 = S32(ctx->r3 << 1);
    // 0x80272EA8: cvt.s.w     $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    ctx->f0.fl = CVT_S_W(ctx->f4.u32l);
    // 0x80272EAC: addu        $v0, $a1, $t9
    ctx->r2 = ADD32(ctx->r5, ctx->r25);
    // 0x80272EB0: c.le.s      $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f2.fl <= ctx->f0.fl;
    // 0x80272EB4: nop

    // 0x80272EB8: bc1f        L_80272FC4
    if (!c1cs) {
        // 0x80272EBC: nop
    
            goto L_80272FC4;
    }
    // 0x80272EBC: nop

    // 0x80272EC0: lh          $t0, 0x2($v0)
    ctx->r8 = MEM_H(ctx->r2, 0X2);
    // 0x80272EC4: nop

    // 0x80272EC8: mtc1        $t0, $f6
    ctx->f6.u32l = ctx->r8;
    // 0x80272ECC: nop

    // 0x80272ED0: cvt.s.w     $f12, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    ctx->f12.fl = CVT_S_W(ctx->f6.u32l);
    // 0x80272ED4: c.le.s      $f12, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f12.fl <= ctx->f2.fl;
    // 0x80272ED8: nop

    // 0x80272EDC: bc1f        L_80272FC4
    if (!c1cs) {
        // 0x80272EE0: nop
    
            goto L_80272FC4;
    }
    // 0x80272EE0: nop

    // 0x80272EE4: lh          $t1, 0x4($v0)
    ctx->r9 = MEM_H(ctx->r2, 0X4);
    // 0x80272EE8: lwc1        $f2, 0x44($a0)
    ctx->f2.u32l = MEM_W(ctx->r4, 0X44);
    // 0x80272EEC: mtc1        $t1, $f8
    ctx->f8.u32l = ctx->r9;
    // 0x80272EF0: nop

    // 0x80272EF4: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x80272EF8: c.le.s      $f10, $f2
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f10.fl <= ctx->f2.fl;
    // 0x80272EFC: nop

    // 0x80272F00: bc1f        L_80272FC4
    if (!c1cs) {
        // 0x80272F04: nop
    
            goto L_80272FC4;
    }
    // 0x80272F04: nop

    // 0x80272F08: lh          $t2, 0x6($v0)
    ctx->r10 = MEM_H(ctx->r2, 0X6);
    // 0x80272F0C: nop

    // 0x80272F10: mtc1        $t2, $f16
    ctx->f16.u32l = ctx->r10;
    // 0x80272F14: nop

    // 0x80272F18: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x80272F1C: c.le.s      $f2, $f18
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f2.fl <= ctx->f18.fl;
    // 0x80272F20: nop

    // 0x80272F24: bc1f        L_80272FC4
    if (!c1cs) {
        // 0x80272F28: nop
    
            goto L_80272FC4;
    }
    // 0x80272F28: nop

    // 0x80272F2C: lwc1        $f2, 0xA4($a0)
    ctx->f2.u32l = MEM_W(ctx->r4, 0XA4);
    // 0x80272F30: nop

    // 0x80272F34: c.le.s      $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f0.fl <= ctx->f2.fl;
    // 0x80272F38: nop

    // 0x80272F3C: bc1f        L_80272F5C
    if (!c1cs) {
        // 0x80272F40: nop
    
            goto L_80272F5C;
    }
    // 0x80272F40: nop

    // 0x80272F44: swc1        $f0, 0x4C($a0)
    MEM_W(0X4C, ctx->r4) = ctx->f0.u32l;
    // 0x80272F48: lh          $t3, 0x2($v0)
    ctx->r11 = MEM_H(ctx->r2, 0X2);
    // 0x80272F4C: lwc1        $f2, 0xA4($a0)
    ctx->f2.u32l = MEM_W(ctx->r4, 0XA4);
    // 0x80272F50: mtc1        $t3, $f4
    ctx->f4.u32l = ctx->r11;
    // 0x80272F54: nop

    // 0x80272F58: cvt.s.w     $f12, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    ctx->f12.fl = CVT_S_W(ctx->f4.u32l);
L_80272F5C:
    // 0x80272F5C: c.le.s      $f2, $f12
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f2.fl <= ctx->f12.fl;
    // 0x80272F60: nop

    // 0x80272F64: bc1f        L_80272F70
    if (!c1cs) {
        // 0x80272F68: nop
    
            goto L_80272F70;
    }
    // 0x80272F68: nop

    // 0x80272F6C: swc1        $f12, 0x4C($a0)
    MEM_W(0X4C, ctx->r4) = ctx->f12.u32l;
L_80272F70:
    // 0x80272F70: lh          $t4, 0x4($v0)
    ctx->r12 = MEM_H(ctx->r2, 0X4);
    // 0x80272F74: lwc1        $f2, 0xA8($a0)
    ctx->f2.u32l = MEM_W(ctx->r4, 0XA8);
    // 0x80272F78: mtc1        $t4, $f6
    ctx->f6.u32l = ctx->r12;
    // 0x80272F7C: nop

    // 0x80272F80: cvt.s.w     $f0, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    ctx->f0.fl = CVT_S_W(ctx->f6.u32l);
    // 0x80272F84: c.le.s      $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f2.fl <= ctx->f0.fl;
    // 0x80272F88: nop

    // 0x80272F8C: bc1f        L_80272F9C
    if (!c1cs) {
        // 0x80272F90: nop
    
            goto L_80272F9C;
    }
    // 0x80272F90: nop

    // 0x80272F94: lwc1        $f2, 0xA8($a0)
    ctx->f2.u32l = MEM_W(ctx->r4, 0XA8);
    // 0x80272F98: swc1        $f0, 0x44($a0)
    MEM_W(0X44, ctx->r4) = ctx->f0.u32l;
L_80272F9C:
    // 0x80272F9C: lh          $t5, 0x6($v0)
    ctx->r13 = MEM_H(ctx->r2, 0X6);
    // 0x80272FA0: nop

    // 0x80272FA4: mtc1        $t5, $f8
    ctx->f8.u32l = ctx->r13;
    // 0x80272FA8: nop

    // 0x80272FAC: cvt.s.w     $f0, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    ctx->f0.fl = CVT_S_W(ctx->f8.u32l);
    // 0x80272FB0: c.le.s      $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f0.fl <= ctx->f2.fl;
    // 0x80272FB4: nop

    // 0x80272FB8: bc1f        L_80272FC8
    if (!c1cs) {
        // 0x80272FBC: addiu       $v0, $v1, 0x4
        ctx->r2 = ADD32(ctx->r3, 0X4);
            goto L_80272FC8;
    }
    // 0x80272FBC: addiu       $v0, $v1, 0x4
    ctx->r2 = ADD32(ctx->r3, 0X4);
    // 0x80272FC0: swc1        $f0, 0x44($a0)
    MEM_W(0X44, ctx->r4) = ctx->f0.u32l;
L_80272FC4:
    // 0x80272FC4: addiu       $v0, $v1, 0x4
    ctx->r2 = ADD32(ctx->r3, 0X4);
L_80272FC8:
    // 0x80272FC8: andi        $v1, $v0, 0xFFFF
    ctx->r3 = ctx->r2 & 0XFFFF;
    // 0x80272FCC: slti        $at, $v1, 0xC
    ctx->r1 = SIGNED(ctx->r3) < 0XC ? 1 : 0;
    // 0x80272FD0: bne         $at, $zero, L_80272E90
    if (ctx->r1 != 0) {
        // 0x80272FD4: or          $v0, $v1, $zero
        ctx->r2 = ctx->r3 | 0;
            goto L_80272E90;
    }
    // 0x80272FD4: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    // 0x80272FD8: jr          $ra
    // 0x80272FDC: nop

    return;
    // 0x80272FDC: nop

;}
RECOMP_FUNC void ovl_8024B800_func_80272F38(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
L_80272E90:
    // 0x80272F38: nop

    // 0x80272F3C: bc1f        L_80272F5C
    if (!c1cs) {
        // 0x80272F40: nop
    
            goto L_80272F5C;
    }
    // 0x80272F40: nop

    // 0x80272F44: swc1        $f0, 0x4C($a0)
    MEM_W(0X4C, ctx->r4) = ctx->f0.u32l;
    // 0x80272F48: lh          $t3, 0x2($v0)
    ctx->r11 = MEM_H(ctx->r2, 0X2);
    // 0x80272F4C: lwc1        $f2, 0xA4($a0)
    ctx->f2.u32l = MEM_W(ctx->r4, 0XA4);
    // 0x80272F50: mtc1        $t3, $f4
    ctx->f4.u32l = ctx->r11;
    // 0x80272F54: nop

    // 0x80272F58: cvt.s.w     $f12, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    ctx->f12.fl = CVT_S_W(ctx->f4.u32l);
L_80272F5C:
    // 0x80272F5C: c.le.s      $f2, $f12
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f2.fl <= ctx->f12.fl;
    // 0x80272F60: nop

    // 0x80272F64: bc1f        L_80272F70
    if (!c1cs) {
        // 0x80272F68: nop
    
            goto L_80272F70;
    }
    // 0x80272F68: nop

    // 0x80272F6C: swc1        $f12, 0x4C($a0)
    MEM_W(0X4C, ctx->r4) = ctx->f12.u32l;
L_80272F70:
    // 0x80272F70: lh          $t4, 0x4($v0)
    ctx->r12 = MEM_H(ctx->r2, 0X4);
    // 0x80272F74: lwc1        $f2, 0xA8($a0)
    ctx->f2.u32l = MEM_W(ctx->r4, 0XA8);
    // 0x80272F78: mtc1        $t4, $f6
    ctx->f6.u32l = ctx->r12;
    // 0x80272F7C: nop

    // 0x80272F80: cvt.s.w     $f0, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    ctx->f0.fl = CVT_S_W(ctx->f6.u32l);
    // 0x80272F84: c.le.s      $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f2.fl <= ctx->f0.fl;
    // 0x80272F88: nop

    // 0x80272F8C: bc1f        L_80272F9C
    if (!c1cs) {
        // 0x80272F90: nop
    
            goto L_80272F9C;
    }
    // 0x80272F90: nop

    // 0x80272F94: lwc1        $f2, 0xA8($a0)
    ctx->f2.u32l = MEM_W(ctx->r4, 0XA8);
    // 0x80272F98: swc1        $f0, 0x44($a0)
    MEM_W(0X44, ctx->r4) = ctx->f0.u32l;
L_80272F9C:
    // 0x80272F9C: lh          $t5, 0x6($v0)
    ctx->r13 = MEM_H(ctx->r2, 0X6);
    // 0x80272FA0: nop

    // 0x80272FA4: mtc1        $t5, $f8
    ctx->f8.u32l = ctx->r13;
    // 0x80272FA8: nop

    // 0x80272FAC: cvt.s.w     $f0, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    ctx->f0.fl = CVT_S_W(ctx->f8.u32l);
    // 0x80272FB0: c.le.s      $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f0.fl <= ctx->f2.fl;
    // 0x80272FB4: nop

    // 0x80272FB8: bc1f        L_80272FC8
    if (!c1cs) {
        // 0x80272FBC: addiu       $v0, $v1, 0x4
        ctx->r2 = ADD32(ctx->r3, 0X4);
            goto L_80272FC8;
    }
    // 0x80272FBC: addiu       $v0, $v1, 0x4
    ctx->r2 = ADD32(ctx->r3, 0X4);
    // 0x80272FC0: swc1        $f0, 0x44($a0)
    MEM_W(0X44, ctx->r4) = ctx->f0.u32l;
    // 0x80272FC4: addiu       $v0, $v1, 0x4
    ctx->r2 = ADD32(ctx->r3, 0X4);
L_80272FC8:
    // 0x80272FC8: andi        $v1, $v0, 0xFFFF
    ctx->r3 = ctx->r2 & 0XFFFF;
    // 0x80272FCC: slti        $at, $v1, 0xC
    ctx->r1 = SIGNED(ctx->r3) < 0XC ? 1 : 0;
    // 0x80272FD0: bne         $at, $zero, L_80272E90
    if (ctx->r1 != 0) {
            // 0x80272FD4: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    ovl_8024B800_func_80272E90(rdram, ctx);
    return;
    }
    // 0x80272FD4: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    // 0x80272FD8: jr          $ra
    // 0x80272FDC: nop

    return;
    // 0x80272FDC: nop

;}
RECOMP_FUNC void ovl_8024B800_func_80272FE0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80272FE0: addiu       $sp, $sp, -0x98
    ctx->r29 = ADD32(ctx->r29, -0X98);
    // 0x80272FE4: lui         $t6, 0x8012
    ctx->r14 = S32(0X8012 << 16);
    // 0x80272FE8: lhu         $t6, 0xB7E($t6)
    ctx->r14 = MEM_HU(ctx->r14, 0XB7E);
    // 0x80272FEC: sw          $ra, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->r31;
    // 0x80272FF0: andi        $t7, $t6, 0x4
    ctx->r15 = ctx->r14 & 0X4;
    // 0x80272FF4: sw          $fp, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->r30;
    // 0x80272FF8: sw          $s7, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->r23;
    // 0x80272FFC: sw          $s6, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->r22;
    // 0x80273000: sw          $s5, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r21;
    // 0x80273004: sw          $s4, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r20;
    // 0x80273008: sw          $s3, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r19;
    // 0x8027300C: sw          $s2, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r18;
    // 0x80273010: sw          $s1, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r17;
    // 0x80273014: sw          $s0, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r16;
    // 0x80273018: swc1        $f31, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->f_odd[(31 - 1) * 2];
    // 0x8027301C: swc1        $f30, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->f30.u32l;
    // 0x80273020: swc1        $f29, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->f_odd[(29 - 1) * 2];
    // 0x80273024: swc1        $f28, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->f28.u32l;
    // 0x80273028: swc1        $f27, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f_odd[(27 - 1) * 2];
    // 0x8027302C: swc1        $f26, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f26.u32l;
    // 0x80273030: swc1        $f25, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f_odd[(25 - 1) * 2];
    // 0x80273034: swc1        $f24, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f24.u32l;
    // 0x80273038: swc1        $f23, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f_odd[(23 - 1) * 2];
    // 0x8027303C: swc1        $f22, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f22.u32l;
    // 0x80273040: swc1        $f21, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x80273044: bne         $t7, $zero, L_80273270
    if (ctx->r15 != 0) {
        // 0x80273048: swc1        $f20, 0x24($sp)
        MEM_W(0X24, ctx->r29) = ctx->f20.u32l;
            goto L_80273270;
    }
    // 0x80273048: swc1        $f20, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f20.u32l;
    // 0x8027304C: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x80273050: lhu         $v0, 0xB78($v0)
    ctx->r2 = MEM_HU(ctx->r2, 0XB78);
    // 0x80273054: addiu       $at, $zero, 0xA
    ctx->r1 = ADD32(0, 0XA);
    // 0x80273058: beq         $v0, $at, L_80273270
    if (ctx->r2 == ctx->r1) {
        // 0x8027305C: addiu       $at, $zero, 0xB
        ctx->r1 = ADD32(0, 0XB);
            goto L_80273270;
    }
    // 0x8027305C: addiu       $at, $zero, 0xB
    ctx->r1 = ADD32(0, 0XB);
    // 0x80273060: beq         $v0, $at, L_80273270
    if (ctx->r2 == ctx->r1) {
        // 0x80273064: addiu       $at, $zero, 0xC
        ctx->r1 = ADD32(0, 0XC);
            goto L_80273270;
    }
    // 0x80273064: addiu       $at, $zero, 0xC
    ctx->r1 = ADD32(0, 0XC);
    // 0x80273068: beq         $v0, $at, L_80273270
    if (ctx->r2 == ctx->r1) {
        // 0x8027306C: lui         $fp, 0x8012
        ctx->r30 = S32(0X8012 << 16);
            goto L_80273270;
    }
    // 0x8027306C: lui         $fp, 0x8012
    ctx->r30 = S32(0X8012 << 16);
    // 0x80273070: lui         $at, 0x8028
    ctx->r1 = S32(0X8028 << 16);
    // 0x80273074: lwc1        $f30, -0x1E70($at)
    ctx->f30.u32l = MEM_W(ctx->r1, -0X1E70);
    // 0x80273078: lui         $at, 0x42B4
    ctx->r1 = S32(0X42B4 << 16);
    // 0x8027307C: mtc1        $at, $f28
    ctx->f28.u32l = ctx->r1;
    // 0x80273080: lui         $at, 0x8028
    ctx->r1 = S32(0X8028 << 16);
    // 0x80273084: lwc1        $f26, -0x1E6C($at)
    ctx->f26.u32l = MEM_W(ctx->r1, -0X1E6C);
    // 0x80273088: lui         $at, 0x8028
    ctx->r1 = S32(0X8028 << 16);
    // 0x8027308C: lwc1        $f24, -0x1E68($at)
    ctx->f24.u32l = MEM_W(ctx->r1, -0X1E68);
    // 0x80273090: lui         $at, 0x8028
    ctx->r1 = S32(0X8028 << 16);
    // 0x80273094: lwc1        $f22, -0x1E64($at)
    ctx->f22.u32l = MEM_W(ctx->r1, -0X1E64);
    // 0x80273098: lui         $at, 0x8028
    ctx->r1 = S32(0X8028 << 16);
    // 0x8027309C: lui         $s6, 0x8028
    ctx->r22 = S32(0X8028 << 16);
    // 0x802730A0: lui         $s5, 0x8028
    ctx->r21 = S32(0X8028 << 16);
    // 0x802730A4: lui         $s3, 0x8009
    ctx->r19 = S32(0X8009 << 16);
    // 0x802730A8: lui         $s2, 0x8012
    ctx->r18 = S32(0X8012 << 16);
    // 0x802730AC: lwc1        $f20, -0x1E60($at)
    ctx->f20.u32l = MEM_W(ctx->r1, -0X1E60);
    // 0x802730B0: addiu       $s2, $s2, 0xB4A
    ctx->r18 = ADD32(ctx->r18, 0XB4A);
    // 0x802730B4: addiu       $s3, $s3, 0x3B20
    ctx->r19 = ADD32(ctx->r19, 0X3B20);
    // 0x802730B8: addiu       $s5, $s5, -0x265C
    ctx->r21 = ADD32(ctx->r21, -0X265C);
    // 0x802730BC: addiu       $s6, $s6, -0x2644
    ctx->r22 = ADD32(ctx->r22, -0X2644);
    // 0x802730C0: addiu       $fp, $fp, -0x2CF0
    ctx->r30 = ADD32(ctx->r30, -0X2CF0);
    // 0x802730C4: addiu       $s7, $zero, 0xB
    ctx->r23 = ADD32(0, 0XB);
    // 0x802730C8: addiu       $s4, $sp, 0x88
    ctx->r20 = ADD32(ctx->r29, 0X88);
L_802730CC:
    // 0x802730CC: lw          $s0, 0x18($fp)
    ctx->r16 = MEM_W(ctx->r30, 0X18);
    // 0x802730D0: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
L_802730D4:
    // 0x802730D4: lhu         $t8, 0x0($s2)
    ctx->r24 = MEM_HU(ctx->r18, 0X0);
    // 0x802730D8: nop

    // 0x802730DC: beq         $t8, $zero, L_80273160
    if (ctx->r24 == 0) {
        // 0x802730E0: nop
    
            goto L_80273160;
    }
    // 0x802730E0: nop

    // 0x802730E4: lhu         $t9, 0x12($s0)
    ctx->r25 = MEM_HU(ctx->r16, 0X12);
    // 0x802730E8: nop

    // 0x802730EC: andi        $t0, $t9, 0x40
    ctx->r8 = ctx->r25 & 0X40;
    // 0x802730F0: beq         $t0, $zero, L_80273160
    if (ctx->r8 == 0) {
        // 0x802730F4: nop
    
            goto L_80273160;
    }
    // 0x802730F4: nop

    // 0x802730F8: lw          $v0, 0x0($s3)
    ctx->r2 = MEM_W(ctx->r19, 0X0);
    // 0x802730FC: lw          $t2, 0xC8($s0)
    ctx->r10 = MEM_W(ctx->r16, 0XC8);
    // 0x80273100: lw          $t1, 0xB4($v0)
    ctx->r9 = MEM_W(ctx->r2, 0XB4);
    // 0x80273104: nop

    // 0x80273108: bne         $t1, $t2, L_80273160
    if (ctx->r9 != ctx->r10) {
        // 0x8027310C: nop
    
            goto L_80273160;
    }
    // 0x8027310C: nop

    // 0x80273110: lh          $t3, 0xE8($v0)
    ctx->r11 = MEM_H(ctx->r2, 0XE8);
    // 0x80273114: lh          $t4, 0xEA($v0)
    ctx->r12 = MEM_H(ctx->r2, 0XEA);
    // 0x80273118: mtc1        $t3, $f18
    ctx->f18.u32l = ctx->r11;
    // 0x8027311C: mtc1        $t4, $f16
    ctx->f16.u32l = ctx->r12;
    // 0x80273120: cvt.s.w     $f12, $f18
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 18);
    ctx->f12.fl = CVT_S_W(ctx->f18.u32l);
    // 0x80273124: lw          $a2, 0x4C($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X4C);
    // 0x80273128: lw          $a3, 0x44($s0)
    ctx->r7 = MEM_W(ctx->r16, 0X44);
    // 0x8027312C: cvt.s.w     $f14, $f16
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 16);
    ctx->f14.fl = CVT_S_W(ctx->f16.u32l);
    // 0x80273130: jal         0x80272B1C
    // 0x80273134: sw          $s4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r20;
    ovl_8024B800_func_80272B1C(rdram, ctx);
        goto after_0;
    // 0x80273134: sw          $s4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r20;
    after_0:
    // 0x80273138: lwc1        $f8, 0x8C($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X8C);
    // 0x8027313C: nop

    // 0x80273140: c.lt.s      $f8, $f28
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 28);
    c1cs = ctx->f8.fl < ctx->f28.fl;
    // 0x80273144: nop

    // 0x80273148: bc1f        L_80273160
    if (!c1cs) {
        // 0x8027314C: nop
    
            goto L_80273160;
    }
    // 0x8027314C: nop

    // 0x80273150: lhu         $t5, 0x16($s0)
    ctx->r13 = MEM_HU(ctx->r16, 0X16);
    // 0x80273154: nop

    // 0x80273158: ori         $t6, $t5, 0x4000
    ctx->r14 = ctx->r13 | 0X4000;
    // 0x8027315C: sh          $t6, 0x16($s0)
    MEM_H(0X16, ctx->r16) = ctx->r14;
L_80273160:
    // 0x80273160: lwc1        $f0, 0x4C($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X4C);
    // 0x80273164: nop

    // 0x80273168: c.lt.s      $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f20.fl < ctx->f0.fl;
    // 0x8027316C: nop

    // 0x80273170: bc1f        L_80273184
    if (!c1cs) {
        // 0x80273174: nop
    
            goto L_80273184;
    }
    // 0x80273174: nop

    // 0x80273178: swc1        $f20, 0x4C($s0)
    MEM_W(0X4C, ctx->r16) = ctx->f20.u32l;
    // 0x8027317C: lwc1        $f0, 0x4C($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X4C);
    // 0x80273180: nop

L_80273184:
    // 0x80273184: c.lt.s      $f0, $f22
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 22);
    c1cs = ctx->f0.fl < ctx->f22.fl;
    // 0x80273188: nop

    // 0x8027318C: bc1f        L_80273198
    if (!c1cs) {
        // 0x80273190: nop
    
            goto L_80273198;
    }
    // 0x80273190: nop

    // 0x80273194: swc1        $f22, 0x4C($s0)
    MEM_W(0X4C, ctx->r16) = ctx->f22.u32l;
L_80273198:
    // 0x80273198: lwc1        $f0, 0x44($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X44);
    // 0x8027319C: nop

    // 0x802731A0: c.lt.s      $f24, $f0
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f24.fl < ctx->f0.fl;
    // 0x802731A4: nop

    // 0x802731A8: bc1f        L_802731BC
    if (!c1cs) {
        // 0x802731AC: nop
    
            goto L_802731BC;
    }
    // 0x802731AC: nop

    // 0x802731B0: swc1        $f24, 0x44($s0)
    MEM_W(0X44, ctx->r16) = ctx->f24.u32l;
    // 0x802731B4: lwc1        $f0, 0x44($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X44);
    // 0x802731B8: nop

L_802731BC:
    // 0x802731BC: c.lt.s      $f0, $f26
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 26);
    c1cs = ctx->f0.fl < ctx->f26.fl;
    // 0x802731C0: nop

    // 0x802731C4: bc1f        L_802731D0
    if (!c1cs) {
        // 0x802731C8: nop
    
            goto L_802731D0;
    }
    // 0x802731C8: nop

    // 0x802731CC: swc1        $f26, 0x44($s0)
    MEM_W(0X44, ctx->r16) = ctx->f26.u32l;
L_802731D0:
    // 0x802731D0: lhu         $t7, 0x14($s0)
    ctx->r15 = MEM_HU(ctx->r16, 0X14);
    // 0x802731D4: lwc1        $f0, 0x4C($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X4C);
    // 0x802731D8: andi        $t8, $t7, 0x400
    ctx->r24 = ctx->r15 & 0X400;
    // 0x802731DC: bne         $t8, $zero, L_80273244
    if (ctx->r24 != 0) {
        // 0x802731E0: nop
    
            goto L_80273244;
    }
    // 0x802731E0: nop

    // 0x802731E4: lhu         $t9, 0x12($s0)
    ctx->r25 = MEM_HU(ctx->r16, 0X12);
    // 0x802731E8: nop

    // 0x802731EC: andi        $t0, $t9, 0x40
    ctx->r8 = ctx->r25 & 0X40;
    // 0x802731F0: beq         $t0, $zero, L_80273244
    if (ctx->r8 == 0) {
        // 0x802731F4: nop
    
            goto L_80273244;
    }
    // 0x802731F4: nop

    // 0x802731F8: c.lt.s      $f30, $f0
    CHECK_FR(ctx, 30);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f30.fl < ctx->f0.fl;
    // 0x802731FC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80273200: bc1f        L_80273218
    if (!c1cs) {
        // 0x80273204: nop
    
            goto L_80273218;
    }
    // 0x80273204: nop

    // 0x80273208: jal         0x80272E88
    // 0x8027320C: or          $a1, $s5, $zero
    ctx->r5 = ctx->r21 | 0;
    ovl_8024B800_func_80272E88(rdram, ctx);
        goto after_1;
    // 0x8027320C: or          $a1, $s5, $zero
    ctx->r5 = ctx->r21 | 0;
    after_1:
    // 0x80273210: lwc1        $f0, 0x4C($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X4C);
    // 0x80273214: nop

L_80273218:
    // 0x80273218: lui         $at, 0x8028
    ctx->r1 = S32(0X8028 << 16);
    // 0x8027321C: lwc1        $f10, -0x1E5C($at)
    ctx->f10.u32l = MEM_W(ctx->r1, -0X1E5C);
    // 0x80273220: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80273224: c.lt.s      $f0, $f10
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f0.fl < ctx->f10.fl;
    // 0x80273228: nop

    // 0x8027322C: bc1f        L_80273244
    if (!c1cs) {
        // 0x80273230: nop
    
            goto L_80273244;
    }
    // 0x80273230: nop

    // 0x80273234: jal         0x80272E88
    // 0x80273238: or          $a1, $s6, $zero
    ctx->r5 = ctx->r22 | 0;
    ovl_8024B800_func_80272E88(rdram, ctx);
        goto after_2;
    // 0x80273238: or          $a1, $s6, $zero
    ctx->r5 = ctx->r22 | 0;
    after_2:
    // 0x8027323C: lwc1        $f0, 0x4C($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X4C);
    // 0x80273240: nop

L_80273244:
    // 0x80273244: lwc1        $f16, 0x44($s0)
    ctx->f16.u32l = MEM_W(ctx->r16, 0X44);
    // 0x80273248: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x8027324C: addiu       $s0, $s0, 0xF8
    ctx->r16 = ADD32(ctx->r16, 0XF8);
    // 0x80273250: swc1        $f0, -0x54($s0)
    MEM_W(-0X54, ctx->r16) = ctx->f0.u32l;
    // 0x80273254: bne         $s1, $s7, L_802730D4
    if (ctx->r17 != ctx->r23) {
        // 0x80273258: swc1        $f16, -0x50($s0)
        MEM_W(-0X50, ctx->r16) = ctx->f16.u32l;
            goto L_802730D4;
    }
    // 0x80273258: swc1        $f16, -0x50($s0)
    MEM_W(-0X50, ctx->r16) = ctx->f16.u32l;
    // 0x8027325C: lui         $t1, 0x8012
    ctx->r9 = S32(0X8012 << 16);
    // 0x80273260: addiu       $t1, $t1, -0x17C8
    ctx->r9 = ADD32(ctx->r9, -0X17C8);
    // 0x80273264: addiu       $fp, $fp, 0xA94
    ctx->r30 = ADD32(ctx->r30, 0XA94);
    // 0x80273268: bne         $fp, $t1, L_802730CC
    if (ctx->r30 != ctx->r9) {
        // 0x8027326C: nop
    
            goto L_802730CC;
    }
    // 0x8027326C: nop

L_80273270:
    // 0x80273270: lw          $ra, 0x74($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X74);
    // 0x80273274: lwc1        $f21, 0x20($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X20);
    // 0x80273278: lwc1        $f20, 0x24($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X24);
    // 0x8027327C: lwc1        $f23, 0x28($sp)
    ctx->f_odd[(23 - 1) * 2] = MEM_W(ctx->r29, 0X28);
    // 0x80273280: lwc1        $f22, 0x2C($sp)
    ctx->f22.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x80273284: lwc1        $f25, 0x30($sp)
    ctx->f_odd[(25 - 1) * 2] = MEM_W(ctx->r29, 0X30);
    // 0x80273288: lwc1        $f24, 0x34($sp)
    ctx->f24.u32l = MEM_W(ctx->r29, 0X34);
    // 0x8027328C: lwc1        $f27, 0x38($sp)
    ctx->f_odd[(27 - 1) * 2] = MEM_W(ctx->r29, 0X38);
    // 0x80273290: lwc1        $f26, 0x3C($sp)
    ctx->f26.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x80273294: lwc1        $f29, 0x40($sp)
    ctx->f_odd[(29 - 1) * 2] = MEM_W(ctx->r29, 0X40);
    // 0x80273298: lwc1        $f28, 0x44($sp)
    ctx->f28.u32l = MEM_W(ctx->r29, 0X44);
    // 0x8027329C: lwc1        $f31, 0x48($sp)
    ctx->f_odd[(31 - 1) * 2] = MEM_W(ctx->r29, 0X48);
    // 0x802732A0: lwc1        $f30, 0x4C($sp)
    ctx->f30.u32l = MEM_W(ctx->r29, 0X4C);
    // 0x802732A4: lw          $s0, 0x50($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X50);
    // 0x802732A8: lw          $s1, 0x54($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X54);
    // 0x802732AC: lw          $s2, 0x58($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X58);
    // 0x802732B0: lw          $s3, 0x5C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X5C);
    // 0x802732B4: lw          $s4, 0x60($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X60);
    // 0x802732B8: lw          $s5, 0x64($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X64);
    // 0x802732BC: lw          $s6, 0x68($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X68);
    // 0x802732C0: lw          $s7, 0x6C($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X6C);
    // 0x802732C4: lw          $fp, 0x70($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X70);
    // 0x802732C8: jr          $ra
    // 0x802732CC: addiu       $sp, $sp, 0x98
    ctx->r29 = ADD32(ctx->r29, 0X98);
    return;
    // 0x802732CC: addiu       $sp, $sp, 0x98
    ctx->r29 = ADD32(ctx->r29, 0X98);
;}
RECOMP_FUNC void ovl_8024B800_func_802732D0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802732D0: lw          $t6, 0xCC($a0)
    ctx->r14 = MEM_W(ctx->r4, 0XCC);
    // 0x802732D4: nop

    // 0x802732D8: lw          $v0, 0x30($t6)
    ctx->r2 = MEM_W(ctx->r14, 0X30);
    // 0x802732DC: nop

    // 0x802732E0: lhu         $t7, 0x2($v0)
    ctx->r15 = MEM_HU(ctx->r2, 0X2);
    // 0x802732E4: nop

    // 0x802732E8: ori         $t8, $t7, 0x8000
    ctx->r24 = ctx->r15 | 0X8000;
    // 0x802732EC: jr          $ra
    // 0x802732F0: sh          $t8, 0x2($v0)
    MEM_H(0X2, ctx->r2) = ctx->r24;
    return;
    // 0x802732F0: sh          $t8, 0x2($v0)
    MEM_H(0X2, ctx->r2) = ctx->r24;
;}
RECOMP_FUNC void ovl_8024B800_func_802732F4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802732F4: lw          $t6, 0xCC($a0)
    ctx->r14 = MEM_W(ctx->r4, 0XCC);
    // 0x802732F8: nop

    // 0x802732FC: lw          $v0, 0x30($t6)
    ctx->r2 = MEM_W(ctx->r14, 0X30);
    // 0x80273300: nop

    // 0x80273304: lhu         $t7, 0x2($v0)
    ctx->r15 = MEM_HU(ctx->r2, 0X2);
    // 0x80273308: nop

    // 0x8027330C: andi        $t8, $t7, 0x7FFF
    ctx->r24 = ctx->r15 & 0X7FFF;
    // 0x80273310: jr          $ra
    // 0x80273314: sh          $t8, 0x2($v0)
    MEM_H(0X2, ctx->r2) = ctx->r24;
    return;
    // 0x80273314: sh          $t8, 0x2($v0)
    MEM_H(0X2, ctx->r2) = ctx->r24;
;}
RECOMP_FUNC void ovl_8024B800_func_80273318(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80273318: lw          $t6, 0xCC($a0)
    ctx->r14 = MEM_W(ctx->r4, 0XCC);
    // 0x8027331C: nop

    // 0x80273320: lw          $v0, 0x30($t6)
    ctx->r2 = MEM_W(ctx->r14, 0X30);
    // 0x80273324: nop

    // 0x80273328: lhu         $t7, 0x2($v0)
    ctx->r15 = MEM_HU(ctx->r2, 0X2);
    // 0x8027332C: nop

    // 0x80273330: xori        $t8, $t7, 0x8000
    ctx->r24 = ctx->r15 ^ 0X8000;
    // 0x80273334: jr          $ra
    // 0x80273338: sh          $t8, 0x2($v0)
    MEM_H(0X2, ctx->r2) = ctx->r24;
    return;
    // 0x80273338: sh          $t8, 0x2($v0)
    MEM_H(0X2, ctx->r2) = ctx->r24;
;}
RECOMP_FUNC void ovl_8024B800_func_8027333C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8027333C: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x80273340: addiu       $v0, $v0, 0xB64
    ctx->r2 = ADD32(ctx->r2, 0XB64);
    // 0x80273344: sb          $zero, 0x0($v0)
    MEM_B(0X0, ctx->r2) = 0;
    // 0x80273348: lw          $t6, 0xCC($a0)
    ctx->r14 = MEM_W(ctx->r4, 0XCC);
    // 0x8027334C: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x80273350: lw          $t7, 0x30($t6)
    ctx->r15 = MEM_W(ctx->r14, 0X30);
    // 0x80273354: nop

    // 0x80273358: lhu         $t8, 0x2($t7)
    ctx->r24 = MEM_HU(ctx->r15, 0X2);
    // 0x8027335C: nop

    // 0x80273360: andi        $t9, $t8, 0x8000
    ctx->r25 = ctx->r24 & 0X8000;
    // 0x80273364: beq         $t9, $zero, L_80273370
    if (ctx->r25 == 0) {
        // 0x80273368: nop
    
            goto L_80273370;
    }
    // 0x80273368: nop

    // 0x8027336C: sb          $t0, 0x0($v0)
    MEM_B(0X0, ctx->r2) = ctx->r8;
L_80273370:
    // 0x80273370: jr          $ra
    // 0x80273374: nop

    return;
    // 0x80273374: nop

;}
RECOMP_FUNC void ovl_8024B800_func_80273378(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80273378: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8027337C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80273380: lhu         $v1, 0x12($a0)
    ctx->r3 = MEM_HU(ctx->r4, 0X12);
    // 0x80273384: ori         $a1, $zero, 0xFFFF
    ctx->r5 = 0 | 0XFFFF;
    // 0x80273388: andi        $t6, $v1, 0x80
    ctx->r14 = ctx->r3 & 0X80;
    // 0x8027338C: beq         $t6, $zero, L_8027339C
    if (ctx->r14 == 0) {
        // 0x80273390: andi        $t0, $v1, 0x3000
        ctx->r8 = ctx->r3 & 0X3000;
            goto L_8027339C;
    }
    // 0x80273390: andi        $t0, $v1, 0x3000
    ctx->r8 = ctx->r3 & 0X3000;
    // 0x80273394: b           L_802733C8
    // 0x80273398: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
        goto L_802733C8;
    // 0x80273398: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
L_8027339C:
    // 0x8027339C: cfc1        $t7, $FpcCsr
    ctx->r15 = get_cop1_cs();
    // 0x802733A0: lwc1        $f4, 0x50($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X50);
    // 0x802733A4: ori         $at, $t7, 0x3
    ctx->r1 = ctx->r15 | 0X3;
    // 0x802733A8: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x802733AC: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x802733B0: nop

    // 0x802733B4: cvt.w.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = CVT_W_S(ctx->f4.fl);
    // 0x802733B8: mfc1        $v0, $f6
    ctx->r2 = (int32_t)ctx->f6.u32l;
    // 0x802733BC: ctc1        $t7, $FpcCsr
    set_cop1_cs(ctx->r15);
    // 0x802733C0: sll         $t8, $v0, 16
    ctx->r24 = S32(ctx->r2 << 16);
    // 0x802733C4: sra         $v0, $t8, 16
    ctx->r2 = S32(SIGNED(ctx->r24) >> 16);
L_802733C8:
    // 0x802733C8: beq         $t0, $zero, L_802733E8
    if (ctx->r8 == 0) {
        // 0x802733CC: slti        $at, $v0, 0x2
        ctx->r1 = SIGNED(ctx->r2) < 0X2 ? 1 : 0;
            goto L_802733E8;
    }
    // 0x802733CC: slti        $at, $v0, 0x2
    ctx->r1 = SIGNED(ctx->r2) < 0X2 ? 1 : 0;
    // 0x802733D0: sll         $t1, $v0, 1
    ctx->r9 = S32(ctx->r2 << 1);
    // 0x802733D4: lui         $a1, 0x8028
    ctx->r5 = S32(0X8028 << 16);
    // 0x802733D8: addu        $a1, $a1, $t1
    ctx->r5 = ADD32(ctx->r5, ctx->r9);
    // 0x802733DC: lhu         $a1, -0x25D0($a1)
    ctx->r5 = MEM_HU(ctx->r5, -0X25D0);
    // 0x802733E0: b           L_80273408
    // 0x802733E4: ori         $at, $zero, 0xFFFF
    ctx->r1 = 0 | 0XFFFF;
        goto L_80273408;
    // 0x802733E4: ori         $at, $zero, 0xFFFF
    ctx->r1 = 0 | 0XFFFF;
L_802733E8:
    // 0x802733E8: bne         $at, $zero, L_80273408
    if (ctx->r1 != 0) {
        // 0x802733EC: ori         $at, $zero, 0xFFFF
        ctx->r1 = 0 | 0XFFFF;
            goto L_80273408;
    }
    // 0x802733EC: ori         $at, $zero, 0xFFFF
    ctx->r1 = 0 | 0XFFFF;
    // 0x802733F0: andi        $a1, $v0, 0xFFFF
    ctx->r5 = ctx->r2 & 0XFFFF;
    // 0x802733F4: jal         0x80273FB0
    // 0x802733F8: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    ovl_8024B800_func_80273FB0(rdram, ctx);
        goto after_0;
    // 0x802733F8: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x802733FC: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x80273400: andi        $a1, $v0, 0xFFFF
    ctx->r5 = ctx->r2 & 0XFFFF;
    // 0x80273404: ori         $at, $zero, 0xFFFF
    ctx->r1 = 0 | 0XFFFF;
L_80273408:
    // 0x80273408: beq         $a1, $at, L_8027341C
    if (ctx->r5 == ctx->r1) {
        // 0x8027340C: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_8027341C;
    }
    // 0x8027340C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80273410: jal         0x80272D3C
    // 0x80273414: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    ovl_8024B800_func_80272D3C(rdram, ctx);
        goto after_1;
    // 0x80273414: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_1:
    // 0x80273418: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8027341C:
    // 0x8027341C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80273420: jr          $ra
    // 0x80273424: nop

    return;
    // 0x80273424: nop

;}
RECOMP_FUNC void ovl_8024B800_func_80273428(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80273428: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8027342C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80273430: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x80273434: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x80273438: jal         0x802732F4
    // 0x8027343C: sw          $a2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r6;
    ovl_8024B800_func_802732F4(rdram, ctx);
        goto after_0;
    // 0x8027343C: sw          $a2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r6;
    after_0:
    // 0x80273440: lw          $t7, 0x24($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X24);
    // 0x80273444: lw          $t6, 0x28($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X28);
    // 0x80273448: sll         $t8, $t7, 1
    ctx->r24 = S32(ctx->r15 << 1);
    // 0x8027344C: addu        $t9, $t6, $t8
    ctx->r25 = ADD32(ctx->r14, ctx->r24);
    // 0x80273450: lhu         $v1, 0x8($t9)
    ctx->r3 = MEM_HU(ctx->r25, 0X8);
    // 0x80273454: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x80273458: andi        $t0, $v1, 0x8000
    ctx->r8 = ctx->r3 & 0X8000;
    // 0x8027345C: beq         $t0, $zero, L_80273474
    if (ctx->r8 == 0) {
        // 0x80273460: or          $a1, $v1, $zero
        ctx->r5 = ctx->r3 | 0;
            goto L_80273474;
    }
    // 0x80273460: or          $a1, $v1, $zero
    ctx->r5 = ctx->r3 | 0;
    // 0x80273464: jal         0x802732D0
    // 0x80273468: sw          $v1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r3;
    ovl_8024B800_func_802732D0(rdram, ctx);
        goto after_1;
    // 0x80273468: sw          $v1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r3;
    after_1:
    // 0x8027346C: lw          $a1, 0x18($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X18);
    // 0x80273470: nop

L_80273474:
    // 0x80273474: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80273478: andi        $v0, $a1, 0x7FFF
    ctx->r2 = ctx->r5 & 0X7FFF;
    // 0x8027347C: jr          $ra
    // 0x80273480: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x80273480: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void ovl_8024B800_func_80273484(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80273484: lhu         $t6, 0x12($a0)
    ctx->r14 = MEM_HU(ctx->r4, 0X12);
    // 0x80273488: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x8027348C: andi        $t7, $t6, 0x80
    ctx->r15 = ctx->r14 & 0X80;
    // 0x80273490: beq         $t7, $zero, L_802734A0
    if (ctx->r15 == 0) {
        // 0x80273494: nop
    
            goto L_802734A0;
    }
    // 0x80273494: nop

    // 0x80273498: b           L_80273528
    // 0x8027349C: addiu       $v1, $zero, 0x3
    ctx->r3 = ADD32(0, 0X3);
        goto L_80273528;
    // 0x8027349C: addiu       $v1, $zero, 0x3
    ctx->r3 = ADD32(0, 0X3);
L_802734A0:
    // 0x802734A0: cfc1        $t8, $FpcCsr
    ctx->r24 = get_cop1_cs();
    // 0x802734A4: ctc1        $v1, $FpcCsr
    set_cop1_cs(ctx->r3);
    // 0x802734A8: lwc1        $f4, 0x50($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X50);
    // 0x802734AC: lui         $at, 0x4F00
    ctx->r1 = S32(0X4F00 << 16);
    // 0x802734B0: cvt.w.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = CVT_W_S(ctx->f4.fl);
    // 0x802734B4: cfc1        $v1, $FpcCsr
    ctx->r3 = get_cop1_cs();
    // 0x802734B8: nop

    // 0x802734BC: andi        $v1, $v1, 0x78
    ctx->r3 = ctx->r3 & 0X78;
    // 0x802734C0: beq         $v1, $zero, L_8027350C
    if (ctx->r3 == 0) {
        // 0x802734C4: nop
    
            goto L_8027350C;
    }
    // 0x802734C4: nop

    // 0x802734C8: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x802734CC: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x802734D0: sub.s       $f6, $f4, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f6.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x802734D4: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x802734D8: ctc1        $v1, $FpcCsr
    set_cop1_cs(ctx->r3);
    // 0x802734DC: nop

    // 0x802734E0: cvt.w.s     $f6, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    ctx->f6.u32l = CVT_W_S(ctx->f6.fl);
    // 0x802734E4: cfc1        $v1, $FpcCsr
    ctx->r3 = get_cop1_cs();
    // 0x802734E8: nop

    // 0x802734EC: andi        $v1, $v1, 0x78
    ctx->r3 = ctx->r3 & 0X78;
    // 0x802734F0: bne         $v1, $zero, L_80273504
    if (ctx->r3 != 0) {
        // 0x802734F4: nop
    
            goto L_80273504;
    }
    // 0x802734F4: nop

    // 0x802734F8: mfc1        $v1, $f6
    ctx->r3 = (int32_t)ctx->f6.u32l;
    // 0x802734FC: b           L_8027351C
    // 0x80273500: or          $v1, $v1, $at
    ctx->r3 = ctx->r3 | ctx->r1;
        goto L_8027351C;
    // 0x80273500: or          $v1, $v1, $at
    ctx->r3 = ctx->r3 | ctx->r1;
L_80273504:
    // 0x80273504: b           L_8027351C
    // 0x80273508: addiu       $v1, $zero, -0x1
    ctx->r3 = ADD32(0, -0X1);
        goto L_8027351C;
    // 0x80273508: addiu       $v1, $zero, -0x1
    ctx->r3 = ADD32(0, -0X1);
L_8027350C:
    // 0x8027350C: mfc1        $v1, $f6
    ctx->r3 = (int32_t)ctx->f6.u32l;
    // 0x80273510: nop

    // 0x80273514: bltz        $v1, L_80273504
    if (SIGNED(ctx->r3) < 0) {
        // 0x80273518: nop
    
            goto L_80273504;
    }
    // 0x80273518: nop

L_8027351C:
    // 0x8027351C: ctc1        $t8, $FpcCsr
    set_cop1_cs(ctx->r24);
    // 0x80273520: nop

    // 0x80273524: nop

L_80273528:
    // 0x80273528: bne         $v1, $zero, L_80273564
    if (ctx->r3 != 0) {
        // 0x8027352C: lui         $at, 0x3FF0
        ctx->r1 = S32(0X3FF0 << 16);
            goto L_80273564;
    }
    // 0x8027352C: lui         $at, 0x3FF0
    ctx->r1 = S32(0X3FF0 << 16);
    // 0x80273530: lwc1        $f10, 0xAC($a0)
    ctx->f10.u32l = MEM_W(ctx->r4, 0XAC);
    // 0x80273534: mtc1        $at, $f9
    ctx->f_odd[(9 - 1) * 2] = ctx->r1;
    // 0x80273538: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x8027353C: cvt.d.s     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.fl); 
    ctx->f16.d = CVT_D_S(ctx->f10.fl);
    // 0x80273540: c.lt.d      $f8, $f16
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f8.d < ctx->f16.d;
    // 0x80273544: nop

    // 0x80273548: bc1t        L_80273560
    if (c1cs) {
        // 0x8027354C: nop
    
            goto L_80273560;
    }
    // 0x8027354C: nop

    // 0x80273550: lbu         $t9, 0x0($a0)
    ctx->r25 = MEM_BU(ctx->r4, 0X0);
    // 0x80273554: addiu       $at, $zero, 0x39
    ctx->r1 = ADD32(0, 0X39);
    // 0x80273558: bne         $t9, $at, L_80273564
    if (ctx->r25 != ctx->r1) {
        // 0x8027355C: nop
    
            goto L_80273564;
    }
    // 0x8027355C: nop

L_80273560:
    // 0x80273560: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
L_80273564:
    // 0x80273564: jr          $ra
    // 0x80273568: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    return;
    // 0x80273568: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
;}
RECOMP_FUNC void ovl_8024B800_func_8027356C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8027356C: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x80273570: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x80273574: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80273578: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8027357C: sw          $a2, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r6;
    // 0x80273580: lui         $t7, 0x8012
    ctx->r15 = S32(0X8012 << 16);
    // 0x80273584: swc1        $f4, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->f4.u32l;
    // 0x80273588: lhu         $t7, 0xB78($t7)
    ctx->r15 = MEM_HU(ctx->r15, 0XB78);
    // 0x8027358C: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x80273590: slti        $at, $t7, 0x8
    ctx->r1 = SIGNED(ctx->r15) < 0X8 ? 1 : 0;
    // 0x80273594: beq         $at, $zero, L_802735D8
    if (ctx->r1 == 0) {
        // 0x80273598: nop
    
            goto L_802735D8;
    }
    // 0x80273598: nop

    // 0x8027359C: lhu         $t8, 0x1A($a0)
    ctx->r24 = MEM_HU(ctx->r4, 0X1A);
    // 0x802735A0: nop

    // 0x802735A4: slti        $at, $t8, 0xB
    ctx->r1 = SIGNED(ctx->r24) < 0XB ? 1 : 0;
    // 0x802735A8: beq         $at, $zero, L_802735D8
    if (ctx->r1 == 0) {
        // 0x802735AC: nop
    
            goto L_802735D8;
    }
    // 0x802735AC: nop

    // 0x802735B0: lhu         $t9, 0x14($a0)
    ctx->r25 = MEM_HU(ctx->r4, 0X14);
    // 0x802735B4: lui         $t1, 0x8012
    ctx->r9 = S32(0X8012 << 16);
    // 0x802735B8: andi        $t0, $t9, 0x400
    ctx->r8 = ctx->r25 & 0X400;
    // 0x802735BC: bne         $t0, $zero, L_802735D8
    if (ctx->r8 != 0) {
        // 0x802735C0: nop
    
            goto L_802735D8;
    }
    // 0x802735C0: nop

    // 0x802735C4: lhu         $t1, 0xB7E($t1)
    ctx->r9 = MEM_HU(ctx->r9, 0XB7E);
    // 0x802735C8: nop

    // 0x802735CC: andi        $t2, $t1, 0x8
    ctx->r10 = ctx->r9 & 0X8;
    // 0x802735D0: beq         $t2, $zero, L_802735E0
    if (ctx->r10 == 0) {
        // 0x802735D4: nop
    
            goto L_802735E0;
    }
    // 0x802735D4: nop

L_802735D8:
    // 0x802735D8: b           L_80273790
    // 0x802735DC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_80273790;
    // 0x802735DC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_802735E0:
    // 0x802735E0: lwc1        $f12, 0x88($s0)
    ctx->f12.u32l = MEM_W(ctx->r16, 0X88);
    // 0x802735E4: lwc1        $f14, 0xB0($s0)
    ctx->f14.u32l = MEM_W(ctx->r16, 0XB0);
    // 0x802735E8: jal         0x8027924C
    // 0x802735EC: sw          $a1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r5;
    ovl_8024B800_func_8027924C(rdram, ctx);
        goto after_0;
    // 0x802735EC: sw          $a1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r5;
    after_0:
    // 0x802735F0: lw          $t3, 0x40($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X40);
    // 0x802735F4: mov.s       $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    ctx->f12.fl = ctx->f0.fl;
    // 0x802735F8: jal         0x80272AEC
    // 0x802735FC: swc1        $f0, 0x0($t3)
    MEM_W(0X0, ctx->r11) = ctx->f0.u32l;
    ovl_8024B800_func_80272AEC(rdram, ctx);
        goto after_1;
    // 0x802735FC: swc1        $f0, 0x0($t3)
    MEM_W(0X0, ctx->r11) = ctx->f0.u32l;
    after_1:
    // 0x80273600: lw          $a1, 0x3C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X3C);
    // 0x80273604: nop

    // 0x80273608: sltiu       $at, $a1, 0x2
    ctx->r1 = ctx->r5 < 0X2 ? 1 : 0;
    // 0x8027360C: beq         $at, $zero, L_80273638
    if (ctx->r1 == 0) {
        // 0x80273610: lui         $at, 0x8028
        ctx->r1 = S32(0X8028 << 16);
            goto L_80273638;
    }
    // 0x80273610: lui         $at, 0x8028
    ctx->r1 = S32(0X8028 << 16);
    // 0x80273614: lwc1        $f9, -0x1E58($at)
    ctx->f_odd[(9 - 1) * 2] = MEM_W(ctx->r1, -0X1E58);
    // 0x80273618: lwc1        $f8, -0x1E54($at)
    ctx->f8.u32l = MEM_W(ctx->r1, -0X1E54);
    // 0x8027361C: cvt.d.s     $f6, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f6.d = CVT_D_S(ctx->f0.fl);
    // 0x80273620: c.lt.d      $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f6.d < ctx->f8.d;
    // 0x80273624: nop

    // 0x80273628: bc1f        L_80273638
    if (!c1cs) {
        // 0x8027362C: nop
    
            goto L_80273638;
    }
    // 0x8027362C: nop

    // 0x80273630: b           L_80273790
    // 0x80273634: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_80273790;
    // 0x80273634: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_80273638:
    // 0x80273638: beq         $a1, $zero, L_8027378C
    if (ctx->r5 == 0) {
        // 0x8027363C: sltiu       $at, $a1, 0x3
        ctx->r1 = ctx->r5 < 0X3 ? 1 : 0;
            goto L_8027378C;
    }
    // 0x8027363C: sltiu       $at, $a1, 0x3
    ctx->r1 = ctx->r5 < 0X3 ? 1 : 0;
    // 0x80273640: beq         $at, $zero, L_8027378C
    if (ctx->r1 == 0) {
        // 0x80273644: lui         $t4, 0x8009
        ctx->r12 = S32(0X8009 << 16);
            goto L_8027378C;
    }
    // 0x80273644: lui         $t4, 0x8009
    ctx->r12 = S32(0X8009 << 16);
    // 0x80273648: lw          $t4, 0x3B20($t4)
    ctx->r12 = MEM_W(ctx->r12, 0X3B20);
    // 0x8027364C: lui         $at, 0x8028
    ctx->r1 = S32(0X8028 << 16);
    // 0x80273650: lw          $t5, 0x88($t4)
    ctx->r13 = MEM_W(ctx->r12, 0X88);
    // 0x80273654: nop

    // 0x80273658: bne         $s0, $t5, L_8027374C
    if (ctx->r16 != ctx->r13) {
        // 0x8027365C: nop
    
            goto L_8027374C;
    }
    // 0x8027365C: nop

    // 0x80273660: jal         0x80271F6C
    // 0x80273664: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_8024B800_func_80271F6C(rdram, ctx);
        goto after_2;
    // 0x80273664: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_2:
    // 0x80273668: bne         $v0, $zero, L_80273790
    if (ctx->r2 != 0) {
        // 0x8027366C: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_80273790;
    }
    // 0x8027366C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x80273670: lwc1        $f12, 0x44($s0)
    ctx->f12.u32l = MEM_W(ctx->r16, 0X44);
    // 0x80273674: jal         0x80272AEC
    // 0x80273678: nop

    ovl_8024B800_func_80272AEC(rdram, ctx);
        goto after_3;
    // 0x80273678: nop

    after_3:
    // 0x8027367C: lui         $at, 0x437A
    ctx->r1 = S32(0X437A << 16);
    // 0x80273680: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x80273684: lui         $at, 0x43AF
    ctx->r1 = S32(0X43AF << 16);
    // 0x80273688: c.lt.s      $f10, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f10.fl < ctx->f0.fl;
    // 0x8027368C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80273690: bc1f        L_8027378C
    if (!c1cs) {
        // 0x80273694: addiu       $a2, $zero, 0x0
        ctx->r6 = ADD32(0, 0X0);
            goto L_8027378C;
    }
    // 0x80273694: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x80273698: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    // 0x8027369C: lwc1        $f0, 0x4C($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X4C);
    // 0x802736A0: lui         $at, 0xC3AF
    ctx->r1 = S32(0XC3AF << 16);
    // 0x802736A4: c.lt.s      $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f2.fl < ctx->f0.fl;
    // 0x802736A8: nop

    // 0x802736AC: bc1f        L_802736B8
    if (!c1cs) {
        // 0x802736B0: nop
    
            goto L_802736B8;
    }
    // 0x802736B0: nop

    // 0x802736B4: mov.s       $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    ctx->f0.fl = ctx->f2.fl;
L_802736B8:
    // 0x802736B8: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    // 0x802736BC: nop

    // 0x802736C0: c.lt.s      $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f0.fl < ctx->f2.fl;
    // 0x802736C4: nop

    // 0x802736C8: bc1f        L_802736D4
    if (!c1cs) {
        // 0x802736CC: nop
    
            goto L_802736D4;
    }
    // 0x802736CC: nop

    // 0x802736D0: mov.s       $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    ctx->f0.fl = ctx->f2.fl;
L_802736D4:
    // 0x802736D4: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x802736D8: jal         0x80272B98
    // 0x802736DC: addiu       $a3, $sp, 0x28
    ctx->r7 = ADD32(ctx->r29, 0X28);
    ovl_8024B800_func_80272B98(rdram, ctx);
        goto after_4;
    // 0x802736DC: addiu       $a3, $sp, 0x28
    ctx->r7 = ADD32(ctx->r29, 0X28);
    after_4:
    // 0x802736E0: lwc1        $f12, 0xB0($s0)
    ctx->f12.u32l = MEM_W(ctx->r16, 0XB0);
    // 0x802736E4: lwc1        $f14, 0x28($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X28);
    // 0x802736E8: jal         0x8027924C
    // 0x802736EC: nop

    ovl_8024B800_func_8027924C(rdram, ctx);
        goto after_5;
    // 0x802736EC: nop

    after_5:
    // 0x802736F0: lw          $t6, 0x40($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X40);
    // 0x802736F4: mov.s       $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    ctx->f12.fl = ctx->f0.fl;
    // 0x802736F8: jal         0x80272AEC
    // 0x802736FC: swc1        $f0, 0x0($t6)
    MEM_W(0X0, ctx->r14) = ctx->f0.u32l;
    ovl_8024B800_func_80272AEC(rdram, ctx);
        goto after_6;
    // 0x802736FC: swc1        $f0, 0x0($t6)
    MEM_W(0X0, ctx->r14) = ctx->f0.u32l;
    after_6:
    // 0x80273700: lui         $at, 0x8028
    ctx->r1 = S32(0X8028 << 16);
    // 0x80273704: lwc1        $f17, -0x1E50($at)
    ctx->f_odd[(17 - 1) * 2] = MEM_W(ctx->r1, -0X1E50);
    // 0x80273708: lwc1        $f16, -0x1E4C($at)
    ctx->f16.u32l = MEM_W(ctx->r1, -0X1E4C);
    // 0x8027370C: cvt.d.s     $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f2.d = CVT_D_S(ctx->f0.fl);
    // 0x80273710: c.lt.d      $f2, $f16
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f2.d < ctx->f16.d;
    // 0x80273714: lui         $at, 0x8028
    ctx->r1 = S32(0X8028 << 16);
    // 0x80273718: bc1f        L_80273744
    if (!c1cs) {
        // 0x8027371C: nop
    
            goto L_80273744;
    }
    // 0x8027371C: nop

    // 0x80273720: lwc1        $f19, -0x1E48($at)
    ctx->f_odd[(19 - 1) * 2] = MEM_W(ctx->r1, -0X1E48);
    // 0x80273724: lwc1        $f18, -0x1E44($at)
    ctx->f18.u32l = MEM_W(ctx->r1, -0X1E44);
    // 0x80273728: nop

    // 0x8027372C: c.lt.d      $f18, $f2
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f18.d < ctx->f2.d;
    // 0x80273730: nop

    // 0x80273734: bc1f        L_80273744
    if (!c1cs) {
        // 0x80273738: nop
    
            goto L_80273744;
    }
    // 0x80273738: nop

    // 0x8027373C: b           L_80273790
    // 0x80273740: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
        goto L_80273790;
    // 0x80273740: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
L_80273744:
    // 0x80273744: b           L_80273790
    // 0x80273748: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
        goto L_80273790;
    // 0x80273748: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
L_8027374C:
    // 0x8027374C: lwc1        $f5, -0x1E40($at)
    ctx->f_odd[(5 - 1) * 2] = MEM_W(ctx->r1, -0X1E40);
    // 0x80273750: lwc1        $f4, -0x1E3C($at)
    ctx->f4.u32l = MEM_W(ctx->r1, -0X1E3C);
    // 0x80273754: cvt.d.s     $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f2.d = CVT_D_S(ctx->f0.fl);
    // 0x80273758: c.lt.d      $f2, $f4
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f2.d < ctx->f4.d;
    // 0x8027375C: lui         $at, 0x8028
    ctx->r1 = S32(0X8028 << 16);
    // 0x80273760: bc1f        L_80273790
    if (!c1cs) {
        // 0x80273764: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_80273790;
    }
    // 0x80273764: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x80273768: lwc1        $f7, -0x1E38($at)
    ctx->f_odd[(7 - 1) * 2] = MEM_W(ctx->r1, -0X1E38);
    // 0x8027376C: lwc1        $f6, -0x1E34($at)
    ctx->f6.u32l = MEM_W(ctx->r1, -0X1E34);
    // 0x80273770: nop

    // 0x80273774: c.lt.d      $f6, $f2
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f6.d < ctx->f2.d;
    // 0x80273778: nop

    // 0x8027377C: bc1f        L_80273790
    if (!c1cs) {
        // 0x80273780: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_80273790;
    }
    // 0x80273780: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x80273784: b           L_80273790
    // 0x80273788: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
        goto L_80273790;
    // 0x80273788: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
L_8027378C:
    // 0x8027378C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_80273790:
    // 0x80273790: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80273794: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80273798: jr          $ra
    // 0x8027379C: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    return;
    // 0x8027379C: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void ovl_8024B800_func_8027374C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8027374C: lwc1        $f5, -0x1E40($at)
    ctx->f_odd[(5 - 1) * 2] = MEM_W(ctx->r1, -0X1E40);
    // 0x80273750: lwc1        $f4, -0x1E3C($at)
    ctx->f4.u32l = MEM_W(ctx->r1, -0X1E3C);
    // 0x80273754: cvt.d.s     $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f2.d = CVT_D_S(ctx->f0.fl);
    // 0x80273758: c.lt.d      $f2, $f4
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f2.d < ctx->f4.d;
    // 0x8027375C: lui         $at, 0x8028
    ctx->r1 = S32(0X8028 << 16);
    // 0x80273760: bc1f        L_80273790
    if (!c1cs) {
        // 0x80273764: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_80273790;
    }
    // 0x80273764: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x80273768: lwc1        $f7, -0x1E38($at)
    ctx->f_odd[(7 - 1) * 2] = MEM_W(ctx->r1, -0X1E38);
    // 0x8027376C: lwc1        $f6, -0x1E34($at)
    ctx->f6.u32l = MEM_W(ctx->r1, -0X1E34);
    // 0x80273770: nop

    // 0x80273774: c.lt.d      $f6, $f2
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f6.d < ctx->f2.d;
    // 0x80273778: nop

    // 0x8027377C: bc1f        L_80273790
    if (!c1cs) {
        // 0x80273780: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_80273790;
    }
    // 0x80273780: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x80273784: b           L_80273790
    // 0x80273788: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
        goto L_80273790;
    // 0x80273788: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x8027378C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_80273790:
    // 0x80273790: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80273794: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80273798: jr          $ra
    // 0x8027379C: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    return;
    // 0x8027379C: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void ovl_8024B800_func_802737A0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802737A0: addiu       $sp, $sp, -0x58
    ctx->r29 = ADD32(ctx->r29, -0X58);
    // 0x802737A4: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x802737A8: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x802737AC: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x802737B0: lw          $s0, 0xDC($a0)
    ctx->r16 = MEM_W(ctx->r4, 0XDC);
    // 0x802737B4: or          $s1, $a0, $zero
    ctx->r17 = ctx->r4 | 0;
    // 0x802737B8: beq         $s0, $zero, L_80273A7C
    if (ctx->r16 == 0) {
        // 0x802737BC: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_80273A7C;
    }
    // 0x802737BC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x802737C0: lhu         $v0, 0x12($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X12);
    // 0x802737C4: nop

    // 0x802737C8: andi        $t6, $v0, 0x10
    ctx->r14 = ctx->r2 & 0X10;
    // 0x802737CC: bne         $t6, $zero, L_80273A7C
    if (ctx->r14 != 0) {
        // 0x802737D0: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_80273A7C;
    }
    // 0x802737D0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x802737D4: lhu         $t7, 0x14($s0)
    ctx->r15 = MEM_HU(ctx->r16, 0X14);
    // 0x802737D8: nop

    // 0x802737DC: andi        $t8, $t7, 0x400
    ctx->r24 = ctx->r15 & 0X400;
    // 0x802737E0: bne         $t8, $zero, L_80273A7C
    if (ctx->r24 != 0) {
        // 0x802737E4: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_80273A7C;
    }
    // 0x802737E4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x802737E8: lhu         $t9, 0x18($s0)
    ctx->r25 = MEM_HU(ctx->r16, 0X18);
    // 0x802737EC: nop

    // 0x802737F0: andi        $t0, $t9, 0x2
    ctx->r8 = ctx->r25 & 0X2;
    // 0x802737F4: bne         $t0, $zero, L_80273A7C
    if (ctx->r8 != 0) {
        // 0x802737F8: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_80273A7C;
    }
    // 0x802737F8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x802737FC: lhu         $t1, 0x16($s0)
    ctx->r9 = MEM_HU(ctx->r16, 0X16);
    // 0x80273800: andi        $t6, $v0, 0x1
    ctx->r14 = ctx->r2 & 0X1;
    // 0x80273804: andi        $t2, $t1, 0x40
    ctx->r10 = ctx->r9 & 0X40;
    // 0x80273808: bne         $t2, $zero, L_80273A78
    if (ctx->r10 != 0) {
        // 0x8027380C: lui         $at, 0x3F80
        ctx->r1 = S32(0X3F80 << 16);
            goto L_80273A78;
    }
    // 0x8027380C: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x80273810: lhu         $t3, 0x12($a0)
    ctx->r11 = MEM_HU(ctx->r4, 0X12);
    // 0x80273814: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80273818: andi        $t4, $t3, 0x1
    ctx->r12 = ctx->r11 & 0X1;
    // 0x8027381C: beq         $t4, $zero, L_80273838
    if (ctx->r12 == 0) {
        // 0x80273820: or          $v1, $zero, $zero
        ctx->r3 = 0 | 0;
            goto L_80273838;
    }
    // 0x80273820: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x80273824: lw          $t5, 0xC4($a0)
    ctx->r13 = MEM_W(ctx->r4, 0XC4);
    // 0x80273828: nop

    // 0x8027382C: lh          $v1, 0x1A($t5)
    ctx->r3 = MEM_H(ctx->r13, 0X1A);
    // 0x80273830: b           L_80273838
    // 0x80273834: nop

        goto L_80273838;
    // 0x80273834: nop

L_80273838:
    // 0x80273838: beq         $t6, $zero, L_80273854
    if (ctx->r14 == 0) {
        // 0x8027383C: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_80273854;
    }
    // 0x8027383C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x80273840: lw          $t7, 0xC4($s0)
    ctx->r15 = MEM_W(ctx->r16, 0XC4);
    // 0x80273844: nop

    // 0x80273848: lh          $v0, 0x1A($t7)
    ctx->r2 = MEM_H(ctx->r15, 0X1A);
    // 0x8027384C: b           L_80273854
    // 0x80273850: nop

        goto L_80273854;
    // 0x80273850: nop

L_80273854:
    // 0x80273854: bne         $v1, $zero, L_80273918
    if (ctx->r3 != 0) {
        // 0x80273858: swc1        $f4, 0x38($sp)
        MEM_W(0X38, ctx->r29) = ctx->f4.u32l;
            goto L_80273918;
    }
    // 0x80273858: swc1        $f4, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f4.u32l;
    // 0x8027385C: bne         $v0, $zero, L_80273918
    if (ctx->r2 != 0) {
        // 0x80273860: lui         $t8, 0x8009
        ctx->r24 = S32(0X8009 << 16);
            goto L_80273918;
    }
    // 0x80273860: lui         $t8, 0x8009
    ctx->r24 = S32(0X8009 << 16);
    // 0x80273864: lw          $t8, 0x3B20($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X3B20);
    // 0x80273868: nop

    // 0x8027386C: lw          $t9, 0x88($t8)
    ctx->r25 = MEM_W(ctx->r24, 0X88);
    // 0x80273870: nop

    // 0x80273874: bne         $s1, $t9, L_802738C8
    if (ctx->r17 != ctx->r25) {
        // 0x80273878: nop
    
            goto L_802738C8;
    }
    // 0x80273878: nop

    // 0x8027387C: lw          $t0, 0xD8($s1)
    ctx->r8 = MEM_W(ctx->r17, 0XD8);
    // 0x80273880: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x80273884: lbu         $a1, 0x7($t0)
    ctx->r5 = MEM_BU(ctx->r8, 0X7);
    // 0x80273888: jal         0x80275318
    // 0x8027388C: nop

    ovl_8024B800_func_80275318(rdram, ctx);
        goto after_0;
    // 0x8027388C: nop

    after_0:
    // 0x80273890: swc1        $f0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f0.u32l;
    // 0x80273894: lw          $t1, 0xD8($s0)
    ctx->r9 = MEM_W(ctx->r16, 0XD8);
    // 0x80273898: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8027389C: lbu         $a1, 0x8($t1)
    ctx->r5 = MEM_BU(ctx->r9, 0X8);
    // 0x802738A0: jal         0x80275318
    // 0x802738A4: nop

    ovl_8024B800_func_80275318(rdram, ctx);
        goto after_1;
    // 0x802738A4: nop

    after_1:
    // 0x802738A8: lwc1        $f6, 0x34($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X34);
    // 0x802738AC: nop

    // 0x802738B0: c.le.s      $f6, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f6.fl <= ctx->f0.fl;
    // 0x802738B4: nop

    // 0x802738B8: bc1f        L_80273908
    if (!c1cs) {
        // 0x802738BC: nop
    
            goto L_80273908;
    }
    // 0x802738BC: nop

    // 0x802738C0: b           L_80273A7C
    // 0x802738C4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_80273A7C;
    // 0x802738C4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_802738C8:
    // 0x802738C8: lw          $t2, 0xD8($s1)
    ctx->r10 = MEM_W(ctx->r17, 0XD8);
    // 0x802738CC: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x802738D0: lbu         $a1, 0x11($t2)
    ctx->r5 = MEM_BU(ctx->r10, 0X11);
    // 0x802738D4: jal         0x80275318
    // 0x802738D8: nop

    ovl_8024B800_func_80275318(rdram, ctx);
        goto after_2;
    // 0x802738D8: nop

    after_2:
    // 0x802738DC: swc1        $f0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f0.u32l;
    // 0x802738E0: lw          $t3, 0xD8($s0)
    ctx->r11 = MEM_W(ctx->r16, 0XD8);
    // 0x802738E4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802738E8: lbu         $a1, 0x11($t3)
    ctx->r5 = MEM_BU(ctx->r11, 0X11);
    // 0x802738EC: jal         0x80275318
    // 0x802738F0: nop

    ovl_8024B800_func_80275318(rdram, ctx);
        goto after_3;
    // 0x802738F0: nop

    after_3:
    // 0x802738F4: lwc1        $f8, 0x34($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X34);
    // 0x802738F8: nop

    // 0x802738FC: c.le.s      $f8, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f8.fl <= ctx->f0.fl;
    // 0x80273900: nop

    // 0x80273904: bc1t        L_80273A78
    if (c1cs) {
        // 0x80273908: lui         $at, 0x8028
        ctx->r1 = S32(0X8028 << 16);
            goto L_80273A78;
    }
L_80273908:
    // 0x80273908: lui         $at, 0x8028
    ctx->r1 = S32(0X8028 << 16);
    // 0x8027390C: lwc1        $f10, -0x1E30($at)
    ctx->f10.u32l = MEM_W(ctx->r1, -0X1E30);
    // 0x80273910: b           L_80273924
    // 0x80273914: swc1        $f10, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f10.u32l;
        goto L_80273924;
    // 0x80273914: swc1        $f10, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f10.u32l;
L_80273918:
    // 0x80273918: sltu        $at, $v0, $v1
    ctx->r1 = ctx->r2 < ctx->r3 ? 1 : 0;
    // 0x8027391C: beq         $at, $zero, L_80273A7C
    if (ctx->r1 == 0) {
        // 0x80273920: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_80273A7C;
    }
    // 0x80273920: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_80273924:
    // 0x80273924: lw          $a1, 0x4C($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X4C);
    // 0x80273928: lw          $a2, 0x44($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X44);
    // 0x8027392C: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x80273930: jal         0x80272B98
    // 0x80273934: addiu       $a3, $sp, 0x44
    ctx->r7 = ADD32(ctx->r29, 0X44);
    ovl_8024B800_func_80272B98(rdram, ctx);
        goto after_4;
    // 0x80273934: addiu       $a3, $sp, 0x44
    ctx->r7 = ADD32(ctx->r29, 0X44);
    after_4:
    // 0x80273938: lwc1        $f16, 0x48($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X48);
    // 0x8027393C: lui         $at, 0x402A
    ctx->r1 = S32(0X402A << 16);
    // 0x80273940: mtc1        $at, $f5
    ctx->f_odd[(5 - 1) * 2] = ctx->r1;
    // 0x80273944: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x80273948: cvt.d.s     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); 
    ctx->f18.d = CVT_D_S(ctx->f16.fl);
    // 0x8027394C: c.lt.d      $f18, $f4
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f18.d < ctx->f4.d;
    // 0x80273950: lwc1        $f14, 0x44($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X44);
    // 0x80273954: bc1f        L_80273A7C
    if (!c1cs) {
        // 0x80273958: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_80273A7C;
    }
    // 0x80273958: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8027395C: lwc1        $f12, 0xB0($s1)
    ctx->f12.u32l = MEM_W(ctx->r17, 0XB0);
    // 0x80273960: jal         0x8027924C
    // 0x80273964: nop

    ovl_8024B800_func_8027924C(rdram, ctx);
        goto after_5;
    // 0x80273964: nop

    after_5:
    // 0x80273968: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x8027396C: lui         $at, 0x8028
    ctx->r1 = S32(0X8028 << 16);
    // 0x80273970: c.lt.s      $f6, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f6.fl < ctx->f0.fl;
    // 0x80273974: nop

    // 0x80273978: bc1f        L_80273994
    if (!c1cs) {
        // 0x8027397C: nop
    
            goto L_80273994;
    }
    // 0x8027397C: nop

    // 0x80273980: lui         $at, 0x8028
    ctx->r1 = S32(0X8028 << 16);
    // 0x80273984: lwc1        $f1, -0x1E28($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, -0X1E28);
    // 0x80273988: lwc1        $f0, -0x1E24($at)
    ctx->f0.u32l = MEM_W(ctx->r1, -0X1E24);
    // 0x8027398C: b           L_802739A4
    // 0x80273990: lwc1        $f12, 0xB0($s1)
    ctx->f12.u32l = MEM_W(ctx->r17, 0XB0);
        goto L_802739A4;
    // 0x80273990: lwc1        $f12, 0xB0($s1)
    ctx->f12.u32l = MEM_W(ctx->r17, 0XB0);
L_80273994:
    // 0x80273994: lwc1        $f1, -0x1E20($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, -0X1E20);
    // 0x80273998: lwc1        $f0, -0x1E1C($at)
    ctx->f0.u32l = MEM_W(ctx->r1, -0X1E1C);
    // 0x8027399C: nop

    // 0x802739A0: lwc1        $f12, 0xB0($s1)
    ctx->f12.u32l = MEM_W(ctx->r17, 0XB0);
L_802739A4:
    // 0x802739A4: nop

    // 0x802739A8: cvt.d.s     $f8, $f12
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); 
    ctx->f8.d = CVT_D_S(ctx->f12.fl);
    // 0x802739AC: add.d       $f10, $f0, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f0.d); NAN_CHECK(ctx->f8.d); 
    ctx->f10.d = ctx->f0.d + ctx->f8.d;
    // 0x802739B0: cvt.s.d     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f16.fl = CVT_S_D(ctx->f10.d);
    // 0x802739B4: jal         0x80081040
    // 0x802739B8: swc1        $f16, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f16.u32l;
    func_80081040(rdram, ctx);
        goto after_6;
    // 0x802739B8: swc1        $f16, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f16.u32l;
    after_6:
    // 0x802739BC: lwc1        $f4, 0x38($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X38);
    // 0x802739C0: lwc1        $f18, 0x4C($s1)
    ctx->f18.u32l = MEM_W(ctx->r17, 0X4C);
    // 0x802739C4: mul.s       $f6, $f4, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = MUL_S(ctx->f4.fl, ctx->f0.fl);
    // 0x802739C8: lwc1        $f12, 0xB0($s1)
    ctx->f12.u32l = MEM_W(ctx->r17, 0XB0);
    // 0x802739CC: add.s       $f8, $f18, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f18.fl + ctx->f6.fl;
    // 0x802739D0: jal         0x80080E80
    // 0x802739D4: swc1        $f8, 0x4C($s1)
    MEM_W(0X4C, ctx->r17) = ctx->f8.u32l;
    func_80080E80(rdram, ctx);
        goto after_7;
    // 0x802739D4: swc1        $f8, 0x4C($s1)
    MEM_W(0X4C, ctx->r17) = ctx->f8.u32l;
    after_7:
    // 0x802739D8: lwc1        $f16, 0x38($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X38);
    // 0x802739DC: lwc1        $f10, 0x44($s1)
    ctx->f10.u32l = MEM_W(ctx->r17, 0X44);
    // 0x802739E0: mul.s       $f4, $f16, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = MUL_S(ctx->f16.fl, ctx->f0.fl);
    // 0x802739E4: add.s       $f18, $f10, $f4
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f18.fl = ctx->f10.fl + ctx->f4.fl;
    // 0x802739E8: swc1        $f18, 0x44($s1)
    MEM_W(0X44, ctx->r17) = ctx->f18.u32l;
    // 0x802739EC: lhu         $t4, 0x12($s0)
    ctx->r12 = MEM_HU(ctx->r16, 0X12);
    // 0x802739F0: nop

    // 0x802739F4: andi        $t5, $t4, 0x10
    ctx->r13 = ctx->r12 & 0X10;
    // 0x802739F8: bne         $t5, $zero, L_80273A7C
    if (ctx->r13 != 0) {
        // 0x802739FC: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_80273A7C;
    }
    // 0x802739FC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80273A00: lhu         $t6, 0x14($s0)
    ctx->r14 = MEM_HU(ctx->r16, 0X14);
    // 0x80273A04: nop

    // 0x80273A08: andi        $t7, $t6, 0x400
    ctx->r15 = ctx->r14 & 0X400;
    // 0x80273A0C: bne         $t7, $zero, L_80273A7C
    if (ctx->r15 != 0) {
        // 0x80273A10: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_80273A7C;
    }
    // 0x80273A10: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80273A14: lhu         $t8, 0x18($s0)
    ctx->r24 = MEM_HU(ctx->r16, 0X18);
    // 0x80273A18: nop

    // 0x80273A1C: andi        $t9, $t8, 0x2
    ctx->r25 = ctx->r24 & 0X2;
    // 0x80273A20: bne         $t9, $zero, L_80273A7C
    if (ctx->r25 != 0) {
        // 0x80273A24: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_80273A7C;
    }
    // 0x80273A24: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80273A28: lhu         $t0, 0x16($s0)
    ctx->r8 = MEM_HU(ctx->r16, 0X16);
    // 0x80273A2C: lwc1        $f12, 0x3C($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x80273A30: andi        $t1, $t0, 0x40
    ctx->r9 = ctx->r8 & 0X40;
    // 0x80273A34: bne         $t1, $zero, L_80273A7C
    if (ctx->r9 != 0) {
        // 0x80273A38: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_80273A7C;
    }
    // 0x80273A38: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80273A3C: jal         0x80081040
    // 0x80273A40: nop

    func_80081040(rdram, ctx);
        goto after_8;
    // 0x80273A40: nop

    after_8:
    // 0x80273A44: lwc1        $f8, 0x38($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X38);
    // 0x80273A48: lwc1        $f6, 0x4C($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X4C);
    // 0x80273A4C: mul.s       $f16, $f8, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f16.fl = MUL_S(ctx->f8.fl, ctx->f0.fl);
    // 0x80273A50: add.s       $f10, $f6, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f16.fl;
    // 0x80273A54: swc1        $f10, 0x4C($s0)
    MEM_W(0X4C, ctx->r16) = ctx->f10.u32l;
    // 0x80273A58: lwc1        $f12, 0x3C($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x80273A5C: jal         0x80080E80
    // 0x80273A60: nop

    func_80080E80(rdram, ctx);
        goto after_9;
    // 0x80273A60: nop

    after_9:
    // 0x80273A64: lwc1        $f18, 0x38($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X38);
    // 0x80273A68: lwc1        $f4, 0x44($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X44);
    // 0x80273A6C: mul.s       $f8, $f18, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = MUL_S(ctx->f18.fl, ctx->f0.fl);
    // 0x80273A70: add.s       $f6, $f4, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f6.fl = ctx->f4.fl + ctx->f8.fl;
    // 0x80273A74: swc1        $f6, 0x44($s0)
    MEM_W(0X44, ctx->r16) = ctx->f6.u32l;
L_80273A78:
    // 0x80273A78: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_80273A7C:
    // 0x80273A7C: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x80273A80: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x80273A84: jr          $ra
    // 0x80273A88: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
    return;
    // 0x80273A88: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
;}
RECOMP_FUNC void ovl_8024B800_func_802737EC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802737EC: nop

    // 0x802737F0: andi        $t0, $t9, 0x2
    ctx->r8 = ctx->r25 & 0X2;
    // 0x802737F4: bne         $t0, $zero, L_80273A7C
    if (ctx->r8 != 0) {
        // 0x802737F8: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_80273A7C;
    }
    // 0x802737F8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x802737FC: lhu         $t1, 0x16($s0)
    ctx->r9 = MEM_HU(ctx->r16, 0X16);
    // 0x80273800: andi        $t6, $v0, 0x1
    ctx->r14 = ctx->r2 & 0X1;
    // 0x80273804: andi        $t2, $t1, 0x40
    ctx->r10 = ctx->r9 & 0X40;
    // 0x80273808: bne         $t2, $zero, L_80273A78
    if (ctx->r10 != 0) {
        // 0x8027380C: lui         $at, 0x3F80
        ctx->r1 = S32(0X3F80 << 16);
            goto L_80273A78;
    }
    // 0x8027380C: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x80273810: lhu         $t3, 0x12($a0)
    ctx->r11 = MEM_HU(ctx->r4, 0X12);
    // 0x80273814: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80273818: andi        $t4, $t3, 0x1
    ctx->r12 = ctx->r11 & 0X1;
    // 0x8027381C: beq         $t4, $zero, L_80273838
    if (ctx->r12 == 0) {
        // 0x80273820: or          $v1, $zero, $zero
        ctx->r3 = 0 | 0;
            goto L_80273838;
    }
    // 0x80273820: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x80273824: lw          $t5, 0xC4($a0)
    ctx->r13 = MEM_W(ctx->r4, 0XC4);
    // 0x80273828: nop

    // 0x8027382C: lh          $v1, 0x1A($t5)
    ctx->r3 = MEM_H(ctx->r13, 0X1A);
    // 0x80273830: b           L_80273838
    // 0x80273834: nop

        goto L_80273838;
    // 0x80273834: nop

L_80273838:
    // 0x80273838: beq         $t6, $zero, L_80273854
    if (ctx->r14 == 0) {
        // 0x8027383C: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_80273854;
    }
    // 0x8027383C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x80273840: lw          $t7, 0xC4($s0)
    ctx->r15 = MEM_W(ctx->r16, 0XC4);
    // 0x80273844: nop

    // 0x80273848: lh          $v0, 0x1A($t7)
    ctx->r2 = MEM_H(ctx->r15, 0X1A);
    // 0x8027384C: b           L_80273854
    // 0x80273850: nop

        goto L_80273854;
    // 0x80273850: nop

L_80273854:
    // 0x80273854: bne         $v1, $zero, L_80273918
    if (ctx->r3 != 0) {
        // 0x80273858: swc1        $f4, 0x38($sp)
        MEM_W(0X38, ctx->r29) = ctx->f4.u32l;
            goto L_80273918;
    }
    // 0x80273858: swc1        $f4, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f4.u32l;
    // 0x8027385C: bne         $v0, $zero, L_80273918
    if (ctx->r2 != 0) {
        // 0x80273860: lui         $t8, 0x8009
        ctx->r24 = S32(0X8009 << 16);
            goto L_80273918;
    }
    // 0x80273860: lui         $t8, 0x8009
    ctx->r24 = S32(0X8009 << 16);
    // 0x80273864: lw          $t8, 0x3B20($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X3B20);
    // 0x80273868: nop

    // 0x8027386C: lw          $t9, 0x88($t8)
    ctx->r25 = MEM_W(ctx->r24, 0X88);
    // 0x80273870: nop

    // 0x80273874: bne         $s1, $t9, L_802738C8
    if (ctx->r17 != ctx->r25) {
        // 0x80273878: nop
    
            goto L_802738C8;
    }
    // 0x80273878: nop

    // 0x8027387C: lw          $t0, 0xD8($s1)
    ctx->r8 = MEM_W(ctx->r17, 0XD8);
    // 0x80273880: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x80273884: lbu         $a1, 0x7($t0)
    ctx->r5 = MEM_BU(ctx->r8, 0X7);
    // 0x80273888: jal         0x80275318
    // 0x8027388C: nop

    ovl_8024B800_func_80275318(rdram, ctx);
        goto after_0;
    // 0x8027388C: nop

    after_0:
    // 0x80273890: swc1        $f0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f0.u32l;
    // 0x80273894: lw          $t1, 0xD8($s0)
    ctx->r9 = MEM_W(ctx->r16, 0XD8);
    // 0x80273898: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8027389C: lbu         $a1, 0x8($t1)
    ctx->r5 = MEM_BU(ctx->r9, 0X8);
    // 0x802738A0: jal         0x80275318
    // 0x802738A4: nop

    ovl_8024B800_func_80275318(rdram, ctx);
        goto after_1;
    // 0x802738A4: nop

    after_1:
    // 0x802738A8: lwc1        $f6, 0x34($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X34);
    // 0x802738AC: nop

    // 0x802738B0: c.le.s      $f6, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f6.fl <= ctx->f0.fl;
    // 0x802738B4: nop

    // 0x802738B8: bc1f        L_80273908
    if (!c1cs) {
        // 0x802738BC: nop
    
            goto L_80273908;
    }
    // 0x802738BC: nop

    // 0x802738C0: b           L_80273A7C
    // 0x802738C4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_80273A7C;
    // 0x802738C4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_802738C8:
    // 0x802738C8: lw          $t2, 0xD8($s1)
    ctx->r10 = MEM_W(ctx->r17, 0XD8);
    // 0x802738CC: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x802738D0: lbu         $a1, 0x11($t2)
    ctx->r5 = MEM_BU(ctx->r10, 0X11);
    // 0x802738D4: jal         0x80275318
    // 0x802738D8: nop

    ovl_8024B800_func_80275318(rdram, ctx);
        goto after_2;
    // 0x802738D8: nop

    after_2:
    // 0x802738DC: swc1        $f0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f0.u32l;
    // 0x802738E0: lw          $t3, 0xD8($s0)
    ctx->r11 = MEM_W(ctx->r16, 0XD8);
    // 0x802738E4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802738E8: lbu         $a1, 0x11($t3)
    ctx->r5 = MEM_BU(ctx->r11, 0X11);
    // 0x802738EC: jal         0x80275318
    // 0x802738F0: nop

    ovl_8024B800_func_80275318(rdram, ctx);
        goto after_3;
    // 0x802738F0: nop

    after_3:
    // 0x802738F4: lwc1        $f8, 0x34($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X34);
    // 0x802738F8: nop

    // 0x802738FC: c.le.s      $f8, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f8.fl <= ctx->f0.fl;
    // 0x80273900: nop

    // 0x80273904: bc1t        L_80273A78
    if (c1cs) {
        // 0x80273908: lui         $at, 0x8028
        ctx->r1 = S32(0X8028 << 16);
            goto L_80273A78;
    }
L_80273908:
    // 0x80273908: lui         $at, 0x8028
    ctx->r1 = S32(0X8028 << 16);
    // 0x8027390C: lwc1        $f10, -0x1E30($at)
    ctx->f10.u32l = MEM_W(ctx->r1, -0X1E30);
    // 0x80273910: b           L_80273924
    // 0x80273914: swc1        $f10, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f10.u32l;
        goto L_80273924;
    // 0x80273914: swc1        $f10, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f10.u32l;
L_80273918:
    // 0x80273918: sltu        $at, $v0, $v1
    ctx->r1 = ctx->r2 < ctx->r3 ? 1 : 0;
    // 0x8027391C: beq         $at, $zero, L_80273A7C
    if (ctx->r1 == 0) {
        // 0x80273920: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_80273A7C;
    }
    // 0x80273920: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_80273924:
    // 0x80273924: lw          $a1, 0x4C($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X4C);
    // 0x80273928: lw          $a2, 0x44($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X44);
    // 0x8027392C: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x80273930: jal         0x80272B98
    // 0x80273934: addiu       $a3, $sp, 0x44
    ctx->r7 = ADD32(ctx->r29, 0X44);
    ovl_8024B800_func_80272B98(rdram, ctx);
        goto after_4;
    // 0x80273934: addiu       $a3, $sp, 0x44
    ctx->r7 = ADD32(ctx->r29, 0X44);
    after_4:
    // 0x80273938: lwc1        $f16, 0x48($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X48);
    // 0x8027393C: lui         $at, 0x402A
    ctx->r1 = S32(0X402A << 16);
    // 0x80273940: mtc1        $at, $f5
    ctx->f_odd[(5 - 1) * 2] = ctx->r1;
    // 0x80273944: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x80273948: cvt.d.s     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); 
    ctx->f18.d = CVT_D_S(ctx->f16.fl);
    // 0x8027394C: c.lt.d      $f18, $f4
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f18.d < ctx->f4.d;
    // 0x80273950: lwc1        $f14, 0x44($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X44);
    // 0x80273954: bc1f        L_80273A7C
    if (!c1cs) {
        // 0x80273958: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_80273A7C;
    }
    // 0x80273958: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8027395C: lwc1        $f12, 0xB0($s1)
    ctx->f12.u32l = MEM_W(ctx->r17, 0XB0);
    // 0x80273960: jal         0x8027924C
    // 0x80273964: nop

    ovl_8024B800_func_8027924C(rdram, ctx);
        goto after_5;
    // 0x80273964: nop

    after_5:
    // 0x80273968: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x8027396C: lui         $at, 0x8028
    ctx->r1 = S32(0X8028 << 16);
    // 0x80273970: c.lt.s      $f6, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f6.fl < ctx->f0.fl;
    // 0x80273974: nop

    // 0x80273978: bc1f        L_80273994
    if (!c1cs) {
        // 0x8027397C: nop
    
            goto L_80273994;
    }
    // 0x8027397C: nop

    // 0x80273980: lui         $at, 0x8028
    ctx->r1 = S32(0X8028 << 16);
    // 0x80273984: lwc1        $f1, -0x1E28($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, -0X1E28);
    // 0x80273988: lwc1        $f0, -0x1E24($at)
    ctx->f0.u32l = MEM_W(ctx->r1, -0X1E24);
    // 0x8027398C: b           L_802739A4
    // 0x80273990: lwc1        $f12, 0xB0($s1)
    ctx->f12.u32l = MEM_W(ctx->r17, 0XB0);
        goto L_802739A4;
    // 0x80273990: lwc1        $f12, 0xB0($s1)
    ctx->f12.u32l = MEM_W(ctx->r17, 0XB0);
L_80273994:
    // 0x80273994: lwc1        $f1, -0x1E20($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, -0X1E20);
    // 0x80273998: lwc1        $f0, -0x1E1C($at)
    ctx->f0.u32l = MEM_W(ctx->r1, -0X1E1C);
    // 0x8027399C: nop

    // 0x802739A0: lwc1        $f12, 0xB0($s1)
    ctx->f12.u32l = MEM_W(ctx->r17, 0XB0);
L_802739A4:
    // 0x802739A4: nop

    // 0x802739A8: cvt.d.s     $f8, $f12
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); 
    ctx->f8.d = CVT_D_S(ctx->f12.fl);
    // 0x802739AC: add.d       $f10, $f0, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f0.d); NAN_CHECK(ctx->f8.d); 
    ctx->f10.d = ctx->f0.d + ctx->f8.d;
    // 0x802739B0: cvt.s.d     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f16.fl = CVT_S_D(ctx->f10.d);
    // 0x802739B4: jal         0x80081040
    // 0x802739B8: swc1        $f16, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f16.u32l;
    func_80081040(rdram, ctx);
        goto after_6;
    // 0x802739B8: swc1        $f16, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f16.u32l;
    after_6:
    // 0x802739BC: lwc1        $f4, 0x38($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X38);
    // 0x802739C0: lwc1        $f18, 0x4C($s1)
    ctx->f18.u32l = MEM_W(ctx->r17, 0X4C);
    // 0x802739C4: mul.s       $f6, $f4, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = MUL_S(ctx->f4.fl, ctx->f0.fl);
    // 0x802739C8: lwc1        $f12, 0xB0($s1)
    ctx->f12.u32l = MEM_W(ctx->r17, 0XB0);
    // 0x802739CC: add.s       $f8, $f18, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f18.fl + ctx->f6.fl;
    // 0x802739D0: jal         0x80080E80
    // 0x802739D4: swc1        $f8, 0x4C($s1)
    MEM_W(0X4C, ctx->r17) = ctx->f8.u32l;
    func_80080E80(rdram, ctx);
        goto after_7;
    // 0x802739D4: swc1        $f8, 0x4C($s1)
    MEM_W(0X4C, ctx->r17) = ctx->f8.u32l;
    after_7:
    // 0x802739D8: lwc1        $f16, 0x38($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X38);
    // 0x802739DC: lwc1        $f10, 0x44($s1)
    ctx->f10.u32l = MEM_W(ctx->r17, 0X44);
    // 0x802739E0: mul.s       $f4, $f16, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = MUL_S(ctx->f16.fl, ctx->f0.fl);
    // 0x802739E4: add.s       $f18, $f10, $f4
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f18.fl = ctx->f10.fl + ctx->f4.fl;
    // 0x802739E8: swc1        $f18, 0x44($s1)
    MEM_W(0X44, ctx->r17) = ctx->f18.u32l;
    // 0x802739EC: lhu         $t4, 0x12($s0)
    ctx->r12 = MEM_HU(ctx->r16, 0X12);
    // 0x802739F0: nop

    // 0x802739F4: andi        $t5, $t4, 0x10
    ctx->r13 = ctx->r12 & 0X10;
    // 0x802739F8: bne         $t5, $zero, L_80273A7C
    if (ctx->r13 != 0) {
        // 0x802739FC: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_80273A7C;
    }
    // 0x802739FC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80273A00: lhu         $t6, 0x14($s0)
    ctx->r14 = MEM_HU(ctx->r16, 0X14);
    // 0x80273A04: nop

    // 0x80273A08: andi        $t7, $t6, 0x400
    ctx->r15 = ctx->r14 & 0X400;
    // 0x80273A0C: bne         $t7, $zero, L_80273A7C
    if (ctx->r15 != 0) {
        // 0x80273A10: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_80273A7C;
    }
    // 0x80273A10: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80273A14: lhu         $t8, 0x18($s0)
    ctx->r24 = MEM_HU(ctx->r16, 0X18);
    // 0x80273A18: nop

    // 0x80273A1C: andi        $t9, $t8, 0x2
    ctx->r25 = ctx->r24 & 0X2;
    // 0x80273A20: bne         $t9, $zero, L_80273A7C
    if (ctx->r25 != 0) {
        // 0x80273A24: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_80273A7C;
    }
    // 0x80273A24: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80273A28: lhu         $t0, 0x16($s0)
    ctx->r8 = MEM_HU(ctx->r16, 0X16);
    // 0x80273A2C: lwc1        $f12, 0x3C($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x80273A30: andi        $t1, $t0, 0x40
    ctx->r9 = ctx->r8 & 0X40;
    // 0x80273A34: bne         $t1, $zero, L_80273A7C
    if (ctx->r9 != 0) {
        // 0x80273A38: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_80273A7C;
    }
    // 0x80273A38: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80273A3C: jal         0x80081040
    // 0x80273A40: nop

    func_80081040(rdram, ctx);
        goto after_8;
    // 0x80273A40: nop

    after_8:
    // 0x80273A44: lwc1        $f8, 0x38($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X38);
    // 0x80273A48: lwc1        $f6, 0x4C($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X4C);
    // 0x80273A4C: mul.s       $f16, $f8, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f16.fl = MUL_S(ctx->f8.fl, ctx->f0.fl);
    // 0x80273A50: add.s       $f10, $f6, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f16.fl;
    // 0x80273A54: swc1        $f10, 0x4C($s0)
    MEM_W(0X4C, ctx->r16) = ctx->f10.u32l;
    // 0x80273A58: lwc1        $f12, 0x3C($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x80273A5C: jal         0x80080E80
    // 0x80273A60: nop

    func_80080E80(rdram, ctx);
        goto after_9;
    // 0x80273A60: nop

    after_9:
    // 0x80273A64: lwc1        $f18, 0x38($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X38);
    // 0x80273A68: lwc1        $f4, 0x44($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X44);
    // 0x80273A6C: mul.s       $f8, $f18, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = MUL_S(ctx->f18.fl, ctx->f0.fl);
    // 0x80273A70: add.s       $f6, $f4, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f6.fl = ctx->f4.fl + ctx->f8.fl;
    // 0x80273A74: swc1        $f6, 0x44($s0)
    MEM_W(0X44, ctx->r16) = ctx->f6.u32l;
L_80273A78:
    // 0x80273A78: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_80273A7C:
    // 0x80273A7C: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x80273A80: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x80273A84: jr          $ra
    // 0x80273A88: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
    return;
    // 0x80273A88: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
;}
RECOMP_FUNC void ovl_8024B800_func_80273864(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80273864: lw          $t8, 0x3B20($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X3B20);
    // 0x80273868: nop

    // 0x8027386C: lw          $t9, 0x88($t8)
    ctx->r25 = MEM_W(ctx->r24, 0X88);
    // 0x80273870: nop

    // 0x80273874: bne         $s1, $t9, L_802738C8
    if (ctx->r17 != ctx->r25) {
        // 0x80273878: nop
    
            goto L_802738C8;
    }
    // 0x80273878: nop

    // 0x8027387C: lw          $t0, 0xD8($s1)
    ctx->r8 = MEM_W(ctx->r17, 0XD8);
    // 0x80273880: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x80273884: lbu         $a1, 0x7($t0)
    ctx->r5 = MEM_BU(ctx->r8, 0X7);
    // 0x80273888: jal         0x80275318
    // 0x8027388C: nop

    ovl_8024B800_func_80275318(rdram, ctx);
        goto after_0;
    // 0x8027388C: nop

    after_0:
    // 0x80273890: swc1        $f0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f0.u32l;
    // 0x80273894: lw          $t1, 0xD8($s0)
    ctx->r9 = MEM_W(ctx->r16, 0XD8);
    // 0x80273898: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8027389C: lbu         $a1, 0x8($t1)
    ctx->r5 = MEM_BU(ctx->r9, 0X8);
    // 0x802738A0: jal         0x80275318
    // 0x802738A4: nop

    ovl_8024B800_func_80275318(rdram, ctx);
        goto after_1;
    // 0x802738A4: nop

    after_1:
    // 0x802738A8: lwc1        $f6, 0x34($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X34);
    // 0x802738AC: nop

    // 0x802738B0: c.le.s      $f6, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f6.fl <= ctx->f0.fl;
    // 0x802738B4: nop

    // 0x802738B8: bc1f        L_80273908
    if (!c1cs) {
        // 0x802738BC: nop
    
            goto L_80273908;
    }
    // 0x802738BC: nop

    // 0x802738C0: b           L_80273A7C
    // 0x802738C4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_80273A7C;
    // 0x802738C4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_802738C8:
    // 0x802738C8: lw          $t2, 0xD8($s1)
    ctx->r10 = MEM_W(ctx->r17, 0XD8);
    // 0x802738CC: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x802738D0: lbu         $a1, 0x11($t2)
    ctx->r5 = MEM_BU(ctx->r10, 0X11);
    // 0x802738D4: jal         0x80275318
    // 0x802738D8: nop

    ovl_8024B800_func_80275318(rdram, ctx);
        goto after_2;
    // 0x802738D8: nop

    after_2:
    // 0x802738DC: swc1        $f0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f0.u32l;
    // 0x802738E0: lw          $t3, 0xD8($s0)
    ctx->r11 = MEM_W(ctx->r16, 0XD8);
    // 0x802738E4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802738E8: lbu         $a1, 0x11($t3)
    ctx->r5 = MEM_BU(ctx->r11, 0X11);
    // 0x802738EC: jal         0x80275318
    // 0x802738F0: nop

    ovl_8024B800_func_80275318(rdram, ctx);
        goto after_3;
    // 0x802738F0: nop

    after_3:
    // 0x802738F4: lwc1        $f8, 0x34($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X34);
    // 0x802738F8: nop

    // 0x802738FC: c.le.s      $f8, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f8.fl <= ctx->f0.fl;
    // 0x80273900: nop

    // 0x80273904: bc1t        L_80273A78
    if (c1cs) {
        // 0x80273908: lui         $at, 0x8028
        ctx->r1 = S32(0X8028 << 16);
            goto L_80273A78;
    }
L_80273908:
    // 0x80273908: lui         $at, 0x8028
    ctx->r1 = S32(0X8028 << 16);
    // 0x8027390C: lwc1        $f10, -0x1E30($at)
    ctx->f10.u32l = MEM_W(ctx->r1, -0X1E30);
    // 0x80273910: b           L_80273924
    // 0x80273914: swc1        $f10, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f10.u32l;
        goto L_80273924;
    // 0x80273914: swc1        $f10, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f10.u32l;
    // 0x80273918: sltu        $at, $v0, $v1
    ctx->r1 = ctx->r2 < ctx->r3 ? 1 : 0;
    // 0x8027391C: beq         $at, $zero, L_80273A7C
    if (ctx->r1 == 0) {
        // 0x80273920: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_80273A7C;
    }
    // 0x80273920: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_80273924:
    // 0x80273924: lw          $a1, 0x4C($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X4C);
    // 0x80273928: lw          $a2, 0x44($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X44);
    // 0x8027392C: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x80273930: jal         0x80272B98
    // 0x80273934: addiu       $a3, $sp, 0x44
    ctx->r7 = ADD32(ctx->r29, 0X44);
    ovl_8024B800_func_80272B98(rdram, ctx);
        goto after_4;
    // 0x80273934: addiu       $a3, $sp, 0x44
    ctx->r7 = ADD32(ctx->r29, 0X44);
    after_4:
    // 0x80273938: lwc1        $f16, 0x48($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X48);
    // 0x8027393C: lui         $at, 0x402A
    ctx->r1 = S32(0X402A << 16);
    // 0x80273940: mtc1        $at, $f5
    ctx->f_odd[(5 - 1) * 2] = ctx->r1;
    // 0x80273944: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x80273948: cvt.d.s     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); 
    ctx->f18.d = CVT_D_S(ctx->f16.fl);
    // 0x8027394C: c.lt.d      $f18, $f4
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f18.d < ctx->f4.d;
    // 0x80273950: lwc1        $f14, 0x44($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X44);
    // 0x80273954: bc1f        L_80273A7C
    if (!c1cs) {
        // 0x80273958: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_80273A7C;
    }
    // 0x80273958: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8027395C: lwc1        $f12, 0xB0($s1)
    ctx->f12.u32l = MEM_W(ctx->r17, 0XB0);
    // 0x80273960: jal         0x8027924C
    // 0x80273964: nop

    ovl_8024B800_func_8027924C(rdram, ctx);
        goto after_5;
    // 0x80273964: nop

    after_5:
    // 0x80273968: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x8027396C: lui         $at, 0x8028
    ctx->r1 = S32(0X8028 << 16);
    // 0x80273970: c.lt.s      $f6, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f6.fl < ctx->f0.fl;
    // 0x80273974: nop

    // 0x80273978: bc1f        L_80273994
    if (!c1cs) {
        // 0x8027397C: nop
    
            goto L_80273994;
    }
    // 0x8027397C: nop

    // 0x80273980: lui         $at, 0x8028
    ctx->r1 = S32(0X8028 << 16);
    // 0x80273984: lwc1        $f1, -0x1E28($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, -0X1E28);
    // 0x80273988: lwc1        $f0, -0x1E24($at)
    ctx->f0.u32l = MEM_W(ctx->r1, -0X1E24);
    // 0x8027398C: b           L_802739A4
    // 0x80273990: lwc1        $f12, 0xB0($s1)
    ctx->f12.u32l = MEM_W(ctx->r17, 0XB0);
        goto L_802739A4;
    // 0x80273990: lwc1        $f12, 0xB0($s1)
    ctx->f12.u32l = MEM_W(ctx->r17, 0XB0);
L_80273994:
    // 0x80273994: lwc1        $f1, -0x1E20($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, -0X1E20);
    // 0x80273998: lwc1        $f0, -0x1E1C($at)
    ctx->f0.u32l = MEM_W(ctx->r1, -0X1E1C);
    // 0x8027399C: nop

    // 0x802739A0: lwc1        $f12, 0xB0($s1)
    ctx->f12.u32l = MEM_W(ctx->r17, 0XB0);
L_802739A4:
    // 0x802739A4: nop

    // 0x802739A8: cvt.d.s     $f8, $f12
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); 
    ctx->f8.d = CVT_D_S(ctx->f12.fl);
    // 0x802739AC: add.d       $f10, $f0, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f0.d); NAN_CHECK(ctx->f8.d); 
    ctx->f10.d = ctx->f0.d + ctx->f8.d;
    // 0x802739B0: cvt.s.d     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f16.fl = CVT_S_D(ctx->f10.d);
    // 0x802739B4: jal         0x80081040
    // 0x802739B8: swc1        $f16, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f16.u32l;
    func_80081040(rdram, ctx);
        goto after_6;
    // 0x802739B8: swc1        $f16, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f16.u32l;
    after_6:
    // 0x802739BC: lwc1        $f4, 0x38($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X38);
    // 0x802739C0: lwc1        $f18, 0x4C($s1)
    ctx->f18.u32l = MEM_W(ctx->r17, 0X4C);
    // 0x802739C4: mul.s       $f6, $f4, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = MUL_S(ctx->f4.fl, ctx->f0.fl);
    // 0x802739C8: lwc1        $f12, 0xB0($s1)
    ctx->f12.u32l = MEM_W(ctx->r17, 0XB0);
    // 0x802739CC: add.s       $f8, $f18, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f18.fl + ctx->f6.fl;
    // 0x802739D0: jal         0x80080E80
    // 0x802739D4: swc1        $f8, 0x4C($s1)
    MEM_W(0X4C, ctx->r17) = ctx->f8.u32l;
    func_80080E80(rdram, ctx);
        goto after_7;
    // 0x802739D4: swc1        $f8, 0x4C($s1)
    MEM_W(0X4C, ctx->r17) = ctx->f8.u32l;
    after_7:
    // 0x802739D8: lwc1        $f16, 0x38($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X38);
    // 0x802739DC: lwc1        $f10, 0x44($s1)
    ctx->f10.u32l = MEM_W(ctx->r17, 0X44);
    // 0x802739E0: mul.s       $f4, $f16, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = MUL_S(ctx->f16.fl, ctx->f0.fl);
    // 0x802739E4: add.s       $f18, $f10, $f4
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f18.fl = ctx->f10.fl + ctx->f4.fl;
    // 0x802739E8: swc1        $f18, 0x44($s1)
    MEM_W(0X44, ctx->r17) = ctx->f18.u32l;
    // 0x802739EC: lhu         $t4, 0x12($s0)
    ctx->r12 = MEM_HU(ctx->r16, 0X12);
    // 0x802739F0: nop

    // 0x802739F4: andi        $t5, $t4, 0x10
    ctx->r13 = ctx->r12 & 0X10;
    // 0x802739F8: bne         $t5, $zero, L_80273A7C
    if (ctx->r13 != 0) {
        // 0x802739FC: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_80273A7C;
    }
    // 0x802739FC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80273A00: lhu         $t6, 0x14($s0)
    ctx->r14 = MEM_HU(ctx->r16, 0X14);
    // 0x80273A04: nop

    // 0x80273A08: andi        $t7, $t6, 0x400
    ctx->r15 = ctx->r14 & 0X400;
    // 0x80273A0C: bne         $t7, $zero, L_80273A7C
    if (ctx->r15 != 0) {
        // 0x80273A10: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_80273A7C;
    }
    // 0x80273A10: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80273A14: lhu         $t8, 0x18($s0)
    ctx->r24 = MEM_HU(ctx->r16, 0X18);
    // 0x80273A18: nop

    // 0x80273A1C: andi        $t9, $t8, 0x2
    ctx->r25 = ctx->r24 & 0X2;
    // 0x80273A20: bne         $t9, $zero, L_80273A7C
    if (ctx->r25 != 0) {
        // 0x80273A24: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_80273A7C;
    }
    // 0x80273A24: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80273A28: lhu         $t0, 0x16($s0)
    ctx->r8 = MEM_HU(ctx->r16, 0X16);
    // 0x80273A2C: lwc1        $f12, 0x3C($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x80273A30: andi        $t1, $t0, 0x40
    ctx->r9 = ctx->r8 & 0X40;
    // 0x80273A34: bne         $t1, $zero, L_80273A7C
    if (ctx->r9 != 0) {
        // 0x80273A38: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_80273A7C;
    }
    // 0x80273A38: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80273A3C: jal         0x80081040
    // 0x80273A40: nop

    func_80081040(rdram, ctx);
        goto after_8;
    // 0x80273A40: nop

    after_8:
    // 0x80273A44: lwc1        $f8, 0x38($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X38);
    // 0x80273A48: lwc1        $f6, 0x4C($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X4C);
    // 0x80273A4C: mul.s       $f16, $f8, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f16.fl = MUL_S(ctx->f8.fl, ctx->f0.fl);
    // 0x80273A50: add.s       $f10, $f6, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f16.fl;
    // 0x80273A54: swc1        $f10, 0x4C($s0)
    MEM_W(0X4C, ctx->r16) = ctx->f10.u32l;
    // 0x80273A58: lwc1        $f12, 0x3C($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x80273A5C: jal         0x80080E80
    // 0x80273A60: nop

    func_80080E80(rdram, ctx);
        goto after_9;
    // 0x80273A60: nop

    after_9:
    // 0x80273A64: lwc1        $f18, 0x38($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X38);
    // 0x80273A68: lwc1        $f4, 0x44($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X44);
    // 0x80273A6C: mul.s       $f8, $f18, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = MUL_S(ctx->f18.fl, ctx->f0.fl);
    // 0x80273A70: add.s       $f6, $f4, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f6.fl = ctx->f4.fl + ctx->f8.fl;
    // 0x80273A74: swc1        $f6, 0x44($s0)
    MEM_W(0X44, ctx->r16) = ctx->f6.u32l;
L_80273A78:
    // 0x80273A78: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_80273A7C:
    // 0x80273A7C: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x80273A80: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x80273A84: jr          $ra
    // 0x80273A88: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
    return;
    // 0x80273A88: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
;}
RECOMP_FUNC void ovl_8024B800_func_802739D0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802739D0: jal         0x80080E80
    // 0x802739D4: swc1        $f8, 0x4C($s1)
    MEM_W(0X4C, ctx->r17) = ctx->f8.u32l;
    func_80080E80(rdram, ctx);
        goto after_0;
    // 0x802739D4: swc1        $f8, 0x4C($s1)
    MEM_W(0X4C, ctx->r17) = ctx->f8.u32l;
    after_0:
    // 0x802739D8: lwc1        $f16, 0x38($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X38);
    // 0x802739DC: lwc1        $f10, 0x44($s1)
    ctx->f10.u32l = MEM_W(ctx->r17, 0X44);
    // 0x802739E0: mul.s       $f4, $f16, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = MUL_S(ctx->f16.fl, ctx->f0.fl);
    // 0x802739E4: add.s       $f18, $f10, $f4
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f18.fl = ctx->f10.fl + ctx->f4.fl;
    // 0x802739E8: swc1        $f18, 0x44($s1)
    MEM_W(0X44, ctx->r17) = ctx->f18.u32l;
    // 0x802739EC: lhu         $t4, 0x12($s0)
    ctx->r12 = MEM_HU(ctx->r16, 0X12);
    // 0x802739F0: nop

    // 0x802739F4: andi        $t5, $t4, 0x10
    ctx->r13 = ctx->r12 & 0X10;
    // 0x802739F8: bne         $t5, $zero, L_80273A7C
    if (ctx->r13 != 0) {
        // 0x802739FC: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_80273A7C;
    }
    // 0x802739FC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80273A00: lhu         $t6, 0x14($s0)
    ctx->r14 = MEM_HU(ctx->r16, 0X14);
    // 0x80273A04: nop

    // 0x80273A08: andi        $t7, $t6, 0x400
    ctx->r15 = ctx->r14 & 0X400;
    // 0x80273A0C: bne         $t7, $zero, L_80273A7C
    if (ctx->r15 != 0) {
        // 0x80273A10: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_80273A7C;
    }
    // 0x80273A10: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80273A14: lhu         $t8, 0x18($s0)
    ctx->r24 = MEM_HU(ctx->r16, 0X18);
    // 0x80273A18: nop

    // 0x80273A1C: andi        $t9, $t8, 0x2
    ctx->r25 = ctx->r24 & 0X2;
    // 0x80273A20: bne         $t9, $zero, L_80273A7C
    if (ctx->r25 != 0) {
        // 0x80273A24: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_80273A7C;
    }
    // 0x80273A24: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80273A28: lhu         $t0, 0x16($s0)
    ctx->r8 = MEM_HU(ctx->r16, 0X16);
    // 0x80273A2C: lwc1        $f12, 0x3C($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x80273A30: andi        $t1, $t0, 0x40
    ctx->r9 = ctx->r8 & 0X40;
    // 0x80273A34: bne         $t1, $zero, L_80273A7C
    if (ctx->r9 != 0) {
        // 0x80273A38: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_80273A7C;
    }
    // 0x80273A38: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80273A3C: jal         0x80081040
    // 0x80273A40: nop

    func_80081040(rdram, ctx);
        goto after_1;
    // 0x80273A40: nop

    after_1:
    // 0x80273A44: lwc1        $f8, 0x38($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X38);
    // 0x80273A48: lwc1        $f6, 0x4C($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X4C);
    // 0x80273A4C: mul.s       $f16, $f8, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f16.fl = MUL_S(ctx->f8.fl, ctx->f0.fl);
    // 0x80273A50: add.s       $f10, $f6, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f16.fl;
    // 0x80273A54: swc1        $f10, 0x4C($s0)
    MEM_W(0X4C, ctx->r16) = ctx->f10.u32l;
    // 0x80273A58: lwc1        $f12, 0x3C($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x80273A5C: jal         0x80080E80
    // 0x80273A60: nop

    func_80080E80(rdram, ctx);
        goto after_2;
    // 0x80273A60: nop

    after_2:
    // 0x80273A64: lwc1        $f18, 0x38($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X38);
    // 0x80273A68: lwc1        $f4, 0x44($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X44);
    // 0x80273A6C: mul.s       $f8, $f18, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = MUL_S(ctx->f18.fl, ctx->f0.fl);
    // 0x80273A70: add.s       $f6, $f4, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f6.fl = ctx->f4.fl + ctx->f8.fl;
    // 0x80273A74: swc1        $f6, 0x44($s0)
    MEM_W(0X44, ctx->r16) = ctx->f6.u32l;
    // 0x80273A78: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_80273A7C:
    // 0x80273A7C: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x80273A80: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x80273A84: jr          $ra
    // 0x80273A88: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
    return;
    // 0x80273A88: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
;}
RECOMP_FUNC void ovl_8024B800_func_80273A8C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80273A8C: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x80273A90: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80273A94: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80273A98: lhu         $t6, 0x12($a0)
    ctx->r14 = MEM_HU(ctx->r4, 0X12);
    // 0x80273A9C: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x80273AA0: andi        $t7, $t6, 0x2
    ctx->r15 = ctx->r14 & 0X2;
    // 0x80273AA4: bne         $t7, $zero, L_80273D04
    if (ctx->r15 != 0) {
        // 0x80273AA8: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_80273D04;
    }
    // 0x80273AA8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80273AAC: lhu         $t8, 0x14($a0)
    ctx->r24 = MEM_HU(ctx->r4, 0X14);
    // 0x80273AB0: nop

    // 0x80273AB4: andi        $t9, $t8, 0x2000
    ctx->r25 = ctx->r24 & 0X2000;
    // 0x80273AB8: beq         $t9, $zero, L_80273D04
    if (ctx->r25 == 0) {
        // 0x80273ABC: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_80273D04;
    }
    // 0x80273ABC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80273AC0: lhu         $t0, 0x16($a0)
    ctx->r8 = MEM_HU(ctx->r4, 0X16);
    // 0x80273AC4: nop

    // 0x80273AC8: andi        $t1, $t0, 0x100
    ctx->r9 = ctx->r8 & 0X100;
    // 0x80273ACC: bne         $t1, $zero, L_80273D04
    if (ctx->r9 != 0) {
        // 0x80273AD0: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_80273D04;
    }
    // 0x80273AD0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80273AD4: lw          $v0, 0xDC($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XDC);
    // 0x80273AD8: addiu       $a3, $sp, 0x38
    ctx->r7 = ADD32(ctx->r29, 0X38);
    // 0x80273ADC: lw          $a1, 0x4C($v0)
    ctx->r5 = MEM_W(ctx->r2, 0X4C);
    // 0x80273AE0: lw          $a2, 0x44($v0)
    ctx->r6 = MEM_W(ctx->r2, 0X44);
    // 0x80273AE4: jal         0x80272B98
    // 0x80273AE8: nop

    ovl_8024B800_func_80272B98(rdram, ctx);
        goto after_0;
    // 0x80273AE8: nop

    after_0:
    // 0x80273AEC: lwc1        $f12, 0x8C($s0)
    ctx->f12.u32l = MEM_W(ctx->r16, 0X8C);
    // 0x80273AF0: lwc1        $f14, 0x38($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X38);
    // 0x80273AF4: jal         0x8027924C
    // 0x80273AF8: nop

    ovl_8024B800_func_8027924C(rdram, ctx);
        goto after_1;
    // 0x80273AF8: nop

    after_1:
    // 0x80273AFC: swc1        $f0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f0.u32l;
    // 0x80273B00: jal         0x80272AEC
    // 0x80273B04: mov.s       $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    ctx->f12.fl = ctx->f0.fl;
    ovl_8024B800_func_80272AEC(rdram, ctx);
        goto after_2;
    // 0x80273B04: mov.s       $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    ctx->f12.fl = ctx->f0.fl;
    after_2:
    // 0x80273B08: lui         $t2, 0x8009
    ctx->r10 = S32(0X8009 << 16);
    // 0x80273B0C: lw          $t2, 0x3B20($t2)
    ctx->r10 = MEM_W(ctx->r10, 0X3B20);
    // 0x80273B10: swc1        $f0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f0.u32l;
    // 0x80273B14: lhu         $t3, 0xC0($t2)
    ctx->r11 = MEM_HU(ctx->r10, 0XC0);
    // 0x80273B18: nop

    // 0x80273B1C: andi        $t4, $t3, 0x1
    ctx->r12 = ctx->r11 & 0X1;
    // 0x80273B20: beq         $t4, $zero, L_80273BD0
    if (ctx->r12 == 0) {
        // 0x80273B24: nop
    
            goto L_80273BD0;
    }
    // 0x80273B24: nop

    // 0x80273B28: lw          $t5, 0xDC($s0)
    ctx->r13 = MEM_W(ctx->r16, 0XDC);
    // 0x80273B2C: lwc1        $f4, 0x84($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X84);
    // 0x80273B30: lwc1        $f6, 0x84($t5)
    ctx->f6.u32l = MEM_W(ctx->r13, 0X84);
    // 0x80273B34: lui         $at, 0x8028
    ctx->r1 = S32(0X8028 << 16);
    // 0x80273B38: c.lt.s      $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f4.fl < ctx->f6.fl;
    // 0x80273B3C: nop

    // 0x80273B40: bc1f        L_80273BD0
    if (!c1cs) {
        // 0x80273B44: nop
    
            goto L_80273BD0;
    }
    // 0x80273B44: nop

    // 0x80273B48: lwc1        $f8, 0x88($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X88);
    // 0x80273B4C: lwc1        $f17, -0x1E18($at)
    ctx->f_odd[(17 - 1) * 2] = MEM_W(ctx->r1, -0X1E18);
    // 0x80273B50: lwc1        $f16, -0x1E14($at)
    ctx->f16.u32l = MEM_W(ctx->r1, -0X1E14);
    // 0x80273B54: cvt.d.s     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f10.d = CVT_D_S(ctx->f8.fl);
    // 0x80273B58: add.d       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f16.d); 
    ctx->f18.d = ctx->f10.d + ctx->f16.d;
    // 0x80273B5C: lwc1        $f12, 0x8C($s0)
    ctx->f12.u32l = MEM_W(ctx->r16, 0X8C);
    // 0x80273B60: jal         0x80279308
    // 0x80273B64: cvt.s.d     $f14, $f18
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.d); 
    ctx->f14.fl = CVT_S_D(ctx->f18.d);
    ovl_8024B800_func_80279308(rdram, ctx);
        goto after_3;
    // 0x80273B64: cvt.s.d     $f14, $f18
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.d); 
    ctx->f14.fl = CVT_S_D(ctx->f18.d);
    after_3:
    // 0x80273B68: lui         $at, 0x8028
    ctx->r1 = S32(0X8028 << 16);
    // 0x80273B6C: lwc1        $f7, -0x1E10($at)
    ctx->f_odd[(7 - 1) * 2] = MEM_W(ctx->r1, -0X1E10);
    // 0x80273B70: lwc1        $f6, -0x1E0C($at)
    ctx->f6.u32l = MEM_W(ctx->r1, -0X1E0C);
    // 0x80273B74: cvt.d.s     $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f4.d = CVT_D_S(ctx->f0.fl);
    // 0x80273B78: c.lt.d      $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f4.d < ctx->f6.d;
    // 0x80273B7C: nop

    // 0x80273B80: bc1f        L_80273BD0
    if (!c1cs) {
        // 0x80273B84: nop
    
            goto L_80273BD0;
    }
    // 0x80273B84: nop

    // 0x80273B88: jal         0x802732F4
    // 0x80273B8C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_8024B800_func_802732F4(rdram, ctx);
        goto after_4;
    // 0x80273B8C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_4:
    // 0x80273B90: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x80273B94: lwc1        $f10, 0x34($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X34);
    // 0x80273B98: nop

    // 0x80273B9C: c.lt.s      $f8, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f8.fl < ctx->f10.fl;
    // 0x80273BA0: nop

    // 0x80273BA4: bc1f        L_80273BB4
    if (!c1cs) {
        // 0x80273BA8: nop
    
            goto L_80273BB4;
    }
    // 0x80273BA8: nop

    // 0x80273BAC: jal         0x802732D0
    // 0x80273BB0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_8024B800_func_802732D0(rdram, ctx);
        goto after_5;
    // 0x80273BB0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_5:
L_80273BB4:
    // 0x80273BB4: lhu         $t6, 0x16($s0)
    ctx->r14 = MEM_HU(ctx->r16, 0X16);
    // 0x80273BB8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80273BBC: ori         $t7, $t6, 0x100
    ctx->r15 = ctx->r14 | 0X100;
    // 0x80273BC0: sh          $t7, 0x16($s0)
    MEM_H(0X16, ctx->r16) = ctx->r15;
    // 0x80273BC4: addiu       $a1, $zero, 0x97
    ctx->r5 = ADD32(0, 0X97);
    // 0x80273BC8: jal         0x80272D3C
    // 0x80273BCC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    ovl_8024B800_func_80272D3C(rdram, ctx);
        goto after_6;
    // 0x80273BCC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_6:
L_80273BD0:
    // 0x80273BD0: lui         $at, 0x8028
    ctx->r1 = S32(0X8028 << 16);
    // 0x80273BD4: lwc1        $f16, 0x30($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X30);
    // 0x80273BD8: lwc1        $f19, -0x1E08($at)
    ctx->f_odd[(19 - 1) * 2] = MEM_W(ctx->r1, -0X1E08);
    // 0x80273BDC: lwc1        $f18, -0x1E04($at)
    ctx->f18.u32l = MEM_W(ctx->r1, -0X1E04);
    // 0x80273BE0: cvt.d.s     $f0, $f16
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); 
    ctx->f0.d = CVT_D_S(ctx->f16.fl);
    // 0x80273BE4: c.lt.d      $f18, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f18.d < ctx->f0.d;
    // 0x80273BE8: lui         $at, 0x8028
    ctx->r1 = S32(0X8028 << 16);
    // 0x80273BEC: bc1f        L_80273CC0
    if (!c1cs) {
        // 0x80273BF0: nop
    
            goto L_80273CC0;
    }
    // 0x80273BF0: nop

    // 0x80273BF4: lwc1        $f5, -0x1E00($at)
    ctx->f_odd[(5 - 1) * 2] = MEM_W(ctx->r1, -0X1E00);
    // 0x80273BF8: lwc1        $f4, -0x1DFC($at)
    ctx->f4.u32l = MEM_W(ctx->r1, -0X1DFC);
    // 0x80273BFC: nop

    // 0x80273C00: c.lt.d      $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f0.d < ctx->f4.d;
    // 0x80273C04: nop

    // 0x80273C08: bc1f        L_80273CC0
    if (!c1cs) {
        // 0x80273C0C: nop
    
            goto L_80273CC0;
    }
    // 0x80273C0C: nop

    // 0x80273C10: lw          $t8, 0xDC($s0)
    ctx->r24 = MEM_W(ctx->r16, 0XDC);
    // 0x80273C14: lwc1        $f12, 0x8C($s0)
    ctx->f12.u32l = MEM_W(ctx->r16, 0X8C);
    // 0x80273C18: lwc1        $f14, 0x8C($t8)
    ctx->f14.u32l = MEM_W(ctx->r24, 0X8C);
    // 0x80273C1C: jal         0x80279308
    // 0x80273C20: nop

    ovl_8024B800_func_80279308(rdram, ctx);
        goto after_7;
    // 0x80273C20: nop

    after_7:
    // 0x80273C24: lui         $at, 0x8028
    ctx->r1 = S32(0X8028 << 16);
    // 0x80273C28: lwc1        $f9, -0x1DF8($at)
    ctx->f_odd[(9 - 1) * 2] = MEM_W(ctx->r1, -0X1DF8);
    // 0x80273C2C: lwc1        $f8, -0x1DF4($at)
    ctx->f8.u32l = MEM_W(ctx->r1, -0X1DF4);
    // 0x80273C30: cvt.d.s     $f6, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f6.d = CVT_D_S(ctx->f0.fl);
    // 0x80273C34: c.lt.d      $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f6.d < ctx->f8.d;
    // 0x80273C38: nop

    // 0x80273C3C: bc1f        L_80273CC0
    if (!c1cs) {
        // 0x80273C40: nop
    
            goto L_80273CC0;
    }
    // 0x80273C40: nop

    // 0x80273C44: jal         0x802732F4
    // 0x80273C48: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_8024B800_func_802732F4(rdram, ctx);
        goto after_8;
    // 0x80273C48: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_8:
    // 0x80273C4C: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x80273C50: lwc1        $f16, 0x34($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X34);
    // 0x80273C54: nop

    // 0x80273C58: c.lt.s      $f10, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f10.fl < ctx->f16.fl;
    // 0x80273C5C: nop

    // 0x80273C60: bc1f        L_80273C70
    if (!c1cs) {
        // 0x80273C64: nop
    
            goto L_80273C70;
    }
    // 0x80273C64: nop

    // 0x80273C68: jal         0x802732D0
    // 0x80273C6C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_8024B800_func_802732D0(rdram, ctx);
        goto after_9;
    // 0x80273C6C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_9:
L_80273C70:
    // 0x80273C70: lhu         $t9, 0x16($s0)
    ctx->r25 = MEM_HU(ctx->r16, 0X16);
    // 0x80273C74: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80273C78: ori         $t0, $t9, 0x100
    ctx->r8 = ctx->r25 | 0X100;
    // 0x80273C7C: sh          $t0, 0x16($s0)
    MEM_H(0X16, ctx->r16) = ctx->r8;
    // 0x80273C80: addiu       $a1, $zero, 0x96
    ctx->r5 = ADD32(0, 0X96);
    // 0x80273C84: jal         0x80272D3C
    // 0x80273C88: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    ovl_8024B800_func_80272D3C(rdram, ctx);
        goto after_10;
    // 0x80273C88: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_10:
    // 0x80273C8C: lui         $v0, 0x8009
    ctx->r2 = S32(0X8009 << 16);
    // 0x80273C90: lw          $v0, 0x3B20($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X3B20);
    // 0x80273C94: nop

    // 0x80273C98: lw          $t1, 0x84($v0)
    ctx->r9 = MEM_W(ctx->r2, 0X84);
    // 0x80273C9C: nop

    // 0x80273CA0: bne         $t1, $zero, L_80273D04
    if (ctx->r9 != 0) {
        // 0x80273CA4: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_80273D04;
    }
    // 0x80273CA4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80273CA8: lw          $t2, 0x88($v0)
    ctx->r10 = MEM_W(ctx->r2, 0X88);
    // 0x80273CAC: nop

    // 0x80273CB0: bne         $s0, $t2, L_80273D04
    if (ctx->r16 != ctx->r10) {
        // 0x80273CB4: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_80273D04;
    }
    // 0x80273CB4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80273CB8: b           L_80273D00
    // 0x80273CBC: sw          $zero, 0x88($v0)
    MEM_W(0X88, ctx->r2) = 0;
        goto L_80273D00;
    // 0x80273CBC: sw          $zero, 0x88($v0)
    MEM_W(0X88, ctx->r2) = 0;
L_80273CC0:
    // 0x80273CC0: lw          $t3, 0xC8($s0)
    ctx->r11 = MEM_W(ctx->r16, 0XC8);
    // 0x80273CC4: lui         $t6, 0x8010
    ctx->r14 = S32(0X8010 << 16);
    // 0x80273CC8: lhu         $t4, 0x6($t3)
    ctx->r12 = MEM_HU(ctx->r11, 0X6);
    // 0x80273CCC: lhu         $t6, 0x522A($t6)
    ctx->r14 = MEM_HU(ctx->r14, 0X522A);
    // 0x80273CD0: sll         $t5, $t4, 2
    ctx->r13 = S32(ctx->r12 << 2);
    // 0x80273CD4: xor         $t7, $t5, $t6
    ctx->r15 = ctx->r13 ^ ctx->r14;
    // 0x80273CD8: andi        $t8, $t7, 0x4
    ctx->r24 = ctx->r15 & 0X4;
    // 0x80273CDC: bne         $t8, $zero, L_80273CF8
    if (ctx->r24 != 0) {
        // 0x80273CE0: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80273CF8;
    }
    // 0x80273CE0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80273CE4: lhu         $t9, 0x16($s0)
    ctx->r25 = MEM_HU(ctx->r16, 0X16);
    // 0x80273CE8: nop

    // 0x80273CEC: andi        $t0, $t9, 0x8000
    ctx->r8 = ctx->r25 & 0X8000;
    // 0x80273CF0: beq         $t0, $zero, L_80273D04
    if (ctx->r8 == 0) {
        // 0x80273CF4: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_80273D04;
    }
    // 0x80273CF4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_80273CF8:
    // 0x80273CF8: jal         0x8024BC08
    // 0x80273CFC: addiu       $a1, $zero, 0x2E
    ctx->r5 = ADD32(0, 0X2E);
    ovl_8024B800_func_8024BC08(rdram, ctx);
        goto after_11;
    // 0x80273CFC: addiu       $a1, $zero, 0x2E
    ctx->r5 = ADD32(0, 0X2E);
    after_11:
L_80273D00:
    // 0x80273D00: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_80273D04:
    // 0x80273D04: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80273D08: jr          $ra
    // 0x80273D0C: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    return;
    // 0x80273D0C: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
RECOMP_FUNC void ovl_8024B800_func_80273D10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80273D10: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x80273D14: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80273D18: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80273D1C: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x80273D20: jal         0x80272C74
    // 0x80273D24: sw          $a1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r5;
    ovl_8024B800_func_80272C74(rdram, ctx);
        goto after_0;
    // 0x80273D24: sw          $a1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r5;
    after_0:
    // 0x80273D28: sw          $v0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r2;
    // 0x80273D2C: lhu         $t6, 0x16($s0)
    ctx->r14 = MEM_HU(ctx->r16, 0X16);
    // 0x80273D30: addiu       $at, $zero, 0x12
    ctx->r1 = ADD32(0, 0X12);
    // 0x80273D34: andi        $t7, $t6, 0x100
    ctx->r15 = ctx->r14 & 0X100;
    // 0x80273D38: bne         $t7, $zero, L_80273D48
    if (ctx->r15 != 0) {
        // 0x80273D3C: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80273D48;
    }
    // 0x80273D3C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80273D40: bne         $v0, $at, L_80273E14
    if (ctx->r2 != ctx->r1) {
        // 0x80273D44: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_80273E14;
    }
    // 0x80273D44: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_80273D48:
    // 0x80273D48: jal         0x80274CFC
    // 0x80273D4C: addiu       $a1, $zero, 0x271
    ctx->r5 = ADD32(0, 0X271);
    ovl_8024B800_func_80274CFC(rdram, ctx);
        goto after_1;
    // 0x80273D4C: addiu       $a1, $zero, 0x271
    ctx->r5 = ADD32(0, 0X271);
    after_1:
    // 0x80273D50: lw          $v0, 0xDC($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XDC);
    // 0x80273D54: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x80273D58: beq         $v0, $zero, L_80273D98
    if (ctx->r2 == 0) {
        // 0x80273D5C: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80273D98;
    }
    // 0x80273D5C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80273D60: lw          $a1, 0x4C($v0)
    ctx->r5 = MEM_W(ctx->r2, 0X4C);
    // 0x80273D64: lw          $a2, 0x44($v0)
    ctx->r6 = MEM_W(ctx->r2, 0X44);
    // 0x80273D68: sw          $zero, 0x34($sp)
    MEM_W(0X34, ctx->r29) = 0;
    // 0x80273D6C: jal         0x80272B98
    // 0x80273D70: addiu       $a3, $sp, 0x28
    ctx->r7 = ADD32(ctx->r29, 0X28);
    ovl_8024B800_func_80272B98(rdram, ctx);
        goto after_2;
    // 0x80273D70: addiu       $a3, $sp, 0x28
    ctx->r7 = ADD32(ctx->r29, 0X28);
    after_2:
    // 0x80273D74: lui         $at, 0x4160
    ctx->r1 = S32(0X4160 << 16);
    // 0x80273D78: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80273D7C: lwc1        $f6, 0x2C($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x80273D80: lw          $v1, 0x34($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X34);
    // 0x80273D84: c.lt.s      $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f4.fl < ctx->f6.fl;
    // 0x80273D88: nop

    // 0x80273D8C: bc1f        L_80273D9C
    if (!c1cs) {
        // 0x80273D90: lw          $t8, 0x30($sp)
        ctx->r24 = MEM_W(ctx->r29, 0X30);
            goto L_80273D9C;
    }
    // 0x80273D90: lw          $t8, 0x30($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X30);
    // 0x80273D94: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
L_80273D98:
    // 0x80273D98: lw          $t8, 0x30($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X30);
L_80273D9C:
    // 0x80273D9C: addiu       $at, $zero, 0x12
    ctx->r1 = ADD32(0, 0X12);
    // 0x80273DA0: beq         $t8, $at, L_80273DB0
    if (ctx->r24 == ctx->r1) {
        // 0x80273DA4: nop
    
            goto L_80273DB0;
    }
    // 0x80273DA4: nop

    // 0x80273DA8: beq         $v1, $zero, L_80273E08
    if (ctx->r3 == 0) {
        // 0x80273DAC: nop
    
            goto L_80273E08;
    }
    // 0x80273DAC: nop

L_80273DB0:
    // 0x80273DB0: lhu         $t9, 0x14($s0)
    ctx->r25 = MEM_HU(ctx->r16, 0X14);
    // 0x80273DB4: nop

    // 0x80273DB8: andi        $t0, $t9, 0x2000
    ctx->r8 = ctx->r25 & 0X2000;
    // 0x80273DBC: bne         $t0, $zero, L_80273E08
    if (ctx->r8 != 0) {
        // 0x80273DC0: nop
    
            goto L_80273E08;
    }
    // 0x80273DC0: nop

    // 0x80273DC4: lhu         $t1, 0x16($s0)
    ctx->r9 = MEM_HU(ctx->r16, 0X16);
    // 0x80273DC8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80273DCC: andi        $t2, $t1, 0xFEFF
    ctx->r10 = ctx->r9 & 0XFEFF;
    // 0x80273DD0: sh          $t2, 0x16($s0)
    MEM_H(0X16, ctx->r16) = ctx->r10;
    // 0x80273DD4: lhu         $a1, 0x3E($sp)
    ctx->r5 = MEM_HU(ctx->r29, 0X3E);
    // 0x80273DD8: jal         0x80273FD0
    // 0x80273DDC: nop

    ovl_8024B800_func_80273FD0(rdram, ctx);
        goto after_3;
    // 0x80273DDC: nop

    after_3:
    // 0x80273DE0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80273DE4: andi        $a1, $v0, 0xFFFF
    ctx->r5 = ctx->r2 & 0XFFFF;
    // 0x80273DE8: jal         0x80272D3C
    // 0x80273DEC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    ovl_8024B800_func_80272D3C(rdram, ctx);
        goto after_4;
    // 0x80273DEC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_4:
    // 0x80273DF0: lhu         $t3, 0x12($s0)
    ctx->r11 = MEM_HU(ctx->r16, 0X12);
    // 0x80273DF4: sb          $zero, 0x5($s0)
    MEM_B(0X5, ctx->r16) = 0;
    // 0x80273DF8: andi        $t4, $t3, 0xCFFF
    ctx->r12 = ctx->r11 & 0XCFFF;
    // 0x80273DFC: sh          $t4, 0x12($s0)
    MEM_H(0X12, ctx->r16) = ctx->r12;
    // 0x80273E00: b           L_80273E14
    // 0x80273E04: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_80273E14;
    // 0x80273E04: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_80273E08:
    // 0x80273E08: b           L_80273E14
    // 0x80273E0C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_80273E14;
    // 0x80273E0C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80273E10: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_80273E14:
    // 0x80273E14: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80273E18: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80273E1C: jr          $ra
    // 0x80273E20: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    return;
    // 0x80273E20: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void ovl_8024B800_func_80273E24(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80273E24: lui         $t6, 0x8012
    ctx->r14 = S32(0X8012 << 16);
    // 0x80273E28: lhu         $t6, 0xB6C($t6)
    ctx->r14 = MEM_HU(ctx->r14, 0XB6C);
    // 0x80273E2C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80273E30: addiu       $at, $zero, 0x6
    ctx->r1 = ADD32(0, 0X6);
    // 0x80273E34: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80273E38: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x80273E3C: bne         $t6, $at, L_80273E4C
    if (ctx->r14 != ctx->r1) {
        // 0x80273E40: or          $a3, $a0, $zero
        ctx->r7 = ctx->r4 | 0;
            goto L_80273E4C;
    }
    // 0x80273E40: or          $a3, $a0, $zero
    ctx->r7 = ctx->r4 | 0;
    // 0x80273E44: b           L_80273FA0
    // 0x80273E48: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_80273FA0;
    // 0x80273E48: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_80273E4C:
    // 0x80273E4C: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
    // 0x80273E50: jal         0x80272C74
    // 0x80273E54: sw          $a3, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r7;
    ovl_8024B800_func_80272C74(rdram, ctx);
        goto after_0;
    // 0x80273E54: sw          $a3, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r7;
    after_0:
    // 0x80273E58: lw          $a3, 0x18($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X18);
    // 0x80273E5C: lhu         $t1, 0x1E($sp)
    ctx->r9 = MEM_HU(ctx->r29, 0X1E);
    // 0x80273E60: addiu       $at, $zero, 0x19
    ctx->r1 = ADD32(0, 0X19);
    // 0x80273E64: bne         $v0, $at, L_80273E88
    if (ctx->r2 != ctx->r1) {
        // 0x80273E68: or          $a0, $a3, $zero
        ctx->r4 = ctx->r7 | 0;
            goto L_80273E88;
    }
    // 0x80273E68: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
    // 0x80273E6C: addiu       $a1, $zero, 0xC
    ctx->r5 = ADD32(0, 0XC);
    // 0x80273E70: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x80273E74: jal         0x80272D3C
    // 0x80273E78: sw          $a3, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r7;
    ovl_8024B800_func_80272D3C(rdram, ctx);
        goto after_1;
    // 0x80273E78: sw          $a3, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r7;
    after_1:
    // 0x80273E7C: lw          $a3, 0x18($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X18);
    // 0x80273E80: lhu         $t1, 0x1E($sp)
    ctx->r9 = MEM_HU(ctx->r29, 0X1E);
    // 0x80273E84: nop

L_80273E88:
    // 0x80273E88: lhu         $t0, 0x18($a3)
    ctx->r8 = MEM_HU(ctx->r7, 0X18);
    // 0x80273E8C: nop

    // 0x80273E90: andi        $t7, $t0, 0x1000
    ctx->r15 = ctx->r8 & 0X1000;
    // 0x80273E94: bne         $t7, $zero, L_80273EB8
    if (ctx->r15 != 0) {
        // 0x80273E98: nop
    
            goto L_80273EB8;
    }
    // 0x80273E98: nop

    // 0x80273E9C: lw          $t8, 0xC8($a3)
    ctx->r24 = MEM_W(ctx->r7, 0XC8);
    // 0x80273EA0: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x80273EA4: lhu         $t9, 0x10($t8)
    ctx->r25 = MEM_HU(ctx->r24, 0X10);
    // 0x80273EA8: nop

    // 0x80273EAC: andi        $t2, $t9, 0x100
    ctx->r10 = ctx->r25 & 0X100;
    // 0x80273EB0: beq         $t2, $zero, L_80273EC0
    if (ctx->r10 == 0) {
        // 0x80273EB4: nop
    
            goto L_80273EC0;
    }
    // 0x80273EB4: nop

L_80273EB8:
    // 0x80273EB8: b           L_80273FA0
    // 0x80273EBC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_80273FA0;
    // 0x80273EBC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_80273EC0:
    // 0x80273EC0: bne         $t1, $at, L_80273F48
    if (ctx->r9 != ctx->r1) {
        // 0x80273EC4: or          $v0, $t1, $zero
        ctx->r2 = ctx->r9 | 0;
            goto L_80273F48;
    }
    // 0x80273EC4: or          $v0, $t1, $zero
    ctx->r2 = ctx->r9 | 0;
    // 0x80273EC8: lui         $at, 0x42A0
    ctx->r1 = S32(0X42A0 << 16);
    // 0x80273ECC: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80273ED0: lwc1        $f6, 0xB4($a3)
    ctx->f6.u32l = MEM_W(ctx->r7, 0XB4);
    // 0x80273ED4: nop

    // 0x80273ED8: c.lt.s      $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f4.fl < ctx->f6.fl;
    // 0x80273EDC: nop

    // 0x80273EE0: bc1f        L_80273F4C
    if (!c1cs) {
        // 0x80273EE4: addiu       $at, $zero, 0x3
        ctx->r1 = ADD32(0, 0X3);
            goto L_80273F4C;
    }
    // 0x80273EE4: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x80273EE8: lw          $t3, 0xD8($a3)
    ctx->r11 = MEM_W(ctx->r7, 0XD8);
    // 0x80273EEC: addiu       $at, $zero, 0x68
    ctx->r1 = ADD32(0, 0X68);
    // 0x80273EF0: lbu         $v1, 0x14($t3)
    ctx->r3 = MEM_BU(ctx->r11, 0X14);
    // 0x80273EF4: ori         $t4, $t0, 0x1000
    ctx->r12 = ctx->r8 | 0X1000;
    // 0x80273EF8: bne         $v1, $at, L_80273F1C
    if (ctx->r3 != ctx->r1) {
        // 0x80273EFC: or          $a0, $a3, $zero
        ctx->r4 = ctx->r7 | 0;
            goto L_80273F1C;
    }
    // 0x80273EFC: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
    // 0x80273F00: sb          $t1, 0x4($a3)
    MEM_B(0X4, ctx->r7) = ctx->r9;
    // 0x80273F04: sh          $t4, 0x18($a3)
    MEM_H(0X18, ctx->r7) = ctx->r12;
    // 0x80273F08: addiu       $a1, $zero, 0x1A5
    ctx->r5 = ADD32(0, 0X1A5);
    // 0x80273F0C: jal         0x80272D3C
    // 0x80273F10: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    ovl_8024B800_func_80272D3C(rdram, ctx);
        goto after_2;
    // 0x80273F10: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_2:
    // 0x80273F14: b           L_80273FA0
    // 0x80273F18: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_80273FA0;
    // 0x80273F18: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_80273F1C:
    // 0x80273F1C: addiu       $at, $zero, 0x29
    ctx->r1 = ADD32(0, 0X29);
    // 0x80273F20: bne         $v1, $at, L_80273F48
    if (ctx->r3 != ctx->r1) {
        // 0x80273F24: ori         $t5, $t0, 0x1000
        ctx->r13 = ctx->r8 | 0X1000;
            goto L_80273F48;
    }
    // 0x80273F24: ori         $t5, $t0, 0x1000
    ctx->r13 = ctx->r8 | 0X1000;
    // 0x80273F28: sb          $t1, 0x4($a3)
    MEM_B(0X4, ctx->r7) = ctx->r9;
    // 0x80273F2C: sh          $t5, 0x18($a3)
    MEM_H(0X18, ctx->r7) = ctx->r13;
    // 0x80273F30: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
    // 0x80273F34: addiu       $a1, $zero, 0x1A4
    ctx->r5 = ADD32(0, 0X1A4);
    // 0x80273F38: jal         0x80272D3C
    // 0x80273F3C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    ovl_8024B800_func_80272D3C(rdram, ctx);
        goto after_3;
    // 0x80273F3C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_3:
    // 0x80273F40: b           L_80273FA0
    // 0x80273F44: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_80273FA0;
    // 0x80273F44: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_80273F48:
    // 0x80273F48: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
L_80273F4C:
    // 0x80273F4C: bne         $v0, $at, L_80273FA0
    if (ctx->r2 != ctx->r1) {
        // 0x80273F50: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_80273FA0;
    }
    // 0x80273F50: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x80273F54: lhu         $t6, 0x2C($a3)
    ctx->r14 = MEM_HU(ctx->r7, 0X2C);
    // 0x80273F58: ori         $t8, $t0, 0x1000
    ctx->r24 = ctx->r8 | 0X1000;
    // 0x80273F5C: andi        $t7, $t6, 0x1
    ctx->r15 = ctx->r14 & 0X1;
    // 0x80273F60: bne         $t7, $zero, L_80273F9C
    if (ctx->r15 != 0) {
        // 0x80273F64: addiu       $a0, $zero, 0x4
        ctx->r4 = ADD32(0, 0X4);
            goto L_80273F9C;
    }
    // 0x80273F64: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
    // 0x80273F68: sb          $t1, 0x4($a3)
    MEM_B(0X4, ctx->r7) = ctx->r9;
    // 0x80273F6C: sh          $t8, 0x18($a3)
    MEM_H(0X18, ctx->r7) = ctx->r24;
    // 0x80273F70: jal         0x80059898
    // 0x80273F74: sw          $a3, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r7;
    func_80059898(rdram, ctx);
        goto after_4;
    // 0x80273F74: sw          $a3, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r7;
    after_4:
    // 0x80273F78: sll         $t9, $v0, 1
    ctx->r25 = S32(ctx->r2 << 1);
    // 0x80273F7C: lui         $a1, 0x8028
    ctx->r5 = S32(0X8028 << 16);
    // 0x80273F80: addu        $a1, $a1, $t9
    ctx->r5 = ADD32(ctx->r5, ctx->r25);
    // 0x80273F84: lhu         $a1, -0x2308($a1)
    ctx->r5 = MEM_HU(ctx->r5, -0X2308);
    // 0x80273F88: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x80273F8C: jal         0x80272D3C
    // 0x80273F90: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    ovl_8024B800_func_80272D3C(rdram, ctx);
        goto after_5;
    // 0x80273F90: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_5:
    // 0x80273F94: b           L_80273FA0
    // 0x80273F98: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_80273FA0;
    // 0x80273F98: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_80273F9C:
    // 0x80273F9C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_80273FA0:
    // 0x80273FA0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80273FA4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80273FA8: jr          $ra
    // 0x80273FAC: nop

    return;
    // 0x80273FAC: nop

;}
RECOMP_FUNC void ovl_8024B800_func_80273FB0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80273FB0: andi        $t6, $a1, 0xFFFF
    ctx->r14 = ctx->r5 & 0XFFFF;
    // 0x80273FB4: sll         $t7, $t6, 1
    ctx->r15 = S32(ctx->r14 << 1);
    // 0x80273FB8: lui         $v0, 0x8028
    ctx->r2 = S32(0X8028 << 16);
    // 0x80273FBC: addu        $v0, $v0, $t7
    ctx->r2 = ADD32(ctx->r2, ctx->r15);
    // 0x80273FC0: lhu         $v0, -0x25F8($v0)
    ctx->r2 = MEM_HU(ctx->r2, -0X25F8);
    // 0x80273FC4: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x80273FC8: jr          $ra
    // 0x80273FCC: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    return;
    // 0x80273FCC: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
;}
RECOMP_FUNC void ovl_8024B800_func_80273FD0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80273FD0: andi        $t6, $a1, 0xFFFF
    ctx->r14 = ctx->r5 & 0XFFFF;
    // 0x80273FD4: sll         $t7, $t6, 1
    ctx->r15 = S32(ctx->r14 << 1);
    // 0x80273FD8: lui         $v0, 0x8028
    ctx->r2 = S32(0X8028 << 16);
    // 0x80273FDC: addu        $v0, $v0, $t7
    ctx->r2 = ADD32(ctx->r2, ctx->r15);
    // 0x80273FE0: lhu         $v0, -0x2620($v0)
    ctx->r2 = MEM_HU(ctx->r2, -0X2620);
    // 0x80273FE4: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x80273FE8: jr          $ra
    // 0x80273FEC: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    return;
    // 0x80273FEC: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
;}
RECOMP_FUNC void ovl_8024B800_func_80273FF0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80273FF0: addiu       $sp, $sp, -0x58
    ctx->r29 = ADD32(ctx->r29, -0X58);
    // 0x80273FF4: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x80273FF8: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80273FFC: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80274000: ori         $t6, $zero, 0xFFFF
    ctx->r14 = 0 | 0XFFFF;
    // 0x80274004: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x80274008: sh          $t6, 0x38($sp)
    MEM_H(0X38, ctx->r29) = ctx->r14;
    // 0x8027400C: jal         0x80273484
    // 0x80274010: swc1        $f4, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->f4.u32l;
    ovl_8024B800_func_80273484(rdram, ctx);
        goto after_0;
    // 0x80274010: swc1        $f4, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->f4.u32l;
    after_0:
    // 0x80274014: sw          $v0, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r2;
    // 0x80274018: lbu         $t7, 0x0($s0)
    ctx->r15 = MEM_BU(ctx->r16, 0X0);
    // 0x8027401C: addiu       $at, $zero, 0x4E
    ctx->r1 = ADD32(0, 0X4E);
    // 0x80274020: bne         $t7, $at, L_80274084
    if (ctx->r15 != ctx->r1) {
        // 0x80274024: lui         $t5, 0x8012
        ctx->r13 = S32(0X8012 << 16);
            goto L_80274084;
    }
    // 0x80274024: lui         $t5, 0x8012
    ctx->r13 = S32(0X8012 << 16);
    // 0x80274028: lw          $t9, 0xC8($s0)
    ctx->r25 = MEM_W(ctx->r16, 0XC8);
    // 0x8027402C: lhu         $t8, 0x1A($s0)
    ctx->r24 = MEM_HU(ctx->r16, 0X1A);
    // 0x80274030: lhu         $t0, 0x92C($t9)
    ctx->r8 = MEM_HU(ctx->r25, 0X92C);
    // 0x80274034: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x80274038: addu        $t1, $t8, $t0
    ctx->r9 = ADD32(ctx->r24, ctx->r8);
    // 0x8027403C: div         $zero, $t1, $at
    lo = S32(S64(S32(ctx->r9)) / S64(S32(ctx->r1))); hi = S32(S64(S32(ctx->r9)) % S64(S32(ctx->r1)));
    // 0x80274040: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x80274044: mfhi        $t2
    ctx->r10 = hi;
    // 0x80274048: bne         $t2, $zero, L_80274084
    if (ctx->r10 != 0) {
        // 0x8027404C: nop
    
            goto L_80274084;
    }
    // 0x8027404C: nop

    // 0x80274050: bne         $v0, $at, L_80274084
    if (ctx->r2 != ctx->r1) {
        // 0x80274054: nop
    
            goto L_80274084;
    }
    // 0x80274054: nop

    // 0x80274058: lbu         $t3, 0x4($s0)
    ctx->r11 = MEM_BU(ctx->r16, 0X4);
    // 0x8027405C: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x80274060: beq         $t3, $at, L_80274084
    if (ctx->r11 == ctx->r1) {
        // 0x80274064: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80274084;
    }
    // 0x80274064: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80274068: sb          $v0, 0x4($s0)
    MEM_B(0X4, ctx->r16) = ctx->r2;
    // 0x8027406C: addiu       $a1, $zero, 0x1A1
    ctx->r5 = ADD32(0, 0X1A1);
    // 0x80274070: jal         0x80272D3C
    // 0x80274074: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    ovl_8024B800_func_80272D3C(rdram, ctx);
        goto after_1;
    // 0x80274074: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_1:
    // 0x80274078: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x8027407C: b           L_80274A14
    // 0x80274080: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_80274A14;
    // 0x80274080: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_80274084:
    // 0x80274084: lw          $t5, 0xB24($t5)
    ctx->r13 = MEM_W(ctx->r13, 0XB24);
    // 0x80274088: lui         $t6, 0x8012
    ctx->r14 = S32(0X8012 << 16);
    // 0x8027408C: bne         $s0, $t5, L_802740C8
    if (ctx->r16 != ctx->r13) {
        // 0x80274090: lw          $a1, 0x54($sp)
        ctx->r5 = MEM_W(ctx->r29, 0X54);
            goto L_802740C8;
    }
    // 0x80274090: lw          $a1, 0x54($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X54);
    // 0x80274094: lhu         $t6, 0xB78($t6)
    ctx->r14 = MEM_HU(ctx->r14, 0XB78);
    // 0x80274098: addiu       $at, $zero, 0x9
    ctx->r1 = ADD32(0, 0X9);
    // 0x8027409C: bne         $t6, $at, L_802740C8
    if (ctx->r14 != ctx->r1) {
        // 0x802740A0: lw          $a1, 0x54($sp)
        ctx->r5 = MEM_W(ctx->r29, 0X54);
            goto L_802740C8;
    }
    // 0x802740A0: lw          $a1, 0x54($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X54);
    // 0x802740A4: lhu         $a1, 0x56($sp)
    ctx->r5 = MEM_HU(ctx->r29, 0X56);
    // 0x802740A8: jal         0x80273E24
    // 0x802740AC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_8024B800_func_80273E24(rdram, ctx);
        goto after_2;
    // 0x802740AC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_2:
    // 0x802740B0: beq         $v0, $zero, L_802740C8
    if (ctx->r2 == 0) {
        // 0x802740B4: lw          $a1, 0x54($sp)
        ctx->r5 = MEM_W(ctx->r29, 0X54);
            goto L_802740C8;
    }
    // 0x802740B4: lw          $a1, 0x54($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X54);
    // 0x802740B8: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x802740BC: b           L_80274A14
    // 0x802740C0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_80274A14;
    // 0x802740C0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x802740C4: lw          $a1, 0x54($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X54);
L_802740C8:
    // 0x802740C8: jal         0x80273D10
    // 0x802740CC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_8024B800_func_80273D10(rdram, ctx);
        goto after_3;
    // 0x802740CC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_3:
    // 0x802740D0: beq         $v0, $zero, L_802740E4
    if (ctx->r2 == 0) {
        // 0x802740D4: nop
    
            goto L_802740E4;
    }
    // 0x802740D4: nop

    // 0x802740D8: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x802740DC: b           L_80274A14
    // 0x802740E0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_80274A14;
    // 0x802740E0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_802740E4:
    // 0x802740E4: lw          $t7, 0xD8($s0)
    ctx->r15 = MEM_W(ctx->r16, 0XD8);
    // 0x802740E8: lw          $a1, 0x54($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X54);
    // 0x802740EC: lbu         $t9, 0x1D($t7)
    ctx->r25 = MEM_BU(ctx->r15, 0X1D);
    // 0x802740F0: sltiu       $at, $a1, 0x3
    ctx->r1 = ctx->r5 < 0X3 ? 1 : 0;
    // 0x802740F4: andi        $t8, $t9, 0xE0
    ctx->r24 = ctx->r25 & 0XE0;
    // 0x802740F8: beq         $t8, $zero, L_80274204
    if (ctx->r24 == 0) {
        // 0x802740FC: nop
    
            goto L_80274204;
    }
    // 0x802740FC: nop

    // 0x80274100: beq         $at, $zero, L_80274204
    if (ctx->r1 == 0) {
        // 0x80274104: nop
    
            goto L_80274204;
    }
    // 0x80274104: nop

    // 0x80274108: lw          $t0, 0xCC($s0)
    ctx->r8 = MEM_W(ctx->r16, 0XCC);
    // 0x8027410C: lhu         $t2, 0x20($s0)
    ctx->r10 = MEM_HU(ctx->r16, 0X20);
    // 0x80274110: lw          $t1, 0x30($t0)
    ctx->r9 = MEM_W(ctx->r8, 0X30);
    // 0x80274114: andi        $t3, $t2, 0x2
    ctx->r11 = ctx->r10 & 0X2;
    // 0x80274118: lhu         $v0, 0x10($t1)
    ctx->r2 = MEM_HU(ctx->r9, 0X10);
    // 0x8027411C: beq         $t3, $zero, L_8027415C
    if (ctx->r11 == 0) {
        // 0x80274120: addiu       $at, $zero, 0xD3
        ctx->r1 = ADD32(0, 0XD3);
            goto L_8027415C;
    }
    // 0x80274120: addiu       $at, $zero, 0xD3
    ctx->r1 = ADD32(0, 0XD3);
    // 0x80274124: addiu       $at, $zero, 0xD3
    ctx->r1 = ADD32(0, 0XD3);
    // 0x80274128: beq         $v0, $at, L_80274150
    if (ctx->r2 == ctx->r1) {
        // 0x8027412C: addiu       $t5, $zero, 0x1
        ctx->r13 = ADD32(0, 0X1);
            goto L_80274150;
    }
    // 0x8027412C: addiu       $t5, $zero, 0x1
    ctx->r13 = ADD32(0, 0X1);
    // 0x80274130: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80274134: addiu       $a1, $zero, 0xD3
    ctx->r5 = ADD32(0, 0XD3);
    // 0x80274138: jal         0x80272D3C
    // 0x8027413C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    ovl_8024B800_func_80272D3C(rdram, ctx);
        goto after_4;
    // 0x8027413C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_4:
    // 0x80274140: addiu       $t4, $zero, 0x1
    ctx->r12 = ADD32(0, 0X1);
    // 0x80274144: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x80274148: b           L_80274A10
    // 0x8027414C: sb          $t4, 0x4($s0)
    MEM_B(0X4, ctx->r16) = ctx->r12;
        goto L_80274A10;
    // 0x8027414C: sb          $t4, 0x4($s0)
    MEM_B(0X4, ctx->r16) = ctx->r12;
L_80274150:
    // 0x80274150: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x80274154: b           L_80274A10
    // 0x80274158: sb          $t5, 0x4($s0)
    MEM_B(0X4, ctx->r16) = ctx->r13;
        goto L_80274A10;
    // 0x80274158: sb          $t5, 0x4($s0)
    MEM_B(0X4, ctx->r16) = ctx->r13;
L_8027415C:
    // 0x8027415C: bne         $v0, $at, L_802741C8
    if (ctx->r2 != ctx->r1) {
        // 0x80274160: lui         $a0, 0x802B
        ctx->r4 = S32(0X802B << 16);
            goto L_802741C8;
    }
    // 0x80274160: lui         $a0, 0x802B
    ctx->r4 = S32(0X802B << 16);
    // 0x80274164: lw          $a0, 0x6744($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X6744);
    // 0x80274168: lw          $a1, 0xE0($s0)
    ctx->r5 = MEM_W(ctx->r16, 0XE0);
    // 0x8027416C: jal         0x80272CF8
    // 0x80274170: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    ovl_8024B800_func_80272CF8(rdram, ctx);
        goto after_5;
    // 0x80274170: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    after_5:
    // 0x80274174: jal         0x8024C740
    // 0x80274178: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_8024B800_func_8024C740(rdram, ctx);
        goto after_6;
    // 0x80274178: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_6:
    // 0x8027417C: sll         $t6, $v0, 2
    ctx->r14 = S32(ctx->r2 << 2);
    // 0x80274180: lui         $t7, 0x802B
    ctx->r15 = S32(0X802B << 16);
    // 0x80274184: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80274188: lw          $t7, 0x5F10($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X5F10);
    // 0x8027418C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80274190: jal         0x8024C740
    // 0x80274194: sw          $t7, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r15;
    ovl_8024B800_func_8024C740(rdram, ctx);
        goto after_7;
    // 0x80274194: sw          $t7, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r15;
    after_7:
    // 0x80274198: lw          $t9, 0x34($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X34);
    // 0x8027419C: lw          $t0, 0xE0($s0)
    ctx->r8 = MEM_W(ctx->r16, 0XE0);
    // 0x802741A0: lw          $t8, 0x4($t9)
    ctx->r24 = MEM_W(ctx->r25, 0X4);
    // 0x802741A4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802741A8: sw          $t8, 0x4($t0)
    MEM_W(0X4, ctx->r8) = ctx->r24;
    // 0x802741AC: lhu         $a1, 0x3E($s0)
    ctx->r5 = MEM_HU(ctx->r16, 0X3E);
    // 0x802741B0: jal         0x80272D3C
    // 0x802741B4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    ovl_8024B800_func_80272D3C(rdram, ctx);
        goto after_8;
    // 0x802741B4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_8:
    // 0x802741B8: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
    // 0x802741BC: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x802741C0: b           L_80274A10
    // 0x802741C4: sb          $t1, 0x4($s0)
    MEM_B(0X4, ctx->r16) = ctx->r9;
        goto L_80274A10;
    // 0x802741C4: sb          $t1, 0x4($s0)
    MEM_B(0X4, ctx->r16) = ctx->r9;
L_802741C8:
    // 0x802741C8: jal         0x80272C74
    // 0x802741CC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_8024B800_func_80272C74(rdram, ctx);
        goto after_9;
    // 0x802741CC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_9:
    // 0x802741D0: addiu       $at, $zero, 0x23
    ctx->r1 = ADD32(0, 0X23);
    // 0x802741D4: bne         $v0, $at, L_80274204
    if (ctx->r2 != ctx->r1) {
        // 0x802741D8: nop
    
            goto L_80274204;
    }
    // 0x802741D8: nop

    // 0x802741DC: jal         0x8024C740
    // 0x802741E0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_8024B800_func_8024C740(rdram, ctx);
        goto after_10;
    // 0x802741E0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_10:
    // 0x802741E4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802741E8: andi        $a1, $v0, 0xFFFF
    ctx->r5 = ctx->r2 & 0XFFFF;
    // 0x802741EC: jal         0x80272D3C
    // 0x802741F0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    ovl_8024B800_func_80272D3C(rdram, ctx);
        goto after_11;
    // 0x802741F0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_11:
    // 0x802741F4: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x802741F8: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x802741FC: b           L_80274A10
    // 0x80274200: sb          $t2, 0x4($s0)
    MEM_B(0X4, ctx->r16) = ctx->r10;
        goto L_80274A10;
    // 0x80274200: sb          $t2, 0x4($s0)
    MEM_B(0X4, ctx->r16) = ctx->r10;
L_80274204:
    // 0x80274204: lhu         $t3, 0x18($s0)
    ctx->r11 = MEM_HU(ctx->r16, 0X18);
    // 0x80274208: lw          $a1, 0x54($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X54);
    // 0x8027420C: andi        $t4, $t3, 0x100
    ctx->r12 = ctx->r11 & 0X100;
    // 0x80274210: beq         $t4, $zero, L_8027438C
    if (ctx->r12 == 0) {
        // 0x80274214: lui         $t5, 0x8009
        ctx->r13 = S32(0X8009 << 16);
            goto L_8027438C;
    }
    // 0x80274214: lui         $t5, 0x8009
    ctx->r13 = S32(0X8009 << 16);
    // 0x80274218: lw          $t5, 0x3B20($t5)
    ctx->r13 = MEM_W(ctx->r13, 0X3B20);
    // 0x8027421C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80274220: lw          $t6, 0x88($t5)
    ctx->r14 = MEM_W(ctx->r13, 0X88);
    // 0x80274224: nop

    // 0x80274228: beq         $s0, $t6, L_8027438C
    if (ctx->r16 == ctx->r14) {
        // 0x8027422C: nop
    
            goto L_8027438C;
    }
    // 0x8027422C: nop

    // 0x80274230: jal         0x8027356C
    // 0x80274234: addiu       $a2, $sp, 0x48
    ctx->r6 = ADD32(ctx->r29, 0X48);
    ovl_8024B800_func_8027356C(rdram, ctx);
        goto after_12;
    // 0x80274234: addiu       $a2, $sp, 0x48
    ctx->r6 = ADD32(ctx->r29, 0X48);
    after_12:
    // 0x80274238: jal         0x802732F4
    // 0x8027423C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_8024B800_func_802732F4(rdram, ctx);
        goto after_13;
    // 0x8027423C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_13:
    // 0x80274240: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x80274244: lwc1        $f8, 0x48($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X48);
    // 0x80274248: nop

    // 0x8027424C: c.lt.s      $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f6.fl < ctx->f8.fl;
    // 0x80274250: nop

    // 0x80274254: bc1f        L_80274264
    if (!c1cs) {
        // 0x80274258: nop
    
            goto L_80274264;
    }
    // 0x80274258: nop

    // 0x8027425C: jal         0x802732D0
    // 0x80274260: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_8024B800_func_802732D0(rdram, ctx);
        goto after_14;
    // 0x80274260: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_14:
L_80274264:
    // 0x80274264: lhu         $v0, 0x18($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X18);
    // 0x80274268: lw          $t8, 0x54($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X54);
    // 0x8027426C: andi        $t7, $v0, 0x200
    ctx->r15 = ctx->r2 & 0X200;
    // 0x80274270: beq         $t7, $zero, L_80274320
    if (ctx->r15 == 0) {
        // 0x80274274: lui         $t6, 0x8010
        ctx->r14 = S32(0X8010 << 16);
            goto L_80274320;
    }
    // 0x80274274: lui         $t6, 0x8010
    ctx->r14 = S32(0X8010 << 16);
    // 0x80274278: lw          $t9, 0x54($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X54);
    // 0x8027427C: lbu         $t8, 0x4($s0)
    ctx->r24 = MEM_BU(ctx->r16, 0X4);
    // 0x80274280: nop

    // 0x80274284: bne         $t9, $t8, L_802742E0
    if (ctx->r25 != ctx->r24) {
        // 0x80274288: nop
    
            goto L_802742E0;
    }
    // 0x80274288: nop

    // 0x8027428C: jal         0x80272C74
    // 0x80274290: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_8024B800_func_80272C74(rdram, ctx);
        goto after_15;
    // 0x80274290: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_15:
    // 0x80274294: addiu       $at, $zero, 0x17
    ctx->r1 = ADD32(0, 0X17);
    // 0x80274298: beq         $v0, $at, L_802742E0
    if (ctx->r2 == ctx->r1) {
        // 0x8027429C: nop
    
            goto L_802742E0;
    }
    // 0x8027429C: nop

    // 0x802742A0: lw          $t0, 0xC8($s0)
    ctx->r8 = MEM_W(ctx->r16, 0XC8);
    // 0x802742A4: nop

    // 0x802742A8: lw          $t1, 0x914($t0)
    ctx->r9 = MEM_W(ctx->r8, 0X914);
    // 0x802742AC: nop

    // 0x802742B0: beq         $s0, $t1, L_802742E0
    if (ctx->r16 == ctx->r9) {
        // 0x802742B4: nop
    
            goto L_802742E0;
    }
    // 0x802742B4: nop

    // 0x802742B8: jal         0x8026FFAC
    // 0x802742BC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_8024B800_func_8026FFAC(rdram, ctx);
        goto after_16;
    // 0x802742BC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_16:
    // 0x802742C0: beq         $v0, $zero, L_802742E0
    if (ctx->r2 == 0) {
        // 0x802742C4: lui         $t2, 0x8009
        ctx->r10 = S32(0X8009 << 16);
            goto L_802742E0;
    }
    // 0x802742C4: lui         $t2, 0x8009
    ctx->r10 = S32(0X8009 << 16);
    // 0x802742C8: lw          $t2, 0x3B20($t2)
    ctx->r10 = MEM_W(ctx->r10, 0X3B20);
    // 0x802742CC: lw          $a1, 0x54($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X54);
    // 0x802742D0: lw          $t3, 0x88($t2)
    ctx->r11 = MEM_W(ctx->r10, 0X88);
    // 0x802742D4: nop

    // 0x802742D8: bne         $s0, $t3, L_80274318
    if (ctx->r16 != ctx->r11) {
        // 0x802742DC: nop
    
            goto L_80274318;
    }
    // 0x802742DC: nop

L_802742E0:
    // 0x802742E0: lhu         $t4, 0x18($s0)
    ctx->r12 = MEM_HU(ctx->r16, 0X18);
    // 0x802742E4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802742E8: andi        $t5, $t4, 0xFCFF
    ctx->r13 = ctx->r12 & 0XFCFF;
    // 0x802742EC: sh          $t5, 0x18($s0)
    MEM_H(0X18, ctx->r16) = ctx->r13;
    // 0x802742F0: lhu         $a1, 0x56($sp)
    ctx->r5 = MEM_HU(ctx->r29, 0X56);
    // 0x802742F4: jal         0x80273FD0
    // 0x802742F8: nop

    ovl_8024B800_func_80273FD0(rdram, ctx);
        goto after_17;
    // 0x802742F8: nop

    after_17:
    // 0x802742FC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80274300: andi        $a1, $v0, 0xFFFF
    ctx->r5 = ctx->r2 & 0XFFFF;
    // 0x80274304: jal         0x80272D3C
    // 0x80274308: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    ovl_8024B800_func_80272D3C(rdram, ctx);
        goto after_18;
    // 0x80274308: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_18:
    // 0x8027430C: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x80274310: b           L_80274A14
    // 0x80274314: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_80274A14;
    // 0x80274314: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_80274318:
    // 0x80274318: b           L_80274390
    // 0x8027431C: lhu         $v1, 0x16($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X16);
        goto L_80274390;
    // 0x8027431C: lhu         $v1, 0x16($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X16);
L_80274320:
    // 0x80274320: lhu         $t6, 0x522A($t6)
    ctx->r14 = MEM_HU(ctx->r14, 0X522A);
    // 0x80274324: sll         $t0, $t8, 1
    ctx->r8 = S32(ctx->r24 << 1);
    // 0x80274328: andi        $t7, $t6, 0x1
    ctx->r15 = ctx->r14 & 0X1;
    // 0x8027432C: sll         $t9, $t7, 3
    ctx->r25 = S32(ctx->r15 << 3);
    // 0x80274330: addu        $t1, $t9, $t0
    ctx->r9 = ADD32(ctx->r25, ctx->r8);
    // 0x80274334: lui         $t2, 0x8028
    ctx->r10 = S32(0X8028 << 16);
    // 0x80274338: addu        $t2, $t2, $t1
    ctx->r10 = ADD32(ctx->r10, ctx->r9);
    // 0x8027433C: lhu         $t2, -0x25A0($t2)
    ctx->r10 = MEM_HU(ctx->r10, -0X25A0);
    // 0x80274340: ori         $at, $zero, 0xFFFF
    ctx->r1 = 0 | 0XFFFF;
    // 0x80274344: beq         $t2, $at, L_8027437C
    if (ctx->r10 == ctx->r1) {
        // 0x80274348: sh          $t2, 0x38($sp)
        MEM_H(0X38, ctx->r29) = ctx->r10;
            goto L_8027437C;
    }
    // 0x80274348: sh          $t2, 0x38($sp)
    MEM_H(0X38, ctx->r29) = ctx->r10;
    // 0x8027434C: lhu         $t4, 0x16($s0)
    ctx->r12 = MEM_HU(ctx->r16, 0X16);
    // 0x80274350: ori         $t3, $v0, 0x200
    ctx->r11 = ctx->r2 | 0X200;
    // 0x80274354: andi        $t5, $t4, 0xF7FB
    ctx->r13 = ctx->r12 & 0XF7FB;
    // 0x80274358: sh          $t3, 0x18($s0)
    MEM_H(0X18, ctx->r16) = ctx->r11;
    // 0x8027435C: sh          $t5, 0x16($s0)
    MEM_H(0X16, ctx->r16) = ctx->r13;
    // 0x80274360: lhu         $a1, 0x38($sp)
    ctx->r5 = MEM_HU(ctx->r29, 0X38);
    // 0x80274364: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80274368: jal         0x80272D3C
    // 0x8027436C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    ovl_8024B800_func_80272D3C(rdram, ctx);
        goto after_19;
    // 0x8027436C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_19:
    // 0x80274370: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x80274374: b           L_80274A14
    // 0x80274378: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_80274A14;
    // 0x80274378: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_8027437C:
    // 0x8027437C: andi        $t6, $v0, 0xFEFF
    ctx->r14 = ctx->r2 & 0XFEFF;
    // 0x80274380: sh          $t6, 0x18($s0)
    MEM_H(0X18, ctx->r16) = ctx->r14;
    // 0x80274384: lw          $a1, 0x54($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X54);
    // 0x80274388: nop

L_8027438C:
    // 0x8027438C: lhu         $v1, 0x16($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X16);
L_80274390:
    // 0x80274390: nop

    // 0x80274394: andi        $t7, $v1, 0x2
    ctx->r15 = ctx->r3 & 0X2;
    // 0x80274398: beq         $t7, $zero, L_802743EC
    if (ctx->r15 == 0) {
        // 0x8027439C: andi        $t8, $v1, 0xF7FB
        ctx->r24 = ctx->r3 & 0XF7FB;
            goto L_802743EC;
    }
    // 0x8027439C: andi        $t8, $v1, 0xF7FB
    ctx->r24 = ctx->r3 & 0XF7FB;
    // 0x802743A0: sh          $t8, 0x16($s0)
    MEM_H(0X16, ctx->r16) = ctx->r24;
    // 0x802743A4: sw          $zero, 0x44($sp)
    MEM_W(0X44, ctx->r29) = 0;
    // 0x802743A8: lbu         $t9, 0x4($s0)
    ctx->r25 = MEM_BU(ctx->r16, 0X4);
    // 0x802743AC: sll         $t0, $a1, 1
    ctx->r8 = S32(ctx->r5 << 1);
    // 0x802743B0: beq         $a1, $t9, L_802749D8
    if (ctx->r5 == ctx->r25) {
        // 0x802743B4: lui         $t1, 0x8028
        ctx->r9 = S32(0X8028 << 16);
            goto L_802749D8;
    }
    // 0x802743B4: lui         $t1, 0x8028
    ctx->r9 = S32(0X8028 << 16);
    // 0x802743B8: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x802743BC: lhu         $t1, -0x2608($t1)
    ctx->r9 = MEM_HU(ctx->r9, -0X2608);
    // 0x802743C0: bne         $a1, $zero, L_802749D8
    if (ctx->r5 != 0) {
        // 0x802743C4: sh          $t1, 0x38($sp)
        MEM_H(0X38, ctx->r29) = ctx->r9;
            goto L_802749D8;
    }
    // 0x802743C4: sh          $t1, 0x38($sp)
    MEM_H(0X38, ctx->r29) = ctx->r9;
    // 0x802743C8: lw          $t2, 0xD8($s0)
    ctx->r10 = MEM_W(ctx->r16, 0XD8);
    // 0x802743CC: lui         $at, 0xF4
    ctx->r1 = S32(0XF4 << 16);
    // 0x802743D0: lw          $t3, 0x20($t2)
    ctx->r11 = MEM_W(ctx->r10, 0X20);
    // 0x802743D4: ori         $at, $at, 0x2400
    ctx->r1 = ctx->r1 | 0X2400;
    // 0x802743D8: sltu        $at, $t3, $at
    ctx->r1 = ctx->r11 < ctx->r1 ? 1 : 0;
    // 0x802743DC: beq         $at, $zero, L_802749D8
    if (ctx->r1 == 0) {
        // 0x802743E0: addiu       $t4, $zero, 0xB6
        ctx->r12 = ADD32(0, 0XB6);
            goto L_802749D8;
    }
    // 0x802743E0: addiu       $t4, $zero, 0xB6
    ctx->r12 = ADD32(0, 0XB6);
    // 0x802743E4: b           L_802749D8
    // 0x802743E8: sh          $t4, 0x38($sp)
    MEM_H(0X38, ctx->r29) = ctx->r12;
        goto L_802749D8;
    // 0x802743E8: sh          $t4, 0x38($sp)
    MEM_H(0X38, ctx->r29) = ctx->r12;
L_802743EC:
    // 0x802743EC: lwc1        $f12, 0xB0($s0)
    ctx->f12.u32l = MEM_W(ctx->r16, 0XB0);
    // 0x802743F0: lwc1        $f14, 0x8C($s0)
    ctx->f14.u32l = MEM_W(ctx->r16, 0X8C);
    // 0x802743F4: jal         0x8027924C
    // 0x802743F8: nop

    ovl_8024B800_func_8027924C(rdram, ctx);
        goto after_20;
    // 0x802743F8: nop

    after_20:
    // 0x802743FC: swc1        $f0, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->f0.u32l;
    // 0x80274400: jal         0x80272AEC
    // 0x80274404: mov.s       $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    ctx->f12.fl = ctx->f0.fl;
    ovl_8024B800_func_80272AEC(rdram, ctx);
        goto after_21;
    // 0x80274404: mov.s       $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    ctx->f12.fl = ctx->f0.fl;
    after_21:
    // 0x80274408: lui         $v0, 0x8010
    ctx->r2 = S32(0X8010 << 16);
    // 0x8027440C: addiu       $v0, $v0, -0x3770
    ctx->r2 = ADD32(ctx->r2, -0X3770);
    // 0x80274410: addiu       $t5, $v0, 0x7FFF
    ctx->r13 = ADD32(ctx->r2, 0X7FFF);
    // 0x80274414: lbu         $t5, 0x99D($t5)
    ctx->r13 = MEM_BU(ctx->r13, 0X99D);
    // 0x80274418: addiu       $at, $zero, 0x6
    ctx->r1 = ADD32(0, 0X6);
    // 0x8027441C: bne         $t5, $at, L_80274454
    if (ctx->r13 != ctx->r1) {
        // 0x80274420: mov.s       $f2, $f0
        CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.fl = ctx->f0.fl;
            goto L_80274454;
    }
    // 0x80274420: mov.s       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.fl = ctx->f0.fl;
    // 0x80274424: addiu       $t6, $v0, 0x7FFF
    ctx->r14 = ADD32(ctx->r2, 0X7FFF);
    // 0x80274428: lhu         $t6, 0x99B($t6)
    ctx->r14 = MEM_HU(ctx->r14, 0X99B);
    // 0x8027442C: lw          $t8, 0x54($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X54);
    // 0x80274430: andi        $t7, $t6, 0x3
    ctx->r15 = ctx->r14 & 0X3;
    // 0x80274434: beq         $t7, $zero, L_80274458
    if (ctx->r15 == 0) {
        // 0x80274438: lhu         $a1, 0x56($sp)
        ctx->r5 = MEM_HU(ctx->r29, 0X56);
            goto L_80274458;
    }
    // 0x80274438: lhu         $a1, 0x56($sp)
    ctx->r5 = MEM_HU(ctx->r29, 0X56);
    // 0x8027443C: lbu         $t9, 0x4($s0)
    ctx->r25 = MEM_BU(ctx->r16, 0X4);
    // 0x80274440: nop

    // 0x80274444: bne         $t8, $t9, L_80274458
    if (ctx->r24 != ctx->r25) {
        // 0x80274448: lhu         $a1, 0x56($sp)
        ctx->r5 = MEM_HU(ctx->r29, 0X56);
            goto L_80274458;
    }
    // 0x80274448: lhu         $a1, 0x56($sp)
    ctx->r5 = MEM_HU(ctx->r29, 0X56);
    // 0x8027444C: b           L_80274A14
    // 0x80274450: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_80274A14;
    // 0x80274450: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_80274454:
    // 0x80274454: lhu         $a1, 0x56($sp)
    ctx->r5 = MEM_HU(ctx->r29, 0X56);
L_80274458:
    // 0x80274458: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8027445C: swc1        $f2, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->f2.u32l;
    // 0x80274460: jal         0x80272374
    // 0x80274464: sw          $a1, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r5;
    ovl_8024B800_func_80272374(rdram, ctx);
        goto after_22;
    // 0x80274464: sw          $a1, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r5;
    after_22:
    // 0x80274468: beq         $v0, $zero, L_802744CC
    if (ctx->r2 == 0) {
        // 0x8027446C: sw          $v0, 0x44($sp)
        MEM_W(0X44, ctx->r29) = ctx->r2;
            goto L_802744CC;
    }
    // 0x8027446C: sw          $v0, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r2;
    // 0x80274470: lb          $v1, 0x5($s0)
    ctx->r3 = MEM_B(ctx->r16, 0X5);
    // 0x80274474: nop

    // 0x80274478: bne         $v0, $v1, L_80274488
    if (ctx->r2 != ctx->r3) {
        // 0x8027447C: nop
    
            goto L_80274488;
    }
    // 0x8027447C: nop

    // 0x80274480: bne         $v1, $zero, L_802749DC
    if (ctx->r3 != 0) {
        // 0x80274484: lw          $a1, 0x54($sp)
        ctx->r5 = MEM_W(ctx->r29, 0X54);
            goto L_802749DC;
    }
    // 0x80274484: lw          $a1, 0x54($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X54);
L_80274488:
    // 0x80274488: jal         0x80272C74
    // 0x8027448C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_8024B800_func_80272C74(rdram, ctx);
        goto after_23;
    // 0x8027448C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_23:
    // 0x80274490: addiu       $at, $zero, 0x22
    ctx->r1 = ADD32(0, 0X22);
    // 0x80274494: beq         $v0, $at, L_802749DC
    if (ctx->r2 == ctx->r1) {
        // 0x80274498: lw          $a1, 0x54($sp)
        ctx->r5 = MEM_W(ctx->r29, 0X54);
            goto L_802749DC;
    }
    // 0x80274498: lw          $a1, 0x54($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X54);
    // 0x8027449C: lhu         $t0, 0x1A($s0)
    ctx->r8 = MEM_HU(ctx->r16, 0X1A);
    // 0x802744A0: lw          $a1, 0x44($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X44);
    // 0x802744A4: beq         $t0, $zero, L_802744B8
    if (ctx->r8 == 0) {
        // 0x802744A8: lui         $a2, 0x8028
        ctx->r6 = S32(0X8028 << 16);
            goto L_802744B8;
    }
    // 0x802744A8: lui         $a2, 0x8028
    ctx->r6 = S32(0X8028 << 16);
    // 0x802744AC: lui         $a2, 0x8028
    ctx->r6 = S32(0X8028 << 16);
    // 0x802744B0: b           L_802744BC
    // 0x802744B4: addiu       $a2, $a2, -0x25C8
    ctx->r6 = ADD32(ctx->r6, -0X25C8);
        goto L_802744BC;
    // 0x802744B4: addiu       $a2, $a2, -0x25C8
    ctx->r6 = ADD32(ctx->r6, -0X25C8);
L_802744B8:
    // 0x802744B8: addiu       $a2, $a2, -0x25B4
    ctx->r6 = ADD32(ctx->r6, -0X25B4);
L_802744BC:
    // 0x802744BC: jal         0x80273428
    // 0x802744C0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_8024B800_func_80273428(rdram, ctx);
        goto after_24;
    // 0x802744C0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_24:
    // 0x802744C4: b           L_802749D8
    // 0x802744C8: sh          $v0, 0x38($sp)
    MEM_H(0X38, ctx->r29) = ctx->r2;
        goto L_802749D8;
    // 0x802744C8: sh          $v0, 0x38($sp)
    MEM_H(0X38, ctx->r29) = ctx->r2;
L_802744CC:
    // 0x802744CC: lb          $t1, 0x5($s0)
    ctx->r9 = MEM_B(ctx->r16, 0X5);
    // 0x802744D0: lw          $a1, 0x54($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X54);
    // 0x802744D4: beq         $t1, $zero, L_8027453C
    if (ctx->r9 == 0) {
        // 0x802744D8: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_8027453C;
    }
    // 0x802744D8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802744DC: jal         0x802732F4
    // 0x802744E0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_8024B800_func_802732F4(rdram, ctx);
        goto after_25;
    // 0x802744E0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_25:
    // 0x802744E4: lhu         $t2, 0x12($s0)
    ctx->r10 = MEM_HU(ctx->r16, 0X12);
    // 0x802744E8: lw          $t4, 0xD8($s0)
    ctx->r12 = MEM_W(ctx->r16, 0XD8);
    // 0x802744EC: andi        $t3, $t2, 0xCFFF
    ctx->r11 = ctx->r10 & 0XCFFF;
    // 0x802744F0: sh          $t3, 0x12($s0)
    MEM_H(0X12, ctx->r16) = ctx->r11;
    // 0x802744F4: lw          $t5, 0x20($t4)
    ctx->r13 = MEM_W(ctx->r12, 0X20);
    // 0x802744F8: lui         $at, 0xF4
    ctx->r1 = S32(0XF4 << 16);
    // 0x802744FC: ori         $at, $at, 0x2400
    ctx->r1 = ctx->r1 | 0X2400;
    // 0x80274500: sltu        $at, $t5, $at
    ctx->r1 = ctx->r13 < ctx->r1 ? 1 : 0;
    // 0x80274504: beq         $at, $zero, L_8027452C
    if (ctx->r1 == 0) {
        // 0x80274508: lhu         $a1, 0x2A($sp)
        ctx->r5 = MEM_HU(ctx->r29, 0X2A);
            goto L_8027452C;
    }
    // 0x80274508: lhu         $a1, 0x2A($sp)
    ctx->r5 = MEM_HU(ctx->r29, 0X2A);
    // 0x8027450C: lw          $t6, 0x54($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X54);
    // 0x80274510: lui         $t8, 0x8028
    ctx->r24 = S32(0X8028 << 16);
    // 0x80274514: sll         $t7, $t6, 1
    ctx->r15 = S32(ctx->r14 << 1);
    // 0x80274518: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x8027451C: lhu         $t8, -0x2600($t8)
    ctx->r24 = MEM_HU(ctx->r24, -0X2600);
    // 0x80274520: b           L_802749D8
    // 0x80274524: sh          $t8, 0x38($sp)
    MEM_H(0X38, ctx->r29) = ctx->r24;
        goto L_802749D8;
    // 0x80274524: sh          $t8, 0x38($sp)
    MEM_H(0X38, ctx->r29) = ctx->r24;
    // 0x80274528: lhu         $a1, 0x2A($sp)
    ctx->r5 = MEM_HU(ctx->r29, 0X2A);
L_8027452C:
    // 0x8027452C: jal         0x80273FD0
    // 0x80274530: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_8024B800_func_80273FD0(rdram, ctx);
        goto after_26;
    // 0x80274530: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_26:
    // 0x80274534: b           L_802749D8
    // 0x80274538: sh          $v0, 0x38($sp)
    MEM_H(0X38, ctx->r29) = ctx->r2;
        goto L_802749D8;
    // 0x80274538: sh          $v0, 0x38($sp)
    MEM_H(0X38, ctx->r29) = ctx->r2;
L_8027453C:
    // 0x8027453C: jal         0x8027356C
    // 0x80274540: addiu       $a2, $sp, 0x48
    ctx->r6 = ADD32(ctx->r29, 0X48);
    ovl_8024B800_func_8027356C(rdram, ctx);
        goto after_27;
    // 0x80274540: addiu       $a2, $sp, 0x48
    ctx->r6 = ADD32(ctx->r29, 0X48);
    after_27:
    // 0x80274544: lhu         $v1, 0x16($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X16);
    // 0x80274548: or          $a3, $v0, $zero
    ctx->r7 = ctx->r2 | 0;
    // 0x8027454C: andi        $a0, $v1, 0x4
    ctx->r4 = ctx->r3 & 0X4;
    // 0x80274550: bne         $a0, $zero, L_80274594
    if (ctx->r4 != 0) {
        // 0x80274554: addiu       $at, $zero, 0x1
        ctx->r1 = ADD32(0, 0X1);
            goto L_80274594;
    }
    // 0x80274554: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80274558: bne         $v0, $at, L_8027458C
    if (ctx->r2 != ctx->r1) {
        // 0x8027455C: ori         $t9, $v1, 0x404
        ctx->r25 = ctx->r3 | 0X404;
            goto L_8027458C;
    }
    // 0x8027455C: ori         $t9, $v1, 0x404
    ctx->r25 = ctx->r3 | 0X404;
    // 0x80274560: lw          $a2, 0x54($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X54);
    // 0x80274564: lui         $t1, 0x8028
    ctx->r9 = S32(0X8028 << 16);
    // 0x80274568: sll         $t0, $a2, 1
    ctx->r8 = S32(ctx->r6 << 1);
    // 0x8027456C: sh          $t9, 0x16($s0)
    MEM_H(0X16, ctx->r16) = ctx->r25;
    // 0x80274570: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x80274574: lhu         $t1, -0x262C($t1)
    ctx->r9 = MEM_HU(ctx->r9, -0X262C);
    // 0x80274578: nop

    // 0x8027457C: sh          $t1, 0x38($sp)
    MEM_H(0X38, ctx->r29) = ctx->r9;
    // 0x80274580: lhu         $v1, 0x16($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X16);
    // 0x80274584: nop

    // 0x80274588: andi        $a0, $v1, 0x4
    ctx->r4 = ctx->r3 & 0X4;
L_8027458C:
    // 0x8027458C: b           L_80274684
    // 0x80274590: lw          $a2, 0x54($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X54);
        goto L_80274684;
    // 0x80274590: lw          $a2, 0x54($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X54);
L_80274594:
    // 0x80274594: lw          $t2, 0xCC($s0)
    ctx->r10 = MEM_W(ctx->r16, 0XCC);
    // 0x80274598: lui         $t6, 0x8028
    ctx->r14 = S32(0X8028 << 16);
    // 0x8027459C: lw          $t3, 0x30($t2)
    ctx->r11 = MEM_W(ctx->r10, 0X30);
    // 0x802745A0: lw          $t8, 0x54($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X54);
    // 0x802745A4: lhu         $t4, 0x1C($t3)
    ctx->r12 = MEM_HU(ctx->r11, 0X1C);
    // 0x802745A8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802745AC: sll         $t5, $t4, 1
    ctx->r13 = S32(ctx->r12 << 1);
    // 0x802745B0: addu        $t6, $t6, $t5
    ctx->r14 = ADD32(ctx->r14, ctx->r13);
    // 0x802745B4: lhu         $t6, -0x257C($t6)
    ctx->r14 = MEM_HU(ctx->r14, -0X257C);
    // 0x802745B8: lui         $a1, 0x8028
    ctx->r5 = S32(0X8028 << 16);
    // 0x802745BC: andi        $t7, $t6, 0x4000
    ctx->r15 = ctx->r14 & 0X4000;
    // 0x802745C0: bne         $t7, $zero, L_802745E8
    if (ctx->r15 != 0) {
        // 0x802745C4: sll         $t9, $t8, 1
        ctx->r25 = S32(ctx->r24 << 1);
            goto L_802745E8;
    }
    // 0x802745C4: sll         $t9, $t8, 1
    ctx->r25 = S32(ctx->r24 << 1);
    // 0x802745C8: addu        $a1, $a1, $t9
    ctx->r5 = ADD32(ctx->r5, ctx->r25);
    // 0x802745CC: lhu         $a1, -0x262C($a1)
    ctx->r5 = MEM_HU(ctx->r5, -0X262C);
    // 0x802745D0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x802745D4: jal         0x80272D3C
    // 0x802745D8: sw          $a3, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r7;
    ovl_8024B800_func_80272D3C(rdram, ctx);
        goto after_28;
    // 0x802745D8: sw          $a3, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r7;
    after_28:
    // 0x802745DC: lw          $a3, 0x40($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X40);
    // 0x802745E0: lhu         $v1, 0x16($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X16);
    // 0x802745E4: nop

L_802745E8:
    // 0x802745E8: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x802745EC: beq         $a3, $at, L_8027462C
    if (ctx->r7 == ctx->r1) {
        // 0x802745F0: andi        $t0, $v1, 0xF7FB
        ctx->r8 = ctx->r3 & 0XF7FB;
            goto L_8027462C;
    }
    // 0x802745F0: andi        $t0, $v1, 0xF7FB
    ctx->r8 = ctx->r3 & 0XF7FB;
    // 0x802745F4: lhu         $t1, 0x12($s0)
    ctx->r9 = MEM_HU(ctx->r16, 0X12);
    // 0x802745F8: sh          $t0, 0x16($s0)
    MEM_H(0X16, ctx->r16) = ctx->r8;
    // 0x802745FC: andi        $t2, $t1, 0xCFFF
    ctx->r10 = ctx->r9 & 0XCFFF;
    // 0x80274600: sh          $t2, 0x12($s0)
    MEM_H(0X12, ctx->r16) = ctx->r10;
    // 0x80274604: lhu         $a1, 0x2A($sp)
    ctx->r5 = MEM_HU(ctx->r29, 0X2A);
    // 0x80274608: jal         0x80273FD0
    // 0x8027460C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_8024B800_func_80273FD0(rdram, ctx);
        goto after_29;
    // 0x8027460C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_29:
    // 0x80274610: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80274614: andi        $a1, $v0, 0xFFFF
    ctx->r5 = ctx->r2 & 0XFFFF;
    // 0x80274618: jal         0x80272D3C
    // 0x8027461C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    ovl_8024B800_func_80272D3C(rdram, ctx);
        goto after_30;
    // 0x8027461C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_30:
    // 0x80274620: lwc1        $f0, 0x50($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X50);
    // 0x80274624: b           L_80274A14
    // 0x80274628: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_80274A14;
    // 0x80274628: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_8027462C:
    // 0x8027462C: lw          $t3, 0x54($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X54);
    // 0x80274630: lw          $t5, 0x54($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X54);
    // 0x80274634: beq         $t3, $zero, L_8027464C
    if (ctx->r11 == 0) {
        // 0x80274638: andi        $a0, $v1, 0x4
        ctx->r4 = ctx->r3 & 0X4;
            goto L_8027464C;
    }
    // 0x80274638: andi        $a0, $v1, 0x4
    ctx->r4 = ctx->r3 & 0X4;
    // 0x8027463C: lbu         $t4, 0x4($s0)
    ctx->r12 = MEM_BU(ctx->r16, 0X4);
    // 0x80274640: nop

    // 0x80274644: beq         $t4, $zero, L_80274668
    if (ctx->r12 == 0) {
        // 0x80274648: lw          $t7, 0x54($sp)
        ctx->r15 = MEM_W(ctx->r29, 0X54);
            goto L_80274668;
    }
    // 0x80274648: lw          $t7, 0x54($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X54);
L_8027464C:
    // 0x8027464C: bne         $t5, $zero, L_80274684
    if (ctx->r13 != 0) {
        // 0x80274650: lw          $a2, 0x54($sp)
        ctx->r6 = MEM_W(ctx->r29, 0X54);
            goto L_80274684;
    }
    // 0x80274650: lw          $a2, 0x54($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X54);
    // 0x80274654: lbu         $t6, 0x4($s0)
    ctx->r14 = MEM_BU(ctx->r16, 0X4);
    // 0x80274658: nop

    // 0x8027465C: beq         $t6, $zero, L_80274684
    if (ctx->r14 == 0) {
        // 0x80274660: lw          $a2, 0x54($sp)
        ctx->r6 = MEM_W(ctx->r29, 0X54);
            goto L_80274684;
    }
    // 0x80274660: lw          $a2, 0x54($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X54);
    // 0x80274664: lw          $t7, 0x54($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X54);
L_80274668:
    // 0x80274668: lui         $t9, 0x8028
    ctx->r25 = S32(0X8028 << 16);
    // 0x8027466C: sll         $t8, $t7, 1
    ctx->r24 = S32(ctx->r15 << 1);
    // 0x80274670: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x80274674: lhu         $t9, -0x262C($t9)
    ctx->r25 = MEM_HU(ctx->r25, -0X262C);
    // 0x80274678: nop

    // 0x8027467C: sh          $t9, 0x38($sp)
    MEM_H(0X38, ctx->r29) = ctx->r25;
    // 0x80274680: lw          $a2, 0x54($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X54);
L_80274684:
    // 0x80274684: bne         $a0, $zero, L_802747AC
    if (ctx->r4 != 0) {
        // 0x80274688: andi        $t0, $v1, 0x800
        ctx->r8 = ctx->r3 & 0X800;
            goto L_802747AC;
    }
    // 0x80274688: andi        $t0, $v1, 0x800
    ctx->r8 = ctx->r3 & 0X800;
    // 0x8027468C: bne         $t0, $zero, L_802746EC
    if (ctx->r8 != 0) {
        // 0x80274690: addiu       $at, $zero, 0x2
        ctx->r1 = ADD32(0, 0X2);
            goto L_802746EC;
    }
    // 0x80274690: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x80274694: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x80274698: bne         $a3, $at, L_802746E4
    if (ctx->r7 != ctx->r1) {
        // 0x8027469C: ori         $t1, $v1, 0x800
        ctx->r9 = ctx->r3 | 0X800;
            goto L_802746E4;
    }
    // 0x8027469C: ori         $t1, $v1, 0x800
    ctx->r9 = ctx->r3 | 0X800;
    // 0x802746A0: sll         $t2, $a2, 1
    ctx->r10 = S32(ctx->r6 << 1);
    // 0x802746A4: lui         $t3, 0x8028
    ctx->r11 = S32(0X8028 << 16);
    // 0x802746A8: sh          $t1, 0x16($s0)
    MEM_H(0X16, ctx->r16) = ctx->r9;
    // 0x802746AC: addu        $t3, $t3, $t2
    ctx->r11 = ADD32(ctx->r11, ctx->r10);
    // 0x802746B0: lhu         $t3, -0x2628($t3)
    ctx->r11 = MEM_HU(ctx->r11, -0X2628);
    // 0x802746B4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802746B8: jal         0x802732F4
    // 0x802746BC: sh          $t3, 0x38($sp)
    MEM_H(0X38, ctx->r29) = ctx->r11;
    ovl_8024B800_func_802732F4(rdram, ctx);
        goto after_31;
    // 0x802746BC: sh          $t3, 0x38($sp)
    MEM_H(0X38, ctx->r29) = ctx->r11;
    after_31:
    // 0x802746C0: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x802746C4: lwc1        $f16, 0x48($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X48);
    // 0x802746C8: nop

    // 0x802746CC: c.lt.s      $f10, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f10.fl < ctx->f16.fl;
    // 0x802746D0: nop

    // 0x802746D4: bc1f        L_802746E4
    if (!c1cs) {
        // 0x802746D8: nop
    
            goto L_802746E4;
    }
    // 0x802746D8: nop

    // 0x802746DC: jal         0x802732D0
    // 0x802746E0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_8024B800_func_802732D0(rdram, ctx);
        goto after_32;
    // 0x802746E0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_32:
L_802746E4:
    // 0x802746E4: b           L_802747B0
    // 0x802746E8: lhu         $t4, 0x16($s0)
    ctx->r12 = MEM_HU(ctx->r16, 0X16);
        goto L_802747B0;
    // 0x802746E8: lhu         $t4, 0x16($s0)
    ctx->r12 = MEM_HU(ctx->r16, 0X16);
L_802746EC:
    // 0x802746EC: beq         $a3, $at, L_8027472C
    if (ctx->r7 == ctx->r1) {
        // 0x802746F0: andi        $t4, $v1, 0xF7FB
        ctx->r12 = ctx->r3 & 0XF7FB;
            goto L_8027472C;
    }
    // 0x802746F0: andi        $t4, $v1, 0xF7FB
    ctx->r12 = ctx->r3 & 0XF7FB;
    // 0x802746F4: lhu         $t5, 0x12($s0)
    ctx->r13 = MEM_HU(ctx->r16, 0X12);
    // 0x802746F8: sh          $t4, 0x16($s0)
    MEM_H(0X16, ctx->r16) = ctx->r12;
    // 0x802746FC: andi        $t6, $t5, 0xCFFF
    ctx->r14 = ctx->r13 & 0XCFFF;
    // 0x80274700: sh          $t6, 0x12($s0)
    MEM_H(0X12, ctx->r16) = ctx->r14;
    // 0x80274704: lhu         $a1, 0x2A($sp)
    ctx->r5 = MEM_HU(ctx->r29, 0X2A);
    // 0x80274708: jal         0x80273FD0
    // 0x8027470C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_8024B800_func_80273FD0(rdram, ctx);
        goto after_33;
    // 0x8027470C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_33:
    // 0x80274710: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80274714: andi        $a1, $v0, 0xFFFF
    ctx->r5 = ctx->r2 & 0XFFFF;
    // 0x80274718: jal         0x80272D3C
    // 0x8027471C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    ovl_8024B800_func_80272D3C(rdram, ctx);
        goto after_34;
    // 0x8027471C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_34:
    // 0x80274720: lwc1        $f0, 0x50($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X50);
    // 0x80274724: b           L_80274A14
    // 0x80274728: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_80274A14;
    // 0x80274728: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_8027472C:
    // 0x8027472C: jal         0x802732F4
    // 0x80274730: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_8024B800_func_802732F4(rdram, ctx);
        goto after_35;
    // 0x80274730: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_35:
    // 0x80274734: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x80274738: lwc1        $f4, 0x48($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X48);
    // 0x8027473C: nop

    // 0x80274740: c.lt.s      $f18, $f4
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f18.fl < ctx->f4.fl;
    // 0x80274744: nop

    // 0x80274748: bc1f        L_8027475C
    if (!c1cs) {
        // 0x8027474C: lw          $t7, 0x54($sp)
        ctx->r15 = MEM_W(ctx->r29, 0X54);
            goto L_8027475C;
    }
    // 0x8027474C: lw          $t7, 0x54($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X54);
    // 0x80274750: jal         0x802732D0
    // 0x80274754: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_8024B800_func_802732D0(rdram, ctx);
        goto after_36;
    // 0x80274754: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_36:
    // 0x80274758: lw          $t7, 0x54($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X54);
L_8027475C:
    // 0x8027475C: lw          $t9, 0x54($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X54);
    // 0x80274760: beq         $t7, $zero, L_80274778
    if (ctx->r15 == 0) {
        // 0x80274764: nop
    
            goto L_80274778;
    }
    // 0x80274764: nop

    // 0x80274768: lbu         $t8, 0x4($s0)
    ctx->r24 = MEM_BU(ctx->r16, 0X4);
    // 0x8027476C: nop

    // 0x80274770: beq         $t8, $zero, L_80274794
    if (ctx->r24 == 0) {
        // 0x80274774: lw          $t1, 0x54($sp)
        ctx->r9 = MEM_W(ctx->r29, 0X54);
            goto L_80274794;
    }
    // 0x80274774: lw          $t1, 0x54($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X54);
L_80274778:
    // 0x80274778: bne         $t9, $zero, L_802747AC
    if (ctx->r25 != 0) {
        // 0x8027477C: nop
    
            goto L_802747AC;
    }
    // 0x8027477C: nop

    // 0x80274780: lbu         $t0, 0x4($s0)
    ctx->r8 = MEM_BU(ctx->r16, 0X4);
    // 0x80274784: nop

    // 0x80274788: beq         $t0, $zero, L_802747AC
    if (ctx->r8 == 0) {
        // 0x8027478C: nop
    
            goto L_802747AC;
    }
    // 0x8027478C: nop

    // 0x80274790: lw          $t1, 0x54($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X54);
L_80274794:
    // 0x80274794: lui         $t3, 0x8028
    ctx->r11 = S32(0X8028 << 16);
    // 0x80274798: sll         $t2, $t1, 1
    ctx->r10 = S32(ctx->r9 << 1);
    // 0x8027479C: addu        $t3, $t3, $t2
    ctx->r11 = ADD32(ctx->r11, ctx->r10);
    // 0x802747A0: lhu         $t3, -0x2628($t3)
    ctx->r11 = MEM_HU(ctx->r11, -0X2628);
    // 0x802747A4: nop

    // 0x802747A8: sh          $t3, 0x38($sp)
    MEM_H(0X38, ctx->r29) = ctx->r11;
L_802747AC:
    // 0x802747AC: lhu         $t4, 0x16($s0)
    ctx->r12 = MEM_HU(ctx->r16, 0X16);
L_802747B0:
    // 0x802747B0: lw          $a2, 0x54($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X54);
    // 0x802747B4: andi        $t5, $t4, 0x804
    ctx->r13 = ctx->r12 & 0X804;
    // 0x802747B8: bne         $t5, $zero, L_802749DC
    if (ctx->r13 != 0) {
        // 0x802747BC: lw          $a1, 0x54($sp)
        ctx->r5 = MEM_W(ctx->r29, 0X54);
            goto L_802749DC;
    }
    // 0x802747BC: lw          $a1, 0x54($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X54);
    // 0x802747C0: lw          $t6, 0xCC($s0)
    ctx->r14 = MEM_W(ctx->r16, 0XCC);
    // 0x802747C4: addiu       $at, $zero, 0x21
    ctx->r1 = ADD32(0, 0X21);
    // 0x802747C8: lw          $t7, 0x30($t6)
    ctx->r15 = MEM_W(ctx->r14, 0X30);
    // 0x802747CC: lhu         $a1, 0x2A($sp)
    ctx->r5 = MEM_HU(ctx->r29, 0X2A);
    // 0x802747D0: lhu         $t8, 0x4($t7)
    ctx->r24 = MEM_HU(ctx->r15, 0X4);
    // 0x802747D4: nop

    // 0x802747D8: bne         $t8, $at, L_802747FC
    if (ctx->r24 != ctx->r1) {
        // 0x802747DC: nop
    
            goto L_802747FC;
    }
    // 0x802747DC: nop

    // 0x802747E0: jal         0x80273FD0
    // 0x802747E4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_8024B800_func_80273FD0(rdram, ctx);
        goto after_37;
    // 0x802747E4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_37:
    // 0x802747E8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802747EC: jal         0x80271A5C
    // 0x802747F0: andi        $a1, $v0, 0xFFFF
    ctx->r5 = ctx->r2 & 0XFFFF;
    ovl_8024B800_func_80271A5C(rdram, ctx);
        goto after_38;
    // 0x802747F0: andi        $a1, $v0, 0xFFFF
    ctx->r5 = ctx->r2 & 0XFFFF;
    after_38:
    // 0x802747F4: lw          $a2, 0x54($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X54);
    // 0x802747F8: nop

L_802747FC:
    // 0x802747FC: lui         $at, 0x8028
    ctx->r1 = S32(0X8028 << 16);
    // 0x80274800: lwc1        $f8, 0x50($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X50);
    // 0x80274804: lwc1        $f7, -0x1DF0($at)
    ctx->f_odd[(7 - 1) * 2] = MEM_W(ctx->r1, -0X1DF0);
    // 0x80274808: lwc1        $f6, -0x1DEC($at)
    ctx->f6.u32l = MEM_W(ctx->r1, -0X1DEC);
    // 0x8027480C: cvt.d.s     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f10.d = CVT_D_S(ctx->f8.fl);
    // 0x80274810: c.lt.d      $f6, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f6.d < ctx->f10.d;
    // 0x80274814: nop

    // 0x80274818: bc1f        L_802748F0
    if (!c1cs) {
        // 0x8027481C: nop
    
            goto L_802748F0;
    }
    // 0x8027481C: nop

    // 0x80274820: beq         $a2, $zero, L_802748F0
    if (ctx->r6 == 0) {
        // 0x80274824: nop
    
            goto L_802748F0;
    }
    // 0x80274824: nop

    // 0x80274828: lwc1        $f0, 0x4C($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X4C);
    // 0x8027482C: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x80274830: addiu       $v1, $zero, 0x2000
    ctx->r3 = ADD32(0, 0X2000);
    // 0x80274834: c.le.s      $f16, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f16.fl <= ctx->f0.fl;
    // 0x80274838: sll         $t3, $a2, 1
    ctx->r11 = S32(ctx->r6 << 1);
    // 0x8027483C: bc1f        L_8027484C
    if (!c1cs) {
        // 0x80274840: nop
    
            goto L_8027484C;
    }
    // 0x80274840: nop

    // 0x80274844: b           L_8027484C
    // 0x80274848: addiu       $v1, $zero, 0x1000
    ctx->r3 = ADD32(0, 0X1000);
        goto L_8027484C;
    // 0x80274848: addiu       $v1, $zero, 0x1000
    ctx->r3 = ADD32(0, 0X1000);
L_8027484C:
    // 0x8027484C: lhu         $v0, 0x12($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X12);
    // 0x80274850: nop

    // 0x80274854: and         $t9, $v0, $v1
    ctx->r25 = ctx->r2 & ctx->r3;
    // 0x80274858: bne         $t9, $zero, L_802748AC
    if (ctx->r25 != 0) {
        // 0x8027485C: andi        $t1, $v0, 0xCFFF
        ctx->r9 = ctx->r2 & 0XCFFF;
            goto L_802748AC;
    }
    // 0x8027485C: andi        $t1, $v0, 0xCFFF
    ctx->r9 = ctx->r2 & 0XCFFF;
    // 0x80274860: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x80274864: sh          $t1, 0x12($s0)
    MEM_H(0X12, ctx->r16) = ctx->r9;
    // 0x80274868: c.le.s      $f18, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f18.fl <= ctx->f0.fl;
    // 0x8027486C: or          $t2, $t1, $v1
    ctx->r10 = ctx->r9 | ctx->r3;
    // 0x80274870: sh          $t2, 0x12($s0)
    MEM_H(0X12, ctx->r16) = ctx->r10;
    // 0x80274874: bc1f        L_8027488C
    if (!c1cs) {
        // 0x80274878: sw          $t3, 0x28($sp)
        MEM_W(0X28, ctx->r29) = ctx->r11;
            goto L_8027488C;
    }
    // 0x80274878: sw          $t3, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r11;
    // 0x8027487C: jal         0x802732D0
    // 0x80274880: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_8024B800_func_802732D0(rdram, ctx);
        goto after_39;
    // 0x80274880: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_39:
    // 0x80274884: b           L_80274898
    // 0x80274888: lw          $t4, 0x28($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X28);
        goto L_80274898;
    // 0x80274888: lw          $t4, 0x28($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X28);
L_8027488C:
    // 0x8027488C: jal         0x802732F4
    // 0x80274890: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_8024B800_func_802732F4(rdram, ctx);
        goto after_40;
    // 0x80274890: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_40:
    // 0x80274894: lw          $t4, 0x28($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X28);
L_80274898:
    // 0x80274898: lui         $t5, 0x8028
    ctx->r13 = S32(0X8028 << 16);
    // 0x8027489C: addu        $t5, $t5, $t4
    ctx->r13 = ADD32(ctx->r13, ctx->r12);
    // 0x802748A0: lhu         $t5, -0x25D8($t5)
    ctx->r13 = MEM_HU(ctx->r13, -0X25D8);
    // 0x802748A4: b           L_802749D8
    // 0x802748A8: sh          $t5, 0x38($sp)
    MEM_H(0X38, ctx->r29) = ctx->r13;
        goto L_802749D8;
    // 0x802748A8: sh          $t5, 0x38($sp)
    MEM_H(0X38, ctx->r29) = ctx->r13;
L_802748AC:
    // 0x802748AC: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x802748B0: bne         $a2, $v0, L_802748D0
    if (ctx->r6 != ctx->r2) {
        // 0x802748B4: nop
    
            goto L_802748D0;
    }
    // 0x802748B4: nop

    // 0x802748B8: lbu         $t6, 0x4($s0)
    ctx->r14 = MEM_BU(ctx->r16, 0X4);
    // 0x802748BC: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x802748C0: beq         $t6, $at, L_802748D0
    if (ctx->r14 == ctx->r1) {
        // 0x802748C4: addiu       $t7, $zero, 0x29
        ctx->r15 = ADD32(0, 0X29);
            goto L_802748D0;
    }
    // 0x802748C4: addiu       $t7, $zero, 0x29
    ctx->r15 = ADD32(0, 0X29);
    // 0x802748C8: b           L_802749D8
    // 0x802748CC: sh          $t7, 0x38($sp)
    MEM_H(0X38, ctx->r29) = ctx->r15;
        goto L_802749D8;
    // 0x802748CC: sh          $t7, 0x38($sp)
    MEM_H(0X38, ctx->r29) = ctx->r15;
L_802748D0:
    // 0x802748D0: beq         $a2, $v0, L_802749DC
    if (ctx->r6 == ctx->r2) {
        // 0x802748D4: lw          $a1, 0x54($sp)
        ctx->r5 = MEM_W(ctx->r29, 0X54);
            goto L_802749DC;
    }
    // 0x802748D4: lw          $a1, 0x54($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X54);
    // 0x802748D8: lbu         $t8, 0x4($s0)
    ctx->r24 = MEM_BU(ctx->r16, 0X4);
    // 0x802748DC: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x802748E0: bne         $t8, $at, L_802749D8
    if (ctx->r24 != ctx->r1) {
        // 0x802748E4: addiu       $t9, $zero, 0x28
        ctx->r25 = ADD32(0, 0X28);
            goto L_802749D8;
    }
    // 0x802748E4: addiu       $t9, $zero, 0x28
    ctx->r25 = ADD32(0, 0X28);
    // 0x802748E8: b           L_802749D8
    // 0x802748EC: sh          $t9, 0x38($sp)
    MEM_H(0X38, ctx->r29) = ctx->r25;
        goto L_802749D8;
    // 0x802748EC: sh          $t9, 0x38($sp)
    MEM_H(0X38, ctx->r29) = ctx->r25;
L_802748F0:
    // 0x802748F0: lhu         $t0, 0x12($s0)
    ctx->r8 = MEM_HU(ctx->r16, 0X12);
    // 0x802748F4: nop

    // 0x802748F8: andi        $t1, $t0, 0x3000
    ctx->r9 = ctx->r8 & 0X3000;
    // 0x802748FC: beq         $t1, $zero, L_80274970
    if (ctx->r9 == 0) {
        // 0x80274900: nop
    
            goto L_80274970;
    }
    // 0x80274900: nop

    // 0x80274904: jal         0x802732F4
    // 0x80274908: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_8024B800_func_802732F4(rdram, ctx);
        goto after_41;
    // 0x80274908: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_41:
    // 0x8027490C: lhu         $t2, 0x12($s0)
    ctx->r10 = MEM_HU(ctx->r16, 0X12);
    // 0x80274910: lw          $t4, 0xD8($s0)
    ctx->r12 = MEM_W(ctx->r16, 0XD8);
    // 0x80274914: andi        $t3, $t2, 0xCFFF
    ctx->r11 = ctx->r10 & 0XCFFF;
    // 0x80274918: sh          $t3, 0x12($s0)
    MEM_H(0X12, ctx->r16) = ctx->r11;
    // 0x8027491C: lw          $t5, 0x20($t4)
    ctx->r13 = MEM_W(ctx->r12, 0X20);
    // 0x80274920: lui         $at, 0xF4
    ctx->r1 = S32(0XF4 << 16);
    // 0x80274924: ori         $at, $at, 0x2400
    ctx->r1 = ctx->r1 | 0X2400;
    // 0x80274928: sltu        $at, $t5, $at
    ctx->r1 = ctx->r13 < ctx->r1 ? 1 : 0;
    // 0x8027492C: beq         $at, $zero, L_80274960
    if (ctx->r1 == 0) {
        // 0x80274930: lhu         $a1, 0x2A($sp)
        ctx->r5 = MEM_HU(ctx->r29, 0X2A);
            goto L_80274960;
    }
    // 0x80274930: lhu         $a1, 0x2A($sp)
    ctx->r5 = MEM_HU(ctx->r29, 0X2A);
    // 0x80274934: lhu         $t6, 0x14($s0)
    ctx->r14 = MEM_HU(ctx->r16, 0X14);
    // 0x80274938: lw          $t8, 0x54($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X54);
    // 0x8027493C: andi        $t7, $t6, 0x400
    ctx->r15 = ctx->r14 & 0X400;
    // 0x80274940: bne         $t7, $zero, L_8027495C
    if (ctx->r15 != 0) {
        // 0x80274944: sll         $t9, $t8, 1
        ctx->r25 = S32(ctx->r24 << 1);
            goto L_8027495C;
    }
    // 0x80274944: sll         $t9, $t8, 1
    ctx->r25 = S32(ctx->r24 << 1);
    // 0x80274948: lui         $t0, 0x8028
    ctx->r8 = S32(0X8028 << 16);
    // 0x8027494C: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x80274950: lhu         $t0, -0x2600($t0)
    ctx->r8 = MEM_HU(ctx->r8, -0X2600);
    // 0x80274954: b           L_802749D8
    // 0x80274958: sh          $t0, 0x38($sp)
    MEM_H(0X38, ctx->r29) = ctx->r8;
        goto L_802749D8;
    // 0x80274958: sh          $t0, 0x38($sp)
    MEM_H(0X38, ctx->r29) = ctx->r8;
L_8027495C:
    // 0x8027495C: lhu         $a1, 0x2A($sp)
    ctx->r5 = MEM_HU(ctx->r29, 0X2A);
L_80274960:
    // 0x80274960: jal         0x80273FD0
    // 0x80274964: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_8024B800_func_80273FD0(rdram, ctx);
        goto after_42;
    // 0x80274964: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_42:
    // 0x80274968: b           L_802749D8
    // 0x8027496C: sh          $v0, 0x38($sp)
    MEM_H(0X38, ctx->r29) = ctx->r2;
        goto L_802749D8;
    // 0x8027496C: sh          $v0, 0x38($sp)
    MEM_H(0X38, ctx->r29) = ctx->r2;
L_80274970:
    // 0x80274970: lbu         $t1, 0x4($s0)
    ctx->r9 = MEM_BU(ctx->r16, 0X4);
    // 0x80274974: ori         $t2, $zero, 0xFFFF
    ctx->r10 = 0 | 0XFFFF;
    // 0x80274978: bne         $a2, $t1, L_80274988
    if (ctx->r6 != ctx->r9) {
        // 0x8027497C: nop
    
            goto L_80274988;
    }
    // 0x8027497C: nop

    // 0x80274980: b           L_802749D8
    // 0x80274984: sh          $t2, 0x38($sp)
    MEM_H(0X38, ctx->r29) = ctx->r10;
        goto L_802749D8;
    // 0x80274984: sh          $t2, 0x38($sp)
    MEM_H(0X38, ctx->r29) = ctx->r10;
L_80274988:
    // 0x80274988: lw          $t3, 0xD8($s0)
    ctx->r11 = MEM_W(ctx->r16, 0XD8);
    // 0x8027498C: lui         $at, 0xF4
    ctx->r1 = S32(0XF4 << 16);
    // 0x80274990: lw          $t4, 0x20($t3)
    ctx->r12 = MEM_W(ctx->r11, 0X20);
    // 0x80274994: ori         $at, $at, 0x2400
    ctx->r1 = ctx->r1 | 0X2400;
    // 0x80274998: sltu        $at, $t4, $at
    ctx->r1 = ctx->r12 < ctx->r1 ? 1 : 0;
    // 0x8027499C: beq         $at, $zero, L_802749CC
    if (ctx->r1 == 0) {
        // 0x802749A0: lhu         $a1, 0x2A($sp)
        ctx->r5 = MEM_HU(ctx->r29, 0X2A);
            goto L_802749CC;
    }
    // 0x802749A0: lhu         $a1, 0x2A($sp)
    ctx->r5 = MEM_HU(ctx->r29, 0X2A);
    // 0x802749A4: lhu         $t5, 0x14($s0)
    ctx->r13 = MEM_HU(ctx->r16, 0X14);
    // 0x802749A8: sll         $t7, $a2, 1
    ctx->r15 = S32(ctx->r6 << 1);
    // 0x802749AC: andi        $t6, $t5, 0x400
    ctx->r14 = ctx->r13 & 0X400;
    // 0x802749B0: bne         $t6, $zero, L_802749C8
    if (ctx->r14 != 0) {
        // 0x802749B4: lui         $t8, 0x8028
        ctx->r24 = S32(0X8028 << 16);
            goto L_802749C8;
    }
    // 0x802749B4: lui         $t8, 0x8028
    ctx->r24 = S32(0X8028 << 16);
    // 0x802749B8: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x802749BC: lhu         $t8, -0x2600($t8)
    ctx->r24 = MEM_HU(ctx->r24, -0X2600);
    // 0x802749C0: b           L_802749D8
    // 0x802749C4: sh          $t8, 0x38($sp)
    MEM_H(0X38, ctx->r29) = ctx->r24;
        goto L_802749D8;
    // 0x802749C4: sh          $t8, 0x38($sp)
    MEM_H(0X38, ctx->r29) = ctx->r24;
L_802749C8:
    // 0x802749C8: lhu         $a1, 0x2A($sp)
    ctx->r5 = MEM_HU(ctx->r29, 0X2A);
L_802749CC:
    // 0x802749CC: jal         0x80273FD0
    // 0x802749D0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_8024B800_func_80273FD0(rdram, ctx);
        goto after_43;
    // 0x802749D0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_43:
    // 0x802749D4: sh          $v0, 0x38($sp)
    MEM_H(0X38, ctx->r29) = ctx->r2;
L_802749D8:
    // 0x802749D8: lw          $a1, 0x54($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X54);
L_802749DC:
    // 0x802749DC: ori         $at, $zero, 0xFFFF
    ctx->r1 = 0 | 0XFFFF;
    // 0x802749E0: sb          $a1, 0x4($s0)
    MEM_B(0X4, ctx->r16) = ctx->r5;
    // 0x802749E4: lw          $t9, 0x44($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X44);
    // 0x802749E8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802749EC: sb          $t9, 0x5($s0)
    MEM_B(0X5, ctx->r16) = ctx->r25;
    // 0x802749F0: lhu         $t0, 0x38($sp)
    ctx->r8 = MEM_HU(ctx->r29, 0X38);
    // 0x802749F4: nop

    // 0x802749F8: beq         $t0, $at, L_80274A08
    if (ctx->r8 == ctx->r1) {
        // 0x802749FC: nop
    
            goto L_80274A08;
    }
    // 0x802749FC: nop

    // 0x80274A00: jal         0x80271A5C
    // 0x80274A04: or          $a1, $t0, $zero
    ctx->r5 = ctx->r8 | 0;
    ovl_8024B800_func_80271A5C(rdram, ctx);
        goto after_44;
    // 0x80274A04: or          $a1, $t0, $zero
    ctx->r5 = ctx->r8 | 0;
    after_44:
L_80274A08:
    // 0x80274A08: lwc1        $f0, 0x50($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X50);
    // 0x80274A0C: nop

L_80274A10:
    // 0x80274A10: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_80274A14:
    // 0x80274A14: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80274A18: jr          $ra
    // 0x80274A1C: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
    return;
    // 0x80274A1C: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
;}
RECOMP_FUNC void ovl_8024B800_func_80274A20(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80274A20: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x80274A24: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80274A28: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x80274A2C: ori         $a2, $zero, 0xFFFF
    ctx->r6 = 0 | 0XFFFF;
    // 0x80274A30: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x80274A34: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x80274A38: jal         0x80273484
    // 0x80274A3C: sh          $a2, 0x20($sp)
    MEM_H(0X20, ctx->r29) = ctx->r6;
    ovl_8024B800_func_80273484(rdram, ctx);
        goto after_0;
    // 0x80274A3C: sh          $a2, 0x20($sp)
    MEM_H(0X20, ctx->r29) = ctx->r6;
    after_0:
    // 0x80274A40: or          $s1, $v0, $zero
    ctx->r17 = ctx->r2 | 0;
    // 0x80274A44: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80274A48: jal         0x80273D10
    // 0x80274A4C: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    ovl_8024B800_func_80273D10(rdram, ctx);
        goto after_1;
    // 0x80274A4C: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    after_1:
    // 0x80274A50: lhu         $a2, 0x20($sp)
    ctx->r6 = MEM_HU(ctx->r29, 0X20);
    // 0x80274A54: beq         $v0, $zero, L_80274A68
    if (ctx->r2 == 0) {
        // 0x80274A58: nop
    
            goto L_80274A68;
    }
    // 0x80274A58: nop

    // 0x80274A5C: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x80274A60: b           L_80274C44
    // 0x80274A64: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_80274C44;
    // 0x80274A64: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_80274A68:
    // 0x80274A68: lwc1        $f12, 0xB0($s0)
    ctx->f12.u32l = MEM_W(ctx->r16, 0XB0);
    // 0x80274A6C: lwc1        $f14, 0x8C($s0)
    ctx->f14.u32l = MEM_W(ctx->r16, 0X8C);
    // 0x80274A70: jal         0x8027924C
    // 0x80274A74: sh          $a2, 0x20($sp)
    MEM_H(0X20, ctx->r29) = ctx->r6;
    ovl_8024B800_func_8027924C(rdram, ctx);
        goto after_2;
    // 0x80274A74: sh          $a2, 0x20($sp)
    MEM_H(0X20, ctx->r29) = ctx->r6;
    after_2:
    // 0x80274A78: mov.s       $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    ctx->f12.fl = ctx->f0.fl;
    // 0x80274A7C: jal         0x80272AEC
    // 0x80274A80: swc1        $f0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f0.u32l;
    ovl_8024B800_func_80272AEC(rdram, ctx);
        goto after_3;
    // 0x80274A80: swc1        $f0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f0.u32l;
    after_3:
    // 0x80274A84: lui         $at, 0x8028
    ctx->r1 = S32(0X8028 << 16);
    // 0x80274A88: lwc1        $f5, -0x1DE8($at)
    ctx->f_odd[(5 - 1) * 2] = MEM_W(ctx->r1, -0X1DE8);
    // 0x80274A8C: lwc1        $f4, -0x1DE4($at)
    ctx->f4.u32l = MEM_W(ctx->r1, -0X1DE4);
    // 0x80274A90: cvt.d.s     $f6, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f6.d = CVT_D_S(ctx->f0.fl);
    // 0x80274A94: c.lt.d      $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f4.d < ctx->f6.d;
    // 0x80274A98: lhu         $a2, 0x20($sp)
    ctx->r6 = MEM_HU(ctx->r29, 0X20);
    // 0x80274A9C: lwc1        $f2, 0x28($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X28);
    // 0x80274AA0: bc1f        L_80274B64
    if (!c1cs) {
        // 0x80274AA4: swc1        $f0, 0x24($sp)
        MEM_W(0X24, ctx->r29) = ctx->f0.u32l;
            goto L_80274B64;
    }
    // 0x80274AA4: swc1        $f0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f0.u32l;
    // 0x80274AA8: mtc1        $zero, $f12
    ctx->f12.u32l = 0;
    // 0x80274AAC: addiu       $v0, $zero, 0x2000
    ctx->r2 = ADD32(0, 0X2000);
    // 0x80274AB0: c.le.s      $f12, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f12.fl <= ctx->f2.fl;
    // 0x80274AB4: nop

    // 0x80274AB8: bc1f        L_80274AC8
    if (!c1cs) {
        // 0x80274ABC: nop
    
            goto L_80274AC8;
    }
    // 0x80274ABC: nop

    // 0x80274AC0: b           L_80274AC8
    // 0x80274AC4: addiu       $v0, $zero, 0x1000
    ctx->r2 = ADD32(0, 0X1000);
        goto L_80274AC8;
    // 0x80274AC4: addiu       $v0, $zero, 0x1000
    ctx->r2 = ADD32(0, 0X1000);
L_80274AC8:
    // 0x80274AC8: lhu         $v1, 0x12($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X12);
    // 0x80274ACC: nop

    // 0x80274AD0: and         $t6, $v1, $v0
    ctx->r14 = ctx->r3 & ctx->r2;
    // 0x80274AD4: bne         $t6, $zero, L_80274B1C
    if (ctx->r14 != 0) {
        // 0x80274AD8: andi        $t8, $v1, 0xCFFF
        ctx->r24 = ctx->r3 & 0XCFFF;
            goto L_80274B1C;
    }
    // 0x80274AD8: andi        $t8, $v1, 0xCFFF
    ctx->r24 = ctx->r3 & 0XCFFF;
    // 0x80274ADC: c.le.s      $f12, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f12.fl <= ctx->f2.fl;
    // 0x80274AE0: sh          $t8, 0x12($s0)
    MEM_H(0X12, ctx->r16) = ctx->r24;
    // 0x80274AE4: or          $t9, $t8, $v0
    ctx->r25 = ctx->r24 | ctx->r2;
    // 0x80274AE8: bc1f        L_80274B00
    if (!c1cs) {
        // 0x80274AEC: sh          $t9, 0x12($s0)
        MEM_H(0X12, ctx->r16) = ctx->r25;
            goto L_80274B00;
    }
    // 0x80274AEC: sh          $t9, 0x12($s0)
    MEM_H(0X12, ctx->r16) = ctx->r25;
    // 0x80274AF0: jal         0x802732D0
    // 0x80274AF4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_8024B800_func_802732D0(rdram, ctx);
        goto after_4;
    // 0x80274AF4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_4:
    // 0x80274AF8: b           L_80274B0C
    // 0x80274AFC: sll         $t0, $s1, 1
    ctx->r8 = S32(ctx->r17 << 1);
        goto L_80274B0C;
    // 0x80274AFC: sll         $t0, $s1, 1
    ctx->r8 = S32(ctx->r17 << 1);
L_80274B00:
    // 0x80274B00: jal         0x802732F4
    // 0x80274B04: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_8024B800_func_802732F4(rdram, ctx);
        goto after_5;
    // 0x80274B04: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_5:
    // 0x80274B08: sll         $t0, $s1, 1
    ctx->r8 = S32(ctx->r17 << 1);
L_80274B0C:
    // 0x80274B0C: lui         $a2, 0x8028
    ctx->r6 = S32(0X8028 << 16);
    // 0x80274B10: addu        $a2, $a2, $t0
    ctx->r6 = ADD32(ctx->r6, ctx->r8);
    // 0x80274B14: lhu         $a2, -0x25D8($a2)
    ctx->r6 = MEM_HU(ctx->r6, -0X25D8);
    // 0x80274B18: nop

L_80274B1C:
    // 0x80274B1C: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x80274B20: bne         $s1, $v0, L_80274B38
    if (ctx->r17 != ctx->r2) {
        // 0x80274B24: nop
    
            goto L_80274B38;
    }
    // 0x80274B24: nop

    // 0x80274B28: lbu         $t1, 0x4($s0)
    ctx->r9 = MEM_BU(ctx->r16, 0X4);
    // 0x80274B2C: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x80274B30: bne         $t1, $at, L_80274B50
    if (ctx->r9 != ctx->r1) {
        // 0x80274B34: sll         $t3, $s1, 1
        ctx->r11 = S32(ctx->r17 << 1);
            goto L_80274B50;
    }
    // 0x80274B34: sll         $t3, $s1, 1
    ctx->r11 = S32(ctx->r17 << 1);
L_80274B38:
    // 0x80274B38: beq         $s1, $v0, L_80274C24
    if (ctx->r17 == ctx->r2) {
        // 0x80274B3C: ori         $at, $zero, 0xFFFF
        ctx->r1 = 0 | 0XFFFF;
            goto L_80274C24;
    }
    // 0x80274B3C: ori         $at, $zero, 0xFFFF
    ctx->r1 = 0 | 0XFFFF;
    // 0x80274B40: lbu         $t2, 0x4($s0)
    ctx->r10 = MEM_BU(ctx->r16, 0X4);
    // 0x80274B44: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x80274B48: bne         $t2, $at, L_80274C20
    if (ctx->r10 != ctx->r1) {
        // 0x80274B4C: sll         $t3, $s1, 1
        ctx->r11 = S32(ctx->r17 << 1);
            goto L_80274C20;
    }
    // 0x80274B4C: sll         $t3, $s1, 1
    ctx->r11 = S32(ctx->r17 << 1);
L_80274B50:
    // 0x80274B50: lui         $a2, 0x8028
    ctx->r6 = S32(0X8028 << 16);
    // 0x80274B54: addu        $a2, $a2, $t3
    ctx->r6 = ADD32(ctx->r6, ctx->r11);
    // 0x80274B58: lhu         $a2, -0x25D8($a2)
    ctx->r6 = MEM_HU(ctx->r6, -0X25D8);
    // 0x80274B5C: b           L_80274C24
    // 0x80274B60: ori         $at, $zero, 0xFFFF
    ctx->r1 = 0 | 0XFFFF;
        goto L_80274C24;
    // 0x80274B60: ori         $at, $zero, 0xFFFF
    ctx->r1 = 0 | 0XFFFF;
L_80274B64:
    // 0x80274B64: lhu         $t4, 0x12($s0)
    ctx->r12 = MEM_HU(ctx->r16, 0X12);
    // 0x80274B68: nop

    // 0x80274B6C: andi        $t5, $t4, 0x3000
    ctx->r13 = ctx->r12 & 0X3000;
    // 0x80274B70: beq         $t5, $zero, L_80274BD0
    if (ctx->r13 == 0) {
        // 0x80274B74: nop
    
            goto L_80274BD0;
    }
    // 0x80274B74: nop

    // 0x80274B78: jal         0x802732F4
    // 0x80274B7C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_8024B800_func_802732F4(rdram, ctx);
        goto after_6;
    // 0x80274B7C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_6:
    // 0x80274B80: lhu         $t6, 0x12($s0)
    ctx->r14 = MEM_HU(ctx->r16, 0X12);
    // 0x80274B84: lw          $t8, 0xD8($s0)
    ctx->r24 = MEM_W(ctx->r16, 0XD8);
    // 0x80274B88: andi        $t7, $t6, 0xCFFF
    ctx->r15 = ctx->r14 & 0XCFFF;
    // 0x80274B8C: sh          $t7, 0x12($s0)
    MEM_H(0X12, ctx->r16) = ctx->r15;
    // 0x80274B90: lw          $t9, 0x20($t8)
    ctx->r25 = MEM_W(ctx->r24, 0X20);
    // 0x80274B94: lui         $at, 0xF4
    ctx->r1 = S32(0XF4 << 16);
    // 0x80274B98: ori         $at, $at, 0x2400
    ctx->r1 = ctx->r1 | 0X2400;
    // 0x80274B9C: sltu        $at, $t9, $at
    ctx->r1 = ctx->r25 < ctx->r1 ? 1 : 0;
    // 0x80274BA0: beq         $at, $zero, L_80274BC0
    if (ctx->r1 == 0) {
        // 0x80274BA4: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80274BC0;
    }
    // 0x80274BA4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80274BA8: sll         $t0, $s1, 1
    ctx->r8 = S32(ctx->r17 << 1);
    // 0x80274BAC: lui         $a2, 0x8028
    ctx->r6 = S32(0X8028 << 16);
    // 0x80274BB0: addu        $a2, $a2, $t0
    ctx->r6 = ADD32(ctx->r6, ctx->r8);
    // 0x80274BB4: lhu         $a2, -0x25E0($a2)
    ctx->r6 = MEM_HU(ctx->r6, -0X25E0);
    // 0x80274BB8: b           L_80274C24
    // 0x80274BBC: ori         $at, $zero, 0xFFFF
    ctx->r1 = 0 | 0XFFFF;
        goto L_80274C24;
    // 0x80274BBC: ori         $at, $zero, 0xFFFF
    ctx->r1 = 0 | 0XFFFF;
L_80274BC0:
    // 0x80274BC0: jal         0x80273FB0
    // 0x80274BC4: andi        $a1, $s1, 0xFFFF
    ctx->r5 = ctx->r17 & 0XFFFF;
    ovl_8024B800_func_80273FB0(rdram, ctx);
        goto after_7;
    // 0x80274BC4: andi        $a1, $s1, 0xFFFF
    ctx->r5 = ctx->r17 & 0XFFFF;
    after_7:
    // 0x80274BC8: b           L_80274C20
    // 0x80274BCC: andi        $a2, $v0, 0xFFFF
    ctx->r6 = ctx->r2 & 0XFFFF;
        goto L_80274C20;
    // 0x80274BCC: andi        $a2, $v0, 0xFFFF
    ctx->r6 = ctx->r2 & 0XFFFF;
L_80274BD0:
    // 0x80274BD0: lbu         $t1, 0x4($s0)
    ctx->r9 = MEM_BU(ctx->r16, 0X4);
    // 0x80274BD4: nop

    // 0x80274BD8: beq         $s1, $t1, L_80274C24
    if (ctx->r17 == ctx->r9) {
        // 0x80274BDC: ori         $at, $zero, 0xFFFF
        ctx->r1 = 0 | 0XFFFF;
            goto L_80274C24;
    }
    // 0x80274BDC: ori         $at, $zero, 0xFFFF
    ctx->r1 = 0 | 0XFFFF;
    // 0x80274BE0: lw          $t2, 0xD8($s0)
    ctx->r10 = MEM_W(ctx->r16, 0XD8);
    // 0x80274BE4: lui         $at, 0xF4
    ctx->r1 = S32(0XF4 << 16);
    // 0x80274BE8: lw          $t3, 0x20($t2)
    ctx->r11 = MEM_W(ctx->r10, 0X20);
    // 0x80274BEC: ori         $at, $at, 0x2400
    ctx->r1 = ctx->r1 | 0X2400;
    // 0x80274BF0: sltu        $at, $t3, $at
    ctx->r1 = ctx->r11 < ctx->r1 ? 1 : 0;
    // 0x80274BF4: beq         $at, $zero, L_80274C14
    if (ctx->r1 == 0) {
        // 0x80274BF8: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80274C14;
    }
    // 0x80274BF8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80274BFC: sll         $t4, $s1, 1
    ctx->r12 = S32(ctx->r17 << 1);
    // 0x80274C00: lui         $a2, 0x8028
    ctx->r6 = S32(0X8028 << 16);
    // 0x80274C04: addu        $a2, $a2, $t4
    ctx->r6 = ADD32(ctx->r6, ctx->r12);
    // 0x80274C08: lhu         $a2, -0x2600($a2)
    ctx->r6 = MEM_HU(ctx->r6, -0X2600);
    // 0x80274C0C: b           L_80274C24
    // 0x80274C10: ori         $at, $zero, 0xFFFF
    ctx->r1 = 0 | 0XFFFF;
        goto L_80274C24;
    // 0x80274C10: ori         $at, $zero, 0xFFFF
    ctx->r1 = 0 | 0XFFFF;
L_80274C14:
    // 0x80274C14: jal         0x80273FD0
    // 0x80274C18: andi        $a1, $s1, 0xFFFF
    ctx->r5 = ctx->r17 & 0XFFFF;
    ovl_8024B800_func_80273FD0(rdram, ctx);
        goto after_8;
    // 0x80274C18: andi        $a1, $s1, 0xFFFF
    ctx->r5 = ctx->r17 & 0XFFFF;
    after_8:
    // 0x80274C1C: andi        $a2, $v0, 0xFFFF
    ctx->r6 = ctx->r2 & 0XFFFF;
L_80274C20:
    // 0x80274C20: ori         $at, $zero, 0xFFFF
    ctx->r1 = 0 | 0XFFFF;
L_80274C24:
    // 0x80274C24: beq         $a2, $at, L_80274C38
    if (ctx->r6 == ctx->r1) {
        // 0x80274C28: sb          $s1, 0x4($s0)
        MEM_B(0X4, ctx->r16) = ctx->r17;
            goto L_80274C38;
    }
    // 0x80274C28: sb          $s1, 0x4($s0)
    MEM_B(0X4, ctx->r16) = ctx->r17;
    // 0x80274C2C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80274C30: jal         0x80271A5C
    // 0x80274C34: andi        $a1, $a2, 0xFFFF
    ctx->r5 = ctx->r6 & 0XFFFF;
    ovl_8024B800_func_80271A5C(rdram, ctx);
        goto after_9;
    // 0x80274C34: andi        $a1, $a2, 0xFFFF
    ctx->r5 = ctx->r6 & 0XFFFF;
    after_9:
L_80274C38:
    // 0x80274C38: lwc1        $f0, 0x24($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X24);
    // 0x80274C3C: nop

    // 0x80274C40: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_80274C44:
    // 0x80274C44: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x80274C48: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x80274C4C: jr          $ra
    // 0x80274C50: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x80274C50: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void ovl_8024B800_func_80274C54(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80274C54: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80274C58: mtc1        $a2, $f12
    ctx->f12.u32l = ctx->r6;
    // 0x80274C5C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80274C60: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x80274C64: swc1        $f12, 0x7C($a0)
    MEM_W(0X7C, ctx->r4) = ctx->f12.u32l;
    // 0x80274C68: lwc1        $f4, 0x1C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x80274C6C: nop

    // 0x80274C70: swc1        $f4, 0x50($a0)
    MEM_W(0X50, ctx->r4) = ctx->f4.u32l;
    // 0x80274C74: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x80274C78: jal         0x80081040
    // 0x80274C7C: swc1        $f12, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f12.u32l;
    func_80081040(rdram, ctx);
        goto after_0;
    // 0x80274C7C: swc1        $f12, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f12.u32l;
    after_0:
    // 0x80274C80: lwc1        $f6, 0x1C($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x80274C84: lw          $t6, 0x18($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X18);
    // 0x80274C88: mul.s       $f8, $f0, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f0.fl, ctx->f6.fl);
    // 0x80274C8C: lwc1        $f12, 0x20($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X20);
    // 0x80274C90: jal         0x80080E80
    // 0x80274C94: swc1        $f8, 0x78($t6)
    MEM_W(0X78, ctx->r14) = ctx->f8.u32l;
    func_80080E80(rdram, ctx);
        goto after_1;
    // 0x80274C94: swc1        $f8, 0x78($t6)
    MEM_W(0X78, ctx->r14) = ctx->f8.u32l;
    after_1:
    // 0x80274C98: lwc1        $f10, 0x1C($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x80274C9C: lw          $t7, 0x18($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X18);
    // 0x80274CA0: mul.s       $f16, $f0, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = MUL_S(ctx->f0.fl, ctx->f10.fl);
    // 0x80274CA4: swc1        $f16, 0x70($t7)
    MEM_W(0X70, ctx->r15) = ctx->f16.u32l;
    // 0x80274CA8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80274CAC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80274CB0: jr          $ra
    // 0x80274CB4: nop

    return;
    // 0x80274CB4: nop

;}
RECOMP_FUNC void ovl_8024B800_func_80274CB8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80274CB8: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x80274CBC: lwc1        $f4, 0x50($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X50);
    // 0x80274CC0: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x80274CC4: sub.s       $f6, $f4, $f12
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f6.fl = ctx->f4.fl - ctx->f12.fl;
    // 0x80274CC8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x80274CCC: swc1        $f6, 0x50($a0)
    MEM_W(0X50, ctx->r4) = ctx->f6.u32l;
    // 0x80274CD0: lwc1        $f8, 0x50($a0)
    ctx->f8.u32l = MEM_W(ctx->r4, 0X50);
    // 0x80274CD4: nop

    // 0x80274CD8: c.lt.s      $f8, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f8.fl < ctx->f0.fl;
    // 0x80274CDC: nop

    // 0x80274CE0: bc1f        L_80274CF4
    if (!c1cs) {
        // 0x80274CE4: nop
    
            goto L_80274CF4;
    }
    // 0x80274CE4: nop

    // 0x80274CE8: swc1        $f0, 0x50($a0)
    MEM_W(0X50, ctx->r4) = ctx->f0.u32l;
    // 0x80274CEC: jr          $ra
    // 0x80274CF0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    return;
    // 0x80274CF0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_80274CF4:
    // 0x80274CF4: jr          $ra
    // 0x80274CF8: nop

    return;
    // 0x80274CF8: nop

;}
RECOMP_FUNC void ovl_8024B800_func_80274CFC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80274CFC: lui         $t6, 0x8012
    ctx->r14 = S32(0X8012 << 16);
    // 0x80274D00: lhu         $t6, 0xB78($t6)
    ctx->r14 = MEM_HU(ctx->r14, 0XB78);
    // 0x80274D04: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80274D08: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80274D0C: bne         $t6, $zero, L_80274DC4
    if (ctx->r14 != 0) {
        // 0x80274D10: sw          $a1, 0x24($sp)
        MEM_W(0X24, ctx->r29) = ctx->r5;
            goto L_80274DC4;
    }
    // 0x80274D10: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x80274D14: lui         $t7, 0x8012
    ctx->r15 = S32(0X8012 << 16);
    // 0x80274D18: lbu         $t7, -0x32A4($t7)
    ctx->r15 = MEM_BU(ctx->r15, -0X32A4);
    // 0x80274D1C: addiu       $at, $zero, 0x7
    ctx->r1 = ADD32(0, 0X7);
    // 0x80274D20: beq         $t7, $at, L_80274DC8
    if (ctx->r15 == ctx->r1) {
        // 0x80274D24: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_80274DC8;
    }
    // 0x80274D24: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80274D28: lw          $t8, 0xD8($a0)
    ctx->r24 = MEM_W(ctx->r4, 0XD8);
    // 0x80274D2C: nop

    // 0x80274D30: lw          $a1, 0x20($t8)
    ctx->r5 = MEM_W(ctx->r24, 0X20);
    // 0x80274D34: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x80274D38: jal         0x80271A18
    // 0x80274D3C: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    ovl_8024B800_func_80271A18(rdram, ctx);
        goto after_0;
    // 0x80274D3C: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    after_0:
    // 0x80274D40: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x80274D44: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x80274D48: lw          $a2, 0xD8($a0)
    ctx->r6 = MEM_W(ctx->r4, 0XD8);
    // 0x80274D4C: addiu       $t0, $zero, 0x82
    ctx->r8 = ADD32(0, 0X82);
    // 0x80274D50: lbu         $t9, 0x5($a2)
    ctx->r25 = MEM_BU(ctx->r6, 0X5);
    // 0x80274D54: lui         $t3, 0x8012
    ctx->r11 = S32(0X8012 << 16);
    // 0x80274D58: addu        $v1, $v0, $t9
    ctx->r3 = ADD32(ctx->r2, ctx->r25);
    // 0x80274D5C: subu        $v1, $t0, $v1
    ctx->r3 = SUB32(ctx->r8, ctx->r3);
    // 0x80274D60: multu       $v1, $t1
    result = U64(U32(ctx->r3)) * U64(U32(ctx->r9)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80274D64: lb          $t3, -0x309D($t3)
    ctx->r11 = MEM_B(ctx->r11, -0X309D);
    // 0x80274D68: lui         $t4, 0x8028
    ctx->r12 = S32(0X8028 << 16);
    // 0x80274D6C: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x80274D70: lb          $t4, -0x2300($t4)
    ctx->r12 = MEM_B(ctx->r12, -0X2300);
    // 0x80274D74: lw          $a1, 0x1C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X1C);
    // 0x80274D78: mflo        $v1
    ctx->r3 = lo;
    // 0x80274D7C: sll         $t2, $v1, 2
    ctx->r10 = S32(ctx->r3 << 2);
    // 0x80274D80: addu        $t2, $t2, $v1
    ctx->r10 = ADD32(ctx->r10, ctx->r3);
    // 0x80274D84: div         $zero, $t2, $t4
    lo = S32(S64(S32(ctx->r10)) / S64(S32(ctx->r12))); hi = S32(S64(S32(ctx->r10)) % S64(S32(ctx->r12)));
    // 0x80274D88: bne         $t4, $zero, L_80274D94
    if (ctx->r12 != 0) {
        // 0x80274D8C: nop
    
            goto L_80274D94;
    }
    // 0x80274D8C: nop

    // 0x80274D90: break       7
    do_break(2150059408);
L_80274D94:
    // 0x80274D94: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x80274D98: bne         $t4, $at, L_80274DAC
    if (ctx->r12 != ctx->r1) {
        // 0x80274D9C: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_80274DAC;
    }
    // 0x80274D9C: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x80274DA0: bne         $t2, $at, L_80274DAC
    if (ctx->r10 != ctx->r1) {
        // 0x80274DA4: nop
    
            goto L_80274DAC;
    }
    // 0x80274DA4: nop

    // 0x80274DA8: break       6
    do_break(2150059432);
L_80274DAC:
    // 0x80274DAC: mflo        $v1
    ctx->r3 = lo;
    // 0x80274DB0: subu        $a1, $a1, $v1
    ctx->r5 = SUB32(ctx->r5, ctx->r3);
    // 0x80274DB4: bgez        $a1, L_80274DC0
    if (SIGNED(ctx->r5) >= 0) {
        // 0x80274DB8: nop
    
            goto L_80274DC0;
    }
    // 0x80274DB8: nop

    // 0x80274DBC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
L_80274DC0:
    // 0x80274DC0: sw          $a1, 0x20($a2)
    MEM_W(0X20, ctx->r6) = ctx->r5;
L_80274DC4:
    // 0x80274DC4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80274DC8:
    // 0x80274DC8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80274DCC: jr          $ra
    // 0x80274DD0: nop

    return;
    // 0x80274DD0: nop

;}
RECOMP_FUNC void ovl_8024B800_func_80274DD4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80274DD4: lwc1        $f0, 0x50($a0)
    ctx->f0.u32l = MEM_W(ctx->r4, 0X50);
    // 0x80274DD8: lui         $at, 0x3FF0
    ctx->r1 = S32(0X3FF0 << 16);
    // 0x80274DDC: mtc1        $at, $f7
    ctx->f_odd[(7 - 1) * 2] = ctx->r1;
    // 0x80274DE0: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x80274DE4: cvt.d.s     $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f4.d = CVT_D_S(ctx->f0.fl);
    // 0x80274DE8: c.lt.d      $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f4.d < ctx->f6.d;
    // 0x80274DEC: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80274DF0: bc1f        L_80274E00
    if (!c1cs) {
        // 0x80274DF4: lui         $at, 0x3F80
        ctx->r1 = S32(0X3F80 << 16);
            goto L_80274E00;
    }
    // 0x80274DF4: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x80274DF8: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x80274DFC: nop

L_80274E00:
    // 0x80274E00: lwc1        $f12, 0x54($a0)
    ctx->f12.u32l = MEM_W(ctx->r4, 0X54);
    // 0x80274E04: lwc1        $f16, 0x6C($a0)
    ctx->f16.u32l = MEM_W(ctx->r4, 0X6C);
    // 0x80274E08: sub.s       $f2, $f12, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = ctx->f12.fl - ctx->f0.fl;
    // 0x80274E0C: mtc1        $a1, $f8
    ctx->f8.u32l = ctx->r5;
    // 0x80274E10: div.s       $f14, $f2, $f16
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f14.fl = DIV_S(ctx->f2.fl, ctx->f16.fl);
    // 0x80274E14: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x80274E18: lui         $at, 0x3FE0
    ctx->r1 = S32(0X3FE0 << 16);
    // 0x80274E1C: swc1        $f10, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->f10.u32l;
    // 0x80274E20: lwc1        $f4, 0x0($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X0);
    // 0x80274E24: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80274E28: c.lt.s      $f4, $f14
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 14);
    c1cs = ctx->f4.fl < ctx->f14.fl;
    // 0x80274E2C: sub.s       $f18, $f4, $f14
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f18.fl = ctx->f4.fl - ctx->f14.fl;
    // 0x80274E30: bc1f        L_80274E7C
    if (!c1cs) {
        // 0x80274E34: nop
    
            goto L_80274E7C;
    }
    // 0x80274E34: nop

    // 0x80274E38: multu       $a1, $a1
    result = U64(U32(ctx->r5)) * U64(U32(ctx->r5)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80274E3C: lui         $at, 0x3FE0
    ctx->r1 = S32(0X3FE0 << 16);
    // 0x80274E40: mtc1        $at, $f7
    ctx->f_odd[(7 - 1) * 2] = ctx->r1;
    // 0x80274E44: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x80274E48: cvt.d.s     $f8, $f16
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); 
    ctx->f8.d = CVT_D_S(ctx->f16.fl);
    // 0x80274E4C: mul.d       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f8.d); 
    ctx->f10.d = MUL_D(ctx->f6.d, ctx->f8.d);
    // 0x80274E50: mflo        $t6
    ctx->r14 = lo;
    // 0x80274E54: mtc1        $t6, $f6
    ctx->f6.u32l = ctx->r14;
    // 0x80274E58: nop

    // 0x80274E5C: cvt.d.w     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.d = CVT_D_W(ctx->f6.u32l);
    // 0x80274E60: mul.d       $f6, $f10, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f8.d); 
    ctx->f6.d = MUL_D(ctx->f10.d, ctx->f8.d);
    // 0x80274E64: nop

    // 0x80274E68: mul.s       $f10, $f4, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f10.fl = MUL_S(ctx->f4.fl, ctx->f0.fl);
    // 0x80274E6C: cvt.d.s     $f8, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.fl); 
    ctx->f8.d = CVT_D_S(ctx->f10.fl);
    // 0x80274E70: add.d       $f4, $f8, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f6.d); 
    ctx->f4.d = ctx->f8.d + ctx->f6.d;
    // 0x80274E74: b           L_80274EB8
    // 0x80274E78: cvt.s.d     $f2, $f4
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.d); 
    ctx->f2.fl = CVT_S_D(ctx->f4.d);
        goto L_80274EB8;
    // 0x80274E78: cvt.s.d     $f2, $f4
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.d); 
    ctx->f2.fl = CVT_S_D(ctx->f4.d);
L_80274E7C:
    // 0x80274E7C: mtc1        $at, $f11
    ctx->f_odd[(11 - 1) * 2] = ctx->r1;
    // 0x80274E80: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x80274E84: cvt.d.s     $f8, $f16
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); 
    ctx->f8.d = CVT_D_S(ctx->f16.fl);
    // 0x80274E88: mul.d       $f6, $f10, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f8.d); 
    ctx->f6.d = MUL_D(ctx->f10.d, ctx->f8.d);
    // 0x80274E8C: nop

    // 0x80274E90: mul.s       $f4, $f14, $f14
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f4.fl = MUL_S(ctx->f14.fl, ctx->f14.fl);
    // 0x80274E94: cvt.d.s     $f10, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f10.d = CVT_D_S(ctx->f4.fl);
    // 0x80274E98: mul.d       $f8, $f6, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f10.d); 
    ctx->f8.d = MUL_D(ctx->f6.d, ctx->f10.d);
    // 0x80274E9C: nop

    // 0x80274EA0: mul.s       $f4, $f0, $f14
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f4.fl = MUL_S(ctx->f0.fl, ctx->f14.fl);
    // 0x80274EA4: cvt.d.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.d = CVT_D_S(ctx->f4.fl);
    // 0x80274EA8: mul.s       $f4, $f12, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = MUL_S(ctx->f12.fl, ctx->f18.fl);
    // 0x80274EAC: add.d       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f8.d); 
    ctx->f10.d = ctx->f6.d + ctx->f8.d;
    // 0x80274EB0: cvt.s.d     $f2, $f10
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f2.fl = CVT_S_D(ctx->f10.d);
    // 0x80274EB4: add.s       $f2, $f2, $f4
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f2.fl = ctx->f2.fl + ctx->f4.fl;
L_80274EB8:
    // 0x80274EB8: jr          $ra
    // 0x80274EBC: mov.s       $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    ctx->f0.fl = ctx->f2.fl;
    return;
    // 0x80274EBC: mov.s       $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    ctx->f0.fl = ctx->f2.fl;
;}
RECOMP_FUNC void ovl_8024B800_func_80274EC0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80274EC0: lui         $t6, 0x8009
    ctx->r14 = S32(0X8009 << 16);
    // 0x80274EC4: lw          $t6, 0x3B20($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X3B20);
    // 0x80274EC8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80274ECC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80274ED0: lw          $t7, 0x88($t6)
    ctx->r15 = MEM_W(ctx->r14, 0X88);
    // 0x80274ED4: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x80274ED8: mtc1        $a2, $f14
    ctx->f14.u32l = ctx->r6;
    // 0x80274EDC: lwc1        $f2, 0x58($a0)
    ctx->f2.u32l = MEM_W(ctx->r4, 0X58);
    // 0x80274EE0: bne         $a0, $t7, L_80274F28
    if (ctx->r4 != ctx->r15) {
        // 0x80274EE4: lui         $at, 0x8028
        ctx->r1 = S32(0X8028 << 16);
            goto L_80274F28;
    }
    // 0x80274EE4: lui         $at, 0x8028
    ctx->r1 = S32(0X8028 << 16);
    // 0x80274EE8: lwc1        $f4, 0x5C($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X5C);
    // 0x80274EEC: lwc1        $f9, -0x1DE0($at)
    ctx->f_odd[(9 - 1) * 2] = MEM_W(ctx->r1, -0X1DE0);
    // 0x80274EF0: lwc1        $f8, -0x1DDC($at)
    ctx->f8.u32l = MEM_W(ctx->r1, -0X1DDC);
    // 0x80274EF4: cvt.d.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.d = CVT_D_S(ctx->f4.fl);
    // 0x80274EF8: sub.d       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f8.d); 
    ctx->f10.d = ctx->f6.d - ctx->f8.d;
    // 0x80274EFC: lui         $at, 0x8028
    ctx->r1 = S32(0X8028 << 16);
    // 0x80274F00: cvt.s.d     $f2, $f10
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f2.fl = CVT_S_D(ctx->f10.d);
    // 0x80274F04: lwc1        $f19, -0x1DD8($at)
    ctx->f_odd[(19 - 1) * 2] = MEM_W(ctx->r1, -0X1DD8);
    // 0x80274F08: lwc1        $f18, -0x1DD4($at)
    ctx->f18.u32l = MEM_W(ctx->r1, -0X1DD4);
    // 0x80274F0C: cvt.d.s     $f16, $f2
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f16.d = CVT_D_S(ctx->f2.fl);
    // 0x80274F10: c.lt.d      $f16, $f18
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f16.d < ctx->f18.d;
    // 0x80274F14: lui         $at, 0x8028
    ctx->r1 = S32(0X8028 << 16);
    // 0x80274F18: bc1f        L_80274F28
    if (!c1cs) {
        // 0x80274F1C: nop
    
            goto L_80274F28;
    }
    // 0x80274F1C: nop

    // 0x80274F20: lwc1        $f2, -0x1DD0($at)
    ctx->f2.u32l = MEM_W(ctx->r1, -0X1DD0);
    // 0x80274F24: nop

L_80274F28:
    // 0x80274F28: lwc1        $f4, 0x60($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X60);
    // 0x80274F2C: nop

    // 0x80274F30: c.lt.s      $f14, $f4
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f14.fl < ctx->f4.fl;
    // 0x80274F34: nop

    // 0x80274F38: bc1f        L_80274FD0
    if (!c1cs) {
        // 0x80274F3C: nop
    
            goto L_80274FD0;
    }
    // 0x80274F3C: nop

    // 0x80274F40: c.lt.s      $f12, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f12.fl < ctx->f2.fl;
    // 0x80274F44: lui         $at, 0x8028
    ctx->r1 = S32(0X8028 << 16);
    // 0x80274F48: bc1f        L_80274F8C
    if (!c1cs) {
        // 0x80274F4C: nop
    
            goto L_80274F8C;
    }
    // 0x80274F4C: nop

    // 0x80274F50: lwc1        $f6, 0x50($a0)
    ctx->f6.u32l = MEM_W(ctx->r4, 0X50);
    // 0x80274F54: lwc1        $f8, 0x6C($a0)
    ctx->f8.u32l = MEM_W(ctx->r4, 0X6C);
    // 0x80274F58: nop

    // 0x80274F5C: add.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x80274F60: swc1        $f10, 0x50($a0)
    MEM_W(0X50, ctx->r4) = ctx->f10.u32l;
    // 0x80274F64: lwc1        $f0, 0x50($a0)
    ctx->f0.u32l = MEM_W(ctx->r4, 0X50);
    // 0x80274F68: nop

    // 0x80274F6C: c.le.s      $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f12.fl <= ctx->f0.fl;
    // 0x80274F70: nop

    // 0x80274F74: bc1f        L_80275060
    if (!c1cs) {
        // 0x80274F78: nop
    
            goto L_80275060;
    }
    // 0x80274F78: nop

    // 0x80274F7C: swc1        $f12, 0x50($a0)
    MEM_W(0X50, ctx->r4) = ctx->f12.u32l;
    // 0x80274F80: lwc1        $f0, 0x50($a0)
    ctx->f0.u32l = MEM_W(ctx->r4, 0X50);
    // 0x80274F84: b           L_80275064
    // 0x80274F88: c.le.s      $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f2.fl <= ctx->f0.fl;
        goto L_80275064;
    // 0x80274F88: c.le.s      $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f2.fl <= ctx->f0.fl;
L_80274F8C:
    // 0x80274F8C: lwc1        $f16, 0x50($a0)
    ctx->f16.u32l = MEM_W(ctx->r4, 0X50);
    // 0x80274F90: lwc1        $f5, -0x1DC8($at)
    ctx->f_odd[(5 - 1) * 2] = MEM_W(ctx->r1, -0X1DC8);
    // 0x80274F94: lwc1        $f4, -0x1DC4($at)
    ctx->f4.u32l = MEM_W(ctx->r1, -0X1DC4);
    // 0x80274F98: cvt.d.s     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); 
    ctx->f18.d = CVT_D_S(ctx->f16.fl);
    // 0x80274F9C: sub.d       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.d); NAN_CHECK(ctx->f4.d); 
    ctx->f6.d = ctx->f18.d - ctx->f4.d;
    // 0x80274FA0: cvt.s.d     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.d); 
    ctx->f8.fl = CVT_S_D(ctx->f6.d);
    // 0x80274FA4: swc1        $f8, 0x50($a0)
    MEM_W(0X50, ctx->r4) = ctx->f8.u32l;
    // 0x80274FA8: lwc1        $f0, 0x50($a0)
    ctx->f0.u32l = MEM_W(ctx->r4, 0X50);
    // 0x80274FAC: nop

    // 0x80274FB0: c.le.s      $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f0.fl <= ctx->f2.fl;
    // 0x80274FB4: nop

    // 0x80274FB8: bc1f        L_80275060
    if (!c1cs) {
        // 0x80274FBC: nop
    
            goto L_80275060;
    }
    // 0x80274FBC: nop

    // 0x80274FC0: swc1        $f2, 0x50($a0)
    MEM_W(0X50, ctx->r4) = ctx->f2.u32l;
    // 0x80274FC4: lwc1        $f0, 0x50($a0)
    ctx->f0.u32l = MEM_W(ctx->r4, 0X50);
    // 0x80274FC8: b           L_80275064
    // 0x80274FCC: c.le.s      $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f2.fl <= ctx->f0.fl;
        goto L_80275064;
    // 0x80274FCC: c.le.s      $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f2.fl <= ctx->f0.fl;
L_80274FD0:
    // 0x80274FD0: lwc1        $f0, 0x50($a0)
    ctx->f0.u32l = MEM_W(ctx->r4, 0X50);
    // 0x80274FD4: lui         $at, 0x8028
    ctx->r1 = S32(0X8028 << 16);
    // 0x80274FD8: c.lt.s      $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f12.fl < ctx->f0.fl;
    // 0x80274FDC: nop

    // 0x80274FE0: bc1f        L_8027500C
    if (!c1cs) {
        // 0x80274FE4: nop
    
            goto L_8027500C;
    }
    // 0x80274FE4: nop

    // 0x80274FE8: lwc1        $f17, -0x1DC0($at)
    ctx->f_odd[(17 - 1) * 2] = MEM_W(ctx->r1, -0X1DC0);
    // 0x80274FEC: lwc1        $f16, -0x1DBC($at)
    ctx->f16.u32l = MEM_W(ctx->r1, -0X1DBC);
    // 0x80274FF0: cvt.d.s     $f10, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f10.d = CVT_D_S(ctx->f0.fl);
    // 0x80274FF4: sub.d       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f16.d); 
    ctx->f18.d = ctx->f10.d - ctx->f16.d;
    // 0x80274FF8: cvt.s.d     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.d); 
    ctx->f4.fl = CVT_S_D(ctx->f18.d);
    // 0x80274FFC: swc1        $f4, 0x50($a0)
    MEM_W(0X50, ctx->r4) = ctx->f4.u32l;
    // 0x80275000: lwc1        $f0, 0x50($a0)
    ctx->f0.u32l = MEM_W(ctx->r4, 0X50);
    // 0x80275004: b           L_80275064
    // 0x80275008: c.le.s      $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f2.fl <= ctx->f0.fl;
        goto L_80275064;
    // 0x80275008: c.le.s      $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f2.fl <= ctx->f0.fl;
L_8027500C:
    // 0x8027500C: lwc1        $f6, 0x6C($a0)
    ctx->f6.u32l = MEM_W(ctx->r4, 0X6C);
    // 0x80275010: nop

    // 0x80275014: add.s       $f8, $f0, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f0.fl + ctx->f6.fl;
    // 0x80275018: swc1        $f8, 0x50($a0)
    MEM_W(0X50, ctx->r4) = ctx->f8.u32l;
    // 0x8027501C: lwc1        $f0, 0x50($a0)
    ctx->f0.u32l = MEM_W(ctx->r4, 0X50);
    // 0x80275020: nop

    // 0x80275024: c.le.s      $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f12.fl <= ctx->f0.fl;
    // 0x80275028: nop

    // 0x8027502C: bc1f        L_80275040
    if (!c1cs) {
        // 0x80275030: nop
    
            goto L_80275040;
    }
    // 0x80275030: nop

    // 0x80275034: swc1        $f12, 0x50($a0)
    MEM_W(0X50, ctx->r4) = ctx->f12.u32l;
    // 0x80275038: lwc1        $f0, 0x50($a0)
    ctx->f0.u32l = MEM_W(ctx->r4, 0X50);
    // 0x8027503C: nop

L_80275040:
    // 0x80275040: c.le.s      $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f2.fl <= ctx->f0.fl;
    // 0x80275044: nop

    // 0x80275048: bc1f        L_80275060
    if (!c1cs) {
        // 0x8027504C: nop
    
            goto L_80275060;
    }
    // 0x8027504C: nop

    // 0x80275050: lwc1        $f10, 0x60($a0)
    ctx->f10.u32l = MEM_W(ctx->r4, 0X60);
    // 0x80275054: nop

    // 0x80275058: add.s       $f16, $f10, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f16.fl = ctx->f10.fl + ctx->f0.fl;
    // 0x8027505C: swc1        $f16, 0x60($a0)
    MEM_W(0X60, ctx->r4) = ctx->f16.u32l;
L_80275060:
    // 0x80275060: c.le.s      $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f2.fl <= ctx->f0.fl;
L_80275064:
    // 0x80275064: nop

    // 0x80275068: bc1f        L_802750A4
    if (!c1cs) {
        // 0x8027506C: nop
    
            goto L_802750A4;
    }
    // 0x8027506C: nop

    // 0x80275070: lhu         $t8, 0x12($a0)
    ctx->r24 = MEM_HU(ctx->r4, 0X12);
    // 0x80275074: nop

    // 0x80275078: andi        $t9, $t8, 0x1
    ctx->r25 = ctx->r24 & 0X1;
    // 0x8027507C: beq         $t9, $zero, L_80275094
    if (ctx->r25 == 0) {
        // 0x80275080: nop
    
            goto L_80275094;
    }
    // 0x80275080: nop

    // 0x80275084: jal         0x80274CFC
    // 0x80275088: addiu       $a1, $zero, 0x271
    ctx->r5 = ADD32(0, 0X271);
    ovl_8024B800_func_80274CFC(rdram, ctx);
        goto after_0;
    // 0x80275088: addiu       $a1, $zero, 0x271
    ctx->r5 = ADD32(0, 0X271);
    after_0:
    // 0x8027508C: b           L_802750B0
    // 0x80275090: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_802750B0;
    // 0x80275090: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80275094:
    // 0x80275094: jal         0x80274CFC
    // 0x80275098: addiu       $a1, $zero, 0x42
    ctx->r5 = ADD32(0, 0X42);
    ovl_8024B800_func_80274CFC(rdram, ctx);
        goto after_1;
    // 0x80275098: addiu       $a1, $zero, 0x42
    ctx->r5 = ADD32(0, 0X42);
    after_1:
    // 0x8027509C: b           L_802750B0
    // 0x802750A0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_802750B0;
    // 0x802750A0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_802750A4:
    // 0x802750A4: jal         0x80274CFC
    // 0x802750A8: addiu       $a1, $zero, 0x21
    ctx->r5 = ADD32(0, 0X21);
    ovl_8024B800_func_80274CFC(rdram, ctx);
        goto after_2;
    // 0x802750A8: addiu       $a1, $zero, 0x21
    ctx->r5 = ADD32(0, 0X21);
    after_2:
    // 0x802750AC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_802750B0:
    // 0x802750B0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x802750B4: jr          $ra
    // 0x802750B8: nop

    return;
    // 0x802750B8: nop

;}
RECOMP_FUNC void ovl_8024B800_func_802750BC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802750BC: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x802750C0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802750C4: mtc1        $a1, $f14
    ctx->f14.u32l = ctx->r5;
    // 0x802750C8: mtc1        $a2, $f12
    ctx->f12.u32l = ctx->r6;
    // 0x802750CC: lw          $t6, 0xC4($a0)
    ctx->r14 = MEM_W(ctx->r4, 0XC4);
    // 0x802750D0: sub.s       $f4, $f14, $f12
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f4.fl = ctx->f14.fl - ctx->f12.fl;
    // 0x802750D4: lwc1        $f6, 0x30($t6)
    ctx->f6.u32l = MEM_W(ctx->r14, 0X30);
    // 0x802750D8: lui         $at, 0x8028
    ctx->r1 = S32(0X8028 << 16);
    // 0x802750DC: mul.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f4.fl, ctx->f6.fl);
    // 0x802750E0: lwc1        $f17, -0x1DB8($at)
    ctx->f_odd[(17 - 1) * 2] = MEM_W(ctx->r1, -0X1DB8);
    // 0x802750E4: lwc1        $f16, -0x1DB4($at)
    ctx->f16.u32l = MEM_W(ctx->r1, -0X1DB4);
    // 0x802750E8: lw          $a2, 0x64($a0)
    ctx->r6 = MEM_W(ctx->r4, 0X64);
    // 0x802750EC: cvt.d.s     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f10.d = CVT_D_S(ctx->f8.fl);
    // 0x802750F0: mul.d       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f16.d); 
    ctx->f18.d = MUL_D(ctx->f10.d, ctx->f16.d);
    // 0x802750F4: cvt.d.s     $f4, $f12
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); 
    ctx->f4.d = CVT_D_S(ctx->f12.fl);
    // 0x802750F8: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x802750FC: add.d       $f6, $f4, $f18
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f18.d); 
    ctx->f6.d = ctx->f4.d + ctx->f18.d;
    // 0x80275100: cvt.s.d     $f0, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.d); 
    ctx->f0.fl = CVT_S_D(ctx->f6.d);
    // 0x80275104: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x80275108: jal         0x80274EC0
    // 0x8027510C: swc1        $f0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f0.u32l;
    ovl_8024B800_func_80274EC0(rdram, ctx);
        goto after_0;
    // 0x8027510C: swc1        $f0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f0.u32l;
    after_0:
    // 0x80275110: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x80275114: lwc1        $f0, 0x1C($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x80275118: lwc1        $f2, 0x50($a0)
    ctx->f2.u32l = MEM_W(ctx->r4, 0X50);
    // 0x8027511C: lui         $at, 0x3FF0
    ctx->r1 = S32(0X3FF0 << 16);
    // 0x80275120: c.lt.s      $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f0.fl < ctx->f2.fl;
    // 0x80275124: mtc1        $at, $f11
    ctx->f_odd[(11 - 1) * 2] = ctx->r1;
    // 0x80275128: bc1f        L_8027513C
    if (!c1cs) {
        // 0x8027512C: lui         $at, 0x3F80
        ctx->r1 = S32(0X3F80 << 16);
            goto L_8027513C;
    }
    // 0x8027512C: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x80275130: swc1        $f0, 0x50($a0)
    MEM_W(0X50, ctx->r4) = ctx->f0.u32l;
    // 0x80275134: lwc1        $f2, 0x50($a0)
    ctx->f2.u32l = MEM_W(ctx->r4, 0X50);
    // 0x80275138: nop

L_8027513C:
    // 0x8027513C: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x80275140: cvt.d.s     $f8, $f2
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f8.d = CVT_D_S(ctx->f2.fl);
    // 0x80275144: c.lt.d      $f8, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f8.d < ctx->f10.d;
    // 0x80275148: nop

    // 0x8027514C: bc1f        L_80275164
    if (!c1cs) {
        // 0x80275150: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_80275164;
    }
    // 0x80275150: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80275154: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x80275158: nop

    // 0x8027515C: swc1        $f16, 0x50($a0)
    MEM_W(0X50, ctx->r4) = ctx->f16.u32l;
    // 0x80275160: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80275164:
    // 0x80275164: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80275168: jr          $ra
    // 0x8027516C: nop

    return;
    // 0x8027516C: nop

;}
RECOMP_FUNC void ovl_8024B800_func_80275170(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80275170: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80275174: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80275178: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x8027517C: lwc1        $f2, 0xAC($a0)
    ctx->f2.u32l = MEM_W(ctx->r4, 0XAC);
    // 0x80275180: mtc1        $a2, $f14
    ctx->f14.u32l = ctx->r6;
    // 0x80275184: c.lt.s      $f12, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f12.fl < ctx->f2.fl;
    // 0x80275188: mov.s       $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    ctx->f0.fl = ctx->f2.fl;
    // 0x8027518C: bc1f        L_80275198
    if (!c1cs) {
        // 0x80275190: nop
    
            goto L_80275198;
    }
    // 0x80275190: nop

    // 0x80275194: mov.s       $f0, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    ctx->f0.fl = ctx->f12.fl;
L_80275198:
    // 0x80275198: c.lt.s      $f2, $f14
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    c1cs = ctx->f2.fl < ctx->f14.fl;
    // 0x8027519C: nop

    // 0x802751A0: bc1f        L_802751AC
    if (!c1cs) {
        // 0x802751A4: nop
    
            goto L_802751AC;
    }
    // 0x802751A4: nop

    // 0x802751A8: mov.s       $f0, $f14
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    ctx->f0.fl = ctx->f14.fl;
L_802751AC:
    // 0x802751AC: lw          $a2, 0x64($a0)
    ctx->r6 = MEM_W(ctx->r4, 0X64);
    // 0x802751B0: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x802751B4: swc1        $f0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f0.u32l;
    // 0x802751B8: jal         0x80274EC0
    // 0x802751BC: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    ovl_8024B800_func_80274EC0(rdram, ctx);
        goto after_0;
    // 0x802751BC: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    after_0:
    // 0x802751C0: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x802751C4: lwc1        $f0, 0x1C($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x802751C8: lwc1        $f4, 0x50($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X50);
    // 0x802751CC: lui         $at, 0x3FF0
    ctx->r1 = S32(0X3FF0 << 16);
    // 0x802751D0: c.lt.s      $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f0.fl < ctx->f4.fl;
    // 0x802751D4: mtc1        $at, $f1
    ctx->f_odd[(1 - 1) * 2] = ctx->r1;
    // 0x802751D8: bc1f        L_802751E4
    if (!c1cs) {
        // 0x802751DC: nop
    
            goto L_802751E4;
    }
    // 0x802751DC: nop

    // 0x802751E0: swc1        $f0, 0x50($a0)
    MEM_W(0X50, ctx->r4) = ctx->f0.u32l;
L_802751E4:
    // 0x802751E4: lwc1        $f6, 0xAC($a0)
    ctx->f6.u32l = MEM_W(ctx->r4, 0XAC);
    // 0x802751E8: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x802751EC: cvt.d.s     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f8.d = CVT_D_S(ctx->f6.fl);
    // 0x802751F0: c.lt.d      $f0, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f0.d < ctx->f8.d;
    // 0x802751F4: nop

    // 0x802751F8: bc1f        L_8027522C
    if (!c1cs) {
        // 0x802751FC: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_8027522C;
    }
    // 0x802751FC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80275200: lwc1        $f10, 0x50($a0)
    ctx->f10.u32l = MEM_W(ctx->r4, 0X50);
    // 0x80275204: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x80275208: cvt.d.s     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.fl); 
    ctx->f16.d = CVT_D_S(ctx->f10.fl);
    // 0x8027520C: c.lt.d      $f16, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f16.d < ctx->f0.d;
    // 0x80275210: nop

    // 0x80275214: bc1f        L_8027522C
    if (!c1cs) {
        // 0x80275218: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_8027522C;
    }
    // 0x80275218: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8027521C: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x80275220: nop

    // 0x80275224: swc1        $f18, 0x50($a0)
    MEM_W(0X50, ctx->r4) = ctx->f18.u32l;
    // 0x80275228: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8027522C:
    // 0x8027522C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80275230: jr          $ra
    // 0x80275234: nop

    return;
    // 0x80275234: nop

;}
RECOMP_FUNC void ovl_8024B800_func_80275238(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80275238: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8027523C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80275240: lw          $t6, 0xD8($a0)
    ctx->r14 = MEM_W(ctx->r4, 0XD8);
    // 0x80275244: nop

    // 0x80275248: lbu         $a1, 0x6($t6)
    ctx->r5 = MEM_BU(ctx->r14, 0X6);
    // 0x8027524C: jal         0x802752E8
    // 0x80275250: nop

    ovl_8024B800_func_802752E8(rdram, ctx);
        goto after_0;
    // 0x80275250: nop

    after_0:
    // 0x80275254: mtc1        $v0, $f4
    ctx->f4.u32l = ctx->r2;
    // 0x80275258: lui         $at, 0x8028
    ctx->r1 = S32(0X8028 << 16);
    // 0x8027525C: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x80275260: lwc1        $f11, -0x1DB0($at)
    ctx->f_odd[(11 - 1) * 2] = MEM_W(ctx->r1, -0X1DB0);
    // 0x80275264: lwc1        $f10, -0x1DAC($at)
    ctx->f10.u32l = MEM_W(ctx->r1, -0X1DAC);
    // 0x80275268: cvt.d.s     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f8.d = CVT_D_S(ctx->f6.fl);
    // 0x8027526C: mul.d       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f10.d); 
    ctx->f16.d = MUL_D(ctx->f8.d, ctx->f10.d);
    // 0x80275270: lui         $at, 0x3FF6
    ctx->r1 = S32(0X3FF6 << 16);
    // 0x80275274: mtc1        $at, $f19
    ctx->f_odd[(19 - 1) * 2] = ctx->r1;
    // 0x80275278: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x8027527C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80275280: add.d       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.d); NAN_CHECK(ctx->f18.d); 
    ctx->f4.d = ctx->f16.d + ctx->f18.d;
    // 0x80275284: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80275288: jr          $ra
    // 0x8027528C: cvt.s.d     $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.d); 
    ctx->f0.fl = CVT_S_D(ctx->f4.d);
    return;
    // 0x8027528C: cvt.s.d     $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.d); 
    ctx->f0.fl = CVT_S_D(ctx->f4.d);
;}
RECOMP_FUNC void ovl_8024B800_func_80275290(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80275290: lw          $v0, 0xD8($a0)
    ctx->r2 = MEM_W(ctx->r4, 0XD8);
    // 0x80275294: lui         $at, 0x3D0
    ctx->r1 = S32(0X3D0 << 16);
    // 0x80275298: lw          $t6, 0x20($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X20);
    // 0x8027529C: ori         $at, $at, 0x9000
    ctx->r1 = ctx->r1 | 0X9000;
    // 0x802752A0: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x802752A4: subu        $t7, $t7, $t6
    ctx->r15 = SUB32(ctx->r15, ctx->r14);
    // 0x802752A8: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x802752AC: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x802752B0: divu        $zero, $t7, $at
    lo = S32(U32(ctx->r15) / U32(ctx->r1)); hi = S32(U32(ctx->r15) % U32(ctx->r1));
    // 0x802752B4: addiu       $t0, $zero, 0xC
    ctx->r8 = ADD32(0, 0XC);
    // 0x802752B8: mflo        $t8
    ctx->r24 = lo;
    // 0x802752BC: sb          $t8, 0x1A($v0)
    MEM_B(0X1A, ctx->r2) = ctx->r24;
    // 0x802752C0: lw          $v0, 0xD8($a0)
    ctx->r2 = MEM_W(ctx->r4, 0XD8);
    // 0x802752C4: nop

    // 0x802752C8: lbu         $t9, 0x1A($v0)
    ctx->r25 = MEM_BU(ctx->r2, 0X1A);
    // 0x802752CC: nop

    // 0x802752D0: slti        $at, $t9, 0xD
    ctx->r1 = SIGNED(ctx->r25) < 0XD ? 1 : 0;
    // 0x802752D4: bne         $at, $zero, L_802752E0
    if (ctx->r1 != 0) {
        // 0x802752D8: nop
    
            goto L_802752E0;
    }
    // 0x802752D8: nop

    // 0x802752DC: sb          $t0, 0x1A($v0)
    MEM_B(0X1A, ctx->r2) = ctx->r8;
L_802752E0:
    // 0x802752E0: jr          $ra
    // 0x802752E4: nop

    return;
    // 0x802752E4: nop

;}
RECOMP_FUNC void ovl_8024B800_func_802752E8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802752E8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802752EC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802752F0: jal         0x80271A18
    // 0x802752F4: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    ovl_8024B800_func_80271A18(rdram, ctx);
        goto after_0;
    // 0x802752F4: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    after_0:
    // 0x802752F8: lbu         $t6, 0x1F($sp)
    ctx->r14 = MEM_BU(ctx->r29, 0X1F);
    // 0x802752FC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80275300: addu        $a0, $v0, $t6
    ctx->r4 = ADD32(ctx->r2, ctx->r14);
    // 0x80275304: bgez        $a0, L_80275310
    if (SIGNED(ctx->r4) >= 0) {
        // 0x80275308: addiu       $sp, $sp, 0x18
        ctx->r29 = ADD32(ctx->r29, 0X18);
            goto L_80275310;
    }
    // 0x80275308: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8027530C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
L_80275310:
    // 0x80275310: jr          $ra
    // 0x80275314: or          $v0, $a0, $zero
    ctx->r2 = ctx->r4 | 0;
    return;
    // 0x80275314: or          $v0, $a0, $zero
    ctx->r2 = ctx->r4 | 0;
;}
RECOMP_FUNC void ovl_8024B800_func_80275318(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80275318: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8027531C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80275320: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x80275324: jal         0x80271A18
    // 0x80275328: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    ovl_8024B800_func_80271A18(rdram, ctx);
        goto after_0;
    // 0x80275328: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    after_0:
    // 0x8027532C: lw          $t8, 0x18($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X18);
    // 0x80275330: lbu         $t6, 0x1F($sp)
    ctx->r14 = MEM_BU(ctx->r29, 0X1F);
    // 0x80275334: lw          $t9, 0xD8($t8)
    ctx->r25 = MEM_W(ctx->r24, 0XD8);
    // 0x80275338: addu        $t7, $v0, $t6
    ctx->r15 = ADD32(ctx->r2, ctx->r14);
    // 0x8027533C: lbu         $t0, 0x1A($t9)
    ctx->r8 = MEM_BU(ctx->r25, 0X1A);
    // 0x80275340: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80275344: addu        $v1, $t7, $t0
    ctx->r3 = ADD32(ctx->r15, ctx->r8);
    // 0x80275348: addiu       $v1, $v1, -0xC
    ctx->r3 = ADD32(ctx->r3, -0XC);
    // 0x8027534C: bgez        $v1, L_80275358
    if (SIGNED(ctx->r3) >= 0) {
        // 0x80275350: addiu       $sp, $sp, 0x18
        ctx->r29 = ADD32(ctx->r29, 0X18);
            goto L_80275358;
    }
    // 0x80275350: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80275354: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
L_80275358:
    // 0x80275358: mtc1        $v1, $f4
    ctx->f4.u32l = ctx->r3;
    // 0x8027535C: jr          $ra
    // 0x80275360: cvt.s.w     $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    ctx->f0.fl = CVT_S_W(ctx->f4.u32l);
    return;
    // 0x80275360: cvt.s.w     $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    ctx->f0.fl = CVT_S_W(ctx->f4.u32l);
;}
RECOMP_FUNC void ovl_8024B800_func_80275364(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80275364: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80275368: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8027536C: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80275370: jal         0x80275290
    // 0x80275374: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    ovl_8024B800_func_80275290(rdram, ctx);
        goto after_0;
    // 0x80275374: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    after_0:
    // 0x80275378: lw          $t6, 0xD8($s0)
    ctx->r14 = MEM_W(ctx->r16, 0XD8);
    // 0x8027537C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80275380: lbu         $a1, 0x3($t6)
    ctx->r5 = MEM_BU(ctx->r14, 0X3);
    // 0x80275384: jal         0x80275318
    // 0x80275388: nop

    ovl_8024B800_func_80275318(rdram, ctx);
        goto after_1;
    // 0x80275388: nop

    after_1:
    // 0x8027538C: lui         $at, 0x8028
    ctx->r1 = S32(0X8028 << 16);
    // 0x80275390: lwc1        $f13, -0x1DA8($at)
    ctx->f_odd[(13 - 1) * 2] = MEM_W(ctx->r1, -0X1DA8);
    // 0x80275394: lwc1        $f12, -0x1DA4($at)
    ctx->f12.u32l = MEM_W(ctx->r1, -0X1DA4);
    // 0x80275398: lui         $at, 0x8028
    ctx->r1 = S32(0X8028 << 16);
    // 0x8027539C: lwc1        $f7, -0x1DA0($at)
    ctx->f_odd[(7 - 1) * 2] = MEM_W(ctx->r1, -0X1DA0);
    // 0x802753A0: lwc1        $f6, -0x1D9C($at)
    ctx->f6.u32l = MEM_W(ctx->r1, -0X1D9C);
    // 0x802753A4: cvt.d.s     $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f4.d = CVT_D_S(ctx->f0.fl);
    // 0x802753A8: mul.d       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f6.d); 
    ctx->f8.d = MUL_D(ctx->f4.d, ctx->f6.d);
    // 0x802753AC: lw          $t7, 0xD8($s0)
    ctx->r15 = MEM_W(ctx->r16, 0XD8);
    // 0x802753B0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802753B4: add.d       $f10, $f8, $f12
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f12.d); 
    ctx->f10.d = ctx->f8.d + ctx->f12.d;
    // 0x802753B8: cvt.s.d     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f16.fl = CVT_S_D(ctx->f10.d);
    // 0x802753BC: swc1        $f16, 0x54($s0)
    MEM_W(0X54, ctx->r16) = ctx->f16.u32l;
    // 0x802753C0: lbu         $a1, 0x3($t7)
    ctx->r5 = MEM_BU(ctx->r15, 0X3);
    // 0x802753C4: jal         0x80275318
    // 0x802753C8: nop

    ovl_8024B800_func_80275318(rdram, ctx);
        goto after_2;
    // 0x802753C8: nop

    after_2:
    // 0x802753CC: lui         $at, 0x8028
    ctx->r1 = S32(0X8028 << 16);
    // 0x802753D0: lwc1        $f13, -0x1D98($at)
    ctx->f_odd[(13 - 1) * 2] = MEM_W(ctx->r1, -0X1D98);
    // 0x802753D4: lwc1        $f12, -0x1D94($at)
    ctx->f12.u32l = MEM_W(ctx->r1, -0X1D94);
    // 0x802753D8: lui         $at, 0x8028
    ctx->r1 = S32(0X8028 << 16);
    // 0x802753DC: lwc1        $f5, -0x1D90($at)
    ctx->f_odd[(5 - 1) * 2] = MEM_W(ctx->r1, -0X1D90);
    // 0x802753E0: lwc1        $f4, -0x1D8C($at)
    ctx->f4.u32l = MEM_W(ctx->r1, -0X1D8C);
    // 0x802753E4: cvt.d.s     $f18, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f18.d = CVT_D_S(ctx->f0.fl);
    // 0x802753E8: mul.d       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.d); NAN_CHECK(ctx->f4.d); 
    ctx->f6.d = MUL_D(ctx->f18.d, ctx->f4.d);
    // 0x802753EC: lui         $at, 0x8028
    ctx->r1 = S32(0X8028 << 16);
    // 0x802753F0: lwc1        $f16, 0x54($s0)
    ctx->f16.u32l = MEM_W(ctx->r16, 0X54);
    // 0x802753F4: add.d       $f8, $f6, $f12
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f12.d); 
    ctx->f8.d = ctx->f6.d + ctx->f12.d;
    // 0x802753F8: cvt.s.d     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.d); 
    ctx->f10.fl = CVT_S_D(ctx->f8.d);
    // 0x802753FC: swc1        $f10, 0x5C($s0)
    MEM_W(0X5C, ctx->r16) = ctx->f10.u32l;
    // 0x80275400: lwc1        $f4, -0x1D84($at)
    ctx->f4.u32l = MEM_W(ctx->r1, -0X1D84);
    // 0x80275404: lwc1        $f5, -0x1D88($at)
    ctx->f_odd[(5 - 1) * 2] = MEM_W(ctx->r1, -0X1D88);
    // 0x80275408: cvt.d.s     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); 
    ctx->f18.d = CVT_D_S(ctx->f16.fl);
    // 0x8027540C: sub.d       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.d); NAN_CHECK(ctx->f4.d); 
    ctx->f6.d = ctx->f18.d - ctx->f4.d;
    // 0x80275410: lui         $at, 0x8028
    ctx->r1 = S32(0X8028 << 16);
    // 0x80275414: cvt.s.d     $f2, $f6
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.d); 
    ctx->f2.fl = CVT_S_D(ctx->f6.d);
    // 0x80275418: cvt.d.s     $f8, $f2
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f8.d = CVT_D_S(ctx->f2.fl);
    // 0x8027541C: c.lt.d      $f8, $f12
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f8.d < ctx->f12.d;
    // 0x80275420: swc1        $f2, 0x58($s0)
    MEM_W(0X58, ctx->r16) = ctx->f2.u32l;
    // 0x80275424: bc1f        L_80275438
    if (!c1cs) {
        // 0x80275428: nop
    
            goto L_80275438;
    }
    // 0x80275428: nop

    // 0x8027542C: lwc1        $f10, -0x1D80($at)
    ctx->f10.u32l = MEM_W(ctx->r1, -0X1D80);
    // 0x80275430: nop

    // 0x80275434: swc1        $f10, 0x58($s0)
    MEM_W(0X58, ctx->r16) = ctx->f10.u32l;
L_80275438:
    // 0x80275438: lw          $t8, 0xD8($s0)
    ctx->r24 = MEM_W(ctx->r16, 0XD8);
    // 0x8027543C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80275440: lbu         $a1, 0x4($t8)
    ctx->r5 = MEM_BU(ctx->r24, 0X4);
    // 0x80275444: jal         0x80275318
    // 0x80275448: nop

    ovl_8024B800_func_80275318(rdram, ctx);
        goto after_3;
    // 0x80275448: nop

    after_3:
    // 0x8027544C: lui         $at, 0x8028
    ctx->r1 = S32(0X8028 << 16);
    // 0x80275450: lwc1        $f19, -0x1D78($at)
    ctx->f_odd[(19 - 1) * 2] = MEM_W(ctx->r1, -0X1D78);
    // 0x80275454: lwc1        $f18, -0x1D74($at)
    ctx->f18.u32l = MEM_W(ctx->r1, -0X1D74);
    // 0x80275458: cvt.d.s     $f16, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f16.d = CVT_D_S(ctx->f0.fl);
    // 0x8027545C: mul.d       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.d); NAN_CHECK(ctx->f18.d); 
    ctx->f4.d = MUL_D(ctx->f16.d, ctx->f18.d);
    // 0x80275460: lui         $at, 0x8028
    ctx->r1 = S32(0X8028 << 16);
    // 0x80275464: lwc1        $f7, -0x1D70($at)
    ctx->f_odd[(7 - 1) * 2] = MEM_W(ctx->r1, -0X1D70);
    // 0x80275468: lwc1        $f6, -0x1D6C($at)
    ctx->f6.u32l = MEM_W(ctx->r1, -0X1D6C);
    // 0x8027546C: lw          $t9, 0xD8($s0)
    ctx->r25 = MEM_W(ctx->r16, 0XD8);
    // 0x80275470: add.d       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f6.d); 
    ctx->f8.d = ctx->f4.d + ctx->f6.d;
    // 0x80275474: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80275478: cvt.s.d     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.d); 
    ctx->f10.fl = CVT_S_D(ctx->f8.d);
    // 0x8027547C: swc1        $f10, 0x6C($s0)
    MEM_W(0X6C, ctx->r16) = ctx->f10.u32l;
    // 0x80275480: lbu         $a1, 0xC($t9)
    ctx->r5 = MEM_BU(ctx->r25, 0XC);
    // 0x80275484: jal         0x80275318
    // 0x80275488: nop

    ovl_8024B800_func_80275318(rdram, ctx);
        goto after_4;
    // 0x80275488: nop

    after_4:
    // 0x8027548C: lwc1        $f16, 0x54($s0)
    ctx->f16.u32l = MEM_W(ctx->r16, 0X54);
    // 0x80275490: lui         $at, 0x8028
    ctx->r1 = S32(0X8028 << 16);
    // 0x80275494: mul.s       $f18, $f0, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = MUL_S(ctx->f0.fl, ctx->f16.fl);
    // 0x80275498: lwc1        $f7, -0x1D68($at)
    ctx->f_odd[(7 - 1) * 2] = MEM_W(ctx->r1, -0X1D68);
    // 0x8027549C: lwc1        $f6, -0x1D64($at)
    ctx->f6.u32l = MEM_W(ctx->r1, -0X1D64);
    // 0x802754A0: lw          $t0, 0xD8($s0)
    ctx->r8 = MEM_W(ctx->r16, 0XD8);
    // 0x802754A4: cvt.d.s     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.fl); 
    ctx->f4.d = CVT_D_S(ctx->f18.fl);
    // 0x802754A8: mul.d       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f6.d); 
    ctx->f8.d = MUL_D(ctx->f4.d, ctx->f6.d);
    // 0x802754AC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802754B0: cvt.s.d     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.d); 
    ctx->f10.fl = CVT_S_D(ctx->f8.d);
    // 0x802754B4: swc1        $f10, 0x64($s0)
    MEM_W(0X64, ctx->r16) = ctx->f10.u32l;
    // 0x802754B8: lbu         $a1, 0xC($t0)
    ctx->r5 = MEM_BU(ctx->r8, 0XC);
    // 0x802754BC: jal         0x80275318
    // 0x802754C0: nop

    ovl_8024B800_func_80275318(rdram, ctx);
        goto after_5;
    // 0x802754C0: nop

    after_5:
    // 0x802754C4: lwc1        $f16, 0x5C($s0)
    ctx->f16.u32l = MEM_W(ctx->r16, 0X5C);
    // 0x802754C8: lui         $at, 0x8028
    ctx->r1 = S32(0X8028 << 16);
    // 0x802754CC: mul.s       $f18, $f0, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = MUL_S(ctx->f0.fl, ctx->f16.fl);
    // 0x802754D0: lwc1        $f7, -0x1D60($at)
    ctx->f_odd[(7 - 1) * 2] = MEM_W(ctx->r1, -0X1D60);
    // 0x802754D4: lwc1        $f6, -0x1D5C($at)
    ctx->f6.u32l = MEM_W(ctx->r1, -0X1D5C);
    // 0x802754D8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802754DC: cvt.d.s     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.fl); 
    ctx->f4.d = CVT_D_S(ctx->f18.fl);
    // 0x802754E0: mul.d       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f6.d); 
    ctx->f8.d = MUL_D(ctx->f4.d, ctx->f6.d);
    // 0x802754E4: cvt.s.d     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.d); 
    ctx->f10.fl = CVT_S_D(ctx->f8.d);
    // 0x802754E8: jal         0x80275238
    // 0x802754EC: swc1        $f10, 0x68($s0)
    MEM_W(0X68, ctx->r16) = ctx->f10.u32l;
    ovl_8024B800_func_80275238(rdram, ctx);
        goto after_6;
    // 0x802754EC: swc1        $f10, 0x68($s0)
    MEM_W(0X68, ctx->r16) = ctx->f10.u32l;
    after_6:
    // 0x802754F0: lui         $at, 0x8028
    ctx->r1 = S32(0X8028 << 16);
    // 0x802754F4: lwc1        $f19, -0x1D58($at)
    ctx->f_odd[(19 - 1) * 2] = MEM_W(ctx->r1, -0X1D58);
    // 0x802754F8: lwc1        $f18, -0x1D54($at)
    ctx->f18.u32l = MEM_W(ctx->r1, -0X1D54);
    // 0x802754FC: cvt.d.s     $f16, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f16.d = CVT_D_S(ctx->f0.fl);
    // 0x80275500: mul.d       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.d); NAN_CHECK(ctx->f18.d); 
    ctx->f4.d = MUL_D(ctx->f16.d, ctx->f18.d);
    // 0x80275504: mtc1        $zero, $f12
    ctx->f12.u32l = 0;
    // 0x80275508: mov.s       $f14, $f0
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    ctx->f14.fl = ctx->f0.fl;
    // 0x8027550C: lui         $a2, 0xBEA0
    ctx->r6 = S32(0XBEA0 << 16);
    // 0x80275510: cvt.s.d     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.d); 
    ctx->f6.fl = CVT_S_D(ctx->f4.d);
    // 0x80275514: mfc1        $a3, $f6
    ctx->r7 = (int32_t)ctx->f6.u32l;
    // 0x80275518: jal         0x8005444C
    // 0x8027551C: nop

    func_8005444C(rdram, ctx);
        goto after_7;
    // 0x8027551C: nop

    after_7:
    // 0x80275520: swc1        $f0, 0x90($s0)
    MEM_W(0X90, ctx->r16) = ctx->f0.u32l;
    // 0x80275524: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80275528: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8027552C: jr          $ra
    // 0x80275530: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x80275530: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void ovl_8024B800_func_80275534(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80275534: lwc1        $f0, 0x74($a0)
    ctx->f0.u32l = MEM_W(ctx->r4, 0X74);
    // 0x80275538: lwc1        $f4, 0x48($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X48);
    // 0x8027553C: lui         $at, 0x3FD4
    ctx->r1 = S32(0X3FD4 << 16);
    // 0x80275540: add.s       $f6, $f4, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = ctx->f4.fl + ctx->f0.fl;
    // 0x80275544: mtc1        $at, $f11
    ctx->f_odd[(11 - 1) * 2] = ctx->r1;
    // 0x80275548: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x8027554C: swc1        $f6, 0x48($a0)
    MEM_W(0X48, ctx->r4) = ctx->f6.u32l;
    // 0x80275550: mtc1        $zero, $f2
    ctx->f2.u32l = 0;
    // 0x80275554: lwc1        $f4, 0x48($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X48);
    // 0x80275558: cvt.d.s     $f8, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f8.d = CVT_D_S(ctx->f0.fl);
    // 0x8027555C: sub.d       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f10.d); 
    ctx->f16.d = ctx->f8.d - ctx->f10.d;
    // 0x80275560: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x80275564: c.le.s      $f4, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f4.fl <= ctx->f2.fl;
    // 0x80275568: cvt.s.d     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.d); 
    ctx->f18.fl = CVT_S_D(ctx->f16.d);
    // 0x8027556C: bc1f        L_80275580
    if (!c1cs) {
        // 0x80275570: swc1        $f18, 0x74($a0)
        MEM_W(0X74, ctx->r4) = ctx->f18.u32l;
            goto L_80275580;
    }
    // 0x80275570: swc1        $f18, 0x74($a0)
    MEM_W(0X74, ctx->r4) = ctx->f18.u32l;
    // 0x80275574: swc1        $f2, 0x48($a0)
    MEM_W(0X48, ctx->r4) = ctx->f2.u32l;
    // 0x80275578: jr          $ra
    // 0x8027557C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    return;
    // 0x8027557C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_80275580:
    // 0x80275580: jr          $ra
    // 0x80275584: nop

    return;
    // 0x80275584: nop

;}
RECOMP_FUNC void ovl_8024B800_func_80275588(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80275588: lwc1        $f4, 0x4C($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X4C);
    // 0x8027558C: lwc1        $f6, 0x78($a0)
    ctx->f6.u32l = MEM_W(ctx->r4, 0X78);
    // 0x80275590: lwc1        $f10, 0x44($a0)
    ctx->f10.u32l = MEM_W(ctx->r4, 0X44);
    // 0x80275594: lwc1        $f16, 0x70($a0)
    ctx->f16.u32l = MEM_W(ctx->r4, 0X70);
    // 0x80275598: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x8027559C: add.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl + ctx->f16.fl;
    // 0x802755A0: swc1        $f8, 0x4C($a0)
    MEM_W(0X4C, ctx->r4) = ctx->f8.u32l;
    // 0x802755A4: jr          $ra
    // 0x802755A8: swc1        $f18, 0x44($a0)
    MEM_W(0X44, ctx->r4) = ctx->f18.u32l;
    return;
    // 0x802755A8: swc1        $f18, 0x44($a0)
    MEM_W(0X44, ctx->r4) = ctx->f18.u32l;
;}
RECOMP_FUNC void ovl_8024B800_func_802755AC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802755AC: lui         $at, 0x8028
    ctx->r1 = S32(0X8028 << 16);
    // 0x802755B0: mtc1        $a1, $f14
    ctx->f14.u32l = ctx->r5;
    // 0x802755B4: lwc1        $f3, -0x1D50($at)
    ctx->f_odd[(3 - 1) * 2] = MEM_W(ctx->r1, -0X1D50);
    // 0x802755B8: lwc1        $f2, -0x1D4C($at)
    ctx->f2.u32l = MEM_W(ctx->r1, -0X1D4C);
    // 0x802755BC: cvt.d.s     $f0, $f14
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); 
    ctx->f0.d = CVT_D_S(ctx->f14.fl);
    // 0x802755C0: c.le.d      $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f2.d <= ctx->f0.d;
    // 0x802755C4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802755C8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802755CC: bc1f        L_802755DC
    if (!c1cs) {
        // 0x802755D0: sw          $a2, 0x20($sp)
        MEM_W(0X20, ctx->r29) = ctx->r6;
            goto L_802755DC;
    }
    // 0x802755D0: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    // 0x802755D4: sub.d       $f4, $f0, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.d); NAN_CHECK(ctx->f2.d); 
    ctx->f4.d = ctx->f0.d - ctx->f2.d;
    // 0x802755D8: cvt.s.d     $f14, $f4
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.d); 
    ctx->f14.fl = CVT_S_D(ctx->f4.d);
L_802755DC:
    // 0x802755DC: lui         $at, 0x8028
    ctx->r1 = S32(0X8028 << 16);
    // 0x802755E0: lwc1        $f6, 0x14($a0)
    ctx->f6.u32l = MEM_W(ctx->r4, 0X14);
    // 0x802755E4: lwc1        $f11, -0x1D48($at)
    ctx->f_odd[(11 - 1) * 2] = MEM_W(ctx->r1, -0X1D48);
    // 0x802755E8: lwc1        $f10, -0x1D44($at)
    ctx->f10.u32l = MEM_W(ctx->r1, -0X1D44);
    // 0x802755EC: cvt.d.s     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f8.d = CVT_D_S(ctx->f6.fl);
    // 0x802755F0: mul.d       $f18, $f8, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f10.d); 
    ctx->f18.d = MUL_D(ctx->f8.d, ctx->f10.d);
    // 0x802755F4: swc1        $f14, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f14.u32l;
    // 0x802755F8: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x802755FC: jal         0x8027924C
    // 0x80275600: cvt.s.d     $f12, $f18
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.d); 
    ctx->f12.fl = CVT_S_D(ctx->f18.d);
    ovl_8024B800_func_8027924C(rdram, ctx);
        goto after_0;
    // 0x80275600: cvt.s.d     $f12, $f18
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.d); 
    ctx->f12.fl = CVT_S_D(ctx->f18.d);
    after_0:
    // 0x80275604: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x80275608: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x8027560C: c.lt.s      $f0, $f16
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f0.fl < ctx->f16.fl;
    // 0x80275610: lwc1        $f12, 0x20($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X20);
    // 0x80275614: lwc1        $f14, 0x1C($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x80275618: bc1f        L_80275628
    if (!c1cs) {
        // 0x8027561C: lui         $at, 0x8028
        ctx->r1 = S32(0X8028 << 16);
            goto L_80275628;
    }
    // 0x8027561C: lui         $at, 0x8028
    ctx->r1 = S32(0X8028 << 16);
    // 0x80275620: b           L_8027562C
    // 0x80275624: neg.s       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = -ctx->f0.fl;
        goto L_8027562C;
    // 0x80275624: neg.s       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = -ctx->f0.fl;
L_80275628:
    // 0x80275628: mov.s       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.fl = ctx->f0.fl;
L_8027562C:
    // 0x8027562C: c.le.s      $f12, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f12.fl <= ctx->f2.fl;
    // 0x80275630: nop

    // 0x80275634: bc1f        L_802756A8
    if (!c1cs) {
        // 0x80275638: nop
    
            goto L_802756A8;
    }
    // 0x80275638: nop

    // 0x8027563C: c.le.s      $f16, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f16.fl <= ctx->f0.fl;
    // 0x80275640: lui         $at, 0x8028
    ctx->r1 = S32(0X8028 << 16);
    // 0x80275644: bc1f        L_8027567C
    if (!c1cs) {
        // 0x80275648: nop
    
            goto L_8027567C;
    }
    // 0x80275648: nop

    // 0x8027564C: lui         $at, 0x8028
    ctx->r1 = S32(0X8028 << 16);
    // 0x80275650: lwc1        $f7, -0x1D40($at)
    ctx->f_odd[(7 - 1) * 2] = MEM_W(ctx->r1, -0X1D40);
    // 0x80275654: lwc1        $f6, -0x1D3C($at)
    ctx->f6.u32l = MEM_W(ctx->r1, -0X1D3C);
    // 0x80275658: cvt.d.s     $f4, $f12
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); 
    ctx->f4.d = CVT_D_S(ctx->f12.fl);
    // 0x8027565C: mul.d       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f6.d); 
    ctx->f8.d = MUL_D(ctx->f4.d, ctx->f6.d);
    // 0x80275660: lwc1        $f10, 0x14($a0)
    ctx->f10.u32l = MEM_W(ctx->r4, 0X14);
    // 0x80275664: nop

    // 0x80275668: cvt.d.s     $f18, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.fl); 
    ctx->f18.d = CVT_D_S(ctx->f10.fl);
    // 0x8027566C: add.d       $f4, $f18, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f18.d); NAN_CHECK(ctx->f8.d); 
    ctx->f4.d = ctx->f18.d + ctx->f8.d;
    // 0x80275670: cvt.s.d     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.d); 
    ctx->f6.fl = CVT_S_D(ctx->f4.d);
    // 0x80275674: b           L_802756C0
    // 0x80275678: swc1        $f6, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->f6.u32l;
        goto L_802756C0;
    // 0x80275678: swc1        $f6, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->f6.u32l;
L_8027567C:
    // 0x8027567C: lwc1        $f19, -0x1D38($at)
    ctx->f_odd[(19 - 1) * 2] = MEM_W(ctx->r1, -0X1D38);
    // 0x80275680: lwc1        $f18, -0x1D34($at)
    ctx->f18.u32l = MEM_W(ctx->r1, -0X1D34);
    // 0x80275684: cvt.d.s     $f10, $f12
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); 
    ctx->f10.d = CVT_D_S(ctx->f12.fl);
    // 0x80275688: mul.d       $f8, $f10, $f18
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f18.d); 
    ctx->f8.d = MUL_D(ctx->f10.d, ctx->f18.d);
    // 0x8027568C: lwc1        $f4, 0x14($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X14);
    // 0x80275690: nop

    // 0x80275694: cvt.d.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.d = CVT_D_S(ctx->f4.fl);
    // 0x80275698: sub.d       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f8.d); 
    ctx->f10.d = ctx->f6.d - ctx->f8.d;
    // 0x8027569C: cvt.s.d     $f18, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f18.fl = CVT_S_D(ctx->f10.d);
    // 0x802756A0: b           L_802756C0
    // 0x802756A4: swc1        $f18, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->f18.u32l;
        goto L_802756C0;
    // 0x802756A4: swc1        $f18, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->f18.u32l;
L_802756A8:
    // 0x802756A8: lwc1        $f7, -0x1D30($at)
    ctx->f_odd[(7 - 1) * 2] = MEM_W(ctx->r1, -0X1D30);
    // 0x802756AC: lwc1        $f6, -0x1D2C($at)
    ctx->f6.u32l = MEM_W(ctx->r1, -0X1D2C);
    // 0x802756B0: cvt.d.s     $f4, $f14
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); 
    ctx->f4.d = CVT_D_S(ctx->f14.fl);
    // 0x802756B4: mul.d       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f6.d); 
    ctx->f8.d = MUL_D(ctx->f4.d, ctx->f6.d);
    // 0x802756B8: cvt.s.d     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.d); 
    ctx->f10.fl = CVT_S_D(ctx->f8.d);
    // 0x802756BC: swc1        $f10, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->f10.u32l;
L_802756C0:
    // 0x802756C0: lui         $at, 0x8028
    ctx->r1 = S32(0X8028 << 16);
    // 0x802756C4: lwc1        $f18, 0x14($a0)
    ctx->f18.u32l = MEM_W(ctx->r4, 0X14);
    // 0x802756C8: lwc1        $f3, -0x1D28($at)
    ctx->f_odd[(3 - 1) * 2] = MEM_W(ctx->r1, -0X1D28);
    // 0x802756CC: lwc1        $f2, -0x1D24($at)
    ctx->f2.u32l = MEM_W(ctx->r1, -0X1D24);
    // 0x802756D0: cvt.d.s     $f0, $f18
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.fl); 
    ctx->f0.d = CVT_D_S(ctx->f18.fl);
    // 0x802756D4: c.le.d      $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f2.d <= ctx->f0.d;
    // 0x802756D8: mtc1        $zero, $f11
    ctx->f_odd[(11 - 1) * 2] = 0;
    // 0x802756DC: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x802756E0: bc1f        L_80275700
    if (!c1cs) {
        // 0x802756E4: nop
    
            goto L_80275700;
    }
    // 0x802756E4: nop

    // 0x802756E8: sub.d       $f4, $f0, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.d); NAN_CHECK(ctx->f2.d); 
    ctx->f4.d = ctx->f0.d - ctx->f2.d;
    // 0x802756EC: cvt.s.d     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.d); 
    ctx->f6.fl = CVT_S_D(ctx->f4.d);
    // 0x802756F0: swc1        $f6, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->f6.u32l;
    // 0x802756F4: lwc1        $f8, 0x14($a0)
    ctx->f8.u32l = MEM_W(ctx->r4, 0X14);
    // 0x802756F8: nop

    // 0x802756FC: cvt.d.s     $f0, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f0.d = CVT_D_S(ctx->f8.fl);
L_80275700:
    // 0x80275700: c.lt.d      $f0, $f10
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f0.d < ctx->f10.d;
    // 0x80275704: nop

    // 0x80275708: bc1f        L_80275720
    if (!c1cs) {
        // 0x8027570C: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_80275720;
    }
    // 0x8027570C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80275710: add.d       $f18, $f0, $f2
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.d); NAN_CHECK(ctx->f2.d); 
    ctx->f18.d = ctx->f0.d + ctx->f2.d;
    // 0x80275714: cvt.s.d     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.d); 
    ctx->f4.fl = CVT_S_D(ctx->f18.d);
    // 0x80275718: swc1        $f4, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->f4.u32l;
    // 0x8027571C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80275720:
    // 0x80275720: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80275724: jr          $ra
    // 0x80275728: nop

    return;
    // 0x80275728: nop

;}
RECOMP_FUNC void ovl_8024B800_func_80275698(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80275698: sub.d       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f8.d); 
    ctx->f10.d = ctx->f6.d - ctx->f8.d;
    // 0x8027569C: cvt.s.d     $f18, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f18.fl = CVT_S_D(ctx->f10.d);
    // 0x802756A0: b           L_802756C0
    // 0x802756A4: swc1        $f18, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->f18.u32l;
        goto L_802756C0;
    // 0x802756A4: swc1        $f18, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->f18.u32l;
    // 0x802756A8: lwc1        $f7, -0x1D30($at)
    ctx->f_odd[(7 - 1) * 2] = MEM_W(ctx->r1, -0X1D30);
    // 0x802756AC: lwc1        $f6, -0x1D2C($at)
    ctx->f6.u32l = MEM_W(ctx->r1, -0X1D2C);
    // 0x802756B0: cvt.d.s     $f4, $f14
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); 
    ctx->f4.d = CVT_D_S(ctx->f14.fl);
    // 0x802756B4: mul.d       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f6.d); 
    ctx->f8.d = MUL_D(ctx->f4.d, ctx->f6.d);
    // 0x802756B8: cvt.s.d     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.d); 
    ctx->f10.fl = CVT_S_D(ctx->f8.d);
    // 0x802756BC: swc1        $f10, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->f10.u32l;
L_802756C0:
    // 0x802756C0: lui         $at, 0x8028
    ctx->r1 = S32(0X8028 << 16);
    // 0x802756C4: lwc1        $f18, 0x14($a0)
    ctx->f18.u32l = MEM_W(ctx->r4, 0X14);
    // 0x802756C8: lwc1        $f3, -0x1D28($at)
    ctx->f_odd[(3 - 1) * 2] = MEM_W(ctx->r1, -0X1D28);
    // 0x802756CC: lwc1        $f2, -0x1D24($at)
    ctx->f2.u32l = MEM_W(ctx->r1, -0X1D24);
    // 0x802756D0: cvt.d.s     $f0, $f18
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.fl); 
    ctx->f0.d = CVT_D_S(ctx->f18.fl);
    // 0x802756D4: c.le.d      $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f2.d <= ctx->f0.d;
    // 0x802756D8: mtc1        $zero, $f11
    ctx->f_odd[(11 - 1) * 2] = 0;
    // 0x802756DC: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x802756E0: bc1f        L_80275700
    if (!c1cs) {
        // 0x802756E4: nop
    
            goto L_80275700;
    }
    // 0x802756E4: nop

    // 0x802756E8: sub.d       $f4, $f0, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.d); NAN_CHECK(ctx->f2.d); 
    ctx->f4.d = ctx->f0.d - ctx->f2.d;
    // 0x802756EC: cvt.s.d     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.d); 
    ctx->f6.fl = CVT_S_D(ctx->f4.d);
    // 0x802756F0: swc1        $f6, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->f6.u32l;
    // 0x802756F4: lwc1        $f8, 0x14($a0)
    ctx->f8.u32l = MEM_W(ctx->r4, 0X14);
    // 0x802756F8: nop

    // 0x802756FC: cvt.d.s     $f0, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f0.d = CVT_D_S(ctx->f8.fl);
L_80275700:
    // 0x80275700: c.lt.d      $f0, $f10
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f0.d < ctx->f10.d;
    // 0x80275704: nop

    // 0x80275708: bc1f        L_80275720
    if (!c1cs) {
        // 0x8027570C: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_80275720;
    }
    // 0x8027570C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80275710: add.d       $f18, $f0, $f2
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.d); NAN_CHECK(ctx->f2.d); 
    ctx->f18.d = ctx->f0.d + ctx->f2.d;
    // 0x80275714: cvt.s.d     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.d); 
    ctx->f4.fl = CVT_S_D(ctx->f18.d);
    // 0x80275718: swc1        $f4, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->f4.u32l;
    // 0x8027571C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80275720:
    // 0x80275720: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80275724: jr          $ra
    // 0x80275728: nop

    return;
    // 0x80275728: nop

;}
RECOMP_FUNC void ovl_8024B800_func_8027572C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8027572C: lw          $v1, 0x38($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X38);
    // 0x80275730: lhu         $v0, 0x6($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X6);
    // 0x80275734: lhu         $t6, 0x4($v1)
    ctx->r14 = MEM_HU(ctx->r3, 0X4);
    // 0x80275738: lui         $t0, 0x8028
    ctx->r8 = S32(0X8028 << 16);
    // 0x8027573C: andi        $t7, $t6, 0x3FF0
    ctx->r15 = ctx->r14 & 0X3FF0;
    // 0x80275740: sh          $t7, 0x4($a0)
    MEM_H(0X4, ctx->r4) = ctx->r15;
    // 0x80275744: lhu         $t8, 0x2($v1)
    ctx->r24 = MEM_HU(ctx->r3, 0X2);
    // 0x80275748: addiu       $t0, $t0, -0x22FC
    ctx->r8 = ADD32(ctx->r8, -0X22FC);
    // 0x8027574C: andi        $t9, $t8, 0x3FF0
    ctx->r25 = ctx->r24 & 0X3FF0;
    // 0x80275750: sh          $t9, 0x6($a0)
    MEM_H(0X6, ctx->r4) = ctx->r25;
    // 0x80275754: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x80275758: or          $a3, $a0, $zero
    ctx->r7 = ctx->r4 | 0;
    // 0x8027575C: addiu       $t1, $zero, 0xC
    ctx->r9 = ADD32(0, 0XC);
L_80275760:
    // 0x80275760: lw          $v1, 0x38($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X38);
    // 0x80275764: lhu         $a1, 0xA($a3)
    ctx->r5 = MEM_HU(ctx->r7, 0XA);
    // 0x80275768: lhu         $t2, 0x4($v1)
    ctx->r10 = MEM_HU(ctx->r3, 0X4);
    // 0x8027576C: addu        $t5, $t0, $a2
    ctx->r13 = ADD32(ctx->r8, ctx->r6);
    // 0x80275770: and         $t3, $a1, $t2
    ctx->r11 = ctx->r5 & ctx->r10;
    // 0x80275774: beq         $t3, $zero, L_80275798
    if (ctx->r11 == 0) {
        // 0x80275778: nop
    
            goto L_80275798;
    }
    // 0x80275778: nop

    // 0x8027577C: lhu         $t4, 0x4($a0)
    ctx->r12 = MEM_HU(ctx->r4, 0X4);
    // 0x80275780: lhu         $t6, 0x0($t5)
    ctx->r14 = MEM_HU(ctx->r13, 0X0);
    // 0x80275784: lw          $v1, 0x38($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X38);
    // 0x80275788: or          $t7, $t4, $t6
    ctx->r15 = ctx->r12 | ctx->r14;
    // 0x8027578C: sh          $t7, 0x4($a0)
    MEM_H(0X4, ctx->r4) = ctx->r15;
    // 0x80275790: lhu         $a1, 0xA($a3)
    ctx->r5 = MEM_HU(ctx->r7, 0XA);
    // 0x80275794: nop

L_80275798:
    // 0x80275798: lhu         $t8, 0x2($v1)
    ctx->r24 = MEM_HU(ctx->r3, 0X2);
    // 0x8027579C: addu        $t3, $t0, $a2
    ctx->r11 = ADD32(ctx->r8, ctx->r6);
    // 0x802757A0: and         $t9, $a1, $t8
    ctx->r25 = ctx->r5 & ctx->r24;
    // 0x802757A4: beq         $t9, $zero, L_802757C0
    if (ctx->r25 == 0) {
        // 0x802757A8: nop
    
            goto L_802757C0;
    }
    // 0x802757A8: nop

    // 0x802757AC: lhu         $t2, 0x6($a0)
    ctx->r10 = MEM_HU(ctx->r4, 0X6);
    // 0x802757B0: lhu         $t5, 0x0($t3)
    ctx->r13 = MEM_HU(ctx->r11, 0X0);
    // 0x802757B4: lw          $v1, 0x38($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X38);
    // 0x802757B8: or          $t4, $t2, $t5
    ctx->r12 = ctx->r10 | ctx->r13;
    // 0x802757BC: sh          $t4, 0x6($a0)
    MEM_H(0X6, ctx->r4) = ctx->r12;
L_802757C0:
    // 0x802757C0: lhu         $a1, 0xC($a3)
    ctx->r5 = MEM_HU(ctx->r7, 0XC);
    // 0x802757C4: lhu         $t6, 0x4($v1)
    ctx->r14 = MEM_HU(ctx->r3, 0X4);
    // 0x802757C8: addu        $t9, $t0, $a2
    ctx->r25 = ADD32(ctx->r8, ctx->r6);
    // 0x802757CC: and         $t7, $a1, $t6
    ctx->r15 = ctx->r5 & ctx->r14;
    // 0x802757D0: beq         $t7, $zero, L_802757F4
    if (ctx->r15 == 0) {
        // 0x802757D4: nop
    
            goto L_802757F4;
    }
    // 0x802757D4: nop

    // 0x802757D8: lhu         $t8, 0x4($a0)
    ctx->r24 = MEM_HU(ctx->r4, 0X4);
    // 0x802757DC: lhu         $t3, 0x2($t9)
    ctx->r11 = MEM_HU(ctx->r25, 0X2);
    // 0x802757E0: lw          $v1, 0x38($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X38);
    // 0x802757E4: or          $t2, $t8, $t3
    ctx->r10 = ctx->r24 | ctx->r11;
    // 0x802757E8: sh          $t2, 0x4($a0)
    MEM_H(0X4, ctx->r4) = ctx->r10;
    // 0x802757EC: lhu         $a1, 0xC($a3)
    ctx->r5 = MEM_HU(ctx->r7, 0XC);
    // 0x802757F0: nop

L_802757F4:
    // 0x802757F4: lhu         $t5, 0x2($v1)
    ctx->r13 = MEM_HU(ctx->r3, 0X2);
    // 0x802757F8: addu        $t7, $t0, $a2
    ctx->r15 = ADD32(ctx->r8, ctx->r6);
    // 0x802757FC: and         $t4, $a1, $t5
    ctx->r12 = ctx->r5 & ctx->r13;
    // 0x80275800: beq         $t4, $zero, L_8027581C
    if (ctx->r12 == 0) {
        // 0x80275804: nop
    
            goto L_8027581C;
    }
    // 0x80275804: nop

    // 0x80275808: lhu         $t6, 0x6($a0)
    ctx->r14 = MEM_HU(ctx->r4, 0X6);
    // 0x8027580C: lhu         $t9, 0x2($t7)
    ctx->r25 = MEM_HU(ctx->r15, 0X2);
    // 0x80275810: nop

    // 0x80275814: or          $t8, $t6, $t9
    ctx->r24 = ctx->r14 | ctx->r25;
    // 0x80275818: sh          $t8, 0x6($a0)
    MEM_H(0X6, ctx->r4) = ctx->r24;
L_8027581C:
    // 0x8027581C: addiu       $a2, $a2, 0x4
    ctx->r6 = ADD32(ctx->r6, 0X4);
    // 0x80275820: bne         $a2, $t1, L_80275760
    if (ctx->r6 != ctx->r9) {
        // 0x80275824: addiu       $a3, $a3, 0x4
        ctx->r7 = ADD32(ctx->r7, 0X4);
            goto L_80275760;
    }
    // 0x80275824: addiu       $a3, $a3, 0x4
    ctx->r7 = ADD32(ctx->r7, 0X4);
    // 0x80275828: lhu         $v1, 0x6($a0)
    ctx->r3 = MEM_HU(ctx->r4, 0X6);
    // 0x8027582C: lui         $t2, 0x8010
    ctx->r10 = S32(0X8010 << 16);
    // 0x80275830: andi        $t3, $v1, 0x2020
    ctx->r11 = ctx->r3 & 0X2020;
    // 0x80275834: beq         $t3, $zero, L_802758A8
    if (ctx->r11 == 0) {
        // 0x80275838: xori        $t4, $v1, 0xFFFF
        ctx->r12 = ctx->r3 ^ 0XFFFF;
            goto L_802758A8;
    }
    // 0x80275838: xori        $t4, $v1, 0xFFFF
    ctx->r12 = ctx->r3 ^ 0XFFFF;
    // 0x8027583C: lbu         $t2, 0x5232($t2)
    ctx->r10 = MEM_BU(ctx->r10, 0X5232);
    // 0x80275840: addiu       $at, $zero, 0x5
    ctx->r1 = ADD32(0, 0X5);
    // 0x80275844: bne         $t2, $at, L_802758A8
    if (ctx->r10 != ctx->r1) {
        // 0x80275848: xori        $t4, $v1, 0xFFFF
        ctx->r12 = ctx->r3 ^ 0XFFFF;
            goto L_802758A8;
    }
    // 0x80275848: xori        $t4, $v1, 0xFFFF
    ctx->r12 = ctx->r3 ^ 0XFFFF;
    // 0x8027584C: lw          $t5, 0x40($a0)
    ctx->r13 = MEM_W(ctx->r4, 0X40);
    // 0x80275850: nop

    // 0x80275854: lw          $t4, 0xC8($t5)
    ctx->r12 = MEM_W(ctx->r13, 0XC8);
    // 0x80275858: nop

    // 0x8027585C: lbu         $t7, 0x86A($t4)
    ctx->r15 = MEM_BU(ctx->r12, 0X86A);
    // 0x80275860: nop

    // 0x80275864: bne         $t7, $zero, L_802758A8
    if (ctx->r15 != 0) {
        // 0x80275868: xori        $t4, $v1, 0xFFFF
        ctx->r12 = ctx->r3 ^ 0XFFFF;
            goto L_802758A8;
    }
    // 0x80275868: xori        $t4, $v1, 0xFFFF
    ctx->r12 = ctx->r3 ^ 0XFFFF;
    // 0x8027586C: lbu         $t6, 0x54($a0)
    ctx->r14 = MEM_BU(ctx->r4, 0X54);
    // 0x80275870: lui         $t9, 0x8012
    ctx->r25 = S32(0X8012 << 16);
    // 0x80275874: addu        $t9, $t9, $t6
    ctx->r25 = ADD32(ctx->r25, ctx->r14);
    // 0x80275878: lbu         $t9, -0x3268($t9)
    ctx->r25 = MEM_BU(ctx->r25, -0X3268);
    // 0x8027587C: lui         $a1, 0x8028
    ctx->r5 = S32(0X8028 << 16);
    // 0x80275880: sll         $t8, $t9, 1
    ctx->r24 = S32(ctx->r25 << 1);
    // 0x80275884: addu        $a1, $a1, $t8
    ctx->r5 = ADD32(ctx->r5, ctx->r24);
    // 0x80275888: lhu         $a1, -0x22F0($a1)
    ctx->r5 = MEM_HU(ctx->r5, -0X22F0);
    // 0x8027588C: lhu         $t3, 0x4($a0)
    ctx->r11 = MEM_HU(ctx->r4, 0X4);
    // 0x80275890: and         $t5, $v1, $a1
    ctx->r13 = ctx->r3 & ctx->r5;
    // 0x80275894: and         $t2, $t3, $a1
    ctx->r10 = ctx->r11 & ctx->r5;
    // 0x80275898: sh          $t2, 0x4($a0)
    MEM_H(0X4, ctx->r4) = ctx->r10;
    // 0x8027589C: sh          $t5, 0x6($a0)
    MEM_H(0X6, ctx->r4) = ctx->r13;
    // 0x802758A0: andi        $v1, $t5, 0xFFFF
    ctx->r3 = ctx->r13 & 0XFFFF;
    // 0x802758A4: xori        $t4, $v1, 0xFFFF
    ctx->r12 = ctx->r3 ^ 0XFFFF;
L_802758A8:
    // 0x802758A8: and         $t7, $v0, $t4
    ctx->r15 = ctx->r2 & ctx->r12;
    // 0x802758AC: jr          $ra
    // 0x802758B0: sh          $t7, 0x8($a0)
    MEM_H(0X8, ctx->r4) = ctx->r15;
    return;
    // 0x802758B0: sh          $t7, 0x8($a0)
    MEM_H(0X8, ctx->r4) = ctx->r15;
;}
RECOMP_FUNC void ovl_8024B800_func_802758B4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802758B4: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x802758B8: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x802758BC: swc1        $f23, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f_odd[(23 - 1) * 2];
    // 0x802758C0: swc1        $f22, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f22.u32l;
    // 0x802758C4: swc1        $f21, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x802758C8: swc1        $f20, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f20.u32l;
    // 0x802758CC: swc1        $f12, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->f12.u32l;
    // 0x802758D0: sw          $a3, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r7;
    // 0x802758D4: lw          $a0, 0x50($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X50);
    // 0x802758D8: lw          $a1, 0x54($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X54);
    // 0x802758DC: lwc1        $f6, 0x0($a0)
    ctx->f6.u32l = MEM_W(ctx->r4, 0X0);
    // 0x802758E0: lwc1        $f4, 0x0($a1)
    ctx->f4.u32l = MEM_W(ctx->r5, 0X0);
    // 0x802758E4: lwc1        $f10, 0x4($a0)
    ctx->f10.u32l = MEM_W(ctx->r4, 0X4);
    // 0x802758E8: lwc1        $f8, 0x4($a1)
    ctx->f8.u32l = MEM_W(ctx->r5, 0X4);
    // 0x802758EC: sub.s       $f12, $f4, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f12.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x802758F0: mtc1        $a2, $f20
    ctx->f20.u32l = ctx->r6;
    // 0x802758F4: sub.s       $f4, $f8, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = ctx->f8.fl - ctx->f10.fl;
    // 0x802758F8: swc1        $f4, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f4.u32l;
    // 0x802758FC: lwc1        $f8, 0x8($a0)
    ctx->f8.u32l = MEM_W(ctx->r4, 0X8);
    // 0x80275900: lwc1        $f6, 0x8($a1)
    ctx->f6.u32l = MEM_W(ctx->r5, 0X8);
    // 0x80275904: mov.s       $f22, $f14
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 14);
    ctx->f22.fl = ctx->f14.fl;
    // 0x80275908: sub.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl - ctx->f8.fl;
    // 0x8027590C: swc1        $f12, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f12.u32l;
    // 0x80275910: jal         0x80272AEC
    // 0x80275914: swc1        $f10, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f10.u32l;
    ovl_8024B800_func_80272AEC(rdram, ctx);
        goto after_0;
    // 0x80275914: swc1        $f10, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f10.u32l;
    after_0:
    // 0x80275918: lui         $at, 0x8028
    ctx->r1 = S32(0X8028 << 16);
    // 0x8027591C: lwc1        $f3, -0x1D20($at)
    ctx->f_odd[(3 - 1) * 2] = MEM_W(ctx->r1, -0X1D20);
    // 0x80275920: lwc1        $f2, -0x1D1C($at)
    ctx->f2.u32l = MEM_W(ctx->r1, -0X1D1C);
    // 0x80275924: cvt.d.s     $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f4.d = CVT_D_S(ctx->f0.fl);
    // 0x80275928: c.lt.d      $f2, $f4
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f2.d < ctx->f4.d;
    // 0x8027592C: lw          $a0, 0x50($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X50);
    // 0x80275930: bc1f        L_802759FC
    if (!c1cs) {
        // 0x80275934: lw          $v0, 0x58($sp)
        ctx->r2 = MEM_W(ctx->r29, 0X58);
            goto L_802759FC;
    }
    // 0x80275934: lw          $v0, 0x58($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X58);
    // 0x80275938: lwc1        $f6, 0x38($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X38);
    // 0x8027593C: lwc1        $f8, 0x3C($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x80275940: lwc1        $f10, 0x34($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X34);
    // 0x80275944: div.s       $f16, $f6, $f8
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f16.fl = DIV_S(ctx->f6.fl, ctx->f8.fl);
    // 0x80275948: nop

    // 0x8027594C: div.s       $f2, $f10, $f8
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f2.fl = DIV_S(ctx->f10.fl, ctx->f8.fl);
    // 0x80275950: mul.s       $f4, $f22, $f16
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f22.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f4.fl = MUL_S(ctx->f22.fl, ctx->f16.fl);
    // 0x80275954: lwc1        $f10, 0x40($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X40);
    // 0x80275958: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x8027595C: mul.s       $f6, $f20, $f2
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f6.fl = MUL_S(ctx->f20.fl, ctx->f2.fl);
    // 0x80275960: swc1        $f2, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f2.u32l;
    // 0x80275964: add.s       $f14, $f4, $f6
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f14.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x80275968: add.s       $f18, $f10, $f14
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f18.fl = ctx->f10.fl + ctx->f14.fl;
    // 0x8027596C: c.eq.s      $f8, $f18
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f8.fl == ctx->f18.fl;
    // 0x80275970: nop

    // 0x80275974: bc1f        L_80275984
    if (!c1cs) {
        // 0x80275978: nop
    
            goto L_80275984;
    }
    // 0x80275978: nop

    // 0x8027597C: b           L_80275B24
    // 0x80275980: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_80275B24;
    // 0x80275980: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_80275984:
    // 0x80275984: lwc1        $f4, 0x0($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X0);
    // 0x80275988: lwc1        $f10, 0x4($a0)
    ctx->f10.u32l = MEM_W(ctx->r4, 0X4);
    // 0x8027598C: mul.s       $f6, $f4, $f14
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f6.fl = MUL_S(ctx->f4.fl, ctx->f14.fl);
    // 0x80275990: lw          $v0, 0x58($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X58);
    // 0x80275994: mul.s       $f8, $f22, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f22.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f8.fl = MUL_S(ctx->f22.fl, ctx->f10.fl);
    // 0x80275998: lwc1        $f10, 0x8($a0)
    ctx->f10.u32l = MEM_W(ctx->r4, 0X8);
    // 0x8027599C: sub.s       $f4, $f6, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f4.fl = ctx->f6.fl - ctx->f8.fl;
    // 0x802759A0: mul.s       $f6, $f20, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f6.fl = MUL_S(ctx->f20.fl, ctx->f10.fl);
    // 0x802759A4: lwc1        $f10, 0x4C($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X4C);
    // 0x802759A8: sub.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x802759AC: sub.s       $f4, $f8, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = ctx->f8.fl - ctx->f10.fl;
    // 0x802759B0: nop

    // 0x802759B4: div.s       $f6, $f4, $f18
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f6.fl = DIV_S(ctx->f4.fl, ctx->f18.fl);
    // 0x802759B8: swc1        $f6, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->f6.u32l;
    // 0x802759BC: lwc1        $f8, 0x0($a0)
    ctx->f8.u32l = MEM_W(ctx->r4, 0X0);
    // 0x802759C0: lwc1        $f0, 0x0($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X0);
    // 0x802759C4: lwc1        $f6, 0x4($a0)
    ctx->f6.u32l = MEM_W(ctx->r4, 0X4);
    // 0x802759C8: sub.s       $f10, $f0, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f0.fl - ctx->f8.fl;
    // 0x802759CC: mul.s       $f4, $f10, $f16
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f4.fl = MUL_S(ctx->f10.fl, ctx->f16.fl);
    // 0x802759D0: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x802759D4: swc1        $f8, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->f8.u32l;
    // 0x802759D8: lwc1        $f10, 0x0($a0)
    ctx->f10.u32l = MEM_W(ctx->r4, 0X0);
    // 0x802759DC: lwc1        $f6, 0x2C($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x802759E0: sub.s       $f4, $f0, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = ctx->f0.fl - ctx->f10.fl;
    // 0x802759E4: lwc1        $f10, 0x8($a0)
    ctx->f10.u32l = MEM_W(ctx->r4, 0X8);
    // 0x802759E8: mul.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f4.fl, ctx->f6.fl);
    // 0x802759EC: add.s       $f4, $f8, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x802759F0: b           L_80275B20
    // 0x802759F4: swc1        $f4, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->f4.u32l;
        goto L_80275B20;
    // 0x802759F4: swc1        $f4, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->f4.u32l;
    // 0x802759F8: lw          $v0, 0x58($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X58);
L_802759FC:
    // 0x802759FC: lwc1        $f6, 0x0($a0)
    ctx->f6.u32l = MEM_W(ctx->r4, 0X0);
    // 0x80275A00: nop

    // 0x80275A04: swc1        $f6, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->f6.u32l;
    // 0x80275A08: lwc1        $f12, 0x38($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X38);
    // 0x80275A0C: jal         0x80272AEC
    // 0x80275A10: nop

    ovl_8024B800_func_80272AEC(rdram, ctx);
        goto after_1;
    // 0x80275A10: nop

    after_1:
    // 0x80275A14: lui         $at, 0x8028
    ctx->r1 = S32(0X8028 << 16);
    // 0x80275A18: lwc1        $f3, -0x1D18($at)
    ctx->f_odd[(3 - 1) * 2] = MEM_W(ctx->r1, -0X1D18);
    // 0x80275A1C: lwc1        $f2, -0x1D14($at)
    ctx->f2.u32l = MEM_W(ctx->r1, -0X1D14);
    // 0x80275A20: cvt.d.s     $f8, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f8.d = CVT_D_S(ctx->f0.fl);
    // 0x80275A24: c.lt.d      $f2, $f8
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f2.d < ctx->f8.d;
    // 0x80275A28: lw          $v0, 0x58($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X58);
    // 0x80275A2C: lw          $a0, 0x50($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X50);
    // 0x80275A30: bc1f        L_80275ACC
    if (!c1cs) {
        // 0x80275A34: nop
    
            goto L_80275ACC;
    }
    // 0x80275A34: nop

    // 0x80275A38: lwc1        $f10, 0x34($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X34);
    // 0x80275A3C: lwc1        $f4, 0x38($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X38);
    // 0x80275A40: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x80275A44: div.s       $f16, $f10, $f4
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f16.fl = DIV_S(ctx->f10.fl, ctx->f4.fl);
    // 0x80275A48: lwc1        $f10, 0x40($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X40);
    // 0x80275A4C: mul.s       $f14, $f16, $f20
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f14.fl = MUL_S(ctx->f16.fl, ctx->f20.fl);
    // 0x80275A50: add.s       $f8, $f22, $f14
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f22.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f8.fl = ctx->f22.fl + ctx->f14.fl;
    // 0x80275A54: c.eq.s      $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f6.fl == ctx->f8.fl;
    // 0x80275A58: nop

    // 0x80275A5C: bc1f        L_80275A6C
    if (!c1cs) {
        // 0x80275A60: nop
    
            goto L_80275A6C;
    }
    // 0x80275A60: nop

    // 0x80275A64: b           L_80275B24
    // 0x80275A68: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_80275B24;
    // 0x80275A68: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_80275A6C:
    // 0x80275A6C: lwc1        $f4, 0x0($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X0);
    // 0x80275A70: lwc1        $f8, 0x4($a0)
    ctx->f8.u32l = MEM_W(ctx->r4, 0X4);
    // 0x80275A74: mul.s       $f6, $f10, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f10.fl, ctx->f4.fl);
    // 0x80275A78: nop

    // 0x80275A7C: mul.s       $f10, $f8, $f14
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f10.fl = MUL_S(ctx->f8.fl, ctx->f14.fl);
    // 0x80275A80: lwc1        $f8, 0x8($a0)
    ctx->f8.u32l = MEM_W(ctx->r4, 0X8);
    // 0x80275A84: sub.s       $f4, $f10, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f4.fl = ctx->f10.fl - ctx->f6.fl;
    // 0x80275A88: mul.s       $f10, $f20, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = MUL_S(ctx->f20.fl, ctx->f8.fl);
    // 0x80275A8C: lwc1        $f8, 0x4C($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X4C);
    // 0x80275A90: sub.s       $f6, $f4, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f6.fl = ctx->f4.fl - ctx->f10.fl;
    // 0x80275A94: add.s       $f10, $f22, $f14
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f22.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f10.fl = ctx->f22.fl + ctx->f14.fl;
    // 0x80275A98: sub.s       $f4, $f6, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f4.fl = ctx->f6.fl - ctx->f8.fl;
    // 0x80275A9C: nop

    // 0x80275AA0: div.s       $f6, $f4, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f6.fl = DIV_S(ctx->f4.fl, ctx->f10.fl);
    // 0x80275AA4: swc1        $f6, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->f6.u32l;
    // 0x80275AA8: lwc1        $f4, 0x4($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X4);
    // 0x80275AAC: lwc1        $f8, 0x4($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X4);
    // 0x80275AB0: nop

    // 0x80275AB4: sub.s       $f10, $f8, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f10.fl = ctx->f8.fl - ctx->f4.fl;
    // 0x80275AB8: lwc1        $f8, 0x8($a0)
    ctx->f8.u32l = MEM_W(ctx->r4, 0X8);
    // 0x80275ABC: mul.s       $f6, $f10, $f16
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f6.fl = MUL_S(ctx->f10.fl, ctx->f16.fl);
    // 0x80275AC0: add.s       $f4, $f6, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f4.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x80275AC4: b           L_80275B20
    // 0x80275AC8: swc1        $f4, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->f4.u32l;
        goto L_80275B20;
    // 0x80275AC8: swc1        $f4, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->f4.u32l;
L_80275ACC:
    // 0x80275ACC: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x80275AD0: lwc1        $f10, 0x4($a0)
    ctx->f10.u32l = MEM_W(ctx->r4, 0X4);
    // 0x80275AD4: c.eq.s      $f20, $f6
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f20.fl == ctx->f6.fl;
    // 0x80275AD8: swc1        $f10, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->f10.u32l;
    // 0x80275ADC: bc1f        L_80275AEC
    if (!c1cs) {
        // 0x80275AE0: nop
    
            goto L_80275AEC;
    }
    // 0x80275AE0: nop

    // 0x80275AE4: b           L_80275B24
    // 0x80275AE8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_80275B24;
    // 0x80275AE8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_80275AEC:
    // 0x80275AEC: lwc1        $f8, 0x0($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X0);
    // 0x80275AF0: lwc1        $f4, 0x40($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X40);
    // 0x80275AF4: lwc1        $f6, 0x4($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0X4);
    // 0x80275AF8: mul.s       $f10, $f8, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f10.fl = MUL_S(ctx->f8.fl, ctx->f4.fl);
    // 0x80275AFC: nop

    // 0x80275B00: mul.s       $f8, $f22, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f22.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f22.fl, ctx->f6.fl);
    // 0x80275B04: lwc1        $f6, 0x4C($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X4C);
    // 0x80275B08: add.s       $f4, $f10, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f4.fl = ctx->f10.fl + ctx->f8.fl;
    // 0x80275B0C: add.s       $f10, $f4, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f10.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x80275B10: neg.s       $f8, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.fl); 
    ctx->f8.fl = -ctx->f10.fl;
    // 0x80275B14: nop

    // 0x80275B18: div.s       $f4, $f8, $f20
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f4.fl = DIV_S(ctx->f8.fl, ctx->f20.fl);
    // 0x80275B1C: swc1        $f4, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->f4.u32l;
L_80275B20:
    // 0x80275B20: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_80275B24:
    // 0x80275B24: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x80275B28: lwc1        $f21, 0x10($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X10);
    // 0x80275B2C: lwc1        $f20, 0x14($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X14);
    // 0x80275B30: lwc1        $f23, 0x18($sp)
    ctx->f_odd[(23 - 1) * 2] = MEM_W(ctx->r29, 0X18);
    // 0x80275B34: lwc1        $f22, 0x1C($sp)
    ctx->f22.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x80275B38: jr          $ra
    // 0x80275B3C: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    return;
    // 0x80275B3C: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
RECOMP_FUNC void ovl_8024B800_func_80275B40(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80275B40: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80275B44: lui         $t6, 0x8009
    ctx->r14 = S32(0X8009 << 16);
    // 0x80275B48: lw          $t6, 0x3B20($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X3B20);
    // 0x80275B4C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80275B50: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x80275B54: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x80275B58: lw          $v0, 0x98($t6)
    ctx->r2 = MEM_W(ctx->r14, 0X98);
    // 0x80275B5C: nop

    // 0x80275B60: lwc1        $f12, 0x98($v0)
    ctx->f12.u32l = MEM_W(ctx->r2, 0X98);
    // 0x80275B64: lwc1        $f14, 0x94($v0)
    ctx->f14.u32l = MEM_W(ctx->r2, 0X94);
    // 0x80275B68: jal         0x8001C5D0
    // 0x80275B6C: nop

    func_8001C5D0(rdram, ctx);
        goto after_0;
    // 0x80275B6C: nop

    after_0:
    // 0x80275B70: swc1        $f0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f0.u32l;
    // 0x80275B74: jal         0x80080E80
    // 0x80275B78: mov.s       $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    ctx->f12.fl = ctx->f0.fl;
    func_80080E80(rdram, ctx);
        goto after_1;
    // 0x80275B78: mov.s       $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    ctx->f12.fl = ctx->f0.fl;
    after_1:
    // 0x80275B7C: lwc1        $f12, 0x1C($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x80275B80: jal         0x80081040
    // 0x80275B84: swc1        $f0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f0.u32l;
    func_80081040(rdram, ctx);
        goto after_2;
    // 0x80275B84: swc1        $f0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f0.u32l;
    after_2:
    // 0x80275B88: lui         $at, 0x8028
    ctx->r1 = S32(0X8028 << 16);
    // 0x80275B8C: lwc1        $f4, 0x1C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x80275B90: lwc1        $f7, -0x1D10($at)
    ctx->f_odd[(7 - 1) * 2] = MEM_W(ctx->r1, -0X1D10);
    // 0x80275B94: lwc1        $f6, -0x1D0C($at)
    ctx->f6.u32l = MEM_W(ctx->r1, -0X1D0C);
    // 0x80275B98: cvt.d.s     $f2, $f4
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f2.d = CVT_D_S(ctx->f4.fl);
    // 0x80275B9C: c.lt.d      $f2, $f6
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f2.d < ctx->f6.d;
    // 0x80275BA0: lwc1        $f14, 0x18($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X18);
    // 0x80275BA4: bc1t        L_80275BC8
    if (c1cs) {
        // 0x80275BA8: lui         $at, 0x8028
        ctx->r1 = S32(0X8028 << 16);
            goto L_80275BC8;
    }
    // 0x80275BA8: lui         $at, 0x8028
    ctx->r1 = S32(0X8028 << 16);
    // 0x80275BAC: lwc1        $f9, -0x1D08($at)
    ctx->f_odd[(9 - 1) * 2] = MEM_W(ctx->r1, -0X1D08);
    // 0x80275BB0: lwc1        $f8, -0x1D04($at)
    ctx->f8.u32l = MEM_W(ctx->r1, -0X1D04);
    // 0x80275BB4: lui         $at, 0x8028
    ctx->r1 = S32(0X8028 << 16);
    // 0x80275BB8: c.le.d      $f8, $f2
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f8.d <= ctx->f2.d;
    // 0x80275BBC: nop

    // 0x80275BC0: bc1f        L_80275C04
    if (!c1cs) {
        // 0x80275BC4: nop
    
            goto L_80275C04;
    }
    // 0x80275BC4: nop

L_80275BC8:
    // 0x80275BC8: lui         $at, 0x8028
    ctx->r1 = S32(0X8028 << 16);
    // 0x80275BCC: lwc1        $f10, -0x1D00($at)
    ctx->f10.u32l = MEM_W(ctx->r1, -0X1D00);
    // 0x80275BD0: lw          $t7, 0x20($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X20);
    // 0x80275BD4: lui         $at, 0x8028
    ctx->r1 = S32(0X8028 << 16);
    // 0x80275BD8: swc1        $f10, 0x0($t7)
    MEM_W(0X0, ctx->r15) = ctx->f10.u32l;
    // 0x80275BDC: lwc1        $f18, -0x1CF4($at)
    ctx->f18.u32l = MEM_W(ctx->r1, -0X1CF4);
    // 0x80275BE0: lwc1        $f19, -0x1CF8($at)
    ctx->f_odd[(19 - 1) * 2] = MEM_W(ctx->r1, -0X1CF8);
    // 0x80275BE4: cvt.d.s     $f16, $f14
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); 
    ctx->f16.d = CVT_D_S(ctx->f14.fl);
    // 0x80275BE8: mul.d       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.d); NAN_CHECK(ctx->f18.d); 
    ctx->f4.d = MUL_D(ctx->f16.d, ctx->f18.d);
    // 0x80275BEC: cvt.d.s     $f6, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f6.d = CVT_D_S(ctx->f0.fl);
    // 0x80275BF0: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x80275BF4: div.d       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f6.d); 
    ctx->f8.d = DIV_D(ctx->f4.d, ctx->f6.d);
    // 0x80275BF8: cvt.s.d     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.d); 
    ctx->f10.fl = CVT_S_D(ctx->f8.d);
    // 0x80275BFC: b           L_80275CE8
    // 0x80275C00: swc1        $f10, 0x0($t8)
    MEM_W(0X0, ctx->r24) = ctx->f10.u32l;
        goto L_80275CE8;
    // 0x80275C00: swc1        $f10, 0x0($t8)
    MEM_W(0X0, ctx->r24) = ctx->f10.u32l;
L_80275C04:
    // 0x80275C04: lwc1        $f17, -0x1CF0($at)
    ctx->f_odd[(17 - 1) * 2] = MEM_W(ctx->r1, -0X1CF0);
    // 0x80275C08: lwc1        $f16, -0x1CEC($at)
    ctx->f16.u32l = MEM_W(ctx->r1, -0X1CEC);
    // 0x80275C0C: lui         $at, 0x8028
    ctx->r1 = S32(0X8028 << 16);
    // 0x80275C10: c.lt.d      $f2, $f16
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f2.d < ctx->f16.d;
    // 0x80275C14: nop

    // 0x80275C18: bc1f        L_80275C5C
    if (!c1cs) {
        // 0x80275C1C: nop
    
            goto L_80275C5C;
    }
    // 0x80275C1C: nop

    // 0x80275C20: lui         $at, 0x8028
    ctx->r1 = S32(0X8028 << 16);
    // 0x80275C24: lwc1        $f5, -0x1CE8($at)
    ctx->f_odd[(5 - 1) * 2] = MEM_W(ctx->r1, -0X1CE8);
    // 0x80275C28: lwc1        $f4, -0x1CE4($at)
    ctx->f4.u32l = MEM_W(ctx->r1, -0X1CE4);
    // 0x80275C2C: cvt.d.s     $f18, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f18.d = CVT_D_S(ctx->f0.fl);
    // 0x80275C30: mul.d       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.d); NAN_CHECK(ctx->f4.d); 
    ctx->f6.d = MUL_D(ctx->f18.d, ctx->f4.d);
    // 0x80275C34: cvt.d.s     $f8, $f14
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); 
    ctx->f8.d = CVT_D_S(ctx->f14.fl);
    // 0x80275C38: lw          $t9, 0x20($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X20);
    // 0x80275C3C: lui         $at, 0x8028
    ctx->r1 = S32(0X8028 << 16);
    // 0x80275C40: div.d       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f8.d); 
    ctx->f10.d = DIV_D(ctx->f6.d, ctx->f8.d);
    // 0x80275C44: cvt.s.d     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f16.fl = CVT_S_D(ctx->f10.d);
    // 0x80275C48: swc1        $f16, 0x0($t9)
    MEM_W(0X0, ctx->r25) = ctx->f16.u32l;
    // 0x80275C4C: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x80275C50: lwc1        $f18, -0x1CE0($at)
    ctx->f18.u32l = MEM_W(ctx->r1, -0X1CE0);
    // 0x80275C54: b           L_80275CE8
    // 0x80275C58: swc1        $f18, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->f18.u32l;
        goto L_80275CE8;
    // 0x80275C58: swc1        $f18, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->f18.u32l;
L_80275C5C:
    // 0x80275C5C: lwc1        $f5, -0x1CD8($at)
    ctx->f_odd[(5 - 1) * 2] = MEM_W(ctx->r1, -0X1CD8);
    // 0x80275C60: lwc1        $f4, -0x1CD4($at)
    ctx->f4.u32l = MEM_W(ctx->r1, -0X1CD4);
    // 0x80275C64: lw          $t1, 0x20($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X20);
    // 0x80275C68: c.lt.d      $f2, $f4
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f2.d < ctx->f4.d;
    // 0x80275C6C: lui         $at, 0x8028
    ctx->r1 = S32(0X8028 << 16);
    // 0x80275C70: bc1f        L_80275CB0
    if (!c1cs) {
        // 0x80275C74: nop
    
            goto L_80275CB0;
    }
    // 0x80275C74: nop

    // 0x80275C78: lui         $at, 0x8028
    ctx->r1 = S32(0X8028 << 16);
    // 0x80275C7C: lwc1        $f6, -0x1CD0($at)
    ctx->f6.u32l = MEM_W(ctx->r1, -0X1CD0);
    // 0x80275C80: lui         $at, 0x8028
    ctx->r1 = S32(0X8028 << 16);
    // 0x80275C84: swc1        $f6, 0x0($t1)
    MEM_W(0X0, ctx->r9) = ctx->f6.u32l;
    // 0x80275C88: lwc1        $f10, -0x1CC4($at)
    ctx->f10.u32l = MEM_W(ctx->r1, -0X1CC4);
    // 0x80275C8C: lwc1        $f11, -0x1CC8($at)
    ctx->f_odd[(11 - 1) * 2] = MEM_W(ctx->r1, -0X1CC8);
    // 0x80275C90: cvt.d.s     $f8, $f14
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); 
    ctx->f8.d = CVT_D_S(ctx->f14.fl);
    // 0x80275C94: mul.d       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f10.d); 
    ctx->f16.d = MUL_D(ctx->f8.d, ctx->f10.d);
    // 0x80275C98: cvt.d.s     $f18, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f18.d = CVT_D_S(ctx->f0.fl);
    // 0x80275C9C: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x80275CA0: div.d       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.d); NAN_CHECK(ctx->f18.d); 
    ctx->f4.d = DIV_D(ctx->f16.d, ctx->f18.d);
    // 0x80275CA4: cvt.s.d     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.d); 
    ctx->f6.fl = CVT_S_D(ctx->f4.d);
    // 0x80275CA8: b           L_80275CE8
    // 0x80275CAC: swc1        $f6, 0x0($t2)
    MEM_W(0X0, ctx->r10) = ctx->f6.u32l;
        goto L_80275CE8;
    // 0x80275CAC: swc1        $f6, 0x0($t2)
    MEM_W(0X0, ctx->r10) = ctx->f6.u32l;
L_80275CB0:
    // 0x80275CB0: lwc1        $f11, -0x1CC0($at)
    ctx->f_odd[(11 - 1) * 2] = MEM_W(ctx->r1, -0X1CC0);
    // 0x80275CB4: lwc1        $f10, -0x1CBC($at)
    ctx->f10.u32l = MEM_W(ctx->r1, -0X1CBC);
    // 0x80275CB8: cvt.d.s     $f8, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f8.d = CVT_D_S(ctx->f0.fl);
    // 0x80275CBC: mul.d       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f10.d); 
    ctx->f16.d = MUL_D(ctx->f8.d, ctx->f10.d);
    // 0x80275CC0: cvt.d.s     $f18, $f14
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); 
    ctx->f18.d = CVT_D_S(ctx->f14.fl);
    // 0x80275CC4: lw          $t3, 0x20($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X20);
    // 0x80275CC8: lui         $at, 0x8028
    ctx->r1 = S32(0X8028 << 16);
    // 0x80275CCC: div.d       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.d); NAN_CHECK(ctx->f18.d); 
    ctx->f4.d = DIV_D(ctx->f16.d, ctx->f18.d);
    // 0x80275CD0: cvt.s.d     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.d); 
    ctx->f6.fl = CVT_S_D(ctx->f4.d);
    // 0x80275CD4: swc1        $f6, 0x0($t3)
    MEM_W(0X0, ctx->r11) = ctx->f6.u32l;
    // 0x80275CD8: lw          $t4, 0x24($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X24);
    // 0x80275CDC: lwc1        $f8, -0x1CB8($at)
    ctx->f8.u32l = MEM_W(ctx->r1, -0X1CB8);
    // 0x80275CE0: nop

    // 0x80275CE4: swc1        $f8, 0x0($t4)
    MEM_W(0X0, ctx->r12) = ctx->f8.u32l;
L_80275CE8:
    // 0x80275CE8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80275CEC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80275CF0: jr          $ra
    // 0x80275CF4: nop

    return;
    // 0x80275CF4: nop

;}
RECOMP_FUNC void ovl_8024B800_func_80275CF8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80275CF8: lui         $v0, 0x8010
    ctx->r2 = S32(0X8010 << 16);
    // 0x80275CFC: addiu       $v0, $v0, 0x4890
    ctx->r2 = ADD32(ctx->r2, 0X4890);
    // 0x80275D00: addiu       $sp, $sp, -0x148
    ctx->r29 = ADD32(ctx->r29, -0X148);
    // 0x80275D04: lwc1        $f0, 0x20DC($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X20DC);
    // 0x80275D08: lwc1        $f4, 0x20E8($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X20E8);
    // 0x80275D0C: swc1        $f21, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x80275D10: swc1        $f20, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f20.u32l;
    // 0x80275D14: sub.s       $f20, $f0, $f4
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f20.fl = ctx->f0.fl - ctx->f4.fl;
    // 0x80275D18: lwc1        $f2, 0x20E0($v0)
    ctx->f2.u32l = MEM_W(ctx->r2, 0X20E0);
    // 0x80275D1C: lwc1        $f6, 0x20EC($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0X20EC);
    // 0x80275D20: mul.s       $f10, $f20, $f20
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f10.fl = MUL_S(ctx->f20.fl, ctx->f20.fl);
    // 0x80275D24: sub.s       $f16, $f2, $f6
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f16.fl = ctx->f2.fl - ctx->f6.fl;
    // 0x80275D28: lwc1        $f14, 0x20E4($v0)
    ctx->f14.u32l = MEM_W(ctx->r2, 0X20E4);
    // 0x80275D2C: lwc1        $f8, 0x20F0($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X20F0);
    // 0x80275D30: mul.s       $f4, $f16, $f16
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f4.fl = MUL_S(ctx->f16.fl, ctx->f16.fl);
    // 0x80275D34: sub.s       $f18, $f14, $f8
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f18.fl = ctx->f14.fl - ctx->f8.fl;
    // 0x80275D38: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x80275D3C: sw          $a0, 0x148($sp)
    MEM_W(0X148, ctx->r29) = ctx->r4;
    // 0x80275D40: mul.s       $f8, $f18, $f18
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f8.fl = MUL_S(ctx->f18.fl, ctx->f18.fl);
    // 0x80275D44: add.s       $f6, $f10, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f10.fl + ctx->f4.fl;
    // 0x80275D48: sw          $a1, 0x14C($sp)
    MEM_W(0X14C, ctx->r29) = ctx->r5;
    // 0x80275D4C: swc1        $f18, 0x13C($sp)
    MEM_W(0X13C, ctx->r29) = ctx->f18.u32l;
    // 0x80275D50: add.s       $f12, $f6, $f8
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f12.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x80275D54: swc1        $f16, 0x140($sp)
    MEM_W(0X140, ctx->r29) = ctx->f16.u32l;
    // 0x80275D58: swc1        $f0, 0x114($sp)
    MEM_W(0X114, ctx->r29) = ctx->f0.u32l;
    // 0x80275D5C: swc1        $f2, 0x118($sp)
    MEM_W(0X118, ctx->r29) = ctx->f2.u32l;
    // 0x80275D60: jal         0x8007FA40
    // 0x80275D64: swc1        $f14, 0x11C($sp)
    MEM_W(0X11C, ctx->r29) = ctx->f14.u32l;
    func_8007FA40(rdram, ctx);
        goto after_0;
    // 0x80275D64: swc1        $f14, 0x11C($sp)
    MEM_W(0X11C, ctx->r29) = ctx->f14.u32l;
    after_0:
    // 0x80275D68: lw          $t6, 0x14C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X14C);
    // 0x80275D6C: lui         $at, 0x8010
    ctx->r1 = S32(0X8010 << 16);
    // 0x80275D70: swc1        $f0, 0x0($t6)
    MEM_W(0X0, ctx->r14) = ctx->f0.u32l;
    // 0x80275D74: lwc1        $f10, 0x699C($at)
    ctx->f10.u32l = MEM_W(ctx->r1, 0X699C);
    // 0x80275D78: lui         $at, 0x8028
    ctx->r1 = S32(0X8028 << 16);
    // 0x80275D7C: lwc1        $f7, -0x1CB0($at)
    ctx->f_odd[(7 - 1) * 2] = MEM_W(ctx->r1, -0X1CB0);
    // 0x80275D80: lwc1        $f6, -0x1CAC($at)
    ctx->f6.u32l = MEM_W(ctx->r1, -0X1CAC);
    // 0x80275D84: cvt.d.s     $f4, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.fl); 
    ctx->f4.d = CVT_D_S(ctx->f10.fl);
    // 0x80275D88: mul.d       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f6.d); 
    ctx->f8.d = MUL_D(ctx->f4.d, ctx->f6.d);
    // 0x80275D8C: cvt.s.d     $f12, $f8
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.d); 
    ctx->f12.fl = CVT_S_D(ctx->f8.d);
    // 0x80275D90: jal         0x80080E80
    // 0x80275D94: swc1        $f12, 0x130($sp)
    MEM_W(0X130, ctx->r29) = ctx->f12.u32l;
    func_80080E80(rdram, ctx);
        goto after_1;
    // 0x80275D94: swc1        $f12, 0x130($sp)
    MEM_W(0X130, ctx->r29) = ctx->f12.u32l;
    after_1:
    // 0x80275D98: lwc1        $f12, 0x130($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X130);
    // 0x80275D9C: jal         0x80081040
    // 0x80275DA0: swc1        $f0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->f0.u32l;
    func_80081040(rdram, ctx);
        goto after_2;
    // 0x80275DA0: swc1        $f0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->f0.u32l;
    after_2:
    // 0x80275DA4: lw          $t7, 0x14C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X14C);
    // 0x80275DA8: lwc1        $f4, 0x40($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X40);
    // 0x80275DAC: lwc1        $f10, 0x0($t7)
    ctx->f10.u32l = MEM_W(ctx->r15, 0X0);
    // 0x80275DB0: lui         $at, 0x8010
    ctx->r1 = S32(0X8010 << 16);
    // 0x80275DB4: mul.s       $f6, $f10, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f10.fl, ctx->f4.fl);
    // 0x80275DB8: lwc1        $f8, 0x69A0($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X69A0);
    // 0x80275DBC: addiu       $a0, $sp, 0x12C
    ctx->r4 = ADD32(ctx->r29, 0X12C);
    // 0x80275DC0: addiu       $a1, $sp, 0x128
    ctx->r5 = ADD32(ctx->r29, 0X128);
    // 0x80275DC4: div.s       $f2, $f6, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = DIV_S(ctx->f6.fl, ctx->f0.fl);
    // 0x80275DC8: mul.s       $f10, $f8, $f2
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f10.fl = MUL_S(ctx->f8.fl, ctx->f2.fl);
    // 0x80275DCC: swc1        $f2, 0x138($sp)
    MEM_W(0X138, ctx->r29) = ctx->f2.u32l;
    // 0x80275DD0: jal         0x80275B40
    // 0x80275DD4: swc1        $f10, 0x134($sp)
    MEM_W(0X134, ctx->r29) = ctx->f10.u32l;
    ovl_8024B800_func_80275B40(rdram, ctx);
        goto after_3;
    // 0x80275DD4: swc1        $f10, 0x134($sp)
    MEM_W(0X134, ctx->r29) = ctx->f10.u32l;
    after_3:
    // 0x80275DD8: lwc1        $f6, 0x134($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X134);
    // 0x80275DDC: lwc1        $f4, 0x12C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X12C);
    // 0x80275DE0: neg.s       $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = -ctx->f6.fl;
    // 0x80275DE4: mul.s       $f10, $f4, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = MUL_S(ctx->f4.fl, ctx->f8.fl);
    // 0x80275DE8: lwc1        $f2, 0x138($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X138);
    // 0x80275DEC: lwc1        $f6, 0x128($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X128);
    // 0x80275DF0: lwc1        $f14, 0x140($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X140);
    // 0x80275DF4: mul.s       $f4, $f6, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f4.fl = MUL_S(ctx->f6.fl, ctx->f2.fl);
    // 0x80275DF8: lw          $a2, 0x13C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X13C);
    // 0x80275DFC: addiu       $t8, $sp, 0x120
    ctx->r24 = ADD32(ctx->r29, 0X120);
    // 0x80275E00: swc1        $f10, 0x12C($sp)
    MEM_W(0X12C, ctx->r29) = ctx->f10.u32l;
    // 0x80275E04: swc1        $f4, 0x128($sp)
    MEM_W(0X128, ctx->r29) = ctx->f4.u32l;
    // 0x80275E08: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    // 0x80275E0C: mov.s       $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    ctx->f12.fl = ctx->f20.fl;
    // 0x80275E10: jal         0x80275F24
    // 0x80275E14: addiu       $a3, $sp, 0x124
    ctx->r7 = ADD32(ctx->r29, 0X124);
    ovl_8024B800_func_80275F24(rdram, ctx);
        goto after_4;
    // 0x80275E14: addiu       $a3, $sp, 0x124
    ctx->r7 = ADD32(ctx->r29, 0X124);
    after_4:
    // 0x80275E18: mtc1        $zero, $f20
    ctx->f20.u32l = 0;
    // 0x80275E1C: lw          $a1, 0x124($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X124);
    // 0x80275E20: mfc1        $a2, $f20
    ctx->r6 = (int32_t)ctx->f20.u32l;
    // 0x80275E24: addiu       $a0, $sp, 0xC8
    ctx->r4 = ADD32(ctx->r29, 0XC8);
    // 0x80275E28: lui         $a3, 0x3F80
    ctx->r7 = S32(0X3F80 << 16);
    // 0x80275E2C: jal         0x80080714
    // 0x80275E30: swc1        $f20, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f20.u32l;
    func_80080714(rdram, ctx);
        goto after_5;
    // 0x80275E30: swc1        $f20, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f20.u32l;
    after_5:
    // 0x80275E34: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x80275E38: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x80275E3C: lw          $a1, 0x120($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X120);
    // 0x80275E40: mfc1        $a2, $f20
    ctx->r6 = (int32_t)ctx->f20.u32l;
    // 0x80275E44: mfc1        $a3, $f20
    ctx->r7 = (int32_t)ctx->f20.u32l;
    // 0x80275E48: addiu       $a0, $sp, 0x88
    ctx->r4 = ADD32(ctx->r29, 0X88);
    // 0x80275E4C: jal         0x80080714
    // 0x80275E50: swc1        $f8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f8.u32l;
    func_80080714(rdram, ctx);
        goto after_6;
    // 0x80275E50: swc1        $f8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f8.u32l;
    after_6:
    // 0x80275E54: addiu       $a0, $sp, 0xC8
    ctx->r4 = ADD32(ctx->r29, 0XC8);
    // 0x80275E58: addiu       $a1, $sp, 0x88
    ctx->r5 = ADD32(ctx->r29, 0X88);
    // 0x80275E5C: jal         0x8007F940
    // 0x80275E60: addiu       $a2, $sp, 0x48
    ctx->r6 = ADD32(ctx->r29, 0X48);
    func_8007F940(rdram, ctx);
        goto after_7;
    // 0x80275E60: addiu       $a2, $sp, 0x48
    ctx->r6 = ADD32(ctx->r29, 0X48);
    after_7:
    // 0x80275E64: mfc1        $a1, $f20
    ctx->r5 = (int32_t)ctx->f20.u32l;
    // 0x80275E68: lw          $a2, 0x128($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X128);
    // 0x80275E6C: lw          $a3, 0x12C($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X12C);
    // 0x80275E70: addiu       $t9, $sp, 0x108
    ctx->r25 = ADD32(ctx->r29, 0X108);
    // 0x80275E74: addiu       $t0, $sp, 0x10C
    ctx->r8 = ADD32(ctx->r29, 0X10C);
    // 0x80275E78: addiu       $t1, $sp, 0x110
    ctx->r9 = ADD32(ctx->r29, 0X110);
    // 0x80275E7C: sw          $t1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r9;
    // 0x80275E80: sw          $t0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r8;
    // 0x80275E84: sw          $t9, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r25;
    // 0x80275E88: jal         0x8007F8E0
    // 0x80275E8C: addiu       $a0, $sp, 0x48
    ctx->r4 = ADD32(ctx->r29, 0X48);
    func_8007F8E0(rdram, ctx);
        goto after_8;
    // 0x80275E8C: addiu       $a0, $sp, 0x48
    ctx->r4 = ADD32(ctx->r29, 0X48);
    after_8:
    // 0x80275E90: lui         $at, 0x8010
    ctx->r1 = S32(0X8010 << 16);
    // 0x80275E94: lwc1        $f6, 0x6978($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X6978);
    // 0x80275E98: lwc1        $f10, 0x108($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X108);
    // 0x80275E9C: lui         $at, 0x8010
    ctx->r1 = S32(0X8010 << 16);
    // 0x80275EA0: add.s       $f4, $f10, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f4.fl = ctx->f10.fl + ctx->f6.fl;
    // 0x80275EA4: lwc1        $f10, 0x697C($at)
    ctx->f10.u32l = MEM_W(ctx->r1, 0X697C);
    // 0x80275EA8: lwc1        $f8, 0x10C($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X10C);
    // 0x80275EAC: lui         $at, 0x8010
    ctx->r1 = S32(0X8010 << 16);
    // 0x80275EB0: add.s       $f6, $f8, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f6.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x80275EB4: lwc1        $f8, 0x6980($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X6980);
    // 0x80275EB8: swc1        $f4, 0x108($sp)
    MEM_W(0X108, ctx->r29) = ctx->f4.u32l;
    // 0x80275EBC: lwc1        $f4, 0x110($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X110);
    // 0x80275EC0: lw          $t4, 0x148($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X148);
    // 0x80275EC4: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x80275EC8: add.s       $f10, $f4, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f4.fl + ctx->f8.fl;
    // 0x80275ECC: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x80275ED0: mfc1        $a2, $f20
    ctx->r6 = (int32_t)ctx->f20.u32l;
    // 0x80275ED4: mfc1        $a3, $f20
    ctx->r7 = (int32_t)ctx->f20.u32l;
    // 0x80275ED8: addiu       $t2, $sp, 0x114
    ctx->r10 = ADD32(ctx->r29, 0X114);
    // 0x80275EDC: addiu       $t3, $sp, 0x108
    ctx->r11 = ADD32(ctx->r29, 0X108);
    // 0x80275EE0: swc1        $f6, 0x10C($sp)
    MEM_W(0X10C, ctx->r29) = ctx->f6.u32l;
    // 0x80275EE4: swc1        $f10, 0x110($sp)
    MEM_W(0X110, ctx->r29) = ctx->f10.u32l;
    // 0x80275EE8: sw          $t3, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r11;
    // 0x80275EEC: sw          $t2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r10;
    // 0x80275EF0: mov.s       $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    ctx->f12.fl = ctx->f20.fl;
    // 0x80275EF4: jal         0x802758B4
    // 0x80275EF8: sw          $t4, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r12;
    ovl_8024B800_func_802758B4(rdram, ctx);
        goto after_9;
    // 0x80275EF8: sw          $t4, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r12;
    after_9:
    // 0x80275EFC: beq         $v0, $zero, L_80275F10
    if (ctx->r2 == 0) {
        // 0x80275F00: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_80275F10;
    }
    // 0x80275F00: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x80275F04: b           L_80275F10
    // 0x80275F08: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_80275F10;
    // 0x80275F08: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80275F0C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_80275F10:
    // 0x80275F10: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x80275F14: lwc1        $f21, 0x20($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X20);
    // 0x80275F18: lwc1        $f20, 0x24($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X24);
    // 0x80275F1C: jr          $ra
    // 0x80275F20: addiu       $sp, $sp, 0x148
    ctx->r29 = ADD32(ctx->r29, 0X148);
    return;
    // 0x80275F20: addiu       $sp, $sp, 0x148
    ctx->r29 = ADD32(ctx->r29, 0X148);
;}
RECOMP_FUNC void ovl_8024B800_func_80275F24(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80275F24: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80275F28: swc1        $f12, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f12.u32l;
    // 0x80275F2C: swc1        $f14, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f14.u32l;
    // 0x80275F30: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    // 0x80275F34: lwc1        $f14, 0x18($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X18);
    // 0x80275F38: lwc1        $f12, 0x20($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X20);
    // 0x80275F3C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80275F40: sw          $a3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r7;
    // 0x80275F44: swc1        $f14, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f14.u32l;
    // 0x80275F48: jal         0x8001C5D0
    // 0x80275F4C: neg.s       $f12, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); 
    ctx->f12.fl = -ctx->f12.fl;
    func_8001C5D0(rdram, ctx);
        goto after_0;
    // 0x80275F4C: neg.s       $f12, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); 
    ctx->f12.fl = -ctx->f12.fl;
    after_0:
    // 0x80275F50: lui         $at, 0x8028
    ctx->r1 = S32(0X8028 << 16);
    // 0x80275F54: lwc1        $f7, -0x1CA8($at)
    ctx->f_odd[(7 - 1) * 2] = MEM_W(ctx->r1, -0X1CA8);
    // 0x80275F58: lwc1        $f6, -0x1CA4($at)
    ctx->f6.u32l = MEM_W(ctx->r1, -0X1CA4);
    // 0x80275F5C: cvt.d.s     $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f4.d = CVT_D_S(ctx->f0.fl);
    // 0x80275F60: mul.d       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f6.d); 
    ctx->f8.d = MUL_D(ctx->f4.d, ctx->f6.d);
    // 0x80275F64: lwc1        $f2, 0x20($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X20);
    // 0x80275F68: lwc1        $f14, 0x18($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X18);
    // 0x80275F6C: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x80275F70: mul.s       $f16, $f2, $f2
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f16.fl = MUL_S(ctx->f2.fl, ctx->f2.fl);
    // 0x80275F74: cvt.s.d     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.d); 
    ctx->f10.fl = CVT_S_D(ctx->f8.d);
    // 0x80275F78: swc1        $f10, 0x0($t6)
    MEM_W(0X0, ctx->r14) = ctx->f10.u32l;
    // 0x80275F7C: mul.s       $f18, $f14, $f14
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f18.fl = MUL_S(ctx->f14.fl, ctx->f14.fl);
    // 0x80275F80: jal         0x8007FA40
    // 0x80275F84: add.s       $f12, $f16, $f18
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f12.fl = ctx->f16.fl + ctx->f18.fl;
    func_8007FA40(rdram, ctx);
        goto after_1;
    // 0x80275F84: add.s       $f12, $f16, $f18
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f12.fl = ctx->f16.fl + ctx->f18.fl;
    after_1:
    // 0x80275F88: lwc1        $f12, 0x1C($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x80275F8C: jal         0x8001C5D0
    // 0x80275F90: mov.s       $f14, $f0
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    ctx->f14.fl = ctx->f0.fl;
    func_8001C5D0(rdram, ctx);
        goto after_2;
    // 0x80275F90: mov.s       $f14, $f0
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    ctx->f14.fl = ctx->f0.fl;
    after_2:
    // 0x80275F94: lui         $at, 0x8028
    ctx->r1 = S32(0X8028 << 16);
    // 0x80275F98: lwc1        $f7, -0x1CA0($at)
    ctx->f_odd[(7 - 1) * 2] = MEM_W(ctx->r1, -0X1CA0);
    // 0x80275F9C: lwc1        $f6, -0x1C9C($at)
    ctx->f6.u32l = MEM_W(ctx->r1, -0X1C9C);
    // 0x80275FA0: cvt.d.s     $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f4.d = CVT_D_S(ctx->f0.fl);
    // 0x80275FA4: mul.d       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f6.d); 
    ctx->f8.d = MUL_D(ctx->f4.d, ctx->f6.d);
    // 0x80275FA8: lw          $t7, 0x28($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X28);
    // 0x80275FAC: cvt.s.d     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.d); 
    ctx->f10.fl = CVT_S_D(ctx->f8.d);
    // 0x80275FB0: swc1        $f10, 0x0($t7)
    MEM_W(0X0, ctx->r15) = ctx->f10.u32l;
    // 0x80275FB4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80275FB8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80275FBC: jr          $ra
    // 0x80275FC0: nop

    return;
    // 0x80275FC0: nop

;}
RECOMP_FUNC void ovl_8024B800_func_80275FC4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80275FC4: addiu       $sp, $sp, -0x180
    ctx->r29 = ADD32(ctx->r29, -0X180);
    // 0x80275FC8: lui         $v0, 0x8010
    ctx->r2 = S32(0X8010 << 16);
    // 0x80275FCC: addiu       $v0, $v0, 0x4890
    ctx->r2 = ADD32(ctx->r2, 0X4890);
    // 0x80275FD0: lwc1        $f0, 0x20DC($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X20DC);
    // 0x80275FD4: lwc1        $f2, 0x20E8($v0)
    ctx->f2.u32l = MEM_W(ctx->r2, 0X20E8);
    // 0x80275FD8: lwc1        $f4, 0x20E4($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X20E4);
    // 0x80275FDC: lwc1        $f6, 0x20F0($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0X20F0);
    // 0x80275FE0: swc1        $f12, 0x180($sp)
    MEM_W(0X180, ctx->r29) = ctx->f12.u32l;
    // 0x80275FE4: sub.s       $f12, $f0, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f12.fl = ctx->f0.fl - ctx->f2.fl;
    // 0x80275FE8: swc1        $f4, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->f4.u32l;
    // 0x80275FEC: swc1        $f6, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f6.u32l;
    // 0x80275FF0: lwc1        $f16, 0x20E0($v0)
    ctx->f16.u32l = MEM_W(ctx->r2, 0X20E0);
    // 0x80275FF4: lwc1        $f18, 0x20EC($v0)
    ctx->f18.u32l = MEM_W(ctx->r2, 0X20EC);
    // 0x80275FF8: lwc1        $f10, 0x40($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X40);
    // 0x80275FFC: mul.s       $f6, $f2, $f12
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f6.fl = MUL_S(ctx->f2.fl, ctx->f12.fl);
    // 0x80276000: lwc1        $f8, 0x3C($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x80276004: swc1        $f14, 0x184($sp)
    MEM_W(0X184, ctx->r29) = ctx->f14.u32l;
    // 0x80276008: swc1        $f10, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f10.u32l;
    // 0x8027600C: sub.s       $f14, $f16, $f18
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f14.fl = ctx->f16.fl - ctx->f18.fl;
    // 0x80276010: swc1        $f20, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f20.u32l;
    // 0x80276014: sub.s       $f4, $f10, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f4.fl = ctx->f10.fl - ctx->f8.fl;
    // 0x80276018: sw          $a2, 0x188($sp)
    MEM_W(0X188, ctx->r29) = ctx->r6;
    // 0x8027601C: mul.s       $f10, $f14, $f18
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f10.fl = MUL_S(ctx->f14.fl, ctx->f18.fl);
    // 0x80276020: mtc1        $zero, $f20
    ctx->f20.u32l = 0;
    // 0x80276024: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x80276028: mfc1        $a2, $f4
    ctx->r6 = (int32_t)ctx->f4.u32l;
    // 0x8027602C: add.s       $f6, $f6, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f6.fl = ctx->f6.fl + ctx->f10.fl;
    // 0x80276030: addiu       $t6, $sp, 0x88
    ctx->r14 = ADD32(ctx->r29, 0X88);
    // 0x80276034: mul.s       $f10, $f4, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = MUL_S(ctx->f4.fl, ctx->f8.fl);
    // 0x80276038: addiu       $t7, $sp, 0x7C
    ctx->r15 = ADD32(ctx->r29, 0X7C);
    // 0x8027603C: addiu       $t8, $sp, 0x70
    ctx->r24 = ADD32(ctx->r29, 0X70);
    // 0x80276040: swc1        $f21, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x80276044: add.s       $f8, $f6, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f8.fl = ctx->f6.fl + ctx->f10.fl;
    // 0x80276048: lwc1        $f10, 0x30($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X30);
    // 0x8027604C: neg.s       $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f6.fl = -ctx->f8.fl;
    // 0x80276050: swc1        $f10, 0x90($sp)
    MEM_W(0X90, ctx->r29) = ctx->f10.u32l;
    // 0x80276054: lwc1        $f8, 0x188($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X188);
    // 0x80276058: lwc1        $f10, 0x184($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X184);
    // 0x8027605C: mfc1        $a3, $f6
    ctx->r7 = (int32_t)ctx->f6.u32l;
    // 0x80276060: swc1        $f4, 0x9C($sp)
    MEM_W(0X9C, ctx->r29) = ctx->f4.u32l;
    // 0x80276064: swc1        $f6, 0x98($sp)
    MEM_W(0X98, ctx->r29) = ctx->f6.u32l;
    // 0x80276068: sw          $t8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r24;
    // 0x8027606C: sw          $t7, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r15;
    // 0x80276070: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x80276074: swc1        $f14, 0xA0($sp)
    MEM_W(0XA0, ctx->r29) = ctx->f14.u32l;
    // 0x80276078: swc1        $f12, 0xA4($sp)
    MEM_W(0XA4, ctx->r29) = ctx->f12.u32l;
    // 0x8027607C: swc1        $f0, 0x88($sp)
    MEM_W(0X88, ctx->r29) = ctx->f0.u32l;
    // 0x80276080: swc1        $f16, 0x8C($sp)
    MEM_W(0X8C, ctx->r29) = ctx->f16.u32l;
    // 0x80276084: swc1        $f20, 0x80($sp)
    MEM_W(0X80, ctx->r29) = ctx->f20.u32l;
    // 0x80276088: swc1        $f8, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = ctx->f8.u32l;
    // 0x8027608C: jal         0x802758B4
    // 0x80276090: swc1        $f10, 0x84($sp)
    MEM_W(0X84, ctx->r29) = ctx->f10.u32l;
    ovl_8024B800_func_802758B4(rdram, ctx);
        goto after_0;
    // 0x80276090: swc1        $f10, 0x84($sp)
    MEM_W(0X84, ctx->r29) = ctx->f10.u32l;
    after_0:
    // 0x80276094: lwc1        $f12, 0xA4($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0XA4);
    // 0x80276098: lwc1        $f14, 0xA0($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0XA0);
    // 0x8027609C: bne         $v0, $zero, L_802760B0
    if (ctx->r2 != 0) {
        // 0x802760A0: addiu       $a3, $sp, 0xBC
        ctx->r7 = ADD32(ctx->r29, 0XBC);
            goto L_802760B0;
    }
    // 0x802760A0: addiu       $a3, $sp, 0xBC
    ctx->r7 = ADD32(ctx->r29, 0XBC);
    // 0x802760A4: lwc1        $f0, 0x180($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X180);
    // 0x802760A8: b           L_80276208
    // 0x802760AC: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
        goto L_80276208;
    // 0x802760AC: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
L_802760B0:
    // 0x802760B0: lw          $a2, 0x9C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X9C);
    // 0x802760B4: addiu       $t9, $sp, 0xB8
    ctx->r25 = ADD32(ctx->r29, 0XB8);
    // 0x802760B8: jal         0x80275F24
    // 0x802760BC: sw          $t9, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r25;
    ovl_8024B800_func_80275F24(rdram, ctx);
        goto after_1;
    // 0x802760BC: sw          $t9, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r25;
    after_1:
    // 0x802760C0: lui         $at, 0x8010
    ctx->r1 = S32(0X8010 << 16);
    // 0x802760C4: lwc1        $f8, 0x6970($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X6970);
    // 0x802760C8: lwc1        $f10, 0x74($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X74);
    // 0x802760CC: lwc1        $f12, 0x180($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X180);
    // 0x802760D0: sub.s       $f4, $f8, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = ctx->f8.fl - ctx->f10.fl;
    // 0x802760D4: jal         0x80080E80
    // 0x802760D8: swc1        $f4, 0x94($sp)
    MEM_W(0X94, ctx->r29) = ctx->f4.u32l;
    func_80080E80(rdram, ctx);
        goto after_2;
    // 0x802760D8: swc1        $f4, 0x94($sp)
    MEM_W(0X94, ctx->r29) = ctx->f4.u32l;
    after_2:
    // 0x802760DC: lwc1        $f6, 0x94($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X94);
    // 0x802760E0: lwc1        $f12, 0x180($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X180);
    // 0x802760E4: neg.s       $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = -ctx->f6.fl;
    // 0x802760E8: mul.s       $f10, $f0, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = MUL_S(ctx->f0.fl, ctx->f8.fl);
    // 0x802760EC: jal         0x80081040
    // 0x802760F0: swc1        $f10, 0xB4($sp)
    MEM_W(0XB4, ctx->r29) = ctx->f10.u32l;
    func_80081040(rdram, ctx);
        goto after_3;
    // 0x802760F0: swc1        $f10, 0xB4($sp)
    MEM_W(0XB4, ctx->r29) = ctx->f10.u32l;
    after_3:
    // 0x802760F4: lwc1        $f4, 0x94($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X94);
    // 0x802760F8: lw          $a1, 0xBC($sp)
    ctx->r5 = MEM_W(ctx->r29, 0XBC);
    // 0x802760FC: mul.s       $f6, $f0, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f0.fl, ctx->f4.fl);
    // 0x80276100: mfc1        $a2, $f20
    ctx->r6 = (int32_t)ctx->f20.u32l;
    // 0x80276104: addiu       $a0, $sp, 0x140
    ctx->r4 = ADD32(ctx->r29, 0X140);
    // 0x80276108: lui         $a3, 0x3F80
    ctx->r7 = S32(0X3F80 << 16);
    // 0x8027610C: swc1        $f6, 0xB0($sp)
    MEM_W(0XB0, ctx->r29) = ctx->f6.u32l;
    // 0x80276110: jal         0x80080714
    // 0x80276114: swc1        $f20, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f20.u32l;
    func_80080714(rdram, ctx);
        goto after_4;
    // 0x80276114: swc1        $f20, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f20.u32l;
    after_4:
    // 0x80276118: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x8027611C: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x80276120: lw          $a1, 0xB8($sp)
    ctx->r5 = MEM_W(ctx->r29, 0XB8);
    // 0x80276124: mfc1        $a2, $f20
    ctx->r6 = (int32_t)ctx->f20.u32l;
    // 0x80276128: mfc1        $a3, $f20
    ctx->r7 = (int32_t)ctx->f20.u32l;
    // 0x8027612C: addiu       $a0, $sp, 0x100
    ctx->r4 = ADD32(ctx->r29, 0X100);
    // 0x80276130: jal         0x80080714
    // 0x80276134: swc1        $f8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f8.u32l;
    func_80080714(rdram, ctx);
        goto after_5;
    // 0x80276134: swc1        $f8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f8.u32l;
    after_5:
    // 0x80276138: addiu       $a0, $sp, 0x140
    ctx->r4 = ADD32(ctx->r29, 0X140);
    // 0x8027613C: addiu       $a1, $sp, 0x100
    ctx->r5 = ADD32(ctx->r29, 0X100);
    // 0x80276140: jal         0x8007F940
    // 0x80276144: addiu       $a2, $sp, 0xC0
    ctx->r6 = ADD32(ctx->r29, 0XC0);
    func_8007F940(rdram, ctx);
        goto after_6;
    // 0x80276144: addiu       $a2, $sp, 0xC0
    ctx->r6 = ADD32(ctx->r29, 0XC0);
    after_6:
    // 0x80276148: mfc1        $a1, $f20
    ctx->r5 = (int32_t)ctx->f20.u32l;
    // 0x8027614C: lw          $a2, 0xB4($sp)
    ctx->r6 = MEM_W(ctx->r29, 0XB4);
    // 0x80276150: lw          $a3, 0xB0($sp)
    ctx->r7 = MEM_W(ctx->r29, 0XB0);
    // 0x80276154: addiu       $t0, $sp, 0x64
    ctx->r8 = ADD32(ctx->r29, 0X64);
    // 0x80276158: addiu       $t1, $sp, 0x68
    ctx->r9 = ADD32(ctx->r29, 0X68);
    // 0x8027615C: addiu       $t2, $sp, 0x6C
    ctx->r10 = ADD32(ctx->r29, 0X6C);
    // 0x80276160: sw          $t2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r10;
    // 0x80276164: sw          $t1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r9;
    // 0x80276168: sw          $t0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r8;
    // 0x8027616C: jal         0x8007F8E0
    // 0x80276170: addiu       $a0, $sp, 0xC0
    ctx->r4 = ADD32(ctx->r29, 0XC0);
    func_8007F8E0(rdram, ctx);
        goto after_7;
    // 0x80276170: addiu       $a0, $sp, 0xC0
    ctx->r4 = ADD32(ctx->r29, 0XC0);
    after_7:
    // 0x80276174: lwc1        $f10, 0x64($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X64);
    // 0x80276178: lwc1        $f4, 0x70($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X70);
    // 0x8027617C: lwc1        $f8, 0x68($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X68);
    // 0x80276180: add.s       $f6, $f10, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f10.fl + ctx->f4.fl;
    // 0x80276184: lwc1        $f10, 0x74($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X74);
    // 0x80276188: swc1        $f6, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->f6.u32l;
    // 0x8027618C: add.s       $f4, $f8, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x80276190: lwc1        $f8, 0x78($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X78);
    // 0x80276194: lwc1        $f6, 0x6C($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X6C);
    // 0x80276198: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x8027619C: add.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x802761A0: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x802761A4: mfc1        $a2, $f20
    ctx->r6 = (int32_t)ctx->f20.u32l;
    // 0x802761A8: mfc1        $a3, $f20
    ctx->r7 = (int32_t)ctx->f20.u32l;
    // 0x802761AC: addiu       $t3, $sp, 0x88
    ctx->r11 = ADD32(ctx->r29, 0X88);
    // 0x802761B0: addiu       $t4, $sp, 0x64
    ctx->r12 = ADD32(ctx->r29, 0X64);
    // 0x802761B4: addiu       $t5, $sp, 0x58
    ctx->r13 = ADD32(ctx->r29, 0X58);
    // 0x802761B8: swc1        $f4, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->f4.u32l;
    // 0x802761BC: swc1        $f10, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->f10.u32l;
    // 0x802761C0: sw          $t5, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r13;
    // 0x802761C4: sw          $t4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r12;
    // 0x802761C8: sw          $t3, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r11;
    // 0x802761CC: jal         0x802758B4
    // 0x802761D0: mov.s       $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    ctx->f12.fl = ctx->f20.fl;
    ovl_8024B800_func_802758B4(rdram, ctx);
        goto after_8;
    // 0x802761D0: mov.s       $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    ctx->f12.fl = ctx->f20.fl;
    after_8:
    // 0x802761D4: bne         $v0, $zero, L_802761E8
    if (ctx->r2 != 0) {
        // 0x802761D8: nop
    
            goto L_802761E8;
    }
    // 0x802761D8: nop

    // 0x802761DC: lwc1        $f0, 0x180($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X180);
    // 0x802761E0: b           L_80276208
    // 0x802761E4: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
        goto L_80276208;
    // 0x802761E4: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
L_802761E8:
    // 0x802761E8: lwc1        $f4, 0x58($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X58);
    // 0x802761EC: lwc1        $f6, 0x188($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X188);
    // 0x802761F0: lwc1        $f8, 0x60($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X60);
    // 0x802761F4: lwc1        $f10, 0x184($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X184);
    // 0x802761F8: sub.s       $f12, $f4, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f12.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x802761FC: jal         0x8001C5D0
    // 0x80276200: sub.s       $f14, $f8, $f10
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f14.fl = ctx->f8.fl - ctx->f10.fl;
    func_8001C5D0(rdram, ctx);
        goto after_9;
    // 0x80276200: sub.s       $f14, $f8, $f10
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f14.fl = ctx->f8.fl - ctx->f10.fl;
    after_9:
    // 0x80276204: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
L_80276208:
    // 0x80276208: lwc1        $f21, 0x20($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X20);
    // 0x8027620C: lwc1        $f20, 0x24($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X24);
    // 0x80276210: jr          $ra
    // 0x80276214: addiu       $sp, $sp, 0x180
    ctx->r29 = ADD32(ctx->r29, 0X180);
    return;
    // 0x80276214: addiu       $sp, $sp, 0x180
    ctx->r29 = ADD32(ctx->r29, 0X180);
;}
RECOMP_FUNC void ovl_8024B800_func_80276218(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80276218: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x8027621C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80276220: lwc1        $f4, 0x28($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X28);
    // 0x80276224: sw          $a0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r4;
    // 0x80276228: jal         0x8027572C
    // 0x8027622C: swc1        $f4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f4.u32l;
    ovl_8024B800_func_8027572C(rdram, ctx);
        goto after_0;
    // 0x8027622C: swc1        $f4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f4.u32l;
    after_0:
    // 0x80276230: lw          $a3, 0x30($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X30);
    // 0x80276234: nop

    // 0x80276238: lw          $v0, 0x38($a3)
    ctx->r2 = MEM_W(ctx->r7, 0X38);
    // 0x8027623C: nop

    // 0x80276240: lh          $a0, 0x6($v0)
    ctx->r4 = MEM_H(ctx->r2, 0X6);
    // 0x80276244: lh          $a1, 0x8($v0)
    ctx->r5 = MEM_H(ctx->r2, 0X8);
    // 0x80276248: multu       $a0, $a0
    result = U64(U32(ctx->r4)) * U64(U32(ctx->r4)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8027624C: sh          $a0, 0x1A($sp)
    MEM_H(0X1A, ctx->r29) = ctx->r4;
    // 0x80276250: sh          $a1, 0x18($sp)
    MEM_H(0X18, ctx->r29) = ctx->r5;
    // 0x80276254: mflo        $t6
    ctx->r14 = lo;
    // 0x80276258: nop

    // 0x8027625C: nop

    // 0x80276260: multu       $a1, $a1
    result = U64(U32(ctx->r5)) * U64(U32(ctx->r5)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80276264: mflo        $t7
    ctx->r15 = lo;
    // 0x80276268: addu        $t8, $t6, $t7
    ctx->r24 = ADD32(ctx->r14, ctx->r15);
    // 0x8027626C: mtc1        $t8, $f6
    ctx->f6.u32l = ctx->r24;
    // 0x80276270: jal         0x8007FA40
    // 0x80276274: cvt.s.w     $f12, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    ctx->f12.fl = CVT_S_W(ctx->f6.u32l);
    func_8007FA40(rdram, ctx);
        goto after_1;
    // 0x80276274: cvt.s.w     $f12, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    ctx->f12.fl = CVT_S_W(ctx->f6.u32l);
    after_1:
    // 0x80276278: lw          $a3, 0x30($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X30);
    // 0x8027627C: lh          $a0, 0x1A($sp)
    ctx->r4 = MEM_H(ctx->r29, 0X1A);
    // 0x80276280: lh          $a1, 0x18($sp)
    ctx->r5 = MEM_H(ctx->r29, 0X18);
    // 0x80276284: lui         $at, 0x8028
    ctx->r1 = S32(0X8028 << 16);
    // 0x80276288: swc1        $f0, 0x2C($a3)
    MEM_W(0X2C, ctx->r7) = ctx->f0.u32l;
    // 0x8027628C: lwc1        $f10, -0x1C94($at)
    ctx->f10.u32l = MEM_W(ctx->r1, -0X1C94);
    // 0x80276290: lwc1        $f11, -0x1C98($at)
    ctx->f_odd[(11 - 1) * 2] = MEM_W(ctx->r1, -0X1C98);
    // 0x80276294: cvt.d.s     $f8, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f8.d = CVT_D_S(ctx->f0.fl);
    // 0x80276298: c.lt.d      $f8, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f8.d < ctx->f10.d;
    // 0x8027629C: lui         $at, 0x4274
    ctx->r1 = S32(0X4274 << 16);
    // 0x802762A0: bc1f        L_802762B4
    if (!c1cs) {
        // 0x802762A4: nop
    
            goto L_802762B4;
    }
    // 0x802762A4: nop

    // 0x802762A8: lwc1        $f18, 0x2C($a3)
    ctx->f18.u32l = MEM_W(ctx->r7, 0X2C);
    // 0x802762AC: b           L_802762C0
    // 0x802762B0: swc1        $f18, 0x30($a3)
    MEM_W(0X30, ctx->r7) = ctx->f18.u32l;
        goto L_802762C0;
    // 0x802762B0: swc1        $f18, 0x30($a3)
    MEM_W(0X30, ctx->r7) = ctx->f18.u32l;
L_802762B4:
    // 0x802762B4: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x802762B8: nop

    // 0x802762BC: swc1        $f4, 0x30($a3)
    MEM_W(0X30, ctx->r7) = ctx->f4.u32l;
L_802762C0:
    // 0x802762C0: mtc1        $a1, $f18
    ctx->f18.u32l = ctx->r5;
    // 0x802762C4: mtc1        $a0, $f16
    ctx->f16.u32l = ctx->r4;
    // 0x802762C8: cvt.s.w     $f12, $f18
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 18);
    ctx->f12.fl = CVT_S_W(ctx->f18.u32l);
    // 0x802762CC: sh          $a0, 0x1A($sp)
    MEM_H(0X1A, ctx->r29) = ctx->r4;
    // 0x802762D0: sh          $a1, 0x18($sp)
    MEM_H(0X18, ctx->r29) = ctx->r5;
    // 0x802762D4: cvt.s.w     $f14, $f16
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 16);
    ctx->f14.fl = CVT_S_W(ctx->f16.u32l);
    // 0x802762D8: jal         0x8001C5D0
    // 0x802762DC: sw          $a3, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r7;
    func_8001C5D0(rdram, ctx);
        goto after_2;
    // 0x802762DC: sw          $a3, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r7;
    after_2:
    // 0x802762E0: lui         $at, 0x8028
    ctx->r1 = S32(0X8028 << 16);
    // 0x802762E4: lwc1        $f19, -0x1C90($at)
    ctx->f_odd[(19 - 1) * 2] = MEM_W(ctx->r1, -0X1C90);
    // 0x802762E8: lwc1        $f18, -0x1C8C($at)
    ctx->f18.u32l = MEM_W(ctx->r1, -0X1C8C);
    // 0x802762EC: cvt.d.s     $f10, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f10.d = CVT_D_S(ctx->f0.fl);
    // 0x802762F0: add.d       $f4, $f10, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f18.d); 
    ctx->f4.d = ctx->f10.d + ctx->f18.d;
    // 0x802762F4: lw          $a3, 0x30($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X30);
    // 0x802762F8: cvt.s.d     $f2, $f4
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.d); 
    ctx->f2.fl = CVT_S_D(ctx->f4.d);
    // 0x802762FC: lh          $a0, 0x1A($sp)
    ctx->r4 = MEM_H(ctx->r29, 0X1A);
    // 0x80276300: lh          $a1, 0x18($sp)
    ctx->r5 = MEM_H(ctx->r29, 0X18);
    // 0x80276304: lui         $at, 0x8028
    ctx->r1 = S32(0X8028 << 16);
    // 0x80276308: swc1        $f2, 0x28($a3)
    MEM_W(0X28, ctx->r7) = ctx->f2.u32l;
    // 0x8027630C: lwc1        $f8, -0x1C84($at)
    ctx->f8.u32l = MEM_W(ctx->r1, -0X1C84);
    // 0x80276310: lwc1        $f9, -0x1C88($at)
    ctx->f_odd[(9 - 1) * 2] = MEM_W(ctx->r1, -0X1C88);
    // 0x80276314: cvt.d.s     $f6, $f2
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f6.d = CVT_D_S(ctx->f2.fl);
    // 0x80276318: c.le.d      $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f8.d <= ctx->f6.d;
    // 0x8027631C: lui         $at, 0x8028
    ctx->r1 = S32(0X8028 << 16);
    // 0x80276320: bc1f        L_80276344
    if (!c1cs) {
        // 0x80276324: lui         $t9, 0x8010
        ctx->r25 = S32(0X8010 << 16);
            goto L_80276344;
    }
    // 0x80276324: lui         $t9, 0x8010
    ctx->r25 = S32(0X8010 << 16);
    // 0x80276328: lwc1        $f10, 0x28($a3)
    ctx->f10.u32l = MEM_W(ctx->r7, 0X28);
    // 0x8027632C: lwc1        $f5, -0x1C80($at)
    ctx->f_odd[(5 - 1) * 2] = MEM_W(ctx->r1, -0X1C80);
    // 0x80276330: lwc1        $f4, -0x1C7C($at)
    ctx->f4.u32l = MEM_W(ctx->r1, -0X1C7C);
    // 0x80276334: cvt.d.s     $f18, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.fl); 
    ctx->f18.d = CVT_D_S(ctx->f10.fl);
    // 0x80276338: sub.d       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.d); NAN_CHECK(ctx->f4.d); 
    ctx->f6.d = ctx->f18.d - ctx->f4.d;
    // 0x8027633C: cvt.s.d     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.d); 
    ctx->f8.fl = CVT_S_D(ctx->f6.d);
    // 0x80276340: swc1        $f8, 0x28($a3)
    MEM_W(0X28, ctx->r7) = ctx->f8.u32l;
L_80276344:
    // 0x80276344: lw          $v0, 0x40($a3)
    ctx->r2 = MEM_W(ctx->r7, 0X40);
    // 0x80276348: nop

    // 0x8027634C: beq         $v0, $zero, L_80276AC8
    if (ctx->r2 == 0) {
        // 0x80276350: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_80276AC8;
    }
    // 0x80276350: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80276354: lbu         $t9, 0x5232($t9)
    ctx->r25 = MEM_BU(ctx->r25, 0X5232);
    // 0x80276358: addiu       $at, $zero, 0x5
    ctx->r1 = ADD32(0, 0X5);
    // 0x8027635C: bne         $t9, $at, L_80276AC8
    if (ctx->r25 != ctx->r1) {
        // 0x80276360: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_80276AC8;
    }
    // 0x80276360: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80276364: lhu         $t0, 0x14($v0)
    ctx->r8 = MEM_HU(ctx->r2, 0X14);
    // 0x80276368: nop

    // 0x8027636C: andi        $t1, $t0, 0x800
    ctx->r9 = ctx->r8 & 0X800;
    // 0x80276370: beq         $t1, $zero, L_80276384
    if (ctx->r9 == 0) {
        // 0x80276374: nop
    
            goto L_80276384;
    }
    // 0x80276374: nop

    // 0x80276378: lwc1        $f10, 0x28($a3)
    ctx->f10.u32l = MEM_W(ctx->r7, 0X28);
    // 0x8027637C: b           L_802763B0
    // 0x80276380: swc1        $f10, 0x24($a3)
    MEM_W(0X24, ctx->r7) = ctx->f10.u32l;
        goto L_802763B0;
    // 0x80276380: swc1        $f10, 0x24($a3)
    MEM_W(0X24, ctx->r7) = ctx->f10.u32l;
L_80276384:
    // 0x80276384: lwc1        $f12, 0x28($a3)
    ctx->f12.u32l = MEM_W(ctx->r7, 0X28);
    // 0x80276388: lwc1        $f14, 0x4C($v0)
    ctx->f14.u32l = MEM_W(ctx->r2, 0X4C);
    // 0x8027638C: lw          $a2, 0x44($v0)
    ctx->r6 = MEM_W(ctx->r2, 0X44);
    // 0x80276390: sw          $a3, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r7;
    // 0x80276394: sh          $a1, 0x18($sp)
    MEM_H(0X18, ctx->r29) = ctx->r5;
    // 0x80276398: jal         0x80275FC4
    // 0x8027639C: sh          $a0, 0x1A($sp)
    MEM_H(0X1A, ctx->r29) = ctx->r4;
    ovl_8024B800_func_80275FC4(rdram, ctx);
        goto after_3;
    // 0x8027639C: sh          $a0, 0x1A($sp)
    MEM_H(0X1A, ctx->r29) = ctx->r4;
    after_3:
    // 0x802763A0: lw          $a3, 0x30($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X30);
    // 0x802763A4: lh          $a0, 0x1A($sp)
    ctx->r4 = MEM_H(ctx->r29, 0X1A);
    // 0x802763A8: lh          $a1, 0x18($sp)
    ctx->r5 = MEM_H(ctx->r29, 0X18);
    // 0x802763AC: swc1        $f0, 0x24($a3)
    MEM_W(0X24, ctx->r7) = ctx->f0.u32l;
L_802763B0:
    // 0x802763B0: lhu         $t2, 0x2($a3)
    ctx->r10 = MEM_HU(ctx->r7, 0X2);
    // 0x802763B4: or          $v1, $a0, $zero
    ctx->r3 = ctx->r4 | 0;
    // 0x802763B8: andi        $t3, $t2, 0xFBAE
    ctx->r11 = ctx->r10 & 0XFBAE;
    // 0x802763BC: bgez        $a0, L_802763CC
    if (SIGNED(ctx->r4) >= 0) {
        // 0x802763C0: sh          $t3, 0x2($a3)
        MEM_H(0X2, ctx->r7) = ctx->r11;
            goto L_802763CC;
    }
    // 0x802763C0: sh          $t3, 0x2($a3)
    MEM_H(0X2, ctx->r7) = ctx->r11;
    // 0x802763C4: b           L_802763CC
    // 0x802763C8: negu        $v1, $a0
    ctx->r3 = SUB32(0, ctx->r4);
        goto L_802763CC;
    // 0x802763C8: negu        $v1, $a0
    ctx->r3 = SUB32(0, ctx->r4);
L_802763CC:
    // 0x802763CC: slti        $at, $v1, 0xA
    ctx->r1 = SIGNED(ctx->r3) < 0XA ? 1 : 0;
    // 0x802763D0: beq         $at, $zero, L_80276408
    if (ctx->r1 == 0) {
        // 0x802763D4: lui         $a2, 0x3F20
        ctx->r6 = S32(0X3F20 << 16);
            goto L_80276408;
    }
    // 0x802763D4: lui         $a2, 0x3F20
    ctx->r6 = S32(0X3F20 << 16);
    // 0x802763D8: bgez        $a1, L_802763E8
    if (SIGNED(ctx->r5) >= 0) {
        // 0x802763DC: or          $v0, $a1, $zero
        ctx->r2 = ctx->r5 | 0;
            goto L_802763E8;
    }
    // 0x802763DC: or          $v0, $a1, $zero
    ctx->r2 = ctx->r5 | 0;
    // 0x802763E0: b           L_802763E8
    // 0x802763E4: negu        $v0, $a1
    ctx->r2 = SUB32(0, ctx->r5);
        goto L_802763E8;
    // 0x802763E4: negu        $v0, $a1
    ctx->r2 = SUB32(0, ctx->r5);
L_802763E8:
    // 0x802763E8: slti        $at, $v0, 0xA
    ctx->r1 = SIGNED(ctx->r2) < 0XA ? 1 : 0;
    // 0x802763EC: beq         $at, $zero, L_80276408
    if (ctx->r1 == 0) {
        // 0x802763F0: nop
    
            goto L_80276408;
    }
    // 0x802763F0: nop

    // 0x802763F4: lhu         $t4, 0x2($a3)
    ctx->r12 = MEM_HU(ctx->r7, 0X2);
    // 0x802763F8: nop

    // 0x802763FC: ori         $t5, $t4, 0x11
    ctx->r13 = ctx->r12 | 0X11;
    // 0x80276400: b           L_80276434
    // 0x80276404: sh          $t5, 0x2($a3)
    MEM_H(0X2, ctx->r7) = ctx->r13;
        goto L_80276434;
    // 0x80276404: sh          $t5, 0x2($a3)
    MEM_H(0X2, ctx->r7) = ctx->r13;
L_80276408:
    // 0x80276408: lhu         $t6, 0x2($a3)
    ctx->r14 = MEM_HU(ctx->r7, 0X2);
    // 0x8027640C: sh          $zero, 0x1E($a3)
    MEM_H(0X1E, ctx->r7) = 0;
    // 0x80276410: andi        $t7, $t6, 0xFDFF
    ctx->r15 = ctx->r14 & 0XFDFF;
    // 0x80276414: sh          $t7, 0x2($a3)
    MEM_H(0X2, ctx->r7) = ctx->r15;
    // 0x80276418: lw          $a0, 0x3C($a3)
    ctx->r4 = MEM_W(ctx->r7, 0X3C);
    // 0x8027641C: lw          $a1, 0x24($a3)
    ctx->r5 = MEM_W(ctx->r7, 0X24);
    // 0x80276420: sw          $a3, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r7;
    // 0x80276424: jal         0x802755AC
    // 0x80276428: ori         $a2, $a2, 0xD97C
    ctx->r6 = ctx->r6 | 0XD97C;
    ovl_8024B800_func_802755AC(rdram, ctx);
        goto after_4;
    // 0x80276428: ori         $a2, $a2, 0xD97C
    ctx->r6 = ctx->r6 | 0XD97C;
    after_4:
    // 0x8027642C: lw          $a3, 0x30($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X30);
    // 0x80276430: nop

L_80276434:
    // 0x80276434: lhu         $t8, 0x2($a3)
    ctx->r24 = MEM_HU(ctx->r7, 0X2);
    // 0x80276438: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x8027643C: andi        $t9, $t8, 0x1
    ctx->r25 = ctx->r24 & 0X1;
    // 0x80276440: beq         $t9, $zero, L_80276574
    if (ctx->r25 == 0) {
        // 0x80276444: nop
    
            goto L_80276574;
    }
    // 0x80276444: nop

    // 0x80276448: lw          $v0, 0x38($a3)
    ctx->r2 = MEM_W(ctx->r7, 0X38);
    // 0x8027644C: lui         $at, 0x8028
    ctx->r1 = S32(0X8028 << 16);
    // 0x80276450: lhu         $t0, 0x2($v0)
    ctx->r8 = MEM_HU(ctx->r2, 0X2);
    // 0x80276454: lui         $a2, 0x3F20
    ctx->r6 = S32(0X3F20 << 16);
    // 0x80276458: sra         $t1, $t0, 8
    ctx->r9 = S32(SIGNED(ctx->r8) >> 8);
    // 0x8027645C: andi        $t2, $t1, 0xF
    ctx->r10 = ctx->r9 & 0XF;
    // 0x80276460: sll         $t3, $t2, 2
    ctx->r11 = S32(ctx->r10 << 2);
    // 0x80276464: addu        $at, $at, $t3
    ctx->r1 = ADD32(ctx->r1, ctx->r11);
    // 0x80276468: lwc1        $f18, -0x22E8($at)
    ctx->f18.u32l = MEM_W(ctx->r1, -0X22E8);
    // 0x8027646C: addiu       $v1, $zero, 0x46
    ctx->r3 = ADD32(0, 0X46);
    // 0x80276470: swc1        $f18, 0x24($a3)
    MEM_W(0X24, ctx->r7) = ctx->f18.u32l;
    // 0x80276474: lwc1        $f4, 0x24($a3)
    ctx->f4.u32l = MEM_W(ctx->r7, 0X24);
    // 0x80276478: lui         $at, 0x4018
    ctx->r1 = S32(0X4018 << 16);
    // 0x8027647C: swc1        $f4, 0x28($a3)
    MEM_W(0X28, ctx->r7) = ctx->f4.u32l;
    // 0x80276480: lhu         $t4, 0x2($v0)
    ctx->r12 = MEM_HU(ctx->r2, 0X2);
    // 0x80276484: ori         $a2, $a2, 0xD97C
    ctx->r6 = ctx->r6 | 0XD97C;
    // 0x80276488: andi        $t5, $t4, 0xF00
    ctx->r13 = ctx->r12 & 0XF00;
    // 0x8027648C: beq         $t5, $zero, L_8027652C
    if (ctx->r13 == 0) {
        // 0x80276490: nop
    
            goto L_8027652C;
    }
    // 0x80276490: nop

    // 0x80276494: lwc1        $f6, 0x34($a3)
    ctx->f6.u32l = MEM_W(ctx->r7, 0X34);
    // 0x80276498: mtc1        $at, $f11
    ctx->f_odd[(11 - 1) * 2] = ctx->r1;
    // 0x8027649C: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x802764A0: cvt.d.s     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f8.d = CVT_D_S(ctx->f6.fl);
    // 0x802764A4: add.d       $f18, $f8, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f10.d); 
    ctx->f18.d = ctx->f8.d + ctx->f10.d;
    // 0x802764A8: lui         $at, 0x8028
    ctx->r1 = S32(0X8028 << 16);
    // 0x802764AC: cvt.s.d     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.d); 
    ctx->f4.fl = CVT_S_D(ctx->f18.d);
    // 0x802764B0: lui         $a2, 0x3F20
    ctx->r6 = S32(0X3F20 << 16);
    // 0x802764B4: swc1        $f4, 0x34($a3)
    MEM_W(0X34, ctx->r7) = ctx->f4.u32l;
    // 0x802764B8: lwc1        $f0, 0x34($a3)
    ctx->f0.u32l = MEM_W(ctx->r7, 0X34);
    // 0x802764BC: lwc1        $f6, -0x1C74($at)
    ctx->f6.u32l = MEM_W(ctx->r1, -0X1C74);
    // 0x802764C0: lwc1        $f7, -0x1C78($at)
    ctx->f_odd[(7 - 1) * 2] = MEM_W(ctx->r1, -0X1C78);
    // 0x802764C4: cvt.d.s     $f8, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f8.d = CVT_D_S(ctx->f0.fl);
    // 0x802764C8: c.lt.d      $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f6.d < ctx->f8.d;
    // 0x802764CC: lui         $at, 0x4274
    ctx->r1 = S32(0X4274 << 16);
    // 0x802764D0: bc1f        L_802764EC
    if (!c1cs) {
        // 0x802764D4: ori         $a2, $a2, 0xD97C
        ctx->r6 = ctx->r6 | 0XD97C;
            goto L_802764EC;
    }
    // 0x802764D4: ori         $a2, $a2, 0xD97C
    ctx->r6 = ctx->r6 | 0XD97C;
    // 0x802764D8: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x802764DC: nop

    // 0x802764E0: swc1        $f10, 0x34($a3)
    MEM_W(0X34, ctx->r7) = ctx->f10.u32l;
    // 0x802764E4: lwc1        $f0, 0x34($a3)
    ctx->f0.u32l = MEM_W(ctx->r7, 0X34);
    // 0x802764E8: nop

L_802764EC:
    // 0x802764EC: lhu         $t6, 0x2($a3)
    ctx->r14 = MEM_HU(ctx->r7, 0X2);
    // 0x802764F0: lw          $a0, 0x3C($a3)
    ctx->r4 = MEM_W(ctx->r7, 0X3C);
    // 0x802764F4: lw          $a1, 0x24($a3)
    ctx->r5 = MEM_W(ctx->r7, 0X24);
    // 0x802764F8: andi        $t7, $t6, 0xFDFE
    ctx->r15 = ctx->r14 & 0XFDFE;
    // 0x802764FC: swc1        $f0, 0x30($a3)
    MEM_W(0X30, ctx->r7) = ctx->f0.u32l;
    // 0x80276500: swc1        $f0, 0x2C($a3)
    MEM_W(0X2C, ctx->r7) = ctx->f0.u32l;
    // 0x80276504: sh          $t7, 0x2($a3)
    MEM_H(0X2, ctx->r7) = ctx->r15;
    // 0x80276508: sh          $zero, 0x1E($a3)
    MEM_H(0X1E, ctx->r7) = 0;
    // 0x8027650C: sw          $a3, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r7;
    // 0x80276510: jal         0x802755AC
    // 0x80276514: sw          $v1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r3;
    ovl_8024B800_func_802755AC(rdram, ctx);
        goto after_5;
    // 0x80276514: sw          $v1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r3;
    after_5:
    // 0x80276518: lw          $v1, 0x20($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X20);
    // 0x8027651C: lw          $a3, 0x30($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X30);
    // 0x80276520: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x80276524: b           L_80276600
    // 0x80276528: sltiu       $at, $v1, 0x3D
    ctx->r1 = ctx->r3 < 0X3D ? 1 : 0;
        goto L_80276600;
    // 0x80276528: sltiu       $at, $v1, 0x3D
    ctx->r1 = ctx->r3 < 0X3D ? 1 : 0;
L_8027652C:
    // 0x8027652C: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x80276530: lhu         $t8, 0x2($a3)
    ctx->r24 = MEM_HU(ctx->r7, 0X2);
    // 0x80276534: lw          $t0, 0x40($a3)
    ctx->r8 = MEM_W(ctx->r7, 0X40);
    // 0x80276538: ori         $t9, $t8, 0x1
    ctx->r25 = ctx->r24 | 0X1;
    // 0x8027653C: sh          $t9, 0x2($a3)
    MEM_H(0X2, ctx->r7) = ctx->r25;
    // 0x80276540: swc1        $f16, 0x34($a3)
    MEM_W(0X34, ctx->r7) = ctx->f16.u32l;
    // 0x80276544: swc1        $f16, 0x2C($a3)
    MEM_W(0X2C, ctx->r7) = ctx->f16.u32l;
    // 0x80276548: swc1        $f16, 0x30($a3)
    MEM_W(0X30, ctx->r7) = ctx->f16.u32l;
    // 0x8027654C: lw          $a0, 0x3C($a3)
    ctx->r4 = MEM_W(ctx->r7, 0X3C);
    // 0x80276550: lw          $a1, 0x8C($t0)
    ctx->r5 = MEM_W(ctx->r8, 0X8C);
    // 0x80276554: sw          $a3, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r7;
    // 0x80276558: jal         0x802755AC
    // 0x8027655C: sw          $v1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r3;
    ovl_8024B800_func_802755AC(rdram, ctx);
        goto after_6;
    // 0x8027655C: sw          $v1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r3;
    after_6:
    // 0x80276560: lw          $v1, 0x20($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X20);
    // 0x80276564: lw          $a3, 0x30($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X30);
    // 0x80276568: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x8027656C: b           L_80276600
    // 0x80276570: sltiu       $at, $v1, 0x3D
    ctx->r1 = ctx->r3 < 0X3D ? 1 : 0;
        goto L_80276600;
    // 0x80276570: sltiu       $at, $v1, 0x3D
    ctx->r1 = ctx->r3 < 0X3D ? 1 : 0;
L_80276574:
    // 0x80276574: cfc1        $t1, $FpcCsr
    ctx->r9 = get_cop1_cs();
    // 0x80276578: ctc1        $v1, $FpcCsr
    set_cop1_cs(ctx->r3);
    // 0x8027657C: lwc1        $f18, 0x2C($a3)
    ctx->f18.u32l = MEM_W(ctx->r7, 0X2C);
    // 0x80276580: lui         $at, 0x4F00
    ctx->r1 = S32(0X4F00 << 16);
    // 0x80276584: cvt.w.s     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    ctx->f4.u32l = CVT_W_S(ctx->f18.fl);
    // 0x80276588: cfc1        $v1, $FpcCsr
    ctx->r3 = get_cop1_cs();
    // 0x8027658C: nop

    // 0x80276590: andi        $v1, $v1, 0x78
    ctx->r3 = ctx->r3 & 0X78;
    // 0x80276594: beq         $v1, $zero, L_802765E0
    if (ctx->r3 == 0) {
        // 0x80276598: nop
    
            goto L_802765E0;
    }
    // 0x80276598: nop

    // 0x8027659C: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x802765A0: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x802765A4: sub.s       $f4, $f18, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f4.fl = ctx->f18.fl - ctx->f4.fl;
    // 0x802765A8: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x802765AC: ctc1        $v1, $FpcCsr
    set_cop1_cs(ctx->r3);
    // 0x802765B0: nop

    // 0x802765B4: cvt.w.s     $f4, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    ctx->f4.u32l = CVT_W_S(ctx->f4.fl);
    // 0x802765B8: cfc1        $v1, $FpcCsr
    ctx->r3 = get_cop1_cs();
    // 0x802765BC: nop

    // 0x802765C0: andi        $v1, $v1, 0x78
    ctx->r3 = ctx->r3 & 0X78;
    // 0x802765C4: bne         $v1, $zero, L_802765D8
    if (ctx->r3 != 0) {
        // 0x802765C8: nop
    
            goto L_802765D8;
    }
    // 0x802765C8: nop

    // 0x802765CC: mfc1        $v1, $f4
    ctx->r3 = (int32_t)ctx->f4.u32l;
    // 0x802765D0: b           L_802765F0
    // 0x802765D4: or          $v1, $v1, $at
    ctx->r3 = ctx->r3 | ctx->r1;
        goto L_802765F0;
    // 0x802765D4: or          $v1, $v1, $at
    ctx->r3 = ctx->r3 | ctx->r1;
L_802765D8:
    // 0x802765D8: b           L_802765F0
    // 0x802765DC: addiu       $v1, $zero, -0x1
    ctx->r3 = ADD32(0, -0X1);
        goto L_802765F0;
    // 0x802765DC: addiu       $v1, $zero, -0x1
    ctx->r3 = ADD32(0, -0X1);
L_802765E0:
    // 0x802765E0: mfc1        $v1, $f4
    ctx->r3 = (int32_t)ctx->f4.u32l;
    // 0x802765E4: nop

    // 0x802765E8: bltz        $v1, L_802765D8
    if (SIGNED(ctx->r3) < 0) {
        // 0x802765EC: nop
    
            goto L_802765D8;
    }
    // 0x802765EC: nop

L_802765F0:
    // 0x802765F0: ctc1        $t1, $FpcCsr
    set_cop1_cs(ctx->r9);
    // 0x802765F4: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x802765F8: nop

    // 0x802765FC: sltiu       $at, $v1, 0x3D
    ctx->r1 = ctx->r3 < 0X3D ? 1 : 0;
L_80276600:
    // 0x80276600: bne         $at, $zero, L_802766E8
    if (ctx->r1 != 0) {
        // 0x80276604: nop
    
            goto L_802766E8;
    }
    // 0x80276604: nop

    // 0x80276608: lwc1        $f12, 0x28($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X28);
    // 0x8027660C: lwc1        $f14, 0x28($a3)
    ctx->f14.u32l = MEM_W(ctx->r7, 0X28);
    // 0x80276610: jal         0x8027924C
    // 0x80276614: sw          $a3, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r7;
    ovl_8024B800_func_8027924C(rdram, ctx);
        goto after_7;
    // 0x80276614: sw          $a3, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r7;
    after_7:
    // 0x80276618: lw          $a3, 0x30($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X30);
    // 0x8027661C: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x80276620: lwc1        $f2, 0x48($a3)
    ctx->f2.u32l = MEM_W(ctx->r7, 0X48);
    // 0x80276624: mov.s       $f14, $f0
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    ctx->f14.fl = ctx->f0.fl;
    // 0x80276628: c.eq.s      $f16, $f2
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f16.fl == ctx->f2.fl;
    // 0x8027662C: nop

    // 0x80276630: bc1f        L_80276640
    if (!c1cs) {
        // 0x80276634: nop
    
            goto L_80276640;
    }
    // 0x80276634: nop

    // 0x80276638: b           L_802766EC
    // 0x8027663C: swc1        $f0, 0x48($a3)
    MEM_W(0X48, ctx->r7) = ctx->f0.u32l;
        goto L_802766EC;
    // 0x8027663C: swc1        $f0, 0x48($a3)
    MEM_W(0X48, ctx->r7) = ctx->f0.u32l;
L_80276640:
    // 0x80276640: mul.s       $f6, $f2, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = MUL_S(ctx->f2.fl, ctx->f0.fl);
    // 0x80276644: c.lt.s      $f6, $f16
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f6.fl < ctx->f16.fl;
    // 0x80276648: nop

    // 0x8027664C: bc1f        L_80276670
    if (!c1cs) {
        // 0x80276650: nop
    
            goto L_80276670;
    }
    // 0x80276650: nop

    // 0x80276654: lhu         $t2, 0x2($a3)
    ctx->r10 = MEM_HU(ctx->r7, 0X2);
    // 0x80276658: nop

    // 0x8027665C: andi        $t3, $t2, 0x1
    ctx->r11 = ctx->r10 & 0X1;
    // 0x80276660: bne         $t3, $zero, L_802766EC
    if (ctx->r11 != 0) {
        // 0x80276664: nop
    
            goto L_802766EC;
    }
    // 0x80276664: nop

    // 0x80276668: b           L_802766EC
    // 0x8027666C: swc1        $f16, 0x48($a3)
    MEM_W(0X48, ctx->r7) = ctx->f16.u32l;
        goto L_802766EC;
    // 0x8027666C: swc1        $f16, 0x48($a3)
    MEM_W(0X48, ctx->r7) = ctx->f16.u32l;
L_80276670:
    // 0x80276670: add.s       $f8, $f2, $f14
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f8.fl = ctx->f2.fl + ctx->f14.fl;
    // 0x80276674: swc1        $f8, 0x48($a3)
    MEM_W(0X48, ctx->r7) = ctx->f8.u32l;
    // 0x80276678: lwc1        $f12, 0x48($a3)
    ctx->f12.u32l = MEM_W(ctx->r7, 0X48);
    // 0x8027667C: jal         0x80272AEC
    // 0x80276680: sw          $a3, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r7;
    ovl_8024B800_func_80272AEC(rdram, ctx);
        goto after_8;
    // 0x80276680: sw          $a3, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r7;
    after_8:
    // 0x80276684: lui         $at, 0x8028
    ctx->r1 = S32(0X8028 << 16);
    // 0x80276688: lwc1        $f11, -0x1C70($at)
    ctx->f_odd[(11 - 1) * 2] = MEM_W(ctx->r1, -0X1C70);
    // 0x8027668C: lwc1        $f10, -0x1C6C($at)
    ctx->f10.u32l = MEM_W(ctx->r1, -0X1C6C);
    // 0x80276690: cvt.d.s     $f18, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f18.d = CVT_D_S(ctx->f0.fl);
    // 0x80276694: c.lt.d      $f10, $f18
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f10.d < ctx->f18.d;
    // 0x80276698: lw          $a3, 0x30($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X30);
    // 0x8027669C: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x802766A0: bc1f        L_802766EC
    if (!c1cs) {
        // 0x802766A4: nop
    
            goto L_802766EC;
    }
    // 0x802766A4: nop

    // 0x802766A8: lwc1        $f4, 0x48($a3)
    ctx->f4.u32l = MEM_W(ctx->r7, 0X48);
    // 0x802766AC: nop

    // 0x802766B0: c.lt.s      $f16, $f4
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f16.fl < ctx->f4.fl;
    // 0x802766B4: nop

    // 0x802766B8: bc1f        L_802766D4
    if (!c1cs) {
        // 0x802766BC: nop
    
            goto L_802766D4;
    }
    // 0x802766BC: nop

    // 0x802766C0: lhu         $t4, 0x2($a3)
    ctx->r12 = MEM_HU(ctx->r7, 0X2);
    // 0x802766C4: nop

    // 0x802766C8: ori         $t5, $t4, 0x1000
    ctx->r13 = ctx->r12 | 0X1000;
    // 0x802766CC: b           L_802766EC
    // 0x802766D0: sh          $t5, 0x2($a3)
    MEM_H(0X2, ctx->r7) = ctx->r13;
        goto L_802766EC;
    // 0x802766D0: sh          $t5, 0x2($a3)
    MEM_H(0X2, ctx->r7) = ctx->r13;
L_802766D4:
    // 0x802766D4: lhu         $t6, 0x2($a3)
    ctx->r14 = MEM_HU(ctx->r7, 0X2);
    // 0x802766D8: nop

    // 0x802766DC: ori         $t7, $t6, 0x800
    ctx->r15 = ctx->r14 | 0X800;
    // 0x802766E0: b           L_802766EC
    // 0x802766E4: sh          $t7, 0x2($a3)
    MEM_H(0X2, ctx->r7) = ctx->r15;
        goto L_802766EC;
    // 0x802766E4: sh          $t7, 0x2($a3)
    MEM_H(0X2, ctx->r7) = ctx->r15;
L_802766E8:
    // 0x802766E8: swc1        $f16, 0x48($a3)
    MEM_W(0X48, ctx->r7) = ctx->f16.u32l;
L_802766EC:
    // 0x802766EC: lhu         $v0, 0x6($a3)
    ctx->r2 = MEM_HU(ctx->r7, 0X6);
    // 0x802766F0: lui         $at, 0x41F0
    ctx->r1 = S32(0X41F0 << 16);
    // 0x802766F4: andi        $t8, $v0, 0x1000
    ctx->r24 = ctx->r2 & 0X1000;
    // 0x802766F8: bne         $t8, $zero, L_80276898
    if (ctx->r24 != 0) {
        // 0x802766FC: nop
    
            goto L_80276898;
    }
    // 0x802766FC: nop

    // 0x80276700: lw          $t9, 0x40($a3)
    ctx->r25 = MEM_W(ctx->r7, 0X40);
    // 0x80276704: nop

    // 0x80276708: lw          $v1, 0xC8($t9)
    ctx->r3 = MEM_W(ctx->r25, 0XC8);
    // 0x8027670C: nop

    // 0x80276710: lbu         $t0, 0x86A($v1)
    ctx->r8 = MEM_BU(ctx->r3, 0X86A);
    // 0x80276714: nop

    // 0x80276718: bne         $t0, $zero, L_80276838
    if (ctx->r8 != 0) {
        // 0x8027671C: nop
    
            goto L_80276838;
    }
    // 0x8027671C: nop

    // 0x80276720: lhu         $t1, 0x4($a3)
    ctx->r9 = MEM_HU(ctx->r7, 0X4);
    // 0x80276724: nop

    // 0x80276728: andi        $t2, $t1, 0x2020
    ctx->r10 = ctx->r9 & 0X2020;
    // 0x8027672C: beq         $t2, $zero, L_80276768
    if (ctx->r10 == 0) {
        // 0x80276730: andi        $t7, $v0, 0x2020
        ctx->r15 = ctx->r2 & 0X2020;
            goto L_80276768;
    }
    // 0x80276730: andi        $t7, $v0, 0x2020
    ctx->r15 = ctx->r2 & 0X2020;
    // 0x80276734: lhu         $t3, 0x10($v1)
    ctx->r11 = MEM_HU(ctx->r3, 0X10);
    // 0x80276738: sb          $zero, 0x2($v1)
    MEM_B(0X2, ctx->r3) = 0;
    // 0x8027673C: ori         $t5, $t3, 0x20
    ctx->r13 = ctx->r11 | 0X20;
    // 0x80276740: sh          $t5, 0x10($v1)
    MEM_H(0X10, ctx->r3) = ctx->r13;
    // 0x80276744: andi        $t6, $t5, 0xDFFF
    ctx->r14 = ctx->r13 & 0XDFFF;
    // 0x80276748: sh          $t6, 0x10($v1)
    MEM_H(0X10, ctx->r3) = ctx->r14;
    // 0x8027674C: sw          $zero, 0x91C($v1)
    MEM_W(0X91C, ctx->r3) = 0;
    // 0x80276750: sw          $zero, 0x920($v1)
    MEM_W(0X920, ctx->r3) = 0;
    // 0x80276754: sw          $zero, 0x924($v1)
    MEM_W(0X924, ctx->r3) = 0;
    // 0x80276758: sh          $zero, 0x936($v1)
    MEM_H(0X936, ctx->r3) = 0;
    // 0x8027675C: lhu         $v0, 0x6($a3)
    ctx->r2 = MEM_HU(ctx->r7, 0X6);
    // 0x80276760: nop

    // 0x80276764: andi        $t7, $v0, 0x2020
    ctx->r15 = ctx->r2 & 0X2020;
L_80276768:
    // 0x80276768: beq         $t7, $zero, L_80276898
    if (ctx->r15 == 0) {
        // 0x8027676C: lui         $t5, 0x8028
        ctx->r13 = S32(0X8028 << 16);
            goto L_80276898;
    }
    // 0x8027676C: lui         $t5, 0x8028
    ctx->r13 = S32(0X8028 << 16);
    // 0x80276770: lhu         $t8, 0x8($v1)
    ctx->r24 = MEM_HU(ctx->r3, 0X8);
    // 0x80276774: lui         $t1, 0x8028
    ctx->r9 = S32(0X8028 << 16);
    // 0x80276778: andi        $t9, $t8, 0xFFBF
    ctx->r25 = ctx->r24 & 0XFFBF;
    // 0x8027677C: sh          $t9, 0x8($v1)
    MEM_H(0X8, ctx->r3) = ctx->r25;
    // 0x80276780: lw          $t0, 0x38($a3)
    ctx->r8 = MEM_W(ctx->r7, 0X38);
    // 0x80276784: lhu         $t1, -0x22A8($t1)
    ctx->r9 = MEM_HU(ctx->r9, -0X22A8);
    // 0x80276788: lhu         $v0, 0x2($t0)
    ctx->r2 = MEM_HU(ctx->r8, 0X2);
    // 0x8027678C: lui         $t9, 0x8028
    ctx->r25 = S32(0X8028 << 16);
    // 0x80276790: and         $t2, $t1, $v0
    ctx->r10 = ctx->r9 & ctx->r2;
    // 0x80276794: beq         $t2, $zero, L_802767B8
    if (ctx->r10 == 0) {
        // 0x80276798: nop
    
            goto L_802767B8;
    }
    // 0x80276798: nop

    // 0x8027679C: lbu         $t3, 0x86B($v1)
    ctx->r11 = MEM_BU(ctx->r3, 0X86B);
    // 0x802767A0: nop

    // 0x802767A4: sb          $t3, 0x2($v1)
    MEM_B(0X2, ctx->r3) = ctx->r11;
    // 0x802767A8: lw          $t4, 0x38($a3)
    ctx->r12 = MEM_W(ctx->r7, 0X38);
    // 0x802767AC: nop

    // 0x802767B0: lhu         $v0, 0x2($t4)
    ctx->r2 = MEM_HU(ctx->r12, 0X2);
    // 0x802767B4: nop

L_802767B8:
    // 0x802767B8: lhu         $t5, -0x22A6($t5)
    ctx->r13 = MEM_HU(ctx->r13, -0X22A6);
    // 0x802767BC: lui         $t3, 0x8028
    ctx->r11 = S32(0X8028 << 16);
    // 0x802767C0: and         $t6, $t5, $v0
    ctx->r14 = ctx->r13 & ctx->r2;
    // 0x802767C4: beq         $t6, $zero, L_802767E8
    if (ctx->r14 == 0) {
        // 0x802767C8: nop
    
            goto L_802767E8;
    }
    // 0x802767C8: nop

    // 0x802767CC: lbu         $t7, 0x86C($v1)
    ctx->r15 = MEM_BU(ctx->r3, 0X86C);
    // 0x802767D0: nop

    // 0x802767D4: sb          $t7, 0x2($v1)
    MEM_B(0X2, ctx->r3) = ctx->r15;
    // 0x802767D8: lw          $t8, 0x38($a3)
    ctx->r24 = MEM_W(ctx->r7, 0X38);
    // 0x802767DC: nop

    // 0x802767E0: lhu         $v0, 0x2($t8)
    ctx->r2 = MEM_HU(ctx->r24, 0X2);
    // 0x802767E4: nop

L_802767E8:
    // 0x802767E8: lhu         $t9, -0x22A4($t9)
    ctx->r25 = MEM_HU(ctx->r25, -0X22A4);
    // 0x802767EC: nop

    // 0x802767F0: and         $t0, $t9, $v0
    ctx->r8 = ctx->r25 & ctx->r2;
    // 0x802767F4: beq         $t0, $zero, L_80276818
    if (ctx->r8 == 0) {
        // 0x802767F8: nop
    
            goto L_80276818;
    }
    // 0x802767F8: nop

    // 0x802767FC: lbu         $t1, 0x86D($v1)
    ctx->r9 = MEM_BU(ctx->r3, 0X86D);
    // 0x80276800: nop

    // 0x80276804: sb          $t1, 0x2($v1)
    MEM_B(0X2, ctx->r3) = ctx->r9;
    // 0x80276808: lw          $t2, 0x38($a3)
    ctx->r10 = MEM_W(ctx->r7, 0X38);
    // 0x8027680C: nop

    // 0x80276810: lhu         $v0, 0x2($t2)
    ctx->r2 = MEM_HU(ctx->r10, 0X2);
    // 0x80276814: nop

L_80276818:
    // 0x80276818: lhu         $t3, -0x22A2($t3)
    ctx->r11 = MEM_HU(ctx->r11, -0X22A2);
    // 0x8027681C: nop

    // 0x80276820: and         $t4, $t3, $v0
    ctx->r12 = ctx->r11 & ctx->r2;
    // 0x80276824: beq         $t4, $zero, L_80276898
    if (ctx->r12 == 0) {
        // 0x80276828: nop
    
            goto L_80276898;
    }
    // 0x80276828: nop

    // 0x8027682C: lbu         $t5, 0x86E($v1)
    ctx->r13 = MEM_BU(ctx->r3, 0X86E);
    // 0x80276830: b           L_80276898
    // 0x80276834: sb          $t5, 0x2($v1)
    MEM_B(0X2, ctx->r3) = ctx->r13;
        goto L_80276898;
    // 0x80276834: sb          $t5, 0x2($v1)
    MEM_B(0X2, ctx->r3) = ctx->r13;
L_80276838:
    // 0x80276838: lhu         $t6, 0x4($a3)
    ctx->r14 = MEM_HU(ctx->r7, 0X4);
    // 0x8027683C: nop

    // 0x80276840: andi        $t7, $t6, 0x2020
    ctx->r15 = ctx->r14 & 0X2020;
    // 0x80276844: beq         $t7, $zero, L_80276898
    if (ctx->r15 == 0) {
        // 0x80276848: nop
    
            goto L_80276898;
    }
    // 0x80276848: nop

    // 0x8027684C: lhu         $t0, 0x8($v1)
    ctx->r8 = MEM_HU(ctx->r3, 0X8);
    // 0x80276850: lhu         $t8, 0x10($v1)
    ctx->r24 = MEM_HU(ctx->r3, 0X10);
    // 0x80276854: xori        $t2, $t0, 0x40
    ctx->r10 = ctx->r8 ^ 0X40;
    // 0x80276858: andi        $t3, $t2, 0x40
    ctx->r11 = ctx->r10 & 0X40;
    // 0x8027685C: ori         $t9, $t8, 0x20
    ctx->r25 = ctx->r24 | 0X20;
    // 0x80276860: sh          $t9, 0x10($v1)
    MEM_H(0X10, ctx->r3) = ctx->r25;
    // 0x80276864: beq         $t3, $zero, L_80276878
    if (ctx->r11 == 0) {
        // 0x80276868: sh          $t2, 0x8($v1)
        MEM_H(0X8, ctx->r3) = ctx->r10;
            goto L_80276878;
    }
    // 0x80276868: sh          $t2, 0x8($v1)
    MEM_H(0X8, ctx->r3) = ctx->r10;
    // 0x8027686C: lbu         $t4, 0x86B($v1)
    ctx->r12 = MEM_BU(ctx->r3, 0X86B);
    // 0x80276870: b           L_8027687C
    // 0x80276874: sb          $t4, 0x2($v1)
    MEM_B(0X2, ctx->r3) = ctx->r12;
        goto L_8027687C;
    // 0x80276874: sb          $t4, 0x2($v1)
    MEM_B(0X2, ctx->r3) = ctx->r12;
L_80276878:
    // 0x80276878: sb          $zero, 0x2($v1)
    MEM_B(0X2, ctx->r3) = 0;
L_8027687C:
    // 0x8027687C: lhu         $t5, 0x10($v1)
    ctx->r13 = MEM_HU(ctx->r3, 0X10);
    // 0x80276880: sw          $zero, 0x91C($v1)
    MEM_W(0X91C, ctx->r3) = 0;
    // 0x80276884: andi        $t6, $t5, 0xDFFF
    ctx->r14 = ctx->r13 & 0XDFFF;
    // 0x80276888: sh          $t6, 0x10($v1)
    MEM_H(0X10, ctx->r3) = ctx->r14;
    // 0x8027688C: sw          $zero, 0x920($v1)
    MEM_W(0X920, ctx->r3) = 0;
    // 0x80276890: sw          $zero, 0x924($v1)
    MEM_W(0X924, ctx->r3) = 0;
    // 0x80276894: sh          $zero, 0x936($v1)
    MEM_H(0X936, ctx->r3) = 0;
L_80276898:
    // 0x80276898: lhu         $t7, 0x4($a3)
    ctx->r15 = MEM_HU(ctx->r7, 0X4);
    // 0x8027689C: nop

    // 0x802768A0: andi        $t8, $t7, 0x2
    ctx->r24 = ctx->r15 & 0X2;
    // 0x802768A4: beq         $t8, $zero, L_80276910
    if (ctx->r24 == 0) {
        // 0x802768A8: nop
    
            goto L_80276910;
    }
    // 0x802768A8: nop

    // 0x802768AC: lwc1        $f6, 0x2C($a3)
    ctx->f6.u32l = MEM_W(ctx->r7, 0X2C);
    // 0x802768B0: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x802768B4: lh          $t9, 0x1A($a3)
    ctx->r25 = MEM_H(ctx->r7, 0X1A);
    // 0x802768B8: lhu         $t1, 0x18($a3)
    ctx->r9 = MEM_HU(ctx->r7, 0X18);
    // 0x802768BC: c.lt.s      $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f6.fl < ctx->f8.fl;
    // 0x802768C0: addiu       $t0, $t9, 0x5
    ctx->r8 = ADD32(ctx->r25, 0X5);
    // 0x802768C4: addiu       $t2, $t1, 0x1
    ctx->r10 = ADD32(ctx->r9, 0X1);
    // 0x802768C8: sh          $t0, 0x1A($a3)
    MEM_H(0X1A, ctx->r7) = ctx->r8;
    // 0x802768CC: bc1f        L_802768E4
    if (!c1cs) {
        // 0x802768D0: sh          $t2, 0x18($a3)
        MEM_H(0X18, ctx->r7) = ctx->r10;
            goto L_802768E4;
    }
    // 0x802768D0: sh          $t2, 0x18($a3)
    MEM_H(0X18, ctx->r7) = ctx->r10;
    // 0x802768D4: lhu         $t3, 0x2($a3)
    ctx->r11 = MEM_HU(ctx->r7, 0X2);
    // 0x802768D8: nop

    // 0x802768DC: ori         $t4, $t3, 0x2000
    ctx->r12 = ctx->r11 | 0X2000;
    // 0x802768E0: sh          $t4, 0x2($a3)
    MEM_H(0X2, ctx->r7) = ctx->r12;
L_802768E4:
    // 0x802768E4: lhu         $t5, 0x18($a3)
    ctx->r13 = MEM_HU(ctx->r7, 0X18);
    // 0x802768E8: addiu       $t8, $zero, 0x8
    ctx->r24 = ADD32(0, 0X8);
    // 0x802768EC: slti        $at, $t5, 0x2
    ctx->r1 = SIGNED(ctx->r13) < 0X2 ? 1 : 0;
    // 0x802768F0: bne         $at, $zero, L_80276908
    if (ctx->r1 != 0) {
        // 0x802768F4: nop
    
            goto L_80276908;
    }
    // 0x802768F4: nop

    // 0x802768F8: lhu         $t6, 0x2($a3)
    ctx->r14 = MEM_HU(ctx->r7, 0X2);
    // 0x802768FC: nop

    // 0x80276900: ori         $t7, $t6, 0x20
    ctx->r15 = ctx->r14 | 0X20;
    // 0x80276904: sh          $t7, 0x2($a3)
    MEM_H(0X2, ctx->r7) = ctx->r15;
L_80276908:
    // 0x80276908: b           L_80276934
    // 0x8027690C: sh          $t8, 0x16($a3)
    MEM_H(0X16, ctx->r7) = ctx->r24;
        goto L_80276934;
    // 0x8027690C: sh          $t8, 0x16($a3)
    MEM_H(0X16, ctx->r7) = ctx->r24;
L_80276910:
    // 0x80276910: lh          $t9, 0x1A($a3)
    ctx->r25 = MEM_H(ctx->r7, 0X1A);
    // 0x80276914: nop

    // 0x80276918: addiu       $t0, $t9, -0x1
    ctx->r8 = ADD32(ctx->r25, -0X1);
    // 0x8027691C: sh          $t0, 0x1A($a3)
    MEM_H(0X1A, ctx->r7) = ctx->r8;
    // 0x80276920: lh          $t1, 0x1A($a3)
    ctx->r9 = MEM_H(ctx->r7, 0X1A);
    // 0x80276924: nop

    // 0x80276928: bgez        $t1, L_80276934
    if (SIGNED(ctx->r9) >= 0) {
        // 0x8027692C: nop
    
            goto L_80276934;
    }
    // 0x8027692C: nop

    // 0x80276930: sh          $zero, 0x1A($a3)
    MEM_H(0X1A, ctx->r7) = 0;
L_80276934:
    // 0x80276934: lh          $v0, 0x16($a3)
    ctx->r2 = MEM_H(ctx->r7, 0X16);
    // 0x80276938: nop

    // 0x8027693C: beq         $v0, $zero, L_8027696C
    if (ctx->r2 == 0) {
        // 0x80276940: addiu       $t2, $v0, -0x1
        ctx->r10 = ADD32(ctx->r2, -0X1);
            goto L_8027696C;
    }
    // 0x80276940: addiu       $t2, $v0, -0x1
    ctx->r10 = ADD32(ctx->r2, -0X1);
    // 0x80276944: sh          $t2, 0x16($a3)
    MEM_H(0X16, ctx->r7) = ctx->r10;
    // 0x80276948: lh          $t3, 0x16($a3)
    ctx->r11 = MEM_H(ctx->r7, 0X16);
    // 0x8027694C: nop

    // 0x80276950: bne         $t3, $zero, L_8027696C
    if (ctx->r11 != 0) {
        // 0x80276954: nop
    
            goto L_8027696C;
    }
    // 0x80276954: nop

    // 0x80276958: lhu         $t4, 0x2($a3)
    ctx->r12 = MEM_HU(ctx->r7, 0X2);
    // 0x8027695C: sh          $zero, 0x18($a3)
    MEM_H(0X18, ctx->r7) = 0;
    // 0x80276960: andi        $t5, $t4, 0xDFDF
    ctx->r13 = ctx->r12 & 0XDFDF;
    // 0x80276964: sh          $zero, 0x1A($a3)
    MEM_H(0X1A, ctx->r7) = 0;
    // 0x80276968: sh          $t5, 0x2($a3)
    MEM_H(0X2, ctx->r7) = ctx->r13;
L_8027696C:
    // 0x8027696C: lhu         $t6, 0x6($a3)
    ctx->r14 = MEM_HU(ctx->r7, 0X6);
    // 0x80276970: lui         $v0, 0x8009
    ctx->r2 = S32(0X8009 << 16);
    // 0x80276974: andi        $t7, $t6, 0x2
    ctx->r15 = ctx->r14 & 0X2;
    // 0x80276978: beq         $t7, $zero, L_80276A00
    if (ctx->r15 == 0) {
        // 0x8027697C: nop
    
            goto L_80276A00;
    }
    // 0x8027697C: nop

    // 0x80276980: lhu         $t8, 0x1C($a3)
    ctx->r24 = MEM_HU(ctx->r7, 0X1C);
    // 0x80276984: lui         $t0, 0x8009
    ctx->r8 = S32(0X8009 << 16);
    // 0x80276988: addiu       $t9, $t8, 0x1
    ctx->r25 = ADD32(ctx->r24, 0X1);
    // 0x8027698C: sh          $t9, 0x1C($a3)
    MEM_H(0X1C, ctx->r7) = ctx->r25;
    // 0x80276990: lw          $t0, 0x3B20($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X3B20);
    // 0x80276994: lw          $v0, 0x40($a3)
    ctx->r2 = MEM_W(ctx->r7, 0X40);
    // 0x80276998: lw          $a0, 0x84($t0)
    ctx->r4 = MEM_W(ctx->r8, 0X84);
    // 0x8027699C: andi        $t1, $t9, 0xFFFF
    ctx->r9 = ctx->r25 & 0XFFFF;
    // 0x802769A0: bne         $a0, $v0, L_802769B0
    if (ctx->r4 != ctx->r2) {
        // 0x802769A4: slti        $at, $t1, 0x5
        ctx->r1 = SIGNED(ctx->r9) < 0X5 ? 1 : 0;
            goto L_802769B0;
    }
    // 0x802769A4: slti        $at, $t1, 0x5
    ctx->r1 = SIGNED(ctx->r9) < 0X5 ? 1 : 0;
    // 0x802769A8: beq         $at, $zero, L_802769C4
    if (ctx->r1 == 0) {
        // 0x802769AC: nop
    
            goto L_802769C4;
    }
    // 0x802769AC: nop

L_802769B0:
    // 0x802769B0: lhu         $v1, 0x1C($a3)
    ctx->r3 = MEM_HU(ctx->r7, 0X1C);
    // 0x802769B4: beq         $a0, $v0, L_802769EC
    if (ctx->r4 == ctx->r2) {
        // 0x802769B8: slti        $at, $v1, 0x4
        ctx->r1 = SIGNED(ctx->r3) < 0X4 ? 1 : 0;
            goto L_802769EC;
    }
    // 0x802769B8: slti        $at, $v1, 0x4
    ctx->r1 = SIGNED(ctx->r3) < 0X4 ? 1 : 0;
    // 0x802769BC: bne         $at, $zero, L_802769F0
    if (ctx->r1 != 0) {
        // 0x802769C0: slti        $at, $v1, 0x65
        ctx->r1 = SIGNED(ctx->r3) < 0X65 ? 1 : 0;
            goto L_802769F0;
    }
    // 0x802769C0: slti        $at, $v1, 0x65
    ctx->r1 = SIGNED(ctx->r3) < 0X65 ? 1 : 0;
L_802769C4:
    // 0x802769C4: lhu         $t2, 0x2($a3)
    ctx->r10 = MEM_HU(ctx->r7, 0X2);
    // 0x802769C8: nop

    // 0x802769CC: ori         $t3, $t2, 0x400
    ctx->r11 = ctx->r10 | 0X400;
    // 0x802769D0: sh          $t3, 0x2($a3)
    MEM_H(0X2, ctx->r7) = ctx->r11;
    // 0x802769D4: lhu         $t4, 0x14($v0)
    ctx->r12 = MEM_HU(ctx->r2, 0X14);
    // 0x802769D8: nop

    // 0x802769DC: andi        $t5, $t4, 0xFEFF
    ctx->r13 = ctx->r12 & 0XFEFF;
    // 0x802769E0: sh          $t5, 0x14($v0)
    MEM_H(0X14, ctx->r2) = ctx->r13;
    // 0x802769E4: lhu         $v1, 0x1C($a3)
    ctx->r3 = MEM_HU(ctx->r7, 0X1C);
    // 0x802769E8: nop

L_802769EC:
    // 0x802769EC: slti        $at, $v1, 0x65
    ctx->r1 = SIGNED(ctx->r3) < 0X65 ? 1 : 0;
L_802769F0:
    // 0x802769F0: bne         $at, $zero, L_80276A9C
    if (ctx->r1 != 0) {
        // 0x802769F4: addiu       $t6, $zero, 0x64
        ctx->r14 = ADD32(0, 0X64);
            goto L_80276A9C;
    }
    // 0x802769F4: addiu       $t6, $zero, 0x64
    ctx->r14 = ADD32(0, 0X64);
    // 0x802769F8: b           L_80276A9C
    // 0x802769FC: sh          $t6, 0x1C($a3)
    MEM_H(0X1C, ctx->r7) = ctx->r14;
        goto L_80276A9C;
    // 0x802769FC: sh          $t6, 0x1C($a3)
    MEM_H(0X1C, ctx->r7) = ctx->r14;
L_80276A00:
    // 0x80276A00: sh          $zero, 0x1C($a3)
    MEM_H(0X1C, ctx->r7) = 0;
    // 0x80276A04: lw          $v0, 0x3B20($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X3B20);
    // 0x80276A08: nop

    // 0x80276A0C: lw          $v1, 0x90($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X90);
    // 0x80276A10: nop

    // 0x80276A14: beq         $v1, $zero, L_80276A6C
    if (ctx->r3 == 0) {
        // 0x80276A18: nop
    
            goto L_80276A6C;
    }
    // 0x80276A18: nop

    // 0x80276A1C: lhu         $t7, 0x6A($v0)
    ctx->r15 = MEM_HU(ctx->r2, 0X6A);
    // 0x80276A20: nop

    // 0x80276A24: slti        $at, $t7, 0x6
    ctx->r1 = SIGNED(ctx->r15) < 0X6 ? 1 : 0;
    // 0x80276A28: bne         $at, $zero, L_80276A6C
    if (ctx->r1 != 0) {
        // 0x80276A2C: nop
    
            goto L_80276A6C;
    }
    // 0x80276A2C: nop

    // 0x80276A30: lw          $t8, 0x40($a3)
    ctx->r24 = MEM_W(ctx->r7, 0X40);
    // 0x80276A34: lw          $t0, 0xC8($v1)
    ctx->r8 = MEM_W(ctx->r3, 0XC8);
    // 0x80276A38: lw          $t9, 0xC8($t8)
    ctx->r25 = MEM_W(ctx->r24, 0XC8);
    // 0x80276A3C: nop

    // 0x80276A40: bne         $t9, $t0, L_80276A9C
    if (ctx->r25 != ctx->r8) {
        // 0x80276A44: nop
    
            goto L_80276A9C;
    }
    // 0x80276A44: nop

    // 0x80276A48: lhu         $t1, 0x18($a3)
    ctx->r9 = MEM_HU(ctx->r7, 0X18);
    // 0x80276A4C: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80276A50: bne         $t1, $at, L_80276A9C
    if (ctx->r9 != ctx->r1) {
        // 0x80276A54: nop
    
            goto L_80276A9C;
    }
    // 0x80276A54: nop

    // 0x80276A58: lhu         $t2, 0x2($a3)
    ctx->r10 = MEM_HU(ctx->r7, 0X2);
    // 0x80276A5C: nop

    // 0x80276A60: ori         $t3, $t2, 0x40
    ctx->r11 = ctx->r10 | 0X40;
    // 0x80276A64: b           L_80276A9C
    // 0x80276A68: sh          $t3, 0x2($a3)
    MEM_H(0X2, ctx->r7) = ctx->r11;
        goto L_80276A9C;
    // 0x80276A68: sh          $t3, 0x2($a3)
    MEM_H(0X2, ctx->r7) = ctx->r11;
L_80276A6C:
    // 0x80276A6C: lhu         $t4, 0x18($a3)
    ctx->r12 = MEM_HU(ctx->r7, 0X18);
    // 0x80276A70: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80276A74: bne         $t4, $at, L_80276A9C
    if (ctx->r12 != ctx->r1) {
        // 0x80276A78: nop
    
            goto L_80276A9C;
    }
    // 0x80276A78: nop

    // 0x80276A7C: lh          $t5, 0x16($a3)
    ctx->r13 = MEM_H(ctx->r7, 0X16);
    // 0x80276A80: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x80276A84: bne         $t5, $at, L_80276A9C
    if (ctx->r13 != ctx->r1) {
        // 0x80276A88: nop
    
            goto L_80276A9C;
    }
    // 0x80276A88: nop

    // 0x80276A8C: lhu         $t6, 0x2($a3)
    ctx->r14 = MEM_HU(ctx->r7, 0X2);
    // 0x80276A90: nop

    // 0x80276A94: ori         $t7, $t6, 0x40
    ctx->r15 = ctx->r14 | 0X40;
    // 0x80276A98: sh          $t7, 0x2($a3)
    MEM_H(0X2, ctx->r7) = ctx->r15;
L_80276A9C:
    // 0x80276A9C: lhu         $v0, 0x1E($a3)
    ctx->r2 = MEM_HU(ctx->r7, 0X1E);
    // 0x80276AA0: nop

    // 0x80276AA4: slti        $v1, $v0, 0x3D
    ctx->r3 = SIGNED(ctx->r2) < 0X3D ? 1 : 0;
    // 0x80276AA8: addiu       $t8, $v0, 0x1
    ctx->r24 = ADD32(ctx->r2, 0X1);
    // 0x80276AAC: bne         $v1, $zero, L_80276AC4
    if (ctx->r3 != 0) {
        // 0x80276AB0: sh          $t8, 0x1E($a3)
        MEM_H(0X1E, ctx->r7) = ctx->r24;
            goto L_80276AC4;
    }
    // 0x80276AB0: sh          $t8, 0x1E($a3)
    MEM_H(0X1E, ctx->r7) = ctx->r24;
    // 0x80276AB4: lhu         $t9, 0x2($a3)
    ctx->r25 = MEM_HU(ctx->r7, 0X2);
    // 0x80276AB8: nop

    // 0x80276ABC: ori         $t0, $t9, 0x200
    ctx->r8 = ctx->r25 | 0X200;
    // 0x80276AC0: sh          $t0, 0x2($a3)
    MEM_H(0X2, ctx->r7) = ctx->r8;
L_80276AC4:
    // 0x80276AC4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80276AC8:
    // 0x80276AC8: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x80276ACC: jr          $ra
    // 0x80276AD0: nop

    return;
    // 0x80276AD0: nop

;}
