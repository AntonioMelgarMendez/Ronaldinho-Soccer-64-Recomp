#include "iss64_recomp.h"
#include "funcs.h"

RECOMP_FUNC void func_80028E5C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80028E5C: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x80028E60: subu        $t6, $t6, $a0
    ctx->r14 = SUB32(ctx->r14, ctx->r4);
    // 0x80028E64: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x80028E68: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x80028E6C: addu        $v0, $v0, $t6
    ctx->r2 = ADD32(ctx->r2, ctx->r14);
    // 0x80028E70: lw          $v0, -0x438($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X438);
    // 0x80028E74: jr          $ra
    // 0x80028E78: nop

    return;
    // 0x80028E78: nop

;}
RECOMP_FUNC void func_80028E7C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80028E7C: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x80028E80: lui         $t7, 0x800C
    ctx->r15 = S32(0X800C << 16);
    // 0x80028E84: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80028E88: lw          $t7, 0x4830($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X4830);
    // 0x80028E8C: sra         $t8, $a1, 4
    ctx->r24 = S32(SIGNED(ctx->r5) >> 4);
    // 0x80028E90: sll         $t9, $t8, 2
    ctx->r25 = S32(ctx->r24 << 2);
    // 0x80028E94: addu        $t0, $t7, $t9
    ctx->r8 = ADD32(ctx->r15, ctx->r25);
    // 0x80028E98: lw          $t1, 0x0($t0)
    ctx->r9 = MEM_W(ctx->r8, 0X0);
    // 0x80028E9C: andi        $t3, $a1, 0xF
    ctx->r11 = ctx->r5 & 0XF;
    // 0x80028EA0: sll         $t4, $t3, 5
    ctx->r12 = S32(ctx->r11 << 5);
    // 0x80028EA4: jr          $ra
    // 0x80028EA8: addu        $v0, $t1, $t4
    ctx->r2 = ADD32(ctx->r9, ctx->r12);
    return;
    // 0x80028EA8: addu        $v0, $t1, $t4
    ctx->r2 = ADD32(ctx->r9, ctx->r12);
;}
RECOMP_FUNC void func_80028EAC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80028EAC: sll         $t9, $a0, 24
    ctx->r25 = S32(ctx->r4 << 24);
    // 0x80028EB0: sra         $t0, $t9, 24
    ctx->r8 = S32(SIGNED(ctx->r25) >> 24);
    // 0x80028EB4: mtc1        $t0, $f10
    ctx->f10.u32l = ctx->r8;
    // 0x80028EB8: sll         $t1, $a1, 24
    ctx->r9 = S32(ctx->r5 << 24);
    // 0x80028EBC: cvt.s.w     $f14, $f10
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 10);
    ctx->f14.fl = CVT_S_W(ctx->f10.u32l);
    // 0x80028EC0: sra         $t2, $t1, 24
    ctx->r10 = S32(SIGNED(ctx->r9) >> 24);
    // 0x80028EC4: mtc1        $t2, $f10
    ctx->f10.u32l = ctx->r10;
    // 0x80028EC8: mul.s       $f8, $f14, $f14
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f8.fl = MUL_S(ctx->f14.fl, ctx->f14.fl);
    // 0x80028ECC: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x80028ED0: sll         $t3, $a2, 24
    ctx->r11 = S32(ctx->r6 << 24);
    // 0x80028ED4: sra         $t4, $t3, 24
    ctx->r12 = S32(SIGNED(ctx->r11) >> 24);
    // 0x80028ED8: cvt.s.w     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.fl = CVT_S_W(ctx->f10.u32l);
    // 0x80028EDC: mtc1        $t4, $f10
    ctx->f10.u32l = ctx->r12;
    // 0x80028EE0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80028EE4: mul.s       $f6, $f16, $f16
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f6.fl = MUL_S(ctx->f16.fl, ctx->f16.fl);
    // 0x80028EE8: sw          $a0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r4;
    // 0x80028EEC: sw          $a1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r5;
    // 0x80028EF0: sw          $a2, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r6;
    // 0x80028EF4: cvt.s.w     $f18, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    ctx->f18.fl = CVT_S_W(ctx->f10.u32l);
    // 0x80028EF8: swc1        $f14, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f14.u32l;
    // 0x80028EFC: swc1        $f16, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f16.u32l;
    // 0x80028F00: mul.s       $f10, $f18, $f18
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f10.fl = MUL_S(ctx->f18.fl, ctx->f18.fl);
    // 0x80028F04: add.s       $f6, $f8, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f6.fl = ctx->f8.fl + ctx->f6.fl;
    // 0x80028F08: swc1        $f18, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f18.u32l;
    // 0x80028F0C: jal         0x8007FA40
    // 0x80028F10: add.s       $f12, $f6, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f12.fl = ctx->f6.fl + ctx->f10.fl;
    func_8007FA40(rdram, ctx);
        goto after_0;
    // 0x80028F10: add.s       $f12, $f6, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f12.fl = ctx->f6.fl + ctx->f10.fl;
    after_0:
    // 0x80028F14: lwc1        $f14, 0x24($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X24);
    // 0x80028F18: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x80028F1C: div.s       $f10, $f14, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f10.fl = DIV_S(ctx->f14.fl, ctx->f0.fl);
    // 0x80028F20: lwc1        $f3, 0x3DB0($at)
    ctx->f_odd[(3 - 1) * 2] = MEM_W(ctx->r1, 0X3DB0);
    // 0x80028F24: lwc1        $f2, 0x3DB4($at)
    ctx->f2.u32l = MEM_W(ctx->r1, 0X3DB4);
    // 0x80028F28: lwc1        $f16, 0x20($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X20);
    // 0x80028F2C: lwc1        $f18, 0x1C($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x80028F30: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80028F34: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    // 0x80028F38: cvt.d.s     $f4, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.fl); 
    ctx->f4.d = CVT_D_S(ctx->f10.fl);
    // 0x80028F3C: mul.d       $f6, $f4, $f2
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f2.d); 
    ctx->f6.d = MUL_D(ctx->f4.d, ctx->f2.d);
    // 0x80028F40: cfc1        $t5, $FpcCsr
    ctx->r13 = get_cop1_cs();
    // 0x80028F44: nop

    // 0x80028F48: ori         $at, $t5, 0x3
    ctx->r1 = ctx->r13 | 0X3;
    // 0x80028F4C: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x80028F50: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x80028F54: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x80028F58: cvt.w.d     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.u32l = CVT_W_D(ctx->f6.d);
    // 0x80028F5C: ctc1        $t5, $FpcCsr
    set_cop1_cs(ctx->r13);
    // 0x80028F60: mfc1        $t6, $f8
    ctx->r14 = (int32_t)ctx->f8.u32l;
    // 0x80028F64: div.s       $f10, $f16, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f10.fl = DIV_S(ctx->f16.fl, ctx->f0.fl);
    // 0x80028F68: sb          $t6, 0x6CF0($at)
    MEM_B(0X6CF0, ctx->r1) = ctx->r14;
    // 0x80028F6C: cvt.d.s     $f4, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.fl); 
    ctx->f4.d = CVT_D_S(ctx->f10.fl);
    // 0x80028F70: mul.d       $f6, $f4, $f2
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f2.d); 
    ctx->f6.d = MUL_D(ctx->f4.d, ctx->f2.d);
    // 0x80028F74: cfc1        $t7, $FpcCsr
    ctx->r15 = get_cop1_cs();
    // 0x80028F78: nop

    // 0x80028F7C: ori         $at, $t7, 0x3
    ctx->r1 = ctx->r15 | 0X3;
    // 0x80028F80: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x80028F84: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x80028F88: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x80028F8C: cvt.w.d     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.u32l = CVT_W_D(ctx->f6.d);
    // 0x80028F90: ctc1        $t7, $FpcCsr
    set_cop1_cs(ctx->r15);
    // 0x80028F94: mfc1        $t8, $f8
    ctx->r24 = (int32_t)ctx->f8.u32l;
    // 0x80028F98: div.s       $f10, $f18, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f10.fl = DIV_S(ctx->f18.fl, ctx->f0.fl);
    // 0x80028F9C: sb          $t8, 0x6CF1($at)
    MEM_B(0X6CF1, ctx->r1) = ctx->r24;
    // 0x80028FA0: cvt.d.s     $f4, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.fl); 
    ctx->f4.d = CVT_D_S(ctx->f10.fl);
    // 0x80028FA4: mul.d       $f6, $f4, $f2
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f2.d); 
    ctx->f6.d = MUL_D(ctx->f4.d, ctx->f2.d);
    // 0x80028FA8: cfc1        $t9, $FpcCsr
    ctx->r25 = get_cop1_cs();
    // 0x80028FAC: nop

    // 0x80028FB0: ori         $at, $t9, 0x3
    ctx->r1 = ctx->r25 | 0X3;
    // 0x80028FB4: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x80028FB8: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x80028FBC: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x80028FC0: cvt.w.d     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.u32l = CVT_W_D(ctx->f6.d);
    // 0x80028FC4: mfc1        $t0, $f8
    ctx->r8 = (int32_t)ctx->f8.u32l;
    // 0x80028FC8: ctc1        $t9, $FpcCsr
    set_cop1_cs(ctx->r25);
    // 0x80028FCC: jr          $ra
    // 0x80028FD0: sb          $t0, 0x6CF2($at)
    MEM_B(0X6CF2, ctx->r1) = ctx->r8;
    return;
    // 0x80028FD0: sb          $t0, 0x6CF2($at)
    MEM_B(0X6CF2, ctx->r1) = ctx->r8;
;}
RECOMP_FUNC void func_80028FD4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80028FD4: mul.s       $f4, $f12, $f12
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f4.fl = MUL_S(ctx->f12.fl, ctx->f12.fl);
    // 0x80028FD8: addiu       $sp, $sp, -0x98
    ctx->r29 = ADD32(ctx->r29, -0X98);
    // 0x80028FDC: swc1        $f22, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f22.u32l;
    // 0x80028FE0: mtc1        $a2, $f22
    ctx->f22.u32l = ctx->r6;
    // 0x80028FE4: mul.s       $f6, $f14, $f14
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f6.fl = MUL_S(ctx->f14.fl, ctx->f14.fl);
    // 0x80028FE8: swc1        $f24, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->f24.u32l;
    // 0x80028FEC: swc1        $f21, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x80028FF0: swc1        $f20, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f20.u32l;
    // 0x80028FF4: mul.s       $f10, $f22, $f22
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f22.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f10.fl = MUL_S(ctx->f22.fl, ctx->f22.fl);
    // 0x80028FF8: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x80028FFC: mtc1        $a3, $f24
    ctx->f24.u32l = ctx->r7;
    // 0x80029000: sw          $ra, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r31;
    // 0x80029004: mov.s       $f20, $f12
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 12);
    ctx->f20.fl = ctx->f12.fl;
    // 0x80029008: swc1        $f25, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->f_odd[(25 - 1) * 2];
    // 0x8002900C: swc1        $f23, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f_odd[(23 - 1) * 2];
    // 0x80029010: add.s       $f12, $f8, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f12.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x80029014: jal         0x8007FA40
    // 0x80029018: swc1        $f14, 0x9C($sp)
    MEM_W(0X9C, ctx->r29) = ctx->f14.u32l;
    func_8007FA40(rdram, ctx);
        goto after_0;
    // 0x80029018: swc1        $f14, 0x9C($sp)
    MEM_W(0X9C, ctx->r29) = ctx->f14.u32l;
    after_0:
    // 0x8002901C: lwc1        $f14, 0x9C($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X9C);
    // 0x80029020: mul.s       $f18, $f24, $f24
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f24.fl); NAN_CHECK(ctx->f24.fl); 
    ctx->f18.fl = MUL_S(ctx->f24.fl, ctx->f24.fl);
    // 0x80029024: nop

    // 0x80029028: div.s       $f14, $f14, $f0
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f14.fl = DIV_S(ctx->f14.fl, ctx->f0.fl);
    // 0x8002902C: lwc1        $f2, 0xA8($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0XA8);
    // 0x80029030: lwc1        $f16, 0xAC($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0XAC);
    // 0x80029034: mul.s       $f4, $f2, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f4.fl = MUL_S(ctx->f2.fl, ctx->f2.fl);
    // 0x80029038: add.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f18.fl + ctx->f4.fl;
    // 0x8002903C: mul.s       $f8, $f16, $f16
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f8.fl = MUL_S(ctx->f16.fl, ctx->f16.fl);
    // 0x80029040: nop

    // 0x80029044: div.s       $f20, $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f20.fl = DIV_S(ctx->f20.fl, ctx->f0.fl);
    // 0x80029048: swc1        $f14, 0x9C($sp)
    MEM_W(0X9C, ctx->r29) = ctx->f14.u32l;
    // 0x8002904C: add.s       $f12, $f6, $f8
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f12.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x80029050: jal         0x8007FA40
    // 0x80029054: div.s       $f22, $f22, $f0
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f22.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f22.fl = DIV_S(ctx->f22.fl, ctx->f0.fl);
    func_8007FA40(rdram, ctx);
        goto after_1;
    // 0x80029054: div.s       $f22, $f22, $f0
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f22.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f22.fl = DIV_S(ctx->f22.fl, ctx->f0.fl);
    after_1:
    // 0x80029058: lwc1        $f2, 0xA8($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0XA8);
    // 0x8002905C: lwc1        $f16, 0xAC($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0XAC);
    // 0x80029060: div.s       $f24, $f24, $f0
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f24.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f24.fl = DIV_S(ctx->f24.fl, ctx->f0.fl);
    // 0x80029064: mtc1        $zero, $f12
    ctx->f12.u32l = 0;
    // 0x80029068: lwc1        $f14, 0x9C($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X9C);
    // 0x8002906C: lui         $a1, 0x801B
    ctx->r5 = S32(0X801B << 16);
    // 0x80029070: mfc1        $a2, $f12
    ctx->r6 = (int32_t)ctx->f12.u32l;
    // 0x80029074: mfc1        $a3, $f12
    ctx->r7 = (int32_t)ctx->f12.u32l;
    // 0x80029078: addiu       $a1, $a1, -0x820
    ctx->r5 = ADD32(ctx->r5, -0X820);
    // 0x8002907C: addiu       $a0, $sp, 0x50
    ctx->r4 = ADD32(ctx->r29, 0X50);
    // 0x80029080: swc1        $f20, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f20.u32l;
    // 0x80029084: swc1        $f22, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f22.u32l;
    // 0x80029088: swc1        $f12, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f12.u32l;
    // 0x8002908C: swc1        $f14, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f14.u32l;
    // 0x80029090: div.s       $f2, $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = DIV_S(ctx->f2.fl, ctx->f0.fl);
    // 0x80029094: swc1        $f24, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f24.u32l;
    // 0x80029098: div.s       $f16, $f16, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f16.fl = DIV_S(ctx->f16.fl, ctx->f0.fl);
    // 0x8002909C: swc1        $f2, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f2.u32l;
    // 0x800290A0: jal         0x800815F0
    // 0x800290A4: swc1        $f16, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f16.u32l;
    func_800815F0(rdram, ctx);
        goto after_2;
    // 0x800290A4: swc1        $f16, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f16.u32l;
    after_2:
    // 0x800290A8: lw          $ra, 0x4C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X4C);
    // 0x800290AC: lwc1        $f21, 0x30($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X30);
    // 0x800290B0: lwc1        $f20, 0x34($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X34);
    // 0x800290B4: lwc1        $f23, 0x38($sp)
    ctx->f_odd[(23 - 1) * 2] = MEM_W(ctx->r29, 0X38);
    // 0x800290B8: lwc1        $f22, 0x3C($sp)
    ctx->f22.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x800290BC: lwc1        $f25, 0x40($sp)
    ctx->f_odd[(25 - 1) * 2] = MEM_W(ctx->r29, 0X40);
    // 0x800290C0: lwc1        $f24, 0x44($sp)
    ctx->f24.u32l = MEM_W(ctx->r29, 0X44);
    // 0x800290C4: jr          $ra
    // 0x800290C8: addiu       $sp, $sp, 0x98
    ctx->r29 = ADD32(ctx->r29, 0X98);
    return;
    // 0x800290C8: addiu       $sp, $sp, 0x98
    ctx->r29 = ADD32(ctx->r29, 0X98);
;}
RECOMP_FUNC void func_800290CC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800290CC: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x800290D0: jr          $ra
    // 0x800290D4: swc1        $f12, -0x800($at)
    MEM_W(-0X800, ctx->r1) = ctx->f12.u32l;
    return;
    // 0x800290D4: swc1        $f12, -0x800($at)
    MEM_W(-0X800, ctx->r1) = ctx->f12.u32l;
    // 0x800290D8: nop

    // 0x800290DC: nop

;}
RECOMP_FUNC void func_800290E0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800290E0: lui         $v0, 0x800A
    ctx->r2 = S32(0X800A << 16);
    // 0x800290E4: lw          $v0, 0x6DF0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X6DF0);
    // 0x800290E8: nop

    // 0x800290EC: beq         $v0, $zero, L_80029104
    if (ctx->r2 == 0) {
        // 0x800290F0: nop
    
            goto L_80029104;
    }
    // 0x800290F0: nop

L_800290F4:
    // 0x800290F4: lw          $v0, 0x0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X0);
    // 0x800290F8: nop

    // 0x800290FC: bne         $v0, $zero, L_800290F4
    if (ctx->r2 != 0) {
        // 0x80029100: nop
    
            goto L_800290F4;
    }
    // 0x80029100: nop

L_80029104:
    // 0x80029104: jr          $ra
    // 0x80029108: nop

    return;
    // 0x80029108: nop

