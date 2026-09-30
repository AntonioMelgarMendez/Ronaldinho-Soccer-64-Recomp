#include "iss64_recomp.h"
#include "funcs.h"

RECOMP_FUNC void func_800385C0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800385C0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800385C4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800385C8: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x800385CC: sb          $zero, -0x32A1($at)
    MEM_B(-0X32A1, ctx->r1) = 0;
    // 0x800385D0: jal         0x8001CA74
    // 0x800385D4: addiu       $a0, $zero, 0x45
    ctx->r4 = ADD32(0, 0X45);
    func_8001CA74(rdram, ctx);
        goto after_0;
    // 0x800385D4: addiu       $a0, $zero, 0x45
    ctx->r4 = ADD32(0, 0X45);
    after_0:
    // 0x800385D8: sll         $a2, $v0, 16
    ctx->r6 = S32(ctx->r2 << 16);
    // 0x800385DC: sra         $t6, $a2, 16
    ctx->r14 = S32(SIGNED(ctx->r6) >> 16);
    // 0x800385E0: or          $a2, $t6, $zero
    ctx->r6 = ctx->r14 | 0;
    // 0x800385E4: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x800385E8: jal         0x80038620
    // 0x800385EC: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    func_80038620(rdram, ctx);
        goto after_1;
    // 0x800385EC: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    after_1:
    // 0x800385F0: jal         0x8001CA74
    // 0x800385F4: addiu       $a0, $zero, 0x45
    ctx->r4 = ADD32(0, 0X45);
    func_8001CA74(rdram, ctx);
        goto after_2;
    // 0x800385F4: addiu       $a0, $zero, 0x45
    ctx->r4 = ADD32(0, 0X45);
    after_2:
    // 0x800385F8: sll         $a2, $v0, 16
    ctx->r6 = S32(ctx->r2 << 16);
    // 0x800385FC: sra         $t7, $a2, 16
    ctx->r15 = S32(SIGNED(ctx->r6) >> 16);
    // 0x80038600: or          $a2, $t7, $zero
    ctx->r6 = ctx->r15 | 0;
    // 0x80038604: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x80038608: jal         0x80038620
    // 0x8003860C: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    func_80038620(rdram, ctx);
        goto after_3;
    // 0x8003860C: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    after_3:
    // 0x80038610: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80038614: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80038618: jr          $ra
    // 0x8003861C: nop

    return;
    // 0x8003861C: nop

;}
RECOMP_FUNC void func_80038620(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80038620: addiu       $sp, $sp, -0x70
    ctx->r29 = ADD32(ctx->r29, -0X70);
    // 0x80038624: sw          $fp, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r30;
    // 0x80038628: sll         $fp, $a0, 24
    ctx->r30 = S32(ctx->r4 << 24);
    // 0x8003862C: sra         $t6, $fp, 24
    ctx->r14 = S32(SIGNED(ctx->r30) >> 24);
    // 0x80038630: sw          $ra, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r31;
    // 0x80038634: sw          $s1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r17;
    // 0x80038638: andi        $s1, $a1, 0xFF
    ctx->r17 = ctx->r5 & 0XFF;
    // 0x8003863C: or          $fp, $t6, $zero
    ctx->r30 = ctx->r14 | 0;
    // 0x80038640: sw          $s7, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r23;
    // 0x80038644: sw          $s6, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r22;
    // 0x80038648: sw          $s5, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r21;
    // 0x8003864C: sw          $s4, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r20;
    // 0x80038650: sw          $s3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r19;
    // 0x80038654: sw          $s2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r18;
    // 0x80038658: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x8003865C: swc1        $f21, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x80038660: swc1        $f20, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f20.u32l;
    // 0x80038664: sw          $a0, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->r4;
    // 0x80038668: sw          $a1, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->r5;
    // 0x8003866C: jal         0x80039028
    // 0x80038670: sw          $a2, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->r6;
    func_80039028(rdram, ctx);
        goto after_0;
    // 0x80038670: sw          $a2, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->r6;
    after_0:
    // 0x80038674: bne         $v0, $zero, L_800387C0
    if (ctx->r2 != 0) {
        // 0x80038678: sh          $v0, 0x68($sp)
        MEM_H(0X68, ctx->r29) = ctx->r2;
            goto L_800387C0;
    }
    // 0x80038678: sh          $v0, 0x68($sp)
    MEM_H(0X68, ctx->r29) = ctx->r2;
    // 0x8003867C: sll         $t7, $fp, 2
    ctx->r15 = S32(ctx->r30 << 2);
    // 0x80038680: addu        $t7, $t7, $fp
    ctx->r15 = ADD32(ctx->r15, ctx->r30);
    // 0x80038684: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80038688: addu        $t7, $t7, $fp
    ctx->r15 = ADD32(ctx->r15, ctx->r30);
    // 0x8003868C: sll         $t7, $t7, 3
    ctx->r15 = S32(ctx->r15 << 3);
    // 0x80038690: addu        $t7, $t7, $fp
    ctx->r15 = ADD32(ctx->r15, ctx->r30);
    // 0x80038694: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80038698: addu        $t7, $t7, $fp
    ctx->r15 = ADD32(ctx->r15, ctx->r30);
    // 0x8003869C: lui         $t8, 0x8012
    ctx->r24 = S32(0X8012 << 16);
    // 0x800386A0: addiu       $t8, $t8, -0x2CF0
    ctx->r24 = ADD32(ctx->r24, -0X2CF0);
    // 0x800386A4: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800386A8: addu        $s0, $t7, $t8
    ctx->r16 = ADD32(ctx->r15, ctx->r24);
    // 0x800386AC: lbu         $t9, 0x0($s0)
    ctx->r25 = MEM_BU(ctx->r16, 0X0);
    // 0x800386B0: lui         $t0, 0x800D
    ctx->r8 = S32(0X800D << 16);
    // 0x800386B4: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x800386B8: lbu         $t0, 0x7650($t0)
    ctx->r8 = MEM_BU(ctx->r8, 0X7650);
    // 0x800386BC: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x800386C0: mtc1        $t0, $f4
    ctx->f4.u32l = ctx->r8;
    // 0x800386C4: bgez        $t0, L_800386D8
    if (SIGNED(ctx->r8) >= 0) {
        // 0x800386C8: cvt.s.w     $f0, $f4
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    ctx->f0.fl = CVT_S_W(ctx->f4.u32l);
            goto L_800386D8;
    }
    // 0x800386C8: cvt.s.w     $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    ctx->f0.fl = CVT_S_W(ctx->f4.u32l);
    // 0x800386CC: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x800386D0: nop

    // 0x800386D4: add.s       $f0, $f0, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f6.fl;
L_800386D8:
    // 0x800386D8: bne         $fp, $zero, L_800386F4
    if (ctx->r30 != 0) {
        // 0x800386DC: nop
    
            goto L_800386F4;
    }
    // 0x800386DC: nop

    // 0x800386E0: jal         0x80038AC4
    // 0x800386E4: swc1        $f0, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->f0.u32l;
    func_80038AC4(rdram, ctx);
        goto after_1;
    // 0x800386E4: swc1        $f0, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->f0.u32l;
    after_1:
    // 0x800386E8: lwc1        $f0, 0x64($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X64);
    // 0x800386EC: bne         $v0, $zero, L_80038710
    if (ctx->r2 != 0) {
        // 0x800386F0: nop
    
            goto L_80038710;
    }
    // 0x800386F0: nop

L_800386F4:
    // 0x800386F4: beq         $fp, $zero, L_80038720
    if (ctx->r30 == 0) {
        // 0x800386F8: lui         $at, 0x4380
        ctx->r1 = S32(0X4380 << 16);
            goto L_80038720;
    }
    // 0x800386F8: lui         $at, 0x4380
    ctx->r1 = S32(0X4380 << 16);
    // 0x800386FC: jal         0x80038AC4
    // 0x80038700: swc1        $f0, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->f0.u32l;
    func_80038AC4(rdram, ctx);
        goto after_2;
    // 0x80038700: swc1        $f0, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->f0.u32l;
    after_2:
    // 0x80038704: lwc1        $f0, 0x64($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X64);
    // 0x80038708: bne         $v0, $zero, L_80038720
    if (ctx->r2 != 0) {
        // 0x8003870C: lui         $at, 0x4380
        ctx->r1 = S32(0X4380 << 16);
            goto L_80038720;
    }
    // 0x8003870C: lui         $at, 0x4380
    ctx->r1 = S32(0X4380 << 16);
L_80038710:
    // 0x80038710: lbu         $v0, 0x0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X0);
    // 0x80038714: b           L_80038730
    // 0x80038718: xori        $t2, $fp, 0x1
    ctx->r10 = ctx->r30 ^ 0X1;
        goto L_80038730;
    // 0x80038718: xori        $t2, $fp, 0x1
    ctx->r10 = ctx->r30 ^ 0X1;
    // 0x8003871C: lui         $at, 0x4380
    ctx->r1 = S32(0X4380 << 16);
L_80038720:
    // 0x80038720: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x80038724: lbu         $v0, 0x0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X0);
    // 0x80038728: sub.s       $f0, $f8, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = ctx->f8.fl - ctx->f0.fl;
    // 0x8003872C: xori        $t2, $fp, 0x1
    ctx->r10 = ctx->r30 ^ 0X1;
L_80038730:
    // 0x80038730: sll         $t3, $t2, 2
    ctx->r11 = S32(ctx->r10 << 2);
    // 0x80038734: addu        $t3, $t3, $t2
    ctx->r11 = ADD32(ctx->r11, ctx->r10);
    // 0x80038738: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x8003873C: addu        $t3, $t3, $t2
    ctx->r11 = ADD32(ctx->r11, ctx->r10);
    // 0x80038740: sll         $t3, $t3, 3
    ctx->r11 = S32(ctx->r11 << 3);
    // 0x80038744: addu        $t3, $t3, $t2
    ctx->r11 = ADD32(ctx->r11, ctx->r10);
    // 0x80038748: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x8003874C: addu        $t3, $t3, $t2
    ctx->r11 = ADD32(ctx->r11, ctx->r10);
    // 0x80038750: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x80038754: lui         $a1, 0x8012
    ctx->r5 = S32(0X8012 << 16);
    // 0x80038758: addu        $a1, $a1, $t3
    ctx->r5 = ADD32(ctx->r5, ctx->r11);
    // 0x8003875C: sll         $a0, $v0, 16
    ctx->r4 = S32(ctx->r2 << 16);
    // 0x80038760: sra         $t1, $a0, 16
    ctx->r9 = S32(SIGNED(ctx->r4) >> 16);
    // 0x80038764: lbu         $a1, -0x2CF0($a1)
    ctx->r5 = MEM_BU(ctx->r5, -0X2CF0);
    // 0x80038768: or          $a0, $t1, $zero
    ctx->r4 = ctx->r9 | 0;
    // 0x8003876C: jal         0x80038AE0
    // 0x80038770: swc1        $f0, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->f0.u32l;
    func_80038AE0(rdram, ctx);
        goto after_3;
    // 0x80038770: swc1        $f0, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->f0.u32l;
    after_3:
    // 0x80038774: mtc1        $v0, $f10
    ctx->f10.u32l = ctx->r2;
    // 0x80038778: lwc1        $f0, 0x64($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X64);
    // 0x8003877C: bgez        $v0, L_80038794
    if (SIGNED(ctx->r2) >= 0) {
        // 0x80038780: cvt.s.w     $f16, $f10
        CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.fl = CVT_S_W(ctx->f10.u32l);
            goto L_80038794;
    }
    // 0x80038780: cvt.s.w     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.fl = CVT_S_W(ctx->f10.u32l);
    // 0x80038784: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x80038788: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x8003878C: nop

    // 0x80038790: add.s       $f16, $f16, $f18
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f16.fl = ctx->f16.fl + ctx->f18.fl;
L_80038794:
    // 0x80038794: lui         $at, 0x4400
    ctx->r1 = S32(0X4400 << 16);
    // 0x80038798: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x8003879C: add.s       $f4, $f0, $f16
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f4.fl = ctx->f0.fl + ctx->f16.fl;
    // 0x800387A0: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x800387A4: div.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = DIV_S(ctx->f4.fl, ctx->f6.fl);
    // 0x800387A8: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x800387AC: lui         $at, 0x40A0
    ctx->r1 = S32(0X40A0 << 16);
    // 0x800387B0: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x800387B4: mul.s       $f18, $f8, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f18.fl = MUL_S(ctx->f8.fl, ctx->f10.fl);
    // 0x800387B8: b           L_800387C8
    // 0x800387BC: sub.s       $f20, $f18, $f16
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f20.fl = ctx->f18.fl - ctx->f16.fl;
        goto L_800387C8;
    // 0x800387BC: sub.s       $f20, $f18, $f16
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f20.fl = ctx->f18.fl - ctx->f16.fl;
L_800387C0:
    // 0x800387C0: mtc1        $zero, $f20
    ctx->f20.u32l = 0;
    // 0x800387C4: nop

L_800387C8:
    // 0x800387C8: sll         $t4, $fp, 2
    ctx->r12 = S32(ctx->r30 << 2);
    // 0x800387CC: addu        $t4, $t4, $fp
    ctx->r12 = ADD32(ctx->r12, ctx->r30);
    // 0x800387D0: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x800387D4: addu        $t4, $t4, $fp
    ctx->r12 = ADD32(ctx->r12, ctx->r30);
    // 0x800387D8: sll         $t4, $t4, 3
    ctx->r12 = S32(ctx->r12 << 3);
    // 0x800387DC: addu        $t4, $t4, $fp
    ctx->r12 = ADD32(ctx->r12, ctx->r30);
    // 0x800387E0: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x800387E4: addu        $t4, $t4, $fp
    ctx->r12 = ADD32(ctx->r12, ctx->r30);
    // 0x800387E8: lui         $t5, 0x8012
    ctx->r13 = S32(0X8012 << 16);
    // 0x800387EC: addiu       $t5, $t5, -0x2CF0
    ctx->r13 = ADD32(ctx->r13, -0X2CF0);
    // 0x800387F0: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x800387F4: addu        $t6, $t4, $t5
    ctx->r14 = ADD32(ctx->r12, ctx->r13);
    // 0x800387F8: lui         $s7, 0x8012
    ctx->r23 = S32(0X8012 << 16);
    // 0x800387FC: lui         $s2, 0x800D
    ctx->r18 = S32(0X800D << 16);
    // 0x80038800: addiu       $s2, $s2, 0x5248
    ctx->r18 = ADD32(ctx->r18, 0X5248);
    // 0x80038804: addiu       $s7, $s7, -0x32B0
    ctx->r23 = ADD32(ctx->r23, -0X32B0);
    // 0x80038808: sw          $t6, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r14;
    // 0x8003880C: or          $s3, $zero, $zero
    ctx->r19 = 0 | 0;
    // 0x80038810: or          $s5, $s1, $zero
    ctx->r21 = ctx->r17 | 0;
L_80038814:
    // 0x80038814: slti        $at, $s5, 0x5
    ctx->r1 = SIGNED(ctx->r21) < 0X5 ? 1 : 0;
    // 0x80038818: beq         $at, $zero, L_80038830
    if (ctx->r1 == 0) {
        // 0x8003881C: sll         $a0, $fp, 24
        ctx->r4 = S32(ctx->r30 << 24);
            goto L_80038830;
    }
    // 0x8003881C: sll         $a0, $fp, 24
    ctx->r4 = S32(ctx->r30 << 24);
    // 0x80038820: sll         $s1, $s5, 16
    ctx->r17 = S32(ctx->r21 << 16);
    // 0x80038824: sra         $t7, $s1, 16
    ctx->r15 = S32(SIGNED(ctx->r17) >> 16);
    // 0x80038828: b           L_8003899C
    // 0x8003882C: or          $s1, $t7, $zero
    ctx->r17 = ctx->r15 | 0;
        goto L_8003899C;
    // 0x8003882C: or          $s1, $t7, $zero
    ctx->r17 = ctx->r15 | 0;
L_80038830:
    // 0x80038830: lh          $t9, 0x68($sp)
    ctx->r25 = MEM_H(ctx->r29, 0X68);
    // 0x80038834: lui         $t1, 0x800D
    ctx->r9 = S32(0X800D << 16);
    // 0x80038838: addiu       $t1, $t1, 0x5200
    ctx->r9 = ADD32(ctx->r9, 0X5200);
    // 0x8003883C: sra         $t8, $a0, 24
    ctx->r24 = S32(SIGNED(ctx->r4) >> 24);
    // 0x80038840: lh          $a2, 0x7A($sp)
    ctx->r6 = MEM_H(ctx->r29, 0X7A);
    // 0x80038844: sll         $t0, $t9, 4
    ctx->r8 = S32(ctx->r25 << 4);
    // 0x80038848: addu        $s6, $t0, $t1
    ctx->r22 = ADD32(ctx->r8, ctx->r9);
    // 0x8003884C: or          $a0, $t8, $zero
    ctx->r4 = ctx->r24 | 0;
    // 0x80038850: andi        $a1, $s3, 0xFF
    ctx->r5 = ctx->r19 & 0XFF;
    // 0x80038854: jal         0x8003C8F8
    // 0x80038858: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    func_8003C8F8(rdram, ctx);
        goto after_4;
    // 0x80038858: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    after_4:
    // 0x8003885C: sll         $a0, $v0, 16
    ctx->r4 = S32(ctx->r2 << 16);
    // 0x80038860: sra         $t2, $a0, 16
    ctx->r10 = S32(SIGNED(ctx->r4) >> 16);
    // 0x80038864: jal         0x8003CB48
    // 0x80038868: or          $a0, $t2, $zero
    ctx->r4 = ctx->r10 | 0;
    func_8003CB48(rdram, ctx);
        goto after_5;
    // 0x80038868: or          $a0, $t2, $zero
    ctx->r4 = ctx->r10 | 0;
    after_5:
    // 0x8003886C: lui         $at, 0x42C8
    ctx->r1 = S32(0X42C8 << 16);
    // 0x80038870: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80038874: nop

    // 0x80038878: mul.s       $f6, $f0, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f0.fl, ctx->f4.fl);
    // 0x8003887C: add.s       $f8, $f6, $f20
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f8.fl = ctx->f6.fl + ctx->f20.fl;
    // 0x80038880: cfc1        $t3, $FpcCsr
    ctx->r11 = get_cop1_cs();
    // 0x80038884: nop

    // 0x80038888: ori         $at, $t3, 0x3
    ctx->r1 = ctx->r11 | 0X3;
    // 0x8003888C: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x80038890: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x80038894: nop

    // 0x80038898: cvt.w.s     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.u32l = CVT_W_S(ctx->f8.fl);
    // 0x8003889C: mfc1        $v0, $f10
    ctx->r2 = (int32_t)ctx->f10.u32l;
    // 0x800388A0: ctc1        $t3, $FpcCsr
    set_cop1_cs(ctx->r11);
    // 0x800388A4: sll         $t4, $v0, 16
    ctx->r12 = S32(ctx->r2 << 16);
    // 0x800388A8: sra         $v0, $t4, 16
    ctx->r2 = S32(SIGNED(ctx->r12) >> 16);
    // 0x800388AC: addu        $t6, $s2, $s0
    ctx->r14 = ADD32(ctx->r18, ctx->r16);
L_800388B0:
    // 0x800388B0: lb          $t7, 0x0($t6)
    ctx->r15 = MEM_B(ctx->r14, 0X0);
    // 0x800388B4: nop

    // 0x800388B8: slt         $at, $v0, $t7
    ctx->r1 = SIGNED(ctx->r2) < SIGNED(ctx->r15) ? 1 : 0;
    // 0x800388BC: bne         $at, $zero, L_800388DC
    if (ctx->r1 != 0) {
        // 0x800388C0: nop
    
            goto L_800388DC;
    }
    // 0x800388C0: nop

    // 0x800388C4: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x800388C8: sll         $t8, $s0, 16
    ctx->r24 = S32(ctx->r16 << 16);
    // 0x800388CC: sra         $s0, $t8, 16
    ctx->r16 = S32(SIGNED(ctx->r24) >> 16);
    // 0x800388D0: slti        $at, $s0, 0x4
    ctx->r1 = SIGNED(ctx->r16) < 0X4 ? 1 : 0;
    // 0x800388D4: bne         $at, $zero, L_800388B0
    if (ctx->r1 != 0) {
        // 0x800388D8: addu        $t6, $s2, $s0
        ctx->r14 = ADD32(ctx->r18, ctx->r16);
            goto L_800388B0;
    }
    // 0x800388D8: addu        $t6, $s2, $s0
    ctx->r14 = ADD32(ctx->r18, ctx->r16);
L_800388DC:
    // 0x800388DC: jal         0x8001C9DC
    // 0x800388E0: nop

    func_8001C9DC(rdram, ctx);
        goto after_6;
    // 0x800388E0: nop

    after_6:
    // 0x800388E4: lbu         $a3, 0xC($s7)
    ctx->r7 = MEM_BU(ctx->r23, 0XC);
    // 0x800388E8: andi        $s4, $v0, 0xFFFF
    ctx->r20 = ctx->r2 & 0XFFFF;
    // 0x800388EC: xori        $t0, $a3, 0x1
    ctx->r8 = ctx->r7 ^ 0X1;
    // 0x800388F0: sltiu       $a3, $t0, 0x1
    ctx->r7 = ctx->r8 < 0X1 ? 1 : 0;
    // 0x800388F4: bne         $a3, $zero, L_80038958
    if (ctx->r7 != 0) {
        // 0x800388F8: nop
    
            goto L_80038958;
    }
    // 0x800388F8: nop

    // 0x800388FC: jal         0x80039028
    // 0x80038900: nop

    func_80039028(rdram, ctx);
        goto after_7;
    // 0x80038900: nop

    after_7:
    // 0x80038904: sltiu       $a3, $v0, 0x1
    ctx->r7 = ctx->r2 < 0X1 ? 1 : 0;
    // 0x80038908: beq         $a3, $zero, L_80038958
    if (ctx->r7 == 0) {
        // 0x8003890C: nop
    
            goto L_80038958;
    }
    // 0x8003890C: nop

    // 0x80038910: lb          $t1, 0xF($s7)
    ctx->r9 = MEM_B(ctx->r23, 0XF);
    // 0x80038914: lui         $a3, 0x8011
    ctx->r7 = S32(0X8011 << 16);
    // 0x80038918: sll         $t2, $t1, 2
    ctx->r10 = S32(ctx->r9 << 2);
    // 0x8003891C: subu        $t2, $t2, $t1
    ctx->r10 = SUB32(ctx->r10, ctx->r9);
    // 0x80038920: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x80038924: addu        $t2, $t2, $t1
    ctx->r10 = ADD32(ctx->r10, ctx->r9);
    // 0x80038928: sll         $t2, $t2, 3
    ctx->r10 = S32(ctx->r10 << 3);
    // 0x8003892C: subu        $t2, $t2, $t1
    ctx->r10 = SUB32(ctx->r10, ctx->r9);
    // 0x80038930: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x80038934: addu        $t2, $t2, $t1
    ctx->r10 = ADD32(ctx->r10, ctx->r9);
    // 0x80038938: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x8003893C: subu        $t2, $t2, $t1
    ctx->r10 = SUB32(ctx->r10, ctx->r9);
    // 0x80038940: sll         $t2, $t2, 3
    ctx->r10 = S32(ctx->r10 << 3);
    // 0x80038944: addu        $a3, $a3, $t2
    ctx->r7 = ADD32(ctx->r7, ctx->r10);
    // 0x80038948: lb          $a3, -0x2F7F($a3)
    ctx->r7 = MEM_B(ctx->r7, -0X2F7F);
    // 0x8003894C: nop

    // 0x80038950: sltiu       $t3, $a3, 0x1
    ctx->r11 = ctx->r7 < 0X1 ? 1 : 0;
    // 0x80038954: or          $a3, $t3, $zero
    ctx->r7 = ctx->r11 | 0;
L_80038958:
    // 0x80038958: jal         0x8001C970
    // 0x8003895C: sw          $a3, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r7;
    func_8001C970(rdram, ctx);
        goto after_8;
    // 0x8003895C: sw          $a3, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r7;
    after_8:
    // 0x80038960: lw          $a3, 0x54($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X54);
    // 0x80038964: addu        $t6, $s6, $s4
    ctx->r14 = ADD32(ctx->r22, ctx->r20);
    // 0x80038968: multu       $v0, $a3
    result = U64(U32(ctx->r2)) * U64(U32(ctx->r7)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8003896C: lb          $t7, 0x0($t6)
    ctx->r15 = MEM_B(ctx->r14, 0X0);
    // 0x80038970: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80038974: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    // 0x80038978: mflo        $t4
    ctx->r12 = lo;
    // 0x8003897C: addu        $t5, $t4, $s0
    ctx->r13 = ADD32(ctx->r12, ctx->r16);
    // 0x80038980: addu        $s1, $t5, $t7
    ctx->r17 = ADD32(ctx->r13, ctx->r15);
    // 0x80038984: sll         $t8, $s1, 16
    ctx->r24 = S32(ctx->r17 << 16);
    // 0x80038988: jal         0x8001D4C0
    // 0x8003898C: sra         $a0, $t8, 16
    ctx->r4 = S32(SIGNED(ctx->r24) >> 16);
    func_8001D4C0(rdram, ctx);
        goto after_9;
    // 0x8003898C: sra         $a0, $t8, 16
    ctx->r4 = S32(SIGNED(ctx->r24) >> 16);
    after_9:
    // 0x80038990: sll         $s1, $v0, 16
    ctx->r17 = S32(ctx->r2 << 16);
    // 0x80038994: sra         $t0, $s1, 16
    ctx->r8 = S32(SIGNED(ctx->r17) >> 16);
    // 0x80038998: or          $s1, $t0, $zero
    ctx->r17 = ctx->r8 | 0;
L_8003899C:
    // 0x8003899C: sll         $t2, $s3, 2
    ctx->r10 = S32(ctx->r19 << 2);
    // 0x800389A0: subu        $t2, $t2, $s3
    ctx->r10 = SUB32(ctx->r10, ctx->r19);
    // 0x800389A4: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x800389A8: subu        $t2, $t2, $s3
    ctx->r10 = SUB32(ctx->r10, ctx->r19);
    // 0x800389AC: addiu       $s3, $s3, 0x1
    ctx->r19 = ADD32(ctx->r19, 0X1);
    // 0x800389B0: lw          $t1, 0x48($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X48);
    // 0x800389B4: sll         $t4, $s3, 16
    ctx->r12 = S32(ctx->r19 << 16);
    // 0x800389B8: sra         $s3, $t4, 16
    ctx->r19 = S32(SIGNED(ctx->r12) >> 16);
    // 0x800389BC: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x800389C0: slti        $at, $s3, 0x10
    ctx->r1 = SIGNED(ctx->r19) < 0X10 ? 1 : 0;
    // 0x800389C4: addu        $t3, $t1, $t2
    ctx->r11 = ADD32(ctx->r9, ctx->r10);
    // 0x800389C8: bne         $at, $zero, L_80038814
    if (ctx->r1 != 0) {
        // 0x800389CC: sb          $s1, 0x41($t3)
        MEM_B(0X41, ctx->r11) = ctx->r17;
            goto L_80038814;
    }
    // 0x800389CC: sb          $s1, 0x41($t3)
    MEM_B(0X41, ctx->r11) = ctx->r17;
    // 0x800389D0: slti        $at, $s5, 0x5
    ctx->r1 = SIGNED(ctx->r21) < 0X5 ? 1 : 0;
    // 0x800389D4: bne         $at, $zero, L_80038A8C
    if (ctx->r1 != 0) {
        // 0x800389D8: sll         $t5, $fp, 2
        ctx->r13 = S32(ctx->r30 << 2);
            goto L_80038A8C;
    }
    // 0x800389D8: sll         $t5, $fp, 2
    ctx->r13 = S32(ctx->r30 << 2);
    // 0x800389DC: addu        $t5, $t5, $fp
    ctx->r13 = ADD32(ctx->r13, ctx->r30);
    // 0x800389E0: sll         $t5, $t5, 2
    ctx->r13 = S32(ctx->r13 << 2);
    // 0x800389E4: addu        $t5, $t5, $fp
    ctx->r13 = ADD32(ctx->r13, ctx->r30);
    // 0x800389E8: sll         $t5, $t5, 3
    ctx->r13 = S32(ctx->r13 << 3);
    // 0x800389EC: addu        $t5, $t5, $fp
    ctx->r13 = ADD32(ctx->r13, ctx->r30);
    // 0x800389F0: sll         $t5, $t5, 2
    ctx->r13 = S32(ctx->r13 << 2);
    // 0x800389F4: addu        $t5, $t5, $fp
    ctx->r13 = ADD32(ctx->r13, ctx->r30);
    // 0x800389F8: lui         $t7, 0x8012
    ctx->r15 = S32(0X8012 << 16);
    // 0x800389FC: addiu       $t7, $t7, -0x2CF0
    ctx->r15 = ADD32(ctx->r15, -0X2CF0);
    // 0x80038A00: sll         $t5, $t5, 2
    ctx->r13 = S32(ctx->r13 << 2);
    // 0x80038A04: addu        $s0, $t5, $t7
    ctx->r16 = ADD32(ctx->r13, ctx->r15);
    // 0x80038A08: lbu         $t8, 0x41($s0)
    ctx->r24 = MEM_BU(ctx->r16, 0X41);
    // 0x80038A0C: addiu       $s3, $zero, 0x1
    ctx->r19 = ADD32(0, 0X1);
    // 0x80038A10: bne         $t8, $zero, L_80038A8C
    if (ctx->r24 != 0) {
        // 0x80038A14: sll         $a0, $fp, 24
        ctx->r4 = S32(ctx->r30 << 24);
            goto L_80038A8C;
    }
    // 0x80038A14: sll         $a0, $fp, 24
    ctx->r4 = S32(ctx->r30 << 24);
L_80038A18:
    // 0x80038A18: sll         $a1, $s3, 24
    ctx->r5 = S32(ctx->r19 << 24);
    // 0x80038A1C: sra         $t0, $a1, 24
    ctx->r8 = S32(SIGNED(ctx->r5) >> 24);
    // 0x80038A20: sra         $t9, $a0, 24
    ctx->r25 = S32(SIGNED(ctx->r4) >> 24);
    // 0x80038A24: or          $a0, $t9, $zero
    ctx->r4 = ctx->r25 | 0;
    // 0x80038A28: or          $a1, $t0, $zero
    ctx->r5 = ctx->r8 | 0;
    // 0x80038A2C: addiu       $a2, $zero, 0x1D
    ctx->r6 = ADD32(0, 0X1D);
    // 0x80038A30: jal         0x80042320
    // 0x80038A34: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    func_80042320(rdram, ctx);
        goto after_10;
    // 0x80038A34: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_10:
    // 0x80038A38: andi        $t1, $v0, 0x1
    ctx->r9 = ctx->r2 & 0X1;
    // 0x80038A3C: beq         $t1, $zero, L_80038A74
    if (ctx->r9 == 0) {
        // 0x80038A40: sll         $t3, $s3, 2
        ctx->r11 = S32(ctx->r19 << 2);
            goto L_80038A74;
    }
    // 0x80038A40: sll         $t3, $s3, 2
    ctx->r11 = S32(ctx->r19 << 2);
    // 0x80038A44: subu        $t3, $t3, $s3
    ctx->r11 = SUB32(ctx->r11, ctx->r19);
    // 0x80038A48: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x80038A4C: lw          $t2, 0x48($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X48);
    // 0x80038A50: subu        $t3, $t3, $s3
    ctx->r11 = SUB32(ctx->r11, ctx->r19);
    // 0x80038A54: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x80038A58: addu        $t4, $t2, $t3
    ctx->r12 = ADD32(ctx->r10, ctx->r11);
    // 0x80038A5C: lbu         $t6, 0x41($t4)
    ctx->r14 = MEM_BU(ctx->r12, 0X41);
    // 0x80038A60: nop

    // 0x80038A64: bne         $t6, $zero, L_80038A74
    if (ctx->r14 != 0) {
        // 0x80038A68: addiu       $t5, $zero, 0x2
        ctx->r13 = ADD32(0, 0X2);
            goto L_80038A74;
    }
    // 0x80038A68: addiu       $t5, $zero, 0x2
    ctx->r13 = ADD32(0, 0X2);
    // 0x80038A6C: b           L_80038A8C
    // 0x80038A70: sb          $t5, 0x41($s0)
    MEM_B(0X41, ctx->r16) = ctx->r13;
        goto L_80038A8C;
    // 0x80038A70: sb          $t5, 0x41($s0)
    MEM_B(0X41, ctx->r16) = ctx->r13;
L_80038A74:
    // 0x80038A74: addiu       $s3, $s3, 0x1
    ctx->r19 = ADD32(ctx->r19, 0X1);
    // 0x80038A78: sll         $t7, $s3, 16
    ctx->r15 = S32(ctx->r19 << 16);
    // 0x80038A7C: sra         $s3, $t7, 16
    ctx->r19 = S32(SIGNED(ctx->r15) >> 16);
    // 0x80038A80: slti        $at, $s3, 0x10
    ctx->r1 = SIGNED(ctx->r19) < 0X10 ? 1 : 0;
    // 0x80038A84: bne         $at, $zero, L_80038A18
    if (ctx->r1 != 0) {
        // 0x80038A88: sll         $a0, $fp, 24
        ctx->r4 = S32(ctx->r30 << 24);
            goto L_80038A18;
    }
    // 0x80038A88: sll         $a0, $fp, 24
    ctx->r4 = S32(ctx->r30 << 24);
L_80038A8C:
    // 0x80038A8C: lw          $ra, 0x44($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X44);
    // 0x80038A90: lwc1        $f21, 0x18($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X18);
    // 0x80038A94: lwc1        $f20, 0x1C($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x80038A98: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x80038A9C: lw          $s1, 0x24($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X24);
    // 0x80038AA0: lw          $s2, 0x28($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X28);
    // 0x80038AA4: lw          $s3, 0x2C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X2C);
    // 0x80038AA8: lw          $s4, 0x30($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X30);
    // 0x80038AAC: lw          $s5, 0x34($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X34);
    // 0x80038AB0: lw          $s6, 0x38($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X38);
    // 0x80038AB4: lw          $s7, 0x3C($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X3C);
    // 0x80038AB8: lw          $fp, 0x40($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X40);
    // 0x80038ABC: jr          $ra
    // 0x80038AC0: addiu       $sp, $sp, 0x70
    ctx->r29 = ADD32(ctx->r29, 0X70);
    return;
    // 0x80038AC0: addiu       $sp, $sp, 0x70
    ctx->r29 = ADD32(ctx->r29, 0X70);
;}
RECOMP_FUNC void func_80038AC4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80038AC4: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x80038AC8: lhu         $v0, -0x2254($v0)
    ctx->r2 = MEM_HU(ctx->r2, -0X2254);
    // 0x80038ACC: nop

    // 0x80038AD0: andi        $t6, $v0, 0x8
    ctx->r14 = ctx->r2 & 0X8;
    // 0x80038AD4: sll         $t7, $t6, 16
    ctx->r15 = S32(ctx->r14 << 16);
    // 0x80038AD8: jr          $ra
    // 0x80038ADC: sra         $v0, $t7, 16
    ctx->r2 = S32(SIGNED(ctx->r15) >> 16);
    return;
    // 0x80038ADC: sra         $v0, $t7, 16
    ctx->r2 = S32(SIGNED(ctx->r15) >> 16);
;}
RECOMP_FUNC void func_80038AE0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80038AE0: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x80038AE4: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    // 0x80038AE8: jr          $ra
    // 0x80038AEC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    return;
    // 0x80038AEC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
