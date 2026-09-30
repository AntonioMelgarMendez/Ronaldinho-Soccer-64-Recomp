#include "iss64_recomp.h"
#include "funcs.h"

RECOMP_FUNC void ovl_8024B800_func_8025D3E8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8025D3E8: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8025D3EC: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8025D3F0: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8025D3F4: lhu         $v1, 0x10($a0)
    ctx->r3 = MEM_HU(ctx->r4, 0X10);
    // 0x8025D3F8: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x8025D3FC: beq         $v1, $zero, L_8025D418
    if (ctx->r3 == 0) {
        // 0x8025D400: or          $v0, $v1, $zero
        ctx->r2 = ctx->r3 | 0;
            goto L_8025D418;
    }
    // 0x8025D400: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    // 0x8025D404: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8025D408: beq         $v0, $at, L_8025D4A0
    if (ctx->r2 == ctx->r1) {
        // 0x8025D40C: nop
    
            goto L_8025D4A0;
    }
    // 0x8025D40C: nop

    // 0x8025D410: b           L_8025D504
    // 0x8025D414: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_8025D504;
    // 0x8025D414: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_8025D418:
    // 0x8025D418: lhu         $t7, 0x18($s0)
    ctx->r15 = MEM_HU(ctx->r16, 0X18);
    // 0x8025D41C: addiu       $t6, $v1, 0x1
    ctx->r14 = ADD32(ctx->r3, 0X1);
    // 0x8025D420: ori         $t8, $t7, 0x2
    ctx->r24 = ctx->r15 | 0X2;
    // 0x8025D424: sh          $t6, 0x10($s0)
    MEM_H(0X10, ctx->r16) = ctx->r14;
    // 0x8025D428: sh          $t8, 0x18($s0)
    MEM_H(0X18, ctx->r16) = ctx->r24;
    // 0x8025D42C: jal         0x802732F4
    // 0x8025D430: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_8024B800_func_802732F4(rdram, ctx);
        goto after_0;
    // 0x8025D430: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_0:
    // 0x8025D434: lwc1        $f12, 0x8C($s0)
    ctx->f12.u32l = MEM_W(ctx->r16, 0X8C);
    // 0x8025D438: lwc1        $f14, 0xE8($s0)
    ctx->f14.u32l = MEM_W(ctx->r16, 0XE8);
    // 0x8025D43C: jal         0x8027924C
    // 0x8025D440: nop

    ovl_8024B800_func_8027924C(rdram, ctx);
        goto after_1;
    // 0x8025D440: nop

    after_1:
    // 0x8025D444: swc1        $f0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f0.u32l;
    // 0x8025D448: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8025D44C: addiu       $a1, $zero, 0xAC
    ctx->r5 = ADD32(0, 0XAC);
    // 0x8025D450: jal         0x80272D3C
    // 0x8025D454: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    ovl_8024B800_func_80272D3C(rdram, ctx);
        goto after_2;
    // 0x8025D454: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_2:
    // 0x8025D458: jal         0x802732F4
    // 0x8025D45C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_8024B800_func_802732F4(rdram, ctx);
        goto after_3;
    // 0x8025D45C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_3:
    // 0x8025D460: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x8025D464: lwc1        $f6, 0x24($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X24);
    // 0x8025D468: nop

    // 0x8025D46C: c.lt.s      $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f4.fl < ctx->f6.fl;
    // 0x8025D470: nop

    // 0x8025D474: bc1f        L_8025D490
    if (!c1cs) {
        // 0x8025D478: nop
    
            goto L_8025D490;
    }
    // 0x8025D478: nop

    // 0x8025D47C: lh          $t9, 0xE4($s0)
    ctx->r25 = MEM_H(ctx->r16, 0XE4);
    // 0x8025D480: nop

    // 0x8025D484: addiu       $t0, $t9, 0x1
    ctx->r8 = ADD32(ctx->r25, 0X1);
    // 0x8025D488: b           L_8025D500
    // 0x8025D48C: sh          $t0, 0xE4($s0)
    MEM_H(0XE4, ctx->r16) = ctx->r8;
        goto L_8025D500;
    // 0x8025D48C: sh          $t0, 0xE4($s0)
    MEM_H(0XE4, ctx->r16) = ctx->r8;
L_8025D490:
    // 0x8025D490: jal         0x802732D0
    // 0x8025D494: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_8024B800_func_802732D0(rdram, ctx);
        goto after_4;
    // 0x8025D494: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_4:
    // 0x8025D498: b           L_8025D504
    // 0x8025D49C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_8025D504;
    // 0x8025D49C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_8025D4A0:
    // 0x8025D4A0: lui         $at, 0x8028
    ctx->r1 = S32(0X8028 << 16);
    // 0x8025D4A4: lwc1        $f14, -0x3A90($at)
    ctx->f14.u32l = MEM_W(ctx->r1, -0X3A90);
    // 0x8025D4A8: lwc1        $f12, 0xE8($s0)
    ctx->f12.u32l = MEM_W(ctx->r16, 0XE8);
    // 0x8025D4AC: lhu         $a3, 0xE4($s0)
    ctx->r7 = MEM_HU(ctx->r16, 0XE4);
    // 0x8025D4B0: jal         0x80279410
    // 0x8025D4B4: addiu       $a2, $s0, 0x8C
    ctx->r6 = ADD32(ctx->r16, 0X8C);
    ovl_8024B800_func_80279410(rdram, ctx);
        goto after_5;
    // 0x8025D4B4: addiu       $a2, $s0, 0x8C
    ctx->r6 = ADD32(ctx->r16, 0X8C);
    after_5:
    // 0x8025D4B8: jal         0x80272C74
    // 0x8025D4BC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_8024B800_func_80272C74(rdram, ctx);
        goto after_6;
    // 0x8025D4BC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_6:
    // 0x8025D4C0: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8025D4C4: bne         $v0, $at, L_8025D4F4
    if (ctx->r2 != ctx->r1) {
        // 0x8025D4C8: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_8025D4F4;
    }
    // 0x8025D4C8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8025D4CC: lw          $a1, 0xE8($s0)
    ctx->r5 = MEM_W(ctx->r16, 0XE8);
    // 0x8025D4D0: lui         $a2, 0x404A
    ctx->r6 = S32(0X404A << 16);
    // 0x8025D4D4: jal         0x80055AFC
    // 0x8025D4D8: ori         $a2, $a2, 0xAAAB
    ctx->r6 = ctx->r6 | 0XAAAB;
    func_80055AFC(rdram, ctx);
        goto after_7;
    // 0x8025D4D8: ori         $a2, $a2, 0xAAAB
    ctx->r6 = ctx->r6 | 0XAAAB;
    after_7:
    // 0x8025D4DC: lw          $a2, 0xE8($s0)
    ctx->r6 = MEM_W(ctx->r16, 0XE8);
    // 0x8025D4E0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8025D4E4: jal         0x80259C14
    // 0x8025D4E8: lui         $a1, 0x4000
    ctx->r5 = S32(0X4000 << 16);
    ovl_8024B800_func_80259C14(rdram, ctx);
        goto after_8;
    // 0x8025D4E8: lui         $a1, 0x4000
    ctx->r5 = S32(0X4000 << 16);
    after_8:
    // 0x8025D4EC: b           L_8025D504
    // 0x8025D4F0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_8025D504;
    // 0x8025D4F0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_8025D4F4:
    // 0x8025D4F4: lw          $a1, 0x8C($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X8C);
    // 0x8025D4F8: jal         0x80279050
    // 0x8025D4FC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_8024B800_func_80279050(rdram, ctx);
        goto after_9;
    // 0x8025D4FC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_9:
L_8025D500:
    // 0x8025D500: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_8025D504:
    // 0x8025D504: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8025D508: jr          $ra
    // 0x8025D50C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x8025D50C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void ovl_8024B800_func_8025D510(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8025D510: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x8025D514: lui         $t6, 0x8028
    ctx->r14 = S32(0X8028 << 16);
    // 0x8025D518: lui         $t7, 0x8028
    ctx->r15 = S32(0X8028 << 16);
    // 0x8025D51C: lw          $t6, -0x4CF8($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X4CF8);
    // 0x8025D520: lw          $t7, -0x4CF4($t7)
    ctx->r15 = MEM_W(ctx->r15, -0X4CF4);
    // 0x8025D524: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8025D528: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8025D52C: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x8025D530: sw          $t6, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r14;
    // 0x8025D534: jal         0x80272C74
    // 0x8025D538: sw          $t7, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r15;
    ovl_8024B800_func_80272C74(rdram, ctx);
        goto after_0;
    // 0x8025D538: sw          $t7, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r15;
    after_0:
    // 0x8025D53C: sw          $v0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r2;
    // 0x8025D540: lhu         $t0, 0x10($s0)
    ctx->r8 = MEM_HU(ctx->r16, 0X10);
    // 0x8025D544: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8025D548: beq         $t0, $zero, L_8025D564
    if (ctx->r8 == 0) {
        // 0x8025D54C: or          $v1, $t0, $zero
        ctx->r3 = ctx->r8 | 0;
            goto L_8025D564;
    }
    // 0x8025D54C: or          $v1, $t0, $zero
    ctx->r3 = ctx->r8 | 0;
    // 0x8025D550: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8025D554: beq         $v1, $at, L_8025D5FC
    if (ctx->r3 == ctx->r1) {
        // 0x8025D558: nop
    
            goto L_8025D5FC;
    }
    // 0x8025D558: nop

    // 0x8025D55C: b           L_8025D640
    // 0x8025D560: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_8025D640;
    // 0x8025D560: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_8025D564:
    // 0x8025D564: addiu       $t8, $t0, 0x1
    ctx->r24 = ADD32(ctx->r8, 0X1);
    // 0x8025D568: sh          $t8, 0x10($s0)
    MEM_H(0X10, ctx->r16) = ctx->r24;
    // 0x8025D56C: sh          $zero, 0x3E($sp)
    MEM_H(0X3E, ctx->r29) = 0;
    // 0x8025D570: lui         $a1, 0x4170
    ctx->r5 = S32(0X4170 << 16);
    // 0x8025D574: addiu       $a2, $zero, 0xA
    ctx->r6 = ADD32(0, 0XA);
    // 0x8025D578: jal         0x80052E4C
    // 0x8025D57C: addiu       $a3, $sp, 0x34
    ctx->r7 = ADD32(ctx->r29, 0X34);
    func_80052E4C(rdram, ctx);
        goto after_1;
    // 0x8025D57C: addiu       $a3, $sp, 0x34
    ctx->r7 = ADD32(ctx->r29, 0X34);
    after_1:
    // 0x8025D580: lhu         $v1, 0x3E($sp)
    ctx->r3 = MEM_HU(ctx->r29, 0X3E);
    // 0x8025D584: blez        $v0, L_8025D5C4
    if (SIGNED(ctx->r2) <= 0) {
        // 0x8025D588: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_8025D5C4;
    }
    // 0x8025D588: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8025D58C: sll         $t9, $v0, 16
    ctx->r25 = S32(ctx->r2 << 16);
    // 0x8025D590: sra         $t1, $t9, 16
    ctx->r9 = S32(SIGNED(ctx->r25) >> 16);
    // 0x8025D594: slti        $at, $t1, 0x5
    ctx->r1 = SIGNED(ctx->r9) < 0X5 ? 1 : 0;
    // 0x8025D598: beq         $at, $zero, L_8025D5C4
    if (ctx->r1 == 0) {
        // 0x8025D59C: lui         $at, 0x8012
        ctx->r1 = S32(0X8012 << 16);
            goto L_8025D5C4;
    }
    // 0x8025D59C: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x8025D5A0: lwc1        $f4, 0x6C0($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X6C0);
    // 0x8025D5A4: lui         $at, 0x4100
    ctx->r1 = S32(0X4100 << 16);
    // 0x8025D5A8: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x8025D5AC: nop

    // 0x8025D5B0: c.lt.s      $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f4.fl < ctx->f6.fl;
    // 0x8025D5B4: nop

    // 0x8025D5B8: bc1f        L_8025D5C8
    if (!c1cs) {
        // 0x8025D5BC: sll         $v0, $v1, 1
        ctx->r2 = S32(ctx->r3 << 1);
            goto L_8025D5C8;
    }
    // 0x8025D5BC: sll         $v0, $v1, 1
    ctx->r2 = S32(ctx->r3 << 1);
    // 0x8025D5C0: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
L_8025D5C4:
    // 0x8025D5C4: sll         $v0, $v1, 1
    ctx->r2 = S32(ctx->r3 << 1);
L_8025D5C8:
    // 0x8025D5C8: addu        $a1, $sp, $v0
    ctx->r5 = ADD32(ctx->r29, ctx->r2);
    // 0x8025D5CC: lhu         $a1, 0x30($a1)
    ctx->r5 = MEM_HU(ctx->r5, 0X30);
    // 0x8025D5D0: sw          $v0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r2;
    // 0x8025D5D4: jal         0x80272D3C
    // 0x8025D5D8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    ovl_8024B800_func_80272D3C(rdram, ctx);
        goto after_2;
    // 0x8025D5D8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_2:
    // 0x8025D5DC: lw          $v0, 0x20($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X20);
    // 0x8025D5E0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8025D5E4: addu        $t2, $sp, $v0
    ctx->r10 = ADD32(ctx->r29, ctx->r2);
    // 0x8025D5E8: lhu         $t2, 0x2C($t2)
    ctx->r10 = MEM_HU(ctx->r10, 0X2C);
    // 0x8025D5EC: jal         0x80275588
    // 0x8025D5F0: sh          $t2, 0xE6($s0)
    MEM_H(0XE6, ctx->r16) = ctx->r10;
    ovl_8024B800_func_80275588(rdram, ctx);
        goto after_3;
    // 0x8025D5F0: sh          $t2, 0xE6($s0)
    MEM_H(0XE6, ctx->r16) = ctx->r10;
    after_3:
    // 0x8025D5F4: b           L_8025D640
    // 0x8025D5F8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_8025D640;
    // 0x8025D5F8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_8025D5FC:
    // 0x8025D5FC: jal         0x80275588
    // 0x8025D600: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_8024B800_func_80275588(rdram, ctx);
        goto after_4;
    // 0x8025D600: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_4:
    // 0x8025D604: lhu         $t3, 0x12($s0)
    ctx->r11 = MEM_HU(ctx->r16, 0X12);
    // 0x8025D608: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8025D60C: andi        $t4, $t3, 0x8000
    ctx->r12 = ctx->r11 & 0X8000;
    // 0x8025D610: bne         $t4, $zero, L_8025D624
    if (ctx->r12 != 0) {
        // 0x8025D614: lui         $a1, 0x8009
        ctx->r5 = S32(0X8009 << 16);
            goto L_8025D624;
    }
    // 0x8025D614: lui         $a1, 0x8009
    ctx->r5 = S32(0X8009 << 16);
    // 0x8025D618: addiu       $a1, $a1, 0x4628
    ctx->r5 = ADD32(ctx->r5, 0X4628);
    // 0x8025D61C: jal         0x80276EF0
    // 0x8025D620: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    ovl_8024B800_func_80276EF0(rdram, ctx);
        goto after_5;
    // 0x8025D620: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    after_5:
L_8025D624:
    // 0x8025D624: lw          $t5, 0x28($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X28);
    // 0x8025D628: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8025D62C: bne         $t5, $at, L_8025D63C
    if (ctx->r13 != ctx->r1) {
        // 0x8025D630: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_8025D63C;
    }
    // 0x8025D630: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8025D634: jal         0x8024BC08
    // 0x8025D638: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    ovl_8024B800_func_8024BC08(rdram, ctx);
        goto after_6;
    // 0x8025D638: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    after_6:
L_8025D63C:
    // 0x8025D63C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_8025D640:
    // 0x8025D640: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8025D644: jr          $ra
    // 0x8025D648: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    return;
    // 0x8025D648: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
RECOMP_FUNC void ovl_8024B800_func_8025D64C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8025D64C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8025D650: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8025D654: lhu         $v1, 0x10($a0)
    ctx->r3 = MEM_HU(ctx->r4, 0X10);
    // 0x8025D658: addiu       $a1, $zero, 0x1AD
    ctx->r5 = ADD32(0, 0X1AD);
    // 0x8025D65C: beq         $v1, $zero, L_8025D678
    if (ctx->r3 == 0) {
        // 0x8025D660: or          $v0, $v1, $zero
        ctx->r2 = ctx->r3 | 0;
            goto L_8025D678;
    }
    // 0x8025D660: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    // 0x8025D664: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8025D668: beq         $v0, $at, L_8025D6A8
    if (ctx->r2 == ctx->r1) {
        // 0x8025D66C: lui         $t7, 0x8012
        ctx->r15 = S32(0X8012 << 16);
            goto L_8025D6A8;
    }
    // 0x8025D66C: lui         $t7, 0x8012
    ctx->r15 = S32(0X8012 << 16);
    // 0x8025D670: b           L_8025D704
    // 0x8025D674: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_8025D704;
    // 0x8025D674: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8025D678:
    // 0x8025D678: addiu       $t6, $v1, 0x1
    ctx->r14 = ADD32(ctx->r3, 0X1);
    // 0x8025D67C: sh          $t6, 0x10($a0)
    MEM_H(0X10, ctx->r4) = ctx->r14;
    // 0x8025D680: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8025D684: jal         0x80272D3C
    // 0x8025D688: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    ovl_8024B800_func_80272D3C(rdram, ctx);
        goto after_0;
    // 0x8025D688: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_0:
    // 0x8025D68C: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x8025D690: lui         $a1, 0x3E99
    ctx->r5 = S32(0X3E99 << 16);
    // 0x8025D694: lw          $a2, 0x8C($a0)
    ctx->r6 = MEM_W(ctx->r4, 0X8C);
    // 0x8025D698: jal         0x80274C54
    // 0x8025D69C: ori         $a1, $a1, 0x999A
    ctx->r5 = ctx->r5 | 0X999A;
    ovl_8024B800_func_80274C54(rdram, ctx);
        goto after_1;
    // 0x8025D69C: ori         $a1, $a1, 0x999A
    ctx->r5 = ctx->r5 | 0X999A;
    after_1:
    // 0x8025D6A0: b           L_8025D704
    // 0x8025D6A4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_8025D704;
    // 0x8025D6A4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8025D6A8:
    // 0x8025D6A8: lw          $t7, 0xB24($t7)
    ctx->r15 = MEM_W(ctx->r15, 0XB24);
    // 0x8025D6AC: nop

    // 0x8025D6B0: bne         $a0, $t7, L_8025D6F8
    if (ctx->r4 != ctx->r15) {
        // 0x8025D6B4: nop
    
            goto L_8025D6F8;
    }
    // 0x8025D6B4: nop

    // 0x8025D6B8: lwc1        $f12, 0x44($a0)
    ctx->f12.u32l = MEM_W(ctx->r4, 0X44);
    // 0x8025D6BC: jal         0x80272AEC
    // 0x8025D6C0: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    ovl_8024B800_func_80272AEC(rdram, ctx);
        goto after_2;
    // 0x8025D6C0: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_2:
    // 0x8025D6C4: lui         $at, 0x8028
    ctx->r1 = S32(0X8028 << 16);
    // 0x8025D6C8: lwc1        $f4, -0x3A8C($at)
    ctx->f4.u32l = MEM_W(ctx->r1, -0X3A8C);
    // 0x8025D6CC: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x8025D6D0: c.lt.s      $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f4.fl < ctx->f0.fl;
    // 0x8025D6D4: nop

    // 0x8025D6D8: bc1f        L_8025D6F8
    if (!c1cs) {
        // 0x8025D6DC: nop
    
            goto L_8025D6F8;
    }
    // 0x8025D6DC: nop

    // 0x8025D6E0: lw          $v0, 0xC8($a0)
    ctx->r2 = MEM_W(ctx->r4, 0XC8);
    // 0x8025D6E4: nop

    // 0x8025D6E8: lhu         $t8, 0x10($v0)
    ctx->r24 = MEM_HU(ctx->r2, 0X10);
    // 0x8025D6EC: nop

    // 0x8025D6F0: ori         $t9, $t8, 0x200
    ctx->r25 = ctx->r24 | 0X200;
    // 0x8025D6F4: sh          $t9, 0x10($v0)
    MEM_H(0X10, ctx->r2) = ctx->r25;
L_8025D6F8:
    // 0x8025D6F8: jal         0x80275588
    // 0x8025D6FC: nop

    ovl_8024B800_func_80275588(rdram, ctx);
        goto after_3;
    // 0x8025D6FC: nop

    after_3:
    // 0x8025D700: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8025D704:
    // 0x8025D704: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8025D708: jr          $ra
    // 0x8025D70C: nop

    return;
    // 0x8025D70C: nop

;}
RECOMP_FUNC void ovl_8024B800_func_8025D710(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8025D710: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8025D714: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8025D718: lh          $v0, 0xE6($a0)
    ctx->r2 = MEM_H(ctx->r4, 0XE6);
    // 0x8025D71C: addiu       $at, $zero, 0x6
    ctx->r1 = ADD32(0, 0X6);
    // 0x8025D720: bne         $v0, $at, L_8025D75C
    if (ctx->r2 != ctx->r1) {
        // 0x8025D724: sll         $t2, $v0, 1
        ctx->r10 = S32(ctx->r2 << 1);
            goto L_8025D75C;
    }
    // 0x8025D724: sll         $t2, $v0, 1
    ctx->r10 = S32(ctx->r2 << 1);
    // 0x8025D728: lw          $v0, 0xC8($a0)
    ctx->r2 = MEM_W(ctx->r4, 0XC8);
    // 0x8025D72C: nop

    // 0x8025D730: lhu         $t6, 0x10($v0)
    ctx->r14 = MEM_HU(ctx->r2, 0X10);
    // 0x8025D734: nop

    // 0x8025D738: ori         $t7, $t6, 0x200
    ctx->r15 = ctx->r14 | 0X200;
    // 0x8025D73C: sh          $t7, 0x10($v0)
    MEM_H(0X10, ctx->r2) = ctx->r15;
    // 0x8025D740: lw          $t8, 0xC8($a0)
    ctx->r24 = MEM_W(ctx->r4, 0XC8);
    // 0x8025D744: nop

    // 0x8025D748: lhu         $a1, 0x6($t8)
    ctx->r5 = MEM_HU(ctx->r24, 0X6);
    // 0x8025D74C: jal         0x8005D008
    // 0x8025D750: nop

    func_8005D008(rdram, ctx);
        goto after_0;
    // 0x8025D750: nop

    after_0:
    // 0x8025D754: b           L_8025D7C0
    // 0x8025D758: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_8025D7C0;
    // 0x8025D758: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8025D75C:
    // 0x8025D75C: lh          $v1, 0xE4($a0)
    ctx->r3 = MEM_H(ctx->r4, 0XE4);
    // 0x8025D760: lui         $a2, 0x8028
    ctx->r6 = S32(0X8028 << 16);
    // 0x8025D764: andi        $t9, $v1, 0x1
    ctx->r25 = ctx->r3 & 0X1;
    // 0x8025D768: beq         $t9, $zero, L_8025D778
    if (ctx->r25 == 0) {
        // 0x8025D76C: addu        $a2, $a2, $t2
        ctx->r6 = ADD32(ctx->r6, ctx->r10);
            goto L_8025D778;
    }
    // 0x8025D76C: addu        $a2, $a2, $t2
    ctx->r6 = ADD32(ctx->r6, ctx->r10);
    // 0x8025D770: b           L_8025D77C
    // 0x8025D774: addiu       $a1, $zero, -0x28
    ctx->r5 = ADD32(0, -0X28);
        goto L_8025D77C;
    // 0x8025D774: addiu       $a1, $zero, -0x28
    ctx->r5 = ADD32(0, -0X28);
L_8025D778:
    // 0x8025D778: addiu       $a1, $zero, 0x28
    ctx->r5 = ADD32(0, 0X28);
L_8025D77C:
    // 0x8025D77C: lh          $t0, 0x2E($a0)
    ctx->r8 = MEM_H(ctx->r4, 0X2E);
    // 0x8025D780: andi        $t3, $v1, 0x2
    ctx->r11 = ctx->r3 & 0X2;
    // 0x8025D784: addu        $t1, $t0, $a1
    ctx->r9 = ADD32(ctx->r8, ctx->r5);
    // 0x8025D788: sh          $t1, 0x2E($a0)
    MEM_H(0X2E, ctx->r4) = ctx->r9;
    // 0x8025D78C: lh          $a2, -0x4CF0($a2)
    ctx->r6 = MEM_H(ctx->r6, -0X4CF0);
    // 0x8025D790: beq         $t3, $zero, L_8025D7A8
    if (ctx->r11 == 0) {
        // 0x8025D794: addiu       $t6, $a2, 0xE7
        ctx->r14 = ADD32(ctx->r6, 0XE7);
            goto L_8025D7A8;
    }
    // 0x8025D794: addiu       $t6, $a2, 0xE7
    ctx->r14 = ADD32(ctx->r6, 0XE7);
    // 0x8025D798: addiu       $t4, $zero, -0xE7
    ctx->r12 = ADD32(0, -0XE7);
    // 0x8025D79C: subu        $t5, $t4, $a2
    ctx->r13 = SUB32(ctx->r12, ctx->r6);
    // 0x8025D7A0: b           L_8025D7AC
    // 0x8025D7A4: sh          $t5, 0x30($a0)
    MEM_H(0X30, ctx->r4) = ctx->r13;
        goto L_8025D7AC;
    // 0x8025D7A4: sh          $t5, 0x30($a0)
    MEM_H(0X30, ctx->r4) = ctx->r13;
L_8025D7A8:
    // 0x8025D7A8: sh          $t6, 0x30($a0)
    MEM_H(0X30, ctx->r4) = ctx->r14;
L_8025D7AC:
    // 0x8025D7AC: lh          $t7, 0xE6($a0)
    ctx->r15 = MEM_H(ctx->r4, 0XE6);
    // 0x8025D7B0: nop

    // 0x8025D7B4: addiu       $t8, $t7, 0x1
    ctx->r24 = ADD32(ctx->r15, 0X1);
    // 0x8025D7B8: sh          $t8, 0xE6($a0)
    MEM_H(0XE6, ctx->r4) = ctx->r24;
    // 0x8025D7BC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8025D7C0:
    // 0x8025D7C0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8025D7C4: jr          $ra
    // 0x8025D7C8: nop

    return;
    // 0x8025D7C8: nop

;}
RECOMP_FUNC void ovl_8024B800_func_8025D7CC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8025D7CC: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8025D7D0: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8025D7D4: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8025D7D8: lhu         $v0, 0x10($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X10);
    // 0x8025D7DC: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x8025D7E0: beq         $v0, $zero, L_8025D7F8
    if (ctx->r2 == 0) {
        // 0x8025D7E4: addiu       $at, $zero, 0x1
        ctx->r1 = ADD32(0, 0X1);
            goto L_8025D7F8;
    }
    // 0x8025D7E4: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8025D7E8: beq         $v0, $at, L_8025D890
    if (ctx->r2 == ctx->r1) {
        // 0x8025D7EC: nop
    
            goto L_8025D890;
    }
    // 0x8025D7EC: nop

    // 0x8025D7F0: b           L_8025D8F0
    // 0x8025D7F4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_8025D8F0;
    // 0x8025D7F4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_8025D7F8:
    // 0x8025D7F8: cfc1        $t6, $FpcCsr
    ctx->r14 = get_cop1_cs();
    // 0x8025D7FC: lwc1        $f0, 0x4C($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X4C);
    // 0x8025D800: ori         $at, $t6, 0x3
    ctx->r1 = ctx->r14 | 0X3;
    // 0x8025D804: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x8025D808: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x8025D80C: mtc1        $zero, $f2
    ctx->f2.u32l = 0;
    // 0x8025D810: cvt.w.s     $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    ctx->f4.u32l = CVT_W_S(ctx->f0.fl);
    // 0x8025D814: ctc1        $t6, $FpcCsr
    set_cop1_cs(ctx->r14);
    // 0x8025D818: mfc1        $t7, $f4
    ctx->r15 = (int32_t)ctx->f4.u32l;
    // 0x8025D81C: c.lt.s      $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f2.fl < ctx->f0.fl;
    // 0x8025D820: sh          $t7, 0x2E($s0)
    MEM_H(0X2E, ctx->r16) = ctx->r15;
    // 0x8025D824: bc1f        L_8025D83C
    if (!c1cs) {
        // 0x8025D828: nop
    
            goto L_8025D83C;
    }
    // 0x8025D828: nop

    // 0x8025D82C: lh          $t8, 0xE4($s0)
    ctx->r24 = MEM_H(ctx->r16, 0XE4);
    // 0x8025D830: nop

    // 0x8025D834: ori         $t9, $t8, 0x1
    ctx->r25 = ctx->r24 | 0X1;
    // 0x8025D838: sh          $t9, 0xE4($s0)
    MEM_H(0XE4, ctx->r16) = ctx->r25;
L_8025D83C:
    // 0x8025D83C: lwc1        $f6, 0x44($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X44);
    // 0x8025D840: nop

    // 0x8025D844: c.lt.s      $f2, $f6
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f2.fl < ctx->f6.fl;
    // 0x8025D848: nop

    // 0x8025D84C: bc1f        L_8025D864
    if (!c1cs) {
        // 0x8025D850: nop
    
            goto L_8025D864;
    }
    // 0x8025D850: nop

    // 0x8025D854: lh          $t0, 0xE4($s0)
    ctx->r8 = MEM_H(ctx->r16, 0XE4);
    // 0x8025D858: nop

    // 0x8025D85C: ori         $t1, $t0, 0x2
    ctx->r9 = ctx->r8 | 0X2;
    // 0x8025D860: sh          $t1, 0xE4($s0)
    MEM_H(0XE4, ctx->r16) = ctx->r9;
L_8025D864:
    // 0x8025D864: jal         0x8025D710
    // 0x8025D868: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_8024B800_func_8025D710(rdram, ctx);
        goto after_0;
    // 0x8025D868: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_0:
    // 0x8025D86C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8025D870: addiu       $a1, $zero, 0x1A1
    ctx->r5 = ADD32(0, 0X1A1);
    // 0x8025D874: jal         0x80272D3C
    // 0x8025D878: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    ovl_8024B800_func_80272D3C(rdram, ctx);
        goto after_1;
    // 0x8025D878: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_1:
    // 0x8025D87C: lhu         $t2, 0x10($s0)
    ctx->r10 = MEM_HU(ctx->r16, 0X10);
    // 0x8025D880: nop

    // 0x8025D884: addiu       $t3, $t2, 0x1
    ctx->r11 = ADD32(ctx->r10, 0X1);
    // 0x8025D888: b           L_8025D8EC
    // 0x8025D88C: sh          $t3, 0x10($s0)
    MEM_H(0X10, ctx->r16) = ctx->r11;
        goto L_8025D8EC;
    // 0x8025D88C: sh          $t3, 0x10($s0)
    MEM_H(0X10, ctx->r16) = ctx->r11;
L_8025D890:
    // 0x8025D890: jal         0x8026BD38
    // 0x8025D894: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_8024B800_func_8026BD38(rdram, ctx);
        goto after_2;
    // 0x8025D894: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_2:
    // 0x8025D898: lui         $at, 0x8028
    ctx->r1 = S32(0X8028 << 16);
    // 0x8025D89C: lwc1        $f14, -0x3A88($at)
    ctx->f14.u32l = MEM_W(ctx->r1, -0X3A88);
    // 0x8025D8A0: lwc1        $f12, 0xB0($s0)
    ctx->f12.u32l = MEM_W(ctx->r16, 0XB0);
    // 0x8025D8A4: jal         0x80279520
    // 0x8025D8A8: addiu       $a2, $s0, 0x8C
    ctx->r6 = ADD32(ctx->r16, 0X8C);
    ovl_8024B800_func_80279520(rdram, ctx);
        goto after_3;
    // 0x8025D8A8: addiu       $a2, $s0, 0x8C
    ctx->r6 = ADD32(ctx->r16, 0X8C);
    after_3:
    // 0x8025D8AC: lw          $a2, 0x8C($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X8C);
    // 0x8025D8B0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8025D8B4: jal         0x80274C54
    // 0x8025D8B8: lui         $a1, 0x4000
    ctx->r5 = S32(0X4000 << 16);
    ovl_8024B800_func_80274C54(rdram, ctx);
        goto after_4;
    // 0x8025D8B8: lui         $a1, 0x4000
    ctx->r5 = S32(0X4000 << 16);
    after_4:
    // 0x8025D8BC: jal         0x80275588
    // 0x8025D8C0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_8024B800_func_80275588(rdram, ctx);
        goto after_5;
    // 0x8025D8C0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_5:
    // 0x8025D8C4: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x8025D8C8: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x8025D8CC: lwc1        $f8, 0xB4($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0XB4);
    // 0x8025D8D0: nop

    // 0x8025D8D4: c.lt.s      $f8, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f8.fl < ctx->f10.fl;
    // 0x8025D8D8: nop

    // 0x8025D8DC: bc1f        L_8025D8F0
    if (!c1cs) {
        // 0x8025D8E0: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_8025D8F0;
    }
    // 0x8025D8E0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8025D8E4: jal         0x8025D710
    // 0x8025D8E8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_8024B800_func_8025D710(rdram, ctx);
        goto after_6;
    // 0x8025D8E8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_6:
L_8025D8EC:
    // 0x8025D8EC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_8025D8F0:
    // 0x8025D8F0: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8025D8F4: jr          $ra
    // 0x8025D8F8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x8025D8F8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void ovl_8024B800_func_8025D8FC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8025D8FC: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8025D900: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8025D904: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8025D908: jal         0x80272C74
    // 0x8025D90C: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    ovl_8024B800_func_80272C74(rdram, ctx);
        goto after_0;
    // 0x8025D90C: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    after_0:
    // 0x8025D910: lhu         $t6, 0x10($s0)
    ctx->r14 = MEM_HU(ctx->r16, 0X10);
    // 0x8025D914: nop

    // 0x8025D918: sltiu       $at, $t6, 0x5
    ctx->r1 = ctx->r14 < 0X5 ? 1 : 0;
    // 0x8025D91C: beq         $at, $zero, L_8025DB08
    if (ctx->r1 == 0) {
        // 0x8025D920: sll         $t6, $t6, 2
        ctx->r14 = S32(ctx->r14 << 2);
            goto L_8025DB08;
    }
    // 0x8025D920: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x8025D924: lui         $at, 0x8028
    ctx->r1 = S32(0X8028 << 16);
    // 0x8025D928: addu        $at, $at, $t6
    gpr jr_addend_8025D934 = ctx->r14;
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x8025D92C: lw          $t6, -0x3A84($at)
    ctx->r14 = ADD32(ctx->r1, -0X3A84);
    // 0x8025D930: nop

    // 0x8025D934: jr          $t6
    // 0x8025D938: nop

    switch (jr_addend_8025D934 >> 2) {
        case 0: goto L_8025D93C; break;
        case 1: goto L_8025D9C0; break;
        case 2: goto L_8025DA10; break;
        case 3: goto L_8025DA84; break;
        case 4: goto L_8025DAC8; break;
        default: switch_error(__func__, 0x8025D934, 0x8027C57C);
    }
    // 0x8025D938: nop

L_8025D93C:
    // 0x8025D93C: jal         0x802732F4
    // 0x8025D940: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_8024B800_func_802732F4(rdram, ctx);
        goto after_1;
    // 0x8025D940: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
    // 0x8025D944: lui         $t7, 0x8012
    ctx->r15 = S32(0X8012 << 16);
    // 0x8025D948: lw          $t7, 0xB24($t7)
    ctx->r15 = MEM_W(ctx->r15, 0XB24);
    // 0x8025D94C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8025D950: bne         $s0, $t7, L_8025D988
    if (ctx->r16 != ctx->r15) {
        // 0x8025D954: nop
    
            goto L_8025D988;
    }
    // 0x8025D954: nop

    // 0x8025D958: lw          $v0, 0xC8($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XC8);
    // 0x8025D95C: addiu       $a1, $zero, 0x192
    ctx->r5 = ADD32(0, 0X192);
    // 0x8025D960: lhu         $t8, 0x10($v0)
    ctx->r24 = MEM_HU(ctx->r2, 0X10);
    // 0x8025D964: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x8025D968: ori         $t9, $t8, 0x100
    ctx->r25 = ctx->r24 | 0X100;
    // 0x8025D96C: jal         0x80272D3C
    // 0x8025D970: sh          $t9, 0x10($v0)
    MEM_H(0X10, ctx->r2) = ctx->r25;
    ovl_8024B800_func_80272D3C(rdram, ctx);
        goto after_2;
    // 0x8025D970: sh          $t9, 0x10($v0)
    MEM_H(0X10, ctx->r2) = ctx->r25;
    after_2:
    // 0x8025D974: lhu         $t0, 0x10($s0)
    ctx->r8 = MEM_HU(ctx->r16, 0X10);
    // 0x8025D978: nop

    // 0x8025D97C: addiu       $t1, $t0, 0x1
    ctx->r9 = ADD32(ctx->r8, 0X1);
    // 0x8025D980: b           L_8025DB08
    // 0x8025D984: sh          $t1, 0x10($s0)
    MEM_H(0X10, ctx->r16) = ctx->r9;
        goto L_8025DB08;
    // 0x8025D984: sh          $t1, 0x10($s0)
    MEM_H(0X10, ctx->r16) = ctx->r9;
L_8025D988:
    // 0x8025D988: jal         0x80272CC0
    // 0x8025D98C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_8024B800_func_80272CC0(rdram, ctx);
        goto after_3;
    // 0x8025D98C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_3:
    // 0x8025D990: addiu       $at, $zero, 0x18
    ctx->r1 = ADD32(0, 0X18);
    // 0x8025D994: beq         $v0, $at, L_8025D9B8
    if (ctx->r2 == ctx->r1) {
        // 0x8025D998: addiu       $t2, $zero, 0x2
        ctx->r10 = ADD32(0, 0X2);
            goto L_8025D9B8;
    }
    // 0x8025D998: addiu       $t2, $zero, 0x2
    ctx->r10 = ADD32(0, 0X2);
    // 0x8025D99C: jal         0x8024BAFC
    // 0x8025D9A0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_8024B800_func_8024BAFC(rdram, ctx);
        goto after_4;
    // 0x8025D9A0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_4:
    // 0x8025D9A4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8025D9A8: andi        $a1, $v0, 0xFFFF
    ctx->r5 = ctx->r2 & 0XFFFF;
    // 0x8025D9AC: jal         0x80272D3C
    // 0x8025D9B0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    ovl_8024B800_func_80272D3C(rdram, ctx);
        goto after_5;
    // 0x8025D9B0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_5:
    // 0x8025D9B4: addiu       $t2, $zero, 0x2
    ctx->r10 = ADD32(0, 0X2);
L_8025D9B8:
    // 0x8025D9B8: b           L_8025DB08
    // 0x8025D9BC: sh          $t2, 0x10($s0)
    MEM_H(0X10, ctx->r16) = ctx->r10;
        goto L_8025DB08;
    // 0x8025D9BC: sh          $t2, 0x10($s0)
    MEM_H(0X10, ctx->r16) = ctx->r10;
L_8025D9C0:
    // 0x8025D9C0: addiu       $at, $zero, 0x7
    ctx->r1 = ADD32(0, 0X7);
    // 0x8025D9C4: bne         $v0, $at, L_8025DB0C
    if (ctx->r2 != ctx->r1) {
        // 0x8025D9C8: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_8025DB0C;
    }
    // 0x8025D9C8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8025D9CC: lh          $t3, 0xE4($s0)
    ctx->r11 = MEM_H(ctx->r16, 0XE4);
    // 0x8025D9D0: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x8025D9D4: bne         $t3, $at, L_8025DB0C
    if (ctx->r11 != ctx->r1) {
        // 0x8025D9D8: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_8025DB0C;
    }
    // 0x8025D9D8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8025D9DC: lh          $t4, 0xE6($s0)
    ctx->r12 = MEM_H(ctx->r16, 0XE6);
    // 0x8025D9E0: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x8025D9E4: addiu       $t5, $t4, 0x1
    ctx->r13 = ADD32(ctx->r12, 0X1);
    // 0x8025D9E8: sh          $t5, 0xE6($s0)
    MEM_H(0XE6, ctx->r16) = ctx->r13;
    // 0x8025D9EC: lh          $t6, 0xE6($s0)
    ctx->r14 = MEM_H(ctx->r16, 0XE6);
    // 0x8025D9F0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8025D9F4: bne         $t6, $at, L_8025DB08
    if (ctx->r14 != ctx->r1) {
        // 0x8025D9F8: addiu       $a1, $zero, 0x1AE
        ctx->r5 = ADD32(0, 0X1AE);
            goto L_8025DB08;
    }
    // 0x8025D9F8: addiu       $a1, $zero, 0x1AE
    ctx->r5 = ADD32(0, 0X1AE);
    // 0x8025D9FC: jal         0x80272D3C
    // 0x8025DA00: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    ovl_8024B800_func_80272D3C(rdram, ctx);
        goto after_6;
    // 0x8025DA00: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_6:
    // 0x8025DA04: addiu       $t7, $zero, 0x4
    ctx->r15 = ADD32(0, 0X4);
    // 0x8025DA08: b           L_8025DB08
    // 0x8025DA0C: sh          $t7, 0x10($s0)
    MEM_H(0X10, ctx->r16) = ctx->r15;
        goto L_8025DB08;
    // 0x8025DA0C: sh          $t7, 0x10($s0)
    MEM_H(0X10, ctx->r16) = ctx->r15;
L_8025DA10:
    // 0x8025DA10: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x8025DA14: lw          $a0, 0xB24($a0)
    ctx->r4 = MEM_W(ctx->r4, 0XB24);
    // 0x8025DA18: jal         0x80272CA4
    // 0x8025DA1C: nop

    ovl_8024B800_func_80272CA4(rdram, ctx);
        goto after_7;
    // 0x8025DA1C: nop

    after_7:
    // 0x8025DA20: sltiu       $at, $v0, 0x24
    ctx->r1 = ctx->r2 < 0X24 ? 1 : 0;
    // 0x8025DA24: beq         $at, $zero, L_8025DB08
    if (ctx->r1 == 0) {
        // 0x8025DA28: sltiu       $at, $v0, 0x1D
        ctx->r1 = ctx->r2 < 0X1D ? 1 : 0;
            goto L_8025DB08;
    }
    // 0x8025DA28: sltiu       $at, $v0, 0x1D
    ctx->r1 = ctx->r2 < 0X1D ? 1 : 0;
    // 0x8025DA2C: bne         $at, $zero, L_8025DB08
    if (ctx->r1 != 0) {
        // 0x8025DA30: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_8025DB08;
    }
    // 0x8025DA30: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8025DA34: lhu         $t8, 0x24($s0)
    ctx->r24 = MEM_HU(ctx->r16, 0X24);
    // 0x8025DA38: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x8025DA3C: beq         $t8, $zero, L_8025DA4C
    if (ctx->r24 == 0) {
        // 0x8025DA40: addiu       $v0, $zero, 0x1B1
        ctx->r2 = ADD32(0, 0X1B1);
            goto L_8025DA4C;
    }
    // 0x8025DA40: addiu       $v0, $zero, 0x1B1
    ctx->r2 = ADD32(0, 0X1B1);
    // 0x8025DA44: b           L_8025DA4C
    // 0x8025DA48: addiu       $v0, $zero, 0x1B0
    ctx->r2 = ADD32(0, 0X1B0);
        goto L_8025DA4C;
    // 0x8025DA48: addiu       $v0, $zero, 0x1B0
    ctx->r2 = ADD32(0, 0X1B0);
L_8025DA4C:
    // 0x8025DA4C: jal         0x80272D3C
    // 0x8025DA50: andi        $a1, $v0, 0xFFFF
    ctx->r5 = ctx->r2 & 0XFFFF;
    ovl_8024B800_func_80272D3C(rdram, ctx);
        goto after_8;
    // 0x8025DA50: andi        $a1, $v0, 0xFFFF
    ctx->r5 = ctx->r2 & 0XFFFF;
    after_8:
    // 0x8025DA54: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x8025DA58: lw          $v0, 0xB24($v0)
    ctx->r2 = MEM_W(ctx->r2, 0XB24);
    // 0x8025DA5C: nop

    // 0x8025DA60: lh          $t9, 0xE4($v0)
    ctx->r25 = MEM_H(ctx->r2, 0XE4);
    // 0x8025DA64: nop

    // 0x8025DA68: addiu       $t0, $t9, 0x1
    ctx->r8 = ADD32(ctx->r25, 0X1);
    // 0x8025DA6C: sh          $t0, 0xE4($v0)
    MEM_H(0XE4, ctx->r2) = ctx->r8;
    // 0x8025DA70: lhu         $t1, 0x10($s0)
    ctx->r9 = MEM_HU(ctx->r16, 0X10);
    // 0x8025DA74: nop

    // 0x8025DA78: addiu       $t2, $t1, 0x1
    ctx->r10 = ADD32(ctx->r9, 0X1);
    // 0x8025DA7C: b           L_8025DB08
    // 0x8025DA80: sh          $t2, 0x10($s0)
    MEM_H(0X10, ctx->r16) = ctx->r10;
        goto L_8025DB08;
    // 0x8025DA80: sh          $t2, 0x10($s0)
    MEM_H(0X10, ctx->r16) = ctx->r10;
L_8025DA84:
    // 0x8025DA84: addiu       $at, $zero, 0x7
    ctx->r1 = ADD32(0, 0X7);
    // 0x8025DA88: bne         $v0, $at, L_8025DB0C
    if (ctx->r2 != ctx->r1) {
        // 0x8025DA8C: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_8025DB0C;
    }
    // 0x8025DA8C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8025DA90: lw          $t3, 0xC8($s0)
    ctx->r11 = MEM_W(ctx->r16, 0XC8);
    // 0x8025DA94: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8025DA98: lhu         $t4, 0x10($t3)
    ctx->r12 = MEM_HU(ctx->r11, 0X10);
    // 0x8025DA9C: addiu       $a1, $zero, 0x1AE
    ctx->r5 = ADD32(0, 0X1AE);
    // 0x8025DAA0: andi        $t5, $t4, 0x400
    ctx->r13 = ctx->r12 & 0X400;
    // 0x8025DAA4: beq         $t5, $zero, L_8025DB0C
    if (ctx->r13 == 0) {
        // 0x8025DAA8: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_8025DB0C;
    }
    // 0x8025DAA8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8025DAAC: jal         0x80272D3C
    // 0x8025DAB0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    ovl_8024B800_func_80272D3C(rdram, ctx);
        goto after_9;
    // 0x8025DAB0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_9:
    // 0x8025DAB4: lhu         $t6, 0x10($s0)
    ctx->r14 = MEM_HU(ctx->r16, 0X10);
    // 0x8025DAB8: nop

    // 0x8025DABC: addiu       $t7, $t6, 0x1
    ctx->r15 = ADD32(ctx->r14, 0X1);
    // 0x8025DAC0: b           L_8025DB08
    // 0x8025DAC4: sh          $t7, 0x10($s0)
    MEM_H(0X10, ctx->r16) = ctx->r15;
        goto L_8025DB08;
    // 0x8025DAC4: sh          $t7, 0x10($s0)
    MEM_H(0X10, ctx->r16) = ctx->r15;
L_8025DAC8:
    // 0x8025DAC8: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8025DACC: bne         $v0, $at, L_8025DB08
    if (ctx->r2 != ctx->r1) {
        // 0x8025DAD0: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_8025DB08;
    }
    // 0x8025DAD0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8025DAD4: jal         0x8024BC08
    // 0x8025DAD8: addiu       $a1, $zero, 0x30
    ctx->r5 = ADD32(0, 0X30);
    ovl_8024B800_func_8024BC08(rdram, ctx);
        goto after_10;
    // 0x8025DAD8: addiu       $a1, $zero, 0x30
    ctx->r5 = ADD32(0, 0X30);
    after_10:
    // 0x8025DADC: lui         $t8, 0x8012
    ctx->r24 = S32(0X8012 << 16);
    // 0x8025DAE0: lw          $t8, 0xB24($t8)
    ctx->r24 = MEM_W(ctx->r24, 0XB24);
    // 0x8025DAE4: nop

    // 0x8025DAE8: bne         $s0, $t8, L_8025DB0C
    if (ctx->r16 != ctx->r24) {
        // 0x8025DAEC: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_8025DB0C;
    }
    // 0x8025DAEC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8025DAF0: lw          $v0, 0xC8($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XC8);
    // 0x8025DAF4: nop

    // 0x8025DAF8: lhu         $t9, 0x10($v0)
    ctx->r25 = MEM_HU(ctx->r2, 0X10);
    // 0x8025DAFC: nop

    // 0x8025DB00: ori         $t0, $t9, 0x400
    ctx->r8 = ctx->r25 | 0X400;
    // 0x8025DB04: sh          $t0, 0x10($v0)
    MEM_H(0X10, ctx->r2) = ctx->r8;
L_8025DB08:
    // 0x8025DB08: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_8025DB0C:
    // 0x8025DB0C: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8025DB10: jr          $ra
    // 0x8025DB14: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x8025DB14: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void ovl_8024B800_func_8025DB18(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8025DB18: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8025DB1C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8025DB20: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8025DB24: lhu         $v0, 0x10($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X10);
    // 0x8025DB28: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x8025DB2C: beq         $v0, $zero, L_8025DB48
    if (ctx->r2 == 0) {
        // 0x8025DB30: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_8025DB48;
    }
    // 0x8025DB30: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8025DB34: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8025DB38: beq         $v0, $at, L_8025DC14
    if (ctx->r2 == ctx->r1) {
        // 0x8025DB3C: nop
    
            goto L_8025DC14;
    }
    // 0x8025DB3C: nop

    // 0x8025DB40: b           L_8025DC68
    // 0x8025DB44: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_8025DC68;
    // 0x8025DB44: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_8025DB48:
    // 0x8025DB48: lhu         $t6, 0x2C($s0)
    ctx->r14 = MEM_HU(ctx->r16, 0X2C);
    // 0x8025DB4C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x8025DB50: andi        $t7, $t6, 0x1
    ctx->r15 = ctx->r14 & 0X1;
    // 0x8025DB54: beq         $t7, $zero, L_8025DB64
    if (ctx->r15 == 0) {
        // 0x8025DB58: addiu       $v0, $zero, 0x1B5
        ctx->r2 = ADD32(0, 0X1B5);
            goto L_8025DB64;
    }
    // 0x8025DB58: addiu       $v0, $zero, 0x1B5
    ctx->r2 = ADD32(0, 0X1B5);
    // 0x8025DB5C: b           L_8025DB64
    // 0x8025DB60: addiu       $v0, $zero, 0x1B4
    ctx->r2 = ADD32(0, 0X1B4);
        goto L_8025DB64;
    // 0x8025DB60: addiu       $v0, $zero, 0x1B4
    ctx->r2 = ADD32(0, 0X1B4);
L_8025DB64:
    // 0x8025DB64: jal         0x80272D3C
    // 0x8025DB68: andi        $a1, $v0, 0xFFFF
    ctx->r5 = ctx->r2 & 0XFFFF;
    ovl_8024B800_func_80272D3C(rdram, ctx);
        goto after_0;
    // 0x8025DB68: andi        $a1, $v0, 0xFFFF
    ctx->r5 = ctx->r2 & 0XFFFF;
    after_0:
    // 0x8025DB6C: jal         0x802732F4
    // 0x8025DB70: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_8024B800_func_802732F4(rdram, ctx);
        goto after_1;
    // 0x8025DB70: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
    // 0x8025DB74: lwc1        $f0, 0x4C($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X4C);
    // 0x8025DB78: lwc1        $f6, 0x44($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X44);
    // 0x8025DB7C: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x8025DB80: mul.s       $f8, $f0, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f0.fl, ctx->f6.fl);
    // 0x8025DB84: c.lt.s      $f4, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f4.fl < ctx->f8.fl;
    // 0x8025DB88: nop

    // 0x8025DB8C: bc1f        L_8025DBA4
    if (!c1cs) {
        // 0x8025DB90: nop
    
            goto L_8025DBA4;
    }
    // 0x8025DB90: nop

    // 0x8025DB94: jal         0x802732D0
    // 0x8025DB98: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_8024B800_func_802732D0(rdram, ctx);
        goto after_2;
    // 0x8025DB98: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_2:
    // 0x8025DB9C: lwc1        $f0, 0x4C($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X4C);
    // 0x8025DBA0: nop

L_8025DBA4:
    // 0x8025DBA4: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x8025DBA8: lui         $at, 0x8028
    ctx->r1 = S32(0X8028 << 16);
    // 0x8025DBAC: c.lt.s      $f10, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f10.fl < ctx->f0.fl;
    // 0x8025DBB0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8025DBB4: bc1f        L_8025DBCC
    if (!c1cs) {
        // 0x8025DBB8: nop
    
            goto L_8025DBCC;
    }
    // 0x8025DBB8: nop

    // 0x8025DBBC: lwc1        $f17, -0x3A70($at)
    ctx->f_odd[(17 - 1) * 2] = MEM_W(ctx->r1, -0X3A70);
    // 0x8025DBC0: lwc1        $f16, -0x3A6C($at)
    ctx->f16.u32l = MEM_W(ctx->r1, -0X3A6C);
    // 0x8025DBC4: b           L_8025DBDC
    // 0x8025DBC8: cvt.s.d     $f0, $f16
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.d); 
    ctx->f0.fl = CVT_S_D(ctx->f16.d);
        goto L_8025DBDC;
    // 0x8025DBC8: cvt.s.d     $f0, $f16
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.d); 
    ctx->f0.fl = CVT_S_D(ctx->f16.d);
L_8025DBCC:
    // 0x8025DBCC: mtc1        $zero, $f19
    ctx->f_odd[(19 - 1) * 2] = 0;
    // 0x8025DBD0: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x8025DBD4: nop

    // 0x8025DBD8: cvt.s.d     $f0, $f18
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.d); 
    ctx->f0.fl = CVT_S_D(ctx->f18.d);
L_8025DBDC:
    // 0x8025DBDC: mfc1        $a2, $f0
    ctx->r6 = (int32_t)ctx->f0.u32l;
    // 0x8025DBE0: jal         0x80274C54
    // 0x8025DBE4: lui         $a1, 0x3F80
    ctx->r5 = S32(0X3F80 << 16);
    ovl_8024B800_func_80274C54(rdram, ctx);
        goto after_3;
    // 0x8025DBE4: lui         $a1, 0x3F80
    ctx->r5 = S32(0X3F80 << 16);
    after_3:
    // 0x8025DBE8: lw          $v0, 0xC8($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XC8);
    // 0x8025DBEC: nop

    // 0x8025DBF0: lhu         $t8, 0x10($v0)
    ctx->r24 = MEM_HU(ctx->r2, 0X10);
    // 0x8025DBF4: nop

    // 0x8025DBF8: ori         $t9, $t8, 0x100
    ctx->r25 = ctx->r24 | 0X100;
    // 0x8025DBFC: sh          $t9, 0x10($v0)
    MEM_H(0X10, ctx->r2) = ctx->r25;
    // 0x8025DC00: lhu         $t0, 0x10($s0)
    ctx->r8 = MEM_HU(ctx->r16, 0X10);
    // 0x8025DC04: nop

    // 0x8025DC08: addiu       $t1, $t0, 0x1
    ctx->r9 = ADD32(ctx->r8, 0X1);
    // 0x8025DC0C: b           L_8025DC64
    // 0x8025DC10: sh          $t1, 0x10($s0)
    MEM_H(0X10, ctx->r16) = ctx->r9;
        goto L_8025DC64;
    // 0x8025DC10: sh          $t1, 0x10($s0)
    MEM_H(0X10, ctx->r16) = ctx->r9;
L_8025DC14:
    // 0x8025DC14: jal         0x80272C74
    // 0x8025DC18: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_8024B800_func_80272C74(rdram, ctx);
        goto after_4;
    // 0x8025DC18: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_4:
    // 0x8025DC1C: addiu       $at, $zero, 0x6
    ctx->r1 = ADD32(0, 0X6);
    // 0x8025DC20: bne         $v0, $at, L_8025DC3C
    if (ctx->r2 != ctx->r1) {
        // 0x8025DC24: or          $v1, $v0, $zero
        ctx->r3 = ctx->r2 | 0;
            goto L_8025DC3C;
    }
    // 0x8025DC24: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
    // 0x8025DC28: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8025DC2C: jal         0x80275588
    // 0x8025DC30: sw          $v0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r2;
    ovl_8024B800_func_80275588(rdram, ctx);
        goto after_5;
    // 0x8025DC30: sw          $v0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r2;
    after_5:
    // 0x8025DC34: lw          $v1, 0x20($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X20);
    // 0x8025DC38: nop

L_8025DC3C:
    // 0x8025DC3C: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8025DC40: bne         $v1, $at, L_8025DC68
    if (ctx->r3 != ctx->r1) {
        // 0x8025DC44: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_8025DC68;
    }
    // 0x8025DC44: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8025DC48: lw          $v0, 0xC8($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XC8);
    // 0x8025DC4C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8025DC50: lhu         $t2, 0x10($v0)
    ctx->r10 = MEM_HU(ctx->r2, 0X10);
    // 0x8025DC54: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x8025DC58: ori         $t3, $t2, 0x200
    ctx->r11 = ctx->r10 | 0X200;
    // 0x8025DC5C: jal         0x8024BC08
    // 0x8025DC60: sh          $t3, 0x10($v0)
    MEM_H(0X10, ctx->r2) = ctx->r11;
    ovl_8024B800_func_8024BC08(rdram, ctx);
        goto after_6;
    // 0x8025DC60: sh          $t3, 0x10($v0)
    MEM_H(0X10, ctx->r2) = ctx->r11;
    after_6:
L_8025DC64:
    // 0x8025DC64: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_8025DC68:
    // 0x8025DC68: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8025DC6C: jr          $ra
    // 0x8025DC70: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x8025DC70: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void ovl_8024B800_func_8025DC74(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8025DC74: lw          $t6, 0xC8($a0)
    ctx->r14 = MEM_W(ctx->r4, 0XC8);
    // 0x8025DC78: lhu         $t8, 0x1A($a0)
    ctx->r24 = MEM_HU(ctx->r4, 0X1A);
    // 0x8025DC7C: lhu         $t7, 0x92C($t6)
    ctx->r15 = MEM_HU(ctx->r14, 0X92C);
    // 0x8025DC80: addiu       $at, $zero, 0xB
    ctx->r1 = ADD32(0, 0XB);
    // 0x8025DC84: addu        $v0, $t7, $t8
    ctx->r2 = ADD32(ctx->r15, ctx->r24);
    // 0x8025DC88: div         $zero, $v0, $at
    lo = S32(S64(S32(ctx->r2)) / S64(S32(ctx->r1))); hi = S32(S64(S32(ctx->r2)) % S64(S32(ctx->r1)));
    // 0x8025DC8C: mfhi        $v0
    ctx->r2 = hi;
    // 0x8025DC90: jr          $ra
    // 0x8025DC94: nop

    return;
    // 0x8025DC94: nop

;}
RECOMP_FUNC void ovl_8024B800_func_8025DC98(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8025DC98: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8025DC9C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8025DCA0: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8025DCA4: lhu         $v1, 0x10($a0)
    ctx->r3 = MEM_HU(ctx->r4, 0X10);
    // 0x8025DCA8: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x8025DCAC: beq         $v1, $zero, L_8025DCC8
    if (ctx->r3 == 0) {
        // 0x8025DCB0: or          $v0, $v1, $zero
        ctx->r2 = ctx->r3 | 0;
            goto L_8025DCC8;
    }
    // 0x8025DCB0: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    // 0x8025DCB4: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8025DCB8: beq         $v0, $at, L_8025DDA4
    if (ctx->r2 == ctx->r1) {
        // 0x8025DCBC: nop
    
            goto L_8025DDA4;
    }
    // 0x8025DCBC: nop

    // 0x8025DCC0: b           L_8025DE3C
    // 0x8025DCC4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_8025DE3C;
    // 0x8025DCC4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_8025DCC8:
    // 0x8025DCC8: addiu       $t6, $v1, 0x1
    ctx->r14 = ADD32(ctx->r3, 0X1);
    // 0x8025DCCC: sh          $t6, 0x10($s0)
    MEM_H(0X10, ctx->r16) = ctx->r14;
    // 0x8025DCD0: lui         $t7, 0x8028
    ctx->r15 = S32(0X8028 << 16);
    // 0x8025DCD4: lh          $t7, -0x1B60($t7)
    ctx->r15 = MEM_H(ctx->r15, -0X1B60);
    // 0x8025DCD8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8025DCDC: andi        $t8, $t7, 0x3
    ctx->r24 = ctx->r15 & 0X3;
    // 0x8025DCE0: jal         0x8025DC74
    // 0x8025DCE4: sh          $t8, 0xE6($s0)
    MEM_H(0XE6, ctx->r16) = ctx->r24;
    ovl_8024B800_func_8025DC74(rdram, ctx);
        goto after_0;
    // 0x8025DCE4: sh          $t8, 0xE6($s0)
    MEM_H(0XE6, ctx->r16) = ctx->r24;
    after_0:
    // 0x8025DCE8: lw          $a0, 0xC8($s0)
    ctx->r4 = MEM_W(ctx->r16, 0XC8);
    // 0x8025DCEC: jal         0x80268E54
    // 0x8025DCF0: sh          $v0, 0xE4($s0)
    MEM_H(0XE4, ctx->r16) = ctx->r2;
    ovl_8024B800_func_80268E54(rdram, ctx);
        goto after_1;
    // 0x8025DCF0: sh          $v0, 0xE4($s0)
    MEM_H(0XE4, ctx->r16) = ctx->r2;
    after_1:
    // 0x8025DCF4: beq         $v0, $zero, L_8025DD18
    if (ctx->r2 == 0) {
        // 0x8025DCF8: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_8025DD18;
    }
    // 0x8025DCF8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8025DCFC: lh          $t9, 0xE4($s0)
    ctx->r25 = MEM_H(ctx->r16, 0XE4);
    // 0x8025DD00: lui         $a1, 0x8028
    ctx->r5 = S32(0X8028 << 16);
    // 0x8025DD04: sll         $t0, $t9, 1
    ctx->r8 = S32(ctx->r25 << 1);
    // 0x8025DD08: addu        $a1, $a1, $t0
    ctx->r5 = ADD32(ctx->r5, ctx->r8);
    // 0x8025DD0C: lhu         $a1, -0x4CCC($a1)
    ctx->r5 = MEM_HU(ctx->r5, -0X4CCC);
    // 0x8025DD10: b           L_8025DD30
    // 0x8025DD14: nop

        goto L_8025DD30;
    // 0x8025DD14: nop

L_8025DD18:
    // 0x8025DD18: lh          $t1, 0xE4($s0)
    ctx->r9 = MEM_H(ctx->r16, 0XE4);
    // 0x8025DD1C: lui         $a1, 0x8028
    ctx->r5 = S32(0X8028 << 16);
    // 0x8025DD20: sll         $t2, $t1, 1
    ctx->r10 = S32(ctx->r9 << 1);
    // 0x8025DD24: addu        $a1, $a1, $t2
    ctx->r5 = ADD32(ctx->r5, ctx->r10);
    // 0x8025DD28: lhu         $a1, -0x4CE4($a1)
    ctx->r5 = MEM_HU(ctx->r5, -0X4CE4);
    // 0x8025DD2C: nop

L_8025DD30:
    // 0x8025DD30: jal         0x80272D3C
    // 0x8025DD34: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    ovl_8024B800_func_80272D3C(rdram, ctx);
        goto after_2;
    // 0x8025DD34: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_2:
    // 0x8025DD38: lui         $v0, 0x8009
    ctx->r2 = S32(0X8009 << 16);
    // 0x8025DD3C: lw          $v0, 0x3B20($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X3B20);
    // 0x8025DD40: nop

    // 0x8025DD44: lhu         $t3, 0xC2($v0)
    ctx->r11 = MEM_HU(ctx->r2, 0XC2);
    // 0x8025DD48: nop

    // 0x8025DD4C: andi        $t4, $t3, 0x40
    ctx->r12 = ctx->r11 & 0X40;
    // 0x8025DD50: beq         $t4, $zero, L_8025DE3C
    if (ctx->r12 == 0) {
        // 0x8025DD54: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_8025DE3C;
    }
    // 0x8025DD54: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8025DD58: lw          $t5, 0x84($v0)
    ctx->r13 = MEM_W(ctx->r2, 0X84);
    // 0x8025DD5C: nop

    // 0x8025DD60: bne         $s0, $t5, L_8025DE3C
    if (ctx->r16 != ctx->r13) {
        // 0x8025DD64: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_8025DE3C;
    }
    // 0x8025DD64: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8025DD68: lhu         $t6, 0x16($s0)
    ctx->r14 = MEM_HU(ctx->r16, 0X16);
    // 0x8025DD6C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8025DD70: andi        $t7, $t6, 0xFFBF
    ctx->r15 = ctx->r14 & 0XFFBF;
    // 0x8025DD74: jal         0x80053CA0
    // 0x8025DD78: sh          $t7, 0x16($s0)
    MEM_H(0X16, ctx->r16) = ctx->r15;
    func_80053CA0(rdram, ctx);
        goto after_3;
    // 0x8025DD78: sh          $t7, 0x16($s0)
    MEM_H(0X16, ctx->r16) = ctx->r15;
    after_3:
    // 0x8025DD7C: mtc1        $zero, $f12
    ctx->f12.u32l = 0;
    // 0x8025DD80: nop

    // 0x8025DD84: mfc1        $a2, $f12
    ctx->r6 = (int32_t)ctx->f12.u32l;
    // 0x8025DD88: jal         0x80052FF0
    // 0x8025DD8C: mov.s       $f14, $f12
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 12);
    ctx->f14.fl = ctx->f12.fl;
    func_80052FF0(rdram, ctx);
        goto after_4;
    // 0x8025DD8C: mov.s       $f14, $f12
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 12);
    ctx->f14.fl = ctx->f12.fl;
    after_4:
    // 0x8025DD90: lui         $t9, 0x8009
    ctx->r25 = S32(0X8009 << 16);
    // 0x8025DD94: lw          $t9, 0x3B20($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X3B20);
    // 0x8025DD98: addiu       $t8, $zero, 0x2
    ctx->r24 = ADD32(0, 0X2);
    // 0x8025DD9C: b           L_8025DE38
    // 0x8025DDA0: sh          $t8, 0xBE($t9)
    MEM_H(0XBE, ctx->r25) = ctx->r24;
        goto L_8025DE38;
    // 0x8025DDA0: sh          $t8, 0xBE($t9)
    MEM_H(0XBE, ctx->r25) = ctx->r24;
L_8025DDA4:
    // 0x8025DDA4: jal         0x80272C74
    // 0x8025DDA8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_8024B800_func_80272C74(rdram, ctx);
        goto after_5;
    // 0x8025DDA8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_5:
    // 0x8025DDAC: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8025DDB0: bne         $v0, $at, L_8025DE3C
    if (ctx->r2 != ctx->r1) {
        // 0x8025DDB4: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_8025DE3C;
    }
    // 0x8025DDB4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8025DDB8: lbu         $t0, 0x0($s0)
    ctx->r8 = MEM_BU(ctx->r16, 0X0);
    // 0x8025DDBC: addiu       $at, $zero, 0x42
    ctx->r1 = ADD32(0, 0X42);
    // 0x8025DDC0: bne         $t0, $at, L_8025DE30
    if (ctx->r8 != ctx->r1) {
        // 0x8025DDC4: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_8025DE30;
    }
    // 0x8025DDC4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8025DDC8: lh          $v0, 0xE6($s0)
    ctx->r2 = MEM_H(ctx->r16, 0XE6);
    // 0x8025DDCC: nop

    // 0x8025DDD0: beq         $v0, $zero, L_8025DE30
    if (ctx->r2 == 0) {
        // 0x8025DDD4: nop
    
            goto L_8025DE30;
    }
    // 0x8025DDD4: nop

    // 0x8025DDD8: lh          $t2, 0xE4($s0)
    ctx->r10 = MEM_H(ctx->r16, 0XE4);
    // 0x8025DDDC: addiu       $at, $zero, 0xB
    ctx->r1 = ADD32(0, 0XB);
    // 0x8025DDE0: addiu       $t3, $t2, 0x4
    ctx->r11 = ADD32(ctx->r10, 0X4);
    // 0x8025DDE4: sh          $t3, 0xE4($s0)
    MEM_H(0XE4, ctx->r16) = ctx->r11;
    // 0x8025DDE8: lh          $t4, 0xE4($s0)
    ctx->r12 = MEM_H(ctx->r16, 0XE4);
    // 0x8025DDEC: addiu       $t1, $v0, -0x1
    ctx->r9 = ADD32(ctx->r2, -0X1);
    // 0x8025DDF0: div         $zero, $t4, $at
    lo = S32(S64(S32(ctx->r12)) / S64(S32(ctx->r1))); hi = S32(S64(S32(ctx->r12)) % S64(S32(ctx->r1)));
    // 0x8025DDF4: lui         $a1, 0x8028
    ctx->r5 = S32(0X8028 << 16);
    // 0x8025DDF8: sh          $t1, 0xE6($s0)
    MEM_H(0XE6, ctx->r16) = ctx->r9;
    // 0x8025DDFC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8025DE00: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x8025DE04: mfhi        $t5
    ctx->r13 = hi;
    // 0x8025DE08: sh          $t5, 0xE4($s0)
    MEM_H(0XE4, ctx->r16) = ctx->r13;
    // 0x8025DE0C: lh          $t6, 0xE4($s0)
    ctx->r14 = MEM_H(ctx->r16, 0XE4);
    // 0x8025DE10: nop

    // 0x8025DE14: sll         $t7, $t6, 1
    ctx->r15 = S32(ctx->r14 << 1);
    // 0x8025DE18: addu        $a1, $a1, $t7
    ctx->r5 = ADD32(ctx->r5, ctx->r15);
    // 0x8025DE1C: lhu         $a1, -0x4CCC($a1)
    ctx->r5 = MEM_HU(ctx->r5, -0X4CCC);
    // 0x8025DE20: jal         0x80272D3C
    // 0x8025DE24: nop

    ovl_8024B800_func_80272D3C(rdram, ctx);
        goto after_6;
    // 0x8025DE24: nop

    after_6:
    // 0x8025DE28: b           L_8025DE3C
    // 0x8025DE2C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_8025DE3C;
    // 0x8025DE2C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_8025DE30:
    // 0x8025DE30: jal         0x8024BC08
    // 0x8025DE34: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    ovl_8024B800_func_8024BC08(rdram, ctx);
        goto after_7;
    // 0x8025DE34: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_7:
L_8025DE38:
    // 0x8025DE38: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_8025DE3C:
    // 0x8025DE3C: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8025DE40: jr          $ra
    // 0x8025DE44: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x8025DE44: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void ovl_8024B800_func_8025DE48(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8025DE48: lui         $a1, 0x801B
    ctx->r5 = S32(0X801B << 16);
    // 0x8025DE4C: addiu       $a1, $a1, 0x3698
    ctx->r5 = ADD32(ctx->r5, 0X3698);
    // 0x8025DE50: lhu         $v1, 0x0($a1)
    ctx->r3 = MEM_HU(ctx->r5, 0X0);
    // 0x8025DE54: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8025DE58: andi        $t6, $v1, 0x1
    ctx->r14 = ctx->r3 & 0X1;
    // 0x8025DE5C: bne         $t6, $zero, L_8025DF54
    if (ctx->r14 != 0) {
        // 0x8025DE60: sw          $ra, 0x14($sp)
        MEM_W(0X14, ctx->r29) = ctx->r31;
            goto L_8025DF54;
    }
    // 0x8025DE60: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8025DE64: lw          $v0, 0xC8($a0)
    ctx->r2 = MEM_W(ctx->r4, 0XC8);
    // 0x8025DE68: nop

    // 0x8025DE6C: lhu         $t7, 0x14($v0)
    ctx->r15 = MEM_HU(ctx->r2, 0X14);
    // 0x8025DE70: nop

    // 0x8025DE74: slti        $at, $t7, 0x2
    ctx->r1 = SIGNED(ctx->r15) < 0X2 ? 1 : 0;
    // 0x8025DE78: bne         $at, $zero, L_8025DEAC
    if (ctx->r1 != 0) {
        // 0x8025DE7C: nop
    
            goto L_8025DEAC;
    }
    // 0x8025DE7C: nop

    // 0x8025DE80: lw          $t8, 0x24($v0)
    ctx->r24 = MEM_W(ctx->r2, 0X24);
    // 0x8025DE84: ori         $t0, $v1, 0x1
    ctx->r8 = ctx->r3 | 0X1;
    // 0x8025DE88: lhu         $t9, 0x14($t8)
    ctx->r25 = MEM_HU(ctx->r24, 0X14);
    // 0x8025DE8C: nop

    // 0x8025DE90: slti        $at, $t9, 0x2
    ctx->r1 = SIGNED(ctx->r25) < 0X2 ? 1 : 0;
    // 0x8025DE94: bne         $at, $zero, L_8025DEAC
    if (ctx->r1 != 0) {
        // 0x8025DE98: nop
    
            goto L_8025DEAC;
    }
    // 0x8025DE98: nop

    // 0x8025DE9C: jal         0x80077F38
    // 0x8025DEA0: sh          $t0, 0x0($a1)
    MEM_H(0X0, ctx->r5) = ctx->r8;
    func_80077F38(rdram, ctx);
        goto after_0;
    // 0x8025DEA0: sh          $t0, 0x0($a1)
    MEM_H(0X0, ctx->r5) = ctx->r8;
    after_0:
    // 0x8025DEA4: b           L_8025DF58
    // 0x8025DEA8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_8025DF58;
    // 0x8025DEA8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8025DEAC:
    // 0x8025DEAC: lhu         $t1, 0x8($v0)
    ctx->r9 = MEM_HU(ctx->r2, 0X8);
    // 0x8025DEB0: lui         $t7, 0x8012
    ctx->r15 = S32(0X8012 << 16);
    // 0x8025DEB4: andi        $t2, $t1, 0x100
    ctx->r10 = ctx->r9 & 0X100;
    // 0x8025DEB8: beq         $t2, $zero, L_8025DEEC
    if (ctx->r10 == 0) {
        // 0x8025DEBC: nop
    
            goto L_8025DEEC;
    }
    // 0x8025DEBC: nop

    // 0x8025DEC0: lw          $t3, 0x24($v0)
    ctx->r11 = MEM_W(ctx->r2, 0X24);
    // 0x8025DEC4: ori         $t6, $v1, 0x1
    ctx->r14 = ctx->r3 | 0X1;
    // 0x8025DEC8: lhu         $t4, 0x8($t3)
    ctx->r12 = MEM_HU(ctx->r11, 0X8);
    // 0x8025DECC: nop

    // 0x8025DED0: andi        $t5, $t4, 0x100
    ctx->r13 = ctx->r12 & 0X100;
    // 0x8025DED4: beq         $t5, $zero, L_8025DEEC
    if (ctx->r13 == 0) {
        // 0x8025DED8: nop
    
            goto L_8025DEEC;
    }
    // 0x8025DED8: nop

    // 0x8025DEDC: jal         0x80077F38
    // 0x8025DEE0: sh          $t6, 0x0($a1)
    MEM_H(0X0, ctx->r5) = ctx->r14;
    func_80077F38(rdram, ctx);
        goto after_1;
    // 0x8025DEE0: sh          $t6, 0x0($a1)
    MEM_H(0X0, ctx->r5) = ctx->r14;
    after_1:
    // 0x8025DEE4: b           L_8025DF58
    // 0x8025DEE8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_8025DF58;
    // 0x8025DEE8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8025DEEC:
    // 0x8025DEEC: lhu         $t7, 0xB72($t7)
    ctx->r15 = MEM_HU(ctx->r15, 0XB72);
    // 0x8025DEF0: nop

    // 0x8025DEF4: slti        $at, $t7, 0x4
    ctx->r1 = SIGNED(ctx->r15) < 0X4 ? 1 : 0;
    // 0x8025DEF8: beq         $at, $zero, L_8025DF34
    if (ctx->r1 == 0) {
        // 0x8025DEFC: nop
    
            goto L_8025DF34;
    }
    // 0x8025DEFC: nop

    // 0x8025DF00: lhu         $t8, 0x6($v0)
    ctx->r24 = MEM_HU(ctx->r2, 0X6);
    // 0x8025DF04: lui         $t9, 0x8012
    ctx->r25 = S32(0X8012 << 16);
    // 0x8025DF08: beq         $t8, $zero, L_8025DF24
    if (ctx->r24 == 0) {
        // 0x8025DF0C: ori         $t1, $v1, 0x1
        ctx->r9 = ctx->r3 | 0X1;
            goto L_8025DF24;
    }
    // 0x8025DF0C: ori         $t1, $v1, 0x1
    ctx->r9 = ctx->r3 | 0X1;
    // 0x8025DF10: lhu         $t9, -0x2CE8($t9)
    ctx->r25 = MEM_HU(ctx->r25, -0X2CE8);
    // 0x8025DF14: nop

    // 0x8025DF18: andi        $t0, $t9, 0x100
    ctx->r8 = ctx->r25 & 0X100;
    // 0x8025DF1C: bne         $t0, $zero, L_8025DF58
    if (ctx->r8 != 0) {
        // 0x8025DF20: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_8025DF58;
    }
    // 0x8025DF20: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8025DF24:
    // 0x8025DF24: jal         0x80077EE8
    // 0x8025DF28: sh          $t1, 0x0($a1)
    MEM_H(0X0, ctx->r5) = ctx->r9;
    func_80077EE8(rdram, ctx);
        goto after_2;
    // 0x8025DF28: sh          $t1, 0x0($a1)
    MEM_H(0X0, ctx->r5) = ctx->r9;
    after_2:
    // 0x8025DF2C: b           L_8025DF58
    // 0x8025DF30: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_8025DF58;
    // 0x8025DF30: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8025DF34:
    // 0x8025DF34: jal         0x80077EE8
    // 0x8025DF38: nop

    func_80077EE8(rdram, ctx);
        goto after_3;
    // 0x8025DF38: nop

    after_3:
    // 0x8025DF3C: lui         $a1, 0x801B
    ctx->r5 = S32(0X801B << 16);
    // 0x8025DF40: addiu       $a1, $a1, 0x3698
    ctx->r5 = ADD32(ctx->r5, 0X3698);
    // 0x8025DF44: lhu         $t2, 0x0($a1)
    ctx->r10 = MEM_HU(ctx->r5, 0X0);
    // 0x8025DF48: nop

    // 0x8025DF4C: ori         $t3, $t2, 0x1
    ctx->r11 = ctx->r10 | 0X1;
    // 0x8025DF50: sh          $t3, 0x0($a1)
    MEM_H(0X0, ctx->r5) = ctx->r11;
L_8025DF54:
    // 0x8025DF54: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8025DF58:
    // 0x8025DF58: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8025DF5C: jr          $ra
    // 0x8025DF60: nop

    return;
    // 0x8025DF60: nop

;}
RECOMP_FUNC void ovl_8024B800_func_8025DF64(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8025DF64: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8025DF68: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8025DF6C: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8025DF70: lh          $v1, 0xE8($a0)
    ctx->r3 = MEM_H(ctx->r4, 0XE8);
    // 0x8025DF74: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x8025DF78: xori        $v0, $v1, 0x28
    ctx->r2 = ctx->r3 ^ 0X28;
    // 0x8025DF7C: addiu       $t6, $v1, 0x1
    ctx->r14 = ADD32(ctx->r3, 0X1);
    // 0x8025DF80: bne         $v0, $zero, L_8025DF90
    if (ctx->r2 != 0) {
        // 0x8025DF84: sh          $t6, 0xE8($a0)
        MEM_H(0XE8, ctx->r4) = ctx->r14;
            goto L_8025DF90;
    }
    // 0x8025DF84: sh          $t6, 0xE8($a0)
    MEM_H(0XE8, ctx->r4) = ctx->r14;
    // 0x8025DF88: jal         0x8025DE48
    // 0x8025DF8C: nop

    ovl_8024B800_func_8025DE48(rdram, ctx);
        goto after_0;
    // 0x8025DF8C: nop

    after_0:
L_8025DF90:
    // 0x8025DF90: lhu         $v1, 0x10($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X10);
    // 0x8025DF94: lui         $t0, 0x8012
    ctx->r8 = S32(0X8012 << 16);
    // 0x8025DF98: beq         $v1, $zero, L_8025DFBC
    if (ctx->r3 == 0) {
        // 0x8025DF9C: or          $v0, $v1, $zero
        ctx->r2 = ctx->r3 | 0;
            goto L_8025DFBC;
    }
    // 0x8025DF9C: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    // 0x8025DFA0: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8025DFA4: beq         $v0, $at, L_8025E020
    if (ctx->r2 == ctx->r1) {
        // 0x8025DFA8: addiu       $at, $zero, 0x2
        ctx->r1 = ADD32(0, 0X2);
            goto L_8025E020;
    }
    // 0x8025DFA8: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x8025DFAC: beq         $v0, $at, L_8025E058
    if (ctx->r2 == ctx->r1) {
        // 0x8025DFB0: nop
    
            goto L_8025E058;
    }
    // 0x8025DFB0: nop

    // 0x8025DFB4: b           L_8025E110
    // 0x8025DFB8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_8025E110;
    // 0x8025DFB8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_8025DFBC:
    // 0x8025DFBC: lw          $t8, 0xC8($s0)
    ctx->r24 = MEM_W(ctx->r16, 0XC8);
    // 0x8025DFC0: addiu       $t7, $v1, 0x1
    ctx->r15 = ADD32(ctx->r3, 0X1);
    // 0x8025DFC4: sh          $t7, 0x10($s0)
    MEM_H(0X10, ctx->r16) = ctx->r15;
    // 0x8025DFC8: lhu         $t9, 0x6($t8)
    ctx->r25 = MEM_HU(ctx->r24, 0X6);
    // 0x8025DFCC: addiu       $at, $zero, 0xB
    ctx->r1 = ADD32(0, 0XB);
    // 0x8025DFD0: beq         $t9, $zero, L_8025DFE0
    if (ctx->r25 == 0) {
        // 0x8025DFD4: addiu       $v0, $zero, 0x3
        ctx->r2 = ADD32(0, 0X3);
            goto L_8025DFE0;
    }
    // 0x8025DFD4: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x8025DFD8: b           L_8025DFE0
    // 0x8025DFDC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_8025DFE0;
    // 0x8025DFDC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_8025DFE0:
    // 0x8025DFE0: lhu         $t0, -0x23C4($t0)
    ctx->r8 = MEM_HU(ctx->r8, -0X23C4);
    // 0x8025DFE4: lhu         $t2, 0x1A($s0)
    ctx->r10 = MEM_HU(ctx->r16, 0X1A);
    // 0x8025DFE8: addu        $t1, $v0, $t0
    ctx->r9 = ADD32(ctx->r2, ctx->r8);
    // 0x8025DFEC: addu        $v1, $t1, $t2
    ctx->r3 = ADD32(ctx->r9, ctx->r10);
    // 0x8025DFF0: div         $zero, $v1, $at
    lo = S32(S64(S32(ctx->r3)) / S64(S32(ctx->r1))); hi = S32(S64(S32(ctx->r3)) % S64(S32(ctx->r1)));
    // 0x8025DFF4: lui         $a1, 0x8028
    ctx->r5 = S32(0X8028 << 16);
    // 0x8025DFF8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8025DFFC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x8025E000: mfhi        $t3
    ctx->r11 = hi;
    // 0x8025E004: sll         $t4, $t3, 1
    ctx->r12 = S32(ctx->r11 << 1);
    // 0x8025E008: addu        $a1, $a1, $t4
    ctx->r5 = ADD32(ctx->r5, ctx->r12);
    // 0x8025E00C: lhu         $a1, -0x4CB4($a1)
    ctx->r5 = MEM_HU(ctx->r5, -0X4CB4);
    // 0x8025E010: jal         0x80272D3C
    // 0x8025E014: nop

    ovl_8024B800_func_80272D3C(rdram, ctx);
        goto after_1;
    // 0x8025E014: nop

    after_1:
    // 0x8025E018: b           L_8025E110
    // 0x8025E01C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_8025E110;
    // 0x8025E01C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_8025E020:
    // 0x8025E020: jal         0x80272C74
    // 0x8025E024: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_8024B800_func_80272C74(rdram, ctx);
        goto after_2;
    // 0x8025E024: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_2:
    // 0x8025E028: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8025E02C: bne         $v0, $at, L_8025E058
    if (ctx->r2 != ctx->r1) {
        // 0x8025E030: nop
    
            goto L_8025E058;
    }
    // 0x8025E030: nop

    // 0x8025E034: lhu         $t5, 0x10($s0)
    ctx->r13 = MEM_HU(ctx->r16, 0X10);
    // 0x8025E038: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8025E03C: addiu       $t6, $t5, 0x1
    ctx->r14 = ADD32(ctx->r13, 0X1);
    // 0x8025E040: jal         0x8024BAFC
    // 0x8025E044: sh          $t6, 0x10($s0)
    MEM_H(0X10, ctx->r16) = ctx->r14;
    ovl_8024B800_func_8024BAFC(rdram, ctx);
        goto after_3;
    // 0x8025E044: sh          $t6, 0x10($s0)
    MEM_H(0X10, ctx->r16) = ctx->r14;
    after_3:
    // 0x8025E048: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8025E04C: andi        $a1, $v0, 0xFFFF
    ctx->r5 = ctx->r2 & 0XFFFF;
    // 0x8025E050: jal         0x80272D3C
    // 0x8025E054: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    ovl_8024B800_func_80272D3C(rdram, ctx);
        goto after_4;
    // 0x8025E054: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_4:
L_8025E058:
    // 0x8025E058: lw          $t7, 0xE4($s0)
    ctx->r15 = MEM_W(ctx->r16, 0XE4);
    // 0x8025E05C: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x8025E060: lbu         $t8, 0x3($t7)
    ctx->r24 = MEM_BU(ctx->r15, 0X3);
    // 0x8025E064: addiu       $v0, $v0, 0xB69
    ctx->r2 = ADD32(ctx->r2, 0XB69);
    // 0x8025E068: andi        $t9, $t8, 0x20
    ctx->r25 = ctx->r24 & 0X20;
    // 0x8025E06C: beq         $t9, $zero, L_8025E10C
    if (ctx->r25 == 0) {
        // 0x8025E070: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_8025E10C;
    }
    // 0x8025E070: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8025E074: lbu         $t0, 0x0($v0)
    ctx->r8 = MEM_BU(ctx->r2, 0X0);
    // 0x8025E078: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x8025E07C: addiu       $t1, $t0, -0x1
    ctx->r9 = ADD32(ctx->r8, -0X1);
    // 0x8025E080: jal         0x8024BC08
    // 0x8025E084: sb          $t1, 0x0($v0)
    MEM_B(0X0, ctx->r2) = ctx->r9;
    ovl_8024B800_func_8024BC08(rdram, ctx);
        goto after_5;
    // 0x8025E084: sb          $t1, 0x0($v0)
    MEM_B(0X0, ctx->r2) = ctx->r9;
    after_5:
    // 0x8025E088: jal         0x8025DE48
    // 0x8025E08C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_8024B800_func_8025DE48(rdram, ctx);
        goto after_6;
    // 0x8025E08C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_6:
    // 0x8025E090: lui         $t2, 0x8012
    ctx->r10 = S32(0X8012 << 16);
    // 0x8025E094: lw          $t2, 0xB2C($t2)
    ctx->r10 = MEM_W(ctx->r10, 0XB2C);
    // 0x8025E098: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x8025E09C: bne         $s0, $t2, L_8025E110
    if (ctx->r16 != ctx->r10) {
        // 0x8025E0A0: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_8025E110;
    }
    // 0x8025E0A0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8025E0A4: lhu         $v0, 0xB78($v0)
    ctx->r2 = MEM_HU(ctx->r2, 0XB78);
    // 0x8025E0A8: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x8025E0AC: bne         $v0, $at, L_8025E0C0
    if (ctx->r2 != ctx->r1) {
        // 0x8025E0B0: lui         $t3, 0x8028
        ctx->r11 = S32(0X8028 << 16);
            goto L_8025E0C0;
    }
    // 0x8025E0B0: lui         $t3, 0x8028
    ctx->r11 = S32(0X8028 << 16);
    // 0x8025E0B4: addiu       $t3, $t3, -0x3454
    ctx->r11 = ADD32(ctx->r11, -0X3454);
    // 0x8025E0B8: b           L_8025E10C
    // 0x8025E0BC: sw          $t3, 0x28($s0)
    MEM_W(0X28, ctx->r16) = ctx->r11;
        goto L_8025E10C;
    // 0x8025E0BC: sw          $t3, 0x28($s0)
    MEM_W(0X28, ctx->r16) = ctx->r11;
L_8025E0C0:
    // 0x8025E0C0: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x8025E0C4: bne         $v0, $at, L_8025E0D8
    if (ctx->r2 != ctx->r1) {
        // 0x8025E0C8: lui         $t4, 0x8028
        ctx->r12 = S32(0X8028 << 16);
            goto L_8025E0D8;
    }
    // 0x8025E0C8: lui         $t4, 0x8028
    ctx->r12 = S32(0X8028 << 16);
    // 0x8025E0CC: addiu       $t4, $t4, -0x3440
    ctx->r12 = ADD32(ctx->r12, -0X3440);
    // 0x8025E0D0: b           L_8025E10C
    // 0x8025E0D4: sw          $t4, 0x28($s0)
    MEM_W(0X28, ctx->r16) = ctx->r12;
        goto L_8025E10C;
    // 0x8025E0D4: sw          $t4, 0x28($s0)
    MEM_W(0X28, ctx->r16) = ctx->r12;
L_8025E0D8:
    // 0x8025E0D8: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x8025E0DC: bne         $v0, $at, L_8025E0F0
    if (ctx->r2 != ctx->r1) {
        // 0x8025E0E0: lui         $t5, 0x8028
        ctx->r13 = S32(0X8028 << 16);
            goto L_8025E0F0;
    }
    // 0x8025E0E0: lui         $t5, 0x8028
    ctx->r13 = S32(0X8028 << 16);
    // 0x8025E0E4: addiu       $t5, $t5, -0x3438
    ctx->r13 = ADD32(ctx->r13, -0X3438);
    // 0x8025E0E8: b           L_8025E10C
    // 0x8025E0EC: sw          $t5, 0x28($s0)
    MEM_W(0X28, ctx->r16) = ctx->r13;
        goto L_8025E10C;
    // 0x8025E0EC: sw          $t5, 0x28($s0)
    MEM_W(0X28, ctx->r16) = ctx->r13;
L_8025E0F0:
    // 0x8025E0F0: addiu       $at, $zero, 0x7
    ctx->r1 = ADD32(0, 0X7);
    // 0x8025E0F4: beq         $v0, $at, L_8025E104
    if (ctx->r2 == ctx->r1) {
        // 0x8025E0F8: lui         $t6, 0x8028
        ctx->r14 = S32(0X8028 << 16);
            goto L_8025E104;
    }
    // 0x8025E0F8: lui         $t6, 0x8028
    ctx->r14 = S32(0X8028 << 16);
    // 0x8025E0FC: addiu       $at, $zero, 0x5
    ctx->r1 = ADD32(0, 0X5);
    // 0x8025E100: bne         $v0, $at, L_8025E10C
    if (ctx->r2 != ctx->r1) {
        // 0x8025E104: addiu       $t6, $t6, -0x3418
        ctx->r14 = ADD32(ctx->r14, -0X3418);
            goto L_8025E10C;
    }
L_8025E104:
    // 0x8025E104: addiu       $t6, $t6, -0x3418
    ctx->r14 = ADD32(ctx->r14, -0X3418);
    // 0x8025E108: sw          $t6, 0x28($s0)
    MEM_W(0X28, ctx->r16) = ctx->r14;
L_8025E10C:
    // 0x8025E10C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_8025E110:
    // 0x8025E110: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8025E114: jr          $ra
    // 0x8025E118: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x8025E118: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void ovl_8024B800_func_8025E11C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8025E11C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8025E120: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8025E124: lhu         $v1, 0x10($a0)
    ctx->r3 = MEM_HU(ctx->r4, 0X10);
    // 0x8025E128: or          $a3, $a0, $zero
    ctx->r7 = ctx->r4 | 0;
    // 0x8025E12C: beq         $v1, $zero, L_8025E154
    if (ctx->r3 == 0) {
        // 0x8025E130: or          $v0, $v1, $zero
        ctx->r2 = ctx->r3 | 0;
            goto L_8025E154;
    }
    // 0x8025E130: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    // 0x8025E134: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8025E138: beq         $v0, $at, L_8025E1BC
    if (ctx->r2 == ctx->r1) {
        // 0x8025E13C: lui         $a2, 0x8012
        ctx->r6 = S32(0X8012 << 16);
            goto L_8025E1BC;
    }
    // 0x8025E13C: lui         $a2, 0x8012
    ctx->r6 = S32(0X8012 << 16);
    // 0x8025E140: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x8025E144: beq         $v0, $at, L_8025E1FC
    if (ctx->r2 == ctx->r1) {
        // 0x8025E148: or          $a0, $a3, $zero
        ctx->r4 = ctx->r7 | 0;
            goto L_8025E1FC;
    }
    // 0x8025E148: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
    // 0x8025E14C: b           L_8025E220
    // 0x8025E150: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_8025E220;
    // 0x8025E150: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8025E154:
    // 0x8025E154: lui         $a2, 0x8012
    ctx->r6 = S32(0X8012 << 16);
    // 0x8025E158: addiu       $a2, $a2, 0xB28
    ctx->r6 = ADD32(ctx->r6, 0XB28);
    // 0x8025E15C: lw          $t6, 0x0($a2)
    ctx->r14 = MEM_W(ctx->r6, 0X0);
    // 0x8025E160: addiu       $t8, $zero, 0x2
    ctx->r24 = ADD32(0, 0X2);
    // 0x8025E164: beq         $a3, $t6, L_8025E1A0
    if (ctx->r7 == ctx->r14) {
        // 0x8025E168: addiu       $v0, $zero, 0x1D8
        ctx->r2 = ADD32(0, 0X1D8);
            goto L_8025E1A0;
    }
    // 0x8025E168: addiu       $v0, $zero, 0x1D8
    ctx->r2 = ADD32(0, 0X1D8);
    // 0x8025E16C: addiu       $t7, $v1, 0x1
    ctx->r15 = ADD32(ctx->r3, 0X1);
    // 0x8025E170: sh          $t7, 0x10($a3)
    MEM_H(0X10, ctx->r7) = ctx->r15;
    // 0x8025E174: addiu       $v0, $zero, 0x1DB
    ctx->r2 = ADD32(0, 0X1DB);
    // 0x8025E178: lw          $a0, 0x0($a2)
    ctx->r4 = MEM_W(ctx->r6, 0X0);
    // 0x8025E17C: lui         $a1, 0x8028
    ctx->r5 = S32(0X8028 << 16);
    // 0x8025E180: addiu       $a1, $a1, -0x3308
    ctx->r5 = ADD32(ctx->r5, -0X3308);
    // 0x8025E184: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    // 0x8025E188: jal         0x8026F2EC
    // 0x8025E18C: sw          $a3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r7;
    ovl_8024B800_func_8026F2EC(rdram, ctx);
        goto after_0;
    // 0x8025E18C: sw          $a3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r7;
    after_0:
    // 0x8025E190: lw          $v0, 0x1C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X1C);
    // 0x8025E194: lw          $a3, 0x20($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X20);
    // 0x8025E198: b           L_8025E1A8
    // 0x8025E19C: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
        goto L_8025E1A8;
    // 0x8025E19C: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
L_8025E1A0:
    // 0x8025E1A0: sh          $t8, 0x10($a3)
    MEM_H(0X10, ctx->r7) = ctx->r24;
    // 0x8025E1A4: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
L_8025E1A8:
    // 0x8025E1A8: andi        $a1, $v0, 0xFFFF
    ctx->r5 = ctx->r2 & 0XFFFF;
    // 0x8025E1AC: jal         0x80272D3C
    // 0x8025E1B0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    ovl_8024B800_func_80272D3C(rdram, ctx);
        goto after_1;
    // 0x8025E1B0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_1:
    // 0x8025E1B4: b           L_8025E220
    // 0x8025E1B8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_8025E220;
    // 0x8025E1B8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8025E1BC:
    // 0x8025E1BC: addiu       $a2, $a2, 0xB28
    ctx->r6 = ADD32(ctx->r6, 0XB28);
    // 0x8025E1C0: lw          $a0, 0x0($a2)
    ctx->r4 = MEM_W(ctx->r6, 0X0);
    // 0x8025E1C4: jal         0x80272C74
    // 0x8025E1C8: sw          $a3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r7;
    ovl_8024B800_func_80272C74(rdram, ctx);
        goto after_2;
    // 0x8025E1C8: sw          $a3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r7;
    after_2:
    // 0x8025E1CC: lw          $a3, 0x20($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X20);
    // 0x8025E1D0: addiu       $at, $zero, 0x1B
    ctx->r1 = ADD32(0, 0X1B);
    // 0x8025E1D4: bne         $v0, $at, L_8025E21C
    if (ctx->r2 != ctx->r1) {
        // 0x8025E1D8: or          $a0, $a3, $zero
        ctx->r4 = ctx->r7 | 0;
            goto L_8025E21C;
    }
    // 0x8025E1D8: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
    // 0x8025E1DC: lhu         $t9, 0x10($a3)
    ctx->r25 = MEM_HU(ctx->r7, 0X10);
    // 0x8025E1E0: addiu       $a1, $zero, 0x1D9
    ctx->r5 = ADD32(0, 0X1D9);
    // 0x8025E1E4: addiu       $t0, $t9, 0x1
    ctx->r8 = ADD32(ctx->r25, 0X1);
    // 0x8025E1E8: sh          $t0, 0x10($a3)
    MEM_H(0X10, ctx->r7) = ctx->r8;
    // 0x8025E1EC: jal         0x80272D3C
    // 0x8025E1F0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    ovl_8024B800_func_80272D3C(rdram, ctx);
        goto after_3;
    // 0x8025E1F0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_3:
    // 0x8025E1F4: b           L_8025E220
    // 0x8025E1F8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_8025E220;
    // 0x8025E1F8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8025E1FC:
    // 0x8025E1FC: jal         0x80272C74
    // 0x8025E200: sw          $a3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r7;
    ovl_8024B800_func_80272C74(rdram, ctx);
        goto after_4;
    // 0x8025E200: sw          $a3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r7;
    after_4:
    // 0x8025E204: lw          $a3, 0x20($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X20);
    // 0x8025E208: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8025E20C: bne         $v0, $at, L_8025E21C
    if (ctx->r2 != ctx->r1) {
        // 0x8025E210: or          $a0, $a3, $zero
        ctx->r4 = ctx->r7 | 0;
            goto L_8025E21C;
    }
    // 0x8025E210: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
    // 0x8025E214: jal         0x8024BC08
    // 0x8025E218: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    ovl_8024B800_func_8024BC08(rdram, ctx);
        goto after_5;
    // 0x8025E218: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_5:
L_8025E21C:
    // 0x8025E21C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8025E220:
    // 0x8025E220: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x8025E224: jr          $ra
    // 0x8025E228: nop

    return;
    // 0x8025E228: nop

;}
RECOMP_FUNC void ovl_8024B800_func_8025E22C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8025E22C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8025E230: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8025E234: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8025E238: jal         0x80272CDC
    // 0x8025E23C: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    ovl_8024B800_func_80272CDC(rdram, ctx);
        goto after_0;
    // 0x8025E23C: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    after_0:
    // 0x8025E240: jal         0x80272CC0
    // 0x8025E244: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_8024B800_func_80272CC0(rdram, ctx);
        goto after_1;
    // 0x8025E244: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
    // 0x8025E248: jal         0x80272CA4
    // 0x8025E24C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_8024B800_func_80272CA4(rdram, ctx);
        goto after_2;
    // 0x8025E24C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_2:
    // 0x8025E250: lhu         $v1, 0x10($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X10);
    // 0x8025E254: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8025E258: beq         $v1, $zero, L_8025E280
    if (ctx->r3 == 0) {
        // 0x8025E25C: or          $a0, $v1, $zero
        ctx->r4 = ctx->r3 | 0;
            goto L_8025E280;
    }
    // 0x8025E25C: or          $a0, $v1, $zero
    ctx->r4 = ctx->r3 | 0;
    // 0x8025E260: bne         $a0, $at, L_8025E2B4
    if (ctx->r4 != ctx->r1) {
        // 0x8025E264: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_8025E2B4;
    }
    // 0x8025E264: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8025E268: jal         0x80272C74
    // 0x8025E26C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_8024B800_func_80272C74(rdram, ctx);
        goto after_3;
    // 0x8025E26C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_3:
    // 0x8025E270: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8025E274: bne         $v0, $at, L_8025E2B0
    if (ctx->r2 != ctx->r1) {
        // 0x8025E278: andi        $v1, $zero, 0xFFFF
        ctx->r3 = 0 & 0XFFFF;
            goto L_8025E2B0;
    }
    // 0x8025E278: andi        $v1, $zero, 0xFFFF
    ctx->r3 = 0 & 0XFFFF;
    // 0x8025E27C: sh          $zero, 0x10($s0)
    MEM_H(0X10, ctx->r16) = 0;
L_8025E280:
    // 0x8025E280: addiu       $t6, $v1, 0x1
    ctx->r14 = ADD32(ctx->r3, 0X1);
    // 0x8025E284: sh          $t6, 0x10($s0)
    MEM_H(0X10, ctx->r16) = ctx->r14;
    // 0x8025E288: lui         $t7, 0x8028
    ctx->r15 = S32(0X8028 << 16);
    // 0x8025E28C: lh          $t7, -0x1B60($t7)
    ctx->r15 = MEM_H(ctx->r15, -0X1B60);
    // 0x8025E290: lui         $a1, 0x8028
    ctx->r5 = S32(0X8028 << 16);
    // 0x8025E294: andi        $t8, $t7, 0x3
    ctx->r24 = ctx->r15 & 0X3;
    // 0x8025E298: sll         $t9, $t8, 1
    ctx->r25 = S32(ctx->r24 << 1);
    // 0x8025E29C: addu        $a1, $a1, $t9
    ctx->r5 = ADD32(ctx->r5, ctx->r25);
    // 0x8025E2A0: lhu         $a1, -0x4C9C($a1)
    ctx->r5 = MEM_HU(ctx->r5, -0X4C9C);
    // 0x8025E2A4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8025E2A8: jal         0x80272D3C
    // 0x8025E2AC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    ovl_8024B800_func_80272D3C(rdram, ctx);
        goto after_4;
    // 0x8025E2AC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_4:
L_8025E2B0:
    // 0x8025E2B0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_8025E2B4:
    // 0x8025E2B4: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8025E2B8: jr          $ra
    // 0x8025E2BC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x8025E2BC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void ovl_8024B800_func_8025E2C0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8025E2C0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8025E2C4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8025E2C8: lhu         $v0, 0x10($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X10);
    // 0x8025E2CC: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x8025E2D0: bne         $v0, $zero, L_8025E2F8
    if (ctx->r2 != 0) {
        // 0x8025E2D4: addiu       $t6, $v0, 0x1
        ctx->r14 = ADD32(ctx->r2, 0X1);
            goto L_8025E2F8;
    }
    // 0x8025E2D4: addiu       $t6, $v0, 0x1
    ctx->r14 = ADD32(ctx->r2, 0X1);
    // 0x8025E2D8: sh          $t6, 0x10($a0)
    MEM_H(0X10, ctx->r4) = ctx->r14;
    // 0x8025E2DC: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8025E2E0: jal         0x80272D3C
    // 0x8025E2E4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    ovl_8024B800_func_80272D3C(rdram, ctx);
        goto after_0;
    // 0x8025E2E4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_0:
    // 0x8025E2E8: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x8025E2EC: addiu       $t7, $zero, 0x5
    ctx->r15 = ADD32(0, 0X5);
    // 0x8025E2F0: b           L_8025E320
    // 0x8025E2F4: sh          $t7, 0xE4($a0)
    MEM_H(0XE4, ctx->r4) = ctx->r15;
        goto L_8025E320;
    // 0x8025E2F4: sh          $t7, 0xE4($a0)
    MEM_H(0XE4, ctx->r4) = ctx->r15;
L_8025E2F8:
    // 0x8025E2F8: lh          $t8, 0xE4($a0)
    ctx->r24 = MEM_H(ctx->r4, 0XE4);
    // 0x8025E2FC: nop

    // 0x8025E300: addiu       $t9, $t8, -0x1
    ctx->r25 = ADD32(ctx->r24, -0X1);
    // 0x8025E304: sh          $t9, 0xE4($a0)
    MEM_H(0XE4, ctx->r4) = ctx->r25;
    // 0x8025E308: lh          $t0, 0xE4($a0)
    ctx->r8 = MEM_H(ctx->r4, 0XE4);
    // 0x8025E30C: nop

    // 0x8025E310: bne         $t0, $zero, L_8025E324
    if (ctx->r8 != 0) {
        // 0x8025E314: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_8025E324;
    }
    // 0x8025E314: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8025E318: jal         0x8024BC08
    // 0x8025E31C: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    ovl_8024B800_func_8024BC08(rdram, ctx);
        goto after_1;
    // 0x8025E31C: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_1:
L_8025E320:
    // 0x8025E320: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8025E324:
    // 0x8025E324: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8025E328: jr          $ra
    // 0x8025E32C: nop

    return;
    // 0x8025E32C: nop

;}
RECOMP_FUNC void ovl_8024B800_func_8025E330(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8025E330: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8025E334: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8025E338: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x8025E33C: jal         0x8025E354
    // 0x8025E340: sb          $zero, 0x3A8F($at)
    MEM_B(0X3A8F, ctx->r1) = 0;
    ovl_8024B800_func_8025E354(rdram, ctx);
        goto after_0;
    // 0x8025E340: sb          $zero, 0x3A8F($at)
    MEM_B(0X3A8F, ctx->r1) = 0;
    after_0:
    // 0x8025E344: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8025E348: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8025E34C: jr          $ra
    // 0x8025E350: nop

    return;
    // 0x8025E350: nop

;}
RECOMP_FUNC void ovl_8024B800_func_8025E354(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8025E354: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x8025E358: sh          $zero, 0x3A90($at)
    MEM_H(0X3A90, ctx->r1) = 0;
    // 0x8025E35C: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x8025E360: sh          $zero, 0x3A80($at)
    MEM_H(0X3A80, ctx->r1) = 0;
    // 0x8025E364: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x8025E368: sb          $zero, 0x3A8B($at)
    MEM_B(0X3A8B, ctx->r1) = 0;
    // 0x8025E36C: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x8025E370: sb          $zero, 0x3A8E($at)
    MEM_B(0X3A8E, ctx->r1) = 0;
    // 0x8025E374: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x8025E378: sb          $zero, 0x3A83($at)
    MEM_B(0X3A83, ctx->r1) = 0;
    // 0x8025E37C: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x8025E380: sb          $zero, 0x3A82($at)
    MEM_B(0X3A82, ctx->r1) = 0;
    // 0x8025E384: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x8025E388: sb          $zero, 0x3A84($at)
    MEM_B(0X3A84, ctx->r1) = 0;
    // 0x8025E38C: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x8025E390: sb          $zero, 0x3A92($at)
    MEM_B(0X3A92, ctx->r1) = 0;
    // 0x8025E394: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x8025E398: sb          $zero, 0x3A94($at)
    MEM_B(0X3A94, ctx->r1) = 0;
    // 0x8025E39C: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x8025E3A0: sh          $zero, 0x3AAE($at)
    MEM_H(0X3AAE, ctx->r1) = 0;
    // 0x8025E3A4: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x8025E3A8: sb          $zero, 0x3AB0($at)
    MEM_B(0X3AB0, ctx->r1) = 0;
    // 0x8025E3AC: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x8025E3B0: lui         $t6, 0x8011
    ctx->r14 = S32(0X8011 << 16);
    // 0x8025E3B4: lw          $t6, -0x2F98($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X2F98);
    // 0x8025E3B8: sb          $zero, 0x3A8C($at)
    MEM_B(0X3A8C, ctx->r1) = 0;
    // 0x8025E3BC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8025E3C0: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x8025E3C4: lui         $t7, 0x3
    ctx->r15 = S32(0X3 << 16);
    // 0x8025E3C8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8025E3CC: sb          $zero, 0x3A8D($at)
    MEM_B(0X3A8D, ctx->r1) = 0;
    // 0x8025E3D0: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8025E3D4: lbu         $t7, -0x765E($t7)
    ctx->r15 = MEM_BU(ctx->r15, -0X765E);
    // 0x8025E3D8: addiu       $at, $zero, 0xD
    ctx->r1 = ADD32(0, 0XD);
    // 0x8025E3DC: beq         $t7, $at, L_8025E3F0
    if (ctx->r15 == ctx->r1) {
        // 0x8025E3E0: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_8025E3F0;
    }
    // 0x8025E3E0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8025E3E4: jal         0x80074D64
    // 0x8025E3E8: nop

    func_80074D64(rdram, ctx);
        goto after_0;
    // 0x8025E3E8: nop

    after_0:
    // 0x8025E3EC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8025E3F0:
    // 0x8025E3F0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8025E3F4: jr          $ra
    // 0x8025E3F8: nop

    return;
    // 0x8025E3F8: nop

;}
RECOMP_FUNC void ovl_8024B800_func_8025E3FC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8025E3FC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8025E400: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8025E404: jal         0x80261BC8
    // 0x8025E408: nop

    ovl_8024B800_func_80261BC8(rdram, ctx);
        goto after_0;
    // 0x8025E408: nop

    after_0:
    // 0x8025E40C: jal         0x8025F170
    // 0x8025E410: nop

    ovl_8024B800_func_8025F170(rdram, ctx);
        goto after_1;
    // 0x8025E410: nop

    after_1:
    // 0x8025E414: jal         0x8025F648
    // 0x8025E418: nop

    ovl_8024B800_func_8025F648(rdram, ctx);
        goto after_2;
    // 0x8025E418: nop

    after_2:
    // 0x8025E41C: jal         0x8025E500
    // 0x8025E420: nop

    ovl_8024B800_func_8025E500(rdram, ctx);
        goto after_3;
    // 0x8025E420: nop

    after_3:
    // 0x8025E424: jal         0x8025E4C0
    // 0x8025E428: nop

    ovl_8024B800_func_8025E4C0(rdram, ctx);
        goto after_4;
    // 0x8025E428: nop

    after_4:
    // 0x8025E42C: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x8025E430: lhu         $v0, 0xB78($v0)
    ctx->r2 = MEM_HU(ctx->r2, 0XB78);
    // 0x8025E434: addiu       $at, $zero, 0xA
    ctx->r1 = ADD32(0, 0XA);
    // 0x8025E438: beq         $v0, $at, L_8025E44C
    if (ctx->r2 == ctx->r1) {
        // 0x8025E43C: addiu       $at, $zero, 0xB
        ctx->r1 = ADD32(0, 0XB);
            goto L_8025E44C;
    }
    // 0x8025E43C: addiu       $at, $zero, 0xB
    ctx->r1 = ADD32(0, 0XB);
    // 0x8025E440: beq         $v0, $at, L_8025E44C
    if (ctx->r2 == ctx->r1) {
        // 0x8025E444: addiu       $at, $zero, 0xC
        ctx->r1 = ADD32(0, 0XC);
            goto L_8025E44C;
    }
    // 0x8025E444: addiu       $at, $zero, 0xC
    ctx->r1 = ADD32(0, 0XC);
    // 0x8025E448: bne         $v0, $at, L_8025E4B0
    if (ctx->r2 != ctx->r1) {
        // 0x8025E44C: lui         $v0, 0x802C
        ctx->r2 = S32(0X802C << 16);
            goto L_8025E4B0;
    }
L_8025E44C:
    // 0x8025E44C: lui         $v0, 0x802C
    ctx->r2 = S32(0X802C << 16);
    // 0x8025E450: addiu       $v0, $v0, 0x3ACE
    ctx->r2 = ADD32(ctx->r2, 0X3ACE);
    // 0x8025E454: lbu         $t6, 0x0($v0)
    ctx->r14 = MEM_BU(ctx->r2, 0X0);
    // 0x8025E458: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8025E45C: addiu       $t7, $t6, -0x1
    ctx->r15 = ADD32(ctx->r14, -0X1);
    // 0x8025E460: andi        $t8, $t7, 0xFF
    ctx->r24 = ctx->r15 & 0XFF;
    // 0x8025E464: bne         $t8, $at, L_8025E4B0
    if (ctx->r24 != ctx->r1) {
        // 0x8025E468: sb          $t7, 0x0($v0)
        MEM_B(0X0, ctx->r2) = ctx->r15;
            goto L_8025E4B0;
    }
    // 0x8025E468: sb          $t7, 0x0($v0)
    MEM_B(0X0, ctx->r2) = ctx->r15;
    // 0x8025E46C: lui         $t9, 0x802C
    ctx->r25 = S32(0X802C << 16);
    // 0x8025E470: lbu         $t9, 0x39F0($t9)
    ctx->r25 = MEM_BU(ctx->r25, 0X39F0);
    // 0x8025E474: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x8025E478: bne         $t9, $zero, L_8025E4B0
    if (ctx->r25 != 0) {
        // 0x8025E47C: addiu       $v0, $v0, -0x2CF0
        ctx->r2 = ADD32(ctx->r2, -0X2CF0);
            goto L_8025E4B0;
    }
    // 0x8025E47C: addiu       $v0, $v0, -0x2CF0
    ctx->r2 = ADD32(ctx->r2, -0X2CF0);
    // 0x8025E480: lhu         $t0, 0x8($v0)
    ctx->r8 = MEM_HU(ctx->r2, 0X8);
    // 0x8025E484: nop

    // 0x8025E488: andi        $t1, $t0, 0x1000
    ctx->r9 = ctx->r8 & 0X1000;
    // 0x8025E48C: bne         $t1, $zero, L_8025E4B4
    if (ctx->r9 != 0) {
        // 0x8025E490: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_8025E4B4;
    }
    // 0x8025E490: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8025E494: lhu         $t2, 0xA9C($v0)
    ctx->r10 = MEM_HU(ctx->r2, 0XA9C);
    // 0x8025E498: nop

    // 0x8025E49C: andi        $t3, $t2, 0x1000
    ctx->r11 = ctx->r10 & 0X1000;
    // 0x8025E4A0: bne         $t3, $zero, L_8025E4B4
    if (ctx->r11 != 0) {
        // 0x8025E4A4: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_8025E4B4;
    }
    // 0x8025E4A4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8025E4A8: jal         0x800753D8
    // 0x8025E4AC: nop

    func_800753D8(rdram, ctx);
        goto after_5;
    // 0x8025E4AC: nop

    after_5:
L_8025E4B0:
    // 0x8025E4B0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8025E4B4:
    // 0x8025E4B4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8025E4B8: jr          $ra
    // 0x8025E4BC: nop

    return;
    // 0x8025E4BC: nop

;}
RECOMP_FUNC void ovl_8024B800_func_8025E4C0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8025E4C0: lui         $v1, 0x802C
    ctx->r3 = S32(0X802C << 16);
    // 0x8025E4C4: addiu       $v1, $v1, 0x3A94
    ctx->r3 = ADD32(ctx->r3, 0X3A94);
    // 0x8025E4C8: lbu         $v0, 0x0($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X0);
    // 0x8025E4CC: nop

    // 0x8025E4D0: beq         $v0, $zero, L_8025E4DC
    if (ctx->r2 == 0) {
        // 0x8025E4D4: addiu       $t6, $v0, -0x1
        ctx->r14 = ADD32(ctx->r2, -0X1);
            goto L_8025E4DC;
    }
    // 0x8025E4D4: addiu       $t6, $v0, -0x1
    ctx->r14 = ADD32(ctx->r2, -0X1);
    // 0x8025E4D8: sb          $t6, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r14;
L_8025E4DC:
    // 0x8025E4DC: lui         $v1, 0x802C
    ctx->r3 = S32(0X802C << 16);
    // 0x8025E4E0: addiu       $v1, $v1, 0x3A90
    ctx->r3 = ADD32(ctx->r3, 0X3A90);
    // 0x8025E4E4: lhu         $v0, 0x0($v1)
    ctx->r2 = MEM_HU(ctx->r3, 0X0);
    // 0x8025E4E8: nop

    // 0x8025E4EC: beq         $v0, $zero, L_8025E4F8
    if (ctx->r2 == 0) {
        // 0x8025E4F0: addiu       $t7, $v0, -0x1
        ctx->r15 = ADD32(ctx->r2, -0X1);
            goto L_8025E4F8;
    }
    // 0x8025E4F0: addiu       $t7, $v0, -0x1
    ctx->r15 = ADD32(ctx->r2, -0X1);
    // 0x8025E4F4: sh          $t7, 0x0($v1)
    MEM_H(0X0, ctx->r3) = ctx->r15;
L_8025E4F8:
    // 0x8025E4F8: jr          $ra
    // 0x8025E4FC: nop

    return;
    // 0x8025E4FC: nop

;}
RECOMP_FUNC void ovl_8024B800_func_8025E500(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8025E500: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8025E504: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8025E508: jal         0x8025E6CC
    // 0x8025E50C: nop

    ovl_8024B800_func_8025E6CC(rdram, ctx);
        goto after_0;
    // 0x8025E50C: nop

    after_0:
    // 0x8025E510: lui         $a0, 0x802C
    ctx->r4 = S32(0X802C << 16);
    // 0x8025E514: addiu       $a0, $a0, 0x3AAC
    ctx->r4 = ADD32(ctx->r4, 0X3AAC);
    // 0x8025E518: lhu         $v0, 0x0($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X0);
    // 0x8025E51C: lui         $t7, 0x8012
    ctx->r15 = S32(0X8012 << 16);
    // 0x8025E520: beq         $v0, $zero, L_8025E52C
    if (ctx->r2 == 0) {
        // 0x8025E524: addiu       $t6, $v0, -0x1
        ctx->r14 = ADD32(ctx->r2, -0X1);
            goto L_8025E52C;
    }
    // 0x8025E524: addiu       $t6, $v0, -0x1
    ctx->r14 = ADD32(ctx->r2, -0X1);
    // 0x8025E528: sh          $t6, 0x0($a0)
    MEM_H(0X0, ctx->r4) = ctx->r14;
L_8025E52C:
    // 0x8025E52C: lhu         $t7, 0xB7A($t7)
    ctx->r15 = MEM_HU(ctx->r15, 0XB7A);
    // 0x8025E530: lui         $t8, 0x8009
    ctx->r24 = S32(0X8009 << 16);
    // 0x8025E534: bne         $t7, $zero, L_8025E6BC
    if (ctx->r15 != 0) {
        // 0x8025E538: lui         $at, 0x8028
        ctx->r1 = S32(0X8028 << 16);
            goto L_8025E6BC;
    }
    // 0x8025E538: lui         $at, 0x8028
    ctx->r1 = S32(0X8028 << 16);
    // 0x8025E53C: lw          $t8, 0x3B20($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X3B20);
    // 0x8025E540: lwc1        $f7, -0x37C8($at)
    ctx->f_odd[(7 - 1) * 2] = MEM_W(ctx->r1, -0X37C8);
    // 0x8025E544: lwc1        $f4, 0x8($t8)
    ctx->f4.u32l = MEM_W(ctx->r24, 0X8);
    // 0x8025E548: lwc1        $f6, -0x37C4($at)
    ctx->f6.u32l = MEM_W(ctx->r1, -0X37C4);
    // 0x8025E54C: cvt.d.s     $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f0.d = CVT_D_S(ctx->f4.fl);
    // 0x8025E550: c.lt.d      $f0, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f0.d < ctx->f6.d;
    // 0x8025E554: lui         $at, 0x8028
    ctx->r1 = S32(0X8028 << 16);
    // 0x8025E558: bc1f        L_8025E6C0
    if (!c1cs) {
        // 0x8025E55C: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_8025E6C0;
    }
    // 0x8025E55C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8025E560: lwc1        $f9, -0x37C0($at)
    ctx->f_odd[(9 - 1) * 2] = MEM_W(ctx->r1, -0X37C0);
    // 0x8025E564: lwc1        $f8, -0x37BC($at)
    ctx->f8.u32l = MEM_W(ctx->r1, -0X37BC);
    // 0x8025E568: nop

    // 0x8025E56C: c.lt.d      $f8, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f8.d < ctx->f0.d;
    // 0x8025E570: nop

    // 0x8025E574: bc1f        L_8025E6C0
    if (!c1cs) {
        // 0x8025E578: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_8025E6C0;
    }
    // 0x8025E578: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8025E57C: jal         0x8025E8CC
    // 0x8025E580: nop

    ovl_8024B800_func_8025E8CC(rdram, ctx);
        goto after_1;
    // 0x8025E580: nop

    after_1:
    // 0x8025E584: lui         $v1, 0x802C
    ctx->r3 = S32(0X802C << 16);
    // 0x8025E588: lhu         $v1, 0x3944($v1)
    ctx->r3 = MEM_HU(ctx->r3, 0X3944);
    // 0x8025E58C: lui         $a0, 0x802C
    ctx->r4 = S32(0X802C << 16);
    // 0x8025E590: slti        $at, $v1, 0x10
    ctx->r1 = SIGNED(ctx->r3) < 0X10 ? 1 : 0;
    // 0x8025E594: bne         $at, $zero, L_8025E5E0
    if (ctx->r1 != 0) {
        // 0x8025E598: addiu       $a0, $a0, 0x3AAC
        ctx->r4 = ADD32(ctx->r4, 0X3AAC);
            goto L_8025E5E0;
    }
    // 0x8025E598: addiu       $a0, $a0, 0x3AAC
    ctx->r4 = ADD32(ctx->r4, 0X3AAC);
    // 0x8025E59C: lui         $t9, 0x802C
    ctx->r25 = S32(0X802C << 16);
    // 0x8025E5A0: lhu         $t9, 0x38D0($t9)
    ctx->r25 = MEM_HU(ctx->r25, 0X38D0);
    // 0x8025E5A4: nop

    // 0x8025E5A8: slti        $at, $t9, 0xB
    ctx->r1 = SIGNED(ctx->r25) < 0XB ? 1 : 0;
    // 0x8025E5AC: bne         $at, $zero, L_8025E6C0
    if (ctx->r1 != 0) {
        // 0x8025E5B0: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_8025E6C0;
    }
    // 0x8025E5B0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8025E5B4: lhu         $t0, 0x0($a0)
    ctx->r8 = MEM_HU(ctx->r4, 0X0);
    // 0x8025E5B8: nop

    // 0x8025E5BC: bne         $t0, $zero, L_8025E6C0
    if (ctx->r8 != 0) {
        // 0x8025E5C0: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_8025E6C0;
    }
    // 0x8025E5C0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8025E5C4: jal         0x8025EC90
    // 0x8025E5C8: nop

    ovl_8024B800_func_8025EC90(rdram, ctx);
        goto after_2;
    // 0x8025E5C8: nop

    after_2:
    // 0x8025E5CC: lui         $a0, 0x802C
    ctx->r4 = S32(0X802C << 16);
    // 0x8025E5D0: addiu       $a0, $a0, 0x3AAC
    ctx->r4 = ADD32(ctx->r4, 0X3AAC);
    // 0x8025E5D4: addiu       $t1, $zero, 0xB4
    ctx->r9 = ADD32(0, 0XB4);
    // 0x8025E5D8: b           L_8025E6BC
    // 0x8025E5DC: sh          $t1, 0x0($a0)
    MEM_H(0X0, ctx->r4) = ctx->r9;
        goto L_8025E6BC;
    // 0x8025E5DC: sh          $t1, 0x0($a0)
    MEM_H(0X0, ctx->r4) = ctx->r9;
L_8025E5E0:
    // 0x8025E5E0: lui         $v0, 0x802C
    ctx->r2 = S32(0X802C << 16);
    // 0x8025E5E4: lbu         $v0, 0x3AA9($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X3AA9);
    // 0x8025E5E8: lui         $t3, 0x8012
    ctx->r11 = S32(0X8012 << 16);
    // 0x8025E5EC: andi        $t2, $v0, 0x20
    ctx->r10 = ctx->r2 & 0X20;
    // 0x8025E5F0: bne         $t2, $zero, L_8025E638
    if (ctx->r10 != 0) {
        // 0x8025E5F4: andi        $t6, $v0, 0x10
        ctx->r14 = ctx->r2 & 0X10;
            goto L_8025E638;
    }
    // 0x8025E5F4: andi        $t6, $v0, 0x10
    ctx->r14 = ctx->r2 & 0X10;
    // 0x8025E5F8: lhu         $t3, 0xB74($t3)
    ctx->r11 = MEM_HU(ctx->r11, 0XB74);
    // 0x8025E5FC: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x8025E600: bne         $t3, $at, L_8025E634
    if (ctx->r11 != ctx->r1) {
        // 0x8025E604: addiu       $at, $zero, 0x5
        ctx->r1 = ADD32(0, 0X5);
            goto L_8025E634;
    }
    // 0x8025E604: addiu       $at, $zero, 0x5
    ctx->r1 = ADD32(0, 0X5);
    // 0x8025E608: bne         $v1, $at, L_8025E634
    if (ctx->r3 != ctx->r1) {
        // 0x8025E60C: addiu       $a0, $zero, 0x417
        ctx->r4 = ADD32(0, 0X417);
            goto L_8025E634;
    }
    // 0x8025E60C: addiu       $a0, $zero, 0x417
    ctx->r4 = ADD32(0, 0X417);
    // 0x8025E610: jal         0x802A14C0
    // 0x8025E614: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    LOOKUP_FUNC(0x802A14C0)(rdram, ctx);
        goto after_3;
    // 0x8025E614: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_3:
    // 0x8025E618: lui         $v1, 0x802C
    ctx->r3 = S32(0X802C << 16);
    // 0x8025E61C: addiu       $v1, $v1, 0x3AA9
    ctx->r3 = ADD32(ctx->r3, 0X3AA9);
    // 0x8025E620: lbu         $t4, 0x0($v1)
    ctx->r12 = MEM_BU(ctx->r3, 0X0);
    // 0x8025E624: nop

    // 0x8025E628: ori         $t5, $t4, 0x20
    ctx->r13 = ctx->r12 | 0X20;
    // 0x8025E62C: sb          $t5, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r13;
    // 0x8025E630: andi        $v0, $t5, 0xFF
    ctx->r2 = ctx->r13 & 0XFF;
L_8025E634:
    // 0x8025E634: andi        $t6, $v0, 0x10
    ctx->r14 = ctx->r2 & 0X10;
L_8025E638:
    // 0x8025E638: bne         $t6, $zero, L_8025E6BC
    if (ctx->r14 != 0) {
        // 0x8025E63C: lui         $t7, 0x8012
        ctx->r15 = S32(0X8012 << 16);
            goto L_8025E6BC;
    }
    // 0x8025E63C: lui         $t7, 0x8012
    ctx->r15 = S32(0X8012 << 16);
    // 0x8025E640: lhu         $t7, 0xB74($t7)
    ctx->r15 = MEM_HU(ctx->r15, 0XB74);
    // 0x8025E644: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x8025E648: bne         $a0, $t7, L_8025E6BC
    if (ctx->r4 != ctx->r15) {
        // 0x8025E64C: lui         $t8, 0x802C
        ctx->r24 = S32(0X802C << 16);
            goto L_8025E6BC;
    }
    // 0x8025E64C: lui         $t8, 0x802C
    ctx->r24 = S32(0X802C << 16);
    // 0x8025E650: lhu         $t8, 0x3944($t8)
    ctx->r24 = MEM_HU(ctx->r24, 0X3944);
    // 0x8025E654: addiu       $at, $zero, 0x5
    ctx->r1 = ADD32(0, 0X5);
    // 0x8025E658: bne         $t8, $at, L_8025E6BC
    if (ctx->r24 != ctx->r1) {
        // 0x8025E65C: lui         $v1, 0x8012
        ctx->r3 = S32(0X8012 << 16);
            goto L_8025E6BC;
    }
    // 0x8025E65C: lui         $v1, 0x8012
    ctx->r3 = S32(0X8012 << 16);
    // 0x8025E660: addiu       $v1, $v1, -0x2CF0
    ctx->r3 = ADD32(ctx->r3, -0X2CF0);
    // 0x8025E664: lhu         $t9, 0xA9E($v1)
    ctx->r25 = MEM_HU(ctx->r3, 0XA9E);
    // 0x8025E668: lhu         $t0, 0xA($v1)
    ctx->r8 = MEM_HU(ctx->r3, 0XA);
    // 0x8025E66C: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x8025E670: subu        $v0, $t9, $t0
    ctx->r2 = SUB32(ctx->r25, ctx->r8);
    // 0x8025E674: beq         $a0, $v0, L_8025E684
    if (ctx->r4 == ctx->r2) {
        // 0x8025E678: nop
    
            goto L_8025E684;
    }
    // 0x8025E678: nop

    // 0x8025E67C: bne         $v0, $at, L_8025E6C0
    if (ctx->r2 != ctx->r1) {
        // 0x8025E680: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_8025E6C0;
    }
    // 0x8025E680: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8025E684:
    // 0x8025E684: jal         0x80077060
    // 0x8025E688: nop

    func_80077060(rdram, ctx);
        goto after_4;
    // 0x8025E688: nop

    after_4:
    // 0x8025E68C: addiu       $a0, $zero, 0x4E6
    ctx->r4 = ADD32(0, 0X4E6);
    // 0x8025E690: jal         0x802A14C0
    // 0x8025E694: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    LOOKUP_FUNC(0x802A14C0)(rdram, ctx);
        goto after_5;
    // 0x8025E694: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_5:
    // 0x8025E698: addiu       $a0, $zero, 0x4C6
    ctx->r4 = ADD32(0, 0X4C6);
    // 0x8025E69C: jal         0x802A14C0
    // 0x8025E6A0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    LOOKUP_FUNC(0x802A14C0)(rdram, ctx);
        goto after_6;
    // 0x8025E6A0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_6:
    // 0x8025E6A4: lui         $v0, 0x802C
    ctx->r2 = S32(0X802C << 16);
    // 0x8025E6A8: addiu       $v0, $v0, 0x3AA9
    ctx->r2 = ADD32(ctx->r2, 0X3AA9);
    // 0x8025E6AC: lbu         $t1, 0x0($v0)
    ctx->r9 = MEM_BU(ctx->r2, 0X0);
    // 0x8025E6B0: nop

    // 0x8025E6B4: ori         $t2, $t1, 0x10
    ctx->r10 = ctx->r9 | 0X10;
    // 0x8025E6B8: sb          $t2, 0x0($v0)
    MEM_B(0X0, ctx->r2) = ctx->r10;
L_8025E6BC:
    // 0x8025E6BC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8025E6C0:
    // 0x8025E6C0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8025E6C4: jr          $ra
    // 0x8025E6C8: nop

    return;
    // 0x8025E6C8: nop

;}
RECOMP_FUNC void ovl_8024B800_func_8025E6CC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8025E6CC: lui         $v0, 0x802C
    ctx->r2 = S32(0X802C << 16);
    // 0x8025E6D0: lhu         $v0, 0x3944($v0)
    ctx->r2 = MEM_HU(ctx->r2, 0X3944);
    // 0x8025E6D4: addiu       $at, $zero, 0x3C
    ctx->r1 = ADD32(0, 0X3C);
    // 0x8025E6D8: bne         $v0, $at, L_8025E6F8
    if (ctx->r2 != ctx->r1) {
        // 0x8025E6DC: lui         $v1, 0x8012
        ctx->r3 = S32(0X8012 << 16);
            goto L_8025E6F8;
    }
    // 0x8025E6DC: lui         $v1, 0x8012
    ctx->r3 = S32(0X8012 << 16);
    // 0x8025E6E0: lui         $a1, 0x802C
    ctx->r5 = S32(0X802C << 16);
    // 0x8025E6E4: addiu       $a1, $a1, 0x3AA4
    ctx->r5 = ADD32(ctx->r5, 0X3AA4);
    // 0x8025E6E8: lhu         $t6, 0x0($a1)
    ctx->r14 = MEM_HU(ctx->r5, 0X0);
    // 0x8025E6EC: nop

    // 0x8025E6F0: ori         $t7, $t6, 0x1
    ctx->r15 = ctx->r14 | 0X1;
    // 0x8025E6F4: sh          $t7, 0x0($a1)
    MEM_H(0X0, ctx->r5) = ctx->r15;
L_8025E6F8:
    // 0x8025E6F8: lui         $a1, 0x802C
    ctx->r5 = S32(0X802C << 16);
    // 0x8025E6FC: addiu       $at, $zero, 0x78
    ctx->r1 = ADD32(0, 0X78);
    // 0x8025E700: bne         $v0, $at, L_8025E740
    if (ctx->r2 != ctx->r1) {
        // 0x8025E704: addiu       $a1, $a1, 0x3AA4
        ctx->r5 = ADD32(ctx->r5, 0X3AA4);
            goto L_8025E740;
    }
    // 0x8025E704: addiu       $a1, $a1, 0x3AA4
    ctx->r5 = ADD32(ctx->r5, 0X3AA4);
    // 0x8025E708: lui         $t8, 0x8012
    ctx->r24 = S32(0X8012 << 16);
    // 0x8025E70C: lb          $t8, -0x309D($t8)
    ctx->r24 = MEM_B(ctx->r24, -0X309D);
    // 0x8025E710: nop

    // 0x8025E714: bne         $t8, $zero, L_8025E730
    if (ctx->r24 != 0) {
        // 0x8025E718: nop
    
            goto L_8025E730;
    }
    // 0x8025E718: nop

    // 0x8025E71C: lhu         $t9, 0x0($a1)
    ctx->r25 = MEM_HU(ctx->r5, 0X0);
    // 0x8025E720: nop

    // 0x8025E724: ori         $t0, $t9, 0x20
    ctx->r8 = ctx->r25 | 0X20;
    // 0x8025E728: b           L_8025E740
    // 0x8025E72C: sh          $t0, 0x0($a1)
    MEM_H(0X0, ctx->r5) = ctx->r8;
        goto L_8025E740;
    // 0x8025E72C: sh          $t0, 0x0($a1)
    MEM_H(0X0, ctx->r5) = ctx->r8;
L_8025E730:
    // 0x8025E730: lhu         $t1, 0x0($a1)
    ctx->r9 = MEM_HU(ctx->r5, 0X0);
    // 0x8025E734: nop

    // 0x8025E738: ori         $t2, $t1, 0x2
    ctx->r10 = ctx->r9 | 0X2;
    // 0x8025E73C: sh          $t2, 0x0($a1)
    MEM_H(0X0, ctx->r5) = ctx->r10;
L_8025E740:
    // 0x8025E740: lb          $v1, -0x309D($v1)
    ctx->r3 = MEM_B(ctx->r3, -0X309D);
    // 0x8025E744: addiu       $at, $zero, 0xB4
    ctx->r1 = ADD32(0, 0XB4);
    // 0x8025E748: beq         $v1, $zero, L_8025E7E0
    if (ctx->r3 == 0) {
        // 0x8025E74C: lui         $a0, 0x802C
        ctx->r4 = S32(0X802C << 16);
            goto L_8025E7E0;
    }
    // 0x8025E74C: lui         $a0, 0x802C
    ctx->r4 = S32(0X802C << 16);
    // 0x8025E750: bne         $v0, $at, L_8025E76C
    if (ctx->r2 != ctx->r1) {
        // 0x8025E754: addiu       $at, $zero, 0xF0
        ctx->r1 = ADD32(0, 0XF0);
            goto L_8025E76C;
    }
    // 0x8025E754: addiu       $at, $zero, 0xF0
    ctx->r1 = ADD32(0, 0XF0);
    // 0x8025E758: lhu         $t3, 0x0($a1)
    ctx->r11 = MEM_HU(ctx->r5, 0X0);
    // 0x8025E75C: nop

    // 0x8025E760: ori         $t4, $t3, 0x4
    ctx->r12 = ctx->r11 | 0X4;
    // 0x8025E764: sh          $t4, 0x0($a1)
    MEM_H(0X0, ctx->r5) = ctx->r12;
    // 0x8025E768: addiu       $at, $zero, 0xF0
    ctx->r1 = ADD32(0, 0XF0);
L_8025E76C:
    // 0x8025E76C: bne         $v0, $at, L_8025E7A0
    if (ctx->r2 != ctx->r1) {
        // 0x8025E770: addiu       $at, $zero, 0x1
        ctx->r1 = ADD32(0, 0X1);
            goto L_8025E7A0;
    }
    // 0x8025E770: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8025E774: bne         $v1, $at, L_8025E790
    if (ctx->r3 != ctx->r1) {
        // 0x8025E778: nop
    
            goto L_8025E790;
    }
    // 0x8025E778: nop

    // 0x8025E77C: lhu         $t5, 0x0($a1)
    ctx->r13 = MEM_HU(ctx->r5, 0X0);
    // 0x8025E780: nop

    // 0x8025E784: ori         $t6, $t5, 0x20
    ctx->r14 = ctx->r13 | 0X20;
    // 0x8025E788: b           L_8025E7A0
    // 0x8025E78C: sh          $t6, 0x0($a1)
    MEM_H(0X0, ctx->r5) = ctx->r14;
        goto L_8025E7A0;
    // 0x8025E78C: sh          $t6, 0x0($a1)
    MEM_H(0X0, ctx->r5) = ctx->r14;
L_8025E790:
    // 0x8025E790: lhu         $t7, 0x0($a1)
    ctx->r15 = MEM_HU(ctx->r5, 0X0);
    // 0x8025E794: nop

    // 0x8025E798: ori         $t8, $t7, 0x8
    ctx->r24 = ctx->r15 | 0X8;
    // 0x8025E79C: sh          $t8, 0x0($a1)
    MEM_H(0X0, ctx->r5) = ctx->r24;
L_8025E7A0:
    // 0x8025E7A0: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x8025E7A4: bne         $v1, $at, L_8025E7E0
    if (ctx->r3 != ctx->r1) {
        // 0x8025E7A8: addiu       $at, $zero, 0x12C
        ctx->r1 = ADD32(0, 0X12C);
            goto L_8025E7E0;
    }
    // 0x8025E7A8: addiu       $at, $zero, 0x12C
    ctx->r1 = ADD32(0, 0X12C);
    // 0x8025E7AC: bne         $v0, $at, L_8025E7C8
    if (ctx->r2 != ctx->r1) {
        // 0x8025E7B0: addiu       $at, $zero, 0x168
        ctx->r1 = ADD32(0, 0X168);
            goto L_8025E7C8;
    }
    // 0x8025E7B0: addiu       $at, $zero, 0x168
    ctx->r1 = ADD32(0, 0X168);
    // 0x8025E7B4: lhu         $t9, 0x0($a1)
    ctx->r25 = MEM_HU(ctx->r5, 0X0);
    // 0x8025E7B8: nop

    // 0x8025E7BC: ori         $t0, $t9, 0x10
    ctx->r8 = ctx->r25 | 0X10;
    // 0x8025E7C0: sh          $t0, 0x0($a1)
    MEM_H(0X0, ctx->r5) = ctx->r8;
    // 0x8025E7C4: addiu       $at, $zero, 0x168
    ctx->r1 = ADD32(0, 0X168);
L_8025E7C8:
    // 0x8025E7C8: bne         $v0, $at, L_8025E7E0
    if (ctx->r2 != ctx->r1) {
        // 0x8025E7CC: nop
    
            goto L_8025E7E0;
    }
    // 0x8025E7CC: nop

    // 0x8025E7D0: lhu         $t1, 0x0($a1)
    ctx->r9 = MEM_HU(ctx->r5, 0X0);
    // 0x8025E7D4: nop

    // 0x8025E7D8: ori         $t2, $t1, 0x20
    ctx->r10 = ctx->r9 | 0X20;
    // 0x8025E7DC: sh          $t2, 0x0($a1)
    MEM_H(0X0, ctx->r5) = ctx->r10;
L_8025E7E0:
    // 0x8025E7E0: lhu         $a0, 0x38D0($a0)
    ctx->r4 = MEM_HU(ctx->r4, 0X38D0);
    // 0x8025E7E4: lui         $t3, 0x8012
    ctx->r11 = S32(0X8012 << 16);
    // 0x8025E7E8: slti        $at, $a0, 0x1E
    ctx->r1 = SIGNED(ctx->r4) < 0X1E ? 1 : 0;
    // 0x8025E7EC: beq         $at, $zero, L_8025E818
    if (ctx->r1 == 0) {
        // 0x8025E7F0: nop
    
            goto L_8025E818;
    }
    // 0x8025E7F0: nop

    // 0x8025E7F4: lhu         $t3, 0xB74($t3)
    ctx->r11 = MEM_HU(ctx->r11, 0XB74);
    // 0x8025E7F8: nop

    // 0x8025E7FC: andi        $t4, $t3, 0x1
    ctx->r12 = ctx->r11 & 0X1;
    // 0x8025E800: beq         $t4, $zero, L_8025E818
    if (ctx->r12 == 0) {
        // 0x8025E804: nop
    
            goto L_8025E818;
    }
    // 0x8025E804: nop

    // 0x8025E808: lhu         $t5, 0x0($a1)
    ctx->r13 = MEM_HU(ctx->r5, 0X0);
    // 0x8025E80C: nop

    // 0x8025E810: ori         $t6, $t5, 0x100
    ctx->r14 = ctx->r13 | 0X100;
    // 0x8025E814: sh          $t6, 0x0($a1)
    MEM_H(0X0, ctx->r5) = ctx->r14;
L_8025E818:
    // 0x8025E818: lhu         $v1, 0x0($a1)
    ctx->r3 = MEM_HU(ctx->r5, 0X0);
    // 0x8025E81C: slti        $at, $v0, 0x47
    ctx->r1 = SIGNED(ctx->r2) < 0X47 ? 1 : 0;
    // 0x8025E820: andi        $t7, $v1, 0x1
    ctx->r15 = ctx->r3 & 0X1;
    // 0x8025E824: beq         $t7, $zero, L_8025E840
    if (ctx->r15 == 0) {
        // 0x8025E828: andi        $t9, $v1, 0x2
        ctx->r25 = ctx->r3 & 0X2;
            goto L_8025E840;
    }
    // 0x8025E828: andi        $t9, $v1, 0x2
    ctx->r25 = ctx->r3 & 0X2;
    // 0x8025E82C: bne         $at, $zero, L_8025E83C
    if (ctx->r1 != 0) {
        // 0x8025E830: andi        $t8, $v1, 0xFE
        ctx->r24 = ctx->r3 & 0XFE;
            goto L_8025E83C;
    }
    // 0x8025E830: andi        $t8, $v1, 0xFE
    ctx->r24 = ctx->r3 & 0XFE;
    // 0x8025E834: sh          $t8, 0x0($a1)
    MEM_H(0X0, ctx->r5) = ctx->r24;
    // 0x8025E838: andi        $v1, $t8, 0xFFFF
    ctx->r3 = ctx->r24 & 0XFFFF;
L_8025E83C:
    // 0x8025E83C: andi        $t9, $v1, 0x2
    ctx->r25 = ctx->r3 & 0X2;
L_8025E840:
    // 0x8025E840: beq         $t9, $zero, L_8025E858
    if (ctx->r25 == 0) {
        // 0x8025E844: slti        $at, $v0, 0x83
        ctx->r1 = SIGNED(ctx->r2) < 0X83 ? 1 : 0;
            goto L_8025E858;
    }
    // 0x8025E844: slti        $at, $v0, 0x83
    ctx->r1 = SIGNED(ctx->r2) < 0X83 ? 1 : 0;
    // 0x8025E848: bne         $at, $zero, L_8025E858
    if (ctx->r1 != 0) {
        // 0x8025E84C: andi        $t0, $v1, 0xFD
        ctx->r8 = ctx->r3 & 0XFD;
            goto L_8025E858;
    }
    // 0x8025E84C: andi        $t0, $v1, 0xFD
    ctx->r8 = ctx->r3 & 0XFD;
    // 0x8025E850: sh          $t0, 0x0($a1)
    MEM_H(0X0, ctx->r5) = ctx->r8;
    // 0x8025E854: andi        $v1, $t0, 0xFFFF
    ctx->r3 = ctx->r8 & 0XFFFF;
L_8025E858:
    // 0x8025E858: andi        $t1, $v1, 0x4
    ctx->r9 = ctx->r3 & 0X4;
    // 0x8025E85C: beq         $t1, $zero, L_8025E874
    if (ctx->r9 == 0) {
        // 0x8025E860: slti        $at, $v0, 0xBF
        ctx->r1 = SIGNED(ctx->r2) < 0XBF ? 1 : 0;
            goto L_8025E874;
    }
    // 0x8025E860: slti        $at, $v0, 0xBF
    ctx->r1 = SIGNED(ctx->r2) < 0XBF ? 1 : 0;
    // 0x8025E864: bne         $at, $zero, L_8025E874
    if (ctx->r1 != 0) {
        // 0x8025E868: andi        $t2, $v1, 0xFB
        ctx->r10 = ctx->r3 & 0XFB;
            goto L_8025E874;
    }
    // 0x8025E868: andi        $t2, $v1, 0xFB
    ctx->r10 = ctx->r3 & 0XFB;
    // 0x8025E86C: sh          $t2, 0x0($a1)
    MEM_H(0X0, ctx->r5) = ctx->r10;
    // 0x8025E870: andi        $v1, $t2, 0xFFFF
    ctx->r3 = ctx->r10 & 0XFFFF;
L_8025E874:
    // 0x8025E874: andi        $t3, $v1, 0x8
    ctx->r11 = ctx->r3 & 0X8;
    // 0x8025E878: beq         $t3, $zero, L_8025E890
    if (ctx->r11 == 0) {
        // 0x8025E87C: slti        $at, $v0, 0xFB
        ctx->r1 = SIGNED(ctx->r2) < 0XFB ? 1 : 0;
            goto L_8025E890;
    }
    // 0x8025E87C: slti        $at, $v0, 0xFB
    ctx->r1 = SIGNED(ctx->r2) < 0XFB ? 1 : 0;
    // 0x8025E880: bne         $at, $zero, L_8025E890
    if (ctx->r1 != 0) {
        // 0x8025E884: andi        $t4, $v1, 0xF7
        ctx->r12 = ctx->r3 & 0XF7;
            goto L_8025E890;
    }
    // 0x8025E884: andi        $t4, $v1, 0xF7
    ctx->r12 = ctx->r3 & 0XF7;
    // 0x8025E888: sh          $t4, 0x0($a1)
    MEM_H(0X0, ctx->r5) = ctx->r12;
    // 0x8025E88C: andi        $v1, $t4, 0xFFFF
    ctx->r3 = ctx->r12 & 0XFFFF;
L_8025E890:
    // 0x8025E890: andi        $t5, $v1, 0x10
    ctx->r13 = ctx->r3 & 0X10;
    // 0x8025E894: beq         $t5, $zero, L_8025E8AC
    if (ctx->r13 == 0) {
        // 0x8025E898: slti        $at, $v0, 0x137
        ctx->r1 = SIGNED(ctx->r2) < 0X137 ? 1 : 0;
            goto L_8025E8AC;
    }
    // 0x8025E898: slti        $at, $v0, 0x137
    ctx->r1 = SIGNED(ctx->r2) < 0X137 ? 1 : 0;
    // 0x8025E89C: bne         $at, $zero, L_8025E8AC
    if (ctx->r1 != 0) {
        // 0x8025E8A0: andi        $t6, $v1, 0xEF
        ctx->r14 = ctx->r3 & 0XEF;
            goto L_8025E8AC;
    }
    // 0x8025E8A0: andi        $t6, $v1, 0xEF
    ctx->r14 = ctx->r3 & 0XEF;
    // 0x8025E8A4: sh          $t6, 0x0($a1)
    MEM_H(0X0, ctx->r5) = ctx->r14;
    // 0x8025E8A8: andi        $v1, $t6, 0xFFFF
    ctx->r3 = ctx->r14 & 0XFFFF;
L_8025E8AC:
    // 0x8025E8AC: andi        $t7, $v1, 0x20
    ctx->r15 = ctx->r3 & 0X20;
    // 0x8025E8B0: beq         $t7, $zero, L_8025E8C4
    if (ctx->r15 == 0) {
        // 0x8025E8B4: slti        $at, $a0, 0x32
        ctx->r1 = SIGNED(ctx->r4) < 0X32 ? 1 : 0;
            goto L_8025E8C4;
    }
    // 0x8025E8B4: slti        $at, $a0, 0x32
    ctx->r1 = SIGNED(ctx->r4) < 0X32 ? 1 : 0;
    // 0x8025E8B8: beq         $at, $zero, L_8025E8C4
    if (ctx->r1 == 0) {
        // 0x8025E8BC: andi        $t8, $v1, 0xDF
        ctx->r24 = ctx->r3 & 0XDF;
            goto L_8025E8C4;
    }
    // 0x8025E8BC: andi        $t8, $v1, 0xDF
    ctx->r24 = ctx->r3 & 0XDF;
    // 0x8025E8C0: sh          $t8, 0x0($a1)
    MEM_H(0X0, ctx->r5) = ctx->r24;
L_8025E8C4:
    // 0x8025E8C4: jr          $ra
    // 0x8025E8C8: nop

    return;
    // 0x8025E8C8: nop

;}
RECOMP_FUNC void ovl_8024B800_func_8025E8CC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8025E8CC: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8025E8D0: lui         $t6, 0x8009
    ctx->r14 = S32(0X8009 << 16);
    // 0x8025E8D4: lw          $t6, 0x3B20($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X3B20);
    // 0x8025E8D8: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8025E8DC: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8025E8E0: lbu         $v0, 0xBC($t6)
    ctx->r2 = MEM_BU(ctx->r14, 0XBC);
    // 0x8025E8E4: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x8025E8E8: beq         $v0, $at, L_8025EC18
    if (ctx->r2 == ctx->r1) {
        // 0x8025E8EC: addiu       $at, $zero, 0x15
        ctx->r1 = ADD32(0, 0X15);
            goto L_8025EC18;
    }
    // 0x8025E8EC: addiu       $at, $zero, 0x15
    ctx->r1 = ADD32(0, 0X15);
    // 0x8025E8F0: beq         $v0, $at, L_8025EC18
    if (ctx->r2 == ctx->r1) {
        // 0x8025E8F4: lui         $t7, 0x802C
        ctx->r15 = S32(0X802C << 16);
            goto L_8025EC18;
    }
    // 0x8025E8F4: lui         $t7, 0x802C
    ctx->r15 = S32(0X802C << 16);
    // 0x8025E8F8: lbu         $t7, 0x39FF($t7)
    ctx->r15 = MEM_BU(ctx->r15, 0X39FF);
    // 0x8025E8FC: lui         $v0, 0x802C
    ctx->r2 = S32(0X802C << 16);
    // 0x8025E900: bne         $t7, $zero, L_8025EC1C
    if (ctx->r15 != 0) {
        // 0x8025E904: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_8025EC1C;
    }
    // 0x8025E904: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8025E908: lhu         $v0, 0x3AA4($v0)
    ctx->r2 = MEM_HU(ctx->r2, 0X3AA4);
    // 0x8025E90C: lui         $s0, 0x802C
    ctx->r16 = S32(0X802C << 16);
    // 0x8025E910: andi        $t8, $v0, 0x1
    ctx->r24 = ctx->r2 & 0X1;
    // 0x8025E914: beq         $t8, $zero, L_8025E95C
    if (ctx->r24 == 0) {
        // 0x8025E918: addiu       $s0, $s0, 0x3AA6
        ctx->r16 = ADD32(ctx->r16, 0X3AA6);
            goto L_8025E95C;
    }
    // 0x8025E918: addiu       $s0, $s0, 0x3AA6
    ctx->r16 = ADD32(ctx->r16, 0X3AA6);
    // 0x8025E91C: lhu         $t9, 0x0($s0)
    ctx->r25 = MEM_HU(ctx->r16, 0X0);
    // 0x8025E920: addiu       $a0, $zero, 0x491
    ctx->r4 = ADD32(0, 0X491);
    // 0x8025E924: andi        $t0, $t9, 0x1
    ctx->r8 = ctx->r25 & 0X1;
    // 0x8025E928: bne         $t0, $zero, L_8025E95C
    if (ctx->r8 != 0) {
        // 0x8025E92C: nop
    
            goto L_8025E95C;
    }
    // 0x8025E92C: nop

    // 0x8025E930: jal         0x802A14C0
    // 0x8025E934: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    LOOKUP_FUNC(0x802A14C0)(rdram, ctx);
        goto after_0;
    // 0x8025E934: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_0:
    // 0x8025E938: addiu       $a0, $zero, 0x5AE
    ctx->r4 = ADD32(0, 0X5AE);
    // 0x8025E93C: jal         0x802A14C0
    // 0x8025E940: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    LOOKUP_FUNC(0x802A14C0)(rdram, ctx);
        goto after_1;
    // 0x8025E940: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_1:
    // 0x8025E944: lhu         $t1, 0x0($s0)
    ctx->r9 = MEM_HU(ctx->r16, 0X0);
    // 0x8025E948: lui         $v0, 0x802C
    ctx->r2 = S32(0X802C << 16);
    // 0x8025E94C: ori         $t2, $t1, 0x1
    ctx->r10 = ctx->r9 | 0X1;
    // 0x8025E950: sh          $t2, 0x0($s0)
    MEM_H(0X0, ctx->r16) = ctx->r10;
    // 0x8025E954: lhu         $v0, 0x3AA4($v0)
    ctx->r2 = MEM_HU(ctx->r2, 0X3AA4);
    // 0x8025E958: nop

L_8025E95C:
    // 0x8025E95C: lui         $s0, 0x802C
    ctx->r16 = S32(0X802C << 16);
    // 0x8025E960: andi        $t3, $v0, 0x2
    ctx->r11 = ctx->r2 & 0X2;
    // 0x8025E964: beq         $t3, $zero, L_8025E9AC
    if (ctx->r11 == 0) {
        // 0x8025E968: addiu       $s0, $s0, 0x3AA6
        ctx->r16 = ADD32(ctx->r16, 0X3AA6);
            goto L_8025E9AC;
    }
    // 0x8025E968: addiu       $s0, $s0, 0x3AA6
    ctx->r16 = ADD32(ctx->r16, 0X3AA6);
    // 0x8025E96C: lhu         $t4, 0x0($s0)
    ctx->r12 = MEM_HU(ctx->r16, 0X0);
    // 0x8025E970: addiu       $a0, $zero, 0x492
    ctx->r4 = ADD32(0, 0X492);
    // 0x8025E974: andi        $t5, $t4, 0x2
    ctx->r13 = ctx->r12 & 0X2;
    // 0x8025E978: bne         $t5, $zero, L_8025E9B0
    if (ctx->r13 != 0) {
        // 0x8025E97C: andi        $t8, $v0, 0x4
        ctx->r24 = ctx->r2 & 0X4;
            goto L_8025E9B0;
    }
    // 0x8025E97C: andi        $t8, $v0, 0x4
    ctx->r24 = ctx->r2 & 0X4;
    // 0x8025E980: jal         0x802A14C0
    // 0x8025E984: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    LOOKUP_FUNC(0x802A14C0)(rdram, ctx);
        goto after_2;
    // 0x8025E984: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_2:
    // 0x8025E988: addiu       $a0, $zero, 0x5AE
    ctx->r4 = ADD32(0, 0X5AE);
    // 0x8025E98C: jal         0x802A14C0
    // 0x8025E990: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    LOOKUP_FUNC(0x802A14C0)(rdram, ctx);
        goto after_3;
    // 0x8025E990: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_3:
    // 0x8025E994: lhu         $t6, 0x0($s0)
    ctx->r14 = MEM_HU(ctx->r16, 0X0);
    // 0x8025E998: lui         $v0, 0x802C
    ctx->r2 = S32(0X802C << 16);
    // 0x8025E99C: ori         $t7, $t6, 0x2
    ctx->r15 = ctx->r14 | 0X2;
    // 0x8025E9A0: sh          $t7, 0x0($s0)
    MEM_H(0X0, ctx->r16) = ctx->r15;
    // 0x8025E9A4: lhu         $v0, 0x3AA4($v0)
    ctx->r2 = MEM_HU(ctx->r2, 0X3AA4);
    // 0x8025E9A8: nop

L_8025E9AC:
    // 0x8025E9AC: andi        $t8, $v0, 0x4
    ctx->r24 = ctx->r2 & 0X4;
L_8025E9B0:
    // 0x8025E9B0: beq         $t8, $zero, L_8025E9FC
    if (ctx->r24 == 0) {
        // 0x8025E9B4: andi        $t3, $v0, 0x8
        ctx->r11 = ctx->r2 & 0X8;
            goto L_8025E9FC;
    }
    // 0x8025E9B4: andi        $t3, $v0, 0x8
    ctx->r11 = ctx->r2 & 0X8;
    // 0x8025E9B8: lhu         $t9, 0x0($s0)
    ctx->r25 = MEM_HU(ctx->r16, 0X0);
    // 0x8025E9BC: addiu       $a0, $zero, 0x493
    ctx->r4 = ADD32(0, 0X493);
    // 0x8025E9C0: andi        $t0, $t9, 0x4
    ctx->r8 = ctx->r25 & 0X4;
    // 0x8025E9C4: bne         $t0, $zero, L_8025E9FC
    if (ctx->r8 != 0) {
        // 0x8025E9C8: andi        $t3, $v0, 0x8
        ctx->r11 = ctx->r2 & 0X8;
            goto L_8025E9FC;
    }
    // 0x8025E9C8: andi        $t3, $v0, 0x8
    ctx->r11 = ctx->r2 & 0X8;
    // 0x8025E9CC: jal         0x802A14C0
    // 0x8025E9D0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    LOOKUP_FUNC(0x802A14C0)(rdram, ctx);
        goto after_4;
    // 0x8025E9D0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_4:
    // 0x8025E9D4: addiu       $a0, $zero, 0x5AE
    ctx->r4 = ADD32(0, 0X5AE);
    // 0x8025E9D8: jal         0x802A14C0
    // 0x8025E9DC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    LOOKUP_FUNC(0x802A14C0)(rdram, ctx);
        goto after_5;
    // 0x8025E9DC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_5:
    // 0x8025E9E0: lhu         $t1, 0x0($s0)
    ctx->r9 = MEM_HU(ctx->r16, 0X0);
    // 0x8025E9E4: lui         $v0, 0x802C
    ctx->r2 = S32(0X802C << 16);
    // 0x8025E9E8: ori         $t2, $t1, 0x4
    ctx->r10 = ctx->r9 | 0X4;
    // 0x8025E9EC: sh          $t2, 0x0($s0)
    MEM_H(0X0, ctx->r16) = ctx->r10;
    // 0x8025E9F0: lhu         $v0, 0x3AA4($v0)
    ctx->r2 = MEM_HU(ctx->r2, 0X3AA4);
    // 0x8025E9F4: nop

    // 0x8025E9F8: andi        $t3, $v0, 0x8
    ctx->r11 = ctx->r2 & 0X8;
L_8025E9FC:
    // 0x8025E9FC: beq         $t3, $zero, L_8025EA48
    if (ctx->r11 == 0) {
        // 0x8025EA00: andi        $t8, $v0, 0x10
        ctx->r24 = ctx->r2 & 0X10;
            goto L_8025EA48;
    }
    // 0x8025EA00: andi        $t8, $v0, 0x10
    ctx->r24 = ctx->r2 & 0X10;
    // 0x8025EA04: lhu         $t4, 0x0($s0)
    ctx->r12 = MEM_HU(ctx->r16, 0X0);
    // 0x8025EA08: addiu       $a0, $zero, 0x494
    ctx->r4 = ADD32(0, 0X494);
    // 0x8025EA0C: andi        $t5, $t4, 0x8
    ctx->r13 = ctx->r12 & 0X8;
    // 0x8025EA10: bne         $t5, $zero, L_8025EA48
    if (ctx->r13 != 0) {
        // 0x8025EA14: andi        $t8, $v0, 0x10
        ctx->r24 = ctx->r2 & 0X10;
            goto L_8025EA48;
    }
    // 0x8025EA14: andi        $t8, $v0, 0x10
    ctx->r24 = ctx->r2 & 0X10;
    // 0x8025EA18: jal         0x802A14C0
    // 0x8025EA1C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    LOOKUP_FUNC(0x802A14C0)(rdram, ctx);
        goto after_6;
    // 0x8025EA1C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_6:
    // 0x8025EA20: addiu       $a0, $zero, 0x5AE
    ctx->r4 = ADD32(0, 0X5AE);
    // 0x8025EA24: jal         0x802A14C0
    // 0x8025EA28: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    LOOKUP_FUNC(0x802A14C0)(rdram, ctx);
        goto after_7;
    // 0x8025EA28: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_7:
    // 0x8025EA2C: lhu         $t6, 0x0($s0)
    ctx->r14 = MEM_HU(ctx->r16, 0X0);
    // 0x8025EA30: lui         $v0, 0x802C
    ctx->r2 = S32(0X802C << 16);
    // 0x8025EA34: ori         $t7, $t6, 0x8
    ctx->r15 = ctx->r14 | 0X8;
    // 0x8025EA38: sh          $t7, 0x0($s0)
    MEM_H(0X0, ctx->r16) = ctx->r15;
    // 0x8025EA3C: lhu         $v0, 0x3AA4($v0)
    ctx->r2 = MEM_HU(ctx->r2, 0X3AA4);
    // 0x8025EA40: nop

    // 0x8025EA44: andi        $t8, $v0, 0x10
    ctx->r24 = ctx->r2 & 0X10;
L_8025EA48:
    // 0x8025EA48: beq         $t8, $zero, L_8025EA94
    if (ctx->r24 == 0) {
        // 0x8025EA4C: andi        $t3, $v0, 0x20
        ctx->r11 = ctx->r2 & 0X20;
            goto L_8025EA94;
    }
    // 0x8025EA4C: andi        $t3, $v0, 0x20
    ctx->r11 = ctx->r2 & 0X20;
    // 0x8025EA50: lhu         $t9, 0x0($s0)
    ctx->r25 = MEM_HU(ctx->r16, 0X0);
    // 0x8025EA54: addiu       $a0, $zero, 0x495
    ctx->r4 = ADD32(0, 0X495);
    // 0x8025EA58: andi        $t0, $t9, 0x10
    ctx->r8 = ctx->r25 & 0X10;
    // 0x8025EA5C: bne         $t0, $zero, L_8025EA94
    if (ctx->r8 != 0) {
        // 0x8025EA60: andi        $t3, $v0, 0x20
        ctx->r11 = ctx->r2 & 0X20;
            goto L_8025EA94;
    }
    // 0x8025EA60: andi        $t3, $v0, 0x20
    ctx->r11 = ctx->r2 & 0X20;
    // 0x8025EA64: jal         0x802A14C0
    // 0x8025EA68: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    LOOKUP_FUNC(0x802A14C0)(rdram, ctx);
        goto after_8;
    // 0x8025EA68: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_8:
    // 0x8025EA6C: addiu       $a0, $zero, 0x5AE
    ctx->r4 = ADD32(0, 0X5AE);
    // 0x8025EA70: jal         0x802A14C0
    // 0x8025EA74: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    LOOKUP_FUNC(0x802A14C0)(rdram, ctx);
        goto after_9;
    // 0x8025EA74: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_9:
    // 0x8025EA78: lhu         $t1, 0x0($s0)
    ctx->r9 = MEM_HU(ctx->r16, 0X0);
    // 0x8025EA7C: lui         $v0, 0x802C
    ctx->r2 = S32(0X802C << 16);
    // 0x8025EA80: ori         $t2, $t1, 0x10
    ctx->r10 = ctx->r9 | 0X10;
    // 0x8025EA84: sh          $t2, 0x0($s0)
    MEM_H(0X0, ctx->r16) = ctx->r10;
    // 0x8025EA88: lhu         $v0, 0x3AA4($v0)
    ctx->r2 = MEM_HU(ctx->r2, 0X3AA4);
    // 0x8025EA8C: nop

    // 0x8025EA90: andi        $t3, $v0, 0x20
    ctx->r11 = ctx->r2 & 0X20;
L_8025EA94:
    // 0x8025EA94: beq         $t3, $zero, L_8025EAF8
    if (ctx->r11 == 0) {
        // 0x8025EA98: andi        $t0, $v0, 0x100
        ctx->r8 = ctx->r2 & 0X100;
            goto L_8025EAF8;
    }
    // 0x8025EA98: andi        $t0, $v0, 0x100
    ctx->r8 = ctx->r2 & 0X100;
    // 0x8025EA9C: lhu         $t4, 0x0($s0)
    ctx->r12 = MEM_HU(ctx->r16, 0X0);
    // 0x8025EAA0: lui         $t6, 0x8010
    ctx->r14 = S32(0X8010 << 16);
    // 0x8025EAA4: andi        $t5, $t4, 0x20
    ctx->r13 = ctx->r12 & 0X20;
    // 0x8025EAA8: bne         $t5, $zero, L_8025EAF8
    if (ctx->r13 != 0) {
        // 0x8025EAAC: andi        $t0, $v0, 0x100
        ctx->r8 = ctx->r2 & 0X100;
            goto L_8025EAF8;
    }
    // 0x8025EAAC: andi        $t0, $v0, 0x100
    ctx->r8 = ctx->r2 & 0X100;
    // 0x8025EAB0: lhu         $t6, 0x522A($t6)
    ctx->r14 = MEM_HU(ctx->r14, 0X522A);
    // 0x8025EAB4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8025EAB8: andi        $t7, $t6, 0x1
    ctx->r15 = ctx->r14 & 0X1;
    // 0x8025EABC: beq         $t7, $zero, L_8025EAD4
    if (ctx->r15 == 0) {
        // 0x8025EAC0: addiu       $a0, $zero, 0x5BF
        ctx->r4 = ADD32(0, 0X5BF);
            goto L_8025EAD4;
    }
    // 0x8025EAC0: addiu       $a0, $zero, 0x5BF
    ctx->r4 = ADD32(0, 0X5BF);
    // 0x8025EAC4: jal         0x802A14C0
    // 0x8025EAC8: addiu       $a0, $zero, 0x49D
    ctx->r4 = ADD32(0, 0X49D);
    LOOKUP_FUNC(0x802A14C0)(rdram, ctx);
        goto after_10;
    // 0x8025EAC8: addiu       $a0, $zero, 0x49D
    ctx->r4 = ADD32(0, 0X49D);
    after_10:
    // 0x8025EACC: b           L_8025EAE0
    // 0x8025EAD0: lhu         $t8, 0x0($s0)
    ctx->r24 = MEM_HU(ctx->r16, 0X0);
        goto L_8025EAE0;
    // 0x8025EAD0: lhu         $t8, 0x0($s0)
    ctx->r24 = MEM_HU(ctx->r16, 0X0);
L_8025EAD4:
    // 0x8025EAD4: jal         0x802A14C0
    // 0x8025EAD8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    LOOKUP_FUNC(0x802A14C0)(rdram, ctx);
        goto after_11;
    // 0x8025EAD8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_11:
    // 0x8025EADC: lhu         $t8, 0x0($s0)
    ctx->r24 = MEM_HU(ctx->r16, 0X0);
L_8025EAE0:
    // 0x8025EAE0: lui         $v0, 0x802C
    ctx->r2 = S32(0X802C << 16);
    // 0x8025EAE4: ori         $t9, $t8, 0x20
    ctx->r25 = ctx->r24 | 0X20;
    // 0x8025EAE8: sh          $t9, 0x0($s0)
    MEM_H(0X0, ctx->r16) = ctx->r25;
    // 0x8025EAEC: lhu         $v0, 0x3AA4($v0)
    ctx->r2 = MEM_HU(ctx->r2, 0X3AA4);
    // 0x8025EAF0: nop

    // 0x8025EAF4: andi        $t0, $v0, 0x100
    ctx->r8 = ctx->r2 & 0X100;
L_8025EAF8:
    // 0x8025EAF8: beq         $t0, $zero, L_8025EB38
    if (ctx->r8 == 0) {
        // 0x8025EAFC: andi        $t5, $v0, 0x40
        ctx->r13 = ctx->r2 & 0X40;
            goto L_8025EB38;
    }
    // 0x8025EAFC: andi        $t5, $v0, 0x40
    ctx->r13 = ctx->r2 & 0X40;
    // 0x8025EB00: lhu         $t1, 0x0($s0)
    ctx->r9 = MEM_HU(ctx->r16, 0X0);
    // 0x8025EB04: nop

    // 0x8025EB08: andi        $t2, $t1, 0x100
    ctx->r10 = ctx->r9 & 0X100;
    // 0x8025EB0C: bne         $t2, $zero, L_8025EB38
    if (ctx->r10 != 0) {
        // 0x8025EB10: andi        $t5, $v0, 0x40
        ctx->r13 = ctx->r2 & 0X40;
            goto L_8025EB38;
    }
    // 0x8025EB10: andi        $t5, $v0, 0x40
    ctx->r13 = ctx->r2 & 0X40;
    // 0x8025EB14: jal         0x800774D8
    // 0x8025EB18: nop

    func_800774D8(rdram, ctx);
        goto after_12;
    // 0x8025EB18: nop

    after_12:
    // 0x8025EB1C: lhu         $t3, 0x0($s0)
    ctx->r11 = MEM_HU(ctx->r16, 0X0);
    // 0x8025EB20: lui         $v0, 0x802C
    ctx->r2 = S32(0X802C << 16);
    // 0x8025EB24: ori         $t4, $t3, 0x100
    ctx->r12 = ctx->r11 | 0X100;
    // 0x8025EB28: sh          $t4, 0x0($s0)
    MEM_H(0X0, ctx->r16) = ctx->r12;
    // 0x8025EB2C: lhu         $v0, 0x3AA4($v0)
    ctx->r2 = MEM_HU(ctx->r2, 0X3AA4);
    // 0x8025EB30: nop

    // 0x8025EB34: andi        $t5, $v0, 0x40
    ctx->r13 = ctx->r2 & 0X40;
L_8025EB38:
    // 0x8025EB38: beq         $t5, $zero, L_8025EB9C
    if (ctx->r13 == 0) {
        // 0x8025EB3C: andi        $t2, $v0, 0x80
        ctx->r10 = ctx->r2 & 0X80;
            goto L_8025EB9C;
    }
    // 0x8025EB3C: andi        $t2, $v0, 0x80
    ctx->r10 = ctx->r2 & 0X80;
    // 0x8025EB40: lhu         $t6, 0x0($s0)
    ctx->r14 = MEM_HU(ctx->r16, 0X0);
    // 0x8025EB44: lui         $t8, 0x8010
    ctx->r24 = S32(0X8010 << 16);
    // 0x8025EB48: andi        $t7, $t6, 0x40
    ctx->r15 = ctx->r14 & 0X40;
    // 0x8025EB4C: bne         $t7, $zero, L_8025EB9C
    if (ctx->r15 != 0) {
        // 0x8025EB50: andi        $t2, $v0, 0x80
        ctx->r10 = ctx->r2 & 0X80;
            goto L_8025EB9C;
    }
    // 0x8025EB50: andi        $t2, $v0, 0x80
    ctx->r10 = ctx->r2 & 0X80;
    // 0x8025EB54: lhu         $t8, 0x522A($t8)
    ctx->r24 = MEM_HU(ctx->r24, 0X522A);
    // 0x8025EB58: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8025EB5C: andi        $t9, $t8, 0x1
    ctx->r25 = ctx->r24 & 0X1;
    // 0x8025EB60: beq         $t9, $zero, L_8025EB78
    if (ctx->r25 == 0) {
        // 0x8025EB64: addiu       $a0, $zero, 0x4DA
        ctx->r4 = ADD32(0, 0X4DA);
            goto L_8025EB78;
    }
    // 0x8025EB64: addiu       $a0, $zero, 0x4DA
    ctx->r4 = ADD32(0, 0X4DA);
    // 0x8025EB68: jal         0x802A14C0
    // 0x8025EB6C: addiu       $a0, $zero, 0x4B0
    ctx->r4 = ADD32(0, 0X4B0);
    LOOKUP_FUNC(0x802A14C0)(rdram, ctx);
        goto after_13;
    // 0x8025EB6C: addiu       $a0, $zero, 0x4B0
    ctx->r4 = ADD32(0, 0X4B0);
    after_13:
    // 0x8025EB70: b           L_8025EB84
    // 0x8025EB74: lhu         $t0, 0x0($s0)
    ctx->r8 = MEM_HU(ctx->r16, 0X0);
        goto L_8025EB84;
    // 0x8025EB74: lhu         $t0, 0x0($s0)
    ctx->r8 = MEM_HU(ctx->r16, 0X0);
L_8025EB78:
    // 0x8025EB78: jal         0x802A14C0
    // 0x8025EB7C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    LOOKUP_FUNC(0x802A14C0)(rdram, ctx);
        goto after_14;
    // 0x8025EB7C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_14:
    // 0x8025EB80: lhu         $t0, 0x0($s0)
    ctx->r8 = MEM_HU(ctx->r16, 0X0);
L_8025EB84:
    // 0x8025EB84: lui         $v0, 0x802C
    ctx->r2 = S32(0X802C << 16);
    // 0x8025EB88: ori         $t1, $t0, 0x40
    ctx->r9 = ctx->r8 | 0X40;
    // 0x8025EB8C: sh          $t1, 0x0($s0)
    MEM_H(0X0, ctx->r16) = ctx->r9;
    // 0x8025EB90: lhu         $v0, 0x3AA4($v0)
    ctx->r2 = MEM_HU(ctx->r2, 0X3AA4);
    // 0x8025EB94: nop

    // 0x8025EB98: andi        $t2, $v0, 0x80
    ctx->r10 = ctx->r2 & 0X80;
L_8025EB9C:
    // 0x8025EB9C: beq         $t2, $zero, L_8025EC1C
    if (ctx->r10 == 0) {
        // 0x8025EBA0: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_8025EC1C;
    }
    // 0x8025EBA0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8025EBA4: lhu         $t3, 0x0($s0)
    ctx->r11 = MEM_HU(ctx->r16, 0X0);
    // 0x8025EBA8: lui         $t5, 0x8012
    ctx->r13 = S32(0X8012 << 16);
    // 0x8025EBAC: andi        $t4, $t3, 0x80
    ctx->r12 = ctx->r11 & 0X80;
    // 0x8025EBB0: bne         $t4, $zero, L_8025EC1C
    if (ctx->r12 != 0) {
        // 0x8025EBB4: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_8025EC1C;
    }
    // 0x8025EBB4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8025EBB8: lhu         $t5, 0xB74($t5)
    ctx->r13 = MEM_HU(ctx->r13, 0XB74);
    // 0x8025EBBC: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x8025EBC0: andi        $t6, $t5, 0x1
    ctx->r14 = ctx->r13 & 0X1;
    // 0x8025EBC4: beq         $t6, $zero, L_8025EC00
    if (ctx->r14 == 0) {
        // 0x8025EBC8: addiu       $v0, $v0, -0x2CF0
        ctx->r2 = ADD32(ctx->r2, -0X2CF0);
            goto L_8025EC00;
    }
    // 0x8025EBC8: addiu       $v0, $v0, -0x2CF0
    ctx->r2 = ADD32(ctx->r2, -0X2CF0);
    // 0x8025EBCC: lhu         $t7, 0xA($v0)
    ctx->r15 = MEM_HU(ctx->r2, 0XA);
    // 0x8025EBD0: lhu         $t8, 0xA9E($v0)
    ctx->r24 = MEM_HU(ctx->r2, 0XA9E);
    // 0x8025EBD4: addiu       $a0, $zero, 0x45D
    ctx->r4 = ADD32(0, 0X45D);
    // 0x8025EBD8: bne         $t7, $t8, L_8025EBF0
    if (ctx->r15 != ctx->r24) {
        // 0x8025EBDC: nop
    
            goto L_8025EBF0;
    }
    // 0x8025EBDC: nop

    // 0x8025EBE0: jal         0x802A14C0
    // 0x8025EBE4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    LOOKUP_FUNC(0x802A14C0)(rdram, ctx);
        goto after_15;
    // 0x8025EBE4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_15:
    // 0x8025EBE8: b           L_8025EC0C
    // 0x8025EBEC: lhu         $t9, 0x0($s0)
    ctx->r25 = MEM_HU(ctx->r16, 0X0);
        goto L_8025EC0C;
    // 0x8025EBEC: lhu         $t9, 0x0($s0)
    ctx->r25 = MEM_HU(ctx->r16, 0X0);
L_8025EBF0:
    // 0x8025EBF0: jal         0x8025EC28
    // 0x8025EBF4: nop

    ovl_8024B800_func_8025EC28(rdram, ctx);
        goto after_16;
    // 0x8025EBF4: nop

    after_16:
    // 0x8025EBF8: b           L_8025EC0C
    // 0x8025EBFC: lhu         $t9, 0x0($s0)
    ctx->r25 = MEM_HU(ctx->r16, 0X0);
        goto L_8025EC0C;
    // 0x8025EBFC: lhu         $t9, 0x0($s0)
    ctx->r25 = MEM_HU(ctx->r16, 0X0);
L_8025EC00:
    // 0x8025EC00: jal         0x8025EC28
    // 0x8025EC04: nop

    ovl_8024B800_func_8025EC28(rdram, ctx);
        goto after_17;
    // 0x8025EC04: nop

    after_17:
    // 0x8025EC08: lhu         $t9, 0x0($s0)
    ctx->r25 = MEM_HU(ctx->r16, 0X0);
L_8025EC0C:
    // 0x8025EC0C: nop

    // 0x8025EC10: ori         $t0, $t9, 0x80
    ctx->r8 = ctx->r25 | 0X80;
    // 0x8025EC14: sh          $t0, 0x0($s0)
    MEM_H(0X0, ctx->r16) = ctx->r8;
L_8025EC18:
    // 0x8025EC18: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_8025EC1C:
    // 0x8025EC1C: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8025EC20: jr          $ra
    // 0x8025EC24: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x8025EC24: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void ovl_8024B800_func_8025EC28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8025EC28: lui         $v1, 0x8012
    ctx->r3 = S32(0X8012 << 16);
    // 0x8025EC2C: addiu       $v1, $v1, -0x2CF0
    ctx->r3 = ADD32(ctx->r3, -0X2CF0);
    // 0x8025EC30: lhu         $t6, 0xA($v1)
    ctx->r14 = MEM_HU(ctx->r3, 0XA);
    // 0x8025EC34: lhu         $t7, 0xA9E($v1)
    ctx->r15 = MEM_HU(ctx->r3, 0XA9E);
    // 0x8025EC38: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8025EC3C: subu        $v0, $t6, $t7
    ctx->r2 = SUB32(ctx->r14, ctx->r15);
    // 0x8025EC40: sll         $t8, $v0, 16
    ctx->r24 = S32(ctx->r2 << 16);
    // 0x8025EC44: sra         $t9, $t8, 16
    ctx->r25 = S32(SIGNED(ctx->r24) >> 16);
    // 0x8025EC48: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8025EC4C: bgez        $t9, L_8025EC60
    if (SIGNED(ctx->r25) >= 0) {
        // 0x8025EC50: or          $v0, $t9, $zero
        ctx->r2 = ctx->r25 | 0;
            goto L_8025EC60;
    }
    // 0x8025EC50: or          $v0, $t9, $zero
    ctx->r2 = ctx->r25 | 0;
    // 0x8025EC54: negu        $v0, $t9
    ctx->r2 = SUB32(0, ctx->r25);
    // 0x8025EC58: sll         $t0, $v0, 16
    ctx->r8 = S32(ctx->r2 << 16);
    // 0x8025EC5C: sra         $v0, $t0, 16
    ctx->r2 = S32(SIGNED(ctx->r8) >> 16);
L_8025EC60:
    // 0x8025EC60: slti        $at, $v0, 0x3
    ctx->r1 = SIGNED(ctx->r2) < 0X3 ? 1 : 0;
    // 0x8025EC64: beq         $at, $zero, L_8025EC84
    if (ctx->r1 == 0) {
        // 0x8025EC68: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_8025EC84;
    }
    // 0x8025EC68: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8025EC6C: jal         0x80077060
    // 0x8025EC70: nop

    func_80077060(rdram, ctx);
        goto after_0;
    // 0x8025EC70: nop

    after_0:
    // 0x8025EC74: addiu       $a0, $zero, 0x473
    ctx->r4 = ADD32(0, 0X473);
    // 0x8025EC78: jal         0x802A14C0
    // 0x8025EC7C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    LOOKUP_FUNC(0x802A14C0)(rdram, ctx);
        goto after_1;
    // 0x8025EC7C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_1:
    // 0x8025EC80: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8025EC84:
    // 0x8025EC84: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8025EC88: jr          $ra
    // 0x8025EC8C: nop

    return;
    // 0x8025EC8C: nop

;}
RECOMP_FUNC void ovl_8024B800_func_8025EC90(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8025EC90: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x8025EC94: addiu       $a0, $a0, -0x2CF0
    ctx->r4 = ADD32(ctx->r4, -0X2CF0);
    // 0x8025EC98: lhu         $v0, 0xA($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0XA);
    // 0x8025EC9C: lhu         $v1, 0xA9E($a0)
    ctx->r3 = MEM_HU(ctx->r4, 0XA9E);
    // 0x8025ECA0: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8025ECA4: slt         $at, $v0, $v1
    ctx->r1 = SIGNED(ctx->r2) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x8025ECA8: beq         $at, $zero, L_8025ECC0
    if (ctx->r1 == 0) {
        // 0x8025ECAC: sw          $ra, 0x14($sp)
        MEM_W(0X14, ctx->r29) = ctx->r31;
            goto L_8025ECC0;
    }
    // 0x8025ECAC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8025ECB0: subu        $a0, $v1, $v0
    ctx->r4 = SUB32(ctx->r3, ctx->r2);
    // 0x8025ECB4: andi        $t6, $a0, 0xFFFF
    ctx->r14 = ctx->r4 & 0XFFFF;
    // 0x8025ECB8: b           L_8025ECCC
    // 0x8025ECBC: or          $a0, $t6, $zero
    ctx->r4 = ctx->r14 | 0;
        goto L_8025ECCC;
    // 0x8025ECBC: or          $a0, $t6, $zero
    ctx->r4 = ctx->r14 | 0;
L_8025ECC0:
    // 0x8025ECC0: subu        $a0, $v0, $v1
    ctx->r4 = SUB32(ctx->r2, ctx->r3);
    // 0x8025ECC4: andi        $t7, $a0, 0xFFFF
    ctx->r15 = ctx->r4 & 0XFFFF;
    // 0x8025ECC8: or          $a0, $t7, $zero
    ctx->r4 = ctx->r15 | 0;
L_8025ECCC:
    // 0x8025ECCC: addu        $t8, $v1, $v0
    ctx->r24 = ADD32(ctx->r3, ctx->r2);
    // 0x8025ECD0: bne         $t8, $zero, L_8025ED68
    if (ctx->r24 != 0) {
        // 0x8025ECD4: lui         $a2, 0x802C
        ctx->r6 = S32(0X802C << 16);
            goto L_8025ED68;
    }
    // 0x8025ECD4: lui         $a2, 0x802C
    ctx->r6 = S32(0X802C << 16);
    // 0x8025ECD8: addiu       $a2, $a2, 0x39F2
    ctx->r6 = ADD32(ctx->r6, 0X39F2);
    // 0x8025ECDC: lbu         $t9, 0x0($a2)
    ctx->r25 = MEM_BU(ctx->r6, 0X0);
    // 0x8025ECE0: nop

    // 0x8025ECE4: addiu       $t0, $t9, 0x1
    ctx->r8 = ADD32(ctx->r25, 0X1);
    // 0x8025ECE8: andi        $v1, $t0, 0xFF
    ctx->r3 = ctx->r8 & 0XFF;
    // 0x8025ECEC: slti        $at, $v1, 0x4
    ctx->r1 = SIGNED(ctx->r3) < 0X4 ? 1 : 0;
    // 0x8025ECF0: bne         $at, $zero, L_8025ED00
    if (ctx->r1 != 0) {
        // 0x8025ECF4: sb          $t0, 0x0($a2)
        MEM_B(0X0, ctx->r6) = ctx->r8;
            goto L_8025ED00;
    }
    // 0x8025ECF4: sb          $t0, 0x0($a2)
    MEM_B(0X0, ctx->r6) = ctx->r8;
    // 0x8025ECF8: sb          $zero, 0x0($a2)
    MEM_B(0X0, ctx->r6) = 0;
    // 0x8025ECFC: andi        $v1, $zero, 0xFF
    ctx->r3 = 0 & 0XFF;
L_8025ED00:
    // 0x8025ED00: beq         $v1, $zero, L_8025ED28
    if (ctx->r3 == 0) {
        // 0x8025ED04: addiu       $at, $zero, 0x1
        ctx->r1 = ADD32(0, 0X1);
            goto L_8025ED28;
    }
    // 0x8025ED04: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8025ED08: beq         $v1, $at, L_8025ED38
    if (ctx->r3 == ctx->r1) {
        // 0x8025ED0C: addiu       $at, $zero, 0x2
        ctx->r1 = ADD32(0, 0X2);
            goto L_8025ED38;
    }
    // 0x8025ED0C: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x8025ED10: beq         $v1, $at, L_8025ED48
    if (ctx->r3 == ctx->r1) {
        // 0x8025ED14: addiu       $at, $zero, 0x3
        ctx->r1 = ADD32(0, 0X3);
            goto L_8025ED48;
    }
    // 0x8025ED14: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x8025ED18: beq         $v1, $at, L_8025ED58
    if (ctx->r3 == ctx->r1) {
        // 0x8025ED1C: nop
    
            goto L_8025ED58;
    }
    // 0x8025ED1C: nop

    // 0x8025ED20: b           L_8025F164
    // 0x8025ED24: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_8025F164;
    // 0x8025ED24: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8025ED28:
    // 0x8025ED28: jal         0x80076FC8
    // 0x8025ED2C: nop

    func_80076FC8(rdram, ctx);
        goto after_0;
    // 0x8025ED2C: nop

    after_0:
    // 0x8025ED30: b           L_8025F164
    // 0x8025ED34: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_8025F164;
    // 0x8025ED34: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8025ED38:
    // 0x8025ED38: jal         0x80076FEC
    // 0x8025ED3C: nop

    func_80076FEC(rdram, ctx);
        goto after_1;
    // 0x8025ED3C: nop

    after_1:
    // 0x8025ED40: b           L_8025F164
    // 0x8025ED44: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_8025F164;
    // 0x8025ED44: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8025ED48:
    // 0x8025ED48: jal         0x80077010
    // 0x8025ED4C: nop

    func_80077010(rdram, ctx);
        goto after_2;
    // 0x8025ED4C: nop

    after_2:
    // 0x8025ED50: b           L_8025F164
    // 0x8025ED54: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_8025F164;
    // 0x8025ED54: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8025ED58:
    // 0x8025ED58: jal         0x800759EC
    // 0x8025ED5C: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    func_800759EC(rdram, ctx);
        goto after_3;
    // 0x8025ED5C: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_3:
    // 0x8025ED60: b           L_8025F164
    // 0x8025ED64: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_8025F164;
    // 0x8025ED64: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8025ED68:
    // 0x8025ED68: bne         $a0, $zero, L_8025ED78
    if (ctx->r4 != 0) {
        // 0x8025ED6C: sw          $a0, 0x18($sp)
        MEM_W(0X18, ctx->r29) = ctx->r4;
            goto L_8025ED78;
    }
    // 0x8025ED6C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8025ED70: jal         0x80077010
    // 0x8025ED74: nop

    func_80077010(rdram, ctx);
        goto after_4;
    // 0x8025ED74: nop

    after_4:
L_8025ED78:
    // 0x8025ED78: lw          $t2, 0x18($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X18);
    // 0x8025ED7C: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    // 0x8025ED80: bne         $a3, $t2, L_8025EE30
    if (ctx->r7 != ctx->r10) {
        // 0x8025ED84: lui         $a2, 0x802C
        ctx->r6 = S32(0X802C << 16);
            goto L_8025EE30;
    }
    // 0x8025ED84: lui         $a2, 0x802C
    ctx->r6 = S32(0X802C << 16);
    // 0x8025ED88: addiu       $a2, $a2, 0x39F2
    ctx->r6 = ADD32(ctx->r6, 0X39F2);
    // 0x8025ED8C: lbu         $t3, 0x0($a2)
    ctx->r11 = MEM_BU(ctx->r6, 0X0);
    // 0x8025ED90: nop

    // 0x8025ED94: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x8025ED98: andi        $v1, $t4, 0xFF
    ctx->r3 = ctx->r12 & 0XFF;
    // 0x8025ED9C: slti        $at, $v1, 0x4
    ctx->r1 = SIGNED(ctx->r3) < 0X4 ? 1 : 0;
    // 0x8025EDA0: bne         $at, $zero, L_8025EDB0
    if (ctx->r1 != 0) {
        // 0x8025EDA4: sb          $t4, 0x0($a2)
        MEM_B(0X0, ctx->r6) = ctx->r12;
            goto L_8025EDB0;
    }
    // 0x8025EDA4: sb          $t4, 0x0($a2)
    MEM_B(0X0, ctx->r6) = ctx->r12;
    // 0x8025EDA8: sb          $zero, 0x0($a2)
    MEM_B(0X0, ctx->r6) = 0;
    // 0x8025EDAC: andi        $v1, $zero, 0xFF
    ctx->r3 = 0 & 0XFF;
L_8025EDB0:
    // 0x8025EDB0: beq         $v1, $zero, L_8025EDDC
    if (ctx->r3 == 0) {
        // 0x8025EDB4: nop
    
            goto L_8025EDDC;
    }
    // 0x8025EDB4: nop

    // 0x8025EDB8: beq         $v1, $a3, L_8025EDEC
    if (ctx->r3 == ctx->r7) {
        // 0x8025EDBC: lui         $t5, 0x8009
        ctx->r13 = S32(0X8009 << 16);
            goto L_8025EDEC;
    }
    // 0x8025EDBC: lui         $t5, 0x8009
    ctx->r13 = S32(0X8009 << 16);
    // 0x8025EDC0: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x8025EDC4: beq         $v1, $a1, L_8025EE08
    if (ctx->r3 == ctx->r5) {
        // 0x8025EDC8: addiu       $at, $zero, 0x3
        ctx->r1 = ADD32(0, 0X3);
            goto L_8025EE08;
    }
    // 0x8025EDC8: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x8025EDCC: beq         $v1, $at, L_8025EE24
    if (ctx->r3 == ctx->r1) {
        // 0x8025EDD0: nop
    
            goto L_8025EE24;
    }
    // 0x8025EDD0: nop

    // 0x8025EDD4: b           L_8025EE34
    // 0x8025EDD8: lw          $t6, 0x18($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X18);
        goto L_8025EE34;
    // 0x8025EDD8: lw          $t6, 0x18($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X18);
L_8025EDDC:
    // 0x8025EDDC: jal         0x8007736C
    // 0x8025EDE0: nop

    func_8007736C(rdram, ctx);
        goto after_5;
    // 0x8025EDE0: nop

    after_5:
    // 0x8025EDE4: b           L_8025EE30
    // 0x8025EDE8: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
        goto L_8025EE30;
    // 0x8025EDE8: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
L_8025EDEC:
    // 0x8025EDEC: lw          $t5, 0x3B20($t5)
    ctx->r13 = MEM_W(ctx->r13, 0X3B20);
    // 0x8025EDF0: nop

    // 0x8025EDF4: lw          $a0, 0x8C($t5)
    ctx->r4 = MEM_W(ctx->r13, 0X8C);
    // 0x8025EDF8: jal         0x80076F88
    // 0x8025EDFC: nop

    func_80076F88(rdram, ctx);
        goto after_6;
    // 0x8025EDFC: nop

    after_6:
    // 0x8025EE00: b           L_8025EE30
    // 0x8025EE04: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
        goto L_8025EE30;
    // 0x8025EE04: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
L_8025EE08:
    // 0x8025EE08: jal         0x800770B0
    // 0x8025EE0C: nop

    func_800770B0(rdram, ctx);
        goto after_7;
    // 0x8025EE0C: nop

    after_7:
    // 0x8025EE10: addiu       $a0, $zero, 0x579
    ctx->r4 = ADD32(0, 0X579);
    // 0x8025EE14: jal         0x802A14C0
    // 0x8025EE18: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    LOOKUP_FUNC(0x802A14C0)(rdram, ctx);
        goto after_8;
    // 0x8025EE18: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_8:
    // 0x8025EE1C: b           L_8025EE30
    // 0x8025EE20: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
        goto L_8025EE30;
    // 0x8025EE20: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
L_8025EE24:
    // 0x8025EE24: jal         0x800772D8
    // 0x8025EE28: nop

    func_800772D8(rdram, ctx);
        goto after_9;
    // 0x8025EE28: nop

    after_9:
    // 0x8025EE2C: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
L_8025EE30:
    // 0x8025EE30: lw          $t6, 0x18($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X18);
L_8025EE34:
    // 0x8025EE34: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x8025EE38: lui         $a2, 0x802C
    ctx->r6 = S32(0X802C << 16);
    // 0x8025EE3C: bne         $a1, $t6, L_8025EF24
    if (ctx->r5 != ctx->r14) {
        // 0x8025EE40: addiu       $a2, $a2, 0x39F2
        ctx->r6 = ADD32(ctx->r6, 0X39F2);
            goto L_8025EF24;
    }
    // 0x8025EE40: addiu       $a2, $a2, 0x39F2
    ctx->r6 = ADD32(ctx->r6, 0X39F2);
    // 0x8025EE44: lbu         $t7, 0x0($a2)
    ctx->r15 = MEM_BU(ctx->r6, 0X0);
    // 0x8025EE48: nop

    // 0x8025EE4C: addiu       $t8, $t7, 0x1
    ctx->r24 = ADD32(ctx->r15, 0X1);
    // 0x8025EE50: andi        $v1, $t8, 0xFF
    ctx->r3 = ctx->r24 & 0XFF;
    // 0x8025EE54: slti        $at, $v1, 0x4
    ctx->r1 = SIGNED(ctx->r3) < 0X4 ? 1 : 0;
    // 0x8025EE58: bne         $at, $zero, L_8025EE68
    if (ctx->r1 != 0) {
        // 0x8025EE5C: sb          $t8, 0x0($a2)
        MEM_B(0X0, ctx->r6) = ctx->r24;
            goto L_8025EE68;
    }
    // 0x8025EE5C: sb          $t8, 0x0($a2)
    MEM_B(0X0, ctx->r6) = ctx->r24;
    // 0x8025EE60: sb          $zero, 0x0($a2)
    MEM_B(0X0, ctx->r6) = 0;
    // 0x8025EE64: andi        $v1, $zero, 0xFF
    ctx->r3 = 0 & 0XFF;
L_8025EE68:
    // 0x8025EE68: beq         $v1, $zero, L_8025EE94
    if (ctx->r3 == 0) {
        // 0x8025EE6C: nop
    
            goto L_8025EE94;
    }
    // 0x8025EE6C: nop

    // 0x8025EE70: beq         $v1, $a3, L_8025EEB0
    if (ctx->r3 == ctx->r7) {
        // 0x8025EE74: lui         $t9, 0x8009
        ctx->r25 = S32(0X8009 << 16);
            goto L_8025EEB0;
    }
    // 0x8025EE74: lui         $t9, 0x8009
    ctx->r25 = S32(0X8009 << 16);
    // 0x8025EE78: beq         $v1, $a1, L_8025EED8
    if (ctx->r3 == ctx->r5) {
        // 0x8025EE7C: lui         $t0, 0x8009
        ctx->r8 = S32(0X8009 << 16);
            goto L_8025EED8;
    }
    // 0x8025EE7C: lui         $t0, 0x8009
    ctx->r8 = S32(0X8009 << 16);
    // 0x8025EE80: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x8025EE84: beq         $v1, $at, L_8025EF00
    if (ctx->r3 == ctx->r1) {
        // 0x8025EE88: nop
    
            goto L_8025EF00;
    }
    // 0x8025EE88: nop

    // 0x8025EE8C: b           L_8025EF28
    // 0x8025EE90: lw          $t1, 0x18($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X18);
        goto L_8025EF28;
    // 0x8025EE90: lw          $t1, 0x18($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X18);
L_8025EE94:
    // 0x8025EE94: jal         0x800773BC
    // 0x8025EE98: nop

    func_800773BC(rdram, ctx);
        goto after_10;
    // 0x8025EE98: nop

    after_10:
    // 0x8025EE9C: lui         $a2, 0x802C
    ctx->r6 = S32(0X802C << 16);
    // 0x8025EEA0: addiu       $a2, $a2, 0x39F2
    ctx->r6 = ADD32(ctx->r6, 0X39F2);
    // 0x8025EEA4: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    // 0x8025EEA8: b           L_8025EF24
    // 0x8025EEAC: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
        goto L_8025EF24;
    // 0x8025EEAC: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
L_8025EEB0:
    // 0x8025EEB0: lw          $t9, 0x3B20($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X3B20);
    // 0x8025EEB4: nop

    // 0x8025EEB8: lw          $a0, 0x8C($t9)
    ctx->r4 = MEM_W(ctx->r25, 0X8C);
    // 0x8025EEBC: jal         0x80076F88
    // 0x8025EEC0: nop

    func_80076F88(rdram, ctx);
        goto after_11;
    // 0x8025EEC0: nop

    after_11:
    // 0x8025EEC4: lui         $a2, 0x802C
    ctx->r6 = S32(0X802C << 16);
    // 0x8025EEC8: addiu       $a2, $a2, 0x39F2
    ctx->r6 = ADD32(ctx->r6, 0X39F2);
    // 0x8025EECC: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    // 0x8025EED0: b           L_8025EF24
    // 0x8025EED4: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
        goto L_8025EF24;
    // 0x8025EED4: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
L_8025EED8:
    // 0x8025EED8: lw          $t0, 0x3B20($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X3B20);
    // 0x8025EEDC: nop

    // 0x8025EEE0: lw          $a0, 0x8C($t0)
    ctx->r4 = MEM_W(ctx->r8, 0X8C);
    // 0x8025EEE4: jal         0x800772AC
    // 0x8025EEE8: nop

    func_800772AC(rdram, ctx);
        goto after_12;
    // 0x8025EEE8: nop

    after_12:
    // 0x8025EEEC: lui         $a2, 0x802C
    ctx->r6 = S32(0X802C << 16);
    // 0x8025EEF0: addiu       $a2, $a2, 0x39F2
    ctx->r6 = ADD32(ctx->r6, 0X39F2);
    // 0x8025EEF4: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    // 0x8025EEF8: b           L_8025EF24
    // 0x8025EEFC: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
        goto L_8025EF24;
    // 0x8025EEFC: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
L_8025EF00:
    // 0x8025EF00: jal         0x800770B0
    // 0x8025EF04: nop

    func_800770B0(rdram, ctx);
        goto after_13;
    // 0x8025EF04: nop

    after_13:
    // 0x8025EF08: addiu       $a0, $zero, 0x579
    ctx->r4 = ADD32(0, 0X579);
    // 0x8025EF0C: jal         0x802A14C0
    // 0x8025EF10: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    LOOKUP_FUNC(0x802A14C0)(rdram, ctx);
        goto after_14;
    // 0x8025EF10: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_14:
    // 0x8025EF14: lui         $a2, 0x802C
    ctx->r6 = S32(0X802C << 16);
    // 0x8025EF18: addiu       $a2, $a2, 0x39F2
    ctx->r6 = ADD32(ctx->r6, 0X39F2);
    // 0x8025EF1C: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    // 0x8025EF20: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
L_8025EF24:
    // 0x8025EF24: lw          $t1, 0x18($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X18);
L_8025EF28:
    // 0x8025EF28: nop

    // 0x8025EF2C: slti        $t2, $t1, 0x3
    ctx->r10 = SIGNED(ctx->r9) < 0X3 ? 1 : 0;
    // 0x8025EF30: xori        $t2, $t2, 0x1
    ctx->r10 = ctx->r10 ^ 0X1;
    // 0x8025EF34: slti        $t3, $t1, 0x5
    ctx->r11 = SIGNED(ctx->r9) < 0X5 ? 1 : 0;
    // 0x8025EF38: and         $t4, $t2, $t3
    ctx->r12 = ctx->r10 & ctx->r11;
    // 0x8025EF3C: beq         $t4, $zero, L_8025EFF4
    if (ctx->r12 == 0) {
        // 0x8025EF40: lw          $t8, 0x18($sp)
        ctx->r24 = MEM_W(ctx->r29, 0X18);
            goto L_8025EFF4;
    }
    // 0x8025EF40: lw          $t8, 0x18($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X18);
    // 0x8025EF44: lbu         $t5, 0x0($a2)
    ctx->r13 = MEM_BU(ctx->r6, 0X0);
    // 0x8025EF48: nop

    // 0x8025EF4C: addiu       $t6, $t5, 0x1
    ctx->r14 = ADD32(ctx->r13, 0X1);
    // 0x8025EF50: andi        $v1, $t6, 0xFF
    ctx->r3 = ctx->r14 & 0XFF;
    // 0x8025EF54: slti        $at, $v1, 0x3
    ctx->r1 = SIGNED(ctx->r3) < 0X3 ? 1 : 0;
    // 0x8025EF58: bne         $at, $zero, L_8025EF68
    if (ctx->r1 != 0) {
        // 0x8025EF5C: sb          $t6, 0x0($a2)
        MEM_B(0X0, ctx->r6) = ctx->r14;
            goto L_8025EF68;
    }
    // 0x8025EF5C: sb          $t6, 0x0($a2)
    MEM_B(0X0, ctx->r6) = ctx->r14;
    // 0x8025EF60: sb          $zero, 0x0($a2)
    MEM_B(0X0, ctx->r6) = 0;
    // 0x8025EF64: andi        $v1, $zero, 0xFF
    ctx->r3 = 0 & 0XFF;
L_8025EF68:
    // 0x8025EF68: beq         $v1, $zero, L_8025EF88
    if (ctx->r3 == 0) {
        // 0x8025EF6C: nop
    
            goto L_8025EF88;
    }
    // 0x8025EF6C: nop

    // 0x8025EF70: beq         $v1, $a3, L_8025EFA4
    if (ctx->r3 == ctx->r7) {
        // 0x8025EF74: lui         $t7, 0x8009
        ctx->r15 = S32(0X8009 << 16);
            goto L_8025EFA4;
    }
    // 0x8025EF74: lui         $t7, 0x8009
    ctx->r15 = S32(0X8009 << 16);
    // 0x8025EF78: beq         $v1, $a1, L_8025EFCC
    if (ctx->r3 == ctx->r5) {
        // 0x8025EF7C: nop
    
            goto L_8025EFCC;
    }
    // 0x8025EF7C: nop

    // 0x8025EF80: b           L_8025EFF4
    // 0x8025EF84: lw          $t8, 0x18($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X18);
        goto L_8025EFF4;
    // 0x8025EF84: lw          $t8, 0x18($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X18);
L_8025EF88:
    // 0x8025EF88: jal         0x800773E8
    // 0x8025EF8C: nop

    func_800773E8(rdram, ctx);
        goto after_15;
    // 0x8025EF8C: nop

    after_15:
    // 0x8025EF90: lui         $a2, 0x802C
    ctx->r6 = S32(0X802C << 16);
    // 0x8025EF94: addiu       $a2, $a2, 0x39F2
    ctx->r6 = ADD32(ctx->r6, 0X39F2);
    // 0x8025EF98: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    // 0x8025EF9C: b           L_8025EFF0
    // 0x8025EFA0: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
        goto L_8025EFF0;
    // 0x8025EFA0: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
L_8025EFA4:
    // 0x8025EFA4: lw          $t7, 0x3B20($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X3B20);
    // 0x8025EFA8: nop

    // 0x8025EFAC: lw          $a0, 0x8C($t7)
    ctx->r4 = MEM_W(ctx->r15, 0X8C);
    // 0x8025EFB0: jal         0x80076F88
    // 0x8025EFB4: nop

    func_80076F88(rdram, ctx);
        goto after_16;
    // 0x8025EFB4: nop

    after_16:
    // 0x8025EFB8: lui         $a2, 0x802C
    ctx->r6 = S32(0X802C << 16);
    // 0x8025EFBC: addiu       $a2, $a2, 0x39F2
    ctx->r6 = ADD32(ctx->r6, 0X39F2);
    // 0x8025EFC0: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    // 0x8025EFC4: b           L_8025EFF0
    // 0x8025EFC8: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
        goto L_8025EFF0;
    // 0x8025EFC8: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
L_8025EFCC:
    // 0x8025EFCC: jal         0x800770B0
    // 0x8025EFD0: nop

    func_800770B0(rdram, ctx);
        goto after_17;
    // 0x8025EFD0: nop

    after_17:
    // 0x8025EFD4: addiu       $a0, $zero, 0x4A6
    ctx->r4 = ADD32(0, 0X4A6);
    // 0x8025EFD8: jal         0x802A14C0
    // 0x8025EFDC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    LOOKUP_FUNC(0x802A14C0)(rdram, ctx);
        goto after_18;
    // 0x8025EFDC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_18:
    // 0x8025EFE0: lui         $a2, 0x802C
    ctx->r6 = S32(0X802C << 16);
    // 0x8025EFE4: addiu       $a2, $a2, 0x39F2
    ctx->r6 = ADD32(ctx->r6, 0X39F2);
    // 0x8025EFE8: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    // 0x8025EFEC: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
L_8025EFF0:
    // 0x8025EFF0: lw          $t8, 0x18($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X18);
L_8025EFF4:
    // 0x8025EFF4: nop

    // 0x8025EFF8: slti        $t9, $t8, 0x6
    ctx->r25 = SIGNED(ctx->r24) < 0X6 ? 1 : 0;
    // 0x8025EFFC: xori        $t9, $t9, 0x1
    ctx->r25 = ctx->r25 ^ 0X1;
    // 0x8025F000: slti        $t0, $t8, 0x7
    ctx->r8 = SIGNED(ctx->r24) < 0X7 ? 1 : 0;
    // 0x8025F004: and         $t1, $t9, $t0
    ctx->r9 = ctx->r25 & ctx->r8;
    // 0x8025F008: beq         $t1, $zero, L_8025F0CC
    if (ctx->r9 == 0) {
        // 0x8025F00C: lw          $t4, 0x18($sp)
        ctx->r12 = MEM_W(ctx->r29, 0X18);
            goto L_8025F0CC;
    }
    // 0x8025F00C: lw          $t4, 0x18($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X18);
    // 0x8025F010: lbu         $t2, 0x0($a2)
    ctx->r10 = MEM_BU(ctx->r6, 0X0);
    // 0x8025F014: nop

    // 0x8025F018: addiu       $t3, $t2, 0x1
    ctx->r11 = ADD32(ctx->r10, 0X1);
    // 0x8025F01C: andi        $v1, $t3, 0xFF
    ctx->r3 = ctx->r11 & 0XFF;
    // 0x8025F020: slti        $at, $v1, 0x5
    ctx->r1 = SIGNED(ctx->r3) < 0X5 ? 1 : 0;
    // 0x8025F024: bne         $at, $zero, L_8025F034
    if (ctx->r1 != 0) {
        // 0x8025F028: sb          $t3, 0x0($a2)
        MEM_B(0X0, ctx->r6) = ctx->r11;
            goto L_8025F034;
    }
    // 0x8025F028: sb          $t3, 0x0($a2)
    MEM_B(0X0, ctx->r6) = ctx->r11;
    // 0x8025F02C: sb          $zero, 0x0($a2)
    MEM_B(0X0, ctx->r6) = 0;
    // 0x8025F030: andi        $v1, $zero, 0xFF
    ctx->r3 = 0 & 0XFF;
L_8025F034:
    // 0x8025F034: beq         $v1, $zero, L_8025F05C
    if (ctx->r3 == 0) {
        // 0x8025F038: nop
    
            goto L_8025F05C;
    }
    // 0x8025F038: nop

    // 0x8025F03C: beq         $v1, $a3, L_8025F078
    if (ctx->r3 == ctx->r7) {
        // 0x8025F040: nop
    
            goto L_8025F078;
    }
    // 0x8025F040: nop

    // 0x8025F044: beq         $v1, $a1, L_8025F094
    if (ctx->r3 == ctx->r5) {
        // 0x8025F048: addiu       $at, $zero, 0x3
        ctx->r1 = ADD32(0, 0X3);
            goto L_8025F094;
    }
    // 0x8025F048: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x8025F04C: beq         $v1, $at, L_8025F0B0
    if (ctx->r3 == ctx->r1) {
        // 0x8025F050: nop
    
            goto L_8025F0B0;
    }
    // 0x8025F050: nop

    // 0x8025F054: b           L_8025F0CC
    // 0x8025F058: lw          $t4, 0x18($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X18);
        goto L_8025F0CC;
    // 0x8025F058: lw          $t4, 0x18($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X18);
L_8025F05C:
    // 0x8025F05C: jal         0x80077220
    // 0x8025F060: nop

    func_80077220(rdram, ctx);
        goto after_19;
    // 0x8025F060: nop

    after_19:
    // 0x8025F064: lui         $a2, 0x802C
    ctx->r6 = S32(0X802C << 16);
    // 0x8025F068: addiu       $a2, $a2, 0x39F2
    ctx->r6 = ADD32(ctx->r6, 0X39F2);
    // 0x8025F06C: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    // 0x8025F070: b           L_8025F0C8
    // 0x8025F074: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
        goto L_8025F0C8;
    // 0x8025F074: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
L_8025F078:
    // 0x8025F078: jal         0x80077254
    // 0x8025F07C: nop

    func_80077254(rdram, ctx);
        goto after_20;
    // 0x8025F07C: nop

    after_20:
    // 0x8025F080: lui         $a2, 0x802C
    ctx->r6 = S32(0X802C << 16);
    // 0x8025F084: addiu       $a2, $a2, 0x39F2
    ctx->r6 = ADD32(ctx->r6, 0X39F2);
    // 0x8025F088: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    // 0x8025F08C: b           L_8025F0C8
    // 0x8025F090: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
        goto L_8025F0C8;
    // 0x8025F090: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
L_8025F094:
    // 0x8025F094: jal         0x80077280
    // 0x8025F098: nop

    func_80077280(rdram, ctx);
        goto after_21;
    // 0x8025F098: nop

    after_21:
    // 0x8025F09C: lui         $a2, 0x802C
    ctx->r6 = S32(0X802C << 16);
    // 0x8025F0A0: addiu       $a2, $a2, 0x39F2
    ctx->r6 = ADD32(ctx->r6, 0X39F2);
    // 0x8025F0A4: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    // 0x8025F0A8: b           L_8025F0C8
    // 0x8025F0AC: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
        goto L_8025F0C8;
    // 0x8025F0AC: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
L_8025F0B0:
    // 0x8025F0B0: jal         0x80077414
    // 0x8025F0B4: nop

    func_80077414(rdram, ctx);
        goto after_22;
    // 0x8025F0B4: nop

    after_22:
    // 0x8025F0B8: lui         $a2, 0x802C
    ctx->r6 = S32(0X802C << 16);
    // 0x8025F0BC: addiu       $a2, $a2, 0x39F2
    ctx->r6 = ADD32(ctx->r6, 0X39F2);
    // 0x8025F0C0: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    // 0x8025F0C4: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
L_8025F0C8:
    // 0x8025F0C8: lw          $t4, 0x18($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X18);
L_8025F0CC:
    // 0x8025F0CC: nop

    // 0x8025F0D0: slti        $at, $t4, 0x8
    ctx->r1 = SIGNED(ctx->r12) < 0X8 ? 1 : 0;
    // 0x8025F0D4: bne         $at, $zero, L_8025F164
    if (ctx->r1 != 0) {
        // 0x8025F0D8: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_8025F164;
    }
    // 0x8025F0D8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8025F0DC: lbu         $t5, 0x0($a2)
    ctx->r13 = MEM_BU(ctx->r6, 0X0);
    // 0x8025F0E0: nop

    // 0x8025F0E4: addiu       $t6, $t5, 0x1
    ctx->r14 = ADD32(ctx->r13, 0X1);
    // 0x8025F0E8: andi        $v1, $t6, 0xFF
    ctx->r3 = ctx->r14 & 0XFF;
    // 0x8025F0EC: slti        $at, $v1, 0x5
    ctx->r1 = SIGNED(ctx->r3) < 0X5 ? 1 : 0;
    // 0x8025F0F0: bne         $at, $zero, L_8025F100
    if (ctx->r1 != 0) {
        // 0x8025F0F4: sb          $t6, 0x0($a2)
        MEM_B(0X0, ctx->r6) = ctx->r14;
            goto L_8025F100;
    }
    // 0x8025F0F4: sb          $t6, 0x0($a2)
    MEM_B(0X0, ctx->r6) = ctx->r14;
    // 0x8025F0F8: sb          $zero, 0x0($a2)
    MEM_B(0X0, ctx->r6) = 0;
    // 0x8025F0FC: andi        $v1, $zero, 0xFF
    ctx->r3 = 0 & 0XFF;
L_8025F100:
    // 0x8025F100: beq         $v1, $zero, L_8025F128
    if (ctx->r3 == 0) {
        // 0x8025F104: nop
    
            goto L_8025F128;
    }
    // 0x8025F104: nop

    // 0x8025F108: beq         $v1, $a3, L_8025F138
    if (ctx->r3 == ctx->r7) {
        // 0x8025F10C: nop
    
            goto L_8025F138;
    }
    // 0x8025F10C: nop

    // 0x8025F110: beq         $v1, $a1, L_8025F148
    if (ctx->r3 == ctx->r5) {
        // 0x8025F114: addiu       $at, $zero, 0x3
        ctx->r1 = ADD32(0, 0X3);
            goto L_8025F148;
    }
    // 0x8025F114: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x8025F118: beq         $v1, $at, L_8025F158
    if (ctx->r3 == ctx->r1) {
        // 0x8025F11C: nop
    
            goto L_8025F158;
    }
    // 0x8025F11C: nop

    // 0x8025F120: b           L_8025F164
    // 0x8025F124: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_8025F164;
    // 0x8025F124: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8025F128:
    // 0x8025F128: jal         0x80077034
    // 0x8025F12C: nop

    func_80077034(rdram, ctx);
        goto after_23;
    // 0x8025F12C: nop

    after_23:
    // 0x8025F130: b           L_8025F164
    // 0x8025F134: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_8025F164;
    // 0x8025F134: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8025F138:
    // 0x8025F138: jal         0x80077100
    // 0x8025F13C: nop

    func_80077100(rdram, ctx);
        goto after_24;
    // 0x8025F13C: nop

    after_24:
    // 0x8025F140: b           L_8025F164
    // 0x8025F144: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_8025F164;
    // 0x8025F144: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8025F148:
    // 0x8025F148: jal         0x8007712C
    // 0x8025F14C: nop

    func_8007712C(rdram, ctx);
        goto after_25;
    // 0x8025F14C: nop

    after_25:
    // 0x8025F150: b           L_8025F164
    // 0x8025F154: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_8025F164;
    // 0x8025F154: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8025F158:
    // 0x8025F158: jal         0x80077158
    // 0x8025F15C: nop

    func_80077158(rdram, ctx);
        goto after_26;
    // 0x8025F15C: nop

    after_26:
    // 0x8025F160: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8025F164:
    // 0x8025F164: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x8025F168: jr          $ra
    // 0x8025F16C: nop

    return;
    // 0x8025F16C: nop

;}
RECOMP_FUNC void ovl_8024B800_func_8025F170(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8025F170: lui         $a0, 0x802C
    ctx->r4 = S32(0X802C << 16);
    // 0x8025F174: addiu       $a0, $a0, 0x3A80
    ctx->r4 = ADD32(ctx->r4, 0X3A80);
    // 0x8025F178: lhu         $v1, 0x0($a0)
    ctx->r3 = MEM_HU(ctx->r4, 0X0);
    // 0x8025F17C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8025F180: andi        $t6, $v1, 0x2
    ctx->r14 = ctx->r3 & 0X2;
    // 0x8025F184: beq         $t6, $zero, L_8025F210
    if (ctx->r14 == 0) {
        // 0x8025F188: sw          $ra, 0x14($sp)
        MEM_W(0X14, ctx->r29) = ctx->r31;
            goto L_8025F210;
    }
    // 0x8025F188: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8025F18C: lui         $t7, 0x8009
    ctx->r15 = S32(0X8009 << 16);
    // 0x8025F190: lw          $t7, 0x3B20($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X3B20);
    // 0x8025F194: lui         $at, 0x4059
    ctx->r1 = S32(0X4059 << 16);
    // 0x8025F198: lw          $v0, 0x8C($t7)
    ctx->r2 = MEM_W(ctx->r15, 0X8C);
    // 0x8025F19C: nop

    // 0x8025F1A0: lw          $t8, 0xC8($v0)
    ctx->r24 = MEM_W(ctx->r2, 0XC8);
    // 0x8025F1A4: nop

    // 0x8025F1A8: lhu         $t9, 0x8($t8)
    ctx->r25 = MEM_HU(ctx->r24, 0X8);
    // 0x8025F1AC: nop

    // 0x8025F1B0: andi        $t0, $t9, 0x1
    ctx->r8 = ctx->r25 & 0X1;
    // 0x8025F1B4: beq         $t0, $zero, L_8025F1E8
    if (ctx->r8 == 0) {
        // 0x8025F1B8: nop
    
            goto L_8025F1E8;
    }
    // 0x8025F1B8: nop

    // 0x8025F1BC: lwc1        $f4, 0x4C($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X4C);
    // 0x8025F1C0: lui         $at, 0xC059
    ctx->r1 = S32(0XC059 << 16);
    // 0x8025F1C4: mtc1        $at, $f9
    ctx->f_odd[(9 - 1) * 2] = ctx->r1;
    // 0x8025F1C8: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x8025F1CC: cvt.d.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.d = CVT_D_S(ctx->f4.fl);
    // 0x8025F1D0: c.lt.d      $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f6.d < ctx->f8.d;
    // 0x8025F1D4: andi        $t1, $v1, 0xFFFD
    ctx->r9 = ctx->r3 & 0XFFFD;
    // 0x8025F1D8: bc1f        L_8025F340
    if (!c1cs) {
        // 0x8025F1DC: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_8025F340;
    }
    // 0x8025F1DC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8025F1E0: b           L_8025F33C
    // 0x8025F1E4: sh          $t1, 0x0($a0)
    MEM_H(0X0, ctx->r4) = ctx->r9;
        goto L_8025F33C;
    // 0x8025F1E4: sh          $t1, 0x0($a0)
    MEM_H(0X0, ctx->r4) = ctx->r9;
L_8025F1E8:
    // 0x8025F1E8: lwc1        $f16, 0x4C($v0)
    ctx->f16.u32l = MEM_W(ctx->r2, 0X4C);
    // 0x8025F1EC: mtc1        $at, $f11
    ctx->f_odd[(11 - 1) * 2] = ctx->r1;
    // 0x8025F1F0: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x8025F1F4: cvt.d.s     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); 
    ctx->f18.d = CVT_D_S(ctx->f16.fl);
    // 0x8025F1F8: c.lt.d      $f10, $f18
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f10.d < ctx->f18.d;
    // 0x8025F1FC: andi        $t2, $v1, 0xFFFD
    ctx->r10 = ctx->r3 & 0XFFFD;
    // 0x8025F200: bc1f        L_8025F340
    if (!c1cs) {
        // 0x8025F204: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_8025F340;
    }
    // 0x8025F204: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8025F208: b           L_8025F33C
    // 0x8025F20C: sh          $t2, 0x0($a0)
    MEM_H(0X0, ctx->r4) = ctx->r10;
        goto L_8025F33C;
    // 0x8025F20C: sh          $t2, 0x0($a0)
    MEM_H(0X0, ctx->r4) = ctx->r10;
L_8025F210:
    // 0x8025F210: lui         $t3, 0x8012
    ctx->r11 = S32(0X8012 << 16);
    // 0x8025F214: lhu         $t3, 0xB7A($t3)
    ctx->r11 = MEM_HU(ctx->r11, 0XB7A);
    // 0x8025F218: lui         $t4, 0x8009
    ctx->r12 = S32(0X8009 << 16);
    // 0x8025F21C: bne         $t3, $zero, L_8025F340
    if (ctx->r11 != 0) {
        // 0x8025F220: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_8025F340;
    }
    // 0x8025F220: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8025F224: lw          $t4, 0x3B20($t4)
    ctx->r12 = MEM_W(ctx->r12, 0X3B20);
    // 0x8025F228: nop

    // 0x8025F22C: lw          $v0, 0x88($t4)
    ctx->r2 = MEM_W(ctx->r12, 0X88);
    // 0x8025F230: nop

    // 0x8025F234: beq         $v0, $zero, L_8025F340
    if (ctx->r2 == 0) {
        // 0x8025F238: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_8025F340;
    }
    // 0x8025F238: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8025F23C: lw          $t5, 0xC8($v0)
    ctx->r13 = MEM_W(ctx->r2, 0XC8);
    // 0x8025F240: lui         $at, 0x8028
    ctx->r1 = S32(0X8028 << 16);
    // 0x8025F244: lhu         $t6, 0x8($t5)
    ctx->r14 = MEM_HU(ctx->r13, 0X8);
    // 0x8025F248: nop

    // 0x8025F24C: andi        $t7, $t6, 0x1
    ctx->r15 = ctx->r14 & 0X1;
    // 0x8025F250: beq         $t7, $zero, L_8025F2D0
    if (ctx->r15 == 0) {
        // 0x8025F254: nop
    
            goto L_8025F2D0;
    }
    // 0x8025F254: nop

    // 0x8025F258: lui         $at, 0x8028
    ctx->r1 = S32(0X8028 << 16);
    // 0x8025F25C: lwc1        $f6, 0x4C($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0X4C);
    // 0x8025F260: lwc1        $f5, -0x37B8($at)
    ctx->f_odd[(5 - 1) * 2] = MEM_W(ctx->r1, -0X37B8);
    // 0x8025F264: lwc1        $f4, -0x37B4($at)
    ctx->f4.u32l = MEM_W(ctx->r1, -0X37B4);
    // 0x8025F268: cvt.d.s     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f8.d = CVT_D_S(ctx->f6.fl);
    // 0x8025F26C: c.lt.d      $f4, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f4.d < ctx->f8.d;
    // 0x8025F270: lui         $at, 0xC352
    ctx->r1 = S32(0XC352 << 16);
    // 0x8025F274: bc1f        L_8025F340
    if (!c1cs) {
        // 0x8025F278: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_8025F340;
    }
    // 0x8025F278: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8025F27C: lwc1        $f0, 0x44($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X44);
    // 0x8025F280: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x8025F284: lui         $at, 0x4352
    ctx->r1 = S32(0X4352 << 16);
    // 0x8025F288: c.lt.s      $f0, $f16
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f0.fl < ctx->f16.fl;
    // 0x8025F28C: nop

    // 0x8025F290: bc1f        L_8025F2A8
    if (!c1cs) {
        // 0x8025F294: nop
    
            goto L_8025F2A8;
    }
    // 0x8025F294: nop

    // 0x8025F298: jal         0x8025F34C
    // 0x8025F29C: nop

    ovl_8024B800_func_8025F34C(rdram, ctx);
        goto after_0;
    // 0x8025F29C: nop

    after_0:
    // 0x8025F2A0: b           L_8025F340
    // 0x8025F2A4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_8025F340;
    // 0x8025F2A4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8025F2A8:
    // 0x8025F2A8: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x8025F2AC: nop

    // 0x8025F2B0: c.lt.s      $f10, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f10.fl < ctx->f0.fl;
    // 0x8025F2B4: nop

    // 0x8025F2B8: bc1f        L_8025F340
    if (!c1cs) {
        // 0x8025F2BC: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_8025F340;
    }
    // 0x8025F2BC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8025F2C0: jal         0x8025F34C
    // 0x8025F2C4: nop

    ovl_8024B800_func_8025F34C(rdram, ctx);
        goto after_1;
    // 0x8025F2C4: nop

    after_1:
    // 0x8025F2C8: b           L_8025F340
    // 0x8025F2CC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_8025F340;
    // 0x8025F2CC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8025F2D0:
    // 0x8025F2D0: lwc1        $f18, 0x4C($v0)
    ctx->f18.u32l = MEM_W(ctx->r2, 0X4C);
    // 0x8025F2D4: lwc1        $f5, -0x37B0($at)
    ctx->f_odd[(5 - 1) * 2] = MEM_W(ctx->r1, -0X37B0);
    // 0x8025F2D8: lwc1        $f4, -0x37AC($at)
    ctx->f4.u32l = MEM_W(ctx->r1, -0X37AC);
    // 0x8025F2DC: cvt.d.s     $f6, $f18
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.fl); 
    ctx->f6.d = CVT_D_S(ctx->f18.fl);
    // 0x8025F2E0: c.lt.d      $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f6.d < ctx->f4.d;
    // 0x8025F2E4: lui         $at, 0xC352
    ctx->r1 = S32(0XC352 << 16);
    // 0x8025F2E8: bc1f        L_8025F340
    if (!c1cs) {
        // 0x8025F2EC: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_8025F340;
    }
    // 0x8025F2EC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8025F2F0: lwc1        $f0, 0x44($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X44);
    // 0x8025F2F4: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x8025F2F8: lui         $at, 0x4352
    ctx->r1 = S32(0X4352 << 16);
    // 0x8025F2FC: c.lt.s      $f0, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f0.fl < ctx->f8.fl;
    // 0x8025F300: nop

    // 0x8025F304: bc1f        L_8025F31C
    if (!c1cs) {
        // 0x8025F308: nop
    
            goto L_8025F31C;
    }
    // 0x8025F308: nop

    // 0x8025F30C: jal         0x8025F34C
    // 0x8025F310: nop

    ovl_8024B800_func_8025F34C(rdram, ctx);
        goto after_2;
    // 0x8025F310: nop

    after_2:
    // 0x8025F314: b           L_8025F340
    // 0x8025F318: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_8025F340;
    // 0x8025F318: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8025F31C:
    // 0x8025F31C: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x8025F320: nop

    // 0x8025F324: c.lt.s      $f16, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f16.fl < ctx->f0.fl;
    // 0x8025F328: nop

    // 0x8025F32C: bc1f        L_8025F340
    if (!c1cs) {
        // 0x8025F330: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_8025F340;
    }
    // 0x8025F330: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8025F334: jal         0x8025F34C
    // 0x8025F338: nop

    ovl_8024B800_func_8025F34C(rdram, ctx);
        goto after_3;
    // 0x8025F338: nop

    after_3:
L_8025F33C:
    // 0x8025F33C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8025F340:
    // 0x8025F340: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8025F344: jr          $ra
    // 0x8025F348: nop

    return;
    // 0x8025F348: nop

;}
RECOMP_FUNC void ovl_8024B800_func_8025F34C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8025F34C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8025F350: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8025F354: jal         0x802A1744
    // 0x8025F358: nop

    LOOKUP_FUNC(0x802A1744)(rdram, ctx);
        goto after_0;
    // 0x8025F358: nop

    after_0:
    // 0x8025F35C: slti        $at, $v0, 0x3
    ctx->r1 = SIGNED(ctx->r2) < 0X3 ? 1 : 0;
    // 0x8025F360: beq         $at, $zero, L_8025F3E8
    if (ctx->r1 == 0) {
        // 0x8025F364: lui         $t6, 0x8010
        ctx->r14 = S32(0X8010 << 16);
            goto L_8025F3E8;
    }
    // 0x8025F364: lui         $t6, 0x8010
    ctx->r14 = S32(0X8010 << 16);
    // 0x8025F368: lhu         $t6, 0x522A($t6)
    ctx->r14 = MEM_HU(ctx->r14, 0X522A);
    // 0x8025F36C: nop

    // 0x8025F370: andi        $t7, $t6, 0x1
    ctx->r15 = ctx->r14 & 0X1;
    // 0x8025F374: beq         $t7, $zero, L_8025F38C
    if (ctx->r15 == 0) {
        // 0x8025F378: nop
    
            goto L_8025F38C;
    }
    // 0x8025F378: nop

    // 0x8025F37C: jal         0x80075C2C
    // 0x8025F380: nop

    func_80075C2C(rdram, ctx);
        goto after_1;
    // 0x8025F380: nop

    after_1:
    // 0x8025F384: b           L_8025F394
    // 0x8025F388: nop

        goto L_8025F394;
    // 0x8025F388: nop

L_8025F38C:
    // 0x8025F38C: jal         0x80075C94
    // 0x8025F390: nop

    func_80075C94(rdram, ctx);
        goto after_2;
    // 0x8025F390: nop

    after_2:
L_8025F394:
    // 0x8025F394: lui         $t8, 0x8009
    ctx->r24 = S32(0X8009 << 16);
    // 0x8025F398: lw          $t8, 0x3B20($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X3B20);
    // 0x8025F39C: lui         $at, 0xC3AF
    ctx->r1 = S32(0XC3AF << 16);
    // 0x8025F3A0: lw          $t9, 0x8C($t8)
    ctx->r25 = MEM_W(ctx->r24, 0X8C);
    // 0x8025F3A4: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x8025F3A8: lw          $t0, 0xC8($t9)
    ctx->r8 = MEM_W(ctx->r25, 0XC8);
    // 0x8025F3AC: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    // 0x8025F3B0: lhu         $t1, 0x8($t0)
    ctx->r9 = MEM_HU(ctx->r8, 0X8);
    // 0x8025F3B4: addiu       $a3, $zero, 0x5A
    ctx->r7 = ADD32(0, 0X5A);
    // 0x8025F3B8: andi        $t2, $t1, 0x1
    ctx->r10 = ctx->r9 & 0X1;
    // 0x8025F3BC: beq         $t2, $zero, L_8025F3D4
    if (ctx->r10 == 0) {
        // 0x8025F3C0: addiu       $t3, $zero, 0x32
        ctx->r11 = ADD32(0, 0X32);
            goto L_8025F3D4;
    }
    // 0x8025F3C0: addiu       $t3, $zero, 0x32
    ctx->r11 = ADD32(0, 0X32);
    // 0x8025F3C4: lui         $at, 0x43AF
    ctx->r1 = S32(0X43AF << 16);
    // 0x8025F3C8: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x8025F3CC: b           L_8025F3E0
    // 0x8025F3D0: mfc1        $a2, $f0
    ctx->r6 = (int32_t)ctx->f0.u32l;
        goto L_8025F3E0;
    // 0x8025F3D0: mfc1        $a2, $f0
    ctx->r6 = (int32_t)ctx->f0.u32l;
L_8025F3D4:
    // 0x8025F3D4: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x8025F3D8: nop

    // 0x8025F3DC: mfc1        $a2, $f0
    ctx->r6 = (int32_t)ctx->f0.u32l;
L_8025F3E0:
    // 0x8025F3E0: jal         0x8025F3F8
    // 0x8025F3E4: sw          $t3, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r11;
    ovl_8024B800_func_8025F3F8(rdram, ctx);
        goto after_3;
    // 0x8025F3E4: sw          $t3, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r11;
    after_3:
L_8025F3E8:
    // 0x8025F3E8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8025F3EC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x8025F3F0: jr          $ra
    // 0x8025F3F4: nop

    return;
    // 0x8025F3F4: nop

;}
RECOMP_FUNC void ovl_8024B800_func_8025F3F8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8025F3F8: addiu       $sp, $sp, -0x58
    ctx->r29 = ADD32(ctx->r29, -0X58);
    // 0x8025F3FC: lui         $t7, 0x8009
    ctx->r15 = S32(0X8009 << 16);
    // 0x8025F400: lw          $t7, 0x3B20($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X3B20);
    // 0x8025F404: sw          $ra, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r31;
    // 0x8025F408: sw          $s2, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r18;
    // 0x8025F40C: sw          $s1, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r17;
    // 0x8025F410: sw          $s0, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r16;
    // 0x8025F414: swc1        $f31, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->f_odd[(31 - 1) * 2];
    // 0x8025F418: swc1        $f30, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->f30.u32l;
    // 0x8025F41C: swc1        $f29, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f_odd[(29 - 1) * 2];
    // 0x8025F420: swc1        $f28, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f28.u32l;
    // 0x8025F424: swc1        $f27, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f_odd[(27 - 1) * 2];
    // 0x8025F428: swc1        $f26, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f26.u32l;
    // 0x8025F42C: swc1        $f25, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f_odd[(25 - 1) * 2];
    // 0x8025F430: swc1        $f24, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f24.u32l;
    // 0x8025F434: swc1        $f23, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f_odd[(23 - 1) * 2];
    // 0x8025F438: swc1        $f22, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f22.u32l;
    // 0x8025F43C: swc1        $f21, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x8025F440: swc1        $f20, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f20.u32l;
    // 0x8025F444: sw          $a0, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r4;
    // 0x8025F448: sw          $a2, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r6;
    // 0x8025F44C: sw          $a3, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r7;
    // 0x8025F450: lw          $t8, 0x8C($t7)
    ctx->r24 = MEM_W(ctx->r15, 0X8C);
    // 0x8025F454: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x8025F458: lw          $t9, 0xC8($t8)
    ctx->r25 = MEM_W(ctx->r24, 0XC8);
    // 0x8025F45C: addiu       $v0, $v0, -0x2CF0
    ctx->r2 = ADD32(ctx->r2, -0X2CF0);
    // 0x8025F460: mtc1        $a1, $f14
    ctx->f14.u32l = ctx->r5;
    // 0x8025F464: andi        $t6, $a3, 0xFF
    ctx->r14 = ctx->r7 & 0XFF;
    // 0x8025F468: or          $a3, $t6, $zero
    ctx->r7 = ctx->r14 | 0;
    // 0x8025F46C: bne         $v0, $t9, L_8025F480
    if (ctx->r2 != ctx->r25) {
        // 0x8025F470: or          $s2, $zero, $zero
        ctx->r18 = 0 | 0;
            goto L_8025F480;
    }
    // 0x8025F470: or          $s2, $zero, $zero
    ctx->r18 = 0 | 0;
    // 0x8025F474: lw          $s0, 0x18($v0)
    ctx->r16 = MEM_W(ctx->r2, 0X18);
    // 0x8025F478: b           L_8025F48C
    // 0x8025F47C: lui         $at, 0x4130
    ctx->r1 = S32(0X4130 << 16);
        goto L_8025F48C;
    // 0x8025F47C: lui         $at, 0x4130
    ctx->r1 = S32(0X4130 << 16);
L_8025F480:
    // 0x8025F480: lw          $s0, 0xAAC($v0)
    ctx->r16 = MEM_W(ctx->r2, 0XAAC);
    // 0x8025F484: nop

    // 0x8025F488: lui         $at, 0x4130
    ctx->r1 = S32(0X4130 << 16);
L_8025F48C:
    // 0x8025F48C: mtc1        $zero, $f24
    ctx->f24.u32l = 0;
    // 0x8025F490: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x8025F494: nop

    // 0x8025F498: c.lt.s      $f24, $f4
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f24.fl < ctx->f4.fl;
    // 0x8025F49C: nop

    // 0x8025F4A0: bc1f        L_8025F57C
    if (!c1cs) {
        // 0x8025F4A4: nop
    
            goto L_8025F57C;
    }
    // 0x8025F4A4: nop

    // 0x8025F4A8: mtc1        $a3, $f6
    ctx->f6.u32l = ctx->r7;
    // 0x8025F4AC: bgez        $a3, L_8025F4C4
    if (SIGNED(ctx->r7) >= 0) {
        // 0x8025F4B0: cvt.s.w     $f26, $f6
        CHECK_FR(ctx, 26);
    CHECK_FR(ctx, 6);
    ctx->f26.fl = CVT_S_W(ctx->f6.u32l);
            goto L_8025F4C4;
    }
    // 0x8025F4B0: cvt.s.w     $f26, $f6
    CHECK_FR(ctx, 26);
    CHECK_FR(ctx, 6);
    ctx->f26.fl = CVT_S_W(ctx->f6.u32l);
    // 0x8025F4B4: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x8025F4B8: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x8025F4BC: nop

    // 0x8025F4C0: add.s       $f26, $f26, $f8
    CHECK_FR(ctx, 26);
    CHECK_FR(ctx, 26);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f26.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f26.fl = ctx->f26.fl + ctx->f8.fl;
L_8025F4C4:
    // 0x8025F4C4: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x8025F4C8: mtc1        $at, $f30
    ctx->f30.u32l = ctx->r1;
    // 0x8025F4CC: lui         $at, 0x4396
    ctx->r1 = S32(0X4396 << 16);
    // 0x8025F4D0: mtc1        $at, $f28
    ctx->f28.u32l = ctx->r1;
    // 0x8025F4D4: lbu         $s1, 0x6B($sp)
    ctx->r17 = MEM_BU(ctx->r29, 0X6B);
    // 0x8025F4D8: swc1        $f14, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->f14.u32l;
L_8025F4DC:
    // 0x8025F4DC: lwc1        $f14, 0x5C($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X5C);
    // 0x8025F4E0: lwc1        $f12, 0x44($s0)
    ctx->f12.u32l = MEM_W(ctx->r16, 0X44);
    // 0x8025F4E4: jal         0x8025F5E4
    // 0x8025F4E8: nop

    ovl_8024B800_func_8025F5E4(rdram, ctx);
        goto after_0;
    // 0x8025F4E8: nop

    after_0:
    // 0x8025F4EC: c.lt.s      $f0, $f26
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 26);
    c1cs = ctx->f0.fl < ctx->f26.fl;
    // 0x8025F4F0: lwc1        $f14, 0x60($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X60);
    // 0x8025F4F4: bc1f        L_8025F55C
    if (!c1cs) {
        // 0x8025F4F8: mov.s       $f20, $f0
        CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    ctx->f20.fl = ctx->f0.fl;
            goto L_8025F55C;
    }
    // 0x8025F4F8: mov.s       $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    ctx->f20.fl = ctx->f0.fl;
    // 0x8025F4FC: mtc1        $s1, $f10
    ctx->f10.u32l = ctx->r17;
    // 0x8025F500: lwc1        $f12, 0x4C($s0)
    ctx->f12.u32l = MEM_W(ctx->r16, 0X4C);
    // 0x8025F504: bgez        $s1, L_8025F51C
    if (SIGNED(ctx->r17) >= 0) {
        // 0x8025F508: cvt.s.w     $f22, $f10
        CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 10);
    ctx->f22.fl = CVT_S_W(ctx->f10.u32l);
            goto L_8025F51C;
    }
    // 0x8025F508: cvt.s.w     $f22, $f10
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 10);
    ctx->f22.fl = CVT_S_W(ctx->f10.u32l);
    // 0x8025F50C: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x8025F510: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x8025F514: nop

    // 0x8025F518: add.s       $f22, $f22, $f16
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f22.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f22.fl = ctx->f22.fl + ctx->f16.fl;
L_8025F51C:
    // 0x8025F51C: jal         0x8025F5E4
    // 0x8025F520: nop

    ovl_8024B800_func_8025F5E4(rdram, ctx);
        goto after_1;
    // 0x8025F520: nop

    after_1:
    // 0x8025F524: c.lt.s      $f0, $f22
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 22);
    c1cs = ctx->f0.fl < ctx->f22.fl;
    // 0x8025F528: nop

    // 0x8025F52C: bc1f        L_8025F560
    if (!c1cs) {
        // 0x8025F530: lui         $at, 0x4130
        ctx->r1 = S32(0X4130 << 16);
            goto L_8025F560;
    }
    // 0x8025F530: lui         $at, 0x4130
    ctx->r1 = S32(0X4130 << 16);
    // 0x8025F534: mul.s       $f18, $f20, $f20
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f18.fl = MUL_S(ctx->f20.fl, ctx->f20.fl);
    // 0x8025F538: nop

    // 0x8025F53C: mul.s       $f4, $f0, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = MUL_S(ctx->f0.fl, ctx->f0.fl);
    // 0x8025F540: jal         0x8007FA40
    // 0x8025F544: add.s       $f12, $f18, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f12.fl = ctx->f18.fl + ctx->f4.fl;
    func_8007FA40(rdram, ctx);
        goto after_2;
    // 0x8025F544: add.s       $f12, $f18, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f12.fl = ctx->f18.fl + ctx->f4.fl;
    after_2:
    // 0x8025F548: c.lt.s      $f0, $f28
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 28);
    c1cs = ctx->f0.fl < ctx->f28.fl;
    // 0x8025F54C: nop

    // 0x8025F550: bc1f        L_8025F560
    if (!c1cs) {
        // 0x8025F554: lui         $at, 0x4130
        ctx->r1 = S32(0X4130 << 16);
            goto L_8025F560;
    }
    // 0x8025F554: lui         $at, 0x4130
    ctx->r1 = S32(0X4130 << 16);
    // 0x8025F558: or          $s2, $s0, $zero
    ctx->r18 = ctx->r16 | 0;
L_8025F55C:
    // 0x8025F55C: lui         $at, 0x4130
    ctx->r1 = S32(0X4130 << 16);
L_8025F560:
    // 0x8025F560: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x8025F564: add.s       $f24, $f24, $f30
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 30);
    NAN_CHECK(ctx->f24.fl); NAN_CHECK(ctx->f30.fl); 
    ctx->f24.fl = ctx->f24.fl + ctx->f30.fl;
    // 0x8025F568: addiu       $s0, $s0, 0xF8
    ctx->r16 = ADD32(ctx->r16, 0XF8);
    // 0x8025F56C: c.lt.s      $f24, $f6
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f24.fl < ctx->f6.fl;
    // 0x8025F570: nop

    // 0x8025F574: bc1t        L_8025F4DC
    if (c1cs) {
        // 0x8025F578: nop
    
            goto L_8025F4DC;
    }
    // 0x8025F578: nop

L_8025F57C:
    // 0x8025F57C: beq         $s2, $zero, L_8025F5A0
    if (ctx->r18 == 0) {
        // 0x8025F580: lw          $ra, 0x54($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X54);
            goto L_8025F5A0;
    }
    // 0x8025F580: lw          $ra, 0x54($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X54);
    // 0x8025F584: lbu         $t0, 0x5B($sp)
    ctx->r8 = MEM_BU(ctx->r29, 0X5B);
    // 0x8025F588: nop

    // 0x8025F58C: bne         $t0, $zero, L_8025F5A0
    if (ctx->r8 != 0) {
        // 0x8025F590: lw          $ra, 0x54($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X54);
            goto L_8025F5A0;
    }
    // 0x8025F590: lw          $ra, 0x54($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X54);
    // 0x8025F594: jal         0x8025F600
    // 0x8025F598: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    ovl_8024B800_func_8025F600(rdram, ctx);
        goto after_3;
    // 0x8025F598: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    after_3:
    // 0x8025F59C: lw          $ra, 0x54($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X54);
L_8025F5A0:
    // 0x8025F5A0: lwc1        $f21, 0x18($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X18);
    // 0x8025F5A4: lwc1        $f20, 0x1C($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x8025F5A8: lwc1        $f23, 0x20($sp)
    ctx->f_odd[(23 - 1) * 2] = MEM_W(ctx->r29, 0X20);
    // 0x8025F5AC: lwc1        $f22, 0x24($sp)
    ctx->f22.u32l = MEM_W(ctx->r29, 0X24);
    // 0x8025F5B0: lwc1        $f25, 0x28($sp)
    ctx->f_odd[(25 - 1) * 2] = MEM_W(ctx->r29, 0X28);
    // 0x8025F5B4: lwc1        $f24, 0x2C($sp)
    ctx->f24.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x8025F5B8: lwc1        $f27, 0x30($sp)
    ctx->f_odd[(27 - 1) * 2] = MEM_W(ctx->r29, 0X30);
    // 0x8025F5BC: lwc1        $f26, 0x34($sp)
    ctx->f26.u32l = MEM_W(ctx->r29, 0X34);
    // 0x8025F5C0: lwc1        $f29, 0x38($sp)
    ctx->f_odd[(29 - 1) * 2] = MEM_W(ctx->r29, 0X38);
    // 0x8025F5C4: lwc1        $f28, 0x3C($sp)
    ctx->f28.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x8025F5C8: lwc1        $f31, 0x40($sp)
    ctx->f_odd[(31 - 1) * 2] = MEM_W(ctx->r29, 0X40);
    // 0x8025F5CC: lwc1        $f30, 0x44($sp)
    ctx->f30.u32l = MEM_W(ctx->r29, 0X44);
    // 0x8025F5D0: lw          $s0, 0x48($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X48);
    // 0x8025F5D4: lw          $s1, 0x4C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X4C);
    // 0x8025F5D8: lw          $s2, 0x50($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X50);
    // 0x8025F5DC: jr          $ra
    // 0x8025F5E0: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
    return;
    // 0x8025F5E0: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
;}
RECOMP_FUNC void ovl_8024B800_func_8025F5E4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8025F5E4: c.lt.s      $f12, $f14
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 14);
    c1cs = ctx->f12.fl < ctx->f14.fl;
    // 0x8025F5E8: sub.s       $f0, $f12, $f14
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f0.fl = ctx->f12.fl - ctx->f14.fl;
    // 0x8025F5EC: bc1f        L_8025F5F8
    if (!c1cs) {
        // 0x8025F5F0: mov.s       $f2, $f0
        CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.fl = ctx->f0.fl;
            goto L_8025F5F8;
    }
    // 0x8025F5F0: mov.s       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.fl = ctx->f0.fl;
    // 0x8025F5F4: neg.s       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = -ctx->f0.fl;
L_8025F5F8:
    // 0x8025F5F8: jr          $ra
    // 0x8025F5FC: mov.s       $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    ctx->f0.fl = ctx->f2.fl;
    return;
    // 0x8025F5FC: mov.s       $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    ctx->f0.fl = ctx->f2.fl;
;}
RECOMP_FUNC void ovl_8024B800_func_8025F600(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8025F600: lui         $t6, 0x8010
    ctx->r14 = S32(0X8010 << 16);
    // 0x8025F604: lhu         $t6, 0x522A($t6)
    ctx->r14 = MEM_HU(ctx->r14, 0X522A);
    // 0x8025F608: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8025F60C: andi        $t7, $t6, 0x1
    ctx->r15 = ctx->r14 & 0X1;
    // 0x8025F610: beq         $t7, $zero, L_8025F62C
    if (ctx->r15 == 0) {
        // 0x8025F614: sw          $ra, 0x14($sp)
        MEM_W(0X14, ctx->r29) = ctx->r31;
            goto L_8025F62C;
    }
    // 0x8025F614: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8025F618: addiu       $a0, $zero, 0x4B2
    ctx->r4 = ADD32(0, 0X4B2);
    // 0x8025F61C: jal         0x802A14C0
    // 0x8025F620: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    LOOKUP_FUNC(0x802A14C0)(rdram, ctx);
        goto after_0;
    // 0x8025F620: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_0:
    // 0x8025F624: b           L_8025F63C
    // 0x8025F628: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_8025F63C;
    // 0x8025F628: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8025F62C:
    // 0x8025F62C: addiu       $a0, $zero, 0x563
    ctx->r4 = ADD32(0, 0X563);
    // 0x8025F630: jal         0x802A14C0
    // 0x8025F634: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    LOOKUP_FUNC(0x802A14C0)(rdram, ctx);
        goto after_1;
    // 0x8025F634: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_1:
    // 0x8025F638: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8025F63C:
    // 0x8025F63C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8025F640: jr          $ra
    // 0x8025F644: nop

    return;
    // 0x8025F644: nop

;}
RECOMP_FUNC void ovl_8024B800_func_8025F648(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8025F648: lui         $v1, 0x802C
    ctx->r3 = S32(0X802C << 16);
    // 0x8025F64C: addiu       $v1, $v1, 0x3A8B
    ctx->r3 = ADD32(ctx->r3, 0X3A8B);
    // 0x8025F650: lbu         $v0, 0x0($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X0);
    // 0x8025F654: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8025F658: beq         $v0, $zero, L_8025F668
    if (ctx->r2 == 0) {
        // 0x8025F65C: sw          $ra, 0x14($sp)
        MEM_W(0X14, ctx->r29) = ctx->r31;
            goto L_8025F668;
    }
    // 0x8025F65C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8025F660: addiu       $t6, $v0, -0x1
    ctx->r14 = ADD32(ctx->r2, -0X1);
    // 0x8025F664: sb          $t6, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r14;
L_8025F668:
    // 0x8025F668: lui         $v1, 0x802C
    ctx->r3 = S32(0X802C << 16);
    // 0x8025F66C: addiu       $v1, $v1, 0x3A92
    ctx->r3 = ADD32(ctx->r3, 0X3A92);
    // 0x8025F670: lbu         $v0, 0x0($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X0);
    // 0x8025F674: lui         $a1, 0x8009
    ctx->r5 = S32(0X8009 << 16);
    // 0x8025F678: beq         $v0, $zero, L_8025F688
    if (ctx->r2 == 0) {
        // 0x8025F67C: addiu       $a1, $a1, 0x3B20
        ctx->r5 = ADD32(ctx->r5, 0X3B20);
            goto L_8025F688;
    }
    // 0x8025F67C: addiu       $a1, $a1, 0x3B20
    ctx->r5 = ADD32(ctx->r5, 0X3B20);
    // 0x8025F680: addiu       $t7, $v0, -0x1
    ctx->r15 = ADD32(ctx->r2, -0X1);
    // 0x8025F684: sb          $t7, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r15;
L_8025F688:
    // 0x8025F688: lui         $v1, 0x802C
    ctx->r3 = S32(0X802C << 16);
    // 0x8025F68C: addiu       $v1, $v1, 0x3A8E
    ctx->r3 = ADD32(ctx->r3, 0X3A8E);
    // 0x8025F690: lbu         $v0, 0x0($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X0);
    // 0x8025F694: lui         $a0, 0x802C
    ctx->r4 = S32(0X802C << 16);
    // 0x8025F698: beq         $v0, $zero, L_8025F6A4
    if (ctx->r2 == 0) {
        // 0x8025F69C: addiu       $t8, $v0, -0x1
        ctx->r24 = ADD32(ctx->r2, -0X1);
            goto L_8025F6A4;
    }
    // 0x8025F69C: addiu       $t8, $v0, -0x1
    ctx->r24 = ADD32(ctx->r2, -0X1);
    // 0x8025F6A0: sb          $t8, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r24;
L_8025F6A4:
    // 0x8025F6A4: lui         $v1, 0x802C
    ctx->r3 = S32(0X802C << 16);
    // 0x8025F6A8: addiu       $v1, $v1, 0x3A83
    ctx->r3 = ADD32(ctx->r3, 0X3A83);
    // 0x8025F6AC: lbu         $v0, 0x0($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X0);
    // 0x8025F6B0: addiu       $a0, $a0, 0x3A86
    ctx->r4 = ADD32(ctx->r4, 0X3A86);
    // 0x8025F6B4: beq         $v0, $zero, L_8025F6C0
    if (ctx->r2 == 0) {
        // 0x8025F6B8: addiu       $t9, $v0, -0x1
        ctx->r25 = ADD32(ctx->r2, -0X1);
            goto L_8025F6C0;
    }
    // 0x8025F6B8: addiu       $t9, $v0, -0x1
    ctx->r25 = ADD32(ctx->r2, -0X1);
    // 0x8025F6BC: sb          $t9, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r25;
L_8025F6C0:
    // 0x8025F6C0: lw          $v0, 0x0($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X0);
    // 0x8025F6C4: nop

    // 0x8025F6C8: lhu         $v1, 0xC2($v0)
    ctx->r3 = MEM_HU(ctx->r2, 0XC2);
    // 0x8025F6CC: nop

    // 0x8025F6D0: andi        $t0, $v1, 0x8000
    ctx->r8 = ctx->r3 & 0X8000;
    // 0x8025F6D4: beq         $t0, $zero, L_8025F838
    if (ctx->r8 == 0) {
        // 0x8025F6D8: andi        $t1, $v1, 0x7FFF
        ctx->r9 = ctx->r3 & 0X7FFF;
            goto L_8025F838;
    }
    // 0x8025F6D8: andi        $t1, $v1, 0x7FFF
    ctx->r9 = ctx->r3 & 0X7FFF;
    // 0x8025F6DC: lui         $a0, 0x802C
    ctx->r4 = S32(0X802C << 16);
    // 0x8025F6E0: addiu       $a0, $a0, 0x3A86
    ctx->r4 = ADD32(ctx->r4, 0X3A86);
    // 0x8025F6E4: sh          $t1, 0xC2($v0)
    MEM_H(0XC2, ctx->r2) = ctx->r9;
    // 0x8025F6E8: lhu         $t2, 0x0($a0)
    ctx->r10 = MEM_HU(ctx->r4, 0X0);
    // 0x8025F6EC: lw          $v0, 0x0($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X0);
    // 0x8025F6F0: andi        $t3, $t2, 0xFFFD
    ctx->r11 = ctx->r10 & 0XFFFD;
    // 0x8025F6F4: sh          $t3, 0x0($a0)
    MEM_H(0X0, ctx->r4) = ctx->r11;
    // 0x8025F6F8: lbu         $t4, 0xBC($v0)
    ctx->r12 = MEM_BU(ctx->r2, 0XBC);
    // 0x8025F6FC: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x8025F700: sb          $t4, 0x3A88($at)
    MEM_B(0X3A88, ctx->r1) = ctx->r12;
    // 0x8025F704: lwc1        $f4, 0x0($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X0);
    // 0x8025F708: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x8025F70C: swc1        $f4, 0x3AB8($at)
    MEM_W(0X3AB8, ctx->r1) = ctx->f4.u32l;
    // 0x8025F710: lwc1        $f6, 0x8($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0X8);
    // 0x8025F714: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x8025F718: swc1        $f6, 0x3ABC($at)
    MEM_W(0X3ABC, ctx->r1) = ctx->f6.u32l;
    // 0x8025F71C: lbu         $t5, 0xBC($v0)
    ctx->r13 = MEM_BU(ctx->r2, 0XBC);
    // 0x8025F720: nop

    // 0x8025F724: sltiu       $at, $t5, 0x16
    ctx->r1 = ctx->r13 < 0X16 ? 1 : 0;
    // 0x8025F728: beq         $at, $zero, L_8025F828
    if (ctx->r1 == 0) {
        // 0x8025F72C: sll         $t5, $t5, 2
        ctx->r13 = S32(ctx->r13 << 2);
            goto L_8025F828;
    }
    // 0x8025F72C: sll         $t5, $t5, 2
    ctx->r13 = S32(ctx->r13 << 2);
    // 0x8025F730: lui         $at, 0x8028
    ctx->r1 = S32(0X8028 << 16);
    // 0x8025F734: addu        $at, $at, $t5
    gpr jr_addend_8025F740 = ctx->r13;
    ctx->r1 = ADD32(ctx->r1, ctx->r13);
    // 0x8025F738: lw          $t5, -0x37A8($at)
    ctx->r13 = ADD32(ctx->r1, -0X37A8);
    // 0x8025F73C: nop

    // 0x8025F740: jr          $t5
    // 0x8025F744: nop

    switch (jr_addend_8025F740 >> 2) {
        case 0: goto L_8025F9D8; break;
        case 1: goto L_8025F748; break;
        case 2: goto L_8025F758; break;
        case 3: goto L_8025F768; break;
        case 4: goto L_8025F9D8; break;
        case 5: goto L_8025F778; break;
        case 6: goto L_8025F788; break;
        case 7: goto L_8025F798; break;
        case 8: goto L_8025F7A8; break;
        case 9: goto L_8025F7B8; break;
        case 10: goto L_8025F7C8; break;
        case 11: goto L_8025F7D8; break;
        case 12: goto L_8025F7E8; break;
        case 13: goto L_8025F7F8; break;
        case 14: goto L_8025F9D8; break;
        case 15: goto L_8025F808; break;
        case 16: goto L_8025F828; break;
        case 17: goto L_8025F828; break;
        case 18: goto L_8025F828; break;
        case 19: goto L_8025F828; break;
        case 20: goto L_8025F828; break;
        case 21: goto L_8025F818; break;
        default: switch_error(__func__, 0x8025F740, 0x8027C858);
    }
    // 0x8025F744: nop

L_8025F748:
    // 0x8025F748: jal         0x8025FB58
    // 0x8025F74C: nop

    ovl_8024B800_func_8025FB58(rdram, ctx);
        goto after_0;
    // 0x8025F74C: nop

    after_0:
    // 0x8025F750: b           L_8025F9DC
    // 0x8025F754: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_8025F9DC;
    // 0x8025F754: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8025F758:
    // 0x8025F758: jal         0x8025FB7C
    // 0x8025F75C: nop

    ovl_8024B800_func_8025FB7C(rdram, ctx);
        goto after_1;
    // 0x8025F75C: nop

    after_1:
    // 0x8025F760: b           L_8025F9DC
    // 0x8025F764: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_8025F9DC;
    // 0x8025F764: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8025F768:
    // 0x8025F768: jal         0x8025FE20
    // 0x8025F76C: nop

    ovl_8024B800_func_8025FE20(rdram, ctx);
        goto after_2;
    // 0x8025F76C: nop

    after_2:
    // 0x8025F770: b           L_8025F9DC
    // 0x8025F774: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_8025F9DC;
    // 0x8025F774: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8025F778:
    // 0x8025F778: jal         0x8025FEBC
    // 0x8025F77C: nop

    ovl_8024B800_func_8025FEBC(rdram, ctx);
        goto after_3;
    // 0x8025F77C: nop

    after_3:
    // 0x8025F780: b           L_8025F9DC
    // 0x8025F784: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_8025F9DC;
    // 0x8025F784: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8025F788:
    // 0x8025F788: jal         0x8025FF1C
    // 0x8025F78C: nop

    ovl_8024B800_func_8025FF1C(rdram, ctx);
        goto after_4;
    // 0x8025F78C: nop

    after_4:
    // 0x8025F790: b           L_8025F9DC
    // 0x8025F794: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_8025F9DC;
    // 0x8025F794: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8025F798:
    // 0x8025F798: jal         0x8025FF7C
    // 0x8025F79C: nop

    ovl_8024B800_func_8025FF7C(rdram, ctx);
        goto after_5;
    // 0x8025F79C: nop

    after_5:
    // 0x8025F7A0: b           L_8025F9DC
    // 0x8025F7A4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_8025F9DC;
    // 0x8025F7A4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8025F7A8:
    // 0x8025F7A8: jal         0x8025FFDC
    // 0x8025F7AC: nop

    ovl_8024B800_func_8025FFDC(rdram, ctx);
        goto after_6;
    // 0x8025F7AC: nop

    after_6:
    // 0x8025F7B0: b           L_8025F9DC
    // 0x8025F7B4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_8025F9DC;
    // 0x8025F7B4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8025F7B8:
    // 0x8025F7B8: jal         0x8026003C
    // 0x8025F7BC: nop

    ovl_8024B800_func_8026003C(rdram, ctx);
        goto after_7;
    // 0x8025F7BC: nop

    after_7:
    // 0x8025F7C0: b           L_8025F9DC
    // 0x8025F7C4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_8025F9DC;
    // 0x8025F7C4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8025F7C8:
    // 0x8025F7C8: jal         0x8026009C
    // 0x8025F7CC: nop

    ovl_8024B800_func_8026009C(rdram, ctx);
        goto after_8;
    // 0x8025F7CC: nop

    after_8:
    // 0x8025F7D0: b           L_8025F9DC
    // 0x8025F7D4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_8025F9DC;
    // 0x8025F7D4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8025F7D8:
    // 0x8025F7D8: jal         0x802600FC
    // 0x8025F7DC: nop

    ovl_8024B800_func_802600FC(rdram, ctx);
        goto after_9;
    // 0x8025F7DC: nop

    after_9:
    // 0x8025F7E0: b           L_8025F9DC
    // 0x8025F7E4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_8025F9DC;
    // 0x8025F7E4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8025F7E8:
    // 0x8025F7E8: jal         0x80260120
    // 0x8025F7EC: nop

    ovl_8024B800_func_80260120(rdram, ctx);
        goto after_10;
    // 0x8025F7EC: nop

    after_10:
    // 0x8025F7F0: b           L_8025F9DC
    // 0x8025F7F4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_8025F9DC;
    // 0x8025F7F4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8025F7F8:
    // 0x8025F7F8: jal         0x80260130
    // 0x8025F7FC: nop

    ovl_8024B800_func_80260130(rdram, ctx);
        goto after_11;
    // 0x8025F7FC: nop

    after_11:
    // 0x8025F800: b           L_8025F9DC
    // 0x8025F804: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_8025F9DC;
    // 0x8025F804: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8025F808:
    // 0x8025F808: jal         0x80260140
    // 0x8025F80C: nop

    ovl_8024B800_func_80260140(rdram, ctx);
        goto after_12;
    // 0x8025F80C: nop

    after_12:
    // 0x8025F810: b           L_8025F9DC
    // 0x8025F814: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_8025F9DC;
    // 0x8025F814: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8025F818:
    // 0x8025F818: jal         0x8025F9E8
    // 0x8025F81C: nop

    ovl_8024B800_func_8025F9E8(rdram, ctx);
        goto after_13;
    // 0x8025F81C: nop

    after_13:
    // 0x8025F820: b           L_8025F9DC
    // 0x8025F824: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_8025F9DC;
    // 0x8025F824: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8025F828:
    // 0x8025F828: lui         $a2, 0x802C
    ctx->r6 = S32(0X802C << 16);
    // 0x8025F82C: addiu       $a2, $a2, 0x3A89
    ctx->r6 = ADD32(ctx->r6, 0X3A89);
    // 0x8025F830: b           L_8025F9D8
    // 0x8025F834: sb          $zero, 0x0($a2)
    MEM_B(0X0, ctx->r6) = 0;
        goto L_8025F9D8;
    // 0x8025F834: sb          $zero, 0x0($a2)
    MEM_B(0X0, ctx->r6) = 0;
L_8025F838:
    // 0x8025F838: lhu         $v1, 0x0($a0)
    ctx->r3 = MEM_HU(ctx->r4, 0X0);
    // 0x8025F83C: lui         $a2, 0x802C
    ctx->r6 = S32(0X802C << 16);
    // 0x8025F840: andi        $t6, $v1, 0x1
    ctx->r14 = ctx->r3 & 0X1;
    // 0x8025F844: beq         $t6, $zero, L_8025F9D8
    if (ctx->r14 == 0) {
        // 0x8025F848: addiu       $a2, $a2, 0x3A89
        ctx->r6 = ADD32(ctx->r6, 0X3A89);
            goto L_8025F9D8;
    }
    // 0x8025F848: addiu       $a2, $a2, 0x3A89
    ctx->r6 = ADD32(ctx->r6, 0X3A89);
    // 0x8025F84C: lbu         $a1, 0x0($a2)
    ctx->r5 = MEM_BU(ctx->r6, 0X0);
    // 0x8025F850: nop

    // 0x8025F854: beq         $a1, $zero, L_8025F864
    if (ctx->r5 == 0) {
        // 0x8025F858: addiu       $t7, $a1, -0x1
        ctx->r15 = ADD32(ctx->r5, -0X1);
            goto L_8025F864;
    }
    // 0x8025F858: addiu       $t7, $a1, -0x1
    ctx->r15 = ADD32(ctx->r5, -0X1);
    // 0x8025F85C: b           L_8025F9D8
    // 0x8025F860: sb          $t7, 0x0($a2)
    MEM_B(0X0, ctx->r6) = ctx->r15;
        goto L_8025F9D8;
    // 0x8025F860: sb          $t7, 0x0($a2)
    MEM_B(0X0, ctx->r6) = ctx->r15;
L_8025F864:
    // 0x8025F864: andi        $t8, $v1, 0x2
    ctx->r24 = ctx->r3 & 0X2;
    // 0x8025F868: bne         $t8, $zero, L_8025F9D8
    if (ctx->r24 != 0) {
        // 0x8025F86C: andi        $t0, $v1, 0xFFFE
        ctx->r8 = ctx->r3 & 0XFFFE;
            goto L_8025F9D8;
    }
    // 0x8025F86C: andi        $t0, $v1, 0xFFFE
    ctx->r8 = ctx->r3 & 0XFFFE;
    // 0x8025F870: sh          $t0, 0x0($a0)
    MEM_H(0X0, ctx->r4) = ctx->r8;
    // 0x8025F874: ori         $t1, $t0, 0x2
    ctx->r9 = ctx->r8 | 0X2;
    // 0x8025F878: sh          $t1, 0x0($a0)
    MEM_H(0X0, ctx->r4) = ctx->r9;
    // 0x8025F87C: lui         $t2, 0x8012
    ctx->r10 = S32(0X8012 << 16);
    // 0x8025F880: lhu         $t2, 0xB78($t2)
    ctx->r10 = MEM_HU(ctx->r10, 0XB78);
    // 0x8025F884: lui         $t3, 0x802C
    ctx->r11 = S32(0X802C << 16);
    // 0x8025F888: bne         $t2, $zero, L_8025F9DC
    if (ctx->r10 != 0) {
        // 0x8025F88C: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_8025F9DC;
    }
    // 0x8025F88C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8025F890: lbu         $t3, 0x3A88($t3)
    ctx->r11 = MEM_BU(ctx->r11, 0X3A88);
    // 0x8025F894: nop

    // 0x8025F898: sltiu       $at, $t3, 0x16
    ctx->r1 = ctx->r11 < 0X16 ? 1 : 0;
    // 0x8025F89C: beq         $at, $zero, L_8025F9D8
    if (ctx->r1 == 0) {
        // 0x8025F8A0: sll         $t3, $t3, 2
        ctx->r11 = S32(ctx->r11 << 2);
            goto L_8025F9D8;
    }
    // 0x8025F8A0: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x8025F8A4: lui         $at, 0x8028
    ctx->r1 = S32(0X8028 << 16);
    // 0x8025F8A8: addu        $at, $at, $t3
    gpr jr_addend_8025F8B4 = ctx->r11;
    ctx->r1 = ADD32(ctx->r1, ctx->r11);
    // 0x8025F8AC: lw          $t3, -0x3750($at)
    ctx->r11 = ADD32(ctx->r1, -0X3750);
    // 0x8025F8B0: nop

    // 0x8025F8B4: jr          $t3
    // 0x8025F8B8: nop

    switch (jr_addend_8025F8B4 >> 2) {
        case 0: goto L_8025F9D8; break;
        case 1: goto L_8025F8BC; break;
        case 2: goto L_8025F8FC; break;
        case 3: goto L_8025F90C; break;
        case 4: goto L_8025F9D8; break;
        case 5: goto L_8025F930; break;
        case 6: goto L_8025F940; break;
        case 7: goto L_8025F950; break;
        case 8: goto L_8025F960; break;
        case 9: goto L_8025F970; break;
        case 10: goto L_8025F980; break;
        case 11: goto L_8025F990; break;
        case 12: goto L_8025F9A0; break;
        case 13: goto L_8025F9B0; break;
        case 14: goto L_8025F9D8; break;
        case 15: goto L_8025F9C0; break;
        case 16: goto L_8025F9D8; break;
        case 17: goto L_8025F9D8; break;
        case 18: goto L_8025F9D8; break;
        case 19: goto L_8025F9D8; break;
        case 20: goto L_8025F9D8; break;
        case 21: goto L_8025F9D0; break;
        default: switch_error(__func__, 0x8025F8B4, 0x8027C8B0);
    }
    // 0x8025F8B8: nop

L_8025F8BC:
    // 0x8025F8BC: lui         $v0, 0x802C
    ctx->r2 = S32(0X802C << 16);
    // 0x8025F8C0: addiu       $v0, $v0, 0x38C8
    ctx->r2 = ADD32(ctx->r2, 0X38C8);
    // 0x8025F8C4: lh          $t4, 0x0($v0)
    ctx->r12 = MEM_H(ctx->r2, 0X0);
    // 0x8025F8C8: nop

    // 0x8025F8CC: slti        $at, $t4, 0xA0
    ctx->r1 = SIGNED(ctx->r12) < 0XA0 ? 1 : 0;
    // 0x8025F8D0: beq         $at, $zero, L_8025F9DC
    if (ctx->r1 == 0) {
        // 0x8025F8D4: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_8025F9DC;
    }
    // 0x8025F8D4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8025F8D8: lh          $t5, 0x2($v0)
    ctx->r13 = MEM_H(ctx->r2, 0X2);
    // 0x8025F8DC: nop

    // 0x8025F8E0: slti        $at, $t5, 0xA0
    ctx->r1 = SIGNED(ctx->r13) < 0XA0 ? 1 : 0;
    // 0x8025F8E4: beq         $at, $zero, L_8025F9DC
    if (ctx->r1 == 0) {
        // 0x8025F8E8: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_8025F9DC;
    }
    // 0x8025F8E8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8025F8EC: jal         0x80260488
    // 0x8025F8F0: nop

    ovl_8024B800_func_80260488(rdram, ctx);
        goto after_14;
    // 0x8025F8F0: nop

    after_14:
    // 0x8025F8F4: b           L_8025F9DC
    // 0x8025F8F8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_8025F9DC;
    // 0x8025F8F8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8025F8FC:
    // 0x8025F8FC: jal         0x802607F0
    // 0x8025F900: nop

    ovl_8024B800_func_802607F0(rdram, ctx);
        goto after_15;
    // 0x8025F900: nop

    after_15:
    // 0x8025F904: b           L_8025F9DC
    // 0x8025F908: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_8025F9DC;
    // 0x8025F908: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8025F90C:
    // 0x8025F90C: lbu         $t6, 0xBD($v0)
    ctx->r14 = MEM_BU(ctx->r2, 0XBD);
    // 0x8025F910: nop

    // 0x8025F914: andi        $t7, $t6, 0x8
    ctx->r15 = ctx->r14 & 0X8;
    // 0x8025F918: bne         $t7, $zero, L_8025F9DC
    if (ctx->r15 != 0) {
        // 0x8025F91C: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_8025F9DC;
    }
    // 0x8025F91C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8025F920: jal         0x80260B00
    // 0x8025F924: nop

    ovl_8024B800_func_80260B00(rdram, ctx);
        goto after_16;
    // 0x8025F924: nop

    after_16:
    // 0x8025F928: b           L_8025F9DC
    // 0x8025F92C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_8025F9DC;
    // 0x8025F92C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8025F930:
    // 0x8025F930: jal         0x80260E6C
    // 0x8025F934: nop

    ovl_8024B800_func_80260E6C(rdram, ctx);
        goto after_17;
    // 0x8025F934: nop

    after_17:
    // 0x8025F938: b           L_8025F9DC
    // 0x8025F93C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_8025F9DC;
    // 0x8025F93C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8025F940:
    // 0x8025F940: jal         0x80261014
    // 0x8025F944: nop

    ovl_8024B800_func_80261014(rdram, ctx);
        goto after_18;
    // 0x8025F944: nop

    after_18:
    // 0x8025F948: b           L_8025F9DC
    // 0x8025F94C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_8025F9DC;
    // 0x8025F94C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8025F950:
    // 0x8025F950: jal         0x802610B0
    // 0x8025F954: nop

    ovl_8024B800_func_802610B0(rdram, ctx);
        goto after_19;
    // 0x8025F954: nop

    after_19:
    // 0x8025F958: b           L_8025F9DC
    // 0x8025F95C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_8025F9DC;
    // 0x8025F95C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8025F960:
    // 0x8025F960: jal         0x80261110
    // 0x8025F964: nop

    ovl_8024B800_func_80261110(rdram, ctx);
        goto after_20;
    // 0x8025F964: nop

    after_20:
    // 0x8025F968: b           L_8025F9DC
    // 0x8025F96C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_8025F9DC;
    // 0x8025F96C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8025F970:
    // 0x8025F970: jal         0x8026113C
    // 0x8025F974: nop

    ovl_8024B800_func_8026113C(rdram, ctx);
        goto after_21;
    // 0x8025F974: nop

    after_21:
    // 0x8025F978: b           L_8025F9DC
    // 0x8025F97C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_8025F9DC;
    // 0x8025F97C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8025F980:
    // 0x8025F980: jal         0x80261168
    // 0x8025F984: nop

    ovl_8024B800_func_80261168(rdram, ctx);
        goto after_22;
    // 0x8025F984: nop

    after_22:
    // 0x8025F988: b           L_8025F9DC
    // 0x8025F98C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_8025F9DC;
    // 0x8025F98C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8025F990:
    // 0x8025F990: jal         0x80261194
    // 0x8025F994: nop

    ovl_8024B800_func_80261194(rdram, ctx);
        goto after_23;
    // 0x8025F994: nop

    after_23:
    // 0x8025F998: b           L_8025F9DC
    // 0x8025F99C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_8025F9DC;
    // 0x8025F99C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8025F9A0:
    // 0x8025F9A0: jal         0x80261200
    // 0x8025F9A4: nop

    ovl_8024B800_func_80261200(rdram, ctx);
        goto after_24;
    // 0x8025F9A4: nop

    after_24:
    // 0x8025F9A8: b           L_8025F9DC
    // 0x8025F9AC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_8025F9DC;
    // 0x8025F9AC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8025F9B0:
    // 0x8025F9B0: jal         0x80261208
    // 0x8025F9B4: nop

    ovl_8024B800_func_80261208(rdram, ctx);
        goto after_25;
    // 0x8025F9B4: nop

    after_25:
    // 0x8025F9B8: b           L_8025F9DC
    // 0x8025F9BC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_8025F9DC;
    // 0x8025F9BC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8025F9C0:
    // 0x8025F9C0: jal         0x80261210
    // 0x8025F9C4: nop

    ovl_8024B800_func_80261210(rdram, ctx);
        goto after_26;
    // 0x8025F9C4: nop

    after_26:
    // 0x8025F9C8: b           L_8025F9DC
    // 0x8025F9CC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_8025F9DC;
    // 0x8025F9CC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8025F9D0:
    // 0x8025F9D0: jal         0x802607AC
    // 0x8025F9D4: nop

    ovl_8024B800_func_802607AC(rdram, ctx);
        goto after_27;
    // 0x8025F9D4: nop

    after_27:
L_8025F9D8:
    // 0x8025F9D8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8025F9DC:
    // 0x8025F9DC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8025F9E0: jr          $ra
    // 0x8025F9E4: nop

    return;
    // 0x8025F9E4: nop

;}
RECOMP_FUNC void ovl_8024B800_func_8025F9E8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8025F9E8: lui         $a0, 0x802C
    ctx->r4 = S32(0X802C << 16);
    // 0x8025F9EC: addiu       $t6, $zero, 0x8
    ctx->r14 = ADD32(0, 0X8);
    // 0x8025F9F0: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x8025F9F4: addiu       $a0, $a0, 0x3A80
    ctx->r4 = ADD32(ctx->r4, 0X3A80);
    // 0x8025F9F8: sb          $t6, 0x3A89($at)
    MEM_B(0X3A89, ctx->r1) = ctx->r14;
    // 0x8025F9FC: lhu         $t7, 0x0($a0)
    ctx->r15 = MEM_HU(ctx->r4, 0X0);
    // 0x8025FA00: lui         $v0, 0x8009
    ctx->r2 = S32(0X8009 << 16);
    // 0x8025FA04: andi        $t8, $t7, 0xF8FF
    ctx->r24 = ctx->r15 & 0XF8FF;
    // 0x8025FA08: sh          $t8, 0x0($a0)
    MEM_H(0X0, ctx->r4) = ctx->r24;
    // 0x8025FA0C: lw          $v0, 0x3B20($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X3B20);
    // 0x8025FA10: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8025FA14: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8025FA18: lhu         $t9, 0xC0($v0)
    ctx->r25 = MEM_HU(ctx->r2, 0XC0);
    // 0x8025FA1C: lui         $v1, 0x8010
    ctx->r3 = S32(0X8010 << 16);
    // 0x8025FA20: andi        $t0, $t9, 0x1
    ctx->r8 = ctx->r25 & 0X1;
    // 0x8025FA24: beq         $t0, $zero, L_8025FAF0
    if (ctx->r8 == 0) {
        // 0x8025FA28: addiu       $v1, $v1, 0x4890
        ctx->r3 = ADD32(ctx->r3, 0X4890);
            goto L_8025FAF0;
    }
    // 0x8025FA28: addiu       $v1, $v1, 0x4890
    ctx->r3 = ADD32(ctx->r3, 0X4890);
    // 0x8025FA2C: lwc1        $f0, 0x1C38($v1)
    ctx->f0.u32l = MEM_W(ctx->r3, 0X1C38);
    // 0x8025FA30: lwc1        $f2, 0x1C30($v1)
    ctx->f2.u32l = MEM_W(ctx->r3, 0X1C30);
    // 0x8025FA34: lwc1        $f12, 0x0($v0)
    ctx->f12.u32l = MEM_W(ctx->r2, 0X0);
    // 0x8025FA38: lwc1        $f14, 0x8($v0)
    ctx->f14.u32l = MEM_W(ctx->r2, 0X8);
    // 0x8025FA3C: mfc1        $a3, $f0
    ctx->r7 = (int32_t)ctx->f0.u32l;
    // 0x8025FA40: mfc1        $a2, $f2
    ctx->r6 = (int32_t)ctx->f2.u32l;
    // 0x8025FA44: swc1        $f0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f0.u32l;
    // 0x8025FA48: jal         0x80261B50
    // 0x8025FA4C: swc1        $f2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f2.u32l;
    ovl_8024B800_func_80261B50(rdram, ctx);
        goto after_0;
    // 0x8025FA4C: swc1        $f2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f2.u32l;
    after_0:
    // 0x8025FA50: lwc1        $f12, 0x18($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X18);
    // 0x8025FA54: lwc1        $f14, 0x1C($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x8025FA58: lui         $a2, 0x43AF
    ctx->r6 = S32(0X43AF << 16);
    // 0x8025FA5C: jal         0x80261A54
    // 0x8025FA60: lui         $a3, 0x4316
    ctx->r7 = S32(0X4316 << 16);
    ovl_8024B800_func_80261A54(rdram, ctx);
        goto after_1;
    // 0x8025FA60: lui         $a3, 0x4316
    ctx->r7 = S32(0X4316 << 16);
    after_1:
    // 0x8025FA64: lui         $t1, 0x802C
    ctx->r9 = S32(0X802C << 16);
    // 0x8025FA68: lbu         $t1, 0x3A96($t1)
    ctx->r9 = MEM_BU(ctx->r9, 0X3A96);
    // 0x8025FA6C: lwc1        $f12, 0x18($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X18);
    // 0x8025FA70: andi        $t2, $t1, 0x1
    ctx->r10 = ctx->r9 & 0X1;
    // 0x8025FA74: beq         $t2, $zero, L_8025FAF0
    if (ctx->r10 == 0) {
        // 0x8025FA78: lui         $a2, 0x43AF
        ctx->r6 = S32(0X43AF << 16);
            goto L_8025FAF0;
    }
    // 0x8025FA78: lui         $a2, 0x43AF
    ctx->r6 = S32(0X43AF << 16);
    // 0x8025FA7C: lwc1        $f14, 0x1C($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x8025FA80: jal         0x80261A54
    // 0x8025FA84: lui         $a3, 0x4248
    ctx->r7 = S32(0X4248 << 16);
    ovl_8024B800_func_80261A54(rdram, ctx);
        goto after_2;
    // 0x8025FA84: lui         $a3, 0x4248
    ctx->r7 = S32(0X4248 << 16);
    after_2:
    // 0x8025FA88: lui         $t3, 0x802C
    ctx->r11 = S32(0X802C << 16);
    // 0x8025FA8C: lbu         $t3, 0x3A96($t3)
    ctx->r11 = MEM_BU(ctx->r11, 0X3A96);
    // 0x8025FA90: lui         $v0, 0x802C
    ctx->r2 = S32(0X802C << 16);
    // 0x8025FA94: andi        $t4, $t3, 0x1
    ctx->r12 = ctx->r11 & 0X1;
    // 0x8025FA98: beq         $t4, $zero, L_8025FAB4
    if (ctx->r12 == 0) {
        // 0x8025FA9C: addiu       $v0, $v0, 0x3A80
        ctx->r2 = ADD32(ctx->r2, 0X3A80);
            goto L_8025FAB4;
    }
    // 0x8025FA9C: addiu       $v0, $v0, 0x3A80
    ctx->r2 = ADD32(ctx->r2, 0X3A80);
    // 0x8025FAA0: lhu         $t5, 0x0($v0)
    ctx->r13 = MEM_HU(ctx->r2, 0X0);
    // 0x8025FAA4: nop

    // 0x8025FAA8: ori         $t6, $t5, 0x100
    ctx->r14 = ctx->r13 | 0X100;
    // 0x8025FAAC: b           L_8025FAF0
    // 0x8025FAB0: sh          $t6, 0x0($v0)
    MEM_H(0X0, ctx->r2) = ctx->r14;
        goto L_8025FAF0;
    // 0x8025FAB0: sh          $t6, 0x0($v0)
    MEM_H(0X0, ctx->r2) = ctx->r14;
L_8025FAB4:
    // 0x8025FAB4: lui         $t7, 0x8009
    ctx->r15 = S32(0X8009 << 16);
    // 0x8025FAB8: lw          $t7, 0x3B20($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X3B20);
    // 0x8025FABC: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x8025FAC0: lwc1        $f4, 0x8($t7)
    ctx->f4.u32l = MEM_W(ctx->r15, 0X8);
    // 0x8025FAC4: nop

    // 0x8025FAC8: c.lt.s      $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f4.fl < ctx->f6.fl;
    // 0x8025FACC: nop

    // 0x8025FAD0: bc1f        L_8025FAE8
    if (!c1cs) {
        // 0x8025FAD4: nop
    
            goto L_8025FAE8;
    }
    // 0x8025FAD4: nop

    // 0x8025FAD8: jal         0x8025FB00
    // 0x8025FADC: nop

    ovl_8024B800_func_8025FB00(rdram, ctx);
        goto after_3;
    // 0x8025FADC: nop

    after_3:
    // 0x8025FAE0: b           L_8025FAF4
    // 0x8025FAE4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_8025FAF4;
    // 0x8025FAE4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8025FAE8:
    // 0x8025FAE8: jal         0x8025FB00
    // 0x8025FAEC: nop

    ovl_8024B800_func_8025FB00(rdram, ctx);
        goto after_4;
    // 0x8025FAEC: nop

    after_4:
L_8025FAF0:
    // 0x8025FAF0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8025FAF4:
    // 0x8025FAF4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x8025FAF8: jr          $ra
    // 0x8025FAFC: nop

    return;
    // 0x8025FAFC: nop

;}
RECOMP_FUNC void ovl_8024B800_func_8025FB00(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8025FB00: lui         $at, 0x43AF
    ctx->r1 = S32(0X43AF << 16);
    // 0x8025FB04: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x8025FB08: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x8025FB0C: lwc1        $f6, 0x3A98($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X3A98);
    // 0x8025FB10: lui         $v0, 0x802C
    ctx->r2 = S32(0X802C << 16);
    // 0x8025FB14: c.lt.s      $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f4.fl < ctx->f6.fl;
    // 0x8025FB18: addiu       $v0, $v0, 0x3A80
    ctx->r2 = ADD32(ctx->r2, 0X3A80);
    // 0x8025FB1C: bc1f        L_8025FB40
    if (!c1cs) {
        // 0x8025FB20: nop
    
            goto L_8025FB40;
    }
    // 0x8025FB20: nop

    // 0x8025FB24: lui         $v0, 0x802C
    ctx->r2 = S32(0X802C << 16);
    // 0x8025FB28: addiu       $v0, $v0, 0x3A80
    ctx->r2 = ADD32(ctx->r2, 0X3A80);
    // 0x8025FB2C: lhu         $t6, 0x0($v0)
    ctx->r14 = MEM_HU(ctx->r2, 0X0);
    // 0x8025FB30: nop

    // 0x8025FB34: ori         $t7, $t6, 0x400
    ctx->r15 = ctx->r14 | 0X400;
    // 0x8025FB38: jr          $ra
    // 0x8025FB3C: sh          $t7, 0x0($v0)
    MEM_H(0X0, ctx->r2) = ctx->r15;
    return;
    // 0x8025FB3C: sh          $t7, 0x0($v0)
    MEM_H(0X0, ctx->r2) = ctx->r15;
L_8025FB40:
    // 0x8025FB40: lhu         $t8, 0x0($v0)
    ctx->r24 = MEM_HU(ctx->r2, 0X0);
    // 0x8025FB44: nop

    // 0x8025FB48: ori         $t9, $t8, 0x200
    ctx->r25 = ctx->r24 | 0X200;
    // 0x8025FB4C: sh          $t9, 0x0($v0)
    MEM_H(0X0, ctx->r2) = ctx->r25;
    // 0x8025FB50: jr          $ra
    // 0x8025FB54: nop

    return;
    // 0x8025FB54: nop

;}
RECOMP_FUNC void ovl_8024B800_func_8025FB58(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8025FB58: lui         $v0, 0x802C
    ctx->r2 = S32(0X802C << 16);
    // 0x8025FB5C: addiu       $v0, $v0, 0x3A86
    ctx->r2 = ADD32(ctx->r2, 0X3A86);
    // 0x8025FB60: lhu         $t6, 0x0($v0)
    ctx->r14 = MEM_HU(ctx->r2, 0X0);
    // 0x8025FB64: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x8025FB68: ori         $t7, $t6, 0x1
    ctx->r15 = ctx->r14 | 0X1;
    // 0x8025FB6C: sh          $t7, 0x0($v0)
    MEM_H(0X0, ctx->r2) = ctx->r15;
    // 0x8025FB70: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x8025FB74: jr          $ra
    // 0x8025FB78: sb          $t8, 0x3A89($at)
    MEM_B(0X3A89, ctx->r1) = ctx->r24;
    return;
    // 0x8025FB78: sb          $t8, 0x3A89($at)
    MEM_B(0X3A89, ctx->r1) = ctx->r24;
;}
RECOMP_FUNC void ovl_8024B800_func_8025FB7C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8025FB7C: addiu       $t6, $zero, 0x8
    ctx->r14 = ADD32(0, 0X8);
    // 0x8025FB80: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x8025FB84: lui         $v1, 0x802C
    ctx->r3 = S32(0X802C << 16);
    // 0x8025FB88: lui         $a0, 0x802C
    ctx->r4 = S32(0X802C << 16);
    // 0x8025FB8C: sb          $t6, 0x3A89($at)
    MEM_B(0X3A89, ctx->r1) = ctx->r14;
    // 0x8025FB90: addiu       $a0, $a0, 0x3A86
    ctx->r4 = ADD32(ctx->r4, 0X3A86);
    // 0x8025FB94: addiu       $v1, $v1, 0x3A80
    ctx->r3 = ADD32(ctx->r3, 0X3A80);
    // 0x8025FB98: lhu         $t7, 0x0($a0)
    ctx->r15 = MEM_HU(ctx->r4, 0X0);
    // 0x8025FB9C: lhu         $t9, 0x0($v1)
    ctx->r25 = MEM_HU(ctx->r3, 0X0);
    // 0x8025FBA0: ori         $t8, $t7, 0x1
    ctx->r24 = ctx->r15 | 0X1;
    // 0x8025FBA4: andi        $t0, $t9, 0xFF03
    ctx->r8 = ctx->r25 & 0XFF03;
    // 0x8025FBA8: sh          $t8, 0x0($a0)
    MEM_H(0X0, ctx->r4) = ctx->r24;
    // 0x8025FBAC: sh          $t0, 0x0($v1)
    MEM_H(0X0, ctx->r3) = ctx->r8;
    // 0x8025FBB0: lui         $v0, 0x8009
    ctx->r2 = S32(0X8009 << 16);
    // 0x8025FBB4: lw          $v0, 0x3B20($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X3B20);
    // 0x8025FBB8: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8025FBBC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8025FBC0: lhu         $t1, 0xC0($v0)
    ctx->r9 = MEM_HU(ctx->r2, 0XC0);
    // 0x8025FBC4: lui         $a0, 0x8010
    ctx->r4 = S32(0X8010 << 16);
    // 0x8025FBC8: andi        $t2, $t1, 0x1
    ctx->r10 = ctx->r9 & 0X1;
    // 0x8025FBCC: beq         $t2, $zero, L_8025FE10
    if (ctx->r10 == 0) {
        // 0x8025FBD0: addiu       $a0, $a0, 0x4890
        ctx->r4 = ADD32(ctx->r4, 0X4890);
            goto L_8025FE10;
    }
    // 0x8025FBD0: addiu       $a0, $a0, 0x4890
    ctx->r4 = ADD32(ctx->r4, 0X4890);
    // 0x8025FBD4: lwc1        $f0, 0x1C38($a0)
    ctx->f0.u32l = MEM_W(ctx->r4, 0X1C38);
    // 0x8025FBD8: lwc1        $f2, 0x1C30($a0)
    ctx->f2.u32l = MEM_W(ctx->r4, 0X1C30);
    // 0x8025FBDC: lwc1        $f12, 0x0($v0)
    ctx->f12.u32l = MEM_W(ctx->r2, 0X0);
    // 0x8025FBE0: lwc1        $f14, 0x8($v0)
    ctx->f14.u32l = MEM_W(ctx->r2, 0X8);
    // 0x8025FBE4: mfc1        $a3, $f0
    ctx->r7 = (int32_t)ctx->f0.u32l;
    // 0x8025FBE8: mfc1        $a2, $f2
    ctx->r6 = (int32_t)ctx->f2.u32l;
    // 0x8025FBEC: swc1        $f0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f0.u32l;
    // 0x8025FBF0: jal         0x80261B50
    // 0x8025FBF4: swc1        $f2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f2.u32l;
    ovl_8024B800_func_80261B50(rdram, ctx);
        goto after_0;
    // 0x8025FBF4: swc1        $f2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f2.u32l;
    after_0:
    // 0x8025FBF8: lwc1        $f14, 0x1C($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x8025FBFC: lwc1        $f12, 0x18($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X18);
    // 0x8025FC00: lui         $a2, 0x43AF
    ctx->r6 = S32(0X43AF << 16);
    // 0x8025FC04: jal         0x80261A54
    // 0x8025FC08: lui         $a3, 0x42B4
    ctx->r7 = S32(0X42B4 << 16);
    ovl_8024B800_func_80261A54(rdram, ctx);
        goto after_1;
    // 0x8025FC08: lui         $a3, 0x42B4
    ctx->r7 = S32(0X42B4 << 16);
    after_1:
    // 0x8025FC0C: lui         $t3, 0x802C
    ctx->r11 = S32(0X802C << 16);
    // 0x8025FC10: lbu         $t3, 0x3A96($t3)
    ctx->r11 = MEM_BU(ctx->r11, 0X3A96);
    // 0x8025FC14: lui         $v1, 0x802C
    ctx->r3 = S32(0X802C << 16);
    // 0x8025FC18: lwc1        $f0, 0x18($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X18);
    // 0x8025FC1C: lwc1        $f14, 0x1C($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x8025FC20: andi        $t4, $t3, 0x1
    ctx->r12 = ctx->r11 & 0X1;
    // 0x8025FC24: beq         $t4, $zero, L_8025FCB4
    if (ctx->r12 == 0) {
        // 0x8025FC28: addiu       $v1, $v1, 0x3A80
        ctx->r3 = ADD32(ctx->r3, 0X3A80);
            goto L_8025FCB4;
    }
    // 0x8025FC28: addiu       $v1, $v1, 0x3A80
    ctx->r3 = ADD32(ctx->r3, 0X3A80);
    // 0x8025FC2C: lui         $at, 0x42C8
    ctx->r1 = S32(0X42C8 << 16);
    // 0x8025FC30: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    // 0x8025FC34: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x8025FC38: lwc1        $f4, 0x3A98($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X3A98);
    // 0x8025FC3C: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x8025FC40: c.lt.s      $f2, $f4
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f2.fl < ctx->f4.fl;
    // 0x8025FC44: nop

    // 0x8025FC48: bc1f        L_8025FE14
    if (!c1cs) {
        // 0x8025FC4C: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_8025FE14;
    }
    // 0x8025FC4C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8025FC50: lwc1        $f0, 0x3A9C($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X3A9C);
    // 0x8025FC54: lui         $at, 0x4316
    ctx->r1 = S32(0X4316 << 16);
    // 0x8025FC58: c.lt.s      $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f0.fl < ctx->f2.fl;
    // 0x8025FC5C: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x8025FC60: bc1f        L_8025FC78
    if (!c1cs) {
        // 0x8025FC64: lui         $at, 0x4396
        ctx->r1 = S32(0X4396 << 16);
            goto L_8025FC78;
    }
    // 0x8025FC64: lui         $at, 0x4396
    ctx->r1 = S32(0X4396 << 16);
    // 0x8025FC68: lhu         $t5, 0x0($v1)
    ctx->r13 = MEM_HU(ctx->r3, 0X0);
    // 0x8025FC6C: nop

    // 0x8025FC70: ori         $t6, $t5, 0x4
    ctx->r14 = ctx->r13 | 0X4;
    // 0x8025FC74: sh          $t6, 0x0($v1)
    MEM_H(0X0, ctx->r3) = ctx->r14;
L_8025FC78:
    // 0x8025FC78: c.lt.s      $f6, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f6.fl < ctx->f0.fl;
    // 0x8025FC7C: nop

    // 0x8025FC80: bc1f        L_8025FE14
    if (!c1cs) {
        // 0x8025FC84: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_8025FE14;
    }
    // 0x8025FC84: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8025FC88: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x8025FC8C: nop

    // 0x8025FC90: c.lt.s      $f0, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f0.fl < ctx->f8.fl;
    // 0x8025FC94: nop

    // 0x8025FC98: bc1f        L_8025FE14
    if (!c1cs) {
        // 0x8025FC9C: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_8025FE14;
    }
    // 0x8025FC9C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8025FCA0: lhu         $t7, 0x0($v1)
    ctx->r15 = MEM_HU(ctx->r3, 0X0);
    // 0x8025FCA4: nop

    // 0x8025FCA8: ori         $t8, $t7, 0x8
    ctx->r24 = ctx->r15 | 0X8;
    // 0x8025FCAC: b           L_8025FE10
    // 0x8025FCB0: sh          $t8, 0x0($v1)
    MEM_H(0X0, ctx->r3) = ctx->r24;
        goto L_8025FE10;
    // 0x8025FCB0: sh          $t8, 0x0($v1)
    MEM_H(0X0, ctx->r3) = ctx->r24;
L_8025FCB4:
    // 0x8025FCB4: lui         $v0, 0x8009
    ctx->r2 = S32(0X8009 << 16);
    // 0x8025FCB8: lw          $v0, 0x3B20($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X3B20);
    // 0x8025FCBC: lui         $at, 0x43FA
    ctx->r1 = S32(0X43FA << 16);
    // 0x8025FCC0: lw          $a0, 0x8C($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X8C);
    // 0x8025FCC4: nop

    // 0x8025FCC8: lw          $t9, 0xD4($a0)
    ctx->r25 = MEM_W(ctx->r4, 0XD4);
    // 0x8025FCCC: nop

    // 0x8025FCD0: lbu         $t0, 0x4($t9)
    ctx->r8 = MEM_BU(ctx->r25, 0X4);
    // 0x8025FCD4: nop

    // 0x8025FCD8: beq         $t0, $zero, L_8025FE14
    if (ctx->r8 == 0) {
        // 0x8025FCDC: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_8025FE14;
    }
    // 0x8025FCDC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8025FCE0: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x8025FCE4: lui         $at, 0xC3FA
    ctx->r1 = S32(0XC3FA << 16);
    // 0x8025FCE8: c.lt.s      $f0, $f10
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f0.fl < ctx->f10.fl;
    // 0x8025FCEC: nop

    // 0x8025FCF0: bc1f        L_8025FE14
    if (!c1cs) {
        // 0x8025FCF4: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_8025FE14;
    }
    // 0x8025FCF4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8025FCF8: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x8025FCFC: lui         $at, 0x43AF
    ctx->r1 = S32(0X43AF << 16);
    // 0x8025FD00: c.lt.s      $f16, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f16.fl < ctx->f0.fl;
    // 0x8025FD04: nop

    // 0x8025FD08: bc1f        L_8025FE14
    if (!c1cs) {
        // 0x8025FD0C: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_8025FE14;
    }
    // 0x8025FD0C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8025FD10: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x8025FD14: lui         $at, 0xC3AF
    ctx->r1 = S32(0XC3AF << 16);
    // 0x8025FD18: c.lt.s      $f14, $f18
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f14.fl < ctx->f18.fl;
    // 0x8025FD1C: nop

    // 0x8025FD20: bc1f        L_8025FE14
    if (!c1cs) {
        // 0x8025FD24: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_8025FE14;
    }
    // 0x8025FD24: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8025FD28: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x8025FD2C: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x8025FD30: c.lt.s      $f4, $f14
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 14);
    c1cs = ctx->f4.fl < ctx->f14.fl;
    // 0x8025FD34: nop

    // 0x8025FD38: bc1f        L_8025FE14
    if (!c1cs) {
        // 0x8025FD3C: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_8025FE14;
    }
    // 0x8025FD3C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8025FD40: lwc1        $f0, 0x3A98($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X3A98);
    // 0x8025FD44: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x8025FD48: lwc1        $f6, 0x3A9C($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X3A9C);
    // 0x8025FD4C: lui         $at, 0x4396
    ctx->r1 = S32(0X4396 << 16);
    // 0x8025FD50: c.lt.s      $f6, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f6.fl < ctx->f0.fl;
    // 0x8025FD54: nop

    // 0x8025FD58: bc1f        L_8025FE14
    if (!c1cs) {
        // 0x8025FD5C: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_8025FE14;
    }
    // 0x8025FD5C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8025FD60: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x8025FD64: nop

    // 0x8025FD68: c.lt.s      $f8, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f8.fl < ctx->f0.fl;
    // 0x8025FD6C: nop

    // 0x8025FD70: bc1f        L_8025FE14
    if (!c1cs) {
        // 0x8025FD74: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_8025FE14;
    }
    // 0x8025FD74: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8025FD78: lw          $t1, 0xC8($a0)
    ctx->r9 = MEM_W(ctx->r4, 0XC8);
    // 0x8025FD7C: nop

    // 0x8025FD80: lhu         $t2, 0x8($t1)
    ctx->r10 = MEM_HU(ctx->r9, 0X8);
    // 0x8025FD84: nop

    // 0x8025FD88: andi        $t3, $t2, 0x1
    ctx->r11 = ctx->r10 & 0X1;
    // 0x8025FD8C: beq         $t3, $zero, L_8025FDD4
    if (ctx->r11 == 0) {
        // 0x8025FD90: nop
    
            goto L_8025FDD4;
    }
    // 0x8025FD90: nop

    // 0x8025FD94: lwc1        $f10, 0x0($v0)
    ctx->f10.u32l = MEM_W(ctx->r2, 0X0);
    // 0x8025FD98: nop

    // 0x8025FD9C: c.lt.s      $f10, $f14
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 14);
    c1cs = ctx->f10.fl < ctx->f14.fl;
    // 0x8025FDA0: nop

    // 0x8025FDA4: bc1f        L_8025FDC0
    if (!c1cs) {
        // 0x8025FDA8: nop
    
            goto L_8025FDC0;
    }
    // 0x8025FDA8: nop

    // 0x8025FDAC: lhu         $t4, 0x0($v1)
    ctx->r12 = MEM_HU(ctx->r3, 0X0);
    // 0x8025FDB0: nop

    // 0x8025FDB4: ori         $t5, $t4, 0x10
    ctx->r13 = ctx->r12 | 0X10;
    // 0x8025FDB8: b           L_8025FE10
    // 0x8025FDBC: sh          $t5, 0x0($v1)
    MEM_H(0X0, ctx->r3) = ctx->r13;
        goto L_8025FE10;
    // 0x8025FDBC: sh          $t5, 0x0($v1)
    MEM_H(0X0, ctx->r3) = ctx->r13;
L_8025FDC0:
    // 0x8025FDC0: lhu         $t6, 0x0($v1)
    ctx->r14 = MEM_HU(ctx->r3, 0X0);
    // 0x8025FDC4: nop

    // 0x8025FDC8: ori         $t7, $t6, 0x20
    ctx->r15 = ctx->r14 | 0X20;
    // 0x8025FDCC: b           L_8025FE10
    // 0x8025FDD0: sh          $t7, 0x0($v1)
    MEM_H(0X0, ctx->r3) = ctx->r15;
        goto L_8025FE10;
    // 0x8025FDD0: sh          $t7, 0x0($v1)
    MEM_H(0X0, ctx->r3) = ctx->r15;
L_8025FDD4:
    // 0x8025FDD4: lwc1        $f16, 0x0($v0)
    ctx->f16.u32l = MEM_W(ctx->r2, 0X0);
    // 0x8025FDD8: nop

    // 0x8025FDDC: c.lt.s      $f16, $f14
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 14);
    c1cs = ctx->f16.fl < ctx->f14.fl;
    // 0x8025FDE0: nop

    // 0x8025FDE4: bc1f        L_8025FE00
    if (!c1cs) {
        // 0x8025FDE8: nop
    
            goto L_8025FE00;
    }
    // 0x8025FDE8: nop

    // 0x8025FDEC: lhu         $t8, 0x0($v1)
    ctx->r24 = MEM_HU(ctx->r3, 0X0);
    // 0x8025FDF0: nop

    // 0x8025FDF4: ori         $t9, $t8, 0x20
    ctx->r25 = ctx->r24 | 0X20;
    // 0x8025FDF8: b           L_8025FE10
    // 0x8025FDFC: sh          $t9, 0x0($v1)
    MEM_H(0X0, ctx->r3) = ctx->r25;
        goto L_8025FE10;
    // 0x8025FDFC: sh          $t9, 0x0($v1)
    MEM_H(0X0, ctx->r3) = ctx->r25;
L_8025FE00:
    // 0x8025FE00: lhu         $t0, 0x0($v1)
    ctx->r8 = MEM_HU(ctx->r3, 0X0);
    // 0x8025FE04: nop

    // 0x8025FE08: ori         $t1, $t0, 0x10
    ctx->r9 = ctx->r8 | 0X10;
    // 0x8025FE0C: sh          $t1, 0x0($v1)
    MEM_H(0X0, ctx->r3) = ctx->r9;
L_8025FE10:
    // 0x8025FE10: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8025FE14:
    // 0x8025FE14: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x8025FE18: jr          $ra
    // 0x8025FE1C: nop

    return;
    // 0x8025FE1C: nop

;}
RECOMP_FUNC void ovl_8024B800_func_8025FE20(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8025FE20: lui         $v1, 0x8009
    ctx->r3 = S32(0X8009 << 16);
    // 0x8025FE24: lw          $v1, 0x3B20($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X3B20);
    // 0x8025FE28: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x8025FE2C: lw          $t6, 0x8C($v1)
    ctx->r14 = MEM_W(ctx->r3, 0X8C);
    // 0x8025FE30: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8025FE34: lw          $t7, 0xC8($t6)
    ctx->r15 = MEM_W(ctx->r14, 0XC8);
    // 0x8025FE38: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x8025FE3C: lhu         $t8, 0x8($t7)
    ctx->r24 = MEM_HU(ctx->r15, 0X8);
    // 0x8025FE40: nop

    // 0x8025FE44: andi        $t9, $t8, 0x1
    ctx->r25 = ctx->r24 & 0X1;
    // 0x8025FE48: beq         $t9, $zero, L_8025FE74
    if (ctx->r25 == 0) {
        // 0x8025FE4C: nop
    
            goto L_8025FE74;
    }
    // 0x8025FE4C: nop

    // 0x8025FE50: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x8025FE54: lwc1        $f6, 0x8($v1)
    ctx->f6.u32l = MEM_W(ctx->r3, 0X8);
    // 0x8025FE58: nop

    // 0x8025FE5C: c.lt.s      $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f4.fl < ctx->f6.fl;
    // 0x8025FE60: nop

    // 0x8025FE64: bc1f        L_8025FE94
    if (!c1cs) {
        // 0x8025FE68: nop
    
            goto L_8025FE94;
    }
    // 0x8025FE68: nop

    // 0x8025FE6C: b           L_8025FE94
    // 0x8025FE70: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_8025FE94;
    // 0x8025FE70: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_8025FE74:
    // 0x8025FE74: lwc1        $f8, 0x8($v1)
    ctx->f8.u32l = MEM_W(ctx->r3, 0X8);
    // 0x8025FE78: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x8025FE7C: nop

    // 0x8025FE80: c.lt.s      $f8, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f8.fl < ctx->f10.fl;
    // 0x8025FE84: nop

    // 0x8025FE88: bc1f        L_8025FE94
    if (!c1cs) {
        // 0x8025FE8C: nop
    
            goto L_8025FE94;
    }
    // 0x8025FE8C: nop

    // 0x8025FE90: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_8025FE94:
    // 0x8025FE94: bne         $v0, $at, L_8025FEB4
    if (ctx->r2 != ctx->r1) {
        // 0x8025FE98: lui         $v0, 0x802C
        ctx->r2 = S32(0X802C << 16);
            goto L_8025FEB4;
    }
    // 0x8025FE98: lui         $v0, 0x802C
    ctx->r2 = S32(0X802C << 16);
    // 0x8025FE9C: addiu       $v0, $v0, 0x3A86
    ctx->r2 = ADD32(ctx->r2, 0X3A86);
    // 0x8025FEA0: lhu         $t0, 0x0($v0)
    ctx->r8 = MEM_HU(ctx->r2, 0X0);
    // 0x8025FEA4: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x8025FEA8: ori         $t1, $t0, 0x1
    ctx->r9 = ctx->r8 | 0X1;
    // 0x8025FEAC: sh          $t1, 0x0($v0)
    MEM_H(0X0, ctx->r2) = ctx->r9;
    // 0x8025FEB0: sb          $t2, 0x3A89($at)
    MEM_B(0X3A89, ctx->r1) = ctx->r10;
L_8025FEB4:
    // 0x8025FEB4: jr          $ra
    // 0x8025FEB8: nop

    return;
    // 0x8025FEB8: nop

;}
RECOMP_FUNC void ovl_8024B800_func_8025FEBC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8025FEBC: lui         $t6, 0x8009
    ctx->r14 = S32(0X8009 << 16);
    // 0x8025FEC0: lw          $t6, 0x3B20($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X3B20);
    // 0x8025FEC4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8025FEC8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8025FECC: lbu         $t7, 0xBD($t6)
    ctx->r15 = MEM_BU(ctx->r14, 0XBD);
    // 0x8025FED0: nop

    // 0x8025FED4: andi        $t8, $t7, 0x4
    ctx->r24 = ctx->r15 & 0X4;
    // 0x8025FED8: beq         $t8, $zero, L_8025FF10
    if (ctx->r24 == 0) {
        // 0x8025FEDC: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_8025FF10;
    }
    // 0x8025FEDC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8025FEE0: jal         0x80260150
    // 0x8025FEE4: nop

    ovl_8024B800_func_80260150(rdram, ctx);
        goto after_0;
    // 0x8025FEE4: nop

    after_0:
    // 0x8025FEE8: beq         $v0, $zero, L_8025FF0C
    if (ctx->r2 == 0) {
        // 0x8025FEEC: addiu       $t1, $zero, 0x1
        ctx->r9 = ADD32(0, 0X1);
            goto L_8025FF0C;
    }
    // 0x8025FEEC: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
    // 0x8025FEF0: lui         $v0, 0x802C
    ctx->r2 = S32(0X802C << 16);
    // 0x8025FEF4: addiu       $v0, $v0, 0x3A86
    ctx->r2 = ADD32(ctx->r2, 0X3A86);
    // 0x8025FEF8: lhu         $t9, 0x0($v0)
    ctx->r25 = MEM_HU(ctx->r2, 0X0);
    // 0x8025FEFC: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x8025FF00: ori         $t0, $t9, 0x1
    ctx->r8 = ctx->r25 | 0X1;
    // 0x8025FF04: sh          $t0, 0x0($v0)
    MEM_H(0X0, ctx->r2) = ctx->r8;
    // 0x8025FF08: sb          $t1, 0x3A89($at)
    MEM_B(0X3A89, ctx->r1) = ctx->r9;
L_8025FF0C:
    // 0x8025FF0C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8025FF10:
    // 0x8025FF10: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8025FF14: jr          $ra
    // 0x8025FF18: nop

    return;
    // 0x8025FF18: nop

;}
RECOMP_FUNC void ovl_8024B800_func_8025FF1C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8025FF1C: lui         $t6, 0x8009
    ctx->r14 = S32(0X8009 << 16);
    // 0x8025FF20: lw          $t6, 0x3B20($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X3B20);
    // 0x8025FF24: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8025FF28: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8025FF2C: lbu         $t7, 0xBD($t6)
    ctx->r15 = MEM_BU(ctx->r14, 0XBD);
    // 0x8025FF30: nop

    // 0x8025FF34: andi        $t8, $t7, 0x4
    ctx->r24 = ctx->r15 & 0X4;
    // 0x8025FF38: beq         $t8, $zero, L_8025FF70
    if (ctx->r24 == 0) {
        // 0x8025FF3C: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_8025FF70;
    }
    // 0x8025FF3C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8025FF40: jal         0x80260150
    // 0x8025FF44: nop

    ovl_8024B800_func_80260150(rdram, ctx);
        goto after_0;
    // 0x8025FF44: nop

    after_0:
    // 0x8025FF48: beq         $v0, $zero, L_8025FF6C
    if (ctx->r2 == 0) {
        // 0x8025FF4C: addiu       $t1, $zero, 0x1
        ctx->r9 = ADD32(0, 0X1);
            goto L_8025FF6C;
    }
    // 0x8025FF4C: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
    // 0x8025FF50: lui         $v0, 0x802C
    ctx->r2 = S32(0X802C << 16);
    // 0x8025FF54: addiu       $v0, $v0, 0x3A86
    ctx->r2 = ADD32(ctx->r2, 0X3A86);
    // 0x8025FF58: lhu         $t9, 0x0($v0)
    ctx->r25 = MEM_HU(ctx->r2, 0X0);
    // 0x8025FF5C: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x8025FF60: ori         $t0, $t9, 0x1
    ctx->r8 = ctx->r25 | 0X1;
    // 0x8025FF64: sh          $t0, 0x0($v0)
    MEM_H(0X0, ctx->r2) = ctx->r8;
    // 0x8025FF68: sb          $t1, 0x3A89($at)
    MEM_B(0X3A89, ctx->r1) = ctx->r9;
L_8025FF6C:
    // 0x8025FF6C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8025FF70:
    // 0x8025FF70: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8025FF74: jr          $ra
    // 0x8025FF78: nop

    return;
    // 0x8025FF78: nop

;}
RECOMP_FUNC void ovl_8024B800_func_8025FF7C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8025FF7C: lui         $t6, 0x8009
    ctx->r14 = S32(0X8009 << 16);
    // 0x8025FF80: lw          $t6, 0x3B20($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X3B20);
    // 0x8025FF84: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8025FF88: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8025FF8C: lbu         $t7, 0xBD($t6)
    ctx->r15 = MEM_BU(ctx->r14, 0XBD);
    // 0x8025FF90: nop

    // 0x8025FF94: andi        $t8, $t7, 0x4
    ctx->r24 = ctx->r15 & 0X4;
    // 0x8025FF98: beq         $t8, $zero, L_8025FFD0
    if (ctx->r24 == 0) {
        // 0x8025FF9C: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_8025FFD0;
    }
    // 0x8025FF9C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8025FFA0: jal         0x80260150
    // 0x8025FFA4: nop

    ovl_8024B800_func_80260150(rdram, ctx);
        goto after_0;
    // 0x8025FFA4: nop

    after_0:
    // 0x8025FFA8: beq         $v0, $zero, L_8025FFCC
    if (ctx->r2 == 0) {
        // 0x8025FFAC: addiu       $t1, $zero, 0x1
        ctx->r9 = ADD32(0, 0X1);
            goto L_8025FFCC;
    }
    // 0x8025FFAC: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
    // 0x8025FFB0: lui         $v0, 0x802C
    ctx->r2 = S32(0X802C << 16);
    // 0x8025FFB4: addiu       $v0, $v0, 0x3A86
    ctx->r2 = ADD32(ctx->r2, 0X3A86);
    // 0x8025FFB8: lhu         $t9, 0x0($v0)
    ctx->r25 = MEM_HU(ctx->r2, 0X0);
    // 0x8025FFBC: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x8025FFC0: ori         $t0, $t9, 0x1
    ctx->r8 = ctx->r25 | 0X1;
    // 0x8025FFC4: sh          $t0, 0x0($v0)
    MEM_H(0X0, ctx->r2) = ctx->r8;
    // 0x8025FFC8: sb          $t1, 0x3A89($at)
    MEM_B(0X3A89, ctx->r1) = ctx->r9;
L_8025FFCC:
    // 0x8025FFCC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8025FFD0:
    // 0x8025FFD0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8025FFD4: jr          $ra
    // 0x8025FFD8: nop

    return;
    // 0x8025FFD8: nop

;}
RECOMP_FUNC void ovl_8024B800_func_8025FFDC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8025FFDC: lui         $t6, 0x8009
    ctx->r14 = S32(0X8009 << 16);
    // 0x8025FFE0: lw          $t6, 0x3B20($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X3B20);
    // 0x8025FFE4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8025FFE8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8025FFEC: lbu         $t7, 0xBD($t6)
    ctx->r15 = MEM_BU(ctx->r14, 0XBD);
    // 0x8025FFF0: nop

    // 0x8025FFF4: andi        $t8, $t7, 0x4
    ctx->r24 = ctx->r15 & 0X4;
    // 0x8025FFF8: beq         $t8, $zero, L_80260030
    if (ctx->r24 == 0) {
        // 0x8025FFFC: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_80260030;
    }
    // 0x8025FFFC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80260000: jal         0x80260150
    // 0x80260004: nop

    ovl_8024B800_func_80260150(rdram, ctx);
        goto after_0;
    // 0x80260004: nop

    after_0:
    // 0x80260008: beq         $v0, $zero, L_8026002C
    if (ctx->r2 == 0) {
        // 0x8026000C: addiu       $t1, $zero, 0x1
        ctx->r9 = ADD32(0, 0X1);
            goto L_8026002C;
    }
    // 0x8026000C: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
    // 0x80260010: lui         $v0, 0x802C
    ctx->r2 = S32(0X802C << 16);
    // 0x80260014: addiu       $v0, $v0, 0x3A86
    ctx->r2 = ADD32(ctx->r2, 0X3A86);
    // 0x80260018: lhu         $t9, 0x0($v0)
    ctx->r25 = MEM_HU(ctx->r2, 0X0);
    // 0x8026001C: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x80260020: ori         $t0, $t9, 0x1
    ctx->r8 = ctx->r25 | 0X1;
    // 0x80260024: sh          $t0, 0x0($v0)
    MEM_H(0X0, ctx->r2) = ctx->r8;
    // 0x80260028: sb          $t1, 0x3A89($at)
    MEM_B(0X3A89, ctx->r1) = ctx->r9;
L_8026002C:
    // 0x8026002C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80260030:
    // 0x80260030: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80260034: jr          $ra
    // 0x80260038: nop

    return;
    // 0x80260038: nop

;}
RECOMP_FUNC void ovl_8024B800_func_8026003C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8026003C: lui         $t6, 0x8009
    ctx->r14 = S32(0X8009 << 16);
    // 0x80260040: lw          $t6, 0x3B20($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X3B20);
    // 0x80260044: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80260048: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8026004C: lbu         $t7, 0xBD($t6)
    ctx->r15 = MEM_BU(ctx->r14, 0XBD);
    // 0x80260050: nop

    // 0x80260054: andi        $t8, $t7, 0x4
    ctx->r24 = ctx->r15 & 0X4;
    // 0x80260058: beq         $t8, $zero, L_80260090
    if (ctx->r24 == 0) {
        // 0x8026005C: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_80260090;
    }
    // 0x8026005C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80260060: jal         0x80260150
    // 0x80260064: nop

    ovl_8024B800_func_80260150(rdram, ctx);
        goto after_0;
    // 0x80260064: nop

    after_0:
    // 0x80260068: beq         $v0, $zero, L_8026008C
    if (ctx->r2 == 0) {
        // 0x8026006C: addiu       $t1, $zero, 0x1
        ctx->r9 = ADD32(0, 0X1);
            goto L_8026008C;
    }
    // 0x8026006C: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
    // 0x80260070: lui         $v0, 0x802C
    ctx->r2 = S32(0X802C << 16);
    // 0x80260074: addiu       $v0, $v0, 0x3A86
    ctx->r2 = ADD32(ctx->r2, 0X3A86);
    // 0x80260078: lhu         $t9, 0x0($v0)
    ctx->r25 = MEM_HU(ctx->r2, 0X0);
    // 0x8026007C: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x80260080: ori         $t0, $t9, 0x1
    ctx->r8 = ctx->r25 | 0X1;
    // 0x80260084: sh          $t0, 0x0($v0)
    MEM_H(0X0, ctx->r2) = ctx->r8;
    // 0x80260088: sb          $t1, 0x3A89($at)
    MEM_B(0X3A89, ctx->r1) = ctx->r9;
L_8026008C:
    // 0x8026008C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80260090:
    // 0x80260090: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80260094: jr          $ra
    // 0x80260098: nop

    return;
    // 0x80260098: nop

;}
RECOMP_FUNC void ovl_8024B800_func_8026009C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8026009C: lui         $t6, 0x8009
    ctx->r14 = S32(0X8009 << 16);
    // 0x802600A0: lw          $t6, 0x3B20($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X3B20);
    // 0x802600A4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802600A8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802600AC: lbu         $t7, 0xBD($t6)
    ctx->r15 = MEM_BU(ctx->r14, 0XBD);
    // 0x802600B0: nop

    // 0x802600B4: andi        $t8, $t7, 0x4
    ctx->r24 = ctx->r15 & 0X4;
    // 0x802600B8: beq         $t8, $zero, L_802600F0
    if (ctx->r24 == 0) {
        // 0x802600BC: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_802600F0;
    }
    // 0x802600BC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802600C0: jal         0x80260150
    // 0x802600C4: nop

    ovl_8024B800_func_80260150(rdram, ctx);
        goto after_0;
    // 0x802600C4: nop

    after_0:
    // 0x802600C8: beq         $v0, $zero, L_802600EC
    if (ctx->r2 == 0) {
        // 0x802600CC: addiu       $t1, $zero, 0x1
        ctx->r9 = ADD32(0, 0X1);
            goto L_802600EC;
    }
    // 0x802600CC: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
    // 0x802600D0: lui         $v0, 0x802C
    ctx->r2 = S32(0X802C << 16);
    // 0x802600D4: addiu       $v0, $v0, 0x3A86
    ctx->r2 = ADD32(ctx->r2, 0X3A86);
    // 0x802600D8: lhu         $t9, 0x0($v0)
    ctx->r25 = MEM_HU(ctx->r2, 0X0);
    // 0x802600DC: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x802600E0: ori         $t0, $t9, 0x1
    ctx->r8 = ctx->r25 | 0X1;
    // 0x802600E4: sh          $t0, 0x0($v0)
    MEM_H(0X0, ctx->r2) = ctx->r8;
    // 0x802600E8: sb          $t1, 0x3A89($at)
    MEM_B(0X3A89, ctx->r1) = ctx->r9;
L_802600EC:
    // 0x802600EC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_802600F0:
    // 0x802600F0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x802600F4: jr          $ra
    // 0x802600F8: nop

    return;
    // 0x802600F8: nop

;}
RECOMP_FUNC void ovl_8024B800_func_802600FC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802600FC: lui         $v0, 0x802C
    ctx->r2 = S32(0X802C << 16);
    // 0x80260100: addiu       $v0, $v0, 0x3A86
    ctx->r2 = ADD32(ctx->r2, 0X3A86);
    // 0x80260104: lhu         $t6, 0x0($v0)
    ctx->r14 = MEM_HU(ctx->r2, 0X0);
    // 0x80260108: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x8026010C: ori         $t7, $t6, 0x1
    ctx->r15 = ctx->r14 | 0X1;
    // 0x80260110: sh          $t7, 0x0($v0)
    MEM_H(0X0, ctx->r2) = ctx->r15;
    // 0x80260114: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x80260118: jr          $ra
    // 0x8026011C: sb          $t8, 0x3A89($at)
    MEM_B(0X3A89, ctx->r1) = ctx->r24;
    return;
    // 0x8026011C: sb          $t8, 0x3A89($at)
    MEM_B(0X3A89, ctx->r1) = ctx->r24;
;}
RECOMP_FUNC void ovl_8024B800_func_80260120(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80260120: addiu       $t6, $zero, 0x4
    ctx->r14 = ADD32(0, 0X4);
    // 0x80260124: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x80260128: jr          $ra
    // 0x8026012C: sb          $t6, 0x3A89($at)
    MEM_B(0X3A89, ctx->r1) = ctx->r14;
    return;
    // 0x8026012C: sb          $t6, 0x3A89($at)
    MEM_B(0X3A89, ctx->r1) = ctx->r14;
;}
RECOMP_FUNC void ovl_8024B800_func_80260130(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80260130: addiu       $t6, $zero, 0x4
    ctx->r14 = ADD32(0, 0X4);
    // 0x80260134: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x80260138: jr          $ra
    // 0x8026013C: sb          $t6, 0x3A89($at)
    MEM_B(0X3A89, ctx->r1) = ctx->r14;
    return;
    // 0x8026013C: sb          $t6, 0x3A89($at)
    MEM_B(0X3A89, ctx->r1) = ctx->r14;
;}
RECOMP_FUNC void ovl_8024B800_func_80260140(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80260140: addiu       $t6, $zero, 0x8
    ctx->r14 = ADD32(0, 0X8);
    // 0x80260144: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x80260148: jr          $ra
    // 0x8026014C: sb          $t6, 0x3A89($at)
    MEM_B(0X3A89, ctx->r1) = ctx->r14;
    return;
    // 0x8026014C: sb          $t6, 0x3A89($at)
    MEM_B(0X3A89, ctx->r1) = ctx->r14;
;}
RECOMP_FUNC void ovl_8024B800_func_80260150(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80260150: lui         $v0, 0x8009
    ctx->r2 = S32(0X8009 << 16);
    // 0x80260154: lw          $v0, 0x3B20($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X3B20);
    // 0x80260158: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x8026015C: lw          $t6, 0x8C($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X8C);
    // 0x80260160: lui         $at, 0xC37A
    ctx->r1 = S32(0XC37A << 16);
    // 0x80260164: lw          $t7, 0xC8($t6)
    ctx->r15 = MEM_W(ctx->r14, 0XC8);
    // 0x80260168: nop

    // 0x8026016C: lhu         $t8, 0x8($t7)
    ctx->r24 = MEM_HU(ctx->r15, 0X8);
    // 0x80260170: nop

    // 0x80260174: andi        $t9, $t8, 0x1
    ctx->r25 = ctx->r24 & 0X1;
    // 0x80260178: beq         $t9, $zero, L_802601A8
    if (ctx->r25 == 0) {
        // 0x8026017C: nop
    
            goto L_802601A8;
    }
    // 0x8026017C: nop

    // 0x80260180: lui         $at, 0x437A
    ctx->r1 = S32(0X437A << 16);
    // 0x80260184: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80260188: lwc1        $f6, 0x8($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0X8);
    // 0x8026018C: nop

    // 0x80260190: c.lt.s      $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f4.fl < ctx->f6.fl;
    // 0x80260194: nop

    // 0x80260198: bc1f        L_802601C8
    if (!c1cs) {
        // 0x8026019C: nop
    
            goto L_802601C8;
    }
    // 0x8026019C: nop

    // 0x802601A0: jr          $ra
    // 0x802601A4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    return;
    // 0x802601A4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_802601A8:
    // 0x802601A8: lwc1        $f8, 0x8($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X8);
    // 0x802601AC: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x802601B0: nop

    // 0x802601B4: c.lt.s      $f8, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f8.fl < ctx->f10.fl;
    // 0x802601B8: nop

    // 0x802601BC: bc1f        L_802601C8
    if (!c1cs) {
        // 0x802601C0: nop
    
            goto L_802601C8;
    }
    // 0x802601C0: nop

    // 0x802601C4: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
L_802601C8:
    // 0x802601C8: jr          $ra
    // 0x802601CC: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    return;
    // 0x802601CC: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
;}
RECOMP_FUNC void ovl_8024B800_func_802601D0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802601D0: lui         $v1, 0x8009
    ctx->r3 = S32(0X8009 << 16);
    // 0x802601D4: lw          $v1, 0x3B20($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X3B20);
    // 0x802601D8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802601DC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802601E0: lw          $a0, 0x90($v1)
    ctx->r4 = MEM_W(ctx->r3, 0X90);
    // 0x802601E4: nop

    // 0x802601E8: beq         $a0, $zero, L_80260350
    if (ctx->r4 == 0) {
        // 0x802601EC: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_80260350;
    }
    // 0x802601EC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802601F0: lw          $a1, 0x8C($v1)
    ctx->r5 = MEM_W(ctx->r3, 0X8C);
    // 0x802601F4: lwc1        $f4, 0x44($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X44);
    // 0x802601F8: lwc1        $f6, 0x44($a1)
    ctx->f6.u32l = MEM_W(ctx->r5, 0X44);
    // 0x802601FC: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x80260200: sub.s       $f0, $f4, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f0.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x80260204: lwc1        $f8, 0x4C($a0)
    ctx->f8.u32l = MEM_W(ctx->r4, 0X4C);
    // 0x80260208: lwc1        $f10, 0x4C($a1)
    ctx->f10.u32l = MEM_W(ctx->r5, 0X4C);
    // 0x8026020C: c.lt.s      $f0, $f16
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f0.fl < ctx->f16.fl;
    // 0x80260210: sub.s       $f2, $f8, $f10
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f2.fl = ctx->f8.fl - ctx->f10.fl;
    // 0x80260214: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80260218: mov.s       $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    ctx->f12.fl = ctx->f0.fl;
    // 0x8026021C: bc1f        L_80260228
    if (!c1cs) {
        // 0x80260220: mov.s       $f14, $f2
        CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 2);
    ctx->f14.fl = ctx->f2.fl;
            goto L_80260228;
    }
    // 0x80260220: mov.s       $f14, $f2
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 2);
    ctx->f14.fl = ctx->f2.fl;
    // 0x80260224: neg.s       $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f12.fl = -ctx->f0.fl;
L_80260228:
    // 0x80260228: c.lt.s      $f2, $f16
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f2.fl < ctx->f16.fl;
    // 0x8026022C: nop

    // 0x80260230: bc1f        L_80260240
    if (!c1cs) {
        // 0x80260234: nop
    
            goto L_80260240;
    }
    // 0x80260234: nop

    // 0x80260238: neg.s       $f14, $f2
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f14.fl = -ctx->f2.fl;
    // 0x8026023C: nop

L_80260240:
    // 0x80260240: div.s       $f4, $f14, $f12
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f4.fl = DIV_S(ctx->f14.fl, ctx->f12.fl);
    // 0x80260244: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x80260248: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x8026024C: nop

    // 0x80260250: c.le.s      $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f4.fl <= ctx->f18.fl;
    // 0x80260254: nop

    // 0x80260258: bc1f        L_80260268
    if (!c1cs) {
        // 0x8026025C: nop
    
            goto L_80260268;
    }
    // 0x8026025C: nop

    // 0x80260260: b           L_80260268
    // 0x80260264: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_80260268;
    // 0x80260264: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_80260268:
    // 0x80260268: lw          $t6, 0xC8($a1)
    ctx->r14 = MEM_W(ctx->r5, 0XC8);
    // 0x8026026C: nop

    // 0x80260270: lhu         $t7, 0x8($t6)
    ctx->r15 = MEM_HU(ctx->r14, 0X8);
    // 0x80260274: nop

    // 0x80260278: andi        $t8, $t7, 0x1
    ctx->r24 = ctx->r15 & 0X1;
    // 0x8026027C: bne         $t8, $zero, L_802602EC
    if (ctx->r24 != 0) {
        // 0x80260280: nop
    
            goto L_802602EC;
    }
    // 0x80260280: nop

    // 0x80260284: bne         $v0, $zero, L_802602BC
    if (ctx->r2 != 0) {
        // 0x80260288: nop
    
            goto L_802602BC;
    }
    // 0x80260288: nop

    // 0x8026028C: c.lt.s      $f0, $f16
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f0.fl < ctx->f16.fl;
    // 0x80260290: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80260294: bc1f        L_802602AC
    if (!c1cs) {
        // 0x80260298: addiu       $a0, $zero, 0x56F
        ctx->r4 = ADD32(0, 0X56F);
            goto L_802602AC;
    }
    // 0x80260298: addiu       $a0, $zero, 0x56F
    ctx->r4 = ADD32(0, 0X56F);
    // 0x8026029C: jal         0x802A14C0
    // 0x802602A0: addiu       $a0, $zero, 0x56E
    ctx->r4 = ADD32(0, 0X56E);
    LOOKUP_FUNC(0x802A14C0)(rdram, ctx);
        goto after_0;
    // 0x802602A0: addiu       $a0, $zero, 0x56E
    ctx->r4 = ADD32(0, 0X56E);
    after_0:
    // 0x802602A4: b           L_80260350
    // 0x802602A8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80260350;
    // 0x802602A8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_802602AC:
    // 0x802602AC: jal         0x802A14C0
    // 0x802602B0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    LOOKUP_FUNC(0x802A14C0)(rdram, ctx);
        goto after_1;
    // 0x802602B0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_1:
    // 0x802602B4: b           L_80260350
    // 0x802602B8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80260350;
    // 0x802602B8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_802602BC:
    // 0x802602BC: c.lt.s      $f2, $f16
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f2.fl < ctx->f16.fl;
    // 0x802602C0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x802602C4: bc1f        L_802602DC
    if (!c1cs) {
        // 0x802602C8: addiu       $a0, $zero, 0x4F9
        ctx->r4 = ADD32(0, 0X4F9);
            goto L_802602DC;
    }
    // 0x802602C8: addiu       $a0, $zero, 0x4F9
    ctx->r4 = ADD32(0, 0X4F9);
    // 0x802602CC: jal         0x802A14C0
    // 0x802602D0: addiu       $a0, $zero, 0x4F8
    ctx->r4 = ADD32(0, 0X4F8);
    LOOKUP_FUNC(0x802A14C0)(rdram, ctx);
        goto after_2;
    // 0x802602D0: addiu       $a0, $zero, 0x4F8
    ctx->r4 = ADD32(0, 0X4F8);
    after_2:
    // 0x802602D4: b           L_80260350
    // 0x802602D8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80260350;
    // 0x802602D8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_802602DC:
    // 0x802602DC: jal         0x802A14C0
    // 0x802602E0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    LOOKUP_FUNC(0x802A14C0)(rdram, ctx);
        goto after_3;
    // 0x802602E0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_3:
    // 0x802602E4: b           L_80260350
    // 0x802602E8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80260350;
    // 0x802602E8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_802602EC:
    // 0x802602EC: bne         $v0, $zero, L_80260324
    if (ctx->r2 != 0) {
        // 0x802602F0: nop
    
            goto L_80260324;
    }
    // 0x802602F0: nop

    // 0x802602F4: c.lt.s      $f0, $f16
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f0.fl < ctx->f16.fl;
    // 0x802602F8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x802602FC: bc1f        L_80260314
    if (!c1cs) {
        // 0x80260300: addiu       $a0, $zero, 0x56E
        ctx->r4 = ADD32(0, 0X56E);
            goto L_80260314;
    }
    // 0x80260300: addiu       $a0, $zero, 0x56E
    ctx->r4 = ADD32(0, 0X56E);
    // 0x80260304: jal         0x802A14C0
    // 0x80260308: addiu       $a0, $zero, 0x56F
    ctx->r4 = ADD32(0, 0X56F);
    LOOKUP_FUNC(0x802A14C0)(rdram, ctx);
        goto after_4;
    // 0x80260308: addiu       $a0, $zero, 0x56F
    ctx->r4 = ADD32(0, 0X56F);
    after_4:
    // 0x8026030C: b           L_80260350
    // 0x80260310: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80260350;
    // 0x80260310: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80260314:
    // 0x80260314: jal         0x802A14C0
    // 0x80260318: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    LOOKUP_FUNC(0x802A14C0)(rdram, ctx);
        goto after_5;
    // 0x80260318: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_5:
    // 0x8026031C: b           L_80260350
    // 0x80260320: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80260350;
    // 0x80260320: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80260324:
    // 0x80260324: c.lt.s      $f2, $f16
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f2.fl < ctx->f16.fl;
    // 0x80260328: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8026032C: bc1f        L_80260344
    if (!c1cs) {
        // 0x80260330: addiu       $a0, $zero, 0x4F8
        ctx->r4 = ADD32(0, 0X4F8);
            goto L_80260344;
    }
    // 0x80260330: addiu       $a0, $zero, 0x4F8
    ctx->r4 = ADD32(0, 0X4F8);
    // 0x80260334: jal         0x802A14C0
    // 0x80260338: addiu       $a0, $zero, 0x4F9
    ctx->r4 = ADD32(0, 0X4F9);
    LOOKUP_FUNC(0x802A14C0)(rdram, ctx);
        goto after_6;
    // 0x80260338: addiu       $a0, $zero, 0x4F9
    ctx->r4 = ADD32(0, 0X4F9);
    after_6:
    // 0x8026033C: b           L_80260350
    // 0x80260340: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80260350;
    // 0x80260340: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80260344:
    // 0x80260344: jal         0x802A14C0
    // 0x80260348: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    LOOKUP_FUNC(0x802A14C0)(rdram, ctx);
        goto after_7;
    // 0x80260348: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_7:
    // 0x8026034C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80260350:
    // 0x80260350: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80260354: jr          $ra
    // 0x80260358: nop

    return;
    // 0x80260358: nop

;}
RECOMP_FUNC void ovl_8024B800_func_8026035C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8026035C: lui         $v0, 0x802C
    ctx->r2 = S32(0X802C << 16);
    // 0x80260360: lbu         $v0, 0x3A8C($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X3A8C);
    // 0x80260364: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80260368: andi        $t6, $v0, 0xF
    ctx->r14 = ctx->r2 & 0XF;
    // 0x8026036C: sltiu       $at, $t6, 0xE
    ctx->r1 = ctx->r14 < 0XE ? 1 : 0;
    // 0x80260370: beq         $at, $zero, L_8026045C
    if (ctx->r1 == 0) {
        // 0x80260374: sw          $ra, 0x14($sp)
        MEM_W(0X14, ctx->r29) = ctx->r31;
            goto L_8026045C;
    }
    // 0x80260374: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80260378: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x8026037C: lui         $at, 0x8028
    ctx->r1 = S32(0X8028 << 16);
    // 0x80260380: addu        $at, $at, $t6
    gpr jr_addend_8026038C = ctx->r14;
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x80260384: lw          $t6, -0x36F8($at)
    ctx->r14 = ADD32(ctx->r1, -0X36F8);
    // 0x80260388: nop

    // 0x8026038C: jr          $t6
    // 0x80260390: nop

    switch (jr_addend_8026038C >> 2) {
        case 0: goto L_80260394; break;
        case 1: goto L_802603AC; break;
        case 2: goto L_8026045C; break;
        case 3: goto L_802603C8; break;
        case 4: goto L_8026045C; break;
        case 5: goto L_802603E4; break;
        case 6: goto L_8026045C; break;
        case 7: goto L_802603FC; break;
        case 8: goto L_8026045C; break;
        case 9: goto L_80260414; break;
        case 10: goto L_8026045C; break;
        case 11: goto L_80260430; break;
        case 12: goto L_8026045C; break;
        case 13: goto L_80260448; break;
        default: switch_error(__func__, 0x8026038C, 0x8027C908);
    }
    // 0x80260390: nop

L_80260394:
    // 0x80260394: jal         0x80260668
    // 0x80260398: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    ovl_8024B800_func_80260668(rdram, ctx);
        goto after_0;
    // 0x80260398: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_0:
    // 0x8026039C: lui         $v0, 0x802C
    ctx->r2 = S32(0X802C << 16);
    // 0x802603A0: lbu         $v0, 0x3A8C($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X3A8C);
    // 0x802603A4: b           L_8026045C
    // 0x802603A8: nop

        goto L_8026045C;
    // 0x802603A8: nop

L_802603AC:
    // 0x802603AC: addiu       $a0, $zero, 0x5EE
    ctx->r4 = ADD32(0, 0X5EE);
    // 0x802603B0: jal         0x802A14C0
    // 0x802603B4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    LOOKUP_FUNC(0x802A14C0)(rdram, ctx);
        goto after_1;
    // 0x802603B4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_1:
    // 0x802603B8: lui         $v0, 0x802C
    ctx->r2 = S32(0X802C << 16);
    // 0x802603BC: lbu         $v0, 0x3A8C($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X3A8C);
    // 0x802603C0: b           L_8026045C
    // 0x802603C4: nop

        goto L_8026045C;
    // 0x802603C4: nop

L_802603C8:
    // 0x802603C8: addiu       $a0, $zero, 0x4FB
    ctx->r4 = ADD32(0, 0X4FB);
    // 0x802603CC: jal         0x802A14C0
    // 0x802603D0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    LOOKUP_FUNC(0x802A14C0)(rdram, ctx);
        goto after_2;
    // 0x802603D0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_2:
    // 0x802603D4: lui         $v0, 0x802C
    ctx->r2 = S32(0X802C << 16);
    // 0x802603D8: lbu         $v0, 0x3A8C($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X3A8C);
    // 0x802603DC: b           L_8026045C
    // 0x802603E0: nop

        goto L_8026045C;
    // 0x802603E0: nop

L_802603E4:
    // 0x802603E4: jal         0x802601D0
    // 0x802603E8: nop

    ovl_8024B800_func_802601D0(rdram, ctx);
        goto after_3;
    // 0x802603E8: nop

    after_3:
    // 0x802603EC: lui         $v0, 0x802C
    ctx->r2 = S32(0X802C << 16);
    // 0x802603F0: lbu         $v0, 0x3A8C($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X3A8C);
    // 0x802603F4: b           L_8026045C
    // 0x802603F8: nop

        goto L_8026045C;
    // 0x802603F8: nop

L_802603FC:
    // 0x802603FC: jal         0x80260668
    // 0x80260400: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    ovl_8024B800_func_80260668(rdram, ctx);
        goto after_4;
    // 0x80260400: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_4:
    // 0x80260404: lui         $v0, 0x802C
    ctx->r2 = S32(0X802C << 16);
    // 0x80260408: lbu         $v0, 0x3A8C($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X3A8C);
    // 0x8026040C: b           L_8026045C
    // 0x80260410: nop

        goto L_8026045C;
    // 0x80260410: nop

L_80260414:
    // 0x80260414: addiu       $a0, $zero, 0x4FC
    ctx->r4 = ADD32(0, 0X4FC);
    // 0x80260418: jal         0x802A14C0
    // 0x8026041C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    LOOKUP_FUNC(0x802A14C0)(rdram, ctx);
        goto after_5;
    // 0x8026041C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_5:
    // 0x80260420: lui         $v0, 0x802C
    ctx->r2 = S32(0X802C << 16);
    // 0x80260424: lbu         $v0, 0x3A8C($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X3A8C);
    // 0x80260428: b           L_8026045C
    // 0x8026042C: nop

        goto L_8026045C;
    // 0x8026042C: nop

L_80260430:
    // 0x80260430: jal         0x802605B4
    // 0x80260434: nop

    ovl_8024B800_func_802605B4(rdram, ctx);
        goto after_6;
    // 0x80260434: nop

    after_6:
    // 0x80260438: lui         $v0, 0x802C
    ctx->r2 = S32(0X802C << 16);
    // 0x8026043C: lbu         $v0, 0x3A8C($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X3A8C);
    // 0x80260440: b           L_8026045C
    // 0x80260444: nop

        goto L_8026045C;
    // 0x80260444: nop

L_80260448:
    // 0x80260448: jal         0x802601D0
    // 0x8026044C: nop

    ovl_8024B800_func_802601D0(rdram, ctx);
        goto after_7;
    // 0x8026044C: nop

    after_7:
    // 0x80260450: lui         $v0, 0x802C
    ctx->r2 = S32(0X802C << 16);
    // 0x80260454: lbu         $v0, 0x3A8C($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X3A8C);
    // 0x80260458: nop

L_8026045C:
    // 0x8026045C: lui         $v1, 0x802C
    ctx->r3 = S32(0X802C << 16);
    // 0x80260460: addiu       $t7, $v0, 0x1
    ctx->r15 = ADD32(ctx->r2, 0X1);
    // 0x80260464: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x80260468: addiu       $v1, $v1, 0x3A8D
    ctx->r3 = ADD32(ctx->r3, 0X3A8D);
    // 0x8026046C: sb          $t7, 0x3A8C($at)
    MEM_B(0X3A8C, ctx->r1) = ctx->r15;
    // 0x80260470: lbu         $t8, 0x0($v1)
    ctx->r24 = MEM_BU(ctx->r3, 0X0);
    // 0x80260474: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80260478: addiu       $t9, $t8, 0x1
    ctx->r25 = ADD32(ctx->r24, 0X1);
    // 0x8026047C: sb          $t9, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r25;
    // 0x80260480: jr          $ra
    // 0x80260484: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x80260484: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void ovl_8024B800_func_80260488(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80260488: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8026048C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80260490: jal         0x802A1728
    // 0x80260494: nop

    LOOKUP_FUNC(0x802A1728)(rdram, ctx);
        goto after_0;
    // 0x80260494: nop

    after_0:
    // 0x80260498: lui         $t7, 0x802C
    ctx->r15 = S32(0X802C << 16);
    // 0x8026049C: lbu         $t7, 0x3A8E($t7)
    ctx->r15 = MEM_BU(ctx->r15, 0X3A8E);
    // 0x802604A0: sll         $v1, $v0, 16
    ctx->r3 = S32(ctx->r2 << 16);
    // 0x802604A4: sra         $t6, $v1, 16
    ctx->r14 = S32(SIGNED(ctx->r3) >> 16);
    // 0x802604A8: bne         $t7, $zero, L_802604B8
    if (ctx->r15 != 0) {
        // 0x802604AC: or          $v1, $t6, $zero
        ctx->r3 = ctx->r14 | 0;
            goto L_802604B8;
    }
    // 0x802604AC: or          $v1, $t6, $zero
    ctx->r3 = ctx->r14 | 0;
    // 0x802604B0: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x802604B4: sb          $zero, 0x3A8D($at)
    MEM_B(0X3A8D, ctx->r1) = 0;
L_802604B8:
    // 0x802604B8: lui         $t8, 0x8012
    ctx->r24 = S32(0X8012 << 16);
    // 0x802604BC: lhu         $t8, 0xB78($t8)
    ctx->r24 = MEM_HU(ctx->r24, 0XB78);
    // 0x802604C0: nop

    // 0x802604C4: bne         $t8, $zero, L_802605A8
    if (ctx->r24 != 0) {
        // 0x802604C8: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_802605A8;
    }
    // 0x802604C8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802604CC: jal         0x802A1744
    // 0x802604D0: sh          $v1, 0x1A($sp)
    MEM_H(0X1A, ctx->r29) = ctx->r3;
    LOOKUP_FUNC(0x802A1744)(rdram, ctx);
        goto after_1;
    // 0x802604D0: sh          $v1, 0x1A($sp)
    MEM_H(0X1A, ctx->r29) = ctx->r3;
    after_1:
    // 0x802604D4: lh          $v1, 0x1A($sp)
    ctx->r3 = MEM_H(ctx->r29, 0X1A);
    // 0x802604D8: bgtz        $v0, L_802605A4
    if (SIGNED(ctx->r2) > 0) {
        // 0x802604DC: lui         $t9, 0x802C
        ctx->r25 = S32(0X802C << 16);
            goto L_802605A4;
    }
    // 0x802604DC: lui         $t9, 0x802C
    ctx->r25 = S32(0X802C << 16);
    // 0x802604E0: lhu         $t9, 0x38D4($t9)
    ctx->r25 = MEM_HU(ctx->r25, 0X38D4);
    // 0x802604E4: lui         $v0, 0x802C
    ctx->r2 = S32(0X802C << 16);
    // 0x802604E8: slti        $at, $t9, 0x4
    ctx->r1 = SIGNED(ctx->r25) < 0X4 ? 1 : 0;
    // 0x802604EC: bne         $at, $zero, L_802605A8
    if (ctx->r1 != 0) {
        // 0x802604F0: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_802605A8;
    }
    // 0x802604F0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802604F4: lbu         $v0, 0x3A8D($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X3A8D);
    // 0x802604F8: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x802604FC: beq         $v0, $at, L_80260508
    if (ctx->r2 == ctx->r1) {
        // 0x80260500: addiu       $at, $zero, 0x6
        ctx->r1 = ADD32(0, 0X6);
            goto L_80260508;
    }
    // 0x80260500: addiu       $at, $zero, 0x6
    ctx->r1 = ADD32(0, 0X6);
    // 0x80260504: bne         $v0, $at, L_80260590
    if (ctx->r2 != ctx->r1) {
        // 0x80260508: addiu       $at, $zero, 0x5EE
        ctx->r1 = ADD32(0, 0X5EE);
            goto L_80260590;
    }
L_80260508:
    // 0x80260508: addiu       $at, $zero, 0x5EE
    ctx->r1 = ADD32(0, 0X5EE);
    // 0x8026050C: beq         $v1, $at, L_80260560
    if (ctx->r3 == ctx->r1) {
        // 0x80260510: addiu       $a0, $zero, 0x5EF
        ctx->r4 = ADD32(0, 0X5EF);
            goto L_80260560;
    }
    // 0x80260510: addiu       $a0, $zero, 0x5EF
    ctx->r4 = ADD32(0, 0X5EF);
    // 0x80260514: addiu       $at, $zero, 0x4FB
    ctx->r1 = ADD32(0, 0X4FB);
    // 0x80260518: beq         $v1, $at, L_80260560
    if (ctx->r3 == ctx->r1) {
        // 0x8026051C: addiu       $at, $zero, 0x4FC
        ctx->r1 = ADD32(0, 0X4FC);
            goto L_80260560;
    }
    // 0x8026051C: addiu       $at, $zero, 0x4FC
    ctx->r1 = ADD32(0, 0X4FC);
    // 0x80260520: beq         $v1, $at, L_80260560
    if (ctx->r3 == ctx->r1) {
        // 0x80260524: addiu       $at, $zero, 0x56E
        ctx->r1 = ADD32(0, 0X56E);
            goto L_80260560;
    }
    // 0x80260524: addiu       $at, $zero, 0x56E
    ctx->r1 = ADD32(0, 0X56E);
    // 0x80260528: beq         $v1, $at, L_80260560
    if (ctx->r3 == ctx->r1) {
        // 0x8026052C: addiu       $at, $zero, 0x56F
        ctx->r1 = ADD32(0, 0X56F);
            goto L_80260560;
    }
    // 0x8026052C: addiu       $at, $zero, 0x56F
    ctx->r1 = ADD32(0, 0X56F);
    // 0x80260530: beq         $v1, $at, L_80260560
    if (ctx->r3 == ctx->r1) {
        // 0x80260534: addiu       $at, $zero, 0x4F8
        ctx->r1 = ADD32(0, 0X4F8);
            goto L_80260560;
    }
    // 0x80260534: addiu       $at, $zero, 0x4F8
    ctx->r1 = ADD32(0, 0X4F8);
    // 0x80260538: beq         $v1, $at, L_80260560
    if (ctx->r3 == ctx->r1) {
        // 0x8026053C: addiu       $at, $zero, 0x4F9
        ctx->r1 = ADD32(0, 0X4F9);
            goto L_80260560;
    }
    // 0x8026053C: addiu       $at, $zero, 0x4F9
    ctx->r1 = ADD32(0, 0X4F9);
    // 0x80260540: beq         $v1, $at, L_80260560
    if (ctx->r3 == ctx->r1) {
        // 0x80260544: addiu       $at, $zero, 0x5B0
        ctx->r1 = ADD32(0, 0X5B0);
            goto L_80260560;
    }
    // 0x80260544: addiu       $at, $zero, 0x5B0
    ctx->r1 = ADD32(0, 0X5B0);
    // 0x80260548: beq         $v1, $at, L_80260560
    if (ctx->r3 == ctx->r1) {
        // 0x8026054C: addiu       $at, $zero, 0x557
        ctx->r1 = ADD32(0, 0X557);
            goto L_80260560;
    }
    // 0x8026054C: addiu       $at, $zero, 0x557
    ctx->r1 = ADD32(0, 0X557);
    // 0x80260550: beq         $v1, $at, L_80260560
    if (ctx->r3 == ctx->r1) {
        // 0x80260554: addiu       $at, $zero, 0x554
        ctx->r1 = ADD32(0, 0X554);
            goto L_80260560;
    }
    // 0x80260554: addiu       $at, $zero, 0x554
    ctx->r1 = ADD32(0, 0X554);
    // 0x80260558: bne         $v1, $at, L_80260570
    if (ctx->r3 != ctx->r1) {
        // 0x8026055C: nop
    
            goto L_80260570;
    }
    // 0x8026055C: nop

L_80260560:
    // 0x80260560: jal         0x802A14C0
    // 0x80260564: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    LOOKUP_FUNC(0x802A14C0)(rdram, ctx);
        goto after_2;
    // 0x80260564: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_2:
    // 0x80260568: b           L_80260578
    // 0x8026056C: nop

        goto L_80260578;
    // 0x8026056C: nop

L_80260570:
    // 0x80260570: jal         0x8026035C
    // 0x80260574: nop

    ovl_8024B800_func_8026035C(rdram, ctx);
        goto after_3;
    // 0x80260574: nop

    after_3:
L_80260578:
    // 0x80260578: lui         $t0, 0x802C
    ctx->r8 = S32(0X802C << 16);
    // 0x8026057C: lbu         $t0, 0x3A8D($t0)
    ctx->r8 = MEM_BU(ctx->r8, 0X3A8D);
    // 0x80260580: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x80260584: addiu       $t1, $t0, 0x1
    ctx->r9 = ADD32(ctx->r8, 0X1);
    // 0x80260588: b           L_80260598
    // 0x8026058C: sb          $t1, 0x3A8D($at)
    MEM_B(0X3A8D, ctx->r1) = ctx->r9;
        goto L_80260598;
    // 0x8026058C: sb          $t1, 0x3A8D($at)
    MEM_B(0X3A8D, ctx->r1) = ctx->r9;
L_80260590:
    // 0x80260590: jal         0x8026035C
    // 0x80260594: nop

    ovl_8024B800_func_8026035C(rdram, ctx);
        goto after_4;
    // 0x80260594: nop

    after_4:
L_80260598:
    // 0x80260598: addiu       $t2, $zero, 0x32
    ctx->r10 = ADD32(0, 0X32);
    // 0x8026059C: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x802605A0: sb          $t2, 0x3A8E($at)
    MEM_B(0X3A8E, ctx->r1) = ctx->r10;
L_802605A4:
    // 0x802605A4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_802605A8:
    // 0x802605A8: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x802605AC: jr          $ra
    // 0x802605B0: nop

    return;
    // 0x802605B0: nop

;}
RECOMP_FUNC void ovl_8024B800_func_802605B4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802605B4: lui         $v0, 0x8010
    ctx->r2 = S32(0X8010 << 16);
    // 0x802605B8: lhu         $v0, 0x522A($v0)
    ctx->r2 = MEM_HU(ctx->r2, 0X522A);
    // 0x802605BC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802605C0: andi        $t6, $v0, 0x3
    ctx->r14 = ctx->r2 & 0X3;
    // 0x802605C4: beq         $t6, $zero, L_802605EC
    if (ctx->r14 == 0) {
        // 0x802605C8: sw          $ra, 0x14($sp)
        MEM_W(0X14, ctx->r29) = ctx->r31;
            goto L_802605EC;
    }
    // 0x802605C8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802605CC: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x802605D0: beq         $t6, $at, L_80260618
    if (ctx->r14 == ctx->r1) {
        // 0x802605D4: lui         $t8, 0x8009
        ctx->r24 = S32(0X8009 << 16);
            goto L_80260618;
    }
    // 0x802605D4: lui         $t8, 0x8009
    ctx->r24 = S32(0X8009 << 16);
    // 0x802605D8: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x802605DC: beq         $t6, $at, L_80260640
    if (ctx->r14 == ctx->r1) {
        // 0x802605E0: addiu       $a0, $zero, 0x499
        ctx->r4 = ADD32(0, 0X499);
            goto L_80260640;
    }
    // 0x802605E0: addiu       $a0, $zero, 0x499
    ctx->r4 = ADD32(0, 0X499);
    // 0x802605E4: b           L_80260650
    // 0x802605E8: addiu       $a0, $zero, 0x5B6
    ctx->r4 = ADD32(0, 0X5B6);
        goto L_80260650;
    // 0x802605E8: addiu       $a0, $zero, 0x5B6
    ctx->r4 = ADD32(0, 0X5B6);
L_802605EC:
    // 0x802605EC: lui         $t7, 0x8009
    ctx->r15 = S32(0X8009 << 16);
    // 0x802605F0: lw          $t7, 0x3B20($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X3B20);
    // 0x802605F4: nop

    // 0x802605F8: lw          $a0, 0x8C($t7)
    ctx->r4 = MEM_W(ctx->r15, 0X8C);
    // 0x802605FC: jal         0x80079FD0
    // 0x80260600: nop

    func_80079FD0(rdram, ctx);
        goto after_0;
    // 0x80260600: nop

    after_0:
    // 0x80260604: addiu       $a0, $zero, 0x414
    ctx->r4 = ADD32(0, 0X414);
    // 0x80260608: jal         0x802A14C0
    // 0x8026060C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    LOOKUP_FUNC(0x802A14C0)(rdram, ctx);
        goto after_1;
    // 0x8026060C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_1:
    // 0x80260610: b           L_8026065C
    // 0x80260614: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_8026065C;
    // 0x80260614: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80260618:
    // 0x80260618: lw          $t8, 0x3B20($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X3B20);
    // 0x8026061C: nop

    // 0x80260620: lw          $a0, 0x8C($t8)
    ctx->r4 = MEM_W(ctx->r24, 0X8C);
    // 0x80260624: jal         0x80079FD0
    // 0x80260628: nop

    func_80079FD0(rdram, ctx);
        goto after_2;
    // 0x80260628: nop

    after_2:
    // 0x8026062C: addiu       $a0, $zero, 0x5B3
    ctx->r4 = ADD32(0, 0X5B3);
    // 0x80260630: jal         0x802A14C0
    // 0x80260634: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    LOOKUP_FUNC(0x802A14C0)(rdram, ctx);
        goto after_3;
    // 0x80260634: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_3:
    // 0x80260638: b           L_8026065C
    // 0x8026063C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_8026065C;
    // 0x8026063C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80260640:
    // 0x80260640: jal         0x802A14C0
    // 0x80260644: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    LOOKUP_FUNC(0x802A14C0)(rdram, ctx);
        goto after_4;
    // 0x80260644: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_4:
    // 0x80260648: b           L_8026065C
    // 0x8026064C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_8026065C;
    // 0x8026064C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80260650:
    // 0x80260650: jal         0x802A14C0
    // 0x80260654: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    LOOKUP_FUNC(0x802A14C0)(rdram, ctx);
        goto after_5;
    // 0x80260654: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_5:
    // 0x80260658: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8026065C:
    // 0x8026065C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80260660: jr          $ra
    // 0x80260664: nop

    return;
    // 0x80260664: nop

;}
RECOMP_FUNC void ovl_8024B800_func_80260668(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80260668: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8026066C: lui         $v0, 0x8009
    ctx->r2 = S32(0X8009 << 16);
    // 0x80260670: lw          $v0, 0x3B20($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X3B20);
    // 0x80260674: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80260678: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x8026067C: lw          $v1, 0x90($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X90);
    // 0x80260680: nop

    // 0x80260684: beq         $v1, $zero, L_80260694
    if (ctx->r3 == 0) {
        // 0x80260688: nop
    
            goto L_80260694;
    }
    // 0x80260688: nop

    // 0x8026068C: b           L_802606AC
    // 0x80260690: or          $a2, $v1, $zero
    ctx->r6 = ctx->r3 | 0;
        goto L_802606AC;
    // 0x80260690: or          $a2, $v1, $zero
    ctx->r6 = ctx->r3 | 0;
L_80260694:
    // 0x80260694: lw          $v1, 0x94($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X94);
    // 0x80260698: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x8026069C: beq         $v1, $zero, L_802606AC
    if (ctx->r3 == 0) {
        // 0x802606A0: nop
    
            goto L_802606AC;
    }
    // 0x802606A0: nop

    // 0x802606A4: b           L_802606AC
    // 0x802606A8: or          $a2, $v1, $zero
    ctx->r6 = ctx->r3 | 0;
        goto L_802606AC;
    // 0x802606A8: or          $a2, $v1, $zero
    ctx->r6 = ctx->r3 | 0;
L_802606AC:
    // 0x802606AC: beq         $a2, $zero, L_802607A0
    if (ctx->r6 == 0) {
        // 0x802606B0: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_802607A0;
    }
    // 0x802606B0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802606B4: lw          $t6, 0xD4($a2)
    ctx->r14 = MEM_W(ctx->r6, 0XD4);
    // 0x802606B8: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x802606BC: lbu         $t7, 0x4($t6)
    ctx->r15 = MEM_BU(ctx->r14, 0X4);
    // 0x802606C0: nop

    // 0x802606C4: andi        $t8, $t7, 0x3
    ctx->r24 = ctx->r15 & 0X3;
    // 0x802606C8: sb          $t8, 0x3A3A($at)
    MEM_B(0X3A3A, ctx->r1) = ctx->r24;
    // 0x802606CC: lw          $t9, 0x8C($v0)
    ctx->r25 = MEM_W(ctx->r2, 0X8C);
    // 0x802606D0: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x802606D4: lw          $t0, 0xD4($t9)
    ctx->r8 = MEM_W(ctx->r25, 0XD4);
    // 0x802606D8: nop

    // 0x802606DC: lbu         $t1, 0x4($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X4);
    // 0x802606E0: nop

    // 0x802606E4: andi        $t2, $t1, 0x3
    ctx->r10 = ctx->r9 & 0X3;
    // 0x802606E8: sb          $t2, 0x3A3B($at)
    MEM_B(0X3A3B, ctx->r1) = ctx->r10;
    // 0x802606EC: lw          $a0, 0x8C($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X8C);
    // 0x802606F0: lw          $t6, 0xD4($a2)
    ctx->r14 = MEM_W(ctx->r6, 0XD4);
    // 0x802606F4: lw          $t3, 0xD4($a0)
    ctx->r11 = MEM_W(ctx->r4, 0XD4);
    // 0x802606F8: lbu         $t7, 0x4($t6)
    ctx->r15 = MEM_BU(ctx->r14, 0X4);
    // 0x802606FC: lbu         $t4, 0x4($t3)
    ctx->r12 = MEM_BU(ctx->r11, 0X4);
    // 0x80260700: andi        $t8, $t7, 0x3
    ctx->r24 = ctx->r15 & 0X3;
    // 0x80260704: andi        $t5, $t4, 0x3
    ctx->r13 = ctx->r12 & 0X3;
    // 0x80260708: beq         $t5, $t8, L_802607A0
    if (ctx->r13 == ctx->r24) {
        // 0x8026070C: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_802607A0;
    }
    // 0x8026070C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80260710: jal         0x80079F70
    // 0x80260714: sw          $a2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r6;
    func_80079F70(rdram, ctx);
        goto after_0;
    // 0x80260714: sw          $a2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r6;
    after_0:
    // 0x80260718: jal         0x802A1728
    // 0x8026071C: sh          $v0, 0x1A($sp)
    MEM_H(0X1A, ctx->r29) = ctx->r2;
    LOOKUP_FUNC(0x802A1728)(rdram, ctx);
        goto after_1;
    // 0x8026071C: sh          $v0, 0x1A($sp)
    MEM_H(0X1A, ctx->r29) = ctx->r2;
    after_1:
    // 0x80260720: lhu         $t9, 0x1A($sp)
    ctx->r25 = MEM_HU(ctx->r29, 0X1A);
    // 0x80260724: lw          $a2, 0x1C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X1C);
    // 0x80260728: beq         $t9, $v0, L_80260794
    if (ctx->r25 == ctx->r2) {
        // 0x8026072C: lui         $t0, 0x8009
        ctx->r8 = S32(0X8009 << 16);
            goto L_80260794;
    }
    // 0x8026072C: lui         $t0, 0x8009
    ctx->r8 = S32(0X8009 << 16);
    // 0x80260730: lw          $t0, 0x3B20($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X3B20);
    // 0x80260734: nop

    // 0x80260738: lw          $a0, 0x8C($t0)
    ctx->r4 = MEM_W(ctx->r8, 0X8C);
    // 0x8026073C: jal         0x80078A40
    // 0x80260740: sw          $a2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r6;
    func_80078A40(rdram, ctx);
        goto after_2;
    // 0x80260740: sw          $a2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r6;
    after_2:
    // 0x80260744: lbu         $t1, 0x2B($sp)
    ctx->r9 = MEM_BU(ctx->r29, 0X2B);
    // 0x80260748: lw          $a2, 0x1C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X1C);
    // 0x8026074C: bne         $t1, $zero, L_80260794
    if (ctx->r9 != 0) {
        // 0x80260750: lui         $t2, 0x8010
        ctx->r10 = S32(0X8010 << 16);
            goto L_80260794;
    }
    // 0x80260750: lui         $t2, 0x8010
    ctx->r10 = S32(0X8010 << 16);
    // 0x80260754: lhu         $t2, 0x522A($t2)
    ctx->r10 = MEM_HU(ctx->r10, 0X522A);
    // 0x80260758: addiu       $a0, $zero, 0x57A
    ctx->r4 = ADD32(0, 0X57A);
    // 0x8026075C: andi        $t3, $t2, 0x1
    ctx->r11 = ctx->r10 & 0X1;
    // 0x80260760: beq         $t3, $zero, L_80260784
    if (ctx->r11 == 0) {
        // 0x80260764: or          $a1, $zero, $zero
        ctx->r5 = 0 | 0;
            goto L_80260784;
    }
    // 0x80260764: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80260768: addiu       $a0, $zero, 0x43F
    ctx->r4 = ADD32(0, 0X43F);
    // 0x8026076C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80260770: jal         0x802A14C0
    // 0x80260774: sw          $a2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r6;
    LOOKUP_FUNC(0x802A14C0)(rdram, ctx);
        goto after_3;
    // 0x80260774: sw          $a2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r6;
    after_3:
    // 0x80260778: lw          $a2, 0x1C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X1C);
    // 0x8026077C: b           L_80260794
    // 0x80260780: nop

        goto L_80260794;
    // 0x80260780: nop

L_80260784:
    // 0x80260784: jal         0x802A14C0
    // 0x80260788: sw          $a2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r6;
    LOOKUP_FUNC(0x802A14C0)(rdram, ctx);
        goto after_4;
    // 0x80260788: sw          $a2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r6;
    after_4:
    // 0x8026078C: lw          $a2, 0x1C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X1C);
    // 0x80260790: nop

L_80260794:
    // 0x80260794: jal         0x80078A40
    // 0x80260798: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    func_80078A40(rdram, ctx);
        goto after_5;
    // 0x80260798: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    after_5:
    // 0x8026079C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_802607A0:
    // 0x802607A0: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x802607A4: jr          $ra
    // 0x802607A8: nop

    return;
    // 0x802607A8: nop

;}
RECOMP_FUNC void ovl_8024B800_func_802607AC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802607AC: lui         $v0, 0x802C
    ctx->r2 = S32(0X802C << 16);
    // 0x802607B0: lhu         $v0, 0x3A80($v0)
    ctx->r2 = MEM_HU(ctx->r2, 0X3A80);
    // 0x802607B4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802607B8: andi        $t6, $v0, 0x100
    ctx->r14 = ctx->r2 & 0X100;
    // 0x802607BC: beq         $t6, $zero, L_802607D8
    if (ctx->r14 == 0) {
        // 0x802607C0: sw          $ra, 0x14($sp)
        MEM_W(0X14, ctx->r29) = ctx->r31;
            goto L_802607D8;
    }
    // 0x802607C0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802607C4: jal         0x80078F34
    // 0x802607C8: nop

    func_80078F34(rdram, ctx);
        goto after_0;
    // 0x802607C8: nop

    after_0:
    // 0x802607CC: lui         $v0, 0x802C
    ctx->r2 = S32(0X802C << 16);
    // 0x802607D0: lhu         $v0, 0x3A80($v0)
    ctx->r2 = MEM_HU(ctx->r2, 0X3A80);
    // 0x802607D4: nop

L_802607D8:
    // 0x802607D8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802607DC: andi        $t7, $v0, 0xF8FF
    ctx->r15 = ctx->r2 & 0XF8FF;
    // 0x802607E0: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x802607E4: sh          $t7, 0x3A80($at)
    MEM_H(0X3A80, ctx->r1) = ctx->r15;
    // 0x802607E8: jr          $ra
    // 0x802607EC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x802607EC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void ovl_8024B800_func_802607F0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802607F0: lui         $t6, 0x802C
    ctx->r14 = S32(0X802C << 16);
    // 0x802607F4: lbu         $t6, 0x3A83($t6)
    ctx->r14 = MEM_BU(ctx->r14, 0X3A83);
    // 0x802607F8: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x802607FC: bne         $t6, $zero, L_8026080C
    if (ctx->r14 != 0) {
        // 0x80260800: sw          $ra, 0x1C($sp)
        MEM_W(0X1C, ctx->r29) = ctx->r31;
            goto L_8026080C;
    }
    // 0x80260800: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80260804: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x80260808: sb          $zero, 0x3A82($at)
    MEM_B(0X3A82, ctx->r1) = 0;
L_8026080C:
    // 0x8026080C: lui         $t7, 0x8012
    ctx->r15 = S32(0X8012 << 16);
    // 0x80260810: lhu         $t7, 0xB78($t7)
    ctx->r15 = MEM_HU(ctx->r15, 0XB78);
    // 0x80260814: lui         $v1, 0x802C
    ctx->r3 = S32(0X802C << 16);
    // 0x80260818: bne         $t7, $zero, L_80260AA4
    if (ctx->r15 != 0) {
        // 0x8026081C: nop
    
            goto L_80260AA4;
    }
    // 0x8026081C: nop

    // 0x80260820: lhu         $v1, 0x3A80($v1)
    ctx->r3 = MEM_HU(ctx->r3, 0X3A80);
    // 0x80260824: lui         $v0, 0x802C
    ctx->r2 = S32(0X802C << 16);
    // 0x80260828: andi        $t8, $v1, 0x4
    ctx->r24 = ctx->r3 & 0X4;
    // 0x8026082C: beq         $t8, $zero, L_802609E0
    if (ctx->r24 == 0) {
        // 0x80260830: andi        $t4, $v1, 0x8
        ctx->r12 = ctx->r3 & 0X8;
            goto L_802609E0;
    }
    // 0x80260830: andi        $t4, $v1, 0x8
    ctx->r12 = ctx->r3 & 0X8;
    // 0x80260834: lbu         $v0, 0x3A82($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X3A82);
    // 0x80260838: lui         $t0, 0x802C
    ctx->r8 = S32(0X802C << 16);
    // 0x8026083C: bne         $v0, $zero, L_80260968
    if (ctx->r2 != 0) {
        // 0x80260840: addiu       $a0, $zero, 0x1
        ctx->r4 = ADD32(0, 0X1);
            goto L_80260968;
    }
    // 0x80260840: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x80260844: addiu       $t0, $t0, 0x3A84
    ctx->r8 = ADD32(ctx->r8, 0X3A84);
    // 0x80260848: lbu         $v0, 0x0($t0)
    ctx->r2 = MEM_BU(ctx->r8, 0X0);
    // 0x8026084C: nop

    // 0x80260850: slti        $at, $v0, 0x5
    ctx->r1 = SIGNED(ctx->r2) < 0X5 ? 1 : 0;
    // 0x80260854: bne         $at, $zero, L_80260868
    if (ctx->r1 != 0) {
        // 0x80260858: sltiu       $at, $v0, 0x5
        ctx->r1 = ctx->r2 < 0X5 ? 1 : 0;
            goto L_80260868;
    }
    // 0x80260858: sltiu       $at, $v0, 0x5
    ctx->r1 = ctx->r2 < 0X5 ? 1 : 0;
    // 0x8026085C: sb          $zero, 0x0($t0)
    MEM_B(0X0, ctx->r8) = 0;
    // 0x80260860: andi        $v0, $zero, 0xFF
    ctx->r2 = 0 & 0XFF;
    // 0x80260864: sltiu       $at, $v0, 0x5
    ctx->r1 = ctx->r2 < 0X5 ? 1 : 0;
L_80260868:
    // 0x80260868: beq         $at, $zero, L_80260924
    if (ctx->r1 == 0) {
        // 0x8026086C: sll         $t9, $v0, 2
        ctx->r25 = S32(ctx->r2 << 2);
            goto L_80260924;
    }
    // 0x8026086C: sll         $t9, $v0, 2
    ctx->r25 = S32(ctx->r2 << 2);
    // 0x80260870: lui         $at, 0x8028
    ctx->r1 = S32(0X8028 << 16);
    // 0x80260874: addu        $at, $at, $t9
    gpr jr_addend_80260880 = ctx->r25;
    ctx->r1 = ADD32(ctx->r1, ctx->r25);
    // 0x80260878: lw          $t9, -0x36C0($at)
    ctx->r25 = ADD32(ctx->r1, -0X36C0);
    // 0x8026087C: nop

    // 0x80260880: jr          $t9
    // 0x80260884: nop

    switch (jr_addend_80260880 >> 2) {
        case 0: goto L_80260888; break;
        case 1: goto L_802608A8; break;
        case 2: goto L_802608C8; break;
        case 3: goto L_802608E8; break;
        case 4: goto L_80260908; break;
        default: switch_error(__func__, 0x80260880, 0x8027C940);
    }
    // 0x80260884: nop

L_80260888:
    // 0x80260888: addiu       $a0, $zero, 0x4BC
    ctx->r4 = ADD32(0, 0X4BC);
    // 0x8026088C: jal         0x802A14C0
    // 0x80260890: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    LOOKUP_FUNC(0x802A14C0)(rdram, ctx);
        goto after_0;
    // 0x80260890: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_0:
    // 0x80260894: lui         $v0, 0x802C
    ctx->r2 = S32(0X802C << 16);
    // 0x80260898: lbu         $v0, 0x3A84($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X3A84);
    // 0x8026089C: lui         $t0, 0x802C
    ctx->r8 = S32(0X802C << 16);
    // 0x802608A0: b           L_80260924
    // 0x802608A4: addiu       $t0, $t0, 0x3A84
    ctx->r8 = ADD32(ctx->r8, 0X3A84);
        goto L_80260924;
    // 0x802608A4: addiu       $t0, $t0, 0x3A84
    ctx->r8 = ADD32(ctx->r8, 0X3A84);
L_802608A8:
    // 0x802608A8: addiu       $a0, $zero, 0x401
    ctx->r4 = ADD32(0, 0X401);
    // 0x802608AC: jal         0x802A14C0
    // 0x802608B0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    LOOKUP_FUNC(0x802A14C0)(rdram, ctx);
        goto after_1;
    // 0x802608B0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_1:
    // 0x802608B4: lui         $v0, 0x802C
    ctx->r2 = S32(0X802C << 16);
    // 0x802608B8: lbu         $v0, 0x3A84($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X3A84);
    // 0x802608BC: lui         $t0, 0x802C
    ctx->r8 = S32(0X802C << 16);
    // 0x802608C0: b           L_80260924
    // 0x802608C4: addiu       $t0, $t0, 0x3A84
    ctx->r8 = ADD32(ctx->r8, 0X3A84);
        goto L_80260924;
    // 0x802608C4: addiu       $t0, $t0, 0x3A84
    ctx->r8 = ADD32(ctx->r8, 0X3A84);
L_802608C8:
    // 0x802608C8: addiu       $a0, $zero, 0x4A1
    ctx->r4 = ADD32(0, 0X4A1);
    // 0x802608CC: jal         0x802A14C0
    // 0x802608D0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    LOOKUP_FUNC(0x802A14C0)(rdram, ctx);
        goto after_2;
    // 0x802608D0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_2:
    // 0x802608D4: lui         $v0, 0x802C
    ctx->r2 = S32(0X802C << 16);
    // 0x802608D8: lbu         $v0, 0x3A84($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X3A84);
    // 0x802608DC: lui         $t0, 0x802C
    ctx->r8 = S32(0X802C << 16);
    // 0x802608E0: b           L_80260924
    // 0x802608E4: addiu       $t0, $t0, 0x3A84
    ctx->r8 = ADD32(ctx->r8, 0X3A84);
        goto L_80260924;
    // 0x802608E4: addiu       $t0, $t0, 0x3A84
    ctx->r8 = ADD32(ctx->r8, 0X3A84);
L_802608E8:
    // 0x802608E8: addiu       $a0, $zero, 0x55D
    ctx->r4 = ADD32(0, 0X55D);
    // 0x802608EC: jal         0x802A14C0
    // 0x802608F0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    LOOKUP_FUNC(0x802A14C0)(rdram, ctx);
        goto after_3;
    // 0x802608F0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_3:
    // 0x802608F4: lui         $v0, 0x802C
    ctx->r2 = S32(0X802C << 16);
    // 0x802608F8: lbu         $v0, 0x3A84($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X3A84);
    // 0x802608FC: lui         $t0, 0x802C
    ctx->r8 = S32(0X802C << 16);
    // 0x80260900: b           L_80260924
    // 0x80260904: addiu       $t0, $t0, 0x3A84
    ctx->r8 = ADD32(ctx->r8, 0X3A84);
        goto L_80260924;
    // 0x80260904: addiu       $t0, $t0, 0x3A84
    ctx->r8 = ADD32(ctx->r8, 0X3A84);
L_80260908:
    // 0x80260908: addiu       $a0, $zero, 0x4D3
    ctx->r4 = ADD32(0, 0X4D3);
    // 0x8026090C: jal         0x802A14C0
    // 0x80260910: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    LOOKUP_FUNC(0x802A14C0)(rdram, ctx);
        goto after_4;
    // 0x80260910: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_4:
    // 0x80260914: lui         $v0, 0x802C
    ctx->r2 = S32(0X802C << 16);
    // 0x80260918: lui         $t0, 0x802C
    ctx->r8 = S32(0X802C << 16);
    // 0x8026091C: lbu         $v0, 0x3A84($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X3A84);
    // 0x80260920: addiu       $t0, $t0, 0x3A84
    ctx->r8 = ADD32(ctx->r8, 0X3A84);
L_80260924:
    // 0x80260924: lui         $v1, 0x8010
    ctx->r3 = S32(0X8010 << 16);
    // 0x80260928: addiu       $v1, $v1, 0x4890
    ctx->r3 = ADD32(ctx->r3, 0X4890);
    // 0x8026092C: lwc1        $f0, 0x1C30($v1)
    ctx->f0.u32l = MEM_W(ctx->r3, 0X1C30);
    // 0x80260930: lwc1        $f2, 0x1C38($v1)
    ctx->f2.u32l = MEM_W(ctx->r3, 0X1C38);
    // 0x80260934: addiu       $t1, $v0, 0x1
    ctx->r9 = ADD32(ctx->r2, 0X1);
    // 0x80260938: addiu       $t2, $zero, 0x3C
    ctx->r10 = ADD32(0, 0X3C);
    // 0x8026093C: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x80260940: mfc1        $a2, $f2
    ctx->r6 = (int32_t)ctx->f2.u32l;
    // 0x80260944: sb          $t1, 0x0($t0)
    MEM_B(0X0, ctx->r8) = ctx->r9;
    // 0x80260948: sw          $t2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r10;
    // 0x8026094C: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x80260950: jal         0x8025F3F8
    // 0x80260954: addiu       $a3, $zero, 0x3C
    ctx->r7 = ADD32(0, 0X3C);
    ovl_8024B800_func_8025F3F8(rdram, ctx);
        goto after_5;
    // 0x80260954: addiu       $a3, $zero, 0x3C
    ctx->r7 = ADD32(0, 0X3C);
    after_5:
    // 0x80260958: lui         $v1, 0x802C
    ctx->r3 = S32(0X802C << 16);
    // 0x8026095C: lhu         $v1, 0x3A80($v1)
    ctx->r3 = MEM_HU(ctx->r3, 0X3A80);
    // 0x80260960: b           L_80260A40
    // 0x80260964: andi        $t6, $v1, 0x80
    ctx->r14 = ctx->r3 & 0X80;
        goto L_80260A40;
    // 0x80260964: andi        $t6, $v1, 0x80
    ctx->r14 = ctx->r3 & 0X80;
L_80260968:
    // 0x80260968: bne         $a0, $v0, L_80260988
    if (ctx->r4 != ctx->r2) {
        // 0x8026096C: or          $a1, $zero, $zero
        ctx->r5 = 0 | 0;
            goto L_80260988;
    }
    // 0x8026096C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80260970: jal         0x802A14C0
    // 0x80260974: addiu       $a0, $zero, 0x477
    ctx->r4 = ADD32(0, 0X477);
    LOOKUP_FUNC(0x802A14C0)(rdram, ctx);
        goto after_6;
    // 0x80260974: addiu       $a0, $zero, 0x477
    ctx->r4 = ADD32(0, 0X477);
    after_6:
    // 0x80260978: lui         $v1, 0x802C
    ctx->r3 = S32(0X802C << 16);
    // 0x8026097C: lhu         $v1, 0x3A80($v1)
    ctx->r3 = MEM_HU(ctx->r3, 0X3A80);
    // 0x80260980: b           L_80260A40
    // 0x80260984: andi        $t6, $v1, 0x80
    ctx->r14 = ctx->r3 & 0X80;
        goto L_80260A40;
    // 0x80260984: andi        $t6, $v1, 0x80
    ctx->r14 = ctx->r3 & 0X80;
L_80260988:
    // 0x80260988: lui         $v0, 0x8010
    ctx->r2 = S32(0X8010 << 16);
    // 0x8026098C: lhu         $v0, 0x522A($v0)
    ctx->r2 = MEM_HU(ctx->r2, 0X522A);
    // 0x80260990: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80260994: andi        $t3, $v0, 0x1
    ctx->r11 = ctx->r2 & 0X1;
    // 0x80260998: beq         $t3, $zero, L_802609B0
    if (ctx->r11 == 0) {
        // 0x8026099C: nop
    
            goto L_802609B0;
    }
    // 0x8026099C: nop

    // 0x802609A0: beq         $t3, $a0, L_802609C8
    if (ctx->r11 == ctx->r4) {
        // 0x802609A4: or          $a1, $zero, $zero
        ctx->r5 = 0 | 0;
            goto L_802609C8;
    }
    // 0x802609A4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x802609A8: b           L_80260A40
    // 0x802609AC: andi        $t6, $v1, 0x80
    ctx->r14 = ctx->r3 & 0X80;
        goto L_80260A40;
    // 0x802609AC: andi        $t6, $v1, 0x80
    ctx->r14 = ctx->r3 & 0X80;
L_802609B0:
    // 0x802609B0: jal         0x802A14C0
    // 0x802609B4: addiu       $a0, $zero, 0x484
    ctx->r4 = ADD32(0, 0X484);
    LOOKUP_FUNC(0x802A14C0)(rdram, ctx);
        goto after_7;
    // 0x802609B4: addiu       $a0, $zero, 0x484
    ctx->r4 = ADD32(0, 0X484);
    after_7:
    // 0x802609B8: lui         $v1, 0x802C
    ctx->r3 = S32(0X802C << 16);
    // 0x802609BC: lhu         $v1, 0x3A80($v1)
    ctx->r3 = MEM_HU(ctx->r3, 0X3A80);
    // 0x802609C0: b           L_80260A40
    // 0x802609C4: andi        $t6, $v1, 0x80
    ctx->r14 = ctx->r3 & 0X80;
        goto L_80260A40;
    // 0x802609C4: andi        $t6, $v1, 0x80
    ctx->r14 = ctx->r3 & 0X80;
L_802609C8:
    // 0x802609C8: jal         0x802A14C0
    // 0x802609CC: addiu       $a0, $zero, 0x485
    ctx->r4 = ADD32(0, 0X485);
    LOOKUP_FUNC(0x802A14C0)(rdram, ctx);
        goto after_8;
    // 0x802609CC: addiu       $a0, $zero, 0x485
    ctx->r4 = ADD32(0, 0X485);
    after_8:
    // 0x802609D0: lui         $v1, 0x802C
    ctx->r3 = S32(0X802C << 16);
    // 0x802609D4: lhu         $v1, 0x3A80($v1)
    ctx->r3 = MEM_HU(ctx->r3, 0X3A80);
    // 0x802609D8: b           L_80260A40
    // 0x802609DC: andi        $t6, $v1, 0x80
    ctx->r14 = ctx->r3 & 0X80;
        goto L_80260A40;
    // 0x802609DC: andi        $t6, $v1, 0x80
    ctx->r14 = ctx->r3 & 0X80;
L_802609E0:
    // 0x802609E0: beq         $t4, $zero, L_80260A3C
    if (ctx->r12 == 0) {
        // 0x802609E4: lui         $v0, 0x8010
        ctx->r2 = S32(0X8010 << 16);
            goto L_80260A3C;
    }
    // 0x802609E4: lui         $v0, 0x8010
    ctx->r2 = S32(0X8010 << 16);
    // 0x802609E8: lhu         $v0, 0x522A($v0)
    ctx->r2 = MEM_HU(ctx->r2, 0X522A);
    // 0x802609EC: addiu       $a0, $zero, 0x46E
    ctx->r4 = ADD32(0, 0X46E);
    // 0x802609F0: andi        $t5, $v0, 0x1
    ctx->r13 = ctx->r2 & 0X1;
    // 0x802609F4: beq         $t5, $zero, L_80260A10
    if (ctx->r13 == 0) {
        // 0x802609F8: nop
    
            goto L_80260A10;
    }
    // 0x802609F8: nop

    // 0x802609FC: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x80260A00: beq         $t5, $a0, L_80260A28
    if (ctx->r13 == ctx->r4) {
        // 0x80260A04: or          $a1, $zero, $zero
        ctx->r5 = 0 | 0;
            goto L_80260A28;
    }
    // 0x80260A04: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80260A08: b           L_80260A40
    // 0x80260A0C: andi        $t6, $v1, 0x80
    ctx->r14 = ctx->r3 & 0X80;
        goto L_80260A40;
    // 0x80260A0C: andi        $t6, $v1, 0x80
    ctx->r14 = ctx->r3 & 0X80;
L_80260A10:
    // 0x80260A10: jal         0x802A14C0
    // 0x80260A14: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    LOOKUP_FUNC(0x802A14C0)(rdram, ctx);
        goto after_9;
    // 0x80260A14: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_9:
    // 0x80260A18: lui         $v1, 0x802C
    ctx->r3 = S32(0X802C << 16);
    // 0x80260A1C: lhu         $v1, 0x3A80($v1)
    ctx->r3 = MEM_HU(ctx->r3, 0X3A80);
    // 0x80260A20: b           L_80260A40
    // 0x80260A24: andi        $t6, $v1, 0x80
    ctx->r14 = ctx->r3 & 0X80;
        goto L_80260A40;
    // 0x80260A24: andi        $t6, $v1, 0x80
    ctx->r14 = ctx->r3 & 0X80;
L_80260A28:
    // 0x80260A28: jal         0x802A14C0
    // 0x80260A2C: addiu       $a0, $zero, 0x433
    ctx->r4 = ADD32(0, 0X433);
    LOOKUP_FUNC(0x802A14C0)(rdram, ctx);
        goto after_10;
    // 0x80260A2C: addiu       $a0, $zero, 0x433
    ctx->r4 = ADD32(0, 0X433);
    after_10:
    // 0x80260A30: lui         $v1, 0x802C
    ctx->r3 = S32(0X802C << 16);
    // 0x80260A34: lhu         $v1, 0x3A80($v1)
    ctx->r3 = MEM_HU(ctx->r3, 0X3A80);
    // 0x80260A38: nop

L_80260A3C:
    // 0x80260A3C: andi        $t6, $v1, 0x80
    ctx->r14 = ctx->r3 & 0X80;
L_80260A40:
    // 0x80260A40: beq         $t6, $zero, L_80260A60
    if (ctx->r14 == 0) {
        // 0x80260A44: andi        $t7, $v1, 0x20
        ctx->r15 = ctx->r3 & 0X20;
            goto L_80260A60;
    }
    // 0x80260A44: andi        $t7, $v1, 0x20
    ctx->r15 = ctx->r3 & 0X20;
    // 0x80260A48: jal         0x80075F44
    // 0x80260A4C: nop

    func_80075F44(rdram, ctx);
        goto after_11;
    // 0x80260A4C: nop

    after_11:
    // 0x80260A50: lui         $v1, 0x802C
    ctx->r3 = S32(0X802C << 16);
    // 0x80260A54: lhu         $v1, 0x3A80($v1)
    ctx->r3 = MEM_HU(ctx->r3, 0X3A80);
    // 0x80260A58: nop

    // 0x80260A5C: andi        $t7, $v1, 0x20
    ctx->r15 = ctx->r3 & 0X20;
L_80260A60:
    // 0x80260A60: beq         $t7, $zero, L_80260A80
    if (ctx->r15 == 0) {
        // 0x80260A64: andi        $t8, $v1, 0x10
        ctx->r24 = ctx->r3 & 0X10;
            goto L_80260A80;
    }
    // 0x80260A64: andi        $t8, $v1, 0x10
    ctx->r24 = ctx->r3 & 0X10;
    // 0x80260A68: jal         0x80075E90
    // 0x80260A6C: nop

    func_80075E90(rdram, ctx);
        goto after_12;
    // 0x80260A6C: nop

    after_12:
    // 0x80260A70: lui         $v1, 0x802C
    ctx->r3 = S32(0X802C << 16);
    // 0x80260A74: lhu         $v1, 0x3A80($v1)
    ctx->r3 = MEM_HU(ctx->r3, 0X3A80);
    // 0x80260A78: nop

    // 0x80260A7C: andi        $t8, $v1, 0x10
    ctx->r24 = ctx->r3 & 0X10;
L_80260A80:
    // 0x80260A80: beq         $t8, $zero, L_80260A90
    if (ctx->r24 == 0) {
        // 0x80260A84: nop
    
            goto L_80260A90;
    }
    // 0x80260A84: nop

    // 0x80260A88: jal         0x80075ED8
    // 0x80260A8C: nop

    func_80075ED8(rdram, ctx);
        goto after_13;
    // 0x80260A8C: nop

    after_13:
L_80260A90:
    // 0x80260A90: lui         $t9, 0x802C
    ctx->r25 = S32(0X802C << 16);
    // 0x80260A94: lbu         $t9, 0x3A82($t9)
    ctx->r25 = MEM_BU(ctx->r25, 0X3A82);
    // 0x80260A98: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x80260A9C: addiu       $t1, $t9, 0x1
    ctx->r9 = ADD32(ctx->r25, 0X1);
    // 0x80260AA0: sb          $t1, 0x3A82($at)
    MEM_B(0X3A82, ctx->r1) = ctx->r9;
L_80260AA4:
    // 0x80260AA4: lui         $t2, 0x802C
    ctx->r10 = S32(0X802C << 16);
    // 0x80260AA8: lhu         $t2, 0x3A80($t2)
    ctx->r10 = MEM_HU(ctx->r10, 0X3A80);
    // 0x80260AAC: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x80260AB0: andi        $t3, $t2, 0xFF03
    ctx->r11 = ctx->r10 & 0XFF03;
    // 0x80260AB4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80260AB8: sh          $t3, 0x3A80($at)
    MEM_H(0X3A80, ctx->r1) = ctx->r11;
    // 0x80260ABC: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x80260AC0: addiu       $t4, $zero, 0x96
    ctx->r12 = ADD32(0, 0X96);
    // 0x80260AC4: sb          $t4, 0x3A83($at)
    MEM_B(0X3A83, ctx->r1) = ctx->r12;
    // 0x80260AC8: jr          $ra
    // 0x80260ACC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x80260ACC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void ovl_8024B800_func_80260AD0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80260AD0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80260AD4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80260AD8: jal         0x802A16C4
    // 0x80260ADC: addiu       $a0, $zero, 0x4A4
    ctx->r4 = ADD32(0, 0X4A4);
    LOOKUP_FUNC(0x802A16C4)(rdram, ctx);
        goto after_0;
    // 0x80260ADC: addiu       $a0, $zero, 0x4A4
    ctx->r4 = ADD32(0, 0X4A4);
    after_0:
    // 0x80260AE0: beq         $v0, $zero, L_80260AF4
    if (ctx->r2 == 0) {
        // 0x80260AE4: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_80260AF4;
    }
    // 0x80260AE4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80260AE8: jal         0x802A13CC
    // 0x80260AEC: nop

    LOOKUP_FUNC(0x802A13CC)(rdram, ctx);
        goto after_1;
    // 0x80260AEC: nop

    after_1:
    // 0x80260AF0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80260AF4:
    // 0x80260AF4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80260AF8: jr          $ra
    // 0x80260AFC: nop

    return;
    // 0x80260AFC: nop

;}
RECOMP_FUNC void ovl_8024B800_func_80260B00(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80260B00: lui         $t6, 0x802C
    ctx->r14 = S32(0X802C << 16);
    // 0x80260B04: lbu         $t6, 0x3A8B($t6)
    ctx->r14 = MEM_BU(ctx->r14, 0X3A8B);
    // 0x80260B08: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80260B0C: bne         $t6, $zero, L_80260B1C
    if (ctx->r14 != 0) {
        // 0x80260B10: sw          $ra, 0x14($sp)
        MEM_W(0X14, ctx->r29) = ctx->r31;
            goto L_80260B1C;
    }
    // 0x80260B10: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80260B14: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x80260B18: sb          $zero, 0x3A8A($at)
    MEM_B(0X3A8A, ctx->r1) = 0;
L_80260B1C:
    // 0x80260B1C: lui         $t7, 0x8012
    ctx->r15 = S32(0X8012 << 16);
    // 0x80260B20: lhu         $t7, 0xB78($t7)
    ctx->r15 = MEM_HU(ctx->r15, 0XB78);
    // 0x80260B24: addiu       $at, $zero, 0x9
    ctx->r1 = ADD32(0, 0X9);
    // 0x80260B28: beq         $t7, $at, L_80260E5C
    if (ctx->r15 == ctx->r1) {
        // 0x80260B2C: lui         $v1, 0x802C
        ctx->r3 = S32(0X802C << 16);
            goto L_80260E5C;
    }
    // 0x80260B2C: lui         $v1, 0x802C
    ctx->r3 = S32(0X802C << 16);
    // 0x80260B30: lbu         $v1, 0x3A8A($v1)
    ctx->r3 = MEM_BU(ctx->r3, 0X3A8A);
    // 0x80260B34: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x80260B38: beq         $v1, $zero, L_80260B50
    if (ctx->r3 == 0) {
        // 0x80260B3C: lui         $t8, 0x8009
        ctx->r24 = S32(0X8009 << 16);
            goto L_80260B50;
    }
    // 0x80260B3C: lui         $t8, 0x8009
    ctx->r24 = S32(0X8009 << 16);
    // 0x80260B40: beq         $v1, $a0, L_80260CD8
    if (ctx->r3 == ctx->r4) {
        // 0x80260B44: lui         $v0, 0x8010
        ctx->r2 = S32(0X8010 << 16);
            goto L_80260CD8;
    }
    // 0x80260B44: lui         $v0, 0x8010
    ctx->r2 = S32(0X8010 << 16);
    // 0x80260B48: b           L_80260DAC
    // 0x80260B4C: lui         $v0, 0x8010
    ctx->r2 = S32(0X8010 << 16);
        goto L_80260DAC;
    // 0x80260B4C: lui         $v0, 0x8010
    ctx->r2 = S32(0X8010 << 16);
L_80260B50:
    // 0x80260B50: lw          $t8, 0x3B20($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X3B20);
    // 0x80260B54: nop

    // 0x80260B58: lw          $a0, 0x8C($t8)
    ctx->r4 = MEM_W(ctx->r24, 0X8C);
    // 0x80260B5C: jal         0x80078A40
    // 0x80260B60: nop

    func_80078A40(rdram, ctx);
        goto after_0;
    // 0x80260B60: nop

    after_0:
    // 0x80260B64: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x80260B68: lwc1        $f4, 0x3ABC($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X3ABC);
    // 0x80260B6C: lui         $v0, 0x802C
    ctx->r2 = S32(0X802C << 16);
    // 0x80260B70: addiu       $v0, $v0, 0x3AC0
    ctx->r2 = ADD32(ctx->r2, 0X3AC0);
    // 0x80260B74: swc1        $f4, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->f4.u32l;
    // 0x80260B78: lwc1        $f0, 0x0($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X0);
    // 0x80260B7C: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x80260B80: lui         $at, 0x4382
    ctx->r1 = S32(0X4382 << 16);
    // 0x80260B84: c.lt.s      $f0, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f0.fl < ctx->f6.fl;
    // 0x80260B88: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x80260B8C: bc1f        L_80260BA4
    if (!c1cs) {
        // 0x80260B90: lui         $at, 0x4348
        ctx->r1 = S32(0X4348 << 16);
            goto L_80260BA4;
    }
    // 0x80260B90: lui         $at, 0x4348
    ctx->r1 = S32(0X4348 << 16);
    // 0x80260B94: neg.s       $f8, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = -ctx->f0.fl;
    // 0x80260B98: swc1        $f8, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->f8.u32l;
    // 0x80260B9C: lwc1        $f0, 0x0($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X0);
    // 0x80260BA0: nop

L_80260BA4:
    // 0x80260BA4: c.lt.s      $f10, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f10.fl < ctx->f0.fl;
    // 0x80260BA8: lui         $t9, 0x802C
    ctx->r25 = S32(0X802C << 16);
    // 0x80260BAC: bc1f        L_80260C5C
    if (!c1cs) {
        // 0x80260BB0: nop
    
            goto L_80260C5C;
    }
    // 0x80260BB0: nop

    // 0x80260BB4: lbu         $t9, 0x3A3E($t9)
    ctx->r25 = MEM_BU(ctx->r25, 0X3A3E);
    // 0x80260BB8: addiu       $a0, $zero, 0x4C7
    ctx->r4 = ADD32(0, 0X4C7);
    // 0x80260BBC: bne         $t9, $zero, L_80260BDC
    if (ctx->r25 != 0) {
        // 0x80260BC0: nop
    
            goto L_80260BDC;
    }
    // 0x80260BC0: nop

    // 0x80260BC4: jal         0x802A14C0
    // 0x80260BC8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    LOOKUP_FUNC(0x802A14C0)(rdram, ctx);
        goto after_1;
    // 0x80260BC8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_1:
    // 0x80260BCC: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x80260BD0: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x80260BD4: b           L_80260CC8
    // 0x80260BD8: sb          $t0, 0x3A3E($at)
    MEM_B(0X3A3E, ctx->r1) = ctx->r8;
        goto L_80260CC8;
    // 0x80260BD8: sb          $t0, 0x3A3E($at)
    MEM_B(0X3A3E, ctx->r1) = ctx->r8;
L_80260BDC:
    // 0x80260BDC: jal         0x80260AD0
    // 0x80260BE0: nop

    ovl_8024B800_func_80260AD0(rdram, ctx);
        goto after_2;
    // 0x80260BE0: nop

    after_2:
    // 0x80260BE4: lui         $v0, 0x8010
    ctx->r2 = S32(0X8010 << 16);
    // 0x80260BE8: lhu         $v0, 0x522A($v0)
    ctx->r2 = MEM_HU(ctx->r2, 0X522A);
    // 0x80260BEC: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x80260BF0: andi        $t1, $v0, 0x3
    ctx->r9 = ctx->r2 & 0X3;
    // 0x80260BF4: beq         $t1, $a0, L_80260C1C
    if (ctx->r9 == ctx->r4) {
        // 0x80260BF8: or          $a1, $zero, $zero
        ctx->r5 = 0 | 0;
            goto L_80260C1C;
    }
    // 0x80260BF8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80260BFC: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x80260C00: beq         $t1, $at, L_80260C2C
    if (ctx->r9 == ctx->r1) {
        // 0x80260C04: addiu       $a0, $zero, 0x5CB
        ctx->r4 = ADD32(0, 0X5CB);
            goto L_80260C2C;
    }
    // 0x80260C04: addiu       $a0, $zero, 0x5CB
    ctx->r4 = ADD32(0, 0X5CB);
    // 0x80260C08: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x80260C0C: beq         $t1, $at, L_80260C3C
    if (ctx->r9 == ctx->r1) {
        // 0x80260C10: addiu       $a0, $zero, 0x4ED
        ctx->r4 = ADD32(0, 0X4ED);
            goto L_80260C3C;
    }
    // 0x80260C10: addiu       $a0, $zero, 0x4ED
    ctx->r4 = ADD32(0, 0X4ED);
    // 0x80260C14: b           L_80260C4C
    // 0x80260C18: addiu       $a0, $zero, 0x402
    ctx->r4 = ADD32(0, 0X402);
        goto L_80260C4C;
    // 0x80260C18: addiu       $a0, $zero, 0x402
    ctx->r4 = ADD32(0, 0X402);
L_80260C1C:
    // 0x80260C1C: jal         0x802A14C0
    // 0x80260C20: addiu       $a0, $zero, 0x5CA
    ctx->r4 = ADD32(0, 0X5CA);
    LOOKUP_FUNC(0x802A14C0)(rdram, ctx);
        goto after_3;
    // 0x80260C20: addiu       $a0, $zero, 0x5CA
    ctx->r4 = ADD32(0, 0X5CA);
    after_3:
    // 0x80260C24: b           L_80260CC8
    // 0x80260C28: nop

        goto L_80260CC8;
    // 0x80260C28: nop

L_80260C2C:
    // 0x80260C2C: jal         0x802A14C0
    // 0x80260C30: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    LOOKUP_FUNC(0x802A14C0)(rdram, ctx);
        goto after_4;
    // 0x80260C30: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_4:
    // 0x80260C34: b           L_80260CC8
    // 0x80260C38: nop

        goto L_80260CC8;
    // 0x80260C38: nop

L_80260C3C:
    // 0x80260C3C: jal         0x802A14C0
    // 0x80260C40: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    LOOKUP_FUNC(0x802A14C0)(rdram, ctx);
        goto after_5;
    // 0x80260C40: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_5:
    // 0x80260C44: b           L_80260CC8
    // 0x80260C48: nop

        goto L_80260CC8;
    // 0x80260C48: nop

L_80260C4C:
    // 0x80260C4C: jal         0x802A14C0
    // 0x80260C50: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    LOOKUP_FUNC(0x802A14C0)(rdram, ctx);
        goto after_6;
    // 0x80260C50: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_6:
    // 0x80260C54: b           L_80260CC8
    // 0x80260C58: nop

        goto L_80260CC8;
    // 0x80260C58: nop

L_80260C5C:
    // 0x80260C5C: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x80260C60: nop

    // 0x80260C64: c.lt.s      $f16, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f16.fl < ctx->f0.fl;
    // 0x80260C68: nop

    // 0x80260C6C: bc1f        L_80260CB4
    if (!c1cs) {
        // 0x80260C70: nop
    
            goto L_80260CB4;
    }
    // 0x80260C70: nop

    // 0x80260C74: jal         0x80260AD0
    // 0x80260C78: nop

    ovl_8024B800_func_80260AD0(rdram, ctx);
        goto after_7;
    // 0x80260C78: nop

    after_7:
    // 0x80260C7C: lui         $t2, 0x8010
    ctx->r10 = S32(0X8010 << 16);
    // 0x80260C80: lhu         $t2, 0x522A($t2)
    ctx->r10 = MEM_HU(ctx->r10, 0X522A);
    // 0x80260C84: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80260C88: andi        $t3, $t2, 0x1
    ctx->r11 = ctx->r10 & 0X1;
    // 0x80260C8C: beq         $t3, $zero, L_80260CA4
    if (ctx->r11 == 0) {
        // 0x80260C90: addiu       $a0, $zero, 0x49A
        ctx->r4 = ADD32(0, 0X49A);
            goto L_80260CA4;
    }
    // 0x80260C90: addiu       $a0, $zero, 0x49A
    ctx->r4 = ADD32(0, 0X49A);
    // 0x80260C94: jal         0x802A14C0
    // 0x80260C98: addiu       $a0, $zero, 0x482
    ctx->r4 = ADD32(0, 0X482);
    LOOKUP_FUNC(0x802A14C0)(rdram, ctx);
        goto after_8;
    // 0x80260C98: addiu       $a0, $zero, 0x482
    ctx->r4 = ADD32(0, 0X482);
    after_8:
    // 0x80260C9C: b           L_80260CC8
    // 0x80260CA0: nop

        goto L_80260CC8;
    // 0x80260CA0: nop

L_80260CA4:
    // 0x80260CA4: jal         0x802A14C0
    // 0x80260CA8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    LOOKUP_FUNC(0x802A14C0)(rdram, ctx);
        goto after_9;
    // 0x80260CA8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_9:
    // 0x80260CAC: b           L_80260CC8
    // 0x80260CB0: nop

        goto L_80260CC8;
    // 0x80260CB0: nop

L_80260CB4:
    // 0x80260CB4: jal         0x80260AD0
    // 0x80260CB8: nop

    ovl_8024B800_func_80260AD0(rdram, ctx);
        goto after_10;
    // 0x80260CB8: nop

    after_10:
    // 0x80260CBC: addiu       $a0, $zero, 0x4AF
    ctx->r4 = ADD32(0, 0X4AF);
    // 0x80260CC0: jal         0x802A14C0
    // 0x80260CC4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    LOOKUP_FUNC(0x802A14C0)(rdram, ctx);
        goto after_11;
    // 0x80260CC4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_11:
L_80260CC8:
    // 0x80260CC8: lui         $v1, 0x802C
    ctx->r3 = S32(0X802C << 16);
    // 0x80260CCC: lbu         $v1, 0x3A8A($v1)
    ctx->r3 = MEM_BU(ctx->r3, 0X3A8A);
    // 0x80260CD0: b           L_80260E48
    // 0x80260CD4: addiu       $t9, $v1, 0x1
    ctx->r25 = ADD32(ctx->r3, 0X1);
        goto L_80260E48;
    // 0x80260CD4: addiu       $t9, $v1, 0x1
    ctx->r25 = ADD32(ctx->r3, 0X1);
L_80260CD8:
    // 0x80260CD8: lhu         $v0, 0x522A($v0)
    ctx->r2 = MEM_HU(ctx->r2, 0X522A);
    // 0x80260CDC: lui         $t6, 0x8009
    ctx->r14 = S32(0X8009 << 16);
    // 0x80260CE0: andi        $t4, $v0, 0x3
    ctx->r12 = ctx->r2 & 0X3;
    // 0x80260CE4: beq         $t4, $zero, L_80260D5C
    if (ctx->r12 == 0) {
        // 0x80260CE8: nop
    
            goto L_80260D5C;
    }
    // 0x80260CE8: nop

    // 0x80260CEC: beq         $t4, $a0, L_80260D14
    if (ctx->r12 == ctx->r4) {
        // 0x80260CF0: lui         $t5, 0x8009
        ctx->r13 = S32(0X8009 << 16);
            goto L_80260D14;
    }
    // 0x80260CF0: lui         $t5, 0x8009
    ctx->r13 = S32(0X8009 << 16);
    // 0x80260CF4: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x80260CF8: beq         $t4, $at, L_80260D44
    if (ctx->r12 == ctx->r1) {
        // 0x80260CFC: addiu       $a0, $zero, 0x485
        ctx->r4 = ADD32(0, 0X485);
            goto L_80260D44;
    }
    // 0x80260CFC: addiu       $a0, $zero, 0x485
    ctx->r4 = ADD32(0, 0X485);
    // 0x80260D00: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x80260D04: beq         $t4, $at, L_80260D5C
    if (ctx->r12 == ctx->r1) {
        // 0x80260D08: nop
    
            goto L_80260D5C;
    }
    // 0x80260D08: nop

    // 0x80260D0C: b           L_80260E48
    // 0x80260D10: addiu       $t9, $v1, 0x1
    ctx->r25 = ADD32(ctx->r3, 0X1);
        goto L_80260E48;
    // 0x80260D10: addiu       $t9, $v1, 0x1
    ctx->r25 = ADD32(ctx->r3, 0X1);
L_80260D14:
    // 0x80260D14: lw          $t5, 0x3B20($t5)
    ctx->r13 = MEM_W(ctx->r13, 0X3B20);
    // 0x80260D18: nop

    // 0x80260D1C: lw          $a0, 0x8C($t5)
    ctx->r4 = MEM_W(ctx->r13, 0X8C);
    // 0x80260D20: jal         0x8007A034
    // 0x80260D24: nop

    func_8007A034(rdram, ctx);
        goto after_12;
    // 0x80260D24: nop

    after_12:
    // 0x80260D28: addiu       $a0, $zero, 0x45A
    ctx->r4 = ADD32(0, 0X45A);
    // 0x80260D2C: jal         0x802A14C0
    // 0x80260D30: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    LOOKUP_FUNC(0x802A14C0)(rdram, ctx);
        goto after_13;
    // 0x80260D30: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_13:
    // 0x80260D34: lui         $v1, 0x802C
    ctx->r3 = S32(0X802C << 16);
    // 0x80260D38: lbu         $v1, 0x3A8A($v1)
    ctx->r3 = MEM_BU(ctx->r3, 0X3A8A);
    // 0x80260D3C: b           L_80260E48
    // 0x80260D40: addiu       $t9, $v1, 0x1
    ctx->r25 = ADD32(ctx->r3, 0X1);
        goto L_80260E48;
    // 0x80260D40: addiu       $t9, $v1, 0x1
    ctx->r25 = ADD32(ctx->r3, 0X1);
L_80260D44:
    // 0x80260D44: jal         0x802A14C0
    // 0x80260D48: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    LOOKUP_FUNC(0x802A14C0)(rdram, ctx);
        goto after_14;
    // 0x80260D48: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_14:
    // 0x80260D4C: lui         $v1, 0x802C
    ctx->r3 = S32(0X802C << 16);
    // 0x80260D50: lbu         $v1, 0x3A8A($v1)
    ctx->r3 = MEM_BU(ctx->r3, 0X3A8A);
    // 0x80260D54: b           L_80260E48
    // 0x80260D58: addiu       $t9, $v1, 0x1
    ctx->r25 = ADD32(ctx->r3, 0X1);
        goto L_80260E48;
    // 0x80260D58: addiu       $t9, $v1, 0x1
    ctx->r25 = ADD32(ctx->r3, 0X1);
L_80260D5C:
    // 0x80260D5C: lw          $t6, 0x3B20($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X3B20);
    // 0x80260D60: lui         $at, 0x4020
    ctx->r1 = S32(0X4020 << 16);
    // 0x80260D64: lwc1        $f4, 0xC($t6)
    ctx->f4.u32l = MEM_W(ctx->r14, 0XC);
    // 0x80260D68: mtc1        $at, $f19
    ctx->f_odd[(19 - 1) * 2] = ctx->r1;
    // 0x80260D6C: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x80260D70: cvt.d.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.d = CVT_D_S(ctx->f4.fl);
    // 0x80260D74: c.lt.d      $f18, $f6
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f18.d < ctx->f6.d;
    // 0x80260D78: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80260D7C: bc1f        L_80260D94
    if (!c1cs) {
        // 0x80260D80: addiu       $a0, $zero, 0x484
        ctx->r4 = ADD32(0, 0X484);
            goto L_80260D94;
    }
    // 0x80260D80: addiu       $a0, $zero, 0x484
    ctx->r4 = ADD32(0, 0X484);
    // 0x80260D84: jal         0x802A14C0
    // 0x80260D88: addiu       $a0, $zero, 0x4D6
    ctx->r4 = ADD32(0, 0X4D6);
    LOOKUP_FUNC(0x802A14C0)(rdram, ctx);
        goto after_15;
    // 0x80260D88: addiu       $a0, $zero, 0x4D6
    ctx->r4 = ADD32(0, 0X4D6);
    after_15:
    // 0x80260D8C: b           L_80260D9C
    // 0x80260D90: nop

        goto L_80260D9C;
    // 0x80260D90: nop

L_80260D94:
    // 0x80260D94: jal         0x802A14C0
    // 0x80260D98: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    LOOKUP_FUNC(0x802A14C0)(rdram, ctx);
        goto after_16;
    // 0x80260D98: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_16:
L_80260D9C:
    // 0x80260D9C: lui         $v1, 0x802C
    ctx->r3 = S32(0X802C << 16);
    // 0x80260DA0: lbu         $v1, 0x3A8A($v1)
    ctx->r3 = MEM_BU(ctx->r3, 0X3A8A);
    // 0x80260DA4: b           L_80260E48
    // 0x80260DA8: addiu       $t9, $v1, 0x1
    ctx->r25 = ADD32(ctx->r3, 0X1);
        goto L_80260E48;
    // 0x80260DA8: addiu       $t9, $v1, 0x1
    ctx->r25 = ADD32(ctx->r3, 0X1);
L_80260DAC:
    // 0x80260DAC: lhu         $v0, 0x522A($v0)
    ctx->r2 = MEM_HU(ctx->r2, 0X522A);
    // 0x80260DB0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80260DB4: andi        $t7, $v0, 0x3
    ctx->r15 = ctx->r2 & 0X3;
    // 0x80260DB8: beq         $t7, $zero, L_80260DE4
    if (ctx->r15 == 0) {
        // 0x80260DBC: nop
    
            goto L_80260DE4;
    }
    // 0x80260DBC: nop

    // 0x80260DC0: beq         $t7, $a0, L_80260DFC
    if (ctx->r15 == ctx->r4) {
        // 0x80260DC4: addiu       $at, $zero, 0x2
        ctx->r1 = ADD32(0, 0X2);
            goto L_80260DFC;
    }
    // 0x80260DC4: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x80260DC8: beq         $t7, $at, L_80260E18
    if (ctx->r15 == ctx->r1) {
        // 0x80260DCC: lui         $t8, 0x8009
        ctx->r24 = S32(0X8009 << 16);
            goto L_80260E18;
    }
    // 0x80260DCC: lui         $t8, 0x8009
    ctx->r24 = S32(0X8009 << 16);
    // 0x80260DD0: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x80260DD4: beq         $t7, $at, L_80260E00
    if (ctx->r15 == ctx->r1) {
        // 0x80260DD8: addiu       $a0, $zero, 0x484
        ctx->r4 = ADD32(0, 0X484);
            goto L_80260E00;
    }
    // 0x80260DD8: addiu       $a0, $zero, 0x484
    ctx->r4 = ADD32(0, 0X484);
    // 0x80260DDC: b           L_80260E48
    // 0x80260DE0: addiu       $t9, $v1, 0x1
    ctx->r25 = ADD32(ctx->r3, 0X1);
        goto L_80260E48;
    // 0x80260DE0: addiu       $t9, $v1, 0x1
    ctx->r25 = ADD32(ctx->r3, 0X1);
L_80260DE4:
    // 0x80260DE4: jal         0x802A14C0
    // 0x80260DE8: addiu       $a0, $zero, 0x485
    ctx->r4 = ADD32(0, 0X485);
    LOOKUP_FUNC(0x802A14C0)(rdram, ctx);
        goto after_17;
    // 0x80260DE8: addiu       $a0, $zero, 0x485
    ctx->r4 = ADD32(0, 0X485);
    after_17:
    // 0x80260DEC: lui         $v1, 0x802C
    ctx->r3 = S32(0X802C << 16);
    // 0x80260DF0: lbu         $v1, 0x3A8A($v1)
    ctx->r3 = MEM_BU(ctx->r3, 0X3A8A);
    // 0x80260DF4: b           L_80260E48
    // 0x80260DF8: addiu       $t9, $v1, 0x1
    ctx->r25 = ADD32(ctx->r3, 0X1);
        goto L_80260E48;
    // 0x80260DF8: addiu       $t9, $v1, 0x1
    ctx->r25 = ADD32(ctx->r3, 0X1);
L_80260DFC:
    // 0x80260DFC: addiu       $a0, $zero, 0x484
    ctx->r4 = ADD32(0, 0X484);
L_80260E00:
    // 0x80260E00: jal         0x802A14C0
    // 0x80260E04: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    LOOKUP_FUNC(0x802A14C0)(rdram, ctx);
        goto after_18;
    // 0x80260E04: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_18:
    // 0x80260E08: lui         $v1, 0x802C
    ctx->r3 = S32(0X802C << 16);
    // 0x80260E0C: lbu         $v1, 0x3A8A($v1)
    ctx->r3 = MEM_BU(ctx->r3, 0X3A8A);
    // 0x80260E10: b           L_80260E48
    // 0x80260E14: addiu       $t9, $v1, 0x1
    ctx->r25 = ADD32(ctx->r3, 0X1);
        goto L_80260E48;
    // 0x80260E14: addiu       $t9, $v1, 0x1
    ctx->r25 = ADD32(ctx->r3, 0X1);
L_80260E18:
    // 0x80260E18: lw          $t8, 0x3B20($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X3B20);
    // 0x80260E1C: nop

    // 0x80260E20: lw          $a0, 0x8C($t8)
    ctx->r4 = MEM_W(ctx->r24, 0X8C);
    // 0x80260E24: jal         0x8007A034
    // 0x80260E28: nop

    func_8007A034(rdram, ctx);
        goto after_19;
    // 0x80260E28: nop

    after_19:
    // 0x80260E2C: addiu       $a0, $zero, 0x45A
    ctx->r4 = ADD32(0, 0X45A);
    // 0x80260E30: jal         0x802A14C0
    // 0x80260E34: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    LOOKUP_FUNC(0x802A14C0)(rdram, ctx);
        goto after_20;
    // 0x80260E34: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_20:
    // 0x80260E38: lui         $v1, 0x802C
    ctx->r3 = S32(0X802C << 16);
    // 0x80260E3C: lbu         $v1, 0x3A8A($v1)
    ctx->r3 = MEM_BU(ctx->r3, 0X3A8A);
    // 0x80260E40: nop

    // 0x80260E44: addiu       $t9, $v1, 0x1
    ctx->r25 = ADD32(ctx->r3, 0X1);
L_80260E48:
    // 0x80260E48: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x80260E4C: sb          $t9, 0x3A8A($at)
    MEM_B(0X3A8A, ctx->r1) = ctx->r25;
    // 0x80260E50: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x80260E54: addiu       $t0, $zero, 0x64
    ctx->r8 = ADD32(0, 0X64);
    // 0x80260E58: sb          $t0, 0x3A8B($at)
    MEM_B(0X3A8B, ctx->r1) = ctx->r8;
L_80260E5C:
    // 0x80260E5C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80260E60: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80260E64: jr          $ra
    // 0x80260E68: nop

    return;
    // 0x80260E68: nop

;}
RECOMP_FUNC void ovl_8024B800_func_80260E6C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80260E6C: lui         $t6, 0x802C
    ctx->r14 = S32(0X802C << 16);
    // 0x80260E70: lbu         $t6, 0x3A92($t6)
    ctx->r14 = MEM_BU(ctx->r14, 0X3A92);
    // 0x80260E74: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80260E78: bne         $t6, $zero, L_80260E88
    if (ctx->r14 != 0) {
        // 0x80260E7C: sw          $ra, 0x14($sp)
        MEM_W(0X14, ctx->r29) = ctx->r31;
            goto L_80260E88;
    }
    // 0x80260E7C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80260E80: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x80260E84: sb          $zero, 0x3A93($at)
    MEM_B(0X3A93, ctx->r1) = 0;
L_80260E88:
    // 0x80260E88: jal         0x8007840C
    // 0x80260E8C: nop

    func_8007840C(rdram, ctx);
        goto after_0;
    // 0x80260E8C: nop

    after_0:
    // 0x80260E90: lui         $v1, 0x802C
    ctx->r3 = S32(0X802C << 16);
    // 0x80260E94: lbu         $v1, 0x3A93($v1)
    ctx->r3 = MEM_BU(ctx->r3, 0X3A93);
    // 0x80260E98: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80260E9C: beq         $v1, $zero, L_80260EB4
    if (ctx->r3 == 0) {
        // 0x80260EA0: or          $v0, $v1, $zero
        ctx->r2 = ctx->r3 | 0;
            goto L_80260EB4;
    }
    // 0x80260EA0: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    // 0x80260EA4: beq         $v0, $at, L_80260F0C
    if (ctx->r2 == ctx->r1) {
        // 0x80260EA8: addiu       $a0, $zero, 0x5BB
        ctx->r4 = ADD32(0, 0X5BB);
            goto L_80260F0C;
    }
    // 0x80260EA8: addiu       $a0, $zero, 0x5BB
    ctx->r4 = ADD32(0, 0X5BB);
    // 0x80260EAC: b           L_80260F24
    // 0x80260EB0: addiu       $a0, $zero, 0x5BC
    ctx->r4 = ADD32(0, 0X5BC);
        goto L_80260F24;
    // 0x80260EB0: addiu       $a0, $zero, 0x5BC
    ctx->r4 = ADD32(0, 0X5BC);
L_80260EB4:
    // 0x80260EB4: lui         $v0, 0x8010
    ctx->r2 = S32(0X8010 << 16);
    // 0x80260EB8: lhu         $v0, 0x522A($v0)
    ctx->r2 = MEM_HU(ctx->r2, 0X522A);
    // 0x80260EBC: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80260EC0: andi        $t7, $v0, 0x1
    ctx->r15 = ctx->r2 & 0X1;
    // 0x80260EC4: beq         $t7, $zero, L_80260EDC
    if (ctx->r15 == 0) {
        // 0x80260EC8: addiu       $a0, $zero, 0x424
        ctx->r4 = ADD32(0, 0X424);
            goto L_80260EDC;
    }
    // 0x80260EC8: addiu       $a0, $zero, 0x424
    ctx->r4 = ADD32(0, 0X424);
    // 0x80260ECC: beq         $t7, $at, L_80260EF4
    if (ctx->r15 == ctx->r1) {
        // 0x80260ED0: addiu       $a0, $zero, 0x568
        ctx->r4 = ADD32(0, 0X568);
            goto L_80260EF4;
    }
    // 0x80260ED0: addiu       $a0, $zero, 0x568
    ctx->r4 = ADD32(0, 0X568);
    // 0x80260ED4: b           L_80260F3C
    // 0x80260ED8: addiu       $t8, $v1, 0x1
    ctx->r24 = ADD32(ctx->r3, 0X1);
        goto L_80260F3C;
    // 0x80260ED8: addiu       $t8, $v1, 0x1
    ctx->r24 = ADD32(ctx->r3, 0X1);
L_80260EDC:
    // 0x80260EDC: jal         0x802A14C0
    // 0x80260EE0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    LOOKUP_FUNC(0x802A14C0)(rdram, ctx);
        goto after_1;
    // 0x80260EE0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_1:
    // 0x80260EE4: lui         $v1, 0x802C
    ctx->r3 = S32(0X802C << 16);
    // 0x80260EE8: lbu         $v1, 0x3A93($v1)
    ctx->r3 = MEM_BU(ctx->r3, 0X3A93);
    // 0x80260EEC: b           L_80260F3C
    // 0x80260EF0: addiu       $t8, $v1, 0x1
    ctx->r24 = ADD32(ctx->r3, 0X1);
        goto L_80260F3C;
    // 0x80260EF0: addiu       $t8, $v1, 0x1
    ctx->r24 = ADD32(ctx->r3, 0X1);
L_80260EF4:
    // 0x80260EF4: jal         0x802A14C0
    // 0x80260EF8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    LOOKUP_FUNC(0x802A14C0)(rdram, ctx);
        goto after_2;
    // 0x80260EF8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_2:
    // 0x80260EFC: lui         $v1, 0x802C
    ctx->r3 = S32(0X802C << 16);
    // 0x80260F00: lbu         $v1, 0x3A93($v1)
    ctx->r3 = MEM_BU(ctx->r3, 0X3A93);
    // 0x80260F04: b           L_80260F3C
    // 0x80260F08: addiu       $t8, $v1, 0x1
    ctx->r24 = ADD32(ctx->r3, 0X1);
        goto L_80260F3C;
    // 0x80260F08: addiu       $t8, $v1, 0x1
    ctx->r24 = ADD32(ctx->r3, 0X1);
L_80260F0C:
    // 0x80260F0C: jal         0x802A14C0
    // 0x80260F10: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    LOOKUP_FUNC(0x802A14C0)(rdram, ctx);
        goto after_3;
    // 0x80260F10: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_3:
    // 0x80260F14: lui         $v1, 0x802C
    ctx->r3 = S32(0X802C << 16);
    // 0x80260F18: lbu         $v1, 0x3A93($v1)
    ctx->r3 = MEM_BU(ctx->r3, 0X3A93);
    // 0x80260F1C: b           L_80260F3C
    // 0x80260F20: addiu       $t8, $v1, 0x1
    ctx->r24 = ADD32(ctx->r3, 0X1);
        goto L_80260F3C;
    // 0x80260F20: addiu       $t8, $v1, 0x1
    ctx->r24 = ADD32(ctx->r3, 0X1);
L_80260F24:
    // 0x80260F24: jal         0x802A14C0
    // 0x80260F28: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    LOOKUP_FUNC(0x802A14C0)(rdram, ctx);
        goto after_4;
    // 0x80260F28: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_4:
    // 0x80260F2C: lui         $v1, 0x802C
    ctx->r3 = S32(0X802C << 16);
    // 0x80260F30: lbu         $v1, 0x3A93($v1)
    ctx->r3 = MEM_BU(ctx->r3, 0X3A93);
    // 0x80260F34: nop

    // 0x80260F38: addiu       $t8, $v1, 0x1
    ctx->r24 = ADD32(ctx->r3, 0X1);
L_80260F3C:
    // 0x80260F3C: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x80260F40: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80260F44: sb          $t8, 0x3A93($at)
    MEM_B(0X3A93, ctx->r1) = ctx->r24;
    // 0x80260F48: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x80260F4C: addiu       $t9, $zero, 0x7D
    ctx->r25 = ADD32(0, 0X7D);
    // 0x80260F50: sb          $t9, 0x3A92($at)
    MEM_B(0X3A92, ctx->r1) = ctx->r25;
    // 0x80260F54: jr          $ra
    // 0x80260F58: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x80260F58: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void ovl_8024B800_func_80260F5C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80260F5C: lui         $t6, 0x802C
    ctx->r14 = S32(0X802C << 16);
    // 0x80260F60: lbu         $t6, 0x3A92($t6)
    ctx->r14 = MEM_BU(ctx->r14, 0X3A92);
    // 0x80260F64: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80260F68: bne         $t6, $zero, L_80260F78
    if (ctx->r14 != 0) {
        // 0x80260F6C: sw          $ra, 0x14($sp)
        MEM_W(0X14, ctx->r29) = ctx->r31;
            goto L_80260F78;
    }
    // 0x80260F6C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80260F70: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x80260F74: sb          $zero, 0x3A93($at)
    MEM_B(0X3A93, ctx->r1) = 0;
L_80260F78:
    // 0x80260F78: lui         $v0, 0x802C
    ctx->r2 = S32(0X802C << 16);
    // 0x80260F7C: lbu         $v0, 0x3A93($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X3A93);
    // 0x80260F80: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80260F84: beq         $v0, $zero, L_80260F9C
    if (ctx->r2 == 0) {
        // 0x80260F88: lui         $t7, 0x8010
        ctx->r15 = S32(0X8010 << 16);
            goto L_80260F9C;
    }
    // 0x80260F88: lui         $t7, 0x8010
    ctx->r15 = S32(0X8010 << 16);
    // 0x80260F8C: beq         $v0, $at, L_80260FD0
    if (ctx->r2 == ctx->r1) {
        // 0x80260F90: addiu       $a0, $zero, 0x5BB
        ctx->r4 = ADD32(0, 0X5BB);
            goto L_80260FD0;
    }
    // 0x80260F90: addiu       $a0, $zero, 0x5BB
    ctx->r4 = ADD32(0, 0X5BB);
    // 0x80260F94: b           L_80260FE0
    // 0x80260F98: addiu       $a0, $zero, 0x5BC
    ctx->r4 = ADD32(0, 0X5BC);
        goto L_80260FE0;
    // 0x80260F98: addiu       $a0, $zero, 0x5BC
    ctx->r4 = ADD32(0, 0X5BC);
L_80260F9C:
    // 0x80260F9C: lhu         $t7, 0x522A($t7)
    ctx->r15 = MEM_HU(ctx->r15, 0X522A);
    // 0x80260FA0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80260FA4: andi        $t8, $t7, 0x1
    ctx->r24 = ctx->r15 & 0X1;
    // 0x80260FA8: beq         $t8, $zero, L_80260FC0
    if (ctx->r24 == 0) {
        // 0x80260FAC: addiu       $a0, $zero, 0x4FD
        ctx->r4 = ADD32(0, 0X4FD);
            goto L_80260FC0;
    }
    // 0x80260FAC: addiu       $a0, $zero, 0x4FD
    ctx->r4 = ADD32(0, 0X4FD);
    // 0x80260FB0: jal         0x802A14C0
    // 0x80260FB4: addiu       $a0, $zero, 0x423
    ctx->r4 = ADD32(0, 0X423);
    LOOKUP_FUNC(0x802A14C0)(rdram, ctx);
        goto after_0;
    // 0x80260FB4: addiu       $a0, $zero, 0x423
    ctx->r4 = ADD32(0, 0X423);
    after_0:
    // 0x80260FB8: b           L_80260FE8
    // 0x80260FBC: nop

        goto L_80260FE8;
    // 0x80260FBC: nop

L_80260FC0:
    // 0x80260FC0: jal         0x802A14C0
    // 0x80260FC4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    LOOKUP_FUNC(0x802A14C0)(rdram, ctx);
        goto after_1;
    // 0x80260FC4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_1:
    // 0x80260FC8: b           L_80260FE8
    // 0x80260FCC: nop

        goto L_80260FE8;
    // 0x80260FCC: nop

L_80260FD0:
    // 0x80260FD0: jal         0x802A14C0
    // 0x80260FD4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    LOOKUP_FUNC(0x802A14C0)(rdram, ctx);
        goto after_2;
    // 0x80260FD4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_2:
    // 0x80260FD8: b           L_80260FE8
    // 0x80260FDC: nop

        goto L_80260FE8;
    // 0x80260FDC: nop

L_80260FE0:
    // 0x80260FE0: jal         0x802A14C0
    // 0x80260FE4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    LOOKUP_FUNC(0x802A14C0)(rdram, ctx);
        goto after_3;
    // 0x80260FE4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_3:
L_80260FE8:
    // 0x80260FE8: lui         $t9, 0x802C
    ctx->r25 = S32(0X802C << 16);
    // 0x80260FEC: lbu         $t9, 0x3A93($t9)
    ctx->r25 = MEM_BU(ctx->r25, 0X3A93);
    // 0x80260FF0: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x80260FF4: addiu       $t0, $t9, 0x1
    ctx->r8 = ADD32(ctx->r25, 0X1);
    // 0x80260FF8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80260FFC: sb          $t0, 0x3A93($at)
    MEM_B(0X3A93, ctx->r1) = ctx->r8;
    // 0x80261000: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x80261004: addiu       $t1, $zero, 0x7D
    ctx->r9 = ADD32(0, 0X7D);
    // 0x80261008: sb          $t1, 0x3A92($at)
    MEM_B(0X3A92, ctx->r1) = ctx->r9;
    // 0x8026100C: jr          $ra
    // 0x80261010: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x80261010: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void ovl_8024B800_func_80261014(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80261014: lui         $t6, 0x802C
    ctx->r14 = S32(0X802C << 16);
    // 0x80261018: lbu         $t6, 0x3A92($t6)
    ctx->r14 = MEM_BU(ctx->r14, 0X3A92);
    // 0x8026101C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80261020: bne         $t6, $zero, L_80261030
    if (ctx->r14 != 0) {
        // 0x80261024: sw          $ra, 0x14($sp)
        MEM_W(0X14, ctx->r29) = ctx->r31;
            goto L_80261030;
    }
    // 0x80261024: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80261028: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x8026102C: sb          $zero, 0x3A93($at)
    MEM_B(0X3A93, ctx->r1) = 0;
L_80261030:
    // 0x80261030: jal         0x8007840C
    // 0x80261034: nop

    func_8007840C(rdram, ctx);
        goto after_0;
    // 0x80261034: nop

    after_0:
    // 0x80261038: lui         $v0, 0x802C
    ctx->r2 = S32(0X802C << 16);
    // 0x8026103C: lbu         $v0, 0x3A93($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X3A93);
    // 0x80261040: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80261044: beq         $v0, $zero, L_8026105C
    if (ctx->r2 == 0) {
        // 0x80261048: addiu       $a0, $zero, 0x561
        ctx->r4 = ADD32(0, 0X561);
            goto L_8026105C;
    }
    // 0x80261048: addiu       $a0, $zero, 0x561
    ctx->r4 = ADD32(0, 0X561);
    // 0x8026104C: beq         $v0, $at, L_8026106C
    if (ctx->r2 == ctx->r1) {
        // 0x80261050: addiu       $a0, $zero, 0x5BB
        ctx->r4 = ADD32(0, 0X5BB);
            goto L_8026106C;
    }
    // 0x80261050: addiu       $a0, $zero, 0x5BB
    ctx->r4 = ADD32(0, 0X5BB);
    // 0x80261054: b           L_8026107C
    // 0x80261058: addiu       $a0, $zero, 0x5BC
    ctx->r4 = ADD32(0, 0X5BC);
        goto L_8026107C;
    // 0x80261058: addiu       $a0, $zero, 0x5BC
    ctx->r4 = ADD32(0, 0X5BC);
L_8026105C:
    // 0x8026105C: jal         0x802A14C0
    // 0x80261060: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    LOOKUP_FUNC(0x802A14C0)(rdram, ctx);
        goto after_1;
    // 0x80261060: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_1:
    // 0x80261064: b           L_80261084
    // 0x80261068: nop

        goto L_80261084;
    // 0x80261068: nop

L_8026106C:
    // 0x8026106C: jal         0x802A14C0
    // 0x80261070: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    LOOKUP_FUNC(0x802A14C0)(rdram, ctx);
        goto after_2;
    // 0x80261070: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_2:
    // 0x80261074: b           L_80261084
    // 0x80261078: nop

        goto L_80261084;
    // 0x80261078: nop

L_8026107C:
    // 0x8026107C: jal         0x802A14C0
    // 0x80261080: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    LOOKUP_FUNC(0x802A14C0)(rdram, ctx);
        goto after_3;
    // 0x80261080: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_3:
L_80261084:
    // 0x80261084: lui         $t7, 0x802C
    ctx->r15 = S32(0X802C << 16);
    // 0x80261088: lbu         $t7, 0x3A93($t7)
    ctx->r15 = MEM_BU(ctx->r15, 0X3A93);
    // 0x8026108C: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x80261090: addiu       $t8, $t7, 0x1
    ctx->r24 = ADD32(ctx->r15, 0X1);
    // 0x80261094: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80261098: sb          $t8, 0x3A93($at)
    MEM_B(0X3A93, ctx->r1) = ctx->r24;
    // 0x8026109C: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x802610A0: addiu       $t9, $zero, 0x7D
    ctx->r25 = ADD32(0, 0X7D);
    // 0x802610A4: sb          $t9, 0x3A92($at)
    MEM_B(0X3A92, ctx->r1) = ctx->r25;
    // 0x802610A8: jr          $ra
    // 0x802610AC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x802610AC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void ovl_8024B800_func_802610B0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802610B0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802610B4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802610B8: jal         0x8007840C
    // 0x802610BC: nop

    func_8007840C(rdram, ctx);
        goto after_0;
    // 0x802610BC: nop

    after_0:
    // 0x802610C0: lui         $v0, 0x8010
    ctx->r2 = S32(0X8010 << 16);
    // 0x802610C4: lhu         $v0, 0x522A($v0)
    ctx->r2 = MEM_HU(ctx->r2, 0X522A);
    // 0x802610C8: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x802610CC: andi        $t6, $v0, 0x1
    ctx->r14 = ctx->r2 & 0X1;
    // 0x802610D0: beq         $t6, $zero, L_802610E8
    if (ctx->r14 == 0) {
        // 0x802610D4: addiu       $a0, $zero, 0x572
        ctx->r4 = ADD32(0, 0X572);
            goto L_802610E8;
    }
    // 0x802610D4: addiu       $a0, $zero, 0x572
    ctx->r4 = ADD32(0, 0X572);
    // 0x802610D8: beq         $t6, $at, L_802610F8
    if (ctx->r14 == ctx->r1) {
        // 0x802610DC: addiu       $a0, $zero, 0x569
        ctx->r4 = ADD32(0, 0X569);
            goto L_802610F8;
    }
    // 0x802610DC: addiu       $a0, $zero, 0x569
    ctx->r4 = ADD32(0, 0X569);
    // 0x802610E0: b           L_80261104
    // 0x802610E4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80261104;
    // 0x802610E4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_802610E8:
    // 0x802610E8: jal         0x802A14C0
    // 0x802610EC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    LOOKUP_FUNC(0x802A14C0)(rdram, ctx);
        goto after_1;
    // 0x802610EC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_1:
    // 0x802610F0: b           L_80261104
    // 0x802610F4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80261104;
    // 0x802610F4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_802610F8:
    // 0x802610F8: jal         0x802A14C0
    // 0x802610FC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    LOOKUP_FUNC(0x802A14C0)(rdram, ctx);
        goto after_2;
    // 0x802610FC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_2:
    // 0x80261100: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80261104:
    // 0x80261104: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80261108: jr          $ra
    // 0x8026110C: nop

    return;
    // 0x8026110C: nop

;}
RECOMP_FUNC void ovl_8024B800_func_80261110(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80261110: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80261114: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80261118: jal         0x8007840C
    // 0x8026111C: nop

    func_8007840C(rdram, ctx);
        goto after_0;
    // 0x8026111C: nop

    after_0:
    // 0x80261120: addiu       $a0, $zero, 0x431
    ctx->r4 = ADD32(0, 0X431);
    // 0x80261124: jal         0x802A14C0
    // 0x80261128: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    LOOKUP_FUNC(0x802A14C0)(rdram, ctx);
        goto after_1;
    // 0x80261128: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_1:
    // 0x8026112C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80261130: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80261134: jr          $ra
    // 0x80261138: nop

    return;
    // 0x80261138: nop

;}
RECOMP_FUNC void ovl_8024B800_func_8026113C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8026113C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80261140: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80261144: jal         0x8007840C
    // 0x80261148: nop

    func_8007840C(rdram, ctx);
        goto after_0;
    // 0x80261148: nop

    after_0:
    // 0x8026114C: addiu       $a0, $zero, 0x4C8
    ctx->r4 = ADD32(0, 0X4C8);
    // 0x80261150: jal         0x802A14C0
    // 0x80261154: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    LOOKUP_FUNC(0x802A14C0)(rdram, ctx);
        goto after_1;
    // 0x80261154: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_1:
    // 0x80261158: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8026115C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80261160: jr          $ra
    // 0x80261164: nop

    return;
    // 0x80261164: nop

;}
RECOMP_FUNC void ovl_8024B800_func_80261168(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80261168: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8026116C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80261170: jal         0x8007840C
    // 0x80261174: nop

    func_8007840C(rdram, ctx);
        goto after_0;
    // 0x80261174: nop

    after_0:
    // 0x80261178: addiu       $a0, $zero, 0x41D
    ctx->r4 = ADD32(0, 0X41D);
    // 0x8026117C: jal         0x802A14C0
    // 0x80261180: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    LOOKUP_FUNC(0x802A14C0)(rdram, ctx);
        goto after_1;
    // 0x80261180: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_1:
    // 0x80261184: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80261188: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8026118C: jr          $ra
    // 0x80261190: nop

    return;
    // 0x80261190: nop

;}
RECOMP_FUNC void ovl_8024B800_func_80261194(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80261194: lui         $t6, 0x8009
    ctx->r14 = S32(0X8009 << 16);
    // 0x80261198: lw          $t6, 0x3B20($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X3B20);
    // 0x8026119C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802611A0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802611A4: lui         $at, 0x4348
    ctx->r1 = S32(0X4348 << 16);
    // 0x802611A8: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x802611AC: lwc1        $f0, 0x8($t6)
    ctx->f0.u32l = MEM_W(ctx->r14, 0X8);
    // 0x802611B0: lui         $at, 0xC348
    ctx->r1 = S32(0XC348 << 16);
    // 0x802611B4: c.lt.s      $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f4.fl < ctx->f0.fl;
    // 0x802611B8: nop

    // 0x802611BC: bc1t        L_802611DC
    if (c1cs) {
        // 0x802611C0: nop
    
            goto L_802611DC;
    }
    // 0x802611C0: nop

    // 0x802611C4: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x802611C8: nop

    // 0x802611CC: c.lt.s      $f0, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f0.fl < ctx->f6.fl;
    // 0x802611D0: nop

    // 0x802611D4: bc1f        L_802611F4
    if (!c1cs) {
        // 0x802611D8: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_802611F4;
    }
    // 0x802611D8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_802611DC:
    // 0x802611DC: jal         0x8007840C
    // 0x802611E0: nop

    func_8007840C(rdram, ctx);
        goto after_0;
    // 0x802611E0: nop

    after_0:
    // 0x802611E4: addiu       $a0, $zero, 0x578
    ctx->r4 = ADD32(0, 0X578);
    // 0x802611E8: jal         0x802A14C0
    // 0x802611EC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    LOOKUP_FUNC(0x802A14C0)(rdram, ctx);
        goto after_1;
    // 0x802611EC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_1:
    // 0x802611F0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_802611F4:
    // 0x802611F4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x802611F8: jr          $ra
    // 0x802611FC: nop

    return;
    // 0x802611FC: nop

;}
RECOMP_FUNC void ovl_8024B800_func_80261200(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80261200: jr          $ra
    // 0x80261204: nop

    return;
    // 0x80261204: nop

;}
RECOMP_FUNC void ovl_8024B800_func_80261208(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80261208: jr          $ra
    // 0x8026120C: nop

    return;
    // 0x8026120C: nop

;}