;}
RECOMP_FUNC void func_8002910C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8002910C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80029110: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x80029114: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x80029118: lui         $t6, 0x800A
    ctx->r14 = S32(0X800A << 16);
    // 0x8002911C: lw          $s0, 0x6DF0($t6)
    ctx->r16 = MEM_W(ctx->r14, 0X6DF0);
    // 0x80029120: lui         $s1, 0x801B
    ctx->r17 = S32(0X801B << 16);
    // 0x80029124: addiu       $s1, $s1, 0x1CF0
    ctx->r17 = ADD32(ctx->r17, 0X1CF0);
    // 0x80029128: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8002912C: sw          $s0, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->r16;
L_80029130:
    // 0x80029130: lw          $t9, 0xC($s0)
    ctx->r25 = MEM_W(ctx->r16, 0XC);
    // 0x80029134: lw          $a1, 0x14($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X14);
    // 0x80029138: jalr        $t9
    // 0x8002913C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x8002913C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_0:
    // 0x80029140: lw          $t7, 0x0($s1)
    ctx->r15 = MEM_W(ctx->r17, 0X0);
    // 0x80029144: nop

    // 0x80029148: lw          $s0, 0x0($t7)
    ctx->r16 = MEM_W(ctx->r15, 0X0);
    // 0x8002914C: nop

    // 0x80029150: bne         $s0, $zero, L_80029130
    if (ctx->r16 != 0) {
        // 0x80029154: sw          $s0, 0x0($s1)
        MEM_W(0X0, ctx->r17) = ctx->r16;
            goto L_80029130;
    }
    // 0x80029154: sw          $s0, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->r16;
    // 0x80029158: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8002915C: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x80029160: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x80029164: jr          $ra
    // 0x80029168: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x80029168: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_8002916C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8002916C: lui         $v1, 0x800A
    ctx->r3 = S32(0X800A << 16);
    // 0x80029170: addiu       $v1, $v1, 0x6DF0
    ctx->r3 = ADD32(ctx->r3, 0X6DF0);
    // 0x80029174: lw          $t6, 0x0($v1)
    ctx->r14 = MEM_W(ctx->r3, 0X0);
    // 0x80029178: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x8002917C: lui         $t7, 0x801B
    ctx->r15 = S32(0X801B << 16);
    // 0x80029180: sw          $t6, 0x1CF0($at)
    MEM_W(0X1CF0, ctx->r1) = ctx->r14;
    // 0x80029184: addiu       $t7, $t7, -0x6DC
    ctx->r15 = ADD32(ctx->r15, -0X6DC);
    // 0x80029188: lui         $a2, 0x8003
    ctx->r6 = S32(0X8003 << 16);
    // 0x8002918C: lui         $a3, 0x801B
    ctx->r7 = S32(0X801B << 16);
    // 0x80029190: sw          $t7, 0x8($v1)
    MEM_W(0X8, ctx->r3) = ctx->r15;
    // 0x80029194: sh          $zero, 0xC($v1)
    MEM_H(0XC, ctx->r3) = 0;
    // 0x80029198: addiu       $a3, $a3, -0x750
    ctx->r7 = ADD32(ctx->r7, -0X750);
    // 0x8002919C: addiu       $a2, $a2, -0x6610
    ctx->r6 = ADD32(ctx->r6, -0X6610);
    // 0x800291A0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x800291A4: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x800291A8: addiu       $t2, $zero, -0x1
    ctx->r10 = ADD32(0, -0X1);
    // 0x800291AC: addiu       $t1, $zero, 0x74
    ctx->r9 = ADD32(0, 0X74);
    // 0x800291B0: addiu       $t0, $zero, 0x74
    ctx->r8 = ADD32(0, 0X74);
L_800291B4:
    // 0x800291B4: multu       $v0, $t0
    result = U64(U32(ctx->r2)) * U64(U32(ctx->r8)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x800291B8: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x800291BC: mflo        $t8
    ctx->r24 = lo;
    // 0x800291C0: addu        $v1, $a3, $t8
    ctx->r3 = ADD32(ctx->r7, ctx->r24);
    // 0x800291C4: sh          $zero, 0x1C($v1)
    MEM_H(0X1C, ctx->r3) = 0;
    // 0x800291C8: multu       $a1, $t1
    result = U64(U32(ctx->r5)) * U64(U32(ctx->r9)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x800291CC: andi        $a1, $v0, 0xFFFF
    ctx->r5 = ctx->r2 & 0XFFFF;
    // 0x800291D0: slti        $at, $a1, 0x50
    ctx->r1 = SIGNED(ctx->r5) < 0X50 ? 1 : 0;
    // 0x800291D4: or          $v0, $a1, $zero
    ctx->r2 = ctx->r5 | 0;
    // 0x800291D8: sw          $a2, 0xC($v1)
    MEM_W(0XC, ctx->r3) = ctx->r6;
    // 0x800291DC: sw          $t2, 0x14($v1)
    MEM_W(0X14, ctx->r3) = ctx->r10;
    // 0x800291E0: sw          $t2, 0x18($v1)
    MEM_W(0X18, ctx->r3) = ctx->r10;
    // 0x800291E4: mflo        $t9
    ctx->r25 = lo;
    // 0x800291E8: addu        $t3, $a3, $t9
    ctx->r11 = ADD32(ctx->r7, ctx->r25);
    // 0x800291EC: addiu       $t4, $t3, 0x74
    ctx->r12 = ADD32(ctx->r11, 0X74);
    // 0x800291F0: bne         $at, $zero, L_800291B4
    if (ctx->r1 != 0) {
        // 0x800291F4: sw          $t4, 0x0($v1)
        MEM_W(0X0, ctx->r3) = ctx->r12;
            goto L_800291B4;
    }
    // 0x800291F4: sw          $t4, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r12;
    // 0x800291F8: sh          $zero, 0x1C($a3)
    MEM_H(0X1C, ctx->r7) = 0;
    // 0x800291FC: sw          $zero, 0x0($a3)
    MEM_W(0X0, ctx->r7) = 0;
    // 0x80029200: sw          $a3, 0x4($a3)
    MEM_W(0X4, ctx->r7) = ctx->r7;
    // 0x80029204: sw          $a0, 0xC($a3)
    MEM_W(0XC, ctx->r7) = ctx->r4;
    // 0x80029208: sh          $zero, 0x1E($a3)
    MEM_H(0X1E, ctx->r7) = 0;
    // 0x8002920C: sw          $t2, 0x14($a3)
    MEM_W(0X14, ctx->r7) = ctx->r10;
    // 0x80029210: sw          $t2, 0x18($a3)
    MEM_W(0X18, ctx->r7) = ctx->r10;
    // 0x80029214: sh          $zero, 0x23E8($a3)
    MEM_H(0X23E8, ctx->r7) = 0;
    // 0x80029218: jr          $ra
    // 0x8002921C: sw          $zero, 0x23CC($a3)
    MEM_W(0X23CC, ctx->r7) = 0;
    return;
    // 0x8002921C: sw          $zero, 0x23CC($a3)
    MEM_W(0X23CC, ctx->r7) = 0;
;}
RECOMP_FUNC void func_80029220(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80029220: or          $a1, $a0, $zero
    ctx->r5 = ctx->r4 | 0;
    // 0x80029224: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80029228: lui         $a0, 0x801B
    ctx->r4 = S32(0X801B << 16);
    // 0x8002922C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80029230: lw          $a0, 0x1CF0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X1CF0);
    // 0x80029234: jal         0x8002924C
    // 0x80029238: nop

    func_8002924C(rdram, ctx);
        goto after_0;
    // 0x80029238: nop

    after_0:
    // 0x8002923C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80029240: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80029244: jr          $ra
    // 0x80029248: nop

    return;
    // 0x80029248: nop

;}
RECOMP_FUNC void func_8002924C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8002924C: lui         $t0, 0x800A
    ctx->r8 = S32(0X800A << 16);
    // 0x80029250: addiu       $t0, $t0, 0x6DF0
    ctx->r8 = ADD32(ctx->r8, 0X6DF0);
    // 0x80029254: lw          $v1, 0x8($t0)
    ctx->r3 = MEM_W(ctx->r8, 0X8);
    // 0x80029258: or          $a2, $a0, $zero
    ctx->r6 = ctx->r4 | 0;
    // 0x8002925C: beq         $v1, $zero, L_80029310
    if (ctx->r3 == 0) {
        // 0x80029260: or          $a3, $a1, $zero
        ctx->r7 = ctx->r5 | 0;
            goto L_80029310;
    }
    // 0x80029260: or          $a3, $a1, $zero
    ctx->r7 = ctx->r5 | 0;
    // 0x80029264: lhu         $t6, 0xC($t0)
    ctx->r14 = MEM_HU(ctx->r8, 0XC);
    // 0x80029268: nop

    // 0x8002926C: addiu       $t7, $t6, 0x1
    ctx->r15 = ADD32(ctx->r14, 0X1);
    // 0x80029270: sh          $t7, 0xC($t0)
    MEM_H(0XC, ctx->r8) = ctx->r15;
    // 0x80029274: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x80029278: nop

    // 0x8002927C: beq         $v0, $zero, L_8002928C
    if (ctx->r2 == 0) {
        // 0x80029280: or          $a0, $v0, $zero
        ctx->r4 = ctx->r2 | 0;
            goto L_8002928C;
    }
    // 0x80029280: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x80029284: b           L_80029294
    // 0x80029288: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
        goto L_80029294;
    // 0x80029288: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
L_8002928C:
    // 0x8002928C: lw          $a1, 0x0($t0)
    ctx->r5 = MEM_W(ctx->r8, 0X0);
    // 0x80029290: nop

L_80029294:
    // 0x80029294: sw          $v1, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r3;
    // 0x80029298: lw          $t8, 0x8($t0)
    ctx->r24 = MEM_W(ctx->r8, 0X8);
    // 0x8002929C: nop

    // 0x800292A0: lw          $t9, 0x0($t8)
    ctx->r25 = MEM_W(ctx->r24, 0X0);
    // 0x800292A4: nop

    // 0x800292A8: sw          $t9, 0x8($t0)
    MEM_W(0X8, ctx->r8) = ctx->r25;
    // 0x800292AC: lw          $t1, 0x0($a2)
    ctx->r9 = MEM_W(ctx->r6, 0X0);
    // 0x800292B0: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x800292B4: sw          $a0, 0x0($t1)
    MEM_W(0X0, ctx->r9) = ctx->r4;
    // 0x800292B8: lw          $t2, 0x0($a2)
    ctx->r10 = MEM_W(ctx->r6, 0X0);
    // 0x800292BC: nop

    // 0x800292C0: sw          $a2, 0x4($t2)
    MEM_W(0X4, ctx->r10) = ctx->r6;
    // 0x800292C4: lw          $t3, 0x0($a2)
    ctx->r11 = MEM_W(ctx->r6, 0X0);
    // 0x800292C8: nop

    // 0x800292CC: sw          $t3, 0x4($a1)
    MEM_W(0X4, ctx->r5) = ctx->r11;
    // 0x800292D0: lhu         $t4, 0x1C($a2)
    ctx->r12 = MEM_HU(ctx->r6, 0X1C);
    // 0x800292D4: lw          $t6, 0x0($a2)
    ctx->r14 = MEM_W(ctx->r6, 0X0);
    // 0x800292D8: addiu       $t5, $t4, 0x1
    ctx->r13 = ADD32(ctx->r12, 0X1);
    // 0x800292DC: sh          $t5, 0x1C($t6)
    MEM_H(0X1C, ctx->r14) = ctx->r13;
    // 0x800292E0: lw          $t7, 0x0($a2)
    ctx->r15 = MEM_W(ctx->r6, 0X0);
    // 0x800292E4: nop

    // 0x800292E8: sw          $a3, 0xC($t7)
    MEM_W(0XC, ctx->r15) = ctx->r7;
    // 0x800292EC: lw          $t8, 0x0($a2)
    ctx->r24 = MEM_W(ctx->r6, 0X0);
    // 0x800292F0: nop

    // 0x800292F4: sw          $a2, 0x8($t8)
    MEM_W(0X8, ctx->r24) = ctx->r6;
    // 0x800292F8: lw          $t1, 0x0($a2)
    ctx->r9 = MEM_W(ctx->r6, 0X0);
    // 0x800292FC: nop

    // 0x80029300: sh          $t9, 0x1E($t1)
    MEM_H(0X1E, ctx->r9) = ctx->r25;
    // 0x80029304: lw          $v0, 0x0($a2)
    ctx->r2 = MEM_W(ctx->r6, 0X0);
    // 0x80029308: jr          $ra
    // 0x8002930C: nop

    return;
    // 0x8002930C: nop

L_80029310:
    // 0x80029310: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x80029314: jr          $ra
    // 0x80029318: nop

    return;
    // 0x80029318: nop

;}
RECOMP_FUNC void func_8002931C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8002931C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80029320: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80029324: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x80029328: jal         0x80029220
    // 0x8002932C: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    func_80029220(rdram, ctx);
        goto after_0;
    // 0x8002932C: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    after_0:
    // 0x80029330: lw          $a1, 0x20($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X20);
    // 0x80029334: lh          $a2, 0x26($sp)
    ctx->r6 = MEM_H(ctx->r29, 0X26);
    // 0x80029338: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    // 0x8002933C: jal         0x80029864
    // 0x80029340: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    func_80029864(rdram, ctx);
        goto after_1;
    // 0x80029340: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    after_1:
    // 0x80029344: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80029348: lw          $v0, 0x1C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X1C);
    // 0x8002934C: jr          $ra
    // 0x80029350: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x80029350: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_80029354(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80029354: or          $a1, $a0, $zero
    ctx->r5 = ctx->r4 | 0;
    // 0x80029358: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8002935C: lui         $a0, 0x801B
    ctx->r4 = S32(0X801B << 16);
    // 0x80029360: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80029364: lw          $a0, 0x1CF0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X1CF0);
    // 0x80029368: jal         0x80029380
    // 0x8002936C: nop

    func_80029380(rdram, ctx);
        goto after_0;
    // 0x8002936C: nop

    after_0:
    // 0x80029370: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80029374: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80029378: jr          $ra
    // 0x8002937C: nop

    return;
    // 0x8002937C: nop

;}
RECOMP_FUNC void func_80029380(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80029380: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80029384: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80029388: jal         0x8002924C
    // 0x8002938C: nop

    func_8002924C(rdram, ctx);
        goto after_0;
    // 0x8002938C: nop

    after_0:
    // 0x80029390: bne         $v0, $zero, L_800293A0
    if (ctx->r2 != 0) {
        // 0x80029394: or          $a0, $v0, $zero
        ctx->r4 = ctx->r2 | 0;
            goto L_800293A0;
    }
    // 0x80029394: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x80029398: b           L_800293CC
    // 0x8002939C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_800293CC;
    // 0x8002939C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_800293A0:
    // 0x800293A0: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x800293A4: jal         0x80029D84
    // 0x800293A8: sw          $a0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r4;
    func_80029D84(rdram, ctx);
        goto after_1;
    // 0x800293A8: sw          $a0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r4;
    after_1:
    // 0x800293AC: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    // 0x800293B0: bne         $v0, $zero, L_800293CC
    if (ctx->r2 != 0) {
        // 0x800293B4: or          $v0, $a0, $zero
        ctx->r2 = ctx->r4 | 0;
            goto L_800293CC;
    }
    // 0x800293B4: or          $v0, $a0, $zero
    ctx->r2 = ctx->r4 | 0;
    // 0x800293B8: jal         0x8002959C
    // 0x800293BC: nop

    func_8002959C(rdram, ctx);
        goto after_2;
    // 0x800293BC: nop

    after_2:
    // 0x800293C0: b           L_800293CC
    // 0x800293C4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_800293CC;
    // 0x800293C4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x800293C8: or          $v0, $a0, $zero
    ctx->r2 = ctx->r4 | 0;
L_800293CC:
    // 0x800293CC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800293D0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x800293D4: jr          $ra
    // 0x800293D8: nop

    return;
    // 0x800293D8: nop

;}
RECOMP_FUNC void func_800293DC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800293DC: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x800293E0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800293E4: jal         0x80029354
    // 0x800293E8: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    func_80029354(rdram, ctx);
        goto after_0;
    // 0x800293E8: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    after_0:
    // 0x800293EC: lbu         $a1, 0x27($sp)
    ctx->r5 = MEM_BU(ctx->r29, 0X27);
    // 0x800293F0: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    // 0x800293F4: jal         0x80029F00
    // 0x800293F8: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    func_80029F00(rdram, ctx);
        goto after_1;
    // 0x800293F8: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    after_1:
    // 0x800293FC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80029400: lw          $v0, 0x18($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X18);
    // 0x80029404: jr          $ra
    // 0x80029408: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x80029408: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_8002940C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8002940C: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x80029410: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x80029414: sw          $s4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r20;
    // 0x80029418: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x8002941C: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x80029420: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x80029424: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80029428: lw          $a1, 0x0($a0)
    ctx->r5 = MEM_W(ctx->r4, 0X0);
    // 0x8002942C: or          $s4, $a0, $zero
    ctx->r20 = ctx->r4 | 0;
    // 0x80029430: beq         $a1, $zero, L_800294DC
    if (ctx->r5 == 0) {
        // 0x80029434: lw          $ra, 0x2C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X2C);
            goto L_800294DC;
    }
    // 0x80029434: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x80029438: sw          $a1, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r5;
    // 0x8002943C: lhu         $s2, 0x1C($a0)
    ctx->r18 = MEM_HU(ctx->r4, 0X1C);
    // 0x80029440: lhu         $t6, 0x1C($a1)
    ctx->r14 = MEM_HU(ctx->r5, 0X1C);
    // 0x80029444: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x80029448: slt         $at, $s2, $t6
    ctx->r1 = SIGNED(ctx->r18) < SIGNED(ctx->r14) ? 1 : 0;
    // 0x8002944C: beq         $at, $zero, L_800294D8
    if (ctx->r1 == 0) {
        // 0x80029450: lui         $s3, 0x8003
        ctx->r19 = S32(0X8003 << 16);
            goto L_800294D8;
    }
    // 0x80029450: lui         $s3, 0x8003
    ctx->r19 = S32(0X8003 << 16);
    // 0x80029454: lui         $s1, 0x800A
    ctx->r17 = S32(0X800A << 16);
    // 0x80029458: addiu       $s1, $s1, 0x6DF0
    ctx->r17 = ADD32(ctx->r17, 0X6DF0);
    // 0x8002945C: addiu       $s3, $s3, -0x6610
    ctx->r19 = ADD32(ctx->r19, -0X6610);