;}
RECOMP_FUNC void func_80038AF0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80038AF0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80038AF4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80038AF8: jal         0x80038B18
    // 0x80038AFC: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    func_80038B18(rdram, ctx);
        goto after_0;
    // 0x80038AFC: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_0:
    // 0x80038B00: jal         0x80038B18
    // 0x80038B04: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    func_80038B18(rdram, ctx);
        goto after_1;
    // 0x80038B04: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_1:
    // 0x80038B08: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80038B0C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80038B10: jr          $ra
    // 0x80038B14: nop

    return;
    // 0x80038B14: nop

;}
RECOMP_FUNC void func_80038B18(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80038B18: sll         $t6, $a0, 24
    ctx->r14 = S32(ctx->r4 << 24);
    // 0x80038B1C: sra         $t7, $t6, 24
    ctx->r15 = S32(SIGNED(ctx->r14) >> 24);
    // 0x80038B20: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x80038B24: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x80038B28: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x80038B2C: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x80038B30: sll         $t8, $t8, 3
    ctx->r24 = S32(ctx->r24 << 3);
    // 0x80038B34: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x80038B38: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x80038B3C: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x80038B40: lui         $t9, 0x8012
    ctx->r25 = S32(0X8012 << 16);
    // 0x80038B44: addiu       $t9, $t9, -0x2CF0
    ctx->r25 = ADD32(ctx->r25, -0X2CF0);
    // 0x80038B48: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x80038B4C: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x80038B50: addu        $v1, $t8, $t9
    ctx->r3 = ADD32(ctx->r24, ctx->r25);
    // 0x80038B54: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x80038B58: addiu       $a2, $zero, 0x2C
    ctx->r6 = ADD32(0, 0X2C);
L_80038B5C:
    // 0x80038B5C: multu       $v0, $a2
    result = U64(U32(ctx->r2)) * U64(U32(ctx->r6)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80038B60: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80038B64: sll         $t1, $v0, 16
    ctx->r9 = S32(ctx->r2 << 16);
    // 0x80038B68: sra         $v0, $t1, 16
    ctx->r2 = S32(SIGNED(ctx->r9) >> 16);
    // 0x80038B6C: slti        $at, $v0, 0x10
    ctx->r1 = SIGNED(ctx->r2) < 0X10 ? 1 : 0;
    // 0x80038B70: mflo        $t0
    ctx->r8 = lo;
    // 0x80038B74: addu        $a0, $v1, $t0
    ctx->r4 = ADD32(ctx->r3, ctx->r8);
    // 0x80038B78: sb          $zero, 0x45($a0)
    MEM_B(0X45, ctx->r4) = 0;
    // 0x80038B7C: sb          $zero, 0x44($a0)
    MEM_B(0X44, ctx->r4) = 0;
    // 0x80038B80: bne         $at, $zero, L_80038B5C
    if (ctx->r1 != 0) {
        // 0x80038B84: sb          $zero, 0x43($a0)
        MEM_B(0X43, ctx->r4) = 0;
            goto L_80038B5C;
    }
    // 0x80038B84: sb          $zero, 0x43($a0)
    MEM_B(0X43, ctx->r4) = 0;
    // 0x80038B88: jr          $ra
    // 0x80038B8C: nop

    return;
    // 0x80038B8C: nop

;}
RECOMP_FUNC void func_80038B90(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80038B90: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x80038B94: addiu       $a1, $zero, 0x2C
    ctx->r5 = ADD32(0, 0X2C);
    // 0x80038B98: sll         $t6, $v0, 2
    ctx->r14 = S32(ctx->r2 << 2);
L_80038B9C:
    // 0x80038B9C: addu        $t6, $t6, $v0
    ctx->r14 = ADD32(ctx->r14, ctx->r2);
    // 0x80038BA0: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x80038BA4: addu        $t6, $t6, $v0
    ctx->r14 = ADD32(ctx->r14, ctx->r2);
    // 0x80038BA8: sll         $t6, $t6, 3
    ctx->r14 = S32(ctx->r14 << 3);
    // 0x80038BAC: addu        $t6, $t6, $v0
    ctx->r14 = ADD32(ctx->r14, ctx->r2);
    // 0x80038BB0: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x80038BB4: addu        $t6, $t6, $v0
    ctx->r14 = ADD32(ctx->r14, ctx->r2);
    // 0x80038BB8: lui         $t7, 0x8012
    ctx->r15 = S32(0X8012 << 16);
    // 0x80038BBC: addiu       $t7, $t7, -0x2CF0
    ctx->r15 = ADD32(ctx->r15, -0X2CF0);
    // 0x80038BC0: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x80038BC4: addu        $a0, $t6, $t7
    ctx->r4 = ADD32(ctx->r14, ctx->r15);
    // 0x80038BC8: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
L_80038BCC:
    // 0x80038BCC: multu       $v1, $a1
    result = U64(U32(ctx->r3)) * U64(U32(ctx->r5)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80038BD0: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x80038BD4: sll         $t0, $v1, 16
    ctx->r8 = S32(ctx->r3 << 16);
    // 0x80038BD8: sra         $v1, $t0, 16
    ctx->r3 = S32(SIGNED(ctx->r8) >> 16);
    // 0x80038BDC: slti        $at, $v1, 0x10
    ctx->r1 = SIGNED(ctx->r3) < 0X10 ? 1 : 0;
    // 0x80038BE0: mflo        $t8
    ctx->r24 = lo;
    // 0x80038BE4: addu        $t9, $a0, $t8
    ctx->r25 = ADD32(ctx->r4, ctx->r24);
    // 0x80038BE8: bne         $at, $zero, L_80038BCC
    if (ctx->r1 != 0) {
        // 0x80038BEC: sb          $zero, 0x46($t9)
        MEM_B(0X46, ctx->r25) = 0;
            goto L_80038BCC;
    }
    // 0x80038BEC: sb          $zero, 0x46($t9)
    MEM_B(0X46, ctx->r25) = 0;
    // 0x80038BF0: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80038BF4: sll         $t2, $v0, 16
    ctx->r10 = S32(ctx->r2 << 16);
    // 0x80038BF8: sra         $v0, $t2, 16
    ctx->r2 = S32(SIGNED(ctx->r10) >> 16);
    // 0x80038BFC: slti        $at, $v0, 0x2
    ctx->r1 = SIGNED(ctx->r2) < 0X2 ? 1 : 0;
    // 0x80038C00: bne         $at, $zero, L_80038B9C
    if (ctx->r1 != 0) {
        // 0x80038C04: sll         $t6, $v0, 2
        ctx->r14 = S32(ctx->r2 << 2);
            goto L_80038B9C;
    }
    // 0x80038C04: sll         $t6, $v0, 2
    ctx->r14 = S32(ctx->r2 << 2);
    // 0x80038C08: jr          $ra
    // 0x80038C0C: nop

    return;
    // 0x80038C0C: nop

;}
RECOMP_FUNC void func_80038C10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80038C10: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80038C14: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80038C18: jal         0x80038C38
    // 0x80038C1C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    func_80038C38(rdram, ctx);
        goto after_0;
    // 0x80038C1C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_0:
    // 0x80038C20: jal         0x80038C38
    // 0x80038C24: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    func_80038C38(rdram, ctx);
        goto after_1;
    // 0x80038C24: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_1:
    // 0x80038C28: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80038C2C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80038C30: jr          $ra
    // 0x80038C34: nop

    return;
    // 0x80038C34: nop

;}
RECOMP_FUNC void func_80038C38(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80038C38: sll         $t6, $a0, 24
    ctx->r14 = S32(ctx->r4 << 24);
    // 0x80038C3C: sra         $t7, $t6, 24
    ctx->r15 = S32(SIGNED(ctx->r14) >> 24);
    // 0x80038C40: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x80038C44: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x80038C48: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x80038C4C: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x80038C50: sll         $t8, $t8, 3
    ctx->r24 = S32(ctx->r24 << 3);
    // 0x80038C54: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x80038C58: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x80038C5C: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x80038C60: lui         $t9, 0x8012
    ctx->r25 = S32(0X8012 << 16);
    // 0x80038C64: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x80038C68: addiu       $t9, $t9, -0x2CF0
    ctx->r25 = ADD32(ctx->r25, -0X2CF0);
    // 0x80038C6C: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x80038C70: addu        $v1, $t8, $t9
    ctx->r3 = ADD32(ctx->r24, ctx->r25);
    // 0x80038C74: addiu       $a0, $zero, 0x2C
    ctx->r4 = ADD32(0, 0X2C);
    // 0x80038C78: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x80038C7C: addiu       $a1, $zero, 0xC
    ctx->r5 = ADD32(0, 0XC);
L_80038C80:
    // 0x80038C80: multu       $v0, $a0
    result = U64(U32(ctx->r2)) * U64(U32(ctx->r4)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80038C84: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80038C88: sll         $t2, $v0, 16
    ctx->r10 = S32(ctx->r2 << 16);
    // 0x80038C8C: sra         $v0, $t2, 16
    ctx->r2 = S32(SIGNED(ctx->r10) >> 16);
    // 0x80038C90: slti        $at, $v0, 0x10
    ctx->r1 = SIGNED(ctx->r2) < 0X10 ? 1 : 0;
    // 0x80038C94: mflo        $t0
    ctx->r8 = lo;
    // 0x80038C98: addu        $t1, $v1, $t0
    ctx->r9 = ADD32(ctx->r3, ctx->r8);
    // 0x80038C9C: bne         $at, $zero, L_80038C80
    if (ctx->r1 != 0) {
        // 0x80038CA0: sb          $a1, 0x42($t1)
        MEM_B(0X42, ctx->r9) = ctx->r5;
            goto L_80038C80;
    }
    // 0x80038CA0: sb          $a1, 0x42($t1)
    MEM_B(0X42, ctx->r9) = ctx->r5;
    // 0x80038CA4: jr          $ra
    // 0x80038CA8: nop

    return;
    // 0x80038CA8: nop

;}
RECOMP_FUNC void func_80038CAC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80038CAC: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x80038CB0: addiu       $a0, $a0, -0x2CF0
    ctx->r4 = ADD32(ctx->r4, -0X2CF0);
    // 0x80038CB4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80038CB8: lui         $v1, 0x8012
    ctx->r3 = S32(0X8012 << 16);
    // 0x80038CBC: addiu       $v1, $v1, -0x32B0
    ctx->r3 = ADD32(ctx->r3, -0X32B0);
    // 0x80038CC0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80038CC4: addiu       $v0, $zero, 0xB
    ctx->r2 = ADD32(0, 0XB);
    // 0x80038CC8: addiu       $t6, $zero, 0x2
    ctx->r14 = ADD32(0, 0X2);
    // 0x80038CCC: sb          $zero, 0x46($v1)
    MEM_B(0X46, ctx->r3) = 0;
    // 0x80038CD0: sb          $zero, 0x47($v1)
    MEM_B(0X47, ctx->r3) = 0;
    // 0x80038CD4: sb          $v0, 0x8A7($a0)
    MEM_B(0X8A7, ctx->r4) = ctx->r2;
    // 0x80038CD8: sb          $v0, 0x133B($a0)
    MEM_B(0X133B, ctx->r4) = ctx->r2;
    // 0x80038CDC: jal         0x80039028
    // 0x80038CE0: sb          $t6, 0x8A8($a0)
    MEM_B(0X8A8, ctx->r4) = ctx->r14;
    func_80039028(rdram, ctx);
        goto after_0;
    // 0x80038CE0: sb          $t6, 0x8A8($a0)
    MEM_B(0X8A8, ctx->r4) = ctx->r14;
    after_0:
    // 0x80038CE4: lui         $v1, 0x8012
    ctx->r3 = S32(0X8012 << 16);
    // 0x80038CE8: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x80038CEC: addiu       $a0, $a0, -0x2CF0
    ctx->r4 = ADD32(ctx->r4, -0X2CF0);
    // 0x80038CF0: beq         $v0, $zero, L_80038D14
    if (ctx->r2 == 0) {
        // 0x80038CF4: addiu       $v1, $v1, -0x32B0
        ctx->r3 = ADD32(ctx->r3, -0X32B0);
            goto L_80038D14;
    }
    // 0x80038CF4: addiu       $v1, $v1, -0x32B0
    ctx->r3 = ADD32(ctx->r3, -0X32B0);
    // 0x80038CF8: lbu         $t7, 0xC($v1)
    ctx->r15 = MEM_BU(ctx->r3, 0XC);
    // 0x80038CFC: addiu       $at, $zero, 0x6
    ctx->r1 = ADD32(0, 0X6);
    // 0x80038D00: beq         $t7, $at, L_80038D14
    if (ctx->r15 == ctx->r1) {
        // 0x80038D04: lui         $t8, 0x8012
        ctx->r24 = S32(0X8012 << 16);
            goto L_80038D14;
    }
    // 0x80038D04: lui         $t8, 0x8012
    ctx->r24 = S32(0X8012 << 16);
    // 0x80038D08: lb          $t8, -0x3086($t8)
    ctx->r24 = MEM_B(ctx->r24, -0X3086);
    // 0x80038D0C: b           L_80038D74
    // 0x80038D10: sb          $t8, 0x133C($a0)
    MEM_B(0X133C, ctx->r4) = ctx->r24;
        goto L_80038D74;
    // 0x80038D10: sb          $t8, 0x133C($a0)
    MEM_B(0X133C, ctx->r4) = ctx->r24;
L_80038D14:
    // 0x80038D14: lbu         $t9, 0xC($v1)
    ctx->r25 = MEM_BU(ctx->r3, 0XC);
    // 0x80038D18: addiu       $at, $zero, 0x6
    ctx->r1 = ADD32(0, 0X6);
    // 0x80038D1C: beq         $t9, $at, L_80038D68
    if (ctx->r25 == ctx->r1) {
        // 0x80038D20: nop
    
            goto L_80038D68;
    }
    // 0x80038D20: nop

    // 0x80038D24: lb          $t0, 0xF($v1)
    ctx->r8 = MEM_B(ctx->r3, 0XF);
    // 0x80038D28: lui         $t2, 0x8011
    ctx->r10 = S32(0X8011 << 16);
    // 0x80038D2C: sll         $t1, $t0, 2
    ctx->r9 = S32(ctx->r8 << 2);
    // 0x80038D30: subu        $t1, $t1, $t0
    ctx->r9 = SUB32(ctx->r9, ctx->r8);
    // 0x80038D34: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x80038D38: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x80038D3C: sll         $t1, $t1, 3
    ctx->r9 = S32(ctx->r9 << 3);
    // 0x80038D40: subu        $t1, $t1, $t0
    ctx->r9 = SUB32(ctx->r9, ctx->r8);
    // 0x80038D44: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x80038D48: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x80038D4C: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x80038D50: subu        $t1, $t1, $t0
    ctx->r9 = SUB32(ctx->r9, ctx->r8);
    // 0x80038D54: sll         $t1, $t1, 3
    ctx->r9 = S32(ctx->r9 << 3);
    // 0x80038D58: addu        $t2, $t2, $t1
    ctx->r10 = ADD32(ctx->r10, ctx->r9);
    // 0x80038D5C: lb          $t2, -0x2F7E($t2)
    ctx->r10 = MEM_B(ctx->r10, -0X2F7E);
    // 0x80038D60: b           L_80038D74
    // 0x80038D64: sb          $t2, 0x133C($a0)
    MEM_B(0X133C, ctx->r4) = ctx->r10;
        goto L_80038D74;
    // 0x80038D64: sb          $t2, 0x133C($a0)
    MEM_B(0X133C, ctx->r4) = ctx->r10;
L_80038D68:
    // 0x80038D68: lbu         $t3, 0x136($v1)
    ctx->r11 = MEM_BU(ctx->r3, 0X136);
    // 0x80038D6C: nop

    // 0x80038D70: sb          $t3, 0x133C($a0)
    MEM_B(0X133C, ctx->r4) = ctx->r11;
L_80038D74:
    // 0x80038D74: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80038D78: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80038D7C: jr          $ra
    // 0x80038D80: nop

    return;
    // 0x80038D80: nop

;}
RECOMP_FUNC void func_80038D84(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80038D84: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80038D88: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80038D8C: jal         0x8004DF70
    // 0x80038D90: nop

    func_8004DF70(rdram, ctx);
        goto after_0;
    // 0x80038D90: nop

    after_0:
    // 0x80038D94: bne         $v0, $zero, L_80038DBC
    if (ctx->r2 != 0) {
        // 0x80038D98: addiu       $v1, $zero, 0x2
        ctx->r3 = ADD32(0, 0X2);
            goto L_80038DBC;
    }
    // 0x80038D98: addiu       $v1, $zero, 0x2
    ctx->r3 = ADD32(0, 0X2);
    // 0x80038D9C: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x80038DA0: addiu       $v0, $v0, -0x2CF0
    ctx->r2 = ADD32(ctx->r2, -0X2CF0);
    // 0x80038DA4: addiu       $v1, $zero, 0x2
    ctx->r3 = ADD32(0, 0X2);
    // 0x80038DA8: sb          $v1, 0x8A8($v0)
    MEM_B(0X8A8, ctx->r2) = ctx->r3;
    // 0x80038DAC: lui         $t6, 0x8012
    ctx->r14 = S32(0X8012 << 16);
    // 0x80038DB0: lb          $t6, -0x3086($t6)
    ctx->r14 = MEM_B(ctx->r14, -0X3086);
    // 0x80038DB4: b           L_80038DCC
    // 0x80038DB8: sb          $t6, 0x133C($v0)
    MEM_B(0X133C, ctx->r2) = ctx->r14;
        goto L_80038DCC;
    // 0x80038DB8: sb          $t6, 0x133C($v0)
    MEM_B(0X133C, ctx->r2) = ctx->r14;
L_80038DBC:
    // 0x80038DBC: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x80038DC0: addiu       $v0, $v0, -0x2CF0
    ctx->r2 = ADD32(ctx->r2, -0X2CF0);
    // 0x80038DC4: sb          $v1, 0x8A8($v0)
    MEM_B(0X8A8, ctx->r2) = ctx->r3;
    // 0x80038DC8: sb          $v1, 0x133C($v0)
    MEM_B(0X133C, ctx->r2) = ctx->r3;
L_80038DCC:
    // 0x80038DCC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80038DD0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80038DD4: jr          $ra
    // 0x80038DD8: nop

    return;
    // 0x80038DD8: nop

;}
RECOMP_FUNC void func_80038DDC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80038DDC: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x80038DE0: addiu       $v0, $v0, -0x32B0
    ctx->r2 = ADD32(ctx->r2, -0X32B0);
    // 0x80038DE4: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x80038DE8: sb          $zero, 0x53($v0)
    MEM_B(0X53, ctx->r2) = 0;
    // 0x80038DEC: jr          $ra
    // 0x80038DF0: sb          $t6, 0x54($v0)
    MEM_B(0X54, ctx->r2) = ctx->r14;
    return;
    // 0x80038DF0: sb          $t6, 0x54($v0)
    MEM_B(0X54, ctx->r2) = ctx->r14;
;}
RECOMP_FUNC void func_80038DF4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80038DF4: lui         $v1, 0x8012
    ctx->r3 = S32(0X8012 << 16);
    // 0x80038DF8: addiu       $v1, $v1, -0x32B0
    ctx->r3 = ADD32(ctx->r3, -0X32B0);
    // 0x80038DFC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x80038E00: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
