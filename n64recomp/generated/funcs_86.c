#include "iss64_recomp.h"
#include "funcs.h"

RECOMP_FUNC void ovl_803F0000_menu_func_803F34D4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803F34D4: lw          $t7, 0xC8($a0)
    ctx->r15 = MEM_W(ctx->r4, 0XC8);
    // 0x803F34D8: addiu       $t6, $zero, 0xC
    ctx->r14 = ADD32(0, 0XC);
    // 0x803F34DC: sh          $t6, 0x938($t7)
    MEM_H(0X938, ctx->r15) = ctx->r14;
    // 0x803F34E0: lw          $t9, 0xC8($a0)
    ctx->r25 = MEM_W(ctx->r4, 0XC8);
    // 0x803F34E4: addiu       $t8, $zero, 0x5
    ctx->r24 = ADD32(0, 0X5);
    // 0x803F34E8: sh          $t8, 0x93A($t9)
    MEM_H(0X93A, ctx->r25) = ctx->r24;
    // 0x803F34EC: lw          $t0, 0xC8($a0)
    ctx->r8 = MEM_W(ctx->r4, 0XC8);
    // 0x803F34F0: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x803F34F4: nop

    // 0x803F34F8: swc1        $f4, 0x940($t0)
    MEM_W(0X940, ctx->r8) = ctx->f4.u32l;
    // 0x803F34FC: lw          $t1, 0xC8($a0)
    ctx->r9 = MEM_W(ctx->r4, 0XC8);
    // 0x803F3500: jr          $ra
    // 0x803F3504: sh          $zero, 0x948($t1)
    MEM_H(0X948, ctx->r9) = 0;
    return;
    // 0x803F3504: sh          $zero, 0x948($t1)
    MEM_H(0X948, ctx->r9) = 0;
;}
RECOMP_FUNC void ovl_803F0000_menu_func_803F3508(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803F3508: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x803F350C: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x803F3510: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x803F3514: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x803F3518: lw          $t6, 0xC8($a0)
    ctx->r14 = MEM_W(ctx->r4, 0XC8);
    // 0x803F351C: swc1        $f4, 0xB8($a0)
    MEM_W(0XB8, ctx->r4) = ctx->f4.u32l;
    // 0x803F3520: sh          $zero, 0x93A($t6)
    MEM_H(0X93A, ctx->r14) = 0;
    // 0x803F3524: lw          $t7, 0xC8($a0)
    ctx->r15 = MEM_W(ctx->r4, 0XC8);
    // 0x803F3528: lwc1        $f6, 0x5C($a0)
    ctx->f6.u32l = MEM_W(ctx->r4, 0X5C);
    // 0x803F352C: addiu       $t8, $zero, 0x19
    ctx->r24 = ADD32(0, 0X19);
    // 0x803F3530: swc1        $f6, 0x940($t7)
    MEM_W(0X940, ctx->r15) = ctx->f6.u32l;
    // 0x803F3534: lw          $t9, 0xC8($a0)
    ctx->r25 = MEM_W(ctx->r4, 0XC8);
    // 0x803F3538: or          $a2, $a0, $zero
    ctx->r6 = ctx->r4 | 0;
    // 0x803F353C: sh          $t8, 0x938($t9)
    MEM_H(0X938, ctx->r25) = ctx->r24;
    // 0x803F3540: sw          $a2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r6;
    // 0x803F3544: jal         0x80059898
    // 0x803F3548: addiu       $a0, $zero, 0x28
    ctx->r4 = ADD32(0, 0X28);
    func_80059898(rdram, ctx);
        goto after_0;
    // 0x803F3548: addiu       $a0, $zero, 0x28
    ctx->r4 = ADD32(0, 0X28);
    after_0:
    // 0x803F354C: lw          $a2, 0x18($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X18);
    // 0x803F3550: addiu       $t3, $zero, -0x1AD
    ctx->r11 = ADD32(0, -0X1AD);
    // 0x803F3554: lw          $v1, 0xC8($a2)
    ctx->r3 = MEM_W(ctx->r6, 0XC8);
    // 0x803F3558: subu        $t4, $t3, $v0
    ctx->r12 = SUB32(ctx->r11, ctx->r2);
    // 0x803F355C: lhu         $t0, 0x8($v1)
    ctx->r8 = MEM_HU(ctx->r3, 0X8);
    // 0x803F3560: addiu       $t2, $v0, 0x1AD
    ctx->r10 = ADD32(ctx->r2, 0X1AD);
    // 0x803F3564: andi        $t1, $t0, 0x1
    ctx->r9 = ctx->r8 & 0X1;
    // 0x803F3568: beq         $t1, $zero, L_803F3578
    if (ctx->r9 == 0) {
        // 0x803F356C: addiu       $a0, $zero, 0x32
        ctx->r4 = ADD32(0, 0X32);
            goto L_803F3578;
    }
    // 0x803F356C: addiu       $a0, $zero, 0x32
    ctx->r4 = ADD32(0, 0X32);
    // 0x803F3570: b           L_803F357C
    // 0x803F3574: sh          $t2, 0x93C($v1)
    MEM_H(0X93C, ctx->r3) = ctx->r10;
        goto L_803F357C;
    // 0x803F3574: sh          $t2, 0x93C($v1)
    MEM_H(0X93C, ctx->r3) = ctx->r10;
L_803F3578:
    // 0x803F3578: sh          $t4, 0x93C($v1)
    MEM_H(0X93C, ctx->r3) = ctx->r12;
L_803F357C:
    // 0x803F357C: jal         0x80059898
    // 0x803F3580: sw          $a2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r6;
    func_80059898(rdram, ctx);
        goto after_1;
    // 0x803F3580: sw          $a2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r6;
    after_1:
    // 0x803F3584: lw          $a2, 0x18($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X18);
    // 0x803F3588: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x803F358C: lwc1        $f10, 0x44($a2)
    ctx->f10.u32l = MEM_W(ctx->r6, 0X44);
    // 0x803F3590: addiu       $t7, $zero, -0x5C
    ctx->r15 = ADD32(0, -0X5C);
    // 0x803F3594: c.lt.s      $f8, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f8.fl < ctx->f10.fl;
    // 0x803F3598: addiu       $t5, $v0, 0x5C
    ctx->r13 = ADD32(ctx->r2, 0X5C);
    // 0x803F359C: bc1f        L_803F35B0
    if (!c1cs) {
        // 0x803F35A0: or          $a0, $a2, $zero
        ctx->r4 = ctx->r6 | 0;
            goto L_803F35B0;
    }
    // 0x803F35A0: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    // 0x803F35A4: lw          $t6, 0xC8($a2)
    ctx->r14 = MEM_W(ctx->r6, 0XC8);
    // 0x803F35A8: b           L_803F35BC
    // 0x803F35AC: sh          $t5, 0x93E($t6)
    MEM_H(0X93E, ctx->r14) = ctx->r13;
        goto L_803F35BC;
    // 0x803F35AC: sh          $t5, 0x93E($t6)
    MEM_H(0X93E, ctx->r14) = ctx->r13;
L_803F35B0:
    // 0x803F35B0: lw          $t9, 0xC8($a2)
    ctx->r25 = MEM_W(ctx->r6, 0XC8);
    // 0x803F35B4: subu        $t8, $t7, $v0
    ctx->r24 = SUB32(ctx->r15, ctx->r2);
    // 0x803F35B8: sh          $t8, 0x93E($t9)
    MEM_H(0X93E, ctx->r25) = ctx->r24;
L_803F35BC:
    // 0x803F35BC: lw          $a1, 0xC8($a2)
    ctx->r5 = MEM_W(ctx->r6, 0XC8);
    // 0x803F35C0: jal         0x803F17BC
    // 0x803F35C4: addiu       $a1, $a1, 0x938
    ctx->r5 = ADD32(ctx->r5, 0X938);
    ovl_803F0000_menu_func_803F17BC(rdram, ctx);
        goto after_2;
    // 0x803F35C4: addiu       $a1, $a1, 0x938
    ctx->r5 = ADD32(ctx->r5, 0X938);
    after_2:
    // 0x803F35C8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x803F35CC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x803F35D0: jr          $ra
    // 0x803F35D4: nop

    return;
    // 0x803F35D4: nop

;}
RECOMP_FUNC void ovl_803F0000_menu_func_803F35D8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803F35D8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x803F35DC: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x803F35E0: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x803F35E4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x803F35E8: lw          $t6, 0xC8($a0)
    ctx->r14 = MEM_W(ctx->r4, 0XC8);
    // 0x803F35EC: swc1        $f4, 0xB8($a0)
    MEM_W(0XB8, ctx->r4) = ctx->f4.u32l;
    // 0x803F35F0: lui         $t7, 0x8028
    ctx->r15 = S32(0X8028 << 16);
    // 0x803F35F4: sh          $zero, 0x93A($t6)
    MEM_H(0X93A, ctx->r14) = 0;
    // 0x803F35F8: lh          $t7, -0x1B60($t7)
    ctx->r15 = MEM_H(ctx->r15, -0X1B60);
    // 0x803F35FC: or          $a2, $a0, $zero
    ctx->r6 = ctx->r4 | 0;
    // 0x803F3600: andi        $t8, $t7, 0x1
    ctx->r24 = ctx->r15 & 0X1;
    // 0x803F3604: beq         $t8, $zero, L_803F3628
    if (ctx->r24 == 0) {
        // 0x803F3608: addiu       $t1, $zero, 0x18
        ctx->r9 = ADD32(0, 0X18);
            goto L_803F3628;
    }
    // 0x803F3608: addiu       $t1, $zero, 0x18
    ctx->r9 = ADD32(0, 0X18);
    // 0x803F360C: lui         $at, 0x4008
    ctx->r1 = S32(0X4008 << 16);
    // 0x803F3610: mtc1        $at, $f7
    ctx->f_odd[(7 - 1) * 2] = ctx->r1;
    // 0x803F3614: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x803F3618: lw          $t9, 0xC8($a0)
    ctx->r25 = MEM_W(ctx->r4, 0XC8);
    // 0x803F361C: cvt.s.d     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.d); 
    ctx->f8.fl = CVT_S_D(ctx->f6.d);
    // 0x803F3620: b           L_803F3640
    // 0x803F3624: swc1        $f8, 0x940($t9)
    MEM_W(0X940, ctx->r25) = ctx->f8.u32l;
        goto L_803F3640;
    // 0x803F3624: swc1        $f8, 0x940($t9)
    MEM_W(0X940, ctx->r25) = ctx->f8.u32l;
L_803F3628:
    // 0x803F3628: lui         $at, 0x803F
    ctx->r1 = S32(0X803F << 16);
    // 0x803F362C: lwc1        $f11, 0x7CB8($at)
    ctx->f_odd[(11 - 1) * 2] = MEM_W(ctx->r1, 0X7CB8);
    // 0x803F3630: lwc1        $f10, 0x7CBC($at)
    ctx->f10.u32l = MEM_W(ctx->r1, 0X7CBC);
    // 0x803F3634: lw          $t0, 0xC8($a2)
    ctx->r8 = MEM_W(ctx->r6, 0XC8);
    // 0x803F3638: cvt.s.d     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f16.fl = CVT_S_D(ctx->f10.d);
    // 0x803F363C: swc1        $f16, 0x940($t0)
    MEM_W(0X940, ctx->r8) = ctx->f16.u32l;
L_803F3640:
    // 0x803F3640: lw          $t2, 0xC8($a2)
    ctx->r10 = MEM_W(ctx->r6, 0XC8);
    // 0x803F3644: addiu       $a0, $zero, 0x46
    ctx->r4 = ADD32(0, 0X46);
    // 0x803F3648: sh          $t1, 0x938($t2)
    MEM_H(0X938, ctx->r10) = ctx->r9;
    // 0x803F364C: jal         0x80059898
    // 0x803F3650: sw          $a2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r6;
    func_80059898(rdram, ctx);
        goto after_0;
    // 0x803F3650: sw          $a2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r6;
    after_0:
    // 0x803F3654: lui         $t3, 0x801B
    ctx->r11 = S32(0X801B << 16);
    // 0x803F3658: lw          $a2, 0x18($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X18);
    // 0x803F365C: lw          $t3, 0x3618($t3)
    ctx->r11 = MEM_W(ctx->r11, 0X3618);
    // 0x803F3660: lui         $at, 0x4316
    ctx->r1 = S32(0X4316 << 16);
    // 0x803F3664: bne         $a2, $t3, L_803F3698
    if (ctx->r6 != ctx->r11) {
        // 0x803F3668: addiu       $a0, $zero, 0x5C
        ctx->r4 = ADD32(0, 0X5C);
            goto L_803F3698;
    }
    // 0x803F3668: addiu       $a0, $zero, 0x5C
    ctx->r4 = ADD32(0, 0X5C);
    // 0x803F366C: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x803F3670: lw          $v1, 0xC8($a2)
    ctx->r3 = MEM_W(ctx->r6, 0XC8);
    // 0x803F3674: swc1        $f18, 0xB8($a2)
    MEM_W(0XB8, ctx->r6) = ctx->f18.u32l;
    // 0x803F3678: lw          $t4, 0x24($v1)
    ctx->r12 = MEM_W(ctx->r3, 0X24);
    // 0x803F367C: nop

    // 0x803F3680: lh          $t5, 0x8B8($t4)
    ctx->r13 = MEM_H(ctx->r12, 0X8B8);
    // 0x803F3684: nop

    // 0x803F3688: sh          $t5, 0x93C($v1)
    MEM_H(0X93C, ctx->r3) = ctx->r13;
    // 0x803F368C: lw          $t6, 0xC8($a2)
    ctx->r14 = MEM_W(ctx->r6, 0XC8);
    // 0x803F3690: b           L_803F36FC
    // 0x803F3694: sh          $zero, 0x93E($t6)
    MEM_H(0X93E, ctx->r14) = 0;
        goto L_803F36FC;
    // 0x803F3694: sh          $zero, 0x93E($t6)
    MEM_H(0X93E, ctx->r14) = 0;
L_803F3698:
    // 0x803F3698: lw          $v1, 0xC8($a2)
    ctx->r3 = MEM_W(ctx->r6, 0XC8);
    // 0x803F369C: addiu       $t0, $zero, -0x158
    ctx->r8 = ADD32(0, -0X158);
    // 0x803F36A0: lhu         $t7, 0x8($v1)
    ctx->r15 = MEM_HU(ctx->r3, 0X8);
    // 0x803F36A4: subu        $t1, $t0, $v0
    ctx->r9 = SUB32(ctx->r8, ctx->r2);
    // 0x803F36A8: andi        $t8, $t7, 0x1
    ctx->r24 = ctx->r15 & 0X1;
    // 0x803F36AC: beq         $t8, $zero, L_803F36BC
    if (ctx->r24 == 0) {
        // 0x803F36B0: addiu       $t9, $v0, 0x158
        ctx->r25 = ADD32(ctx->r2, 0X158);
            goto L_803F36BC;
    }
    // 0x803F36B0: addiu       $t9, $v0, 0x158
    ctx->r25 = ADD32(ctx->r2, 0X158);
    // 0x803F36B4: b           L_803F36C0
    // 0x803F36B8: sh          $t9, 0x93C($v1)
    MEM_H(0X93C, ctx->r3) = ctx->r25;
        goto L_803F36C0;
    // 0x803F36B8: sh          $t9, 0x93C($v1)
    MEM_H(0X93C, ctx->r3) = ctx->r25;
L_803F36BC:
    // 0x803F36BC: sh          $t1, 0x93C($v1)
    MEM_H(0X93C, ctx->r3) = ctx->r9;
L_803F36C0:
    // 0x803F36C0: jal         0x80059898
    // 0x803F36C4: sw          $a2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r6;
    func_80059898(rdram, ctx);
        goto after_1;
    // 0x803F36C4: sw          $a2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r6;
    after_1:
    // 0x803F36C8: lw          $a2, 0x18($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X18);
    // 0x803F36CC: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x803F36D0: lwc1        $f6, 0x44($a2)
    ctx->f6.u32l = MEM_W(ctx->r6, 0X44);
    // 0x803F36D4: addiu       $v1, $zero, -0x5C
    ctx->r3 = ADD32(0, -0X5C);
    // 0x803F36D8: c.lt.s      $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f4.fl < ctx->f6.fl;
    // 0x803F36DC: nop

    // 0x803F36E0: bc1f        L_803F36F0
    if (!c1cs) {
        // 0x803F36E4: nop
    
            goto L_803F36F0;
    }
    // 0x803F36E4: nop

    // 0x803F36E8: b           L_803F36F0
    // 0x803F36EC: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
        goto L_803F36F0;
    // 0x803F36EC: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
L_803F36F0:
    // 0x803F36F0: lw          $t3, 0xC8($a2)
    ctx->r11 = MEM_W(ctx->r6, 0XC8);
    // 0x803F36F4: addu        $t2, $v1, $v0
    ctx->r10 = ADD32(ctx->r3, ctx->r2);
    // 0x803F36F8: sh          $t2, 0x93E($t3)
    MEM_H(0X93E, ctx->r11) = ctx->r10;
L_803F36FC:
    // 0x803F36FC: lw          $a1, 0xC8($a2)
    ctx->r5 = MEM_W(ctx->r6, 0XC8);
    // 0x803F3700: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    // 0x803F3704: jal         0x803F17BC
    // 0x803F3708: addiu       $a1, $a1, 0x938
    ctx->r5 = ADD32(ctx->r5, 0X938);
    ovl_803F0000_menu_func_803F17BC(rdram, ctx);
        goto after_2;
    // 0x803F3708: addiu       $a1, $a1, 0x938
    ctx->r5 = ADD32(ctx->r5, 0X938);
    after_2:
    // 0x803F370C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x803F3710: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x803F3714: sw          $zero, 0x3618($at)
    MEM_W(0X3618, ctx->r1) = 0;
    // 0x803F3718: jr          $ra
    // 0x803F371C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x803F371C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void ovl_803F0000_menu_func_803F3720(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803F3720: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x803F3724: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x803F3728: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x803F372C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x803F3730: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x803F3734: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x803F3738: lw          $t6, 0xC8($a0)
    ctx->r14 = MEM_W(ctx->r4, 0XC8);
    // 0x803F373C: swc1        $f4, 0xB8($a0)
    MEM_W(0XB8, ctx->r4) = ctx->f4.u32l;
    // 0x803F3740: sh          $zero, 0x93A($t6)
    MEM_H(0X93A, ctx->r14) = 0;
    // 0x803F3744: lw          $t7, 0xC8($a0)
    ctx->r15 = MEM_W(ctx->r4, 0XC8);
    // 0x803F3748: lwc1        $f6, 0x5C($a0)
    ctx->f6.u32l = MEM_W(ctx->r4, 0X5C);
    // 0x803F374C: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x803F3750: swc1        $f6, 0x940($t7)
    MEM_W(0X940, ctx->r15) = ctx->f6.u32l;
    // 0x803F3754: lw          $t9, 0xC8($a0)
    ctx->r25 = MEM_W(ctx->r4, 0XC8);
    // 0x803F3758: addiu       $t8, $zero, 0x3
    ctx->r24 = ADD32(0, 0X3);
    // 0x803F375C: addiu       $a0, $zero, 0x28
    ctx->r4 = ADD32(0, 0X28);
    // 0x803F3760: jal         0x80059898
    // 0x803F3764: sh          $t8, 0x938($t9)
    MEM_H(0X938, ctx->r25) = ctx->r24;
    func_80059898(rdram, ctx);
        goto after_0;
    // 0x803F3764: sh          $t8, 0x938($t9)
    MEM_H(0X938, ctx->r25) = ctx->r24;
    after_0:
    // 0x803F3768: lhu         $t0, 0x2E($sp)
    ctx->r8 = MEM_HU(ctx->r29, 0X2E);
    // 0x803F376C: lwc1        $f12, 0x4C($s0)
    ctx->f12.u32l = MEM_W(ctx->r16, 0X4C);
    // 0x803F3770: subu        $v1, $t0, $v0
    ctx->r3 = SUB32(ctx->r8, ctx->r2);
    // 0x803F3774: addiu       $v1, $v1, -0x28
    ctx->r3 = ADD32(ctx->r3, -0X28);
    // 0x803F3778: jal         0x80272AEC
    // 0x803F377C: sw          $v1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r3;
    LOOKUP_FUNC(0x80272AEC)(rdram, ctx);
        goto after_1;
    // 0x803F377C: sw          $v1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r3;
    after_1:
    // 0x803F3780: cfc1        $t1, $FpcCsr
    ctx->r9 = get_cop1_cs();
    // 0x803F3784: lw          $v1, 0x24($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X24);
    // 0x803F3788: ori         $at, $t1, 0x3
    ctx->r1 = ctx->r9 | 0X3;
    // 0x803F378C: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x803F3790: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x803F3794: nop

    // 0x803F3798: cvt.w.s     $f8, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    ctx->f8.u32l = CVT_W_S(ctx->f0.fl);
    // 0x803F379C: mfc1        $v0, $f8
    ctx->r2 = (int32_t)ctx->f8.u32l;
    // 0x803F37A0: ctc1        $t1, $FpcCsr
    set_cop1_cs(ctx->r9);
    // 0x803F37A4: slt         $at, $v1, $v0
    ctx->r1 = SIGNED(ctx->r3) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x803F37A8: beq         $at, $zero, L_803F37B4
    if (ctx->r1 == 0) {
        // 0x803F37AC: nop
    
            goto L_803F37B4;
    }
    // 0x803F37AC: nop

    // 0x803F37B0: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
L_803F37B4:
    // 0x803F37B4: lw          $v0, 0xC8($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XC8);
    // 0x803F37B8: negu        $t4, $v1
    ctx->r12 = SUB32(0, ctx->r3);
    // 0x803F37BC: lhu         $t2, 0x8($v0)
    ctx->r10 = MEM_HU(ctx->r2, 0X8);
    // 0x803F37C0: nop

    // 0x803F37C4: andi        $t3, $t2, 0x1
    ctx->r11 = ctx->r10 & 0X1;
    // 0x803F37C8: beq         $t3, $zero, L_803F37D8
    if (ctx->r11 == 0) {
        // 0x803F37CC: nop
    
            goto L_803F37D8;
    }
    // 0x803F37CC: nop

    // 0x803F37D0: b           L_803F37DC
    // 0x803F37D4: sh          $v1, 0x93C($v0)
    MEM_H(0X93C, ctx->r2) = ctx->r3;
        goto L_803F37DC;
    // 0x803F37D4: sh          $v1, 0x93C($v0)
    MEM_H(0X93C, ctx->r2) = ctx->r3;
L_803F37D8:
    // 0x803F37D8: sh          $t4, 0x93C($v0)
    MEM_H(0X93C, ctx->r2) = ctx->r12;
L_803F37DC:
    // 0x803F37DC: jal         0x80059898
    // 0x803F37E0: addiu       $a0, $zero, 0x28
    ctx->r4 = ADD32(0, 0X28);
    func_80059898(rdram, ctx);
        goto after_2;
    // 0x803F37E0: addiu       $a0, $zero, 0x28
    ctx->r4 = ADD32(0, 0X28);
    after_2:
    // 0x803F37E4: lwc1        $f0, 0x44($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X44);
    // 0x803F37E8: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x803F37EC: addiu       $a0, $v0, 0x28
    ctx->r4 = ADD32(ctx->r2, 0X28);
    // 0x803F37F0: c.lt.s      $f10, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f10.fl < ctx->f0.fl;
    // 0x803F37F4: addiu       $t5, $zero, -0x28
    ctx->r13 = ADD32(0, -0X28);
    // 0x803F37F8: bc1f        L_803F3808
    if (!c1cs) {
        // 0x803F37FC: addiu       $t9, $zero, 0xC8
        ctx->r25 = ADD32(0, 0XC8);
            goto L_803F3808;
    }
    // 0x803F37FC: addiu       $t9, $zero, 0xC8
    ctx->r25 = ADD32(0, 0XC8);
    // 0x803F3800: b           L_803F3808
    // 0x803F3804: subu        $a0, $t5, $v0
    ctx->r4 = SUB32(ctx->r13, ctx->r2);
        goto L_803F3808;
    // 0x803F3804: subu        $a0, $t5, $v0
    ctx->r4 = SUB32(ctx->r13, ctx->r2);
L_803F3808:
    // 0x803F3808: mtc1        $a0, $f16
    ctx->f16.u32l = ctx->r4;
    // 0x803F380C: lw          $t8, 0xC8($s0)
    ctx->r24 = MEM_W(ctx->r16, 0XC8);
    // 0x803F3810: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x803F3814: addiu       $t0, $zero, -0xC8
    ctx->r8 = ADD32(0, -0XC8);
    // 0x803F3818: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x803F381C: add.s       $f4, $f18, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = ctx->f18.fl + ctx->f0.fl;
    // 0x803F3820: cfc1        $t6, $FpcCsr
    ctx->r14 = get_cop1_cs();
    // 0x803F3824: nop

    // 0x803F3828: ori         $at, $t6, 0x3
    ctx->r1 = ctx->r14 | 0X3;
    // 0x803F382C: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x803F3830: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x803F3834: nop

    // 0x803F3838: cvt.w.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = CVT_W_S(ctx->f4.fl);
    // 0x803F383C: mfc1        $t7, $f6
    ctx->r15 = (int32_t)ctx->f6.u32l;
    // 0x803F3840: ctc1        $t6, $FpcCsr
    set_cop1_cs(ctx->r14);
    // 0x803F3844: sh          $t7, 0x93E($t8)
    MEM_H(0X93E, ctx->r24) = ctx->r15;
    // 0x803F3848: lw          $v0, 0xC8($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XC8);
    // 0x803F384C: nop

    // 0x803F3850: lh          $v1, 0x93E($v0)
    ctx->r3 = MEM_H(ctx->r2, 0X93E);
    // 0x803F3854: nop

    // 0x803F3858: slti        $at, $v1, 0xC9
    ctx->r1 = SIGNED(ctx->r3) < 0XC9 ? 1 : 0;
    // 0x803F385C: bne         $at, $zero, L_803F387C
    if (ctx->r1 != 0) {
        // 0x803F3860: slti        $at, $v1, -0xC8
        ctx->r1 = SIGNED(ctx->r3) < -0XC8 ? 1 : 0;
            goto L_803F387C;
    }
    // 0x803F3860: slti        $at, $v1, -0xC8
    ctx->r1 = SIGNED(ctx->r3) < -0XC8 ? 1 : 0;
    // 0x803F3864: sh          $t9, 0x93E($v0)
    MEM_H(0X93E, ctx->r2) = ctx->r25;
    // 0x803F3868: lw          $v0, 0xC8($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XC8);
    // 0x803F386C: nop

    // 0x803F3870: lh          $v1, 0x93E($v0)
    ctx->r3 = MEM_H(ctx->r2, 0X93E);
    // 0x803F3874: nop

    // 0x803F3878: slti        $at, $v1, -0xC8
    ctx->r1 = SIGNED(ctx->r3) < -0XC8 ? 1 : 0;
L_803F387C:
    // 0x803F387C: beq         $at, $zero, L_803F3890
    if (ctx->r1 == 0) {
        // 0x803F3880: nop
    
            goto L_803F3890;
    }
    // 0x803F3880: nop

    // 0x803F3884: sh          $t0, 0x93E($v0)
    MEM_H(0X93E, ctx->r2) = ctx->r8;
    // 0x803F3888: lw          $v0, 0xC8($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XC8);
    // 0x803F388C: nop

L_803F3890:
    // 0x803F3890: jal         0x803F17BC
    // 0x803F3894: addiu       $a1, $v0, 0x938
    ctx->r5 = ADD32(ctx->r2, 0X938);
    ovl_803F0000_menu_func_803F17BC(rdram, ctx);
        goto after_3;
    // 0x803F3894: addiu       $a1, $v0, 0x938
    ctx->r5 = ADD32(ctx->r2, 0X938);
    after_3:
    // 0x803F3898: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x803F389C: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x803F38A0: jr          $ra
    // 0x803F38A4: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x803F38A4: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void ovl_803F0000_menu_func_803F38A8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803F38A8: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x803F38AC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x803F38B0: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x803F38B4: jal         0x80059898
    // 0x803F38B8: addiu       $a0, $zero, 0x64
    ctx->r4 = ADD32(0, 0X64);
    func_80059898(rdram, ctx);
        goto after_0;
    // 0x803F38B8: addiu       $a0, $zero, 0x64
    ctx->r4 = ADD32(0, 0X64);
    after_0:
    // 0x803F38BC: lw          $a1, 0x20($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X20);
    // 0x803F38C0: nop

    // 0x803F38C4: lwc1        $f12, 0x44($a1)
    ctx->f12.u32l = MEM_W(ctx->r5, 0X44);
    // 0x803F38C8: jal         0x80272AEC
    // 0x803F38CC: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    LOOKUP_FUNC(0x80272AEC)(rdram, ctx);
        goto after_1;
    // 0x803F38CC: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    after_1:
    // 0x803F38D0: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x803F38D4: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x803F38D8: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x803F38DC: sub.s       $f6, $f0, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f0.fl - ctx->f4.fl;
    // 0x803F38E0: lw          $a1, 0x20($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X20);
    // 0x803F38E4: cfc1        $t6, $FpcCsr
    ctx->r14 = get_cop1_cs();
    // 0x803F38E8: addiu       $t3, $zero, 0x1CB
    ctx->r11 = ADD32(0, 0X1CB);
    // 0x803F38EC: ori         $at, $t6, 0x3
    ctx->r1 = ctx->r14 | 0X3;
    // 0x803F38F0: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x803F38F4: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x803F38F8: lui         $t7, 0x8009
    ctx->r15 = S32(0X8009 << 16);
    // 0x803F38FC: cvt.w.s     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.u32l = CVT_W_S(ctx->f6.fl);
    // 0x803F3900: subu        $t4, $t3, $a0
    ctx->r12 = SUB32(ctx->r11, ctx->r4);
    // 0x803F3904: mfc1        $v1, $f8
    ctx->r3 = (int32_t)ctx->f8.u32l;
    // 0x803F3908: ctc1        $t6, $FpcCsr
    set_cop1_cs(ctx->r14);
    // 0x803F390C: slti        $at, $v1, 0x12E
    ctx->r1 = SIGNED(ctx->r3) < 0X12E ? 1 : 0;
    // 0x803F3910: bne         $at, $zero, L_803F391C
    if (ctx->r1 != 0) {
        // 0x803F3914: addiu       $t5, $a0, -0x1CB
        ctx->r13 = ADD32(ctx->r4, -0X1CB);
            goto L_803F391C;
    }
    // 0x803F3914: addiu       $t5, $a0, -0x1CB
    ctx->r13 = ADD32(ctx->r4, -0X1CB);
    // 0x803F3918: addiu       $v1, $zero, 0x12D
    ctx->r3 = ADD32(0, 0X12D);
L_803F391C:
    // 0x803F391C: lw          $t7, 0x3B20($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X3B20);
    // 0x803F3920: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x803F3924: lwc1        $f16, 0x0($t7)
    ctx->f16.u32l = MEM_W(ctx->r15, 0X0);
    // 0x803F3928: nop

    // 0x803F392C: c.lt.s      $f10, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f10.fl < ctx->f16.fl;
    // 0x803F3930: nop

    // 0x803F3934: bc1f        L_803F3948
    if (!c1cs) {
        // 0x803F3938: nop
    
            goto L_803F3948;
    }
    // 0x803F3938: nop

    // 0x803F393C: lw          $t8, 0xC8($a1)
    ctx->r24 = MEM_W(ctx->r5, 0XC8);
    // 0x803F3940: b           L_803F3954
    // 0x803F3944: sh          $v1, 0x93E($t8)
    MEM_H(0X93E, ctx->r24) = ctx->r3;
        goto L_803F3954;
    // 0x803F3944: sh          $v1, 0x93E($t8)
    MEM_H(0X93E, ctx->r24) = ctx->r3;
L_803F3948:
    // 0x803F3948: lw          $t0, 0xC8($a1)
    ctx->r8 = MEM_W(ctx->r5, 0XC8);
    // 0x803F394C: negu        $t9, $v1
    ctx->r25 = SUB32(0, ctx->r3);
    // 0x803F3950: sh          $t9, 0x93E($t0)
    MEM_H(0X93E, ctx->r8) = ctx->r25;
L_803F3954:
    // 0x803F3954: lw          $v0, 0xC8($a1)
    ctx->r2 = MEM_W(ctx->r5, 0XC8);
    // 0x803F3958: nop

    // 0x803F395C: lhu         $t1, 0x8($v0)
    ctx->r9 = MEM_HU(ctx->r2, 0X8);
    // 0x803F3960: nop

    // 0x803F3964: andi        $t2, $t1, 0x1
    ctx->r10 = ctx->r9 & 0X1;
    // 0x803F3968: beq         $t2, $zero, L_803F3978
    if (ctx->r10 == 0) {
        // 0x803F396C: nop
    
            goto L_803F3978;
    }
    // 0x803F396C: nop

    // 0x803F3970: b           L_803F397C
    // 0x803F3974: sh          $t4, 0x93C($v0)
    MEM_H(0X93C, ctx->r2) = ctx->r12;
        goto L_803F397C;
    // 0x803F3974: sh          $t4, 0x93C($v0)
    MEM_H(0X93C, ctx->r2) = ctx->r12;
L_803F3978:
    // 0x803F3978: sh          $t5, 0x93C($v0)
    MEM_H(0X93C, ctx->r2) = ctx->r13;
L_803F397C:
    // 0x803F397C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x803F3980: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x803F3984: jr          $ra
    // 0x803F3988: nop

    return;
    // 0x803F3988: nop

;}
RECOMP_FUNC void ovl_803F0000_menu_func_803F398C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803F398C: lui         $t6, 0x801B
    ctx->r14 = S32(0X801B << 16);
    // 0x803F3990: lw          $t6, 0x3618($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X3618);
    // 0x803F3994: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x803F3998: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x803F399C: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x803F39A0: bne         $a0, $t6, L_803F3A2C
    if (ctx->r4 != ctx->r14) {
        // 0x803F39A4: sw          $ra, 0x1C($sp)
        MEM_W(0X1C, ctx->r29) = ctx->r31;
            goto L_803F3A2C;
    }
    // 0x803F39A4: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x803F39A8: lwc1        $f12, 0x4C($a0)
    ctx->f12.u32l = MEM_W(ctx->r4, 0X4C);
    // 0x803F39AC: jal         0x80272AEC
    // 0x803F39B0: nop

    LOOKUP_FUNC(0x80272AEC)(rdram, ctx);
        goto after_0;
    // 0x803F39B0: nop

    after_0:
    // 0x803F39B4: swc1        $f0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f0.u32l;
    // 0x803F39B8: lw          $t7, 0xC8($s0)
    ctx->r15 = MEM_W(ctx->r16, 0XC8);
    // 0x803F39BC: nop

    // 0x803F39C0: lh          $a0, 0x93C($t7)
    ctx->r4 = MEM_H(ctx->r15, 0X93C);
    // 0x803F39C4: jal         0x80272AD4
    // 0x803F39C8: nop

    LOOKUP_FUNC(0x80272AD4)(rdram, ctx);
        goto after_1;
    // 0x803F39C8: nop

    after_1:
    // 0x803F39CC: mtc1        $v0, $f4
    ctx->f4.u32l = ctx->r2;
    // 0x803F39D0: bgez        $v0, L_803F39E8
    if (SIGNED(ctx->r2) >= 0) {
        // 0x803F39D4: cvt.s.w     $f6, $f4
        CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
            goto L_803F39E8;
    }
    // 0x803F39D4: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x803F39D8: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x803F39DC: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x803F39E0: nop

    // 0x803F39E4: add.s       $f6, $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f6.fl = ctx->f6.fl + ctx->f8.fl;
L_803F39E8:
    // 0x803F39E8: lwc1        $f10, 0x24($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X24);
    // 0x803F39EC: nop

    // 0x803F39F0: c.lt.s      $f6, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f6.fl < ctx->f10.fl;
    // 0x803F39F4: nop

    // 0x803F39F8: bc1f        L_803F3A2C
    if (!c1cs) {
        // 0x803F39FC: nop
    
            goto L_803F3A2C;
    }
    // 0x803F39FC: nop

    // 0x803F3A00: cfc1        $t8, $FpcCsr
    ctx->r24 = get_cop1_cs();
    // 0x803F3A04: lwc1        $f16, 0x4C($s0)
    ctx->f16.u32l = MEM_W(ctx->r16, 0X4C);
    // 0x803F3A08: ori         $at, $t8, 0x3
    ctx->r1 = ctx->r24 | 0X3;
    // 0x803F3A0C: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x803F3A10: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x803F3A14: lw          $t0, 0xC8($s0)
    ctx->r8 = MEM_W(ctx->r16, 0XC8);
    // 0x803F3A18: cvt.w.s     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.u32l = CVT_W_S(ctx->f16.fl);
    // 0x803F3A1C: mfc1        $t9, $f18
    ctx->r25 = (int32_t)ctx->f18.u32l;
    // 0x803F3A20: ctc1        $t8, $FpcCsr
    set_cop1_cs(ctx->r24);
    // 0x803F3A24: sh          $t9, 0x93C($t0)
    MEM_H(0X93C, ctx->r8) = ctx->r25;
    // 0x803F3A28: nop

L_803F3A2C:
    // 0x803F3A2C: lwc1        $f12, 0x4C($s0)
    ctx->f12.u32l = MEM_W(ctx->r16, 0X4C);
    // 0x803F3A30: jal         0x80272AEC
    // 0x803F3A34: nop

    LOOKUP_FUNC(0x80272AEC)(rdram, ctx);
        goto after_2;
    // 0x803F3A34: nop

    after_2:
    // 0x803F3A38: lui         $at, 0x43AC
    ctx->r1 = S32(0X43AC << 16);
    // 0x803F3A3C: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x803F3A40: nop

    // 0x803F3A44: c.lt.s      $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f4.fl < ctx->f0.fl;
    // 0x803F3A48: nop

    // 0x803F3A4C: bc1f        L_803F3A84
    if (!c1cs) {
        // 0x803F3A50: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_803F3A84;
    }
    // 0x803F3A50: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x803F3A54: cfc1        $t1, $FpcCsr
    ctx->r9 = get_cop1_cs();
    // 0x803F3A58: lwc1        $f8, 0x44($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X44);
    // 0x803F3A5C: ori         $at, $t1, 0x3
    ctx->r1 = ctx->r9 | 0X3;
    // 0x803F3A60: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x803F3A64: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x803F3A68: lw          $t3, 0xC8($s0)
    ctx->r11 = MEM_W(ctx->r16, 0XC8);
    // 0x803F3A6C: cvt.w.s     $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    ctx->f6.u32l = CVT_W_S(ctx->f8.fl);
    // 0x803F3A70: mfc1        $t2, $f6
    ctx->r10 = (int32_t)ctx->f6.u32l;
    // 0x803F3A74: ctc1        $t1, $FpcCsr
    set_cop1_cs(ctx->r9);
    // 0x803F3A78: sh          $t2, 0x93E($t3)
    MEM_H(0X93E, ctx->r11) = ctx->r10;
    // 0x803F3A7C: nop

    // 0x803F3A80: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_803F3A84:
    // 0x803F3A84: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x803F3A88: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x803F3A8C: sw          $zero, 0x3618($at)
    MEM_W(0X3618, ctx->r1) = 0;
    // 0x803F3A90: jr          $ra
    // 0x803F3A94: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x803F3A94: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void ovl_803F0000_menu_func_803F3A98(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803F3A98: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x803F3A9C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x803F3AA0: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x803F3AA4: lw          $t6, 0xC8($a0)
    ctx->r14 = MEM_W(ctx->r4, 0XC8);
    // 0x803F3AA8: lwc1        $f4, 0x5C($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X5C);
    // 0x803F3AAC: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x803F3AB0: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x803F3AB4: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x803F3AB8: jal         0x803F1914
    // 0x803F3ABC: swc1        $f4, 0x940($t6)
    MEM_W(0X940, ctx->r14) = ctx->f4.u32l;
    ovl_803F0000_menu_func_803F1914(rdram, ctx);
        goto after_0;
    // 0x803F3ABC: swc1        $f4, 0x940($t6)
    MEM_W(0X940, ctx->r14) = ctx->f4.u32l;
    after_0:
    // 0x803F3AC0: beq         $v0, $zero, L_803F3B58
    if (ctx->r2 == 0) {
        // 0x803F3AC4: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_803F3B58;
    }
    // 0x803F3AC4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x803F3AC8: lw          $t8, 0xC8($s0)
    ctx->r24 = MEM_W(ctx->r16, 0XC8);
    // 0x803F3ACC: addiu       $t7, $zero, 0x10
    ctx->r15 = ADD32(0, 0X10);
    // 0x803F3AD0: lui         $t9, 0x8009
    ctx->r25 = S32(0X8009 << 16);
    // 0x803F3AD4: sh          $t7, 0x938($t8)
    MEM_H(0X938, ctx->r24) = ctx->r15;
    // 0x803F3AD8: lw          $t9, 0x3B20($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X3B20);
    // 0x803F3ADC: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x803F3AE0: lwc1        $f8, 0x0($t9)
    ctx->f8.u32l = MEM_W(ctx->r25, 0X0);
    // 0x803F3AE4: addiu       $t0, $zero, 0xC8
    ctx->r8 = ADD32(0, 0XC8);
    // 0x803F3AE8: c.lt.s      $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f6.fl < ctx->f8.fl;
    // 0x803F3AEC: addiu       $t7, $zero, -0x1D5
    ctx->r15 = ADD32(0, -0X1D5);
    // 0x803F3AF0: bc1f        L_803F3B04
    if (!c1cs) {
        // 0x803F3AF4: addiu       $t6, $zero, 0x1D5
        ctx->r14 = ADD32(0, 0X1D5);
            goto L_803F3B04;
    }
    // 0x803F3AF4: addiu       $t6, $zero, 0x1D5
    ctx->r14 = ADD32(0, 0X1D5);
    // 0x803F3AF8: lw          $t1, 0xC8($s0)
    ctx->r9 = MEM_W(ctx->r16, 0XC8);
    // 0x803F3AFC: b           L_803F3B10
    // 0x803F3B00: sh          $t0, 0x93E($t1)
    MEM_H(0X93E, ctx->r9) = ctx->r8;
        goto L_803F3B10;
    // 0x803F3B00: sh          $t0, 0x93E($t1)
    MEM_H(0X93E, ctx->r9) = ctx->r8;
L_803F3B04:
    // 0x803F3B04: lw          $t3, 0xC8($s0)
    ctx->r11 = MEM_W(ctx->r16, 0XC8);
    // 0x803F3B08: addiu       $t2, $zero, -0xC8
    ctx->r10 = ADD32(0, -0XC8);
    // 0x803F3B0C: sh          $t2, 0x93E($t3)
    MEM_H(0X93E, ctx->r11) = ctx->r10;
L_803F3B10:
    // 0x803F3B10: lw          $v1, 0xC8($s0)
    ctx->r3 = MEM_W(ctx->r16, 0XC8);
    // 0x803F3B14: nop

    // 0x803F3B18: lhu         $t4, 0x8($v1)
    ctx->r12 = MEM_HU(ctx->r3, 0X8);
    // 0x803F3B1C: nop

    // 0x803F3B20: andi        $t5, $t4, 0x1
    ctx->r13 = ctx->r12 & 0X1;
    // 0x803F3B24: beq         $t5, $zero, L_803F3B34
    if (ctx->r13 == 0) {
        // 0x803F3B28: nop
    
            goto L_803F3B34;
    }
    // 0x803F3B28: nop

    // 0x803F3B2C: b           L_803F3B38
    // 0x803F3B30: sh          $t6, 0x93C($v1)
    MEM_H(0X93C, ctx->r3) = ctx->r14;
        goto L_803F3B38;
    // 0x803F3B30: sh          $t6, 0x93C($v1)
    MEM_H(0X93C, ctx->r3) = ctx->r14;
L_803F3B34:
    // 0x803F3B34: sh          $t7, 0x93C($v1)
    MEM_H(0X93C, ctx->r3) = ctx->r15;
L_803F3B38:
    // 0x803F3B38: lw          $t8, 0xC8($s0)
    ctx->r24 = MEM_W(ctx->r16, 0XC8);
    // 0x803F3B3C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x803F3B40: sh          $zero, 0x948($t8)
    MEM_H(0X948, ctx->r24) = 0;
    // 0x803F3B44: lw          $a1, 0xC8($s0)
    ctx->r5 = MEM_W(ctx->r16, 0XC8);
    // 0x803F3B48: jal         0x803F17BC
    // 0x803F3B4C: addiu       $a1, $a1, 0x938
    ctx->r5 = ADD32(ctx->r5, 0X938);
    ovl_803F0000_menu_func_803F17BC(rdram, ctx);
        goto after_1;
    // 0x803F3B4C: addiu       $a1, $a1, 0x938
    ctx->r5 = ADD32(ctx->r5, 0X938);
    after_1:
    // 0x803F3B50: b           L_803F3C7C
    // 0x803F3B54: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_803F3C7C;
    // 0x803F3B54: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_803F3B58:
    // 0x803F3B58: jal         0x803F1990
    // 0x803F3B5C: addiu       $a1, $zero, 0xA
    ctx->r5 = ADD32(0, 0XA);
    ovl_803F0000_menu_func_803F1990(rdram, ctx);
        goto after_2;
    // 0x803F3B5C: addiu       $a1, $zero, 0xA
    ctx->r5 = ADD32(0, 0XA);
    after_2:
    // 0x803F3B60: beq         $v0, $zero, L_803F3C44
    if (ctx->r2 == 0) {
        // 0x803F3B64: lui         $t9, 0x8028
        ctx->r25 = S32(0X8028 << 16);
            goto L_803F3C44;
    }
    // 0x803F3B64: lui         $t9, 0x8028
    ctx->r25 = S32(0X8028 << 16);
    // 0x803F3B68: lh          $t9, -0x1B60($t9)
    ctx->r25 = MEM_H(ctx->r25, -0X1B60);
    // 0x803F3B6C: addiu       $t1, $zero, 0xE
    ctx->r9 = ADD32(0, 0XE);
    // 0x803F3B70: andi        $t0, $t9, 0x1
    ctx->r8 = ctx->r25 & 0X1;
    // 0x803F3B74: beq         $t0, $zero, L_803F3C20
    if (ctx->r8 == 0) {
        // 0x803F3B78: addiu       $a0, $zero, 0x28
        ctx->r4 = ADD32(0, 0X28);
            goto L_803F3C20;
    }
    // 0x803F3B78: addiu       $a0, $zero, 0x28
    ctx->r4 = ADD32(0, 0X28);
    // 0x803F3B7C: lw          $t2, 0xC8($s0)
    ctx->r10 = MEM_W(ctx->r16, 0XC8);
    // 0x803F3B80: jal         0x80059898
    // 0x803F3B84: sh          $t1, 0x938($t2)
    MEM_H(0X938, ctx->r10) = ctx->r9;
    func_80059898(rdram, ctx);
        goto after_3;
    // 0x803F3B84: sh          $t1, 0x938($t2)
    MEM_H(0X938, ctx->r10) = ctx->r9;
    after_3:
    // 0x803F3B88: lui         $t3, 0x8009
    ctx->r11 = S32(0X8009 << 16);
    // 0x803F3B8C: lw          $t3, 0x3B20($t3)
    ctx->r11 = MEM_W(ctx->r11, 0X3B20);
    // 0x803F3B90: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x803F3B94: lwc1        $f16, 0x0($t3)
    ctx->f16.u32l = MEM_W(ctx->r11, 0X0);
    // 0x803F3B98: addiu       $a0, $zero, 0xA
    ctx->r4 = ADD32(0, 0XA);
    // 0x803F3B9C: c.lt.s      $f10, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f10.fl < ctx->f16.fl;
    // 0x803F3BA0: addiu       $t1, $v0, -0x1AD
    ctx->r9 = ADD32(ctx->r2, -0X1AD);
    // 0x803F3BA4: bc1f        L_803F3BB4
    if (!c1cs) {
        // 0x803F3BA8: addiu       $t9, $zero, 0x1AD
        ctx->r25 = ADD32(0, 0X1AD);
            goto L_803F3BB4;
    }
    // 0x803F3BA8: addiu       $t9, $zero, 0x1AD
    ctx->r25 = ADD32(0, 0X1AD);
    // 0x803F3BAC: b           L_803F3BB4
    // 0x803F3BB0: addiu       $a0, $zero, -0xA
    ctx->r4 = ADD32(0, -0XA);
        goto L_803F3BB4;
    // 0x803F3BB0: addiu       $a0, $zero, -0xA
    ctx->r4 = ADD32(0, -0XA);
L_803F3BB4:
    // 0x803F3BB4: mtc1        $a0, $f18
    ctx->f18.u32l = ctx->r4;
    // 0x803F3BB8: lwc1        $f6, 0x44($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X44);
    // 0x803F3BBC: cvt.s.w     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    ctx->f4.fl = CVT_S_W(ctx->f18.u32l);
    // 0x803F3BC0: lw          $t6, 0xC8($s0)
    ctx->r14 = MEM_W(ctx->r16, 0XC8);
    // 0x803F3BC4: subu        $t0, $t9, $v0
    ctx->r8 = SUB32(ctx->r25, ctx->r2);
    // 0x803F3BC8: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x803F3BCC: cfc1        $t4, $FpcCsr
    ctx->r12 = get_cop1_cs();
    // 0x803F3BD0: nop

    // 0x803F3BD4: ori         $at, $t4, 0x3
    ctx->r1 = ctx->r12 | 0X3;
    // 0x803F3BD8: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x803F3BDC: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x803F3BE0: nop

    // 0x803F3BE4: cvt.w.s     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.u32l = CVT_W_S(ctx->f8.fl);
    // 0x803F3BE8: mfc1        $t5, $f10
    ctx->r13 = (int32_t)ctx->f10.u32l;
    // 0x803F3BEC: ctc1        $t4, $FpcCsr
    set_cop1_cs(ctx->r12);
    // 0x803F3BF0: sh          $t5, 0x93E($t6)
    MEM_H(0X93E, ctx->r14) = ctx->r13;
    // 0x803F3BF4: lw          $v1, 0xC8($s0)
    ctx->r3 = MEM_W(ctx->r16, 0XC8);
    // 0x803F3BF8: nop

    // 0x803F3BFC: lhu         $t7, 0x8($v1)
    ctx->r15 = MEM_HU(ctx->r3, 0X8);
    // 0x803F3C00: nop

    // 0x803F3C04: andi        $t8, $t7, 0x1
    ctx->r24 = ctx->r15 & 0X1;
    // 0x803F3C08: beq         $t8, $zero, L_803F3C18
    if (ctx->r24 == 0) {
        // 0x803F3C0C: nop
    
            goto L_803F3C18;
    }
    // 0x803F3C0C: nop

    // 0x803F3C10: b           L_803F3C60
    // 0x803F3C14: sh          $t0, 0x93C($v1)
    MEM_H(0X93C, ctx->r3) = ctx->r8;
        goto L_803F3C60;
    // 0x803F3C14: sh          $t0, 0x93C($v1)
    MEM_H(0X93C, ctx->r3) = ctx->r8;
L_803F3C18:
    // 0x803F3C18: b           L_803F3C60
    // 0x803F3C1C: sh          $t1, 0x93C($v1)
    MEM_H(0X93C, ctx->r3) = ctx->r9;
        goto L_803F3C60;
    // 0x803F3C1C: sh          $t1, 0x93C($v1)
    MEM_H(0X93C, ctx->r3) = ctx->r9;
L_803F3C20:
    // 0x803F3C20: jal         0x803F38A8
    // 0x803F3C24: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_803F0000_menu_func_803F38A8(rdram, ctx);
        goto after_4;
    // 0x803F3C24: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_4:
    // 0x803F3C28: lw          $t3, 0xC8($s0)
    ctx->r11 = MEM_W(ctx->r16, 0XC8);
    // 0x803F3C2C: addiu       $t2, $zero, 0x1B
    ctx->r10 = ADD32(0, 0X1B);
    // 0x803F3C30: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x803F3C34: jal         0x803F398C
    // 0x803F3C38: sh          $t2, 0x938($t3)
    MEM_H(0X938, ctx->r11) = ctx->r10;
    ovl_803F0000_menu_func_803F398C(rdram, ctx);
        goto after_5;
    // 0x803F3C38: sh          $t2, 0x938($t3)
    MEM_H(0X938, ctx->r11) = ctx->r10;
    after_5:
    // 0x803F3C3C: b           L_803F3C64
    // 0x803F3C40: lw          $t6, 0xC8($s0)
    ctx->r14 = MEM_W(ctx->r16, 0XC8);
        goto L_803F3C64;
    // 0x803F3C40: lw          $t6, 0xC8($s0)
    ctx->r14 = MEM_W(ctx->r16, 0XC8);
L_803F3C44:
    // 0x803F3C44: jal         0x803F38A8
    // 0x803F3C48: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_803F0000_menu_func_803F38A8(rdram, ctx);
        goto after_6;
    // 0x803F3C48: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_6:
    // 0x803F3C4C: lw          $t5, 0xC8($s0)
    ctx->r13 = MEM_W(ctx->r16, 0XC8);
    // 0x803F3C50: addiu       $t4, $zero, 0x6
    ctx->r12 = ADD32(0, 0X6);
    // 0x803F3C54: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x803F3C58: jal         0x803F398C
    // 0x803F3C5C: sh          $t4, 0x938($t5)
    MEM_H(0X938, ctx->r13) = ctx->r12;
    ovl_803F0000_menu_func_803F398C(rdram, ctx);
        goto after_7;
    // 0x803F3C5C: sh          $t4, 0x938($t5)
    MEM_H(0X938, ctx->r13) = ctx->r12;
    after_7:
L_803F3C60:
    // 0x803F3C60: lw          $t6, 0xC8($s0)
    ctx->r14 = MEM_W(ctx->r16, 0XC8);
L_803F3C64:
    // 0x803F3C64: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x803F3C68: sh          $zero, 0x948($t6)
    MEM_H(0X948, ctx->r14) = 0;
    // 0x803F3C6C: lw          $a1, 0xC8($s0)
    ctx->r5 = MEM_W(ctx->r16, 0XC8);
    // 0x803F3C70: jal         0x803F17BC
    // 0x803F3C74: addiu       $a1, $a1, 0x938
    ctx->r5 = ADD32(ctx->r5, 0X938);
    ovl_803F0000_menu_func_803F17BC(rdram, ctx);
        goto after_8;
    // 0x803F3C74: addiu       $a1, $a1, 0x938
    ctx->r5 = ADD32(ctx->r5, 0X938);
    after_8:
    // 0x803F3C78: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_803F3C7C:
    // 0x803F3C7C: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x803F3C80: jr          $ra
    // 0x803F3C84: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x803F3C84: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void ovl_803F0000_menu_func_803F3C88(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803F3C88: lw          $t6, 0xC8($a0)
    ctx->r14 = MEM_W(ctx->r4, 0XC8);
    // 0x803F3C8C: negu        $v0, $a2
    ctx->r2 = SUB32(0, ctx->r6);
    // 0x803F3C90: lhu         $t7, 0x8($t6)
    ctx->r15 = MEM_HU(ctx->r14, 0X8);
    // 0x803F3C94: slt         $at, $v0, $a1
    ctx->r1 = SIGNED(ctx->r2) < SIGNED(ctx->r5) ? 1 : 0;
    // 0x803F3C98: andi        $t8, $t7, 0x1
    ctx->r24 = ctx->r15 & 0X1;
    // 0x803F3C9C: beq         $t8, $zero, L_803F3CB8
    if (ctx->r24 == 0) {
        // 0x803F3CA0: nop
    
            goto L_803F3CB8;
    }
    // 0x803F3CA0: nop

    // 0x803F3CA4: slt         $at, $a1, $a2
    ctx->r1 = SIGNED(ctx->r5) < SIGNED(ctx->r6) ? 1 : 0;
    // 0x803F3CA8: beq         $at, $zero, L_803F3CC4
    if (ctx->r1 == 0) {
        // 0x803F3CAC: nop
    
            goto L_803F3CC4;
    }
    // 0x803F3CAC: nop

    // 0x803F3CB0: jr          $ra
    // 0x803F3CB4: or          $v0, $a2, $zero
    ctx->r2 = ctx->r6 | 0;
    return;
    // 0x803F3CB4: or          $v0, $a2, $zero
    ctx->r2 = ctx->r6 | 0;
L_803F3CB8:
    // 0x803F3CB8: beq         $at, $zero, L_803F3CC4
    if (ctx->r1 == 0) {
        // 0x803F3CBC: nop
    
            goto L_803F3CC4;
    }
    // 0x803F3CBC: nop

    // 0x803F3CC0: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
L_803F3CC4:
    // 0x803F3CC4: jr          $ra
    // 0x803F3CC8: or          $v0, $a1, $zero
    ctx->r2 = ctx->r5 | 0;
    return;
    // 0x803F3CC8: or          $v0, $a1, $zero
    ctx->r2 = ctx->r5 | 0;
;}
RECOMP_FUNC void ovl_803F0000_menu_func_803F3CCC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803F3CCC: lw          $t6, 0xC8($a0)
    ctx->r14 = MEM_W(ctx->r4, 0XC8);
    // 0x803F3CD0: negu        $v0, $a2
    ctx->r2 = SUB32(0, ctx->r6);
    // 0x803F3CD4: lhu         $t7, 0x8($t6)
    ctx->r15 = MEM_HU(ctx->r14, 0X8);
    // 0x803F3CD8: slt         $at, $a1, $v0
    ctx->r1 = SIGNED(ctx->r5) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x803F3CDC: andi        $t8, $t7, 0x1
    ctx->r24 = ctx->r15 & 0X1;
    // 0x803F3CE0: beq         $t8, $zero, L_803F3CFC
    if (ctx->r24 == 0) {
        // 0x803F3CE4: nop
    
            goto L_803F3CFC;
    }
    // 0x803F3CE4: nop

    // 0x803F3CE8: slt         $at, $a2, $a1
    ctx->r1 = SIGNED(ctx->r6) < SIGNED(ctx->r5) ? 1 : 0;
    // 0x803F3CEC: beq         $at, $zero, L_803F3D08
    if (ctx->r1 == 0) {
        // 0x803F3CF0: nop
    
            goto L_803F3D08;
    }
    // 0x803F3CF0: nop

    // 0x803F3CF4: jr          $ra
    // 0x803F3CF8: or          $v0, $a2, $zero
    ctx->r2 = ctx->r6 | 0;
    return;
    // 0x803F3CF8: or          $v0, $a2, $zero
    ctx->r2 = ctx->r6 | 0;
L_803F3CFC:
    // 0x803F3CFC: beq         $at, $zero, L_803F3D08
    if (ctx->r1 == 0) {
        // 0x803F3D00: nop
    
            goto L_803F3D08;
    }
    // 0x803F3D00: nop

    // 0x803F3D04: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
L_803F3D08:
    // 0x803F3D08: jr          $ra
    // 0x803F3D0C: or          $v0, $a1, $zero
    ctx->r2 = ctx->r5 | 0;
    return;
    // 0x803F3D0C: or          $v0, $a1, $zero
    ctx->r2 = ctx->r5 | 0;
;}
RECOMP_FUNC void ovl_803F0000_menu_func_803F3D10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803F3D10: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x803F3D14: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x803F3D18: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x803F3D1C: lhu         $v0, 0xE($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0XE);
    // 0x803F3D20: lwc1        $f12, 0x8C($a0)
    ctx->f12.u32l = MEM_W(ctx->r4, 0X8C);
    // 0x803F3D24: addiu       $at, $zero, 0x16
    ctx->r1 = ADD32(0, 0X16);
    // 0x803F3D28: beq         $v0, $at, L_803F3D3C
    if (ctx->r2 == ctx->r1) {
        // 0x803F3D2C: or          $s0, $a0, $zero
        ctx->r16 = ctx->r4 | 0;
            goto L_803F3D3C;
    }
    // 0x803F3D2C: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x803F3D30: addiu       $at, $zero, 0x19
    ctx->r1 = ADD32(0, 0X19);
    // 0x803F3D34: bne         $v0, $at, L_803F3D58
    if (ctx->r2 != ctx->r1) {
        // 0x803F3D38: nop
    
            goto L_803F3D58;
    }
    // 0x803F3D38: nop

L_803F3D3C:
    // 0x803F3D3C: lhu         $t6, 0x12($s0)
    ctx->r14 = MEM_HU(ctx->r16, 0X12);
    // 0x803F3D40: nop

    // 0x803F3D44: andi        $t7, $t6, 0x2
    ctx->r15 = ctx->r14 & 0X2;
    // 0x803F3D48: beq         $t7, $zero, L_803F3D58
    if (ctx->r15 == 0) {
        // 0x803F3D4C: nop
    
            goto L_803F3D58;
    }
    // 0x803F3D4C: nop

    // 0x803F3D50: lwc1        $f12, 0xB0($s0)
    ctx->f12.u32l = MEM_W(ctx->r16, 0XB0);
    // 0x803F3D54: nop

L_803F3D58:
    // 0x803F3D58: lwc1        $f14, 0xBC($s0)
    ctx->f14.u32l = MEM_W(ctx->r16, 0XBC);
    // 0x803F3D5C: jal         0x8027924C
    // 0x803F3D60: nop

    LOOKUP_FUNC(0x8027924C)(rdram, ctx);
        goto after_0;
    // 0x803F3D60: nop

    after_0:
    // 0x803F3D64: swc1        $f0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f0.u32l;
    // 0x803F3D68: lw          $v0, 0xC8($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XC8);
    // 0x803F3D6C: addiu       $a0, $zero, 0xF
    ctx->r4 = ADD32(0, 0XF);
    // 0x803F3D70: lhu         $t8, 0x95C($v0)
    ctx->r24 = MEM_HU(ctx->r2, 0X95C);
    // 0x803F3D74: nop

    // 0x803F3D78: ori         $t9, $t8, 0x1
    ctx->r25 = ctx->r24 | 0X1;
    // 0x803F3D7C: jal         0x80059898
    // 0x803F3D80: sh          $t9, 0x95C($v0)
    MEM_H(0X95C, ctx->r2) = ctx->r25;
    func_80059898(rdram, ctx);
        goto after_1;
    // 0x803F3D80: sh          $t9, 0x95C($v0)
    MEM_H(0X95C, ctx->r2) = ctx->r25;
    after_1:
    // 0x803F3D84: lw          $t1, 0xC8($s0)
    ctx->r9 = MEM_W(ctx->r16, 0XC8);
    // 0x803F3D88: addiu       $t0, $v0, 0xF
    ctx->r8 = ADD32(ctx->r2, 0XF);
    // 0x803F3D8C: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
    // 0x803F3D90: jal         0x80058054
    // 0x803F3D94: sh          $t0, 0x962($t1)
    MEM_H(0X962, ctx->r9) = ctx->r8;
    func_80058054(rdram, ctx);
        goto after_2;
    // 0x803F3D94: sh          $t0, 0x962($t1)
    MEM_H(0X962, ctx->r9) = ctx->r8;
    after_2:
    // 0x803F3D98: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x803F3D9C: lwc1        $f6, 0x20($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X20);
    // 0x803F3DA0: lui         $at, 0x803F
    ctx->r1 = S32(0X803F << 16);
    // 0x803F3DA4: c.lt.s      $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f4.fl < ctx->f6.fl;
    // 0x803F3DA8: nop

    // 0x803F3DAC: bc1f        L_803F3E00
    if (!c1cs) {
        // 0x803F3DB0: nop
    
            goto L_803F3E00;
    }
    // 0x803F3DB0: nop

    // 0x803F3DB4: lui         $at, 0x803F
    ctx->r1 = S32(0X803F << 16);
    // 0x803F3DB8: lwc1        $f8, 0xBC($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0XBC);
    // 0x803F3DBC: lwc1        $f17, 0x7CC0($at)
    ctx->f_odd[(17 - 1) * 2] = MEM_W(ctx->r1, 0X7CC0);
    // 0x803F3DC0: lwc1        $f16, 0x7CC4($at)
    ctx->f16.u32l = MEM_W(ctx->r1, 0X7CC4);
    // 0x803F3DC4: cvt.d.s     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f10.d = CVT_D_S(ctx->f8.fl);
    // 0x803F3DC8: add.d       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f16.d); 
    ctx->f18.d = ctx->f10.d + ctx->f16.d;
    // 0x803F3DCC: lw          $t2, 0xC8($s0)
    ctx->r10 = MEM_W(ctx->r16, 0XC8);
    // 0x803F3DD0: cvt.s.d     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.d); 
    ctx->f4.fl = CVT_S_D(ctx->f18.d);
    // 0x803F3DD4: lui         $at, 0x803F
    ctx->r1 = S32(0X803F << 16);
    // 0x803F3DD8: swc1        $f4, 0x970($t2)
    MEM_W(0X970, ctx->r10) = ctx->f4.u32l;
    // 0x803F3DDC: lwc1        $f8, 0x7CCC($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X7CCC);
    // 0x803F3DE0: lwc1        $f9, 0x7CC8($at)
    ctx->f_odd[(9 - 1) * 2] = MEM_W(ctx->r1, 0X7CC8);
    // 0x803F3DE4: cvt.d.s     $f6, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f6.d = CVT_D_S(ctx->f0.fl);
    // 0x803F3DE8: add.d       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f8.d); 
    ctx->f10.d = ctx->f6.d + ctx->f8.d;
    // 0x803F3DEC: lwc1        $f18, 0xBC($s0)
    ctx->f18.u32l = MEM_W(ctx->r16, 0XBC);
    // 0x803F3DF0: cvt.s.d     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f16.fl = CVT_S_D(ctx->f10.d);
    // 0x803F3DF4: sub.s       $f4, $f18, $f16
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f4.fl = ctx->f18.fl - ctx->f16.fl;
    // 0x803F3DF8: b           L_803F3E44
    // 0x803F3DFC: swc1        $f4, 0xBC($s0)
    MEM_W(0XBC, ctx->r16) = ctx->f4.u32l;
        goto L_803F3E44;
    // 0x803F3DFC: swc1        $f4, 0xBC($s0)
    MEM_W(0XBC, ctx->r16) = ctx->f4.u32l;
L_803F3E00:
    // 0x803F3E00: lwc1        $f6, 0xBC($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0XBC);
    // 0x803F3E04: lwc1        $f11, 0x7CD0($at)
    ctx->f_odd[(11 - 1) * 2] = MEM_W(ctx->r1, 0X7CD0);
    // 0x803F3E08: lwc1        $f10, 0x7CD4($at)
    ctx->f10.u32l = MEM_W(ctx->r1, 0X7CD4);
    // 0x803F3E0C: cvt.d.s     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f8.d = CVT_D_S(ctx->f6.fl);
    // 0x803F3E10: sub.d       $f18, $f8, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f10.d); 
    ctx->f18.d = ctx->f8.d - ctx->f10.d;
    // 0x803F3E14: lw          $t3, 0xC8($s0)
    ctx->r11 = MEM_W(ctx->r16, 0XC8);
    // 0x803F3E18: cvt.s.d     $f16, $f18
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.d); 
    ctx->f16.fl = CVT_S_D(ctx->f18.d);
    // 0x803F3E1C: lui         $at, 0x803F
    ctx->r1 = S32(0X803F << 16);
    // 0x803F3E20: swc1        $f16, 0x970($t3)
    MEM_W(0X970, ctx->r11) = ctx->f16.u32l;
    // 0x803F3E24: lwc1        $f6, 0x7CDC($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X7CDC);
    // 0x803F3E28: lwc1        $f7, 0x7CD8($at)
    ctx->f_odd[(7 - 1) * 2] = MEM_W(ctx->r1, 0X7CD8);
    // 0x803F3E2C: cvt.d.s     $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f4.d = CVT_D_S(ctx->f0.fl);
    // 0x803F3E30: add.d       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f6.d); 
    ctx->f8.d = ctx->f4.d + ctx->f6.d;
    // 0x803F3E34: lwc1        $f18, 0xBC($s0)
    ctx->f18.u32l = MEM_W(ctx->r16, 0XBC);
    // 0x803F3E38: cvt.s.d     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.d); 
    ctx->f10.fl = CVT_S_D(ctx->f8.d);
    // 0x803F3E3C: add.s       $f16, $f18, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f18.fl + ctx->f10.fl;
    // 0x803F3E40: swc1        $f16, 0xBC($s0)
    MEM_W(0XBC, ctx->r16) = ctx->f16.u32l;
L_803F3E44:
    // 0x803F3E44: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x803F3E48: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x803F3E4C: jr          $ra
    // 0x803F3E50: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x803F3E50: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void ovl_803F0000_menu_func_803F3E54(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803F3E54: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x803F3E58: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x803F3E5C: lw          $t6, 0xC8($a0)
    ctx->r14 = MEM_W(ctx->r4, 0XC8);
    // 0x803F3E60: or          $a1, $a0, $zero
    ctx->r5 = ctx->r4 | 0;
    // 0x803F3E64: lhu         $t7, 0x8($t6)
    ctx->r15 = MEM_HU(ctx->r14, 0X8);
    // 0x803F3E68: lui         $at, 0x803F
    ctx->r1 = S32(0X803F << 16);
    // 0x803F3E6C: andi        $t8, $t7, 0x1
    ctx->r24 = ctx->r15 & 0X1;
    // 0x803F3E70: beq         $t8, $zero, L_803F3E88
    if (ctx->r24 == 0) {
        // 0x803F3E74: addiu       $a0, $zero, 0xA
        ctx->r4 = ADD32(0, 0XA);
            goto L_803F3E88;
    }
    // 0x803F3E74: addiu       $a0, $zero, 0xA
    ctx->r4 = ADD32(0, 0XA);
    // 0x803F3E78: mtc1        $zero, $f5
    ctx->f_odd[(5 - 1) * 2] = 0;
    // 0x803F3E7C: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x803F3E80: b           L_803F3E98
    // 0x803F3E84: cvt.s.d     $f12, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.d); 
    ctx->f12.fl = CVT_S_D(ctx->f4.d);
        goto L_803F3E98;
    // 0x803F3E84: cvt.s.d     $f12, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.d); 
    ctx->f12.fl = CVT_S_D(ctx->f4.d);
L_803F3E88:
    // 0x803F3E88: lwc1        $f7, 0x7CE0($at)
    ctx->f_odd[(7 - 1) * 2] = MEM_W(ctx->r1, 0X7CE0);
    // 0x803F3E8C: lwc1        $f6, 0x7CE4($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X7CE4);
    // 0x803F3E90: nop

    // 0x803F3E94: cvt.s.d     $f12, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.d); 
    ctx->f12.fl = CVT_S_D(ctx->f6.d);
L_803F3E98:
    // 0x803F3E98: sw          $a1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r5;
    // 0x803F3E9C: jal         0x80058054
    // 0x803F3EA0: swc1        $f12, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f12.u32l;
    func_80058054(rdram, ctx);
        goto after_0;
    // 0x803F3EA0: swc1        $f12, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f12.u32l;
    after_0:
    // 0x803F3EA4: lw          $a1, 0x20($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X20);
    // 0x803F3EA8: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x803F3EAC: lwc1        $f10, 0x44($a1)
    ctx->f10.u32l = MEM_W(ctx->r5, 0X44);
    // 0x803F3EB0: lwc1        $f16, 0x4C($a1)
    ctx->f16.u32l = MEM_W(ctx->r5, 0X4C);
    // 0x803F3EB4: lwc1        $f12, 0x1C($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x803F3EB8: mul.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = MUL_S(ctx->f10.fl, ctx->f16.fl);
    // 0x803F3EBC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x803F3EC0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x803F3EC4: c.lt.s      $f8, $f18
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f8.fl < ctx->f18.fl;
    // 0x803F3EC8: nop

    // 0x803F3ECC: bc1f        L_803F3EDC
    if (!c1cs) {
        // 0x803F3ED0: nop
    
            goto L_803F3EDC;
    }
    // 0x803F3ED0: nop

    // 0x803F3ED4: b           L_803F3EE0
    // 0x803F3ED8: neg.s       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = -ctx->f0.fl;
        goto L_803F3EE0;
    // 0x803F3ED8: neg.s       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = -ctx->f0.fl;
L_803F3EDC:
    // 0x803F3EDC: mov.s       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.fl = ctx->f0.fl;
L_803F3EE0:
    // 0x803F3EE0: jr          $ra
    // 0x803F3EE4: add.s       $f0, $f2, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f0.fl = ctx->f2.fl + ctx->f12.fl;
    return;
    // 0x803F3EE4: add.s       $f0, $f2, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f0.fl = ctx->f2.fl + ctx->f12.fl;
;}
RECOMP_FUNC void ovl_803F0000_menu_func_803F3EE8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803F3EE8: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x803F3EEC: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x803F3EF0: sw          $a0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r4;
    // 0x803F3EF4: sw          $a1, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r5;
    // 0x803F3EF8: sw          $a2, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r6;
    // 0x803F3EFC: lw          $t7, 0xC8($a0)
    ctx->r15 = MEM_W(ctx->r4, 0XC8);
    // 0x803F3F00: addiu       $t9, $sp, 0x34
    ctx->r25 = ADD32(ctx->r29, 0X34);
    // 0x803F3F04: lw          $v1, 0x24($t7)
    ctx->r3 = MEM_W(ctx->r15, 0X24);
    // 0x803F3F08: mtc1        $zero, $f14
    ctx->f14.u32l = 0;
    // 0x803F3F0C: lw          $v0, 0x18($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X18);
    // 0x803F3F10: lh          $t8, 0x8B8($v1)
    ctx->r24 = MEM_H(ctx->r3, 0X8B8);
    // 0x803F3F14: lw          $a2, 0x4C($v0)
    ctx->r6 = MEM_W(ctx->r2, 0X4C);
    // 0x803F3F18: mtc1        $t8, $f4
    ctx->f4.u32l = ctx->r24;
    // 0x803F3F1C: lw          $a3, 0x44($v0)
    ctx->r7 = MEM_W(ctx->r2, 0X44);
    // 0x803F3F20: sw          $t9, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r25;
    // 0x803F3F24: jal         0x80272B1C
    // 0x803F3F28: cvt.s.w     $f12, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    ctx->f12.fl = CVT_S_W(ctx->f4.u32l);
    LOOKUP_FUNC(0x80272B1C)(rdram, ctx);
        goto after_0;
    // 0x803F3F28: cvt.s.w     $f12, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    ctx->f12.fl = CVT_S_W(ctx->f4.u32l);
    after_0:
    // 0x803F3F2C: lw          $t0, 0x40($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X40);
    // 0x803F3F30: mtc1        $zero, $f14
    ctx->f14.u32l = 0;
    // 0x803F3F34: lw          $t1, 0xC8($t0)
    ctx->r9 = MEM_W(ctx->r8, 0XC8);
    // 0x803F3F38: lw          $a2, 0x44($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X44);
    // 0x803F3F3C: lw          $t2, 0x24($t1)
    ctx->r10 = MEM_W(ctx->r9, 0X24);
    // 0x803F3F40: lw          $a3, 0x48($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X48);
    // 0x803F3F44: lh          $t3, 0x8B8($t2)
    ctx->r11 = MEM_H(ctx->r10, 0X8B8);
    // 0x803F3F48: addiu       $t4, $sp, 0x2C
    ctx->r12 = ADD32(ctx->r29, 0X2C);
    // 0x803F3F4C: mtc1        $t3, $f6
    ctx->f6.u32l = ctx->r11;
    // 0x803F3F50: sw          $t4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r12;
    // 0x803F3F54: jal         0x80272B1C
    // 0x803F3F58: cvt.s.w     $f12, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    ctx->f12.fl = CVT_S_W(ctx->f6.u32l);
    LOOKUP_FUNC(0x80272B1C)(rdram, ctx);
        goto after_1;
    // 0x803F3F58: cvt.s.w     $f12, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    ctx->f12.fl = CVT_S_W(ctx->f6.u32l);
    after_1:
    // 0x803F3F5C: lwc1        $f12, 0x34($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X34);
    // 0x803F3F60: lwc1        $f14, 0x2C($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x803F3F64: jal         0x8027924C
    // 0x803F3F68: nop

    LOOKUP_FUNC(0x8027924C)(rdram, ctx);
        goto after_2;
    // 0x803F3F68: nop

    after_2:
    // 0x803F3F6C: lw          $t5, 0x40($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X40);
    // 0x803F3F70: nop

    // 0x803F3F74: lw          $v0, 0xC8($t5)
    ctx->r2 = MEM_W(ctx->r13, 0XC8);
    // 0x803F3F78: nop

    // 0x803F3F7C: lhu         $t6, 0x8($v0)
    ctx->r14 = MEM_HU(ctx->r2, 0X8);
    // 0x803F3F80: nop

    // 0x803F3F84: andi        $t7, $t6, 0x1
    ctx->r15 = ctx->r14 & 0X1;
    // 0x803F3F88: beq         $t7, $zero, L_803F3FD0
    if (ctx->r15 == 0) {
        // 0x803F3F8C: nop
    
            goto L_803F3FD0;
    }
    // 0x803F3F8C: nop

    // 0x803F3F90: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x803F3F94: nop

    // 0x803F3F98: c.lt.s      $f8, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f8.fl < ctx->f0.fl;
    // 0x803F3F9C: nop

    // 0x803F3FA0: bc1f        L_803F3FBC
    if (!c1cs) {
        // 0x803F3FA4: nop
    
            goto L_803F3FBC;
    }
    // 0x803F3FA4: nop

    // 0x803F3FA8: lhu         $t8, 0x95C($v0)
    ctx->r24 = MEM_HU(ctx->r2, 0X95C);
    // 0x803F3FAC: nop

    // 0x803F3FB0: ori         $t9, $t8, 0x40
    ctx->r25 = ctx->r24 | 0X40;
    // 0x803F3FB4: b           L_803F400C
    // 0x803F3FB8: sh          $t9, 0x95C($v0)
    MEM_H(0X95C, ctx->r2) = ctx->r25;
        goto L_803F400C;
    // 0x803F3FB8: sh          $t9, 0x95C($v0)
    MEM_H(0X95C, ctx->r2) = ctx->r25;
L_803F3FBC:
    // 0x803F3FBC: lhu         $t0, 0x95C($v0)
    ctx->r8 = MEM_HU(ctx->r2, 0X95C);
    // 0x803F3FC0: nop

    // 0x803F3FC4: ori         $t1, $t0, 0x80
    ctx->r9 = ctx->r8 | 0X80;
    // 0x803F3FC8: b           L_803F400C
    // 0x803F3FCC: sh          $t1, 0x95C($v0)
    MEM_H(0X95C, ctx->r2) = ctx->r9;
        goto L_803F400C;
    // 0x803F3FCC: sh          $t1, 0x95C($v0)
    MEM_H(0X95C, ctx->r2) = ctx->r9;
L_803F3FD0:
    // 0x803F3FD0: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x803F3FD4: nop

    // 0x803F3FD8: c.lt.s      $f10, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f10.fl < ctx->f0.fl;
    // 0x803F3FDC: nop

    // 0x803F3FE0: bc1f        L_803F3FFC
    if (!c1cs) {
        // 0x803F3FE4: nop
    
            goto L_803F3FFC;
    }
    // 0x803F3FE4: nop

    // 0x803F3FE8: lhu         $t2, 0x95C($v0)
    ctx->r10 = MEM_HU(ctx->r2, 0X95C);
    // 0x803F3FEC: nop

    // 0x803F3FF0: ori         $t3, $t2, 0x80
    ctx->r11 = ctx->r10 | 0X80;
    // 0x803F3FF4: b           L_803F400C
    // 0x803F3FF8: sh          $t3, 0x95C($v0)
    MEM_H(0X95C, ctx->r2) = ctx->r11;
        goto L_803F400C;
    // 0x803F3FF8: sh          $t3, 0x95C($v0)
    MEM_H(0X95C, ctx->r2) = ctx->r11;
L_803F3FFC:
    // 0x803F3FFC: lhu         $t4, 0x95C($v0)
    ctx->r12 = MEM_HU(ctx->r2, 0X95C);
    // 0x803F4000: nop

    // 0x803F4004: ori         $t5, $t4, 0x40
    ctx->r13 = ctx->r12 | 0X40;
    // 0x803F4008: sh          $t5, 0x95C($v0)
    MEM_H(0X95C, ctx->r2) = ctx->r13;
L_803F400C:
    // 0x803F400C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x803F4010: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    // 0x803F4014: jr          $ra
    // 0x803F4018: nop

    return;
    // 0x803F4018: nop

;}
RECOMP_FUNC void ovl_803F0000_menu_func_803F401C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803F401C: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x803F4020: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x803F4024: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x803F4028: lw          $v0, 0xC8($a0)
    ctx->r2 = MEM_W(ctx->r4, 0XC8);
    // 0x803F402C: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x803F4030: lhu         $t6, 0x95C($v0)
    ctx->r14 = MEM_HU(ctx->r2, 0X95C);
    // 0x803F4034: addiu       $a3, $sp, 0x28
    ctx->r7 = ADD32(ctx->r29, 0X28);
    // 0x803F4038: andi        $t7, $t6, 0xFFFE
    ctx->r15 = ctx->r14 & 0XFFFE;
    // 0x803F403C: sh          $t7, 0x95C($v0)
    MEM_H(0X95C, ctx->r2) = ctx->r15;
    // 0x803F4040: lw          $v0, 0xC8($a0)
    ctx->r2 = MEM_W(ctx->r4, 0XC8);
    // 0x803F4044: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x803F4048: lhu         $t8, 0x95C($v0)
    ctx->r24 = MEM_HU(ctx->r2, 0X95C);
    // 0x803F404C: nop

    // 0x803F4050: ori         $t9, $t8, 0x2
    ctx->r25 = ctx->r24 | 0X2;
    // 0x803F4054: sh          $t9, 0x95C($v0)
    MEM_H(0X95C, ctx->r2) = ctx->r25;
    // 0x803F4058: lhu         $t0, 0x12($a0)
    ctx->r8 = MEM_HU(ctx->r4, 0X12);
    // 0x803F405C: nop

    // 0x803F4060: ori         $t1, $t0, 0x4
    ctx->r9 = ctx->r8 | 0X4;
    // 0x803F4064: sh          $t1, 0x12($a0)
    MEM_H(0X12, ctx->r4) = ctx->r9;
    // 0x803F4068: lw          $t2, 0xC8($s0)
    ctx->r10 = MEM_W(ctx->r16, 0XC8);
    // 0x803F406C: nop

    // 0x803F4070: lw          $t3, 0x24($t2)
    ctx->r11 = MEM_W(ctx->r10, 0X24);
    // 0x803F4074: nop

    // 0x803F4078: lh          $t4, 0x8BA($t3)
    ctx->r12 = MEM_H(ctx->r11, 0X8BA);
    // 0x803F407C: nop

    // 0x803F4080: mtc1        $t4, $f4
    ctx->f4.u32l = ctx->r12;
    // 0x803F4084: nop

    // 0x803F4088: cvt.s.w     $f4, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    ctx->f4.fl = CVT_S_W(ctx->f4.u32l);
    // 0x803F408C: mfc1        $a1, $f4
    ctx->r5 = (int32_t)ctx->f4.u32l;
    // 0x803F4090: jal         0x80272B98
    // 0x803F4094: nop

    LOOKUP_FUNC(0x80272B98)(rdram, ctx);
        goto after_0;
    // 0x803F4094: nop

    after_0:
    // 0x803F4098: lwc1        $f6, 0x28($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X28);
    // 0x803F409C: addiu       $a0, $zero, 0x3
    ctx->r4 = ADD32(0, 0X3);
    // 0x803F40A0: jal         0x80059898
    // 0x803F40A4: swc1        $f6, 0xBC($s0)
    MEM_W(0XBC, ctx->r16) = ctx->f6.u32l;
    func_80059898(rdram, ctx);
        goto after_1;
    // 0x803F40A4: swc1        $f6, 0xBC($s0)
    MEM_W(0XBC, ctx->r16) = ctx->f6.u32l;
    after_1:
    // 0x803F40A8: lw          $t6, 0xC8($s0)
    ctx->r14 = MEM_W(ctx->r16, 0XC8);
    // 0x803F40AC: addiu       $t5, $v0, 0x4
    ctx->r13 = ADD32(ctx->r2, 0X4);
    // 0x803F40B0: sh          $t5, 0x960($t6)
    MEM_H(0X960, ctx->r14) = ctx->r13;
    // 0x803F40B4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x803F40B8: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x803F40BC: jr          $ra
    // 0x803F40C0: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x803F40C0: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void ovl_803F0000_menu_func_803F40C4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803F40C4: lw          $t6, 0xC8($a0)
    ctx->r14 = MEM_W(ctx->r4, 0XC8);
    // 0x803F40C8: lui         $t8, 0x803F
    ctx->r24 = S32(0X803F << 16);
    // 0x803F40CC: lhu         $v0, 0x6($t6)
    ctx->r2 = MEM_HU(ctx->r14, 0X6);
    // 0x803F40D0: addiu       $t8, $t8, 0x7E08
    ctx->r24 = ADD32(ctx->r24, 0X7E08);
    // 0x803F40D4: sll         $t7, $v0, 2
    ctx->r15 = S32(ctx->r2 << 2);
    // 0x803F40D8: addu        $v1, $t7, $t8
    ctx->r3 = ADD32(ctx->r15, ctx->r24);
    // 0x803F40DC: lbu         $t9, 0x2($v1)
    ctx->r25 = MEM_BU(ctx->r3, 0X2);
    // 0x803F40E0: lbu         $t0, 0x1($v1)
    ctx->r8 = MEM_BU(ctx->r3, 0X1);
    // 0x803F40E4: lbu         $t1, 0x0($v1)
    ctx->r9 = MEM_BU(ctx->r3, 0X0);
    // 0x803F40E8: sb          $t9, 0x3($v1)
    MEM_B(0X3, ctx->r3) = ctx->r25;
    // 0x803F40EC: sb          $t0, 0x2($v1)
    MEM_B(0X2, ctx->r3) = ctx->r8;
    // 0x803F40F0: sb          $t1, 0x1($v1)
    MEM_B(0X1, ctx->r3) = ctx->r9;
    // 0x803F40F4: lw          $t2, 0xC8($a0)
    ctx->r10 = MEM_W(ctx->r4, 0XC8);
    // 0x803F40F8: nop

    // 0x803F40FC: lw          $t3, 0x958($t2)
    ctx->r11 = MEM_W(ctx->r10, 0X958);
    // 0x803F4100: nop

    // 0x803F4104: lhu         $t4, 0x1A($t3)
    ctx->r12 = MEM_HU(ctx->r11, 0X1A);
    // 0x803F4108: jr          $ra
    // 0x803F410C: sb          $t4, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r12;
    return;
    // 0x803F410C: sb          $t4, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r12;
;}
RECOMP_FUNC void ovl_803F0000_menu_func_803F4110(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803F4110: lw          $t6, 0xC8($a0)
    ctx->r14 = MEM_W(ctx->r4, 0XC8);
    // 0x803F4114: lui         $t8, 0x803F
    ctx->r24 = S32(0X803F << 16);
    // 0x803F4118: lhu         $v0, 0x6($t6)
    ctx->r2 = MEM_HU(ctx->r14, 0X6);
    // 0x803F411C: addiu       $t8, $t8, 0x7E08
    ctx->r24 = ADD32(ctx->r24, 0X7E08);
    // 0x803F4120: sll         $t7, $v0, 2
    ctx->r15 = S32(ctx->r2 << 2);
    // 0x803F4124: addu        $v1, $t7, $t8
    ctx->r3 = ADD32(ctx->r15, ctx->r24);
    // 0x803F4128: lbu         $t9, 0x3($v1)
    ctx->r25 = MEM_BU(ctx->r3, 0X3);
    // 0x803F412C: lbu         $t0, 0x1($v1)
    ctx->r8 = MEM_BU(ctx->r3, 0X1);
    // 0x803F4130: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x803F4134: bne         $t9, $t0, L_803F4158
    if (ctx->r25 != ctx->r8) {
        // 0x803F4138: nop
    
            goto L_803F4158;
    }
    // 0x803F4138: nop

    // 0x803F413C: lbu         $t1, 0x2($v1)
    ctx->r9 = MEM_BU(ctx->r3, 0X2);
    // 0x803F4140: lbu         $t2, 0x0($v1)
    ctx->r10 = MEM_BU(ctx->r3, 0X0);
    // 0x803F4144: nop

    // 0x803F4148: bne         $t1, $t2, L_803F4158
    if (ctx->r9 != ctx->r10) {
        // 0x803F414C: nop
    
            goto L_803F4158;
    }
    // 0x803F414C: nop

    // 0x803F4150: jr          $ra
    // 0x803F4154: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    return;
    // 0x803F4154: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_803F4158:
    // 0x803F4158: jr          $ra
    // 0x803F415C: nop

    return;
    // 0x803F415C: nop

;}
RECOMP_FUNC void ovl_803F0000_menu_func_803F4160(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803F4160: addiu       $sp, $sp, -0xD0
    ctx->r29 = ADD32(ctx->r29, -0XD0);
    // 0x803F4164: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x803F4168: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x803F416C: sw          $a1, 0xD4($sp)
    MEM_W(0XD4, ctx->r29) = ctx->r5;
    // 0x803F4170: sh          $zero, 0x8A($sp)
    MEM_H(0X8A, ctx->r29) = 0;
    // 0x803F4174: lw          $v0, 0xC8($a0)
    ctx->r2 = MEM_W(ctx->r4, 0XC8);
    // 0x803F4178: andi        $t6, $a1, 0xFFFF
    ctx->r14 = ctx->r5 & 0XFFFF;
    // 0x803F417C: lw          $v1, 0x24($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X24);
    // 0x803F4180: addiu       $t0, $t6, -0x1
    ctx->r8 = ADD32(ctx->r14, -0X1);
    // 0x803F4184: lhu         $t7, 0x318($v1)
    ctx->r15 = MEM_HU(ctx->r3, 0X318);
    // 0x803F4188: lw          $t9, 0x18($v1)
    ctx->r25 = MEM_W(ctx->r3, 0X18);
    // 0x803F418C: sll         $t8, $t7, 5
    ctx->r24 = S32(ctx->r15 << 5);
    // 0x803F4190: subu        $t8, $t8, $t7
    ctx->r24 = SUB32(ctx->r24, ctx->r15);
    // 0x803F4194: sll         $t8, $t8, 3
    ctx->r24 = S32(ctx->r24 << 3);
    // 0x803F4198: sltiu       $at, $t0, 0x1C
    ctx->r1 = ctx->r8 < 0X1C ? 1 : 0;
    // 0x803F419C: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x803F41A0: beq         $at, $zero, L_803F4D60
    if (ctx->r1 == 0) {
        // 0x803F41A4: addu        $a2, $t8, $t9
        ctx->r6 = ADD32(ctx->r24, ctx->r25);
            goto L_803F4D60;
    }
    // 0x803F41A4: addu        $a2, $t8, $t9
    ctx->r6 = ADD32(ctx->r24, ctx->r25);
    // 0x803F41A8: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x803F41AC: lui         $at, 0x803F
    ctx->r1 = S32(0X803F << 16);
    // 0x803F41B0: addu        $at, $at, $t0
    gpr jr_addend_803F41BC = ctx->r8;
    ctx->r1 = ADD32(ctx->r1, ctx->r8);
    // 0x803F41B4: lw          $t0, 0x7CE8($at)
    ctx->r8 = ADD32(ctx->r1, 0X7CE8);
    // 0x803F41B8: nop

    // 0x803F41BC: jr          $t0
    // 0x803F41C0: nop

    switch (jr_addend_803F41BC >> 2) {
        case 0: goto L_803F4590; break;
        case 1: goto L_803F464C; break;
        case 2: goto L_803F46F4; break;
        case 3: goto L_803F4BF0; break;
        case 4: goto L_803F4CA8; break;
        case 5: goto L_803F4A10; break;
        case 6: goto L_803F4D30; break;
        case 7: goto L_803F4D74; break;
        case 8: goto L_803F4484; break;
        case 9: goto L_803F4D40; break;
        case 10: goto L_803F436C; break;
        case 11: goto L_803F47FC; break;
        case 12: goto L_803F4D20; break;
        case 13: goto L_803F49E8; break;
        case 14: goto L_803F49B0; break;
        case 15: goto L_803F4928; break;
        case 16: goto L_803F41F8; break;
        case 17: goto L_803F45EC; break;
        case 18: goto L_803F4524; break;
        case 19: goto L_803F4D74; break;
        case 20: goto L_803F41D4; break;
        case 21: goto L_803F41E4; break;
        case 22: goto L_803F4D60; break;
        case 23: goto L_803F46F4; break;
        case 24: goto L_803F467C; break;
        case 25: goto L_803F4784; break;
        case 26: goto L_803F4B58; break;
        case 27: goto L_803F41C4; break;
        default: switch_error(__func__, 0x803F41BC, 0x803F7CE8);
    }
    // 0x803F41C0: nop

L_803F41C4:
    // 0x803F41C4: jal         0x803F2178
    // 0x803F41C8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_803F0000_menu_func_803F2178(rdram, ctx);
        goto after_0;
    // 0x803F41C8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_0:
    // 0x803F41CC: b           L_803F4D78
    // 0x803F41D0: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_803F4D78;
    // 0x803F41D0: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_803F41D4:
    // 0x803F41D4: jal         0x803F1DD4
    // 0x803F41D8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_803F0000_menu_func_803F1DD4(rdram, ctx);
        goto after_1;
    // 0x803F41D8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
    // 0x803F41DC: b           L_803F4D78
    // 0x803F41E0: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_803F4D78;
    // 0x803F41E0: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_803F41E4:
    // 0x803F41E4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x803F41E8: jal         0x803F3720
    // 0x803F41EC: addiu       $a1, $zero, 0x158
    ctx->r5 = ADD32(0, 0X158);
    ovl_803F0000_menu_func_803F3720(rdram, ctx);
        goto after_2;
    // 0x803F41EC: addiu       $a1, $zero, 0x158
    ctx->r5 = ADD32(0, 0X158);
    after_2:
    // 0x803F41F0: b           L_803F4D78
    // 0x803F41F4: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_803F4D78;
    // 0x803F41F4: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_803F41F8:
    // 0x803F41F8: lhu         $t1, 0x95C($v0)
    ctx->r9 = MEM_HU(ctx->r2, 0X95C);
    // 0x803F41FC: addiu       $t5, $zero, 0x1
    ctx->r13 = ADD32(0, 0X1);
    // 0x803F4200: andi        $t2, $t1, 0xFFFE
    ctx->r10 = ctx->r9 & 0XFFFE;
    // 0x803F4204: sh          $t2, 0x95C($v0)
    MEM_H(0X95C, ctx->r2) = ctx->r10;
    // 0x803F4208: lw          $v0, 0xC8($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XC8);
    // 0x803F420C: mtc1        $zero, $f14
    ctx->f14.u32l = 0;
    // 0x803F4210: lhu         $t3, 0x95C($v0)
    ctx->r11 = MEM_HU(ctx->r2, 0X95C);
    // 0x803F4214: addiu       $a3, $sp, 0xB0
    ctx->r7 = ADD32(ctx->r29, 0XB0);
    // 0x803F4218: ori         $t4, $t3, 0x10
    ctx->r12 = ctx->r11 | 0X10;
    // 0x803F421C: sh          $t4, 0x95C($v0)
    MEM_H(0X95C, ctx->r2) = ctx->r12;
    // 0x803F4220: lw          $v0, 0xC8($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XC8);
    // 0x803F4224: nop

    // 0x803F4228: lw          $v1, 0x958($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X958);
    // 0x803F422C: sh          $t5, 0x8A($sp)
    MEM_H(0X8A, ctx->r29) = ctx->r13;
    // 0x803F4230: lhu         $t6, 0x12($s0)
    ctx->r14 = MEM_HU(ctx->r16, 0X12);
    // 0x803F4234: lwc1        $f4, 0x4C($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X4C);
    // 0x803F4238: ori         $t7, $t6, 0x4
    ctx->r15 = ctx->r14 | 0X4;
    // 0x803F423C: sh          $t7, 0x12($s0)
    MEM_H(0X12, ctx->r16) = ctx->r15;
    // 0x803F4240: lhu         $a0, 0x8($v0)
    ctx->r4 = MEM_HU(ctx->r2, 0X8);
    // 0x803F4244: lwc1        $f12, 0x4C($v1)
    ctx->f12.u32l = MEM_W(ctx->r3, 0X4C);
    // 0x803F4248: andi        $t8, $a0, 0x1
    ctx->r24 = ctx->r4 & 0X1;
    // 0x803F424C: or          $a0, $t8, $zero
    ctx->r4 = ctx->r24 | 0;
    // 0x803F4250: bne         $t8, $zero, L_803F425C
    if (ctx->r24 != 0) {
        // 0x803F4254: sub.s       $f0, $f12, $f4
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f0.fl = ctx->f12.fl - ctx->f4.fl;
            goto L_803F425C;
    }
    // 0x803F4254: sub.s       $f0, $f12, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f0.fl = ctx->f12.fl - ctx->f4.fl;
    // 0x803F4258: neg.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = -ctx->f0.fl;
L_803F425C:
    // 0x803F425C: c.lt.s      $f14, $f0
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f14.fl < ctx->f0.fl;
    // 0x803F4260: nop

    // 0x803F4264: bc1f        L_803F42D4
    if (!c1cs) {
        // 0x803F4268: nop
    
            goto L_803F42D4;
    }
    // 0x803F4268: nop

    // 0x803F426C: beq         $a0, $zero, L_803F427C
    if (ctx->r4 == 0) {
        // 0x803F4270: addiu       $a3, $sp, 0xB0
        ctx->r7 = ADD32(ctx->r29, 0XB0);
            goto L_803F427C;
    }
    // 0x803F4270: addiu       $a3, $sp, 0xB0
    ctx->r7 = ADD32(ctx->r29, 0XB0);
    // 0x803F4274: b           L_803F4280
    // 0x803F4278: addiu       $v0, $zero, 0x50
    ctx->r2 = ADD32(0, 0X50);
        goto L_803F4280;
    // 0x803F4278: addiu       $v0, $zero, 0x50
    ctx->r2 = ADD32(0, 0X50);
L_803F427C:
    // 0x803F427C: addiu       $v0, $zero, -0x50
    ctx->r2 = ADD32(0, -0X50);
L_803F4280:
    // 0x803F4280: mtc1        $v0, $f6
    ctx->f6.u32l = ctx->r2;
    // 0x803F4284: lwc1        $f10, 0x44($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X44);
    // 0x803F4288: cvt.s.w     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.fl = CVT_S_W(ctx->f6.u32l);
    // 0x803F428C: lui         $at, 0x437B
    ctx->r1 = S32(0X437B << 16);
    // 0x803F4290: c.lt.s      $f14, $f10
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f14.fl < ctx->f10.fl;
    // 0x803F4294: add.s       $f2, $f8, $f12
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f2.fl = ctx->f8.fl + ctx->f12.fl;
    // 0x803F4298: bc1f        L_803F42B0
    if (!c1cs) {
        // 0x803F429C: nop
    
            goto L_803F42B0;
    }
    // 0x803F429C: nop

    // 0x803F42A0: lui         $at, 0xC37B
    ctx->r1 = S32(0XC37B << 16);
    // 0x803F42A4: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x803F42A8: b           L_803F42BC
    // 0x803F42AC: mfc1        $a1, $f2
    ctx->r5 = (int32_t)ctx->f2.u32l;
        goto L_803F42BC;
    // 0x803F42AC: mfc1        $a1, $f2
    ctx->r5 = (int32_t)ctx->f2.u32l;
L_803F42B0:
    // 0x803F42B0: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x803F42B4: nop

    // 0x803F42B8: mfc1        $a1, $f2
    ctx->r5 = (int32_t)ctx->f2.u32l;
L_803F42BC:
    // 0x803F42BC: mfc1        $a2, $f0
    ctx->r6 = (int32_t)ctx->f0.u32l;
    // 0x803F42C0: jal         0x80272B98
    // 0x803F42C4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    LOOKUP_FUNC(0x80272B98)(rdram, ctx);
        goto after_3;
    // 0x803F42C4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_3:
    // 0x803F42C8: lwc1        $f16, 0xB0($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0XB0);
    // 0x803F42CC: b           L_803F4338
    // 0x803F42D0: swc1        $f16, 0xBC($s0)
    MEM_W(0XBC, ctx->r16) = ctx->f16.u32l;
        goto L_803F4338;
    // 0x803F42D0: swc1        $f16, 0xBC($s0)
    MEM_W(0XBC, ctx->r16) = ctx->f16.u32l;
L_803F42D4:
    // 0x803F42D4: beq         $a0, $zero, L_803F42E4
    if (ctx->r4 == 0) {
        // 0x803F42D8: addiu       $v0, $zero, -0x64
        ctx->r2 = ADD32(0, -0X64);
            goto L_803F42E4;
    }
    // 0x803F42D8: addiu       $v0, $zero, -0x64
    ctx->r2 = ADD32(0, -0X64);
    // 0x803F42DC: b           L_803F42E4
    // 0x803F42E0: addiu       $v0, $zero, 0x64
    ctx->r2 = ADD32(0, 0X64);
        goto L_803F42E4;
    // 0x803F42E0: addiu       $v0, $zero, 0x64
    ctx->r2 = ADD32(0, 0X64);
L_803F42E4:
    // 0x803F42E4: mtc1        $v0, $f18
    ctx->f18.u32l = ctx->r2;
    // 0x803F42E8: lwc1        $f6, 0x44($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X44);
    // 0x803F42EC: cvt.s.w     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    ctx->f4.fl = CVT_S_W(ctx->f18.u32l);
    // 0x803F42F0: lui         $at, 0x437B
    ctx->r1 = S32(0X437B << 16);
    // 0x803F42F4: c.lt.s      $f14, $f6
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f14.fl < ctx->f6.fl;
    // 0x803F42F8: add.s       $f2, $f4, $f12
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f2.fl = ctx->f4.fl + ctx->f12.fl;
    // 0x803F42FC: bc1f        L_803F4314
    if (!c1cs) {
        // 0x803F4300: nop
    
            goto L_803F4314;
    }
    // 0x803F4300: nop

    // 0x803F4304: lui         $at, 0xC37B
    ctx->r1 = S32(0XC37B << 16);
    // 0x803F4308: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x803F430C: b           L_803F4320
    // 0x803F4310: mfc1        $a1, $f2
    ctx->r5 = (int32_t)ctx->f2.u32l;
        goto L_803F4320;
    // 0x803F4310: mfc1        $a1, $f2
    ctx->r5 = (int32_t)ctx->f2.u32l;
L_803F4314:
    // 0x803F4314: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x803F4318: nop

    // 0x803F431C: mfc1        $a1, $f2
    ctx->r5 = (int32_t)ctx->f2.u32l;
L_803F4320:
    // 0x803F4320: mfc1        $a2, $f0
    ctx->r6 = (int32_t)ctx->f0.u32l;
    // 0x803F4324: jal         0x80272B98
    // 0x803F4328: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    LOOKUP_FUNC(0x80272B98)(rdram, ctx);
        goto after_4;
    // 0x803F4328: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_4:
    // 0x803F432C: lwc1        $f8, 0xB0($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0XB0);
    // 0x803F4330: nop

    // 0x803F4334: swc1        $f8, 0xBC($s0)
    MEM_W(0XBC, ctx->r16) = ctx->f8.u32l;
L_803F4338:
    // 0x803F4338: lwc1        $f12, 0xB4($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0XB4);
    // 0x803F433C: lui         $a2, 0x800B
    ctx->r6 = S32(0X800B << 16);
    // 0x803F4340: lui         $a3, 0x800B
    ctx->r7 = S32(0X800B << 16);
    // 0x803F4344: addiu       $a3, $a3, -0x53AC
    ctx->r7 = ADD32(ctx->r7, -0X53AC);
    // 0x803F4348: addiu       $a2, $a2, -0x53C4
    ctx->r6 = ADD32(ctx->r6, -0X53C4);
    // 0x803F434C: jal         0x803F0000
    // 0x803F4350: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
    ovl_803F0000_menu_func_803F0000(rdram, ctx);
        goto after_5;
    // 0x803F4350: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
    after_5:
    // 0x803F4354: lw          $t9, 0xC8($s0)
    ctx->r25 = MEM_W(ctx->r16, 0XC8);
    // 0x803F4358: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x803F435C: jal         0x803F3D10
    // 0x803F4360: sh          $v0, 0x960($t9)
    MEM_H(0X960, ctx->r25) = ctx->r2;
    ovl_803F0000_menu_func_803F3D10(rdram, ctx);
        goto after_6;
    // 0x803F4360: sh          $v0, 0x960($t9)
    MEM_H(0X960, ctx->r25) = ctx->r2;
    after_6:
    // 0x803F4364: b           L_803F4D78
    // 0x803F4368: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_803F4D78;
    // 0x803F4368: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_803F436C:
    // 0x803F436C: lhu         $t0, 0x95C($v0)
    ctx->r8 = MEM_HU(ctx->r2, 0X95C);
    // 0x803F4370: addiu       $t3, $zero, 0x1
    ctx->r11 = ADD32(0, 0X1);
    // 0x803F4374: andi        $t1, $t0, 0xFFFE
    ctx->r9 = ctx->r8 & 0XFFFE;
    // 0x803F4378: sh          $t1, 0x95C($v0)
    MEM_H(0X95C, ctx->r2) = ctx->r9;
    // 0x803F437C: lw          $t2, 0xC8($s0)
    ctx->r10 = MEM_W(ctx->r16, 0XC8);
    // 0x803F4380: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x803F4384: lw          $v1, 0x958($t2)
    ctx->r3 = MEM_W(ctx->r10, 0X958);
    // 0x803F4388: sh          $t3, 0x8A($sp)
    MEM_H(0X8A, ctx->r29) = ctx->r11;
    // 0x803F438C: lhu         $t4, 0x12($s0)
    ctx->r12 = MEM_HU(ctx->r16, 0X12);
    // 0x803F4390: addiu       $a1, $zero, 0xC
    ctx->r5 = ADD32(0, 0XC);
    // 0x803F4394: ori         $t5, $t4, 0x4
    ctx->r13 = ctx->r12 | 0X4;
    // 0x803F4398: sh          $t5, 0x12($s0)
    MEM_H(0X12, ctx->r16) = ctx->r13;
    // 0x803F439C: sw          $zero, 0x9C($sp)
    MEM_W(0X9C, ctx->r29) = 0;
    // 0x803F43A0: jal         0x803F1990
    // 0x803F43A4: sw          $v1, 0xCC($sp)
    MEM_W(0XCC, ctx->r29) = ctx->r3;
    ovl_803F0000_menu_func_803F1990(rdram, ctx);
        goto after_7;
    // 0x803F43A4: sw          $v1, 0xCC($sp)
    MEM_W(0XCC, ctx->r29) = ctx->r3;
    after_7:
    // 0x803F43A8: lw          $v1, 0xCC($sp)
    ctx->r3 = MEM_W(ctx->r29, 0XCC);
    // 0x803F43AC: lw          $a3, 0x9C($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X9C);
    // 0x803F43B0: beq         $v0, $zero, L_803F43EC
    if (ctx->r2 == 0) {
        // 0x803F43B4: nop
    
            goto L_803F43EC;
    }
    // 0x803F43B4: nop

    // 0x803F43B8: lw          $v0, 0xC8($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XC8);
    // 0x803F43BC: addiu       $a3, $zero, -0x64
    ctx->r7 = ADD32(0, -0X64);
    // 0x803F43C0: lhu         $t6, 0x8($v0)
    ctx->r14 = MEM_HU(ctx->r2, 0X8);
    // 0x803F43C4: nop

    // 0x803F43C8: andi        $t7, $t6, 0x1
    ctx->r15 = ctx->r14 & 0X1;
    // 0x803F43CC: beq         $t7, $zero, L_803F43DC
    if (ctx->r15 == 0) {
        // 0x803F43D0: nop
    
            goto L_803F43DC;
    }
    // 0x803F43D0: nop

    // 0x803F43D4: b           L_803F43DC
    // 0x803F43D8: addiu       $a3, $zero, 0x64
    ctx->r7 = ADD32(0, 0X64);
        goto L_803F43DC;
    // 0x803F43D8: addiu       $a3, $zero, 0x64
    ctx->r7 = ADD32(0, 0X64);
L_803F43DC:
    // 0x803F43DC: lhu         $t8, 0x95C($v0)
    ctx->r24 = MEM_HU(ctx->r2, 0X95C);
    // 0x803F43E0: nop

    // 0x803F43E4: ori         $t9, $t8, 0x10
    ctx->r25 = ctx->r24 | 0X10;
    // 0x803F43E8: sh          $t9, 0x95C($v0)
    MEM_H(0X95C, ctx->r2) = ctx->r25;
L_803F43EC:
    // 0x803F43EC: mtc1        $a3, $f16
    ctx->f16.u32l = ctx->r7;
    // 0x803F43F0: lwc1        $f10, 0x4C($v1)
    ctx->f10.u32l = MEM_W(ctx->r3, 0X4C);
    // 0x803F43F4: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x803F43F8: sw          $v1, 0xCC($sp)
    MEM_W(0XCC, ctx->r29) = ctx->r3;
    // 0x803F43FC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x803F4400: add.s       $f4, $f10, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f10.fl + ctx->f18.fl;
    // 0x803F4404: addiu       $a2, $zero, 0x199
    ctx->r6 = ADD32(0, 0X199);
    // 0x803F4408: cfc1        $t0, $FpcCsr
    ctx->r8 = get_cop1_cs();
    // 0x803F440C: nop

    // 0x803F4410: ori         $at, $t0, 0x3
    ctx->r1 = ctx->r8 | 0X3;
    // 0x803F4414: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x803F4418: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x803F441C: nop

    // 0x803F4420: cvt.w.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = CVT_W_S(ctx->f4.fl);
    // 0x803F4424: mfc1        $a1, $f6
    ctx->r5 = (int32_t)ctx->f6.u32l;
    // 0x803F4428: ctc1        $t0, $FpcCsr
    set_cop1_cs(ctx->r8);
    // 0x803F442C: jal         0x803F3CCC
    // 0x803F4430: nop

    ovl_803F0000_menu_func_803F3CCC(rdram, ctx);
        goto after_8;
    // 0x803F4430: nop

    after_8:
    // 0x803F4434: mtc1        $v0, $f8
    ctx->f8.u32l = ctx->r2;
    // 0x803F4438: lw          $v1, 0xCC($sp)
    ctx->r3 = MEM_W(ctx->r29, 0XCC);
    // 0x803F443C: cvt.s.w     $f8, $f8
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 8);
    ctx->f8.fl = CVT_S_W(ctx->f8.u32l);
    // 0x803F4440: lw          $a2, 0x44($v1)
    ctx->r6 = MEM_W(ctx->r3, 0X44);
    // 0x803F4444: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x803F4448: mfc1        $a1, $f8
    ctx->r5 = (int32_t)ctx->f8.u32l;
    // 0x803F444C: jal         0x80272B98
    // 0x803F4450: addiu       $a3, $sp, 0xB0
    ctx->r7 = ADD32(ctx->r29, 0XB0);
    LOOKUP_FUNC(0x80272B98)(rdram, ctx);
        goto after_9;
    // 0x803F4450: addiu       $a3, $sp, 0xB0
    ctx->r7 = ADD32(ctx->r29, 0XB0);
    after_9:
    // 0x803F4454: lwc1        $f16, 0xB0($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0XB0);
    // 0x803F4458: lui         $a2, 0x800B
    ctx->r6 = S32(0X800B << 16);
    // 0x803F445C: swc1        $f16, 0xBC($s0)
    MEM_W(0XBC, ctx->r16) = ctx->f16.u32l;
    // 0x803F4460: lwc1        $f12, 0xB4($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0XB4);
    // 0x803F4464: lui         $a3, 0x800B
    ctx->r7 = S32(0X800B << 16);
    // 0x803F4468: addiu       $a3, $a3, -0x53AC
    ctx->r7 = ADD32(ctx->r7, -0X53AC);
    // 0x803F446C: addiu       $a2, $a2, -0x53C4
    ctx->r6 = ADD32(ctx->r6, -0X53C4);
    // 0x803F4470: jal         0x803F0000
    // 0x803F4474: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
    ovl_803F0000_menu_func_803F0000(rdram, ctx);
        goto after_10;
    // 0x803F4474: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
    after_10:
    // 0x803F4478: lw          $t1, 0xC8($s0)
    ctx->r9 = MEM_W(ctx->r16, 0XC8);
    // 0x803F447C: b           L_803F4D74
    // 0x803F4480: sh          $v0, 0x960($t1)
    MEM_H(0X960, ctx->r9) = ctx->r2;
        goto L_803F4D74;
    // 0x803F4480: sh          $v0, 0x960($t1)
    MEM_H(0X960, ctx->r9) = ctx->r2;
L_803F4484:
    // 0x803F4484: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x803F4488: jal         0x803F4EFC
    // 0x803F448C: addiu       $a1, $sp, 0xB8
    ctx->r5 = ADD32(ctx->r29, 0XB8);
    ovl_803F0000_menu_func_803F4EFC(rdram, ctx);
        goto after_11;
    // 0x803F448C: addiu       $a1, $sp, 0xB8
    ctx->r5 = ADD32(ctx->r29, 0XB8);
    after_11:
    // 0x803F4490: beq         $v0, $zero, L_803F4D74
    if (ctx->r2 == 0) {
        // 0x803F4494: or          $a0, $v0, $zero
        ctx->r4 = ctx->r2 | 0;
            goto L_803F4D74;
    }
    // 0x803F4494: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x803F4498: lui         $at, 0x4220
    ctx->r1 = S32(0X4220 << 16);
    // 0x803F449C: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x803F44A0: lwc1        $f10, 0x84($v0)
    ctx->f10.u32l = MEM_W(ctx->r2, 0X84);
    // 0x803F44A4: lw          $a1, 0xB8($sp)
    ctx->r5 = MEM_W(ctx->r29, 0XB8);
    // 0x803F44A8: c.lt.s      $f10, $f18
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f10.fl < ctx->f18.fl;
    // 0x803F44AC: nop

    // 0x803F44B0: bc1f        L_803F4D78
    if (!c1cs) {
        // 0x803F44B4: lw          $ra, 0x24($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X24);
            goto L_803F4D78;
    }
    // 0x803F44B4: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x803F44B8: jal         0x803F5454
    // 0x803F44BC: nop

    ovl_803F0000_menu_func_803F5454(rdram, ctx);
        goto after_12;
    // 0x803F44BC: nop

    after_12:
    // 0x803F44C0: swc1        $f0, 0xC0($sp)
    MEM_W(0XC0, ctx->r29) = ctx->f0.u32l;
    // 0x803F44C4: jal         0x80059898
    // 0x803F44C8: addiu       $a0, $zero, 0x14
    ctx->r4 = ADD32(0, 0X14);
    func_80059898(rdram, ctx);
        goto after_13;
    // 0x803F44C8: addiu       $a0, $zero, 0x14
    ctx->r4 = ADD32(0, 0X14);
    after_13:
    // 0x803F44CC: addiu       $t2, $v0, 0x14
    ctx->r10 = ADD32(ctx->r2, 0X14);
    // 0x803F44D0: mtc1        $t2, $f4
    ctx->f4.u32l = ctx->r10;
    // 0x803F44D4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x803F44D8: addiu       $a1, $sp, 0x8C
    ctx->r5 = ADD32(ctx->r29, 0X8C);
    // 0x803F44DC: bgez        $t2, L_803F44F4
    if (SIGNED(ctx->r10) >= 0) {
        // 0x803F44E0: cvt.s.w     $f4, $f4
        CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    ctx->f4.fl = CVT_S_W(ctx->f4.u32l);
            goto L_803F44F4;
    }
    // 0x803F44E0: cvt.s.w     $f4, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    ctx->f4.fl = CVT_S_W(ctx->f4.u32l);
    // 0x803F44E4: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x803F44E8: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x803F44EC: nop

    // 0x803F44F0: add.s       $f4, $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f4.fl = ctx->f4.fl + ctx->f6.fl;
L_803F44F4:
    // 0x803F44F4: mfc1        $a2, $f4
    ctx->r6 = (int32_t)ctx->f4.u32l;
    // 0x803F44F8: lw          $a3, 0xC0($sp)
    ctx->r7 = MEM_W(ctx->r29, 0XC0);
    // 0x803F44FC: jal         0x803F50B4
    // 0x803F4500: nop

    ovl_803F0000_menu_func_803F50B4(rdram, ctx);
        goto after_14;
    // 0x803F4500: nop

    after_14:
    // 0x803F4504: lhu         $t3, 0x18($s0)
    ctx->r11 = MEM_HU(ctx->r16, 0X18);
    // 0x803F4508: lwc1        $f8, 0x98($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X98);
    // 0x803F450C: ori         $t4, $t3, 0x8
    ctx->r12 = ctx->r11 | 0X8;
    // 0x803F4510: sh          $t4, 0x18($s0)
    MEM_H(0X18, ctx->r16) = ctx->r12;
    // 0x803F4514: addiu       $t5, $zero, 0x800
    ctx->r13 = ADD32(0, 0X800);
    // 0x803F4518: swc1        $f8, 0xB0($s0)
    MEM_W(0XB0, ctx->r16) = ctx->f8.u32l;
    // 0x803F451C: b           L_803F4D74
    // 0x803F4520: sh          $t5, 0x8A($sp)
    MEM_H(0X8A, ctx->r29) = ctx->r13;
        goto L_803F4D74;
    // 0x803F4520: sh          $t5, 0x8A($sp)
    MEM_H(0X8A, ctx->r29) = ctx->r13;
L_803F4524:
    // 0x803F4524: lhu         $t6, 0x95C($v0)
    ctx->r14 = MEM_HU(ctx->r2, 0X95C);
    // 0x803F4528: ori         $t0, $zero, 0x8000
    ctx->r8 = 0 | 0X8000;
    // 0x803F452C: andi        $t7, $t6, 0xFFFC
    ctx->r15 = ctx->r14 & 0XFFFC;
    // 0x803F4530: sh          $t7, 0x95C($v0)
    MEM_H(0X95C, ctx->r2) = ctx->r15;
    // 0x803F4534: lw          $v0, 0xC8($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XC8);
    // 0x803F4538: lui         $at, 0x803F
    ctx->r1 = S32(0X803F << 16);
    // 0x803F453C: lhu         $t8, 0x95C($v0)
    ctx->r24 = MEM_HU(ctx->r2, 0X95C);
    // 0x803F4540: addiu       $t4, $zero, 0x14
    ctx->r12 = ADD32(0, 0X14);
    // 0x803F4544: ori         $t9, $t8, 0x4
    ctx->r25 = ctx->r24 | 0X4;
    // 0x803F4548: sh          $t9, 0x95C($v0)
    MEM_H(0X95C, ctx->r2) = ctx->r25;
    // 0x803F454C: sh          $t0, 0x8A($sp)
    MEM_H(0X8A, ctx->r29) = ctx->r8;
    // 0x803F4550: lw          $v0, 0xC8($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XC8);
    // 0x803F4554: nop

    // 0x803F4558: lw          $t1, 0x958($v0)
    ctx->r9 = MEM_W(ctx->r2, 0X958);
    // 0x803F455C: nop

    // 0x803F4560: lwc1        $f16, 0x88($t1)
    ctx->f16.u32l = MEM_W(ctx->r9, 0X88);
    // 0x803F4564: nop

    // 0x803F4568: swc1        $f16, 0xBC($s0)
    MEM_W(0XBC, ctx->r16) = ctx->f16.u32l;
    // 0x803F456C: lwc1        $f10, 0x7D58($at)
    ctx->f10.u32l = MEM_W(ctx->r1, 0X7D58);
    // 0x803F4570: nop

    // 0x803F4574: swc1        $f10, 0x940($v0)
    MEM_W(0X940, ctx->r2) = ctx->f10.u32l;
    // 0x803F4578: lhu         $t2, 0x12($s0)
    ctx->r10 = MEM_HU(ctx->r16, 0X12);
    // 0x803F457C: lw          $t5, 0xC8($s0)
    ctx->r13 = MEM_W(ctx->r16, 0XC8);
    // 0x803F4580: ori         $t3, $t2, 0x4
    ctx->r11 = ctx->r10 | 0X4;
    // 0x803F4584: sh          $t3, 0x12($s0)
    MEM_H(0X12, ctx->r16) = ctx->r11;
    // 0x803F4588: b           L_803F4D74
    // 0x803F458C: sh          $t4, 0x938($t5)
    MEM_H(0X938, ctx->r13) = ctx->r12;
        goto L_803F4D74;
    // 0x803F458C: sh          $t4, 0x938($t5)
    MEM_H(0X938, ctx->r13) = ctx->r12;
L_803F4590:
    // 0x803F4590: jal         0x803F40C4
    // 0x803F4594: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_803F0000_menu_func_803F40C4(rdram, ctx);
        goto after_15;
    // 0x803F4594: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_15:
    // 0x803F4598: jal         0x803F4110
    // 0x803F459C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_803F0000_menu_func_803F4110(rdram, ctx);
        goto after_16;
    // 0x803F459C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_16:
    // 0x803F45A0: bne         $v0, $zero, L_803F45E4
    if (ctx->r2 != 0) {
        // 0x803F45A4: nop
    
            goto L_803F45E4;
    }
    // 0x803F45A4: nop

    // 0x803F45A8: lw          $v0, 0xC8($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XC8);
    // 0x803F45AC: addiu       $t8, $zero, 0x4
    ctx->r24 = ADD32(0, 0X4);
    // 0x803F45B0: lhu         $t6, 0x95C($v0)
    ctx->r14 = MEM_HU(ctx->r2, 0X95C);
    // 0x803F45B4: nop

    // 0x803F45B8: andi        $t7, $t6, 0xFFFC
    ctx->r15 = ctx->r14 & 0XFFFC;
    // 0x803F45BC: sh          $t7, 0x95C($v0)
    MEM_H(0X95C, ctx->r2) = ctx->r15;
    // 0x803F45C0: sh          $t8, 0x8A($sp)
    MEM_H(0X8A, ctx->r29) = ctx->r24;
    // 0x803F45C4: lw          $t9, 0xC8($s0)
    ctx->r25 = MEM_W(ctx->r16, 0XC8);
    // 0x803F45C8: lhu         $t1, 0x12($s0)
    ctx->r9 = MEM_HU(ctx->r16, 0X12);
    // 0x803F45CC: lw          $t0, 0x958($t9)
    ctx->r8 = MEM_W(ctx->r25, 0X958);
    // 0x803F45D0: ori         $t2, $t1, 0x4
    ctx->r10 = ctx->r9 | 0X4;
    // 0x803F45D4: lwc1        $f18, 0x88($t0)
    ctx->f18.u32l = MEM_W(ctx->r8, 0X88);
    // 0x803F45D8: sh          $t2, 0x12($s0)
    MEM_H(0X12, ctx->r16) = ctx->r10;
    // 0x803F45DC: b           L_803F4D74
    // 0x803F45E0: swc1        $f18, 0xBC($s0)
    MEM_W(0XBC, ctx->r16) = ctx->f18.u32l;
        goto L_803F4D74;
    // 0x803F45E0: swc1        $f18, 0xBC($s0)
    MEM_W(0XBC, ctx->r16) = ctx->f18.u32l;
L_803F45E4:
    // 0x803F45E4: lw          $v0, 0xC8($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XC8);
    // 0x803F45E8: nop

L_803F45EC:
    // 0x803F45EC: lhu         $t3, 0x6($v0)
    ctx->r11 = MEM_HU(ctx->r2, 0X6);
    // 0x803F45F0: lui         $t5, 0x803F
    ctx->r13 = S32(0X803F << 16);
    // 0x803F45F4: addiu       $t5, $t5, 0x7E08
    ctx->r13 = ADD32(ctx->r13, 0X7E08);
    // 0x803F45F8: sll         $t4, $t3, 2
    ctx->r12 = S32(ctx->r11 << 2);
    // 0x803F45FC: addu        $v1, $t4, $t5
    ctx->r3 = ADD32(ctx->r12, ctx->r13);
    // 0x803F4600: lbu         $t6, 0x0($v1)
    ctx->r14 = MEM_BU(ctx->r3, 0X0);
    // 0x803F4604: addiu       $t0, $zero, 0x4000
    ctx->r8 = ADD32(0, 0X4000);
    // 0x803F4608: ori         $t7, $t6, 0x80
    ctx->r15 = ctx->r14 | 0X80;
    // 0x803F460C: sb          $t7, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r15;
    // 0x803F4610: lw          $v0, 0xC8($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XC8);
    // 0x803F4614: nop

    // 0x803F4618: lhu         $t8, 0x95C($v0)
    ctx->r24 = MEM_HU(ctx->r2, 0X95C);
    // 0x803F461C: nop

    // 0x803F4620: andi        $t9, $t8, 0xFFFC
    ctx->r25 = ctx->r24 & 0XFFFC;
    // 0x803F4624: sh          $t9, 0x95C($v0)
    MEM_H(0X95C, ctx->r2) = ctx->r25;
    // 0x803F4628: sh          $t0, 0x8A($sp)
    MEM_H(0X8A, ctx->r29) = ctx->r8;
    // 0x803F462C: lw          $t1, 0xC8($s0)
    ctx->r9 = MEM_W(ctx->r16, 0XC8);
    // 0x803F4630: lhu         $t3, 0x12($s0)
    ctx->r11 = MEM_HU(ctx->r16, 0X12);
    // 0x803F4634: lw          $t2, 0x958($t1)
    ctx->r10 = MEM_W(ctx->r9, 0X958);
    // 0x803F4638: ori         $t4, $t3, 0x4
    ctx->r12 = ctx->r11 | 0X4;
    // 0x803F463C: lwc1        $f4, 0x88($t2)
    ctx->f4.u32l = MEM_W(ctx->r10, 0X88);
    // 0x803F4640: sh          $t4, 0x12($s0)
    MEM_H(0X12, ctx->r16) = ctx->r12;
    // 0x803F4644: b           L_803F4D74
    // 0x803F4648: swc1        $f4, 0xBC($s0)
    MEM_W(0XBC, ctx->r16) = ctx->f4.u32l;
        goto L_803F4D74;
    // 0x803F4648: swc1        $f4, 0xBC($s0)
    MEM_W(0XBC, ctx->r16) = ctx->f4.u32l;
L_803F464C:
    // 0x803F464C: lhu         $t5, 0x95C($v0)
    ctx->r13 = MEM_HU(ctx->r2, 0X95C);
    // 0x803F4650: addiu       $t7, $zero, 0x8
    ctx->r15 = ADD32(0, 0X8);
    // 0x803F4654: andi        $t6, $t5, 0xFFFE
    ctx->r14 = ctx->r13 & 0XFFFE;
    // 0x803F4658: sh          $t6, 0x95C($v0)
    MEM_H(0X95C, ctx->r2) = ctx->r14;
    // 0x803F465C: sh          $t7, 0x8A($sp)
    MEM_H(0X8A, ctx->r29) = ctx->r15;
    // 0x803F4660: jal         0x803F3E54
    // 0x803F4664: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_803F0000_menu_func_803F3E54(rdram, ctx);
        goto after_17;
    // 0x803F4664: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_17:
    // 0x803F4668: lhu         $t8, 0x12($s0)
    ctx->r24 = MEM_HU(ctx->r16, 0X12);
    // 0x803F466C: swc1        $f0, 0xBC($s0)
    MEM_W(0XBC, ctx->r16) = ctx->f0.u32l;
    // 0x803F4670: ori         $t9, $t8, 0x4
    ctx->r25 = ctx->r24 | 0X4;
    // 0x803F4674: b           L_803F4D74
    // 0x803F4678: sh          $t9, 0x12($s0)
    MEM_H(0X12, ctx->r16) = ctx->r25;
        goto L_803F4D74;
    // 0x803F4678: sh          $t9, 0x12($s0)
    MEM_H(0X12, ctx->r16) = ctx->r25;
L_803F467C:
    // 0x803F467C: lhu         $t0, 0x95C($v0)
    ctx->r8 = MEM_HU(ctx->r2, 0X95C);
    // 0x803F4680: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x803F4684: andi        $t1, $t0, 0xFFFC
    ctx->r9 = ctx->r8 & 0XFFFC;
    // 0x803F4688: jal         0x803F0EF0
    // 0x803F468C: sh          $t1, 0x95C($v0)
    MEM_H(0X95C, ctx->r2) = ctx->r9;
    ovl_803F0000_menu_func_803F0EF0(rdram, ctx);
        goto after_18;
    // 0x803F468C: sh          $t1, 0x95C($v0)
    MEM_H(0X95C, ctx->r2) = ctx->r9;
    after_18:
    // 0x803F4690: beq         $v0, $zero, L_803F46F4
    if (ctx->r2 == 0) {
        // 0x803F4694: or          $v1, $v0, $zero
        ctx->r3 = ctx->r2 | 0;
            goto L_803F46F4;
    }
    // 0x803F4694: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
    // 0x803F4698: lw          $t2, 0xC8($s0)
    ctx->r10 = MEM_W(ctx->r16, 0XC8);
    // 0x803F469C: lui         $v0, 0x803F
    ctx->r2 = S32(0X803F << 16);
    // 0x803F46A0: lhu         $t3, 0x8($t2)
    ctx->r11 = MEM_HU(ctx->r10, 0X8);
    // 0x803F46A4: addiu       $v0, $v0, 0x75A8
    ctx->r2 = ADD32(ctx->r2, 0X75A8);
    // 0x803F46A8: andi        $t4, $t3, 0x1
    ctx->r12 = ctx->r11 & 0X1;
    // 0x803F46AC: beq         $t4, $zero, L_803F46C0
    if (ctx->r12 == 0) {
        // 0x803F46B0: lui         $t5, 0x803F
        ctx->r13 = S32(0X803F << 16);
            goto L_803F46C0;
    }
    // 0x803F46B0: lui         $t5, 0x803F
    ctx->r13 = S32(0X803F << 16);
    // 0x803F46B4: addiu       $t5, $t5, 0x7598
    ctx->r13 = ADD32(ctx->r13, 0X7598);
    // 0x803F46B8: b           L_803F46C4
    // 0x803F46BC: sw          $t5, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r13;
        goto L_803F46C4;
    // 0x803F46BC: sw          $t5, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r13;
L_803F46C0:
    // 0x803F46C0: sw          $v0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r2;
L_803F46C4:
    // 0x803F46C4: lwc1        $f12, 0x4C($v1)
    ctx->f12.u32l = MEM_W(ctx->r3, 0X4C);
    // 0x803F46C8: lwc1        $f14, 0x44($v1)
    ctx->f14.u32l = MEM_W(ctx->r3, 0X44);
    // 0x803F46CC: lw          $a2, 0x34($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X34);
    // 0x803F46D0: jal         0x8027A184
    // 0x803F46D4: nop

    LOOKUP_FUNC(0x8027A184)(rdram, ctx);
        goto after_19;
    // 0x803F46D4: nop

    after_19:
    // 0x803F46D8: bne         $v0, $zero, L_803F46F4
    if (ctx->r2 != 0) {
        // 0x803F46DC: nop
    
            goto L_803F46F4;
    }
    // 0x803F46DC: nop

    // 0x803F46E0: jal         0x803F401C
    // 0x803F46E4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_803F0000_menu_func_803F401C(rdram, ctx);
        goto after_20;
    // 0x803F46E4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_20:
    // 0x803F46E8: addiu       $t6, $zero, 0x4
    ctx->r14 = ADD32(0, 0X4);
    // 0x803F46EC: b           L_803F4D74
    // 0x803F46F0: sh          $t6, 0x8A($sp)
    MEM_H(0X8A, ctx->r29) = ctx->r14;
        goto L_803F4D74;
    // 0x803F46F0: sh          $t6, 0x8A($sp)
    MEM_H(0X8A, ctx->r29) = ctx->r14;
L_803F46F4:
    // 0x803F46F4: lui         $v0, 0x8009
    ctx->r2 = S32(0X8009 << 16);
    // 0x803F46F8: lw          $v0, 0x3B20($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X3B20);
    // 0x803F46FC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x803F4700: lw          $a1, 0x8($v0)
    ctx->r5 = MEM_W(ctx->r2, 0X8);
    // 0x803F4704: lw          $a2, 0x0($v0)
    ctx->r6 = MEM_W(ctx->r2, 0X0);
    // 0x803F4708: jal         0x803F3EE8
    // 0x803F470C: nop

    ovl_803F0000_menu_func_803F3EE8(rdram, ctx);
        goto after_21;
    // 0x803F470C: nop

    after_21:
    // 0x803F4710: lw          $v0, 0xC8($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XC8);
    // 0x803F4714: addiu       $t9, $zero, 0x8
    ctx->r25 = ADD32(0, 0X8);
    // 0x803F4718: lhu         $t7, 0x95C($v0)
    ctx->r15 = MEM_HU(ctx->r2, 0X95C);
    // 0x803F471C: lui         $at, 0x4316
    ctx->r1 = S32(0X4316 << 16);
    // 0x803F4720: andi        $t8, $t7, 0xFFFE
    ctx->r24 = ctx->r15 & 0XFFFE;
    // 0x803F4724: sh          $t8, 0x95C($v0)
    MEM_H(0X95C, ctx->r2) = ctx->r24;
    // 0x803F4728: sh          $t9, 0x8A($sp)
    MEM_H(0X8A, ctx->r29) = ctx->r25;
    // 0x803F472C: lw          $v0, 0xC8($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XC8);
    // 0x803F4730: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x803F4734: lw          $t0, 0x24($v0)
    ctx->r8 = MEM_W(ctx->r2, 0X24);
    // 0x803F4738: addiu       $t1, $zero, 0x6
    ctx->r9 = ADD32(0, 0X6);
    // 0x803F473C: lwc1        $f8, 0x8BC($t0)
    ctx->f8.u32l = MEM_W(ctx->r8, 0X8BC);
    // 0x803F4740: nop

    // 0x803F4744: c.lt.s      $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f6.fl < ctx->f8.fl;
    // 0x803F4748: nop

    // 0x803F474C: bc1f        L_803F475C
    if (!c1cs) {
        // 0x803F4750: nop
    
            goto L_803F475C;
    }
    // 0x803F4750: nop

    // 0x803F4754: b           L_803F4770
    // 0x803F4758: sh          $t1, 0x960($v0)
    MEM_H(0X960, ctx->r2) = ctx->r9;
        goto L_803F4770;
    // 0x803F4758: sh          $t1, 0x960($v0)
    MEM_H(0X960, ctx->r2) = ctx->r9;
L_803F475C:
    // 0x803F475C: jal         0x80059898
    // 0x803F4760: addiu       $a0, $zero, 0x7
    ctx->r4 = ADD32(0, 0X7);
    func_80059898(rdram, ctx);
        goto after_22;
    // 0x803F4760: addiu       $a0, $zero, 0x7
    ctx->r4 = ADD32(0, 0X7);
    after_22:
    // 0x803F4764: lw          $t2, 0xC8($s0)
    ctx->r10 = MEM_W(ctx->r16, 0XC8);
    // 0x803F4768: nop

    // 0x803F476C: sh          $v0, 0x960($t2)
    MEM_H(0X960, ctx->r10) = ctx->r2;
L_803F4770:
    // 0x803F4770: lhu         $t3, 0x12($s0)
    ctx->r11 = MEM_HU(ctx->r16, 0X12);
    // 0x803F4774: nop

    // 0x803F4778: ori         $t4, $t3, 0x4
    ctx->r12 = ctx->r11 | 0X4;
    // 0x803F477C: b           L_803F4D74
    // 0x803F4780: sh          $t4, 0x12($s0)
    MEM_H(0X12, ctx->r16) = ctx->r12;
        goto L_803F4D74;
    // 0x803F4780: sh          $t4, 0x12($s0)
    MEM_H(0X12, ctx->r16) = ctx->r12;
L_803F4784:
    // 0x803F4784: lhu         $t5, 0x95C($v0)
    ctx->r13 = MEM_HU(ctx->r2, 0X95C);
    // 0x803F4788: addiu       $t9, $zero, 0x8
    ctx->r25 = ADD32(0, 0X8);
    // 0x803F478C: ori         $t6, $t5, 0x20
    ctx->r14 = ctx->r13 | 0X20;
    // 0x803F4790: sh          $t6, 0x95C($v0)
    MEM_H(0X95C, ctx->r2) = ctx->r14;
    // 0x803F4794: lhu         $t7, 0x12($s0)
    ctx->r15 = MEM_HU(ctx->r16, 0X12);
    // 0x803F4798: addiu       $a0, $zero, 0x28
    ctx->r4 = ADD32(0, 0X28);
    // 0x803F479C: ori         $t8, $t7, 0x4
    ctx->r24 = ctx->r15 | 0X4;
    // 0x803F47A0: sh          $t8, 0x12($s0)
    MEM_H(0X12, ctx->r16) = ctx->r24;
    // 0x803F47A4: jal         0x80059898
    // 0x803F47A8: sh          $t9, 0x8A($sp)
    MEM_H(0X8A, ctx->r29) = ctx->r25;
    func_80059898(rdram, ctx);
        goto after_23;
    // 0x803F47A8: sh          $t9, 0x8A($sp)
    MEM_H(0X8A, ctx->r29) = ctx->r25;
    after_23:
    // 0x803F47AC: mtc1        $v0, $f16
    ctx->f16.u32l = ctx->r2;
    // 0x803F47B0: bgez        $v0, L_803F47C8
    if (SIGNED(ctx->r2) >= 0) {
        // 0x803F47B4: cvt.s.w     $f10, $f16
        CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    ctx->f10.fl = CVT_S_W(ctx->f16.u32l);
            goto L_803F47C8;
    }
    // 0x803F47B4: cvt.s.w     $f10, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    ctx->f10.fl = CVT_S_W(ctx->f16.u32l);
    // 0x803F47B8: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x803F47BC: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x803F47C0: nop

    // 0x803F47C4: add.s       $f10, $f10, $f18
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f10.fl = ctx->f10.fl + ctx->f18.fl;
L_803F47C8:
    // 0x803F47C8: lw          $t0, 0xC8($s0)
    ctx->r8 = MEM_W(ctx->r16, 0XC8);
    // 0x803F47CC: lui         $a2, 0x800B
    ctx->r6 = S32(0X800B << 16);
    // 0x803F47D0: lw          $t1, 0x24($t0)
    ctx->r9 = MEM_W(ctx->r8, 0X24);
    // 0x803F47D4: lui         $a3, 0x800B
    ctx->r7 = S32(0X800B << 16);
    // 0x803F47D8: lwc1        $f4, 0x8BC($t1)
    ctx->f4.u32l = MEM_W(ctx->r9, 0X8BC);
    // 0x803F47DC: addiu       $a3, $a3, -0x5270
    ctx->r7 = ADD32(ctx->r7, -0X5270);
    // 0x803F47E0: addiu       $a2, $a2, -0x5288
    ctx->r6 = ADD32(ctx->r6, -0X5288);
    // 0x803F47E4: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
    // 0x803F47E8: jal         0x803F0000
    // 0x803F47EC: add.s       $f12, $f10, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f12.fl = ctx->f10.fl + ctx->f4.fl;
    ovl_803F0000_menu_func_803F0000(rdram, ctx);
        goto after_24;
    // 0x803F47EC: add.s       $f12, $f10, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f12.fl = ctx->f10.fl + ctx->f4.fl;
    after_24:
    // 0x803F47F0: lw          $t2, 0xC8($s0)
    ctx->r10 = MEM_W(ctx->r16, 0XC8);
    // 0x803F47F4: b           L_803F4D74
    // 0x803F47F8: sh          $v0, 0x960($t2)
    MEM_H(0X960, ctx->r10) = ctx->r2;
        goto L_803F4D74;
    // 0x803F47F8: sh          $v0, 0x960($t2)
    MEM_H(0X960, ctx->r10) = ctx->r2;
L_803F47FC:
    // 0x803F47FC: lhu         $t3, 0x95C($v0)
    ctx->r11 = MEM_HU(ctx->r2, 0X95C);
    // 0x803F4800: addiu       $t5, $zero, 0x1
    ctx->r13 = ADD32(0, 0X1);
    // 0x803F4804: andi        $t4, $t3, 0xFFFE
    ctx->r12 = ctx->r11 & 0XFFFE;
    // 0x803F4808: sh          $t4, 0x95C($v0)
    MEM_H(0X95C, ctx->r2) = ctx->r12;
    // 0x803F480C: sh          $t5, 0x8A($sp)
    MEM_H(0X8A, ctx->r29) = ctx->r13;
    // 0x803F4810: lhu         $t6, 0x12($s0)
    ctx->r14 = MEM_HU(ctx->r16, 0X12);
    // 0x803F4814: lw          $t8, 0xC8($s0)
    ctx->r24 = MEM_W(ctx->r16, 0XC8);
    // 0x803F4818: ori         $t7, $t6, 0x4
    ctx->r15 = ctx->r14 | 0X4;
    // 0x803F481C: sh          $t7, 0x12($s0)
    MEM_H(0X12, ctx->r16) = ctx->r15;
    // 0x803F4820: lh          $t9, 0x8CA($t8)
    ctx->r25 = MEM_H(ctx->r24, 0X8CA);
    // 0x803F4824: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x803F4828: addiu       $t0, $t9, 0x32
    ctx->r8 = ADD32(ctx->r25, 0X32);
    // 0x803F482C: mtc1        $t0, $f6
    ctx->f6.u32l = ctx->r8;
    // 0x803F4830: nop

    // 0x803F4834: cvt.s.w     $f6, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    ctx->f6.fl = CVT_S_W(ctx->f6.u32l);
    // 0x803F4838: mfc1        $a1, $f6
    ctx->r5 = (int32_t)ctx->f6.u32l;
    // 0x803F483C: jal         0x8026AB68
    // 0x803F4840: nop

    LOOKUP_FUNC(0x8026AB68)(rdram, ctx);
        goto after_25;
    // 0x803F4840: nop

    after_25:
    // 0x803F4844: mov.s       $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    ctx->f12.fl = ctx->f0.fl;
    // 0x803F4848: jal         0x80272AEC
    // 0x803F484C: swc1        $f0, 0xAC($sp)
    MEM_W(0XAC, ctx->r29) = ctx->f0.u32l;
    LOOKUP_FUNC(0x80272AEC)(rdram, ctx);
        goto after_26;
    // 0x803F484C: swc1        $f0, 0xAC($sp)
    MEM_W(0XAC, ctx->r29) = ctx->f0.u32l;
    after_26:
    // 0x803F4850: lui         $at, 0x803F
    ctx->r1 = S32(0X803F << 16);
    // 0x803F4854: lwc1        $f8, 0x7D5C($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X7D5C);
    // 0x803F4858: lwc1        $f2, 0xAC($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0XAC);
    // 0x803F485C: c.lt.s      $f8, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f8.fl < ctx->f0.fl;
    // 0x803F4860: lui         $t4, 0x8009
    ctx->r12 = S32(0X8009 << 16);
    // 0x803F4864: bc1f        L_803F4890
    if (!c1cs) {
        // 0x803F4868: addiu       $v0, $zero, 0x3C
        ctx->r2 = ADD32(0, 0X3C);
            goto L_803F4890;
    }
    // 0x803F4868: addiu       $v0, $zero, 0x3C
    ctx->r2 = ADD32(0, 0X3C);
    // 0x803F486C: lw          $t1, 0xC8($s0)
    ctx->r9 = MEM_W(ctx->r16, 0XC8);
    // 0x803F4870: nop

    // 0x803F4874: lw          $t2, 0x24($t1)
    ctx->r10 = MEM_W(ctx->r9, 0X24);
    // 0x803F4878: nop

    // 0x803F487C: lh          $t3, 0x8BA($t2)
    ctx->r11 = MEM_H(ctx->r10, 0X8BA);
    // 0x803F4880: nop

    // 0x803F4884: mtc1        $t3, $f16
    ctx->f16.u32l = ctx->r11;
    // 0x803F4888: nop

    // 0x803F488C: cvt.s.w     $f2, $f16
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 16);
    ctx->f2.fl = CVT_S_W(ctx->f16.u32l);
L_803F4890:
    // 0x803F4890: lw          $t4, 0x3B20($t4)
    ctx->r12 = MEM_W(ctx->r12, 0X3B20);
    // 0x803F4894: mtc1        $zero, $f14
    ctx->f14.u32l = 0;
    // 0x803F4898: lwc1        $f18, 0x0($t4)
    ctx->f18.u32l = MEM_W(ctx->r12, 0X0);
    // 0x803F489C: nop

    // 0x803F48A0: c.lt.s      $f14, $f18
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f14.fl < ctx->f18.fl;
    // 0x803F48A4: nop

    // 0x803F48A8: bc1f        L_803F48B8
    if (!c1cs) {
        // 0x803F48AC: nop
    
            goto L_803F48B8;
    }
    // 0x803F48AC: nop

    // 0x803F48B0: b           L_803F48B8
    // 0x803F48B4: addiu       $v0, $zero, -0x3C
    ctx->r2 = ADD32(0, -0X3C);
        goto L_803F48B8;
    // 0x803F48B4: addiu       $v0, $zero, -0x3C
    ctx->r2 = ADD32(0, -0X3C);
L_803F48B8:
    // 0x803F48B8: mtc1        $v0, $f10
    ctx->f10.u32l = ctx->r2;
    // 0x803F48BC: mfc1        $a1, $f2
    ctx->r5 = (int32_t)ctx->f2.u32l;
    // 0x803F48C0: cvt.s.w     $f10, $f10
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 10);
    ctx->f10.fl = CVT_S_W(ctx->f10.u32l);
    // 0x803F48C4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x803F48C8: addiu       $a3, $sp, 0xB0
    ctx->r7 = ADD32(ctx->r29, 0XB0);
    // 0x803F48CC: mfc1        $a2, $f10
    ctx->r6 = (int32_t)ctx->f10.u32l;
    // 0x803F48D0: jal         0x80272B98
    // 0x803F48D4: nop

    LOOKUP_FUNC(0x80272B98)(rdram, ctx);
        goto after_27;
    // 0x803F48D4: nop

    after_27:
    // 0x803F48D8: lwc1        $f4, 0xB0($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0XB0);
    // 0x803F48DC: lui         $a2, 0x800B
    ctx->r6 = S32(0X800B << 16);
    // 0x803F48E0: swc1        $f4, 0xBC($s0)
    MEM_W(0XBC, ctx->r16) = ctx->f4.u32l;
    // 0x803F48E4: lwc1        $f12, 0xB4($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0XB4);
    // 0x803F48E8: lui         $a3, 0x800B
    ctx->r7 = S32(0X800B << 16);
    // 0x803F48EC: addiu       $a3, $a3, -0x53AC
    ctx->r7 = ADD32(ctx->r7, -0X53AC);
    // 0x803F48F0: addiu       $a2, $a2, -0x53C4
    ctx->r6 = ADD32(ctx->r6, -0X53C4);
    // 0x803F48F4: jal         0x803F0000
    // 0x803F48F8: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
    ovl_803F0000_menu_func_803F0000(rdram, ctx);
        goto after_28;
    // 0x803F48F8: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
    after_28:
    // 0x803F48FC: lw          $t5, 0xC8($s0)
    ctx->r13 = MEM_W(ctx->r16, 0XC8);
    // 0x803F4900: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x803F4904: jal         0x803F3D10
    // 0x803F4908: sh          $v0, 0x960($t5)
    MEM_H(0X960, ctx->r13) = ctx->r2;
    ovl_803F0000_menu_func_803F3D10(rdram, ctx);
        goto after_29;
    // 0x803F4908: sh          $v0, 0x960($t5)
    MEM_H(0X960, ctx->r13) = ctx->r2;
    after_29:
    // 0x803F490C: lw          $v0, 0xC8($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XC8);
    // 0x803F4910: nop

    // 0x803F4914: lh          $t6, 0x960($v0)
    ctx->r14 = MEM_H(ctx->r2, 0X960);
    // 0x803F4918: nop

    // 0x803F491C: addiu       $t7, $t6, -0x1
    ctx->r15 = ADD32(ctx->r14, -0X1);
    // 0x803F4920: b           L_803F4D74
    // 0x803F4924: sh          $t7, 0x960($v0)
    MEM_H(0X960, ctx->r2) = ctx->r15;
        goto L_803F4D74;
    // 0x803F4924: sh          $t7, 0x960($v0)
    MEM_H(0X960, ctx->r2) = ctx->r15;
L_803F4928:
    // 0x803F4928: lui         $at, 0x803F
    ctx->r1 = S32(0X803F << 16);
    // 0x803F492C: lwc1        $f6, 0x7D60($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X7D60);
    // 0x803F4930: addiu       $t8, $zero, 0xF
    ctx->r24 = ADD32(0, 0XF);
    // 0x803F4934: swc1        $f6, 0x940($v0)
    MEM_W(0X940, ctx->r2) = ctx->f6.u32l;
    // 0x803F4938: lw          $t9, 0xC8($s0)
    ctx->r25 = MEM_W(ctx->r16, 0XC8);
    // 0x803F493C: lui         $t0, 0x8009
    ctx->r8 = S32(0X8009 << 16);
    // 0x803F4940: sh          $t8, 0x938($t9)
    MEM_H(0X938, ctx->r25) = ctx->r24;
    // 0x803F4944: lw          $t0, 0x3B20($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X3B20);
    // 0x803F4948: mtc1        $zero, $f14
    ctx->f14.u32l = 0;
    // 0x803F494C: lwc1        $f8, 0x0($t0)
    ctx->f8.u32l = MEM_W(ctx->r8, 0X0);
    // 0x803F4950: addiu       $t1, $zero, 0x5C
    ctx->r9 = ADD32(0, 0X5C);
    // 0x803F4954: c.lt.s      $f14, $f8
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f14.fl < ctx->f8.fl;
    // 0x803F4958: addiu       $t8, $zero, -0x1F3
    ctx->r24 = ADD32(0, -0X1F3);
    // 0x803F495C: bc1f        L_803F4970
    if (!c1cs) {
        // 0x803F4960: addiu       $t7, $zero, 0x1F3
        ctx->r15 = ADD32(0, 0X1F3);
            goto L_803F4970;
    }
    // 0x803F4960: addiu       $t7, $zero, 0x1F3
    ctx->r15 = ADD32(0, 0X1F3);
    // 0x803F4964: lw          $t2, 0xC8($s0)
    ctx->r10 = MEM_W(ctx->r16, 0XC8);
    // 0x803F4968: b           L_803F497C
    // 0x803F496C: sh          $t1, 0x93E($t2)
    MEM_H(0X93E, ctx->r10) = ctx->r9;
        goto L_803F497C;
    // 0x803F496C: sh          $t1, 0x93E($t2)
    MEM_H(0X93E, ctx->r10) = ctx->r9;
L_803F4970:
    // 0x803F4970: lw          $t4, 0xC8($s0)
    ctx->r12 = MEM_W(ctx->r16, 0XC8);
    // 0x803F4974: addiu       $t3, $zero, -0x5C
    ctx->r11 = ADD32(0, -0X5C);
    // 0x803F4978: sh          $t3, 0x93E($t4)
    MEM_H(0X93E, ctx->r12) = ctx->r11;
L_803F497C:
    // 0x803F497C: lw          $v0, 0xC8($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XC8);
    // 0x803F4980: nop

    // 0x803F4984: lhu         $t5, 0x8($v0)
    ctx->r13 = MEM_HU(ctx->r2, 0X8);
    // 0x803F4988: nop

    // 0x803F498C: andi        $t6, $t5, 0x1
    ctx->r14 = ctx->r13 & 0X1;
    // 0x803F4990: beq         $t6, $zero, L_803F49A0
    if (ctx->r14 == 0) {
        // 0x803F4994: nop
    
            goto L_803F49A0;
    }
    // 0x803F4994: nop

    // 0x803F4998: b           L_803F49A4
    // 0x803F499C: sh          $t7, 0x93C($v0)
    MEM_H(0X93C, ctx->r2) = ctx->r15;
        goto L_803F49A4;
    // 0x803F499C: sh          $t7, 0x93C($v0)
    MEM_H(0X93C, ctx->r2) = ctx->r15;
L_803F49A0:
    // 0x803F49A0: sh          $t8, 0x93C($v0)
    MEM_H(0X93C, ctx->r2) = ctx->r24;
L_803F49A4:
    // 0x803F49A4: lw          $t9, 0xC8($s0)
    ctx->r25 = MEM_W(ctx->r16, 0XC8);
    // 0x803F49A8: b           L_803F4D74
    // 0x803F49AC: sh          $zero, 0x948($t9)
    MEM_H(0X948, ctx->r25) = 0;
        goto L_803F4D74;
    // 0x803F49AC: sh          $zero, 0x948($t9)
    MEM_H(0X948, ctx->r25) = 0;
L_803F49B0:
    // 0x803F49B0: lhu         $t0, 0x95C($v0)
    ctx->r8 = MEM_HU(ctx->r2, 0X95C);
    // 0x803F49B4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x803F49B8: andi        $t1, $t0, 0xFFFC
    ctx->r9 = ctx->r8 & 0XFFFC;
    // 0x803F49BC: jal         0x803F0EF0
    // 0x803F49C0: sh          $t1, 0x95C($v0)
    MEM_H(0X95C, ctx->r2) = ctx->r9;
    ovl_803F0000_menu_func_803F0EF0(rdram, ctx);
        goto after_30;
    // 0x803F49C0: sh          $t1, 0x95C($v0)
    MEM_H(0X95C, ctx->r2) = ctx->r9;
    after_30:
    // 0x803F49C4: beq         $v0, $zero, L_803F49E8
    if (ctx->r2 == 0) {
        // 0x803F49C8: addiu       $t4, $zero, 0x4000
        ctx->r12 = ADD32(0, 0X4000);
            goto L_803F49E8;
    }
    // 0x803F49C8: addiu       $t4, $zero, 0x4000
    ctx->r12 = ADD32(0, 0X4000);
    // 0x803F49CC: lhu         $t2, 0x12($s0)
    ctx->r10 = MEM_HU(ctx->r16, 0X12);
    // 0x803F49D0: lwc1        $f16, 0x88($v0)
    ctx->f16.u32l = MEM_W(ctx->r2, 0X88);
    // 0x803F49D4: ori         $t3, $t2, 0x4
    ctx->r11 = ctx->r10 | 0X4;
    // 0x803F49D8: sh          $t3, 0x12($s0)
    MEM_H(0X12, ctx->r16) = ctx->r11;
    // 0x803F49DC: swc1        $f16, 0xBC($s0)
    MEM_W(0XBC, ctx->r16) = ctx->f16.u32l;
    // 0x803F49E0: b           L_803F4D74
    // 0x803F49E4: sh          $t4, 0x8A($sp)
    MEM_H(0X8A, ctx->r29) = ctx->r12;
        goto L_803F4D74;
    // 0x803F49E4: sh          $t4, 0x8A($sp)
    MEM_H(0X8A, ctx->r29) = ctx->r12;
L_803F49E8:
    // 0x803F49E8: jal         0x803F401C
    // 0x803F49EC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_803F0000_menu_func_803F401C(rdram, ctx);
        goto after_31;
    // 0x803F49EC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_31:
    // 0x803F49F0: lw          $v0, 0xC8($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XC8);
    // 0x803F49F4: addiu       $t7, $zero, 0x4
    ctx->r15 = ADD32(0, 0X4);
    // 0x803F49F8: lhu         $t5, 0x95C($v0)
    ctx->r13 = MEM_HU(ctx->r2, 0X95C);
    // 0x803F49FC: nop

    // 0x803F4A00: ori         $t6, $t5, 0x800
    ctx->r14 = ctx->r13 | 0X800;
    // 0x803F4A04: sh          $t6, 0x95C($v0)
    MEM_H(0X95C, ctx->r2) = ctx->r14;
    // 0x803F4A08: b           L_803F4D74
    // 0x803F4A0C: sh          $t7, 0x8A($sp)
    MEM_H(0X8A, ctx->r29) = ctx->r15;
        goto L_803F4D74;
    // 0x803F4A0C: sh          $t7, 0x8A($sp)
    MEM_H(0X8A, ctx->r29) = ctx->r15;
L_803F4A10:
    // 0x803F4A10: lui         $t8, 0x8028
    ctx->r24 = S32(0X8028 << 16);
    // 0x803F4A14: lh          $t8, -0x1B60($t8)
    ctx->r24 = MEM_H(ctx->r24, -0X1B60);
    // 0x803F4A18: lui         $at, 0x4248
    ctx->r1 = S32(0X4248 << 16);
    // 0x803F4A1C: andi        $t9, $t8, 0x1
    ctx->r25 = ctx->r24 & 0X1;
    // 0x803F4A20: beq         $t9, $zero, L_803F4A74
    if (ctx->r25 == 0) {
        // 0x803F4A24: nop
    
            goto L_803F4A74;
    }
    // 0x803F4A24: nop

    // 0x803F4A28: lwc1        $f18, 0x84($a2)
    ctx->f18.u32l = MEM_W(ctx->r6, 0X84);
    // 0x803F4A2C: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x803F4A30: lui         $at, 0x803F
    ctx->r1 = S32(0X803F << 16);
    // 0x803F4A34: c.lt.s      $f18, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f18.fl < ctx->f10.fl;
    // 0x803F4A38: nop

    // 0x803F4A3C: bc1f        L_803F4A74
    if (!c1cs) {
        // 0x803F4A40: nop
    
            goto L_803F4A74;
    }
    // 0x803F4A40: nop

    // 0x803F4A44: lwc1        $f6, 0x50($a2)
    ctx->f6.u32l = MEM_W(ctx->r6, 0X50);
    // 0x803F4A48: lwc1        $f5, 0x7D68($at)
    ctx->f_odd[(5 - 1) * 2] = MEM_W(ctx->r1, 0X7D68);
    // 0x803F4A4C: lwc1        $f4, 0x7D6C($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X7D6C);
    // 0x803F4A50: cvt.d.s     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f8.d = CVT_D_S(ctx->f6.fl);
    // 0x803F4A54: c.lt.d      $f4, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f4.d < ctx->f8.d;
    // 0x803F4A58: nop

    // 0x803F4A5C: bc1f        L_803F4A74
    if (!c1cs) {
        // 0x803F4A60: nop
    
            goto L_803F4A74;
    }
    // 0x803F4A60: nop

    // 0x803F4A64: jal         0x803F3A98
    // 0x803F4A68: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_803F0000_menu_func_803F3A98(rdram, ctx);
        goto after_32;
    // 0x803F4A68: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_32:
    // 0x803F4A6C: b           L_803F4D78
    // 0x803F4A70: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_803F4D78;
    // 0x803F4A70: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_803F4A74:
    // 0x803F4A74: lhu         $t0, 0x95C($v0)
    ctx->r8 = MEM_HU(ctx->r2, 0X95C);
    // 0x803F4A78: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x803F4A7C: andi        $t1, $t0, 0xFFFE
    ctx->r9 = ctx->r8 & 0XFFFE;
    // 0x803F4A80: sh          $t1, 0x95C($v0)
    MEM_H(0X95C, ctx->r2) = ctx->r9;
    // 0x803F4A84: sh          $t2, 0x8A($sp)
    MEM_H(0X8A, ctx->r29) = ctx->r10;
    // 0x803F4A88: lhu         $t3, 0x12($s0)
    ctx->r11 = MEM_HU(ctx->r16, 0X12);
    // 0x803F4A8C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x803F4A90: ori         $t4, $t3, 0x4
    ctx->r12 = ctx->r11 | 0X4;
    // 0x803F4A94: jal         0x803F0EF0
    // 0x803F4A98: sh          $t4, 0x12($s0)
    MEM_H(0X12, ctx->r16) = ctx->r12;
    ovl_803F0000_menu_func_803F0EF0(rdram, ctx);
        goto after_33;
    // 0x803F4A98: sh          $t4, 0x12($s0)
    MEM_H(0X12, ctx->r16) = ctx->r12;
    after_33:
    // 0x803F4A9C: beq         $v0, $zero, L_803F4AEC
    if (ctx->r2 == 0) {
        // 0x803F4AA0: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_803F4AEC;
    }
    // 0x803F4AA0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x803F4AA4: lh          $a1, 0x2E($v0)
    ctx->r5 = MEM_H(ctx->r2, 0X2E);
    // 0x803F4AA8: sw          $v0, 0xCC($sp)
    MEM_W(0XCC, ctx->r29) = ctx->r2;
    // 0x803F4AAC: jal         0x803F3C88
    // 0x803F4AB0: addiu       $a2, $zero, 0x1A8
    ctx->r6 = ADD32(0, 0X1A8);
    ovl_803F0000_menu_func_803F3C88(rdram, ctx);
        goto after_34;
    // 0x803F4AB0: addiu       $a2, $zero, 0x1A8
    ctx->r6 = ADD32(0, 0X1A8);
    after_34:
    // 0x803F4AB4: lw          $v1, 0xCC($sp)
    ctx->r3 = MEM_W(ctx->r29, 0XCC);
    // 0x803F4AB8: mtc1        $v0, $f16
    ctx->f16.u32l = ctx->r2;
    // 0x803F4ABC: lh          $t5, 0x30($v1)
    ctx->r13 = MEM_H(ctx->r3, 0X30);
    // 0x803F4AC0: cvt.s.w     $f16, $f16
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    ctx->f16.fl = CVT_S_W(ctx->f16.u32l);
    // 0x803F4AC4: mtc1        $t5, $f18
    ctx->f18.u32l = ctx->r13;
    // 0x803F4AC8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x803F4ACC: cvt.s.w     $f18, $f18
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    ctx->f18.fl = CVT_S_W(ctx->f18.u32l);
    // 0x803F4AD0: mfc1        $a1, $f16
    ctx->r5 = (int32_t)ctx->f16.u32l;
    // 0x803F4AD4: addiu       $a3, $sp, 0xB0
    ctx->r7 = ADD32(ctx->r29, 0XB0);
    // 0x803F4AD8: mfc1        $a2, $f18
    ctx->r6 = (int32_t)ctx->f18.u32l;
    // 0x803F4ADC: jal         0x80272B98
    // 0x803F4AE0: nop

    LOOKUP_FUNC(0x80272B98)(rdram, ctx);
        goto after_35;
    // 0x803F4AE0: nop

    after_35:
    // 0x803F4AE4: b           L_803F4B20
    // 0x803F4AE8: lwc1        $f6, 0xB0($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0XB0);
        goto L_803F4B20;
    // 0x803F4AE8: lwc1        $f6, 0xB0($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0XB0);
L_803F4AEC:
    // 0x803F4AEC: lw          $t6, 0xC8($s0)
    ctx->r14 = MEM_W(ctx->r16, 0XC8);
    // 0x803F4AF0: mtc1        $zero, $f14
    ctx->f14.u32l = 0;
    // 0x803F4AF4: lw          $t7, 0x24($t6)
    ctx->r15 = MEM_W(ctx->r14, 0X24);
    // 0x803F4AF8: mfc1        $a2, $f14
    ctx->r6 = (int32_t)ctx->f14.u32l;
    // 0x803F4AFC: lh          $t8, 0x8BA($t7)
    ctx->r24 = MEM_H(ctx->r15, 0X8BA);
    // 0x803F4B00: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x803F4B04: mtc1        $t8, $f10
    ctx->f10.u32l = ctx->r24;
    // 0x803F4B08: addiu       $a3, $sp, 0xB0
    ctx->r7 = ADD32(ctx->r29, 0XB0);
    // 0x803F4B0C: cvt.s.w     $f10, $f10
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 10);
    ctx->f10.fl = CVT_S_W(ctx->f10.u32l);
    // 0x803F4B10: mfc1        $a1, $f10
    ctx->r5 = (int32_t)ctx->f10.u32l;
    // 0x803F4B14: jal         0x80272B98
    // 0x803F4B18: nop

    LOOKUP_FUNC(0x80272B98)(rdram, ctx);
        goto after_36;
    // 0x803F4B18: nop

    after_36:
    // 0x803F4B1C: lwc1        $f6, 0xB0($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0XB0);
L_803F4B20:
    // 0x803F4B20: lui         $a2, 0x800B
    ctx->r6 = S32(0X800B << 16);
    // 0x803F4B24: swc1        $f6, 0xBC($s0)
    MEM_W(0XBC, ctx->r16) = ctx->f6.u32l;
    // 0x803F4B28: lwc1        $f12, 0xB4($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0XB4);
    // 0x803F4B2C: lui         $a3, 0x800B
    ctx->r7 = S32(0X800B << 16);
    // 0x803F4B30: addiu       $a3, $a3, -0x53C8
    ctx->r7 = ADD32(ctx->r7, -0X53C8);
    // 0x803F4B34: addiu       $a2, $a2, -0x53E0
    ctx->r6 = ADD32(ctx->r6, -0X53E0);
    // 0x803F4B38: jal         0x803F0000
    // 0x803F4B3C: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
    ovl_803F0000_menu_func_803F0000(rdram, ctx);
        goto after_37;
    // 0x803F4B3C: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
    after_37:
    // 0x803F4B40: lw          $t9, 0xC8($s0)
    ctx->r25 = MEM_W(ctx->r16, 0XC8);
    // 0x803F4B44: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x803F4B48: jal         0x803F3D10
    // 0x803F4B4C: sh          $v0, 0x960($t9)
    MEM_H(0X960, ctx->r25) = ctx->r2;
    ovl_803F0000_menu_func_803F3D10(rdram, ctx);
        goto after_38;
    // 0x803F4B4C: sh          $v0, 0x960($t9)
    MEM_H(0X960, ctx->r25) = ctx->r2;
    after_38:
    // 0x803F4B50: b           L_803F4D78
    // 0x803F4B54: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_803F4D78;
    // 0x803F4B54: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_803F4B58:
    // 0x803F4B58: lui         $t0, 0x8028
    ctx->r8 = S32(0X8028 << 16);
    // 0x803F4B5C: lh          $t0, -0x1B60($t0)
    ctx->r8 = MEM_H(ctx->r8, -0X1B60);
    // 0x803F4B60: lui         $at, 0x4248
    ctx->r1 = S32(0X4248 << 16);
    // 0x803F4B64: andi        $t1, $t0, 0x1
    ctx->r9 = ctx->r8 & 0X1;
    // 0x803F4B68: beq         $t1, $zero, L_803F4BBC
    if (ctx->r9 == 0) {
        // 0x803F4B6C: nop
    
            goto L_803F4BBC;
    }
    // 0x803F4B6C: nop

    // 0x803F4B70: lwc1        $f4, 0x84($a2)
    ctx->f4.u32l = MEM_W(ctx->r6, 0X84);
    // 0x803F4B74: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x803F4B78: lui         $at, 0x803F
    ctx->r1 = S32(0X803F << 16);
    // 0x803F4B7C: c.lt.s      $f4, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f4.fl < ctx->f8.fl;
    // 0x803F4B80: nop

    // 0x803F4B84: bc1f        L_803F4BBC
    if (!c1cs) {
        // 0x803F4B88: nop
    
            goto L_803F4BBC;
    }
    // 0x803F4B88: nop

    // 0x803F4B8C: lwc1        $f18, 0x50($a2)
    ctx->f18.u32l = MEM_W(ctx->r6, 0X50);
    // 0x803F4B90: lwc1        $f17, 0x7D70($at)
    ctx->f_odd[(17 - 1) * 2] = MEM_W(ctx->r1, 0X7D70);
    // 0x803F4B94: lwc1        $f16, 0x7D74($at)
    ctx->f16.u32l = MEM_W(ctx->r1, 0X7D74);
    // 0x803F4B98: cvt.d.s     $f10, $f18
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.fl); 
    ctx->f10.d = CVT_D_S(ctx->f18.fl);
    // 0x803F4B9C: c.lt.d      $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f16.d < ctx->f10.d;
    // 0x803F4BA0: nop

    // 0x803F4BA4: bc1f        L_803F4BBC
    if (!c1cs) {
        // 0x803F4BA8: nop
    
            goto L_803F4BBC;
    }
    // 0x803F4BA8: nop

    // 0x803F4BAC: jal         0x803F3A98
    // 0x803F4BB0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_803F0000_menu_func_803F3A98(rdram, ctx);
        goto after_39;
    // 0x803F4BB0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_39:
    // 0x803F4BB4: b           L_803F4D78
    // 0x803F4BB8: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_803F4D78;
    // 0x803F4BB8: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_803F4BBC:
    // 0x803F4BBC: jal         0x803F401C
    // 0x803F4BC0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_803F0000_menu_func_803F401C(rdram, ctx);
        goto after_40;
    // 0x803F4BC0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_40:
    // 0x803F4BC4: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x803F4BC8: sh          $t2, 0x8A($sp)
    MEM_H(0X8A, ctx->r29) = ctx->r10;
    // 0x803F4BCC: lw          $v0, 0xC8($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XC8);
    // 0x803F4BD0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x803F4BD4: lhu         $t3, 0x95C($v0)
    ctx->r11 = MEM_HU(ctx->r2, 0X95C);
    // 0x803F4BD8: nop

    // 0x803F4BDC: ori         $t4, $t3, 0x2800
    ctx->r12 = ctx->r11 | 0X2800;
    // 0x803F4BE0: jal         0x803F3D10
    // 0x803F4BE4: sh          $t4, 0x95C($v0)
    MEM_H(0X95C, ctx->r2) = ctx->r12;
    ovl_803F0000_menu_func_803F3D10(rdram, ctx);
        goto after_41;
    // 0x803F4BE4: sh          $t4, 0x95C($v0)
    MEM_H(0X95C, ctx->r2) = ctx->r12;
    after_41:
    // 0x803F4BE8: b           L_803F4D78
    // 0x803F4BEC: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_803F4D78;
    // 0x803F4BEC: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_803F4BF0:
    // 0x803F4BF0: lhu         $t5, 0x95C($v0)
    ctx->r13 = MEM_HU(ctx->r2, 0X95C);
    // 0x803F4BF4: addiu       $t7, $zero, 0x8
    ctx->r15 = ADD32(0, 0X8);
    // 0x803F4BF8: andi        $t6, $t5, 0xFFFE
    ctx->r14 = ctx->r13 & 0XFFFE;
    // 0x803F4BFC: sh          $t6, 0x95C($v0)
    MEM_H(0X95C, ctx->r2) = ctx->r14;
    // 0x803F4C00: sh          $t7, 0x8A($sp)
    MEM_H(0X8A, ctx->r29) = ctx->r15;
    // 0x803F4C04: lw          $v0, 0xC8($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XC8);
    // 0x803F4C08: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x803F4C0C: lw          $t8, 0x958($v0)
    ctx->r24 = MEM_W(ctx->r2, 0X958);
    // 0x803F4C10: addiu       $t4, $zero, 0x13
    ctx->r12 = ADD32(0, 0X13);
    // 0x803F4C14: beq         $t8, $zero, L_803F4C68
    if (ctx->r24 == 0) {
        // 0x803F4C18: nop
    
            goto L_803F4C68;
    }
    // 0x803F4C18: nop

    // 0x803F4C1C: jal         0x8006B35C
    // 0x803F4C20: addiu       $a1, $sp, 0x38
    ctx->r5 = ADD32(ctx->r29, 0X38);
    func_8006B35C(rdram, ctx);
        goto after_42;
    // 0x803F4C20: addiu       $a1, $sp, 0x38
    ctx->r5 = ADD32(ctx->r29, 0X38);
    after_42:
    // 0x803F4C24: lw          $t9, 0xC8($s0)
    ctx->r25 = MEM_W(ctx->r16, 0XC8);
    // 0x803F4C28: addiu       $a1, $zero, 0x13
    ctx->r5 = ADD32(0, 0X13);
    // 0x803F4C2C: lw          $t0, 0x958($t9)
    ctx->r8 = MEM_W(ctx->r25, 0X958);
    // 0x803F4C30: addiu       $a2, $sp, 0x38
    ctx->r6 = ADD32(ctx->r29, 0X38);
    // 0x803F4C34: lwc1        $f12, 0x84($t0)
    ctx->f12.u32l = MEM_W(ctx->r8, 0X84);
    // 0x803F4C38: jal         0x803F0000
    // 0x803F4C3C: addiu       $a3, $sp, 0x84
    ctx->r7 = ADD32(ctx->r29, 0X84);
    ovl_803F0000_menu_func_803F0000(rdram, ctx);
        goto after_43;
    // 0x803F4C3C: addiu       $a3, $sp, 0x84
    ctx->r7 = ADD32(ctx->r29, 0X84);
    after_43:
    // 0x803F4C40: lw          $t1, 0xC8($s0)
    ctx->r9 = MEM_W(ctx->r16, 0XC8);
    // 0x803F4C44: nop

    // 0x803F4C48: sh          $v0, 0x960($t1)
    MEM_H(0X960, ctx->r9) = ctx->r2;
    // 0x803F4C4C: lw          $t2, 0xC8($s0)
    ctx->r10 = MEM_W(ctx->r16, 0XC8);
    // 0x803F4C50: nop

    // 0x803F4C54: lw          $t3, 0x958($t2)
    ctx->r11 = MEM_W(ctx->r10, 0X958);
    // 0x803F4C58: nop

    // 0x803F4C5C: lwc1        $f6, 0x88($t3)
    ctx->f6.u32l = MEM_W(ctx->r11, 0X88);
    // 0x803F4C60: b           L_803F4C94
    // 0x803F4C64: swc1        $f6, 0xBC($s0)
    MEM_W(0XBC, ctx->r16) = ctx->f6.u32l;
        goto L_803F4C94;
    // 0x803F4C64: swc1        $f6, 0xBC($s0)
    MEM_W(0XBC, ctx->r16) = ctx->f6.u32l;
L_803F4C68:
    // 0x803F4C68: sh          $t4, 0x960($v0)
    MEM_H(0X960, ctx->r2) = ctx->r12;
    // 0x803F4C6C: lw          $t5, 0xC8($s0)
    ctx->r13 = MEM_W(ctx->r16, 0XC8);
    // 0x803F4C70: lui         $at, 0x803F
    ctx->r1 = S32(0X803F << 16);
    // 0x803F4C74: lw          $t6, 0x24($t5)
    ctx->r14 = MEM_W(ctx->r13, 0X24);
    // 0x803F4C78: lwc1        $f19, 0x7D78($at)
    ctx->f_odd[(19 - 1) * 2] = MEM_W(ctx->r1, 0X7D78);
    // 0x803F4C7C: lwc1        $f4, 0x8C0($t6)
    ctx->f4.u32l = MEM_W(ctx->r14, 0X8C0);
    // 0x803F4C80: lwc1        $f18, 0x7D7C($at)
    ctx->f18.u32l = MEM_W(ctx->r1, 0X7D7C);
    // 0x803F4C84: cvt.d.s     $f8, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f8.d = CVT_D_S(ctx->f4.fl);
    // 0x803F4C88: add.d       $f16, $f8, $f18
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f18.d); 
    ctx->f16.d = ctx->f8.d + ctx->f18.d;
    // 0x803F4C8C: cvt.s.d     $f10, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.d); 
    ctx->f10.fl = CVT_S_D(ctx->f16.d);
    // 0x803F4C90: swc1        $f10, 0xBC($s0)
    MEM_W(0XBC, ctx->r16) = ctx->f10.u32l;
L_803F4C94:
    // 0x803F4C94: lhu         $t7, 0x12($s0)
    ctx->r15 = MEM_HU(ctx->r16, 0X12);
    // 0x803F4C98: nop

    // 0x803F4C9C: ori         $t8, $t7, 0x4
    ctx->r24 = ctx->r15 | 0X4;
    // 0x803F4CA0: b           L_803F4D74
    // 0x803F4CA4: sh          $t8, 0x12($s0)
    MEM_H(0X12, ctx->r16) = ctx->r24;
        goto L_803F4D74;
    // 0x803F4CA4: sh          $t8, 0x12($s0)
    MEM_H(0X12, ctx->r16) = ctx->r24;
L_803F4CA8:
    // 0x803F4CA8: lui         $at, 0x4080
    ctx->r1 = S32(0X4080 << 16);
    // 0x803F4CAC: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    // 0x803F4CB0: lui         $at, 0x3FC0
    ctx->r1 = S32(0X3FC0 << 16);
    // 0x803F4CB4: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x803F4CB8: lui         $a2, 0x3E19
    ctx->r6 = S32(0X3E19 << 16);
    // 0x803F4CBC: lui         $a3, 0x3D4C
    ctx->r7 = S32(0X3D4C << 16);
    // 0x803F4CC0: addiu       $t9, $sp, 0x38
    ctx->r25 = ADD32(ctx->r29, 0X38);
    // 0x803F4CC4: sw          $t9, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r25;
    // 0x803F4CC8: ori         $a3, $a3, 0xCCCD
    ctx->r7 = ctx->r7 | 0XCCCD;
    // 0x803F4CCC: jal         0x8005743C
    // 0x803F4CD0: ori         $a2, $a2, 0x999A
    ctx->r6 = ctx->r6 | 0X999A;
    func_8005743C(rdram, ctx);
        goto after_44;
    // 0x803F4CD0: ori         $a2, $a2, 0x999A
    ctx->r6 = ctx->r6 | 0X999A;
    after_44:
    // 0x803F4CD4: lw          $t0, 0xC8($s0)
    ctx->r8 = MEM_W(ctx->r16, 0XC8);
    // 0x803F4CD8: addiu       $a1, $zero, 0x13
    ctx->r5 = ADD32(0, 0X13);
    // 0x803F4CDC: lw          $t1, 0x958($t0)
    ctx->r9 = MEM_W(ctx->r8, 0X958);
    // 0x803F4CE0: addiu       $a2, $sp, 0x38
    ctx->r6 = ADD32(ctx->r29, 0X38);
    // 0x803F4CE4: lwc1        $f12, 0x84($t1)
    ctx->f12.u32l = MEM_W(ctx->r9, 0X84);
    // 0x803F4CE8: jal         0x803F0000
    // 0x803F4CEC: addiu       $a3, $sp, 0x84
    ctx->r7 = ADD32(ctx->r29, 0X84);
    ovl_803F0000_menu_func_803F0000(rdram, ctx);
        goto after_45;
    // 0x803F4CEC: addiu       $a3, $sp, 0x84
    ctx->r7 = ADD32(ctx->r29, 0X84);
    after_45:
    // 0x803F4CF0: lw          $t2, 0xC8($s0)
    ctx->r10 = MEM_W(ctx->r16, 0XC8);
    // 0x803F4CF4: addiu       $t3, $zero, 0x1
    ctx->r11 = ADD32(0, 0X1);
    // 0x803F4CF8: sh          $v0, 0x960($t2)
    MEM_H(0X960, ctx->r10) = ctx->r2;
    // 0x803F4CFC: sh          $t3, 0x8A($sp)
    MEM_H(0X8A, ctx->r29) = ctx->r11;
    // 0x803F4D00: lw          $t4, 0xC8($s0)
    ctx->r12 = MEM_W(ctx->r16, 0XC8);
    // 0x803F4D04: lhu         $t6, 0x12($s0)
    ctx->r14 = MEM_HU(ctx->r16, 0X12);
    // 0x803F4D08: lw          $t5, 0x958($t4)
    ctx->r13 = MEM_W(ctx->r12, 0X958);
    // 0x803F4D0C: ori         $t7, $t6, 0x4
    ctx->r15 = ctx->r14 | 0X4;
    // 0x803F4D10: lwc1        $f6, 0x88($t5)
    ctx->f6.u32l = MEM_W(ctx->r13, 0X88);
    // 0x803F4D14: sh          $t7, 0x12($s0)
    MEM_H(0X12, ctx->r16) = ctx->r15;
    // 0x803F4D18: b           L_803F4D74
    // 0x803F4D1C: swc1        $f6, 0xBC($s0)
    MEM_W(0XBC, ctx->r16) = ctx->f6.u32l;
        goto L_803F4D74;
    // 0x803F4D1C: swc1        $f6, 0xBC($s0)
    MEM_W(0XBC, ctx->r16) = ctx->f6.u32l;
L_803F4D20:
    // 0x803F4D20: jal         0x803F34D4
    // 0x803F4D24: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_803F0000_menu_func_803F34D4(rdram, ctx);
        goto after_46;
    // 0x803F4D24: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_46:
    // 0x803F4D28: b           L_803F4D78
    // 0x803F4D2C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_803F4D78;
    // 0x803F4D2C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_803F4D30:
    // 0x803F4D30: jal         0x803F3A98
    // 0x803F4D34: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_803F0000_menu_func_803F3A98(rdram, ctx);
        goto after_47;
    // 0x803F4D34: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_47:
    // 0x803F4D38: b           L_803F4D78
    // 0x803F4D3C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_803F4D78;
    // 0x803F4D3C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_803F4D40:
    // 0x803F4D40: jal         0x803F2A40
    // 0x803F4D44: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_803F0000_menu_func_803F2A40(rdram, ctx);
        goto after_48;
    // 0x803F4D44: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_48:
    // 0x803F4D48: bne         $v0, $zero, L_803F4D78
    if (ctx->r2 != 0) {
        // 0x803F4D4C: lw          $ra, 0x24($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X24);
            goto L_803F4D78;
    }
    // 0x803F4D4C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x803F4D50: jal         0x803F2464
    // 0x803F4D54: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_803F0000_menu_func_803F2464(rdram, ctx);
        goto after_49;
    // 0x803F4D54: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_49:
    // 0x803F4D58: b           L_803F4D78
    // 0x803F4D5C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_803F4D78;
    // 0x803F4D5C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_803F4D60:
    // 0x803F4D60: lhu         $t8, 0x12($s0)
    ctx->r24 = MEM_HU(ctx->r16, 0X12);
    // 0x803F4D64: mtc1        $zero, $f14
    ctx->f14.u32l = 0;
    // 0x803F4D68: ori         $t9, $t8, 0x8
    ctx->r25 = ctx->r24 | 0X8;
    // 0x803F4D6C: sh          $t9, 0x12($s0)
    MEM_H(0X12, ctx->r16) = ctx->r25;
    // 0x803F4D70: swc1        $f14, 0xAC($s0)
    MEM_W(0XAC, ctx->r16) = ctx->f14.u32l;
L_803F4D74:
    // 0x803F4D74: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_803F4D78:
    // 0x803F4D78: lhu         $v0, 0x8A($sp)
    ctx->r2 = MEM_HU(ctx->r29, 0X8A);
    // 0x803F4D7C: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x803F4D80: jr          $ra
    // 0x803F4D84: addiu       $sp, $sp, 0xD0
    ctx->r29 = ADD32(ctx->r29, 0XD0);
    return;
    // 0x803F4D84: addiu       $sp, $sp, 0xD0
    ctx->r29 = ADD32(ctx->r29, 0XD0);
;}
RECOMP_FUNC void ovl_803F0000_menu_func_803F43C4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803F43C4: nop

    // 0x803F43C8: andi        $t7, $t6, 0x1
    ctx->r15 = ctx->r14 & 0X1;
    // 0x803F43CC: beq         $t7, $zero, L_803F43DC
    if (ctx->r15 == 0) {
        // 0x803F43D0: nop
    
            goto L_803F43DC;
    }
    // 0x803F43D0: nop

    // 0x803F43D4: b           L_803F43DC
    // 0x803F43D8: addiu       $a3, $zero, 0x64
    ctx->r7 = ADD32(0, 0X64);
        goto L_803F43DC;
    // 0x803F43D8: addiu       $a3, $zero, 0x64
    ctx->r7 = ADD32(0, 0X64);
L_803F43DC:
    // 0x803F43DC: lhu         $t8, 0x95C($v0)
    ctx->r24 = MEM_HU(ctx->r2, 0X95C);
    // 0x803F43E0: nop

    // 0x803F43E4: ori         $t9, $t8, 0x10
    ctx->r25 = ctx->r24 | 0X10;
    // 0x803F43E8: sh          $t9, 0x95C($v0)
    MEM_H(0X95C, ctx->r2) = ctx->r25;
    // 0x803F43EC: mtc1        $a3, $f16
    ctx->f16.u32l = ctx->r7;
    // 0x803F43F0: lwc1        $f10, 0x4C($v1)
    ctx->f10.u32l = MEM_W(ctx->r3, 0X4C);
    // 0x803F43F4: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x803F43F8: sw          $v1, 0xCC($sp)
    MEM_W(0XCC, ctx->r29) = ctx->r3;
    // 0x803F43FC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x803F4400: add.s       $f4, $f10, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f10.fl + ctx->f18.fl;
    // 0x803F4404: addiu       $a2, $zero, 0x199
    ctx->r6 = ADD32(0, 0X199);
    // 0x803F4408: cfc1        $t0, $FpcCsr
    ctx->r8 = get_cop1_cs();
    // 0x803F440C: nop

    // 0x803F4410: ori         $at, $t0, 0x3
    ctx->r1 = ctx->r8 | 0X3;
    // 0x803F4414: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x803F4418: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x803F441C: nop

    // 0x803F4420: cvt.w.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = CVT_W_S(ctx->f4.fl);
    // 0x803F4424: mfc1        $a1, $f6
    ctx->r5 = (int32_t)ctx->f6.u32l;
    // 0x803F4428: ctc1        $t0, $FpcCsr
    set_cop1_cs(ctx->r8);
    // 0x803F442C: jal         0x803F3CCC
    // 0x803F4430: nop

    ovl_803F0000_menu_func_803F3CCC(rdram, ctx);
        goto after_0;
    // 0x803F4430: nop

    after_0:
    // 0x803F4434: mtc1        $v0, $f8
    ctx->f8.u32l = ctx->r2;
    // 0x803F4438: lw          $v1, 0xCC($sp)
    ctx->r3 = MEM_W(ctx->r29, 0XCC);
    // 0x803F443C: cvt.s.w     $f8, $f8
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 8);
    ctx->f8.fl = CVT_S_W(ctx->f8.u32l);
    // 0x803F4440: lw          $a2, 0x44($v1)
    ctx->r6 = MEM_W(ctx->r3, 0X44);
    // 0x803F4444: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x803F4448: mfc1        $a1, $f8
    ctx->r5 = (int32_t)ctx->f8.u32l;
    // 0x803F444C: jal         0x80272B98
    // 0x803F4450: addiu       $a3, $sp, 0xB0
    ctx->r7 = ADD32(ctx->r29, 0XB0);
    LOOKUP_FUNC(0x80272B98)(rdram, ctx);
        goto after_1;
    // 0x803F4450: addiu       $a3, $sp, 0xB0
    ctx->r7 = ADD32(ctx->r29, 0XB0);
    after_1:
    // 0x803F4454: lwc1        $f16, 0xB0($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0XB0);
    // 0x803F4458: lui         $a2, 0x800B
    ctx->r6 = S32(0X800B << 16);
    // 0x803F445C: swc1        $f16, 0xBC($s0)
    MEM_W(0XBC, ctx->r16) = ctx->f16.u32l;
    // 0x803F4460: lwc1        $f12, 0xB4($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0XB4);
    // 0x803F4464: lui         $a3, 0x800B
    ctx->r7 = S32(0X800B << 16);
    // 0x803F4468: addiu       $a3, $a3, -0x53AC
    ctx->r7 = ADD32(ctx->r7, -0X53AC);
    // 0x803F446C: addiu       $a2, $a2, -0x53C4
    ctx->r6 = ADD32(ctx->r6, -0X53C4);
    // 0x803F4470: jal         0x803F0000
    // 0x803F4474: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
    ovl_803F0000_menu_func_803F0000(rdram, ctx);
        goto after_2;
    // 0x803F4474: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
    after_2:
    // 0x803F4478: lw          $t1, 0xC8($s0)
    ctx->r9 = MEM_W(ctx->r16, 0XC8);
    // 0x803F447C: b           L_803F4D74
    // 0x803F4480: sh          $v0, 0x960($t1)
    MEM_H(0X960, ctx->r9) = ctx->r2;
        goto L_803F4D74;
    // 0x803F4480: sh          $v0, 0x960($t1)
    MEM_H(0X960, ctx->r9) = ctx->r2;
    // 0x803F4484: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x803F4488: jal         0x803F4EFC
    // 0x803F448C: addiu       $a1, $sp, 0xB8
    ctx->r5 = ADD32(ctx->r29, 0XB8);
    ovl_803F0000_menu_func_803F4EFC(rdram, ctx);
        goto after_3;
    // 0x803F448C: addiu       $a1, $sp, 0xB8
    ctx->r5 = ADD32(ctx->r29, 0XB8);
    after_3:
    // 0x803F4490: beq         $v0, $zero, L_803F4D74
    if (ctx->r2 == 0) {
        // 0x803F4494: or          $a0, $v0, $zero
        ctx->r4 = ctx->r2 | 0;
            goto L_803F4D74;
    }
    // 0x803F4494: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x803F4498: lui         $at, 0x4220
    ctx->r1 = S32(0X4220 << 16);
    // 0x803F449C: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x803F44A0: lwc1        $f10, 0x84($v0)
    ctx->f10.u32l = MEM_W(ctx->r2, 0X84);
    // 0x803F44A4: lw          $a1, 0xB8($sp)
    ctx->r5 = MEM_W(ctx->r29, 0XB8);
    // 0x803F44A8: c.lt.s      $f10, $f18
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f10.fl < ctx->f18.fl;
    // 0x803F44AC: nop

    // 0x803F44B0: bc1f        L_803F4D78
    if (!c1cs) {
        // 0x803F44B4: lw          $ra, 0x24($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X24);
            goto L_803F4D78;
    }
    // 0x803F44B4: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x803F44B8: jal         0x803F5454
    // 0x803F44BC: nop

    ovl_803F0000_menu_func_803F5454(rdram, ctx);
        goto after_4;
    // 0x803F44BC: nop

    after_4:
    // 0x803F44C0: swc1        $f0, 0xC0($sp)
    MEM_W(0XC0, ctx->r29) = ctx->f0.u32l;
    // 0x803F44C4: jal         0x80059898
    // 0x803F44C8: addiu       $a0, $zero, 0x14
    ctx->r4 = ADD32(0, 0X14);
    func_80059898(rdram, ctx);
        goto after_5;
    // 0x803F44C8: addiu       $a0, $zero, 0x14
    ctx->r4 = ADD32(0, 0X14);
    after_5:
    // 0x803F44CC: addiu       $t2, $v0, 0x14
    ctx->r10 = ADD32(ctx->r2, 0X14);
    // 0x803F44D0: mtc1        $t2, $f4
    ctx->f4.u32l = ctx->r10;
    // 0x803F44D4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x803F44D8: addiu       $a1, $sp, 0x8C
    ctx->r5 = ADD32(ctx->r29, 0X8C);
    // 0x803F44DC: bgez        $t2, L_803F44F4
    if (SIGNED(ctx->r10) >= 0) {
        // 0x803F44E0: cvt.s.w     $f4, $f4
        CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    ctx->f4.fl = CVT_S_W(ctx->f4.u32l);
            goto L_803F44F4;
    }
    // 0x803F44E0: cvt.s.w     $f4, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    ctx->f4.fl = CVT_S_W(ctx->f4.u32l);
    // 0x803F44E4: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x803F44E8: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x803F44EC: nop

    // 0x803F44F0: add.s       $f4, $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f4.fl = ctx->f4.fl + ctx->f6.fl;
L_803F44F4:
    // 0x803F44F4: mfc1        $a2, $f4
    ctx->r6 = (int32_t)ctx->f4.u32l;
    // 0x803F44F8: lw          $a3, 0xC0($sp)
    ctx->r7 = MEM_W(ctx->r29, 0XC0);
    // 0x803F44FC: jal         0x803F50B4
    // 0x803F4500: nop

    ovl_803F0000_menu_func_803F50B4(rdram, ctx);
        goto after_6;
    // 0x803F4500: nop

    after_6:
    // 0x803F4504: lhu         $t3, 0x18($s0)
    ctx->r11 = MEM_HU(ctx->r16, 0X18);
    // 0x803F4508: lwc1        $f8, 0x98($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X98);
    // 0x803F450C: ori         $t4, $t3, 0x8
    ctx->r12 = ctx->r11 | 0X8;
    // 0x803F4510: sh          $t4, 0x18($s0)
    MEM_H(0X18, ctx->r16) = ctx->r12;
    // 0x803F4514: addiu       $t5, $zero, 0x800
    ctx->r13 = ADD32(0, 0X800);
    // 0x803F4518: swc1        $f8, 0xB0($s0)
    MEM_W(0XB0, ctx->r16) = ctx->f8.u32l;
    // 0x803F451C: b           L_803F4D74
    // 0x803F4520: sh          $t5, 0x8A($sp)
    MEM_H(0X8A, ctx->r29) = ctx->r13;
        goto L_803F4D74;
    // 0x803F4520: sh          $t5, 0x8A($sp)
    MEM_H(0X8A, ctx->r29) = ctx->r13;
    // 0x803F4524: lhu         $t6, 0x95C($v0)
    ctx->r14 = MEM_HU(ctx->r2, 0X95C);
    // 0x803F4528: ori         $t0, $zero, 0x8000
    ctx->r8 = 0 | 0X8000;
    // 0x803F452C: andi        $t7, $t6, 0xFFFC
    ctx->r15 = ctx->r14 & 0XFFFC;
    // 0x803F4530: sh          $t7, 0x95C($v0)
    MEM_H(0X95C, ctx->r2) = ctx->r15;
    // 0x803F4534: lw          $v0, 0xC8($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XC8);
    // 0x803F4538: lui         $at, 0x803F
    ctx->r1 = S32(0X803F << 16);
    // 0x803F453C: lhu         $t8, 0x95C($v0)
    ctx->r24 = MEM_HU(ctx->r2, 0X95C);
    // 0x803F4540: addiu       $t4, $zero, 0x14
    ctx->r12 = ADD32(0, 0X14);
    // 0x803F4544: ori         $t9, $t8, 0x4
    ctx->r25 = ctx->r24 | 0X4;
    // 0x803F4548: sh          $t9, 0x95C($v0)
    MEM_H(0X95C, ctx->r2) = ctx->r25;
    // 0x803F454C: sh          $t0, 0x8A($sp)
    MEM_H(0X8A, ctx->r29) = ctx->r8;
    // 0x803F4550: lw          $v0, 0xC8($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XC8);
    // 0x803F4554: nop

    // 0x803F4558: lw          $t1, 0x958($v0)
    ctx->r9 = MEM_W(ctx->r2, 0X958);
    // 0x803F455C: nop

    // 0x803F4560: lwc1        $f16, 0x88($t1)
    ctx->f16.u32l = MEM_W(ctx->r9, 0X88);
    // 0x803F4564: nop

    // 0x803F4568: swc1        $f16, 0xBC($s0)
    MEM_W(0XBC, ctx->r16) = ctx->f16.u32l;
    // 0x803F456C: lwc1        $f10, 0x7D58($at)
    ctx->f10.u32l = MEM_W(ctx->r1, 0X7D58);
    // 0x803F4570: nop

    // 0x803F4574: swc1        $f10, 0x940($v0)
    MEM_W(0X940, ctx->r2) = ctx->f10.u32l;
    // 0x803F4578: lhu         $t2, 0x12($s0)
    ctx->r10 = MEM_HU(ctx->r16, 0X12);
    // 0x803F457C: lw          $t5, 0xC8($s0)
    ctx->r13 = MEM_W(ctx->r16, 0XC8);
    // 0x803F4580: ori         $t3, $t2, 0x4
    ctx->r11 = ctx->r10 | 0X4;
    // 0x803F4584: sh          $t3, 0x12($s0)
    MEM_H(0X12, ctx->r16) = ctx->r11;
    // 0x803F4588: b           L_803F4D74
    // 0x803F458C: sh          $t4, 0x938($t5)
    MEM_H(0X938, ctx->r13) = ctx->r12;
        goto L_803F4D74;
    // 0x803F458C: sh          $t4, 0x938($t5)
    MEM_H(0X938, ctx->r13) = ctx->r12;
    // 0x803F4590: jal         0x803F40C4
    // 0x803F4594: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_803F0000_menu_func_803F40C4(rdram, ctx);
        goto after_7;
    // 0x803F4594: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_7:
    // 0x803F4598: jal         0x803F4110
    // 0x803F459C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_803F0000_menu_func_803F4110(rdram, ctx);
        goto after_8;
    // 0x803F459C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_8:
    // 0x803F45A0: bne         $v0, $zero, L_803F45E4
    if (ctx->r2 != 0) {
        // 0x803F45A4: nop
    
            goto L_803F45E4;
    }
    // 0x803F45A4: nop

    // 0x803F45A8: lw          $v0, 0xC8($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XC8);
    // 0x803F45AC: addiu       $t8, $zero, 0x4
    ctx->r24 = ADD32(0, 0X4);
    // 0x803F45B0: lhu         $t6, 0x95C($v0)
    ctx->r14 = MEM_HU(ctx->r2, 0X95C);
    // 0x803F45B4: nop

    // 0x803F45B8: andi        $t7, $t6, 0xFFFC
    ctx->r15 = ctx->r14 & 0XFFFC;
    // 0x803F45BC: sh          $t7, 0x95C($v0)
    MEM_H(0X95C, ctx->r2) = ctx->r15;
    // 0x803F45C0: sh          $t8, 0x8A($sp)
    MEM_H(0X8A, ctx->r29) = ctx->r24;
    // 0x803F45C4: lw          $t9, 0xC8($s0)
    ctx->r25 = MEM_W(ctx->r16, 0XC8);
    // 0x803F45C8: lhu         $t1, 0x12($s0)
    ctx->r9 = MEM_HU(ctx->r16, 0X12);
    // 0x803F45CC: lw          $t0, 0x958($t9)
    ctx->r8 = MEM_W(ctx->r25, 0X958);
    // 0x803F45D0: ori         $t2, $t1, 0x4
    ctx->r10 = ctx->r9 | 0X4;
    // 0x803F45D4: lwc1        $f18, 0x88($t0)
    ctx->f18.u32l = MEM_W(ctx->r8, 0X88);
    // 0x803F45D8: sh          $t2, 0x12($s0)
    MEM_H(0X12, ctx->r16) = ctx->r10;
    // 0x803F45DC: b           L_803F4D74
    // 0x803F45E0: swc1        $f18, 0xBC($s0)
    MEM_W(0XBC, ctx->r16) = ctx->f18.u32l;
        goto L_803F4D74;
    // 0x803F45E0: swc1        $f18, 0xBC($s0)
    MEM_W(0XBC, ctx->r16) = ctx->f18.u32l;
L_803F45E4:
    // 0x803F45E4: lw          $v0, 0xC8($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XC8);
    // 0x803F45E8: nop

    // 0x803F45EC: lhu         $t3, 0x6($v0)
    ctx->r11 = MEM_HU(ctx->r2, 0X6);
    // 0x803F45F0: lui         $t5, 0x803F
    ctx->r13 = S32(0X803F << 16);
    // 0x803F45F4: addiu       $t5, $t5, 0x7E08
    ctx->r13 = ADD32(ctx->r13, 0X7E08);
    // 0x803F45F8: sll         $t4, $t3, 2
    ctx->r12 = S32(ctx->r11 << 2);
    // 0x803F45FC: addu        $v1, $t4, $t5
    ctx->r3 = ADD32(ctx->r12, ctx->r13);
    // 0x803F4600: lbu         $t6, 0x0($v1)
    ctx->r14 = MEM_BU(ctx->r3, 0X0);
    // 0x803F4604: addiu       $t0, $zero, 0x4000
    ctx->r8 = ADD32(0, 0X4000);
    // 0x803F4608: ori         $t7, $t6, 0x80
    ctx->r15 = ctx->r14 | 0X80;
    // 0x803F460C: sb          $t7, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r15;
    // 0x803F4610: lw          $v0, 0xC8($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XC8);
    // 0x803F4614: nop

    // 0x803F4618: lhu         $t8, 0x95C($v0)
    ctx->r24 = MEM_HU(ctx->r2, 0X95C);
    // 0x803F461C: nop

    // 0x803F4620: andi        $t9, $t8, 0xFFFC
    ctx->r25 = ctx->r24 & 0XFFFC;
    // 0x803F4624: sh          $t9, 0x95C($v0)
    MEM_H(0X95C, ctx->r2) = ctx->r25;
    // 0x803F4628: sh          $t0, 0x8A($sp)
    MEM_H(0X8A, ctx->r29) = ctx->r8;
    // 0x803F462C: lw          $t1, 0xC8($s0)
    ctx->r9 = MEM_W(ctx->r16, 0XC8);
    // 0x803F4630: lhu         $t3, 0x12($s0)
    ctx->r11 = MEM_HU(ctx->r16, 0X12);
    // 0x803F4634: lw          $t2, 0x958($t1)
    ctx->r10 = MEM_W(ctx->r9, 0X958);
    // 0x803F4638: ori         $t4, $t3, 0x4
    ctx->r12 = ctx->r11 | 0X4;
    // 0x803F463C: lwc1        $f4, 0x88($t2)
    ctx->f4.u32l = MEM_W(ctx->r10, 0X88);
    // 0x803F4640: sh          $t4, 0x12($s0)
    MEM_H(0X12, ctx->r16) = ctx->r12;
    // 0x803F4644: b           L_803F4D74
    // 0x803F4648: swc1        $f4, 0xBC($s0)
    MEM_W(0XBC, ctx->r16) = ctx->f4.u32l;
        goto L_803F4D74;
    // 0x803F4648: swc1        $f4, 0xBC($s0)
    MEM_W(0XBC, ctx->r16) = ctx->f4.u32l;
    // 0x803F464C: lhu         $t5, 0x95C($v0)
    ctx->r13 = MEM_HU(ctx->r2, 0X95C);
    // 0x803F4650: addiu       $t7, $zero, 0x8
    ctx->r15 = ADD32(0, 0X8);
    // 0x803F4654: andi        $t6, $t5, 0xFFFE
    ctx->r14 = ctx->r13 & 0XFFFE;
    // 0x803F4658: sh          $t6, 0x95C($v0)
    MEM_H(0X95C, ctx->r2) = ctx->r14;
    // 0x803F465C: sh          $t7, 0x8A($sp)
    MEM_H(0X8A, ctx->r29) = ctx->r15;
    // 0x803F4660: jal         0x803F3E54
    // 0x803F4664: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_803F0000_menu_func_803F3E54(rdram, ctx);
        goto after_9;
    // 0x803F4664: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_9:
    // 0x803F4668: lhu         $t8, 0x12($s0)
    ctx->r24 = MEM_HU(ctx->r16, 0X12);
    // 0x803F466C: swc1        $f0, 0xBC($s0)
    MEM_W(0XBC, ctx->r16) = ctx->f0.u32l;
    // 0x803F4670: ori         $t9, $t8, 0x4
    ctx->r25 = ctx->r24 | 0X4;
    // 0x803F4674: b           L_803F4D74
    // 0x803F4678: sh          $t9, 0x12($s0)
    MEM_H(0X12, ctx->r16) = ctx->r25;
        goto L_803F4D74;
    // 0x803F4678: sh          $t9, 0x12($s0)
    MEM_H(0X12, ctx->r16) = ctx->r25;
    // 0x803F467C: lhu         $t0, 0x95C($v0)
    ctx->r8 = MEM_HU(ctx->r2, 0X95C);
    // 0x803F4680: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x803F4684: andi        $t1, $t0, 0xFFFC
    ctx->r9 = ctx->r8 & 0XFFFC;
    // 0x803F4688: jal         0x803F0EF0
    // 0x803F468C: sh          $t1, 0x95C($v0)
    MEM_H(0X95C, ctx->r2) = ctx->r9;
    ovl_803F0000_menu_func_803F0EF0(rdram, ctx);
        goto after_10;
    // 0x803F468C: sh          $t1, 0x95C($v0)
    MEM_H(0X95C, ctx->r2) = ctx->r9;
    after_10:
    // 0x803F4690: beq         $v0, $zero, L_803F46F4
    if (ctx->r2 == 0) {
        // 0x803F4694: or          $v1, $v0, $zero
        ctx->r3 = ctx->r2 | 0;
            goto L_803F46F4;
    }
    // 0x803F4694: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
    // 0x803F4698: lw          $t2, 0xC8($s0)
    ctx->r10 = MEM_W(ctx->r16, 0XC8);
    // 0x803F469C: lui         $v0, 0x803F
    ctx->r2 = S32(0X803F << 16);
    // 0x803F46A0: lhu         $t3, 0x8($t2)
    ctx->r11 = MEM_HU(ctx->r10, 0X8);
    // 0x803F46A4: addiu       $v0, $v0, 0x75A8
    ctx->r2 = ADD32(ctx->r2, 0X75A8);
    // 0x803F46A8: andi        $t4, $t3, 0x1
    ctx->r12 = ctx->r11 & 0X1;
    // 0x803F46AC: beq         $t4, $zero, L_803F46C0
    if (ctx->r12 == 0) {
        // 0x803F46B0: lui         $t5, 0x803F
        ctx->r13 = S32(0X803F << 16);
            goto L_803F46C0;
    }
    // 0x803F46B0: lui         $t5, 0x803F
    ctx->r13 = S32(0X803F << 16);
    // 0x803F46B4: addiu       $t5, $t5, 0x7598
    ctx->r13 = ADD32(ctx->r13, 0X7598);
    // 0x803F46B8: b           L_803F46C4
    // 0x803F46BC: sw          $t5, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r13;
        goto L_803F46C4;
    // 0x803F46BC: sw          $t5, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r13;
L_803F46C0:
    // 0x803F46C0: sw          $v0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r2;
L_803F46C4:
    // 0x803F46C4: lwc1        $f12, 0x4C($v1)
    ctx->f12.u32l = MEM_W(ctx->r3, 0X4C);
    // 0x803F46C8: lwc1        $f14, 0x44($v1)
    ctx->f14.u32l = MEM_W(ctx->r3, 0X44);
    // 0x803F46CC: lw          $a2, 0x34($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X34);
    // 0x803F46D0: jal         0x8027A184
    // 0x803F46D4: nop

    LOOKUP_FUNC(0x8027A184)(rdram, ctx);
        goto after_11;
    // 0x803F46D4: nop

    after_11:
    // 0x803F46D8: bne         $v0, $zero, L_803F46F4
    if (ctx->r2 != 0) {
        // 0x803F46DC: nop
    
            goto L_803F46F4;
    }
    // 0x803F46DC: nop

    // 0x803F46E0: jal         0x803F401C
    // 0x803F46E4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_803F0000_menu_func_803F401C(rdram, ctx);
        goto after_12;
    // 0x803F46E4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_12:
    // 0x803F46E8: addiu       $t6, $zero, 0x4
    ctx->r14 = ADD32(0, 0X4);
    // 0x803F46EC: b           L_803F4D74
    // 0x803F46F0: sh          $t6, 0x8A($sp)
    MEM_H(0X8A, ctx->r29) = ctx->r14;
        goto L_803F4D74;
    // 0x803F46F0: sh          $t6, 0x8A($sp)
    MEM_H(0X8A, ctx->r29) = ctx->r14;
L_803F46F4:
    // 0x803F46F4: lui         $v0, 0x8009
    ctx->r2 = S32(0X8009 << 16);
    // 0x803F46F8: lw          $v0, 0x3B20($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X3B20);
    // 0x803F46FC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x803F4700: lw          $a1, 0x8($v0)
    ctx->r5 = MEM_W(ctx->r2, 0X8);
    // 0x803F4704: lw          $a2, 0x0($v0)
    ctx->r6 = MEM_W(ctx->r2, 0X0);
    // 0x803F4708: jal         0x803F3EE8
    // 0x803F470C: nop

    ovl_803F0000_menu_func_803F3EE8(rdram, ctx);
        goto after_13;
    // 0x803F470C: nop

    after_13:
    // 0x803F4710: lw          $v0, 0xC8($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XC8);
    // 0x803F4714: addiu       $t9, $zero, 0x8
    ctx->r25 = ADD32(0, 0X8);
    // 0x803F4718: lhu         $t7, 0x95C($v0)
    ctx->r15 = MEM_HU(ctx->r2, 0X95C);
    // 0x803F471C: lui         $at, 0x4316
    ctx->r1 = S32(0X4316 << 16);
    // 0x803F4720: andi        $t8, $t7, 0xFFFE
    ctx->r24 = ctx->r15 & 0XFFFE;
    // 0x803F4724: sh          $t8, 0x95C($v0)
    MEM_H(0X95C, ctx->r2) = ctx->r24;
    // 0x803F4728: sh          $t9, 0x8A($sp)
    MEM_H(0X8A, ctx->r29) = ctx->r25;
    // 0x803F472C: lw          $v0, 0xC8($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XC8);
    // 0x803F4730: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x803F4734: lw          $t0, 0x24($v0)
    ctx->r8 = MEM_W(ctx->r2, 0X24);
    // 0x803F4738: addiu       $t1, $zero, 0x6
    ctx->r9 = ADD32(0, 0X6);
    // 0x803F473C: lwc1        $f8, 0x8BC($t0)
    ctx->f8.u32l = MEM_W(ctx->r8, 0X8BC);
    // 0x803F4740: nop

    // 0x803F4744: c.lt.s      $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f6.fl < ctx->f8.fl;
    // 0x803F4748: nop

    // 0x803F474C: bc1f        L_803F475C
    if (!c1cs) {
        // 0x803F4750: nop
    
            goto L_803F475C;
    }
    // 0x803F4750: nop

    // 0x803F4754: b           L_803F4770
    // 0x803F4758: sh          $t1, 0x960($v0)
    MEM_H(0X960, ctx->r2) = ctx->r9;
        goto L_803F4770;
    // 0x803F4758: sh          $t1, 0x960($v0)
    MEM_H(0X960, ctx->r2) = ctx->r9;
L_803F475C:
    // 0x803F475C: jal         0x80059898
    // 0x803F4760: addiu       $a0, $zero, 0x7
    ctx->r4 = ADD32(0, 0X7);
    func_80059898(rdram, ctx);
        goto after_14;
    // 0x803F4760: addiu       $a0, $zero, 0x7
    ctx->r4 = ADD32(0, 0X7);
    after_14:
    // 0x803F4764: lw          $t2, 0xC8($s0)
    ctx->r10 = MEM_W(ctx->r16, 0XC8);
    // 0x803F4768: nop

    // 0x803F476C: sh          $v0, 0x960($t2)
    MEM_H(0X960, ctx->r10) = ctx->r2;
L_803F4770:
    // 0x803F4770: lhu         $t3, 0x12($s0)
    ctx->r11 = MEM_HU(ctx->r16, 0X12);
    // 0x803F4774: nop

    // 0x803F4778: ori         $t4, $t3, 0x4
    ctx->r12 = ctx->r11 | 0X4;
    // 0x803F477C: b           L_803F4D74
    // 0x803F4780: sh          $t4, 0x12($s0)
    MEM_H(0X12, ctx->r16) = ctx->r12;
        goto L_803F4D74;
    // 0x803F4780: sh          $t4, 0x12($s0)
    MEM_H(0X12, ctx->r16) = ctx->r12;
    // 0x803F4784: lhu         $t5, 0x95C($v0)
    ctx->r13 = MEM_HU(ctx->r2, 0X95C);
    // 0x803F4788: addiu       $t9, $zero, 0x8
    ctx->r25 = ADD32(0, 0X8);
    // 0x803F478C: ori         $t6, $t5, 0x20
    ctx->r14 = ctx->r13 | 0X20;
    // 0x803F4790: sh          $t6, 0x95C($v0)
    MEM_H(0X95C, ctx->r2) = ctx->r14;
    // 0x803F4794: lhu         $t7, 0x12($s0)
    ctx->r15 = MEM_HU(ctx->r16, 0X12);
    // 0x803F4798: addiu       $a0, $zero, 0x28
    ctx->r4 = ADD32(0, 0X28);
    // 0x803F479C: ori         $t8, $t7, 0x4
    ctx->r24 = ctx->r15 | 0X4;
    // 0x803F47A0: sh          $t8, 0x12($s0)
    MEM_H(0X12, ctx->r16) = ctx->r24;
    // 0x803F47A4: jal         0x80059898
    // 0x803F47A8: sh          $t9, 0x8A($sp)
    MEM_H(0X8A, ctx->r29) = ctx->r25;
    func_80059898(rdram, ctx);
        goto after_15;
    // 0x803F47A8: sh          $t9, 0x8A($sp)
    MEM_H(0X8A, ctx->r29) = ctx->r25;
    after_15:
    // 0x803F47AC: mtc1        $v0, $f16
    ctx->f16.u32l = ctx->r2;
    // 0x803F47B0: bgez        $v0, L_803F47C8
    if (SIGNED(ctx->r2) >= 0) {
        // 0x803F47B4: cvt.s.w     $f10, $f16
        CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    ctx->f10.fl = CVT_S_W(ctx->f16.u32l);
            goto L_803F47C8;
    }
    // 0x803F47B4: cvt.s.w     $f10, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    ctx->f10.fl = CVT_S_W(ctx->f16.u32l);
    // 0x803F47B8: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x803F47BC: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x803F47C0: nop

    // 0x803F47C4: add.s       $f10, $f10, $f18
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f10.fl = ctx->f10.fl + ctx->f18.fl;
L_803F47C8:
    // 0x803F47C8: lw          $t0, 0xC8($s0)
    ctx->r8 = MEM_W(ctx->r16, 0XC8);
    // 0x803F47CC: lui         $a2, 0x800B
    ctx->r6 = S32(0X800B << 16);
    // 0x803F47D0: lw          $t1, 0x24($t0)
    ctx->r9 = MEM_W(ctx->r8, 0X24);
    // 0x803F47D4: lui         $a3, 0x800B
    ctx->r7 = S32(0X800B << 16);
    // 0x803F47D8: lwc1        $f4, 0x8BC($t1)
    ctx->f4.u32l = MEM_W(ctx->r9, 0X8BC);
    // 0x803F47DC: addiu       $a3, $a3, -0x5270
    ctx->r7 = ADD32(ctx->r7, -0X5270);
    // 0x803F47E0: addiu       $a2, $a2, -0x5288
    ctx->r6 = ADD32(ctx->r6, -0X5288);
    // 0x803F47E4: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
    // 0x803F47E8: jal         0x803F0000
    // 0x803F47EC: add.s       $f12, $f10, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f12.fl = ctx->f10.fl + ctx->f4.fl;
    ovl_803F0000_menu_func_803F0000(rdram, ctx);
        goto after_16;
    // 0x803F47EC: add.s       $f12, $f10, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f12.fl = ctx->f10.fl + ctx->f4.fl;
    after_16:
    // 0x803F47F0: lw          $t2, 0xC8($s0)
    ctx->r10 = MEM_W(ctx->r16, 0XC8);
    // 0x803F47F4: b           L_803F4D74
    // 0x803F47F8: sh          $v0, 0x960($t2)
    MEM_H(0X960, ctx->r10) = ctx->r2;
        goto L_803F4D74;
    // 0x803F47F8: sh          $v0, 0x960($t2)
    MEM_H(0X960, ctx->r10) = ctx->r2;
    // 0x803F47FC: lhu         $t3, 0x95C($v0)
    ctx->r11 = MEM_HU(ctx->r2, 0X95C);
    // 0x803F4800: addiu       $t5, $zero, 0x1
    ctx->r13 = ADD32(0, 0X1);
    // 0x803F4804: andi        $t4, $t3, 0xFFFE
    ctx->r12 = ctx->r11 & 0XFFFE;
    // 0x803F4808: sh          $t4, 0x95C($v0)
    MEM_H(0X95C, ctx->r2) = ctx->r12;
    // 0x803F480C: sh          $t5, 0x8A($sp)
    MEM_H(0X8A, ctx->r29) = ctx->r13;
    // 0x803F4810: lhu         $t6, 0x12($s0)
    ctx->r14 = MEM_HU(ctx->r16, 0X12);
    // 0x803F4814: lw          $t8, 0xC8($s0)
    ctx->r24 = MEM_W(ctx->r16, 0XC8);
    // 0x803F4818: ori         $t7, $t6, 0x4
    ctx->r15 = ctx->r14 | 0X4;
    // 0x803F481C: sh          $t7, 0x12($s0)
    MEM_H(0X12, ctx->r16) = ctx->r15;
    // 0x803F4820: lh          $t9, 0x8CA($t8)
    ctx->r25 = MEM_H(ctx->r24, 0X8CA);
    // 0x803F4824: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x803F4828: addiu       $t0, $t9, 0x32
    ctx->r8 = ADD32(ctx->r25, 0X32);
    // 0x803F482C: mtc1        $t0, $f6
    ctx->f6.u32l = ctx->r8;
    // 0x803F4830: nop

    // 0x803F4834: cvt.s.w     $f6, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    ctx->f6.fl = CVT_S_W(ctx->f6.u32l);
    // 0x803F4838: mfc1        $a1, $f6
    ctx->r5 = (int32_t)ctx->f6.u32l;
    // 0x803F483C: jal         0x8026AB68
    // 0x803F4840: nop

    LOOKUP_FUNC(0x8026AB68)(rdram, ctx);
        goto after_17;
    // 0x803F4840: nop

    after_17:
    // 0x803F4844: mov.s       $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    ctx->f12.fl = ctx->f0.fl;
    // 0x803F4848: jal         0x80272AEC
    // 0x803F484C: swc1        $f0, 0xAC($sp)
    MEM_W(0XAC, ctx->r29) = ctx->f0.u32l;
    LOOKUP_FUNC(0x80272AEC)(rdram, ctx);
        goto after_18;
    // 0x803F484C: swc1        $f0, 0xAC($sp)
    MEM_W(0XAC, ctx->r29) = ctx->f0.u32l;
    after_18:
    // 0x803F4850: lui         $at, 0x803F
    ctx->r1 = S32(0X803F << 16);
    // 0x803F4854: lwc1        $f8, 0x7D5C($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X7D5C);
    // 0x803F4858: lwc1        $f2, 0xAC($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0XAC);
    // 0x803F485C: c.lt.s      $f8, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f8.fl < ctx->f0.fl;
    // 0x803F4860: lui         $t4, 0x8009
    ctx->r12 = S32(0X8009 << 16);
    // 0x803F4864: bc1f        L_803F4890
    if (!c1cs) {
        // 0x803F4868: addiu       $v0, $zero, 0x3C
        ctx->r2 = ADD32(0, 0X3C);
            goto L_803F4890;
    }
    // 0x803F4868: addiu       $v0, $zero, 0x3C
    ctx->r2 = ADD32(0, 0X3C);
    // 0x803F486C: lw          $t1, 0xC8($s0)
    ctx->r9 = MEM_W(ctx->r16, 0XC8);
    // 0x803F4870: nop

    // 0x803F4874: lw          $t2, 0x24($t1)
    ctx->r10 = MEM_W(ctx->r9, 0X24);
    // 0x803F4878: nop

    // 0x803F487C: lh          $t3, 0x8BA($t2)
    ctx->r11 = MEM_H(ctx->r10, 0X8BA);
    // 0x803F4880: nop

    // 0x803F4884: mtc1        $t3, $f16
    ctx->f16.u32l = ctx->r11;
    // 0x803F4888: nop

    // 0x803F488C: cvt.s.w     $f2, $f16
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 16);
    ctx->f2.fl = CVT_S_W(ctx->f16.u32l);
L_803F4890:
    // 0x803F4890: lw          $t4, 0x3B20($t4)
    ctx->r12 = MEM_W(ctx->r12, 0X3B20);
    // 0x803F4894: mtc1        $zero, $f14
    ctx->f14.u32l = 0;
    // 0x803F4898: lwc1        $f18, 0x0($t4)
    ctx->f18.u32l = MEM_W(ctx->r12, 0X0);
    // 0x803F489C: nop

    // 0x803F48A0: c.lt.s      $f14, $f18
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f14.fl < ctx->f18.fl;
    // 0x803F48A4: nop

    // 0x803F48A8: bc1f        L_803F48B8
    if (!c1cs) {
        // 0x803F48AC: nop
    
            goto L_803F48B8;
    }
    // 0x803F48AC: nop

    // 0x803F48B0: b           L_803F48B8
    // 0x803F48B4: addiu       $v0, $zero, -0x3C
    ctx->r2 = ADD32(0, -0X3C);
        goto L_803F48B8;
    // 0x803F48B4: addiu       $v0, $zero, -0x3C
    ctx->r2 = ADD32(0, -0X3C);
L_803F48B8:
    // 0x803F48B8: mtc1        $v0, $f10
    ctx->f10.u32l = ctx->r2;
    // 0x803F48BC: mfc1        $a1, $f2
    ctx->r5 = (int32_t)ctx->f2.u32l;
    // 0x803F48C0: cvt.s.w     $f10, $f10
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 10);
    ctx->f10.fl = CVT_S_W(ctx->f10.u32l);
    // 0x803F48C4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x803F48C8: addiu       $a3, $sp, 0xB0
    ctx->r7 = ADD32(ctx->r29, 0XB0);
    // 0x803F48CC: mfc1        $a2, $f10
    ctx->r6 = (int32_t)ctx->f10.u32l;
    // 0x803F48D0: jal         0x80272B98
    // 0x803F48D4: nop

    LOOKUP_FUNC(0x80272B98)(rdram, ctx);
        goto after_19;
    // 0x803F48D4: nop

    after_19:
    // 0x803F48D8: lwc1        $f4, 0xB0($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0XB0);
    // 0x803F48DC: lui         $a2, 0x800B
    ctx->r6 = S32(0X800B << 16);
    // 0x803F48E0: swc1        $f4, 0xBC($s0)
    MEM_W(0XBC, ctx->r16) = ctx->f4.u32l;
    // 0x803F48E4: lwc1        $f12, 0xB4($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0XB4);
    // 0x803F48E8: lui         $a3, 0x800B
    ctx->r7 = S32(0X800B << 16);
    // 0x803F48EC: addiu       $a3, $a3, -0x53AC
    ctx->r7 = ADD32(ctx->r7, -0X53AC);
    // 0x803F48F0: addiu       $a2, $a2, -0x53C4
    ctx->r6 = ADD32(ctx->r6, -0X53C4);
    // 0x803F48F4: jal         0x803F0000
    // 0x803F48F8: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
    ovl_803F0000_menu_func_803F0000(rdram, ctx);
        goto after_20;
    // 0x803F48F8: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
    after_20:
    // 0x803F48FC: lw          $t5, 0xC8($s0)
    ctx->r13 = MEM_W(ctx->r16, 0XC8);
    // 0x803F4900: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x803F4904: jal         0x803F3D10
    // 0x803F4908: sh          $v0, 0x960($t5)
    MEM_H(0X960, ctx->r13) = ctx->r2;
    ovl_803F0000_menu_func_803F3D10(rdram, ctx);
        goto after_21;
    // 0x803F4908: sh          $v0, 0x960($t5)
    MEM_H(0X960, ctx->r13) = ctx->r2;
    after_21:
    // 0x803F490C: lw          $v0, 0xC8($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XC8);
    // 0x803F4910: nop

    // 0x803F4914: lh          $t6, 0x960($v0)
    ctx->r14 = MEM_H(ctx->r2, 0X960);
    // 0x803F4918: nop

    // 0x803F491C: addiu       $t7, $t6, -0x1
    ctx->r15 = ADD32(ctx->r14, -0X1);
    // 0x803F4920: b           L_803F4D74
    // 0x803F4924: sh          $t7, 0x960($v0)
    MEM_H(0X960, ctx->r2) = ctx->r15;
        goto L_803F4D74;
    // 0x803F4924: sh          $t7, 0x960($v0)
    MEM_H(0X960, ctx->r2) = ctx->r15;
    // 0x803F4928: lui         $at, 0x803F
    ctx->r1 = S32(0X803F << 16);
    // 0x803F492C: lwc1        $f6, 0x7D60($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X7D60);
    // 0x803F4930: addiu       $t8, $zero, 0xF
    ctx->r24 = ADD32(0, 0XF);
    // 0x803F4934: swc1        $f6, 0x940($v0)
    MEM_W(0X940, ctx->r2) = ctx->f6.u32l;
    // 0x803F4938: lw          $t9, 0xC8($s0)
    ctx->r25 = MEM_W(ctx->r16, 0XC8);
    // 0x803F493C: lui         $t0, 0x8009
    ctx->r8 = S32(0X8009 << 16);
    // 0x803F4940: sh          $t8, 0x938($t9)
    MEM_H(0X938, ctx->r25) = ctx->r24;
    // 0x803F4944: lw          $t0, 0x3B20($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X3B20);
    // 0x803F4948: mtc1        $zero, $f14
    ctx->f14.u32l = 0;
    // 0x803F494C: lwc1        $f8, 0x0($t0)
    ctx->f8.u32l = MEM_W(ctx->r8, 0X0);
    // 0x803F4950: addiu       $t1, $zero, 0x5C
    ctx->r9 = ADD32(0, 0X5C);
    // 0x803F4954: c.lt.s      $f14, $f8
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f14.fl < ctx->f8.fl;
    // 0x803F4958: addiu       $t8, $zero, -0x1F3
    ctx->r24 = ADD32(0, -0X1F3);
    // 0x803F495C: bc1f        L_803F4970
    if (!c1cs) {
        // 0x803F4960: addiu       $t7, $zero, 0x1F3
        ctx->r15 = ADD32(0, 0X1F3);
            goto L_803F4970;
    }
    // 0x803F4960: addiu       $t7, $zero, 0x1F3
    ctx->r15 = ADD32(0, 0X1F3);
    // 0x803F4964: lw          $t2, 0xC8($s0)
    ctx->r10 = MEM_W(ctx->r16, 0XC8);
    // 0x803F4968: b           L_803F497C
    // 0x803F496C: sh          $t1, 0x93E($t2)
    MEM_H(0X93E, ctx->r10) = ctx->r9;
        goto L_803F497C;
    // 0x803F496C: sh          $t1, 0x93E($t2)
    MEM_H(0X93E, ctx->r10) = ctx->r9;
L_803F4970:
    // 0x803F4970: lw          $t4, 0xC8($s0)
    ctx->r12 = MEM_W(ctx->r16, 0XC8);
    // 0x803F4974: addiu       $t3, $zero, -0x5C
    ctx->r11 = ADD32(0, -0X5C);
    // 0x803F4978: sh          $t3, 0x93E($t4)
    MEM_H(0X93E, ctx->r12) = ctx->r11;
L_803F497C:
    // 0x803F497C: lw          $v0, 0xC8($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XC8);
    // 0x803F4980: nop

    // 0x803F4984: lhu         $t5, 0x8($v0)
    ctx->r13 = MEM_HU(ctx->r2, 0X8);
    // 0x803F4988: nop

    // 0x803F498C: andi        $t6, $t5, 0x1
    ctx->r14 = ctx->r13 & 0X1;
    // 0x803F4990: beq         $t6, $zero, L_803F49A0
    if (ctx->r14 == 0) {
        // 0x803F4994: nop
    
            goto L_803F49A0;
    }
    // 0x803F4994: nop

    // 0x803F4998: b           L_803F49A4
    // 0x803F499C: sh          $t7, 0x93C($v0)
    MEM_H(0X93C, ctx->r2) = ctx->r15;
        goto L_803F49A4;
    // 0x803F499C: sh          $t7, 0x93C($v0)
    MEM_H(0X93C, ctx->r2) = ctx->r15;
L_803F49A0:
    // 0x803F49A0: sh          $t8, 0x93C($v0)
    MEM_H(0X93C, ctx->r2) = ctx->r24;
L_803F49A4:
    // 0x803F49A4: lw          $t9, 0xC8($s0)
    ctx->r25 = MEM_W(ctx->r16, 0XC8);
    // 0x803F49A8: b           L_803F4D74
    // 0x803F49AC: sh          $zero, 0x948($t9)
    MEM_H(0X948, ctx->r25) = 0;
        goto L_803F4D74;
    // 0x803F49AC: sh          $zero, 0x948($t9)
    MEM_H(0X948, ctx->r25) = 0;
    // 0x803F49B0: lhu         $t0, 0x95C($v0)
    ctx->r8 = MEM_HU(ctx->r2, 0X95C);
    // 0x803F49B4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x803F49B8: andi        $t1, $t0, 0xFFFC
    ctx->r9 = ctx->r8 & 0XFFFC;
    // 0x803F49BC: jal         0x803F0EF0
    // 0x803F49C0: sh          $t1, 0x95C($v0)
    MEM_H(0X95C, ctx->r2) = ctx->r9;
    ovl_803F0000_menu_func_803F0EF0(rdram, ctx);
        goto after_22;
    // 0x803F49C0: sh          $t1, 0x95C($v0)
    MEM_H(0X95C, ctx->r2) = ctx->r9;
    after_22:
    // 0x803F49C4: beq         $v0, $zero, L_803F49E8
    if (ctx->r2 == 0) {
        // 0x803F49C8: addiu       $t4, $zero, 0x4000
        ctx->r12 = ADD32(0, 0X4000);
            goto L_803F49E8;
    }
    // 0x803F49C8: addiu       $t4, $zero, 0x4000
    ctx->r12 = ADD32(0, 0X4000);
    // 0x803F49CC: lhu         $t2, 0x12($s0)
    ctx->r10 = MEM_HU(ctx->r16, 0X12);
    // 0x803F49D0: lwc1        $f16, 0x88($v0)
    ctx->f16.u32l = MEM_W(ctx->r2, 0X88);
    // 0x803F49D4: ori         $t3, $t2, 0x4
    ctx->r11 = ctx->r10 | 0X4;
    // 0x803F49D8: sh          $t3, 0x12($s0)
    MEM_H(0X12, ctx->r16) = ctx->r11;
    // 0x803F49DC: swc1        $f16, 0xBC($s0)
    MEM_W(0XBC, ctx->r16) = ctx->f16.u32l;
    // 0x803F49E0: b           L_803F4D74
    // 0x803F49E4: sh          $t4, 0x8A($sp)
    MEM_H(0X8A, ctx->r29) = ctx->r12;
        goto L_803F4D74;
    // 0x803F49E4: sh          $t4, 0x8A($sp)
    MEM_H(0X8A, ctx->r29) = ctx->r12;
L_803F49E8:
    // 0x803F49E8: jal         0x803F401C
    // 0x803F49EC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_803F0000_menu_func_803F401C(rdram, ctx);
        goto after_23;
    // 0x803F49EC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_23:
    // 0x803F49F0: lw          $v0, 0xC8($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XC8);
    // 0x803F49F4: addiu       $t7, $zero, 0x4
    ctx->r15 = ADD32(0, 0X4);
    // 0x803F49F8: lhu         $t5, 0x95C($v0)
    ctx->r13 = MEM_HU(ctx->r2, 0X95C);
    // 0x803F49FC: nop

    // 0x803F4A00: ori         $t6, $t5, 0x800
    ctx->r14 = ctx->r13 | 0X800;
    // 0x803F4A04: sh          $t6, 0x95C($v0)
    MEM_H(0X95C, ctx->r2) = ctx->r14;
    // 0x803F4A08: b           L_803F4D74
    // 0x803F4A0C: sh          $t7, 0x8A($sp)
    MEM_H(0X8A, ctx->r29) = ctx->r15;
        goto L_803F4D74;
    // 0x803F4A0C: sh          $t7, 0x8A($sp)
    MEM_H(0X8A, ctx->r29) = ctx->r15;
    // 0x803F4A10: lui         $t8, 0x8028
    ctx->r24 = S32(0X8028 << 16);
    // 0x803F4A14: lh          $t8, -0x1B60($t8)
    ctx->r24 = MEM_H(ctx->r24, -0X1B60);
    // 0x803F4A18: lui         $at, 0x4248
    ctx->r1 = S32(0X4248 << 16);
    // 0x803F4A1C: andi        $t9, $t8, 0x1
    ctx->r25 = ctx->r24 & 0X1;
    // 0x803F4A20: beq         $t9, $zero, L_803F4A74
    if (ctx->r25 == 0) {
        // 0x803F4A24: nop
    
            goto L_803F4A74;
    }
    // 0x803F4A24: nop

    // 0x803F4A28: lwc1        $f18, 0x84($a2)
    ctx->f18.u32l = MEM_W(ctx->r6, 0X84);
    // 0x803F4A2C: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x803F4A30: lui         $at, 0x803F
    ctx->r1 = S32(0X803F << 16);
    // 0x803F4A34: c.lt.s      $f18, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f18.fl < ctx->f10.fl;
    // 0x803F4A38: nop

    // 0x803F4A3C: bc1f        L_803F4A74
    if (!c1cs) {
        // 0x803F4A40: nop
    
            goto L_803F4A74;
    }
    // 0x803F4A40: nop

    // 0x803F4A44: lwc1        $f6, 0x50($a2)
    ctx->f6.u32l = MEM_W(ctx->r6, 0X50);
    // 0x803F4A48: lwc1        $f5, 0x7D68($at)
    ctx->f_odd[(5 - 1) * 2] = MEM_W(ctx->r1, 0X7D68);
    // 0x803F4A4C: lwc1        $f4, 0x7D6C($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X7D6C);
    // 0x803F4A50: cvt.d.s     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f8.d = CVT_D_S(ctx->f6.fl);
    // 0x803F4A54: c.lt.d      $f4, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f4.d < ctx->f8.d;
    // 0x803F4A58: nop

    // 0x803F4A5C: bc1f        L_803F4A74
    if (!c1cs) {
        // 0x803F4A60: nop
    
            goto L_803F4A74;
    }
    // 0x803F4A60: nop

    // 0x803F4A64: jal         0x803F3A98
    // 0x803F4A68: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_803F0000_menu_func_803F3A98(rdram, ctx);
        goto after_24;
    // 0x803F4A68: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_24:
    // 0x803F4A6C: b           L_803F4D78
    // 0x803F4A70: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_803F4D78;
    // 0x803F4A70: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_803F4A74:
    // 0x803F4A74: lhu         $t0, 0x95C($v0)
    ctx->r8 = MEM_HU(ctx->r2, 0X95C);
    // 0x803F4A78: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x803F4A7C: andi        $t1, $t0, 0xFFFE
    ctx->r9 = ctx->r8 & 0XFFFE;
    // 0x803F4A80: sh          $t1, 0x95C($v0)
    MEM_H(0X95C, ctx->r2) = ctx->r9;
    // 0x803F4A84: sh          $t2, 0x8A($sp)
    MEM_H(0X8A, ctx->r29) = ctx->r10;
    // 0x803F4A88: lhu         $t3, 0x12($s0)
    ctx->r11 = MEM_HU(ctx->r16, 0X12);
    // 0x803F4A8C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x803F4A90: ori         $t4, $t3, 0x4
    ctx->r12 = ctx->r11 | 0X4;
    // 0x803F4A94: jal         0x803F0EF0
    // 0x803F4A98: sh          $t4, 0x12($s0)
    MEM_H(0X12, ctx->r16) = ctx->r12;
    ovl_803F0000_menu_func_803F0EF0(rdram, ctx);
        goto after_25;
    // 0x803F4A98: sh          $t4, 0x12($s0)
    MEM_H(0X12, ctx->r16) = ctx->r12;
    after_25:
    // 0x803F4A9C: beq         $v0, $zero, L_803F4AEC
    if (ctx->r2 == 0) {
        // 0x803F4AA0: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_803F4AEC;
    }
    // 0x803F4AA0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x803F4AA4: lh          $a1, 0x2E($v0)
    ctx->r5 = MEM_H(ctx->r2, 0X2E);
    // 0x803F4AA8: sw          $v0, 0xCC($sp)
    MEM_W(0XCC, ctx->r29) = ctx->r2;
    // 0x803F4AAC: jal         0x803F3C88
    // 0x803F4AB0: addiu       $a2, $zero, 0x1A8
    ctx->r6 = ADD32(0, 0X1A8);
    ovl_803F0000_menu_func_803F3C88(rdram, ctx);
        goto after_26;
    // 0x803F4AB0: addiu       $a2, $zero, 0x1A8
    ctx->r6 = ADD32(0, 0X1A8);
    after_26:
    // 0x803F4AB4: lw          $v1, 0xCC($sp)
    ctx->r3 = MEM_W(ctx->r29, 0XCC);
    // 0x803F4AB8: mtc1        $v0, $f16
    ctx->f16.u32l = ctx->r2;
    // 0x803F4ABC: lh          $t5, 0x30($v1)
    ctx->r13 = MEM_H(ctx->r3, 0X30);
    // 0x803F4AC0: cvt.s.w     $f16, $f16
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    ctx->f16.fl = CVT_S_W(ctx->f16.u32l);
    // 0x803F4AC4: mtc1        $t5, $f18
    ctx->f18.u32l = ctx->r13;
    // 0x803F4AC8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x803F4ACC: cvt.s.w     $f18, $f18
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    ctx->f18.fl = CVT_S_W(ctx->f18.u32l);
    // 0x803F4AD0: mfc1        $a1, $f16
    ctx->r5 = (int32_t)ctx->f16.u32l;
    // 0x803F4AD4: addiu       $a3, $sp, 0xB0
    ctx->r7 = ADD32(ctx->r29, 0XB0);
    // 0x803F4AD8: mfc1        $a2, $f18
    ctx->r6 = (int32_t)ctx->f18.u32l;
    // 0x803F4ADC: jal         0x80272B98
    // 0x803F4AE0: nop

    LOOKUP_FUNC(0x80272B98)(rdram, ctx);
        goto after_27;
    // 0x803F4AE0: nop

    after_27:
    // 0x803F4AE4: b           L_803F4B20
    // 0x803F4AE8: lwc1        $f6, 0xB0($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0XB0);
        goto L_803F4B20;
    // 0x803F4AE8: lwc1        $f6, 0xB0($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0XB0);
L_803F4AEC:
    // 0x803F4AEC: lw          $t6, 0xC8($s0)
    ctx->r14 = MEM_W(ctx->r16, 0XC8);
    // 0x803F4AF0: mtc1        $zero, $f14
    ctx->f14.u32l = 0;
    // 0x803F4AF4: lw          $t7, 0x24($t6)
    ctx->r15 = MEM_W(ctx->r14, 0X24);
    // 0x803F4AF8: mfc1        $a2, $f14
    ctx->r6 = (int32_t)ctx->f14.u32l;
    // 0x803F4AFC: lh          $t8, 0x8BA($t7)
    ctx->r24 = MEM_H(ctx->r15, 0X8BA);
    // 0x803F4B00: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x803F4B04: mtc1        $t8, $f10
    ctx->f10.u32l = ctx->r24;
    // 0x803F4B08: addiu       $a3, $sp, 0xB0
    ctx->r7 = ADD32(ctx->r29, 0XB0);
    // 0x803F4B0C: cvt.s.w     $f10, $f10
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 10);
    ctx->f10.fl = CVT_S_W(ctx->f10.u32l);
    // 0x803F4B10: mfc1        $a1, $f10
    ctx->r5 = (int32_t)ctx->f10.u32l;
    // 0x803F4B14: jal         0x80272B98
    // 0x803F4B18: nop

    LOOKUP_FUNC(0x80272B98)(rdram, ctx);
        goto after_28;
    // 0x803F4B18: nop

    after_28:
    // 0x803F4B1C: lwc1        $f6, 0xB0($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0XB0);
L_803F4B20:
    // 0x803F4B20: lui         $a2, 0x800B
    ctx->r6 = S32(0X800B << 16);
    // 0x803F4B24: swc1        $f6, 0xBC($s0)
    MEM_W(0XBC, ctx->r16) = ctx->f6.u32l;
    // 0x803F4B28: lwc1        $f12, 0xB4($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0XB4);
    // 0x803F4B2C: lui         $a3, 0x800B
    ctx->r7 = S32(0X800B << 16);
    // 0x803F4B30: addiu       $a3, $a3, -0x53C8
    ctx->r7 = ADD32(ctx->r7, -0X53C8);
    // 0x803F4B34: addiu       $a2, $a2, -0x53E0
    ctx->r6 = ADD32(ctx->r6, -0X53E0);
    // 0x803F4B38: jal         0x803F0000
    // 0x803F4B3C: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
    ovl_803F0000_menu_func_803F0000(rdram, ctx);
        goto after_29;
    // 0x803F4B3C: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
    after_29:
    // 0x803F4B40: lw          $t9, 0xC8($s0)
    ctx->r25 = MEM_W(ctx->r16, 0XC8);
    // 0x803F4B44: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x803F4B48: jal         0x803F3D10
    // 0x803F4B4C: sh          $v0, 0x960($t9)
    MEM_H(0X960, ctx->r25) = ctx->r2;
    ovl_803F0000_menu_func_803F3D10(rdram, ctx);
        goto after_30;
    // 0x803F4B4C: sh          $v0, 0x960($t9)
    MEM_H(0X960, ctx->r25) = ctx->r2;
    after_30:
    // 0x803F4B50: b           L_803F4D78
    // 0x803F4B54: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_803F4D78;
    // 0x803F4B54: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x803F4B58: lui         $t0, 0x8028
    ctx->r8 = S32(0X8028 << 16);
    // 0x803F4B5C: lh          $t0, -0x1B60($t0)
    ctx->r8 = MEM_H(ctx->r8, -0X1B60);
    // 0x803F4B60: lui         $at, 0x4248
    ctx->r1 = S32(0X4248 << 16);
    // 0x803F4B64: andi        $t1, $t0, 0x1
    ctx->r9 = ctx->r8 & 0X1;
    // 0x803F4B68: beq         $t1, $zero, L_803F4BBC
    if (ctx->r9 == 0) {
        // 0x803F4B6C: nop
    
            goto L_803F4BBC;
    }
    // 0x803F4B6C: nop

    // 0x803F4B70: lwc1        $f4, 0x84($a2)
    ctx->f4.u32l = MEM_W(ctx->r6, 0X84);
    // 0x803F4B74: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x803F4B78: lui         $at, 0x803F
    ctx->r1 = S32(0X803F << 16);
    // 0x803F4B7C: c.lt.s      $f4, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f4.fl < ctx->f8.fl;
    // 0x803F4B80: nop

    // 0x803F4B84: bc1f        L_803F4BBC
    if (!c1cs) {
        // 0x803F4B88: nop
    
            goto L_803F4BBC;
    }
    // 0x803F4B88: nop

    // 0x803F4B8C: lwc1        $f18, 0x50($a2)
    ctx->f18.u32l = MEM_W(ctx->r6, 0X50);
    // 0x803F4B90: lwc1        $f17, 0x7D70($at)
    ctx->f_odd[(17 - 1) * 2] = MEM_W(ctx->r1, 0X7D70);
    // 0x803F4B94: lwc1        $f16, 0x7D74($at)
    ctx->f16.u32l = MEM_W(ctx->r1, 0X7D74);
    // 0x803F4B98: cvt.d.s     $f10, $f18
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.fl); 
    ctx->f10.d = CVT_D_S(ctx->f18.fl);
    // 0x803F4B9C: c.lt.d      $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f16.d < ctx->f10.d;
    // 0x803F4BA0: nop

    // 0x803F4BA4: bc1f        L_803F4BBC
    if (!c1cs) {
        // 0x803F4BA8: nop
    
            goto L_803F4BBC;
    }
    // 0x803F4BA8: nop

    // 0x803F4BAC: jal         0x803F3A98
    // 0x803F4BB0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_803F0000_menu_func_803F3A98(rdram, ctx);
        goto after_31;
    // 0x803F4BB0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_31:
    // 0x803F4BB4: b           L_803F4D78
    // 0x803F4BB8: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_803F4D78;
    // 0x803F4BB8: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_803F4BBC:
    // 0x803F4BBC: jal         0x803F401C
    // 0x803F4BC0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_803F0000_menu_func_803F401C(rdram, ctx);
        goto after_32;
    // 0x803F4BC0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_32:
    // 0x803F4BC4: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x803F4BC8: sh          $t2, 0x8A($sp)
    MEM_H(0X8A, ctx->r29) = ctx->r10;
    // 0x803F4BCC: lw          $v0, 0xC8($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XC8);
    // 0x803F4BD0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x803F4BD4: lhu         $t3, 0x95C($v0)
    ctx->r11 = MEM_HU(ctx->r2, 0X95C);
    // 0x803F4BD8: nop

    // 0x803F4BDC: ori         $t4, $t3, 0x2800
    ctx->r12 = ctx->r11 | 0X2800;
    // 0x803F4BE0: jal         0x803F3D10
    // 0x803F4BE4: sh          $t4, 0x95C($v0)
    MEM_H(0X95C, ctx->r2) = ctx->r12;
    ovl_803F0000_menu_func_803F3D10(rdram, ctx);
        goto after_33;
    // 0x803F4BE4: sh          $t4, 0x95C($v0)
    MEM_H(0X95C, ctx->r2) = ctx->r12;
    after_33:
    // 0x803F4BE8: b           L_803F4D78
    // 0x803F4BEC: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_803F4D78;
    // 0x803F4BEC: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x803F4BF0: lhu         $t5, 0x95C($v0)
    ctx->r13 = MEM_HU(ctx->r2, 0X95C);
    // 0x803F4BF4: addiu       $t7, $zero, 0x8
    ctx->r15 = ADD32(0, 0X8);
    // 0x803F4BF8: andi        $t6, $t5, 0xFFFE
    ctx->r14 = ctx->r13 & 0XFFFE;
    // 0x803F4BFC: sh          $t6, 0x95C($v0)
    MEM_H(0X95C, ctx->r2) = ctx->r14;
    // 0x803F4C00: sh          $t7, 0x8A($sp)
    MEM_H(0X8A, ctx->r29) = ctx->r15;
    // 0x803F4C04: lw          $v0, 0xC8($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XC8);
    // 0x803F4C08: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x803F4C0C: lw          $t8, 0x958($v0)
    ctx->r24 = MEM_W(ctx->r2, 0X958);
    // 0x803F4C10: addiu       $t4, $zero, 0x13
    ctx->r12 = ADD32(0, 0X13);
    // 0x803F4C14: beq         $t8, $zero, L_803F4C68
    if (ctx->r24 == 0) {
        // 0x803F4C18: nop
    
            goto L_803F4C68;
    }
    // 0x803F4C18: nop

    // 0x803F4C1C: jal         0x8006B35C
    // 0x803F4C20: addiu       $a1, $sp, 0x38
    ctx->r5 = ADD32(ctx->r29, 0X38);
    func_8006B35C(rdram, ctx);
        goto after_34;
    // 0x803F4C20: addiu       $a1, $sp, 0x38
    ctx->r5 = ADD32(ctx->r29, 0X38);
    after_34:
    // 0x803F4C24: lw          $t9, 0xC8($s0)
    ctx->r25 = MEM_W(ctx->r16, 0XC8);
    // 0x803F4C28: addiu       $a1, $zero, 0x13
    ctx->r5 = ADD32(0, 0X13);
    // 0x803F4C2C: lw          $t0, 0x958($t9)
    ctx->r8 = MEM_W(ctx->r25, 0X958);
    // 0x803F4C30: addiu       $a2, $sp, 0x38
    ctx->r6 = ADD32(ctx->r29, 0X38);
    // 0x803F4C34: lwc1        $f12, 0x84($t0)
    ctx->f12.u32l = MEM_W(ctx->r8, 0X84);
    // 0x803F4C38: jal         0x803F0000
    // 0x803F4C3C: addiu       $a3, $sp, 0x84
    ctx->r7 = ADD32(ctx->r29, 0X84);
    ovl_803F0000_menu_func_803F0000(rdram, ctx);
        goto after_35;
    // 0x803F4C3C: addiu       $a3, $sp, 0x84
    ctx->r7 = ADD32(ctx->r29, 0X84);
    after_35:
    // 0x803F4C40: lw          $t1, 0xC8($s0)
    ctx->r9 = MEM_W(ctx->r16, 0XC8);
    // 0x803F4C44: nop

    // 0x803F4C48: sh          $v0, 0x960($t1)
    MEM_H(0X960, ctx->r9) = ctx->r2;
    // 0x803F4C4C: lw          $t2, 0xC8($s0)
    ctx->r10 = MEM_W(ctx->r16, 0XC8);
    // 0x803F4C50: nop

    // 0x803F4C54: lw          $t3, 0x958($t2)
    ctx->r11 = MEM_W(ctx->r10, 0X958);
    // 0x803F4C58: nop

    // 0x803F4C5C: lwc1        $f6, 0x88($t3)
    ctx->f6.u32l = MEM_W(ctx->r11, 0X88);
    // 0x803F4C60: b           L_803F4C94
    // 0x803F4C64: swc1        $f6, 0xBC($s0)
    MEM_W(0XBC, ctx->r16) = ctx->f6.u32l;
        goto L_803F4C94;
    // 0x803F4C64: swc1        $f6, 0xBC($s0)
    MEM_W(0XBC, ctx->r16) = ctx->f6.u32l;
L_803F4C68:
    // 0x803F4C68: sh          $t4, 0x960($v0)
    MEM_H(0X960, ctx->r2) = ctx->r12;
    // 0x803F4C6C: lw          $t5, 0xC8($s0)
    ctx->r13 = MEM_W(ctx->r16, 0XC8);
    // 0x803F4C70: lui         $at, 0x803F
    ctx->r1 = S32(0X803F << 16);
    // 0x803F4C74: lw          $t6, 0x24($t5)
    ctx->r14 = MEM_W(ctx->r13, 0X24);
    // 0x803F4C78: lwc1        $f19, 0x7D78($at)
    ctx->f_odd[(19 - 1) * 2] = MEM_W(ctx->r1, 0X7D78);
    // 0x803F4C7C: lwc1        $f4, 0x8C0($t6)
    ctx->f4.u32l = MEM_W(ctx->r14, 0X8C0);
    // 0x803F4C80: lwc1        $f18, 0x7D7C($at)
    ctx->f18.u32l = MEM_W(ctx->r1, 0X7D7C);
    // 0x803F4C84: cvt.d.s     $f8, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f8.d = CVT_D_S(ctx->f4.fl);
    // 0x803F4C88: add.d       $f16, $f8, $f18
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f18.d); 
    ctx->f16.d = ctx->f8.d + ctx->f18.d;
    // 0x803F4C8C: cvt.s.d     $f10, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.d); 
    ctx->f10.fl = CVT_S_D(ctx->f16.d);
    // 0x803F4C90: swc1        $f10, 0xBC($s0)
    MEM_W(0XBC, ctx->r16) = ctx->f10.u32l;
L_803F4C94:
    // 0x803F4C94: lhu         $t7, 0x12($s0)
    ctx->r15 = MEM_HU(ctx->r16, 0X12);
    // 0x803F4C98: nop

    // 0x803F4C9C: ori         $t8, $t7, 0x4
    ctx->r24 = ctx->r15 | 0X4;
    // 0x803F4CA0: b           L_803F4D74
    // 0x803F4CA4: sh          $t8, 0x12($s0)
    MEM_H(0X12, ctx->r16) = ctx->r24;
        goto L_803F4D74;
    // 0x803F4CA4: sh          $t8, 0x12($s0)
    MEM_H(0X12, ctx->r16) = ctx->r24;
    // 0x803F4CA8: lui         $at, 0x4080
    ctx->r1 = S32(0X4080 << 16);
    // 0x803F4CAC: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    // 0x803F4CB0: lui         $at, 0x3FC0
    ctx->r1 = S32(0X3FC0 << 16);
    // 0x803F4CB4: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x803F4CB8: lui         $a2, 0x3E19
    ctx->r6 = S32(0X3E19 << 16);
    // 0x803F4CBC: lui         $a3, 0x3D4C
    ctx->r7 = S32(0X3D4C << 16);
    // 0x803F4CC0: addiu       $t9, $sp, 0x38
    ctx->r25 = ADD32(ctx->r29, 0X38);
    // 0x803F4CC4: sw          $t9, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r25;
    // 0x803F4CC8: ori         $a3, $a3, 0xCCCD
    ctx->r7 = ctx->r7 | 0XCCCD;
    // 0x803F4CCC: jal         0x8005743C
    // 0x803F4CD0: ori         $a2, $a2, 0x999A
    ctx->r6 = ctx->r6 | 0X999A;
    func_8005743C(rdram, ctx);
        goto after_36;
    // 0x803F4CD0: ori         $a2, $a2, 0x999A
    ctx->r6 = ctx->r6 | 0X999A;
    after_36:
    // 0x803F4CD4: lw          $t0, 0xC8($s0)
    ctx->r8 = MEM_W(ctx->r16, 0XC8);
    // 0x803F4CD8: addiu       $a1, $zero, 0x13
    ctx->r5 = ADD32(0, 0X13);
    // 0x803F4CDC: lw          $t1, 0x958($t0)
    ctx->r9 = MEM_W(ctx->r8, 0X958);
    // 0x803F4CE0: addiu       $a2, $sp, 0x38
    ctx->r6 = ADD32(ctx->r29, 0X38);
    // 0x803F4CE4: lwc1        $f12, 0x84($t1)
    ctx->f12.u32l = MEM_W(ctx->r9, 0X84);
    // 0x803F4CE8: jal         0x803F0000
    // 0x803F4CEC: addiu       $a3, $sp, 0x84
    ctx->r7 = ADD32(ctx->r29, 0X84);
    ovl_803F0000_menu_func_803F0000(rdram, ctx);
        goto after_37;
    // 0x803F4CEC: addiu       $a3, $sp, 0x84
    ctx->r7 = ADD32(ctx->r29, 0X84);
    after_37:
    // 0x803F4CF0: lw          $t2, 0xC8($s0)
    ctx->r10 = MEM_W(ctx->r16, 0XC8);
    // 0x803F4CF4: addiu       $t3, $zero, 0x1
    ctx->r11 = ADD32(0, 0X1);
    // 0x803F4CF8: sh          $v0, 0x960($t2)
    MEM_H(0X960, ctx->r10) = ctx->r2;
    // 0x803F4CFC: sh          $t3, 0x8A($sp)
    MEM_H(0X8A, ctx->r29) = ctx->r11;
    // 0x803F4D00: lw          $t4, 0xC8($s0)
    ctx->r12 = MEM_W(ctx->r16, 0XC8);
    // 0x803F4D04: lhu         $t6, 0x12($s0)
    ctx->r14 = MEM_HU(ctx->r16, 0X12);
    // 0x803F4D08: lw          $t5, 0x958($t4)
    ctx->r13 = MEM_W(ctx->r12, 0X958);
    // 0x803F4D0C: ori         $t7, $t6, 0x4
    ctx->r15 = ctx->r14 | 0X4;
    // 0x803F4D10: lwc1        $f6, 0x88($t5)
    ctx->f6.u32l = MEM_W(ctx->r13, 0X88);
    // 0x803F4D14: sh          $t7, 0x12($s0)
    MEM_H(0X12, ctx->r16) = ctx->r15;
    // 0x803F4D18: b           L_803F4D74
    // 0x803F4D1C: swc1        $f6, 0xBC($s0)
    MEM_W(0XBC, ctx->r16) = ctx->f6.u32l;
        goto L_803F4D74;
    // 0x803F4D1C: swc1        $f6, 0xBC($s0)
    MEM_W(0XBC, ctx->r16) = ctx->f6.u32l;
    // 0x803F4D20: jal         0x803F34D4
    // 0x803F4D24: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_803F0000_menu_func_803F34D4(rdram, ctx);
        goto after_38;
    // 0x803F4D24: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_38:
    // 0x803F4D28: b           L_803F4D78
    // 0x803F4D2C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_803F4D78;
    // 0x803F4D2C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x803F4D30: jal         0x803F3A98
    // 0x803F4D34: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_803F0000_menu_func_803F3A98(rdram, ctx);
        goto after_39;
    // 0x803F4D34: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_39:
    // 0x803F4D38: b           L_803F4D78
    // 0x803F4D3C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_803F4D78;
    // 0x803F4D3C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x803F4D40: jal         0x803F2A40
    // 0x803F4D44: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_803F0000_menu_func_803F2A40(rdram, ctx);
        goto after_40;
    // 0x803F4D44: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_40:
    // 0x803F4D48: bne         $v0, $zero, L_803F4D78
    if (ctx->r2 != 0) {
        // 0x803F4D4C: lw          $ra, 0x24($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X24);
            goto L_803F4D78;
    }
    // 0x803F4D4C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x803F4D50: jal         0x803F2464
    // 0x803F4D54: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_803F0000_menu_func_803F2464(rdram, ctx);
        goto after_41;
    // 0x803F4D54: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_41:
    // 0x803F4D58: b           L_803F4D78
    // 0x803F4D5C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_803F4D78;
    // 0x803F4D5C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x803F4D60: lhu         $t8, 0x12($s0)
    ctx->r24 = MEM_HU(ctx->r16, 0X12);
    // 0x803F4D64: mtc1        $zero, $f14
    ctx->f14.u32l = 0;
    // 0x803F4D68: ori         $t9, $t8, 0x8
    ctx->r25 = ctx->r24 | 0X8;
    // 0x803F4D6C: sh          $t9, 0x12($s0)
    MEM_H(0X12, ctx->r16) = ctx->r25;
    // 0x803F4D70: swc1        $f14, 0xAC($s0)
    MEM_W(0XAC, ctx->r16) = ctx->f14.u32l;
L_803F4D74:
    // 0x803F4D74: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_803F4D78:
    // 0x803F4D78: lhu         $v0, 0x8A($sp)
    ctx->r2 = MEM_HU(ctx->r29, 0X8A);
    // 0x803F4D7C: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x803F4D80: jr          $ra
    // 0x803F4D84: addiu       $sp, $sp, 0xD0
    ctx->r29 = ADD32(ctx->r29, 0XD0);
    return;
    // 0x803F4D84: addiu       $sp, $sp, 0xD0
    ctx->r29 = ADD32(ctx->r29, 0XD0);
;}
RECOMP_FUNC void ovl_803F0000_menu_func_803F45A8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803F45A8: lw          $v0, 0xC8($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XC8);
    // 0x803F45AC: addiu       $t8, $zero, 0x4
    ctx->r24 = ADD32(0, 0X4);
    // 0x803F45B0: lhu         $t6, 0x95C($v0)
    ctx->r14 = MEM_HU(ctx->r2, 0X95C);
    // 0x803F45B4: nop

    // 0x803F45B8: andi        $t7, $t6, 0xFFFC
    ctx->r15 = ctx->r14 & 0XFFFC;
    // 0x803F45BC: sh          $t7, 0x95C($v0)
    MEM_H(0X95C, ctx->r2) = ctx->r15;
    // 0x803F45C0: sh          $t8, 0x8A($sp)
    MEM_H(0X8A, ctx->r29) = ctx->r24;
    // 0x803F45C4: lw          $t9, 0xC8($s0)
    ctx->r25 = MEM_W(ctx->r16, 0XC8);
    // 0x803F45C8: lhu         $t1, 0x12($s0)
    ctx->r9 = MEM_HU(ctx->r16, 0X12);
    // 0x803F45CC: lw          $t0, 0x958($t9)
    ctx->r8 = MEM_W(ctx->r25, 0X958);
    // 0x803F45D0: ori         $t2, $t1, 0x4
    ctx->r10 = ctx->r9 | 0X4;
    // 0x803F45D4: lwc1        $f18, 0x88($t0)
    ctx->f18.u32l = MEM_W(ctx->r8, 0X88);
    // 0x803F45D8: sh          $t2, 0x12($s0)
    MEM_H(0X12, ctx->r16) = ctx->r10;
    // 0x803F45DC: b           L_803F4D74
    // 0x803F45E0: swc1        $f18, 0xBC($s0)
    MEM_W(0XBC, ctx->r16) = ctx->f18.u32l;
        goto L_803F4D74;
    // 0x803F45E0: swc1        $f18, 0xBC($s0)
    MEM_W(0XBC, ctx->r16) = ctx->f18.u32l;
    // 0x803F45E4: lw          $v0, 0xC8($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XC8);
    // 0x803F45E8: nop

    // 0x803F45EC: lhu         $t3, 0x6($v0)
    ctx->r11 = MEM_HU(ctx->r2, 0X6);
    // 0x803F45F0: lui         $t5, 0x803F
    ctx->r13 = S32(0X803F << 16);
    // 0x803F45F4: addiu       $t5, $t5, 0x7E08
    ctx->r13 = ADD32(ctx->r13, 0X7E08);
    // 0x803F45F8: sll         $t4, $t3, 2
    ctx->r12 = S32(ctx->r11 << 2);
    // 0x803F45FC: addu        $v1, $t4, $t5
    ctx->r3 = ADD32(ctx->r12, ctx->r13);
    // 0x803F4600: lbu         $t6, 0x0($v1)
    ctx->r14 = MEM_BU(ctx->r3, 0X0);
    // 0x803F4604: addiu       $t0, $zero, 0x4000
    ctx->r8 = ADD32(0, 0X4000);
    // 0x803F4608: ori         $t7, $t6, 0x80
    ctx->r15 = ctx->r14 | 0X80;
    // 0x803F460C: sb          $t7, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r15;
    // 0x803F4610: lw          $v0, 0xC8($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XC8);
    // 0x803F4614: nop

    // 0x803F4618: lhu         $t8, 0x95C($v0)
    ctx->r24 = MEM_HU(ctx->r2, 0X95C);
    // 0x803F461C: nop

    // 0x803F4620: andi        $t9, $t8, 0xFFFC
    ctx->r25 = ctx->r24 & 0XFFFC;
    // 0x803F4624: sh          $t9, 0x95C($v0)
    MEM_H(0X95C, ctx->r2) = ctx->r25;
    // 0x803F4628: sh          $t0, 0x8A($sp)
    MEM_H(0X8A, ctx->r29) = ctx->r8;
    // 0x803F462C: lw          $t1, 0xC8($s0)
    ctx->r9 = MEM_W(ctx->r16, 0XC8);
    // 0x803F4630: lhu         $t3, 0x12($s0)
    ctx->r11 = MEM_HU(ctx->r16, 0X12);
    // 0x803F4634: lw          $t2, 0x958($t1)
    ctx->r10 = MEM_W(ctx->r9, 0X958);
    // 0x803F4638: ori         $t4, $t3, 0x4
    ctx->r12 = ctx->r11 | 0X4;
    // 0x803F463C: lwc1        $f4, 0x88($t2)
    ctx->f4.u32l = MEM_W(ctx->r10, 0X88);
    // 0x803F4640: sh          $t4, 0x12($s0)
    MEM_H(0X12, ctx->r16) = ctx->r12;
    // 0x803F4644: b           L_803F4D74
    // 0x803F4648: swc1        $f4, 0xBC($s0)
    MEM_W(0XBC, ctx->r16) = ctx->f4.u32l;
        goto L_803F4D74;
    // 0x803F4648: swc1        $f4, 0xBC($s0)
    MEM_W(0XBC, ctx->r16) = ctx->f4.u32l;
    // 0x803F464C: lhu         $t5, 0x95C($v0)
    ctx->r13 = MEM_HU(ctx->r2, 0X95C);
    // 0x803F4650: addiu       $t7, $zero, 0x8
    ctx->r15 = ADD32(0, 0X8);
    // 0x803F4654: andi        $t6, $t5, 0xFFFE
    ctx->r14 = ctx->r13 & 0XFFFE;
    // 0x803F4658: sh          $t6, 0x95C($v0)
    MEM_H(0X95C, ctx->r2) = ctx->r14;
    // 0x803F465C: sh          $t7, 0x8A($sp)
    MEM_H(0X8A, ctx->r29) = ctx->r15;
    // 0x803F4660: jal         0x803F3E54
    // 0x803F4664: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_803F0000_menu_func_803F3E54(rdram, ctx);
        goto after_0;
    // 0x803F4664: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_0:
    // 0x803F4668: lhu         $t8, 0x12($s0)
    ctx->r24 = MEM_HU(ctx->r16, 0X12);
    // 0x803F466C: swc1        $f0, 0xBC($s0)
    MEM_W(0XBC, ctx->r16) = ctx->f0.u32l;
    // 0x803F4670: ori         $t9, $t8, 0x4
    ctx->r25 = ctx->r24 | 0X4;
    // 0x803F4674: b           L_803F4D74
    // 0x803F4678: sh          $t9, 0x12($s0)
    MEM_H(0X12, ctx->r16) = ctx->r25;
        goto L_803F4D74;
    // 0x803F4678: sh          $t9, 0x12($s0)
    MEM_H(0X12, ctx->r16) = ctx->r25;
    // 0x803F467C: lhu         $t0, 0x95C($v0)
    ctx->r8 = MEM_HU(ctx->r2, 0X95C);
    // 0x803F4680: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x803F4684: andi        $t1, $t0, 0xFFFC
    ctx->r9 = ctx->r8 & 0XFFFC;
    // 0x803F4688: jal         0x803F0EF0
    // 0x803F468C: sh          $t1, 0x95C($v0)
    MEM_H(0X95C, ctx->r2) = ctx->r9;
    ovl_803F0000_menu_func_803F0EF0(rdram, ctx);
        goto after_1;
    // 0x803F468C: sh          $t1, 0x95C($v0)
    MEM_H(0X95C, ctx->r2) = ctx->r9;
    after_1:
    // 0x803F4690: beq         $v0, $zero, L_803F46F4
    if (ctx->r2 == 0) {
        // 0x803F4694: or          $v1, $v0, $zero
        ctx->r3 = ctx->r2 | 0;
            goto L_803F46F4;
    }
    // 0x803F4694: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
    // 0x803F4698: lw          $t2, 0xC8($s0)
    ctx->r10 = MEM_W(ctx->r16, 0XC8);
    // 0x803F469C: lui         $v0, 0x803F
    ctx->r2 = S32(0X803F << 16);
    // 0x803F46A0: lhu         $t3, 0x8($t2)
    ctx->r11 = MEM_HU(ctx->r10, 0X8);
    // 0x803F46A4: addiu       $v0, $v0, 0x75A8
    ctx->r2 = ADD32(ctx->r2, 0X75A8);
    // 0x803F46A8: andi        $t4, $t3, 0x1
    ctx->r12 = ctx->r11 & 0X1;
    // 0x803F46AC: beq         $t4, $zero, L_803F46C0
    if (ctx->r12 == 0) {
        // 0x803F46B0: lui         $t5, 0x803F
        ctx->r13 = S32(0X803F << 16);
            goto L_803F46C0;
    }
    // 0x803F46B0: lui         $t5, 0x803F
    ctx->r13 = S32(0X803F << 16);
    // 0x803F46B4: addiu       $t5, $t5, 0x7598
    ctx->r13 = ADD32(ctx->r13, 0X7598);
    // 0x803F46B8: b           L_803F46C4
    // 0x803F46BC: sw          $t5, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r13;
        goto L_803F46C4;
    // 0x803F46BC: sw          $t5, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r13;
L_803F46C0:
    // 0x803F46C0: sw          $v0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r2;
L_803F46C4:
    // 0x803F46C4: lwc1        $f12, 0x4C($v1)
    ctx->f12.u32l = MEM_W(ctx->r3, 0X4C);
    // 0x803F46C8: lwc1        $f14, 0x44($v1)
    ctx->f14.u32l = MEM_W(ctx->r3, 0X44);
    // 0x803F46CC: lw          $a2, 0x34($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X34);
    // 0x803F46D0: jal         0x8027A184
    // 0x803F46D4: nop

    LOOKUP_FUNC(0x8027A184)(rdram, ctx);
        goto after_2;
    // 0x803F46D4: nop

    after_2:
    // 0x803F46D8: bne         $v0, $zero, L_803F46F4
    if (ctx->r2 != 0) {
        // 0x803F46DC: nop
    
            goto L_803F46F4;
    }
    // 0x803F46DC: nop

    // 0x803F46E0: jal         0x803F401C
    // 0x803F46E4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_803F0000_menu_func_803F401C(rdram, ctx);
        goto after_3;
    // 0x803F46E4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_3:
    // 0x803F46E8: addiu       $t6, $zero, 0x4
    ctx->r14 = ADD32(0, 0X4);
    // 0x803F46EC: b           L_803F4D74
    // 0x803F46F0: sh          $t6, 0x8A($sp)
    MEM_H(0X8A, ctx->r29) = ctx->r14;
        goto L_803F4D74;
    // 0x803F46F0: sh          $t6, 0x8A($sp)
    MEM_H(0X8A, ctx->r29) = ctx->r14;
L_803F46F4:
    // 0x803F46F4: lui         $v0, 0x8009
    ctx->r2 = S32(0X8009 << 16);
    // 0x803F46F8: lw          $v0, 0x3B20($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X3B20);
    // 0x803F46FC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x803F4700: lw          $a1, 0x8($v0)
    ctx->r5 = MEM_W(ctx->r2, 0X8);
    // 0x803F4704: lw          $a2, 0x0($v0)
    ctx->r6 = MEM_W(ctx->r2, 0X0);
    // 0x803F4708: jal         0x803F3EE8
    // 0x803F470C: nop

    ovl_803F0000_menu_func_803F3EE8(rdram, ctx);
        goto after_4;
    // 0x803F470C: nop

    after_4:
    // 0x803F4710: lw          $v0, 0xC8($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XC8);
    // 0x803F4714: addiu       $t9, $zero, 0x8
    ctx->r25 = ADD32(0, 0X8);
    // 0x803F4718: lhu         $t7, 0x95C($v0)
    ctx->r15 = MEM_HU(ctx->r2, 0X95C);
    // 0x803F471C: lui         $at, 0x4316
    ctx->r1 = S32(0X4316 << 16);
    // 0x803F4720: andi        $t8, $t7, 0xFFFE
    ctx->r24 = ctx->r15 & 0XFFFE;
    // 0x803F4724: sh          $t8, 0x95C($v0)
    MEM_H(0X95C, ctx->r2) = ctx->r24;
    // 0x803F4728: sh          $t9, 0x8A($sp)
    MEM_H(0X8A, ctx->r29) = ctx->r25;
    // 0x803F472C: lw          $v0, 0xC8($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XC8);
    // 0x803F4730: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x803F4734: lw          $t0, 0x24($v0)
    ctx->r8 = MEM_W(ctx->r2, 0X24);
    // 0x803F4738: addiu       $t1, $zero, 0x6
    ctx->r9 = ADD32(0, 0X6);
    // 0x803F473C: lwc1        $f8, 0x8BC($t0)
    ctx->f8.u32l = MEM_W(ctx->r8, 0X8BC);
    // 0x803F4740: nop

    // 0x803F4744: c.lt.s      $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f6.fl < ctx->f8.fl;
    // 0x803F4748: nop

    // 0x803F474C: bc1f        L_803F475C
    if (!c1cs) {
        // 0x803F4750: nop
    
            goto L_803F475C;
    }
    // 0x803F4750: nop

    // 0x803F4754: b           L_803F4770
    // 0x803F4758: sh          $t1, 0x960($v0)
    MEM_H(0X960, ctx->r2) = ctx->r9;
        goto L_803F4770;
    // 0x803F4758: sh          $t1, 0x960($v0)
    MEM_H(0X960, ctx->r2) = ctx->r9;
L_803F475C:
    // 0x803F475C: jal         0x80059898
    // 0x803F4760: addiu       $a0, $zero, 0x7
    ctx->r4 = ADD32(0, 0X7);
    func_80059898(rdram, ctx);
        goto after_5;
    // 0x803F4760: addiu       $a0, $zero, 0x7
    ctx->r4 = ADD32(0, 0X7);
    after_5:
    // 0x803F4764: lw          $t2, 0xC8($s0)
    ctx->r10 = MEM_W(ctx->r16, 0XC8);
    // 0x803F4768: nop

    // 0x803F476C: sh          $v0, 0x960($t2)
    MEM_H(0X960, ctx->r10) = ctx->r2;
L_803F4770:
    // 0x803F4770: lhu         $t3, 0x12($s0)
    ctx->r11 = MEM_HU(ctx->r16, 0X12);
    // 0x803F4774: nop

    // 0x803F4778: ori         $t4, $t3, 0x4
    ctx->r12 = ctx->r11 | 0X4;
    // 0x803F477C: b           L_803F4D74
    // 0x803F4780: sh          $t4, 0x12($s0)
    MEM_H(0X12, ctx->r16) = ctx->r12;
        goto L_803F4D74;
    // 0x803F4780: sh          $t4, 0x12($s0)
    MEM_H(0X12, ctx->r16) = ctx->r12;
    // 0x803F4784: lhu         $t5, 0x95C($v0)
    ctx->r13 = MEM_HU(ctx->r2, 0X95C);
    // 0x803F4788: addiu       $t9, $zero, 0x8
    ctx->r25 = ADD32(0, 0X8);
    // 0x803F478C: ori         $t6, $t5, 0x20
    ctx->r14 = ctx->r13 | 0X20;
    // 0x803F4790: sh          $t6, 0x95C($v0)
    MEM_H(0X95C, ctx->r2) = ctx->r14;
    // 0x803F4794: lhu         $t7, 0x12($s0)
    ctx->r15 = MEM_HU(ctx->r16, 0X12);
    // 0x803F4798: addiu       $a0, $zero, 0x28
    ctx->r4 = ADD32(0, 0X28);
    // 0x803F479C: ori         $t8, $t7, 0x4
    ctx->r24 = ctx->r15 | 0X4;
    // 0x803F47A0: sh          $t8, 0x12($s0)
    MEM_H(0X12, ctx->r16) = ctx->r24;
    // 0x803F47A4: jal         0x80059898
    // 0x803F47A8: sh          $t9, 0x8A($sp)
    MEM_H(0X8A, ctx->r29) = ctx->r25;
    func_80059898(rdram, ctx);
        goto after_6;
    // 0x803F47A8: sh          $t9, 0x8A($sp)
    MEM_H(0X8A, ctx->r29) = ctx->r25;
    after_6:
    // 0x803F47AC: mtc1        $v0, $f16
    ctx->f16.u32l = ctx->r2;
    // 0x803F47B0: bgez        $v0, L_803F47C8
    if (SIGNED(ctx->r2) >= 0) {
        // 0x803F47B4: cvt.s.w     $f10, $f16
        CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    ctx->f10.fl = CVT_S_W(ctx->f16.u32l);
            goto L_803F47C8;
    }
    // 0x803F47B4: cvt.s.w     $f10, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    ctx->f10.fl = CVT_S_W(ctx->f16.u32l);
    // 0x803F47B8: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x803F47BC: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x803F47C0: nop

    // 0x803F47C4: add.s       $f10, $f10, $f18
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f10.fl = ctx->f10.fl + ctx->f18.fl;
L_803F47C8:
    // 0x803F47C8: lw          $t0, 0xC8($s0)
    ctx->r8 = MEM_W(ctx->r16, 0XC8);
    // 0x803F47CC: lui         $a2, 0x800B
    ctx->r6 = S32(0X800B << 16);
    // 0x803F47D0: lw          $t1, 0x24($t0)
    ctx->r9 = MEM_W(ctx->r8, 0X24);
    // 0x803F47D4: lui         $a3, 0x800B
    ctx->r7 = S32(0X800B << 16);
    // 0x803F47D8: lwc1        $f4, 0x8BC($t1)
    ctx->f4.u32l = MEM_W(ctx->r9, 0X8BC);
    // 0x803F47DC: addiu       $a3, $a3, -0x5270
    ctx->r7 = ADD32(ctx->r7, -0X5270);
    // 0x803F47E0: addiu       $a2, $a2, -0x5288
    ctx->r6 = ADD32(ctx->r6, -0X5288);
    // 0x803F47E4: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
    // 0x803F47E8: jal         0x803F0000
    // 0x803F47EC: add.s       $f12, $f10, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f12.fl = ctx->f10.fl + ctx->f4.fl;
    ovl_803F0000_menu_func_803F0000(rdram, ctx);
        goto after_7;
    // 0x803F47EC: add.s       $f12, $f10, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f12.fl = ctx->f10.fl + ctx->f4.fl;
    after_7:
    // 0x803F47F0: lw          $t2, 0xC8($s0)
    ctx->r10 = MEM_W(ctx->r16, 0XC8);
    // 0x803F47F4: b           L_803F4D74
    // 0x803F47F8: sh          $v0, 0x960($t2)
    MEM_H(0X960, ctx->r10) = ctx->r2;
        goto L_803F4D74;
    // 0x803F47F8: sh          $v0, 0x960($t2)
    MEM_H(0X960, ctx->r10) = ctx->r2;
    // 0x803F47FC: lhu         $t3, 0x95C($v0)
    ctx->r11 = MEM_HU(ctx->r2, 0X95C);
    // 0x803F4800: addiu       $t5, $zero, 0x1
    ctx->r13 = ADD32(0, 0X1);
    // 0x803F4804: andi        $t4, $t3, 0xFFFE
    ctx->r12 = ctx->r11 & 0XFFFE;
    // 0x803F4808: sh          $t4, 0x95C($v0)
    MEM_H(0X95C, ctx->r2) = ctx->r12;
    // 0x803F480C: sh          $t5, 0x8A($sp)
    MEM_H(0X8A, ctx->r29) = ctx->r13;
    // 0x803F4810: lhu         $t6, 0x12($s0)
    ctx->r14 = MEM_HU(ctx->r16, 0X12);
    // 0x803F4814: lw          $t8, 0xC8($s0)
    ctx->r24 = MEM_W(ctx->r16, 0XC8);
    // 0x803F4818: ori         $t7, $t6, 0x4
    ctx->r15 = ctx->r14 | 0X4;
    // 0x803F481C: sh          $t7, 0x12($s0)
    MEM_H(0X12, ctx->r16) = ctx->r15;
    // 0x803F4820: lh          $t9, 0x8CA($t8)
    ctx->r25 = MEM_H(ctx->r24, 0X8CA);
    // 0x803F4824: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x803F4828: addiu       $t0, $t9, 0x32
    ctx->r8 = ADD32(ctx->r25, 0X32);
    // 0x803F482C: mtc1        $t0, $f6
    ctx->f6.u32l = ctx->r8;
    // 0x803F4830: nop

    // 0x803F4834: cvt.s.w     $f6, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    ctx->f6.fl = CVT_S_W(ctx->f6.u32l);
    // 0x803F4838: mfc1        $a1, $f6
    ctx->r5 = (int32_t)ctx->f6.u32l;
    // 0x803F483C: jal         0x8026AB68
    // 0x803F4840: nop

    LOOKUP_FUNC(0x8026AB68)(rdram, ctx);
        goto after_8;
    // 0x803F4840: nop

    after_8:
    // 0x803F4844: mov.s       $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    ctx->f12.fl = ctx->f0.fl;
    // 0x803F4848: jal         0x80272AEC
    // 0x803F484C: swc1        $f0, 0xAC($sp)
    MEM_W(0XAC, ctx->r29) = ctx->f0.u32l;
    LOOKUP_FUNC(0x80272AEC)(rdram, ctx);
        goto after_9;
    // 0x803F484C: swc1        $f0, 0xAC($sp)
    MEM_W(0XAC, ctx->r29) = ctx->f0.u32l;
    after_9:
    // 0x803F4850: lui         $at, 0x803F
    ctx->r1 = S32(0X803F << 16);
    // 0x803F4854: lwc1        $f8, 0x7D5C($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X7D5C);
    // 0x803F4858: lwc1        $f2, 0xAC($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0XAC);
    // 0x803F485C: c.lt.s      $f8, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f8.fl < ctx->f0.fl;
    // 0x803F4860: lui         $t4, 0x8009
    ctx->r12 = S32(0X8009 << 16);
    // 0x803F4864: bc1f        L_803F4890
    if (!c1cs) {
        // 0x803F4868: addiu       $v0, $zero, 0x3C
        ctx->r2 = ADD32(0, 0X3C);
            goto L_803F4890;
    }
    // 0x803F4868: addiu       $v0, $zero, 0x3C
    ctx->r2 = ADD32(0, 0X3C);
    // 0x803F486C: lw          $t1, 0xC8($s0)
    ctx->r9 = MEM_W(ctx->r16, 0XC8);
    // 0x803F4870: nop

    // 0x803F4874: lw          $t2, 0x24($t1)
    ctx->r10 = MEM_W(ctx->r9, 0X24);
    // 0x803F4878: nop

    // 0x803F487C: lh          $t3, 0x8BA($t2)
    ctx->r11 = MEM_H(ctx->r10, 0X8BA);
    // 0x803F4880: nop

    // 0x803F4884: mtc1        $t3, $f16
    ctx->f16.u32l = ctx->r11;
    // 0x803F4888: nop

    // 0x803F488C: cvt.s.w     $f2, $f16
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 16);
    ctx->f2.fl = CVT_S_W(ctx->f16.u32l);
L_803F4890:
    // 0x803F4890: lw          $t4, 0x3B20($t4)
    ctx->r12 = MEM_W(ctx->r12, 0X3B20);
    // 0x803F4894: mtc1        $zero, $f14
    ctx->f14.u32l = 0;
    // 0x803F4898: lwc1        $f18, 0x0($t4)
    ctx->f18.u32l = MEM_W(ctx->r12, 0X0);
    // 0x803F489C: nop

    // 0x803F48A0: c.lt.s      $f14, $f18
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f14.fl < ctx->f18.fl;
    // 0x803F48A4: nop

    // 0x803F48A8: bc1f        L_803F48B8
    if (!c1cs) {
        // 0x803F48AC: nop
    
            goto L_803F48B8;
    }
    // 0x803F48AC: nop

    // 0x803F48B0: b           L_803F48B8
    // 0x803F48B4: addiu       $v0, $zero, -0x3C
    ctx->r2 = ADD32(0, -0X3C);
        goto L_803F48B8;
    // 0x803F48B4: addiu       $v0, $zero, -0x3C
    ctx->r2 = ADD32(0, -0X3C);
L_803F48B8:
    // 0x803F48B8: mtc1        $v0, $f10
    ctx->f10.u32l = ctx->r2;
    // 0x803F48BC: mfc1        $a1, $f2
    ctx->r5 = (int32_t)ctx->f2.u32l;
    // 0x803F48C0: cvt.s.w     $f10, $f10
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 10);
    ctx->f10.fl = CVT_S_W(ctx->f10.u32l);
    // 0x803F48C4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x803F48C8: addiu       $a3, $sp, 0xB0
    ctx->r7 = ADD32(ctx->r29, 0XB0);
    // 0x803F48CC: mfc1        $a2, $f10
    ctx->r6 = (int32_t)ctx->f10.u32l;
    // 0x803F48D0: jal         0x80272B98
    // 0x803F48D4: nop

    LOOKUP_FUNC(0x80272B98)(rdram, ctx);
        goto after_10;
    // 0x803F48D4: nop

    after_10:
    // 0x803F48D8: lwc1        $f4, 0xB0($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0XB0);
    // 0x803F48DC: lui         $a2, 0x800B
    ctx->r6 = S32(0X800B << 16);
    // 0x803F48E0: swc1        $f4, 0xBC($s0)
    MEM_W(0XBC, ctx->r16) = ctx->f4.u32l;
    // 0x803F48E4: lwc1        $f12, 0xB4($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0XB4);
    // 0x803F48E8: lui         $a3, 0x800B
    ctx->r7 = S32(0X800B << 16);
    // 0x803F48EC: addiu       $a3, $a3, -0x53AC
    ctx->r7 = ADD32(ctx->r7, -0X53AC);
    // 0x803F48F0: addiu       $a2, $a2, -0x53C4
    ctx->r6 = ADD32(ctx->r6, -0X53C4);
    // 0x803F48F4: jal         0x803F0000
    // 0x803F48F8: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
    ovl_803F0000_menu_func_803F0000(rdram, ctx);
        goto after_11;
    // 0x803F48F8: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
    after_11:
    // 0x803F48FC: lw          $t5, 0xC8($s0)
    ctx->r13 = MEM_W(ctx->r16, 0XC8);
    // 0x803F4900: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x803F4904: jal         0x803F3D10
    // 0x803F4908: sh          $v0, 0x960($t5)
    MEM_H(0X960, ctx->r13) = ctx->r2;
    ovl_803F0000_menu_func_803F3D10(rdram, ctx);
        goto after_12;
    // 0x803F4908: sh          $v0, 0x960($t5)
    MEM_H(0X960, ctx->r13) = ctx->r2;
    after_12:
    // 0x803F490C: lw          $v0, 0xC8($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XC8);
    // 0x803F4910: nop

    // 0x803F4914: lh          $t6, 0x960($v0)
    ctx->r14 = MEM_H(ctx->r2, 0X960);
    // 0x803F4918: nop

    // 0x803F491C: addiu       $t7, $t6, -0x1
    ctx->r15 = ADD32(ctx->r14, -0X1);
    // 0x803F4920: b           L_803F4D74
    // 0x803F4924: sh          $t7, 0x960($v0)
    MEM_H(0X960, ctx->r2) = ctx->r15;
        goto L_803F4D74;
    // 0x803F4924: sh          $t7, 0x960($v0)
    MEM_H(0X960, ctx->r2) = ctx->r15;
    // 0x803F4928: lui         $at, 0x803F
    ctx->r1 = S32(0X803F << 16);
    // 0x803F492C: lwc1        $f6, 0x7D60($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X7D60);
    // 0x803F4930: addiu       $t8, $zero, 0xF
    ctx->r24 = ADD32(0, 0XF);
    // 0x803F4934: swc1        $f6, 0x940($v0)
    MEM_W(0X940, ctx->r2) = ctx->f6.u32l;
    // 0x803F4938: lw          $t9, 0xC8($s0)
    ctx->r25 = MEM_W(ctx->r16, 0XC8);
    // 0x803F493C: lui         $t0, 0x8009
    ctx->r8 = S32(0X8009 << 16);
    // 0x803F4940: sh          $t8, 0x938($t9)
    MEM_H(0X938, ctx->r25) = ctx->r24;
    // 0x803F4944: lw          $t0, 0x3B20($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X3B20);
    // 0x803F4948: mtc1        $zero, $f14
    ctx->f14.u32l = 0;
    // 0x803F494C: lwc1        $f8, 0x0($t0)
    ctx->f8.u32l = MEM_W(ctx->r8, 0X0);
    // 0x803F4950: addiu       $t1, $zero, 0x5C
    ctx->r9 = ADD32(0, 0X5C);
    // 0x803F4954: c.lt.s      $f14, $f8
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f14.fl < ctx->f8.fl;
    // 0x803F4958: addiu       $t8, $zero, -0x1F3
    ctx->r24 = ADD32(0, -0X1F3);
    // 0x803F495C: bc1f        L_803F4970
    if (!c1cs) {
        // 0x803F4960: addiu       $t7, $zero, 0x1F3
        ctx->r15 = ADD32(0, 0X1F3);
            goto L_803F4970;
    }
    // 0x803F4960: addiu       $t7, $zero, 0x1F3
    ctx->r15 = ADD32(0, 0X1F3);
    // 0x803F4964: lw          $t2, 0xC8($s0)
    ctx->r10 = MEM_W(ctx->r16, 0XC8);
    // 0x803F4968: b           L_803F497C
    // 0x803F496C: sh          $t1, 0x93E($t2)
    MEM_H(0X93E, ctx->r10) = ctx->r9;
        goto L_803F497C;
    // 0x803F496C: sh          $t1, 0x93E($t2)
    MEM_H(0X93E, ctx->r10) = ctx->r9;
L_803F4970:
    // 0x803F4970: lw          $t4, 0xC8($s0)
    ctx->r12 = MEM_W(ctx->r16, 0XC8);
    // 0x803F4974: addiu       $t3, $zero, -0x5C
    ctx->r11 = ADD32(0, -0X5C);
    // 0x803F4978: sh          $t3, 0x93E($t4)
    MEM_H(0X93E, ctx->r12) = ctx->r11;
L_803F497C:
    // 0x803F497C: lw          $v0, 0xC8($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XC8);
    // 0x803F4980: nop

    // 0x803F4984: lhu         $t5, 0x8($v0)
    ctx->r13 = MEM_HU(ctx->r2, 0X8);
    // 0x803F4988: nop

    // 0x803F498C: andi        $t6, $t5, 0x1
    ctx->r14 = ctx->r13 & 0X1;
    // 0x803F4990: beq         $t6, $zero, L_803F49A0
    if (ctx->r14 == 0) {
        // 0x803F4994: nop
    
            goto L_803F49A0;
    }
    // 0x803F4994: nop

    // 0x803F4998: b           L_803F49A4
    // 0x803F499C: sh          $t7, 0x93C($v0)
    MEM_H(0X93C, ctx->r2) = ctx->r15;
        goto L_803F49A4;
    // 0x803F499C: sh          $t7, 0x93C($v0)
    MEM_H(0X93C, ctx->r2) = ctx->r15;
L_803F49A0:
    // 0x803F49A0: sh          $t8, 0x93C($v0)
    MEM_H(0X93C, ctx->r2) = ctx->r24;
L_803F49A4:
    // 0x803F49A4: lw          $t9, 0xC8($s0)
    ctx->r25 = MEM_W(ctx->r16, 0XC8);
    // 0x803F49A8: b           L_803F4D74
    // 0x803F49AC: sh          $zero, 0x948($t9)
    MEM_H(0X948, ctx->r25) = 0;
        goto L_803F4D74;
    // 0x803F49AC: sh          $zero, 0x948($t9)
    MEM_H(0X948, ctx->r25) = 0;
    // 0x803F49B0: lhu         $t0, 0x95C($v0)
    ctx->r8 = MEM_HU(ctx->r2, 0X95C);
    // 0x803F49B4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x803F49B8: andi        $t1, $t0, 0xFFFC
    ctx->r9 = ctx->r8 & 0XFFFC;
    // 0x803F49BC: jal         0x803F0EF0
    // 0x803F49C0: sh          $t1, 0x95C($v0)
    MEM_H(0X95C, ctx->r2) = ctx->r9;
    ovl_803F0000_menu_func_803F0EF0(rdram, ctx);
        goto after_13;
    // 0x803F49C0: sh          $t1, 0x95C($v0)
    MEM_H(0X95C, ctx->r2) = ctx->r9;
    after_13:
    // 0x803F49C4: beq         $v0, $zero, L_803F49E8
    if (ctx->r2 == 0) {
        // 0x803F49C8: addiu       $t4, $zero, 0x4000
        ctx->r12 = ADD32(0, 0X4000);
            goto L_803F49E8;
    }
    // 0x803F49C8: addiu       $t4, $zero, 0x4000
    ctx->r12 = ADD32(0, 0X4000);
    // 0x803F49CC: lhu         $t2, 0x12($s0)
    ctx->r10 = MEM_HU(ctx->r16, 0X12);
    // 0x803F49D0: lwc1        $f16, 0x88($v0)
    ctx->f16.u32l = MEM_W(ctx->r2, 0X88);
    // 0x803F49D4: ori         $t3, $t2, 0x4
    ctx->r11 = ctx->r10 | 0X4;
    // 0x803F49D8: sh          $t3, 0x12($s0)
    MEM_H(0X12, ctx->r16) = ctx->r11;
    // 0x803F49DC: swc1        $f16, 0xBC($s0)
    MEM_W(0XBC, ctx->r16) = ctx->f16.u32l;
    // 0x803F49E0: b           L_803F4D74
    // 0x803F49E4: sh          $t4, 0x8A($sp)
    MEM_H(0X8A, ctx->r29) = ctx->r12;
        goto L_803F4D74;
    // 0x803F49E4: sh          $t4, 0x8A($sp)
    MEM_H(0X8A, ctx->r29) = ctx->r12;
L_803F49E8:
    // 0x803F49E8: jal         0x803F401C
    // 0x803F49EC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_803F0000_menu_func_803F401C(rdram, ctx);
        goto after_14;
    // 0x803F49EC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_14:
    // 0x803F49F0: lw          $v0, 0xC8($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XC8);
    // 0x803F49F4: addiu       $t7, $zero, 0x4
    ctx->r15 = ADD32(0, 0X4);
    // 0x803F49F8: lhu         $t5, 0x95C($v0)
    ctx->r13 = MEM_HU(ctx->r2, 0X95C);
    // 0x803F49FC: nop

    // 0x803F4A00: ori         $t6, $t5, 0x800
    ctx->r14 = ctx->r13 | 0X800;
    // 0x803F4A04: sh          $t6, 0x95C($v0)
    MEM_H(0X95C, ctx->r2) = ctx->r14;
    // 0x803F4A08: b           L_803F4D74
    // 0x803F4A0C: sh          $t7, 0x8A($sp)
    MEM_H(0X8A, ctx->r29) = ctx->r15;
        goto L_803F4D74;
    // 0x803F4A0C: sh          $t7, 0x8A($sp)
    MEM_H(0X8A, ctx->r29) = ctx->r15;
    // 0x803F4A10: lui         $t8, 0x8028
    ctx->r24 = S32(0X8028 << 16);
    // 0x803F4A14: lh          $t8, -0x1B60($t8)
    ctx->r24 = MEM_H(ctx->r24, -0X1B60);
    // 0x803F4A18: lui         $at, 0x4248
    ctx->r1 = S32(0X4248 << 16);
    // 0x803F4A1C: andi        $t9, $t8, 0x1
    ctx->r25 = ctx->r24 & 0X1;
    // 0x803F4A20: beq         $t9, $zero, L_803F4A74
    if (ctx->r25 == 0) {
        // 0x803F4A24: nop
    
            goto L_803F4A74;
    }
    // 0x803F4A24: nop

    // 0x803F4A28: lwc1        $f18, 0x84($a2)
    ctx->f18.u32l = MEM_W(ctx->r6, 0X84);
    // 0x803F4A2C: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x803F4A30: lui         $at, 0x803F
    ctx->r1 = S32(0X803F << 16);
    // 0x803F4A34: c.lt.s      $f18, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f18.fl < ctx->f10.fl;
    // 0x803F4A38: nop

    // 0x803F4A3C: bc1f        L_803F4A74
    if (!c1cs) {
        // 0x803F4A40: nop
    
            goto L_803F4A74;
    }
    // 0x803F4A40: nop

    // 0x803F4A44: lwc1        $f6, 0x50($a2)
    ctx->f6.u32l = MEM_W(ctx->r6, 0X50);
    // 0x803F4A48: lwc1        $f5, 0x7D68($at)
    ctx->f_odd[(5 - 1) * 2] = MEM_W(ctx->r1, 0X7D68);
    // 0x803F4A4C: lwc1        $f4, 0x7D6C($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X7D6C);
    // 0x803F4A50: cvt.d.s     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f8.d = CVT_D_S(ctx->f6.fl);
    // 0x803F4A54: c.lt.d      $f4, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f4.d < ctx->f8.d;
    // 0x803F4A58: nop

    // 0x803F4A5C: bc1f        L_803F4A74
    if (!c1cs) {
        // 0x803F4A60: nop
    
            goto L_803F4A74;
    }
    // 0x803F4A60: nop

    // 0x803F4A64: jal         0x803F3A98
    // 0x803F4A68: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_803F0000_menu_func_803F3A98(rdram, ctx);
        goto after_15;
    // 0x803F4A68: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_15:
    // 0x803F4A6C: b           L_803F4D78
    // 0x803F4A70: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_803F4D78;
    // 0x803F4A70: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_803F4A74:
    // 0x803F4A74: lhu         $t0, 0x95C($v0)
    ctx->r8 = MEM_HU(ctx->r2, 0X95C);
    // 0x803F4A78: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x803F4A7C: andi        $t1, $t0, 0xFFFE
    ctx->r9 = ctx->r8 & 0XFFFE;
    // 0x803F4A80: sh          $t1, 0x95C($v0)
    MEM_H(0X95C, ctx->r2) = ctx->r9;
    // 0x803F4A84: sh          $t2, 0x8A($sp)
    MEM_H(0X8A, ctx->r29) = ctx->r10;
    // 0x803F4A88: lhu         $t3, 0x12($s0)
    ctx->r11 = MEM_HU(ctx->r16, 0X12);
    // 0x803F4A8C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x803F4A90: ori         $t4, $t3, 0x4
    ctx->r12 = ctx->r11 | 0X4;
    // 0x803F4A94: jal         0x803F0EF0
    // 0x803F4A98: sh          $t4, 0x12($s0)
    MEM_H(0X12, ctx->r16) = ctx->r12;
    ovl_803F0000_menu_func_803F0EF0(rdram, ctx);
        goto after_16;
    // 0x803F4A98: sh          $t4, 0x12($s0)
    MEM_H(0X12, ctx->r16) = ctx->r12;
    after_16:
    // 0x803F4A9C: beq         $v0, $zero, L_803F4AEC
    if (ctx->r2 == 0) {
        // 0x803F4AA0: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_803F4AEC;
    }
    // 0x803F4AA0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x803F4AA4: lh          $a1, 0x2E($v0)
    ctx->r5 = MEM_H(ctx->r2, 0X2E);
    // 0x803F4AA8: sw          $v0, 0xCC($sp)
    MEM_W(0XCC, ctx->r29) = ctx->r2;
    // 0x803F4AAC: jal         0x803F3C88
    // 0x803F4AB0: addiu       $a2, $zero, 0x1A8
    ctx->r6 = ADD32(0, 0X1A8);
    ovl_803F0000_menu_func_803F3C88(rdram, ctx);
        goto after_17;
    // 0x803F4AB0: addiu       $a2, $zero, 0x1A8
    ctx->r6 = ADD32(0, 0X1A8);
    after_17:
    // 0x803F4AB4: lw          $v1, 0xCC($sp)
    ctx->r3 = MEM_W(ctx->r29, 0XCC);
    // 0x803F4AB8: mtc1        $v0, $f16
    ctx->f16.u32l = ctx->r2;
    // 0x803F4ABC: lh          $t5, 0x30($v1)
    ctx->r13 = MEM_H(ctx->r3, 0X30);
    // 0x803F4AC0: cvt.s.w     $f16, $f16
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    ctx->f16.fl = CVT_S_W(ctx->f16.u32l);
    // 0x803F4AC4: mtc1        $t5, $f18
    ctx->f18.u32l = ctx->r13;
    // 0x803F4AC8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x803F4ACC: cvt.s.w     $f18, $f18
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    ctx->f18.fl = CVT_S_W(ctx->f18.u32l);
    // 0x803F4AD0: mfc1        $a1, $f16
    ctx->r5 = (int32_t)ctx->f16.u32l;
    // 0x803F4AD4: addiu       $a3, $sp, 0xB0
    ctx->r7 = ADD32(ctx->r29, 0XB0);
    // 0x803F4AD8: mfc1        $a2, $f18
    ctx->r6 = (int32_t)ctx->f18.u32l;
    // 0x803F4ADC: jal         0x80272B98
    // 0x803F4AE0: nop

    LOOKUP_FUNC(0x80272B98)(rdram, ctx);
        goto after_18;
    // 0x803F4AE0: nop

    after_18:
    // 0x803F4AE4: b           L_803F4B20
    // 0x803F4AE8: lwc1        $f6, 0xB0($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0XB0);
        goto L_803F4B20;
    // 0x803F4AE8: lwc1        $f6, 0xB0($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0XB0);
L_803F4AEC:
    // 0x803F4AEC: lw          $t6, 0xC8($s0)
    ctx->r14 = MEM_W(ctx->r16, 0XC8);
    // 0x803F4AF0: mtc1        $zero, $f14
    ctx->f14.u32l = 0;
    // 0x803F4AF4: lw          $t7, 0x24($t6)
    ctx->r15 = MEM_W(ctx->r14, 0X24);
    // 0x803F4AF8: mfc1        $a2, $f14
    ctx->r6 = (int32_t)ctx->f14.u32l;
    // 0x803F4AFC: lh          $t8, 0x8BA($t7)
    ctx->r24 = MEM_H(ctx->r15, 0X8BA);
    // 0x803F4B00: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x803F4B04: mtc1        $t8, $f10
    ctx->f10.u32l = ctx->r24;
    // 0x803F4B08: addiu       $a3, $sp, 0xB0
    ctx->r7 = ADD32(ctx->r29, 0XB0);
    // 0x803F4B0C: cvt.s.w     $f10, $f10
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 10);
    ctx->f10.fl = CVT_S_W(ctx->f10.u32l);
    // 0x803F4B10: mfc1        $a1, $f10
    ctx->r5 = (int32_t)ctx->f10.u32l;
    // 0x803F4B14: jal         0x80272B98
    // 0x803F4B18: nop

    LOOKUP_FUNC(0x80272B98)(rdram, ctx);
        goto after_19;
    // 0x803F4B18: nop

    after_19:
    // 0x803F4B1C: lwc1        $f6, 0xB0($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0XB0);
L_803F4B20:
    // 0x803F4B20: lui         $a2, 0x800B
    ctx->r6 = S32(0X800B << 16);
    // 0x803F4B24: swc1        $f6, 0xBC($s0)
    MEM_W(0XBC, ctx->r16) = ctx->f6.u32l;
    // 0x803F4B28: lwc1        $f12, 0xB4($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0XB4);
    // 0x803F4B2C: lui         $a3, 0x800B
    ctx->r7 = S32(0X800B << 16);
    // 0x803F4B30: addiu       $a3, $a3, -0x53C8
    ctx->r7 = ADD32(ctx->r7, -0X53C8);
    // 0x803F4B34: addiu       $a2, $a2, -0x53E0
    ctx->r6 = ADD32(ctx->r6, -0X53E0);
    // 0x803F4B38: jal         0x803F0000
    // 0x803F4B3C: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
    ovl_803F0000_menu_func_803F0000(rdram, ctx);
        goto after_20;
    // 0x803F4B3C: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
    after_20:
    // 0x803F4B40: lw          $t9, 0xC8($s0)
    ctx->r25 = MEM_W(ctx->r16, 0XC8);
    // 0x803F4B44: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x803F4B48: jal         0x803F3D10
    // 0x803F4B4C: sh          $v0, 0x960($t9)
    MEM_H(0X960, ctx->r25) = ctx->r2;
    ovl_803F0000_menu_func_803F3D10(rdram, ctx);
        goto after_21;
    // 0x803F4B4C: sh          $v0, 0x960($t9)
    MEM_H(0X960, ctx->r25) = ctx->r2;
    after_21:
    // 0x803F4B50: b           L_803F4D78
    // 0x803F4B54: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_803F4D78;
    // 0x803F4B54: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x803F4B58: lui         $t0, 0x8028
    ctx->r8 = S32(0X8028 << 16);
    // 0x803F4B5C: lh          $t0, -0x1B60($t0)
    ctx->r8 = MEM_H(ctx->r8, -0X1B60);
    // 0x803F4B60: lui         $at, 0x4248
    ctx->r1 = S32(0X4248 << 16);
    // 0x803F4B64: andi        $t1, $t0, 0x1
    ctx->r9 = ctx->r8 & 0X1;
    // 0x803F4B68: beq         $t1, $zero, L_803F4BBC
    if (ctx->r9 == 0) {
        // 0x803F4B6C: nop
    
            goto L_803F4BBC;
    }
    // 0x803F4B6C: nop

    // 0x803F4B70: lwc1        $f4, 0x84($a2)
    ctx->f4.u32l = MEM_W(ctx->r6, 0X84);
    // 0x803F4B74: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x803F4B78: lui         $at, 0x803F
    ctx->r1 = S32(0X803F << 16);
    // 0x803F4B7C: c.lt.s      $f4, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f4.fl < ctx->f8.fl;
    // 0x803F4B80: nop

    // 0x803F4B84: bc1f        L_803F4BBC
    if (!c1cs) {
        // 0x803F4B88: nop
    
            goto L_803F4BBC;
    }
    // 0x803F4B88: nop

    // 0x803F4B8C: lwc1        $f18, 0x50($a2)
    ctx->f18.u32l = MEM_W(ctx->r6, 0X50);
    // 0x803F4B90: lwc1        $f17, 0x7D70($at)
    ctx->f_odd[(17 - 1) * 2] = MEM_W(ctx->r1, 0X7D70);
    // 0x803F4B94: lwc1        $f16, 0x7D74($at)
    ctx->f16.u32l = MEM_W(ctx->r1, 0X7D74);
    // 0x803F4B98: cvt.d.s     $f10, $f18
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.fl); 
    ctx->f10.d = CVT_D_S(ctx->f18.fl);
    // 0x803F4B9C: c.lt.d      $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f16.d < ctx->f10.d;
    // 0x803F4BA0: nop

    // 0x803F4BA4: bc1f        L_803F4BBC
    if (!c1cs) {
        // 0x803F4BA8: nop
    
            goto L_803F4BBC;
    }
    // 0x803F4BA8: nop

    // 0x803F4BAC: jal         0x803F3A98
    // 0x803F4BB0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_803F0000_menu_func_803F3A98(rdram, ctx);
        goto after_22;
    // 0x803F4BB0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_22:
    // 0x803F4BB4: b           L_803F4D78
    // 0x803F4BB8: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_803F4D78;
    // 0x803F4BB8: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_803F4BBC:
    // 0x803F4BBC: jal         0x803F401C
    // 0x803F4BC0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_803F0000_menu_func_803F401C(rdram, ctx);
        goto after_23;
    // 0x803F4BC0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_23:
    // 0x803F4BC4: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x803F4BC8: sh          $t2, 0x8A($sp)
    MEM_H(0X8A, ctx->r29) = ctx->r10;
    // 0x803F4BCC: lw          $v0, 0xC8($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XC8);
    // 0x803F4BD0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x803F4BD4: lhu         $t3, 0x95C($v0)
    ctx->r11 = MEM_HU(ctx->r2, 0X95C);
    // 0x803F4BD8: nop

    // 0x803F4BDC: ori         $t4, $t3, 0x2800
    ctx->r12 = ctx->r11 | 0X2800;
    // 0x803F4BE0: jal         0x803F3D10
    // 0x803F4BE4: sh          $t4, 0x95C($v0)
    MEM_H(0X95C, ctx->r2) = ctx->r12;
    ovl_803F0000_menu_func_803F3D10(rdram, ctx);
        goto after_24;
    // 0x803F4BE4: sh          $t4, 0x95C($v0)
    MEM_H(0X95C, ctx->r2) = ctx->r12;
    after_24:
    // 0x803F4BE8: b           L_803F4D78
    // 0x803F4BEC: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_803F4D78;
    // 0x803F4BEC: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x803F4BF0: lhu         $t5, 0x95C($v0)
    ctx->r13 = MEM_HU(ctx->r2, 0X95C);
    // 0x803F4BF4: addiu       $t7, $zero, 0x8
    ctx->r15 = ADD32(0, 0X8);
    // 0x803F4BF8: andi        $t6, $t5, 0xFFFE
    ctx->r14 = ctx->r13 & 0XFFFE;
    // 0x803F4BFC: sh          $t6, 0x95C($v0)
    MEM_H(0X95C, ctx->r2) = ctx->r14;
    // 0x803F4C00: sh          $t7, 0x8A($sp)
    MEM_H(0X8A, ctx->r29) = ctx->r15;
    // 0x803F4C04: lw          $v0, 0xC8($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XC8);
    // 0x803F4C08: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x803F4C0C: lw          $t8, 0x958($v0)
    ctx->r24 = MEM_W(ctx->r2, 0X958);
    // 0x803F4C10: addiu       $t4, $zero, 0x13
    ctx->r12 = ADD32(0, 0X13);
    // 0x803F4C14: beq         $t8, $zero, L_803F4C68
    if (ctx->r24 == 0) {
        // 0x803F4C18: nop
    
            goto L_803F4C68;
    }
    // 0x803F4C18: nop

    // 0x803F4C1C: jal         0x8006B35C
    // 0x803F4C20: addiu       $a1, $sp, 0x38
    ctx->r5 = ADD32(ctx->r29, 0X38);
    func_8006B35C(rdram, ctx);
        goto after_25;
    // 0x803F4C20: addiu       $a1, $sp, 0x38
    ctx->r5 = ADD32(ctx->r29, 0X38);
    after_25:
    // 0x803F4C24: lw          $t9, 0xC8($s0)
    ctx->r25 = MEM_W(ctx->r16, 0XC8);
    // 0x803F4C28: addiu       $a1, $zero, 0x13
    ctx->r5 = ADD32(0, 0X13);
    // 0x803F4C2C: lw          $t0, 0x958($t9)
    ctx->r8 = MEM_W(ctx->r25, 0X958);
    // 0x803F4C30: addiu       $a2, $sp, 0x38
    ctx->r6 = ADD32(ctx->r29, 0X38);
    // 0x803F4C34: lwc1        $f12, 0x84($t0)
    ctx->f12.u32l = MEM_W(ctx->r8, 0X84);
    // 0x803F4C38: jal         0x803F0000
    // 0x803F4C3C: addiu       $a3, $sp, 0x84
    ctx->r7 = ADD32(ctx->r29, 0X84);
    ovl_803F0000_menu_func_803F0000(rdram, ctx);
        goto after_26;
    // 0x803F4C3C: addiu       $a3, $sp, 0x84
    ctx->r7 = ADD32(ctx->r29, 0X84);
    after_26:
    // 0x803F4C40: lw          $t1, 0xC8($s0)
    ctx->r9 = MEM_W(ctx->r16, 0XC8);
    // 0x803F4C44: nop

    // 0x803F4C48: sh          $v0, 0x960($t1)
    MEM_H(0X960, ctx->r9) = ctx->r2;
    // 0x803F4C4C: lw          $t2, 0xC8($s0)
    ctx->r10 = MEM_W(ctx->r16, 0XC8);
    // 0x803F4C50: nop

    // 0x803F4C54: lw          $t3, 0x958($t2)
    ctx->r11 = MEM_W(ctx->r10, 0X958);
    // 0x803F4C58: nop

    // 0x803F4C5C: lwc1        $f6, 0x88($t3)
    ctx->f6.u32l = MEM_W(ctx->r11, 0X88);
    // 0x803F4C60: b           L_803F4C94
    // 0x803F4C64: swc1        $f6, 0xBC($s0)
    MEM_W(0XBC, ctx->r16) = ctx->f6.u32l;
        goto L_803F4C94;
    // 0x803F4C64: swc1        $f6, 0xBC($s0)
    MEM_W(0XBC, ctx->r16) = ctx->f6.u32l;
L_803F4C68:
    // 0x803F4C68: sh          $t4, 0x960($v0)
    MEM_H(0X960, ctx->r2) = ctx->r12;
    // 0x803F4C6C: lw          $t5, 0xC8($s0)
    ctx->r13 = MEM_W(ctx->r16, 0XC8);
    // 0x803F4C70: lui         $at, 0x803F
    ctx->r1 = S32(0X803F << 16);
    // 0x803F4C74: lw          $t6, 0x24($t5)
    ctx->r14 = MEM_W(ctx->r13, 0X24);
    // 0x803F4C78: lwc1        $f19, 0x7D78($at)
    ctx->f_odd[(19 - 1) * 2] = MEM_W(ctx->r1, 0X7D78);
    // 0x803F4C7C: lwc1        $f4, 0x8C0($t6)
    ctx->f4.u32l = MEM_W(ctx->r14, 0X8C0);
    // 0x803F4C80: lwc1        $f18, 0x7D7C($at)
    ctx->f18.u32l = MEM_W(ctx->r1, 0X7D7C);
    // 0x803F4C84: cvt.d.s     $f8, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f8.d = CVT_D_S(ctx->f4.fl);
    // 0x803F4C88: add.d       $f16, $f8, $f18
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f18.d); 
    ctx->f16.d = ctx->f8.d + ctx->f18.d;
    // 0x803F4C8C: cvt.s.d     $f10, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.d); 
    ctx->f10.fl = CVT_S_D(ctx->f16.d);
    // 0x803F4C90: swc1        $f10, 0xBC($s0)
    MEM_W(0XBC, ctx->r16) = ctx->f10.u32l;
L_803F4C94:
    // 0x803F4C94: lhu         $t7, 0x12($s0)
    ctx->r15 = MEM_HU(ctx->r16, 0X12);
    // 0x803F4C98: nop

    // 0x803F4C9C: ori         $t8, $t7, 0x4
    ctx->r24 = ctx->r15 | 0X4;
    // 0x803F4CA0: b           L_803F4D74
    // 0x803F4CA4: sh          $t8, 0x12($s0)
    MEM_H(0X12, ctx->r16) = ctx->r24;
        goto L_803F4D74;
    // 0x803F4CA4: sh          $t8, 0x12($s0)
    MEM_H(0X12, ctx->r16) = ctx->r24;
    // 0x803F4CA8: lui         $at, 0x4080
    ctx->r1 = S32(0X4080 << 16);
    // 0x803F4CAC: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    // 0x803F4CB0: lui         $at, 0x3FC0
    ctx->r1 = S32(0X3FC0 << 16);
    // 0x803F4CB4: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x803F4CB8: lui         $a2, 0x3E19
    ctx->r6 = S32(0X3E19 << 16);
    // 0x803F4CBC: lui         $a3, 0x3D4C
    ctx->r7 = S32(0X3D4C << 16);
    // 0x803F4CC0: addiu       $t9, $sp, 0x38
    ctx->r25 = ADD32(ctx->r29, 0X38);
    // 0x803F4CC4: sw          $t9, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r25;
    // 0x803F4CC8: ori         $a3, $a3, 0xCCCD
    ctx->r7 = ctx->r7 | 0XCCCD;
    // 0x803F4CCC: jal         0x8005743C
    // 0x803F4CD0: ori         $a2, $a2, 0x999A
    ctx->r6 = ctx->r6 | 0X999A;
    func_8005743C(rdram, ctx);
        goto after_27;
    // 0x803F4CD0: ori         $a2, $a2, 0x999A
    ctx->r6 = ctx->r6 | 0X999A;
    after_27:
    // 0x803F4CD4: lw          $t0, 0xC8($s0)
    ctx->r8 = MEM_W(ctx->r16, 0XC8);
    // 0x803F4CD8: addiu       $a1, $zero, 0x13
    ctx->r5 = ADD32(0, 0X13);
    // 0x803F4CDC: lw          $t1, 0x958($t0)
    ctx->r9 = MEM_W(ctx->r8, 0X958);
    // 0x803F4CE0: addiu       $a2, $sp, 0x38
    ctx->r6 = ADD32(ctx->r29, 0X38);
    // 0x803F4CE4: lwc1        $f12, 0x84($t1)
    ctx->f12.u32l = MEM_W(ctx->r9, 0X84);
    // 0x803F4CE8: jal         0x803F0000
    // 0x803F4CEC: addiu       $a3, $sp, 0x84
    ctx->r7 = ADD32(ctx->r29, 0X84);
    ovl_803F0000_menu_func_803F0000(rdram, ctx);
        goto after_28;
    // 0x803F4CEC: addiu       $a3, $sp, 0x84
    ctx->r7 = ADD32(ctx->r29, 0X84);
    after_28:
    // 0x803F4CF0: lw          $t2, 0xC8($s0)
    ctx->r10 = MEM_W(ctx->r16, 0XC8);
    // 0x803F4CF4: addiu       $t3, $zero, 0x1
    ctx->r11 = ADD32(0, 0X1);
    // 0x803F4CF8: sh          $v0, 0x960($t2)
    MEM_H(0X960, ctx->r10) = ctx->r2;
    // 0x803F4CFC: sh          $t3, 0x8A($sp)
    MEM_H(0X8A, ctx->r29) = ctx->r11;
    // 0x803F4D00: lw          $t4, 0xC8($s0)
    ctx->r12 = MEM_W(ctx->r16, 0XC8);
    // 0x803F4D04: lhu         $t6, 0x12($s0)
    ctx->r14 = MEM_HU(ctx->r16, 0X12);
    // 0x803F4D08: lw          $t5, 0x958($t4)
    ctx->r13 = MEM_W(ctx->r12, 0X958);
    // 0x803F4D0C: ori         $t7, $t6, 0x4
    ctx->r15 = ctx->r14 | 0X4;
    // 0x803F4D10: lwc1        $f6, 0x88($t5)
    ctx->f6.u32l = MEM_W(ctx->r13, 0X88);
    // 0x803F4D14: sh          $t7, 0x12($s0)
    MEM_H(0X12, ctx->r16) = ctx->r15;
    // 0x803F4D18: b           L_803F4D74
    // 0x803F4D1C: swc1        $f6, 0xBC($s0)
    MEM_W(0XBC, ctx->r16) = ctx->f6.u32l;
        goto L_803F4D74;
    // 0x803F4D1C: swc1        $f6, 0xBC($s0)
    MEM_W(0XBC, ctx->r16) = ctx->f6.u32l;
    // 0x803F4D20: jal         0x803F34D4
    // 0x803F4D24: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_803F0000_menu_func_803F34D4(rdram, ctx);
        goto after_29;
    // 0x803F4D24: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_29:
    // 0x803F4D28: b           L_803F4D78
    // 0x803F4D2C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_803F4D78;
    // 0x803F4D2C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x803F4D30: jal         0x803F3A98
    // 0x803F4D34: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_803F0000_menu_func_803F3A98(rdram, ctx);
        goto after_30;
    // 0x803F4D34: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_30:
    // 0x803F4D38: b           L_803F4D78
    // 0x803F4D3C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_803F4D78;
    // 0x803F4D3C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x803F4D40: jal         0x803F2A40
    // 0x803F4D44: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_803F0000_menu_func_803F2A40(rdram, ctx);
        goto after_31;
    // 0x803F4D44: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_31:
    // 0x803F4D48: bne         $v0, $zero, L_803F4D78
    if (ctx->r2 != 0) {
        // 0x803F4D4C: lw          $ra, 0x24($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X24);
            goto L_803F4D78;
    }
    // 0x803F4D4C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x803F4D50: jal         0x803F2464
    // 0x803F4D54: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_803F0000_menu_func_803F2464(rdram, ctx);
        goto after_32;
    // 0x803F4D54: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_32:
    // 0x803F4D58: b           L_803F4D78
    // 0x803F4D5C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_803F4D78;
    // 0x803F4D5C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x803F4D60: lhu         $t8, 0x12($s0)
    ctx->r24 = MEM_HU(ctx->r16, 0X12);
    // 0x803F4D64: mtc1        $zero, $f14
    ctx->f14.u32l = 0;
    // 0x803F4D68: ori         $t9, $t8, 0x8
    ctx->r25 = ctx->r24 | 0X8;
    // 0x803F4D6C: sh          $t9, 0x12($s0)
    MEM_H(0X12, ctx->r16) = ctx->r25;
    // 0x803F4D70: swc1        $f14, 0xAC($s0)
    MEM_W(0XAC, ctx->r16) = ctx->f14.u32l;
L_803F4D74:
    // 0x803F4D74: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_803F4D78:
    // 0x803F4D78: lhu         $v0, 0x8A($sp)
    ctx->r2 = MEM_HU(ctx->r29, 0X8A);
    // 0x803F4D7C: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x803F4D80: jr          $ra
    // 0x803F4D84: addiu       $sp, $sp, 0xD0
    ctx->r29 = ADD32(ctx->r29, 0XD0);
    return;
    // 0x803F4D84: addiu       $sp, $sp, 0xD0
    ctx->r29 = ADD32(ctx->r29, 0XD0);
;}
RECOMP_FUNC void ovl_803F0000_menu_func_803F46E8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803F46E8: addiu       $t6, $zero, 0x4
    ctx->r14 = ADD32(0, 0X4);
    // 0x803F46EC: b           L_803F4D74
    // 0x803F46F0: sh          $t6, 0x8A($sp)
    MEM_H(0X8A, ctx->r29) = ctx->r14;
        goto L_803F4D74;
    // 0x803F46F0: sh          $t6, 0x8A($sp)
    MEM_H(0X8A, ctx->r29) = ctx->r14;
    // 0x803F46F4: lui         $v0, 0x8009
    ctx->r2 = S32(0X8009 << 16);
    // 0x803F46F8: lw          $v0, 0x3B20($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X3B20);
    // 0x803F46FC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x803F4700: lw          $a1, 0x8($v0)
    ctx->r5 = MEM_W(ctx->r2, 0X8);
    // 0x803F4704: lw          $a2, 0x0($v0)
    ctx->r6 = MEM_W(ctx->r2, 0X0);
    // 0x803F4708: jal         0x803F3EE8
    // 0x803F470C: nop

    ovl_803F0000_menu_func_803F3EE8(rdram, ctx);
        goto after_0;
    // 0x803F470C: nop

    after_0:
    // 0x803F4710: lw          $v0, 0xC8($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XC8);
    // 0x803F4714: addiu       $t9, $zero, 0x8
    ctx->r25 = ADD32(0, 0X8);
    // 0x803F4718: lhu         $t7, 0x95C($v0)
    ctx->r15 = MEM_HU(ctx->r2, 0X95C);
    // 0x803F471C: lui         $at, 0x4316
    ctx->r1 = S32(0X4316 << 16);
    // 0x803F4720: andi        $t8, $t7, 0xFFFE
    ctx->r24 = ctx->r15 & 0XFFFE;
    // 0x803F4724: sh          $t8, 0x95C($v0)
    MEM_H(0X95C, ctx->r2) = ctx->r24;
    // 0x803F4728: sh          $t9, 0x8A($sp)
    MEM_H(0X8A, ctx->r29) = ctx->r25;
    // 0x803F472C: lw          $v0, 0xC8($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XC8);
    // 0x803F4730: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x803F4734: lw          $t0, 0x24($v0)
    ctx->r8 = MEM_W(ctx->r2, 0X24);
    // 0x803F4738: addiu       $t1, $zero, 0x6
    ctx->r9 = ADD32(0, 0X6);
    // 0x803F473C: lwc1        $f8, 0x8BC($t0)
    ctx->f8.u32l = MEM_W(ctx->r8, 0X8BC);
    // 0x803F4740: nop

    // 0x803F4744: c.lt.s      $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f6.fl < ctx->f8.fl;
    // 0x803F4748: nop

    // 0x803F474C: bc1f        L_803F475C
    if (!c1cs) {
        // 0x803F4750: nop
    
            goto L_803F475C;
    }
    // 0x803F4750: nop

    // 0x803F4754: b           L_803F4770
    // 0x803F4758: sh          $t1, 0x960($v0)
    MEM_H(0X960, ctx->r2) = ctx->r9;
        goto L_803F4770;
    // 0x803F4758: sh          $t1, 0x960($v0)
    MEM_H(0X960, ctx->r2) = ctx->r9;
L_803F475C:
    // 0x803F475C: jal         0x80059898
    // 0x803F4760: addiu       $a0, $zero, 0x7
    ctx->r4 = ADD32(0, 0X7);
    func_80059898(rdram, ctx);
        goto after_1;
    // 0x803F4760: addiu       $a0, $zero, 0x7
    ctx->r4 = ADD32(0, 0X7);
    after_1:
    // 0x803F4764: lw          $t2, 0xC8($s0)
    ctx->r10 = MEM_W(ctx->r16, 0XC8);
    // 0x803F4768: nop

    // 0x803F476C: sh          $v0, 0x960($t2)
    MEM_H(0X960, ctx->r10) = ctx->r2;
L_803F4770:
    // 0x803F4770: lhu         $t3, 0x12($s0)
    ctx->r11 = MEM_HU(ctx->r16, 0X12);
    // 0x803F4774: nop

    // 0x803F4778: ori         $t4, $t3, 0x4
    ctx->r12 = ctx->r11 | 0X4;
    // 0x803F477C: b           L_803F4D74
    // 0x803F4780: sh          $t4, 0x12($s0)
    MEM_H(0X12, ctx->r16) = ctx->r12;
        goto L_803F4D74;
    // 0x803F4780: sh          $t4, 0x12($s0)
    MEM_H(0X12, ctx->r16) = ctx->r12;
    // 0x803F4784: lhu         $t5, 0x95C($v0)
    ctx->r13 = MEM_HU(ctx->r2, 0X95C);
    // 0x803F4788: addiu       $t9, $zero, 0x8
    ctx->r25 = ADD32(0, 0X8);
    // 0x803F478C: ori         $t6, $t5, 0x20
    ctx->r14 = ctx->r13 | 0X20;
    // 0x803F4790: sh          $t6, 0x95C($v0)
    MEM_H(0X95C, ctx->r2) = ctx->r14;
    // 0x803F4794: lhu         $t7, 0x12($s0)
    ctx->r15 = MEM_HU(ctx->r16, 0X12);
    // 0x803F4798: addiu       $a0, $zero, 0x28
    ctx->r4 = ADD32(0, 0X28);
    // 0x803F479C: ori         $t8, $t7, 0x4
    ctx->r24 = ctx->r15 | 0X4;
    // 0x803F47A0: sh          $t8, 0x12($s0)
    MEM_H(0X12, ctx->r16) = ctx->r24;
    // 0x803F47A4: jal         0x80059898
    // 0x803F47A8: sh          $t9, 0x8A($sp)
    MEM_H(0X8A, ctx->r29) = ctx->r25;
    func_80059898(rdram, ctx);
        goto after_2;
    // 0x803F47A8: sh          $t9, 0x8A($sp)
    MEM_H(0X8A, ctx->r29) = ctx->r25;
    after_2:
    // 0x803F47AC: mtc1        $v0, $f16
    ctx->f16.u32l = ctx->r2;
    // 0x803F47B0: bgez        $v0, L_803F47C8
    if (SIGNED(ctx->r2) >= 0) {
        // 0x803F47B4: cvt.s.w     $f10, $f16
        CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    ctx->f10.fl = CVT_S_W(ctx->f16.u32l);
            goto L_803F47C8;
    }
    // 0x803F47B4: cvt.s.w     $f10, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    ctx->f10.fl = CVT_S_W(ctx->f16.u32l);
    // 0x803F47B8: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x803F47BC: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x803F47C0: nop

    // 0x803F47C4: add.s       $f10, $f10, $f18
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f10.fl = ctx->f10.fl + ctx->f18.fl;
L_803F47C8:
    // 0x803F47C8: lw          $t0, 0xC8($s0)
    ctx->r8 = MEM_W(ctx->r16, 0XC8);
    // 0x803F47CC: lui         $a2, 0x800B
    ctx->r6 = S32(0X800B << 16);
    // 0x803F47D0: lw          $t1, 0x24($t0)
    ctx->r9 = MEM_W(ctx->r8, 0X24);
    // 0x803F47D4: lui         $a3, 0x800B
    ctx->r7 = S32(0X800B << 16);
    // 0x803F47D8: lwc1        $f4, 0x8BC($t1)
    ctx->f4.u32l = MEM_W(ctx->r9, 0X8BC);
    // 0x803F47DC: addiu       $a3, $a3, -0x5270
    ctx->r7 = ADD32(ctx->r7, -0X5270);
    // 0x803F47E0: addiu       $a2, $a2, -0x5288
    ctx->r6 = ADD32(ctx->r6, -0X5288);
    // 0x803F47E4: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
    // 0x803F47E8: jal         0x803F0000
    // 0x803F47EC: add.s       $f12, $f10, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f12.fl = ctx->f10.fl + ctx->f4.fl;
    ovl_803F0000_menu_func_803F0000(rdram, ctx);
        goto after_3;
    // 0x803F47EC: add.s       $f12, $f10, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f12.fl = ctx->f10.fl + ctx->f4.fl;
    after_3:
    // 0x803F47F0: lw          $t2, 0xC8($s0)
    ctx->r10 = MEM_W(ctx->r16, 0XC8);
    // 0x803F47F4: b           L_803F4D74
    // 0x803F47F8: sh          $v0, 0x960($t2)
    MEM_H(0X960, ctx->r10) = ctx->r2;
        goto L_803F4D74;
    // 0x803F47F8: sh          $v0, 0x960($t2)
    MEM_H(0X960, ctx->r10) = ctx->r2;
    // 0x803F47FC: lhu         $t3, 0x95C($v0)
    ctx->r11 = MEM_HU(ctx->r2, 0X95C);
    // 0x803F4800: addiu       $t5, $zero, 0x1
    ctx->r13 = ADD32(0, 0X1);
    // 0x803F4804: andi        $t4, $t3, 0xFFFE
    ctx->r12 = ctx->r11 & 0XFFFE;
    // 0x803F4808: sh          $t4, 0x95C($v0)
    MEM_H(0X95C, ctx->r2) = ctx->r12;
    // 0x803F480C: sh          $t5, 0x8A($sp)
    MEM_H(0X8A, ctx->r29) = ctx->r13;
    // 0x803F4810: lhu         $t6, 0x12($s0)
    ctx->r14 = MEM_HU(ctx->r16, 0X12);
    // 0x803F4814: lw          $t8, 0xC8($s0)
    ctx->r24 = MEM_W(ctx->r16, 0XC8);
    // 0x803F4818: ori         $t7, $t6, 0x4
    ctx->r15 = ctx->r14 | 0X4;
    // 0x803F481C: sh          $t7, 0x12($s0)
    MEM_H(0X12, ctx->r16) = ctx->r15;
    // 0x803F4820: lh          $t9, 0x8CA($t8)
    ctx->r25 = MEM_H(ctx->r24, 0X8CA);
    // 0x803F4824: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x803F4828: addiu       $t0, $t9, 0x32
    ctx->r8 = ADD32(ctx->r25, 0X32);
    // 0x803F482C: mtc1        $t0, $f6
    ctx->f6.u32l = ctx->r8;
    // 0x803F4830: nop

    // 0x803F4834: cvt.s.w     $f6, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    ctx->f6.fl = CVT_S_W(ctx->f6.u32l);
    // 0x803F4838: mfc1        $a1, $f6
    ctx->r5 = (int32_t)ctx->f6.u32l;
    // 0x803F483C: jal         0x8026AB68
    // 0x803F4840: nop

    LOOKUP_FUNC(0x8026AB68)(rdram, ctx);
        goto after_4;
    // 0x803F4840: nop

    after_4:
    // 0x803F4844: mov.s       $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    ctx->f12.fl = ctx->f0.fl;
    // 0x803F4848: jal         0x80272AEC
    // 0x803F484C: swc1        $f0, 0xAC($sp)
    MEM_W(0XAC, ctx->r29) = ctx->f0.u32l;
    LOOKUP_FUNC(0x80272AEC)(rdram, ctx);
        goto after_5;
    // 0x803F484C: swc1        $f0, 0xAC($sp)
    MEM_W(0XAC, ctx->r29) = ctx->f0.u32l;
    after_5:
    // 0x803F4850: lui         $at, 0x803F
    ctx->r1 = S32(0X803F << 16);
    // 0x803F4854: lwc1        $f8, 0x7D5C($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X7D5C);
    // 0x803F4858: lwc1        $f2, 0xAC($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0XAC);
    // 0x803F485C: c.lt.s      $f8, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f8.fl < ctx->f0.fl;
    // 0x803F4860: lui         $t4, 0x8009
    ctx->r12 = S32(0X8009 << 16);
    // 0x803F4864: bc1f        L_803F4890
    if (!c1cs) {
        // 0x803F4868: addiu       $v0, $zero, 0x3C
        ctx->r2 = ADD32(0, 0X3C);
            goto L_803F4890;
    }
    // 0x803F4868: addiu       $v0, $zero, 0x3C
    ctx->r2 = ADD32(0, 0X3C);
    // 0x803F486C: lw          $t1, 0xC8($s0)
    ctx->r9 = MEM_W(ctx->r16, 0XC8);
    // 0x803F4870: nop

    // 0x803F4874: lw          $t2, 0x24($t1)
    ctx->r10 = MEM_W(ctx->r9, 0X24);
    // 0x803F4878: nop

    // 0x803F487C: lh          $t3, 0x8BA($t2)
    ctx->r11 = MEM_H(ctx->r10, 0X8BA);
    // 0x803F4880: nop

    // 0x803F4884: mtc1        $t3, $f16
    ctx->f16.u32l = ctx->r11;
    // 0x803F4888: nop

    // 0x803F488C: cvt.s.w     $f2, $f16
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 16);
    ctx->f2.fl = CVT_S_W(ctx->f16.u32l);
L_803F4890:
    // 0x803F4890: lw          $t4, 0x3B20($t4)
    ctx->r12 = MEM_W(ctx->r12, 0X3B20);
    // 0x803F4894: mtc1        $zero, $f14
    ctx->f14.u32l = 0;
    // 0x803F4898: lwc1        $f18, 0x0($t4)
    ctx->f18.u32l = MEM_W(ctx->r12, 0X0);
    // 0x803F489C: nop

    // 0x803F48A0: c.lt.s      $f14, $f18
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f14.fl < ctx->f18.fl;
    // 0x803F48A4: nop

    // 0x803F48A8: bc1f        L_803F48B8
    if (!c1cs) {
        // 0x803F48AC: nop
    
            goto L_803F48B8;
    }
    // 0x803F48AC: nop

    // 0x803F48B0: b           L_803F48B8
    // 0x803F48B4: addiu       $v0, $zero, -0x3C
    ctx->r2 = ADD32(0, -0X3C);
        goto L_803F48B8;
    // 0x803F48B4: addiu       $v0, $zero, -0x3C
    ctx->r2 = ADD32(0, -0X3C);
L_803F48B8:
    // 0x803F48B8: mtc1        $v0, $f10
    ctx->f10.u32l = ctx->r2;
    // 0x803F48BC: mfc1        $a1, $f2
    ctx->r5 = (int32_t)ctx->f2.u32l;
    // 0x803F48C0: cvt.s.w     $f10, $f10
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 10);
    ctx->f10.fl = CVT_S_W(ctx->f10.u32l);
    // 0x803F48C4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x803F48C8: addiu       $a3, $sp, 0xB0
    ctx->r7 = ADD32(ctx->r29, 0XB0);
    // 0x803F48CC: mfc1        $a2, $f10
    ctx->r6 = (int32_t)ctx->f10.u32l;
    // 0x803F48D0: jal         0x80272B98
    // 0x803F48D4: nop

    LOOKUP_FUNC(0x80272B98)(rdram, ctx);
        goto after_6;
    // 0x803F48D4: nop

    after_6:
    // 0x803F48D8: lwc1        $f4, 0xB0($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0XB0);
    // 0x803F48DC: lui         $a2, 0x800B
    ctx->r6 = S32(0X800B << 16);
    // 0x803F48E0: swc1        $f4, 0xBC($s0)
    MEM_W(0XBC, ctx->r16) = ctx->f4.u32l;
    // 0x803F48E4: lwc1        $f12, 0xB4($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0XB4);
    // 0x803F48E8: lui         $a3, 0x800B
    ctx->r7 = S32(0X800B << 16);
    // 0x803F48EC: addiu       $a3, $a3, -0x53AC
    ctx->r7 = ADD32(ctx->r7, -0X53AC);
    // 0x803F48F0: addiu       $a2, $a2, -0x53C4
    ctx->r6 = ADD32(ctx->r6, -0X53C4);
    // 0x803F48F4: jal         0x803F0000
    // 0x803F48F8: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
    ovl_803F0000_menu_func_803F0000(rdram, ctx);
        goto after_7;
    // 0x803F48F8: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
    after_7:
    // 0x803F48FC: lw          $t5, 0xC8($s0)
    ctx->r13 = MEM_W(ctx->r16, 0XC8);
    // 0x803F4900: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x803F4904: jal         0x803F3D10
    // 0x803F4908: sh          $v0, 0x960($t5)
    MEM_H(0X960, ctx->r13) = ctx->r2;
    ovl_803F0000_menu_func_803F3D10(rdram, ctx);
        goto after_8;
    // 0x803F4908: sh          $v0, 0x960($t5)
    MEM_H(0X960, ctx->r13) = ctx->r2;
    after_8:
    // 0x803F490C: lw          $v0, 0xC8($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XC8);
    // 0x803F4910: nop

    // 0x803F4914: lh          $t6, 0x960($v0)
    ctx->r14 = MEM_H(ctx->r2, 0X960);
    // 0x803F4918: nop

    // 0x803F491C: addiu       $t7, $t6, -0x1
    ctx->r15 = ADD32(ctx->r14, -0X1);
    // 0x803F4920: b           L_803F4D74
    // 0x803F4924: sh          $t7, 0x960($v0)
    MEM_H(0X960, ctx->r2) = ctx->r15;
        goto L_803F4D74;
    // 0x803F4924: sh          $t7, 0x960($v0)
    MEM_H(0X960, ctx->r2) = ctx->r15;
    // 0x803F4928: lui         $at, 0x803F
    ctx->r1 = S32(0X803F << 16);
    // 0x803F492C: lwc1        $f6, 0x7D60($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X7D60);
    // 0x803F4930: addiu       $t8, $zero, 0xF
    ctx->r24 = ADD32(0, 0XF);
    // 0x803F4934: swc1        $f6, 0x940($v0)
    MEM_W(0X940, ctx->r2) = ctx->f6.u32l;
    // 0x803F4938: lw          $t9, 0xC8($s0)
    ctx->r25 = MEM_W(ctx->r16, 0XC8);
    // 0x803F493C: lui         $t0, 0x8009
    ctx->r8 = S32(0X8009 << 16);
    // 0x803F4940: sh          $t8, 0x938($t9)
    MEM_H(0X938, ctx->r25) = ctx->r24;
    // 0x803F4944: lw          $t0, 0x3B20($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X3B20);
    // 0x803F4948: mtc1        $zero, $f14
    ctx->f14.u32l = 0;
    // 0x803F494C: lwc1        $f8, 0x0($t0)
    ctx->f8.u32l = MEM_W(ctx->r8, 0X0);
    // 0x803F4950: addiu       $t1, $zero, 0x5C
    ctx->r9 = ADD32(0, 0X5C);
    // 0x803F4954: c.lt.s      $f14, $f8
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f14.fl < ctx->f8.fl;
    // 0x803F4958: addiu       $t8, $zero, -0x1F3
    ctx->r24 = ADD32(0, -0X1F3);
    // 0x803F495C: bc1f        L_803F4970
    if (!c1cs) {
        // 0x803F4960: addiu       $t7, $zero, 0x1F3
        ctx->r15 = ADD32(0, 0X1F3);
            goto L_803F4970;
    }
    // 0x803F4960: addiu       $t7, $zero, 0x1F3
    ctx->r15 = ADD32(0, 0X1F3);
    // 0x803F4964: lw          $t2, 0xC8($s0)
    ctx->r10 = MEM_W(ctx->r16, 0XC8);
    // 0x803F4968: b           L_803F497C
    // 0x803F496C: sh          $t1, 0x93E($t2)
    MEM_H(0X93E, ctx->r10) = ctx->r9;
        goto L_803F497C;
    // 0x803F496C: sh          $t1, 0x93E($t2)
    MEM_H(0X93E, ctx->r10) = ctx->r9;
L_803F4970:
    // 0x803F4970: lw          $t4, 0xC8($s0)
    ctx->r12 = MEM_W(ctx->r16, 0XC8);
    // 0x803F4974: addiu       $t3, $zero, -0x5C
    ctx->r11 = ADD32(0, -0X5C);
    // 0x803F4978: sh          $t3, 0x93E($t4)
    MEM_H(0X93E, ctx->r12) = ctx->r11;
L_803F497C:
    // 0x803F497C: lw          $v0, 0xC8($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XC8);
    // 0x803F4980: nop

    // 0x803F4984: lhu         $t5, 0x8($v0)
    ctx->r13 = MEM_HU(ctx->r2, 0X8);
    // 0x803F4988: nop

    // 0x803F498C: andi        $t6, $t5, 0x1
    ctx->r14 = ctx->r13 & 0X1;
    // 0x803F4990: beq         $t6, $zero, L_803F49A0
    if (ctx->r14 == 0) {
        // 0x803F4994: nop
    
            goto L_803F49A0;
    }
    // 0x803F4994: nop

    // 0x803F4998: b           L_803F49A4
    // 0x803F499C: sh          $t7, 0x93C($v0)
    MEM_H(0X93C, ctx->r2) = ctx->r15;
        goto L_803F49A4;
    // 0x803F499C: sh          $t7, 0x93C($v0)
    MEM_H(0X93C, ctx->r2) = ctx->r15;
L_803F49A0:
    // 0x803F49A0: sh          $t8, 0x93C($v0)
    MEM_H(0X93C, ctx->r2) = ctx->r24;
L_803F49A4:
    // 0x803F49A4: lw          $t9, 0xC8($s0)
    ctx->r25 = MEM_W(ctx->r16, 0XC8);
    // 0x803F49A8: b           L_803F4D74
    // 0x803F49AC: sh          $zero, 0x948($t9)
    MEM_H(0X948, ctx->r25) = 0;
        goto L_803F4D74;
    // 0x803F49AC: sh          $zero, 0x948($t9)
    MEM_H(0X948, ctx->r25) = 0;
    // 0x803F49B0: lhu         $t0, 0x95C($v0)
    ctx->r8 = MEM_HU(ctx->r2, 0X95C);
    // 0x803F49B4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x803F49B8: andi        $t1, $t0, 0xFFFC
    ctx->r9 = ctx->r8 & 0XFFFC;
    // 0x803F49BC: jal         0x803F0EF0
    // 0x803F49C0: sh          $t1, 0x95C($v0)
    MEM_H(0X95C, ctx->r2) = ctx->r9;
    ovl_803F0000_menu_func_803F0EF0(rdram, ctx);
        goto after_9;
    // 0x803F49C0: sh          $t1, 0x95C($v0)
    MEM_H(0X95C, ctx->r2) = ctx->r9;
    after_9:
    // 0x803F49C4: beq         $v0, $zero, L_803F49E8
    if (ctx->r2 == 0) {
        // 0x803F49C8: addiu       $t4, $zero, 0x4000
        ctx->r12 = ADD32(0, 0X4000);
            goto L_803F49E8;
    }
    // 0x803F49C8: addiu       $t4, $zero, 0x4000
    ctx->r12 = ADD32(0, 0X4000);
    // 0x803F49CC: lhu         $t2, 0x12($s0)
    ctx->r10 = MEM_HU(ctx->r16, 0X12);
    // 0x803F49D0: lwc1        $f16, 0x88($v0)
    ctx->f16.u32l = MEM_W(ctx->r2, 0X88);
    // 0x803F49D4: ori         $t3, $t2, 0x4
    ctx->r11 = ctx->r10 | 0X4;
    // 0x803F49D8: sh          $t3, 0x12($s0)
    MEM_H(0X12, ctx->r16) = ctx->r11;
    // 0x803F49DC: swc1        $f16, 0xBC($s0)
    MEM_W(0XBC, ctx->r16) = ctx->f16.u32l;
    // 0x803F49E0: b           L_803F4D74
    // 0x803F49E4: sh          $t4, 0x8A($sp)
    MEM_H(0X8A, ctx->r29) = ctx->r12;
        goto L_803F4D74;
    // 0x803F49E4: sh          $t4, 0x8A($sp)
    MEM_H(0X8A, ctx->r29) = ctx->r12;
L_803F49E8:
    // 0x803F49E8: jal         0x803F401C
    // 0x803F49EC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_803F0000_menu_func_803F401C(rdram, ctx);
        goto after_10;
    // 0x803F49EC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_10:
    // 0x803F49F0: lw          $v0, 0xC8($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XC8);
    // 0x803F49F4: addiu       $t7, $zero, 0x4
    ctx->r15 = ADD32(0, 0X4);
    // 0x803F49F8: lhu         $t5, 0x95C($v0)
    ctx->r13 = MEM_HU(ctx->r2, 0X95C);
    // 0x803F49FC: nop

    // 0x803F4A00: ori         $t6, $t5, 0x800
    ctx->r14 = ctx->r13 | 0X800;
    // 0x803F4A04: sh          $t6, 0x95C($v0)
    MEM_H(0X95C, ctx->r2) = ctx->r14;
    // 0x803F4A08: b           L_803F4D74
    // 0x803F4A0C: sh          $t7, 0x8A($sp)
    MEM_H(0X8A, ctx->r29) = ctx->r15;
        goto L_803F4D74;
    // 0x803F4A0C: sh          $t7, 0x8A($sp)
    MEM_H(0X8A, ctx->r29) = ctx->r15;
    // 0x803F4A10: lui         $t8, 0x8028
    ctx->r24 = S32(0X8028 << 16);
    // 0x803F4A14: lh          $t8, -0x1B60($t8)
    ctx->r24 = MEM_H(ctx->r24, -0X1B60);
    // 0x803F4A18: lui         $at, 0x4248
    ctx->r1 = S32(0X4248 << 16);
    // 0x803F4A1C: andi        $t9, $t8, 0x1
    ctx->r25 = ctx->r24 & 0X1;
    // 0x803F4A20: beq         $t9, $zero, L_803F4A74
    if (ctx->r25 == 0) {
        // 0x803F4A24: nop
    
            goto L_803F4A74;
    }
    // 0x803F4A24: nop

    // 0x803F4A28: lwc1        $f18, 0x84($a2)
    ctx->f18.u32l = MEM_W(ctx->r6, 0X84);
    // 0x803F4A2C: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x803F4A30: lui         $at, 0x803F
    ctx->r1 = S32(0X803F << 16);
    // 0x803F4A34: c.lt.s      $f18, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f18.fl < ctx->f10.fl;
    // 0x803F4A38: nop

    // 0x803F4A3C: bc1f        L_803F4A74
    if (!c1cs) {
        // 0x803F4A40: nop
    
            goto L_803F4A74;
    }
    // 0x803F4A40: nop

    // 0x803F4A44: lwc1        $f6, 0x50($a2)
    ctx->f6.u32l = MEM_W(ctx->r6, 0X50);
    // 0x803F4A48: lwc1        $f5, 0x7D68($at)
    ctx->f_odd[(5 - 1) * 2] = MEM_W(ctx->r1, 0X7D68);
    // 0x803F4A4C: lwc1        $f4, 0x7D6C($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X7D6C);
    // 0x803F4A50: cvt.d.s     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f8.d = CVT_D_S(ctx->f6.fl);
    // 0x803F4A54: c.lt.d      $f4, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f4.d < ctx->f8.d;
    // 0x803F4A58: nop

    // 0x803F4A5C: bc1f        L_803F4A74
    if (!c1cs) {
        // 0x803F4A60: nop
    
            goto L_803F4A74;
    }
    // 0x803F4A60: nop

    // 0x803F4A64: jal         0x803F3A98
    // 0x803F4A68: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_803F0000_menu_func_803F3A98(rdram, ctx);
        goto after_11;
    // 0x803F4A68: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_11:
    // 0x803F4A6C: b           L_803F4D78
    // 0x803F4A70: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_803F4D78;
    // 0x803F4A70: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_803F4A74:
    // 0x803F4A74: lhu         $t0, 0x95C($v0)
    ctx->r8 = MEM_HU(ctx->r2, 0X95C);
    // 0x803F4A78: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x803F4A7C: andi        $t1, $t0, 0xFFFE
    ctx->r9 = ctx->r8 & 0XFFFE;
    // 0x803F4A80: sh          $t1, 0x95C($v0)
    MEM_H(0X95C, ctx->r2) = ctx->r9;
    // 0x803F4A84: sh          $t2, 0x8A($sp)
    MEM_H(0X8A, ctx->r29) = ctx->r10;
    // 0x803F4A88: lhu         $t3, 0x12($s0)
    ctx->r11 = MEM_HU(ctx->r16, 0X12);
    // 0x803F4A8C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x803F4A90: ori         $t4, $t3, 0x4
    ctx->r12 = ctx->r11 | 0X4;
    // 0x803F4A94: jal         0x803F0EF0
    // 0x803F4A98: sh          $t4, 0x12($s0)
    MEM_H(0X12, ctx->r16) = ctx->r12;
    ovl_803F0000_menu_func_803F0EF0(rdram, ctx);
        goto after_12;
    // 0x803F4A98: sh          $t4, 0x12($s0)
    MEM_H(0X12, ctx->r16) = ctx->r12;
    after_12:
    // 0x803F4A9C: beq         $v0, $zero, L_803F4AEC
    if (ctx->r2 == 0) {
        // 0x803F4AA0: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_803F4AEC;
    }
    // 0x803F4AA0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x803F4AA4: lh          $a1, 0x2E($v0)
    ctx->r5 = MEM_H(ctx->r2, 0X2E);
    // 0x803F4AA8: sw          $v0, 0xCC($sp)
    MEM_W(0XCC, ctx->r29) = ctx->r2;
    // 0x803F4AAC: jal         0x803F3C88
    // 0x803F4AB0: addiu       $a2, $zero, 0x1A8
    ctx->r6 = ADD32(0, 0X1A8);
    ovl_803F0000_menu_func_803F3C88(rdram, ctx);
        goto after_13;
    // 0x803F4AB0: addiu       $a2, $zero, 0x1A8
    ctx->r6 = ADD32(0, 0X1A8);
    after_13:
    // 0x803F4AB4: lw          $v1, 0xCC($sp)
    ctx->r3 = MEM_W(ctx->r29, 0XCC);
    // 0x803F4AB8: mtc1        $v0, $f16
    ctx->f16.u32l = ctx->r2;
    // 0x803F4ABC: lh          $t5, 0x30($v1)
    ctx->r13 = MEM_H(ctx->r3, 0X30);
    // 0x803F4AC0: cvt.s.w     $f16, $f16
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    ctx->f16.fl = CVT_S_W(ctx->f16.u32l);
    // 0x803F4AC4: mtc1        $t5, $f18
    ctx->f18.u32l = ctx->r13;
    // 0x803F4AC8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x803F4ACC: cvt.s.w     $f18, $f18
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    ctx->f18.fl = CVT_S_W(ctx->f18.u32l);
    // 0x803F4AD0: mfc1        $a1, $f16
    ctx->r5 = (int32_t)ctx->f16.u32l;
    // 0x803F4AD4: addiu       $a3, $sp, 0xB0
    ctx->r7 = ADD32(ctx->r29, 0XB0);
    // 0x803F4AD8: mfc1        $a2, $f18
    ctx->r6 = (int32_t)ctx->f18.u32l;
    // 0x803F4ADC: jal         0x80272B98
    // 0x803F4AE0: nop

    LOOKUP_FUNC(0x80272B98)(rdram, ctx);
        goto after_14;
    // 0x803F4AE0: nop

    after_14:
    // 0x803F4AE4: b           L_803F4B20
    // 0x803F4AE8: lwc1        $f6, 0xB0($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0XB0);
        goto L_803F4B20;
    // 0x803F4AE8: lwc1        $f6, 0xB0($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0XB0);
L_803F4AEC:
    // 0x803F4AEC: lw          $t6, 0xC8($s0)
    ctx->r14 = MEM_W(ctx->r16, 0XC8);
    // 0x803F4AF0: mtc1        $zero, $f14
    ctx->f14.u32l = 0;
    // 0x803F4AF4: lw          $t7, 0x24($t6)
    ctx->r15 = MEM_W(ctx->r14, 0X24);
    // 0x803F4AF8: mfc1        $a2, $f14
    ctx->r6 = (int32_t)ctx->f14.u32l;
    // 0x803F4AFC: lh          $t8, 0x8BA($t7)
    ctx->r24 = MEM_H(ctx->r15, 0X8BA);
    // 0x803F4B00: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x803F4B04: mtc1        $t8, $f10
    ctx->f10.u32l = ctx->r24;
    // 0x803F4B08: addiu       $a3, $sp, 0xB0
    ctx->r7 = ADD32(ctx->r29, 0XB0);
    // 0x803F4B0C: cvt.s.w     $f10, $f10
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 10);
    ctx->f10.fl = CVT_S_W(ctx->f10.u32l);
    // 0x803F4B10: mfc1        $a1, $f10
    ctx->r5 = (int32_t)ctx->f10.u32l;
    // 0x803F4B14: jal         0x80272B98
    // 0x803F4B18: nop

    LOOKUP_FUNC(0x80272B98)(rdram, ctx);
        goto after_15;
    // 0x803F4B18: nop

    after_15:
    // 0x803F4B1C: lwc1        $f6, 0xB0($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0XB0);
L_803F4B20:
    // 0x803F4B20: lui         $a2, 0x800B
    ctx->r6 = S32(0X800B << 16);
    // 0x803F4B24: swc1        $f6, 0xBC($s0)
    MEM_W(0XBC, ctx->r16) = ctx->f6.u32l;
    // 0x803F4B28: lwc1        $f12, 0xB4($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0XB4);
    // 0x803F4B2C: lui         $a3, 0x800B
    ctx->r7 = S32(0X800B << 16);
    // 0x803F4B30: addiu       $a3, $a3, -0x53C8
    ctx->r7 = ADD32(ctx->r7, -0X53C8);
    // 0x803F4B34: addiu       $a2, $a2, -0x53E0
    ctx->r6 = ADD32(ctx->r6, -0X53E0);
    // 0x803F4B38: jal         0x803F0000
    // 0x803F4B3C: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
    ovl_803F0000_menu_func_803F0000(rdram, ctx);
        goto after_16;
    // 0x803F4B3C: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
    after_16:
    // 0x803F4B40: lw          $t9, 0xC8($s0)
    ctx->r25 = MEM_W(ctx->r16, 0XC8);
    // 0x803F4B44: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x803F4B48: jal         0x803F3D10
    // 0x803F4B4C: sh          $v0, 0x960($t9)
    MEM_H(0X960, ctx->r25) = ctx->r2;
    ovl_803F0000_menu_func_803F3D10(rdram, ctx);
        goto after_17;
    // 0x803F4B4C: sh          $v0, 0x960($t9)
    MEM_H(0X960, ctx->r25) = ctx->r2;
    after_17:
    // 0x803F4B50: b           L_803F4D78
    // 0x803F4B54: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_803F4D78;
    // 0x803F4B54: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x803F4B58: lui         $t0, 0x8028
    ctx->r8 = S32(0X8028 << 16);
    // 0x803F4B5C: lh          $t0, -0x1B60($t0)
    ctx->r8 = MEM_H(ctx->r8, -0X1B60);
    // 0x803F4B60: lui         $at, 0x4248
    ctx->r1 = S32(0X4248 << 16);
    // 0x803F4B64: andi        $t1, $t0, 0x1
    ctx->r9 = ctx->r8 & 0X1;
    // 0x803F4B68: beq         $t1, $zero, L_803F4BBC
    if (ctx->r9 == 0) {
        // 0x803F4B6C: nop
    
            goto L_803F4BBC;
    }
    // 0x803F4B6C: nop

    // 0x803F4B70: lwc1        $f4, 0x84($a2)
    ctx->f4.u32l = MEM_W(ctx->r6, 0X84);
    // 0x803F4B74: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x803F4B78: lui         $at, 0x803F
    ctx->r1 = S32(0X803F << 16);
    // 0x803F4B7C: c.lt.s      $f4, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f4.fl < ctx->f8.fl;
    // 0x803F4B80: nop

    // 0x803F4B84: bc1f        L_803F4BBC
    if (!c1cs) {
        // 0x803F4B88: nop
    
            goto L_803F4BBC;
    }
    // 0x803F4B88: nop

    // 0x803F4B8C: lwc1        $f18, 0x50($a2)
    ctx->f18.u32l = MEM_W(ctx->r6, 0X50);
    // 0x803F4B90: lwc1        $f17, 0x7D70($at)
    ctx->f_odd[(17 - 1) * 2] = MEM_W(ctx->r1, 0X7D70);
    // 0x803F4B94: lwc1        $f16, 0x7D74($at)
    ctx->f16.u32l = MEM_W(ctx->r1, 0X7D74);
    // 0x803F4B98: cvt.d.s     $f10, $f18
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.fl); 
    ctx->f10.d = CVT_D_S(ctx->f18.fl);
    // 0x803F4B9C: c.lt.d      $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f16.d < ctx->f10.d;
    // 0x803F4BA0: nop

    // 0x803F4BA4: bc1f        L_803F4BBC
    if (!c1cs) {
        // 0x803F4BA8: nop
    
            goto L_803F4BBC;
    }
    // 0x803F4BA8: nop

    // 0x803F4BAC: jal         0x803F3A98
    // 0x803F4BB0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_803F0000_menu_func_803F3A98(rdram, ctx);
        goto after_18;
    // 0x803F4BB0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_18:
    // 0x803F4BB4: b           L_803F4D78
    // 0x803F4BB8: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_803F4D78;
    // 0x803F4BB8: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_803F4BBC:
    // 0x803F4BBC: jal         0x803F401C
    // 0x803F4BC0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_803F0000_menu_func_803F401C(rdram, ctx);
        goto after_19;
    // 0x803F4BC0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_19:
    // 0x803F4BC4: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x803F4BC8: sh          $t2, 0x8A($sp)
    MEM_H(0X8A, ctx->r29) = ctx->r10;
    // 0x803F4BCC: lw          $v0, 0xC8($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XC8);
    // 0x803F4BD0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x803F4BD4: lhu         $t3, 0x95C($v0)
    ctx->r11 = MEM_HU(ctx->r2, 0X95C);
    // 0x803F4BD8: nop

    // 0x803F4BDC: ori         $t4, $t3, 0x2800
    ctx->r12 = ctx->r11 | 0X2800;
    // 0x803F4BE0: jal         0x803F3D10
    // 0x803F4BE4: sh          $t4, 0x95C($v0)
    MEM_H(0X95C, ctx->r2) = ctx->r12;
    ovl_803F0000_menu_func_803F3D10(rdram, ctx);
        goto after_20;
    // 0x803F4BE4: sh          $t4, 0x95C($v0)
    MEM_H(0X95C, ctx->r2) = ctx->r12;
    after_20:
    // 0x803F4BE8: b           L_803F4D78
    // 0x803F4BEC: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_803F4D78;
    // 0x803F4BEC: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x803F4BF0: lhu         $t5, 0x95C($v0)
    ctx->r13 = MEM_HU(ctx->r2, 0X95C);
    // 0x803F4BF4: addiu       $t7, $zero, 0x8
    ctx->r15 = ADD32(0, 0X8);
    // 0x803F4BF8: andi        $t6, $t5, 0xFFFE
    ctx->r14 = ctx->r13 & 0XFFFE;
    // 0x803F4BFC: sh          $t6, 0x95C($v0)
    MEM_H(0X95C, ctx->r2) = ctx->r14;
    // 0x803F4C00: sh          $t7, 0x8A($sp)
    MEM_H(0X8A, ctx->r29) = ctx->r15;
    // 0x803F4C04: lw          $v0, 0xC8($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XC8);
    // 0x803F4C08: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x803F4C0C: lw          $t8, 0x958($v0)
    ctx->r24 = MEM_W(ctx->r2, 0X958);
    // 0x803F4C10: addiu       $t4, $zero, 0x13
    ctx->r12 = ADD32(0, 0X13);
    // 0x803F4C14: beq         $t8, $zero, L_803F4C68
    if (ctx->r24 == 0) {
        // 0x803F4C18: nop
    
            goto L_803F4C68;
    }
    // 0x803F4C18: nop

    // 0x803F4C1C: jal         0x8006B35C
    // 0x803F4C20: addiu       $a1, $sp, 0x38
    ctx->r5 = ADD32(ctx->r29, 0X38);
    func_8006B35C(rdram, ctx);
        goto after_21;
    // 0x803F4C20: addiu       $a1, $sp, 0x38
    ctx->r5 = ADD32(ctx->r29, 0X38);
    after_21:
    // 0x803F4C24: lw          $t9, 0xC8($s0)
    ctx->r25 = MEM_W(ctx->r16, 0XC8);
    // 0x803F4C28: addiu       $a1, $zero, 0x13
    ctx->r5 = ADD32(0, 0X13);
    // 0x803F4C2C: lw          $t0, 0x958($t9)
    ctx->r8 = MEM_W(ctx->r25, 0X958);
    // 0x803F4C30: addiu       $a2, $sp, 0x38
    ctx->r6 = ADD32(ctx->r29, 0X38);
    // 0x803F4C34: lwc1        $f12, 0x84($t0)
    ctx->f12.u32l = MEM_W(ctx->r8, 0X84);
    // 0x803F4C38: jal         0x803F0000
    // 0x803F4C3C: addiu       $a3, $sp, 0x84
    ctx->r7 = ADD32(ctx->r29, 0X84);
    ovl_803F0000_menu_func_803F0000(rdram, ctx);
        goto after_22;
    // 0x803F4C3C: addiu       $a3, $sp, 0x84
    ctx->r7 = ADD32(ctx->r29, 0X84);
    after_22:
    // 0x803F4C40: lw          $t1, 0xC8($s0)
    ctx->r9 = MEM_W(ctx->r16, 0XC8);
    // 0x803F4C44: nop

    // 0x803F4C48: sh          $v0, 0x960($t1)
    MEM_H(0X960, ctx->r9) = ctx->r2;
    // 0x803F4C4C: lw          $t2, 0xC8($s0)
    ctx->r10 = MEM_W(ctx->r16, 0XC8);
    // 0x803F4C50: nop

    // 0x803F4C54: lw          $t3, 0x958($t2)
    ctx->r11 = MEM_W(ctx->r10, 0X958);
    // 0x803F4C58: nop

    // 0x803F4C5C: lwc1        $f6, 0x88($t3)
    ctx->f6.u32l = MEM_W(ctx->r11, 0X88);
    // 0x803F4C60: b           L_803F4C94
    // 0x803F4C64: swc1        $f6, 0xBC($s0)
    MEM_W(0XBC, ctx->r16) = ctx->f6.u32l;
        goto L_803F4C94;
    // 0x803F4C64: swc1        $f6, 0xBC($s0)
    MEM_W(0XBC, ctx->r16) = ctx->f6.u32l;
L_803F4C68:
    // 0x803F4C68: sh          $t4, 0x960($v0)
    MEM_H(0X960, ctx->r2) = ctx->r12;
    // 0x803F4C6C: lw          $t5, 0xC8($s0)
    ctx->r13 = MEM_W(ctx->r16, 0XC8);
    // 0x803F4C70: lui         $at, 0x803F
    ctx->r1 = S32(0X803F << 16);
    // 0x803F4C74: lw          $t6, 0x24($t5)
    ctx->r14 = MEM_W(ctx->r13, 0X24);
    // 0x803F4C78: lwc1        $f19, 0x7D78($at)
    ctx->f_odd[(19 - 1) * 2] = MEM_W(ctx->r1, 0X7D78);
    // 0x803F4C7C: lwc1        $f4, 0x8C0($t6)
    ctx->f4.u32l = MEM_W(ctx->r14, 0X8C0);
    // 0x803F4C80: lwc1        $f18, 0x7D7C($at)
    ctx->f18.u32l = MEM_W(ctx->r1, 0X7D7C);
    // 0x803F4C84: cvt.d.s     $f8, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f8.d = CVT_D_S(ctx->f4.fl);
    // 0x803F4C88: add.d       $f16, $f8, $f18
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f18.d); 
    ctx->f16.d = ctx->f8.d + ctx->f18.d;
    // 0x803F4C8C: cvt.s.d     $f10, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.d); 
    ctx->f10.fl = CVT_S_D(ctx->f16.d);
    // 0x803F4C90: swc1        $f10, 0xBC($s0)
    MEM_W(0XBC, ctx->r16) = ctx->f10.u32l;
L_803F4C94:
    // 0x803F4C94: lhu         $t7, 0x12($s0)
    ctx->r15 = MEM_HU(ctx->r16, 0X12);
    // 0x803F4C98: nop

    // 0x803F4C9C: ori         $t8, $t7, 0x4
    ctx->r24 = ctx->r15 | 0X4;
    // 0x803F4CA0: b           L_803F4D74
    // 0x803F4CA4: sh          $t8, 0x12($s0)
    MEM_H(0X12, ctx->r16) = ctx->r24;
        goto L_803F4D74;
    // 0x803F4CA4: sh          $t8, 0x12($s0)
    MEM_H(0X12, ctx->r16) = ctx->r24;
    // 0x803F4CA8: lui         $at, 0x4080
    ctx->r1 = S32(0X4080 << 16);
    // 0x803F4CAC: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    // 0x803F4CB0: lui         $at, 0x3FC0
    ctx->r1 = S32(0X3FC0 << 16);
    // 0x803F4CB4: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x803F4CB8: lui         $a2, 0x3E19
    ctx->r6 = S32(0X3E19 << 16);
    // 0x803F4CBC: lui         $a3, 0x3D4C
    ctx->r7 = S32(0X3D4C << 16);
    // 0x803F4CC0: addiu       $t9, $sp, 0x38
    ctx->r25 = ADD32(ctx->r29, 0X38);
    // 0x803F4CC4: sw          $t9, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r25;
    // 0x803F4CC8: ori         $a3, $a3, 0xCCCD
    ctx->r7 = ctx->r7 | 0XCCCD;
    // 0x803F4CCC: jal         0x8005743C
    // 0x803F4CD0: ori         $a2, $a2, 0x999A
    ctx->r6 = ctx->r6 | 0X999A;
    func_8005743C(rdram, ctx);
        goto after_23;
    // 0x803F4CD0: ori         $a2, $a2, 0x999A
    ctx->r6 = ctx->r6 | 0X999A;
    after_23:
    // 0x803F4CD4: lw          $t0, 0xC8($s0)
    ctx->r8 = MEM_W(ctx->r16, 0XC8);
    // 0x803F4CD8: addiu       $a1, $zero, 0x13
    ctx->r5 = ADD32(0, 0X13);
    // 0x803F4CDC: lw          $t1, 0x958($t0)
    ctx->r9 = MEM_W(ctx->r8, 0X958);
    // 0x803F4CE0: addiu       $a2, $sp, 0x38
    ctx->r6 = ADD32(ctx->r29, 0X38);
    // 0x803F4CE4: lwc1        $f12, 0x84($t1)
    ctx->f12.u32l = MEM_W(ctx->r9, 0X84);
    // 0x803F4CE8: jal         0x803F0000
    // 0x803F4CEC: addiu       $a3, $sp, 0x84
    ctx->r7 = ADD32(ctx->r29, 0X84);
    ovl_803F0000_menu_func_803F0000(rdram, ctx);
        goto after_24;
    // 0x803F4CEC: addiu       $a3, $sp, 0x84
    ctx->r7 = ADD32(ctx->r29, 0X84);
    after_24:
    // 0x803F4CF0: lw          $t2, 0xC8($s0)
    ctx->r10 = MEM_W(ctx->r16, 0XC8);
    // 0x803F4CF4: addiu       $t3, $zero, 0x1
    ctx->r11 = ADD32(0, 0X1);
    // 0x803F4CF8: sh          $v0, 0x960($t2)
    MEM_H(0X960, ctx->r10) = ctx->r2;
    // 0x803F4CFC: sh          $t3, 0x8A($sp)
    MEM_H(0X8A, ctx->r29) = ctx->r11;
    // 0x803F4D00: lw          $t4, 0xC8($s0)
    ctx->r12 = MEM_W(ctx->r16, 0XC8);
    // 0x803F4D04: lhu         $t6, 0x12($s0)
    ctx->r14 = MEM_HU(ctx->r16, 0X12);
    // 0x803F4D08: lw          $t5, 0x958($t4)
    ctx->r13 = MEM_W(ctx->r12, 0X958);
    // 0x803F4D0C: ori         $t7, $t6, 0x4
    ctx->r15 = ctx->r14 | 0X4;
    // 0x803F4D10: lwc1        $f6, 0x88($t5)
    ctx->f6.u32l = MEM_W(ctx->r13, 0X88);
    // 0x803F4D14: sh          $t7, 0x12($s0)
    MEM_H(0X12, ctx->r16) = ctx->r15;
    // 0x803F4D18: b           L_803F4D74
    // 0x803F4D1C: swc1        $f6, 0xBC($s0)
    MEM_W(0XBC, ctx->r16) = ctx->f6.u32l;
        goto L_803F4D74;
    // 0x803F4D1C: swc1        $f6, 0xBC($s0)
    MEM_W(0XBC, ctx->r16) = ctx->f6.u32l;
    // 0x803F4D20: jal         0x803F34D4
    // 0x803F4D24: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_803F0000_menu_func_803F34D4(rdram, ctx);
        goto after_25;
    // 0x803F4D24: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_25:
    // 0x803F4D28: b           L_803F4D78
    // 0x803F4D2C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_803F4D78;
    // 0x803F4D2C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x803F4D30: jal         0x803F3A98
    // 0x803F4D34: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_803F0000_menu_func_803F3A98(rdram, ctx);
        goto after_26;
    // 0x803F4D34: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_26:
    // 0x803F4D38: b           L_803F4D78
    // 0x803F4D3C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_803F4D78;
    // 0x803F4D3C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x803F4D40: jal         0x803F2A40
    // 0x803F4D44: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_803F0000_menu_func_803F2A40(rdram, ctx);
        goto after_27;
    // 0x803F4D44: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_27:
    // 0x803F4D48: bne         $v0, $zero, L_803F4D78
    if (ctx->r2 != 0) {
        // 0x803F4D4C: lw          $ra, 0x24($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X24);
            goto L_803F4D78;
    }
    // 0x803F4D4C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x803F4D50: jal         0x803F2464
    // 0x803F4D54: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_803F0000_menu_func_803F2464(rdram, ctx);
        goto after_28;
    // 0x803F4D54: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_28:
    // 0x803F4D58: b           L_803F4D78
    // 0x803F4D5C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_803F4D78;
    // 0x803F4D5C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x803F4D60: lhu         $t8, 0x12($s0)
    ctx->r24 = MEM_HU(ctx->r16, 0X12);
    // 0x803F4D64: mtc1        $zero, $f14
    ctx->f14.u32l = 0;
    // 0x803F4D68: ori         $t9, $t8, 0x8
    ctx->r25 = ctx->r24 | 0X8;
    // 0x803F4D6C: sh          $t9, 0x12($s0)
    MEM_H(0X12, ctx->r16) = ctx->r25;
    // 0x803F4D70: swc1        $f14, 0xAC($s0)
    MEM_W(0XAC, ctx->r16) = ctx->f14.u32l;
L_803F4D74:
    // 0x803F4D74: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_803F4D78:
    // 0x803F4D78: lhu         $v0, 0x8A($sp)
    ctx->r2 = MEM_HU(ctx->r29, 0X8A);
    // 0x803F4D7C: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x803F4D80: jr          $ra
    // 0x803F4D84: addiu       $sp, $sp, 0xD0
    ctx->r29 = ADD32(ctx->r29, 0XD0);
    return;
    // 0x803F4D84: addiu       $sp, $sp, 0xD0
    ctx->r29 = ADD32(ctx->r29, 0XD0);
;}
RECOMP_FUNC void ovl_803F0000_menu_func_803F473C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803F473C: lwc1        $f8, 0x8BC($t0)
    ctx->f8.u32l = MEM_W(ctx->r8, 0X8BC);
    // 0x803F4740: nop

    // 0x803F4744: c.lt.s      $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f6.fl < ctx->f8.fl;
    // 0x803F4748: nop

    // 0x803F474C: bc1f        L_803F475C
    if (!c1cs) {
        // 0x803F4750: nop
    
            goto L_803F475C;
    }
    // 0x803F4750: nop

    // 0x803F4754: b           L_803F4770
    // 0x803F4758: sh          $t1, 0x960($v0)
    MEM_H(0X960, ctx->r2) = ctx->r9;
        goto L_803F4770;
    // 0x803F4758: sh          $t1, 0x960($v0)
    MEM_H(0X960, ctx->r2) = ctx->r9;
L_803F475C:
    // 0x803F475C: jal         0x80059898
    // 0x803F4760: addiu       $a0, $zero, 0x7
    ctx->r4 = ADD32(0, 0X7);
    func_80059898(rdram, ctx);
        goto after_0;
    // 0x803F4760: addiu       $a0, $zero, 0x7
    ctx->r4 = ADD32(0, 0X7);
    after_0:
    // 0x803F4764: lw          $t2, 0xC8($s0)
    ctx->r10 = MEM_W(ctx->r16, 0XC8);
    // 0x803F4768: nop

    // 0x803F476C: sh          $v0, 0x960($t2)
    MEM_H(0X960, ctx->r10) = ctx->r2;
L_803F4770:
    // 0x803F4770: lhu         $t3, 0x12($s0)
    ctx->r11 = MEM_HU(ctx->r16, 0X12);
    // 0x803F4774: nop

    // 0x803F4778: ori         $t4, $t3, 0x4
    ctx->r12 = ctx->r11 | 0X4;
    // 0x803F477C: b           L_803F4D74
    // 0x803F4780: sh          $t4, 0x12($s0)
    MEM_H(0X12, ctx->r16) = ctx->r12;
        goto L_803F4D74;
    // 0x803F4780: sh          $t4, 0x12($s0)
    MEM_H(0X12, ctx->r16) = ctx->r12;
    // 0x803F4784: lhu         $t5, 0x95C($v0)
    ctx->r13 = MEM_HU(ctx->r2, 0X95C);
    // 0x803F4788: addiu       $t9, $zero, 0x8
    ctx->r25 = ADD32(0, 0X8);
    // 0x803F478C: ori         $t6, $t5, 0x20
    ctx->r14 = ctx->r13 | 0X20;
    // 0x803F4790: sh          $t6, 0x95C($v0)
    MEM_H(0X95C, ctx->r2) = ctx->r14;
    // 0x803F4794: lhu         $t7, 0x12($s0)
    ctx->r15 = MEM_HU(ctx->r16, 0X12);
    // 0x803F4798: addiu       $a0, $zero, 0x28
    ctx->r4 = ADD32(0, 0X28);
    // 0x803F479C: ori         $t8, $t7, 0x4
    ctx->r24 = ctx->r15 | 0X4;
    // 0x803F47A0: sh          $t8, 0x12($s0)
    MEM_H(0X12, ctx->r16) = ctx->r24;
    // 0x803F47A4: jal         0x80059898
    // 0x803F47A8: sh          $t9, 0x8A($sp)
    MEM_H(0X8A, ctx->r29) = ctx->r25;
    func_80059898(rdram, ctx);
        goto after_1;
    // 0x803F47A8: sh          $t9, 0x8A($sp)
    MEM_H(0X8A, ctx->r29) = ctx->r25;
    after_1:
    // 0x803F47AC: mtc1        $v0, $f16
    ctx->f16.u32l = ctx->r2;
    // 0x803F47B0: bgez        $v0, L_803F47C8
    if (SIGNED(ctx->r2) >= 0) {
        // 0x803F47B4: cvt.s.w     $f10, $f16
        CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    ctx->f10.fl = CVT_S_W(ctx->f16.u32l);
            goto L_803F47C8;
    }
    // 0x803F47B4: cvt.s.w     $f10, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    ctx->f10.fl = CVT_S_W(ctx->f16.u32l);
    // 0x803F47B8: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x803F47BC: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x803F47C0: nop

    // 0x803F47C4: add.s       $f10, $f10, $f18
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f10.fl = ctx->f10.fl + ctx->f18.fl;
L_803F47C8:
    // 0x803F47C8: lw          $t0, 0xC8($s0)
    ctx->r8 = MEM_W(ctx->r16, 0XC8);
    // 0x803F47CC: lui         $a2, 0x800B
    ctx->r6 = S32(0X800B << 16);
    // 0x803F47D0: lw          $t1, 0x24($t0)
    ctx->r9 = MEM_W(ctx->r8, 0X24);
    // 0x803F47D4: lui         $a3, 0x800B
    ctx->r7 = S32(0X800B << 16);
    // 0x803F47D8: lwc1        $f4, 0x8BC($t1)
    ctx->f4.u32l = MEM_W(ctx->r9, 0X8BC);
    // 0x803F47DC: addiu       $a3, $a3, -0x5270
    ctx->r7 = ADD32(ctx->r7, -0X5270);
    // 0x803F47E0: addiu       $a2, $a2, -0x5288
    ctx->r6 = ADD32(ctx->r6, -0X5288);
    // 0x803F47E4: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
    // 0x803F47E8: jal         0x803F0000
    // 0x803F47EC: add.s       $f12, $f10, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f12.fl = ctx->f10.fl + ctx->f4.fl;
    ovl_803F0000_menu_func_803F0000(rdram, ctx);
        goto after_2;
    // 0x803F47EC: add.s       $f12, $f10, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f12.fl = ctx->f10.fl + ctx->f4.fl;
    after_2:
    // 0x803F47F0: lw          $t2, 0xC8($s0)
    ctx->r10 = MEM_W(ctx->r16, 0XC8);
    // 0x803F47F4: b           L_803F4D74
    // 0x803F47F8: sh          $v0, 0x960($t2)
    MEM_H(0X960, ctx->r10) = ctx->r2;
        goto L_803F4D74;
    // 0x803F47F8: sh          $v0, 0x960($t2)
    MEM_H(0X960, ctx->r10) = ctx->r2;
    // 0x803F47FC: lhu         $t3, 0x95C($v0)
    ctx->r11 = MEM_HU(ctx->r2, 0X95C);
    // 0x803F4800: addiu       $t5, $zero, 0x1
    ctx->r13 = ADD32(0, 0X1);
    // 0x803F4804: andi        $t4, $t3, 0xFFFE
    ctx->r12 = ctx->r11 & 0XFFFE;
    // 0x803F4808: sh          $t4, 0x95C($v0)
    MEM_H(0X95C, ctx->r2) = ctx->r12;
    // 0x803F480C: sh          $t5, 0x8A($sp)
    MEM_H(0X8A, ctx->r29) = ctx->r13;
    // 0x803F4810: lhu         $t6, 0x12($s0)
    ctx->r14 = MEM_HU(ctx->r16, 0X12);
    // 0x803F4814: lw          $t8, 0xC8($s0)
    ctx->r24 = MEM_W(ctx->r16, 0XC8);
    // 0x803F4818: ori         $t7, $t6, 0x4
    ctx->r15 = ctx->r14 | 0X4;
    // 0x803F481C: sh          $t7, 0x12($s0)
    MEM_H(0X12, ctx->r16) = ctx->r15;
    // 0x803F4820: lh          $t9, 0x8CA($t8)
    ctx->r25 = MEM_H(ctx->r24, 0X8CA);
    // 0x803F4824: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x803F4828: addiu       $t0, $t9, 0x32
    ctx->r8 = ADD32(ctx->r25, 0X32);
    // 0x803F482C: mtc1        $t0, $f6
    ctx->f6.u32l = ctx->r8;
    // 0x803F4830: nop

    // 0x803F4834: cvt.s.w     $f6, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    ctx->f6.fl = CVT_S_W(ctx->f6.u32l);
    // 0x803F4838: mfc1        $a1, $f6
    ctx->r5 = (int32_t)ctx->f6.u32l;
    // 0x803F483C: jal         0x8026AB68
    // 0x803F4840: nop

    LOOKUP_FUNC(0x8026AB68)(rdram, ctx);
        goto after_3;
    // 0x803F4840: nop

    after_3:
    // 0x803F4844: mov.s       $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    ctx->f12.fl = ctx->f0.fl;
    // 0x803F4848: jal         0x80272AEC
    // 0x803F484C: swc1        $f0, 0xAC($sp)
    MEM_W(0XAC, ctx->r29) = ctx->f0.u32l;
    LOOKUP_FUNC(0x80272AEC)(rdram, ctx);
        goto after_4;
    // 0x803F484C: swc1        $f0, 0xAC($sp)
    MEM_W(0XAC, ctx->r29) = ctx->f0.u32l;
    after_4:
    // 0x803F4850: lui         $at, 0x803F
    ctx->r1 = S32(0X803F << 16);
    // 0x803F4854: lwc1        $f8, 0x7D5C($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X7D5C);
    // 0x803F4858: lwc1        $f2, 0xAC($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0XAC);
    // 0x803F485C: c.lt.s      $f8, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f8.fl < ctx->f0.fl;
    // 0x803F4860: lui         $t4, 0x8009
    ctx->r12 = S32(0X8009 << 16);
    // 0x803F4864: bc1f        L_803F4890
    if (!c1cs) {
        // 0x803F4868: addiu       $v0, $zero, 0x3C
        ctx->r2 = ADD32(0, 0X3C);
            goto L_803F4890;
    }
    // 0x803F4868: addiu       $v0, $zero, 0x3C
    ctx->r2 = ADD32(0, 0X3C);
    // 0x803F486C: lw          $t1, 0xC8($s0)
    ctx->r9 = MEM_W(ctx->r16, 0XC8);
    // 0x803F4870: nop

    // 0x803F4874: lw          $t2, 0x24($t1)
    ctx->r10 = MEM_W(ctx->r9, 0X24);
    // 0x803F4878: nop

    // 0x803F487C: lh          $t3, 0x8BA($t2)
    ctx->r11 = MEM_H(ctx->r10, 0X8BA);
    // 0x803F4880: nop

    // 0x803F4884: mtc1        $t3, $f16
    ctx->f16.u32l = ctx->r11;
    // 0x803F4888: nop

    // 0x803F488C: cvt.s.w     $f2, $f16
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 16);
    ctx->f2.fl = CVT_S_W(ctx->f16.u32l);
L_803F4890:
    // 0x803F4890: lw          $t4, 0x3B20($t4)
    ctx->r12 = MEM_W(ctx->r12, 0X3B20);
    // 0x803F4894: mtc1        $zero, $f14
    ctx->f14.u32l = 0;
    // 0x803F4898: lwc1        $f18, 0x0($t4)
    ctx->f18.u32l = MEM_W(ctx->r12, 0X0);
    // 0x803F489C: nop

    // 0x803F48A0: c.lt.s      $f14, $f18
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f14.fl < ctx->f18.fl;
    // 0x803F48A4: nop

    // 0x803F48A8: bc1f        L_803F48B8
    if (!c1cs) {
        // 0x803F48AC: nop
    
            goto L_803F48B8;
    }
    // 0x803F48AC: nop

    // 0x803F48B0: b           L_803F48B8
    // 0x803F48B4: addiu       $v0, $zero, -0x3C
    ctx->r2 = ADD32(0, -0X3C);
        goto L_803F48B8;
    // 0x803F48B4: addiu       $v0, $zero, -0x3C
    ctx->r2 = ADD32(0, -0X3C);
L_803F48B8:
    // 0x803F48B8: mtc1        $v0, $f10
    ctx->f10.u32l = ctx->r2;
    // 0x803F48BC: mfc1        $a1, $f2
    ctx->r5 = (int32_t)ctx->f2.u32l;
    // 0x803F48C0: cvt.s.w     $f10, $f10
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 10);
    ctx->f10.fl = CVT_S_W(ctx->f10.u32l);
    // 0x803F48C4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x803F48C8: addiu       $a3, $sp, 0xB0
    ctx->r7 = ADD32(ctx->r29, 0XB0);
    // 0x803F48CC: mfc1        $a2, $f10
    ctx->r6 = (int32_t)ctx->f10.u32l;
    // 0x803F48D0: jal         0x80272B98
    // 0x803F48D4: nop

    LOOKUP_FUNC(0x80272B98)(rdram, ctx);
        goto after_5;
    // 0x803F48D4: nop

    after_5:
    // 0x803F48D8: lwc1        $f4, 0xB0($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0XB0);
    // 0x803F48DC: lui         $a2, 0x800B
    ctx->r6 = S32(0X800B << 16);
    // 0x803F48E0: swc1        $f4, 0xBC($s0)
    MEM_W(0XBC, ctx->r16) = ctx->f4.u32l;
    // 0x803F48E4: lwc1        $f12, 0xB4($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0XB4);
    // 0x803F48E8: lui         $a3, 0x800B
    ctx->r7 = S32(0X800B << 16);
    // 0x803F48EC: addiu       $a3, $a3, -0x53AC
    ctx->r7 = ADD32(ctx->r7, -0X53AC);
    // 0x803F48F0: addiu       $a2, $a2, -0x53C4
    ctx->r6 = ADD32(ctx->r6, -0X53C4);
    // 0x803F48F4: jal         0x803F0000
    // 0x803F48F8: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
    ovl_803F0000_menu_func_803F0000(rdram, ctx);
        goto after_6;
    // 0x803F48F8: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
    after_6:
    // 0x803F48FC: lw          $t5, 0xC8($s0)
    ctx->r13 = MEM_W(ctx->r16, 0XC8);
    // 0x803F4900: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x803F4904: jal         0x803F3D10
    // 0x803F4908: sh          $v0, 0x960($t5)
    MEM_H(0X960, ctx->r13) = ctx->r2;
    ovl_803F0000_menu_func_803F3D10(rdram, ctx);
        goto after_7;
    // 0x803F4908: sh          $v0, 0x960($t5)
    MEM_H(0X960, ctx->r13) = ctx->r2;
    after_7:
    // 0x803F490C: lw          $v0, 0xC8($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XC8);
    // 0x803F4910: nop

    // 0x803F4914: lh          $t6, 0x960($v0)
    ctx->r14 = MEM_H(ctx->r2, 0X960);
    // 0x803F4918: nop

    // 0x803F491C: addiu       $t7, $t6, -0x1
    ctx->r15 = ADD32(ctx->r14, -0X1);
    // 0x803F4920: b           L_803F4D74
    // 0x803F4924: sh          $t7, 0x960($v0)
    MEM_H(0X960, ctx->r2) = ctx->r15;
        goto L_803F4D74;
    // 0x803F4924: sh          $t7, 0x960($v0)
    MEM_H(0X960, ctx->r2) = ctx->r15;
    // 0x803F4928: lui         $at, 0x803F
    ctx->r1 = S32(0X803F << 16);
    // 0x803F492C: lwc1        $f6, 0x7D60($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X7D60);
    // 0x803F4930: addiu       $t8, $zero, 0xF
    ctx->r24 = ADD32(0, 0XF);
    // 0x803F4934: swc1        $f6, 0x940($v0)
    MEM_W(0X940, ctx->r2) = ctx->f6.u32l;
    // 0x803F4938: lw          $t9, 0xC8($s0)
    ctx->r25 = MEM_W(ctx->r16, 0XC8);
    // 0x803F493C: lui         $t0, 0x8009
    ctx->r8 = S32(0X8009 << 16);
    // 0x803F4940: sh          $t8, 0x938($t9)
    MEM_H(0X938, ctx->r25) = ctx->r24;
    // 0x803F4944: lw          $t0, 0x3B20($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X3B20);
    // 0x803F4948: mtc1        $zero, $f14
    ctx->f14.u32l = 0;
    // 0x803F494C: lwc1        $f8, 0x0($t0)
    ctx->f8.u32l = MEM_W(ctx->r8, 0X0);
    // 0x803F4950: addiu       $t1, $zero, 0x5C
    ctx->r9 = ADD32(0, 0X5C);
    // 0x803F4954: c.lt.s      $f14, $f8
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f14.fl < ctx->f8.fl;
    // 0x803F4958: addiu       $t8, $zero, -0x1F3
    ctx->r24 = ADD32(0, -0X1F3);
    // 0x803F495C: bc1f        L_803F4970
    if (!c1cs) {
        // 0x803F4960: addiu       $t7, $zero, 0x1F3
        ctx->r15 = ADD32(0, 0X1F3);
            goto L_803F4970;
    }
    // 0x803F4960: addiu       $t7, $zero, 0x1F3
    ctx->r15 = ADD32(0, 0X1F3);
    // 0x803F4964: lw          $t2, 0xC8($s0)
    ctx->r10 = MEM_W(ctx->r16, 0XC8);
    // 0x803F4968: b           L_803F497C
    // 0x803F496C: sh          $t1, 0x93E($t2)
    MEM_H(0X93E, ctx->r10) = ctx->r9;
        goto L_803F497C;
    // 0x803F496C: sh          $t1, 0x93E($t2)
    MEM_H(0X93E, ctx->r10) = ctx->r9;
L_803F4970:
    // 0x803F4970: lw          $t4, 0xC8($s0)
    ctx->r12 = MEM_W(ctx->r16, 0XC8);
    // 0x803F4974: addiu       $t3, $zero, -0x5C
    ctx->r11 = ADD32(0, -0X5C);
    // 0x803F4978: sh          $t3, 0x93E($t4)
    MEM_H(0X93E, ctx->r12) = ctx->r11;
L_803F497C:
    // 0x803F497C: lw          $v0, 0xC8($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XC8);
    // 0x803F4980: nop

    // 0x803F4984: lhu         $t5, 0x8($v0)
    ctx->r13 = MEM_HU(ctx->r2, 0X8);
    // 0x803F4988: nop

    // 0x803F498C: andi        $t6, $t5, 0x1
    ctx->r14 = ctx->r13 & 0X1;
    // 0x803F4990: beq         $t6, $zero, L_803F49A0
    if (ctx->r14 == 0) {
        // 0x803F4994: nop
    
            goto L_803F49A0;
    }
    // 0x803F4994: nop

    // 0x803F4998: b           L_803F49A4
    // 0x803F499C: sh          $t7, 0x93C($v0)
    MEM_H(0X93C, ctx->r2) = ctx->r15;
        goto L_803F49A4;
    // 0x803F499C: sh          $t7, 0x93C($v0)
    MEM_H(0X93C, ctx->r2) = ctx->r15;
L_803F49A0:
    // 0x803F49A0: sh          $t8, 0x93C($v0)
    MEM_H(0X93C, ctx->r2) = ctx->r24;
L_803F49A4:
    // 0x803F49A4: lw          $t9, 0xC8($s0)
    ctx->r25 = MEM_W(ctx->r16, 0XC8);
    // 0x803F49A8: b           L_803F4D74
    // 0x803F49AC: sh          $zero, 0x948($t9)
    MEM_H(0X948, ctx->r25) = 0;
        goto L_803F4D74;
    // 0x803F49AC: sh          $zero, 0x948($t9)
    MEM_H(0X948, ctx->r25) = 0;
    // 0x803F49B0: lhu         $t0, 0x95C($v0)
    ctx->r8 = MEM_HU(ctx->r2, 0X95C);
    // 0x803F49B4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x803F49B8: andi        $t1, $t0, 0xFFFC
    ctx->r9 = ctx->r8 & 0XFFFC;
    // 0x803F49BC: jal         0x803F0EF0
    // 0x803F49C0: sh          $t1, 0x95C($v0)
    MEM_H(0X95C, ctx->r2) = ctx->r9;
    ovl_803F0000_menu_func_803F0EF0(rdram, ctx);
        goto after_8;
    // 0x803F49C0: sh          $t1, 0x95C($v0)
    MEM_H(0X95C, ctx->r2) = ctx->r9;
    after_8:
    // 0x803F49C4: beq         $v0, $zero, L_803F49E8
    if (ctx->r2 == 0) {
        // 0x803F49C8: addiu       $t4, $zero, 0x4000
        ctx->r12 = ADD32(0, 0X4000);
            goto L_803F49E8;
    }
    // 0x803F49C8: addiu       $t4, $zero, 0x4000
    ctx->r12 = ADD32(0, 0X4000);
    // 0x803F49CC: lhu         $t2, 0x12($s0)
    ctx->r10 = MEM_HU(ctx->r16, 0X12);
    // 0x803F49D0: lwc1        $f16, 0x88($v0)
    ctx->f16.u32l = MEM_W(ctx->r2, 0X88);
    // 0x803F49D4: ori         $t3, $t2, 0x4
    ctx->r11 = ctx->r10 | 0X4;
    // 0x803F49D8: sh          $t3, 0x12($s0)
    MEM_H(0X12, ctx->r16) = ctx->r11;
    // 0x803F49DC: swc1        $f16, 0xBC($s0)
    MEM_W(0XBC, ctx->r16) = ctx->f16.u32l;
    // 0x803F49E0: b           L_803F4D74
    // 0x803F49E4: sh          $t4, 0x8A($sp)
    MEM_H(0X8A, ctx->r29) = ctx->r12;
        goto L_803F4D74;
    // 0x803F49E4: sh          $t4, 0x8A($sp)
    MEM_H(0X8A, ctx->r29) = ctx->r12;
L_803F49E8:
    // 0x803F49E8: jal         0x803F401C
    // 0x803F49EC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_803F0000_menu_func_803F401C(rdram, ctx);
        goto after_9;
    // 0x803F49EC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_9:
    // 0x803F49F0: lw          $v0, 0xC8($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XC8);
    // 0x803F49F4: addiu       $t7, $zero, 0x4
    ctx->r15 = ADD32(0, 0X4);
    // 0x803F49F8: lhu         $t5, 0x95C($v0)
    ctx->r13 = MEM_HU(ctx->r2, 0X95C);
    // 0x803F49FC: nop

    // 0x803F4A00: ori         $t6, $t5, 0x800
    ctx->r14 = ctx->r13 | 0X800;
    // 0x803F4A04: sh          $t6, 0x95C($v0)
    MEM_H(0X95C, ctx->r2) = ctx->r14;
    // 0x803F4A08: b           L_803F4D74
    // 0x803F4A0C: sh          $t7, 0x8A($sp)
    MEM_H(0X8A, ctx->r29) = ctx->r15;
        goto L_803F4D74;
    // 0x803F4A0C: sh          $t7, 0x8A($sp)
    MEM_H(0X8A, ctx->r29) = ctx->r15;
    // 0x803F4A10: lui         $t8, 0x8028
    ctx->r24 = S32(0X8028 << 16);
    // 0x803F4A14: lh          $t8, -0x1B60($t8)
    ctx->r24 = MEM_H(ctx->r24, -0X1B60);
    // 0x803F4A18: lui         $at, 0x4248
    ctx->r1 = S32(0X4248 << 16);
    // 0x803F4A1C: andi        $t9, $t8, 0x1
    ctx->r25 = ctx->r24 & 0X1;
    // 0x803F4A20: beq         $t9, $zero, L_803F4A74
    if (ctx->r25 == 0) {
        // 0x803F4A24: nop
    
            goto L_803F4A74;
    }
    // 0x803F4A24: nop

    // 0x803F4A28: lwc1        $f18, 0x84($a2)
    ctx->f18.u32l = MEM_W(ctx->r6, 0X84);
    // 0x803F4A2C: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x803F4A30: lui         $at, 0x803F
    ctx->r1 = S32(0X803F << 16);
    // 0x803F4A34: c.lt.s      $f18, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f18.fl < ctx->f10.fl;
    // 0x803F4A38: nop

    // 0x803F4A3C: bc1f        L_803F4A74
    if (!c1cs) {
        // 0x803F4A40: nop
    
            goto L_803F4A74;
    }
    // 0x803F4A40: nop

    // 0x803F4A44: lwc1        $f6, 0x50($a2)
    ctx->f6.u32l = MEM_W(ctx->r6, 0X50);
    // 0x803F4A48: lwc1        $f5, 0x7D68($at)
    ctx->f_odd[(5 - 1) * 2] = MEM_W(ctx->r1, 0X7D68);
    // 0x803F4A4C: lwc1        $f4, 0x7D6C($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X7D6C);
    // 0x803F4A50: cvt.d.s     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f8.d = CVT_D_S(ctx->f6.fl);
    // 0x803F4A54: c.lt.d      $f4, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f4.d < ctx->f8.d;
    // 0x803F4A58: nop

    // 0x803F4A5C: bc1f        L_803F4A74
    if (!c1cs) {
        // 0x803F4A60: nop
    
            goto L_803F4A74;
    }
    // 0x803F4A60: nop

    // 0x803F4A64: jal         0x803F3A98
    // 0x803F4A68: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_803F0000_menu_func_803F3A98(rdram, ctx);
        goto after_10;
    // 0x803F4A68: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_10:
    // 0x803F4A6C: b           L_803F4D78
    // 0x803F4A70: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_803F4D78;
    // 0x803F4A70: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_803F4A74:
    // 0x803F4A74: lhu         $t0, 0x95C($v0)
    ctx->r8 = MEM_HU(ctx->r2, 0X95C);
    // 0x803F4A78: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x803F4A7C: andi        $t1, $t0, 0xFFFE
    ctx->r9 = ctx->r8 & 0XFFFE;
    // 0x803F4A80: sh          $t1, 0x95C($v0)
    MEM_H(0X95C, ctx->r2) = ctx->r9;
    // 0x803F4A84: sh          $t2, 0x8A($sp)
    MEM_H(0X8A, ctx->r29) = ctx->r10;
    // 0x803F4A88: lhu         $t3, 0x12($s0)
    ctx->r11 = MEM_HU(ctx->r16, 0X12);
    // 0x803F4A8C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x803F4A90: ori         $t4, $t3, 0x4
    ctx->r12 = ctx->r11 | 0X4;
    // 0x803F4A94: jal         0x803F0EF0
    // 0x803F4A98: sh          $t4, 0x12($s0)
    MEM_H(0X12, ctx->r16) = ctx->r12;
    ovl_803F0000_menu_func_803F0EF0(rdram, ctx);
        goto after_11;
    // 0x803F4A98: sh          $t4, 0x12($s0)
    MEM_H(0X12, ctx->r16) = ctx->r12;
    after_11:
    // 0x803F4A9C: beq         $v0, $zero, L_803F4AEC
    if (ctx->r2 == 0) {
        // 0x803F4AA0: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_803F4AEC;
    }
    // 0x803F4AA0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x803F4AA4: lh          $a1, 0x2E($v0)
    ctx->r5 = MEM_H(ctx->r2, 0X2E);
    // 0x803F4AA8: sw          $v0, 0xCC($sp)
    MEM_W(0XCC, ctx->r29) = ctx->r2;
    // 0x803F4AAC: jal         0x803F3C88
    // 0x803F4AB0: addiu       $a2, $zero, 0x1A8
    ctx->r6 = ADD32(0, 0X1A8);
    ovl_803F0000_menu_func_803F3C88(rdram, ctx);
        goto after_12;
    // 0x803F4AB0: addiu       $a2, $zero, 0x1A8
    ctx->r6 = ADD32(0, 0X1A8);
    after_12:
    // 0x803F4AB4: lw          $v1, 0xCC($sp)
    ctx->r3 = MEM_W(ctx->r29, 0XCC);
    // 0x803F4AB8: mtc1        $v0, $f16
    ctx->f16.u32l = ctx->r2;
    // 0x803F4ABC: lh          $t5, 0x30($v1)
    ctx->r13 = MEM_H(ctx->r3, 0X30);
    // 0x803F4AC0: cvt.s.w     $f16, $f16
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    ctx->f16.fl = CVT_S_W(ctx->f16.u32l);
    // 0x803F4AC4: mtc1        $t5, $f18
    ctx->f18.u32l = ctx->r13;
    // 0x803F4AC8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x803F4ACC: cvt.s.w     $f18, $f18
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    ctx->f18.fl = CVT_S_W(ctx->f18.u32l);
    // 0x803F4AD0: mfc1        $a1, $f16
    ctx->r5 = (int32_t)ctx->f16.u32l;
    // 0x803F4AD4: addiu       $a3, $sp, 0xB0
    ctx->r7 = ADD32(ctx->r29, 0XB0);
    // 0x803F4AD8: mfc1        $a2, $f18
    ctx->r6 = (int32_t)ctx->f18.u32l;
    // 0x803F4ADC: jal         0x80272B98
    // 0x803F4AE0: nop

    LOOKUP_FUNC(0x80272B98)(rdram, ctx);
        goto after_13;
    // 0x803F4AE0: nop

    after_13:
    // 0x803F4AE4: b           L_803F4B20
    // 0x803F4AE8: lwc1        $f6, 0xB0($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0XB0);
        goto L_803F4B20;
    // 0x803F4AE8: lwc1        $f6, 0xB0($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0XB0);
L_803F4AEC:
    // 0x803F4AEC: lw          $t6, 0xC8($s0)
    ctx->r14 = MEM_W(ctx->r16, 0XC8);
    // 0x803F4AF0: mtc1        $zero, $f14
    ctx->f14.u32l = 0;
    // 0x803F4AF4: lw          $t7, 0x24($t6)
    ctx->r15 = MEM_W(ctx->r14, 0X24);
    // 0x803F4AF8: mfc1        $a2, $f14
    ctx->r6 = (int32_t)ctx->f14.u32l;
    // 0x803F4AFC: lh          $t8, 0x8BA($t7)
    ctx->r24 = MEM_H(ctx->r15, 0X8BA);
    // 0x803F4B00: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x803F4B04: mtc1        $t8, $f10
    ctx->f10.u32l = ctx->r24;
    // 0x803F4B08: addiu       $a3, $sp, 0xB0
    ctx->r7 = ADD32(ctx->r29, 0XB0);
    // 0x803F4B0C: cvt.s.w     $f10, $f10
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 10);
    ctx->f10.fl = CVT_S_W(ctx->f10.u32l);
    // 0x803F4B10: mfc1        $a1, $f10
    ctx->r5 = (int32_t)ctx->f10.u32l;
    // 0x803F4B14: jal         0x80272B98
    // 0x803F4B18: nop

    LOOKUP_FUNC(0x80272B98)(rdram, ctx);
        goto after_14;
    // 0x803F4B18: nop

    after_14:
    // 0x803F4B1C: lwc1        $f6, 0xB0($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0XB0);
L_803F4B20:
    // 0x803F4B20: lui         $a2, 0x800B
    ctx->r6 = S32(0X800B << 16);
    // 0x803F4B24: swc1        $f6, 0xBC($s0)
    MEM_W(0XBC, ctx->r16) = ctx->f6.u32l;
    // 0x803F4B28: lwc1        $f12, 0xB4($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0XB4);
    // 0x803F4B2C: lui         $a3, 0x800B
    ctx->r7 = S32(0X800B << 16);
    // 0x803F4B30: addiu       $a3, $a3, -0x53C8
    ctx->r7 = ADD32(ctx->r7, -0X53C8);
    // 0x803F4B34: addiu       $a2, $a2, -0x53E0
    ctx->r6 = ADD32(ctx->r6, -0X53E0);
    // 0x803F4B38: jal         0x803F0000
    // 0x803F4B3C: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
    ovl_803F0000_menu_func_803F0000(rdram, ctx);
        goto after_15;
    // 0x803F4B3C: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
    after_15:
    // 0x803F4B40: lw          $t9, 0xC8($s0)
    ctx->r25 = MEM_W(ctx->r16, 0XC8);
    // 0x803F4B44: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x803F4B48: jal         0x803F3D10
    // 0x803F4B4C: sh          $v0, 0x960($t9)
    MEM_H(0X960, ctx->r25) = ctx->r2;
    ovl_803F0000_menu_func_803F3D10(rdram, ctx);
        goto after_16;
    // 0x803F4B4C: sh          $v0, 0x960($t9)
    MEM_H(0X960, ctx->r25) = ctx->r2;
    after_16:
    // 0x803F4B50: b           L_803F4D78
    // 0x803F4B54: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_803F4D78;
    // 0x803F4B54: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x803F4B58: lui         $t0, 0x8028
    ctx->r8 = S32(0X8028 << 16);
    // 0x803F4B5C: lh          $t0, -0x1B60($t0)
    ctx->r8 = MEM_H(ctx->r8, -0X1B60);
    // 0x803F4B60: lui         $at, 0x4248
    ctx->r1 = S32(0X4248 << 16);
    // 0x803F4B64: andi        $t1, $t0, 0x1
    ctx->r9 = ctx->r8 & 0X1;
    // 0x803F4B68: beq         $t1, $zero, L_803F4BBC
    if (ctx->r9 == 0) {
        // 0x803F4B6C: nop
    
            goto L_803F4BBC;
    }
    // 0x803F4B6C: nop

    // 0x803F4B70: lwc1        $f4, 0x84($a2)
    ctx->f4.u32l = MEM_W(ctx->r6, 0X84);
    // 0x803F4B74: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x803F4B78: lui         $at, 0x803F
    ctx->r1 = S32(0X803F << 16);
    // 0x803F4B7C: c.lt.s      $f4, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f4.fl < ctx->f8.fl;
    // 0x803F4B80: nop

    // 0x803F4B84: bc1f        L_803F4BBC
    if (!c1cs) {
        // 0x803F4B88: nop
    
            goto L_803F4BBC;
    }
    // 0x803F4B88: nop

    // 0x803F4B8C: lwc1        $f18, 0x50($a2)
    ctx->f18.u32l = MEM_W(ctx->r6, 0X50);
    // 0x803F4B90: lwc1        $f17, 0x7D70($at)
    ctx->f_odd[(17 - 1) * 2] = MEM_W(ctx->r1, 0X7D70);
    // 0x803F4B94: lwc1        $f16, 0x7D74($at)
    ctx->f16.u32l = MEM_W(ctx->r1, 0X7D74);
    // 0x803F4B98: cvt.d.s     $f10, $f18
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.fl); 
    ctx->f10.d = CVT_D_S(ctx->f18.fl);
    // 0x803F4B9C: c.lt.d      $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f16.d < ctx->f10.d;
    // 0x803F4BA0: nop

    // 0x803F4BA4: bc1f        L_803F4BBC
    if (!c1cs) {
        // 0x803F4BA8: nop
    
            goto L_803F4BBC;
    }
    // 0x803F4BA8: nop

    // 0x803F4BAC: jal         0x803F3A98
    // 0x803F4BB0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_803F0000_menu_func_803F3A98(rdram, ctx);
        goto after_17;
    // 0x803F4BB0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_17:
    // 0x803F4BB4: b           L_803F4D78
    // 0x803F4BB8: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_803F4D78;
    // 0x803F4BB8: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_803F4BBC:
    // 0x803F4BBC: jal         0x803F401C
    // 0x803F4BC0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_803F0000_menu_func_803F401C(rdram, ctx);
        goto after_18;
    // 0x803F4BC0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_18:
    // 0x803F4BC4: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x803F4BC8: sh          $t2, 0x8A($sp)
    MEM_H(0X8A, ctx->r29) = ctx->r10;
    // 0x803F4BCC: lw          $v0, 0xC8($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XC8);
    // 0x803F4BD0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x803F4BD4: lhu         $t3, 0x95C($v0)
    ctx->r11 = MEM_HU(ctx->r2, 0X95C);
    // 0x803F4BD8: nop

    // 0x803F4BDC: ori         $t4, $t3, 0x2800
    ctx->r12 = ctx->r11 | 0X2800;
    // 0x803F4BE0: jal         0x803F3D10
    // 0x803F4BE4: sh          $t4, 0x95C($v0)
    MEM_H(0X95C, ctx->r2) = ctx->r12;
    ovl_803F0000_menu_func_803F3D10(rdram, ctx);
        goto after_19;
    // 0x803F4BE4: sh          $t4, 0x95C($v0)
    MEM_H(0X95C, ctx->r2) = ctx->r12;
    after_19:
    // 0x803F4BE8: b           L_803F4D78
    // 0x803F4BEC: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_803F4D78;
    // 0x803F4BEC: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x803F4BF0: lhu         $t5, 0x95C($v0)
    ctx->r13 = MEM_HU(ctx->r2, 0X95C);
    // 0x803F4BF4: addiu       $t7, $zero, 0x8
    ctx->r15 = ADD32(0, 0X8);
    // 0x803F4BF8: andi        $t6, $t5, 0xFFFE
    ctx->r14 = ctx->r13 & 0XFFFE;
    // 0x803F4BFC: sh          $t6, 0x95C($v0)
    MEM_H(0X95C, ctx->r2) = ctx->r14;
    // 0x803F4C00: sh          $t7, 0x8A($sp)
    MEM_H(0X8A, ctx->r29) = ctx->r15;
    // 0x803F4C04: lw          $v0, 0xC8($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XC8);
    // 0x803F4C08: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x803F4C0C: lw          $t8, 0x958($v0)
    ctx->r24 = MEM_W(ctx->r2, 0X958);
    // 0x803F4C10: addiu       $t4, $zero, 0x13
    ctx->r12 = ADD32(0, 0X13);
    // 0x803F4C14: beq         $t8, $zero, L_803F4C68
    if (ctx->r24 == 0) {
        // 0x803F4C18: nop
    
            goto L_803F4C68;
    }
    // 0x803F4C18: nop

    // 0x803F4C1C: jal         0x8006B35C
    // 0x803F4C20: addiu       $a1, $sp, 0x38
    ctx->r5 = ADD32(ctx->r29, 0X38);
    func_8006B35C(rdram, ctx);
        goto after_20;
    // 0x803F4C20: addiu       $a1, $sp, 0x38
    ctx->r5 = ADD32(ctx->r29, 0X38);
    after_20:
    // 0x803F4C24: lw          $t9, 0xC8($s0)
    ctx->r25 = MEM_W(ctx->r16, 0XC8);
    // 0x803F4C28: addiu       $a1, $zero, 0x13
    ctx->r5 = ADD32(0, 0X13);
    // 0x803F4C2C: lw          $t0, 0x958($t9)
    ctx->r8 = MEM_W(ctx->r25, 0X958);
    // 0x803F4C30: addiu       $a2, $sp, 0x38
    ctx->r6 = ADD32(ctx->r29, 0X38);
    // 0x803F4C34: lwc1        $f12, 0x84($t0)
    ctx->f12.u32l = MEM_W(ctx->r8, 0X84);
    // 0x803F4C38: jal         0x803F0000
    // 0x803F4C3C: addiu       $a3, $sp, 0x84
    ctx->r7 = ADD32(ctx->r29, 0X84);
    ovl_803F0000_menu_func_803F0000(rdram, ctx);
        goto after_21;
    // 0x803F4C3C: addiu       $a3, $sp, 0x84
    ctx->r7 = ADD32(ctx->r29, 0X84);
    after_21:
    // 0x803F4C40: lw          $t1, 0xC8($s0)
    ctx->r9 = MEM_W(ctx->r16, 0XC8);
    // 0x803F4C44: nop

    // 0x803F4C48: sh          $v0, 0x960($t1)
    MEM_H(0X960, ctx->r9) = ctx->r2;
    // 0x803F4C4C: lw          $t2, 0xC8($s0)
    ctx->r10 = MEM_W(ctx->r16, 0XC8);
    // 0x803F4C50: nop

    // 0x803F4C54: lw          $t3, 0x958($t2)
    ctx->r11 = MEM_W(ctx->r10, 0X958);
    // 0x803F4C58: nop

    // 0x803F4C5C: lwc1        $f6, 0x88($t3)
    ctx->f6.u32l = MEM_W(ctx->r11, 0X88);
    // 0x803F4C60: b           L_803F4C94
    // 0x803F4C64: swc1        $f6, 0xBC($s0)
    MEM_W(0XBC, ctx->r16) = ctx->f6.u32l;
        goto L_803F4C94;
    // 0x803F4C64: swc1        $f6, 0xBC($s0)
    MEM_W(0XBC, ctx->r16) = ctx->f6.u32l;
L_803F4C68:
    // 0x803F4C68: sh          $t4, 0x960($v0)
    MEM_H(0X960, ctx->r2) = ctx->r12;
    // 0x803F4C6C: lw          $t5, 0xC8($s0)
    ctx->r13 = MEM_W(ctx->r16, 0XC8);
    // 0x803F4C70: lui         $at, 0x803F
    ctx->r1 = S32(0X803F << 16);
    // 0x803F4C74: lw          $t6, 0x24($t5)
    ctx->r14 = MEM_W(ctx->r13, 0X24);
    // 0x803F4C78: lwc1        $f19, 0x7D78($at)
    ctx->f_odd[(19 - 1) * 2] = MEM_W(ctx->r1, 0X7D78);
    // 0x803F4C7C: lwc1        $f4, 0x8C0($t6)
    ctx->f4.u32l = MEM_W(ctx->r14, 0X8C0);
    // 0x803F4C80: lwc1        $f18, 0x7D7C($at)
    ctx->f18.u32l = MEM_W(ctx->r1, 0X7D7C);
    // 0x803F4C84: cvt.d.s     $f8, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f8.d = CVT_D_S(ctx->f4.fl);
    // 0x803F4C88: add.d       $f16, $f8, $f18
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f18.d); 
    ctx->f16.d = ctx->f8.d + ctx->f18.d;
    // 0x803F4C8C: cvt.s.d     $f10, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.d); 
    ctx->f10.fl = CVT_S_D(ctx->f16.d);
    // 0x803F4C90: swc1        $f10, 0xBC($s0)
    MEM_W(0XBC, ctx->r16) = ctx->f10.u32l;
L_803F4C94:
    // 0x803F4C94: lhu         $t7, 0x12($s0)
    ctx->r15 = MEM_HU(ctx->r16, 0X12);
    // 0x803F4C98: nop

    // 0x803F4C9C: ori         $t8, $t7, 0x4
    ctx->r24 = ctx->r15 | 0X4;
    // 0x803F4CA0: b           L_803F4D74
    // 0x803F4CA4: sh          $t8, 0x12($s0)
    MEM_H(0X12, ctx->r16) = ctx->r24;
        goto L_803F4D74;
    // 0x803F4CA4: sh          $t8, 0x12($s0)
    MEM_H(0X12, ctx->r16) = ctx->r24;
    // 0x803F4CA8: lui         $at, 0x4080
    ctx->r1 = S32(0X4080 << 16);
    // 0x803F4CAC: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    // 0x803F4CB0: lui         $at, 0x3FC0
    ctx->r1 = S32(0X3FC0 << 16);
    // 0x803F4CB4: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x803F4CB8: lui         $a2, 0x3E19
    ctx->r6 = S32(0X3E19 << 16);
    // 0x803F4CBC: lui         $a3, 0x3D4C
    ctx->r7 = S32(0X3D4C << 16);
    // 0x803F4CC0: addiu       $t9, $sp, 0x38
    ctx->r25 = ADD32(ctx->r29, 0X38);
    // 0x803F4CC4: sw          $t9, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r25;
    // 0x803F4CC8: ori         $a3, $a3, 0xCCCD
    ctx->r7 = ctx->r7 | 0XCCCD;
    // 0x803F4CCC: jal         0x8005743C
    // 0x803F4CD0: ori         $a2, $a2, 0x999A
    ctx->r6 = ctx->r6 | 0X999A;
    func_8005743C(rdram, ctx);
        goto after_22;
    // 0x803F4CD0: ori         $a2, $a2, 0x999A
    ctx->r6 = ctx->r6 | 0X999A;
    after_22:
    // 0x803F4CD4: lw          $t0, 0xC8($s0)
    ctx->r8 = MEM_W(ctx->r16, 0XC8);
    // 0x803F4CD8: addiu       $a1, $zero, 0x13
    ctx->r5 = ADD32(0, 0X13);
    // 0x803F4CDC: lw          $t1, 0x958($t0)
    ctx->r9 = MEM_W(ctx->r8, 0X958);
    // 0x803F4CE0: addiu       $a2, $sp, 0x38
    ctx->r6 = ADD32(ctx->r29, 0X38);
    // 0x803F4CE4: lwc1        $f12, 0x84($t1)
    ctx->f12.u32l = MEM_W(ctx->r9, 0X84);
    // 0x803F4CE8: jal         0x803F0000
    // 0x803F4CEC: addiu       $a3, $sp, 0x84
    ctx->r7 = ADD32(ctx->r29, 0X84);
    ovl_803F0000_menu_func_803F0000(rdram, ctx);
        goto after_23;
    // 0x803F4CEC: addiu       $a3, $sp, 0x84
    ctx->r7 = ADD32(ctx->r29, 0X84);
    after_23:
    // 0x803F4CF0: lw          $t2, 0xC8($s0)
    ctx->r10 = MEM_W(ctx->r16, 0XC8);
    // 0x803F4CF4: addiu       $t3, $zero, 0x1
    ctx->r11 = ADD32(0, 0X1);
    // 0x803F4CF8: sh          $v0, 0x960($t2)
    MEM_H(0X960, ctx->r10) = ctx->r2;
    // 0x803F4CFC: sh          $t3, 0x8A($sp)
    MEM_H(0X8A, ctx->r29) = ctx->r11;
    // 0x803F4D00: lw          $t4, 0xC8($s0)
    ctx->r12 = MEM_W(ctx->r16, 0XC8);
    // 0x803F4D04: lhu         $t6, 0x12($s0)
    ctx->r14 = MEM_HU(ctx->r16, 0X12);
    // 0x803F4D08: lw          $t5, 0x958($t4)
    ctx->r13 = MEM_W(ctx->r12, 0X958);
    // 0x803F4D0C: ori         $t7, $t6, 0x4
    ctx->r15 = ctx->r14 | 0X4;
    // 0x803F4D10: lwc1        $f6, 0x88($t5)
    ctx->f6.u32l = MEM_W(ctx->r13, 0X88);
    // 0x803F4D14: sh          $t7, 0x12($s0)
    MEM_H(0X12, ctx->r16) = ctx->r15;
    // 0x803F4D18: b           L_803F4D74
    // 0x803F4D1C: swc1        $f6, 0xBC($s0)
    MEM_W(0XBC, ctx->r16) = ctx->f6.u32l;
        goto L_803F4D74;
    // 0x803F4D1C: swc1        $f6, 0xBC($s0)
    MEM_W(0XBC, ctx->r16) = ctx->f6.u32l;
    // 0x803F4D20: jal         0x803F34D4
    // 0x803F4D24: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_803F0000_menu_func_803F34D4(rdram, ctx);
        goto after_24;
    // 0x803F4D24: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_24:
    // 0x803F4D28: b           L_803F4D78
    // 0x803F4D2C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_803F4D78;
    // 0x803F4D2C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x803F4D30: jal         0x803F3A98
    // 0x803F4D34: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_803F0000_menu_func_803F3A98(rdram, ctx);
        goto after_25;
    // 0x803F4D34: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_25:
    // 0x803F4D38: b           L_803F4D78
    // 0x803F4D3C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_803F4D78;
    // 0x803F4D3C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x803F4D40: jal         0x803F2A40
    // 0x803F4D44: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_803F0000_menu_func_803F2A40(rdram, ctx);
        goto after_26;
    // 0x803F4D44: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_26:
    // 0x803F4D48: bne         $v0, $zero, L_803F4D78
    if (ctx->r2 != 0) {
        // 0x803F4D4C: lw          $ra, 0x24($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X24);
            goto L_803F4D78;
    }
    // 0x803F4D4C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x803F4D50: jal         0x803F2464
    // 0x803F4D54: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_803F0000_menu_func_803F2464(rdram, ctx);
        goto after_27;
    // 0x803F4D54: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_27:
    // 0x803F4D58: b           L_803F4D78
    // 0x803F4D5C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_803F4D78;
    // 0x803F4D5C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x803F4D60: lhu         $t8, 0x12($s0)
    ctx->r24 = MEM_HU(ctx->r16, 0X12);
    // 0x803F4D64: mtc1        $zero, $f14
    ctx->f14.u32l = 0;
    // 0x803F4D68: ori         $t9, $t8, 0x8
    ctx->r25 = ctx->r24 | 0X8;
    // 0x803F4D6C: sh          $t9, 0x12($s0)
    MEM_H(0X12, ctx->r16) = ctx->r25;
    // 0x803F4D70: swc1        $f14, 0xAC($s0)
    MEM_W(0XAC, ctx->r16) = ctx->f14.u32l;
L_803F4D74:
    // 0x803F4D74: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_803F4D78:
    // 0x803F4D78: lhu         $v0, 0x8A($sp)
    ctx->r2 = MEM_HU(ctx->r29, 0X8A);
    // 0x803F4D7C: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x803F4D80: jr          $ra
    // 0x803F4D84: addiu       $sp, $sp, 0xD0
    ctx->r29 = ADD32(ctx->r29, 0XD0);
    return;
    // 0x803F4D84: addiu       $sp, $sp, 0xD0
    ctx->r29 = ADD32(ctx->r29, 0XD0);
;}
RECOMP_FUNC void ovl_803F0000_menu_func_803F47E4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803F47E4: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
    // 0x803F47E8: jal         0x803F0000
    // 0x803F47EC: add.s       $f12, $f10, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f12.fl = ctx->f10.fl + ctx->f4.fl;
    ovl_803F0000_menu_func_803F0000(rdram, ctx);
        goto after_0;
    // 0x803F47EC: add.s       $f12, $f10, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f12.fl = ctx->f10.fl + ctx->f4.fl;
    after_0:
    // 0x803F47F0: lw          $t2, 0xC8($s0)
    ctx->r10 = MEM_W(ctx->r16, 0XC8);
    // 0x803F47F4: b           L_803F4D74
    // 0x803F47F8: sh          $v0, 0x960($t2)
    MEM_H(0X960, ctx->r10) = ctx->r2;
        goto L_803F4D74;
    // 0x803F47F8: sh          $v0, 0x960($t2)
    MEM_H(0X960, ctx->r10) = ctx->r2;
    // 0x803F47FC: lhu         $t3, 0x95C($v0)
    ctx->r11 = MEM_HU(ctx->r2, 0X95C);
    // 0x803F4800: addiu       $t5, $zero, 0x1
    ctx->r13 = ADD32(0, 0X1);
    // 0x803F4804: andi        $t4, $t3, 0xFFFE
    ctx->r12 = ctx->r11 & 0XFFFE;
    // 0x803F4808: sh          $t4, 0x95C($v0)
    MEM_H(0X95C, ctx->r2) = ctx->r12;
    // 0x803F480C: sh          $t5, 0x8A($sp)
    MEM_H(0X8A, ctx->r29) = ctx->r13;
    // 0x803F4810: lhu         $t6, 0x12($s0)
    ctx->r14 = MEM_HU(ctx->r16, 0X12);
    // 0x803F4814: lw          $t8, 0xC8($s0)
    ctx->r24 = MEM_W(ctx->r16, 0XC8);
    // 0x803F4818: ori         $t7, $t6, 0x4
    ctx->r15 = ctx->r14 | 0X4;
    // 0x803F481C: sh          $t7, 0x12($s0)
    MEM_H(0X12, ctx->r16) = ctx->r15;
    // 0x803F4820: lh          $t9, 0x8CA($t8)
    ctx->r25 = MEM_H(ctx->r24, 0X8CA);
    // 0x803F4824: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x803F4828: addiu       $t0, $t9, 0x32
    ctx->r8 = ADD32(ctx->r25, 0X32);
    // 0x803F482C: mtc1        $t0, $f6
    ctx->f6.u32l = ctx->r8;
    // 0x803F4830: nop

    // 0x803F4834: cvt.s.w     $f6, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    ctx->f6.fl = CVT_S_W(ctx->f6.u32l);
    // 0x803F4838: mfc1        $a1, $f6
    ctx->r5 = (int32_t)ctx->f6.u32l;
    // 0x803F483C: jal         0x8026AB68
    // 0x803F4840: nop

    LOOKUP_FUNC(0x8026AB68)(rdram, ctx);
        goto after_1;
    // 0x803F4840: nop

    after_1:
    // 0x803F4844: mov.s       $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    ctx->f12.fl = ctx->f0.fl;
    // 0x803F4848: jal         0x80272AEC
    // 0x803F484C: swc1        $f0, 0xAC($sp)
    MEM_W(0XAC, ctx->r29) = ctx->f0.u32l;
    LOOKUP_FUNC(0x80272AEC)(rdram, ctx);
        goto after_2;
    // 0x803F484C: swc1        $f0, 0xAC($sp)
    MEM_W(0XAC, ctx->r29) = ctx->f0.u32l;
    after_2:
    // 0x803F4850: lui         $at, 0x803F
    ctx->r1 = S32(0X803F << 16);
    // 0x803F4854: lwc1        $f8, 0x7D5C($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X7D5C);
    // 0x803F4858: lwc1        $f2, 0xAC($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0XAC);
    // 0x803F485C: c.lt.s      $f8, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f8.fl < ctx->f0.fl;
    // 0x803F4860: lui         $t4, 0x8009
    ctx->r12 = S32(0X8009 << 16);
    // 0x803F4864: bc1f        L_803F4890
    if (!c1cs) {
        // 0x803F4868: addiu       $v0, $zero, 0x3C
        ctx->r2 = ADD32(0, 0X3C);
            goto L_803F4890;
    }
    // 0x803F4868: addiu       $v0, $zero, 0x3C
    ctx->r2 = ADD32(0, 0X3C);
    // 0x803F486C: lw          $t1, 0xC8($s0)
    ctx->r9 = MEM_W(ctx->r16, 0XC8);
    // 0x803F4870: nop

    // 0x803F4874: lw          $t2, 0x24($t1)
    ctx->r10 = MEM_W(ctx->r9, 0X24);
    // 0x803F4878: nop

    // 0x803F487C: lh          $t3, 0x8BA($t2)
    ctx->r11 = MEM_H(ctx->r10, 0X8BA);
    // 0x803F4880: nop

    // 0x803F4884: mtc1        $t3, $f16
    ctx->f16.u32l = ctx->r11;
    // 0x803F4888: nop

    // 0x803F488C: cvt.s.w     $f2, $f16
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 16);
    ctx->f2.fl = CVT_S_W(ctx->f16.u32l);
L_803F4890:
    // 0x803F4890: lw          $t4, 0x3B20($t4)
    ctx->r12 = MEM_W(ctx->r12, 0X3B20);
    // 0x803F4894: mtc1        $zero, $f14
    ctx->f14.u32l = 0;
    // 0x803F4898: lwc1        $f18, 0x0($t4)
    ctx->f18.u32l = MEM_W(ctx->r12, 0X0);
    // 0x803F489C: nop

    // 0x803F48A0: c.lt.s      $f14, $f18
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f14.fl < ctx->f18.fl;
    // 0x803F48A4: nop

    // 0x803F48A8: bc1f        L_803F48B8
    if (!c1cs) {
        // 0x803F48AC: nop
    
            goto L_803F48B8;
    }
    // 0x803F48AC: nop

    // 0x803F48B0: b           L_803F48B8
    // 0x803F48B4: addiu       $v0, $zero, -0x3C
    ctx->r2 = ADD32(0, -0X3C);
        goto L_803F48B8;
    // 0x803F48B4: addiu       $v0, $zero, -0x3C
    ctx->r2 = ADD32(0, -0X3C);
L_803F48B8:
    // 0x803F48B8: mtc1        $v0, $f10
    ctx->f10.u32l = ctx->r2;
    // 0x803F48BC: mfc1        $a1, $f2
    ctx->r5 = (int32_t)ctx->f2.u32l;
    // 0x803F48C0: cvt.s.w     $f10, $f10
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 10);
    ctx->f10.fl = CVT_S_W(ctx->f10.u32l);
    // 0x803F48C4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x803F48C8: addiu       $a3, $sp, 0xB0
    ctx->r7 = ADD32(ctx->r29, 0XB0);
    // 0x803F48CC: mfc1        $a2, $f10
    ctx->r6 = (int32_t)ctx->f10.u32l;
    // 0x803F48D0: jal         0x80272B98
    // 0x803F48D4: nop

    LOOKUP_FUNC(0x80272B98)(rdram, ctx);
        goto after_3;
    // 0x803F48D4: nop

    after_3:
    // 0x803F48D8: lwc1        $f4, 0xB0($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0XB0);
    // 0x803F48DC: lui         $a2, 0x800B
    ctx->r6 = S32(0X800B << 16);
    // 0x803F48E0: swc1        $f4, 0xBC($s0)
    MEM_W(0XBC, ctx->r16) = ctx->f4.u32l;
    // 0x803F48E4: lwc1        $f12, 0xB4($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0XB4);
    // 0x803F48E8: lui         $a3, 0x800B
    ctx->r7 = S32(0X800B << 16);
    // 0x803F48EC: addiu       $a3, $a3, -0x53AC
    ctx->r7 = ADD32(ctx->r7, -0X53AC);
    // 0x803F48F0: addiu       $a2, $a2, -0x53C4
    ctx->r6 = ADD32(ctx->r6, -0X53C4);
    // 0x803F48F4: jal         0x803F0000
    // 0x803F48F8: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
    ovl_803F0000_menu_func_803F0000(rdram, ctx);
        goto after_4;
    // 0x803F48F8: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
    after_4:
    // 0x803F48FC: lw          $t5, 0xC8($s0)
    ctx->r13 = MEM_W(ctx->r16, 0XC8);
    // 0x803F4900: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x803F4904: jal         0x803F3D10
    // 0x803F4908: sh          $v0, 0x960($t5)
    MEM_H(0X960, ctx->r13) = ctx->r2;
    ovl_803F0000_menu_func_803F3D10(rdram, ctx);
        goto after_5;
    // 0x803F4908: sh          $v0, 0x960($t5)
    MEM_H(0X960, ctx->r13) = ctx->r2;
    after_5:
    // 0x803F490C: lw          $v0, 0xC8($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XC8);
    // 0x803F4910: nop

    // 0x803F4914: lh          $t6, 0x960($v0)
    ctx->r14 = MEM_H(ctx->r2, 0X960);
    // 0x803F4918: nop

    // 0x803F491C: addiu       $t7, $t6, -0x1
    ctx->r15 = ADD32(ctx->r14, -0X1);
    // 0x803F4920: b           L_803F4D74
    // 0x803F4924: sh          $t7, 0x960($v0)
    MEM_H(0X960, ctx->r2) = ctx->r15;
        goto L_803F4D74;
    // 0x803F4924: sh          $t7, 0x960($v0)
    MEM_H(0X960, ctx->r2) = ctx->r15;
    // 0x803F4928: lui         $at, 0x803F
    ctx->r1 = S32(0X803F << 16);
    // 0x803F492C: lwc1        $f6, 0x7D60($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X7D60);
    // 0x803F4930: addiu       $t8, $zero, 0xF
    ctx->r24 = ADD32(0, 0XF);
    // 0x803F4934: swc1        $f6, 0x940($v0)
    MEM_W(0X940, ctx->r2) = ctx->f6.u32l;
    // 0x803F4938: lw          $t9, 0xC8($s0)
    ctx->r25 = MEM_W(ctx->r16, 0XC8);
    // 0x803F493C: lui         $t0, 0x8009
    ctx->r8 = S32(0X8009 << 16);
    // 0x803F4940: sh          $t8, 0x938($t9)
    MEM_H(0X938, ctx->r25) = ctx->r24;
    // 0x803F4944: lw          $t0, 0x3B20($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X3B20);
    // 0x803F4948: mtc1        $zero, $f14
    ctx->f14.u32l = 0;
    // 0x803F494C: lwc1        $f8, 0x0($t0)
    ctx->f8.u32l = MEM_W(ctx->r8, 0X0);
    // 0x803F4950: addiu       $t1, $zero, 0x5C
    ctx->r9 = ADD32(0, 0X5C);
    // 0x803F4954: c.lt.s      $f14, $f8
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f14.fl < ctx->f8.fl;
    // 0x803F4958: addiu       $t8, $zero, -0x1F3
    ctx->r24 = ADD32(0, -0X1F3);
    // 0x803F495C: bc1f        L_803F4970
    if (!c1cs) {
        // 0x803F4960: addiu       $t7, $zero, 0x1F3
        ctx->r15 = ADD32(0, 0X1F3);
            goto L_803F4970;
    }
    // 0x803F4960: addiu       $t7, $zero, 0x1F3
    ctx->r15 = ADD32(0, 0X1F3);
    // 0x803F4964: lw          $t2, 0xC8($s0)
    ctx->r10 = MEM_W(ctx->r16, 0XC8);
    // 0x803F4968: b           L_803F497C
    // 0x803F496C: sh          $t1, 0x93E($t2)
    MEM_H(0X93E, ctx->r10) = ctx->r9;
        goto L_803F497C;
    // 0x803F496C: sh          $t1, 0x93E($t2)
    MEM_H(0X93E, ctx->r10) = ctx->r9;
L_803F4970:
    // 0x803F4970: lw          $t4, 0xC8($s0)
    ctx->r12 = MEM_W(ctx->r16, 0XC8);
    // 0x803F4974: addiu       $t3, $zero, -0x5C
    ctx->r11 = ADD32(0, -0X5C);
    // 0x803F4978: sh          $t3, 0x93E($t4)
    MEM_H(0X93E, ctx->r12) = ctx->r11;
L_803F497C:
    // 0x803F497C: lw          $v0, 0xC8($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XC8);
    // 0x803F4980: nop

    // 0x803F4984: lhu         $t5, 0x8($v0)
    ctx->r13 = MEM_HU(ctx->r2, 0X8);
    // 0x803F4988: nop

    // 0x803F498C: andi        $t6, $t5, 0x1
    ctx->r14 = ctx->r13 & 0X1;
    // 0x803F4990: beq         $t6, $zero, L_803F49A0
    if (ctx->r14 == 0) {
        // 0x803F4994: nop
    
            goto L_803F49A0;
    }
    // 0x803F4994: nop

    // 0x803F4998: b           L_803F49A4
    // 0x803F499C: sh          $t7, 0x93C($v0)
    MEM_H(0X93C, ctx->r2) = ctx->r15;
        goto L_803F49A4;
    // 0x803F499C: sh          $t7, 0x93C($v0)
    MEM_H(0X93C, ctx->r2) = ctx->r15;
L_803F49A0:
    // 0x803F49A0: sh          $t8, 0x93C($v0)
    MEM_H(0X93C, ctx->r2) = ctx->r24;
L_803F49A4:
    // 0x803F49A4: lw          $t9, 0xC8($s0)
    ctx->r25 = MEM_W(ctx->r16, 0XC8);
    // 0x803F49A8: b           L_803F4D74
    // 0x803F49AC: sh          $zero, 0x948($t9)
    MEM_H(0X948, ctx->r25) = 0;
        goto L_803F4D74;
    // 0x803F49AC: sh          $zero, 0x948($t9)
    MEM_H(0X948, ctx->r25) = 0;
    // 0x803F49B0: lhu         $t0, 0x95C($v0)
    ctx->r8 = MEM_HU(ctx->r2, 0X95C);
    // 0x803F49B4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x803F49B8: andi        $t1, $t0, 0xFFFC
    ctx->r9 = ctx->r8 & 0XFFFC;
    // 0x803F49BC: jal         0x803F0EF0
    // 0x803F49C0: sh          $t1, 0x95C($v0)
    MEM_H(0X95C, ctx->r2) = ctx->r9;
    ovl_803F0000_menu_func_803F0EF0(rdram, ctx);
        goto after_6;
    // 0x803F49C0: sh          $t1, 0x95C($v0)
    MEM_H(0X95C, ctx->r2) = ctx->r9;
    after_6:
    // 0x803F49C4: beq         $v0, $zero, L_803F49E8
    if (ctx->r2 == 0) {
        // 0x803F49C8: addiu       $t4, $zero, 0x4000
        ctx->r12 = ADD32(0, 0X4000);
            goto L_803F49E8;
    }
    // 0x803F49C8: addiu       $t4, $zero, 0x4000
    ctx->r12 = ADD32(0, 0X4000);
    // 0x803F49CC: lhu         $t2, 0x12($s0)
    ctx->r10 = MEM_HU(ctx->r16, 0X12);
    // 0x803F49D0: lwc1        $f16, 0x88($v0)
    ctx->f16.u32l = MEM_W(ctx->r2, 0X88);
    // 0x803F49D4: ori         $t3, $t2, 0x4
    ctx->r11 = ctx->r10 | 0X4;
    // 0x803F49D8: sh          $t3, 0x12($s0)
    MEM_H(0X12, ctx->r16) = ctx->r11;
    // 0x803F49DC: swc1        $f16, 0xBC($s0)
    MEM_W(0XBC, ctx->r16) = ctx->f16.u32l;
    // 0x803F49E0: b           L_803F4D74
    // 0x803F49E4: sh          $t4, 0x8A($sp)
    MEM_H(0X8A, ctx->r29) = ctx->r12;
        goto L_803F4D74;
    // 0x803F49E4: sh          $t4, 0x8A($sp)
    MEM_H(0X8A, ctx->r29) = ctx->r12;
L_803F49E8:
    // 0x803F49E8: jal         0x803F401C
    // 0x803F49EC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_803F0000_menu_func_803F401C(rdram, ctx);
        goto after_7;
    // 0x803F49EC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_7:
    // 0x803F49F0: lw          $v0, 0xC8($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XC8);
    // 0x803F49F4: addiu       $t7, $zero, 0x4
    ctx->r15 = ADD32(0, 0X4);
    // 0x803F49F8: lhu         $t5, 0x95C($v0)
    ctx->r13 = MEM_HU(ctx->r2, 0X95C);
    // 0x803F49FC: nop

    // 0x803F4A00: ori         $t6, $t5, 0x800
    ctx->r14 = ctx->r13 | 0X800;
    // 0x803F4A04: sh          $t6, 0x95C($v0)
    MEM_H(0X95C, ctx->r2) = ctx->r14;
    // 0x803F4A08: b           L_803F4D74
    // 0x803F4A0C: sh          $t7, 0x8A($sp)
    MEM_H(0X8A, ctx->r29) = ctx->r15;
        goto L_803F4D74;
    // 0x803F4A0C: sh          $t7, 0x8A($sp)
    MEM_H(0X8A, ctx->r29) = ctx->r15;
    // 0x803F4A10: lui         $t8, 0x8028
    ctx->r24 = S32(0X8028 << 16);
    // 0x803F4A14: lh          $t8, -0x1B60($t8)
    ctx->r24 = MEM_H(ctx->r24, -0X1B60);
    // 0x803F4A18: lui         $at, 0x4248
    ctx->r1 = S32(0X4248 << 16);
    // 0x803F4A1C: andi        $t9, $t8, 0x1
    ctx->r25 = ctx->r24 & 0X1;
    // 0x803F4A20: beq         $t9, $zero, L_803F4A74
    if (ctx->r25 == 0) {
        // 0x803F4A24: nop
    
            goto L_803F4A74;
    }
    // 0x803F4A24: nop

    // 0x803F4A28: lwc1        $f18, 0x84($a2)
    ctx->f18.u32l = MEM_W(ctx->r6, 0X84);
    // 0x803F4A2C: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x803F4A30: lui         $at, 0x803F
    ctx->r1 = S32(0X803F << 16);
    // 0x803F4A34: c.lt.s      $f18, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f18.fl < ctx->f10.fl;
    // 0x803F4A38: nop

    // 0x803F4A3C: bc1f        L_803F4A74
    if (!c1cs) {
        // 0x803F4A40: nop
    
            goto L_803F4A74;
    }
    // 0x803F4A40: nop

    // 0x803F4A44: lwc1        $f6, 0x50($a2)
    ctx->f6.u32l = MEM_W(ctx->r6, 0X50);
    // 0x803F4A48: lwc1        $f5, 0x7D68($at)
    ctx->f_odd[(5 - 1) * 2] = MEM_W(ctx->r1, 0X7D68);
    // 0x803F4A4C: lwc1        $f4, 0x7D6C($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X7D6C);
    // 0x803F4A50: cvt.d.s     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f8.d = CVT_D_S(ctx->f6.fl);
    // 0x803F4A54: c.lt.d      $f4, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f4.d < ctx->f8.d;
    // 0x803F4A58: nop

    // 0x803F4A5C: bc1f        L_803F4A74
    if (!c1cs) {
        // 0x803F4A60: nop
    
            goto L_803F4A74;
    }
    // 0x803F4A60: nop

    // 0x803F4A64: jal         0x803F3A98
    // 0x803F4A68: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_803F0000_menu_func_803F3A98(rdram, ctx);
        goto after_8;
    // 0x803F4A68: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_8:
    // 0x803F4A6C: b           L_803F4D78
    // 0x803F4A70: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_803F4D78;
    // 0x803F4A70: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_803F4A74:
    // 0x803F4A74: lhu         $t0, 0x95C($v0)
    ctx->r8 = MEM_HU(ctx->r2, 0X95C);
    // 0x803F4A78: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x803F4A7C: andi        $t1, $t0, 0xFFFE
    ctx->r9 = ctx->r8 & 0XFFFE;
    // 0x803F4A80: sh          $t1, 0x95C($v0)
    MEM_H(0X95C, ctx->r2) = ctx->r9;
    // 0x803F4A84: sh          $t2, 0x8A($sp)
    MEM_H(0X8A, ctx->r29) = ctx->r10;
    // 0x803F4A88: lhu         $t3, 0x12($s0)
    ctx->r11 = MEM_HU(ctx->r16, 0X12);
    // 0x803F4A8C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x803F4A90: ori         $t4, $t3, 0x4
    ctx->r12 = ctx->r11 | 0X4;
    // 0x803F4A94: jal         0x803F0EF0
    // 0x803F4A98: sh          $t4, 0x12($s0)
    MEM_H(0X12, ctx->r16) = ctx->r12;
    ovl_803F0000_menu_func_803F0EF0(rdram, ctx);
        goto after_9;
    // 0x803F4A98: sh          $t4, 0x12($s0)
    MEM_H(0X12, ctx->r16) = ctx->r12;
    after_9:
    // 0x803F4A9C: beq         $v0, $zero, L_803F4AEC
    if (ctx->r2 == 0) {
        // 0x803F4AA0: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_803F4AEC;
    }
    // 0x803F4AA0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x803F4AA4: lh          $a1, 0x2E($v0)
    ctx->r5 = MEM_H(ctx->r2, 0X2E);
    // 0x803F4AA8: sw          $v0, 0xCC($sp)
    MEM_W(0XCC, ctx->r29) = ctx->r2;
    // 0x803F4AAC: jal         0x803F3C88
    // 0x803F4AB0: addiu       $a2, $zero, 0x1A8
    ctx->r6 = ADD32(0, 0X1A8);
    ovl_803F0000_menu_func_803F3C88(rdram, ctx);
        goto after_10;
    // 0x803F4AB0: addiu       $a2, $zero, 0x1A8
    ctx->r6 = ADD32(0, 0X1A8);
    after_10:
    // 0x803F4AB4: lw          $v1, 0xCC($sp)
    ctx->r3 = MEM_W(ctx->r29, 0XCC);
    // 0x803F4AB8: mtc1        $v0, $f16
    ctx->f16.u32l = ctx->r2;
    // 0x803F4ABC: lh          $t5, 0x30($v1)
    ctx->r13 = MEM_H(ctx->r3, 0X30);
    // 0x803F4AC0: cvt.s.w     $f16, $f16
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    ctx->f16.fl = CVT_S_W(ctx->f16.u32l);
    // 0x803F4AC4: mtc1        $t5, $f18
    ctx->f18.u32l = ctx->r13;
    // 0x803F4AC8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x803F4ACC: cvt.s.w     $f18, $f18
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    ctx->f18.fl = CVT_S_W(ctx->f18.u32l);
    // 0x803F4AD0: mfc1        $a1, $f16
    ctx->r5 = (int32_t)ctx->f16.u32l;
    // 0x803F4AD4: addiu       $a3, $sp, 0xB0
    ctx->r7 = ADD32(ctx->r29, 0XB0);
    // 0x803F4AD8: mfc1        $a2, $f18
    ctx->r6 = (int32_t)ctx->f18.u32l;
    // 0x803F4ADC: jal         0x80272B98
    // 0x803F4AE0: nop

    LOOKUP_FUNC(0x80272B98)(rdram, ctx);
        goto after_11;
    // 0x803F4AE0: nop

    after_11:
    // 0x803F4AE4: b           L_803F4B20
    // 0x803F4AE8: lwc1        $f6, 0xB0($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0XB0);
        goto L_803F4B20;
    // 0x803F4AE8: lwc1        $f6, 0xB0($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0XB0);
L_803F4AEC:
    // 0x803F4AEC: lw          $t6, 0xC8($s0)
    ctx->r14 = MEM_W(ctx->r16, 0XC8);
    // 0x803F4AF0: mtc1        $zero, $f14
    ctx->f14.u32l = 0;
    // 0x803F4AF4: lw          $t7, 0x24($t6)
    ctx->r15 = MEM_W(ctx->r14, 0X24);
    // 0x803F4AF8: mfc1        $a2, $f14
    ctx->r6 = (int32_t)ctx->f14.u32l;
    // 0x803F4AFC: lh          $t8, 0x8BA($t7)
    ctx->r24 = MEM_H(ctx->r15, 0X8BA);
    // 0x803F4B00: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x803F4B04: mtc1        $t8, $f10
    ctx->f10.u32l = ctx->r24;
    // 0x803F4B08: addiu       $a3, $sp, 0xB0
    ctx->r7 = ADD32(ctx->r29, 0XB0);
    // 0x803F4B0C: cvt.s.w     $f10, $f10
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 10);
    ctx->f10.fl = CVT_S_W(ctx->f10.u32l);
    // 0x803F4B10: mfc1        $a1, $f10
    ctx->r5 = (int32_t)ctx->f10.u32l;
    // 0x803F4B14: jal         0x80272B98
    // 0x803F4B18: nop

    LOOKUP_FUNC(0x80272B98)(rdram, ctx);
        goto after_12;
    // 0x803F4B18: nop

    after_12:
    // 0x803F4B1C: lwc1        $f6, 0xB0($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0XB0);
L_803F4B20:
    // 0x803F4B20: lui         $a2, 0x800B
    ctx->r6 = S32(0X800B << 16);
    // 0x803F4B24: swc1        $f6, 0xBC($s0)
    MEM_W(0XBC, ctx->r16) = ctx->f6.u32l;
    // 0x803F4B28: lwc1        $f12, 0xB4($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0XB4);
    // 0x803F4B2C: lui         $a3, 0x800B
    ctx->r7 = S32(0X800B << 16);
    // 0x803F4B30: addiu       $a3, $a3, -0x53C8
    ctx->r7 = ADD32(ctx->r7, -0X53C8);
    // 0x803F4B34: addiu       $a2, $a2, -0x53E0
    ctx->r6 = ADD32(ctx->r6, -0X53E0);
    // 0x803F4B38: jal         0x803F0000
    // 0x803F4B3C: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
    ovl_803F0000_menu_func_803F0000(rdram, ctx);
        goto after_13;
    // 0x803F4B3C: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
    after_13:
    // 0x803F4B40: lw          $t9, 0xC8($s0)
    ctx->r25 = MEM_W(ctx->r16, 0XC8);
    // 0x803F4B44: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x803F4B48: jal         0x803F3D10
    // 0x803F4B4C: sh          $v0, 0x960($t9)
    MEM_H(0X960, ctx->r25) = ctx->r2;
    ovl_803F0000_menu_func_803F3D10(rdram, ctx);
        goto after_14;
    // 0x803F4B4C: sh          $v0, 0x960($t9)
    MEM_H(0X960, ctx->r25) = ctx->r2;
    after_14:
    // 0x803F4B50: b           L_803F4D78
    // 0x803F4B54: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_803F4D78;
    // 0x803F4B54: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x803F4B58: lui         $t0, 0x8028
    ctx->r8 = S32(0X8028 << 16);
    // 0x803F4B5C: lh          $t0, -0x1B60($t0)
    ctx->r8 = MEM_H(ctx->r8, -0X1B60);
    // 0x803F4B60: lui         $at, 0x4248
    ctx->r1 = S32(0X4248 << 16);
    // 0x803F4B64: andi        $t1, $t0, 0x1
    ctx->r9 = ctx->r8 & 0X1;
    // 0x803F4B68: beq         $t1, $zero, L_803F4BBC
    if (ctx->r9 == 0) {
        // 0x803F4B6C: nop
    
            goto L_803F4BBC;
    }
    // 0x803F4B6C: nop

    // 0x803F4B70: lwc1        $f4, 0x84($a2)
    ctx->f4.u32l = MEM_W(ctx->r6, 0X84);
    // 0x803F4B74: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x803F4B78: lui         $at, 0x803F
    ctx->r1 = S32(0X803F << 16);
    // 0x803F4B7C: c.lt.s      $f4, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f4.fl < ctx->f8.fl;
    // 0x803F4B80: nop

    // 0x803F4B84: bc1f        L_803F4BBC
    if (!c1cs) {
        // 0x803F4B88: nop
    
            goto L_803F4BBC;
    }
    // 0x803F4B88: nop

    // 0x803F4B8C: lwc1        $f18, 0x50($a2)
    ctx->f18.u32l = MEM_W(ctx->r6, 0X50);
    // 0x803F4B90: lwc1        $f17, 0x7D70($at)
    ctx->f_odd[(17 - 1) * 2] = MEM_W(ctx->r1, 0X7D70);
    // 0x803F4B94: lwc1        $f16, 0x7D74($at)
    ctx->f16.u32l = MEM_W(ctx->r1, 0X7D74);
    // 0x803F4B98: cvt.d.s     $f10, $f18
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.fl); 
    ctx->f10.d = CVT_D_S(ctx->f18.fl);
    // 0x803F4B9C: c.lt.d      $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f16.d < ctx->f10.d;
    // 0x803F4BA0: nop

    // 0x803F4BA4: bc1f        L_803F4BBC
    if (!c1cs) {
        // 0x803F4BA8: nop
    
            goto L_803F4BBC;
    }
    // 0x803F4BA8: nop

    // 0x803F4BAC: jal         0x803F3A98
    // 0x803F4BB0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_803F0000_menu_func_803F3A98(rdram, ctx);
        goto after_15;
    // 0x803F4BB0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_15:
    // 0x803F4BB4: b           L_803F4D78
    // 0x803F4BB8: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_803F4D78;
    // 0x803F4BB8: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_803F4BBC:
    // 0x803F4BBC: jal         0x803F401C
    // 0x803F4BC0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_803F0000_menu_func_803F401C(rdram, ctx);
        goto after_16;
    // 0x803F4BC0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_16:
    // 0x803F4BC4: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x803F4BC8: sh          $t2, 0x8A($sp)
    MEM_H(0X8A, ctx->r29) = ctx->r10;
    // 0x803F4BCC: lw          $v0, 0xC8($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XC8);
    // 0x803F4BD0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x803F4BD4: lhu         $t3, 0x95C($v0)
    ctx->r11 = MEM_HU(ctx->r2, 0X95C);
    // 0x803F4BD8: nop

    // 0x803F4BDC: ori         $t4, $t3, 0x2800
    ctx->r12 = ctx->r11 | 0X2800;
    // 0x803F4BE0: jal         0x803F3D10
    // 0x803F4BE4: sh          $t4, 0x95C($v0)
    MEM_H(0X95C, ctx->r2) = ctx->r12;
    ovl_803F0000_menu_func_803F3D10(rdram, ctx);
        goto after_17;
    // 0x803F4BE4: sh          $t4, 0x95C($v0)
    MEM_H(0X95C, ctx->r2) = ctx->r12;
    after_17:
    // 0x803F4BE8: b           L_803F4D78
    // 0x803F4BEC: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_803F4D78;
    // 0x803F4BEC: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x803F4BF0: lhu         $t5, 0x95C($v0)
    ctx->r13 = MEM_HU(ctx->r2, 0X95C);
    // 0x803F4BF4: addiu       $t7, $zero, 0x8
    ctx->r15 = ADD32(0, 0X8);
    // 0x803F4BF8: andi        $t6, $t5, 0xFFFE
    ctx->r14 = ctx->r13 & 0XFFFE;
    // 0x803F4BFC: sh          $t6, 0x95C($v0)
    MEM_H(0X95C, ctx->r2) = ctx->r14;
    // 0x803F4C00: sh          $t7, 0x8A($sp)
    MEM_H(0X8A, ctx->r29) = ctx->r15;
    // 0x803F4C04: lw          $v0, 0xC8($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XC8);
    // 0x803F4C08: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x803F4C0C: lw          $t8, 0x958($v0)
    ctx->r24 = MEM_W(ctx->r2, 0X958);
    // 0x803F4C10: addiu       $t4, $zero, 0x13
    ctx->r12 = ADD32(0, 0X13);
    // 0x803F4C14: beq         $t8, $zero, L_803F4C68
    if (ctx->r24 == 0) {
        // 0x803F4C18: nop
    
            goto L_803F4C68;
    }
    // 0x803F4C18: nop

    // 0x803F4C1C: jal         0x8006B35C
    // 0x803F4C20: addiu       $a1, $sp, 0x38
    ctx->r5 = ADD32(ctx->r29, 0X38);
    func_8006B35C(rdram, ctx);
        goto after_18;
    // 0x803F4C20: addiu       $a1, $sp, 0x38
    ctx->r5 = ADD32(ctx->r29, 0X38);
    after_18:
    // 0x803F4C24: lw          $t9, 0xC8($s0)
    ctx->r25 = MEM_W(ctx->r16, 0XC8);
    // 0x803F4C28: addiu       $a1, $zero, 0x13
    ctx->r5 = ADD32(0, 0X13);
    // 0x803F4C2C: lw          $t0, 0x958($t9)
    ctx->r8 = MEM_W(ctx->r25, 0X958);
    // 0x803F4C30: addiu       $a2, $sp, 0x38
    ctx->r6 = ADD32(ctx->r29, 0X38);
    // 0x803F4C34: lwc1        $f12, 0x84($t0)
    ctx->f12.u32l = MEM_W(ctx->r8, 0X84);
    // 0x803F4C38: jal         0x803F0000
    // 0x803F4C3C: addiu       $a3, $sp, 0x84
    ctx->r7 = ADD32(ctx->r29, 0X84);
    ovl_803F0000_menu_func_803F0000(rdram, ctx);
        goto after_19;
    // 0x803F4C3C: addiu       $a3, $sp, 0x84
    ctx->r7 = ADD32(ctx->r29, 0X84);
    after_19:
    // 0x803F4C40: lw          $t1, 0xC8($s0)
    ctx->r9 = MEM_W(ctx->r16, 0XC8);
    // 0x803F4C44: nop

    // 0x803F4C48: sh          $v0, 0x960($t1)
    MEM_H(0X960, ctx->r9) = ctx->r2;
    // 0x803F4C4C: lw          $t2, 0xC8($s0)
    ctx->r10 = MEM_W(ctx->r16, 0XC8);
    // 0x803F4C50: nop

    // 0x803F4C54: lw          $t3, 0x958($t2)
    ctx->r11 = MEM_W(ctx->r10, 0X958);
    // 0x803F4C58: nop

    // 0x803F4C5C: lwc1        $f6, 0x88($t3)
    ctx->f6.u32l = MEM_W(ctx->r11, 0X88);
    // 0x803F4C60: b           L_803F4C94
    // 0x803F4C64: swc1        $f6, 0xBC($s0)
    MEM_W(0XBC, ctx->r16) = ctx->f6.u32l;
        goto L_803F4C94;
    // 0x803F4C64: swc1        $f6, 0xBC($s0)
    MEM_W(0XBC, ctx->r16) = ctx->f6.u32l;
L_803F4C68:
    // 0x803F4C68: sh          $t4, 0x960($v0)
    MEM_H(0X960, ctx->r2) = ctx->r12;
    // 0x803F4C6C: lw          $t5, 0xC8($s0)
    ctx->r13 = MEM_W(ctx->r16, 0XC8);
    // 0x803F4C70: lui         $at, 0x803F
    ctx->r1 = S32(0X803F << 16);
    // 0x803F4C74: lw          $t6, 0x24($t5)
    ctx->r14 = MEM_W(ctx->r13, 0X24);
    // 0x803F4C78: lwc1        $f19, 0x7D78($at)
    ctx->f_odd[(19 - 1) * 2] = MEM_W(ctx->r1, 0X7D78);
    // 0x803F4C7C: lwc1        $f4, 0x8C0($t6)
    ctx->f4.u32l = MEM_W(ctx->r14, 0X8C0);
    // 0x803F4C80: lwc1        $f18, 0x7D7C($at)
    ctx->f18.u32l = MEM_W(ctx->r1, 0X7D7C);
    // 0x803F4C84: cvt.d.s     $f8, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f8.d = CVT_D_S(ctx->f4.fl);
    // 0x803F4C88: add.d       $f16, $f8, $f18
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f18.d); 
    ctx->f16.d = ctx->f8.d + ctx->f18.d;
    // 0x803F4C8C: cvt.s.d     $f10, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.d); 
    ctx->f10.fl = CVT_S_D(ctx->f16.d);
    // 0x803F4C90: swc1        $f10, 0xBC($s0)
    MEM_W(0XBC, ctx->r16) = ctx->f10.u32l;
L_803F4C94:
    // 0x803F4C94: lhu         $t7, 0x12($s0)
    ctx->r15 = MEM_HU(ctx->r16, 0X12);
    // 0x803F4C98: nop

    // 0x803F4C9C: ori         $t8, $t7, 0x4
    ctx->r24 = ctx->r15 | 0X4;
    // 0x803F4CA0: b           L_803F4D74
    // 0x803F4CA4: sh          $t8, 0x12($s0)
    MEM_H(0X12, ctx->r16) = ctx->r24;
        goto L_803F4D74;
    // 0x803F4CA4: sh          $t8, 0x12($s0)
    MEM_H(0X12, ctx->r16) = ctx->r24;
    // 0x803F4CA8: lui         $at, 0x4080
    ctx->r1 = S32(0X4080 << 16);
    // 0x803F4CAC: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    // 0x803F4CB0: lui         $at, 0x3FC0
    ctx->r1 = S32(0X3FC0 << 16);
    // 0x803F4CB4: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x803F4CB8: lui         $a2, 0x3E19
    ctx->r6 = S32(0X3E19 << 16);
    // 0x803F4CBC: lui         $a3, 0x3D4C
    ctx->r7 = S32(0X3D4C << 16);
    // 0x803F4CC0: addiu       $t9, $sp, 0x38
    ctx->r25 = ADD32(ctx->r29, 0X38);
    // 0x803F4CC4: sw          $t9, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r25;
    // 0x803F4CC8: ori         $a3, $a3, 0xCCCD
    ctx->r7 = ctx->r7 | 0XCCCD;
    // 0x803F4CCC: jal         0x8005743C
    // 0x803F4CD0: ori         $a2, $a2, 0x999A
    ctx->r6 = ctx->r6 | 0X999A;
    func_8005743C(rdram, ctx);
        goto after_20;
    // 0x803F4CD0: ori         $a2, $a2, 0x999A
    ctx->r6 = ctx->r6 | 0X999A;
    after_20:
    // 0x803F4CD4: lw          $t0, 0xC8($s0)
    ctx->r8 = MEM_W(ctx->r16, 0XC8);
    // 0x803F4CD8: addiu       $a1, $zero, 0x13
    ctx->r5 = ADD32(0, 0X13);
    // 0x803F4CDC: lw          $t1, 0x958($t0)
    ctx->r9 = MEM_W(ctx->r8, 0X958);
    // 0x803F4CE0: addiu       $a2, $sp, 0x38
    ctx->r6 = ADD32(ctx->r29, 0X38);
    // 0x803F4CE4: lwc1        $f12, 0x84($t1)
    ctx->f12.u32l = MEM_W(ctx->r9, 0X84);
    // 0x803F4CE8: jal         0x803F0000
    // 0x803F4CEC: addiu       $a3, $sp, 0x84
    ctx->r7 = ADD32(ctx->r29, 0X84);
    ovl_803F0000_menu_func_803F0000(rdram, ctx);
        goto after_21;
    // 0x803F4CEC: addiu       $a3, $sp, 0x84
    ctx->r7 = ADD32(ctx->r29, 0X84);
    after_21:
    // 0x803F4CF0: lw          $t2, 0xC8($s0)
    ctx->r10 = MEM_W(ctx->r16, 0XC8);
    // 0x803F4CF4: addiu       $t3, $zero, 0x1
    ctx->r11 = ADD32(0, 0X1);
    // 0x803F4CF8: sh          $v0, 0x960($t2)
    MEM_H(0X960, ctx->r10) = ctx->r2;
    // 0x803F4CFC: sh          $t3, 0x8A($sp)
    MEM_H(0X8A, ctx->r29) = ctx->r11;
    // 0x803F4D00: lw          $t4, 0xC8($s0)
    ctx->r12 = MEM_W(ctx->r16, 0XC8);
    // 0x803F4D04: lhu         $t6, 0x12($s0)
    ctx->r14 = MEM_HU(ctx->r16, 0X12);
    // 0x803F4D08: lw          $t5, 0x958($t4)
    ctx->r13 = MEM_W(ctx->r12, 0X958);
    // 0x803F4D0C: ori         $t7, $t6, 0x4
    ctx->r15 = ctx->r14 | 0X4;
    // 0x803F4D10: lwc1        $f6, 0x88($t5)
    ctx->f6.u32l = MEM_W(ctx->r13, 0X88);
    // 0x803F4D14: sh          $t7, 0x12($s0)
    MEM_H(0X12, ctx->r16) = ctx->r15;
    // 0x803F4D18: b           L_803F4D74
    // 0x803F4D1C: swc1        $f6, 0xBC($s0)
    MEM_W(0XBC, ctx->r16) = ctx->f6.u32l;
        goto L_803F4D74;
    // 0x803F4D1C: swc1        $f6, 0xBC($s0)
    MEM_W(0XBC, ctx->r16) = ctx->f6.u32l;
    // 0x803F4D20: jal         0x803F34D4
    // 0x803F4D24: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_803F0000_menu_func_803F34D4(rdram, ctx);
        goto after_22;
    // 0x803F4D24: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_22:
    // 0x803F4D28: b           L_803F4D78
    // 0x803F4D2C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_803F4D78;
    // 0x803F4D2C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x803F4D30: jal         0x803F3A98
    // 0x803F4D34: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_803F0000_menu_func_803F3A98(rdram, ctx);
        goto after_23;
    // 0x803F4D34: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_23:
    // 0x803F4D38: b           L_803F4D78
    // 0x803F4D3C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_803F4D78;
    // 0x803F4D3C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x803F4D40: jal         0x803F2A40
    // 0x803F4D44: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_803F0000_menu_func_803F2A40(rdram, ctx);
        goto after_24;
    // 0x803F4D44: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_24:
    // 0x803F4D48: bne         $v0, $zero, L_803F4D78
    if (ctx->r2 != 0) {
        // 0x803F4D4C: lw          $ra, 0x24($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X24);
            goto L_803F4D78;
    }
    // 0x803F4D4C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x803F4D50: jal         0x803F2464
    // 0x803F4D54: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_803F0000_menu_func_803F2464(rdram, ctx);
        goto after_25;
    // 0x803F4D54: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_25:
    // 0x803F4D58: b           L_803F4D78
    // 0x803F4D5C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_803F4D78;
    // 0x803F4D5C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x803F4D60: lhu         $t8, 0x12($s0)
    ctx->r24 = MEM_HU(ctx->r16, 0X12);
    // 0x803F4D64: mtc1        $zero, $f14
    ctx->f14.u32l = 0;
    // 0x803F4D68: ori         $t9, $t8, 0x8
    ctx->r25 = ctx->r24 | 0X8;
    // 0x803F4D6C: sh          $t9, 0x12($s0)
    MEM_H(0X12, ctx->r16) = ctx->r25;
    // 0x803F4D70: swc1        $f14, 0xAC($s0)
    MEM_W(0XAC, ctx->r16) = ctx->f14.u32l;
L_803F4D74:
    // 0x803F4D74: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_803F4D78:
    // 0x803F4D78: lhu         $v0, 0x8A($sp)
    ctx->r2 = MEM_HU(ctx->r29, 0X8A);
    // 0x803F4D7C: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x803F4D80: jr          $ra
    // 0x803F4D84: addiu       $sp, $sp, 0xD0
    ctx->r29 = ADD32(ctx->r29, 0XD0);
    return;
    // 0x803F4D84: addiu       $sp, $sp, 0xD0
    ctx->r29 = ADD32(ctx->r29, 0XD0);
;}
RECOMP_FUNC void ovl_803F0000_menu_func_803F4840(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803F4840: nop

    // 0x803F4844: mov.s       $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    ctx->f12.fl = ctx->f0.fl;
    // 0x803F4848: jal         0x80272AEC
    // 0x803F484C: swc1        $f0, 0xAC($sp)
    MEM_W(0XAC, ctx->r29) = ctx->f0.u32l;
    LOOKUP_FUNC(0x80272AEC)(rdram, ctx);
        goto after_0;
    // 0x803F484C: swc1        $f0, 0xAC($sp)
    MEM_W(0XAC, ctx->r29) = ctx->f0.u32l;
    after_0:
    // 0x803F4850: lui         $at, 0x803F
    ctx->r1 = S32(0X803F << 16);
    // 0x803F4854: lwc1        $f8, 0x7D5C($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X7D5C);
    // 0x803F4858: lwc1        $f2, 0xAC($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0XAC);
    // 0x803F485C: c.lt.s      $f8, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f8.fl < ctx->f0.fl;
    // 0x803F4860: lui         $t4, 0x8009
    ctx->r12 = S32(0X8009 << 16);
    // 0x803F4864: bc1f        L_803F4890
    if (!c1cs) {
        // 0x803F4868: addiu       $v0, $zero, 0x3C
        ctx->r2 = ADD32(0, 0X3C);
            goto L_803F4890;
    }
    // 0x803F4868: addiu       $v0, $zero, 0x3C
    ctx->r2 = ADD32(0, 0X3C);
    // 0x803F486C: lw          $t1, 0xC8($s0)
    ctx->r9 = MEM_W(ctx->r16, 0XC8);
    // 0x803F4870: nop

    // 0x803F4874: lw          $t2, 0x24($t1)
    ctx->r10 = MEM_W(ctx->r9, 0X24);
    // 0x803F4878: nop

    // 0x803F487C: lh          $t3, 0x8BA($t2)
    ctx->r11 = MEM_H(ctx->r10, 0X8BA);
    // 0x803F4880: nop

    // 0x803F4884: mtc1        $t3, $f16
    ctx->f16.u32l = ctx->r11;
    // 0x803F4888: nop

    // 0x803F488C: cvt.s.w     $f2, $f16
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 16);
    ctx->f2.fl = CVT_S_W(ctx->f16.u32l);
L_803F4890:
    // 0x803F4890: lw          $t4, 0x3B20($t4)
    ctx->r12 = MEM_W(ctx->r12, 0X3B20);
    // 0x803F4894: mtc1        $zero, $f14
    ctx->f14.u32l = 0;
    // 0x803F4898: lwc1        $f18, 0x0($t4)
    ctx->f18.u32l = MEM_W(ctx->r12, 0X0);
    // 0x803F489C: nop

    // 0x803F48A0: c.lt.s      $f14, $f18
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f14.fl < ctx->f18.fl;
    // 0x803F48A4: nop

    // 0x803F48A8: bc1f        L_803F48B8
    if (!c1cs) {
        // 0x803F48AC: nop
    
            goto L_803F48B8;
    }
    // 0x803F48AC: nop

    // 0x803F48B0: b           L_803F48B8
    // 0x803F48B4: addiu       $v0, $zero, -0x3C
    ctx->r2 = ADD32(0, -0X3C);
        goto L_803F48B8;
    // 0x803F48B4: addiu       $v0, $zero, -0x3C
    ctx->r2 = ADD32(0, -0X3C);
L_803F48B8:
    // 0x803F48B8: mtc1        $v0, $f10
    ctx->f10.u32l = ctx->r2;
    // 0x803F48BC: mfc1        $a1, $f2
    ctx->r5 = (int32_t)ctx->f2.u32l;
    // 0x803F48C0: cvt.s.w     $f10, $f10
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 10);
    ctx->f10.fl = CVT_S_W(ctx->f10.u32l);
    // 0x803F48C4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x803F48C8: addiu       $a3, $sp, 0xB0
    ctx->r7 = ADD32(ctx->r29, 0XB0);
    // 0x803F48CC: mfc1        $a2, $f10
    ctx->r6 = (int32_t)ctx->f10.u32l;
    // 0x803F48D0: jal         0x80272B98
    // 0x803F48D4: nop

    LOOKUP_FUNC(0x80272B98)(rdram, ctx);
        goto after_1;
    // 0x803F48D4: nop

    after_1:
    // 0x803F48D8: lwc1        $f4, 0xB0($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0XB0);
    // 0x803F48DC: lui         $a2, 0x800B
    ctx->r6 = S32(0X800B << 16);
    // 0x803F48E0: swc1        $f4, 0xBC($s0)
    MEM_W(0XBC, ctx->r16) = ctx->f4.u32l;
    // 0x803F48E4: lwc1        $f12, 0xB4($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0XB4);
    // 0x803F48E8: lui         $a3, 0x800B
    ctx->r7 = S32(0X800B << 16);
    // 0x803F48EC: addiu       $a3, $a3, -0x53AC
    ctx->r7 = ADD32(ctx->r7, -0X53AC);
    // 0x803F48F0: addiu       $a2, $a2, -0x53C4
    ctx->r6 = ADD32(ctx->r6, -0X53C4);
    // 0x803F48F4: jal         0x803F0000
    // 0x803F48F8: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
    ovl_803F0000_menu_func_803F0000(rdram, ctx);
        goto after_2;
    // 0x803F48F8: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
    after_2:
    // 0x803F48FC: lw          $t5, 0xC8($s0)
    ctx->r13 = MEM_W(ctx->r16, 0XC8);
    // 0x803F4900: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x803F4904: jal         0x803F3D10
    // 0x803F4908: sh          $v0, 0x960($t5)
    MEM_H(0X960, ctx->r13) = ctx->r2;
    ovl_803F0000_menu_func_803F3D10(rdram, ctx);
        goto after_3;
    // 0x803F4908: sh          $v0, 0x960($t5)
    MEM_H(0X960, ctx->r13) = ctx->r2;
    after_3:
    // 0x803F490C: lw          $v0, 0xC8($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XC8);
    // 0x803F4910: nop

    // 0x803F4914: lh          $t6, 0x960($v0)
    ctx->r14 = MEM_H(ctx->r2, 0X960);
    // 0x803F4918: nop

    // 0x803F491C: addiu       $t7, $t6, -0x1
    ctx->r15 = ADD32(ctx->r14, -0X1);
    // 0x803F4920: b           L_803F4D74
    // 0x803F4924: sh          $t7, 0x960($v0)
    MEM_H(0X960, ctx->r2) = ctx->r15;
        goto L_803F4D74;
    // 0x803F4924: sh          $t7, 0x960($v0)
    MEM_H(0X960, ctx->r2) = ctx->r15;
    // 0x803F4928: lui         $at, 0x803F
    ctx->r1 = S32(0X803F << 16);
    // 0x803F492C: lwc1        $f6, 0x7D60($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X7D60);
    // 0x803F4930: addiu       $t8, $zero, 0xF
    ctx->r24 = ADD32(0, 0XF);
    // 0x803F4934: swc1        $f6, 0x940($v0)
    MEM_W(0X940, ctx->r2) = ctx->f6.u32l;
    // 0x803F4938: lw          $t9, 0xC8($s0)
    ctx->r25 = MEM_W(ctx->r16, 0XC8);
    // 0x803F493C: lui         $t0, 0x8009
    ctx->r8 = S32(0X8009 << 16);
    // 0x803F4940: sh          $t8, 0x938($t9)
    MEM_H(0X938, ctx->r25) = ctx->r24;
    // 0x803F4944: lw          $t0, 0x3B20($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X3B20);
    // 0x803F4948: mtc1        $zero, $f14
    ctx->f14.u32l = 0;
    // 0x803F494C: lwc1        $f8, 0x0($t0)
    ctx->f8.u32l = MEM_W(ctx->r8, 0X0);
    // 0x803F4950: addiu       $t1, $zero, 0x5C
    ctx->r9 = ADD32(0, 0X5C);
    // 0x803F4954: c.lt.s      $f14, $f8
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f14.fl < ctx->f8.fl;
    // 0x803F4958: addiu       $t8, $zero, -0x1F3
    ctx->r24 = ADD32(0, -0X1F3);
    // 0x803F495C: bc1f        L_803F4970
    if (!c1cs) {
        // 0x803F4960: addiu       $t7, $zero, 0x1F3
        ctx->r15 = ADD32(0, 0X1F3);
            goto L_803F4970;
    }
    // 0x803F4960: addiu       $t7, $zero, 0x1F3
    ctx->r15 = ADD32(0, 0X1F3);
    // 0x803F4964: lw          $t2, 0xC8($s0)
    ctx->r10 = MEM_W(ctx->r16, 0XC8);
    // 0x803F4968: b           L_803F497C
    // 0x803F496C: sh          $t1, 0x93E($t2)
    MEM_H(0X93E, ctx->r10) = ctx->r9;
        goto L_803F497C;
    // 0x803F496C: sh          $t1, 0x93E($t2)
    MEM_H(0X93E, ctx->r10) = ctx->r9;
L_803F4970:
    // 0x803F4970: lw          $t4, 0xC8($s0)
    ctx->r12 = MEM_W(ctx->r16, 0XC8);
    // 0x803F4974: addiu       $t3, $zero, -0x5C
    ctx->r11 = ADD32(0, -0X5C);
    // 0x803F4978: sh          $t3, 0x93E($t4)
    MEM_H(0X93E, ctx->r12) = ctx->r11;
L_803F497C:
    // 0x803F497C: lw          $v0, 0xC8($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XC8);
    // 0x803F4980: nop

    // 0x803F4984: lhu         $t5, 0x8($v0)
    ctx->r13 = MEM_HU(ctx->r2, 0X8);
    // 0x803F4988: nop

    // 0x803F498C: andi        $t6, $t5, 0x1
    ctx->r14 = ctx->r13 & 0X1;
    // 0x803F4990: beq         $t6, $zero, L_803F49A0
    if (ctx->r14 == 0) {
        // 0x803F4994: nop
    
            goto L_803F49A0;
    }
    // 0x803F4994: nop

    // 0x803F4998: b           L_803F49A4
    // 0x803F499C: sh          $t7, 0x93C($v0)
    MEM_H(0X93C, ctx->r2) = ctx->r15;
        goto L_803F49A4;
    // 0x803F499C: sh          $t7, 0x93C($v0)
    MEM_H(0X93C, ctx->r2) = ctx->r15;
L_803F49A0:
    // 0x803F49A0: sh          $t8, 0x93C($v0)
    MEM_H(0X93C, ctx->r2) = ctx->r24;
L_803F49A4:
    // 0x803F49A4: lw          $t9, 0xC8($s0)
    ctx->r25 = MEM_W(ctx->r16, 0XC8);
    // 0x803F49A8: b           L_803F4D74
    // 0x803F49AC: sh          $zero, 0x948($t9)
    MEM_H(0X948, ctx->r25) = 0;
        goto L_803F4D74;
    // 0x803F49AC: sh          $zero, 0x948($t9)
    MEM_H(0X948, ctx->r25) = 0;
    // 0x803F49B0: lhu         $t0, 0x95C($v0)
    ctx->r8 = MEM_HU(ctx->r2, 0X95C);
    // 0x803F49B4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x803F49B8: andi        $t1, $t0, 0xFFFC
    ctx->r9 = ctx->r8 & 0XFFFC;
    // 0x803F49BC: jal         0x803F0EF0
    // 0x803F49C0: sh          $t1, 0x95C($v0)
    MEM_H(0X95C, ctx->r2) = ctx->r9;
    ovl_803F0000_menu_func_803F0EF0(rdram, ctx);
        goto after_4;
    // 0x803F49C0: sh          $t1, 0x95C($v0)
    MEM_H(0X95C, ctx->r2) = ctx->r9;
    after_4:
    // 0x803F49C4: beq         $v0, $zero, L_803F49E8
    if (ctx->r2 == 0) {
        // 0x803F49C8: addiu       $t4, $zero, 0x4000
        ctx->r12 = ADD32(0, 0X4000);
            goto L_803F49E8;
    }
    // 0x803F49C8: addiu       $t4, $zero, 0x4000
    ctx->r12 = ADD32(0, 0X4000);
    // 0x803F49CC: lhu         $t2, 0x12($s0)
    ctx->r10 = MEM_HU(ctx->r16, 0X12);
    // 0x803F49D0: lwc1        $f16, 0x88($v0)
    ctx->f16.u32l = MEM_W(ctx->r2, 0X88);
    // 0x803F49D4: ori         $t3, $t2, 0x4
    ctx->r11 = ctx->r10 | 0X4;
    // 0x803F49D8: sh          $t3, 0x12($s0)
    MEM_H(0X12, ctx->r16) = ctx->r11;
    // 0x803F49DC: swc1        $f16, 0xBC($s0)
    MEM_W(0XBC, ctx->r16) = ctx->f16.u32l;
    // 0x803F49E0: b           L_803F4D74
    // 0x803F49E4: sh          $t4, 0x8A($sp)
    MEM_H(0X8A, ctx->r29) = ctx->r12;
        goto L_803F4D74;
    // 0x803F49E4: sh          $t4, 0x8A($sp)
    MEM_H(0X8A, ctx->r29) = ctx->r12;
L_803F49E8:
    // 0x803F49E8: jal         0x803F401C
    // 0x803F49EC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_803F0000_menu_func_803F401C(rdram, ctx);
        goto after_5;
    // 0x803F49EC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_5:
    // 0x803F49F0: lw          $v0, 0xC8($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XC8);
    // 0x803F49F4: addiu       $t7, $zero, 0x4
    ctx->r15 = ADD32(0, 0X4);
    // 0x803F49F8: lhu         $t5, 0x95C($v0)
    ctx->r13 = MEM_HU(ctx->r2, 0X95C);
    // 0x803F49FC: nop

    // 0x803F4A00: ori         $t6, $t5, 0x800
    ctx->r14 = ctx->r13 | 0X800;
    // 0x803F4A04: sh          $t6, 0x95C($v0)
    MEM_H(0X95C, ctx->r2) = ctx->r14;
    // 0x803F4A08: b           L_803F4D74
    // 0x803F4A0C: sh          $t7, 0x8A($sp)
    MEM_H(0X8A, ctx->r29) = ctx->r15;
        goto L_803F4D74;
    // 0x803F4A0C: sh          $t7, 0x8A($sp)
    MEM_H(0X8A, ctx->r29) = ctx->r15;
    // 0x803F4A10: lui         $t8, 0x8028
    ctx->r24 = S32(0X8028 << 16);
    // 0x803F4A14: lh          $t8, -0x1B60($t8)
    ctx->r24 = MEM_H(ctx->r24, -0X1B60);
    // 0x803F4A18: lui         $at, 0x4248
    ctx->r1 = S32(0X4248 << 16);
    // 0x803F4A1C: andi        $t9, $t8, 0x1
    ctx->r25 = ctx->r24 & 0X1;
    // 0x803F4A20: beq         $t9, $zero, L_803F4A74
    if (ctx->r25 == 0) {
        // 0x803F4A24: nop
    
            goto L_803F4A74;
    }
    // 0x803F4A24: nop

    // 0x803F4A28: lwc1        $f18, 0x84($a2)
    ctx->f18.u32l = MEM_W(ctx->r6, 0X84);
    // 0x803F4A2C: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x803F4A30: lui         $at, 0x803F
    ctx->r1 = S32(0X803F << 16);
    // 0x803F4A34: c.lt.s      $f18, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f18.fl < ctx->f10.fl;
    // 0x803F4A38: nop

    // 0x803F4A3C: bc1f        L_803F4A74
    if (!c1cs) {
        // 0x803F4A40: nop
    
            goto L_803F4A74;
    }
    // 0x803F4A40: nop

    // 0x803F4A44: lwc1        $f6, 0x50($a2)
    ctx->f6.u32l = MEM_W(ctx->r6, 0X50);
    // 0x803F4A48: lwc1        $f5, 0x7D68($at)
    ctx->f_odd[(5 - 1) * 2] = MEM_W(ctx->r1, 0X7D68);
    // 0x803F4A4C: lwc1        $f4, 0x7D6C($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X7D6C);
    // 0x803F4A50: cvt.d.s     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f8.d = CVT_D_S(ctx->f6.fl);
    // 0x803F4A54: c.lt.d      $f4, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f4.d < ctx->f8.d;
    // 0x803F4A58: nop

    // 0x803F4A5C: bc1f        L_803F4A74
    if (!c1cs) {
        // 0x803F4A60: nop
    
            goto L_803F4A74;
    }
    // 0x803F4A60: nop

    // 0x803F4A64: jal         0x803F3A98
    // 0x803F4A68: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_803F0000_menu_func_803F3A98(rdram, ctx);
        goto after_6;
    // 0x803F4A68: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_6:
    // 0x803F4A6C: b           L_803F4D78
    // 0x803F4A70: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_803F4D78;
    // 0x803F4A70: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_803F4A74:
    // 0x803F4A74: lhu         $t0, 0x95C($v0)
    ctx->r8 = MEM_HU(ctx->r2, 0X95C);
    // 0x803F4A78: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x803F4A7C: andi        $t1, $t0, 0xFFFE
    ctx->r9 = ctx->r8 & 0XFFFE;
    // 0x803F4A80: sh          $t1, 0x95C($v0)
    MEM_H(0X95C, ctx->r2) = ctx->r9;
    // 0x803F4A84: sh          $t2, 0x8A($sp)
    MEM_H(0X8A, ctx->r29) = ctx->r10;
    // 0x803F4A88: lhu         $t3, 0x12($s0)
    ctx->r11 = MEM_HU(ctx->r16, 0X12);
    // 0x803F4A8C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x803F4A90: ori         $t4, $t3, 0x4
    ctx->r12 = ctx->r11 | 0X4;
    // 0x803F4A94: jal         0x803F0EF0
    // 0x803F4A98: sh          $t4, 0x12($s0)
    MEM_H(0X12, ctx->r16) = ctx->r12;
    ovl_803F0000_menu_func_803F0EF0(rdram, ctx);
        goto after_7;
    // 0x803F4A98: sh          $t4, 0x12($s0)
    MEM_H(0X12, ctx->r16) = ctx->r12;
    after_7:
    // 0x803F4A9C: beq         $v0, $zero, L_803F4AEC
    if (ctx->r2 == 0) {
        // 0x803F4AA0: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_803F4AEC;
    }
    // 0x803F4AA0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x803F4AA4: lh          $a1, 0x2E($v0)
    ctx->r5 = MEM_H(ctx->r2, 0X2E);
    // 0x803F4AA8: sw          $v0, 0xCC($sp)
    MEM_W(0XCC, ctx->r29) = ctx->r2;
    // 0x803F4AAC: jal         0x803F3C88
    // 0x803F4AB0: addiu       $a2, $zero, 0x1A8
    ctx->r6 = ADD32(0, 0X1A8);
    ovl_803F0000_menu_func_803F3C88(rdram, ctx);
        goto after_8;
    // 0x803F4AB0: addiu       $a2, $zero, 0x1A8
    ctx->r6 = ADD32(0, 0X1A8);
    after_8:
    // 0x803F4AB4: lw          $v1, 0xCC($sp)
    ctx->r3 = MEM_W(ctx->r29, 0XCC);
    // 0x803F4AB8: mtc1        $v0, $f16
    ctx->f16.u32l = ctx->r2;
    // 0x803F4ABC: lh          $t5, 0x30($v1)
    ctx->r13 = MEM_H(ctx->r3, 0X30);
    // 0x803F4AC0: cvt.s.w     $f16, $f16
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    ctx->f16.fl = CVT_S_W(ctx->f16.u32l);
    // 0x803F4AC4: mtc1        $t5, $f18
    ctx->f18.u32l = ctx->r13;
    // 0x803F4AC8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x803F4ACC: cvt.s.w     $f18, $f18
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    ctx->f18.fl = CVT_S_W(ctx->f18.u32l);
    // 0x803F4AD0: mfc1        $a1, $f16
    ctx->r5 = (int32_t)ctx->f16.u32l;
    // 0x803F4AD4: addiu       $a3, $sp, 0xB0
    ctx->r7 = ADD32(ctx->r29, 0XB0);
    // 0x803F4AD8: mfc1        $a2, $f18
    ctx->r6 = (int32_t)ctx->f18.u32l;
    // 0x803F4ADC: jal         0x80272B98
    // 0x803F4AE0: nop

    LOOKUP_FUNC(0x80272B98)(rdram, ctx);
        goto after_9;
    // 0x803F4AE0: nop

    after_9:
    // 0x803F4AE4: b           L_803F4B20
    // 0x803F4AE8: lwc1        $f6, 0xB0($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0XB0);
        goto L_803F4B20;
    // 0x803F4AE8: lwc1        $f6, 0xB0($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0XB0);
L_803F4AEC:
    // 0x803F4AEC: lw          $t6, 0xC8($s0)
    ctx->r14 = MEM_W(ctx->r16, 0XC8);
    // 0x803F4AF0: mtc1        $zero, $f14
    ctx->f14.u32l = 0;
    // 0x803F4AF4: lw          $t7, 0x24($t6)
    ctx->r15 = MEM_W(ctx->r14, 0X24);
    // 0x803F4AF8: mfc1        $a2, $f14
    ctx->r6 = (int32_t)ctx->f14.u32l;
    // 0x803F4AFC: lh          $t8, 0x8BA($t7)
    ctx->r24 = MEM_H(ctx->r15, 0X8BA);
    // 0x803F4B00: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x803F4B04: mtc1        $t8, $f10
    ctx->f10.u32l = ctx->r24;
    // 0x803F4B08: addiu       $a3, $sp, 0xB0
    ctx->r7 = ADD32(ctx->r29, 0XB0);
    // 0x803F4B0C: cvt.s.w     $f10, $f10
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 10);
    ctx->f10.fl = CVT_S_W(ctx->f10.u32l);
    // 0x803F4B10: mfc1        $a1, $f10
    ctx->r5 = (int32_t)ctx->f10.u32l;
    // 0x803F4B14: jal         0x80272B98
    // 0x803F4B18: nop

    LOOKUP_FUNC(0x80272B98)(rdram, ctx);
        goto after_10;
    // 0x803F4B18: nop

    after_10:
    // 0x803F4B1C: lwc1        $f6, 0xB0($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0XB0);
L_803F4B20:
    // 0x803F4B20: lui         $a2, 0x800B
    ctx->r6 = S32(0X800B << 16);
    // 0x803F4B24: swc1        $f6, 0xBC($s0)
    MEM_W(0XBC, ctx->r16) = ctx->f6.u32l;
    // 0x803F4B28: lwc1        $f12, 0xB4($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0XB4);
    // 0x803F4B2C: lui         $a3, 0x800B
    ctx->r7 = S32(0X800B << 16);
    // 0x803F4B30: addiu       $a3, $a3, -0x53C8
    ctx->r7 = ADD32(ctx->r7, -0X53C8);
    // 0x803F4B34: addiu       $a2, $a2, -0x53E0
    ctx->r6 = ADD32(ctx->r6, -0X53E0);
    // 0x803F4B38: jal         0x803F0000
    // 0x803F4B3C: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
    ovl_803F0000_menu_func_803F0000(rdram, ctx);
        goto after_11;
    // 0x803F4B3C: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
    after_11:
    // 0x803F4B40: lw          $t9, 0xC8($s0)
    ctx->r25 = MEM_W(ctx->r16, 0XC8);
    // 0x803F4B44: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x803F4B48: jal         0x803F3D10
    // 0x803F4B4C: sh          $v0, 0x960($t9)
    MEM_H(0X960, ctx->r25) = ctx->r2;
    ovl_803F0000_menu_func_803F3D10(rdram, ctx);
        goto after_12;
    // 0x803F4B4C: sh          $v0, 0x960($t9)
    MEM_H(0X960, ctx->r25) = ctx->r2;
    after_12:
    // 0x803F4B50: b           L_803F4D78
    // 0x803F4B54: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_803F4D78;
    // 0x803F4B54: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x803F4B58: lui         $t0, 0x8028
    ctx->r8 = S32(0X8028 << 16);
    // 0x803F4B5C: lh          $t0, -0x1B60($t0)
    ctx->r8 = MEM_H(ctx->r8, -0X1B60);
    // 0x803F4B60: lui         $at, 0x4248
    ctx->r1 = S32(0X4248 << 16);
    // 0x803F4B64: andi        $t1, $t0, 0x1
    ctx->r9 = ctx->r8 & 0X1;
    // 0x803F4B68: beq         $t1, $zero, L_803F4BBC
    if (ctx->r9 == 0) {
        // 0x803F4B6C: nop
    
            goto L_803F4BBC;
    }
    // 0x803F4B6C: nop

    // 0x803F4B70: lwc1        $f4, 0x84($a2)
    ctx->f4.u32l = MEM_W(ctx->r6, 0X84);
    // 0x803F4B74: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x803F4B78: lui         $at, 0x803F
    ctx->r1 = S32(0X803F << 16);
    // 0x803F4B7C: c.lt.s      $f4, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f4.fl < ctx->f8.fl;
    // 0x803F4B80: nop

    // 0x803F4B84: bc1f        L_803F4BBC
    if (!c1cs) {
        // 0x803F4B88: nop
    
            goto L_803F4BBC;
    }
    // 0x803F4B88: nop

    // 0x803F4B8C: lwc1        $f18, 0x50($a2)
    ctx->f18.u32l = MEM_W(ctx->r6, 0X50);
    // 0x803F4B90: lwc1        $f17, 0x7D70($at)
    ctx->f_odd[(17 - 1) * 2] = MEM_W(ctx->r1, 0X7D70);
    // 0x803F4B94: lwc1        $f16, 0x7D74($at)
    ctx->f16.u32l = MEM_W(ctx->r1, 0X7D74);
    // 0x803F4B98: cvt.d.s     $f10, $f18
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.fl); 
    ctx->f10.d = CVT_D_S(ctx->f18.fl);
    // 0x803F4B9C: c.lt.d      $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f16.d < ctx->f10.d;
    // 0x803F4BA0: nop

    // 0x803F4BA4: bc1f        L_803F4BBC
    if (!c1cs) {
        // 0x803F4BA8: nop
    
            goto L_803F4BBC;
    }
    // 0x803F4BA8: nop

    // 0x803F4BAC: jal         0x803F3A98
    // 0x803F4BB0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_803F0000_menu_func_803F3A98(rdram, ctx);
        goto after_13;
    // 0x803F4BB0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_13:
    // 0x803F4BB4: b           L_803F4D78
    // 0x803F4BB8: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_803F4D78;
    // 0x803F4BB8: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_803F4BBC:
    // 0x803F4BBC: jal         0x803F401C
    // 0x803F4BC0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_803F0000_menu_func_803F401C(rdram, ctx);
        goto after_14;
    // 0x803F4BC0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_14:
    // 0x803F4BC4: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x803F4BC8: sh          $t2, 0x8A($sp)
    MEM_H(0X8A, ctx->r29) = ctx->r10;
    // 0x803F4BCC: lw          $v0, 0xC8($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XC8);
    // 0x803F4BD0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x803F4BD4: lhu         $t3, 0x95C($v0)
    ctx->r11 = MEM_HU(ctx->r2, 0X95C);
    // 0x803F4BD8: nop

    // 0x803F4BDC: ori         $t4, $t3, 0x2800
    ctx->r12 = ctx->r11 | 0X2800;
    // 0x803F4BE0: jal         0x803F3D10
    // 0x803F4BE4: sh          $t4, 0x95C($v0)
    MEM_H(0X95C, ctx->r2) = ctx->r12;
    ovl_803F0000_menu_func_803F3D10(rdram, ctx);
        goto after_15;
    // 0x803F4BE4: sh          $t4, 0x95C($v0)
    MEM_H(0X95C, ctx->r2) = ctx->r12;
    after_15:
    // 0x803F4BE8: b           L_803F4D78
    // 0x803F4BEC: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_803F4D78;
    // 0x803F4BEC: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x803F4BF0: lhu         $t5, 0x95C($v0)
    ctx->r13 = MEM_HU(ctx->r2, 0X95C);
    // 0x803F4BF4: addiu       $t7, $zero, 0x8
    ctx->r15 = ADD32(0, 0X8);
    // 0x803F4BF8: andi        $t6, $t5, 0xFFFE
    ctx->r14 = ctx->r13 & 0XFFFE;
    // 0x803F4BFC: sh          $t6, 0x95C($v0)
    MEM_H(0X95C, ctx->r2) = ctx->r14;
    // 0x803F4C00: sh          $t7, 0x8A($sp)
    MEM_H(0X8A, ctx->r29) = ctx->r15;
    // 0x803F4C04: lw          $v0, 0xC8($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XC8);
    // 0x803F4C08: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x803F4C0C: lw          $t8, 0x958($v0)
    ctx->r24 = MEM_W(ctx->r2, 0X958);
    // 0x803F4C10: addiu       $t4, $zero, 0x13
    ctx->r12 = ADD32(0, 0X13);
    // 0x803F4C14: beq         $t8, $zero, L_803F4C68
    if (ctx->r24 == 0) {
        // 0x803F4C18: nop
    
            goto L_803F4C68;
    }
    // 0x803F4C18: nop

    // 0x803F4C1C: jal         0x8006B35C
    // 0x803F4C20: addiu       $a1, $sp, 0x38
    ctx->r5 = ADD32(ctx->r29, 0X38);
    func_8006B35C(rdram, ctx);
        goto after_16;
    // 0x803F4C20: addiu       $a1, $sp, 0x38
    ctx->r5 = ADD32(ctx->r29, 0X38);
    after_16:
    // 0x803F4C24: lw          $t9, 0xC8($s0)
    ctx->r25 = MEM_W(ctx->r16, 0XC8);
    // 0x803F4C28: addiu       $a1, $zero, 0x13
    ctx->r5 = ADD32(0, 0X13);
    // 0x803F4C2C: lw          $t0, 0x958($t9)
    ctx->r8 = MEM_W(ctx->r25, 0X958);
    // 0x803F4C30: addiu       $a2, $sp, 0x38
    ctx->r6 = ADD32(ctx->r29, 0X38);
    // 0x803F4C34: lwc1        $f12, 0x84($t0)
    ctx->f12.u32l = MEM_W(ctx->r8, 0X84);
    // 0x803F4C38: jal         0x803F0000
    // 0x803F4C3C: addiu       $a3, $sp, 0x84
    ctx->r7 = ADD32(ctx->r29, 0X84);
    ovl_803F0000_menu_func_803F0000(rdram, ctx);
        goto after_17;
    // 0x803F4C3C: addiu       $a3, $sp, 0x84
    ctx->r7 = ADD32(ctx->r29, 0X84);
    after_17:
    // 0x803F4C40: lw          $t1, 0xC8($s0)
    ctx->r9 = MEM_W(ctx->r16, 0XC8);
    // 0x803F4C44: nop

    // 0x803F4C48: sh          $v0, 0x960($t1)
    MEM_H(0X960, ctx->r9) = ctx->r2;
    // 0x803F4C4C: lw          $t2, 0xC8($s0)
    ctx->r10 = MEM_W(ctx->r16, 0XC8);
    // 0x803F4C50: nop

    // 0x803F4C54: lw          $t3, 0x958($t2)
    ctx->r11 = MEM_W(ctx->r10, 0X958);
    // 0x803F4C58: nop

    // 0x803F4C5C: lwc1        $f6, 0x88($t3)
    ctx->f6.u32l = MEM_W(ctx->r11, 0X88);
    // 0x803F4C60: b           L_803F4C94
    // 0x803F4C64: swc1        $f6, 0xBC($s0)
    MEM_W(0XBC, ctx->r16) = ctx->f6.u32l;
        goto L_803F4C94;
    // 0x803F4C64: swc1        $f6, 0xBC($s0)
    MEM_W(0XBC, ctx->r16) = ctx->f6.u32l;
L_803F4C68:
    // 0x803F4C68: sh          $t4, 0x960($v0)
    MEM_H(0X960, ctx->r2) = ctx->r12;
    // 0x803F4C6C: lw          $t5, 0xC8($s0)
    ctx->r13 = MEM_W(ctx->r16, 0XC8);
    // 0x803F4C70: lui         $at, 0x803F
    ctx->r1 = S32(0X803F << 16);
    // 0x803F4C74: lw          $t6, 0x24($t5)
    ctx->r14 = MEM_W(ctx->r13, 0X24);
    // 0x803F4C78: lwc1        $f19, 0x7D78($at)
    ctx->f_odd[(19 - 1) * 2] = MEM_W(ctx->r1, 0X7D78);
    // 0x803F4C7C: lwc1        $f4, 0x8C0($t6)
    ctx->f4.u32l = MEM_W(ctx->r14, 0X8C0);
    // 0x803F4C80: lwc1        $f18, 0x7D7C($at)
    ctx->f18.u32l = MEM_W(ctx->r1, 0X7D7C);
    // 0x803F4C84: cvt.d.s     $f8, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f8.d = CVT_D_S(ctx->f4.fl);
    // 0x803F4C88: add.d       $f16, $f8, $f18
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f18.d); 
    ctx->f16.d = ctx->f8.d + ctx->f18.d;
    // 0x803F4C8C: cvt.s.d     $f10, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.d); 
    ctx->f10.fl = CVT_S_D(ctx->f16.d);
    // 0x803F4C90: swc1        $f10, 0xBC($s0)
    MEM_W(0XBC, ctx->r16) = ctx->f10.u32l;
L_803F4C94:
    // 0x803F4C94: lhu         $t7, 0x12($s0)
    ctx->r15 = MEM_HU(ctx->r16, 0X12);
    // 0x803F4C98: nop

    // 0x803F4C9C: ori         $t8, $t7, 0x4
    ctx->r24 = ctx->r15 | 0X4;
    // 0x803F4CA0: b           L_803F4D74
    // 0x803F4CA4: sh          $t8, 0x12($s0)
    MEM_H(0X12, ctx->r16) = ctx->r24;
        goto L_803F4D74;
    // 0x803F4CA4: sh          $t8, 0x12($s0)
    MEM_H(0X12, ctx->r16) = ctx->r24;
    // 0x803F4CA8: lui         $at, 0x4080
    ctx->r1 = S32(0X4080 << 16);
    // 0x803F4CAC: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    // 0x803F4CB0: lui         $at, 0x3FC0
    ctx->r1 = S32(0X3FC0 << 16);
    // 0x803F4CB4: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x803F4CB8: lui         $a2, 0x3E19
    ctx->r6 = S32(0X3E19 << 16);
    // 0x803F4CBC: lui         $a3, 0x3D4C
    ctx->r7 = S32(0X3D4C << 16);
    // 0x803F4CC0: addiu       $t9, $sp, 0x38
    ctx->r25 = ADD32(ctx->r29, 0X38);
    // 0x803F4CC4: sw          $t9, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r25;
    // 0x803F4CC8: ori         $a3, $a3, 0xCCCD
    ctx->r7 = ctx->r7 | 0XCCCD;
    // 0x803F4CCC: jal         0x8005743C
    // 0x803F4CD0: ori         $a2, $a2, 0x999A
    ctx->r6 = ctx->r6 | 0X999A;
    func_8005743C(rdram, ctx);
        goto after_18;
    // 0x803F4CD0: ori         $a2, $a2, 0x999A
    ctx->r6 = ctx->r6 | 0X999A;
    after_18:
    // 0x803F4CD4: lw          $t0, 0xC8($s0)
    ctx->r8 = MEM_W(ctx->r16, 0XC8);
    // 0x803F4CD8: addiu       $a1, $zero, 0x13
    ctx->r5 = ADD32(0, 0X13);
    // 0x803F4CDC: lw          $t1, 0x958($t0)
    ctx->r9 = MEM_W(ctx->r8, 0X958);
    // 0x803F4CE0: addiu       $a2, $sp, 0x38
    ctx->r6 = ADD32(ctx->r29, 0X38);
    // 0x803F4CE4: lwc1        $f12, 0x84($t1)
    ctx->f12.u32l = MEM_W(ctx->r9, 0X84);
    // 0x803F4CE8: jal         0x803F0000
    // 0x803F4CEC: addiu       $a3, $sp, 0x84
    ctx->r7 = ADD32(ctx->r29, 0X84);
    ovl_803F0000_menu_func_803F0000(rdram, ctx);
        goto after_19;
    // 0x803F4CEC: addiu       $a3, $sp, 0x84
    ctx->r7 = ADD32(ctx->r29, 0X84);
    after_19:
    // 0x803F4CF0: lw          $t2, 0xC8($s0)
    ctx->r10 = MEM_W(ctx->r16, 0XC8);
    // 0x803F4CF4: addiu       $t3, $zero, 0x1
    ctx->r11 = ADD32(0, 0X1);
    // 0x803F4CF8: sh          $v0, 0x960($t2)
    MEM_H(0X960, ctx->r10) = ctx->r2;
    // 0x803F4CFC: sh          $t3, 0x8A($sp)
    MEM_H(0X8A, ctx->r29) = ctx->r11;
    // 0x803F4D00: lw          $t4, 0xC8($s0)
    ctx->r12 = MEM_W(ctx->r16, 0XC8);
    // 0x803F4D04: lhu         $t6, 0x12($s0)
    ctx->r14 = MEM_HU(ctx->r16, 0X12);
    // 0x803F4D08: lw          $t5, 0x958($t4)
    ctx->r13 = MEM_W(ctx->r12, 0X958);
    // 0x803F4D0C: ori         $t7, $t6, 0x4
    ctx->r15 = ctx->r14 | 0X4;
    // 0x803F4D10: lwc1        $f6, 0x88($t5)
    ctx->f6.u32l = MEM_W(ctx->r13, 0X88);
    // 0x803F4D14: sh          $t7, 0x12($s0)
    MEM_H(0X12, ctx->r16) = ctx->r15;
    // 0x803F4D18: b           L_803F4D74
    // 0x803F4D1C: swc1        $f6, 0xBC($s0)
    MEM_W(0XBC, ctx->r16) = ctx->f6.u32l;
        goto L_803F4D74;
    // 0x803F4D1C: swc1        $f6, 0xBC($s0)
    MEM_W(0XBC, ctx->r16) = ctx->f6.u32l;
    // 0x803F4D20: jal         0x803F34D4
    // 0x803F4D24: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_803F0000_menu_func_803F34D4(rdram, ctx);
        goto after_20;
    // 0x803F4D24: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_20:
    // 0x803F4D28: b           L_803F4D78
    // 0x803F4D2C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_803F4D78;
    // 0x803F4D2C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x803F4D30: jal         0x803F3A98
    // 0x803F4D34: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_803F0000_menu_func_803F3A98(rdram, ctx);
        goto after_21;
    // 0x803F4D34: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_21:
    // 0x803F4D38: b           L_803F4D78
    // 0x803F4D3C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_803F4D78;
    // 0x803F4D3C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x803F4D40: jal         0x803F2A40
    // 0x803F4D44: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_803F0000_menu_func_803F2A40(rdram, ctx);
        goto after_22;
    // 0x803F4D44: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_22:
    // 0x803F4D48: bne         $v0, $zero, L_803F4D78
    if (ctx->r2 != 0) {
        // 0x803F4D4C: lw          $ra, 0x24($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X24);
            goto L_803F4D78;
    }
    // 0x803F4D4C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x803F4D50: jal         0x803F2464
    // 0x803F4D54: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_803F0000_menu_func_803F2464(rdram, ctx);
        goto after_23;
    // 0x803F4D54: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_23:
    // 0x803F4D58: b           L_803F4D78
    // 0x803F4D5C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_803F4D78;
    // 0x803F4D5C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x803F4D60: lhu         $t8, 0x12($s0)
    ctx->r24 = MEM_HU(ctx->r16, 0X12);
    // 0x803F4D64: mtc1        $zero, $f14
    ctx->f14.u32l = 0;
    // 0x803F4D68: ori         $t9, $t8, 0x8
    ctx->r25 = ctx->r24 | 0X8;
    // 0x803F4D6C: sh          $t9, 0x12($s0)
    MEM_H(0X12, ctx->r16) = ctx->r25;
    // 0x803F4D70: swc1        $f14, 0xAC($s0)
    MEM_W(0XAC, ctx->r16) = ctx->f14.u32l;
L_803F4D74:
    // 0x803F4D74: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_803F4D78:
    // 0x803F4D78: lhu         $v0, 0x8A($sp)
    ctx->r2 = MEM_HU(ctx->r29, 0X8A);
    // 0x803F4D7C: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x803F4D80: jr          $ra
    // 0x803F4D84: addiu       $sp, $sp, 0xD0
    ctx->r29 = ADD32(ctx->r29, 0XD0);
    return;
    // 0x803F4D84: addiu       $sp, $sp, 0xD0
    ctx->r29 = ADD32(ctx->r29, 0XD0);
;}
RECOMP_FUNC void ovl_803F0000_menu_func_803F48A0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803F48A0: c.lt.s      $f14, $f18
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f14.fl < ctx->f18.fl;
    // 0x803F48A4: nop

    // 0x803F48A8: bc1f        L_803F48B8
    if (!c1cs) {
        // 0x803F48AC: nop
    
            goto L_803F48B8;
    }
    // 0x803F48AC: nop

    // 0x803F48B0: b           L_803F48B8
    // 0x803F48B4: addiu       $v0, $zero, -0x3C
    ctx->r2 = ADD32(0, -0X3C);
        goto L_803F48B8;
    // 0x803F48B4: addiu       $v0, $zero, -0x3C
    ctx->r2 = ADD32(0, -0X3C);
L_803F48B8:
    // 0x803F48B8: mtc1        $v0, $f10
    ctx->f10.u32l = ctx->r2;
    // 0x803F48BC: mfc1        $a1, $f2
    ctx->r5 = (int32_t)ctx->f2.u32l;
    // 0x803F48C0: cvt.s.w     $f10, $f10
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 10);
    ctx->f10.fl = CVT_S_W(ctx->f10.u32l);
    // 0x803F48C4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x803F48C8: addiu       $a3, $sp, 0xB0
    ctx->r7 = ADD32(ctx->r29, 0XB0);
    // 0x803F48CC: mfc1        $a2, $f10
    ctx->r6 = (int32_t)ctx->f10.u32l;
    // 0x803F48D0: jal         0x80272B98
    // 0x803F48D4: nop

    LOOKUP_FUNC(0x80272B98)(rdram, ctx);
        goto after_0;
    // 0x803F48D4: nop

    after_0:
    // 0x803F48D8: lwc1        $f4, 0xB0($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0XB0);
    // 0x803F48DC: lui         $a2, 0x800B
    ctx->r6 = S32(0X800B << 16);
    // 0x803F48E0: swc1        $f4, 0xBC($s0)
    MEM_W(0XBC, ctx->r16) = ctx->f4.u32l;
    // 0x803F48E4: lwc1        $f12, 0xB4($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0XB4);
    // 0x803F48E8: lui         $a3, 0x800B
    ctx->r7 = S32(0X800B << 16);
    // 0x803F48EC: addiu       $a3, $a3, -0x53AC
    ctx->r7 = ADD32(ctx->r7, -0X53AC);
    // 0x803F48F0: addiu       $a2, $a2, -0x53C4
    ctx->r6 = ADD32(ctx->r6, -0X53C4);
    // 0x803F48F4: jal         0x803F0000
    // 0x803F48F8: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
    ovl_803F0000_menu_func_803F0000(rdram, ctx);
        goto after_1;
    // 0x803F48F8: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
    after_1:
    // 0x803F48FC: lw          $t5, 0xC8($s0)
    ctx->r13 = MEM_W(ctx->r16, 0XC8);
    // 0x803F4900: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x803F4904: jal         0x803F3D10
    // 0x803F4908: sh          $v0, 0x960($t5)
    MEM_H(0X960, ctx->r13) = ctx->r2;
    ovl_803F0000_menu_func_803F3D10(rdram, ctx);
        goto after_2;
    // 0x803F4908: sh          $v0, 0x960($t5)
    MEM_H(0X960, ctx->r13) = ctx->r2;
    after_2:
    // 0x803F490C: lw          $v0, 0xC8($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XC8);
    // 0x803F4910: nop

    // 0x803F4914: lh          $t6, 0x960($v0)
    ctx->r14 = MEM_H(ctx->r2, 0X960);
    // 0x803F4918: nop

    // 0x803F491C: addiu       $t7, $t6, -0x1
    ctx->r15 = ADD32(ctx->r14, -0X1);
    // 0x803F4920: b           L_803F4D74
    // 0x803F4924: sh          $t7, 0x960($v0)
    MEM_H(0X960, ctx->r2) = ctx->r15;
        goto L_803F4D74;
    // 0x803F4924: sh          $t7, 0x960($v0)
    MEM_H(0X960, ctx->r2) = ctx->r15;
    // 0x803F4928: lui         $at, 0x803F
    ctx->r1 = S32(0X803F << 16);
    // 0x803F492C: lwc1        $f6, 0x7D60($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X7D60);
    // 0x803F4930: addiu       $t8, $zero, 0xF
    ctx->r24 = ADD32(0, 0XF);
    // 0x803F4934: swc1        $f6, 0x940($v0)
    MEM_W(0X940, ctx->r2) = ctx->f6.u32l;
    // 0x803F4938: lw          $t9, 0xC8($s0)
    ctx->r25 = MEM_W(ctx->r16, 0XC8);
    // 0x803F493C: lui         $t0, 0x8009
    ctx->r8 = S32(0X8009 << 16);
    // 0x803F4940: sh          $t8, 0x938($t9)
    MEM_H(0X938, ctx->r25) = ctx->r24;
    // 0x803F4944: lw          $t0, 0x3B20($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X3B20);
    // 0x803F4948: mtc1        $zero, $f14
    ctx->f14.u32l = 0;
    // 0x803F494C: lwc1        $f8, 0x0($t0)
    ctx->f8.u32l = MEM_W(ctx->r8, 0X0);
    // 0x803F4950: addiu       $t1, $zero, 0x5C
    ctx->r9 = ADD32(0, 0X5C);
    // 0x803F4954: c.lt.s      $f14, $f8
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f14.fl < ctx->f8.fl;
    // 0x803F4958: addiu       $t8, $zero, -0x1F3
    ctx->r24 = ADD32(0, -0X1F3);
    // 0x803F495C: bc1f        L_803F4970
    if (!c1cs) {
        // 0x803F4960: addiu       $t7, $zero, 0x1F3
        ctx->r15 = ADD32(0, 0X1F3);
            goto L_803F4970;
    }
    // 0x803F4960: addiu       $t7, $zero, 0x1F3
    ctx->r15 = ADD32(0, 0X1F3);
    // 0x803F4964: lw          $t2, 0xC8($s0)
    ctx->r10 = MEM_W(ctx->r16, 0XC8);
    // 0x803F4968: b           L_803F497C
    // 0x803F496C: sh          $t1, 0x93E($t2)
    MEM_H(0X93E, ctx->r10) = ctx->r9;
        goto L_803F497C;
    // 0x803F496C: sh          $t1, 0x93E($t2)
    MEM_H(0X93E, ctx->r10) = ctx->r9;
L_803F4970:
    // 0x803F4970: lw          $t4, 0xC8($s0)
    ctx->r12 = MEM_W(ctx->r16, 0XC8);
    // 0x803F4974: addiu       $t3, $zero, -0x5C
    ctx->r11 = ADD32(0, -0X5C);
    // 0x803F4978: sh          $t3, 0x93E($t4)
    MEM_H(0X93E, ctx->r12) = ctx->r11;
L_803F497C:
    // 0x803F497C: lw          $v0, 0xC8($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XC8);
    // 0x803F4980: nop

    // 0x803F4984: lhu         $t5, 0x8($v0)
    ctx->r13 = MEM_HU(ctx->r2, 0X8);
    // 0x803F4988: nop

    // 0x803F498C: andi        $t6, $t5, 0x1
    ctx->r14 = ctx->r13 & 0X1;
    // 0x803F4990: beq         $t6, $zero, L_803F49A0
    if (ctx->r14 == 0) {
        // 0x803F4994: nop
    
            goto L_803F49A0;
    }
    // 0x803F4994: nop

    // 0x803F4998: b           L_803F49A4
    // 0x803F499C: sh          $t7, 0x93C($v0)
    MEM_H(0X93C, ctx->r2) = ctx->r15;
        goto L_803F49A4;
    // 0x803F499C: sh          $t7, 0x93C($v0)
    MEM_H(0X93C, ctx->r2) = ctx->r15;
L_803F49A0:
    // 0x803F49A0: sh          $t8, 0x93C($v0)
    MEM_H(0X93C, ctx->r2) = ctx->r24;
L_803F49A4:
    // 0x803F49A4: lw          $t9, 0xC8($s0)
    ctx->r25 = MEM_W(ctx->r16, 0XC8);
    // 0x803F49A8: b           L_803F4D74
    // 0x803F49AC: sh          $zero, 0x948($t9)
    MEM_H(0X948, ctx->r25) = 0;
        goto L_803F4D74;
    // 0x803F49AC: sh          $zero, 0x948($t9)
    MEM_H(0X948, ctx->r25) = 0;
    // 0x803F49B0: lhu         $t0, 0x95C($v0)
    ctx->r8 = MEM_HU(ctx->r2, 0X95C);
    // 0x803F49B4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x803F49B8: andi        $t1, $t0, 0xFFFC
    ctx->r9 = ctx->r8 & 0XFFFC;
    // 0x803F49BC: jal         0x803F0EF0
    // 0x803F49C0: sh          $t1, 0x95C($v0)
    MEM_H(0X95C, ctx->r2) = ctx->r9;
    ovl_803F0000_menu_func_803F0EF0(rdram, ctx);
        goto after_3;
    // 0x803F49C0: sh          $t1, 0x95C($v0)
    MEM_H(0X95C, ctx->r2) = ctx->r9;
    after_3:
    // 0x803F49C4: beq         $v0, $zero, L_803F49E8
    if (ctx->r2 == 0) {
        // 0x803F49C8: addiu       $t4, $zero, 0x4000
        ctx->r12 = ADD32(0, 0X4000);
            goto L_803F49E8;
    }
    // 0x803F49C8: addiu       $t4, $zero, 0x4000
    ctx->r12 = ADD32(0, 0X4000);
    // 0x803F49CC: lhu         $t2, 0x12($s0)
    ctx->r10 = MEM_HU(ctx->r16, 0X12);
    // 0x803F49D0: lwc1        $f16, 0x88($v0)
    ctx->f16.u32l = MEM_W(ctx->r2, 0X88);
    // 0x803F49D4: ori         $t3, $t2, 0x4
    ctx->r11 = ctx->r10 | 0X4;
    // 0x803F49D8: sh          $t3, 0x12($s0)
    MEM_H(0X12, ctx->r16) = ctx->r11;
    // 0x803F49DC: swc1        $f16, 0xBC($s0)
    MEM_W(0XBC, ctx->r16) = ctx->f16.u32l;
    // 0x803F49E0: b           L_803F4D74
    // 0x803F49E4: sh          $t4, 0x8A($sp)
    MEM_H(0X8A, ctx->r29) = ctx->r12;
        goto L_803F4D74;
    // 0x803F49E4: sh          $t4, 0x8A($sp)
    MEM_H(0X8A, ctx->r29) = ctx->r12;
L_803F49E8:
    // 0x803F49E8: jal         0x803F401C
    // 0x803F49EC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_803F0000_menu_func_803F401C(rdram, ctx);
        goto after_4;
    // 0x803F49EC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_4:
    // 0x803F49F0: lw          $v0, 0xC8($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XC8);
    // 0x803F49F4: addiu       $t7, $zero, 0x4
    ctx->r15 = ADD32(0, 0X4);
    // 0x803F49F8: lhu         $t5, 0x95C($v0)
    ctx->r13 = MEM_HU(ctx->r2, 0X95C);
    // 0x803F49FC: nop

    // 0x803F4A00: ori         $t6, $t5, 0x800
    ctx->r14 = ctx->r13 | 0X800;
    // 0x803F4A04: sh          $t6, 0x95C($v0)
    MEM_H(0X95C, ctx->r2) = ctx->r14;
    // 0x803F4A08: b           L_803F4D74
    // 0x803F4A0C: sh          $t7, 0x8A($sp)
    MEM_H(0X8A, ctx->r29) = ctx->r15;
        goto L_803F4D74;
    // 0x803F4A0C: sh          $t7, 0x8A($sp)
    MEM_H(0X8A, ctx->r29) = ctx->r15;
    // 0x803F4A10: lui         $t8, 0x8028
    ctx->r24 = S32(0X8028 << 16);
    // 0x803F4A14: lh          $t8, -0x1B60($t8)
    ctx->r24 = MEM_H(ctx->r24, -0X1B60);
    // 0x803F4A18: lui         $at, 0x4248
    ctx->r1 = S32(0X4248 << 16);
    // 0x803F4A1C: andi        $t9, $t8, 0x1
    ctx->r25 = ctx->r24 & 0X1;
    // 0x803F4A20: beq         $t9, $zero, L_803F4A74
    if (ctx->r25 == 0) {
        // 0x803F4A24: nop
    
            goto L_803F4A74;
    }
    // 0x803F4A24: nop

    // 0x803F4A28: lwc1        $f18, 0x84($a2)
    ctx->f18.u32l = MEM_W(ctx->r6, 0X84);
    // 0x803F4A2C: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x803F4A30: lui         $at, 0x803F
    ctx->r1 = S32(0X803F << 16);
    // 0x803F4A34: c.lt.s      $f18, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f18.fl < ctx->f10.fl;
    // 0x803F4A38: nop

    // 0x803F4A3C: bc1f        L_803F4A74
    if (!c1cs) {
        // 0x803F4A40: nop
    
            goto L_803F4A74;
    }
    // 0x803F4A40: nop

    // 0x803F4A44: lwc1        $f6, 0x50($a2)
    ctx->f6.u32l = MEM_W(ctx->r6, 0X50);
    // 0x803F4A48: lwc1        $f5, 0x7D68($at)
    ctx->f_odd[(5 - 1) * 2] = MEM_W(ctx->r1, 0X7D68);
    // 0x803F4A4C: lwc1        $f4, 0x7D6C($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X7D6C);
    // 0x803F4A50: cvt.d.s     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f8.d = CVT_D_S(ctx->f6.fl);
    // 0x803F4A54: c.lt.d      $f4, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f4.d < ctx->f8.d;
    // 0x803F4A58: nop

    // 0x803F4A5C: bc1f        L_803F4A74
    if (!c1cs) {
        // 0x803F4A60: nop
    
            goto L_803F4A74;
    }
    // 0x803F4A60: nop

    // 0x803F4A64: jal         0x803F3A98
    // 0x803F4A68: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_803F0000_menu_func_803F3A98(rdram, ctx);
        goto after_5;
    // 0x803F4A68: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_5:
    // 0x803F4A6C: b           L_803F4D78
    // 0x803F4A70: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_803F4D78;
    // 0x803F4A70: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_803F4A74:
    // 0x803F4A74: lhu         $t0, 0x95C($v0)
    ctx->r8 = MEM_HU(ctx->r2, 0X95C);
    // 0x803F4A78: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x803F4A7C: andi        $t1, $t0, 0xFFFE
    ctx->r9 = ctx->r8 & 0XFFFE;
    // 0x803F4A80: sh          $t1, 0x95C($v0)
    MEM_H(0X95C, ctx->r2) = ctx->r9;
    // 0x803F4A84: sh          $t2, 0x8A($sp)
    MEM_H(0X8A, ctx->r29) = ctx->r10;
    // 0x803F4A88: lhu         $t3, 0x12($s0)
    ctx->r11 = MEM_HU(ctx->r16, 0X12);
    // 0x803F4A8C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x803F4A90: ori         $t4, $t3, 0x4
    ctx->r12 = ctx->r11 | 0X4;
    // 0x803F4A94: jal         0x803F0EF0
    // 0x803F4A98: sh          $t4, 0x12($s0)
    MEM_H(0X12, ctx->r16) = ctx->r12;
    ovl_803F0000_menu_func_803F0EF0(rdram, ctx);
        goto after_6;
    // 0x803F4A98: sh          $t4, 0x12($s0)
    MEM_H(0X12, ctx->r16) = ctx->r12;
    after_6:
    // 0x803F4A9C: beq         $v0, $zero, L_803F4AEC
    if (ctx->r2 == 0) {
        // 0x803F4AA0: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_803F4AEC;
    }
    // 0x803F4AA0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x803F4AA4: lh          $a1, 0x2E($v0)
    ctx->r5 = MEM_H(ctx->r2, 0X2E);
    // 0x803F4AA8: sw          $v0, 0xCC($sp)
    MEM_W(0XCC, ctx->r29) = ctx->r2;
    // 0x803F4AAC: jal         0x803F3C88
    // 0x803F4AB0: addiu       $a2, $zero, 0x1A8
    ctx->r6 = ADD32(0, 0X1A8);
    ovl_803F0000_menu_func_803F3C88(rdram, ctx);
        goto after_7;
    // 0x803F4AB0: addiu       $a2, $zero, 0x1A8
    ctx->r6 = ADD32(0, 0X1A8);
    after_7:
    // 0x803F4AB4: lw          $v1, 0xCC($sp)
    ctx->r3 = MEM_W(ctx->r29, 0XCC);
    // 0x803F4AB8: mtc1        $v0, $f16
    ctx->f16.u32l = ctx->r2;
    // 0x803F4ABC: lh          $t5, 0x30($v1)
    ctx->r13 = MEM_H(ctx->r3, 0X30);
    // 0x803F4AC0: cvt.s.w     $f16, $f16
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    ctx->f16.fl = CVT_S_W(ctx->f16.u32l);
    // 0x803F4AC4: mtc1        $t5, $f18
    ctx->f18.u32l = ctx->r13;
    // 0x803F4AC8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x803F4ACC: cvt.s.w     $f18, $f18
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    ctx->f18.fl = CVT_S_W(ctx->f18.u32l);
    // 0x803F4AD0: mfc1        $a1, $f16
    ctx->r5 = (int32_t)ctx->f16.u32l;
    // 0x803F4AD4: addiu       $a3, $sp, 0xB0
    ctx->r7 = ADD32(ctx->r29, 0XB0);
    // 0x803F4AD8: mfc1        $a2, $f18
    ctx->r6 = (int32_t)ctx->f18.u32l;
    // 0x803F4ADC: jal         0x80272B98
    // 0x803F4AE0: nop

    LOOKUP_FUNC(0x80272B98)(rdram, ctx);
        goto after_8;
    // 0x803F4AE0: nop

    after_8:
    // 0x803F4AE4: b           L_803F4B20
    // 0x803F4AE8: lwc1        $f6, 0xB0($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0XB0);
        goto L_803F4B20;
    // 0x803F4AE8: lwc1        $f6, 0xB0($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0XB0);
L_803F4AEC:
    // 0x803F4AEC: lw          $t6, 0xC8($s0)
    ctx->r14 = MEM_W(ctx->r16, 0XC8);
    // 0x803F4AF0: mtc1        $zero, $f14
    ctx->f14.u32l = 0;
    // 0x803F4AF4: lw          $t7, 0x24($t6)
    ctx->r15 = MEM_W(ctx->r14, 0X24);
    // 0x803F4AF8: mfc1        $a2, $f14
    ctx->r6 = (int32_t)ctx->f14.u32l;
    // 0x803F4AFC: lh          $t8, 0x8BA($t7)
    ctx->r24 = MEM_H(ctx->r15, 0X8BA);
    // 0x803F4B00: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x803F4B04: mtc1        $t8, $f10
    ctx->f10.u32l = ctx->r24;
    // 0x803F4B08: addiu       $a3, $sp, 0xB0
    ctx->r7 = ADD32(ctx->r29, 0XB0);
    // 0x803F4B0C: cvt.s.w     $f10, $f10
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 10);
    ctx->f10.fl = CVT_S_W(ctx->f10.u32l);
    // 0x803F4B10: mfc1        $a1, $f10
    ctx->r5 = (int32_t)ctx->f10.u32l;
    // 0x803F4B14: jal         0x80272B98
    // 0x803F4B18: nop

    LOOKUP_FUNC(0x80272B98)(rdram, ctx);
        goto after_9;
    // 0x803F4B18: nop

    after_9:
    // 0x803F4B1C: lwc1        $f6, 0xB0($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0XB0);
L_803F4B20:
    // 0x803F4B20: lui         $a2, 0x800B
    ctx->r6 = S32(0X800B << 16);
    // 0x803F4B24: swc1        $f6, 0xBC($s0)
    MEM_W(0XBC, ctx->r16) = ctx->f6.u32l;
    // 0x803F4B28: lwc1        $f12, 0xB4($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0XB4);
    // 0x803F4B2C: lui         $a3, 0x800B
    ctx->r7 = S32(0X800B << 16);
    // 0x803F4B30: addiu       $a3, $a3, -0x53C8
    ctx->r7 = ADD32(ctx->r7, -0X53C8);
    // 0x803F4B34: addiu       $a2, $a2, -0x53E0
    ctx->r6 = ADD32(ctx->r6, -0X53E0);
    // 0x803F4B38: jal         0x803F0000
    // 0x803F4B3C: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
    ovl_803F0000_menu_func_803F0000(rdram, ctx);
        goto after_10;
    // 0x803F4B3C: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
    after_10:
    // 0x803F4B40: lw          $t9, 0xC8($s0)
    ctx->r25 = MEM_W(ctx->r16, 0XC8);
    // 0x803F4B44: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x803F4B48: jal         0x803F3D10
    // 0x803F4B4C: sh          $v0, 0x960($t9)
    MEM_H(0X960, ctx->r25) = ctx->r2;
    ovl_803F0000_menu_func_803F3D10(rdram, ctx);
        goto after_11;
    // 0x803F4B4C: sh          $v0, 0x960($t9)
    MEM_H(0X960, ctx->r25) = ctx->r2;
    after_11:
    // 0x803F4B50: b           L_803F4D78
    // 0x803F4B54: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_803F4D78;
    // 0x803F4B54: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x803F4B58: lui         $t0, 0x8028
    ctx->r8 = S32(0X8028 << 16);
    // 0x803F4B5C: lh          $t0, -0x1B60($t0)
    ctx->r8 = MEM_H(ctx->r8, -0X1B60);
    // 0x803F4B60: lui         $at, 0x4248
    ctx->r1 = S32(0X4248 << 16);
    // 0x803F4B64: andi        $t1, $t0, 0x1
    ctx->r9 = ctx->r8 & 0X1;
    // 0x803F4B68: beq         $t1, $zero, L_803F4BBC
    if (ctx->r9 == 0) {
        // 0x803F4B6C: nop
    
            goto L_803F4BBC;
    }
    // 0x803F4B6C: nop

    // 0x803F4B70: lwc1        $f4, 0x84($a2)
    ctx->f4.u32l = MEM_W(ctx->r6, 0X84);
    // 0x803F4B74: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x803F4B78: lui         $at, 0x803F
    ctx->r1 = S32(0X803F << 16);
    // 0x803F4B7C: c.lt.s      $f4, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f4.fl < ctx->f8.fl;
    // 0x803F4B80: nop

    // 0x803F4B84: bc1f        L_803F4BBC
    if (!c1cs) {
        // 0x803F4B88: nop
    
            goto L_803F4BBC;
    }
    // 0x803F4B88: nop

    // 0x803F4B8C: lwc1        $f18, 0x50($a2)
    ctx->f18.u32l = MEM_W(ctx->r6, 0X50);
    // 0x803F4B90: lwc1        $f17, 0x7D70($at)
    ctx->f_odd[(17 - 1) * 2] = MEM_W(ctx->r1, 0X7D70);
    // 0x803F4B94: lwc1        $f16, 0x7D74($at)
    ctx->f16.u32l = MEM_W(ctx->r1, 0X7D74);
    // 0x803F4B98: cvt.d.s     $f10, $f18
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.fl); 
    ctx->f10.d = CVT_D_S(ctx->f18.fl);
    // 0x803F4B9C: c.lt.d      $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f16.d < ctx->f10.d;
    // 0x803F4BA0: nop

    // 0x803F4BA4: bc1f        L_803F4BBC
    if (!c1cs) {
        // 0x803F4BA8: nop
    
            goto L_803F4BBC;
    }
    // 0x803F4BA8: nop

    // 0x803F4BAC: jal         0x803F3A98
    // 0x803F4BB0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_803F0000_menu_func_803F3A98(rdram, ctx);
        goto after_12;
    // 0x803F4BB0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_12:
    // 0x803F4BB4: b           L_803F4D78
    // 0x803F4BB8: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_803F4D78;
    // 0x803F4BB8: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_803F4BBC:
    // 0x803F4BBC: jal         0x803F401C
    // 0x803F4BC0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_803F0000_menu_func_803F401C(rdram, ctx);
        goto after_13;
    // 0x803F4BC0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_13:
    // 0x803F4BC4: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x803F4BC8: sh          $t2, 0x8A($sp)
    MEM_H(0X8A, ctx->r29) = ctx->r10;
    // 0x803F4BCC: lw          $v0, 0xC8($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XC8);
    // 0x803F4BD0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x803F4BD4: lhu         $t3, 0x95C($v0)
    ctx->r11 = MEM_HU(ctx->r2, 0X95C);
    // 0x803F4BD8: nop

    // 0x803F4BDC: ori         $t4, $t3, 0x2800
    ctx->r12 = ctx->r11 | 0X2800;
    // 0x803F4BE0: jal         0x803F3D10
    // 0x803F4BE4: sh          $t4, 0x95C($v0)
    MEM_H(0X95C, ctx->r2) = ctx->r12;
    ovl_803F0000_menu_func_803F3D10(rdram, ctx);
        goto after_14;
    // 0x803F4BE4: sh          $t4, 0x95C($v0)
    MEM_H(0X95C, ctx->r2) = ctx->r12;
    after_14:
    // 0x803F4BE8: b           L_803F4D78
    // 0x803F4BEC: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_803F4D78;
    // 0x803F4BEC: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x803F4BF0: lhu         $t5, 0x95C($v0)
    ctx->r13 = MEM_HU(ctx->r2, 0X95C);
    // 0x803F4BF4: addiu       $t7, $zero, 0x8
    ctx->r15 = ADD32(0, 0X8);
    // 0x803F4BF8: andi        $t6, $t5, 0xFFFE
    ctx->r14 = ctx->r13 & 0XFFFE;
    // 0x803F4BFC: sh          $t6, 0x95C($v0)
    MEM_H(0X95C, ctx->r2) = ctx->r14;
    // 0x803F4C00: sh          $t7, 0x8A($sp)
    MEM_H(0X8A, ctx->r29) = ctx->r15;
    // 0x803F4C04: lw          $v0, 0xC8($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XC8);
    // 0x803F4C08: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x803F4C0C: lw          $t8, 0x958($v0)
    ctx->r24 = MEM_W(ctx->r2, 0X958);
    // 0x803F4C10: addiu       $t4, $zero, 0x13
    ctx->r12 = ADD32(0, 0X13);
    // 0x803F4C14: beq         $t8, $zero, L_803F4C68
    if (ctx->r24 == 0) {
        // 0x803F4C18: nop
    
            goto L_803F4C68;
    }
    // 0x803F4C18: nop

    // 0x803F4C1C: jal         0x8006B35C
    // 0x803F4C20: addiu       $a1, $sp, 0x38
    ctx->r5 = ADD32(ctx->r29, 0X38);
    func_8006B35C(rdram, ctx);
        goto after_15;
    // 0x803F4C20: addiu       $a1, $sp, 0x38
    ctx->r5 = ADD32(ctx->r29, 0X38);
    after_15:
    // 0x803F4C24: lw          $t9, 0xC8($s0)
    ctx->r25 = MEM_W(ctx->r16, 0XC8);
    // 0x803F4C28: addiu       $a1, $zero, 0x13
    ctx->r5 = ADD32(0, 0X13);
    // 0x803F4C2C: lw          $t0, 0x958($t9)
    ctx->r8 = MEM_W(ctx->r25, 0X958);
    // 0x803F4C30: addiu       $a2, $sp, 0x38
    ctx->r6 = ADD32(ctx->r29, 0X38);
    // 0x803F4C34: lwc1        $f12, 0x84($t0)
    ctx->f12.u32l = MEM_W(ctx->r8, 0X84);
    // 0x803F4C38: jal         0x803F0000
    // 0x803F4C3C: addiu       $a3, $sp, 0x84
    ctx->r7 = ADD32(ctx->r29, 0X84);
    ovl_803F0000_menu_func_803F0000(rdram, ctx);
        goto after_16;
    // 0x803F4C3C: addiu       $a3, $sp, 0x84
    ctx->r7 = ADD32(ctx->r29, 0X84);
    after_16:
    // 0x803F4C40: lw          $t1, 0xC8($s0)
    ctx->r9 = MEM_W(ctx->r16, 0XC8);
    // 0x803F4C44: nop

    // 0x803F4C48: sh          $v0, 0x960($t1)
    MEM_H(0X960, ctx->r9) = ctx->r2;
    // 0x803F4C4C: lw          $t2, 0xC8($s0)
    ctx->r10 = MEM_W(ctx->r16, 0XC8);
    // 0x803F4C50: nop

    // 0x803F4C54: lw          $t3, 0x958($t2)
    ctx->r11 = MEM_W(ctx->r10, 0X958);
    // 0x803F4C58: nop

    // 0x803F4C5C: lwc1        $f6, 0x88($t3)
    ctx->f6.u32l = MEM_W(ctx->r11, 0X88);
    // 0x803F4C60: b           L_803F4C94
    // 0x803F4C64: swc1        $f6, 0xBC($s0)
    MEM_W(0XBC, ctx->r16) = ctx->f6.u32l;
        goto L_803F4C94;
    // 0x803F4C64: swc1        $f6, 0xBC($s0)
    MEM_W(0XBC, ctx->r16) = ctx->f6.u32l;
L_803F4C68:
    // 0x803F4C68: sh          $t4, 0x960($v0)
    MEM_H(0X960, ctx->r2) = ctx->r12;
    // 0x803F4C6C: lw          $t5, 0xC8($s0)
    ctx->r13 = MEM_W(ctx->r16, 0XC8);
    // 0x803F4C70: lui         $at, 0x803F
    ctx->r1 = S32(0X803F << 16);
    // 0x803F4C74: lw          $t6, 0x24($t5)
    ctx->r14 = MEM_W(ctx->r13, 0X24);
    // 0x803F4C78: lwc1        $f19, 0x7D78($at)
    ctx->f_odd[(19 - 1) * 2] = MEM_W(ctx->r1, 0X7D78);
    // 0x803F4C7C: lwc1        $f4, 0x8C0($t6)
    ctx->f4.u32l = MEM_W(ctx->r14, 0X8C0);
    // 0x803F4C80: lwc1        $f18, 0x7D7C($at)
    ctx->f18.u32l = MEM_W(ctx->r1, 0X7D7C);
    // 0x803F4C84: cvt.d.s     $f8, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f8.d = CVT_D_S(ctx->f4.fl);
    // 0x803F4C88: add.d       $f16, $f8, $f18
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f18.d); 
    ctx->f16.d = ctx->f8.d + ctx->f18.d;
    // 0x803F4C8C: cvt.s.d     $f10, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.d); 
    ctx->f10.fl = CVT_S_D(ctx->f16.d);
    // 0x803F4C90: swc1        $f10, 0xBC($s0)
    MEM_W(0XBC, ctx->r16) = ctx->f10.u32l;
L_803F4C94:
    // 0x803F4C94: lhu         $t7, 0x12($s0)
    ctx->r15 = MEM_HU(ctx->r16, 0X12);
    // 0x803F4C98: nop

    // 0x803F4C9C: ori         $t8, $t7, 0x4
    ctx->r24 = ctx->r15 | 0X4;
    // 0x803F4CA0: b           L_803F4D74
    // 0x803F4CA4: sh          $t8, 0x12($s0)
    MEM_H(0X12, ctx->r16) = ctx->r24;
        goto L_803F4D74;
    // 0x803F4CA4: sh          $t8, 0x12($s0)
    MEM_H(0X12, ctx->r16) = ctx->r24;
    // 0x803F4CA8: lui         $at, 0x4080
    ctx->r1 = S32(0X4080 << 16);
    // 0x803F4CAC: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    // 0x803F4CB0: lui         $at, 0x3FC0
    ctx->r1 = S32(0X3FC0 << 16);
    // 0x803F4CB4: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x803F4CB8: lui         $a2, 0x3E19
    ctx->r6 = S32(0X3E19 << 16);
    // 0x803F4CBC: lui         $a3, 0x3D4C
    ctx->r7 = S32(0X3D4C << 16);
    // 0x803F4CC0: addiu       $t9, $sp, 0x38
    ctx->r25 = ADD32(ctx->r29, 0X38);
    // 0x803F4CC4: sw          $t9, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r25;
    // 0x803F4CC8: ori         $a3, $a3, 0xCCCD
    ctx->r7 = ctx->r7 | 0XCCCD;
    // 0x803F4CCC: jal         0x8005743C
    // 0x803F4CD0: ori         $a2, $a2, 0x999A
    ctx->r6 = ctx->r6 | 0X999A;
    func_8005743C(rdram, ctx);
        goto after_17;
    // 0x803F4CD0: ori         $a2, $a2, 0x999A
    ctx->r6 = ctx->r6 | 0X999A;
    after_17:
    // 0x803F4CD4: lw          $t0, 0xC8($s0)
    ctx->r8 = MEM_W(ctx->r16, 0XC8);
    // 0x803F4CD8: addiu       $a1, $zero, 0x13
    ctx->r5 = ADD32(0, 0X13);
    // 0x803F4CDC: lw          $t1, 0x958($t0)
    ctx->r9 = MEM_W(ctx->r8, 0X958);
    // 0x803F4CE0: addiu       $a2, $sp, 0x38
    ctx->r6 = ADD32(ctx->r29, 0X38);
    // 0x803F4CE4: lwc1        $f12, 0x84($t1)
    ctx->f12.u32l = MEM_W(ctx->r9, 0X84);
    // 0x803F4CE8: jal         0x803F0000
    // 0x803F4CEC: addiu       $a3, $sp, 0x84
    ctx->r7 = ADD32(ctx->r29, 0X84);
    ovl_803F0000_menu_func_803F0000(rdram, ctx);
        goto after_18;
    // 0x803F4CEC: addiu       $a3, $sp, 0x84
    ctx->r7 = ADD32(ctx->r29, 0X84);
    after_18:
    // 0x803F4CF0: lw          $t2, 0xC8($s0)
    ctx->r10 = MEM_W(ctx->r16, 0XC8);
    // 0x803F4CF4: addiu       $t3, $zero, 0x1
    ctx->r11 = ADD32(0, 0X1);
    // 0x803F4CF8: sh          $v0, 0x960($t2)
    MEM_H(0X960, ctx->r10) = ctx->r2;
    // 0x803F4CFC: sh          $t3, 0x8A($sp)
    MEM_H(0X8A, ctx->r29) = ctx->r11;
    // 0x803F4D00: lw          $t4, 0xC8($s0)
    ctx->r12 = MEM_W(ctx->r16, 0XC8);
    // 0x803F4D04: lhu         $t6, 0x12($s0)
    ctx->r14 = MEM_HU(ctx->r16, 0X12);
    // 0x803F4D08: lw          $t5, 0x958($t4)
    ctx->r13 = MEM_W(ctx->r12, 0X958);
    // 0x803F4D0C: ori         $t7, $t6, 0x4
    ctx->r15 = ctx->r14 | 0X4;
    // 0x803F4D10: lwc1        $f6, 0x88($t5)
    ctx->f6.u32l = MEM_W(ctx->r13, 0X88);
    // 0x803F4D14: sh          $t7, 0x12($s0)
    MEM_H(0X12, ctx->r16) = ctx->r15;
    // 0x803F4D18: b           L_803F4D74
    // 0x803F4D1C: swc1        $f6, 0xBC($s0)
    MEM_W(0XBC, ctx->r16) = ctx->f6.u32l;
        goto L_803F4D74;
    // 0x803F4D1C: swc1        $f6, 0xBC($s0)
    MEM_W(0XBC, ctx->r16) = ctx->f6.u32l;
    // 0x803F4D20: jal         0x803F34D4
    // 0x803F4D24: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_803F0000_menu_func_803F34D4(rdram, ctx);
        goto after_19;
    // 0x803F4D24: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_19:
    // 0x803F4D28: b           L_803F4D78
    // 0x803F4D2C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_803F4D78;
    // 0x803F4D2C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x803F4D30: jal         0x803F3A98
    // 0x803F4D34: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_803F0000_menu_func_803F3A98(rdram, ctx);
        goto after_20;
    // 0x803F4D34: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_20:
    // 0x803F4D38: b           L_803F4D78
    // 0x803F4D3C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_803F4D78;
    // 0x803F4D3C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x803F4D40: jal         0x803F2A40
    // 0x803F4D44: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_803F0000_menu_func_803F2A40(rdram, ctx);
        goto after_21;
    // 0x803F4D44: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_21:
    // 0x803F4D48: bne         $v0, $zero, L_803F4D78
    if (ctx->r2 != 0) {
        // 0x803F4D4C: lw          $ra, 0x24($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X24);
            goto L_803F4D78;
    }
    // 0x803F4D4C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x803F4D50: jal         0x803F2464
    // 0x803F4D54: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_803F0000_menu_func_803F2464(rdram, ctx);
        goto after_22;
    // 0x803F4D54: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_22:
    // 0x803F4D58: b           L_803F4D78
    // 0x803F4D5C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_803F4D78;
    // 0x803F4D5C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x803F4D60: lhu         $t8, 0x12($s0)
    ctx->r24 = MEM_HU(ctx->r16, 0X12);
    // 0x803F4D64: mtc1        $zero, $f14
    ctx->f14.u32l = 0;
    // 0x803F4D68: ori         $t9, $t8, 0x8
    ctx->r25 = ctx->r24 | 0X8;
    // 0x803F4D6C: sh          $t9, 0x12($s0)
    MEM_H(0X12, ctx->r16) = ctx->r25;
    // 0x803F4D70: swc1        $f14, 0xAC($s0)
    MEM_W(0XAC, ctx->r16) = ctx->f14.u32l;
L_803F4D74:
    // 0x803F4D74: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_803F4D78:
    // 0x803F4D78: lhu         $v0, 0x8A($sp)
    ctx->r2 = MEM_HU(ctx->r29, 0X8A);
    // 0x803F4D7C: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x803F4D80: jr          $ra
    // 0x803F4D84: addiu       $sp, $sp, 0xD0
    ctx->r29 = ADD32(ctx->r29, 0XD0);
    return;
    // 0x803F4D84: addiu       $sp, $sp, 0xD0
    ctx->r29 = ADD32(ctx->r29, 0XD0);
;}
RECOMP_FUNC void ovl_803F0000_menu_func_803F4928(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803F4928: lui         $at, 0x803F
    ctx->r1 = S32(0X803F << 16);
    // 0x803F492C: lwc1        $f6, 0x7D60($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X7D60);
    // 0x803F4930: addiu       $t8, $zero, 0xF
    ctx->r24 = ADD32(0, 0XF);
    // 0x803F4934: swc1        $f6, 0x940($v0)
    MEM_W(0X940, ctx->r2) = ctx->f6.u32l;
    // 0x803F4938: lw          $t9, 0xC8($s0)
    ctx->r25 = MEM_W(ctx->r16, 0XC8);
    // 0x803F493C: lui         $t0, 0x8009
    ctx->r8 = S32(0X8009 << 16);
    // 0x803F4940: sh          $t8, 0x938($t9)
    MEM_H(0X938, ctx->r25) = ctx->r24;
    // 0x803F4944: lw          $t0, 0x3B20($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X3B20);
    // 0x803F4948: mtc1        $zero, $f14
    ctx->f14.u32l = 0;
    // 0x803F494C: lwc1        $f8, 0x0($t0)
    ctx->f8.u32l = MEM_W(ctx->r8, 0X0);
    // 0x803F4950: addiu       $t1, $zero, 0x5C
    ctx->r9 = ADD32(0, 0X5C);
    // 0x803F4954: c.lt.s      $f14, $f8
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f14.fl < ctx->f8.fl;
    // 0x803F4958: addiu       $t8, $zero, -0x1F3
    ctx->r24 = ADD32(0, -0X1F3);
    // 0x803F495C: bc1f        L_803F4970
    if (!c1cs) {
        // 0x803F4960: addiu       $t7, $zero, 0x1F3
        ctx->r15 = ADD32(0, 0X1F3);
            goto L_803F4970;
    }
    // 0x803F4960: addiu       $t7, $zero, 0x1F3
    ctx->r15 = ADD32(0, 0X1F3);
    // 0x803F4964: lw          $t2, 0xC8($s0)
    ctx->r10 = MEM_W(ctx->r16, 0XC8);
    // 0x803F4968: b           L_803F497C
    // 0x803F496C: sh          $t1, 0x93E($t2)
    MEM_H(0X93E, ctx->r10) = ctx->r9;
        goto L_803F497C;
    // 0x803F496C: sh          $t1, 0x93E($t2)
    MEM_H(0X93E, ctx->r10) = ctx->r9;
L_803F4970:
    // 0x803F4970: lw          $t4, 0xC8($s0)
    ctx->r12 = MEM_W(ctx->r16, 0XC8);
    // 0x803F4974: addiu       $t3, $zero, -0x5C
    ctx->r11 = ADD32(0, -0X5C);
    // 0x803F4978: sh          $t3, 0x93E($t4)
    MEM_H(0X93E, ctx->r12) = ctx->r11;
L_803F497C:
    // 0x803F497C: lw          $v0, 0xC8($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XC8);
    // 0x803F4980: nop

    // 0x803F4984: lhu         $t5, 0x8($v0)
    ctx->r13 = MEM_HU(ctx->r2, 0X8);
    // 0x803F4988: nop

    // 0x803F498C: andi        $t6, $t5, 0x1
    ctx->r14 = ctx->r13 & 0X1;
    // 0x803F4990: beq         $t6, $zero, L_803F49A0
    if (ctx->r14 == 0) {
        // 0x803F4994: nop
    
            goto L_803F49A0;
    }
    // 0x803F4994: nop

    // 0x803F4998: b           L_803F49A4
    // 0x803F499C: sh          $t7, 0x93C($v0)
    MEM_H(0X93C, ctx->r2) = ctx->r15;
        goto L_803F49A4;
    // 0x803F499C: sh          $t7, 0x93C($v0)
    MEM_H(0X93C, ctx->r2) = ctx->r15;
L_803F49A0:
    // 0x803F49A0: sh          $t8, 0x93C($v0)
    MEM_H(0X93C, ctx->r2) = ctx->r24;
L_803F49A4:
    // 0x803F49A4: lw          $t9, 0xC8($s0)
    ctx->r25 = MEM_W(ctx->r16, 0XC8);
    // 0x803F49A8: b           L_803F4D74
    // 0x803F49AC: sh          $zero, 0x948($t9)
    MEM_H(0X948, ctx->r25) = 0;
        goto L_803F4D74;
    // 0x803F49AC: sh          $zero, 0x948($t9)
    MEM_H(0X948, ctx->r25) = 0;
    // 0x803F49B0: lhu         $t0, 0x95C($v0)
    ctx->r8 = MEM_HU(ctx->r2, 0X95C);
    // 0x803F49B4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x803F49B8: andi        $t1, $t0, 0xFFFC
    ctx->r9 = ctx->r8 & 0XFFFC;
    // 0x803F49BC: jal         0x803F0EF0
    // 0x803F49C0: sh          $t1, 0x95C($v0)
    MEM_H(0X95C, ctx->r2) = ctx->r9;
    ovl_803F0000_menu_func_803F0EF0(rdram, ctx);
        goto after_0;
    // 0x803F49C0: sh          $t1, 0x95C($v0)
    MEM_H(0X95C, ctx->r2) = ctx->r9;
    after_0:
    // 0x803F49C4: beq         $v0, $zero, L_803F49E8
    if (ctx->r2 == 0) {
        // 0x803F49C8: addiu       $t4, $zero, 0x4000
        ctx->r12 = ADD32(0, 0X4000);
            goto L_803F49E8;
    }
    // 0x803F49C8: addiu       $t4, $zero, 0x4000
    ctx->r12 = ADD32(0, 0X4000);
    // 0x803F49CC: lhu         $t2, 0x12($s0)
    ctx->r10 = MEM_HU(ctx->r16, 0X12);
    // 0x803F49D0: lwc1        $f16, 0x88($v0)
    ctx->f16.u32l = MEM_W(ctx->r2, 0X88);
    // 0x803F49D4: ori         $t3, $t2, 0x4
    ctx->r11 = ctx->r10 | 0X4;
    // 0x803F49D8: sh          $t3, 0x12($s0)
    MEM_H(0X12, ctx->r16) = ctx->r11;
    // 0x803F49DC: swc1        $f16, 0xBC($s0)
    MEM_W(0XBC, ctx->r16) = ctx->f16.u32l;
    // 0x803F49E0: b           L_803F4D74
    // 0x803F49E4: sh          $t4, 0x8A($sp)
    MEM_H(0X8A, ctx->r29) = ctx->r12;
        goto L_803F4D74;
    // 0x803F49E4: sh          $t4, 0x8A($sp)
    MEM_H(0X8A, ctx->r29) = ctx->r12;
L_803F49E8:
    // 0x803F49E8: jal         0x803F401C
    // 0x803F49EC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_803F0000_menu_func_803F401C(rdram, ctx);
        goto after_1;
    // 0x803F49EC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
    // 0x803F49F0: lw          $v0, 0xC8($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XC8);
    // 0x803F49F4: addiu       $t7, $zero, 0x4
    ctx->r15 = ADD32(0, 0X4);
    // 0x803F49F8: lhu         $t5, 0x95C($v0)
    ctx->r13 = MEM_HU(ctx->r2, 0X95C);
    // 0x803F49FC: nop

    // 0x803F4A00: ori         $t6, $t5, 0x800
    ctx->r14 = ctx->r13 | 0X800;
    // 0x803F4A04: sh          $t6, 0x95C($v0)
    MEM_H(0X95C, ctx->r2) = ctx->r14;
    // 0x803F4A08: b           L_803F4D74
    // 0x803F4A0C: sh          $t7, 0x8A($sp)
    MEM_H(0X8A, ctx->r29) = ctx->r15;
        goto L_803F4D74;
    // 0x803F4A0C: sh          $t7, 0x8A($sp)
    MEM_H(0X8A, ctx->r29) = ctx->r15;
    // 0x803F4A10: lui         $t8, 0x8028
    ctx->r24 = S32(0X8028 << 16);
    // 0x803F4A14: lh          $t8, -0x1B60($t8)
    ctx->r24 = MEM_H(ctx->r24, -0X1B60);
    // 0x803F4A18: lui         $at, 0x4248
    ctx->r1 = S32(0X4248 << 16);
    // 0x803F4A1C: andi        $t9, $t8, 0x1
    ctx->r25 = ctx->r24 & 0X1;
    // 0x803F4A20: beq         $t9, $zero, L_803F4A74
    if (ctx->r25 == 0) {
        // 0x803F4A24: nop
    
            goto L_803F4A74;
    }
    // 0x803F4A24: nop

    // 0x803F4A28: lwc1        $f18, 0x84($a2)
    ctx->f18.u32l = MEM_W(ctx->r6, 0X84);
    // 0x803F4A2C: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x803F4A30: lui         $at, 0x803F
    ctx->r1 = S32(0X803F << 16);
    // 0x803F4A34: c.lt.s      $f18, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f18.fl < ctx->f10.fl;
    // 0x803F4A38: nop

    // 0x803F4A3C: bc1f        L_803F4A74
    if (!c1cs) {
        // 0x803F4A40: nop
    
            goto L_803F4A74;
    }
    // 0x803F4A40: nop

    // 0x803F4A44: lwc1        $f6, 0x50($a2)
    ctx->f6.u32l = MEM_W(ctx->r6, 0X50);
    // 0x803F4A48: lwc1        $f5, 0x7D68($at)
    ctx->f_odd[(5 - 1) * 2] = MEM_W(ctx->r1, 0X7D68);
    // 0x803F4A4C: lwc1        $f4, 0x7D6C($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X7D6C);
    // 0x803F4A50: cvt.d.s     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f8.d = CVT_D_S(ctx->f6.fl);
    // 0x803F4A54: c.lt.d      $f4, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f4.d < ctx->f8.d;
    // 0x803F4A58: nop

    // 0x803F4A5C: bc1f        L_803F4A74
    if (!c1cs) {
        // 0x803F4A60: nop
    
            goto L_803F4A74;
    }
    // 0x803F4A60: nop

    // 0x803F4A64: jal         0x803F3A98
    // 0x803F4A68: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_803F0000_menu_func_803F3A98(rdram, ctx);
        goto after_2;
    // 0x803F4A68: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_2:
    // 0x803F4A6C: b           L_803F4D78
    // 0x803F4A70: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_803F4D78;
    // 0x803F4A70: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_803F4A74:
    // 0x803F4A74: lhu         $t0, 0x95C($v0)
    ctx->r8 = MEM_HU(ctx->r2, 0X95C);
    // 0x803F4A78: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x803F4A7C: andi        $t1, $t0, 0xFFFE
    ctx->r9 = ctx->r8 & 0XFFFE;
    // 0x803F4A80: sh          $t1, 0x95C($v0)
    MEM_H(0X95C, ctx->r2) = ctx->r9;
    // 0x803F4A84: sh          $t2, 0x8A($sp)
    MEM_H(0X8A, ctx->r29) = ctx->r10;
    // 0x803F4A88: lhu         $t3, 0x12($s0)
    ctx->r11 = MEM_HU(ctx->r16, 0X12);
    // 0x803F4A8C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x803F4A90: ori         $t4, $t3, 0x4
    ctx->r12 = ctx->r11 | 0X4;
    // 0x803F4A94: jal         0x803F0EF0
    // 0x803F4A98: sh          $t4, 0x12($s0)
    MEM_H(0X12, ctx->r16) = ctx->r12;
    ovl_803F0000_menu_func_803F0EF0(rdram, ctx);
        goto after_3;
    // 0x803F4A98: sh          $t4, 0x12($s0)
    MEM_H(0X12, ctx->r16) = ctx->r12;
    after_3:
    // 0x803F4A9C: beq         $v0, $zero, L_803F4AEC
    if (ctx->r2 == 0) {
        // 0x803F4AA0: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_803F4AEC;
    }
    // 0x803F4AA0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x803F4AA4: lh          $a1, 0x2E($v0)
    ctx->r5 = MEM_H(ctx->r2, 0X2E);
    // 0x803F4AA8: sw          $v0, 0xCC($sp)
    MEM_W(0XCC, ctx->r29) = ctx->r2;
    // 0x803F4AAC: jal         0x803F3C88
    // 0x803F4AB0: addiu       $a2, $zero, 0x1A8
    ctx->r6 = ADD32(0, 0X1A8);
    ovl_803F0000_menu_func_803F3C88(rdram, ctx);
        goto after_4;
    // 0x803F4AB0: addiu       $a2, $zero, 0x1A8
    ctx->r6 = ADD32(0, 0X1A8);
    after_4:
    // 0x803F4AB4: lw          $v1, 0xCC($sp)
    ctx->r3 = MEM_W(ctx->r29, 0XCC);
    // 0x803F4AB8: mtc1        $v0, $f16
    ctx->f16.u32l = ctx->r2;
    // 0x803F4ABC: lh          $t5, 0x30($v1)
    ctx->r13 = MEM_H(ctx->r3, 0X30);
    // 0x803F4AC0: cvt.s.w     $f16, $f16
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    ctx->f16.fl = CVT_S_W(ctx->f16.u32l);
    // 0x803F4AC4: mtc1        $t5, $f18
    ctx->f18.u32l = ctx->r13;
    // 0x803F4AC8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x803F4ACC: cvt.s.w     $f18, $f18
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    ctx->f18.fl = CVT_S_W(ctx->f18.u32l);
    // 0x803F4AD0: mfc1        $a1, $f16
    ctx->r5 = (int32_t)ctx->f16.u32l;
    // 0x803F4AD4: addiu       $a3, $sp, 0xB0
    ctx->r7 = ADD32(ctx->r29, 0XB0);
    // 0x803F4AD8: mfc1        $a2, $f18
    ctx->r6 = (int32_t)ctx->f18.u32l;
    // 0x803F4ADC: jal         0x80272B98
    // 0x803F4AE0: nop

    LOOKUP_FUNC(0x80272B98)(rdram, ctx);
        goto after_5;
    // 0x803F4AE0: nop

    after_5:
    // 0x803F4AE4: b           L_803F4B20
    // 0x803F4AE8: lwc1        $f6, 0xB0($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0XB0);
        goto L_803F4B20;
    // 0x803F4AE8: lwc1        $f6, 0xB0($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0XB0);
L_803F4AEC:
    // 0x803F4AEC: lw          $t6, 0xC8($s0)
    ctx->r14 = MEM_W(ctx->r16, 0XC8);
    // 0x803F4AF0: mtc1        $zero, $f14
    ctx->f14.u32l = 0;
    // 0x803F4AF4: lw          $t7, 0x24($t6)
    ctx->r15 = MEM_W(ctx->r14, 0X24);
    // 0x803F4AF8: mfc1        $a2, $f14
    ctx->r6 = (int32_t)ctx->f14.u32l;
    // 0x803F4AFC: lh          $t8, 0x8BA($t7)
    ctx->r24 = MEM_H(ctx->r15, 0X8BA);
    // 0x803F4B00: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x803F4B04: mtc1        $t8, $f10
    ctx->f10.u32l = ctx->r24;
    // 0x803F4B08: addiu       $a3, $sp, 0xB0
    ctx->r7 = ADD32(ctx->r29, 0XB0);
    // 0x803F4B0C: cvt.s.w     $f10, $f10
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 10);
    ctx->f10.fl = CVT_S_W(ctx->f10.u32l);
    // 0x803F4B10: mfc1        $a1, $f10
    ctx->r5 = (int32_t)ctx->f10.u32l;
    // 0x803F4B14: jal         0x80272B98
    // 0x803F4B18: nop

    LOOKUP_FUNC(0x80272B98)(rdram, ctx);
        goto after_6;
    // 0x803F4B18: nop

    after_6:
    // 0x803F4B1C: lwc1        $f6, 0xB0($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0XB0);
L_803F4B20:
    // 0x803F4B20: lui         $a2, 0x800B
    ctx->r6 = S32(0X800B << 16);
    // 0x803F4B24: swc1        $f6, 0xBC($s0)
    MEM_W(0XBC, ctx->r16) = ctx->f6.u32l;
    // 0x803F4B28: lwc1        $f12, 0xB4($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0XB4);
    // 0x803F4B2C: lui         $a3, 0x800B
    ctx->r7 = S32(0X800B << 16);
    // 0x803F4B30: addiu       $a3, $a3, -0x53C8
    ctx->r7 = ADD32(ctx->r7, -0X53C8);
    // 0x803F4B34: addiu       $a2, $a2, -0x53E0
    ctx->r6 = ADD32(ctx->r6, -0X53E0);
    // 0x803F4B38: jal         0x803F0000
    // 0x803F4B3C: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
    ovl_803F0000_menu_func_803F0000(rdram, ctx);
        goto after_7;
    // 0x803F4B3C: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
    after_7:
    // 0x803F4B40: lw          $t9, 0xC8($s0)
    ctx->r25 = MEM_W(ctx->r16, 0XC8);
    // 0x803F4B44: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x803F4B48: jal         0x803F3D10
    // 0x803F4B4C: sh          $v0, 0x960($t9)
    MEM_H(0X960, ctx->r25) = ctx->r2;
    ovl_803F0000_menu_func_803F3D10(rdram, ctx);
        goto after_8;
    // 0x803F4B4C: sh          $v0, 0x960($t9)
    MEM_H(0X960, ctx->r25) = ctx->r2;
    after_8:
    // 0x803F4B50: b           L_803F4D78
    // 0x803F4B54: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_803F4D78;
    // 0x803F4B54: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x803F4B58: lui         $t0, 0x8028
    ctx->r8 = S32(0X8028 << 16);
    // 0x803F4B5C: lh          $t0, -0x1B60($t0)
    ctx->r8 = MEM_H(ctx->r8, -0X1B60);
    // 0x803F4B60: lui         $at, 0x4248
    ctx->r1 = S32(0X4248 << 16);
    // 0x803F4B64: andi        $t1, $t0, 0x1
    ctx->r9 = ctx->r8 & 0X1;
    // 0x803F4B68: beq         $t1, $zero, L_803F4BBC
    if (ctx->r9 == 0) {
        // 0x803F4B6C: nop
    
            goto L_803F4BBC;
    }
    // 0x803F4B6C: nop

    // 0x803F4B70: lwc1        $f4, 0x84($a2)
    ctx->f4.u32l = MEM_W(ctx->r6, 0X84);
    // 0x803F4B74: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x803F4B78: lui         $at, 0x803F
    ctx->r1 = S32(0X803F << 16);
    // 0x803F4B7C: c.lt.s      $f4, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f4.fl < ctx->f8.fl;
    // 0x803F4B80: nop

    // 0x803F4B84: bc1f        L_803F4BBC
    if (!c1cs) {
        // 0x803F4B88: nop
    
            goto L_803F4BBC;
    }
    // 0x803F4B88: nop

    // 0x803F4B8C: lwc1        $f18, 0x50($a2)
    ctx->f18.u32l = MEM_W(ctx->r6, 0X50);
    // 0x803F4B90: lwc1        $f17, 0x7D70($at)
    ctx->f_odd[(17 - 1) * 2] = MEM_W(ctx->r1, 0X7D70);
    // 0x803F4B94: lwc1        $f16, 0x7D74($at)
    ctx->f16.u32l = MEM_W(ctx->r1, 0X7D74);
    // 0x803F4B98: cvt.d.s     $f10, $f18
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.fl); 
    ctx->f10.d = CVT_D_S(ctx->f18.fl);
    // 0x803F4B9C: c.lt.d      $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f16.d < ctx->f10.d;
    // 0x803F4BA0: nop

    // 0x803F4BA4: bc1f        L_803F4BBC
    if (!c1cs) {
        // 0x803F4BA8: nop
    
            goto L_803F4BBC;
    }
    // 0x803F4BA8: nop

    // 0x803F4BAC: jal         0x803F3A98
    // 0x803F4BB0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_803F0000_menu_func_803F3A98(rdram, ctx);
        goto after_9;
    // 0x803F4BB0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_9:
    // 0x803F4BB4: b           L_803F4D78
    // 0x803F4BB8: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_803F4D78;
    // 0x803F4BB8: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_803F4BBC:
    // 0x803F4BBC: jal         0x803F401C
    // 0x803F4BC0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_803F0000_menu_func_803F401C(rdram, ctx);
        goto after_10;
    // 0x803F4BC0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_10:
    // 0x803F4BC4: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x803F4BC8: sh          $t2, 0x8A($sp)
    MEM_H(0X8A, ctx->r29) = ctx->r10;
    // 0x803F4BCC: lw          $v0, 0xC8($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XC8);
    // 0x803F4BD0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x803F4BD4: lhu         $t3, 0x95C($v0)
    ctx->r11 = MEM_HU(ctx->r2, 0X95C);
    // 0x803F4BD8: nop

    // 0x803F4BDC: ori         $t4, $t3, 0x2800
    ctx->r12 = ctx->r11 | 0X2800;
    // 0x803F4BE0: jal         0x803F3D10
    // 0x803F4BE4: sh          $t4, 0x95C($v0)
    MEM_H(0X95C, ctx->r2) = ctx->r12;
    ovl_803F0000_menu_func_803F3D10(rdram, ctx);
        goto after_11;
    // 0x803F4BE4: sh          $t4, 0x95C($v0)
    MEM_H(0X95C, ctx->r2) = ctx->r12;
    after_11:
    // 0x803F4BE8: b           L_803F4D78
    // 0x803F4BEC: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_803F4D78;
    // 0x803F4BEC: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x803F4BF0: lhu         $t5, 0x95C($v0)
    ctx->r13 = MEM_HU(ctx->r2, 0X95C);
    // 0x803F4BF4: addiu       $t7, $zero, 0x8
    ctx->r15 = ADD32(0, 0X8);
    // 0x803F4BF8: andi        $t6, $t5, 0xFFFE
    ctx->r14 = ctx->r13 & 0XFFFE;
    // 0x803F4BFC: sh          $t6, 0x95C($v0)
    MEM_H(0X95C, ctx->r2) = ctx->r14;
    // 0x803F4C00: sh          $t7, 0x8A($sp)
    MEM_H(0X8A, ctx->r29) = ctx->r15;
    // 0x803F4C04: lw          $v0, 0xC8($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XC8);
    // 0x803F4C08: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x803F4C0C: lw          $t8, 0x958($v0)
    ctx->r24 = MEM_W(ctx->r2, 0X958);
    // 0x803F4C10: addiu       $t4, $zero, 0x13
    ctx->r12 = ADD32(0, 0X13);
    // 0x803F4C14: beq         $t8, $zero, L_803F4C68
    if (ctx->r24 == 0) {
        // 0x803F4C18: nop
    
            goto L_803F4C68;
    }
    // 0x803F4C18: nop

    // 0x803F4C1C: jal         0x8006B35C
    // 0x803F4C20: addiu       $a1, $sp, 0x38
    ctx->r5 = ADD32(ctx->r29, 0X38);
    func_8006B35C(rdram, ctx);
        goto after_12;
    // 0x803F4C20: addiu       $a1, $sp, 0x38
    ctx->r5 = ADD32(ctx->r29, 0X38);
    after_12:
    // 0x803F4C24: lw          $t9, 0xC8($s0)
    ctx->r25 = MEM_W(ctx->r16, 0XC8);
    // 0x803F4C28: addiu       $a1, $zero, 0x13
    ctx->r5 = ADD32(0, 0X13);
    // 0x803F4C2C: lw          $t0, 0x958($t9)
    ctx->r8 = MEM_W(ctx->r25, 0X958);
    // 0x803F4C30: addiu       $a2, $sp, 0x38
    ctx->r6 = ADD32(ctx->r29, 0X38);
    // 0x803F4C34: lwc1        $f12, 0x84($t0)
    ctx->f12.u32l = MEM_W(ctx->r8, 0X84);
    // 0x803F4C38: jal         0x803F0000
    // 0x803F4C3C: addiu       $a3, $sp, 0x84
    ctx->r7 = ADD32(ctx->r29, 0X84);
    ovl_803F0000_menu_func_803F0000(rdram, ctx);
        goto after_13;
    // 0x803F4C3C: addiu       $a3, $sp, 0x84
    ctx->r7 = ADD32(ctx->r29, 0X84);
    after_13:
    // 0x803F4C40: lw          $t1, 0xC8($s0)
    ctx->r9 = MEM_W(ctx->r16, 0XC8);
    // 0x803F4C44: nop

    // 0x803F4C48: sh          $v0, 0x960($t1)
    MEM_H(0X960, ctx->r9) = ctx->r2;
    // 0x803F4C4C: lw          $t2, 0xC8($s0)
    ctx->r10 = MEM_W(ctx->r16, 0XC8);
    // 0x803F4C50: nop

    // 0x803F4C54: lw          $t3, 0x958($t2)
    ctx->r11 = MEM_W(ctx->r10, 0X958);
    // 0x803F4C58: nop

    // 0x803F4C5C: lwc1        $f6, 0x88($t3)
    ctx->f6.u32l = MEM_W(ctx->r11, 0X88);
    // 0x803F4C60: b           L_803F4C94
    // 0x803F4C64: swc1        $f6, 0xBC($s0)
    MEM_W(0XBC, ctx->r16) = ctx->f6.u32l;
        goto L_803F4C94;
    // 0x803F4C64: swc1        $f6, 0xBC($s0)
    MEM_W(0XBC, ctx->r16) = ctx->f6.u32l;
L_803F4C68:
    // 0x803F4C68: sh          $t4, 0x960($v0)
    MEM_H(0X960, ctx->r2) = ctx->r12;
    // 0x803F4C6C: lw          $t5, 0xC8($s0)
    ctx->r13 = MEM_W(ctx->r16, 0XC8);
    // 0x803F4C70: lui         $at, 0x803F
    ctx->r1 = S32(0X803F << 16);
    // 0x803F4C74: lw          $t6, 0x24($t5)
    ctx->r14 = MEM_W(ctx->r13, 0X24);
    // 0x803F4C78: lwc1        $f19, 0x7D78($at)
    ctx->f_odd[(19 - 1) * 2] = MEM_W(ctx->r1, 0X7D78);
    // 0x803F4C7C: lwc1        $f4, 0x8C0($t6)
    ctx->f4.u32l = MEM_W(ctx->r14, 0X8C0);
    // 0x803F4C80: lwc1        $f18, 0x7D7C($at)
    ctx->f18.u32l = MEM_W(ctx->r1, 0X7D7C);
    // 0x803F4C84: cvt.d.s     $f8, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f8.d = CVT_D_S(ctx->f4.fl);
    // 0x803F4C88: add.d       $f16, $f8, $f18
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f18.d); 
    ctx->f16.d = ctx->f8.d + ctx->f18.d;
    // 0x803F4C8C: cvt.s.d     $f10, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.d); 
    ctx->f10.fl = CVT_S_D(ctx->f16.d);
    // 0x803F4C90: swc1        $f10, 0xBC($s0)
    MEM_W(0XBC, ctx->r16) = ctx->f10.u32l;
L_803F4C94:
    // 0x803F4C94: lhu         $t7, 0x12($s0)
    ctx->r15 = MEM_HU(ctx->r16, 0X12);
    // 0x803F4C98: nop

    // 0x803F4C9C: ori         $t8, $t7, 0x4
    ctx->r24 = ctx->r15 | 0X4;
    // 0x803F4CA0: b           L_803F4D74
    // 0x803F4CA4: sh          $t8, 0x12($s0)
    MEM_H(0X12, ctx->r16) = ctx->r24;
        goto L_803F4D74;
    // 0x803F4CA4: sh          $t8, 0x12($s0)
    MEM_H(0X12, ctx->r16) = ctx->r24;
    // 0x803F4CA8: lui         $at, 0x4080
    ctx->r1 = S32(0X4080 << 16);
    // 0x803F4CAC: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    // 0x803F4CB0: lui         $at, 0x3FC0
    ctx->r1 = S32(0X3FC0 << 16);
    // 0x803F4CB4: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x803F4CB8: lui         $a2, 0x3E19
    ctx->r6 = S32(0X3E19 << 16);
    // 0x803F4CBC: lui         $a3, 0x3D4C
    ctx->r7 = S32(0X3D4C << 16);
    // 0x803F4CC0: addiu       $t9, $sp, 0x38
    ctx->r25 = ADD32(ctx->r29, 0X38);
    // 0x803F4CC4: sw          $t9, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r25;
    // 0x803F4CC8: ori         $a3, $a3, 0xCCCD
    ctx->r7 = ctx->r7 | 0XCCCD;
    // 0x803F4CCC: jal         0x8005743C
    // 0x803F4CD0: ori         $a2, $a2, 0x999A
    ctx->r6 = ctx->r6 | 0X999A;
    func_8005743C(rdram, ctx);
        goto after_14;
    // 0x803F4CD0: ori         $a2, $a2, 0x999A
    ctx->r6 = ctx->r6 | 0X999A;
    after_14:
    // 0x803F4CD4: lw          $t0, 0xC8($s0)
    ctx->r8 = MEM_W(ctx->r16, 0XC8);
    // 0x803F4CD8: addiu       $a1, $zero, 0x13
    ctx->r5 = ADD32(0, 0X13);
    // 0x803F4CDC: lw          $t1, 0x958($t0)
    ctx->r9 = MEM_W(ctx->r8, 0X958);
    // 0x803F4CE0: addiu       $a2, $sp, 0x38
    ctx->r6 = ADD32(ctx->r29, 0X38);
    // 0x803F4CE4: lwc1        $f12, 0x84($t1)
    ctx->f12.u32l = MEM_W(ctx->r9, 0X84);
    // 0x803F4CE8: jal         0x803F0000
    // 0x803F4CEC: addiu       $a3, $sp, 0x84
    ctx->r7 = ADD32(ctx->r29, 0X84);
    ovl_803F0000_menu_func_803F0000(rdram, ctx);
        goto after_15;
    // 0x803F4CEC: addiu       $a3, $sp, 0x84
    ctx->r7 = ADD32(ctx->r29, 0X84);
    after_15:
    // 0x803F4CF0: lw          $t2, 0xC8($s0)
    ctx->r10 = MEM_W(ctx->r16, 0XC8);
    // 0x803F4CF4: addiu       $t3, $zero, 0x1
    ctx->r11 = ADD32(0, 0X1);
    // 0x803F4CF8: sh          $v0, 0x960($t2)
    MEM_H(0X960, ctx->r10) = ctx->r2;
    // 0x803F4CFC: sh          $t3, 0x8A($sp)
    MEM_H(0X8A, ctx->r29) = ctx->r11;
    // 0x803F4D00: lw          $t4, 0xC8($s0)
    ctx->r12 = MEM_W(ctx->r16, 0XC8);
    // 0x803F4D04: lhu         $t6, 0x12($s0)
    ctx->r14 = MEM_HU(ctx->r16, 0X12);
    // 0x803F4D08: lw          $t5, 0x958($t4)
    ctx->r13 = MEM_W(ctx->r12, 0X958);
    // 0x803F4D0C: ori         $t7, $t6, 0x4
    ctx->r15 = ctx->r14 | 0X4;
    // 0x803F4D10: lwc1        $f6, 0x88($t5)
    ctx->f6.u32l = MEM_W(ctx->r13, 0X88);
    // 0x803F4D14: sh          $t7, 0x12($s0)
    MEM_H(0X12, ctx->r16) = ctx->r15;
    // 0x803F4D18: b           L_803F4D74
    // 0x803F4D1C: swc1        $f6, 0xBC($s0)
    MEM_W(0XBC, ctx->r16) = ctx->f6.u32l;
        goto L_803F4D74;
    // 0x803F4D1C: swc1        $f6, 0xBC($s0)
    MEM_W(0XBC, ctx->r16) = ctx->f6.u32l;
    // 0x803F4D20: jal         0x803F34D4
    // 0x803F4D24: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_803F0000_menu_func_803F34D4(rdram, ctx);
        goto after_16;
    // 0x803F4D24: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_16:
    // 0x803F4D28: b           L_803F4D78
    // 0x803F4D2C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_803F4D78;
    // 0x803F4D2C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x803F4D30: jal         0x803F3A98
    // 0x803F4D34: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_803F0000_menu_func_803F3A98(rdram, ctx);
        goto after_17;
    // 0x803F4D34: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_17:
    // 0x803F4D38: b           L_803F4D78
    // 0x803F4D3C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_803F4D78;
    // 0x803F4D3C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x803F4D40: jal         0x803F2A40
    // 0x803F4D44: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_803F0000_menu_func_803F2A40(rdram, ctx);
        goto after_18;
    // 0x803F4D44: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_18:
    // 0x803F4D48: bne         $v0, $zero, L_803F4D78
    if (ctx->r2 != 0) {
        // 0x803F4D4C: lw          $ra, 0x24($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X24);
            goto L_803F4D78;
    }
    // 0x803F4D4C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x803F4D50: jal         0x803F2464
    // 0x803F4D54: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_803F0000_menu_func_803F2464(rdram, ctx);
        goto after_19;
    // 0x803F4D54: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_19:
    // 0x803F4D58: b           L_803F4D78
    // 0x803F4D5C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_803F4D78;
    // 0x803F4D5C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x803F4D60: lhu         $t8, 0x12($s0)
    ctx->r24 = MEM_HU(ctx->r16, 0X12);
    // 0x803F4D64: mtc1        $zero, $f14
    ctx->f14.u32l = 0;
    // 0x803F4D68: ori         $t9, $t8, 0x8
    ctx->r25 = ctx->r24 | 0X8;
    // 0x803F4D6C: sh          $t9, 0x12($s0)
    MEM_H(0X12, ctx->r16) = ctx->r25;
    // 0x803F4D70: swc1        $f14, 0xAC($s0)
    MEM_W(0XAC, ctx->r16) = ctx->f14.u32l;
L_803F4D74:
    // 0x803F4D74: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_803F4D78:
    // 0x803F4D78: lhu         $v0, 0x8A($sp)
    ctx->r2 = MEM_HU(ctx->r29, 0X8A);
    // 0x803F4D7C: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x803F4D80: jr          $ra
    // 0x803F4D84: addiu       $sp, $sp, 0xD0
    ctx->r29 = ADD32(ctx->r29, 0XD0);
    return;
    // 0x803F4D84: addiu       $sp, $sp, 0xD0
    ctx->r29 = ADD32(ctx->r29, 0XD0);
;}
RECOMP_FUNC void ovl_803F0000_menu_func_803F49BC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803F49BC: jal         0x803F0EF0
    // 0x803F49C0: sh          $t1, 0x95C($v0)
    MEM_H(0X95C, ctx->r2) = ctx->r9;
    ovl_803F0000_menu_func_803F0EF0(rdram, ctx);
        goto after_0;
    // 0x803F49C0: sh          $t1, 0x95C($v0)
    MEM_H(0X95C, ctx->r2) = ctx->r9;
    after_0:
    // 0x803F49C4: beq         $v0, $zero, L_803F49E8
    if (ctx->r2 == 0) {
        // 0x803F49C8: addiu       $t4, $zero, 0x4000
        ctx->r12 = ADD32(0, 0X4000);
            goto L_803F49E8;
    }
    // 0x803F49C8: addiu       $t4, $zero, 0x4000
    ctx->r12 = ADD32(0, 0X4000);
    // 0x803F49CC: lhu         $t2, 0x12($s0)
    ctx->r10 = MEM_HU(ctx->r16, 0X12);
    // 0x803F49D0: lwc1        $f16, 0x88($v0)
    ctx->f16.u32l = MEM_W(ctx->r2, 0X88);
    // 0x803F49D4: ori         $t3, $t2, 0x4
    ctx->r11 = ctx->r10 | 0X4;
    // 0x803F49D8: sh          $t3, 0x12($s0)
    MEM_H(0X12, ctx->r16) = ctx->r11;
    // 0x803F49DC: swc1        $f16, 0xBC($s0)
    MEM_W(0XBC, ctx->r16) = ctx->f16.u32l;
    // 0x803F49E0: b           L_803F4D74
    // 0x803F49E4: sh          $t4, 0x8A($sp)
    MEM_H(0X8A, ctx->r29) = ctx->r12;
        goto L_803F4D74;
    // 0x803F49E4: sh          $t4, 0x8A($sp)
    MEM_H(0X8A, ctx->r29) = ctx->r12;
L_803F49E8:
    // 0x803F49E8: jal         0x803F401C
    // 0x803F49EC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_803F0000_menu_func_803F401C(rdram, ctx);
        goto after_1;
    // 0x803F49EC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
    // 0x803F49F0: lw          $v0, 0xC8($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XC8);
    // 0x803F49F4: addiu       $t7, $zero, 0x4
    ctx->r15 = ADD32(0, 0X4);
    // 0x803F49F8: lhu         $t5, 0x95C($v0)
    ctx->r13 = MEM_HU(ctx->r2, 0X95C);
    // 0x803F49FC: nop

    // 0x803F4A00: ori         $t6, $t5, 0x800
    ctx->r14 = ctx->r13 | 0X800;
    // 0x803F4A04: sh          $t6, 0x95C($v0)
    MEM_H(0X95C, ctx->r2) = ctx->r14;
    // 0x803F4A08: b           L_803F4D74
    // 0x803F4A0C: sh          $t7, 0x8A($sp)
    MEM_H(0X8A, ctx->r29) = ctx->r15;
        goto L_803F4D74;
    // 0x803F4A0C: sh          $t7, 0x8A($sp)
    MEM_H(0X8A, ctx->r29) = ctx->r15;
    // 0x803F4A10: lui         $t8, 0x8028
    ctx->r24 = S32(0X8028 << 16);
    // 0x803F4A14: lh          $t8, -0x1B60($t8)
    ctx->r24 = MEM_H(ctx->r24, -0X1B60);
    // 0x803F4A18: lui         $at, 0x4248
    ctx->r1 = S32(0X4248 << 16);
    // 0x803F4A1C: andi        $t9, $t8, 0x1
    ctx->r25 = ctx->r24 & 0X1;
    // 0x803F4A20: beq         $t9, $zero, L_803F4A74
    if (ctx->r25 == 0) {
        // 0x803F4A24: nop
    
            goto L_803F4A74;
    }
    // 0x803F4A24: nop

    // 0x803F4A28: lwc1        $f18, 0x84($a2)
    ctx->f18.u32l = MEM_W(ctx->r6, 0X84);
    // 0x803F4A2C: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x803F4A30: lui         $at, 0x803F
    ctx->r1 = S32(0X803F << 16);
    // 0x803F4A34: c.lt.s      $f18, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f18.fl < ctx->f10.fl;
    // 0x803F4A38: nop

    // 0x803F4A3C: bc1f        L_803F4A74
    if (!c1cs) {
        // 0x803F4A40: nop
    
            goto L_803F4A74;
    }
    // 0x803F4A40: nop

    // 0x803F4A44: lwc1        $f6, 0x50($a2)
    ctx->f6.u32l = MEM_W(ctx->r6, 0X50);
    // 0x803F4A48: lwc1        $f5, 0x7D68($at)
    ctx->f_odd[(5 - 1) * 2] = MEM_W(ctx->r1, 0X7D68);
    // 0x803F4A4C: lwc1        $f4, 0x7D6C($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X7D6C);
    // 0x803F4A50: cvt.d.s     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f8.d = CVT_D_S(ctx->f6.fl);
    // 0x803F4A54: c.lt.d      $f4, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f4.d < ctx->f8.d;
    // 0x803F4A58: nop

    // 0x803F4A5C: bc1f        L_803F4A74
    if (!c1cs) {
        // 0x803F4A60: nop
    
            goto L_803F4A74;
    }
    // 0x803F4A60: nop

    // 0x803F4A64: jal         0x803F3A98
    // 0x803F4A68: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_803F0000_menu_func_803F3A98(rdram, ctx);
        goto after_2;
    // 0x803F4A68: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_2:
    // 0x803F4A6C: b           L_803F4D78
    // 0x803F4A70: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_803F4D78;
    // 0x803F4A70: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_803F4A74:
    // 0x803F4A74: lhu         $t0, 0x95C($v0)
    ctx->r8 = MEM_HU(ctx->r2, 0X95C);
    // 0x803F4A78: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x803F4A7C: andi        $t1, $t0, 0xFFFE
    ctx->r9 = ctx->r8 & 0XFFFE;
    // 0x803F4A80: sh          $t1, 0x95C($v0)
    MEM_H(0X95C, ctx->r2) = ctx->r9;
    // 0x803F4A84: sh          $t2, 0x8A($sp)
    MEM_H(0X8A, ctx->r29) = ctx->r10;
    // 0x803F4A88: lhu         $t3, 0x12($s0)
    ctx->r11 = MEM_HU(ctx->r16, 0X12);
    // 0x803F4A8C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x803F4A90: ori         $t4, $t3, 0x4
    ctx->r12 = ctx->r11 | 0X4;
    // 0x803F4A94: jal         0x803F0EF0
    // 0x803F4A98: sh          $t4, 0x12($s0)
    MEM_H(0X12, ctx->r16) = ctx->r12;
    ovl_803F0000_menu_func_803F0EF0(rdram, ctx);
        goto after_3;
    // 0x803F4A98: sh          $t4, 0x12($s0)
    MEM_H(0X12, ctx->r16) = ctx->r12;
    after_3:
    // 0x803F4A9C: beq         $v0, $zero, L_803F4AEC
    if (ctx->r2 == 0) {
        // 0x803F4AA0: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_803F4AEC;
    }
    // 0x803F4AA0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x803F4AA4: lh          $a1, 0x2E($v0)
    ctx->r5 = MEM_H(ctx->r2, 0X2E);
    // 0x803F4AA8: sw          $v0, 0xCC($sp)
    MEM_W(0XCC, ctx->r29) = ctx->r2;
    // 0x803F4AAC: jal         0x803F3C88
    // 0x803F4AB0: addiu       $a2, $zero, 0x1A8
    ctx->r6 = ADD32(0, 0X1A8);
    ovl_803F0000_menu_func_803F3C88(rdram, ctx);
        goto after_4;
    // 0x803F4AB0: addiu       $a2, $zero, 0x1A8
    ctx->r6 = ADD32(0, 0X1A8);
    after_4:
    // 0x803F4AB4: lw          $v1, 0xCC($sp)
    ctx->r3 = MEM_W(ctx->r29, 0XCC);
    // 0x803F4AB8: mtc1        $v0, $f16
    ctx->f16.u32l = ctx->r2;
    // 0x803F4ABC: lh          $t5, 0x30($v1)
    ctx->r13 = MEM_H(ctx->r3, 0X30);
    // 0x803F4AC0: cvt.s.w     $f16, $f16
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    ctx->f16.fl = CVT_S_W(ctx->f16.u32l);
    // 0x803F4AC4: mtc1        $t5, $f18
    ctx->f18.u32l = ctx->r13;
    // 0x803F4AC8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x803F4ACC: cvt.s.w     $f18, $f18
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    ctx->f18.fl = CVT_S_W(ctx->f18.u32l);
    // 0x803F4AD0: mfc1        $a1, $f16
    ctx->r5 = (int32_t)ctx->f16.u32l;
    // 0x803F4AD4: addiu       $a3, $sp, 0xB0
    ctx->r7 = ADD32(ctx->r29, 0XB0);
    // 0x803F4AD8: mfc1        $a2, $f18
    ctx->r6 = (int32_t)ctx->f18.u32l;
    // 0x803F4ADC: jal         0x80272B98
    // 0x803F4AE0: nop

    LOOKUP_FUNC(0x80272B98)(rdram, ctx);
        goto after_5;
    // 0x803F4AE0: nop

    after_5:
    // 0x803F4AE4: b           L_803F4B20
    // 0x803F4AE8: lwc1        $f6, 0xB0($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0XB0);
        goto L_803F4B20;
    // 0x803F4AE8: lwc1        $f6, 0xB0($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0XB0);
L_803F4AEC:
    // 0x803F4AEC: lw          $t6, 0xC8($s0)
    ctx->r14 = MEM_W(ctx->r16, 0XC8);
    // 0x803F4AF0: mtc1        $zero, $f14
    ctx->f14.u32l = 0;
    // 0x803F4AF4: lw          $t7, 0x24($t6)
    ctx->r15 = MEM_W(ctx->r14, 0X24);
    // 0x803F4AF8: mfc1        $a2, $f14
    ctx->r6 = (int32_t)ctx->f14.u32l;
    // 0x803F4AFC: lh          $t8, 0x8BA($t7)
    ctx->r24 = MEM_H(ctx->r15, 0X8BA);
    // 0x803F4B00: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x803F4B04: mtc1        $t8, $f10
    ctx->f10.u32l = ctx->r24;
    // 0x803F4B08: addiu       $a3, $sp, 0xB0
    ctx->r7 = ADD32(ctx->r29, 0XB0);
    // 0x803F4B0C: cvt.s.w     $f10, $f10
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 10);
    ctx->f10.fl = CVT_S_W(ctx->f10.u32l);
    // 0x803F4B10: mfc1        $a1, $f10
    ctx->r5 = (int32_t)ctx->f10.u32l;
    // 0x803F4B14: jal         0x80272B98
    // 0x803F4B18: nop

    LOOKUP_FUNC(0x80272B98)(rdram, ctx);
        goto after_6;
    // 0x803F4B18: nop

    after_6:
    // 0x803F4B1C: lwc1        $f6, 0xB0($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0XB0);
L_803F4B20:
    // 0x803F4B20: lui         $a2, 0x800B
    ctx->r6 = S32(0X800B << 16);
    // 0x803F4B24: swc1        $f6, 0xBC($s0)
    MEM_W(0XBC, ctx->r16) = ctx->f6.u32l;
    // 0x803F4B28: lwc1        $f12, 0xB4($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0XB4);
    // 0x803F4B2C: lui         $a3, 0x800B
    ctx->r7 = S32(0X800B << 16);
    // 0x803F4B30: addiu       $a3, $a3, -0x53C8
    ctx->r7 = ADD32(ctx->r7, -0X53C8);
    // 0x803F4B34: addiu       $a2, $a2, -0x53E0
    ctx->r6 = ADD32(ctx->r6, -0X53E0);
    // 0x803F4B38: jal         0x803F0000
    // 0x803F4B3C: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
    ovl_803F0000_menu_func_803F0000(rdram, ctx);
        goto after_7;
    // 0x803F4B3C: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
    after_7:
    // 0x803F4B40: lw          $t9, 0xC8($s0)
    ctx->r25 = MEM_W(ctx->r16, 0XC8);
    // 0x803F4B44: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x803F4B48: jal         0x803F3D10
    // 0x803F4B4C: sh          $v0, 0x960($t9)
    MEM_H(0X960, ctx->r25) = ctx->r2;
    ovl_803F0000_menu_func_803F3D10(rdram, ctx);
        goto after_8;
    // 0x803F4B4C: sh          $v0, 0x960($t9)
    MEM_H(0X960, ctx->r25) = ctx->r2;
    after_8:
    // 0x803F4B50: b           L_803F4D78
    // 0x803F4B54: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_803F4D78;
    // 0x803F4B54: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x803F4B58: lui         $t0, 0x8028
    ctx->r8 = S32(0X8028 << 16);
    // 0x803F4B5C: lh          $t0, -0x1B60($t0)
    ctx->r8 = MEM_H(ctx->r8, -0X1B60);
    // 0x803F4B60: lui         $at, 0x4248
    ctx->r1 = S32(0X4248 << 16);
    // 0x803F4B64: andi        $t1, $t0, 0x1
    ctx->r9 = ctx->r8 & 0X1;
    // 0x803F4B68: beq         $t1, $zero, L_803F4BBC
    if (ctx->r9 == 0) {
        // 0x803F4B6C: nop
    
            goto L_803F4BBC;
    }
    // 0x803F4B6C: nop

    // 0x803F4B70: lwc1        $f4, 0x84($a2)
    ctx->f4.u32l = MEM_W(ctx->r6, 0X84);
    // 0x803F4B74: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x803F4B78: lui         $at, 0x803F
    ctx->r1 = S32(0X803F << 16);
    // 0x803F4B7C: c.lt.s      $f4, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f4.fl < ctx->f8.fl;
    // 0x803F4B80: nop

    // 0x803F4B84: bc1f        L_803F4BBC
    if (!c1cs) {
        // 0x803F4B88: nop
    
            goto L_803F4BBC;
    }
    // 0x803F4B88: nop

    // 0x803F4B8C: lwc1        $f18, 0x50($a2)
    ctx->f18.u32l = MEM_W(ctx->r6, 0X50);
    // 0x803F4B90: lwc1        $f17, 0x7D70($at)
    ctx->f_odd[(17 - 1) * 2] = MEM_W(ctx->r1, 0X7D70);
    // 0x803F4B94: lwc1        $f16, 0x7D74($at)
    ctx->f16.u32l = MEM_W(ctx->r1, 0X7D74);
    // 0x803F4B98: cvt.d.s     $f10, $f18
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.fl); 
    ctx->f10.d = CVT_D_S(ctx->f18.fl);
    // 0x803F4B9C: c.lt.d      $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f16.d < ctx->f10.d;
    // 0x803F4BA0: nop

    // 0x803F4BA4: bc1f        L_803F4BBC
    if (!c1cs) {
        // 0x803F4BA8: nop
    
            goto L_803F4BBC;
    }
    // 0x803F4BA8: nop

    // 0x803F4BAC: jal         0x803F3A98
    // 0x803F4BB0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_803F0000_menu_func_803F3A98(rdram, ctx);
        goto after_9;
    // 0x803F4BB0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_9:
    // 0x803F4BB4: b           L_803F4D78
    // 0x803F4BB8: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_803F4D78;
    // 0x803F4BB8: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_803F4BBC:
    // 0x803F4BBC: jal         0x803F401C
    // 0x803F4BC0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_803F0000_menu_func_803F401C(rdram, ctx);
        goto after_10;
    // 0x803F4BC0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_10:
    // 0x803F4BC4: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x803F4BC8: sh          $t2, 0x8A($sp)
    MEM_H(0X8A, ctx->r29) = ctx->r10;
    // 0x803F4BCC: lw          $v0, 0xC8($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XC8);
    // 0x803F4BD0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x803F4BD4: lhu         $t3, 0x95C($v0)
    ctx->r11 = MEM_HU(ctx->r2, 0X95C);
    // 0x803F4BD8: nop

    // 0x803F4BDC: ori         $t4, $t3, 0x2800
    ctx->r12 = ctx->r11 | 0X2800;
    // 0x803F4BE0: jal         0x803F3D10
    // 0x803F4BE4: sh          $t4, 0x95C($v0)
    MEM_H(0X95C, ctx->r2) = ctx->r12;
    ovl_803F0000_menu_func_803F3D10(rdram, ctx);
        goto after_11;
    // 0x803F4BE4: sh          $t4, 0x95C($v0)
    MEM_H(0X95C, ctx->r2) = ctx->r12;
    after_11:
    // 0x803F4BE8: b           L_803F4D78
    // 0x803F4BEC: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_803F4D78;
    // 0x803F4BEC: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x803F4BF0: lhu         $t5, 0x95C($v0)
    ctx->r13 = MEM_HU(ctx->r2, 0X95C);
    // 0x803F4BF4: addiu       $t7, $zero, 0x8
    ctx->r15 = ADD32(0, 0X8);
    // 0x803F4BF8: andi        $t6, $t5, 0xFFFE
    ctx->r14 = ctx->r13 & 0XFFFE;
    // 0x803F4BFC: sh          $t6, 0x95C($v0)
    MEM_H(0X95C, ctx->r2) = ctx->r14;
    // 0x803F4C00: sh          $t7, 0x8A($sp)
    MEM_H(0X8A, ctx->r29) = ctx->r15;
    // 0x803F4C04: lw          $v0, 0xC8($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XC8);
    // 0x803F4C08: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x803F4C0C: lw          $t8, 0x958($v0)
    ctx->r24 = MEM_W(ctx->r2, 0X958);
    // 0x803F4C10: addiu       $t4, $zero, 0x13
    ctx->r12 = ADD32(0, 0X13);
    // 0x803F4C14: beq         $t8, $zero, L_803F4C68
    if (ctx->r24 == 0) {
        // 0x803F4C18: nop
    
            goto L_803F4C68;
    }
    // 0x803F4C18: nop

    // 0x803F4C1C: jal         0x8006B35C
    // 0x803F4C20: addiu       $a1, $sp, 0x38
    ctx->r5 = ADD32(ctx->r29, 0X38);
    func_8006B35C(rdram, ctx);
        goto after_12;
    // 0x803F4C20: addiu       $a1, $sp, 0x38
    ctx->r5 = ADD32(ctx->r29, 0X38);
    after_12:
    // 0x803F4C24: lw          $t9, 0xC8($s0)
    ctx->r25 = MEM_W(ctx->r16, 0XC8);
    // 0x803F4C28: addiu       $a1, $zero, 0x13
    ctx->r5 = ADD32(0, 0X13);
    // 0x803F4C2C: lw          $t0, 0x958($t9)
    ctx->r8 = MEM_W(ctx->r25, 0X958);
    // 0x803F4C30: addiu       $a2, $sp, 0x38
    ctx->r6 = ADD32(ctx->r29, 0X38);
    // 0x803F4C34: lwc1        $f12, 0x84($t0)
    ctx->f12.u32l = MEM_W(ctx->r8, 0X84);
    // 0x803F4C38: jal         0x803F0000
    // 0x803F4C3C: addiu       $a3, $sp, 0x84
    ctx->r7 = ADD32(ctx->r29, 0X84);
    ovl_803F0000_menu_func_803F0000(rdram, ctx);
        goto after_13;
    // 0x803F4C3C: addiu       $a3, $sp, 0x84
    ctx->r7 = ADD32(ctx->r29, 0X84);
    after_13:
    // 0x803F4C40: lw          $t1, 0xC8($s0)
    ctx->r9 = MEM_W(ctx->r16, 0XC8);
    // 0x803F4C44: nop

    // 0x803F4C48: sh          $v0, 0x960($t1)
    MEM_H(0X960, ctx->r9) = ctx->r2;
    // 0x803F4C4C: lw          $t2, 0xC8($s0)
    ctx->r10 = MEM_W(ctx->r16, 0XC8);
    // 0x803F4C50: nop

    // 0x803F4C54: lw          $t3, 0x958($t2)
    ctx->r11 = MEM_W(ctx->r10, 0X958);
    // 0x803F4C58: nop

    // 0x803F4C5C: lwc1        $f6, 0x88($t3)
    ctx->f6.u32l = MEM_W(ctx->r11, 0X88);
    // 0x803F4C60: b           L_803F4C94
    // 0x803F4C64: swc1        $f6, 0xBC($s0)
    MEM_W(0XBC, ctx->r16) = ctx->f6.u32l;
        goto L_803F4C94;
    // 0x803F4C64: swc1        $f6, 0xBC($s0)
    MEM_W(0XBC, ctx->r16) = ctx->f6.u32l;
L_803F4C68:
    // 0x803F4C68: sh          $t4, 0x960($v0)
    MEM_H(0X960, ctx->r2) = ctx->r12;
    // 0x803F4C6C: lw          $t5, 0xC8($s0)
    ctx->r13 = MEM_W(ctx->r16, 0XC8);
    // 0x803F4C70: lui         $at, 0x803F
    ctx->r1 = S32(0X803F << 16);
    // 0x803F4C74: lw          $t6, 0x24($t5)
    ctx->r14 = MEM_W(ctx->r13, 0X24);
    // 0x803F4C78: lwc1        $f19, 0x7D78($at)
    ctx->f_odd[(19 - 1) * 2] = MEM_W(ctx->r1, 0X7D78);
    // 0x803F4C7C: lwc1        $f4, 0x8C0($t6)
    ctx->f4.u32l = MEM_W(ctx->r14, 0X8C0);
    // 0x803F4C80: lwc1        $f18, 0x7D7C($at)
    ctx->f18.u32l = MEM_W(ctx->r1, 0X7D7C);
    // 0x803F4C84: cvt.d.s     $f8, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f8.d = CVT_D_S(ctx->f4.fl);
    // 0x803F4C88: add.d       $f16, $f8, $f18
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f18.d); 
    ctx->f16.d = ctx->f8.d + ctx->f18.d;
    // 0x803F4C8C: cvt.s.d     $f10, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.d); 
    ctx->f10.fl = CVT_S_D(ctx->f16.d);
    // 0x803F4C90: swc1        $f10, 0xBC($s0)
    MEM_W(0XBC, ctx->r16) = ctx->f10.u32l;
L_803F4C94:
    // 0x803F4C94: lhu         $t7, 0x12($s0)
    ctx->r15 = MEM_HU(ctx->r16, 0X12);
    // 0x803F4C98: nop

    // 0x803F4C9C: ori         $t8, $t7, 0x4
    ctx->r24 = ctx->r15 | 0X4;
    // 0x803F4CA0: b           L_803F4D74
    // 0x803F4CA4: sh          $t8, 0x12($s0)
    MEM_H(0X12, ctx->r16) = ctx->r24;
        goto L_803F4D74;
    // 0x803F4CA4: sh          $t8, 0x12($s0)
    MEM_H(0X12, ctx->r16) = ctx->r24;
    // 0x803F4CA8: lui         $at, 0x4080
    ctx->r1 = S32(0X4080 << 16);
    // 0x803F4CAC: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    // 0x803F4CB0: lui         $at, 0x3FC0
    ctx->r1 = S32(0X3FC0 << 16);
    // 0x803F4CB4: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x803F4CB8: lui         $a2, 0x3E19
    ctx->r6 = S32(0X3E19 << 16);
    // 0x803F4CBC: lui         $a3, 0x3D4C
    ctx->r7 = S32(0X3D4C << 16);
    // 0x803F4CC0: addiu       $t9, $sp, 0x38
    ctx->r25 = ADD32(ctx->r29, 0X38);
    // 0x803F4CC4: sw          $t9, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r25;
    // 0x803F4CC8: ori         $a3, $a3, 0xCCCD
    ctx->r7 = ctx->r7 | 0XCCCD;
    // 0x803F4CCC: jal         0x8005743C
    // 0x803F4CD0: ori         $a2, $a2, 0x999A
    ctx->r6 = ctx->r6 | 0X999A;
    func_8005743C(rdram, ctx);
        goto after_14;
    // 0x803F4CD0: ori         $a2, $a2, 0x999A
    ctx->r6 = ctx->r6 | 0X999A;
    after_14:
    // 0x803F4CD4: lw          $t0, 0xC8($s0)
    ctx->r8 = MEM_W(ctx->r16, 0XC8);
    // 0x803F4CD8: addiu       $a1, $zero, 0x13
    ctx->r5 = ADD32(0, 0X13);
    // 0x803F4CDC: lw          $t1, 0x958($t0)
    ctx->r9 = MEM_W(ctx->r8, 0X958);
    // 0x803F4CE0: addiu       $a2, $sp, 0x38
    ctx->r6 = ADD32(ctx->r29, 0X38);
    // 0x803F4CE4: lwc1        $f12, 0x84($t1)
    ctx->f12.u32l = MEM_W(ctx->r9, 0X84);
    // 0x803F4CE8: jal         0x803F0000
    // 0x803F4CEC: addiu       $a3, $sp, 0x84
    ctx->r7 = ADD32(ctx->r29, 0X84);
    ovl_803F0000_menu_func_803F0000(rdram, ctx);
        goto after_15;
    // 0x803F4CEC: addiu       $a3, $sp, 0x84
    ctx->r7 = ADD32(ctx->r29, 0X84);
    after_15:
    // 0x803F4CF0: lw          $t2, 0xC8($s0)
    ctx->r10 = MEM_W(ctx->r16, 0XC8);
    // 0x803F4CF4: addiu       $t3, $zero, 0x1
    ctx->r11 = ADD32(0, 0X1);
    // 0x803F4CF8: sh          $v0, 0x960($t2)
    MEM_H(0X960, ctx->r10) = ctx->r2;
    // 0x803F4CFC: sh          $t3, 0x8A($sp)
    MEM_H(0X8A, ctx->r29) = ctx->r11;
    // 0x803F4D00: lw          $t4, 0xC8($s0)
    ctx->r12 = MEM_W(ctx->r16, 0XC8);
    // 0x803F4D04: lhu         $t6, 0x12($s0)
    ctx->r14 = MEM_HU(ctx->r16, 0X12);
    // 0x803F4D08: lw          $t5, 0x958($t4)
    ctx->r13 = MEM_W(ctx->r12, 0X958);
    // 0x803F4D0C: ori         $t7, $t6, 0x4
    ctx->r15 = ctx->r14 | 0X4;
    // 0x803F4D10: lwc1        $f6, 0x88($t5)
    ctx->f6.u32l = MEM_W(ctx->r13, 0X88);
    // 0x803F4D14: sh          $t7, 0x12($s0)
    MEM_H(0X12, ctx->r16) = ctx->r15;
    // 0x803F4D18: b           L_803F4D74
    // 0x803F4D1C: swc1        $f6, 0xBC($s0)
    MEM_W(0XBC, ctx->r16) = ctx->f6.u32l;
        goto L_803F4D74;
    // 0x803F4D1C: swc1        $f6, 0xBC($s0)
    MEM_W(0XBC, ctx->r16) = ctx->f6.u32l;
    // 0x803F4D20: jal         0x803F34D4
    // 0x803F4D24: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_803F0000_menu_func_803F34D4(rdram, ctx);
        goto after_16;
    // 0x803F4D24: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_16:
    // 0x803F4D28: b           L_803F4D78
    // 0x803F4D2C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_803F4D78;
    // 0x803F4D2C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x803F4D30: jal         0x803F3A98
    // 0x803F4D34: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_803F0000_menu_func_803F3A98(rdram, ctx);
        goto after_17;
    // 0x803F4D34: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_17:
    // 0x803F4D38: b           L_803F4D78
    // 0x803F4D3C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_803F4D78;
    // 0x803F4D3C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x803F4D40: jal         0x803F2A40
    // 0x803F4D44: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_803F0000_menu_func_803F2A40(rdram, ctx);
        goto after_18;
    // 0x803F4D44: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_18:
    // 0x803F4D48: bne         $v0, $zero, L_803F4D78
    if (ctx->r2 != 0) {
        // 0x803F4D4C: lw          $ra, 0x24($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X24);
            goto L_803F4D78;
    }
    // 0x803F4D4C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x803F4D50: jal         0x803F2464
    // 0x803F4D54: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_803F0000_menu_func_803F2464(rdram, ctx);
        goto after_19;
    // 0x803F4D54: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_19:
    // 0x803F4D58: b           L_803F4D78
    // 0x803F4D5C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_803F4D78;
    // 0x803F4D5C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x803F4D60: lhu         $t8, 0x12($s0)
    ctx->r24 = MEM_HU(ctx->r16, 0X12);
    // 0x803F4D64: mtc1        $zero, $f14
    ctx->f14.u32l = 0;
    // 0x803F4D68: ori         $t9, $t8, 0x8
    ctx->r25 = ctx->r24 | 0X8;
    // 0x803F4D6C: sh          $t9, 0x12($s0)
    MEM_H(0X12, ctx->r16) = ctx->r25;
    // 0x803F4D70: swc1        $f14, 0xAC($s0)
    MEM_W(0XAC, ctx->r16) = ctx->f14.u32l;
L_803F4D74:
    // 0x803F4D74: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_803F4D78:
    // 0x803F4D78: lhu         $v0, 0x8A($sp)
    ctx->r2 = MEM_HU(ctx->r29, 0X8A);
    // 0x803F4D7C: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x803F4D80: jr          $ra
    // 0x803F4D84: addiu       $sp, $sp, 0xD0
    ctx->r29 = ADD32(ctx->r29, 0XD0);
    return;
    // 0x803F4D84: addiu       $sp, $sp, 0xD0
    ctx->r29 = ADD32(ctx->r29, 0XD0);
;}
RECOMP_FUNC void ovl_803F0000_menu_func_803F4A78(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803F4A78: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x803F4A7C: andi        $t1, $t0, 0xFFFE
    ctx->r9 = ctx->r8 & 0XFFFE;
    // 0x803F4A80: sh          $t1, 0x95C($v0)
    MEM_H(0X95C, ctx->r2) = ctx->r9;
    // 0x803F4A84: sh          $t2, 0x8A($sp)
    MEM_H(0X8A, ctx->r29) = ctx->r10;
    // 0x803F4A88: lhu         $t3, 0x12($s0)
    ctx->r11 = MEM_HU(ctx->r16, 0X12);
    // 0x803F4A8C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x803F4A90: ori         $t4, $t3, 0x4
    ctx->r12 = ctx->r11 | 0X4;
    // 0x803F4A94: jal         0x803F0EF0
    // 0x803F4A98: sh          $t4, 0x12($s0)
    MEM_H(0X12, ctx->r16) = ctx->r12;
    ovl_803F0000_menu_func_803F0EF0(rdram, ctx);
        goto after_0;
    // 0x803F4A98: sh          $t4, 0x12($s0)
    MEM_H(0X12, ctx->r16) = ctx->r12;
    after_0:
    // 0x803F4A9C: beq         $v0, $zero, L_803F4AEC
    if (ctx->r2 == 0) {
        // 0x803F4AA0: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_803F4AEC;
    }
    // 0x803F4AA0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x803F4AA4: lh          $a1, 0x2E($v0)
    ctx->r5 = MEM_H(ctx->r2, 0X2E);
    // 0x803F4AA8: sw          $v0, 0xCC($sp)
    MEM_W(0XCC, ctx->r29) = ctx->r2;
    // 0x803F4AAC: jal         0x803F3C88
    // 0x803F4AB0: addiu       $a2, $zero, 0x1A8
    ctx->r6 = ADD32(0, 0X1A8);
    ovl_803F0000_menu_func_803F3C88(rdram, ctx);
        goto after_1;
    // 0x803F4AB0: addiu       $a2, $zero, 0x1A8
    ctx->r6 = ADD32(0, 0X1A8);
    after_1:
    // 0x803F4AB4: lw          $v1, 0xCC($sp)
    ctx->r3 = MEM_W(ctx->r29, 0XCC);
    // 0x803F4AB8: mtc1        $v0, $f16
    ctx->f16.u32l = ctx->r2;
    // 0x803F4ABC: lh          $t5, 0x30($v1)
    ctx->r13 = MEM_H(ctx->r3, 0X30);
    // 0x803F4AC0: cvt.s.w     $f16, $f16
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    ctx->f16.fl = CVT_S_W(ctx->f16.u32l);
    // 0x803F4AC4: mtc1        $t5, $f18
    ctx->f18.u32l = ctx->r13;
    // 0x803F4AC8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x803F4ACC: cvt.s.w     $f18, $f18
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    ctx->f18.fl = CVT_S_W(ctx->f18.u32l);
    // 0x803F4AD0: mfc1        $a1, $f16
    ctx->r5 = (int32_t)ctx->f16.u32l;
    // 0x803F4AD4: addiu       $a3, $sp, 0xB0
    ctx->r7 = ADD32(ctx->r29, 0XB0);
    // 0x803F4AD8: mfc1        $a2, $f18
    ctx->r6 = (int32_t)ctx->f18.u32l;
    // 0x803F4ADC: jal         0x80272B98
    // 0x803F4AE0: nop

    LOOKUP_FUNC(0x80272B98)(rdram, ctx);
        goto after_2;
    // 0x803F4AE0: nop

    after_2:
    // 0x803F4AE4: b           L_803F4B20
    // 0x803F4AE8: lwc1        $f6, 0xB0($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0XB0);
        goto L_803F4B20;
    // 0x803F4AE8: lwc1        $f6, 0xB0($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0XB0);
L_803F4AEC:
    // 0x803F4AEC: lw          $t6, 0xC8($s0)
    ctx->r14 = MEM_W(ctx->r16, 0XC8);
    // 0x803F4AF0: mtc1        $zero, $f14
    ctx->f14.u32l = 0;
    // 0x803F4AF4: lw          $t7, 0x24($t6)
    ctx->r15 = MEM_W(ctx->r14, 0X24);
    // 0x803F4AF8: mfc1        $a2, $f14
    ctx->r6 = (int32_t)ctx->f14.u32l;
    // 0x803F4AFC: lh          $t8, 0x8BA($t7)
    ctx->r24 = MEM_H(ctx->r15, 0X8BA);
    // 0x803F4B00: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x803F4B04: mtc1        $t8, $f10
    ctx->f10.u32l = ctx->r24;
    // 0x803F4B08: addiu       $a3, $sp, 0xB0
    ctx->r7 = ADD32(ctx->r29, 0XB0);
    // 0x803F4B0C: cvt.s.w     $f10, $f10
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 10);
    ctx->f10.fl = CVT_S_W(ctx->f10.u32l);
    // 0x803F4B10: mfc1        $a1, $f10
    ctx->r5 = (int32_t)ctx->f10.u32l;
    // 0x803F4B14: jal         0x80272B98
    // 0x803F4B18: nop

    LOOKUP_FUNC(0x80272B98)(rdram, ctx);
        goto after_3;
    // 0x803F4B18: nop

    after_3:
    // 0x803F4B1C: lwc1        $f6, 0xB0($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0XB0);
L_803F4B20:
    // 0x803F4B20: lui         $a2, 0x800B
    ctx->r6 = S32(0X800B << 16);
    // 0x803F4B24: swc1        $f6, 0xBC($s0)
    MEM_W(0XBC, ctx->r16) = ctx->f6.u32l;
    // 0x803F4B28: lwc1        $f12, 0xB4($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0XB4);
    // 0x803F4B2C: lui         $a3, 0x800B
    ctx->r7 = S32(0X800B << 16);
    // 0x803F4B30: addiu       $a3, $a3, -0x53C8
    ctx->r7 = ADD32(ctx->r7, -0X53C8);
    // 0x803F4B34: addiu       $a2, $a2, -0x53E0
    ctx->r6 = ADD32(ctx->r6, -0X53E0);
    // 0x803F4B38: jal         0x803F0000
    // 0x803F4B3C: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
    ovl_803F0000_menu_func_803F0000(rdram, ctx);
        goto after_4;
    // 0x803F4B3C: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
    after_4:
    // 0x803F4B40: lw          $t9, 0xC8($s0)
    ctx->r25 = MEM_W(ctx->r16, 0XC8);
    // 0x803F4B44: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x803F4B48: jal         0x803F3D10
    // 0x803F4B4C: sh          $v0, 0x960($t9)
    MEM_H(0X960, ctx->r25) = ctx->r2;
    ovl_803F0000_menu_func_803F3D10(rdram, ctx);
        goto after_5;
    // 0x803F4B4C: sh          $v0, 0x960($t9)
    MEM_H(0X960, ctx->r25) = ctx->r2;
    after_5:
    // 0x803F4B50: b           L_803F4D78
    // 0x803F4B54: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_803F4D78;
    // 0x803F4B54: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x803F4B58: lui         $t0, 0x8028
    ctx->r8 = S32(0X8028 << 16);
    // 0x803F4B5C: lh          $t0, -0x1B60($t0)
    ctx->r8 = MEM_H(ctx->r8, -0X1B60);
    // 0x803F4B60: lui         $at, 0x4248
    ctx->r1 = S32(0X4248 << 16);
    // 0x803F4B64: andi        $t1, $t0, 0x1
    ctx->r9 = ctx->r8 & 0X1;
    // 0x803F4B68: beq         $t1, $zero, L_803F4BBC
    if (ctx->r9 == 0) {
        // 0x803F4B6C: nop
    
            goto L_803F4BBC;
    }
    // 0x803F4B6C: nop

    // 0x803F4B70: lwc1        $f4, 0x84($a2)
    ctx->f4.u32l = MEM_W(ctx->r6, 0X84);
    // 0x803F4B74: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x803F4B78: lui         $at, 0x803F
    ctx->r1 = S32(0X803F << 16);
    // 0x803F4B7C: c.lt.s      $f4, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f4.fl < ctx->f8.fl;
    // 0x803F4B80: nop

    // 0x803F4B84: bc1f        L_803F4BBC
    if (!c1cs) {
        // 0x803F4B88: nop
    
            goto L_803F4BBC;
    }
    // 0x803F4B88: nop

    // 0x803F4B8C: lwc1        $f18, 0x50($a2)
    ctx->f18.u32l = MEM_W(ctx->r6, 0X50);
    // 0x803F4B90: lwc1        $f17, 0x7D70($at)
    ctx->f_odd[(17 - 1) * 2] = MEM_W(ctx->r1, 0X7D70);
    // 0x803F4B94: lwc1        $f16, 0x7D74($at)
    ctx->f16.u32l = MEM_W(ctx->r1, 0X7D74);
    // 0x803F4B98: cvt.d.s     $f10, $f18
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.fl); 
    ctx->f10.d = CVT_D_S(ctx->f18.fl);
    // 0x803F4B9C: c.lt.d      $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f16.d < ctx->f10.d;
    // 0x803F4BA0: nop

    // 0x803F4BA4: bc1f        L_803F4BBC
    if (!c1cs) {
        // 0x803F4BA8: nop
    
            goto L_803F4BBC;
    }
    // 0x803F4BA8: nop

    // 0x803F4BAC: jal         0x803F3A98
    // 0x803F4BB0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_803F0000_menu_func_803F3A98(rdram, ctx);
        goto after_6;
    // 0x803F4BB0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_6:
    // 0x803F4BB4: b           L_803F4D78
    // 0x803F4BB8: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_803F4D78;
    // 0x803F4BB8: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_803F4BBC:
    // 0x803F4BBC: jal         0x803F401C
    // 0x803F4BC0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_803F0000_menu_func_803F401C(rdram, ctx);
        goto after_7;
    // 0x803F4BC0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_7:
    // 0x803F4BC4: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x803F4BC8: sh          $t2, 0x8A($sp)
    MEM_H(0X8A, ctx->r29) = ctx->r10;
    // 0x803F4BCC: lw          $v0, 0xC8($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XC8);
    // 0x803F4BD0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x803F4BD4: lhu         $t3, 0x95C($v0)
    ctx->r11 = MEM_HU(ctx->r2, 0X95C);
    // 0x803F4BD8: nop

    // 0x803F4BDC: ori         $t4, $t3, 0x2800
    ctx->r12 = ctx->r11 | 0X2800;
    // 0x803F4BE0: jal         0x803F3D10
    // 0x803F4BE4: sh          $t4, 0x95C($v0)
    MEM_H(0X95C, ctx->r2) = ctx->r12;
    ovl_803F0000_menu_func_803F3D10(rdram, ctx);
        goto after_8;
    // 0x803F4BE4: sh          $t4, 0x95C($v0)
    MEM_H(0X95C, ctx->r2) = ctx->r12;
    after_8:
    // 0x803F4BE8: b           L_803F4D78
    // 0x803F4BEC: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_803F4D78;
    // 0x803F4BEC: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x803F4BF0: lhu         $t5, 0x95C($v0)
    ctx->r13 = MEM_HU(ctx->r2, 0X95C);
    // 0x803F4BF4: addiu       $t7, $zero, 0x8
    ctx->r15 = ADD32(0, 0X8);
    // 0x803F4BF8: andi        $t6, $t5, 0xFFFE
    ctx->r14 = ctx->r13 & 0XFFFE;
    // 0x803F4BFC: sh          $t6, 0x95C($v0)
    MEM_H(0X95C, ctx->r2) = ctx->r14;
    // 0x803F4C00: sh          $t7, 0x8A($sp)
    MEM_H(0X8A, ctx->r29) = ctx->r15;
    // 0x803F4C04: lw          $v0, 0xC8($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XC8);
    // 0x803F4C08: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x803F4C0C: lw          $t8, 0x958($v0)
    ctx->r24 = MEM_W(ctx->r2, 0X958);
    // 0x803F4C10: addiu       $t4, $zero, 0x13
    ctx->r12 = ADD32(0, 0X13);
    // 0x803F4C14: beq         $t8, $zero, L_803F4C68
    if (ctx->r24 == 0) {
        // 0x803F4C18: nop
    
            goto L_803F4C68;
    }
    // 0x803F4C18: nop

    // 0x803F4C1C: jal         0x8006B35C
    // 0x803F4C20: addiu       $a1, $sp, 0x38
    ctx->r5 = ADD32(ctx->r29, 0X38);
    func_8006B35C(rdram, ctx);
        goto after_9;
    // 0x803F4C20: addiu       $a1, $sp, 0x38
    ctx->r5 = ADD32(ctx->r29, 0X38);
    after_9:
    // 0x803F4C24: lw          $t9, 0xC8($s0)
    ctx->r25 = MEM_W(ctx->r16, 0XC8);
    // 0x803F4C28: addiu       $a1, $zero, 0x13
    ctx->r5 = ADD32(0, 0X13);
    // 0x803F4C2C: lw          $t0, 0x958($t9)
    ctx->r8 = MEM_W(ctx->r25, 0X958);
    // 0x803F4C30: addiu       $a2, $sp, 0x38
    ctx->r6 = ADD32(ctx->r29, 0X38);
    // 0x803F4C34: lwc1        $f12, 0x84($t0)
    ctx->f12.u32l = MEM_W(ctx->r8, 0X84);
    // 0x803F4C38: jal         0x803F0000
    // 0x803F4C3C: addiu       $a3, $sp, 0x84
    ctx->r7 = ADD32(ctx->r29, 0X84);
    ovl_803F0000_menu_func_803F0000(rdram, ctx);
        goto after_10;
    // 0x803F4C3C: addiu       $a3, $sp, 0x84
    ctx->r7 = ADD32(ctx->r29, 0X84);
    after_10:
    // 0x803F4C40: lw          $t1, 0xC8($s0)
    ctx->r9 = MEM_W(ctx->r16, 0XC8);
    // 0x803F4C44: nop

    // 0x803F4C48: sh          $v0, 0x960($t1)
    MEM_H(0X960, ctx->r9) = ctx->r2;
    // 0x803F4C4C: lw          $t2, 0xC8($s0)
    ctx->r10 = MEM_W(ctx->r16, 0XC8);
    // 0x803F4C50: nop

    // 0x803F4C54: lw          $t3, 0x958($t2)
    ctx->r11 = MEM_W(ctx->r10, 0X958);
    // 0x803F4C58: nop

    // 0x803F4C5C: lwc1        $f6, 0x88($t3)
    ctx->f6.u32l = MEM_W(ctx->r11, 0X88);
    // 0x803F4C60: b           L_803F4C94
    // 0x803F4C64: swc1        $f6, 0xBC($s0)
    MEM_W(0XBC, ctx->r16) = ctx->f6.u32l;
        goto L_803F4C94;
    // 0x803F4C64: swc1        $f6, 0xBC($s0)
    MEM_W(0XBC, ctx->r16) = ctx->f6.u32l;
L_803F4C68:
    // 0x803F4C68: sh          $t4, 0x960($v0)
    MEM_H(0X960, ctx->r2) = ctx->r12;
    // 0x803F4C6C: lw          $t5, 0xC8($s0)
    ctx->r13 = MEM_W(ctx->r16, 0XC8);
    // 0x803F4C70: lui         $at, 0x803F
    ctx->r1 = S32(0X803F << 16);
    // 0x803F4C74: lw          $t6, 0x24($t5)
    ctx->r14 = MEM_W(ctx->r13, 0X24);
    // 0x803F4C78: lwc1        $f19, 0x7D78($at)
    ctx->f_odd[(19 - 1) * 2] = MEM_W(ctx->r1, 0X7D78);
    // 0x803F4C7C: lwc1        $f4, 0x8C0($t6)
    ctx->f4.u32l = MEM_W(ctx->r14, 0X8C0);
    // 0x803F4C80: lwc1        $f18, 0x7D7C($at)
    ctx->f18.u32l = MEM_W(ctx->r1, 0X7D7C);
    // 0x803F4C84: cvt.d.s     $f8, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f8.d = CVT_D_S(ctx->f4.fl);
    // 0x803F4C88: add.d       $f16, $f8, $f18
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f18.d); 
    ctx->f16.d = ctx->f8.d + ctx->f18.d;
    // 0x803F4C8C: cvt.s.d     $f10, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.d); 
    ctx->f10.fl = CVT_S_D(ctx->f16.d);
    // 0x803F4C90: swc1        $f10, 0xBC($s0)
    MEM_W(0XBC, ctx->r16) = ctx->f10.u32l;
L_803F4C94:
    // 0x803F4C94: lhu         $t7, 0x12($s0)
    ctx->r15 = MEM_HU(ctx->r16, 0X12);
    // 0x803F4C98: nop

    // 0x803F4C9C: ori         $t8, $t7, 0x4
    ctx->r24 = ctx->r15 | 0X4;
    // 0x803F4CA0: b           L_803F4D74
    // 0x803F4CA4: sh          $t8, 0x12($s0)
    MEM_H(0X12, ctx->r16) = ctx->r24;
        goto L_803F4D74;
    // 0x803F4CA4: sh          $t8, 0x12($s0)
    MEM_H(0X12, ctx->r16) = ctx->r24;
    // 0x803F4CA8: lui         $at, 0x4080
    ctx->r1 = S32(0X4080 << 16);
    // 0x803F4CAC: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    // 0x803F4CB0: lui         $at, 0x3FC0
    ctx->r1 = S32(0X3FC0 << 16);
    // 0x803F4CB4: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x803F4CB8: lui         $a2, 0x3E19
    ctx->r6 = S32(0X3E19 << 16);
    // 0x803F4CBC: lui         $a3, 0x3D4C
    ctx->r7 = S32(0X3D4C << 16);
    // 0x803F4CC0: addiu       $t9, $sp, 0x38
    ctx->r25 = ADD32(ctx->r29, 0X38);
    // 0x803F4CC4: sw          $t9, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r25;
    // 0x803F4CC8: ori         $a3, $a3, 0xCCCD
    ctx->r7 = ctx->r7 | 0XCCCD;
    // 0x803F4CCC: jal         0x8005743C
    // 0x803F4CD0: ori         $a2, $a2, 0x999A
    ctx->r6 = ctx->r6 | 0X999A;
    func_8005743C(rdram, ctx);
        goto after_11;
    // 0x803F4CD0: ori         $a2, $a2, 0x999A
    ctx->r6 = ctx->r6 | 0X999A;
    after_11:
    // 0x803F4CD4: lw          $t0, 0xC8($s0)
    ctx->r8 = MEM_W(ctx->r16, 0XC8);
    // 0x803F4CD8: addiu       $a1, $zero, 0x13
    ctx->r5 = ADD32(0, 0X13);
    // 0x803F4CDC: lw          $t1, 0x958($t0)
    ctx->r9 = MEM_W(ctx->r8, 0X958);
    // 0x803F4CE0: addiu       $a2, $sp, 0x38
    ctx->r6 = ADD32(ctx->r29, 0X38);
    // 0x803F4CE4: lwc1        $f12, 0x84($t1)
    ctx->f12.u32l = MEM_W(ctx->r9, 0X84);
    // 0x803F4CE8: jal         0x803F0000
    // 0x803F4CEC: addiu       $a3, $sp, 0x84
    ctx->r7 = ADD32(ctx->r29, 0X84);
    ovl_803F0000_menu_func_803F0000(rdram, ctx);
        goto after_12;
    // 0x803F4CEC: addiu       $a3, $sp, 0x84
    ctx->r7 = ADD32(ctx->r29, 0X84);
    after_12:
    // 0x803F4CF0: lw          $t2, 0xC8($s0)
    ctx->r10 = MEM_W(ctx->r16, 0XC8);
    // 0x803F4CF4: addiu       $t3, $zero, 0x1
    ctx->r11 = ADD32(0, 0X1);
    // 0x803F4CF8: sh          $v0, 0x960($t2)
    MEM_H(0X960, ctx->r10) = ctx->r2;
    // 0x803F4CFC: sh          $t3, 0x8A($sp)
    MEM_H(0X8A, ctx->r29) = ctx->r11;
    // 0x803F4D00: lw          $t4, 0xC8($s0)
    ctx->r12 = MEM_W(ctx->r16, 0XC8);
    // 0x803F4D04: lhu         $t6, 0x12($s0)
    ctx->r14 = MEM_HU(ctx->r16, 0X12);
    // 0x803F4D08: lw          $t5, 0x958($t4)
    ctx->r13 = MEM_W(ctx->r12, 0X958);
    // 0x803F4D0C: ori         $t7, $t6, 0x4
    ctx->r15 = ctx->r14 | 0X4;
    // 0x803F4D10: lwc1        $f6, 0x88($t5)
    ctx->f6.u32l = MEM_W(ctx->r13, 0X88);
    // 0x803F4D14: sh          $t7, 0x12($s0)
    MEM_H(0X12, ctx->r16) = ctx->r15;
    // 0x803F4D18: b           L_803F4D74
    // 0x803F4D1C: swc1        $f6, 0xBC($s0)
    MEM_W(0XBC, ctx->r16) = ctx->f6.u32l;
        goto L_803F4D74;
    // 0x803F4D1C: swc1        $f6, 0xBC($s0)
    MEM_W(0XBC, ctx->r16) = ctx->f6.u32l;
    // 0x803F4D20: jal         0x803F34D4
    // 0x803F4D24: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_803F0000_menu_func_803F34D4(rdram, ctx);
        goto after_13;
    // 0x803F4D24: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_13:
    // 0x803F4D28: b           L_803F4D78
    // 0x803F4D2C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_803F4D78;
    // 0x803F4D2C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x803F4D30: jal         0x803F3A98
    // 0x803F4D34: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_803F0000_menu_func_803F3A98(rdram, ctx);
        goto after_14;
    // 0x803F4D34: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_14:
    // 0x803F4D38: b           L_803F4D78
    // 0x803F4D3C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_803F4D78;
    // 0x803F4D3C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x803F4D40: jal         0x803F2A40
    // 0x803F4D44: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_803F0000_menu_func_803F2A40(rdram, ctx);
        goto after_15;
    // 0x803F4D44: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_15:
    // 0x803F4D48: bne         $v0, $zero, L_803F4D78
    if (ctx->r2 != 0) {
        // 0x803F4D4C: lw          $ra, 0x24($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X24);
            goto L_803F4D78;
    }
    // 0x803F4D4C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x803F4D50: jal         0x803F2464
    // 0x803F4D54: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_803F0000_menu_func_803F2464(rdram, ctx);
        goto after_16;
    // 0x803F4D54: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_16:
    // 0x803F4D58: b           L_803F4D78
    // 0x803F4D5C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_803F4D78;
    // 0x803F4D5C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x803F4D60: lhu         $t8, 0x12($s0)
    ctx->r24 = MEM_HU(ctx->r16, 0X12);
    // 0x803F4D64: mtc1        $zero, $f14
    ctx->f14.u32l = 0;
    // 0x803F4D68: ori         $t9, $t8, 0x8
    ctx->r25 = ctx->r24 | 0X8;
    // 0x803F4D6C: sh          $t9, 0x12($s0)
    MEM_H(0X12, ctx->r16) = ctx->r25;
    // 0x803F4D70: swc1        $f14, 0xAC($s0)
    MEM_W(0XAC, ctx->r16) = ctx->f14.u32l;
L_803F4D74:
    // 0x803F4D74: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_803F4D78:
    // 0x803F4D78: lhu         $v0, 0x8A($sp)
    ctx->r2 = MEM_HU(ctx->r29, 0X8A);
    // 0x803F4D7C: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x803F4D80: jr          $ra
    // 0x803F4D84: addiu       $sp, $sp, 0xD0
    ctx->r29 = ADD32(ctx->r29, 0XD0);
    return;
    // 0x803F4D84: addiu       $sp, $sp, 0xD0
    ctx->r29 = ADD32(ctx->r29, 0XD0);
;}
RECOMP_FUNC void ovl_803F0000_menu_func_803F4B3C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803F4B3C: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
    // 0x803F4B40: lw          $t9, 0xC8($s0)
    ctx->r25 = MEM_W(ctx->r16, 0XC8);
    // 0x803F4B44: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x803F4B48: jal         0x803F3D10
    // 0x803F4B4C: sh          $v0, 0x960($t9)
    MEM_H(0X960, ctx->r25) = ctx->r2;
    ovl_803F0000_menu_func_803F3D10(rdram, ctx);
        goto after_0;
    // 0x803F4B4C: sh          $v0, 0x960($t9)
    MEM_H(0X960, ctx->r25) = ctx->r2;
    after_0:
    // 0x803F4B50: b           L_803F4D78
    // 0x803F4B54: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_803F4D78;
    // 0x803F4B54: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x803F4B58: lui         $t0, 0x8028
    ctx->r8 = S32(0X8028 << 16);
    // 0x803F4B5C: lh          $t0, -0x1B60($t0)
    ctx->r8 = MEM_H(ctx->r8, -0X1B60);
    // 0x803F4B60: lui         $at, 0x4248
    ctx->r1 = S32(0X4248 << 16);
    // 0x803F4B64: andi        $t1, $t0, 0x1
    ctx->r9 = ctx->r8 & 0X1;
    // 0x803F4B68: beq         $t1, $zero, L_803F4BBC
    if (ctx->r9 == 0) {
        // 0x803F4B6C: nop
    
            goto L_803F4BBC;
    }
    // 0x803F4B6C: nop

    // 0x803F4B70: lwc1        $f4, 0x84($a2)
    ctx->f4.u32l = MEM_W(ctx->r6, 0X84);
    // 0x803F4B74: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x803F4B78: lui         $at, 0x803F
    ctx->r1 = S32(0X803F << 16);
    // 0x803F4B7C: c.lt.s      $f4, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f4.fl < ctx->f8.fl;
    // 0x803F4B80: nop

    // 0x803F4B84: bc1f        L_803F4BBC
    if (!c1cs) {
        // 0x803F4B88: nop
    
            goto L_803F4BBC;
    }
    // 0x803F4B88: nop

    // 0x803F4B8C: lwc1        $f18, 0x50($a2)
    ctx->f18.u32l = MEM_W(ctx->r6, 0X50);
    // 0x803F4B90: lwc1        $f17, 0x7D70($at)
    ctx->f_odd[(17 - 1) * 2] = MEM_W(ctx->r1, 0X7D70);
    // 0x803F4B94: lwc1        $f16, 0x7D74($at)
    ctx->f16.u32l = MEM_W(ctx->r1, 0X7D74);
    // 0x803F4B98: cvt.d.s     $f10, $f18
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.fl); 
    ctx->f10.d = CVT_D_S(ctx->f18.fl);
    // 0x803F4B9C: c.lt.d      $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f16.d < ctx->f10.d;
    // 0x803F4BA0: nop

    // 0x803F4BA4: bc1f        L_803F4BBC
    if (!c1cs) {
        // 0x803F4BA8: nop
    
            goto L_803F4BBC;
    }
    // 0x803F4BA8: nop

    // 0x803F4BAC: jal         0x803F3A98
    // 0x803F4BB0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_803F0000_menu_func_803F3A98(rdram, ctx);
        goto after_1;
    // 0x803F4BB0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
    // 0x803F4BB4: b           L_803F4D78
    // 0x803F4BB8: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_803F4D78;
    // 0x803F4BB8: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_803F4BBC:
    // 0x803F4BBC: jal         0x803F401C
    // 0x803F4BC0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_803F0000_menu_func_803F401C(rdram, ctx);
        goto after_2;
    // 0x803F4BC0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_2:
    // 0x803F4BC4: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x803F4BC8: sh          $t2, 0x8A($sp)
    MEM_H(0X8A, ctx->r29) = ctx->r10;
    // 0x803F4BCC: lw          $v0, 0xC8($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XC8);
    // 0x803F4BD0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x803F4BD4: lhu         $t3, 0x95C($v0)
    ctx->r11 = MEM_HU(ctx->r2, 0X95C);
    // 0x803F4BD8: nop

    // 0x803F4BDC: ori         $t4, $t3, 0x2800
    ctx->r12 = ctx->r11 | 0X2800;
    // 0x803F4BE0: jal         0x803F3D10
    // 0x803F4BE4: sh          $t4, 0x95C($v0)
    MEM_H(0X95C, ctx->r2) = ctx->r12;
    ovl_803F0000_menu_func_803F3D10(rdram, ctx);
        goto after_3;
    // 0x803F4BE4: sh          $t4, 0x95C($v0)
    MEM_H(0X95C, ctx->r2) = ctx->r12;
    after_3:
    // 0x803F4BE8: b           L_803F4D78
    // 0x803F4BEC: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_803F4D78;
    // 0x803F4BEC: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x803F4BF0: lhu         $t5, 0x95C($v0)
    ctx->r13 = MEM_HU(ctx->r2, 0X95C);
    // 0x803F4BF4: addiu       $t7, $zero, 0x8
    ctx->r15 = ADD32(0, 0X8);
    // 0x803F4BF8: andi        $t6, $t5, 0xFFFE
    ctx->r14 = ctx->r13 & 0XFFFE;
    // 0x803F4BFC: sh          $t6, 0x95C($v0)
    MEM_H(0X95C, ctx->r2) = ctx->r14;
    // 0x803F4C00: sh          $t7, 0x8A($sp)
    MEM_H(0X8A, ctx->r29) = ctx->r15;
    // 0x803F4C04: lw          $v0, 0xC8($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XC8);
    // 0x803F4C08: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x803F4C0C: lw          $t8, 0x958($v0)
    ctx->r24 = MEM_W(ctx->r2, 0X958);
    // 0x803F4C10: addiu       $t4, $zero, 0x13
    ctx->r12 = ADD32(0, 0X13);
    // 0x803F4C14: beq         $t8, $zero, L_803F4C68
    if (ctx->r24 == 0) {
        // 0x803F4C18: nop
    
            goto L_803F4C68;
    }
    // 0x803F4C18: nop

    // 0x803F4C1C: jal         0x8006B35C
    // 0x803F4C20: addiu       $a1, $sp, 0x38
    ctx->r5 = ADD32(ctx->r29, 0X38);
    func_8006B35C(rdram, ctx);
        goto after_4;
    // 0x803F4C20: addiu       $a1, $sp, 0x38
    ctx->r5 = ADD32(ctx->r29, 0X38);
    after_4:
    // 0x803F4C24: lw          $t9, 0xC8($s0)
    ctx->r25 = MEM_W(ctx->r16, 0XC8);
    // 0x803F4C28: addiu       $a1, $zero, 0x13
    ctx->r5 = ADD32(0, 0X13);
    // 0x803F4C2C: lw          $t0, 0x958($t9)
    ctx->r8 = MEM_W(ctx->r25, 0X958);
    // 0x803F4C30: addiu       $a2, $sp, 0x38
    ctx->r6 = ADD32(ctx->r29, 0X38);
    // 0x803F4C34: lwc1        $f12, 0x84($t0)
    ctx->f12.u32l = MEM_W(ctx->r8, 0X84);
    // 0x803F4C38: jal         0x803F0000
    // 0x803F4C3C: addiu       $a3, $sp, 0x84
    ctx->r7 = ADD32(ctx->r29, 0X84);
    ovl_803F0000_menu_func_803F0000(rdram, ctx);
        goto after_5;
    // 0x803F4C3C: addiu       $a3, $sp, 0x84
    ctx->r7 = ADD32(ctx->r29, 0X84);
    after_5:
    // 0x803F4C40: lw          $t1, 0xC8($s0)
    ctx->r9 = MEM_W(ctx->r16, 0XC8);
    // 0x803F4C44: nop

    // 0x803F4C48: sh          $v0, 0x960($t1)
    MEM_H(0X960, ctx->r9) = ctx->r2;
    // 0x803F4C4C: lw          $t2, 0xC8($s0)
    ctx->r10 = MEM_W(ctx->r16, 0XC8);
    // 0x803F4C50: nop

    // 0x803F4C54: lw          $t3, 0x958($t2)
    ctx->r11 = MEM_W(ctx->r10, 0X958);
    // 0x803F4C58: nop

    // 0x803F4C5C: lwc1        $f6, 0x88($t3)
    ctx->f6.u32l = MEM_W(ctx->r11, 0X88);
    // 0x803F4C60: b           L_803F4C94
    // 0x803F4C64: swc1        $f6, 0xBC($s0)
    MEM_W(0XBC, ctx->r16) = ctx->f6.u32l;
        goto L_803F4C94;
    // 0x803F4C64: swc1        $f6, 0xBC($s0)
    MEM_W(0XBC, ctx->r16) = ctx->f6.u32l;
L_803F4C68:
    // 0x803F4C68: sh          $t4, 0x960($v0)
    MEM_H(0X960, ctx->r2) = ctx->r12;
    // 0x803F4C6C: lw          $t5, 0xC8($s0)
    ctx->r13 = MEM_W(ctx->r16, 0XC8);
    // 0x803F4C70: lui         $at, 0x803F
    ctx->r1 = S32(0X803F << 16);
    // 0x803F4C74: lw          $t6, 0x24($t5)
    ctx->r14 = MEM_W(ctx->r13, 0X24);
    // 0x803F4C78: lwc1        $f19, 0x7D78($at)
    ctx->f_odd[(19 - 1) * 2] = MEM_W(ctx->r1, 0X7D78);
    // 0x803F4C7C: lwc1        $f4, 0x8C0($t6)
    ctx->f4.u32l = MEM_W(ctx->r14, 0X8C0);
    // 0x803F4C80: lwc1        $f18, 0x7D7C($at)
    ctx->f18.u32l = MEM_W(ctx->r1, 0X7D7C);
    // 0x803F4C84: cvt.d.s     $f8, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f8.d = CVT_D_S(ctx->f4.fl);
    // 0x803F4C88: add.d       $f16, $f8, $f18
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f18.d); 
    ctx->f16.d = ctx->f8.d + ctx->f18.d;
    // 0x803F4C8C: cvt.s.d     $f10, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.d); 
    ctx->f10.fl = CVT_S_D(ctx->f16.d);
    // 0x803F4C90: swc1        $f10, 0xBC($s0)
    MEM_W(0XBC, ctx->r16) = ctx->f10.u32l;
L_803F4C94:
    // 0x803F4C94: lhu         $t7, 0x12($s0)
    ctx->r15 = MEM_HU(ctx->r16, 0X12);
    // 0x803F4C98: nop

    // 0x803F4C9C: ori         $t8, $t7, 0x4
    ctx->r24 = ctx->r15 | 0X4;
    // 0x803F4CA0: b           L_803F4D74
    // 0x803F4CA4: sh          $t8, 0x12($s0)
    MEM_H(0X12, ctx->r16) = ctx->r24;
        goto L_803F4D74;
    // 0x803F4CA4: sh          $t8, 0x12($s0)
    MEM_H(0X12, ctx->r16) = ctx->r24;
    // 0x803F4CA8: lui         $at, 0x4080
    ctx->r1 = S32(0X4080 << 16);
    // 0x803F4CAC: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    // 0x803F4CB0: lui         $at, 0x3FC0
    ctx->r1 = S32(0X3FC0 << 16);
    // 0x803F4CB4: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x803F4CB8: lui         $a2, 0x3E19
    ctx->r6 = S32(0X3E19 << 16);
    // 0x803F4CBC: lui         $a3, 0x3D4C
    ctx->r7 = S32(0X3D4C << 16);
    // 0x803F4CC0: addiu       $t9, $sp, 0x38
    ctx->r25 = ADD32(ctx->r29, 0X38);
    // 0x803F4CC4: sw          $t9, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r25;
    // 0x803F4CC8: ori         $a3, $a3, 0xCCCD
    ctx->r7 = ctx->r7 | 0XCCCD;
    // 0x803F4CCC: jal         0x8005743C
    // 0x803F4CD0: ori         $a2, $a2, 0x999A
    ctx->r6 = ctx->r6 | 0X999A;
    func_8005743C(rdram, ctx);
        goto after_6;
    // 0x803F4CD0: ori         $a2, $a2, 0x999A
    ctx->r6 = ctx->r6 | 0X999A;
    after_6:
    // 0x803F4CD4: lw          $t0, 0xC8($s0)
    ctx->r8 = MEM_W(ctx->r16, 0XC8);
    // 0x803F4CD8: addiu       $a1, $zero, 0x13
    ctx->r5 = ADD32(0, 0X13);
    // 0x803F4CDC: lw          $t1, 0x958($t0)
    ctx->r9 = MEM_W(ctx->r8, 0X958);
    // 0x803F4CE0: addiu       $a2, $sp, 0x38
    ctx->r6 = ADD32(ctx->r29, 0X38);
    // 0x803F4CE4: lwc1        $f12, 0x84($t1)
    ctx->f12.u32l = MEM_W(ctx->r9, 0X84);
    // 0x803F4CE8: jal         0x803F0000
    // 0x803F4CEC: addiu       $a3, $sp, 0x84
    ctx->r7 = ADD32(ctx->r29, 0X84);
    ovl_803F0000_menu_func_803F0000(rdram, ctx);
        goto after_7;
    // 0x803F4CEC: addiu       $a3, $sp, 0x84
    ctx->r7 = ADD32(ctx->r29, 0X84);
    after_7:
    // 0x803F4CF0: lw          $t2, 0xC8($s0)
    ctx->r10 = MEM_W(ctx->r16, 0XC8);
    // 0x803F4CF4: addiu       $t3, $zero, 0x1
    ctx->r11 = ADD32(0, 0X1);
    // 0x803F4CF8: sh          $v0, 0x960($t2)
    MEM_H(0X960, ctx->r10) = ctx->r2;
    // 0x803F4CFC: sh          $t3, 0x8A($sp)
    MEM_H(0X8A, ctx->r29) = ctx->r11;
    // 0x803F4D00: lw          $t4, 0xC8($s0)
    ctx->r12 = MEM_W(ctx->r16, 0XC8);
    // 0x803F4D04: lhu         $t6, 0x12($s0)
    ctx->r14 = MEM_HU(ctx->r16, 0X12);
    // 0x803F4D08: lw          $t5, 0x958($t4)
    ctx->r13 = MEM_W(ctx->r12, 0X958);
    // 0x803F4D0C: ori         $t7, $t6, 0x4
    ctx->r15 = ctx->r14 | 0X4;
    // 0x803F4D10: lwc1        $f6, 0x88($t5)
    ctx->f6.u32l = MEM_W(ctx->r13, 0X88);
    // 0x803F4D14: sh          $t7, 0x12($s0)
    MEM_H(0X12, ctx->r16) = ctx->r15;
    // 0x803F4D18: b           L_803F4D74
    // 0x803F4D1C: swc1        $f6, 0xBC($s0)
    MEM_W(0XBC, ctx->r16) = ctx->f6.u32l;
        goto L_803F4D74;
    // 0x803F4D1C: swc1        $f6, 0xBC($s0)
    MEM_W(0XBC, ctx->r16) = ctx->f6.u32l;
    // 0x803F4D20: jal         0x803F34D4
    // 0x803F4D24: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_803F0000_menu_func_803F34D4(rdram, ctx);
        goto after_8;
    // 0x803F4D24: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_8:
    // 0x803F4D28: b           L_803F4D78
    // 0x803F4D2C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_803F4D78;
    // 0x803F4D2C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x803F4D30: jal         0x803F3A98
    // 0x803F4D34: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_803F0000_menu_func_803F3A98(rdram, ctx);
        goto after_9;
    // 0x803F4D34: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_9:
    // 0x803F4D38: b           L_803F4D78
    // 0x803F4D3C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_803F4D78;
    // 0x803F4D3C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x803F4D40: jal         0x803F2A40
    // 0x803F4D44: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_803F0000_menu_func_803F2A40(rdram, ctx);
        goto after_10;
    // 0x803F4D44: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_10:
    // 0x803F4D48: bne         $v0, $zero, L_803F4D78
    if (ctx->r2 != 0) {
        // 0x803F4D4C: lw          $ra, 0x24($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X24);
            goto L_803F4D78;
    }
    // 0x803F4D4C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x803F4D50: jal         0x803F2464
    // 0x803F4D54: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_803F0000_menu_func_803F2464(rdram, ctx);
        goto after_11;
    // 0x803F4D54: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_11:
    // 0x803F4D58: b           L_803F4D78
    // 0x803F4D5C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_803F4D78;
    // 0x803F4D5C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x803F4D60: lhu         $t8, 0x12($s0)
    ctx->r24 = MEM_HU(ctx->r16, 0X12);
    // 0x803F4D64: mtc1        $zero, $f14
    ctx->f14.u32l = 0;
    // 0x803F4D68: ori         $t9, $t8, 0x8
    ctx->r25 = ctx->r24 | 0X8;
    // 0x803F4D6C: sh          $t9, 0x12($s0)
    MEM_H(0X12, ctx->r16) = ctx->r25;
    // 0x803F4D70: swc1        $f14, 0xAC($s0)
    MEM_W(0XAC, ctx->r16) = ctx->f14.u32l;
L_803F4D74:
    // 0x803F4D74: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_803F4D78:
    // 0x803F4D78: lhu         $v0, 0x8A($sp)
    ctx->r2 = MEM_HU(ctx->r29, 0X8A);
    // 0x803F4D7C: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x803F4D80: jr          $ra
    // 0x803F4D84: addiu       $sp, $sp, 0xD0
    ctx->r29 = ADD32(ctx->r29, 0XD0);
    return;
    // 0x803F4D84: addiu       $sp, $sp, 0xD0
    ctx->r29 = ADD32(ctx->r29, 0XD0);
;}
RECOMP_FUNC void ovl_803F0000_menu_func_803F4B88(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803F4B88: nop

    // 0x803F4B8C: lwc1        $f18, 0x50($a2)
    ctx->f18.u32l = MEM_W(ctx->r6, 0X50);
    // 0x803F4B90: lwc1        $f17, 0x7D70($at)
    ctx->f_odd[(17 - 1) * 2] = MEM_W(ctx->r1, 0X7D70);
    // 0x803F4B94: lwc1        $f16, 0x7D74($at)
    ctx->f16.u32l = MEM_W(ctx->r1, 0X7D74);
    // 0x803F4B98: cvt.d.s     $f10, $f18
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.fl); 
    ctx->f10.d = CVT_D_S(ctx->f18.fl);
    // 0x803F4B9C: c.lt.d      $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f16.d < ctx->f10.d;
    // 0x803F4BA0: nop

    // 0x803F4BA4: bc1f        L_803F4BBC
    if (!c1cs) {
        // 0x803F4BA8: nop
    
            goto L_803F4BBC;
    }
    // 0x803F4BA8: nop

    // 0x803F4BAC: jal         0x803F3A98
    // 0x803F4BB0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_803F0000_menu_func_803F3A98(rdram, ctx);
        goto after_0;
    // 0x803F4BB0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_0:
    // 0x803F4BB4: b           L_803F4D78
    // 0x803F4BB8: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_803F4D78;
    // 0x803F4BB8: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_803F4BBC:
    // 0x803F4BBC: jal         0x803F401C
    // 0x803F4BC0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_803F0000_menu_func_803F401C(rdram, ctx);
        goto after_1;
    // 0x803F4BC0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
    // 0x803F4BC4: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x803F4BC8: sh          $t2, 0x8A($sp)
    MEM_H(0X8A, ctx->r29) = ctx->r10;
    // 0x803F4BCC: lw          $v0, 0xC8($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XC8);
    // 0x803F4BD0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x803F4BD4: lhu         $t3, 0x95C($v0)
    ctx->r11 = MEM_HU(ctx->r2, 0X95C);
    // 0x803F4BD8: nop

    // 0x803F4BDC: ori         $t4, $t3, 0x2800
    ctx->r12 = ctx->r11 | 0X2800;
    // 0x803F4BE0: jal         0x803F3D10
    // 0x803F4BE4: sh          $t4, 0x95C($v0)
    MEM_H(0X95C, ctx->r2) = ctx->r12;
    ovl_803F0000_menu_func_803F3D10(rdram, ctx);
        goto after_2;
    // 0x803F4BE4: sh          $t4, 0x95C($v0)
    MEM_H(0X95C, ctx->r2) = ctx->r12;
    after_2:
    // 0x803F4BE8: b           L_803F4D78
    // 0x803F4BEC: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_803F4D78;
    // 0x803F4BEC: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x803F4BF0: lhu         $t5, 0x95C($v0)
    ctx->r13 = MEM_HU(ctx->r2, 0X95C);
    // 0x803F4BF4: addiu       $t7, $zero, 0x8
    ctx->r15 = ADD32(0, 0X8);
    // 0x803F4BF8: andi        $t6, $t5, 0xFFFE
    ctx->r14 = ctx->r13 & 0XFFFE;
    // 0x803F4BFC: sh          $t6, 0x95C($v0)
    MEM_H(0X95C, ctx->r2) = ctx->r14;
    // 0x803F4C00: sh          $t7, 0x8A($sp)
    MEM_H(0X8A, ctx->r29) = ctx->r15;
    // 0x803F4C04: lw          $v0, 0xC8($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XC8);
    // 0x803F4C08: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x803F4C0C: lw          $t8, 0x958($v0)
    ctx->r24 = MEM_W(ctx->r2, 0X958);
    // 0x803F4C10: addiu       $t4, $zero, 0x13
    ctx->r12 = ADD32(0, 0X13);
    // 0x803F4C14: beq         $t8, $zero, L_803F4C68
    if (ctx->r24 == 0) {
        // 0x803F4C18: nop
    
            goto L_803F4C68;
    }
    // 0x803F4C18: nop

    // 0x803F4C1C: jal         0x8006B35C
    // 0x803F4C20: addiu       $a1, $sp, 0x38
    ctx->r5 = ADD32(ctx->r29, 0X38);
    func_8006B35C(rdram, ctx);
        goto after_3;
    // 0x803F4C20: addiu       $a1, $sp, 0x38
    ctx->r5 = ADD32(ctx->r29, 0X38);
    after_3:
    // 0x803F4C24: lw          $t9, 0xC8($s0)
    ctx->r25 = MEM_W(ctx->r16, 0XC8);
    // 0x803F4C28: addiu       $a1, $zero, 0x13
    ctx->r5 = ADD32(0, 0X13);
    // 0x803F4C2C: lw          $t0, 0x958($t9)
    ctx->r8 = MEM_W(ctx->r25, 0X958);
    // 0x803F4C30: addiu       $a2, $sp, 0x38
    ctx->r6 = ADD32(ctx->r29, 0X38);
    // 0x803F4C34: lwc1        $f12, 0x84($t0)
    ctx->f12.u32l = MEM_W(ctx->r8, 0X84);
    // 0x803F4C38: jal         0x803F0000
    // 0x803F4C3C: addiu       $a3, $sp, 0x84
    ctx->r7 = ADD32(ctx->r29, 0X84);
    ovl_803F0000_menu_func_803F0000(rdram, ctx);
        goto after_4;
    // 0x803F4C3C: addiu       $a3, $sp, 0x84
    ctx->r7 = ADD32(ctx->r29, 0X84);
    after_4:
    // 0x803F4C40: lw          $t1, 0xC8($s0)
    ctx->r9 = MEM_W(ctx->r16, 0XC8);
    // 0x803F4C44: nop

    // 0x803F4C48: sh          $v0, 0x960($t1)
    MEM_H(0X960, ctx->r9) = ctx->r2;
    // 0x803F4C4C: lw          $t2, 0xC8($s0)
    ctx->r10 = MEM_W(ctx->r16, 0XC8);
    // 0x803F4C50: nop

    // 0x803F4C54: lw          $t3, 0x958($t2)
    ctx->r11 = MEM_W(ctx->r10, 0X958);
    // 0x803F4C58: nop

    // 0x803F4C5C: lwc1        $f6, 0x88($t3)
    ctx->f6.u32l = MEM_W(ctx->r11, 0X88);
    // 0x803F4C60: b           L_803F4C94
    // 0x803F4C64: swc1        $f6, 0xBC($s0)
    MEM_W(0XBC, ctx->r16) = ctx->f6.u32l;
        goto L_803F4C94;
    // 0x803F4C64: swc1        $f6, 0xBC($s0)
    MEM_W(0XBC, ctx->r16) = ctx->f6.u32l;
L_803F4C68:
    // 0x803F4C68: sh          $t4, 0x960($v0)
    MEM_H(0X960, ctx->r2) = ctx->r12;
    // 0x803F4C6C: lw          $t5, 0xC8($s0)
    ctx->r13 = MEM_W(ctx->r16, 0XC8);
    // 0x803F4C70: lui         $at, 0x803F
    ctx->r1 = S32(0X803F << 16);
    // 0x803F4C74: lw          $t6, 0x24($t5)
    ctx->r14 = MEM_W(ctx->r13, 0X24);
    // 0x803F4C78: lwc1        $f19, 0x7D78($at)
    ctx->f_odd[(19 - 1) * 2] = MEM_W(ctx->r1, 0X7D78);
    // 0x803F4C7C: lwc1        $f4, 0x8C0($t6)
    ctx->f4.u32l = MEM_W(ctx->r14, 0X8C0);
    // 0x803F4C80: lwc1        $f18, 0x7D7C($at)
    ctx->f18.u32l = MEM_W(ctx->r1, 0X7D7C);
    // 0x803F4C84: cvt.d.s     $f8, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f8.d = CVT_D_S(ctx->f4.fl);
    // 0x803F4C88: add.d       $f16, $f8, $f18
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f18.d); 
    ctx->f16.d = ctx->f8.d + ctx->f18.d;
    // 0x803F4C8C: cvt.s.d     $f10, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.d); 
    ctx->f10.fl = CVT_S_D(ctx->f16.d);
    // 0x803F4C90: swc1        $f10, 0xBC($s0)
    MEM_W(0XBC, ctx->r16) = ctx->f10.u32l;
L_803F4C94:
    // 0x803F4C94: lhu         $t7, 0x12($s0)
    ctx->r15 = MEM_HU(ctx->r16, 0X12);
    // 0x803F4C98: nop

    // 0x803F4C9C: ori         $t8, $t7, 0x4
    ctx->r24 = ctx->r15 | 0X4;
    // 0x803F4CA0: b           L_803F4D74
    // 0x803F4CA4: sh          $t8, 0x12($s0)
    MEM_H(0X12, ctx->r16) = ctx->r24;
        goto L_803F4D74;
    // 0x803F4CA4: sh          $t8, 0x12($s0)
    MEM_H(0X12, ctx->r16) = ctx->r24;
    // 0x803F4CA8: lui         $at, 0x4080
    ctx->r1 = S32(0X4080 << 16);
    // 0x803F4CAC: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    // 0x803F4CB0: lui         $at, 0x3FC0
    ctx->r1 = S32(0X3FC0 << 16);
    // 0x803F4CB4: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x803F4CB8: lui         $a2, 0x3E19
    ctx->r6 = S32(0X3E19 << 16);
    // 0x803F4CBC: lui         $a3, 0x3D4C
    ctx->r7 = S32(0X3D4C << 16);
    // 0x803F4CC0: addiu       $t9, $sp, 0x38
    ctx->r25 = ADD32(ctx->r29, 0X38);
    // 0x803F4CC4: sw          $t9, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r25;
    // 0x803F4CC8: ori         $a3, $a3, 0xCCCD
    ctx->r7 = ctx->r7 | 0XCCCD;
    // 0x803F4CCC: jal         0x8005743C
    // 0x803F4CD0: ori         $a2, $a2, 0x999A
    ctx->r6 = ctx->r6 | 0X999A;
    func_8005743C(rdram, ctx);
        goto after_5;
    // 0x803F4CD0: ori         $a2, $a2, 0x999A
    ctx->r6 = ctx->r6 | 0X999A;
    after_5:
    // 0x803F4CD4: lw          $t0, 0xC8($s0)
    ctx->r8 = MEM_W(ctx->r16, 0XC8);
    // 0x803F4CD8: addiu       $a1, $zero, 0x13
    ctx->r5 = ADD32(0, 0X13);
    // 0x803F4CDC: lw          $t1, 0x958($t0)
    ctx->r9 = MEM_W(ctx->r8, 0X958);
    // 0x803F4CE0: addiu       $a2, $sp, 0x38
    ctx->r6 = ADD32(ctx->r29, 0X38);
    // 0x803F4CE4: lwc1        $f12, 0x84($t1)
    ctx->f12.u32l = MEM_W(ctx->r9, 0X84);
    // 0x803F4CE8: jal         0x803F0000
    // 0x803F4CEC: addiu       $a3, $sp, 0x84
    ctx->r7 = ADD32(ctx->r29, 0X84);
    ovl_803F0000_menu_func_803F0000(rdram, ctx);
        goto after_6;
    // 0x803F4CEC: addiu       $a3, $sp, 0x84
    ctx->r7 = ADD32(ctx->r29, 0X84);
    after_6:
    // 0x803F4CF0: lw          $t2, 0xC8($s0)
    ctx->r10 = MEM_W(ctx->r16, 0XC8);
    // 0x803F4CF4: addiu       $t3, $zero, 0x1
    ctx->r11 = ADD32(0, 0X1);
    // 0x803F4CF8: sh          $v0, 0x960($t2)
    MEM_H(0X960, ctx->r10) = ctx->r2;
    // 0x803F4CFC: sh          $t3, 0x8A($sp)
    MEM_H(0X8A, ctx->r29) = ctx->r11;
    // 0x803F4D00: lw          $t4, 0xC8($s0)
    ctx->r12 = MEM_W(ctx->r16, 0XC8);
    // 0x803F4D04: lhu         $t6, 0x12($s0)
    ctx->r14 = MEM_HU(ctx->r16, 0X12);
    // 0x803F4D08: lw          $t5, 0x958($t4)
    ctx->r13 = MEM_W(ctx->r12, 0X958);
    // 0x803F4D0C: ori         $t7, $t6, 0x4
    ctx->r15 = ctx->r14 | 0X4;
    // 0x803F4D10: lwc1        $f6, 0x88($t5)
    ctx->f6.u32l = MEM_W(ctx->r13, 0X88);
    // 0x803F4D14: sh          $t7, 0x12($s0)
    MEM_H(0X12, ctx->r16) = ctx->r15;
    // 0x803F4D18: b           L_803F4D74
    // 0x803F4D1C: swc1        $f6, 0xBC($s0)
    MEM_W(0XBC, ctx->r16) = ctx->f6.u32l;
        goto L_803F4D74;
    // 0x803F4D1C: swc1        $f6, 0xBC($s0)
    MEM_W(0XBC, ctx->r16) = ctx->f6.u32l;
    // 0x803F4D20: jal         0x803F34D4
    // 0x803F4D24: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_803F0000_menu_func_803F34D4(rdram, ctx);
        goto after_7;
    // 0x803F4D24: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_7:
    // 0x803F4D28: b           L_803F4D78
    // 0x803F4D2C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_803F4D78;
    // 0x803F4D2C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x803F4D30: jal         0x803F3A98
    // 0x803F4D34: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_803F0000_menu_func_803F3A98(rdram, ctx);
        goto after_8;
    // 0x803F4D34: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_8:
    // 0x803F4D38: b           L_803F4D78
    // 0x803F4D3C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_803F4D78;
    // 0x803F4D3C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x803F4D40: jal         0x803F2A40
    // 0x803F4D44: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_803F0000_menu_func_803F2A40(rdram, ctx);
        goto after_9;
    // 0x803F4D44: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_9:
    // 0x803F4D48: bne         $v0, $zero, L_803F4D78
    if (ctx->r2 != 0) {
        // 0x803F4D4C: lw          $ra, 0x24($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X24);
            goto L_803F4D78;
    }
    // 0x803F4D4C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x803F4D50: jal         0x803F2464
    // 0x803F4D54: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_803F0000_menu_func_803F2464(rdram, ctx);
        goto after_10;
    // 0x803F4D54: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_10:
    // 0x803F4D58: b           L_803F4D78
    // 0x803F4D5C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_803F4D78;
    // 0x803F4D5C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x803F4D60: lhu         $t8, 0x12($s0)
    ctx->r24 = MEM_HU(ctx->r16, 0X12);
    // 0x803F4D64: mtc1        $zero, $f14
    ctx->f14.u32l = 0;
    // 0x803F4D68: ori         $t9, $t8, 0x8
    ctx->r25 = ctx->r24 | 0X8;
    // 0x803F4D6C: sh          $t9, 0x12($s0)
    MEM_H(0X12, ctx->r16) = ctx->r25;
    // 0x803F4D70: swc1        $f14, 0xAC($s0)
    MEM_W(0XAC, ctx->r16) = ctx->f14.u32l;
L_803F4D74:
    // 0x803F4D74: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_803F4D78:
    // 0x803F4D78: lhu         $v0, 0x8A($sp)
    ctx->r2 = MEM_HU(ctx->r29, 0X8A);
    // 0x803F4D7C: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x803F4D80: jr          $ra
    // 0x803F4D84: addiu       $sp, $sp, 0xD0
    ctx->r29 = ADD32(ctx->r29, 0XD0);
    return;
    // 0x803F4D84: addiu       $sp, $sp, 0xD0
    ctx->r29 = ADD32(ctx->r29, 0XD0);
;}
RECOMP_FUNC void ovl_803F0000_menu_func_803F4BFC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803F4BFC: sh          $t6, 0x95C($v0)
    MEM_H(0X95C, ctx->r2) = ctx->r14;
    // 0x803F4C00: sh          $t7, 0x8A($sp)
    MEM_H(0X8A, ctx->r29) = ctx->r15;
    // 0x803F4C04: lw          $v0, 0xC8($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XC8);
    // 0x803F4C08: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x803F4C0C: lw          $t8, 0x958($v0)
    ctx->r24 = MEM_W(ctx->r2, 0X958);
    // 0x803F4C10: addiu       $t4, $zero, 0x13
    ctx->r12 = ADD32(0, 0X13);
    // 0x803F4C14: beq         $t8, $zero, L_803F4C68
    if (ctx->r24 == 0) {
        // 0x803F4C18: nop
    
            goto L_803F4C68;
    }
    // 0x803F4C18: nop

    // 0x803F4C1C: jal         0x8006B35C
    // 0x803F4C20: addiu       $a1, $sp, 0x38
    ctx->r5 = ADD32(ctx->r29, 0X38);
    func_8006B35C(rdram, ctx);
        goto after_0;
    // 0x803F4C20: addiu       $a1, $sp, 0x38
    ctx->r5 = ADD32(ctx->r29, 0X38);
    after_0:
    // 0x803F4C24: lw          $t9, 0xC8($s0)
    ctx->r25 = MEM_W(ctx->r16, 0XC8);
    // 0x803F4C28: addiu       $a1, $zero, 0x13
    ctx->r5 = ADD32(0, 0X13);
    // 0x803F4C2C: lw          $t0, 0x958($t9)
    ctx->r8 = MEM_W(ctx->r25, 0X958);
    // 0x803F4C30: addiu       $a2, $sp, 0x38
    ctx->r6 = ADD32(ctx->r29, 0X38);
    // 0x803F4C34: lwc1        $f12, 0x84($t0)
    ctx->f12.u32l = MEM_W(ctx->r8, 0X84);
    // 0x803F4C38: jal         0x803F0000
    // 0x803F4C3C: addiu       $a3, $sp, 0x84
    ctx->r7 = ADD32(ctx->r29, 0X84);
    ovl_803F0000_menu_func_803F0000(rdram, ctx);
        goto after_1;
    // 0x803F4C3C: addiu       $a3, $sp, 0x84
    ctx->r7 = ADD32(ctx->r29, 0X84);
    after_1:
    // 0x803F4C40: lw          $t1, 0xC8($s0)
    ctx->r9 = MEM_W(ctx->r16, 0XC8);
    // 0x803F4C44: nop

    // 0x803F4C48: sh          $v0, 0x960($t1)
    MEM_H(0X960, ctx->r9) = ctx->r2;
    // 0x803F4C4C: lw          $t2, 0xC8($s0)
    ctx->r10 = MEM_W(ctx->r16, 0XC8);
    // 0x803F4C50: nop

    // 0x803F4C54: lw          $t3, 0x958($t2)
    ctx->r11 = MEM_W(ctx->r10, 0X958);
    // 0x803F4C58: nop

    // 0x803F4C5C: lwc1        $f6, 0x88($t3)
    ctx->f6.u32l = MEM_W(ctx->r11, 0X88);
    // 0x803F4C60: b           L_803F4C94
    // 0x803F4C64: swc1        $f6, 0xBC($s0)
    MEM_W(0XBC, ctx->r16) = ctx->f6.u32l;
        goto L_803F4C94;
    // 0x803F4C64: swc1        $f6, 0xBC($s0)
    MEM_W(0XBC, ctx->r16) = ctx->f6.u32l;
L_803F4C68:
    // 0x803F4C68: sh          $t4, 0x960($v0)
    MEM_H(0X960, ctx->r2) = ctx->r12;
    // 0x803F4C6C: lw          $t5, 0xC8($s0)
    ctx->r13 = MEM_W(ctx->r16, 0XC8);
    // 0x803F4C70: lui         $at, 0x803F
    ctx->r1 = S32(0X803F << 16);
    // 0x803F4C74: lw          $t6, 0x24($t5)
    ctx->r14 = MEM_W(ctx->r13, 0X24);
    // 0x803F4C78: lwc1        $f19, 0x7D78($at)
    ctx->f_odd[(19 - 1) * 2] = MEM_W(ctx->r1, 0X7D78);
    // 0x803F4C7C: lwc1        $f4, 0x8C0($t6)
    ctx->f4.u32l = MEM_W(ctx->r14, 0X8C0);
    // 0x803F4C80: lwc1        $f18, 0x7D7C($at)
    ctx->f18.u32l = MEM_W(ctx->r1, 0X7D7C);
    // 0x803F4C84: cvt.d.s     $f8, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f8.d = CVT_D_S(ctx->f4.fl);
    // 0x803F4C88: add.d       $f16, $f8, $f18
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f18.d); 
    ctx->f16.d = ctx->f8.d + ctx->f18.d;
    // 0x803F4C8C: cvt.s.d     $f10, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.d); 
    ctx->f10.fl = CVT_S_D(ctx->f16.d);
    // 0x803F4C90: swc1        $f10, 0xBC($s0)
    MEM_W(0XBC, ctx->r16) = ctx->f10.u32l;
L_803F4C94:
    // 0x803F4C94: lhu         $t7, 0x12($s0)
    ctx->r15 = MEM_HU(ctx->r16, 0X12);
    // 0x803F4C98: nop

    // 0x803F4C9C: ori         $t8, $t7, 0x4
    ctx->r24 = ctx->r15 | 0X4;
    // 0x803F4CA0: b           L_803F4D74
    // 0x803F4CA4: sh          $t8, 0x12($s0)
    MEM_H(0X12, ctx->r16) = ctx->r24;
        goto L_803F4D74;
    // 0x803F4CA4: sh          $t8, 0x12($s0)
    MEM_H(0X12, ctx->r16) = ctx->r24;
    // 0x803F4CA8: lui         $at, 0x4080
    ctx->r1 = S32(0X4080 << 16);
    // 0x803F4CAC: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    // 0x803F4CB0: lui         $at, 0x3FC0
    ctx->r1 = S32(0X3FC0 << 16);
    // 0x803F4CB4: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x803F4CB8: lui         $a2, 0x3E19
    ctx->r6 = S32(0X3E19 << 16);
    // 0x803F4CBC: lui         $a3, 0x3D4C
    ctx->r7 = S32(0X3D4C << 16);
    // 0x803F4CC0: addiu       $t9, $sp, 0x38
    ctx->r25 = ADD32(ctx->r29, 0X38);
    // 0x803F4CC4: sw          $t9, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r25;
    // 0x803F4CC8: ori         $a3, $a3, 0xCCCD
    ctx->r7 = ctx->r7 | 0XCCCD;
    // 0x803F4CCC: jal         0x8005743C
    // 0x803F4CD0: ori         $a2, $a2, 0x999A
    ctx->r6 = ctx->r6 | 0X999A;
    func_8005743C(rdram, ctx);
        goto after_2;
    // 0x803F4CD0: ori         $a2, $a2, 0x999A
    ctx->r6 = ctx->r6 | 0X999A;
    after_2:
    // 0x803F4CD4: lw          $t0, 0xC8($s0)
    ctx->r8 = MEM_W(ctx->r16, 0XC8);
    // 0x803F4CD8: addiu       $a1, $zero, 0x13
    ctx->r5 = ADD32(0, 0X13);
    // 0x803F4CDC: lw          $t1, 0x958($t0)
    ctx->r9 = MEM_W(ctx->r8, 0X958);
    // 0x803F4CE0: addiu       $a2, $sp, 0x38
    ctx->r6 = ADD32(ctx->r29, 0X38);
    // 0x803F4CE4: lwc1        $f12, 0x84($t1)
    ctx->f12.u32l = MEM_W(ctx->r9, 0X84);
    // 0x803F4CE8: jal         0x803F0000
    // 0x803F4CEC: addiu       $a3, $sp, 0x84
    ctx->r7 = ADD32(ctx->r29, 0X84);
    ovl_803F0000_menu_func_803F0000(rdram, ctx);
        goto after_3;
    // 0x803F4CEC: addiu       $a3, $sp, 0x84
    ctx->r7 = ADD32(ctx->r29, 0X84);
    after_3:
    // 0x803F4CF0: lw          $t2, 0xC8($s0)
    ctx->r10 = MEM_W(ctx->r16, 0XC8);
    // 0x803F4CF4: addiu       $t3, $zero, 0x1
    ctx->r11 = ADD32(0, 0X1);
    // 0x803F4CF8: sh          $v0, 0x960($t2)
    MEM_H(0X960, ctx->r10) = ctx->r2;
    // 0x803F4CFC: sh          $t3, 0x8A($sp)
    MEM_H(0X8A, ctx->r29) = ctx->r11;
    // 0x803F4D00: lw          $t4, 0xC8($s0)
    ctx->r12 = MEM_W(ctx->r16, 0XC8);
    // 0x803F4D04: lhu         $t6, 0x12($s0)
    ctx->r14 = MEM_HU(ctx->r16, 0X12);
    // 0x803F4D08: lw          $t5, 0x958($t4)
    ctx->r13 = MEM_W(ctx->r12, 0X958);
    // 0x803F4D0C: ori         $t7, $t6, 0x4
    ctx->r15 = ctx->r14 | 0X4;
    // 0x803F4D10: lwc1        $f6, 0x88($t5)
    ctx->f6.u32l = MEM_W(ctx->r13, 0X88);
    // 0x803F4D14: sh          $t7, 0x12($s0)
    MEM_H(0X12, ctx->r16) = ctx->r15;
    // 0x803F4D18: b           L_803F4D74
    // 0x803F4D1C: swc1        $f6, 0xBC($s0)
    MEM_W(0XBC, ctx->r16) = ctx->f6.u32l;
        goto L_803F4D74;
    // 0x803F4D1C: swc1        $f6, 0xBC($s0)
    MEM_W(0XBC, ctx->r16) = ctx->f6.u32l;
    // 0x803F4D20: jal         0x803F34D4
    // 0x803F4D24: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_803F0000_menu_func_803F34D4(rdram, ctx);
        goto after_4;
    // 0x803F4D24: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_4:
    // 0x803F4D28: b           L_803F4D78
    // 0x803F4D2C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_803F4D78;
    // 0x803F4D2C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x803F4D30: jal         0x803F3A98
    // 0x803F4D34: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_803F0000_menu_func_803F3A98(rdram, ctx);
        goto after_5;
    // 0x803F4D34: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_5:
    // 0x803F4D38: b           L_803F4D78
    // 0x803F4D3C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_803F4D78;
    // 0x803F4D3C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x803F4D40: jal         0x803F2A40
    // 0x803F4D44: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_803F0000_menu_func_803F2A40(rdram, ctx);
        goto after_6;
    // 0x803F4D44: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_6:
    // 0x803F4D48: bne         $v0, $zero, L_803F4D78
    if (ctx->r2 != 0) {
        // 0x803F4D4C: lw          $ra, 0x24($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X24);
            goto L_803F4D78;
    }
    // 0x803F4D4C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x803F4D50: jal         0x803F2464
    // 0x803F4D54: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_803F0000_menu_func_803F2464(rdram, ctx);
        goto after_7;
    // 0x803F4D54: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_7:
    // 0x803F4D58: b           L_803F4D78
    // 0x803F4D5C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_803F4D78;
    // 0x803F4D5C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x803F4D60: lhu         $t8, 0x12($s0)
    ctx->r24 = MEM_HU(ctx->r16, 0X12);
    // 0x803F4D64: mtc1        $zero, $f14
    ctx->f14.u32l = 0;
    // 0x803F4D68: ori         $t9, $t8, 0x8
    ctx->r25 = ctx->r24 | 0X8;
    // 0x803F4D6C: sh          $t9, 0x12($s0)
    MEM_H(0X12, ctx->r16) = ctx->r25;
    // 0x803F4D70: swc1        $f14, 0xAC($s0)
    MEM_W(0XAC, ctx->r16) = ctx->f14.u32l;
L_803F4D74:
    // 0x803F4D74: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_803F4D78:
    // 0x803F4D78: lhu         $v0, 0x8A($sp)
    ctx->r2 = MEM_HU(ctx->r29, 0X8A);
    // 0x803F4D7C: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x803F4D80: jr          $ra
    // 0x803F4D84: addiu       $sp, $sp, 0xD0
    ctx->r29 = ADD32(ctx->r29, 0XD0);
    return;
    // 0x803F4D84: addiu       $sp, $sp, 0xD0
    ctx->r29 = ADD32(ctx->r29, 0XD0);
;}
RECOMP_FUNC void ovl_803F0000_menu_func_803F4CB0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803F4CB0: lui         $at, 0x3FC0
    ctx->r1 = S32(0X3FC0 << 16);
    // 0x803F4CB4: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x803F4CB8: lui         $a2, 0x3E19
    ctx->r6 = S32(0X3E19 << 16);
    // 0x803F4CBC: lui         $a3, 0x3D4C
    ctx->r7 = S32(0X3D4C << 16);
    // 0x803F4CC0: addiu       $t9, $sp, 0x38
    ctx->r25 = ADD32(ctx->r29, 0X38);
    // 0x803F4CC4: sw          $t9, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r25;
    // 0x803F4CC8: ori         $a3, $a3, 0xCCCD
    ctx->r7 = ctx->r7 | 0XCCCD;
    // 0x803F4CCC: jal         0x8005743C
    // 0x803F4CD0: ori         $a2, $a2, 0x999A
    ctx->r6 = ctx->r6 | 0X999A;
    func_8005743C(rdram, ctx);
        goto after_0;
    // 0x803F4CD0: ori         $a2, $a2, 0x999A
    ctx->r6 = ctx->r6 | 0X999A;
    after_0:
    // 0x803F4CD4: lw          $t0, 0xC8($s0)
    ctx->r8 = MEM_W(ctx->r16, 0XC8);
    // 0x803F4CD8: addiu       $a1, $zero, 0x13
    ctx->r5 = ADD32(0, 0X13);
    // 0x803F4CDC: lw          $t1, 0x958($t0)
    ctx->r9 = MEM_W(ctx->r8, 0X958);
    // 0x803F4CE0: addiu       $a2, $sp, 0x38
    ctx->r6 = ADD32(ctx->r29, 0X38);
    // 0x803F4CE4: lwc1        $f12, 0x84($t1)
    ctx->f12.u32l = MEM_W(ctx->r9, 0X84);
    // 0x803F4CE8: jal         0x803F0000
    // 0x803F4CEC: addiu       $a3, $sp, 0x84
    ctx->r7 = ADD32(ctx->r29, 0X84);
    ovl_803F0000_menu_func_803F0000(rdram, ctx);
        goto after_1;
    // 0x803F4CEC: addiu       $a3, $sp, 0x84
    ctx->r7 = ADD32(ctx->r29, 0X84);
    after_1:
    // 0x803F4CF0: lw          $t2, 0xC8($s0)
    ctx->r10 = MEM_W(ctx->r16, 0XC8);
    // 0x803F4CF4: addiu       $t3, $zero, 0x1
    ctx->r11 = ADD32(0, 0X1);
    // 0x803F4CF8: sh          $v0, 0x960($t2)
    MEM_H(0X960, ctx->r10) = ctx->r2;
    // 0x803F4CFC: sh          $t3, 0x8A($sp)
    MEM_H(0X8A, ctx->r29) = ctx->r11;
    // 0x803F4D00: lw          $t4, 0xC8($s0)
    ctx->r12 = MEM_W(ctx->r16, 0XC8);
    // 0x803F4D04: lhu         $t6, 0x12($s0)
    ctx->r14 = MEM_HU(ctx->r16, 0X12);
    // 0x803F4D08: lw          $t5, 0x958($t4)
    ctx->r13 = MEM_W(ctx->r12, 0X958);
    // 0x803F4D0C: ori         $t7, $t6, 0x4
    ctx->r15 = ctx->r14 | 0X4;
    // 0x803F4D10: lwc1        $f6, 0x88($t5)
    ctx->f6.u32l = MEM_W(ctx->r13, 0X88);
    // 0x803F4D14: sh          $t7, 0x12($s0)
    MEM_H(0X12, ctx->r16) = ctx->r15;
    // 0x803F4D18: b           L_803F4D74
    // 0x803F4D1C: swc1        $f6, 0xBC($s0)
    MEM_W(0XBC, ctx->r16) = ctx->f6.u32l;
        goto L_803F4D74;
    // 0x803F4D1C: swc1        $f6, 0xBC($s0)
    MEM_W(0XBC, ctx->r16) = ctx->f6.u32l;
    // 0x803F4D20: jal         0x803F34D4
    // 0x803F4D24: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_803F0000_menu_func_803F34D4(rdram, ctx);
        goto after_2;
    // 0x803F4D24: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_2:
    // 0x803F4D28: b           L_803F4D78
    // 0x803F4D2C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_803F4D78;
    // 0x803F4D2C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x803F4D30: jal         0x803F3A98
    // 0x803F4D34: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_803F0000_menu_func_803F3A98(rdram, ctx);
        goto after_3;
    // 0x803F4D34: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_3:
    // 0x803F4D38: b           L_803F4D78
    // 0x803F4D3C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_803F4D78;
    // 0x803F4D3C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x803F4D40: jal         0x803F2A40
    // 0x803F4D44: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_803F0000_menu_func_803F2A40(rdram, ctx);
        goto after_4;
    // 0x803F4D44: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_4:
    // 0x803F4D48: bne         $v0, $zero, L_803F4D78
    if (ctx->r2 != 0) {
        // 0x803F4D4C: lw          $ra, 0x24($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X24);
            goto L_803F4D78;
    }
    // 0x803F4D4C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x803F4D50: jal         0x803F2464
    // 0x803F4D54: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_803F0000_menu_func_803F2464(rdram, ctx);
        goto after_5;
    // 0x803F4D54: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_5:
    // 0x803F4D58: b           L_803F4D78
    // 0x803F4D5C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_803F4D78;
    // 0x803F4D5C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x803F4D60: lhu         $t8, 0x12($s0)
    ctx->r24 = MEM_HU(ctx->r16, 0X12);
    // 0x803F4D64: mtc1        $zero, $f14
    ctx->f14.u32l = 0;
    // 0x803F4D68: ori         $t9, $t8, 0x8
    ctx->r25 = ctx->r24 | 0X8;
    // 0x803F4D6C: sh          $t9, 0x12($s0)
    MEM_H(0X12, ctx->r16) = ctx->r25;
    // 0x803F4D70: swc1        $f14, 0xAC($s0)
    MEM_W(0XAC, ctx->r16) = ctx->f14.u32l;
L_803F4D74:
    // 0x803F4D74: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_803F4D78:
    // 0x803F4D78: lhu         $v0, 0x8A($sp)
    ctx->r2 = MEM_HU(ctx->r29, 0X8A);
    // 0x803F4D7C: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x803F4D80: jr          $ra
    // 0x803F4D84: addiu       $sp, $sp, 0xD0
    ctx->r29 = ADD32(ctx->r29, 0XD0);
    return;
    // 0x803F4D84: addiu       $sp, $sp, 0xD0
    ctx->r29 = ADD32(ctx->r29, 0XD0);
;}
RECOMP_FUNC void ovl_803F0000_menu_func_803F4D88(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803F4D88: addiu       $sp, $sp, -0x60
    ctx->r29 = ADD32(ctx->r29, -0X60);
    // 0x803F4D8C: sw          $s4, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r20;
    // 0x803F4D90: or          $s4, $a0, $zero
    ctx->r20 = ctx->r4 | 0;
    // 0x803F4D94: sw          $ra, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r31;
    // 0x803F4D98: sw          $s3, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r19;
    // 0x803F4D9C: sw          $s2, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r18;
    // 0x803F4DA0: sw          $s1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r17;
    // 0x803F4DA4: sw          $s0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r16;
    // 0x803F4DA8: swc1        $f25, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f_odd[(25 - 1) * 2];
    // 0x803F4DAC: swc1        $f24, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f24.u32l;
    // 0x803F4DB0: swc1        $f23, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f_odd[(23 - 1) * 2];
    // 0x803F4DB4: swc1        $f22, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f22.u32l;
    // 0x803F4DB8: swc1        $f21, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x803F4DBC: swc1        $f20, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f20.u32l;
    // 0x803F4DC0: lw          $t6, 0xC8($s4)
    ctx->r14 = MEM_W(ctx->r20, 0XC8);
    // 0x803F4DC4: addiu       $a3, $sp, 0x54
    ctx->r7 = ADD32(ctx->r29, 0X54);
    // 0x803F4DC8: lw          $t7, 0x24($t6)
    ctx->r15 = MEM_W(ctx->r14, 0X24);
    // 0x803F4DCC: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x803F4DD0: lh          $t8, 0x8B8($t7)
    ctx->r24 = MEM_H(ctx->r15, 0X8B8);
    // 0x803F4DD4: nop

    // 0x803F4DD8: mtc1        $t8, $f4
    ctx->f4.u32l = ctx->r24;
    // 0x803F4DDC: nop

    // 0x803F4DE0: cvt.s.w     $f4, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    ctx->f4.fl = CVT_S_W(ctx->f4.u32l);
    // 0x803F4DE4: mfc1        $a1, $f4
    ctx->r5 = (int32_t)ctx->f4.u32l;
    // 0x803F4DE8: jal         0x80272B98
    // 0x803F4DEC: nop

    LOOKUP_FUNC(0x80272B98)(rdram, ctx);
        goto after_0;
    // 0x803F4DEC: nop

    after_0:
    // 0x803F4DF0: lui         $at, 0x4316
    ctx->r1 = S32(0X4316 << 16);
    // 0x803F4DF4: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x803F4DF8: lwc1        $f6, 0x58($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X58);
    // 0x803F4DFC: lui         $at, 0x4270
    ctx->r1 = S32(0X4270 << 16);
    // 0x803F4E00: c.lt.s      $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f6.fl < ctx->f8.fl;
    // 0x803F4E04: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    // 0x803F4E08: bc1f        L_803F4E18
    if (!c1cs) {
        // 0x803F4E0C: addiu       $s3, $sp, 0x4C
        ctx->r19 = ADD32(ctx->r29, 0X4C);
            goto L_803F4E18;
    }
    // 0x803F4E0C: addiu       $s3, $sp, 0x4C
    ctx->r19 = ADD32(ctx->r29, 0X4C);
    // 0x803F4E10: b           L_803F4EC4
    // 0x803F4E14: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_803F4EC4;
    // 0x803F4E14: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_803F4E18:
    // 0x803F4E18: mtc1        $at, $f24
    ctx->f24.u32l = ctx->r1;
    // 0x803F4E1C: lw          $t9, 0xC8($s4)
    ctx->r25 = MEM_W(ctx->r20, 0XC8);
    // 0x803F4E20: lui         $at, 0x41F0
    ctx->r1 = S32(0X41F0 << 16);
    // 0x803F4E24: mtc1        $at, $f22
    ctx->f22.u32l = ctx->r1;
    // 0x803F4E28: lw          $t0, 0x24($t9)
    ctx->r8 = MEM_W(ctx->r25, 0X24);
    // 0x803F4E2C: lui         $at, 0x803F
    ctx->r1 = S32(0X803F << 16);
    // 0x803F4E30: lwc1        $f21, 0x7D80($at)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r1, 0X7D80);
    // 0x803F4E34: lwc1        $f20, 0x7D84($at)
    ctx->f20.u32l = MEM_W(ctx->r1, 0X7D84);
    // 0x803F4E38: lw          $s0, 0x18($t0)
    ctx->r16 = MEM_W(ctx->r8, 0X18);
    // 0x803F4E3C: addiu       $s2, $zero, 0xB
    ctx->r18 = ADD32(0, 0XB);
L_803F4E40:
    // 0x803F4E40: lhu         $t1, 0xC($s0)
    ctx->r9 = MEM_HU(ctx->r16, 0XC);
    // 0x803F4E44: or          $a0, $s4, $zero
    ctx->r4 = ctx->r20 | 0;
    // 0x803F4E48: beq         $t1, $zero, L_803F4EB4
    if (ctx->r9 == 0) {
        // 0x803F4E4C: nop
    
            goto L_803F4EB4;
    }
    // 0x803F4E4C: nop

    // 0x803F4E50: lw          $a1, 0x4C($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X4C);
    // 0x803F4E54: lw          $a2, 0x44($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X44);
    // 0x803F4E58: jal         0x80272B98
    // 0x803F4E5C: or          $a3, $s3, $zero
    ctx->r7 = ctx->r19 | 0;
    LOOKUP_FUNC(0x80272B98)(rdram, ctx);
        goto after_1;
    // 0x803F4E5C: or          $a3, $s3, $zero
    ctx->r7 = ctx->r19 | 0;
    after_1:
    // 0x803F4E60: lwc1        $f0, 0x50($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X50);
    // 0x803F4E64: lwc1        $f12, 0x54($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X54);
    // 0x803F4E68: c.lt.s      $f0, $f22
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 22);
    c1cs = ctx->f0.fl < ctx->f22.fl;
    // 0x803F4E6C: lwc1        $f14, 0x4C($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X4C);
    // 0x803F4E70: bc1f        L_803F4E80
    if (!c1cs) {
        // 0x803F4E74: nop
    
            goto L_803F4E80;
    }
    // 0x803F4E74: nop

    // 0x803F4E78: b           L_803F4EC4
    // 0x803F4E7C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_803F4EC4;
    // 0x803F4E7C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_803F4E80:
    // 0x803F4E80: c.lt.s      $f0, $f24
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 24);
    c1cs = ctx->f0.fl < ctx->f24.fl;
    // 0x803F4E84: nop

    // 0x803F4E88: bc1f        L_803F4EB4
    if (!c1cs) {
        // 0x803F4E8C: nop
    
            goto L_803F4EB4;
    }
    // 0x803F4E8C: nop

    // 0x803F4E90: jal         0x80279308
    // 0x803F4E94: nop

    LOOKUP_FUNC(0x80279308)(rdram, ctx);
        goto after_2;
    // 0x803F4E94: nop

    after_2:
    // 0x803F4E98: cvt.d.s     $f10, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f10.d = CVT_D_S(ctx->f0.fl);
    // 0x803F4E9C: c.lt.d      $f10, $f20
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 20);
    c1cs = ctx->f10.d < ctx->f20.d;
    // 0x803F4EA0: nop

    // 0x803F4EA4: bc1f        L_803F4EB8
    if (!c1cs) {
        // 0x803F4EA8: addiu       $s1, $s1, 0x1
        ctx->r17 = ADD32(ctx->r17, 0X1);
            goto L_803F4EB8;
    }
    // 0x803F4EA8: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x803F4EAC: b           L_803F4EC4
    // 0x803F4EB0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_803F4EC4;
    // 0x803F4EB0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_803F4EB4:
    // 0x803F4EB4: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
L_803F4EB8:
    // 0x803F4EB8: bne         $s1, $s2, L_803F4E40
    if (ctx->r17 != ctx->r18) {
        // 0x803F4EBC: addiu       $s0, $s0, 0xF8
        ctx->r16 = ADD32(ctx->r16, 0XF8);
            goto L_803F4E40;
    }
    // 0x803F4EBC: addiu       $s0, $s0, 0xF8
    ctx->r16 = ADD32(ctx->r16, 0XF8);
    // 0x803F4EC0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_803F4EC4:
    // 0x803F4EC4: lw          $ra, 0x44($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X44);
    // 0x803F4EC8: lwc1        $f21, 0x18($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X18);
    // 0x803F4ECC: lwc1        $f20, 0x1C($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x803F4ED0: lwc1        $f23, 0x20($sp)
    ctx->f_odd[(23 - 1) * 2] = MEM_W(ctx->r29, 0X20);
    // 0x803F4ED4: lwc1        $f22, 0x24($sp)
    ctx->f22.u32l = MEM_W(ctx->r29, 0X24);
    // 0x803F4ED8: lwc1        $f25, 0x28($sp)
    ctx->f_odd[(25 - 1) * 2] = MEM_W(ctx->r29, 0X28);
    // 0x803F4EDC: lwc1        $f24, 0x2C($sp)
    ctx->f24.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x803F4EE0: lw          $s0, 0x30($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X30);
    // 0x803F4EE4: lw          $s1, 0x34($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X34);
    // 0x803F4EE8: lw          $s2, 0x38($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X38);
    // 0x803F4EEC: lw          $s3, 0x3C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X3C);
    // 0x803F4EF0: lw          $s4, 0x40($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X40);
    // 0x803F4EF4: jr          $ra
    // 0x803F4EF8: addiu       $sp, $sp, 0x60
    ctx->r29 = ADD32(ctx->r29, 0X60);
    return;
    // 0x803F4EF8: addiu       $sp, $sp, 0x60
    ctx->r29 = ADD32(ctx->r29, 0X60);
;}
RECOMP_FUNC void ovl_803F0000_menu_func_803F4E40(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
L_803F4E40:
    // 0x803F4E40: lhu         $t1, 0xC($s0)
    ctx->r9 = MEM_HU(ctx->r16, 0XC);
    // 0x803F4E44: or          $a0, $s4, $zero
    ctx->r4 = ctx->r20 | 0;
    // 0x803F4E48: beq         $t1, $zero, L_803F4EB4
    if (ctx->r9 == 0) {
        // 0x803F4E4C: nop
    
            goto L_803F4EB4;
    }
    // 0x803F4E4C: nop

    // 0x803F4E50: lw          $a1, 0x4C($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X4C);
    // 0x803F4E54: lw          $a2, 0x44($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X44);
    // 0x803F4E58: jal         0x80272B98
    // 0x803F4E5C: or          $a3, $s3, $zero
    ctx->r7 = ctx->r19 | 0;
    LOOKUP_FUNC(0x80272B98)(rdram, ctx);
        goto after_0;
    // 0x803F4E5C: or          $a3, $s3, $zero
    ctx->r7 = ctx->r19 | 0;
    after_0:
    // 0x803F4E60: lwc1        $f0, 0x50($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X50);
    // 0x803F4E64: lwc1        $f12, 0x54($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X54);
    // 0x803F4E68: c.lt.s      $f0, $f22
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 22);
    c1cs = ctx->f0.fl < ctx->f22.fl;
    // 0x803F4E6C: lwc1        $f14, 0x4C($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X4C);
    // 0x803F4E70: bc1f        L_803F4E80
    if (!c1cs) {
        // 0x803F4E74: nop
    
            goto L_803F4E80;
    }
    // 0x803F4E74: nop

    // 0x803F4E78: b           L_803F4EC4
    // 0x803F4E7C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_803F4EC4;
    // 0x803F4E7C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_803F4E80:
    // 0x803F4E80: c.lt.s      $f0, $f24
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 24);
    c1cs = ctx->f0.fl < ctx->f24.fl;
    // 0x803F4E84: nop

    // 0x803F4E88: bc1f        L_803F4EB4
    if (!c1cs) {
        // 0x803F4E8C: nop
    
            goto L_803F4EB4;
    }
    // 0x803F4E8C: nop

    // 0x803F4E90: jal         0x80279308
    // 0x803F4E94: nop

    LOOKUP_FUNC(0x80279308)(rdram, ctx);
        goto after_1;
    // 0x803F4E94: nop

    after_1:
    // 0x803F4E98: cvt.d.s     $f10, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f10.d = CVT_D_S(ctx->f0.fl);
    // 0x803F4E9C: c.lt.d      $f10, $f20
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 20);
    c1cs = ctx->f10.d < ctx->f20.d;
    // 0x803F4EA0: nop

    // 0x803F4EA4: bc1f        L_803F4EB8
    if (!c1cs) {
        // 0x803F4EA8: addiu       $s1, $s1, 0x1
        ctx->r17 = ADD32(ctx->r17, 0X1);
            goto L_803F4EB8;
    }
    // 0x803F4EA8: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x803F4EAC: b           L_803F4EC4
    // 0x803F4EB0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_803F4EC4;
    // 0x803F4EB0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_803F4EB4:
    // 0x803F4EB4: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
L_803F4EB8:
    // 0x803F4EB8: bne         $s1, $s2, L_803F4E40
    if (ctx->r17 != ctx->r18) {
        // 0x803F4EBC: addiu       $s0, $s0, 0xF8
        ctx->r16 = ADD32(ctx->r16, 0XF8);
            goto L_803F4E40;
    }
    // 0x803F4EBC: addiu       $s0, $s0, 0xF8
    ctx->r16 = ADD32(ctx->r16, 0XF8);
    // 0x803F4EC0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_803F4EC4:
    // 0x803F4EC4: lw          $ra, 0x44($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X44);
    // 0x803F4EC8: lwc1        $f21, 0x18($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X18);
    // 0x803F4ECC: lwc1        $f20, 0x1C($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x803F4ED0: lwc1        $f23, 0x20($sp)
    ctx->f_odd[(23 - 1) * 2] = MEM_W(ctx->r29, 0X20);
    // 0x803F4ED4: lwc1        $f22, 0x24($sp)
    ctx->f22.u32l = MEM_W(ctx->r29, 0X24);
    // 0x803F4ED8: lwc1        $f25, 0x28($sp)
    ctx->f_odd[(25 - 1) * 2] = MEM_W(ctx->r29, 0X28);
    // 0x803F4EDC: lwc1        $f24, 0x2C($sp)
    ctx->f24.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x803F4EE0: lw          $s0, 0x30($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X30);
    // 0x803F4EE4: lw          $s1, 0x34($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X34);
    // 0x803F4EE8: lw          $s2, 0x38($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X38);
    // 0x803F4EEC: lw          $s3, 0x3C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X3C);
    // 0x803F4EF0: lw          $s4, 0x40($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X40);
    // 0x803F4EF4: jr          $ra
    // 0x803F4EF8: addiu       $sp, $sp, 0x60
    ctx->r29 = ADD32(ctx->r29, 0X60);
    return;
    // 0x803F4EF8: addiu       $sp, $sp, 0x60
    ctx->r29 = ADD32(ctx->r29, 0X60);
;}
RECOMP_FUNC void ovl_803F0000_menu_func_803F4E80(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
L_803F4E40:
    // 0x803F4E80: c.lt.s      $f0, $f24
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 24);
    c1cs = ctx->f0.fl < ctx->f24.fl;
    // 0x803F4E84: nop

    // 0x803F4E88: bc1f        L_803F4EB4
    if (!c1cs) {
        // 0x803F4E8C: nop
    
            goto L_803F4EB4;
    }
    // 0x803F4E8C: nop

    // 0x803F4E90: jal         0x80279308
    // 0x803F4E94: nop

    LOOKUP_FUNC(0x80279308)(rdram, ctx);
        goto after_0;
    // 0x803F4E94: nop

    after_0:
    // 0x803F4E98: cvt.d.s     $f10, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f10.d = CVT_D_S(ctx->f0.fl);
    // 0x803F4E9C: c.lt.d      $f10, $f20
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 20);
    c1cs = ctx->f10.d < ctx->f20.d;
    // 0x803F4EA0: nop

    // 0x803F4EA4: bc1f        L_803F4EB8
    if (!c1cs) {
        // 0x803F4EA8: addiu       $s1, $s1, 0x1
        ctx->r17 = ADD32(ctx->r17, 0X1);
            goto L_803F4EB8;
    }
    // 0x803F4EA8: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x803F4EAC: b           L_803F4EC4
    // 0x803F4EB0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_803F4EC4;
    // 0x803F4EB0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_803F4EB4:
    // 0x803F4EB4: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
L_803F4EB8:
    // 0x803F4EB8: bne         $s1, $s2, L_803F4E40
    if (ctx->r17 != ctx->r18) {
            // 0x803F4EBC: addiu       $s0, $s0, 0xF8
    ctx->r16 = ADD32(ctx->r16, 0XF8);
    ovl_803F0000_menu_func_803F4E40(rdram, ctx);
    return;
    }
    // 0x803F4EBC: addiu       $s0, $s0, 0xF8
    ctx->r16 = ADD32(ctx->r16, 0XF8);
    // 0x803F4EC0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_803F4EC4:
    // 0x803F4EC4: lw          $ra, 0x44($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X44);
    // 0x803F4EC8: lwc1        $f21, 0x18($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X18);
    // 0x803F4ECC: lwc1        $f20, 0x1C($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x803F4ED0: lwc1        $f23, 0x20($sp)
    ctx->f_odd[(23 - 1) * 2] = MEM_W(ctx->r29, 0X20);
    // 0x803F4ED4: lwc1        $f22, 0x24($sp)
    ctx->f22.u32l = MEM_W(ctx->r29, 0X24);
    // 0x803F4ED8: lwc1        $f25, 0x28($sp)
    ctx->f_odd[(25 - 1) * 2] = MEM_W(ctx->r29, 0X28);
    // 0x803F4EDC: lwc1        $f24, 0x2C($sp)
    ctx->f24.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x803F4EE0: lw          $s0, 0x30($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X30);
    // 0x803F4EE4: lw          $s1, 0x34($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X34);
    // 0x803F4EE8: lw          $s2, 0x38($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X38);
    // 0x803F4EEC: lw          $s3, 0x3C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X3C);
    // 0x803F4EF0: lw          $s4, 0x40($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X40);
    // 0x803F4EF4: jr          $ra
    // 0x803F4EF8: addiu       $sp, $sp, 0x60
    ctx->r29 = ADD32(ctx->r29, 0X60);
    return;
    // 0x803F4EF8: addiu       $sp, $sp, 0x60
    ctx->r29 = ADD32(ctx->r29, 0X60);
;}
RECOMP_FUNC void ovl_803F0000_menu_func_803F4EFC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803F4EFC: addiu       $sp, $sp, -0x68
    ctx->r29 = ADD32(ctx->r29, -0X68);
    // 0x803F4F00: swc1        $f30, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->f30.u32l;
    // 0x803F4F04: lui         $at, 0x4170
    ctx->r1 = S32(0X4170 << 16);
    // 0x803F4F08: mtc1        $at, $f30
    ctx->f30.u32l = ctx->r1;
    // 0x803F4F0C: swc1        $f28, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f28.u32l;
    // 0x803F4F10: lui         $at, 0x4361
    ctx->r1 = S32(0X4361 << 16);
    // 0x803F4F14: sw          $ra, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r31;
    // 0x803F4F18: sw          $s6, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r22;
    // 0x803F4F1C: sw          $s5, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r21;
    // 0x803F4F20: sw          $s4, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r20;
    // 0x803F4F24: sw          $s3, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r19;
    // 0x803F4F28: sw          $s2, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r18;
    // 0x803F4F2C: sw          $s1, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r17;
    // 0x803F4F30: sw          $s0, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r16;
    // 0x803F4F34: swc1        $f31, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->f_odd[(31 - 1) * 2];
    // 0x803F4F38: swc1        $f29, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f_odd[(29 - 1) * 2];
    // 0x803F4F3C: swc1        $f27, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f_odd[(27 - 1) * 2];
    // 0x803F4F40: swc1        $f26, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f26.u32l;
    // 0x803F4F44: swc1        $f25, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f_odd[(25 - 1) * 2];
    // 0x803F4F48: swc1        $f24, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f24.u32l;
    // 0x803F4F4C: swc1        $f23, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f_odd[(23 - 1) * 2];
    // 0x803F4F50: swc1        $f22, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f22.u32l;
    // 0x803F4F54: swc1        $f21, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x803F4F58: swc1        $f20, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f20.u32l;
    // 0x803F4F5C: mtc1        $at, $f28
    ctx->f28.u32l = ctx->r1;
    // 0x803F4F60: lw          $t6, 0xC8($a0)
    ctx->r14 = MEM_W(ctx->r4, 0XC8);
    // 0x803F4F64: lui         $at, 0x4180
    ctx->r1 = S32(0X4180 << 16);
    // 0x803F4F68: mtc1        $at, $f26
    ctx->f26.u32l = ctx->r1;
    // 0x803F4F6C: lw          $v0, 0x24($t6)
    ctx->r2 = MEM_W(ctx->r14, 0X24);
    // 0x803F4F70: lui         $at, 0x803F
    ctx->r1 = S32(0X803F << 16);
    // 0x803F4F74: lwc1        $f24, 0xB0($a0)
    ctx->f24.u32l = MEM_W(ctx->r4, 0XB0);
    // 0x803F4F78: lwc1        $f23, 0x7D88($at)
    ctx->f_odd[(23 - 1) * 2] = MEM_W(ctx->r1, 0X7D88);
    // 0x803F4F7C: lwc1        $f22, 0x7D8C($at)
    ctx->f22.u32l = MEM_W(ctx->r1, 0X7D8C);
    // 0x803F4F80: lw          $s3, 0x18($v0)
    ctx->r19 = MEM_W(ctx->r2, 0X18);
    // 0x803F4F84: or          $s4, $a1, $zero
    ctx->r20 = ctx->r5 | 0;
    // 0x803F4F88: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    // 0x803F4F8C: addiu       $s5, $zero, 0xF8
    ctx->r21 = ADD32(0, 0XF8);
    // 0x803F4F90: addiu       $s6, $zero, 0x58
    ctx->r22 = ADD32(0, 0X58);
    // 0x803F4F94: addiu       $s2, $v0, 0x318
    ctx->r18 = ADD32(ctx->r2, 0X318);
L_803F4F98:
    // 0x803F4F98: lhu         $t7, 0x0($s2)
    ctx->r15 = MEM_HU(ctx->r18, 0X0);
    // 0x803F4F9C: nop

    // 0x803F4FA0: multu       $t7, $s5
    result = U64(U32(ctx->r15)) * U64(U32(ctx->r21)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x803F4FA4: mflo        $t8
    ctx->r24 = lo;
    // 0x803F4FA8: addu        $s0, $t8, $s3
    ctx->r16 = ADD32(ctx->r24, ctx->r19);
    // 0x803F4FAC: lhu         $t9, 0xC($s0)
    ctx->r25 = MEM_HU(ctx->r16, 0XC);
    // 0x803F4FB0: nop

    // 0x803F4FB4: beq         $t9, $zero, L_803F504C
    if (ctx->r25 == 0) {
        // 0x803F4FB8: nop
    
            goto L_803F504C;
    }
    // 0x803F4FB8: nop

    // 0x803F4FBC: lhu         $t0, 0x14($s0)
    ctx->r8 = MEM_HU(ctx->r16, 0X14);
    // 0x803F4FC0: nop

    // 0x803F4FC4: andi        $t1, $t0, 0x8000
    ctx->r9 = ctx->r8 & 0X8000;
    // 0x803F4FC8: bne         $t1, $zero, L_803F504C
    if (ctx->r9 != 0) {
        // 0x803F4FCC: nop
    
            goto L_803F504C;
    }
    // 0x803F4FCC: nop

    // 0x803F4FD0: lwc1        $f14, 0x88($s0)
    ctx->f14.u32l = MEM_W(ctx->r16, 0X88);
    // 0x803F4FD4: jal         0x8027924C
    // 0x803F4FD8: mov.s       $f12, $f24
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 24);
    ctx->f12.fl = ctx->f24.fl;
    LOOKUP_FUNC(0x8027924C)(rdram, ctx);
        goto after_0;
    // 0x803F4FD8: mov.s       $f12, $f24
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 24);
    ctx->f12.fl = ctx->f24.fl;
    after_0:
    // 0x803F4FDC: swc1        $f0, 0x0($s4)
    MEM_W(0X0, ctx->r20) = ctx->f0.u32l;
    // 0x803F4FE0: jal         0x80272AEC
    // 0x803F4FE4: mov.s       $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    ctx->f12.fl = ctx->f0.fl;
    LOOKUP_FUNC(0x80272AEC)(rdram, ctx);
        goto after_1;
    // 0x803F4FE4: mov.s       $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    ctx->f12.fl = ctx->f0.fl;
    after_1:
    // 0x803F4FE8: cvt.d.s     $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f4.d = CVT_D_S(ctx->f0.fl);
    // 0x803F4FEC: c.lt.d      $f22, $f4
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f22.d < ctx->f4.d;
    // 0x803F4FF0: mov.s       $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    ctx->f20.fl = ctx->f0.fl;
    // 0x803F4FF4: bc1t        L_803F504C
    if (c1cs) {
        // 0x803F4FF8: nop
    
            goto L_803F504C;
    }
    // 0x803F4FF8: nop

    // 0x803F4FFC: lwc1        $f0, 0x84($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X84);
    // 0x803F5000: nop

    // 0x803F5004: c.lt.s      $f0, $f26
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 26);
    c1cs = ctx->f0.fl < ctx->f26.fl;
    // 0x803F5008: nop

    // 0x803F500C: bc1f        L_803F501C
    if (!c1cs) {
        // 0x803F5010: nop
    
            goto L_803F501C;
    }
    // 0x803F5010: nop

    // 0x803F5014: b           L_803F505C
    // 0x803F5018: or          $v0, $s0, $zero
    ctx->r2 = ctx->r16 | 0;
        goto L_803F505C;
    // 0x803F5018: or          $v0, $s0, $zero
    ctx->r2 = ctx->r16 | 0;
L_803F501C:
    // 0x803F501C: mul.s       $f6, $f0, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = MUL_S(ctx->f0.fl, ctx->f0.fl);
    // 0x803F5020: jal         0x8007FA40
    // 0x803F5024: sub.s       $f12, $f6, $f28
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 28);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f28.fl); 
    ctx->f12.fl = ctx->f6.fl - ctx->f28.fl;
    func_8007FA40(rdram, ctx);
        goto after_2;
    // 0x803F5024: sub.s       $f12, $f6, $f28
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 28);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f28.fl); 
    ctx->f12.fl = ctx->f6.fl - ctx->f28.fl;
    after_2:
    // 0x803F5028: mov.s       $f12, $f30
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 30);
    ctx->f12.fl = ctx->f30.fl;
    // 0x803F502C: jal         0x8001C5D0
    // 0x803F5030: mov.s       $f14, $f0
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    ctx->f14.fl = ctx->f0.fl;
    func_8001C5D0(rdram, ctx);
        goto after_3;
    // 0x803F5030: mov.s       $f14, $f0
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    ctx->f14.fl = ctx->f0.fl;
    after_3:
    // 0x803F5034: c.lt.s      $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f20.fl < ctx->f0.fl;
    // 0x803F5038: nop

    // 0x803F503C: bc1f        L_803F5050
    if (!c1cs) {
        // 0x803F5040: addiu       $s1, $s1, 0x8
        ctx->r17 = ADD32(ctx->r17, 0X8);
            goto L_803F5050;
    }
    // 0x803F5040: addiu       $s1, $s1, 0x8
    ctx->r17 = ADD32(ctx->r17, 0X8);
    // 0x803F5044: b           L_803F505C
    // 0x803F5048: or          $v0, $s0, $zero
    ctx->r2 = ctx->r16 | 0;
        goto L_803F505C;
    // 0x803F5048: or          $v0, $s0, $zero
    ctx->r2 = ctx->r16 | 0;
L_803F504C:
    // 0x803F504C: addiu       $s1, $s1, 0x8
    ctx->r17 = ADD32(ctx->r17, 0X8);
L_803F5050:
    // 0x803F5050: bne         $s1, $s6, L_803F4F98
    if (ctx->r17 != ctx->r22) {
        // 0x803F5054: addiu       $s2, $s2, 0x8
        ctx->r18 = ADD32(ctx->r18, 0X8);
            goto L_803F4F98;
    }
    // 0x803F5054: addiu       $s2, $s2, 0x8
    ctx->r18 = ADD32(ctx->r18, 0X8);
    // 0x803F5058: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_803F505C:
    // 0x803F505C: lw          $ra, 0x64($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X64);
    // 0x803F5060: lwc1        $f21, 0x18($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X18);
    // 0x803F5064: lwc1        $f20, 0x1C($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x803F5068: lwc1        $f23, 0x20($sp)
    ctx->f_odd[(23 - 1) * 2] = MEM_W(ctx->r29, 0X20);
    // 0x803F506C: lwc1        $f22, 0x24($sp)
    ctx->f22.u32l = MEM_W(ctx->r29, 0X24);
    // 0x803F5070: lwc1        $f25, 0x28($sp)
    ctx->f_odd[(25 - 1) * 2] = MEM_W(ctx->r29, 0X28);
    // 0x803F5074: lwc1        $f24, 0x2C($sp)
    ctx->f24.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x803F5078: lwc1        $f27, 0x30($sp)
    ctx->f_odd[(27 - 1) * 2] = MEM_W(ctx->r29, 0X30);
    // 0x803F507C: lwc1        $f26, 0x34($sp)
    ctx->f26.u32l = MEM_W(ctx->r29, 0X34);
    // 0x803F5080: lwc1        $f29, 0x38($sp)
    ctx->f_odd[(29 - 1) * 2] = MEM_W(ctx->r29, 0X38);
    // 0x803F5084: lwc1        $f28, 0x3C($sp)
    ctx->f28.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x803F5088: lwc1        $f31, 0x40($sp)
    ctx->f_odd[(31 - 1) * 2] = MEM_W(ctx->r29, 0X40);
    // 0x803F508C: lwc1        $f30, 0x44($sp)
    ctx->f30.u32l = MEM_W(ctx->r29, 0X44);
    // 0x803F5090: lw          $s0, 0x48($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X48);
    // 0x803F5094: lw          $s1, 0x4C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X4C);
    // 0x803F5098: lw          $s2, 0x50($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X50);
    // 0x803F509C: lw          $s3, 0x54($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X54);
    // 0x803F50A0: lw          $s4, 0x58($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X58);
    // 0x803F50A4: lw          $s5, 0x5C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X5C);
    // 0x803F50A8: lw          $s6, 0x60($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X60);
    // 0x803F50AC: jr          $ra
    // 0x803F50B0: addiu       $sp, $sp, 0x68
    ctx->r29 = ADD32(ctx->r29, 0X68);
    return;
    // 0x803F50B0: addiu       $sp, $sp, 0x68
    ctx->r29 = ADD32(ctx->r29, 0X68);
;}
RECOMP_FUNC void ovl_803F0000_menu_func_803F4F98(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
L_803F4F98:
    // 0x803F4F98: lhu         $t7, 0x0($s2)
    ctx->r15 = MEM_HU(ctx->r18, 0X0);
    // 0x803F4F9C: nop

    // 0x803F4FA0: multu       $t7, $s5
    result = U64(U32(ctx->r15)) * U64(U32(ctx->r21)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x803F4FA4: mflo        $t8
    ctx->r24 = lo;
    // 0x803F4FA8: addu        $s0, $t8, $s3
    ctx->r16 = ADD32(ctx->r24, ctx->r19);
    // 0x803F4FAC: lhu         $t9, 0xC($s0)
    ctx->r25 = MEM_HU(ctx->r16, 0XC);
    // 0x803F4FB0: nop

    // 0x803F4FB4: beq         $t9, $zero, L_803F504C
    if (ctx->r25 == 0) {
        // 0x803F4FB8: nop
    
            goto L_803F504C;
    }
    // 0x803F4FB8: nop

    // 0x803F4FBC: lhu         $t0, 0x14($s0)
    ctx->r8 = MEM_HU(ctx->r16, 0X14);
    // 0x803F4FC0: nop

    // 0x803F4FC4: andi        $t1, $t0, 0x8000
    ctx->r9 = ctx->r8 & 0X8000;
    // 0x803F4FC8: bne         $t1, $zero, L_803F504C
    if (ctx->r9 != 0) {
        // 0x803F4FCC: nop
    
            goto L_803F504C;
    }
    // 0x803F4FCC: nop

    // 0x803F4FD0: lwc1        $f14, 0x88($s0)
    ctx->f14.u32l = MEM_W(ctx->r16, 0X88);
    // 0x803F4FD4: jal         0x8027924C
    // 0x803F4FD8: mov.s       $f12, $f24
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 24);
    ctx->f12.fl = ctx->f24.fl;
    LOOKUP_FUNC(0x8027924C)(rdram, ctx);
        goto after_0;
    // 0x803F4FD8: mov.s       $f12, $f24
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 24);
    ctx->f12.fl = ctx->f24.fl;
    after_0:
    // 0x803F4FDC: swc1        $f0, 0x0($s4)
    MEM_W(0X0, ctx->r20) = ctx->f0.u32l;
    // 0x803F4FE0: jal         0x80272AEC
    // 0x803F4FE4: mov.s       $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    ctx->f12.fl = ctx->f0.fl;
    LOOKUP_FUNC(0x80272AEC)(rdram, ctx);
        goto after_1;
    // 0x803F4FE4: mov.s       $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    ctx->f12.fl = ctx->f0.fl;
    after_1:
    // 0x803F4FE8: cvt.d.s     $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f4.d = CVT_D_S(ctx->f0.fl);
    // 0x803F4FEC: c.lt.d      $f22, $f4
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f22.d < ctx->f4.d;
    // 0x803F4FF0: mov.s       $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    ctx->f20.fl = ctx->f0.fl;
    // 0x803F4FF4: bc1t        L_803F504C
    if (c1cs) {
        // 0x803F4FF8: nop
    
            goto L_803F504C;
    }
    // 0x803F4FF8: nop

    // 0x803F4FFC: lwc1        $f0, 0x84($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X84);
    // 0x803F5000: nop

    // 0x803F5004: c.lt.s      $f0, $f26
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 26);
    c1cs = ctx->f0.fl < ctx->f26.fl;
    // 0x803F5008: nop

    // 0x803F500C: bc1f        L_803F501C
    if (!c1cs) {
        // 0x803F5010: nop
    
            goto L_803F501C;
    }
    // 0x803F5010: nop

    // 0x803F5014: b           L_803F505C
    // 0x803F5018: or          $v0, $s0, $zero
    ctx->r2 = ctx->r16 | 0;
        goto L_803F505C;
    // 0x803F5018: or          $v0, $s0, $zero
    ctx->r2 = ctx->r16 | 0;
L_803F501C:
    // 0x803F501C: mul.s       $f6, $f0, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = MUL_S(ctx->f0.fl, ctx->f0.fl);
    // 0x803F5020: jal         0x8007FA40
    // 0x803F5024: sub.s       $f12, $f6, $f28
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 28);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f28.fl); 
    ctx->f12.fl = ctx->f6.fl - ctx->f28.fl;
    func_8007FA40(rdram, ctx);
        goto after_2;
    // 0x803F5024: sub.s       $f12, $f6, $f28
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 28);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f28.fl); 
    ctx->f12.fl = ctx->f6.fl - ctx->f28.fl;
    after_2:
    // 0x803F5028: mov.s       $f12, $f30
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 30);
    ctx->f12.fl = ctx->f30.fl;
    // 0x803F502C: jal         0x8001C5D0
    // 0x803F5030: mov.s       $f14, $f0
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    ctx->f14.fl = ctx->f0.fl;
    func_8001C5D0(rdram, ctx);
        goto after_3;
    // 0x803F5030: mov.s       $f14, $f0
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    ctx->f14.fl = ctx->f0.fl;
    after_3:
    // 0x803F5034: c.lt.s      $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f20.fl < ctx->f0.fl;
    // 0x803F5038: nop

    // 0x803F503C: bc1f        L_803F5050
    if (!c1cs) {
        // 0x803F5040: addiu       $s1, $s1, 0x8
        ctx->r17 = ADD32(ctx->r17, 0X8);
            goto L_803F5050;
    }
    // 0x803F5040: addiu       $s1, $s1, 0x8
    ctx->r17 = ADD32(ctx->r17, 0X8);
    // 0x803F5044: b           L_803F505C
    // 0x803F5048: or          $v0, $s0, $zero
    ctx->r2 = ctx->r16 | 0;
        goto L_803F505C;
    // 0x803F5048: or          $v0, $s0, $zero
    ctx->r2 = ctx->r16 | 0;
L_803F504C:
    // 0x803F504C: addiu       $s1, $s1, 0x8
    ctx->r17 = ADD32(ctx->r17, 0X8);
L_803F5050:
    // 0x803F5050: bne         $s1, $s6, L_803F4F98
    if (ctx->r17 != ctx->r22) {
        // 0x803F5054: addiu       $s2, $s2, 0x8
        ctx->r18 = ADD32(ctx->r18, 0X8);
            goto L_803F4F98;
    }
    // 0x803F5054: addiu       $s2, $s2, 0x8
    ctx->r18 = ADD32(ctx->r18, 0X8);
    // 0x803F5058: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_803F505C:
    // 0x803F505C: lw          $ra, 0x64($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X64);
    // 0x803F5060: lwc1        $f21, 0x18($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X18);
    // 0x803F5064: lwc1        $f20, 0x1C($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x803F5068: lwc1        $f23, 0x20($sp)
    ctx->f_odd[(23 - 1) * 2] = MEM_W(ctx->r29, 0X20);
    // 0x803F506C: lwc1        $f22, 0x24($sp)
    ctx->f22.u32l = MEM_W(ctx->r29, 0X24);
    // 0x803F5070: lwc1        $f25, 0x28($sp)
    ctx->f_odd[(25 - 1) * 2] = MEM_W(ctx->r29, 0X28);
    // 0x803F5074: lwc1        $f24, 0x2C($sp)
    ctx->f24.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x803F5078: lwc1        $f27, 0x30($sp)
    ctx->f_odd[(27 - 1) * 2] = MEM_W(ctx->r29, 0X30);
    // 0x803F507C: lwc1        $f26, 0x34($sp)
    ctx->f26.u32l = MEM_W(ctx->r29, 0X34);
    // 0x803F5080: lwc1        $f29, 0x38($sp)
    ctx->f_odd[(29 - 1) * 2] = MEM_W(ctx->r29, 0X38);
    // 0x803F5084: lwc1        $f28, 0x3C($sp)
    ctx->f28.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x803F5088: lwc1        $f31, 0x40($sp)
    ctx->f_odd[(31 - 1) * 2] = MEM_W(ctx->r29, 0X40);
    // 0x803F508C: lwc1        $f30, 0x44($sp)
    ctx->f30.u32l = MEM_W(ctx->r29, 0X44);
    // 0x803F5090: lw          $s0, 0x48($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X48);
    // 0x803F5094: lw          $s1, 0x4C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X4C);
    // 0x803F5098: lw          $s2, 0x50($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X50);
    // 0x803F509C: lw          $s3, 0x54($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X54);
    // 0x803F50A0: lw          $s4, 0x58($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X58);
    // 0x803F50A4: lw          $s5, 0x5C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X5C);
    // 0x803F50A8: lw          $s6, 0x60($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X60);
    // 0x803F50AC: jr          $ra
    // 0x803F50B0: addiu       $sp, $sp, 0x68
    ctx->r29 = ADD32(ctx->r29, 0X68);
    return;
    // 0x803F50B0: addiu       $sp, $sp, 0x68
    ctx->r29 = ADD32(ctx->r29, 0X68);
;}
RECOMP_FUNC void ovl_803F0000_menu_func_803F4FE8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
L_803F4F98:
    // 0x803F4FE8: cvt.d.s     $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f4.d = CVT_D_S(ctx->f0.fl);
    // 0x803F4FEC: c.lt.d      $f22, $f4
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f22.d < ctx->f4.d;
    // 0x803F4FF0: mov.s       $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    ctx->f20.fl = ctx->f0.fl;
    // 0x803F4FF4: bc1t        L_803F504C
    if (c1cs) {
        // 0x803F4FF8: nop
    
            goto L_803F504C;
    }
    // 0x803F4FF8: nop

    // 0x803F4FFC: lwc1        $f0, 0x84($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X84);
    // 0x803F5000: nop

    // 0x803F5004: c.lt.s      $f0, $f26
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 26);
    c1cs = ctx->f0.fl < ctx->f26.fl;
    // 0x803F5008: nop

    // 0x803F500C: bc1f        L_803F501C
    if (!c1cs) {
        // 0x803F5010: nop
    
            goto L_803F501C;
    }
    // 0x803F5010: nop

    // 0x803F5014: b           L_803F505C
    // 0x803F5018: or          $v0, $s0, $zero
    ctx->r2 = ctx->r16 | 0;
        goto L_803F505C;
    // 0x803F5018: or          $v0, $s0, $zero
    ctx->r2 = ctx->r16 | 0;
L_803F501C:
    // 0x803F501C: mul.s       $f6, $f0, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = MUL_S(ctx->f0.fl, ctx->f0.fl);
    // 0x803F5020: jal         0x8007FA40
    // 0x803F5024: sub.s       $f12, $f6, $f28
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 28);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f28.fl); 
    ctx->f12.fl = ctx->f6.fl - ctx->f28.fl;
    func_8007FA40(rdram, ctx);
        goto after_0;
    // 0x803F5024: sub.s       $f12, $f6, $f28
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 28);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f28.fl); 
    ctx->f12.fl = ctx->f6.fl - ctx->f28.fl;
    after_0:
    // 0x803F5028: mov.s       $f12, $f30
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 30);
    ctx->f12.fl = ctx->f30.fl;
    // 0x803F502C: jal         0x8001C5D0
    // 0x803F5030: mov.s       $f14, $f0
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    ctx->f14.fl = ctx->f0.fl;
    func_8001C5D0(rdram, ctx);
        goto after_1;
    // 0x803F5030: mov.s       $f14, $f0
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    ctx->f14.fl = ctx->f0.fl;
    after_1:
    // 0x803F5034: c.lt.s      $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f20.fl < ctx->f0.fl;
    // 0x803F5038: nop

    // 0x803F503C: bc1f        L_803F5050
    if (!c1cs) {
        // 0x803F5040: addiu       $s1, $s1, 0x8
        ctx->r17 = ADD32(ctx->r17, 0X8);
            goto L_803F5050;
    }
    // 0x803F5040: addiu       $s1, $s1, 0x8
    ctx->r17 = ADD32(ctx->r17, 0X8);
    // 0x803F5044: b           L_803F505C
    // 0x803F5048: or          $v0, $s0, $zero
    ctx->r2 = ctx->r16 | 0;
        goto L_803F505C;
    // 0x803F5048: or          $v0, $s0, $zero
    ctx->r2 = ctx->r16 | 0;
L_803F504C:
    // 0x803F504C: addiu       $s1, $s1, 0x8
    ctx->r17 = ADD32(ctx->r17, 0X8);
L_803F5050:
    // 0x803F5050: bne         $s1, $s6, L_803F4F98
    if (ctx->r17 != ctx->r22) {
            // 0x803F5054: addiu       $s2, $s2, 0x8
    ctx->r18 = ADD32(ctx->r18, 0X8);
    ovl_803F0000_menu_func_803F4F98(rdram, ctx);
    return;
    }
    // 0x803F5054: addiu       $s2, $s2, 0x8
    ctx->r18 = ADD32(ctx->r18, 0X8);
    // 0x803F5058: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_803F505C:
    // 0x803F505C: lw          $ra, 0x64($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X64);
    // 0x803F5060: lwc1        $f21, 0x18($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X18);
    // 0x803F5064: lwc1        $f20, 0x1C($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x803F5068: lwc1        $f23, 0x20($sp)
    ctx->f_odd[(23 - 1) * 2] = MEM_W(ctx->r29, 0X20);
    // 0x803F506C: lwc1        $f22, 0x24($sp)
    ctx->f22.u32l = MEM_W(ctx->r29, 0X24);
    // 0x803F5070: lwc1        $f25, 0x28($sp)
    ctx->f_odd[(25 - 1) * 2] = MEM_W(ctx->r29, 0X28);
    // 0x803F5074: lwc1        $f24, 0x2C($sp)
    ctx->f24.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x803F5078: lwc1        $f27, 0x30($sp)
    ctx->f_odd[(27 - 1) * 2] = MEM_W(ctx->r29, 0X30);
    // 0x803F507C: lwc1        $f26, 0x34($sp)
    ctx->f26.u32l = MEM_W(ctx->r29, 0X34);
    // 0x803F5080: lwc1        $f29, 0x38($sp)
    ctx->f_odd[(29 - 1) * 2] = MEM_W(ctx->r29, 0X38);
    // 0x803F5084: lwc1        $f28, 0x3C($sp)
    ctx->f28.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x803F5088: lwc1        $f31, 0x40($sp)
    ctx->f_odd[(31 - 1) * 2] = MEM_W(ctx->r29, 0X40);
    // 0x803F508C: lwc1        $f30, 0x44($sp)
    ctx->f30.u32l = MEM_W(ctx->r29, 0X44);
    // 0x803F5090: lw          $s0, 0x48($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X48);
    // 0x803F5094: lw          $s1, 0x4C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X4C);
    // 0x803F5098: lw          $s2, 0x50($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X50);
    // 0x803F509C: lw          $s3, 0x54($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X54);
    // 0x803F50A0: lw          $s4, 0x58($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X58);
    // 0x803F50A4: lw          $s5, 0x5C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X5C);
    // 0x803F50A8: lw          $s6, 0x60($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X60);
    // 0x803F50AC: jr          $ra
    // 0x803F50B0: addiu       $sp, $sp, 0x68
    ctx->r29 = ADD32(ctx->r29, 0X68);
    return;
    // 0x803F50B0: addiu       $sp, $sp, 0x68
    ctx->r29 = ADD32(ctx->r29, 0X68);
;}
RECOMP_FUNC void ovl_803F0000_menu_func_803F50A8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803F50A8: lw          $s6, 0x60($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X60);
    // 0x803F50AC: jr          $ra
    // 0x803F50B0: addiu       $sp, $sp, 0x68
    ctx->r29 = ADD32(ctx->r29, 0X68);
    return;
    // 0x803F50B0: addiu       $sp, $sp, 0x68
    ctx->r29 = ADD32(ctx->r29, 0X68);
;}
RECOMP_FUNC void ovl_803F0000_menu_func_803F50B4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803F50B4: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x803F50B8: sw          $a2, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r6;
    // 0x803F50BC: sw          $a3, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r7;
    // 0x803F50C0: or          $a2, $a3, $zero
    ctx->r6 = ctx->r7 | 0;
    // 0x803F50C4: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    // 0x803F50C8: cfc1        $t6, $FpcCsr
    ctx->r14 = get_cop1_cs();
    // 0x803F50CC: ctc1        $a3, $FpcCsr
    set_cop1_cs(ctx->r7);
    // 0x803F50D0: lwc1        $f4, 0x50($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X50);
    // 0x803F50D4: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x803F50D8: cvt.w.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = CVT_W_S(ctx->f4.fl);
    // 0x803F50DC: or          $s0, $a1, $zero
    ctx->r16 = ctx->r5 | 0;
    // 0x803F50E0: cfc1        $a3, $FpcCsr
    ctx->r7 = get_cop1_cs();
    // 0x803F50E4: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x803F50E8: andi        $a3, $a3, 0x78
    ctx->r7 = ctx->r7 & 0X78;
    // 0x803F50EC: beq         $a3, $zero, L_803F513C
    if (ctx->r7 == 0) {
        // 0x803F50F0: sw          $a0, 0x48($sp)
        MEM_W(0X48, ctx->r29) = ctx->r4;
            goto L_803F513C;
    }
    // 0x803F50F0: sw          $a0, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r4;
    // 0x803F50F4: lui         $at, 0x4F00
    ctx->r1 = S32(0X4F00 << 16);
    // 0x803F50F8: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x803F50FC: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    // 0x803F5100: sub.s       $f6, $f4, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f6.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x803F5104: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x803F5108: ctc1        $a3, $FpcCsr
    set_cop1_cs(ctx->r7);
    // 0x803F510C: nop

    // 0x803F5110: cvt.w.s     $f6, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    ctx->f6.u32l = CVT_W_S(ctx->f6.fl);
    // 0x803F5114: cfc1        $a3, $FpcCsr
    ctx->r7 = get_cop1_cs();
    // 0x803F5118: nop

    // 0x803F511C: andi        $a3, $a3, 0x78
    ctx->r7 = ctx->r7 & 0X78;
    // 0x803F5120: bne         $a3, $zero, L_803F5134
    if (ctx->r7 != 0) {
        // 0x803F5124: nop
    
            goto L_803F5134;
    }
    // 0x803F5124: nop

    // 0x803F5128: mfc1        $a3, $f6
    ctx->r7 = (int32_t)ctx->f6.u32l;
    // 0x803F512C: b           L_803F514C
    // 0x803F5130: or          $a3, $a3, $at
    ctx->r7 = ctx->r7 | ctx->r1;
        goto L_803F514C;
    // 0x803F5130: or          $a3, $a3, $at
    ctx->r7 = ctx->r7 | ctx->r1;
L_803F5134:
    // 0x803F5134: b           L_803F514C
    // 0x803F5138: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
        goto L_803F514C;
    // 0x803F5138: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
L_803F513C:
    // 0x803F513C: mfc1        $a3, $f6
    ctx->r7 = (int32_t)ctx->f6.u32l;
    // 0x803F5140: nop

    // 0x803F5144: bltz        $a3, L_803F5134
    if (SIGNED(ctx->r7) < 0) {
        // 0x803F5148: nop
    
            goto L_803F5134;
    }
    // 0x803F5148: nop

L_803F514C:
    // 0x803F514C: ctc1        $t6, $FpcCsr
    set_cop1_cs(ctx->r14);
    // 0x803F5150: jal         0x803F1828
    // 0x803F5154: sw          $a3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r7;
    ovl_803F0000_menu_func_803F1828(rdram, ctx);
        goto after_0;
    // 0x803F5154: sw          $a3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r7;
    after_0:
    // 0x803F5158: lh          $t7, 0x4($s0)
    ctx->r15 = MEM_H(ctx->r16, 0X4);
    // 0x803F515C: lh          $t8, 0x6($s0)
    ctx->r24 = MEM_H(ctx->r16, 0X6);
    // 0x803F5160: mtc1        $t7, $f8
    ctx->f8.u32l = ctx->r15;
    // 0x803F5164: mtc1        $t8, $f10
    ctx->f10.u32l = ctx->r24;
    // 0x803F5168: lui         $a2, 0x803F
    ctx->r6 = S32(0X803F << 16);
    // 0x803F516C: addiu       $a2, $a2, 0x75C0
    ctx->r6 = ADD32(ctx->r6, 0X75C0);
    // 0x803F5170: cvt.s.w     $f12, $f8
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    ctx->f12.fl = CVT_S_W(ctx->f8.u32l);
    // 0x803F5174: jal         0x8027A184
    // 0x803F5178: cvt.s.w     $f14, $f10
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 10);
    ctx->f14.fl = CVT_S_W(ctx->f10.u32l);
    LOOKUP_FUNC(0x8027A184)(rdram, ctx);
        goto after_1;
    // 0x803F5178: cvt.s.w     $f14, $f10
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 10);
    ctx->f14.fl = CVT_S_W(ctx->f10.u32l);
    after_1:
    // 0x803F517C: lwc1        $f16, 0x50($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X50);
    // 0x803F5180: beq         $v0, $zero, L_803F5444
    if (ctx->r2 == 0) {
        // 0x803F5184: andi        $t9, $v0, 0x3
        ctx->r25 = ctx->r2 & 0X3;
            goto L_803F5444;
    }
    // 0x803F5184: andi        $t9, $v0, 0x3
    ctx->r25 = ctx->r2 & 0X3;
    // 0x803F5188: beq         $t9, $zero, L_803F52A4
    if (ctx->r25 == 0) {
        // 0x803F518C: andi        $t0, $v0, 0x4
        ctx->r8 = ctx->r2 & 0X4;
            goto L_803F52A4;
    }
    // 0x803F518C: andi        $t0, $v0, 0x4
    ctx->r8 = ctx->r2 & 0X4;
    // 0x803F5190: andi        $t0, $v0, 0x1
    ctx->r8 = ctx->r2 & 0X1;
    // 0x803F5194: beq         $t0, $zero, L_803F51CC
    if (ctx->r8 == 0) {
        // 0x803F5198: lui         $at, 0x803F
        ctx->r1 = S32(0X803F << 16);
            goto L_803F51CC;
    }
    // 0x803F5198: lui         $at, 0x803F
    ctx->r1 = S32(0X803F << 16);
    // 0x803F519C: cfc1        $t1, $FpcCsr
    ctx->r9 = get_cop1_cs();
    // 0x803F51A0: lui         $at, 0x803F
    ctx->r1 = S32(0X803F << 16);
    // 0x803F51A4: lwc1        $f18, 0x75C0($at)
    ctx->f18.u32l = MEM_W(ctx->r1, 0X75C0);
    // 0x803F51A8: ori         $at, $t1, 0x3
    ctx->r1 = ctx->r9 | 0X3;
    // 0x803F51AC: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x803F51B0: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x803F51B4: nop

    // 0x803F51B8: cvt.w.s     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    ctx->f4.u32l = CVT_W_S(ctx->f18.fl);
    // 0x803F51BC: mfc1        $t2, $f4
    ctx->r10 = (int32_t)ctx->f4.u32l;
    // 0x803F51C0: ctc1        $t1, $FpcCsr
    set_cop1_cs(ctx->r9);
    // 0x803F51C4: b           L_803F51F8
    // 0x803F51C8: sh          $t2, 0x6($s0)
    MEM_H(0X6, ctx->r16) = ctx->r10;
        goto L_803F51F8;
    // 0x803F51C8: sh          $t2, 0x6($s0)
    MEM_H(0X6, ctx->r16) = ctx->r10;
L_803F51CC:
    // 0x803F51CC: cfc1        $t3, $FpcCsr
    ctx->r11 = get_cop1_cs();
    // 0x803F51D0: lwc1        $f6, 0x75C4($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X75C4);
    // 0x803F51D4: ori         $at, $t3, 0x3
    ctx->r1 = ctx->r11 | 0X3;
    // 0x803F51D8: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x803F51DC: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x803F51E0: nop

    // 0x803F51E4: cvt.w.s     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.u32l = CVT_W_S(ctx->f6.fl);
    // 0x803F51E8: mfc1        $t4, $f8
    ctx->r12 = (int32_t)ctx->f8.u32l;
    // 0x803F51EC: ctc1        $t3, $FpcCsr
    set_cop1_cs(ctx->r11);
    // 0x803F51F0: sh          $t4, 0x6($s0)
    MEM_H(0X6, ctx->r16) = ctx->r12;
    // 0x803F51F4: nop

L_803F51F8:
    // 0x803F51F8: lh          $t5, 0x6($s0)
    ctx->r13 = MEM_H(ctx->r16, 0X6);
    // 0x803F51FC: lw          $t6, 0x48($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X48);
    // 0x803F5200: mtc1        $t5, $f10
    ctx->f10.u32l = ctx->r13;
    // 0x803F5204: lwc1        $f4, 0x44($t6)
    ctx->f4.u32l = MEM_W(ctx->r14, 0X44);
    // 0x803F5208: cvt.s.w     $f18, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    ctx->f18.fl = CVT_S_W(ctx->f10.u32l);
    // 0x803F520C: mul.s       $f0, $f16, $f16
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f0.fl = MUL_S(ctx->f16.fl, ctx->f16.fl);
    // 0x803F5210: sub.s       $f14, $f18, $f4
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f14.fl = ctx->f18.fl - ctx->f4.fl;
    // 0x803F5214: mul.s       $f2, $f14, $f14
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f2.fl = MUL_S(ctx->f14.fl, ctx->f14.fl);
    // 0x803F5218: c.lt.s      $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f0.fl < ctx->f2.fl;
    // 0x803F521C: nop

    // 0x803F5220: bc1f        L_803F5238
    if (!c1cs) {
        // 0x803F5224: nop
    
            goto L_803F5238;
    }
    // 0x803F5224: nop

    // 0x803F5228: jal         0x80272AEC
    // 0x803F522C: mov.s       $f12, $f14
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 14);
    ctx->f12.fl = ctx->f14.fl;
    LOOKUP_FUNC(0x80272AEC)(rdram, ctx);
        goto after_2;
    // 0x803F522C: mov.s       $f12, $f14
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 14);
    ctx->f12.fl = ctx->f14.fl;
    after_2:
    // 0x803F5230: b           L_803F5244
    // 0x803F5234: mov.s       $f14, $f0
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    ctx->f14.fl = ctx->f0.fl;
        goto L_803F5244;
    // 0x803F5234: mov.s       $f14, $f0
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    ctx->f14.fl = ctx->f0.fl;
L_803F5238:
    // 0x803F5238: jal         0x8007FA40
    // 0x803F523C: sub.s       $f12, $f0, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f12.fl = ctx->f0.fl - ctx->f2.fl;
    func_8007FA40(rdram, ctx);
        goto after_3;
    // 0x803F523C: sub.s       $f12, $f0, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f12.fl = ctx->f0.fl - ctx->f2.fl;
    after_3:
    // 0x803F5240: mov.s       $f14, $f0
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    ctx->f14.fl = ctx->f0.fl;
L_803F5244:
    // 0x803F5244: lwc1        $f12, 0x54($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X54);
    // 0x803F5248: jal         0x80081040
    // 0x803F524C: swc1        $f14, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->f14.u32l;
    func_80081040(rdram, ctx);
        goto after_4;
    // 0x803F524C: swc1        $f14, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->f14.u32l;
    after_4:
    // 0x803F5250: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x803F5254: lwc1        $f14, 0x44($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X44);
    // 0x803F5258: c.lt.s      $f0, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f0.fl < ctx->f6.fl;
    // 0x803F525C: lw          $t7, 0x48($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X48);
    // 0x803F5260: bc1f        L_803F526C
    if (!c1cs) {
        // 0x803F5264: nop
    
            goto L_803F526C;
    }
    // 0x803F5264: nop

    // 0x803F5268: neg.s       $f14, $f14
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); 
    ctx->f14.fl = -ctx->f14.fl;
L_803F526C:
    // 0x803F526C: lwc1        $f8, 0x4C($t7)
    ctx->f8.u32l = MEM_W(ctx->r15, 0X4C);
    // 0x803F5270: nop

    // 0x803F5274: add.s       $f10, $f8, $f14
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f10.fl = ctx->f8.fl + ctx->f14.fl;
    // 0x803F5278: cfc1        $t8, $FpcCsr
    ctx->r24 = get_cop1_cs();
    // 0x803F527C: nop

    // 0x803F5280: ori         $at, $t8, 0x3
    ctx->r1 = ctx->r24 | 0X3;
    // 0x803F5284: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x803F5288: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x803F528C: nop

    // 0x803F5290: cvt.w.s     $f18, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    ctx->f18.u32l = CVT_W_S(ctx->f10.fl);
    // 0x803F5294: mfc1        $t9, $f18
    ctx->r25 = (int32_t)ctx->f18.u32l;
    // 0x803F5298: ctc1        $t8, $FpcCsr
    set_cop1_cs(ctx->r24);
    // 0x803F529C: b           L_803F53B4
    // 0x803F52A0: sh          $t9, 0x4($s0)
    MEM_H(0X4, ctx->r16) = ctx->r25;
        goto L_803F53B4;
    // 0x803F52A0: sh          $t9, 0x4($s0)
    MEM_H(0X4, ctx->r16) = ctx->r25;
L_803F52A4:
    // 0x803F52A4: beq         $t0, $zero, L_803F52DC
    if (ctx->r8 == 0) {
        // 0x803F52A8: lui         $at, 0x803F
        ctx->r1 = S32(0X803F << 16);
            goto L_803F52DC;
    }
    // 0x803F52A8: lui         $at, 0x803F
    ctx->r1 = S32(0X803F << 16);
    // 0x803F52AC: cfc1        $t1, $FpcCsr
    ctx->r9 = get_cop1_cs();
    // 0x803F52B0: lui         $at, 0x803F
    ctx->r1 = S32(0X803F << 16);
    // 0x803F52B4: lwc1        $f4, 0x75CC($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X75CC);
    // 0x803F52B8: ori         $at, $t1, 0x3
    ctx->r1 = ctx->r9 | 0X3;
    // 0x803F52BC: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x803F52C0: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x803F52C4: nop

    // 0x803F52C8: cvt.w.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = CVT_W_S(ctx->f4.fl);
    // 0x803F52CC: mfc1        $t2, $f6
    ctx->r10 = (int32_t)ctx->f6.u32l;
    // 0x803F52D0: ctc1        $t1, $FpcCsr
    set_cop1_cs(ctx->r9);
    // 0x803F52D4: b           L_803F5308
    // 0x803F52D8: sh          $t2, 0x6($s0)
    MEM_H(0X6, ctx->r16) = ctx->r10;
        goto L_803F5308;
    // 0x803F52D8: sh          $t2, 0x6($s0)
    MEM_H(0X6, ctx->r16) = ctx->r10;
L_803F52DC:
    // 0x803F52DC: cfc1        $t3, $FpcCsr
    ctx->r11 = get_cop1_cs();
    // 0x803F52E0: lwc1        $f8, 0x75C8($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X75C8);
    // 0x803F52E4: ori         $at, $t3, 0x3
    ctx->r1 = ctx->r11 | 0X3;
    // 0x803F52E8: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x803F52EC: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x803F52F0: nop

    // 0x803F52F4: cvt.w.s     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.u32l = CVT_W_S(ctx->f8.fl);
    // 0x803F52F8: mfc1        $t4, $f10
    ctx->r12 = (int32_t)ctx->f10.u32l;
    // 0x803F52FC: ctc1        $t3, $FpcCsr
    set_cop1_cs(ctx->r11);
    // 0x803F5300: sh          $t4, 0x6($s0)
    MEM_H(0X6, ctx->r16) = ctx->r12;
    // 0x803F5304: nop

L_803F5308:
    // 0x803F5308: lh          $t5, 0x4($s0)
    ctx->r13 = MEM_H(ctx->r16, 0X4);
    // 0x803F530C: lw          $t6, 0x48($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X48);
    // 0x803F5310: mtc1        $t5, $f18
    ctx->f18.u32l = ctx->r13;
    // 0x803F5314: lwc1        $f6, 0x4C($t6)
    ctx->f6.u32l = MEM_W(ctx->r14, 0X4C);
    // 0x803F5318: cvt.s.w     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    ctx->f4.fl = CVT_S_W(ctx->f18.u32l);
    // 0x803F531C: mul.s       $f0, $f16, $f16
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f0.fl = MUL_S(ctx->f16.fl, ctx->f16.fl);
    // 0x803F5320: sub.s       $f14, $f4, $f6
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f14.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x803F5324: mul.s       $f2, $f14, $f14
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f2.fl = MUL_S(ctx->f14.fl, ctx->f14.fl);
    // 0x803F5328: c.lt.s      $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f0.fl < ctx->f2.fl;
    // 0x803F532C: nop

    // 0x803F5330: bc1f        L_803F5348
    if (!c1cs) {
        // 0x803F5334: nop
    
            goto L_803F5348;
    }
    // 0x803F5334: nop

    // 0x803F5338: jal         0x80272AEC
    // 0x803F533C: mov.s       $f12, $f14
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 14);
    ctx->f12.fl = ctx->f14.fl;
    LOOKUP_FUNC(0x80272AEC)(rdram, ctx);
        goto after_5;
    // 0x803F533C: mov.s       $f12, $f14
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 14);
    ctx->f12.fl = ctx->f14.fl;
    after_5:
    // 0x803F5340: b           L_803F5354
    // 0x803F5344: mov.s       $f14, $f0
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    ctx->f14.fl = ctx->f0.fl;
        goto L_803F5354;
    // 0x803F5344: mov.s       $f14, $f0
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    ctx->f14.fl = ctx->f0.fl;
L_803F5348:
    // 0x803F5348: jal         0x8007FA40
    // 0x803F534C: sub.s       $f12, $f0, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f12.fl = ctx->f0.fl - ctx->f2.fl;
    func_8007FA40(rdram, ctx);
        goto after_6;
    // 0x803F534C: sub.s       $f12, $f0, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f12.fl = ctx->f0.fl - ctx->f2.fl;
    after_6:
    // 0x803F5350: mov.s       $f14, $f0
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    ctx->f14.fl = ctx->f0.fl;
L_803F5354:
    // 0x803F5354: lwc1        $f12, 0x54($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X54);
    // 0x803F5358: jal         0x80080E80
    // 0x803F535C: swc1        $f14, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->f14.u32l;
    func_80080E80(rdram, ctx);
        goto after_7;
    // 0x803F535C: swc1        $f14, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->f14.u32l;
    after_7:
    // 0x803F5360: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x803F5364: lwc1        $f14, 0x40($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X40);
    // 0x803F5368: c.lt.s      $f8, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f8.fl < ctx->f0.fl;
    // 0x803F536C: lw          $t7, 0x48($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X48);
    // 0x803F5370: bc1f        L_803F537C
    if (!c1cs) {
        // 0x803F5374: nop
    
            goto L_803F537C;
    }
    // 0x803F5374: nop

    // 0x803F5378: neg.s       $f14, $f14
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); 
    ctx->f14.fl = -ctx->f14.fl;
L_803F537C:
    // 0x803F537C: lwc1        $f10, 0x44($t7)
    ctx->f10.u32l = MEM_W(ctx->r15, 0X44);
    // 0x803F5380: nop

    // 0x803F5384: add.s       $f18, $f10, $f14
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f18.fl = ctx->f10.fl + ctx->f14.fl;
    // 0x803F5388: cfc1        $t8, $FpcCsr
    ctx->r24 = get_cop1_cs();
    // 0x803F538C: nop

    // 0x803F5390: ori         $at, $t8, 0x3
    ctx->r1 = ctx->r24 | 0X3;
    // 0x803F5394: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x803F5398: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x803F539C: nop

    // 0x803F53A0: cvt.w.s     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    ctx->f4.u32l = CVT_W_S(ctx->f18.fl);
    // 0x803F53A4: mfc1        $t9, $f4
    ctx->r25 = (int32_t)ctx->f4.u32l;
    // 0x803F53A8: ctc1        $t8, $FpcCsr
    set_cop1_cs(ctx->r24);
    // 0x803F53AC: sh          $t9, 0x6($s0)
    MEM_H(0X6, ctx->r16) = ctx->r25;
    // 0x803F53B0: nop

L_803F53B4:
    // 0x803F53B4: lh          $t0, 0x4($s0)
    ctx->r8 = MEM_H(ctx->r16, 0X4);
    // 0x803F53B8: lh          $t1, 0x6($s0)
    ctx->r9 = MEM_H(ctx->r16, 0X6);
    // 0x803F53BC: mtc1        $t0, $f6
    ctx->f6.u32l = ctx->r8;
    // 0x803F53C0: mtc1        $t1, $f8
    ctx->f8.u32l = ctx->r9;
    // 0x803F53C4: cvt.s.w     $f6, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    ctx->f6.fl = CVT_S_W(ctx->f6.u32l);
    // 0x803F53C8: lw          $a0, 0x48($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X48);
    // 0x803F53CC: addiu       $a3, $sp, 0x38
    ctx->r7 = ADD32(ctx->r29, 0X38);
    // 0x803F53D0: cvt.s.w     $f8, $f8
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 8);
    ctx->f8.fl = CVT_S_W(ctx->f8.u32l);
    // 0x803F53D4: mfc1        $a1, $f6
    ctx->r5 = (int32_t)ctx->f6.u32l;
    // 0x803F53D8: mfc1        $a2, $f8
    ctx->r6 = (int32_t)ctx->f8.u32l;
    // 0x803F53DC: jal         0x80272B98
    // 0x803F53E0: nop

    LOOKUP_FUNC(0x80272B98)(rdram, ctx);
        goto after_8;
    // 0x803F53E0: nop

    after_8:
    // 0x803F53E4: lh          $t2, 0x4($s0)
    ctx->r10 = MEM_H(ctx->r16, 0X4);
    // 0x803F53E8: lh          $t3, 0x6($s0)
    ctx->r11 = MEM_H(ctx->r16, 0X6);
    // 0x803F53EC: mtc1        $t2, $f18
    ctx->f18.u32l = ctx->r10;
    // 0x803F53F0: mtc1        $t3, $f16
    ctx->f16.u32l = ctx->r11;
    // 0x803F53F4: lwc1        $f10, 0x38($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X38);
    // 0x803F53F8: cvt.s.w     $f12, $f18
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 18);
    ctx->f12.fl = CVT_S_W(ctx->f18.u32l);
    // 0x803F53FC: lui         $a2, 0x803F
    ctx->r6 = S32(0X803F << 16);
    // 0x803F5400: swc1        $f10, 0xC($s0)
    MEM_W(0XC, ctx->r16) = ctx->f10.u32l;
    // 0x803F5404: cvt.s.w     $f14, $f16
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 16);
    ctx->f14.fl = CVT_S_W(ctx->f16.u32l);
    // 0x803F5408: jal         0x8027A184
    // 0x803F540C: addiu       $a2, $a2, 0x75C0
    ctx->r6 = ADD32(ctx->r6, 0X75C0);
    LOOKUP_FUNC(0x8027A184)(rdram, ctx);
        goto after_9;
    // 0x803F540C: addiu       $a2, $a2, 0x75C0
    ctx->r6 = ADD32(ctx->r6, 0X75C0);
    after_9:
    // 0x803F5410: beq         $v0, $zero, L_803F5444
    if (ctx->r2 == 0) {
        // 0x803F5414: lui         $at, 0x803F
        ctx->r1 = S32(0X803F << 16);
            goto L_803F5444;
    }
    // 0x803F5414: lui         $at, 0x803F
    ctx->r1 = S32(0X803F << 16);
    // 0x803F5418: lwc1        $f6, 0x54($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X54);
    // 0x803F541C: lwc1        $f11, 0x7D90($at)
    ctx->f_odd[(11 - 1) * 2] = MEM_W(ctx->r1, 0X7D90);
    // 0x803F5420: lwc1        $f10, 0x7D94($at)
    ctx->f10.u32l = MEM_W(ctx->r1, 0X7D94);
    // 0x803F5424: cvt.d.s     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f8.d = CVT_D_S(ctx->f6.fl);
    // 0x803F5428: add.d       $f18, $f8, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f10.d); 
    ctx->f18.d = ctx->f8.d + ctx->f10.d;
    // 0x803F542C: lw          $a0, 0x48($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X48);
    // 0x803F5430: cvt.s.d     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.d); 
    ctx->f4.fl = CVT_S_D(ctx->f18.d);
    // 0x803F5434: lw          $a3, 0x2C($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X2C);
    // 0x803F5438: mfc1        $a2, $f4
    ctx->r6 = (int32_t)ctx->f4.u32l;
    // 0x803F543C: jal         0x803F1828
    // 0x803F5440: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    ovl_803F0000_menu_func_803F1828(rdram, ctx);
        goto after_10;
    // 0x803F5440: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_10:
L_803F5444:
    // 0x803F5444: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x803F5448: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x803F544C: jr          $ra
    // 0x803F5450: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    return;
    // 0x803F5450: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
;}
RECOMP_FUNC void ovl_803F0000_menu_func_803F5100(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803F5100: sub.s       $f6, $f4, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f6.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x803F5104: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x803F5108: ctc1        $a3, $FpcCsr
    set_cop1_cs(ctx->r7);
    // 0x803F510C: nop

    // 0x803F5110: cvt.w.s     $f6, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    ctx->f6.u32l = CVT_W_S(ctx->f6.fl);
    // 0x803F5114: cfc1        $a3, $FpcCsr
    ctx->r7 = get_cop1_cs();
    // 0x803F5118: nop

    // 0x803F511C: andi        $a3, $a3, 0x78
    ctx->r7 = ctx->r7 & 0X78;
    // 0x803F5120: bne         $a3, $zero, L_803F5134
    if (ctx->r7 != 0) {
        // 0x803F5124: nop
    
            goto L_803F5134;
    }
    // 0x803F5124: nop

    // 0x803F5128: mfc1        $a3, $f6
    ctx->r7 = (int32_t)ctx->f6.u32l;
    // 0x803F512C: b           L_803F514C
    // 0x803F5130: or          $a3, $a3, $at
    ctx->r7 = ctx->r7 | ctx->r1;
        goto L_803F514C;
    // 0x803F5130: or          $a3, $a3, $at
    ctx->r7 = ctx->r7 | ctx->r1;
L_803F5134:
    // 0x803F5134: b           L_803F514C
    // 0x803F5138: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
        goto L_803F514C;
    // 0x803F5138: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    // 0x803F513C: mfc1        $a3, $f6
    ctx->r7 = (int32_t)ctx->f6.u32l;
    // 0x803F5140: nop

    // 0x803F5144: bltz        $a3, L_803F5134
    if (SIGNED(ctx->r7) < 0) {
        // 0x803F5148: nop
    
            goto L_803F5134;
    }
    // 0x803F5148: nop

L_803F514C:
    // 0x803F514C: ctc1        $t6, $FpcCsr
    set_cop1_cs(ctx->r14);
    // 0x803F5150: jal         0x803F1828
    // 0x803F5154: sw          $a3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r7;
    ovl_803F0000_menu_func_803F1828(rdram, ctx);
        goto after_0;
    // 0x803F5154: sw          $a3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r7;
    after_0:
    // 0x803F5158: lh          $t7, 0x4($s0)
    ctx->r15 = MEM_H(ctx->r16, 0X4);
    // 0x803F515C: lh          $t8, 0x6($s0)
    ctx->r24 = MEM_H(ctx->r16, 0X6);
    // 0x803F5160: mtc1        $t7, $f8
    ctx->f8.u32l = ctx->r15;
    // 0x803F5164: mtc1        $t8, $f10
    ctx->f10.u32l = ctx->r24;
    // 0x803F5168: lui         $a2, 0x803F
    ctx->r6 = S32(0X803F << 16);
    // 0x803F516C: addiu       $a2, $a2, 0x75C0
    ctx->r6 = ADD32(ctx->r6, 0X75C0);
    // 0x803F5170: cvt.s.w     $f12, $f8
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    ctx->f12.fl = CVT_S_W(ctx->f8.u32l);
    // 0x803F5174: jal         0x8027A184
    // 0x803F5178: cvt.s.w     $f14, $f10
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 10);
    ctx->f14.fl = CVT_S_W(ctx->f10.u32l);
    LOOKUP_FUNC(0x8027A184)(rdram, ctx);
        goto after_1;
    // 0x803F5178: cvt.s.w     $f14, $f10
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 10);
    ctx->f14.fl = CVT_S_W(ctx->f10.u32l);
    after_1:
    // 0x803F517C: lwc1        $f16, 0x50($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X50);
    // 0x803F5180: beq         $v0, $zero, L_803F5444
    if (ctx->r2 == 0) {
        // 0x803F5184: andi        $t9, $v0, 0x3
        ctx->r25 = ctx->r2 & 0X3;
            goto L_803F5444;
    }
    // 0x803F5184: andi        $t9, $v0, 0x3
    ctx->r25 = ctx->r2 & 0X3;
    // 0x803F5188: beq         $t9, $zero, L_803F52A4
    if (ctx->r25 == 0) {
        // 0x803F518C: andi        $t0, $v0, 0x4
        ctx->r8 = ctx->r2 & 0X4;
            goto L_803F52A4;
    }
    // 0x803F518C: andi        $t0, $v0, 0x4
    ctx->r8 = ctx->r2 & 0X4;
    // 0x803F5190: andi        $t0, $v0, 0x1
    ctx->r8 = ctx->r2 & 0X1;
    // 0x803F5194: beq         $t0, $zero, L_803F51CC
    if (ctx->r8 == 0) {
        // 0x803F5198: lui         $at, 0x803F
        ctx->r1 = S32(0X803F << 16);
            goto L_803F51CC;
    }
    // 0x803F5198: lui         $at, 0x803F
    ctx->r1 = S32(0X803F << 16);
    // 0x803F519C: cfc1        $t1, $FpcCsr
    ctx->r9 = get_cop1_cs();
    // 0x803F51A0: lui         $at, 0x803F
    ctx->r1 = S32(0X803F << 16);
    // 0x803F51A4: lwc1        $f18, 0x75C0($at)
    ctx->f18.u32l = MEM_W(ctx->r1, 0X75C0);
    // 0x803F51A8: ori         $at, $t1, 0x3
    ctx->r1 = ctx->r9 | 0X3;
    // 0x803F51AC: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x803F51B0: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x803F51B4: nop

    // 0x803F51B8: cvt.w.s     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    ctx->f4.u32l = CVT_W_S(ctx->f18.fl);
    // 0x803F51BC: mfc1        $t2, $f4
    ctx->r10 = (int32_t)ctx->f4.u32l;
    // 0x803F51C0: ctc1        $t1, $FpcCsr
    set_cop1_cs(ctx->r9);
    // 0x803F51C4: b           L_803F51F8
    // 0x803F51C8: sh          $t2, 0x6($s0)
    MEM_H(0X6, ctx->r16) = ctx->r10;
        goto L_803F51F8;
    // 0x803F51C8: sh          $t2, 0x6($s0)
    MEM_H(0X6, ctx->r16) = ctx->r10;
L_803F51CC:
    // 0x803F51CC: cfc1        $t3, $FpcCsr
    ctx->r11 = get_cop1_cs();
    // 0x803F51D0: lwc1        $f6, 0x75C4($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X75C4);
    // 0x803F51D4: ori         $at, $t3, 0x3
    ctx->r1 = ctx->r11 | 0X3;
    // 0x803F51D8: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x803F51DC: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x803F51E0: nop

    // 0x803F51E4: cvt.w.s     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.u32l = CVT_W_S(ctx->f6.fl);
    // 0x803F51E8: mfc1        $t4, $f8
    ctx->r12 = (int32_t)ctx->f8.u32l;
    // 0x803F51EC: ctc1        $t3, $FpcCsr
    set_cop1_cs(ctx->r11);
    // 0x803F51F0: sh          $t4, 0x6($s0)
    MEM_H(0X6, ctx->r16) = ctx->r12;
    // 0x803F51F4: nop

L_803F51F8:
    // 0x803F51F8: lh          $t5, 0x6($s0)
    ctx->r13 = MEM_H(ctx->r16, 0X6);
    // 0x803F51FC: lw          $t6, 0x48($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X48);
    // 0x803F5200: mtc1        $t5, $f10
    ctx->f10.u32l = ctx->r13;
    // 0x803F5204: lwc1        $f4, 0x44($t6)
    ctx->f4.u32l = MEM_W(ctx->r14, 0X44);
    // 0x803F5208: cvt.s.w     $f18, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    ctx->f18.fl = CVT_S_W(ctx->f10.u32l);
    // 0x803F520C: mul.s       $f0, $f16, $f16
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f0.fl = MUL_S(ctx->f16.fl, ctx->f16.fl);
    // 0x803F5210: sub.s       $f14, $f18, $f4
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f14.fl = ctx->f18.fl - ctx->f4.fl;
    // 0x803F5214: mul.s       $f2, $f14, $f14
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f2.fl = MUL_S(ctx->f14.fl, ctx->f14.fl);
    // 0x803F5218: c.lt.s      $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f0.fl < ctx->f2.fl;
    // 0x803F521C: nop

    // 0x803F5220: bc1f        L_803F5238
    if (!c1cs) {
        // 0x803F5224: nop
    
            goto L_803F5238;
    }
    // 0x803F5224: nop

    // 0x803F5228: jal         0x80272AEC
    // 0x803F522C: mov.s       $f12, $f14
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 14);
    ctx->f12.fl = ctx->f14.fl;
    LOOKUP_FUNC(0x80272AEC)(rdram, ctx);
        goto after_2;
    // 0x803F522C: mov.s       $f12, $f14
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 14);
    ctx->f12.fl = ctx->f14.fl;
    after_2:
    // 0x803F5230: b           L_803F5244
    // 0x803F5234: mov.s       $f14, $f0
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    ctx->f14.fl = ctx->f0.fl;
        goto L_803F5244;
    // 0x803F5234: mov.s       $f14, $f0
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    ctx->f14.fl = ctx->f0.fl;
L_803F5238:
    // 0x803F5238: jal         0x8007FA40
    // 0x803F523C: sub.s       $f12, $f0, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f12.fl = ctx->f0.fl - ctx->f2.fl;
    func_8007FA40(rdram, ctx);
        goto after_3;
    // 0x803F523C: sub.s       $f12, $f0, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f12.fl = ctx->f0.fl - ctx->f2.fl;
    after_3:
    // 0x803F5240: mov.s       $f14, $f0
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    ctx->f14.fl = ctx->f0.fl;
L_803F5244:
    // 0x803F5244: lwc1        $f12, 0x54($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X54);
    // 0x803F5248: jal         0x80081040
    // 0x803F524C: swc1        $f14, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->f14.u32l;
    func_80081040(rdram, ctx);
        goto after_4;
    // 0x803F524C: swc1        $f14, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->f14.u32l;
    after_4:
    // 0x803F5250: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x803F5254: lwc1        $f14, 0x44($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X44);
    // 0x803F5258: c.lt.s      $f0, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f0.fl < ctx->f6.fl;
    // 0x803F525C: lw          $t7, 0x48($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X48);
    // 0x803F5260: bc1f        L_803F526C
    if (!c1cs) {
        // 0x803F5264: nop
    
            goto L_803F526C;
    }
    // 0x803F5264: nop

    // 0x803F5268: neg.s       $f14, $f14
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); 
    ctx->f14.fl = -ctx->f14.fl;
L_803F526C:
    // 0x803F526C: lwc1        $f8, 0x4C($t7)
    ctx->f8.u32l = MEM_W(ctx->r15, 0X4C);
    // 0x803F5270: nop

    // 0x803F5274: add.s       $f10, $f8, $f14
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f10.fl = ctx->f8.fl + ctx->f14.fl;
    // 0x803F5278: cfc1        $t8, $FpcCsr
    ctx->r24 = get_cop1_cs();
    // 0x803F527C: nop

    // 0x803F5280: ori         $at, $t8, 0x3
    ctx->r1 = ctx->r24 | 0X3;
    // 0x803F5284: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x803F5288: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x803F528C: nop

    // 0x803F5290: cvt.w.s     $f18, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    ctx->f18.u32l = CVT_W_S(ctx->f10.fl);
    // 0x803F5294: mfc1        $t9, $f18
    ctx->r25 = (int32_t)ctx->f18.u32l;
    // 0x803F5298: ctc1        $t8, $FpcCsr
    set_cop1_cs(ctx->r24);
    // 0x803F529C: b           L_803F53B4
    // 0x803F52A0: sh          $t9, 0x4($s0)
    MEM_H(0X4, ctx->r16) = ctx->r25;
        goto L_803F53B4;
    // 0x803F52A0: sh          $t9, 0x4($s0)
    MEM_H(0X4, ctx->r16) = ctx->r25;
L_803F52A4:
    // 0x803F52A4: beq         $t0, $zero, L_803F52DC
    if (ctx->r8 == 0) {
        // 0x803F52A8: lui         $at, 0x803F
        ctx->r1 = S32(0X803F << 16);
            goto L_803F52DC;
    }
    // 0x803F52A8: lui         $at, 0x803F
    ctx->r1 = S32(0X803F << 16);
    // 0x803F52AC: cfc1        $t1, $FpcCsr
    ctx->r9 = get_cop1_cs();
    // 0x803F52B0: lui         $at, 0x803F
    ctx->r1 = S32(0X803F << 16);
    // 0x803F52B4: lwc1        $f4, 0x75CC($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X75CC);
    // 0x803F52B8: ori         $at, $t1, 0x3
    ctx->r1 = ctx->r9 | 0X3;
    // 0x803F52BC: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x803F52C0: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x803F52C4: nop

    // 0x803F52C8: cvt.w.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = CVT_W_S(ctx->f4.fl);
    // 0x803F52CC: mfc1        $t2, $f6
    ctx->r10 = (int32_t)ctx->f6.u32l;
    // 0x803F52D0: ctc1        $t1, $FpcCsr
    set_cop1_cs(ctx->r9);
    // 0x803F52D4: b           L_803F5308
    // 0x803F52D8: sh          $t2, 0x6($s0)
    MEM_H(0X6, ctx->r16) = ctx->r10;
        goto L_803F5308;
    // 0x803F52D8: sh          $t2, 0x6($s0)
    MEM_H(0X6, ctx->r16) = ctx->r10;
L_803F52DC:
    // 0x803F52DC: cfc1        $t3, $FpcCsr
    ctx->r11 = get_cop1_cs();
    // 0x803F52E0: lwc1        $f8, 0x75C8($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X75C8);
    // 0x803F52E4: ori         $at, $t3, 0x3
    ctx->r1 = ctx->r11 | 0X3;
    // 0x803F52E8: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x803F52EC: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x803F52F0: nop

    // 0x803F52F4: cvt.w.s     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.u32l = CVT_W_S(ctx->f8.fl);
    // 0x803F52F8: mfc1        $t4, $f10
    ctx->r12 = (int32_t)ctx->f10.u32l;
    // 0x803F52FC: ctc1        $t3, $FpcCsr
    set_cop1_cs(ctx->r11);
    // 0x803F5300: sh          $t4, 0x6($s0)
    MEM_H(0X6, ctx->r16) = ctx->r12;
    // 0x803F5304: nop

L_803F5308:
    // 0x803F5308: lh          $t5, 0x4($s0)
    ctx->r13 = MEM_H(ctx->r16, 0X4);
    // 0x803F530C: lw          $t6, 0x48($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X48);
    // 0x803F5310: mtc1        $t5, $f18
    ctx->f18.u32l = ctx->r13;
    // 0x803F5314: lwc1        $f6, 0x4C($t6)
    ctx->f6.u32l = MEM_W(ctx->r14, 0X4C);
    // 0x803F5318: cvt.s.w     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    ctx->f4.fl = CVT_S_W(ctx->f18.u32l);
    // 0x803F531C: mul.s       $f0, $f16, $f16
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f0.fl = MUL_S(ctx->f16.fl, ctx->f16.fl);
    // 0x803F5320: sub.s       $f14, $f4, $f6
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f14.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x803F5324: mul.s       $f2, $f14, $f14
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f2.fl = MUL_S(ctx->f14.fl, ctx->f14.fl);
    // 0x803F5328: c.lt.s      $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f0.fl < ctx->f2.fl;
    // 0x803F532C: nop

    // 0x803F5330: bc1f        L_803F5348
    if (!c1cs) {
        // 0x803F5334: nop
    
            goto L_803F5348;
    }
    // 0x803F5334: nop

    // 0x803F5338: jal         0x80272AEC
    // 0x803F533C: mov.s       $f12, $f14
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 14);
    ctx->f12.fl = ctx->f14.fl;
    LOOKUP_FUNC(0x80272AEC)(rdram, ctx);
        goto after_5;
    // 0x803F533C: mov.s       $f12, $f14
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 14);
    ctx->f12.fl = ctx->f14.fl;
    after_5:
    // 0x803F5340: b           L_803F5354
    // 0x803F5344: mov.s       $f14, $f0
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    ctx->f14.fl = ctx->f0.fl;
        goto L_803F5354;
    // 0x803F5344: mov.s       $f14, $f0
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    ctx->f14.fl = ctx->f0.fl;
L_803F5348:
    // 0x803F5348: jal         0x8007FA40
    // 0x803F534C: sub.s       $f12, $f0, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f12.fl = ctx->f0.fl - ctx->f2.fl;
    func_8007FA40(rdram, ctx);
        goto after_6;
    // 0x803F534C: sub.s       $f12, $f0, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f12.fl = ctx->f0.fl - ctx->f2.fl;
    after_6:
    // 0x803F5350: mov.s       $f14, $f0
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    ctx->f14.fl = ctx->f0.fl;
L_803F5354:
    // 0x803F5354: lwc1        $f12, 0x54($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X54);
    // 0x803F5358: jal         0x80080E80
    // 0x803F535C: swc1        $f14, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->f14.u32l;
    func_80080E80(rdram, ctx);
        goto after_7;
    // 0x803F535C: swc1        $f14, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->f14.u32l;
    after_7:
    // 0x803F5360: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x803F5364: lwc1        $f14, 0x40($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X40);
    // 0x803F5368: c.lt.s      $f8, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f8.fl < ctx->f0.fl;
    // 0x803F536C: lw          $t7, 0x48($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X48);
    // 0x803F5370: bc1f        L_803F537C
    if (!c1cs) {
        // 0x803F5374: nop
    
            goto L_803F537C;
    }
    // 0x803F5374: nop

    // 0x803F5378: neg.s       $f14, $f14
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); 
    ctx->f14.fl = -ctx->f14.fl;
L_803F537C:
    // 0x803F537C: lwc1        $f10, 0x44($t7)
    ctx->f10.u32l = MEM_W(ctx->r15, 0X44);
    // 0x803F5380: nop

    // 0x803F5384: add.s       $f18, $f10, $f14
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f18.fl = ctx->f10.fl + ctx->f14.fl;
    // 0x803F5388: cfc1        $t8, $FpcCsr
    ctx->r24 = get_cop1_cs();
    // 0x803F538C: nop

    // 0x803F5390: ori         $at, $t8, 0x3
    ctx->r1 = ctx->r24 | 0X3;
    // 0x803F5394: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x803F5398: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x803F539C: nop

    // 0x803F53A0: cvt.w.s     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    ctx->f4.u32l = CVT_W_S(ctx->f18.fl);
    // 0x803F53A4: mfc1        $t9, $f4
    ctx->r25 = (int32_t)ctx->f4.u32l;
    // 0x803F53A8: ctc1        $t8, $FpcCsr
    set_cop1_cs(ctx->r24);
    // 0x803F53AC: sh          $t9, 0x6($s0)
    MEM_H(0X6, ctx->r16) = ctx->r25;
    // 0x803F53B0: nop

L_803F53B4:
    // 0x803F53B4: lh          $t0, 0x4($s0)
    ctx->r8 = MEM_H(ctx->r16, 0X4);
    // 0x803F53B8: lh          $t1, 0x6($s0)
    ctx->r9 = MEM_H(ctx->r16, 0X6);
    // 0x803F53BC: mtc1        $t0, $f6
    ctx->f6.u32l = ctx->r8;
    // 0x803F53C0: mtc1        $t1, $f8
    ctx->f8.u32l = ctx->r9;
    // 0x803F53C4: cvt.s.w     $f6, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    ctx->f6.fl = CVT_S_W(ctx->f6.u32l);
    // 0x803F53C8: lw          $a0, 0x48($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X48);
    // 0x803F53CC: addiu       $a3, $sp, 0x38
    ctx->r7 = ADD32(ctx->r29, 0X38);
    // 0x803F53D0: cvt.s.w     $f8, $f8
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 8);
    ctx->f8.fl = CVT_S_W(ctx->f8.u32l);
    // 0x803F53D4: mfc1        $a1, $f6
    ctx->r5 = (int32_t)ctx->f6.u32l;
    // 0x803F53D8: mfc1        $a2, $f8
    ctx->r6 = (int32_t)ctx->f8.u32l;
    // 0x803F53DC: jal         0x80272B98
    // 0x803F53E0: nop

    LOOKUP_FUNC(0x80272B98)(rdram, ctx);
        goto after_8;
    // 0x803F53E0: nop

    after_8:
    // 0x803F53E4: lh          $t2, 0x4($s0)
    ctx->r10 = MEM_H(ctx->r16, 0X4);
    // 0x803F53E8: lh          $t3, 0x6($s0)
    ctx->r11 = MEM_H(ctx->r16, 0X6);
    // 0x803F53EC: mtc1        $t2, $f18
    ctx->f18.u32l = ctx->r10;
    // 0x803F53F0: mtc1        $t3, $f16
    ctx->f16.u32l = ctx->r11;
    // 0x803F53F4: lwc1        $f10, 0x38($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X38);
    // 0x803F53F8: cvt.s.w     $f12, $f18
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 18);
    ctx->f12.fl = CVT_S_W(ctx->f18.u32l);
    // 0x803F53FC: lui         $a2, 0x803F
    ctx->r6 = S32(0X803F << 16);
    // 0x803F5400: swc1        $f10, 0xC($s0)
    MEM_W(0XC, ctx->r16) = ctx->f10.u32l;
    // 0x803F5404: cvt.s.w     $f14, $f16
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 16);
    ctx->f14.fl = CVT_S_W(ctx->f16.u32l);
    // 0x803F5408: jal         0x8027A184
    // 0x803F540C: addiu       $a2, $a2, 0x75C0
    ctx->r6 = ADD32(ctx->r6, 0X75C0);
    LOOKUP_FUNC(0x8027A184)(rdram, ctx);
        goto after_9;
    // 0x803F540C: addiu       $a2, $a2, 0x75C0
    ctx->r6 = ADD32(ctx->r6, 0X75C0);
    after_9:
    // 0x803F5410: beq         $v0, $zero, L_803F5444
    if (ctx->r2 == 0) {
        // 0x803F5414: lui         $at, 0x803F
        ctx->r1 = S32(0X803F << 16);
            goto L_803F5444;
    }
    // 0x803F5414: lui         $at, 0x803F
    ctx->r1 = S32(0X803F << 16);
    // 0x803F5418: lwc1        $f6, 0x54($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X54);
    // 0x803F541C: lwc1        $f11, 0x7D90($at)
    ctx->f_odd[(11 - 1) * 2] = MEM_W(ctx->r1, 0X7D90);
    // 0x803F5420: lwc1        $f10, 0x7D94($at)
    ctx->f10.u32l = MEM_W(ctx->r1, 0X7D94);
    // 0x803F5424: cvt.d.s     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f8.d = CVT_D_S(ctx->f6.fl);
    // 0x803F5428: add.d       $f18, $f8, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f10.d); 
    ctx->f18.d = ctx->f8.d + ctx->f10.d;
    // 0x803F542C: lw          $a0, 0x48($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X48);
    // 0x803F5430: cvt.s.d     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.d); 
    ctx->f4.fl = CVT_S_D(ctx->f18.d);
    // 0x803F5434: lw          $a3, 0x2C($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X2C);
    // 0x803F5438: mfc1        $a2, $f4
    ctx->r6 = (int32_t)ctx->f4.u32l;
    // 0x803F543C: jal         0x803F1828
    // 0x803F5440: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    ovl_803F0000_menu_func_803F1828(rdram, ctx);
        goto after_10;
    // 0x803F5440: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_10:
L_803F5444:
    // 0x803F5444: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x803F5448: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x803F544C: jr          $ra
    // 0x803F5450: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    return;
    // 0x803F5450: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
;}
RECOMP_FUNC void ovl_803F0000_menu_func_803F5148(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803F5148: nop

    // 0x803F514C: ctc1        $t6, $FpcCsr
    set_cop1_cs(ctx->r14);
    // 0x803F5150: jal         0x803F1828
    // 0x803F5154: sw          $a3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r7;
    ovl_803F0000_menu_func_803F1828(rdram, ctx);
        goto after_0;
    // 0x803F5154: sw          $a3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r7;
    after_0:
    // 0x803F5158: lh          $t7, 0x4($s0)
    ctx->r15 = MEM_H(ctx->r16, 0X4);
    // 0x803F515C: lh          $t8, 0x6($s0)
    ctx->r24 = MEM_H(ctx->r16, 0X6);
    // 0x803F5160: mtc1        $t7, $f8
    ctx->f8.u32l = ctx->r15;
    // 0x803F5164: mtc1        $t8, $f10
    ctx->f10.u32l = ctx->r24;
    // 0x803F5168: lui         $a2, 0x803F
    ctx->r6 = S32(0X803F << 16);
    // 0x803F516C: addiu       $a2, $a2, 0x75C0
    ctx->r6 = ADD32(ctx->r6, 0X75C0);
    // 0x803F5170: cvt.s.w     $f12, $f8
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    ctx->f12.fl = CVT_S_W(ctx->f8.u32l);
    // 0x803F5174: jal         0x8027A184
    // 0x803F5178: cvt.s.w     $f14, $f10
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 10);
    ctx->f14.fl = CVT_S_W(ctx->f10.u32l);
    LOOKUP_FUNC(0x8027A184)(rdram, ctx);
        goto after_1;
    // 0x803F5178: cvt.s.w     $f14, $f10
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 10);
    ctx->f14.fl = CVT_S_W(ctx->f10.u32l);
    after_1:
    // 0x803F517C: lwc1        $f16, 0x50($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X50);
    // 0x803F5180: beq         $v0, $zero, L_803F5444
    if (ctx->r2 == 0) {
        // 0x803F5184: andi        $t9, $v0, 0x3
        ctx->r25 = ctx->r2 & 0X3;
            goto L_803F5444;
    }
    // 0x803F5184: andi        $t9, $v0, 0x3
    ctx->r25 = ctx->r2 & 0X3;
    // 0x803F5188: beq         $t9, $zero, L_803F52A4
    if (ctx->r25 == 0) {
        // 0x803F518C: andi        $t0, $v0, 0x4
        ctx->r8 = ctx->r2 & 0X4;
            goto L_803F52A4;
    }
    // 0x803F518C: andi        $t0, $v0, 0x4
    ctx->r8 = ctx->r2 & 0X4;
    // 0x803F5190: andi        $t0, $v0, 0x1
    ctx->r8 = ctx->r2 & 0X1;
    // 0x803F5194: beq         $t0, $zero, L_803F51CC
    if (ctx->r8 == 0) {
        // 0x803F5198: lui         $at, 0x803F
        ctx->r1 = S32(0X803F << 16);
            goto L_803F51CC;
    }
    // 0x803F5198: lui         $at, 0x803F
    ctx->r1 = S32(0X803F << 16);
    // 0x803F519C: cfc1        $t1, $FpcCsr
    ctx->r9 = get_cop1_cs();
    // 0x803F51A0: lui         $at, 0x803F
    ctx->r1 = S32(0X803F << 16);
    // 0x803F51A4: lwc1        $f18, 0x75C0($at)
    ctx->f18.u32l = MEM_W(ctx->r1, 0X75C0);
    // 0x803F51A8: ori         $at, $t1, 0x3
    ctx->r1 = ctx->r9 | 0X3;
    // 0x803F51AC: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x803F51B0: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x803F51B4: nop

    // 0x803F51B8: cvt.w.s     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    ctx->f4.u32l = CVT_W_S(ctx->f18.fl);
    // 0x803F51BC: mfc1        $t2, $f4
    ctx->r10 = (int32_t)ctx->f4.u32l;
    // 0x803F51C0: ctc1        $t1, $FpcCsr
    set_cop1_cs(ctx->r9);
    // 0x803F51C4: b           L_803F51F8
    // 0x803F51C8: sh          $t2, 0x6($s0)
    MEM_H(0X6, ctx->r16) = ctx->r10;
        goto L_803F51F8;
    // 0x803F51C8: sh          $t2, 0x6($s0)
    MEM_H(0X6, ctx->r16) = ctx->r10;
L_803F51CC:
    // 0x803F51CC: cfc1        $t3, $FpcCsr
    ctx->r11 = get_cop1_cs();
    // 0x803F51D0: lwc1        $f6, 0x75C4($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X75C4);
    // 0x803F51D4: ori         $at, $t3, 0x3
    ctx->r1 = ctx->r11 | 0X3;
    // 0x803F51D8: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x803F51DC: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x803F51E0: nop

    // 0x803F51E4: cvt.w.s     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.u32l = CVT_W_S(ctx->f6.fl);
    // 0x803F51E8: mfc1        $t4, $f8
    ctx->r12 = (int32_t)ctx->f8.u32l;
    // 0x803F51EC: ctc1        $t3, $FpcCsr
    set_cop1_cs(ctx->r11);
    // 0x803F51F0: sh          $t4, 0x6($s0)
    MEM_H(0X6, ctx->r16) = ctx->r12;
    // 0x803F51F4: nop

L_803F51F8:
    // 0x803F51F8: lh          $t5, 0x6($s0)
    ctx->r13 = MEM_H(ctx->r16, 0X6);
    // 0x803F51FC: lw          $t6, 0x48($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X48);
    // 0x803F5200: mtc1        $t5, $f10
    ctx->f10.u32l = ctx->r13;
    // 0x803F5204: lwc1        $f4, 0x44($t6)
    ctx->f4.u32l = MEM_W(ctx->r14, 0X44);
    // 0x803F5208: cvt.s.w     $f18, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    ctx->f18.fl = CVT_S_W(ctx->f10.u32l);
    // 0x803F520C: mul.s       $f0, $f16, $f16
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f0.fl = MUL_S(ctx->f16.fl, ctx->f16.fl);
    // 0x803F5210: sub.s       $f14, $f18, $f4
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f14.fl = ctx->f18.fl - ctx->f4.fl;
    // 0x803F5214: mul.s       $f2, $f14, $f14
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f2.fl = MUL_S(ctx->f14.fl, ctx->f14.fl);
    // 0x803F5218: c.lt.s      $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f0.fl < ctx->f2.fl;
    // 0x803F521C: nop

    // 0x803F5220: bc1f        L_803F5238
    if (!c1cs) {
        // 0x803F5224: nop
    
            goto L_803F5238;
    }
    // 0x803F5224: nop

    // 0x803F5228: jal         0x80272AEC
    // 0x803F522C: mov.s       $f12, $f14
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 14);
    ctx->f12.fl = ctx->f14.fl;
    LOOKUP_FUNC(0x80272AEC)(rdram, ctx);
        goto after_2;
    // 0x803F522C: mov.s       $f12, $f14
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 14);
    ctx->f12.fl = ctx->f14.fl;
    after_2:
    // 0x803F5230: b           L_803F5244
    // 0x803F5234: mov.s       $f14, $f0
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    ctx->f14.fl = ctx->f0.fl;
        goto L_803F5244;
    // 0x803F5234: mov.s       $f14, $f0
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    ctx->f14.fl = ctx->f0.fl;
L_803F5238:
    // 0x803F5238: jal         0x8007FA40
    // 0x803F523C: sub.s       $f12, $f0, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f12.fl = ctx->f0.fl - ctx->f2.fl;
    func_8007FA40(rdram, ctx);
        goto after_3;
    // 0x803F523C: sub.s       $f12, $f0, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f12.fl = ctx->f0.fl - ctx->f2.fl;
    after_3:
    // 0x803F5240: mov.s       $f14, $f0
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    ctx->f14.fl = ctx->f0.fl;
L_803F5244:
    // 0x803F5244: lwc1        $f12, 0x54($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X54);
    // 0x803F5248: jal         0x80081040
    // 0x803F524C: swc1        $f14, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->f14.u32l;
    func_80081040(rdram, ctx);
        goto after_4;
    // 0x803F524C: swc1        $f14, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->f14.u32l;
    after_4:
    // 0x803F5250: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x803F5254: lwc1        $f14, 0x44($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X44);
    // 0x803F5258: c.lt.s      $f0, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f0.fl < ctx->f6.fl;
    // 0x803F525C: lw          $t7, 0x48($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X48);
    // 0x803F5260: bc1f        L_803F526C
    if (!c1cs) {
        // 0x803F5264: nop
    
            goto L_803F526C;
    }
    // 0x803F5264: nop

    // 0x803F5268: neg.s       $f14, $f14
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); 
    ctx->f14.fl = -ctx->f14.fl;
L_803F526C:
    // 0x803F526C: lwc1        $f8, 0x4C($t7)
    ctx->f8.u32l = MEM_W(ctx->r15, 0X4C);
    // 0x803F5270: nop

    // 0x803F5274: add.s       $f10, $f8, $f14
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f10.fl = ctx->f8.fl + ctx->f14.fl;
    // 0x803F5278: cfc1        $t8, $FpcCsr
    ctx->r24 = get_cop1_cs();
    // 0x803F527C: nop

    // 0x803F5280: ori         $at, $t8, 0x3
    ctx->r1 = ctx->r24 | 0X3;
    // 0x803F5284: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x803F5288: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x803F528C: nop

    // 0x803F5290: cvt.w.s     $f18, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    ctx->f18.u32l = CVT_W_S(ctx->f10.fl);
    // 0x803F5294: mfc1        $t9, $f18
    ctx->r25 = (int32_t)ctx->f18.u32l;
    // 0x803F5298: ctc1        $t8, $FpcCsr
    set_cop1_cs(ctx->r24);
    // 0x803F529C: b           L_803F53B4
    // 0x803F52A0: sh          $t9, 0x4($s0)
    MEM_H(0X4, ctx->r16) = ctx->r25;
        goto L_803F53B4;
    // 0x803F52A0: sh          $t9, 0x4($s0)
    MEM_H(0X4, ctx->r16) = ctx->r25;
L_803F52A4:
    // 0x803F52A4: beq         $t0, $zero, L_803F52DC
    if (ctx->r8 == 0) {
        // 0x803F52A8: lui         $at, 0x803F
        ctx->r1 = S32(0X803F << 16);
            goto L_803F52DC;
    }
    // 0x803F52A8: lui         $at, 0x803F
    ctx->r1 = S32(0X803F << 16);
    // 0x803F52AC: cfc1        $t1, $FpcCsr
    ctx->r9 = get_cop1_cs();
    // 0x803F52B0: lui         $at, 0x803F
    ctx->r1 = S32(0X803F << 16);
    // 0x803F52B4: lwc1        $f4, 0x75CC($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X75CC);
    // 0x803F52B8: ori         $at, $t1, 0x3
    ctx->r1 = ctx->r9 | 0X3;
    // 0x803F52BC: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x803F52C0: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x803F52C4: nop

    // 0x803F52C8: cvt.w.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = CVT_W_S(ctx->f4.fl);
    // 0x803F52CC: mfc1        $t2, $f6
    ctx->r10 = (int32_t)ctx->f6.u32l;
    // 0x803F52D0: ctc1        $t1, $FpcCsr
    set_cop1_cs(ctx->r9);
    // 0x803F52D4: b           L_803F5308
    // 0x803F52D8: sh          $t2, 0x6($s0)
    MEM_H(0X6, ctx->r16) = ctx->r10;
        goto L_803F5308;
    // 0x803F52D8: sh          $t2, 0x6($s0)
    MEM_H(0X6, ctx->r16) = ctx->r10;
L_803F52DC:
    // 0x803F52DC: cfc1        $t3, $FpcCsr
    ctx->r11 = get_cop1_cs();
    // 0x803F52E0: lwc1        $f8, 0x75C8($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X75C8);
    // 0x803F52E4: ori         $at, $t3, 0x3
    ctx->r1 = ctx->r11 | 0X3;
    // 0x803F52E8: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x803F52EC: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x803F52F0: nop

    // 0x803F52F4: cvt.w.s     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.u32l = CVT_W_S(ctx->f8.fl);
    // 0x803F52F8: mfc1        $t4, $f10
    ctx->r12 = (int32_t)ctx->f10.u32l;
    // 0x803F52FC: ctc1        $t3, $FpcCsr
    set_cop1_cs(ctx->r11);
    // 0x803F5300: sh          $t4, 0x6($s0)
    MEM_H(0X6, ctx->r16) = ctx->r12;
    // 0x803F5304: nop

L_803F5308:
    // 0x803F5308: lh          $t5, 0x4($s0)
    ctx->r13 = MEM_H(ctx->r16, 0X4);
    // 0x803F530C: lw          $t6, 0x48($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X48);
    // 0x803F5310: mtc1        $t5, $f18
    ctx->f18.u32l = ctx->r13;
    // 0x803F5314: lwc1        $f6, 0x4C($t6)
    ctx->f6.u32l = MEM_W(ctx->r14, 0X4C);
    // 0x803F5318: cvt.s.w     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    ctx->f4.fl = CVT_S_W(ctx->f18.u32l);
    // 0x803F531C: mul.s       $f0, $f16, $f16
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f0.fl = MUL_S(ctx->f16.fl, ctx->f16.fl);
    // 0x803F5320: sub.s       $f14, $f4, $f6
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f14.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x803F5324: mul.s       $f2, $f14, $f14
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f2.fl = MUL_S(ctx->f14.fl, ctx->f14.fl);
    // 0x803F5328: c.lt.s      $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f0.fl < ctx->f2.fl;
    // 0x803F532C: nop

    // 0x803F5330: bc1f        L_803F5348
    if (!c1cs) {
        // 0x803F5334: nop
    
            goto L_803F5348;
    }
    // 0x803F5334: nop

    // 0x803F5338: jal         0x80272AEC
    // 0x803F533C: mov.s       $f12, $f14
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 14);
    ctx->f12.fl = ctx->f14.fl;
    LOOKUP_FUNC(0x80272AEC)(rdram, ctx);
        goto after_5;
    // 0x803F533C: mov.s       $f12, $f14
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 14);
    ctx->f12.fl = ctx->f14.fl;
    after_5:
    // 0x803F5340: b           L_803F5354
    // 0x803F5344: mov.s       $f14, $f0
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    ctx->f14.fl = ctx->f0.fl;
        goto L_803F5354;
    // 0x803F5344: mov.s       $f14, $f0
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    ctx->f14.fl = ctx->f0.fl;
L_803F5348:
    // 0x803F5348: jal         0x8007FA40
    // 0x803F534C: sub.s       $f12, $f0, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f12.fl = ctx->f0.fl - ctx->f2.fl;
    func_8007FA40(rdram, ctx);
        goto after_6;
    // 0x803F534C: sub.s       $f12, $f0, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f12.fl = ctx->f0.fl - ctx->f2.fl;
    after_6:
    // 0x803F5350: mov.s       $f14, $f0
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    ctx->f14.fl = ctx->f0.fl;
L_803F5354:
    // 0x803F5354: lwc1        $f12, 0x54($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X54);
    // 0x803F5358: jal         0x80080E80
    // 0x803F535C: swc1        $f14, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->f14.u32l;
    func_80080E80(rdram, ctx);
        goto after_7;
    // 0x803F535C: swc1        $f14, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->f14.u32l;
    after_7:
    // 0x803F5360: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x803F5364: lwc1        $f14, 0x40($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X40);
    // 0x803F5368: c.lt.s      $f8, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f8.fl < ctx->f0.fl;
    // 0x803F536C: lw          $t7, 0x48($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X48);
    // 0x803F5370: bc1f        L_803F537C
    if (!c1cs) {
        // 0x803F5374: nop
    
            goto L_803F537C;
    }
    // 0x803F5374: nop

    // 0x803F5378: neg.s       $f14, $f14
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); 
    ctx->f14.fl = -ctx->f14.fl;
L_803F537C:
    // 0x803F537C: lwc1        $f10, 0x44($t7)
    ctx->f10.u32l = MEM_W(ctx->r15, 0X44);
    // 0x803F5380: nop

    // 0x803F5384: add.s       $f18, $f10, $f14
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f18.fl = ctx->f10.fl + ctx->f14.fl;
    // 0x803F5388: cfc1        $t8, $FpcCsr
    ctx->r24 = get_cop1_cs();
    // 0x803F538C: nop

    // 0x803F5390: ori         $at, $t8, 0x3
    ctx->r1 = ctx->r24 | 0X3;
    // 0x803F5394: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x803F5398: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x803F539C: nop

    // 0x803F53A0: cvt.w.s     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    ctx->f4.u32l = CVT_W_S(ctx->f18.fl);
    // 0x803F53A4: mfc1        $t9, $f4
    ctx->r25 = (int32_t)ctx->f4.u32l;
    // 0x803F53A8: ctc1        $t8, $FpcCsr
    set_cop1_cs(ctx->r24);
    // 0x803F53AC: sh          $t9, 0x6($s0)
    MEM_H(0X6, ctx->r16) = ctx->r25;
    // 0x803F53B0: nop

L_803F53B4:
    // 0x803F53B4: lh          $t0, 0x4($s0)
    ctx->r8 = MEM_H(ctx->r16, 0X4);
    // 0x803F53B8: lh          $t1, 0x6($s0)
    ctx->r9 = MEM_H(ctx->r16, 0X6);
    // 0x803F53BC: mtc1        $t0, $f6
    ctx->f6.u32l = ctx->r8;
    // 0x803F53C0: mtc1        $t1, $f8
    ctx->f8.u32l = ctx->r9;
    // 0x803F53C4: cvt.s.w     $f6, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    ctx->f6.fl = CVT_S_W(ctx->f6.u32l);
    // 0x803F53C8: lw          $a0, 0x48($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X48);
    // 0x803F53CC: addiu       $a3, $sp, 0x38
    ctx->r7 = ADD32(ctx->r29, 0X38);
    // 0x803F53D0: cvt.s.w     $f8, $f8
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 8);
    ctx->f8.fl = CVT_S_W(ctx->f8.u32l);
    // 0x803F53D4: mfc1        $a1, $f6
    ctx->r5 = (int32_t)ctx->f6.u32l;
    // 0x803F53D8: mfc1        $a2, $f8
    ctx->r6 = (int32_t)ctx->f8.u32l;
    // 0x803F53DC: jal         0x80272B98
    // 0x803F53E0: nop

    LOOKUP_FUNC(0x80272B98)(rdram, ctx);
        goto after_8;
    // 0x803F53E0: nop

    after_8:
    // 0x803F53E4: lh          $t2, 0x4($s0)
    ctx->r10 = MEM_H(ctx->r16, 0X4);
    // 0x803F53E8: lh          $t3, 0x6($s0)
    ctx->r11 = MEM_H(ctx->r16, 0X6);
    // 0x803F53EC: mtc1        $t2, $f18
    ctx->f18.u32l = ctx->r10;
    // 0x803F53F0: mtc1        $t3, $f16
    ctx->f16.u32l = ctx->r11;
    // 0x803F53F4: lwc1        $f10, 0x38($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X38);
    // 0x803F53F8: cvt.s.w     $f12, $f18
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 18);
    ctx->f12.fl = CVT_S_W(ctx->f18.u32l);
    // 0x803F53FC: lui         $a2, 0x803F
    ctx->r6 = S32(0X803F << 16);
    // 0x803F5400: swc1        $f10, 0xC($s0)
    MEM_W(0XC, ctx->r16) = ctx->f10.u32l;
    // 0x803F5404: cvt.s.w     $f14, $f16
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 16);
    ctx->f14.fl = CVT_S_W(ctx->f16.u32l);
    // 0x803F5408: jal         0x8027A184
    // 0x803F540C: addiu       $a2, $a2, 0x75C0
    ctx->r6 = ADD32(ctx->r6, 0X75C0);
    LOOKUP_FUNC(0x8027A184)(rdram, ctx);
        goto after_9;
    // 0x803F540C: addiu       $a2, $a2, 0x75C0
    ctx->r6 = ADD32(ctx->r6, 0X75C0);
    after_9:
    // 0x803F5410: beq         $v0, $zero, L_803F5444
    if (ctx->r2 == 0) {
        // 0x803F5414: lui         $at, 0x803F
        ctx->r1 = S32(0X803F << 16);
            goto L_803F5444;
    }
    // 0x803F5414: lui         $at, 0x803F
    ctx->r1 = S32(0X803F << 16);
    // 0x803F5418: lwc1        $f6, 0x54($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X54);
    // 0x803F541C: lwc1        $f11, 0x7D90($at)
    ctx->f_odd[(11 - 1) * 2] = MEM_W(ctx->r1, 0X7D90);
    // 0x803F5420: lwc1        $f10, 0x7D94($at)
    ctx->f10.u32l = MEM_W(ctx->r1, 0X7D94);
    // 0x803F5424: cvt.d.s     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f8.d = CVT_D_S(ctx->f6.fl);
    // 0x803F5428: add.d       $f18, $f8, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f10.d); 
    ctx->f18.d = ctx->f8.d + ctx->f10.d;
    // 0x803F542C: lw          $a0, 0x48($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X48);
    // 0x803F5430: cvt.s.d     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.d); 
    ctx->f4.fl = CVT_S_D(ctx->f18.d);
    // 0x803F5434: lw          $a3, 0x2C($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X2C);
    // 0x803F5438: mfc1        $a2, $f4
    ctx->r6 = (int32_t)ctx->f4.u32l;
    // 0x803F543C: jal         0x803F1828
    // 0x803F5440: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    ovl_803F0000_menu_func_803F1828(rdram, ctx);
        goto after_10;
    // 0x803F5440: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_10:
L_803F5444:
    // 0x803F5444: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x803F5448: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x803F544C: jr          $ra
    // 0x803F5450: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    return;
    // 0x803F5450: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
;}
RECOMP_FUNC void ovl_803F0000_menu_func_803F5270(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803F5270: nop

    // 0x803F5274: add.s       $f10, $f8, $f14
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f10.fl = ctx->f8.fl + ctx->f14.fl;
    // 0x803F5278: cfc1        $t8, $FpcCsr
    ctx->r24 = get_cop1_cs();
    // 0x803F527C: nop

    // 0x803F5280: ori         $at, $t8, 0x3
    ctx->r1 = ctx->r24 | 0X3;
    // 0x803F5284: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x803F5288: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x803F528C: nop

    // 0x803F5290: cvt.w.s     $f18, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    ctx->f18.u32l = CVT_W_S(ctx->f10.fl);
    // 0x803F5294: mfc1        $t9, $f18
    ctx->r25 = (int32_t)ctx->f18.u32l;
    // 0x803F5298: ctc1        $t8, $FpcCsr
    set_cop1_cs(ctx->r24);
    // 0x803F529C: b           L_803F53B4
    // 0x803F52A0: sh          $t9, 0x4($s0)
    MEM_H(0X4, ctx->r16) = ctx->r25;
        goto L_803F53B4;
    // 0x803F52A0: sh          $t9, 0x4($s0)
    MEM_H(0X4, ctx->r16) = ctx->r25;
    // 0x803F52A4: beq         $t0, $zero, L_803F52DC
    if (ctx->r8 == 0) {
        // 0x803F52A8: lui         $at, 0x803F
        ctx->r1 = S32(0X803F << 16);
            goto L_803F52DC;
    }
    // 0x803F52A8: lui         $at, 0x803F
    ctx->r1 = S32(0X803F << 16);
    // 0x803F52AC: cfc1        $t1, $FpcCsr
    ctx->r9 = get_cop1_cs();
    // 0x803F52B0: lui         $at, 0x803F
    ctx->r1 = S32(0X803F << 16);
    // 0x803F52B4: lwc1        $f4, 0x75CC($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X75CC);
    // 0x803F52B8: ori         $at, $t1, 0x3
    ctx->r1 = ctx->r9 | 0X3;
    // 0x803F52BC: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x803F52C0: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x803F52C4: nop

    // 0x803F52C8: cvt.w.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = CVT_W_S(ctx->f4.fl);
    // 0x803F52CC: mfc1        $t2, $f6
    ctx->r10 = (int32_t)ctx->f6.u32l;
    // 0x803F52D0: ctc1        $t1, $FpcCsr
    set_cop1_cs(ctx->r9);
    // 0x803F52D4: b           L_803F5308
    // 0x803F52D8: sh          $t2, 0x6($s0)
    MEM_H(0X6, ctx->r16) = ctx->r10;
        goto L_803F5308;
    // 0x803F52D8: sh          $t2, 0x6($s0)
    MEM_H(0X6, ctx->r16) = ctx->r10;
L_803F52DC:
    // 0x803F52DC: cfc1        $t3, $FpcCsr
    ctx->r11 = get_cop1_cs();
    // 0x803F52E0: lwc1        $f8, 0x75C8($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X75C8);
    // 0x803F52E4: ori         $at, $t3, 0x3
    ctx->r1 = ctx->r11 | 0X3;
    // 0x803F52E8: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x803F52EC: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x803F52F0: nop

    // 0x803F52F4: cvt.w.s     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.u32l = CVT_W_S(ctx->f8.fl);
    // 0x803F52F8: mfc1        $t4, $f10
    ctx->r12 = (int32_t)ctx->f10.u32l;
    // 0x803F52FC: ctc1        $t3, $FpcCsr
    set_cop1_cs(ctx->r11);
    // 0x803F5300: sh          $t4, 0x6($s0)
    MEM_H(0X6, ctx->r16) = ctx->r12;
    // 0x803F5304: nop

L_803F5308:
    // 0x803F5308: lh          $t5, 0x4($s0)
    ctx->r13 = MEM_H(ctx->r16, 0X4);
    // 0x803F530C: lw          $t6, 0x48($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X48);
    // 0x803F5310: mtc1        $t5, $f18
    ctx->f18.u32l = ctx->r13;
    // 0x803F5314: lwc1        $f6, 0x4C($t6)
    ctx->f6.u32l = MEM_W(ctx->r14, 0X4C);
    // 0x803F5318: cvt.s.w     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    ctx->f4.fl = CVT_S_W(ctx->f18.u32l);
    // 0x803F531C: mul.s       $f0, $f16, $f16
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f0.fl = MUL_S(ctx->f16.fl, ctx->f16.fl);
    // 0x803F5320: sub.s       $f14, $f4, $f6
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f14.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x803F5324: mul.s       $f2, $f14, $f14
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f2.fl = MUL_S(ctx->f14.fl, ctx->f14.fl);
    // 0x803F5328: c.lt.s      $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f0.fl < ctx->f2.fl;
    // 0x803F532C: nop

    // 0x803F5330: bc1f        L_803F5348
    if (!c1cs) {
        // 0x803F5334: nop
    
            goto L_803F5348;
    }
    // 0x803F5334: nop

    // 0x803F5338: jal         0x80272AEC
    // 0x803F533C: mov.s       $f12, $f14
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 14);
    ctx->f12.fl = ctx->f14.fl;
    LOOKUP_FUNC(0x80272AEC)(rdram, ctx);
        goto after_0;
    // 0x803F533C: mov.s       $f12, $f14
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 14);
    ctx->f12.fl = ctx->f14.fl;
    after_0:
    // 0x803F5340: b           L_803F5354
    // 0x803F5344: mov.s       $f14, $f0
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    ctx->f14.fl = ctx->f0.fl;
        goto L_803F5354;
    // 0x803F5344: mov.s       $f14, $f0
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    ctx->f14.fl = ctx->f0.fl;
L_803F5348:
    // 0x803F5348: jal         0x8007FA40
    // 0x803F534C: sub.s       $f12, $f0, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f12.fl = ctx->f0.fl - ctx->f2.fl;
    func_8007FA40(rdram, ctx);
        goto after_1;
    // 0x803F534C: sub.s       $f12, $f0, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f12.fl = ctx->f0.fl - ctx->f2.fl;
    after_1:
    // 0x803F5350: mov.s       $f14, $f0
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    ctx->f14.fl = ctx->f0.fl;
L_803F5354:
    // 0x803F5354: lwc1        $f12, 0x54($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X54);
    // 0x803F5358: jal         0x80080E80
    // 0x803F535C: swc1        $f14, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->f14.u32l;
    func_80080E80(rdram, ctx);
        goto after_2;
    // 0x803F535C: swc1        $f14, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->f14.u32l;
    after_2:
    // 0x803F5360: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x803F5364: lwc1        $f14, 0x40($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X40);
    // 0x803F5368: c.lt.s      $f8, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f8.fl < ctx->f0.fl;
    // 0x803F536C: lw          $t7, 0x48($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X48);
    // 0x803F5370: bc1f        L_803F537C
    if (!c1cs) {
        // 0x803F5374: nop
    
            goto L_803F537C;
    }
    // 0x803F5374: nop

    // 0x803F5378: neg.s       $f14, $f14
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); 
    ctx->f14.fl = -ctx->f14.fl;
L_803F537C:
    // 0x803F537C: lwc1        $f10, 0x44($t7)
    ctx->f10.u32l = MEM_W(ctx->r15, 0X44);
    // 0x803F5380: nop

    // 0x803F5384: add.s       $f18, $f10, $f14
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f18.fl = ctx->f10.fl + ctx->f14.fl;
    // 0x803F5388: cfc1        $t8, $FpcCsr
    ctx->r24 = get_cop1_cs();
    // 0x803F538C: nop

    // 0x803F5390: ori         $at, $t8, 0x3
    ctx->r1 = ctx->r24 | 0X3;
    // 0x803F5394: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x803F5398: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x803F539C: nop

    // 0x803F53A0: cvt.w.s     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    ctx->f4.u32l = CVT_W_S(ctx->f18.fl);
    // 0x803F53A4: mfc1        $t9, $f4
    ctx->r25 = (int32_t)ctx->f4.u32l;
    // 0x803F53A8: ctc1        $t8, $FpcCsr
    set_cop1_cs(ctx->r24);
    // 0x803F53AC: sh          $t9, 0x6($s0)
    MEM_H(0X6, ctx->r16) = ctx->r25;
    // 0x803F53B0: nop

L_803F53B4:
    // 0x803F53B4: lh          $t0, 0x4($s0)
    ctx->r8 = MEM_H(ctx->r16, 0X4);
    // 0x803F53B8: lh          $t1, 0x6($s0)
    ctx->r9 = MEM_H(ctx->r16, 0X6);
    // 0x803F53BC: mtc1        $t0, $f6
    ctx->f6.u32l = ctx->r8;
    // 0x803F53C0: mtc1        $t1, $f8
    ctx->f8.u32l = ctx->r9;
    // 0x803F53C4: cvt.s.w     $f6, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    ctx->f6.fl = CVT_S_W(ctx->f6.u32l);
    // 0x803F53C8: lw          $a0, 0x48($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X48);
    // 0x803F53CC: addiu       $a3, $sp, 0x38
    ctx->r7 = ADD32(ctx->r29, 0X38);
    // 0x803F53D0: cvt.s.w     $f8, $f8
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 8);
    ctx->f8.fl = CVT_S_W(ctx->f8.u32l);
    // 0x803F53D4: mfc1        $a1, $f6
    ctx->r5 = (int32_t)ctx->f6.u32l;
    // 0x803F53D8: mfc1        $a2, $f8
    ctx->r6 = (int32_t)ctx->f8.u32l;
    // 0x803F53DC: jal         0x80272B98
    // 0x803F53E0: nop

    LOOKUP_FUNC(0x80272B98)(rdram, ctx);
        goto after_3;
    // 0x803F53E0: nop

    after_3:
    // 0x803F53E4: lh          $t2, 0x4($s0)
    ctx->r10 = MEM_H(ctx->r16, 0X4);
    // 0x803F53E8: lh          $t3, 0x6($s0)
    ctx->r11 = MEM_H(ctx->r16, 0X6);
    // 0x803F53EC: mtc1        $t2, $f18
    ctx->f18.u32l = ctx->r10;
    // 0x803F53F0: mtc1        $t3, $f16
    ctx->f16.u32l = ctx->r11;
    // 0x803F53F4: lwc1        $f10, 0x38($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X38);
    // 0x803F53F8: cvt.s.w     $f12, $f18
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 18);
    ctx->f12.fl = CVT_S_W(ctx->f18.u32l);
    // 0x803F53FC: lui         $a2, 0x803F
    ctx->r6 = S32(0X803F << 16);
    // 0x803F5400: swc1        $f10, 0xC($s0)
    MEM_W(0XC, ctx->r16) = ctx->f10.u32l;
    // 0x803F5404: cvt.s.w     $f14, $f16
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 16);
    ctx->f14.fl = CVT_S_W(ctx->f16.u32l);
    // 0x803F5408: jal         0x8027A184
    // 0x803F540C: addiu       $a2, $a2, 0x75C0
    ctx->r6 = ADD32(ctx->r6, 0X75C0);
    LOOKUP_FUNC(0x8027A184)(rdram, ctx);
        goto after_4;
    // 0x803F540C: addiu       $a2, $a2, 0x75C0
    ctx->r6 = ADD32(ctx->r6, 0X75C0);
    after_4:
    // 0x803F5410: beq         $v0, $zero, L_803F5444
    if (ctx->r2 == 0) {
        // 0x803F5414: lui         $at, 0x803F
        ctx->r1 = S32(0X803F << 16);
            goto L_803F5444;
    }
    // 0x803F5414: lui         $at, 0x803F
    ctx->r1 = S32(0X803F << 16);
    // 0x803F5418: lwc1        $f6, 0x54($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X54);
    // 0x803F541C: lwc1        $f11, 0x7D90($at)
    ctx->f_odd[(11 - 1) * 2] = MEM_W(ctx->r1, 0X7D90);
    // 0x803F5420: lwc1        $f10, 0x7D94($at)
    ctx->f10.u32l = MEM_W(ctx->r1, 0X7D94);
    // 0x803F5424: cvt.d.s     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f8.d = CVT_D_S(ctx->f6.fl);
    // 0x803F5428: add.d       $f18, $f8, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f10.d); 
    ctx->f18.d = ctx->f8.d + ctx->f10.d;
    // 0x803F542C: lw          $a0, 0x48($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X48);
    // 0x803F5430: cvt.s.d     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.d); 
    ctx->f4.fl = CVT_S_D(ctx->f18.d);
    // 0x803F5434: lw          $a3, 0x2C($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X2C);
    // 0x803F5438: mfc1        $a2, $f4
    ctx->r6 = (int32_t)ctx->f4.u32l;
    // 0x803F543C: jal         0x803F1828
    // 0x803F5440: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    ovl_803F0000_menu_func_803F1828(rdram, ctx);
        goto after_5;
    // 0x803F5440: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_5:
L_803F5444:
    // 0x803F5444: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x803F5448: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x803F544C: jr          $ra
    // 0x803F5450: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    return;
    // 0x803F5450: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
;}
RECOMP_FUNC void ovl_803F0000_menu_func_803F53D0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803F53D0: cvt.s.w     $f8, $f8
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 8);
    ctx->f8.fl = CVT_S_W(ctx->f8.u32l);
    // 0x803F53D4: mfc1        $a1, $f6
    ctx->r5 = (int32_t)ctx->f6.u32l;
    // 0x803F53D8: mfc1        $a2, $f8
    ctx->r6 = (int32_t)ctx->f8.u32l;
    // 0x803F53DC: jal         0x80272B98
    // 0x803F53E0: nop

    LOOKUP_FUNC(0x80272B98)(rdram, ctx);
        goto after_0;
    // 0x803F53E0: nop

    after_0:
    // 0x803F53E4: lh          $t2, 0x4($s0)
    ctx->r10 = MEM_H(ctx->r16, 0X4);
    // 0x803F53E8: lh          $t3, 0x6($s0)
    ctx->r11 = MEM_H(ctx->r16, 0X6);
    // 0x803F53EC: mtc1        $t2, $f18
    ctx->f18.u32l = ctx->r10;
    // 0x803F53F0: mtc1        $t3, $f16
    ctx->f16.u32l = ctx->r11;
    // 0x803F53F4: lwc1        $f10, 0x38($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X38);
    // 0x803F53F8: cvt.s.w     $f12, $f18
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 18);
    ctx->f12.fl = CVT_S_W(ctx->f18.u32l);
    // 0x803F53FC: lui         $a2, 0x803F
    ctx->r6 = S32(0X803F << 16);
    // 0x803F5400: swc1        $f10, 0xC($s0)
    MEM_W(0XC, ctx->r16) = ctx->f10.u32l;
    // 0x803F5404: cvt.s.w     $f14, $f16
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 16);
    ctx->f14.fl = CVT_S_W(ctx->f16.u32l);
    // 0x803F5408: jal         0x8027A184
    // 0x803F540C: addiu       $a2, $a2, 0x75C0
    ctx->r6 = ADD32(ctx->r6, 0X75C0);
    LOOKUP_FUNC(0x8027A184)(rdram, ctx);
        goto after_1;
    // 0x803F540C: addiu       $a2, $a2, 0x75C0
    ctx->r6 = ADD32(ctx->r6, 0X75C0);
    after_1:
    // 0x803F5410: beq         $v0, $zero, L_803F5444
    if (ctx->r2 == 0) {
        // 0x803F5414: lui         $at, 0x803F
        ctx->r1 = S32(0X803F << 16);
            goto L_803F5444;
    }
    // 0x803F5414: lui         $at, 0x803F
    ctx->r1 = S32(0X803F << 16);
    // 0x803F5418: lwc1        $f6, 0x54($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X54);
    // 0x803F541C: lwc1        $f11, 0x7D90($at)
    ctx->f_odd[(11 - 1) * 2] = MEM_W(ctx->r1, 0X7D90);
    // 0x803F5420: lwc1        $f10, 0x7D94($at)
    ctx->f10.u32l = MEM_W(ctx->r1, 0X7D94);
    // 0x803F5424: cvt.d.s     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f8.d = CVT_D_S(ctx->f6.fl);
    // 0x803F5428: add.d       $f18, $f8, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f10.d); 
    ctx->f18.d = ctx->f8.d + ctx->f10.d;
    // 0x803F542C: lw          $a0, 0x48($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X48);
    // 0x803F5430: cvt.s.d     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.d); 
    ctx->f4.fl = CVT_S_D(ctx->f18.d);
    // 0x803F5434: lw          $a3, 0x2C($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X2C);
    // 0x803F5438: mfc1        $a2, $f4
    ctx->r6 = (int32_t)ctx->f4.u32l;
    // 0x803F543C: jal         0x803F1828
    // 0x803F5440: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    ovl_803F0000_menu_func_803F1828(rdram, ctx);
        goto after_2;
    // 0x803F5440: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_2:
L_803F5444:
    // 0x803F5444: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x803F5448: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x803F544C: jr          $ra
    // 0x803F5450: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    return;
    // 0x803F5450: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
;}
RECOMP_FUNC void ovl_803F0000_menu_func_803F5454(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803F5454: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x803F5458: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x803F545C: lui         $at, 0x803F
    ctx->r1 = S32(0X803F << 16);
    // 0x803F5460: c.lt.s      $f4, $f12
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f4.fl < ctx->f12.fl;
    // 0x803F5464: nop

    // 0x803F5468: bc1f        L_803F5490
    if (!c1cs) {
        // 0x803F546C: nop
    
            goto L_803F5490;
    }
    // 0x803F546C: nop

    // 0x803F5470: lui         $at, 0x803F
    ctx->r1 = S32(0X803F << 16);
    // 0x803F5474: lwc1        $f6, 0x88($a0)
    ctx->f6.u32l = MEM_W(ctx->r4, 0X88);
    // 0x803F5478: lwc1        $f11, 0x7D98($at)
    ctx->f_odd[(11 - 1) * 2] = MEM_W(ctx->r1, 0X7D98);
    // 0x803F547C: lwc1        $f10, 0x7D9C($at)
    ctx->f10.u32l = MEM_W(ctx->r1, 0X7D9C);
    // 0x803F5480: cvt.d.s     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f8.d = CVT_D_S(ctx->f6.fl);
    // 0x803F5484: sub.d       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f10.d); 
    ctx->f16.d = ctx->f8.d - ctx->f10.d;
    // 0x803F5488: jr          $ra
    // 0x803F548C: cvt.s.d     $f0, $f16
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.d); 
    ctx->f0.fl = CVT_S_D(ctx->f16.d);
    return;
    // 0x803F548C: cvt.s.d     $f0, $f16
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.d); 
    ctx->f0.fl = CVT_S_D(ctx->f16.d);
L_803F5490:
    // 0x803F5490: lwc1        $f18, 0x88($a0)
    ctx->f18.u32l = MEM_W(ctx->r4, 0X88);
    // 0x803F5494: lwc1        $f7, 0x7DA0($at)
    ctx->f_odd[(7 - 1) * 2] = MEM_W(ctx->r1, 0X7DA0);
    // 0x803F5498: lwc1        $f6, 0x7DA4($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X7DA4);
    // 0x803F549C: cvt.d.s     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.fl); 
    ctx->f4.d = CVT_D_S(ctx->f18.fl);
    // 0x803F54A0: add.d       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f6.d); 
    ctx->f8.d = ctx->f4.d + ctx->f6.d;
    // 0x803F54A4: cvt.s.d     $f0, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.d); 
    ctx->f0.fl = CVT_S_D(ctx->f8.d);
    // 0x803F54A8: jr          $ra
    // 0x803F54AC: nop

    return;
    // 0x803F54AC: nop

;}
RECOMP_FUNC void ovl_803F0000_menu_func_803F54B0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803F54B0: lw          $v0, 0xC8($a0)
    ctx->r2 = MEM_W(ctx->r4, 0XC8);
    // 0x803F54B4: nop

    // 0x803F54B8: lw          $at, 0x938($v0)
    ctx->r1 = MEM_W(ctx->r2, 0X938);
    // 0x803F54BC: lw          $t8, 0x93C($v0)
    ctx->r24 = MEM_W(ctx->r2, 0X93C);
    // 0x803F54C0: sw          $at, 0x948($v0)
    MEM_W(0X948, ctx->r2) = ctx->r1;
    // 0x803F54C4: sw          $t8, 0x94C($v0)
    MEM_W(0X94C, ctx->r2) = ctx->r24;
    // 0x803F54C8: lw          $t8, 0x944($v0)
    ctx->r24 = MEM_W(ctx->r2, 0X944);
    // 0x803F54CC: lw          $at, 0x940($v0)
    ctx->r1 = MEM_W(ctx->r2, 0X940);
    // 0x803F54D0: sw          $t8, 0x954($v0)
    MEM_W(0X954, ctx->r2) = ctx->r24;
    // 0x803F54D4: jr          $ra
    // 0x803F54D8: sw          $at, 0x950($v0)
    MEM_W(0X950, ctx->r2) = ctx->r1;
    return;
    // 0x803F54D8: sw          $at, 0x950($v0)
    MEM_W(0X950, ctx->r2) = ctx->r1;
;}
RECOMP_FUNC void ovl_803F0000_menu_func_803F54DC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803F54DC: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x803F54E0: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x803F54E4: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x803F54E8: lhu         $t6, 0x16($a0)
    ctx->r14 = MEM_HU(ctx->r4, 0X16);
    // 0x803F54EC: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x803F54F0: andi        $t7, $t6, 0x40
    ctx->r15 = ctx->r14 & 0X40;
    // 0x803F54F4: bne         $t7, $zero, L_803F5510
    if (ctx->r15 != 0) {
        // 0x803F54F8: nop
    
            goto L_803F5510;
    }
    // 0x803F54F8: nop

    // 0x803F54FC: lw          $a0, 0xC8($a0)
    ctx->r4 = MEM_W(ctx->r4, 0XC8);
    // 0x803F5500: lui         $t0, 0x803F
    ctx->r8 = S32(0X803F << 16);
    // 0x803F5504: addiu       $t8, $a0, 0x948
    ctx->r24 = ADD32(ctx->r4, 0X948);
    // 0x803F5508: bne         $a1, $t8, L_803F5518
    if (ctx->r5 != ctx->r24) {
        // 0x803F550C: nop
    
            goto L_803F5518;
    }
    // 0x803F550C: nop

L_803F5510:
    // 0x803F5510: b           L_803F5804
    // 0x803F5514: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_803F5804;
    // 0x803F5514: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_803F5518:
    // 0x803F5518: lbu         $t9, 0x8AC($a0)
    ctx->r25 = MEM_BU(ctx->r4, 0X8AC);
    // 0x803F551C: lhu         $t1, 0x2C($s0)
    ctx->r9 = MEM_HU(ctx->r16, 0X2C);
    // 0x803F5520: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x803F5524: lbu         $t0, 0x75D0($t0)
    ctx->r8 = MEM_BU(ctx->r8, 0X75D0);
    // 0x803F5528: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x803F552C: and         $t2, $t0, $t1
    ctx->r10 = ctx->r8 & ctx->r9;
    // 0x803F5530: bne         $t2, $zero, L_803F5540
    if (ctx->r10 != 0) {
        // 0x803F5534: nop
    
            goto L_803F5540;
    }
    // 0x803F5534: nop

    // 0x803F5538: b           L_803F5804
    // 0x803F553C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_803F5804;
    // 0x803F553C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_803F5540:
    // 0x803F5540: jal         0x803F4EFC
    // 0x803F5544: addiu       $a1, $sp, 0x34
    ctx->r5 = ADD32(ctx->r29, 0X34);
    ovl_803F0000_menu_func_803F4EFC(rdram, ctx);
        goto after_0;
    // 0x803F5544: addiu       $a1, $sp, 0x34
    ctx->r5 = ADD32(ctx->r29, 0X34);
    after_0:
    // 0x803F5548: lw          $a0, 0xC8($s0)
    ctx->r4 = MEM_W(ctx->r16, 0XC8);
    // 0x803F554C: or          $a3, $v0, $zero
    ctx->r7 = ctx->r2 | 0;
    // 0x803F5550: lw          $v1, 0x24($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X24);
    // 0x803F5554: lh          $a1, 0x8B0($a0)
    ctx->r5 = MEM_H(ctx->r4, 0X8B0);
    // 0x803F5558: lhu         $t3, 0x318($v1)
    ctx->r11 = MEM_HU(ctx->r3, 0X318);
    // 0x803F555C: lw          $t5, 0x18($v1)
    ctx->r13 = MEM_W(ctx->r3, 0X18);
    // 0x803F5560: sll         $t4, $t3, 5
    ctx->r12 = S32(ctx->r11 << 5);
    // 0x803F5564: subu        $t4, $t4, $t3
    ctx->r12 = SUB32(ctx->r12, ctx->r11);
    // 0x803F5568: sll         $t4, $t4, 3
    ctx->r12 = S32(ctx->r12 << 3);
    // 0x803F556C: bgez        $a1, L_803F55F0
    if (SIGNED(ctx->r5) >= 0) {
        // 0x803F5570: addu        $a2, $t4, $t5
        ctx->r6 = ADD32(ctx->r12, ctx->r13);
            goto L_803F55F0;
    }
    // 0x803F5570: addu        $a2, $t4, $t5
    ctx->r6 = ADD32(ctx->r12, ctx->r13);
    // 0x803F5574: beq         $v0, $zero, L_803F55A0
    if (ctx->r2 == 0) {
        // 0x803F5578: or          $v1, $zero, $zero
        ctx->r3 = 0 | 0;
            goto L_803F55A0;
    }
    // 0x803F5578: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x803F557C: lui         $at, 0x4248
    ctx->r1 = S32(0X4248 << 16);
    // 0x803F5580: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x803F5584: lwc1        $f4, 0x84($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X84);
    // 0x803F5588: nop

    // 0x803F558C: c.lt.s      $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f4.fl < ctx->f6.fl;
    // 0x803F5590: nop

    // 0x803F5594: bc1f        L_803F55A4
    if (!c1cs) {
        // 0x803F5598: lui         $at, 0x41A0
        ctx->r1 = S32(0X41A0 << 16);
            goto L_803F55A4;
    }
    // 0x803F5598: lui         $at, 0x41A0
    ctx->r1 = S32(0X41A0 << 16);
    // 0x803F559C: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
L_803F55A0:
    // 0x803F55A0: lui         $at, 0x41A0
    ctx->r1 = S32(0X41A0 << 16);
L_803F55A4:
    // 0x803F55A4: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x803F55A8: lwc1        $f8, 0x84($a2)
    ctx->f8.u32l = MEM_W(ctx->r6, 0X84);
    // 0x803F55AC: nop

    // 0x803F55B0: c.lt.s      $f8, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f8.fl < ctx->f10.fl;
    // 0x803F55B4: nop

    // 0x803F55B8: bc1t        L_803F55C8
    if (c1cs) {
        // 0x803F55BC: nop
    
            goto L_803F55C8;
    }
    // 0x803F55BC: nop

    // 0x803F55C0: beq         $v1, $zero, L_803F55E8
    if (ctx->r3 == 0) {
        // 0x803F55C4: nop
    
            goto L_803F55E8;
    }
    // 0x803F55C4: nop

L_803F55C8:
    // 0x803F55C8: jal         0x803F2A40
    // 0x803F55CC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_803F0000_menu_func_803F2A40(rdram, ctx);
        goto after_1;
    // 0x803F55CC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
    // 0x803F55D0: beq         $v0, $zero, L_803F55E8
    if (ctx->r2 == 0) {
        // 0x803F55D4: nop
    
            goto L_803F55E8;
    }
    // 0x803F55D4: nop

    // 0x803F55D8: jal         0x803F54B0
    // 0x803F55DC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_803F0000_menu_func_803F54B0(rdram, ctx);
        goto after_2;
    // 0x803F55DC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_2:
    // 0x803F55E0: b           L_803F5804
    // 0x803F55E4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_803F5804;
    // 0x803F55E4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_803F55E8:
    // 0x803F55E8: b           L_803F5804
    // 0x803F55EC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_803F5804;
    // 0x803F55EC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_803F55F0:
    // 0x803F55F0: beq         $v0, $zero, L_803F5800
    if (ctx->r2 == 0) {
        // 0x803F55F4: lui         $at, 0x4234
        ctx->r1 = S32(0X4234 << 16);
            goto L_803F5800;
    }
    // 0x803F55F4: lui         $at, 0x4234
    ctx->r1 = S32(0X4234 << 16);
    // 0x803F55F8: lwc1        $f16, 0x84($v0)
    ctx->f16.u32l = MEM_W(ctx->r2, 0X84);
    // 0x803F55FC: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x803F5600: nop

    // 0x803F5604: c.lt.s      $f16, $f18
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f16.fl < ctx->f18.fl;
    // 0x803F5608: nop

    // 0x803F560C: bc1f        L_803F5804
    if (!c1cs) {
        // 0x803F5610: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_803F5804;
    }
    // 0x803F5610: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x803F5614: lhu         $t6, 0x95C($a0)
    ctx->r14 = MEM_HU(ctx->r4, 0X95C);
    // 0x803F5618: slti        $at, $a1, 0x131
    ctx->r1 = SIGNED(ctx->r5) < 0X131 ? 1 : 0;
    // 0x803F561C: andi        $t7, $t6, 0x100
    ctx->r15 = ctx->r14 & 0X100;
    // 0x803F5620: beq         $t7, $zero, L_803F56A4
    if (ctx->r15 == 0) {
        // 0x803F5624: nop
    
            goto L_803F56A4;
    }
    // 0x803F5624: nop

    // 0x803F5628: bne         $at, $zero, L_803F56A4
    if (ctx->r1 != 0) {
        // 0x803F562C: nop
    
            goto L_803F56A4;
    }
    // 0x803F562C: nop

    // 0x803F5630: lw          $a1, 0x34($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X34);
    // 0x803F5634: jal         0x803F5454
    // 0x803F5638: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
    ovl_803F0000_menu_func_803F5454(rdram, ctx);
        goto after_3;
    // 0x803F5638: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
    after_3:
    // 0x803F563C: swc1        $f0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f0.u32l;
    // 0x803F5640: jal         0x80059898
    // 0x803F5644: addiu       $a0, $zero, 0x14
    ctx->r4 = ADD32(0, 0X14);
    func_80059898(rdram, ctx);
        goto after_4;
    // 0x803F5644: addiu       $a0, $zero, 0x14
    ctx->r4 = ADD32(0, 0X14);
    after_4:
    // 0x803F5648: addiu       $t8, $v0, 0x14
    ctx->r24 = ADD32(ctx->r2, 0X14);
    // 0x803F564C: mtc1        $t8, $f4
    ctx->f4.u32l = ctx->r24;
    // 0x803F5650: lw          $a1, 0xC8($s0)
    ctx->r5 = MEM_W(ctx->r16, 0XC8);
    // 0x803F5654: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x803F5658: cvt.s.w     $f4, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    ctx->f4.fl = CVT_S_W(ctx->f4.u32l);
    // 0x803F565C: bgez        $t8, L_803F5674
    if (SIGNED(ctx->r24) >= 0) {
        // 0x803F5660: addiu       $a1, $a1, 0x948
        ctx->r5 = ADD32(ctx->r5, 0X948);
            goto L_803F5674;
    }
    // 0x803F5660: addiu       $a1, $a1, 0x948
    ctx->r5 = ADD32(ctx->r5, 0X948);
    // 0x803F5664: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x803F5668: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x803F566C: nop

    // 0x803F5670: add.s       $f4, $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f4.fl = ctx->f4.fl + ctx->f6.fl;
L_803F5674:
    // 0x803F5674: mfc1        $a2, $f4
    ctx->r6 = (int32_t)ctx->f4.u32l;
    // 0x803F5678: lw          $a3, 0x30($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X30);
    // 0x803F567C: jal         0x803F50B4
    // 0x803F5680: nop

    ovl_803F0000_menu_func_803F50B4(rdram, ctx);
        goto after_5;
    // 0x803F5680: nop

    after_5:
    // 0x803F5684: lw          $t0, 0xC8($s0)
    ctx->r8 = MEM_W(ctx->r16, 0XC8);
    // 0x803F5688: addiu       $t9, $zero, 0x3
    ctx->r25 = ADD32(0, 0X3);
    // 0x803F568C: sh          $t9, 0x948($t0)
    MEM_H(0X948, ctx->r8) = ctx->r25;
    // 0x803F5690: lw          $t1, 0xC8($s0)
    ctx->r9 = MEM_W(ctx->r16, 0XC8);
    // 0x803F5694: lwc1        $f8, 0x5C($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X5C);
    // 0x803F5698: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x803F569C: b           L_803F5804
    // 0x803F56A0: swc1        $f8, 0x950($t1)
    MEM_W(0X950, ctx->r9) = ctx->f8.u32l;
        goto L_803F5804;
    // 0x803F56A0: swc1        $f8, 0x950($t1)
    MEM_W(0X950, ctx->r9) = ctx->f8.u32l;
L_803F56A4:
    // 0x803F56A4: blez        $a1, L_803F57C4
    if (SIGNED(ctx->r5) <= 0) {
        // 0x803F56A8: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_803F57C4;
    }
    // 0x803F56A8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x803F56AC: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x803F56B0: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x803F56B4: jal         0x803F1914
    // 0x803F56B8: sw          $a3, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r7;
    ovl_803F0000_menu_func_803F1914(rdram, ctx);
        goto after_6;
    // 0x803F56B8: sw          $a3, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r7;
    after_6:
    // 0x803F56BC: lw          $a3, 0x3C($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X3C);
    // 0x803F56C0: beq         $v0, $zero, L_803F57C4
    if (ctx->r2 == 0) {
        // 0x803F56C4: lui         $at, 0x803F
        ctx->r1 = S32(0X803F << 16);
            goto L_803F57C4;
    }
    // 0x803F56C4: lui         $at, 0x803F
    ctx->r1 = S32(0X803F << 16);
    // 0x803F56C8: lwc1        $f10, 0x7DA8($at)
    ctx->f10.u32l = MEM_W(ctx->r1, 0X7DA8);
    // 0x803F56CC: lw          $t2, 0xC8($s0)
    ctx->r10 = MEM_W(ctx->r16, 0XC8);
    // 0x803F56D0: lui         $t3, 0x8009
    ctx->r11 = S32(0X8009 << 16);
    // 0x803F56D4: swc1        $f10, 0x950($t2)
    MEM_W(0X950, ctx->r10) = ctx->f10.u32l;
    // 0x803F56D8: lw          $t3, 0x3B20($t3)
    ctx->r11 = MEM_W(ctx->r11, 0X3B20);
    // 0x803F56DC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x803F56E0: lw          $t4, 0x84($t3)
    ctx->r12 = MEM_W(ctx->r11, 0X84);
    // 0x803F56E4: addiu       $a1, $zero, 0x40
    ctx->r5 = ADD32(0, 0X40);
    // 0x803F56E8: bne         $s0, $t4, L_803F5754
    if (ctx->r16 != ctx->r12) {
        // 0x803F56EC: addiu       $a2, $zero, 0x1
        ctx->r6 = ADD32(0, 0X1);
            goto L_803F5754;
    }
    // 0x803F56EC: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x803F56F0: jal         0x803F1914
    // 0x803F56F4: sw          $a3, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r7;
    ovl_803F0000_menu_func_803F1914(rdram, ctx);
        goto after_7;
    // 0x803F56F4: sw          $a3, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r7;
    after_7:
    // 0x803F56F8: lw          $a3, 0x3C($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X3C);
    // 0x803F56FC: beq         $v0, $zero, L_803F5758
    if (ctx->r2 == 0) {
        // 0x803F5700: lw          $a1, 0x34($sp)
        ctx->r5 = MEM_W(ctx->r29, 0X34);
            goto L_803F5758;
    }
    // 0x803F5700: lw          $a1, 0x34($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X34);
    // 0x803F5704: lhu         $t5, 0x14($s0)
    ctx->r13 = MEM_HU(ctx->r16, 0X14);
    // 0x803F5708: lui         $t7, 0x8012
    ctx->r15 = S32(0X8012 << 16);
    // 0x803F570C: andi        $t6, $t5, 0x80
    ctx->r14 = ctx->r13 & 0X80;
    // 0x803F5710: bne         $t6, $zero, L_803F5758
    if (ctx->r14 != 0) {
        // 0x803F5714: lw          $a1, 0x34($sp)
        ctx->r5 = MEM_W(ctx->r29, 0X34);
            goto L_803F5758;
    }
    // 0x803F5714: lw          $a1, 0x34($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X34);
    // 0x803F5718: lw          $t7, 0x9C4($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X9C4);
    // 0x803F571C: nop

    // 0x803F5720: sltiu       $at, $t7, 0xB
    ctx->r1 = ctx->r15 < 0XB ? 1 : 0;
    // 0x803F5724: bne         $at, $zero, L_803F5758
    if (ctx->r1 != 0) {
        // 0x803F5728: lw          $a1, 0x34($sp)
        ctx->r5 = MEM_W(ctx->r29, 0X34);
            goto L_803F5758;
    }
    // 0x803F5728: lw          $a1, 0x34($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X34);
    // 0x803F572C: jal         0x803F54B0
    // 0x803F5730: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_803F0000_menu_func_803F54B0(rdram, ctx);
        goto after_8;
    // 0x803F5730: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_8:
    // 0x803F5734: lw          $t9, 0xC8($s0)
    ctx->r25 = MEM_W(ctx->r16, 0XC8);
    // 0x803F5738: addiu       $t8, $zero, 0x9
    ctx->r24 = ADD32(0, 0X9);
    // 0x803F573C: sh          $t8, 0x948($t9)
    MEM_H(0X948, ctx->r25) = ctx->r24;
    // 0x803F5740: lw          $t1, 0xC8($s0)
    ctx->r9 = MEM_W(ctx->r16, 0XC8);
    // 0x803F5744: addiu       $t0, $zero, 0x5
    ctx->r8 = ADD32(0, 0X5);
    // 0x803F5748: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x803F574C: b           L_803F5804
    // 0x803F5750: sh          $t0, 0x94A($t1)
    MEM_H(0X94A, ctx->r9) = ctx->r8;
        goto L_803F5804;
    // 0x803F5750: sh          $t0, 0x94A($t1)
    MEM_H(0X94A, ctx->r9) = ctx->r8;
L_803F5754:
    // 0x803F5754: lw          $a1, 0x34($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X34);
L_803F5758:
    // 0x803F5758: jal         0x803F5454
    // 0x803F575C: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
    ovl_803F0000_menu_func_803F5454(rdram, ctx);
        goto after_9;
    // 0x803F575C: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
    after_9:
    // 0x803F5760: swc1        $f0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f0.u32l;
    // 0x803F5764: jal         0x80059898
    // 0x803F5768: addiu       $a0, $zero, 0xA
    ctx->r4 = ADD32(0, 0XA);
    func_80059898(rdram, ctx);
        goto after_10;
    // 0x803F5768: addiu       $a0, $zero, 0xA
    ctx->r4 = ADD32(0, 0XA);
    after_10:
    // 0x803F576C: addiu       $t2, $v0, 0xF
    ctx->r10 = ADD32(ctx->r2, 0XF);
    // 0x803F5770: mtc1        $t2, $f16
    ctx->f16.u32l = ctx->r10;
    // 0x803F5774: lw          $a1, 0xC8($s0)
    ctx->r5 = MEM_W(ctx->r16, 0XC8);
    // 0x803F5778: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x803F577C: cvt.s.w     $f16, $f16
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    ctx->f16.fl = CVT_S_W(ctx->f16.u32l);
    // 0x803F5780: bgez        $t2, L_803F5798
    if (SIGNED(ctx->r10) >= 0) {
        // 0x803F5784: addiu       $a1, $a1, 0x948
        ctx->r5 = ADD32(ctx->r5, 0X948);
            goto L_803F5798;
    }
    // 0x803F5784: addiu       $a1, $a1, 0x948
    ctx->r5 = ADD32(ctx->r5, 0X948);
    // 0x803F5788: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x803F578C: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x803F5790: nop

    // 0x803F5794: add.s       $f16, $f16, $f18
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f16.fl = ctx->f16.fl + ctx->f18.fl;
L_803F5798:
    // 0x803F5798: mfc1        $a2, $f16
    ctx->r6 = (int32_t)ctx->f16.u32l;
    // 0x803F579C: lw          $a3, 0x30($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X30);
    // 0x803F57A0: jal         0x803F50B4
    // 0x803F57A4: nop

    ovl_803F0000_menu_func_803F50B4(rdram, ctx);
        goto after_11;
    // 0x803F57A4: nop

    after_11:
    // 0x803F57A8: lw          $t4, 0xC8($s0)
    ctx->r12 = MEM_W(ctx->r16, 0XC8);
    // 0x803F57AC: addiu       $t3, $zero, 0x8
    ctx->r11 = ADD32(0, 0X8);
    // 0x803F57B0: sh          $t3, 0x948($t4)
    MEM_H(0X948, ctx->r12) = ctx->r11;
    // 0x803F57B4: lw          $t5, 0xC8($s0)
    ctx->r13 = MEM_W(ctx->r16, 0XC8);
    // 0x803F57B8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x803F57BC: b           L_803F5804
    // 0x803F57C0: sh          $zero, 0x94A($t5)
    MEM_H(0X94A, ctx->r13) = 0;
        goto L_803F5804;
    // 0x803F57C0: sh          $zero, 0x94A($t5)
    MEM_H(0X94A, ctx->r13) = 0;
L_803F57C4:
    // 0x803F57C4: lw          $t6, 0xC8($s0)
    ctx->r14 = MEM_W(ctx->r16, 0XC8);
    // 0x803F57C8: nop

    // 0x803F57CC: lhu         $t7, 0x95C($t6)
    ctx->r15 = MEM_HU(ctx->r14, 0X95C);
    // 0x803F57D0: nop

    // 0x803F57D4: andi        $t8, $t7, 0x4000
    ctx->r24 = ctx->r15 & 0X4000;
    // 0x803F57D8: bne         $t8, $zero, L_803F5804
    if (ctx->r24 != 0) {
        // 0x803F57DC: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_803F5804;
    }
    // 0x803F57DC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x803F57E0: jal         0x803F2A40
    // 0x803F57E4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_803F0000_menu_func_803F2A40(rdram, ctx);
        goto after_12;
    // 0x803F57E4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_12:
    // 0x803F57E8: beq         $v0, $zero, L_803F5804
    if (ctx->r2 == 0) {
        // 0x803F57EC: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_803F5804;
    }
    // 0x803F57EC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x803F57F0: jal         0x803F54B0
    // 0x803F57F4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_803F0000_menu_func_803F54B0(rdram, ctx);
        goto after_13;
    // 0x803F57F4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_13:
    // 0x803F57F8: b           L_803F5804
    // 0x803F57FC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_803F5804;
    // 0x803F57FC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_803F5800:
    // 0x803F5800: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_803F5804:
    // 0x803F5804: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x803F5808: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x803F580C: jr          $ra
    // 0x803F5810: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    return;
    // 0x803F5810: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
RECOMP_FUNC void ovl_803F0000_menu_func_803F558C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803F558C: c.lt.s      $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f4.fl < ctx->f6.fl;
    // 0x803F5590: nop

    // 0x803F5594: bc1f        L_803F55A4
    if (!c1cs) {
        // 0x803F5598: lui         $at, 0x41A0
        ctx->r1 = S32(0X41A0 << 16);
            goto L_803F55A4;
    }
    // 0x803F5598: lui         $at, 0x41A0
    ctx->r1 = S32(0X41A0 << 16);
    // 0x803F559C: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x803F55A0: lui         $at, 0x41A0
    ctx->r1 = S32(0X41A0 << 16);
L_803F55A4:
    // 0x803F55A4: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x803F55A8: lwc1        $f8, 0x84($a2)
    ctx->f8.u32l = MEM_W(ctx->r6, 0X84);
    // 0x803F55AC: nop

    // 0x803F55B0: c.lt.s      $f8, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f8.fl < ctx->f10.fl;
    // 0x803F55B4: nop

    // 0x803F55B8: bc1t        L_803F55C8
    if (c1cs) {
        // 0x803F55BC: nop
    
            goto L_803F55C8;
    }
    // 0x803F55BC: nop

    // 0x803F55C0: beq         $v1, $zero, L_803F55E8
    if (ctx->r3 == 0) {
        // 0x803F55C4: nop
    
            goto L_803F55E8;
    }
    // 0x803F55C4: nop

L_803F55C8:
    // 0x803F55C8: jal         0x803F2A40
    // 0x803F55CC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_803F0000_menu_func_803F2A40(rdram, ctx);
        goto after_0;
    // 0x803F55CC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_0:
    // 0x803F55D0: beq         $v0, $zero, L_803F55E8
    if (ctx->r2 == 0) {
        // 0x803F55D4: nop
    
            goto L_803F55E8;
    }
    // 0x803F55D4: nop

    // 0x803F55D8: jal         0x803F54B0
    // 0x803F55DC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_803F0000_menu_func_803F54B0(rdram, ctx);
        goto after_1;
    // 0x803F55DC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
    // 0x803F55E0: b           L_803F5804
    // 0x803F55E4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_803F5804;
    // 0x803F55E4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_803F55E8:
    // 0x803F55E8: b           L_803F5804
    // 0x803F55EC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_803F5804;
    // 0x803F55EC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x803F55F0: beq         $v0, $zero, L_803F5800
    if (ctx->r2 == 0) {
        // 0x803F55F4: lui         $at, 0x4234
        ctx->r1 = S32(0X4234 << 16);
            goto L_803F5800;
    }
    // 0x803F55F4: lui         $at, 0x4234
    ctx->r1 = S32(0X4234 << 16);
    // 0x803F55F8: lwc1        $f16, 0x84($v0)
    ctx->f16.u32l = MEM_W(ctx->r2, 0X84);
    // 0x803F55FC: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x803F5600: nop

    // 0x803F5604: c.lt.s      $f16, $f18
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f16.fl < ctx->f18.fl;
    // 0x803F5608: nop

    // 0x803F560C: bc1f        L_803F5804
    if (!c1cs) {
        // 0x803F5610: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_803F5804;
    }
    // 0x803F5610: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x803F5614: lhu         $t6, 0x95C($a0)
    ctx->r14 = MEM_HU(ctx->r4, 0X95C);
    // 0x803F5618: slti        $at, $a1, 0x131
    ctx->r1 = SIGNED(ctx->r5) < 0X131 ? 1 : 0;
    // 0x803F561C: andi        $t7, $t6, 0x100
    ctx->r15 = ctx->r14 & 0X100;
    // 0x803F5620: beq         $t7, $zero, L_803F56A4
    if (ctx->r15 == 0) {
        // 0x803F5624: nop
    
            goto L_803F56A4;
    }
    // 0x803F5624: nop

    // 0x803F5628: bne         $at, $zero, L_803F56A4
    if (ctx->r1 != 0) {
        // 0x803F562C: nop
    
            goto L_803F56A4;
    }
    // 0x803F562C: nop

    // 0x803F5630: lw          $a1, 0x34($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X34);
    // 0x803F5634: jal         0x803F5454
    // 0x803F5638: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
    ovl_803F0000_menu_func_803F5454(rdram, ctx);
        goto after_2;
    // 0x803F5638: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
    after_2:
    // 0x803F563C: swc1        $f0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f0.u32l;
    // 0x803F5640: jal         0x80059898
    // 0x803F5644: addiu       $a0, $zero, 0x14
    ctx->r4 = ADD32(0, 0X14);
    func_80059898(rdram, ctx);
        goto after_3;
    // 0x803F5644: addiu       $a0, $zero, 0x14
    ctx->r4 = ADD32(0, 0X14);
    after_3:
    // 0x803F5648: addiu       $t8, $v0, 0x14
    ctx->r24 = ADD32(ctx->r2, 0X14);
    // 0x803F564C: mtc1        $t8, $f4
    ctx->f4.u32l = ctx->r24;
    // 0x803F5650: lw          $a1, 0xC8($s0)
    ctx->r5 = MEM_W(ctx->r16, 0XC8);
    // 0x803F5654: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x803F5658: cvt.s.w     $f4, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    ctx->f4.fl = CVT_S_W(ctx->f4.u32l);
    // 0x803F565C: bgez        $t8, L_803F5674
    if (SIGNED(ctx->r24) >= 0) {
        // 0x803F5660: addiu       $a1, $a1, 0x948
        ctx->r5 = ADD32(ctx->r5, 0X948);
            goto L_803F5674;
    }
    // 0x803F5660: addiu       $a1, $a1, 0x948
    ctx->r5 = ADD32(ctx->r5, 0X948);
    // 0x803F5664: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x803F5668: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x803F566C: nop

    // 0x803F5670: add.s       $f4, $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f4.fl = ctx->f4.fl + ctx->f6.fl;
L_803F5674:
    // 0x803F5674: mfc1        $a2, $f4
    ctx->r6 = (int32_t)ctx->f4.u32l;
    // 0x803F5678: lw          $a3, 0x30($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X30);
    // 0x803F567C: jal         0x803F50B4
    // 0x803F5680: nop

    ovl_803F0000_menu_func_803F50B4(rdram, ctx);
        goto after_4;
    // 0x803F5680: nop

    after_4:
    // 0x803F5684: lw          $t0, 0xC8($s0)
    ctx->r8 = MEM_W(ctx->r16, 0XC8);
    // 0x803F5688: addiu       $t9, $zero, 0x3
    ctx->r25 = ADD32(0, 0X3);
    // 0x803F568C: sh          $t9, 0x948($t0)
    MEM_H(0X948, ctx->r8) = ctx->r25;
    // 0x803F5690: lw          $t1, 0xC8($s0)
    ctx->r9 = MEM_W(ctx->r16, 0XC8);
    // 0x803F5694: lwc1        $f8, 0x5C($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X5C);
    // 0x803F5698: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x803F569C: b           L_803F5804
    // 0x803F56A0: swc1        $f8, 0x950($t1)
    MEM_W(0X950, ctx->r9) = ctx->f8.u32l;
        goto L_803F5804;
    // 0x803F56A0: swc1        $f8, 0x950($t1)
    MEM_W(0X950, ctx->r9) = ctx->f8.u32l;
L_803F56A4:
    // 0x803F56A4: blez        $a1, L_803F57C4
    if (SIGNED(ctx->r5) <= 0) {
        // 0x803F56A8: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_803F57C4;
    }
    // 0x803F56A8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x803F56AC: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x803F56B0: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x803F56B4: jal         0x803F1914
    // 0x803F56B8: sw          $a3, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r7;
    ovl_803F0000_menu_func_803F1914(rdram, ctx);
        goto after_5;
    // 0x803F56B8: sw          $a3, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r7;
    after_5:
    // 0x803F56BC: lw          $a3, 0x3C($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X3C);
    // 0x803F56C0: beq         $v0, $zero, L_803F57C4
    if (ctx->r2 == 0) {
        // 0x803F56C4: lui         $at, 0x803F
        ctx->r1 = S32(0X803F << 16);
            goto L_803F57C4;
    }
    // 0x803F56C4: lui         $at, 0x803F
    ctx->r1 = S32(0X803F << 16);
    // 0x803F56C8: lwc1        $f10, 0x7DA8($at)
    ctx->f10.u32l = MEM_W(ctx->r1, 0X7DA8);
    // 0x803F56CC: lw          $t2, 0xC8($s0)
    ctx->r10 = MEM_W(ctx->r16, 0XC8);
    // 0x803F56D0: lui         $t3, 0x8009
    ctx->r11 = S32(0X8009 << 16);
    // 0x803F56D4: swc1        $f10, 0x950($t2)
    MEM_W(0X950, ctx->r10) = ctx->f10.u32l;
    // 0x803F56D8: lw          $t3, 0x3B20($t3)
    ctx->r11 = MEM_W(ctx->r11, 0X3B20);
    // 0x803F56DC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x803F56E0: lw          $t4, 0x84($t3)
    ctx->r12 = MEM_W(ctx->r11, 0X84);
    // 0x803F56E4: addiu       $a1, $zero, 0x40
    ctx->r5 = ADD32(0, 0X40);
    // 0x803F56E8: bne         $s0, $t4, L_803F5754
    if (ctx->r16 != ctx->r12) {
        // 0x803F56EC: addiu       $a2, $zero, 0x1
        ctx->r6 = ADD32(0, 0X1);
            goto L_803F5754;
    }
    // 0x803F56EC: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x803F56F0: jal         0x803F1914
    // 0x803F56F4: sw          $a3, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r7;
    ovl_803F0000_menu_func_803F1914(rdram, ctx);
        goto after_6;
    // 0x803F56F4: sw          $a3, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r7;
    after_6:
    // 0x803F56F8: lw          $a3, 0x3C($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X3C);
    // 0x803F56FC: beq         $v0, $zero, L_803F5758
    if (ctx->r2 == 0) {
        // 0x803F5700: lw          $a1, 0x34($sp)
        ctx->r5 = MEM_W(ctx->r29, 0X34);
            goto L_803F5758;
    }
    // 0x803F5700: lw          $a1, 0x34($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X34);
    // 0x803F5704: lhu         $t5, 0x14($s0)
    ctx->r13 = MEM_HU(ctx->r16, 0X14);
    // 0x803F5708: lui         $t7, 0x8012
    ctx->r15 = S32(0X8012 << 16);
    // 0x803F570C: andi        $t6, $t5, 0x80
    ctx->r14 = ctx->r13 & 0X80;
    // 0x803F5710: bne         $t6, $zero, L_803F5758
    if (ctx->r14 != 0) {
        // 0x803F5714: lw          $a1, 0x34($sp)
        ctx->r5 = MEM_W(ctx->r29, 0X34);
            goto L_803F5758;
    }
    // 0x803F5714: lw          $a1, 0x34($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X34);
    // 0x803F5718: lw          $t7, 0x9C4($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X9C4);
    // 0x803F571C: nop

    // 0x803F5720: sltiu       $at, $t7, 0xB
    ctx->r1 = ctx->r15 < 0XB ? 1 : 0;
    // 0x803F5724: bne         $at, $zero, L_803F5758
    if (ctx->r1 != 0) {
        // 0x803F5728: lw          $a1, 0x34($sp)
        ctx->r5 = MEM_W(ctx->r29, 0X34);
            goto L_803F5758;
    }
    // 0x803F5728: lw          $a1, 0x34($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X34);
    // 0x803F572C: jal         0x803F54B0
    // 0x803F5730: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_803F0000_menu_func_803F54B0(rdram, ctx);
        goto after_7;
    // 0x803F5730: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_7:
    // 0x803F5734: lw          $t9, 0xC8($s0)
    ctx->r25 = MEM_W(ctx->r16, 0XC8);
    // 0x803F5738: addiu       $t8, $zero, 0x9
    ctx->r24 = ADD32(0, 0X9);
    // 0x803F573C: sh          $t8, 0x948($t9)
    MEM_H(0X948, ctx->r25) = ctx->r24;
    // 0x803F5740: lw          $t1, 0xC8($s0)
    ctx->r9 = MEM_W(ctx->r16, 0XC8);
    // 0x803F5744: addiu       $t0, $zero, 0x5
    ctx->r8 = ADD32(0, 0X5);
    // 0x803F5748: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x803F574C: b           L_803F5804
    // 0x803F5750: sh          $t0, 0x94A($t1)
    MEM_H(0X94A, ctx->r9) = ctx->r8;
        goto L_803F5804;
    // 0x803F5750: sh          $t0, 0x94A($t1)
    MEM_H(0X94A, ctx->r9) = ctx->r8;
L_803F5754:
    // 0x803F5754: lw          $a1, 0x34($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X34);
L_803F5758:
    // 0x803F5758: jal         0x803F5454
    // 0x803F575C: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
    ovl_803F0000_menu_func_803F5454(rdram, ctx);
        goto after_8;
    // 0x803F575C: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
    after_8:
    // 0x803F5760: swc1        $f0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f0.u32l;
    // 0x803F5764: jal         0x80059898
    // 0x803F5768: addiu       $a0, $zero, 0xA
    ctx->r4 = ADD32(0, 0XA);
    func_80059898(rdram, ctx);
        goto after_9;
    // 0x803F5768: addiu       $a0, $zero, 0xA
    ctx->r4 = ADD32(0, 0XA);
    after_9:
    // 0x803F576C: addiu       $t2, $v0, 0xF
    ctx->r10 = ADD32(ctx->r2, 0XF);
    // 0x803F5770: mtc1        $t2, $f16
    ctx->f16.u32l = ctx->r10;
    // 0x803F5774: lw          $a1, 0xC8($s0)
    ctx->r5 = MEM_W(ctx->r16, 0XC8);
    // 0x803F5778: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x803F577C: cvt.s.w     $f16, $f16
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    ctx->f16.fl = CVT_S_W(ctx->f16.u32l);
    // 0x803F5780: bgez        $t2, L_803F5798
    if (SIGNED(ctx->r10) >= 0) {
        // 0x803F5784: addiu       $a1, $a1, 0x948
        ctx->r5 = ADD32(ctx->r5, 0X948);
            goto L_803F5798;
    }
    // 0x803F5784: addiu       $a1, $a1, 0x948
    ctx->r5 = ADD32(ctx->r5, 0X948);
    // 0x803F5788: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x803F578C: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x803F5790: nop

    // 0x803F5794: add.s       $f16, $f16, $f18
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f16.fl = ctx->f16.fl + ctx->f18.fl;
L_803F5798:
    // 0x803F5798: mfc1        $a2, $f16
    ctx->r6 = (int32_t)ctx->f16.u32l;
    // 0x803F579C: lw          $a3, 0x30($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X30);
    // 0x803F57A0: jal         0x803F50B4
    // 0x803F57A4: nop

    ovl_803F0000_menu_func_803F50B4(rdram, ctx);
        goto after_10;
    // 0x803F57A4: nop

    after_10:
    // 0x803F57A8: lw          $t4, 0xC8($s0)
    ctx->r12 = MEM_W(ctx->r16, 0XC8);
    // 0x803F57AC: addiu       $t3, $zero, 0x8
    ctx->r11 = ADD32(0, 0X8);
    // 0x803F57B0: sh          $t3, 0x948($t4)
    MEM_H(0X948, ctx->r12) = ctx->r11;
    // 0x803F57B4: lw          $t5, 0xC8($s0)
    ctx->r13 = MEM_W(ctx->r16, 0XC8);
    // 0x803F57B8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x803F57BC: b           L_803F5804
    // 0x803F57C0: sh          $zero, 0x94A($t5)
    MEM_H(0X94A, ctx->r13) = 0;
        goto L_803F5804;
    // 0x803F57C0: sh          $zero, 0x94A($t5)
    MEM_H(0X94A, ctx->r13) = 0;
L_803F57C4:
    // 0x803F57C4: lw          $t6, 0xC8($s0)
    ctx->r14 = MEM_W(ctx->r16, 0XC8);
    // 0x803F57C8: nop

    // 0x803F57CC: lhu         $t7, 0x95C($t6)
    ctx->r15 = MEM_HU(ctx->r14, 0X95C);
    // 0x803F57D0: nop

    // 0x803F57D4: andi        $t8, $t7, 0x4000
    ctx->r24 = ctx->r15 & 0X4000;
    // 0x803F57D8: bne         $t8, $zero, L_803F5804
    if (ctx->r24 != 0) {
        // 0x803F57DC: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_803F5804;
    }
    // 0x803F57DC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x803F57E0: jal         0x803F2A40
    // 0x803F57E4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_803F0000_menu_func_803F2A40(rdram, ctx);
        goto after_11;
    // 0x803F57E4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_11:
    // 0x803F57E8: beq         $v0, $zero, L_803F5804
    if (ctx->r2 == 0) {
        // 0x803F57EC: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_803F5804;
    }
    // 0x803F57EC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x803F57F0: jal         0x803F54B0
    // 0x803F57F4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_803F0000_menu_func_803F54B0(rdram, ctx);
        goto after_12;
    // 0x803F57F4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_12:
    // 0x803F57F8: b           L_803F5804
    // 0x803F57FC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_803F5804;
    // 0x803F57FC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_803F5800:
    // 0x803F5800: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_803F5804:
    // 0x803F5804: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x803F5808: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x803F580C: jr          $ra
    // 0x803F5810: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    return;
    // 0x803F5810: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
RECOMP_FUNC void ovl_803F0000_menu_func_803F5734(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803F5734: lw          $t9, 0xC8($s0)
    ctx->r25 = MEM_W(ctx->r16, 0XC8);
    // 0x803F5738: addiu       $t8, $zero, 0x9
    ctx->r24 = ADD32(0, 0X9);
    // 0x803F573C: sh          $t8, 0x948($t9)
    MEM_H(0X948, ctx->r25) = ctx->r24;
    // 0x803F5740: lw          $t1, 0xC8($s0)
    ctx->r9 = MEM_W(ctx->r16, 0XC8);
    // 0x803F5744: addiu       $t0, $zero, 0x5
    ctx->r8 = ADD32(0, 0X5);
    // 0x803F5748: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x803F574C: b           L_803F5804
    // 0x803F5750: sh          $t0, 0x94A($t1)
    MEM_H(0X94A, ctx->r9) = ctx->r8;
        goto L_803F5804;
    // 0x803F5750: sh          $t0, 0x94A($t1)
    MEM_H(0X94A, ctx->r9) = ctx->r8;
    // 0x803F5754: lw          $a1, 0x34($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X34);
    // 0x803F5758: jal         0x803F5454
    // 0x803F575C: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
    ovl_803F0000_menu_func_803F5454(rdram, ctx);
        goto after_0;
    // 0x803F575C: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
    after_0:
    // 0x803F5760: swc1        $f0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f0.u32l;
    // 0x803F5764: jal         0x80059898
    // 0x803F5768: addiu       $a0, $zero, 0xA
    ctx->r4 = ADD32(0, 0XA);
    func_80059898(rdram, ctx);
        goto after_1;
    // 0x803F5768: addiu       $a0, $zero, 0xA
    ctx->r4 = ADD32(0, 0XA);
    after_1:
    // 0x803F576C: addiu       $t2, $v0, 0xF
    ctx->r10 = ADD32(ctx->r2, 0XF);
    // 0x803F5770: mtc1        $t2, $f16
    ctx->f16.u32l = ctx->r10;
    // 0x803F5774: lw          $a1, 0xC8($s0)
    ctx->r5 = MEM_W(ctx->r16, 0XC8);
    // 0x803F5778: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x803F577C: cvt.s.w     $f16, $f16
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    ctx->f16.fl = CVT_S_W(ctx->f16.u32l);
    // 0x803F5780: bgez        $t2, L_803F5798
    if (SIGNED(ctx->r10) >= 0) {
        // 0x803F5784: addiu       $a1, $a1, 0x948
        ctx->r5 = ADD32(ctx->r5, 0X948);
            goto L_803F5798;
    }
    // 0x803F5784: addiu       $a1, $a1, 0x948
    ctx->r5 = ADD32(ctx->r5, 0X948);
    // 0x803F5788: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x803F578C: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x803F5790: nop

    // 0x803F5794: add.s       $f16, $f16, $f18
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f16.fl = ctx->f16.fl + ctx->f18.fl;
L_803F5798:
    // 0x803F5798: mfc1        $a2, $f16
    ctx->r6 = (int32_t)ctx->f16.u32l;
    // 0x803F579C: lw          $a3, 0x30($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X30);
    // 0x803F57A0: jal         0x803F50B4
    // 0x803F57A4: nop

    ovl_803F0000_menu_func_803F50B4(rdram, ctx);
        goto after_2;
    // 0x803F57A4: nop

    after_2:
    // 0x803F57A8: lw          $t4, 0xC8($s0)
    ctx->r12 = MEM_W(ctx->r16, 0XC8);
    // 0x803F57AC: addiu       $t3, $zero, 0x8
    ctx->r11 = ADD32(0, 0X8);
    // 0x803F57B0: sh          $t3, 0x948($t4)
    MEM_H(0X948, ctx->r12) = ctx->r11;
    // 0x803F57B4: lw          $t5, 0xC8($s0)
    ctx->r13 = MEM_W(ctx->r16, 0XC8);
    // 0x803F57B8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x803F57BC: b           L_803F5804
    // 0x803F57C0: sh          $zero, 0x94A($t5)
    MEM_H(0X94A, ctx->r13) = 0;
        goto L_803F5804;
    // 0x803F57C0: sh          $zero, 0x94A($t5)
    MEM_H(0X94A, ctx->r13) = 0;
    // 0x803F57C4: lw          $t6, 0xC8($s0)
    ctx->r14 = MEM_W(ctx->r16, 0XC8);
    // 0x803F57C8: nop

    // 0x803F57CC: lhu         $t7, 0x95C($t6)
    ctx->r15 = MEM_HU(ctx->r14, 0X95C);
    // 0x803F57D0: nop

    // 0x803F57D4: andi        $t8, $t7, 0x4000
    ctx->r24 = ctx->r15 & 0X4000;
    // 0x803F57D8: bne         $t8, $zero, L_803F5804
    if (ctx->r24 != 0) {
        // 0x803F57DC: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_803F5804;
    }
    // 0x803F57DC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x803F57E0: jal         0x803F2A40
    // 0x803F57E4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_803F0000_menu_func_803F2A40(rdram, ctx);
        goto after_3;
    // 0x803F57E4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_3:
    // 0x803F57E8: beq         $v0, $zero, L_803F5804
    if (ctx->r2 == 0) {
        // 0x803F57EC: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_803F5804;
    }
    // 0x803F57EC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x803F57F0: jal         0x803F54B0
    // 0x803F57F4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_803F0000_menu_func_803F54B0(rdram, ctx);
        goto after_4;
    // 0x803F57F4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_4:
    // 0x803F57F8: b           L_803F5804
    // 0x803F57FC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_803F5804;
    // 0x803F57FC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x803F5800: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_803F5804:
    // 0x803F5804: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x803F5808: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x803F580C: jr          $ra
    // 0x803F5810: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    return;
    // 0x803F5810: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
RECOMP_FUNC void ovl_803F0000_menu_func_803F5814(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803F5814: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x803F5818: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x803F581C: lw          $v0, 0xC8($a0)
    ctx->r2 = MEM_W(ctx->r4, 0XC8);
    // 0x803F5820: nop

    // 0x803F5824: lhu         $t6, 0x948($v0)
    ctx->r14 = MEM_HU(ctx->r2, 0X948);
    // 0x803F5828: addiu       $v1, $v0, 0x938
    ctx->r3 = ADD32(ctx->r2, 0X938);
    // 0x803F582C: beq         $t6, $zero, L_803F583C
    if (ctx->r14 == 0) {
        // 0x803F5830: nop
    
            goto L_803F583C;
    }
    // 0x803F5830: nop

    // 0x803F5834: b           L_803F583C
    // 0x803F5838: addiu       $v1, $v0, 0x948
    ctx->r3 = ADD32(ctx->r2, 0X948);
        goto L_803F583C;
    // 0x803F5838: addiu       $v1, $v0, 0x948
    ctx->r3 = ADD32(ctx->r2, 0X948);
L_803F583C:
    // 0x803F583C: lhu         $t7, 0x0($v1)
    ctx->r15 = MEM_HU(ctx->r3, 0X0);
    // 0x803F5840: nop

    // 0x803F5844: beq         $t7, $zero, L_803F5870
    if (ctx->r15 == 0) {
        // 0x803F5848: nop
    
            goto L_803F5870;
    }
    // 0x803F5848: nop

    // 0x803F584C: lh          $t8, 0x4($v1)
    ctx->r24 = MEM_H(ctx->r3, 0X4);
    // 0x803F5850: nop

    // 0x803F5854: sh          $t8, 0x2E($a0)
    MEM_H(0X2E, ctx->r4) = ctx->r24;
    // 0x803F5858: lh          $t9, 0x6($v1)
    ctx->r25 = MEM_H(ctx->r3, 0X6);
    // 0x803F585C: nop

    // 0x803F5860: sh          $t9, 0x30($a0)
    MEM_H(0X30, ctx->r4) = ctx->r25;
    // 0x803F5864: lwc1        $f4, 0x8($v1)
    ctx->f4.u32l = MEM_W(ctx->r3, 0X8);
    // 0x803F5868: b           L_803F58C8
    // 0x803F586C: swc1        $f4, 0xAC($a0)
    MEM_W(0XAC, ctx->r4) = ctx->f4.u32l;
        goto L_803F58C8;
    // 0x803F586C: swc1        $f4, 0xAC($a0)
    MEM_W(0XAC, ctx->r4) = ctx->f4.u32l;
L_803F5870:
    // 0x803F5870: cfc1        $t0, $FpcCsr
    ctx->r8 = get_cop1_cs();
    // 0x803F5874: lwc1        $f6, 0x4C($a0)
    ctx->f6.u32l = MEM_W(ctx->r4, 0X4C);
    // 0x803F5878: ori         $at, $t0, 0x3
    ctx->r1 = ctx->r8 | 0X3;
    // 0x803F587C: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x803F5880: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x803F5884: lwc1        $f10, 0x44($a0)
    ctx->f10.u32l = MEM_W(ctx->r4, 0X44);
    // 0x803F5888: cvt.w.s     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.u32l = CVT_W_S(ctx->f6.fl);
    // 0x803F588C: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x803F5890: ctc1        $t0, $FpcCsr
    set_cop1_cs(ctx->r8);
    // 0x803F5894: mfc1        $t1, $f8
    ctx->r9 = (int32_t)ctx->f8.u32l;
    // 0x803F5898: swc1        $f18, 0xAC($a0)
    MEM_W(0XAC, ctx->r4) = ctx->f18.u32l;
    // 0x803F589C: cfc1        $t2, $FpcCsr
    ctx->r10 = get_cop1_cs();
    // 0x803F58A0: sh          $t1, 0x2E($a0)
    MEM_H(0X2E, ctx->r4) = ctx->r9;
    // 0x803F58A4: ori         $at, $t2, 0x3
    ctx->r1 = ctx->r10 | 0X3;
    // 0x803F58A8: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x803F58AC: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x803F58B0: nop

    // 0x803F58B4: cvt.w.s     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.u32l = CVT_W_S(ctx->f10.fl);
    // 0x803F58B8: mfc1        $t3, $f16
    ctx->r11 = (int32_t)ctx->f16.u32l;
    // 0x803F58BC: ctc1        $t2, $FpcCsr
    set_cop1_cs(ctx->r10);
    // 0x803F58C0: sh          $t3, 0x30($a0)
    MEM_H(0X30, ctx->r4) = ctx->r11;
    // 0x803F58C4: nop

L_803F58C8:
    // 0x803F58C8: jal         0x8026BD38
    // 0x803F58CC: sw          $v1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r3;
    LOOKUP_FUNC(0x8026BD38)(rdram, ctx);
        goto after_0;
    // 0x803F58CC: sw          $v1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r3;
    after_0:
    // 0x803F58D0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x803F58D4: lw          $v0, 0x1C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X1C);
    // 0x803F58D8: jr          $ra
    // 0x803F58DC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x803F58DC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void ovl_803F0000_menu_func_803F58E0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803F58E0: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x803F58E4: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x803F58E8: lhu         $v0, 0x2($a1)
    ctx->r2 = MEM_HU(ctx->r5, 0X2);
    // 0x803F58EC: nop

    // 0x803F58F0: beq         $v0, $zero, L_803F5914
    if (ctx->r2 == 0) {
        // 0x803F58F4: addiu       $t6, $v0, -0x1
        ctx->r14 = ADD32(ctx->r2, -0X1);
            goto L_803F5914;
    }
    // 0x803F58F4: addiu       $t6, $v0, -0x1
    ctx->r14 = ADD32(ctx->r2, -0X1);
    // 0x803F58F8: andi        $t7, $t6, 0xFFFF
    ctx->r15 = ctx->r14 & 0XFFFF;
    // 0x803F58FC: bne         $t7, $zero, L_803F590C
    if (ctx->r15 != 0) {
        // 0x803F5900: sh          $t6, 0x2($a1)
        MEM_H(0X2, ctx->r5) = ctx->r14;
            goto L_803F590C;
    }
    // 0x803F5900: sh          $t6, 0x2($a1)
    MEM_H(0X2, ctx->r5) = ctx->r14;
    // 0x803F5904: b           L_803F59C4
    // 0x803F5908: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_803F59C4;
    // 0x803F5908: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_803F590C:
    // 0x803F590C: b           L_803F59C4
    // 0x803F5910: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_803F59C4;
    // 0x803F5910: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_803F5914:
    // 0x803F5914: lwc1        $f4, 0xB4($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0XB4);
    // 0x803F5918: lwc1        $f6, 0xB8($a0)
    ctx->f6.u32l = MEM_W(ctx->r4, 0XB8);
    // 0x803F591C: lui         $v0, 0x8009
    ctx->r2 = S32(0X8009 << 16);
    // 0x803F5920: c.lt.s      $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f4.fl < ctx->f6.fl;
    // 0x803F5924: nop

    // 0x803F5928: bc1f        L_803F5938
    if (!c1cs) {
        // 0x803F592C: nop
    
            goto L_803F5938;
    }
    // 0x803F592C: nop

    // 0x803F5930: b           L_803F59C4
    // 0x803F5934: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_803F59C4;
    // 0x803F5934: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_803F5938:
    // 0x803F5938: lw          $v0, 0x3B20($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X3B20);
    // 0x803F593C: addiu       $t1, $sp, 0x28
    ctx->r9 = ADD32(ctx->r29, 0X28);
    // 0x803F5940: lw          $t8, 0x84($v0)
    ctx->r24 = MEM_W(ctx->r2, 0X84);
    // 0x803F5944: nop

    // 0x803F5948: bne         $t8, $zero, L_803F59C0
    if (ctx->r24 != 0) {
        // 0x803F594C: nop
    
            goto L_803F59C0;
    }
    // 0x803F594C: nop

    // 0x803F5950: lh          $t9, 0x4($a1)
    ctx->r25 = MEM_H(ctx->r5, 0X4);
    // 0x803F5954: lh          $t0, 0x6($a1)
    ctx->r8 = MEM_H(ctx->r5, 0X6);
    // 0x803F5958: mtc1        $t9, $f8
    ctx->f8.u32l = ctx->r25;
    // 0x803F595C: mtc1        $t0, $f10
    ctx->f10.u32l = ctx->r8;
    // 0x803F5960: cvt.s.w     $f8, $f8
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 8);
    ctx->f8.fl = CVT_S_W(ctx->f8.u32l);
    // 0x803F5964: lwc1        $f12, 0x8($v0)
    ctx->f12.u32l = MEM_W(ctx->r2, 0X8);
    // 0x803F5968: lwc1        $f14, 0x0($v0)
    ctx->f14.u32l = MEM_W(ctx->r2, 0X0);
    // 0x803F596C: cvt.s.w     $f10, $f10
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 10);
    ctx->f10.fl = CVT_S_W(ctx->f10.u32l);
    // 0x803F5970: mfc1        $a2, $f8
    ctx->r6 = (int32_t)ctx->f8.u32l;
    // 0x803F5974: sw          $a1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r5;
    // 0x803F5978: mfc1        $a3, $f10
    ctx->r7 = (int32_t)ctx->f10.u32l;
    // 0x803F597C: jal         0x80272B1C
    // 0x803F5980: sw          $t1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r9;
    LOOKUP_FUNC(0x80272B1C)(rdram, ctx);
        goto after_0;
    // 0x803F5980: sw          $t1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r9;
    after_0:
    // 0x803F5984: lw          $a1, 0x34($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X34);
    // 0x803F5988: lwc1        $f14, 0x28($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X28);
    // 0x803F598C: lwc1        $f12, 0xC($a1)
    ctx->f12.u32l = MEM_W(ctx->r5, 0XC);
    // 0x803F5990: jal         0x80279308
    // 0x803F5994: nop

    LOOKUP_FUNC(0x80279308)(rdram, ctx);
        goto after_1;
    // 0x803F5994: nop

    after_1:
    // 0x803F5998: lui         $at, 0x803F
    ctx->r1 = S32(0X803F << 16);
    // 0x803F599C: lwc1        $f17, 0x7DB0($at)
    ctx->f_odd[(17 - 1) * 2] = MEM_W(ctx->r1, 0X7DB0);
    // 0x803F59A0: lwc1        $f16, 0x7DB4($at)
    ctx->f16.u32l = MEM_W(ctx->r1, 0X7DB4);
    // 0x803F59A4: cvt.d.s     $f18, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f18.d = CVT_D_S(ctx->f0.fl);
    // 0x803F59A8: c.lt.d      $f16, $f18
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f16.d < ctx->f18.d;
    // 0x803F59AC: nop

    // 0x803F59B0: bc1f        L_803F59C4
    if (!c1cs) {
        // 0x803F59B4: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_803F59C4;
    }
    // 0x803F59B4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x803F59B8: b           L_803F59C4
    // 0x803F59BC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_803F59C4;
    // 0x803F59BC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_803F59C0:
    // 0x803F59C0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_803F59C4:
    // 0x803F59C4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x803F59C8: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x803F59CC: jr          $ra
    // 0x803F59D0: nop

    return;
    // 0x803F59D0: nop

;}
RECOMP_FUNC void ovl_803F0000_menu_func_803F59D4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803F59D4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x803F59D8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x803F59DC: lw          $v1, 0xC8($a0)
    ctx->r3 = MEM_W(ctx->r4, 0XC8);
    // 0x803F59E0: nop

    // 0x803F59E4: lhu         $v0, 0x95C($v1)
    ctx->r2 = MEM_HU(ctx->r3, 0X95C);
    // 0x803F59E8: nop

    // 0x803F59EC: andi        $t6, $v0, 0x400
    ctx->r14 = ctx->r2 & 0X400;
    // 0x803F59F0: bne         $t6, $zero, L_803F5A08
    if (ctx->r14 != 0) {
        // 0x803F59F4: nop
    
            goto L_803F5A08;
    }
    // 0x803F59F4: nop

    // 0x803F59F8: lhu         $t7, 0x1A($a0)
    ctx->r15 = MEM_HU(ctx->r4, 0X1A);
    // 0x803F59FC: andi        $t8, $v0, 0x200
    ctx->r24 = ctx->r2 & 0X200;
    // 0x803F5A00: bne         $t7, $zero, L_803F5A10
    if (ctx->r15 != 0) {
        // 0x803F5A04: nop
    
            goto L_803F5A10;
    }
    // 0x803F5A04: nop

L_803F5A08:
    // 0x803F5A08: b           L_803F5B0C
    // 0x803F5A0C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_803F5B0C;
    // 0x803F5A0C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_803F5A10:
    // 0x803F5A10: beq         $t8, $zero, L_803F5A84
    if (ctx->r24 == 0) {
        // 0x803F5A14: lui         $at, 0x4348
        ctx->r1 = S32(0X4348 << 16);
            goto L_803F5A84;
    }
    // 0x803F5A14: lui         $at, 0x4348
    ctx->r1 = S32(0X4348 << 16);
    // 0x803F5A18: lw          $t9, 0x24($v1)
    ctx->r25 = MEM_W(ctx->r3, 0X24);
    // 0x803F5A1C: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x803F5A20: lwc1        $f4, 0x8BC($t9)
    ctx->f4.u32l = MEM_W(ctx->r25, 0X8BC);
    // 0x803F5A24: ori         $t0, $v0, 0x400
    ctx->r8 = ctx->r2 | 0X400;
    // 0x803F5A28: c.lt.s      $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f4.fl < ctx->f6.fl;
    // 0x803F5A2C: nop

    // 0x803F5A30: bc1f        L_803F5B08
    if (!c1cs) {
        // 0x803F5A34: nop
    
            goto L_803F5B08;
    }
    // 0x803F5A34: nop

    // 0x803F5A38: sh          $t0, 0x95C($v1)
    MEM_H(0X95C, ctx->r3) = ctx->r8;
    // 0x803F5A3C: lw          $v1, 0xC8($a0)
    ctx->r3 = MEM_W(ctx->r4, 0XC8);
    // 0x803F5A40: lui         $at, 0x803F
    ctx->r1 = S32(0X803F << 16);
    // 0x803F5A44: lhu         $t1, 0x95C($v1)
    ctx->r9 = MEM_HU(ctx->r3, 0X95C);
    // 0x803F5A48: addiu       $a1, $zero, 0x80
    ctx->r5 = ADD32(0, 0X80);
    // 0x803F5A4C: ori         $t2, $t1, 0x100
    ctx->r10 = ctx->r9 | 0X100;
    // 0x803F5A50: sh          $t2, 0x95C($v1)
    MEM_H(0X95C, ctx->r3) = ctx->r10;
    // 0x803F5A54: lw          $t3, 0xC8($a0)
    ctx->r11 = MEM_W(ctx->r4, 0XC8);
    // 0x803F5A58: lwc1        $f8, 0x7DB8($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X7DB8);
    // 0x803F5A5C: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x803F5A60: swc1        $f8, 0x940($t3)
    MEM_W(0X940, ctx->r11) = ctx->f8.u32l;
    // 0x803F5A64: jal         0x803F1914
    // 0x803F5A68: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    ovl_803F0000_menu_func_803F1914(rdram, ctx);
        goto after_0;
    // 0x803F5A68: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x803F5A6C: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x803F5A70: beq         $v0, $zero, L_803F5B08
    if (ctx->r2 == 0) {
        // 0x803F5A74: addiu       $t4, $zero, 0x1A
        ctx->r12 = ADD32(0, 0X1A);
            goto L_803F5B08;
    }
    // 0x803F5A74: addiu       $t4, $zero, 0x1A
    ctx->r12 = ADD32(0, 0X1A);
    // 0x803F5A78: lw          $t5, 0xC8($a0)
    ctx->r13 = MEM_W(ctx->r4, 0XC8);
    // 0x803F5A7C: b           L_803F5B08
    // 0x803F5A80: sh          $t4, 0x938($t5)
    MEM_H(0X938, ctx->r13) = ctx->r12;
        goto L_803F5B08;
    // 0x803F5A80: sh          $t4, 0x938($t5)
    MEM_H(0X938, ctx->r13) = ctx->r12;
L_803F5A84:
    // 0x803F5A84: lh          $t6, 0x8B0($v1)
    ctx->r14 = MEM_H(ctx->r3, 0X8B0);
    // 0x803F5A88: nop

    // 0x803F5A8C: slti        $at, $t6, 0x158
    ctx->r1 = SIGNED(ctx->r14) < 0X158 ? 1 : 0;
    // 0x803F5A90: beq         $at, $zero, L_803F5B08
    if (ctx->r1 == 0) {
        // 0x803F5A94: nop
    
            goto L_803F5B08;
    }
    // 0x803F5A94: nop

    // 0x803F5A98: lw          $t7, 0x24($v1)
    ctx->r15 = MEM_W(ctx->r3, 0X24);
    // 0x803F5A9C: nop

    // 0x803F5AA0: lhu         $t8, 0x10($t7)
    ctx->r24 = MEM_HU(ctx->r15, 0X10);
    // 0x803F5AA4: nop

    // 0x803F5AA8: andi        $t9, $t8, 0x1
    ctx->r25 = ctx->r24 & 0X1;
    // 0x803F5AAC: beq         $t9, $zero, L_803F5B08
    if (ctx->r25 == 0) {
        // 0x803F5AB0: nop
    
            goto L_803F5B08;
    }
    // 0x803F5AB0: nop

    // 0x803F5AB4: lhu         $t0, 0x938($v1)
    ctx->r8 = MEM_HU(ctx->r3, 0X938);
    // 0x803F5AB8: addiu       $at, $zero, 0x19
    ctx->r1 = ADD32(0, 0X19);
    // 0x803F5ABC: beq         $t0, $at, L_803F5B08
    if (ctx->r8 == ctx->r1) {
        // 0x803F5AC0: ori         $t1, $v0, 0x200
        ctx->r9 = ctx->r2 | 0X200;
            goto L_803F5B08;
    }
    // 0x803F5AC0: ori         $t1, $v0, 0x200
    ctx->r9 = ctx->r2 | 0X200;
    // 0x803F5AC4: sh          $t1, 0x95C($v1)
    MEM_H(0X95C, ctx->r3) = ctx->r9;
    // 0x803F5AC8: lw          $v1, 0xC8($a0)
    ctx->r3 = MEM_W(ctx->r4, 0XC8);
    // 0x803F5ACC: addiu       $at, $zero, 0x18
    ctx->r1 = ADD32(0, 0X18);
    // 0x803F5AD0: lhu         $t2, 0x938($v1)
    ctx->r10 = MEM_HU(ctx->r3, 0X938);
    // 0x803F5AD4: nop

    // 0x803F5AD8: beq         $t2, $at, L_803F5AF8
    if (ctx->r10 == ctx->r1) {
        // 0x803F5ADC: nop
    
            goto L_803F5AF8;
    }
    // 0x803F5ADC: nop

    // 0x803F5AE0: jal         0x803F35D8
    // 0x803F5AE4: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    ovl_803F0000_menu_func_803F35D8(rdram, ctx);
        goto after_1;
    // 0x803F5AE4: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_1:
    // 0x803F5AE8: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x803F5AEC: nop

    // 0x803F5AF0: lw          $v1, 0xC8($a0)
    ctx->r3 = MEM_W(ctx->r4, 0XC8);
    // 0x803F5AF4: nop

L_803F5AF8:
    // 0x803F5AF8: lwc1        $f10, 0x54($a0)
    ctx->f10.u32l = MEM_W(ctx->r4, 0X54);
    // 0x803F5AFC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x803F5B00: b           L_803F5B0C
    // 0x803F5B04: swc1        $f10, 0x940($v1)
    MEM_W(0X940, ctx->r3) = ctx->f10.u32l;
        goto L_803F5B0C;
    // 0x803F5B04: swc1        $f10, 0x940($v1)
    MEM_W(0X940, ctx->r3) = ctx->f10.u32l;
L_803F5B08:
    // 0x803F5B08: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_803F5B0C:
    // 0x803F5B0C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x803F5B10: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x803F5B14: jr          $ra
    // 0x803F5B18: nop

    return;
    // 0x803F5B18: nop

;}
RECOMP_FUNC void ovl_803F0000_menu_func_803F5B08(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803F5B08: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x803F5B0C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x803F5B10: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x803F5B14: jr          $ra
    // 0x803F5B18: nop

    return;
    // 0x803F5B18: nop

;}
RECOMP_FUNC void ovl_803F0000_menu_func_803F5B1C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803F5B1C: lui         $t6, 0x8012
    ctx->r14 = S32(0X8012 << 16);
    // 0x803F5B20: lhu         $t6, 0xB7E($t6)
    ctx->r14 = MEM_HU(ctx->r14, 0XB7E);
    // 0x803F5B24: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x803F5B28: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x803F5B2C: andi        $t7, $t6, 0x400
    ctx->r15 = ctx->r14 & 0X400;
    // 0x803F5B30: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x803F5B34: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x803F5B38: beq         $t7, $zero, L_803F5BDC
    if (ctx->r15 == 0) {
        // 0x803F5B3C: sh          $zero, 0x20($sp)
        MEM_H(0X20, ctx->r29) = 0;
            goto L_803F5BDC;
    }
    // 0x803F5B3C: sh          $zero, 0x20($sp)
    MEM_H(0X20, ctx->r29) = 0;
    // 0x803F5B40: jal         0x80051268
    // 0x803F5B44: nop

    func_80051268(rdram, ctx);
        goto after_0;
    // 0x803F5B44: nop

    after_0:
    // 0x803F5B48: lui         $v1, 0x8009
    ctx->r3 = S32(0X8009 << 16);
    // 0x803F5B4C: addiu       $v1, $v1, 0x3B20
    ctx->r3 = ADD32(ctx->r3, 0X3B20);
    // 0x803F5B50: lw          $t9, 0x0($v1)
    ctx->r25 = MEM_W(ctx->r3, 0X0);
    // 0x803F5B54: cfc1        $t0, $FpcCsr
    ctx->r8 = get_cop1_cs();
    // 0x803F5B58: ori         $t8, $zero, 0xFFFF
    ctx->r24 = 0 | 0XFFFF;
    // 0x803F5B5C: sh          $t8, 0xCC($t9)
    MEM_H(0XCC, ctx->r25) = ctx->r24;
    // 0x803F5B60: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x803F5B64: ori         $at, $t0, 0x3
    ctx->r1 = ctx->r8 | 0X3;
    // 0x803F5B68: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x803F5B6C: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x803F5B70: lwc1        $f4, 0x8($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X8);
    // 0x803F5B74: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x803F5B78: cvt.w.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = CVT_W_S(ctx->f4.fl);
    // 0x803F5B7C: addiu       $a0, $a0, 0xB78
    ctx->r4 = ADD32(ctx->r4, 0XB78);
    // 0x803F5B80: ctc1        $t0, $FpcCsr
    set_cop1_cs(ctx->r8);
    // 0x803F5B84: mfc1        $t1, $f6
    ctx->r9 = (int32_t)ctx->f6.u32l;
    // 0x803F5B88: addiu       $t5, $zero, 0xD
    ctx->r13 = ADD32(0, 0XD);
    // 0x803F5B8C: cfc1        $t2, $FpcCsr
    ctx->r10 = get_cop1_cs();
    // 0x803F5B90: sh          $t1, 0xD8($v0)
    MEM_H(0XD8, ctx->r2) = ctx->r9;
    // 0x803F5B94: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x803F5B98: ori         $at, $t2, 0x3
    ctx->r1 = ctx->r10 | 0X3;
    // 0x803F5B9C: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x803F5BA0: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x803F5BA4: lwc1        $f8, 0x0($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X0);
    // 0x803F5BA8: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x803F5BAC: cvt.w.s     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.u32l = CVT_W_S(ctx->f8.fl);
    // 0x803F5BB0: mfc1        $t3, $f10
    ctx->r11 = (int32_t)ctx->f10.u32l;
    // 0x803F5BB4: ctc1        $t2, $FpcCsr
    set_cop1_cs(ctx->r10);
    // 0x803F5BB8: sh          $t3, 0xDA($v0)
    MEM_H(0XDA, ctx->r2) = ctx->r11;
    // 0x803F5BBC: sh          $t5, 0x0($a0)
    MEM_H(0X0, ctx->r4) = ctx->r13;
    // 0x803F5BC0: jal         0x80050F74
    // 0x803F5BC4: sh          $t5, 0xB7A($at)
    MEM_H(0XB7A, ctx->r1) = ctx->r13;
    func_80050F74(rdram, ctx);
        goto after_1;
    // 0x803F5BC4: sh          $t5, 0xB7A($at)
    MEM_H(0XB7A, ctx->r1) = ctx->r13;
    after_1:
    // 0x803F5BC8: lhu         $t6, 0x12($s0)
    ctx->r14 = MEM_HU(ctx->r16, 0X12);
    // 0x803F5BCC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x803F5BD0: ori         $t7, $t6, 0x8
    ctx->r15 = ctx->r14 | 0X8;
    // 0x803F5BD4: b           L_803F5D90
    // 0x803F5BD8: sh          $t7, 0x12($s0)
    MEM_H(0X12, ctx->r16) = ctx->r15;
        goto L_803F5D90;
    // 0x803F5BD8: sh          $t7, 0x12($s0)
    MEM_H(0X12, ctx->r16) = ctx->r15;
L_803F5BDC:
    // 0x803F5BDC: lw          $t8, 0xC8($s0)
    ctx->r24 = MEM_W(ctx->r16, 0XC8);
    // 0x803F5BE0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x803F5BE4: jal         0x803F5814
    // 0x803F5BE8: sh          $zero, 0x964($t8)
    MEM_H(0X964, ctx->r24) = 0;
    ovl_803F0000_menu_func_803F5814(rdram, ctx);
        goto after_2;
    // 0x803F5BE8: sh          $zero, 0x964($t8)
    MEM_H(0X964, ctx->r24) = 0;
    after_2:
    // 0x803F5BEC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x803F5BF0: jal         0x803F59D4
    // 0x803F5BF4: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
    ovl_803F0000_menu_func_803F59D4(rdram, ctx);
        goto after_3;
    // 0x803F5BF4: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
    after_3:
    // 0x803F5BF8: lw          $a2, 0x24($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X24);
    // 0x803F5BFC: beq         $v0, $zero, L_803F5C14
    if (ctx->r2 == 0) {
        // 0x803F5C00: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_803F5C14;
    }
    // 0x803F5C00: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x803F5C04: jal         0x803F5814
    // 0x803F5C08: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_803F0000_menu_func_803F5814(rdram, ctx);
        goto after_4;
    // 0x803F5C08: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_4:
    // 0x803F5C0C: or          $a2, $v0, $zero
    ctx->r6 = ctx->r2 | 0;
    // 0x803F5C10: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
L_803F5C14:
    // 0x803F5C14: or          $a1, $a2, $zero
    ctx->r5 = ctx->r6 | 0;
    // 0x803F5C18: jal         0x803F54DC
    // 0x803F5C1C: sw          $a2, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r6;
    ovl_803F0000_menu_func_803F54DC(rdram, ctx);
        goto after_5;
    // 0x803F5C1C: sw          $a2, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r6;
    after_5:
    // 0x803F5C20: lw          $a2, 0x24($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X24);
    // 0x803F5C24: beq         $v0, $zero, L_803F5C38
    if (ctx->r2 == 0) {
        // 0x803F5C28: nop
    
            goto L_803F5C38;
    }
    // 0x803F5C28: nop

    // 0x803F5C2C: jal         0x803F5814
    // 0x803F5C30: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_803F0000_menu_func_803F5814(rdram, ctx);
        goto after_6;
    // 0x803F5C30: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_6:
    // 0x803F5C34: or          $a2, $v0, $zero
    ctx->r6 = ctx->r2 | 0;
L_803F5C38:
    // 0x803F5C38: lhu         $t9, 0x0($a2)
    ctx->r25 = MEM_HU(ctx->r6, 0X0);
    // 0x803F5C3C: addiu       $at, $zero, 0x9
    ctx->r1 = ADD32(0, 0X9);
    // 0x803F5C40: bne         $t9, $at, L_803F5C58
    if (ctx->r25 != ctx->r1) {
        // 0x803F5C44: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_803F5C58;
    }
    // 0x803F5C44: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x803F5C48: lhu         $t0, 0x14($s0)
    ctx->r8 = MEM_HU(ctx->r16, 0X14);
    // 0x803F5C4C: nop

    // 0x803F5C50: ori         $t1, $t0, 0x40
    ctx->r9 = ctx->r8 | 0X40;
    // 0x803F5C54: sh          $t1, 0x14($s0)
    MEM_H(0X14, ctx->r16) = ctx->r9;
L_803F5C58:
    // 0x803F5C58: lhu         $t2, 0xE($s0)
    ctx->r10 = MEM_HU(ctx->r16, 0XE);
    // 0x803F5C5C: addiu       $at, $zero, 0xD
    ctx->r1 = ADD32(0, 0XD);
    // 0x803F5C60: bne         $t2, $at, L_803F5C70
    if (ctx->r10 != ctx->r1) {
        // 0x803F5C64: or          $a1, $a2, $zero
        ctx->r5 = ctx->r6 | 0;
            goto L_803F5C70;
    }
    // 0x803F5C64: or          $a1, $a2, $zero
    ctx->r5 = ctx->r6 | 0;
    // 0x803F5C68: b           L_803F5D90
    // 0x803F5C6C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_803F5D90;
    // 0x803F5C6C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_803F5C70:
    // 0x803F5C70: jal         0x803F58E0
    // 0x803F5C74: sw          $a2, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r6;
    ovl_803F0000_menu_func_803F58E0(rdram, ctx);
        goto after_7;
    // 0x803F5C74: sw          $a2, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r6;
    after_7:
    // 0x803F5C78: lw          $a2, 0x24($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X24);
    // 0x803F5C7C: beq         $v0, $zero, L_803F5CB0
    if (ctx->r2 == 0) {
        // 0x803F5C80: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_803F5CB0;
    }
    // 0x803F5C80: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x803F5C84: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x803F5C88: lhu         $a1, 0x0($a2)
    ctx->r5 = MEM_HU(ctx->r6, 0X0);
    // 0x803F5C8C: sh          $zero, 0x0($a2)
    MEM_H(0X0, ctx->r6) = 0;
    // 0x803F5C90: jal         0x803F4160
    // 0x803F5C94: swc1        $f16, 0x8($a2)
    MEM_W(0X8, ctx->r6) = ctx->f16.u32l;
    ovl_803F0000_menu_func_803F4160(rdram, ctx);
        goto after_8;
    // 0x803F5C94: swc1        $f16, 0x8($a2)
    MEM_W(0X8, ctx->r6) = ctx->f16.u32l;
    after_8:
    // 0x803F5C98: andi        $v1, $v0, 0xFFFF
    ctx->r3 = ctx->r2 & 0XFFFF;
    // 0x803F5C9C: bne         $v0, $zero, L_803F5CB0
    if (ctx->r2 != 0) {
        // 0x803F5CA0: sh          $v1, 0x20($sp)
        MEM_H(0X20, ctx->r29) = ctx->r3;
            goto L_803F5CB0;
    }
    // 0x803F5CA0: sh          $v1, 0x20($sp)
    MEM_H(0X20, ctx->r29) = ctx->r3;
    // 0x803F5CA4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x803F5CA8: jal         0x803F5814
    // 0x803F5CAC: sh          $v1, 0x20($sp)
    MEM_H(0X20, ctx->r29) = ctx->r3;
    ovl_803F0000_menu_func_803F5814(rdram, ctx);
        goto after_9;
    // 0x803F5CAC: sh          $v1, 0x20($sp)
    MEM_H(0X20, ctx->r29) = ctx->r3;
    after_9:
L_803F5CB0:
    // 0x803F5CB0: lw          $t3, 0xC8($s0)
    ctx->r11 = MEM_W(ctx->r16, 0XC8);
    // 0x803F5CB4: lhu         $v1, 0x20($sp)
    ctx->r3 = MEM_HU(ctx->r29, 0X20);
    // 0x803F5CB8: lbu         $t4, 0x8AC($t3)
    ctx->r12 = MEM_BU(ctx->r11, 0X8AC);
    // 0x803F5CBC: lui         $at, 0x3FF8
    ctx->r1 = S32(0X3FF8 << 16);
    // 0x803F5CC0: beq         $t4, $zero, L_803F5D34
    if (ctx->r12 == 0) {
        // 0x803F5CC4: or          $v0, $v1, $zero
        ctx->r2 = ctx->r3 | 0;
            goto L_803F5D34;
    }
    // 0x803F5CC4: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    // 0x803F5CC8: lui         $at, 0x803F
    ctx->r1 = S32(0X803F << 16);
    // 0x803F5CCC: lwc1        $f0, 0xAC($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0XAC);
    // 0x803F5CD0: lwc1        $f5, 0x7DC0($at)
    ctx->f_odd[(5 - 1) * 2] = MEM_W(ctx->r1, 0X7DC0);
    // 0x803F5CD4: lwc1        $f4, 0x7DC4($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X7DC4);
    // 0x803F5CD8: cvt.d.s     $f18, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f18.d = CVT_D_S(ctx->f0.fl);
    // 0x803F5CDC: c.le.d      $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f4.d <= ctx->f18.d;
    // 0x803F5CE0: nop

    // 0x803F5CE4: bc1f        L_803F5D00
    if (!c1cs) {
        // 0x803F5CE8: nop
    
            goto L_803F5D00;
    }
    // 0x803F5CE8: nop

    // 0x803F5CEC: lhu         $t5, 0x12($s0)
    ctx->r13 = MEM_HU(ctx->r16, 0X12);
    // 0x803F5CF0: nop

    // 0x803F5CF4: ori         $t6, $t5, 0x80
    ctx->r14 = ctx->r13 | 0X80;
    // 0x803F5CF8: b           L_803F5D90
    // 0x803F5CFC: sh          $t6, 0x12($s0)
    MEM_H(0X12, ctx->r16) = ctx->r14;
        goto L_803F5D90;
    // 0x803F5CFC: sh          $t6, 0x12($s0)
    MEM_H(0X12, ctx->r16) = ctx->r14;
L_803F5D00:
    // 0x803F5D00: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x803F5D04: nop

    // 0x803F5D08: c.eq.s      $f6, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f6.fl == ctx->f0.fl;
    // 0x803F5D0C: nop

    // 0x803F5D10: bc1f        L_803F5D90
    if (!c1cs) {
        // 0x803F5D14: nop
    
            goto L_803F5D90;
    }
    // 0x803F5D14: nop

    // 0x803F5D18: bne         $v1, $zero, L_803F5D90
    if (ctx->r3 != 0) {
        // 0x803F5D1C: nop
    
            goto L_803F5D90;
    }
    // 0x803F5D1C: nop

    // 0x803F5D20: lhu         $t7, 0x12($s0)
    ctx->r15 = MEM_HU(ctx->r16, 0X12);
    // 0x803F5D24: nop

    // 0x803F5D28: ori         $t8, $t7, 0x8
    ctx->r24 = ctx->r15 | 0X8;
    // 0x803F5D2C: b           L_803F5D90
    // 0x803F5D30: sh          $t8, 0x12($s0)
    MEM_H(0X12, ctx->r16) = ctx->r24;
        goto L_803F5D90;
    // 0x803F5D30: sh          $t8, 0x12($s0)
    MEM_H(0X12, ctx->r16) = ctx->r24;
L_803F5D34:
    // 0x803F5D34: lwc1        $f0, 0xAC($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0XAC);
    // 0x803F5D38: mtc1        $at, $f11
    ctx->f_odd[(11 - 1) * 2] = ctx->r1;
    // 0x803F5D3C: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x803F5D40: cvt.d.s     $f8, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f8.d = CVT_D_S(ctx->f0.fl);
    // 0x803F5D44: c.le.d      $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f10.d <= ctx->f8.d;
    // 0x803F5D48: lui         $at, 0x3FC0
    ctx->r1 = S32(0X3FC0 << 16);
    // 0x803F5D4C: bc1f        L_803F5D60
    if (!c1cs) {
        // 0x803F5D50: nop
    
            goto L_803F5D60;
    }
    // 0x803F5D50: nop

    // 0x803F5D54: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x803F5D58: b           L_803F5D90
    // 0x803F5D5C: swc1        $f16, 0xAC($s0)
    MEM_W(0XAC, ctx->r16) = ctx->f16.u32l;
        goto L_803F5D90;
    // 0x803F5D5C: swc1        $f16, 0xAC($s0)
    MEM_W(0XAC, ctx->r16) = ctx->f16.u32l;
L_803F5D60:
    // 0x803F5D60: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x803F5D64: nop

    // 0x803F5D68: c.eq.s      $f18, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f18.fl == ctx->f0.fl;
    // 0x803F5D6C: nop

    // 0x803F5D70: bc1f        L_803F5D90
    if (!c1cs) {
        // 0x803F5D74: nop
    
            goto L_803F5D90;
    }
    // 0x803F5D74: nop

    // 0x803F5D78: bne         $v1, $zero, L_803F5D90
    if (ctx->r3 != 0) {
        // 0x803F5D7C: nop
    
            goto L_803F5D90;
    }
    // 0x803F5D7C: nop

    // 0x803F5D80: lhu         $t9, 0x12($s0)
    ctx->r25 = MEM_HU(ctx->r16, 0X12);
    // 0x803F5D84: nop

    // 0x803F5D88: ori         $t0, $t9, 0x8
    ctx->r8 = ctx->r25 | 0X8;
    // 0x803F5D8C: sh          $t0, 0x12($s0)
    MEM_H(0X12, ctx->r16) = ctx->r8;
L_803F5D90:
    // 0x803F5D90: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x803F5D94: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x803F5D98: jr          $ra
    // 0x803F5D9C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x803F5D9C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void ovl_803F0000_menu_func_803F5B9C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803F5B9C: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x803F5BA0: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x803F5BA4: lwc1        $f8, 0x0($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X0);
    // 0x803F5BA8: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x803F5BAC: cvt.w.s     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.u32l = CVT_W_S(ctx->f8.fl);
    // 0x803F5BB0: mfc1        $t3, $f10
    ctx->r11 = (int32_t)ctx->f10.u32l;
    // 0x803F5BB4: ctc1        $t2, $FpcCsr
    set_cop1_cs(ctx->r10);
    // 0x803F5BB8: sh          $t3, 0xDA($v0)
    MEM_H(0XDA, ctx->r2) = ctx->r11;
    // 0x803F5BBC: sh          $t5, 0x0($a0)
    MEM_H(0X0, ctx->r4) = ctx->r13;
    // 0x803F5BC0: jal         0x80050F74
    // 0x803F5BC4: sh          $t5, 0xB7A($at)
    MEM_H(0XB7A, ctx->r1) = ctx->r13;
    func_80050F74(rdram, ctx);
        goto after_0;
    // 0x803F5BC4: sh          $t5, 0xB7A($at)
    MEM_H(0XB7A, ctx->r1) = ctx->r13;
    after_0:
    // 0x803F5BC8: lhu         $t6, 0x12($s0)
    ctx->r14 = MEM_HU(ctx->r16, 0X12);
    // 0x803F5BCC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x803F5BD0: ori         $t7, $t6, 0x8
    ctx->r15 = ctx->r14 | 0X8;
    // 0x803F5BD4: b           L_803F5D90
    // 0x803F5BD8: sh          $t7, 0x12($s0)
    MEM_H(0X12, ctx->r16) = ctx->r15;
        goto L_803F5D90;
    // 0x803F5BD8: sh          $t7, 0x12($s0)
    MEM_H(0X12, ctx->r16) = ctx->r15;
    // 0x803F5BDC: lw          $t8, 0xC8($s0)
    ctx->r24 = MEM_W(ctx->r16, 0XC8);
    // 0x803F5BE0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x803F5BE4: jal         0x803F5814
    // 0x803F5BE8: sh          $zero, 0x964($t8)
    MEM_H(0X964, ctx->r24) = 0;
    ovl_803F0000_menu_func_803F5814(rdram, ctx);
        goto after_1;
    // 0x803F5BE8: sh          $zero, 0x964($t8)
    MEM_H(0X964, ctx->r24) = 0;
    after_1:
    // 0x803F5BEC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x803F5BF0: jal         0x803F59D4
    // 0x803F5BF4: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
    ovl_803F0000_menu_func_803F59D4(rdram, ctx);
        goto after_2;
    // 0x803F5BF4: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
    after_2:
    // 0x803F5BF8: lw          $a2, 0x24($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X24);
    // 0x803F5BFC: beq         $v0, $zero, L_803F5C14
    if (ctx->r2 == 0) {
        // 0x803F5C00: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_803F5C14;
    }
    // 0x803F5C00: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x803F5C04: jal         0x803F5814
    // 0x803F5C08: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_803F0000_menu_func_803F5814(rdram, ctx);
        goto after_3;
    // 0x803F5C08: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_3:
    // 0x803F5C0C: or          $a2, $v0, $zero
    ctx->r6 = ctx->r2 | 0;
    // 0x803F5C10: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
L_803F5C14:
    // 0x803F5C14: or          $a1, $a2, $zero
    ctx->r5 = ctx->r6 | 0;
    // 0x803F5C18: jal         0x803F54DC
    // 0x803F5C1C: sw          $a2, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r6;
    ovl_803F0000_menu_func_803F54DC(rdram, ctx);
        goto after_4;
    // 0x803F5C1C: sw          $a2, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r6;
    after_4:
    // 0x803F5C20: lw          $a2, 0x24($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X24);
    // 0x803F5C24: beq         $v0, $zero, L_803F5C38
    if (ctx->r2 == 0) {
        // 0x803F5C28: nop
    
            goto L_803F5C38;
    }
    // 0x803F5C28: nop

    // 0x803F5C2C: jal         0x803F5814
    // 0x803F5C30: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_803F0000_menu_func_803F5814(rdram, ctx);
        goto after_5;
    // 0x803F5C30: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_5:
    // 0x803F5C34: or          $a2, $v0, $zero
    ctx->r6 = ctx->r2 | 0;
L_803F5C38:
    // 0x803F5C38: lhu         $t9, 0x0($a2)
    ctx->r25 = MEM_HU(ctx->r6, 0X0);
    // 0x803F5C3C: addiu       $at, $zero, 0x9
    ctx->r1 = ADD32(0, 0X9);
    // 0x803F5C40: bne         $t9, $at, L_803F5C58
    if (ctx->r25 != ctx->r1) {
        // 0x803F5C44: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_803F5C58;
    }
    // 0x803F5C44: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x803F5C48: lhu         $t0, 0x14($s0)
    ctx->r8 = MEM_HU(ctx->r16, 0X14);
    // 0x803F5C4C: nop

    // 0x803F5C50: ori         $t1, $t0, 0x40
    ctx->r9 = ctx->r8 | 0X40;
    // 0x803F5C54: sh          $t1, 0x14($s0)
    MEM_H(0X14, ctx->r16) = ctx->r9;
L_803F5C58:
    // 0x803F5C58: lhu         $t2, 0xE($s0)
    ctx->r10 = MEM_HU(ctx->r16, 0XE);
    // 0x803F5C5C: addiu       $at, $zero, 0xD
    ctx->r1 = ADD32(0, 0XD);
    // 0x803F5C60: bne         $t2, $at, L_803F5C70
    if (ctx->r10 != ctx->r1) {
        // 0x803F5C64: or          $a1, $a2, $zero
        ctx->r5 = ctx->r6 | 0;
            goto L_803F5C70;
    }
    // 0x803F5C64: or          $a1, $a2, $zero
    ctx->r5 = ctx->r6 | 0;
    // 0x803F5C68: b           L_803F5D90
    // 0x803F5C6C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_803F5D90;
    // 0x803F5C6C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_803F5C70:
    // 0x803F5C70: jal         0x803F58E0
    // 0x803F5C74: sw          $a2, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r6;
    ovl_803F0000_menu_func_803F58E0(rdram, ctx);
        goto after_6;
    // 0x803F5C74: sw          $a2, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r6;
    after_6:
    // 0x803F5C78: lw          $a2, 0x24($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X24);
    // 0x803F5C7C: beq         $v0, $zero, L_803F5CB0
    if (ctx->r2 == 0) {
        // 0x803F5C80: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_803F5CB0;
    }
    // 0x803F5C80: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x803F5C84: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x803F5C88: lhu         $a1, 0x0($a2)
    ctx->r5 = MEM_HU(ctx->r6, 0X0);
    // 0x803F5C8C: sh          $zero, 0x0($a2)
    MEM_H(0X0, ctx->r6) = 0;
    // 0x803F5C90: jal         0x803F4160
    // 0x803F5C94: swc1        $f16, 0x8($a2)
    MEM_W(0X8, ctx->r6) = ctx->f16.u32l;
    ovl_803F0000_menu_func_803F4160(rdram, ctx);
        goto after_7;
    // 0x803F5C94: swc1        $f16, 0x8($a2)
    MEM_W(0X8, ctx->r6) = ctx->f16.u32l;
    after_7:
    // 0x803F5C98: andi        $v1, $v0, 0xFFFF
    ctx->r3 = ctx->r2 & 0XFFFF;
    // 0x803F5C9C: bne         $v0, $zero, L_803F5CB0
    if (ctx->r2 != 0) {
        // 0x803F5CA0: sh          $v1, 0x20($sp)
        MEM_H(0X20, ctx->r29) = ctx->r3;
            goto L_803F5CB0;
    }
    // 0x803F5CA0: sh          $v1, 0x20($sp)
    MEM_H(0X20, ctx->r29) = ctx->r3;
    // 0x803F5CA4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x803F5CA8: jal         0x803F5814
    // 0x803F5CAC: sh          $v1, 0x20($sp)
    MEM_H(0X20, ctx->r29) = ctx->r3;
    ovl_803F0000_menu_func_803F5814(rdram, ctx);
        goto after_8;
    // 0x803F5CAC: sh          $v1, 0x20($sp)
    MEM_H(0X20, ctx->r29) = ctx->r3;
    after_8:
L_803F5CB0:
    // 0x803F5CB0: lw          $t3, 0xC8($s0)
    ctx->r11 = MEM_W(ctx->r16, 0XC8);
    // 0x803F5CB4: lhu         $v1, 0x20($sp)
    ctx->r3 = MEM_HU(ctx->r29, 0X20);
    // 0x803F5CB8: lbu         $t4, 0x8AC($t3)
    ctx->r12 = MEM_BU(ctx->r11, 0X8AC);
    // 0x803F5CBC: lui         $at, 0x3FF8
    ctx->r1 = S32(0X3FF8 << 16);
    // 0x803F5CC0: beq         $t4, $zero, L_803F5D34
    if (ctx->r12 == 0) {
        // 0x803F5CC4: or          $v0, $v1, $zero
        ctx->r2 = ctx->r3 | 0;
            goto L_803F5D34;
    }
    // 0x803F5CC4: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    // 0x803F5CC8: lui         $at, 0x803F
    ctx->r1 = S32(0X803F << 16);
    // 0x803F5CCC: lwc1        $f0, 0xAC($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0XAC);
    // 0x803F5CD0: lwc1        $f5, 0x7DC0($at)
    ctx->f_odd[(5 - 1) * 2] = MEM_W(ctx->r1, 0X7DC0);
    // 0x803F5CD4: lwc1        $f4, 0x7DC4($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X7DC4);
    // 0x803F5CD8: cvt.d.s     $f18, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f18.d = CVT_D_S(ctx->f0.fl);
    // 0x803F5CDC: c.le.d      $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f4.d <= ctx->f18.d;
    // 0x803F5CE0: nop

    // 0x803F5CE4: bc1f        L_803F5D00
    if (!c1cs) {
        // 0x803F5CE8: nop
    
            goto L_803F5D00;
    }
    // 0x803F5CE8: nop

    // 0x803F5CEC: lhu         $t5, 0x12($s0)
    ctx->r13 = MEM_HU(ctx->r16, 0X12);
    // 0x803F5CF0: nop

    // 0x803F5CF4: ori         $t6, $t5, 0x80
    ctx->r14 = ctx->r13 | 0X80;
    // 0x803F5CF8: b           L_803F5D90
    // 0x803F5CFC: sh          $t6, 0x12($s0)
    MEM_H(0X12, ctx->r16) = ctx->r14;
        goto L_803F5D90;
    // 0x803F5CFC: sh          $t6, 0x12($s0)
    MEM_H(0X12, ctx->r16) = ctx->r14;
L_803F5D00:
    // 0x803F5D00: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x803F5D04: nop

    // 0x803F5D08: c.eq.s      $f6, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f6.fl == ctx->f0.fl;
    // 0x803F5D0C: nop

    // 0x803F5D10: bc1f        L_803F5D90
    if (!c1cs) {
        // 0x803F5D14: nop
    
            goto L_803F5D90;
    }
    // 0x803F5D14: nop

    // 0x803F5D18: bne         $v1, $zero, L_803F5D90
    if (ctx->r3 != 0) {
        // 0x803F5D1C: nop
    
            goto L_803F5D90;
    }
    // 0x803F5D1C: nop

    // 0x803F5D20: lhu         $t7, 0x12($s0)
    ctx->r15 = MEM_HU(ctx->r16, 0X12);
    // 0x803F5D24: nop

    // 0x803F5D28: ori         $t8, $t7, 0x8
    ctx->r24 = ctx->r15 | 0X8;
    // 0x803F5D2C: b           L_803F5D90
    // 0x803F5D30: sh          $t8, 0x12($s0)
    MEM_H(0X12, ctx->r16) = ctx->r24;
        goto L_803F5D90;
    // 0x803F5D30: sh          $t8, 0x12($s0)
    MEM_H(0X12, ctx->r16) = ctx->r24;
L_803F5D34:
    // 0x803F5D34: lwc1        $f0, 0xAC($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0XAC);
    // 0x803F5D38: mtc1        $at, $f11
    ctx->f_odd[(11 - 1) * 2] = ctx->r1;
    // 0x803F5D3C: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x803F5D40: cvt.d.s     $f8, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f8.d = CVT_D_S(ctx->f0.fl);
    // 0x803F5D44: c.le.d      $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f10.d <= ctx->f8.d;
    // 0x803F5D48: lui         $at, 0x3FC0
    ctx->r1 = S32(0X3FC0 << 16);
    // 0x803F5D4C: bc1f        L_803F5D60
    if (!c1cs) {
        // 0x803F5D50: nop
    
            goto L_803F5D60;
    }
    // 0x803F5D50: nop

    // 0x803F5D54: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x803F5D58: b           L_803F5D90
    // 0x803F5D5C: swc1        $f16, 0xAC($s0)
    MEM_W(0XAC, ctx->r16) = ctx->f16.u32l;
        goto L_803F5D90;
    // 0x803F5D5C: swc1        $f16, 0xAC($s0)
    MEM_W(0XAC, ctx->r16) = ctx->f16.u32l;
L_803F5D60:
    // 0x803F5D60: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x803F5D64: nop

    // 0x803F5D68: c.eq.s      $f18, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f18.fl == ctx->f0.fl;
    // 0x803F5D6C: nop

    // 0x803F5D70: bc1f        L_803F5D90
    if (!c1cs) {
        // 0x803F5D74: nop
    
            goto L_803F5D90;
    }
    // 0x803F5D74: nop

    // 0x803F5D78: bne         $v1, $zero, L_803F5D90
    if (ctx->r3 != 0) {
        // 0x803F5D7C: nop
    
            goto L_803F5D90;
    }
    // 0x803F5D7C: nop

    // 0x803F5D80: lhu         $t9, 0x12($s0)
    ctx->r25 = MEM_HU(ctx->r16, 0X12);
    // 0x803F5D84: nop

    // 0x803F5D88: ori         $t0, $t9, 0x8
    ctx->r8 = ctx->r25 | 0X8;
    // 0x803F5D8C: sh          $t0, 0x12($s0)
    MEM_H(0X12, ctx->r16) = ctx->r8;
L_803F5D90:
    // 0x803F5D90: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x803F5D94: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x803F5D98: jr          $ra
    // 0x803F5D9C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x803F5D9C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void ovl_803F0000_menu_func_803F5BF8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803F5BF8: lw          $a2, 0x24($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X24);
    // 0x803F5BFC: beq         $v0, $zero, L_803F5C14
    if (ctx->r2 == 0) {
        // 0x803F5C00: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_803F5C14;
    }
    // 0x803F5C00: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x803F5C04: jal         0x803F5814
    // 0x803F5C08: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_803F0000_menu_func_803F5814(rdram, ctx);
        goto after_0;
    // 0x803F5C08: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_0:
    // 0x803F5C0C: or          $a2, $v0, $zero
    ctx->r6 = ctx->r2 | 0;
    // 0x803F5C10: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
L_803F5C14:
    // 0x803F5C14: or          $a1, $a2, $zero
    ctx->r5 = ctx->r6 | 0;
    // 0x803F5C18: jal         0x803F54DC
    // 0x803F5C1C: sw          $a2, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r6;
    ovl_803F0000_menu_func_803F54DC(rdram, ctx);
        goto after_1;
    // 0x803F5C1C: sw          $a2, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r6;
    after_1:
    // 0x803F5C20: lw          $a2, 0x24($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X24);
    // 0x803F5C24: beq         $v0, $zero, L_803F5C38
    if (ctx->r2 == 0) {
        // 0x803F5C28: nop
    
            goto L_803F5C38;
    }
    // 0x803F5C28: nop

    // 0x803F5C2C: jal         0x803F5814
    // 0x803F5C30: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_803F0000_menu_func_803F5814(rdram, ctx);
        goto after_2;
    // 0x803F5C30: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_2:
    // 0x803F5C34: or          $a2, $v0, $zero
    ctx->r6 = ctx->r2 | 0;
L_803F5C38:
    // 0x803F5C38: lhu         $t9, 0x0($a2)
    ctx->r25 = MEM_HU(ctx->r6, 0X0);
    // 0x803F5C3C: addiu       $at, $zero, 0x9
    ctx->r1 = ADD32(0, 0X9);
    // 0x803F5C40: bne         $t9, $at, L_803F5C58
    if (ctx->r25 != ctx->r1) {
        // 0x803F5C44: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_803F5C58;
    }
    // 0x803F5C44: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x803F5C48: lhu         $t0, 0x14($s0)
    ctx->r8 = MEM_HU(ctx->r16, 0X14);
    // 0x803F5C4C: nop

    // 0x803F5C50: ori         $t1, $t0, 0x40
    ctx->r9 = ctx->r8 | 0X40;
    // 0x803F5C54: sh          $t1, 0x14($s0)
    MEM_H(0X14, ctx->r16) = ctx->r9;
L_803F5C58:
    // 0x803F5C58: lhu         $t2, 0xE($s0)
    ctx->r10 = MEM_HU(ctx->r16, 0XE);
    // 0x803F5C5C: addiu       $at, $zero, 0xD
    ctx->r1 = ADD32(0, 0XD);
    // 0x803F5C60: bne         $t2, $at, L_803F5C70
    if (ctx->r10 != ctx->r1) {
        // 0x803F5C64: or          $a1, $a2, $zero
        ctx->r5 = ctx->r6 | 0;
            goto L_803F5C70;
    }
    // 0x803F5C64: or          $a1, $a2, $zero
    ctx->r5 = ctx->r6 | 0;
    // 0x803F5C68: b           L_803F5D90
    // 0x803F5C6C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_803F5D90;
    // 0x803F5C6C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_803F5C70:
    // 0x803F5C70: jal         0x803F58E0
    // 0x803F5C74: sw          $a2, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r6;
    ovl_803F0000_menu_func_803F58E0(rdram, ctx);
        goto after_3;
    // 0x803F5C74: sw          $a2, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r6;
    after_3:
    // 0x803F5C78: lw          $a2, 0x24($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X24);
    // 0x803F5C7C: beq         $v0, $zero, L_803F5CB0
    if (ctx->r2 == 0) {
        // 0x803F5C80: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_803F5CB0;
    }
    // 0x803F5C80: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x803F5C84: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x803F5C88: lhu         $a1, 0x0($a2)
    ctx->r5 = MEM_HU(ctx->r6, 0X0);
    // 0x803F5C8C: sh          $zero, 0x0($a2)
    MEM_H(0X0, ctx->r6) = 0;
    // 0x803F5C90: jal         0x803F4160
    // 0x803F5C94: swc1        $f16, 0x8($a2)
    MEM_W(0X8, ctx->r6) = ctx->f16.u32l;
    ovl_803F0000_menu_func_803F4160(rdram, ctx);
        goto after_4;
    // 0x803F5C94: swc1        $f16, 0x8($a2)
    MEM_W(0X8, ctx->r6) = ctx->f16.u32l;
    after_4:
    // 0x803F5C98: andi        $v1, $v0, 0xFFFF
    ctx->r3 = ctx->r2 & 0XFFFF;
    // 0x803F5C9C: bne         $v0, $zero, L_803F5CB0
    if (ctx->r2 != 0) {
        // 0x803F5CA0: sh          $v1, 0x20($sp)
        MEM_H(0X20, ctx->r29) = ctx->r3;
            goto L_803F5CB0;
    }
    // 0x803F5CA0: sh          $v1, 0x20($sp)
    MEM_H(0X20, ctx->r29) = ctx->r3;
    // 0x803F5CA4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x803F5CA8: jal         0x803F5814
    // 0x803F5CAC: sh          $v1, 0x20($sp)
    MEM_H(0X20, ctx->r29) = ctx->r3;
    ovl_803F0000_menu_func_803F5814(rdram, ctx);
        goto after_5;
    // 0x803F5CAC: sh          $v1, 0x20($sp)
    MEM_H(0X20, ctx->r29) = ctx->r3;
    after_5:
L_803F5CB0:
    // 0x803F5CB0: lw          $t3, 0xC8($s0)
    ctx->r11 = MEM_W(ctx->r16, 0XC8);
    // 0x803F5CB4: lhu         $v1, 0x20($sp)
    ctx->r3 = MEM_HU(ctx->r29, 0X20);
    // 0x803F5CB8: lbu         $t4, 0x8AC($t3)
    ctx->r12 = MEM_BU(ctx->r11, 0X8AC);
    // 0x803F5CBC: lui         $at, 0x3FF8
    ctx->r1 = S32(0X3FF8 << 16);
    // 0x803F5CC0: beq         $t4, $zero, L_803F5D34
    if (ctx->r12 == 0) {
        // 0x803F5CC4: or          $v0, $v1, $zero
        ctx->r2 = ctx->r3 | 0;
            goto L_803F5D34;
    }
    // 0x803F5CC4: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    // 0x803F5CC8: lui         $at, 0x803F
    ctx->r1 = S32(0X803F << 16);
    // 0x803F5CCC: lwc1        $f0, 0xAC($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0XAC);
    // 0x803F5CD0: lwc1        $f5, 0x7DC0($at)
    ctx->f_odd[(5 - 1) * 2] = MEM_W(ctx->r1, 0X7DC0);
    // 0x803F5CD4: lwc1        $f4, 0x7DC4($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X7DC4);
    // 0x803F5CD8: cvt.d.s     $f18, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f18.d = CVT_D_S(ctx->f0.fl);
    // 0x803F5CDC: c.le.d      $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f4.d <= ctx->f18.d;
    // 0x803F5CE0: nop

    // 0x803F5CE4: bc1f        L_803F5D00
    if (!c1cs) {
        // 0x803F5CE8: nop
    
            goto L_803F5D00;
    }
    // 0x803F5CE8: nop

    // 0x803F5CEC: lhu         $t5, 0x12($s0)
    ctx->r13 = MEM_HU(ctx->r16, 0X12);
    // 0x803F5CF0: nop

    // 0x803F5CF4: ori         $t6, $t5, 0x80
    ctx->r14 = ctx->r13 | 0X80;
    // 0x803F5CF8: b           L_803F5D90
    // 0x803F5CFC: sh          $t6, 0x12($s0)
    MEM_H(0X12, ctx->r16) = ctx->r14;
        goto L_803F5D90;
    // 0x803F5CFC: sh          $t6, 0x12($s0)
    MEM_H(0X12, ctx->r16) = ctx->r14;
L_803F5D00:
    // 0x803F5D00: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x803F5D04: nop

    // 0x803F5D08: c.eq.s      $f6, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f6.fl == ctx->f0.fl;
    // 0x803F5D0C: nop

    // 0x803F5D10: bc1f        L_803F5D90
    if (!c1cs) {
        // 0x803F5D14: nop
    
            goto L_803F5D90;
    }
    // 0x803F5D14: nop

    // 0x803F5D18: bne         $v1, $zero, L_803F5D90
    if (ctx->r3 != 0) {
        // 0x803F5D1C: nop
    
            goto L_803F5D90;
    }
    // 0x803F5D1C: nop

    // 0x803F5D20: lhu         $t7, 0x12($s0)
    ctx->r15 = MEM_HU(ctx->r16, 0X12);
    // 0x803F5D24: nop

    // 0x803F5D28: ori         $t8, $t7, 0x8
    ctx->r24 = ctx->r15 | 0X8;
    // 0x803F5D2C: b           L_803F5D90
    // 0x803F5D30: sh          $t8, 0x12($s0)
    MEM_H(0X12, ctx->r16) = ctx->r24;
        goto L_803F5D90;
    // 0x803F5D30: sh          $t8, 0x12($s0)
    MEM_H(0X12, ctx->r16) = ctx->r24;
L_803F5D34:
    // 0x803F5D34: lwc1        $f0, 0xAC($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0XAC);
    // 0x803F5D38: mtc1        $at, $f11
    ctx->f_odd[(11 - 1) * 2] = ctx->r1;
    // 0x803F5D3C: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x803F5D40: cvt.d.s     $f8, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f8.d = CVT_D_S(ctx->f0.fl);
    // 0x803F5D44: c.le.d      $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f10.d <= ctx->f8.d;
    // 0x803F5D48: lui         $at, 0x3FC0
    ctx->r1 = S32(0X3FC0 << 16);
    // 0x803F5D4C: bc1f        L_803F5D60
    if (!c1cs) {
        // 0x803F5D50: nop
    
            goto L_803F5D60;
    }
    // 0x803F5D50: nop

    // 0x803F5D54: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x803F5D58: b           L_803F5D90
    // 0x803F5D5C: swc1        $f16, 0xAC($s0)
    MEM_W(0XAC, ctx->r16) = ctx->f16.u32l;
        goto L_803F5D90;
    // 0x803F5D5C: swc1        $f16, 0xAC($s0)
    MEM_W(0XAC, ctx->r16) = ctx->f16.u32l;
L_803F5D60:
    // 0x803F5D60: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x803F5D64: nop

    // 0x803F5D68: c.eq.s      $f18, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f18.fl == ctx->f0.fl;
    // 0x803F5D6C: nop

    // 0x803F5D70: bc1f        L_803F5D90
    if (!c1cs) {
        // 0x803F5D74: nop
    
            goto L_803F5D90;
    }
    // 0x803F5D74: nop

    // 0x803F5D78: bne         $v1, $zero, L_803F5D90
    if (ctx->r3 != 0) {
        // 0x803F5D7C: nop
    
            goto L_803F5D90;
    }
    // 0x803F5D7C: nop

    // 0x803F5D80: lhu         $t9, 0x12($s0)
    ctx->r25 = MEM_HU(ctx->r16, 0X12);
    // 0x803F5D84: nop

    // 0x803F5D88: ori         $t0, $t9, 0x8
    ctx->r8 = ctx->r25 | 0X8;
    // 0x803F5D8C: sh          $t0, 0x12($s0)
    MEM_H(0X12, ctx->r16) = ctx->r8;
L_803F5D90:
    // 0x803F5D90: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x803F5D94: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x803F5D98: jr          $ra
    // 0x803F5D9C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x803F5D9C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void ovl_803F0000_menu_func_803F5C8C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803F5C8C: sh          $zero, 0x0($a2)
    MEM_H(0X0, ctx->r6) = 0;
    // 0x803F5C90: jal         0x803F4160
    // 0x803F5C94: swc1        $f16, 0x8($a2)
    MEM_W(0X8, ctx->r6) = ctx->f16.u32l;
    ovl_803F0000_menu_func_803F4160(rdram, ctx);
        goto after_0;
    // 0x803F5C94: swc1        $f16, 0x8($a2)
    MEM_W(0X8, ctx->r6) = ctx->f16.u32l;
    after_0:
    // 0x803F5C98: andi        $v1, $v0, 0xFFFF
    ctx->r3 = ctx->r2 & 0XFFFF;
    // 0x803F5C9C: bne         $v0, $zero, L_803F5CB0
    if (ctx->r2 != 0) {
        // 0x803F5CA0: sh          $v1, 0x20($sp)
        MEM_H(0X20, ctx->r29) = ctx->r3;
            goto L_803F5CB0;
    }
    // 0x803F5CA0: sh          $v1, 0x20($sp)
    MEM_H(0X20, ctx->r29) = ctx->r3;
    // 0x803F5CA4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x803F5CA8: jal         0x803F5814
    // 0x803F5CAC: sh          $v1, 0x20($sp)
    MEM_H(0X20, ctx->r29) = ctx->r3;
    ovl_803F0000_menu_func_803F5814(rdram, ctx);
        goto after_1;
    // 0x803F5CAC: sh          $v1, 0x20($sp)
    MEM_H(0X20, ctx->r29) = ctx->r3;
    after_1:
L_803F5CB0:
    // 0x803F5CB0: lw          $t3, 0xC8($s0)
    ctx->r11 = MEM_W(ctx->r16, 0XC8);
    // 0x803F5CB4: lhu         $v1, 0x20($sp)
    ctx->r3 = MEM_HU(ctx->r29, 0X20);
    // 0x803F5CB8: lbu         $t4, 0x8AC($t3)
    ctx->r12 = MEM_BU(ctx->r11, 0X8AC);
    // 0x803F5CBC: lui         $at, 0x3FF8
    ctx->r1 = S32(0X3FF8 << 16);
    // 0x803F5CC0: beq         $t4, $zero, L_803F5D34
    if (ctx->r12 == 0) {
        // 0x803F5CC4: or          $v0, $v1, $zero
        ctx->r2 = ctx->r3 | 0;
            goto L_803F5D34;
    }
    // 0x803F5CC4: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    // 0x803F5CC8: lui         $at, 0x803F
    ctx->r1 = S32(0X803F << 16);
    // 0x803F5CCC: lwc1        $f0, 0xAC($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0XAC);
    // 0x803F5CD0: lwc1        $f5, 0x7DC0($at)
    ctx->f_odd[(5 - 1) * 2] = MEM_W(ctx->r1, 0X7DC0);
    // 0x803F5CD4: lwc1        $f4, 0x7DC4($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X7DC4);
    // 0x803F5CD8: cvt.d.s     $f18, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f18.d = CVT_D_S(ctx->f0.fl);
    // 0x803F5CDC: c.le.d      $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f4.d <= ctx->f18.d;
    // 0x803F5CE0: nop

    // 0x803F5CE4: bc1f        L_803F5D00
    if (!c1cs) {
        // 0x803F5CE8: nop
    
            goto L_803F5D00;
    }
    // 0x803F5CE8: nop

    // 0x803F5CEC: lhu         $t5, 0x12($s0)
    ctx->r13 = MEM_HU(ctx->r16, 0X12);
    // 0x803F5CF0: nop

    // 0x803F5CF4: ori         $t6, $t5, 0x80
    ctx->r14 = ctx->r13 | 0X80;
    // 0x803F5CF8: b           L_803F5D90
    // 0x803F5CFC: sh          $t6, 0x12($s0)
    MEM_H(0X12, ctx->r16) = ctx->r14;
        goto L_803F5D90;
    // 0x803F5CFC: sh          $t6, 0x12($s0)
    MEM_H(0X12, ctx->r16) = ctx->r14;
L_803F5D00:
    // 0x803F5D00: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x803F5D04: nop

    // 0x803F5D08: c.eq.s      $f6, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f6.fl == ctx->f0.fl;
    // 0x803F5D0C: nop

    // 0x803F5D10: bc1f        L_803F5D90
    if (!c1cs) {
        // 0x803F5D14: nop
    
            goto L_803F5D90;
    }
    // 0x803F5D14: nop

    // 0x803F5D18: bne         $v1, $zero, L_803F5D90
    if (ctx->r3 != 0) {
        // 0x803F5D1C: nop
    
            goto L_803F5D90;
    }
    // 0x803F5D1C: nop

    // 0x803F5D20: lhu         $t7, 0x12($s0)
    ctx->r15 = MEM_HU(ctx->r16, 0X12);
    // 0x803F5D24: nop

    // 0x803F5D28: ori         $t8, $t7, 0x8
    ctx->r24 = ctx->r15 | 0X8;
    // 0x803F5D2C: b           L_803F5D90
    // 0x803F5D30: sh          $t8, 0x12($s0)
    MEM_H(0X12, ctx->r16) = ctx->r24;
        goto L_803F5D90;
    // 0x803F5D30: sh          $t8, 0x12($s0)
    MEM_H(0X12, ctx->r16) = ctx->r24;
L_803F5D34:
    // 0x803F5D34: lwc1        $f0, 0xAC($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0XAC);
    // 0x803F5D38: mtc1        $at, $f11
    ctx->f_odd[(11 - 1) * 2] = ctx->r1;
    // 0x803F5D3C: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x803F5D40: cvt.d.s     $f8, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f8.d = CVT_D_S(ctx->f0.fl);
    // 0x803F5D44: c.le.d      $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f10.d <= ctx->f8.d;
    // 0x803F5D48: lui         $at, 0x3FC0
    ctx->r1 = S32(0X3FC0 << 16);
    // 0x803F5D4C: bc1f        L_803F5D60
    if (!c1cs) {
        // 0x803F5D50: nop
    
            goto L_803F5D60;
    }
    // 0x803F5D50: nop

    // 0x803F5D54: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x803F5D58: b           L_803F5D90
    // 0x803F5D5C: swc1        $f16, 0xAC($s0)
    MEM_W(0XAC, ctx->r16) = ctx->f16.u32l;
        goto L_803F5D90;
    // 0x803F5D5C: swc1        $f16, 0xAC($s0)
    MEM_W(0XAC, ctx->r16) = ctx->f16.u32l;
L_803F5D60:
    // 0x803F5D60: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x803F5D64: nop

    // 0x803F5D68: c.eq.s      $f18, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f18.fl == ctx->f0.fl;
    // 0x803F5D6C: nop

    // 0x803F5D70: bc1f        L_803F5D90
    if (!c1cs) {
        // 0x803F5D74: nop
    
            goto L_803F5D90;
    }
    // 0x803F5D74: nop

    // 0x803F5D78: bne         $v1, $zero, L_803F5D90
    if (ctx->r3 != 0) {
        // 0x803F5D7C: nop
    
            goto L_803F5D90;
    }
    // 0x803F5D7C: nop

    // 0x803F5D80: lhu         $t9, 0x12($s0)
    ctx->r25 = MEM_HU(ctx->r16, 0X12);
    // 0x803F5D84: nop

    // 0x803F5D88: ori         $t0, $t9, 0x8
    ctx->r8 = ctx->r25 | 0X8;
    // 0x803F5D8C: sh          $t0, 0x12($s0)
    MEM_H(0X12, ctx->r16) = ctx->r8;
L_803F5D90:
    // 0x803F5D90: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x803F5D94: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x803F5D98: jr          $ra
    // 0x803F5D9C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x803F5D9C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void ovl_803F0000_menu_func_803F5DA0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803F5DA0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x803F5DA4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x803F5DA8: lw          $t6, 0xC8($a0)
    ctx->r14 = MEM_W(ctx->r4, 0XC8);
    // 0x803F5DAC: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x803F5DB0: lhu         $t7, 0x8($t6)
    ctx->r15 = MEM_HU(ctx->r14, 0X8);
    // 0x803F5DB4: mtc1        $a2, $f14
    ctx->f14.u32l = ctx->r6;
    // 0x803F5DB8: andi        $t8, $t7, 0x1
    ctx->r24 = ctx->r15 & 0X1;
    // 0x803F5DBC: beq         $t8, $zero, L_803F5DD0
    if (ctx->r24 == 0) {
        // 0x803F5DC0: lui         $a2, 0x803F
        ctx->r6 = S32(0X803F << 16);
            goto L_803F5DD0;
    }
    // 0x803F5DC0: lui         $a2, 0x803F
    ctx->r6 = S32(0X803F << 16);
    // 0x803F5DC4: lui         $a2, 0x803F
    ctx->r6 = S32(0X803F << 16);
    // 0x803F5DC8: b           L_803F5DD4
    // 0x803F5DCC: addiu       $a2, $a2, 0x75E8
    ctx->r6 = ADD32(ctx->r6, 0X75E8);
        goto L_803F5DD4;
    // 0x803F5DCC: addiu       $a2, $a2, 0x75E8
    ctx->r6 = ADD32(ctx->r6, 0X75E8);
L_803F5DD0:
    // 0x803F5DD0: addiu       $a2, $a2, 0x75D8
    ctx->r6 = ADD32(ctx->r6, 0X75D8);
L_803F5DD4:
    // 0x803F5DD4: jal         0x8027A184
    // 0x803F5DD8: nop

    LOOKUP_FUNC(0x8027A184)(rdram, ctx);
        goto after_0;
    // 0x803F5DD8: nop

    after_0:
    // 0x803F5DDC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x803F5DE0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x803F5DE4: jr          $ra
    // 0x803F5DE8: nop

    return;
    // 0x803F5DE8: nop

;}
RECOMP_FUNC void ovl_803F0000_menu_func_803F5DEC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803F5DEC: lui         $t6, 0x8010
    ctx->r14 = S32(0X8010 << 16);
    // 0x803F5DF0: lhu         $t6, 0x522A($t6)
    ctx->r14 = MEM_HU(ctx->r14, 0X522A);
    // 0x803F5DF4: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x803F5DF8: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x803F5DFC: andi        $t7, $t6, 0x80
    ctx->r15 = ctx->r14 & 0X80;
    // 0x803F5E00: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x803F5E04: bne         $t7, $zero, L_803F5E9C
    if (ctx->r15 != 0) {
        // 0x803F5E08: sw          $ra, 0x1C($sp)
        MEM_W(0X1C, ctx->r29) = ctx->r31;
            goto L_803F5E9C;
    }
    // 0x803F5E08: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x803F5E0C: lw          $t8, 0xC8($a0)
    ctx->r24 = MEM_W(ctx->r4, 0XC8);
    // 0x803F5E10: lui         $t0, 0x8009
    ctx->r8 = S32(0X8009 << 16);
    // 0x803F5E14: lh          $t9, 0x8B0($t8)
    ctx->r25 = MEM_H(ctx->r24, 0X8B0);
    // 0x803F5E18: nop

    // 0x803F5E1C: slti        $at, $t9, -0x95
    ctx->r1 = SIGNED(ctx->r25) < -0X95 ? 1 : 0;
    // 0x803F5E20: beq         $at, $zero, L_803F5E9C
    if (ctx->r1 == 0) {
        // 0x803F5E24: nop
    
            goto L_803F5E9C;
    }
    // 0x803F5E24: nop

    // 0x803F5E28: lw          $t0, 0x3B20($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X3B20);
    // 0x803F5E2C: nop

    // 0x803F5E30: lw          $v0, 0x8C($t0)
    ctx->r2 = MEM_W(ctx->r8, 0X8C);
    // 0x803F5E34: nop

    // 0x803F5E38: lw          $a1, 0x4C($v0)
    ctx->r5 = MEM_W(ctx->r2, 0X4C);
    // 0x803F5E3C: lw          $a2, 0x44($v0)
    ctx->r6 = MEM_W(ctx->r2, 0X44);
    // 0x803F5E40: jal         0x803F5DA0
    // 0x803F5E44: nop

    ovl_803F0000_menu_func_803F5DA0(rdram, ctx);
        goto after_0;
    // 0x803F5E44: nop

    after_0:
    // 0x803F5E48: beq         $v0, $zero, L_803F5E9C
    if (ctx->r2 == 0) {
        // 0x803F5E4C: nop
    
            goto L_803F5E9C;
    }
    // 0x803F5E4C: nop

    // 0x803F5E50: lwc1        $f12, 0x8C($s0)
    ctx->f12.u32l = MEM_W(ctx->r16, 0X8C);
    // 0x803F5E54: lwc1        $f14, 0x88($s0)
    ctx->f14.u32l = MEM_W(ctx->r16, 0X88);
    // 0x803F5E58: jal         0x80279308
    // 0x803F5E5C: nop

    LOOKUP_FUNC(0x80279308)(rdram, ctx);
        goto after_1;
    // 0x803F5E5C: nop

    after_1:
    // 0x803F5E60: lui         $at, 0x803F
    ctx->r1 = S32(0X803F << 16);
    // 0x803F5E64: lwc1        $f7, 0x7DC8($at)
    ctx->f_odd[(7 - 1) * 2] = MEM_W(ctx->r1, 0X7DC8);
    // 0x803F5E68: lwc1        $f6, 0x7DCC($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X7DCC);
    // 0x803F5E6C: cvt.d.s     $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f4.d = CVT_D_S(ctx->f0.fl);
    // 0x803F5E70: c.lt.d      $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f4.d < ctx->f6.d;
    // 0x803F5E74: lui         $t1, 0x8009
    ctx->r9 = S32(0X8009 << 16);
    // 0x803F5E78: bc1t        L_803F5E9C
    if (c1cs) {
        // 0x803F5E7C: nop
    
            goto L_803F5E9C;
    }
    // 0x803F5E7C: nop

    // 0x803F5E80: lw          $t1, 0x3B20($t1)
    ctx->r9 = MEM_W(ctx->r9, 0X3B20);
    // 0x803F5E84: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x803F5E88: lw          $a0, 0x8C($t1)
    ctx->r4 = MEM_W(ctx->r9, 0X8C);
    // 0x803F5E8C: jal         0x8027A02C
    // 0x803F5E90: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    LOOKUP_FUNC(0x8027A02C)(rdram, ctx);
        goto after_2;
    // 0x803F5E90: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_2:
    // 0x803F5E94: bne         $v0, $zero, L_803F5EA4
    if (ctx->r2 != 0) {
        // 0x803F5E98: lui         $t2, 0x803F
        ctx->r10 = S32(0X803F << 16);
            goto L_803F5EA4;
    }
    // 0x803F5E98: lui         $t2, 0x803F
    ctx->r10 = S32(0X803F << 16);
L_803F5E9C:
    // 0x803F5E9C: b           L_803F5F08
    // 0x803F5EA0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_803F5F08;
    // 0x803F5EA0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_803F5EA4:
    // 0x803F5EA4: lh          $t2, 0x7E06($t2)
    ctx->r10 = MEM_H(ctx->r10, 0X7E06);
    // 0x803F5EA8: lui         $at, 0x4170
    ctx->r1 = S32(0X4170 << 16);
    // 0x803F5EAC: andi        $t3, $t2, 0x1
    ctx->r11 = ctx->r10 & 0X1;
    // 0x803F5EB0: beq         $t3, $zero, L_803F5EE0
    if (ctx->r11 == 0) {
        // 0x803F5EB4: nop
    
            goto L_803F5EE0;
    }
    // 0x803F5EB4: nop

    // 0x803F5EB8: lui         $at, 0x41A0
    ctx->r1 = S32(0X41A0 << 16);
    // 0x803F5EBC: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x803F5EC0: lwc1        $f8, 0x84($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X84);
    // 0x803F5EC4: nop

    // 0x803F5EC8: c.lt.s      $f8, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f8.fl < ctx->f10.fl;
    // 0x803F5ECC: nop

    // 0x803F5ED0: bc1f        L_803F5F08
    if (!c1cs) {
        // 0x803F5ED4: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_803F5F08;
    }
    // 0x803F5ED4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x803F5ED8: b           L_803F5F08
    // 0x803F5EDC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_803F5F08;
    // 0x803F5EDC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_803F5EE0:
    // 0x803F5EE0: lwc1        $f16, 0x84($s0)
    ctx->f16.u32l = MEM_W(ctx->r16, 0X84);
    // 0x803F5EE4: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x803F5EE8: nop

    // 0x803F5EEC: c.lt.s      $f16, $f18
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f16.fl < ctx->f18.fl;
    // 0x803F5EF0: nop

    // 0x803F5EF4: bc1f        L_803F5F08
    if (!c1cs) {
        // 0x803F5EF8: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_803F5F08;
    }
    // 0x803F5EF8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x803F5EFC: b           L_803F5F08
    // 0x803F5F00: addiu       $v0, $zero, 0x9
    ctx->r2 = ADD32(0, 0X9);
        goto L_803F5F08;
    // 0x803F5F00: addiu       $v0, $zero, 0x9
    ctx->r2 = ADD32(0, 0X9);
    // 0x803F5F04: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_803F5F08:
    // 0x803F5F08: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x803F5F0C: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x803F5F10: jr          $ra
    // 0x803F5F14: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x803F5F14: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void ovl_803F0000_menu_func_803F5E5C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803F5E5C: nop

    // 0x803F5E60: lui         $at, 0x803F
    ctx->r1 = S32(0X803F << 16);
    // 0x803F5E64: lwc1        $f7, 0x7DC8($at)
    ctx->f_odd[(7 - 1) * 2] = MEM_W(ctx->r1, 0X7DC8);
    // 0x803F5E68: lwc1        $f6, 0x7DCC($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X7DCC);
    // 0x803F5E6C: cvt.d.s     $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f4.d = CVT_D_S(ctx->f0.fl);
    // 0x803F5E70: c.lt.d      $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f4.d < ctx->f6.d;
    // 0x803F5E74: lui         $t1, 0x8009
    ctx->r9 = S32(0X8009 << 16);
    // 0x803F5E78: bc1t        L_803F5E9C
    if (c1cs) {
        // 0x803F5E7C: nop
    
            goto L_803F5E9C;
    }
    // 0x803F5E7C: nop

    // 0x803F5E80: lw          $t1, 0x3B20($t1)
    ctx->r9 = MEM_W(ctx->r9, 0X3B20);
    // 0x803F5E84: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x803F5E88: lw          $a0, 0x8C($t1)
    ctx->r4 = MEM_W(ctx->r9, 0X8C);
    // 0x803F5E8C: jal         0x8027A02C
    // 0x803F5E90: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    LOOKUP_FUNC(0x8027A02C)(rdram, ctx);
        goto after_0;
    // 0x803F5E90: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_0:
    // 0x803F5E94: bne         $v0, $zero, L_803F5EA4
    if (ctx->r2 != 0) {
        // 0x803F5E98: lui         $t2, 0x803F
        ctx->r10 = S32(0X803F << 16);
            goto L_803F5EA4;
    }
    // 0x803F5E98: lui         $t2, 0x803F
    ctx->r10 = S32(0X803F << 16);
L_803F5E9C:
    // 0x803F5E9C: b           L_803F5F08
    // 0x803F5EA0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_803F5F08;
    // 0x803F5EA0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_803F5EA4:
    // 0x803F5EA4: lh          $t2, 0x7E06($t2)
    ctx->r10 = MEM_H(ctx->r10, 0X7E06);
    // 0x803F5EA8: lui         $at, 0x4170
    ctx->r1 = S32(0X4170 << 16);
    // 0x803F5EAC: andi        $t3, $t2, 0x1
    ctx->r11 = ctx->r10 & 0X1;
    // 0x803F5EB0: beq         $t3, $zero, L_803F5EE0
    if (ctx->r11 == 0) {
        // 0x803F5EB4: nop
    
            goto L_803F5EE0;
    }
    // 0x803F5EB4: nop

    // 0x803F5EB8: lui         $at, 0x41A0
    ctx->r1 = S32(0X41A0 << 16);
    // 0x803F5EBC: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x803F5EC0: lwc1        $f8, 0x84($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X84);
    // 0x803F5EC4: nop

    // 0x803F5EC8: c.lt.s      $f8, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f8.fl < ctx->f10.fl;
    // 0x803F5ECC: nop

    // 0x803F5ED0: bc1f        L_803F5F08
    if (!c1cs) {
        // 0x803F5ED4: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_803F5F08;
    }
    // 0x803F5ED4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x803F5ED8: b           L_803F5F08
    // 0x803F5EDC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_803F5F08;
    // 0x803F5EDC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_803F5EE0:
    // 0x803F5EE0: lwc1        $f16, 0x84($s0)
    ctx->f16.u32l = MEM_W(ctx->r16, 0X84);
    // 0x803F5EE4: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x803F5EE8: nop

    // 0x803F5EEC: c.lt.s      $f16, $f18
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f16.fl < ctx->f18.fl;
    // 0x803F5EF0: nop

    // 0x803F5EF4: bc1f        L_803F5F08
    if (!c1cs) {
        // 0x803F5EF8: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_803F5F08;
    }
    // 0x803F5EF8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x803F5EFC: b           L_803F5F08
    // 0x803F5F00: addiu       $v0, $zero, 0x9
    ctx->r2 = ADD32(0, 0X9);
        goto L_803F5F08;
    // 0x803F5F00: addiu       $v0, $zero, 0x9
    ctx->r2 = ADD32(0, 0X9);
    // 0x803F5F04: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_803F5F08:
    // 0x803F5F08: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x803F5F0C: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x803F5F10: jr          $ra
    // 0x803F5F14: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x803F5F14: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void ovl_803F0000_menu_func_803F5EF0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803F5EF0: nop

    // 0x803F5EF4: bc1f        L_803F5F08
    if (!c1cs) {
        // 0x803F5EF8: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_803F5F08;
    }
    // 0x803F5EF8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x803F5EFC: b           L_803F5F08
    // 0x803F5F00: addiu       $v0, $zero, 0x9
    ctx->r2 = ADD32(0, 0X9);
        goto L_803F5F08;
    // 0x803F5F00: addiu       $v0, $zero, 0x9
    ctx->r2 = ADD32(0, 0X9);
    // 0x803F5F04: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_803F5F08:
    // 0x803F5F08: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x803F5F0C: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x803F5F10: jr          $ra
    // 0x803F5F14: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x803F5F14: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void ovl_803F0000_menu_func_803F5F18(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803F5F18: addiu       $sp, $sp, -0x68
    ctx->r29 = ADD32(ctx->r29, -0X68);
    // 0x803F5F1C: lui         $t6, 0x8009
    ctx->r14 = S32(0X8009 << 16);
    // 0x803F5F20: lw          $t6, 0x3B20($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X3B20);
    // 0x803F5F24: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x803F5F28: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x803F5F2C: lw          $t7, 0x88($t6)
    ctx->r15 = MEM_W(ctx->r14, 0X88);
    // 0x803F5F30: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x803F5F34: bne         $t7, $zero, L_803F5F44
    if (ctx->r15 != 0) {
        // 0x803F5F38: nop
    
            goto L_803F5F44;
    }
    // 0x803F5F38: nop

    // 0x803F5F3C: b           L_803F6394
    // 0x803F5F40: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_803F6394;
    // 0x803F5F40: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_803F5F44:
    // 0x803F5F44: lw          $a0, 0xC8($s0)
    ctx->r4 = MEM_W(ctx->r16, 0XC8);
    // 0x803F5F48: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x803F5F4C: lw          $t8, 0x96C($a0)
    ctx->r24 = MEM_W(ctx->r4, 0X96C);
    // 0x803F5F50: addiu       $v0, $v0, 0x680
    ctx->r2 = ADD32(ctx->r2, 0X680);
    // 0x803F5F54: bne         $s0, $t8, L_803F5F74
    if (ctx->r16 != ctx->r24) {
        // 0x803F5F58: addiu       $a3, $sp, 0x54
        ctx->r7 = ADD32(ctx->r29, 0X54);
            goto L_803F5F74;
    }
    // 0x803F5F58: addiu       $a3, $sp, 0x54
    ctx->r7 = ADD32(ctx->r29, 0X54);
    // 0x803F5F5C: lh          $t9, 0x964($a0)
    ctx->r25 = MEM_H(ctx->r4, 0X964);
    // 0x803F5F60: nop

    // 0x803F5F64: beq         $t9, $zero, L_803F5F74
    if (ctx->r25 == 0) {
        // 0x803F5F68: nop
    
            goto L_803F5F74;
    }
    // 0x803F5F68: nop

    // 0x803F5F6C: b           L_803F6394
    // 0x803F5F70: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_803F6394;
    // 0x803F5F70: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_803F5F74:
    // 0x803F5F74: lw          $a1, 0x50($v0)
    ctx->r5 = MEM_W(ctx->r2, 0X50);
    // 0x803F5F78: lw          $a2, 0x48($v0)
    ctx->r6 = MEM_W(ctx->r2, 0X48);
    // 0x803F5F7C: jal         0x80272B98
    // 0x803F5F80: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    LOOKUP_FUNC(0x80272B98)(rdram, ctx);
        goto after_0;
    // 0x803F5F80: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_0:
    // 0x803F5F84: lui         $t0, 0x8009
    ctx->r8 = S32(0X8009 << 16);
    // 0x803F5F88: lw          $t0, 0x3B20($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X3B20);
    // 0x803F5F8C: lwc1        $f12, 0x54($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X54);
    // 0x803F5F90: lw          $t1, 0x88($t0)
    ctx->r9 = MEM_W(ctx->r8, 0X88);
    // 0x803F5F94: nop

    // 0x803F5F98: lwc1        $f14, 0x8C($t1)
    ctx->f14.u32l = MEM_W(ctx->r9, 0X8C);
    // 0x803F5F9C: jal         0x80279308
    // 0x803F5FA0: nop

    LOOKUP_FUNC(0x80279308)(rdram, ctx);
        goto after_1;
    // 0x803F5FA0: nop

    after_1:
    // 0x803F5FA4: lui         $t2, 0x8009
    ctx->r10 = S32(0X8009 << 16);
    // 0x803F5FA8: lw          $t2, 0x3B20($t2)
    ctx->r10 = MEM_W(ctx->r10, 0X3B20);
    // 0x803F5FAC: swc1        $f0, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->f0.u32l;
    // 0x803F5FB0: lw          $a0, 0x8C($t2)
    ctx->r4 = MEM_W(ctx->r10, 0X8C);
    // 0x803F5FB4: lui         $a1, 0x40A0
    ctx->r5 = S32(0X40A0 << 16);
    // 0x803F5FB8: jal         0x80272640
    // 0x803F5FBC: addiu       $a2, $sp, 0x3C
    ctx->r6 = ADD32(ctx->r29, 0X3C);
    LOOKUP_FUNC(0x80272640)(rdram, ctx);
        goto after_2;
    // 0x803F5FBC: addiu       $a2, $sp, 0x3C
    ctx->r6 = ADD32(ctx->r29, 0X3C);
    after_2:
    // 0x803F5FC0: lw          $a1, 0x3C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X3C);
    // 0x803F5FC4: lw          $a2, 0x40($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X40);
    // 0x803F5FC8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x803F5FCC: jal         0x80272B98
    // 0x803F5FD0: addiu       $a3, $sp, 0x48
    ctx->r7 = ADD32(ctx->r29, 0X48);
    LOOKUP_FUNC(0x80272B98)(rdram, ctx);
        goto after_3;
    // 0x803F5FD0: addiu       $a3, $sp, 0x48
    ctx->r7 = ADD32(ctx->r29, 0X48);
    after_3:
    // 0x803F5FD4: lui         $t3, 0x8009
    ctx->r11 = S32(0X8009 << 16);
    // 0x803F5FD8: lw          $t3, 0x3B20($t3)
    ctx->r11 = MEM_W(ctx->r11, 0X3B20);
    // 0x803F5FDC: lwc1        $f12, 0x48($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X48);
    // 0x803F5FE0: lw          $t4, 0x88($t3)
    ctx->r12 = MEM_W(ctx->r11, 0X88);
    // 0x803F5FE4: nop

    // 0x803F5FE8: lwc1        $f14, 0x8C($t4)
    ctx->f14.u32l = MEM_W(ctx->r12, 0X8C);
    // 0x803F5FEC: jal         0x80279308
    // 0x803F5FF0: nop

    LOOKUP_FUNC(0x80279308)(rdram, ctx);
        goto after_4;
    // 0x803F5FF0: nop

    after_4:
    // 0x803F5FF4: swc1        $f0, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->f0.u32l;
    // 0x803F5FF8: lwc1        $f4, 0x50($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X50);
    // 0x803F5FFC: lui         $at, 0x3FF0
    ctx->r1 = S32(0X3FF0 << 16);
    // 0x803F6000: mtc1        $at, $f15
    ctx->f_odd[(15 - 1) * 2] = ctx->r1;
    // 0x803F6004: mtc1        $zero, $f14
    ctx->f14.u32l = 0;
    // 0x803F6008: cvt.d.s     $f2, $f4
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f2.d = CVT_D_S(ctx->f4.fl);
    // 0x803F600C: c.lt.d      $f2, $f14
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    c1cs = ctx->f2.d < ctx->f14.d;
    // 0x803F6010: addiu       $a3, $zero, 0xF
    ctx->r7 = ADD32(0, 0XF);
    // 0x803F6014: bc1f        L_803F6024
    if (!c1cs) {
        // 0x803F6018: or          $v1, $zero, $zero
        ctx->r3 = 0 | 0;
            goto L_803F6024;
    }
    // 0x803F6018: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x803F601C: b           L_803F6024
    // 0x803F6020: addiu       $a3, $zero, 0x8
    ctx->r7 = ADD32(0, 0X8);
        goto L_803F6024;
    // 0x803F6020: addiu       $a3, $zero, 0x8
    ctx->r7 = ADD32(0, 0X8);
L_803F6024:
    // 0x803F6024: lwc1        $f12, 0x8C($s0)
    ctx->f12.u32l = MEM_W(ctx->r16, 0X8C);
    // 0x803F6028: c.lt.d      $f2, $f14
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    c1cs = ctx->f2.d < ctx->f14.d;
    // 0x803F602C: swc1        $f12, 0xBC($s0)
    MEM_W(0XBC, ctx->r16) = ctx->f12.u32l;
    // 0x803F6030: bc1f        L_803F60AC
    if (!c1cs) {
        // 0x803F6034: sw          $zero, 0x5C($sp)
        MEM_W(0X5C, ctx->r29) = 0;
            goto L_803F60AC;
    }
    // 0x803F6034: sw          $zero, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = 0;
    // 0x803F6038: lwc1        $f14, 0x54($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X54);
    // 0x803F603C: sw          $zero, 0x60($sp)
    MEM_W(0X60, ctx->r29) = 0;
    // 0x803F6040: jal         0x80279308
    // 0x803F6044: sw          $a3, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r7;
    LOOKUP_FUNC(0x80279308)(rdram, ctx);
        goto after_5;
    // 0x803F6044: sw          $a3, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r7;
    after_5:
    // 0x803F6048: lui         $at, 0x803F
    ctx->r1 = S32(0X803F << 16);
    // 0x803F604C: lwc1        $f3, 0x7DD0($at)
    ctx->f_odd[(3 - 1) * 2] = MEM_W(ctx->r1, 0X7DD0);
    // 0x803F6050: lwc1        $f2, 0x7DD4($at)
    ctx->f2.u32l = MEM_W(ctx->r1, 0X7DD4);
    // 0x803F6054: cvt.d.s     $f6, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f6.d = CVT_D_S(ctx->f0.fl);
    // 0x803F6058: c.lt.d      $f2, $f6
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f2.d < ctx->f6.d;
    // 0x803F605C: lw          $v1, 0x60($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X60);
    // 0x803F6060: lw          $a3, 0x64($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X64);
    // 0x803F6064: bc1f        L_803F6070
    if (!c1cs) {
        // 0x803F6068: nop
    
            goto L_803F6070;
    }
    // 0x803F6068: nop

    // 0x803F606C: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
L_803F6070:
    // 0x803F6070: lwc1        $f12, 0x8C($s0)
    ctx->f12.u32l = MEM_W(ctx->r16, 0X8C);
    // 0x803F6074: lwc1        $f14, 0x48($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X48);
    // 0x803F6078: sw          $a3, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r7;
    // 0x803F607C: jal         0x80279308
    // 0x803F6080: sw          $v1, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r3;
    LOOKUP_FUNC(0x80279308)(rdram, ctx);
        goto after_6;
    // 0x803F6080: sw          $v1, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r3;
    after_6:
    // 0x803F6084: lui         $at, 0x803F
    ctx->r1 = S32(0X803F << 16);
    // 0x803F6088: lwc1        $f3, 0x7DD8($at)
    ctx->f_odd[(3 - 1) * 2] = MEM_W(ctx->r1, 0X7DD8);
    // 0x803F608C: lwc1        $f2, 0x7DDC($at)
    ctx->f2.u32l = MEM_W(ctx->r1, 0X7DDC);
    // 0x803F6090: cvt.d.s     $f8, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f8.d = CVT_D_S(ctx->f0.fl);
    // 0x803F6094: c.lt.d      $f2, $f8
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f2.d < ctx->f8.d;
    // 0x803F6098: lw          $v1, 0x60($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X60);
    // 0x803F609C: lw          $a3, 0x64($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X64);
    // 0x803F60A0: bc1f        L_803F60AC
    if (!c1cs) {
        // 0x803F60A4: addiu       $t5, $zero, 0x1
        ctx->r13 = ADD32(0, 0X1);
            goto L_803F60AC;
    }
    // 0x803F60A4: addiu       $t5, $zero, 0x1
    ctx->r13 = ADD32(0, 0X1);
    // 0x803F60A8: sw          $t5, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r13;
L_803F60AC:
    // 0x803F60AC: lw          $a0, 0xC8($s0)
    ctx->r4 = MEM_W(ctx->r16, 0XC8);
    // 0x803F60B0: lui         $at, 0x803F
    ctx->r1 = S32(0X803F << 16);
    // 0x803F60B4: lhu         $t6, 0x974($a0)
    ctx->r14 = MEM_HU(ctx->r4, 0X974);
    // 0x803F60B8: lwc1        $f0, 0x7DE0($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X7DE0);
    // 0x803F60BC: addiu       $t7, $t6, -0x1
    ctx->r15 = ADD32(ctx->r14, -0X1);
    // 0x803F60C0: sh          $t7, 0x974($a0)
    MEM_H(0X974, ctx->r4) = ctx->r15;
    // 0x803F60C4: lw          $a0, 0xC8($s0)
    ctx->r4 = MEM_W(ctx->r16, 0XC8);
    // 0x803F60C8: nop

    // 0x803F60CC: lhu         $v0, 0x974($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X974);
    // 0x803F60D0: nop

    // 0x803F60D4: slti        $at, $v0, 0x12C
    ctx->r1 = SIGNED(ctx->r2) < 0X12C ? 1 : 0;
    // 0x803F60D8: beq         $at, $zero, L_803F60E8
    if (ctx->r1 == 0) {
        // 0x803F60DC: nop
    
            goto L_803F60E8;
    }
    // 0x803F60DC: nop

    // 0x803F60E0: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x803F60E4: nop

L_803F60E8:
    // 0x803F60E8: bne         $v0, $zero, L_803F6114
    if (ctx->r2 != 0) {
        // 0x803F60EC: nop
    
            goto L_803F6114;
    }
    // 0x803F60EC: nop

    // 0x803F60F0: sw          $v1, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r3;
    // 0x803F60F4: sw          $a3, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r7;
    // 0x803F60F8: jal         0x8005C5CC
    // 0x803F60FC: swc1        $f0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f0.u32l;
    func_8005C5CC(rdram, ctx);
        goto after_7;
    // 0x803F60FC: swc1        $f0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f0.u32l;
    after_7:
    // 0x803F6100: lw          $v1, 0x60($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X60);
    // 0x803F6104: lw          $a3, 0x64($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X64);
    // 0x803F6108: lwc1        $f0, 0x38($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X38);
    // 0x803F610C: lw          $a0, 0xC8($s0)
    ctx->r4 = MEM_W(ctx->r16, 0XC8);
    // 0x803F6110: nop

L_803F6114:
    // 0x803F6114: lh          $t8, 0x8B0($a0)
    ctx->r24 = MEM_H(ctx->r4, 0X8B0);
    // 0x803F6118: lwc1        $f10, 0x50($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X50);
    // 0x803F611C: blez        $t8, L_803F6198
    if (SIGNED(ctx->r24) <= 0) {
        // 0x803F6120: lui         $t9, 0x8009
        ctx->r25 = S32(0X8009 << 16);
            goto L_803F6198;
    }
    // 0x803F6120: lui         $t9, 0x8009
    ctx->r25 = S32(0X8009 << 16);
    // 0x803F6124: c.lt.s      $f0, $f10
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f0.fl < ctx->f10.fl;
    // 0x803F6128: lui         $at, 0x41A0
    ctx->r1 = S32(0X41A0 << 16);
    // 0x803F612C: bc1f        L_803F6160
    if (!c1cs) {
        // 0x803F6130: nop
    
            goto L_803F6160;
    }
    // 0x803F6130: nop

    // 0x803F6134: lwc1        $f16, 0x84($s0)
    ctx->f16.u32l = MEM_W(ctx->r16, 0X84);
    // 0x803F6138: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x803F613C: nop

    // 0x803F6140: c.lt.s      $f16, $f18
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f16.fl < ctx->f18.fl;
    // 0x803F6144: nop

    // 0x803F6148: bc1f        L_803F6160
    if (!c1cs) {
        // 0x803F614C: nop
    
            goto L_803F6160;
    }
    // 0x803F614C: nop

    // 0x803F6150: bne         $v1, $zero, L_803F6160
    if (ctx->r3 != 0) {
        // 0x803F6154: nop
    
            goto L_803F6160;
    }
    // 0x803F6154: nop

    // 0x803F6158: b           L_803F6394
    // 0x803F615C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_803F6394;
    // 0x803F615C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_803F6160:
    // 0x803F6160: mtc1        $a3, $f6
    ctx->f6.u32l = ctx->r7;
    // 0x803F6164: lwc1        $f4, 0x84($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X84);
    // 0x803F6168: bgez        $a3, L_803F6180
    if (SIGNED(ctx->r7) >= 0) {
        // 0x803F616C: cvt.s.w     $f8, $f6
        CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.fl = CVT_S_W(ctx->f6.u32l);
            goto L_803F6180;
    }
    // 0x803F616C: cvt.s.w     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.fl = CVT_S_W(ctx->f6.u32l);
    // 0x803F6170: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x803F6174: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x803F6178: nop

    // 0x803F617C: add.s       $f8, $f8, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f8.fl = ctx->f8.fl + ctx->f10.fl;
L_803F6180:
    // 0x803F6180: c.lt.s      $f4, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f4.fl < ctx->f8.fl;
    // 0x803F6184: nop

    // 0x803F6188: bc1f        L_803F6394
    if (!c1cs) {
        // 0x803F618C: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_803F6394;
    }
    // 0x803F618C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x803F6190: b           L_803F6394
    // 0x803F6194: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
        goto L_803F6394;
    // 0x803F6194: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
L_803F6198:
    // 0x803F6198: lw          $t9, 0x3B20($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X3B20);
    // 0x803F619C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x803F61A0: lw          $v0, 0x8C($t9)
    ctx->r2 = MEM_W(ctx->r25, 0X8C);
    // 0x803F61A4: nop

    // 0x803F61A8: lw          $a1, 0x4C($v0)
    ctx->r5 = MEM_W(ctx->r2, 0X4C);
    // 0x803F61AC: lw          $a2, 0x44($v0)
    ctx->r6 = MEM_W(ctx->r2, 0X44);
    // 0x803F61B0: swc1        $f0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f0.u32l;
    // 0x803F61B4: sw          $a3, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r7;
    // 0x803F61B8: jal         0x80272058
    // 0x803F61BC: sw          $v1, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r3;
    LOOKUP_FUNC(0x80272058)(rdram, ctx);
        goto after_8;
    // 0x803F61BC: sw          $v1, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r3;
    after_8:
    // 0x803F61C0: lw          $v1, 0x60($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X60);
    // 0x803F61C4: lw          $a3, 0x64($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X64);
    // 0x803F61C8: lwc1        $f0, 0x38($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X38);
    // 0x803F61CC: beq         $v0, $zero, L_803F62A4
    if (ctx->r2 == 0) {
        // 0x803F61D0: lui         $v0, 0x803F
        ctx->r2 = S32(0X803F << 16);
            goto L_803F62A4;
    }
    // 0x803F61D0: lui         $v0, 0x803F
    ctx->r2 = S32(0X803F << 16);
    // 0x803F61D4: lh          $v0, 0x7E06($v0)
    ctx->r2 = MEM_H(ctx->r2, 0X7E06);
    // 0x803F61D8: lwc1        $f16, 0x50($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X50);
    // 0x803F61DC: andi        $t0, $v0, 0x1
    ctx->r8 = ctx->r2 & 0X1;
    // 0x803F61E0: beq         $t0, $zero, L_803F6224
    if (ctx->r8 == 0) {
        // 0x803F61E4: andi        $t1, $v0, 0x2
        ctx->r9 = ctx->r2 & 0X2;
            goto L_803F6224;
    }
    // 0x803F61E4: andi        $t1, $v0, 0x2
    ctx->r9 = ctx->r2 & 0X2;
    // 0x803F61E8: c.lt.s      $f0, $f16
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f0.fl < ctx->f16.fl;
    // 0x803F61EC: lui         $at, 0x41A0
    ctx->r1 = S32(0X41A0 << 16);
    // 0x803F61F0: bc1f        L_803F6224
    if (!c1cs) {
        // 0x803F61F4: nop
    
            goto L_803F6224;
    }
    // 0x803F61F4: nop

    // 0x803F61F8: lwc1        $f18, 0x84($s0)
    ctx->f18.u32l = MEM_W(ctx->r16, 0X84);
    // 0x803F61FC: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x803F6200: nop

    // 0x803F6204: c.lt.s      $f18, $f6
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f18.fl < ctx->f6.fl;
    // 0x803F6208: nop

    // 0x803F620C: bc1f        L_803F6224
    if (!c1cs) {
        // 0x803F6210: nop
    
            goto L_803F6224;
    }
    // 0x803F6210: nop

    // 0x803F6214: bne         $v1, $zero, L_803F6224
    if (ctx->r3 != 0) {
        // 0x803F6218: nop
    
            goto L_803F6224;
    }
    // 0x803F6218: nop

    // 0x803F621C: b           L_803F6394
    // 0x803F6220: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_803F6394;
    // 0x803F6220: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_803F6224:
    // 0x803F6224: beq         $t1, $zero, L_803F626C
    if (ctx->r9 == 0) {
        // 0x803F6228: nop
    
            goto L_803F626C;
    }
    // 0x803F6228: nop

    // 0x803F622C: lwc1        $f10, 0x44($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X44);
    // 0x803F6230: lwc1        $f4, 0x4C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X4C);
    // 0x803F6234: c.lt.s      $f0, $f10
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f0.fl < ctx->f10.fl;
    // 0x803F6238: lui         $at, 0x4170
    ctx->r1 = S32(0X4170 << 16);
    // 0x803F623C: bc1f        L_803F626C
    if (!c1cs) {
        // 0x803F6240: nop
    
            goto L_803F626C;
    }
    // 0x803F6240: nop

    // 0x803F6244: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x803F6248: lw          $t2, 0x5C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X5C);
    // 0x803F624C: c.lt.s      $f4, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f4.fl < ctx->f8.fl;
    // 0x803F6250: nop

    // 0x803F6254: bc1f        L_803F626C
    if (!c1cs) {
        // 0x803F6258: nop
    
            goto L_803F626C;
    }
    // 0x803F6258: nop

    // 0x803F625C: bne         $t2, $zero, L_803F626C
    if (ctx->r10 != 0) {
        // 0x803F6260: nop
    
            goto L_803F626C;
    }
    // 0x803F6260: nop

    // 0x803F6264: b           L_803F6394
    // 0x803F6268: addiu       $v0, $zero, 0x9
    ctx->r2 = ADD32(0, 0X9);
        goto L_803F6394;
    // 0x803F6268: addiu       $v0, $zero, 0x9
    ctx->r2 = ADD32(0, 0X9);
L_803F626C:
    // 0x803F626C: mtc1        $a3, $f18
    ctx->f18.u32l = ctx->r7;
    // 0x803F6270: lwc1        $f16, 0x84($s0)
    ctx->f16.u32l = MEM_W(ctx->r16, 0X84);
    // 0x803F6274: bgez        $a3, L_803F628C
    if (SIGNED(ctx->r7) >= 0) {
        // 0x803F6278: cvt.s.w     $f6, $f18
        CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    ctx->f6.fl = CVT_S_W(ctx->f18.u32l);
            goto L_803F628C;
    }
    // 0x803F6278: cvt.s.w     $f6, $f18
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    ctx->f6.fl = CVT_S_W(ctx->f18.u32l);
    // 0x803F627C: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x803F6280: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x803F6284: nop

    // 0x803F6288: add.s       $f6, $f6, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f6.fl = ctx->f6.fl + ctx->f10.fl;
L_803F628C:
    // 0x803F628C: c.lt.s      $f16, $f6
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f16.fl < ctx->f6.fl;
    // 0x803F6290: nop

    // 0x803F6294: bc1f        L_803F6394
    if (!c1cs) {
        // 0x803F6298: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_803F6394;
    }
    // 0x803F6298: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x803F629C: b           L_803F6394
    // 0x803F62A0: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
        goto L_803F6394;
    // 0x803F62A0: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
L_803F62A4:
    // 0x803F62A4: lw          $t3, 0xC8($s0)
    ctx->r11 = MEM_W(ctx->r16, 0XC8);
    // 0x803F62A8: lui         $v0, 0x803F
    ctx->r2 = S32(0X803F << 16);
    // 0x803F62AC: lhu         $t4, 0x8($t3)
    ctx->r12 = MEM_HU(ctx->r11, 0X8);
    // 0x803F62B0: nop

    // 0x803F62B4: andi        $t5, $t4, 0x800
    ctx->r13 = ctx->r12 & 0X800;
    // 0x803F62B8: bne         $t5, $zero, L_803F6358
    if (ctx->r13 != 0) {
        // 0x803F62BC: nop
    
            goto L_803F6358;
    }
    // 0x803F62BC: nop

    // 0x803F62C0: lh          $v0, 0x7E06($v0)
    ctx->r2 = MEM_H(ctx->r2, 0X7E06);
    // 0x803F62C4: lwc1        $f4, 0x50($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X50);
    // 0x803F62C8: andi        $t6, $v0, 0x1
    ctx->r14 = ctx->r2 & 0X1;
    // 0x803F62CC: beq         $t6, $zero, L_803F6310
    if (ctx->r14 == 0) {
        // 0x803F62D0: andi        $t7, $v0, 0x2
        ctx->r15 = ctx->r2 & 0X2;
            goto L_803F6310;
    }
    // 0x803F62D0: andi        $t7, $v0, 0x2
    ctx->r15 = ctx->r2 & 0X2;
    // 0x803F62D4: c.lt.s      $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f0.fl < ctx->f4.fl;
    // 0x803F62D8: lui         $at, 0x41A0
    ctx->r1 = S32(0X41A0 << 16);
    // 0x803F62DC: bc1f        L_803F6310
    if (!c1cs) {
        // 0x803F62E0: nop
    
            goto L_803F6310;
    }
    // 0x803F62E0: nop

    // 0x803F62E4: lwc1        $f8, 0x84($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X84);
    // 0x803F62E8: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x803F62EC: nop

    // 0x803F62F0: c.lt.s      $f8, $f18
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f8.fl < ctx->f18.fl;
    // 0x803F62F4: nop

    // 0x803F62F8: bc1f        L_803F6310
    if (!c1cs) {
        // 0x803F62FC: nop
    
            goto L_803F6310;
    }
    // 0x803F62FC: nop

    // 0x803F6300: bne         $v1, $zero, L_803F6310
    if (ctx->r3 != 0) {
        // 0x803F6304: nop
    
            goto L_803F6310;
    }
    // 0x803F6304: nop

    // 0x803F6308: b           L_803F6394
    // 0x803F630C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_803F6394;
    // 0x803F630C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_803F6310:
    // 0x803F6310: beq         $t7, $zero, L_803F6358
    if (ctx->r15 == 0) {
        // 0x803F6314: nop
    
            goto L_803F6358;
    }
    // 0x803F6314: nop

    // 0x803F6318: lwc1        $f10, 0x44($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X44);
    // 0x803F631C: lwc1        $f16, 0x4C($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X4C);
    // 0x803F6320: c.lt.s      $f0, $f10
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f0.fl < ctx->f10.fl;
    // 0x803F6324: lui         $at, 0x41A0
    ctx->r1 = S32(0X41A0 << 16);
    // 0x803F6328: bc1f        L_803F6358
    if (!c1cs) {
        // 0x803F632C: nop
    
            goto L_803F6358;
    }
    // 0x803F632C: nop

    // 0x803F6330: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x803F6334: lw          $t8, 0x5C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X5C);
    // 0x803F6338: c.lt.s      $f16, $f6
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f16.fl < ctx->f6.fl;
    // 0x803F633C: nop

    // 0x803F6340: bc1f        L_803F6358
    if (!c1cs) {
        // 0x803F6344: nop
    
            goto L_803F6358;
    }
    // 0x803F6344: nop

    // 0x803F6348: bne         $t8, $zero, L_803F6358
    if (ctx->r24 != 0) {
        // 0x803F634C: nop
    
            goto L_803F6358;
    }
    // 0x803F634C: nop

    // 0x803F6350: b           L_803F6394
    // 0x803F6354: addiu       $v0, $zero, 0x9
    ctx->r2 = ADD32(0, 0X9);
        goto L_803F6394;
    // 0x803F6354: addiu       $v0, $zero, 0x9
    ctx->r2 = ADD32(0, 0X9);
L_803F6358:
    // 0x803F6358: mtc1        $a3, $f8
    ctx->f8.u32l = ctx->r7;
    // 0x803F635C: lwc1        $f4, 0x84($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X84);
    // 0x803F6360: bgez        $a3, L_803F6378
    if (SIGNED(ctx->r7) >= 0) {
        // 0x803F6364: cvt.s.w     $f18, $f8
        CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    ctx->f18.fl = CVT_S_W(ctx->f8.u32l);
            goto L_803F6378;
    }
    // 0x803F6364: cvt.s.w     $f18, $f8
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    ctx->f18.fl = CVT_S_W(ctx->f8.u32l);
    // 0x803F6368: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x803F636C: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x803F6370: nop

    // 0x803F6374: add.s       $f18, $f18, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f18.fl = ctx->f18.fl + ctx->f10.fl;
L_803F6378:
    // 0x803F6378: c.lt.s      $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f4.fl < ctx->f18.fl;
    // 0x803F637C: nop

    // 0x803F6380: bc1f        L_803F6394
    if (!c1cs) {
        // 0x803F6384: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_803F6394;
    }
    // 0x803F6384: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x803F6388: b           L_803F6394
    // 0x803F638C: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
        goto L_803F6394;
    // 0x803F638C: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x803F6390: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_803F6394:
    // 0x803F6394: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x803F6398: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x803F639C: jr          $ra
    // 0x803F63A0: addiu       $sp, $sp, 0x68
    ctx->r29 = ADD32(ctx->r29, 0X68);
    return;
    // 0x803F63A0: addiu       $sp, $sp, 0x68
    ctx->r29 = ADD32(ctx->r29, 0X68);
;}
RECOMP_FUNC void ovl_803F0000_menu_func_803F6088(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803F6088: lwc1        $f3, 0x7DD8($at)
    ctx->f_odd[(3 - 1) * 2] = MEM_W(ctx->r1, 0X7DD8);
    // 0x803F608C: lwc1        $f2, 0x7DDC($at)
    ctx->f2.u32l = MEM_W(ctx->r1, 0X7DDC);
    // 0x803F6090: cvt.d.s     $f8, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f8.d = CVT_D_S(ctx->f0.fl);
    // 0x803F6094: c.lt.d      $f2, $f8
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f2.d < ctx->f8.d;
    // 0x803F6098: lw          $v1, 0x60($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X60);
    // 0x803F609C: lw          $a3, 0x64($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X64);
    // 0x803F60A0: bc1f        L_803F60AC
    if (!c1cs) {
        // 0x803F60A4: addiu       $t5, $zero, 0x1
        ctx->r13 = ADD32(0, 0X1);
            goto L_803F60AC;
    }
    // 0x803F60A4: addiu       $t5, $zero, 0x1
    ctx->r13 = ADD32(0, 0X1);
    // 0x803F60A8: sw          $t5, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r13;
L_803F60AC:
    // 0x803F60AC: lw          $a0, 0xC8($s0)
    ctx->r4 = MEM_W(ctx->r16, 0XC8);
    // 0x803F60B0: lui         $at, 0x803F
    ctx->r1 = S32(0X803F << 16);
    // 0x803F60B4: lhu         $t6, 0x974($a0)
    ctx->r14 = MEM_HU(ctx->r4, 0X974);
    // 0x803F60B8: lwc1        $f0, 0x7DE0($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X7DE0);
    // 0x803F60BC: addiu       $t7, $t6, -0x1
    ctx->r15 = ADD32(ctx->r14, -0X1);
    // 0x803F60C0: sh          $t7, 0x974($a0)
    MEM_H(0X974, ctx->r4) = ctx->r15;
    // 0x803F60C4: lw          $a0, 0xC8($s0)
    ctx->r4 = MEM_W(ctx->r16, 0XC8);
    // 0x803F60C8: nop

    // 0x803F60CC: lhu         $v0, 0x974($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X974);
    // 0x803F60D0: nop

    // 0x803F60D4: slti        $at, $v0, 0x12C
    ctx->r1 = SIGNED(ctx->r2) < 0X12C ? 1 : 0;
    // 0x803F60D8: beq         $at, $zero, L_803F60E8
    if (ctx->r1 == 0) {
        // 0x803F60DC: nop
    
            goto L_803F60E8;
    }
    // 0x803F60DC: nop

    // 0x803F60E0: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x803F60E4: nop

L_803F60E8:
    // 0x803F60E8: bne         $v0, $zero, L_803F6114
    if (ctx->r2 != 0) {
        // 0x803F60EC: nop
    
            goto L_803F6114;
    }
    // 0x803F60EC: nop

    // 0x803F60F0: sw          $v1, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r3;
    // 0x803F60F4: sw          $a3, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r7;
    // 0x803F60F8: jal         0x8005C5CC
    // 0x803F60FC: swc1        $f0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f0.u32l;
    func_8005C5CC(rdram, ctx);
        goto after_0;
    // 0x803F60FC: swc1        $f0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f0.u32l;
    after_0:
    // 0x803F6100: lw          $v1, 0x60($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X60);
    // 0x803F6104: lw          $a3, 0x64($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X64);
    // 0x803F6108: lwc1        $f0, 0x38($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X38);
    // 0x803F610C: lw          $a0, 0xC8($s0)
    ctx->r4 = MEM_W(ctx->r16, 0XC8);
    // 0x803F6110: nop

L_803F6114:
    // 0x803F6114: lh          $t8, 0x8B0($a0)
    ctx->r24 = MEM_H(ctx->r4, 0X8B0);
    // 0x803F6118: lwc1        $f10, 0x50($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X50);
    // 0x803F611C: blez        $t8, L_803F6198
    if (SIGNED(ctx->r24) <= 0) {
        // 0x803F6120: lui         $t9, 0x8009
        ctx->r25 = S32(0X8009 << 16);
            goto L_803F6198;
    }
    // 0x803F6120: lui         $t9, 0x8009
    ctx->r25 = S32(0X8009 << 16);
    // 0x803F6124: c.lt.s      $f0, $f10
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f0.fl < ctx->f10.fl;
    // 0x803F6128: lui         $at, 0x41A0
    ctx->r1 = S32(0X41A0 << 16);
    // 0x803F612C: bc1f        L_803F6160
    if (!c1cs) {
        // 0x803F6130: nop
    
            goto L_803F6160;
    }
    // 0x803F6130: nop

    // 0x803F6134: lwc1        $f16, 0x84($s0)
    ctx->f16.u32l = MEM_W(ctx->r16, 0X84);
    // 0x803F6138: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x803F613C: nop

    // 0x803F6140: c.lt.s      $f16, $f18
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f16.fl < ctx->f18.fl;
    // 0x803F6144: nop

    // 0x803F6148: bc1f        L_803F6160
    if (!c1cs) {
        // 0x803F614C: nop
    
            goto L_803F6160;
    }
    // 0x803F614C: nop

    // 0x803F6150: bne         $v1, $zero, L_803F6160
    if (ctx->r3 != 0) {
        // 0x803F6154: nop
    
            goto L_803F6160;
    }
    // 0x803F6154: nop

    // 0x803F6158: b           L_803F6394
    // 0x803F615C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_803F6394;
    // 0x803F615C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_803F6160:
    // 0x803F6160: mtc1        $a3, $f6
    ctx->f6.u32l = ctx->r7;
    // 0x803F6164: lwc1        $f4, 0x84($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X84);
    // 0x803F6168: bgez        $a3, L_803F6180
    if (SIGNED(ctx->r7) >= 0) {
        // 0x803F616C: cvt.s.w     $f8, $f6
        CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.fl = CVT_S_W(ctx->f6.u32l);
            goto L_803F6180;
    }
    // 0x803F616C: cvt.s.w     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.fl = CVT_S_W(ctx->f6.u32l);
    // 0x803F6170: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x803F6174: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x803F6178: nop

    // 0x803F617C: add.s       $f8, $f8, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f8.fl = ctx->f8.fl + ctx->f10.fl;
L_803F6180:
    // 0x803F6180: c.lt.s      $f4, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f4.fl < ctx->f8.fl;
    // 0x803F6184: nop

    // 0x803F6188: bc1f        L_803F6394
    if (!c1cs) {
        // 0x803F618C: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_803F6394;
    }
    // 0x803F618C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x803F6190: b           L_803F6394
    // 0x803F6194: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
        goto L_803F6394;
    // 0x803F6194: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
L_803F6198:
    // 0x803F6198: lw          $t9, 0x3B20($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X3B20);
    // 0x803F619C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x803F61A0: lw          $v0, 0x8C($t9)
    ctx->r2 = MEM_W(ctx->r25, 0X8C);
    // 0x803F61A4: nop

    // 0x803F61A8: lw          $a1, 0x4C($v0)
    ctx->r5 = MEM_W(ctx->r2, 0X4C);
    // 0x803F61AC: lw          $a2, 0x44($v0)
    ctx->r6 = MEM_W(ctx->r2, 0X44);
    // 0x803F61B0: swc1        $f0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f0.u32l;
    // 0x803F61B4: sw          $a3, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r7;
    // 0x803F61B8: jal         0x80272058
    // 0x803F61BC: sw          $v1, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r3;
    LOOKUP_FUNC(0x80272058)(rdram, ctx);
        goto after_1;
    // 0x803F61BC: sw          $v1, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r3;
    after_1:
    // 0x803F61C0: lw          $v1, 0x60($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X60);
    // 0x803F61C4: lw          $a3, 0x64($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X64);
    // 0x803F61C8: lwc1        $f0, 0x38($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X38);
    // 0x803F61CC: beq         $v0, $zero, L_803F62A4
    if (ctx->r2 == 0) {
        // 0x803F61D0: lui         $v0, 0x803F
        ctx->r2 = S32(0X803F << 16);
            goto L_803F62A4;
    }
    // 0x803F61D0: lui         $v0, 0x803F
    ctx->r2 = S32(0X803F << 16);
    // 0x803F61D4: lh          $v0, 0x7E06($v0)
    ctx->r2 = MEM_H(ctx->r2, 0X7E06);
    // 0x803F61D8: lwc1        $f16, 0x50($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X50);
    // 0x803F61DC: andi        $t0, $v0, 0x1
    ctx->r8 = ctx->r2 & 0X1;
    // 0x803F61E0: beq         $t0, $zero, L_803F6224
    if (ctx->r8 == 0) {
        // 0x803F61E4: andi        $t1, $v0, 0x2
        ctx->r9 = ctx->r2 & 0X2;
            goto L_803F6224;
    }
    // 0x803F61E4: andi        $t1, $v0, 0x2
    ctx->r9 = ctx->r2 & 0X2;
    // 0x803F61E8: c.lt.s      $f0, $f16
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f0.fl < ctx->f16.fl;
    // 0x803F61EC: lui         $at, 0x41A0
    ctx->r1 = S32(0X41A0 << 16);
    // 0x803F61F0: bc1f        L_803F6224
    if (!c1cs) {
        // 0x803F61F4: nop
    
            goto L_803F6224;
    }
    // 0x803F61F4: nop

    // 0x803F61F8: lwc1        $f18, 0x84($s0)
    ctx->f18.u32l = MEM_W(ctx->r16, 0X84);
    // 0x803F61FC: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x803F6200: nop

    // 0x803F6204: c.lt.s      $f18, $f6
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f18.fl < ctx->f6.fl;
    // 0x803F6208: nop

    // 0x803F620C: bc1f        L_803F6224
    if (!c1cs) {
        // 0x803F6210: nop
    
            goto L_803F6224;
    }
    // 0x803F6210: nop

    // 0x803F6214: bne         $v1, $zero, L_803F6224
    if (ctx->r3 != 0) {
        // 0x803F6218: nop
    
            goto L_803F6224;
    }
    // 0x803F6218: nop

    // 0x803F621C: b           L_803F6394
    // 0x803F6220: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_803F6394;
    // 0x803F6220: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_803F6224:
    // 0x803F6224: beq         $t1, $zero, L_803F626C
    if (ctx->r9 == 0) {
        // 0x803F6228: nop
    
            goto L_803F626C;
    }
    // 0x803F6228: nop

    // 0x803F622C: lwc1        $f10, 0x44($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X44);
    // 0x803F6230: lwc1        $f4, 0x4C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X4C);
    // 0x803F6234: c.lt.s      $f0, $f10
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f0.fl < ctx->f10.fl;
    // 0x803F6238: lui         $at, 0x4170
    ctx->r1 = S32(0X4170 << 16);
    // 0x803F623C: bc1f        L_803F626C
    if (!c1cs) {
        // 0x803F6240: nop
    
            goto L_803F626C;
    }
    // 0x803F6240: nop

    // 0x803F6244: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x803F6248: lw          $t2, 0x5C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X5C);
    // 0x803F624C: c.lt.s      $f4, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f4.fl < ctx->f8.fl;
    // 0x803F6250: nop

    // 0x803F6254: bc1f        L_803F626C
    if (!c1cs) {
        // 0x803F6258: nop
    
            goto L_803F626C;
    }
    // 0x803F6258: nop

    // 0x803F625C: bne         $t2, $zero, L_803F626C
    if (ctx->r10 != 0) {
        // 0x803F6260: nop
    
            goto L_803F626C;
    }
    // 0x803F6260: nop

    // 0x803F6264: b           L_803F6394
    // 0x803F6268: addiu       $v0, $zero, 0x9
    ctx->r2 = ADD32(0, 0X9);
        goto L_803F6394;
    // 0x803F6268: addiu       $v0, $zero, 0x9
    ctx->r2 = ADD32(0, 0X9);
L_803F626C:
    // 0x803F626C: mtc1        $a3, $f18
    ctx->f18.u32l = ctx->r7;
    // 0x803F6270: lwc1        $f16, 0x84($s0)
    ctx->f16.u32l = MEM_W(ctx->r16, 0X84);
    // 0x803F6274: bgez        $a3, L_803F628C
    if (SIGNED(ctx->r7) >= 0) {
        // 0x803F6278: cvt.s.w     $f6, $f18
        CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    ctx->f6.fl = CVT_S_W(ctx->f18.u32l);
            goto L_803F628C;
    }
    // 0x803F6278: cvt.s.w     $f6, $f18
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    ctx->f6.fl = CVT_S_W(ctx->f18.u32l);
    // 0x803F627C: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x803F6280: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x803F6284: nop

    // 0x803F6288: add.s       $f6, $f6, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f6.fl = ctx->f6.fl + ctx->f10.fl;
L_803F628C:
    // 0x803F628C: c.lt.s      $f16, $f6
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f16.fl < ctx->f6.fl;
    // 0x803F6290: nop

    // 0x803F6294: bc1f        L_803F6394
    if (!c1cs) {
        // 0x803F6298: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_803F6394;
    }
    // 0x803F6298: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x803F629C: b           L_803F6394
    // 0x803F62A0: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
        goto L_803F6394;
    // 0x803F62A0: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
L_803F62A4:
    // 0x803F62A4: lw          $t3, 0xC8($s0)
    ctx->r11 = MEM_W(ctx->r16, 0XC8);
    // 0x803F62A8: lui         $v0, 0x803F
    ctx->r2 = S32(0X803F << 16);
    // 0x803F62AC: lhu         $t4, 0x8($t3)
    ctx->r12 = MEM_HU(ctx->r11, 0X8);
    // 0x803F62B0: nop

    // 0x803F62B4: andi        $t5, $t4, 0x800
    ctx->r13 = ctx->r12 & 0X800;
    // 0x803F62B8: bne         $t5, $zero, L_803F6358
    if (ctx->r13 != 0) {
        // 0x803F62BC: nop
    
            goto L_803F6358;
    }
    // 0x803F62BC: nop

    // 0x803F62C0: lh          $v0, 0x7E06($v0)
    ctx->r2 = MEM_H(ctx->r2, 0X7E06);
    // 0x803F62C4: lwc1        $f4, 0x50($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X50);
    // 0x803F62C8: andi        $t6, $v0, 0x1
    ctx->r14 = ctx->r2 & 0X1;
    // 0x803F62CC: beq         $t6, $zero, L_803F6310
    if (ctx->r14 == 0) {
        // 0x803F62D0: andi        $t7, $v0, 0x2
        ctx->r15 = ctx->r2 & 0X2;
            goto L_803F6310;
    }
    // 0x803F62D0: andi        $t7, $v0, 0x2
    ctx->r15 = ctx->r2 & 0X2;
    // 0x803F62D4: c.lt.s      $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f0.fl < ctx->f4.fl;
    // 0x803F62D8: lui         $at, 0x41A0
    ctx->r1 = S32(0X41A0 << 16);
    // 0x803F62DC: bc1f        L_803F6310
    if (!c1cs) {
        // 0x803F62E0: nop
    
            goto L_803F6310;
    }
    // 0x803F62E0: nop

    // 0x803F62E4: lwc1        $f8, 0x84($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X84);
    // 0x803F62E8: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x803F62EC: nop

    // 0x803F62F0: c.lt.s      $f8, $f18
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f8.fl < ctx->f18.fl;
    // 0x803F62F4: nop

    // 0x803F62F8: bc1f        L_803F6310
    if (!c1cs) {
        // 0x803F62FC: nop
    
            goto L_803F6310;
    }
    // 0x803F62FC: nop

    // 0x803F6300: bne         $v1, $zero, L_803F6310
    if (ctx->r3 != 0) {
        // 0x803F6304: nop
    
            goto L_803F6310;
    }
    // 0x803F6304: nop

    // 0x803F6308: b           L_803F6394
    // 0x803F630C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_803F6394;
    // 0x803F630C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_803F6310:
    // 0x803F6310: beq         $t7, $zero, L_803F6358
    if (ctx->r15 == 0) {
        // 0x803F6314: nop
    
            goto L_803F6358;
    }
    // 0x803F6314: nop

    // 0x803F6318: lwc1        $f10, 0x44($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X44);
    // 0x803F631C: lwc1        $f16, 0x4C($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X4C);
    // 0x803F6320: c.lt.s      $f0, $f10
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f0.fl < ctx->f10.fl;
    // 0x803F6324: lui         $at, 0x41A0
    ctx->r1 = S32(0X41A0 << 16);
    // 0x803F6328: bc1f        L_803F6358
    if (!c1cs) {
        // 0x803F632C: nop
    
            goto L_803F6358;
    }
    // 0x803F632C: nop

    // 0x803F6330: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x803F6334: lw          $t8, 0x5C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X5C);
    // 0x803F6338: c.lt.s      $f16, $f6
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f16.fl < ctx->f6.fl;
    // 0x803F633C: nop

    // 0x803F6340: bc1f        L_803F6358
    if (!c1cs) {
        // 0x803F6344: nop
    
            goto L_803F6358;
    }
    // 0x803F6344: nop

    // 0x803F6348: bne         $t8, $zero, L_803F6358
    if (ctx->r24 != 0) {
        // 0x803F634C: nop
    
            goto L_803F6358;
    }
    // 0x803F634C: nop

    // 0x803F6350: b           L_803F6394
    // 0x803F6354: addiu       $v0, $zero, 0x9
    ctx->r2 = ADD32(0, 0X9);
        goto L_803F6394;
    // 0x803F6354: addiu       $v0, $zero, 0x9
    ctx->r2 = ADD32(0, 0X9);
L_803F6358:
    // 0x803F6358: mtc1        $a3, $f8
    ctx->f8.u32l = ctx->r7;
    // 0x803F635C: lwc1        $f4, 0x84($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X84);
    // 0x803F6360: bgez        $a3, L_803F6378
    if (SIGNED(ctx->r7) >= 0) {
        // 0x803F6364: cvt.s.w     $f18, $f8
        CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    ctx->f18.fl = CVT_S_W(ctx->f8.u32l);
            goto L_803F6378;
    }
    // 0x803F6364: cvt.s.w     $f18, $f8
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    ctx->f18.fl = CVT_S_W(ctx->f8.u32l);
    // 0x803F6368: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x803F636C: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x803F6370: nop

    // 0x803F6374: add.s       $f18, $f18, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f18.fl = ctx->f18.fl + ctx->f10.fl;
L_803F6378:
    // 0x803F6378: c.lt.s      $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f4.fl < ctx->f18.fl;
    // 0x803F637C: nop

    // 0x803F6380: bc1f        L_803F6394
    if (!c1cs) {
        // 0x803F6384: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_803F6394;
    }
    // 0x803F6384: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x803F6388: b           L_803F6394
    // 0x803F638C: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
        goto L_803F6394;
    // 0x803F638C: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x803F6390: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_803F6394:
    // 0x803F6394: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x803F6398: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x803F639C: jr          $ra
    // 0x803F63A0: addiu       $sp, $sp, 0x68
    ctx->r29 = ADD32(ctx->r29, 0X68);
    return;
    // 0x803F63A0: addiu       $sp, $sp, 0x68
    ctx->r29 = ADD32(ctx->r29, 0X68);
;}
RECOMP_FUNC void ovl_803F0000_menu_func_803F6100(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803F6100: lw          $v1, 0x60($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X60);
    // 0x803F6104: lw          $a3, 0x64($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X64);
    // 0x803F6108: lwc1        $f0, 0x38($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X38);
    // 0x803F610C: lw          $a0, 0xC8($s0)
    ctx->r4 = MEM_W(ctx->r16, 0XC8);
    // 0x803F6110: nop

    // 0x803F6114: lh          $t8, 0x8B0($a0)
    ctx->r24 = MEM_H(ctx->r4, 0X8B0);
    // 0x803F6118: lwc1        $f10, 0x50($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X50);
    // 0x803F611C: blez        $t8, L_803F6198
    if (SIGNED(ctx->r24) <= 0) {
        // 0x803F6120: lui         $t9, 0x8009
        ctx->r25 = S32(0X8009 << 16);
            goto L_803F6198;
    }
    // 0x803F6120: lui         $t9, 0x8009
    ctx->r25 = S32(0X8009 << 16);
    // 0x803F6124: c.lt.s      $f0, $f10
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f0.fl < ctx->f10.fl;
    // 0x803F6128: lui         $at, 0x41A0
    ctx->r1 = S32(0X41A0 << 16);
    // 0x803F612C: bc1f        L_803F6160
    if (!c1cs) {
        // 0x803F6130: nop
    
            goto L_803F6160;
    }
    // 0x803F6130: nop

    // 0x803F6134: lwc1        $f16, 0x84($s0)
    ctx->f16.u32l = MEM_W(ctx->r16, 0X84);
    // 0x803F6138: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x803F613C: nop

    // 0x803F6140: c.lt.s      $f16, $f18
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f16.fl < ctx->f18.fl;
    // 0x803F6144: nop

    // 0x803F6148: bc1f        L_803F6160
    if (!c1cs) {
        // 0x803F614C: nop
    
            goto L_803F6160;
    }
    // 0x803F614C: nop

    // 0x803F6150: bne         $v1, $zero, L_803F6160
    if (ctx->r3 != 0) {
        // 0x803F6154: nop
    
            goto L_803F6160;
    }
    // 0x803F6154: nop

    // 0x803F6158: b           L_803F6394
    // 0x803F615C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_803F6394;
    // 0x803F615C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_803F6160:
    // 0x803F6160: mtc1        $a3, $f6
    ctx->f6.u32l = ctx->r7;
    // 0x803F6164: lwc1        $f4, 0x84($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X84);
    // 0x803F6168: bgez        $a3, L_803F6180
    if (SIGNED(ctx->r7) >= 0) {
        // 0x803F616C: cvt.s.w     $f8, $f6
        CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.fl = CVT_S_W(ctx->f6.u32l);
            goto L_803F6180;
    }
    // 0x803F616C: cvt.s.w     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.fl = CVT_S_W(ctx->f6.u32l);
    // 0x803F6170: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x803F6174: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x803F6178: nop

    // 0x803F617C: add.s       $f8, $f8, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f8.fl = ctx->f8.fl + ctx->f10.fl;
L_803F6180:
    // 0x803F6180: c.lt.s      $f4, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f4.fl < ctx->f8.fl;
    // 0x803F6184: nop

    // 0x803F6188: bc1f        L_803F6394
    if (!c1cs) {
        // 0x803F618C: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_803F6394;
    }
    // 0x803F618C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x803F6190: b           L_803F6394
    // 0x803F6194: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
        goto L_803F6394;
    // 0x803F6194: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
L_803F6198:
    // 0x803F6198: lw          $t9, 0x3B20($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X3B20);
    // 0x803F619C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x803F61A0: lw          $v0, 0x8C($t9)
    ctx->r2 = MEM_W(ctx->r25, 0X8C);
    // 0x803F61A4: nop

    // 0x803F61A8: lw          $a1, 0x4C($v0)
    ctx->r5 = MEM_W(ctx->r2, 0X4C);
    // 0x803F61AC: lw          $a2, 0x44($v0)
    ctx->r6 = MEM_W(ctx->r2, 0X44);
    // 0x803F61B0: swc1        $f0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f0.u32l;
    // 0x803F61B4: sw          $a3, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r7;
    // 0x803F61B8: jal         0x80272058
    // 0x803F61BC: sw          $v1, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r3;
    LOOKUP_FUNC(0x80272058)(rdram, ctx);
        goto after_0;
    // 0x803F61BC: sw          $v1, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r3;
    after_0:
    // 0x803F61C0: lw          $v1, 0x60($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X60);
    // 0x803F61C4: lw          $a3, 0x64($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X64);
    // 0x803F61C8: lwc1        $f0, 0x38($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X38);
    // 0x803F61CC: beq         $v0, $zero, L_803F62A4
    if (ctx->r2 == 0) {
        // 0x803F61D0: lui         $v0, 0x803F
        ctx->r2 = S32(0X803F << 16);
            goto L_803F62A4;
    }
    // 0x803F61D0: lui         $v0, 0x803F
    ctx->r2 = S32(0X803F << 16);
    // 0x803F61D4: lh          $v0, 0x7E06($v0)
    ctx->r2 = MEM_H(ctx->r2, 0X7E06);
    // 0x803F61D8: lwc1        $f16, 0x50($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X50);
    // 0x803F61DC: andi        $t0, $v0, 0x1
    ctx->r8 = ctx->r2 & 0X1;
    // 0x803F61E0: beq         $t0, $zero, L_803F6224
    if (ctx->r8 == 0) {
        // 0x803F61E4: andi        $t1, $v0, 0x2
        ctx->r9 = ctx->r2 & 0X2;
            goto L_803F6224;
    }
    // 0x803F61E4: andi        $t1, $v0, 0x2
    ctx->r9 = ctx->r2 & 0X2;
    // 0x803F61E8: c.lt.s      $f0, $f16
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f0.fl < ctx->f16.fl;
    // 0x803F61EC: lui         $at, 0x41A0
    ctx->r1 = S32(0X41A0 << 16);
    // 0x803F61F0: bc1f        L_803F6224
    if (!c1cs) {
        // 0x803F61F4: nop
    
            goto L_803F6224;
    }
    // 0x803F61F4: nop

    // 0x803F61F8: lwc1        $f18, 0x84($s0)
    ctx->f18.u32l = MEM_W(ctx->r16, 0X84);
    // 0x803F61FC: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x803F6200: nop

    // 0x803F6204: c.lt.s      $f18, $f6
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f18.fl < ctx->f6.fl;
    // 0x803F6208: nop

    // 0x803F620C: bc1f        L_803F6224
    if (!c1cs) {
        // 0x803F6210: nop
    
            goto L_803F6224;
    }
    // 0x803F6210: nop

    // 0x803F6214: bne         $v1, $zero, L_803F6224
    if (ctx->r3 != 0) {
        // 0x803F6218: nop
    
            goto L_803F6224;
    }
    // 0x803F6218: nop

    // 0x803F621C: b           L_803F6394
    // 0x803F6220: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_803F6394;
    // 0x803F6220: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_803F6224:
    // 0x803F6224: beq         $t1, $zero, L_803F626C
    if (ctx->r9 == 0) {
        // 0x803F6228: nop
    
            goto L_803F626C;
    }
    // 0x803F6228: nop

    // 0x803F622C: lwc1        $f10, 0x44($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X44);
    // 0x803F6230: lwc1        $f4, 0x4C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X4C);
    // 0x803F6234: c.lt.s      $f0, $f10
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f0.fl < ctx->f10.fl;
    // 0x803F6238: lui         $at, 0x4170
    ctx->r1 = S32(0X4170 << 16);
    // 0x803F623C: bc1f        L_803F626C
    if (!c1cs) {
        // 0x803F6240: nop
    
            goto L_803F626C;
    }
    // 0x803F6240: nop

    // 0x803F6244: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x803F6248: lw          $t2, 0x5C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X5C);
    // 0x803F624C: c.lt.s      $f4, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f4.fl < ctx->f8.fl;
    // 0x803F6250: nop

    // 0x803F6254: bc1f        L_803F626C
    if (!c1cs) {
        // 0x803F6258: nop
    
            goto L_803F626C;
    }
    // 0x803F6258: nop

    // 0x803F625C: bne         $t2, $zero, L_803F626C
    if (ctx->r10 != 0) {
        // 0x803F6260: nop
    
            goto L_803F626C;
    }
    // 0x803F6260: nop

    // 0x803F6264: b           L_803F6394
    // 0x803F6268: addiu       $v0, $zero, 0x9
    ctx->r2 = ADD32(0, 0X9);
        goto L_803F6394;
    // 0x803F6268: addiu       $v0, $zero, 0x9
    ctx->r2 = ADD32(0, 0X9);
L_803F626C:
    // 0x803F626C: mtc1        $a3, $f18
    ctx->f18.u32l = ctx->r7;
    // 0x803F6270: lwc1        $f16, 0x84($s0)
    ctx->f16.u32l = MEM_W(ctx->r16, 0X84);
    // 0x803F6274: bgez        $a3, L_803F628C
    if (SIGNED(ctx->r7) >= 0) {
        // 0x803F6278: cvt.s.w     $f6, $f18
        CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    ctx->f6.fl = CVT_S_W(ctx->f18.u32l);
            goto L_803F628C;
    }
    // 0x803F6278: cvt.s.w     $f6, $f18
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    ctx->f6.fl = CVT_S_W(ctx->f18.u32l);
    // 0x803F627C: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x803F6280: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x803F6284: nop

    // 0x803F6288: add.s       $f6, $f6, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f6.fl = ctx->f6.fl + ctx->f10.fl;
L_803F628C:
    // 0x803F628C: c.lt.s      $f16, $f6
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f16.fl < ctx->f6.fl;
    // 0x803F6290: nop

    // 0x803F6294: bc1f        L_803F6394
    if (!c1cs) {
        // 0x803F6298: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_803F6394;
    }
    // 0x803F6298: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x803F629C: b           L_803F6394
    // 0x803F62A0: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
        goto L_803F6394;
    // 0x803F62A0: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
L_803F62A4:
    // 0x803F62A4: lw          $t3, 0xC8($s0)
    ctx->r11 = MEM_W(ctx->r16, 0XC8);
    // 0x803F62A8: lui         $v0, 0x803F
    ctx->r2 = S32(0X803F << 16);
    // 0x803F62AC: lhu         $t4, 0x8($t3)
    ctx->r12 = MEM_HU(ctx->r11, 0X8);
    // 0x803F62B0: nop

    // 0x803F62B4: andi        $t5, $t4, 0x800
    ctx->r13 = ctx->r12 & 0X800;
    // 0x803F62B8: bne         $t5, $zero, L_803F6358
    if (ctx->r13 != 0) {
        // 0x803F62BC: nop
    
            goto L_803F6358;
    }
    // 0x803F62BC: nop

    // 0x803F62C0: lh          $v0, 0x7E06($v0)
    ctx->r2 = MEM_H(ctx->r2, 0X7E06);
    // 0x803F62C4: lwc1        $f4, 0x50($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X50);
    // 0x803F62C8: andi        $t6, $v0, 0x1
    ctx->r14 = ctx->r2 & 0X1;
    // 0x803F62CC: beq         $t6, $zero, L_803F6310
    if (ctx->r14 == 0) {
        // 0x803F62D0: andi        $t7, $v0, 0x2
        ctx->r15 = ctx->r2 & 0X2;
            goto L_803F6310;
    }
    // 0x803F62D0: andi        $t7, $v0, 0x2
    ctx->r15 = ctx->r2 & 0X2;
    // 0x803F62D4: c.lt.s      $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f0.fl < ctx->f4.fl;
    // 0x803F62D8: lui         $at, 0x41A0
    ctx->r1 = S32(0X41A0 << 16);
    // 0x803F62DC: bc1f        L_803F6310
    if (!c1cs) {
        // 0x803F62E0: nop
    
            goto L_803F6310;
    }
    // 0x803F62E0: nop

    // 0x803F62E4: lwc1        $f8, 0x84($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X84);
    // 0x803F62E8: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x803F62EC: nop

    // 0x803F62F0: c.lt.s      $f8, $f18
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f8.fl < ctx->f18.fl;
    // 0x803F62F4: nop

    // 0x803F62F8: bc1f        L_803F6310
    if (!c1cs) {
        // 0x803F62FC: nop
    
            goto L_803F6310;
    }
    // 0x803F62FC: nop

    // 0x803F6300: bne         $v1, $zero, L_803F6310
    if (ctx->r3 != 0) {
        // 0x803F6304: nop
    
            goto L_803F6310;
    }
    // 0x803F6304: nop

    // 0x803F6308: b           L_803F6394
    // 0x803F630C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_803F6394;
    // 0x803F630C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_803F6310:
    // 0x803F6310: beq         $t7, $zero, L_803F6358
    if (ctx->r15 == 0) {
        // 0x803F6314: nop
    
            goto L_803F6358;
    }
    // 0x803F6314: nop

    // 0x803F6318: lwc1        $f10, 0x44($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X44);
    // 0x803F631C: lwc1        $f16, 0x4C($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X4C);
    // 0x803F6320: c.lt.s      $f0, $f10
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f0.fl < ctx->f10.fl;
    // 0x803F6324: lui         $at, 0x41A0
    ctx->r1 = S32(0X41A0 << 16);
    // 0x803F6328: bc1f        L_803F6358
    if (!c1cs) {
        // 0x803F632C: nop
    
            goto L_803F6358;
    }
    // 0x803F632C: nop

    // 0x803F6330: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x803F6334: lw          $t8, 0x5C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X5C);
    // 0x803F6338: c.lt.s      $f16, $f6
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f16.fl < ctx->f6.fl;
    // 0x803F633C: nop

    // 0x803F6340: bc1f        L_803F6358
    if (!c1cs) {
        // 0x803F6344: nop
    
            goto L_803F6358;
    }
    // 0x803F6344: nop

    // 0x803F6348: bne         $t8, $zero, L_803F6358
    if (ctx->r24 != 0) {
        // 0x803F634C: nop
    
            goto L_803F6358;
    }
    // 0x803F634C: nop

    // 0x803F6350: b           L_803F6394
    // 0x803F6354: addiu       $v0, $zero, 0x9
    ctx->r2 = ADD32(0, 0X9);
        goto L_803F6394;
    // 0x803F6354: addiu       $v0, $zero, 0x9
    ctx->r2 = ADD32(0, 0X9);
L_803F6358:
    // 0x803F6358: mtc1        $a3, $f8
    ctx->f8.u32l = ctx->r7;
    // 0x803F635C: lwc1        $f4, 0x84($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X84);
    // 0x803F6360: bgez        $a3, L_803F6378
    if (SIGNED(ctx->r7) >= 0) {
        // 0x803F6364: cvt.s.w     $f18, $f8
        CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    ctx->f18.fl = CVT_S_W(ctx->f8.u32l);
            goto L_803F6378;
    }
    // 0x803F6364: cvt.s.w     $f18, $f8
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    ctx->f18.fl = CVT_S_W(ctx->f8.u32l);
    // 0x803F6368: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x803F636C: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x803F6370: nop

    // 0x803F6374: add.s       $f18, $f18, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f18.fl = ctx->f18.fl + ctx->f10.fl;
L_803F6378:
    // 0x803F6378: c.lt.s      $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f4.fl < ctx->f18.fl;
    // 0x803F637C: nop

    // 0x803F6380: bc1f        L_803F6394
    if (!c1cs) {
        // 0x803F6384: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_803F6394;
    }
    // 0x803F6384: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x803F6388: b           L_803F6394
    // 0x803F638C: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
        goto L_803F6394;
    // 0x803F638C: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x803F6390: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_803F6394:
    // 0x803F6394: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x803F6398: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x803F639C: jr          $ra
    // 0x803F63A0: addiu       $sp, $sp, 0x68
    ctx->r29 = ADD32(ctx->r29, 0X68);
    return;
    // 0x803F63A0: addiu       $sp, $sp, 0x68
    ctx->r29 = ADD32(ctx->r29, 0X68);
;}
RECOMP_FUNC void ovl_803F0000_menu_func_803F6210(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803F6210: nop

    // 0x803F6214: bne         $v1, $zero, L_803F6224
    if (ctx->r3 != 0) {
        // 0x803F6218: nop
    
            goto L_803F6224;
    }
    // 0x803F6218: nop

    // 0x803F621C: b           L_803F6394
    // 0x803F6220: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_803F6394;
    // 0x803F6220: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_803F6224:
    // 0x803F6224: beq         $t1, $zero, L_803F626C
    if (ctx->r9 == 0) {
        // 0x803F6228: nop
    
            goto L_803F626C;
    }
    // 0x803F6228: nop

    // 0x803F622C: lwc1        $f10, 0x44($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X44);
    // 0x803F6230: lwc1        $f4, 0x4C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X4C);
    // 0x803F6234: c.lt.s      $f0, $f10
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f0.fl < ctx->f10.fl;
    // 0x803F6238: lui         $at, 0x4170
    ctx->r1 = S32(0X4170 << 16);
    // 0x803F623C: bc1f        L_803F626C
    if (!c1cs) {
        // 0x803F6240: nop
    
            goto L_803F626C;
    }
    // 0x803F6240: nop

    // 0x803F6244: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x803F6248: lw          $t2, 0x5C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X5C);
    // 0x803F624C: c.lt.s      $f4, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f4.fl < ctx->f8.fl;
    // 0x803F6250: nop

    // 0x803F6254: bc1f        L_803F626C
    if (!c1cs) {
        // 0x803F6258: nop
    
            goto L_803F626C;
    }
    // 0x803F6258: nop

    // 0x803F625C: bne         $t2, $zero, L_803F626C
    if (ctx->r10 != 0) {
        // 0x803F6260: nop
    
            goto L_803F626C;
    }
    // 0x803F6260: nop

    // 0x803F6264: b           L_803F6394
    // 0x803F6268: addiu       $v0, $zero, 0x9
    ctx->r2 = ADD32(0, 0X9);
        goto L_803F6394;
    // 0x803F6268: addiu       $v0, $zero, 0x9
    ctx->r2 = ADD32(0, 0X9);
L_803F626C:
    // 0x803F626C: mtc1        $a3, $f18
    ctx->f18.u32l = ctx->r7;
    // 0x803F6270: lwc1        $f16, 0x84($s0)
    ctx->f16.u32l = MEM_W(ctx->r16, 0X84);
    // 0x803F6274: bgez        $a3, L_803F628C
    if (SIGNED(ctx->r7) >= 0) {
        // 0x803F6278: cvt.s.w     $f6, $f18
        CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    ctx->f6.fl = CVT_S_W(ctx->f18.u32l);
            goto L_803F628C;
    }
    // 0x803F6278: cvt.s.w     $f6, $f18
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    ctx->f6.fl = CVT_S_W(ctx->f18.u32l);
    // 0x803F627C: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x803F6280: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x803F6284: nop

    // 0x803F6288: add.s       $f6, $f6, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f6.fl = ctx->f6.fl + ctx->f10.fl;
L_803F628C:
    // 0x803F628C: c.lt.s      $f16, $f6
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f16.fl < ctx->f6.fl;
    // 0x803F6290: nop

    // 0x803F6294: bc1f        L_803F6394
    if (!c1cs) {
        // 0x803F6298: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_803F6394;
    }
    // 0x803F6298: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x803F629C: b           L_803F6394
    // 0x803F62A0: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
        goto L_803F6394;
    // 0x803F62A0: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x803F62A4: lw          $t3, 0xC8($s0)
    ctx->r11 = MEM_W(ctx->r16, 0XC8);
    // 0x803F62A8: lui         $v0, 0x803F
    ctx->r2 = S32(0X803F << 16);
    // 0x803F62AC: lhu         $t4, 0x8($t3)
    ctx->r12 = MEM_HU(ctx->r11, 0X8);
    // 0x803F62B0: nop

    // 0x803F62B4: andi        $t5, $t4, 0x800
    ctx->r13 = ctx->r12 & 0X800;
    // 0x803F62B8: bne         $t5, $zero, L_803F6358
    if (ctx->r13 != 0) {
        // 0x803F62BC: nop
    
            goto L_803F6358;
    }
    // 0x803F62BC: nop

    // 0x803F62C0: lh          $v0, 0x7E06($v0)
    ctx->r2 = MEM_H(ctx->r2, 0X7E06);
    // 0x803F62C4: lwc1        $f4, 0x50($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X50);
    // 0x803F62C8: andi        $t6, $v0, 0x1
    ctx->r14 = ctx->r2 & 0X1;
    // 0x803F62CC: beq         $t6, $zero, L_803F6310
    if (ctx->r14 == 0) {
        // 0x803F62D0: andi        $t7, $v0, 0x2
        ctx->r15 = ctx->r2 & 0X2;
            goto L_803F6310;
    }
    // 0x803F62D0: andi        $t7, $v0, 0x2
    ctx->r15 = ctx->r2 & 0X2;
    // 0x803F62D4: c.lt.s      $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f0.fl < ctx->f4.fl;
    // 0x803F62D8: lui         $at, 0x41A0
    ctx->r1 = S32(0X41A0 << 16);
    // 0x803F62DC: bc1f        L_803F6310
    if (!c1cs) {
        // 0x803F62E0: nop
    
            goto L_803F6310;
    }
    // 0x803F62E0: nop

    // 0x803F62E4: lwc1        $f8, 0x84($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X84);
    // 0x803F62E8: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x803F62EC: nop

    // 0x803F62F0: c.lt.s      $f8, $f18
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f8.fl < ctx->f18.fl;
    // 0x803F62F4: nop

    // 0x803F62F8: bc1f        L_803F6310
    if (!c1cs) {
        // 0x803F62FC: nop
    
            goto L_803F6310;
    }
    // 0x803F62FC: nop

    // 0x803F6300: bne         $v1, $zero, L_803F6310
    if (ctx->r3 != 0) {
        // 0x803F6304: nop
    
            goto L_803F6310;
    }
    // 0x803F6304: nop

    // 0x803F6308: b           L_803F6394
    // 0x803F630C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_803F6394;
    // 0x803F630C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_803F6310:
    // 0x803F6310: beq         $t7, $zero, L_803F6358
    if (ctx->r15 == 0) {
        // 0x803F6314: nop
    
            goto L_803F6358;
    }
    // 0x803F6314: nop

    // 0x803F6318: lwc1        $f10, 0x44($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X44);
    // 0x803F631C: lwc1        $f16, 0x4C($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X4C);
    // 0x803F6320: c.lt.s      $f0, $f10
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f0.fl < ctx->f10.fl;
    // 0x803F6324: lui         $at, 0x41A0
    ctx->r1 = S32(0X41A0 << 16);
    // 0x803F6328: bc1f        L_803F6358
    if (!c1cs) {
        // 0x803F632C: nop
    
            goto L_803F6358;
    }
    // 0x803F632C: nop

    // 0x803F6330: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x803F6334: lw          $t8, 0x5C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X5C);
    // 0x803F6338: c.lt.s      $f16, $f6
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f16.fl < ctx->f6.fl;
    // 0x803F633C: nop

    // 0x803F6340: bc1f        L_803F6358
    if (!c1cs) {
        // 0x803F6344: nop
    
            goto L_803F6358;
    }
    // 0x803F6344: nop

    // 0x803F6348: bne         $t8, $zero, L_803F6358
    if (ctx->r24 != 0) {
        // 0x803F634C: nop
    
            goto L_803F6358;
    }
    // 0x803F634C: nop

    // 0x803F6350: b           L_803F6394
    // 0x803F6354: addiu       $v0, $zero, 0x9
    ctx->r2 = ADD32(0, 0X9);
        goto L_803F6394;
    // 0x803F6354: addiu       $v0, $zero, 0x9
    ctx->r2 = ADD32(0, 0X9);
L_803F6358:
    // 0x803F6358: mtc1        $a3, $f8
    ctx->f8.u32l = ctx->r7;
    // 0x803F635C: lwc1        $f4, 0x84($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X84);
    // 0x803F6360: bgez        $a3, L_803F6378
    if (SIGNED(ctx->r7) >= 0) {
        // 0x803F6364: cvt.s.w     $f18, $f8
        CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    ctx->f18.fl = CVT_S_W(ctx->f8.u32l);
            goto L_803F6378;
    }
    // 0x803F6364: cvt.s.w     $f18, $f8
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    ctx->f18.fl = CVT_S_W(ctx->f8.u32l);
    // 0x803F6368: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x803F636C: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x803F6370: nop

    // 0x803F6374: add.s       $f18, $f18, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f18.fl = ctx->f18.fl + ctx->f10.fl;
L_803F6378:
    // 0x803F6378: c.lt.s      $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f4.fl < ctx->f18.fl;
    // 0x803F637C: nop

    // 0x803F6380: bc1f        L_803F6394
    if (!c1cs) {
        // 0x803F6384: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_803F6394;
    }
    // 0x803F6384: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x803F6388: b           L_803F6394
    // 0x803F638C: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
        goto L_803F6394;
    // 0x803F638C: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x803F6390: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_803F6394:
    // 0x803F6394: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x803F6398: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x803F639C: jr          $ra
    // 0x803F63A0: addiu       $sp, $sp, 0x68
    ctx->r29 = ADD32(ctx->r29, 0X68);
    return;
    // 0x803F63A0: addiu       $sp, $sp, 0x68
    ctx->r29 = ADD32(ctx->r29, 0X68);
;}
RECOMP_FUNC void ovl_803F0000_menu_func_803F6324(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803F6324: lui         $at, 0x41A0
    ctx->r1 = S32(0X41A0 << 16);
    // 0x803F6328: bc1f        L_803F6358
    if (!c1cs) {
        // 0x803F632C: nop
    
            goto L_803F6358;
    }
    // 0x803F632C: nop

    // 0x803F6330: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x803F6334: lw          $t8, 0x5C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X5C);
    // 0x803F6338: c.lt.s      $f16, $f6
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f16.fl < ctx->f6.fl;
    // 0x803F633C: nop

    // 0x803F6340: bc1f        L_803F6358
    if (!c1cs) {
        // 0x803F6344: nop
    
            goto L_803F6358;
    }
    // 0x803F6344: nop

    // 0x803F6348: bne         $t8, $zero, L_803F6358
    if (ctx->r24 != 0) {
        // 0x803F634C: nop
    
            goto L_803F6358;
    }
    // 0x803F634C: nop

    // 0x803F6350: b           L_803F6394
    // 0x803F6354: addiu       $v0, $zero, 0x9
    ctx->r2 = ADD32(0, 0X9);
        goto L_803F6394;
    // 0x803F6354: addiu       $v0, $zero, 0x9
    ctx->r2 = ADD32(0, 0X9);
L_803F6358:
    // 0x803F6358: mtc1        $a3, $f8
    ctx->f8.u32l = ctx->r7;
    // 0x803F635C: lwc1        $f4, 0x84($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X84);
    // 0x803F6360: bgez        $a3, L_803F6378
    if (SIGNED(ctx->r7) >= 0) {
        // 0x803F6364: cvt.s.w     $f18, $f8
        CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    ctx->f18.fl = CVT_S_W(ctx->f8.u32l);
            goto L_803F6378;
    }
    // 0x803F6364: cvt.s.w     $f18, $f8
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    ctx->f18.fl = CVT_S_W(ctx->f8.u32l);
    // 0x803F6368: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x803F636C: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x803F6370: nop

    // 0x803F6374: add.s       $f18, $f18, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f18.fl = ctx->f18.fl + ctx->f10.fl;
L_803F6378:
    // 0x803F6378: c.lt.s      $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f4.fl < ctx->f18.fl;
    // 0x803F637C: nop

    // 0x803F6380: bc1f        L_803F6394
    if (!c1cs) {
        // 0x803F6384: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_803F6394;
    }
    // 0x803F6384: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x803F6388: b           L_803F6394
    // 0x803F638C: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
        goto L_803F6394;
    // 0x803F638C: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x803F6390: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_803F6394:
    // 0x803F6394: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x803F6398: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x803F639C: jr          $ra
    // 0x803F63A0: addiu       $sp, $sp, 0x68
    ctx->r29 = ADD32(ctx->r29, 0X68);
    return;
    // 0x803F63A0: addiu       $sp, $sp, 0x68
    ctx->r29 = ADD32(ctx->r29, 0X68);
;}