L_80029460:
    // 0x80029460: lhu         $t7, 0xC($s1)
    ctx->r15 = MEM_HU(ctx->r17, 0XC);
    // 0x80029464: nop

    // 0x80029468: addiu       $t8, $t7, -0x1
    ctx->r24 = ADD32(ctx->r15, -0X1);
    // 0x8002946C: sh          $t8, 0xC($s1)
    MEM_H(0XC, ctx->r17) = ctx->r24;
    // 0x80029470: lw          $s0, 0x0($s0)
    ctx->r16 = MEM_W(ctx->r16, 0X0);
    // 0x80029474: jal         0x80029690
    // 0x80029478: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80029690(rdram, ctx);
        goto after_0;
    // 0x80029478: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_0:
    // 0x8002947C: lw          $v1, 0x0($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X0);
    // 0x80029480: sw          $s3, 0xC($s0)
    MEM_W(0XC, ctx->r16) = ctx->r19;
    // 0x80029484: beq         $v1, $zero, L_80029494
    if (ctx->r3 == 0) {
        // 0x80029488: sw          $zero, 0x4($s0)
        MEM_W(0X4, ctx->r16) = 0;
            goto L_80029494;
    }
    // 0x80029488: sw          $zero, 0x4($s0)
    MEM_W(0X4, ctx->r16) = 0;
    // 0x8002948C: b           L_8002949C
    // 0x80029490: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
        goto L_8002949C;
    // 0x80029490: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
L_80029494:
    // 0x80029494: lw          $v0, 0x0($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X0);
    // 0x80029498: nop

L_8002949C:
    // 0x8002949C: lhu         $t9, 0x1C($v0)
    ctx->r25 = MEM_HU(ctx->r2, 0X1C);
    // 0x800294A0: nop

    // 0x800294A4: slt         $at, $s2, $t9
    ctx->r1 = SIGNED(ctx->r18) < SIGNED(ctx->r25) ? 1 : 0;
    // 0x800294A8: bne         $at, $zero, L_80029460
    if (ctx->r1 != 0) {
        // 0x800294AC: nop
    
            goto L_80029460;
    }
    // 0x800294AC: nop

    // 0x800294B0: sw          $s4, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r20;
    // 0x800294B4: lw          $t0, 0x0($s0)
    ctx->r8 = MEM_W(ctx->r16, 0X0);
    // 0x800294B8: nop

    // 0x800294BC: sw          $t0, 0x0($s4)
    MEM_W(0X0, ctx->r20) = ctx->r8;
    // 0x800294C0: lw          $t1, 0x8($s1)
    ctx->r9 = MEM_W(ctx->r17, 0X8);
    // 0x800294C4: nop

    // 0x800294C8: sw          $t1, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r9;
    // 0x800294CC: lw          $t2, 0x30($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X30);
    // 0x800294D0: nop

    // 0x800294D4: sw          $t2, 0x8($s1)
    MEM_W(0X8, ctx->r17) = ctx->r10;
L_800294D8:
    // 0x800294D8: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
L_800294DC:
    // 0x800294DC: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x800294E0: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x800294E4: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x800294E8: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x800294EC: lw          $s4, 0x28($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X28);
    // 0x800294F0: jr          $ra
    // 0x800294F4: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    return;
    // 0x800294F4: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_800294F8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800294F8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800294FC: lui         $a0, 0x801B
    ctx->r4 = S32(0X801B << 16);
    // 0x80029500: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80029504: lw          $a0, 0x1CF0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X1CF0);
    // 0x80029508: jal         0x8002959C
    // 0x8002950C: nop

    func_8002959C(rdram, ctx);
        goto after_0;
    // 0x8002950C: nop

    after_0:
    // 0x80029510: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80029514: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80029518: jr          $ra
    // 0x8002951C: nop

    return;
    // 0x8002951C: nop

;}
RECOMP_FUNC void func_80029520(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80029520: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80029524: lui         $a0, 0x801B
    ctx->r4 = S32(0X801B << 16);
    // 0x80029528: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8002952C: lw          $a0, 0x1CF0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X1CF0);
    // 0x80029530: jal         0x8002940C
    // 0x80029534: nop

    func_8002940C(rdram, ctx);
        goto after_0;
    // 0x80029534: nop

    after_0:
    // 0x80029538: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8002953C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80029540: jr          $ra
    // 0x80029544: nop

    return;
    // 0x80029544: nop

;}
RECOMP_FUNC void func_80029548(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80029548: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8002954C: lui         $a0, 0x801B
    ctx->r4 = S32(0X801B << 16);
    // 0x80029550: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80029554: lw          $a0, 0x1CF0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X1CF0);
    // 0x80029558: jal         0x80029570
    // 0x8002955C: nop

    func_80029570(rdram, ctx);
        goto after_0;
    // 0x8002955C: nop

    after_0:
    // 0x80029560: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80029564: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80029568: jr          $ra
    // 0x8002956C: nop

    return;
    // 0x8002956C: nop

;}
RECOMP_FUNC void func_80029570(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80029570: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80029574: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80029578: jal         0x8002940C
    // 0x8002957C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_8002940C(rdram, ctx);
        goto after_0;
    // 0x8002957C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x80029580: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x80029584: jal         0x8002959C
    // 0x80029588: nop

    func_8002959C(rdram, ctx);
        goto after_1;
    // 0x80029588: nop

    after_1:
    // 0x8002958C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80029590: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80029594: jr          $ra
    // 0x80029598: nop

    return;
    // 0x80029598: nop

;}
RECOMP_FUNC void func_8002959C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8002959C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800295A0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800295A4: jal         0x80029690
    // 0x800295A8: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_80029690(rdram, ctx);
        goto after_0;
    // 0x800295A8: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x800295AC: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x800295B0: jal         0x800295C8
    // 0x800295B4: nop

    func_800295C8(rdram, ctx);
        goto after_1;
    // 0x800295B4: nop

    after_1:
    // 0x800295B8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800295BC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800295C0: jr          $ra
    // 0x800295C4: nop

    return;
    // 0x800295C4: nop

;}
RECOMP_FUNC void func_800295C8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800295C8: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x800295CC: lui         $a1, 0x801B
    ctx->r5 = S32(0X801B << 16);
    // 0x800295D0: beq         $v0, $zero, L_800295E4
    if (ctx->r2 == 0) {
        // 0x800295D4: or          $v1, $v0, $zero
        ctx->r3 = ctx->r2 | 0;
            goto L_800295E4;
    }
    // 0x800295D4: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
    // 0x800295D8: lui         $v0, 0x800A
    ctx->r2 = S32(0X800A << 16);
    // 0x800295DC: b           L_800295F4
    // 0x800295E0: addiu       $v0, $v0, 0x6DF0
    ctx->r2 = ADD32(ctx->r2, 0X6DF0);
        goto L_800295F4;
    // 0x800295E0: addiu       $v0, $v0, 0x6DF0
    ctx->r2 = ADD32(ctx->r2, 0X6DF0);
L_800295E4:
    // 0x800295E4: lui         $v0, 0x800A
    ctx->r2 = S32(0X800A << 16);
    // 0x800295E8: addiu       $v0, $v0, 0x6DF0
    ctx->r2 = ADD32(ctx->r2, 0X6DF0);
    // 0x800295EC: lw          $v1, 0x0($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X0);
    // 0x800295F0: nop

L_800295F4:
    // 0x800295F4: lhu         $t6, 0x1C($a0)
    ctx->r14 = MEM_HU(ctx->r4, 0X1C);
    // 0x800295F8: lhu         $t7, 0x1C($v1)
    ctx->r15 = MEM_HU(ctx->r3, 0X1C);
    // 0x800295FC: addiu       $a1, $a1, 0x1CF0
    ctx->r5 = ADD32(ctx->r5, 0X1CF0);
    // 0x80029600: slt         $at, $t6, $t7
    ctx->r1 = SIGNED(ctx->r14) < SIGNED(ctx->r15) ? 1 : 0;
    // 0x80029604: bne         $at, $zero, L_80029660
    if (ctx->r1 != 0) {
        // 0x80029608: lui         $t7, 0x8003
        ctx->r15 = S32(0X8003 << 16);
            goto L_80029660;
    }
    // 0x80029608: lui         $t7, 0x8003
    ctx->r15 = S32(0X8003 << 16);
    // 0x8002960C: lw          $t8, 0x4($a0)
    ctx->r24 = MEM_W(ctx->r4, 0X4);
    // 0x80029610: lui         $t2, 0x8003
    ctx->r10 = S32(0X8003 << 16);
    // 0x80029614: sw          $t8, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r24;
    // 0x80029618: lw          $t9, 0x0($a0)
    ctx->r25 = MEM_W(ctx->r4, 0X0);
    // 0x8002961C: lw          $t0, 0x4($a0)
    ctx->r8 = MEM_W(ctx->r4, 0X4);
    // 0x80029620: addiu       $t2, $t2, -0x6610
    ctx->r10 = ADD32(ctx->r10, -0X6610);
    // 0x80029624: sw          $t9, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->r25;
    // 0x80029628: lw          $t1, 0x8($v0)
    ctx->r9 = MEM_W(ctx->r2, 0X8);
    // 0x8002962C: sw          $t2, 0xC($a0)
    MEM_W(0XC, ctx->r4) = ctx->r10;
    // 0x80029630: sw          $t1, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r9;
    // 0x80029634: lhu         $t3, 0xC($v0)
    ctx->r11 = MEM_HU(ctx->r2, 0XC);
    // 0x80029638: lw          $t5, 0x0($a1)
    ctx->r13 = MEM_W(ctx->r5, 0X0);
    // 0x8002963C: addiu       $t4, $t3, -0x1
    ctx->r12 = ADD32(ctx->r11, -0X1);
    // 0x80029640: sw          $a0, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->r4;
    // 0x80029644: bne         $a0, $t5, L_80029658
    if (ctx->r4 != ctx->r13) {
        // 0x80029648: sh          $t4, 0xC($v0)
        MEM_H(0XC, ctx->r2) = ctx->r12;
            goto L_80029658;
    }
    // 0x80029648: sh          $t4, 0xC($v0)
    MEM_H(0XC, ctx->r2) = ctx->r12;
    // 0x8002964C: lw          $t6, 0x4($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X4);
    // 0x80029650: nop

    // 0x80029654: sw          $t6, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r14;
L_80029658:
    // 0x80029658: jr          $ra
    // 0x8002965C: sw          $zero, 0x4($a0)
    MEM_W(0X4, ctx->r4) = 0;
    return;
    // 0x8002965C: sw          $zero, 0x4($a0)
    MEM_W(0X4, ctx->r4) = 0;
L_80029660:
    // 0x80029660: addiu       $t7, $t7, -0x6990
    ctx->r15 = ADD32(ctx->r15, -0X6990);
    // 0x80029664: sw          $t7, 0xC($a0)
    MEM_W(0XC, ctx->r4) = ctx->r15;
    // 0x80029668: jr          $ra
    // 0x8002966C: nop

    return;
    // 0x8002966C: nop

;}
RECOMP_FUNC void func_80029670(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80029670: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80029674: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80029678: jal         0x800295C8
    // 0x8002967C: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    func_800295C8(rdram, ctx);
        goto after_0;
    // 0x8002967C: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    after_0:
    // 0x80029680: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80029684: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80029688: jr          $ra
    // 0x8002968C: nop

    return;
    // 0x8002968C: nop

;}
RECOMP_FUNC void func_80029690(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80029690: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80029694: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80029698: jal         0x8002A320
    // 0x8002969C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_8002A320(rdram, ctx);
        goto after_0;
    // 0x8002969C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x800296A0: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x800296A4: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x800296A8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x800296AC: sh          $t6, 0x1E($a0)
    MEM_H(0X1E, ctx->r4) = ctx->r14;
L_800296B0:
    // 0x800296B0: sll         $t7, $v0, 2
    ctx->r15 = S32(ctx->r2 << 2);
    // 0x800296B4: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x800296B8: sll         $t9, $v0, 16
    ctx->r25 = S32(ctx->r2 << 16);
    // 0x800296BC: sra         $v0, $t9, 16
    ctx->r2 = S32(SIGNED(ctx->r25) >> 16);
    // 0x800296C0: slti        $at, $v0, 0x14
    ctx->r1 = SIGNED(ctx->r2) < 0X14 ? 1 : 0;
    // 0x800296C4: addu        $t8, $a0, $t7
    ctx->r24 = ADD32(ctx->r4, ctx->r15);
    // 0x800296C8: bne         $at, $zero, L_800296B0
    if (ctx->r1 != 0) {
        // 0x800296CC: sw          $zero, 0x24($t8)
        MEM_W(0X24, ctx->r24) = 0;
            goto L_800296B0;
    }
    // 0x800296CC: sw          $zero, 0x24($t8)
    MEM_W(0X24, ctx->r24) = 0;
    // 0x800296D0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800296D4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800296D8: jr          $ra
    // 0x800296DC: nop

    return;
    // 0x800296DC: nop

;}
RECOMP_FUNC void func_800296E0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800296E0: lui         $t6, 0x801B
    ctx->r14 = S32(0X801B << 16);
    // 0x800296E4: lw          $t6, 0x1CF0($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X1CF0);
    // 0x800296E8: jr          $ra
    // 0x800296EC: sw          $a0, 0xC($t6)
    MEM_W(0XC, ctx->r14) = ctx->r4;
    return;
    // 0x800296EC: sw          $a0, 0xC($t6)
    MEM_W(0XC, ctx->r14) = ctx->r4;
;}
RECOMP_FUNC void func_800296F0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800296F0: jr          $ra
    // 0x800296F4: sw          $a1, 0xC($a0)
    MEM_W(0XC, ctx->r4) = ctx->r5;
    return;
    // 0x800296F4: sw          $a1, 0xC($a0)
    MEM_W(0XC, ctx->r4) = ctx->r5;
;}
RECOMP_FUNC void func_800296F8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800296F8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800296FC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80029700: lw          $t6, 0xC($a0)
    ctx->r14 = MEM_W(ctx->r4, 0XC);
    // 0x80029704: or          $a2, $a1, $zero
    ctx->r6 = ctx->r5 | 0;
    // 0x80029708: sw          $a1, 0xC($a0)
    MEM_W(0XC, ctx->r4) = ctx->r5;
    // 0x8002970C: lw          $a1, 0x14($a0)
    ctx->r5 = MEM_W(ctx->r4, 0X14);
    // 0x80029710: jalr        $a2
    // 0x80029714: sw          $t6, 0x10($a0)
    MEM_W(0X10, ctx->r4) = ctx->r14;
    LOOKUP_FUNC(ctx->r6)(rdram, ctx);
        goto after_0;
    // 0x80029714: sw          $t6, 0x10($a0)
    MEM_W(0X10, ctx->r4) = ctx->r14;
    after_0:
    // 0x80029718: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8002971C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80029720: jr          $ra
    // 0x80029724: nop

    return;
    // 0x80029724: nop

;}
RECOMP_FUNC void func_80029728(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80029728: lui         $v0, 0x801B
    ctx->r2 = S32(0X801B << 16);
    // 0x8002972C: addiu       $v0, $v0, 0x1CF0
    ctx->r2 = ADD32(ctx->r2, 0X1CF0);
    // 0x80029730: or          $a2, $a0, $zero
    ctx->r6 = ctx->r4 | 0;
    // 0x80029734: lw          $a0, 0x0($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X0);
    // 0x80029738: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8002973C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80029740: lw          $t6, 0xC($a0)
    ctx->r14 = MEM_W(ctx->r4, 0XC);
    // 0x80029744: nop

    // 0x80029748: sw          $t6, 0x10($a0)
    MEM_W(0X10, ctx->r4) = ctx->r14;
    // 0x8002974C: lw          $t7, 0x0($v0)
    ctx->r15 = MEM_W(ctx->r2, 0X0);
    // 0x80029750: nop

    // 0x80029754: sw          $a2, 0xC($t7)
    MEM_W(0XC, ctx->r15) = ctx->r6;
    // 0x80029758: lw          $a0, 0x0($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X0);
    // 0x8002975C: nop

    // 0x80029760: lw          $t9, 0xC($a0)
    ctx->r25 = MEM_W(ctx->r4, 0XC);
    // 0x80029764: lw          $a1, 0x14($a0)
    ctx->r5 = MEM_W(ctx->r4, 0X14);
    // 0x80029768: jalr        $t9
    // 0x8002976C: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x8002976C: nop

    after_0:
    // 0x80029770: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80029774: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80029778: jr          $ra
    // 0x8002977C: nop

    return;
    // 0x8002977C: nop

;}
RECOMP_FUNC void func_80029780(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80029780: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80029784: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80029788: sw          $a1, 0xC($a0)
    MEM_W(0XC, ctx->r4) = ctx->r5;
    // 0x8002978C: lui         $t6, 0x801B
    ctx->r14 = S32(0X801B << 16);
    // 0x80029790: lw          $t6, 0x1CF0($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X1CF0);
    // 0x80029794: or          $a2, $a1, $zero
    ctx->r6 = ctx->r5 | 0;
    // 0x80029798: lw          $a1, 0x14($t6)
    ctx->r5 = MEM_W(ctx->r14, 0X14);
    // 0x8002979C: jalr        $a2
    // 0x800297A0: nop

    LOOKUP_FUNC(ctx->r6)(rdram, ctx);
        goto after_0;
    // 0x800297A0: nop

    after_0:
    // 0x800297A4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800297A8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800297AC: jr          $ra
    // 0x800297B0: nop

    return;
    // 0x800297B0: nop

;}
RECOMP_FUNC void func_800297B4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800297B4: or          $a1, $a0, $zero
    ctx->r5 = ctx->r4 | 0;
    // 0x800297B8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800297BC: lui         $a0, 0x801B
    ctx->r4 = S32(0X801B << 16);
    // 0x800297C0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800297C4: lw          $a0, 0x1CF0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X1CF0);
    // 0x800297C8: jal         0x80029780
    // 0x800297CC: nop

    func_80029780(rdram, ctx);
        goto after_0;
    // 0x800297CC: nop

    after_0:
    // 0x800297D0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800297D4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800297D8: jr          $ra
    // 0x800297DC: nop

    return;
    // 0x800297DC: nop

