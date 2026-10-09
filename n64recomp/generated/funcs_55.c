#include "iss64_recomp.h"
#include "funcs.h"

RECOMP_FUNC void ovl_8024B800_func_80267DC4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80267DC4: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x80267DC8: swc1        $f20, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f20.u32l;
    // 0x80267DCC: sw          $fp, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r30;
    // 0x80267DD0: sw          $s7, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r23;
    // 0x80267DD4: sw          $s6, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r22;
    // 0x80267DD8: sw          $s5, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r21;
    // 0x80267DDC: sw          $s3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r19;
    // 0x80267DE0: sw          $s2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r18;
    // 0x80267DE4: sw          $s1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r17;
    // 0x80267DE8: mtc1        $a2, $f20
    ctx->f20.u32l = ctx->r6;
    // 0x80267DEC: or          $s5, $a0, $zero
    ctx->r21 = ctx->r4 | 0;
    // 0x80267DF0: or          $s6, $a1, $zero
    ctx->r22 = ctx->r5 | 0;
    // 0x80267DF4: andi        $s7, $a3, 0xFFFF
    ctx->r23 = ctx->r7 & 0XFFFF;
    // 0x80267DF8: sw          $ra, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r31;
    // 0x80267DFC: sw          $s4, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r20;
    // 0x80267E00: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x80267E04: swc1        $f21, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x80267E08: sw          $a3, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r7;
    // 0x80267E0C: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    // 0x80267E10: or          $s2, $zero, $zero
    ctx->r18 = 0 | 0;
    // 0x80267E14: or          $s3, $a0, $zero
    ctx->r19 = ctx->r4 | 0;
    // 0x80267E18: addiu       $fp, $zero, 0xF8
    ctx->r30 = ADD32(0, 0XF8);
L_80267E1C:
    // 0x80267E1C: lhu         $t6, 0x318($s3)
    ctx->r14 = MEM_HU(ctx->r19, 0X318);
    // 0x80267E20: lw          $t8, 0x18($s5)
    ctx->r24 = MEM_W(ctx->r21, 0X18);
    // 0x80267E24: multu       $t6, $fp
    result = U64(U32(ctx->r14)) * U64(U32(ctx->r30)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80267E28: lui         $t9, 0x8012
    ctx->r25 = S32(0X8012 << 16);
    // 0x80267E2C: lw          $t9, 0xB24($t9)
    ctx->r25 = MEM_W(ctx->r25, 0XB24);
    // 0x80267E30: lui         $a1, 0x8028
    ctx->r5 = S32(0X8028 << 16);
    // 0x80267E34: addiu       $a1, $a1, -0x337C
    ctx->r5 = ADD32(ctx->r5, -0X337C);
    // 0x80267E38: mflo        $t7
    ctx->r15 = lo;
    // 0x80267E3C: addu        $s0, $t7, $t8
    ctx->r16 = ADD32(ctx->r15, ctx->r24);
    // 0x80267E40: beq         $s0, $t9, L_80267EB8
    if (ctx->r16 == ctx->r25) {
        // 0x80267E44: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80267EB8;
    }
    // 0x80267E44: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80267E48: jal         0x8026F2EC
    // 0x80267E4C: or          $s4, $s7, $zero
    ctx->r20 = ctx->r23 | 0;
    ovl_8024B800_func_8026F2EC(rdram, ctx);
        goto after_0;
    // 0x80267E4C: or          $s4, $s7, $zero
    ctx->r20 = ctx->r23 | 0;
    after_0:
    // 0x80267E50: bne         $s1, $zero, L_80267E9C
    if (ctx->r17 != 0) {
        // 0x80267E54: andi        $a1, $s1, 0xFFFF
        ctx->r5 = ctx->r17 & 0XFFFF;
            goto L_80267E9C;
    }
    // 0x80267E54: andi        $a1, $s1, 0xFFFF
    ctx->r5 = ctx->r17 & 0XFFFF;
    // 0x80267E58: lhu         $t0, 0x2C($s0)
    ctx->r8 = MEM_HU(ctx->r16, 0X2C);
    // 0x80267E5C: nop

    // 0x80267E60: andi        $t1, $t0, 0x1
    ctx->r9 = ctx->r8 & 0X1;
    // 0x80267E64: beq         $t1, $zero, L_80267E9C
    if (ctx->r9 == 0) {
        // 0x80267E68: andi        $a1, $s1, 0xFFFF
        ctx->r5 = ctx->r17 & 0XFFFF;
            goto L_80267E9C;
    }
    // 0x80267E68: andi        $a1, $s1, 0xFFFF
    ctx->r5 = ctx->r17 & 0XFFFF;
    // 0x80267E6C: lhu         $t2, 0x12($s0)
    ctx->r10 = MEM_HU(ctx->r16, 0X12);
    // 0x80267E70: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80267E74: andi        $t3, $t2, 0x2
    ctx->r11 = ctx->r10 & 0X2;
    // 0x80267E78: bne         $t3, $zero, L_80267E9C
    if (ctx->r11 != 0) {
        // 0x80267E7C: andi        $a1, $s1, 0xFFFF
        ctx->r5 = ctx->r17 & 0XFFFF;
            goto L_80267E9C;
    }
    // 0x80267E7C: andi        $a1, $s1, 0xFFFF
    ctx->r5 = ctx->r17 & 0XFFFF;
    // 0x80267E80: jal         0x8024BC08
    // 0x80267E84: addiu       $a1, $zero, 0x30
    ctx->r5 = ADD32(0, 0X30);
    ovl_8024B800_func_8024BC08(rdram, ctx);
        goto after_1;
    // 0x80267E84: addiu       $a1, $zero, 0x30
    ctx->r5 = ADD32(0, 0X30);
    after_1:
    // 0x80267E88: lhu         $t4, 0x18($s0)
    ctx->r12 = MEM_HU(ctx->r16, 0X18);
    // 0x80267E8C: nop

    // 0x80267E90: ori         $t5, $t4, 0x810
    ctx->r13 = ctx->r12 | 0X810;
    // 0x80267E94: sh          $t5, 0x18($s0)
    MEM_H(0X18, ctx->r16) = ctx->r13;
    // 0x80267E98: andi        $a1, $s1, 0xFFFF
    ctx->r5 = ctx->r17 & 0XFFFF;
L_80267E9C:
    // 0x80267E9C: mfc1        $a3, $f20
    ctx->r7 = (int32_t)ctx->f20.u32l;
    // 0x80267EA0: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x80267EA4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80267EA8: jal         0x80267C54
    // 0x80267EAC: or          $a2, $s6, $zero
    ctx->r6 = ctx->r22 | 0;
    ovl_8024B800_func_80267C54(rdram, ctx);
        goto after_2;
    // 0x80267EAC: or          $a2, $s6, $zero
    ctx->r6 = ctx->r22 | 0;
    after_2:
    // 0x80267EB0: sltu        $at, $s1, $s4
    ctx->r1 = ctx->r17 < ctx->r20 ? 1 : 0;
    // 0x80267EB4: beq         $at, $zero, L_80267EC8
    if (ctx->r1 == 0) {
        // 0x80267EB8: addiu       $s2, $s2, 0x8
        ctx->r18 = ADD32(ctx->r18, 0X8);
            goto L_80267EC8;
    }
L_80267EB8:
    // 0x80267EB8: addiu       $s2, $s2, 0x8
    ctx->r18 = ADD32(ctx->r18, 0X8);
    // 0x80267EBC: addiu       $at, $zero, 0x58
    ctx->r1 = ADD32(0, 0X58);
    // 0x80267EC0: bne         $s2, $at, L_80267E1C
    if (ctx->r18 != ctx->r1) {
        // 0x80267EC4: addiu       $s3, $s3, 0x8
        ctx->r19 = ADD32(ctx->r19, 0X8);
            goto L_80267E1C;
    }
    // 0x80267EC4: addiu       $s3, $s3, 0x8
    ctx->r19 = ADD32(ctx->r19, 0X8);
L_80267EC8:
    // 0x80267EC8: lw          $ra, 0x44($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X44);
    // 0x80267ECC: lwc1        $f21, 0x18($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X18);
    // 0x80267ED0: lwc1        $f20, 0x1C($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x80267ED4: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x80267ED8: lw          $s1, 0x24($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X24);
    // 0x80267EDC: lw          $s2, 0x28($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X28);
    // 0x80267EE0: lw          $s3, 0x2C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X2C);
    // 0x80267EE4: lw          $s4, 0x30($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X30);
    // 0x80267EE8: lw          $s5, 0x34($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X34);
    // 0x80267EEC: lw          $s6, 0x38($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X38);
    // 0x80267EF0: lw          $s7, 0x3C($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X3C);
    // 0x80267EF4: lw          $fp, 0x40($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X40);
    // 0x80267EF8: jr          $ra
    // 0x80267EFC: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    return;
    // 0x80267EFC: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
;}
RECOMP_FUNC void ovl_8024B800_func_80267F00(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80267F00: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x80267F04: sw          $s5, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r21;
    // 0x80267F08: sw          $s6, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r22;
    // 0x80267F0C: sw          $s4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r20;
    // 0x80267F10: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x80267F14: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x80267F18: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x80267F1C: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80267F20: lui         $s5, 0x8028
    ctx->r21 = S32(0X8028 << 16);
    // 0x80267F24: or          $s3, $a0, $zero
    ctx->r19 = ctx->r4 | 0;
    // 0x80267F28: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x80267F2C: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x80267F30: addiu       $s5, $s5, -0x336C
    ctx->r21 = ADD32(ctx->r21, -0X336C);
    // 0x80267F34: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    // 0x80267F38: or          $s2, $a0, $zero
    ctx->r18 = ctx->r4 | 0;
    // 0x80267F3C: addiu       $s4, $zero, 0xF8
    ctx->r20 = ADD32(0, 0XF8);
    // 0x80267F40: addiu       $s6, $zero, 0x58
    ctx->r22 = ADD32(0, 0X58);
L_80267F44:
    // 0x80267F44: lhu         $t6, 0x318($s2)
    ctx->r14 = MEM_HU(ctx->r18, 0X318);
    // 0x80267F48: lw          $t8, 0x18($s3)
    ctx->r24 = MEM_W(ctx->r19, 0X18);
    // 0x80267F4C: multu       $t6, $s4
    result = U64(U32(ctx->r14)) * U64(U32(ctx->r20)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80267F50: or          $a1, $s5, $zero
    ctx->r5 = ctx->r21 | 0;
    // 0x80267F54: mflo        $t7
    ctx->r15 = lo;
    // 0x80267F58: addu        $a0, $t7, $t8
    ctx->r4 = ADD32(ctx->r15, ctx->r24);
    // 0x80267F5C: jal         0x8026F2EC
    // 0x80267F60: nop

    ovl_8024B800_func_8026F2EC(rdram, ctx);
        goto after_0;
    // 0x80267F60: nop

    after_0:
    // 0x80267F64: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x80267F68: sltiu       $at, $s0, 0x3
    ctx->r1 = ctx->r16 < 0X3 ? 1 : 0;
    // 0x80267F6C: beq         $at, $zero, L_80267F7C
    if (ctx->r1 == 0) {
        // 0x80267F70: addiu       $s1, $s1, 0x8
        ctx->r17 = ADD32(ctx->r17, 0X8);
            goto L_80267F7C;
    }
    // 0x80267F70: addiu       $s1, $s1, 0x8
    ctx->r17 = ADD32(ctx->r17, 0X8);
    // 0x80267F74: bne         $s1, $s6, L_80267F44
    if (ctx->r17 != ctx->r22) {
        // 0x80267F78: addiu       $s2, $s2, 0x8
        ctx->r18 = ADD32(ctx->r18, 0X8);
            goto L_80267F44;
    }
    // 0x80267F78: addiu       $s2, $s2, 0x8
    ctx->r18 = ADD32(ctx->r18, 0X8);
L_80267F7C:
    // 0x80267F7C: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x80267F80: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80267F84: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x80267F88: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x80267F8C: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x80267F90: lw          $s4, 0x28($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X28);
    // 0x80267F94: lw          $s5, 0x2C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X2C);
    // 0x80267F98: lw          $s6, 0x30($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X30);
    // 0x80267F9C: jr          $ra
    // 0x80267FA0: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    return;
    // 0x80267FA0: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void ovl_8024B800_func_80267FA4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80267FA4: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x80267FA8: sw          $ra, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r31;
    // 0x80267FAC: sw          $s4, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r20;
    // 0x80267FB0: or          $s4, $a0, $zero
    ctx->r20 = ctx->r4 | 0;
    // 0x80267FB4: sw          $fp, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r30;
    // 0x80267FB8: sw          $s7, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r23;
    // 0x80267FBC: sw          $s6, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r22;
    // 0x80267FC0: sw          $s5, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r21;
    // 0x80267FC4: sw          $s3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r19;
    // 0x80267FC8: sw          $s2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r18;
    // 0x80267FCC: sw          $s1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r17;
    // 0x80267FD0: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x80267FD4: swc1        $f21, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x80267FD8: swc1        $f20, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f20.u32l;
    // 0x80267FDC: jal         0x80267A3C
    // 0x80267FE0: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    ovl_8024B800_func_80267A3C(rdram, ctx);
        goto after_0;
    // 0x80267FE0: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_0:
    // 0x80267FE4: lui         $s5, 0x8012
    ctx->r21 = S32(0X8012 << 16);
    // 0x80267FE8: addiu       $s5, $s5, 0xB24
    ctx->r21 = ADD32(ctx->r21, 0XB24);
    // 0x80267FEC: lw          $v0, 0x0($s5)
    ctx->r2 = MEM_W(ctx->r21, 0X0);
    // 0x80267FF0: lui         $at, 0x8028
    ctx->r1 = S32(0X8028 << 16);
    // 0x80267FF4: lwc1        $f4, 0xBC($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0XBC);
    // 0x80267FF8: lwc1        $f9, -0x2CB8($at)
    ctx->f_odd[(9 - 1) * 2] = MEM_W(ctx->r1, -0X2CB8);
    // 0x80267FFC: lwc1        $f8, -0x2CB4($at)
    ctx->f8.u32l = MEM_W(ctx->r1, -0X2CB4);
    // 0x80268000: cvt.d.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.d = CVT_D_S(ctx->f4.fl);
    // 0x80268004: add.d       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f8.d); 
    ctx->f10.d = ctx->f6.d + ctx->f8.d;
    // 0x80268008: lui         $t6, 0x8028
    ctx->r14 = S32(0X8028 << 16);
    // 0x8026800C: cvt.s.d     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f16.fl = CVT_S_D(ctx->f10.d);
    // 0x80268010: addiu       $t6, $t6, -0x346C
    ctx->r14 = ADD32(ctx->r14, -0X346C);
    // 0x80268014: swc1        $f16, 0xBC($v0)
    MEM_W(0XBC, ctx->r2) = ctx->f16.u32l;
    // 0x80268018: lw          $t7, 0x0($s5)
    ctx->r15 = MEM_W(ctx->r21, 0X0);
    // 0x8026801C: lui         $fp, 0x8028
    ctx->r30 = S32(0X8028 << 16);
    // 0x80268020: mov.s       $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    ctx->f20.fl = ctx->f0.fl;
    // 0x80268024: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    // 0x80268028: addiu       $fp, $fp, -0x337C
    ctx->r30 = ADD32(ctx->r30, -0X337C);
    // 0x8026802C: or          $s2, $zero, $zero
    ctx->r18 = 0 | 0;
    // 0x80268030: or          $s3, $s4, $zero
    ctx->r19 = ctx->r20 | 0;
    // 0x80268034: addiu       $s7, $zero, 0x58
    ctx->r23 = ADD32(0, 0X58);
    // 0x80268038: addiu       $s6, $zero, 0xF8
    ctx->r22 = ADD32(0, 0XF8);
    // 0x8026803C: sw          $t6, 0x28($t7)
    MEM_W(0X28, ctx->r15) = ctx->r14;
L_80268040:
    // 0x80268040: lhu         $t8, 0x318($s3)
    ctx->r24 = MEM_HU(ctx->r19, 0X318);
    // 0x80268044: lw          $t0, 0x18($s4)
    ctx->r8 = MEM_W(ctx->r20, 0X18);
    // 0x80268048: multu       $t8, $s6
    result = U64(U32(ctx->r24)) * U64(U32(ctx->r22)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8026804C: lw          $t1, 0x0($s5)
    ctx->r9 = MEM_W(ctx->r21, 0X0);
    // 0x80268050: mflo        $t9
    ctx->r25 = lo;
    // 0x80268054: addu        $s0, $t9, $t0
    ctx->r16 = ADD32(ctx->r25, ctx->r8);
    // 0x80268058: beq         $s0, $t1, L_802680B4
    if (ctx->r16 == ctx->r9) {
        // 0x8026805C: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_802680B4;
    }
    // 0x8026805C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80268060: jal         0x8026F2EC
    // 0x80268064: or          $a1, $fp, $zero
    ctx->r5 = ctx->r30 | 0;
    ovl_8024B800_func_8026F2EC(rdram, ctx);
        goto after_1;
    // 0x80268064: or          $a1, $fp, $zero
    ctx->r5 = ctx->r30 | 0;
    after_1:
    // 0x80268068: andi        $a1, $s1, 0xFFFF
    ctx->r5 = ctx->r17 & 0XFFFF;
    // 0x8026806C: lui         $a2, 0x8028
    ctx->r6 = S32(0X8028 << 16);
    // 0x80268070: mfc1        $a3, $f20
    ctx->r7 = (int32_t)ctx->f20.u32l;
    // 0x80268074: addiu       $a2, $a2, -0x3164
    ctx->r6 = ADD32(ctx->r6, -0X3164);
    // 0x80268078: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x8026807C: jal         0x80267C54
    // 0x80268080: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_8024B800_func_80267C54(rdram, ctx);
        goto after_2;
    // 0x80268080: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_2:
    // 0x80268084: lhu         $t2, 0x8($s4)
    ctx->r10 = MEM_HU(ctx->r20, 0X8);
    // 0x80268088: addiu       $v0, $zero, 0x3C
    ctx->r2 = ADD32(0, 0X3C);
    // 0x8026808C: andi        $t3, $t2, 0x1
    ctx->r11 = ctx->r10 & 0X1;
    // 0x80268090: beq         $t3, $zero, L_802680A0
    if (ctx->r11 == 0) {
        // 0x80268094: nop
    
            goto L_802680A0;
    }
    // 0x80268094: nop

    // 0x80268098: b           L_802680A0
    // 0x8026809C: addiu       $v0, $zero, -0x3C
    ctx->r2 = ADD32(0, -0X3C);
        goto L_802680A0;
    // 0x8026809C: addiu       $v0, $zero, -0x3C
    ctx->r2 = ADD32(0, -0X3C);
L_802680A0:
    // 0x802680A0: lh          $t4, 0x2E($s0)
    ctx->r12 = MEM_H(ctx->r16, 0X2E);
    // 0x802680A4: sltiu       $at, $s1, 0x3
    ctx->r1 = ctx->r17 < 0X3 ? 1 : 0;
    // 0x802680A8: addu        $t5, $t4, $v0
    ctx->r13 = ADD32(ctx->r12, ctx->r2);
    // 0x802680AC: beq         $at, $zero, L_802680C0
    if (ctx->r1 == 0) {
        // 0x802680B0: sh          $t5, 0x2E($s0)
        MEM_H(0X2E, ctx->r16) = ctx->r13;
            goto L_802680C0;
    }
    // 0x802680B0: sh          $t5, 0x2E($s0)
    MEM_H(0X2E, ctx->r16) = ctx->r13;
L_802680B4:
    // 0x802680B4: addiu       $s2, $s2, 0x8
    ctx->r18 = ADD32(ctx->r18, 0X8);
    // 0x802680B8: bne         $s2, $s7, L_80268040
    if (ctx->r18 != ctx->r23) {
        // 0x802680BC: addiu       $s3, $s3, 0x8
        ctx->r19 = ADD32(ctx->r19, 0X8);
            goto L_80268040;
    }
    // 0x802680BC: addiu       $s3, $s3, 0x8
    ctx->r19 = ADD32(ctx->r19, 0X8);
L_802680C0:
    // 0x802680C0: lw          $ra, 0x44($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X44);
    // 0x802680C4: lwc1        $f21, 0x18($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X18);
    // 0x802680C8: lwc1        $f20, 0x1C($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x802680CC: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x802680D0: lw          $s1, 0x24($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X24);
    // 0x802680D4: lw          $s2, 0x28($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X28);
    // 0x802680D8: lw          $s3, 0x2C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X2C);
    // 0x802680DC: lw          $s4, 0x30($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X30);
    // 0x802680E0: lw          $s5, 0x34($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X34);
    // 0x802680E4: lw          $s6, 0x38($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X38);
    // 0x802680E8: lw          $s7, 0x3C($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X3C);
    // 0x802680EC: lw          $fp, 0x40($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X40);
    // 0x802680F0: jr          $ra
    // 0x802680F4: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    return;
    // 0x802680F4: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
;}
RECOMP_FUNC void ovl_8024B800_func_802680F8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802680F8: addiu       $sp, $sp, -0x80
    ctx->r29 = ADD32(ctx->r29, -0X80);
    // 0x802680FC: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80268100: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80268104: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x80268108: jal         0x80267A3C
    // 0x8026810C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    ovl_8024B800_func_80267A3C(rdram, ctx);
        goto after_0;
    // 0x8026810C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_0:
    // 0x80268110: lh          $v0, 0x934($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X934);
    // 0x80268114: lui         $v1, 0x8012
    ctx->r3 = S32(0X8012 << 16);
    // 0x80268118: slti        $at, $v0, 0x124
    ctx->r1 = SIGNED(ctx->r2) < 0X124 ? 1 : 0;
    // 0x8026811C: bne         $at, $zero, L_80268134
    if (ctx->r1 != 0) {
        // 0x80268120: addiu       $v1, $v1, 0xB24
        ctx->r3 = ADD32(ctx->r3, 0XB24);
            goto L_80268134;
    }
    // 0x80268120: addiu       $v1, $v1, 0xB24
    ctx->r3 = ADD32(ctx->r3, 0XB24);
    // 0x80268124: addiu       $t6, $zero, 0x123
    ctx->r14 = ADD32(0, 0X123);
    // 0x80268128: sh          $t6, 0x934($s0)
    MEM_H(0X934, ctx->r16) = ctx->r14;
    // 0x8026812C: lh          $v0, 0x934($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X934);
    // 0x80268130: nop

L_80268134:
    // 0x80268134: slti        $at, $v0, -0x123
    ctx->r1 = SIGNED(ctx->r2) < -0X123 ? 1 : 0;
    // 0x80268138: beq         $at, $zero, L_80268148
    if (ctx->r1 == 0) {
        // 0x8026813C: lui         $t8, 0x8028
        ctx->r24 = S32(0X8028 << 16);
            goto L_80268148;
    }
    // 0x8026813C: lui         $t8, 0x8028
    ctx->r24 = S32(0X8028 << 16);
    // 0x80268140: addiu       $t7, $zero, -0x123
    ctx->r15 = ADD32(0, -0X123);
    // 0x80268144: sh          $t7, 0x934($s0)
    MEM_H(0X934, ctx->r16) = ctx->r15;
L_80268148:
    // 0x80268148: lw          $t9, 0x0($v1)
    ctx->r25 = MEM_W(ctx->r3, 0X0);
    // 0x8026814C: addiu       $t8, $t8, -0x33B0
    ctx->r24 = ADD32(ctx->r24, -0X33B0);
    // 0x80268150: addiu       $t0, $zero, 0x5
    ctx->r8 = ADD32(0, 0X5);
    // 0x80268154: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x80268158: sw          $t8, 0x28($t9)
    MEM_W(0X28, ctx->r25) = ctx->r24;
    // 0x8026815C: sh          $t0, 0xB6C($at)
    MEM_H(0XB6C, ctx->r1) = ctx->r8;
    // 0x80268160: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x80268164: lui         $at, 0x8028
    ctx->r1 = S32(0X8028 << 16);
    // 0x80268168: lwc1        $f4, 0xBC($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0XBC);
    // 0x8026816C: lwc1        $f9, -0x2CB0($at)
    ctx->f_odd[(9 - 1) * 2] = MEM_W(ctx->r1, -0X2CB0);
    // 0x80268170: lwc1        $f8, -0x2CAC($at)
    ctx->f8.u32l = MEM_W(ctx->r1, -0X2CAC);
    // 0x80268174: cvt.d.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.d = CVT_D_S(ctx->f4.fl);
    // 0x80268178: add.d       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f8.d); 
    ctx->f10.d = ctx->f6.d + ctx->f8.d;
    // 0x8026817C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80268180: cvt.s.d     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f16.fl = CVT_S_D(ctx->f10.d);
    // 0x80268184: addiu       $a1, $sp, 0x24
    ctx->r5 = ADD32(ctx->r29, 0X24);
    // 0x80268188: swc1        $f16, 0xBC($v0)
    MEM_W(0XBC, ctx->r2) = ctx->f16.u32l;
    // 0x8026818C: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x80268190: nop

    // 0x80268194: lw          $a2, 0x4C($v0)
    ctx->r6 = MEM_W(ctx->r2, 0X4C);
    // 0x80268198: lw          $a3, 0x44($v0)
    ctx->r7 = MEM_W(ctx->r2, 0X44);
    // 0x8026819C: jal         0x8027A42C
    // 0x802681A0: nop

    ovl_8024B800_func_8027A42C(rdram, ctx);
        goto after_1;
    // 0x802681A0: nop

    after_1:
    // 0x802681A4: lhu         $t1, 0x2C($sp)
    ctx->r9 = MEM_HU(ctx->r29, 0X2C);
    // 0x802681A8: addiu       $a1, $zero, 0xF8
    ctx->r5 = ADD32(0, 0XF8);
    // 0x802681AC: multu       $t1, $a1
    result = U64(U32(ctx->r9)) * U64(U32(ctx->r5)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x802681B0: lui         $v1, 0x8012
    ctx->r3 = S32(0X8012 << 16);
    // 0x802681B4: lw          $v0, 0x18($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X18);
    // 0x802681B8: addiu       $v1, $v1, 0xB24
    ctx->r3 = ADD32(ctx->r3, 0XB24);
    // 0x802681BC: lw          $t3, 0x0($v1)
    ctx->r11 = MEM_W(ctx->r3, 0X0);
    // 0x802681C0: lhu         $t4, 0x34($sp)
    ctx->r12 = MEM_HU(ctx->r29, 0X34);
    // 0x802681C4: mflo        $t2
    ctx->r10 = lo;
    // 0x802681C8: addu        $a0, $t2, $v0
    ctx->r4 = ADD32(ctx->r10, ctx->r2);
    // 0x802681CC: bne         $a0, $t3, L_802681E4
    if (ctx->r4 != ctx->r11) {
        // 0x802681D0: nop
    
            goto L_802681E4;
    }
    // 0x802681D0: nop

    // 0x802681D4: multu       $t4, $a1
    result = U64(U32(ctx->r12)) * U64(U32(ctx->r5)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x802681D8: mflo        $t5
    ctx->r13 = lo;
    // 0x802681DC: addu        $a0, $t5, $v0
    ctx->r4 = ADD32(ctx->r13, ctx->r2);
    // 0x802681E0: nop

L_802681E4:
    // 0x802681E4: lui         $a1, 0x8028
    ctx->r5 = S32(0X8028 << 16);
    // 0x802681E8: addiu       $a1, $a1, -0x33F0
    ctx->r5 = ADD32(ctx->r5, -0X33F0);
    // 0x802681EC: jal         0x8026F2EC
    // 0x802681F0: sw          $a0, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = ctx->r4;
    ovl_8024B800_func_8026F2EC(rdram, ctx);
        goto after_2;
    // 0x802681F0: sw          $a0, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = ctx->r4;
    after_2:
    // 0x802681F4: lw          $a0, 0x7C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X7C);
    // 0x802681F8: lui         $v1, 0x8012
    ctx->r3 = S32(0X8012 << 16);
    // 0x802681FC: lhu         $t6, 0x18($a0)
    ctx->r14 = MEM_HU(ctx->r4, 0X18);
    // 0x80268200: addiu       $v1, $v1, 0xB24
    ctx->r3 = ADD32(ctx->r3, 0XB24);
    // 0x80268204: ori         $t7, $t6, 0x2000
    ctx->r15 = ctx->r14 | 0X2000;
    // 0x80268208: sh          $t7, 0x18($a0)
    MEM_H(0X18, ctx->r4) = ctx->r15;
    // 0x8026820C: sw          $a0, 0x914($s0)
    MEM_W(0X914, ctx->r16) = ctx->r4;
    // 0x80268210: lw          $t8, 0x0($v1)
    ctx->r24 = MEM_W(ctx->r3, 0X0);
    // 0x80268214: nop

    // 0x80268218: lwc1        $f18, 0xBC($t8)
    ctx->f18.u32l = MEM_W(ctx->r24, 0XBC);
    // 0x8026821C: nop

    // 0x80268220: swc1        $f18, 0xBC($a0)
    MEM_W(0XBC, ctx->r4) = ctx->f18.u32l;
    // 0x80268224: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80268228: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8026822C: jr          $ra
    // 0x80268230: addiu       $sp, $sp, 0x80
    ctx->r29 = ADD32(ctx->r29, 0X80);
    return;
    // 0x80268230: addiu       $sp, $sp, 0x80
    ctx->r29 = ADD32(ctx->r29, 0X80);
;}
RECOMP_FUNC void ovl_8024B800_func_80268234(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80268234: addiu       $sp, $sp, -0x80
    ctx->r29 = ADD32(ctx->r29, -0X80);
    // 0x80268238: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8026823C: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80268240: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x80268244: jal         0x80267A3C
    // 0x80268248: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    ovl_8024B800_func_80267A3C(rdram, ctx);
        goto after_0;
    // 0x80268248: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_0:
    // 0x8026824C: lui         $v1, 0x8012
    ctx->r3 = S32(0X8012 << 16);
    // 0x80268250: addiu       $v1, $v1, 0xB24
    ctx->r3 = ADD32(ctx->r3, 0XB24);
    // 0x80268254: lw          $t7, 0x0($v1)
    ctx->r15 = MEM_W(ctx->r3, 0X0);
    // 0x80268258: lui         $t6, 0x8028
    ctx->r14 = S32(0X8028 << 16);
    // 0x8026825C: addiu       $t6, $t6, -0x338C
    ctx->r14 = ADD32(ctx->r14, -0X338C);
    // 0x80268260: addiu       $t8, $zero, 0x4
    ctx->r24 = ADD32(0, 0X4);
    // 0x80268264: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x80268268: sw          $t6, 0x28($t7)
    MEM_W(0X28, ctx->r15) = ctx->r14;
    // 0x8026826C: sh          $t8, 0xB6C($at)
    MEM_H(0XB6C, ctx->r1) = ctx->r24;
    // 0x80268270: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x80268274: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80268278: lw          $a2, 0x4C($v0)
    ctx->r6 = MEM_W(ctx->r2, 0X4C);
    // 0x8026827C: lw          $a3, 0x44($v0)
    ctx->r7 = MEM_W(ctx->r2, 0X44);
    // 0x80268280: jal         0x8027A42C
    // 0x80268284: addiu       $a1, $sp, 0x24
    ctx->r5 = ADD32(ctx->r29, 0X24);
    ovl_8024B800_func_8027A42C(rdram, ctx);
        goto after_1;
    // 0x80268284: addiu       $a1, $sp, 0x24
    ctx->r5 = ADD32(ctx->r29, 0X24);
    after_1:
    // 0x80268288: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x8026828C: lw          $v0, 0xB24($v0)
    ctx->r2 = MEM_W(ctx->r2, 0XB24);
    // 0x80268290: lui         $at, 0x8028
    ctx->r1 = S32(0X8028 << 16);
    // 0x80268294: lwc1        $f4, 0xBC($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0XBC);
    // 0x80268298: lwc1        $f9, -0x2CA8($at)
    ctx->f_odd[(9 - 1) * 2] = MEM_W(ctx->r1, -0X2CA8);
    // 0x8026829C: lwc1        $f8, -0x2CA4($at)
    ctx->f8.u32l = MEM_W(ctx->r1, -0X2CA4);
    // 0x802682A0: cvt.d.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.d = CVT_D_S(ctx->f4.fl);
    // 0x802682A4: add.d       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f8.d); 
    ctx->f10.d = ctx->f6.d + ctx->f8.d;
    // 0x802682A8: lui         $a1, 0x8028
    ctx->r5 = S32(0X8028 << 16);
    // 0x802682AC: cvt.s.d     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f16.fl = CVT_S_D(ctx->f10.d);
    // 0x802682B0: addiu       $a1, $a1, -0x3384
    ctx->r5 = ADD32(ctx->r5, -0X3384);
    // 0x802682B4: swc1        $f16, 0xBC($v0)
    MEM_W(0XBC, ctx->r2) = ctx->f16.u32l;
    // 0x802682B8: lhu         $t9, 0x2C($sp)
    ctx->r25 = MEM_HU(ctx->r29, 0X2C);
    // 0x802682BC: lw          $t1, 0x18($s0)
    ctx->r9 = MEM_W(ctx->r16, 0X18);
    // 0x802682C0: sll         $t0, $t9, 5
    ctx->r8 = S32(ctx->r25 << 5);
    // 0x802682C4: subu        $t0, $t0, $t9
    ctx->r8 = SUB32(ctx->r8, ctx->r25);
    // 0x802682C8: sll         $t0, $t0, 3
    ctx->r8 = S32(ctx->r8 << 3);
    // 0x802682CC: addu        $a0, $t0, $t1
    ctx->r4 = ADD32(ctx->r8, ctx->r9);
    // 0x802682D0: jal         0x8026F2EC
    // 0x802682D4: sw          $a0, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = ctx->r4;
    ovl_8024B800_func_8026F2EC(rdram, ctx);
        goto after_2;
    // 0x802682D4: sw          $a0, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = ctx->r4;
    after_2:
    // 0x802682D8: lw          $a0, 0x7C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X7C);
    // 0x802682DC: lui         $t7, 0x8012
    ctx->r15 = S32(0X8012 << 16);
    // 0x802682E0: lhu         $t2, 0x18($a0)
    ctx->r10 = MEM_HU(ctx->r4, 0X18);
    // 0x802682E4: lui         $a1, 0x8028
    ctx->r5 = S32(0X8028 << 16);
    // 0x802682E8: ori         $t3, $t2, 0x2000
    ctx->r11 = ctx->r10 | 0X2000;
    // 0x802682EC: sh          $t3, 0x18($a0)
    MEM_H(0X18, ctx->r4) = ctx->r11;
    // 0x802682F0: lh          $t4, 0x932($s0)
    ctx->r12 = MEM_H(ctx->r16, 0X932);
    // 0x802682F4: addiu       $a1, $a1, -0x3384
    ctx->r5 = ADD32(ctx->r5, -0X3384);
    // 0x802682F8: addiu       $t5, $t4, 0xA
    ctx->r13 = ADD32(ctx->r12, 0XA);
    // 0x802682FC: sh          $t5, 0x2E($a0)
    MEM_H(0X2E, ctx->r4) = ctx->r13;
    // 0x80268300: lh          $t6, 0x934($s0)
    ctx->r14 = MEM_H(ctx->r16, 0X934);
    // 0x80268304: nop

    // 0x80268308: sh          $t6, 0x30($a0)
    MEM_H(0X30, ctx->r4) = ctx->r14;
    // 0x8026830C: lw          $t7, 0xB24($t7)
    ctx->r15 = MEM_W(ctx->r15, 0XB24);
    // 0x80268310: nop

    // 0x80268314: lwc1        $f18, 0xBC($t7)
    ctx->f18.u32l = MEM_W(ctx->r15, 0XBC);
    // 0x80268318: sh          $zero, 0x24($a0)
    MEM_H(0X24, ctx->r4) = 0;
    // 0x8026831C: swc1        $f18, 0xBC($a0)
    MEM_W(0XBC, ctx->r4) = ctx->f18.u32l;
    // 0x80268320: lhu         $t8, 0x34($sp)
    ctx->r24 = MEM_HU(ctx->r29, 0X34);
    // 0x80268324: lw          $t0, 0x18($s0)
    ctx->r8 = MEM_W(ctx->r16, 0X18);
    // 0x80268328: sll         $t9, $t8, 5
    ctx->r25 = S32(ctx->r24 << 5);
    // 0x8026832C: subu        $t9, $t9, $t8
    ctx->r25 = SUB32(ctx->r25, ctx->r24);
    // 0x80268330: sll         $t9, $t9, 3
    ctx->r25 = S32(ctx->r25 << 3);
    // 0x80268334: addu        $a0, $t9, $t0
    ctx->r4 = ADD32(ctx->r25, ctx->r8);
    // 0x80268338: jal         0x8026F2EC
    // 0x8026833C: sw          $a0, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = ctx->r4;
    ovl_8024B800_func_8026F2EC(rdram, ctx);
        goto after_3;
    // 0x8026833C: sw          $a0, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = ctx->r4;
    after_3:
    // 0x80268340: lw          $a0, 0x7C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X7C);
    // 0x80268344: lui         $t6, 0x8012
    ctx->r14 = S32(0X8012 << 16);
    // 0x80268348: lhu         $t1, 0x18($a0)
    ctx->r9 = MEM_HU(ctx->r4, 0X18);
    // 0x8026834C: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x80268350: ori         $t2, $t1, 0x2000
    ctx->r10 = ctx->r9 | 0X2000;
    // 0x80268354: sh          $t2, 0x18($a0)
    MEM_H(0X18, ctx->r4) = ctx->r10;
    // 0x80268358: lh          $t3, 0x932($s0)
    ctx->r11 = MEM_H(ctx->r16, 0X932);
    // 0x8026835C: nop

    // 0x80268360: addiu       $t4, $t3, -0xA
    ctx->r12 = ADD32(ctx->r11, -0XA);
    // 0x80268364: sh          $t4, 0x2E($a0)
    MEM_H(0X2E, ctx->r4) = ctx->r12;
    // 0x80268368: lh          $t5, 0x934($s0)
    ctx->r13 = MEM_H(ctx->r16, 0X934);
    // 0x8026836C: nop

    // 0x80268370: sh          $t5, 0x30($a0)
    MEM_H(0X30, ctx->r4) = ctx->r13;
    // 0x80268374: lw          $t6, 0xB24($t6)
    ctx->r14 = MEM_W(ctx->r14, 0XB24);
    // 0x80268378: nop

    // 0x8026837C: lwc1        $f4, 0xBC($t6)
    ctx->f4.u32l = MEM_W(ctx->r14, 0XBC);
    // 0x80268380: sh          $t7, 0x24($a0)
    MEM_H(0X24, ctx->r4) = ctx->r15;
    // 0x80268384: swc1        $f4, 0xBC($a0)
    MEM_W(0XBC, ctx->r4) = ctx->f4.u32l;
    // 0x80268388: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8026838C: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80268390: jr          $ra
    // 0x80268394: addiu       $sp, $sp, 0x80
    ctx->r29 = ADD32(ctx->r29, 0X80);
    return;
    // 0x80268394: addiu       $sp, $sp, 0x80
    ctx->r29 = ADD32(ctx->r29, 0X80);
;}
RECOMP_FUNC void ovl_8024B800_func_80268398(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80268398: addiu       $sp, $sp, -0x98
    ctx->r29 = ADD32(ctx->r29, -0X98);
    // 0x8026839C: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x802683A0: sw          $s5, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r21;
    // 0x802683A4: sw          $s4, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r20;
    // 0x802683A8: sw          $s3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r19;
    // 0x802683AC: sw          $s2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r18;
    // 0x802683B0: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x802683B4: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x802683B8: lhu         $t6, 0x10($a0)
    ctx->r14 = MEM_HU(ctx->r4, 0X10);
    // 0x802683BC: lui         $v1, 0x8012
    ctx->r3 = S32(0X8012 << 16);
    // 0x802683C0: ori         $t7, $t6, 0x100
    ctx->r15 = ctx->r14 | 0X100;
    // 0x802683C4: addiu       $v1, $v1, 0xB24
    ctx->r3 = ADD32(ctx->r3, 0XB24);
    // 0x802683C8: sh          $t7, 0x10($a0)
    MEM_H(0X10, ctx->r4) = ctx->r15;
    // 0x802683CC: lw          $t9, 0x0($v1)
    ctx->r25 = MEM_W(ctx->r3, 0X0);
    // 0x802683D0: lui         $t8, 0x8028
    ctx->r24 = S32(0X8028 << 16);
    // 0x802683D4: addiu       $t8, $t8, -0x33D0
    ctx->r24 = ADD32(ctx->r24, -0X33D0);
    // 0x802683D8: sw          $t8, 0x28($t9)
    MEM_W(0X28, ctx->r25) = ctx->r24;
    // 0x802683DC: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x802683E0: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x802683E4: lwc1        $f6, 0x44($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0X44);
    // 0x802683E8: or          $s5, $a0, $zero
    ctx->r21 = ctx->r4 | 0;
    // 0x802683EC: c.lt.s      $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f4.fl < ctx->f6.fl;
    // 0x802683F0: lui         $at, 0x8028
    ctx->r1 = S32(0X8028 << 16);
    // 0x802683F4: bc1f        L_80268418
    if (!c1cs) {
        // 0x802683F8: nop
    
            goto L_80268418;
    }
    // 0x802683F8: nop

    // 0x802683FC: lui         $at, 0x8028
    ctx->r1 = S32(0X8028 << 16);
    // 0x80268400: lwc1        $f9, -0x2CA0($at)
    ctx->f_odd[(9 - 1) * 2] = MEM_W(ctx->r1, -0X2CA0);
    // 0x80268404: lwc1        $f8, -0x2C9C($at)
    ctx->f8.u32l = MEM_W(ctx->r1, -0X2C9C);
    // 0x80268408: nop

    // 0x8026840C: cvt.s.d     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.d); 
    ctx->f10.fl = CVT_S_D(ctx->f8.d);
    // 0x80268410: b           L_8026842C
    // 0x80268414: swc1        $f10, 0xBC($v0)
    MEM_W(0XBC, ctx->r2) = ctx->f10.u32l;
        goto L_8026842C;
    // 0x80268414: swc1        $f10, 0xBC($v0)
    MEM_W(0XBC, ctx->r2) = ctx->f10.u32l;
L_80268418:
    // 0x80268418: lwc1        $f17, -0x2C98($at)
    ctx->f_odd[(17 - 1) * 2] = MEM_W(ctx->r1, -0X2C98);
    // 0x8026841C: lwc1        $f16, -0x2C94($at)
    ctx->f16.u32l = MEM_W(ctx->r1, -0X2C94);
    // 0x80268420: nop

    // 0x80268424: cvt.s.d     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.d); 
    ctx->f18.fl = CVT_S_D(ctx->f16.d);
    // 0x80268428: swc1        $f18, 0xBC($v0)
    MEM_W(0XBC, ctx->r2) = ctx->f18.u32l;
L_8026842C:
    // 0x8026842C: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x80268430: or          $a0, $s5, $zero
    ctx->r4 = ctx->r21 | 0;
    // 0x80268434: lw          $a2, 0x4C($v0)
    ctx->r6 = MEM_W(ctx->r2, 0X4C);
    // 0x80268438: lw          $a3, 0x44($v0)
    ctx->r7 = MEM_W(ctx->r2, 0X44);
    // 0x8026843C: jal         0x8027A42C
    // 0x80268440: addiu       $a1, $sp, 0x38
    ctx->r5 = ADD32(ctx->r29, 0X38);
    ovl_8024B800_func_8027A42C(rdram, ctx);
        goto after_0;
    // 0x80268440: addiu       $a1, $sp, 0x38
    ctx->r5 = ADD32(ctx->r29, 0X38);
    after_0:
    // 0x80268444: lui         $s3, 0x8028
    ctx->r19 = S32(0X8028 << 16);
    // 0x80268448: addiu       $s3, $s3, -0x33C4
    ctx->r19 = ADD32(ctx->r19, -0X33C4);
    // 0x8026844C: addiu       $s0, $zero, 0x1
    ctx->r16 = ADD32(0, 0X1);
    // 0x80268450: addiu       $s1, $sp, 0x40
    ctx->r17 = ADD32(ctx->r29, 0X40);
    // 0x80268454: addiu       $s4, $zero, 0x5
    ctx->r20 = ADD32(0, 0X5);
    // 0x80268458: addiu       $s2, $zero, 0xF8
    ctx->r18 = ADD32(0, 0XF8);
L_8026845C:
    // 0x8026845C: lhu         $t0, 0x0($s1)
    ctx->r8 = MEM_HU(ctx->r17, 0X0);
    // 0x80268460: lw          $t2, 0x18($s5)
    ctx->r10 = MEM_W(ctx->r21, 0X18);
    // 0x80268464: multu       $t0, $s2
    result = U64(U32(ctx->r8)) * U64(U32(ctx->r18)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80268468: or          $a1, $s3, $zero
    ctx->r5 = ctx->r19 | 0;
    // 0x8026846C: mflo        $t1
    ctx->r9 = lo;
    // 0x80268470: addu        $a0, $t1, $t2
    ctx->r4 = ADD32(ctx->r9, ctx->r10);
    // 0x80268474: jal         0x8026F2EC
    // 0x80268478: sh          $s0, 0x24($a0)
    MEM_H(0X24, ctx->r4) = ctx->r16;
    ovl_8024B800_func_8026F2EC(rdram, ctx);
        goto after_1;
    // 0x80268478: sh          $s0, 0x24($a0)
    MEM_H(0X24, ctx->r4) = ctx->r16;
    after_1:
    // 0x8026847C: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x80268480: bne         $s0, $s4, L_8026845C
    if (ctx->r16 != ctx->r20) {
        // 0x80268484: addiu       $s1, $s1, 0x8
        ctx->r17 = ADD32(ctx->r17, 0X8);
            goto L_8026845C;
    }
    // 0x80268484: addiu       $s1, $s1, 0x8
    ctx->r17 = ADD32(ctx->r17, 0X8);
    // 0x80268488: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x8026848C: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x80268490: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x80268494: lw          $s2, 0x1C($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X1C);
    // 0x80268498: lw          $s3, 0x20($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X20);
    // 0x8026849C: lw          $s4, 0x24($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X24);
    // 0x802684A0: lw          $s5, 0x28($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X28);
    // 0x802684A4: jr          $ra
    // 0x802684A8: addiu       $sp, $sp, 0x98
    ctx->r29 = ADD32(ctx->r29, 0X98);
    return;
    // 0x802684A8: addiu       $sp, $sp, 0x98
    ctx->r29 = ADD32(ctx->r29, 0X98);
;}
RECOMP_FUNC void ovl_8024B800_func_802684AC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802684AC: addiu       $sp, $sp, -0xB8
    ctx->r29 = ADD32(ctx->r29, -0XB8);
    // 0x802684B0: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x802684B4: lui         $at, 0x8028
    ctx->r1 = S32(0X8028 << 16);
    // 0x802684B8: lui         $s0, 0x8012
    ctx->r16 = S32(0X8012 << 16);
    // 0x802684BC: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x802684C0: sw          $s6, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r22;
    // 0x802684C4: sw          $s5, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r21;
    // 0x802684C8: sw          $s4, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r20;
    // 0x802684CC: sw          $s3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r19;
    // 0x802684D0: sw          $s2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r18;
    // 0x802684D4: sw          $s1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r17;
    // 0x802684D8: lwc1        $f0, -0x2C90($at)
    ctx->f0.u32l = MEM_W(ctx->r1, -0X2C90);
    // 0x802684DC: addiu       $t6, $zero, 0x1DF
    ctx->r14 = ADD32(0, 0X1DF);
    // 0x802684E0: addiu       $s0, $s0, 0xB24
    ctx->r16 = ADD32(ctx->r16, 0XB24);
    // 0x802684E4: sh          $t6, 0x932($a0)
    MEM_H(0X932, ctx->r4) = ctx->r14;
    // 0x802684E8: lw          $t7, 0x0($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X0);
    // 0x802684EC: mtc1        $zero, $f12
    ctx->f12.u32l = 0;
    // 0x802684F0: lwc1        $f4, 0x4C($t7)
    ctx->f4.u32l = MEM_W(ctx->r15, 0X4C);
    // 0x802684F4: or          $s3, $a0, $zero
    ctx->r19 = ctx->r4 | 0;
    // 0x802684F8: c.lt.s      $f4, $f12
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f4.fl < ctx->f12.fl;
    // 0x802684FC: addiu       $t9, $zero, 0xFB
    ctx->r25 = ADD32(0, 0XFB);
    // 0x80268500: bc1f        L_80268518
    if (!c1cs) {
        // 0x80268504: addiu       $t4, $sp, 0x58
        ctx->r12 = ADD32(ctx->r29, 0X58);
            goto L_80268518;
    }
    // 0x80268504: addiu       $t4, $sp, 0x58
    ctx->r12 = ADD32(ctx->r29, 0X58);
    // 0x80268508: lui         $at, 0x8028
    ctx->r1 = S32(0X8028 << 16);
    // 0x8026850C: lwc1        $f0, -0x2C8C($at)
    ctx->f0.u32l = MEM_W(ctx->r1, -0X2C8C);
    // 0x80268510: addiu       $t8, $zero, -0x1DF
    ctx->r24 = ADD32(0, -0X1DF);
    // 0x80268514: sh          $t8, 0x932($a0)
    MEM_H(0X932, ctx->r4) = ctx->r24;
L_80268518:
    // 0x80268518: lui         $at, 0x8028
    ctx->r1 = S32(0X8028 << 16);
    // 0x8026851C: lwc1        $f2, -0x2C88($at)
    ctx->f2.u32l = MEM_W(ctx->r1, -0X2C88);
    // 0x80268520: sh          $t9, 0x934($s3)
    MEM_H(0X934, ctx->r19) = ctx->r25;
    // 0x80268524: lw          $t0, 0x0($s0)
    ctx->r8 = MEM_W(ctx->r16, 0X0);
    // 0x80268528: mfc1        $a2, $f0
    ctx->r6 = (int32_t)ctx->f0.u32l;
    // 0x8026852C: lwc1        $f6, 0x44($t0)
    ctx->f6.u32l = MEM_W(ctx->r8, 0X44);
    // 0x80268530: lui         $at, 0x8028
    ctx->r1 = S32(0X8028 << 16);
    // 0x80268534: c.lt.s      $f6, $f12
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f6.fl < ctx->f12.fl;
    // 0x80268538: addiu       $t1, $zero, -0xFB
    ctx->r9 = ADD32(0, -0XFB);
    // 0x8026853C: bc1f        L_8026854C
    if (!c1cs) {
        // 0x80268540: nop
    
            goto L_8026854C;
    }
    // 0x80268540: nop

    // 0x80268544: lwc1        $f2, -0x2C84($at)
    ctx->f2.u32l = MEM_W(ctx->r1, -0X2C84);
    // 0x80268548: sh          $t1, 0x934($s3)
    MEM_H(0X934, ctx->r19) = ctx->r9;
L_8026854C:
    // 0x8026854C: lh          $t2, 0x932($s3)
    ctx->r10 = MEM_H(ctx->r19, 0X932);
    // 0x80268550: lh          $t3, 0x934($s3)
    ctx->r11 = MEM_H(ctx->r19, 0X934);
    // 0x80268554: mtc1        $t2, $f8
    ctx->f8.u32l = ctx->r10;
    // 0x80268558: mtc1        $t3, $f10
    ctx->f10.u32l = ctx->r11;
    // 0x8026855C: mfc1        $a3, $f2
    ctx->r7 = (int32_t)ctx->f2.u32l;
    // 0x80268560: sw          $t4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r12;
    // 0x80268564: cvt.s.w     $f12, $f8
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    ctx->f12.fl = CVT_S_W(ctx->f8.u32l);
    // 0x80268568: jal         0x80272B1C
    // 0x8026856C: cvt.s.w     $f14, $f10
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 10);
    ctx->f14.fl = CVT_S_W(ctx->f10.u32l);
    ovl_8024B800_func_80272B1C(rdram, ctx);
        goto after_0;
    // 0x8026856C: cvt.s.w     $f14, $f10
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 10);
    ctx->f14.fl = CVT_S_W(ctx->f10.u32l);
    after_0:
    // 0x80268570: lwc1        $f16, 0x58($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X58);
    // 0x80268574: lw          $t5, 0x0($s0)
    ctx->r13 = MEM_W(ctx->r16, 0X0);
    // 0x80268578: lui         $t7, 0x8028
    ctx->r15 = S32(0X8028 << 16);
    // 0x8026857C: swc1        $f16, 0xBC($t5)
    MEM_W(0XBC, ctx->r13) = ctx->f16.u32l;
    // 0x80268580: lw          $t6, 0x0($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X0);
    // 0x80268584: addiu       $t7, $t7, -0x33C0
    ctx->r15 = ADD32(ctx->r15, -0X33C0);
    // 0x80268588: sh          $zero, 0x24($t6)
    MEM_H(0X24, ctx->r14) = 0;
    // 0x8026858C: lw          $t8, 0x0($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X0);
    // 0x80268590: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x80268594: sw          $t7, 0x28($t8)
    MEM_W(0X28, ctx->r24) = ctx->r15;
    // 0x80268598: lw          $v0, 0x0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X0);
    // 0x8026859C: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    // 0x802685A0: sw          $v0, 0xAF0($at)
    MEM_W(0XAF0, ctx->r1) = ctx->r2;
    // 0x802685A4: lw          $a3, 0x44($v0)
    ctx->r7 = MEM_W(ctx->r2, 0X44);
    // 0x802685A8: lw          $a2, 0x4C($v0)
    ctx->r6 = MEM_W(ctx->r2, 0X4C);
    // 0x802685AC: jal         0x8027A42C
    // 0x802685B0: addiu       $a1, $sp, 0x60
    ctx->r5 = ADD32(ctx->r29, 0X60);
    ovl_8024B800_func_8027A42C(rdram, ctx);
        goto after_1;
    // 0x802685B0: addiu       $a1, $sp, 0x60
    ctx->r5 = ADD32(ctx->r29, 0X60);
    after_1:
    // 0x802685B4: lui         $s0, 0x8012
    ctx->r16 = S32(0X8012 << 16);
    // 0x802685B8: lui         $s5, 0x8028
    ctx->r21 = S32(0X8028 << 16);
    // 0x802685BC: addiu       $s5, $s5, -0x33B8
    ctx->r21 = ADD32(ctx->r21, -0X33B8);
    // 0x802685C0: addiu       $s0, $s0, 0xAF4
    ctx->r16 = ADD32(ctx->r16, 0XAF4);
    // 0x802685C4: addiu       $s1, $zero, 0x1
    ctx->r17 = ADD32(0, 0X1);
    // 0x802685C8: addiu       $s2, $sp, 0x68
    ctx->r18 = ADD32(ctx->r29, 0X68);
    // 0x802685CC: addiu       $s6, $zero, 0x5
    ctx->r22 = ADD32(0, 0X5);
    // 0x802685D0: addiu       $s4, $zero, 0xF8
    ctx->r20 = ADD32(0, 0XF8);
L_802685D4:
    // 0x802685D4: lhu         $t9, 0x0($s2)
    ctx->r25 = MEM_HU(ctx->r18, 0X0);
    // 0x802685D8: lw          $t1, 0x18($s3)
    ctx->r9 = MEM_W(ctx->r19, 0X18);
    // 0x802685DC: multu       $t9, $s4
    result = U64(U32(ctx->r25)) * U64(U32(ctx->r20)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x802685E0: lwc1        $f18, 0x58($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X58);
    // 0x802685E4: or          $a1, $s5, $zero
    ctx->r5 = ctx->r21 | 0;
    // 0x802685E8: mflo        $t0
    ctx->r8 = lo;
    // 0x802685EC: addu        $t2, $t0, $t1
    ctx->r10 = ADD32(ctx->r8, ctx->r9);
    // 0x802685F0: sw          $t2, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r10;
    // 0x802685F4: swc1        $f18, 0xBC($t2)
    MEM_W(0XBC, ctx->r10) = ctx->f18.u32l;
    // 0x802685F8: lw          $t4, 0x0($s0)
    ctx->r12 = MEM_W(ctx->r16, 0X0);
    // 0x802685FC: nop

    // 0x80268600: sh          $s1, 0x24($t4)
    MEM_H(0X24, ctx->r12) = ctx->r17;
    // 0x80268604: lw          $v0, 0x0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X0);
    // 0x80268608: nop

    // 0x8026860C: lbu         $t5, 0x3($v0)
    ctx->r13 = MEM_BU(ctx->r2, 0X3);
    // 0x80268610: nop

    // 0x80268614: andi        $t6, $t5, 0xFFFE
    ctx->r14 = ctx->r13 & 0XFFFE;
    // 0x80268618: sb          $t6, 0x3($v0)
    MEM_B(0X3, ctx->r2) = ctx->r14;
    // 0x8026861C: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    // 0x80268620: jal         0x8026F2EC
    // 0x80268624: nop

    ovl_8024B800_func_8026F2EC(rdram, ctx);
        goto after_2;
    // 0x80268624: nop

    after_2:
    // 0x80268628: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x8026862C: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
    // 0x80268630: bne         $s1, $s6, L_802685D4
    if (ctx->r17 != ctx->r22) {
        // 0x80268634: addiu       $s2, $s2, 0x8
        ctx->r18 = ADD32(ctx->r18, 0X8);
            goto L_802685D4;
    }
    // 0x80268634: addiu       $s2, $s2, 0x8
    ctx->r18 = ADD32(ctx->r18, 0X8);
    // 0x80268638: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    // 0x8026863C: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x80268640: lw          $s1, 0x24($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X24);
    // 0x80268644: lw          $s2, 0x28($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X28);
    // 0x80268648: lw          $s3, 0x2C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X2C);
    // 0x8026864C: lw          $s4, 0x30($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X30);
    // 0x80268650: lw          $s5, 0x34($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X34);
    // 0x80268654: lw          $s6, 0x38($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X38);
    // 0x80268658: jr          $ra
    // 0x8026865C: addiu       $sp, $sp, 0xB8
    ctx->r29 = ADD32(ctx->r29, 0XB8);
    return;
    // 0x8026865C: addiu       $sp, $sp, 0xB8
    ctx->r29 = ADD32(ctx->r29, 0XB8);
;}
RECOMP_FUNC void ovl_8024B800_func_80268660(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80268660: addiu       $sp, $sp, -0x78
    ctx->r29 = ADD32(ctx->r29, -0X78);
    // 0x80268664: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80268668: sw          $a0, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->r4;
    // 0x8026866C: jal         0x80267A3C
    // 0x80268670: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    ovl_8024B800_func_80267A3C(rdram, ctx);
        goto after_0;
    // 0x80268670: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_0:
    // 0x80268674: lui         $v1, 0x8012
    ctx->r3 = S32(0X8012 << 16);
    // 0x80268678: addiu       $v1, $v1, 0xB24
    ctx->r3 = ADD32(ctx->r3, 0XB24);
    // 0x8026867C: lw          $t7, 0x0($v1)
    ctx->r15 = MEM_W(ctx->r3, 0X0);
    // 0x80268680: lui         $t6, 0x8028
    ctx->r14 = S32(0X8028 << 16);
    // 0x80268684: addiu       $t6, $t6, -0x33B0
    ctx->r14 = ADD32(ctx->r14, -0X33B0);
    // 0x80268688: lui         $t8, 0x8028
    ctx->r24 = S32(0X8028 << 16);
    // 0x8026868C: sw          $t6, 0x28($t7)
    MEM_W(0X28, ctx->r15) = ctx->r14;
    // 0x80268690: lh          $t8, -0x1B60($t8)
    ctx->r24 = MEM_H(ctx->r24, -0X1B60);
    // 0x80268694: addiu       $t1, $zero, 0x3
    ctx->r9 = ADD32(0, 0X3);
    // 0x80268698: andi        $t9, $t8, 0x1
    ctx->r25 = ctx->r24 & 0X1;
    // 0x8026869C: beq         $t9, $zero, L_802686B4
    if (ctx->r25 == 0) {
        // 0x802686A0: lui         $at, 0x8012
        ctx->r1 = S32(0X8012 << 16);
            goto L_802686B4;
    }
    // 0x802686A0: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x802686A4: addiu       $t0, $zero, 0x2
    ctx->r8 = ADD32(0, 0X2);
    // 0x802686A8: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x802686AC: b           L_802686B8
    // 0x802686B0: sh          $t0, 0xB6C($at)
    MEM_H(0XB6C, ctx->r1) = ctx->r8;
        goto L_802686B8;
    // 0x802686B0: sh          $t0, 0xB6C($at)
    MEM_H(0XB6C, ctx->r1) = ctx->r8;
L_802686B4:
    // 0x802686B4: sh          $t1, 0xB6C($at)
    MEM_H(0XB6C, ctx->r1) = ctx->r9;
L_802686B8:
    // 0x802686B8: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x802686BC: lw          $a0, 0x78($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X78);
    // 0x802686C0: lw          $a2, 0x4C($v0)
    ctx->r6 = MEM_W(ctx->r2, 0X4C);
    // 0x802686C4: lw          $a3, 0x44($v0)
    ctx->r7 = MEM_W(ctx->r2, 0X44);
    // 0x802686C8: jal         0x8027A42C
    // 0x802686CC: addiu       $a1, $sp, 0x1C
    ctx->r5 = ADD32(ctx->r29, 0X1C);
    ovl_8024B800_func_8027A42C(rdram, ctx);
        goto after_1;
    // 0x802686CC: addiu       $a1, $sp, 0x1C
    ctx->r5 = ADD32(ctx->r29, 0X1C);
    after_1:
    // 0x802686D0: lhu         $t2, 0x24($sp)
    ctx->r10 = MEM_HU(ctx->r29, 0X24);
    // 0x802686D4: lw          $t4, 0x78($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X78);
    // 0x802686D8: sll         $t3, $t2, 5
    ctx->r11 = S32(ctx->r10 << 5);
    // 0x802686DC: lw          $t5, 0x18($t4)
    ctx->r13 = MEM_W(ctx->r12, 0X18);
    // 0x802686E0: subu        $t3, $t3, $t2
    ctx->r11 = SUB32(ctx->r11, ctx->r10);
    // 0x802686E4: sll         $t3, $t3, 3
    ctx->r11 = S32(ctx->r11 << 3);
    // 0x802686E8: lui         $a1, 0x8028
    ctx->r5 = S32(0X8028 << 16);
    // 0x802686EC: addu        $a0, $t3, $t5
    ctx->r4 = ADD32(ctx->r11, ctx->r13);
    // 0x802686F0: sw          $a0, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->r4;
    // 0x802686F4: jal         0x8026F2EC
    // 0x802686F8: addiu       $a1, $a1, -0x3408
    ctx->r5 = ADD32(ctx->r5, -0X3408);
    ovl_8024B800_func_8026F2EC(rdram, ctx);
        goto after_2;
    // 0x802686F8: addiu       $a1, $a1, -0x3408
    ctx->r5 = ADD32(ctx->r5, -0X3408);
    after_2:
    // 0x802686FC: lw          $a0, 0x74($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X74);
    // 0x80268700: nop

    // 0x80268704: lhu         $t6, 0x18($a0)
    ctx->r14 = MEM_HU(ctx->r4, 0X18);
    // 0x80268708: nop

    // 0x8026870C: ori         $t7, $t6, 0x2000
    ctx->r15 = ctx->r14 | 0X2000;
    // 0x80268710: sh          $t7, 0x18($a0)
    MEM_H(0X18, ctx->r4) = ctx->r15;
    // 0x80268714: lw          $t8, 0x78($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X78);
    // 0x80268718: nop

    // 0x8026871C: sw          $a0, 0x914($t8)
    MEM_W(0X914, ctx->r24) = ctx->r4;
    // 0x80268720: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80268724: addiu       $sp, $sp, 0x78
    ctx->r29 = ADD32(ctx->r29, 0X78);
    // 0x80268728: jr          $ra
    // 0x8026872C: nop

    return;
    // 0x8026872C: nop

;}
RECOMP_FUNC void ovl_8024B800_func_80268730(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80268730: lui         $v1, 0x8012
    ctx->r3 = S32(0X8012 << 16);
    // 0x80268734: addiu       $v1, $v1, 0xB66
    ctx->r3 = ADD32(ctx->r3, 0XB66);
    // 0x80268738: lbu         $v0, 0x0($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X0);
    // 0x8026873C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80268740: sltiu       $at, $v0, 0x5
    ctx->r1 = ctx->r2 < 0X5 ? 1 : 0;
    // 0x80268744: beq         $at, $zero, L_802687F0
    if (ctx->r1 == 0) {
        // 0x80268748: sw          $ra, 0x14($sp)
        MEM_W(0X14, ctx->r29) = ctx->r31;
            goto L_802687F0;
    }
    // 0x80268748: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8026874C: sll         $t6, $v0, 2
    ctx->r14 = S32(ctx->r2 << 2);
    // 0x80268750: lui         $at, 0x8028
    ctx->r1 = S32(0X8028 << 16);
    // 0x80268754: addu        $at, $at, $t6
    gpr jr_addend_80268760 = ctx->r14;
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x80268758: lw          $t6, -0x2C80($at)
    ctx->r14 = ADD32(ctx->r1, -0X2C80);
    // 0x8026875C: nop

    // 0x80268760: jr          $t6
    // 0x80268764: nop

    switch (jr_addend_80268760 >> 2) {
        case 0: goto L_80268768; break;
        case 1: goto L_80268784; break;
        case 2: goto L_802687A0; break;
        case 3: goto L_802687BC; break;
        case 4: goto L_802687D8; break;
        default: switch_error(__func__, 0x80268760, 0x8027D380);
    }
    // 0x80268764: nop

L_80268768:
    // 0x80268768: jal         0x802680F8
    // 0x8026876C: nop

    ovl_8024B800_func_802680F8(rdram, ctx);
        goto after_0;
    // 0x8026876C: nop

    after_0:
    // 0x80268770: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x80268774: lbu         $v0, 0xB66($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0XB66);
    // 0x80268778: lui         $v1, 0x8012
    ctx->r3 = S32(0X8012 << 16);
    // 0x8026877C: b           L_802687F0
    // 0x80268780: addiu       $v1, $v1, 0xB66
    ctx->r3 = ADD32(ctx->r3, 0XB66);
        goto L_802687F0;
    // 0x80268780: addiu       $v1, $v1, 0xB66
    ctx->r3 = ADD32(ctx->r3, 0XB66);
L_80268784:
    // 0x80268784: jal         0x80268234
    // 0x80268788: nop

    ovl_8024B800_func_80268234(rdram, ctx);
        goto after_1;
    // 0x80268788: nop

    after_1:
    // 0x8026878C: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x80268790: lbu         $v0, 0xB66($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0XB66);
    // 0x80268794: lui         $v1, 0x8012
    ctx->r3 = S32(0X8012 << 16);
    // 0x80268798: b           L_802687F0
    // 0x8026879C: addiu       $v1, $v1, 0xB66
    ctx->r3 = ADD32(ctx->r3, 0XB66);
        goto L_802687F0;
    // 0x8026879C: addiu       $v1, $v1, 0xB66
    ctx->r3 = ADD32(ctx->r3, 0XB66);
L_802687A0:
    // 0x802687A0: jal         0x80267FA4
    // 0x802687A4: nop

    ovl_8024B800_func_80267FA4(rdram, ctx);
        goto after_2;
    // 0x802687A4: nop

    after_2:
    // 0x802687A8: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x802687AC: lbu         $v0, 0xB66($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0XB66);
    // 0x802687B0: lui         $v1, 0x8012
    ctx->r3 = S32(0X8012 << 16);
    // 0x802687B4: b           L_802687F0
    // 0x802687B8: addiu       $v1, $v1, 0xB66
    ctx->r3 = ADD32(ctx->r3, 0XB66);
        goto L_802687F0;
    // 0x802687B8: addiu       $v1, $v1, 0xB66
    ctx->r3 = ADD32(ctx->r3, 0XB66);
L_802687BC:
    // 0x802687BC: jal         0x80268398
    // 0x802687C0: nop

    ovl_8024B800_func_80268398(rdram, ctx);
        goto after_3;
    // 0x802687C0: nop

    after_3:
    // 0x802687C4: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x802687C8: lbu         $v0, 0xB66($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0XB66);
    // 0x802687CC: lui         $v1, 0x8012
    ctx->r3 = S32(0X8012 << 16);
    // 0x802687D0: b           L_802687F0
    // 0x802687D4: addiu       $v1, $v1, 0xB66
    ctx->r3 = ADD32(ctx->r3, 0XB66);
        goto L_802687F0;
    // 0x802687D4: addiu       $v1, $v1, 0xB66
    ctx->r3 = ADD32(ctx->r3, 0XB66);
L_802687D8:
    // 0x802687D8: jal         0x802684AC
    // 0x802687DC: nop

    ovl_8024B800_func_802684AC(rdram, ctx);
        goto after_4;
    // 0x802687DC: nop

    after_4:
    // 0x802687E0: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x802687E4: lui         $v1, 0x8012
    ctx->r3 = S32(0X8012 << 16);
    // 0x802687E8: lbu         $v0, 0xB66($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0XB66);
    // 0x802687EC: addiu       $v1, $v1, 0xB66
    ctx->r3 = ADD32(ctx->r3, 0XB66);
L_802687F0:
    // 0x802687F0: addiu       $t7, $v0, 0x1
    ctx->r15 = ADD32(ctx->r2, 0X1);
    // 0x802687F4: andi        $t8, $t7, 0xFF
    ctx->r24 = ctx->r15 & 0XFF;
    // 0x802687F8: slti        $at, $t8, 0x5
    ctx->r1 = SIGNED(ctx->r24) < 0X5 ? 1 : 0;
    // 0x802687FC: bne         $at, $zero, L_80268808
    if (ctx->r1 != 0) {
        // 0x80268800: sb          $t7, 0x0($v1)
        MEM_B(0X0, ctx->r3) = ctx->r15;
            goto L_80268808;
    }
    // 0x80268800: sb          $t7, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r15;
    // 0x80268804: sb          $zero, 0x0($v1)
    MEM_B(0X0, ctx->r3) = 0;
L_80268808:
    // 0x80268808: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8026880C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80268810: jr          $ra
    // 0x80268814: nop

    return;
    // 0x80268814: nop

;}
RECOMP_FUNC void ovl_8024B800_func_80268818(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80268818: addiu       $sp, $sp, -0x88
    ctx->r29 = ADD32(ctx->r29, -0X88);
    // 0x8026881C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80268820: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80268824: lw          $t7, 0x24($a0)
    ctx->r15 = MEM_W(ctx->r4, 0X24);
    // 0x80268828: lhu         $t6, 0xA($a0)
    ctx->r14 = MEM_HU(ctx->r4, 0XA);
    // 0x8026882C: lhu         $t8, 0xA($t7)
    ctx->r24 = MEM_HU(ctx->r15, 0XA);
    // 0x80268830: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x80268834: subu        $v0, $t6, $t8
    ctx->r2 = SUB32(ctx->r14, ctx->r24);
    // 0x80268838: bne         $v0, $v1, L_80268944
    if (ctx->r2 != ctx->r3) {
        // 0x8026883C: or          $s0, $a0, $zero
        ctx->r16 = ctx->r4 | 0;
            goto L_80268944;
    }
    // 0x8026883C: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x80268840: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x80268844: lhu         $v0, 0xB74($v0)
    ctx->r2 = MEM_HU(ctx->r2, 0XB74);
    // 0x80268848: lui         $t3, 0x8012
    ctx->r11 = S32(0X8012 << 16);
    // 0x8026884C: slti        $at, $v0, 0x2
    ctx->r1 = SIGNED(ctx->r2) < 0X2 ? 1 : 0;
    // 0x80268850: beq         $at, $zero, L_8026888C
    if (ctx->r1 == 0) {
        // 0x80268854: nop
    
            goto L_8026888C;
    }
    // 0x80268854: nop

    // 0x80268858: bne         $v1, $v0, L_80268944
    if (ctx->r3 != ctx->r2) {
        // 0x8026885C: lui         $t9, 0x8012
        ctx->r25 = S32(0X8012 << 16);
            goto L_80268944;
    }
    // 0x8026885C: lui         $t9, 0x8012
    ctx->r25 = S32(0X8012 << 16);
    // 0x80268860: lb          $t9, -0x309D($t9)
    ctx->r25 = MEM_B(ctx->r25, -0X309D);
    // 0x80268864: lui         $t1, 0x8028
    ctx->r9 = S32(0X8028 << 16);
    // 0x80268868: sll         $t0, $t9, 1
    ctx->r8 = S32(ctx->r25 << 1);
    // 0x8026886C: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x80268870: lui         $t2, 0x802C
    ctx->r10 = S32(0X802C << 16);
    // 0x80268874: lhu         $t2, 0x3946($t2)
    ctx->r10 = MEM_HU(ctx->r10, 0X3946);
    // 0x80268878: lhu         $t1, -0x30E8($t1)
    ctx->r9 = MEM_HU(ctx->r9, -0X30E8);
    // 0x8026887C: nop

    // 0x80268880: slt         $at, $t1, $t2
    ctx->r1 = SIGNED(ctx->r9) < SIGNED(ctx->r10) ? 1 : 0;
    // 0x80268884: beq         $at, $zero, L_80268948
    if (ctx->r1 == 0) {
        // 0x80268888: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_80268948;
    }
    // 0x80268888: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_8026888C:
    // 0x8026888C: lw          $t3, 0xB24($t3)
    ctx->r11 = MEM_W(ctx->r11, 0XB24);
    // 0x80268890: nop

    // 0x80268894: lwc1        $f12, 0x44($t3)
    ctx->f12.u32l = MEM_W(ctx->r11, 0X44);
    // 0x80268898: jal         0x80272AEC
    // 0x8026889C: nop

    ovl_8024B800_func_80272AEC(rdram, ctx);
        goto after_0;
    // 0x8026889C: nop

    after_0:
    // 0x802688A0: lui         $at, 0x437A
    ctx->r1 = S32(0X437A << 16);
    // 0x802688A4: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x802688A8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802688AC: c.lt.s      $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f0.fl < ctx->f4.fl;
    // 0x802688B0: nop

    // 0x802688B4: bc1f        L_80268948
    if (!c1cs) {
        // 0x802688B8: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_80268948;
    }
    // 0x802688B8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x802688BC: jal         0x80267A3C
    // 0x802688C0: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    ovl_8024B800_func_80267A3C(rdram, ctx);
        goto after_1;
    // 0x802688C0: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_1:
    // 0x802688C4: lui         $v1, 0x8012
    ctx->r3 = S32(0X8012 << 16);
    // 0x802688C8: addiu       $v1, $v1, 0xB24
    ctx->r3 = ADD32(ctx->r3, 0XB24);
    // 0x802688CC: lw          $t5, 0x0($v1)
    ctx->r13 = MEM_W(ctx->r3, 0X0);
    // 0x802688D0: lui         $t4, 0x8028
    ctx->r12 = S32(0X8028 << 16);
    // 0x802688D4: addiu       $t4, $t4, -0x33B0
    ctx->r12 = ADD32(ctx->r12, -0X33B0);
    // 0x802688D8: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x802688DC: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x802688E0: sw          $t4, 0x28($t5)
    MEM_W(0X28, ctx->r13) = ctx->r12;
    // 0x802688E4: sh          $t7, 0xB6C($at)
    MEM_H(0XB6C, ctx->r1) = ctx->r15;
    // 0x802688E8: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x802688EC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802688F0: lw          $a2, 0x4C($v0)
    ctx->r6 = MEM_W(ctx->r2, 0X4C);
    // 0x802688F4: lw          $a3, 0x44($v0)
    ctx->r7 = MEM_W(ctx->r2, 0X44);
    // 0x802688F8: jal         0x8027A42C
    // 0x802688FC: addiu       $a1, $sp, 0x28
    ctx->r5 = ADD32(ctx->r29, 0X28);
    ovl_8024B800_func_8027A42C(rdram, ctx);
        goto after_2;
    // 0x802688FC: addiu       $a1, $sp, 0x28
    ctx->r5 = ADD32(ctx->r29, 0X28);
    after_2:
    // 0x80268900: lhu         $t6, 0x30($sp)
    ctx->r14 = MEM_HU(ctx->r29, 0X30);
    // 0x80268904: lw          $t9, 0x18($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X18);
    // 0x80268908: sll         $t8, $t6, 5
    ctx->r24 = S32(ctx->r14 << 5);
    // 0x8026890C: subu        $t8, $t8, $t6
    ctx->r24 = SUB32(ctx->r24, ctx->r14);
    // 0x80268910: sll         $t8, $t8, 3
    ctx->r24 = S32(ctx->r24 << 3);
    // 0x80268914: lui         $a1, 0x8028
    ctx->r5 = S32(0X8028 << 16);
    // 0x80268918: addu        $a0, $t8, $t9
    ctx->r4 = ADD32(ctx->r24, ctx->r25);
    // 0x8026891C: sw          $a0, 0x80($sp)
    MEM_W(0X80, ctx->r29) = ctx->r4;
    // 0x80268920: jal         0x8026F2EC
    // 0x80268924: addiu       $a1, $a1, -0x33D8
    ctx->r5 = ADD32(ctx->r5, -0X33D8);
    ovl_8024B800_func_8026F2EC(rdram, ctx);
        goto after_3;
    // 0x80268924: addiu       $a1, $a1, -0x33D8
    ctx->r5 = ADD32(ctx->r5, -0X33D8);
    after_3:
    // 0x80268928: lw          $a0, 0x80($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X80);
    // 0x8026892C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80268930: lhu         $t0, 0x18($a0)
    ctx->r8 = MEM_HU(ctx->r4, 0X18);
    // 0x80268934: nop

    // 0x80268938: ori         $t1, $t0, 0x2000
    ctx->r9 = ctx->r8 | 0X2000;
    // 0x8026893C: b           L_80268948
    // 0x80268940: sh          $t1, 0x18($a0)
    MEM_H(0X18, ctx->r4) = ctx->r9;
        goto L_80268948;
    // 0x80268940: sh          $t1, 0x18($a0)
    MEM_H(0X18, ctx->r4) = ctx->r9;
L_80268944:
    // 0x80268944: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_80268948:
    // 0x80268948: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8026894C: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80268950: jr          $ra
    // 0x80268954: addiu       $sp, $sp, 0x88
    ctx->r29 = ADD32(ctx->r29, 0X88);
    return;
    // 0x80268954: addiu       $sp, $sp, 0x88
    ctx->r29 = ADD32(ctx->r29, 0X88);
;}
RECOMP_FUNC void ovl_8024B800_func_80268958(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80268958: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x8026895C: lhu         $v0, 0xB74($v0)
    ctx->r2 = MEM_HU(ctx->r2, 0XB74);
    // 0x80268960: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x80268964: bne         $v0, $at, L_80268994
    if (ctx->r2 != ctx->r1) {
        // 0x80268968: addiu       $at, $zero, 0x1
        ctx->r1 = ADD32(0, 0X1);
            goto L_80268994;
    }
    // 0x80268968: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8026896C: lw          $t7, 0x24($a0)
    ctx->r15 = MEM_W(ctx->r4, 0X24);
    // 0x80268970: lhu         $t6, 0xA($a0)
    ctx->r14 = MEM_HU(ctx->r4, 0XA);
    // 0x80268974: lhu         $t8, 0xA($t7)
    ctx->r24 = MEM_HU(ctx->r15, 0XA);
    // 0x80268978: nop

    // 0x8026897C: slt         $at, $t6, $t8
    ctx->r1 = SIGNED(ctx->r14) < SIGNED(ctx->r24) ? 1 : 0;
    // 0x80268980: beq         $at, $zero, L_80268994
    if (ctx->r1 == 0) {
        // 0x80268984: addiu       $at, $zero, 0x1
        ctx->r1 = ADD32(0, 0X1);
            goto L_80268994;
    }
    // 0x80268984: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80268988: jr          $ra
    // 0x8026898C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    return;
    // 0x8026898C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80268990: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
L_80268994:
    // 0x80268994: bne         $v0, $at, L_80268A28
    if (ctx->r2 != ctx->r1) {
        // 0x80268998: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_80268A28;
    }
    // 0x80268998: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x8026899C: lw          $t9, 0x24($a0)
    ctx->r25 = MEM_W(ctx->r4, 0X24);
    // 0x802689A0: lhu         $v0, 0xA($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0XA);
    // 0x802689A4: lhu         $v1, 0xA($t9)
    ctx->r3 = MEM_HU(ctx->r25, 0XA);
    // 0x802689A8: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x802689AC: slt         $at, $v0, $v1
    ctx->r1 = SIGNED(ctx->r2) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x802689B0: beq         $at, $zero, L_80268A24
    if (ctx->r1 == 0) {
        // 0x802689B4: lui         $a1, 0x802C
        ctx->r5 = S32(0X802C << 16);
            goto L_80268A24;
    }
    // 0x802689B4: lui         $a1, 0x802C
    ctx->r5 = S32(0X802C << 16);
    // 0x802689B8: lb          $a0, -0x309D($a0)
    ctx->r4 = MEM_B(ctx->r4, -0X309D);
    // 0x802689BC: lui         $t1, 0x8028
    ctx->r9 = S32(0X8028 << 16);
    // 0x802689C0: sll         $t0, $a0, 1
    ctx->r8 = S32(ctx->r4 << 1);
    // 0x802689C4: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x802689C8: lhu         $t1, -0x30E8($t1)
    ctx->r9 = MEM_HU(ctx->r9, -0X30E8);
    // 0x802689CC: lhu         $a1, 0x3946($a1)
    ctx->r5 = MEM_HU(ctx->r5, 0X3946);
    // 0x802689D0: or          $a0, $t0, $zero
    ctx->r4 = ctx->r8 | 0;
    // 0x802689D4: slt         $at, $t1, $a1
    ctx->r1 = SIGNED(ctx->r9) < SIGNED(ctx->r5) ? 1 : 0;
    // 0x802689D8: beq         $at, $zero, L_802689F4
    if (ctx->r1 == 0) {
        // 0x802689DC: lui         $t2, 0x8028
        ctx->r10 = S32(0X8028 << 16);
            goto L_802689F4;
    }
    // 0x802689DC: lui         $t2, 0x8028
    ctx->r10 = S32(0X8028 << 16);
    // 0x802689E0: slt         $at, $v0, $v1
    ctx->r1 = SIGNED(ctx->r2) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x802689E4: beq         $at, $zero, L_80268A28
    if (ctx->r1 == 0) {
        // 0x802689E8: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_80268A28;
    }
    // 0x802689E8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x802689EC: jr          $ra
    // 0x802689F0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    return;
    // 0x802689F0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_802689F4:
    // 0x802689F4: addu        $t2, $t2, $a0
    ctx->r10 = ADD32(ctx->r10, ctx->r4);
    // 0x802689F8: lhu         $t2, -0x30F0($t2)
    ctx->r10 = MEM_HU(ctx->r10, -0X30F0);
    // 0x802689FC: subu        $t3, $v1, $v0
    ctx->r11 = SUB32(ctx->r3, ctx->r2);
    // 0x80268A00: slt         $at, $t2, $a1
    ctx->r1 = SIGNED(ctx->r10) < SIGNED(ctx->r5) ? 1 : 0;
    // 0x80268A04: beq         $at, $zero, L_80268A24
    if (ctx->r1 == 0) {
        // 0x80268A08: sll         $t4, $t3, 16
        ctx->r12 = S32(ctx->r11 << 16);
            goto L_80268A24;
    }
    // 0x80268A08: sll         $t4, $t3, 16
    ctx->r12 = S32(ctx->r11 << 16);
    // 0x80268A0C: sra         $t5, $t4, 16
    ctx->r13 = S32(SIGNED(ctx->r12) >> 16);
    // 0x80268A10: slti        $at, $t5, 0x3
    ctx->r1 = SIGNED(ctx->r13) < 0X3 ? 1 : 0;
    // 0x80268A14: bne         $at, $zero, L_80268A28
    if (ctx->r1 != 0) {
        // 0x80268A18: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_80268A28;
    }
    // 0x80268A18: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x80268A1C: jr          $ra
    // 0x80268A20: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    return;
    // 0x80268A20: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_80268A24:
    // 0x80268A24: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_80268A28:
    // 0x80268A28: jr          $ra
    // 0x80268A2C: nop

    return;
    // 0x80268A2C: nop

;}
RECOMP_FUNC void ovl_8024B800_func_80268A30(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80268A30: lui         $a1, 0x8028
    ctx->r5 = S32(0X8028 << 16);
    // 0x80268A34: lh          $a1, -0x1B60($a1)
    ctx->r5 = MEM_H(ctx->r5, -0X1B60);
    // 0x80268A38: addiu       $at, $zero, 0xD
    ctx->r1 = ADD32(0, 0XD);
    // 0x80268A3C: div         $zero, $a1, $at
    lo = S32(S64(S32(ctx->r5)) / S64(S32(ctx->r1))); hi = S32(S64(S32(ctx->r5)) % S64(S32(ctx->r1)));
    // 0x80268A40: lbu         $t6, 0x0($a0)
    ctx->r14 = MEM_BU(ctx->r4, 0X0);
    // 0x80268A44: lui         $v1, 0x8028
    ctx->r3 = S32(0X8028 << 16);
    // 0x80268A48: addu        $v1, $v1, $t6
    ctx->r3 = ADD32(ctx->r3, ctx->r14);
    // 0x80268A4C: lbu         $v1, -0x2F28($v1)
    ctx->r3 = MEM_BU(ctx->r3, -0X2F28);
    // 0x80268A50: lui         $v0, 0x8028
    ctx->r2 = S32(0X8028 << 16);
    // 0x80268A54: sll         $t8, $v1, 2
    ctx->r24 = S32(ctx->r3 << 2);
    // 0x80268A58: addu        $t8, $t8, $v1
    ctx->r24 = ADD32(ctx->r24, ctx->r3);
    // 0x80268A5C: sll         $t8, $t8, 1
    ctx->r24 = S32(ctx->r24 << 1);
    // 0x80268A60: mfhi        $a1
    ctx->r5 = hi;
    // 0x80268A64: sltiu       $at, $a1, 0xA
    ctx->r1 = ctx->r5 < 0XA ? 1 : 0;
    // 0x80268A68: bne         $at, $zero, L_80268A78
    if (ctx->r1 != 0) {
        // 0x80268A6C: addu        $t9, $t8, $a1
        ctx->r25 = ADD32(ctx->r24, ctx->r5);
            goto L_80268A78;
    }
    // 0x80268A6C: addu        $t9, $t8, $a1
    ctx->r25 = ADD32(ctx->r24, ctx->r5);
    // 0x80268A70: jr          $ra
    // 0x80268A74: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    return;
    // 0x80268A74: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_80268A78:
    // 0x80268A78: addu        $v0, $v0, $t9
    ctx->r2 = ADD32(ctx->r2, ctx->r25);
    // 0x80268A7C: lbu         $v0, -0x2F48($v0)
    ctx->r2 = MEM_BU(ctx->r2, -0X2F48);
    // 0x80268A80: nop

    // 0x80268A84: jr          $ra
    // 0x80268A88: nop

    return;
    // 0x80268A88: nop

;}
RECOMP_FUNC void ovl_8024B800_func_80268A8C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80268A8C: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x80268A90: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x80268A94: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80268A98: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80268A9C: sh          $zero, 0xB6C($at)
    MEM_H(0XB6C, ctx->r1) = 0;
    // 0x80268AA0: lhu         $t6, 0x10($a0)
    ctx->r14 = MEM_HU(ctx->r4, 0X10);
    // 0x80268AA4: lui         $a1, 0x8012
    ctx->r5 = S32(0X8012 << 16);
    // 0x80268AA8: andi        $t7, $t6, 0xF0FF
    ctx->r15 = ctx->r14 & 0XF0FF;
    // 0x80268AAC: addiu       $a1, $a1, 0xB24
    ctx->r5 = ADD32(ctx->r5, 0XB24);
    // 0x80268AB0: sh          $t7, 0x10($a0)
    MEM_H(0X10, ctx->r4) = ctx->r15;
    // 0x80268AB4: lw          $t9, 0x0($a1)
    ctx->r25 = MEM_W(ctx->r5, 0X0);
    // 0x80268AB8: addiu       $t8, $zero, 0x4
    ctx->r24 = ADD32(0, 0X4);
    // 0x80268ABC: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x80268AC0: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x80268AC4: sh          $t8, 0x22($t9)
    MEM_H(0X22, ctx->r25) = ctx->r24;
    // 0x80268AC8: addiu       $v0, $v0, 0xB7E
    ctx->r2 = ADD32(ctx->r2, 0XB7E);
    // 0x80268ACC: sh          $zero, 0xB6E($at)
    MEM_H(0XB6E, ctx->r1) = 0;
    // 0x80268AD0: lhu         $t0, 0x0($v0)
    ctx->r8 = MEM_HU(ctx->r2, 0X0);
    // 0x80268AD4: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x80268AD8: ori         $t1, $t0, 0x20
    ctx->r9 = ctx->r8 | 0X20;
    // 0x80268ADC: sh          $t1, 0x0($v0)
    MEM_H(0X0, ctx->r2) = ctx->r9;
    // 0x80268AE0: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x80268AE4: addiu       $v1, $zero, 0xB
    ctx->r3 = ADD32(0, 0XB);
    // 0x80268AE8: addiu       $v0, $v0, 0x4
    ctx->r2 = ADD32(ctx->r2, 0X4);
L_80268AEC:
    // 0x80268AEC: bne         $v0, $v1, L_80268AEC
    if (ctx->r2 != ctx->r3) {
        // 0x80268AF0: addiu       $v0, $v0, 0x4
        ctx->r2 = ADD32(ctx->r2, 0X4);
            goto L_80268AEC;
    }
    // 0x80268AF0: addiu       $v0, $v0, 0x4
    ctx->r2 = ADD32(ctx->r2, 0X4);
    // 0x80268AF4: jal         0x80058054
    // 0x80268AF8: addiu       $a0, $zero, 0x168
    ctx->r4 = ADD32(0, 0X168);
    func_80058054(rdram, ctx);
        goto after_0;
    // 0x80268AF8: addiu       $a0, $zero, 0x168
    ctx->r4 = ADD32(0, 0X168);
    after_0:
    // 0x80268AFC: swc1        $f0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f0.u32l;
    // 0x80268B00: jal         0x80268958
    // 0x80268B04: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_8024B800_func_80268958(rdram, ctx);
        goto after_1;
    // 0x80268B04: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
    // 0x80268B08: lui         $a1, 0x8012
    ctx->r5 = S32(0X8012 << 16);
    // 0x80268B0C: beq         $v0, $zero, L_80268B34
    if (ctx->r2 == 0) {
        // 0x80268B10: addiu       $a1, $a1, 0xB24
        ctx->r5 = ADD32(ctx->r5, 0XB24);
            goto L_80268B34;
    }
    // 0x80268B10: addiu       $a1, $a1, 0xB24
    ctx->r5 = ADD32(ctx->r5, 0XB24);
    // 0x80268B14: lw          $t3, 0x0($a1)
    ctx->r11 = MEM_W(ctx->r5, 0X0);
    // 0x80268B18: lui         $t2, 0x8028
    ctx->r10 = S32(0X8028 << 16);
    // 0x80268B1C: addiu       $t2, $t2, -0x3464
    ctx->r10 = ADD32(ctx->r10, -0X3464);
    // 0x80268B20: addiu       $t4, $zero, 0x6
    ctx->r12 = ADD32(0, 0X6);
    // 0x80268B24: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x80268B28: sw          $t2, 0x28($t3)
    MEM_W(0X28, ctx->r11) = ctx->r10;
    // 0x80268B2C: b           L_80268D6C
    // 0x80268B30: sh          $t4, 0xB6C($at)
    MEM_H(0XB6C, ctx->r1) = ctx->r12;
        goto L_80268D6C;
    // 0x80268B30: sh          $t4, 0xB6C($at)
    MEM_H(0XB6C, ctx->r1) = ctx->r12;
L_80268B34:
    // 0x80268B34: lw          $v1, 0x0($a1)
    ctx->r3 = MEM_W(ctx->r5, 0X0);
    // 0x80268B38: lui         $a2, 0x8028
    ctx->r6 = S32(0X8028 << 16);
    // 0x80268B3C: lw          $t5, 0xC8($v1)
    ctx->r13 = MEM_W(ctx->r3, 0XC8);
    // 0x80268B40: addiu       $a2, $a2, -0x3044
    ctx->r6 = ADD32(ctx->r6, -0X3044);
    // 0x80268B44: lhu         $t6, 0x8($t5)
    ctx->r14 = MEM_HU(ctx->r13, 0X8);
    // 0x80268B48: nop

    // 0x80268B4C: andi        $t7, $t6, 0x1
    ctx->r15 = ctx->r14 & 0X1;
    // 0x80268B50: beq         $t7, $zero, L_80268B64
    if (ctx->r15 == 0) {
        // 0x80268B54: nop
    
            goto L_80268B64;
    }
    // 0x80268B54: nop

    // 0x80268B58: lui         $a2, 0x8028
    ctx->r6 = S32(0X8028 << 16);
    // 0x80268B5C: b           L_80268B64
    // 0x80268B60: addiu       $a2, $a2, -0x3054
    ctx->r6 = ADD32(ctx->r6, -0X3054);
        goto L_80268B64;
    // 0x80268B60: addiu       $a2, $a2, -0x3054
    ctx->r6 = ADD32(ctx->r6, -0X3054);
L_80268B64:
    // 0x80268B64: lwc1        $f12, 0x4C($v1)
    ctx->f12.u32l = MEM_W(ctx->r3, 0X4C);
    // 0x80268B68: lwc1        $f14, 0x44($v1)
    ctx->f14.u32l = MEM_W(ctx->r3, 0X44);
    // 0x80268B6C: jal         0x8027A184
    // 0x80268B70: nop

    ovl_8024B800_func_8027A184(rdram, ctx);
        goto after_2;
    // 0x80268B70: nop

    after_2:
    // 0x80268B74: lui         $a1, 0x8012
    ctx->r5 = S32(0X8012 << 16);
    // 0x80268B78: bne         $v0, $zero, L_80268B94
    if (ctx->r2 != 0) {
        // 0x80268B7C: addiu       $a1, $a1, 0xB24
        ctx->r5 = ADD32(ctx->r5, 0XB24);
            goto L_80268B94;
    }
    // 0x80268B7C: addiu       $a1, $a1, 0xB24
    ctx->r5 = ADD32(ctx->r5, 0XB24);
    // 0x80268B80: lw          $t9, 0x0($a1)
    ctx->r25 = MEM_W(ctx->r5, 0X0);
    // 0x80268B84: addiu       $t8, $zero, 0x19
    ctx->r24 = ADD32(0, 0X19);
    // 0x80268B88: lw          $t0, 0xD8($t9)
    ctx->r8 = MEM_W(ctx->r25, 0XD8);
    // 0x80268B8C: b           L_80268BC8
    // 0x80268B90: sb          $t8, 0x14($t0)
    MEM_B(0X14, ctx->r8) = ctx->r24;
        goto L_80268BC8;
    // 0x80268B90: sb          $t8, 0x14($t0)
    MEM_B(0X14, ctx->r8) = ctx->r24;
L_80268B94:
    // 0x80268B94: jal         0x80268818
    // 0x80268B98: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_8024B800_func_80268818(rdram, ctx);
        goto after_3;
    // 0x80268B98: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_3:
    // 0x80268B9C: bne         $v0, $zero, L_80268D70
    if (ctx->r2 != 0) {
        // 0x80268BA0: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_80268D70;
    }
    // 0x80268BA0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80268BA4: jal         0x80268A30
    // 0x80268BA8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_8024B800_func_80268A30(rdram, ctx);
        goto after_4;
    // 0x80268BA8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_4:
    // 0x80268BAC: lui         $a1, 0x8012
    ctx->r5 = S32(0X8012 << 16);
    // 0x80268BB0: addiu       $a1, $a1, 0xB24
    ctx->r5 = ADD32(ctx->r5, 0XB24);
    // 0x80268BB4: lw          $t1, 0x0($a1)
    ctx->r9 = MEM_W(ctx->r5, 0X0);
    // 0x80268BB8: nop

    // 0x80268BBC: lw          $t2, 0xD8($t1)
    ctx->r10 = MEM_W(ctx->r9, 0XD8);
    // 0x80268BC0: nop

    // 0x80268BC4: sb          $v0, 0x14($t2)
    MEM_B(0X14, ctx->r10) = ctx->r2;
L_80268BC8:
    // 0x80268BC8: lw          $v1, 0x0($a1)
    ctx->r3 = MEM_W(ctx->r5, 0X0);
    // 0x80268BCC: nop

    // 0x80268BD0: lw          $t3, 0xD8($v1)
    ctx->r11 = MEM_W(ctx->r3, 0XD8);
    // 0x80268BD4: nop

    // 0x80268BD8: lbu         $v0, 0x14($t3)
    ctx->r2 = MEM_BU(ctx->r11, 0X14);
    // 0x80268BDC: nop

    // 0x80268BE0: slti        $at, $v0, 0x69
    ctx->r1 = SIGNED(ctx->r2) < 0X69 ? 1 : 0;
    // 0x80268BE4: bne         $at, $zero, L_80268C04
    if (ctx->r1 != 0) {
        // 0x80268BE8: addiu       $at, $zero, 0xA7
        ctx->r1 = ADD32(0, 0XA7);
            goto L_80268C04;
    }
    // 0x80268BE8: addiu       $at, $zero, 0xA7
    ctx->r1 = ADD32(0, 0XA7);
    // 0x80268BEC: beq         $v0, $at, L_80268D0C
    if (ctx->r2 == ctx->r1) {
        // 0x80268BF0: addiu       $at, $zero, 0xB8
        ctx->r1 = ADD32(0, 0XB8);
            goto L_80268D0C;
    }
    // 0x80268BF0: addiu       $at, $zero, 0xB8
    ctx->r1 = ADD32(0, 0XB8);
    // 0x80268BF4: beq         $v0, $at, L_80268CB0
    if (ctx->r2 == ctx->r1) {
        // 0x80268BF8: nop
    
            goto L_80268CB0;
    }
    // 0x80268BF8: nop

    // 0x80268BFC: b           L_80268CEC
    // 0x80268C00: lhu         $t9, 0xA($s0)
    ctx->r25 = MEM_HU(ctx->r16, 0XA);
        goto L_80268CEC;
    // 0x80268C00: lhu         $t9, 0xA($s0)
    ctx->r25 = MEM_HU(ctx->r16, 0XA);
L_80268C04:
    // 0x80268C04: slti        $at, $v0, 0x4F
    ctx->r1 = SIGNED(ctx->r2) < 0X4F ? 1 : 0;
    // 0x80268C08: bne         $at, $zero, L_80268C24
    if (ctx->r1 != 0) {
        // 0x80268C0C: addiu       $t4, $v0, -0x19
        ctx->r12 = ADD32(ctx->r2, -0X19);
            goto L_80268C24;
    }
    // 0x80268C0C: addiu       $t4, $v0, -0x19
    ctx->r12 = ADD32(ctx->r2, -0X19);
    // 0x80268C10: addiu       $at, $zero, 0x68
    ctx->r1 = ADD32(0, 0X68);
    // 0x80268C14: beq         $v0, $at, L_80268CB0
    if (ctx->r2 == ctx->r1) {
        // 0x80268C18: nop
    
            goto L_80268CB0;
    }
    // 0x80268C18: nop

    // 0x80268C1C: b           L_80268CEC
    // 0x80268C20: lhu         $t9, 0xA($s0)
    ctx->r25 = MEM_HU(ctx->r16, 0XA);
        goto L_80268CEC;
    // 0x80268C20: lhu         $t9, 0xA($s0)
    ctx->r25 = MEM_HU(ctx->r16, 0XA);
L_80268C24:
    // 0x80268C24: sltiu       $at, $t4, 0x36
    ctx->r1 = ctx->r12 < 0X36 ? 1 : 0;
    // 0x80268C28: beq         $at, $zero, L_80268CE8
    if (ctx->r1 == 0) {
        // 0x80268C2C: sll         $t4, $t4, 2
        ctx->r12 = S32(ctx->r12 << 2);
            goto L_80268CE8;
    }
    // 0x80268C2C: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x80268C30: lui         $at, 0x8028
    ctx->r1 = S32(0X8028 << 16);
    // 0x80268C34: addu        $at, $at, $t4
    gpr jr_addend_80268C40 = ctx->r12;
    ctx->r1 = ADD32(ctx->r1, ctx->r12);
    // 0x80268C38: lw          $t4, -0x2C6C($at)
    ctx->r12 = ADD32(ctx->r1, -0X2C6C);
    // 0x80268C3C: nop

    // 0x80268C40: jr          $t4
    // 0x80268C44: nop

    switch (jr_addend_80268C40 >> 2) {
        case 0: goto L_80268C7C; break;
        case 1: goto L_80268CE8; break;
        case 2: goto L_80268CE8; break;
        case 3: goto L_80268CE8; break;
        case 4: goto L_80268CE8; break;
        case 5: goto L_80268CE8; break;
        case 6: goto L_80268CE8; break;
        case 7: goto L_80268CE8; break;
        case 8: goto L_80268CE8; break;
        case 9: goto L_80268CE8; break;
        case 10: goto L_80268CE8; break;
        case 11: goto L_80268CE8; break;
        case 12: goto L_80268CE8; break;
        case 13: goto L_80268CE8; break;
        case 14: goto L_80268CE8; break;
        case 15: goto L_80268CE8; break;
        case 16: goto L_80268CB0; break;
        case 17: goto L_80268CE8; break;
        case 18: goto L_80268CE8; break;
        case 19: goto L_80268CE8; break;
        case 20: goto L_80268CE8; break;
        case 21: goto L_80268CE8; break;
        case 22: goto L_80268CE8; break;
        case 23: goto L_80268CE8; break;
        case 24: goto L_80268CE8; break;
        case 25: goto L_80268CE8; break;
        case 26: goto L_80268CE8; break;
        case 27: goto L_80268CE8; break;
        case 28: goto L_80268CE8; break;
        case 29: goto L_80268CE8; break;
        case 30: goto L_80268CE8; break;
        case 31: goto L_80268D0C; break;
        case 32: goto L_80268CE8; break;
        case 33: goto L_80268CE8; break;
        case 34: goto L_80268CE8; break;
        case 35: goto L_80268CE8; break;
        case 36: goto L_80268CE8; break;
        case 37: goto L_80268CE8; break;
        case 38: goto L_80268CE8; break;
        case 39: goto L_80268CE8; break;
        case 40: goto L_80268CE8; break;
        case 41: goto L_80268CE8; break;
        case 42: goto L_80268CE8; break;
        case 43: goto L_80268CE8; break;
        case 44: goto L_80268CE8; break;
        case 45: goto L_80268CE8; break;
        case 46: goto L_80268C48; break;
        case 47: goto L_80268CE8; break;
        case 48: goto L_80268CE8; break;
        case 49: goto L_80268CE8; break;
        case 50: goto L_80268CE8; break;
        case 51: goto L_80268CE8; break;
        case 52: goto L_80268CE8; break;
        case 53: goto L_80268C48; break;
        default: switch_error(__func__, 0x80268C40, 0x8027D394);
    }
    // 0x80268C44: nop

L_80268C48:
    // 0x80268C48: lui         $t5, 0x8028
    ctx->r13 = S32(0X8028 << 16);
    // 0x80268C4C: addiu       $t5, $t5, -0x339C
    ctx->r13 = ADD32(ctx->r13, -0X339C);
    // 0x80268C50: sw          $t5, 0x28($v1)
    MEM_W(0X28, ctx->r3) = ctx->r13;
    // 0x80268C54: jal         0x802678DC
    // 0x80268C58: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_8024B800_func_802678DC(rdram, ctx);
        goto after_5;
    // 0x80268C58: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_5:
    // 0x80268C5C: lui         $a1, 0x8028
    ctx->r5 = S32(0X8028 << 16);
    // 0x80268C60: lw          $a2, 0x24($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X24);
    // 0x80268C64: addiu       $a1, $a1, -0x3164
    ctx->r5 = ADD32(ctx->r5, -0X3164);
    // 0x80268C68: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80268C6C: jal         0x80267DC4
    // 0x80268C70: addiu       $a3, $zero, 0x3
    ctx->r7 = ADD32(0, 0X3);
    ovl_8024B800_func_80267DC4(rdram, ctx);
        goto after_6;
    // 0x80268C70: addiu       $a3, $zero, 0x3
    ctx->r7 = ADD32(0, 0X3);
    after_6:
    // 0x80268C74: b           L_80268D70
    // 0x80268C78: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_80268D70;
    // 0x80268C78: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_80268C7C:
    // 0x80268C7C: lui         $t6, 0x8028
    ctx->r14 = S32(0X8028 << 16);
    // 0x80268C80: addiu       $t6, $t6, -0x33B0
    ctx->r14 = ADD32(ctx->r14, -0X33B0);
    // 0x80268C84: sw          $t6, 0x28($v1)
    MEM_W(0X28, ctx->r3) = ctx->r14;
    // 0x80268C88: jal         0x802678DC
    // 0x80268C8C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_8024B800_func_802678DC(rdram, ctx);
        goto after_7;
    // 0x80268C8C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_7:
    // 0x80268C90: lui         $a1, 0x8028
    ctx->r5 = S32(0X8028 << 16);
    // 0x80268C94: lw          $a2, 0x24($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X24);
    // 0x80268C98: addiu       $a1, $a1, -0x3164
    ctx->r5 = ADD32(ctx->r5, -0X3164);
    // 0x80268C9C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80268CA0: jal         0x80267DC4
    // 0x80268CA4: addiu       $a3, $zero, 0x2
    ctx->r7 = ADD32(0, 0X2);
    ovl_8024B800_func_80267DC4(rdram, ctx);
        goto after_8;
    // 0x80268CA4: addiu       $a3, $zero, 0x2
    ctx->r7 = ADD32(0, 0X2);
    after_8:
    // 0x80268CA8: b           L_80268D70
    // 0x80268CAC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_80268D70;
    // 0x80268CAC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_80268CB0:
    // 0x80268CB0: lui         $t7, 0x8028
    ctx->r15 = S32(0X8028 << 16);
    // 0x80268CB4: addiu       $t7, $t7, -0x3394
    ctx->r15 = ADD32(ctx->r15, -0X3394);
    // 0x80268CB8: sw          $t7, 0x28($v1)
    MEM_W(0X28, ctx->r3) = ctx->r15;
    // 0x80268CBC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80268CC0: jal         0x80267A3C
    // 0x80268CC4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    ovl_8024B800_func_80267A3C(rdram, ctx);
        goto after_9;
    // 0x80268CC4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_9:
    // 0x80268CC8: lui         $a1, 0x8028
    ctx->r5 = S32(0X8028 << 16);
    // 0x80268CCC: mfc1        $a2, $f0
    ctx->r6 = (int32_t)ctx->f0.u32l;
    // 0x80268CD0: addiu       $a1, $a1, -0x3164
    ctx->r5 = ADD32(ctx->r5, -0X3164);
    // 0x80268CD4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80268CD8: jal         0x80267DC4
    // 0x80268CDC: addiu       $a3, $zero, 0x4
    ctx->r7 = ADD32(0, 0X4);
    ovl_8024B800_func_80267DC4(rdram, ctx);
        goto after_10;
    // 0x80268CDC: addiu       $a3, $zero, 0x4
    ctx->r7 = ADD32(0, 0X4);
    after_10:
    // 0x80268CE0: b           L_80268D70
    // 0x80268CE4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_80268D70;
    // 0x80268CE4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_80268CE8:
    // 0x80268CE8: lhu         $t9, 0xA($s0)
    ctx->r25 = MEM_HU(ctx->r16, 0XA);
L_80268CEC:
    // 0x80268CEC: nop

    // 0x80268CF0: andi        $t8, $t9, 0x1
    ctx->r24 = ctx->r25 & 0X1;
    // 0x80268CF4: bne         $t8, $zero, L_80268D0C
    if (ctx->r24 != 0) {
        // 0x80268CF8: nop
    
            goto L_80268D0C;
    }
    // 0x80268CF8: nop

    // 0x80268CFC: jal         0x80268730
    // 0x80268D00: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_8024B800_func_80268730(rdram, ctx);
        goto after_11;
    // 0x80268D00: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_11:
    // 0x80268D04: b           L_80268D70
    // 0x80268D08: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_80268D70;
    // 0x80268D08: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_80268D0C:
    // 0x80268D0C: lhu         $t0, 0x2C($v1)
    ctx->r8 = MEM_HU(ctx->r3, 0X2C);
    // 0x80268D10: lui         $t4, 0x8028
    ctx->r12 = S32(0X8028 << 16);
    // 0x80268D14: andi        $t1, $t0, 0x3
    ctx->r9 = ctx->r8 & 0X3;
    // 0x80268D18: bne         $t1, $zero, L_80268D3C
    if (ctx->r9 != 0) {
        // 0x80268D1C: nop
    
            goto L_80268D3C;
    }
    // 0x80268D1C: nop

    // 0x80268D20: lhu         $t2, 0x18($v1)
    ctx->r10 = MEM_HU(ctx->r3, 0X18);
    // 0x80268D24: addiu       $t4, $t4, -0x33A8
    ctx->r12 = ADD32(ctx->r12, -0X33A8);
    // 0x80268D28: ori         $t3, $t2, 0x800
    ctx->r11 = ctx->r10 | 0X800;
    // 0x80268D2C: sh          $t3, 0x18($v1)
    MEM_H(0X18, ctx->r3) = ctx->r11;
    // 0x80268D30: lw          $t5, 0x0($a1)
    ctx->r13 = MEM_W(ctx->r5, 0X0);
    // 0x80268D34: b           L_80268D48
    // 0x80268D38: sw          $t4, 0x28($t5)
    MEM_W(0X28, ctx->r13) = ctx->r12;
        goto L_80268D48;
    // 0x80268D38: sw          $t4, 0x28($t5)
    MEM_W(0X28, ctx->r13) = ctx->r12;
L_80268D3C:
    // 0x80268D3C: lui         $t6, 0x8028
    ctx->r14 = S32(0X8028 << 16);
    // 0x80268D40: addiu       $t6, $t6, -0x33B0
    ctx->r14 = ADD32(ctx->r14, -0X33B0);
    // 0x80268D44: sw          $t6, 0x28($v1)
    MEM_W(0X28, ctx->r3) = ctx->r14;
L_80268D48:
    // 0x80268D48: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80268D4C: jal         0x80267A3C
    // 0x80268D50: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    ovl_8024B800_func_80267A3C(rdram, ctx);
        goto after_12;
    // 0x80268D50: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_12:
    // 0x80268D54: lui         $a1, 0x8028
    ctx->r5 = S32(0X8028 << 16);
    // 0x80268D58: mfc1        $a2, $f0
    ctx->r6 = (int32_t)ctx->f0.u32l;
    // 0x80268D5C: addiu       $a1, $a1, -0x3164
    ctx->r5 = ADD32(ctx->r5, -0X3164);
    // 0x80268D60: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80268D64: jal         0x80267DC4
    // 0x80268D68: addiu       $a3, $zero, 0x5
    ctx->r7 = ADD32(0, 0X5);
    ovl_8024B800_func_80267DC4(rdram, ctx);
        goto after_13;
    // 0x80268D68: addiu       $a3, $zero, 0x5
    ctx->r7 = ADD32(0, 0X5);
    after_13:
L_80268D6C:
    // 0x80268D6C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_80268D70:
    // 0x80268D70: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80268D74: jr          $ra
    // 0x80268D78: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x80268D78: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void ovl_8024B800_func_80268D30(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80268D30: lw          $t5, 0x0($a1)
    ctx->r13 = MEM_W(ctx->r5, 0X0);
    // 0x80268D34: b           L_80268D48
    // 0x80268D38: sw          $t4, 0x28($t5)
    MEM_W(0X28, ctx->r13) = ctx->r12;
        goto L_80268D48;
    // 0x80268D38: sw          $t4, 0x28($t5)
    MEM_W(0X28, ctx->r13) = ctx->r12;
    // 0x80268D3C: lui         $t6, 0x8028
    ctx->r14 = S32(0X8028 << 16);
    // 0x80268D40: addiu       $t6, $t6, -0x33B0
    ctx->r14 = ADD32(ctx->r14, -0X33B0);
    // 0x80268D44: sw          $t6, 0x28($v1)
    MEM_W(0X28, ctx->r3) = ctx->r14;
L_80268D48:
    // 0x80268D48: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80268D4C: jal         0x80267A3C
    // 0x80268D50: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    ovl_8024B800_func_80267A3C(rdram, ctx);
        goto after_0;
    // 0x80268D50: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_0:
    // 0x80268D54: lui         $a1, 0x8028
    ctx->r5 = S32(0X8028 << 16);
    // 0x80268D58: mfc1        $a2, $f0
    ctx->r6 = (int32_t)ctx->f0.u32l;
    // 0x80268D5C: addiu       $a1, $a1, -0x3164
    ctx->r5 = ADD32(ctx->r5, -0X3164);
    // 0x80268D60: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80268D64: jal         0x80267DC4
    // 0x80268D68: addiu       $a3, $zero, 0x5
    ctx->r7 = ADD32(0, 0X5);
    ovl_8024B800_func_80267DC4(rdram, ctx);
        goto after_1;
    // 0x80268D68: addiu       $a3, $zero, 0x5
    ctx->r7 = ADD32(0, 0X5);
    after_1:
    // 0x80268D6C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80268D70: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80268D74: jr          $ra
    // 0x80268D78: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x80268D78: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void ovl_8024B800_func_80268D7C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80268D7C: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x80268D80: lui         $t6, 0x8028
    ctx->r14 = S32(0X8028 << 16);
    // 0x80268D84: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x80268D88: sw          $s4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r20;
    // 0x80268D8C: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x80268D90: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x80268D94: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x80268D98: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80268D9C: addiu       $t6, $t6, -0x3034
    ctx->r14 = ADD32(ctx->r14, -0X3034);
    // 0x80268DA0: lw          $at, 0x0($t6)
    ctx->r1 = MEM_W(ctx->r14, 0X0);
    // 0x80268DA4: addiu       $s4, $sp, 0x38
    ctx->r20 = ADD32(ctx->r29, 0X38);
    // 0x80268DA8: sw          $at, 0x0($s4)
    MEM_W(0X0, ctx->r20) = ctx->r1;
    // 0x80268DAC: lw          $t9, 0x4($t6)
    ctx->r25 = MEM_W(ctx->r14, 0X4);
    // 0x80268DB0: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x80268DB4: sw          $t9, 0x4($s4)
    MEM_W(0X4, ctx->r20) = ctx->r25;
    // 0x80268DB8: lw          $at, 0x8($t6)
    ctx->r1 = MEM_W(ctx->r14, 0X8);
    // 0x80268DBC: addiu       $v0, $v0, 0xB7E
    ctx->r2 = ADD32(ctx->r2, 0XB7E);
    // 0x80268DC0: sw          $at, 0x8($s4)
    MEM_W(0X8, ctx->r20) = ctx->r1;
    // 0x80268DC4: lw          $t9, 0xC($t6)
    ctx->r25 = MEM_W(ctx->r14, 0XC);
    // 0x80268DC8: lhu         $t0, 0x0($v0)
    ctx->r8 = MEM_HU(ctx->r2, 0X0);
    // 0x80268DCC: sw          $t9, 0xC($s4)
    MEM_W(0XC, ctx->r20) = ctx->r25;
    // 0x80268DD0: lw          $s0, 0x18($a0)
    ctx->r16 = MEM_W(ctx->r4, 0X18);
    // 0x80268DD4: lui         $s2, 0x8012
    ctx->r18 = S32(0X8012 << 16);
    // 0x80268DD8: ori         $t1, $t0, 0x20
    ctx->r9 = ctx->r8 | 0X20;
    // 0x80268DDC: sh          $t1, 0x0($v0)
    MEM_H(0X0, ctx->r2) = ctx->r9;
    // 0x80268DE0: addiu       $s2, $s2, 0xB74
    ctx->r18 = ADD32(ctx->r18, 0XB74);
    // 0x80268DE4: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    // 0x80268DE8: addiu       $s3, $zero, 0xB
    ctx->r19 = ADD32(0, 0XB);
L_80268DEC:
    // 0x80268DEC: lhu         $t2, 0xC($s0)
    ctx->r10 = MEM_HU(ctx->r16, 0XC);
    // 0x80268DF0: nop

    // 0x80268DF4: beq         $t2, $zero, L_80268E28
    if (ctx->r10 == 0) {
        // 0x80268DF8: nop
    
            goto L_80268E28;
    }
    // 0x80268DF8: nop

    // 0x80268DFC: lhu         $t3, 0x0($s2)
    ctx->r11 = MEM_HU(ctx->r18, 0X0);
    // 0x80268E00: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80268E04: sll         $t4, $t3, 2
    ctx->r12 = S32(ctx->r11 << 2);
    // 0x80268E08: addu        $t5, $s4, $t4
    ctx->r13 = ADD32(ctx->r20, ctx->r12);
    // 0x80268E0C: lw          $a1, 0x0($t5)
    ctx->r5 = MEM_W(ctx->r13, 0X0);
    // 0x80268E10: jal         0x8026F2EC
    // 0x80268E14: nop

    ovl_8024B800_func_8026F2EC(rdram, ctx);
        goto after_0;
    // 0x80268E14: nop

    after_0:
    // 0x80268E18: jal         0x80059898
    // 0x80268E1C: addiu       $a0, $zero, 0x14
    ctx->r4 = ADD32(0, 0X14);
    func_80059898(rdram, ctx);
        goto after_1;
    // 0x80268E1C: addiu       $a0, $zero, 0x14
    ctx->r4 = ADD32(0, 0X14);
    after_1:
    // 0x80268E20: addiu       $t8, $v0, 0xA
    ctx->r24 = ADD32(ctx->r2, 0XA);
    // 0x80268E24: sh          $t8, 0x24($s0)
    MEM_H(0X24, ctx->r16) = ctx->r24;
L_80268E28:
    // 0x80268E28: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x80268E2C: bne         $s1, $s3, L_80268DEC
    if (ctx->r17 != ctx->r19) {
        // 0x80268E30: addiu       $s0, $s0, 0xF8
        ctx->r16 = ADD32(ctx->r16, 0XF8);
            goto L_80268DEC;
    }
    // 0x80268E30: addiu       $s0, $s0, 0xF8
    ctx->r16 = ADD32(ctx->r16, 0XF8);
    // 0x80268E34: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x80268E38: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80268E3C: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x80268E40: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x80268E44: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x80268E48: lw          $s4, 0x28($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X28);
    // 0x80268E4C: jr          $ra
    // 0x80268E50: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    return;
    // 0x80268E50: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
;}
RECOMP_FUNC void ovl_8024B800_func_80268E54(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80268E54: lhu         $t6, 0x8($a0)
    ctx->r14 = MEM_HU(ctx->r4, 0X8);
    // 0x80268E58: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x80268E5C: andi        $t7, $t6, 0x1000
    ctx->r15 = ctx->r14 & 0X1000;
    // 0x80268E60: bne         $t7, $zero, L_80268EB4
    if (ctx->r15 != 0) {
        // 0x80268E64: nop
    
            goto L_80268EB4;
    }
    // 0x80268E64: nop

    // 0x80268E68: lw          $v0, 0x24($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X24);
    // 0x80268E6C: nop

    // 0x80268E70: lhu         $t8, 0x8($v0)
    ctx->r24 = MEM_HU(ctx->r2, 0X8);
    // 0x80268E74: nop

    // 0x80268E78: andi        $t9, $t8, 0x1000
    ctx->r25 = ctx->r24 & 0X1000;
    // 0x80268E7C: beq         $t9, $zero, L_80268E8C
    if (ctx->r25 == 0) {
        // 0x80268E80: nop
    
            goto L_80268E8C;
    }
    // 0x80268E80: nop

    // 0x80268E84: jr          $ra
    // 0x80268E88: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    return;
    // 0x80268E88: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_80268E8C:
    // 0x80268E8C: lhu         $a1, 0xA($v0)
    ctx->r5 = MEM_HU(ctx->r2, 0XA);
    // 0x80268E90: lhu         $a2, 0xA($a0)
    ctx->r6 = MEM_HU(ctx->r4, 0XA);
    // 0x80268E94: nop

    // 0x80268E98: slt         $at, $a1, $a2
    ctx->r1 = SIGNED(ctx->r5) < SIGNED(ctx->r6) ? 1 : 0;
    // 0x80268E9C: beq         $at, $zero, L_80268EA8
    if (ctx->r1 == 0) {
        // 0x80268EA0: nop
    
            goto L_80268EA8;
    }
    // 0x80268EA0: nop

    // 0x80268EA4: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
L_80268EA8:
    // 0x80268EA8: bne         $a1, $a2, L_80268EB4
    if (ctx->r5 != ctx->r6) {
        // 0x80268EAC: nop
    
            goto L_80268EB4;
    }
    // 0x80268EAC: nop

    // 0x80268EB0: addiu       $v1, $zero, 0x2
    ctx->r3 = ADD32(0, 0X2);
L_80268EB4:
    // 0x80268EB4: jr          $ra
    // 0x80268EB8: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    return;
    // 0x80268EB8: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
;}
RECOMP_FUNC void ovl_8024B800_func_80268EBC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80268EBC: addiu       $sp, $sp, -0xC0
    ctx->r29 = ADD32(ctx->r29, -0XC0);
    // 0x80268EC0: sw          $ra, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r31;
    // 0x80268EC4: sw          $fp, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r30;
    // 0x80268EC8: sw          $s7, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r23;
    // 0x80268ECC: sw          $s6, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r22;
    // 0x80268ED0: sw          $s5, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r21;
    // 0x80268ED4: sw          $s4, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r20;
    // 0x80268ED8: sw          $s3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r19;
    // 0x80268EDC: sw          $s2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r18;
    // 0x80268EE0: sw          $s1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r17;
    // 0x80268EE4: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x80268EE8: lw          $s0, 0x18($a0)
    ctx->r16 = MEM_W(ctx->r4, 0X18);
    // 0x80268EEC: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x80268EF0: sh          $zero, 0xB6C($at)
    MEM_H(0XB6C, ctx->r1) = 0;
    // 0x80268EF4: lhu         $t6, 0x10($a0)
    ctx->r14 = MEM_HU(ctx->r4, 0X10);
    // 0x80268EF8: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x80268EFC: andi        $t7, $t6, 0xF0FF
    ctx->r15 = ctx->r14 & 0XF0FF;
    // 0x80268F00: sh          $t7, 0x10($a0)
    MEM_H(0X10, ctx->r4) = ctx->r15;
    // 0x80268F04: sh          $zero, 0xB6E($at)
    MEM_H(0XB6E, ctx->r1) = 0;
    // 0x80268F08: jal         0x80268E54
    // 0x80268F0C: sw          $a0, 0xC0($sp)
    MEM_W(0XC0, ctx->r29) = ctx->r4;
    ovl_8024B800_func_80268E54(rdram, ctx);
        goto after_0;
    // 0x80268F0C: sw          $a0, 0xC0($sp)
    MEM_W(0XC0, ctx->r29) = ctx->r4;
    after_0:
    // 0x80268F10: lui         $s7, 0x8028
    ctx->r23 = S32(0X8028 << 16);
    // 0x80268F14: lui         $s6, 0x8028
    ctx->r22 = S32(0X8028 << 16);
    // 0x80268F18: lui         $s3, 0x8028
    ctx->r19 = S32(0X8028 << 16);
    // 0x80268F1C: or          $s2, $v0, $zero
    ctx->r18 = ctx->r2 | 0;
    // 0x80268F20: addiu       $s3, $s3, -0x3490
    ctx->r19 = ADD32(ctx->r19, -0X3490);
    // 0x80268F24: addiu       $s6, $s6, -0x34A8
    ctx->r22 = ADD32(ctx->r22, -0X34A8);
    // 0x80268F28: addiu       $s7, $s7, -0x349C
    ctx->r23 = ADD32(ctx->r23, -0X349C);
    // 0x80268F2C: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    // 0x80268F30: addiu       $fp, $zero, 0x2
    ctx->r30 = ADD32(0, 0X2);
    // 0x80268F34: addiu       $s5, $zero, 0xB
    ctx->r21 = ADD32(0, 0XB);
    // 0x80268F38: addiu       $s4, $zero, 0x4
    ctx->r20 = ADD32(0, 0X4);
L_80268F3C:
    // 0x80268F3C: lhu         $t8, 0xC($s0)
    ctx->r24 = MEM_HU(ctx->r16, 0XC);
    // 0x80268F40: nop

    // 0x80268F44: beq         $t8, $zero, L_80268F90
    if (ctx->r24 == 0) {
        // 0x80268F48: nop
    
            goto L_80268F90;
    }
    // 0x80268F48: nop

    // 0x80268F4C: bne         $s2, $fp, L_80268F64
    if (ctx->r18 != ctx->r30) {
        // 0x80268F50: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80268F64;
    }
    // 0x80268F50: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80268F54: jal         0x8026F2EC
    // 0x80268F58: or          $a1, $s3, $zero
    ctx->r5 = ctx->r19 | 0;
    ovl_8024B800_func_8026F2EC(rdram, ctx);
        goto after_1;
    // 0x80268F58: or          $a1, $s3, $zero
    ctx->r5 = ctx->r19 | 0;
    after_1:
    // 0x80268F5C: b           L_80268F7C
    // 0x80268F60: nop

        goto L_80268F7C;
    // 0x80268F60: nop

L_80268F64:
    // 0x80268F64: beq         $s2, $zero, L_80268F74
    if (ctx->r18 == 0) {
        // 0x80268F68: or          $a1, $s7, $zero
        ctx->r5 = ctx->r23 | 0;
            goto L_80268F74;
    }
    // 0x80268F68: or          $a1, $s7, $zero
    ctx->r5 = ctx->r23 | 0;
    // 0x80268F6C: b           L_80268F74
    // 0x80268F70: or          $a1, $s6, $zero
    ctx->r5 = ctx->r22 | 0;
        goto L_80268F74;
    // 0x80268F70: or          $a1, $s6, $zero
    ctx->r5 = ctx->r22 | 0;
L_80268F74:
    // 0x80268F74: jal         0x8026F2EC
    // 0x80268F78: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_8024B800_func_8026F2EC(rdram, ctx);
        goto after_2;
    // 0x80268F78: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_2:
L_80268F7C:
    // 0x80268F7C: jal         0x80059898
    // 0x80268F80: addiu       $a0, $zero, 0xA
    ctx->r4 = ADD32(0, 0XA);
    func_80059898(rdram, ctx);
        goto after_3;
    // 0x80268F80: addiu       $a0, $zero, 0xA
    ctx->r4 = ADD32(0, 0XA);
    after_3:
    // 0x80268F84: addiu       $t9, $v0, 0xA
    ctx->r25 = ADD32(ctx->r2, 0XA);
    // 0x80268F88: sh          $t9, 0x24($s0)
    MEM_H(0X24, ctx->r16) = ctx->r25;
    // 0x80268F8C: sh          $s4, 0x22($s0)
    MEM_H(0X22, ctx->r16) = ctx->r20;
L_80268F90:
    // 0x80268F90: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x80268F94: bne         $s1, $s5, L_80268F3C
    if (ctx->r17 != ctx->r21) {
        // 0x80268F98: addiu       $s0, $s0, 0xF8
        ctx->r16 = ADD32(ctx->r16, 0XF8);
            goto L_80268F3C;
    }
    // 0x80268F98: addiu       $s0, $s0, 0xF8
    ctx->r16 = ADD32(ctx->r16, 0XF8);
    // 0x80268F9C: beq         $s2, $fp, L_802691EC
    if (ctx->r18 == ctx->r30) {
        // 0x80268FA0: lw          $ra, 0x44($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X44);
            goto L_802691EC;
    }
    // 0x80268FA0: lw          $ra, 0x44($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X44);
    // 0x80268FA4: beq         $s2, $zero, L_802691C8
    if (ctx->r18 == 0) {
        // 0x80268FA8: lw          $t3, 0xC0($sp)
        ctx->r11 = MEM_W(ctx->r29, 0XC0);
            goto L_802691C8;
    }
    // 0x80268FA8: lw          $t3, 0xC0($sp)
    ctx->r11 = MEM_W(ctx->r29, 0XC0);
    // 0x80268FAC: lw          $v0, 0xC0($sp)
    ctx->r2 = MEM_W(ctx->r29, 0XC0);
    // 0x80268FB0: addiu       $s2, $zero, 0xF8
    ctx->r18 = ADD32(0, 0XF8);
    // 0x80268FB4: lhu         $t0, 0x318($v0)
    ctx->r8 = MEM_HU(ctx->r2, 0X318);
    // 0x80268FB8: lw          $t2, 0x18($v0)
    ctx->r10 = MEM_W(ctx->r2, 0X18);
    // 0x80268FBC: multu       $t0, $s2
    result = U64(U32(ctx->r8)) * U64(U32(ctx->r18)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80268FC0: lui         $s1, 0x8012
    ctx->r17 = S32(0X8012 << 16);
    // 0x80268FC4: addiu       $s1, $s1, 0xB24
    ctx->r17 = ADD32(ctx->r17, 0XB24);
    // 0x80268FC8: lui         $a1, 0x8028
    ctx->r5 = S32(0X8028 << 16);
    // 0x80268FCC: addiu       $a1, $a1, -0x34E4
    ctx->r5 = ADD32(ctx->r5, -0X34E4);
    // 0x80268FD0: mflo        $t1
    ctx->r9 = lo;
    // 0x80268FD4: addu        $a0, $t1, $t2
    ctx->r4 = ADD32(ctx->r9, ctx->r10);
    // 0x80268FD8: jal         0x8026F2EC
    // 0x80268FDC: sw          $a0, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->r4;
    ovl_8024B800_func_8026F2EC(rdram, ctx);
        goto after_4;
    // 0x80268FDC: sw          $a0, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->r4;
    after_4:
    // 0x80268FE0: lw          $v0, 0x0($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X0);
    // 0x80268FE4: lw          $a0, 0xC0($sp)
    ctx->r4 = MEM_W(ctx->r29, 0XC0);
    // 0x80268FE8: lw          $a2, 0x4C($v0)
    ctx->r6 = MEM_W(ctx->r2, 0X4C);
    // 0x80268FEC: lw          $a3, 0x44($v0)
    ctx->r7 = MEM_W(ctx->r2, 0X44);
    // 0x80268FF0: jal         0x8027A42C
    // 0x80268FF4: addiu       $a1, $sp, 0x50
    ctx->r5 = ADD32(ctx->r29, 0X50);
    ovl_8024B800_func_8027A42C(rdram, ctx);
        goto after_5;
    // 0x80268FF4: addiu       $a1, $sp, 0x50
    ctx->r5 = ADD32(ctx->r29, 0X50);
    after_5:
    // 0x80268FF8: lhu         $t4, 0x58($sp)
    ctx->r12 = MEM_HU(ctx->r29, 0X58);
    // 0x80268FFC: lw          $v0, 0xC0($sp)
    ctx->r2 = MEM_W(ctx->r29, 0XC0);
    // 0x80269000: multu       $t4, $s2
    result = U64(U32(ctx->r12)) * U64(U32(ctx->r18)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80269004: lw          $t6, 0x18($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X18);
    // 0x80269008: lui         $a1, 0x8028
    ctx->r5 = S32(0X8028 << 16);
    // 0x8026900C: addiu       $a1, $a1, -0x34D0
    ctx->r5 = ADD32(ctx->r5, -0X34D0);
    // 0x80269010: mflo        $t5
    ctx->r13 = lo;
    // 0x80269014: addu        $a0, $t5, $t6
    ctx->r4 = ADD32(ctx->r13, ctx->r14);
    // 0x80269018: jal         0x8026F2EC
    // 0x8026901C: sw          $a0, 0x914($v0)
    MEM_W(0X914, ctx->r2) = ctx->r4;
    ovl_8024B800_func_8026F2EC(rdram, ctx);
        goto after_6;
    // 0x8026901C: sw          $a0, 0x914($v0)
    MEM_W(0X914, ctx->r2) = ctx->r4;
    after_6:
    // 0x80269020: lw          $v0, 0x0($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X0);
    // 0x80269024: addiu       $s3, $sp, 0xB0
    ctx->r19 = ADD32(ctx->r29, 0XB0);
    // 0x80269028: lw          $a2, 0x4C($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X4C);
    // 0x8026902C: lw          $a3, 0x44($s0)
    ctx->r7 = MEM_W(ctx->r16, 0X44);
    // 0x80269030: lwc1        $f12, 0x4C($v0)
    ctx->f12.u32l = MEM_W(ctx->r2, 0X4C);
    // 0x80269034: lwc1        $f14, 0x44($v0)
    ctx->f14.u32l = MEM_W(ctx->r2, 0X44);
    // 0x80269038: jal         0x80272B1C
    // 0x8026903C: sw          $s3, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r19;
    ovl_8024B800_func_80272B1C(rdram, ctx);
        goto after_7;
    // 0x8026903C: sw          $s3, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r19;
    after_7:
    // 0x80269040: lwc1        $f12, 0xB0($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0XB0);
    // 0x80269044: jal         0x80081040
    // 0x80269048: nop

    func_80081040(rdram, ctx);
        goto after_8;
    // 0x80269048: nop

    after_8:
    // 0x8026904C: lui         $at, 0x4170
    ctx->r1 = S32(0X4170 << 16);
    // 0x80269050: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80269054: lw          $t7, 0x0($s1)
    ctx->r15 = MEM_W(ctx->r17, 0X0);
    // 0x80269058: mul.s       $f6, $f0, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f0.fl, ctx->f4.fl);
    // 0x8026905C: lwc1        $f8, 0x4C($t7)
    ctx->f8.u32l = MEM_W(ctx->r15, 0X4C);
    // 0x80269060: nop

    // 0x80269064: add.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x80269068: cfc1        $t8, $FpcCsr
    ctx->r24 = get_cop1_cs();
    // 0x8026906C: nop

    // 0x80269070: ori         $at, $t8, 0x3
    ctx->r1 = ctx->r24 | 0X3;
    // 0x80269074: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x80269078: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x8026907C: nop

    // 0x80269080: cvt.w.s     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.u32l = CVT_W_S(ctx->f10.fl);
    // 0x80269084: mfc1        $t9, $f16
    ctx->r25 = (int32_t)ctx->f16.u32l;
    // 0x80269088: ctc1        $t8, $FpcCsr
    set_cop1_cs(ctx->r24);
    // 0x8026908C: sh          $t9, 0x2E($s0)
    MEM_H(0X2E, ctx->r16) = ctx->r25;
    // 0x80269090: lwc1        $f12, 0xB0($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0XB0);
    // 0x80269094: jal         0x80080E80
    // 0x80269098: nop

    func_80080E80(rdram, ctx);
        goto after_9;
    // 0x80269098: nop

    after_9:
    // 0x8026909C: lui         $at, 0x4170
    ctx->r1 = S32(0X4170 << 16);
    // 0x802690A0: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x802690A4: lw          $t0, 0x0($s1)
    ctx->r8 = MEM_W(ctx->r17, 0X0);
    // 0x802690A8: mul.s       $f4, $f0, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = MUL_S(ctx->f0.fl, ctx->f18.fl);
    // 0x802690AC: lwc1        $f6, 0x44($t0)
    ctx->f6.u32l = MEM_W(ctx->r8, 0X44);
    // 0x802690B0: lui         $a1, 0x8028
    ctx->r5 = S32(0X8028 << 16);
    // 0x802690B4: addiu       $a1, $a1, -0x34BC
    ctx->r5 = ADD32(ctx->r5, -0X34BC);
    // 0x802690B8: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x802690BC: cfc1        $t1, $FpcCsr
    ctx->r9 = get_cop1_cs();
    // 0x802690C0: nop

    // 0x802690C4: ori         $at, $t1, 0x3
    ctx->r1 = ctx->r9 | 0X3;
    // 0x802690C8: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x802690CC: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x802690D0: nop

    // 0x802690D4: cvt.w.s     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.u32l = CVT_W_S(ctx->f8.fl);
    // 0x802690D8: mfc1        $t2, $f10
    ctx->r10 = (int32_t)ctx->f10.u32l;
    // 0x802690DC: ctc1        $t1, $FpcCsr
    set_cop1_cs(ctx->r9);
    // 0x802690E0: sh          $t2, 0x30($s0)
    MEM_H(0X30, ctx->r16) = ctx->r10;
    // 0x802690E4: lhu         $t3, 0x60($sp)
    ctx->r11 = MEM_HU(ctx->r29, 0X60);
    // 0x802690E8: lw          $t5, 0xC0($sp)
    ctx->r13 = MEM_W(ctx->r29, 0XC0);
    // 0x802690EC: multu       $t3, $s2
    result = U64(U32(ctx->r11)) * U64(U32(ctx->r18)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x802690F0: lw          $t6, 0x18($t5)
    ctx->r14 = MEM_W(ctx->r13, 0X18);
    // 0x802690F4: mflo        $t4
    ctx->r12 = lo;
    // 0x802690F8: addu        $a0, $t4, $t6
    ctx->r4 = ADD32(ctx->r12, ctx->r14);
    // 0x802690FC: jal         0x8026F2EC
    // 0x80269100: nop

    ovl_8024B800_func_8026F2EC(rdram, ctx);
        goto after_10;
    // 0x80269100: nop

    after_10:
    // 0x80269104: lw          $v0, 0x0($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X0);
    // 0x80269108: lw          $a2, 0x4C($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X4C);
    // 0x8026910C: lw          $a3, 0x44($s0)
    ctx->r7 = MEM_W(ctx->r16, 0X44);
    // 0x80269110: lwc1        $f12, 0x4C($v0)
    ctx->f12.u32l = MEM_W(ctx->r2, 0X4C);
    // 0x80269114: lwc1        $f14, 0x44($v0)
    ctx->f14.u32l = MEM_W(ctx->r2, 0X44);
    // 0x80269118: jal         0x80272B1C
    // 0x8026911C: sw          $s3, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r19;
    ovl_8024B800_func_80272B1C(rdram, ctx);
        goto after_11;
    // 0x8026911C: sw          $s3, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r19;
    after_11:
    // 0x80269120: lwc1        $f12, 0xB0($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0XB0);
    // 0x80269124: jal         0x80081040
    // 0x80269128: nop

    func_80081040(rdram, ctx);
        goto after_12;
    // 0x80269128: nop

    after_12:
    // 0x8026912C: lui         $at, 0x4170
    ctx->r1 = S32(0X4170 << 16);
    // 0x80269130: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x80269134: lw          $t7, 0x0($s1)
    ctx->r15 = MEM_W(ctx->r17, 0X0);
    // 0x80269138: mul.s       $f18, $f0, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = MUL_S(ctx->f0.fl, ctx->f16.fl);
    // 0x8026913C: lwc1        $f4, 0x4C($t7)
    ctx->f4.u32l = MEM_W(ctx->r15, 0X4C);
    // 0x80269140: nop

    // 0x80269144: add.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f18.fl + ctx->f4.fl;
    // 0x80269148: cfc1        $t8, $FpcCsr
    ctx->r24 = get_cop1_cs();
    // 0x8026914C: nop

    // 0x80269150: ori         $at, $t8, 0x3
    ctx->r1 = ctx->r24 | 0X3;
    // 0x80269154: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x80269158: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x8026915C: nop

    // 0x80269160: cvt.w.s     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.u32l = CVT_W_S(ctx->f6.fl);
    // 0x80269164: mfc1        $t9, $f8
    ctx->r25 = (int32_t)ctx->f8.u32l;
    // 0x80269168: ctc1        $t8, $FpcCsr
    set_cop1_cs(ctx->r24);
    // 0x8026916C: sh          $t9, 0x2E($s0)
    MEM_H(0X2E, ctx->r16) = ctx->r25;
    // 0x80269170: lwc1        $f12, 0xB0($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0XB0);
    // 0x80269174: jal         0x80080E80
    // 0x80269178: nop

    func_80080E80(rdram, ctx);
        goto after_13;
    // 0x80269178: nop

    after_13:
    // 0x8026917C: lui         $at, 0x4170
    ctx->r1 = S32(0X4170 << 16);
    // 0x80269180: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x80269184: lw          $t0, 0x0($s1)
    ctx->r8 = MEM_W(ctx->r17, 0X0);
    // 0x80269188: mul.s       $f16, $f0, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = MUL_S(ctx->f0.fl, ctx->f10.fl);
    // 0x8026918C: lwc1        $f18, 0x44($t0)
    ctx->f18.u32l = MEM_W(ctx->r8, 0X44);
    // 0x80269190: nop

    // 0x80269194: add.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f16.fl + ctx->f18.fl;
    // 0x80269198: cfc1        $t1, $FpcCsr
    ctx->r9 = get_cop1_cs();
    // 0x8026919C: nop

    // 0x802691A0: ori         $at, $t1, 0x3
    ctx->r1 = ctx->r9 | 0X3;
    // 0x802691A4: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x802691A8: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x802691AC: nop

    // 0x802691B0: cvt.w.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = CVT_W_S(ctx->f4.fl);
    // 0x802691B4: mfc1        $t2, $f6
    ctx->r10 = (int32_t)ctx->f6.u32l;
    // 0x802691B8: ctc1        $t1, $FpcCsr
    set_cop1_cs(ctx->r9);
    // 0x802691BC: b           L_802691E8
    // 0x802691C0: sh          $t2, 0x30($s0)
    MEM_H(0X30, ctx->r16) = ctx->r10;
        goto L_802691E8;
    // 0x802691C0: sh          $t2, 0x30($s0)
    MEM_H(0X30, ctx->r16) = ctx->r10;
    // 0x802691C4: lw          $t3, 0xC0($sp)
    ctx->r11 = MEM_W(ctx->r29, 0XC0);
L_802691C8:
    // 0x802691C8: addiu       $s2, $zero, 0xF8
    ctx->r18 = ADD32(0, 0XF8);
    // 0x802691CC: lhu         $t5, 0x318($t3)
    ctx->r13 = MEM_HU(ctx->r11, 0X318);
    // 0x802691D0: lw          $t6, 0x18($t3)
    ctx->r14 = MEM_W(ctx->r11, 0X18);
    // 0x802691D4: multu       $t5, $s2
    result = U64(U32(ctx->r13)) * U64(U32(ctx->r18)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x802691D8: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x802691DC: mflo        $t4
    ctx->r12 = lo;
    // 0x802691E0: addu        $t7, $t4, $t6
    ctx->r15 = ADD32(ctx->r12, ctx->r14);
    // 0x802691E4: sw          $t7, 0xB38($at)
    MEM_W(0XB38, ctx->r1) = ctx->r15;
L_802691E8:
    // 0x802691E8: lw          $ra, 0x44($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X44);
L_802691EC:
    // 0x802691EC: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x802691F0: lw          $s1, 0x24($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X24);
    // 0x802691F4: lw          $s2, 0x28($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X28);
    // 0x802691F8: lw          $s3, 0x2C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X2C);
    // 0x802691FC: lw          $s4, 0x30($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X30);
    // 0x80269200: lw          $s5, 0x34($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X34);
    // 0x80269204: lw          $s6, 0x38($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X38);
    // 0x80269208: lw          $s7, 0x3C($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X3C);
    // 0x8026920C: lw          $fp, 0x40($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X40);
    // 0x80269210: jr          $ra
    // 0x80269214: addiu       $sp, $sp, 0xC0
    ctx->r29 = ADD32(ctx->r29, 0XC0);
    return;
    // 0x80269214: addiu       $sp, $sp, 0xC0
    ctx->r29 = ADD32(ctx->r29, 0XC0);
;}
RECOMP_FUNC void ovl_8024B800_func_80268EE0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80268EE0: sw          $s1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r17;
    // 0x80268EE4: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x80268EE8: lw          $s0, 0x18($a0)
    ctx->r16 = MEM_W(ctx->r4, 0X18);
    // 0x80268EEC: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x80268EF0: sh          $zero, 0xB6C($at)
    MEM_H(0XB6C, ctx->r1) = 0;
    // 0x80268EF4: lhu         $t6, 0x10($a0)
    ctx->r14 = MEM_HU(ctx->r4, 0X10);
    // 0x80268EF8: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x80268EFC: andi        $t7, $t6, 0xF0FF
    ctx->r15 = ctx->r14 & 0XF0FF;
    // 0x80268F00: sh          $t7, 0x10($a0)
    MEM_H(0X10, ctx->r4) = ctx->r15;
    // 0x80268F04: sh          $zero, 0xB6E($at)
    MEM_H(0XB6E, ctx->r1) = 0;
    // 0x80268F08: jal         0x80268E54
    // 0x80268F0C: sw          $a0, 0xC0($sp)
    MEM_W(0XC0, ctx->r29) = ctx->r4;
    ovl_8024B800_func_80268E54(rdram, ctx);
        goto after_0;
    // 0x80268F0C: sw          $a0, 0xC0($sp)
    MEM_W(0XC0, ctx->r29) = ctx->r4;
    after_0:
    // 0x80268F10: lui         $s7, 0x8028
    ctx->r23 = S32(0X8028 << 16);
    // 0x80268F14: lui         $s6, 0x8028
    ctx->r22 = S32(0X8028 << 16);
    // 0x80268F18: lui         $s3, 0x8028
    ctx->r19 = S32(0X8028 << 16);
    // 0x80268F1C: or          $s2, $v0, $zero
    ctx->r18 = ctx->r2 | 0;
    // 0x80268F20: addiu       $s3, $s3, -0x3490
    ctx->r19 = ADD32(ctx->r19, -0X3490);
    // 0x80268F24: addiu       $s6, $s6, -0x34A8
    ctx->r22 = ADD32(ctx->r22, -0X34A8);
    // 0x80268F28: addiu       $s7, $s7, -0x349C
    ctx->r23 = ADD32(ctx->r23, -0X349C);
    // 0x80268F2C: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    // 0x80268F30: addiu       $fp, $zero, 0x2
    ctx->r30 = ADD32(0, 0X2);
    // 0x80268F34: addiu       $s5, $zero, 0xB
    ctx->r21 = ADD32(0, 0XB);
    // 0x80268F38: addiu       $s4, $zero, 0x4
    ctx->r20 = ADD32(0, 0X4);
L_80268F3C:
    // 0x80268F3C: lhu         $t8, 0xC($s0)
    ctx->r24 = MEM_HU(ctx->r16, 0XC);
    // 0x80268F40: nop

    // 0x80268F44: beq         $t8, $zero, L_80268F90
    if (ctx->r24 == 0) {
        // 0x80268F48: nop
    
            goto L_80268F90;
    }
    // 0x80268F48: nop

    // 0x80268F4C: bne         $s2, $fp, L_80268F64
    if (ctx->r18 != ctx->r30) {
        // 0x80268F50: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80268F64;
    }
    // 0x80268F50: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80268F54: jal         0x8026F2EC
    // 0x80268F58: or          $a1, $s3, $zero
    ctx->r5 = ctx->r19 | 0;
    ovl_8024B800_func_8026F2EC(rdram, ctx);
        goto after_1;
    // 0x80268F58: or          $a1, $s3, $zero
    ctx->r5 = ctx->r19 | 0;
    after_1:
    // 0x80268F5C: b           L_80268F7C
    // 0x80268F60: nop

        goto L_80268F7C;
    // 0x80268F60: nop

L_80268F64:
    // 0x80268F64: beq         $s2, $zero, L_80268F74
    if (ctx->r18 == 0) {
        // 0x80268F68: or          $a1, $s7, $zero
        ctx->r5 = ctx->r23 | 0;
            goto L_80268F74;
    }
    // 0x80268F68: or          $a1, $s7, $zero
    ctx->r5 = ctx->r23 | 0;
    // 0x80268F6C: b           L_80268F74
    // 0x80268F70: or          $a1, $s6, $zero
    ctx->r5 = ctx->r22 | 0;
        goto L_80268F74;
    // 0x80268F70: or          $a1, $s6, $zero
    ctx->r5 = ctx->r22 | 0;
L_80268F74:
    // 0x80268F74: jal         0x8026F2EC
    // 0x80268F78: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_8024B800_func_8026F2EC(rdram, ctx);
        goto after_2;
    // 0x80268F78: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_2:
L_80268F7C:
    // 0x80268F7C: jal         0x80059898
    // 0x80268F80: addiu       $a0, $zero, 0xA
    ctx->r4 = ADD32(0, 0XA);
    func_80059898(rdram, ctx);
        goto after_3;
    // 0x80268F80: addiu       $a0, $zero, 0xA
    ctx->r4 = ADD32(0, 0XA);
    after_3:
    // 0x80268F84: addiu       $t9, $v0, 0xA
    ctx->r25 = ADD32(ctx->r2, 0XA);
    // 0x80268F88: sh          $t9, 0x24($s0)
    MEM_H(0X24, ctx->r16) = ctx->r25;
    // 0x80268F8C: sh          $s4, 0x22($s0)
    MEM_H(0X22, ctx->r16) = ctx->r20;
L_80268F90:
    // 0x80268F90: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x80268F94: bne         $s1, $s5, L_80268F3C
    if (ctx->r17 != ctx->r21) {
        // 0x80268F98: addiu       $s0, $s0, 0xF8
        ctx->r16 = ADD32(ctx->r16, 0XF8);
            goto L_80268F3C;
    }
    // 0x80268F98: addiu       $s0, $s0, 0xF8
    ctx->r16 = ADD32(ctx->r16, 0XF8);
    // 0x80268F9C: beq         $s2, $fp, L_802691EC
    if (ctx->r18 == ctx->r30) {
        // 0x80268FA0: lw          $ra, 0x44($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X44);
            goto L_802691EC;
    }
    // 0x80268FA0: lw          $ra, 0x44($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X44);
    // 0x80268FA4: beq         $s2, $zero, L_802691C8
    if (ctx->r18 == 0) {
        // 0x80268FA8: lw          $t3, 0xC0($sp)
        ctx->r11 = MEM_W(ctx->r29, 0XC0);
            goto L_802691C8;
    }
    // 0x80268FA8: lw          $t3, 0xC0($sp)
    ctx->r11 = MEM_W(ctx->r29, 0XC0);
    // 0x80268FAC: lw          $v0, 0xC0($sp)
    ctx->r2 = MEM_W(ctx->r29, 0XC0);
    // 0x80268FB0: addiu       $s2, $zero, 0xF8
    ctx->r18 = ADD32(0, 0XF8);
    // 0x80268FB4: lhu         $t0, 0x318($v0)
    ctx->r8 = MEM_HU(ctx->r2, 0X318);
    // 0x80268FB8: lw          $t2, 0x18($v0)
    ctx->r10 = MEM_W(ctx->r2, 0X18);
    // 0x80268FBC: multu       $t0, $s2
    result = U64(U32(ctx->r8)) * U64(U32(ctx->r18)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80268FC0: lui         $s1, 0x8012
    ctx->r17 = S32(0X8012 << 16);
    // 0x80268FC4: addiu       $s1, $s1, 0xB24
    ctx->r17 = ADD32(ctx->r17, 0XB24);
    // 0x80268FC8: lui         $a1, 0x8028
    ctx->r5 = S32(0X8028 << 16);
    // 0x80268FCC: addiu       $a1, $a1, -0x34E4
    ctx->r5 = ADD32(ctx->r5, -0X34E4);
    // 0x80268FD0: mflo        $t1
    ctx->r9 = lo;
    // 0x80268FD4: addu        $a0, $t1, $t2
    ctx->r4 = ADD32(ctx->r9, ctx->r10);
    // 0x80268FD8: jal         0x8026F2EC
    // 0x80268FDC: sw          $a0, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->r4;
    ovl_8024B800_func_8026F2EC(rdram, ctx);
        goto after_4;
    // 0x80268FDC: sw          $a0, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->r4;
    after_4:
    // 0x80268FE0: lw          $v0, 0x0($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X0);
    // 0x80268FE4: lw          $a0, 0xC0($sp)
    ctx->r4 = MEM_W(ctx->r29, 0XC0);
    // 0x80268FE8: lw          $a2, 0x4C($v0)
    ctx->r6 = MEM_W(ctx->r2, 0X4C);
    // 0x80268FEC: lw          $a3, 0x44($v0)
    ctx->r7 = MEM_W(ctx->r2, 0X44);
    // 0x80268FF0: jal         0x8027A42C
    // 0x80268FF4: addiu       $a1, $sp, 0x50
    ctx->r5 = ADD32(ctx->r29, 0X50);
    ovl_8024B800_func_8027A42C(rdram, ctx);
        goto after_5;
    // 0x80268FF4: addiu       $a1, $sp, 0x50
    ctx->r5 = ADD32(ctx->r29, 0X50);
    after_5:
    // 0x80268FF8: lhu         $t4, 0x58($sp)
    ctx->r12 = MEM_HU(ctx->r29, 0X58);
    // 0x80268FFC: lw          $v0, 0xC0($sp)
    ctx->r2 = MEM_W(ctx->r29, 0XC0);
    // 0x80269000: multu       $t4, $s2
    result = U64(U32(ctx->r12)) * U64(U32(ctx->r18)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80269004: lw          $t6, 0x18($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X18);
    // 0x80269008: lui         $a1, 0x8028
    ctx->r5 = S32(0X8028 << 16);
    // 0x8026900C: addiu       $a1, $a1, -0x34D0
    ctx->r5 = ADD32(ctx->r5, -0X34D0);
    // 0x80269010: mflo        $t5
    ctx->r13 = lo;
    // 0x80269014: addu        $a0, $t5, $t6
    ctx->r4 = ADD32(ctx->r13, ctx->r14);
    // 0x80269018: jal         0x8026F2EC
    // 0x8026901C: sw          $a0, 0x914($v0)
    MEM_W(0X914, ctx->r2) = ctx->r4;
    ovl_8024B800_func_8026F2EC(rdram, ctx);
        goto after_6;
    // 0x8026901C: sw          $a0, 0x914($v0)
    MEM_W(0X914, ctx->r2) = ctx->r4;
    after_6:
    // 0x80269020: lw          $v0, 0x0($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X0);
    // 0x80269024: addiu       $s3, $sp, 0xB0
    ctx->r19 = ADD32(ctx->r29, 0XB0);
    // 0x80269028: lw          $a2, 0x4C($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X4C);
    // 0x8026902C: lw          $a3, 0x44($s0)
    ctx->r7 = MEM_W(ctx->r16, 0X44);
    // 0x80269030: lwc1        $f12, 0x4C($v0)
    ctx->f12.u32l = MEM_W(ctx->r2, 0X4C);
    // 0x80269034: lwc1        $f14, 0x44($v0)
    ctx->f14.u32l = MEM_W(ctx->r2, 0X44);
    // 0x80269038: jal         0x80272B1C
    // 0x8026903C: sw          $s3, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r19;
    ovl_8024B800_func_80272B1C(rdram, ctx);
        goto after_7;
    // 0x8026903C: sw          $s3, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r19;
    after_7:
    // 0x80269040: lwc1        $f12, 0xB0($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0XB0);
    // 0x80269044: jal         0x80081040
    // 0x80269048: nop

    func_80081040(rdram, ctx);
        goto after_8;
    // 0x80269048: nop

    after_8:
    // 0x8026904C: lui         $at, 0x4170
    ctx->r1 = S32(0X4170 << 16);
    // 0x80269050: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80269054: lw          $t7, 0x0($s1)
    ctx->r15 = MEM_W(ctx->r17, 0X0);
    // 0x80269058: mul.s       $f6, $f0, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f0.fl, ctx->f4.fl);
    // 0x8026905C: lwc1        $f8, 0x4C($t7)
    ctx->f8.u32l = MEM_W(ctx->r15, 0X4C);
    // 0x80269060: nop

    // 0x80269064: add.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x80269068: cfc1        $t8, $FpcCsr
    ctx->r24 = get_cop1_cs();
    // 0x8026906C: nop

    // 0x80269070: ori         $at, $t8, 0x3
    ctx->r1 = ctx->r24 | 0X3;
    // 0x80269074: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x80269078: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x8026907C: nop

    // 0x80269080: cvt.w.s     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.u32l = CVT_W_S(ctx->f10.fl);
    // 0x80269084: mfc1        $t9, $f16
    ctx->r25 = (int32_t)ctx->f16.u32l;
    // 0x80269088: ctc1        $t8, $FpcCsr
    set_cop1_cs(ctx->r24);
    // 0x8026908C: sh          $t9, 0x2E($s0)
    MEM_H(0X2E, ctx->r16) = ctx->r25;
    // 0x80269090: lwc1        $f12, 0xB0($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0XB0);
    // 0x80269094: jal         0x80080E80
    // 0x80269098: nop

    func_80080E80(rdram, ctx);
        goto after_9;
    // 0x80269098: nop

    after_9:
    // 0x8026909C: lui         $at, 0x4170
    ctx->r1 = S32(0X4170 << 16);
    // 0x802690A0: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x802690A4: lw          $t0, 0x0($s1)
    ctx->r8 = MEM_W(ctx->r17, 0X0);
    // 0x802690A8: mul.s       $f4, $f0, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = MUL_S(ctx->f0.fl, ctx->f18.fl);
    // 0x802690AC: lwc1        $f6, 0x44($t0)
    ctx->f6.u32l = MEM_W(ctx->r8, 0X44);
    // 0x802690B0: lui         $a1, 0x8028
    ctx->r5 = S32(0X8028 << 16);
    // 0x802690B4: addiu       $a1, $a1, -0x34BC
    ctx->r5 = ADD32(ctx->r5, -0X34BC);
    // 0x802690B8: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x802690BC: cfc1        $t1, $FpcCsr
    ctx->r9 = get_cop1_cs();
    // 0x802690C0: nop

    // 0x802690C4: ori         $at, $t1, 0x3
    ctx->r1 = ctx->r9 | 0X3;
    // 0x802690C8: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x802690CC: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x802690D0: nop

    // 0x802690D4: cvt.w.s     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.u32l = CVT_W_S(ctx->f8.fl);
    // 0x802690D8: mfc1        $t2, $f10
    ctx->r10 = (int32_t)ctx->f10.u32l;
    // 0x802690DC: ctc1        $t1, $FpcCsr
    set_cop1_cs(ctx->r9);
    // 0x802690E0: sh          $t2, 0x30($s0)
    MEM_H(0X30, ctx->r16) = ctx->r10;
    // 0x802690E4: lhu         $t3, 0x60($sp)
    ctx->r11 = MEM_HU(ctx->r29, 0X60);
    // 0x802690E8: lw          $t5, 0xC0($sp)
    ctx->r13 = MEM_W(ctx->r29, 0XC0);
    // 0x802690EC: multu       $t3, $s2
    result = U64(U32(ctx->r11)) * U64(U32(ctx->r18)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x802690F0: lw          $t6, 0x18($t5)
    ctx->r14 = MEM_W(ctx->r13, 0X18);
    // 0x802690F4: mflo        $t4
    ctx->r12 = lo;
    // 0x802690F8: addu        $a0, $t4, $t6
    ctx->r4 = ADD32(ctx->r12, ctx->r14);
    // 0x802690FC: jal         0x8026F2EC
    // 0x80269100: nop

    ovl_8024B800_func_8026F2EC(rdram, ctx);
        goto after_10;
    // 0x80269100: nop

    after_10:
    // 0x80269104: lw          $v0, 0x0($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X0);
    // 0x80269108: lw          $a2, 0x4C($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X4C);
    // 0x8026910C: lw          $a3, 0x44($s0)
    ctx->r7 = MEM_W(ctx->r16, 0X44);
    // 0x80269110: lwc1        $f12, 0x4C($v0)
    ctx->f12.u32l = MEM_W(ctx->r2, 0X4C);
    // 0x80269114: lwc1        $f14, 0x44($v0)
    ctx->f14.u32l = MEM_W(ctx->r2, 0X44);
    // 0x80269118: jal         0x80272B1C
    // 0x8026911C: sw          $s3, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r19;
    ovl_8024B800_func_80272B1C(rdram, ctx);
        goto after_11;
    // 0x8026911C: sw          $s3, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r19;
    after_11:
    // 0x80269120: lwc1        $f12, 0xB0($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0XB0);
    // 0x80269124: jal         0x80081040
    // 0x80269128: nop

    func_80081040(rdram, ctx);
        goto after_12;
    // 0x80269128: nop

    after_12:
    // 0x8026912C: lui         $at, 0x4170
    ctx->r1 = S32(0X4170 << 16);
    // 0x80269130: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x80269134: lw          $t7, 0x0($s1)
    ctx->r15 = MEM_W(ctx->r17, 0X0);
    // 0x80269138: mul.s       $f18, $f0, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = MUL_S(ctx->f0.fl, ctx->f16.fl);
    // 0x8026913C: lwc1        $f4, 0x4C($t7)
    ctx->f4.u32l = MEM_W(ctx->r15, 0X4C);
    // 0x80269140: nop

    // 0x80269144: add.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f18.fl + ctx->f4.fl;
    // 0x80269148: cfc1        $t8, $FpcCsr
    ctx->r24 = get_cop1_cs();
    // 0x8026914C: nop

    // 0x80269150: ori         $at, $t8, 0x3
    ctx->r1 = ctx->r24 | 0X3;
    // 0x80269154: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x80269158: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x8026915C: nop

    // 0x80269160: cvt.w.s     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.u32l = CVT_W_S(ctx->f6.fl);
    // 0x80269164: mfc1        $t9, $f8
    ctx->r25 = (int32_t)ctx->f8.u32l;
    // 0x80269168: ctc1        $t8, $FpcCsr
    set_cop1_cs(ctx->r24);
    // 0x8026916C: sh          $t9, 0x2E($s0)
    MEM_H(0X2E, ctx->r16) = ctx->r25;
    // 0x80269170: lwc1        $f12, 0xB0($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0XB0);
    // 0x80269174: jal         0x80080E80
    // 0x80269178: nop

    func_80080E80(rdram, ctx);
        goto after_13;
    // 0x80269178: nop

    after_13:
    // 0x8026917C: lui         $at, 0x4170
    ctx->r1 = S32(0X4170 << 16);
    // 0x80269180: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x80269184: lw          $t0, 0x0($s1)
    ctx->r8 = MEM_W(ctx->r17, 0X0);
    // 0x80269188: mul.s       $f16, $f0, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = MUL_S(ctx->f0.fl, ctx->f10.fl);
    // 0x8026918C: lwc1        $f18, 0x44($t0)
    ctx->f18.u32l = MEM_W(ctx->r8, 0X44);
    // 0x80269190: nop

    // 0x80269194: add.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f16.fl + ctx->f18.fl;
    // 0x80269198: cfc1        $t1, $FpcCsr
    ctx->r9 = get_cop1_cs();
    // 0x8026919C: nop

    // 0x802691A0: ori         $at, $t1, 0x3
    ctx->r1 = ctx->r9 | 0X3;
    // 0x802691A4: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x802691A8: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x802691AC: nop

    // 0x802691B0: cvt.w.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = CVT_W_S(ctx->f4.fl);
    // 0x802691B4: mfc1        $t2, $f6
    ctx->r10 = (int32_t)ctx->f6.u32l;
    // 0x802691B8: ctc1        $t1, $FpcCsr
    set_cop1_cs(ctx->r9);
    // 0x802691BC: b           L_802691E8
    // 0x802691C0: sh          $t2, 0x30($s0)
    MEM_H(0X30, ctx->r16) = ctx->r10;
        goto L_802691E8;
    // 0x802691C0: sh          $t2, 0x30($s0)
    MEM_H(0X30, ctx->r16) = ctx->r10;
    // 0x802691C4: lw          $t3, 0xC0($sp)
    ctx->r11 = MEM_W(ctx->r29, 0XC0);
L_802691C8:
    // 0x802691C8: addiu       $s2, $zero, 0xF8
    ctx->r18 = ADD32(0, 0XF8);
    // 0x802691CC: lhu         $t5, 0x318($t3)
    ctx->r13 = MEM_HU(ctx->r11, 0X318);
    // 0x802691D0: lw          $t6, 0x18($t3)
    ctx->r14 = MEM_W(ctx->r11, 0X18);
    // 0x802691D4: multu       $t5, $s2
    result = U64(U32(ctx->r13)) * U64(U32(ctx->r18)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x802691D8: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x802691DC: mflo        $t4
    ctx->r12 = lo;
    // 0x802691E0: addu        $t7, $t4, $t6
    ctx->r15 = ADD32(ctx->r12, ctx->r14);
    // 0x802691E4: sw          $t7, 0xB38($at)
    MEM_W(0XB38, ctx->r1) = ctx->r15;
L_802691E8:
    // 0x802691E8: lw          $ra, 0x44($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X44);
L_802691EC:
    // 0x802691EC: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x802691F0: lw          $s1, 0x24($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X24);
    // 0x802691F4: lw          $s2, 0x28($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X28);
    // 0x802691F8: lw          $s3, 0x2C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X2C);
    // 0x802691FC: lw          $s4, 0x30($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X30);
    // 0x80269200: lw          $s5, 0x34($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X34);
    // 0x80269204: lw          $s6, 0x38($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X38);
    // 0x80269208: lw          $s7, 0x3C($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X3C);
    // 0x8026920C: lw          $fp, 0x40($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X40);
    // 0x80269210: jr          $ra
    // 0x80269214: addiu       $sp, $sp, 0xC0
    ctx->r29 = ADD32(ctx->r29, 0XC0);
    return;
    // 0x80269214: addiu       $sp, $sp, 0xC0
    ctx->r29 = ADD32(ctx->r29, 0XC0);
;}
RECOMP_FUNC void ovl_8024B800_func_80268FA8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80268FA8: lw          $t3, 0xC0($sp)
    ctx->r11 = MEM_W(ctx->r29, 0XC0);
    // 0x80268FAC: lw          $v0, 0xC0($sp)
    ctx->r2 = MEM_W(ctx->r29, 0XC0);
    // 0x80268FB0: addiu       $s2, $zero, 0xF8
    ctx->r18 = ADD32(0, 0XF8);
    // 0x80268FB4: lhu         $t0, 0x318($v0)
    ctx->r8 = MEM_HU(ctx->r2, 0X318);
    // 0x80268FB8: lw          $t2, 0x18($v0)
    ctx->r10 = MEM_W(ctx->r2, 0X18);
    // 0x80268FBC: multu       $t0, $s2
    result = U64(U32(ctx->r8)) * U64(U32(ctx->r18)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80268FC0: lui         $s1, 0x8012
    ctx->r17 = S32(0X8012 << 16);
    // 0x80268FC4: addiu       $s1, $s1, 0xB24
    ctx->r17 = ADD32(ctx->r17, 0XB24);
    // 0x80268FC8: lui         $a1, 0x8028
    ctx->r5 = S32(0X8028 << 16);
    // 0x80268FCC: addiu       $a1, $a1, -0x34E4
    ctx->r5 = ADD32(ctx->r5, -0X34E4);
    // 0x80268FD0: mflo        $t1
    ctx->r9 = lo;
    // 0x80268FD4: addu        $a0, $t1, $t2
    ctx->r4 = ADD32(ctx->r9, ctx->r10);
    // 0x80268FD8: jal         0x8026F2EC
    // 0x80268FDC: sw          $a0, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->r4;
    ovl_8024B800_func_8026F2EC(rdram, ctx);
        goto after_0;
    // 0x80268FDC: sw          $a0, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->r4;
    after_0:
    // 0x80268FE0: lw          $v0, 0x0($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X0);
    // 0x80268FE4: lw          $a0, 0xC0($sp)
    ctx->r4 = MEM_W(ctx->r29, 0XC0);
    // 0x80268FE8: lw          $a2, 0x4C($v0)
    ctx->r6 = MEM_W(ctx->r2, 0X4C);
    // 0x80268FEC: lw          $a3, 0x44($v0)
    ctx->r7 = MEM_W(ctx->r2, 0X44);
    // 0x80268FF0: jal         0x8027A42C
    // 0x80268FF4: addiu       $a1, $sp, 0x50
    ctx->r5 = ADD32(ctx->r29, 0X50);
    ovl_8024B800_func_8027A42C(rdram, ctx);
        goto after_1;
    // 0x80268FF4: addiu       $a1, $sp, 0x50
    ctx->r5 = ADD32(ctx->r29, 0X50);
    after_1:
    // 0x80268FF8: lhu         $t4, 0x58($sp)
    ctx->r12 = MEM_HU(ctx->r29, 0X58);
    // 0x80268FFC: lw          $v0, 0xC0($sp)
    ctx->r2 = MEM_W(ctx->r29, 0XC0);
    // 0x80269000: multu       $t4, $s2
    result = U64(U32(ctx->r12)) * U64(U32(ctx->r18)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80269004: lw          $t6, 0x18($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X18);
    // 0x80269008: lui         $a1, 0x8028
    ctx->r5 = S32(0X8028 << 16);
    // 0x8026900C: addiu       $a1, $a1, -0x34D0
    ctx->r5 = ADD32(ctx->r5, -0X34D0);
    // 0x80269010: mflo        $t5
    ctx->r13 = lo;
    // 0x80269014: addu        $a0, $t5, $t6
    ctx->r4 = ADD32(ctx->r13, ctx->r14);
    // 0x80269018: jal         0x8026F2EC
    // 0x8026901C: sw          $a0, 0x914($v0)
    MEM_W(0X914, ctx->r2) = ctx->r4;
    ovl_8024B800_func_8026F2EC(rdram, ctx);
        goto after_2;
    // 0x8026901C: sw          $a0, 0x914($v0)
    MEM_W(0X914, ctx->r2) = ctx->r4;
    after_2:
    // 0x80269020: lw          $v0, 0x0($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X0);
    // 0x80269024: addiu       $s3, $sp, 0xB0
    ctx->r19 = ADD32(ctx->r29, 0XB0);
    // 0x80269028: lw          $a2, 0x4C($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X4C);
    // 0x8026902C: lw          $a3, 0x44($s0)
    ctx->r7 = MEM_W(ctx->r16, 0X44);
    // 0x80269030: lwc1        $f12, 0x4C($v0)
    ctx->f12.u32l = MEM_W(ctx->r2, 0X4C);
    // 0x80269034: lwc1        $f14, 0x44($v0)
    ctx->f14.u32l = MEM_W(ctx->r2, 0X44);
    // 0x80269038: jal         0x80272B1C
    // 0x8026903C: sw          $s3, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r19;
    ovl_8024B800_func_80272B1C(rdram, ctx);
        goto after_3;
    // 0x8026903C: sw          $s3, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r19;
    after_3:
    // 0x80269040: lwc1        $f12, 0xB0($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0XB0);
    // 0x80269044: jal         0x80081040
    // 0x80269048: nop

    func_80081040(rdram, ctx);
        goto after_4;
    // 0x80269048: nop

    after_4:
    // 0x8026904C: lui         $at, 0x4170
    ctx->r1 = S32(0X4170 << 16);
    // 0x80269050: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80269054: lw          $t7, 0x0($s1)
    ctx->r15 = MEM_W(ctx->r17, 0X0);
    // 0x80269058: mul.s       $f6, $f0, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f0.fl, ctx->f4.fl);
    // 0x8026905C: lwc1        $f8, 0x4C($t7)
    ctx->f8.u32l = MEM_W(ctx->r15, 0X4C);
    // 0x80269060: nop

    // 0x80269064: add.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x80269068: cfc1        $t8, $FpcCsr
    ctx->r24 = get_cop1_cs();
    // 0x8026906C: nop

    // 0x80269070: ori         $at, $t8, 0x3
    ctx->r1 = ctx->r24 | 0X3;
    // 0x80269074: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x80269078: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x8026907C: nop

    // 0x80269080: cvt.w.s     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.u32l = CVT_W_S(ctx->f10.fl);
    // 0x80269084: mfc1        $t9, $f16
    ctx->r25 = (int32_t)ctx->f16.u32l;
    // 0x80269088: ctc1        $t8, $FpcCsr
    set_cop1_cs(ctx->r24);
    // 0x8026908C: sh          $t9, 0x2E($s0)
    MEM_H(0X2E, ctx->r16) = ctx->r25;
    // 0x80269090: lwc1        $f12, 0xB0($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0XB0);
    // 0x80269094: jal         0x80080E80
    // 0x80269098: nop

    func_80080E80(rdram, ctx);
        goto after_5;
    // 0x80269098: nop

    after_5:
    // 0x8026909C: lui         $at, 0x4170
    ctx->r1 = S32(0X4170 << 16);
    // 0x802690A0: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x802690A4: lw          $t0, 0x0($s1)
    ctx->r8 = MEM_W(ctx->r17, 0X0);
    // 0x802690A8: mul.s       $f4, $f0, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = MUL_S(ctx->f0.fl, ctx->f18.fl);
    // 0x802690AC: lwc1        $f6, 0x44($t0)
    ctx->f6.u32l = MEM_W(ctx->r8, 0X44);
    // 0x802690B0: lui         $a1, 0x8028
    ctx->r5 = S32(0X8028 << 16);
    // 0x802690B4: addiu       $a1, $a1, -0x34BC
    ctx->r5 = ADD32(ctx->r5, -0X34BC);
    // 0x802690B8: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x802690BC: cfc1        $t1, $FpcCsr
    ctx->r9 = get_cop1_cs();
    // 0x802690C0: nop

    // 0x802690C4: ori         $at, $t1, 0x3
    ctx->r1 = ctx->r9 | 0X3;
    // 0x802690C8: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x802690CC: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x802690D0: nop

    // 0x802690D4: cvt.w.s     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.u32l = CVT_W_S(ctx->f8.fl);
    // 0x802690D8: mfc1        $t2, $f10
    ctx->r10 = (int32_t)ctx->f10.u32l;
    // 0x802690DC: ctc1        $t1, $FpcCsr
    set_cop1_cs(ctx->r9);
    // 0x802690E0: sh          $t2, 0x30($s0)
    MEM_H(0X30, ctx->r16) = ctx->r10;
    // 0x802690E4: lhu         $t3, 0x60($sp)
    ctx->r11 = MEM_HU(ctx->r29, 0X60);
    // 0x802690E8: lw          $t5, 0xC0($sp)
    ctx->r13 = MEM_W(ctx->r29, 0XC0);
    // 0x802690EC: multu       $t3, $s2
    result = U64(U32(ctx->r11)) * U64(U32(ctx->r18)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x802690F0: lw          $t6, 0x18($t5)
    ctx->r14 = MEM_W(ctx->r13, 0X18);
    // 0x802690F4: mflo        $t4
    ctx->r12 = lo;
    // 0x802690F8: addu        $a0, $t4, $t6
    ctx->r4 = ADD32(ctx->r12, ctx->r14);
    // 0x802690FC: jal         0x8026F2EC
    // 0x80269100: nop

    ovl_8024B800_func_8026F2EC(rdram, ctx);
        goto after_6;
    // 0x80269100: nop

    after_6:
    // 0x80269104: lw          $v0, 0x0($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X0);
    // 0x80269108: lw          $a2, 0x4C($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X4C);
    // 0x8026910C: lw          $a3, 0x44($s0)
    ctx->r7 = MEM_W(ctx->r16, 0X44);
    // 0x80269110: lwc1        $f12, 0x4C($v0)
    ctx->f12.u32l = MEM_W(ctx->r2, 0X4C);
    // 0x80269114: lwc1        $f14, 0x44($v0)
    ctx->f14.u32l = MEM_W(ctx->r2, 0X44);
    // 0x80269118: jal         0x80272B1C
    // 0x8026911C: sw          $s3, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r19;
    ovl_8024B800_func_80272B1C(rdram, ctx);
        goto after_7;
    // 0x8026911C: sw          $s3, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r19;
    after_7:
    // 0x80269120: lwc1        $f12, 0xB0($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0XB0);
    // 0x80269124: jal         0x80081040
    // 0x80269128: nop

    func_80081040(rdram, ctx);
        goto after_8;
    // 0x80269128: nop

    after_8:
    // 0x8026912C: lui         $at, 0x4170
    ctx->r1 = S32(0X4170 << 16);
    // 0x80269130: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x80269134: lw          $t7, 0x0($s1)
    ctx->r15 = MEM_W(ctx->r17, 0X0);
    // 0x80269138: mul.s       $f18, $f0, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = MUL_S(ctx->f0.fl, ctx->f16.fl);
    // 0x8026913C: lwc1        $f4, 0x4C($t7)
    ctx->f4.u32l = MEM_W(ctx->r15, 0X4C);
    // 0x80269140: nop

    // 0x80269144: add.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f18.fl + ctx->f4.fl;
    // 0x80269148: cfc1        $t8, $FpcCsr
    ctx->r24 = get_cop1_cs();
    // 0x8026914C: nop

    // 0x80269150: ori         $at, $t8, 0x3
    ctx->r1 = ctx->r24 | 0X3;
    // 0x80269154: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x80269158: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x8026915C: nop

    // 0x80269160: cvt.w.s     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.u32l = CVT_W_S(ctx->f6.fl);
    // 0x80269164: mfc1        $t9, $f8
    ctx->r25 = (int32_t)ctx->f8.u32l;
    // 0x80269168: ctc1        $t8, $FpcCsr
    set_cop1_cs(ctx->r24);
    // 0x8026916C: sh          $t9, 0x2E($s0)
    MEM_H(0X2E, ctx->r16) = ctx->r25;
    // 0x80269170: lwc1        $f12, 0xB0($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0XB0);
    // 0x80269174: jal         0x80080E80
    // 0x80269178: nop

    func_80080E80(rdram, ctx);
        goto after_9;
    // 0x80269178: nop

    after_9:
    // 0x8026917C: lui         $at, 0x4170
    ctx->r1 = S32(0X4170 << 16);
    // 0x80269180: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x80269184: lw          $t0, 0x0($s1)
    ctx->r8 = MEM_W(ctx->r17, 0X0);
    // 0x80269188: mul.s       $f16, $f0, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = MUL_S(ctx->f0.fl, ctx->f10.fl);
    // 0x8026918C: lwc1        $f18, 0x44($t0)
    ctx->f18.u32l = MEM_W(ctx->r8, 0X44);
    // 0x80269190: nop

    // 0x80269194: add.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f16.fl + ctx->f18.fl;
    // 0x80269198: cfc1        $t1, $FpcCsr
    ctx->r9 = get_cop1_cs();
    // 0x8026919C: nop

    // 0x802691A0: ori         $at, $t1, 0x3
    ctx->r1 = ctx->r9 | 0X3;
    // 0x802691A4: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x802691A8: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x802691AC: nop

    // 0x802691B0: cvt.w.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = CVT_W_S(ctx->f4.fl);
    // 0x802691B4: mfc1        $t2, $f6
    ctx->r10 = (int32_t)ctx->f6.u32l;
    // 0x802691B8: ctc1        $t1, $FpcCsr
    set_cop1_cs(ctx->r9);
    // 0x802691BC: b           L_802691E8
    // 0x802691C0: sh          $t2, 0x30($s0)
    MEM_H(0X30, ctx->r16) = ctx->r10;
        goto L_802691E8;
    // 0x802691C0: sh          $t2, 0x30($s0)
    MEM_H(0X30, ctx->r16) = ctx->r10;
    // 0x802691C4: lw          $t3, 0xC0($sp)
    ctx->r11 = MEM_W(ctx->r29, 0XC0);
    // 0x802691C8: addiu       $s2, $zero, 0xF8
    ctx->r18 = ADD32(0, 0XF8);
    // 0x802691CC: lhu         $t5, 0x318($t3)
    ctx->r13 = MEM_HU(ctx->r11, 0X318);
    // 0x802691D0: lw          $t6, 0x18($t3)
    ctx->r14 = MEM_W(ctx->r11, 0X18);
    // 0x802691D4: multu       $t5, $s2
    result = U64(U32(ctx->r13)) * U64(U32(ctx->r18)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x802691D8: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x802691DC: mflo        $t4
    ctx->r12 = lo;
    // 0x802691E0: addu        $t7, $t4, $t6
    ctx->r15 = ADD32(ctx->r12, ctx->r14);
    // 0x802691E4: sw          $t7, 0xB38($at)
    MEM_W(0XB38, ctx->r1) = ctx->r15;
L_802691E8:
    // 0x802691E8: lw          $ra, 0x44($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X44);
    // 0x802691EC: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x802691F0: lw          $s1, 0x24($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X24);
    // 0x802691F4: lw          $s2, 0x28($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X28);
    // 0x802691F8: lw          $s3, 0x2C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X2C);
    // 0x802691FC: lw          $s4, 0x30($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X30);
    // 0x80269200: lw          $s5, 0x34($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X34);
    // 0x80269204: lw          $s6, 0x38($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X38);
    // 0x80269208: lw          $s7, 0x3C($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X3C);
    // 0x8026920C: lw          $fp, 0x40($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X40);
    // 0x80269210: jr          $ra
    // 0x80269214: addiu       $sp, $sp, 0xC0
    ctx->r29 = ADD32(ctx->r29, 0XC0);
    return;
    // 0x80269214: addiu       $sp, $sp, 0xC0
    ctx->r29 = ADD32(ctx->r29, 0XC0);
;}
RECOMP_FUNC void ovl_8024B800_func_80268FD0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80268FD0: mflo        $t1
    ctx->r9 = lo;
    // 0x80268FD4: addu        $a0, $t1, $t2
    ctx->r4 = ADD32(ctx->r9, ctx->r10);
    // 0x80268FD8: jal         0x8026F2EC
    // 0x80268FDC: sw          $a0, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->r4;
    ovl_8024B800_func_8026F2EC(rdram, ctx);
        goto after_0;
    // 0x80268FDC: sw          $a0, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->r4;
    after_0:
    // 0x80268FE0: lw          $v0, 0x0($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X0);
    // 0x80268FE4: lw          $a0, 0xC0($sp)
    ctx->r4 = MEM_W(ctx->r29, 0XC0);
    // 0x80268FE8: lw          $a2, 0x4C($v0)
    ctx->r6 = MEM_W(ctx->r2, 0X4C);
    // 0x80268FEC: lw          $a3, 0x44($v0)
    ctx->r7 = MEM_W(ctx->r2, 0X44);
    // 0x80268FF0: jal         0x8027A42C
    // 0x80268FF4: addiu       $a1, $sp, 0x50
    ctx->r5 = ADD32(ctx->r29, 0X50);
    ovl_8024B800_func_8027A42C(rdram, ctx);
        goto after_1;
    // 0x80268FF4: addiu       $a1, $sp, 0x50
    ctx->r5 = ADD32(ctx->r29, 0X50);
    after_1:
    // 0x80268FF8: lhu         $t4, 0x58($sp)
    ctx->r12 = MEM_HU(ctx->r29, 0X58);
    // 0x80268FFC: lw          $v0, 0xC0($sp)
    ctx->r2 = MEM_W(ctx->r29, 0XC0);
    // 0x80269000: multu       $t4, $s2
    result = U64(U32(ctx->r12)) * U64(U32(ctx->r18)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80269004: lw          $t6, 0x18($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X18);
    // 0x80269008: lui         $a1, 0x8028
    ctx->r5 = S32(0X8028 << 16);
    // 0x8026900C: addiu       $a1, $a1, -0x34D0
    ctx->r5 = ADD32(ctx->r5, -0X34D0);
    // 0x80269010: mflo        $t5
    ctx->r13 = lo;
    // 0x80269014: addu        $a0, $t5, $t6
    ctx->r4 = ADD32(ctx->r13, ctx->r14);
    // 0x80269018: jal         0x8026F2EC
    // 0x8026901C: sw          $a0, 0x914($v0)
    MEM_W(0X914, ctx->r2) = ctx->r4;
    ovl_8024B800_func_8026F2EC(rdram, ctx);
        goto after_2;
    // 0x8026901C: sw          $a0, 0x914($v0)
    MEM_W(0X914, ctx->r2) = ctx->r4;
    after_2:
    // 0x80269020: lw          $v0, 0x0($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X0);
    // 0x80269024: addiu       $s3, $sp, 0xB0
    ctx->r19 = ADD32(ctx->r29, 0XB0);
    // 0x80269028: lw          $a2, 0x4C($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X4C);
    // 0x8026902C: lw          $a3, 0x44($s0)
    ctx->r7 = MEM_W(ctx->r16, 0X44);
    // 0x80269030: lwc1        $f12, 0x4C($v0)
    ctx->f12.u32l = MEM_W(ctx->r2, 0X4C);
    // 0x80269034: lwc1        $f14, 0x44($v0)
    ctx->f14.u32l = MEM_W(ctx->r2, 0X44);
    // 0x80269038: jal         0x80272B1C
    // 0x8026903C: sw          $s3, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r19;
    ovl_8024B800_func_80272B1C(rdram, ctx);
        goto after_3;
    // 0x8026903C: sw          $s3, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r19;
    after_3:
    // 0x80269040: lwc1        $f12, 0xB0($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0XB0);
    // 0x80269044: jal         0x80081040
    // 0x80269048: nop

    func_80081040(rdram, ctx);
        goto after_4;
    // 0x80269048: nop

    after_4:
    // 0x8026904C: lui         $at, 0x4170
    ctx->r1 = S32(0X4170 << 16);
    // 0x80269050: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80269054: lw          $t7, 0x0($s1)
    ctx->r15 = MEM_W(ctx->r17, 0X0);
    // 0x80269058: mul.s       $f6, $f0, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f0.fl, ctx->f4.fl);
    // 0x8026905C: lwc1        $f8, 0x4C($t7)
    ctx->f8.u32l = MEM_W(ctx->r15, 0X4C);
    // 0x80269060: nop

    // 0x80269064: add.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x80269068: cfc1        $t8, $FpcCsr
    ctx->r24 = get_cop1_cs();
    // 0x8026906C: nop

    // 0x80269070: ori         $at, $t8, 0x3
    ctx->r1 = ctx->r24 | 0X3;
    // 0x80269074: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x80269078: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x8026907C: nop

    // 0x80269080: cvt.w.s     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.u32l = CVT_W_S(ctx->f10.fl);
    // 0x80269084: mfc1        $t9, $f16
    ctx->r25 = (int32_t)ctx->f16.u32l;
    // 0x80269088: ctc1        $t8, $FpcCsr
    set_cop1_cs(ctx->r24);
    // 0x8026908C: sh          $t9, 0x2E($s0)
    MEM_H(0X2E, ctx->r16) = ctx->r25;
    // 0x80269090: lwc1        $f12, 0xB0($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0XB0);
    // 0x80269094: jal         0x80080E80
    // 0x80269098: nop

    func_80080E80(rdram, ctx);
        goto after_5;
    // 0x80269098: nop

    after_5:
    // 0x8026909C: lui         $at, 0x4170
    ctx->r1 = S32(0X4170 << 16);
    // 0x802690A0: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x802690A4: lw          $t0, 0x0($s1)
    ctx->r8 = MEM_W(ctx->r17, 0X0);
    // 0x802690A8: mul.s       $f4, $f0, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = MUL_S(ctx->f0.fl, ctx->f18.fl);
    // 0x802690AC: lwc1        $f6, 0x44($t0)
    ctx->f6.u32l = MEM_W(ctx->r8, 0X44);
    // 0x802690B0: lui         $a1, 0x8028
    ctx->r5 = S32(0X8028 << 16);
    // 0x802690B4: addiu       $a1, $a1, -0x34BC
    ctx->r5 = ADD32(ctx->r5, -0X34BC);
    // 0x802690B8: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x802690BC: cfc1        $t1, $FpcCsr
    ctx->r9 = get_cop1_cs();
    // 0x802690C0: nop

    // 0x802690C4: ori         $at, $t1, 0x3
    ctx->r1 = ctx->r9 | 0X3;
    // 0x802690C8: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x802690CC: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x802690D0: nop

    // 0x802690D4: cvt.w.s     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.u32l = CVT_W_S(ctx->f8.fl);
    // 0x802690D8: mfc1        $t2, $f10
    ctx->r10 = (int32_t)ctx->f10.u32l;
    // 0x802690DC: ctc1        $t1, $FpcCsr
    set_cop1_cs(ctx->r9);
    // 0x802690E0: sh          $t2, 0x30($s0)
    MEM_H(0X30, ctx->r16) = ctx->r10;
    // 0x802690E4: lhu         $t3, 0x60($sp)
    ctx->r11 = MEM_HU(ctx->r29, 0X60);
    // 0x802690E8: lw          $t5, 0xC0($sp)
    ctx->r13 = MEM_W(ctx->r29, 0XC0);
    // 0x802690EC: multu       $t3, $s2
    result = U64(U32(ctx->r11)) * U64(U32(ctx->r18)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x802690F0: lw          $t6, 0x18($t5)
    ctx->r14 = MEM_W(ctx->r13, 0X18);
    // 0x802690F4: mflo        $t4
    ctx->r12 = lo;
    // 0x802690F8: addu        $a0, $t4, $t6
    ctx->r4 = ADD32(ctx->r12, ctx->r14);
    // 0x802690FC: jal         0x8026F2EC
    // 0x80269100: nop

    ovl_8024B800_func_8026F2EC(rdram, ctx);
        goto after_6;
    // 0x80269100: nop

    after_6:
    // 0x80269104: lw          $v0, 0x0($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X0);
    // 0x80269108: lw          $a2, 0x4C($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X4C);
    // 0x8026910C: lw          $a3, 0x44($s0)
    ctx->r7 = MEM_W(ctx->r16, 0X44);
    // 0x80269110: lwc1        $f12, 0x4C($v0)
    ctx->f12.u32l = MEM_W(ctx->r2, 0X4C);
    // 0x80269114: lwc1        $f14, 0x44($v0)
    ctx->f14.u32l = MEM_W(ctx->r2, 0X44);
    // 0x80269118: jal         0x80272B1C
    // 0x8026911C: sw          $s3, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r19;
    ovl_8024B800_func_80272B1C(rdram, ctx);
        goto after_7;
    // 0x8026911C: sw          $s3, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r19;
    after_7:
    // 0x80269120: lwc1        $f12, 0xB0($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0XB0);
    // 0x80269124: jal         0x80081040
    // 0x80269128: nop

    func_80081040(rdram, ctx);
        goto after_8;
    // 0x80269128: nop

    after_8:
    // 0x8026912C: lui         $at, 0x4170
    ctx->r1 = S32(0X4170 << 16);
    // 0x80269130: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x80269134: lw          $t7, 0x0($s1)
    ctx->r15 = MEM_W(ctx->r17, 0X0);
    // 0x80269138: mul.s       $f18, $f0, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = MUL_S(ctx->f0.fl, ctx->f16.fl);
    // 0x8026913C: lwc1        $f4, 0x4C($t7)
    ctx->f4.u32l = MEM_W(ctx->r15, 0X4C);
    // 0x80269140: nop

    // 0x80269144: add.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f18.fl + ctx->f4.fl;
    // 0x80269148: cfc1        $t8, $FpcCsr
    ctx->r24 = get_cop1_cs();
    // 0x8026914C: nop

    // 0x80269150: ori         $at, $t8, 0x3
    ctx->r1 = ctx->r24 | 0X3;
    // 0x80269154: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x80269158: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x8026915C: nop

    // 0x80269160: cvt.w.s     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.u32l = CVT_W_S(ctx->f6.fl);
    // 0x80269164: mfc1        $t9, $f8
    ctx->r25 = (int32_t)ctx->f8.u32l;
    // 0x80269168: ctc1        $t8, $FpcCsr
    set_cop1_cs(ctx->r24);
    // 0x8026916C: sh          $t9, 0x2E($s0)
    MEM_H(0X2E, ctx->r16) = ctx->r25;
    // 0x80269170: lwc1        $f12, 0xB0($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0XB0);
    // 0x80269174: jal         0x80080E80
    // 0x80269178: nop

    func_80080E80(rdram, ctx);
        goto after_9;
    // 0x80269178: nop

    after_9:
    // 0x8026917C: lui         $at, 0x4170
    ctx->r1 = S32(0X4170 << 16);
    // 0x80269180: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x80269184: lw          $t0, 0x0($s1)
    ctx->r8 = MEM_W(ctx->r17, 0X0);
    // 0x80269188: mul.s       $f16, $f0, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = MUL_S(ctx->f0.fl, ctx->f10.fl);
    // 0x8026918C: lwc1        $f18, 0x44($t0)
    ctx->f18.u32l = MEM_W(ctx->r8, 0X44);
    // 0x80269190: nop

    // 0x80269194: add.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f16.fl + ctx->f18.fl;
    // 0x80269198: cfc1        $t1, $FpcCsr
    ctx->r9 = get_cop1_cs();
    // 0x8026919C: nop

    // 0x802691A0: ori         $at, $t1, 0x3
    ctx->r1 = ctx->r9 | 0X3;
    // 0x802691A4: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x802691A8: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x802691AC: nop

    // 0x802691B0: cvt.w.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = CVT_W_S(ctx->f4.fl);
    // 0x802691B4: mfc1        $t2, $f6
    ctx->r10 = (int32_t)ctx->f6.u32l;
    // 0x802691B8: ctc1        $t1, $FpcCsr
    set_cop1_cs(ctx->r9);
    // 0x802691BC: b           L_802691E8
    // 0x802691C0: sh          $t2, 0x30($s0)
    MEM_H(0X30, ctx->r16) = ctx->r10;
        goto L_802691E8;
    // 0x802691C0: sh          $t2, 0x30($s0)
    MEM_H(0X30, ctx->r16) = ctx->r10;
    // 0x802691C4: lw          $t3, 0xC0($sp)
    ctx->r11 = MEM_W(ctx->r29, 0XC0);
    // 0x802691C8: addiu       $s2, $zero, 0xF8
    ctx->r18 = ADD32(0, 0XF8);
    // 0x802691CC: lhu         $t5, 0x318($t3)
    ctx->r13 = MEM_HU(ctx->r11, 0X318);
    // 0x802691D0: lw          $t6, 0x18($t3)
    ctx->r14 = MEM_W(ctx->r11, 0X18);
    // 0x802691D4: multu       $t5, $s2
    result = U64(U32(ctx->r13)) * U64(U32(ctx->r18)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x802691D8: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x802691DC: mflo        $t4
    ctx->r12 = lo;
    // 0x802691E0: addu        $t7, $t4, $t6
    ctx->r15 = ADD32(ctx->r12, ctx->r14);
    // 0x802691E4: sw          $t7, 0xB38($at)
    MEM_W(0XB38, ctx->r1) = ctx->r15;
L_802691E8:
    // 0x802691E8: lw          $ra, 0x44($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X44);
    // 0x802691EC: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x802691F0: lw          $s1, 0x24($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X24);
    // 0x802691F4: lw          $s2, 0x28($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X28);
    // 0x802691F8: lw          $s3, 0x2C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X2C);
    // 0x802691FC: lw          $s4, 0x30($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X30);
    // 0x80269200: lw          $s5, 0x34($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X34);
    // 0x80269204: lw          $s6, 0x38($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X38);
    // 0x80269208: lw          $s7, 0x3C($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X3C);
    // 0x8026920C: lw          $fp, 0x40($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X40);
    // 0x80269210: jr          $ra
    // 0x80269214: addiu       $sp, $sp, 0xC0
    ctx->r29 = ADD32(ctx->r29, 0XC0);
    return;
    // 0x80269214: addiu       $sp, $sp, 0xC0
    ctx->r29 = ADD32(ctx->r29, 0XC0);
;}
RECOMP_FUNC void ovl_8024B800_func_80269040(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80269040: lwc1        $f12, 0xB0($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0XB0);
    // 0x80269044: jal         0x80081040
    // 0x80269048: nop

    func_80081040(rdram, ctx);
        goto after_0;
    // 0x80269048: nop

    after_0:
    // 0x8026904C: lui         $at, 0x4170
    ctx->r1 = S32(0X4170 << 16);
    // 0x80269050: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80269054: lw          $t7, 0x0($s1)
    ctx->r15 = MEM_W(ctx->r17, 0X0);
    // 0x80269058: mul.s       $f6, $f0, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f0.fl, ctx->f4.fl);
    // 0x8026905C: lwc1        $f8, 0x4C($t7)
    ctx->f8.u32l = MEM_W(ctx->r15, 0X4C);
    // 0x80269060: nop

    // 0x80269064: add.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x80269068: cfc1        $t8, $FpcCsr
    ctx->r24 = get_cop1_cs();
    // 0x8026906C: nop

    // 0x80269070: ori         $at, $t8, 0x3
    ctx->r1 = ctx->r24 | 0X3;
    // 0x80269074: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x80269078: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x8026907C: nop

    // 0x80269080: cvt.w.s     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.u32l = CVT_W_S(ctx->f10.fl);
    // 0x80269084: mfc1        $t9, $f16
    ctx->r25 = (int32_t)ctx->f16.u32l;
    // 0x80269088: ctc1        $t8, $FpcCsr
    set_cop1_cs(ctx->r24);
    // 0x8026908C: sh          $t9, 0x2E($s0)
    MEM_H(0X2E, ctx->r16) = ctx->r25;
    // 0x80269090: lwc1        $f12, 0xB0($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0XB0);
    // 0x80269094: jal         0x80080E80
    // 0x80269098: nop

    func_80080E80(rdram, ctx);
        goto after_1;
    // 0x80269098: nop

    after_1:
    // 0x8026909C: lui         $at, 0x4170
    ctx->r1 = S32(0X4170 << 16);
    // 0x802690A0: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x802690A4: lw          $t0, 0x0($s1)
    ctx->r8 = MEM_W(ctx->r17, 0X0);
    // 0x802690A8: mul.s       $f4, $f0, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = MUL_S(ctx->f0.fl, ctx->f18.fl);
    // 0x802690AC: lwc1        $f6, 0x44($t0)
    ctx->f6.u32l = MEM_W(ctx->r8, 0X44);
    // 0x802690B0: lui         $a1, 0x8028
    ctx->r5 = S32(0X8028 << 16);
    // 0x802690B4: addiu       $a1, $a1, -0x34BC
    ctx->r5 = ADD32(ctx->r5, -0X34BC);
    // 0x802690B8: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x802690BC: cfc1        $t1, $FpcCsr
    ctx->r9 = get_cop1_cs();
    // 0x802690C0: nop

    // 0x802690C4: ori         $at, $t1, 0x3
    ctx->r1 = ctx->r9 | 0X3;
    // 0x802690C8: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x802690CC: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x802690D0: nop

    // 0x802690D4: cvt.w.s     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.u32l = CVT_W_S(ctx->f8.fl);
    // 0x802690D8: mfc1        $t2, $f10
    ctx->r10 = (int32_t)ctx->f10.u32l;
    // 0x802690DC: ctc1        $t1, $FpcCsr
    set_cop1_cs(ctx->r9);
    // 0x802690E0: sh          $t2, 0x30($s0)
    MEM_H(0X30, ctx->r16) = ctx->r10;
    // 0x802690E4: lhu         $t3, 0x60($sp)
    ctx->r11 = MEM_HU(ctx->r29, 0X60);
    // 0x802690E8: lw          $t5, 0xC0($sp)
    ctx->r13 = MEM_W(ctx->r29, 0XC0);
    // 0x802690EC: multu       $t3, $s2
    result = U64(U32(ctx->r11)) * U64(U32(ctx->r18)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x802690F0: lw          $t6, 0x18($t5)
    ctx->r14 = MEM_W(ctx->r13, 0X18);
    // 0x802690F4: mflo        $t4
    ctx->r12 = lo;
    // 0x802690F8: addu        $a0, $t4, $t6
    ctx->r4 = ADD32(ctx->r12, ctx->r14);
    // 0x802690FC: jal         0x8026F2EC
    // 0x80269100: nop

    ovl_8024B800_func_8026F2EC(rdram, ctx);
        goto after_2;
    // 0x80269100: nop

    after_2:
    // 0x80269104: lw          $v0, 0x0($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X0);
    // 0x80269108: lw          $a2, 0x4C($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X4C);
    // 0x8026910C: lw          $a3, 0x44($s0)
    ctx->r7 = MEM_W(ctx->r16, 0X44);
    // 0x80269110: lwc1        $f12, 0x4C($v0)
    ctx->f12.u32l = MEM_W(ctx->r2, 0X4C);
    // 0x80269114: lwc1        $f14, 0x44($v0)
    ctx->f14.u32l = MEM_W(ctx->r2, 0X44);
    // 0x80269118: jal         0x80272B1C
    // 0x8026911C: sw          $s3, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r19;
    ovl_8024B800_func_80272B1C(rdram, ctx);
        goto after_3;
    // 0x8026911C: sw          $s3, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r19;
    after_3:
    // 0x80269120: lwc1        $f12, 0xB0($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0XB0);
    // 0x80269124: jal         0x80081040
    // 0x80269128: nop

    func_80081040(rdram, ctx);
        goto after_4;
    // 0x80269128: nop

    after_4:
    // 0x8026912C: lui         $at, 0x4170
    ctx->r1 = S32(0X4170 << 16);
    // 0x80269130: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x80269134: lw          $t7, 0x0($s1)
    ctx->r15 = MEM_W(ctx->r17, 0X0);
    // 0x80269138: mul.s       $f18, $f0, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = MUL_S(ctx->f0.fl, ctx->f16.fl);
    // 0x8026913C: lwc1        $f4, 0x4C($t7)
    ctx->f4.u32l = MEM_W(ctx->r15, 0X4C);
    // 0x80269140: nop

    // 0x80269144: add.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f18.fl + ctx->f4.fl;
    // 0x80269148: cfc1        $t8, $FpcCsr
    ctx->r24 = get_cop1_cs();
    // 0x8026914C: nop

    // 0x80269150: ori         $at, $t8, 0x3
    ctx->r1 = ctx->r24 | 0X3;
    // 0x80269154: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x80269158: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x8026915C: nop

    // 0x80269160: cvt.w.s     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.u32l = CVT_W_S(ctx->f6.fl);
    // 0x80269164: mfc1        $t9, $f8
    ctx->r25 = (int32_t)ctx->f8.u32l;
    // 0x80269168: ctc1        $t8, $FpcCsr
    set_cop1_cs(ctx->r24);
    // 0x8026916C: sh          $t9, 0x2E($s0)
    MEM_H(0X2E, ctx->r16) = ctx->r25;
    // 0x80269170: lwc1        $f12, 0xB0($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0XB0);
    // 0x80269174: jal         0x80080E80
    // 0x80269178: nop

    func_80080E80(rdram, ctx);
        goto after_5;
    // 0x80269178: nop

    after_5:
    // 0x8026917C: lui         $at, 0x4170
    ctx->r1 = S32(0X4170 << 16);
    // 0x80269180: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x80269184: lw          $t0, 0x0($s1)
    ctx->r8 = MEM_W(ctx->r17, 0X0);
    // 0x80269188: mul.s       $f16, $f0, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = MUL_S(ctx->f0.fl, ctx->f10.fl);
    // 0x8026918C: lwc1        $f18, 0x44($t0)
    ctx->f18.u32l = MEM_W(ctx->r8, 0X44);
    // 0x80269190: nop

    // 0x80269194: add.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f16.fl + ctx->f18.fl;
    // 0x80269198: cfc1        $t1, $FpcCsr
    ctx->r9 = get_cop1_cs();
    // 0x8026919C: nop

    // 0x802691A0: ori         $at, $t1, 0x3
    ctx->r1 = ctx->r9 | 0X3;
    // 0x802691A4: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x802691A8: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x802691AC: nop

    // 0x802691B0: cvt.w.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = CVT_W_S(ctx->f4.fl);
    // 0x802691B4: mfc1        $t2, $f6
    ctx->r10 = (int32_t)ctx->f6.u32l;
    // 0x802691B8: ctc1        $t1, $FpcCsr
    set_cop1_cs(ctx->r9);
    // 0x802691BC: b           L_802691E8
    // 0x802691C0: sh          $t2, 0x30($s0)
    MEM_H(0X30, ctx->r16) = ctx->r10;
        goto L_802691E8;
    // 0x802691C0: sh          $t2, 0x30($s0)
    MEM_H(0X30, ctx->r16) = ctx->r10;
    // 0x802691C4: lw          $t3, 0xC0($sp)
    ctx->r11 = MEM_W(ctx->r29, 0XC0);
    // 0x802691C8: addiu       $s2, $zero, 0xF8
    ctx->r18 = ADD32(0, 0XF8);
    // 0x802691CC: lhu         $t5, 0x318($t3)
    ctx->r13 = MEM_HU(ctx->r11, 0X318);
    // 0x802691D0: lw          $t6, 0x18($t3)
    ctx->r14 = MEM_W(ctx->r11, 0X18);
    // 0x802691D4: multu       $t5, $s2
    result = U64(U32(ctx->r13)) * U64(U32(ctx->r18)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x802691D8: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x802691DC: mflo        $t4
    ctx->r12 = lo;
    // 0x802691E0: addu        $t7, $t4, $t6
    ctx->r15 = ADD32(ctx->r12, ctx->r14);
    // 0x802691E4: sw          $t7, 0xB38($at)
    MEM_W(0XB38, ctx->r1) = ctx->r15;
L_802691E8:
    // 0x802691E8: lw          $ra, 0x44($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X44);
    // 0x802691EC: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x802691F0: lw          $s1, 0x24($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X24);
    // 0x802691F4: lw          $s2, 0x28($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X28);
    // 0x802691F8: lw          $s3, 0x2C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X2C);
    // 0x802691FC: lw          $s4, 0x30($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X30);
    // 0x80269200: lw          $s5, 0x34($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X34);
    // 0x80269204: lw          $s6, 0x38($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X38);
    // 0x80269208: lw          $s7, 0x3C($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X3C);
    // 0x8026920C: lw          $fp, 0x40($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X40);
    // 0x80269210: jr          $ra
    // 0x80269214: addiu       $sp, $sp, 0xC0
    ctx->r29 = ADD32(ctx->r29, 0XC0);
    return;
    // 0x80269214: addiu       $sp, $sp, 0xC0
    ctx->r29 = ADD32(ctx->r29, 0XC0);
;}
RECOMP_FUNC void ovl_8024B800_func_80269130(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80269130: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x80269134: lw          $t7, 0x0($s1)
    ctx->r15 = MEM_W(ctx->r17, 0X0);
    // 0x80269138: mul.s       $f18, $f0, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = MUL_S(ctx->f0.fl, ctx->f16.fl);
    // 0x8026913C: lwc1        $f4, 0x4C($t7)
    ctx->f4.u32l = MEM_W(ctx->r15, 0X4C);
    // 0x80269140: nop

    // 0x80269144: add.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f18.fl + ctx->f4.fl;
    // 0x80269148: cfc1        $t8, $FpcCsr
    ctx->r24 = get_cop1_cs();
    // 0x8026914C: nop

    // 0x80269150: ori         $at, $t8, 0x3
    ctx->r1 = ctx->r24 | 0X3;
    // 0x80269154: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x80269158: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x8026915C: nop

    // 0x80269160: cvt.w.s     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.u32l = CVT_W_S(ctx->f6.fl);
    // 0x80269164: mfc1        $t9, $f8
    ctx->r25 = (int32_t)ctx->f8.u32l;
    // 0x80269168: ctc1        $t8, $FpcCsr
    set_cop1_cs(ctx->r24);
    // 0x8026916C: sh          $t9, 0x2E($s0)
    MEM_H(0X2E, ctx->r16) = ctx->r25;
    // 0x80269170: lwc1        $f12, 0xB0($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0XB0);
    // 0x80269174: jal         0x80080E80
    // 0x80269178: nop

    func_80080E80(rdram, ctx);
        goto after_0;
    // 0x80269178: nop

    after_0:
    // 0x8026917C: lui         $at, 0x4170
    ctx->r1 = S32(0X4170 << 16);
    // 0x80269180: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x80269184: lw          $t0, 0x0($s1)
    ctx->r8 = MEM_W(ctx->r17, 0X0);
    // 0x80269188: mul.s       $f16, $f0, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = MUL_S(ctx->f0.fl, ctx->f10.fl);
    // 0x8026918C: lwc1        $f18, 0x44($t0)
    ctx->f18.u32l = MEM_W(ctx->r8, 0X44);
    // 0x80269190: nop

    // 0x80269194: add.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f16.fl + ctx->f18.fl;
    // 0x80269198: cfc1        $t1, $FpcCsr
    ctx->r9 = get_cop1_cs();
    // 0x8026919C: nop

    // 0x802691A0: ori         $at, $t1, 0x3
    ctx->r1 = ctx->r9 | 0X3;
    // 0x802691A4: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x802691A8: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x802691AC: nop

    // 0x802691B0: cvt.w.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = CVT_W_S(ctx->f4.fl);
    // 0x802691B4: mfc1        $t2, $f6
    ctx->r10 = (int32_t)ctx->f6.u32l;
    // 0x802691B8: ctc1        $t1, $FpcCsr
    set_cop1_cs(ctx->r9);
    // 0x802691BC: b           L_802691E8
    // 0x802691C0: sh          $t2, 0x30($s0)
    MEM_H(0X30, ctx->r16) = ctx->r10;
        goto L_802691E8;
    // 0x802691C0: sh          $t2, 0x30($s0)
    MEM_H(0X30, ctx->r16) = ctx->r10;
    // 0x802691C4: lw          $t3, 0xC0($sp)
    ctx->r11 = MEM_W(ctx->r29, 0XC0);
    // 0x802691C8: addiu       $s2, $zero, 0xF8
    ctx->r18 = ADD32(0, 0XF8);
    // 0x802691CC: lhu         $t5, 0x318($t3)
    ctx->r13 = MEM_HU(ctx->r11, 0X318);
    // 0x802691D0: lw          $t6, 0x18($t3)
    ctx->r14 = MEM_W(ctx->r11, 0X18);
    // 0x802691D4: multu       $t5, $s2
    result = U64(U32(ctx->r13)) * U64(U32(ctx->r18)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x802691D8: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x802691DC: mflo        $t4
    ctx->r12 = lo;
    // 0x802691E0: addu        $t7, $t4, $t6
    ctx->r15 = ADD32(ctx->r12, ctx->r14);
    // 0x802691E4: sw          $t7, 0xB38($at)
    MEM_W(0XB38, ctx->r1) = ctx->r15;
L_802691E8:
    // 0x802691E8: lw          $ra, 0x44($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X44);
    // 0x802691EC: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x802691F0: lw          $s1, 0x24($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X24);
    // 0x802691F4: lw          $s2, 0x28($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X28);
    // 0x802691F8: lw          $s3, 0x2C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X2C);
    // 0x802691FC: lw          $s4, 0x30($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X30);
    // 0x80269200: lw          $s5, 0x34($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X34);
    // 0x80269204: lw          $s6, 0x38($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X38);
    // 0x80269208: lw          $s7, 0x3C($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X3C);
    // 0x8026920C: lw          $fp, 0x40($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X40);
    // 0x80269210: jr          $ra
    // 0x80269214: addiu       $sp, $sp, 0xC0
    ctx->r29 = ADD32(ctx->r29, 0XC0);
    return;
    // 0x80269214: addiu       $sp, $sp, 0xC0
    ctx->r29 = ADD32(ctx->r29, 0XC0);
;}
RECOMP_FUNC void ovl_8024B800_func_80269218(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80269218: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x8026921C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80269220: lh          $t8, 0x8B8($a0)
    ctx->r24 = MEM_H(ctx->r4, 0X8B8);
    // 0x80269224: lui         $v0, 0x8009
    ctx->r2 = S32(0X8009 << 16);
    // 0x80269228: mtc1        $t8, $f18
    ctx->f18.u32l = ctx->r24;
    // 0x8026922C: lw          $v0, 0x3B20($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X3B20);
    // 0x80269230: cvt.s.w     $f18, $f18
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    ctx->f18.fl = CVT_S_W(ctx->f18.u32l);
    // 0x80269234: lh          $t6, 0xE8($v0)
    ctx->r14 = MEM_H(ctx->r2, 0XE8);
    // 0x80269238: lh          $t7, 0xEA($v0)
    ctx->r15 = MEM_H(ctx->r2, 0XEA);
    // 0x8026923C: mtc1        $t6, $f16
    ctx->f16.u32l = ctx->r14;
    // 0x80269240: mtc1        $t7, $f10
    ctx->f10.u32l = ctx->r15;
    // 0x80269244: mfc1        $a2, $f18
    ctx->r6 = (int32_t)ctx->f18.u32l;
    // 0x80269248: cvt.s.w     $f12, $f16
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 16);
    ctx->f12.fl = CVT_S_W(ctx->f16.u32l);
    // 0x8026924C: addiu       $t9, $sp, 0x28
    ctx->r25 = ADD32(ctx->r29, 0X28);
    // 0x80269250: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    // 0x80269254: cvt.s.w     $f14, $f10
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 10);
    ctx->f14.fl = CVT_S_W(ctx->f10.u32l);
    // 0x80269258: sw          $t9, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r25;
    // 0x8026925C: jal         0x80272B1C
    // 0x80269260: sw          $a0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r4;
    ovl_8024B800_func_80272B1C(rdram, ctx);
        goto after_0;
    // 0x80269260: sw          $a0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r4;
    after_0:
    // 0x80269264: lui         $at, 0x42A0
    ctx->r1 = S32(0X42A0 << 16);
    // 0x80269268: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x8026926C: lwc1        $f10, 0x2C($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x80269270: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    // 0x80269274: c.lt.s      $f10, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f10.fl < ctx->f16.fl;
    // 0x80269278: nop

    // 0x8026927C: bc1f        L_80269290
    if (!c1cs) {
        // 0x80269280: nop
    
            goto L_80269290;
    }
    // 0x80269280: nop

    // 0x80269284: lw          $v0, 0x18($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X18);
    // 0x80269288: b           L_8026929C
    // 0x8026928C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_8026929C;
    // 0x8026928C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_80269290:
    // 0x80269290: jal         0x802636CC
    // 0x80269294: addiu       $a1, $a0, 0x318
    ctx->r5 = ADD32(ctx->r4, 0X318);
    ovl_8024B800_func_802636CC(rdram, ctx);
        goto after_1;
    // 0x80269294: addiu       $a1, $a0, 0x318
    ctx->r5 = ADD32(ctx->r4, 0X318);
    after_1:
    // 0x80269298: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_8026929C:
    // 0x8026929C: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x802692A0: jr          $ra
    // 0x802692A4: nop

    return;
    // 0x802692A4: nop

;}
RECOMP_FUNC void ovl_8024B800_func_80269254(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80269254: cvt.s.w     $f14, $f10
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 10);
    ctx->f14.fl = CVT_S_W(ctx->f10.u32l);
    // 0x80269258: sw          $t9, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r25;
    // 0x8026925C: jal         0x80272B1C
    // 0x80269260: sw          $a0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r4;
    ovl_8024B800_func_80272B1C(rdram, ctx);
        goto after_0;
    // 0x80269260: sw          $a0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r4;
    after_0:
    // 0x80269264: lui         $at, 0x42A0
    ctx->r1 = S32(0X42A0 << 16);
    // 0x80269268: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x8026926C: lwc1        $f10, 0x2C($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x80269270: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    // 0x80269274: c.lt.s      $f10, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f10.fl < ctx->f16.fl;
    // 0x80269278: nop

    // 0x8026927C: bc1f        L_80269290
    if (!c1cs) {
        // 0x80269280: nop
    
            goto L_80269290;
    }
    // 0x80269280: nop

    // 0x80269284: lw          $v0, 0x18($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X18);
    // 0x80269288: b           L_8026929C
    // 0x8026928C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_8026929C;
    // 0x8026928C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_80269290:
    // 0x80269290: jal         0x802636CC
    // 0x80269294: addiu       $a1, $a0, 0x318
    ctx->r5 = ADD32(ctx->r4, 0X318);
    ovl_8024B800_func_802636CC(rdram, ctx);
        goto after_1;
    // 0x80269294: addiu       $a1, $a0, 0x318
    ctx->r5 = ADD32(ctx->r4, 0X318);
    after_1:
    // 0x80269298: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_8026929C:
    // 0x8026929C: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x802692A0: jr          $ra
    // 0x802692A4: nop

    return;
    // 0x802692A4: nop

;}
RECOMP_FUNC void ovl_8024B800_func_802692A8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802692A8: addiu       $sp, $sp, -0x98
    ctx->r29 = ADD32(ctx->r29, -0X98);
    // 0x802692AC: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x802692B0: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x802692B4: sw          $a0, 0x98($sp)
    MEM_W(0X98, ctx->r29) = ctx->r4;
    // 0x802692B8: sw          $a1, 0x9C($sp)
    MEM_W(0X9C, ctx->r29) = ctx->r5;
    // 0x802692BC: andi        $s0, $a1, 0xFFFF
    ctx->r16 = ctx->r5 & 0XFFFF;
    // 0x802692C0: lw          $v1, 0x18($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X18);
    // 0x802692C4: lui         $a0, 0x8028
    ctx->r4 = S32(0X8028 << 16);
    // 0x802692C8: lui         $a1, 0x8012
    ctx->r5 = S32(0X8012 << 16);
    // 0x802692CC: lui         $t1, 0x8009
    ctx->r9 = S32(0X8009 << 16);
    // 0x802692D0: or          $t0, $zero, $zero
    ctx->r8 = 0 | 0;
    // 0x802692D4: addiu       $a2, $sp, 0x2C
    ctx->r6 = ADD32(ctx->r29, 0X2C);
    // 0x802692D8: addiu       $t1, $t1, 0x3B20
    ctx->r9 = ADD32(ctx->r9, 0X3B20);
    // 0x802692DC: addiu       $a1, $a1, 0xB2C
    ctx->r5 = ADD32(ctx->r5, 0XB2C);
    // 0x802692E0: addiu       $a0, $a0, -0x3678
    ctx->r4 = ADD32(ctx->r4, -0X3678);
    // 0x802692E4: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x802692E8: addiu       $t2, $zero, 0xB
    ctx->r10 = ADD32(0, 0XB);
L_802692EC:
    // 0x802692EC: lhu         $t7, 0xC($v1)
    ctx->r15 = MEM_HU(ctx->r3, 0XC);
    // 0x802692F0: nop

    // 0x802692F4: beq         $t7, $zero, L_80269380
    if (ctx->r15 == 0) {
        // 0x802692F8: nop
    
            goto L_80269380;
    }
    // 0x802692F8: nop

    // 0x802692FC: lw          $t8, 0xD4($v1)
    ctx->r24 = MEM_W(ctx->r3, 0XD4);
    // 0x80269300: nop

    // 0x80269304: lbu         $t9, 0x5($t8)
    ctx->r25 = MEM_BU(ctx->r24, 0X5);
    // 0x80269308: nop

    // 0x8026930C: sll         $t3, $t9, 1
    ctx->r11 = S32(ctx->r25 << 1);
    // 0x80269310: addu        $t4, $a0, $t3
    ctx->r12 = ADD32(ctx->r4, ctx->r11);
    // 0x80269314: lhu         $t5, 0x0($t4)
    ctx->r13 = MEM_HU(ctx->r12, 0X0);
    // 0x80269318: nop

    // 0x8026931C: and         $t6, $t5, $s0
    ctx->r14 = ctx->r13 & ctx->r16;
    // 0x80269320: beq         $t6, $zero, L_80269380
    if (ctx->r14 == 0) {
        // 0x80269324: nop
    
            goto L_80269380;
    }
    // 0x80269324: nop

    // 0x80269328: lw          $t7, 0x0($a1)
    ctx->r15 = MEM_W(ctx->r5, 0X0);
    // 0x8026932C: nop

    // 0x80269330: beq         $v1, $t7, L_80269380
    if (ctx->r3 == ctx->r15) {
        // 0x80269334: nop
    
            goto L_80269380;
    }
    // 0x80269334: nop

    // 0x80269338: lw          $v0, 0x0($t1)
    ctx->r2 = MEM_W(ctx->r9, 0X0);
    // 0x8026933C: lwc1        $f4, 0x4C($v1)
    ctx->f4.u32l = MEM_W(ctx->r3, 0X4C);
    // 0x80269340: lh          $t8, 0xE8($v0)
    ctx->r24 = MEM_H(ctx->r2, 0XE8);
    // 0x80269344: lh          $t9, 0xEA($v0)
    ctx->r25 = MEM_H(ctx->r2, 0XEA);
    // 0x80269348: mtc1        $t8, $f6
    ctx->f6.u32l = ctx->r24;
    // 0x8026934C: mtc1        $t9, $f16
    ctx->f16.u32l = ctx->r25;
    // 0x80269350: cvt.s.w     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.fl = CVT_S_W(ctx->f6.u32l);
    // 0x80269354: lwc1        $f10, 0x44($v1)
    ctx->f10.u32l = MEM_W(ctx->r3, 0X44);
    // 0x80269358: sh          $a3, 0x0($a2)
    MEM_H(0X0, ctx->r6) = ctx->r7;
    // 0x8026935C: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x80269360: addiu       $a2, $a2, 0x8
    ctx->r6 = ADD32(ctx->r6, 0X8);
    // 0x80269364: addiu       $t0, $t0, 0x1
    ctx->r8 = ADD32(ctx->r8, 0X1);
    // 0x80269368: sub.s       $f0, $f4, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f0.fl = ctx->f4.fl - ctx->f8.fl;
    // 0x8026936C: mul.s       $f6, $f0, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = MUL_S(ctx->f0.fl, ctx->f0.fl);
    // 0x80269370: sub.s       $f2, $f10, $f18
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f2.fl = ctx->f10.fl - ctx->f18.fl;
    // 0x80269374: mul.s       $f4, $f2, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f4.fl = MUL_S(ctx->f2.fl, ctx->f2.fl);
    // 0x80269378: add.s       $f8, $f6, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f8.fl = ctx->f6.fl + ctx->f4.fl;
    // 0x8026937C: swc1        $f8, -0x4($a2)
    MEM_W(-0X4, ctx->r6) = ctx->f8.u32l;
L_80269380:
    // 0x80269380: addiu       $a3, $a3, 0x1
    ctx->r7 = ADD32(ctx->r7, 0X1);
    // 0x80269384: bne         $a3, $t2, L_802692EC
    if (ctx->r7 != ctx->r10) {
        // 0x80269388: addiu       $v1, $v1, 0xF8
        ctx->r3 = ADD32(ctx->r3, 0XF8);
            goto L_802692EC;
    }
    // 0x80269388: addiu       $v1, $v1, 0xF8
    ctx->r3 = ADD32(ctx->r3, 0XF8);
    // 0x8026938C: beq         $t0, $zero, L_802693CC
    if (ctx->r8 == 0) {
        // 0x80269390: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_802693CC;
    }
    // 0x80269390: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x80269394: addiu       $a1, $t0, -0x1
    ctx->r5 = ADD32(ctx->r8, -0X1);
    // 0x80269398: sll         $t3, $a1, 16
    ctx->r11 = S32(ctx->r5 << 16);
    // 0x8026939C: sra         $a1, $t3, 16
    ctx->r5 = S32(SIGNED(ctx->r11) >> 16);
    // 0x802693A0: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x802693A4: jal         0x8005DE74
    // 0x802693A8: addiu       $a2, $sp, 0x2C
    ctx->r6 = ADD32(ctx->r29, 0X2C);
    func_8005DE74(rdram, ctx);
        goto after_0;
    // 0x802693A8: addiu       $a2, $sp, 0x2C
    ctx->r6 = ADD32(ctx->r29, 0X2C);
    after_0:
    // 0x802693AC: lhu         $t5, 0x2C($sp)
    ctx->r13 = MEM_HU(ctx->r29, 0X2C);
    // 0x802693B0: lw          $t7, 0x98($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X98);
    // 0x802693B4: sll         $t6, $t5, 5
    ctx->r14 = S32(ctx->r13 << 5);
    // 0x802693B8: lw          $t8, 0x18($t7)
    ctx->r24 = MEM_W(ctx->r15, 0X18);
    // 0x802693BC: subu        $t6, $t6, $t5
    ctx->r14 = SUB32(ctx->r14, ctx->r13);
    // 0x802693C0: sll         $t6, $t6, 3
    ctx->r14 = S32(ctx->r14 << 3);
    // 0x802693C4: b           L_802693CC
    // 0x802693C8: addu        $v0, $t6, $t8
    ctx->r2 = ADD32(ctx->r14, ctx->r24);
        goto L_802693CC;
    // 0x802693C8: addu        $v0, $t6, $t8
    ctx->r2 = ADD32(ctx->r14, ctx->r24);
L_802693CC:
    // 0x802693CC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x802693D0: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x802693D4: jr          $ra
    // 0x802693D8: addiu       $sp, $sp, 0x98
    ctx->r29 = ADD32(ctx->r29, 0X98);
    return;
    // 0x802693D8: addiu       $sp, $sp, 0x98
    ctx->r29 = ADD32(ctx->r29, 0X98);
;}
RECOMP_FUNC void ovl_8024B800_func_802692EC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
L_802692EC:
    // 0x802692EC: lhu         $t7, 0xC($v1)
    ctx->r15 = MEM_HU(ctx->r3, 0XC);
    // 0x802692F0: nop

    // 0x802692F4: beq         $t7, $zero, L_80269380
    if (ctx->r15 == 0) {
        // 0x802692F8: nop
    
            goto L_80269380;
    }
    // 0x802692F8: nop

    // 0x802692FC: lw          $t8, 0xD4($v1)
    ctx->r24 = MEM_W(ctx->r3, 0XD4);
    // 0x80269300: nop

    // 0x80269304: lbu         $t9, 0x5($t8)
    ctx->r25 = MEM_BU(ctx->r24, 0X5);
    // 0x80269308: nop

    // 0x8026930C: sll         $t3, $t9, 1
    ctx->r11 = S32(ctx->r25 << 1);
    // 0x80269310: addu        $t4, $a0, $t3
    ctx->r12 = ADD32(ctx->r4, ctx->r11);
    // 0x80269314: lhu         $t5, 0x0($t4)
    ctx->r13 = MEM_HU(ctx->r12, 0X0);
    // 0x80269318: nop

    // 0x8026931C: and         $t6, $t5, $s0
    ctx->r14 = ctx->r13 & ctx->r16;
    // 0x80269320: beq         $t6, $zero, L_80269380
    if (ctx->r14 == 0) {
        // 0x80269324: nop
    
            goto L_80269380;
    }
    // 0x80269324: nop

    // 0x80269328: lw          $t7, 0x0($a1)
    ctx->r15 = MEM_W(ctx->r5, 0X0);
    // 0x8026932C: nop

    // 0x80269330: beq         $v1, $t7, L_80269380
    if (ctx->r3 == ctx->r15) {
        // 0x80269334: nop
    
            goto L_80269380;
    }
    // 0x80269334: nop

    // 0x80269338: lw          $v0, 0x0($t1)
    ctx->r2 = MEM_W(ctx->r9, 0X0);
    // 0x8026933C: lwc1        $f4, 0x4C($v1)
    ctx->f4.u32l = MEM_W(ctx->r3, 0X4C);
    // 0x80269340: lh          $t8, 0xE8($v0)
    ctx->r24 = MEM_H(ctx->r2, 0XE8);
    // 0x80269344: lh          $t9, 0xEA($v0)
    ctx->r25 = MEM_H(ctx->r2, 0XEA);
    // 0x80269348: mtc1        $t8, $f6
    ctx->f6.u32l = ctx->r24;
    // 0x8026934C: mtc1        $t9, $f16
    ctx->f16.u32l = ctx->r25;
    // 0x80269350: cvt.s.w     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.fl = CVT_S_W(ctx->f6.u32l);
    // 0x80269354: lwc1        $f10, 0x44($v1)
    ctx->f10.u32l = MEM_W(ctx->r3, 0X44);
    // 0x80269358: sh          $a3, 0x0($a2)
    MEM_H(0X0, ctx->r6) = ctx->r7;
    // 0x8026935C: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x80269360: addiu       $a2, $a2, 0x8
    ctx->r6 = ADD32(ctx->r6, 0X8);
    // 0x80269364: addiu       $t0, $t0, 0x1
    ctx->r8 = ADD32(ctx->r8, 0X1);
    // 0x80269368: sub.s       $f0, $f4, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f0.fl = ctx->f4.fl - ctx->f8.fl;
    // 0x8026936C: mul.s       $f6, $f0, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = MUL_S(ctx->f0.fl, ctx->f0.fl);
    // 0x80269370: sub.s       $f2, $f10, $f18
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f2.fl = ctx->f10.fl - ctx->f18.fl;
    // 0x80269374: mul.s       $f4, $f2, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f4.fl = MUL_S(ctx->f2.fl, ctx->f2.fl);
    // 0x80269378: add.s       $f8, $f6, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f8.fl = ctx->f6.fl + ctx->f4.fl;
    // 0x8026937C: swc1        $f8, -0x4($a2)
    MEM_W(-0X4, ctx->r6) = ctx->f8.u32l;
L_80269380:
    // 0x80269380: addiu       $a3, $a3, 0x1
    ctx->r7 = ADD32(ctx->r7, 0X1);
    // 0x80269384: bne         $a3, $t2, L_802692EC
    if (ctx->r7 != ctx->r10) {
        // 0x80269388: addiu       $v1, $v1, 0xF8
        ctx->r3 = ADD32(ctx->r3, 0XF8);
            goto L_802692EC;
    }
    // 0x80269388: addiu       $v1, $v1, 0xF8
    ctx->r3 = ADD32(ctx->r3, 0XF8);
    // 0x8026938C: beq         $t0, $zero, L_802693CC
    if (ctx->r8 == 0) {
        // 0x80269390: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_802693CC;
    }
    // 0x80269390: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x80269394: addiu       $a1, $t0, -0x1
    ctx->r5 = ADD32(ctx->r8, -0X1);
    // 0x80269398: sll         $t3, $a1, 16
    ctx->r11 = S32(ctx->r5 << 16);
    // 0x8026939C: sra         $a1, $t3, 16
    ctx->r5 = S32(SIGNED(ctx->r11) >> 16);
    // 0x802693A0: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x802693A4: jal         0x8005DE74
    // 0x802693A8: addiu       $a2, $sp, 0x2C
    ctx->r6 = ADD32(ctx->r29, 0X2C);
    func_8005DE74(rdram, ctx);
        goto after_0;
    // 0x802693A8: addiu       $a2, $sp, 0x2C
    ctx->r6 = ADD32(ctx->r29, 0X2C);
    after_0:
    // 0x802693AC: lhu         $t5, 0x2C($sp)
    ctx->r13 = MEM_HU(ctx->r29, 0X2C);
    // 0x802693B0: lw          $t7, 0x98($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X98);
    // 0x802693B4: sll         $t6, $t5, 5
    ctx->r14 = S32(ctx->r13 << 5);
    // 0x802693B8: lw          $t8, 0x18($t7)
    ctx->r24 = MEM_W(ctx->r15, 0X18);
    // 0x802693BC: subu        $t6, $t6, $t5
    ctx->r14 = SUB32(ctx->r14, ctx->r13);
    // 0x802693C0: sll         $t6, $t6, 3
    ctx->r14 = S32(ctx->r14 << 3);
    // 0x802693C4: b           L_802693CC
    // 0x802693C8: addu        $v0, $t6, $t8
    ctx->r2 = ADD32(ctx->r14, ctx->r24);
        goto L_802693CC;
    // 0x802693C8: addu        $v0, $t6, $t8
    ctx->r2 = ADD32(ctx->r14, ctx->r24);
L_802693CC:
    // 0x802693CC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x802693D0: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x802693D4: jr          $ra
    // 0x802693D8: addiu       $sp, $sp, 0x98
    ctx->r29 = ADD32(ctx->r29, 0X98);
    return;
    // 0x802693D8: addiu       $sp, $sp, 0x98
    ctx->r29 = ADD32(ctx->r29, 0X98);
;}
RECOMP_FUNC void ovl_8024B800_func_80269334(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
L_802692EC:
    // 0x80269334: nop

    // 0x80269338: lw          $v0, 0x0($t1)
    ctx->r2 = MEM_W(ctx->r9, 0X0);
    // 0x8026933C: lwc1        $f4, 0x4C($v1)
    ctx->f4.u32l = MEM_W(ctx->r3, 0X4C);
    // 0x80269340: lh          $t8, 0xE8($v0)
    ctx->r24 = MEM_H(ctx->r2, 0XE8);
    // 0x80269344: lh          $t9, 0xEA($v0)
    ctx->r25 = MEM_H(ctx->r2, 0XEA);
    // 0x80269348: mtc1        $t8, $f6
    ctx->f6.u32l = ctx->r24;
    // 0x8026934C: mtc1        $t9, $f16
    ctx->f16.u32l = ctx->r25;
    // 0x80269350: cvt.s.w     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.fl = CVT_S_W(ctx->f6.u32l);
    // 0x80269354: lwc1        $f10, 0x44($v1)
    ctx->f10.u32l = MEM_W(ctx->r3, 0X44);
    // 0x80269358: sh          $a3, 0x0($a2)
    MEM_H(0X0, ctx->r6) = ctx->r7;
    // 0x8026935C: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x80269360: addiu       $a2, $a2, 0x8
    ctx->r6 = ADD32(ctx->r6, 0X8);
    // 0x80269364: addiu       $t0, $t0, 0x1
    ctx->r8 = ADD32(ctx->r8, 0X1);
    // 0x80269368: sub.s       $f0, $f4, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f0.fl = ctx->f4.fl - ctx->f8.fl;
    // 0x8026936C: mul.s       $f6, $f0, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = MUL_S(ctx->f0.fl, ctx->f0.fl);
    // 0x80269370: sub.s       $f2, $f10, $f18
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f2.fl = ctx->f10.fl - ctx->f18.fl;
    // 0x80269374: mul.s       $f4, $f2, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f4.fl = MUL_S(ctx->f2.fl, ctx->f2.fl);
    // 0x80269378: add.s       $f8, $f6, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f8.fl = ctx->f6.fl + ctx->f4.fl;
    // 0x8026937C: swc1        $f8, -0x4($a2)
    MEM_W(-0X4, ctx->r6) = ctx->f8.u32l;
    // 0x80269380: addiu       $a3, $a3, 0x1
    ctx->r7 = ADD32(ctx->r7, 0X1);
    // 0x80269384: bne         $a3, $t2, L_802692EC
    if (ctx->r7 != ctx->r10) {
            // 0x80269388: addiu       $v1, $v1, 0xF8
    ctx->r3 = ADD32(ctx->r3, 0XF8);
    ovl_8024B800_func_802692EC(rdram, ctx);
    return;
    }
    // 0x80269388: addiu       $v1, $v1, 0xF8
    ctx->r3 = ADD32(ctx->r3, 0XF8);
    // 0x8026938C: beq         $t0, $zero, L_802693CC
    if (ctx->r8 == 0) {
        // 0x80269390: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_802693CC;
    }
    // 0x80269390: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x80269394: addiu       $a1, $t0, -0x1
    ctx->r5 = ADD32(ctx->r8, -0X1);
    // 0x80269398: sll         $t3, $a1, 16
    ctx->r11 = S32(ctx->r5 << 16);
    // 0x8026939C: sra         $a1, $t3, 16
    ctx->r5 = S32(SIGNED(ctx->r11) >> 16);
    // 0x802693A0: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x802693A4: jal         0x8005DE74
    // 0x802693A8: addiu       $a2, $sp, 0x2C
    ctx->r6 = ADD32(ctx->r29, 0X2C);
    func_8005DE74(rdram, ctx);
        goto after_0;
    // 0x802693A8: addiu       $a2, $sp, 0x2C
    ctx->r6 = ADD32(ctx->r29, 0X2C);
    after_0:
    // 0x802693AC: lhu         $t5, 0x2C($sp)
    ctx->r13 = MEM_HU(ctx->r29, 0X2C);
    // 0x802693B0: lw          $t7, 0x98($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X98);
    // 0x802693B4: sll         $t6, $t5, 5
    ctx->r14 = S32(ctx->r13 << 5);
    // 0x802693B8: lw          $t8, 0x18($t7)
    ctx->r24 = MEM_W(ctx->r15, 0X18);
    // 0x802693BC: subu        $t6, $t6, $t5
    ctx->r14 = SUB32(ctx->r14, ctx->r13);
    // 0x802693C0: sll         $t6, $t6, 3
    ctx->r14 = S32(ctx->r14 << 3);
    // 0x802693C4: b           L_802693CC
    // 0x802693C8: addu        $v0, $t6, $t8
    ctx->r2 = ADD32(ctx->r14, ctx->r24);
        goto L_802693CC;
    // 0x802693C8: addu        $v0, $t6, $t8
    ctx->r2 = ADD32(ctx->r14, ctx->r24);
L_802693CC:
    // 0x802693CC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x802693D0: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x802693D4: jr          $ra
    // 0x802693D8: addiu       $sp, $sp, 0x98
    ctx->r29 = ADD32(ctx->r29, 0X98);
    return;
    // 0x802693D8: addiu       $sp, $sp, 0x98
    ctx->r29 = ADD32(ctx->r29, 0X98);
;}
RECOMP_FUNC void ovl_8024B800_func_802693DC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802693DC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802693E0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802693E4: lh          $t6, 0x8B0($a0)
    ctx->r14 = MEM_H(ctx->r4, 0X8B0);
    // 0x802693E8: addiu       $a1, $zero, 0xE0
    ctx->r5 = ADD32(0, 0XE0);
    // 0x802693EC: slti        $at, $t6, 0x65
    ctx->r1 = SIGNED(ctx->r14) < 0X65 ? 1 : 0;
    // 0x802693F0: bne         $at, $zero, L_80269424
    if (ctx->r1 != 0) {
        // 0x802693F4: nop
    
            goto L_80269424;
    }
    // 0x802693F4: nop

    // 0x802693F8: addiu       $a1, $zero, 0xE0
    ctx->r5 = ADD32(0, 0XE0);
    // 0x802693FC: jal         0x802692A8
    // 0x80269400: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    ovl_8024B800_func_802692A8(rdram, ctx);
        goto after_0;
    // 0x80269400: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x80269404: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x80269408: lui         $at, 0x8028
    ctx->r1 = S32(0X8028 << 16);
    // 0x8026940C: sw          $v0, -0x1B30($at)
    MEM_W(-0X1B30, ctx->r1) = ctx->r2;
    // 0x80269410: jal         0x802692A8
    // 0x80269414: addiu       $a1, $zero, 0x700
    ctx->r5 = ADD32(0, 0X700);
    ovl_8024B800_func_802692A8(rdram, ctx);
        goto after_1;
    // 0x80269414: addiu       $a1, $zero, 0x700
    ctx->r5 = ADD32(0, 0X700);
    after_1:
    // 0x80269418: lui         $at, 0x8028
    ctx->r1 = S32(0X8028 << 16);
    // 0x8026941C: b           L_80269448
    // 0x80269420: sw          $v0, -0x1B2C($at)
    MEM_W(-0X1B2C, ctx->r1) = ctx->r2;
        goto L_80269448;
    // 0x80269420: sw          $v0, -0x1B2C($at)
    MEM_W(-0X1B2C, ctx->r1) = ctx->r2;
L_80269424:
    // 0x80269424: jal         0x802692A8
    // 0x80269428: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    ovl_8024B800_func_802692A8(rdram, ctx);
        goto after_2;
    // 0x80269428: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_2:
    // 0x8026942C: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x80269430: lui         $at, 0x8028
    ctx->r1 = S32(0X8028 << 16);
    // 0x80269434: sw          $v0, -0x1B30($at)
    MEM_W(-0X1B30, ctx->r1) = ctx->r2;
    // 0x80269438: jal         0x802692A8
    // 0x8026943C: addiu       $a1, $zero, 0x1E
    ctx->r5 = ADD32(0, 0X1E);
    ovl_8024B800_func_802692A8(rdram, ctx);
        goto after_3;
    // 0x8026943C: addiu       $a1, $zero, 0x1E
    ctx->r5 = ADD32(0, 0X1E);
    after_3:
    // 0x80269440: lui         $at, 0x8028
    ctx->r1 = S32(0X8028 << 16);
    // 0x80269444: sw          $v0, -0x1B2C($at)
    MEM_W(-0X1B2C, ctx->r1) = ctx->r2;
L_80269448:
    // 0x80269448: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8026944C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80269450: jr          $ra
    // 0x80269454: nop

    return;
    // 0x80269454: nop

;}
RECOMP_FUNC void ovl_8024B800_func_80269458(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80269458: lui         $t6, 0x8010
    ctx->r14 = S32(0X8010 << 16);
    // 0x8026945C: lbu         $t6, 0x5232($t6)
    ctx->r14 = MEM_BU(ctx->r14, 0X5232);
    // 0x80269460: addiu       $at, $zero, 0x5
    ctx->r1 = ADD32(0, 0X5);
    // 0x80269464: bne         $t6, $at, L_802694A4
    if (ctx->r14 != ctx->r1) {
        // 0x80269468: lui         $t7, 0x8012
        ctx->r15 = S32(0X8012 << 16);
            goto L_802694A4;
    }
    // 0x80269468: lui         $t7, 0x8012
    ctx->r15 = S32(0X8012 << 16);
    // 0x8026946C: lhu         $t7, 0xB7E($t7)
    ctx->r15 = MEM_HU(ctx->r15, 0XB7E);
    // 0x80269470: lui         $t9, 0x8009
    ctx->r25 = S32(0X8009 << 16);
    // 0x80269474: andi        $t8, $t7, 0x1000
    ctx->r24 = ctx->r15 & 0X1000;
    // 0x80269478: bne         $t8, $zero, L_802694A4
    if (ctx->r24 != 0) {
        // 0x8026947C: nop
    
            goto L_802694A4;
    }
    // 0x8026947C: nop

    // 0x80269480: lw          $t9, 0x3B20($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X3B20);
    // 0x80269484: lui         $t2, 0x8028
    ctx->r10 = S32(0X8028 << 16);
    // 0x80269488: lhu         $t0, 0xDC($t9)
    ctx->r8 = MEM_HU(ctx->r25, 0XDC);
    // 0x8026948C: addiu       $t2, $t2, -0x3430
    ctx->r10 = ADD32(ctx->r10, -0X3430);
    // 0x80269490: andi        $t1, $t0, 0x10
    ctx->r9 = ctx->r8 & 0X10;
    // 0x80269494: bne         $t1, $zero, L_802694A4
    if (ctx->r9 != 0) {
        // 0x80269498: nop
    
            goto L_802694A4;
    }
    // 0x80269498: nop

    // 0x8026949C: jr          $ra
    // 0x802694A0: sw          $t2, 0x28($a0)
    MEM_W(0X28, ctx->r4) = ctx->r10;
    return;
    // 0x802694A0: sw          $t2, 0x28($a0)
    MEM_W(0X28, ctx->r4) = ctx->r10;
L_802694A4:
    // 0x802694A4: lui         $t3, 0x8028
    ctx->r11 = S32(0X8028 << 16);
    // 0x802694A8: addiu       $t3, $t3, -0x3418
    ctx->r11 = ADD32(ctx->r11, -0X3418);
    // 0x802694AC: sw          $t3, 0x28($a0)
    MEM_W(0X28, ctx->r4) = ctx->r11;
    // 0x802694B0: jr          $ra
    // 0x802694B4: nop

    return;
    // 0x802694B4: nop

;}
RECOMP_FUNC void ovl_8024B800_func_802694B8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802694B8: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x802694BC: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x802694C0: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x802694C4: lhu         $t6, 0x10($a0)
    ctx->r14 = MEM_HU(ctx->r4, 0X10);
    // 0x802694C8: lui         $t8, 0x8012
    ctx->r24 = S32(0X8012 << 16);
    // 0x802694CC: andi        $t7, $t6, 0xFFFB
    ctx->r15 = ctx->r14 & 0XFFFB;
    // 0x802694D0: sh          $t7, 0x10($a0)
    MEM_H(0X10, ctx->r4) = ctx->r15;
    // 0x802694D4: lhu         $t8, 0xB7A($t8)
    ctx->r24 = MEM_HU(ctx->r24, 0XB7A);
    // 0x802694D8: or          $a1, $a0, $zero
    ctx->r5 = ctx->r4 | 0;
    // 0x802694DC: addiu       $t9, $t8, -0x2
    ctx->r25 = ADD32(ctx->r24, -0X2);
    // 0x802694E0: sltiu       $at, $t9, 0xB
    ctx->r1 = ctx->r25 < 0XB ? 1 : 0;
    // 0x802694E4: beq         $at, $zero, L_802697B8
    if (ctx->r1 == 0) {
        // 0x802694E8: or          $s0, $zero, $zero
        ctx->r16 = 0 | 0;
            goto L_802697B8;
    }
    // 0x802694E8: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x802694EC: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x802694F0: lui         $at, 0x8028
    ctx->r1 = S32(0X8028 << 16);
    // 0x802694F4: addu        $at, $at, $t9
    gpr jr_addend_80269500 = ctx->r25;
    ctx->r1 = ADD32(ctx->r1, ctx->r25);
    // 0x802694F8: lw          $t9, -0x2B94($at)
    ctx->r25 = ADD32(ctx->r1, -0X2B94);
    // 0x802694FC: nop

    // 0x80269500: jr          $t9
    // 0x80269504: nop

    switch (jr_addend_80269500 >> 2) {
        case 0: goto L_80269508; break;
        case 1: goto L_80269650; break;
        case 2: goto L_80269594; break;
        case 3: goto L_802696B4; break;
        case 4: goto L_80269708; break;
        case 5: goto L_80269664; break;
        case 6: goto L_80269680; break;
        case 7: goto L_80269764; break;
        case 8: goto L_802697A0; break;
        case 9: goto L_802697A0; break;
        case 10: goto L_802697B0; break;
        default: switch_error(__func__, 0x80269500, 0x8027D46C);
    }
    // 0x80269504: nop

L_80269508:
    // 0x80269508: lhu         $t0, 0x318($a1)
    ctx->r8 = MEM_HU(ctx->r5, 0X318);
    // 0x8026950C: addiu       $v1, $zero, 0xF8
    ctx->r3 = ADD32(0, 0XF8);
    // 0x80269510: multu       $t0, $v1
    result = U64(U32(ctx->r8)) * U64(U32(ctx->r3)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80269514: lw          $v0, 0x18($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X18);
    // 0x80269518: lui         $t7, 0x8028
    ctx->r15 = S32(0X8028 << 16);
    // 0x8026951C: lui         $t6, 0x8028
    ctx->r14 = S32(0X8028 << 16);
    // 0x80269520: addiu       $t6, $t6, -0x3454
    ctx->r14 = ADD32(ctx->r14, -0X3454);
    // 0x80269524: addiu       $t7, $t7, -0x3448
    ctx->r15 = ADD32(ctx->r15, -0X3448);
    // 0x80269528: lui         $t5, 0x8010
    ctx->r13 = S32(0X8010 << 16);
    // 0x8026952C: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    // 0x80269530: mflo        $t1
    ctx->r9 = lo;
    // 0x80269534: addu        $s0, $t1, $v0
    ctx->r16 = ADD32(ctx->r9, ctx->r2);
    // 0x80269538: lhu         $t2, 0x1A($s0)
    ctx->r10 = MEM_HU(ctx->r16, 0X1A);
    // 0x8026953C: nop

    // 0x80269540: bne         $t2, $zero, L_80269560
    if (ctx->r10 != 0) {
        // 0x80269544: nop
    
            goto L_80269560;
    }
    // 0x80269544: nop

    // 0x80269548: lhu         $t3, 0x320($a1)
    ctx->r11 = MEM_HU(ctx->r5, 0X320);
    // 0x8026954C: nop

    // 0x80269550: multu       $t3, $v1
    result = U64(U32(ctx->r11)) * U64(U32(ctx->r3)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80269554: mflo        $t4
    ctx->r12 = lo;
    // 0x80269558: addu        $s0, $t4, $v0
    ctx->r16 = ADD32(ctx->r12, ctx->r2);
    // 0x8026955C: nop

L_80269560:
    // 0x80269560: lbu         $t5, 0x5232($t5)
    ctx->r13 = MEM_BU(ctx->r13, 0X5232);
    // 0x80269564: addiu       $at, $zero, 0x5
    ctx->r1 = ADD32(0, 0X5);
    // 0x80269568: bne         $t5, $at, L_80269578
    if (ctx->r13 != ctx->r1) {
        // 0x8026956C: nop
    
            goto L_80269578;
    }
    // 0x8026956C: nop

    // 0x80269570: b           L_8026957C
    // 0x80269574: sw          $t6, 0x28($s0)
    MEM_W(0X28, ctx->r16) = ctx->r14;
        goto L_8026957C;
    // 0x80269574: sw          $t6, 0x28($s0)
    MEM_W(0X28, ctx->r16) = ctx->r14;
L_80269578:
    // 0x80269578: sw          $t7, 0x28($s0)
    MEM_W(0X28, ctx->r16) = ctx->r15;
L_8026957C:
    // 0x8026957C: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x80269580: jal         0x802693DC
    // 0x80269584: sw          $s0, 0xB2C($at)
    MEM_W(0XB2C, ctx->r1) = ctx->r16;
    ovl_8024B800_func_802693DC(rdram, ctx);
        goto after_0;
    // 0x80269584: sw          $s0, 0xB2C($at)
    MEM_W(0XB2C, ctx->r1) = ctx->r16;
    after_0:
    // 0x80269588: lui         $at, 0x8028
    ctx->r1 = S32(0X8028 << 16);
    // 0x8026958C: b           L_802697B8
    // 0x80269590: sh          $zero, -0x1B3A($at)
    MEM_H(-0X1B3A, ctx->r1) = 0;
        goto L_802697B8;
    // 0x80269590: sh          $zero, -0x1B3A($at)
    MEM_H(-0X1B3A, ctx->r1) = 0;
L_80269594:
    // 0x80269594: lbu         $t9, 0x8AA($a1)
    ctx->r25 = MEM_BU(ctx->r5, 0X8AA);
    // 0x80269598: addiu       $v1, $zero, 0xF8
    ctx->r3 = ADD32(0, 0XF8);
    // 0x8026959C: multu       $t9, $v1
    result = U64(U32(ctx->r25)) * U64(U32(ctx->r3)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x802695A0: lw          $t8, 0x18($a1)
    ctx->r24 = MEM_W(ctx->r5, 0X18);
    // 0x802695A4: lui         $t1, 0x8028
    ctx->r9 = S32(0X8028 << 16);
    // 0x802695A8: addiu       $t1, $t1, -0x3440
    ctx->r9 = ADD32(ctx->r9, -0X3440);
    // 0x802695AC: lui         $v0, 0x8009
    ctx->r2 = S32(0X8009 << 16);
    // 0x802695B0: mflo        $t0
    ctx->r8 = lo;
    // 0x802695B4: addu        $s0, $t8, $t0
    ctx->r16 = ADD32(ctx->r24, ctx->r8);
    // 0x802695B8: lhu         $t2, 0x14($s0)
    ctx->r10 = MEM_HU(ctx->r16, 0X14);
    // 0x802695BC: sw          $t1, 0x28($s0)
    MEM_W(0X28, ctx->r16) = ctx->r9;
    // 0x802695C0: andi        $t3, $t2, 0xFDFF
    ctx->r11 = ctx->r10 & 0XFDFF;
    // 0x802695C4: sh          $t3, 0x14($s0)
    MEM_H(0X14, ctx->r16) = ctx->r11;
    // 0x802695C8: lw          $v0, 0x3B20($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X3B20);
    // 0x802695CC: nop

    // 0x802695D0: lh          $t4, 0xEA($v0)
    ctx->r12 = MEM_H(ctx->r2, 0XEA);
    // 0x802695D4: lh          $t5, 0xE8($v0)
    ctx->r13 = MEM_H(ctx->r2, 0XE8);
    // 0x802695D8: nop

    // 0x802695DC: multu       $t4, $t5
    result = U64(U32(ctx->r12)) * U64(U32(ctx->r13)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x802695E0: mflo        $t6
    ctx->r14 = lo;
    // 0x802695E4: bgez        $t6, L_80269610
    if (SIGNED(ctx->r14) >= 0) {
        // 0x802695E8: nop
    
            goto L_80269610;
    }
    // 0x802695E8: nop

    // 0x802695EC: lw          $t7, 0xD8($s0)
    ctx->r15 = MEM_W(ctx->r16, 0XD8);
    // 0x802695F0: ori         $t1, $t3, 0x200
    ctx->r9 = ctx->r11 | 0X200;
    // 0x802695F4: lbu         $t9, 0x13($t7)
    ctx->r25 = MEM_BU(ctx->r15, 0X13);
    // 0x802695F8: nop

    // 0x802695FC: andi        $t8, $t9, 0x40
    ctx->r24 = ctx->r25 & 0X40;
    // 0x80269600: beq         $t8, $zero, L_8026963C
    if (ctx->r24 == 0) {
        // 0x80269604: nop
    
            goto L_8026963C;
    }
    // 0x80269604: nop

    // 0x80269608: b           L_8026963C
    // 0x8026960C: sh          $t1, 0x14($s0)
    MEM_H(0X14, ctx->r16) = ctx->r9;
        goto L_8026963C;
    // 0x8026960C: sh          $t1, 0x14($s0)
    MEM_H(0X14, ctx->r16) = ctx->r9;
L_80269610:
    // 0x80269610: lw          $t2, 0xD8($s0)
    ctx->r10 = MEM_W(ctx->r16, 0XD8);
    // 0x80269614: nop

    // 0x80269618: lbu         $t3, 0x13($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X13);
    // 0x8026961C: nop

    // 0x80269620: andi        $t4, $t3, 0x80
    ctx->r12 = ctx->r11 & 0X80;
    // 0x80269624: beq         $t4, $zero, L_8026963C
    if (ctx->r12 == 0) {
        // 0x80269628: nop
    
            goto L_8026963C;
    }
    // 0x80269628: nop

    // 0x8026962C: lhu         $t5, 0x14($s0)
    ctx->r13 = MEM_HU(ctx->r16, 0X14);
    // 0x80269630: nop

    // 0x80269634: ori         $t6, $t5, 0x200
    ctx->r14 = ctx->r13 | 0X200;
    // 0x80269638: sh          $t6, 0x14($s0)
    MEM_H(0X14, ctx->r16) = ctx->r14;
L_8026963C:
    // 0x8026963C: lhu         $t7, 0x20($s0)
    ctx->r15 = MEM_HU(ctx->r16, 0X20);
    // 0x80269640: nop

    // 0x80269644: andi        $t9, $t7, 0xFEFF
    ctx->r25 = ctx->r15 & 0XFEFF;
    // 0x80269648: b           L_802697B8
    // 0x8026964C: sh          $t9, 0x20($s0)
    MEM_H(0X20, ctx->r16) = ctx->r25;
        goto L_802697B8;
    // 0x8026964C: sh          $t9, 0x20($s0)
    MEM_H(0X20, ctx->r16) = ctx->r25;
L_80269650:
    // 0x80269650: lw          $s0, 0x18($a1)
    ctx->r16 = MEM_W(ctx->r5, 0X18);
    // 0x80269654: lui         $t8, 0x8028
    ctx->r24 = S32(0X8028 << 16);
    // 0x80269658: addiu       $t8, $t8, -0x3438
    ctx->r24 = ADD32(ctx->r24, -0X3438);
    // 0x8026965C: b           L_802697B8
    // 0x80269660: sw          $t8, 0x28($s0)
    MEM_W(0X28, ctx->r16) = ctx->r24;
        goto L_802697B8;
    // 0x80269660: sw          $t8, 0x28($s0)
    MEM_W(0X28, ctx->r16) = ctx->r24;
L_80269664:
    // 0x80269664: jal         0x80269218
    // 0x80269668: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    ovl_8024B800_func_80269218(rdram, ctx);
        goto after_1;
    // 0x80269668: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    after_1:
    // 0x8026966C: lui         $t0, 0x8028
    ctx->r8 = S32(0X8028 << 16);
    // 0x80269670: addiu       $t0, $t0, -0x3418
    ctx->r8 = ADD32(ctx->r8, -0X3418);
    // 0x80269674: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x80269678: b           L_802697B8
    // 0x8026967C: sw          $t0, 0x28($v0)
    MEM_W(0X28, ctx->r2) = ctx->r8;
        goto L_802697B8;
    // 0x8026967C: sw          $t0, 0x28($v0)
    MEM_W(0X28, ctx->r2) = ctx->r8;
L_80269680:
    // 0x80269680: lbu         $t2, 0x8AB($a1)
    ctx->r10 = MEM_BU(ctx->r5, 0X8AB);
    // 0x80269684: addiu       $v1, $zero, 0xF8
    ctx->r3 = ADD32(0, 0XF8);
    // 0x80269688: multu       $t2, $v1
    result = U64(U32(ctx->r10)) * U64(U32(ctx->r3)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8026968C: lw          $t1, 0x18($a1)
    ctx->r9 = MEM_W(ctx->r5, 0X18);
    // 0x80269690: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x80269694: mflo        $t3
    ctx->r11 = lo;
    // 0x80269698: addu        $t4, $t1, $t3
    ctx->r12 = ADD32(ctx->r9, ctx->r11);
    // 0x8026969C: sw          $t4, 0xB2C($at)
    MEM_W(0XB2C, ctx->r1) = ctx->r12;
    // 0x802696A0: lw          $a0, 0x24($a1)
    ctx->r4 = MEM_W(ctx->r5, 0X24);
    // 0x802696A4: jal         0x80269E9C
    // 0x802696A8: nop

    ovl_8024B800_func_80269E9C(rdram, ctx);
        goto after_2;
    // 0x802696A8: nop

    after_2:
    // 0x802696AC: b           L_802697B8
    // 0x802696B0: nop

        goto L_802697B8;
    // 0x802696B0: nop

L_802696B4:
    // 0x802696B4: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    // 0x802696B8: jal         0x80269218
    // 0x802696BC: sw          $a1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r5;
    ovl_8024B800_func_80269218(rdram, ctx);
        goto after_3;
    // 0x802696BC: sw          $a1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r5;
    after_3:
    // 0x802696C0: lw          $a1, 0x20($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X20);
    // 0x802696C4: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x802696C8: sw          $v0, 0xB2C($at)
    MEM_W(0XB2C, ctx->r1) = ctx->r2;
    // 0x802696CC: lw          $a0, 0x24($a1)
    ctx->r4 = MEM_W(ctx->r5, 0X24);
    // 0x802696D0: jal         0x80269E9C
    // 0x802696D4: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    ovl_8024B800_func_80269E9C(rdram, ctx);
        goto after_4;
    // 0x802696D4: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    after_4:
    // 0x802696D8: lw          $t5, 0xD8($s0)
    ctx->r13 = MEM_W(ctx->r16, 0XD8);
    // 0x802696DC: nop

    // 0x802696E0: lbu         $t6, 0x1D($t5)
    ctx->r14 = MEM_BU(ctx->r13, 0X1D);
    // 0x802696E4: nop

    // 0x802696E8: andi        $t7, $t6, 0xE0
    ctx->r15 = ctx->r14 & 0XE0;
    // 0x802696EC: slti        $at, $t7, 0x60
    ctx->r1 = SIGNED(ctx->r15) < 0X60 ? 1 : 0;
    // 0x802696F0: beq         $at, $zero, L_802697D8
    if (ctx->r1 == 0) {
        // 0x802696F4: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_802697D8;
    }
    // 0x802696F4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x802696F8: jal         0x80269458
    // 0x802696FC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_8024B800_func_80269458(rdram, ctx);
        goto after_5;
    // 0x802696FC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_5:
    // 0x80269700: b           L_802697B8
    // 0x80269704: nop

        goto L_802697B8;
    // 0x80269704: nop

L_80269708:
    // 0x80269708: lbu         $t8, 0x8A9($a1)
    ctx->r24 = MEM_BU(ctx->r5, 0X8A9);
    // 0x8026970C: addiu       $v1, $zero, 0xF8
    ctx->r3 = ADD32(0, 0XF8);
    // 0x80269710: multu       $t8, $v1
    result = U64(U32(ctx->r24)) * U64(U32(ctx->r3)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80269714: lw          $t9, 0x18($a1)
    ctx->r25 = MEM_W(ctx->r5, 0X18);
    // 0x80269718: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x8026971C: mflo        $t0
    ctx->r8 = lo;
    // 0x80269720: addu        $s0, $t9, $t0
    ctx->r16 = ADD32(ctx->r25, ctx->r8);
    // 0x80269724: sw          $s0, 0xB2C($at)
    MEM_W(0XB2C, ctx->r1) = ctx->r16;
    // 0x80269728: lw          $a0, 0x24($a1)
    ctx->r4 = MEM_W(ctx->r5, 0X24);
    // 0x8026972C: jal         0x80269E9C
    // 0x80269730: nop

    ovl_8024B800_func_80269E9C(rdram, ctx);
        goto after_6;
    // 0x80269730: nop

    after_6:
    // 0x80269734: lw          $t2, 0xD8($s0)
    ctx->r10 = MEM_W(ctx->r16, 0XD8);
    // 0x80269738: nop

    // 0x8026973C: lbu         $t1, 0x1D($t2)
    ctx->r9 = MEM_BU(ctx->r10, 0X1D);
    // 0x80269740: nop

    // 0x80269744: andi        $t3, $t1, 0xE0
    ctx->r11 = ctx->r9 & 0XE0;
    // 0x80269748: slti        $at, $t3, 0x60
    ctx->r1 = SIGNED(ctx->r11) < 0X60 ? 1 : 0;
    // 0x8026974C: beq         $at, $zero, L_802697D8
    if (ctx->r1 == 0) {
        // 0x80269750: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_802697D8;
    }
    // 0x80269750: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80269754: jal         0x80269458
    // 0x80269758: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_8024B800_func_80269458(rdram, ctx);
        goto after_7;
    // 0x80269758: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_7:
    // 0x8026975C: b           L_802697B8
    // 0x80269760: nop

        goto L_802697B8;
    // 0x80269760: nop

L_80269764:
    // 0x80269764: lui         $t4, 0x8012
    ctx->r12 = S32(0X8012 << 16);
    // 0x80269768: lbu         $t4, 0xB65($t4)
    ctx->r12 = MEM_BU(ctx->r12, 0XB65);
    // 0x8026976C: nop

    // 0x80269770: bne         $t4, $zero, L_80269790
    if (ctx->r12 != 0) {
        // 0x80269774: nop
    
            goto L_80269790;
    }
    // 0x80269774: nop

    // 0x80269778: lui         $s0, 0x8012
    ctx->r16 = S32(0X8012 << 16);
    // 0x8026977C: lw          $s0, 0xB24($s0)
    ctx->r16 = MEM_W(ctx->r16, 0XB24);
    // 0x80269780: jal         0x80268A8C
    // 0x80269784: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    ovl_8024B800_func_80268A8C(rdram, ctx);
        goto after_8;
    // 0x80269784: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    after_8:
    // 0x80269788: b           L_802697B8
    // 0x8026978C: nop

        goto L_802697B8;
    // 0x8026978C: nop

L_80269790:
    // 0x80269790: jal         0x80267F00
    // 0x80269794: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    ovl_8024B800_func_80267F00(rdram, ctx);
        goto after_9;
    // 0x80269794: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    after_9:
    // 0x80269798: b           L_802697B8
    // 0x8026979C: nop

        goto L_802697B8;
    // 0x8026979C: nop

L_802697A0:
    // 0x802697A0: jal         0x80268D7C
    // 0x802697A4: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    ovl_8024B800_func_80268D7C(rdram, ctx);
        goto after_10;
    // 0x802697A4: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    after_10:
    // 0x802697A8: b           L_802697B8
    // 0x802697AC: nop

        goto L_802697B8;
    // 0x802697AC: nop

L_802697B0:
    // 0x802697B0: jal         0x80268EBC
    // 0x802697B4: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    ovl_8024B800_func_80268EBC(rdram, ctx);
        goto after_11;
    // 0x802697B4: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    after_11:
L_802697B8:
    // 0x802697B8: beq         $s0, $zero, L_802697D8
    if (ctx->r16 == 0) {
        // 0x802697BC: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_802697D8;
    }
    // 0x802697BC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x802697C0: lw          $a1, 0x28($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X28);
    // 0x802697C4: jal         0x8026F2EC
    // 0x802697C8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_8024B800_func_8026F2EC(rdram, ctx);
        goto after_12;
    // 0x802697C8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_12:
    // 0x802697CC: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x802697D0: sw          $s0, 0xB2C($at)
    MEM_W(0XB2C, ctx->r1) = ctx->r16;
    // 0x802697D4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_802697D8:
    // 0x802697D8: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x802697DC: jr          $ra
    // 0x802697E0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x802697E0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void ovl_8024B800_func_802697E4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802697E4: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    // 0x802697E8: lw          $v1, 0x18($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X18);
    // 0x802697EC: andi        $t6, $a1, 0xFFFF
    ctx->r14 = ctx->r5 & 0XFFFF;
    // 0x802697F0: lhu         $t7, 0xC($v1)
    ctx->r15 = MEM_HU(ctx->r3, 0XC);
    // 0x802697F4: or          $a1, $t6, $zero
    ctx->r5 = ctx->r14 | 0;
    // 0x802697F8: beq         $t7, $zero, L_80269820
    if (ctx->r15 == 0) {
        // 0x802697FC: nop
    
            goto L_80269820;
    }
    // 0x802697FC: nop

    // 0x80269800: lw          $t8, 0xD8($v1)
    ctx->r24 = MEM_W(ctx->r3, 0XD8);
    // 0x80269804: nop

    // 0x80269808: lbu         $t9, 0x14($t8)
    ctx->r25 = MEM_BU(ctx->r24, 0X14);
    // 0x8026980C: nop

    // 0x80269810: bne         $t6, $t9, L_80269820
    if (ctx->r14 != ctx->r25) {
        // 0x80269814: nop
    
            goto L_80269820;
    }
    // 0x80269814: nop

    // 0x80269818: jr          $ra
    // 0x8026981C: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    return;
    // 0x8026981C: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
L_80269820:
    // 0x80269820: lhu         $t0, 0x104($v1)
    ctx->r8 = MEM_HU(ctx->r3, 0X104);
    // 0x80269824: addiu       $v1, $v1, 0xF8
    ctx->r3 = ADD32(ctx->r3, 0XF8);
    // 0x80269828: beq         $t0, $zero, L_80269850
    if (ctx->r8 == 0) {
        // 0x8026982C: nop
    
            goto L_80269850;
    }
    // 0x8026982C: nop

    // 0x80269830: lw          $t1, 0xD8($v1)
    ctx->r9 = MEM_W(ctx->r3, 0XD8);
    // 0x80269834: nop

    // 0x80269838: lbu         $t2, 0x14($t1)
    ctx->r10 = MEM_BU(ctx->r9, 0X14);
    // 0x8026983C: nop

    // 0x80269840: bne         $a1, $t2, L_80269850
    if (ctx->r5 != ctx->r10) {
        // 0x80269844: nop
    
            goto L_80269850;
    }
    // 0x80269844: nop

    // 0x80269848: jr          $ra
    // 0x8026984C: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    return;
    // 0x8026984C: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
L_80269850:
    // 0x80269850: lhu         $t3, 0x104($v1)
    ctx->r11 = MEM_HU(ctx->r3, 0X104);
    // 0x80269854: addiu       $v1, $v1, 0xF8
    ctx->r3 = ADD32(ctx->r3, 0XF8);
    // 0x80269858: beq         $t3, $zero, L_80269880
    if (ctx->r11 == 0) {
        // 0x8026985C: addiu       $v0, $zero, 0x3
        ctx->r2 = ADD32(0, 0X3);
            goto L_80269880;
    }
    // 0x8026985C: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x80269860: lw          $t4, 0xD8($v1)
    ctx->r12 = MEM_W(ctx->r3, 0XD8);
    // 0x80269864: nop

    // 0x80269868: lbu         $t5, 0x14($t4)
    ctx->r13 = MEM_BU(ctx->r12, 0X14);
    // 0x8026986C: nop

    // 0x80269870: bne         $a1, $t5, L_80269880
    if (ctx->r5 != ctx->r13) {
        // 0x80269874: nop
    
            goto L_80269880;
    }
    // 0x80269874: nop

    // 0x80269878: jr          $ra
    // 0x8026987C: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    return;
    // 0x8026987C: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
L_80269880:
    // 0x80269880: addiu       $v1, $v1, 0xF8
    ctx->r3 = ADD32(ctx->r3, 0XF8);
    // 0x80269884: addiu       $a0, $zero, 0xB
    ctx->r4 = ADD32(0, 0XB);
L_80269888:
    // 0x80269888: lhu         $t6, 0xC($v1)
    ctx->r14 = MEM_HU(ctx->r3, 0XC);
    // 0x8026988C: nop

    // 0x80269890: beq         $t6, $zero, L_802698B8
    if (ctx->r14 == 0) {
        // 0x80269894: nop
    
            goto L_802698B8;
    }
    // 0x80269894: nop

    // 0x80269898: lw          $t7, 0xD8($v1)
    ctx->r15 = MEM_W(ctx->r3, 0XD8);
    // 0x8026989C: nop

    // 0x802698A0: lbu         $t8, 0x14($t7)
    ctx->r24 = MEM_BU(ctx->r15, 0X14);
    // 0x802698A4: nop

    // 0x802698A8: bne         $a1, $t8, L_802698B8
    if (ctx->r5 != ctx->r24) {
        // 0x802698AC: nop
    
            goto L_802698B8;
    }
    // 0x802698AC: nop

    // 0x802698B0: jr          $ra
    // 0x802698B4: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    return;
    // 0x802698B4: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
L_802698B8:
    // 0x802698B8: lhu         $t9, 0x104($v1)
    ctx->r25 = MEM_HU(ctx->r3, 0X104);
    // 0x802698BC: addiu       $v1, $v1, 0xF8
    ctx->r3 = ADD32(ctx->r3, 0XF8);
    // 0x802698C0: beq         $t9, $zero, L_802698E8
    if (ctx->r25 == 0) {
        // 0x802698C4: nop
    
            goto L_802698E8;
    }
    // 0x802698C4: nop

    // 0x802698C8: lw          $t0, 0xD8($v1)
    ctx->r8 = MEM_W(ctx->r3, 0XD8);
    // 0x802698CC: nop

    // 0x802698D0: lbu         $t1, 0x14($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X14);
    // 0x802698D4: nop

    // 0x802698D8: bne         $a1, $t1, L_802698E8
    if (ctx->r5 != ctx->r9) {
        // 0x802698DC: nop
    
            goto L_802698E8;
    }
    // 0x802698DC: nop

    // 0x802698E0: jr          $ra
    // 0x802698E4: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    return;
    // 0x802698E4: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
L_802698E8:
    // 0x802698E8: lhu         $t2, 0x104($v1)
    ctx->r10 = MEM_HU(ctx->r3, 0X104);
    // 0x802698EC: addiu       $v1, $v1, 0xF8
    ctx->r3 = ADD32(ctx->r3, 0XF8);
    // 0x802698F0: beq         $t2, $zero, L_80269918
    if (ctx->r10 == 0) {
        // 0x802698F4: nop
    
            goto L_80269918;
    }
    // 0x802698F4: nop

    // 0x802698F8: lw          $t3, 0xD8($v1)
    ctx->r11 = MEM_W(ctx->r3, 0XD8);
    // 0x802698FC: nop

    // 0x80269900: lbu         $t4, 0x14($t3)
    ctx->r12 = MEM_BU(ctx->r11, 0X14);
    // 0x80269904: nop

    // 0x80269908: bne         $a1, $t4, L_80269918
    if (ctx->r5 != ctx->r12) {
        // 0x8026990C: nop
    
            goto L_80269918;
    }
    // 0x8026990C: nop

    // 0x80269910: jr          $ra
    // 0x80269914: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    return;
    // 0x80269914: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
L_80269918:
    // 0x80269918: lhu         $t5, 0x104($v1)
    ctx->r13 = MEM_HU(ctx->r3, 0X104);
    // 0x8026991C: addiu       $v1, $v1, 0xF8
    ctx->r3 = ADD32(ctx->r3, 0XF8);
    // 0x80269920: beq         $t5, $zero, L_80269948
    if (ctx->r13 == 0) {
        // 0x80269924: addiu       $v0, $v0, 0x4
        ctx->r2 = ADD32(ctx->r2, 0X4);
            goto L_80269948;
    }
    // 0x80269924: addiu       $v0, $v0, 0x4
    ctx->r2 = ADD32(ctx->r2, 0X4);
    // 0x80269928: lw          $t6, 0xD8($v1)
    ctx->r14 = MEM_W(ctx->r3, 0XD8);
    // 0x8026992C: nop

    // 0x80269930: lbu         $t7, 0x14($t6)
    ctx->r15 = MEM_BU(ctx->r14, 0X14);
    // 0x80269934: nop

    // 0x80269938: bne         $a1, $t7, L_80269948
    if (ctx->r5 != ctx->r15) {
        // 0x8026993C: nop
    
            goto L_80269948;
    }
    // 0x8026993C: nop

    // 0x80269940: jr          $ra
    // 0x80269944: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    return;
    // 0x80269944: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
L_80269948:
    // 0x80269948: bne         $v0, $a0, L_80269888
    if (ctx->r2 != ctx->r4) {
        // 0x8026994C: addiu       $v1, $v1, 0xF8
        ctx->r3 = ADD32(ctx->r3, 0XF8);
            goto L_80269888;
    }
    // 0x8026994C: addiu       $v1, $v1, 0xF8
    ctx->r3 = ADD32(ctx->r3, 0XF8);
    // 0x80269950: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x80269954: jr          $ra
    // 0x80269958: nop

    return;
    // 0x80269958: nop

;}
RECOMP_FUNC void ovl_8024B800_func_8026995C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8026995C: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80269960: lui         $at, 0x8028
    ctx->r1 = S32(0X8028 << 16);
    // 0x80269964: sw          $s3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r19;
    // 0x80269968: sh          $zero, -0x1B3C($at)
    MEM_H(-0X1B3C, ctx->r1) = 0;
    // 0x8026996C: lui         $s3, 0x8028
    ctx->r19 = S32(0X8028 << 16);
    // 0x80269970: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x80269974: lui         $at, 0x8028
    ctx->r1 = S32(0X8028 << 16);
    // 0x80269978: lui         $s1, 0x8012
    ctx->r17 = S32(0X8012 << 16);
    // 0x8026997C: addiu       $s3, $s3, -0x1B60
    ctx->r19 = ADD32(ctx->r19, -0X1B60);
    // 0x80269980: sh          $zero, -0x1B3E($at)
    MEM_H(-0X1B3E, ctx->r1) = 0;
    // 0x80269984: lh          $t6, 0x0($s3)
    ctx->r14 = MEM_H(ctx->r19, 0X0);
    // 0x80269988: addiu       $s1, $s1, 0xB34
    ctx->r17 = ADD32(ctx->r17, 0XB34);
    // 0x8026998C: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x80269990: sw          $s2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r18;
    // 0x80269994: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x80269998: sw          $zero, 0x0($s1)
    MEM_W(0X0, ctx->r17) = 0;
    // 0x8026999C: lw          $s0, 0x18($a0)
    ctx->r16 = MEM_W(ctx->r4, 0X18);
    // 0x802699A0: andi        $t7, $t6, 0x3
    ctx->r15 = ctx->r14 & 0X3;
    // 0x802699A4: bne         $t7, $zero, L_80269A18
    if (ctx->r15 != 0) {
        // 0x802699A8: or          $s2, $a0, $zero
        ctx->r18 = ctx->r4 | 0;
            goto L_80269A18;
    }
    // 0x802699A8: or          $s2, $a0, $zero
    ctx->r18 = ctx->r4 | 0;
    // 0x802699AC: lui         $a1, 0x8028
    ctx->r5 = S32(0X8028 << 16);
    // 0x802699B0: addiu       $a1, $a1, -0x334C
    ctx->r5 = ADD32(ctx->r5, -0X334C);
    // 0x802699B4: jal         0x8026F2EC
    // 0x802699B8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_8024B800_func_8026F2EC(rdram, ctx);
        goto after_0;
    // 0x802699B8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_0:
    // 0x802699BC: addiu       $t8, $zero, 0x28
    ctx->r24 = ADD32(0, 0X28);
    // 0x802699C0: sh          $t8, 0x24($s0)
    MEM_H(0X24, ctx->r16) = ctx->r24;
    // 0x802699C4: lhu         $t9, 0x8($s2)
    ctx->r25 = MEM_HU(ctx->r18, 0X8);
    // 0x802699C8: lui         $at, 0x8028
    ctx->r1 = S32(0X8028 << 16);
    // 0x802699CC: andi        $t0, $t9, 0x1
    ctx->r8 = ctx->r25 & 0X1;
    // 0x802699D0: beq         $t0, $zero, L_802699F0
    if (ctx->r8 == 0) {
        // 0x802699D4: nop
    
            goto L_802699F0;
    }
    // 0x802699D4: nop

    // 0x802699D8: mtc1        $zero, $f5
    ctx->f_odd[(5 - 1) * 2] = 0;
    // 0x802699DC: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x802699E0: nop

    // 0x802699E4: cvt.s.d     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.d); 
    ctx->f6.fl = CVT_S_D(ctx->f4.d);
    // 0x802699E8: b           L_80269A04
    // 0x802699EC: swc1        $f6, 0xBC($s0)
    MEM_W(0XBC, ctx->r16) = ctx->f6.u32l;
        goto L_80269A04;
    // 0x802699EC: swc1        $f6, 0xBC($s0)
    MEM_W(0XBC, ctx->r16) = ctx->f6.u32l;
L_802699F0:
    // 0x802699F0: lwc1        $f9, -0x2B68($at)
    ctx->f_odd[(9 - 1) * 2] = MEM_W(ctx->r1, -0X2B68);
    // 0x802699F4: lwc1        $f8, -0x2B64($at)
    ctx->f8.u32l = MEM_W(ctx->r1, -0X2B64);
    // 0x802699F8: nop

    // 0x802699FC: cvt.s.d     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.d); 
    ctx->f10.fl = CVT_S_D(ctx->f8.d);
    // 0x80269A00: swc1        $f10, 0xBC($s0)
    MEM_W(0XBC, ctx->r16) = ctx->f10.u32l;
L_80269A04:
    // 0x80269A04: lbu         $t1, 0x3($s0)
    ctx->r9 = MEM_BU(ctx->r16, 0X3);
    // 0x80269A08: nop

    // 0x80269A0C: ori         $t2, $t1, 0x2
    ctx->r10 = ctx->r9 | 0X2;
    // 0x80269A10: sb          $t2, 0x3($s0)
    MEM_B(0X3, ctx->r16) = ctx->r10;
    // 0x80269A14: sw          $s0, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->r16;
L_80269A18:
    // 0x80269A18: lw          $a0, 0x24($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X24);
    // 0x80269A1C: jal         0x80268958
    // 0x80269A20: nop

    ovl_8024B800_func_80268958(rdram, ctx);
        goto after_1;
    // 0x80269A20: nop

    after_1:
    // 0x80269A24: bne         $v0, $zero, L_80269B3C
    if (ctx->r2 != 0) {
        // 0x80269A28: nop
    
            goto L_80269B3C;
    }
    // 0x80269A28: nop

    // 0x80269A2C: lh          $v0, 0x0($s3)
    ctx->r2 = MEM_H(ctx->r19, 0X0);
    // 0x80269A30: nop

    // 0x80269A34: andi        $t3, $v0, 0x2
    ctx->r11 = ctx->r2 & 0X2;
    // 0x80269A38: beq         $t3, $zero, L_80269B3C
    if (ctx->r11 == 0) {
        // 0x80269A3C: andi        $t4, $v0, 0x1
        ctx->r12 = ctx->r2 & 0X1;
            goto L_80269B3C;
    }
    // 0x80269A3C: andi        $t4, $v0, 0x1
    ctx->r12 = ctx->r2 & 0X1;
    // 0x80269A40: bne         $t4, $zero, L_80269AE4
    if (ctx->r12 != 0) {
        // 0x80269A44: or          $a0, $s2, $zero
        ctx->r4 = ctx->r18 | 0;
            goto L_80269AE4;
    }
    // 0x80269A44: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x80269A48: lw          $s0, 0x18($s2)
    ctx->r16 = MEM_W(ctx->r18, 0X18);
    // 0x80269A4C: nop

    // 0x80269A50: lwc1        $f12, 0x44($s0)
    ctx->f12.u32l = MEM_W(ctx->r16, 0X44);
    // 0x80269A54: jal         0x80272AEC
    // 0x80269A58: nop

    ovl_8024B800_func_80272AEC(rdram, ctx);
        goto after_2;
    // 0x80269A58: nop

    after_2:
    // 0x80269A5C: lui         $at, 0x4218
    ctx->r1 = S32(0X4218 << 16);
    // 0x80269A60: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x80269A64: nop

    // 0x80269A68: c.lt.s      $f0, $f16
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f0.fl < ctx->f16.fl;
    // 0x80269A6C: nop

    // 0x80269A70: bc1f        L_80269B3C
    if (!c1cs) {
        // 0x80269A74: nop
    
            goto L_80269B3C;
    }
    // 0x80269A74: nop

    // 0x80269A78: lhu         $t5, 0x12($s0)
    ctx->r13 = MEM_HU(ctx->r16, 0X12);
    // 0x80269A7C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80269A80: andi        $t6, $t5, 0x300
    ctx->r14 = ctx->r13 & 0X300;
    // 0x80269A84: bne         $t6, $zero, L_80269B3C
    if (ctx->r14 != 0) {
        // 0x80269A88: lui         $a1, 0x8028
        ctx->r5 = S32(0X8028 << 16);
            goto L_80269B3C;
    }
    // 0x80269A88: lui         $a1, 0x8028
    ctx->r5 = S32(0X8028 << 16);
    // 0x80269A8C: sw          $s0, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->r16;
    // 0x80269A90: jal         0x8026F2EC
    // 0x80269A94: addiu       $a1, $a1, -0x332C
    ctx->r5 = ADD32(ctx->r5, -0X332C);
    ovl_8024B800_func_8026F2EC(rdram, ctx);
        goto after_3;
    // 0x80269A94: addiu       $a1, $a1, -0x332C
    ctx->r5 = ADD32(ctx->r5, -0X332C);
    after_3:
    // 0x80269A98: addiu       $t7, $zero, 0x32
    ctx->r15 = ADD32(0, 0X32);
    // 0x80269A9C: sh          $t7, 0x24($s0)
    MEM_H(0X24, ctx->r16) = ctx->r15;
    // 0x80269AA0: lhu         $t8, 0x8($s2)
    ctx->r24 = MEM_HU(ctx->r18, 0X8);
    // 0x80269AA4: lui         $at, 0x8028
    ctx->r1 = S32(0X8028 << 16);
    // 0x80269AA8: andi        $t9, $t8, 0x1
    ctx->r25 = ctx->r24 & 0X1;
    // 0x80269AAC: beq         $t9, $zero, L_80269ACC
    if (ctx->r25 == 0) {
        // 0x80269AB0: nop
    
            goto L_80269ACC;
    }
    // 0x80269AB0: nop

    // 0x80269AB4: mtc1        $zero, $f19
    ctx->f_odd[(19 - 1) * 2] = 0;
    // 0x80269AB8: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x80269ABC: nop

    // 0x80269AC0: cvt.s.d     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.d); 
    ctx->f4.fl = CVT_S_D(ctx->f18.d);
    // 0x80269AC4: b           L_80269B3C
    // 0x80269AC8: swc1        $f4, 0xBC($s0)
    MEM_W(0XBC, ctx->r16) = ctx->f4.u32l;
        goto L_80269B3C;
    // 0x80269AC8: swc1        $f4, 0xBC($s0)
    MEM_W(0XBC, ctx->r16) = ctx->f4.u32l;
L_80269ACC:
    // 0x80269ACC: lwc1        $f7, -0x2B60($at)
    ctx->f_odd[(7 - 1) * 2] = MEM_W(ctx->r1, -0X2B60);
    // 0x80269AD0: lwc1        $f6, -0x2B5C($at)
    ctx->f6.u32l = MEM_W(ctx->r1, -0X2B5C);
    // 0x80269AD4: nop

    // 0x80269AD8: cvt.s.d     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.d); 
    ctx->f8.fl = CVT_S_D(ctx->f6.d);
    // 0x80269ADC: b           L_80269B3C
    // 0x80269AE0: swc1        $f8, 0xBC($s0)
    MEM_W(0XBC, ctx->r16) = ctx->f8.u32l;
        goto L_80269B3C;
    // 0x80269AE0: swc1        $f8, 0xBC($s0)
    MEM_W(0XBC, ctx->r16) = ctx->f8.u32l;
L_80269AE4:
    // 0x80269AE4: jal         0x802636CC
    // 0x80269AE8: addiu       $a1, $s2, 0x318
    ctx->r5 = ADD32(ctx->r18, 0X318);
    ovl_8024B800_func_802636CC(rdram, ctx);
        goto after_4;
    // 0x80269AE8: addiu       $a1, $s2, 0x318
    ctx->r5 = ADD32(ctx->r18, 0X318);
    after_4:
    // 0x80269AEC: lwc1        $f12, 0x44($v0)
    ctx->f12.u32l = MEM_W(ctx->r2, 0X44);
    // 0x80269AF0: jal         0x80272AEC
    // 0x80269AF4: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    ovl_8024B800_func_80272AEC(rdram, ctx);
        goto after_5;
    // 0x80269AF4: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    after_5:
    // 0x80269AF8: lui         $at, 0x4218
    ctx->r1 = S32(0X4218 << 16);
    // 0x80269AFC: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x80269B00: nop

    // 0x80269B04: c.lt.s      $f0, $f10
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f0.fl < ctx->f10.fl;
    // 0x80269B08: nop

    // 0x80269B0C: bc1f        L_80269B3C
    if (!c1cs) {
        // 0x80269B10: nop
    
            goto L_80269B3C;
    }
    // 0x80269B10: nop

    // 0x80269B14: lhu         $t0, 0x12($s0)
    ctx->r8 = MEM_HU(ctx->r16, 0X12);
    // 0x80269B18: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80269B1C: andi        $t1, $t0, 0x300
    ctx->r9 = ctx->r8 & 0X300;
    // 0x80269B20: bne         $t1, $zero, L_80269B3C
    if (ctx->r9 != 0) {
        // 0x80269B24: lui         $a1, 0x8028
        ctx->r5 = S32(0X8028 << 16);
            goto L_80269B3C;
    }
    // 0x80269B24: lui         $a1, 0x8028
    ctx->r5 = S32(0X8028 << 16);
    // 0x80269B28: sw          $s0, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->r16;
    // 0x80269B2C: jal         0x8026F2EC
    // 0x80269B30: addiu       $a1, $a1, -0x3318
    ctx->r5 = ADD32(ctx->r5, -0X3318);
    ovl_8024B800_func_8026F2EC(rdram, ctx);
        goto after_6;
    // 0x80269B30: addiu       $a1, $a1, -0x3318
    ctx->r5 = ADD32(ctx->r5, -0X3318);
    after_6:
    // 0x80269B34: addiu       $t2, $zero, 0x32
    ctx->r10 = ADD32(0, 0X32);
    // 0x80269B38: sh          $t2, 0x24($s0)
    MEM_H(0X24, ctx->r16) = ctx->r10;
L_80269B3C:
    // 0x80269B3C: lw          $s0, 0x18($s2)
    ctx->r16 = MEM_W(ctx->r18, 0X18);
    // 0x80269B40: lui         $s2, 0x8028
    ctx->r18 = S32(0X8028 << 16);
    // 0x80269B44: addiu       $s2, $s2, -0x3338
    ctx->r18 = ADD32(ctx->r18, -0X3338);
    // 0x80269B48: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    // 0x80269B4C: addiu       $s3, $zero, 0xB
    ctx->r19 = ADD32(0, 0XB);
L_80269B50:
    // 0x80269B50: lhu         $t3, 0xC($s0)
    ctx->r11 = MEM_HU(ctx->r16, 0XC);
    // 0x80269B54: nop

    // 0x80269B58: beq         $t3, $zero, L_80269B8C
    if (ctx->r11 == 0) {
        // 0x80269B5C: nop
    
            goto L_80269B8C;
    }
    // 0x80269B5C: nop

    // 0x80269B60: lhu         $t4, 0x12($s0)
    ctx->r12 = MEM_HU(ctx->r16, 0X12);
    // 0x80269B64: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80269B68: andi        $t5, $t4, 0x300
    ctx->r13 = ctx->r12 & 0X300;
    // 0x80269B6C: bne         $t5, $zero, L_80269B8C
    if (ctx->r13 != 0) {
        // 0x80269B70: nop
    
            goto L_80269B8C;
    }
    // 0x80269B70: nop

    // 0x80269B74: jal         0x8026F2EC
    // 0x80269B78: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    ovl_8024B800_func_8026F2EC(rdram, ctx);
        goto after_7;
    // 0x80269B78: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    after_7:
    // 0x80269B7C: jal         0x80059898
    // 0x80269B80: addiu       $a0, $zero, 0x14
    ctx->r4 = ADD32(0, 0X14);
    func_80059898(rdram, ctx);
        goto after_8;
    // 0x80269B80: addiu       $a0, $zero, 0x14
    ctx->r4 = ADD32(0, 0X14);
    after_8:
    // 0x80269B84: addiu       $t6, $v0, 0xA
    ctx->r14 = ADD32(ctx->r2, 0XA);
    // 0x80269B88: sh          $t6, 0x24($s0)
    MEM_H(0X24, ctx->r16) = ctx->r14;
L_80269B8C:
    // 0x80269B8C: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x80269B90: bne         $s1, $s3, L_80269B50
    if (ctx->r17 != ctx->r19) {
        // 0x80269B94: addiu       $s0, $s0, 0xF8
        ctx->r16 = ADD32(ctx->r16, 0XF8);
            goto L_80269B50;
    }
    // 0x80269B94: addiu       $s0, $s0, 0xF8
    ctx->r16 = ADD32(ctx->r16, 0XF8);
    // 0x80269B98: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x80269B9C: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x80269BA0: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x80269BA4: lw          $s2, 0x1C($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X1C);
    // 0x80269BA8: lw          $s3, 0x20($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X20);
    // 0x80269BAC: jr          $ra
    // 0x80269BB0: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x80269BB0: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void ovl_8024B800_func_80269BB4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80269BB4: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x80269BB8: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x80269BBC: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x80269BC0: lw          $a0, 0xB28($a0)
    ctx->r4 = MEM_W(ctx->r4, 0XB28);
    // 0x80269BC4: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80269BC8: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80269BCC: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x80269BD0: mfc1        $a2, $f0
    ctx->r6 = (int32_t)ctx->f0.u32l;
    // 0x80269BD4: lw          $s0, 0xC8($a0)
    ctx->r16 = MEM_W(ctx->r4, 0XC8);
    // 0x80269BD8: jal         0x80272B98
    // 0x80269BDC: addiu       $a3, $sp, 0x30
    ctx->r7 = ADD32(ctx->r29, 0X30);
    ovl_8024B800_func_80272B98(rdram, ctx);
        goto after_0;
    // 0x80269BDC: addiu       $a3, $sp, 0x30
    ctx->r7 = ADD32(ctx->r29, 0X30);
    after_0:
    // 0x80269BE0: lwc1        $f12, 0x30($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X30);
    // 0x80269BE4: jal         0x80081040
    // 0x80269BE8: nop

    func_80081040(rdram, ctx);
        goto after_1;
    // 0x80269BE8: nop

    after_1:
    // 0x80269BEC: lui         $at, 0x4220
    ctx->r1 = S32(0X4220 << 16);
    // 0x80269BF0: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80269BF4: lui         $t6, 0x8012
    ctx->r14 = S32(0X8012 << 16);
    // 0x80269BF8: mul.s       $f6, $f0, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f0.fl, ctx->f4.fl);
    // 0x80269BFC: lw          $t6, 0xB28($t6)
    ctx->r14 = MEM_W(ctx->r14, 0XB28);
    // 0x80269C00: nop

    // 0x80269C04: lwc1        $f8, 0x4C($t6)
    ctx->f8.u32l = MEM_W(ctx->r14, 0X4C);
    // 0x80269C08: nop

    // 0x80269C0C: add.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x80269C10: cfc1        $t7, $FpcCsr
    ctx->r15 = get_cop1_cs();
    // 0x80269C14: nop

    // 0x80269C18: ori         $at, $t7, 0x3
    ctx->r1 = ctx->r15 | 0X3;
    // 0x80269C1C: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x80269C20: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x80269C24: nop

    // 0x80269C28: cvt.w.s     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.u32l = CVT_W_S(ctx->f10.fl);
    // 0x80269C2C: mfc1        $t8, $f16
    ctx->r24 = (int32_t)ctx->f16.u32l;
    // 0x80269C30: ctc1        $t7, $FpcCsr
    set_cop1_cs(ctx->r15);
    // 0x80269C34: sh          $t8, 0x932($s0)
    MEM_H(0X932, ctx->r16) = ctx->r24;
    // 0x80269C38: lwc1        $f12, 0x30($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X30);
    // 0x80269C3C: jal         0x80080E80
    // 0x80269C40: nop

    func_80080E80(rdram, ctx);
        goto after_2;
    // 0x80269C40: nop

    after_2:
    // 0x80269C44: lui         $at, 0x4220
    ctx->r1 = S32(0X4220 << 16);
    // 0x80269C48: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x80269C4C: lui         $t0, 0x8012
    ctx->r8 = S32(0X8012 << 16);
    // 0x80269C50: addiu       $t0, $t0, 0xB28
    ctx->r8 = ADD32(ctx->r8, 0XB28);
    // 0x80269C54: mul.s       $f4, $f0, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = MUL_S(ctx->f0.fl, ctx->f18.fl);
    // 0x80269C58: lw          $t9, 0x0($t0)
    ctx->r25 = MEM_W(ctx->r8, 0X0);
    // 0x80269C5C: lui         $t3, 0x8009
    ctx->r11 = S32(0X8009 << 16);
    // 0x80269C60: lwc1        $f6, 0x44($t9)
    ctx->f6.u32l = MEM_W(ctx->r25, 0X44);
    // 0x80269C64: lui         $v1, 0x8012
    ctx->r3 = S32(0X8012 << 16);
    // 0x80269C68: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x80269C6C: addiu       $v1, $v1, -0x2CF0
    ctx->r3 = ADD32(ctx->r3, -0X2CF0);
    // 0x80269C70: cfc1        $t1, $FpcCsr
    ctx->r9 = get_cop1_cs();
    // 0x80269C74: addiu       $v0, $zero, 0x28
    ctx->r2 = ADD32(0, 0X28);
    // 0x80269C78: ori         $at, $t1, 0x3
    ctx->r1 = ctx->r9 | 0X3;
    // 0x80269C7C: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x80269C80: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x80269C84: nop

    // 0x80269C88: cvt.w.s     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.u32l = CVT_W_S(ctx->f8.fl);
    // 0x80269C8C: mfc1        $t2, $f10
    ctx->r10 = (int32_t)ctx->f10.u32l;
    // 0x80269C90: ctc1        $t1, $FpcCsr
    set_cop1_cs(ctx->r9);
    // 0x80269C94: sh          $t2, 0x934($s0)
    MEM_H(0X934, ctx->r16) = ctx->r10;
    // 0x80269C98: lw          $t3, 0x3B20($t3)
    ctx->r11 = MEM_W(ctx->r11, 0X3B20);
    // 0x80269C9C: nop

    // 0x80269CA0: lh          $t4, 0xEA($t3)
    ctx->r12 = MEM_H(ctx->r11, 0XEA);
    // 0x80269CA4: nop

    // 0x80269CA8: blez        $t4, L_80269CB8
    if (SIGNED(ctx->r12) <= 0) {
        // 0x80269CAC: nop
    
            goto L_80269CB8;
    }
    // 0x80269CAC: nop

    // 0x80269CB0: b           L_80269CB8
    // 0x80269CB4: addiu       $v0, $zero, -0x28
    ctx->r2 = ADD32(0, -0X28);
        goto L_80269CB8;
    // 0x80269CB4: addiu       $v0, $zero, -0x28
    ctx->r2 = ADD32(0, -0X28);
L_80269CB8:
    // 0x80269CB8: lh          $t5, 0x934($v1)
    ctx->r13 = MEM_H(ctx->r3, 0X934);
    // 0x80269CBC: lw          $a0, 0x0($t0)
    ctx->r4 = MEM_W(ctx->r8, 0X0);
    // 0x80269CC0: addu        $t6, $t5, $v0
    ctx->r14 = ADD32(ctx->r13, ctx->r2);
    // 0x80269CC4: sh          $t6, 0x934($v1)
    MEM_H(0X934, ctx->r3) = ctx->r14;
    // 0x80269CC8: lh          $t8, 0x934($s0)
    ctx->r24 = MEM_H(ctx->r16, 0X934);
    // 0x80269CCC: lh          $t7, 0x932($s0)
    ctx->r15 = MEM_H(ctx->r16, 0X932);
    // 0x80269CD0: mtc1        $t8, $f18
    ctx->f18.u32l = ctx->r24;
    // 0x80269CD4: mtc1        $t7, $f16
    ctx->f16.u32l = ctx->r15;
    // 0x80269CD8: cvt.s.w     $f18, $f18
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    ctx->f18.fl = CVT_S_W(ctx->f18.u32l);
    // 0x80269CDC: addiu       $a3, $sp, 0x30
    ctx->r7 = ADD32(ctx->r29, 0X30);
    // 0x80269CE0: cvt.s.w     $f16, $f16
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    ctx->f16.fl = CVT_S_W(ctx->f16.u32l);
    // 0x80269CE4: mfc1        $a2, $f18
    ctx->r6 = (int32_t)ctx->f18.u32l;
    // 0x80269CE8: mfc1        $a1, $f16
    ctx->r5 = (int32_t)ctx->f16.u32l;
    // 0x80269CEC: jal         0x80272B98
    // 0x80269CF0: nop

    ovl_8024B800_func_80272B98(rdram, ctx);
        goto after_3;
    // 0x80269CF0: nop

    after_3:
    // 0x80269CF4: lui         $t9, 0x8012
    ctx->r25 = S32(0X8012 << 16);
    // 0x80269CF8: lw          $t9, 0xB28($t9)
    ctx->r25 = MEM_W(ctx->r25, 0XB28);
    // 0x80269CFC: lwc1        $f4, 0x30($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X30);
    // 0x80269D00: lui         $at, 0x8028
    ctx->r1 = S32(0X8028 << 16);
    // 0x80269D04: swc1        $f4, 0xBC($t9)
    MEM_W(0XBC, ctx->r25) = ctx->f4.u32l;
    // 0x80269D08: lwc1        $f6, 0x30($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X30);
    // 0x80269D0C: lwc1        $f10, -0x2B54($at)
    ctx->f10.u32l = MEM_W(ctx->r1, -0X2B54);
    // 0x80269D10: lwc1        $f11, -0x2B58($at)
    ctx->f_odd[(11 - 1) * 2] = MEM_W(ctx->r1, -0X2B58);
    // 0x80269D14: cvt.d.s     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f8.d = CVT_D_S(ctx->f6.fl);
    // 0x80269D18: add.d       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f10.d); 
    ctx->f16.d = ctx->f8.d + ctx->f10.d;
    // 0x80269D1C: lui         $at, 0x8028
    ctx->r1 = S32(0X8028 << 16);
    // 0x80269D20: cvt.s.d     $f12, $f16
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.d); 
    ctx->f12.fl = CVT_S_D(ctx->f16.d);
    // 0x80269D24: lwc1        $f5, -0x2B50($at)
    ctx->f_odd[(5 - 1) * 2] = MEM_W(ctx->r1, -0X2B50);
    // 0x80269D28: lwc1        $f4, -0x2B4C($at)
    ctx->f4.u32l = MEM_W(ctx->r1, -0X2B4C);
    // 0x80269D2C: cvt.d.s     $f18, $f12
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); 
    ctx->f18.d = CVT_D_S(ctx->f12.fl);
    // 0x80269D30: mul.d       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.d); NAN_CHECK(ctx->f4.d); 
    ctx->f6.d = MUL_D(ctx->f18.d, ctx->f4.d);
    // 0x80269D34: lui         $at, 0x8028
    ctx->r1 = S32(0X8028 << 16);
    // 0x80269D38: swc1        $f12, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f12.u32l;
    // 0x80269D3C: cvt.s.d     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.d); 
    ctx->f8.fl = CVT_S_D(ctx->f6.d);
    // 0x80269D40: jal         0x80081040
    // 0x80269D44: swc1        $f8, -0x1B24($at)
    MEM_W(-0X1B24, ctx->r1) = ctx->f8.u32l;
    func_80081040(rdram, ctx);
        goto after_4;
    // 0x80269D44: swc1        $f8, -0x1B24($at)
    MEM_W(-0X1B24, ctx->r1) = ctx->f8.u32l;
    after_4:
    // 0x80269D48: lh          $t1, 0x932($s0)
    ctx->r9 = MEM_H(ctx->r16, 0X932);
    // 0x80269D4C: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x80269D50: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x80269D54: mtc1        $t1, $f18
    ctx->f18.u32l = ctx->r9;
    // 0x80269D58: mul.s       $f16, $f0, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = MUL_S(ctx->f0.fl, ctx->f10.fl);
    // 0x80269D5C: lwc1        $f12, 0x2C($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x80269D60: cvt.s.w     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    ctx->f4.fl = CVT_S_W(ctx->f18.u32l);
    // 0x80269D64: add.s       $f6, $f16, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f16.fl + ctx->f4.fl;
    // 0x80269D68: cfc1        $t2, $FpcCsr
    ctx->r10 = get_cop1_cs();
    // 0x80269D6C: nop

    // 0x80269D70: ori         $at, $t2, 0x3
    ctx->r1 = ctx->r10 | 0X3;
    // 0x80269D74: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x80269D78: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x80269D7C: lui         $at, 0x8028
    ctx->r1 = S32(0X8028 << 16);
    // 0x80269D80: cvt.w.s     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.u32l = CVT_W_S(ctx->f6.fl);
    // 0x80269D84: mfc1        $t3, $f8
    ctx->r11 = (int32_t)ctx->f8.u32l;
    // 0x80269D88: ctc1        $t2, $FpcCsr
    set_cop1_cs(ctx->r10);
    // 0x80269D8C: jal         0x80080E80
    // 0x80269D90: sh          $t3, -0x1B20($at)
    MEM_H(-0X1B20, ctx->r1) = ctx->r11;
    func_80080E80(rdram, ctx);
        goto after_5;
    // 0x80269D90: sh          $t3, -0x1B20($at)
    MEM_H(-0X1B20, ctx->r1) = ctx->r11;
    after_5:
    // 0x80269D94: lh          $t4, 0x934($s0)
    ctx->r12 = MEM_H(ctx->r16, 0X934);
    // 0x80269D98: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x80269D9C: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x80269DA0: mtc1        $t4, $f16
    ctx->f16.u32l = ctx->r12;
    // 0x80269DA4: mul.s       $f18, $f0, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f18.fl = MUL_S(ctx->f0.fl, ctx->f10.fl);
    // 0x80269DA8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80269DAC: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80269DB0: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    // 0x80269DB4: cvt.s.w     $f4, $f16
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    ctx->f4.fl = CVT_S_W(ctx->f16.u32l);
    // 0x80269DB8: add.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f18.fl + ctx->f4.fl;
    // 0x80269DBC: cfc1        $t5, $FpcCsr
    ctx->r13 = get_cop1_cs();
    // 0x80269DC0: nop

    // 0x80269DC4: ori         $at, $t5, 0x3
    ctx->r1 = ctx->r13 | 0X3;
    // 0x80269DC8: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x80269DCC: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x80269DD0: lui         $at, 0x8028
    ctx->r1 = S32(0X8028 << 16);
    // 0x80269DD4: cvt.w.s     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.u32l = CVT_W_S(ctx->f6.fl);
    // 0x80269DD8: mfc1        $t6, $f8
    ctx->r14 = (int32_t)ctx->f8.u32l;
    // 0x80269DDC: ctc1        $t5, $FpcCsr
    set_cop1_cs(ctx->r13);
    // 0x80269DE0: jr          $ra
    // 0x80269DE4: sh          $t6, -0x1B1E($at)
    MEM_H(-0X1B1E, ctx->r1) = ctx->r14;
    return;
    // 0x80269DE4: sh          $t6, -0x1B1E($at)
    MEM_H(-0X1B1E, ctx->r1) = ctx->r14;
;}
RECOMP_FUNC void ovl_8024B800_func_80269DE8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80269DE8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80269DEC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80269DF0: jal         0x80269BB4
    // 0x80269DF4: nop

    ovl_8024B800_func_80269BB4(rdram, ctx);
        goto after_0;
    // 0x80269DF4: nop

    after_0:
    // 0x80269DF8: lui         $t6, 0x8028
    ctx->r14 = S32(0X8028 << 16);
    // 0x80269DFC: lh          $t6, -0x1B60($t6)
    ctx->r14 = MEM_H(ctx->r14, -0X1B60);
    // 0x80269E00: addiu       $v1, $zero, 0x8
    ctx->r3 = ADD32(0, 0X8);
    // 0x80269E04: andi        $t7, $t6, 0x1
    ctx->r15 = ctx->r14 & 0X1;
    // 0x80269E08: beq         $t7, $zero, L_80269E18
    if (ctx->r15 == 0) {
        // 0x80269E0C: lui         $t8, 0x8012
        ctx->r24 = S32(0X8012 << 16);
            goto L_80269E18;
    }
    // 0x80269E0C: lui         $t8, 0x8012
    ctx->r24 = S32(0X8012 << 16);
    // 0x80269E10: b           L_80269E18
    // 0x80269E14: addiu       $v1, $zero, 0x9
    ctx->r3 = ADD32(0, 0X9);
        goto L_80269E18;
    // 0x80269E14: addiu       $v1, $zero, 0x9
    ctx->r3 = ADD32(0, 0X9);
L_80269E18:
    // 0x80269E18: lw          $t8, 0xB28($t8)
    ctx->r24 = MEM_W(ctx->r24, 0XB28);
    // 0x80269E1C: lui         $a3, 0x8028
    ctx->r7 = S32(0X8028 << 16);
    // 0x80269E20: lw          $v0, 0xC8($t8)
    ctx->r2 = MEM_W(ctx->r24, 0XC8);
    // 0x80269E24: lw          $a3, -0x1B24($a3)
    ctx->r7 = MEM_W(ctx->r7, -0X1B24);
    // 0x80269E28: lh          $t9, 0x934($v0)
    ctx->r25 = MEM_H(ctx->r2, 0X934);
    // 0x80269E2C: lh          $t0, 0x932($v0)
    ctx->r8 = MEM_H(ctx->r2, 0X932);
    // 0x80269E30: mtc1        $t9, $f4
    ctx->f4.u32l = ctx->r25;
    // 0x80269E34: mtc1        $t0, $f6
    ctx->f6.u32l = ctx->r8;
    // 0x80269E38: cvt.s.w     $f4, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    ctx->f4.fl = CVT_S_W(ctx->f4.u32l);
    // 0x80269E3C: or          $a0, $v1, $zero
    ctx->r4 = ctx->r3 | 0;
    // 0x80269E40: cvt.s.w     $f6, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    ctx->f6.fl = CVT_S_W(ctx->f6.u32l);
    // 0x80269E44: mfc1        $a1, $f4
    ctx->r5 = (int32_t)ctx->f4.u32l;
    // 0x80269E48: mfc1        $a2, $f6
    ctx->r6 = (int32_t)ctx->f6.u32l;
    // 0x80269E4C: jal         0x80013364
    // 0x80269E50: nop

    func_80013364(rdram, ctx);
        goto after_1;
    // 0x80269E50: nop

    after_1:
    // 0x80269E54: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x80269E58: lw          $a0, 0xB28($a0)
    ctx->r4 = MEM_W(ctx->r4, 0XB28);
    // 0x80269E5C: jal         0x8024BC08
    // 0x80269E60: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    ovl_8024B800_func_8024BC08(rdram, ctx);
        goto after_2;
    // 0x80269E60: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_2:
    // 0x80269E64: lui         $t1, 0x8012
    ctx->r9 = S32(0X8012 << 16);
    // 0x80269E68: lhu         $t1, 0xB70($t1)
    ctx->r9 = MEM_HU(ctx->r9, 0XB70);
    // 0x80269E6C: lui         $a1, 0x8028
    ctx->r5 = S32(0X8028 << 16);
    // 0x80269E70: sll         $t2, $t1, 2
    ctx->r10 = S32(ctx->r9 << 2);
    // 0x80269E74: addu        $a1, $a1, $t2
    ctx->r5 = ADD32(ctx->r5, ctx->r10);
    // 0x80269E78: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x80269E7C: lw          $a0, 0xB28($a0)
    ctx->r4 = MEM_W(ctx->r4, 0XB28);
    // 0x80269E80: lw          $a1, -0x3024($a1)
    ctx->r5 = MEM_W(ctx->r5, -0X3024);
    // 0x80269E84: jal         0x8026F2EC
    // 0x80269E88: nop

    ovl_8024B800_func_8026F2EC(rdram, ctx);
        goto after_3;
    // 0x80269E88: nop

    after_3:
    // 0x80269E8C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80269E90: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80269E94: jr          $ra
    // 0x80269E98: nop

    return;
    // 0x80269E98: nop

;}
RECOMP_FUNC void ovl_8024B800_func_80269E9C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80269E9C: lui         $t6, 0x8010
    ctx->r14 = S32(0X8010 << 16);
    // 0x80269EA0: lbu         $t6, 0x5232($t6)
    ctx->r14 = MEM_BU(ctx->r14, 0X5232);
    // 0x80269EA4: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80269EA8: addiu       $at, $zero, 0x5
    ctx->r1 = ADD32(0, 0X5);
    // 0x80269EAC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80269EB0: bne         $t6, $at, L_8026A358
    if (ctx->r14 != ctx->r1) {
        // 0x80269EB4: or          $a2, $a0, $zero
        ctx->r6 = ctx->r4 | 0;
            goto L_8026A358;
    }
    // 0x80269EB4: or          $a2, $a0, $zero
    ctx->r6 = ctx->r4 | 0;
    // 0x80269EB8: lui         $v1, 0x8012
    ctx->r3 = S32(0X8012 << 16);
    // 0x80269EBC: addiu       $v1, $v1, 0xB7E
    ctx->r3 = ADD32(ctx->r3, 0XB7E);
    // 0x80269EC0: lhu         $v0, 0x0($v1)
    ctx->r2 = MEM_HU(ctx->r3, 0X0);
    // 0x80269EC4: lui         $t0, 0x8012
    ctx->r8 = S32(0X8012 << 16);
    // 0x80269EC8: andi        $t7, $v0, 0x1000
    ctx->r15 = ctx->r2 & 0X1000;
    // 0x80269ECC: bne         $t7, $zero, L_8026A358
    if (ctx->r15 != 0) {
        // 0x80269ED0: addiu       $t0, $t0, 0xB30
        ctx->r8 = ADD32(ctx->r8, 0XB30);
            goto L_8026A358;
    }
    // 0x80269ED0: addiu       $t0, $t0, 0xB30
    ctx->r8 = ADD32(ctx->r8, 0XB30);
    // 0x80269ED4: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x80269ED8: sh          $zero, 0xB6C($at)
    MEM_H(0XB6C, ctx->r1) = 0;
    // 0x80269EDC: lw          $t9, 0x0($t0)
    ctx->r25 = MEM_W(ctx->r8, 0X0);
    // 0x80269EE0: andi        $t8, $v0, 0xFF3F
    ctx->r24 = ctx->r2 & 0XFF3F;
    // 0x80269EE4: sh          $t8, 0x0($v1)
    MEM_H(0X0, ctx->r3) = ctx->r24;
    // 0x80269EE8: lw          $t1, 0xD8($t9)
    ctx->r9 = MEM_W(ctx->r25, 0XD8);
    // 0x80269EEC: nop

    // 0x80269EF0: lbu         $a0, 0x1D($t1)
    ctx->r4 = MEM_BU(ctx->r9, 0X1D);
    // 0x80269EF4: nop

    // 0x80269EF8: andi        $t2, $a0, 0xE0
    ctx->r10 = ctx->r4 & 0XE0;
    // 0x80269EFC: sltiu       $at, $t2, 0x60
    ctx->r1 = ctx->r10 < 0X60 ? 1 : 0;
    // 0x80269F00: bne         $at, $zero, L_80269F50
    if (ctx->r1 != 0) {
        // 0x80269F04: or          $a0, $t2, $zero
        ctx->r4 = ctx->r10 | 0;
            goto L_80269F50;
    }
    // 0x80269F04: or          $a0, $t2, $zero
    ctx->r4 = ctx->r10 | 0;
    // 0x80269F08: lw          $v0, 0x24($a2)
    ctx->r2 = MEM_W(ctx->r6, 0X24);
    // 0x80269F0C: nop

    // 0x80269F10: lhu         $t3, 0x10($v0)
    ctx->r11 = MEM_HU(ctx->r2, 0X10);
    // 0x80269F14: nop

    // 0x80269F18: ori         $t4, $t3, 0x1040
    ctx->r12 = ctx->r11 | 0X1040;
    // 0x80269F1C: sh          $t4, 0x10($v0)
    MEM_H(0X10, ctx->r2) = ctx->r12;
    // 0x80269F20: lw          $t5, 0x0($t0)
    ctx->r13 = MEM_W(ctx->r8, 0X0);
    // 0x80269F24: nop

    // 0x80269F28: lhu         $t6, 0x1A($t5)
    ctx->r14 = MEM_HU(ctx->r13, 0X1A);
    // 0x80269F2C: nop

    // 0x80269F30: bne         $t6, $zero, L_80269F50
    if (ctx->r14 != 0) {
        // 0x80269F34: nop
    
            goto L_80269F50;
    }
    // 0x80269F34: nop

    // 0x80269F38: sw          $t2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r10;
    // 0x80269F3C: jal         0x800489A8
    // 0x80269F40: sw          $a2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r6;
    func_800489A8(rdram, ctx);
        goto after_0;
    // 0x80269F40: sw          $a2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r6;
    after_0:
    // 0x80269F44: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    // 0x80269F48: lw          $a2, 0x28($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X28);
    // 0x80269F4C: nop

L_80269F50:
    // 0x80269F50: lui         $a3, 0x8012
    ctx->r7 = S32(0X8012 << 16);
    // 0x80269F54: addiu       $a3, $a3, 0xB28
    ctx->r7 = ADD32(ctx->r7, 0XB28);
    // 0x80269F58: lw          $v0, 0x0($a3)
    ctx->r2 = MEM_W(ctx->r7, 0X0);
    // 0x80269F5C: nop

    // 0x80269F60: lhu         $t7, 0x14($v0)
    ctx->r15 = MEM_HU(ctx->r2, 0X14);
    // 0x80269F64: nop

    // 0x80269F68: andi        $t8, $t7, 0xEFFF
    ctx->r24 = ctx->r15 & 0XEFFF;
    // 0x80269F6C: sh          $t8, 0x14($v0)
    MEM_H(0X14, ctx->r2) = ctx->r24;
    // 0x80269F70: sw          $a2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r6;
    // 0x80269F74: jal         0x80269BB4
    // 0x80269F78: sw          $a0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r4;
    ovl_8024B800_func_80269BB4(rdram, ctx);
        goto after_1;
    // 0x80269F78: sw          $a0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r4;
    after_1:
    // 0x80269F7C: lui         $t9, 0x8009
    ctx->r25 = S32(0X8009 << 16);
    // 0x80269F80: lw          $t9, 0x3B20($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X3B20);
    // 0x80269F84: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    // 0x80269F88: lhu         $v0, 0xDC($t9)
    ctx->r2 = MEM_HU(ctx->r25, 0XDC);
    // 0x80269F8C: lw          $a2, 0x28($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X28);
    // 0x80269F90: lui         $a3, 0x8012
    ctx->r7 = S32(0X8012 << 16);
    // 0x80269F94: lui         $t0, 0x8012
    ctx->r8 = S32(0X8012 << 16);
    // 0x80269F98: andi        $t1, $v0, 0x2
    ctx->r9 = ctx->r2 & 0X2;
    // 0x80269F9C: addiu       $t0, $t0, 0xB30
    ctx->r8 = ADD32(ctx->r8, 0XB30);
    // 0x80269FA0: beq         $t1, $zero, L_80269FE8
    if (ctx->r9 == 0) {
        // 0x80269FA4: addiu       $a3, $a3, 0xB28
        ctx->r7 = ADD32(ctx->r7, 0XB28);
            goto L_80269FE8;
    }
    // 0x80269FA4: addiu       $a3, $a3, 0xB28
    ctx->r7 = ADD32(ctx->r7, 0XB28);
    // 0x80269FA8: lui         $t2, 0x8028
    ctx->r10 = S32(0X8028 << 16);
    // 0x80269FAC: lh          $t2, -0x1B60($t2)
    ctx->r10 = MEM_H(ctx->r10, -0X1B60);
    // 0x80269FB0: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x80269FB4: andi        $t3, $t2, 0x3
    ctx->r11 = ctx->r10 & 0X3;
    // 0x80269FB8: sh          $t3, 0xB70($at)
    MEM_H(0XB70, ctx->r1) = ctx->r11;
    // 0x80269FBC: lw          $a0, 0x0($a3)
    ctx->r4 = MEM_W(ctx->r7, 0X0);
    // 0x80269FC0: lui         $a1, 0x8028
    ctx->r5 = S32(0X8028 << 16);
    // 0x80269FC4: jal         0x8026F2EC
    // 0x80269FC8: addiu       $a1, $a1, -0x31BC
    ctx->r5 = ADD32(ctx->r5, -0X31BC);
    ovl_8024B800_func_8026F2EC(rdram, ctx);
        goto after_2;
    // 0x80269FC8: addiu       $a1, $a1, -0x31BC
    ctx->r5 = ADD32(ctx->r5, -0X31BC);
    after_2:
    // 0x80269FCC: lui         $v1, 0x8012
    ctx->r3 = S32(0X8012 << 16);
    // 0x80269FD0: addiu       $v1, $v1, 0xB7E
    ctx->r3 = ADD32(ctx->r3, 0XB7E);
    // 0x80269FD4: lhu         $t4, 0x0($v1)
    ctx->r12 = MEM_HU(ctx->r3, 0X0);
    // 0x80269FD8: nop

    // 0x80269FDC: ori         $t5, $t4, 0x8
    ctx->r13 = ctx->r12 | 0X8;
    // 0x80269FE0: b           L_8026A358
    // 0x80269FE4: sh          $t5, 0x0($v1)
    MEM_H(0X0, ctx->r3) = ctx->r13;
        goto L_8026A358;
    // 0x80269FE4: sh          $t5, 0x0($v1)
    MEM_H(0X0, ctx->r3) = ctx->r13;
L_80269FE8:
    // 0x80269FE8: andi        $t6, $v0, 0x4
    ctx->r14 = ctx->r2 & 0X4;
    // 0x80269FEC: beq         $t6, $zero, L_8026A048
    if (ctx->r14 == 0) {
        // 0x80269FF0: lui         $t7, 0x8028
        ctx->r15 = S32(0X8028 << 16);
            goto L_8026A048;
    }
    // 0x80269FF0: lui         $t7, 0x8028
    ctx->r15 = S32(0X8028 << 16);
    // 0x80269FF4: lh          $t7, -0x1B60($t7)
    ctx->r15 = MEM_H(ctx->r15, -0X1B60);
    // 0x80269FF8: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x80269FFC: andi        $t8, $t7, 0x1
    ctx->r24 = ctx->r15 & 0X1;
    // 0x8026A000: addiu       $t9, $t8, 0x4
    ctx->r25 = ADD32(ctx->r24, 0X4);
    // 0x8026A004: sh          $t9, 0xB70($at)
    MEM_H(0XB70, ctx->r1) = ctx->r25;
    // 0x8026A008: lw          $a0, 0x0($a3)
    ctx->r4 = MEM_W(ctx->r7, 0X0);
    // 0x8026A00C: lui         $a1, 0x8028
    ctx->r5 = S32(0X8028 << 16);
    // 0x8026A010: addiu       $a1, $a1, -0x31BC
    ctx->r5 = ADD32(ctx->r5, -0X31BC);
    // 0x8026A014: jal         0x8026F2EC
    // 0x8026A018: sw          $a2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r6;
    ovl_8024B800_func_8026F2EC(rdram, ctx);
        goto after_3;
    // 0x8026A018: sw          $a2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r6;
    after_3:
    // 0x8026A01C: lui         $v1, 0x8012
    ctx->r3 = S32(0X8012 << 16);
    // 0x8026A020: addiu       $v1, $v1, 0xB7E
    ctx->r3 = ADD32(ctx->r3, 0XB7E);
    // 0x8026A024: lhu         $t1, 0x0($v1)
    ctx->r9 = MEM_HU(ctx->r3, 0X0);
    // 0x8026A028: lw          $a2, 0x28($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X28);
    // 0x8026A02C: ori         $t2, $t1, 0x8
    ctx->r10 = ctx->r9 | 0X8;
    // 0x8026A030: sh          $t2, 0x0($v1)
    MEM_H(0X0, ctx->r3) = ctx->r10;
    // 0x8026A034: lhu         $t3, 0x10($a2)
    ctx->r11 = MEM_HU(ctx->r6, 0X10);
    // 0x8026A038: nop

    // 0x8026A03C: ori         $t4, $t3, 0x4040
    ctx->r12 = ctx->r11 | 0X4040;
    // 0x8026A040: b           L_8026A358
    // 0x8026A044: sh          $t4, 0x10($a2)
    MEM_H(0X10, ctx->r6) = ctx->r12;
        goto L_8026A358;
    // 0x8026A044: sh          $t4, 0x10($a2)
    MEM_H(0X10, ctx->r6) = ctx->r12;
L_8026A048:
    // 0x8026A048: lui         $t5, 0x8012
    ctx->r13 = S32(0X8012 << 16);
    // 0x8026A04C: lw          $t5, 0xB2C($t5)
    ctx->r13 = MEM_W(ctx->r13, 0XB2C);
    // 0x8026A050: lw          $v0, 0x0($t0)
    ctx->r2 = MEM_W(ctx->r8, 0X0);
    // 0x8026A054: nop

    // 0x8026A058: beq         $t5, $v0, L_8026A35C
    if (ctx->r13 == ctx->r2) {
        // 0x8026A05C: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_8026A35C;
    }
    // 0x8026A05C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8026A060: bne         $a0, $zero, L_8026A358
    if (ctx->r4 != 0) {
        // 0x8026A064: lui         $v1, 0x8028
        ctx->r3 = S32(0X8028 << 16);
            goto L_8026A358;
    }
    // 0x8026A064: lui         $v1, 0x8028
    ctx->r3 = S32(0X8028 << 16);
    // 0x8026A068: lui         $t6, 0x8012
    ctx->r14 = S32(0X8012 << 16);
    // 0x8026A06C: lh          $v1, -0x1B60($v1)
    ctx->r3 = MEM_H(ctx->r3, -0X1B60);
    // 0x8026A070: lhu         $t6, 0xB78($t6)
    ctx->r14 = MEM_HU(ctx->r14, 0XB78);
    // 0x8026A074: addiu       $at, $zero, 0x8
    ctx->r1 = ADD32(0, 0X8);
    // 0x8026A078: bne         $t6, $at, L_8026A084
    if (ctx->r14 != ctx->r1) {
        // 0x8026A07C: andi        $a0, $v1, 0x3
        ctx->r4 = ctx->r3 & 0X3;
            goto L_8026A084;
    }
    // 0x8026A07C: andi        $a0, $v1, 0x3
    ctx->r4 = ctx->r3 & 0X3;
    // 0x8026A080: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
L_8026A084:
    // 0x8026A084: sltiu       $at, $a0, 0x5
    ctx->r1 = ctx->r4 < 0X5 ? 1 : 0;
    // 0x8026A088: beq         $at, $zero, L_8026A358
    if (ctx->r1 == 0) {
        // 0x8026A08C: or          $a1, $a0, $zero
        ctx->r5 = ctx->r4 | 0;
            goto L_8026A358;
    }
    // 0x8026A08C: or          $a1, $a0, $zero
    ctx->r5 = ctx->r4 | 0;
    // 0x8026A090: sll         $t7, $a0, 2
    ctx->r15 = S32(ctx->r4 << 2);
    // 0x8026A094: lui         $at, 0x8028
    ctx->r1 = S32(0X8028 << 16);
    // 0x8026A098: addu        $at, $at, $t7
    gpr jr_addend_8026A0A4 = ctx->r15;
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x8026A09C: lw          $t7, -0x2B48($at)
    ctx->r15 = ADD32(ctx->r1, -0X2B48);
    // 0x8026A0A0: nop

    // 0x8026A0A4: jr          $t7
    // 0x8026A0A8: nop

    switch (jr_addend_8026A0A4 >> 2) {
        case 0: goto L_8026A0AC; break;
        case 1: goto L_8026A0E0; break;
        case 2: goto L_8026A29C; break;
        case 3: goto L_8026A29C; break;
        case 4: goto L_8026A2EC; break;
        default: switch_error(__func__, 0x8026A0A4, 0x8027D4B8);
    }
    // 0x8026A0A8: nop

L_8026A0AC:
    // 0x8026A0AC: andi        $t8, $v1, 0xFFFF
    ctx->r24 = ctx->r3 & 0XFFFF;
    // 0x8026A0B0: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x8026A0B4: div         $zero, $t8, $at
    lo = S32(S64(S32(ctx->r24)) / S64(S32(ctx->r1))); hi = S32(S64(S32(ctx->r24)) % S64(S32(ctx->r1)));
    // 0x8026A0B8: lui         $a1, 0x8028
    ctx->r5 = S32(0X8028 << 16);
    // 0x8026A0BC: lw          $a0, 0x0($a3)
    ctx->r4 = MEM_W(ctx->r7, 0X0);
    // 0x8026A0C0: mfhi        $t9
    ctx->r25 = hi;
    // 0x8026A0C4: sll         $t1, $t9, 2
    ctx->r9 = S32(ctx->r25 << 2);
    // 0x8026A0C8: addu        $a1, $a1, $t1
    ctx->r5 = ADD32(ctx->r5, ctx->r9);
    // 0x8026A0CC: lw          $a1, -0x300C($a1)
    ctx->r5 = MEM_W(ctx->r5, -0X300C);
    // 0x8026A0D0: jal         0x8026F2EC
    // 0x8026A0D4: nop

    ovl_8024B800_func_8026F2EC(rdram, ctx);
        goto after_4;
    // 0x8026A0D4: nop

    after_4:
    // 0x8026A0D8: b           L_8026A35C
    // 0x8026A0DC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_8026A35C;
    // 0x8026A0DC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8026A0E0:
    // 0x8026A0E0: lw          $a0, 0x0($a3)
    ctx->r4 = MEM_W(ctx->r7, 0X0);
    // 0x8026A0E4: lui         $a1, 0x8028
    ctx->r5 = S32(0X8028 << 16);
    // 0x8026A0E8: addiu       $a1, $a1, -0x31C8
    ctx->r5 = ADD32(ctx->r5, -0X31C8);
    // 0x8026A0EC: jal         0x8026F2EC
    // 0x8026A0F0: sw          $a2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r6;
    ovl_8024B800_func_8026F2EC(rdram, ctx);
        goto after_5;
    // 0x8026A0F0: sw          $a2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r6;
    after_5:
    // 0x8026A0F4: lui         $t0, 0x8012
    ctx->r8 = S32(0X8012 << 16);
    // 0x8026A0F8: addiu       $t0, $t0, 0xB30
    ctx->r8 = ADD32(ctx->r8, 0XB30);
    // 0x8026A0FC: lw          $a0, 0x0($t0)
    ctx->r4 = MEM_W(ctx->r8, 0X0);
    // 0x8026A100: lui         $a1, 0x8028
    ctx->r5 = S32(0X8028 << 16);
    // 0x8026A104: jal         0x8026F2EC
    // 0x8026A108: addiu       $a1, $a1, -0x31D4
    ctx->r5 = ADD32(ctx->r5, -0X31D4);
    ovl_8024B800_func_8026F2EC(rdram, ctx);
        goto after_6;
    // 0x8026A108: addiu       $a1, $a1, -0x31D4
    ctx->r5 = ADD32(ctx->r5, -0X31D4);
    after_6:
    // 0x8026A10C: addiu       $t2, $zero, 0xA
    ctx->r10 = ADD32(0, 0XA);
    // 0x8026A110: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x8026A114: cfc1        $t4, $FpcCsr
    ctx->r12 = get_cop1_cs();
    // 0x8026A118: lui         $a3, 0x8012
    ctx->r7 = S32(0X8012 << 16);
    // 0x8026A11C: sh          $t2, 0xB6C($at)
    MEM_H(0XB6C, ctx->r1) = ctx->r10;
    // 0x8026A120: addiu       $a3, $a3, 0xB28
    ctx->r7 = ADD32(ctx->r7, 0XB28);
    // 0x8026A124: lw          $t3, 0x0($a3)
    ctx->r11 = MEM_W(ctx->r7, 0X0);
    // 0x8026A128: ori         $at, $t4, 0x3
    ctx->r1 = ctx->r12 | 0X3;
    // 0x8026A12C: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x8026A130: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x8026A134: lwc1        $f4, 0x4C($t3)
    ctx->f4.u32l = MEM_W(ctx->r11, 0X4C);
    // 0x8026A138: lw          $a2, 0x28($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X28);
    // 0x8026A13C: cvt.w.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = CVT_W_S(ctx->f4.fl);
    // 0x8026A140: ctc1        $t4, $FpcCsr
    set_cop1_cs(ctx->r12);
    // 0x8026A144: mfc1        $t5, $f6
    ctx->r13 = (int32_t)ctx->f6.u32l;
    // 0x8026A148: nop

    // 0x8026A14C: cfc1        $t7, $FpcCsr
    ctx->r15 = get_cop1_cs();
    // 0x8026A150: sh          $t5, 0x932($a2)
    MEM_H(0X932, ctx->r6) = ctx->r13;
    // 0x8026A154: lw          $t6, 0x0($a3)
    ctx->r14 = MEM_W(ctx->r7, 0X0);
    // 0x8026A158: ori         $at, $t7, 0x3
    ctx->r1 = ctx->r15 | 0X3;
    // 0x8026A15C: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x8026A160: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x8026A164: lwc1        $f8, 0x44($t6)
    ctx->f8.u32l = MEM_W(ctx->r14, 0X44);
    // 0x8026A168: nop

    // 0x8026A16C: cvt.w.s     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.u32l = CVT_W_S(ctx->f8.fl);
    // 0x8026A170: mfc1        $t8, $f10
    ctx->r24 = (int32_t)ctx->f10.u32l;
    // 0x8026A174: ctc1        $t7, $FpcCsr
    set_cop1_cs(ctx->r15);
    // 0x8026A178: sh          $t8, 0x934($a2)
    MEM_H(0X934, ctx->r6) = ctx->r24;
    // 0x8026A17C: lw          $t9, 0x0($a3)
    ctx->r25 = MEM_W(ctx->r7, 0X0);
    // 0x8026A180: nop

    // 0x8026A184: lwc1        $f12, 0x4C($t9)
    ctx->f12.u32l = MEM_W(ctx->r25, 0X4C);
    // 0x8026A188: jal         0x80272AEC
    // 0x8026A18C: nop

    ovl_8024B800_func_80272AEC(rdram, ctx);
        goto after_7;
    // 0x8026A18C: nop

    after_7:
    // 0x8026A190: lui         $at, 0x43AC
    ctx->r1 = S32(0X43AC << 16);
    // 0x8026A194: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x8026A198: lw          $a2, 0x28($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X28);
    // 0x8026A19C: c.lt.s      $f0, $f16
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f0.fl < ctx->f16.fl;
    // 0x8026A1A0: lui         $at, 0x8028
    ctx->r1 = S32(0X8028 << 16);
    // 0x8026A1A4: bc1f        L_8026A1DC
    if (!c1cs) {
        // 0x8026A1A8: nop
    
            goto L_8026A1DC;
    }
    // 0x8026A1A8: nop

    // 0x8026A1AC: lhu         $t1, 0x8($a2)
    ctx->r9 = MEM_HU(ctx->r6, 0X8);
    // 0x8026A1B0: addiu       $a1, $zero, 0x1E
    ctx->r5 = ADD32(0, 0X1E);
    // 0x8026A1B4: andi        $t2, $t1, 0x1
    ctx->r10 = ctx->r9 & 0X1;
    // 0x8026A1B8: beq         $t2, $zero, L_8026A1C8
    if (ctx->r10 == 0) {
        // 0x8026A1BC: nop
    
            goto L_8026A1C8;
    }
    // 0x8026A1BC: nop

    // 0x8026A1C0: b           L_8026A1C8
    // 0x8026A1C4: addiu       $a1, $zero, -0x1E
    ctx->r5 = ADD32(0, -0X1E);
        goto L_8026A1C8;
    // 0x8026A1C4: addiu       $a1, $zero, -0x1E
    ctx->r5 = ADD32(0, -0X1E);
L_8026A1C8:
    // 0x8026A1C8: lh          $t3, 0x932($a2)
    ctx->r11 = MEM_H(ctx->r6, 0X932);
    // 0x8026A1CC: nop

    // 0x8026A1D0: addu        $t4, $t3, $a1
    ctx->r12 = ADD32(ctx->r11, ctx->r5);
    // 0x8026A1D4: b           L_8026A358
    // 0x8026A1D8: sh          $t4, 0x932($a2)
    MEM_H(0X932, ctx->r6) = ctx->r12;
        goto L_8026A358;
    // 0x8026A1D8: sh          $t4, 0x932($a2)
    MEM_H(0X932, ctx->r6) = ctx->r12;
L_8026A1DC:
    // 0x8026A1DC: lwc1        $f18, 0x8C0($a2)
    ctx->f18.u32l = MEM_W(ctx->r6, 0X8C0);
    // 0x8026A1E0: lwc1        $f7, -0x2B30($at)
    ctx->f_odd[(7 - 1) * 2] = MEM_W(ctx->r1, -0X2B30);
    // 0x8026A1E4: lwc1        $f6, -0x2B2C($at)
    ctx->f6.u32l = MEM_W(ctx->r1, -0X2B2C);
    // 0x8026A1E8: cvt.d.s     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.fl); 
    ctx->f4.d = CVT_D_S(ctx->f18.fl);
    // 0x8026A1EC: add.d       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f6.d); 
    ctx->f8.d = ctx->f4.d + ctx->f6.d;
    // 0x8026A1F0: sw          $a2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r6;
    // 0x8026A1F4: cvt.s.d     $f12, $f8
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.d); 
    ctx->f12.fl = CVT_S_D(ctx->f8.d);
    // 0x8026A1F8: jal         0x80081040
    // 0x8026A1FC: swc1        $f12, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f12.u32l;
    func_80081040(rdram, ctx);
        goto after_8;
    // 0x8026A1FC: swc1        $f12, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f12.u32l;
    after_8:
    // 0x8026A200: lw          $a2, 0x28($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X28);
    // 0x8026A204: lui         $at, 0x41F0
    ctx->r1 = S32(0X41F0 << 16);
    // 0x8026A208: lh          $t5, 0x932($a2)
    ctx->r13 = MEM_H(ctx->r6, 0X932);
    // 0x8026A20C: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x8026A210: mtc1        $t5, $f10
    ctx->f10.u32l = ctx->r13;
    // 0x8026A214: mul.s       $f4, $f18, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = MUL_S(ctx->f18.fl, ctx->f0.fl);
    // 0x8026A218: lwc1        $f12, 0x24($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X24);
    // 0x8026A21C: cvt.s.w     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.fl = CVT_S_W(ctx->f10.u32l);
    // 0x8026A220: add.s       $f6, $f16, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f16.fl + ctx->f4.fl;
    // 0x8026A224: cfc1        $t6, $FpcCsr
    ctx->r14 = get_cop1_cs();
    // 0x8026A228: nop

    // 0x8026A22C: ori         $at, $t6, 0x3
    ctx->r1 = ctx->r14 | 0X3;
    // 0x8026A230: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x8026A234: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x8026A238: nop

    // 0x8026A23C: cvt.w.s     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.u32l = CVT_W_S(ctx->f6.fl);
    // 0x8026A240: mfc1        $t7, $f8
    ctx->r15 = (int32_t)ctx->f8.u32l;
    // 0x8026A244: ctc1        $t6, $FpcCsr
    set_cop1_cs(ctx->r14);
    // 0x8026A248: jal         0x80080E80
    // 0x8026A24C: sh          $t7, 0x932($a2)
    MEM_H(0X932, ctx->r6) = ctx->r15;
    func_80080E80(rdram, ctx);
        goto after_9;
    // 0x8026A24C: sh          $t7, 0x932($a2)
    MEM_H(0X932, ctx->r6) = ctx->r15;
    after_9:
    // 0x8026A250: lw          $a2, 0x28($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X28);
    // 0x8026A254: lui         $at, 0x41F0
    ctx->r1 = S32(0X41F0 << 16);
    // 0x8026A258: lh          $t8, 0x934($a2)
    ctx->r24 = MEM_H(ctx->r6, 0X934);
    // 0x8026A25C: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x8026A260: mtc1        $t8, $f10
    ctx->f10.u32l = ctx->r24;
    // 0x8026A264: mul.s       $f4, $f16, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = MUL_S(ctx->f16.fl, ctx->f0.fl);
    // 0x8026A268: cvt.s.w     $f18, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    ctx->f18.fl = CVT_S_W(ctx->f10.u32l);
    // 0x8026A26C: add.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f18.fl + ctx->f4.fl;
    // 0x8026A270: cfc1        $t9, $FpcCsr
    ctx->r25 = get_cop1_cs();
    // 0x8026A274: nop

    // 0x8026A278: ori         $at, $t9, 0x3
    ctx->r1 = ctx->r25 | 0X3;
    // 0x8026A27C: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x8026A280: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x8026A284: nop

    // 0x8026A288: cvt.w.s     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.u32l = CVT_W_S(ctx->f6.fl);
    // 0x8026A28C: mfc1        $t1, $f8
    ctx->r9 = (int32_t)ctx->f8.u32l;
    // 0x8026A290: ctc1        $t9, $FpcCsr
    set_cop1_cs(ctx->r25);
    // 0x8026A294: b           L_8026A358
    // 0x8026A298: sh          $t1, 0x934($a2)
    MEM_H(0X934, ctx->r6) = ctx->r9;
        goto L_8026A358;
    // 0x8026A298: sh          $t1, 0x934($a2)
    MEM_H(0X934, ctx->r6) = ctx->r9;
L_8026A29C:
    // 0x8026A29C: lh          $v1, 0xE4($v0)
    ctx->r3 = MEM_H(ctx->r2, 0XE4);
    // 0x8026A2A0: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x8026A2A4: beq         $v1, $at, L_8026A2B0
    if (ctx->r3 == ctx->r1) {
        // 0x8026A2A8: addiu       $at, $zero, 0x4
        ctx->r1 = ADD32(0, 0X4);
            goto L_8026A2B0;
    }
    // 0x8026A2A8: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x8026A2AC: bne         $v1, $at, L_8026A358
    if (ctx->r3 != ctx->r1) {
        // 0x8026A2B0: addiu       $at, $zero, 0x2
        ctx->r1 = ADD32(0, 0X2);
            goto L_8026A358;
    }
L_8026A2B0:
    // 0x8026A2B0: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x8026A2B4: bne         $a1, $at, L_8026A2CC
    if (ctx->r5 != ctx->r1) {
        // 0x8026A2B8: addiu       $t3, $zero, 0x9
        ctx->r11 = ADD32(0, 0X9);
            goto L_8026A2CC;
    }
    // 0x8026A2B8: addiu       $t3, $zero, 0x9
    ctx->r11 = ADD32(0, 0X9);
    // 0x8026A2BC: addiu       $t2, $zero, 0x8
    ctx->r10 = ADD32(0, 0X8);
    // 0x8026A2C0: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x8026A2C4: b           L_8026A2D4
    // 0x8026A2C8: sh          $t2, 0xB6C($at)
    MEM_H(0XB6C, ctx->r1) = ctx->r10;
        goto L_8026A2D4;
    // 0x8026A2C8: sh          $t2, 0xB6C($at)
    MEM_H(0XB6C, ctx->r1) = ctx->r10;
L_8026A2CC:
    // 0x8026A2CC: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x8026A2D0: sh          $t3, 0xB6C($at)
    MEM_H(0XB6C, ctx->r1) = ctx->r11;
L_8026A2D4:
    // 0x8026A2D4: lw          $a0, 0x0($a3)
    ctx->r4 = MEM_W(ctx->r7, 0X0);
    // 0x8026A2D8: lui         $a1, 0x8028
    ctx->r5 = S32(0X8028 << 16);
    // 0x8026A2DC: jal         0x8026F2EC
    // 0x8026A2E0: addiu       $a1, $a1, -0x31BC
    ctx->r5 = ADD32(ctx->r5, -0X31BC);
    ovl_8024B800_func_8026F2EC(rdram, ctx);
        goto after_10;
    // 0x8026A2E0: addiu       $a1, $a1, -0x31BC
    ctx->r5 = ADD32(ctx->r5, -0X31BC);
    after_10:
    // 0x8026A2E4: b           L_8026A35C
    // 0x8026A2E8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_8026A35C;
    // 0x8026A2E8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8026A2EC:
    // 0x8026A2EC: lui         $at, 0x8028
    ctx->r1 = S32(0X8028 << 16);
    // 0x8026A2F0: lwc1        $f10, 0x8C($v0)
    ctx->f10.u32l = MEM_W(ctx->r2, 0X8C);
    // 0x8026A2F4: lwc1        $f19, -0x2B28($at)
    ctx->f_odd[(19 - 1) * 2] = MEM_W(ctx->r1, -0X2B28);
    // 0x8026A2F8: lwc1        $f18, -0x2B24($at)
    ctx->f18.u32l = MEM_W(ctx->r1, -0X2B24);
    // 0x8026A2FC: cvt.d.s     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.fl); 
    ctx->f16.d = CVT_D_S(ctx->f10.fl);
    // 0x8026A300: add.d       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.d); NAN_CHECK(ctx->f18.d); 
    ctx->f4.d = ctx->f16.d + ctx->f18.d;
    // 0x8026A304: lui         $a1, 0x8028
    ctx->r5 = S32(0X8028 << 16);
    // 0x8026A308: cvt.s.d     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.d); 
    ctx->f6.fl = CVT_S_D(ctx->f4.d);
    // 0x8026A30C: addiu       $a1, $a1, -0x31A4
    ctx->r5 = ADD32(ctx->r5, -0X31A4);
    // 0x8026A310: swc1        $f6, 0xBC($v0)
    MEM_W(0XBC, ctx->r2) = ctx->f6.u32l;
    // 0x8026A314: lw          $a0, 0x0($t0)
    ctx->r4 = MEM_W(ctx->r8, 0X0);
    // 0x8026A318: jal         0x8026F2EC
    // 0x8026A31C: nop

    ovl_8024B800_func_8026F2EC(rdram, ctx);
        goto after_11;
    // 0x8026A31C: nop

    after_11:
    // 0x8026A320: lui         $t4, 0x8028
    ctx->r12 = S32(0X8028 << 16);
    // 0x8026A324: lh          $t4, -0x1B60($t4)
    ctx->r12 = MEM_H(ctx->r12, -0X1B60);
    // 0x8026A328: lui         $a3, 0x8012
    ctx->r7 = S32(0X8012 << 16);
    // 0x8026A32C: andi        $t5, $t4, 0x1
    ctx->r13 = ctx->r12 & 0X1;
    // 0x8026A330: beq         $t5, $zero, L_8026A344
    if (ctx->r13 == 0) {
        // 0x8026A334: addiu       $a3, $a3, 0xB28
        ctx->r7 = ADD32(ctx->r7, 0XB28);
            goto L_8026A344;
    }
    // 0x8026A334: addiu       $a3, $a3, 0xB28
    ctx->r7 = ADD32(ctx->r7, 0XB28);
    // 0x8026A338: lui         $a1, 0x8028
    ctx->r5 = S32(0X8028 << 16);
    // 0x8026A33C: b           L_8026A34C
    // 0x8026A340: addiu       $a1, $a1, -0x3198
    ctx->r5 = ADD32(ctx->r5, -0X3198);
        goto L_8026A34C;
    // 0x8026A340: addiu       $a1, $a1, -0x3198
    ctx->r5 = ADD32(ctx->r5, -0X3198);
L_8026A344:
    // 0x8026A344: lui         $a1, 0x8028
    ctx->r5 = S32(0X8028 << 16);
    // 0x8026A348: addiu       $a1, $a1, -0x3190
    ctx->r5 = ADD32(ctx->r5, -0X3190);
L_8026A34C:
    // 0x8026A34C: lw          $a0, 0x0($a3)
    ctx->r4 = MEM_W(ctx->r7, 0X0);
    // 0x8026A350: jal         0x8026F2EC
    // 0x8026A354: nop

    ovl_8024B800_func_8026F2EC(rdram, ctx);
        goto after_12;
    // 0x8026A354: nop

    after_12:
L_8026A358:
    // 0x8026A358: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8026A35C:
    // 0x8026A35C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x8026A360: jr          $ra
    // 0x8026A364: nop

    return;
    // 0x8026A364: nop

;}
RECOMP_FUNC void ovl_8024B800_func_8026A368(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8026A368: lui         $t6, 0x8012
    ctx->r14 = S32(0X8012 << 16);
    // 0x8026A36C: lhu         $t6, 0xB7A($t6)
    ctx->r14 = MEM_HU(ctx->r14, 0XB7A);
    // 0x8026A370: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8026A374: addiu       $t7, $t6, -0x2
    ctx->r15 = ADD32(ctx->r14, -0X2);
    // 0x8026A378: sltiu       $at, $t7, 0xB
    ctx->r1 = ctx->r15 < 0XB ? 1 : 0;
    // 0x8026A37C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8026A380: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x8026A384: beq         $at, $zero, L_8026A568
    if (ctx->r1 == 0) {
        // 0x8026A388: sw          $zero, 0x1C($sp)
        MEM_W(0X1C, ctx->r29) = 0;
            goto L_8026A568;
    }
    // 0x8026A388: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x8026A38C: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8026A390: lui         $at, 0x8028
    ctx->r1 = S32(0X8028 << 16);
    // 0x8026A394: addu        $at, $at, $t7
    gpr jr_addend_8026A3A0 = ctx->r15;
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x8026A398: lw          $t7, -0x2B20($at)
    ctx->r15 = ADD32(ctx->r1, -0X2B20);
    // 0x8026A39C: nop

    // 0x8026A3A0: jr          $t7
    // 0x8026A3A4: nop

    switch (jr_addend_8026A3A0 >> 2) {
        case 0: goto L_8026A568; break;
        case 1: goto L_8026A568; break;
        case 2: goto L_8026A568; break;
        case 3: goto L_8026A508; break;
        case 4: goto L_8026A454; break;
        case 5: goto L_8026A3A8; break;
        case 6: goto L_8026A508; break;
        case 7: goto L_8026A514; break;
        case 8: goto L_8026A548; break;
        case 9: goto L_8026A548; break;
        case 10: goto L_8026A55C; break;
        default: switch_error(__func__, 0x8026A3A0, 0x8027D4E0);
    }
    // 0x8026A3A4: nop

L_8026A3A8:
    // 0x8026A3A8: lui         $t8, 0x8010
    ctx->r24 = S32(0X8010 << 16);
    // 0x8026A3AC: lbu         $t8, 0x5232($t8)
    ctx->r24 = MEM_BU(ctx->r24, 0X5232);
    // 0x8026A3B0: addiu       $at, $zero, 0x5
    ctx->r1 = ADD32(0, 0X5);
    // 0x8026A3B4: bne         $t8, $at, L_8026A568
    if (ctx->r24 != ctx->r1) {
        // 0x8026A3B8: lui         $t9, 0x8012
        ctx->r25 = S32(0X8012 << 16);
            goto L_8026A568;
    }
    // 0x8026A3B8: lui         $t9, 0x8012
    ctx->r25 = S32(0X8012 << 16);
    // 0x8026A3BC: lhu         $t9, 0xB7E($t9)
    ctx->r25 = MEM_HU(ctx->r25, 0XB7E);
    // 0x8026A3C0: lui         $v1, 0x8012
    ctx->r3 = S32(0X8012 << 16);
    // 0x8026A3C4: andi        $t0, $t9, 0x1000
    ctx->r8 = ctx->r25 & 0X1000;
    // 0x8026A3C8: bne         $t0, $zero, L_8026A568
    if (ctx->r8 != 0) {
        // 0x8026A3CC: addiu       $v1, $v1, 0xB28
        ctx->r3 = ADD32(ctx->r3, 0XB28);
            goto L_8026A568;
    }
    // 0x8026A3CC: addiu       $v1, $v1, 0xB28
    ctx->r3 = ADD32(ctx->r3, 0XB28);
    // 0x8026A3D0: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x8026A3D4: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x8026A3D8: lwc1        $f6, 0x4C($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0X4C);
    // 0x8026A3DC: lui         $at, 0x8028
    ctx->r1 = S32(0X8028 << 16);
    // 0x8026A3E0: c.lt.s      $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f4.fl < ctx->f6.fl;
    // 0x8026A3E4: lui         $t1, 0x8028
    ctx->r9 = S32(0X8028 << 16);
    // 0x8026A3E8: bc1f        L_8026A40C
    if (!c1cs) {
        // 0x8026A3EC: lui         $a1, 0x8028
        ctx->r5 = S32(0X8028 << 16);
            goto L_8026A40C;
    }
    // 0x8026A3EC: lui         $a1, 0x8028
    ctx->r5 = S32(0X8028 << 16);
    // 0x8026A3F0: lui         $at, 0x8028
    ctx->r1 = S32(0X8028 << 16);
    // 0x8026A3F4: lwc1        $f9, -0x2AF0($at)
    ctx->f_odd[(9 - 1) * 2] = MEM_W(ctx->r1, -0X2AF0);
    // 0x8026A3F8: lwc1        $f8, -0x2AEC($at)
    ctx->f8.u32l = MEM_W(ctx->r1, -0X2AEC);
    // 0x8026A3FC: nop

    // 0x8026A400: cvt.s.d     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.d); 
    ctx->f10.fl = CVT_S_D(ctx->f8.d);
    // 0x8026A404: b           L_8026A420
    // 0x8026A408: swc1        $f10, 0xBC($v0)
    MEM_W(0XBC, ctx->r2) = ctx->f10.u32l;
        goto L_8026A420;
    // 0x8026A408: swc1        $f10, 0xBC($v0)
    MEM_W(0XBC, ctx->r2) = ctx->f10.u32l;
L_8026A40C:
    // 0x8026A40C: lwc1        $f17, -0x2AE8($at)
    ctx->f_odd[(17 - 1) * 2] = MEM_W(ctx->r1, -0X2AE8);
    // 0x8026A410: lwc1        $f16, -0x2AE4($at)
    ctx->f16.u32l = MEM_W(ctx->r1, -0X2AE4);
    // 0x8026A414: nop

    // 0x8026A418: cvt.s.d     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.d); 
    ctx->f18.fl = CVT_S_D(ctx->f16.d);
    // 0x8026A41C: swc1        $f18, 0xBC($v0)
    MEM_W(0XBC, ctx->r2) = ctx->f18.u32l;
L_8026A420:
    // 0x8026A420: lh          $t1, -0x1B60($t1)
    ctx->r9 = MEM_H(ctx->r9, -0X1B60);
    // 0x8026A424: addiu       $a1, $a1, -0x3174
    ctx->r5 = ADD32(ctx->r5, -0X3174);
    // 0x8026A428: andi        $t2, $t1, 0x1
    ctx->r10 = ctx->r9 & 0X1;
    // 0x8026A42C: beq         $t2, $zero, L_8026A440
    if (ctx->r10 == 0) {
        // 0x8026A430: nop
    
            goto L_8026A440;
    }
    // 0x8026A430: nop

    // 0x8026A434: lui         $a1, 0x8028
    ctx->r5 = S32(0X8028 << 16);
    // 0x8026A438: b           L_8026A440
    // 0x8026A43C: addiu       $a1, $a1, -0x3184
    ctx->r5 = ADD32(ctx->r5, -0X3184);
        goto L_8026A440;
    // 0x8026A43C: addiu       $a1, $a1, -0x3184
    ctx->r5 = ADD32(ctx->r5, -0X3184);
L_8026A440:
    // 0x8026A440: lw          $a0, 0x0($v1)
    ctx->r4 = MEM_W(ctx->r3, 0X0);
    // 0x8026A444: jal         0x8026F2EC
    // 0x8026A448: nop

    ovl_8024B800_func_8026F2EC(rdram, ctx);
        goto after_0;
    // 0x8026A448: nop

    after_0:
    // 0x8026A44C: b           L_8026A56C
    // 0x8026A450: lw          $t3, 0x20($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X20);
        goto L_8026A56C;
    // 0x8026A450: lw          $t3, 0x20($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X20);
L_8026A454:
    // 0x8026A454: lui         $t3, 0x8010
    ctx->r11 = S32(0X8010 << 16);
    // 0x8026A458: lbu         $t3, 0x5232($t3)
    ctx->r11 = MEM_BU(ctx->r11, 0X5232);
    // 0x8026A45C: addiu       $at, $zero, 0x5
    ctx->r1 = ADD32(0, 0X5);
    // 0x8026A460: bne         $t3, $at, L_8026A508
    if (ctx->r11 != ctx->r1) {
        // 0x8026A464: lui         $t4, 0x8012
        ctx->r12 = S32(0X8012 << 16);
            goto L_8026A508;
    }
    // 0x8026A464: lui         $t4, 0x8012
    ctx->r12 = S32(0X8012 << 16);
    // 0x8026A468: lhu         $t4, 0xB7E($t4)
    ctx->r12 = MEM_HU(ctx->r12, 0XB7E);
    // 0x8026A46C: lui         $t6, 0x8009
    ctx->r14 = S32(0X8009 << 16);
    // 0x8026A470: andi        $t5, $t4, 0x1000
    ctx->r13 = ctx->r12 & 0X1000;
    // 0x8026A474: bne         $t5, $zero, L_8026A508
    if (ctx->r13 != 0) {
        // 0x8026A478: nop
    
            goto L_8026A508;
    }
    // 0x8026A478: nop

    // 0x8026A47C: lw          $t6, 0x3B20($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X3B20);
    // 0x8026A480: nop

    // 0x8026A484: lh          $t7, 0xE8($t6)
    ctx->r15 = MEM_H(ctx->r14, 0XE8);
    // 0x8026A488: nop

    // 0x8026A48C: mtc1        $t7, $f4
    ctx->f4.u32l = ctx->r15;
    // 0x8026A490: jal         0x80272AEC
    // 0x8026A494: cvt.s.w     $f12, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    ctx->f12.fl = CVT_S_W(ctx->f4.u32l);
    ovl_8024B800_func_80272AEC(rdram, ctx);
        goto after_1;
    // 0x8026A494: cvt.s.w     $f12, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    ctx->f12.fl = CVT_S_W(ctx->f4.u32l);
    after_1:
    // 0x8026A498: lui         $at, 0x43AC
    ctx->r1 = S32(0X43AC << 16);
    // 0x8026A49C: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x8026A4A0: lw          $t8, 0x20($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X20);
    // 0x8026A4A4: c.lt.s      $f0, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f0.fl < ctx->f6.fl;
    // 0x8026A4A8: lui         $a1, 0x8028
    ctx->r5 = S32(0X8028 << 16);
    // 0x8026A4AC: bc1f        L_8026A508
    if (!c1cs) {
        // 0x8026A4B0: nop
    
            goto L_8026A508;
    }
    // 0x8026A4B0: nop

    // 0x8026A4B4: lw          $a0, 0x18($t8)
    ctx->r4 = MEM_W(ctx->r24, 0X18);
    // 0x8026A4B8: jal         0x8026F2EC
    // 0x8026A4BC: addiu       $a1, $a1, -0x31B0
    ctx->r5 = ADD32(ctx->r5, -0X31B0);
    ovl_8024B800_func_8026F2EC(rdram, ctx);
        goto after_2;
    // 0x8026A4BC: addiu       $a1, $a1, -0x31B0
    ctx->r5 = ADD32(ctx->r5, -0X31B0);
    after_2:
    // 0x8026A4C0: lw          $t9, 0x20($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X20);
    // 0x8026A4C4: lui         $t2, 0x8009
    ctx->r10 = S32(0X8009 << 16);
    // 0x8026A4C8: lh          $t0, 0x8B8($t9)
    ctx->r8 = MEM_H(ctx->r25, 0X8B8);
    // 0x8026A4CC: lw          $t1, 0x18($t9)
    ctx->r9 = MEM_W(ctx->r25, 0X18);
    // 0x8026A4D0: addiu       $t4, $zero, 0x1E
    ctx->r12 = ADD32(0, 0X1E);
    // 0x8026A4D4: sh          $t0, 0x2E($t1)
    MEM_H(0X2E, ctx->r9) = ctx->r8;
    // 0x8026A4D8: lw          $t2, 0x3B20($t2)
    ctx->r10 = MEM_W(ctx->r10, 0X3B20);
    // 0x8026A4DC: lw          $t7, 0x20($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X20);
    // 0x8026A4E0: lh          $t3, 0xEA($t2)
    ctx->r11 = MEM_H(ctx->r10, 0XEA);
    // 0x8026A4E4: nop

    // 0x8026A4E8: blez        $t3, L_8026A4FC
    if (SIGNED(ctx->r11) <= 0) {
        // 0x8026A4EC: nop
    
            goto L_8026A4FC;
    }
    // 0x8026A4EC: nop

    // 0x8026A4F0: lw          $t5, 0x18($t9)
    ctx->r13 = MEM_W(ctx->r25, 0X18);
    // 0x8026A4F4: b           L_8026A508
    // 0x8026A4F8: sh          $t4, 0x30($t5)
    MEM_H(0X30, ctx->r13) = ctx->r12;
        goto L_8026A508;
    // 0x8026A4F8: sh          $t4, 0x30($t5)
    MEM_H(0X30, ctx->r13) = ctx->r12;
L_8026A4FC:
    // 0x8026A4FC: lw          $t8, 0x18($t7)
    ctx->r24 = MEM_W(ctx->r15, 0X18);
    // 0x8026A500: addiu       $t6, $zero, -0x1E
    ctx->r14 = ADD32(0, -0X1E);
    // 0x8026A504: sh          $t6, 0x30($t8)
    MEM_H(0X30, ctx->r24) = ctx->r14;
L_8026A508:
    // 0x8026A508: lui         $at, 0x8028
    ctx->r1 = S32(0X8028 << 16);
    // 0x8026A50C: b           L_8026A568
    // 0x8026A510: sh          $zero, -0x1B3A($at)
    MEM_H(-0X1B3A, ctx->r1) = 0;
        goto L_8026A568;
    // 0x8026A510: sh          $zero, -0x1B3A($at)
    MEM_H(-0X1B3A, ctx->r1) = 0;
L_8026A514:
    // 0x8026A514: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x8026A518: jal         0x8026995C
    // 0x8026A51C: nop

    ovl_8024B800_func_8026995C(rdram, ctx);
        goto after_3;
    // 0x8026A51C: nop

    after_3:
    // 0x8026A520: lui         $t0, 0x8012
    ctx->r8 = S32(0X8012 << 16);
    // 0x8026A524: lbu         $t0, 0xB65($t0)
    ctx->r8 = MEM_BU(ctx->r8, 0XB65);
    // 0x8026A528: lui         $t1, 0x8012
    ctx->r9 = S32(0X8012 << 16);
    // 0x8026A52C: beq         $t0, $zero, L_8026A568
    if (ctx->r8 == 0) {
        // 0x8026A530: lui         $t2, 0x8028
        ctx->r10 = S32(0X8028 << 16);
            goto L_8026A568;
    }
    // 0x8026A530: lui         $t2, 0x8028
    ctx->r10 = S32(0X8028 << 16);
    // 0x8026A534: lw          $t1, 0xB24($t1)
    ctx->r9 = MEM_W(ctx->r9, 0XB24);
    // 0x8026A538: addiu       $t2, $t2, -0x3354
    ctx->r10 = ADD32(ctx->r10, -0X3354);
    // 0x8026A53C: sw          $t1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r9;
    // 0x8026A540: b           L_8026A568
    // 0x8026A544: sw          $t2, 0x28($t1)
    MEM_W(0X28, ctx->r9) = ctx->r10;
        goto L_8026A568;
    // 0x8026A544: sw          $t2, 0x28($t1)
    MEM_W(0X28, ctx->r9) = ctx->r10;
L_8026A548:
    // 0x8026A548: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x8026A54C: jal         0x80268D7C
    // 0x8026A550: nop

    ovl_8024B800_func_80268D7C(rdram, ctx);
        goto after_4;
    // 0x8026A550: nop

    after_4:
    // 0x8026A554: b           L_8026A56C
    // 0x8026A558: lw          $t3, 0x20($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X20);
        goto L_8026A56C;
    // 0x8026A558: lw          $t3, 0x20($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X20);
L_8026A55C:
    // 0x8026A55C: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x8026A560: jal         0x80268EBC
    // 0x8026A564: nop

    ovl_8024B800_func_80268EBC(rdram, ctx);
        goto after_5;
    // 0x8026A564: nop

    after_5:
L_8026A568:
    // 0x8026A568: lw          $t3, 0x20($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X20);
L_8026A56C:
    // 0x8026A56C: nop

    // 0x8026A570: lhu         $t9, 0x10($t3)
    ctx->r25 = MEM_HU(ctx->r11, 0X10);
    // 0x8026A574: nop

    // 0x8026A578: andi        $t4, $t9, 0xFFFB
    ctx->r12 = ctx->r25 & 0XFFFB;
    // 0x8026A57C: sh          $t4, 0x10($t3)
    MEM_H(0X10, ctx->r11) = ctx->r12;
    // 0x8026A580: lw          $t5, 0x1C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X1C);
    // 0x8026A584: nop

    // 0x8026A588: beq         $t5, $zero, L_8026A5A0
    if (ctx->r13 == 0) {
        // 0x8026A58C: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_8026A5A0;
    }
    // 0x8026A58C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8026A590: lw          $a1, 0x28($t5)
    ctx->r5 = MEM_W(ctx->r13, 0X28);
    // 0x8026A594: jal         0x8026F2EC
    // 0x8026A598: or          $a0, $t5, $zero
    ctx->r4 = ctx->r13 | 0;
    ovl_8024B800_func_8026F2EC(rdram, ctx);
        goto after_6;
    // 0x8026A598: or          $a0, $t5, $zero
    ctx->r4 = ctx->r13 | 0;
    after_6:
    // 0x8026A59C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8026A5A0:
    // 0x8026A5A0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x8026A5A4: jr          $ra
    // 0x8026A5A8: nop

    return;
    // 0x8026A5A8: nop

;}
RECOMP_FUNC void ovl_8024B800_func_8026A5AC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8026A5AC: lhu         $v0, 0x4($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X4);
    // 0x8026A5B0: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x8026A5B4: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x8026A5B8: beq         $v0, $at, L_8026A5D0
    if (ctx->r2 == ctx->r1) {
        // 0x8026A5BC: addiu       $at, $zero, 0x5
        ctx->r1 = ADD32(0, 0X5);
            goto L_8026A5D0;
    }
    // 0x8026A5BC: addiu       $at, $zero, 0x5
    ctx->r1 = ADD32(0, 0X5);
    // 0x8026A5C0: beq         $v0, $at, L_8026A5EC
    if (ctx->r2 == ctx->r1) {
        // 0x8026A5C4: nop
    
            goto L_8026A5EC;
    }
    // 0x8026A5C4: nop

    // 0x8026A5C8: jr          $ra
    // 0x8026A5CC: nop

    return;
    // 0x8026A5CC: nop

L_8026A5D0:
    // 0x8026A5D0: lh          $t6, 0x8CE($a0)
    ctx->r14 = MEM_H(ctx->r4, 0X8CE);
    // 0x8026A5D4: addiu       $t7, $zero, 0x3C
    ctx->r15 = ADD32(0, 0X3C);
    // 0x8026A5D8: slti        $at, $t6, 0x3D
    ctx->r1 = SIGNED(ctx->r14) < 0X3D ? 1 : 0;
    // 0x8026A5DC: bne         $at, $zero, L_8026A66C
    if (ctx->r1 != 0) {
        // 0x8026A5E0: nop
    
            goto L_8026A66C;
    }
    // 0x8026A5E0: nop

    // 0x8026A5E4: jr          $ra
    // 0x8026A5E8: sh          $t7, 0x8CE($a0)
    MEM_H(0X8CE, ctx->r4) = ctx->r15;
    return;
    // 0x8026A5E8: sh          $t7, 0x8CE($a0)
    MEM_H(0X8CE, ctx->r4) = ctx->r15;
L_8026A5EC:
    // 0x8026A5EC: lh          $t8, 0x8AE($a0)
    ctx->r24 = MEM_H(ctx->r4, 0X8AE);
    // 0x8026A5F0: lui         $at, 0x42F0
    ctx->r1 = S32(0X42F0 << 16);
    // 0x8026A5F4: bne         $t8, $zero, L_8026A654
    if (ctx->r24 != 0) {
        // 0x8026A5F8: addiu       $t5, $zero, -0x64
        ctx->r13 = ADD32(0, -0X64);
            goto L_8026A654;
    }
    // 0x8026A5F8: addiu       $t5, $zero, -0x64
    ctx->r13 = ADD32(0, -0X64);
    // 0x8026A5FC: lh          $t9, 0x8CC($a0)
    ctx->r25 = MEM_H(ctx->r4, 0X8CC);
    // 0x8026A600: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x8026A604: mtc1        $t9, $f4
    ctx->f4.u32l = ctx->r25;
    // 0x8026A608: mul.s       $f10, $f8, $f12
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f10.fl = MUL_S(ctx->f8.fl, ctx->f12.fl);
    // 0x8026A60C: addiu       $t3, $zero, -0x15E
    ctx->r11 = ADD32(0, -0X15E);
    // 0x8026A610: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x8026A614: add.s       $f16, $f6, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f6.fl + ctx->f10.fl;
    // 0x8026A618: cfc1        $t0, $FpcCsr
    ctx->r8 = get_cop1_cs();
    // 0x8026A61C: nop

    // 0x8026A620: ori         $at, $t0, 0x3
    ctx->r1 = ctx->r8 | 0X3;
    // 0x8026A624: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x8026A628: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x8026A62C: nop

    // 0x8026A630: cvt.w.s     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.u32l = CVT_W_S(ctx->f16.fl);
    // 0x8026A634: mfc1        $v0, $f18
    ctx->r2 = (int32_t)ctx->f18.u32l;
    // 0x8026A638: ctc1        $t0, $FpcCsr
    set_cop1_cs(ctx->r8);
    // 0x8026A63C: sll         $t1, $v0, 16
    ctx->r9 = S32(ctx->r2 << 16);
    // 0x8026A640: sra         $t2, $t1, 16
    ctx->r10 = S32(SIGNED(ctx->r9) >> 16);
    // 0x8026A644: slti        $at, $t2, -0x15E
    ctx->r1 = SIGNED(ctx->r10) < -0X15E ? 1 : 0;
    // 0x8026A648: beq         $at, $zero, L_8026A654
    if (ctx->r1 == 0) {
        // 0x8026A64C: sh          $t2, 0x8CE($a0)
        MEM_H(0X8CE, ctx->r4) = ctx->r10;
            goto L_8026A654;
    }
    // 0x8026A64C: sh          $t2, 0x8CE($a0)
    MEM_H(0X8CE, ctx->r4) = ctx->r10;
    // 0x8026A650: sh          $t3, 0x8CE($a0)
    MEM_H(0X8CE, ctx->r4) = ctx->r11;
L_8026A654:
    // 0x8026A654: lh          $t4, 0x8CE($a0)
    ctx->r12 = MEM_H(ctx->r4, 0X8CE);
    // 0x8026A658: nop

    // 0x8026A65C: slti        $at, $t4, -0x63
    ctx->r1 = SIGNED(ctx->r12) < -0X63 ? 1 : 0;
    // 0x8026A660: bne         $at, $zero, L_8026A66C
    if (ctx->r1 != 0) {
        // 0x8026A664: nop
    
            goto L_8026A66C;
    }
    // 0x8026A664: nop

    // 0x8026A668: sh          $t5, 0x8CE($a0)
    MEM_H(0X8CE, ctx->r4) = ctx->r13;
L_8026A66C:
    // 0x8026A66C: jr          $ra
    // 0x8026A670: nop

    return;
    // 0x8026A670: nop

;}
RECOMP_FUNC void ovl_8024B800_func_8026A674(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8026A674: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8026A678: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8026A67C: lhu         $t6, 0x8($a0)
    ctx->r14 = MEM_HU(ctx->r4, 0X8);
    // 0x8026A680: sh          $zero, 0x4($a0)
    MEM_H(0X4, ctx->r4) = 0;
    // 0x8026A684: andi        $t7, $t6, 0x40
    ctx->r15 = ctx->r14 & 0X40;
    // 0x8026A688: beq         $t7, $zero, L_8026A69C
    if (ctx->r15 == 0) {
        // 0x8026A68C: nop
    
            goto L_8026A69C;
    }
    // 0x8026A68C: nop

    // 0x8026A690: lbu         $t8, 0x2($a0)
    ctx->r24 = MEM_BU(ctx->r4, 0X2);
    // 0x8026A694: nop

    // 0x8026A698: sh          $t8, 0x4($a0)
    MEM_H(0X4, ctx->r4) = ctx->r24;
L_8026A69C:
    // 0x8026A69C: lhu         $t9, 0x4($a0)
    ctx->r25 = MEM_HU(ctx->r4, 0X4);
    // 0x8026A6A0: lh          $v0, 0x8C4($a0)
    ctx->r2 = MEM_H(ctx->r4, 0X8C4);
    // 0x8026A6A4: addiu       $t0, $t9, -0x1
    ctx->r8 = ADD32(ctx->r25, -0X1);
    // 0x8026A6A8: sltiu       $at, $t0, 0x7
    ctx->r1 = ctx->r8 < 0X7 ? 1 : 0;
    // 0x8026A6AC: beq         $at, $zero, L_8026A7B8
    if (ctx->r1 == 0) {
        // 0x8026A6B0: sll         $t0, $t0, 2
        ctx->r8 = S32(ctx->r8 << 2);
            goto L_8026A7B8;
    }
    // 0x8026A6B0: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x8026A6B4: lui         $at, 0x8028
    ctx->r1 = S32(0X8028 << 16);
    // 0x8026A6B8: addu        $at, $at, $t0
    gpr jr_addend_8026A6C4 = ctx->r8;
    ctx->r1 = ADD32(ctx->r1, ctx->r8);
    // 0x8026A6BC: lw          $t0, -0x2AE0($at)
    ctx->r8 = ADD32(ctx->r1, -0X2AE0);
    // 0x8026A6C0: nop

    // 0x8026A6C4: jr          $t0
    // 0x8026A6C8: nop

    switch (jr_addend_8026A6C4 >> 2) {
        case 0: goto L_8026A6CC; break;
        case 1: goto L_8026A7B8; break;
        case 2: goto L_8026A7B8; break;
        case 3: goto L_8026A72C; break;
        case 4: goto L_8026A750; break;
        case 5: goto L_8026A774; break;
        case 6: goto L_8026A7B8; break;
        default: switch_error(__func__, 0x8026A6C4, 0x8027D520);
    }
    // 0x8026A6C8: nop

L_8026A6CC:
    // 0x8026A6CC: lh          $t1, 0x8AE($a0)
    ctx->r9 = MEM_H(ctx->r4, 0X8AE);
    // 0x8026A6D0: nop

    // 0x8026A6D4: beq         $t1, $zero, L_8026A7BC
    if (ctx->r9 == 0) {
        // 0x8026A6D8: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_8026A7BC;
    }
    // 0x8026A6D8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8026A6DC: lhu         $t2, 0xE($a0)
    ctx->r10 = MEM_HU(ctx->r4, 0XE);
    // 0x8026A6E0: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8026A6E4: bne         $t2, $at, L_8026A7BC
    if (ctx->r10 != ctx->r1) {
        // 0x8026A6E8: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_8026A7BC;
    }
    // 0x8026A6E8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8026A6EC: lh          $v1, 0x8CA($a0)
    ctx->r3 = MEM_H(ctx->r4, 0X8CA);
    // 0x8026A6F0: nop

    // 0x8026A6F4: addiu       $v1, $v1, -0x12C
    ctx->r3 = ADD32(ctx->r3, -0X12C);
    // 0x8026A6F8: slt         $at, $v0, $v1
    ctx->r1 = SIGNED(ctx->r2) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x8026A6FC: beq         $at, $zero, L_8026A70C
    if (ctx->r1 == 0) {
        // 0x8026A700: slti        $at, $v0, 0x65
        ctx->r1 = SIGNED(ctx->r2) < 0X65 ? 1 : 0;
            goto L_8026A70C;
    }
    // 0x8026A700: slti        $at, $v0, 0x65
    ctx->r1 = SIGNED(ctx->r2) < 0X65 ? 1 : 0;
    // 0x8026A704: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    // 0x8026A708: slti        $at, $v0, 0x65
    ctx->r1 = SIGNED(ctx->r2) < 0X65 ? 1 : 0;
L_8026A70C:
    // 0x8026A70C: bne         $at, $zero, L_8026A718
    if (ctx->r1 != 0) {
        // 0x8026A710: nop
    
            goto L_8026A718;
    }
    // 0x8026A710: nop

    // 0x8026A714: addiu       $v0, $zero, 0x64
    ctx->r2 = ADD32(0, 0X64);
L_8026A718:
    // 0x8026A718: lh          $t3, 0x8C6($a0)
    ctx->r11 = MEM_H(ctx->r4, 0X8C6);
    // 0x8026A71C: nop

    // 0x8026A720: addu        $t4, $t3, $v0
    ctx->r12 = ADD32(ctx->r11, ctx->r2);
    // 0x8026A724: b           L_8026A7B8
    // 0x8026A728: sh          $t4, 0x8CC($a0)
    MEM_H(0X8CC, ctx->r4) = ctx->r12;
        goto L_8026A7B8;
    // 0x8026A728: sh          $t4, 0x8CC($a0)
    MEM_H(0X8CC, ctx->r4) = ctx->r12;
L_8026A72C:
    // 0x8026A72C: slti        $at, $v0, -0x95
    ctx->r1 = SIGNED(ctx->r2) < -0X95 ? 1 : 0;
    // 0x8026A730: bne         $at, $zero, L_8026A73C
    if (ctx->r1 != 0) {
        // 0x8026A734: nop
    
            goto L_8026A73C;
    }
    // 0x8026A734: nop

    // 0x8026A738: addiu       $v0, $zero, -0x96
    ctx->r2 = ADD32(0, -0X96);
L_8026A73C:
    // 0x8026A73C: lh          $t5, 0x8C6($a0)
    ctx->r13 = MEM_H(ctx->r4, 0X8C6);
    // 0x8026A740: nop

    // 0x8026A744: addu        $t6, $t5, $v0
    ctx->r14 = ADD32(ctx->r13, ctx->r2);
    // 0x8026A748: b           L_8026A7B8
    // 0x8026A74C: sh          $t6, 0x8CC($a0)
    MEM_H(0X8CC, ctx->r4) = ctx->r14;
        goto L_8026A7B8;
    // 0x8026A74C: sh          $t6, 0x8CC($a0)
    MEM_H(0X8CC, ctx->r4) = ctx->r14;
L_8026A750:
    // 0x8026A750: slti        $at, $v0, -0xF9
    ctx->r1 = SIGNED(ctx->r2) < -0XF9 ? 1 : 0;
    // 0x8026A754: bne         $at, $zero, L_8026A760
    if (ctx->r1 != 0) {
        // 0x8026A758: nop
    
            goto L_8026A760;
    }
    // 0x8026A758: nop

    // 0x8026A75C: addiu       $v0, $zero, -0xFA
    ctx->r2 = ADD32(0, -0XFA);
L_8026A760:
    // 0x8026A760: lh          $t7, 0x8C6($a0)
    ctx->r15 = MEM_H(ctx->r4, 0X8C6);
    // 0x8026A764: nop

    // 0x8026A768: addu        $t8, $t7, $v0
    ctx->r24 = ADD32(ctx->r15, ctx->r2);
    // 0x8026A76C: b           L_8026A7B8
    // 0x8026A770: sh          $t8, 0x8CC($a0)
    MEM_H(0X8CC, ctx->r4) = ctx->r24;
        goto L_8026A7B8;
    // 0x8026A770: sh          $t8, 0x8CC($a0)
    MEM_H(0X8CC, ctx->r4) = ctx->r24;
L_8026A774:
    // 0x8026A774: lui         $t9, 0x8012
    ctx->r25 = S32(0X8012 << 16);
    // 0x8026A778: lhu         $t9, 0xB78($t9)
    ctx->r25 = MEM_HU(ctx->r25, 0XB78);
    // 0x8026A77C: nop

    // 0x8026A780: bne         $t9, $zero, L_8026A7BC
    if (ctx->r25 != 0) {
        // 0x8026A784: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_8026A7BC;
    }
    // 0x8026A784: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8026A788: lh          $v0, 0x8CC($a0)
    ctx->r2 = MEM_H(ctx->r4, 0X8CC);
    // 0x8026A78C: nop

    // 0x8026A790: slti        $at, $v0, -0x15E
    ctx->r1 = SIGNED(ctx->r2) < -0X15E ? 1 : 0;
    // 0x8026A794: beq         $at, $zero, L_8026A7BC
    if (ctx->r1 == 0) {
        // 0x8026A798: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_8026A7BC;
    }
    // 0x8026A798: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8026A79C: lh          $v1, 0x8B0($a0)
    ctx->r3 = MEM_H(ctx->r4, 0X8B0);
    // 0x8026A7A0: nop

    // 0x8026A7A4: slt         $at, $v0, $v1
    ctx->r1 = SIGNED(ctx->r2) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x8026A7A8: beq         $at, $zero, L_8026A7BC
    if (ctx->r1 == 0) {
        // 0x8026A7AC: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_8026A7BC;
    }
    // 0x8026A7AC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8026A7B0: jal         0x80262378
    // 0x8026A7B4: sh          $v1, 0x8CC($a0)
    MEM_H(0X8CC, ctx->r4) = ctx->r3;
    ovl_8024B800_func_80262378(rdram, ctx);
        goto after_0;
    // 0x8026A7B4: sh          $v1, 0x8CC($a0)
    MEM_H(0X8CC, ctx->r4) = ctx->r3;
    after_0:
L_8026A7B8:
    // 0x8026A7B8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8026A7BC:
    // 0x8026A7BC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8026A7C0: jr          $ra
    // 0x8026A7C4: nop

    return;
    // 0x8026A7C4: nop

;}
RECOMP_FUNC void ovl_8024B800_func_8026A7C8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8026A7C8: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    // 0x8026A7CC: lhu         $t8, 0x8($a0)
    ctx->r24 = MEM_HU(ctx->r4, 0X8);
    // 0x8026A7D0: sll         $t6, $a1, 16
    ctx->r14 = S32(ctx->r5 << 16);
    // 0x8026A7D4: sra         $t7, $t6, 16
    ctx->r15 = S32(SIGNED(ctx->r14) >> 16);
    // 0x8026A7D8: andi        $t9, $t8, 0x1
    ctx->r25 = ctx->r24 & 0X1;
    // 0x8026A7DC: beq         $t9, $zero, L_8026A7F4
    if (ctx->r25 == 0) {
        // 0x8026A7E0: or          $a1, $t7, $zero
        ctx->r5 = ctx->r15 | 0;
            goto L_8026A7F4;
    }
    // 0x8026A7E0: or          $a1, $t7, $zero
    ctx->r5 = ctx->r15 | 0;
    // 0x8026A7E4: sll         $v1, $t7, 16
    ctx->r3 = S32(ctx->r15 << 16);
    // 0x8026A7E8: sra         $t0, $v1, 16
    ctx->r8 = S32(SIGNED(ctx->r3) >> 16);
    // 0x8026A7EC: b           L_8026A800
    // 0x8026A7F0: or          $v1, $t0, $zero
    ctx->r3 = ctx->r8 | 0;
        goto L_8026A800;
    // 0x8026A7F0: or          $v1, $t0, $zero
    ctx->r3 = ctx->r8 | 0;
L_8026A7F4:
    // 0x8026A7F4: negu        $v1, $a1
    ctx->r3 = SUB32(0, ctx->r5);
    // 0x8026A7F8: sll         $t1, $v1, 16
    ctx->r9 = S32(ctx->r3 << 16);
    // 0x8026A7FC: sra         $v1, $t1, 16
    ctx->r3 = S32(SIGNED(ctx->r9) >> 16);
L_8026A800:
    // 0x8026A800: slti        $at, $v1, 0x1FE
    ctx->r1 = SIGNED(ctx->r3) < 0X1FE ? 1 : 0;
    // 0x8026A804: bne         $at, $zero, L_8026A814
    if (ctx->r1 != 0) {
        // 0x8026A808: slti        $at, $v1, -0x1FD
        ctx->r1 = SIGNED(ctx->r3) < -0X1FD ? 1 : 0;
            goto L_8026A814;
    }
    // 0x8026A808: slti        $at, $v1, -0x1FD
    ctx->r1 = SIGNED(ctx->r3) < -0X1FD ? 1 : 0;
    // 0x8026A80C: addiu       $v1, $zero, 0x1FD
    ctx->r3 = ADD32(0, 0X1FD);
    // 0x8026A810: slti        $at, $v1, -0x1FD
    ctx->r1 = SIGNED(ctx->r3) < -0X1FD ? 1 : 0;
L_8026A814:
    // 0x8026A814: beq         $at, $zero, L_8026A820
    if (ctx->r1 == 0) {
        // 0x8026A818: nop
    
            goto L_8026A820;
    }
    // 0x8026A818: nop

    // 0x8026A81C: addiu       $v1, $zero, -0x1FD
    ctx->r3 = ADD32(0, -0X1FD);
L_8026A820:
    // 0x8026A820: jr          $ra
    // 0x8026A824: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    return;
    // 0x8026A824: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
;}
RECOMP_FUNC void ovl_8024B800_func_8026A828(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8026A828: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8026A82C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8026A830: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8026A834: lhu         $t6, 0x10($a0)
    ctx->r14 = MEM_HU(ctx->r4, 0X10);
    // 0x8026A838: lhu         $t8, 0x4($a0)
    ctx->r24 = MEM_HU(ctx->r4, 0X4);
    // 0x8026A83C: addiu       $at, $zero, 0x8
    ctx->r1 = ADD32(0, 0X8);
    // 0x8026A840: andi        $t7, $t6, 0xFFDF
    ctx->r15 = ctx->r14 & 0XFFDF;
    // 0x8026A844: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x8026A848: bne         $t8, $at, L_8026A888
    if (ctx->r24 != ctx->r1) {
        // 0x8026A84C: sh          $t7, 0x10($a0)
        MEM_H(0X10, ctx->r4) = ctx->r15;
            goto L_8026A888;
    }
    // 0x8026A84C: sh          $t7, 0x10($a0)
    MEM_H(0X10, ctx->r4) = ctx->r15;
    // 0x8026A850: lhu         $v0, 0x936($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X936);
    // 0x8026A854: nop

    // 0x8026A858: slti        $v1, $v0, 0x4C
    ctx->r3 = SIGNED(ctx->r2) < 0X4C ? 1 : 0;
    // 0x8026A85C: addiu       $t9, $v0, 0x1
    ctx->r25 = ADD32(ctx->r2, 0X1);
    // 0x8026A860: bne         $v1, $zero, L_8026A888
    if (ctx->r3 != 0) {
        // 0x8026A864: sh          $t9, 0x936($a0)
        MEM_H(0X936, ctx->r4) = ctx->r25;
            goto L_8026A888;
    }
    // 0x8026A864: sh          $t9, 0x936($a0)
    MEM_H(0X936, ctx->r4) = ctx->r25;
    // 0x8026A868: lhu         $t0, 0x8($a0)
    ctx->r8 = MEM_HU(ctx->r4, 0X8);
    // 0x8026A86C: sb          $zero, 0x2($a0)
    MEM_B(0X2, ctx->r4) = 0;
    // 0x8026A870: andi        $t1, $t0, 0xFFBF
    ctx->r9 = ctx->r8 & 0XFFBF;
    // 0x8026A874: sh          $t1, 0x8($a0)
    MEM_H(0X8, ctx->r4) = ctx->r9;
    // 0x8026A878: sw          $zero, 0x91C($a0)
    MEM_W(0X91C, ctx->r4) = 0;
    // 0x8026A87C: sw          $zero, 0x920($a0)
    MEM_W(0X920, ctx->r4) = 0;
    // 0x8026A880: sw          $zero, 0x924($a0)
    MEM_W(0X924, ctx->r4) = 0;
    // 0x8026A884: sh          $zero, 0x936($a0)
    MEM_H(0X936, ctx->r4) = 0;
L_8026A888:
    // 0x8026A888: lui         $t2, 0x8012
    ctx->r10 = S32(0X8012 << 16);
    // 0x8026A88C: lhu         $t2, 0xB78($t2)
    ctx->r10 = MEM_HU(ctx->r10, 0XB78);
    // 0x8026A890: lui         $t5, 0x8009
    ctx->r13 = S32(0X8009 << 16);
    // 0x8026A894: beq         $t2, $zero, L_8026A8B8
    if (ctx->r10 == 0) {
        // 0x8026A898: lui         $t3, 0x8009
        ctx->r11 = S32(0X8009 << 16);
            goto L_8026A8B8;
    }
    // 0x8026A898: lui         $t3, 0x8009
    ctx->r11 = S32(0X8009 << 16);
    // 0x8026A89C: lw          $t3, 0x3B20($t3)
    ctx->r11 = MEM_W(ctx->r11, 0X3B20);
    // 0x8026A8A0: nop

    // 0x8026A8A4: lh          $t4, 0xE8($t3)
    ctx->r12 = MEM_H(ctx->r11, 0XE8);
    // 0x8026A8A8: nop

    // 0x8026A8AC: mtc1        $t4, $f4
    ctx->f4.u32l = ctx->r12;
    // 0x8026A8B0: b           L_8026A8C8
    // 0x8026A8B4: cvt.s.w     $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    ctx->f0.fl = CVT_S_W(ctx->f4.u32l);
        goto L_8026A8C8;
    // 0x8026A8B4: cvt.s.w     $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    ctx->f0.fl = CVT_S_W(ctx->f4.u32l);
L_8026A8B8:
    // 0x8026A8B8: lw          $t5, 0x3B20($t5)
    ctx->r13 = MEM_W(ctx->r13, 0X3B20);
    // 0x8026A8BC: nop

    // 0x8026A8C0: lwc1        $f0, 0x8($t5)
    ctx->f0.u32l = MEM_W(ctx->r13, 0X8);
    // 0x8026A8C4: nop

L_8026A8C8:
    // 0x8026A8C8: cfc1        $t6, $FpcCsr
    ctx->r14 = get_cop1_cs();
    // 0x8026A8CC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8026A8D0: ori         $at, $t6, 0x3
    ctx->r1 = ctx->r14 | 0X3;
    // 0x8026A8D4: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x8026A8D8: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x8026A8DC: nop

    // 0x8026A8E0: cvt.w.s     $f6, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    ctx->f6.u32l = CVT_W_S(ctx->f0.fl);
    // 0x8026A8E4: mfc1        $a1, $f6
    ctx->r5 = (int32_t)ctx->f6.u32l;
    // 0x8026A8E8: ctc1        $t6, $FpcCsr
    set_cop1_cs(ctx->r14);
    // 0x8026A8EC: sll         $t7, $a1, 16
    ctx->r15 = S32(ctx->r5 << 16);
    // 0x8026A8F0: jal         0x8026A7C8
    // 0x8026A8F4: sra         $a1, $t7, 16
    ctx->r5 = S32(SIGNED(ctx->r15) >> 16);
    ovl_8024B800_func_8026A7C8(rdram, ctx);
        goto after_0;
    // 0x8026A8F4: sra         $a1, $t7, 16
    ctx->r5 = S32(SIGNED(ctx->r15) >> 16);
    after_0:
    // 0x8026A8F8: sh          $v0, 0x8B0($s0)
    MEM_H(0X8B0, ctx->r16) = ctx->r2;
    // 0x8026A8FC: jal         0x80266FCC
    // 0x8026A900: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_8024B800_func_80266FCC(rdram, ctx);
        goto after_1;
    // 0x8026A900: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
    // 0x8026A904: lhu         $t9, 0x8($s0)
    ctx->r25 = MEM_HU(ctx->r16, 0X8);
    // 0x8026A908: nop

    // 0x8026A90C: andi        $t0, $t9, 0x400
    ctx->r8 = ctx->r25 & 0X400;
    // 0x8026A910: bne         $t0, $zero, L_8026AA34
    if (ctx->r8 != 0) {
        // 0x8026A914: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_8026AA34;
    }
    // 0x8026A914: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8026A918: jal         0x8005DCA8
    // 0x8026A91C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8005DCA8(rdram, ctx);
        goto after_2;
    // 0x8026A91C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_2:
    // 0x8026A920: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x8026A924: addiu       $a1, $zero, 0xA
    ctx->r5 = ADD32(0, 0XA);
    // 0x8026A928: jal         0x8005DE74
    // 0x8026A92C: addiu       $a2, $s0, 0x318
    ctx->r6 = ADD32(ctx->r16, 0X318);
    func_8005DE74(rdram, ctx);
        goto after_3;
    // 0x8026A92C: addiu       $a2, $s0, 0x318
    ctx->r6 = ADD32(ctx->r16, 0X318);
    after_3:
    // 0x8026A930: jal         0x80278700
    // 0x8026A934: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_8024B800_func_80278700(rdram, ctx);
        goto after_4;
    // 0x8026A934: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_4:
    // 0x8026A938: lui         $t1, 0x8010
    ctx->r9 = S32(0X8010 << 16);
    // 0x8026A93C: lhu         $t1, 0x522A($t1)
    ctx->r9 = MEM_HU(ctx->r9, 0X522A);
    // 0x8026A940: lhu         $t3, 0x6($s0)
    ctx->r11 = MEM_HU(ctx->r16, 0X6);
    // 0x8026A944: andi        $t2, $t1, 0x1
    ctx->r10 = ctx->r9 & 0X1;
    // 0x8026A948: beq         $t2, $t3, L_8026A958
    if (ctx->r10 == ctx->r11) {
        // 0x8026A94C: nop
    
            goto L_8026A958;
    }
    // 0x8026A94C: nop

    // 0x8026A950: jal         0x802A4210
    // 0x8026A954: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    LOOKUP_FUNC(0x802A4210)(rdram, ctx);
        goto after_5;
    // 0x8026A954: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_5:
L_8026A958:
    // 0x8026A958: jal         0x802631C4
    // 0x8026A95C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_8024B800_func_802631C4(rdram, ctx);
        goto after_6;
    // 0x8026A95C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_6:
    // 0x8026A960: lh          $t5, 0x8AE($s0)
    ctx->r13 = MEM_H(ctx->r16, 0X8AE);
    // 0x8026A964: nop

    // 0x8026A968: beq         $t5, $zero, L_8026A9D0
    if (ctx->r13 == 0) {
        // 0x8026A96C: nop
    
            goto L_8026A9D0;
    }
    // 0x8026A96C: nop

    // 0x8026A970: lhu         $t6, 0x10($s0)
    ctx->r14 = MEM_HU(ctx->r16, 0X10);
    // 0x8026A974: nop

    // 0x8026A978: andi        $t7, $t6, 0x4
    ctx->r15 = ctx->r14 & 0X4;
    // 0x8026A97C: beq         $t7, $zero, L_8026A98C
    if (ctx->r15 == 0) {
        // 0x8026A980: nop
    
            goto L_8026A98C;
    }
    // 0x8026A980: nop

    // 0x8026A984: jal         0x802694B8
    // 0x8026A988: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_8024B800_func_802694B8(rdram, ctx);
        goto after_7;
    // 0x8026A988: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_7:
L_8026A98C:
    // 0x8026A98C: lui         $t8, 0x8009
    ctx->r24 = S32(0X8009 << 16);
    // 0x8026A990: lw          $t8, 0x3B20($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X3B20);
    // 0x8026A994: lui         $t0, 0x8012
    ctx->r8 = S32(0X8012 << 16);
    // 0x8026A998: lw          $t9, 0x88($t8)
    ctx->r25 = MEM_W(ctx->r24, 0X88);
    // 0x8026A99C: nop

    // 0x8026A9A0: bne         $t9, $zero, L_8026A9C0
    if (ctx->r25 != 0) {
        // 0x8026A9A4: nop
    
            goto L_8026A9C0;
    }
    // 0x8026A9A4: nop

    // 0x8026A9A8: lhu         $t0, 0xB78($t0)
    ctx->r8 = MEM_HU(ctx->r8, 0XB78);
    // 0x8026A9AC: nop

    // 0x8026A9B0: bne         $t0, $zero, L_8026A9C0
    if (ctx->r8 != 0) {
        // 0x8026A9B4: nop
    
            goto L_8026A9C0;
    }
    // 0x8026A9B4: nop

    // 0x8026A9B8: jal         0x8026383C
    // 0x8026A9BC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_8024B800_func_8026383C(rdram, ctx);
        goto after_8;
    // 0x8026A9BC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_8:
L_8026A9C0:
    // 0x8026A9C0: jal         0x80264180
    // 0x8026A9C4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_8024B800_func_80264180(rdram, ctx);
        goto after_9;
    // 0x8026A9C4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_9:
    // 0x8026A9C8: b           L_8026AA34
    // 0x8026A9CC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_8026AA34;
    // 0x8026A9CC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_8026A9D0:
    // 0x8026A9D0: lhu         $t1, 0x10($s0)
    ctx->r9 = MEM_HU(ctx->r16, 0X10);
    // 0x8026A9D4: nop

    // 0x8026A9D8: andi        $t2, $t1, 0x4
    ctx->r10 = ctx->r9 & 0X4;
    // 0x8026A9DC: beq         $t2, $zero, L_8026A9EC
    if (ctx->r10 == 0) {
        // 0x8026A9E0: nop
    
            goto L_8026A9EC;
    }
    // 0x8026A9E0: nop

    // 0x8026A9E4: jal         0x8026A368
    // 0x8026A9E8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_8024B800_func_8026A368(rdram, ctx);
        goto after_10;
    // 0x8026A9E8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_10:
L_8026A9EC:
    // 0x8026A9EC: lui         $t3, 0x8009
    ctx->r11 = S32(0X8009 << 16);
    // 0x8026A9F0: lw          $t3, 0x3B20($t3)
    ctx->r11 = MEM_W(ctx->r11, 0X3B20);
    // 0x8026A9F4: lui         $t5, 0x8012
    ctx->r13 = S32(0X8012 << 16);
    // 0x8026A9F8: lw          $t4, 0x88($t3)
    ctx->r12 = MEM_W(ctx->r11, 0X88);
    // 0x8026A9FC: nop

    // 0x8026AA00: bne         $t4, $zero, L_8026AA20
    if (ctx->r12 != 0) {
        // 0x8026AA04: nop
    
            goto L_8026AA20;
    }
    // 0x8026AA04: nop

    // 0x8026AA08: lhu         $t5, 0xB78($t5)
    ctx->r13 = MEM_HU(ctx->r13, 0XB78);
    // 0x8026AA0C: nop

    // 0x8026AA10: bne         $t5, $zero, L_8026AA20
    if (ctx->r13 != 0) {
        // 0x8026AA14: nop
    
            goto L_8026AA20;
    }
    // 0x8026AA14: nop

    // 0x8026AA18: jal         0x80263A9C
    // 0x8026AA1C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_8024B800_func_80263A9C(rdram, ctx);
        goto after_11;
    // 0x8026AA1C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_11:
L_8026AA20:
    // 0x8026AA20: jal         0x80266B9C
    // 0x8026AA24: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_8024B800_func_80266B9C(rdram, ctx);
        goto after_12;
    // 0x8026AA24: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_12:
    // 0x8026AA28: jal         0x802661D4
    // 0x8026AA2C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_8024B800_func_802661D4(rdram, ctx);
        goto after_13;
    // 0x8026AA2C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_13:
    // 0x8026AA30: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_8026AA34:
    // 0x8026AA34: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8026AA38: jr          $ra
    // 0x8026AA3C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x8026AA3C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void ovl_8024B800_func_8026A964(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8026A964: nop

    // 0x8026A968: beq         $t5, $zero, L_8026A9D0
    if (ctx->r13 == 0) {
        // 0x8026A96C: nop
    
            goto L_8026A9D0;
    }
    // 0x8026A96C: nop

    // 0x8026A970: lhu         $t6, 0x10($s0)
    ctx->r14 = MEM_HU(ctx->r16, 0X10);
    // 0x8026A974: nop

    // 0x8026A978: andi        $t7, $t6, 0x4
    ctx->r15 = ctx->r14 & 0X4;
    // 0x8026A97C: beq         $t7, $zero, L_8026A98C
    if (ctx->r15 == 0) {
        // 0x8026A980: nop
    
            goto L_8026A98C;
    }
    // 0x8026A980: nop

    // 0x8026A984: jal         0x802694B8
    // 0x8026A988: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_8024B800_func_802694B8(rdram, ctx);
        goto after_0;
    // 0x8026A988: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_0:
L_8026A98C:
    // 0x8026A98C: lui         $t8, 0x8009
    ctx->r24 = S32(0X8009 << 16);
    // 0x8026A990: lw          $t8, 0x3B20($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X3B20);
    // 0x8026A994: lui         $t0, 0x8012
    ctx->r8 = S32(0X8012 << 16);
    // 0x8026A998: lw          $t9, 0x88($t8)
    ctx->r25 = MEM_W(ctx->r24, 0X88);
    // 0x8026A99C: nop

    // 0x8026A9A0: bne         $t9, $zero, L_8026A9C0
    if (ctx->r25 != 0) {
        // 0x8026A9A4: nop
    
            goto L_8026A9C0;
    }
    // 0x8026A9A4: nop

    // 0x8026A9A8: lhu         $t0, 0xB78($t0)
    ctx->r8 = MEM_HU(ctx->r8, 0XB78);
    // 0x8026A9AC: nop

    // 0x8026A9B0: bne         $t0, $zero, L_8026A9C0
    if (ctx->r8 != 0) {
        // 0x8026A9B4: nop
    
            goto L_8026A9C0;
    }
    // 0x8026A9B4: nop

    // 0x8026A9B8: jal         0x8026383C
    // 0x8026A9BC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_8024B800_func_8026383C(rdram, ctx);
        goto after_1;
    // 0x8026A9BC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
L_8026A9C0:
    // 0x8026A9C0: jal         0x80264180
    // 0x8026A9C4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_8024B800_func_80264180(rdram, ctx);
        goto after_2;
    // 0x8026A9C4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_2:
    // 0x8026A9C8: b           L_8026AA34
    // 0x8026A9CC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_8026AA34;
    // 0x8026A9CC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_8026A9D0:
    // 0x8026A9D0: lhu         $t1, 0x10($s0)
    ctx->r9 = MEM_HU(ctx->r16, 0X10);
    // 0x8026A9D4: nop

    // 0x8026A9D8: andi        $t2, $t1, 0x4
    ctx->r10 = ctx->r9 & 0X4;
    // 0x8026A9DC: beq         $t2, $zero, L_8026A9EC
    if (ctx->r10 == 0) {
        // 0x8026A9E0: nop
    
            goto L_8026A9EC;
    }
    // 0x8026A9E0: nop

    // 0x8026A9E4: jal         0x8026A368
    // 0x8026A9E8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_8024B800_func_8026A368(rdram, ctx);
        goto after_3;
    // 0x8026A9E8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_3:
L_8026A9EC:
    // 0x8026A9EC: lui         $t3, 0x8009
    ctx->r11 = S32(0X8009 << 16);
    // 0x8026A9F0: lw          $t3, 0x3B20($t3)
    ctx->r11 = MEM_W(ctx->r11, 0X3B20);
    // 0x8026A9F4: lui         $t5, 0x8012
    ctx->r13 = S32(0X8012 << 16);
    // 0x8026A9F8: lw          $t4, 0x88($t3)
    ctx->r12 = MEM_W(ctx->r11, 0X88);
    // 0x8026A9FC: nop

    // 0x8026AA00: bne         $t4, $zero, L_8026AA20
    if (ctx->r12 != 0) {
        // 0x8026AA04: nop
    
            goto L_8026AA20;
    }
    // 0x8026AA04: nop

    // 0x8026AA08: lhu         $t5, 0xB78($t5)
    ctx->r13 = MEM_HU(ctx->r13, 0XB78);
    // 0x8026AA0C: nop

    // 0x8026AA10: bne         $t5, $zero, L_8026AA20
    if (ctx->r13 != 0) {
        // 0x8026AA14: nop
    
            goto L_8026AA20;
    }
    // 0x8026AA14: nop

    // 0x8026AA18: jal         0x80263A9C
    // 0x8026AA1C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_8024B800_func_80263A9C(rdram, ctx);
        goto after_4;
    // 0x8026AA1C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_4:
L_8026AA20:
    // 0x8026AA20: jal         0x80266B9C
    // 0x8026AA24: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_8024B800_func_80266B9C(rdram, ctx);
        goto after_5;
    // 0x8026AA24: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_5:
    // 0x8026AA28: jal         0x802661D4
    // 0x8026AA2C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_8024B800_func_802661D4(rdram, ctx);
        goto after_6;
    // 0x8026AA2C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_6:
    // 0x8026AA30: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_8026AA34:
    // 0x8026AA34: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8026AA38: jr          $ra
    // 0x8026AA3C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x8026AA3C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void ovl_8024B800_func_8026AA40(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8026AA40: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    // 0x8026AA44: lw          $v0, 0xC8($a0)
    ctx->r2 = MEM_W(ctx->r4, 0XC8);
    // 0x8026AA48: nop

    // 0x8026AA4C: lhu         $t7, 0x10($v0)
    ctx->r15 = MEM_HU(ctx->r2, 0X10);
    // 0x8026AA50: nop

    // 0x8026AA54: and         $t8, $t7, $a1
    ctx->r24 = ctx->r15 & ctx->r5;
    // 0x8026AA58: sh          $t8, 0x10($v0)
    MEM_H(0X10, ctx->r2) = ctx->r24;
    // 0x8026AA5C: lhu         $t9, 0x12($a0)
    ctx->r25 = MEM_HU(ctx->r4, 0X12);
    // 0x8026AA60: nop

    // 0x8026AA64: andi        $t0, $t9, 0xFDFF
    ctx->r8 = ctx->r25 & 0XFDFF;
    // 0x8026AA68: jr          $ra
    // 0x8026AA6C: sh          $t0, 0x12($a0)
    MEM_H(0X12, ctx->r4) = ctx->r8;
    return;
    // 0x8026AA6C: sh          $t0, 0x12($a0)
    MEM_H(0X12, ctx->r4) = ctx->r8;
;}
RECOMP_FUNC void ovl_8024B800_func_8026AA70(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8026AA70: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    // 0x8026AA74: lh          $t7, 0x2E($a0)
    ctx->r15 = MEM_H(ctx->r4, 0X2E);
    // 0x8026AA78: andi        $t6, $a1, 0xFFFF
    ctx->r14 = ctx->r5 & 0XFFFF;
    // 0x8026AA7C: addiu       $v0, $t6, -0x1FD
    ctx->r2 = ADD32(ctx->r14, -0X1FD);
    // 0x8026AA80: slt         $at, $t7, $v0
    ctx->r1 = SIGNED(ctx->r15) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x8026AA84: beq         $at, $zero, L_8026AA90
    if (ctx->r1 == 0) {
        // 0x8026AA88: nop
    
            goto L_8026AA90;
    }
    // 0x8026AA88: nop

    // 0x8026AA8C: sh          $v0, 0x2E($a0)
    MEM_H(0X2E, ctx->r4) = ctx->r2;
L_8026AA90:
    // 0x8026AA90: jr          $ra
    // 0x8026AA94: nop

    return;
    // 0x8026AA94: nop

;}
RECOMP_FUNC void ovl_8024B800_func_8026AA98(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8026AA98: lw          $t6, 0xC8($a0)
    ctx->r14 = MEM_W(ctx->r4, 0XC8);
    // 0x8026AA9C: nop

    // 0x8026AAA0: lhu         $t7, 0x8($t6)
    ctx->r15 = MEM_HU(ctx->r14, 0X8);
    // 0x8026AAA4: nop

    // 0x8026AAA8: andi        $t8, $t7, 0x1
    ctx->r24 = ctx->r15 & 0X1;
    // 0x8026AAAC: bne         $t8, $zero, L_8026AAC4
    if (ctx->r24 != 0) {
        // 0x8026AAB0: nop
    
            goto L_8026AAC4;
    }
    // 0x8026AAB0: nop

    // 0x8026AAB4: lh          $t9, 0x2E($a0)
    ctx->r25 = MEM_H(ctx->r4, 0X2E);
    // 0x8026AAB8: nop

    // 0x8026AABC: negu        $t0, $t9
    ctx->r8 = SUB32(0, ctx->r25);
    // 0x8026AAC0: sh          $t0, 0x2E($a0)
    MEM_H(0X2E, ctx->r4) = ctx->r8;
L_8026AAC4:
    // 0x8026AAC4: jr          $ra
    // 0x8026AAC8: nop

    return;
    // 0x8026AAC8: nop

;}
RECOMP_FUNC void ovl_8024B800_func_8026AACC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8026AACC: lw          $t6, 0xC8($a0)
    ctx->r14 = MEM_W(ctx->r4, 0XC8);
    // 0x8026AAD0: nop

    // 0x8026AAD4: lhu         $t7, 0x8($t6)
    ctx->r15 = MEM_HU(ctx->r14, 0X8);
    // 0x8026AAD8: nop

    // 0x8026AADC: andi        $t8, $t7, 0x1
    ctx->r24 = ctx->r15 & 0X1;
    // 0x8026AAE0: beq         $t8, $zero, L_8026AB08
    if (ctx->r24 == 0) {
        // 0x8026AAE4: nop
    
            goto L_8026AB08;
    }
    // 0x8026AAE4: nop

    // 0x8026AAE8: lw          $t9, 0xD4($a0)
    ctx->r25 = MEM_W(ctx->r4, 0XD4);
    // 0x8026AAEC: nop

    // 0x8026AAF0: lh          $v1, 0x2($t9)
    ctx->r3 = MEM_H(ctx->r25, 0X2);
    // 0x8026AAF4: nop

    // 0x8026AAF8: sll         $v0, $v1, 16
    ctx->r2 = S32(ctx->r3 << 16);
    // 0x8026AAFC: sra         $t1, $v0, 16
    ctx->r9 = S32(SIGNED(ctx->r2) >> 16);
    // 0x8026AB00: jr          $ra
    // 0x8026AB04: or          $v0, $t1, $zero
    ctx->r2 = ctx->r9 | 0;
    return;
    // 0x8026AB04: or          $v0, $t1, $zero
    ctx->r2 = ctx->r9 | 0;
L_8026AB08:
    // 0x8026AB08: lw          $t0, 0xD4($a0)
    ctx->r8 = MEM_W(ctx->r4, 0XD4);
    // 0x8026AB0C: nop

    // 0x8026AB10: lh          $v1, 0x2($t0)
    ctx->r3 = MEM_H(ctx->r8, 0X2);
    // 0x8026AB14: nop

    // 0x8026AB18: negu        $v1, $v1
    ctx->r3 = SUB32(0, ctx->r3);
    // 0x8026AB1C: sll         $v0, $v1, 16
    ctx->r2 = S32(ctx->r3 << 16);
    // 0x8026AB20: sra         $t1, $v0, 16
    ctx->r9 = S32(SIGNED(ctx->r2) >> 16);
    // 0x8026AB24: jr          $ra
    // 0x8026AB28: or          $v0, $t1, $zero
    ctx->r2 = ctx->r9 | 0;
    return;
    // 0x8026AB28: or          $v0, $t1, $zero
    ctx->r2 = ctx->r9 | 0;
;}
RECOMP_FUNC void ovl_8024B800_func_8026AAE4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8026AAE4: nop

    // 0x8026AAE8: lw          $t9, 0xD4($a0)
    ctx->r25 = MEM_W(ctx->r4, 0XD4);
    // 0x8026AAEC: nop

    // 0x8026AAF0: lh          $v1, 0x2($t9)
    ctx->r3 = MEM_H(ctx->r25, 0X2);
    // 0x8026AAF4: nop

    // 0x8026AAF8: sll         $v0, $v1, 16
    ctx->r2 = S32(ctx->r3 << 16);
    // 0x8026AAFC: sra         $t1, $v0, 16
    ctx->r9 = S32(SIGNED(ctx->r2) >> 16);
    // 0x8026AB00: jr          $ra
    // 0x8026AB04: or          $v0, $t1, $zero
    ctx->r2 = ctx->r9 | 0;
    return;
    // 0x8026AB04: or          $v0, $t1, $zero
    ctx->r2 = ctx->r9 | 0;
    // 0x8026AB08: lw          $t0, 0xD4($a0)
    ctx->r8 = MEM_W(ctx->r4, 0XD4);
    // 0x8026AB0C: nop

    // 0x8026AB10: lh          $v1, 0x2($t0)
    ctx->r3 = MEM_H(ctx->r8, 0X2);
    // 0x8026AB14: nop

    // 0x8026AB18: negu        $v1, $v1
    ctx->r3 = SUB32(0, ctx->r3);
    // 0x8026AB1C: sll         $v0, $v1, 16
    ctx->r2 = S32(ctx->r3 << 16);
    // 0x8026AB20: sra         $t1, $v0, 16
    ctx->r9 = S32(SIGNED(ctx->r2) >> 16);
    // 0x8026AB24: jr          $ra
    // 0x8026AB28: or          $v0, $t1, $zero
    ctx->r2 = ctx->r9 | 0;
    return;
    // 0x8026AB28: or          $v0, $t1, $zero
    ctx->r2 = ctx->r9 | 0;
;}
RECOMP_FUNC void ovl_8024B800_func_8026AB2C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8026AB2C: lw          $t6, 0xC8($a0)
    ctx->r14 = MEM_W(ctx->r4, 0XC8);
    // 0x8026AB30: nop

    // 0x8026AB34: lhu         $t7, 0x8($t6)
    ctx->r15 = MEM_HU(ctx->r14, 0X8);
    // 0x8026AB38: nop

    // 0x8026AB3C: andi        $t8, $t7, 0x1
    ctx->r24 = ctx->r15 & 0X1;
    // 0x8026AB40: beq         $t8, $zero, L_8026AB54
    if (ctx->r24 == 0) {
        // 0x8026AB44: nop
    
            goto L_8026AB54;
    }
    // 0x8026AB44: nop

    // 0x8026AB48: lwc1        $f2, 0x4C($a0)
    ctx->f2.u32l = MEM_W(ctx->r4, 0X4C);
    // 0x8026AB4C: jr          $ra
    // 0x8026AB50: mov.s       $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    ctx->f0.fl = ctx->f2.fl;
    return;
    // 0x8026AB50: mov.s       $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    ctx->f0.fl = ctx->f2.fl;
L_8026AB54:
    // 0x8026AB54: lwc1        $f2, 0x4C($a0)
    ctx->f2.u32l = MEM_W(ctx->r4, 0X4C);
    // 0x8026AB58: nop

    // 0x8026AB5C: neg.s       $f2, $f2
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f2.fl = -ctx->f2.fl;
    // 0x8026AB60: jr          $ra
    // 0x8026AB64: mov.s       $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    ctx->f0.fl = ctx->f2.fl;
    return;
    // 0x8026AB64: mov.s       $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    ctx->f0.fl = ctx->f2.fl;
;}
RECOMP_FUNC void ovl_8024B800_func_8026AB68(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8026AB68: lw          $t6, 0xC8($a0)
    ctx->r14 = MEM_W(ctx->r4, 0XC8);
    // 0x8026AB6C: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x8026AB70: lhu         $t7, 0x8($t6)
    ctx->r15 = MEM_HU(ctx->r14, 0X8);
    // 0x8026AB74: nop

    // 0x8026AB78: andi        $t8, $t7, 0x1
    ctx->r24 = ctx->r15 & 0X1;
    // 0x8026AB7C: beq         $t8, $zero, L_8026AB90
    if (ctx->r24 == 0) {
        // 0x8026AB80: nop
    
            goto L_8026AB90;
    }
    // 0x8026AB80: nop

    // 0x8026AB84: mov.s       $f2, $f12
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    ctx->f2.fl = ctx->f12.fl;
    // 0x8026AB88: jr          $ra
    // 0x8026AB8C: mov.s       $f0, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    ctx->f0.fl = ctx->f12.fl;
    return;
    // 0x8026AB8C: mov.s       $f0, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    ctx->f0.fl = ctx->f12.fl;
L_8026AB90:
    // 0x8026AB90: neg.s       $f2, $f12
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); 
    ctx->f2.fl = -ctx->f12.fl;
    // 0x8026AB94: jr          $ra
    // 0x8026AB98: mov.s       $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    ctx->f0.fl = ctx->f2.fl;
    return;
    // 0x8026AB98: mov.s       $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    ctx->f0.fl = ctx->f2.fl;
;}
RECOMP_FUNC void ovl_8024B800_func_8026AB70(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8026AB70: lhu         $t7, 0x8($t6)
    ctx->r15 = MEM_HU(ctx->r14, 0X8);
    // 0x8026AB74: nop

    // 0x8026AB78: andi        $t8, $t7, 0x1
    ctx->r24 = ctx->r15 & 0X1;
    // 0x8026AB7C: beq         $t8, $zero, L_8026AB90
    if (ctx->r24 == 0) {
        // 0x8026AB80: nop
    
            goto L_8026AB90;
    }
    // 0x8026AB80: nop

    // 0x8026AB84: mov.s       $f2, $f12
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    ctx->f2.fl = ctx->f12.fl;
    // 0x8026AB88: jr          $ra
    // 0x8026AB8C: mov.s       $f0, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    ctx->f0.fl = ctx->f12.fl;
    return;
    // 0x8026AB8C: mov.s       $f0, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    ctx->f0.fl = ctx->f12.fl;
L_8026AB90:
    // 0x8026AB90: neg.s       $f2, $f12
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); 
    ctx->f2.fl = -ctx->f12.fl;
    // 0x8026AB94: jr          $ra
    // 0x8026AB98: mov.s       $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    ctx->f0.fl = ctx->f2.fl;
    return;
    // 0x8026AB98: mov.s       $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    ctx->f0.fl = ctx->f2.fl;
;}
RECOMP_FUNC void ovl_8024B800_func_8026AB9C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8026AB9C: lw          $t6, 0xC8($a0)
    ctx->r14 = MEM_W(ctx->r4, 0XC8);
    // 0x8026ABA0: lui         $t8, 0x8009
    ctx->r24 = S32(0X8009 << 16);
    // 0x8026ABA4: lh          $v0, 0x8CC($t6)
    ctx->r2 = MEM_H(ctx->r14, 0X8CC);
    // 0x8026ABA8: lui         $t2, 0x8009
    ctx->r10 = S32(0X8009 << 16);
    // 0x8026ABAC: slti        $at, $v0, -0x15E
    ctx->r1 = SIGNED(ctx->r2) < -0X15E ? 1 : 0;
    // 0x8026ABB0: bne         $at, $zero, L_8026ABD4
    if (ctx->r1 != 0) {
        // 0x8026ABB4: nop
    
            goto L_8026ABD4;
    }
    // 0x8026ABB4: nop

    // 0x8026ABB8: lw          $t8, 0x3B20($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X3B20);
    // 0x8026ABBC: lh          $t7, 0x30($a0)
    ctx->r15 = MEM_H(ctx->r4, 0X30);
    // 0x8026ABC0: lh          $t9, 0xCA($t8)
    ctx->r25 = MEM_H(ctx->r24, 0XCA);
    // 0x8026ABC4: nop

    // 0x8026ABC8: addu        $t0, $t7, $t9
    ctx->r8 = ADD32(ctx->r15, ctx->r25);
    // 0x8026ABCC: jr          $ra
    // 0x8026ABD0: sh          $t0, 0x30($a0)
    MEM_H(0X30, ctx->r4) = ctx->r8;
    return;
    // 0x8026ABD0: sh          $t0, 0x30($a0)
    MEM_H(0X30, ctx->r4) = ctx->r8;
L_8026ABD4:
    // 0x8026ABD4: lw          $t2, 0x3B20($t2)
    ctx->r10 = MEM_W(ctx->r10, 0X3B20);
    // 0x8026ABD8: addiu       $t1, $v0, 0x1FD
    ctx->r9 = ADD32(ctx->r2, 0X1FD);
    // 0x8026ABDC: lh          $t3, 0xCA($t2)
    ctx->r11 = MEM_H(ctx->r10, 0XCA);
    // 0x8026ABE0: addiu       $at, $zero, 0x9F
    ctx->r1 = ADD32(0, 0X9F);
    // 0x8026ABE4: multu       $t1, $t3
    result = U64(U32(ctx->r9)) * U64(U32(ctx->r11)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8026ABE8: lh          $t8, 0x30($a0)
    ctx->r24 = MEM_H(ctx->r4, 0X30);
    // 0x8026ABEC: mflo        $v1
    ctx->r3 = lo;
    // 0x8026ABF0: nop

    // 0x8026ABF4: nop

    // 0x8026ABF8: div         $zero, $v1, $at
    lo = S32(S64(S32(ctx->r3)) / S64(S32(ctx->r1))); hi = S32(S64(S32(ctx->r3)) % S64(S32(ctx->r1)));
    // 0x8026ABFC: mflo        $t6
    ctx->r14 = lo;
    // 0x8026AC00: addu        $t7, $t8, $t6
    ctx->r15 = ADD32(ctx->r24, ctx->r14);
    // 0x8026AC04: sh          $t7, 0x30($a0)
    MEM_H(0X30, ctx->r4) = ctx->r15;
    // 0x8026AC08: jr          $ra
    // 0x8026AC0C: nop

    return;
    // 0x8026AC0C: nop

;}
RECOMP_FUNC void ovl_8024B800_func_8026AC10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8026AC10: lw          $t6, 0xC8($a0)
    ctx->r14 = MEM_W(ctx->r4, 0XC8);
    // 0x8026AC14: nop

    // 0x8026AC18: lhu         $t7, 0x8($t6)
    ctx->r15 = MEM_HU(ctx->r14, 0X8);
    // 0x8026AC1C: nop

    // 0x8026AC20: andi        $t8, $t7, 0x1
    ctx->r24 = ctx->r15 & 0X1;
    // 0x8026AC24: beq         $t8, $zero, L_8026AC40
    if (ctx->r24 == 0) {
        // 0x8026AC28: nop
    
            goto L_8026AC40;
    }
    // 0x8026AC28: nop

    // 0x8026AC2C: lw          $t9, 0xD4($a0)
    ctx->r25 = MEM_W(ctx->r4, 0XD4);
    // 0x8026AC30: nop

    // 0x8026AC34: lh          $v0, 0x2($t9)
    ctx->r2 = MEM_H(ctx->r25, 0X2);
    // 0x8026AC38: b           L_8026AC5C
    // 0x8026AC3C: nop

        goto L_8026AC5C;
    // 0x8026AC3C: nop

L_8026AC40:
    // 0x8026AC40: lw          $t0, 0xD4($a0)
    ctx->r8 = MEM_W(ctx->r4, 0XD4);
    // 0x8026AC44: nop

    // 0x8026AC48: lh          $v0, 0x2($t0)
    ctx->r2 = MEM_H(ctx->r8, 0X2);
    // 0x8026AC4C: nop

    // 0x8026AC50: negu        $v0, $v0
    ctx->r2 = SUB32(0, ctx->r2);
    // 0x8026AC54: sll         $t1, $v0, 16
    ctx->r9 = S32(ctx->r2 << 16);
    // 0x8026AC58: sra         $v0, $t1, 16
    ctx->r2 = S32(SIGNED(ctx->r9) >> 16);
L_8026AC5C:
    // 0x8026AC5C: bltz        $v0, L_8026AC80
    if (SIGNED(ctx->r2) < 0) {
        // 0x8026AC60: nop
    
            goto L_8026AC80;
    }
    // 0x8026AC60: nop

    // 0x8026AC64: lh          $t3, 0x30($a0)
    ctx->r11 = MEM_H(ctx->r4, 0X30);
    // 0x8026AC68: addiu       $t4, $zero, 0x10F
    ctx->r12 = ADD32(0, 0X10F);
    // 0x8026AC6C: slti        $at, $t3, 0x10F
    ctx->r1 = SIGNED(ctx->r11) < 0X10F ? 1 : 0;
    // 0x8026AC70: beq         $at, $zero, L_8026AC98
    if (ctx->r1 == 0) {
        // 0x8026AC74: nop
    
            goto L_8026AC98;
    }
    // 0x8026AC74: nop

    // 0x8026AC78: jr          $ra
    // 0x8026AC7C: sh          $t4, 0x30($a0)
    MEM_H(0X30, ctx->r4) = ctx->r12;
    return;
    // 0x8026AC7C: sh          $t4, 0x30($a0)
    MEM_H(0X30, ctx->r4) = ctx->r12;
L_8026AC80:
    // 0x8026AC80: lh          $t5, 0x30($a0)
    ctx->r13 = MEM_H(ctx->r4, 0X30);
    // 0x8026AC84: addiu       $t6, $zero, -0x10F
    ctx->r14 = ADD32(0, -0X10F);
    // 0x8026AC88: slti        $at, $t5, -0x10E
    ctx->r1 = SIGNED(ctx->r13) < -0X10E ? 1 : 0;
    // 0x8026AC8C: bne         $at, $zero, L_8026AC98
    if (ctx->r1 != 0) {
        // 0x8026AC90: nop
    
            goto L_8026AC98;
    }
    // 0x8026AC90: nop

    // 0x8026AC94: sh          $t6, 0x30($a0)
    MEM_H(0X30, ctx->r4) = ctx->r14;
L_8026AC98:
    // 0x8026AC98: jr          $ra
    // 0x8026AC9C: nop

    return;
    // 0x8026AC9C: nop

;}
RECOMP_FUNC void ovl_8024B800_func_8026AC48(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8026AC48: lh          $v0, 0x2($t0)
    ctx->r2 = MEM_H(ctx->r8, 0X2);
    // 0x8026AC4C: nop

    // 0x8026AC50: negu        $v0, $v0
    ctx->r2 = SUB32(0, ctx->r2);
    // 0x8026AC54: sll         $t1, $v0, 16
    ctx->r9 = S32(ctx->r2 << 16);
    // 0x8026AC58: sra         $v0, $t1, 16
    ctx->r2 = S32(SIGNED(ctx->r9) >> 16);
    // 0x8026AC5C: bltz        $v0, L_8026AC80
    if (SIGNED(ctx->r2) < 0) {
        // 0x8026AC60: nop
    
            goto L_8026AC80;
    }
    // 0x8026AC60: nop

    // 0x8026AC64: lh          $t3, 0x30($a0)
    ctx->r11 = MEM_H(ctx->r4, 0X30);
    // 0x8026AC68: addiu       $t4, $zero, 0x10F
    ctx->r12 = ADD32(0, 0X10F);
    // 0x8026AC6C: slti        $at, $t3, 0x10F
    ctx->r1 = SIGNED(ctx->r11) < 0X10F ? 1 : 0;
    // 0x8026AC70: beq         $at, $zero, L_8026AC98
    if (ctx->r1 == 0) {
        // 0x8026AC74: nop
    
            goto L_8026AC98;
    }
    // 0x8026AC74: nop

    // 0x8026AC78: jr          $ra
    // 0x8026AC7C: sh          $t4, 0x30($a0)
    MEM_H(0X30, ctx->r4) = ctx->r12;
    return;
    // 0x8026AC7C: sh          $t4, 0x30($a0)
    MEM_H(0X30, ctx->r4) = ctx->r12;
L_8026AC80:
    // 0x8026AC80: lh          $t5, 0x30($a0)
    ctx->r13 = MEM_H(ctx->r4, 0X30);
    // 0x8026AC84: addiu       $t6, $zero, -0x10F
    ctx->r14 = ADD32(0, -0X10F);
    // 0x8026AC88: slti        $at, $t5, -0x10E
    ctx->r1 = SIGNED(ctx->r13) < -0X10E ? 1 : 0;
    // 0x8026AC8C: bne         $at, $zero, L_8026AC98
    if (ctx->r1 != 0) {
        // 0x8026AC90: nop
    
            goto L_8026AC98;
    }
    // 0x8026AC90: nop

    // 0x8026AC94: sh          $t6, 0x30($a0)
    MEM_H(0X30, ctx->r4) = ctx->r14;
L_8026AC98:
    // 0x8026AC98: jr          $ra
    // 0x8026AC9C: nop

    return;
    // 0x8026AC9C: nop

;}
RECOMP_FUNC void ovl_8024B800_func_8026ACA0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8026ACA0: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8026ACA4: lui         $t6, 0x8009
    ctx->r14 = S32(0X8009 << 16);
    // 0x8026ACA8: lw          $t6, 0x3B20($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X3B20);
    // 0x8026ACAC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8026ACB0: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x8026ACB4: lui         $at, 0x8028
    ctx->r1 = S32(0X8028 << 16);
    // 0x8026ACB8: lwc1        $f4, 0x0($t6)
    ctx->f4.u32l = MEM_W(ctx->r14, 0X0);
    // 0x8026ACBC: lwc1        $f9, -0x2AC0($at)
    ctx->f_odd[(9 - 1) * 2] = MEM_W(ctx->r1, -0X2AC0);
    // 0x8026ACC0: lwc1        $f8, -0x2ABC($at)
    ctx->f8.u32l = MEM_W(ctx->r1, -0X2ABC);
    // 0x8026ACC4: cvt.d.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.d = CVT_D_S(ctx->f4.fl);
    // 0x8026ACC8: mul.d       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f8.d); 
    ctx->f10.d = MUL_D(ctx->f6.d, ctx->f8.d);
    // 0x8026ACCC: lui         $at, 0x8028
    ctx->r1 = S32(0X8028 << 16);
    // 0x8026ACD0: lwc1        $f17, -0x2AB8($at)
    ctx->f_odd[(17 - 1) * 2] = MEM_W(ctx->r1, -0X2AB8);
    // 0x8026ACD4: lwc1        $f16, -0x2AB4($at)
    ctx->f16.u32l = MEM_W(ctx->r1, -0X2AB4);
    // 0x8026ACD8: nop

    // 0x8026ACDC: sub.d       $f18, $f16, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f16.d); NAN_CHECK(ctx->f10.d); 
    ctx->f18.d = ctx->f16.d - ctx->f10.d;
    // 0x8026ACE0: cvt.s.d     $f12, $f18
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.d); 
    ctx->f12.fl = CVT_S_D(ctx->f18.d);
    // 0x8026ACE4: jal         0x80080E80
    // 0x8026ACE8: swc1        $f12, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f12.u32l;
    func_80080E80(rdram, ctx);
        goto after_0;
    // 0x8026ACE8: swc1        $f12, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f12.u32l;
    after_0:
    // 0x8026ACEC: lui         $t7, 0x8009
    ctx->r15 = S32(0X8009 << 16);
    // 0x8026ACF0: lw          $t7, 0x3B20($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X3B20);
    // 0x8026ACF4: lui         $at, 0x4248
    ctx->r1 = S32(0X4248 << 16);
    // 0x8026ACF8: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x8026ACFC: lwc1        $f6, 0x8($t7)
    ctx->f6.u32l = MEM_W(ctx->r15, 0X8);
    // 0x8026AD00: lw          $t0, 0x20($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X20);
    // 0x8026AD04: mul.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f4.fl, ctx->f6.fl);
    // 0x8026AD08: lwc1        $f12, 0x1C($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x8026AD0C: add.s       $f16, $f0, $f8
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f16.fl = ctx->f0.fl + ctx->f8.fl;
    // 0x8026AD10: cfc1        $t8, $FpcCsr
    ctx->r24 = get_cop1_cs();
    // 0x8026AD14: nop

    // 0x8026AD18: ori         $at, $t8, 0x3
    ctx->r1 = ctx->r24 | 0X3;
    // 0x8026AD1C: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x8026AD20: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x8026AD24: nop

    // 0x8026AD28: cvt.w.s     $f10, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    ctx->f10.u32l = CVT_W_S(ctx->f16.fl);
    // 0x8026AD2C: mfc1        $t9, $f10
    ctx->r25 = (int32_t)ctx->f10.u32l;
    // 0x8026AD30: ctc1        $t8, $FpcCsr
    set_cop1_cs(ctx->r24);
    // 0x8026AD34: jal         0x80081040
    // 0x8026AD38: sh          $t9, 0x2E($t0)
    MEM_H(0X2E, ctx->r8) = ctx->r25;
    func_80081040(rdram, ctx);
        goto after_1;
    // 0x8026AD38: sh          $t9, 0x2E($t0)
    MEM_H(0X2E, ctx->r8) = ctx->r25;
    after_1:
    // 0x8026AD3C: lui         $t1, 0x8009
    ctx->r9 = S32(0X8009 << 16);
    // 0x8026AD40: lw          $t1, 0x3B20($t1)
    ctx->r9 = MEM_W(ctx->r9, 0X3B20);
    // 0x8026AD44: lui         $at, 0x4248
    ctx->r1 = S32(0X4248 << 16);
    // 0x8026AD48: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x8026AD4C: lwc1        $f4, 0x0($t1)
    ctx->f4.u32l = MEM_W(ctx->r9, 0X0);
    // 0x8026AD50: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x8026AD54: mul.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f18.fl, ctx->f4.fl);
    // 0x8026AD58: sub.s       $f8, $f6, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = ctx->f6.fl - ctx->f0.fl;
    // 0x8026AD5C: cfc1        $t2, $FpcCsr
    ctx->r10 = get_cop1_cs();
    // 0x8026AD60: nop

    // 0x8026AD64: ori         $at, $t2, 0x3
    ctx->r1 = ctx->r10 | 0X3;
    // 0x8026AD68: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x8026AD6C: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x8026AD70: nop

    // 0x8026AD74: cvt.w.s     $f16, $f8
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    ctx->f16.u32l = CVT_W_S(ctx->f8.fl);
    // 0x8026AD78: mfc1        $t3, $f16
    ctx->r11 = (int32_t)ctx->f16.u32l;
    // 0x8026AD7C: ctc1        $t2, $FpcCsr
    set_cop1_cs(ctx->r10);
    // 0x8026AD80: jal         0x8026AA98
    // 0x8026AD84: sh          $t3, 0x30($a0)
    MEM_H(0X30, ctx->r4) = ctx->r11;
    ovl_8024B800_func_8026AA98(rdram, ctx);
        goto after_2;
    // 0x8026AD84: sh          $t3, 0x30($a0)
    MEM_H(0X30, ctx->r4) = ctx->r11;
    after_2:
    // 0x8026AD88: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8026AD8C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x8026AD90: jr          $ra
    // 0x8026AD94: nop

    return;
    // 0x8026AD94: nop

;}
RECOMP_FUNC void ovl_8024B800_func_8026ACB8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8026ACB8: lwc1        $f4, 0x0($t6)
    ctx->f4.u32l = MEM_W(ctx->r14, 0X0);
    // 0x8026ACBC: lwc1        $f9, -0x2AC0($at)
    ctx->f_odd[(9 - 1) * 2] = MEM_W(ctx->r1, -0X2AC0);
    // 0x8026ACC0: lwc1        $f8, -0x2ABC($at)
    ctx->f8.u32l = MEM_W(ctx->r1, -0X2ABC);
    // 0x8026ACC4: cvt.d.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.d = CVT_D_S(ctx->f4.fl);
    // 0x8026ACC8: mul.d       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f8.d); 
    ctx->f10.d = MUL_D(ctx->f6.d, ctx->f8.d);
    // 0x8026ACCC: lui         $at, 0x8028
    ctx->r1 = S32(0X8028 << 16);
    // 0x8026ACD0: lwc1        $f17, -0x2AB8($at)
    ctx->f_odd[(17 - 1) * 2] = MEM_W(ctx->r1, -0X2AB8);
    // 0x8026ACD4: lwc1        $f16, -0x2AB4($at)
    ctx->f16.u32l = MEM_W(ctx->r1, -0X2AB4);
    // 0x8026ACD8: nop

    // 0x8026ACDC: sub.d       $f18, $f16, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f16.d); NAN_CHECK(ctx->f10.d); 
    ctx->f18.d = ctx->f16.d - ctx->f10.d;
    // 0x8026ACE0: cvt.s.d     $f12, $f18
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.d); 
    ctx->f12.fl = CVT_S_D(ctx->f18.d);
    // 0x8026ACE4: jal         0x80080E80
    // 0x8026ACE8: swc1        $f12, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f12.u32l;
    func_80080E80(rdram, ctx);
        goto after_0;
    // 0x8026ACE8: swc1        $f12, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f12.u32l;
    after_0:
    // 0x8026ACEC: lui         $t7, 0x8009
    ctx->r15 = S32(0X8009 << 16);
    // 0x8026ACF0: lw          $t7, 0x3B20($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X3B20);
    // 0x8026ACF4: lui         $at, 0x4248
    ctx->r1 = S32(0X4248 << 16);
    // 0x8026ACF8: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x8026ACFC: lwc1        $f6, 0x8($t7)
    ctx->f6.u32l = MEM_W(ctx->r15, 0X8);
    // 0x8026AD00: lw          $t0, 0x20($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X20);
    // 0x8026AD04: mul.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f4.fl, ctx->f6.fl);
    // 0x8026AD08: lwc1        $f12, 0x1C($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x8026AD0C: add.s       $f16, $f0, $f8
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f16.fl = ctx->f0.fl + ctx->f8.fl;
    // 0x8026AD10: cfc1        $t8, $FpcCsr
    ctx->r24 = get_cop1_cs();
    // 0x8026AD14: nop

    // 0x8026AD18: ori         $at, $t8, 0x3
    ctx->r1 = ctx->r24 | 0X3;
    // 0x8026AD1C: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x8026AD20: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x8026AD24: nop

    // 0x8026AD28: cvt.w.s     $f10, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    ctx->f10.u32l = CVT_W_S(ctx->f16.fl);
    // 0x8026AD2C: mfc1        $t9, $f10
    ctx->r25 = (int32_t)ctx->f10.u32l;
    // 0x8026AD30: ctc1        $t8, $FpcCsr
    set_cop1_cs(ctx->r24);
    // 0x8026AD34: jal         0x80081040
    // 0x8026AD38: sh          $t9, 0x2E($t0)
    MEM_H(0X2E, ctx->r8) = ctx->r25;
    func_80081040(rdram, ctx);
        goto after_1;
    // 0x8026AD38: sh          $t9, 0x2E($t0)
    MEM_H(0X2E, ctx->r8) = ctx->r25;
    after_1:
    // 0x8026AD3C: lui         $t1, 0x8009
    ctx->r9 = S32(0X8009 << 16);
    // 0x8026AD40: lw          $t1, 0x3B20($t1)
    ctx->r9 = MEM_W(ctx->r9, 0X3B20);
    // 0x8026AD44: lui         $at, 0x4248
    ctx->r1 = S32(0X4248 << 16);
    // 0x8026AD48: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x8026AD4C: lwc1        $f4, 0x0($t1)
    ctx->f4.u32l = MEM_W(ctx->r9, 0X0);
    // 0x8026AD50: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x8026AD54: mul.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f18.fl, ctx->f4.fl);
    // 0x8026AD58: sub.s       $f8, $f6, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = ctx->f6.fl - ctx->f0.fl;
    // 0x8026AD5C: cfc1        $t2, $FpcCsr
    ctx->r10 = get_cop1_cs();
    // 0x8026AD60: nop

    // 0x8026AD64: ori         $at, $t2, 0x3
    ctx->r1 = ctx->r10 | 0X3;
    // 0x8026AD68: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x8026AD6C: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x8026AD70: nop

    // 0x8026AD74: cvt.w.s     $f16, $f8
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    ctx->f16.u32l = CVT_W_S(ctx->f8.fl);
    // 0x8026AD78: mfc1        $t3, $f16
    ctx->r11 = (int32_t)ctx->f16.u32l;
    // 0x8026AD7C: ctc1        $t2, $FpcCsr
    set_cop1_cs(ctx->r10);
    // 0x8026AD80: jal         0x8026AA98
    // 0x8026AD84: sh          $t3, 0x30($a0)
    MEM_H(0X30, ctx->r4) = ctx->r11;
    ovl_8024B800_func_8026AA98(rdram, ctx);
        goto after_2;
    // 0x8026AD84: sh          $t3, 0x30($a0)
    MEM_H(0X30, ctx->r4) = ctx->r11;
    after_2:
    // 0x8026AD88: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8026AD8C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x8026AD90: jr          $ra
    // 0x8026AD94: nop

    return;
    // 0x8026AD94: nop

;}
RECOMP_FUNC void ovl_8024B800_func_8026AD00(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8026AD00: lw          $t0, 0x20($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X20);
    // 0x8026AD04: mul.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f4.fl, ctx->f6.fl);
    // 0x8026AD08: lwc1        $f12, 0x1C($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x8026AD0C: add.s       $f16, $f0, $f8
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f16.fl = ctx->f0.fl + ctx->f8.fl;
    // 0x8026AD10: cfc1        $t8, $FpcCsr
    ctx->r24 = get_cop1_cs();
    // 0x8026AD14: nop

    // 0x8026AD18: ori         $at, $t8, 0x3
    ctx->r1 = ctx->r24 | 0X3;
    // 0x8026AD1C: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x8026AD20: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x8026AD24: nop

    // 0x8026AD28: cvt.w.s     $f10, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    ctx->f10.u32l = CVT_W_S(ctx->f16.fl);
    // 0x8026AD2C: mfc1        $t9, $f10
    ctx->r25 = (int32_t)ctx->f10.u32l;
    // 0x8026AD30: ctc1        $t8, $FpcCsr
    set_cop1_cs(ctx->r24);
    // 0x8026AD34: jal         0x80081040
    // 0x8026AD38: sh          $t9, 0x2E($t0)
    MEM_H(0X2E, ctx->r8) = ctx->r25;
    func_80081040(rdram, ctx);
        goto after_0;
    // 0x8026AD38: sh          $t9, 0x2E($t0)
    MEM_H(0X2E, ctx->r8) = ctx->r25;
    after_0:
    // 0x8026AD3C: lui         $t1, 0x8009
    ctx->r9 = S32(0X8009 << 16);
    // 0x8026AD40: lw          $t1, 0x3B20($t1)
    ctx->r9 = MEM_W(ctx->r9, 0X3B20);
    // 0x8026AD44: lui         $at, 0x4248
    ctx->r1 = S32(0X4248 << 16);
    // 0x8026AD48: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x8026AD4C: lwc1        $f4, 0x0($t1)
    ctx->f4.u32l = MEM_W(ctx->r9, 0X0);
    // 0x8026AD50: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x8026AD54: mul.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f18.fl, ctx->f4.fl);
    // 0x8026AD58: sub.s       $f8, $f6, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = ctx->f6.fl - ctx->f0.fl;
    // 0x8026AD5C: cfc1        $t2, $FpcCsr
    ctx->r10 = get_cop1_cs();
    // 0x8026AD60: nop

    // 0x8026AD64: ori         $at, $t2, 0x3
    ctx->r1 = ctx->r10 | 0X3;
    // 0x8026AD68: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x8026AD6C: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x8026AD70: nop

    // 0x8026AD74: cvt.w.s     $f16, $f8
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    ctx->f16.u32l = CVT_W_S(ctx->f8.fl);
    // 0x8026AD78: mfc1        $t3, $f16
    ctx->r11 = (int32_t)ctx->f16.u32l;
    // 0x8026AD7C: ctc1        $t2, $FpcCsr
    set_cop1_cs(ctx->r10);
    // 0x8026AD80: jal         0x8026AA98
    // 0x8026AD84: sh          $t3, 0x30($a0)
    MEM_H(0X30, ctx->r4) = ctx->r11;
    ovl_8024B800_func_8026AA98(rdram, ctx);
        goto after_1;
    // 0x8026AD84: sh          $t3, 0x30($a0)
    MEM_H(0X30, ctx->r4) = ctx->r11;
    after_1:
    // 0x8026AD88: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8026AD8C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x8026AD90: jr          $ra
    // 0x8026AD94: nop

    return;
    // 0x8026AD94: nop

;}
RECOMP_FUNC void ovl_8024B800_func_8026AD98(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8026AD98: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8026AD9C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8026ADA0: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8026ADA4: lw          $v0, 0xC8($a0)
    ctx->r2 = MEM_W(ctx->r4, 0XC8);
    // 0x8026ADA8: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x8026ADAC: lh          $t7, 0x8CC($v0)
    ctx->r15 = MEM_H(ctx->r2, 0X8CC);
    // 0x8026ADB0: lh          $t6, 0x8B0($v0)
    ctx->r14 = MEM_H(ctx->r2, 0X8B0);
    // 0x8026ADB4: addiu       $t8, $t7, 0x28
    ctx->r24 = ADD32(ctx->r15, 0X28);
    // 0x8026ADB8: slt         $at, $t6, $t8
    ctx->r1 = SIGNED(ctx->r14) < SIGNED(ctx->r24) ? 1 : 0;
    // 0x8026ADBC: beq         $at, $zero, L_8026AE0C
    if (ctx->r1 == 0) {
        // 0x8026ADC0: nop
    
            goto L_8026AE0C;
    }
    // 0x8026ADC0: nop

    // 0x8026ADC4: jal         0x8026AACC
    // 0x8026ADC8: nop

    ovl_8024B800_func_8026AACC(rdram, ctx);
        goto after_0;
    // 0x8026ADC8: nop

    after_0:
    // 0x8026ADCC: sh          $v0, 0x30($s0)
    MEM_H(0X30, ctx->r16) = ctx->r2;
    // 0x8026ADD0: jal         0x8026AB9C
    // 0x8026ADD4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_8024B800_func_8026AB9C(rdram, ctx);
        goto after_1;
    // 0x8026ADD4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
    // 0x8026ADD8: lw          $t9, 0xC8($s0)
    ctx->r25 = MEM_W(ctx->r16, 0XC8);
    // 0x8026ADDC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8026ADE0: lh          $t0, 0x8B0($t9)
    ctx->r8 = MEM_H(ctx->r25, 0X8B0);
    // 0x8026ADE4: addiu       $a1, $zero, 0x28
    ctx->r5 = ADD32(0, 0X28);
    // 0x8026ADE8: addiu       $t1, $t0, -0x28
    ctx->r9 = ADD32(ctx->r8, -0X28);
    // 0x8026ADEC: jal         0x8026AA70
    // 0x8026ADF0: sh          $t1, 0x2E($s0)
    MEM_H(0X2E, ctx->r16) = ctx->r9;
    ovl_8024B800_func_8026AA70(rdram, ctx);
        goto after_2;
    // 0x8026ADF0: sh          $t1, 0x2E($s0)
    MEM_H(0X2E, ctx->r16) = ctx->r9;
    after_2:
    // 0x8026ADF4: jal         0x8026AA98
    // 0x8026ADF8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_8024B800_func_8026AA98(rdram, ctx);
        goto after_3;
    // 0x8026ADF8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_3:
    // 0x8026ADFC: jal         0x8026BB00
    // 0x8026AE00: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_8024B800_func_8026BB00(rdram, ctx);
        goto after_4;
    // 0x8026AE00: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_4:
    // 0x8026AE04: b           L_8026AE18
    // 0x8026AE08: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_8026AE18;
    // 0x8026AE08: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_8026AE0C:
    // 0x8026AE0C: jal         0x8026C934
    // 0x8026AE10: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_8024B800_func_8026C934(rdram, ctx);
        goto after_5;
    // 0x8026AE10: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_5:
    // 0x8026AE14: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_8026AE18:
    // 0x8026AE18: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8026AE1C: jr          $ra
    // 0x8026AE20: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x8026AE20: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void ovl_8024B800_func_8026ADCC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8026ADCC: sh          $v0, 0x30($s0)
    MEM_H(0X30, ctx->r16) = ctx->r2;
    // 0x8026ADD0: jal         0x8026AB9C
    // 0x8026ADD4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_8024B800_func_8026AB9C(rdram, ctx);
        goto after_0;
    // 0x8026ADD4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_0:
    // 0x8026ADD8: lw          $t9, 0xC8($s0)
    ctx->r25 = MEM_W(ctx->r16, 0XC8);
    // 0x8026ADDC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8026ADE0: lh          $t0, 0x8B0($t9)
    ctx->r8 = MEM_H(ctx->r25, 0X8B0);
    // 0x8026ADE4: addiu       $a1, $zero, 0x28
    ctx->r5 = ADD32(0, 0X28);
    // 0x8026ADE8: addiu       $t1, $t0, -0x28
    ctx->r9 = ADD32(ctx->r8, -0X28);
    // 0x8026ADEC: jal         0x8026AA70
    // 0x8026ADF0: sh          $t1, 0x2E($s0)
    MEM_H(0X2E, ctx->r16) = ctx->r9;
    ovl_8024B800_func_8026AA70(rdram, ctx);
        goto after_1;
    // 0x8026ADF0: sh          $t1, 0x2E($s0)
    MEM_H(0X2E, ctx->r16) = ctx->r9;
    after_1:
    // 0x8026ADF4: jal         0x8026AA98
    // 0x8026ADF8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_8024B800_func_8026AA98(rdram, ctx);
        goto after_2;
    // 0x8026ADF8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_2:
    // 0x8026ADFC: jal         0x8026BB00
    // 0x8026AE00: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_8024B800_func_8026BB00(rdram, ctx);
        goto after_3;
    // 0x8026AE00: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_3:
    // 0x8026AE04: b           L_8026AE18
    // 0x8026AE08: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_8026AE18;
    // 0x8026AE08: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8026AE0C: jal         0x8026C934
    // 0x8026AE10: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_8024B800_func_8026C934(rdram, ctx);
        goto after_4;
    // 0x8026AE10: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_4:
    // 0x8026AE14: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_8026AE18:
    // 0x8026AE18: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8026AE1C: jr          $ra
    // 0x8026AE20: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x8026AE20: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void ovl_8024B800_func_8026AE24(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8026AE24: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8026AE28: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8026AE2C: lw          $t6, 0xC8($a0)
    ctx->r14 = MEM_W(ctx->r4, 0XC8);
    // 0x8026AE30: addiu       $a1, $zero, 0x28
    ctx->r5 = ADD32(0, 0X28);
    // 0x8026AE34: lh          $t7, 0x8B0($t6)
    ctx->r15 = MEM_H(ctx->r14, 0X8B0);
    // 0x8026AE38: nop

    // 0x8026AE3C: addiu       $t8, $t7, -0x28
    ctx->r24 = ADD32(ctx->r15, -0X28);
    // 0x8026AE40: sh          $t8, 0x2E($a0)
    MEM_H(0X2E, ctx->r4) = ctx->r24;
    // 0x8026AE44: jal         0x8026AA70
    // 0x8026AE48: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    ovl_8024B800_func_8026AA70(rdram, ctx);
        goto after_0;
    // 0x8026AE48: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x8026AE4C: lui         $t9, 0x8009
    ctx->r25 = S32(0X8009 << 16);
    // 0x8026AE50: lw          $t9, 0x3B20($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X3B20);
    // 0x8026AE54: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x8026AE58: lwc1        $f0, 0x0($t9)
    ctx->f0.u32l = MEM_W(ctx->r25, 0X0);
    // 0x8026AE5C: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x8026AE60: c.le.s      $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f4.fl <= ctx->f0.fl;
    // 0x8026AE64: addiu       $v0, $zero, 0x50
    ctx->r2 = ADD32(0, 0X50);
    // 0x8026AE68: bc1f        L_8026AE78
    if (!c1cs) {
        // 0x8026AE6C: nop
    
            goto L_8026AE78;
    }
    // 0x8026AE6C: nop

    // 0x8026AE70: b           L_8026AE78
    // 0x8026AE74: addiu       $v0, $zero, -0x50
    ctx->r2 = ADD32(0, -0X50);
        goto L_8026AE78;
    // 0x8026AE74: addiu       $v0, $zero, -0x50
    ctx->r2 = ADD32(0, -0X50);
L_8026AE78:
    // 0x8026AE78: mtc1        $v0, $f6
    ctx->f6.u32l = ctx->r2;
    // 0x8026AE7C: nop

    // 0x8026AE80: cvt.s.w     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.fl = CVT_S_W(ctx->f6.u32l);
    // 0x8026AE84: add.s       $f10, $f8, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f10.fl = ctx->f8.fl + ctx->f0.fl;
    // 0x8026AE88: cfc1        $t0, $FpcCsr
    ctx->r8 = get_cop1_cs();
    // 0x8026AE8C: nop

    // 0x8026AE90: ori         $at, $t0, 0x3
    ctx->r1 = ctx->r8 | 0X3;
    // 0x8026AE94: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x8026AE98: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x8026AE9C: nop

    // 0x8026AEA0: cvt.w.s     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.u32l = CVT_W_S(ctx->f10.fl);
    // 0x8026AEA4: mfc1        $t1, $f16
    ctx->r9 = (int32_t)ctx->f16.u32l;
    // 0x8026AEA8: ctc1        $t0, $FpcCsr
    set_cop1_cs(ctx->r8);
    // 0x8026AEAC: sh          $t1, 0x30($a0)
    MEM_H(0X30, ctx->r4) = ctx->r9;
    // 0x8026AEB0: jal         0x8026AA98
    // 0x8026AEB4: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    ovl_8024B800_func_8026AA98(rdram, ctx);
        goto after_1;
    // 0x8026AEB4: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_1:
    // 0x8026AEB8: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x8026AEBC: jal         0x8026BB00
    // 0x8026AEC0: nop

    ovl_8024B800_func_8026BB00(rdram, ctx);
        goto after_2;
    // 0x8026AEC0: nop

    after_2:
    // 0x8026AEC4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8026AEC8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8026AECC: jr          $ra
    // 0x8026AED0: nop

    return;
    // 0x8026AED0: nop

;}
RECOMP_FUNC void ovl_8024B800_func_8026AED4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8026AED4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8026AED8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8026AEDC: lw          $v0, 0xC8($a0)
    ctx->r2 = MEM_W(ctx->r4, 0XC8);
    // 0x8026AEE0: nop

    // 0x8026AEE4: lh          $v1, 0x8B0($v0)
    ctx->r3 = MEM_H(ctx->r2, 0X8B0);
    // 0x8026AEE8: lh          $t6, 0x8CC($v0)
    ctx->r14 = MEM_H(ctx->r2, 0X8CC);
    // 0x8026AEEC: nop

    // 0x8026AEF0: slt         $at, $v1, $t6
    ctx->r1 = SIGNED(ctx->r3) < SIGNED(ctx->r14) ? 1 : 0;
    // 0x8026AEF4: beq         $at, $zero, L_8026AF8C
    if (ctx->r1 == 0) {
        // 0x8026AEF8: nop
    
            goto L_8026AF8C;
    }
    // 0x8026AEF8: nop

    // 0x8026AEFC: lw          $t7, 0xD4($a0)
    ctx->r15 = MEM_W(ctx->r4, 0XD4);
    // 0x8026AF00: sh          $v1, 0x2E($a0)
    MEM_H(0X2E, ctx->r4) = ctx->r3;
    // 0x8026AF04: lh          $t8, 0x0($t7)
    ctx->r24 = MEM_H(ctx->r15, 0X0);
    // 0x8026AF08: lh          $t0, 0x2E($a0)
    ctx->r8 = MEM_H(ctx->r4, 0X2E);
    // 0x8026AF0C: addiu       $t9, $t8, 0x96
    ctx->r25 = ADD32(ctx->r24, 0X96);
    // 0x8026AF10: mtc1        $t9, $f4
    ctx->f4.u32l = ctx->r25;
    // 0x8026AF14: lwc1        $f8, 0x8D8($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X8D8);
    // 0x8026AF18: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x8026AF1C: mtc1        $t0, $f16
    ctx->f16.u32l = ctx->r8;
    // 0x8026AF20: mul.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = MUL_S(ctx->f6.fl, ctx->f8.fl);
    // 0x8026AF24: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x8026AF28: add.s       $f4, $f18, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = ctx->f18.fl + ctx->f10.fl;
    // 0x8026AF2C: cfc1        $t1, $FpcCsr
    ctx->r9 = get_cop1_cs();
    // 0x8026AF30: nop

    // 0x8026AF34: ori         $at, $t1, 0x3
    ctx->r1 = ctx->r9 | 0X3;
    // 0x8026AF38: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x8026AF3C: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x8026AF40: nop

    // 0x8026AF44: cvt.w.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = CVT_W_S(ctx->f4.fl);
    // 0x8026AF48: mfc1        $t2, $f6
    ctx->r10 = (int32_t)ctx->f6.u32l;
    // 0x8026AF4C: ctc1        $t1, $FpcCsr
    set_cop1_cs(ctx->r9);
    // 0x8026AF50: sh          $t2, 0x2E($a0)
    MEM_H(0X2E, ctx->r4) = ctx->r10;
    // 0x8026AF54: jal         0x8026AA98
    // 0x8026AF58: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    ovl_8024B800_func_8026AA98(rdram, ctx);
        goto after_0;
    // 0x8026AF58: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x8026AF5C: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x8026AF60: nop

    // 0x8026AF64: lw          $t3, 0xC8($a0)
    ctx->r11 = MEM_W(ctx->r4, 0XC8);
    // 0x8026AF68: nop

    // 0x8026AF6C: lw          $a1, 0x8D4($t3)
    ctx->r5 = MEM_W(ctx->r11, 0X8D4);
    // 0x8026AF70: jal         0x8026CB48
    // 0x8026AF74: nop

    ovl_8024B800_func_8026CB48(rdram, ctx);
        goto after_1;
    // 0x8026AF74: nop

    after_1:
    // 0x8026AF78: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x8026AF7C: jal         0x8026BB00
    // 0x8026AF80: nop

    ovl_8024B800_func_8026BB00(rdram, ctx);
        goto after_2;
    // 0x8026AF80: nop

    after_2:
    // 0x8026AF84: b           L_8026AF98
    // 0x8026AF88: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_8026AF98;
    // 0x8026AF88: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8026AF8C:
    // 0x8026AF8C: jal         0x8026CC54
    // 0x8026AF90: nop

    ovl_8024B800_func_8026CC54(rdram, ctx);
        goto after_3;
    // 0x8026AF90: nop

    after_3:
    // 0x8026AF94: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8026AF98:
    // 0x8026AF98: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8026AF9C: jr          $ra
    // 0x8026AFA0: nop

    return;
    // 0x8026AFA0: nop

;}
RECOMP_FUNC void ovl_8024B800_func_8026AEFC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8026AEFC: lw          $t7, 0xD4($a0)
    ctx->r15 = MEM_W(ctx->r4, 0XD4);
    // 0x8026AF00: sh          $v1, 0x2E($a0)
    MEM_H(0X2E, ctx->r4) = ctx->r3;
    // 0x8026AF04: lh          $t8, 0x0($t7)
    ctx->r24 = MEM_H(ctx->r15, 0X0);
    // 0x8026AF08: lh          $t0, 0x2E($a0)
    ctx->r8 = MEM_H(ctx->r4, 0X2E);
    // 0x8026AF0C: addiu       $t9, $t8, 0x96
    ctx->r25 = ADD32(ctx->r24, 0X96);
    // 0x8026AF10: mtc1        $t9, $f4
    ctx->f4.u32l = ctx->r25;
    // 0x8026AF14: lwc1        $f8, 0x8D8($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X8D8);
    // 0x8026AF18: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x8026AF1C: mtc1        $t0, $f16
    ctx->f16.u32l = ctx->r8;
    // 0x8026AF20: mul.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = MUL_S(ctx->f6.fl, ctx->f8.fl);
    // 0x8026AF24: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x8026AF28: add.s       $f4, $f18, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = ctx->f18.fl + ctx->f10.fl;
    // 0x8026AF2C: cfc1        $t1, $FpcCsr
    ctx->r9 = get_cop1_cs();
    // 0x8026AF30: nop

    // 0x8026AF34: ori         $at, $t1, 0x3
    ctx->r1 = ctx->r9 | 0X3;
    // 0x8026AF38: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x8026AF3C: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x8026AF40: nop

    // 0x8026AF44: cvt.w.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = CVT_W_S(ctx->f4.fl);
    // 0x8026AF48: mfc1        $t2, $f6
    ctx->r10 = (int32_t)ctx->f6.u32l;
    // 0x8026AF4C: ctc1        $t1, $FpcCsr
    set_cop1_cs(ctx->r9);
    // 0x8026AF50: sh          $t2, 0x2E($a0)
    MEM_H(0X2E, ctx->r4) = ctx->r10;
    // 0x8026AF54: jal         0x8026AA98
    // 0x8026AF58: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    ovl_8024B800_func_8026AA98(rdram, ctx);
        goto after_0;
    // 0x8026AF58: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x8026AF5C: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x8026AF60: nop

    // 0x8026AF64: lw          $t3, 0xC8($a0)
    ctx->r11 = MEM_W(ctx->r4, 0XC8);
    // 0x8026AF68: nop

    // 0x8026AF6C: lw          $a1, 0x8D4($t3)
    ctx->r5 = MEM_W(ctx->r11, 0X8D4);
    // 0x8026AF70: jal         0x8026CB48
    // 0x8026AF74: nop

    ovl_8024B800_func_8026CB48(rdram, ctx);
        goto after_1;
    // 0x8026AF74: nop

    after_1:
    // 0x8026AF78: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x8026AF7C: jal         0x8026BB00
    // 0x8026AF80: nop

    ovl_8024B800_func_8026BB00(rdram, ctx);
        goto after_2;
    // 0x8026AF80: nop

    after_2:
    // 0x8026AF84: b           L_8026AF98
    // 0x8026AF88: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_8026AF98;
    // 0x8026AF88: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8026AF8C: jal         0x8026CC54
    // 0x8026AF90: nop

    ovl_8024B800_func_8026CC54(rdram, ctx);
        goto after_3;
    // 0x8026AF90: nop

    after_3:
    // 0x8026AF94: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8026AF98:
    // 0x8026AF98: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8026AF9C: jr          $ra
    // 0x8026AFA0: nop

    return;
    // 0x8026AFA0: nop

;}
RECOMP_FUNC void ovl_8024B800_func_8026AFA4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8026AFA4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8026AFA8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8026AFAC: jal         0x8026CC18
    // 0x8026AFB0: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    ovl_8024B800_func_8026CC18(rdram, ctx);
        goto after_0;
    // 0x8026AFB0: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x8026AFB4: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x8026AFB8: lui         $at, 0x4296
    ctx->r1 = S32(0X4296 << 16);
    // 0x8026AFBC: lw          $v0, 0xC8($a0)
    ctx->r2 = MEM_W(ctx->r4, 0XC8);
    // 0x8026AFC0: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x8026AFC4: lh          $t6, 0x8B0($v0)
    ctx->r14 = MEM_H(ctx->r2, 0X8B0);
    // 0x8026AFC8: lwc1        $f6, 0x8D8($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0X8D8);
    // 0x8026AFCC: mtc1        $t6, $f10
    ctx->f10.u32l = ctx->r14;
    // 0x8026AFD0: mul.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f4.fl, ctx->f6.fl);
    // 0x8026AFD4: lh          $t0, 0x2E($a0)
    ctx->r8 = MEM_H(ctx->r4, 0X2E);
    // 0x8026AFD8: cvt.s.w     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.fl = CVT_S_W(ctx->f10.u32l);
    // 0x8026AFDC: add.s       $f18, $f16, $f8
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f18.fl = ctx->f16.fl + ctx->f8.fl;
    // 0x8026AFE0: cfc1        $t7, $FpcCsr
    ctx->r15 = get_cop1_cs();
    // 0x8026AFE4: nop

    // 0x8026AFE8: ori         $at, $t7, 0x3
    ctx->r1 = ctx->r15 | 0X3;
    // 0x8026AFEC: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x8026AFF0: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x8026AFF4: nop

    // 0x8026AFF8: cvt.w.s     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    ctx->f4.u32l = CVT_W_S(ctx->f18.fl);
    // 0x8026AFFC: mfc1        $v1, $f4
    ctx->r3 = (int32_t)ctx->f4.u32l;
    // 0x8026B000: ctc1        $t7, $FpcCsr
    set_cop1_cs(ctx->r15);
    // 0x8026B004: sll         $t8, $v1, 16
    ctx->r24 = S32(ctx->r3 << 16);
    // 0x8026B008: sra         $t9, $t8, 16
    ctx->r25 = S32(SIGNED(ctx->r24) >> 16);
    // 0x8026B00C: slt         $at, $t9, $t0
    ctx->r1 = SIGNED(ctx->r25) < SIGNED(ctx->r8) ? 1 : 0;
    // 0x8026B010: beq         $at, $zero, L_8026B020
    if (ctx->r1 == 0) {
        // 0x8026B014: nop
    
            goto L_8026B020;
    }
    // 0x8026B014: nop

    // 0x8026B018: lw          $v0, 0xC8($a0)
    ctx->r2 = MEM_W(ctx->r4, 0XC8);
    // 0x8026B01C: sh          $t9, 0x2E($a0)
    MEM_H(0X2E, ctx->r4) = ctx->r25;
L_8026B020:
    // 0x8026B020: lw          $a1, 0x8D4($v0)
    ctx->r5 = MEM_W(ctx->r2, 0X8D4);
    // 0x8026B024: jal         0x8026CB48
    // 0x8026B028: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    ovl_8024B800_func_8026CB48(rdram, ctx);
        goto after_1;
    // 0x8026B028: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_1:
    // 0x8026B02C: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x8026B030: lui         $t1, 0x8009
    ctx->r9 = S32(0X8009 << 16);
    // 0x8026B034: lh          $v0, 0x30($a0)
    ctx->r2 = MEM_H(ctx->r4, 0X30);
    // 0x8026B038: lw          $t1, 0x3B20($t1)
    ctx->r9 = MEM_W(ctx->r9, 0X3B20);
    // 0x8026B03C: mtc1        $v0, $f10
    ctx->f10.u32l = ctx->r2;
    // 0x8026B040: lwc1        $f6, 0x0($t1)
    ctx->f6.u32l = MEM_W(ctx->r9, 0X0);
    // 0x8026B044: cvt.s.w     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.fl = CVT_S_W(ctx->f10.u32l);
    // 0x8026B048: lui         $at, 0x8028
    ctx->r1 = S32(0X8028 << 16);
    // 0x8026B04C: lwc1        $f18, -0x2AB0($at)
    ctx->f18.u32l = MEM_W(ctx->r1, -0X2AB0);
    // 0x8026B050: sub.s       $f8, $f6, $f16
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f8.fl = ctx->f6.fl - ctx->f16.fl;
    // 0x8026B054: mul.s       $f4, $f8, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = MUL_S(ctx->f8.fl, ctx->f18.fl);
    // 0x8026B058: cfc1        $t2, $FpcCsr
    ctx->r10 = get_cop1_cs();
    // 0x8026B05C: nop

    // 0x8026B060: ori         $at, $t2, 0x3
    ctx->r1 = ctx->r10 | 0X3;
    // 0x8026B064: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x8026B068: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x8026B06C: nop

    // 0x8026B070: cvt.w.s     $f10, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    ctx->f10.u32l = CVT_W_S(ctx->f4.fl);
    // 0x8026B074: mfc1        $t5, $f10
    ctx->r13 = (int32_t)ctx->f10.u32l;
    // 0x8026B078: ctc1        $t2, $FpcCsr
    set_cop1_cs(ctx->r10);
    // 0x8026B07C: addu        $t6, $v0, $t5
    ctx->r14 = ADD32(ctx->r2, ctx->r13);
    // 0x8026B080: jal         0x8026AA98
    // 0x8026B084: sh          $t6, 0x30($a0)
    MEM_H(0X30, ctx->r4) = ctx->r14;
    ovl_8024B800_func_8026AA98(rdram, ctx);
        goto after_2;
    // 0x8026B084: sh          $t6, 0x30($a0)
    MEM_H(0X30, ctx->r4) = ctx->r14;
    after_2:
    // 0x8026B088: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8026B08C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8026B090: jr          $ra
    // 0x8026B094: nop

    return;
    // 0x8026B094: nop

;}
RECOMP_FUNC void ovl_8024B800_func_8026AFD0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8026AFD0: mul.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f4.fl, ctx->f6.fl);
    // 0x8026AFD4: lh          $t0, 0x2E($a0)
    ctx->r8 = MEM_H(ctx->r4, 0X2E);
    // 0x8026AFD8: cvt.s.w     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.fl = CVT_S_W(ctx->f10.u32l);
    // 0x8026AFDC: add.s       $f18, $f16, $f8
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f18.fl = ctx->f16.fl + ctx->f8.fl;
    // 0x8026AFE0: cfc1        $t7, $FpcCsr
    ctx->r15 = get_cop1_cs();
    // 0x8026AFE4: nop

    // 0x8026AFE8: ori         $at, $t7, 0x3
    ctx->r1 = ctx->r15 | 0X3;
    // 0x8026AFEC: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x8026AFF0: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x8026AFF4: nop

    // 0x8026AFF8: cvt.w.s     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    ctx->f4.u32l = CVT_W_S(ctx->f18.fl);
    // 0x8026AFFC: mfc1        $v1, $f4
    ctx->r3 = (int32_t)ctx->f4.u32l;
    // 0x8026B000: ctc1        $t7, $FpcCsr
    set_cop1_cs(ctx->r15);
    // 0x8026B004: sll         $t8, $v1, 16
    ctx->r24 = S32(ctx->r3 << 16);
    // 0x8026B008: sra         $t9, $t8, 16
    ctx->r25 = S32(SIGNED(ctx->r24) >> 16);
    // 0x8026B00C: slt         $at, $t9, $t0
    ctx->r1 = SIGNED(ctx->r25) < SIGNED(ctx->r8) ? 1 : 0;
    // 0x8026B010: beq         $at, $zero, L_8026B020
    if (ctx->r1 == 0) {
        // 0x8026B014: nop
    
            goto L_8026B020;
    }
    // 0x8026B014: nop

    // 0x8026B018: lw          $v0, 0xC8($a0)
    ctx->r2 = MEM_W(ctx->r4, 0XC8);
    // 0x8026B01C: sh          $t9, 0x2E($a0)
    MEM_H(0X2E, ctx->r4) = ctx->r25;
L_8026B020:
    // 0x8026B020: lw          $a1, 0x8D4($v0)
    ctx->r5 = MEM_W(ctx->r2, 0X8D4);
    // 0x8026B024: jal         0x8026CB48
    // 0x8026B028: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    ovl_8024B800_func_8026CB48(rdram, ctx);
        goto after_0;
    // 0x8026B028: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x8026B02C: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x8026B030: lui         $t1, 0x8009
    ctx->r9 = S32(0X8009 << 16);
    // 0x8026B034: lh          $v0, 0x30($a0)
    ctx->r2 = MEM_H(ctx->r4, 0X30);
    // 0x8026B038: lw          $t1, 0x3B20($t1)
    ctx->r9 = MEM_W(ctx->r9, 0X3B20);
    // 0x8026B03C: mtc1        $v0, $f10
    ctx->f10.u32l = ctx->r2;
    // 0x8026B040: lwc1        $f6, 0x0($t1)
    ctx->f6.u32l = MEM_W(ctx->r9, 0X0);
    // 0x8026B044: cvt.s.w     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.fl = CVT_S_W(ctx->f10.u32l);
    // 0x8026B048: lui         $at, 0x8028
    ctx->r1 = S32(0X8028 << 16);
    // 0x8026B04C: lwc1        $f18, -0x2AB0($at)
    ctx->f18.u32l = MEM_W(ctx->r1, -0X2AB0);
    // 0x8026B050: sub.s       $f8, $f6, $f16
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f8.fl = ctx->f6.fl - ctx->f16.fl;
    // 0x8026B054: mul.s       $f4, $f8, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = MUL_S(ctx->f8.fl, ctx->f18.fl);
    // 0x8026B058: cfc1        $t2, $FpcCsr
    ctx->r10 = get_cop1_cs();
    // 0x8026B05C: nop

    // 0x8026B060: ori         $at, $t2, 0x3
    ctx->r1 = ctx->r10 | 0X3;
    // 0x8026B064: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x8026B068: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x8026B06C: nop

    // 0x8026B070: cvt.w.s     $f10, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    ctx->f10.u32l = CVT_W_S(ctx->f4.fl);
    // 0x8026B074: mfc1        $t5, $f10
    ctx->r13 = (int32_t)ctx->f10.u32l;
    // 0x8026B078: ctc1        $t2, $FpcCsr
    set_cop1_cs(ctx->r10);
    // 0x8026B07C: addu        $t6, $v0, $t5
    ctx->r14 = ADD32(ctx->r2, ctx->r13);
    // 0x8026B080: jal         0x8026AA98
    // 0x8026B084: sh          $t6, 0x30($a0)
    MEM_H(0X30, ctx->r4) = ctx->r14;
    ovl_8024B800_func_8026AA98(rdram, ctx);
        goto after_1;
    // 0x8026B084: sh          $t6, 0x30($a0)
    MEM_H(0X30, ctx->r4) = ctx->r14;
    after_1:
    // 0x8026B088: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8026B08C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8026B090: jr          $ra
    // 0x8026B094: nop

    return;
    // 0x8026B094: nop

;}
RECOMP_FUNC void ovl_8024B800_func_8026B098(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8026B098: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8026B09C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8026B0A0: jal         0x8026CC18
    // 0x8026B0A4: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    ovl_8024B800_func_8026CC18(rdram, ctx);
        goto after_0;
    // 0x8026B0A4: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x8026B0A8: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x8026B0AC: nop

    // 0x8026B0B0: lw          $v0, 0xC8($a0)
    ctx->r2 = MEM_W(ctx->r4, 0XC8);
    // 0x8026B0B4: lh          $a1, 0x2E($a0)
    ctx->r5 = MEM_H(ctx->r4, 0X2E);
    // 0x8026B0B8: lh          $v1, 0x8B0($v0)
    ctx->r3 = MEM_H(ctx->r2, 0X8B0);
    // 0x8026B0BC: nop

    // 0x8026B0C0: addiu       $v1, $v1, -0x3C
    ctx->r3 = ADD32(ctx->r3, -0X3C);
    // 0x8026B0C4: sll         $t6, $v1, 16
    ctx->r14 = S32(ctx->r3 << 16);
    // 0x8026B0C8: sra         $t7, $t6, 16
    ctx->r15 = S32(SIGNED(ctx->r14) >> 16);
    // 0x8026B0CC: slt         $at, $t7, $a1
    ctx->r1 = SIGNED(ctx->r15) < SIGNED(ctx->r5) ? 1 : 0;
    // 0x8026B0D0: beq         $at, $zero, L_8026B0E8
    if (ctx->r1 == 0) {
        // 0x8026B0D4: nop
    
            goto L_8026B0E8;
    }
    // 0x8026B0D4: nop

    // 0x8026B0D8: sh          $t7, 0x2E($a0)
    MEM_H(0X2E, ctx->r4) = ctx->r15;
    // 0x8026B0DC: lh          $a1, 0x2E($a0)
    ctx->r5 = MEM_H(ctx->r4, 0X2E);
    // 0x8026B0E0: lw          $v0, 0xC8($a0)
    ctx->r2 = MEM_W(ctx->r4, 0XC8);
    // 0x8026B0E4: nop

L_8026B0E8:
    // 0x8026B0E8: lh          $t8, 0x8CC($v0)
    ctx->r24 = MEM_H(ctx->r2, 0X8CC);
    // 0x8026B0EC: lui         $at, 0x4296
    ctx->r1 = S32(0X4296 << 16);
    // 0x8026B0F0: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x8026B0F4: lwc1        $f6, 0x8D8($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0X8D8);
    // 0x8026B0F8: mtc1        $t8, $f10
    ctx->f10.u32l = ctx->r24;
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
        goto after_1;
    // 0x8026B150: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_1:
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
        goto after_2;
    // 0x8026B1AC: sh          $t7, 0x30($a0)
    MEM_H(0X30, ctx->r4) = ctx->r15;
    after_2:
    // 0x8026B1B0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8026B1B4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8026B1B8: jr          $ra
    // 0x8026B1BC: nop

    return;
    // 0x8026B1BC: nop

;}
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