L_80038E04:
    // 0x80038E04: addu        $t6, $v1, $v0
    ctx->r14 = ADD32(ctx->r3, ctx->r2);
    // 0x80038E08: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80038E0C: andi        $t7, $v0, 0xFF
    ctx->r15 = ctx->r2 & 0XFF;
    // 0x80038E10: slti        $at, $t7, 0x2
    ctx->r1 = SIGNED(ctx->r15) < 0X2 ? 1 : 0;
    // 0x80038E14: or          $v0, $t7, $zero
    ctx->r2 = ctx->r15 | 0;
    // 0x80038E18: bne         $at, $zero, L_80038E04
    if (ctx->r1 != 0) {
        // 0x80038E1C: sb          $a0, 0x55($t6)
        MEM_B(0X55, ctx->r14) = ctx->r4;
            goto L_80038E04;
    }
    // 0x80038E1C: sb          $a0, 0x55($t6)
    MEM_B(0X55, ctx->r14) = ctx->r4;
    // 0x80038E20: jr          $ra
    // 0x80038E24: nop

    return;
    // 0x80038E24: nop

;}
RECOMP_FUNC void func_80038E28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80038E28: lui         $a2, 0x8012
    ctx->r6 = S32(0X8012 << 16);
    // 0x80038E2C: addiu       $a2, $a2, -0x2CF0
    ctx->r6 = ADD32(ctx->r6, -0X2CF0);
    // 0x80038E30: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x80038E34: addiu       $a3, $zero, 0xA94
    ctx->r7 = ADD32(0, 0XA94);
L_80038E38:
    // 0x80038E38: multu       $v0, $a3
    result = U64(U32(ctx->r2)) * U64(U32(ctx->r7)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80038E3C: sll         $t7, $v0, 2
    ctx->r15 = S32(ctx->r2 << 2);
    // 0x80038E40: addu        $t7, $t7, $v0
    ctx->r15 = ADD32(ctx->r15, ctx->r2);
    // 0x80038E44: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80038E48: addu        $t7, $t7, $v0
    ctx->r15 = ADD32(ctx->r15, ctx->r2);
    // 0x80038E4C: sll         $t7, $t7, 3
    ctx->r15 = S32(ctx->r15 << 3);
    // 0x80038E50: addu        $t7, $t7, $v0
    ctx->r15 = ADD32(ctx->r15, ctx->r2);
    // 0x80038E54: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80038E58: addu        $t7, $t7, $v0
    ctx->r15 = ADD32(ctx->r15, ctx->r2);
    // 0x80038E5C: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80038E60: addu        $a1, $a2, $t7
    ctx->r5 = ADD32(ctx->r6, ctx->r15);
    // 0x80038E64: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x80038E68: mflo        $t6
    ctx->r14 = lo;
    // 0x80038E6C: addu        $v1, $a2, $t6
    ctx->r3 = ADD32(ctx->r6, ctx->r14);
    // 0x80038E70: sb          $zero, 0x869($v1)
    MEM_B(0X869, ctx->r3) = 0;
    // 0x80038E74: sb          $zero, 0x86A($v1)
    MEM_B(0X86A, ctx->r3) = 0;
L_80038E78:
    // 0x80038E78: addu        $t8, $a1, $a0
    ctx->r24 = ADD32(ctx->r5, ctx->r4);
    // 0x80038E7C: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    // 0x80038E80: andi        $t9, $a0, 0xFF
    ctx->r25 = ctx->r4 & 0XFF;
    // 0x80038E84: slti        $at, $t9, 0x4
    ctx->r1 = SIGNED(ctx->r25) < 0X4 ? 1 : 0;
    // 0x80038E88: or          $a0, $t9, $zero
    ctx->r4 = ctx->r25 | 0;
    // 0x80038E8C: bne         $at, $zero, L_80038E78
    if (ctx->r1 != 0) {
        // 0x80038E90: sb          $zero, 0x86B($t8)
        MEM_B(0X86B, ctx->r24) = 0;
            goto L_80038E78;
    }
    // 0x80038E90: sb          $zero, 0x86B($t8)
    MEM_B(0X86B, ctx->r24) = 0;
    // 0x80038E94: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80038E98: andi        $t0, $v0, 0xFF
    ctx->r8 = ctx->r2 & 0XFF;
    // 0x80038E9C: slti        $at, $t0, 0x2
    ctx->r1 = SIGNED(ctx->r8) < 0X2 ? 1 : 0;
    // 0x80038EA0: bne         $at, $zero, L_80038E38
    if (ctx->r1 != 0) {
        // 0x80038EA4: or          $v0, $t0, $zero
        ctx->r2 = ctx->r8 | 0;
            goto L_80038E38;
    }
    // 0x80038EA4: or          $v0, $t0, $zero
    ctx->r2 = ctx->r8 | 0;
    // 0x80038EA8: jr          $ra
    // 0x80038EAC: nop

    return;
    // 0x80038EAC: nop

;}
RECOMP_FUNC void func_80038EB0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80038EB0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80038EB4: lui         $v1, 0x8012
    ctx->r3 = S32(0X8012 << 16);
    // 0x80038EB8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80038EBC: addiu       $v1, $v1, -0x32B0
    ctx->r3 = ADD32(ctx->r3, -0X32B0);
    // 0x80038EC0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_80038EC4:
    // 0x80038EC4: addu        $t6, $v1, $v0
    ctx->r14 = ADD32(ctx->r3, ctx->r2);
    // 0x80038EC8: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80038ECC: andi        $t7, $v0, 0xFF
    ctx->r15 = ctx->r2 & 0XFF;
    // 0x80038ED0: slti        $at, $t7, 0x4
    ctx->r1 = SIGNED(ctx->r15) < 0X4 ? 1 : 0;
    // 0x80038ED4: or          $v0, $t7, $zero
    ctx->r2 = ctx->r15 | 0;
    // 0x80038ED8: bne         $at, $zero, L_80038EC4
    if (ctx->r1 != 0) {
        // 0x80038EDC: sb          $zero, 0x48($t6)
        MEM_B(0X48, ctx->r14) = 0;
            goto L_80038EC4;
    }
    // 0x80038EDC: sb          $zero, 0x48($t6)
    MEM_B(0X48, ctx->r14) = 0;
    // 0x80038EE0: jal         0x8005D498
    // 0x80038EE4: nop

    func_8005D498(rdram, ctx);
        goto after_0;
    // 0x80038EE4: nop

    after_0:
    // 0x80038EE8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80038EEC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80038EF0: jr          $ra
    // 0x80038EF4: nop

    return;
    // 0x80038EF4: nop

;}
RECOMP_FUNC void func_80038EF8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80038EF8: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80038EFC: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x80038F00: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x80038F04: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80038F08: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x80038F0C: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
L_80038F10:
    // 0x80038F10: sll         $a0, $s1, 24
    ctx->r4 = S32(ctx->r17 << 24);
    // 0x80038F14: sra         $t6, $a0, 24
    ctx->r14 = S32(SIGNED(ctx->r4) >> 24);
    // 0x80038F18: jal         0x80038F48
    // 0x80038F1C: or          $a0, $t6, $zero
    ctx->r4 = ctx->r14 | 0;
    func_80038F48(rdram, ctx);
        goto after_0;
    // 0x80038F1C: or          $a0, $t6, $zero
    ctx->r4 = ctx->r14 | 0;
    after_0:
    // 0x80038F20: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x80038F24: andi        $s1, $s0, 0xFF
    ctx->r17 = ctx->r16 & 0XFF;
    // 0x80038F28: slti        $at, $s1, 0x2
    ctx->r1 = SIGNED(ctx->r17) < 0X2 ? 1 : 0;
    // 0x80038F2C: bne         $at, $zero, L_80038F10
    if (ctx->r1 != 0) {
        // 0x80038F30: or          $s0, $s1, $zero
        ctx->r16 = ctx->r17 | 0;
            goto L_80038F10;
    }
    // 0x80038F30: or          $s0, $s1, $zero
    ctx->r16 = ctx->r17 | 0;
    // 0x80038F34: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80038F38: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x80038F3C: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x80038F40: jr          $ra
    // 0x80038F44: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x80038F44: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_80038F48(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80038F48: sll         $t6, $a0, 24
    ctx->r14 = S32(ctx->r4 << 24);
    // 0x80038F4C: sra         $t7, $t6, 24
    ctx->r15 = S32(SIGNED(ctx->r14) >> 24);
    // 0x80038F50: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x80038F54: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x80038F58: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x80038F5C: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x80038F60: sll         $t8, $t8, 3
    ctx->r24 = S32(ctx->r24 << 3);
    // 0x80038F64: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x80038F68: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x80038F6C: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x80038F70: lui         $t9, 0x8012
    ctx->r25 = S32(0X8012 << 16);
    // 0x80038F74: addiu       $t9, $t9, -0x2CF0
    ctx->r25 = ADD32(ctx->r25, -0X2CF0);
    // 0x80038F78: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x80038F7C: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x80038F80: addu        $v1, $t8, $t9
    ctx->r3 = ADD32(ctx->r24, ctx->r25);
    // 0x80038F84: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_80038F88:
    // 0x80038F88: addu        $t0, $v1, $v0
    ctx->r8 = ADD32(ctx->r3, ctx->r2);
    // 0x80038F8C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80038F90: andi        $t1, $v0, 0xFF
    ctx->r9 = ctx->r2 & 0XFF;
    // 0x80038F94: slti        $at, $t1, 0xB
    ctx->r1 = SIGNED(ctx->r9) < 0XB ? 1 : 0;
    // 0x80038F98: or          $v0, $t1, $zero
    ctx->r2 = ctx->r9 | 0;
    // 0x80038F9C: bne         $at, $zero, L_80038F88
    if (ctx->r1 != 0) {
        // 0x80038FA0: sb          $zero, 0x86F($t0)
        MEM_B(0X86F, ctx->r8) = 0;
            goto L_80038F88;
    }
    // 0x80038FA0: sb          $zero, 0x86F($t0)
    MEM_B(0X86F, ctx->r8) = 0;
    // 0x80038FA4: jr          $ra
    // 0x80038FA8: nop

    return;
    // 0x80038FA8: nop

;}
RECOMP_FUNC void func_80038FAC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80038FAC: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80038FB0: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80038FB4: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80038FB8: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
L_80038FBC:
    // 0x80038FBC: jal         0x80038FE8
    // 0x80038FC0: andi        $a0, $s0, 0xFF
    ctx->r4 = ctx->r16 & 0XFF;
    func_80038FE8(rdram, ctx);
        goto after_0;
    // 0x80038FC0: andi        $a0, $s0, 0xFF
    ctx->r4 = ctx->r16 & 0XFF;
    after_0:
    // 0x80038FC4: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x80038FC8: andi        $t6, $s0, 0xFF
    ctx->r14 = ctx->r16 & 0XFF;
    // 0x80038FCC: slti        $at, $t6, 0x2
    ctx->r1 = SIGNED(ctx->r14) < 0X2 ? 1 : 0;
    // 0x80038FD0: bne         $at, $zero, L_80038FBC
    if (ctx->r1 != 0) {
        // 0x80038FD4: or          $s0, $t6, $zero
        ctx->r16 = ctx->r14 | 0;
            goto L_80038FBC;
    }
    // 0x80038FD4: or          $s0, $t6, $zero
    ctx->r16 = ctx->r14 | 0;
    // 0x80038FD8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80038FDC: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80038FE0: jr          $ra
    // 0x80038FE4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x80038FE4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_80038FE8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80038FE8: andi        $t6, $a0, 0xFF
    ctx->r14 = ctx->r4 & 0XFF;
    // 0x80038FEC: lui         $t8, 0x8012
    ctx->r24 = S32(0X8012 << 16);
    // 0x80038FF0: addiu       $t8, $t8, -0x32B0
    ctx->r24 = ADD32(ctx->r24, -0X32B0);
    // 0x80038FF4: sll         $t7, $t6, 4
    ctx->r15 = S32(ctx->r14 << 4);
    // 0x80038FF8: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x80038FFC: addu        $v1, $t7, $t8
    ctx->r3 = ADD32(ctx->r15, ctx->r24);
    // 0x80039000: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_80039004:
    // 0x80039004: addu        $t9, $v1, $v0
    ctx->r25 = ADD32(ctx->r3, ctx->r2);
    // 0x80039008: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8003900C: andi        $t0, $v0, 0xFF
    ctx->r8 = ctx->r2 & 0XFF;
    // 0x80039010: slti        $at, $t0, 0x10
    ctx->r1 = SIGNED(ctx->r8) < 0X10 ? 1 : 0;
    // 0x80039014: or          $v0, $t0, $zero
    ctx->r2 = ctx->r8 | 0;
    // 0x80039018: bne         $at, $zero, L_80039004
    if (ctx->r1 != 0) {
        // 0x8003901C: sb          $zero, 0xC0($t9)
        MEM_B(0XC0, ctx->r25) = 0;
            goto L_80039004;
    }
    // 0x8003901C: sb          $zero, 0xC0($t9)
    MEM_B(0XC0, ctx->r25) = 0;
    // 0x80039020: jr          $ra
    // 0x80039024: nop

    return;
    // 0x80039024: nop

;}
RECOMP_FUNC void func_80039028(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80039028: lui         $v1, 0x8012
    ctx->r3 = S32(0X8012 << 16);
    // 0x8003902C: addiu       $v1, $v1, -0x32B0
    ctx->r3 = ADD32(ctx->r3, -0X32B0);
    // 0x80039030: lhu         $t6, 0x6($v1)
    ctx->r14 = MEM_HU(ctx->r3, 0X6);
    // 0x80039034: nop

    // 0x80039038: bne         $t6, $zero, L_80039064
    if (ctx->r14 != 0) {
        // 0x8003903C: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_80039064;
    }
    // 0x8003903C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80039040: lbu         $v0, 0xC($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0XC);
    // 0x80039044: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x80039048: beq         $v0, $at, L_80039058
    if (ctx->r2 == ctx->r1) {
        // 0x8003904C: addiu       $at, $zero, 0x2
        ctx->r1 = ADD32(0, 0X2);
            goto L_80039058;
    }
    // 0x8003904C: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x80039050: bne         $v0, $at, L_80039064
    if (ctx->r2 != ctx->r1) {
        // 0x80039054: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_80039064;
    }
    // 0x80039054: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_80039058:
    // 0x80039058: jr          $ra
    // 0x8003905C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    return;
    // 0x8003905C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x80039060: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_80039064:
    // 0x80039064: jr          $ra
    // 0x80039068: nop

    return;
    // 0x80039068: nop

;}
RECOMP_FUNC void func_8003906C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8003906C: lui         $t6, 0x8012
    ctx->r14 = S32(0X8012 << 16);
    // 0x80039070: lhu         $t6, 0xB78($t6)
    ctx->r14 = MEM_HU(ctx->r14, 0XB78);
    // 0x80039074: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80039078: bne         $t6, $at, L_800390A8
    if (ctx->r14 != ctx->r1) {
        // 0x8003907C: lui         $t7, 0x802C
        ctx->r15 = S32(0X802C << 16);
            goto L_800390A8;
    }
    // 0x8003907C: lui         $t7, 0x802C
    ctx->r15 = S32(0X802C << 16);
    // 0x80039080: lhu         $t7, 0x3946($t7)
    ctx->r15 = MEM_HU(ctx->r15, 0X3946);
    // 0x80039084: lui         $t8, 0x8012
    ctx->r24 = S32(0X8012 << 16);
    // 0x80039088: bne         $t7, $zero, L_800390AC
    if (ctx->r15 != 0) {
        // 0x8003908C: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_800390AC;
    }
    // 0x8003908C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80039090: lhu         $t8, 0xB74($t8)
    ctx->r24 = MEM_HU(ctx->r24, 0XB74);
    // 0x80039094: nop

    // 0x80039098: bne         $t8, $zero, L_800390AC
    if (ctx->r24 != 0) {
        // 0x8003909C: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_800390AC;
    }
    // 0x8003909C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x800390A0: jr          $ra
    // 0x800390A4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    return;
    // 0x800390A4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_800390A8:
    // 0x800390A8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_800390AC:
    // 0x800390AC: jr          $ra
    // 0x800390B0: nop

    return;
    // 0x800390B0: nop

;}
RECOMP_FUNC void func_800390B4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800390B4: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x800390B8: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x800390BC: lui         $s1, 0x8012
    ctx->r17 = S32(0X8012 << 16);
    // 0x800390C0: addiu       $s1, $s1, -0x32B0
    ctx->r17 = ADD32(ctx->r17, -0X32B0);
    // 0x800390C4: lb          $t6, 0xF($s1)
    ctx->r14 = MEM_B(ctx->r17, 0XF);
    // 0x800390C8: lui         $t8, 0x8011
    ctx->r24 = S32(0X8011 << 16);
    // 0x800390CC: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800390D0: subu        $t7, $t7, $t6
    ctx->r15 = SUB32(ctx->r15, ctx->r14);
    // 0x800390D4: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800390D8: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800390DC: sll         $t7, $t7, 3
    ctx->r15 = S32(ctx->r15 << 3);
    // 0x800390E0: subu        $t7, $t7, $t6
    ctx->r15 = SUB32(ctx->r15, ctx->r14);
    // 0x800390E4: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800390E8: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800390EC: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800390F0: subu        $t7, $t7, $t6
    ctx->r15 = SUB32(ctx->r15, ctx->r14);
    // 0x800390F4: sw          $s5, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r21;
    // 0x800390F8: sw          $s4, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r20;
    // 0x800390FC: sw          $s3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r19;
    // 0x80039100: sw          $s2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r18;
    // 0x80039104: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x80039108: sll         $t7, $t7, 3
    ctx->r15 = S32(ctx->r15 << 3);
    // 0x8003910C: addiu       $t8, $t8, -0x2F80
    ctx->r24 = ADD32(ctx->r24, -0X2F80);
    // 0x80039110: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x80039114: addu        $s3, $t7, $t8
    ctx->r19 = ADD32(ctx->r15, ctx->r24);
    // 0x80039118: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x8003911C: addiu       $s2, $zero, 0x12
    ctx->r18 = ADD32(0, 0X12);
    // 0x80039120: addiu       $s4, $zero, 0x14C
    ctx->r20 = ADD32(0, 0X14C);
    // 0x80039124: addiu       $s5, $zero, 0x1
    ctx->r21 = ADD32(0, 0X1);