;}
RECOMP_FUNC void func_800297E0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800297E0: lui         $v0, 0x801B
    ctx->r2 = S32(0X801B << 16);
    // 0x800297E4: addiu       $v0, $v0, 0x1CF0
    ctx->r2 = ADD32(ctx->r2, 0X1CF0);
    // 0x800297E8: lw          $a0, 0x0($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X0);
    // 0x800297EC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800297F0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800297F4: lw          $t6, 0x10($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X10);
    // 0x800297F8: nop

    // 0x800297FC: sw          $t6, 0xC($a0)
    MEM_W(0XC, ctx->r4) = ctx->r14;
    // 0x80029800: lw          $a0, 0x0($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X0);
    // 0x80029804: nop

    // 0x80029808: lw          $t9, 0xC($a0)
    ctx->r25 = MEM_W(ctx->r4, 0XC);
    // 0x8002980C: lw          $a1, 0x14($a0)
    ctx->r5 = MEM_W(ctx->r4, 0X14);
    // 0x80029810: jalr        $t9
    // 0x80029814: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x80029814: nop

    after_0:
    // 0x80029818: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8002981C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80029820: jr          $ra
    // 0x80029824: nop

    return;
    // 0x80029824: nop

;}
RECOMP_FUNC void func_80029828(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80029828: lui         $v0, 0x801B
    ctx->r2 = S32(0X801B << 16);
    // 0x8002982C: lw          $v0, 0x1CF0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X1CF0);
    // 0x80029830: nop

    // 0x80029834: lw          $t6, 0x10($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X10);
    // 0x80029838: jr          $ra
    // 0x8002983C: sw          $t6, 0xC($v0)
    MEM_W(0XC, ctx->r2) = ctx->r14;
    return;
    // 0x8002983C: sw          $t6, 0xC($v0)
    MEM_W(0XC, ctx->r2) = ctx->r14;
;}
RECOMP_FUNC void func_80029840(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80029840: lw          $t6, 0x10($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X10);
    // 0x80029844: jr          $ra
    // 0x80029848: sw          $t6, 0xC($a0)
    MEM_W(0XC, ctx->r4) = ctx->r14;
    return;
    // 0x80029848: sw          $t6, 0xC($a0)
    MEM_W(0XC, ctx->r4) = ctx->r14;
;}
RECOMP_FUNC void func_8002984C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8002984C: lui         $t6, 0x801B
    ctx->r14 = S32(0X801B << 16);
    // 0x80029850: lw          $t6, 0x1CF0($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X1CF0);
    // 0x80029854: jr          $ra
    // 0x80029858: sw          $a0, 0x10($t6)
    MEM_W(0X10, ctx->r14) = ctx->r4;
    return;
    // 0x80029858: sw          $a0, 0x10($t6)
    MEM_W(0X10, ctx->r14) = ctx->r4;
;}
RECOMP_FUNC void func_8002985C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8002985C: jr          $ra
    // 0x80029860: sw          $a1, 0x10($a0)
    MEM_W(0X10, ctx->r4) = ctx->r5;
    return;
    // 0x80029860: sw          $a1, 0x10($a0)
    MEM_W(0X10, ctx->r4) = ctx->r5;
;}
RECOMP_FUNC void func_80029864(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80029864: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80029868: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8002986C: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    // 0x80029870: sh          $a2, 0x20($a0)
    MEM_H(0X20, ctx->r4) = ctx->r6;
    // 0x80029874: jal         0x8002985C
    // 0x80029878: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_8002985C(rdram, ctx);
        goto after_0;
    // 0x80029878: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x8002987C: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x80029880: lui         $a1, 0x8003
    ctx->r5 = S32(0X8003 << 16);
    // 0x80029884: jal         0x800296F0
    // 0x80029888: addiu       $a1, $a1, -0x6728
    ctx->r5 = ADD32(ctx->r5, -0X6728);
    func_800296F0(rdram, ctx);
        goto after_1;
    // 0x80029888: addiu       $a1, $a1, -0x6728
    ctx->r5 = ADD32(ctx->r5, -0X6728);
    after_1:
    // 0x8002988C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80029890: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80029894: jr          $ra
    // 0x80029898: nop

    return;
    // 0x80029898: nop

;}
RECOMP_FUNC void func_8002989C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8002989C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800298A0: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x800298A4: sll         $a2, $a1, 16
    ctx->r6 = S32(ctx->r5 << 16);
    // 0x800298A8: or          $a1, $a0, $zero
    ctx->r5 = ctx->r4 | 0;
    // 0x800298AC: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x800298B0: lui         $a0, 0x801B
    ctx->r4 = S32(0X801B << 16);
    // 0x800298B4: sra         $t6, $a2, 16
    ctx->r14 = S32(SIGNED(ctx->r6) >> 16);
    // 0x800298B8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800298BC: lw          $a0, 0x1CF0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X1CF0);
    // 0x800298C0: jal         0x80029864
    // 0x800298C4: or          $a2, $t6, $zero
    ctx->r6 = ctx->r14 | 0;
    func_80029864(rdram, ctx);
        goto after_0;
    // 0x800298C4: or          $a2, $t6, $zero
    ctx->r6 = ctx->r14 | 0;
    after_0:
    // 0x800298C8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800298CC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800298D0: jr          $ra
    // 0x800298D4: nop

    return;
    // 0x800298D4: nop

;}
RECOMP_FUNC void func_800298D8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800298D8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800298DC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800298E0: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x800298E4: lh          $t6, 0x20($a0)
    ctx->r14 = MEM_H(ctx->r4, 0X20);
    // 0x800298E8: nop

    // 0x800298EC: addiu       $t7, $t6, -0x1
    ctx->r15 = ADD32(ctx->r14, -0X1);
    // 0x800298F0: sh          $t7, 0x20($a0)
    MEM_H(0X20, ctx->r4) = ctx->r15;
    // 0x800298F4: lh          $t8, 0x20($a0)
    ctx->r24 = MEM_H(ctx->r4, 0X20);
    // 0x800298F8: nop

    // 0x800298FC: bgtz        $t8, L_80029910
    if (SIGNED(ctx->r24) > 0) {
        // 0x80029900: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_80029910;
    }
    // 0x80029900: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80029904: jal         0x800297E0
    // 0x80029908: nop

    func_800297E0(rdram, ctx);
        goto after_0;
    // 0x80029908: nop

    after_0:
    // 0x8002990C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80029910:
    // 0x80029910: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80029914: jr          $ra
    // 0x80029918: nop

    return;
    // 0x80029918: nop

;}
RECOMP_FUNC void func_8002991C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8002991C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80029920: lui         $t8, 0x801B
    ctx->r24 = S32(0X801B << 16);
    // 0x80029924: lw          $t8, 0x1CF0($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X1CF0);
    // 0x80029928: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8002992C: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x80029930: jal         0x8002984C
    // 0x80029934: sh          $a1, 0x20($t8)
    MEM_H(0X20, ctx->r24) = ctx->r5;
    func_8002984C(rdram, ctx);
        goto after_0;
    // 0x80029934: sh          $a1, 0x20($t8)
    MEM_H(0X20, ctx->r24) = ctx->r5;
    after_0:
    // 0x80029938: lui         $a0, 0x8003
    ctx->r4 = S32(0X8003 << 16);
    // 0x8002993C: jal         0x800296E0
    // 0x80029940: addiu       $a0, $a0, -0x66AC
    ctx->r4 = ADD32(ctx->r4, -0X66AC);
    func_800296E0(rdram, ctx);
        goto after_1;
    // 0x80029940: addiu       $a0, $a0, -0x66AC
    ctx->r4 = ADD32(ctx->r4, -0X66AC);
    after_1:
    // 0x80029944: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80029948: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8002994C: jr          $ra
    // 0x80029950: nop

    return;
    // 0x80029950: nop

;}
RECOMP_FUNC void func_80029954(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80029954: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80029958: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8002995C: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x80029960: lh          $t6, 0x20($a0)
    ctx->r14 = MEM_H(ctx->r4, 0X20);
    // 0x80029964: lui         $t8, 0x8010
    ctx->r24 = S32(0X8010 << 16);
    // 0x80029968: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x8002996C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80029970: sll         $t7, $t7, 1
    ctx->r15 = S32(ctx->r15 << 1);
    // 0x80029974: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x80029978: lhu         $t8, 0x523C($t8)
    ctx->r24 = MEM_HU(ctx->r24, 0X523C);
    // 0x8002997C: nop

    // 0x80029980: andi        $t9, $t8, 0x8000
    ctx->r25 = ctx->r24 & 0X8000;
    // 0x80029984: beq         $t9, $zero, L_80029998
    if (ctx->r25 == 0) {
        // 0x80029988: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_80029998;
    }
    // 0x80029988: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8002998C: jal         0x800297E0
    // 0x80029990: nop

    func_800297E0(rdram, ctx);
        goto after_0;
    // 0x80029990: nop

    after_0:
    // 0x80029994: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80029998:
    // 0x80029998: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8002999C: jr          $ra
    // 0x800299A0: nop

    return;
    // 0x800299A0: nop

;}
RECOMP_FUNC void func_800299A4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800299A4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800299A8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800299AC: lui         $a1, 0x8003
    ctx->r5 = S32(0X8003 << 16);
    // 0x800299B0: jal         0x800296F0
    // 0x800299B4: addiu       $a1, $a1, -0x6610
    ctx->r5 = ADD32(ctx->r5, -0X6610);
    func_800296F0(rdram, ctx);
        goto after_0;
    // 0x800299B4: addiu       $a1, $a1, -0x6610
    ctx->r5 = ADD32(ctx->r5, -0X6610);
    after_0:
    // 0x800299B8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800299BC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800299C0: jr          $ra
    // 0x800299C4: nop

    return;
    // 0x800299C4: nop

;}
RECOMP_FUNC void func_800299C8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800299C8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800299CC: lui         $a0, 0x801B
    ctx->r4 = S32(0X801B << 16);
    // 0x800299D0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800299D4: lw          $a0, 0x1CF0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X1CF0);
    // 0x800299D8: jal         0x800299A4
    // 0x800299DC: nop

    func_800299A4(rdram, ctx);
        goto after_0;
    // 0x800299DC: nop

    after_0:
    // 0x800299E0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800299E4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800299E8: jr          $ra
    // 0x800299EC: nop

    return;
    // 0x800299EC: nop

;}
RECOMP_FUNC void func_800299F0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800299F0: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x800299F4: jr          $ra
    // 0x800299F8: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    return;
    // 0x800299F8: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    // 0x800299FC: nop

;}
RECOMP_FUNC void func_80029A00(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80029A00: lw          $v0, 0x14($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X14);
    // 0x80029A04: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x80029A08: bne         $v0, $at, L_80029A18
    if (ctx->r2 != ctx->r1) {
        // 0x80029A0C: nop
    
            goto L_80029A18;
    }
    // 0x80029A0C: nop

    // 0x80029A10: jr          $ra
    // 0x80029A14: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    return;
    // 0x80029A14: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
L_80029A18:
    // 0x80029A18: lw          $v1, 0x8($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X8);
    // 0x80029A1C: nop

    // 0x80029A20: sll         $t6, $v1, 28
    ctx->r14 = S32(ctx->r3 << 28);
    // 0x80029A24: srl         $t7, $t6, 29
    ctx->r15 = S32(U32(ctx->r14) >> 29);
    // 0x80029A28: andi        $t8, $t7, 0xFF
    ctx->r24 = ctx->r15 & 0XFF;
    // 0x80029A2C: slti        $at, $t8, 0x5
    ctx->r1 = SIGNED(ctx->r24) < 0X5 ? 1 : 0;
    // 0x80029A30: beq         $at, $zero, L_80029A40
    if (ctx->r1 == 0) {
        // 0x80029A34: addiu       $v1, $zero, -0x1
        ctx->r3 = ADD32(0, -0X1);
            goto L_80029A40;
    }
    // 0x80029A34: addiu       $v1, $zero, -0x1
    ctx->r3 = ADD32(0, -0X1);
    // 0x80029A38: b           L_80029A40
    // 0x80029A3C: or          $v1, $t8, $zero
    ctx->r3 = ctx->r24 | 0;
        goto L_80029A40;
    // 0x80029A3C: or          $v1, $t8, $zero
    ctx->r3 = ctx->r24 | 0;
L_80029A40:
    // 0x80029A40: sll         $v0, $v1, 16
    ctx->r2 = S32(ctx->r3 << 16);
    // 0x80029A44: sra         $t9, $v0, 16
    ctx->r25 = S32(SIGNED(ctx->r2) >> 16);
    // 0x80029A48: or          $v0, $t9, $zero
    ctx->r2 = ctx->r25 | 0;
    // 0x80029A4C: jr          $ra
    // 0x80029A50: nop

    return;
    // 0x80029A50: nop

;}
RECOMP_FUNC void func_80029A54(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80029A54: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80029A58: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80029A5C: jal         0x80029AE4
    // 0x80029A60: nop

    func_80029AE4(rdram, ctx);
        goto after_0;
    // 0x80029A60: nop

    after_0:
    // 0x80029A64: jal         0x80029B6C
    // 0x80029A68: nop

    func_80029B6C(rdram, ctx);
        goto after_1;
    // 0x80029A68: nop

    after_1:
    // 0x80029A6C: jal         0x80029A8C
    // 0x80029A70: nop

    func_80029A8C(rdram, ctx);
        goto after_2;
    // 0x80029A70: nop

    after_2:
    // 0x80029A74: jal         0x80029BF4
    // 0x80029A78: nop

    func_80029BF4(rdram, ctx);
        goto after_3;
    // 0x80029A78: nop

    after_3:
    // 0x80029A7C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80029A80: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80029A84: jr          $ra
    // 0x80029A88: nop

    return;
    // 0x80029A88: nop

;}
RECOMP_FUNC void func_80029A8C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80029A8C: lui         $a0, 0x801B
    ctx->r4 = S32(0X801B << 16);
    // 0x80029A90: addiu       $a0, $a0, 0x1D30
    ctx->r4 = ADD32(ctx->r4, 0X1D30);
    // 0x80029A94: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x80029A98: sw          $a0, 0x1D00($at)
    MEM_W(0X1D00, ctx->r1) = ctx->r4;
    // 0x80029A9C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x80029AA0: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
L_80029AA4:
    // 0x80029AA4: sll         $t6, $v1, 6
    ctx->r14 = S32(ctx->r3 << 6);
    // 0x80029AA8: sll         $t9, $v0, 6
    ctx->r25 = S32(ctx->r2 << 6);
    // 0x80029AAC: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80029AB0: andi        $v1, $v0, 0xFFFF
    ctx->r3 = ctx->r2 & 0XFFFF;
    // 0x80029AB4: addu        $t7, $a0, $t6
    ctx->r15 = ADD32(ctx->r4, ctx->r14);
    // 0x80029AB8: slti        $at, $v1, 0x60
    ctx->r1 = SIGNED(ctx->r3) < 0X60 ? 1 : 0;
    // 0x80029ABC: addiu       $t8, $t7, 0x40
    ctx->r24 = ADD32(ctx->r15, 0X40);
    // 0x80029AC0: addu        $t0, $a0, $t9
    ctx->r8 = ADD32(ctx->r4, ctx->r25);
    // 0x80029AC4: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    // 0x80029AC8: bne         $at, $zero, L_80029AA4
    if (ctx->r1 != 0) {
        // 0x80029ACC: sw          $t8, 0x0($t0)
        MEM_W(0X0, ctx->r8) = ctx->r24;
            goto L_80029AA4;
    }
    // 0x80029ACC: sw          $t8, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->r24;
    // 0x80029AD0: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x80029AD4: sh          $zero, 0x1D18($at)
    MEM_H(0X1D18, ctx->r1) = 0;
    // 0x80029AD8: addiu       $t2, $zero, -0x1
    ctx->r10 = ADD32(0, -0X1);
    // 0x80029ADC: jr          $ra
    // 0x80029AE0: sw          $t2, 0x17C0($a0)
    MEM_W(0X17C0, ctx->r4) = ctx->r10;
    return;
    // 0x80029AE0: sw          $t2, 0x17C0($a0)
    MEM_W(0X17C0, ctx->r4) = ctx->r10;