L_80039128:
    // 0x80039128: jal         0x80039028
    // 0x8003912C: nop

    func_80039028(rdram, ctx);
        goto after_0;
    // 0x8003912C: nop

    after_0:
    // 0x80039130: bne         $v0, $zero, L_80039168
    if (ctx->r2 != 0) {
        // 0x80039134: sll         $a0, $s0, 24
        ctx->r4 = S32(ctx->r16 << 24);
            goto L_80039168;
    }
    // 0x80039134: sll         $a0, $s0, 24
    ctx->r4 = S32(ctx->r16 << 24);
    // 0x80039138: addu        $t9, $s3, $s0
    ctx->r25 = ADD32(ctx->r19, ctx->r16);
    // 0x8003913C: lb          $t0, 0x7($t9)
    ctx->r8 = MEM_B(ctx->r25, 0X7);
    // 0x80039140: nop

    // 0x80039144: multu       $t0, $s4
    result = U64(U32(ctx->r8)) * U64(U32(ctx->r20)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80039148: mflo        $t1
    ctx->r9 = lo;
    // 0x8003914C: addu        $t2, $s3, $t1
    ctx->r10 = ADD32(ctx->r19, ctx->r9);
    // 0x80039150: lb          $t3, 0x4AD($t2)
    ctx->r11 = MEM_B(ctx->r10, 0X4AD);
    // 0x80039154: multu       $s0, $s2
    result = U64(U32(ctx->r16)) * U64(U32(ctx->r18)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80039158: mflo        $t4
    ctx->r12 = lo;
    // 0x8003915C: addu        $t5, $s1, $t4
    ctx->r13 = ADD32(ctx->r17, ctx->r12);
    // 0x80039160: b           L_800391A0
    // 0x80039164: sb          $t3, 0x110($t5)
    MEM_B(0X110, ctx->r13) = ctx->r11;
        goto L_800391A0;
    // 0x80039164: sb          $t3, 0x110($t5)
    MEM_B(0X110, ctx->r13) = ctx->r11;
L_80039168:
    // 0x80039168: sra         $t6, $a0, 24
    ctx->r14 = S32(SIGNED(ctx->r4) >> 24);
    // 0x8003916C: jal         0x80047B54
    // 0x80039170: or          $a0, $t6, $zero
    ctx->r4 = ctx->r14 | 0;
    func_80047B54(rdram, ctx);
        goto after_1;
    // 0x80039170: or          $a0, $t6, $zero
    ctx->r4 = ctx->r14 | 0;
    after_1:
    // 0x80039174: bne         $v0, $zero, L_80039190
    if (ctx->r2 != 0) {
        // 0x80039178: nop
    
            goto L_80039190;
    }
    // 0x80039178: nop

    // 0x8003917C: multu       $s0, $s2
    result = U64(U32(ctx->r16)) * U64(U32(ctx->r18)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80039180: mflo        $t7
    ctx->r15 = lo;
    // 0x80039184: addu        $t8, $s1, $t7
    ctx->r24 = ADD32(ctx->r17, ctx->r15);
    // 0x80039188: b           L_800391A0
    // 0x8003918C: sb          $s5, 0x110($t8)
    MEM_B(0X110, ctx->r24) = ctx->r21;
        goto L_800391A0;
    // 0x8003918C: sb          $s5, 0x110($t8)
    MEM_B(0X110, ctx->r24) = ctx->r21;
L_80039190:
    // 0x80039190: multu       $s0, $s2
    result = U64(U32(ctx->r16)) * U64(U32(ctx->r18)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80039194: mflo        $t9
    ctx->r25 = lo;
    // 0x80039198: addu        $t0, $s1, $t9
    ctx->r8 = ADD32(ctx->r17, ctx->r25);
    // 0x8003919C: sb          $zero, 0x110($t0)
    MEM_B(0X110, ctx->r8) = 0;
L_800391A0:
    // 0x800391A0: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x800391A4: sll         $t1, $s0, 16
    ctx->r9 = S32(ctx->r16 << 16);
    // 0x800391A8: sra         $s0, $t1, 16
    ctx->r16 = S32(SIGNED(ctx->r9) >> 16);
    // 0x800391AC: slti        $at, $s0, 0x2
    ctx->r1 = SIGNED(ctx->r16) < 0X2 ? 1 : 0;
    // 0x800391B0: bne         $at, $zero, L_80039128
    if (ctx->r1 != 0) {
        // 0x800391B4: nop
    
            goto L_80039128;
    }
    // 0x800391B4: nop

    // 0x800391B8: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x800391BC: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x800391C0: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x800391C4: lw          $s2, 0x1C($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X1C);
    // 0x800391C8: lw          $s3, 0x20($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X20);
    // 0x800391CC: lw          $s4, 0x24($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X24);
    // 0x800391D0: lw          $s5, 0x28($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X28);
    // 0x800391D4: jr          $ra
    // 0x800391D8: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x800391D8: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_800391DC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800391DC: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x800391E0: addiu       $v0, $v0, -0x32B0
    ctx->r2 = ADD32(ctx->r2, -0X32B0);
    // 0x800391E4: addiu       $a0, $zero, -0x1
    ctx->r4 = ADD32(0, -0X1);
    // 0x800391E8: addiu       $v1, $zero, -0x1
    ctx->r3 = ADD32(0, -0X1);
    // 0x800391EC: sb          $zero, 0x6F($v0)
    MEM_B(0X6F, ctx->r2) = 0;
    // 0x800391F0: sb          $zero, 0x70($v0)
    MEM_B(0X70, ctx->r2) = 0;
    // 0x800391F4: sb          $zero, 0x6D($v0)
    MEM_B(0X6D, ctx->r2) = 0;
    // 0x800391F8: sb          $zero, 0x6E($v0)
    MEM_B(0X6E, ctx->r2) = 0;
    // 0x800391FC: sw          $v1, 0x78($v0)
    MEM_W(0X78, ctx->r2) = ctx->r3;
    // 0x80039200: sw          $v1, 0x7C($v0)
    MEM_W(0X7C, ctx->r2) = ctx->r3;
    // 0x80039204: sb          $a0, 0x6A($v0)
    MEM_B(0X6A, ctx->r2) = ctx->r4;
    // 0x80039208: sb          $a0, 0x73($v0)
    MEM_B(0X73, ctx->r2) = ctx->r4;
    // 0x8003920C: jr          $ra
    // 0x80039210: sb          $a0, 0x74($v0)
    MEM_B(0X74, ctx->r2) = ctx->r4;
    return;
    // 0x80039210: sb          $a0, 0x74($v0)
    MEM_B(0X74, ctx->r2) = ctx->r4;
;}
RECOMP_FUNC void func_80039214(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80039214: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x80039218: addiu       $a0, $a0, -0x32B0
    ctx->r4 = ADD32(ctx->r4, -0X32B0);
    // 0x8003921C: sb          $zero, 0x71($a0)
    MEM_B(0X71, ctx->r4) = 0;
    // 0x80039220: sb          $zero, 0x72($a0)
    MEM_B(0X72, ctx->r4) = 0;
    // 0x80039224: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x80039228: addiu       $a1, $zero, -0x1
    ctx->r5 = ADD32(0, -0X1);
L_8003922C:
    // 0x8003922C: sll         $t6, $v0, 2
    ctx->r14 = S32(ctx->r2 << 2);
    // 0x80039230: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80039234: sll         $t7, $v0, 16
    ctx->r15 = S32(ctx->r2 << 16);
    // 0x80039238: sra         $v0, $t7, 16
    ctx->r2 = S32(SIGNED(ctx->r15) >> 16);
    // 0x8003923C: slti        $at, $v0, 0x8
    ctx->r1 = SIGNED(ctx->r2) < 0X8 ? 1 : 0;
    // 0x80039240: addu        $v1, $a0, $t6
    ctx->r3 = ADD32(ctx->r4, ctx->r14);
    // 0x80039244: sw          $a1, 0x80($v1)
    MEM_W(0X80, ctx->r3) = ctx->r5;
    // 0x80039248: bne         $at, $zero, L_8003922C
    if (ctx->r1 != 0) {
        // 0x8003924C: sw          $a1, 0xA0($v1)
        MEM_W(0XA0, ctx->r3) = ctx->r5;
            goto L_8003922C;
    }
    // 0x8003924C: sw          $a1, 0xA0($v1)
    MEM_W(0XA0, ctx->r3) = ctx->r5;
    // 0x80039250: jr          $ra
    // 0x80039254: nop

    return;
    // 0x80039254: nop

;}
RECOMP_FUNC void func_80039258(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80039258: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8003925C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80039260: jal         0x800391DC
    // 0x80039264: nop

    func_800391DC(rdram, ctx);
        goto after_0;
    // 0x80039264: nop

    after_0:
    // 0x80039268: jal         0x80039214
    // 0x8003926C: nop

    func_80039214(rdram, ctx);
        goto after_1;
    // 0x8003926C: nop

    after_1:
    // 0x80039270: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80039274: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80039278: jr          $ra
    // 0x8003927C: nop

    return;
    // 0x8003927C: nop

;}
RECOMP_FUNC void func_80039280(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80039280: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80039284: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80039288: jal         0x80039258
    // 0x8003928C: nop

    func_80039258(rdram, ctx);
        goto after_0;
    // 0x8003928C: nop

    after_0:
    // 0x80039290: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80039294: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x80039298: addiu       $v0, $v0, -0x32B0
    ctx->r2 = ADD32(ctx->r2, -0X32B0);
    // 0x8003929C: sb          $zero, 0x6B($v0)
    MEM_B(0X6B, ctx->r2) = 0;
    // 0x800392A0: sb          $zero, 0x6C($v0)
    MEM_B(0X6C, ctx->r2) = 0;
    // 0x800392A4: jr          $ra
    // 0x800392A8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x800392A8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_800392AC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800392AC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800392B0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800392B4: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x800392B8: addiu       $a0, $a0, 0xB88
    ctx->r4 = ADD32(ctx->r4, 0XB88);
    // 0x800392BC: jal         0x800218E0
    // 0x800392C0: addiu       $a1, $zero, 0x100
    ctx->r5 = ADD32(0, 0X100);
    func_800218E0(rdram, ctx);
        goto after_0;
    // 0x800392C0: addiu       $a1, $zero, 0x100
    ctx->r5 = ADD32(0, 0X100);
    after_0:
    // 0x800392C4: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x800392C8: addiu       $a0, $a0, -0x24B8
    ctx->r4 = ADD32(ctx->r4, -0X24B8);
    // 0x800392CC: jal         0x800218E0
    // 0x800392D0: addiu       $a1, $zero, 0x30
    ctx->r5 = ADD32(0, 0X30);
    func_800218E0(rdram, ctx);
        goto after_1;
    // 0x800392D0: addiu       $a1, $zero, 0x30
    ctx->r5 = ADD32(0, 0X30);
    after_1:
    // 0x800392D4: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x800392D8: addiu       $a0, $a0, -0x1A24
    ctx->r4 = ADD32(ctx->r4, -0X1A24);
    // 0x800392DC: jal         0x800218E0
    // 0x800392E0: addiu       $a1, $zero, 0x30
    ctx->r5 = ADD32(0, 0X30);
    func_800218E0(rdram, ctx);
        goto after_2;
    // 0x800392E0: addiu       $a1, $zero, 0x30
    ctx->r5 = ADD32(0, 0X30);
    after_2:
    // 0x800392E4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800392E8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800392EC: jr          $ra
    // 0x800392F0: nop

    return;
    // 0x800392F0: nop

;}
RECOMP_FUNC void func_800392F4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800392F4: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x800392F8: andi        $t6, $a1, 0xFFFF
    ctx->r14 = ctx->r5 & 0XFFFF;
    // 0x800392FC: sw          $a1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r5;
    // 0x80039300: sw          $a2, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r6;
    // 0x80039304: andi        $t7, $a2, 0xFFFF
    ctx->r15 = ctx->r6 & 0XFFFF;
    // 0x80039308: slti        $at, $t6, 0x24
    ctx->r1 = SIGNED(ctx->r14) < 0X24 ? 1 : 0;
    // 0x8003930C: or          $a2, $t7, $zero
    ctx->r6 = ctx->r15 | 0;
    // 0x80039310: or          $a1, $t6, $zero
    ctx->r5 = ctx->r14 | 0;
    // 0x80039314: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80039318: sw          $a0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r4;
    // 0x8003931C: bne         $at, $zero, L_8003934C
    if (ctx->r1 != 0) {
        // 0x80039320: sw          $a3, 0x44($sp)
        MEM_W(0X44, ctx->r29) = ctx->r7;
            goto L_8003934C;
    }
    // 0x80039320: sw          $a3, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r7;
    // 0x80039324: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x80039328: lui         $t9, 0x800B
    ctx->r25 = S32(0X800B << 16);
    // 0x8003932C: addiu       $t9, $t9, -0x7DE0
    ctx->r25 = ADD32(ctx->r25, -0X7DE0);
    // 0x80039330: subu        $t8, $t8, $t7
    ctx->r24 = SUB32(ctx->r24, ctx->r15);
    // 0x80039334: addu        $v0, $t8, $t9
    ctx->r2 = ADD32(ctx->r24, ctx->r25);
    // 0x80039338: lbu         $v1, 0x0($v0)
    ctx->r3 = MEM_BU(ctx->r2, 0X0);
    // 0x8003933C: lbu         $a3, 0x1($v0)
    ctx->r7 = MEM_BU(ctx->r2, 0X1);
    // 0x80039340: lbu         $t0, 0x2($v0)
    ctx->r8 = MEM_BU(ctx->r2, 0X2);
    // 0x80039344: b           L_80039384
    // 0x80039348: lhu         $t5, 0x46($sp)
    ctx->r13 = MEM_HU(ctx->r29, 0X46);
        goto L_80039384;
    // 0x80039348: lhu         $t5, 0x46($sp)
    ctx->r13 = MEM_HU(ctx->r29, 0X46);
L_8003934C:
    // 0x8003934C: sll         $t1, $a1, 2
    ctx->r9 = S32(ctx->r5 << 2);
    // 0x80039350: subu        $t1, $t1, $a1
    ctx->r9 = SUB32(ctx->r9, ctx->r5);
    // 0x80039354: sll         $t2, $a2, 2
    ctx->r10 = S32(ctx->r6 << 2);
    // 0x80039358: subu        $t2, $t2, $a2
    ctx->r10 = SUB32(ctx->r10, ctx->r6);
    // 0x8003935C: sll         $t1, $t1, 4
    ctx->r9 = S32(ctx->r9 << 4);
    // 0x80039360: lui         $t4, 0x800A
    ctx->r12 = S32(0X800A << 16);
    // 0x80039364: addiu       $t4, $t4, 0x7B60
    ctx->r12 = ADD32(ctx->r12, 0X7B60);
    // 0x80039368: addu        $t3, $t1, $t2
    ctx->r11 = ADD32(ctx->r9, ctx->r10);
    // 0x8003936C: addu        $v0, $t3, $t4
    ctx->r2 = ADD32(ctx->r11, ctx->r12);
    // 0x80039370: lbu         $v1, 0x0($v0)
    ctx->r3 = MEM_BU(ctx->r2, 0X0);
    // 0x80039374: lbu         $a3, 0x1($v0)
    ctx->r7 = MEM_BU(ctx->r2, 0X1);
    // 0x80039378: lbu         $t0, 0x2($v0)
    ctx->r8 = MEM_BU(ctx->r2, 0X2);
    // 0x8003937C: nop

    // 0x80039380: lhu         $t5, 0x46($sp)
    ctx->r13 = MEM_HU(ctx->r29, 0X46);
L_80039384:
    // 0x80039384: lw          $t7, 0x38($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X38);
    // 0x80039388: sll         $t8, $v1, 2
    ctx->r24 = S32(ctx->r3 << 2);
    // 0x8003938C: addiu       $t6, $t5, 0x404
    ctx->r14 = ADD32(ctx->r13, 0X404);
    // 0x80039390: subu        $t8, $t8, $v1
    ctx->r24 = SUB32(ctx->r24, ctx->r3);
    // 0x80039394: lui         $t9, 0x8025
    ctx->r25 = S32(0X8025 << 16);
    // 0x80039398: sh          $t6, 0x12($t7)
    MEM_H(0X12, ctx->r15) = ctx->r14;
    // 0x8003939C: addiu       $t9, $t9, -0x4800
    ctx->r25 = ADD32(ctx->r25, -0X4800);
    // 0x800393A0: sll         $t8, $t8, 8
    ctx->r24 = S32(ctx->r24 << 8);
    // 0x800393A4: addu        $t1, $t8, $t9
    ctx->r9 = ADD32(ctx->r24, ctx->r25);
    // 0x800393A8: sll         $t2, $t6, 2
    ctx->r10 = S32(ctx->r14 << 2);
    // 0x800393AC: lui         $a1, 0x800C
    ctx->r5 = S32(0X800C << 16);
    // 0x800393B0: lui         $t8, 0x800A
    ctx->r24 = S32(0X800A << 16);
    // 0x800393B4: sll         $t7, $t0, 2
    ctx->r15 = S32(ctx->r8 << 2);
    // 0x800393B8: sll         $t3, $t5, 2
    ctx->r11 = S32(ctx->r13 << 2);
    // 0x800393BC: subu        $t2, $t2, $t6
    ctx->r10 = SUB32(ctx->r10, ctx->r14);
    // 0x800393C0: addu        $a1, $a1, $t3
    ctx->r5 = ADD32(ctx->r5, ctx->r11);
    // 0x800393C4: sll         $t4, $a3, 2
    ctx->r12 = S32(ctx->r7 << 2);
    // 0x800393C8: lui         $a0, 0x800A
    ctx->r4 = S32(0X800A << 16);
    // 0x800393CC: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x800393D0: lw          $a1, 0x47B0($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X47B0);
    // 0x800393D4: lw          $t8, 0x7B3C($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X7B3C);
    // 0x800393D8: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x800393DC: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x800393E0: addu        $a0, $a0, $t4
    ctx->r4 = ADD32(ctx->r4, ctx->r12);
    // 0x800393E4: addu        $at, $at, $t2
    ctx->r1 = ADD32(ctx->r1, ctx->r10);
    // 0x800393E8: lw          $a0, 0x7B18($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7B18);
    // 0x800393EC: sw          $t1, -0x438($at)
    MEM_W(-0X438, ctx->r1) = ctx->r9;
    // 0x800393F0: addiu       $a2, $zero, 0x80
    ctx->r6 = ADD32(0, 0X80);
    // 0x800393F4: sw          $t5, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r13;
    // 0x800393F8: sw          $a1, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r5;
    // 0x800393FC: jal         0x8001DA44
    // 0x80039400: sw          $t8, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r24;
    func_8001DA44(rdram, ctx);
        goto after_0;
    // 0x80039400: sw          $t8, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r24;
    after_0:
    // 0x80039404: lw          $a1, 0x30($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X30);
    // 0x80039408: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    // 0x8003940C: addiu       $a2, $zero, 0x80
    ctx->r6 = ADD32(0, 0X80);
    // 0x80039410: jal         0x8001DA44
    // 0x80039414: addiu       $a1, $a1, 0x80
    ctx->r5 = ADD32(ctx->r5, 0X80);
    func_8001DA44(rdram, ctx);
        goto after_1;
    // 0x80039414: addiu       $a1, $a1, 0x80
    ctx->r5 = ADD32(ctx->r5, 0X80);
    after_1:
    // 0x80039418: lw          $a2, 0x1C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X1C);
    // 0x8003941C: lw          $a0, 0x38($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X38);
    // 0x80039420: sll         $t9, $a2, 4
    ctx->r25 = S32(ctx->r6 << 4);
    // 0x80039424: andi        $a2, $t9, 0xFF
    ctx->r6 = ctx->r25 & 0XFF;
    // 0x80039428: jal         0x80021408
    // 0x8003942C: addiu       $a1, $zero, 0x21
    ctx->r5 = ADD32(0, 0X21);
    func_80021408(rdram, ctx);
        goto after_2;
    // 0x8003942C: addiu       $a1, $zero, 0x21
    ctx->r5 = ADD32(0, 0X21);
    after_2:
    // 0x80039430: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80039434: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    // 0x80039438: jr          $ra
    // 0x8003943C: nop

    return;
    // 0x8003943C: nop

;}
RECOMP_FUNC void func_80039440(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80039440: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x80039444: andi        $t6, $a1, 0xFFFF
    ctx->r14 = ctx->r5 & 0XFFFF;
    // 0x80039448: sw          $a1, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r5;
    // 0x8003944C: andi        $t7, $a2, 0xFFFF
    ctx->r15 = ctx->r6 & 0XFFFF;
    // 0x80039450: sll         $t4, $t6, 4
    ctx->r12 = S32(ctx->r14 << 4);
    // 0x80039454: or          $a1, $t6, $zero
    ctx->r5 = ctx->r14 | 0;
    // 0x80039458: addu        $t5, $t4, $t7
    ctx->r13 = ADD32(ctx->r12, ctx->r15);
    // 0x8003945C: sll         $t4, $a1, 2
    ctx->r12 = S32(ctx->r5 << 2);
    // 0x80039460: addu        $t4, $t4, $a1
    ctx->r12 = ADD32(ctx->r12, ctx->r5);
    // 0x80039464: sw          $a3, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r7;
    // 0x80039468: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x8003946C: lhu         $t8, 0x56($sp)
    ctx->r24 = MEM_HU(ctx->r29, 0X56);
    // 0x80039470: addu        $t4, $t4, $a1
    ctx->r12 = ADD32(ctx->r12, ctx->r5);
    // 0x80039474: sw          $a2, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r6;
    // 0x80039478: sll         $t6, $t5, 2
    ctx->r14 = S32(ctx->r13 << 2);
    // 0x8003947C: sll         $t4, $t4, 3
    ctx->r12 = S32(ctx->r12 << 3);
    // 0x80039480: or          $a2, $t7, $zero
    ctx->r6 = ctx->r15 | 0;
    // 0x80039484: subu        $t6, $t6, $t5
    ctx->r14 = SUB32(ctx->r14, ctx->r13);
    // 0x80039488: addu        $t4, $t4, $a1
    ctx->r12 = ADD32(ctx->r12, ctx->r5);
    // 0x8003948C: addiu       $t9, $t8, 0x404
    ctx->r25 = ADD32(ctx->r24, 0X404);
    // 0x80039490: sll         $t3, $t9, 2
    ctx->r11 = S32(ctx->r25 << 2);
    // 0x80039494: lui         $t7, 0x802D
    ctx->r15 = S32(0X802D << 16);
    // 0x80039498: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x8003949C: addiu       $t7, $t7, -0x6000
    ctx->r15 = ADD32(ctx->r15, -0X6000);
    // 0x800394A0: subu        $t3, $t3, $t9
    ctx->r11 = SUB32(ctx->r11, ctx->r25);
    // 0x800394A4: sll         $t6, $t6, 8
    ctx->r14 = S32(ctx->r14 << 8);
    // 0x800394A8: addu        $t4, $t4, $a1
    ctx->r12 = ADD32(ctx->r12, ctx->r5);
    // 0x800394AC: lui         $t5, 0x8012
    ctx->r13 = S32(0X8012 << 16);
    // 0x800394B0: sw          $t8, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r24;
    // 0x800394B4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800394B8: sw          $a0, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r4;
    // 0x800394BC: addu        $t8, $t6, $t7
    ctx->r24 = ADD32(ctx->r14, ctx->r15);
    // 0x800394C0: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x800394C4: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x800394C8: addiu       $t5, $t5, -0x2CF0
    ctx->r13 = ADD32(ctx->r13, -0X2CF0);
    // 0x800394CC: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x800394D0: sh          $t9, 0x12($a0)
    MEM_H(0X12, ctx->r4) = ctx->r25;
    // 0x800394D4: addu        $at, $at, $t3
    ctx->r1 = ADD32(ctx->r1, ctx->r11);
    // 0x800394D8: addu        $t1, $t4, $t5
    ctx->r9 = ADD32(ctx->r12, ctx->r13);
    // 0x800394DC: sll         $t6, $a2, 1
    ctx->r14 = S32(ctx->r6 << 1);
    // 0x800394E0: sw          $t8, -0x438($at)
    MEM_W(-0X438, ctx->r1) = ctx->r24;
    // 0x800394E4: addu        $t2, $t1, $t6
    ctx->r10 = ADD32(ctx->r9, ctx->r14);
    // 0x800394E8: lbu         $t0, 0x2E8($t2)
    ctx->r8 = MEM_BU(ctx->r10, 0X2E8);
    // 0x800394EC: sll         $t9, $a2, 2
    ctx->r25 = S32(ctx->r6 << 2);
    // 0x800394F0: sltiu       $at, $t0, 0x24
    ctx->r1 = ctx->r8 < 0X24 ? 1 : 0;
    // 0x800394F4: beq         $at, $zero, L_8003952C
    if (ctx->r1 == 0) {
        // 0x800394F8: sll         $t7, $t0, 2
        ctx->r15 = S32(ctx->r8 << 2);
            goto L_8003952C;
    }
    // 0x800394F8: sll         $t7, $t0, 2
    ctx->r15 = S32(ctx->r8 << 2);
    // 0x800394FC: subu        $t7, $t7, $t0
    ctx->r15 = SUB32(ctx->r15, ctx->r8);
    // 0x80039500: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80039504: subu        $t9, $t9, $a2
    ctx->r25 = SUB32(ctx->r25, ctx->r6);
    // 0x80039508: lui         $t3, 0x800A
    ctx->r11 = S32(0X800A << 16);
    // 0x8003950C: addiu       $t3, $t3, 0x7B60
    ctx->r11 = ADD32(ctx->r11, 0X7B60);
    // 0x80039510: addu        $t8, $t7, $t9
    ctx->r24 = ADD32(ctx->r15, ctx->r25);
    // 0x80039514: addu        $v0, $t8, $t3
    ctx->r2 = ADD32(ctx->r24, ctx->r11);
    // 0x80039518: lbu         $t4, 0x1($v0)
    ctx->r12 = MEM_BU(ctx->r2, 0X1);
    // 0x8003951C: lbu         $t5, 0x2($v0)
    ctx->r13 = MEM_BU(ctx->r2, 0X2);
    // 0x80039520: sb          $t4, 0x3B($sp)
    MEM_B(0X3B, ctx->r29) = ctx->r12;
    // 0x80039524: b           L_800395B0
    // 0x80039528: sb          $t5, 0x3A($sp)
    MEM_B(0X3A, ctx->r29) = ctx->r13;
        goto L_800395B0;
    // 0x80039528: sb          $t5, 0x3A($sp)
    MEM_B(0X3A, ctx->r29) = ctx->r13;
L_8003952C:
    // 0x8003952C: sll         $a0, $t0, 16
    ctx->r4 = S32(ctx->r8 << 16);
    // 0x80039530: sra         $t6, $a0, 16
    ctx->r14 = S32(SIGNED(ctx->r4) >> 16);
    // 0x80039534: or          $a0, $t6, $zero
    ctx->r4 = ctx->r14 | 0;
    // 0x80039538: sw          $t1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r9;
    // 0x8003953C: jal         0x8006E7F0
    // 0x80039540: sw          $t2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r10;
    func_8006E7F0(rdram, ctx);
        goto after_0;
    // 0x80039540: sw          $t2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r10;
    after_0:
    // 0x80039544: lw          $t2, 0x18($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X18);
    // 0x80039548: lw          $t1, 0x20($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X20);
    // 0x8003954C: lbu         $t8, 0x2E9($t2)
    ctx->r24 = MEM_BU(ctx->r10, 0X2E9);
    // 0x80039550: sll         $t7, $v0, 4
    ctx->r15 = S32(ctx->r2 << 4);
    // 0x80039554: addu        $t9, $t1, $t7
    ctx->r25 = ADD32(ctx->r9, ctx->r15);
    // 0x80039558: addu        $t3, $t9, $t8
    ctx->r11 = ADD32(ctx->r25, ctx->r24);
    // 0x8003955C: lbu         $a2, 0x9C6($t3)
    ctx->r6 = MEM_BU(ctx->r11, 0X9C6);
    // 0x80039560: lui         $t5, 0x800B
    ctx->r13 = S32(0X800B << 16);
    // 0x80039564: sll         $t4, $a2, 2
    ctx->r12 = S32(ctx->r6 << 2);
    // 0x80039568: addiu       $t5, $t5, -0x7DE0
    ctx->r13 = ADD32(ctx->r13, -0X7DE0);
    // 0x8003956C: subu        $t4, $t4, $a2
    ctx->r12 = SUB32(ctx->r12, ctx->r6);
    // 0x80039570: addu        $a1, $t4, $t5
    ctx->r5 = ADD32(ctx->r12, ctx->r13);
    // 0x80039574: lbu         $t6, 0x1($a1)
    ctx->r14 = MEM_BU(ctx->r5, 0X1);
    // 0x80039578: lbu         $t7, 0x2($a1)
    ctx->r15 = MEM_BU(ctx->r5, 0X2);
    // 0x8003957C: sll         $a0, $v0, 16
    ctx->r4 = S32(ctx->r2 << 16);
    // 0x80039580: sra         $t9, $a0, 16
    ctx->r25 = S32(SIGNED(ctx->r4) >> 16);
    // 0x80039584: or          $a0, $t9, $zero
    ctx->r4 = ctx->r25 | 0;
    // 0x80039588: sw          $v0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r2;
    // 0x8003958C: sb          $t6, 0x3B($sp)
    MEM_B(0X3B, ctx->r29) = ctx->r14;
    // 0x80039590: jal         0x8006E7F0
    // 0x80039594: sb          $t7, 0x3A($sp)
    MEM_B(0X3A, ctx->r29) = ctx->r15;
    func_8006E7F0(rdram, ctx);
        goto after_1;
    // 0x80039594: sb          $t7, 0x3A($sp)
    MEM_B(0X3A, ctx->r29) = ctx->r15;
    after_1:
    // 0x80039598: lw          $t0, 0x40($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X40);
    // 0x8003959C: nop

    // 0x800395A0: sll         $a0, $t0, 16
    ctx->r4 = S32(ctx->r8 << 16);
    // 0x800395A4: sra         $t8, $a0, 16
    ctx->r24 = S32(SIGNED(ctx->r4) >> 16);
    // 0x800395A8: jal         0x8006E7F0
    // 0x800395AC: or          $a0, $t8, $zero
    ctx->r4 = ctx->r24 | 0;
    func_8006E7F0(rdram, ctx);
        goto after_2;
    // 0x800395AC: or          $a0, $t8, $zero
    ctx->r4 = ctx->r24 | 0;
    after_2:
L_800395B0:
    // 0x800395B0: lhu         $t3, 0x56($sp)
    ctx->r11 = MEM_HU(ctx->r29, 0X56);
    // 0x800395B4: lbu         $t7, 0x3A($sp)
    ctx->r15 = MEM_BU(ctx->r29, 0X3A);
    // 0x800395B8: lbu         $t5, 0x3B($sp)
    ctx->r13 = MEM_BU(ctx->r29, 0X3B);
    // 0x800395BC: lui         $a3, 0x800C
    ctx->r7 = S32(0X800C << 16);
    // 0x800395C0: lui         $t8, 0x800A
    ctx->r24 = S32(0X800A << 16);
    // 0x800395C4: sll         $t4, $t3, 2
    ctx->r12 = S32(ctx->r11 << 2);
    // 0x800395C8: sll         $t9, $t7, 2
    ctx->r25 = S32(ctx->r15 << 2);
    // 0x800395CC: addu        $a3, $a3, $t4
    ctx->r7 = ADD32(ctx->r7, ctx->r12);
    // 0x800395D0: lui         $a0, 0x800A
    ctx->r4 = S32(0X800A << 16);
    // 0x800395D4: addu        $t8, $t8, $t9
    ctx->r24 = ADD32(ctx->r24, ctx->r25);
    // 0x800395D8: sll         $t6, $t5, 2
    ctx->r14 = S32(ctx->r13 << 2);
    // 0x800395DC: lw          $a1, 0x47B0($a3)
    ctx->r5 = MEM_W(ctx->r7, 0X47B0);
    // 0x800395E0: lw          $t8, 0x7B3C($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X7B3C);
    // 0x800395E4: addu        $a0, $a0, $t6
    ctx->r4 = ADD32(ctx->r4, ctx->r14);
    // 0x800395E8: lw          $a0, 0x7B18($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7B18);
    // 0x800395EC: addiu       $a2, $zero, 0x80
    ctx->r6 = ADD32(0, 0X80);
    // 0x800395F0: sw          $a1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r5;
    // 0x800395F4: jal         0x8001DA44
    // 0x800395F8: sw          $t8, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r24;
    func_8001DA44(rdram, ctx);
        goto after_3;
    // 0x800395F8: sw          $t8, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r24;
    after_3:
    // 0x800395FC: lw          $a3, 0x34($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X34);
    // 0x80039600: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    // 0x80039604: addiu       $a2, $zero, 0x80
    ctx->r6 = ADD32(0, 0X80);
    // 0x80039608: jal         0x8001DA44
    // 0x8003960C: addiu       $a1, $a3, 0x80
    ctx->r5 = ADD32(ctx->r7, 0X80);
    func_8001DA44(rdram, ctx);
        goto after_4;
    // 0x8003960C: addiu       $a1, $a3, 0x80
    ctx->r5 = ADD32(ctx->r7, 0X80);
    after_4:
    // 0x80039610: lw          $a2, 0x1C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X1C);
    // 0x80039614: lw          $a0, 0x48($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X48);
    // 0x80039618: sll         $t3, $a2, 4
    ctx->r11 = S32(ctx->r6 << 4);
    // 0x8003961C: andi        $a2, $t3, 0xFF
    ctx->r6 = ctx->r11 & 0XFF;
    // 0x80039620: jal         0x80021408
    // 0x80039624: addiu       $a1, $zero, 0x21
    ctx->r5 = ADD32(0, 0X21);
    func_80021408(rdram, ctx);
        goto after_5;
    // 0x80039624: addiu       $a1, $zero, 0x21
    ctx->r5 = ADD32(0, 0X21);
    after_5:
    // 0x80039628: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8003962C: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    // 0x80039630: jr          $ra
    // 0x80039634: nop

    return;
    // 0x80039634: nop

;}
RECOMP_FUNC void func_80039638(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80039638: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x8003963C: addiu       $a1, $zero, 0xFF
    ctx->r5 = ADD32(0, 0XFF);
L_80039640:
    // 0x80039640: lui         $t7, 0x8011
    ctx->r15 = S32(0X8011 << 16);
    // 0x80039644: addiu       $t7, $t7, 0x5330
    ctx->r15 = ADD32(ctx->r15, 0X5330);
    // 0x80039648: sll         $t6, $v0, 4
    ctx->r14 = S32(ctx->r2 << 4);
    // 0x8003964C: addu        $a0, $t6, $t7
    ctx->r4 = ADD32(ctx->r14, ctx->r15);
    // 0x80039650: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
L_80039654:
    // 0x80039654: addu        $t8, $a0, $v1
    ctx->r24 = ADD32(ctx->r4, ctx->r3);
    // 0x80039658: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x8003965C: sll         $t9, $v1, 16
    ctx->r25 = S32(ctx->r3 << 16);
    // 0x80039660: sra         $v1, $t9, 16
    ctx->r3 = S32(SIGNED(ctx->r25) >> 16);
    // 0x80039664: slti        $at, $v1, 0x10
    ctx->r1 = SIGNED(ctx->r3) < 0X10 ? 1 : 0;
    // 0x80039668: bne         $at, $zero, L_80039654
    if (ctx->r1 != 0) {
        // 0x8003966C: sb          $a1, 0x0($t8)
        MEM_B(0X0, ctx->r24) = ctx->r5;
            goto L_80039654;
    }
    // 0x8003966C: sb          $a1, 0x0($t8)
    MEM_B(0X0, ctx->r24) = ctx->r5;
    // 0x80039670: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80039674: sll         $t1, $v0, 16
    ctx->r9 = S32(ctx->r2 << 16);
    // 0x80039678: sra         $v0, $t1, 16
    ctx->r2 = S32(SIGNED(ctx->r9) >> 16);
    // 0x8003967C: slti        $at, $v0, 0x2
    ctx->r1 = SIGNED(ctx->r2) < 0X2 ? 1 : 0;
    // 0x80039680: bne         $at, $zero, L_80039640
    if (ctx->r1 != 0) {
        // 0x80039684: nop
    
            goto L_80039640;
    }
    // 0x80039684: nop

    // 0x80039688: jr          $ra
    // 0x8003968C: nop

    return;
    // 0x8003968C: nop

;}
RECOMP_FUNC void func_80039690(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80039690: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80039694: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80039698: jal         0x800396B8
    // 0x8003969C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    func_800396B8(rdram, ctx);
        goto after_0;
    // 0x8003969C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_0:
    // 0x800396A0: jal         0x800396B8
    // 0x800396A4: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    func_800396B8(rdram, ctx);
        goto after_1;
    // 0x800396A4: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_1:
    // 0x800396A8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800396AC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800396B0: jr          $ra
    // 0x800396B4: nop

    return;
    // 0x800396B4: nop

;}
RECOMP_FUNC void func_800396B8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800396B8: andi        $t6, $a0, 0xFF
    ctx->r14 = ctx->r4 & 0XFF;
    // 0x800396BC: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800396C0: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800396C4: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800396C8: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800396CC: sll         $t7, $t7, 3
    ctx->r15 = S32(ctx->r15 << 3);
    // 0x800396D0: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800396D4: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800396D8: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800396DC: lui         $t8, 0x8012
    ctx->r24 = S32(0X8012 << 16);
    // 0x800396E0: addiu       $t8, $t8, -0x2CF0
    ctx->r24 = ADD32(ctx->r24, -0X2CF0);
    // 0x800396E4: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800396E8: lui         $v1, 0x8011
    ctx->r3 = S32(0X8011 << 16);
    // 0x800396EC: lui         $t0, 0x8011
    ctx->r8 = S32(0X8011 << 16);
    // 0x800396F0: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x800396F4: addiu       $t0, $t0, 0x5350
    ctx->r8 = ADD32(ctx->r8, 0X5350);
    // 0x800396F8: addiu       $v1, $v1, 0x5330
    ctx->r3 = ADD32(ctx->r3, 0X5330);
    // 0x800396FC: addu        $a1, $t7, $t8
    ctx->r5 = ADD32(ctx->r15, ctx->r24);
    // 0x80039700: addiu       $a3, $zero, 0x10
    ctx->r7 = ADD32(0, 0X10);
L_80039704:
    // 0x80039704: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x80039708: or          $a0, $v1, $zero
    ctx->r4 = ctx->r3 | 0;
    // 0x8003970C: or          $a2, $a1, $zero
    ctx->r6 = ctx->r5 | 0;
L_80039710:
    // 0x80039710: lbu         $t9, 0x0($a0)
    ctx->r25 = MEM_BU(ctx->r4, 0X0);
    // 0x80039714: addiu       $v0, $v0, 0x4
    ctx->r2 = ADD32(ctx->r2, 0X4);
    // 0x80039718: sb          $t9, 0x9C6($a2)
    MEM_B(0X9C6, ctx->r6) = ctx->r25;
    // 0x8003971C: lbu         $t1, 0x1($a0)
    ctx->r9 = MEM_BU(ctx->r4, 0X1);
    // 0x80039720: addiu       $a0, $a0, 0x4
    ctx->r4 = ADD32(ctx->r4, 0X4);
    // 0x80039724: sb          $t1, 0x9C7($a2)
    MEM_B(0X9C7, ctx->r6) = ctx->r9;
    // 0x80039728: lbu         $t2, -0x2($a0)
    ctx->r10 = MEM_BU(ctx->r4, -0X2);
    // 0x8003972C: addiu       $a2, $a2, 0x4
    ctx->r6 = ADD32(ctx->r6, 0X4);
    // 0x80039730: sb          $t2, 0x9C4($a2)
    MEM_B(0X9C4, ctx->r6) = ctx->r10;
    // 0x80039734: lbu         $t3, -0x1($a0)
    ctx->r11 = MEM_BU(ctx->r4, -0X1);
    // 0x80039738: bne         $v0, $a3, L_80039710
    if (ctx->r2 != ctx->r7) {
        // 0x8003973C: sb          $t3, 0x9C5($a2)
        MEM_B(0X9C5, ctx->r6) = ctx->r11;
            goto L_80039710;
    }
    // 0x8003973C: sb          $t3, 0x9C5($a2)
    MEM_B(0X9C5, ctx->r6) = ctx->r11;
    // 0x80039740: addiu       $v1, $v1, 0x10
    ctx->r3 = ADD32(ctx->r3, 0X10);
    // 0x80039744: bne         $v1, $t0, L_80039704
    if (ctx->r3 != ctx->r8) {
        // 0x80039748: addiu       $a1, $a1, 0x10
        ctx->r5 = ADD32(ctx->r5, 0X10);
            goto L_80039704;
    }
    // 0x80039748: addiu       $a1, $a1, 0x10
    ctx->r5 = ADD32(ctx->r5, 0X10);
    // 0x8003974C: jr          $ra
    // 0x80039750: nop

    return;
    // 0x80039750: nop

;}
RECOMP_FUNC void func_80039754(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80039754: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80039758: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8003975C: jal         0x8003977C
    // 0x80039760: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    func_8003977C(rdram, ctx);
        goto after_0;
    // 0x80039760: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_0:
    // 0x80039764: jal         0x8003977C
    // 0x80039768: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    func_8003977C(rdram, ctx);
        goto after_1;
    // 0x80039768: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_1:
    // 0x8003976C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80039770: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80039774: jr          $ra
    // 0x80039778: nop

    return;
    // 0x80039778: nop

;}
RECOMP_FUNC void func_8003977C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8003977C: addiu       $sp, $sp, -0x78
    ctx->r29 = ADD32(ctx->r29, -0X78);
    // 0x80039780: andi        $t6, $a0, 0xFF
    ctx->r14 = ctx->r4 & 0XFF;
    // 0x80039784: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80039788: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8003978C: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80039790: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80039794: sll         $t7, $t7, 3
    ctx->r15 = S32(ctx->r15 << 3);
    // 0x80039798: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8003979C: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800397A0: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800397A4: lui         $t8, 0x8012
    ctx->r24 = S32(0X8012 << 16);
    // 0x800397A8: sw          $fp, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r30;
    // 0x800397AC: sw          $s7, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r23;
    // 0x800397B0: sw          $s6, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r22;
    // 0x800397B4: addiu       $t8, $t8, -0x2CF0
    ctx->r24 = ADD32(ctx->r24, -0X2CF0);
    // 0x800397B8: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800397BC: sw          $s5, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r21;
    // 0x800397C0: sw          $s4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r20;
    // 0x800397C4: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x800397C8: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x800397CC: addu        $s6, $t7, $t8
    ctx->r22 = ADD32(ctx->r15, ctx->r24);
    // 0x800397D0: lui         $s7, 0x8025
    ctx->r23 = S32(0X8025 << 16);
    // 0x800397D4: lui         $fp, 0x802D
    ctx->r30 = S32(0X802D << 16);
    // 0x800397D8: sll         $t9, $t6, 4
    ctx->r25 = S32(ctx->r14 << 4);
    // 0x800397DC: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x800397E0: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x800397E4: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x800397E8: sw          $a0, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->r4;
    // 0x800397EC: sw          $t9, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r25;
    // 0x800397F0: addiu       $fp, $fp, -0x6000
    ctx->r30 = ADD32(ctx->r30, -0X6000);
    // 0x800397F4: addiu       $s7, $s7, -0x4800
    ctx->r23 = ADD32(ctx->r23, -0X4800);
    // 0x800397F8: or          $s3, $s6, $zero
    ctx->r19 = ctx->r22 | 0;
    // 0x800397FC: or          $s2, $zero, $zero
    ctx->r18 = 0 | 0;
    // 0x80039800: addiu       $s4, $zero, 0x3
    ctx->r20 = ADD32(0, 0X3);
    // 0x80039804: addiu       $s5, $zero, 0x300
    ctx->r21 = ADD32(0, 0X300);
L_80039808:
    // 0x80039808: lbu         $s1, 0x2E8($s3)
    ctx->r17 = MEM_BU(ctx->r19, 0X2E8);
    // 0x8003980C: lbu         $s0, 0x2E9($s3)
    ctx->r16 = MEM_BU(ctx->r19, 0X2E9);
    // 0x80039810: sll         $a0, $s1, 16
    ctx->r4 = S32(ctx->r17 << 16);
    // 0x80039814: sra         $t0, $a0, 16
    ctx->r8 = S32(SIGNED(ctx->r4) >> 16);
    // 0x80039818: jal         0x8006E7F0
    // 0x8003981C: or          $a0, $t0, $zero
    ctx->r4 = ctx->r8 | 0;
    func_8006E7F0(rdram, ctx);
        goto after_0;
    // 0x8003981C: or          $a0, $t0, $zero
    ctx->r4 = ctx->r8 | 0;
    after_0:
    // 0x80039820: bltz        $v0, L_80039850
    if (SIGNED(ctx->r2) < 0) {
        // 0x80039824: sll         $t1, $v0, 4
        ctx->r9 = S32(ctx->r2 << 4);
            goto L_80039850;
    }
    // 0x80039824: sll         $t1, $v0, 4
    ctx->r9 = S32(ctx->r2 << 4);
    // 0x80039828: addu        $t2, $s6, $t1
    ctx->r10 = ADD32(ctx->r22, ctx->r9);
    // 0x8003982C: addu        $t3, $t2, $s0
    ctx->r11 = ADD32(ctx->r10, ctx->r16);
    // 0x80039830: lbu         $s0, 0x9C6($t3)
    ctx->r16 = MEM_BU(ctx->r11, 0X9C6);
    // 0x80039834: lui         $v1, 0x800B
    ctx->r3 = S32(0X800B << 16);
    // 0x80039838: multu       $s0, $s4
    result = U64(U32(ctx->r16)) * U64(U32(ctx->r20)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8003983C: mflo        $t4
    ctx->r12 = lo;
    // 0x80039840: addu        $v1, $v1, $t4
    ctx->r3 = ADD32(ctx->r3, ctx->r12);
    // 0x80039844: lbu         $v1, -0x7DE0($v1)
    ctx->r3 = MEM_BU(ctx->r3, -0X7DE0);
    // 0x80039848: b           L_80039878
    // 0x8003984C: nop

        goto L_80039878;
    // 0x8003984C: nop

L_80039850:
    // 0x80039850: multu       $s0, $s4
    result = U64(U32(ctx->r16)) * U64(U32(ctx->r20)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80039854: sll         $t5, $s1, 2
    ctx->r13 = S32(ctx->r17 << 2);
    // 0x80039858: subu        $t5, $t5, $s1
    ctx->r13 = SUB32(ctx->r13, ctx->r17);
    // 0x8003985C: sll         $t5, $t5, 4
    ctx->r13 = S32(ctx->r13 << 4);
    // 0x80039860: lui         $v1, 0x800A
    ctx->r3 = S32(0X800A << 16);
    // 0x80039864: mflo        $t6
    ctx->r14 = lo;
    // 0x80039868: addu        $t7, $t5, $t6
    ctx->r15 = ADD32(ctx->r13, ctx->r14);
    // 0x8003986C: addu        $v1, $v1, $t7
    ctx->r3 = ADD32(ctx->r3, ctx->r15);
    // 0x80039870: lbu         $v1, 0x7B60($v1)
    ctx->r3 = MEM_BU(ctx->r3, 0X7B60);
    // 0x80039874: nop

L_80039878:
    // 0x80039878: multu       $v1, $s5
    result = U64(U32(ctx->r3)) * U64(U32(ctx->r21)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8003987C: lw          $t9, 0x44($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X44);
    // 0x80039880: addiu       $a2, $zero, 0x300
    ctx->r6 = ADD32(0, 0X300);
    // 0x80039884: addu        $t0, $t9, $s2
    ctx->r8 = ADD32(ctx->r25, ctx->r18);
    // 0x80039888: mflo        $t8
    ctx->r24 = lo;
    // 0x8003988C: addu        $a0, $s7, $t8
    ctx->r4 = ADD32(ctx->r23, ctx->r24);
    // 0x80039890: nop

    // 0x80039894: multu       $t0, $s5
    result = U64(U32(ctx->r8)) * U64(U32(ctx->r21)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80039898: mflo        $t1
    ctx->r9 = lo;
    // 0x8003989C: addu        $a1, $fp, $t1
    ctx->r5 = ADD32(ctx->r30, ctx->r9);
    // 0x800398A0: jal         0x8001DA44
    // 0x800398A4: nop

    func_8001DA44(rdram, ctx);
        goto after_1;
    // 0x800398A4: nop

    after_1:
    // 0x800398A8: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
    // 0x800398AC: addiu       $at, $zero, 0x10
    ctx->r1 = ADD32(0, 0X10);
    // 0x800398B0: bne         $s2, $at, L_80039808
    if (ctx->r18 != ctx->r1) {
        // 0x800398B4: addiu       $s3, $s3, 0x2
        ctx->r19 = ADD32(ctx->r19, 0X2);
            goto L_80039808;
    }
    // 0x800398B4: addiu       $s3, $s3, 0x2
    ctx->r19 = ADD32(ctx->r19, 0X2);
    // 0x800398B8: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    // 0x800398BC: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x800398C0: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x800398C4: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x800398C8: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x800398CC: lw          $s4, 0x28($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X28);
    // 0x800398D0: lw          $s5, 0x2C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X2C);
    // 0x800398D4: lw          $s6, 0x30($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X30);
    // 0x800398D8: lw          $s7, 0x34($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X34);
    // 0x800398DC: lw          $fp, 0x38($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X38);
    // 0x800398E0: jr          $ra
    // 0x800398E4: addiu       $sp, $sp, 0x78
    ctx->r29 = ADD32(ctx->r29, 0X78);
    return;
    // 0x800398E4: addiu       $sp, $sp, 0x78
    ctx->r29 = ADD32(ctx->r29, 0X78);
;}
RECOMP_FUNC void func_800398E8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800398E8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800398EC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800398F0: jal         0x80039910
    // 0x800398F4: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    func_80039910(rdram, ctx);
        goto after_0;
    // 0x800398F4: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_0:
    // 0x800398F8: jal         0x80039910
    // 0x800398FC: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    func_80039910(rdram, ctx);
        goto after_1;
    // 0x800398FC: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_1:
    // 0x80039900: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80039904: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80039908: jr          $ra
    // 0x8003990C: nop

    return;
    // 0x8003990C: nop

;}
RECOMP_FUNC void func_80039910(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80039910: andi        $t6, $a0, 0xFF
    ctx->r14 = ctx->r4 & 0XFF;
    // 0x80039914: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80039918: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8003991C: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80039920: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80039924: sll         $t7, $t7, 3
    ctx->r15 = S32(ctx->r15 << 3);
    // 0x80039928: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8003992C: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80039930: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80039934: lui         $t8, 0x8012
    ctx->r24 = S32(0X8012 << 16);
    // 0x80039938: addiu       $t8, $t8, -0x2CF0
    ctx->r24 = ADD32(ctx->r24, -0X2CF0);
    // 0x8003993C: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80039940: addu        $t1, $t7, $t8
    ctx->r9 = ADD32(ctx->r15, ctx->r24);
    // 0x80039944: lui         $t2, 0x800B
    ctx->r10 = S32(0X800B << 16);
    // 0x80039948: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x8003994C: addiu       $t2, $t2, -0x7A10
    ctx->r10 = ADD32(ctx->r10, -0X7A10);
    // 0x80039950: or          $a3, $t1, $zero
    ctx->r7 = ctx->r9 | 0;
    // 0x80039954: or          $t0, $t1, $zero
    ctx->r8 = ctx->r9 | 0;
    // 0x80039958: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8003995C: addiu       $t3, $zero, 0x20
    ctx->r11 = ADD32(0, 0X20);
L_80039960:
    // 0x80039960: lbu         $v1, 0x2E8($t1)
    ctx->r3 = MEM_BU(ctx->r9, 0X2E8);
    // 0x80039964: lbu         $v0, 0x2E9($t1)
    ctx->r2 = MEM_BU(ctx->r9, 0X2E9);
    // 0x80039968: slti        $at, $v1, 0x2A
    ctx->r1 = SIGNED(ctx->r3) < 0X2A ? 1 : 0;
    // 0x8003996C: bne         $at, $zero, L_8003997C
    if (ctx->r1 != 0) {
        // 0x80039970: sll         $t5, $v0, 2
        ctx->r13 = S32(ctx->r2 << 2);
            goto L_8003997C;
    }
    // 0x80039970: sll         $t5, $v0, 2
    ctx->r13 = S32(ctx->r2 << 2);
    // 0x80039974: b           L_80039980
    // 0x80039978: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
        goto L_80039980;
    // 0x80039978: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
L_8003997C:
    // 0x8003997C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
L_80039980:
    // 0x80039980: subu        $v1, $v1, $a0
    ctx->r3 = SUB32(ctx->r3, ctx->r4);
    // 0x80039984: sll         $t9, $v1, 2
    ctx->r25 = S32(ctx->r3 << 2);
    // 0x80039988: addu        $t9, $t9, $v1
    ctx->r25 = ADD32(ctx->r25, ctx->r3);
    // 0x8003998C: sll         $t9, $t9, 4
    ctx->r25 = S32(ctx->r25 << 4);
    // 0x80039990: addu        $t4, $t2, $t9
    ctx->r12 = ADD32(ctx->r10, ctx->r25);
    // 0x80039994: addu        $t5, $t5, $v0
    ctx->r13 = ADD32(ctx->r13, ctx->r2);
    // 0x80039998: addu        $a2, $t4, $t5
    ctx->r6 = ADD32(ctx->r12, ctx->r13);
    // 0x8003999C: lbu         $t6, 0x0($a2)
    ctx->r14 = MEM_BU(ctx->r6, 0X0);
    // 0x800399A0: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x800399A4: addu        $v0, $a2, $a0
    ctx->r2 = ADD32(ctx->r6, ctx->r4);
    // 0x800399A8: sb          $t6, 0x976($t0)
    MEM_B(0X976, ctx->r8) = ctx->r14;
    // 0x800399AC: lbu         $t7, 0x0($v0)
    ctx->r15 = MEM_BU(ctx->r2, 0X0);
    // 0x800399B0: addu        $v1, $a3, $a0
    ctx->r3 = ADD32(ctx->r7, ctx->r4);
    // 0x800399B4: sb          $t7, 0x976($v1)
    MEM_B(0X976, ctx->r3) = ctx->r15;
    // 0x800399B8: lbu         $t8, 0x1($v0)
    ctx->r24 = MEM_BU(ctx->r2, 0X1);
    // 0x800399BC: addiu       $a1, $a1, 0x2
    ctx->r5 = ADD32(ctx->r5, 0X2);
    // 0x800399C0: sb          $t8, 0x977($v1)
    MEM_B(0X977, ctx->r3) = ctx->r24;
    // 0x800399C4: lbu         $t9, 0x2($v0)
    ctx->r25 = MEM_BU(ctx->r2, 0X2);
    // 0x800399C8: addiu       $a3, $a3, 0x5
    ctx->r7 = ADD32(ctx->r7, 0X5);
    // 0x800399CC: sb          $t9, 0x978($v1)
    MEM_B(0X978, ctx->r3) = ctx->r25;
    // 0x800399D0: lbu         $t4, 0x3($v0)
    ctx->r12 = MEM_BU(ctx->r2, 0X3);
    // 0x800399D4: addiu       $t0, $t0, 0x5
    ctx->r8 = ADD32(ctx->r8, 0X5);
    // 0x800399D8: addiu       $t1, $t1, 0x2
    ctx->r9 = ADD32(ctx->r9, 0X2);
    // 0x800399DC: bne         $a1, $t3, L_80039960
    if (ctx->r5 != ctx->r11) {
        // 0x800399E0: sb          $t4, 0x979($v1)
        MEM_B(0X979, ctx->r3) = ctx->r12;
            goto L_80039960;
    }
    // 0x800399E0: sb          $t4, 0x979($v1)
    MEM_B(0X979, ctx->r3) = ctx->r12;
    // 0x800399E4: jr          $ra
    // 0x800399E8: nop

    return;
    // 0x800399E8: nop

;}
RECOMP_FUNC void func_800399EC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800399EC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800399F0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800399F4: jal         0x80039A14
    // 0x800399F8: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    func_80039A14(rdram, ctx);
        goto after_0;
    // 0x800399F8: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_0:
    // 0x800399FC: jal         0x80039A14
    // 0x80039A00: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    func_80039A14(rdram, ctx);
        goto after_1;
    // 0x80039A00: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_1:
    // 0x80039A04: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80039A08: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80039A0C: jr          $ra
    // 0x80039A10: nop

    return;
    // 0x80039A10: nop

;}
RECOMP_FUNC void func_80039A14(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80039A14: andi        $t6, $a0, 0xFF
    ctx->r14 = ctx->r4 & 0XFF;
    // 0x80039A18: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80039A1C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80039A20: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80039A24: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80039A28: sll         $t7, $t7, 3
    ctx->r15 = S32(ctx->r15 << 3);
    // 0x80039A2C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80039A30: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80039A34: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80039A38: lui         $t8, 0x8012
    ctx->r24 = S32(0X8012 << 16);
    // 0x80039A3C: addiu       $t8, $t8, -0x2CF0
    ctx->r24 = ADD32(ctx->r24, -0X2CF0);
    // 0x80039A40: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80039A44: addu        $a3, $t7, $t8
    ctx->r7 = ADD32(ctx->r15, ctx->r24);
    // 0x80039A48: lui         $t1, 0x8011
    ctx->r9 = S32(0X8011 << 16);
    // 0x80039A4C: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x80039A50: addiu       $t1, $t1, 0x3D30
    ctx->r9 = ADD32(ctx->r9, 0X3D30);
    // 0x80039A54: or          $a2, $a3, $zero
    ctx->r6 = ctx->r7 | 0;
    // 0x80039A58: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80039A5C: addiu       $t3, $zero, 0x20
    ctx->r11 = ADD32(0, 0X20);
    // 0x80039A60: addiu       $t2, $zero, 0x8
    ctx->r10 = ADD32(0, 0X8);
L_80039A64:
    // 0x80039A64: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x80039A68: or          $t0, $a3, $zero
    ctx->r8 = ctx->r7 | 0;
L_80039A6C:
    // 0x80039A6C: lbu         $a0, 0x2E8($a2)
    ctx->r4 = MEM_BU(ctx->r6, 0X2E8);
    // 0x80039A70: lbu         $v1, 0x2E9($a2)
    ctx->r3 = MEM_BU(ctx->r6, 0X2E9);
    // 0x80039A74: sll         $t9, $a0, 7
    ctx->r25 = S32(ctx->r4 << 7);
    // 0x80039A78: addu        $t4, $t1, $t9
    ctx->r12 = ADD32(ctx->r9, ctx->r25);
    // 0x80039A7C: sll         $t5, $v1, 3
    ctx->r13 = S32(ctx->r3 << 3);
    // 0x80039A80: addu        $t6, $t4, $t5
    ctx->r14 = ADD32(ctx->r12, ctx->r13);
    // 0x80039A84: addu        $t7, $t6, $v0
    ctx->r15 = ADD32(ctx->r14, ctx->r2);
    // 0x80039A88: lbu         $t8, 0x0($t7)
    ctx->r24 = MEM_BU(ctx->r15, 0X0);
    // 0x80039A8C: addiu       $t0, $t0, 0x4
    ctx->r8 = ADD32(ctx->r8, 0X4);
    // 0x80039A90: sb          $t8, 0xA02($t0)
    MEM_B(0XA02, ctx->r8) = ctx->r24;
    // 0x80039A94: lbu         $a0, 0x2E8($a2)
    ctx->r4 = MEM_BU(ctx->r6, 0X2E8);
    // 0x80039A98: lbu         $v1, 0x2E9($a2)
    ctx->r3 = MEM_BU(ctx->r6, 0X2E9);
    // 0x80039A9C: sll         $t9, $a0, 7
    ctx->r25 = S32(ctx->r4 << 7);
    // 0x80039AA0: addu        $t4, $t1, $t9
    ctx->r12 = ADD32(ctx->r9, ctx->r25);
    // 0x80039AA4: sll         $t5, $v1, 3
    ctx->r13 = S32(ctx->r3 << 3);
    // 0x80039AA8: addu        $t6, $t4, $t5
    ctx->r14 = ADD32(ctx->r12, ctx->r13);
    // 0x80039AAC: addu        $t7, $t6, $v0
    ctx->r15 = ADD32(ctx->r14, ctx->r2);
    // 0x80039AB0: lbu         $t8, 0x1($t7)
    ctx->r24 = MEM_BU(ctx->r15, 0X1);
    // 0x80039AB4: nop

    // 0x80039AB8: sb          $t8, 0xA03($t0)
    MEM_B(0XA03, ctx->r8) = ctx->r24;
    // 0x80039ABC: lbu         $a0, 0x2E8($a2)
    ctx->r4 = MEM_BU(ctx->r6, 0X2E8);
    // 0x80039AC0: lbu         $v1, 0x2E9($a2)
    ctx->r3 = MEM_BU(ctx->r6, 0X2E9);
    // 0x80039AC4: sll         $t9, $a0, 7
    ctx->r25 = S32(ctx->r4 << 7);
    // 0x80039AC8: addu        $t4, $t1, $t9
    ctx->r12 = ADD32(ctx->r9, ctx->r25);
    // 0x80039ACC: sll         $t5, $v1, 3
    ctx->r13 = S32(ctx->r3 << 3);
    // 0x80039AD0: addu        $t6, $t4, $t5
    ctx->r14 = ADD32(ctx->r12, ctx->r13);
    // 0x80039AD4: addu        $t7, $t6, $v0
    ctx->r15 = ADD32(ctx->r14, ctx->r2);
    // 0x80039AD8: lbu         $t8, 0x2($t7)
    ctx->r24 = MEM_BU(ctx->r15, 0X2);
    // 0x80039ADC: nop

    // 0x80039AE0: sb          $t8, 0xA04($t0)
    MEM_B(0XA04, ctx->r8) = ctx->r24;
    // 0x80039AE4: lbu         $a0, 0x2E8($a2)
    ctx->r4 = MEM_BU(ctx->r6, 0X2E8);
    // 0x80039AE8: lbu         $v1, 0x2E9($a2)
    ctx->r3 = MEM_BU(ctx->r6, 0X2E9);
    // 0x80039AEC: sll         $t9, $a0, 7
    ctx->r25 = S32(ctx->r4 << 7);
    // 0x80039AF0: addu        $t4, $t1, $t9
    ctx->r12 = ADD32(ctx->r9, ctx->r25);
    // 0x80039AF4: sll         $t5, $v1, 3
    ctx->r13 = S32(ctx->r3 << 3);
    // 0x80039AF8: addu        $t6, $t4, $t5
    ctx->r14 = ADD32(ctx->r12, ctx->r13);
    // 0x80039AFC: addu        $t7, $t6, $v0
    ctx->r15 = ADD32(ctx->r14, ctx->r2);
    // 0x80039B00: lbu         $t8, 0x3($t7)
    ctx->r24 = MEM_BU(ctx->r15, 0X3);
    // 0x80039B04: addiu       $v0, $v0, 0x4
    ctx->r2 = ADD32(ctx->r2, 0X4);
    // 0x80039B08: bne         $v0, $t2, L_80039A6C
    if (ctx->r2 != ctx->r10) {
        // 0x80039B0C: sb          $t8, 0xA05($t0)
        MEM_B(0XA05, ctx->r8) = ctx->r24;
            goto L_80039A6C;
    }
    // 0x80039B0C: sb          $t8, 0xA05($t0)
    MEM_B(0XA05, ctx->r8) = ctx->r24;
    // 0x80039B10: addiu       $a1, $a1, 0x2
    ctx->r5 = ADD32(ctx->r5, 0X2);
    // 0x80039B14: addiu       $a2, $a2, 0x2
    ctx->r6 = ADD32(ctx->r6, 0X2);
    // 0x80039B18: bne         $a1, $t3, L_80039A64
    if (ctx->r5 != ctx->r11) {
        // 0x80039B1C: addiu       $a3, $a3, 0x8
        ctx->r7 = ADD32(ctx->r7, 0X8);
            goto L_80039A64;
    }
    // 0x80039B1C: addiu       $a3, $a3, 0x8
    ctx->r7 = ADD32(ctx->r7, 0X8);
    // 0x80039B20: jr          $ra
    // 0x80039B24: nop

    return;
    // 0x80039B24: nop

;}
RECOMP_FUNC void func_80039B28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80039B28: andi        $t6, $a0, 0xFF
    ctx->r14 = ctx->r4 & 0XFF;
    // 0x80039B2C: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80039B30: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80039B34: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80039B38: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80039B3C: sll         $t7, $t7, 3
    ctx->r15 = S32(ctx->r15 << 3);
    // 0x80039B40: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80039B44: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80039B48: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80039B4C: lui         $t8, 0x8012
    ctx->r24 = S32(0X8012 << 16);
    // 0x80039B50: addiu       $t8, $t8, -0x2CF0
    ctx->r24 = ADD32(ctx->r24, -0X2CF0);
    // 0x80039B54: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80039B58: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    // 0x80039B5C: addu        $t0, $t7, $t8
    ctx->r8 = ADD32(ctx->r15, ctx->r24);
    // 0x80039B60: lui         $t2, 0x800A
    ctx->r10 = S32(0X800A << 16);
    // 0x80039B64: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x80039B68: addiu       $t2, $t2, 0x7278
    ctx->r10 = ADD32(ctx->r10, 0X7278);
    // 0x80039B6C: or          $a3, $t0, $zero
    ctx->r7 = ctx->r8 | 0;
    // 0x80039B70: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80039B74: addiu       $t4, $zero, 0x20
    ctx->r12 = ADD32(0, 0X20);
    // 0x80039B78: addiu       $t3, $zero, 0x8
    ctx->r11 = ADD32(0, 0X8);
L_80039B7C:
    // 0x80039B7C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x80039B80: or          $t1, $t0, $zero
    ctx->r9 = ctx->r8 | 0;
L_80039B84:
    // 0x80039B84: lbu         $a0, 0x2E8($a3)
    ctx->r4 = MEM_BU(ctx->r7, 0X2E8);
    // 0x80039B88: lbu         $v1, 0x2E9($a3)
    ctx->r3 = MEM_BU(ctx->r7, 0X2E9);
    // 0x80039B8C: sll         $t9, $a0, 2
    ctx->r25 = S32(ctx->r4 << 2);
    // 0x80039B90: addu        $t5, $t2, $t9
    ctx->r13 = ADD32(ctx->r10, ctx->r25);
    // 0x80039B94: lw          $t6, 0x0($t5)
    ctx->r14 = MEM_W(ctx->r13, 0X0);
    // 0x80039B98: sll         $t7, $v1, 3
    ctx->r15 = S32(ctx->r3 << 3);
    // 0x80039B9C: addu        $a2, $t6, $t7
    ctx->r6 = ADD32(ctx->r14, ctx->r15);
    // 0x80039BA0: addu        $t8, $a2, $v0
    ctx->r24 = ADD32(ctx->r6, ctx->r2);
    // 0x80039BA4: lbu         $t9, 0x0($t8)
    ctx->r25 = MEM_BU(ctx->r24, 0X0);
    // 0x80039BA8: addiu       $t1, $t1, 0x4
    ctx->r9 = ADD32(ctx->r9, 0X4);
    // 0x80039BAC: sb          $t9, 0xA02($t1)
    MEM_B(0XA02, ctx->r9) = ctx->r25;
    // 0x80039BB0: lbu         $a0, 0x2E8($a3)
    ctx->r4 = MEM_BU(ctx->r7, 0X2E8);
    // 0x80039BB4: lbu         $v1, 0x2E9($a3)
    ctx->r3 = MEM_BU(ctx->r7, 0X2E9);
    // 0x80039BB8: sll         $t5, $a0, 2
    ctx->r13 = S32(ctx->r4 << 2);
    // 0x80039BBC: addu        $t6, $t2, $t5
    ctx->r14 = ADD32(ctx->r10, ctx->r13);
    // 0x80039BC0: lw          $t7, 0x0($t6)
    ctx->r15 = MEM_W(ctx->r14, 0X0);
    // 0x80039BC4: sll         $t8, $v1, 3
    ctx->r24 = S32(ctx->r3 << 3);
    // 0x80039BC8: addu        $a2, $t7, $t8
    ctx->r6 = ADD32(ctx->r15, ctx->r24);
    // 0x80039BCC: addu        $t9, $a2, $v0
    ctx->r25 = ADD32(ctx->r6, ctx->r2);
    // 0x80039BD0: lbu         $t5, 0x1($t9)
    ctx->r13 = MEM_BU(ctx->r25, 0X1);
    // 0x80039BD4: nop

    // 0x80039BD8: sb          $t5, 0xA03($t1)
    MEM_B(0XA03, ctx->r9) = ctx->r13;
    // 0x80039BDC: lbu         $a0, 0x2E8($a3)
    ctx->r4 = MEM_BU(ctx->r7, 0X2E8);
    // 0x80039BE0: lbu         $v1, 0x2E9($a3)
    ctx->r3 = MEM_BU(ctx->r7, 0X2E9);
    // 0x80039BE4: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x80039BE8: addu        $t7, $t2, $t6
    ctx->r15 = ADD32(ctx->r10, ctx->r14);
    // 0x80039BEC: lw          $t8, 0x0($t7)
    ctx->r24 = MEM_W(ctx->r15, 0X0);
    // 0x80039BF0: sll         $t9, $v1, 3
    ctx->r25 = S32(ctx->r3 << 3);
    // 0x80039BF4: addu        $a2, $t8, $t9
    ctx->r6 = ADD32(ctx->r24, ctx->r25);
    // 0x80039BF8: addu        $t5, $a2, $v0
    ctx->r13 = ADD32(ctx->r6, ctx->r2);
    // 0x80039BFC: lbu         $t6, 0x2($t5)
    ctx->r14 = MEM_BU(ctx->r13, 0X2);
    // 0x80039C00: nop

    // 0x80039C04: sb          $t6, 0xA04($t1)
    MEM_B(0XA04, ctx->r9) = ctx->r14;
    // 0x80039C08: lbu         $a0, 0x2E8($a3)
    ctx->r4 = MEM_BU(ctx->r7, 0X2E8);
    // 0x80039C0C: lbu         $v1, 0x2E9($a3)
    ctx->r3 = MEM_BU(ctx->r7, 0X2E9);
    // 0x80039C10: sll         $t7, $a0, 2
    ctx->r15 = S32(ctx->r4 << 2);
    // 0x80039C14: addu        $t8, $t2, $t7
    ctx->r24 = ADD32(ctx->r10, ctx->r15);
    // 0x80039C18: lw          $t9, 0x0($t8)
    ctx->r25 = MEM_W(ctx->r24, 0X0);
    // 0x80039C1C: sll         $t5, $v1, 3
    ctx->r13 = S32(ctx->r3 << 3);
    // 0x80039C20: addu        $a2, $t9, $t5
    ctx->r6 = ADD32(ctx->r25, ctx->r13);
    // 0x80039C24: addu        $t6, $a2, $v0
    ctx->r14 = ADD32(ctx->r6, ctx->r2);
    // 0x80039C28: lbu         $t7, 0x3($t6)
    ctx->r15 = MEM_BU(ctx->r14, 0X3);
    // 0x80039C2C: addiu       $v0, $v0, 0x4
    ctx->r2 = ADD32(ctx->r2, 0X4);
    // 0x80039C30: bne         $v0, $t3, L_80039B84
    if (ctx->r2 != ctx->r11) {
        // 0x80039C34: sb          $t7, 0xA05($t1)
        MEM_B(0XA05, ctx->r9) = ctx->r15;
            goto L_80039B84;
    }
    // 0x80039C34: sb          $t7, 0xA05($t1)
    MEM_B(0XA05, ctx->r9) = ctx->r15;
    // 0x80039C38: addiu       $a1, $a1, 0x2
    ctx->r5 = ADD32(ctx->r5, 0X2);
    // 0x80039C3C: addiu       $a3, $a3, 0x2
    ctx->r7 = ADD32(ctx->r7, 0X2);
    // 0x80039C40: bne         $a1, $t4, L_80039B7C
    if (ctx->r5 != ctx->r12) {
        // 0x80039C44: addiu       $t0, $t0, 0x8
        ctx->r8 = ADD32(ctx->r8, 0X8);
            goto L_80039B7C;
    }
    // 0x80039C44: addiu       $t0, $t0, 0x8
    ctx->r8 = ADD32(ctx->r8, 0X8);
    // 0x80039C48: jr          $ra
    // 0x80039C4C: nop

    return;
    // 0x80039C4C: nop

;}
RECOMP_FUNC void func_80039C50(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80039C50: sll         $a3, $a0, 16
    ctx->r7 = S32(ctx->r4 << 16);
    // 0x80039C54: lui         $v0, 0x801B
    ctx->r2 = S32(0X801B << 16);
    // 0x80039C58: addiu       $v0, $v0, 0x1CF0
    ctx->r2 = ADD32(ctx->r2, 0X1CF0);
    // 0x80039C5C: sra         $t6, $a3, 16
    ctx->r14 = S32(SIGNED(ctx->r7) >> 16);
    // 0x80039C60: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80039C64: lw          $t9, 0x0($v0)
    ctx->r25 = MEM_W(ctx->r2, 0X0);
    // 0x80039C68: sll         $t7, $t6, 1
    ctx->r15 = S32(ctx->r14 << 1);
    // 0x80039C6C: lui         $t8, 0x800B
    ctx->r24 = S32(0X800B << 16);
    // 0x80039C70: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80039C74: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x80039C78: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x80039C7C: lhu         $t8, -0x6B14($t8)
    ctx->r24 = MEM_HU(ctx->r24, -0X6B14);
    // 0x80039C80: lw          $t0, 0x14($t9)
    ctx->r8 = MEM_W(ctx->r25, 0X14);
    // 0x80039C84: lui         $a2, 0x800B
    ctx->r6 = S32(0X800B << 16);
    // 0x80039C88: sh          $t8, 0x12($t0)
    MEM_H(0X12, ctx->r8) = ctx->r24;
    // 0x80039C8C: lw          $t1, 0x0($v0)
    ctx->r9 = MEM_W(ctx->r2, 0X0);
    // 0x80039C90: addu        $a2, $a2, $t6
    ctx->r6 = ADD32(ctx->r6, ctx->r14);
    // 0x80039C94: lbu         $a2, -0x6B04($a2)
    ctx->r6 = MEM_BU(ctx->r6, -0X6B04);
    // 0x80039C98: lw          $a0, 0x14($t1)
    ctx->r4 = MEM_W(ctx->r9, 0X14);
    // 0x80039C9C: jal         0x8002135C
    // 0x80039CA0: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_8002135C(rdram, ctx);
        goto after_0;
    // 0x80039CA0: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_0:
    // 0x80039CA4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80039CA8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80039CAC: jr          $ra
    // 0x80039CB0: nop

    return;
    // 0x80039CB0: nop

;}
RECOMP_FUNC void func_80039CB4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80039CB4: lui         $t6, 0x8012
    ctx->r14 = S32(0X8012 << 16);
    // 0x80039CB8: lb          $t6, -0x3088($t6)
    ctx->r14 = MEM_B(ctx->r14, -0X3088);
    // 0x80039CBC: lui         $t8, 0x800A
    ctx->r24 = S32(0X800A << 16);
    // 0x80039CC0: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80039CC4: addiu       $t8, $t8, 0x7A10
    ctx->r24 = ADD32(ctx->r24, 0X7A10);
    // 0x80039CC8: lui         $t3, 0x8012
    ctx->r11 = S32(0X8012 << 16);
    // 0x80039CCC: lui         $a3, 0x8012
    ctx->r7 = S32(0X8012 << 16);
    // 0x80039CD0: lui         $a2, 0x8012
    ctx->r6 = S32(0X8012 << 16);
    // 0x80039CD4: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80039CD8: addu        $a0, $t7, $t8
    ctx->r4 = ADD32(ctx->r15, ctx->r24);
    // 0x80039CDC: addiu       $a2, $a2, 0xB14
    ctx->r6 = ADD32(ctx->r6, 0XB14);
    // 0x80039CE0: addiu       $a3, $a3, 0x358
    ctx->r7 = ADD32(ctx->r7, 0X358);
    // 0x80039CE4: addiu       $t3, $t3, -0x32B0
    ctx->r11 = ADD32(ctx->r11, -0X32B0);
    // 0x80039CE8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x80039CEC: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x80039CF0: addiu       $t1, $zero, 0x2
    ctx->r9 = ADD32(0, 0X2);
    // 0x80039CF4: addiu       $t0, $zero, 0x58
    ctx->r8 = ADD32(0, 0X58);
L_80039CF8:
    // 0x80039CF8: addu        $t9, $a0, $v0
    ctx->r25 = ADD32(ctx->r4, ctx->r2);
    // 0x80039CFC: lbu         $a1, 0x0($t9)
    ctx->r5 = MEM_BU(ctx->r25, 0X0);
    // 0x80039D00: nop

    // 0x80039D04: bne         $a1, $zero, L_80039D14
    if (ctx->r5 != 0) {
        // 0x80039D08: addu        $v1, $a2, $v0
        ctx->r3 = ADD32(ctx->r6, ctx->r2);
            goto L_80039D14;
    }
    // 0x80039D08: addu        $v1, $a2, $v0
    ctx->r3 = ADD32(ctx->r6, ctx->r2);
    // 0x80039D0C: b           L_80039D34
    // 0x80039D10: sb          $zero, 0x0($v1)
    MEM_B(0X0, ctx->r3) = 0;
        goto L_80039D34;
    // 0x80039D10: sb          $zero, 0x0($v1)
    MEM_B(0X0, ctx->r3) = 0;
L_80039D14:
    // 0x80039D14: bne         $t1, $a1, L_80039D24
    if (ctx->r9 != ctx->r5) {
        // 0x80039D18: addu        $v1, $a2, $v0
        ctx->r3 = ADD32(ctx->r6, ctx->r2);
            goto L_80039D24;
    }
    // 0x80039D18: addu        $v1, $a2, $v0
    ctx->r3 = ADD32(ctx->r6, ctx->r2);
    // 0x80039D1C: b           L_80039D34
    // 0x80039D20: sb          $t2, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r10;
        goto L_80039D34;
    // 0x80039D20: sb          $t2, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r10;
L_80039D24:
    // 0x80039D24: addu        $t4, $t3, $v0
    ctx->r12 = ADD32(ctx->r11, ctx->r2);
    // 0x80039D28: lbu         $t5, 0x4E($t4)
    ctx->r13 = MEM_BU(ctx->r12, 0X4E);
    // 0x80039D2C: addu        $v1, $a2, $v0
    ctx->r3 = ADD32(ctx->r6, ctx->r2);
    // 0x80039D30: sb          $t5, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r13;
L_80039D34:
    // 0x80039D34: multu       $v0, $t0
    result = U64(U32(ctx->r2)) * U64(U32(ctx->r8)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80039D38: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80039D3C: lbu         $t6, 0x0($v1)
    ctx->r14 = MEM_BU(ctx->r3, 0X0);
    // 0x80039D40: andi        $t9, $v0, 0xFF
    ctx->r25 = ctx->r2 & 0XFF;
    // 0x80039D44: slti        $at, $t9, 0x5
    ctx->r1 = SIGNED(ctx->r25) < 0X5 ? 1 : 0;
    // 0x80039D48: or          $v0, $t9, $zero
    ctx->r2 = ctx->r25 | 0;
    // 0x80039D4C: mflo        $t7
    ctx->r15 = lo;
    // 0x80039D50: addu        $t8, $a3, $t7
    ctx->r24 = ADD32(ctx->r7, ctx->r15);
    // 0x80039D54: bne         $at, $zero, L_80039CF8
    if (ctx->r1 != 0) {
        // 0x80039D58: sh          $t6, 0x0($t8)
        MEM_H(0X0, ctx->r24) = ctx->r14;
            goto L_80039CF8;
    }
    // 0x80039D58: sh          $t6, 0x0($t8)
    MEM_H(0X0, ctx->r24) = ctx->r14;
    // 0x80039D5C: jr          $ra
    // 0x80039D60: nop

    return;
    // 0x80039D60: nop

;}
RECOMP_FUNC void func_80039D64(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80039D64: lui         $v1, 0x8012
    ctx->r3 = S32(0X8012 << 16);
    // 0x80039D68: addiu       $v1, $v1, -0x32B0
    ctx->r3 = ADD32(ctx->r3, -0X32B0);
    // 0x80039D6C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x80039D70: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
L_80039D74:
    // 0x80039D74: addu        $t6, $v1, $v0
    ctx->r14 = ADD32(ctx->r3, ctx->r2);
    // 0x80039D78: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80039D7C: andi        $t7, $v0, 0xFF
    ctx->r15 = ctx->r2 & 0XFF;
    // 0x80039D80: slti        $at, $t7, 0x5
    ctx->r1 = SIGNED(ctx->r15) < 0X5 ? 1 : 0;
    // 0x80039D84: or          $v0, $t7, $zero
    ctx->r2 = ctx->r15 | 0;
    // 0x80039D88: bne         $at, $zero, L_80039D74
    if (ctx->r1 != 0) {
        // 0x80039D8C: sb          $a0, 0x4E($t6)
        MEM_B(0X4E, ctx->r14) = ctx->r4;
            goto L_80039D74;
    }
    // 0x80039D8C: sb          $a0, 0x4E($t6)
    MEM_B(0X4E, ctx->r14) = ctx->r4;
    // 0x80039D90: jr          $ra
    // 0x80039D94: nop

    return;
    // 0x80039D94: nop

;}
RECOMP_FUNC void func_80039D98(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80039D98: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x80039D9C: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x80039DA0: jr          $ra
    // 0x80039DA4: sb          $t6, -0x3299($at)
    MEM_B(-0X3299, ctx->r1) = ctx->r14;
    return;
    // 0x80039DA4: sb          $t6, -0x3299($at)
    MEM_B(-0X3299, ctx->r1) = ctx->r14;
;}
RECOMP_FUNC void func_80039DA8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80039DA8: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x80039DAC: jr          $ra
    // 0x80039DB0: sb          $zero, -0x3299($at)
    MEM_B(-0X3299, ctx->r1) = 0;
    return;
    // 0x80039DB0: sb          $zero, -0x3299($at)
    MEM_B(-0X3299, ctx->r1) = 0;
;}
RECOMP_FUNC void func_80039DB4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80039DB4: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x80039DB8: addiu       $v0, $v0, -0x32B0
    ctx->r2 = ADD32(ctx->r2, -0X32B0);
    // 0x80039DBC: lbu         $t6, 0x17($v0)
    ctx->r14 = MEM_BU(ctx->r2, 0X17);
    // 0x80039DC0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80039DC4: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80039DC8: bne         $t6, $at, L_80039DE0
    if (ctx->r14 != ctx->r1) {
        // 0x80039DCC: sw          $ra, 0x14($sp)
        MEM_W(0X14, ctx->r29) = ctx->r31;
            goto L_80039DE0;
    }
    // 0x80039DCC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80039DD0: lui         $a0, 0x8009
    ctx->r4 = S32(0X8009 << 16);
    // 0x80039DD4: sb          $zero, 0x17($v0)
    MEM_B(0X17, ctx->r2) = 0;
    // 0x80039DD8: jal         0x80025A10
    // 0x80039DDC: addiu       $a0, $a0, 0x3BB8
    ctx->r4 = ADD32(ctx->r4, 0X3BB8);
    func_80025A10(rdram, ctx);
        goto after_0;
    // 0x80039DDC: addiu       $a0, $a0, 0x3BB8
    ctx->r4 = ADD32(ctx->r4, 0X3BB8);
    after_0:
L_80039DE0:
    // 0x80039DE0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80039DE4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80039DE8: jr          $ra
    // 0x80039DEC: nop

    return;
    // 0x80039DEC: nop

;}
RECOMP_FUNC void func_80039DF0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80039DF0: lui         $v0, 0x8010
    ctx->r2 = S32(0X8010 << 16);
    // 0x80039DF4: addiu       $v0, $v0, -0x3770
    ctx->r2 = ADD32(ctx->r2, -0X3770);
    // 0x80039DF8: addiu       $at, $v0, 0x7FFF
    ctx->r1 = ADD32(ctx->r2, 0X7FFF);
    // 0x80039DFC: sb          $zero, 0x6C15($at)
    MEM_B(0X6C15, ctx->r1) = 0;
    // 0x80039E00: addiu       $t6, $v0, 0x7FFF
    ctx->r14 = ADD32(ctx->r2, 0X7FFF);
    // 0x80039E04: lbu         $t7, 0x6C22($t6)
    ctx->r15 = MEM_BU(ctx->r14, 0X6C22);
    // 0x80039E08: addiu       $t9, $v0, 0x7FFF
    ctx->r25 = ADD32(ctx->r2, 0X7FFF);
    // 0x80039E0C: ori         $t8, $t7, 0x20
    ctx->r24 = ctx->r15 | 0X20;
    // 0x80039E10: sb          $t8, 0x6C22($at)
    MEM_B(0X6C22, ctx->r1) = ctx->r24;
    // 0x80039E14: lbu         $t9, 0x6C21($t9)
    ctx->r25 = MEM_BU(ctx->r25, 0X6C21);
    // 0x80039E18: addiu       $t2, $v0, 0x7FFF
    ctx->r10 = ADD32(ctx->r2, 0X7FFF);
    // 0x80039E1C: andi        $t0, $t9, 0xFF01
    ctx->r8 = ctx->r25 & 0XFF01;
    // 0x80039E20: ori         $t1, $t0, 0x4
    ctx->r9 = ctx->r8 | 0X4;
    // 0x80039E24: sb          $t1, 0x6C21($at)
    MEM_B(0X6C21, ctx->r1) = ctx->r9;
    // 0x80039E28: lbu         $t3, 0x6C22($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X6C22);
    // 0x80039E2C: lui         $v1, 0x8011
    ctx->r3 = S32(0X8011 << 16);
    // 0x80039E30: ori         $t4, $t3, 0x80
    ctx->r12 = ctx->r11 | 0X80;
    // 0x80039E34: addiu       $v1, $v1, -0x3770
    ctx->r3 = ADD32(ctx->r3, -0X3770);
    // 0x80039E38: sb          $t4, 0x6C22($at)
    MEM_B(0X6C22, ctx->r1) = ctx->r12;
    // 0x80039E3C: sh          $zero, 0x6C1D($at)
    MEM_H(0X6C1D, ctx->r1) = 0;
    // 0x80039E40: lbu         $t5, 0x6F0($v1)
    ctx->r13 = MEM_BU(ctx->r3, 0X6F0);
    // 0x80039E44: sh          $zero, 0x6EE($v1)
    MEM_H(0X6EE, ctx->r3) = 0;
    // 0x80039E48: andi        $t6, $t5, 0xFF01
    ctx->r14 = ctx->r13 & 0XFF01;
    // 0x80039E4C: ori         $t7, $t6, 0x4
    ctx->r15 = ctx->r14 | 0X4;
    // 0x80039E50: jr          $ra
    // 0x80039E54: sb          $t7, 0x6F0($v1)
    MEM_B(0X6F0, ctx->r3) = ctx->r15;
    return;
    // 0x80039E54: sb          $t7, 0x6F0($v1)
    MEM_B(0X6F0, ctx->r3) = ctx->r15;
;}
RECOMP_FUNC void func_80039E58(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80039E58: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x80039E5C: addiu       $v0, $v0, -0x32B0
    ctx->r2 = ADD32(ctx->r2, -0X32B0);
    // 0x80039E60: lb          $v1, 0x68($v0)
    ctx->r3 = MEM_B(ctx->r2, 0X68);
    // 0x80039E64: nop

    // 0x80039E68: slti        $t6, $v1, 0x1
    ctx->r14 = SIGNED(ctx->r3) < 0X1 ? 1 : 0;
    // 0x80039E6C: beq         $t6, $zero, L_80039E84
    if (ctx->r14 == 0) {
        // 0x80039E70: or          $v1, $t6, $zero
        ctx->r3 = ctx->r14 | 0;
            goto L_80039E84;
    }
    // 0x80039E70: or          $v1, $t6, $zero
    ctx->r3 = ctx->r14 | 0;
    // 0x80039E74: lb          $v1, 0x69($v0)
    ctx->r3 = MEM_B(ctx->r2, 0X69);
    // 0x80039E78: nop

    // 0x80039E7C: slti        $t7, $v1, 0x1
    ctx->r15 = SIGNED(ctx->r3) < 0X1 ? 1 : 0;
    // 0x80039E80: or          $v1, $t7, $zero
    ctx->r3 = ctx->r15 | 0;
L_80039E84:
    // 0x80039E84: sll         $v0, $v1, 16
    ctx->r2 = S32(ctx->r3 << 16);
    // 0x80039E88: sra         $t8, $v0, 16
    ctx->r24 = S32(SIGNED(ctx->r2) >> 16);
    // 0x80039E8C: jr          $ra
    // 0x80039E90: or          $v0, $t8, $zero
    ctx->r2 = ctx->r24 | 0;
    return;
    // 0x80039E90: or          $v0, $t8, $zero
    ctx->r2 = ctx->r24 | 0;
;}
RECOMP_FUNC void func_80039E94(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80039E94: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80039E98: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x80039E9C: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x80039EA0: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x80039EA4: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x80039EA8: sw          $a2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r6;
    // 0x80039EAC: or          $t8, $a2, $zero
    ctx->r24 = ctx->r6 | 0;
    // 0x80039EB0: sb          $zero, 0x4($a0)
    MEM_B(0X4, ctx->r4) = 0;
    // 0x80039EB4: or          $t1, $a0, $zero
    ctx->r9 = ctx->r4 | 0;
    // 0x80039EB8: addiu       $s0, $t8, 0x2
    ctx->r16 = ADD32(ctx->r24, 0X2);
    // 0x80039EBC: sll         $t9, $s0, 16
    ctx->r25 = S32(ctx->r16 << 16);
    // 0x80039EC0: lh          $a2, 0x18($t1)
    ctx->r6 = MEM_H(ctx->r9, 0X18);
    // 0x80039EC4: lh          $a3, 0x1C($t1)
    ctx->r7 = MEM_H(ctx->r9, 0X1C);
    // 0x80039EC8: sll         $t6, $a1, 16
    ctx->r14 = S32(ctx->r5 << 16);
    // 0x80039ECC: sra         $s0, $t9, 16
    ctx->r16 = S32(SIGNED(ctx->r25) >> 16);
    // 0x80039ED0: addiu       $t2, $zero, 0x18
    ctx->r10 = ADD32(0, 0X18);
    // 0x80039ED4: addiu       $t3, $zero, 0x10
    ctx->r11 = ADD32(0, 0X10);
    // 0x80039ED8: sra         $a1, $t6, 16
    ctx->r5 = S32(SIGNED(ctx->r14) >> 16);
    // 0x80039EDC: sw          $t3, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r11;
    // 0x80039EE0: sw          $t2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r10;
    // 0x80039EE4: jal         0x8000E0A8
    // 0x80039EE8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8000E0A8(rdram, ctx);
        goto after_0;
    // 0x80039EE8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_0:
    // 0x80039EEC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80039EF0: jal         0x8000E1F4
    // 0x80039EF4: lui         $a1, 0x3F80
    ctx->r5 = S32(0X3F80 << 16);
    func_8000E1F4(rdram, ctx);
        goto after_1;
    // 0x80039EF4: lui         $a1, 0x3F80
    ctx->r5 = S32(0X3F80 << 16);
    after_1:
    // 0x80039EF8: lw          $t4, 0x28($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X28);
    // 0x80039EFC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80039F00: lbu         $a1, 0x11($t4)
    ctx->r5 = MEM_BU(ctx->r12, 0X11);
    // 0x80039F04: jal         0x8000E228
    // 0x80039F08: nop

    func_8000E228(rdram, ctx);
        goto after_2;
    // 0x80039F08: nop

    after_2:
    // 0x80039F0C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x80039F10: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x80039F14: jr          $ra
    // 0x80039F18: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x80039F18: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_80039F1C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80039F1C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80039F20: sw          $a3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r7;
    // 0x80039F24: lh          $t6, 0x2E($sp)
    ctx->r14 = MEM_H(ctx->r29, 0X2E);
    // 0x80039F28: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x80039F2C: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x80039F30: sw          $a2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r6;
    // 0x80039F34: addiu       $t7, $t6, 0x2
    ctx->r15 = ADD32(ctx->r14, 0X2);
    // 0x80039F38: sll         $a0, $t7, 16
    ctx->r4 = S32(ctx->r15 << 16);
    // 0x80039F3C: lh          $a3, 0x2A($sp)
    ctx->r7 = MEM_H(ctx->r29, 0X2A);
    // 0x80039F40: lh          $a2, 0x26($sp)
    ctx->r6 = MEM_H(ctx->r29, 0X26);
    // 0x80039F44: lh          $a1, 0x22($sp)
    ctx->r5 = MEM_H(ctx->r29, 0X22);
    // 0x80039F48: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80039F4C: sra         $t8, $a0, 16
    ctx->r24 = S32(SIGNED(ctx->r4) >> 16);
    // 0x80039F50: addiu       $t9, $zero, 0x18
    ctx->r25 = ADD32(0, 0X18);
    // 0x80039F54: addiu       $t0, $zero, 0x10
    ctx->r8 = ADD32(0, 0X10);
    // 0x80039F58: sh          $t7, 0x2E($sp)
    MEM_H(0X2E, ctx->r29) = ctx->r15;
    // 0x80039F5C: sw          $t0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r8;
    // 0x80039F60: sw          $t9, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r25;
    // 0x80039F64: jal         0x8000E0A8
    // 0x80039F68: or          $a0, $t8, $zero
    ctx->r4 = ctx->r24 | 0;
    func_8000E0A8(rdram, ctx);
        goto after_0;
    // 0x80039F68: or          $a0, $t8, $zero
    ctx->r4 = ctx->r24 | 0;
    after_0:
    // 0x80039F6C: lh          $a0, 0x2E($sp)
    ctx->r4 = MEM_H(ctx->r29, 0X2E);
    // 0x80039F70: jal         0x8003A060
    // 0x80039F74: nop

    func_8003A060(rdram, ctx);
        goto after_1;
    // 0x80039F74: nop

    after_1:
    // 0x80039F78: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80039F7C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80039F80: jr          $ra
    // 0x80039F84: nop

    return;
    // 0x80039F84: nop

;}
RECOMP_FUNC void func_80039F88(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80039F88: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80039F8C: sw          $a3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r7;
    // 0x80039F90: lh          $t6, 0x2E($sp)
    ctx->r14 = MEM_H(ctx->r29, 0X2E);
    // 0x80039F94: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x80039F98: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x80039F9C: sw          $a2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r6;
    // 0x80039FA0: addiu       $t7, $t6, 0x2
    ctx->r15 = ADD32(ctx->r14, 0X2);
    // 0x80039FA4: sll         $a0, $t7, 16
    ctx->r4 = S32(ctx->r15 << 16);
    // 0x80039FA8: lh          $a3, 0x2A($sp)
    ctx->r7 = MEM_H(ctx->r29, 0X2A);
    // 0x80039FAC: lh          $a2, 0x26($sp)
    ctx->r6 = MEM_H(ctx->r29, 0X26);
    // 0x80039FB0: lh          $a1, 0x22($sp)
    ctx->r5 = MEM_H(ctx->r29, 0X22);
    // 0x80039FB4: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80039FB8: sra         $t8, $a0, 16
    ctx->r24 = S32(SIGNED(ctx->r4) >> 16);
    // 0x80039FBC: addiu       $t9, $zero, 0x1E
    ctx->r25 = ADD32(0, 0X1E);
    // 0x80039FC0: addiu       $t0, $zero, 0x16
    ctx->r8 = ADD32(0, 0X16);
    // 0x80039FC4: sh          $t7, 0x2E($sp)
    MEM_H(0X2E, ctx->r29) = ctx->r15;
    // 0x80039FC8: sw          $t0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r8;
    // 0x80039FCC: sw          $t9, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r25;
    // 0x80039FD0: jal         0x8000E0A8
    // 0x80039FD4: or          $a0, $t8, $zero
    ctx->r4 = ctx->r24 | 0;
    func_8000E0A8(rdram, ctx);
        goto after_0;
    // 0x80039FD4: or          $a0, $t8, $zero
    ctx->r4 = ctx->r24 | 0;
    after_0:
    // 0x80039FD8: lh          $a0, 0x2E($sp)
    ctx->r4 = MEM_H(ctx->r29, 0X2E);
    // 0x80039FDC: jal         0x8003A060
    // 0x80039FE0: nop

    func_8003A060(rdram, ctx);
        goto after_1;
    // 0x80039FE0: nop

    after_1:
    // 0x80039FE4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80039FE8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80039FEC: jr          $ra
    // 0x80039FF0: nop

    return;
    // 0x80039FF0: nop

;}
RECOMP_FUNC void func_80039FF4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80039FF4: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80039FF8: sw          $a3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r7;
    // 0x80039FFC: lh          $t6, 0x2E($sp)
    ctx->r14 = MEM_H(ctx->r29, 0X2E);
    // 0x8003A000: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x8003A004: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x8003A008: sw          $a2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r6;
    // 0x8003A00C: addiu       $t7, $t6, 0x2
    ctx->r15 = ADD32(ctx->r14, 0X2);
    // 0x8003A010: sll         $a0, $t7, 16
    ctx->r4 = S32(ctx->r15 << 16);
    // 0x8003A014: lh          $a3, 0x2A($sp)
    ctx->r7 = MEM_H(ctx->r29, 0X2A);
    // 0x8003A018: lh          $a2, 0x26($sp)
    ctx->r6 = MEM_H(ctx->r29, 0X26);
    // 0x8003A01C: lh          $a1, 0x22($sp)
    ctx->r5 = MEM_H(ctx->r29, 0X22);
    // 0x8003A020: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8003A024: sra         $t8, $a0, 16
    ctx->r24 = S32(SIGNED(ctx->r4) >> 16);
    // 0x8003A028: addiu       $t9, $zero, 0x23
    ctx->r25 = ADD32(0, 0X23);
    // 0x8003A02C: addiu       $t0, $zero, 0x18
    ctx->r8 = ADD32(0, 0X18);
    // 0x8003A030: sh          $t7, 0x2E($sp)
    MEM_H(0X2E, ctx->r29) = ctx->r15;
    // 0x8003A034: sw          $t0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r8;
    // 0x8003A038: sw          $t9, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r25;
    // 0x8003A03C: jal         0x8000E0A8
    // 0x8003A040: or          $a0, $t8, $zero
    ctx->r4 = ctx->r24 | 0;
    func_8000E0A8(rdram, ctx);
        goto after_0;
    // 0x8003A040: or          $a0, $t8, $zero
    ctx->r4 = ctx->r24 | 0;
    after_0:
    // 0x8003A044: lh          $a0, 0x2E($sp)
    ctx->r4 = MEM_H(ctx->r29, 0X2E);
    // 0x8003A048: jal         0x8003A060
    // 0x8003A04C: nop

    func_8003A060(rdram, ctx);
        goto after_1;
    // 0x8003A04C: nop

    after_1:
    // 0x8003A050: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8003A054: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x8003A058: jr          $ra
    // 0x8003A05C: nop

    return;
    // 0x8003A05C: nop