;}
RECOMP_FUNC void func_80029AE4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80029AE4: lui         $t6, 0x8010
    ctx->r14 = S32(0X8010 << 16);
    // 0x80029AE8: addiu       $t6, $t6, 0x6D94
    ctx->r14 = ADD32(ctx->r14, 0X6D94);
    // 0x80029AEC: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x80029AF0: lui         $t0, 0x2
    ctx->r8 = S32(0X2 << 16);
    // 0x80029AF4: lui         $a2, 0x2
    ctx->r6 = S32(0X2 << 16);
    // 0x80029AF8: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x80029AFC: sw          $t6, 0x1D04($at)
    MEM_W(0X1D04, ctx->r1) = ctx->r14;
    // 0x80029B00: addiu       $a0, $a0, -0x3770
    ctx->r4 = ADD32(ctx->r4, -0X3770);
    // 0x80029B04: ori         $a2, $a2, 0x8000
    ctx->r6 = ctx->r6 | 0X8000;
    // 0x80029B08: ori         $t0, $t0, 0xA180
    ctx->r8 = ctx->r8 | 0XA180;
    // 0x80029B0C: addiu       $v0, $zero, 0x10
    ctx->r2 = ADD32(0, 0X10);
    // 0x80029B10: addiu       $v1, $zero, 0x10
    ctx->r3 = ADD32(0, 0X10);
    // 0x80029B14: addiu       $a3, $zero, 0x3C
    ctx->r7 = ADD32(0, 0X3C);
    // 0x80029B18: addiu       $a1, $zero, 0x3C
    ctx->r5 = ADD32(0, 0X3C);
L_80029B1C:
    // 0x80029B1C: multu       $v1, $a3
    result = U64(U32(ctx->r3)) * U64(U32(ctx->r7)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80029B20: mflo        $t7
    ctx->r15 = lo;
    // 0x80029B24: addu        $t8, $a0, $t7
    ctx->r24 = ADD32(ctx->r4, ctx->r15);
    // 0x80029B28: addu        $t9, $t8, $t0
    ctx->r25 = ADD32(ctx->r24, ctx->r8);
    // 0x80029B2C: multu       $v0, $a1
    result = U64(U32(ctx->r2)) * U64(U32(ctx->r5)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80029B30: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80029B34: andi        $v1, $v0, 0xFFFF
    ctx->r3 = ctx->r2 & 0XFFFF;
    // 0x80029B38: slti        $at, $v1, 0xB0
    ctx->r1 = SIGNED(ctx->r3) < 0XB0 ? 1 : 0;
    // 0x80029B3C: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    // 0x80029B40: mflo        $t1
    ctx->r9 = lo;
    // 0x80029B44: addu        $t2, $a0, $t1
    ctx->r10 = ADD32(ctx->r4, ctx->r9);
    // 0x80029B48: addu        $t3, $t2, $a2
    ctx->r11 = ADD32(ctx->r10, ctx->r6);
    // 0x80029B4C: bne         $at, $zero, L_80029B1C
    if (ctx->r1 != 0) {
        // 0x80029B50: sw          $t9, 0x2144($t3)
        MEM_W(0X2144, ctx->r11) = ctx->r25;
            goto L_80029B1C;
    }
    // 0x80029B50: sw          $t9, 0x2144($t3)
    MEM_W(0X2144, ctx->r11) = ctx->r25;
    // 0x80029B54: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x80029B58: sh          $zero, 0x1D1A($at)
    MEM_H(0X1D1A, ctx->r1) = 0;
    // 0x80029B5C: lui         $at, 0x8011
    ctx->r1 = S32(0X8011 << 16);
    // 0x80029B60: addiu       $t5, $zero, -0x1
    ctx->r13 = ADD32(0, -0X1);
    // 0x80029B64: jr          $ra
    // 0x80029B68: sw          $t5, -0x6D28($at)
    MEM_W(-0X6D28, ctx->r1) = ctx->r13;
    return;
    // 0x80029B68: sw          $t5, -0x6D28($at)
    MEM_W(-0X6D28, ctx->r1) = ctx->r13;
;}
RECOMP_FUNC void func_80029B6C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80029B6C: lui         $t6, 0x8010
    ctx->r14 = S32(0X8010 << 16);
    // 0x80029B70: addiu       $t6, $t6, 0x5760
    ctx->r14 = ADD32(ctx->r14, 0X5760);
    // 0x80029B74: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x80029B78: lui         $t0, 0x2
    ctx->r8 = S32(0X2 << 16);
    // 0x80029B7C: lui         $a2, 0x2
    ctx->r6 = S32(0X2 << 16);
    // 0x80029B80: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x80029B84: sw          $t6, 0x1D0C($at)
    MEM_W(0X1D0C, ctx->r1) = ctx->r14;
    // 0x80029B88: addiu       $a0, $a0, -0x3770
    ctx->r4 = ADD32(ctx->r4, -0X3770);
    // 0x80029B8C: ori         $a2, $a2, 0x8000
    ctx->r6 = ctx->r6 | 0X8000;
    // 0x80029B90: ori         $t0, $t0, 0x9120
    ctx->r8 = ctx->r8 | 0X9120;
    // 0x80029B94: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x80029B98: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x80029B9C: addiu       $a3, $zero, 0x250
    ctx->r7 = ADD32(0, 0X250);
    // 0x80029BA0: addiu       $a1, $zero, 0x250
    ctx->r5 = ADD32(0, 0X250);
L_80029BA4:
    // 0x80029BA4: multu       $v1, $a3
    result = U64(U32(ctx->r3)) * U64(U32(ctx->r7)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80029BA8: mflo        $t7
    ctx->r15 = lo;
    // 0x80029BAC: addu        $t8, $a0, $t7
    ctx->r24 = ADD32(ctx->r4, ctx->r15);
    // 0x80029BB0: addu        $t9, $t8, $t0
    ctx->r25 = ADD32(ctx->r24, ctx->r8);
    // 0x80029BB4: multu       $v0, $a1
    result = U64(U32(ctx->r2)) * U64(U32(ctx->r5)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80029BB8: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80029BBC: andi        $v1, $v0, 0xFFFF
    ctx->r3 = ctx->r2 & 0XFFFF;
    // 0x80029BC0: slti        $at, $v1, 0x2
    ctx->r1 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
    // 0x80029BC4: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    // 0x80029BC8: mflo        $t1
    ctx->r9 = lo;
    // 0x80029BCC: addu        $t2, $a0, $t1
    ctx->r10 = ADD32(ctx->r4, ctx->r9);
    // 0x80029BD0: addu        $t3, $t2, $a2
    ctx->r11 = ADD32(ctx->r10, ctx->r6);
    // 0x80029BD4: bne         $at, $zero, L_80029BA4
    if (ctx->r1 != 0) {
        // 0x80029BD8: sw          $t9, 0xED0($t3)
        MEM_W(0XED0, ctx->r11) = ctx->r25;
            goto L_80029BA4;
    }
    // 0x80029BD8: sw          $t9, 0xED0($t3)
    MEM_W(0XED0, ctx->r11) = ctx->r25;
    // 0x80029BDC: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x80029BE0: sh          $zero, 0x1D1E($at)
    MEM_H(0X1D1E, ctx->r1) = 0;
    // 0x80029BE4: lui         $at, 0x8010
    ctx->r1 = S32(0X8010 << 16);
    // 0x80029BE8: addiu       $t5, $zero, -0x1
    ctx->r13 = ADD32(0, -0X1);
    // 0x80029BEC: jr          $ra
    // 0x80029BF0: sw          $t5, 0x59B0($at)
    MEM_W(0X59B0, ctx->r1) = ctx->r13;
    return;
    // 0x80029BF0: sw          $t5, 0x59B0($at)
    MEM_W(0X59B0, ctx->r1) = ctx->r13;
;}
RECOMP_FUNC void func_80029BF4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80029BF4: lui         $t6, 0x8011
    ctx->r14 = S32(0X8011 << 16);
    // 0x80029BF8: addiu       $t6, $t6, -0x3888
    ctx->r14 = ADD32(ctx->r14, -0X3888);
    // 0x80029BFC: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x80029C00: lui         $a2, 0x2
    ctx->r6 = S32(0X2 << 16);
    // 0x80029C04: lui         $a1, 0x2
    ctx->r5 = S32(0X2 << 16);
    // 0x80029C08: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x80029C0C: sw          $t6, 0x1D10($at)
    MEM_W(0X1D10, ctx->r1) = ctx->r14;
    // 0x80029C10: addiu       $a0, $a0, -0x3770
    ctx->r4 = ADD32(ctx->r4, -0X3770);
    // 0x80029C14: ori         $a1, $a1, 0x8000
    ctx->r5 = ctx->r5 | 0X8000;
    // 0x80029C18: ori         $a2, $a2, 0xFF08
    ctx->r6 = ctx->r6 | 0XFF08;
    // 0x80029C1C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x80029C20: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
L_80029C24:
    // 0x80029C24: sll         $t7, $v1, 5
    ctx->r15 = S32(ctx->r3 << 5);
    // 0x80029C28: sll         $t0, $v0, 5
    ctx->r8 = S32(ctx->r2 << 5);
    // 0x80029C2C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80029C30: andi        $v1, $v0, 0xFFFF
    ctx->r3 = ctx->r2 & 0XFFFF;
    // 0x80029C34: addu        $t1, $a0, $t0
    ctx->r9 = ADD32(ctx->r4, ctx->r8);
    // 0x80029C38: addu        $t8, $a0, $t7
    ctx->r24 = ADD32(ctx->r4, ctx->r15);
    // 0x80029C3C: slti        $at, $v1, 0x40
    ctx->r1 = SIGNED(ctx->r3) < 0X40 ? 1 : 0;
    // 0x80029C40: addu        $t9, $t8, $a2
    ctx->r25 = ADD32(ctx->r24, ctx->r6);
    // 0x80029C44: addu        $t2, $t1, $a1
    ctx->r10 = ADD32(ctx->r9, ctx->r5);
    // 0x80029C48: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    // 0x80029C4C: bne         $at, $zero, L_80029C24
    if (ctx->r1 != 0) {
        // 0x80029C50: sw          $t9, 0x7EE8($t2)
        MEM_W(0X7EE8, ctx->r10) = ctx->r25;
            goto L_80029C24;
    }
    // 0x80029C50: sw          $t9, 0x7EE8($t2)
    MEM_W(0X7EE8, ctx->r10) = ctx->r25;
    // 0x80029C54: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x80029C58: sh          $zero, 0x1D20($at)
    MEM_H(0X1D20, ctx->r1) = 0;
    // 0x80029C5C: lui         $at, 0x8011
    ctx->r1 = S32(0X8011 << 16);
    // 0x80029C60: addiu       $t4, $zero, -0x1
    ctx->r12 = ADD32(0, -0X1);
    // 0x80029C64: jr          $ra
    // 0x80029C68: sw          $t4, -0x30A8($at)
    MEM_W(-0X30A8, ctx->r1) = ctx->r12;
    return;
    // 0x80029C68: sw          $t4, -0x30A8($at)
    MEM_W(-0X30A8, ctx->r1) = ctx->r12;
;}
RECOMP_FUNC void func_80029C6C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80029C6C: sll         $t6, $a0, 16
    ctx->r14 = S32(ctx->r4 << 16);
    // 0x80029C70: sra         $t7, $t6, 16
    ctx->r15 = S32(SIGNED(ctx->r14) >> 16);
    // 0x80029C74: lui         $t9, 0x801B
    ctx->r25 = S32(0X801B << 16);
    // 0x80029C78: addiu       $t9, $t9, 0x1D00
    ctx->r25 = ADD32(ctx->r25, 0X1D00);
    // 0x80029C7C: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x80029C80: addu        $v1, $t8, $t9
    ctx->r3 = ADD32(ctx->r24, ctx->r25);
    // 0x80029C84: lw          $a1, 0x0($v1)
    ctx->r5 = MEM_W(ctx->r3, 0X0);
    // 0x80029C88: addiu       $t0, $zero, -0x1
    ctx->r8 = ADD32(0, -0X1);
    // 0x80029C8C: beq         $t0, $a1, L_80029CC4
    if (ctx->r8 == ctx->r5) {
        // 0x80029C90: sw          $a0, 0x0($sp)
        MEM_W(0X0, ctx->r29) = ctx->r4;
            goto L_80029CC4;
    }
    // 0x80029C90: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x80029C94: lw          $t1, 0x0($a1)
    ctx->r9 = MEM_W(ctx->r5, 0X0);
    // 0x80029C98: lui         $t3, 0x801B
    ctx->r11 = S32(0X801B << 16);
    // 0x80029C9C: addiu       $t3, $t3, 0x1D18
    ctx->r11 = ADD32(ctx->r11, 0X1D18);
    // 0x80029CA0: sll         $t2, $t7, 1
    ctx->r10 = S32(ctx->r15 << 1);
    // 0x80029CA4: sw          $t1, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r9;
    // 0x80029CA8: sw          $t0, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r8;
    // 0x80029CAC: addu        $a3, $t2, $t3
    ctx->r7 = ADD32(ctx->r10, ctx->r11);
    // 0x80029CB0: lh          $t4, 0x0($a3)
    ctx->r12 = MEM_H(ctx->r7, 0X0);
    // 0x80029CB4: or          $v0, $a1, $zero
    ctx->r2 = ctx->r5 | 0;
    // 0x80029CB8: addiu       $t5, $t4, 0x1
    ctx->r13 = ADD32(ctx->r12, 0X1);
    // 0x80029CBC: jr          $ra
    // 0x80029CC0: sh          $t5, 0x0($a3)
    MEM_H(0X0, ctx->r7) = ctx->r13;
    return;
    // 0x80029CC0: sh          $t5, 0x0($a3)
    MEM_H(0X0, ctx->r7) = ctx->r13;
L_80029CC4:
    // 0x80029CC4: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x80029CC8: jr          $ra
    // 0x80029CCC: nop

    return;
    // 0x80029CCC: nop

;}
RECOMP_FUNC void func_80029CD0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80029CD0: sll         $t6, $a0, 16
    ctx->r14 = S32(ctx->r4 << 16);
    // 0x80029CD4: sra         $t7, $t6, 16
    ctx->r15 = S32(SIGNED(ctx->r14) >> 16);
    // 0x80029CD8: lui         $t9, 0x801B
    ctx->r25 = S32(0X801B << 16);
    // 0x80029CDC: addiu       $t9, $t9, 0x1D00
    ctx->r25 = ADD32(ctx->r25, 0X1D00);
    // 0x80029CE0: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x80029CE4: addu        $a2, $t8, $t9
    ctx->r6 = ADD32(ctx->r24, ctx->r25);
    // 0x80029CE8: lw          $t0, 0x0($a2)
    ctx->r8 = MEM_W(ctx->r6, 0X0);
    // 0x80029CEC: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x80029CF0: lui         $t2, 0x801B
    ctx->r10 = S32(0X801B << 16);
    // 0x80029CF4: lw          $v0, 0x0($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X0);
    // 0x80029CF8: addiu       $t2, $t2, 0x1D18
    ctx->r10 = ADD32(ctx->r10, 0X1D18);
    // 0x80029CFC: sll         $t1, $t7, 1
    ctx->r9 = S32(ctx->r15 << 1);
    // 0x80029D00: addu        $a3, $t1, $t2
    ctx->r7 = ADD32(ctx->r9, ctx->r10);
    // 0x80029D04: sw          $t0, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r8;
    // 0x80029D08: lh          $t3, 0x0($a3)
    ctx->r11 = MEM_H(ctx->r7, 0X0);
    // 0x80029D0C: sw          $a1, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r5;
    // 0x80029D10: addiu       $t4, $t3, -0x1
    ctx->r12 = ADD32(ctx->r11, -0X1);
    // 0x80029D14: jr          $ra
    // 0x80029D18: sh          $t4, 0x0($a3)
    MEM_H(0X0, ctx->r7) = ctx->r12;
    return;
    // 0x80029D18: sh          $t4, 0x0($a3)
    MEM_H(0X0, ctx->r7) = ctx->r12;
;}
RECOMP_FUNC void func_80029D1C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80029D1C: sll         $a3, $a0, 16
    ctx->r7 = S32(ctx->r4 << 16);
    // 0x80029D20: sra         $t6, $a3, 16
    ctx->r14 = S32(SIGNED(ctx->r7) >> 16);
    // 0x80029D24: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80029D28: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x80029D2C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80029D30: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x80029D34: bne         $a2, $at, L_80029D54
    if (ctx->r6 != ctx->r1) {
        // 0x80029D38: or          $a3, $t6, $zero
        ctx->r7 = ctx->r14 | 0;
            goto L_80029D54;
    }
    // 0x80029D38: or          $a3, $t6, $zero
    ctx->r7 = ctx->r14 | 0;
    // 0x80029D3C: sll         $a0, $t6, 16
    ctx->r4 = S32(ctx->r14 << 16);
    // 0x80029D40: sra         $t7, $a0, 16
    ctx->r15 = S32(SIGNED(ctx->r4) >> 16);
    // 0x80029D44: jal         0x80029CD0
    // 0x80029D48: or          $a0, $t7, $zero
    ctx->r4 = ctx->r15 | 0;
    func_80029CD0(rdram, ctx);
        goto after_0;
    // 0x80029D48: or          $a0, $t7, $zero
    ctx->r4 = ctx->r15 | 0;
    after_0:
    // 0x80029D4C: b           L_80029D78
    // 0x80029D50: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80029D78;
    // 0x80029D50: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80029D54:
    // 0x80029D54: lui         $t9, 0x801B
    ctx->r25 = S32(0X801B << 16);
    // 0x80029D58: addiu       $t9, $t9, 0x1D00
    ctx->r25 = ADD32(ctx->r25, 0X1D00);
    // 0x80029D5C: sll         $t8, $a3, 2
    ctx->r24 = S32(ctx->r7 << 2);
    // 0x80029D60: addu        $v1, $t8, $t9
    ctx->r3 = ADD32(ctx->r24, ctx->r25);
    // 0x80029D64: lw          $t0, 0x0($v1)
    ctx->r8 = MEM_W(ctx->r3, 0X0);
    // 0x80029D68: lw          $v0, 0x0($a2)
    ctx->r2 = MEM_W(ctx->r6, 0X0);
    // 0x80029D6C: sw          $t0, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r8;
    // 0x80029D70: sw          $a1, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r5;
    // 0x80029D74: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80029D78:
    // 0x80029D78: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80029D7C: jr          $ra
    // 0x80029D80: nop

    return;
    // 0x80029D80: nop