;}
RECOMP_FUNC void func_8003A060(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8003A060: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8003A064: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8003A068: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8003A06C: lh          $a0, 0x1A($sp)
    ctx->r4 = MEM_H(ctx->r29, 0X1A);
    // 0x8003A070: jal         0x8000E1F4
    // 0x8003A074: lui         $a1, 0x3F80
    ctx->r5 = S32(0X3F80 << 16);
    func_8000E1F4(rdram, ctx);
        goto after_0;
    // 0x8003A074: lui         $a1, 0x3F80
    ctx->r5 = S32(0X3F80 << 16);
    after_0:
    // 0x8003A078: lh          $a0, 0x1A($sp)
    ctx->r4 = MEM_H(ctx->r29, 0X1A);
    // 0x8003A07C: jal         0x8000E228
    // 0x8003A080: addiu       $a1, $zero, 0xFF
    ctx->r5 = ADD32(0, 0XFF);
    func_8000E228(rdram, ctx);
        goto after_1;
    // 0x8003A080: addiu       $a1, $zero, 0xFF
    ctx->r5 = ADD32(0, 0XFF);
    after_1:
    // 0x8003A084: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8003A088: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8003A08C: jr          $ra
    // 0x8003A090: nop

    return;
    // 0x8003A090: nop

;}
RECOMP_FUNC void func_8003A094(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8003A094: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8003A098: sll         $a1, $a0, 16
    ctx->r5 = S32(ctx->r4 << 16);
    // 0x8003A09C: sra         $t6, $a1, 16
    ctx->r14 = S32(SIGNED(ctx->r5) >> 16);
    // 0x8003A0A0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8003A0A4: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8003A0A8: jal         0x8000E25C
    // 0x8003A0AC: addiu       $a0, $t6, 0x2
    ctx->r4 = ADD32(ctx->r14, 0X2);
    func_8000E25C(rdram, ctx);
        goto after_0;
    // 0x8003A0AC: addiu       $a0, $t6, 0x2
    ctx->r4 = ADD32(ctx->r14, 0X2);
    after_0:
    // 0x8003A0B0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8003A0B4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8003A0B8: jr          $ra
    // 0x8003A0BC: nop

    return;
    // 0x8003A0BC: nop

;}
RECOMP_FUNC void func_8003A0C0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8003A0C0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8003A0C4: lui         $a0, 0x17
    ctx->r4 = S32(0X17 << 16);
    // 0x8003A0C8: lui         $t7, 0x18
    ctx->r15 = S32(0X18 << 16);
    // 0x8003A0CC: addiu       $a0, $a0, 0x7C00
    ctx->r4 = ADD32(ctx->r4, 0X7C00);
    // 0x8003A0D0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8003A0D4: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x8003A0D8: lui         $at, 0x8011
    ctx->r1 = S32(0X8011 << 16);
    // 0x8003A0DC: addiu       $t7, $t7, -0x2650
    ctx->r15 = ADD32(ctx->r15, -0X2650);
    // 0x8003A0E0: lui         $a1, 0x8027
    ctx->r5 = S32(0X8027 << 16);
    // 0x8003A0E4: sb          $t6, -0x2F8C($at)
    MEM_B(-0X2F8C, ctx->r1) = ctx->r14;
    // 0x8003A0E8: addiu       $a1, $a1, -0xB80
    ctx->r5 = ADD32(ctx->r5, -0XB80);
    // 0x8003A0EC: jal         0x8001B1B4
    // 0x8003A0F0: subu        $a2, $t7, $a0
    ctx->r6 = SUB32(ctx->r15, ctx->r4);
    func_8001B1B4(rdram, ctx);
        goto after_0;
    // 0x8003A0F0: subu        $a2, $t7, $a0
    ctx->r6 = SUB32(ctx->r15, ctx->r4);
    after_0:
    // 0x8003A0F4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8003A0F8: lui         $at, 0x8011
    ctx->r1 = S32(0X8011 << 16);
    // 0x8003A0FC: sb          $zero, -0x2F8C($at)
    MEM_B(-0X2F8C, ctx->r1) = 0;
    // 0x8003A100: jr          $ra
    // 0x8003A104: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x8003A104: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8003A108(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8003A108: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8003A10C: lui         $a0, 0x18
    ctx->r4 = S32(0X18 << 16);
    // 0x8003A110: lui         $t7, 0x19
    ctx->r15 = S32(0X19 << 16);
    // 0x8003A114: addiu       $a0, $a0, -0x2650
    ctx->r4 = ADD32(ctx->r4, -0X2650);
    // 0x8003A118: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8003A11C: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x8003A120: lui         $at, 0x8011
    ctx->r1 = S32(0X8011 << 16);
    // 0x8003A124: addiu       $t7, $t7, 0xD00
    ctx->r15 = ADD32(ctx->r15, 0XD00);
    // 0x8003A128: lui         $a1, 0x8027
    ctx->r5 = S32(0X8027 << 16);
    // 0x8003A12C: sb          $t6, -0x2F8C($at)
    MEM_B(-0X2F8C, ctx->r1) = ctx->r14;
    // 0x8003A130: addiu       $a1, $a1, 0x5230
    ctx->r5 = ADD32(ctx->r5, 0X5230);
    // 0x8003A134: jal         0x8001B1B4
    // 0x8003A138: subu        $a2, $t7, $a0
    ctx->r6 = SUB32(ctx->r15, ctx->r4);
    func_8001B1B4(rdram, ctx);
        goto after_0;
    // 0x8003A138: subu        $a2, $t7, $a0
    ctx->r6 = SUB32(ctx->r15, ctx->r4);
    after_0:
    // 0x8003A13C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8003A140: lui         $at, 0x8011
    ctx->r1 = S32(0X8011 << 16);
    // 0x8003A144: sb          $zero, -0x2F8C($at)
    MEM_B(-0X2F8C, ctx->r1) = 0;
    // 0x8003A148: jr          $ra
    // 0x8003A14C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x8003A14C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8003A150(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8003A150: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8003A154: lui         $a0, 0x1A
    ctx->r4 = S32(0X1A << 16);
    // 0x8003A158: lui         $t7, 0x1A
    ctx->r15 = S32(0X1A << 16);
    // 0x8003A15C: addiu       $a0, $a0, -0x7500
    ctx->r4 = ADD32(ctx->r4, -0X7500);
    // 0x8003A160: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8003A164: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x8003A168: lui         $at, 0x8011
    ctx->r1 = S32(0X8011 << 16);
    // 0x8003A16C: addiu       $t7, $t7, 0x4EE0
    ctx->r15 = ADD32(ctx->r15, 0X4EE0);
    // 0x8003A170: lui         $a1, 0x803F
    ctx->r5 = S32(0X803F << 16);
    // 0x8003A174: sb          $t6, -0x2F8C($at)
    MEM_B(-0X2F8C, ctx->r1) = ctx->r14;
    // 0x8003A178: addiu       $a1, $a1, 0x0
    ctx->r5 = ADD32(ctx->r5, 0X0);
    // 0x8003A17C: jal         0x8001B1B4
    // 0x8003A180: subu        $a2, $t7, $a0
    ctx->r6 = SUB32(ctx->r15, ctx->r4);
    func_8001B1B4(rdram, ctx);
        goto after_0;
    // 0x8003A180: subu        $a2, $t7, $a0
    ctx->r6 = SUB32(ctx->r15, ctx->r4);
    after_0:
    // 0x8003A184: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8003A188: lui         $at, 0x8011
    ctx->r1 = S32(0X8011 << 16);
    // 0x8003A18C: sb          $zero, -0x2F8C($at)
    MEM_B(-0X2F8C, ctx->r1) = 0;
    // 0x8003A190: jr          $ra
    // 0x8003A194: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x8003A194: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8003A198(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8003A198: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8003A19C: lui         $a0, 0x12
    ctx->r4 = S32(0X12 << 16);
    // 0x8003A1A0: lui         $t7, 0x13
    ctx->r15 = S32(0X13 << 16);
    // 0x8003A1A4: addiu       $a0, $a0, 0x6F20
    ctx->r4 = ADD32(ctx->r4, 0X6F20);
    // 0x8003A1A8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8003A1AC: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x8003A1B0: lui         $at, 0x8011
    ctx->r1 = S32(0X8011 << 16);
    // 0x8003A1B4: addiu       $t7, $t7, 0x2960
    ctx->r15 = ADD32(ctx->r15, 0X2960);
    // 0x8003A1B8: lui         $a1, 0x803C
    ctx->r5 = S32(0X803C << 16);
    // 0x8003A1BC: sb          $t6, -0x2F8C($at)
    MEM_B(-0X2F8C, ctx->r1) = ctx->r14;
    // 0x8003A1C0: addiu       $a1, $a1, 0x6710
    ctx->r5 = ADD32(ctx->r5, 0X6710);
    // 0x8003A1C4: jal         0x8001B1B4
    // 0x8003A1C8: subu        $a2, $t7, $a0
    ctx->r6 = SUB32(ctx->r15, ctx->r4);
    func_8001B1B4(rdram, ctx);
        goto after_0;
    // 0x8003A1C8: subu        $a2, $t7, $a0
    ctx->r6 = SUB32(ctx->r15, ctx->r4);
    after_0:
    // 0x8003A1CC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8003A1D0: lui         $at, 0x8011
    ctx->r1 = S32(0X8011 << 16);
    // 0x8003A1D4: sb          $zero, -0x2F8C($at)
    MEM_B(-0X2F8C, ctx->r1) = 0;
    // 0x8003A1D8: jr          $ra
    // 0x8003A1DC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x8003A1DC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8003A1E0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8003A1E0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8003A1E4: lui         $a0, 0x13
    ctx->r4 = S32(0X13 << 16);
    // 0x8003A1E8: lui         $t7, 0x14
    ctx->r15 = S32(0X14 << 16);
    // 0x8003A1EC: addiu       $a0, $a0, 0x2960
    ctx->r4 = ADD32(ctx->r4, 0X2960);
    // 0x8003A1F0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8003A1F4: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x8003A1F8: lui         $at, 0x8011
    ctx->r1 = S32(0X8011 << 16);
    // 0x8003A1FC: addiu       $t7, $t7, -0x2DA0
    ctx->r15 = ADD32(ctx->r15, -0X2DA0);
    // 0x8003A200: lui         $a1, 0x803D
    ctx->r5 = S32(0X803D << 16);
    // 0x8003A204: sb          $t6, -0x2F8C($at)
    MEM_B(-0X2F8C, ctx->r1) = ctx->r14;
    // 0x8003A208: addiu       $a1, $a1, 0x2150
    ctx->r5 = ADD32(ctx->r5, 0X2150);
    // 0x8003A20C: jal         0x8001B1B4
    // 0x8003A210: subu        $a2, $t7, $a0
    ctx->r6 = SUB32(ctx->r15, ctx->r4);
    func_8001B1B4(rdram, ctx);
        goto after_0;
    // 0x8003A210: subu        $a2, $t7, $a0
    ctx->r6 = SUB32(ctx->r15, ctx->r4);
    after_0:
    // 0x8003A214: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8003A218: lui         $at, 0x8011
    ctx->r1 = S32(0X8011 << 16);
    // 0x8003A21C: sb          $zero, -0x2F8C($at)
    MEM_B(-0X2F8C, ctx->r1) = 0;
    // 0x8003A220: jr          $ra
    // 0x8003A224: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x8003A224: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8003A228(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8003A228: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8003A22C: lui         $a0, 0x14
    ctx->r4 = S32(0X14 << 16);
    // 0x8003A230: lui         $t7, 0x14
    ctx->r15 = S32(0X14 << 16);
    // 0x8003A234: addiu       $a0, $a0, -0x2DA0
    ctx->r4 = ADD32(ctx->r4, -0X2DA0);
    // 0x8003A238: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8003A23C: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x8003A240: lui         $at, 0x8011
    ctx->r1 = S32(0X8011 << 16);
    // 0x8003A244: addiu       $t7, $t7, 0x6C90
    ctx->r15 = ADD32(ctx->r15, 0X6C90);
    // 0x8003A248: lui         $a1, 0x803E
    ctx->r5 = S32(0X803E << 16);
    // 0x8003A24C: sb          $t6, -0x2F8C($at)
    MEM_B(-0X2F8C, ctx->r1) = ctx->r14;
    // 0x8003A250: addiu       $a1, $a1, -0x35B0
    ctx->r5 = ADD32(ctx->r5, -0X35B0);
    // 0x8003A254: jal         0x8001B1B4
    // 0x8003A258: subu        $a2, $t7, $a0
    ctx->r6 = SUB32(ctx->r15, ctx->r4);
    func_8001B1B4(rdram, ctx);
        goto after_0;
    // 0x8003A258: subu        $a2, $t7, $a0
    ctx->r6 = SUB32(ctx->r15, ctx->r4);
    after_0:
    // 0x8003A25C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8003A260: lui         $at, 0x8011
    ctx->r1 = S32(0X8011 << 16);
    // 0x8003A264: sb          $zero, -0x2F8C($at)
    MEM_B(-0X2F8C, ctx->r1) = 0;
    // 0x8003A268: jr          $ra
    // 0x8003A26C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x8003A26C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8003A270(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8003A270: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8003A274: lui         $a0, 0x12
    ctx->r4 = S32(0X12 << 16);
    // 0x8003A278: lui         $t7, 0x12
    ctx->r15 = S32(0X12 << 16);
    // 0x8003A27C: addiu       $a0, $a0, -0x45F0
    ctx->r4 = ADD32(ctx->r4, -0X45F0);
    // 0x8003A280: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8003A284: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x8003A288: lui         $at, 0x8011
    ctx->r1 = S32(0X8011 << 16);
    // 0x8003A28C: addiu       $t7, $t7, 0x6F20
    ctx->r15 = ADD32(ctx->r15, 0X6F20);
    // 0x8003A290: lui         $a1, 0x803C
    ctx->r5 = S32(0X803C << 16);
    // 0x8003A294: sb          $t6, -0x2F8C($at)
    MEM_B(-0X2F8C, ctx->r1) = ctx->r14;
    // 0x8003A298: addiu       $a1, $a1, -0x4E00
    ctx->r5 = ADD32(ctx->r5, -0X4E00);
    // 0x8003A29C: jal         0x8001B1B4
    // 0x8003A2A0: subu        $a2, $t7, $a0
    ctx->r6 = SUB32(ctx->r15, ctx->r4);
    func_8001B1B4(rdram, ctx);
        goto after_0;
    // 0x8003A2A0: subu        $a2, $t7, $a0
    ctx->r6 = SUB32(ctx->r15, ctx->r4);
    after_0:
    // 0x8003A2A4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8003A2A8: lui         $at, 0x8011
    ctx->r1 = S32(0X8011 << 16);
    // 0x8003A2AC: sb          $zero, -0x2F8C($at)
    MEM_B(-0X2F8C, ctx->r1) = 0;
    // 0x8003A2B0: jr          $ra
    // 0x8003A2B4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x8003A2B4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8003A2B8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8003A2B8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8003A2BC: lui         $a0, 0x14
    ctx->r4 = S32(0X14 << 16);
    // 0x8003A2C0: lui         $t7, 0x15
    ctx->r15 = S32(0X15 << 16);
    // 0x8003A2C4: addiu       $a0, $a0, 0x6C90
    ctx->r4 = ADD32(ctx->r4, 0X6C90);
    // 0x8003A2C8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8003A2CC: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x8003A2D0: lui         $at, 0x8011
    ctx->r1 = S32(0X8011 << 16);
    // 0x8003A2D4: addiu       $t7, $t7, -0x2970
    ctx->r15 = ADD32(ctx->r15, -0X2970);
    // 0x8003A2D8: lui         $a1, 0x803E
    ctx->r5 = S32(0X803E << 16);
    // 0x8003A2DC: sb          $t6, -0x2F8C($at)
    MEM_B(-0X2F8C, ctx->r1) = ctx->r14;
    // 0x8003A2E0: addiu       $a1, $a1, 0x6480
    ctx->r5 = ADD32(ctx->r5, 0X6480);
    // 0x8003A2E4: jal         0x8001B1B4
    // 0x8003A2E8: subu        $a2, $t7, $a0
    ctx->r6 = SUB32(ctx->r15, ctx->r4);
    func_8001B1B4(rdram, ctx);
        goto after_0;
    // 0x8003A2E8: subu        $a2, $t7, $a0
    ctx->r6 = SUB32(ctx->r15, ctx->r4);
    after_0:
    // 0x8003A2EC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8003A2F0: lui         $at, 0x8011
    ctx->r1 = S32(0X8011 << 16);
    // 0x8003A2F4: sb          $zero, -0x2F8C($at)
    MEM_B(-0X2F8C, ctx->r1) = 0;
    // 0x8003A2F8: jr          $ra
    // 0x8003A2FC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x8003A2FC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8003A300(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8003A300: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8003A304: lui         $a0, 0x15
    ctx->r4 = S32(0X15 << 16);
    // 0x8003A308: lui         $t7, 0x15
    ctx->r15 = S32(0X15 << 16);
    // 0x8003A30C: addiu       $a0, $a0, -0x2970
    ctx->r4 = ADD32(ctx->r4, -0X2970);
    // 0x8003A310: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8003A314: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x8003A318: lui         $at, 0x8011
    ctx->r1 = S32(0X8011 << 16);
    // 0x8003A31C: addiu       $t7, $t7, 0x1880
    ctx->r15 = ADD32(ctx->r15, 0X1880);
    // 0x8003A320: lui         $a1, 0x8039
    ctx->r5 = S32(0X8039 << 16);
    // 0x8003A324: sb          $t6, -0x2F8C($at)
    MEM_B(-0X2F8C, ctx->r1) = ctx->r14;
    // 0x8003A328: addiu       $a1, $a1, 0x6A00
    ctx->r5 = ADD32(ctx->r5, 0X6A00);
    // 0x8003A32C: jal         0x8001B1B4
    // 0x8003A330: subu        $a2, $t7, $a0
    ctx->r6 = SUB32(ctx->r15, ctx->r4);
    func_8001B1B4(rdram, ctx);
        goto after_0;
    // 0x8003A330: subu        $a2, $t7, $a0
    ctx->r6 = SUB32(ctx->r15, ctx->r4);
    after_0:
    // 0x8003A334: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8003A338: lui         $at, 0x8011
    ctx->r1 = S32(0X8011 << 16);
    // 0x8003A33C: sb          $zero, -0x2F8C($at)
    MEM_B(-0X2F8C, ctx->r1) = 0;
    // 0x8003A340: jr          $ra
    // 0x8003A344: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x8003A344: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8003A348(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8003A348: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8003A34C: lui         $a0, 0x15
    ctx->r4 = S32(0X15 << 16);
    // 0x8003A350: lui         $t7, 0x16
    ctx->r15 = S32(0X16 << 16);
    // 0x8003A354: addiu       $a0, $a0, 0x1880
    ctx->r4 = ADD32(ctx->r4, 0X1880);
    // 0x8003A358: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8003A35C: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x8003A360: lui         $at, 0x8011
    ctx->r1 = S32(0X8011 << 16);
    // 0x8003A364: addiu       $t7, $t7, -0x74D0
    ctx->r15 = ADD32(ctx->r15, -0X74D0);
    // 0x8003A368: lui         $a1, 0x803A
    ctx->r5 = S32(0X803A << 16);
    // 0x8003A36C: sb          $t6, -0x2F8C($at)
    MEM_B(-0X2F8C, ctx->r1) = ctx->r14;
    // 0x8003A370: addiu       $a1, $a1, -0x5410
    ctx->r5 = ADD32(ctx->r5, -0X5410);
    // 0x8003A374: jal         0x8001B1B4
    // 0x8003A378: subu        $a2, $t7, $a0
    ctx->r6 = SUB32(ctx->r15, ctx->r4);
    func_8001B1B4(rdram, ctx);
        goto after_0;
    // 0x8003A378: subu        $a2, $t7, $a0
    ctx->r6 = SUB32(ctx->r15, ctx->r4);
    after_0:
    // 0x8003A37C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8003A380: lui         $at, 0x8011
    ctx->r1 = S32(0X8011 << 16);
    // 0x8003A384: sb          $zero, -0x2F8C($at)
    MEM_B(-0X2F8C, ctx->r1) = 0;
    // 0x8003A388: jr          $ra
    // 0x8003A38C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x8003A38C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8003A390(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8003A390: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8003A394: lui         $a0, 0x16
    ctx->r4 = S32(0X16 << 16);
    // 0x8003A398: lui         $t7, 0x16
    ctx->r15 = S32(0X16 << 16);
    // 0x8003A39C: addiu       $a0, $a0, -0x74D0
    ctx->r4 = ADD32(ctx->r4, -0X74D0);
    // 0x8003A3A0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8003A3A4: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x8003A3A8: lui         $at, 0x8011
    ctx->r1 = S32(0X8011 << 16);
    // 0x8003A3AC: addiu       $t7, $t7, -0x1100
    ctx->r15 = ADD32(ctx->r15, -0X1100);
    // 0x8003A3B0: lui         $a1, 0x803A
    ctx->r5 = S32(0X803A << 16);
    // 0x8003A3B4: sb          $t6, -0x2F8C($at)
    MEM_B(-0X2F8C, ctx->r1) = ctx->r14;
    // 0x8003A3B8: addiu       $a1, $a1, 0x1EF0
    ctx->r5 = ADD32(ctx->r5, 0X1EF0);
    // 0x8003A3BC: jal         0x8001B1B4
    // 0x8003A3C0: subu        $a2, $t7, $a0
    ctx->r6 = SUB32(ctx->r15, ctx->r4);
    func_8001B1B4(rdram, ctx);
        goto after_0;
    // 0x8003A3C0: subu        $a2, $t7, $a0
    ctx->r6 = SUB32(ctx->r15, ctx->r4);
    after_0:
    // 0x8003A3C4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8003A3C8: lui         $at, 0x8011
    ctx->r1 = S32(0X8011 << 16);
    // 0x8003A3CC: sb          $zero, -0x2F8C($at)
    MEM_B(-0X2F8C, ctx->r1) = 0;
    // 0x8003A3D0: jr          $ra
    // 0x8003A3D4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x8003A3D4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