;}
RECOMP_FUNC void func_80029D84(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80029D84: or          $a2, $a0, $zero
    ctx->r6 = ctx->r4 | 0;
    // 0x80029D88: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80029D8C: sll         $a0, $a1, 16
    ctx->r4 = S32(ctx->r5 << 16);
    // 0x80029D90: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80029D94: sra         $t8, $a0, 16
    ctx->r24 = S32(SIGNED(ctx->r4) >> 16);
    // 0x80029D98: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x80029D9C: or          $a0, $t8, $zero
    ctx->r4 = ctx->r24 | 0;
    // 0x80029DA0: jal         0x80029C6C
    // 0x80029DA4: sw          $a2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r6;
    func_80029C6C(rdram, ctx);
        goto after_0;
    // 0x80029DA4: sw          $a2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r6;
    after_0:
    // 0x80029DA8: addiu       $v1, $zero, -0x1
    ctx->r3 = ADD32(0, -0X1);
    // 0x80029DAC: lw          $a2, 0x18($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X18);
    // 0x80029DB0: bne         $v0, $v1, L_80029DC0
    if (ctx->r2 != ctx->r3) {
        // 0x80029DB4: nop
    
            goto L_80029DC0;
    }
    // 0x80029DB4: nop

    // 0x80029DB8: b           L_80029DE8
    // 0x80029DBC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_80029DE8;
    // 0x80029DBC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_80029DC0:
    // 0x80029DC0: lw          $a0, 0x14($a2)
    ctx->r4 = MEM_W(ctx->r6, 0X14);
    // 0x80029DC4: nop

    // 0x80029DC8: bne         $v1, $a0, L_80029DDC
    if (ctx->r3 != ctx->r4) {
        // 0x80029DCC: nop
    
            goto L_80029DDC;
    }
    // 0x80029DCC: nop

    // 0x80029DD0: sw          $v0, 0x18($a2)
    MEM_W(0X18, ctx->r6) = ctx->r2;
    // 0x80029DD4: b           L_80029DE4
    // 0x80029DD8: sw          $v0, 0x14($a2)
    MEM_W(0X14, ctx->r6) = ctx->r2;
        goto L_80029DE4;
    // 0x80029DD8: sw          $v0, 0x14($a2)
    MEM_W(0X14, ctx->r6) = ctx->r2;
L_80029DDC:
    // 0x80029DDC: sw          $v0, 0x14($a2)
    MEM_W(0X14, ctx->r6) = ctx->r2;
    // 0x80029DE0: sw          $a0, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r4;
L_80029DE4:
    // 0x80029DE4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_80029DE8:
    // 0x80029DE8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80029DEC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80029DF0: jr          $ra
    // 0x80029DF4: nop

    return;
    // 0x80029DF4: nop

;}
RECOMP_FUNC void func_80029DF8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80029DF8: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x80029DFC: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x80029E00: sw          $s2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r18;
    // 0x80029E04: or          $s2, $a0, $zero
    ctx->r18 = ctx->r4 | 0;
    // 0x80029E08: sw          $s5, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r21;
    // 0x80029E0C: sw          $s4, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r20;
    // 0x80029E10: sw          $s3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r19;
    // 0x80029E14: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x80029E18: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x80029E1C: jal         0x80029A00
    // 0x80029E20: sw          $a1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r5;
    func_80029A00(rdram, ctx);
        goto after_0;
    // 0x80029E20: sw          $a1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r5;
    after_0:
    // 0x80029E24: sll         $s5, $v0, 16
    ctx->r21 = S32(ctx->r2 << 16);
    // 0x80029E28: sra         $t6, $s5, 16
    ctx->r14 = S32(SIGNED(ctx->r21) >> 16);
    // 0x80029E2C: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x80029E30: bne         $v0, $at, L_80029E40
    if (ctx->r2 != ctx->r1) {
        // 0x80029E34: or          $s5, $t6, $zero
        ctx->r21 = ctx->r14 | 0;
            goto L_80029E40;
    }
    // 0x80029E34: or          $s5, $t6, $zero
    ctx->r21 = ctx->r14 | 0;
    // 0x80029E38: b           L_80029EDC
    // 0x80029E3C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_80029EDC;
    // 0x80029E3C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_80029E40:
    // 0x80029E40: sll         $a0, $s5, 16
    ctx->r4 = S32(ctx->r21 << 16);
    // 0x80029E44: sra         $t7, $a0, 16
    ctx->r15 = S32(SIGNED(ctx->r4) >> 16);
    // 0x80029E48: jal         0x80029C6C
    // 0x80029E4C: or          $a0, $t7, $zero
    ctx->r4 = ctx->r15 | 0;
    func_80029C6C(rdram, ctx);
        goto after_1;
    // 0x80029E4C: or          $a0, $t7, $zero
    ctx->r4 = ctx->r15 | 0;
    after_1:
    // 0x80029E50: addiu       $s4, $zero, -0x1
    ctx->r20 = ADD32(0, -0X1);
    // 0x80029E54: bne         $v0, $s4, L_80029E64
    if (ctx->r2 != ctx->r20) {
        // 0x80029E58: nop
    
            goto L_80029E64;
    }
    // 0x80029E58: nop

    // 0x80029E5C: b           L_80029EDC
    // 0x80029E60: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_80029EDC;
    // 0x80029E60: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_80029E64:
    // 0x80029E64: lw          $v1, 0x14($s2)
    ctx->r3 = MEM_W(ctx->r18, 0X14);
    // 0x80029E68: nop

    // 0x80029E6C: bne         $s4, $v1, L_80029E80
    if (ctx->r20 != ctx->r3) {
        // 0x80029E70: nop
    
            goto L_80029E80;
    }
    // 0x80029E70: nop

    // 0x80029E74: sw          $v0, 0x18($s2)
    MEM_W(0X18, ctx->r18) = ctx->r2;
    // 0x80029E78: b           L_80029E88
    // 0x80029E7C: sw          $v0, 0x14($s2)
    MEM_W(0X14, ctx->r18) = ctx->r2;
        goto L_80029E88;
    // 0x80029E7C: sw          $v0, 0x14($s2)
    MEM_W(0X14, ctx->r18) = ctx->r2;
L_80029E80:
    // 0x80029E80: sw          $v0, 0x14($s2)
    MEM_W(0X14, ctx->r18) = ctx->r2;
    // 0x80029E84: sw          $v1, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r3;
L_80029E88:
    // 0x80029E88: lbu         $s3, 0x37($sp)
    ctx->r19 = MEM_BU(ctx->r29, 0X37);
    // 0x80029E8C: addiu       $s0, $zero, 0x1
    ctx->r16 = ADD32(0, 0X1);
    // 0x80029E90: slti        $at, $s3, 0x2
    ctx->r1 = SIGNED(ctx->r19) < 0X2 ? 1 : 0;
    // 0x80029E94: bne         $at, $zero, L_80029ED8
    if (ctx->r1 != 0) {
        // 0x80029E98: sll         $a0, $s5, 16
        ctx->r4 = S32(ctx->r21 << 16);
            goto L_80029ED8;
    }
L_80029E98:
    // 0x80029E98: sll         $a0, $s5, 16
    ctx->r4 = S32(ctx->r21 << 16);
    // 0x80029E9C: lw          $s1, 0x14($s2)
    ctx->r17 = MEM_W(ctx->r18, 0X14);
    // 0x80029EA0: sra         $t8, $a0, 16
    ctx->r24 = S32(SIGNED(ctx->r4) >> 16);
    // 0x80029EA4: jal         0x80029C6C
    // 0x80029EA8: or          $a0, $t8, $zero
    ctx->r4 = ctx->r24 | 0;
    func_80029C6C(rdram, ctx);
        goto after_2;
    // 0x80029EA8: or          $a0, $t8, $zero
    ctx->r4 = ctx->r24 | 0;
    after_2:
    // 0x80029EAC: bne         $v0, $s4, L_80029EBC
    if (ctx->r2 != ctx->r20) {
        // 0x80029EB0: sw          $v0, 0x14($s2)
        MEM_W(0X14, ctx->r18) = ctx->r2;
            goto L_80029EBC;
    }
    // 0x80029EB0: sw          $v0, 0x14($s2)
    MEM_W(0X14, ctx->r18) = ctx->r2;
    // 0x80029EB4: b           L_80029EDC
    // 0x80029EB8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_80029EDC;
    // 0x80029EB8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_80029EBC:
    // 0x80029EBC: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x80029EC0: lw          $t9, 0x14($s2)
    ctx->r25 = MEM_W(ctx->r18, 0X14);
    // 0x80029EC4: andi        $t0, $s0, 0xFFFF
    ctx->r8 = ctx->r16 & 0XFFFF;
    // 0x80029EC8: slt         $at, $t0, $s3
    ctx->r1 = SIGNED(ctx->r8) < SIGNED(ctx->r19) ? 1 : 0;
    // 0x80029ECC: or          $s0, $t0, $zero
    ctx->r16 = ctx->r8 | 0;
    // 0x80029ED0: bne         $at, $zero, L_80029E98
    if (ctx->r1 != 0) {
        // 0x80029ED4: sw          $s1, 0x0($t9)
        MEM_W(0X0, ctx->r25) = ctx->r17;
            goto L_80029E98;
    }
    // 0x80029ED4: sw          $s1, 0x0($t9)
    MEM_W(0X0, ctx->r25) = ctx->r17;
L_80029ED8:
    // 0x80029ED8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_80029EDC:
    // 0x80029EDC: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x80029EE0: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x80029EE4: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x80029EE8: lw          $s2, 0x1C($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X1C);
    // 0x80029EEC: lw          $s3, 0x20($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X20);
    // 0x80029EF0: lw          $s4, 0x24($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X24);
    // 0x80029EF4: lw          $s5, 0x28($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X28);
    // 0x80029EF8: jr          $ra
    // 0x80029EFC: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x80029EFC: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_80029F00(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80029F00: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x80029F04: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x80029F08: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x80029F0C: or          $s1, $a0, $zero
    ctx->r17 = ctx->r4 | 0;
    // 0x80029F10: sw          $s4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r20;
    // 0x80029F14: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x80029F18: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x80029F1C: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80029F20: jal         0x80029A00
    // 0x80029F24: sw          $a1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r5;
    func_80029A00(rdram, ctx);
        goto after_0;
    // 0x80029F24: sw          $a1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r5;
    after_0:
    // 0x80029F28: sll         $s4, $v0, 16
    ctx->r20 = S32(ctx->r2 << 16);
    // 0x80029F2C: sra         $t6, $s4, 16
    ctx->r14 = S32(SIGNED(ctx->r20) >> 16);
    // 0x80029F30: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x80029F34: bne         $v0, $at, L_80029F44
    if (ctx->r2 != ctx->r1) {
        // 0x80029F38: or          $s4, $t6, $zero
        ctx->r20 = ctx->r14 | 0;
            goto L_80029F44;
    }
    // 0x80029F38: or          $s4, $t6, $zero
    ctx->r20 = ctx->r14 | 0;
    // 0x80029F3C: b           L_80029FE8
    // 0x80029F40: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_80029FE8;
    // 0x80029F40: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_80029F44:
    // 0x80029F44: sll         $a0, $s4, 16
    ctx->r4 = S32(ctx->r20 << 16);
    // 0x80029F48: sra         $t7, $a0, 16
    ctx->r15 = S32(SIGNED(ctx->r4) >> 16);
    // 0x80029F4C: jal         0x80029C6C
    // 0x80029F50: or          $a0, $t7, $zero
    ctx->r4 = ctx->r15 | 0;
    func_80029C6C(rdram, ctx);
        goto after_1;
    // 0x80029F50: or          $a0, $t7, $zero
    ctx->r4 = ctx->r15 | 0;
    after_1:
    // 0x80029F54: addiu       $s3, $zero, -0x1
    ctx->r19 = ADD32(0, -0X1);
    // 0x80029F58: bne         $v0, $s3, L_80029F68
    if (ctx->r2 != ctx->r19) {
        // 0x80029F5C: nop
    
            goto L_80029F68;
    }
    // 0x80029F5C: nop

    // 0x80029F60: b           L_80029FE8
    // 0x80029F64: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_80029FE8;
    // 0x80029F64: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_80029F68:
    // 0x80029F68: lw          $t8, 0x14($s1)
    ctx->r24 = MEM_W(ctx->r17, 0X14);
    // 0x80029F6C: nop

    // 0x80029F70: bne         $s3, $t8, L_80029F80
    if (ctx->r19 != ctx->r24) {
        // 0x80029F74: nop
    
            goto L_80029F80;
    }
    // 0x80029F74: nop

    // 0x80029F78: b           L_80029F8C
    // 0x80029F7C: sw          $v0, 0x14($s1)
    MEM_W(0X14, ctx->r17) = ctx->r2;
        goto L_80029F8C;
    // 0x80029F7C: sw          $v0, 0x14($s1)
    MEM_W(0X14, ctx->r17) = ctx->r2;
L_80029F80:
    // 0x80029F80: lw          $t9, 0x18($s1)
    ctx->r25 = MEM_W(ctx->r17, 0X18);
    // 0x80029F84: nop

    // 0x80029F88: sw          $v0, 0x0($t9)
    MEM_W(0X0, ctx->r25) = ctx->r2;
L_80029F8C:
    // 0x80029F8C: sw          $v0, 0x18($s1)
    MEM_W(0X18, ctx->r17) = ctx->r2;
    // 0x80029F90: lbu         $s2, 0x37($sp)
    ctx->r18 = MEM_BU(ctx->r29, 0X37);
    // 0x80029F94: addiu       $s0, $zero, 0x1
    ctx->r16 = ADD32(0, 0X1);
    // 0x80029F98: slti        $at, $s2, 0x2
    ctx->r1 = SIGNED(ctx->r18) < 0X2 ? 1 : 0;
    // 0x80029F9C: bne         $at, $zero, L_80029FE4
    if (ctx->r1 != 0) {
        // 0x80029FA0: sll         $a0, $s4, 16
        ctx->r4 = S32(ctx->r20 << 16);
            goto L_80029FE4;
    }
L_80029FA0:
    // 0x80029FA0: sll         $a0, $s4, 16
    ctx->r4 = S32(ctx->r20 << 16);
    // 0x80029FA4: sra         $t0, $a0, 16
    ctx->r8 = S32(SIGNED(ctx->r4) >> 16);
    // 0x80029FA8: jal         0x80029C6C
    // 0x80029FAC: or          $a0, $t0, $zero
    ctx->r4 = ctx->r8 | 0;
    func_80029C6C(rdram, ctx);
        goto after_2;
    // 0x80029FAC: or          $a0, $t0, $zero
    ctx->r4 = ctx->r8 | 0;
    after_2:
    // 0x80029FB0: lw          $t1, 0x18($s1)
    ctx->r9 = MEM_W(ctx->r17, 0X18);
    // 0x80029FB4: bne         $v0, $s3, L_80029FC4
    if (ctx->r2 != ctx->r19) {
        // 0x80029FB8: sw          $v0, 0x0($t1)
        MEM_W(0X0, ctx->r9) = ctx->r2;
            goto L_80029FC4;
    }
    // 0x80029FB8: sw          $v0, 0x0($t1)
    MEM_W(0X0, ctx->r9) = ctx->r2;
    // 0x80029FBC: b           L_80029FE8
    // 0x80029FC0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_80029FE8;
    // 0x80029FC0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_80029FC4:
    // 0x80029FC4: lw          $t2, 0x18($s1)
    ctx->r10 = MEM_W(ctx->r17, 0X18);
    // 0x80029FC8: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x80029FCC: lw          $t3, 0x0($t2)
    ctx->r11 = MEM_W(ctx->r10, 0X0);
    // 0x80029FD0: andi        $t4, $s0, 0xFFFF
    ctx->r12 = ctx->r16 & 0XFFFF;
    // 0x80029FD4: slt         $at, $t4, $s2
    ctx->r1 = SIGNED(ctx->r12) < SIGNED(ctx->r18) ? 1 : 0;
    // 0x80029FD8: or          $s0, $t4, $zero
    ctx->r16 = ctx->r12 | 0;
    // 0x80029FDC: bne         $at, $zero, L_80029FA0
    if (ctx->r1 != 0) {
        // 0x80029FE0: sw          $t3, 0x18($s1)
        MEM_W(0X18, ctx->r17) = ctx->r11;
            goto L_80029FA0;
    }
    // 0x80029FE0: sw          $t3, 0x18($s1)
    MEM_W(0X18, ctx->r17) = ctx->r11;
L_80029FE4:
    // 0x80029FE4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_80029FE8:
    // 0x80029FE8: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x80029FEC: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80029FF0: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x80029FF4: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x80029FF8: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x80029FFC: lw          $s4, 0x28($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X28);
    // 0x8002A000: jr          $ra
    // 0x8002A004: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x8002A004: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_8002A008(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8002A008: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8002A00C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8002A010: jal         0x80029A00
    // 0x8002A014: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_80029A00(rdram, ctx);
        goto after_0;
    // 0x8002A014: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x8002A018: sll         $a0, $v0, 16
    ctx->r4 = S32(ctx->r2 << 16);
    // 0x8002A01C: sra         $t6, $a0, 16
    ctx->r14 = S32(SIGNED(ctx->r4) >> 16);
    // 0x8002A020: lw          $a1, 0x18($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X18);
    // 0x8002A024: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x8002A028: bne         $v0, $at, L_8002A038
    if (ctx->r2 != ctx->r1) {
        // 0x8002A02C: or          $a0, $t6, $zero
        ctx->r4 = ctx->r14 | 0;
            goto L_8002A038;
    }
    // 0x8002A02C: or          $a0, $t6, $zero
    ctx->r4 = ctx->r14 | 0;
    // 0x8002A030: b           L_8002A084
    // 0x8002A034: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
        goto L_8002A084;
    // 0x8002A034: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
L_8002A038:
    // 0x8002A038: jal         0x80029C6C
    // 0x8002A03C: sw          $a1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r5;
    func_80029C6C(rdram, ctx);
        goto after_1;
    // 0x8002A03C: sw          $a1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r5;
    after_1:
    // 0x8002A040: addiu       $a0, $zero, -0x1
    ctx->r4 = ADD32(0, -0X1);
    // 0x8002A044: lw          $a1, 0x18($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X18);
    // 0x8002A048: bne         $v0, $a0, L_8002A058
    if (ctx->r2 != ctx->r4) {
        // 0x8002A04C: or          $v1, $v0, $zero
        ctx->r3 = ctx->r2 | 0;
            goto L_8002A058;
    }
    // 0x8002A04C: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
    // 0x8002A050: b           L_8002A084
    // 0x8002A054: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
        goto L_8002A084;
    // 0x8002A054: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
L_8002A058:
    // 0x8002A058: lw          $t7, 0x14($a1)
    ctx->r15 = MEM_W(ctx->r5, 0X14);
    // 0x8002A05C: nop

    // 0x8002A060: bne         $a0, $t7, L_8002A070
    if (ctx->r4 != ctx->r15) {
        // 0x8002A064: nop
    
            goto L_8002A070;
    }
    // 0x8002A064: nop

    // 0x8002A068: b           L_8002A07C
    // 0x8002A06C: sw          $v0, 0x14($a1)
    MEM_W(0X14, ctx->r5) = ctx->r2;
        goto L_8002A07C;
    // 0x8002A06C: sw          $v0, 0x14($a1)
    MEM_W(0X14, ctx->r5) = ctx->r2;
L_8002A070:
    // 0x8002A070: lw          $t8, 0x18($a1)
    ctx->r24 = MEM_W(ctx->r5, 0X18);
    // 0x8002A074: nop

    // 0x8002A078: sw          $v0, 0x0($t8)
    MEM_W(0X0, ctx->r24) = ctx->r2;
L_8002A07C:
    // 0x8002A07C: sw          $v1, 0x18($a1)
    MEM_W(0X18, ctx->r5) = ctx->r3;
    // 0x8002A080: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
L_8002A084:
    // 0x8002A084: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8002A088: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8002A08C: jr          $ra
    // 0x8002A090: nop

    return;
    // 0x8002A090: nop

;}
RECOMP_FUNC void func_8002A094(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8002A094: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x8002A098: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x8002A09C: sw          $s2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r18;
    // 0x8002A0A0: or          $s2, $a0, $zero
    ctx->r18 = ctx->r4 | 0;
    // 0x8002A0A4: sw          $s5, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r21;
    // 0x8002A0A8: sw          $s4, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r20;
    // 0x8002A0AC: sw          $s3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r19;
    // 0x8002A0B0: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x8002A0B4: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x8002A0B8: jal         0x80029A00
    // 0x8002A0BC: sw          $a1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r5;
    func_80029A00(rdram, ctx);
        goto after_0;
    // 0x8002A0BC: sw          $a1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r5;
    after_0:
    // 0x8002A0C0: sll         $s5, $v0, 16
    ctx->r21 = S32(ctx->r2 << 16);
    // 0x8002A0C4: sra         $t6, $s5, 16
    ctx->r14 = S32(SIGNED(ctx->r21) >> 16);
    // 0x8002A0C8: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x8002A0CC: bne         $v0, $at, L_8002A0DC
    if (ctx->r2 != ctx->r1) {
        // 0x8002A0D0: or          $s5, $t6, $zero
        ctx->r21 = ctx->r14 | 0;
            goto L_8002A0DC;
    }
    // 0x8002A0D0: or          $s5, $t6, $zero
    ctx->r21 = ctx->r14 | 0;
    // 0x8002A0D4: b           L_8002A1AC
    // 0x8002A0D8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_8002A1AC;
    // 0x8002A0D8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_8002A0DC:
    // 0x8002A0DC: lw          $v0, 0x14($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X14);
    // 0x8002A0E0: addiu       $s4, $zero, -0x1
    ctx->r20 = ADD32(0, -0X1);
    // 0x8002A0E4: bne         $s4, $v0, L_8002A0F4
    if (ctx->r20 != ctx->r2) {
        // 0x8002A0E8: or          $s0, $v0, $zero
        ctx->r16 = ctx->r2 | 0;
            goto L_8002A0F4;
    }
    // 0x8002A0E8: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x8002A0EC: b           L_8002A1AC
    // 0x8002A0F0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_8002A1AC;
    // 0x8002A0F0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_8002A0F4:
    // 0x8002A0F4: sll         $a0, $s5, 16
    ctx->r4 = S32(ctx->r21 << 16);
    // 0x8002A0F8: sra         $t7, $a0, 16
    ctx->r15 = S32(SIGNED(ctx->r4) >> 16);
    // 0x8002A0FC: or          $a0, $t7, $zero
    ctx->r4 = ctx->r15 | 0;
    // 0x8002A100: jal         0x80029CD0
    // 0x8002A104: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    func_80029CD0(rdram, ctx);
        goto after_1;
    // 0x8002A104: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    after_1:
    // 0x8002A108: bne         $v0, $s4, L_8002A13C
    if (ctx->r2 != ctx->r20) {
        // 0x8002A10C: sw          $v0, 0x14($s2)
        MEM_W(0X14, ctx->r18) = ctx->r2;
            goto L_8002A13C;
    }
    // 0x8002A10C: sw          $v0, 0x14($s2)
    MEM_W(0X14, ctx->r18) = ctx->r2;
    // 0x8002A110: sw          $s4, 0x18($s2)
    MEM_W(0X18, ctx->r18) = ctx->r20;
    // 0x8002A114: jal         0x8002A3D8
    // 0x8002A118: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8002A3D8(rdram, ctx);
        goto after_2;
    // 0x8002A118: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_2:
    // 0x8002A11C: lbu         $t8, 0x37($sp)
    ctx->r24 = MEM_BU(ctx->r29, 0X37);
    // 0x8002A120: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8002A124: beq         $t8, $at, L_8002A134
    if (ctx->r24 == ctx->r1) {
        // 0x8002A128: nop
    
            goto L_8002A134;
    }
    // 0x8002A128: nop

    // 0x8002A12C: b           L_8002A1AC
    // 0x8002A130: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_8002A1AC;
    // 0x8002A130: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_8002A134:
    // 0x8002A134: b           L_8002A1AC
    // 0x8002A138: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_8002A1AC;
    // 0x8002A138: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_8002A13C:
    // 0x8002A13C: jal         0x8002A3D8
    // 0x8002A140: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8002A3D8(rdram, ctx);
        goto after_3;
    // 0x8002A140: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_3:
    // 0x8002A144: lbu         $s3, 0x37($sp)
    ctx->r19 = MEM_BU(ctx->r29, 0X37);
    // 0x8002A148: addiu       $s1, $zero, 0x1
    ctx->r17 = ADD32(0, 0X1);
    // 0x8002A14C: slti        $at, $s3, 0x2
    ctx->r1 = SIGNED(ctx->r19) < 0X2 ? 1 : 0;
    // 0x8002A150: bne         $at, $zero, L_8002A1AC
    if (ctx->r1 != 0) {
        // 0x8002A154: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_8002A1AC;
    }
    // 0x8002A154: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_8002A158:
    // 0x8002A158: lw          $s0, 0x14($s2)
    ctx->r16 = MEM_W(ctx->r18, 0X14);
    // 0x8002A15C: sll         $a0, $s5, 16
    ctx->r4 = S32(ctx->r21 << 16);
    // 0x8002A160: sra         $t9, $a0, 16
    ctx->r25 = S32(SIGNED(ctx->r4) >> 16);
    // 0x8002A164: or          $a0, $t9, $zero
    ctx->r4 = ctx->r25 | 0;
    // 0x8002A168: jal         0x80029CD0
    // 0x8002A16C: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    func_80029CD0(rdram, ctx);
        goto after_4;
    // 0x8002A16C: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_4:
    // 0x8002A170: bne         $v0, $s4, L_8002A18C
    if (ctx->r2 != ctx->r20) {
        // 0x8002A174: sw          $v0, 0x14($s2)
        MEM_W(0X14, ctx->r18) = ctx->r2;
            goto L_8002A18C;
    }
    // 0x8002A174: sw          $v0, 0x14($s2)
    MEM_W(0X14, ctx->r18) = ctx->r2;
    // 0x8002A178: sw          $s4, 0x18($s2)
    MEM_W(0X18, ctx->r18) = ctx->r20;
    // 0x8002A17C: jal         0x8002A3D8
    // 0x8002A180: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8002A3D8(rdram, ctx);
        goto after_5;
    // 0x8002A180: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_5:
    // 0x8002A184: b           L_8002A1AC
    // 0x8002A188: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_8002A1AC;
    // 0x8002A188: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_8002A18C:
    // 0x8002A18C: jal         0x8002A3D8
    // 0x8002A190: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8002A3D8(rdram, ctx);
        goto after_6;
    // 0x8002A190: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_6:
    // 0x8002A194: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x8002A198: andi        $t0, $s1, 0xFFFF
    ctx->r8 = ctx->r17 & 0XFFFF;
    // 0x8002A19C: slt         $at, $t0, $s3
    ctx->r1 = SIGNED(ctx->r8) < SIGNED(ctx->r19) ? 1 : 0;
    // 0x8002A1A0: bne         $at, $zero, L_8002A158
    if (ctx->r1 != 0) {
        // 0x8002A1A4: or          $s1, $t0, $zero
        ctx->r17 = ctx->r8 | 0;
            goto L_8002A158;
    }
    // 0x8002A1A4: or          $s1, $t0, $zero
    ctx->r17 = ctx->r8 | 0;
    // 0x8002A1A8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_8002A1AC:
    // 0x8002A1AC: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x8002A1B0: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x8002A1B4: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x8002A1B8: lw          $s2, 0x1C($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X1C);
    // 0x8002A1BC: lw          $s3, 0x20($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X20);
    // 0x8002A1C0: lw          $s4, 0x24($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X24);
    // 0x8002A1C4: lw          $s5, 0x28($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X28);
    // 0x8002A1C8: jr          $ra
    // 0x8002A1CC: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x8002A1CC: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_8002A1D0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8002A1D0: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x8002A1D4: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x8002A1D8: sw          $s2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r18;
    // 0x8002A1DC: or          $s2, $a1, $zero
    ctx->r18 = ctx->r5 | 0;
    // 0x8002A1E0: sw          $s5, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r21;
    // 0x8002A1E4: sw          $s4, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r20;
    // 0x8002A1E8: sw          $s3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r19;
    // 0x8002A1EC: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x8002A1F0: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x8002A1F4: sw          $a0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r4;
    // 0x8002A1F8: jal         0x80029A00
    // 0x8002A1FC: sw          $a2, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r6;
    func_80029A00(rdram, ctx);
        goto after_0;
    // 0x8002A1FC: sw          $a2, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r6;
    after_0:
    // 0x8002A200: sll         $s4, $v0, 16
    ctx->r20 = S32(ctx->r2 << 16);
    // 0x8002A204: sra         $t6, $s4, 16
    ctx->r14 = S32(SIGNED(ctx->r20) >> 16);
    // 0x8002A208: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x8002A20C: bne         $v0, $at, L_8002A21C
    if (ctx->r2 != ctx->r1) {
        // 0x8002A210: or          $s4, $t6, $zero
        ctx->r20 = ctx->r14 | 0;
            goto L_8002A21C;
    }
    // 0x8002A210: or          $s4, $t6, $zero
    ctx->r20 = ctx->r14 | 0;
    // 0x8002A214: b           L_8002A2FC
    // 0x8002A218: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_8002A2FC;
    // 0x8002A218: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_8002A21C:
    // 0x8002A21C: addiu       $s5, $zero, -0x1
    ctx->r21 = ADD32(0, -0X1);
    // 0x8002A220: beq         $s2, $s5, L_8002A238
    if (ctx->r18 == ctx->r21) {
        // 0x8002A224: nop
    
            goto L_8002A238;
    }
    // 0x8002A224: nop

    // 0x8002A228: lw          $v0, 0x0($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X0);
    // 0x8002A22C: sll         $a0, $s4, 16
    ctx->r4 = S32(ctx->r20 << 16);
    // 0x8002A230: bne         $s5, $v0, L_8002A240
    if (ctx->r21 != ctx->r2) {
        // 0x8002A234: or          $s0, $v0, $zero
        ctx->r16 = ctx->r2 | 0;
            goto L_8002A240;
    }
    // 0x8002A234: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
L_8002A238:
    // 0x8002A238: b           L_8002A2FC
    // 0x8002A23C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_8002A2FC;
    // 0x8002A23C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_8002A240:
    // 0x8002A240: sra         $t7, $a0, 16
    ctx->r15 = S32(SIGNED(ctx->r4) >> 16);
    // 0x8002A244: or          $a0, $t7, $zero
    ctx->r4 = ctx->r15 | 0;
    // 0x8002A248: jal         0x80029CD0
    // 0x8002A24C: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    func_80029CD0(rdram, ctx);
        goto after_1;
    // 0x8002A24C: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    after_1:
    // 0x8002A250: bne         $v0, $s5, L_8002A288
    if (ctx->r2 != ctx->r21) {
        // 0x8002A254: sw          $v0, 0x0($s2)
        MEM_W(0X0, ctx->r18) = ctx->r2;
            goto L_8002A288;
    }
    // 0x8002A254: sw          $v0, 0x0($s2)
    MEM_W(0X0, ctx->r18) = ctx->r2;
    // 0x8002A258: lw          $t8, 0x30($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X30);
    // 0x8002A25C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8002A260: jal         0x8002A3D8
    // 0x8002A264: sw          $s2, 0x18($t8)
    MEM_W(0X18, ctx->r24) = ctx->r18;
    func_8002A3D8(rdram, ctx);
        goto after_2;
    // 0x8002A264: sw          $s2, 0x18($t8)
    MEM_W(0X18, ctx->r24) = ctx->r18;
    after_2:
    // 0x8002A268: lbu         $t9, 0x3B($sp)
    ctx->r25 = MEM_BU(ctx->r29, 0X3B);
    // 0x8002A26C: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8002A270: beq         $t9, $at, L_8002A280
    if (ctx->r25 == ctx->r1) {
        // 0x8002A274: nop
    
            goto L_8002A280;
    }
    // 0x8002A274: nop

    // 0x8002A278: b           L_8002A2FC
    // 0x8002A27C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_8002A2FC;
    // 0x8002A27C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_8002A280:
    // 0x8002A280: b           L_8002A2FC
    // 0x8002A284: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_8002A2FC;
    // 0x8002A284: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_8002A288:
    // 0x8002A288: jal         0x8002A3D8
    // 0x8002A28C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8002A3D8(rdram, ctx);
        goto after_3;
    // 0x8002A28C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_3:
    // 0x8002A290: lbu         $s3, 0x3B($sp)
    ctx->r19 = MEM_BU(ctx->r29, 0X3B);
    // 0x8002A294: addiu       $s1, $zero, 0x1
    ctx->r17 = ADD32(0, 0X1);
    // 0x8002A298: slti        $at, $s3, 0x2
    ctx->r1 = SIGNED(ctx->r19) < 0X2 ? 1 : 0;
    // 0x8002A29C: bne         $at, $zero, L_8002A2FC
    if (ctx->r1 != 0) {
        // 0x8002A2A0: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_8002A2FC;
    }
    // 0x8002A2A0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_8002A2A4:
    // 0x8002A2A4: lw          $s0, 0x0($s2)
    ctx->r16 = MEM_W(ctx->r18, 0X0);
    // 0x8002A2A8: sll         $a0, $s4, 16
    ctx->r4 = S32(ctx->r20 << 16);
    // 0x8002A2AC: sra         $t0, $a0, 16
    ctx->r8 = S32(SIGNED(ctx->r4) >> 16);
    // 0x8002A2B0: or          $a0, $t0, $zero
    ctx->r4 = ctx->r8 | 0;
    // 0x8002A2B4: jal         0x80029CD0
    // 0x8002A2B8: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    func_80029CD0(rdram, ctx);
        goto after_4;
    // 0x8002A2B8: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_4:
    // 0x8002A2BC: bne         $v0, $s5, L_8002A2DC
    if (ctx->r2 != ctx->r21) {
        // 0x8002A2C0: sw          $v0, 0x0($s2)
        MEM_W(0X0, ctx->r18) = ctx->r2;
            goto L_8002A2DC;
    }
    // 0x8002A2C0: sw          $v0, 0x0($s2)
    MEM_W(0X0, ctx->r18) = ctx->r2;
    // 0x8002A2C4: lw          $t1, 0x30($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X30);
    // 0x8002A2C8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8002A2CC: jal         0x8002A3D8
    // 0x8002A2D0: sw          $s2, 0x18($t1)
    MEM_W(0X18, ctx->r9) = ctx->r18;
    func_8002A3D8(rdram, ctx);
        goto after_5;
    // 0x8002A2D0: sw          $s2, 0x18($t1)
    MEM_W(0X18, ctx->r9) = ctx->r18;
    after_5:
    // 0x8002A2D4: b           L_8002A2FC
    // 0x8002A2D8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_8002A2FC;
    // 0x8002A2D8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_8002A2DC:
    // 0x8002A2DC: jal         0x8002A3D8
    // 0x8002A2E0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8002A3D8(rdram, ctx);
        goto after_6;
    // 0x8002A2E0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_6:
    // 0x8002A2E4: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x8002A2E8: andi        $t2, $s1, 0xFFFF
    ctx->r10 = ctx->r17 & 0XFFFF;
    // 0x8002A2EC: slt         $at, $t2, $s3
    ctx->r1 = SIGNED(ctx->r10) < SIGNED(ctx->r19) ? 1 : 0;
    // 0x8002A2F0: bne         $at, $zero, L_8002A2A4
    if (ctx->r1 != 0) {
        // 0x8002A2F4: or          $s1, $t2, $zero
        ctx->r17 = ctx->r10 | 0;
            goto L_8002A2A4;
    }
    // 0x8002A2F4: or          $s1, $t2, $zero
    ctx->r17 = ctx->r10 | 0;
    // 0x8002A2F8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_8002A2FC:
    // 0x8002A2FC: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x8002A300: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x8002A304: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x8002A308: lw          $s2, 0x1C($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X1C);
    // 0x8002A30C: lw          $s3, 0x20($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X20);
    // 0x8002A310: lw          $s4, 0x24($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X24);
    // 0x8002A314: lw          $s5, 0x28($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X28);
    // 0x8002A318: jr          $ra
    // 0x8002A31C: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x8002A31C: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_8002A320(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8002A320: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8002A324: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x8002A328: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x8002A32C: or          $s1, $a0, $zero
    ctx->r17 = ctx->r4 | 0;
    // 0x8002A330: sw          $s3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r19;
    // 0x8002A334: sw          $s2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r18;
    // 0x8002A338: jal         0x80029A00
    // 0x8002A33C: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    func_80029A00(rdram, ctx);
        goto after_0;
    // 0x8002A33C: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    after_0:
    // 0x8002A340: sll         $s2, $v0, 16
    ctx->r18 = S32(ctx->r2 << 16);
    // 0x8002A344: sra         $t6, $s2, 16
    ctx->r14 = S32(SIGNED(ctx->r18) >> 16);
    // 0x8002A348: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x8002A34C: bne         $v0, $at, L_8002A35C
    if (ctx->r2 != ctx->r1) {
        // 0x8002A350: or          $s2, $t6, $zero
        ctx->r18 = ctx->r14 | 0;
            goto L_8002A35C;
    }
    // 0x8002A350: or          $s2, $t6, $zero
    ctx->r18 = ctx->r14 | 0;
    // 0x8002A354: b           L_8002A3BC
    // 0x8002A358: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_8002A3BC;
    // 0x8002A358: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_8002A35C:
    // 0x8002A35C: lw          $v0, 0x14($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X14);
    // 0x8002A360: addiu       $s3, $zero, -0x1
    ctx->r19 = ADD32(0, -0X1);
    // 0x8002A364: bne         $s3, $v0, L_8002A378
    if (ctx->r19 != ctx->r2) {
        // 0x8002A368: sll         $a0, $s2, 16
        ctx->r4 = S32(ctx->r18 << 16);
            goto L_8002A378;
    }
    // 0x8002A368: sll         $a0, $s2, 16
    ctx->r4 = S32(ctx->r18 << 16);
    // 0x8002A36C: b           L_8002A3BC
    // 0x8002A370: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_8002A3BC;
    // 0x8002A370: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x8002A374: sll         $a0, $s2, 16
    ctx->r4 = S32(ctx->r18 << 16);
L_8002A378:
    // 0x8002A378: sra         $t7, $a0, 16
    ctx->r15 = S32(SIGNED(ctx->r4) >> 16);
    // 0x8002A37C: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x8002A380: or          $a0, $t7, $zero
    ctx->r4 = ctx->r15 | 0;
    // 0x8002A384: jal         0x80029CD0
    // 0x8002A388: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    func_80029CD0(rdram, ctx);
        goto after_1;
    // 0x8002A388: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    after_1:
    // 0x8002A38C: bne         $v0, $s3, L_8002A3A8
    if (ctx->r2 != ctx->r19) {
        // 0x8002A390: sw          $v0, 0x14($s1)
        MEM_W(0X14, ctx->r17) = ctx->r2;
            goto L_8002A3A8;
    }
    // 0x8002A390: sw          $v0, 0x14($s1)
    MEM_W(0X14, ctx->r17) = ctx->r2;
    // 0x8002A394: sw          $s3, 0x18($s1)
    MEM_W(0X18, ctx->r17) = ctx->r19;
    // 0x8002A398: jal         0x8002A3D8
    // 0x8002A39C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8002A3D8(rdram, ctx);
        goto after_2;
    // 0x8002A39C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_2:
    // 0x8002A3A0: b           L_8002A3BC
    // 0x8002A3A4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_8002A3BC;
    // 0x8002A3A4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_8002A3A8:
    // 0x8002A3A8: jal         0x8002A3D8
    // 0x8002A3AC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8002A3D8(rdram, ctx);
        goto after_3;
    // 0x8002A3AC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_3:
    // 0x8002A3B0: lw          $v0, 0x14($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X14);
    // 0x8002A3B4: b           L_8002A378
    // 0x8002A3B8: sll         $a0, $s2, 16
    ctx->r4 = S32(ctx->r18 << 16);
        goto L_8002A378;
    // 0x8002A3B8: sll         $a0, $s2, 16
    ctx->r4 = S32(ctx->r18 << 16);
L_8002A3BC:
    // 0x8002A3BC: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x8002A3C0: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x8002A3C4: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x8002A3C8: lw          $s2, 0x1C($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X1C);
    // 0x8002A3CC: lw          $s3, 0x20($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X20);
    // 0x8002A3D0: jr          $ra
    // 0x8002A3D4: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x8002A3D4: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_8002A3D8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8002A3D8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8002A3DC: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x8002A3E0: beq         $a0, $at, L_8002A458
    if (ctx->r4 == ctx->r1) {
        // 0x8002A3E4: sw          $ra, 0x14($sp)
        MEM_W(0X14, ctx->r29) = ctx->r31;
            goto L_8002A458;
    }
    // 0x8002A3E4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8002A3E8: lw          $v0, 0x8($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X8);
    // 0x8002A3EC: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8002A3F0: sll         $t6, $v0, 28
    ctx->r14 = S32(ctx->r2 << 28);
    // 0x8002A3F4: srl         $t7, $t6, 29
    ctx->r15 = S32(U32(ctx->r14) >> 29);
    // 0x8002A3F8: beq         $t7, $at, L_8002A418
    if (ctx->r15 == ctx->r1) {
        // 0x8002A3FC: addiu       $at, $zero, 0x3
        ctx->r1 = ADD32(0, 0X3);
            goto L_8002A418;
    }
    // 0x8002A3FC: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x8002A400: beq         $t7, $at, L_8002A440
    if (ctx->r15 == ctx->r1) {
        // 0x8002A404: addiu       $at, $zero, 0x4
        ctx->r1 = ADD32(0, 0X4);
            goto L_8002A440;
    }
    // 0x8002A404: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x8002A408: beq         $t7, $at, L_8002A450
    if (ctx->r15 == ctx->r1) {
        // 0x8002A40C: nop
    
            goto L_8002A450;
    }
    // 0x8002A40C: nop

    // 0x8002A410: b           L_8002A45C
    // 0x8002A414: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_8002A45C;
    // 0x8002A414: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8002A418:
    // 0x8002A418: jal         0x80020E04
    // 0x8002A41C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_80020E04(rdram, ctx);
        goto after_0;
    // 0x8002A41C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x8002A420: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x8002A424: jal         0x8002A958
    // 0x8002A428: nop

    func_8002A958(rdram, ctx);
        goto after_1;
    // 0x8002A428: nop

    after_1:
    // 0x8002A42C: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x8002A430: jal         0x8002038C
    // 0x8002A434: nop

    func_8002038C(rdram, ctx);
        goto after_2;
    // 0x8002A434: nop

    after_2:
    // 0x8002A438: b           L_8002A45C
    // 0x8002A43C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_8002A45C;
    // 0x8002A43C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8002A440:
    // 0x8002A440: jal         0x800204C0
    // 0x8002A444: nop

    func_800204C0(rdram, ctx);
        goto after_3;
    // 0x8002A444: nop

    after_3:
    // 0x8002A448: b           L_8002A45C
    // 0x8002A44C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_8002A45C;
    // 0x8002A44C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8002A450:
    // 0x8002A450: jal         0x8002F310
    // 0x8002A454: nop

    func_8002F310(rdram, ctx);
        goto after_4;
    // 0x8002A454: nop

    after_4:
L_8002A458:
    // 0x8002A458: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8002A45C:
    // 0x8002A45C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8002A460: jr          $ra
    // 0x8002A464: nop

    return;
    // 0x8002A464: nop

;}
RECOMP_FUNC void func_8002A468(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8002A468: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8002A46C: lui         $t6, 0x801B
    ctx->r14 = S32(0X801B << 16);
    // 0x8002A470: lw          $t6, 0x1CF0($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X1CF0);
    // 0x8002A474: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x8002A478: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x8002A47C: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x8002A480: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8002A484: lw          $s0, 0x14($t6)
    ctx->r16 = MEM_W(ctx->r14, 0X14);
    // 0x8002A488: addiu       $s2, $zero, -0x1
    ctx->r18 = ADD32(0, -0X1);
    // 0x8002A48C: beq         $s0, $s2, L_8002A4AC
    if (ctx->r16 == ctx->r18) {
        // 0x8002A490: or          $s1, $a0, $zero
        ctx->r17 = ctx->r4 | 0;
            goto L_8002A4AC;
    }
    // 0x8002A490: or          $s1, $a0, $zero
    ctx->r17 = ctx->r4 | 0;
L_8002A494:
    // 0x8002A494: jalr        $s1
    // 0x8002A498: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    LOOKUP_FUNC(ctx->r17)(rdram, ctx);
        goto after_0;
    // 0x8002A498: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_0:
    // 0x8002A49C: lw          $s0, 0x0($s0)
    ctx->r16 = MEM_W(ctx->r16, 0X0);
    // 0x8002A4A0: nop

    // 0x8002A4A4: bne         $s0, $s2, L_8002A494
    if (ctx->r16 != ctx->r18) {
        // 0x8002A4A8: nop
    
            goto L_8002A494;
    }
    // 0x8002A4A8: nop

L_8002A4AC:
    // 0x8002A4AC: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x8002A4B0: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8002A4B4: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x8002A4B8: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x8002A4BC: jr          $ra
    // 0x8002A4C0: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x8002A4C0: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_8002A4C4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8002A4C4: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8002A4C8: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x8002A4CC: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x8002A4D0: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x8002A4D4: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8002A4D8: lw          $s0, 0x14($a0)
    ctx->r16 = MEM_W(ctx->r4, 0X14);
    // 0x8002A4DC: addiu       $s2, $zero, -0x1
    ctx->r18 = ADD32(0, -0X1);
    // 0x8002A4E0: beq         $s0, $s2, L_8002A500
    if (ctx->r16 == ctx->r18) {
        // 0x8002A4E4: or          $s1, $a1, $zero
        ctx->r17 = ctx->r5 | 0;
            goto L_8002A500;
    }
    // 0x8002A4E4: or          $s1, $a1, $zero
    ctx->r17 = ctx->r5 | 0;
L_8002A4E8:
    // 0x8002A4E8: jalr        $s1
    // 0x8002A4EC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    LOOKUP_FUNC(ctx->r17)(rdram, ctx);
        goto after_0;
    // 0x8002A4EC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_0:
    // 0x8002A4F0: lw          $s0, 0x0($s0)
    ctx->r16 = MEM_W(ctx->r16, 0X0);
    // 0x8002A4F4: nop

    // 0x8002A4F8: bne         $s0, $s2, L_8002A4E8
    if (ctx->r16 != ctx->r18) {
        // 0x8002A4FC: nop
    
            goto L_8002A4E8;
    }
    // 0x8002A4FC: nop

L_8002A500:
    // 0x8002A500: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x8002A504: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8002A508: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x8002A50C: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x8002A510: jr          $ra
    // 0x8002A514: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x8002A514: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_8002A518(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8002A518: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8002A51C: lui         $t6, 0x801B
    ctx->r14 = S32(0X801B << 16);
    // 0x8002A520: lw          $t6, 0x1CF0($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X1CF0);
    // 0x8002A524: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x8002A528: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x8002A52C: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x8002A530: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8002A534: lw          $t7, 0x14($t6)
    ctx->r15 = MEM_W(ctx->r14, 0X14);
    // 0x8002A538: addiu       $s2, $zero, -0x1
    ctx->r18 = ADD32(0, -0X1);
    // 0x8002A53C: lw          $s0, 0x0($t7)
    ctx->r16 = MEM_W(ctx->r15, 0X0);
    // 0x8002A540: or          $s1, $a0, $zero
    ctx->r17 = ctx->r4 | 0;
    // 0x8002A544: beq         $s0, $s2, L_8002A568
    if (ctx->r16 == ctx->r18) {
        // 0x8002A548: lw          $ra, 0x24($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X24);
            goto L_8002A568;
    }
    // 0x8002A548: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_8002A54C:
    // 0x8002A54C: jalr        $s1
    // 0x8002A550: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    LOOKUP_FUNC(ctx->r17)(rdram, ctx);
        goto after_0;
    // 0x8002A550: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_0:
    // 0x8002A554: lw          $s0, 0x0($s0)
    ctx->r16 = MEM_W(ctx->r16, 0X0);
    // 0x8002A558: nop

    // 0x8002A55C: bne         $s0, $s2, L_8002A54C
    if (ctx->r16 != ctx->r18) {
        // 0x8002A560: nop
    
            goto L_8002A54C;
    }
    // 0x8002A560: nop

    // 0x8002A564: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_8002A568:
    // 0x8002A568: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8002A56C: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x8002A570: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x8002A574: jr          $ra
    // 0x8002A578: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x8002A578: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_8002A57C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8002A57C: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8002A580: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x8002A584: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x8002A588: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x8002A58C: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8002A590: lw          $t6, 0x14($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X14);
    // 0x8002A594: addiu       $s2, $zero, -0x1
    ctx->r18 = ADD32(0, -0X1);
    // 0x8002A598: lw          $s0, 0x0($t6)
    ctx->r16 = MEM_W(ctx->r14, 0X0);
    // 0x8002A59C: or          $s1, $a1, $zero
    ctx->r17 = ctx->r5 | 0;
    // 0x8002A5A0: beq         $s0, $s2, L_8002A5C4
    if (ctx->r16 == ctx->r18) {
        // 0x8002A5A4: lw          $ra, 0x24($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X24);
            goto L_8002A5C4;
    }
    // 0x8002A5A4: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_8002A5A8:
    // 0x8002A5A8: jalr        $s1
    // 0x8002A5AC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    LOOKUP_FUNC(ctx->r17)(rdram, ctx);
        goto after_0;
    // 0x8002A5AC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_0:
    // 0x8002A5B0: lw          $s0, 0x0($s0)
    ctx->r16 = MEM_W(ctx->r16, 0X0);
    // 0x8002A5B4: nop

    // 0x8002A5B8: bne         $s0, $s2, L_8002A5A8
    if (ctx->r16 != ctx->r18) {
        // 0x8002A5BC: nop
    
            goto L_8002A5A8;
    }
    // 0x8002A5BC: nop

    // 0x8002A5C0: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_8002A5C4:
    // 0x8002A5C4: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8002A5C8: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x8002A5CC: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x8002A5D0: jr          $ra
    // 0x8002A5D4: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x8002A5D4: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_8002A5D8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8002A5D8: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8002A5DC: lui         $t6, 0x801B
    ctx->r14 = S32(0X801B << 16);
    // 0x8002A5E0: lw          $t6, 0x1CF0($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X1CF0);
    // 0x8002A5E4: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x8002A5E8: sw          $s3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r19;
    // 0x8002A5EC: sw          $s2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r18;
    // 0x8002A5F0: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x8002A5F4: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x8002A5F8: lw          $s0, 0x14($t6)
    ctx->r16 = MEM_W(ctx->r14, 0X14);
    // 0x8002A5FC: addiu       $s3, $zero, -0x1
    ctx->r19 = ADD32(0, -0X1);
    // 0x8002A600: or          $s2, $a0, $zero
    ctx->r18 = ctx->r4 | 0;
    // 0x8002A604: beq         $s0, $s3, L_8002A634
    if (ctx->r16 == ctx->r19) {
        // 0x8002A608: or          $s1, $zero, $zero
        ctx->r17 = 0 | 0;
            goto L_8002A634;
    }
    // 0x8002A608: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
L_8002A60C:
    // 0x8002A60C: sll         $a1, $s1, 16
    ctx->r5 = S32(ctx->r17 << 16);
    // 0x8002A610: sra         $t7, $a1, 16
    ctx->r15 = S32(SIGNED(ctx->r5) >> 16);
    // 0x8002A614: or          $a1, $t7, $zero
    ctx->r5 = ctx->r15 | 0;
    // 0x8002A618: jalr        $s2
    // 0x8002A61C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    LOOKUP_FUNC(ctx->r18)(rdram, ctx);
        goto after_0;
    // 0x8002A61C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_0:
    // 0x8002A620: lw          $s0, 0x0($s0)
    ctx->r16 = MEM_W(ctx->r16, 0X0);
    // 0x8002A624: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x8002A628: sll         $t8, $s1, 16
    ctx->r24 = S32(ctx->r17 << 16);
    // 0x8002A62C: bne         $s0, $s3, L_8002A60C
    if (ctx->r16 != ctx->r19) {
        // 0x8002A630: sra         $s1, $t8, 16
        ctx->r17 = S32(SIGNED(ctx->r24) >> 16);
            goto L_8002A60C;
    }
    // 0x8002A630: sra         $s1, $t8, 16
    ctx->r17 = S32(SIGNED(ctx->r24) >> 16);
L_8002A634:
    // 0x8002A634: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x8002A638: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x8002A63C: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x8002A640: lw          $s2, 0x1C($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X1C);
    // 0x8002A644: lw          $s3, 0x20($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X20);
    // 0x8002A648: jr          $ra
    // 0x8002A64C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x8002A64C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
