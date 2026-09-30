#include "iss64_recomp.h"
#include "funcs.h"

RECOMP_FUNC void func_8006A344(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8006A344: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x8006A348: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8006A34C: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8006A350: jal         0x80272C74
    // 0x8006A354: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    LOOKUP_FUNC(0x80272C74)(rdram, ctx);
        goto after_0;
    // 0x8006A354: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    after_0:
    // 0x8006A358: sw          $v0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r2;
    // 0x8006A35C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8006A360: jal         0x80274CFC
    // 0x8006A364: addiu       $a1, $zero, 0x96
    ctx->r5 = ADD32(0, 0X96);
    LOOKUP_FUNC(0x80274CFC)(rdram, ctx);
        goto after_1;
    // 0x8006A364: addiu       $a1, $zero, 0x96
    ctx->r5 = ADD32(0, 0X96);
    after_1:
    // 0x8006A368: lhu         $v1, 0x10($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X10);
    // 0x8006A36C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8006A370: beq         $v1, $zero, L_8006A394
    if (ctx->r3 == 0) {
        // 0x8006A374: or          $v0, $v1, $zero
        ctx->r2 = ctx->r3 | 0;
            goto L_8006A394;
    }
    // 0x8006A374: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    // 0x8006A378: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8006A37C: beq         $v0, $at, L_8006A4E0
    if (ctx->r2 == ctx->r1) {
        // 0x8006A380: addiu       $at, $zero, 0x2
        ctx->r1 = ADD32(0, 0X2);
            goto L_8006A4E0;
    }
    // 0x8006A380: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x8006A384: beq         $v0, $at, L_8006A644
    if (ctx->r2 == ctx->r1) {
        // 0x8006A388: lw          $t9, 0x38($sp)
        ctx->r25 = MEM_W(ctx->r29, 0X38);
            goto L_8006A644;
    }
    // 0x8006A388: lw          $t9, 0x38($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X38);
    // 0x8006A38C: b           L_8006A67C
    // 0x8006A390: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_8006A67C;
    // 0x8006A390: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_8006A394:
    // 0x8006A394: addiu       $t6, $v1, 0x1
    ctx->r14 = ADD32(ctx->r3, 0X1);
    // 0x8006A398: jal         0x802732F4
    // 0x8006A39C: sh          $t6, 0x10($s0)
    MEM_H(0X10, ctx->r16) = ctx->r14;
    LOOKUP_FUNC(0x802732F4)(rdram, ctx);
        goto after_2;
    // 0x8006A39C: sh          $t6, 0x10($s0)
    MEM_H(0X10, ctx->r16) = ctx->r14;
    after_2:
    // 0x8006A3A0: lh          $v0, 0xE4($s0)
    ctx->r2 = MEM_H(ctx->r16, 0XE4);
    // 0x8006A3A4: nop

    // 0x8006A3A8: slti        $at, $v0, 0x4
    ctx->r1 = SIGNED(ctx->r2) < 0X4 ? 1 : 0;
    // 0x8006A3AC: bne         $at, $zero, L_8006A474
    if (ctx->r1 != 0) {
        // 0x8006A3B0: sll         $t0, $v0, 1
        ctx->r8 = S32(ctx->r2 << 1);
            goto L_8006A474;
    }
    // 0x8006A3B0: sll         $t0, $v0, 1
    ctx->r8 = S32(ctx->r2 << 1);
    // 0x8006A3B4: jal         0x80067B2C
    // 0x8006A3B8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80067B2C(rdram, ctx);
        goto after_3;
    // 0x8006A3B8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_3:
    // 0x8006A3BC: bgez        $v0, L_8006A3C8
    if (SIGNED(ctx->r2) >= 0) {
        // 0x8006A3C0: or          $v1, $v0, $zero
        ctx->r3 = ctx->r2 | 0;
            goto L_8006A3C8;
    }
    // 0x8006A3C0: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
    // 0x8006A3C4: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
L_8006A3C8:
    // 0x8006A3C8: sll         $t7, $v1, 2
    ctx->r15 = S32(ctx->r3 << 2);
    // 0x8006A3CC: subu        $t7, $t7, $v1
    ctx->r15 = SUB32(ctx->r15, ctx->r3);
    // 0x8006A3D0: lui         $t8, 0x8012
    ctx->r24 = S32(0X8012 << 16);
    // 0x8006A3D4: addiu       $t8, $t8, 0x680
    ctx->r24 = ADD32(ctx->r24, 0X680);
    // 0x8006A3D8: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8006A3DC: addu        $v0, $t7, $t8
    ctx->r2 = ADD32(ctx->r15, ctx->r24);
    // 0x8006A3E0: lw          $a1, 0x8($v0)
    ctx->r5 = MEM_W(ctx->r2, 0X8);
    // 0x8006A3E4: lw          $a2, 0x0($v0)
    ctx->r6 = MEM_W(ctx->r2, 0X0);
    // 0x8006A3E8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8006A3EC: jal         0x80272B98
    // 0x8006A3F0: addiu       $a3, $sp, 0x3C
    ctx->r7 = ADD32(ctx->r29, 0X3C);
    LOOKUP_FUNC(0x80272B98)(rdram, ctx);
        goto after_4;
    // 0x8006A3F0: addiu       $a3, $sp, 0x3C
    ctx->r7 = ADD32(ctx->r29, 0X3C);
    after_4:
    // 0x8006A3F4: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x8006A3F8: lwc1        $f4, 0x88($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X88);
    // 0x8006A3FC: lwc1        $f9, -0x5908($at)
    ctx->f_odd[(9 - 1) * 2] = MEM_W(ctx->r1, -0X5908);
    // 0x8006A400: lwc1        $f8, -0x5904($at)
    ctx->f8.u32l = MEM_W(ctx->r1, -0X5904);
    // 0x8006A404: cvt.d.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.d = CVT_D_S(ctx->f4.fl);
    // 0x8006A408: add.d       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f8.d); 
    ctx->f10.d = ctx->f6.d + ctx->f8.d;
    // 0x8006A40C: lwc1        $f14, 0x3C($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x8006A410: jal         0x8027924C
    // 0x8006A414: cvt.s.d     $f12, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f12.fl = CVT_S_D(ctx->f10.d);
    LOOKUP_FUNC(0x8027924C)(rdram, ctx);
        goto after_5;
    // 0x8006A414: cvt.s.d     $f12, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f12.fl = CVT_S_D(ctx->f10.d);
    after_5:
    // 0x8006A418: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x8006A41C: nop

    // 0x8006A420: c.lt.s      $f16, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f16.fl < ctx->f0.fl;
    // 0x8006A424: nop

    // 0x8006A428: bc1f        L_8006A438
    if (!c1cs) {
        // 0x8006A42C: nop
    
            goto L_8006A438;
    }
    // 0x8006A42C: nop

    // 0x8006A430: jal         0x802732D0
    // 0x8006A434: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    LOOKUP_FUNC(0x802732D0)(rdram, ctx);
        goto after_6;
    // 0x8006A434: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_6:
L_8006A438:
    // 0x8006A438: lh          $v0, 0xE4($s0)
    ctx->r2 = MEM_H(ctx->r16, 0XE4);
    // 0x8006A43C: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x8006A440: bne         $v0, $at, L_8006A470
    if (ctx->r2 != ctx->r1) {
        // 0x8006A444: lui         $at, 0x4120
        ctx->r1 = S32(0X4120 << 16);
            goto L_8006A470;
    }
    // 0x8006A444: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x8006A448: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x8006A44C: lwc1        $f4, 0x40($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X40);
    // 0x8006A450: addiu       $t9, $zero, 0x5
    ctx->r25 = ADD32(0, 0X5);
    // 0x8006A454: c.lt.s      $f18, $f4
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f18.fl < ctx->f4.fl;
    // 0x8006A458: nop

    // 0x8006A45C: bc1f        L_8006A474
    if (!c1cs) {
        // 0x8006A460: sll         $t0, $v0, 1
        ctx->r8 = S32(ctx->r2 << 1);
            goto L_8006A474;
    }
    // 0x8006A460: sll         $t0, $v0, 1
    ctx->r8 = S32(ctx->r2 << 1);
    // 0x8006A464: sh          $t9, 0xE4($s0)
    MEM_H(0XE4, ctx->r16) = ctx->r25;
    // 0x8006A468: lh          $v0, 0xE4($s0)
    ctx->r2 = MEM_H(ctx->r16, 0XE4);
    // 0x8006A46C: nop

L_8006A470:
    // 0x8006A470: sll         $t0, $v0, 1
    ctx->r8 = S32(ctx->r2 << 1);
L_8006A474:
    // 0x8006A474: lui         $a1, 0x800B
    ctx->r5 = S32(0X800B << 16);
    // 0x8006A478: addu        $a1, $a1, $t0
    ctx->r5 = ADD32(ctx->r5, ctx->r8);
    // 0x8006A47C: lhu         $a1, -0x1448($a1)
    ctx->r5 = MEM_HU(ctx->r5, -0X1448);
    // 0x8006A480: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8006A484: jal         0x80272D3C
    // 0x8006A488: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    LOOKUP_FUNC(0x80272D3C)(rdram, ctx);
        goto after_7;
    // 0x8006A488: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_7:
    // 0x8006A48C: lh          $t1, 0xE4($s0)
    ctx->r9 = MEM_H(ctx->r16, 0XE4);
    // 0x8006A490: lui         $t3, 0x800B
    ctx->r11 = S32(0X800B << 16);
    // 0x8006A494: sll         $t2, $t1, 1
    ctx->r10 = S32(ctx->r9 << 1);
    // 0x8006A498: addu        $t3, $t3, $t2
    ctx->r11 = ADD32(ctx->r11, ctx->r10);
    // 0x8006A49C: lhu         $t3, -0x1434($t3)
    ctx->r11 = MEM_HU(ctx->r11, -0X1434);
    // 0x8006A4A0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8006A4A4: jal         0x80067B2C
    // 0x8006A4A8: sh          $t3, 0xE6($s0)
    MEM_H(0XE6, ctx->r16) = ctx->r11;
    func_80067B2C(rdram, ctx);
        goto after_8;
    // 0x8006A4A8: sh          $t3, 0xE6($s0)
    MEM_H(0XE6, ctx->r16) = ctx->r11;
    after_8:
    // 0x8006A4AC: addiu       $v1, $v0, -0x5
    ctx->r3 = ADD32(ctx->r2, -0X5);
    // 0x8006A4B0: sll         $t4, $v1, 16
    ctx->r12 = S32(ctx->r3 << 16);
    // 0x8006A4B4: sra         $t5, $t4, 16
    ctx->r13 = S32(SIGNED(ctx->r12) >> 16);
    // 0x8006A4B8: bgtz        $t5, L_8006A4C8
    if (SIGNED(ctx->r13) > 0) {
        // 0x8006A4BC: sh          $v1, 0xE8($s0)
        MEM_H(0XE8, ctx->r16) = ctx->r3;
            goto L_8006A4C8;
    }
    // 0x8006A4BC: sh          $v1, 0xE8($s0)
    MEM_H(0XE8, ctx->r16) = ctx->r3;
    // 0x8006A4C0: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x8006A4C4: sh          $t6, 0xE8($s0)
    MEM_H(0XE8, ctx->r16) = ctx->r14;
L_8006A4C8:
    // 0x8006A4C8: lui         $t7, 0x8009
    ctx->r15 = S32(0X8009 << 16);
    // 0x8006A4CC: lw          $t7, 0x3B20($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X3B20);
    // 0x8006A4D0: nop

    // 0x8006A4D4: lhu         $t8, 0x6C($t7)
    ctx->r24 = MEM_HU(ctx->r15, 0X6C);
    // 0x8006A4D8: b           L_8006A678
    // 0x8006A4DC: sh          $t8, 0xEA($s0)
    MEM_H(0XEA, ctx->r16) = ctx->r24;
        goto L_8006A678;
    // 0x8006A4DC: sh          $t8, 0xEA($s0)
    MEM_H(0XEA, ctx->r16) = ctx->r24;
L_8006A4E0:
    // 0x8006A4E0: lw          $t9, 0x38($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X38);
    // 0x8006A4E4: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x8006A4E8: bne         $t9, $at, L_8006A500
    if (ctx->r25 != ctx->r1) {
        // 0x8006A4EC: nop
    
            goto L_8006A500;
    }
    // 0x8006A4EC: nop

    // 0x8006A4F0: lh          $t0, 0xEC($s0)
    ctx->r8 = MEM_H(ctx->r16, 0XEC);
    // 0x8006A4F4: nop

    // 0x8006A4F8: addiu       $t1, $t0, 0x1
    ctx->r9 = ADD32(ctx->r8, 0X1);
    // 0x8006A4FC: sh          $t1, 0xEC($s0)
    MEM_H(0XEC, ctx->r16) = ctx->r9;
L_8006A500:
    // 0x8006A500: lhu         $t2, 0x12($s0)
    ctx->r10 = MEM_HU(ctx->r16, 0X12);
    // 0x8006A504: nop

    // 0x8006A508: andi        $t3, $t2, 0x8000
    ctx->r11 = ctx->r10 & 0X8000;
    // 0x8006A50C: bne         $t3, $zero, L_8006A584
    if (ctx->r11 != 0) {
        // 0x8006A510: lw          $t9, 0x38($sp)
        ctx->r25 = MEM_W(ctx->r29, 0X38);
            goto L_8006A584;
    }
    // 0x8006A510: lw          $t9, 0x38($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X38);
    // 0x8006A514: lh          $t4, 0xEC($s0)
    ctx->r12 = MEM_H(ctx->r16, 0XEC);
    // 0x8006A518: nop

    // 0x8006A51C: slti        $at, $t4, 0x5
    ctx->r1 = SIGNED(ctx->r12) < 0X5 ? 1 : 0;
    // 0x8006A520: beq         $at, $zero, L_8006A584
    if (ctx->r1 == 0) {
        // 0x8006A524: lw          $t9, 0x38($sp)
        ctx->r25 = MEM_W(ctx->r29, 0X38);
            goto L_8006A584;
    }
    // 0x8006A524: lw          $t9, 0x38($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X38);
    // 0x8006A528: lh          $v1, 0xE8($s0)
    ctx->r3 = MEM_H(ctx->r16, 0XE8);
    // 0x8006A52C: nop

    // 0x8006A530: slt         $v0, $zero, $v1
    ctx->r2 = SIGNED(0) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x8006A534: addiu       $t5, $v1, -0x1
    ctx->r13 = ADD32(ctx->r3, -0X1);
    // 0x8006A538: beq         $v0, $zero, L_8006A558
    if (ctx->r2 == 0) {
        // 0x8006A53C: sh          $t5, 0xE8($s0)
        MEM_H(0XE8, ctx->r16) = ctx->r13;
            goto L_8006A558;
    }
    // 0x8006A53C: sh          $t5, 0xE8($s0)
    MEM_H(0XE8, ctx->r16) = ctx->r13;
    // 0x8006A540: lh          $t6, 0xE4($s0)
    ctx->r14 = MEM_H(ctx->r16, 0XE4);
    // 0x8006A544: addiu       $at, $zero, 0x6
    ctx->r1 = ADD32(0, 0X6);
    // 0x8006A548: beq         $t6, $at, L_8006A558
    if (ctx->r14 == ctx->r1) {
        // 0x8006A54C: nop
    
            goto L_8006A558;
    }
    // 0x8006A54C: nop

    // 0x8006A550: jal         0x802797A4
    // 0x8006A554: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    LOOKUP_FUNC(0x802797A4)(rdram, ctx);
        goto after_9;
    // 0x8006A554: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_9:
L_8006A558:
    // 0x8006A558: lh          $t7, 0xE4($s0)
    ctx->r15 = MEM_H(ctx->r16, 0XE4);
    // 0x8006A55C: lui         $a1, 0x800B
    ctx->r5 = S32(0X800B << 16);
    // 0x8006A560: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x8006A564: addu        $a1, $a1, $t8
    ctx->r5 = ADD32(ctx->r5, ctx->r24);
    // 0x8006A568: lw          $a1, -0x140C($a1)
    ctx->r5 = MEM_W(ctx->r5, -0X140C);
    // 0x8006A56C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8006A570: beq         $a1, $zero, L_8006A584
    if (ctx->r5 == 0) {
        // 0x8006A574: lw          $t9, 0x38($sp)
        ctx->r25 = MEM_W(ctx->r29, 0X38);
            goto L_8006A584;
    }
    // 0x8006A574: lw          $t9, 0x38($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X38);
    // 0x8006A578: jal         0x80276EF0
    // 0x8006A57C: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    LOOKUP_FUNC(0x80276EF0)(rdram, ctx);
        goto after_10;
    // 0x8006A57C: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    after_10:
    // 0x8006A580: lw          $t9, 0x38($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X38);
L_8006A584:
    // 0x8006A584: addiu       $at, $zero, 0x6
    ctx->r1 = ADD32(0, 0X6);
    // 0x8006A588: bne         $t9, $at, L_8006A5A8
    if (ctx->r25 != ctx->r1) {
        // 0x8006A58C: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_8006A5A8;
    }
    // 0x8006A58C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8006A590: lui         $a1, 0x3E99
    ctx->r5 = S32(0X3E99 << 16);
    // 0x8006A594: lw          $a2, 0x8C($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X8C);
    // 0x8006A598: jal         0x80274C54
    // 0x8006A59C: ori         $a1, $a1, 0x999A
    ctx->r5 = ctx->r5 | 0X999A;
    LOOKUP_FUNC(0x80274C54)(rdram, ctx);
        goto after_11;
    // 0x8006A59C: ori         $a1, $a1, 0x999A
    ctx->r5 = ctx->r5 | 0X999A;
    after_11:
    // 0x8006A5A0: jal         0x8006B5C0
    // 0x8006A5A4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8006B5C0(rdram, ctx);
        goto after_12;
    // 0x8006A5A4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_12:
L_8006A5A8:
    // 0x8006A5A8: lw          $t0, 0x38($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X38);
    // 0x8006A5AC: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8006A5B0: bne         $t0, $at, L_8006A5CC
    if (ctx->r8 != ctx->r1) {
        // 0x8006A5B4: lui         $v0, 0x8009
        ctx->r2 = S32(0X8009 << 16);
            goto L_8006A5CC;
    }
    // 0x8006A5B4: lui         $v0, 0x8009
    ctx->r2 = S32(0X8009 << 16);
    // 0x8006A5B8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8006A5BC: jal         0x8024BC08
    // 0x8006A5C0: addiu       $a1, $zero, 0x21
    ctx->r5 = ADD32(0, 0X21);
    LOOKUP_FUNC(0x8024BC08)(rdram, ctx);
        goto after_13;
    // 0x8006A5C0: addiu       $a1, $zero, 0x21
    ctx->r5 = ADD32(0, 0X21);
    after_13:
    // 0x8006A5C4: b           L_8006A67C
    // 0x8006A5C8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_8006A67C;
    // 0x8006A5C8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_8006A5CC:
    // 0x8006A5CC: lw          $v0, 0x3B20($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X3B20);
    // 0x8006A5D0: lhu         $t2, 0xEA($s0)
    ctx->r10 = MEM_HU(ctx->r16, 0XEA);
    // 0x8006A5D4: lhu         $t1, 0x6C($v0)
    ctx->r9 = MEM_HU(ctx->r2, 0X6C);
    // 0x8006A5D8: lui         $t3, 0x8012
    ctx->r11 = S32(0X8012 << 16);
    // 0x8006A5DC: bne         $t1, $t2, L_8006A5F4
    if (ctx->r9 != ctx->r10) {
        // 0x8006A5E0: nop
    
            goto L_8006A5F4;
    }
    // 0x8006A5E0: nop

    // 0x8006A5E4: lhu         $t3, 0xB78($t3)
    ctx->r11 = MEM_HU(ctx->r11, 0XB78);
    // 0x8006A5E8: nop

    // 0x8006A5EC: beq         $t3, $zero, L_8006A67C
    if (ctx->r11 == 0) {
        // 0x8006A5F0: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_8006A67C;
    }
    // 0x8006A5F0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_8006A5F4:
    // 0x8006A5F4: lw          $t4, 0x84($v0)
    ctx->r12 = MEM_W(ctx->r2, 0X84);
    // 0x8006A5F8: nop

    // 0x8006A5FC: beq         $s0, $t4, L_8006A67C
    if (ctx->r16 == ctx->r12) {
        // 0x8006A600: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_8006A67C;
    }
    // 0x8006A600: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8006A604: lh          $t5, 0xE4($s0)
    ctx->r13 = MEM_H(ctx->r16, 0XE4);
    // 0x8006A608: lui         $a1, 0x800B
    ctx->r5 = S32(0X800B << 16);
    // 0x8006A60C: sll         $t6, $t5, 1
    ctx->r14 = S32(ctx->r13 << 1);
    // 0x8006A610: addu        $a1, $a1, $t6
    ctx->r5 = ADD32(ctx->r5, ctx->r14);
    // 0x8006A614: lhu         $a1, -0x1420($a1)
    ctx->r5 = MEM_HU(ctx->r5, -0X1420);
    // 0x8006A618: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8006A61C: beq         $a1, $zero, L_8006A67C
    if (ctx->r5 == 0) {
        // 0x8006A620: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_8006A67C;
    }
    // 0x8006A620: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8006A624: jal         0x80272D3C
    // 0x8006A628: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    LOOKUP_FUNC(0x80272D3C)(rdram, ctx);
        goto after_14;
    // 0x8006A628: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_14:
    // 0x8006A62C: lhu         $t7, 0x10($s0)
    ctx->r15 = MEM_HU(ctx->r16, 0X10);
    // 0x8006A630: nop

    // 0x8006A634: addiu       $t8, $t7, 0x1
    ctx->r24 = ADD32(ctx->r15, 0X1);
    // 0x8006A638: b           L_8006A678
    // 0x8006A63C: sh          $t8, 0x10($s0)
    MEM_H(0X10, ctx->r16) = ctx->r24;
        goto L_8006A678;
    // 0x8006A63C: sh          $t8, 0x10($s0)
    MEM_H(0X10, ctx->r16) = ctx->r24;
    // 0x8006A640: lw          $t9, 0x38($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X38);
L_8006A644:
    // 0x8006A644: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8006A648: bne         $t9, $at, L_8006A678
    if (ctx->r25 != ctx->r1) {
        // 0x8006A64C: lui         $t0, 0x8009
        ctx->r8 = S32(0X8009 << 16);
            goto L_8006A678;
    }
    // 0x8006A64C: lui         $t0, 0x8009
    ctx->r8 = S32(0X8009 << 16);
    // 0x8006A650: lw          $t0, 0x3B20($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X3B20);
    // 0x8006A654: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x8006A658: lw          $t1, 0x84($t0)
    ctx->r9 = MEM_W(ctx->r8, 0X84);
    // 0x8006A65C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8006A660: bne         $s0, $t1, L_8006A670
    if (ctx->r16 != ctx->r9) {
        // 0x8006A664: nop
    
            goto L_8006A670;
    }
    // 0x8006A664: nop

    // 0x8006A668: b           L_8006A670
    // 0x8006A66C: addiu       $v0, $zero, 0x21
    ctx->r2 = ADD32(0, 0X21);
        goto L_8006A670;
    // 0x8006A66C: addiu       $v0, $zero, 0x21
    ctx->r2 = ADD32(0, 0X21);
L_8006A670:
    // 0x8006A670: jal         0x8024BC08
    // 0x8006A674: andi        $a1, $v0, 0xFFFF
    ctx->r5 = ctx->r2 & 0XFFFF;
    LOOKUP_FUNC(0x8024BC08)(rdram, ctx);
        goto after_15;
    // 0x8006A674: andi        $a1, $v0, 0xFFFF
    ctx->r5 = ctx->r2 & 0XFFFF;
    after_15:
L_8006A678:
    // 0x8006A678: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_8006A67C:
    // 0x8006A67C: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8006A680: jr          $ra
    // 0x8006A684: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    return;
    // 0x8006A684: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
;}
RECOMP_FUNC void func_8006A688(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8006A688: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8006A68C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8006A690: jal         0x80272C74
    // 0x8006A694: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    LOOKUP_FUNC(0x80272C74)(rdram, ctx);
        goto after_0;
    // 0x8006A694: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x8006A698: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x8006A69C: lui         $v1, 0x8009
    ctx->r3 = S32(0X8009 << 16);
    // 0x8006A6A0: addiu       $v1, $v1, 0x3B20
    ctx->r3 = ADD32(ctx->r3, 0X3B20);
    // 0x8006A6A4: lw          $t6, 0x0($v1)
    ctx->r14 = MEM_W(ctx->r3, 0X0);
    // 0x8006A6A8: lwc1        $f4, 0xEC($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0XEC);
    // 0x8006A6AC: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8006A6B0: swc1        $f4, 0x8($t6)
    MEM_W(0X8, ctx->r14) = ctx->f4.u32l;
    // 0x8006A6B4: lw          $t7, 0x0($v1)
    ctx->r15 = MEM_W(ctx->r3, 0X0);
    // 0x8006A6B8: lwc1        $f6, 0xF0($a0)
    ctx->f6.u32l = MEM_W(ctx->r4, 0XF0);
    // 0x8006A6BC: nop

    // 0x8006A6C0: swc1        $f6, 0x0($t7)
    MEM_W(0X0, ctx->r15) = ctx->f6.u32l;
    // 0x8006A6C4: lw          $t8, 0x0($v1)
    ctx->r24 = MEM_W(ctx->r3, 0X0);
    // 0x8006A6C8: lwc1        $f8, 0xF4($a0)
    ctx->f8.u32l = MEM_W(ctx->r4, 0XF4);
    // 0x8006A6CC: bne         $v0, $zero, L_8006A6F4
    if (ctx->r2 != 0) {
        // 0x8006A6D0: swc1        $f8, 0x4($t8)
        MEM_W(0X4, ctx->r24) = ctx->f8.u32l;
            goto L_8006A6F4;
    }
    // 0x8006A6D0: swc1        $f8, 0x4($t8)
    MEM_W(0X4, ctx->r24) = ctx->f8.u32l;
    // 0x8006A6D4: lw          $t9, 0xCC($a0)
    ctx->r25 = MEM_W(ctx->r4, 0XCC);
    // 0x8006A6D8: nop

    // 0x8006A6DC: lw          $v1, 0x30($t9)
    ctx->r3 = MEM_W(ctx->r25, 0X30);
    // 0x8006A6E0: nop

    // 0x8006A6E4: lhu         $t0, 0x2($v1)
    ctx->r8 = MEM_HU(ctx->r3, 0X2);
    // 0x8006A6E8: nop

    // 0x8006A6EC: ori         $t1, $t0, 0x4000
    ctx->r9 = ctx->r8 | 0X4000;
    // 0x8006A6F0: sh          $t1, 0x2($v1)
    MEM_H(0X2, ctx->r3) = ctx->r9;
L_8006A6F4:
    // 0x8006A6F4: bne         $v0, $at, L_8006A708
    if (ctx->r2 != ctx->r1) {
        // 0x8006A6F8: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_8006A708;
    }
    // 0x8006A6F8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8006A6FC: jal         0x8024BC08
    // 0x8006A700: addiu       $a1, $zero, 0x21
    ctx->r5 = ADD32(0, 0X21);
    LOOKUP_FUNC(0x8024BC08)(rdram, ctx);
        goto after_1;
    // 0x8006A700: addiu       $a1, $zero, 0x21
    ctx->r5 = ADD32(0, 0X21);
    after_1:
    // 0x8006A704: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8006A708:
    // 0x8006A708: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8006A70C: jr          $ra
    // 0x8006A710: nop

    return;
    // 0x8006A710: nop

;}
RECOMP_FUNC void func_8006A714(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8006A714: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8006A718: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8006A71C: bgez        $a1, L_8006A728
    if (SIGNED(ctx->r5) >= 0) {
        // 0x8006A720: or          $a3, $a1, $zero
        ctx->r7 = ctx->r5 | 0;
            goto L_8006A728;
    }
    // 0x8006A720: or          $a3, $a1, $zero
    ctx->r7 = ctx->r5 | 0;
    // 0x8006A724: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
L_8006A728:
    // 0x8006A728: lw          $v0, 0xE0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0XE0);
    // 0x8006A72C: lui         $at, 0xFFFF
    ctx->r1 = S32(0XFFFF << 16);
    // 0x8006A730: lw          $t6, 0x4($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X4);
    // 0x8006A734: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x8006A738: and         $t7, $t6, $at
    ctx->r15 = ctx->r14 & ctx->r1;
    // 0x8006A73C: sw          $t7, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r15;
    // 0x8006A740: lw          $v0, 0xE0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0XE0);
    // 0x8006A744: nop

    // 0x8006A748: lw          $t8, 0x4($v0)
    ctx->r24 = MEM_W(ctx->r2, 0X4);
    // 0x8006A74C: nop

    // 0x8006A750: or          $t9, $t8, $a3
    ctx->r25 = ctx->r24 | ctx->r7;
    // 0x8006A754: sw          $t9, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r25;
    // 0x8006A758: lhu         $a1, 0x3E($a0)
    ctx->r5 = MEM_HU(ctx->r4, 0X3E);
    // 0x8006A75C: jal         0x80272D3C
    // 0x8006A760: nop

    LOOKUP_FUNC(0x80272D3C)(rdram, ctx);
        goto after_0;
    // 0x8006A760: nop

    after_0:
    // 0x8006A764: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8006A768: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8006A76C: jr          $ra
    // 0x8006A770: nop

    return;
    // 0x8006A770: nop

;}
RECOMP_FUNC void func_8006A774(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8006A774: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8006A778: lw          $t6, 0x30($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X30);
    // 0x8006A77C: lui         $at, 0xFFFF
    ctx->r1 = S32(0XFFFF << 16);
    // 0x8006A780: and         $t7, $t6, $at
    ctx->r15 = ctx->r14 & ctx->r1;
    // 0x8006A784: srl         $t8, $t7, 16
    ctx->r24 = S32(U32(ctx->r15) >> 16);
    // 0x8006A788: sll         $t9, $t8, 16
    ctx->r25 = S32(ctx->r24 << 16);
    // 0x8006A78C: sra         $t0, $t9, 16
    ctx->r8 = S32(SIGNED(ctx->r25) >> 16);
    // 0x8006A790: addiu       $t1, $t0, -0x80
    ctx->r9 = ADD32(ctx->r8, -0X80);
    // 0x8006A794: mtc1        $t1, $f4
    ctx->f4.u32l = ctx->r9;
    // 0x8006A798: lui         $at, 0x4380
    ctx->r1 = S32(0X4380 << 16);
    // 0x8006A79C: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x8006A7A0: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x8006A7A4: subu        $t2, $a1, $a3
    ctx->r10 = SUB32(ctx->r5, ctx->r7);
    // 0x8006A7A8: div.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = DIV_S(ctx->f6.fl, ctx->f8.fl);
    // 0x8006A7AC: mtc1        $t2, $f16
    ctx->f16.u32l = ctx->r10;
    // 0x8006A7B0: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8006A7B4: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x8006A7B8: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8006A7BC: mul.s       $f4, $f18, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = MUL_S(ctx->f18.fl, ctx->f10.fl);
    // 0x8006A7C0: cfc1        $t3, $FpcCsr
    ctx->r11 = get_cop1_cs();
    // 0x8006A7C4: nop

    // 0x8006A7C8: ori         $at, $t3, 0x3
    ctx->r1 = ctx->r11 | 0X3;
    // 0x8006A7CC: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x8006A7D0: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x8006A7D4: nop

    // 0x8006A7D8: cvt.w.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = CVT_W_S(ctx->f4.fl);
    // 0x8006A7DC: mfc1        $t4, $f6
    ctx->r12 = (int32_t)ctx->f6.u32l;
    // 0x8006A7E0: ctc1        $t3, $FpcCsr
    set_cop1_cs(ctx->r11);
    // 0x8006A7E4: addu        $s0, $t4, $a2
    ctx->r16 = ADD32(ctx->r12, ctx->r6);
    // 0x8006A7E8: slt         $at, $s0, $a2
    ctx->r1 = SIGNED(ctx->r16) < SIGNED(ctx->r6) ? 1 : 0;
    // 0x8006A7EC: bne         $at, $zero, L_8006A7F8
    if (ctx->r1 != 0) {
        // 0x8006A7F0: nop
    
            goto L_8006A7F8;
    }
    // 0x8006A7F0: nop

    // 0x8006A7F4: addiu       $s0, $a2, -0x1
    ctx->r16 = ADD32(ctx->r6, -0X1);
L_8006A7F8:
    // 0x8006A7F8: bgez        $s0, L_8006A804
    if (SIGNED(ctx->r16) >= 0) {
        // 0x8006A7FC: nop
    
            goto L_8006A804;
    }
    // 0x8006A7FC: nop

    // 0x8006A800: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
L_8006A804:
    // 0x8006A804: jal         0x8006A714
    // 0x8006A808: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    func_8006A714(rdram, ctx);
        goto after_0;
    // 0x8006A808: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_0:
    // 0x8006A80C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8006A810: or          $v0, $s0, $zero
    ctx->r2 = ctx->r16 | 0;
    // 0x8006A814: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8006A818: jr          $ra
    // 0x8006A81C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x8006A81C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_8006A820(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8006A820: addiu       $sp, $sp, -0x68
    ctx->r29 = ADD32(ctx->r29, -0X68);
    // 0x8006A824: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x8006A828: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x8006A82C: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x8006A830: jal         0x80274CFC
    // 0x8006A834: addiu       $a1, $zero, 0x96
    ctx->r5 = ADD32(0, 0X96);
    LOOKUP_FUNC(0x80274CFC)(rdram, ctx);
        goto after_0;
    // 0x8006A834: addiu       $a1, $zero, 0x96
    ctx->r5 = ADD32(0, 0X96);
    after_0:
    // 0x8006A838: lhu         $v1, 0x10($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X10);
    // 0x8006A83C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8006A840: beq         $v1, $zero, L_8006A864
    if (ctx->r3 == 0) {
        // 0x8006A844: or          $v0, $v1, $zero
        ctx->r2 = ctx->r3 | 0;
            goto L_8006A864;
    }
    // 0x8006A844: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    // 0x8006A848: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8006A84C: beq         $v0, $at, L_8006AA44
    if (ctx->r2 == ctx->r1) {
        // 0x8006A850: addiu       $at, $zero, 0x2
        ctx->r1 = ADD32(0, 0X2);
            goto L_8006AA44;
    }
    // 0x8006A850: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x8006A854: beq         $v0, $at, L_8006AB48
    if (ctx->r2 == ctx->r1) {
        // 0x8006A858: lui         $t8, 0x8009
        ctx->r24 = S32(0X8009 << 16);
            goto L_8006AB48;
    }
    // 0x8006A858: lui         $t8, 0x8009
    ctx->r24 = S32(0X8009 << 16);
    // 0x8006A85C: b           L_8006AD50
    // 0x8006A860: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_8006AD50;
    // 0x8006A860: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_8006A864:
    // 0x8006A864: addiu       $t6, $v1, 0x1
    ctx->r14 = ADD32(ctx->r3, 0X1);
    // 0x8006A868: jal         0x80275238
    // 0x8006A86C: sh          $t6, 0x10($s0)
    MEM_H(0X10, ctx->r16) = ctx->r14;
    LOOKUP_FUNC(0x80275238)(rdram, ctx);
        goto after_1;
    // 0x8006A86C: sh          $t6, 0x10($s0)
    MEM_H(0X10, ctx->r16) = ctx->r14;
    after_1:
    // 0x8006A870: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x8006A874: lwc1        $f7, -0x5900($at)
    ctx->f_odd[(7 - 1) * 2] = MEM_W(ctx->r1, -0X5900);
    // 0x8006A878: lwc1        $f6, -0x58FC($at)
    ctx->f6.u32l = MEM_W(ctx->r1, -0X58FC);
    // 0x8006A87C: cvt.d.s     $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f4.d = CVT_D_S(ctx->f0.fl);
    // 0x8006A880: mul.d       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f6.d); 
    ctx->f8.d = MUL_D(ctx->f4.d, ctx->f6.d);
    // 0x8006A884: lh          $t9, 0xE4($s0)
    ctx->r25 = MEM_H(ctx->r16, 0XE4);
    // 0x8006A888: lui         $t1, 0x800B
    ctx->r9 = S32(0X800B << 16);
    // 0x8006A88C: sll         $t0, $t9, 1
    ctx->r8 = S32(ctx->r25 << 1);
    // 0x8006A890: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x8006A894: cfc1        $t7, $FpcCsr
    ctx->r15 = get_cop1_cs();
    // 0x8006A898: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8006A89C: ori         $at, $t7, 0x3
    ctx->r1 = ctx->r15 | 0X3;
    // 0x8006A8A0: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x8006A8A4: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x8006A8A8: nop

    // 0x8006A8AC: cvt.w.d     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.u32l = CVT_W_D(ctx->f8.d);
    // 0x8006A8B0: mfc1        $t8, $f10
    ctx->r24 = (int32_t)ctx->f10.u32l;
    // 0x8006A8B4: ctc1        $t7, $FpcCsr
    set_cop1_cs(ctx->r15);
    // 0x8006A8B8: sh          $t8, 0xE8($s0)
    MEM_H(0XE8, ctx->r16) = ctx->r24;
    // 0x8006A8BC: lhu         $t1, -0x13E8($t1)
    ctx->r9 = MEM_HU(ctx->r9, -0X13E8);
    // 0x8006A8C0: jal         0x80067B2C
    // 0x8006A8C4: sh          $t1, 0xE6($s0)
    MEM_H(0XE6, ctx->r16) = ctx->r9;
    func_80067B2C(rdram, ctx);
        goto after_2;
    // 0x8006A8C4: sh          $t1, 0xE6($s0)
    MEM_H(0XE6, ctx->r16) = ctx->r9;
    after_2:
    // 0x8006A8C8: lui         $at, 0x41B0
    ctx->r1 = S32(0X41B0 << 16);
    // 0x8006A8CC: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x8006A8D0: lwc1        $f16, 0x90($s0)
    ctx->f16.u32l = MEM_W(ctx->r16, 0X90);
    // 0x8006A8D4: sw          $v0, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r2;
    // 0x8006A8D8: jal         0x8026D720
    // 0x8006A8DC: add.s       $f12, $f16, $f18
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f12.fl = ctx->f16.fl + ctx->f18.fl;
    LOOKUP_FUNC(0x8026D720)(rdram, ctx);
        goto after_3;
    // 0x8006A8DC: add.s       $f12, $f16, $f18
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f12.fl = ctx->f16.fl + ctx->f18.fl;
    after_3:
    // 0x8006A8E0: lw          $v1, 0x60($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X60);
    // 0x8006A8E4: bgez        $v0, L_8006A8F4
    if (SIGNED(ctx->r2) >= 0) {
        // 0x8006A8E8: or          $a3, $v0, $zero
        ctx->r7 = ctx->r2 | 0;
            goto L_8006A8F4;
    }
    // 0x8006A8E8: or          $a3, $v0, $zero
    ctx->r7 = ctx->r2 | 0;
    // 0x8006A8EC: b           L_8006A93C
    // 0x8006A8F0: or          $a3, $v1, $zero
    ctx->r7 = ctx->r3 | 0;
        goto L_8006A93C;
    // 0x8006A8F0: or          $a3, $v1, $zero
    ctx->r7 = ctx->r3 | 0;
L_8006A8F4:
    // 0x8006A8F4: blez        $v1, L_8006A93C
    if (SIGNED(ctx->r3) <= 0) {
        // 0x8006A8F8: addiu       $a1, $zero, 0xC
        ctx->r5 = ADD32(0, 0XC);
            goto L_8006A93C;
    }
    // 0x8006A8F8: addiu       $a1, $zero, 0xC
    ctx->r5 = ADD32(0, 0XC);
    // 0x8006A8FC: multu       $v1, $a1
    result = U64(U32(ctx->r3)) * U64(U32(ctx->r5)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8006A900: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x8006A904: addiu       $a0, $a0, 0x680
    ctx->r4 = ADD32(ctx->r4, 0X680);
    // 0x8006A908: mflo        $t2
    ctx->r10 = lo;
    // 0x8006A90C: addu        $t3, $a0, $t2
    ctx->r11 = ADD32(ctx->r4, ctx->r10);
    // 0x8006A910: lwc1        $f4, 0x4($t3)
    ctx->f4.u32l = MEM_W(ctx->r11, 0X4);
    // 0x8006A914: multu       $v0, $a1
    result = U64(U32(ctx->r2)) * U64(U32(ctx->r5)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8006A918: mflo        $t4
    ctx->r12 = lo;
    // 0x8006A91C: addu        $t5, $a0, $t4
    ctx->r13 = ADD32(ctx->r4, ctx->r12);
    // 0x8006A920: lwc1        $f6, 0x4($t5)
    ctx->f6.u32l = MEM_W(ctx->r13, 0X4);
    // 0x8006A924: nop

    // 0x8006A928: c.lt.s      $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f4.fl < ctx->f6.fl;
    // 0x8006A92C: nop

    // 0x8006A930: bc1f        L_8006A93C
    if (!c1cs) {
        // 0x8006A934: nop
    
            goto L_8006A93C;
    }
    // 0x8006A934: nop

    // 0x8006A938: or          $a3, $v1, $zero
    ctx->r7 = ctx->r3 | 0;
L_8006A93C:
    // 0x8006A93C: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x8006A940: addiu       $a0, $a0, 0x680
    ctx->r4 = ADD32(ctx->r4, 0X680);
    // 0x8006A944: bgez        $a3, L_8006A950
    if (SIGNED(ctx->r7) >= 0) {
        // 0x8006A948: addiu       $a1, $zero, 0xC
        ctx->r5 = ADD32(0, 0XC);
            goto L_8006A950;
    }
    // 0x8006A948: addiu       $a1, $zero, 0xC
    ctx->r5 = ADD32(0, 0XC);
    // 0x8006A94C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
L_8006A950:
    // 0x8006A950: multu       $a3, $a1
    result = U64(U32(ctx->r7)) * U64(U32(ctx->r5)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8006A954: sh          $a3, 0xEA($s0)
    MEM_H(0XEA, ctx->r16) = ctx->r7;
    // 0x8006A958: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x8006A95C: lwc1        $f8, 0x88($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X88);
    // 0x8006A960: lwc1        $f17, -0x58F8($at)
    ctx->f_odd[(17 - 1) * 2] = MEM_W(ctx->r1, -0X58F8);
    // 0x8006A964: lwc1        $f16, -0x58F4($at)
    ctx->f16.u32l = MEM_W(ctx->r1, -0X58F4);
    // 0x8006A968: cvt.d.s     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f10.d = CVT_D_S(ctx->f8.fl);
    // 0x8006A96C: add.d       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f16.d); 
    ctx->f18.d = ctx->f10.d + ctx->f16.d;
    // 0x8006A970: lui         $t7, 0x8012
    ctx->r15 = S32(0X8012 << 16);
    // 0x8006A974: cvt.s.d     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.d); 
    ctx->f4.fl = CVT_S_D(ctx->f18.d);
    // 0x8006A978: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x8006A97C: swc1        $f4, 0xEC($s0)
    MEM_W(0XEC, ctx->r16) = ctx->f4.u32l;
    // 0x8006A980: mflo        $t6
    ctx->r14 = lo;
    // 0x8006A984: addu        $v0, $a0, $t6
    ctx->r2 = ADD32(ctx->r4, ctx->r14);
    // 0x8006A988: lwc1        $f6, 0x8($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0X8);
    // 0x8006A98C: lui         $a0, 0x802B
    ctx->r4 = S32(0X802B << 16);
    // 0x8006A990: swc1        $f6, 0xF0($s0)
    MEM_W(0XF0, ctx->r16) = ctx->f6.u32l;
    // 0x8006A994: lwc1        $f8, 0x0($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X0);
    // 0x8006A998: lui         $t5, 0x800B
    ctx->r13 = S32(0X800B << 16);
    // 0x8006A99C: swc1        $f8, 0xF4($s0)
    MEM_W(0XF4, ctx->r16) = ctx->f8.u32l;
    // 0x8006A9A0: lhu         $t7, 0xB7A($t7)
    ctx->r15 = MEM_HU(ctx->r15, 0XB7A);
    // 0x8006A9A4: nop

    // 0x8006A9A8: bne         $t7, $at, L_8006A9EC
    if (ctx->r15 != ctx->r1) {
        // 0x8006A9AC: nop
    
            goto L_8006A9EC;
    }
    // 0x8006A9AC: nop

    // 0x8006A9B0: lh          $t8, 0xE4($s0)
    ctx->r24 = MEM_H(ctx->r16, 0XE4);
    // 0x8006A9B4: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8006A9B8: beq         $t8, $at, L_8006A9EC
    if (ctx->r24 == ctx->r1) {
        // 0x8006A9BC: lui         $t9, 0x8012
        ctx->r25 = S32(0X8012 << 16);
            goto L_8006A9EC;
    }
    // 0x8006A9BC: lui         $t9, 0x8012
    ctx->r25 = S32(0X8012 << 16);
    // 0x8006A9C0: lw          $t9, 0xB44($t9)
    ctx->r25 = MEM_W(ctx->r25, 0XB44);
    // 0x8006A9C4: lui         $t0, 0x8028
    ctx->r8 = S32(0X8028 << 16);
    // 0x8006A9C8: sltiu       $at, $t9, 0x32
    ctx->r1 = ctx->r25 < 0X32 ? 1 : 0;
    // 0x8006A9CC: beq         $at, $zero, L_8006A9EC
    if (ctx->r1 == 0) {
        // 0x8006A9D0: nop
    
            goto L_8006A9EC;
    }
    // 0x8006A9D0: nop

    // 0x8006A9D4: lh          $t0, -0x1B60($t0)
    ctx->r8 = MEM_H(ctx->r8, -0X1B60);
    // 0x8006A9D8: addiu       $t2, $zero, 0x5
    ctx->r10 = ADD32(0, 0X5);
    // 0x8006A9DC: andi        $t1, $t0, 0x1
    ctx->r9 = ctx->r8 & 0X1;
    // 0x8006A9E0: beq         $t1, $zero, L_8006A9EC
    if (ctx->r9 == 0) {
        // 0x8006A9E4: nop
    
            goto L_8006A9EC;
    }
    // 0x8006A9E4: nop

    // 0x8006A9E8: sh          $t2, 0xE4($s0)
    MEM_H(0XE4, ctx->r16) = ctx->r10;
L_8006A9EC:
    // 0x8006A9EC: lh          $t3, 0xE4($s0)
    ctx->r11 = MEM_H(ctx->r16, 0XE4);
    // 0x8006A9F0: lw          $a1, 0xE0($s0)
    ctx->r5 = MEM_W(ctx->r16, 0XE0);
    // 0x8006A9F4: sll         $t4, $t3, 1
    ctx->r12 = S32(ctx->r11 << 1);
    // 0x8006A9F8: addu        $t5, $t5, $t4
    ctx->r13 = ADD32(ctx->r13, ctx->r12);
    // 0x8006A9FC: lhu         $t5, -0x13DC($t5)
    ctx->r13 = MEM_HU(ctx->r13, -0X13DC);
    // 0x8006AA00: sw          $a3, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r7;
    // 0x8006AA04: sll         $t6, $t5, 2
    ctx->r14 = S32(ctx->r13 << 2);
    // 0x8006AA08: addu        $a0, $a0, $t6
    ctx->r4 = ADD32(ctx->r4, ctx->r14);
    // 0x8006AA0C: lw          $a0, 0x5F10($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X5F10);
    // 0x8006AA10: jal         0x80272CF8
    // 0x8006AA14: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    LOOKUP_FUNC(0x80272CF8)(rdram, ctx);
        goto after_4;
    // 0x8006AA14: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    after_4:
    // 0x8006AA18: lw          $t7, 0xE0($s0)
    ctx->r15 = MEM_W(ctx->r16, 0XE0);
    // 0x8006AA1C: lw          $a3, 0x64($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X64);
    // 0x8006AA20: lw          $v0, 0xC($t7)
    ctx->r2 = MEM_W(ctx->r15, 0XC);
    // 0x8006AA24: lh          $a1, 0xE8($s0)
    ctx->r5 = MEM_H(ctx->r16, 0XE8);
    // 0x8006AA28: andi        $a2, $v0, 0xFFFF
    ctx->r6 = ctx->r2 & 0XFFFF;
    // 0x8006AA2C: addiu       $a2, $a2, 0x1
    ctx->r6 = ADD32(ctx->r6, 0X1);
    // 0x8006AA30: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8006AA34: jal         0x8006A774
    // 0x8006AA38: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    func_8006A774(rdram, ctx);
        goto after_5;
    // 0x8006AA38: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    after_5:
    // 0x8006AA3C: b           L_8006AD50
    // 0x8006AA40: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_8006AD50;
    // 0x8006AA40: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_8006AA44:
    // 0x8006AA44: lh          $v0, 0xEA($s0)
    ctx->r2 = MEM_H(ctx->r16, 0XEA);
    // 0x8006AA48: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x8006AA4C: beq         $v0, $zero, L_8006AA58
    if (ctx->r2 == 0) {
        // 0x8006AA50: addiu       $t8, $v0, -0x1
        ctx->r24 = ADD32(ctx->r2, -0X1);
            goto L_8006AA58;
    }
    // 0x8006AA50: addiu       $t8, $v0, -0x1
    ctx->r24 = ADD32(ctx->r2, -0X1);
    // 0x8006AA54: sh          $t8, 0xEA($s0)
    MEM_H(0XEA, ctx->r16) = ctx->r24;
L_8006AA58:
    // 0x8006AA58: lwc1        $f12, 0xEC($s0)
    ctx->f12.u32l = MEM_W(ctx->r16, 0XEC);
    // 0x8006AA5C: lwc1        $f14, -0x58F0($at)
    ctx->f14.u32l = MEM_W(ctx->r1, -0X58F0);
    // 0x8006AA60: jal         0x80279520
    // 0x8006AA64: addiu       $a2, $s0, 0x8C
    ctx->r6 = ADD32(ctx->r16, 0X8C);
    LOOKUP_FUNC(0x80279520)(rdram, ctx);
        goto after_6;
    // 0x8006AA64: addiu       $a2, $s0, 0x8C
    ctx->r6 = ADD32(ctx->r16, 0X8C);
    after_6:
    // 0x8006AA68: lhu         $t9, 0x12($s0)
    ctx->r25 = MEM_HU(ctx->r16, 0X12);
    // 0x8006AA6C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8006AA70: andi        $t0, $t9, 0x8000
    ctx->r8 = ctx->r25 & 0X8000;
    // 0x8006AA74: bne         $t0, $zero, L_8006AA98
    if (ctx->r8 != 0) {
        // 0x8006AA78: nop
    
            goto L_8006AA98;
    }
    // 0x8006AA78: nop

    // 0x8006AA7C: lh          $t1, 0xE4($s0)
    ctx->r9 = MEM_H(ctx->r16, 0XE4);
    // 0x8006AA80: lui         $a1, 0x800B
    ctx->r5 = S32(0X800B << 16);
    // 0x8006AA84: sll         $t2, $t1, 2
    ctx->r10 = S32(ctx->r9 << 2);
    // 0x8006AA88: addu        $a1, $a1, $t2
    ctx->r5 = ADD32(ctx->r5, ctx->r10);
    // 0x8006AA8C: lw          $a1, -0x13D0($a1)
    ctx->r5 = MEM_W(ctx->r5, -0X13D0);
    // 0x8006AA90: jal         0x80276EF0
    // 0x8006AA94: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    LOOKUP_FUNC(0x80276EF0)(rdram, ctx);
        goto after_7;
    // 0x8006AA94: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    after_7:
L_8006AA98:
    // 0x8006AA98: jal         0x80272C74
    // 0x8006AA9C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    LOOKUP_FUNC(0x80272C74)(rdram, ctx);
        goto after_8;
    // 0x8006AA9C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_8:
    // 0x8006AAA0: addiu       $at, $zero, 0x5
    ctx->r1 = ADD32(0, 0X5);
    // 0x8006AAA4: beq         $v0, $at, L_8006AAC0
    if (ctx->r2 == ctx->r1) {
        // 0x8006AAA8: nop
    
            goto L_8006AAC0;
    }
    // 0x8006AAA8: nop

    // 0x8006AAAC: lhu         $t3, 0x12($s0)
    ctx->r11 = MEM_HU(ctx->r16, 0X12);
    // 0x8006AAB0: nop

    // 0x8006AAB4: andi        $t4, $t3, 0x8000
    ctx->r12 = ctx->r11 & 0X8000;
    // 0x8006AAB8: beq         $t4, $zero, L_8006AD50
    if (ctx->r12 == 0) {
        // 0x8006AABC: lw          $ra, 0x24($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X24);
            goto L_8006AD50;
    }
    // 0x8006AABC: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_8006AAC0:
    // 0x8006AAC0: lhu         $t5, 0x10($s0)
    ctx->r13 = MEM_HU(ctx->r16, 0X10);
    // 0x8006AAC4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8006AAC8: addiu       $t6, $t5, 0x1
    ctx->r14 = ADD32(ctx->r13, 0X1);
    // 0x8006AACC: jal         0x80275238
    // 0x8006AAD0: sh          $t6, 0x10($s0)
    MEM_H(0X10, ctx->r16) = ctx->r14;
    LOOKUP_FUNC(0x80275238)(rdram, ctx);
        goto after_9;
    // 0x8006AAD0: sh          $t6, 0x10($s0)
    MEM_H(0X10, ctx->r16) = ctx->r14;
    after_9:
    // 0x8006AAD4: lw          $a1, 0xF0($s0)
    ctx->r5 = MEM_W(ctx->r16, 0XF0);
    // 0x8006AAD8: lw          $a2, 0xF4($s0)
    ctx->r6 = MEM_W(ctx->r16, 0XF4);
    // 0x8006AADC: swc1        $f0, 0x74($s0)
    MEM_W(0X74, ctx->r16) = ctx->f0.u32l;
    // 0x8006AAE0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8006AAE4: jal         0x80272B98
    // 0x8006AAE8: addiu       $a3, $sp, 0x50
    ctx->r7 = ADD32(ctx->r29, 0X50);
    LOOKUP_FUNC(0x80272B98)(rdram, ctx);
        goto after_10;
    // 0x8006AAE8: addiu       $a3, $sp, 0x50
    ctx->r7 = ADD32(ctx->r29, 0X50);
    after_10:
    // 0x8006AAEC: lh          $t7, 0xEA($s0)
    ctx->r15 = MEM_H(ctx->r16, 0XEA);
    // 0x8006AAF0: lwc1        $f10, 0x54($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X54);
    // 0x8006AAF4: mtc1        $t7, $f16
    ctx->f16.u32l = ctx->r15;
    // 0x8006AAF8: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x8006AAFC: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x8006AB00: mtc1        $at, $f5
    ctx->f_odd[(5 - 1) * 2] = ctx->r1;
    // 0x8006AB04: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x8006AB08: div.s       $f0, $f10, $f18
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f0.fl = DIV_S(ctx->f10.fl, ctx->f18.fl);
    // 0x8006AB0C: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x8006AB10: cvt.d.s     $f6, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f6.d = CVT_D_S(ctx->f0.fl);
    // 0x8006AB14: c.lt.d      $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f4.d < ctx->f6.d;
    // 0x8006AB18: nop

    // 0x8006AB1C: bc1f        L_8006AB2C
    if (!c1cs) {
        // 0x8006AB20: nop
    
            goto L_8006AB2C;
    }
    // 0x8006AB20: nop

    // 0x8006AB24: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x8006AB28: nop

L_8006AB2C:
    // 0x8006AB2C: sh          $zero, 0xEA($s0)
    MEM_H(0XEA, ctx->r16) = 0;
    // 0x8006AB30: lw          $a2, 0x50($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X50);
    // 0x8006AB34: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x8006AB38: jal         0x80274C54
    // 0x8006AB3C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    LOOKUP_FUNC(0x80274C54)(rdram, ctx);
        goto after_11;
    // 0x8006AB3C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_11:
    // 0x8006AB40: b           L_8006AD50
    // 0x8006AB44: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_8006AD50;
    // 0x8006AB44: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_8006AB48:
    // 0x8006AB48: lw          $t8, 0x3B20($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X3B20);
    // 0x8006AB4C: nop

    // 0x8006AB50: lw          $t9, 0x8C($t8)
    ctx->r25 = MEM_W(ctx->r24, 0X8C);
    // 0x8006AB54: nop

    // 0x8006AB58: beq         $s0, $t9, L_8006ACA4
    if (ctx->r16 == ctx->r25) {
        // 0x8006AB5C: nop
    
            goto L_8006ACA4;
    }
    // 0x8006AB5C: nop

    // 0x8006AB60: lh          $v1, 0xE8($s0)
    ctx->r3 = MEM_H(ctx->r16, 0XE8);
    // 0x8006AB64: nop

    // 0x8006AB68: bltz        $v1, L_8006ACA4
    if (SIGNED(ctx->r3) < 0) {
        // 0x8006AB6C: nop
    
            goto L_8006ACA4;
    }
    // 0x8006AB6C: nop

    // 0x8006AB70: lh          $t0, 0xEA($s0)
    ctx->r8 = MEM_H(ctx->r16, 0XEA);
    // 0x8006AB74: nop

    // 0x8006AB78: bne         $t0, $zero, L_8006ACA4
    if (ctx->r8 != 0) {
        // 0x8006AB7C: nop
    
            goto L_8006ACA4;
    }
    // 0x8006AB7C: nop

    // 0x8006AB80: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x8006AB84: lwc1        $f16, 0x48($s0)
    ctx->f16.u32l = MEM_W(ctx->r16, 0X48);
    // 0x8006AB88: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x8006AB8C: c.lt.s      $f8, $f16
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f8.fl < ctx->f16.fl;
    // 0x8006AB90: addiu       $a0, $a0, 0x680
    ctx->r4 = ADD32(ctx->r4, 0X680);
    // 0x8006AB94: bc1f        L_8006ACA4
    if (!c1cs) {
        // 0x8006AB98: addiu       $a1, $zero, 0xC
        ctx->r5 = ADD32(0, 0XC);
            goto L_8006ACA4;
    }
    // 0x8006AB98: addiu       $a1, $zero, 0xC
    ctx->r5 = ADD32(0, 0XC);
    // 0x8006AB9C: multu       $v1, $a1
    result = U64(U32(ctx->r3)) * U64(U32(ctx->r5)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8006ABA0: mtc1        $v1, $f10
    ctx->f10.u32l = ctx->r3;
    // 0x8006ABA4: lwc1        $f18, 0x78($s0)
    ctx->f18.u32l = MEM_W(ctx->r16, 0X78);
    // 0x8006ABA8: cvt.s.w     $f0, $f10
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    ctx->f0.fl = CVT_S_W(ctx->f10.u32l);
    // 0x8006ABAC: lwc1        $f8, 0x70($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X70);
    // 0x8006ABB0: lwc1        $f6, 0x4C($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X4C);
    // 0x8006ABB4: mul.s       $f4, $f0, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = MUL_S(ctx->f0.fl, ctx->f18.fl);
    // 0x8006ABB8: lwc1        $f10, 0x44($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X44);
    // 0x8006ABBC: addiu       $t2, $sp, 0x50
    ctx->r10 = ADD32(ctx->r29, 0X50);
    // 0x8006ABC0: sw          $t2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r10;
    // 0x8006ABC4: mul.s       $f16, $f0, $f8
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f16.fl = MUL_S(ctx->f0.fl, ctx->f8.fl);
    // 0x8006ABC8: add.s       $f12, $f4, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f12.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x8006ABCC: mflo        $t1
    ctx->r9 = lo;
    // 0x8006ABD0: addu        $v0, $a0, $t1
    ctx->r2 = ADD32(ctx->r4, ctx->r9);
    // 0x8006ABD4: lw          $a2, 0x8($v0)
    ctx->r6 = MEM_W(ctx->r2, 0X8);
    // 0x8006ABD8: lw          $a3, 0x0($v0)
    ctx->r7 = MEM_W(ctx->r2, 0X0);
    // 0x8006ABDC: jal         0x80272B1C
    // 0x8006ABE0: add.s       $f14, $f16, $f10
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f14.fl = ctx->f16.fl + ctx->f10.fl;
    LOOKUP_FUNC(0x80272B1C)(rdram, ctx);
        goto after_12;
    // 0x8006ABE0: add.s       $f14, $f16, $f10
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f14.fl = ctx->f16.fl + ctx->f10.fl;
    after_12:
    // 0x8006ABE4: lwc1        $f12, 0x8C($s0)
    ctx->f12.u32l = MEM_W(ctx->r16, 0X8C);
    // 0x8006ABE8: lwc1        $f14, 0x50($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X50);
    // 0x8006ABEC: jal         0x8027924C
    // 0x8006ABF0: nop

    LOOKUP_FUNC(0x8027924C)(rdram, ctx);
        goto after_13;
    // 0x8006ABF0: nop

    after_13:
    // 0x8006ABF4: swc1        $f0, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f0.u32l;
    // 0x8006ABF8: jal         0x80080E80
    // 0x8006ABFC: mov.s       $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    ctx->f12.fl = ctx->f0.fl;
    func_80080E80(rdram, ctx);
        goto after_14;
    // 0x8006ABFC: mov.s       $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    ctx->f12.fl = ctx->f0.fl;
    after_14:
    // 0x8006AC00: jal         0x80272AEC
    // 0x8006AC04: mov.s       $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    ctx->f12.fl = ctx->f0.fl;
    LOOKUP_FUNC(0x80272AEC)(rdram, ctx);
        goto after_15;
    // 0x8006AC04: mov.s       $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    ctx->f12.fl = ctx->f0.fl;
    after_15:
    // 0x8006AC08: lwc1        $f4, 0x54($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X54);
    // 0x8006AC0C: lui         $at, 0x4170
    ctx->r1 = S32(0X4170 << 16);
    // 0x8006AC10: mul.s       $f6, $f0, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f0.fl, ctx->f4.fl);
    // 0x8006AC14: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x8006AC18: lwc1        $f16, 0x3C($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x8006AC1C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8006AC20: c.lt.s      $f18, $f6
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f18.fl < ctx->f6.fl;
    // 0x8006AC24: nop

    // 0x8006AC28: bc1f        L_8006AC94
    if (!c1cs) {
        // 0x8006AC2C: nop
    
            goto L_8006AC94;
    }
    // 0x8006AC2C: nop

    // 0x8006AC30: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x8006AC34: addiu       $t3, $zero, 0x3
    ctx->r11 = ADD32(0, 0X3);
    // 0x8006AC38: c.lt.s      $f8, $f16
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f8.fl < ctx->f16.fl;
    // 0x8006AC3C: addiu       $t4, $zero, 0x4
    ctx->r12 = ADD32(0, 0X4);
    // 0x8006AC40: bc1f        L_8006AC50
    if (!c1cs) {
        // 0x8006AC44: nop
    
            goto L_8006AC50;
    }
    // 0x8006AC44: nop

    // 0x8006AC48: b           L_8006AC54
    // 0x8006AC4C: sh          $t3, 0xE4($s0)
    MEM_H(0XE4, ctx->r16) = ctx->r11;
        goto L_8006AC54;
    // 0x8006AC4C: sh          $t3, 0xE4($s0)
    MEM_H(0XE4, ctx->r16) = ctx->r11;
L_8006AC50:
    // 0x8006AC50: sh          $t4, 0xE4($s0)
    MEM_H(0XE4, ctx->r16) = ctx->r12;
L_8006AC54:
    // 0x8006AC54: lh          $t5, 0xE4($s0)
    ctx->r13 = MEM_H(ctx->r16, 0XE4);
    // 0x8006AC58: lui         $a1, 0x800B
    ctx->r5 = S32(0X800B << 16);
    // 0x8006AC5C: sll         $t6, $t5, 1
    ctx->r14 = S32(ctx->r13 << 1);
    // 0x8006AC60: addu        $a1, $a1, $t6
    ctx->r5 = ADD32(ctx->r5, ctx->r14);
    // 0x8006AC64: lhu         $a1, -0x13DC($a1)
    ctx->r5 = MEM_HU(ctx->r5, -0X13DC);
    // 0x8006AC68: jal         0x80272D3C
    // 0x8006AC6C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    LOOKUP_FUNC(0x80272D3C)(rdram, ctx);
        goto after_16;
    // 0x8006AC6C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_16:
    // 0x8006AC70: lh          $t7, 0xE4($s0)
    ctx->r15 = MEM_H(ctx->r16, 0XE4);
    // 0x8006AC74: lui         $t9, 0x800B
    ctx->r25 = S32(0X800B << 16);
    // 0x8006AC78: sll         $t8, $t7, 1
    ctx->r24 = S32(ctx->r15 << 1);
    // 0x8006AC7C: lh          $t0, 0xEA($s0)
    ctx->r8 = MEM_H(ctx->r16, 0XEA);
    // 0x8006AC80: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x8006AC84: lhu         $t9, -0x13E8($t9)
    ctx->r25 = MEM_HU(ctx->r25, -0X13E8);
    // 0x8006AC88: addiu       $t1, $t0, 0x1
    ctx->r9 = ADD32(ctx->r8, 0X1);
    // 0x8006AC8C: sh          $t1, 0xEA($s0)
    MEM_H(0XEA, ctx->r16) = ctx->r9;
    // 0x8006AC90: sh          $t9, 0xE6($s0)
    MEM_H(0XE6, ctx->r16) = ctx->r25;
L_8006AC94:
    // 0x8006AC94: lh          $t2, 0xE8($s0)
    ctx->r10 = MEM_H(ctx->r16, 0XE8);
    // 0x8006AC98: nop

    // 0x8006AC9C: addiu       $t3, $t2, -0x1
    ctx->r11 = ADD32(ctx->r10, -0X1);
    // 0x8006ACA0: sh          $t3, 0xE8($s0)
    MEM_H(0XE8, ctx->r16) = ctx->r11;
L_8006ACA4:
    // 0x8006ACA4: jal         0x80275534
    // 0x8006ACA8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    LOOKUP_FUNC(0x80275534)(rdram, ctx);
        goto after_17;
    // 0x8006ACA8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_17:
    // 0x8006ACAC: beq         $v0, $zero, L_8006ACC0
    if (ctx->r2 == 0) {
        // 0x8006ACB0: nop
    
            goto L_8006ACC0;
    }
    // 0x8006ACB0: nop

    // 0x8006ACB4: lw          $a0, 0xCC($s0)
    ctx->r4 = MEM_W(ctx->r16, 0XCC);
    // 0x8006ACB8: jal         0x80001218
    // 0x8006ACBC: nop

    func_80001218(rdram, ctx);
        goto after_18;
    // 0x8006ACBC: nop

    after_18:
L_8006ACC0:
    // 0x8006ACC0: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x8006ACC4: lwc1        $f4, 0x48($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X48);
    // 0x8006ACC8: nop

    // 0x8006ACCC: c.eq.s      $f10, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f10.fl == ctx->f4.fl;
    // 0x8006ACD0: nop

    // 0x8006ACD4: bc1t        L_8006ACE4
    if (c1cs) {
        // 0x8006ACD8: nop
    
            goto L_8006ACE4;
    }
    // 0x8006ACD8: nop

    // 0x8006ACDC: jal         0x8006B5C0
    // 0x8006ACE0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8006B5C0(rdram, ctx);
        goto after_19;
    // 0x8006ACE0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_19:
L_8006ACE4:
    // 0x8006ACE4: lhu         $t4, 0x12($s0)
    ctx->r12 = MEM_HU(ctx->r16, 0X12);
    // 0x8006ACE8: nop

    // 0x8006ACEC: andi        $t5, $t4, 0x8000
    ctx->r13 = ctx->r12 & 0X8000;
    // 0x8006ACF0: bne         $t5, $zero, L_8006AD30
    if (ctx->r13 != 0) {
        // 0x8006ACF4: nop
    
            goto L_8006AD30;
    }
    // 0x8006ACF4: nop

    // 0x8006ACF8: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x8006ACFC: lwc1        $f6, 0x48($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X48);
    // 0x8006AD00: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8006AD04: c.eq.s      $f18, $f6
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f18.fl == ctx->f6.fl;
    // 0x8006AD08: nop

    // 0x8006AD0C: bc1t        L_8006AD30
    if (c1cs) {
        // 0x8006AD10: nop
    
            goto L_8006AD30;
    }
    // 0x8006AD10: nop

    // 0x8006AD14: lh          $t6, 0xE4($s0)
    ctx->r14 = MEM_H(ctx->r16, 0XE4);
    // 0x8006AD18: lui         $a1, 0x800B
    ctx->r5 = S32(0X800B << 16);
    // 0x8006AD1C: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x8006AD20: addu        $a1, $a1, $t7
    ctx->r5 = ADD32(ctx->r5, ctx->r15);
    // 0x8006AD24: lw          $a1, -0x13D0($a1)
    ctx->r5 = MEM_W(ctx->r5, -0X13D0);
    // 0x8006AD28: jal         0x80276EF0
    // 0x8006AD2C: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    LOOKUP_FUNC(0x80276EF0)(rdram, ctx);
        goto after_20;
    // 0x8006AD2C: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    after_20:
L_8006AD30:
    // 0x8006AD30: jal         0x80272C74
    // 0x8006AD34: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    LOOKUP_FUNC(0x80272C74)(rdram, ctx);
        goto after_21;
    // 0x8006AD34: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_21:
    // 0x8006AD38: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8006AD3C: bne         $v0, $at, L_8006AD4C
    if (ctx->r2 != ctx->r1) {
        // 0x8006AD40: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_8006AD4C;
    }
    // 0x8006AD40: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8006AD44: jal         0x8024BC08
    // 0x8006AD48: addiu       $a1, $zero, 0x21
    ctx->r5 = ADD32(0, 0X21);
    LOOKUP_FUNC(0x8024BC08)(rdram, ctx);
        goto after_22;
    // 0x8006AD48: addiu       $a1, $zero, 0x21
    ctx->r5 = ADD32(0, 0X21);
    after_22:
L_8006AD4C:
    // 0x8006AD4C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_8006AD50:
    // 0x8006AD50: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x8006AD54: jr          $ra
    // 0x8006AD58: addiu       $sp, $sp, 0x68
    ctx->r29 = ADD32(ctx->r29, 0X68);
    return;
    // 0x8006AD58: addiu       $sp, $sp, 0x68
    ctx->r29 = ADD32(ctx->r29, 0X68);
;}
RECOMP_FUNC void func_8006AD5C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8006AD5C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8006AD60: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8006AD64: lw          $t6, 0xC4($a0)
    ctx->r14 = MEM_W(ctx->r4, 0XC4);
    // 0x8006AD68: nop

    // 0x8006AD6C: lhu         $t7, 0x4($t6)
    ctx->r15 = MEM_HU(ctx->r14, 0X4);
    // 0x8006AD70: nop

    // 0x8006AD74: andi        $t8, $t7, 0x2
    ctx->r24 = ctx->r15 & 0X2;
    // 0x8006AD78: beq         $t8, $zero, L_8006AD8C
    if (ctx->r24 == 0) {
        // 0x8006AD7C: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_8006AD8C;
    }
    // 0x8006AD7C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8006AD80: jal         0x8024BC08
    // 0x8006AD84: addiu       $a1, $zero, 0x24
    ctx->r5 = ADD32(0, 0X24);
    LOOKUP_FUNC(0x8024BC08)(rdram, ctx);
        goto after_0;
    // 0x8006AD84: addiu       $a1, $zero, 0x24
    ctx->r5 = ADD32(0, 0X24);
    after_0:
    // 0x8006AD88: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8006AD8C:
    // 0x8006AD8C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8006AD90: jr          $ra
    // 0x8006AD94: nop

    return;
    // 0x8006AD94: nop

;}
RECOMP_FUNC void func_8006AD98(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8006AD98: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8006AD9C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8006ADA0: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8006ADA4: jal         0x80272C74
    // 0x8006ADA8: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    LOOKUP_FUNC(0x80272C74)(rdram, ctx);
        goto after_0;
    // 0x8006ADA8: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    after_0:
    // 0x8006ADAC: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8006ADB0: bne         $v0, $at, L_8006AE10
    if (ctx->r2 != ctx->r1) {
        // 0x8006ADB4: lui         $v0, 0x8012
        ctx->r2 = S32(0X8012 << 16);
            goto L_8006AE10;
    }
    // 0x8006ADB4: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x8006ADB8: addiu       $v0, $v0, 0xB48
    ctx->r2 = ADD32(ctx->r2, 0XB48);
    // 0x8006ADBC: lhu         $t6, 0x0($v0)
    ctx->r14 = MEM_HU(ctx->r2, 0X0);
    // 0x8006ADC0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8006ADC4: addiu       $t7, $t6, 0x1
    ctx->r15 = ADD32(ctx->r14, 0X1);
    // 0x8006ADC8: sh          $t7, 0x0($v0)
    MEM_H(0X0, ctx->r2) = ctx->r15;
    // 0x8006ADCC: lw          $t8, 0xCC($s0)
    ctx->r24 = MEM_W(ctx->r16, 0XCC);
    // 0x8006ADD0: nop

    // 0x8006ADD4: lw          $t9, 0x30($t8)
    ctx->r25 = MEM_W(ctx->r24, 0X30);
    // 0x8006ADD8: nop

    // 0x8006ADDC: sh          $zero, 0x4($t9)
    MEM_H(0X4, ctx->r25) = 0;
    // 0x8006ADE0: lhu         $t0, 0x12($s0)
    ctx->r8 = MEM_HU(ctx->r16, 0X12);
    // 0x8006ADE4: nop

    // 0x8006ADE8: andi        $t1, $t0, 0x8
    ctx->r9 = ctx->r8 & 0X8;
    // 0x8006ADEC: bne         $t1, $zero, L_8006AE08
    if (ctx->r9 != 0) {
        // 0x8006ADF0: nop
    
            goto L_8006AE08;
    }
    // 0x8006ADF0: nop

    // 0x8006ADF4: lhu         $t2, 0x0($v0)
    ctx->r10 = MEM_HU(ctx->r2, 0X0);
    // 0x8006ADF8: nop

    // 0x8006ADFC: slti        $at, $t2, 0x4
    ctx->r1 = SIGNED(ctx->r10) < 0X4 ? 1 : 0;
    // 0x8006AE00: bne         $at, $zero, L_8006AE10
    if (ctx->r1 != 0) {
        // 0x8006AE04: nop
    
            goto L_8006AE10;
    }
    // 0x8006AE04: nop

L_8006AE08:
    // 0x8006AE08: jal         0x8024BC08
    // 0x8006AE0C: addiu       $a1, $zero, 0x21
    ctx->r5 = ADD32(0, 0X21);
    LOOKUP_FUNC(0x8024BC08)(rdram, ctx);
        goto after_1;
    // 0x8006AE0C: addiu       $a1, $zero, 0x21
    ctx->r5 = ADD32(0, 0X21);
    after_1:
L_8006AE10:
    // 0x8006AE10: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x8006AE14: lwc1        $f14, -0x58EC($at)
    ctx->f14.u32l = MEM_W(ctx->r1, -0X58EC);
    // 0x8006AE18: lwc1        $f12, 0xB0($s0)
    ctx->f12.u32l = MEM_W(ctx->r16, 0XB0);
    // 0x8006AE1C: jal         0x80279520
    // 0x8006AE20: addiu       $a2, $s0, 0x8C
    ctx->r6 = ADD32(ctx->r16, 0X8C);
    LOOKUP_FUNC(0x80279520)(rdram, ctx);
        goto after_2;
    // 0x8006AE20: addiu       $a2, $s0, 0x8C
    ctx->r6 = ADD32(ctx->r16, 0X8C);
    after_2:
    // 0x8006AE24: lw          $a2, 0x8C($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X8C);
    // 0x8006AE28: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8006AE2C: jal         0x80274C54
    // 0x8006AE30: lui         $a1, 0x3F80
    ctx->r5 = S32(0X3F80 << 16);
    LOOKUP_FUNC(0x80274C54)(rdram, ctx);
        goto after_3;
    // 0x8006AE30: lui         $a1, 0x3F80
    ctx->r5 = S32(0X3F80 << 16);
    after_3:
    // 0x8006AE34: jal         0x8006B5C0
    // 0x8006AE38: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8006B5C0(rdram, ctx);
        goto after_4;
    // 0x8006AE38: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_4:
    // 0x8006AE3C: jal         0x8006AD5C
    // 0x8006AE40: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8006AD5C(rdram, ctx);
        goto after_5;
    // 0x8006AE40: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_5:
    // 0x8006AE44: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8006AE48: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8006AE4C: jr          $ra
    // 0x8006AE50: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x8006AE50: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_8006AE54(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8006AE54: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8006AE58: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8006AE5C: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8006AE60: lhu         $v1, 0x10($a0)
    ctx->r3 = MEM_HU(ctx->r4, 0X10);
    // 0x8006AE64: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x8006AE68: beq         $v1, $zero, L_8006AE84
    if (ctx->r3 == 0) {
        // 0x8006AE6C: lui         $t6, 0x8009
        ctx->r14 = S32(0X8009 << 16);
            goto L_8006AE84;
    }
    // 0x8006AE6C: lui         $t6, 0x8009
    ctx->r14 = S32(0X8009 << 16);
    // 0x8006AE70: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8006AE74: beq         $v1, $at, L_8006B048
    if (ctx->r3 == ctx->r1) {
        // 0x8006AE78: nop
    
            goto L_8006B048;
    }
    // 0x8006AE78: nop

    // 0x8006AE7C: b           L_8006B0A0
    // 0x8006AE80: nop

        goto L_8006B0A0;
    // 0x8006AE80: nop

L_8006AE84:
    // 0x8006AE84: lw          $t6, 0x3B20($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X3B20);
    // 0x8006AE88: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x8006AE8C: lhu         $t7, 0xC2($t6)
    ctx->r15 = MEM_HU(ctx->r14, 0XC2);
    // 0x8006AE90: addiu       $a2, $s0, 0x8C
    ctx->r6 = ADD32(ctx->r16, 0X8C);
    // 0x8006AE94: andi        $t8, $t7, 0x100
    ctx->r24 = ctx->r15 & 0X100;
    // 0x8006AE98: bne         $t8, $zero, L_8006AEEC
    if (ctx->r24 != 0) {
        // 0x8006AE9C: nop
    
            goto L_8006AEEC;
    }
    // 0x8006AE9C: nop

    // 0x8006AEA0: lw          $t9, 0xC8($s0)
    ctx->r25 = MEM_W(ctx->r16, 0XC8);
    // 0x8006AEA4: lwc1        $f9, -0x58E8($at)
    ctx->f_odd[(9 - 1) * 2] = MEM_W(ctx->r1, -0X58E8);
    // 0x8006AEA8: lw          $t0, 0x24($t9)
    ctx->r8 = MEM_W(ctx->r25, 0X24);
    // 0x8006AEAC: lwc1        $f8, -0x58E4($at)
    ctx->f8.u32l = MEM_W(ctx->r1, -0X58E4);
    // 0x8006AEB0: lwc1        $f4, 0x8C0($t0)
    ctx->f4.u32l = MEM_W(ctx->r8, 0X8C0);
    // 0x8006AEB4: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x8006AEB8: cvt.d.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.d = CVT_D_S(ctx->f4.fl);
    // 0x8006AEBC: add.d       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f8.d); 
    ctx->f10.d = ctx->f6.d + ctx->f8.d;
    // 0x8006AEC0: lwc1        $f14, -0x58E0($at)
    ctx->f14.u32l = MEM_W(ctx->r1, -0X58E0);
    // 0x8006AEC4: jal         0x80279520
    // 0x8006AEC8: cvt.s.d     $f12, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f12.fl = CVT_S_D(ctx->f10.d);
    LOOKUP_FUNC(0x80279520)(rdram, ctx);
        goto after_0;
    // 0x8006AEC8: cvt.s.d     $f12, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f12.fl = CVT_S_D(ctx->f10.d);
    after_0:
    // 0x8006AECC: beq         $v0, $zero, L_8006AEEC
    if (ctx->r2 == 0) {
        // 0x8006AED0: lui         $v0, 0x8009
        ctx->r2 = S32(0X8009 << 16);
            goto L_8006AEEC;
    }
    // 0x8006AED0: lui         $v0, 0x8009
    ctx->r2 = S32(0X8009 << 16);
    // 0x8006AED4: lw          $v0, 0x3B20($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X3B20);
    // 0x8006AED8: nop

    // 0x8006AEDC: lhu         $t1, 0xC2($v0)
    ctx->r9 = MEM_HU(ctx->r2, 0XC2);
    // 0x8006AEE0: nop

    // 0x8006AEE4: ori         $t2, $t1, 0x100
    ctx->r10 = ctx->r9 | 0X100;
    // 0x8006AEE8: sh          $t2, 0xC2($v0)
    MEM_H(0XC2, ctx->r2) = ctx->r10;
L_8006AEEC:
    // 0x8006AEEC: lh          $v0, 0xE4($s0)
    ctx->r2 = MEM_H(ctx->r16, 0XE4);
    // 0x8006AEF0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8006AEF4: slti        $v1, $v0, 0x1F
    ctx->r3 = SIGNED(ctx->r2) < 0X1F ? 1 : 0;
    // 0x8006AEF8: addiu       $t3, $v0, 0x1
    ctx->r11 = ADD32(ctx->r2, 0X1);
    // 0x8006AEFC: bne         $v1, $zero, L_8006AF0C
    if (ctx->r3 != 0) {
        // 0x8006AF00: sh          $t3, 0xE4($s0)
        MEM_H(0XE4, ctx->r16) = ctx->r11;
            goto L_8006AF0C;
    }
    // 0x8006AF00: sh          $t3, 0xE4($s0)
    MEM_H(0XE4, ctx->r16) = ctx->r11;
    // 0x8006AF04: jal         0x8024BC08
    // 0x8006AF08: addiu       $a1, $zero, 0x22
    ctx->r5 = ADD32(0, 0X22);
    LOOKUP_FUNC(0x8024BC08)(rdram, ctx);
        goto after_1;
    // 0x8006AF08: addiu       $a1, $zero, 0x22
    ctx->r5 = ADD32(0, 0X22);
    after_1:
L_8006AF0C:
    // 0x8006AF0C: lui         $t4, 0x8012
    ctx->r12 = S32(0X8012 << 16);
    // 0x8006AF10: lhu         $t4, 0xB78($t4)
    ctx->r12 = MEM_HU(ctx->r12, 0XB78);
    // 0x8006AF14: nop

    // 0x8006AF18: bne         $t4, $zero, L_8006B0AC
    if (ctx->r12 != 0) {
        // 0x8006AF1C: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_8006B0AC;
    }
    // 0x8006AF1C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8006AF20: lhu         $t5, 0x12($s0)
    ctx->r13 = MEM_HU(ctx->r16, 0X12);
    // 0x8006AF24: nop

    // 0x8006AF28: andi        $t6, $t5, 0x8
    ctx->r14 = ctx->r13 & 0X8;
    // 0x8006AF2C: bne         $t6, $zero, L_8006AF50
    if (ctx->r14 != 0) {
        // 0x8006AF30: nop
    
            goto L_8006AF50;
    }
    // 0x8006AF30: nop

    // 0x8006AF34: lw          $t7, 0xC8($s0)
    ctx->r15 = MEM_W(ctx->r16, 0XC8);
    // 0x8006AF38: nop

    // 0x8006AF3C: lhu         $t8, 0x8($t7)
    ctx->r24 = MEM_HU(ctx->r15, 0X8);
    // 0x8006AF40: nop

    // 0x8006AF44: andi        $t9, $t8, 0x80
    ctx->r25 = ctx->r24 & 0X80;
    // 0x8006AF48: beq         $t9, $zero, L_8006AF88
    if (ctx->r25 == 0) {
        // 0x8006AF4C: nop
    
            goto L_8006AF88;
    }
    // 0x8006AF4C: nop

L_8006AF50:
    // 0x8006AF50: lw          $t0, 0xC4($s0)
    ctx->r8 = MEM_W(ctx->r16, 0XC4);
    // 0x8006AF54: nop

    // 0x8006AF58: lhu         $t1, 0x2($t0)
    ctx->r9 = MEM_HU(ctx->r8, 0X2);
    // 0x8006AF5C: nop

    // 0x8006AF60: andi        $t2, $t1, 0x1
    ctx->r10 = ctx->r9 & 0X1;
    // 0x8006AF64: bne         $t2, $zero, L_8006B0A0
    if (ctx->r10 != 0) {
        // 0x8006AF68: nop
    
            goto L_8006B0A0;
    }
    // 0x8006AF68: nop

    // 0x8006AF6C: lw          $t3, 0xC8($s0)
    ctx->r11 = MEM_W(ctx->r16, 0XC8);
    // 0x8006AF70: nop

    // 0x8006AF74: lhu         $t4, 0x8($t3)
    ctx->r12 = MEM_HU(ctx->r11, 0X8);
    // 0x8006AF78: nop

    // 0x8006AF7C: andi        $t5, $t4, 0x80
    ctx->r13 = ctx->r12 & 0X80;
    // 0x8006AF80: beq         $t5, $zero, L_8006B0A0
    if (ctx->r13 == 0) {
        // 0x8006AF84: nop
    
            goto L_8006B0A0;
    }
    // 0x8006AF84: nop

L_8006AF88:
    // 0x8006AF88: sh          $zero, 0xE4($s0)
    MEM_H(0XE4, ctx->r16) = 0;
    // 0x8006AF8C: lui         $t6, 0x8012
    ctx->r14 = S32(0X8012 << 16);
    // 0x8006AF90: lhu         $t6, 0xB48($t6)
    ctx->r14 = MEM_HU(ctx->r14, 0XB48);
    // 0x8006AF94: nop

    // 0x8006AF98: slti        $at, $t6, 0x4
    ctx->r1 = SIGNED(ctx->r14) < 0X4 ? 1 : 0;
    // 0x8006AF9C: beq         $at, $zero, L_8006AFE0
    if (ctx->r1 == 0) {
        // 0x8006AFA0: lui         $at, 0x800E
        ctx->r1 = S32(0X800E << 16);
            goto L_8006AFE0;
    }
    // 0x8006AFA0: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x8006AFA4: lwc1        $f14, -0x58DC($at)
    ctx->f14.u32l = MEM_W(ctx->r1, -0X58DC);
    // 0x8006AFA8: lwc1        $f12, 0xB0($s0)
    ctx->f12.u32l = MEM_W(ctx->r16, 0XB0);
    // 0x8006AFAC: jal         0x80279520
    // 0x8006AFB0: addiu       $a2, $s0, 0x8C
    ctx->r6 = ADD32(ctx->r16, 0X8C);
    LOOKUP_FUNC(0x80279520)(rdram, ctx);
        goto after_2;
    // 0x8006AFB0: addiu       $a2, $s0, 0x8C
    ctx->r6 = ADD32(ctx->r16, 0X8C);
    after_2:
    // 0x8006AFB4: beq         $v0, $zero, L_8006B0A0
    if (ctx->r2 == 0) {
        // 0x8006AFB8: lui         $v0, 0x8009
        ctx->r2 = S32(0X8009 << 16);
            goto L_8006B0A0;
    }
    // 0x8006AFB8: lui         $v0, 0x8009
    ctx->r2 = S32(0X8009 << 16);
    // 0x8006AFBC: lw          $v0, 0x3B20($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X3B20);
    // 0x8006AFC0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8006AFC4: lhu         $t7, 0xC2($v0)
    ctx->r15 = MEM_HU(ctx->r2, 0XC2);
    // 0x8006AFC8: addiu       $a1, $zero, 0x23
    ctx->r5 = ADD32(0, 0X23);
    // 0x8006AFCC: ori         $t8, $t7, 0x100
    ctx->r24 = ctx->r15 | 0X100;
    // 0x8006AFD0: jal         0x8024BC08
    // 0x8006AFD4: sh          $t8, 0xC2($v0)
    MEM_H(0XC2, ctx->r2) = ctx->r24;
    LOOKUP_FUNC(0x8024BC08)(rdram, ctx);
        goto after_3;
    // 0x8006AFD4: sh          $t8, 0xC2($v0)
    MEM_H(0XC2, ctx->r2) = ctx->r24;
    after_3:
    // 0x8006AFD8: b           L_8006B0A0
    // 0x8006AFDC: nop

        goto L_8006B0A0;
    // 0x8006AFDC: nop

L_8006AFE0:
    // 0x8006AFE0: lwc1        $f12, 0x8C($s0)
    ctx->f12.u32l = MEM_W(ctx->r16, 0X8C);
    // 0x8006AFE4: lwc1        $f14, 0xB0($s0)
    ctx->f14.u32l = MEM_W(ctx->r16, 0XB0);
    // 0x8006AFE8: jal         0x80279308
    // 0x8006AFEC: nop

    LOOKUP_FUNC(0x80279308)(rdram, ctx);
        goto after_4;
    // 0x8006AFEC: nop

    after_4:
    // 0x8006AFF0: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x8006AFF4: lwc1        $f17, -0x58D8($at)
    ctx->f_odd[(17 - 1) * 2] = MEM_W(ctx->r1, -0X58D8);
    // 0x8006AFF8: lwc1        $f16, -0x58D4($at)
    ctx->f16.u32l = MEM_W(ctx->r1, -0X58D4);
    // 0x8006AFFC: cvt.d.s     $f18, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f18.d = CVT_D_S(ctx->f0.fl);
    // 0x8006B000: c.lt.d      $f16, $f18
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f16.d < ctx->f18.d;
    // 0x8006B004: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8006B008: bc1f        L_8006B030
    if (!c1cs) {
        // 0x8006B00C: lui         $at, 0x800E
        ctx->r1 = S32(0X800E << 16);
            goto L_8006B030;
    }
    // 0x8006B00C: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x8006B010: addiu       $a1, $zero, 0x109
    ctx->r5 = ADD32(0, 0X109);
    // 0x8006B014: jal         0x80272D3C
    // 0x8006B018: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    LOOKUP_FUNC(0x80272D3C)(rdram, ctx);
        goto after_5;
    // 0x8006B018: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_5:
    // 0x8006B01C: lhu         $t9, 0x10($s0)
    ctx->r25 = MEM_HU(ctx->r16, 0X10);
    // 0x8006B020: nop

    // 0x8006B024: addiu       $t0, $t9, 0x1
    ctx->r8 = ADD32(ctx->r25, 0X1);
    // 0x8006B028: b           L_8006B0A0
    // 0x8006B02C: sh          $t0, 0x10($s0)
    MEM_H(0X10, ctx->r16) = ctx->r8;
        goto L_8006B0A0;
    // 0x8006B02C: sh          $t0, 0x10($s0)
    MEM_H(0X10, ctx->r16) = ctx->r8;
L_8006B030:
    // 0x8006B030: lwc1        $f12, 0xB0($s0)
    ctx->f12.u32l = MEM_W(ctx->r16, 0XB0);
    // 0x8006B034: lwc1        $f14, -0x58D0($at)
    ctx->f14.u32l = MEM_W(ctx->r1, -0X58D0);
    // 0x8006B038: jal         0x80279520
    // 0x8006B03C: addiu       $a2, $s0, 0x8C
    ctx->r6 = ADD32(ctx->r16, 0X8C);
    LOOKUP_FUNC(0x80279520)(rdram, ctx);
        goto after_6;
    // 0x8006B03C: addiu       $a2, $s0, 0x8C
    ctx->r6 = ADD32(ctx->r16, 0X8C);
    after_6:
    // 0x8006B040: b           L_8006B0A0
    // 0x8006B044: nop

        goto L_8006B0A0;
    // 0x8006B044: nop

L_8006B048:
    // 0x8006B048: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x8006B04C: lwc1        $f14, -0x58CC($at)
    ctx->f14.u32l = MEM_W(ctx->r1, -0X58CC);
    // 0x8006B050: lwc1        $f12, 0xB0($s0)
    ctx->f12.u32l = MEM_W(ctx->r16, 0XB0);
    // 0x8006B054: jal         0x80279520
    // 0x8006B058: addiu       $a2, $s0, 0x8C
    ctx->r6 = ADD32(ctx->r16, 0X8C);
    LOOKUP_FUNC(0x80279520)(rdram, ctx);
        goto after_7;
    // 0x8006B058: addiu       $a2, $s0, 0x8C
    ctx->r6 = ADD32(ctx->r16, 0X8C);
    after_7:
    // 0x8006B05C: bne         $v0, $zero, L_8006B078
    if (ctx->r2 != 0) {
        // 0x8006B060: nop
    
            goto L_8006B078;
    }
    // 0x8006B060: nop

    // 0x8006B064: lhu         $t1, 0x12($s0)
    ctx->r9 = MEM_HU(ctx->r16, 0X12);
    // 0x8006B068: nop

    // 0x8006B06C: andi        $t2, $t1, 0x8
    ctx->r10 = ctx->r9 & 0X8;
    // 0x8006B070: beq         $t2, $zero, L_8006B0A0
    if (ctx->r10 == 0) {
        // 0x8006B074: nop
    
            goto L_8006B0A0;
    }
    // 0x8006B074: nop

L_8006B078:
    // 0x8006B078: jal         0x80272C74
    // 0x8006B07C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    LOOKUP_FUNC(0x80272C74)(rdram, ctx);
        goto after_8;
    // 0x8006B07C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_8:
    // 0x8006B080: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8006B084: bne         $v0, $at, L_8006B0A0
    if (ctx->r2 != ctx->r1) {
        // 0x8006B088: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_8006B0A0;
    }
    // 0x8006B088: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8006B08C: sh          $zero, 0x10($s0)
    MEM_H(0X10, ctx->r16) = 0;
    // 0x8006B090: sh          $zero, 0xE4($s0)
    MEM_H(0XE4, ctx->r16) = 0;
    // 0x8006B094: addiu       $a1, $zero, 0x1BF
    ctx->r5 = ADD32(0, 0X1BF);
    // 0x8006B098: jal         0x80272D3C
    // 0x8006B09C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    LOOKUP_FUNC(0x80272D3C)(rdram, ctx);
        goto after_9;
    // 0x8006B09C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_9:
L_8006B0A0:
    // 0x8006B0A0: jal         0x8006AD5C
    // 0x8006B0A4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8006AD5C(rdram, ctx);
        goto after_10;
    // 0x8006B0A4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_10:
    // 0x8006B0A8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_8006B0AC:
    // 0x8006B0AC: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8006B0B0: jr          $ra
    // 0x8006B0B4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x8006B0B4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_8006B0B8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8006B0B8: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8006B0BC: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8006B0C0: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8006B0C4: lhu         $v1, 0x10($a0)
    ctx->r3 = MEM_HU(ctx->r4, 0X10);
    // 0x8006B0C8: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x8006B0CC: beq         $v1, $zero, L_8006B0E8
    if (ctx->r3 == 0) {
        // 0x8006B0D0: or          $v0, $v1, $zero
        ctx->r2 = ctx->r3 | 0;
            goto L_8006B0E8;
    }
    // 0x8006B0D0: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    // 0x8006B0D4: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8006B0D8: beq         $v0, $at, L_8006B164
    if (ctx->r2 == ctx->r1) {
        // 0x8006B0DC: nop
    
            goto L_8006B164;
    }
    // 0x8006B0DC: nop

    // 0x8006B0E0: b           L_8006B1CC
    // 0x8006B0E4: lw          $t6, 0xC4($s0)
    ctx->r14 = MEM_W(ctx->r16, 0XC4);
        goto L_8006B1CC;
    // 0x8006B0E4: lw          $t6, 0xC4($s0)
    ctx->r14 = MEM_W(ctx->r16, 0XC4);
L_8006B0E8:
    // 0x8006B0E8: lw          $t7, 0xC8($s0)
    ctx->r15 = MEM_W(ctx->r16, 0XC8);
    // 0x8006B0EC: addiu       $t6, $v1, 0x1
    ctx->r14 = ADD32(ctx->r3, 0X1);
    // 0x8006B0F0: sh          $t6, 0x10($s0)
    MEM_H(0X10, ctx->r16) = ctx->r14;
    // 0x8006B0F4: lw          $a0, 0x24($t7)
    ctx->r4 = MEM_W(ctx->r15, 0X24);
    // 0x8006B0F8: jal         0x80267044
    // 0x8006B0FC: nop

    LOOKUP_FUNC(0x80267044)(rdram, ctx);
        goto after_0;
    // 0x8006B0FC: nop

    after_0:
    // 0x8006B100: lwc1        $f12, 0x8C($s0)
    ctx->f12.u32l = MEM_W(ctx->r16, 0X8C);
    // 0x8006B104: jal         0x80279308
    // 0x8006B108: mov.s       $f14, $f0
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    ctx->f14.fl = ctx->f0.fl;
    LOOKUP_FUNC(0x80279308)(rdram, ctx);
        goto after_1;
    // 0x8006B108: mov.s       $f14, $f0
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    ctx->f14.fl = ctx->f0.fl;
    after_1:
    // 0x8006B10C: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x8006B110: lwc1        $f7, -0x58C8($at)
    ctx->f_odd[(7 - 1) * 2] = MEM_W(ctx->r1, -0X58C8);
    // 0x8006B114: lwc1        $f6, -0x58C4($at)
    ctx->f6.u32l = MEM_W(ctx->r1, -0X58C4);
    // 0x8006B118: cvt.d.s     $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f4.d = CVT_D_S(ctx->f0.fl);
    // 0x8006B11C: c.lt.d      $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f4.d < ctx->f6.d;
    // 0x8006B120: nop

    // 0x8006B124: bc1f        L_8006B138
    if (!c1cs) {
        // 0x8006B128: nop
    
            goto L_8006B138;
    }
    // 0x8006B128: nop

    // 0x8006B12C: jal         0x80059898
    // 0x8006B130: addiu       $a0, $zero, 0x3
    ctx->r4 = ADD32(0, 0X3);
    func_80059898(rdram, ctx);
        goto after_2;
    // 0x8006B130: addiu       $a0, $zero, 0x3
    ctx->r4 = ADD32(0, 0X3);
    after_2:
    // 0x8006B134: sh          $v0, 0xE4($s0)
    MEM_H(0XE4, ctx->r16) = ctx->r2;
L_8006B138:
    // 0x8006B138: lh          $t8, 0xE4($s0)
    ctx->r24 = MEM_H(ctx->r16, 0XE4);
    // 0x8006B13C: lui         $v1, 0x800B
    ctx->r3 = S32(0X800B << 16);
    // 0x8006B140: addiu       $v1, $v1, -0x13B8
    ctx->r3 = ADD32(ctx->r3, -0X13B8);
    // 0x8006B144: sll         $t9, $t8, 2
    ctx->r25 = S32(ctx->r24 << 2);
    // 0x8006B148: addu        $t0, $v1, $t9
    ctx->r8 = ADD32(ctx->r3, ctx->r25);
    // 0x8006B14C: lhu         $a1, 0x0($t0)
    ctx->r5 = MEM_HU(ctx->r8, 0X0);
    // 0x8006B150: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8006B154: jal         0x80272D3C
    // 0x8006B158: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    LOOKUP_FUNC(0x80272D3C)(rdram, ctx);
        goto after_3;
    // 0x8006B158: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_3:
    // 0x8006B15C: b           L_8006B1CC
    // 0x8006B160: lw          $t6, 0xC4($s0)
    ctx->r14 = MEM_W(ctx->r16, 0XC4);
        goto L_8006B1CC;
    // 0x8006B160: lw          $t6, 0xC4($s0)
    ctx->r14 = MEM_W(ctx->r16, 0XC4);
L_8006B164:
    // 0x8006B164: jal         0x80272C74
    // 0x8006B168: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    LOOKUP_FUNC(0x80272C74)(rdram, ctx);
        goto after_4;
    // 0x8006B168: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_4:
    // 0x8006B16C: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8006B170: bne         $v0, $at, L_8006B1C8
    if (ctx->r2 != ctx->r1) {
        // 0x8006B174: lui         $v1, 0x800B
        ctx->r3 = S32(0X800B << 16);
            goto L_8006B1C8;
    }
    // 0x8006B174: lui         $v1, 0x800B
    ctx->r3 = S32(0X800B << 16);
    // 0x8006B178: lh          $t1, 0xE4($s0)
    ctx->r9 = MEM_H(ctx->r16, 0XE4);
    // 0x8006B17C: addiu       $v1, $v1, -0x13B8
    ctx->r3 = ADD32(ctx->r3, -0X13B8);
    // 0x8006B180: sll         $t2, $t1, 2
    ctx->r10 = S32(ctx->r9 << 2);
    // 0x8006B184: addu        $t3, $v1, $t2
    ctx->r11 = ADD32(ctx->r3, ctx->r10);
    // 0x8006B188: lhu         $v0, 0x2($t3)
    ctx->r2 = MEM_HU(ctx->r11, 0X2);
    // 0x8006B18C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8006B190: beq         $v0, $zero, L_8006B1B8
    if (ctx->r2 == 0) {
        // 0x8006B194: sll         $t4, $v0, 2
        ctx->r12 = S32(ctx->r2 << 2);
            goto L_8006B1B8;
    }
    // 0x8006B194: sll         $t4, $v0, 2
    ctx->r12 = S32(ctx->r2 << 2);
    // 0x8006B198: sh          $v0, 0xE4($s0)
    MEM_H(0XE4, ctx->r16) = ctx->r2;
    // 0x8006B19C: addu        $t5, $v1, $t4
    ctx->r13 = ADD32(ctx->r3, ctx->r12);
    // 0x8006B1A0: lhu         $a1, 0x0($t5)
    ctx->r5 = MEM_HU(ctx->r13, 0X0);
    // 0x8006B1A4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8006B1A8: jal         0x80272D3C
    // 0x8006B1AC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    LOOKUP_FUNC(0x80272D3C)(rdram, ctx);
        goto after_5;
    // 0x8006B1AC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_5:
    // 0x8006B1B0: b           L_8006B1CC
    // 0x8006B1B4: lw          $t6, 0xC4($s0)
    ctx->r14 = MEM_W(ctx->r16, 0XC4);
        goto L_8006B1CC;
    // 0x8006B1B4: lw          $t6, 0xC4($s0)
    ctx->r14 = MEM_W(ctx->r16, 0XC4);
L_8006B1B8:
    // 0x8006B1B8: jal         0x8024BC08
    // 0x8006B1BC: addiu       $a1, $zero, 0x21
    ctx->r5 = ADD32(0, 0X21);
    LOOKUP_FUNC(0x8024BC08)(rdram, ctx);
        goto after_6;
    // 0x8006B1BC: addiu       $a1, $zero, 0x21
    ctx->r5 = ADD32(0, 0X21);
    after_6:
    // 0x8006B1C0: jal         0x803F2464
    // 0x8006B1C4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    LOOKUP_FUNC(0x803F2464)(rdram, ctx);
        goto after_7;
    // 0x8006B1C4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_7:
L_8006B1C8:
    // 0x8006B1C8: lw          $t6, 0xC4($s0)
    ctx->r14 = MEM_W(ctx->r16, 0XC4);
L_8006B1CC:
    // 0x8006B1CC: nop

    // 0x8006B1D0: lhu         $t7, 0x2($t6)
    ctx->r15 = MEM_HU(ctx->r14, 0X2);
    // 0x8006B1D4: nop

    // 0x8006B1D8: andi        $t8, $t7, 0x1
    ctx->r24 = ctx->r15 & 0X1;
    // 0x8006B1DC: bne         $t8, $zero, L_8006B208
    if (ctx->r24 != 0) {
        // 0x8006B1E0: nop
    
            goto L_8006B208;
    }
    // 0x8006B1E0: nop

    // 0x8006B1E4: lw          $t9, 0xC8($s0)
    ctx->r25 = MEM_W(ctx->r16, 0XC8);
    // 0x8006B1E8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8006B1EC: lhu         $t0, 0x8($t9)
    ctx->r8 = MEM_HU(ctx->r25, 0X8);
    // 0x8006B1F0: nop

    // 0x8006B1F4: andi        $t1, $t0, 0x80
    ctx->r9 = ctx->r8 & 0X80;
    // 0x8006B1F8: beq         $t1, $zero, L_8006B208
    if (ctx->r9 == 0) {
        // 0x8006B1FC: nop
    
            goto L_8006B208;
    }
    // 0x8006B1FC: nop

    // 0x8006B200: jal         0x8024BC08
    // 0x8006B204: addiu       $a1, $zero, 0x21
    ctx->r5 = ADD32(0, 0X21);
    LOOKUP_FUNC(0x8024BC08)(rdram, ctx);
        goto after_8;
    // 0x8006B204: addiu       $a1, $zero, 0x21
    ctx->r5 = ADD32(0, 0X21);
    after_8:
L_8006B208:
    // 0x8006B208: jal         0x8006AD5C
    // 0x8006B20C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8006AD5C(rdram, ctx);
        goto after_9;
    // 0x8006B20C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_9:
    // 0x8006B210: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8006B214: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8006B218: jr          $ra
    // 0x8006B21C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x8006B21C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_8006B220(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8006B220: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x8006B224: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x8006B228: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x8006B22C: lhu         $v1, 0x10($a0)
    ctx->r3 = MEM_HU(ctx->r4, 0X10);
    // 0x8006B230: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x8006B234: beq         $v1, $zero, L_8006B250
    if (ctx->r3 == 0) {
        // 0x8006B238: or          $v0, $v1, $zero
        ctx->r2 = ctx->r3 | 0;
            goto L_8006B250;
    }
    // 0x8006B238: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    // 0x8006B23C: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8006B240: beq         $v0, $at, L_8006B278
    if (ctx->r2 == ctx->r1) {
        // 0x8006B244: nop
    
            goto L_8006B278;
    }
    // 0x8006B244: nop

    // 0x8006B248: b           L_8006B350
    // 0x8006B24C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_8006B350;
    // 0x8006B24C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_8006B250:
    // 0x8006B250: addiu       $t6, $v1, 0x1
    ctx->r14 = ADD32(ctx->r3, 0X1);
    // 0x8006B254: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x8006B258: sh          $t6, 0x10($s0)
    MEM_H(0X10, ctx->r16) = ctx->r14;
    // 0x8006B25C: sh          $t7, 0x14($s0)
    MEM_H(0X14, ctx->r16) = ctx->r15;
    // 0x8006B260: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8006B264: addiu       $a1, $zero, 0x10A
    ctx->r5 = ADD32(0, 0X10A);
    // 0x8006B268: jal         0x80272D3C
    // 0x8006B26C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    LOOKUP_FUNC(0x80272D3C)(rdram, ctx);
        goto after_0;
    // 0x8006B26C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_0:
    // 0x8006B270: b           L_8006B350
    // 0x8006B274: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_8006B350;
    // 0x8006B274: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_8006B278:
    // 0x8006B278: jal         0x80272C74
    // 0x8006B27C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    LOOKUP_FUNC(0x80272C74)(rdram, ctx);
        goto after_1;
    // 0x8006B27C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
    // 0x8006B280: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x8006B284: bne         $v0, $at, L_8006B2EC
    if (ctx->r2 != ctx->r1) {
        // 0x8006B288: sw          $v0, 0x2C($sp)
        MEM_W(0X2C, ctx->r29) = ctx->r2;
            goto L_8006B2EC;
    }
    // 0x8006B288: sw          $v0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r2;
    // 0x8006B28C: lhu         $t8, 0x12($s0)
    ctx->r24 = MEM_HU(ctx->r16, 0X12);
    // 0x8006B290: lui         $v0, 0x8009
    ctx->r2 = S32(0X8009 << 16);
    // 0x8006B294: andi        $t9, $t8, 0x8000
    ctx->r25 = ctx->r24 & 0X8000;
    // 0x8006B298: bne         $t9, $zero, L_8006B2EC
    if (ctx->r25 != 0) {
        // 0x8006B29C: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_8006B2EC;
    }
    // 0x8006B29C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8006B2A0: lhu         $t0, 0x16($s0)
    ctx->r8 = MEM_HU(ctx->r16, 0X16);
    // 0x8006B2A4: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x8006B2A8: andi        $t1, $t0, 0xFFBF
    ctx->r9 = ctx->r8 & 0XFFBF;
    // 0x8006B2AC: sh          $t1, 0x16($s0)
    MEM_H(0X16, ctx->r16) = ctx->r9;
    // 0x8006B2B0: lw          $v0, 0x3B20($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X3B20);
    // 0x8006B2B4: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x8006B2B8: lhu         $t2, 0xC2($v0)
    ctx->r10 = MEM_HU(ctx->r2, 0XC2);
    // 0x8006B2BC: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x8006B2C0: andi        $t3, $t2, 0xFFBF
    ctx->r11 = ctx->r10 & 0XFFBF;
    // 0x8006B2C4: sh          $t3, 0xC2($v0)
    MEM_H(0XC2, ctx->r2) = ctx->r11;
    // 0x8006B2C8: lwc1        $f4, -0x58C0($at)
    ctx->f4.u32l = MEM_W(ctx->r1, -0X58C0);
    // 0x8006B2CC: lw          $a2, 0x8C($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X8C);
    // 0x8006B2D0: mfc1        $a3, $f0
    ctx->r7 = (int32_t)ctx->f0.u32l;
    // 0x8006B2D4: jal         0x80058CD0
    // 0x8006B2D8: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    func_80058CD0(rdram, ctx);
        goto after_2;
    // 0x8006B2D8: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    after_2:
    // 0x8006B2DC: lui         $t5, 0x8009
    ctx->r13 = S32(0X8009 << 16);
    // 0x8006B2E0: lw          $t5, 0x3B20($t5)
    ctx->r13 = MEM_W(ctx->r13, 0X3B20);
    // 0x8006B2E4: addiu       $t4, $zero, 0x12
    ctx->r12 = ADD32(0, 0X12);
    // 0x8006B2E8: sb          $t4, 0xBC($t5)
    MEM_B(0XBC, ctx->r13) = ctx->r12;
L_8006B2EC:
    // 0x8006B2EC: lhu         $t6, 0x1E($s0)
    ctx->r14 = MEM_HU(ctx->r16, 0X1E);
    // 0x8006B2F0: nop

    // 0x8006B2F4: bne         $t6, $zero, L_8006B338
    if (ctx->r14 != 0) {
        // 0x8006B2F8: lw          $t2, 0x2C($sp)
        ctx->r10 = MEM_W(ctx->r29, 0X2C);
            goto L_8006B338;
    }
    // 0x8006B2F8: lw          $t2, 0x2C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X2C);
    // 0x8006B2FC: lhu         $t7, 0x12($s0)
    ctx->r15 = MEM_HU(ctx->r16, 0X12);
    // 0x8006B300: lui         $t9, 0x8009
    ctx->r25 = S32(0X8009 << 16);
    // 0x8006B304: andi        $t8, $t7, 0x8
    ctx->r24 = ctx->r15 & 0X8;
    // 0x8006B308: bne         $t8, $zero, L_8006B338
    if (ctx->r24 != 0) {
        // 0x8006B30C: lw          $t2, 0x2C($sp)
        ctx->r10 = MEM_W(ctx->r29, 0X2C);
            goto L_8006B338;
    }
    // 0x8006B30C: lw          $t2, 0x2C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X2C);
    // 0x8006B310: lw          $t9, 0x3B20($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X3B20);
    // 0x8006B314: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8006B318: lhu         $t0, 0xC0($t9)
    ctx->r8 = MEM_HU(ctx->r25, 0XC0);
    // 0x8006B31C: nop

    // 0x8006B320: andi        $t1, $t0, 0x2
    ctx->r9 = ctx->r8 & 0X2;
    // 0x8006B324: beq         $t1, $zero, L_8006B338
    if (ctx->r9 == 0) {
        // 0x8006B328: lw          $t2, 0x2C($sp)
        ctx->r10 = MEM_W(ctx->r29, 0X2C);
            goto L_8006B338;
    }
    // 0x8006B328: lw          $t2, 0x2C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X2C);
    // 0x8006B32C: jal         0x8024BC08
    // 0x8006B330: addiu       $a1, $zero, 0x9
    ctx->r5 = ADD32(0, 0X9);
    LOOKUP_FUNC(0x8024BC08)(rdram, ctx);
        goto after_3;
    // 0x8006B330: addiu       $a1, $zero, 0x9
    ctx->r5 = ADD32(0, 0X9);
    after_3:
    // 0x8006B334: lw          $t2, 0x2C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X2C);
L_8006B338:
    // 0x8006B338: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8006B33C: bne         $t2, $at, L_8006B34C
    if (ctx->r10 != ctx->r1) {
        // 0x8006B340: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_8006B34C;
    }
    // 0x8006B340: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8006B344: jal         0x8024BC08
    // 0x8006B348: addiu       $a1, $zero, 0x9
    ctx->r5 = ADD32(0, 0X9);
    LOOKUP_FUNC(0x8024BC08)(rdram, ctx);
        goto after_4;
    // 0x8006B348: addiu       $a1, $zero, 0x9
    ctx->r5 = ADD32(0, 0X9);
    after_4:
L_8006B34C:
    // 0x8006B34C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_8006B350:
    // 0x8006B350: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x8006B354: jr          $ra
    // 0x8006B358: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x8006B358: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_8006B35C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8006B35C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8006B360: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8006B364: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x8006B368: lw          $t6, 0xD8($a0)
    ctx->r14 = MEM_W(ctx->r4, 0XD8);
    // 0x8006B36C: nop

    // 0x8006B370: lbu         $a1, 0x1($t6)
    ctx->r5 = MEM_BU(ctx->r14, 0X1);
    // 0x8006B374: jal         0x80275318
    // 0x8006B378: nop

    LOOKUP_FUNC(0x80275318)(rdram, ctx);
        goto after_0;
    // 0x8006B378: nop

    after_0:
    // 0x8006B37C: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x8006B380: lwc1        $f12, -0x58BC($at)
    ctx->f12.u32l = MEM_W(ctx->r1, -0X58BC);
    // 0x8006B384: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x8006B388: lwc1        $f14, -0x58B8($at)
    ctx->f14.u32l = MEM_W(ctx->r1, -0X58B8);
    // 0x8006B38C: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x8006B390: lwc1        $f7, -0x58B0($at)
    ctx->f_odd[(7 - 1) * 2] = MEM_W(ctx->r1, -0X58B0);
    // 0x8006B394: lwc1        $f6, -0x58AC($at)
    ctx->f6.u32l = MEM_W(ctx->r1, -0X58AC);
    // 0x8006B398: cvt.d.s     $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f4.d = CVT_D_S(ctx->f0.fl);
    // 0x8006B39C: mul.d       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f6.d); 
    ctx->f8.d = MUL_D(ctx->f4.d, ctx->f6.d);
    // 0x8006B3A0: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x8006B3A4: lwc1        $f17, -0x58A8($at)
    ctx->f_odd[(17 - 1) * 2] = MEM_W(ctx->r1, -0X58A8);
    // 0x8006B3A8: lwc1        $f16, -0x58A4($at)
    ctx->f16.u32l = MEM_W(ctx->r1, -0X58A4);
    // 0x8006B3AC: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x8006B3B0: cvt.s.d     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.d); 
    ctx->f10.fl = CVT_S_D(ctx->f8.d);
    // 0x8006B3B4: lwc1        $f5, -0x58A0($at)
    ctx->f_odd[(5 - 1) * 2] = MEM_W(ctx->r1, -0X58A0);
    // 0x8006B3B8: lwc1        $f4, -0x589C($at)
    ctx->f4.u32l = MEM_W(ctx->r1, -0X589C);
    // 0x8006B3BC: cvt.d.s     $f2, $f10
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.fl); 
    ctx->f2.d = CVT_D_S(ctx->f10.fl);
    // 0x8006B3C0: mul.d       $f18, $f2, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f2.d); NAN_CHECK(ctx->f16.d); 
    ctx->f18.d = MUL_D(ctx->f2.d, ctx->f16.d);
    // 0x8006B3C4: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x8006B3C8: lwc1        $f11, -0x5898($at)
    ctx->f_odd[(11 - 1) * 2] = MEM_W(ctx->r1, -0X5898);
    // 0x8006B3CC: lwc1        $f10, -0x5894($at)
    ctx->f10.u32l = MEM_W(ctx->r1, -0X5894);
    // 0x8006B3D0: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x8006B3D4: mul.d       $f16, $f2, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f2.d); NAN_CHECK(ctx->f10.d); 
    ctx->f16.d = MUL_D(ctx->f2.d, ctx->f10.d);
    // 0x8006B3D8: add.d       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.d); NAN_CHECK(ctx->f4.d); 
    ctx->f6.d = ctx->f18.d + ctx->f4.d;
    // 0x8006B3DC: lwc1        $f18, -0x588C($at)
    ctx->f18.u32l = MEM_W(ctx->r1, -0X588C);
    // 0x8006B3E0: lwc1        $f19, -0x5890($at)
    ctx->f_odd[(19 - 1) * 2] = MEM_W(ctx->r1, -0X5890);
    // 0x8006B3E4: lw          $t7, 0x24($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X24);
    // 0x8006B3E8: add.d       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.d); NAN_CHECK(ctx->f18.d); 
    ctx->f4.d = ctx->f16.d + ctx->f18.d;
    // 0x8006B3EC: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x8006B3F0: cvt.s.d     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.d); 
    ctx->f8.fl = CVT_S_D(ctx->f6.d);
    // 0x8006B3F4: cvt.s.d     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.d); 
    ctx->f6.fl = CVT_S_D(ctx->f4.d);
    // 0x8006B3F8: mfc1        $a2, $f8
    ctx->r6 = (int32_t)ctx->f8.u32l;
    // 0x8006B3FC: mfc1        $a3, $f6
    ctx->r7 = (int32_t)ctx->f6.u32l;
    // 0x8006B400: jal         0x8005743C
    // 0x8006B404: nop

    func_8005743C(rdram, ctx);
        goto after_1;
    // 0x8006B404: nop

    after_1:
    // 0x8006B408: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8006B40C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x8006B410: jr          $ra
    // 0x8006B414: nop

    return;
    // 0x8006B414: nop

;}
RECOMP_FUNC void func_8006B418(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8006B418: lui         $t6, 0x800B
    ctx->r14 = S32(0X800B << 16);
    // 0x8006B41C: addiu       $t6, $t6, -0x13A0
    ctx->r14 = ADD32(ctx->r14, -0X13A0);
    // 0x8006B420: lw          $at, 0x0($t6)
    ctx->r1 = MEM_W(ctx->r14, 0X0);
    // 0x8006B424: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8006B428: addiu       $v1, $sp, 0x18
    ctx->r3 = ADD32(ctx->r29, 0X18);
    // 0x8006B42C: sw          $at, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r1;
    // 0x8006B430: lw          $t9, 0x4($t6)
    ctx->r25 = MEM_W(ctx->r14, 0X4);
    // 0x8006B434: lui         $t0, 0x800B
    ctx->r8 = S32(0X800B << 16);
    // 0x8006B438: sw          $t9, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r25;
    // 0x8006B43C: lw          $at, 0x8($t6)
    ctx->r1 = MEM_W(ctx->r14, 0X8);
    // 0x8006B440: addiu       $t0, $t0, -0x1390
    ctx->r8 = ADD32(ctx->r8, -0X1390);
    // 0x8006B444: sw          $at, 0x8($v1)
    MEM_W(0X8, ctx->r3) = ctx->r1;
    // 0x8006B448: lw          $t9, 0xC($t6)
    ctx->r25 = MEM_W(ctx->r14, 0XC);
    // 0x8006B44C: addiu       $a1, $sp, 0x8
    ctx->r5 = ADD32(ctx->r29, 0X8);
    // 0x8006B450: sw          $t9, 0xC($v1)
    MEM_W(0XC, ctx->r3) = ctx->r25;
    // 0x8006B454: lw          $at, 0x0($t0)
    ctx->r1 = MEM_W(ctx->r8, 0X0);
    // 0x8006B458: nop

    // 0x8006B45C: sw          $at, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r1;
    // 0x8006B460: lw          $t3, 0x4($t0)
    ctx->r11 = MEM_W(ctx->r8, 0X4);
    // 0x8006B464: nop

    // 0x8006B468: sw          $t3, 0x4($a1)
    MEM_W(0X4, ctx->r5) = ctx->r11;
    // 0x8006B46C: lw          $at, 0x8($t0)
    ctx->r1 = MEM_W(ctx->r8, 0X8);
    // 0x8006B470: nop

    // 0x8006B474: sw          $at, 0x8($a1)
    MEM_W(0X8, ctx->r5) = ctx->r1;
    // 0x8006B478: lw          $t3, 0xC($t0)
    ctx->r11 = MEM_W(ctx->r8, 0XC);
    // 0x8006B47C: nop

    // 0x8006B480: sw          $t3, 0xC($a1)
    MEM_W(0XC, ctx->r5) = ctx->r11;
    // 0x8006B484: lw          $t4, 0xC8($a0)
    ctx->r12 = MEM_W(ctx->r4, 0XC8);
    // 0x8006B488: nop

    // 0x8006B48C: lhu         $t5, 0x8($t4)
    ctx->r13 = MEM_HU(ctx->r12, 0X8);
    // 0x8006B490: nop

    // 0x8006B494: andi        $t8, $t5, 0x1
    ctx->r24 = ctx->r13 & 0X1;
    // 0x8006B498: beq         $t8, $zero, L_8006B4AC
    if (ctx->r24 == 0) {
        // 0x8006B49C: or          $v0, $v1, $zero
        ctx->r2 = ctx->r3 | 0;
            goto L_8006B4AC;
    }
    // 0x8006B49C: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    // 0x8006B4A0: b           L_8006B4AC
    // 0x8006B4A4: or          $v0, $a1, $zero
    ctx->r2 = ctx->r5 | 0;
        goto L_8006B4AC;
    // 0x8006B4A4: or          $v0, $a1, $zero
    ctx->r2 = ctx->r5 | 0;
    // 0x8006B4A8: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
L_8006B4AC:
    // 0x8006B4AC: lwc1        $f0, 0x4C($a0)
    ctx->f0.u32l = MEM_W(ctx->r4, 0X4C);
    // 0x8006B4B0: lwc1        $f4, 0x0($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X0);
    // 0x8006B4B4: nop

    // 0x8006B4B8: c.lt.s      $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f4.fl < ctx->f0.fl;
    // 0x8006B4BC: nop

    // 0x8006B4C0: bc1f        L_8006B4F8
    if (!c1cs) {
        // 0x8006B4C4: nop
    
            goto L_8006B4F8;
    }
    // 0x8006B4C4: nop

    // 0x8006B4C8: mtc1        $zero, $f2
    ctx->f2.u32l = 0;
    // 0x8006B4CC: lwc1        $f6, 0x78($a0)
    ctx->f6.u32l = MEM_W(ctx->r4, 0X78);
    // 0x8006B4D0: nop

    // 0x8006B4D4: c.lt.s      $f2, $f6
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f2.fl < ctx->f6.fl;
    // 0x8006B4D8: nop

    // 0x8006B4DC: bc1f        L_8006B4F8
    if (!c1cs) {
        // 0x8006B4E0: nop
    
            goto L_8006B4F8;
    }
    // 0x8006B4E0: nop

    // 0x8006B4E4: lwc1        $f8, 0xA4($a0)
    ctx->f8.u32l = MEM_W(ctx->r4, 0XA4);
    // 0x8006B4E8: nop

    // 0x8006B4EC: swc1        $f8, 0x4C($a0)
    MEM_W(0X4C, ctx->r4) = ctx->f8.u32l;
    // 0x8006B4F0: lwc1        $f0, 0x4C($a0)
    ctx->f0.u32l = MEM_W(ctx->r4, 0X4C);
    // 0x8006B4F4: nop

L_8006B4F8:
    // 0x8006B4F8: lwc1        $f10, 0x4($v0)
    ctx->f10.u32l = MEM_W(ctx->r2, 0X4);
    // 0x8006B4FC: mtc1        $zero, $f2
    ctx->f2.u32l = 0;
    // 0x8006B500: c.lt.s      $f0, $f10
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f0.fl < ctx->f10.fl;
    // 0x8006B504: nop

    // 0x8006B508: bc1f        L_8006B534
    if (!c1cs) {
        // 0x8006B50C: nop
    
            goto L_8006B534;
    }
    // 0x8006B50C: nop

    // 0x8006B510: lwc1        $f16, 0x78($a0)
    ctx->f16.u32l = MEM_W(ctx->r4, 0X78);
    // 0x8006B514: nop

    // 0x8006B518: c.lt.s      $f16, $f2
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f16.fl < ctx->f2.fl;
    // 0x8006B51C: nop

    // 0x8006B520: bc1f        L_8006B534
    if (!c1cs) {
        // 0x8006B524: nop
    
            goto L_8006B534;
    }
    // 0x8006B524: nop

    // 0x8006B528: lwc1        $f18, 0xA4($a0)
    ctx->f18.u32l = MEM_W(ctx->r4, 0XA4);
    // 0x8006B52C: nop

    // 0x8006B530: swc1        $f18, 0x4C($a0)
    MEM_W(0X4C, ctx->r4) = ctx->f18.u32l;
L_8006B534:
    // 0x8006B534: lwc1        $f0, 0x44($a0)
    ctx->f0.u32l = MEM_W(ctx->r4, 0X44);
    // 0x8006B538: lwc1        $f4, 0x8($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X8);
    // 0x8006B53C: nop

    // 0x8006B540: c.lt.s      $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f4.fl < ctx->f0.fl;
    // 0x8006B544: nop

    // 0x8006B548: bc1f        L_8006B57C
    if (!c1cs) {
        // 0x8006B54C: nop
    
            goto L_8006B57C;
    }
    // 0x8006B54C: nop

    // 0x8006B550: lwc1        $f6, 0x70($a0)
    ctx->f6.u32l = MEM_W(ctx->r4, 0X70);
    // 0x8006B554: nop

    // 0x8006B558: c.lt.s      $f2, $f6
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f2.fl < ctx->f6.fl;
    // 0x8006B55C: nop

    // 0x8006B560: bc1f        L_8006B57C
    if (!c1cs) {
        // 0x8006B564: nop
    
            goto L_8006B57C;
    }
    // 0x8006B564: nop

    // 0x8006B568: lwc1        $f8, 0xA8($a0)
    ctx->f8.u32l = MEM_W(ctx->r4, 0XA8);
    // 0x8006B56C: nop

    // 0x8006B570: swc1        $f8, 0x44($a0)
    MEM_W(0X44, ctx->r4) = ctx->f8.u32l;
    // 0x8006B574: lwc1        $f0, 0x44($a0)
    ctx->f0.u32l = MEM_W(ctx->r4, 0X44);
    // 0x8006B578: nop

L_8006B57C:
    // 0x8006B57C: lwc1        $f10, 0xC($v0)
    ctx->f10.u32l = MEM_W(ctx->r2, 0XC);
    // 0x8006B580: nop

    // 0x8006B584: c.lt.s      $f0, $f10
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f0.fl < ctx->f10.fl;
    // 0x8006B588: nop

    // 0x8006B58C: bc1f        L_8006B5B8
    if (!c1cs) {
        // 0x8006B590: nop
    
            goto L_8006B5B8;
    }
    // 0x8006B590: nop

    // 0x8006B594: lwc1        $f16, 0x70($a0)
    ctx->f16.u32l = MEM_W(ctx->r4, 0X70);
    // 0x8006B598: nop

    // 0x8006B59C: c.lt.s      $f16, $f2
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f16.fl < ctx->f2.fl;
    // 0x8006B5A0: nop

    // 0x8006B5A4: bc1f        L_8006B5B8
    if (!c1cs) {
        // 0x8006B5A8: nop
    
            goto L_8006B5B8;
    }
    // 0x8006B5A8: nop

    // 0x8006B5AC: lwc1        $f18, 0xA8($a0)
    ctx->f18.u32l = MEM_W(ctx->r4, 0XA8);
    // 0x8006B5B0: nop

    // 0x8006B5B4: swc1        $f18, 0x44($a0)
    MEM_W(0X44, ctx->r4) = ctx->f18.u32l;
L_8006B5B8:
    // 0x8006B5B8: jr          $ra
    // 0x8006B5BC: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x8006B5BC: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_8006B5C0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8006B5C0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8006B5C4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8006B5C8: jal         0x80275588
    // 0x8006B5CC: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    LOOKUP_FUNC(0x80275588)(rdram, ctx);
        goto after_0;
    // 0x8006B5CC: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x8006B5D0: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x8006B5D4: jal         0x8006B418
    // 0x8006B5D8: nop

    func_8006B418(rdram, ctx);
        goto after_1;
    // 0x8006B5D8: nop

    after_1:
    // 0x8006B5DC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8006B5E0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8006B5E4: jr          $ra
    // 0x8006B5E8: nop

    return;
    // 0x8006B5E8: nop

;}
RECOMP_FUNC void func_8006B718(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8006B718: addiu       $sp, $sp, -0xA0
    ctx->r29 = ADD32(ctx->r29, -0XA0);
    // 0x8006B71C: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x8006B720: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x8006B724: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x8006B728: lhu         $a2, 0x36($s0)
    ctx->r6 = MEM_HU(ctx->r16, 0X36);
    // 0x8006B72C: addiu       $a1, $s0, 0xE4
    ctx->r5 = ADD32(ctx->r16, 0XE4);
    // 0x8006B730: jal         0x80272D88
    // 0x8006B734: addiu       $a3, $zero, 0x13
    ctx->r7 = ADD32(0, 0X13);
    LOOKUP_FUNC(0x80272D88)(rdram, ctx);
        goto after_0;
    // 0x8006B734: addiu       $a3, $zero, 0x13
    ctx->r7 = ADD32(0, 0X13);
    after_0:
    // 0x8006B738: lhu         $a0, 0x10($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0X10);
    // 0x8006B73C: lui         $t7, 0x8012
    ctx->r15 = S32(0X8012 << 16);
    // 0x8006B740: beq         $a0, $zero, L_8006B764
    if (ctx->r4 == 0) {
        // 0x8006B744: or          $v1, $a0, $zero
        ctx->r3 = ctx->r4 | 0;
            goto L_8006B764;
    }
    // 0x8006B744: or          $v1, $a0, $zero
    ctx->r3 = ctx->r4 | 0;
    // 0x8006B748: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8006B74C: beq         $v1, $at, L_8006B848
    if (ctx->r3 == ctx->r1) {
        // 0x8006B750: addiu       $at, $zero, 0x2
        ctx->r1 = ADD32(0, 0X2);
            goto L_8006B848;
    }
    // 0x8006B750: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x8006B754: beq         $v1, $at, L_8006B89C
    if (ctx->r3 == ctx->r1) {
        // 0x8006B758: nop
    
            goto L_8006B89C;
    }
    // 0x8006B758: nop

    // 0x8006B75C: b           L_8006BBB0
    // 0x8006B760: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_8006BBB0;
    // 0x8006B760: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_8006B764:
    // 0x8006B764: addiu       $t6, $a0, 0x1
    ctx->r14 = ADD32(ctx->r4, 0X1);
    // 0x8006B768: sh          $t6, 0x10($s0)
    MEM_H(0X10, ctx->r16) = ctx->r14;
    // 0x8006B76C: lhu         $t7, 0xB78($t7)
    ctx->r15 = MEM_HU(ctx->r15, 0XB78);
    // 0x8006B770: nop

    // 0x8006B774: slti        $at, $t7, 0x8
    ctx->r1 = SIGNED(ctx->r15) < 0X8 ? 1 : 0;
    // 0x8006B778: bne         $at, $zero, L_8006B7A0
    if (ctx->r1 != 0) {
        // 0x8006B77C: nop
    
            goto L_8006B7A0;
    }
    // 0x8006B77C: nop

    // 0x8006B780: lhu         $t8, 0x2C($s0)
    ctx->r24 = MEM_HU(ctx->r16, 0X2C);
    // 0x8006B784: addiu       $t2, $zero, 0x8
    ctx->r10 = ADD32(0, 0X8);
    // 0x8006B788: andi        $t9, $t8, 0x1
    ctx->r25 = ctx->r24 & 0X1;
    // 0x8006B78C: beq         $t9, $zero, L_8006B79C
    if (ctx->r25 == 0) {
        // 0x8006B790: addiu       $t1, $zero, 0x1
        ctx->r9 = ADD32(0, 0X1);
            goto L_8006B79C;
    }
    // 0x8006B790: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
    // 0x8006B794: b           L_8006B7A0
    // 0x8006B798: sh          $t1, 0x36($s0)
    MEM_H(0X36, ctx->r16) = ctx->r9;
        goto L_8006B7A0;
    // 0x8006B798: sh          $t1, 0x36($s0)
    MEM_H(0X36, ctx->r16) = ctx->r9;
L_8006B79C:
    // 0x8006B79C: sh          $t2, 0x36($s0)
    MEM_H(0X36, ctx->r16) = ctx->r10;
L_8006B7A0:
    // 0x8006B7A0: lhu         $v0, 0x36($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X36);
    // 0x8006B7A4: nop

    // 0x8006B7A8: andi        $t3, $v0, 0x4
    ctx->r11 = ctx->r2 & 0X4;
    // 0x8006B7AC: beq         $t3, $zero, L_8006B818
    if (ctx->r11 == 0) {
        // 0x8006B7B0: andi        $t6, $v0, 0x1
        ctx->r14 = ctx->r2 & 0X1;
            goto L_8006B818;
    }
    // 0x8006B7B0: andi        $t6, $v0, 0x1
    ctx->r14 = ctx->r2 & 0X1;
    // 0x8006B7B4: jal         0x802727A4
    // 0x8006B7B8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    LOOKUP_FUNC(0x802727A4)(rdram, ctx);
        goto after_1;
    // 0x8006B7B8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
    // 0x8006B7BC: sw          $v0, 0xF0($s0)
    MEM_W(0XF0, ctx->r16) = ctx->r2;
    // 0x8006B7C0: lwc1        $f4, 0x88($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X88);
    // 0x8006B7C4: lui         $at, 0x42A0
    ctx->r1 = S32(0X42A0 << 16);
    // 0x8006B7C8: swc1        $f4, 0xBC($s0)
    MEM_W(0XBC, ctx->r16) = ctx->f4.u32l;
    // 0x8006B7CC: lwc1        $f0, 0x84($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X84);
    // 0x8006B7D0: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x8006B7D4: lui         $at, 0x4320
    ctx->r1 = S32(0X4320 << 16);
    // 0x8006B7D8: c.lt.s      $f0, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f0.fl < ctx->f6.fl;
    // 0x8006B7DC: nop

    // 0x8006B7E0: bc1f        L_8006B7F0
    if (!c1cs) {
        // 0x8006B7E4: nop
    
            goto L_8006B7F0;
    }
    // 0x8006B7E4: nop

    // 0x8006B7E8: b           L_8006B830
    // 0x8006B7EC: sh          $zero, 0xE6($s0)
    MEM_H(0XE6, ctx->r16) = 0;
        goto L_8006B830;
    // 0x8006B7EC: sh          $zero, 0xE6($s0)
    MEM_H(0XE6, ctx->r16) = 0;
L_8006B7F0:
    // 0x8006B7F0: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x8006B7F4: addiu       $t4, $zero, 0x1
    ctx->r12 = ADD32(0, 0X1);
    // 0x8006B7F8: c.lt.s      $f0, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f0.fl < ctx->f8.fl;
    // 0x8006B7FC: addiu       $t5, $zero, 0x2
    ctx->r13 = ADD32(0, 0X2);
    // 0x8006B800: bc1f        L_8006B810
    if (!c1cs) {
        // 0x8006B804: nop
    
            goto L_8006B810;
    }
    // 0x8006B804: nop

    // 0x8006B808: b           L_8006B830
    // 0x8006B80C: sh          $t4, 0xE6($s0)
    MEM_H(0XE6, ctx->r16) = ctx->r12;
        goto L_8006B830;
    // 0x8006B80C: sh          $t4, 0xE6($s0)
    MEM_H(0XE6, ctx->r16) = ctx->r12;
L_8006B810:
    // 0x8006B810: b           L_8006B830
    // 0x8006B814: sh          $t5, 0xE6($s0)
    MEM_H(0XE6, ctx->r16) = ctx->r13;
        goto L_8006B830;
    // 0x8006B814: sh          $t5, 0xE6($s0)
    MEM_H(0XE6, ctx->r16) = ctx->r13;
L_8006B818:
    // 0x8006B818: beq         $t6, $zero, L_8006B82C
    if (ctx->r14 == 0) {
        // 0x8006B81C: addiu       $t8, $zero, 0x4
        ctx->r24 = ADD32(0, 0X4);
            goto L_8006B82C;
    }
    // 0x8006B81C: addiu       $t8, $zero, 0x4
    ctx->r24 = ADD32(0, 0X4);
    // 0x8006B820: addiu       $t7, $zero, 0x3
    ctx->r15 = ADD32(0, 0X3);
    // 0x8006B824: b           L_8006B830
    // 0x8006B828: sh          $t7, 0xE6($s0)
    MEM_H(0XE6, ctx->r16) = ctx->r15;
        goto L_8006B830;
    // 0x8006B828: sh          $t7, 0xE6($s0)
    MEM_H(0XE6, ctx->r16) = ctx->r15;
L_8006B82C:
    // 0x8006B82C: sh          $t8, 0xE6($s0)
    MEM_H(0XE6, ctx->r16) = ctx->r24;
L_8006B830:
    // 0x8006B830: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8006B834: addiu       $a1, $zero, 0x1BF
    ctx->r5 = ADD32(0, 0X1BF);
    // 0x8006B838: jal         0x80272D3C
    // 0x8006B83C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    LOOKUP_FUNC(0x80272D3C)(rdram, ctx);
        goto after_2;
    // 0x8006B83C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_2:
    // 0x8006B840: b           L_8006BBB0
    // 0x8006B844: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_8006BBB0;
    // 0x8006B844: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_8006B848:
    // 0x8006B848: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x8006B84C: lwc1        $f14, -0x5888($at)
    ctx->f14.u32l = MEM_W(ctx->r1, -0X5888);
    // 0x8006B850: lwc1        $f12, 0xBC($s0)
    ctx->f12.u32l = MEM_W(ctx->r16, 0XBC);
    // 0x8006B854: jal         0x80279520
    // 0x8006B858: addiu       $a2, $s0, 0x8C
    ctx->r6 = ADD32(ctx->r16, 0X8C);
    LOOKUP_FUNC(0x80279520)(rdram, ctx);
        goto after_3;
    // 0x8006B858: addiu       $a2, $s0, 0x8C
    ctx->r6 = ADD32(ctx->r16, 0X8C);
    after_3:
    // 0x8006B85C: beq         $v0, $zero, L_8006BBAC
    if (ctx->r2 == 0) {
        // 0x8006B860: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_8006BBAC;
    }
    // 0x8006B860: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8006B864: lhu         $t9, 0x10($s0)
    ctx->r25 = MEM_HU(ctx->r16, 0X10);
    // 0x8006B868: lh          $t2, 0xE6($s0)
    ctx->r10 = MEM_H(ctx->r16, 0XE6);
    // 0x8006B86C: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x8006B870: lui         $a1, 0x800B
    ctx->r5 = S32(0X800B << 16);
    // 0x8006B874: addiu       $t1, $t9, 0x1
    ctx->r9 = ADD32(ctx->r25, 0X1);
    // 0x8006B878: sll         $t3, $t2, 4
    ctx->r11 = S32(ctx->r10 << 4);
    // 0x8006B87C: sh          $t1, 0x10($s0)
    MEM_H(0X10, ctx->r16) = ctx->r9;
    // 0x8006B880: addu        $a1, $a1, $t3
    ctx->r5 = ADD32(ctx->r5, ctx->r11);
    // 0x8006B884: swc1        $f10, 0x50($s0)
    MEM_W(0X50, ctx->r16) = ctx->f10.u32l;
    // 0x8006B888: lhu         $a1, -0x1380($a1)
    ctx->r5 = MEM_HU(ctx->r5, -0X1380);
    // 0x8006B88C: jal         0x80272D3C
    // 0x8006B890: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    LOOKUP_FUNC(0x80272D3C)(rdram, ctx);
        goto after_4;
    // 0x8006B890: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_4:
    // 0x8006B894: b           L_8006BBB0
    // 0x8006B898: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_8006BBB0;
    // 0x8006B898: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_8006B89C:
    // 0x8006B89C: jal         0x80272CA4
    // 0x8006B8A0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    LOOKUP_FUNC(0x80272CA4)(rdram, ctx);
        goto after_5;
    // 0x8006B8A0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_5:
    // 0x8006B8A4: sw          $v0, 0x9C($sp)
    MEM_W(0X9C, ctx->r29) = ctx->r2;
    // 0x8006B8A8: lh          $t4, 0xE6($s0)
    ctx->r12 = MEM_H(ctx->r16, 0XE6);
    // 0x8006B8AC: lui         $t6, 0x800B
    ctx->r14 = S32(0X800B << 16);
    // 0x8006B8B0: addiu       $t6, $t6, -0x1380
    ctx->r14 = ADD32(ctx->r14, -0X1380);
    // 0x8006B8B4: sll         $t5, $t4, 4
    ctx->r13 = S32(ctx->r12 << 4);
    // 0x8006B8B8: addu        $t0, $t5, $t6
    ctx->r8 = ADD32(ctx->r13, ctx->r14);
    // 0x8006B8BC: sw          $t0, 0x90($sp)
    MEM_W(0X90, ctx->r29) = ctx->r8;
    // 0x8006B8C0: jal         0x80272C74
    // 0x8006B8C4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    LOOKUP_FUNC(0x80272C74)(rdram, ctx);
        goto after_6;
    // 0x8006B8C4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_6:
    // 0x8006B8C8: sw          $v0, 0x98($sp)
    MEM_W(0X98, ctx->r29) = ctx->r2;
    // 0x8006B8CC: lw          $v1, 0xF0($s0)
    ctx->r3 = MEM_W(ctx->r16, 0XF0);
    // 0x8006B8D0: lw          $t0, 0x90($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X90);
    // 0x8006B8D4: beq         $v1, $zero, L_8006B920
    if (ctx->r3 == 0) {
        // 0x8006B8D8: lui         $t7, 0x8009
        ctx->r15 = S32(0X8009 << 16);
            goto L_8006B920;
    }
    // 0x8006B8D8: lui         $t7, 0x8009
    ctx->r15 = S32(0X8009 << 16);
    // 0x8006B8DC: lw          $t7, 0x3B20($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X3B20);
    // 0x8006B8E0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8006B8E4: lw          $t8, 0x84($t7)
    ctx->r24 = MEM_W(ctx->r15, 0X84);
    // 0x8006B8E8: addiu       $a3, $sp, 0x38
    ctx->r7 = ADD32(ctx->r29, 0X38);
    // 0x8006B8EC: bne         $s0, $t8, L_8006B924
    if (ctx->r16 != ctx->r24) {
        // 0x8006B8F0: lw          $v0, 0x9C($sp)
        ctx->r2 = MEM_W(ctx->r29, 0X9C);
            goto L_8006B924;
    }
    // 0x8006B8F0: lw          $v0, 0x9C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X9C);
    // 0x8006B8F4: lw          $a1, 0x4C($v1)
    ctx->r5 = MEM_W(ctx->r3, 0X4C);
    // 0x8006B8F8: lw          $a2, 0x44($v1)
    ctx->r6 = MEM_W(ctx->r3, 0X44);
    // 0x8006B8FC: jal         0x80272B98
    // 0x8006B900: sw          $t0, 0x90($sp)
    MEM_W(0X90, ctx->r29) = ctx->r8;
    LOOKUP_FUNC(0x80272B98)(rdram, ctx);
        goto after_7;
    // 0x8006B900: sw          $t0, 0x90($sp)
    MEM_W(0X90, ctx->r29) = ctx->r8;
    after_7:
    // 0x8006B904: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x8006B908: lwc1        $f14, -0x5884($at)
    ctx->f14.u32l = MEM_W(ctx->r1, -0X5884);
    // 0x8006B90C: lwc1        $f12, 0x38($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X38);
    // 0x8006B910: jal         0x80279520
    // 0x8006B914: addiu       $a2, $s0, 0x8C
    ctx->r6 = ADD32(ctx->r16, 0X8C);
    LOOKUP_FUNC(0x80279520)(rdram, ctx);
        goto after_8;
    // 0x8006B914: addiu       $a2, $s0, 0x8C
    ctx->r6 = ADD32(ctx->r16, 0X8C);
    after_8:
    // 0x8006B918: lw          $t0, 0x90($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X90);
    // 0x8006B91C: nop

L_8006B920:
    // 0x8006B920: lw          $v0, 0x9C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X9C);
L_8006B924:
    // 0x8006B924: lhu         $t9, 0x2($t0)
    ctx->r25 = MEM_HU(ctx->r8, 0X2);
    // 0x8006B928: nop

    // 0x8006B92C: sltu        $at, $v0, $t9
    ctx->r1 = ctx->r2 < ctx->r25 ? 1 : 0;
    // 0x8006B930: beq         $at, $zero, L_8006B950
    if (ctx->r1 == 0) {
        // 0x8006B934: nop
    
            goto L_8006B950;
    }
    // 0x8006B934: nop

    // 0x8006B938: lwc1        $f16, 0x50($s0)
    ctx->f16.u32l = MEM_W(ctx->r16, 0X50);
    // 0x8006B93C: lwc1        $f18, 0x4($t0)
    ctx->f18.u32l = MEM_W(ctx->r8, 0X4);
    // 0x8006B940: nop

    // 0x8006B944: add.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f16.fl + ctx->f18.fl;
    // 0x8006B948: b           L_8006B9A4
    // 0x8006B94C: swc1        $f4, 0x50($s0)
    MEM_W(0X50, ctx->r16) = ctx->f4.u32l;
        goto L_8006B9A4;
    // 0x8006B94C: swc1        $f4, 0x50($s0)
    MEM_W(0X50, ctx->r16) = ctx->f4.u32l;
L_8006B950:
    // 0x8006B950: lhu         $t1, 0x8($t0)
    ctx->r9 = MEM_HU(ctx->r8, 0X8);
    // 0x8006B954: nop

    // 0x8006B958: sltu        $at, $v0, $t1
    ctx->r1 = ctx->r2 < ctx->r9 ? 1 : 0;
    // 0x8006B95C: bne         $at, $zero, L_8006B9A4
    if (ctx->r1 != 0) {
        // 0x8006B960: nop
    
            goto L_8006B9A4;
    }
    // 0x8006B960: nop

    // 0x8006B964: lwc1        $f6, 0x50($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X50);
    // 0x8006B968: lwc1        $f8, 0xC($t0)
    ctx->f8.u32l = MEM_W(ctx->r8, 0XC);
    // 0x8006B96C: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x8006B970: sub.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl - ctx->f8.fl;
    // 0x8006B974: swc1        $f10, 0x50($s0)
    MEM_W(0X50, ctx->r16) = ctx->f10.u32l;
    // 0x8006B978: lwc1        $f16, 0x50($s0)
    ctx->f16.u32l = MEM_W(ctx->r16, 0X50);
    // 0x8006B97C: lwc1        $f4, -0x587C($at)
    ctx->f4.u32l = MEM_W(ctx->r1, -0X587C);
    // 0x8006B980: lwc1        $f5, -0x5880($at)
    ctx->f_odd[(5 - 1) * 2] = MEM_W(ctx->r1, -0X5880);
    // 0x8006B984: cvt.d.s     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); 
    ctx->f18.d = CVT_D_S(ctx->f16.fl);
    // 0x8006B988: c.lt.d      $f18, $f4
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f18.d < ctx->f4.d;
    // 0x8006B98C: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x8006B990: bc1f        L_8006B9A4
    if (!c1cs) {
        // 0x8006B994: nop
    
            goto L_8006B9A4;
    }
    // 0x8006B994: nop

    // 0x8006B998: lwc1        $f6, -0x5878($at)
    ctx->f6.u32l = MEM_W(ctx->r1, -0X5878);
    // 0x8006B99C: nop

    // 0x8006B9A0: swc1        $f6, 0x50($s0)
    MEM_W(0X50, ctx->r16) = ctx->f6.u32l;
L_8006B9A4:
    // 0x8006B9A4: lw          $a1, 0x50($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X50);
    // 0x8006B9A8: lw          $a2, 0x8C($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X8C);
    // 0x8006B9AC: jal         0x80274C54
    // 0x8006B9B0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    LOOKUP_FUNC(0x80274C54)(rdram, ctx);
        goto after_9;
    // 0x8006B9B0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_9:
    // 0x8006B9B4: jal         0x8006B5C0
    // 0x8006B9B8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8006B5C0(rdram, ctx);
        goto after_10;
    // 0x8006B9B8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_10:
    // 0x8006B9BC: lw          $t2, 0x98($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X98);
    // 0x8006B9C0: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x8006B9C4: bne         $t2, $at, L_8006BB8C
    if (ctx->r10 != ctx->r1) {
        // 0x8006B9C8: lw          $t9, 0x98($sp)
        ctx->r25 = MEM_W(ctx->r29, 0X98);
            goto L_8006BB8C;
    }
    // 0x8006B9C8: lw          $t9, 0x98($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X98);
    // 0x8006B9CC: lhu         $v0, 0x12($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X12);
    // 0x8006B9D0: nop

    // 0x8006B9D4: andi        $t3, $v0, 0x8000
    ctx->r11 = ctx->r2 & 0X8000;
    // 0x8006B9D8: bne         $t3, $zero, L_8006BAF4
    if (ctx->r11 != 0) {
        // 0x8006B9DC: nop
    
            goto L_8006BAF4;
    }
    // 0x8006B9DC: nop

    // 0x8006B9E0: lhu         $t4, 0x16($s0)
    ctx->r12 = MEM_HU(ctx->r16, 0X16);
    // 0x8006B9E4: lui         $v1, 0x8009
    ctx->r3 = S32(0X8009 << 16);
    // 0x8006B9E8: andi        $t5, $t4, 0xFFBF
    ctx->r13 = ctx->r12 & 0XFFBF;
    // 0x8006B9EC: sh          $t5, 0x16($s0)
    MEM_H(0X16, ctx->r16) = ctx->r13;
    // 0x8006B9F0: lw          $v1, 0x3B20($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X3B20);
    // 0x8006B9F4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8006B9F8: lhu         $t6, 0xC2($v1)
    ctx->r14 = MEM_HU(ctx->r3, 0XC2);
    // 0x8006B9FC: lui         $a2, 0x3C8E
    ctx->r6 = S32(0X3C8E << 16);
    // 0x8006BA00: andi        $t7, $t6, 0xFFBF
    ctx->r15 = ctx->r14 & 0XFFBF;
    // 0x8006BA04: sh          $t7, 0xC2($v1)
    MEM_H(0XC2, ctx->r3) = ctx->r15;
    // 0x8006BA08: lhu         $v0, 0x36($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X36);
    // 0x8006BA0C: nop

    // 0x8006BA10: andi        $t8, $v0, 0x4
    ctx->r24 = ctx->r2 & 0X4;
    // 0x8006BA14: beq         $t8, $zero, L_8006BA4C
    if (ctx->r24 == 0) {
        // 0x8006BA18: andi        $t4, $v0, 0x1
        ctx->r12 = ctx->r2 & 0X1;
            goto L_8006BA4C;
    }
    // 0x8006BA18: andi        $t4, $v0, 0x1
    ctx->r12 = ctx->r2 & 0X1;
    // 0x8006BA1C: lw          $a1, 0xF0($s0)
    ctx->r5 = MEM_W(ctx->r16, 0XF0);
    // 0x8006BA20: jal         0x80055F18
    // 0x8006BA24: ori         $a2, $a2, 0xFA35
    ctx->r6 = ctx->r6 | 0XFA35;
    func_80055F18(rdram, ctx);
        goto after_11;
    // 0x8006BA24: ori         $a2, $a2, 0xFA35
    ctx->r6 = ctx->r6 | 0XFA35;
    after_11:
    // 0x8006BA28: lui         $t1, 0x8009
    ctx->r9 = S32(0X8009 << 16);
    // 0x8006BA2C: lw          $t1, 0x3B20($t1)
    ctx->r9 = MEM_W(ctx->r9, 0X3B20);
    // 0x8006BA30: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x8006BA34: lui         $t3, 0x8009
    ctx->r11 = S32(0X8009 << 16);
    // 0x8006BA38: sb          $t9, 0xBC($t1)
    MEM_B(0XBC, ctx->r9) = ctx->r25;
    // 0x8006BA3C: lw          $t3, 0x3B20($t3)
    ctx->r11 = MEM_W(ctx->r11, 0X3B20);
    // 0x8006BA40: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x8006BA44: b           L_8006BB88
    // 0x8006BA48: sb          $t2, 0xBD($t3)
    MEM_B(0XBD, ctx->r11) = ctx->r10;
        goto L_8006BB88;
    // 0x8006BA48: sb          $t2, 0xBD($t3)
    MEM_B(0XBD, ctx->r11) = ctx->r10;
L_8006BA4C:
    // 0x8006BA4C: beq         $t4, $zero, L_8006BA88
    if (ctx->r12 == 0) {
        // 0x8006BA50: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_8006BA88;
    }
    // 0x8006BA50: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8006BA54: lui         $at, 0x4080
    ctx->r1 = S32(0X4080 << 16);
    // 0x8006BA58: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    // 0x8006BA5C: lui         $at, 0x3FA0
    ctx->r1 = S32(0X3FA0 << 16);
    // 0x8006BA60: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x8006BA64: lui         $a2, 0x3E2A
    ctx->r6 = S32(0X3E2A << 16);
    // 0x8006BA68: lui         $a3, 0x3D4C
    ctx->r7 = S32(0X3D4C << 16);
    // 0x8006BA6C: addiu       $t5, $sp, 0x40
    ctx->r13 = ADD32(ctx->r29, 0X40);
    // 0x8006BA70: sw          $t5, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r13;
    // 0x8006BA74: ori         $a3, $a3, 0xCCCD
    ctx->r7 = ctx->r7 | 0XCCCD;
    // 0x8006BA78: jal         0x8005743C
    // 0x8006BA7C: ori         $a2, $a2, 0xAAAB
    ctx->r6 = ctx->r6 | 0XAAAB;
    func_8005743C(rdram, ctx);
        goto after_12;
    // 0x8006BA7C: ori         $a2, $a2, 0xAAAB
    ctx->r6 = ctx->r6 | 0XAAAB;
    after_12:
    // 0x8006BA80: b           L_8006BAB0
    // 0x8006BA84: lw          $a1, 0xBC($s0)
    ctx->r5 = MEM_W(ctx->r16, 0XBC);
        goto L_8006BAB0;
    // 0x8006BA84: lw          $a1, 0xBC($s0)
    ctx->r5 = MEM_W(ctx->r16, 0XBC);
L_8006BA88:
    // 0x8006BA88: jal         0x8006B35C
    // 0x8006BA8C: addiu       $a1, $sp, 0x40
    ctx->r5 = ADD32(ctx->r29, 0X40);
    func_8006B35C(rdram, ctx);
        goto after_13;
    // 0x8006BA8C: addiu       $a1, $sp, 0x40
    ctx->r5 = ADD32(ctx->r29, 0X40);
    after_13:
    // 0x8006BA90: lui         $t6, 0x8012
    ctx->r14 = S32(0X8012 << 16);
    // 0x8006BA94: lhu         $t6, 0xB78($t6)
    ctx->r14 = MEM_HU(ctx->r14, 0XB78);
    // 0x8006BA98: addiu       $at, $zero, 0x9
    ctx->r1 = ADD32(0, 0X9);
    // 0x8006BA9C: beq         $t6, $at, L_8006BAAC
    if (ctx->r14 == ctx->r1) {
        // 0x8006BAA0: nop
    
            goto L_8006BAAC;
    }
    // 0x8006BAA0: nop

    // 0x8006BAA4: jal         0x80271980
    // 0x8006BAA8: addiu       $a0, $zero, 0x8
    ctx->r4 = ADD32(0, 0X8);
    LOOKUP_FUNC(0x80271980)(rdram, ctx);
        goto after_14;
    // 0x8006BAA8: addiu       $a0, $zero, 0x8
    ctx->r4 = ADD32(0, 0X8);
    after_14:
L_8006BAAC:
    // 0x8006BAAC: lw          $a1, 0xBC($s0)
    ctx->r5 = MEM_W(ctx->r16, 0XBC);
L_8006BAB0:
    // 0x8006BAB0: lh          $a2, 0xE4($s0)
    ctx->r6 = MEM_H(ctx->r16, 0XE4);
    // 0x8006BAB4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8006BAB8: jal         0x800575CC
    // 0x8006BABC: addiu       $a3, $sp, 0x40
    ctx->r7 = ADD32(ctx->r29, 0X40);
    func_800575CC(rdram, ctx);
        goto after_15;
    // 0x8006BABC: addiu       $a3, $sp, 0x40
    ctx->r7 = ADD32(ctx->r29, 0X40);
    after_15:
    // 0x8006BAC0: lui         $t8, 0x8009
    ctx->r24 = S32(0X8009 << 16);
    // 0x8006BAC4: lw          $t8, 0x3B20($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X3B20);
    // 0x8006BAC8: addiu       $t7, $zero, 0x2
    ctx->r15 = ADD32(0, 0X2);
    // 0x8006BACC: lui         $t1, 0x8009
    ctx->r9 = S32(0X8009 << 16);
    // 0x8006BAD0: sb          $t7, 0xBC($t8)
    MEM_B(0XBC, ctx->r24) = ctx->r15;
    // 0x8006BAD4: lw          $t1, 0x3B20($t1)
    ctx->r9 = MEM_W(ctx->r9, 0X3B20);
    // 0x8006BAD8: addiu       $t9, $zero, 0x2
    ctx->r25 = ADD32(0, 0X2);
    // 0x8006BADC: lui         $t3, 0x8009
    ctx->r11 = S32(0X8009 << 16);
    // 0x8006BAE0: sb          $t9, 0xBD($t1)
    MEM_B(0XBD, ctx->r9) = ctx->r25;
    // 0x8006BAE4: lw          $t3, 0x3B20($t3)
    ctx->r11 = MEM_W(ctx->r11, 0X3B20);
    // 0x8006BAE8: addiu       $t2, $zero, 0xA
    ctx->r10 = ADD32(0, 0XA);
    // 0x8006BAEC: b           L_8006BB88
    // 0x8006BAF0: sh          $t2, 0xC4($t3)
    MEM_H(0XC4, ctx->r11) = ctx->r10;
        goto L_8006BB88;
    // 0x8006BAF0: sh          $t2, 0xC4($t3)
    MEM_H(0XC4, ctx->r11) = ctx->r10;
L_8006BAF4:
    // 0x8006BAF4: lh          $v1, 0xE8($s0)
    ctx->r3 = MEM_H(ctx->r16, 0XE8);
    // 0x8006BAF8: andi        $t4, $v0, 0x1
    ctx->r12 = ctx->r2 & 0X1;
    // 0x8006BAFC: bne         $v1, $zero, L_8006BB8C
    if (ctx->r3 != 0) {
        // 0x8006BB00: lw          $t9, 0x98($sp)
        ctx->r25 = MEM_W(ctx->r29, 0X98);
            goto L_8006BB8C;
    }
    // 0x8006BB00: lw          $t9, 0x98($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X98);
    // 0x8006BB04: beq         $t4, $zero, L_8006BB8C
    if (ctx->r12 == 0) {
        // 0x8006BB08: lw          $t9, 0x98($sp)
        ctx->r25 = MEM_W(ctx->r29, 0X98);
            goto L_8006BB8C;
    }
    // 0x8006BB08: lw          $t9, 0x98($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X98);
    // 0x8006BB0C: lw          $a1, 0xF0($s0)
    ctx->r5 = MEM_W(ctx->r16, 0XF0);
    // 0x8006BB10: addiu       $t5, $v1, 0x1
    ctx->r13 = ADD32(ctx->r3, 0X1);
    // 0x8006BB14: bne         $a1, $zero, L_8006BB2C
    if (ctx->r5 != 0) {
        // 0x8006BB18: sh          $t5, 0xE8($s0)
        MEM_H(0XE8, ctx->r16) = ctx->r13;
            goto L_8006BB2C;
    }
    // 0x8006BB18: sh          $t5, 0xE8($s0)
    MEM_H(0XE8, ctx->r16) = ctx->r13;
    // 0x8006BB1C: lw          $t6, 0xC8($s0)
    ctx->r14 = MEM_W(ctx->r16, 0XC8);
    // 0x8006BB20: nop

    // 0x8006BB24: lw          $a1, 0x914($t6)
    ctx->r5 = MEM_W(ctx->r14, 0X914);
    // 0x8006BB28: nop

L_8006BB2C:
    // 0x8006BB2C: beq         $a1, $zero, L_8006BB4C
    if (ctx->r5 == 0) {
        // 0x8006BB30: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_8006BB4C;
    }
    // 0x8006BB30: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8006BB34: lhu         $t7, 0x12($a1)
    ctx->r15 = MEM_HU(ctx->r5, 0X12);
    // 0x8006BB38: nop

    // 0x8006BB3C: andi        $t8, $t7, 0x1
    ctx->r24 = ctx->r15 & 0X1;
    // 0x8006BB40: beq         $t8, $zero, L_8006BB4C
    if (ctx->r24 == 0) {
        // 0x8006BB44: nop
    
            goto L_8006BB4C;
    }
    // 0x8006BB44: nop

    // 0x8006BB48: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
L_8006BB4C:
    // 0x8006BB4C: beq         $a1, $zero, L_8006BB68
    if (ctx->r5 == 0) {
        // 0x8006BB50: nop
    
            goto L_8006BB68;
    }
    // 0x8006BB50: nop

    // 0x8006BB54: lw          $a0, 0xC4($s0)
    ctx->r4 = MEM_W(ctx->r16, 0XC4);
    // 0x8006BB58: jal         0x802A5F2C
    // 0x8006BB5C: nop

    LOOKUP_FUNC(0x802A5F2C)(rdram, ctx);
        goto after_16;
    // 0x8006BB5C: nop

    after_16:
    // 0x8006BB60: b           L_8006BB8C
    // 0x8006BB64: lw          $t9, 0x98($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X98);
        goto L_8006BB8C;
    // 0x8006BB64: lw          $t9, 0x98($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X98);
L_8006BB68:
    // 0x8006BB68: lw          $a1, 0xC8($s0)
    ctx->r5 = MEM_W(ctx->r16, 0XC8);
    // 0x8006BB6C: jal         0x802A402C
    // 0x8006BB70: addiu       $a1, $a1, 0x318
    ctx->r5 = ADD32(ctx->r5, 0X318);
    LOOKUP_FUNC(0x802A402C)(rdram, ctx);
        goto after_17;
    // 0x8006BB70: addiu       $a1, $a1, 0x318
    ctx->r5 = ADD32(ctx->r5, 0X318);
    after_17:
    // 0x8006BB74: beq         $v0, $zero, L_8006BB88
    if (ctx->r2 == 0) {
        // 0x8006BB78: or          $a1, $v0, $zero
        ctx->r5 = ctx->r2 | 0;
            goto L_8006BB88;
    }
    // 0x8006BB78: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    // 0x8006BB7C: lw          $a0, 0xC4($s0)
    ctx->r4 = MEM_W(ctx->r16, 0XC4);
    // 0x8006BB80: jal         0x802A5F2C
    // 0x8006BB84: nop

    LOOKUP_FUNC(0x802A5F2C)(rdram, ctx);
        goto after_18;
    // 0x8006BB84: nop

    after_18:
L_8006BB88:
    // 0x8006BB88: lw          $t9, 0x98($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X98);
L_8006BB8C:
    // 0x8006BB8C: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8006BB90: bne         $t9, $at, L_8006BBAC
    if (ctx->r25 != ctx->r1) {
        // 0x8006BB94: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_8006BBAC;
    }
    // 0x8006BB94: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8006BB98: lhu         $t1, 0x16($s0)
    ctx->r9 = MEM_HU(ctx->r16, 0X16);
    // 0x8006BB9C: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x8006BBA0: andi        $t2, $t1, 0xFFFD
    ctx->r10 = ctx->r9 & 0XFFFD;
    // 0x8006BBA4: jal         0x8024BC08
    // 0x8006BBA8: sh          $t2, 0x16($s0)
    MEM_H(0X16, ctx->r16) = ctx->r10;
    LOOKUP_FUNC(0x8024BC08)(rdram, ctx);
        goto after_19;
    // 0x8006BBA8: sh          $t2, 0x16($s0)
    MEM_H(0X16, ctx->r16) = ctx->r10;
    after_19:
L_8006BBAC:
    // 0x8006BBAC: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_8006BBB0:
    // 0x8006BBB0: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x8006BBB4: jr          $ra
    // 0x8006BBB8: addiu       $sp, $sp, 0xA0
    ctx->r29 = ADD32(ctx->r29, 0XA0);
    return;
    // 0x8006BBB8: addiu       $sp, $sp, 0xA0
    ctx->r29 = ADD32(ctx->r29, 0XA0);
;}
RECOMP_FUNC void func_8006BBBC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8006BBBC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8006BBC0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8006BBC4: lh          $t6, 0xE4($a0)
    ctx->r14 = MEM_H(ctx->r4, 0XE4);
    // 0x8006BBC8: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x8006BBCC: sll         $t7, $t6, 1
    ctx->r15 = S32(ctx->r14 << 1);
    // 0x8006BBD0: addu        $v0, $v0, $t7
    ctx->r2 = ADD32(ctx->r2, ctx->r15);
    // 0x8006BBD4: lh          $v0, -0x1330($v0)
    ctx->r2 = MEM_H(ctx->r2, -0X1330);
    // 0x8006BBD8: or          $a3, $a0, $zero
    ctx->r7 = ctx->r4 | 0;
    // 0x8006BBDC: bgez        $v0, L_8006BC00
    if (SIGNED(ctx->r2) >= 0) {
        // 0x8006BBE0: addiu       $a2, $zero, 0x4
        ctx->r6 = ADD32(0, 0X4);
            goto L_8006BC00;
    }
    // 0x8006BBE0: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    // 0x8006BBE4: lhu         $t1, 0x16($a0)
    ctx->r9 = MEM_HU(ctx->r4, 0X16);
    // 0x8006BBE8: andi        $t8, $v0, 0x7FFF
    ctx->r24 = ctx->r2 & 0X7FFF;
    // 0x8006BBEC: sll         $t9, $t8, 16
    ctx->r25 = S32(ctx->r24 << 16);
    // 0x8006BBF0: andi        $t2, $t1, 0x40
    ctx->r10 = ctx->r9 & 0X40;
    // 0x8006BBF4: bne         $t2, $zero, L_8006BC00
    if (ctx->r10 != 0) {
        // 0x8006BBF8: sra         $v0, $t9, 16
        ctx->r2 = S32(SIGNED(ctx->r25) >> 16);
            goto L_8006BC00;
    }
    // 0x8006BBF8: sra         $v0, $t9, 16
    ctx->r2 = S32(SIGNED(ctx->r25) >> 16);
    // 0x8006BBFC: addiu       $v0, $zero, 0x161
    ctx->r2 = ADD32(0, 0X161);
L_8006BC00:
    // 0x8006BC00: sll         $t3, $v0, 2
    ctx->r11 = S32(ctx->r2 << 2);
    // 0x8006BC04: lui         $a0, 0x802B
    ctx->r4 = S32(0X802B << 16);
    // 0x8006BC08: addu        $a0, $a0, $t3
    ctx->r4 = ADD32(ctx->r4, ctx->r11);
    // 0x8006BC0C: lw          $a0, 0x5F10($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X5F10);
    // 0x8006BC10: lw          $a1, 0xE0($a3)
    ctx->r5 = MEM_W(ctx->r7, 0XE0);
    // 0x8006BC14: jal         0x80272CF8
    // 0x8006BC18: sw          $a3, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r7;
    LOOKUP_FUNC(0x80272CF8)(rdram, ctx);
        goto after_0;
    // 0x8006BC18: sw          $a3, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r7;
    after_0:
    // 0x8006BC1C: lw          $a3, 0x18($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X18);
    // 0x8006BC20: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x8006BC24: lw          $t4, 0xC8($a3)
    ctx->r12 = MEM_W(ctx->r7, 0XC8);
    // 0x8006BC28: lhu         $t7, 0x16($a3)
    ctx->r15 = MEM_HU(ctx->r7, 0X16);
    // 0x8006BC2C: lbu         $t5, 0x8A8($t4)
    ctx->r13 = MEM_BU(ctx->r12, 0X8A8);
    // 0x8006BC30: andi        $t8, $t7, 0x40
    ctx->r24 = ctx->r15 & 0X40;
    // 0x8006BC34: sll         $t6, $t5, 2
    ctx->r14 = S32(ctx->r13 << 2);
    // 0x8006BC38: addu        $at, $at, $t6
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x8006BC3C: lwc1        $f0, -0x131C($at)
    ctx->f0.u32l = MEM_W(ctx->r1, -0X131C);
    // 0x8006BC40: bne         $t8, $zero, L_8006BC58
    if (ctx->r24 != 0) {
        // 0x8006BC44: or          $a0, $a3, $zero
        ctx->r4 = ctx->r7 | 0;
            goto L_8006BC58;
    }
    // 0x8006BC44: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
    // 0x8006BC48: lui         $t9, 0x8012
    ctx->r25 = S32(0X8012 << 16);
    // 0x8006BC4C: lhu         $t9, 0xB78($t9)
    ctx->r25 = MEM_HU(ctx->r25, 0XB78);
    // 0x8006BC50: nop

    // 0x8006BC54: beq         $t9, $zero, L_8006BC64
    if (ctx->r25 == 0) {
        // 0x8006BC58: lui         $at, 0x800E
        ctx->r1 = S32(0X800E << 16);
            goto L_8006BC64;
    }
L_8006BC58:
    // 0x8006BC58: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x8006BC5C: lwc1        $f0, -0x5874($at)
    ctx->f0.u32l = MEM_W(ctx->r1, -0X5874);
    // 0x8006BC60: nop

L_8006BC64:
    // 0x8006BC64: lui         $at, 0x4380
    ctx->r1 = S32(0X4380 << 16);
    // 0x8006BC68: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x8006BC6C: lui         $at, 0x4300
    ctx->r1 = S32(0X4300 << 16);
    // 0x8006BC70: mul.s       $f6, $f0, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f0.fl, ctx->f4.fl);
    // 0x8006BC74: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x8006BC78: addiu       $t3, $zero, 0x1
    ctx->r11 = ADD32(0, 0X1);
    // 0x8006BC7C: lw          $v0, 0xE0($a3)
    ctx->r2 = MEM_W(ctx->r7, 0XE0);
    // 0x8006BC80: add.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x8006BC84: lw          $t0, 0xC($v0)
    ctx->r8 = MEM_W(ctx->r2, 0XC);
    // 0x8006BC88: cfc1        $t2, $FpcCsr
    ctx->r10 = get_cop1_cs();
    // 0x8006BC8C: ctc1        $t3, $FpcCsr
    set_cop1_cs(ctx->r11);
    // 0x8006BC90: andi        $t1, $t0, 0xFFFF
    ctx->r9 = ctx->r8 & 0XFFFF;
    // 0x8006BC94: cvt.w.s     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.u32l = CVT_W_S(ctx->f10.fl);
    // 0x8006BC98: sw          $t1, 0xC($v0)
    MEM_W(0XC, ctx->r2) = ctx->r9;
    // 0x8006BC9C: cfc1        $t3, $FpcCsr
    ctx->r11 = get_cop1_cs();
    // 0x8006BCA0: lw          $v0, 0xE0($a3)
    ctx->r2 = MEM_W(ctx->r7, 0XE0);
    // 0x8006BCA4: andi        $t3, $t3, 0x78
    ctx->r11 = ctx->r11 & 0X78;
    // 0x8006BCA8: beq         $t3, $zero, L_8006BCF8
    if (ctx->r11 == 0) {
        // 0x8006BCAC: or          $a2, $zero, $zero
        ctx->r6 = 0 | 0;
            goto L_8006BCF8;
    }
    // 0x8006BCAC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x8006BCB0: lui         $at, 0x4F00
    ctx->r1 = S32(0X4F00 << 16);
    // 0x8006BCB4: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x8006BCB8: addiu       $t3, $zero, 0x1
    ctx->r11 = ADD32(0, 0X1);
    // 0x8006BCBC: sub.s       $f16, $f10, $f16
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f16.fl = ctx->f10.fl - ctx->f16.fl;
    // 0x8006BCC0: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x8006BCC4: ctc1        $t3, $FpcCsr
    set_cop1_cs(ctx->r11);
    // 0x8006BCC8: nop

    // 0x8006BCCC: cvt.w.s     $f16, $f16
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    ctx->f16.u32l = CVT_W_S(ctx->f16.fl);
    // 0x8006BCD0: cfc1        $t3, $FpcCsr
    ctx->r11 = get_cop1_cs();
    // 0x8006BCD4: nop

    // 0x8006BCD8: andi        $t3, $t3, 0x78
    ctx->r11 = ctx->r11 & 0X78;
    // 0x8006BCDC: bne         $t3, $zero, L_8006BCF0
    if (ctx->r11 != 0) {
        // 0x8006BCE0: nop
    
            goto L_8006BCF0;
    }
    // 0x8006BCE0: nop

    // 0x8006BCE4: mfc1        $t3, $f16
    ctx->r11 = (int32_t)ctx->f16.u32l;
    // 0x8006BCE8: b           L_8006BD08
    // 0x8006BCEC: or          $t3, $t3, $at
    ctx->r11 = ctx->r11 | ctx->r1;
        goto L_8006BD08;
    // 0x8006BCEC: or          $t3, $t3, $at
    ctx->r11 = ctx->r11 | ctx->r1;
L_8006BCF0:
    // 0x8006BCF0: b           L_8006BD08
    // 0x8006BCF4: addiu       $t3, $zero, -0x1
    ctx->r11 = ADD32(0, -0X1);
        goto L_8006BD08;
    // 0x8006BCF4: addiu       $t3, $zero, -0x1
    ctx->r11 = ADD32(0, -0X1);
L_8006BCF8:
    // 0x8006BCF8: mfc1        $t3, $f16
    ctx->r11 = (int32_t)ctx->f16.u32l;
    // 0x8006BCFC: nop

    // 0x8006BD00: bltz        $t3, L_8006BCF0
    if (SIGNED(ctx->r11) < 0) {
        // 0x8006BD04: nop
    
            goto L_8006BCF0;
    }
    // 0x8006BD04: nop

L_8006BD08:
    // 0x8006BD08: lw          $t6, 0xC($v0)
    ctx->r14 = MEM_W(ctx->r2, 0XC);
    // 0x8006BD0C: sll         $t5, $t3, 16
    ctx->r13 = S32(ctx->r11 << 16);
    // 0x8006BD10: or          $t7, $t6, $t5
    ctx->r15 = ctx->r14 | ctx->r13;
    // 0x8006BD14: sw          $t7, 0xC($v0)
    MEM_W(0XC, ctx->r2) = ctx->r15;
    // 0x8006BD18: ctc1        $t2, $FpcCsr
    set_cop1_cs(ctx->r10);
    // 0x8006BD1C: lhu         $a1, 0x3E($a3)
    ctx->r5 = MEM_HU(ctx->r7, 0X3E);
    // 0x8006BD20: jal         0x80272D3C
    // 0x8006BD24: sw          $a3, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r7;
    LOOKUP_FUNC(0x80272D3C)(rdram, ctx);
        goto after_1;
    // 0x8006BD24: sw          $a3, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r7;
    after_1:
    // 0x8006BD28: lw          $a3, 0x18($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X18);
    // 0x8006BD2C: addiu       $at, $zero, 0x7
    ctx->r1 = ADD32(0, 0X7);
    // 0x8006BD30: lh          $t8, 0xE4($a3)
    ctx->r24 = MEM_H(ctx->r7, 0XE4);
    // 0x8006BD34: nop

    // 0x8006BD38: bne         $t8, $at, L_8006BDA8
    if (ctx->r24 != ctx->r1) {
        // 0x8006BD3C: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_8006BDA8;
    }
    // 0x8006BD3C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8006BD40: lw          $t9, 0xCC($a3)
    ctx->r25 = MEM_W(ctx->r7, 0XCC);
    // 0x8006BD44: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x8006BD48: lw          $t0, 0x30($t9)
    ctx->r8 = MEM_W(ctx->r25, 0X30);
    // 0x8006BD4C: nop

    // 0x8006BD50: lhu         $t1, 0x2($t0)
    ctx->r9 = MEM_HU(ctx->r8, 0X2);
    // 0x8006BD54: nop

    // 0x8006BD58: andi        $t2, $t1, 0x8000
    ctx->r10 = ctx->r9 & 0X8000;
    // 0x8006BD5C: beq         $t2, $zero, L_8006BD88
    if (ctx->r10 == 0) {
        // 0x8006BD60: nop
    
            goto L_8006BD88;
    }
    // 0x8006BD60: nop

    // 0x8006BD64: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x8006BD68: lwc1        $f18, 0x8C($a3)
    ctx->f18.u32l = MEM_W(ctx->r7, 0X8C);
    // 0x8006BD6C: lwc1        $f7, -0x5870($at)
    ctx->f_odd[(7 - 1) * 2] = MEM_W(ctx->r1, -0X5870);
    // 0x8006BD70: lwc1        $f6, -0x586C($at)
    ctx->f6.u32l = MEM_W(ctx->r1, -0X586C);
    // 0x8006BD74: cvt.d.s     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.fl); 
    ctx->f4.d = CVT_D_S(ctx->f18.fl);
    // 0x8006BD78: sub.d       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f6.d); 
    ctx->f8.d = ctx->f4.d - ctx->f6.d;
    // 0x8006BD7C: cvt.s.d     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.d); 
    ctx->f10.fl = CVT_S_D(ctx->f8.d);
    // 0x8006BD80: b           L_8006BDA4
    // 0x8006BD84: swc1        $f10, 0x8C($a3)
    MEM_W(0X8C, ctx->r7) = ctx->f10.u32l;
        goto L_8006BDA4;
    // 0x8006BD84: swc1        $f10, 0x8C($a3)
    MEM_W(0X8C, ctx->r7) = ctx->f10.u32l;
L_8006BD88:
    // 0x8006BD88: lwc1        $f16, 0x8C($a3)
    ctx->f16.u32l = MEM_W(ctx->r7, 0X8C);
    // 0x8006BD8C: lwc1        $f5, -0x5868($at)
    ctx->f_odd[(5 - 1) * 2] = MEM_W(ctx->r1, -0X5868);
    // 0x8006BD90: lwc1        $f4, -0x5864($at)
    ctx->f4.u32l = MEM_W(ctx->r1, -0X5864);
    // 0x8006BD94: cvt.d.s     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); 
    ctx->f18.d = CVT_D_S(ctx->f16.fl);
    // 0x8006BD98: add.d       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.d); NAN_CHECK(ctx->f4.d); 
    ctx->f6.d = ctx->f18.d + ctx->f4.d;
    // 0x8006BD9C: cvt.s.d     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.d); 
    ctx->f8.fl = CVT_S_D(ctx->f6.d);
    // 0x8006BDA0: swc1        $f8, 0x8C($a3)
    MEM_W(0X8C, ctx->r7) = ctx->f8.u32l;
L_8006BDA4:
    // 0x8006BDA4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8006BDA8:
    // 0x8006BDA8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8006BDAC: jr          $ra
    // 0x8006BDB0: nop

    return;
    // 0x8006BDB0: nop

;}
RECOMP_FUNC void func_8006BDB4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8006BDB4: addiu       $sp, $sp, -0xA0
    ctx->r29 = ADD32(ctx->r29, -0XA0);
    // 0x8006BDB8: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x8006BDBC: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x8006BDC0: jal         0x80272C74
    // 0x8006BDC4: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    LOOKUP_FUNC(0x80272C74)(rdram, ctx);
        goto after_0;
    // 0x8006BDC4: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    after_0:
    // 0x8006BDC8: sw          $v0, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r2;
    // 0x8006BDCC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8006BDD0: jal         0x80274CFC
    // 0x8006BDD4: addiu       $a1, $zero, 0x96
    ctx->r5 = ADD32(0, 0X96);
    LOOKUP_FUNC(0x80274CFC)(rdram, ctx);
        goto after_1;
    // 0x8006BDD4: addiu       $a1, $zero, 0x96
    ctx->r5 = ADD32(0, 0X96);
    after_1:
    // 0x8006BDD8: lhu         $v1, 0x10($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X10);
    // 0x8006BDDC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8006BDE0: beq         $v1, $zero, L_8006BE10
    if (ctx->r3 == 0) {
        // 0x8006BDE4: or          $v0, $v1, $zero
        ctx->r2 = ctx->r3 | 0;
            goto L_8006BE10;
    }
    // 0x8006BDE4: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    // 0x8006BDE8: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8006BDEC: beq         $v0, $at, L_8006C2FC
    if (ctx->r2 == ctx->r1) {
        // 0x8006BDF0: addiu       $at, $zero, 0x2
        ctx->r1 = ADD32(0, 0X2);
            goto L_8006C2FC;
    }
    // 0x8006BDF0: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x8006BDF4: beq         $v0, $at, L_8006C430
    if (ctx->r2 == ctx->r1) {
        // 0x8006BDF8: lui         $t2, 0x8009
        ctx->r10 = S32(0X8009 << 16);
            goto L_8006C430;
    }
    // 0x8006BDF8: lui         $t2, 0x8009
    ctx->r10 = S32(0X8009 << 16);
    // 0x8006BDFC: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x8006BE00: beq         $v0, $at, L_8006C844
    if (ctx->r2 == ctx->r1) {
        // 0x8006BE04: lw          $t2, 0x64($sp)
        ctx->r10 = MEM_W(ctx->r29, 0X64);
            goto L_8006C844;
    }
    // 0x8006BE04: lw          $t2, 0x64($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X64);
    // 0x8006BE08: b           L_8006C85C
    // 0x8006BE0C: lh          $t3, 0xEC($s0)
    ctx->r11 = MEM_H(ctx->r16, 0XEC);
        goto L_8006C85C;
    // 0x8006BE0C: lh          $t3, 0xEC($s0)
    ctx->r11 = MEM_H(ctx->r16, 0XEC);
L_8006BE10:
    // 0x8006BE10: addiu       $t6, $v1, 0x1
    ctx->r14 = ADD32(ctx->r3, 0X1);
    // 0x8006BE14: jal         0x80067B2C
    // 0x8006BE18: sh          $t6, 0x10($s0)
    MEM_H(0X10, ctx->r16) = ctx->r14;
    func_80067B2C(rdram, ctx);
        goto after_2;
    // 0x8006BE18: sh          $t6, 0x10($s0)
    MEM_H(0X10, ctx->r16) = ctx->r14;
    after_2:
    // 0x8006BE1C: bgez        $v0, L_8006BE28
    if (SIGNED(ctx->r2) >= 0) {
        // 0x8006BE20: or          $v1, $v0, $zero
        ctx->r3 = ctx->r2 | 0;
            goto L_8006BE28;
    }
    // 0x8006BE20: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
    // 0x8006BE24: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
L_8006BE28:
    // 0x8006BE28: sll         $t7, $v1, 2
    ctx->r15 = S32(ctx->r3 << 2);
    // 0x8006BE2C: subu        $t7, $t7, $v1
    ctx->r15 = SUB32(ctx->r15, ctx->r3);
    // 0x8006BE30: lui         $t8, 0x8012
    ctx->r24 = S32(0X8012 << 16);
    // 0x8006BE34: sh          $v1, 0xEC($s0)
    MEM_H(0XEC, ctx->r16) = ctx->r3;
    // 0x8006BE38: addiu       $t8, $t8, 0x680
    ctx->r24 = ADD32(ctx->r24, 0X680);
    // 0x8006BE3C: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8006BE40: addu        $v0, $t7, $t8
    ctx->r2 = ADD32(ctx->r15, ctx->r24);
    // 0x8006BE44: lui         $at, 0x4020
    ctx->r1 = S32(0X4020 << 16);
    // 0x8006BE48: lwc1        $f4, 0x8($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X8);
    // 0x8006BE4C: lwc1        $f6, 0x0($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0X0);
    // 0x8006BE50: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x8006BE54: swc1        $f4, 0x98($sp)
    MEM_W(0X98, ctx->r29) = ctx->f4.u32l;
    // 0x8006BE58: swc1        $f6, 0x94($sp)
    MEM_W(0X94, ctx->r29) = ctx->f6.u32l;
    // 0x8006BE5C: swc1        $f8, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->f8.u32l;
    // 0x8006BE60: lw          $t9, 0xC8($s0)
    ctx->r25 = MEM_W(ctx->r16, 0XC8);
    // 0x8006BE64: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8006BE68: lwc1        $f10, 0x8C0($t9)
    ctx->f10.u32l = MEM_W(ctx->r25, 0X8C0);
    // 0x8006BE6C: nop

    // 0x8006BE70: swc1        $f10, 0xF4($s0)
    MEM_W(0XF4, ctx->r16) = ctx->f10.u32l;
    // 0x8006BE74: sw          $v1, 0x9C($sp)
    MEM_W(0X9C, ctx->r29) = ctx->r3;
    // 0x8006BE78: jal         0x802732F4
    // 0x8006BE7C: sw          $v0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r2;
    LOOKUP_FUNC(0x802732F4)(rdram, ctx);
        goto after_3;
    // 0x8006BE7C: sw          $v0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r2;
    after_3:
    // 0x8006BE80: lh          $t0, 0xE8($s0)
    ctx->r8 = MEM_H(ctx->r16, 0XE8);
    // 0x8006BE84: nop

    // 0x8006BE88: beq         $t0, $zero, L_8006BE9C
    if (ctx->r8 == 0) {
        // 0x8006BE8C: nop
    
            goto L_8006BE9C;
    }
    // 0x8006BE8C: nop

    // 0x8006BE90: lwc1        $f16, 0xBC($s0)
    ctx->f16.u32l = MEM_W(ctx->r16, 0XBC);
    // 0x8006BE94: b           L_8006BEC4
    // 0x8006BE98: swc1        $f16, 0x84($sp)
    MEM_W(0X84, ctx->r29) = ctx->f16.u32l;
        goto L_8006BEC4;
    // 0x8006BE98: swc1        $f16, 0x84($sp)
    MEM_W(0X84, ctx->r29) = ctx->f16.u32l;
L_8006BE9C:
    // 0x8006BE9C: lw          $t1, 0xC8($s0)
    ctx->r9 = MEM_W(ctx->r16, 0XC8);
    // 0x8006BEA0: mtc1        $zero, $f14
    ctx->f14.u32l = 0;
    // 0x8006BEA4: lh          $t2, 0x8B8($t1)
    ctx->r10 = MEM_H(ctx->r9, 0X8B8);
    // 0x8006BEA8: lw          $a2, 0x98($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X98);
    // 0x8006BEAC: mtc1        $t2, $f18
    ctx->f18.u32l = ctx->r10;
    // 0x8006BEB0: lw          $a3, 0x94($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X94);
    // 0x8006BEB4: addiu       $t3, $sp, 0x84
    ctx->r11 = ADD32(ctx->r29, 0X84);
    // 0x8006BEB8: sw          $t3, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r11;
    // 0x8006BEBC: jal         0x80272B1C
    // 0x8006BEC0: cvt.s.w     $f12, $f18
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 18);
    ctx->f12.fl = CVT_S_W(ctx->f18.u32l);
    LOOKUP_FUNC(0x80272B1C)(rdram, ctx);
        goto after_4;
    // 0x8006BEC0: cvt.s.w     $f12, $f18
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 18);
    ctx->f12.fl = CVT_S_W(ctx->f18.u32l);
    after_4:
L_8006BEC4:
    // 0x8006BEC4: lwc1        $f12, 0xF4($s0)
    ctx->f12.u32l = MEM_W(ctx->r16, 0XF4);
    // 0x8006BEC8: lwc1        $f14, 0x88($s0)
    ctx->f14.u32l = MEM_W(ctx->r16, 0X88);
    // 0x8006BECC: jal         0x80279308
    // 0x8006BED0: nop

    LOOKUP_FUNC(0x80279308)(rdram, ctx);
        goto after_5;
    // 0x8006BED0: nop

    after_5:
    // 0x8006BED4: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x8006BED8: lwc1        $f7, -0x5860($at)
    ctx->f_odd[(7 - 1) * 2] = MEM_W(ctx->r1, -0X5860);
    // 0x8006BEDC: lwc1        $f6, -0x585C($at)
    ctx->f6.u32l = MEM_W(ctx->r1, -0X585C);
    // 0x8006BEE0: cvt.d.s     $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f4.d = CVT_D_S(ctx->f0.fl);
    // 0x8006BEE4: c.lt.d      $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f4.d < ctx->f6.d;
    // 0x8006BEE8: nop

    // 0x8006BEEC: bc1f        L_8006BFB0
    if (!c1cs) {
        // 0x8006BEF0: lui         $t4, 0x8009
        ctx->r12 = S32(0X8009 << 16);
            goto L_8006BFB0;
    }
    // 0x8006BEF0: lui         $t4, 0x8009
    ctx->r12 = S32(0X8009 << 16);
    // 0x8006BEF4: lw          $t4, 0x3B20($t4)
    ctx->r12 = MEM_W(ctx->r12, 0X3B20);
    // 0x8006BEF8: nop

    // 0x8006BEFC: lwc1        $f12, 0x20($t4)
    ctx->f12.u32l = MEM_W(ctx->r12, 0X20);
    // 0x8006BF00: jal         0x80081040
    // 0x8006BF04: nop

    func_80081040(rdram, ctx);
        goto after_6;
    // 0x8006BF04: nop

    after_6:
    // 0x8006BF08: jal         0x80272AEC
    // 0x8006BF0C: mov.s       $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    ctx->f12.fl = ctx->f0.fl;
    LOOKUP_FUNC(0x80272AEC)(rdram, ctx);
        goto after_7;
    // 0x8006BF0C: mov.s       $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    ctx->f12.fl = ctx->f0.fl;
    after_7:
    // 0x8006BF10: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x8006BF14: lwc1        $f9, -0x5858($at)
    ctx->f_odd[(9 - 1) * 2] = MEM_W(ctx->r1, -0X5858);
    // 0x8006BF18: lwc1        $f8, -0x5854($at)
    ctx->f8.u32l = MEM_W(ctx->r1, -0X5854);
    // 0x8006BF1C: cvt.d.s     $f10, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f10.d = CVT_D_S(ctx->f0.fl);
    // 0x8006BF20: c.lt.d      $f8, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f8.d < ctx->f10.d;
    // 0x8006BF24: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x8006BF28: bc1f        L_8006BFB0
    if (!c1cs) {
        // 0x8006BF2C: nop
    
            goto L_8006BFB0;
    }
    // 0x8006BF2C: nop

    // 0x8006BF30: lwc1        $f16, -0x5850($at)
    ctx->f16.u32l = MEM_W(ctx->r1, -0X5850);
    // 0x8006BF34: nop

    // 0x8006BF38: swc1        $f16, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->f16.u32l;
    // 0x8006BF3C: lwc1        $f14, 0x88($s0)
    ctx->f14.u32l = MEM_W(ctx->r16, 0X88);
    // 0x8006BF40: lwc1        $f12, 0x8C($s0)
    ctx->f12.u32l = MEM_W(ctx->r16, 0X8C);
    // 0x8006BF44: jal         0x8027924C
    // 0x8006BF48: swc1        $f14, 0xF4($s0)
    MEM_W(0XF4, ctx->r16) = ctx->f14.u32l;
    LOOKUP_FUNC(0x8027924C)(rdram, ctx);
        goto after_8;
    // 0x8006BF48: swc1        $f14, 0xF4($s0)
    MEM_W(0XF4, ctx->r16) = ctx->f14.u32l;
    after_8:
    // 0x8006BF4C: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x8006BF50: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x8006BF54: c.lt.s      $f18, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f18.fl < ctx->f0.fl;
    // 0x8006BF58: nop

    // 0x8006BF5C: bc1f        L_8006BF84
    if (!c1cs) {
        // 0x8006BF60: nop
    
            goto L_8006BF84;
    }
    // 0x8006BF60: nop

    // 0x8006BF64: lwc1        $f4, 0xF4($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0XF4);
    // 0x8006BF68: lwc1        $f9, -0x5848($at)
    ctx->f_odd[(9 - 1) * 2] = MEM_W(ctx->r1, -0X5848);
    // 0x8006BF6C: lwc1        $f8, -0x5844($at)
    ctx->f8.u32l = MEM_W(ctx->r1, -0X5844);
    // 0x8006BF70: cvt.d.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.d = CVT_D_S(ctx->f4.fl);
    // 0x8006BF74: sub.d       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f8.d); 
    ctx->f10.d = ctx->f6.d - ctx->f8.d;
    // 0x8006BF78: cvt.s.d     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f16.fl = CVT_S_D(ctx->f10.d);
    // 0x8006BF7C: b           L_8006BFFC
    // 0x8006BF80: swc1        $f16, 0xF4($s0)
    MEM_W(0XF4, ctx->r16) = ctx->f16.u32l;
        goto L_8006BFFC;
    // 0x8006BF80: swc1        $f16, 0xF4($s0)
    MEM_W(0XF4, ctx->r16) = ctx->f16.u32l;
L_8006BF84:
    // 0x8006BF84: jal         0x802732D0
    // 0x8006BF88: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    LOOKUP_FUNC(0x802732D0)(rdram, ctx);
        goto after_9;
    // 0x8006BF88: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_9:
    // 0x8006BF8C: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x8006BF90: lwc1        $f18, 0xF4($s0)
    ctx->f18.u32l = MEM_W(ctx->r16, 0XF4);
    // 0x8006BF94: lwc1        $f7, -0x5840($at)
    ctx->f_odd[(7 - 1) * 2] = MEM_W(ctx->r1, -0X5840);
    // 0x8006BF98: lwc1        $f6, -0x583C($at)
    ctx->f6.u32l = MEM_W(ctx->r1, -0X583C);
    // 0x8006BF9C: cvt.d.s     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.fl); 
    ctx->f4.d = CVT_D_S(ctx->f18.fl);
    // 0x8006BFA0: add.d       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f6.d); 
    ctx->f8.d = ctx->f4.d + ctx->f6.d;
    // 0x8006BFA4: cvt.s.d     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.d); 
    ctx->f10.fl = CVT_S_D(ctx->f8.d);
    // 0x8006BFA8: b           L_8006BFFC
    // 0x8006BFAC: swc1        $f10, 0xF4($s0)
    MEM_W(0XF4, ctx->r16) = ctx->f10.u32l;
        goto L_8006BFFC;
    // 0x8006BFAC: swc1        $f10, 0xF4($s0)
    MEM_W(0XF4, ctx->r16) = ctx->f10.u32l;
L_8006BFB0:
    // 0x8006BFB0: lwc1        $f12, 0x4C($s0)
    ctx->f12.u32l = MEM_W(ctx->r16, 0X4C);
    // 0x8006BFB4: lwc1        $f14, 0x44($s0)
    ctx->f14.u32l = MEM_W(ctx->r16, 0X44);
    // 0x8006BFB8: lw          $a2, 0x98($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X98);
    // 0x8006BFBC: lw          $a3, 0x94($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X94);
    // 0x8006BFC0: addiu       $t5, $sp, 0x7C
    ctx->r13 = ADD32(ctx->r29, 0X7C);
    // 0x8006BFC4: jal         0x80272B1C
    // 0x8006BFC8: sw          $t5, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r13;
    LOOKUP_FUNC(0x80272B1C)(rdram, ctx);
        goto after_10;
    // 0x8006BFC8: sw          $t5, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r13;
    after_10:
    // 0x8006BFCC: lwc1        $f12, 0xF4($s0)
    ctx->f12.u32l = MEM_W(ctx->r16, 0XF4);
    // 0x8006BFD0: lwc1        $f14, 0x7C($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X7C);
    // 0x8006BFD4: jal         0x8027924C
    // 0x8006BFD8: nop

    LOOKUP_FUNC(0x8027924C)(rdram, ctx);
        goto after_11;
    // 0x8006BFD8: nop

    after_11:
    // 0x8006BFDC: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x8006BFE0: nop

    // 0x8006BFE4: c.lt.s      $f16, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f16.fl < ctx->f0.fl;
    // 0x8006BFE8: nop

    // 0x8006BFEC: bc1f        L_8006C000
    if (!c1cs) {
        // 0x8006BFF0: lw          $a1, 0x98($sp)
        ctx->r5 = MEM_W(ctx->r29, 0X98);
            goto L_8006C000;
    }
    // 0x8006BFF0: lw          $a1, 0x98($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X98);
    // 0x8006BFF4: jal         0x802732D0
    // 0x8006BFF8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    LOOKUP_FUNC(0x802732D0)(rdram, ctx);
        goto after_12;
    // 0x8006BFF8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_12:
L_8006BFFC:
    // 0x8006BFFC: lw          $a1, 0x98($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X98);
L_8006C000:
    // 0x8006C000: lw          $a2, 0x94($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X94);
    // 0x8006C004: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8006C008: jal         0x80272B98
    // 0x8006C00C: addiu       $a3, $sp, 0x74
    ctx->r7 = ADD32(ctx->r29, 0X74);
    LOOKUP_FUNC(0x80272B98)(rdram, ctx);
        goto after_13;
    // 0x8006C00C: addiu       $a3, $sp, 0x74
    ctx->r7 = ADD32(ctx->r29, 0X74);
    after_13:
    // 0x8006C010: lw          $a1, 0x78($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X78);
    // 0x8006C014: jal         0x80068298
    // 0x8006C018: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80068298(rdram, ctx);
        goto after_14;
    // 0x8006C018: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_14:
    // 0x8006C01C: beq         $v0, $zero, L_8006C034
    if (ctx->r2 == 0) {
        // 0x8006C020: lui         $at, 0x4120
        ctx->r1 = S32(0X4120 << 16);
            goto L_8006C034;
    }
    // 0x8006C020: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x8006C024: lh          $t6, 0xE4($s0)
    ctx->r14 = MEM_H(ctx->r16, 0XE4);
    // 0x8006C028: nop

    // 0x8006C02C: addiu       $t7, $t6, 0x1
    ctx->r15 = ADD32(ctx->r14, 0X1);
    // 0x8006C030: sh          $t7, 0xE4($s0)
    MEM_H(0XE4, ctx->r16) = ctx->r15;
L_8006C034:
    // 0x8006C034: lw          $t8, 0x2C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X2C);
    // 0x8006C038: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x8006C03C: lwc1        $f0, 0x4($t8)
    ctx->f0.u32l = MEM_W(ctx->r24, 0X4);
    // 0x8006C040: lui         $t3, 0x800B
    ctx->r11 = S32(0X800B << 16);
    // 0x8006C044: c.lt.s      $f0, $f18
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f0.fl < ctx->f18.fl;
    // 0x8006C048: swc1        $f0, 0xF0($s0)
    MEM_W(0XF0, ctx->r16) = ctx->f0.u32l;
    // 0x8006C04C: bc1f        L_8006C064
    if (!c1cs) {
        // 0x8006C050: nop
    
            goto L_8006C064;
    }
    // 0x8006C050: nop

    // 0x8006C054: lh          $t9, 0xE4($s0)
    ctx->r25 = MEM_H(ctx->r16, 0XE4);
    // 0x8006C058: nop

    // 0x8006C05C: addiu       $t0, $t9, 0x2
    ctx->r8 = ADD32(ctx->r25, 0X2);
    // 0x8006C060: sh          $t0, 0xE4($s0)
    MEM_H(0XE4, ctx->r16) = ctx->r8;
L_8006C064:
    // 0x8006C064: lh          $t1, 0xE4($s0)
    ctx->r9 = MEM_H(ctx->r16, 0XE4);
    // 0x8006C068: lui         $a0, 0x802B
    ctx->r4 = S32(0X802B << 16);
    // 0x8006C06C: sll         $t2, $t1, 1
    ctx->r10 = S32(ctx->r9 << 1);
    // 0x8006C070: addu        $t3, $t3, $t2
    ctx->r11 = ADD32(ctx->r11, ctx->r10);
    // 0x8006C074: lhu         $t3, -0x12F8($t3)
    ctx->r11 = MEM_HU(ctx->r11, -0X12F8);
    // 0x8006C078: lw          $a1, 0xE0($s0)
    ctx->r5 = MEM_W(ctx->r16, 0XE0);
    // 0x8006C07C: sll         $t4, $t3, 2
    ctx->r12 = S32(ctx->r11 << 2);
    // 0x8006C080: addu        $a0, $a0, $t4
    ctx->r4 = ADD32(ctx->r4, ctx->r12);
    // 0x8006C084: lw          $a0, 0x5F10($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X5F10);
    // 0x8006C088: jal         0x80272CF8
    // 0x8006C08C: addiu       $a2, $zero, 0x6
    ctx->r6 = ADD32(0, 0X6);
    LOOKUP_FUNC(0x80272CF8)(rdram, ctx);
        goto after_15;
    // 0x8006C08C: addiu       $a2, $zero, 0x6
    ctx->r6 = ADD32(0, 0X6);
    after_15:
    // 0x8006C090: lh          $t5, 0xE4($s0)
    ctx->r13 = MEM_H(ctx->r16, 0XE4);
    // 0x8006C094: lui         $t7, 0x800B
    ctx->r15 = S32(0X800B << 16);
    // 0x8006C098: sll         $t6, $t5, 1
    ctx->r14 = S32(ctx->r13 << 1);
    // 0x8006C09C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8006C0A0: lhu         $t7, -0x1308($t7)
    ctx->r15 = MEM_HU(ctx->r15, -0X1308);
    // 0x8006C0A4: lw          $t8, 0xE0($s0)
    ctx->r24 = MEM_W(ctx->r16, 0XE0);
    // 0x8006C0A8: sh          $t7, 0xE6($s0)
    MEM_H(0XE6, ctx->r16) = ctx->r15;
    // 0x8006C0AC: lhu         $t9, 0x1E($t8)
    ctx->r25 = MEM_HU(ctx->r24, 0X1E);
    // 0x8006C0B0: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x8006C0B4: lui         $at, 0x4170
    ctx->r1 = S32(0X4170 << 16);
    // 0x8006C0B8: sw          $t9, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->r25;
    // 0x8006C0BC: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x8006C0C0: lwc1        $f4, 0x4($t0)
    ctx->f4.u32l = MEM_W(ctx->r8, 0X4);
    // 0x8006C0C4: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x8006C0C8: sub.s       $f0, $f4, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f0.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x8006C0CC: lui         $at, 0x4080
    ctx->r1 = S32(0X4080 << 16);
    // 0x8006C0D0: c.lt.s      $f8, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f8.fl < ctx->f0.fl;
    // 0x8006C0D4: nop

    // 0x8006C0D8: bc1f        L_8006C134
    if (!c1cs) {
        // 0x8006C0DC: nop
    
            goto L_8006C134;
    }
    // 0x8006C0DC: nop

    // 0x8006C0E0: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x8006C0E4: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x8006C0E8: lui         $at, 0x3FD4
    ctx->r1 = S32(0X3FD4 << 16);
    // 0x8006C0EC: mul.s       $f16, $f10, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f16.fl = MUL_S(ctx->f10.fl, ctx->f0.fl);
    // 0x8006C0F0: mtc1        $at, $f5
    ctx->f_odd[(5 - 1) * 2] = ctx->r1;
    // 0x8006C0F4: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x8006C0F8: cvt.d.s     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); 
    ctx->f18.d = CVT_D_S(ctx->f16.fl);
    // 0x8006C0FC: nop

    // 0x8006C100: div.d       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.d); NAN_CHECK(ctx->f4.d); 
    ctx->f6.d = DIV_D(ctx->f18.d, ctx->f4.d);
    // 0x8006C104: jal         0x8007FA40
    // 0x8006C108: cvt.s.d     $f12, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.d); 
    ctx->f12.fl = CVT_S_D(ctx->f6.d);
    func_8007FA40(rdram, ctx);
        goto after_16;
    // 0x8006C108: cvt.s.d     $f12, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.d); 
    ctx->f12.fl = CVT_S_D(ctx->f6.d);
    after_16:
    // 0x8006C10C: lui         $at, 0x4040
    ctx->r1 = S32(0X4040 << 16);
    // 0x8006C110: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x8006C114: mov.s       $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    ctx->f12.fl = ctx->f0.fl;
    // 0x8006C118: c.lt.s      $f0, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f0.fl < ctx->f8.fl;
    // 0x8006C11C: lui         $at, 0x4080
    ctx->r1 = S32(0X4080 << 16);
    // 0x8006C120: bc1f        L_8006C140
    if (!c1cs) {
        // 0x8006C124: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_8006C140;
    }
    // 0x8006C124: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8006C128: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    // 0x8006C12C: b           L_8006C140
    // 0x8006C130: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
        goto L_8006C140;
    // 0x8006C130: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
L_8006C134:
    // 0x8006C134: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    // 0x8006C138: nop

    // 0x8006C13C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
L_8006C140:
    // 0x8006C140: jal         0x80275238
    // 0x8006C144: swc1        $f12, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f12.u32l;
    LOOKUP_FUNC(0x80275238)(rdram, ctx);
        goto after_17;
    // 0x8006C144: swc1        $f12, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f12.u32l;
    after_17:
    // 0x8006C148: lwc1        $f12, 0x3C($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x8006C14C: lui         $at, 0x3FD4
    ctx->r1 = S32(0X3FD4 << 16);
    // 0x8006C150: mtc1        $at, $f17
    ctx->f_odd[(17 - 1) * 2] = ctx->r1;
    // 0x8006C154: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x8006C158: cvt.d.s     $f10, $f12
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); 
    ctx->f10.d = CVT_D_S(ctx->f12.fl);
    // 0x8006C15C: mul.d       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f16.d); 
    ctx->f18.d = MUL_D(ctx->f10.d, ctx->f16.d);
    // 0x8006C160: lui         $t1, 0x8009
    ctx->r9 = S32(0X8009 << 16);
    // 0x8006C164: cvt.s.d     $f2, $f18
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.d); 
    ctx->f2.fl = CVT_S_D(ctx->f18.d);
    // 0x8006C168: c.lt.s      $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f0.fl < ctx->f2.fl;
    // 0x8006C16C: swc1        $f2, 0x74($s0)
    MEM_W(0X74, ctx->r16) = ctx->f2.u32l;
    // 0x8006C170: bc1f        L_8006C17C
    if (!c1cs) {
        // 0x8006C174: nop
    
            goto L_8006C17C;
    }
    // 0x8006C174: nop

    // 0x8006C178: swc1        $f0, 0x74($s0)
    MEM_W(0X74, ctx->r16) = ctx->f0.u32l;
L_8006C17C:
    // 0x8006C17C: lw          $t1, 0x3B20($t1)
    ctx->r9 = MEM_W(ctx->r9, 0X3B20);
    // 0x8006C180: lw          $t0, 0x9C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X9C);
    // 0x8006C184: lhu         $t2, 0xC2($t1)
    ctx->r10 = MEM_HU(ctx->r9, 0XC2);
    // 0x8006C188: mtc1        $t0, $f4
    ctx->f4.u32l = ctx->r8;
    // 0x8006C18C: andi        $t3, $t2, 0x400
    ctx->r11 = ctx->r10 & 0X400;
    // 0x8006C190: beq         $t3, $zero, L_8006C1BC
    if (ctx->r11 == 0) {
        // 0x8006C194: cvt.s.w     $f6, $f4
        CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
            goto L_8006C1BC;
    }
    // 0x8006C194: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x8006C198: lw          $t4, 0xC8($s0)
    ctx->r12 = MEM_W(ctx->r16, 0XC8);
    // 0x8006C19C: lui         $v1, 0x800B
    ctx->r3 = S32(0X800B << 16);
    // 0x8006C1A0: lbu         $t5, 0x8A8($t4)
    ctx->r13 = MEM_BU(ctx->r12, 0X8A8);
    // 0x8006C1A4: nop

    // 0x8006C1A8: sll         $t6, $t5, 1
    ctx->r14 = S32(ctx->r13 << 1);
    // 0x8006C1AC: addu        $v1, $v1, $t6
    ctx->r3 = ADD32(ctx->r3, ctx->r14);
    // 0x8006C1B0: lh          $v1, -0x127C($v1)
    ctx->r3 = MEM_H(ctx->r3, -0X127C);
    // 0x8006C1B4: b           L_8006C1E0
    // 0x8006C1B8: sub.s       $f8, $f6, $f12
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f8.fl = ctx->f6.fl - ctx->f12.fl;
        goto L_8006C1E0;
    // 0x8006C1B8: sub.s       $f8, $f6, $f12
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f8.fl = ctx->f6.fl - ctx->f12.fl;
L_8006C1BC:
    // 0x8006C1BC: lw          $t7, 0xC8($s0)
    ctx->r15 = MEM_W(ctx->r16, 0XC8);
    // 0x8006C1C0: lui         $v1, 0x800B
    ctx->r3 = S32(0X800B << 16);
    // 0x8006C1C4: lbu         $t8, 0x8A8($t7)
    ctx->r24 = MEM_BU(ctx->r15, 0X8A8);
    // 0x8006C1C8: nop

    // 0x8006C1CC: sll         $t9, $t8, 1
    ctx->r25 = S32(ctx->r24 << 1);
    // 0x8006C1D0: addu        $v1, $v1, $t9
    ctx->r3 = ADD32(ctx->r3, ctx->r25);
    // 0x8006C1D4: lh          $v1, -0x1288($v1)
    ctx->r3 = MEM_H(ctx->r3, -0X1288);
    // 0x8006C1D8: nop

    // 0x8006C1DC: sub.s       $f8, $f6, $f12
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f8.fl = ctx->f6.fl - ctx->f12.fl;
L_8006C1E0:
    // 0x8006C1E0: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x8006C1E4: mtc1        $at, $f17
    ctx->f_odd[(17 - 1) * 2] = ctx->r1;
    // 0x8006C1E8: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x8006C1EC: cvt.d.s     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f10.d = CVT_D_S(ctx->f8.fl);
    // 0x8006C1F0: mul.d       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f16.d); 
    ctx->f18.d = MUL_D(ctx->f10.d, ctx->f16.d);
    // 0x8006C1F4: lw          $t2, 0x70($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X70);
    // 0x8006C1F8: cfc1        $t1, $FpcCsr
    ctx->r9 = get_cop1_cs();
    // 0x8006C1FC: nop

    // 0x8006C200: ori         $at, $t1, 0x3
    ctx->r1 = ctx->r9 | 0X3;
    // 0x8006C204: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x8006C208: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x8006C20C: nop

    // 0x8006C210: cvt.w.d     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    ctx->f4.u32l = CVT_W_D(ctx->f18.d);
    // 0x8006C214: mfc1        $a2, $f4
    ctx->r6 = (int32_t)ctx->f4.u32l;
    // 0x8006C218: ctc1        $t1, $FpcCsr
    set_cop1_cs(ctx->r9);
    // 0x8006C21C: slt         $at, $a2, $v1
    ctx->r1 = SIGNED(ctx->r6) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x8006C220: beq         $at, $zero, L_8006C230
    if (ctx->r1 == 0) {
        // 0x8006C224: subu        $a1, $t2, $a2
        ctx->r5 = SUB32(ctx->r10, ctx->r6);
            goto L_8006C230;
    }
    // 0x8006C224: subu        $a1, $t2, $a2
    ctx->r5 = SUB32(ctx->r10, ctx->r6);
    // 0x8006C228: or          $a2, $v1, $zero
    ctx->r6 = ctx->r3 | 0;
    // 0x8006C22C: subu        $a1, $t2, $a2
    ctx->r5 = SUB32(ctx->r10, ctx->r6);
L_8006C230:
    // 0x8006C230: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x8006C234: jal         0x8006A714
    // 0x8006C238: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8006A714(rdram, ctx);
        goto after_18;
    // 0x8006C238: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_18:
    // 0x8006C23C: lw          $a1, 0x2C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X2C);
    // 0x8006C240: lw          $t3, 0x70($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X70);
    // 0x8006C244: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x8006C248: subu        $v0, $t3, $a1
    ctx->r2 = SUB32(ctx->r11, ctx->r5);
    // 0x8006C24C: slti        $at, $v0, 0x8
    ctx->r1 = SIGNED(ctx->r2) < 0X8 ? 1 : 0;
    // 0x8006C250: bne         $at, $zero, L_8006C25C
    if (ctx->r1 != 0) {
        // 0x8006C254: nop
    
            goto L_8006C25C;
    }
    // 0x8006C254: nop

    // 0x8006C258: addiu       $v0, $zero, 0x7
    ctx->r2 = ADD32(0, 0X7);
L_8006C25C:
    // 0x8006C25C: mtc1        $v0, $f6
    ctx->f6.u32l = ctx->r2;
    // 0x8006C260: lui         $at, 0x3FE0
    ctx->r1 = S32(0X3FE0 << 16);
    // 0x8006C264: cvt.d.w     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.d = CVT_D_W(ctx->f6.u32l);
    // 0x8006C268: mtc1        $at, $f11
    ctx->f_odd[(11 - 1) * 2] = ctx->r1;
    // 0x8006C26C: lwc1        $f4, 0x78($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X78);
    // 0x8006C270: mul.d       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f10.d); 
    ctx->f16.d = MUL_D(ctx->f8.d, ctx->f10.d);
    // 0x8006C274: lwc1        $f10, 0x4C($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X4C);
    // 0x8006C278: lwc1        $f0, 0x74($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X74);
    // 0x8006C27C: cfc1        $t4, $FpcCsr
    ctx->r12 = get_cop1_cs();
    // 0x8006C280: nop

    // 0x8006C284: ori         $at, $t4, 0x3
    ctx->r1 = ctx->r12 | 0X3;
    // 0x8006C288: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x8006C28C: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x8006C290: nop

    // 0x8006C294: cvt.w.d     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.u32l = CVT_W_D(ctx->f16.d);
    // 0x8006C298: mfc1        $v0, $f18
    ctx->r2 = (int32_t)ctx->f18.u32l;
    // 0x8006C29C: ctc1        $t4, $FpcCsr
    set_cop1_cs(ctx->r12);
    // 0x8006C2A0: addiu       $v0, $v0, 0x6
    ctx->r2 = ADD32(ctx->r2, 0X6);
    // 0x8006C2A4: mtc1        $v0, $f6
    ctx->f6.u32l = ctx->r2;
    // 0x8006C2A8: nop

    // 0x8006C2AC: cvt.s.w     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.fl = CVT_S_W(ctx->f6.u32l);
    // 0x8006C2B0: nop

    // 0x8006C2B4: div.s       $f2, $f4, $f8
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f2.fl = DIV_S(ctx->f4.fl, ctx->f8.fl);
    // 0x8006C2B8: c.lt.s      $f10, $f2
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f10.fl < ctx->f2.fl;
    // 0x8006C2BC: nop

    // 0x8006C2C0: bc1f        L_8006C2CC
    if (!c1cs) {
        // 0x8006C2C4: nop
    
            goto L_8006C2CC;
    }
    // 0x8006C2C4: nop

    // 0x8006C2C8: mov.s       $f2, $f10
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 10);
    ctx->f2.fl = ctx->f10.fl;
L_8006C2CC:
    // 0x8006C2CC: lh          $t5, 0xE8($s0)
    ctx->r13 = MEM_H(ctx->r16, 0XE8);
    // 0x8006C2D0: mfc1        $a1, $f2
    ctx->r5 = (int32_t)ctx->f2.u32l;
    // 0x8006C2D4: beq         $t5, $zero, L_8006C2E8
    if (ctx->r13 == 0) {
        // 0x8006C2D8: nop
    
            goto L_8006C2E8;
    }
    // 0x8006C2D8: nop

    // 0x8006C2DC: lwc1        $f0, 0xBC($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0XBC);
    // 0x8006C2E0: b           L_8006C2EC
    // 0x8006C2E4: mfc1        $a2, $f0
    ctx->r6 = (int32_t)ctx->f0.u32l;
        goto L_8006C2EC;
    // 0x8006C2E4: mfc1        $a2, $f0
    ctx->r6 = (int32_t)ctx->f0.u32l;
L_8006C2E8:
    // 0x8006C2E8: mfc1        $a2, $f0
    ctx->r6 = (int32_t)ctx->f0.u32l;
L_8006C2EC:
    // 0x8006C2EC: jal         0x80274C54
    // 0x8006C2F0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    LOOKUP_FUNC(0x80274C54)(rdram, ctx);
        goto after_19;
    // 0x8006C2F0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_19:
    // 0x8006C2F4: b           L_8006C85C
    // 0x8006C2F8: lh          $t3, 0xEC($s0)
    ctx->r11 = MEM_H(ctx->r16, 0XEC);
        goto L_8006C85C;
    // 0x8006C2F8: lh          $t3, 0xEC($s0)
    ctx->r11 = MEM_H(ctx->r16, 0XEC);
L_8006C2FC:
    // 0x8006C2FC: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x8006C300: lwc1        $f14, -0x5838($at)
    ctx->f14.u32l = MEM_W(ctx->r1, -0X5838);
    // 0x8006C304: lwc1        $f12, 0xF4($s0)
    ctx->f12.u32l = MEM_W(ctx->r16, 0XF4);
    // 0x8006C308: jal         0x80279520
    // 0x8006C30C: addiu       $a2, $s0, 0x8C
    ctx->r6 = ADD32(ctx->r16, 0X8C);
    LOOKUP_FUNC(0x80279520)(rdram, ctx);
        goto after_20;
    // 0x8006C30C: addiu       $a2, $s0, 0x8C
    ctx->r6 = ADD32(ctx->r16, 0X8C);
    after_20:
    // 0x8006C310: lhu         $t6, 0x12($s0)
    ctx->r14 = MEM_HU(ctx->r16, 0X12);
    // 0x8006C314: nop

    // 0x8006C318: andi        $t7, $t6, 0x8000
    ctx->r15 = ctx->r14 & 0X8000;
    // 0x8006C31C: bne         $t7, $zero, L_8006C3A8
    if (ctx->r15 != 0) {
        // 0x8006C320: lw          $t4, 0x64($sp)
        ctx->r12 = MEM_W(ctx->r29, 0X64);
            goto L_8006C3A8;
    }
    // 0x8006C320: lw          $t4, 0x64($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X64);
    // 0x8006C324: lh          $t8, 0xE4($s0)
    ctx->r24 = MEM_H(ctx->r16, 0XE4);
    // 0x8006C328: lui         $a1, 0x800B
    ctx->r5 = S32(0X800B << 16);
    // 0x8006C32C: sll         $t9, $t8, 2
    ctx->r25 = S32(ctx->r24 << 2);
    // 0x8006C330: subu        $t9, $t9, $t8
    ctx->r25 = SUB32(ctx->r25, ctx->r24);
    // 0x8006C334: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x8006C338: addu        $a1, $a1, $t9
    ctx->r5 = ADD32(ctx->r5, ctx->r25);
    // 0x8006C33C: lw          $a1, -0x12E8($a1)
    ctx->r5 = MEM_W(ctx->r5, -0X12E8);
    // 0x8006C340: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8006C344: beq         $a1, $zero, L_8006C3A8
    if (ctx->r5 == 0) {
        // 0x8006C348: lw          $t4, 0x64($sp)
        ctx->r12 = MEM_W(ctx->r29, 0X64);
            goto L_8006C3A8;
    }
    // 0x8006C348: lw          $t4, 0x64($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X64);
    // 0x8006C34C: jal         0x80276EF0
    // 0x8006C350: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    LOOKUP_FUNC(0x80276EF0)(rdram, ctx);
        goto after_21;
    // 0x8006C350: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    after_21:
    // 0x8006C354: lh          $t0, 0xE4($s0)
    ctx->r8 = MEM_H(ctx->r16, 0XE4);
    // 0x8006C358: lui         $a1, 0x800B
    ctx->r5 = S32(0X800B << 16);
    // 0x8006C35C: sll         $t1, $t0, 2
    ctx->r9 = S32(ctx->r8 << 2);
    // 0x8006C360: subu        $t1, $t1, $t0
    ctx->r9 = SUB32(ctx->r9, ctx->r8);
    // 0x8006C364: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x8006C368: addu        $a1, $a1, $t1
    ctx->r5 = ADD32(ctx->r5, ctx->r9);
    // 0x8006C36C: lw          $a1, -0x12E4($a1)
    ctx->r5 = MEM_W(ctx->r5, -0X12E4);
    // 0x8006C370: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8006C374: jal         0x80276EF0
    // 0x8006C378: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    LOOKUP_FUNC(0x80276EF0)(rdram, ctx);
        goto after_22;
    // 0x8006C378: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    after_22:
    // 0x8006C37C: lh          $t2, 0xE4($s0)
    ctx->r10 = MEM_H(ctx->r16, 0XE4);
    // 0x8006C380: lui         $a1, 0x800B
    ctx->r5 = S32(0X800B << 16);
    // 0x8006C384: sll         $t3, $t2, 2
    ctx->r11 = S32(ctx->r10 << 2);
    // 0x8006C388: subu        $t3, $t3, $t2
    ctx->r11 = SUB32(ctx->r11, ctx->r10);
    // 0x8006C38C: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x8006C390: addu        $a1, $a1, $t3
    ctx->r5 = ADD32(ctx->r5, ctx->r11);
    // 0x8006C394: lw          $a1, -0x12E0($a1)
    ctx->r5 = MEM_W(ctx->r5, -0X12E0);
    // 0x8006C398: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8006C39C: jal         0x80276EF0
    // 0x8006C3A0: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    LOOKUP_FUNC(0x80276EF0)(rdram, ctx);
        goto after_23;
    // 0x8006C3A0: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    after_23:
    // 0x8006C3A4: lw          $t4, 0x64($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X64);
L_8006C3A8:
    // 0x8006C3A8: addiu       $at, $zero, 0x6
    ctx->r1 = ADD32(0, 0X6);
    // 0x8006C3AC: bne         $t4, $at, L_8006C3C0
    if (ctx->r12 != ctx->r1) {
        // 0x8006C3B0: lw          $t5, 0x64($sp)
        ctx->r13 = MEM_W(ctx->r29, 0X64);
            goto L_8006C3C0;
    }
    // 0x8006C3B0: lw          $t5, 0x64($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X64);
    // 0x8006C3B4: jal         0x8006B5C0
    // 0x8006C3B8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8006B5C0(rdram, ctx);
        goto after_24;
    // 0x8006C3B8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_24:
    // 0x8006C3BC: lw          $t5, 0x64($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X64);
L_8006C3C0:
    // 0x8006C3C0: addiu       $at, $zero, 0x5
    ctx->r1 = ADD32(0, 0X5);
    // 0x8006C3C4: beq         $t5, $at, L_8006C3E0
    if (ctx->r13 == ctx->r1) {
        // 0x8006C3C8: nop
    
            goto L_8006C3E0;
    }
    // 0x8006C3C8: nop

    // 0x8006C3CC: lhu         $t6, 0x12($s0)
    ctx->r14 = MEM_HU(ctx->r16, 0X12);
    // 0x8006C3D0: nop

    // 0x8006C3D4: andi        $t7, $t6, 0x8000
    ctx->r15 = ctx->r14 & 0X8000;
    // 0x8006C3D8: beq         $t7, $zero, L_8006C858
    if (ctx->r15 == 0) {
        // 0x8006C3DC: nop
    
            goto L_8006C858;
    }
    // 0x8006C3DC: nop

L_8006C3E0:
    // 0x8006C3E0: jal         0x8006B5C0
    // 0x8006C3E4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8006B5C0(rdram, ctx);
        goto after_25;
    // 0x8006C3E4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_25:
    // 0x8006C3E8: lhu         $t8, 0x10($s0)
    ctx->r24 = MEM_HU(ctx->r16, 0X10);
    // 0x8006C3EC: lwc1        $f16, 0xF4($s0)
    ctx->f16.u32l = MEM_W(ctx->r16, 0XF4);
    // 0x8006C3F0: addiu       $t9, $t8, 0x1
    ctx->r25 = ADD32(ctx->r24, 0X1);
    // 0x8006C3F4: sh          $t9, 0x10($s0)
    MEM_H(0X10, ctx->r16) = ctx->r25;
    // 0x8006C3F8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8006C3FC: jal         0x80272C90
    // 0x8006C400: swc1        $f16, 0x8C($s0)
    MEM_W(0X8C, ctx->r16) = ctx->f16.u32l;
    LOOKUP_FUNC(0x80272C90)(rdram, ctx);
        goto after_26;
    // 0x8006C400: swc1        $f16, 0x8C($s0)
    MEM_W(0X8C, ctx->r16) = ctx->f16.u32l;
    after_26:
    // 0x8006C404: lhu         $t0, 0x12($s0)
    ctx->r8 = MEM_HU(ctx->r16, 0X12);
    // 0x8006C408: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x8006C40C: andi        $t1, $t0, 0x8000
    ctx->r9 = ctx->r8 & 0X8000;
    // 0x8006C410: beq         $t1, $zero, L_8006C424
    if (ctx->r9 == 0) {
        // 0x8006C414: nop
    
            goto L_8006C424;
    }
    // 0x8006C414: nop

    // 0x8006C418: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x8006C41C: nop

    // 0x8006C420: swc1        $f18, 0x74($s0)
    MEM_W(0X74, ctx->r16) = ctx->f18.u32l;
L_8006C424:
    // 0x8006C424: sh          $zero, 0xE8($s0)
    MEM_H(0XE8, ctx->r16) = 0;
    // 0x8006C428: b           L_8006C858
    // 0x8006C42C: sh          $zero, 0xEA($s0)
    MEM_H(0XEA, ctx->r16) = 0;
        goto L_8006C858;
    // 0x8006C42C: sh          $zero, 0xEA($s0)
    MEM_H(0XEA, ctx->r16) = 0;
L_8006C430:
    // 0x8006C430: lw          $t2, 0x3B20($t2)
    ctx->r10 = MEM_W(ctx->r10, 0X3B20);
    // 0x8006C434: nop

    // 0x8006C438: lw          $t3, 0x8C($t2)
    ctx->r11 = MEM_W(ctx->r10, 0X8C);
    // 0x8006C43C: nop

    // 0x8006C440: beq         $s0, $t3, L_8006C6AC
    if (ctx->r16 == ctx->r11) {
        // 0x8006C444: nop
    
            goto L_8006C6AC;
    }
    // 0x8006C444: nop

    // 0x8006C448: lh          $t4, 0xEA($s0)
    ctx->r12 = MEM_H(ctx->r16, 0XEA);
    // 0x8006C44C: nop

    // 0x8006C450: bne         $t4, $zero, L_8006C6AC
    if (ctx->r12 != 0) {
        // 0x8006C454: nop
    
            goto L_8006C6AC;
    }
    // 0x8006C454: nop

    // 0x8006C458: lh          $v0, 0xEC($s0)
    ctx->r2 = MEM_H(ctx->r16, 0XEC);
    // 0x8006C45C: nop

    // 0x8006C460: beq         $v0, $zero, L_8006C6AC
    if (ctx->r2 == 0) {
        // 0x8006C464: nop
    
            goto L_8006C6AC;
    }
    // 0x8006C464: nop

    // 0x8006C468: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x8006C46C: lwc1        $f4, 0x48($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X48);
    // 0x8006C470: lui         $at, 0x41F0
    ctx->r1 = S32(0X41F0 << 16);
    // 0x8006C474: c.lt.s      $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f6.fl < ctx->f4.fl;
    // 0x8006C478: nop

    // 0x8006C47C: bc1f        L_8006C6AC
    if (!c1cs) {
        // 0x8006C480: nop
    
            goto L_8006C6AC;
    }
    // 0x8006C480: nop

    // 0x8006C484: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x8006C488: lwc1        $f10, 0x84($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X84);
    // 0x8006C48C: nop

    // 0x8006C490: c.lt.s      $f8, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f8.fl < ctx->f10.fl;
    // 0x8006C494: nop

    // 0x8006C498: bc1f        L_8006C6AC
    if (!c1cs) {
        // 0x8006C49C: nop
    
            goto L_8006C6AC;
    }
    // 0x8006C49C: nop

    // 0x8006C4A0: mtc1        $v0, $f16
    ctx->f16.u32l = ctx->r2;
    // 0x8006C4A4: lwc1        $f12, 0x4C($s0)
    ctx->f12.u32l = MEM_W(ctx->r16, 0X4C);
    // 0x8006C4A8: cvt.s.w     $f16, $f16
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    ctx->f16.fl = CVT_S_W(ctx->f16.u32l);
    // 0x8006C4AC: lwc1        $f14, 0x78($s0)
    ctx->f14.u32l = MEM_W(ctx->r16, 0X78);
    // 0x8006C4B0: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x8006C4B4: mfc1        $a3, $f16
    ctx->r7 = (int32_t)ctx->f16.u32l;
    // 0x8006C4B8: jal         0x8005444C
    // 0x8006C4BC: nop

    func_8005444C(rdram, ctx);
        goto after_27;
    // 0x8006C4BC: nop

    after_27:
    // 0x8006C4C0: swc1        $f0, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->f0.u32l;
    // 0x8006C4C4: lh          $t5, 0xEC($s0)
    ctx->r13 = MEM_H(ctx->r16, 0XEC);
    // 0x8006C4C8: lwc1        $f14, 0x70($s0)
    ctx->f14.u32l = MEM_W(ctx->r16, 0X70);
    // 0x8006C4CC: mtc1        $t5, $f18
    ctx->f18.u32l = ctx->r13;
    // 0x8006C4D0: lwc1        $f12, 0x44($s0)
    ctx->f12.u32l = MEM_W(ctx->r16, 0X44);
    // 0x8006C4D4: cvt.s.w     $f18, $f18
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    ctx->f18.fl = CVT_S_W(ctx->f18.u32l);
    // 0x8006C4D8: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x8006C4DC: mfc1        $a3, $f18
    ctx->r7 = (int32_t)ctx->f18.u32l;
    // 0x8006C4E0: jal         0x8005444C
    // 0x8006C4E4: nop

    func_8005444C(rdram, ctx);
        goto after_28;
    // 0x8006C4E4: nop

    after_28:
    // 0x8006C4E8: lh          $t6, 0xEC($s0)
    ctx->r14 = MEM_H(ctx->r16, 0XEC);
    // 0x8006C4EC: lui         $t8, 0x8012
    ctx->r24 = S32(0X8012 << 16);
    // 0x8006C4F0: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x8006C4F4: subu        $t7, $t7, $t6
    ctx->r15 = SUB32(ctx->r15, ctx->r14);
    // 0x8006C4F8: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8006C4FC: addiu       $t8, $t8, 0x680
    ctx->r24 = ADD32(ctx->r24, 0X680);
    // 0x8006C500: addu        $v0, $t7, $t8
    ctx->r2 = ADD32(ctx->r15, ctx->r24);
    // 0x8006C504: lw          $a2, 0x8($v0)
    ctx->r6 = MEM_W(ctx->r2, 0X8);
    // 0x8006C508: lw          $a3, 0x0($v0)
    ctx->r7 = MEM_W(ctx->r2, 0X0);
    // 0x8006C50C: lwc1        $f12, 0x54($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X54);
    // 0x8006C510: addiu       $t9, $sp, 0x84
    ctx->r25 = ADD32(ctx->r29, 0X84);
    // 0x8006C514: sw          $t9, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r25;
    // 0x8006C518: jal         0x80272B1C
    // 0x8006C51C: mov.s       $f14, $f0
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    ctx->f14.fl = ctx->f0.fl;
    LOOKUP_FUNC(0x80272B1C)(rdram, ctx);
        goto after_29;
    // 0x8006C51C: mov.s       $f14, $f0
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    ctx->f14.fl = ctx->f0.fl;
    after_29:
    // 0x8006C520: lwc1        $f12, 0x7C($s0)
    ctx->f12.u32l = MEM_W(ctx->r16, 0X7C);
    // 0x8006C524: lwc1        $f14, 0x84($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X84);
    // 0x8006C528: jal         0x8027924C
    // 0x8006C52C: nop

    LOOKUP_FUNC(0x8027924C)(rdram, ctx);
        goto after_30;
    // 0x8006C52C: nop

    after_30:
    // 0x8006C530: jal         0x80081040
    // 0x8006C534: mov.s       $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    ctx->f12.fl = ctx->f0.fl;
    func_80081040(rdram, ctx);
        goto after_31;
    // 0x8006C534: mov.s       $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    ctx->f12.fl = ctx->f0.fl;
    after_31:
    // 0x8006C538: lwc1        $f6, 0x88($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X88);
    // 0x8006C53C: lui         $at, 0xC120
    ctx->r1 = S32(0XC120 << 16);
    // 0x8006C540: mul.s       $f4, $f0, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f4.fl = MUL_S(ctx->f0.fl, ctx->f6.fl);
    // 0x8006C544: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x8006C548: addiu       $t0, $zero, 0x7
    ctx->r8 = ADD32(0, 0X7);
    // 0x8006C54C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8006C550: c.lt.s      $f4, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f4.fl < ctx->f8.fl;
    // 0x8006C554: addiu       $a1, $zero, 0x13D
    ctx->r5 = ADD32(0, 0X13D);
    // 0x8006C558: bc1f        L_8006C57C
    if (!c1cs) {
        // 0x8006C55C: or          $a2, $zero, $zero
        ctx->r6 = 0 | 0;
            goto L_8006C57C;
    }
    // 0x8006C55C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x8006C560: lh          $t1, 0xEA($s0)
    ctx->r9 = MEM_H(ctx->r16, 0XEA);
    // 0x8006C564: sh          $t0, 0xE4($s0)
    MEM_H(0XE4, ctx->r16) = ctx->r8;
    // 0x8006C568: addiu       $t2, $t1, 0x1
    ctx->r10 = ADD32(ctx->r9, 0X1);
    // 0x8006C56C: jal         0x80272D3C
    // 0x8006C570: sh          $t2, 0xEA($s0)
    MEM_H(0XEA, ctx->r16) = ctx->r10;
    LOOKUP_FUNC(0x80272D3C)(rdram, ctx);
        goto after_32;
    // 0x8006C570: sh          $t2, 0xEA($s0)
    MEM_H(0XEA, ctx->r16) = ctx->r10;
    after_32:
    // 0x8006C574: b           L_8006C694
    // 0x8006C578: lh          $t7, 0xE4($s0)
    ctx->r15 = MEM_H(ctx->r16, 0XE4);
        goto L_8006C694;
    // 0x8006C578: lh          $t7, 0xE4($s0)
    ctx->r15 = MEM_H(ctx->r16, 0XE4);
L_8006C57C:
    // 0x8006C57C: lh          $t3, 0xEC($s0)
    ctx->r11 = MEM_H(ctx->r16, 0XEC);
    // 0x8006C580: lwc1        $f12, 0x48($s0)
    ctx->f12.u32l = MEM_W(ctx->r16, 0X48);
    // 0x8006C584: mtc1        $t3, $f10
    ctx->f10.u32l = ctx->r11;
    // 0x8006C588: lwc1        $f14, 0x74($s0)
    ctx->f14.u32l = MEM_W(ctx->r16, 0X74);
    // 0x8006C58C: cvt.s.w     $f10, $f10
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 10);
    ctx->f10.fl = CVT_S_W(ctx->f10.u32l);
    // 0x8006C590: lui         $a2, 0xBEA0
    ctx->r6 = S32(0XBEA0 << 16);
    // 0x8006C594: mfc1        $a3, $f10
    ctx->r7 = (int32_t)ctx->f10.u32l;
    // 0x8006C598: jal         0x8005444C
    // 0x8006C59C: nop

    func_8005444C(rdram, ctx);
        goto after_33;
    // 0x8006C59C: nop

    after_33:
    // 0x8006C5A0: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x8006C5A4: mov.s       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.fl = ctx->f0.fl;
    // 0x8006C5A8: c.lt.s      $f0, $f16
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f0.fl < ctx->f16.fl;
    // 0x8006C5AC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8006C5B0: bc1f        L_8006C5C0
    if (!c1cs) {
        // 0x8006C5B4: lui         $a1, 0x800B
        ctx->r5 = S32(0X800B << 16);
            goto L_8006C5C0;
    }
    // 0x8006C5B4: lui         $a1, 0x800B
    ctx->r5 = S32(0X800B << 16);
    // 0x8006C5B8: mtc1        $zero, $f2
    ctx->f2.u32l = 0;
    // 0x8006C5BC: nop

L_8006C5C0:
    // 0x8006C5C0: lh          $t4, 0xEC($s0)
    ctx->r12 = MEM_H(ctx->r16, 0XEC);
    // 0x8006C5C4: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x8006C5C8: sll         $t5, $t4, 2
    ctx->r13 = S32(ctx->r12 << 2);
    // 0x8006C5CC: subu        $t5, $t5, $t4
    ctx->r13 = SUB32(ctx->r13, ctx->r12);
    // 0x8006C5D0: sll         $t5, $t5, 2
    ctx->r13 = S32(ctx->r13 << 2);
    // 0x8006C5D4: addu        $at, $at, $t5
    ctx->r1 = ADD32(ctx->r1, ctx->r13);
    // 0x8006C5D8: lwc1        $f18, 0x684($at)
    ctx->f18.u32l = MEM_W(ctx->r1, 0X684);
    // 0x8006C5DC: lui         $at, 0x41A0
    ctx->r1 = S32(0X41A0 << 16);
    // 0x8006C5E0: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x8006C5E4: sub.s       $f0, $f18, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = ctx->f18.fl - ctx->f2.fl;
    // 0x8006C5E8: lui         $at, 0xC120
    ctx->r1 = S32(0XC120 << 16);
    // 0x8006C5EC: c.lt.s      $f6, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f6.fl < ctx->f0.fl;
    // 0x8006C5F0: nop

    // 0x8006C5F4: bc1f        L_8006C648
    if (!c1cs) {
        // 0x8006C5F8: nop
    
            goto L_8006C648;
    }
    // 0x8006C5F8: nop

    // 0x8006C5FC: lh          $t6, 0xE4($s0)
    ctx->r14 = MEM_H(ctx->r16, 0XE4);
    // 0x8006C600: addiu       $t7, $zero, 0x4
    ctx->r15 = ADD32(0, 0X4);
    // 0x8006C604: slti        $at, $t6, 0x2
    ctx->r1 = SIGNED(ctx->r14) < 0X2 ? 1 : 0;
    // 0x8006C608: beq         $at, $zero, L_8006C618
    if (ctx->r1 == 0) {
        // 0x8006C60C: addiu       $t8, $zero, 0x5
        ctx->r24 = ADD32(0, 0X5);
            goto L_8006C618;
    }
    // 0x8006C60C: addiu       $t8, $zero, 0x5
    ctx->r24 = ADD32(0, 0X5);
    // 0x8006C610: b           L_8006C61C
    // 0x8006C614: sh          $t7, 0xE4($s0)
    MEM_H(0XE4, ctx->r16) = ctx->r15;
        goto L_8006C61C;
    // 0x8006C614: sh          $t7, 0xE4($s0)
    MEM_H(0XE4, ctx->r16) = ctx->r15;
L_8006C618:
    // 0x8006C618: sh          $t8, 0xE4($s0)
    MEM_H(0XE4, ctx->r16) = ctx->r24;
L_8006C61C:
    // 0x8006C61C: lh          $t9, 0xEA($s0)
    ctx->r25 = MEM_H(ctx->r16, 0XEA);
    // 0x8006C620: lh          $t1, 0xE4($s0)
    ctx->r9 = MEM_H(ctx->r16, 0XE4);
    // 0x8006C624: addiu       $t0, $t9, 0x1
    ctx->r8 = ADD32(ctx->r25, 0X1);
    // 0x8006C628: sll         $t2, $t1, 1
    ctx->r10 = S32(ctx->r9 << 1);
    // 0x8006C62C: sh          $t0, 0xEA($s0)
    MEM_H(0XEA, ctx->r16) = ctx->r8;
    // 0x8006C630: addu        $a1, $a1, $t2
    ctx->r5 = ADD32(ctx->r5, ctx->r10);
    // 0x8006C634: lhu         $a1, -0x12F8($a1)
    ctx->r5 = MEM_HU(ctx->r5, -0X12F8);
    // 0x8006C638: jal         0x80272D3C
    // 0x8006C63C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    LOOKUP_FUNC(0x80272D3C)(rdram, ctx);
        goto after_34;
    // 0x8006C63C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_34:
    // 0x8006C640: b           L_8006C694
    // 0x8006C644: lh          $t7, 0xE4($s0)
    ctx->r15 = MEM_H(ctx->r16, 0XE4);
        goto L_8006C694;
    // 0x8006C644: lh          $t7, 0xE4($s0)
    ctx->r15 = MEM_H(ctx->r16, 0XE4);
L_8006C648:
    // 0x8006C648: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x8006C64C: nop

    // 0x8006C650: c.lt.s      $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f0.fl < ctx->f4.fl;
    // 0x8006C654: nop

    // 0x8006C658: bc1f        L_8006C690
    if (!c1cs) {
        // 0x8006C65C: nop
    
            goto L_8006C690;
    }
    // 0x8006C65C: nop

    // 0x8006C660: lh          $t3, 0xE4($s0)
    ctx->r11 = MEM_H(ctx->r16, 0XE4);
    // 0x8006C664: addiu       $t4, $zero, 0x6
    ctx->r12 = ADD32(0, 0X6);
    // 0x8006C668: slti        $at, $t3, 0x2
    ctx->r1 = SIGNED(ctx->r11) < 0X2 ? 1 : 0;
    // 0x8006C66C: beq         $at, $zero, L_8006C690
    if (ctx->r1 == 0) {
        // 0x8006C670: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_8006C690;
    }
    // 0x8006C670: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8006C674: lh          $t5, 0xEA($s0)
    ctx->r13 = MEM_H(ctx->r16, 0XEA);
    // 0x8006C678: sh          $t4, 0xE4($s0)
    MEM_H(0XE4, ctx->r16) = ctx->r12;
    // 0x8006C67C: addiu       $t6, $t5, 0x1
    ctx->r14 = ADD32(ctx->r13, 0X1);
    // 0x8006C680: sh          $t6, 0xEA($s0)
    MEM_H(0XEA, ctx->r16) = ctx->r14;
    // 0x8006C684: addiu       $a1, $zero, 0x13A
    ctx->r5 = ADD32(0, 0X13A);
    // 0x8006C688: jal         0x80272D3C
    // 0x8006C68C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    LOOKUP_FUNC(0x80272D3C)(rdram, ctx);
        goto after_35;
    // 0x8006C68C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_35:
L_8006C690:
    // 0x8006C690: lh          $t7, 0xE4($s0)
    ctx->r15 = MEM_H(ctx->r16, 0XE4);
L_8006C694:
    // 0x8006C694: lui         $t9, 0x800B
    ctx->r25 = S32(0X800B << 16);
    // 0x8006C698: sll         $t8, $t7, 1
    ctx->r24 = S32(ctx->r15 << 1);
    // 0x8006C69C: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x8006C6A0: lhu         $t9, -0x1308($t9)
    ctx->r25 = MEM_HU(ctx->r25, -0X1308);
    // 0x8006C6A4: nop

    // 0x8006C6A8: sh          $t9, 0xE6($s0)
    MEM_H(0XE6, ctx->r16) = ctx->r25;
L_8006C6AC:
    // 0x8006C6AC: jal         0x80275534
    // 0x8006C6B0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    LOOKUP_FUNC(0x80275534)(rdram, ctx);
        goto after_36;
    // 0x8006C6B0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_36:
    // 0x8006C6B4: beq         $v0, $zero, L_8006C6C8
    if (ctx->r2 == 0) {
        // 0x8006C6B8: nop
    
            goto L_8006C6C8;
    }
    // 0x8006C6B8: nop

    // 0x8006C6BC: lw          $a0, 0xCC($s0)
    ctx->r4 = MEM_W(ctx->r16, 0XCC);
    // 0x8006C6C0: jal         0x80001218
    // 0x8006C6C4: nop

    func_80001218(rdram, ctx);
        goto after_37;
    // 0x8006C6C4: nop

    after_37:
L_8006C6C8:
    // 0x8006C6C8: lh          $v1, 0xE8($s0)
    ctx->r3 = MEM_H(ctx->r16, 0XE8);
    // 0x8006C6CC: nop

    // 0x8006C6D0: slti        $v0, $v1, 0x6
    ctx->r2 = SIGNED(ctx->r3) < 0X6 ? 1 : 0;
    // 0x8006C6D4: addiu       $t0, $v1, 0x1
    ctx->r8 = ADD32(ctx->r3, 0X1);
    // 0x8006C6D8: bne         $v0, $zero, L_8006C770
    if (ctx->r2 != 0) {
        // 0x8006C6DC: sh          $t0, 0xE8($s0)
        MEM_H(0XE8, ctx->r16) = ctx->r8;
            goto L_8006C770;
    }
    // 0x8006C6DC: sh          $t0, 0xE8($s0)
    MEM_H(0XE8, ctx->r16) = ctx->r8;
    // 0x8006C6E0: mtc1        $zero, $f2
    ctx->f2.u32l = 0;
    // 0x8006C6E4: lwc1        $f8, 0x48($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X48);
    // 0x8006C6E8: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x8006C6EC: c.eq.s      $f2, $f8
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f2.fl == ctx->f8.fl;
    // 0x8006C6F0: nop

    // 0x8006C6F4: bc1f        L_8006C720
    if (!c1cs) {
        // 0x8006C6F8: nop
    
            goto L_8006C720;
    }
    // 0x8006C6F8: nop

    // 0x8006C6FC: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x8006C700: lwc1        $f10, 0x50($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X50);
    // 0x8006C704: lwc1        $f19, -0x5830($at)
    ctx->f_odd[(19 - 1) * 2] = MEM_W(ctx->r1, -0X5830);
    // 0x8006C708: lwc1        $f18, -0x582C($at)
    ctx->f18.u32l = MEM_W(ctx->r1, -0X582C);
    // 0x8006C70C: cvt.d.s     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.fl); 
    ctx->f16.d = CVT_D_S(ctx->f10.fl);
    // 0x8006C710: sub.d       $f6, $f16, $f18
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.d); NAN_CHECK(ctx->f18.d); 
    ctx->f6.d = ctx->f16.d - ctx->f18.d;
    // 0x8006C714: cvt.s.d     $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.d); 
    ctx->f4.fl = CVT_S_D(ctx->f6.d);
    // 0x8006C718: b           L_8006C73C
    // 0x8006C71C: swc1        $f4, 0x50($s0)
    MEM_W(0X50, ctx->r16) = ctx->f4.u32l;
        goto L_8006C73C;
    // 0x8006C71C: swc1        $f4, 0x50($s0)
    MEM_W(0X50, ctx->r16) = ctx->f4.u32l;
L_8006C720:
    // 0x8006C720: lwc1        $f8, 0x50($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X50);
    // 0x8006C724: lwc1        $f17, -0x5828($at)
    ctx->f_odd[(17 - 1) * 2] = MEM_W(ctx->r1, -0X5828);
    // 0x8006C728: lwc1        $f16, -0x5824($at)
    ctx->f16.u32l = MEM_W(ctx->r1, -0X5824);
    // 0x8006C72C: cvt.d.s     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f10.d = CVT_D_S(ctx->f8.fl);
    // 0x8006C730: sub.d       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f16.d); 
    ctx->f18.d = ctx->f10.d - ctx->f16.d;
    // 0x8006C734: cvt.s.d     $f6, $f18
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.d); 
    ctx->f6.fl = CVT_S_D(ctx->f18.d);
    // 0x8006C738: swc1        $f6, 0x50($s0)
    MEM_W(0X50, ctx->r16) = ctx->f6.u32l;
L_8006C73C:
    // 0x8006C73C: lwc1        $f0, 0x50($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X50);
    // 0x8006C740: nop

    // 0x8006C744: c.lt.s      $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f0.fl < ctx->f2.fl;
    // 0x8006C748: nop

    // 0x8006C74C: bc1f        L_8006C760
    if (!c1cs) {
        // 0x8006C750: nop
    
            goto L_8006C760;
    }
    // 0x8006C750: nop

    // 0x8006C754: swc1        $f2, 0x50($s0)
    MEM_W(0X50, ctx->r16) = ctx->f2.u32l;
    // 0x8006C758: lwc1        $f0, 0x50($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X50);
    // 0x8006C75C: nop

L_8006C760:
    // 0x8006C760: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x8006C764: lw          $a2, 0x7C($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X7C);
    // 0x8006C768: jal         0x80274C54
    // 0x8006C76C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    LOOKUP_FUNC(0x80274C54)(rdram, ctx);
        goto after_38;
    // 0x8006C76C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_38:
L_8006C770:
    // 0x8006C770: jal         0x8006B5C0
    // 0x8006C774: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8006B5C0(rdram, ctx);
        goto after_39;
    // 0x8006C774: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_39:
    // 0x8006C778: lw          $t1, 0x64($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X64);
    // 0x8006C77C: addiu       $at, $zero, 0x14
    ctx->r1 = ADD32(0, 0X14);
    // 0x8006C780: bne         $t1, $at, L_8006C7A4
    if (ctx->r9 != ctx->r1) {
        // 0x8006C784: nop
    
            goto L_8006C7A4;
    }
    // 0x8006C784: nop

    // 0x8006C788: lhu         $t2, 0x10($s0)
    ctx->r10 = MEM_HU(ctx->r16, 0X10);
    // 0x8006C78C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8006C790: addiu       $t3, $t2, 0x1
    ctx->r11 = ADD32(ctx->r10, 0X1);
    // 0x8006C794: jal         0x8006BBBC
    // 0x8006C798: sh          $t3, 0x10($s0)
    MEM_H(0X10, ctx->r16) = ctx->r11;
    func_8006BBBC(rdram, ctx);
        goto after_40;
    // 0x8006C798: sh          $t3, 0x10($s0)
    MEM_H(0X10, ctx->r16) = ctx->r11;
    after_40:
    // 0x8006C79C: b           L_8006C85C
    // 0x8006C7A0: lh          $t3, 0xEC($s0)
    ctx->r11 = MEM_H(ctx->r16, 0XEC);
        goto L_8006C85C;
    // 0x8006C7A0: lh          $t3, 0xEC($s0)
    ctx->r11 = MEM_H(ctx->r16, 0XEC);
L_8006C7A4:
    // 0x8006C7A4: lhu         $t4, 0x12($s0)
    ctx->r12 = MEM_HU(ctx->r16, 0X12);
    // 0x8006C7A8: nop

    // 0x8006C7AC: andi        $t5, $t4, 0x8000
    ctx->r13 = ctx->r12 & 0X8000;
    // 0x8006C7B0: bne         $t5, $zero, L_8006C858
    if (ctx->r13 != 0) {
        // 0x8006C7B4: nop
    
            goto L_8006C858;
    }
    // 0x8006C7B4: nop

    // 0x8006C7B8: lh          $t6, 0xE4($s0)
    ctx->r14 = MEM_H(ctx->r16, 0XE4);
    // 0x8006C7BC: lui         $a1, 0x800B
    ctx->r5 = S32(0X800B << 16);
    // 0x8006C7C0: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x8006C7C4: subu        $t7, $t7, $t6
    ctx->r15 = SUB32(ctx->r15, ctx->r14);
    // 0x8006C7C8: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8006C7CC: addu        $a1, $a1, $t7
    ctx->r5 = ADD32(ctx->r5, ctx->r15);
    // 0x8006C7D0: lw          $a1, -0x12E8($a1)
    ctx->r5 = MEM_W(ctx->r5, -0X12E8);
    // 0x8006C7D4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8006C7D8: beq         $a1, $zero, L_8006C858
    if (ctx->r5 == 0) {
        // 0x8006C7DC: nop
    
            goto L_8006C858;
    }
    // 0x8006C7DC: nop

    // 0x8006C7E0: jal         0x80276EF0
    // 0x8006C7E4: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    LOOKUP_FUNC(0x80276EF0)(rdram, ctx);
        goto after_41;
    // 0x8006C7E4: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    after_41:
    // 0x8006C7E8: lh          $t8, 0xE4($s0)
    ctx->r24 = MEM_H(ctx->r16, 0XE4);
    // 0x8006C7EC: lui         $a1, 0x800B
    ctx->r5 = S32(0X800B << 16);
    // 0x8006C7F0: sll         $t9, $t8, 2
    ctx->r25 = S32(ctx->r24 << 2);
    // 0x8006C7F4: subu        $t9, $t9, $t8
    ctx->r25 = SUB32(ctx->r25, ctx->r24);
    // 0x8006C7F8: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x8006C7FC: addu        $a1, $a1, $t9
    ctx->r5 = ADD32(ctx->r5, ctx->r25);
    // 0x8006C800: lw          $a1, -0x12E4($a1)
    ctx->r5 = MEM_W(ctx->r5, -0X12E4);
    // 0x8006C804: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8006C808: jal         0x80276EF0
    // 0x8006C80C: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    LOOKUP_FUNC(0x80276EF0)(rdram, ctx);
        goto after_42;
    // 0x8006C80C: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    after_42:
    // 0x8006C810: lh          $t0, 0xE4($s0)
    ctx->r8 = MEM_H(ctx->r16, 0XE4);
    // 0x8006C814: lui         $a1, 0x800B
    ctx->r5 = S32(0X800B << 16);
    // 0x8006C818: sll         $t1, $t0, 2
    ctx->r9 = S32(ctx->r8 << 2);
    // 0x8006C81C: subu        $t1, $t1, $t0
    ctx->r9 = SUB32(ctx->r9, ctx->r8);
    // 0x8006C820: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x8006C824: addu        $a1, $a1, $t1
    ctx->r5 = ADD32(ctx->r5, ctx->r9);
    // 0x8006C828: lw          $a1, -0x12E0($a1)
    ctx->r5 = MEM_W(ctx->r5, -0X12E0);
    // 0x8006C82C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8006C830: jal         0x80276EF0
    // 0x8006C834: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    LOOKUP_FUNC(0x80276EF0)(rdram, ctx);
        goto after_43;
    // 0x8006C834: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    after_43:
    // 0x8006C838: b           L_8006C85C
    // 0x8006C83C: lh          $t3, 0xEC($s0)
    ctx->r11 = MEM_H(ctx->r16, 0XEC);
        goto L_8006C85C;
    // 0x8006C83C: lh          $t3, 0xEC($s0)
    ctx->r11 = MEM_H(ctx->r16, 0XEC);
    // 0x8006C840: lw          $t2, 0x64($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X64);
L_8006C844:
    // 0x8006C844: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8006C848: bne         $t2, $at, L_8006C858
    if (ctx->r10 != ctx->r1) {
        // 0x8006C84C: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_8006C858;
    }
    // 0x8006C84C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8006C850: jal         0x8024BC08
    // 0x8006C854: addiu       $a1, $zero, 0x21
    ctx->r5 = ADD32(0, 0X21);
    LOOKUP_FUNC(0x8024BC08)(rdram, ctx);
        goto after_44;
    // 0x8006C854: addiu       $a1, $zero, 0x21
    ctx->r5 = ADD32(0, 0X21);
    after_44:
L_8006C858:
    // 0x8006C858: lh          $t3, 0xEC($s0)
    ctx->r11 = MEM_H(ctx->r16, 0XEC);
L_8006C85C:
    // 0x8006C85C: nop

    // 0x8006C860: addiu       $t4, $t3, -0x1
    ctx->r12 = ADD32(ctx->r11, -0X1);
    // 0x8006C864: sh          $t4, 0xEC($s0)
    MEM_H(0XEC, ctx->r16) = ctx->r12;
    // 0x8006C868: lh          $t5, 0xEC($s0)
    ctx->r13 = MEM_H(ctx->r16, 0XEC);
    // 0x8006C86C: nop

    // 0x8006C870: bgez        $t5, L_8006C880
    if (SIGNED(ctx->r13) >= 0) {
        // 0x8006C874: lw          $ra, 0x24($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X24);
            goto L_8006C880;
    }
    // 0x8006C874: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x8006C878: sh          $zero, 0xEC($s0)
    MEM_H(0XEC, ctx->r16) = 0;
    // 0x8006C87C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_8006C880:
    // 0x8006C880: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x8006C884: jr          $ra
    // 0x8006C888: addiu       $sp, $sp, 0xA0
    ctx->r29 = ADD32(ctx->r29, 0XA0);
    return;
    // 0x8006C888: addiu       $sp, $sp, 0xA0
    ctx->r29 = ADD32(ctx->r29, 0XA0);
;}
RECOMP_FUNC void func_8006C88C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8006C88C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8006C890: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8006C894: jal         0x80272C74
    // 0x8006C898: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    LOOKUP_FUNC(0x80272C74)(rdram, ctx);
        goto after_0;
    // 0x8006C898: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    after_0:
    // 0x8006C89C: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x8006C8A0: or          $a3, $v0, $zero
    ctx->r7 = ctx->r2 | 0;
    // 0x8006C8A4: lhu         $v1, 0x10($a0)
    ctx->r3 = MEM_HU(ctx->r4, 0X10);
    // 0x8006C8A8: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8006C8AC: beq         $v1, $zero, L_8006C8C4
    if (ctx->r3 == 0) {
        // 0x8006C8B0: lui         $t6, 0x802C
        ctx->r14 = S32(0X802C << 16);
            goto L_8006C8C4;
    }
    // 0x8006C8B0: lui         $t6, 0x802C
    ctx->r14 = S32(0X802C << 16);
    // 0x8006C8B4: beq         $v1, $at, L_8006CA20
    if (ctx->r3 == ctx->r1) {
        // 0x8006C8B8: addiu       $at, $zero, 0x1
        ctx->r1 = ADD32(0, 0X1);
            goto L_8006CA20;
    }
    // 0x8006C8B8: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8006C8BC: b           L_8006CA34
    // 0x8006C8C0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_8006CA34;
    // 0x8006C8C0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8006C8C4:
    // 0x8006C8C4: lh          $t6, 0x543A($t6)
    ctx->r14 = MEM_H(ctx->r14, 0X543A);
    // 0x8006C8C8: nop

    // 0x8006C8CC: beq         $t6, $zero, L_8006C978
    if (ctx->r14 == 0) {
        // 0x8006C8D0: nop
    
            goto L_8006C978;
    }
    // 0x8006C8D0: nop

    // 0x8006C8D4: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x8006C8D8: jal         0x80275534
    // 0x8006C8DC: sw          $a3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r7;
    LOOKUP_FUNC(0x80275534)(rdram, ctx);
        goto after_1;
    // 0x8006C8DC: sw          $a3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r7;
    after_1:
    // 0x8006C8E0: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x8006C8E4: mtc1        $zero, $f2
    ctx->f2.u32l = 0;
    // 0x8006C8E8: lwc1        $f4, 0x48($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X48);
    // 0x8006C8EC: lw          $a3, 0x1C($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X1C);
    // 0x8006C8F0: c.eq.s      $f2, $f4
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f2.fl == ctx->f4.fl;
    // 0x8006C8F4: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x8006C8F8: bc1f        L_8006C960
    if (!c1cs) {
        // 0x8006C8FC: nop
    
            goto L_8006C960;
    }
    // 0x8006C8FC: nop

    // 0x8006C900: lwc1        $f6, 0x50($a0)
    ctx->f6.u32l = MEM_W(ctx->r4, 0X50);
    // 0x8006C904: lwc1        $f11, -0x5820($at)
    ctx->f_odd[(11 - 1) * 2] = MEM_W(ctx->r1, -0X5820);
    // 0x8006C908: lwc1        $f10, -0x581C($at)
    ctx->f10.u32l = MEM_W(ctx->r1, -0X581C);
    // 0x8006C90C: cvt.d.s     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f8.d = CVT_D_S(ctx->f6.fl);
    // 0x8006C910: sub.d       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f10.d); 
    ctx->f16.d = ctx->f8.d - ctx->f10.d;
    // 0x8006C914: cvt.s.d     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.d); 
    ctx->f18.fl = CVT_S_D(ctx->f16.d);
    // 0x8006C918: swc1        $f18, 0x50($a0)
    MEM_W(0X50, ctx->r4) = ctx->f18.u32l;
    // 0x8006C91C: lwc1        $f0, 0x50($a0)
    ctx->f0.u32l = MEM_W(ctx->r4, 0X50);
    // 0x8006C920: nop

    // 0x8006C924: c.lt.s      $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f0.fl < ctx->f2.fl;
    // 0x8006C928: nop

    // 0x8006C92C: bc1f        L_8006C940
    if (!c1cs) {
        // 0x8006C930: nop
    
            goto L_8006C940;
    }
    // 0x8006C930: nop

    // 0x8006C934: swc1        $f2, 0x50($a0)
    MEM_W(0X50, ctx->r4) = ctx->f2.u32l;
    // 0x8006C938: lwc1        $f0, 0x50($a0)
    ctx->f0.u32l = MEM_W(ctx->r4, 0X50);
    // 0x8006C93C: nop

L_8006C940:
    // 0x8006C940: lw          $a2, 0x7C($a0)
    ctx->r6 = MEM_W(ctx->r4, 0X7C);
    // 0x8006C944: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x8006C948: sw          $a3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r7;
    // 0x8006C94C: jal         0x80274C54
    // 0x8006C950: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    LOOKUP_FUNC(0x80274C54)(rdram, ctx);
        goto after_2;
    // 0x8006C950: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    after_2:
    // 0x8006C954: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x8006C958: lw          $a3, 0x1C($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X1C);
    // 0x8006C95C: nop

L_8006C960:
    // 0x8006C960: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x8006C964: jal         0x80275588
    // 0x8006C968: sw          $a3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r7;
    LOOKUP_FUNC(0x80275588)(rdram, ctx);
        goto after_3;
    // 0x8006C968: sw          $a3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r7;
    after_3:
    // 0x8006C96C: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x8006C970: lw          $a3, 0x1C($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X1C);
    // 0x8006C974: nop

L_8006C978:
    // 0x8006C978: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x8006C97C: lwc1        $f6, 0x48($a0)
    ctx->f6.u32l = MEM_W(ctx->r4, 0X48);
    // 0x8006C980: sltiu       $at, $a3, 0xC8
    ctx->r1 = ctx->r7 < 0XC8 ? 1 : 0;
    // 0x8006C984: c.eq.s      $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f4.fl == ctx->f6.fl;
    // 0x8006C988: nop

    // 0x8006C98C: bc1f        L_8006CA34
    if (!c1cs) {
        // 0x8006C990: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_8006CA34;
    }
    // 0x8006C990: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8006C994: bne         $at, $zero, L_8006CA30
    if (ctx->r1 != 0) {
        // 0x8006C998: sltiu       $at, $a3, 0xD3
        ctx->r1 = ctx->r7 < 0XD3 ? 1 : 0;
            goto L_8006CA30;
    }
    // 0x8006C998: sltiu       $at, $a3, 0xD3
    ctx->r1 = ctx->r7 < 0XD3 ? 1 : 0;
    // 0x8006C99C: beq         $at, $zero, L_8006CA30
    if (ctx->r1 == 0) {
        // 0x8006C9A0: lui         $v0, 0x800B
        ctx->r2 = S32(0X800B << 16);
            goto L_8006CA30;
    }
    // 0x8006C9A0: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x8006C9A4: addu        $v0, $v0, $a3
    ctx->r2 = ADD32(ctx->r2, ctx->r7);
    // 0x8006C9A8: lbu         $v1, -0x1338($v0)
    ctx->r3 = MEM_BU(ctx->r2, -0X1338);
    // 0x8006C9AC: nop

    // 0x8006C9B0: bne         $v1, $zero, L_8006C9C8
    if (ctx->r3 != 0) {
        // 0x8006C9B4: nop
    
            goto L_8006C9C8;
    }
    // 0x8006C9B4: nop

    // 0x8006C9B8: jal         0x8024BC08
    // 0x8006C9BC: addiu       $a1, $zero, 0x21
    ctx->r5 = ADD32(0, 0X21);
    LOOKUP_FUNC(0x8024BC08)(rdram, ctx);
        goto after_4;
    // 0x8006C9BC: addiu       $a1, $zero, 0x21
    ctx->r5 = ADD32(0, 0X21);
    after_4:
    // 0x8006C9C0: b           L_8006CA34
    // 0x8006C9C4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_8006CA34;
    // 0x8006C9C4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8006C9C8:
    // 0x8006C9C8: lhu         $t7, 0x10($a0)
    ctx->r15 = MEM_HU(ctx->r4, 0X10);
    // 0x8006C9CC: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x8006C9D0: addiu       $t8, $t7, 0x1
    ctx->r24 = ADD32(ctx->r15, 0X1);
    // 0x8006C9D4: bne         $v1, $at, L_8006C9F0
    if (ctx->r3 != ctx->r1) {
        // 0x8006C9D8: sh          $t8, 0x10($a0)
        MEM_H(0X10, ctx->r4) = ctx->r24;
            goto L_8006C9F0;
    }
    // 0x8006C9D8: sh          $t8, 0x10($a0)
    MEM_H(0X10, ctx->r4) = ctx->r24;
    // 0x8006C9DC: addiu       $a1, $zero, 0x12A
    ctx->r5 = ADD32(0, 0X12A);
    // 0x8006C9E0: jal         0x80272D3C
    // 0x8006C9E4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    LOOKUP_FUNC(0x80272D3C)(rdram, ctx);
        goto after_5;
    // 0x8006C9E4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_5:
    // 0x8006C9E8: b           L_8006CA34
    // 0x8006C9EC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_8006CA34;
    // 0x8006C9EC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8006C9F0:
    // 0x8006C9F0: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x8006C9F4: bne         $v1, $at, L_8006CA0C
    if (ctx->r3 != ctx->r1) {
        // 0x8006C9F8: addiu       $t9, $zero, 0x7
        ctx->r25 = ADD32(0, 0X7);
            goto L_8006CA0C;
    }
    // 0x8006C9F8: addiu       $t9, $zero, 0x7
    ctx->r25 = ADD32(0, 0X7);
    // 0x8006C9FC: jal         0x8006BBBC
    // 0x8006CA00: sh          $t9, 0xE4($a0)
    MEM_H(0XE4, ctx->r4) = ctx->r25;
    func_8006BBBC(rdram, ctx);
        goto after_6;
    // 0x8006CA00: sh          $t9, 0xE4($a0)
    MEM_H(0XE4, ctx->r4) = ctx->r25;
    after_6:
    // 0x8006CA04: b           L_8006CA34
    // 0x8006CA08: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_8006CA34;
    // 0x8006CA08: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8006CA0C:
    // 0x8006CA0C: jal         0x8006BBBC
    // 0x8006CA10: nop

    func_8006BBBC(rdram, ctx);
        goto after_7;
    // 0x8006CA10: nop

    after_7:
    // 0x8006CA14: b           L_8006CA34
    // 0x8006CA18: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_8006CA34;
    // 0x8006CA18: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8006CA1C: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
L_8006CA20:
    // 0x8006CA20: bne         $v0, $at, L_8006CA34
    if (ctx->r2 != ctx->r1) {
        // 0x8006CA24: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_8006CA34;
    }
    // 0x8006CA24: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8006CA28: jal         0x8024BC08
    // 0x8006CA2C: addiu       $a1, $zero, 0x21
    ctx->r5 = ADD32(0, 0X21);
    LOOKUP_FUNC(0x8024BC08)(rdram, ctx);
        goto after_8;
    // 0x8006CA2C: addiu       $a1, $zero, 0x21
    ctx->r5 = ADD32(0, 0X21);
    after_8:
L_8006CA30:
    // 0x8006CA30: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8006CA34:
    // 0x8006CA34: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x8006CA38: jr          $ra
    // 0x8006CA3C: nop

    return;
    // 0x8006CA3C: nop

;}
RECOMP_FUNC void func_8006CA40(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8006CA40: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x8006CA44: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8006CA48: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8006CA4C: lhu         $t6, 0x10($a0)
    ctx->r14 = MEM_HU(ctx->r4, 0X10);
    // 0x8006CA50: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x8006CA54: beq         $t6, $zero, L_8006CA88
    if (ctx->r14 == 0) {
        // 0x8006CA58: nop
    
            goto L_8006CA88;
    }
    // 0x8006CA58: nop

    // 0x8006CA5C: jal         0x80272CA4
    // 0x8006CA60: nop

    LOOKUP_FUNC(0x80272CA4)(rdram, ctx);
        goto after_0;
    // 0x8006CA60: nop

    after_0:
    // 0x8006CA64: sltiu       $at, $v0, 0x10
    ctx->r1 = ctx->r2 < 0X10 ? 1 : 0;
    // 0x8006CA68: bne         $at, $zero, L_8006CA88
    if (ctx->r1 != 0) {
        // 0x8006CA6C: sltiu       $at, $v0, 0x19
        ctx->r1 = ctx->r2 < 0X19 ? 1 : 0;
            goto L_8006CA88;
    }
    // 0x8006CA6C: sltiu       $at, $v0, 0x19
    ctx->r1 = ctx->r2 < 0X19 ? 1 : 0;
    // 0x8006CA70: beq         $at, $zero, L_8006CA88
    if (ctx->r1 == 0) {
        // 0x8006CA74: lui         $at, 0x800E
        ctx->r1 = S32(0X800E << 16);
            goto L_8006CA88;
    }
    // 0x8006CA74: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x8006CA78: lwc1        $f14, -0x5818($at)
    ctx->f14.u32l = MEM_W(ctx->r1, -0X5818);
    // 0x8006CA7C: lwc1        $f12, 0xF4($s0)
    ctx->f12.u32l = MEM_W(ctx->r16, 0XF4);
    // 0x8006CA80: jal         0x80279520
    // 0x8006CA84: addiu       $a2, $s0, 0x8C
    ctx->r6 = ADD32(ctx->r16, 0X8C);
    LOOKUP_FUNC(0x80279520)(rdram, ctx);
        goto after_1;
    // 0x8006CA84: addiu       $a2, $s0, 0x8C
    ctx->r6 = ADD32(ctx->r16, 0X8C);
    after_1:
L_8006CA88:
    // 0x8006CA88: lhu         $v1, 0x10($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X10);
    // 0x8006CA8C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8006CA90: beq         $v1, $zero, L_8006CAB4
    if (ctx->r3 == 0) {
        // 0x8006CA94: or          $v0, $v1, $zero
        ctx->r2 = ctx->r3 | 0;
            goto L_8006CAB4;
    }
    // 0x8006CA94: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    // 0x8006CA98: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8006CA9C: beq         $v0, $at, L_8006CC24
    if (ctx->r2 == ctx->r1) {
        // 0x8006CAA0: addiu       $at, $zero, 0x2
        ctx->r1 = ADD32(0, 0X2);
            goto L_8006CC24;
    }
    // 0x8006CAA0: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x8006CAA4: beq         $v0, $at, L_8006CCCC
    if (ctx->r2 == ctx->r1) {
        // 0x8006CAA8: nop
    
            goto L_8006CCCC;
    }
    // 0x8006CAA8: nop

    // 0x8006CAAC: b           L_8006CDA4
    // 0x8006CAB0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_8006CDA4;
    // 0x8006CAB0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_8006CAB4:
    // 0x8006CAB4: addiu       $t7, $v1, 0x1
    ctx->r15 = ADD32(ctx->r3, 0X1);
    // 0x8006CAB8: sh          $t7, 0x10($s0)
    MEM_H(0X10, ctx->r16) = ctx->r15;
    // 0x8006CABC: addiu       $a1, $zero, 0x128
    ctx->r5 = ADD32(0, 0X128);
    // 0x8006CAC0: jal         0x80272D3C
    // 0x8006CAC4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    LOOKUP_FUNC(0x80272D3C)(rdram, ctx);
        goto after_2;
    // 0x8006CAC4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_2:
    // 0x8006CAC8: lw          $t8, 0xC8($s0)
    ctx->r24 = MEM_W(ctx->r16, 0XC8);
    // 0x8006CACC: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x8006CAD0: lhu         $t9, 0x8($t8)
    ctx->r25 = MEM_HU(ctx->r24, 0X8);
    // 0x8006CAD4: nop

    // 0x8006CAD8: andi        $t0, $t9, 0x1
    ctx->r8 = ctx->r25 & 0X1;
    // 0x8006CADC: beq         $t0, $zero, L_8006CAFC
    if (ctx->r8 == 0) {
        // 0x8006CAE0: nop
    
            goto L_8006CAFC;
    }
    // 0x8006CAE0: nop

    // 0x8006CAE4: lwc1        $f5, -0x5810($at)
    ctx->f_odd[(5 - 1) * 2] = MEM_W(ctx->r1, -0X5810);
    // 0x8006CAE8: lwc1        $f4, -0x580C($at)
    ctx->f4.u32l = MEM_W(ctx->r1, -0X580C);
    // 0x8006CAEC: nop

    // 0x8006CAF0: cvt.s.d     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.d); 
    ctx->f6.fl = CVT_S_D(ctx->f4.d);
    // 0x8006CAF4: b           L_8006CB10
    // 0x8006CAF8: swc1        $f6, 0xF4($s0)
    MEM_W(0XF4, ctx->r16) = ctx->f6.u32l;
        goto L_8006CB10;
    // 0x8006CAF8: swc1        $f6, 0xF4($s0)
    MEM_W(0XF4, ctx->r16) = ctx->f6.u32l;
L_8006CAFC:
    // 0x8006CAFC: mtc1        $zero, $f9
    ctx->f_odd[(9 - 1) * 2] = 0;
    // 0x8006CB00: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x8006CB04: nop

    // 0x8006CB08: cvt.s.d     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.d); 
    ctx->f10.fl = CVT_S_D(ctx->f8.d);
    // 0x8006CB0C: swc1        $f10, 0xF4($s0)
    MEM_W(0XF4, ctx->r16) = ctx->f10.u32l;
L_8006CB10:
    // 0x8006CB10: jal         0x802732F4
    // 0x8006CB14: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    LOOKUP_FUNC(0x802732F4)(rdram, ctx);
        goto after_3;
    // 0x8006CB14: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_3:
    // 0x8006CB18: lwc1        $f12, 0x8C($s0)
    ctx->f12.u32l = MEM_W(ctx->r16, 0X8C);
    // 0x8006CB1C: lwc1        $f14, 0xF4($s0)
    ctx->f14.u32l = MEM_W(ctx->r16, 0XF4);
    // 0x8006CB20: jal         0x8027924C
    // 0x8006CB24: nop

    LOOKUP_FUNC(0x8027924C)(rdram, ctx);
        goto after_4;
    // 0x8006CB24: nop

    after_4:
    // 0x8006CB28: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x8006CB2C: nop

    // 0x8006CB30: c.lt.s      $f0, $f16
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f0.fl < ctx->f16.fl;
    // 0x8006CB34: nop

    // 0x8006CB38: bc1f        L_8006CB48
    if (!c1cs) {
        // 0x8006CB3C: nop
    
            goto L_8006CB48;
    }
    // 0x8006CB3C: nop

    // 0x8006CB40: jal         0x802732D0
    // 0x8006CB44: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    LOOKUP_FUNC(0x802732D0)(rdram, ctx);
        goto after_5;
    // 0x8006CB44: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_5:
L_8006CB48:
    // 0x8006CB48: lui         $v1, 0x8009
    ctx->r3 = S32(0X8009 << 16);
    // 0x8006CB4C: addiu       $v1, $v1, 0x3B20
    ctx->r3 = ADD32(ctx->r3, 0X3B20);
    // 0x8006CB50: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x8006CB54: nop

    // 0x8006CB58: lh          $t1, 0xD4($v0)
    ctx->r9 = MEM_H(ctx->r2, 0XD4);
    // 0x8006CB5C: nop

    // 0x8006CB60: beq         $t1, $zero, L_8006CBB8
    if (ctx->r9 == 0) {
        // 0x8006CB64: nop
    
            goto L_8006CBB8;
    }
    // 0x8006CB64: nop

    // 0x8006CB68: lh          $t2, 0xD6($v0)
    ctx->r10 = MEM_H(ctx->r2, 0XD6);
    // 0x8006CB6C: addiu       $a1, $zero, 0xC
    ctx->r5 = ADD32(0, 0XC);
    // 0x8006CB70: multu       $t2, $a1
    result = U64(U32(ctx->r10)) * U64(U32(ctx->r5)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8006CB74: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x8006CB78: addiu       $a0, $a0, 0x680
    ctx->r4 = ADD32(ctx->r4, 0X680);
    // 0x8006CB7C: mflo        $t3
    ctx->r11 = lo;
    // 0x8006CB80: addu        $t4, $a0, $t3
    ctx->r12 = ADD32(ctx->r4, ctx->r11);
    // 0x8006CB84: lwc1        $f18, 0x8($t4)
    ctx->f18.u32l = MEM_W(ctx->r12, 0X8);
    // 0x8006CB88: nop

    // 0x8006CB8C: swc1        $f18, 0xEC($s0)
    MEM_W(0XEC, ctx->r16) = ctx->f18.u32l;
    // 0x8006CB90: lw          $t5, 0x0($v1)
    ctx->r13 = MEM_W(ctx->r3, 0X0);
    // 0x8006CB94: nop

    // 0x8006CB98: lh          $t6, 0xD6($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XD6);
    // 0x8006CB9C: nop

    // 0x8006CBA0: multu       $t6, $a1
    result = U64(U32(ctx->r14)) * U64(U32(ctx->r5)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8006CBA4: mflo        $t7
    ctx->r15 = lo;
    // 0x8006CBA8: addu        $t8, $a0, $t7
    ctx->r24 = ADD32(ctx->r4, ctx->r15);
    // 0x8006CBAC: lwc1        $f4, 0x0($t8)
    ctx->f4.u32l = MEM_W(ctx->r24, 0X0);
    // 0x8006CBB0: b           L_8006CBD8
    // 0x8006CBB4: swc1        $f4, 0xF0($s0)
    MEM_W(0XF0, ctx->r16) = ctx->f4.u32l;
        goto L_8006CBD8;
    // 0x8006CBB4: swc1        $f4, 0xF0($s0)
    MEM_W(0XF0, ctx->r16) = ctx->f4.u32l;
L_8006CBB8:
    // 0x8006CBB8: lwc1        $f6, 0x8($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0X8);
    // 0x8006CBBC: nop

    // 0x8006CBC0: swc1        $f6, 0xEC($s0)
    MEM_W(0XEC, ctx->r16) = ctx->f6.u32l;
    // 0x8006CBC4: lw          $t9, 0x0($v1)
    ctx->r25 = MEM_W(ctx->r3, 0X0);
    // 0x8006CBC8: nop

    // 0x8006CBCC: lwc1        $f8, 0x0($t9)
    ctx->f8.u32l = MEM_W(ctx->r25, 0X0);
    // 0x8006CBD0: nop

    // 0x8006CBD4: swc1        $f8, 0xF0($s0)
    MEM_W(0XF0, ctx->r16) = ctx->f8.u32l;
L_8006CBD8:
    // 0x8006CBD8: lui         $at, 0x4204
    ctx->r1 = S32(0X4204 << 16);
    // 0x8006CBDC: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    // 0x8006CBE0: lwc1        $f0, 0xF0($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0XF0);
    // 0x8006CBE4: lui         $at, 0xC204
    ctx->r1 = S32(0XC204 << 16);
    // 0x8006CBE8: c.lt.s      $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f2.fl < ctx->f0.fl;
    // 0x8006CBEC: nop

    // 0x8006CBF0: bc1f        L_8006CC04
    if (!c1cs) {
        // 0x8006CBF4: nop
    
            goto L_8006CC04;
    }
    // 0x8006CBF4: nop

    // 0x8006CBF8: swc1        $f2, 0xF0($s0)
    MEM_W(0XF0, ctx->r16) = ctx->f2.u32l;
    // 0x8006CBFC: lwc1        $f0, 0xF0($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0XF0);
    // 0x8006CC00: nop

L_8006CC04:
    // 0x8006CC04: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    // 0x8006CC08: nop

    // 0x8006CC0C: c.lt.s      $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f0.fl < ctx->f2.fl;
    // 0x8006CC10: nop

    // 0x8006CC14: bc1f        L_8006CDA4
    if (!c1cs) {
        // 0x8006CC18: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_8006CDA4;
    }
    // 0x8006CC18: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8006CC1C: b           L_8006CDA0
    // 0x8006CC20: swc1        $f2, 0xF0($s0)
    MEM_W(0XF0, ctx->r16) = ctx->f2.u32l;
        goto L_8006CDA0;
    // 0x8006CC20: swc1        $f2, 0xF0($s0)
    MEM_W(0XF0, ctx->r16) = ctx->f2.u32l;
L_8006CC24:
    // 0x8006CC24: jal         0x80272C74
    // 0x8006CC28: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    LOOKUP_FUNC(0x80272C74)(rdram, ctx);
        goto after_6;
    // 0x8006CC28: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_6:
    // 0x8006CC2C: addiu       $at, $zero, 0x5
    ctx->r1 = ADD32(0, 0X5);
    // 0x8006CC30: bne         $v0, $at, L_8006CDA0
    if (ctx->r2 != ctx->r1) {
        // 0x8006CC34: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_8006CDA0;
    }
    // 0x8006CC34: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8006CC38: lhu         $t0, 0x10($s0)
    ctx->r8 = MEM_HU(ctx->r16, 0X10);
    // 0x8006CC3C: lui         $at, 0x3FF0
    ctx->r1 = S32(0X3FF0 << 16);
    // 0x8006CC40: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x8006CC44: lw          $a1, 0xEC($s0)
    ctx->r5 = MEM_W(ctx->r16, 0XEC);
    // 0x8006CC48: lw          $a2, 0xF0($s0)
    ctx->r6 = MEM_W(ctx->r16, 0XF0);
    // 0x8006CC4C: addiu       $t1, $t0, 0x1
    ctx->r9 = ADD32(ctx->r8, 0X1);
    // 0x8006CC50: sh          $t1, 0x10($s0)
    MEM_H(0X10, ctx->r16) = ctx->r9;
    // 0x8006CC54: addiu       $a3, $sp, 0x3C
    ctx->r7 = ADD32(ctx->r29, 0X3C);
    // 0x8006CC58: jal         0x80272B98
    // 0x8006CC5C: swc1        $f10, 0x74($s0)
    MEM_W(0X74, ctx->r16) = ctx->f10.u32l;
    LOOKUP_FUNC(0x80272B98)(rdram, ctx);
        goto after_7;
    // 0x8006CC5C: swc1        $f10, 0x74($s0)
    MEM_W(0X74, ctx->r16) = ctx->f10.u32l;
    after_7:
    // 0x8006CC60: lwc1        $f12, 0x3C($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x8006CC64: jal         0x80081040
    // 0x8006CC68: nop

    func_80081040(rdram, ctx);
        goto after_8;
    // 0x8006CC68: nop

    after_8:
    // 0x8006CC6C: lw          $t2, 0xC8($s0)
    ctx->r10 = MEM_W(ctx->r16, 0XC8);
    // 0x8006CC70: lwc1        $f16, 0x4C($s0)
    ctx->f16.u32l = MEM_W(ctx->r16, 0X4C);
    // 0x8006CC74: lh          $t3, 0x8B8($t2)
    ctx->r11 = MEM_H(ctx->r10, 0X8B8);
    // 0x8006CC78: nop

    // 0x8006CC7C: mtc1        $t3, $f18
    ctx->f18.u32l = ctx->r11;
    // 0x8006CC80: nop

    // 0x8006CC84: cvt.s.w     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    ctx->f4.fl = CVT_S_W(ctx->f18.u32l);
    // 0x8006CC88: sub.s       $f6, $f16, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f16.fl - ctx->f4.fl;
    // 0x8006CC8C: jal         0x80272AEC
    // 0x8006CC90: div.s       $f12, $f6, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f12.fl = DIV_S(ctx->f6.fl, ctx->f0.fl);
    LOOKUP_FUNC(0x80272AEC)(rdram, ctx);
        goto after_9;
    // 0x8006CC90: div.s       $f12, $f6, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f12.fl = DIV_S(ctx->f6.fl, ctx->f0.fl);
    after_9:
    // 0x8006CC94: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x8006CC98: lwc1        $f11, -0x5808($at)
    ctx->f_odd[(11 - 1) * 2] = MEM_W(ctx->r1, -0X5808);
    // 0x8006CC9C: lwc1        $f10, -0x5804($at)
    ctx->f10.u32l = MEM_W(ctx->r1, -0X5804);
    // 0x8006CCA0: cvt.d.s     $f8, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f8.d = CVT_D_S(ctx->f0.fl);
    // 0x8006CCA4: nop

    // 0x8006CCA8: div.d       $f18, $f8, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f10.d); 
    ctx->f18.d = DIV_D(ctx->f8.d, ctx->f10.d);
    // 0x8006CCAC: lw          $a2, 0x3C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X3C);
    // 0x8006CCB0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8006CCB4: cvt.s.d     $f16, $f18
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.d); 
    ctx->f16.fl = CVT_S_D(ctx->f18.d);
    // 0x8006CCB8: mfc1        $a1, $f16
    ctx->r5 = (int32_t)ctx->f16.u32l;
    // 0x8006CCBC: jal         0x80274C54
    // 0x8006CCC0: nop

    LOOKUP_FUNC(0x80274C54)(rdram, ctx);
        goto after_10;
    // 0x8006CCC0: nop

    after_10:
    // 0x8006CCC4: b           L_8006CDA4
    // 0x8006CCC8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_8006CDA4;
    // 0x8006CCC8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_8006CCCC:
    // 0x8006CCCC: jal         0x80272C74
    // 0x8006CCD0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    LOOKUP_FUNC(0x80272C74)(rdram, ctx);
        goto after_11;
    // 0x8006CCD0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_11:
    // 0x8006CCD4: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x8006CCD8: beq         $v0, $at, L_8006CD28
    if (ctx->r2 == ctx->r1) {
        // 0x8006CCDC: sw          $v0, 0x34($sp)
        MEM_W(0X34, ctx->r29) = ctx->r2;
            goto L_8006CD28;
    }
    // 0x8006CCDC: sw          $v0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r2;
    // 0x8006CCE0: jal         0x80275534
    // 0x8006CCE4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    LOOKUP_FUNC(0x80275534)(rdram, ctx);
        goto after_12;
    // 0x8006CCE4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_12:
    // 0x8006CCE8: beq         $v0, $zero, L_8006CCFC
    if (ctx->r2 == 0) {
        // 0x8006CCEC: nop
    
            goto L_8006CCFC;
    }
    // 0x8006CCEC: nop

    // 0x8006CCF0: lw          $a0, 0xCC($s0)
    ctx->r4 = MEM_W(ctx->r16, 0XCC);
    // 0x8006CCF4: jal         0x80001218
    // 0x8006CCF8: nop

    func_80001218(rdram, ctx);
        goto after_13;
    // 0x8006CCF8: nop

    after_13:
L_8006CCFC:
    // 0x8006CCFC: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x8006CD00: lwc1        $f6, 0x48($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X48);
    // 0x8006CD04: nop

    // 0x8006CD08: c.eq.s      $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f4.fl == ctx->f6.fl;
    // 0x8006CD0C: nop

    // 0x8006CD10: bc1t        L_8006CD44
    if (c1cs) {
        // 0x8006CD14: lui         $at, 0x4204
        ctx->r1 = S32(0X4204 << 16);
            goto L_8006CD44;
    }
    // 0x8006CD14: lui         $at, 0x4204
    ctx->r1 = S32(0X4204 << 16);
    // 0x8006CD18: jal         0x80275588
    // 0x8006CD1C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    LOOKUP_FUNC(0x80275588)(rdram, ctx);
        goto after_14;
    // 0x8006CD1C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_14:
    // 0x8006CD20: b           L_8006CD44
    // 0x8006CD24: lui         $at, 0x4204
    ctx->r1 = S32(0X4204 << 16);
        goto L_8006CD44;
    // 0x8006CD24: lui         $at, 0x4204
    ctx->r1 = S32(0X4204 << 16);
L_8006CD28:
    // 0x8006CD28: lwc1        $f0, 0xF4($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0XF4);
    // 0x8006CD2C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8006CD30: mfc1        $a2, $f0
    ctx->r6 = (int32_t)ctx->f0.u32l;
    // 0x8006CD34: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    // 0x8006CD38: jal         0x80274C54
    // 0x8006CD3C: swc1        $f0, 0x8C($s0)
    MEM_W(0X8C, ctx->r16) = ctx->f0.u32l;
    LOOKUP_FUNC(0x80274C54)(rdram, ctx);
        goto after_15;
    // 0x8006CD3C: swc1        $f0, 0x8C($s0)
    MEM_W(0X8C, ctx->r16) = ctx->f0.u32l;
    after_15:
    // 0x8006CD40: lui         $at, 0x4204
    ctx->r1 = S32(0X4204 << 16);
L_8006CD44:
    // 0x8006CD44: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    // 0x8006CD48: lwc1        $f0, 0x44($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X44);
    // 0x8006CD4C: lui         $at, 0xC204
    ctx->r1 = S32(0XC204 << 16);
    // 0x8006CD50: c.lt.s      $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f2.fl < ctx->f0.fl;
    // 0x8006CD54: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8006CD58: bc1f        L_8006CD6C
    if (!c1cs) {
        // 0x8006CD5C: nop
    
            goto L_8006CD6C;
    }
    // 0x8006CD5C: nop

    // 0x8006CD60: swc1        $f2, 0x44($s0)
    MEM_W(0X44, ctx->r16) = ctx->f2.u32l;
    // 0x8006CD64: lwc1        $f0, 0x44($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X44);
    // 0x8006CD68: nop

L_8006CD6C:
    // 0x8006CD6C: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    // 0x8006CD70: nop

    // 0x8006CD74: c.lt.s      $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f0.fl < ctx->f2.fl;
    // 0x8006CD78: nop

    // 0x8006CD7C: bc1f        L_8006CD8C
    if (!c1cs) {
        // 0x8006CD80: lw          $t4, 0x34($sp)
        ctx->r12 = MEM_W(ctx->r29, 0X34);
            goto L_8006CD8C;
    }
    // 0x8006CD80: lw          $t4, 0x34($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X34);
    // 0x8006CD84: swc1        $f2, 0x44($s0)
    MEM_W(0X44, ctx->r16) = ctx->f2.u32l;
    // 0x8006CD88: lw          $t4, 0x34($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X34);
L_8006CD8C:
    // 0x8006CD8C: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8006CD90: bne         $t4, $at, L_8006CDA4
    if (ctx->r12 != ctx->r1) {
        // 0x8006CD94: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_8006CDA4;
    }
    // 0x8006CD94: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8006CD98: jal         0x8024BC08
    // 0x8006CD9C: addiu       $a1, $zero, 0x21
    ctx->r5 = ADD32(0, 0X21);
    LOOKUP_FUNC(0x8024BC08)(rdram, ctx);
        goto after_16;
    // 0x8006CD9C: addiu       $a1, $zero, 0x21
    ctx->r5 = ADD32(0, 0X21);
    after_16:
L_8006CDA0:
    // 0x8006CDA0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_8006CDA4:
    // 0x8006CDA4: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8006CDA8: jr          $ra
    // 0x8006CDAC: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    return;
    // 0x8006CDAC: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
;}
RECOMP_FUNC void func_8006CDB0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8006CDB0: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x8006CDB4: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8006CDB8: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8006CDBC: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x8006CDC0: jal         0x80274CFC
    // 0x8006CDC4: addiu       $a1, $zero, 0x96
    ctx->r5 = ADD32(0, 0X96);
    LOOKUP_FUNC(0x80274CFC)(rdram, ctx);
        goto after_0;
    // 0x8006CDC4: addiu       $a1, $zero, 0x96
    ctx->r5 = ADD32(0, 0X96);
    after_0:
    // 0x8006CDC8: lhu         $v1, 0x10($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X10);
    // 0x8006CDCC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8006CDD0: beq         $v1, $zero, L_8006CDEC
    if (ctx->r3 == 0) {
        // 0x8006CDD4: or          $v0, $v1, $zero
        ctx->r2 = ctx->r3 | 0;
            goto L_8006CDEC;
    }
    // 0x8006CDD4: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    // 0x8006CDD8: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8006CDDC: beq         $v0, $at, L_8006CEA8
    if (ctx->r2 == ctx->r1) {
        // 0x8006CDE0: nop
    
            goto L_8006CEA8;
    }
    // 0x8006CDE0: nop

    // 0x8006CDE4: b           L_8006CF3C
    // 0x8006CDE8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_8006CF3C;
    // 0x8006CDE8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_8006CDEC:
    // 0x8006CDEC: addiu       $t6, $v1, 0x1
    ctx->r14 = ADD32(ctx->r3, 0X1);
    // 0x8006CDF0: jal         0x802732F4
    // 0x8006CDF4: sh          $t6, 0x10($s0)
    MEM_H(0X10, ctx->r16) = ctx->r14;
    LOOKUP_FUNC(0x802732F4)(rdram, ctx);
        goto after_1;
    // 0x8006CDF4: sh          $t6, 0x10($s0)
    MEM_H(0X10, ctx->r16) = ctx->r14;
    after_1:
    // 0x8006CDF8: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x8006CDFC: addiu       $v0, $v0, 0x680
    ctx->r2 = ADD32(ctx->r2, 0X680);
    // 0x8006CE00: lw          $a1, 0xE0($v0)
    ctx->r5 = MEM_W(ctx->r2, 0XE0);
    // 0x8006CE04: lw          $a2, 0xD8($v0)
    ctx->r6 = MEM_W(ctx->r2, 0XD8);
    // 0x8006CE08: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8006CE0C: jal         0x80272B98
    // 0x8006CE10: addiu       $a3, $sp, 0x30
    ctx->r7 = ADD32(ctx->r29, 0X30);
    LOOKUP_FUNC(0x80272B98)(rdram, ctx);
        goto after_2;
    // 0x8006CE10: addiu       $a3, $sp, 0x30
    ctx->r7 = ADD32(ctx->r29, 0X30);
    after_2:
    // 0x8006CE14: lwc1        $f12, 0x8C($s0)
    ctx->f12.u32l = MEM_W(ctx->r16, 0X8C);
    // 0x8006CE18: lwc1        $f14, 0x30($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X30);
    // 0x8006CE1C: jal         0x8027924C
    // 0x8006CE20: nop

    LOOKUP_FUNC(0x8027924C)(rdram, ctx);
        goto after_3;
    // 0x8006CE20: nop

    after_3:
    // 0x8006CE24: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x8006CE28: nop

    // 0x8006CE2C: c.lt.s      $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f0.fl < ctx->f4.fl;
    // 0x8006CE30: nop

    // 0x8006CE34: bc1f        L_8006CE48
    if (!c1cs) {
        // 0x8006CE38: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_8006CE48;
    }
    // 0x8006CE38: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8006CE3C: jal         0x802732D0
    // 0x8006CE40: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    LOOKUP_FUNC(0x802732D0)(rdram, ctx);
        goto after_4;
    // 0x8006CE40: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_4:
    // 0x8006CE44: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
L_8006CE48:
    // 0x8006CE48: addiu       $a1, $zero, 0x131
    ctx->r5 = ADD32(0, 0X131);
    // 0x8006CE4C: jal         0x80272D3C
    // 0x8006CE50: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    LOOKUP_FUNC(0x80272D3C)(rdram, ctx);
        goto after_5;
    // 0x8006CE50: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_5:
    // 0x8006CE54: lui         $at, 0x4190
    ctx->r1 = S32(0X4190 << 16);
    // 0x8006CE58: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x8006CE5C: lwc1        $f6, 0x34($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X34);
    // 0x8006CE60: lui         $at, 0x3FF8
    ctx->r1 = S32(0X3FF8 << 16);
    // 0x8006CE64: div.s       $f0, $f6, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f0.fl = DIV_S(ctx->f6.fl, ctx->f8.fl);
    // 0x8006CE68: mtc1        $at, $f11
    ctx->f_odd[(11 - 1) * 2] = ctx->r1;
    // 0x8006CE6C: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x8006CE70: lw          $a2, 0x30($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X30);
    // 0x8006CE74: lui         $at, 0x3FC0
    ctx->r1 = S32(0X3FC0 << 16);
    // 0x8006CE78: cvt.d.s     $f16, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f16.d = CVT_D_S(ctx->f0.fl);
    // 0x8006CE7C: c.lt.d      $f10, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f10.d < ctx->f16.d;
    // 0x8006CE80: nop

    // 0x8006CE84: bc1f        L_8006CE94
    if (!c1cs) {
        // 0x8006CE88: nop
    
            goto L_8006CE94;
    }
    // 0x8006CE88: nop

    // 0x8006CE8C: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x8006CE90: nop

L_8006CE94:
    // 0x8006CE94: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x8006CE98: jal         0x80274C54
    // 0x8006CE9C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    LOOKUP_FUNC(0x80274C54)(rdram, ctx);
        goto after_6;
    // 0x8006CE9C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_6:
    // 0x8006CEA0: b           L_8006CF3C
    // 0x8006CEA4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_8006CF3C;
    // 0x8006CEA4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_8006CEA8:
    // 0x8006CEA8: jal         0x80272C74
    // 0x8006CEAC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    LOOKUP_FUNC(0x80272C74)(rdram, ctx);
        goto after_7;
    // 0x8006CEAC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_7:
    // 0x8006CEB0: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x8006CEB4: bne         $v0, $at, L_8006CEE8
    if (ctx->r2 != ctx->r1) {
        // 0x8006CEB8: or          $v1, $v0, $zero
        ctx->r3 = ctx->r2 | 0;
            goto L_8006CEE8;
    }
    // 0x8006CEB8: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
    // 0x8006CEBC: lhu         $t7, 0x12($s0)
    ctx->r15 = MEM_HU(ctx->r16, 0X12);
    // 0x8006CEC0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8006CEC4: andi        $t8, $t7, 0x8000
    ctx->r24 = ctx->r15 & 0X8000;
    // 0x8006CEC8: bne         $t8, $zero, L_8006CEE8
    if (ctx->r24 != 0) {
        // 0x8006CECC: lui         $a1, 0x8009
        ctx->r5 = S32(0X8009 << 16);
            goto L_8006CEE8;
    }
    // 0x8006CECC: lui         $a1, 0x8009
    ctx->r5 = S32(0X8009 << 16);
    // 0x8006CED0: addiu       $a1, $a1, 0x45F0
    ctx->r5 = ADD32(ctx->r5, 0X45F0);
    // 0x8006CED4: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x8006CED8: jal         0x80276EF0
    // 0x8006CEDC: sw          $v0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r2;
    LOOKUP_FUNC(0x80276EF0)(rdram, ctx);
        goto after_8;
    // 0x8006CEDC: sw          $v0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r2;
    after_8:
    // 0x8006CEE0: lw          $v1, 0x28($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X28);
    // 0x8006CEE4: nop

L_8006CEE8:
    // 0x8006CEE8: addiu       $at, $zero, 0x7
    ctx->r1 = ADD32(0, 0X7);
    // 0x8006CEEC: beq         $v1, $at, L_8006CF04
    if (ctx->r3 == ctx->r1) {
        // 0x8006CEF0: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_8006CF04;
    }
    // 0x8006CEF0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8006CEF4: jal         0x8006B5C0
    // 0x8006CEF8: sw          $v1, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r3;
    func_8006B5C0(rdram, ctx);
        goto after_9;
    // 0x8006CEF8: sw          $v1, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r3;
    after_9:
    // 0x8006CEFC: lw          $v1, 0x28($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X28);
    // 0x8006CF00: nop

L_8006CF04:
    // 0x8006CF04: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8006CF08: bne         $v1, $at, L_8006CF38
    if (ctx->r3 != ctx->r1) {
        // 0x8006CF0C: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_8006CF38;
    }
    // 0x8006CF0C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8006CF10: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x8006CF14: lwc1        $f18, 0x8C($s0)
    ctx->f18.u32l = MEM_W(ctx->r16, 0X8C);
    // 0x8006CF18: lwc1        $f7, -0x5800($at)
    ctx->f_odd[(7 - 1) * 2] = MEM_W(ctx->r1, -0X5800);
    // 0x8006CF1C: lwc1        $f6, -0x57FC($at)
    ctx->f6.u32l = MEM_W(ctx->r1, -0X57FC);
    // 0x8006CF20: cvt.d.s     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.fl); 
    ctx->f4.d = CVT_D_S(ctx->f18.fl);
    // 0x8006CF24: add.d       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f6.d); 
    ctx->f8.d = ctx->f4.d + ctx->f6.d;
    // 0x8006CF28: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x8006CF2C: cvt.s.d     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.d); 
    ctx->f10.fl = CVT_S_D(ctx->f8.d);
    // 0x8006CF30: jal         0x8024BC08
    // 0x8006CF34: swc1        $f10, 0x8C($s0)
    MEM_W(0X8C, ctx->r16) = ctx->f10.u32l;
    LOOKUP_FUNC(0x8024BC08)(rdram, ctx);
        goto after_10;
    // 0x8006CF34: swc1        $f10, 0x8C($s0)
    MEM_W(0X8C, ctx->r16) = ctx->f10.u32l;
    after_10:
L_8006CF38:
    // 0x8006CF38: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_8006CF3C:
    // 0x8006CF3C: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8006CF40: jr          $ra
    // 0x8006CF44: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    return;
    // 0x8006CF44: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_8006CF48(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8006CF48: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x8006CF4C: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x8006CF50: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x8006CF54: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x8006CF58: jal         0x80274CFC
    // 0x8006CF5C: addiu       $a1, $zero, 0x96
    ctx->r5 = ADD32(0, 0X96);
    LOOKUP_FUNC(0x80274CFC)(rdram, ctx);
        goto after_0;
    // 0x8006CF5C: addiu       $a1, $zero, 0x96
    ctx->r5 = ADD32(0, 0X96);
    after_0:
    // 0x8006CF60: lhu         $v1, 0x10($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X10);
    // 0x8006CF64: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8006CF68: beq         $v1, $zero, L_8006CF8C
    if (ctx->r3 == 0) {
        // 0x8006CF6C: or          $v0, $v1, $zero
        ctx->r2 = ctx->r3 | 0;
            goto L_8006CF8C;
    }
    // 0x8006CF6C: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    // 0x8006CF70: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8006CF74: beq         $v0, $at, L_8006D0A4
    if (ctx->r2 == ctx->r1) {
        // 0x8006CF78: addiu       $at, $zero, 0x2
        ctx->r1 = ADD32(0, 0X2);
            goto L_8006D0A4;
    }
    // 0x8006CF78: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x8006CF7C: beq         $v0, $at, L_8006D178
    if (ctx->r2 == ctx->r1) {
        // 0x8006CF80: nop
    
            goto L_8006D178;
    }
    // 0x8006CF80: nop

    // 0x8006CF84: b           L_8006D198
    // 0x8006CF88: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_8006D198;
    // 0x8006CF88: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_8006CF8C:
    // 0x8006CF8C: addiu       $t6, $v1, 0x1
    ctx->r14 = ADD32(ctx->r3, 0X1);
    // 0x8006CF90: sh          $t6, 0x10($s0)
    MEM_H(0X10, ctx->r16) = ctx->r14;
    // 0x8006CF94: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x8006CF98: jal         0x80067CFC
    // 0x8006CF9C: lui         $a2, 0x41B8
    ctx->r6 = S32(0X41B8 << 16);
    func_80067CFC(rdram, ctx);
        goto after_1;
    // 0x8006CF9C: lui         $a2, 0x41B8
    ctx->r6 = S32(0X41B8 << 16);
    after_1:
    // 0x8006CFA0: bgez        $v0, L_8006CFAC
    if (SIGNED(ctx->r2) >= 0) {
        // 0x8006CFA4: or          $v1, $v0, $zero
        ctx->r3 = ctx->r2 | 0;
            goto L_8006CFAC;
    }
    // 0x8006CFA4: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
    // 0x8006CFA8: addiu       $v1, $zero, 0x4
    ctx->r3 = ADD32(0, 0X4);
L_8006CFAC:
    // 0x8006CFAC: sltiu       $at, $v1, 0xC
    ctx->r1 = ctx->r3 < 0XC ? 1 : 0;
    // 0x8006CFB0: bne         $at, $zero, L_8006CFBC
    if (ctx->r1 != 0) {
        // 0x8006CFB4: lui         $a0, 0x802C
        ctx->r4 = S32(0X802C << 16);
            goto L_8006CFBC;
    }
    // 0x8006CFB4: lui         $a0, 0x802C
    ctx->r4 = S32(0X802C << 16);
    // 0x8006CFB8: addiu       $v1, $zero, 0xB
    ctx->r3 = ADD32(0, 0XB);
L_8006CFBC:
    // 0x8006CFBC: lw          $a1, 0xE0($s0)
    ctx->r5 = MEM_W(ctx->r16, 0XE0);
    // 0x8006CFC0: sw          $v1, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r3;
    // 0x8006CFC4: addiu       $a0, $a0, -0x60B8
    ctx->r4 = ADD32(ctx->r4, -0X60B8);
    // 0x8006CFC8: jal         0x80272CF8
    // 0x8006CFCC: addiu       $a2, $zero, 0x7
    ctx->r6 = ADD32(0, 0X7);
    LOOKUP_FUNC(0x80272CF8)(rdram, ctx);
        goto after_2;
    // 0x8006CFCC: addiu       $a2, $zero, 0x7
    ctx->r6 = ADD32(0, 0X7);
    after_2:
    // 0x8006CFD0: lw          $t7, 0xE0($s0)
    ctx->r15 = MEM_W(ctx->r16, 0XE0);
    // 0x8006CFD4: lw          $a3, 0x44($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X44);
    // 0x8006CFD8: lw          $t8, 0xC($t7)
    ctx->r24 = MEM_W(ctx->r15, 0XC);
    // 0x8006CFDC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8006CFE0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8006CFE4: addiu       $a2, $zero, 0x16
    ctx->r6 = ADD32(0, 0X16);
    // 0x8006CFE8: jal         0x8006A774
    // 0x8006CFEC: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    func_8006A774(rdram, ctx);
        goto after_3;
    // 0x8006CFEC: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    after_3:
    // 0x8006CFF0: lw          $t9, 0x44($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X44);
    // 0x8006CFF4: lui         $t1, 0x8012
    ctx->r9 = S32(0X8012 << 16);
    // 0x8006CFF8: sll         $t0, $t9, 2
    ctx->r8 = S32(ctx->r25 << 2);
    // 0x8006CFFC: subu        $t0, $t0, $t9
    ctx->r8 = SUB32(ctx->r8, ctx->r25);
    // 0x8006D000: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x8006D004: addiu       $t1, $t1, 0x680
    ctx->r9 = ADD32(ctx->r9, 0X680);
    // 0x8006D008: addu        $v1, $t0, $t1
    ctx->r3 = ADD32(ctx->r8, ctx->r9);
    // 0x8006D00C: lw          $a1, 0x8($v1)
    ctx->r5 = MEM_W(ctx->r3, 0X8);
    // 0x8006D010: lw          $a2, 0x0($v1)
    ctx->r6 = MEM_W(ctx->r3, 0X0);
    // 0x8006D014: sw          $v0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r2;
    // 0x8006D018: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8006D01C: jal         0x80272B98
    // 0x8006D020: addiu       $a3, $sp, 0x38
    ctx->r7 = ADD32(ctx->r29, 0X38);
    LOOKUP_FUNC(0x80272B98)(rdram, ctx);
        goto after_4;
    // 0x8006D020: addiu       $a3, $sp, 0x38
    ctx->r7 = ADD32(ctx->r29, 0X38);
    after_4:
    // 0x8006D024: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x8006D028: lwc1        $f2, 0x3C($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x8006D02C: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x8006D030: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x8006D034: sub.s       $f2, $f2, $f4
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f2.fl = ctx->f2.fl - ctx->f4.fl;
    // 0x8006D038: lw          $t2, 0x34($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X34);
    // 0x8006D03C: c.lt.s      $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f2.fl < ctx->f0.fl;
    // 0x8006D040: addiu       $t3, $zero, 0x16
    ctx->r11 = ADD32(0, 0X16);
    // 0x8006D044: bc1f        L_8006D050
    if (!c1cs) {
        // 0x8006D048: subu        $t4, $t3, $t2
        ctx->r12 = SUB32(ctx->r11, ctx->r10);
            goto L_8006D050;
    }
    // 0x8006D048: subu        $t4, $t3, $t2
    ctx->r12 = SUB32(ctx->r11, ctx->r10);
    // 0x8006D04C: mov.s       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.fl = ctx->f0.fl;
L_8006D050:
    // 0x8006D050: mtc1        $t4, $f6
    ctx->f6.u32l = ctx->r12;
    // 0x8006D054: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x8006D058: cvt.s.w     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.fl = CVT_S_W(ctx->f6.u32l);
    // 0x8006D05C: mtc1        $at, $f11
    ctx->f_odd[(11 - 1) * 2] = ctx->r1;
    // 0x8006D060: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x8006D064: div.s       $f0, $f2, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f0.fl = DIV_S(ctx->f2.fl, ctx->f8.fl);
    // 0x8006D068: lw          $a2, 0x38($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X38);
    // 0x8006D06C: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x8006D070: swc1        $f2, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f2.u32l;
    // 0x8006D074: cvt.d.s     $f16, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f16.d = CVT_D_S(ctx->f0.fl);
    // 0x8006D078: c.lt.d      $f10, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f10.d < ctx->f16.d;
    // 0x8006D07C: nop

    // 0x8006D080: bc1f        L_8006D090
    if (!c1cs) {
        // 0x8006D084: nop
    
            goto L_8006D090;
    }
    // 0x8006D084: nop

    // 0x8006D088: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x8006D08C: nop

L_8006D090:
    // 0x8006D090: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x8006D094: jal         0x80274C54
    // 0x8006D098: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    LOOKUP_FUNC(0x80274C54)(rdram, ctx);
        goto after_5;
    // 0x8006D098: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_5:
    // 0x8006D09C: b           L_8006D198
    // 0x8006D0A0: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_8006D198;
    // 0x8006D0A0: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_8006D0A4:
    // 0x8006D0A4: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x8006D0A8: lwc1        $f14, -0x57F8($at)
    ctx->f14.u32l = MEM_W(ctx->r1, -0X57F8);
    // 0x8006D0AC: lwc1        $f12, 0x7C($s0)
    ctx->f12.u32l = MEM_W(ctx->r16, 0X7C);
    // 0x8006D0B0: jal         0x80279520
    // 0x8006D0B4: addiu       $a2, $s0, 0x8C
    ctx->r6 = ADD32(ctx->r16, 0X8C);
    LOOKUP_FUNC(0x80279520)(rdram, ctx);
        goto after_6;
    // 0x8006D0B4: addiu       $a2, $s0, 0x8C
    ctx->r6 = ADD32(ctx->r16, 0X8C);
    after_6:
    // 0x8006D0B8: jal         0x80272C74
    // 0x8006D0BC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    LOOKUP_FUNC(0x80272C74)(rdram, ctx);
        goto after_7;
    // 0x8006D0BC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_7:
    // 0x8006D0C0: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x8006D0C4: bne         $v0, $at, L_8006D12C
    if (ctx->r2 != ctx->r1) {
        // 0x8006D0C8: lui         $at, 0x800E
        ctx->r1 = S32(0X800E << 16);
            goto L_8006D12C;
    }
    // 0x8006D0C8: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x8006D0CC: lwc1        $f18, 0x50($s0)
    ctx->f18.u32l = MEM_W(ctx->r16, 0X50);
    // 0x8006D0D0: lwc1        $f7, -0x57F0($at)
    ctx->f_odd[(7 - 1) * 2] = MEM_W(ctx->r1, -0X57F0);
    // 0x8006D0D4: lwc1        $f6, -0x57EC($at)
    ctx->f6.u32l = MEM_W(ctx->r1, -0X57EC);
    // 0x8006D0D8: cvt.d.s     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.fl); 
    ctx->f4.d = CVT_D_S(ctx->f18.fl);
    // 0x8006D0DC: sub.d       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f6.d); 
    ctx->f8.d = ctx->f4.d - ctx->f6.d;
    // 0x8006D0E0: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x8006D0E4: cvt.s.d     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.d); 
    ctx->f10.fl = CVT_S_D(ctx->f8.d);
    // 0x8006D0E8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8006D0EC: swc1        $f10, 0x50($s0)
    MEM_W(0X50, ctx->r16) = ctx->f10.u32l;
    // 0x8006D0F0: lwc1        $f16, 0x50($s0)
    ctx->f16.u32l = MEM_W(ctx->r16, 0X50);
    // 0x8006D0F4: lui         $a1, 0x8009
    ctx->r5 = S32(0X8009 << 16);
    // 0x8006D0F8: c.lt.s      $f16, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f16.fl < ctx->f0.fl;
    // 0x8006D0FC: nop

    // 0x8006D100: bc1f        L_8006D10C
    if (!c1cs) {
        // 0x8006D104: nop
    
            goto L_8006D10C;
    }
    // 0x8006D104: nop

    // 0x8006D108: swc1        $f0, 0x50($s0)
    MEM_W(0X50, ctx->r16) = ctx->f0.u32l;
L_8006D10C:
    // 0x8006D10C: lhu         $t5, 0x12($s0)
    ctx->r13 = MEM_HU(ctx->r16, 0X12);
    // 0x8006D110: nop

    // 0x8006D114: andi        $t6, $t5, 0x8000
    ctx->r14 = ctx->r13 & 0X8000;
    // 0x8006D118: bne         $t6, $zero, L_8006D12C
    if (ctx->r14 != 0) {
        // 0x8006D11C: nop
    
            goto L_8006D12C;
    }
    // 0x8006D11C: nop

    // 0x8006D120: mfc1        $a2, $f0
    ctx->r6 = (int32_t)ctx->f0.u32l;
    // 0x8006D124: jal         0x80276EF0
    // 0x8006D128: addiu       $a1, $a1, 0x45F8
    ctx->r5 = ADD32(ctx->r5, 0X45F8);
    LOOKUP_FUNC(0x80276EF0)(rdram, ctx);
        goto after_8;
    // 0x8006D128: addiu       $a1, $a1, 0x45F8
    ctx->r5 = ADD32(ctx->r5, 0X45F8);
    after_8:
L_8006D12C:
    // 0x8006D12C: lw          $a1, 0x50($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X50);
    // 0x8006D130: lw          $a2, 0x7C($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X7C);
    // 0x8006D134: jal         0x80274C54
    // 0x8006D138: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    LOOKUP_FUNC(0x80274C54)(rdram, ctx);
        goto after_9;
    // 0x8006D138: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_9:
    // 0x8006D13C: jal         0x8006B5C0
    // 0x8006D140: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8006B5C0(rdram, ctx);
        goto after_10;
    // 0x8006D140: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_10:
    // 0x8006D144: jal         0x80272C74
    // 0x8006D148: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    LOOKUP_FUNC(0x80272C74)(rdram, ctx);
        goto after_11;
    // 0x8006D148: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_11:
    // 0x8006D14C: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8006D150: bne         $v0, $at, L_8006D194
    if (ctx->r2 != ctx->r1) {
        // 0x8006D154: addiu       $t9, $zero, 0x8
        ctx->r25 = ADD32(0, 0X8);
            goto L_8006D194;
    }
    // 0x8006D154: addiu       $t9, $zero, 0x8
    ctx->r25 = ADD32(0, 0X8);
    // 0x8006D158: lhu         $t7, 0x10($s0)
    ctx->r15 = MEM_HU(ctx->r16, 0X10);
    // 0x8006D15C: sh          $t9, 0xE4($s0)
    MEM_H(0XE4, ctx->r16) = ctx->r25;
    // 0x8006D160: addiu       $t8, $t7, 0x1
    ctx->r24 = ADD32(ctx->r15, 0X1);
    // 0x8006D164: sh          $t8, 0x10($s0)
    MEM_H(0X10, ctx->r16) = ctx->r24;
    // 0x8006D168: jal         0x8006BBBC
    // 0x8006D16C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8006BBBC(rdram, ctx);
        goto after_12;
    // 0x8006D16C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_12:
    // 0x8006D170: b           L_8006D198
    // 0x8006D174: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_8006D198;
    // 0x8006D174: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_8006D178:
    // 0x8006D178: jal         0x80272C74
    // 0x8006D17C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    LOOKUP_FUNC(0x80272C74)(rdram, ctx);
        goto after_13;
    // 0x8006D17C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_13:
    // 0x8006D180: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8006D184: bne         $v0, $at, L_8006D194
    if (ctx->r2 != ctx->r1) {
        // 0x8006D188: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_8006D194;
    }
    // 0x8006D188: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8006D18C: jal         0x8024BC08
    // 0x8006D190: addiu       $a1, $zero, 0x21
    ctx->r5 = ADD32(0, 0X21);
    LOOKUP_FUNC(0x8024BC08)(rdram, ctx);
        goto after_14;
    // 0x8006D190: addiu       $a1, $zero, 0x21
    ctx->r5 = ADD32(0, 0X21);
    after_14:
L_8006D194:
    // 0x8006D194: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_8006D198:
    // 0x8006D198: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x8006D19C: jr          $ra
    // 0x8006D1A0: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    return;
    // 0x8006D1A0: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
;}
RECOMP_FUNC void func_8006D1A4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8006D1A4: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x8006D1A8: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8006D1AC: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8006D1B0: jal         0x80272C74
    // 0x8006D1B4: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    LOOKUP_FUNC(0x80272C74)(rdram, ctx);
        goto after_0;
    // 0x8006D1B4: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    after_0:
    // 0x8006D1B8: sw          $v0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r2;
    // 0x8006D1BC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8006D1C0: jal         0x80274CFC
    // 0x8006D1C4: addiu       $a1, $zero, 0x96
    ctx->r5 = ADD32(0, 0X96);
    LOOKUP_FUNC(0x80274CFC)(rdram, ctx);
        goto after_1;
    // 0x8006D1C4: addiu       $a1, $zero, 0x96
    ctx->r5 = ADD32(0, 0X96);
    after_1:
    // 0x8006D1C8: lhu         $v1, 0x10($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X10);
    // 0x8006D1CC: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x8006D1D0: beq         $v1, $zero, L_8006D1F4
    if (ctx->r3 == 0) {
        // 0x8006D1D4: or          $v0, $v1, $zero
        ctx->r2 = ctx->r3 | 0;
            goto L_8006D1F4;
    }
    // 0x8006D1D4: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    // 0x8006D1D8: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8006D1DC: beq         $v0, $at, L_8006D31C
    if (ctx->r2 == ctx->r1) {
        // 0x8006D1E0: addiu       $at, $zero, 0x2
        ctx->r1 = ADD32(0, 0X2);
            goto L_8006D31C;
    }
    // 0x8006D1E0: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x8006D1E4: beq         $v0, $at, L_8006D498
    if (ctx->r2 == ctx->r1) {
        // 0x8006D1E8: lw          $t7, 0x2C($sp)
        ctx->r15 = MEM_W(ctx->r29, 0X2C);
            goto L_8006D498;
    }
    // 0x8006D1E8: lw          $t7, 0x2C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X2C);
    // 0x8006D1EC: b           L_8006D4B0
    // 0x8006D1F0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_8006D4B0;
    // 0x8006D1F0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_8006D1F4:
    // 0x8006D1F4: addiu       $t6, $v1, 0x1
    ctx->r14 = ADD32(ctx->r3, 0X1);
    // 0x8006D1F8: sh          $t6, 0x10($s0)
    MEM_H(0X10, ctx->r16) = ctx->r14;
    // 0x8006D1FC: sh          $t7, 0xE4($s0)
    MEM_H(0XE4, ctx->r16) = ctx->r15;
    // 0x8006D200: lui         $v0, 0x8009
    ctx->r2 = S32(0X8009 << 16);
    // 0x8006D204: lw          $v0, 0x3B20($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X3B20);
    // 0x8006D208: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8006D20C: lw          $t8, 0x88($v0)
    ctx->r24 = MEM_W(ctx->r2, 0X88);
    // 0x8006D210: nop

    // 0x8006D214: bne         $t8, $zero, L_8006D264
    if (ctx->r24 != 0) {
        // 0x8006D218: nop
    
            goto L_8006D264;
    }
    // 0x8006D218: nop

    // 0x8006D21C: lbu         $t9, 0xBC($v0)
    ctx->r25 = MEM_BU(ctx->r2, 0XBC);
    // 0x8006D220: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x8006D224: bne         $t9, $at, L_8006D264
    if (ctx->r25 != ctx->r1) {
        // 0x8006D228: nop
    
            goto L_8006D264;
    }
    // 0x8006D228: nop

    // 0x8006D22C: lhu         $t0, 0x6A($v0)
    ctx->r8 = MEM_HU(ctx->r2, 0X6A);
    // 0x8006D230: addiu       $a3, $sp, 0x30
    ctx->r7 = ADD32(ctx->r29, 0X30);
    // 0x8006D234: slti        $at, $t0, 0x5
    ctx->r1 = SIGNED(ctx->r8) < 0X5 ? 1 : 0;
    // 0x8006D238: beq         $at, $zero, L_8006D264
    if (ctx->r1 == 0) {
        // 0x8006D23C: lui         $at, 0x4000
        ctx->r1 = S32(0X4000 << 16);
            goto L_8006D264;
    }
    // 0x8006D23C: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x8006D240: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x8006D244: lw          $a1, 0x4C($v0)
    ctx->r5 = MEM_W(ctx->r2, 0X4C);
    // 0x8006D248: lw          $a2, 0x44($v0)
    ctx->r6 = MEM_W(ctx->r2, 0X44);
    // 0x8006D24C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8006D250: jal         0x80272B98
    // 0x8006D254: swc1        $f0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f0.u32l;
    LOOKUP_FUNC(0x80272B98)(rdram, ctx);
        goto after_2;
    // 0x8006D254: swc1        $f0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f0.u32l;
    after_2:
    // 0x8006D258: lwc1        $f0, 0x38($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X38);
    // 0x8006D25C: b           L_8006D2C0
    // 0x8006D260: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
        goto L_8006D2C0;
    // 0x8006D260: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
L_8006D264:
    // 0x8006D264: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x8006D268: addiu       $v0, $v0, 0x680
    ctx->r2 = ADD32(ctx->r2, 0X680);
    // 0x8006D26C: lw          $a1, 0x38($v0)
    ctx->r5 = MEM_W(ctx->r2, 0X38);
    // 0x8006D270: lw          $a2, 0x30($v0)
    ctx->r6 = MEM_W(ctx->r2, 0X30);
    // 0x8006D274: jal         0x80272B98
    // 0x8006D278: addiu       $a3, $sp, 0x30
    ctx->r7 = ADD32(ctx->r29, 0X30);
    LOOKUP_FUNC(0x80272B98)(rdram, ctx);
        goto after_3;
    // 0x8006D278: addiu       $a3, $sp, 0x30
    ctx->r7 = ADD32(ctx->r29, 0X30);
    after_3:
    // 0x8006D27C: addiu       $t1, $zero, 0x4
    ctx->r9 = ADD32(0, 0X4);
    // 0x8006D280: mtc1        $t1, $f6
    ctx->f6.u32l = ctx->r9;
    // 0x8006D284: lwc1        $f4, 0x34($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X34);
    // 0x8006D288: cvt.s.w     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.fl = CVT_S_W(ctx->f6.u32l);
    // 0x8006D28C: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x8006D290: mtc1        $at, $f11
    ctx->f_odd[(11 - 1) * 2] = ctx->r1;
    // 0x8006D294: div.s       $f0, $f4, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f0.fl = DIV_S(ctx->f4.fl, ctx->f8.fl);
    // 0x8006D298: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x8006D29C: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x8006D2A0: cvt.d.s     $f16, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f16.d = CVT_D_S(ctx->f0.fl);
    // 0x8006D2A4: c.lt.d      $f10, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f10.d < ctx->f16.d;
    // 0x8006D2A8: nop

    // 0x8006D2AC: bc1f        L_8006D2BC
    if (!c1cs) {
        // 0x8006D2B0: nop
    
            goto L_8006D2BC;
    }
    // 0x8006D2B0: nop

    // 0x8006D2B4: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x8006D2B8: nop

L_8006D2BC:
    // 0x8006D2BC: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
L_8006D2C0:
    // 0x8006D2C0: lw          $a2, 0x30($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X30);
    // 0x8006D2C4: jal         0x80274C54
    // 0x8006D2C8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    LOOKUP_FUNC(0x80274C54)(rdram, ctx);
        goto after_4;
    // 0x8006D2C8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_4:
    // 0x8006D2CC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8006D2D0: addiu       $a1, $zero, 0x121
    ctx->r5 = ADD32(0, 0X121);
    // 0x8006D2D4: jal         0x80272D3C
    // 0x8006D2D8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    LOOKUP_FUNC(0x80272D3C)(rdram, ctx);
        goto after_5;
    // 0x8006D2D8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_5:
    // 0x8006D2DC: addiu       $t2, $zero, 0x11E
    ctx->r10 = ADD32(0, 0X11E);
    // 0x8006D2E0: lwc1        $f12, 0x8C($s0)
    ctx->f12.u32l = MEM_W(ctx->r16, 0X8C);
    // 0x8006D2E4: lwc1        $f14, 0x7C($s0)
    ctx->f14.u32l = MEM_W(ctx->r16, 0X7C);
    // 0x8006D2E8: jal         0x80279308
    // 0x8006D2EC: sh          $t2, 0xE6($s0)
    MEM_H(0XE6, ctx->r16) = ctx->r10;
    LOOKUP_FUNC(0x80279308)(rdram, ctx);
        goto after_6;
    // 0x8006D2EC: sh          $t2, 0xE6($s0)
    MEM_H(0XE6, ctx->r16) = ctx->r10;
    after_6:
    // 0x8006D2F0: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x8006D2F4: lwc1        $f19, -0x57E8($at)
    ctx->f_odd[(19 - 1) * 2] = MEM_W(ctx->r1, -0X57E8);
    // 0x8006D2F8: lwc1        $f18, -0x57E4($at)
    ctx->f18.u32l = MEM_W(ctx->r1, -0X57E4);
    // 0x8006D2FC: cvt.d.s     $f6, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f6.d = CVT_D_S(ctx->f0.fl);
    // 0x8006D300: c.lt.d      $f18, $f6
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f18.d < ctx->f6.d;
    // 0x8006D304: nop

    // 0x8006D308: bc1f        L_8006D4B0
    if (!c1cs) {
        // 0x8006D30C: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_8006D4B0;
    }
    // 0x8006D30C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8006D310: lwc1        $f4, 0x7C($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X7C);
    // 0x8006D314: b           L_8006D4AC
    // 0x8006D318: swc1        $f4, 0x8C($s0)
    MEM_W(0X8C, ctx->r16) = ctx->f4.u32l;
        goto L_8006D4AC;
    // 0x8006D318: swc1        $f4, 0x8C($s0)
    MEM_W(0X8C, ctx->r16) = ctx->f4.u32l;
L_8006D31C:
    // 0x8006D31C: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x8006D320: lwc1        $f14, -0x57E0($at)
    ctx->f14.u32l = MEM_W(ctx->r1, -0X57E0);
    // 0x8006D324: lwc1        $f12, 0x7C($s0)
    ctx->f12.u32l = MEM_W(ctx->r16, 0X7C);
    // 0x8006D328: jal         0x80279520
    // 0x8006D32C: addiu       $a2, $s0, 0x8C
    ctx->r6 = ADD32(ctx->r16, 0X8C);
    LOOKUP_FUNC(0x80279520)(rdram, ctx);
        goto after_7;
    // 0x8006D32C: addiu       $a2, $s0, 0x8C
    ctx->r6 = ADD32(ctx->r16, 0X8C);
    after_7:
    // 0x8006D330: lw          $a0, 0xCC($s0)
    ctx->r4 = MEM_W(ctx->r16, 0XCC);
    // 0x8006D334: jal         0x80001218
    // 0x8006D338: nop

    func_80001218(rdram, ctx);
        goto after_8;
    // 0x8006D338: nop

    after_8:
    // 0x8006D33C: lw          $t3, 0x2C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X2C);
    // 0x8006D340: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x8006D344: beq         $t3, $zero, L_8006D390
    if (ctx->r11 == 0) {
        // 0x8006D348: nop
    
            goto L_8006D390;
    }
    // 0x8006D348: nop

    // 0x8006D34C: lwc1        $f8, 0x50($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X50);
    // 0x8006D350: lwc1        $f17, -0x57D8($at)
    ctx->f_odd[(17 - 1) * 2] = MEM_W(ctx->r1, -0X57D8);
    // 0x8006D354: lwc1        $f16, -0x57D4($at)
    ctx->f16.u32l = MEM_W(ctx->r1, -0X57D4);
    // 0x8006D358: cvt.d.s     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f10.d = CVT_D_S(ctx->f8.fl);
    // 0x8006D35C: sub.d       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f16.d); 
    ctx->f18.d = ctx->f10.d - ctx->f16.d;
    // 0x8006D360: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x8006D364: cvt.s.d     $f6, $f18
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.d); 
    ctx->f6.fl = CVT_S_D(ctx->f18.d);
    // 0x8006D368: swc1        $f6, 0x50($s0)
    MEM_W(0X50, ctx->r16) = ctx->f6.u32l;
    // 0x8006D36C: lwc1        $f4, 0x50($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X50);
    // 0x8006D370: nop

    // 0x8006D374: c.lt.s      $f4, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f4.fl < ctx->f8.fl;
    // 0x8006D378: nop

    // 0x8006D37C: bc1f        L_8006D390
    if (!c1cs) {
        // 0x8006D380: nop
    
            goto L_8006D390;
    }
    // 0x8006D380: nop

    // 0x8006D384: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x8006D388: nop

    // 0x8006D38C: swc1        $f10, 0x50($s0)
    MEM_W(0X50, ctx->r16) = ctx->f10.u32l;
L_8006D390:
    // 0x8006D390: lw          $a1, 0x50($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X50);
    // 0x8006D394: lw          $a2, 0x7C($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X7C);
    // 0x8006D398: jal         0x80274C54
    // 0x8006D39C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    LOOKUP_FUNC(0x80274C54)(rdram, ctx);
        goto after_9;
    // 0x8006D39C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_9:
    // 0x8006D3A0: jal         0x8006B5C0
    // 0x8006D3A4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8006B5C0(rdram, ctx);
        goto after_10;
    // 0x8006D3A4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_10:
    // 0x8006D3A8: lw          $t4, 0x2C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X2C);
    // 0x8006D3AC: addiu       $at, $zero, 0x14
    ctx->r1 = ADD32(0, 0X14);
    // 0x8006D3B0: bne         $t4, $at, L_8006D460
    if (ctx->r12 != ctx->r1) {
        // 0x8006D3B4: lw          $t4, 0x2C($sp)
        ctx->r12 = MEM_W(ctx->r29, 0X2C);
            goto L_8006D460;
    }
    // 0x8006D3B4: lw          $t4, 0x2C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X2C);
    // 0x8006D3B8: lhu         $t5, 0x10($s0)
    ctx->r13 = MEM_HU(ctx->r16, 0X10);
    // 0x8006D3BC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8006D3C0: addiu       $t6, $t5, 0x1
    ctx->r14 = ADD32(ctx->r13, 0X1);
    // 0x8006D3C4: jal         0x8006BBBC
    // 0x8006D3C8: sh          $t6, 0x10($s0)
    MEM_H(0X10, ctx->r16) = ctx->r14;
    func_8006BBBC(rdram, ctx);
        goto after_11;
    // 0x8006D3C8: sh          $t6, 0x10($s0)
    MEM_H(0X10, ctx->r16) = ctx->r14;
    after_11:
    // 0x8006D3CC: lw          $t7, 0xC8($s0)
    ctx->r15 = MEM_W(ctx->r16, 0XC8);
    // 0x8006D3D0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8006D3D4: lh          $t8, 0x8B8($t7)
    ctx->r24 = MEM_H(ctx->r15, 0X8B8);
    // 0x8006D3D8: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x8006D3DC: mtc1        $t8, $f16
    ctx->f16.u32l = ctx->r24;
    // 0x8006D3E0: addiu       $a3, $sp, 0x30
    ctx->r7 = ADD32(ctx->r29, 0X30);
    // 0x8006D3E4: cvt.s.w     $f16, $f16
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    ctx->f16.fl = CVT_S_W(ctx->f16.u32l);
    // 0x8006D3E8: mfc1        $a1, $f16
    ctx->r5 = (int32_t)ctx->f16.u32l;
    // 0x8006D3EC: jal         0x80272B98
    // 0x8006D3F0: nop

    LOOKUP_FUNC(0x80272B98)(rdram, ctx);
        goto after_12;
    // 0x8006D3F0: nop

    after_12:
    // 0x8006D3F4: lui         $t9, 0x8009
    ctx->r25 = S32(0X8009 << 16);
    // 0x8006D3F8: lw          $t9, 0x3B20($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X3B20);
    // 0x8006D3FC: lwc1        $f6, 0x34($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X34);
    // 0x8006D400: lw          $t0, 0x84($t9)
    ctx->r8 = MEM_W(ctx->r25, 0X84);
    // 0x8006D404: lui         $at, 0x4270
    ctx->r1 = S32(0X4270 << 16);
    // 0x8006D408: beq         $s0, $t0, L_8006D4B0
    if (ctx->r16 == ctx->r8) {
        // 0x8006D40C: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_8006D4B0;
    }
    // 0x8006D40C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8006D410: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x8006D414: lui         $t1, 0x8012
    ctx->r9 = S32(0X8012 << 16);
    // 0x8006D418: c.lt.s      $f18, $f6
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f18.fl < ctx->f6.fl;
    // 0x8006D41C: nop

    // 0x8006D420: bc1f        L_8006D4B0
    if (!c1cs) {
        // 0x8006D424: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_8006D4B0;
    }
    // 0x8006D424: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8006D428: lhu         $t1, 0xB78($t1)
    ctx->r9 = MEM_HU(ctx->r9, 0XB78);
    // 0x8006D42C: nop

    // 0x8006D430: bne         $t1, $zero, L_8006D4B0
    if (ctx->r9 != 0) {
        // 0x8006D434: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_8006D4B0;
    }
    // 0x8006D434: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8006D438: lhu         $t2, 0x14($s0)
    ctx->r10 = MEM_HU(ctx->r16, 0X14);
    // 0x8006D43C: nop

    // 0x8006D440: andi        $t3, $t2, 0x800
    ctx->r11 = ctx->r10 & 0X800;
    // 0x8006D444: bne         $t3, $zero, L_8006D4B0
    if (ctx->r11 != 0) {
        // 0x8006D448: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_8006D4B0;
    }
    // 0x8006D448: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8006D44C: jal         0x80077BC4
    // 0x8006D450: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80077BC4(rdram, ctx);
        goto after_13;
    // 0x8006D450: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_13:
    // 0x8006D454: b           L_8006D4B0
    // 0x8006D458: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_8006D4B0;
    // 0x8006D458: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8006D45C: lw          $t4, 0x2C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X2C);
L_8006D460:
    // 0x8006D460: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x8006D464: beq         $t4, $at, L_8006D4B0
    if (ctx->r12 == ctx->r1) {
        // 0x8006D468: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_8006D4B0;
    }
    // 0x8006D468: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8006D46C: lhu         $t5, 0x12($s0)
    ctx->r13 = MEM_HU(ctx->r16, 0X12);
    // 0x8006D470: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8006D474: andi        $t6, $t5, 0x8000
    ctx->r14 = ctx->r13 & 0X8000;
    // 0x8006D478: bne         $t6, $zero, L_8006D4AC
    if (ctx->r14 != 0) {
        // 0x8006D47C: lui         $a1, 0x8009
        ctx->r5 = S32(0X8009 << 16);
            goto L_8006D4AC;
    }
    // 0x8006D47C: lui         $a1, 0x8009
    ctx->r5 = S32(0X8009 << 16);
    // 0x8006D480: addiu       $a1, $a1, 0x45C0
    ctx->r5 = ADD32(ctx->r5, 0X45C0);
    // 0x8006D484: jal         0x80276EF0
    // 0x8006D488: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    LOOKUP_FUNC(0x80276EF0)(rdram, ctx);
        goto after_14;
    // 0x8006D488: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    after_14:
    // 0x8006D48C: b           L_8006D4B0
    // 0x8006D490: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_8006D4B0;
    // 0x8006D490: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8006D494: lw          $t7, 0x2C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X2C);
L_8006D498:
    // 0x8006D498: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8006D49C: bne         $t7, $at, L_8006D4AC
    if (ctx->r15 != ctx->r1) {
        // 0x8006D4A0: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_8006D4AC;
    }
    // 0x8006D4A0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8006D4A4: jal         0x8024BC08
    // 0x8006D4A8: addiu       $a1, $zero, 0x21
    ctx->r5 = ADD32(0, 0X21);
    LOOKUP_FUNC(0x8024BC08)(rdram, ctx);
        goto after_15;
    // 0x8006D4A8: addiu       $a1, $zero, 0x21
    ctx->r5 = ADD32(0, 0X21);
    after_15:
L_8006D4AC:
    // 0x8006D4AC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_8006D4B0:
    // 0x8006D4B0: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8006D4B4: jr          $ra
    // 0x8006D4B8: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    return;
    // 0x8006D4B8: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
RECOMP_FUNC void func_8006D4BC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8006D4BC: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8006D4C0: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8006D4C4: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8006D4C8: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x8006D4CC: jal         0x80274CFC
    // 0x8006D4D0: addiu       $a1, $zero, 0x96
    ctx->r5 = ADD32(0, 0X96);
    LOOKUP_FUNC(0x80274CFC)(rdram, ctx);
        goto after_0;
    // 0x8006D4D0: addiu       $a1, $zero, 0x96
    ctx->r5 = ADD32(0, 0X96);
    after_0:
    // 0x8006D4D4: lhu         $v1, 0x10($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X10);
    // 0x8006D4D8: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x8006D4DC: beq         $v1, $zero, L_8006D4F8
    if (ctx->r3 == 0) {
        // 0x8006D4E0: or          $v0, $v1, $zero
        ctx->r2 = ctx->r3 | 0;
            goto L_8006D4F8;
    }
    // 0x8006D4E0: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    // 0x8006D4E4: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8006D4E8: beq         $v0, $at, L_8006D544
    if (ctx->r2 == ctx->r1) {
        // 0x8006D4EC: nop
    
            goto L_8006D544;
    }
    // 0x8006D4EC: nop

    // 0x8006D4F0: b           L_8006D608
    // 0x8006D4F4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_8006D608;
    // 0x8006D4F4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_8006D4F8:
    // 0x8006D4F8: addiu       $t6, $v1, 0x1
    ctx->r14 = ADD32(ctx->r3, 0X1);
    // 0x8006D4FC: sh          $t6, 0x10($s0)
    MEM_H(0X10, ctx->r16) = ctx->r14;
    // 0x8006D500: lwc1        $f4, 0x88($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X88);
    // 0x8006D504: lwc1        $f8, -0x57CC($at)
    ctx->f8.u32l = MEM_W(ctx->r1, -0X57CC);
    // 0x8006D508: lwc1        $f9, -0x57D0($at)
    ctx->f_odd[(9 - 1) * 2] = MEM_W(ctx->r1, -0X57D0);
    // 0x8006D50C: cvt.d.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.d = CVT_D_S(ctx->f4.fl);
    // 0x8006D510: add.d       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f8.d); 
    ctx->f10.d = ctx->f6.d + ctx->f8.d;
    // 0x8006D514: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8006D518: cvt.s.d     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f16.fl = CVT_S_D(ctx->f10.d);
    // 0x8006D51C: lui         $a1, 0x3FC0
    ctx->r5 = S32(0X3FC0 << 16);
    // 0x8006D520: mfc1        $a2, $f16
    ctx->r6 = (int32_t)ctx->f16.u32l;
    // 0x8006D524: jal         0x80274C54
    // 0x8006D528: nop

    LOOKUP_FUNC(0x80274C54)(rdram, ctx);
        goto after_1;
    // 0x8006D528: nop

    after_1:
    // 0x8006D52C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8006D530: addiu       $a1, $zero, 0x132
    ctx->r5 = ADD32(0, 0X132);
    // 0x8006D534: jal         0x80272D3C
    // 0x8006D538: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    LOOKUP_FUNC(0x80272D3C)(rdram, ctx);
        goto after_2;
    // 0x8006D538: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_2:
    // 0x8006D53C: b           L_8006D608
    // 0x8006D540: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_8006D608;
    // 0x8006D540: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_8006D544:
    // 0x8006D544: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x8006D548: lwc1        $f14, -0x57C8($at)
    ctx->f14.u32l = MEM_W(ctx->r1, -0X57C8);
    // 0x8006D54C: lwc1        $f12, 0x7C($s0)
    ctx->f12.u32l = MEM_W(ctx->r16, 0X7C);
    // 0x8006D550: jal         0x80279520
    // 0x8006D554: addiu       $a2, $s0, 0x8C
    ctx->r6 = ADD32(ctx->r16, 0X8C);
    LOOKUP_FUNC(0x80279520)(rdram, ctx);
        goto after_3;
    // 0x8006D554: addiu       $a2, $s0, 0x8C
    ctx->r6 = ADD32(ctx->r16, 0X8C);
    after_3:
    // 0x8006D558: lhu         $t7, 0x12($s0)
    ctx->r15 = MEM_HU(ctx->r16, 0X12);
    // 0x8006D55C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8006D560: andi        $t8, $t7, 0x8000
    ctx->r24 = ctx->r15 & 0X8000;
    // 0x8006D564: bne         $t8, $zero, L_8006D578
    if (ctx->r24 != 0) {
        // 0x8006D568: lui         $a1, 0x8009
        ctx->r5 = S32(0X8009 << 16);
            goto L_8006D578;
    }
    // 0x8006D568: lui         $a1, 0x8009
    ctx->r5 = S32(0X8009 << 16);
    // 0x8006D56C: addiu       $a1, $a1, 0x4600
    ctx->r5 = ADD32(ctx->r5, 0X4600);
    // 0x8006D570: jal         0x80276EF0
    // 0x8006D574: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    LOOKUP_FUNC(0x80276EF0)(rdram, ctx);
        goto after_4;
    // 0x8006D574: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    after_4:
L_8006D578:
    // 0x8006D578: jal         0x80272C74
    // 0x8006D57C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    LOOKUP_FUNC(0x80272C74)(rdram, ctx);
        goto after_5;
    // 0x8006D57C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_5:
    // 0x8006D580: addiu       $at, $zero, 0x7
    ctx->r1 = ADD32(0, 0X7);
    // 0x8006D584: bne         $v0, $at, L_8006D5D4
    if (ctx->r2 != ctx->r1) {
        // 0x8006D588: sw          $v0, 0x24($sp)
        MEM_W(0X24, ctx->r29) = ctx->r2;
            goto L_8006D5D4;
    }
    // 0x8006D588: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
    // 0x8006D58C: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x8006D590: lwc1        $f18, 0x50($s0)
    ctx->f18.u32l = MEM_W(ctx->r16, 0X50);
    // 0x8006D594: lwc1        $f7, -0x57C0($at)
    ctx->f_odd[(7 - 1) * 2] = MEM_W(ctx->r1, -0X57C0);
    // 0x8006D598: lwc1        $f6, -0x57BC($at)
    ctx->f6.u32l = MEM_W(ctx->r1, -0X57BC);
    // 0x8006D59C: cvt.d.s     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.fl); 
    ctx->f4.d = CVT_D_S(ctx->f18.fl);
    // 0x8006D5A0: sub.d       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f6.d); 
    ctx->f8.d = ctx->f4.d - ctx->f6.d;
    // 0x8006D5A4: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x8006D5A8: cvt.s.d     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.d); 
    ctx->f10.fl = CVT_S_D(ctx->f8.d);
    // 0x8006D5AC: swc1        $f10, 0x50($s0)
    MEM_W(0X50, ctx->r16) = ctx->f10.u32l;
    // 0x8006D5B0: lwc1        $f16, 0x50($s0)
    ctx->f16.u32l = MEM_W(ctx->r16, 0X50);
    // 0x8006D5B4: nop

    // 0x8006D5B8: c.lt.s      $f16, $f18
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f16.fl < ctx->f18.fl;
    // 0x8006D5BC: nop

    // 0x8006D5C0: bc1f        L_8006D5D4
    if (!c1cs) {
        // 0x8006D5C4: nop
    
            goto L_8006D5D4;
    }
    // 0x8006D5C4: nop

    // 0x8006D5C8: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x8006D5CC: nop

    // 0x8006D5D0: swc1        $f4, 0x50($s0)
    MEM_W(0X50, ctx->r16) = ctx->f4.u32l;
L_8006D5D4:
    // 0x8006D5D4: lw          $a1, 0x50($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X50);
    // 0x8006D5D8: lw          $a2, 0x7C($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X7C);
    // 0x8006D5DC: jal         0x80274C54
    // 0x8006D5E0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    LOOKUP_FUNC(0x80274C54)(rdram, ctx);
        goto after_6;
    // 0x8006D5E0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_6:
    // 0x8006D5E4: jal         0x80275588
    // 0x8006D5E8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    LOOKUP_FUNC(0x80275588)(rdram, ctx);
        goto after_7;
    // 0x8006D5E8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_7:
    // 0x8006D5EC: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    // 0x8006D5F0: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8006D5F4: bne         $t9, $at, L_8006D604
    if (ctx->r25 != ctx->r1) {
        // 0x8006D5F8: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_8006D604;
    }
    // 0x8006D5F8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8006D5FC: jal         0x8024BC08
    // 0x8006D600: addiu       $a1, $zero, 0x21
    ctx->r5 = ADD32(0, 0X21);
    LOOKUP_FUNC(0x8024BC08)(rdram, ctx);
        goto after_8;
    // 0x8006D600: addiu       $a1, $zero, 0x21
    ctx->r5 = ADD32(0, 0X21);
    after_8:
L_8006D604:
    // 0x8006D604: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_8006D608:
    // 0x8006D608: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8006D60C: jr          $ra
    // 0x8006D610: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x8006D610: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x8006D614: nop

    // 0x8006D618: nop

    // 0x8006D61C: nop

;}
RECOMP_FUNC void func_8006D620(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8006D620: lb          $v0, 0x2E($a0)
    ctx->r2 = MEM_B(ctx->r4, 0X2E);
    // 0x8006D624: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8006D628: beq         $v0, $zero, L_8006D640
    if (ctx->r2 == 0) {
        // 0x8006D62C: nop
    
            goto L_8006D640;
    }
    // 0x8006D62C: nop

    // 0x8006D630: beq         $v0, $at, L_8006D654
    if (ctx->r2 == ctx->r1) {
        // 0x8006D634: nop
    
            goto L_8006D654;
    }
    // 0x8006D634: nop

    // 0x8006D638: jr          $ra
    // 0x8006D63C: nop

    return;
    // 0x8006D63C: nop

L_8006D640:
    // 0x8006D640: lhu         $t6, 0x1C($a1)
    ctx->r14 = MEM_HU(ctx->r5, 0X1C);
    // 0x8006D644: nop

    // 0x8006D648: andi        $t7, $t6, 0xFFBF
    ctx->r15 = ctx->r14 & 0XFFBF;
    // 0x8006D64C: jr          $ra
    // 0x8006D650: sh          $t7, 0x1C($a1)
    MEM_H(0X1C, ctx->r5) = ctx->r15;
    return;
    // 0x8006D650: sh          $t7, 0x1C($a1)
    MEM_H(0X1C, ctx->r5) = ctx->r15;
L_8006D654:
    // 0x8006D654: lhu         $t8, 0x1C($a1)
    ctx->r24 = MEM_HU(ctx->r5, 0X1C);
    // 0x8006D658: nop

    // 0x8006D65C: ori         $t9, $t8, 0x40
    ctx->r25 = ctx->r24 | 0X40;
    // 0x8006D660: sh          $t9, 0x1C($a1)
    MEM_H(0X1C, ctx->r5) = ctx->r25;
    // 0x8006D664: jr          $ra
    // 0x8006D668: nop

    return;
    // 0x8006D668: nop

;}
RECOMP_FUNC void func_8006D66C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8006D66C: lb          $v0, 0x2E($a0)
    ctx->r2 = MEM_B(ctx->r4, 0X2E);
    // 0x8006D670: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8006D674: beq         $v0, $zero, L_8006D68C
    if (ctx->r2 == 0) {
        // 0x8006D678: nop
    
            goto L_8006D68C;
    }
    // 0x8006D678: nop

    // 0x8006D67C: beq         $v0, $at, L_8006D6A0
    if (ctx->r2 == ctx->r1) {
        // 0x8006D680: nop
    
            goto L_8006D6A0;
    }
    // 0x8006D680: nop

    // 0x8006D684: jr          $ra
    // 0x8006D688: nop

    return;
    // 0x8006D688: nop

L_8006D68C:
    // 0x8006D68C: lhu         $t6, 0x1C($a1)
    ctx->r14 = MEM_HU(ctx->r5, 0X1C);
    // 0x8006D690: nop

    // 0x8006D694: ori         $t7, $t6, 0x40
    ctx->r15 = ctx->r14 | 0X40;
    // 0x8006D698: jr          $ra
    // 0x8006D69C: sh          $t7, 0x1C($a1)
    MEM_H(0X1C, ctx->r5) = ctx->r15;
    return;
    // 0x8006D69C: sh          $t7, 0x1C($a1)
    MEM_H(0X1C, ctx->r5) = ctx->r15;
L_8006D6A0:
    // 0x8006D6A0: lhu         $t8, 0x1C($a1)
    ctx->r24 = MEM_HU(ctx->r5, 0X1C);
    // 0x8006D6A4: nop

    // 0x8006D6A8: andi        $t9, $t8, 0xFFBF
    ctx->r25 = ctx->r24 & 0XFFBF;
    // 0x8006D6AC: sh          $t9, 0x1C($a1)
    MEM_H(0X1C, ctx->r5) = ctx->r25;
    // 0x8006D6B0: jr          $ra
    // 0x8006D6B4: nop

    return;
    // 0x8006D6B4: nop

;}
RECOMP_FUNC void func_8006D6B8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8006D6B8: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x8006D6BC: addiu       $v0, $v0, -0x32B0
    ctx->r2 = ADD32(ctx->r2, -0X32B0);
    // 0x8006D6C0: lb          $t6, 0x44($v0)
    ctx->r14 = MEM_B(ctx->r2, 0X44);
    // 0x8006D6C4: lui         $t8, 0x8012
    ctx->r24 = S32(0X8012 << 16);
    // 0x8006D6C8: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x8006D6CC: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8006D6D0: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8006D6D4: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8006D6D8: sll         $t7, $t7, 3
    ctx->r15 = S32(ctx->r15 << 3);
    // 0x8006D6DC: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8006D6E0: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8006D6E4: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8006D6E8: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8006D6EC: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x8006D6F0: lhu         $t8, -0x2CE8($t8)
    ctx->r24 = MEM_HU(ctx->r24, -0X2CE8);
    // 0x8006D6F4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8006D6F8: andi        $t9, $t8, 0x200
    ctx->r25 = ctx->r24 & 0X200;
    // 0x8006D6FC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8006D700: beq         $t9, $zero, L_8006D720
    if (ctx->r25 == 0) {
        // 0x8006D704: sw          $a1, 0x1C($sp)
        MEM_W(0X1C, ctx->r29) = ctx->r5;
            goto L_8006D720;
    }
    // 0x8006D704: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x8006D708: lb          $t0, 0x45($v0)
    ctx->r8 = MEM_B(ctx->r2, 0X45);
    // 0x8006D70C: lui         $a2, 0x800B
    ctx->r6 = S32(0X800B << 16);
    // 0x8006D710: addu        $a2, $a2, $t0
    ctx->r6 = ADD32(ctx->r6, ctx->r8);
    // 0x8006D714: lbu         $a2, -0x1234($a2)
    ctx->r6 = MEM_BU(ctx->r6, -0X1234);
    // 0x8006D718: b           L_8006D738
    // 0x8006D71C: addiu       $a1, $zero, 0x7
    ctx->r5 = ADD32(0, 0X7);
        goto L_8006D738;
    // 0x8006D71C: addiu       $a1, $zero, 0x7
    ctx->r5 = ADD32(0, 0X7);
L_8006D720:
    // 0x8006D720: lb          $t1, 0x45($v0)
    ctx->r9 = MEM_B(ctx->r2, 0X45);
    // 0x8006D724: lui         $a2, 0x800B
    ctx->r6 = S32(0X800B << 16);
    // 0x8006D728: addu        $a2, $a2, $t1
    ctx->r6 = ADD32(ctx->r6, ctx->r9);
    // 0x8006D72C: lbu         $a2, -0x1260($a2)
    ctx->r6 = MEM_BU(ctx->r6, -0X1260);
    // 0x8006D730: nop

    // 0x8006D734: addiu       $a1, $zero, 0x7
    ctx->r5 = ADD32(0, 0X7);
L_8006D738:
    // 0x8006D738: jal         0x8002B608
    // 0x8006D73C: addiu       $a3, $zero, 0xFF
    ctx->r7 = ADD32(0, 0XFF);
    func_8002B608(rdram, ctx);
        goto after_0;
    // 0x8006D73C: addiu       $a3, $zero, 0xFF
    ctx->r7 = ADD32(0, 0XFF);
    after_0:
    // 0x8006D740: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8006D744: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8006D748: jr          $ra
    // 0x8006D74C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    return;
    // 0x8006D74C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
;}
RECOMP_FUNC void func_8006D750(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8006D750: lui         $t6, 0x8012
    ctx->r14 = S32(0X8012 << 16);
    // 0x8006D754: lb          $t6, -0x326C($t6)
    ctx->r14 = MEM_B(ctx->r14, -0X326C);
    // 0x8006D758: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x8006D75C: subu        $v1, $t7, $t6
    ctx->r3 = SUB32(ctx->r15, ctx->r14);
    // 0x8006D760: andi        $t8, $v1, 0xFF
    ctx->r24 = ctx->r3 & 0XFF;
    // 0x8006D764: sll         $t9, $t8, 2
    ctx->r25 = S32(ctx->r24 << 2);
    // 0x8006D768: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x8006D76C: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x8006D770: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x8006D774: sll         $t9, $t9, 3
    ctx->r25 = S32(ctx->r25 << 3);
    // 0x8006D778: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x8006D77C: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x8006D780: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x8006D784: lui         $t0, 0x8012
    ctx->r8 = S32(0X8012 << 16);
    // 0x8006D788: addiu       $t0, $t0, -0x2CF0
    ctx->r8 = ADD32(ctx->r8, -0X2CF0);
    // 0x8006D78C: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x8006D790: addu        $v0, $t9, $t0
    ctx->r2 = ADD32(ctx->r25, ctx->r8);
    // 0x8006D794: lhu         $t1, 0x8($v0)
    ctx->r9 = MEM_HU(ctx->r2, 0X8);
    // 0x8006D798: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8006D79C: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x8006D7A0: lbu         $a1, 0x0($v0)
    ctx->r5 = MEM_BU(ctx->r2, 0X0);
    // 0x8006D7A4: andi        $t2, $t1, 0x200
    ctx->r10 = ctx->r9 & 0X200;
    // 0x8006D7A8: beq         $t2, $zero, L_8006D7C4
    if (ctx->r10 == 0) {
        // 0x8006D7AC: sw          $ra, 0x14($sp)
        MEM_W(0X14, ctx->r29) = ctx->r31;
            goto L_8006D7C4;
    }
    // 0x8006D7AC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8006D7B0: lui         $a2, 0x800B
    ctx->r6 = S32(0X800B << 16);
    // 0x8006D7B4: addu        $a2, $a2, $a1
    ctx->r6 = ADD32(ctx->r6, ctx->r5);
    // 0x8006D7B8: lbu         $a2, -0x1234($a2)
    ctx->r6 = MEM_BU(ctx->r6, -0X1234);
    // 0x8006D7BC: b           L_8006D7D8
    // 0x8006D7C0: addiu       $a1, $zero, 0x7
    ctx->r5 = ADD32(0, 0X7);
        goto L_8006D7D8;
    // 0x8006D7C0: addiu       $a1, $zero, 0x7
    ctx->r5 = ADD32(0, 0X7);
L_8006D7C4:
    // 0x8006D7C4: lui         $a2, 0x800B
    ctx->r6 = S32(0X800B << 16);
    // 0x8006D7C8: addu        $a2, $a2, $a1
    ctx->r6 = ADD32(ctx->r6, ctx->r5);
    // 0x8006D7CC: lbu         $a2, -0x1260($a2)
    ctx->r6 = MEM_BU(ctx->r6, -0X1260);
    // 0x8006D7D0: nop

    // 0x8006D7D4: addiu       $a1, $zero, 0x7
    ctx->r5 = ADD32(0, 0X7);
L_8006D7D8:
    // 0x8006D7D8: jal         0x8002B608
    // 0x8006D7DC: addiu       $a3, $zero, 0xFF
    ctx->r7 = ADD32(0, 0XFF);
    func_8002B608(rdram, ctx);
        goto after_0;
    // 0x8006D7DC: addiu       $a3, $zero, 0xFF
    ctx->r7 = ADD32(0, 0XFF);
    after_0:
    // 0x8006D7E0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8006D7E4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8006D7E8: jr          $ra
    // 0x8006D7EC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    return;
    // 0x8006D7EC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
;}
RECOMP_FUNC void func_8006D7F0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8006D7F0: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8006D7F4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8006D7F8: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x8006D7FC: lhu         $t6, 0x1E($a1)
    ctx->r14 = MEM_HU(ctx->r5, 0X1E);
    // 0x8006D800: lui         $a1, 0x800B
    ctx->r5 = S32(0X800B << 16);
    // 0x8006D804: addiu       $a1, $a1, -0x1060
    ctx->r5 = ADD32(ctx->r5, -0X1060);
    // 0x8006D808: jal         0x8002B9DC
    // 0x8006D80C: sb          $t6, 0x1F($sp)
    MEM_B(0X1F, ctx->r29) = ctx->r14;
    func_8002B9DC(rdram, ctx);
        goto after_0;
    // 0x8006D80C: sb          $t6, 0x1F($sp)
    MEM_B(0X1F, ctx->r29) = ctx->r14;
    after_0:
    // 0x8006D810: lui         $a1, 0x8012
    ctx->r5 = S32(0X8012 << 16);
    // 0x8006D814: lbu         $a1, -0x326C($a1)
    ctx->r5 = MEM_BU(ctx->r5, -0X326C);
    // 0x8006D818: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x8006D81C: lbu         $a2, 0x1F($sp)
    ctx->r6 = MEM_BU(ctx->r29, 0X1F);
    // 0x8006D820: jal         0x8006D838
    // 0x8006D824: nop

    func_8006D838(rdram, ctx);
        goto after_1;
    // 0x8006D824: nop

    after_1:
    // 0x8006D828: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8006D82C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x8006D830: jr          $ra
    // 0x8006D834: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    return;
    // 0x8006D834: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
;}
RECOMP_FUNC void func_8006D838(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8006D838: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8006D83C: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x8006D840: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8006D844: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    // 0x8006D848: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8006D84C: lbu         $a1, 0x23($sp)
    ctx->r5 = MEM_BU(ctx->r29, 0X23);
    // 0x8006D850: lbu         $a0, 0x1F($sp)
    ctx->r4 = MEM_BU(ctx->r29, 0X1F);
    // 0x8006D854: jal         0x8004D78C
    // 0x8006D858: nop

    func_8004D78C(rdram, ctx);
        goto after_0;
    // 0x8006D858: nop

    after_0:
    // 0x8006D85C: sll         $t6, $v0, 2
    ctx->r14 = S32(ctx->r2 << 2);
    // 0x8006D860: lui         $a3, 0x800B
    ctx->r7 = S32(0X800B << 16);
    // 0x8006D864: addu        $a3, $a3, $t6
    ctx->r7 = ADD32(ctx->r7, ctx->r14);
    // 0x8006D868: lw          $a3, -0x1208($a3)
    ctx->r7 = MEM_W(ctx->r7, -0X1208);
    // 0x8006D86C: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x8006D870: addiu       $a1, $zero, 0x138
    ctx->r5 = ADD32(0, 0X138);
    // 0x8006D874: jal         0x8004CD24
    // 0x8006D878: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    func_8004CD24(rdram, ctx);
        goto after_1;
    // 0x8006D878: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_1:
    // 0x8006D87C: lbu         $a0, 0x1F($sp)
    ctx->r4 = MEM_BU(ctx->r29, 0X1F);
    // 0x8006D880: lbu         $a1, 0x23($sp)
    ctx->r5 = MEM_BU(ctx->r29, 0X23);
    // 0x8006D884: jal         0x8006D8EC
    // 0x8006D888: nop

    func_8006D8EC(rdram, ctx);
        goto after_2;
    // 0x8006D888: nop

    after_2:
    // 0x8006D88C: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8006D890: beq         $v0, $at, L_8006D8AC
    if (ctx->r2 == ctx->r1) {
        // 0x8006D894: addiu       $a1, $zero, 0x2
        ctx->r5 = ADD32(0, 0X2);
            goto L_8006D8AC;
    }
    // 0x8006D894: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x8006D898: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x8006D89C: jal         0x8002135C
    // 0x8006D8A0: addiu       $a2, $zero, 0xC8
    ctx->r6 = ADD32(0, 0XC8);
    func_8002135C(rdram, ctx);
        goto after_3;
    // 0x8006D8A0: addiu       $a2, $zero, 0xC8
    ctx->r6 = ADD32(0, 0XC8);
    after_3:
    // 0x8006D8A4: b           L_8006D8E0
    // 0x8006D8A8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_8006D8E0;
    // 0x8006D8A8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8006D8AC:
    // 0x8006D8AC: lbu         $t7, 0x1F($sp)
    ctx->r15 = MEM_BU(ctx->r29, 0X1F);
    // 0x8006D8B0: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x8006D8B4: bne         $t7, $zero, L_8006D8D4
    if (ctx->r15 != 0) {
        // 0x8006D8B8: addiu       $a1, $zero, 0x2
        ctx->r5 = ADD32(0, 0X2);
            goto L_8006D8D4;
    }
    // 0x8006D8B8: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x8006D8BC: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x8006D8C0: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x8006D8C4: jal         0x8002135C
    // 0x8006D8C8: addiu       $a2, $zero, 0xC6
    ctx->r6 = ADD32(0, 0XC6);
    func_8002135C(rdram, ctx);
        goto after_4;
    // 0x8006D8C8: addiu       $a2, $zero, 0xC6
    ctx->r6 = ADD32(0, 0XC6);
    after_4:
    // 0x8006D8CC: b           L_8006D8E0
    // 0x8006D8D0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_8006D8E0;
    // 0x8006D8D0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8006D8D4:
    // 0x8006D8D4: jal         0x8002135C
    // 0x8006D8D8: addiu       $a2, $zero, 0xC7
    ctx->r6 = ADD32(0, 0XC7);
    func_8002135C(rdram, ctx);
        goto after_5;
    // 0x8006D8D8: addiu       $a2, $zero, 0xC7
    ctx->r6 = ADD32(0, 0XC7);
    after_5:
    // 0x8006D8DC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8006D8E0:
    // 0x8006D8E0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8006D8E4: jr          $ra
    // 0x8006D8E8: nop

    return;
    // 0x8006D8E8: nop

;}
RECOMP_FUNC void func_8006D8EC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8006D8EC: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8006D8F0: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x8006D8F4: or          $a2, $a1, $zero
    ctx->r6 = ctx->r5 | 0;
    // 0x8006D8F8: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x8006D8FC: sll         $a1, $a2, 24
    ctx->r5 = S32(ctx->r6 << 24);
    // 0x8006D900: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8006D904: sra         $t6, $a1, 24
    ctx->r14 = S32(SIGNED(ctx->r5) >> 24);
    // 0x8006D908: lbu         $a0, 0x23($sp)
    ctx->r4 = MEM_BU(ctx->r29, 0X23);
    // 0x8006D90C: or          $a1, $t6, $zero
    ctx->r5 = ctx->r14 | 0;
    // 0x8006D910: jal         0x8006DCB0
    // 0x8006D914: sw          $t6, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r14;
    func_8006DCB0(rdram, ctx);
        goto after_0;
    // 0x8006D914: sw          $t6, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r14;
    after_0:
    // 0x8006D918: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8006D91C: beq         $v0, $at, L_8006D958
    if (ctx->r2 == ctx->r1) {
        // 0x8006D920: nop
    
            goto L_8006D958;
    }
    // 0x8006D920: nop

    // 0x8006D924: lbu         $a0, 0x23($sp)
    ctx->r4 = MEM_BU(ctx->r29, 0X23);
    // 0x8006D928: lb          $a1, 0x1F($sp)
    ctx->r5 = MEM_B(ctx->r29, 0X1F);
    // 0x8006D92C: jal         0x8006DD88
    // 0x8006D930: nop

    func_8006DD88(rdram, ctx);
        goto after_1;
    // 0x8006D930: nop

    after_1:
    // 0x8006D934: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8006D938: beq         $v0, $at, L_8006D958
    if (ctx->r2 == ctx->r1) {
        // 0x8006D93C: nop
    
            goto L_8006D958;
    }
    // 0x8006D93C: nop

    // 0x8006D940: lbu         $a0, 0x23($sp)
    ctx->r4 = MEM_BU(ctx->r29, 0X23);
    // 0x8006D944: lb          $a1, 0x1F($sp)
    ctx->r5 = MEM_B(ctx->r29, 0X1F);
    // 0x8006D948: jal         0x8006DDD0
    // 0x8006D94C: nop

    func_8006DDD0(rdram, ctx);
        goto after_2;
    // 0x8006D94C: nop

    after_2:
    // 0x8006D950: bne         $v0, $zero, L_8006D964
    if (ctx->r2 != 0) {
        // 0x8006D954: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_8006D964;
    }
    // 0x8006D954: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_8006D958:
    // 0x8006D958: b           L_8006D964
    // 0x8006D95C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_8006D964;
    // 0x8006D95C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x8006D960: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_8006D964:
    // 0x8006D964: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8006D968: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x8006D96C: jr          $ra
    // 0x8006D970: nop

    return;
    // 0x8006D970: nop

;}
RECOMP_FUNC void func_8006D974(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8006D974: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8006D978: sll         $t8, $a3, 24
    ctx->r24 = S32(ctx->r7 << 24);
    // 0x8006D97C: sra         $t9, $t8, 24
    ctx->r25 = S32(SIGNED(ctx->r24) >> 24);
    // 0x8006D980: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x8006D984: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    // 0x8006D988: andi        $t6, $a1, 0xFF
    ctx->r14 = ctx->r5 & 0XFF;
    // 0x8006D98C: andi        $t7, $a2, 0xFF
    ctx->r15 = ctx->r6 & 0XFF;
    // 0x8006D990: or          $a2, $t7, $zero
    ctx->r6 = ctx->r15 | 0;
    // 0x8006D994: or          $a1, $t6, $zero
    ctx->r5 = ctx->r14 | 0;
    // 0x8006D998: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8006D99C: bne         $t9, $zero, L_8006D9AC
    if (ctx->r25 != 0) {
        // 0x8006D9A0: sw          $a3, 0x24($sp)
        MEM_W(0X24, ctx->r29) = ctx->r7;
            goto L_8006D9AC;
    }
    // 0x8006D9A0: sw          $a3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r7;
    // 0x8006D9A4: b           L_8006D9B0
    // 0x8006D9A8: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
        goto L_8006D9B0;
    // 0x8006D9A8: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
L_8006D9AC:
    // 0x8006D9AC: addiu       $v1, $zero, -0x1
    ctx->r3 = ADD32(0, -0X1);
L_8006D9B0:
    // 0x8006D9B0: sll         $t6, $a2, 2
    ctx->r14 = S32(ctx->r6 << 2);
    // 0x8006D9B4: subu        $t6, $t6, $a2
    ctx->r14 = SUB32(ctx->r14, ctx->r6);
    // 0x8006D9B8: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x8006D9BC: subu        $t6, $t6, $a2
    ctx->r14 = SUB32(ctx->r14, ctx->r6);
    // 0x8006D9C0: addu        $t7, $t6, $a1
    ctx->r15 = ADD32(ctx->r14, ctx->r5);
    // 0x8006D9C4: lui         $a0, 0x800B
    ctx->r4 = S32(0X800B << 16);
    // 0x8006D9C8: addu        $a0, $a0, $t7
    ctx->r4 = ADD32(ctx->r4, ctx->r15);
    // 0x8006D9CC: lbu         $a0, -0x6AA4($a0)
    ctx->r4 = MEM_BU(ctx->r4, -0X6AA4);
    // 0x8006D9D0: addiu       $t9, $sp, 0x40
    ctx->r25 = ADD32(ctx->r29, 0X40);
    // 0x8006D9D4: sll         $t0, $a0, 1
    ctx->r8 = S32(ctx->r4 << 1);
    // 0x8006D9D8: addu        $t4, $t0, $t9
    ctx->r12 = ADD32(ctx->r8, ctx->r25);
    // 0x8006D9DC: lh          $t3, 0x0($t4)
    ctx->r11 = MEM_H(ctx->r12, 0X0);
    // 0x8006D9E0: lh          $t6, 0x2A($sp)
    ctx->r14 = MEM_H(ctx->r29, 0X2A);
    // 0x8006D9E4: mtc1        $t3, $f10
    ctx->f10.u32l = ctx->r11;
    // 0x8006D9E8: mtc1        $t6, $f6
    ctx->f6.u32l = ctx->r14;
    // 0x8006D9EC: cvt.s.w     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.fl = CVT_S_W(ctx->f10.u32l);
    // 0x8006D9F0: mtc1        $v1, $f4
    ctx->f4.u32l = ctx->r3;
    // 0x8006D9F4: lui         $at, 0x42F0
    ctx->r1 = S32(0X42F0 << 16);
    // 0x8006D9F8: cvt.s.w     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.fl = CVT_S_W(ctx->f6.u32l);
    // 0x8006D9FC: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x8006DA00: addiu       $t8, $sp, 0x30
    ctx->r24 = ADD32(ctx->r29, 0X30);
    // 0x8006DA04: mul.s       $f18, $f8, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = MUL_S(ctx->f8.fl, ctx->f16.fl);
    // 0x8006DA08: addu        $t1, $t0, $t8
    ctx->r9 = ADD32(ctx->r8, ctx->r24);
    // 0x8006DA0C: lh          $a3, 0x0($t1)
    ctx->r7 = MEM_H(ctx->r9, 0X0);
    // 0x8006DA10: lh          $t5, 0x8($t4)
    ctx->r13 = MEM_H(ctx->r12, 0X8);
    // 0x8006DA14: cvt.s.w     $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    ctx->f0.fl = CVT_S_W(ctx->f4.u32l);
    // 0x8006DA18: mtc1        $a3, $f8
    ctx->f8.u32l = ctx->r7;
    // 0x8006DA1C: lh          $t9, 0x2E($sp)
    ctx->r25 = MEM_H(ctx->r29, 0X2E);
    // 0x8006DA20: mul.s       $f4, $f18, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = MUL_S(ctx->f18.fl, ctx->f0.fl);
    // 0x8006DA24: lh          $t2, 0x8($t1)
    ctx->r10 = MEM_H(ctx->r9, 0X8);
    // 0x8006DA28: div.s       $f10, $f4, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f10.fl = DIV_S(ctx->f4.fl, ctx->f6.fl);
    // 0x8006DA2C: cvt.s.w     $f16, $f8
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    ctx->f16.fl = CVT_S_W(ctx->f8.u32l);
    // 0x8006DA30: mtc1        $t9, $f6
    ctx->f6.u32l = ctx->r25;
    // 0x8006DA34: addiu       $t9, $sp, 0x8
    ctx->r25 = ADD32(ctx->r29, 0X8);
    // 0x8006DA38: add.s       $f18, $f16, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f18.fl = ctx->f16.fl + ctx->f10.fl;
    // 0x8006DA3C: mtc1        $t5, $f16
    ctx->f16.u32l = ctx->r13;
    // 0x8006DA40: cfc1        $t7, $FpcCsr
    ctx->r15 = get_cop1_cs();
    // 0x8006DA44: nop

    // 0x8006DA48: ori         $at, $t7, 0x3
    ctx->r1 = ctx->r15 | 0X3;
    // 0x8006DA4C: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x8006DA50: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x8006DA54: lui         $at, 0x4416
    ctx->r1 = S32(0X4416 << 16);
    // 0x8006DA58: cvt.w.s     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    ctx->f4.u32l = CVT_W_S(ctx->f18.fl);
    // 0x8006DA5C: ctc1        $t7, $FpcCsr
    set_cop1_cs(ctx->r15);
    // 0x8006DA60: mfc1        $t8, $f4
    ctx->r24 = (int32_t)ctx->f4.u32l;
    // 0x8006DA64: cvt.s.w     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.fl = CVT_S_W(ctx->f6.u32l);
    // 0x8006DA68: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x8006DA6C: sh          $t8, 0x8($sp)
    MEM_H(0X8, ctx->r29) = ctx->r24;
    // 0x8006DA70: cvt.s.w     $f10, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    ctx->f10.fl = CVT_S_W(ctx->f16.u32l);
    // 0x8006DA74: lw          $t8, 0x18($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X18);
    // 0x8006DA78: mul.s       $f18, $f8, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f18.fl = MUL_S(ctx->f8.fl, ctx->f10.fl);
    // 0x8006DA7C: mtc1        $t2, $f8
    ctx->f8.u32l = ctx->r10;
    // 0x8006DA80: mul.s       $f4, $f18, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = MUL_S(ctx->f18.fl, ctx->f0.fl);
    // 0x8006DA84: nop

    // 0x8006DA88: div.s       $f16, $f4, $f6
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f16.fl = DIV_S(ctx->f4.fl, ctx->f6.fl);
    // 0x8006DA8C: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x8006DA90: sub.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl - ctx->f16.fl;
    // 0x8006DA94: cfc1        $t6, $FpcCsr
    ctx->r14 = get_cop1_cs();
    // 0x8006DA98: nop

    // 0x8006DA9C: ori         $at, $t6, 0x3
    ctx->r1 = ctx->r14 | 0X3;
    // 0x8006DAA0: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x8006DAA4: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x8006DAA8: nop

    // 0x8006DAAC: cvt.w.s     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    ctx->f4.u32l = CVT_W_S(ctx->f18.fl);
    // 0x8006DAB0: mfc1        $t7, $f4
    ctx->r15 = (int32_t)ctx->f4.u32l;
    // 0x8006DAB4: ctc1        $t6, $FpcCsr
    set_cop1_cs(ctx->r14);
    // 0x8006DAB8: sh          $t7, 0xA($sp)
    MEM_H(0XA, ctx->r29) = ctx->r15;
    // 0x8006DABC: lw          $at, 0x0($t9)
    ctx->r1 = MEM_W(ctx->r25, 0X0);
    // 0x8006DAC0: nop

    // 0x8006DAC4: swl         $at, 0x0($t8)
    do_swl(rdram, 0X0, ctx->r24, ctx->r1);
    // 0x8006DAC8: swr         $at, 0x3($t8)
    do_swr(rdram, 0X3, ctx->r24, ctx->r1);
    // 0x8006DACC: lw          $v0, 0x18($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X18);
    // 0x8006DAD0: jr          $ra
    // 0x8006DAD4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x8006DAD4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8006DAD8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8006DAD8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8006DADC: or          $a3, $a2, $zero
    ctx->r7 = ctx->r6 | 0;
    // 0x8006DAE0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8006DAE4: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8006DAE8: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x8006DAEC: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    // 0x8006DAF0: andi        $t6, $a0, 0xFF
    ctx->r14 = ctx->r4 & 0XFF;
    // 0x8006DAF4: or          $a0, $t6, $zero
    ctx->r4 = ctx->r14 | 0;
    // 0x8006DAF8: sb          $t6, 0x1B($sp)
    MEM_B(0X1B, ctx->r29) = ctx->r14;
    // 0x8006DAFC: sb          $a3, 0x23($sp)
    MEM_B(0X23, ctx->r29) = ctx->r7;
    // 0x8006DB00: addiu       $a2, $zero, 0xB
    ctx->r6 = ADD32(0, 0XB);
    // 0x8006DB04: jal         0x8004D808
    // 0x8006DB08: andi        $a1, $a3, 0xFF
    ctx->r5 = ctx->r7 & 0XFF;
    func_8004D808(rdram, ctx);
        goto after_0;
    // 0x8006DB08: andi        $a1, $a3, 0xFF
    ctx->r5 = ctx->r7 & 0XFF;
    after_0:
    // 0x8006DB0C: lbu         $a3, 0x23($sp)
    ctx->r7 = MEM_BU(ctx->r29, 0X23);
    // 0x8006DB10: lbu         $a0, 0x1B($sp)
    ctx->r4 = MEM_BU(ctx->r29, 0X1B);
    // 0x8006DB14: beq         $v0, $zero, L_8006DB58
    if (ctx->r2 == 0) {
        // 0x8006DB18: andi        $a1, $a3, 0xFF
        ctx->r5 = ctx->r7 & 0XFF;
            goto L_8006DB58;
    }
    // 0x8006DB18: andi        $a1, $a3, 0xFF
    ctx->r5 = ctx->r7 & 0XFF;
    // 0x8006DB1C: andi        $a1, $a3, 0xFF
    ctx->r5 = ctx->r7 & 0XFF;
    // 0x8006DB20: jal         0x8004D808
    // 0x8006DB24: addiu       $a2, $zero, 0xD
    ctx->r6 = ADD32(0, 0XD);
    func_8004D808(rdram, ctx);
        goto after_1;
    // 0x8006DB24: addiu       $a2, $zero, 0xD
    ctx->r6 = ADD32(0, 0XD);
    after_1:
    // 0x8006DB28: beq         $v0, $zero, L_8006DB48
    if (ctx->r2 == 0) {
        // 0x8006DB2C: lw          $a0, 0x1C($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X1C);
            goto L_8006DB48;
    }
    // 0x8006DB2C: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    // 0x8006DB30: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    // 0x8006DB34: jal         0x8004CBCC
    // 0x8006DB38: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    func_8004CBCC(rdram, ctx);
        goto after_2;
    // 0x8006DB38: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    after_2:
    // 0x8006DB3C: b           L_8006DB8C
    // 0x8006DB40: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_8006DB8C;
    // 0x8006DB40: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8006DB44: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
L_8006DB48:
    // 0x8006DB48: jal         0x8004CBCC
    // 0x8006DB4C: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    func_8004CBCC(rdram, ctx);
        goto after_3;
    // 0x8006DB4C: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    after_3:
    // 0x8006DB50: b           L_8006DB8C
    // 0x8006DB54: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_8006DB8C;
    // 0x8006DB54: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8006DB58:
    // 0x8006DB58: jal         0x8004D808
    // 0x8006DB5C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    func_8004D808(rdram, ctx);
        goto after_4;
    // 0x8006DB5C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_4:
    // 0x8006DB60: beq         $v0, $zero, L_8006DB7C
    if (ctx->r2 == 0) {
        // 0x8006DB64: andi        $a1, $v0, 0xFF
        ctx->r5 = ctx->r2 & 0XFF;
            goto L_8006DB7C;
    }
    // 0x8006DB64: andi        $a1, $v0, 0xFF
    ctx->r5 = ctx->r2 & 0XFF;
    // 0x8006DB68: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    // 0x8006DB6C: jal         0x8004CBCC
    // 0x8006DB70: nop

    func_8004CBCC(rdram, ctx);
        goto after_5;
    // 0x8006DB70: nop

    after_5:
    // 0x8006DB74: b           L_8006DB8C
    // 0x8006DB78: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_8006DB8C;
    // 0x8006DB78: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8006DB7C:
    // 0x8006DB7C: lw          $t7, 0x1C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X1C);
    // 0x8006DB80: nop

    // 0x8006DB84: sw          $zero, 0x30($t7)
    MEM_W(0X30, ctx->r15) = 0;
    // 0x8006DB88: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8006DB8C:
    // 0x8006DB8C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8006DB90: jr          $ra
    // 0x8006DB94: nop

    return;
    // 0x8006DB94: nop

;}
RECOMP_FUNC void func_8006DB98(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8006DB98: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8006DB9C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8006DBA0: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x8006DBA4: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x8006DBA8: sw          $a2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r6;
    // 0x8006DBAC: addiu       $t6, $zero, 0x8
    ctx->r14 = ADD32(0, 0X8);
    // 0x8006DBB0: sb          $t6, 0x5($a1)
    MEM_B(0X5, ctx->r5) = ctx->r14;
    // 0x8006DBB4: lbu         $a1, 0x2B($sp)
    ctx->r5 = MEM_BU(ctx->r29, 0X2B);
    // 0x8006DBB8: lbu         $a0, 0x23($sp)
    ctx->r4 = MEM_BU(ctx->r29, 0X23);
    // 0x8006DBBC: jal         0x8004D808
    // 0x8006DBC0: addiu       $a2, $zero, 0xB
    ctx->r6 = ADD32(0, 0XB);
    func_8004D808(rdram, ctx);
        goto after_0;
    // 0x8006DBC0: addiu       $a2, $zero, 0xB
    ctx->r6 = ADD32(0, 0XB);
    after_0:
    // 0x8006DBC4: beq         $v0, $zero, L_8006DC20
    if (ctx->r2 == 0) {
        // 0x8006DBC8: lbu         $a0, 0x23($sp)
        ctx->r4 = MEM_BU(ctx->r29, 0X23);
            goto L_8006DC20;
    }
    // 0x8006DBC8: lbu         $a0, 0x23($sp)
    ctx->r4 = MEM_BU(ctx->r29, 0X23);
    // 0x8006DBCC: lbu         $a0, 0x23($sp)
    ctx->r4 = MEM_BU(ctx->r29, 0X23);
    // 0x8006DBD0: lbu         $a1, 0x2B($sp)
    ctx->r5 = MEM_BU(ctx->r29, 0X2B);
    // 0x8006DBD4: jal         0x8004D808
    // 0x8006DBD8: addiu       $a2, $zero, 0xD
    ctx->r6 = ADD32(0, 0XD);
    func_8004D808(rdram, ctx);
        goto after_1;
    // 0x8006DBD8: addiu       $a2, $zero, 0xD
    ctx->r6 = ADD32(0, 0XD);
    after_1:
    // 0x8006DBDC: beq         $v0, $zero, L_8006DBFC
    if (ctx->r2 == 0) {
        // 0x8006DBE0: lw          $a0, 0x24($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X24);
            goto L_8006DBFC;
    }
    // 0x8006DBE0: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    // 0x8006DBE4: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    // 0x8006DBE8: jal         0x8004CBCC
    // 0x8006DBEC: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    func_8004CBCC(rdram, ctx);
        goto after_2;
    // 0x8006DBEC: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    after_2:
    // 0x8006DBF0: b           L_8006DC08
    // 0x8006DBF4: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
        goto L_8006DC08;
    // 0x8006DBF4: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    // 0x8006DBF8: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
L_8006DBFC:
    // 0x8006DBFC: jal         0x8004CBCC
    // 0x8006DC00: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    func_8004CBCC(rdram, ctx);
        goto after_3;
    // 0x8006DC00: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    after_3:
    // 0x8006DC04: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
L_8006DC08:
    // 0x8006DC08: lui         $a1, 0x800B
    ctx->r5 = S32(0X800B << 16);
    // 0x8006DC0C: jal         0x8002B9DC
    // 0x8006DC10: addiu       $a1, $a1, -0x1060
    ctx->r5 = ADD32(ctx->r5, -0X1060);
    func_8002B9DC(rdram, ctx);
        goto after_4;
    // 0x8006DC10: addiu       $a1, $a1, -0x1060
    ctx->r5 = ADD32(ctx->r5, -0X1060);
    after_4:
    // 0x8006DC14: b           L_8006DCA4
    // 0x8006DC18: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_8006DCA4;
    // 0x8006DC18: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8006DC1C: lbu         $a0, 0x23($sp)
    ctx->r4 = MEM_BU(ctx->r29, 0X23);
L_8006DC20:
    // 0x8006DC20: lbu         $a1, 0x2B($sp)
    ctx->r5 = MEM_BU(ctx->r29, 0X2B);
    // 0x8006DC24: jal         0x8004D808
    // 0x8006DC28: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8004D808(rdram, ctx);
        goto after_5;
    // 0x8006DC28: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_5:
    // 0x8006DC2C: lbu         $a0, 0x23($sp)
    ctx->r4 = MEM_BU(ctx->r29, 0X23);
    // 0x8006DC30: lbu         $a1, 0x2B($sp)
    ctx->r5 = MEM_BU(ctx->r29, 0X2B);
    // 0x8006DC34: addiu       $a2, $zero, 0x5
    ctx->r6 = ADD32(0, 0X5);
    // 0x8006DC38: jal         0x8004D808
    // 0x8006DC3C: sb          $v0, 0x1F($sp)
    MEM_B(0X1F, ctx->r29) = ctx->r2;
    func_8004D808(rdram, ctx);
        goto after_6;
    // 0x8006DC3C: sb          $v0, 0x1F($sp)
    MEM_B(0X1F, ctx->r29) = ctx->r2;
    after_6:
    // 0x8006DC40: lbu         $a3, 0x1F($sp)
    ctx->r7 = MEM_BU(ctx->r29, 0X1F);
    // 0x8006DC44: blez        $v0, L_8006DC6C
    if (SIGNED(ctx->r2) <= 0) {
        // 0x8006DC48: or          $v1, $v0, $zero
        ctx->r3 = ctx->r2 | 0;
            goto L_8006DC6C;
    }
    // 0x8006DC48: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
    // 0x8006DC4C: slti        $at, $v0, 0x3
    ctx->r1 = SIGNED(ctx->r2) < 0X3 ? 1 : 0;
    // 0x8006DC50: beq         $at, $zero, L_8006DC6C
    if (ctx->r1 == 0) {
        // 0x8006DC54: sll         $t8, $a3, 2
        ctx->r24 = S32(ctx->r7 << 2);
            goto L_8006DC6C;
    }
    // 0x8006DC54: sll         $t8, $a3, 2
    ctx->r24 = S32(ctx->r7 << 2);
    // 0x8006DC58: lui         $a1, 0x800B
    ctx->r5 = S32(0X800B << 16);
    // 0x8006DC5C: addu        $a1, $a1, $t8
    ctx->r5 = ADD32(ctx->r5, ctx->r24);
    // 0x8006DC60: lw          $a1, -0xDB8($a1)
    ctx->r5 = MEM_W(ctx->r5, -0XDB8);
    // 0x8006DC64: b           L_8006DC98
    // 0x8006DC68: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
        goto L_8006DC98;
    // 0x8006DC68: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
L_8006DC6C:
    // 0x8006DC6C: slti        $at, $v1, 0x3
    ctx->r1 = SIGNED(ctx->r3) < 0X3 ? 1 : 0;
    // 0x8006DC70: bne         $at, $zero, L_8006DC84
    if (ctx->r1 != 0) {
        // 0x8006DC74: sll         $t9, $a3, 2
        ctx->r25 = S32(ctx->r7 << 2);
            goto L_8006DC84;
    }
    // 0x8006DC74: sll         $t9, $a3, 2
    ctx->r25 = S32(ctx->r7 << 2);
    // 0x8006DC78: lui         $a1, 0x800B
    ctx->r5 = S32(0X800B << 16);
    // 0x8006DC7C: b           L_8006DC94
    // 0x8006DC80: addiu       $a1, $a1, -0xDC8
    ctx->r5 = ADD32(ctx->r5, -0XDC8);
        goto L_8006DC94;
    // 0x8006DC80: addiu       $a1, $a1, -0xDC8
    ctx->r5 = ADD32(ctx->r5, -0XDC8);
L_8006DC84:
    // 0x8006DC84: lui         $a1, 0x800B
    ctx->r5 = S32(0X800B << 16);
    // 0x8006DC88: addu        $a1, $a1, $t9
    ctx->r5 = ADD32(ctx->r5, ctx->r25);
    // 0x8006DC8C: lw          $a1, -0xE30($a1)
    ctx->r5 = MEM_W(ctx->r5, -0XE30);
    // 0x8006DC90: nop

L_8006DC94:
    // 0x8006DC94: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
L_8006DC98:
    // 0x8006DC98: jal         0x8002B9DC
    // 0x8006DC9C: nop

    func_8002B9DC(rdram, ctx);
        goto after_7;
    // 0x8006DC9C: nop

    after_7:
    // 0x8006DCA0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8006DCA4:
    // 0x8006DCA4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x8006DCA8: jr          $ra
    // 0x8006DCAC: nop

    return;
    // 0x8006DCAC: nop

;}
RECOMP_FUNC void func_8006DCB0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8006DCB0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8006DCB4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8006DCB8: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8006DCBC: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x8006DCC0: andi        $t6, $a0, 0xFF
    ctx->r14 = ctx->r4 & 0XFF;
    // 0x8006DCC4: or          $t7, $a1, $zero
    ctx->r15 = ctx->r5 | 0;
    // 0x8006DCC8: or          $a0, $t6, $zero
    ctx->r4 = ctx->r14 | 0;
    // 0x8006DCCC: andi        $a1, $t7, 0xFF
    ctx->r5 = ctx->r15 & 0XFF;
    // 0x8006DCD0: jal         0x8004D808
    // 0x8006DCD4: addiu       $a2, $zero, 0x7
    ctx->r6 = ADD32(0, 0X7);
    func_8004D808(rdram, ctx);
        goto after_0;
    // 0x8006DCD4: addiu       $a2, $zero, 0x7
    ctx->r6 = ADD32(0, 0X7);
    after_0:
    // 0x8006DCD8: andi        $t8, $v0, 0x4
    ctx->r24 = ctx->r2 & 0X4;
    // 0x8006DCDC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8006DCE0: beq         $t8, $zero, L_8006DCF0
    if (ctx->r24 == 0) {
        // 0x8006DCE4: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_8006DCF0;
    }
    // 0x8006DCE4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x8006DCE8: b           L_8006DCF0
    // 0x8006DCEC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_8006DCF0;
    // 0x8006DCEC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_8006DCF0:
    // 0x8006DCF0: jr          $ra
    // 0x8006DCF4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x8006DCF4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8006DCF8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8006DCF8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8006DCFC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8006DD00: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8006DD04: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x8006DD08: andi        $t6, $a0, 0xFF
    ctx->r14 = ctx->r4 & 0XFF;
    // 0x8006DD0C: or          $t7, $a1, $zero
    ctx->r15 = ctx->r5 | 0;
    // 0x8006DD10: or          $a0, $t6, $zero
    ctx->r4 = ctx->r14 | 0;
    // 0x8006DD14: andi        $a1, $t7, 0xFF
    ctx->r5 = ctx->r15 & 0XFF;
    // 0x8006DD18: jal         0x8004D808
    // 0x8006DD1C: addiu       $a2, $zero, 0x7
    ctx->r6 = ADD32(0, 0X7);
    func_8004D808(rdram, ctx);
        goto after_0;
    // 0x8006DD1C: addiu       $a2, $zero, 0x7
    ctx->r6 = ADD32(0, 0X7);
    after_0:
    // 0x8006DD20: andi        $t8, $v0, 0x3
    ctx->r24 = ctx->r2 & 0X3;
    // 0x8006DD24: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8006DD28: beq         $t8, $zero, L_8006DD38
    if (ctx->r24 == 0) {
        // 0x8006DD2C: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_8006DD38;
    }
    // 0x8006DD2C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x8006DD30: b           L_8006DD38
    // 0x8006DD34: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_8006DD38;
    // 0x8006DD34: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_8006DD38:
    // 0x8006DD38: jr          $ra
    // 0x8006DD3C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x8006DD3C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8006DD40(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8006DD40: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8006DD44: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8006DD48: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8006DD4C: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x8006DD50: andi        $t6, $a0, 0xFF
    ctx->r14 = ctx->r4 & 0XFF;
    // 0x8006DD54: or          $t7, $a1, $zero
    ctx->r15 = ctx->r5 | 0;
    // 0x8006DD58: or          $a0, $t6, $zero
    ctx->r4 = ctx->r14 | 0;
    // 0x8006DD5C: andi        $a1, $t7, 0xFF
    ctx->r5 = ctx->r15 & 0XFF;
    // 0x8006DD60: jal         0x8004D808
    // 0x8006DD64: addiu       $a2, $zero, 0x7
    ctx->r6 = ADD32(0, 0X7);
    func_8004D808(rdram, ctx);
        goto after_0;
    // 0x8006DD64: addiu       $a2, $zero, 0x7
    ctx->r6 = ADD32(0, 0X7);
    after_0:
    // 0x8006DD68: andi        $t8, $v0, 0x1
    ctx->r24 = ctx->r2 & 0X1;
    // 0x8006DD6C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8006DD70: beq         $t8, $zero, L_8006DD80
    if (ctx->r24 == 0) {
        // 0x8006DD74: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_8006DD80;
    }
    // 0x8006DD74: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x8006DD78: b           L_8006DD80
    // 0x8006DD7C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_8006DD80;
    // 0x8006DD7C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_8006DD80:
    // 0x8006DD80: jr          $ra
    // 0x8006DD84: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x8006DD84: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8006DD88(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8006DD88: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8006DD8C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8006DD90: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8006DD94: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x8006DD98: andi        $t6, $a0, 0xFF
    ctx->r14 = ctx->r4 & 0XFF;
    // 0x8006DD9C: or          $t7, $a1, $zero
    ctx->r15 = ctx->r5 | 0;
    // 0x8006DDA0: or          $a0, $t6, $zero
    ctx->r4 = ctx->r14 | 0;
    // 0x8006DDA4: andi        $a1, $t7, 0xFF
    ctx->r5 = ctx->r15 & 0XFF;
    // 0x8006DDA8: jal         0x8004D808
    // 0x8006DDAC: addiu       $a2, $zero, 0xB
    ctx->r6 = ADD32(0, 0XB);
    func_8004D808(rdram, ctx);
        goto after_0;
    // 0x8006DDAC: addiu       $a2, $zero, 0xB
    ctx->r6 = ADD32(0, 0XB);
    after_0:
    // 0x8006DDB0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8006DDB4: beq         $v0, $zero, L_8006DDC8
    if (ctx->r2 == 0) {
        // 0x8006DDB8: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_8006DDC8;
    }
    // 0x8006DDB8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x8006DDBC: b           L_8006DDC8
    // 0x8006DDC0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_8006DDC8;
    // 0x8006DDC0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8006DDC4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_8006DDC8:
    // 0x8006DDC8: jr          $ra
    // 0x8006DDCC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x8006DDCC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8006DDD0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8006DDD0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8006DDD4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8006DDD8: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8006DDDC: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x8006DDE0: andi        $t6, $a0, 0xFF
    ctx->r14 = ctx->r4 & 0XFF;
    // 0x8006DDE4: or          $t7, $a1, $zero
    ctx->r15 = ctx->r5 | 0;
    // 0x8006DDE8: or          $a0, $t6, $zero
    ctx->r4 = ctx->r14 | 0;
    // 0x8006DDEC: andi        $a1, $t7, 0xFF
    ctx->r5 = ctx->r15 & 0XFF;
    // 0x8006DDF0: jal         0x8004D808
    // 0x8006DDF4: addiu       $a2, $zero, 0x5
    ctx->r6 = ADD32(0, 0X5);
    func_8004D808(rdram, ctx);
        goto after_0;
    // 0x8006DDF4: addiu       $a2, $zero, 0x5
    ctx->r6 = ADD32(0, 0X5);
    after_0:
    // 0x8006DDF8: slti        $at, $v0, 0x3
    ctx->r1 = SIGNED(ctx->r2) < 0X3 ? 1 : 0;
    // 0x8006DDFC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8006DE00: beq         $at, $zero, L_8006DE10
    if (ctx->r1 == 0) {
        // 0x8006DE04: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_8006DE10;
    }
    // 0x8006DE04: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x8006DE08: b           L_8006DE10
    // 0x8006DE0C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_8006DE10;
    // 0x8006DE0C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_8006DE10:
    // 0x8006DE10: jr          $ra
    // 0x8006DE14: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x8006DE14: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8006DE18(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8006DE18: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8006DE1C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8006DE20: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8006DE24: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x8006DE28: andi        $t6, $a0, 0xFF
    ctx->r14 = ctx->r4 & 0XFF;
    // 0x8006DE2C: or          $t7, $a1, $zero
    ctx->r15 = ctx->r5 | 0;
    // 0x8006DE30: or          $a0, $t6, $zero
    ctx->r4 = ctx->r14 | 0;
    // 0x8006DE34: jal         0x8004DD18
    // 0x8006DE38: andi        $a1, $t7, 0xFF
    ctx->r5 = ctx->r15 & 0XFF;
    func_8004DD18(rdram, ctx);
        goto after_0;
    // 0x8006DE38: andi        $a1, $t7, 0xFF
    ctx->r5 = ctx->r15 & 0XFF;
    after_0:
    // 0x8006DE3C: lbu         $t8, 0x1E($v0)
    ctx->r24 = MEM_BU(ctx->r2, 0X1E);
    // 0x8006DE40: nop

    // 0x8006DE44: ori         $t9, $t8, 0x4
    ctx->r25 = ctx->r24 | 0X4;
    // 0x8006DE48: sb          $t9, 0x1E($v0)
    MEM_B(0X1E, ctx->r2) = ctx->r25;
    // 0x8006DE4C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8006DE50: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8006DE54: jr          $ra
    // 0x8006DE58: nop

    return;
    // 0x8006DE58: nop

;}
RECOMP_FUNC void func_8006DE5C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8006DE5C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8006DE60: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8006DE64: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8006DE68: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x8006DE6C: andi        $t6, $a0, 0xFF
    ctx->r14 = ctx->r4 & 0XFF;
    // 0x8006DE70: or          $t7, $a1, $zero
    ctx->r15 = ctx->r5 | 0;
    // 0x8006DE74: or          $a0, $t6, $zero
    ctx->r4 = ctx->r14 | 0;
    // 0x8006DE78: jal         0x8004DD18
    // 0x8006DE7C: andi        $a1, $t7, 0xFF
    ctx->r5 = ctx->r15 & 0XFF;
    func_8004DD18(rdram, ctx);
        goto after_0;
    // 0x8006DE7C: andi        $a1, $t7, 0xFF
    ctx->r5 = ctx->r15 & 0XFF;
    after_0:
    // 0x8006DE80: lbu         $t8, 0x1E($v0)
    ctx->r24 = MEM_BU(ctx->r2, 0X1E);
    // 0x8006DE84: nop

    // 0x8006DE88: andi        $t9, $t8, 0xFFFB
    ctx->r25 = ctx->r24 & 0XFFFB;
    // 0x8006DE8C: sb          $t9, 0x1E($v0)
    MEM_B(0X1E, ctx->r2) = ctx->r25;
    // 0x8006DE90: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8006DE94: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8006DE98: jr          $ra
    // 0x8006DE9C: nop

    return;
    // 0x8006DE9C: nop

;}
RECOMP_FUNC void func_8006DEA0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8006DEA0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8006DEA4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8006DEA8: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8006DEAC: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x8006DEB0: andi        $t6, $a0, 0xFF
    ctx->r14 = ctx->r4 & 0XFF;
    // 0x8006DEB4: or          $t7, $a1, $zero
    ctx->r15 = ctx->r5 | 0;
    // 0x8006DEB8: or          $a0, $t6, $zero
    ctx->r4 = ctx->r14 | 0;
    // 0x8006DEBC: jal         0x8006D8EC
    // 0x8006DEC0: andi        $a1, $t7, 0xFF
    ctx->r5 = ctx->r15 & 0XFF;
    func_8006D8EC(rdram, ctx);
        goto after_0;
    // 0x8006DEC0: andi        $a1, $t7, 0xFF
    ctx->r5 = ctx->r15 & 0XFF;
    after_0:
    // 0x8006DEC4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8006DEC8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8006DECC: jr          $ra
    // 0x8006DED0: nop

    return;
    // 0x8006DED0: nop

;}
RECOMP_FUNC void func_8006DED4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8006DED4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8006DED8: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8006DEDC: sll         $a1, $a0, 24
    ctx->r5 = S32(ctx->r4 << 24);
    // 0x8006DEE0: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x8006DEE4: sra         $t6, $a1, 24
    ctx->r14 = S32(SIGNED(ctx->r5) >> 24);
    // 0x8006DEE8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8006DEEC: lbu         $a0, -0x326C($a0)
    ctx->r4 = MEM_BU(ctx->r4, -0X326C);
    // 0x8006DEF0: jal         0x8006DEA0
    // 0x8006DEF4: or          $a1, $t6, $zero
    ctx->r5 = ctx->r14 | 0;
    func_8006DEA0(rdram, ctx);
        goto after_0;
    // 0x8006DEF4: or          $a1, $t6, $zero
    ctx->r5 = ctx->r14 | 0;
    after_0:
    // 0x8006DEF8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8006DEFC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8006DF00: jr          $ra
    // 0x8006DF04: nop

    return;
    // 0x8006DF04: nop

;}
RECOMP_FUNC void func_8006DF08(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8006DF08: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x8006DF0C: sw          $s2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r18;
    // 0x8006DF10: andi        $s2, $a0, 0xFF
    ctx->r18 = ctx->r4 & 0XFF;
    // 0x8006DF14: sll         $t6, $s2, 2
    ctx->r14 = S32(ctx->r18 << 2);
    // 0x8006DF18: addu        $t6, $t6, $s2
    ctx->r14 = ADD32(ctx->r14, ctx->r18);
    // 0x8006DF1C: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x8006DF20: addu        $t6, $t6, $s2
    ctx->r14 = ADD32(ctx->r14, ctx->r18);
    // 0x8006DF24: sll         $t6, $t6, 3
    ctx->r14 = S32(ctx->r14 << 3);
    // 0x8006DF28: addu        $t6, $t6, $s2
    ctx->r14 = ADD32(ctx->r14, ctx->r18);
    // 0x8006DF2C: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x8006DF30: addu        $t6, $t6, $s2
    ctx->r14 = ADD32(ctx->r14, ctx->r18);
    // 0x8006DF34: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x8006DF38: lui         $t7, 0x8012
    ctx->r15 = S32(0X8012 << 16);
    // 0x8006DF3C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8006DF40: lbu         $t7, -0x2449($t7)
    ctx->r15 = MEM_BU(ctx->r15, -0X2449);
    // 0x8006DF44: addiu       $t8, $zero, 0xB
    ctx->r24 = ADD32(0, 0XB);
    // 0x8006DF48: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x8006DF4C: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x8006DF50: subu        $t9, $t8, $t7
    ctx->r25 = SUB32(ctx->r24, ctx->r15);
    // 0x8006DF54: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x8006DF58: sw          $s3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r19;
    // 0x8006DF5C: sw          $a0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r4;
    // 0x8006DF60: sb          $t9, 0x2E($sp)
    MEM_B(0X2E, ctx->r29) = ctx->r25;
    // 0x8006DF64: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x8006DF68: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
L_8006DF6C:
    // 0x8006DF6C: sll         $a1, $s0, 24
    ctx->r5 = S32(ctx->r16 << 24);
    // 0x8006DF70: sra         $t0, $a1, 24
    ctx->r8 = S32(SIGNED(ctx->r5) >> 24);
    // 0x8006DF74: or          $a1, $t0, $zero
    ctx->r5 = ctx->r8 | 0;
    // 0x8006DF78: jal         0x8006DE5C
    // 0x8006DF7C: andi        $a0, $s2, 0xFF
    ctx->r4 = ctx->r18 & 0XFF;
    func_8006DE5C(rdram, ctx);
        goto after_0;
    // 0x8006DF7C: andi        $a0, $s2, 0xFF
    ctx->r4 = ctx->r18 & 0XFF;
    after_0:
    // 0x8006DF80: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x8006DF84: andi        $s0, $s1, 0xFF
    ctx->r16 = ctx->r17 & 0XFF;
    // 0x8006DF88: slti        $at, $s0, 0x10
    ctx->r1 = SIGNED(ctx->r16) < 0X10 ? 1 : 0;
    // 0x8006DF8C: bne         $at, $zero, L_8006DF6C
    if (ctx->r1 != 0) {
        // 0x8006DF90: or          $s1, $s0, $zero
        ctx->r17 = ctx->r16 | 0;
            goto L_8006DF6C;
    }
    // 0x8006DF90: or          $s1, $s0, $zero
    ctx->r17 = ctx->r16 | 0;
    // 0x8006DF94: lbu         $s3, 0x2E($sp)
    ctx->r19 = MEM_BU(ctx->r29, 0X2E);
    // 0x8006DF98: addiu       $s1, $zero, 0x1
    ctx->r17 = ADD32(0, 0X1);
    // 0x8006DF9C: addiu       $s0, $zero, 0x1
    ctx->r16 = ADD32(0, 0X1);
L_8006DFA0:
    // 0x8006DFA0: slt         $at, $s3, $s0
    ctx->r1 = SIGNED(ctx->r19) < SIGNED(ctx->r16) ? 1 : 0;
    // 0x8006DFA4: bne         $at, $zero, L_8006DFBC
    if (ctx->r1 != 0) {
        // 0x8006DFA8: andi        $a0, $s2, 0xFF
        ctx->r4 = ctx->r18 & 0XFF;
            goto L_8006DFBC;
    }
    // 0x8006DFA8: andi        $a0, $s2, 0xFF
    ctx->r4 = ctx->r18 & 0XFF;
    // 0x8006DFAC: sll         $a1, $s0, 24
    ctx->r5 = S32(ctx->r16 << 24);
    // 0x8006DFB0: sra         $t2, $a1, 24
    ctx->r10 = S32(SIGNED(ctx->r5) >> 24);
    // 0x8006DFB4: jal         0x8006DE18
    // 0x8006DFB8: or          $a1, $t2, $zero
    ctx->r5 = ctx->r10 | 0;
    func_8006DE18(rdram, ctx);
        goto after_1;
    // 0x8006DFB8: or          $a1, $t2, $zero
    ctx->r5 = ctx->r10 | 0;
    after_1:
L_8006DFBC:
    // 0x8006DFBC: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x8006DFC0: andi        $s0, $s1, 0xFF
    ctx->r16 = ctx->r17 & 0XFF;
    // 0x8006DFC4: slti        $at, $s0, 0x5
    ctx->r1 = SIGNED(ctx->r16) < 0X5 ? 1 : 0;
    // 0x8006DFC8: bne         $at, $zero, L_8006DFA0
    if (ctx->r1 != 0) {
        // 0x8006DFCC: or          $s1, $s0, $zero
        ctx->r17 = ctx->r16 | 0;
            goto L_8006DFA0;
    }
    // 0x8006DFCC: or          $s1, $s0, $zero
    ctx->r17 = ctx->r16 | 0;
    // 0x8006DFD0: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x8006DFD4: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x8006DFD8: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x8006DFDC: lw          $s2, 0x1C($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X1C);
    // 0x8006DFE0: lw          $s3, 0x20($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X20);
    // 0x8006DFE4: jr          $ra
    // 0x8006DFE8: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x8006DFE8: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_8006DFEC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8006DFEC: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8006DFF0: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8006DFF4: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8006DFF8: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
L_8006DFFC:
    // 0x8006DFFC: jal         0x8006E028
    // 0x8006E000: andi        $a0, $s0, 0xFF
    ctx->r4 = ctx->r16 & 0XFF;
    func_8006E028(rdram, ctx);
        goto after_0;
    // 0x8006E000: andi        $a0, $s0, 0xFF
    ctx->r4 = ctx->r16 & 0XFF;
    after_0:
    // 0x8006E004: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x8006E008: andi        $t6, $s0, 0xFF
    ctx->r14 = ctx->r16 & 0XFF;
    // 0x8006E00C: slti        $at, $t6, 0x2
    ctx->r1 = SIGNED(ctx->r14) < 0X2 ? 1 : 0;
    // 0x8006E010: bne         $at, $zero, L_8006DFFC
    if (ctx->r1 != 0) {
        // 0x8006E014: or          $s0, $t6, $zero
        ctx->r16 = ctx->r14 | 0;
            goto L_8006DFFC;
    }
    // 0x8006E014: or          $s0, $t6, $zero
    ctx->r16 = ctx->r14 | 0;
    // 0x8006E018: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8006E01C: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8006E020: jr          $ra
    // 0x8006E024: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x8006E024: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_8006E028(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8006E028: andi        $t6, $a0, 0xFF
    ctx->r14 = ctx->r4 & 0XFF;
    // 0x8006E02C: sll         $t9, $t6, 2
    ctx->r25 = S32(ctx->r14 << 2);
    // 0x8006E030: addu        $t9, $t9, $t6
    ctx->r25 = ADD32(ctx->r25, ctx->r14);
    // 0x8006E034: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x8006E038: addu        $t9, $t9, $t6
    ctx->r25 = ADD32(ctx->r25, ctx->r14);
    // 0x8006E03C: sll         $t9, $t9, 3
    ctx->r25 = S32(ctx->r25 << 3);
    // 0x8006E040: addu        $t9, $t9, $t6
    ctx->r25 = ADD32(ctx->r25, ctx->r14);
    // 0x8006E044: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x8006E048: addu        $t9, $t9, $t6
    ctx->r25 = ADD32(ctx->r25, ctx->r14);
    // 0x8006E04C: lui         $t8, 0x8012
    ctx->r24 = S32(0X8012 << 16);
    // 0x8006E050: lui         $t0, 0x8012
    ctx->r8 = S32(0X8012 << 16);
    // 0x8006E054: addiu       $t0, $t0, -0x2CF0
    ctx->r8 = ADD32(ctx->r8, -0X2CF0);
    // 0x8006E058: addiu       $t8, $t8, -0x32B0
    ctx->r24 = ADD32(ctx->r24, -0X32B0);
    // 0x8006E05C: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x8006E060: sll         $t7, $t6, 4
    ctx->r15 = S32(ctx->r14 << 4);
    // 0x8006E064: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x8006E068: addu        $v1, $t7, $t8
    ctx->r3 = ADD32(ctx->r15, ctx->r24);
    // 0x8006E06C: addu        $a1, $t9, $t0
    ctx->r5 = ADD32(ctx->r25, ctx->r8);
    // 0x8006E070: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_8006E074:
    // 0x8006E074: addu        $t1, $a1, $v0
    ctx->r9 = ADD32(ctx->r5, ctx->r2);
    // 0x8006E078: addu        $t3, $v1, $v0
    ctx->r11 = ADD32(ctx->r3, ctx->r2);
    // 0x8006E07C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8006E080: lbu         $t2, 0x308($t1)
    ctx->r10 = MEM_BU(ctx->r9, 0X308);
    // 0x8006E084: andi        $t4, $v0, 0xFF
    ctx->r12 = ctx->r2 & 0XFF;
    // 0x8006E088: slti        $at, $t4, 0x10
    ctx->r1 = SIGNED(ctx->r12) < 0X10 ? 1 : 0;
    // 0x8006E08C: or          $v0, $t4, $zero
    ctx->r2 = ctx->r12 | 0;
    // 0x8006E090: bne         $at, $zero, L_8006E074
    if (ctx->r1 != 0) {
        // 0x8006E094: sb          $t2, 0x1E($t3)
        MEM_B(0X1E, ctx->r11) = ctx->r10;
            goto L_8006E074;
    }
    // 0x8006E094: sb          $t2, 0x1E($t3)
    MEM_B(0X1E, ctx->r11) = ctx->r10;
    // 0x8006E098: jr          $ra
    // 0x8006E09C: nop

    return;
    // 0x8006E09C: nop

;}
RECOMP_FUNC void func_8006E0A0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8006E0A0: lui         $a2, 0x8012
    ctx->r6 = S32(0X8012 << 16);
    // 0x8006E0A4: lui         $a1, 0x8012
    ctx->r5 = S32(0X8012 << 16);
    // 0x8006E0A8: addiu       $a1, $a1, -0x2CF0
    ctx->r5 = ADD32(ctx->r5, -0X2CF0);
    // 0x8006E0AC: addiu       $a2, $a2, -0x32B0
    ctx->r6 = ADD32(ctx->r6, -0X32B0);
    // 0x8006E0B0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_8006E0B4:
    // 0x8006E0B4: addu        $a0, $a2, $v0
    ctx->r4 = ADD32(ctx->r6, ctx->r2);
    // 0x8006E0B8: addu        $v1, $a1, $v0
    ctx->r3 = ADD32(ctx->r5, ctx->r2);
    // 0x8006E0BC: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8006E0C0: lbu         $t6, 0x1E($a0)
    ctx->r14 = MEM_BU(ctx->r4, 0X1E);
    // 0x8006E0C4: lbu         $t7, 0x2E($a0)
    ctx->r15 = MEM_BU(ctx->r4, 0X2E);
    // 0x8006E0C8: andi        $t8, $v0, 0xFF
    ctx->r24 = ctx->r2 & 0XFF;
    // 0x8006E0CC: slti        $at, $t8, 0x10
    ctx->r1 = SIGNED(ctx->r24) < 0X10 ? 1 : 0;
    // 0x8006E0D0: or          $v0, $t8, $zero
    ctx->r2 = ctx->r24 | 0;
    // 0x8006E0D4: sb          $t6, 0x308($v1)
    MEM_B(0X308, ctx->r3) = ctx->r14;
    // 0x8006E0D8: bne         $at, $zero, L_8006E0B4
    if (ctx->r1 != 0) {
        // 0x8006E0DC: sb          $t7, 0xD9C($v1)
        MEM_B(0XD9C, ctx->r3) = ctx->r15;
            goto L_8006E0B4;
    }
    // 0x8006E0DC: sb          $t7, 0xD9C($v1)
    MEM_B(0XD9C, ctx->r3) = ctx->r15;
    // 0x8006E0E0: jr          $ra
    // 0x8006E0E4: nop

    return;
    // 0x8006E0E4: nop

;}
RECOMP_FUNC void func_8006E0E8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8006E0E8: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8006E0EC: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x8006E0F0: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8006E0F4: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x8006E0F8: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
L_8006E0FC:
    // 0x8006E0FC: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
L_8006E100:
    // 0x8006E100: andi        $a0, $s1, 0xFF
    ctx->r4 = ctx->r17 & 0XFF;
    // 0x8006E104: andi        $a1, $s0, 0xFF
    ctx->r5 = ctx->r16 & 0XFF;
    // 0x8006E108: jal         0x8004D808
    // 0x8006E10C: addiu       $a2, $zero, 0x7
    ctx->r6 = ADD32(0, 0X7);
    func_8004D808(rdram, ctx);
        goto after_0;
    // 0x8006E10C: addiu       $a2, $zero, 0x7
    ctx->r6 = ADD32(0, 0X7);
    after_0:
    // 0x8006E110: andi        $t6, $v0, 0x2
    ctx->r14 = ctx->r2 & 0X2;
    // 0x8006E114: beq         $t6, $zero, L_8006E134
    if (ctx->r14 == 0) {
        // 0x8006E118: andi        $a0, $s1, 0xFF
        ctx->r4 = ctx->r17 & 0XFF;
            goto L_8006E134;
    }
    // 0x8006E118: andi        $a0, $s1, 0xFF
    ctx->r4 = ctx->r17 & 0XFF;
    // 0x8006E11C: jal         0x8004DD18
    // 0x8006E120: andi        $a1, $s0, 0xFF
    ctx->r5 = ctx->r16 & 0XFF;
    func_8004DD18(rdram, ctx);
        goto after_1;
    // 0x8006E120: andi        $a1, $s0, 0xFF
    ctx->r5 = ctx->r16 & 0XFF;
    after_1:
    // 0x8006E124: lbu         $t7, 0x1E($v0)
    ctx->r15 = MEM_BU(ctx->r2, 0X1E);
    // 0x8006E128: nop

    // 0x8006E12C: ori         $t8, $t7, 0x1
    ctx->r24 = ctx->r15 | 0X1;
    // 0x8006E130: sb          $t8, 0x1E($v0)
    MEM_B(0X1E, ctx->r2) = ctx->r24;
L_8006E134:
    // 0x8006E134: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x8006E138: andi        $t9, $s0, 0xFF
    ctx->r25 = ctx->r16 & 0XFF;
    // 0x8006E13C: slti        $at, $t9, 0x10
    ctx->r1 = SIGNED(ctx->r25) < 0X10 ? 1 : 0;
    // 0x8006E140: bne         $at, $zero, L_8006E100
    if (ctx->r1 != 0) {
        // 0x8006E144: or          $s0, $t9, $zero
        ctx->r16 = ctx->r25 | 0;
            goto L_8006E100;
    }
    // 0x8006E144: or          $s0, $t9, $zero
    ctx->r16 = ctx->r25 | 0;
    // 0x8006E148: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x8006E14C: andi        $t0, $s1, 0xFF
    ctx->r8 = ctx->r17 & 0XFF;
    // 0x8006E150: slti        $at, $t0, 0x2
    ctx->r1 = SIGNED(ctx->r8) < 0X2 ? 1 : 0;
    // 0x8006E154: bne         $at, $zero, L_8006E0FC
    if (ctx->r1 != 0) {
        // 0x8006E158: or          $s1, $t0, $zero
        ctx->r17 = ctx->r8 | 0;
            goto L_8006E0FC;
    }
    // 0x8006E158: or          $s1, $t0, $zero
    ctx->r17 = ctx->r8 | 0;
    // 0x8006E15C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8006E160: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x8006E164: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x8006E168: jr          $ra
    // 0x8006E16C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x8006E16C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_8006E170(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8006E170: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x8006E174: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x8006E178: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x8006E17C: sw          $a1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r5;
    // 0x8006E180: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x8006E184: sw          $a2, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r6;
    // 0x8006E188: sw          $a3, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r7;
    // 0x8006E18C: jal         0x8002A7F8
    // 0x8006E190: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_8002A7F8(rdram, ctx);
        goto after_0;
    // 0x8006E190: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_0:
    // 0x8006E194: sw          $v0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r2;
    // 0x8006E198: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8006E19C: jal         0x8002A7F8
    // 0x8006E1A0: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    func_8002A7F8(rdram, ctx);
        goto after_1;
    // 0x8006E1A0: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_1:
    // 0x8006E1A4: sw          $v0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r2;
    // 0x8006E1A8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8006E1AC: jal         0x8002A7F8
    // 0x8006E1B0: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    func_8002A7F8(rdram, ctx);
        goto after_2;
    // 0x8006E1B0: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_2:
    // 0x8006E1B4: sw          $v0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r2;
    // 0x8006E1B8: jal         0x8006E48C
    // 0x8006E1BC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8006E48C(rdram, ctx);
        goto after_3;
    // 0x8006E1BC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_3:
    // 0x8006E1C0: lh          $a1, 0x3E($sp)
    ctx->r5 = MEM_H(ctx->r29, 0X3E);
    // 0x8006E1C4: lh          $a2, 0x42($sp)
    ctx->r6 = MEM_H(ctx->r29, 0X42);
    // 0x8006E1C8: jal         0x8004CD44
    // 0x8006E1CC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8004CD44(rdram, ctx);
        goto after_4;
    // 0x8006E1CC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_4:
    // 0x8006E1D0: lw          $a0, 0x34($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X34);
    // 0x8006E1D4: jal         0x8006E50C
    // 0x8006E1D8: nop

    func_8006E50C(rdram, ctx);
        goto after_5;
    // 0x8006E1D8: nop

    after_5:
    // 0x8006E1DC: lw          $a0, 0x34($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X34);
    // 0x8006E1E0: lh          $a1, 0x3E($sp)
    ctx->r5 = MEM_H(ctx->r29, 0X3E);
    // 0x8006E1E4: lh          $a2, 0x42($sp)
    ctx->r6 = MEM_H(ctx->r29, 0X42);
    // 0x8006E1E8: jal         0x8004CD44
    // 0x8006E1EC: nop

    func_8004CD44(rdram, ctx);
        goto after_6;
    // 0x8006E1EC: nop

    after_6:
    // 0x8006E1F0: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    // 0x8006E1F4: jal         0x8006E54C
    // 0x8006E1F8: nop

    func_8006E54C(rdram, ctx);
        goto after_7;
    // 0x8006E1F8: nop

    after_7:
    // 0x8006E1FC: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    // 0x8006E200: lh          $a1, 0x3E($sp)
    ctx->r5 = MEM_H(ctx->r29, 0X3E);
    // 0x8006E204: lh          $a2, 0x42($sp)
    ctx->r6 = MEM_H(ctx->r29, 0X42);
    // 0x8006E208: jal         0x8004CD44
    // 0x8006E20C: nop

    func_8004CD44(rdram, ctx);
        goto after_8;
    // 0x8006E20C: nop

    after_8:
    // 0x8006E210: lh          $t6, 0x42($sp)
    ctx->r14 = MEM_H(ctx->r29, 0X42);
    // 0x8006E214: lbu         $t7, 0x47($sp)
    ctx->r15 = MEM_BU(ctx->r29, 0X47);
    // 0x8006E218: lw          $a0, 0x2C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X2C);
    // 0x8006E21C: lh          $a3, 0x3E($sp)
    ctx->r7 = MEM_H(ctx->r29, 0X3E);
    // 0x8006E220: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8006E224: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x8006E228: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x8006E22C: jal         0x8006E654
    // 0x8006E230: sw          $t7, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r15;
    func_8006E654(rdram, ctx);
        goto after_9;
    // 0x8006E230: sw          $t7, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r15;
    after_9:
    // 0x8006E234: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x8006E238: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x8006E23C: jr          $ra
    // 0x8006E240: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    return;
    // 0x8006E240: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_8006E244(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8006E244: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8006E248: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x8006E24C: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x8006E250: lh          $t6, 0x36($sp)
    ctx->r14 = MEM_H(ctx->r29, 0X36);
    // 0x8006E254: lbu         $t7, 0x3B($sp)
    ctx->r15 = MEM_BU(ctx->r29, 0X3B);
    // 0x8006E258: sw          $a2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r6;
    // 0x8006E25C: sw          $a3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r7;
    // 0x8006E260: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    // 0x8006E264: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8006E268: lb          $a2, 0x27($sp)
    ctx->r6 = MEM_B(ctx->r29, 0X27);
    // 0x8006E26C: lh          $a3, 0x32($sp)
    ctx->r7 = MEM_H(ctx->r29, 0X32);
    // 0x8006E270: lbu         $a1, 0x23($sp)
    ctx->r5 = MEM_BU(ctx->r29, 0X23);
    // 0x8006E274: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x8006E278: jal         0x8006E2F0
    // 0x8006E27C: sw          $t7, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r15;
    func_8006E2F0(rdram, ctx);
        goto after_0;
    // 0x8006E27C: sw          $t7, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r15;
    after_0:
    // 0x8006E280: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    // 0x8006E284: jal         0x8002A7F8
    // 0x8006E288: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    func_8002A7F8(rdram, ctx);
        goto after_1;
    // 0x8006E288: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    after_1:
    // 0x8006E28C: lh          $t8, 0x32($sp)
    ctx->r24 = MEM_H(ctx->r29, 0X32);
    // 0x8006E290: lh          $t0, 0x36($sp)
    ctx->r8 = MEM_H(ctx->r29, 0X36);
    // 0x8006E294: lbu         $a1, 0x2F($sp)
    ctx->r5 = MEM_BU(ctx->r29, 0X2F);
    // 0x8006E298: lbu         $a2, 0x23($sp)
    ctx->r6 = MEM_BU(ctx->r29, 0X23);
    // 0x8006E29C: lb          $a3, 0x27($sp)
    ctx->r7 = MEM_B(ctx->r29, 0X27);
    // 0x8006E2A0: addiu       $t9, $t8, 0x2
    ctx->r25 = ADD32(ctx->r24, 0X2);
    // 0x8006E2A4: addiu       $t1, $t0, 0x2
    ctx->r9 = ADD32(ctx->r8, 0X2);
    // 0x8006E2A8: sw          $t1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r9;
    // 0x8006E2AC: sw          $t9, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r25;
    // 0x8006E2B0: jal         0x8006E58C
    // 0x8006E2B4: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    func_8006E58C(rdram, ctx);
        goto after_2;
    // 0x8006E2B4: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    after_2:
    // 0x8006E2B8: lbu         $a0, 0x2F($sp)
    ctx->r4 = MEM_BU(ctx->r29, 0X2F);
    // 0x8006E2BC: lh          $t3, 0x36($sp)
    ctx->r11 = MEM_H(ctx->r29, 0X36);
    // 0x8006E2C0: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    // 0x8006E2C4: andi        $t2, $a0, 0xFF
    ctx->r10 = ctx->r4 & 0XFF;
    // 0x8006E2C8: lbu         $a1, 0x23($sp)
    ctx->r5 = MEM_BU(ctx->r29, 0X23);
    // 0x8006E2CC: lb          $a2, 0x27($sp)
    ctx->r6 = MEM_B(ctx->r29, 0X27);
    // 0x8006E2D0: lh          $a3, 0x32($sp)
    ctx->r7 = MEM_H(ctx->r29, 0X32);
    // 0x8006E2D4: or          $a0, $t2, $zero
    ctx->r4 = ctx->r10 | 0;
    // 0x8006E2D8: jal         0x8006E830
    // 0x8006E2DC: sw          $t3, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r11;
    func_8006E830(rdram, ctx);
        goto after_3;
    // 0x8006E2DC: sw          $t3, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r11;
    after_3:
    // 0x8006E2E0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8006E2E4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x8006E2E8: jr          $ra
    // 0x8006E2EC: nop

    return;
    // 0x8006E2EC: nop

;}
RECOMP_FUNC void func_8006E2F0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8006E2F0: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x8006E2F4: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8006E2F8: sw          $a1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r5;
    // 0x8006E2FC: sw          $a0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r4;
    // 0x8006E300: sw          $a2, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r6;
    // 0x8006E304: sw          $a3, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r7;
    // 0x8006E308: jal         0x8002A7F8
    // 0x8006E30C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_8002A7F8(rdram, ctx);
        goto after_0;
    // 0x8006E30C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_0:
    // 0x8006E310: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    // 0x8006E314: sw          $v0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r2;
    // 0x8006E318: jal         0x8002A7F8
    // 0x8006E31C: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    func_8002A7F8(rdram, ctx);
        goto after_1;
    // 0x8006E31C: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_1:
    // 0x8006E320: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    // 0x8006E324: sw          $v0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r2;
    // 0x8006E328: jal         0x8002A7F8
    // 0x8006E32C: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    func_8002A7F8(rdram, ctx);
        goto after_2;
    // 0x8006E32C: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    after_2:
    // 0x8006E330: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    // 0x8006E334: lh          $a1, 0x3E($sp)
    ctx->r5 = MEM_H(ctx->r29, 0X3E);
    // 0x8006E338: lh          $a2, 0x42($sp)
    ctx->r6 = MEM_H(ctx->r29, 0X42);
    // 0x8006E33C: jal         0x8004CD44
    // 0x8006E340: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
    func_8004CD44(rdram, ctx);
        goto after_3;
    // 0x8006E340: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
    after_3:
    // 0x8006E344: lw          $a0, 0x2C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X2C);
    // 0x8006E348: lh          $a1, 0x3E($sp)
    ctx->r5 = MEM_H(ctx->r29, 0X3E);
    // 0x8006E34C: lh          $a2, 0x42($sp)
    ctx->r6 = MEM_H(ctx->r29, 0X42);
    // 0x8006E350: jal         0x8004CD44
    // 0x8006E354: nop

    func_8004CD44(rdram, ctx);
        goto after_4;
    // 0x8006E354: nop

    after_4:
    // 0x8006E358: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    // 0x8006E35C: lh          $a1, 0x3E($sp)
    ctx->r5 = MEM_H(ctx->r29, 0X3E);
    // 0x8006E360: lh          $a2, 0x42($sp)
    ctx->r6 = MEM_H(ctx->r29, 0X42);
    // 0x8006E364: jal         0x8004CD44
    // 0x8006E368: nop

    func_8004CD44(rdram, ctx);
        goto after_5;
    // 0x8006E368: nop

    after_5:
    // 0x8006E36C: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    // 0x8006E370: lh          $a1, 0x3E($sp)
    ctx->r5 = MEM_H(ctx->r29, 0X3E);
    // 0x8006E374: lh          $a2, 0x42($sp)
    ctx->r6 = MEM_H(ctx->r29, 0X42);
    // 0x8006E378: jal         0x8004CD44
    // 0x8006E37C: nop

    func_8004CD44(rdram, ctx);
        goto after_6;
    // 0x8006E37C: nop

    after_6:
    // 0x8006E380: lbu         $a0, 0x37($sp)
    ctx->r4 = MEM_BU(ctx->r29, 0X37);
    // 0x8006E384: lb          $a1, 0x3B($sp)
    ctx->r5 = MEM_B(ctx->r29, 0X3B);
    // 0x8006E388: jal         0x8006DD88
    // 0x8006E38C: nop

    func_8006DD88(rdram, ctx);
        goto after_7;
    // 0x8006E38C: nop

    after_7:
    // 0x8006E390: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8006E394: beq         $v0, $at, L_8006E3B8
    if (ctx->r2 == ctx->r1) {
        // 0x8006E398: lw          $a0, 0x30($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X30);
            goto L_8006E3B8;
    }
    // 0x8006E398: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    // 0x8006E39C: lbu         $a0, 0x37($sp)
    ctx->r4 = MEM_BU(ctx->r29, 0X37);
    // 0x8006E3A0: lb          $a1, 0x3B($sp)
    ctx->r5 = MEM_B(ctx->r29, 0X3B);
    // 0x8006E3A4: jal         0x8006DDD0
    // 0x8006E3A8: nop

    func_8006DDD0(rdram, ctx);
        goto after_8;
    // 0x8006E3A8: nop

    after_8:
    // 0x8006E3AC: bne         $v0, $zero, L_8006E408
    if (ctx->r2 != 0) {
        // 0x8006E3B0: lw          $a0, 0x30($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X30);
            goto L_8006E408;
    }
    // 0x8006E3B0: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    // 0x8006E3B4: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
L_8006E3B8:
    // 0x8006E3B8: jal         0x8006E4CC
    // 0x8006E3BC: nop

    func_8006E4CC(rdram, ctx);
        goto after_9;
    // 0x8006E3BC: nop

    after_9:
    // 0x8006E3C0: lw          $t6, 0x2C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X2C);
    // 0x8006E3C4: nop

    // 0x8006E3C8: sb          $zero, 0x4($t6)
    MEM_B(0X4, ctx->r14) = 0;
    // 0x8006E3CC: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    // 0x8006E3D0: jal         0x8006E54C
    // 0x8006E3D4: nop

    func_8006E54C(rdram, ctx);
        goto after_10;
    // 0x8006E3D4: nop

    after_10:
    // 0x8006E3D8: lh          $t7, 0x42($sp)
    ctx->r15 = MEM_H(ctx->r29, 0X42);
    // 0x8006E3DC: lbu         $t8, 0x47($sp)
    ctx->r24 = MEM_BU(ctx->r29, 0X47);
    // 0x8006E3E0: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    // 0x8006E3E4: lbu         $a1, 0x37($sp)
    ctx->r5 = MEM_BU(ctx->r29, 0X37);
    // 0x8006E3E8: lb          $a2, 0x3B($sp)
    ctx->r6 = MEM_B(ctx->r29, 0X3B);
    // 0x8006E3EC: lh          $a3, 0x3E($sp)
    ctx->r7 = MEM_H(ctx->r29, 0X3E);
    // 0x8006E3F0: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x8006E3F4: jal         0x8006E654
    // 0x8006E3F8: sw          $t8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r24;
    func_8006E654(rdram, ctx);
        goto after_11;
    // 0x8006E3F8: sw          $t8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r24;
    after_11:
    // 0x8006E3FC: b           L_8006E480
    // 0x8006E400: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_8006E480;
    // 0x8006E400: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8006E404: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
L_8006E408:
    // 0x8006E408: jal         0x8006E48C
    // 0x8006E40C: nop

    func_8006E48C(rdram, ctx);
        goto after_12;
    // 0x8006E40C: nop

    after_12:
    // 0x8006E410: lw          $a0, 0x2C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X2C);
    // 0x8006E414: jal         0x8006E50C
    // 0x8006E418: nop

    func_8006E50C(rdram, ctx);
        goto after_13;
    // 0x8006E418: nop

    after_13:
    // 0x8006E41C: lb          $t9, 0x3B($sp)
    ctx->r25 = MEM_B(ctx->r29, 0X3B);
    // 0x8006E420: addiu       $at, $zero, 0xF
    ctx->r1 = ADD32(0, 0XF);
    // 0x8006E424: beq         $t9, $zero, L_8006E434
    if (ctx->r25 == 0) {
        // 0x8006E428: addiu       $t0, $zero, 0x1
        ctx->r8 = ADD32(0, 0X1);
            goto L_8006E434;
    }
    // 0x8006E428: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x8006E42C: bne         $t9, $at, L_8006E444
    if (ctx->r25 != ctx->r1) {
        // 0x8006E430: lw          $t2, 0x2C($sp)
        ctx->r10 = MEM_W(ctx->r29, 0X2C);
            goto L_8006E444;
    }
    // 0x8006E430: lw          $t2, 0x2C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X2C);
L_8006E434:
    // 0x8006E434: lw          $t1, 0x2C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X2C);
    // 0x8006E438: b           L_8006E44C
    // 0x8006E43C: sb          $t0, 0x4($t1)
    MEM_B(0X4, ctx->r9) = ctx->r8;
        goto L_8006E44C;
    // 0x8006E43C: sb          $t0, 0x4($t1)
    MEM_B(0X4, ctx->r9) = ctx->r8;
    // 0x8006E440: lw          $t2, 0x2C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X2C);
L_8006E444:
    // 0x8006E444: nop

    // 0x8006E448: sb          $zero, 0x4($t2)
    MEM_B(0X4, ctx->r10) = 0;
L_8006E44C:
    // 0x8006E44C: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    // 0x8006E450: jal         0x8006E54C
    // 0x8006E454: nop

    func_8006E54C(rdram, ctx);
        goto after_14;
    // 0x8006E454: nop

    after_14:
    // 0x8006E458: lh          $t3, 0x42($sp)
    ctx->r11 = MEM_H(ctx->r29, 0X42);
    // 0x8006E45C: lbu         $t4, 0x47($sp)
    ctx->r12 = MEM_BU(ctx->r29, 0X47);
    // 0x8006E460: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    // 0x8006E464: lbu         $a1, 0x37($sp)
    ctx->r5 = MEM_BU(ctx->r29, 0X37);
    // 0x8006E468: lb          $a2, 0x3B($sp)
    ctx->r6 = MEM_B(ctx->r29, 0X3B);
    // 0x8006E46C: lh          $a3, 0x3E($sp)
    ctx->r7 = MEM_H(ctx->r29, 0X3E);
    // 0x8006E470: sw          $t3, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r11;
    // 0x8006E474: jal         0x8006E654
    // 0x8006E478: sw          $t4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r12;
    func_8006E654(rdram, ctx);
        goto after_15;
    // 0x8006E478: sw          $t4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r12;
    after_15:
    // 0x8006E47C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_8006E480:
    // 0x8006E480: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x8006E484: jr          $ra
    // 0x8006E488: nop

    return;
    // 0x8006E488: nop

;}
RECOMP_FUNC void func_8006E48C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8006E48C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8006E490: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8006E494: lui         $a3, 0x803C
    ctx->r7 = S32(0X803C << 16);
    // 0x8006E498: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8006E49C: addiu       $a3, $a3, 0x7238
    ctx->r7 = ADD32(ctx->r7, 0X7238);
    // 0x8006E4A0: addiu       $a1, $zero, 0x2A0
    ctx->r5 = ADD32(0, 0X2A0);
    // 0x8006E4A4: jal         0x8004CD24
    // 0x8006E4A8: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    func_8004CD24(rdram, ctx);
        goto after_0;
    // 0x8006E4A8: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_0:
    // 0x8006E4AC: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x8006E4B0: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x8006E4B4: jal         0x8002135C
    // 0x8006E4B8: addiu       $a2, $zero, 0xD4
    ctx->r6 = ADD32(0, 0XD4);
    func_8002135C(rdram, ctx);
        goto after_1;
    // 0x8006E4B8: addiu       $a2, $zero, 0xD4
    ctx->r6 = ADD32(0, 0XD4);
    after_1:
    // 0x8006E4BC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8006E4C0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8006E4C4: jr          $ra
    // 0x8006E4C8: nop

    return;
    // 0x8006E4C8: nop

;}
RECOMP_FUNC void func_8006E4CC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8006E4CC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8006E4D0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8006E4D4: lui         $a3, 0x803C
    ctx->r7 = S32(0X803C << 16);
    // 0x8006E4D8: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8006E4DC: addiu       $a3, $a3, 0x7238
    ctx->r7 = ADD32(ctx->r7, 0X7238);
    // 0x8006E4E0: addiu       $a1, $zero, 0x330
    ctx->r5 = ADD32(0, 0X330);
    // 0x8006E4E4: jal         0x8004CD24
    // 0x8006E4E8: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    func_8004CD24(rdram, ctx);
        goto after_0;
    // 0x8006E4E8: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_0:
    // 0x8006E4EC: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x8006E4F0: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x8006E4F4: jal         0x8002135C
    // 0x8006E4F8: addiu       $a2, $zero, 0xD6
    ctx->r6 = ADD32(0, 0XD6);
    func_8002135C(rdram, ctx);
        goto after_1;
    // 0x8006E4F8: addiu       $a2, $zero, 0xD6
    ctx->r6 = ADD32(0, 0XD6);
    after_1:
    // 0x8006E4FC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8006E500: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8006E504: jr          $ra
    // 0x8006E508: nop

    return;
    // 0x8006E508: nop

;}
RECOMP_FUNC void func_8006E50C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8006E50C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8006E510: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8006E514: lui         $a3, 0x803C
    ctx->r7 = S32(0X803C << 16);
    // 0x8006E518: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8006E51C: addiu       $a3, $a3, 0x6D1C
    ctx->r7 = ADD32(ctx->r7, 0X6D1C);
    // 0x8006E520: addiu       $a1, $zero, 0x2A2
    ctx->r5 = ADD32(0, 0X2A2);
    // 0x8006E524: jal         0x8004CD24
    // 0x8006E528: addiu       $a2, $zero, 0x9
    ctx->r6 = ADD32(0, 0X9);
    func_8004CD24(rdram, ctx);
        goto after_0;
    // 0x8006E528: addiu       $a2, $zero, 0x9
    ctx->r6 = ADD32(0, 0X9);
    after_0:
    // 0x8006E52C: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x8006E530: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x8006E534: jal         0x8002135C
    // 0x8006E538: addiu       $a2, $zero, 0xD4
    ctx->r6 = ADD32(0, 0XD4);
    func_8002135C(rdram, ctx);
        goto after_1;
    // 0x8006E538: addiu       $a2, $zero, 0xD4
    ctx->r6 = ADD32(0, 0XD4);
    after_1:
    // 0x8006E53C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8006E540: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8006E544: jr          $ra
    // 0x8006E548: nop

    return;
    // 0x8006E548: nop

;}
RECOMP_FUNC void func_8006E54C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8006E54C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8006E550: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8006E554: lui         $a3, 0x803C
    ctx->r7 = S32(0X803C << 16);
    // 0x8006E558: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8006E55C: addiu       $a3, $a3, 0x6824
    ctx->r7 = ADD32(ctx->r7, 0X6824);
    // 0x8006E560: addiu       $a1, $zero, 0x3FF
    ctx->r5 = ADD32(0, 0X3FF);
    // 0x8006E564: jal         0x8004CD24
    // 0x8006E568: addiu       $a2, $zero, 0x9
    ctx->r6 = ADD32(0, 0X9);
    func_8004CD24(rdram, ctx);
        goto after_0;
    // 0x8006E568: addiu       $a2, $zero, 0x9
    ctx->r6 = ADD32(0, 0X9);
    after_0:
    // 0x8006E56C: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x8006E570: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x8006E574: jal         0x8002135C
    // 0x8006E578: addiu       $a2, $zero, 0xD6
    ctx->r6 = ADD32(0, 0XD6);
    func_8002135C(rdram, ctx);
        goto after_1;
    // 0x8006E578: addiu       $a2, $zero, 0xD6
    ctx->r6 = ADD32(0, 0XD6);
    after_1:
    // 0x8006E57C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8006E580: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8006E584: jr          $ra
    // 0x8006E588: nop

    return;
    // 0x8006E588: nop

;}
RECOMP_FUNC void func_8006E58C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8006E58C: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8006E590: sw          $a2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r6;
    // 0x8006E594: sw          $a3, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r7;
    // 0x8006E598: lbu         $a2, 0x37($sp)
    ctx->r6 = MEM_BU(ctx->r29, 0X37);
    // 0x8006E59C: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x8006E5A0: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8006E5A4: lbu         $a1, 0x33($sp)
    ctx->r5 = MEM_BU(ctx->r29, 0X33);
    // 0x8006E5A8: lui         $a3, 0x803D
    ctx->r7 = S32(0X803D << 16);
    // 0x8006E5AC: addiu       $a3, $a3, 0x23D8
    ctx->r7 = ADD32(ctx->r7, 0X23D8);
    // 0x8006E5B0: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x8006E5B4: jal         0x8004C4B0
    // 0x8006E5B8: sw          $a2, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r6;
    func_8004C4B0(rdram, ctx);
        goto after_0;
    // 0x8006E5B8: sw          $a2, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r6;
    after_0:
    // 0x8006E5BC: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    // 0x8006E5C0: addiu       $t6, $zero, 0x9
    ctx->r14 = ADD32(0, 0X9);
    // 0x8006E5C4: addiu       $t7, $zero, 0x80
    ctx->r15 = ADD32(0, 0X80);
    // 0x8006E5C8: sb          $t6, 0x5($a0)
    MEM_B(0X5, ctx->r4) = ctx->r14;
    // 0x8006E5CC: sh          $t7, 0x6($a0)
    MEM_H(0X6, ctx->r4) = ctx->r15;
    // 0x8006E5D0: lh          $a2, 0x3E($sp)
    ctx->r6 = MEM_H(ctx->r29, 0X3E);
    // 0x8006E5D4: lh          $a1, 0x3A($sp)
    ctx->r5 = MEM_H(ctx->r29, 0X3A);
    // 0x8006E5D8: jal         0x8004CD44
    // 0x8006E5DC: nop

    func_8004CD44(rdram, ctx);
        goto after_1;
    // 0x8006E5DC: nop

    after_1:
    // 0x8006E5E0: lbu         $t8, 0x2F($sp)
    ctx->r24 = MEM_BU(ctx->r29, 0X2F);
    // 0x8006E5E4: lh          $a3, 0x3A($sp)
    ctx->r7 = MEM_H(ctx->r29, 0X3A);
    // 0x8006E5E8: lui         $t0, 0x800E
    ctx->r8 = S32(0X800E << 16);
    // 0x8006E5EC: lh          $t3, 0x3E($sp)
    ctx->r11 = MEM_H(ctx->r29, 0X3E);
    // 0x8006E5F0: addiu       $t0, $t0, -0x3770
    ctx->r8 = ADD32(ctx->r8, -0X3770);
    // 0x8006E5F4: lui         $at, 0x2
    ctx->r1 = S32(0X2 << 16);
    // 0x8006E5F8: sll         $t9, $t8, 5
    ctx->r25 = S32(ctx->r24 << 5);
    // 0x8006E5FC: addiu       $a3, $a3, 0x2
    ctx->r7 = ADD32(ctx->r7, 0X2);
    // 0x8006E600: sll         $t1, $a3, 16
    ctx->r9 = S32(ctx->r7 << 16);
    // 0x8006E604: addu        $v1, $t9, $t0
    ctx->r3 = ADD32(ctx->r25, ctx->r8);
    // 0x8006E608: ori         $at, $at, 0xFEE8
    ctx->r1 = ctx->r1 | 0XFEE8;
    // 0x8006E60C: lbu         $a1, 0x33($sp)
    ctx->r5 = MEM_BU(ctx->r29, 0X33);
    // 0x8006E610: lbu         $a2, 0x27($sp)
    ctx->r6 = MEM_BU(ctx->r29, 0X27);
    // 0x8006E614: addu        $a0, $v1, $at
    ctx->r4 = ADD32(ctx->r3, ctx->r1);
    // 0x8006E618: sw          $v1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r3;
    // 0x8006E61C: sra         $a3, $t1, 16
    ctx->r7 = S32(SIGNED(ctx->r9) >> 16);
    // 0x8006E620: jal         0x8004CEE8
    // 0x8006E624: sw          $t3, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r11;
    func_8004CEE8(rdram, ctx);
        goto after_2;
    // 0x8006E624: sw          $t3, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r11;
    after_2:
    // 0x8006E628: lw          $v1, 0x20($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X20);
    // 0x8006E62C: lui         $at, 0x2
    ctx->r1 = S32(0X2 << 16);
    // 0x8006E630: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8006E634: ori         $at, $at, 0x8000
    ctx->r1 = ctx->r1 | 0X8000;
    // 0x8006E638: addiu       $t4, $zero, 0x70
    ctx->r12 = ADD32(0, 0X70);
    // 0x8006E63C: addiu       $t5, $zero, 0xA
    ctx->r13 = ADD32(0, 0XA);
    // 0x8006E640: addu        $v0, $v1, $at
    ctx->r2 = ADD32(ctx->r3, ctx->r1);
    // 0x8006E644: sh          $t4, 0x7EEE($v0)
    MEM_H(0X7EEE, ctx->r2) = ctx->r12;
    // 0x8006E648: sb          $t5, 0x7EED($v0)
    MEM_B(0X7EED, ctx->r2) = ctx->r13;
    // 0x8006E64C: jr          $ra
    // 0x8006E650: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x8006E650: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_8006E654(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8006E654: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8006E658: sw          $a3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r7;
    // 0x8006E65C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8006E660: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x8006E664: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    // 0x8006E668: andi        $t6, $a1, 0xFF
    ctx->r14 = ctx->r5 & 0XFF;
    // 0x8006E66C: sll         $t7, $a2, 24
    ctx->r15 = S32(ctx->r6 << 24);
    // 0x8006E670: lbu         $a3, 0x2F($sp)
    ctx->r7 = MEM_BU(ctx->r29, 0X2F);
    // 0x8006E674: sra         $a2, $t7, 24
    ctx->r6 = S32(SIGNED(ctx->r15) >> 24);
    // 0x8006E678: or          $a1, $t6, $zero
    ctx->r5 = ctx->r14 | 0;
    // 0x8006E67C: jal         0x8006E6BC
    // 0x8006E680: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_8006E6BC(rdram, ctx);
        goto after_0;
    // 0x8006E680: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x8006E684: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x8006E688: lui         $t9, 0x803D
    ctx->r25 = S32(0X803D << 16);
    // 0x8006E68C: addiu       $t9, $t9, -0x5780
    ctx->r25 = ADD32(ctx->r25, -0X5780);
    // 0x8006E690: addiu       $t0, $zero, 0x8
    ctx->r8 = ADD32(0, 0X8);
    // 0x8006E694: sw          $t9, 0x30($a0)
    MEM_W(0X30, ctx->r4) = ctx->r25;
    // 0x8006E698: sb          $t0, 0x5($a0)
    MEM_B(0X5, ctx->r4) = ctx->r8;
    // 0x8006E69C: lh          $a2, 0x2A($sp)
    ctx->r6 = MEM_H(ctx->r29, 0X2A);
    // 0x8006E6A0: lh          $a1, 0x26($sp)
    ctx->r5 = MEM_H(ctx->r29, 0X26);
    // 0x8006E6A4: jal         0x8004CD44
    // 0x8006E6A8: nop

    func_8004CD44(rdram, ctx);
        goto after_1;
    // 0x8006E6A8: nop

    after_1:
    // 0x8006E6AC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8006E6B0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8006E6B4: jr          $ra
    // 0x8006E6B8: nop

    return;
    // 0x8006E6B8: nop

;}
RECOMP_FUNC void func_8006E6BC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8006E6BC: andi        $t6, $a1, 0xFF
    ctx->r14 = ctx->r5 & 0XFF;
    // 0x8006E6C0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8006E6C4: sll         $t1, $t6, 2
    ctx->r9 = S32(ctx->r14 << 2);
    // 0x8006E6C8: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    // 0x8006E6CC: addu        $t1, $t1, $t6
    ctx->r9 = ADD32(ctx->r9, ctx->r14);
    // 0x8006E6D0: lb          $t9, 0x23($sp)
    ctx->r25 = MEM_B(ctx->r29, 0X23);
    // 0x8006E6D4: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x8006E6D8: sll         $t8, $t6, 4
    ctx->r24 = S32(ctx->r14 << 4);
    // 0x8006E6DC: addu        $t1, $t1, $t6
    ctx->r9 = ADD32(ctx->r9, ctx->r14);
    // 0x8006E6E0: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x8006E6E4: sll         $t1, $t1, 3
    ctx->r9 = S32(ctx->r9 << 3);
    // 0x8006E6E8: addu        $t0, $t8, $t9
    ctx->r8 = ADD32(ctx->r24, ctx->r25);
    // 0x8006E6EC: addu        $v0, $v0, $t0
    ctx->r2 = ADD32(ctx->r2, ctx->r8);
    // 0x8006E6F0: addu        $t1, $t1, $t6
    ctx->r9 = ADD32(ctx->r9, ctx->r14);
    // 0x8006E6F4: lbu         $v0, -0x3292($v0)
    ctx->r2 = MEM_BU(ctx->r2, -0X3292);
    // 0x8006E6F8: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x8006E6FC: addu        $t1, $t1, $t6
    ctx->r9 = ADD32(ctx->r9, ctx->r14);
    // 0x8006E700: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x8006E704: sll         $t2, $v0, 1
    ctx->r10 = S32(ctx->r2 << 1);
    // 0x8006E708: addu        $t3, $t1, $t2
    ctx->r11 = ADD32(ctx->r9, ctx->r10);
    // 0x8006E70C: lui         $t5, 0x8012
    ctx->r13 = S32(0X8012 << 16);
    // 0x8006E710: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8006E714: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x8006E718: sw          $a3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r7;
    // 0x8006E71C: andi        $t7, $a3, 0xFF
    ctx->r15 = ctx->r7 & 0XFF;
    // 0x8006E720: addiu       $t5, $t5, -0x2CF0
    ctx->r13 = ADD32(ctx->r13, -0X2CF0);
    // 0x8006E724: addiu       $t4, $t3, 0x2E8
    ctx->r12 = ADD32(ctx->r11, 0X2E8);
    // 0x8006E728: or          $a3, $t7, $zero
    ctx->r7 = ctx->r15 | 0;
    // 0x8006E72C: or          $a1, $t6, $zero
    ctx->r5 = ctx->r14 | 0;
    // 0x8006E730: jal         0x8006E748
    // 0x8006E734: addu        $a2, $t4, $t5
    ctx->r6 = ADD32(ctx->r12, ctx->r13);
    func_8006E748(rdram, ctx);
        goto after_0;
    // 0x8006E734: addu        $a2, $t4, $t5
    ctx->r6 = ADD32(ctx->r12, ctx->r13);
    after_0:
    // 0x8006E738: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8006E73C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8006E740: jr          $ra
    // 0x8006E744: nop

    return;
    // 0x8006E744: nop

;}
RECOMP_FUNC void func_8006E748(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8006E748: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8006E74C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8006E750: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x8006E754: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x8006E758: sw          $a3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r7;
    // 0x8006E75C: lbu         $v0, 0x0($a2)
    ctx->r2 = MEM_BU(ctx->r6, 0X0);
    // 0x8006E760: lbu         $t6, 0x1($a2)
    ctx->r14 = MEM_BU(ctx->r6, 0X1);
    // 0x8006E764: sll         $a0, $v0, 16
    ctx->r4 = S32(ctx->r2 << 16);
    // 0x8006E768: sra         $t7, $a0, 16
    ctx->r15 = S32(SIGNED(ctx->r4) >> 16);
    // 0x8006E76C: or          $a0, $t7, $zero
    ctx->r4 = ctx->r15 | 0;
    // 0x8006E770: sb          $v0, 0x1F($sp)
    MEM_B(0X1F, ctx->r29) = ctx->r2;
    // 0x8006E774: jal         0x8006E7F0
    // 0x8006E778: sb          $t6, 0x1E($sp)
    MEM_B(0X1E, ctx->r29) = ctx->r14;
    func_8006E7F0(rdram, ctx);
        goto after_0;
    // 0x8006E778: sb          $t6, 0x1E($sp)
    MEM_B(0X1E, ctx->r29) = ctx->r14;
    after_0:
    // 0x8006E77C: lbu         $a2, 0x1E($sp)
    ctx->r6 = MEM_BU(ctx->r29, 0X1E);
    // 0x8006E780: bltz        $v0, L_8006E7D0
    if (SIGNED(ctx->r2) < 0) {
        // 0x8006E784: lw          $a0, 0x20($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X20);
            goto L_8006E7D0;
    }
    // 0x8006E784: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x8006E788: lbu         $t8, 0x27($sp)
    ctx->r24 = MEM_BU(ctx->r29, 0X27);
    // 0x8006E78C: sll         $t0, $v0, 4
    ctx->r8 = S32(ctx->r2 << 4);
    // 0x8006E790: sll         $t9, $t8, 2
    ctx->r25 = S32(ctx->r24 << 2);
    // 0x8006E794: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x8006E798: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x8006E79C: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x8006E7A0: sll         $t9, $t9, 3
    ctx->r25 = S32(ctx->r25 << 3);
    // 0x8006E7A4: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x8006E7A8: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x8006E7AC: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x8006E7B0: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x8006E7B4: addu        $t1, $t9, $t0
    ctx->r9 = ADD32(ctx->r25, ctx->r8);
    // 0x8006E7B8: addu        $t2, $t1, $a2
    ctx->r10 = ADD32(ctx->r9, ctx->r6);
    // 0x8006E7BC: lui         $a2, 0x8012
    ctx->r6 = S32(0X8012 << 16);
    // 0x8006E7C0: addu        $a2, $a2, $t2
    ctx->r6 = ADD32(ctx->r6, ctx->r10);
    // 0x8006E7C4: lbu         $a2, -0x232A($a2)
    ctx->r6 = MEM_BU(ctx->r6, -0X232A);
    // 0x8006E7C8: nop

    // 0x8006E7CC: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
L_8006E7D0:
    // 0x8006E7D0: lbu         $a1, 0x1F($sp)
    ctx->r5 = MEM_BU(ctx->r29, 0X1F);
    // 0x8006E7D4: lbu         $a3, 0x2F($sp)
    ctx->r7 = MEM_BU(ctx->r29, 0X2F);
    // 0x8006E7D8: jal         0x800392F4
    // 0x8006E7DC: nop

    func_800392F4(rdram, ctx);
        goto after_1;
    // 0x8006E7DC: nop

    after_1:
    // 0x8006E7E0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8006E7E4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x8006E7E8: jr          $ra
    // 0x8006E7EC: nop

    return;
    // 0x8006E7EC: nop

;}
RECOMP_FUNC void func_8006E7F0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8006E7F0: sll         $t6, $a0, 16
    ctx->r14 = S32(ctx->r4 << 16);
    // 0x8006E7F4: sra         $t7, $t6, 16
    ctx->r15 = S32(SIGNED(ctx->r14) >> 16);
    // 0x8006E7F8: addiu       $at, $zero, 0x2A
    ctx->r1 = ADD32(0, 0X2A);
    // 0x8006E7FC: beq         $t7, $at, L_8006E818
    if (ctx->r15 == ctx->r1) {
        // 0x8006E800: sw          $a0, 0x0($sp)
        MEM_W(0X0, ctx->r29) = ctx->r4;
            goto L_8006E818;
    }
    // 0x8006E800: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x8006E804: addiu       $at, $zero, 0x2B
    ctx->r1 = ADD32(0, 0X2B);
    // 0x8006E808: beq         $t7, $at, L_8006E820
    if (ctx->r15 == ctx->r1) {
        // 0x8006E80C: addiu       $v0, $zero, -0x1
        ctx->r2 = ADD32(0, -0X1);
            goto L_8006E820;
    }
    // 0x8006E80C: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x8006E810: b           L_8006E828
    // 0x8006E814: nop

        goto L_8006E828;
    // 0x8006E814: nop

L_8006E818:
    // 0x8006E818: jr          $ra
    // 0x8006E81C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    return;
    // 0x8006E81C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_8006E820:
    // 0x8006E820: jr          $ra
    // 0x8006E824: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    return;
    // 0x8006E824: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_8006E828:
    // 0x8006E828: jr          $ra
    // 0x8006E82C: nop

    return;
    // 0x8006E82C: nop

;}
RECOMP_FUNC void func_8006E830(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8006E830: addiu       $sp, $sp, -0x50
    ctx->r29 = ADD32(ctx->r29, -0X50);
    // 0x8006E834: sw          $s2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r18;
    // 0x8006E838: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    // 0x8006E83C: andi        $s0, $a1, 0xFF
    ctx->r16 = ctx->r5 & 0XFF;
    // 0x8006E840: andi        $s2, $a0, 0xFF
    ctx->r18 = ctx->r4 & 0XFF;
    // 0x8006E844: sw          $s3, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r19;
    // 0x8006E848: sw          $s1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r17;
    // 0x8006E84C: sw          $a1, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r5;
    // 0x8006E850: sll         $s1, $a2, 24
    ctx->r17 = S32(ctx->r6 << 24);
    // 0x8006E854: sll         $s3, $a3, 16
    ctx->r19 = S32(ctx->r7 << 16);
    // 0x8006E858: addiu       $a1, $s2, 0x9
    ctx->r5 = ADD32(ctx->r18, 0X9);
    // 0x8006E85C: sra         $t7, $s3, 16
    ctx->r15 = S32(SIGNED(ctx->r19) >> 16);
    // 0x8006E860: sra         $t6, $s1, 24
    ctx->r14 = S32(SIGNED(ctx->r17) >> 24);
    // 0x8006E864: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x8006E868: sw          $s4, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r20;
    // 0x8006E86C: sw          $a0, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r4;
    // 0x8006E870: andi        $t8, $a1, 0xFF
    ctx->r24 = ctx->r5 & 0XFF;
    // 0x8006E874: or          $s1, $t6, $zero
    ctx->r17 = ctx->r14 | 0;
    // 0x8006E878: or          $s3, $t7, $zero
    ctx->r19 = ctx->r15 | 0;
    // 0x8006E87C: sw          $a2, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r6;
    // 0x8006E880: sw          $a3, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r7;
    // 0x8006E884: or          $a1, $t8, $zero
    ctx->r5 = ctx->r24 | 0;
    // 0x8006E888: andi        $a0, $s2, 0xFF
    ctx->r4 = ctx->r18 & 0XFF;
    // 0x8006E88C: jal         0x8002F224
    // 0x8006E890: or          $s4, $s2, $zero
    ctx->r20 = ctx->r18 | 0;
    func_8002F224(rdram, ctx);
        goto after_0;
    // 0x8006E890: or          $s4, $s2, $zero
    ctx->r20 = ctx->r18 | 0;
    after_0:
    // 0x8006E894: sll         $a1, $s1, 24
    ctx->r5 = S32(ctx->r17 << 24);
    // 0x8006E898: sra         $t9, $a1, 24
    ctx->r25 = S32(SIGNED(ctx->r5) >> 24);
    // 0x8006E89C: or          $a1, $t9, $zero
    ctx->r5 = ctx->r25 | 0;
    // 0x8006E8A0: jal         0x8006DD88
    // 0x8006E8A4: andi        $a0, $s0, 0xFF
    ctx->r4 = ctx->r16 & 0XFF;
    func_8006DD88(rdram, ctx);
        goto after_1;
    // 0x8006E8A4: andi        $a0, $s0, 0xFF
    ctx->r4 = ctx->r16 & 0XFF;
    after_1:
    // 0x8006E8A8: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8006E8AC: bne         $v0, $at, L_8006EA14
    if (ctx->r2 != ctx->r1) {
        // 0x8006E8B0: andi        $a0, $s0, 0xFF
        ctx->r4 = ctx->r16 & 0XFF;
            goto L_8006EA14;
    }
    // 0x8006E8B0: andi        $a0, $s0, 0xFF
    ctx->r4 = ctx->r16 & 0XFF;
    // 0x8006E8B4: andi        $a1, $s1, 0xFF
    ctx->r5 = ctx->r17 & 0XFF;
    // 0x8006E8B8: sw          $a1, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r5;
    // 0x8006E8BC: jal         0x8004D808
    // 0x8006E8C0: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    func_8004D808(rdram, ctx);
        goto after_2;
    // 0x8006E8C0: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    after_2:
    // 0x8006E8C4: lw          $a1, 0x44($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X44);
    // 0x8006E8C8: sb          $v0, 0x4E($sp)
    MEM_B(0X4E, ctx->r29) = ctx->r2;
    // 0x8006E8CC: andi        $a0, $s0, 0xFF
    ctx->r4 = ctx->r16 & 0XFF;
    // 0x8006E8D0: jal         0x8004D808
    // 0x8006E8D4: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    func_8004D808(rdram, ctx);
        goto after_3;
    // 0x8006E8D4: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    after_3:
    // 0x8006E8D8: lui         $t0, 0x8012
    ctx->r8 = S32(0X8012 << 16);
    // 0x8006E8DC: lbu         $t0, -0x3272($t0)
    ctx->r8 = MEM_BU(ctx->r8, -0X3272);
    // 0x8006E8E0: andi        $v1, $v0, 0xFF
    ctx->r3 = ctx->r2 & 0XFF;
    // 0x8006E8E4: bne         $t0, $zero, L_8006E8F8
    if (ctx->r8 != 0) {
        // 0x8006E8E8: sll         $t2, $s2, 5
        ctx->r10 = S32(ctx->r18 << 5);
            goto L_8006E8F8;
    }
    // 0x8006E8E8: sll         $t2, $s2, 5
    ctx->r10 = S32(ctx->r18 << 5);
    // 0x8006E8EC: addiu       $v1, $v0, 0x1
    ctx->r3 = ADD32(ctx->r2, 0X1);
    // 0x8006E8F0: andi        $t1, $v1, 0xFF
    ctx->r9 = ctx->r3 & 0XFF;
    // 0x8006E8F4: or          $v1, $t1, $zero
    ctx->r3 = ctx->r9 | 0;
L_8006E8F8:
    // 0x8006E8F8: lh          $a2, 0x62($sp)
    ctx->r6 = MEM_H(ctx->r29, 0X62);
    // 0x8006E8FC: lui         $t3, 0x800E
    ctx->r11 = S32(0X800E << 16);
    // 0x8006E900: addiu       $a2, $a2, 0x18
    ctx->r6 = ADD32(ctx->r6, 0X18);
    // 0x8006E904: sll         $t6, $a2, 16
    ctx->r14 = S32(ctx->r6 << 16);
    // 0x8006E908: addiu       $t3, $t3, -0x3770
    ctx->r11 = ADD32(ctx->r11, -0X3770);
    // 0x8006E90C: lui         $at, 0x2
    ctx->r1 = S32(0X2 << 16);
    // 0x8006E910: addiu       $a1, $s3, 0x8
    ctx->r5 = ADD32(ctx->r19, 0X8);
    // 0x8006E914: sll         $t4, $a1, 16
    ctx->r12 = S32(ctx->r5 << 16);
    // 0x8006E918: ori         $at, $at, 0xFEE8
    ctx->r1 = ctx->r1 | 0XFEE8;
    // 0x8006E91C: addu        $s1, $t2, $t3
    ctx->r17 = ADD32(ctx->r10, ctx->r11);
    // 0x8006E920: sra         $a2, $t6, 16
    ctx->r6 = S32(SIGNED(ctx->r14) >> 16);
    // 0x8006E924: lui         $a3, 0x8028
    ctx->r7 = S32(0X8028 << 16);
    // 0x8006E928: addiu       $t8, $zero, 0x10
    ctx->r24 = ADD32(0, 0X10);
    // 0x8006E92C: addiu       $t9, $zero, 0x2
    ctx->r25 = ADD32(0, 0X2);
    // 0x8006E930: addiu       $t0, $zero, 0x2
    ctx->r8 = ADD32(0, 0X2);
    // 0x8006E934: addiu       $t1, $zero, 0x4
    ctx->r9 = ADD32(0, 0X4);
    // 0x8006E938: sw          $t1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r9;
    // 0x8006E93C: sw          $t0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r8;
    // 0x8006E940: sw          $t9, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r25;
    // 0x8006E944: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    // 0x8006E948: addiu       $a3, $a3, 0x3AD4
    ctx->r7 = ADD32(ctx->r7, 0X3AD4);
    // 0x8006E94C: sw          $a2, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r6;
    // 0x8006E950: addu        $a0, $s1, $at
    ctx->r4 = ADD32(ctx->r17, ctx->r1);
    // 0x8006E954: sra         $a1, $t4, 16
    ctx->r5 = S32(SIGNED(ctx->r12) >> 16);
    // 0x8006E958: jal         0x8002F528
    // 0x8006E95C: sb          $v1, 0x4F($sp)
    MEM_B(0X4F, ctx->r29) = ctx->r3;
    func_8002F528(rdram, ctx);
        goto after_4;
    // 0x8006E95C: sb          $v1, 0x4F($sp)
    MEM_B(0X4F, ctx->r29) = ctx->r3;
    after_4:
    // 0x8006E960: lui         $t3, 0x800E
    ctx->r11 = S32(0X800E << 16);
    // 0x8006E964: addiu       $t3, $t3, -0x3770
    ctx->r11 = ADD32(ctx->r11, -0X3770);
    // 0x8006E968: sll         $t2, $s4, 5
    ctx->r10 = S32(ctx->r20 << 5);
    // 0x8006E96C: lui         $at, 0x2
    ctx->r1 = S32(0X2 << 16);
    // 0x8006E970: addiu       $a1, $s3, 0x4E
    ctx->r5 = ADD32(ctx->r19, 0X4E);
    // 0x8006E974: lw          $a2, 0x40($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X40);
    // 0x8006E978: sll         $t4, $a1, 16
    ctx->r12 = S32(ctx->r5 << 16);
    // 0x8006E97C: ori         $at, $at, 0xFF08
    ctx->r1 = ctx->r1 | 0XFF08;
    // 0x8006E980: addu        $s0, $t2, $t3
    ctx->r16 = ADD32(ctx->r10, ctx->r11);
    // 0x8006E984: lbu         $a3, 0x4E($sp)
    ctx->r7 = MEM_BU(ctx->r29, 0X4E);
    // 0x8006E988: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x8006E98C: addiu       $t7, $zero, 0x2
    ctx->r15 = ADD32(0, 0X2);
    // 0x8006E990: sw          $t7, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r15;
    // 0x8006E994: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x8006E998: addu        $a0, $s0, $at
    ctx->r4 = ADD32(ctx->r16, ctx->r1);
    // 0x8006E99C: jal         0x8002F6EC
    // 0x8006E9A0: sra         $a1, $t4, 16
    ctx->r5 = S32(SIGNED(ctx->r12) >> 16);
    func_8002F6EC(rdram, ctx);
        goto after_5;
    // 0x8006E9A0: sra         $a1, $t4, 16
    ctx->r5 = S32(SIGNED(ctx->r12) >> 16);
    after_5:
    // 0x8006E9A4: lh          $a2, 0x62($sp)
    ctx->r6 = MEM_H(ctx->r29, 0X62);
    // 0x8006E9A8: lui         $at, 0x2
    ctx->r1 = S32(0X2 << 16);
    // 0x8006E9AC: addiu       $a1, $s3, 0x20
    ctx->r5 = ADD32(ctx->r19, 0X20);
    // 0x8006E9B0: addiu       $a2, $a2, 0x28
    ctx->r6 = ADD32(ctx->r6, 0X28);
    // 0x8006E9B4: lbu         $a3, 0x4F($sp)
    ctx->r7 = MEM_BU(ctx->r29, 0X4F);
    // 0x8006E9B8: sll         $t0, $a2, 16
    ctx->r8 = S32(ctx->r6 << 16);
    // 0x8006E9BC: sll         $t8, $a1, 16
    ctx->r24 = S32(ctx->r5 << 16);
    // 0x8006E9C0: ori         $at, $at, 0xFF28
    ctx->r1 = ctx->r1 | 0XFF28;
    // 0x8006E9C4: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x8006E9C8: addiu       $t3, $zero, 0x2
    ctx->r11 = ADD32(0, 0X2);
    // 0x8006E9CC: sw          $t3, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r11;
    // 0x8006E9D0: sw          $t2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r10;
    // 0x8006E9D4: addu        $a0, $s0, $at
    ctx->r4 = ADD32(ctx->r16, ctx->r1);
    // 0x8006E9D8: sra         $a1, $t8, 16
    ctx->r5 = S32(SIGNED(ctx->r24) >> 16);
    // 0x8006E9DC: jal         0x8002F6EC
    // 0x8006E9E0: sra         $a2, $t0, 16
    ctx->r6 = S32(SIGNED(ctx->r8) >> 16);
    func_8002F6EC(rdram, ctx);
        goto after_6;
    // 0x8006E9E0: sra         $a2, $t0, 16
    ctx->r6 = S32(SIGNED(ctx->r8) >> 16);
    after_6:
    // 0x8006E9E4: lui         $a1, 0x2
    ctx->r5 = S32(0X2 << 16);
    // 0x8006E9E8: ori         $a1, $a1, 0x8000
    ctx->r5 = ctx->r5 | 0X8000;
    // 0x8006E9EC: addiu       $a0, $zero, 0x9
    ctx->r4 = ADD32(0, 0X9);
    // 0x8006E9F0: addu        $t4, $s1, $a1
    ctx->r12 = ADD32(ctx->r17, ctx->r5);
    // 0x8006E9F4: addiu       $v0, $s4, 0x3
    ctx->r2 = ADD32(ctx->r20, 0X3);
    // 0x8006E9F8: sb          $a0, 0x7EED($t4)
    MEM_B(0X7EED, ctx->r12) = ctx->r4;
    // 0x8006E9FC: addu        $v1, $s0, $a1
    ctx->r3 = ADD32(ctx->r16, ctx->r5);
    // 0x8006EA00: sll         $t5, $v0, 16
    ctx->r13 = S32(ctx->r2 << 16);
    // 0x8006EA04: sb          $a0, 0x7F0D($v1)
    MEM_B(0X7F0D, ctx->r3) = ctx->r4;
    // 0x8006EA08: sb          $a0, 0x7F2D($v1)
    MEM_B(0X7F2D, ctx->r3) = ctx->r4;
    // 0x8006EA0C: b           L_8006EBDC
    // 0x8006EA10: sra         $v0, $t5, 16
    ctx->r2 = S32(SIGNED(ctx->r13) >> 16);
        goto L_8006EBDC;
    // 0x8006EA10: sra         $v0, $t5, 16
    ctx->r2 = S32(SIGNED(ctx->r13) >> 16);
L_8006EA14:
    // 0x8006EA14: sll         $a1, $s1, 24
    ctx->r5 = S32(ctx->r17 << 24);
    // 0x8006EA18: sra         $t7, $a1, 24
    ctx->r15 = S32(SIGNED(ctx->r5) >> 24);
    // 0x8006EA1C: or          $a1, $t7, $zero
    ctx->r5 = ctx->r15 | 0;
    // 0x8006EA20: jal         0x8006DDD0
    // 0x8006EA24: andi        $a0, $s0, 0xFF
    ctx->r4 = ctx->r16 & 0XFF;
    func_8006DDD0(rdram, ctx);
        goto after_7;
    // 0x8006EA24: andi        $a0, $s0, 0xFF
    ctx->r4 = ctx->r16 & 0XFF;
    after_7:
    // 0x8006EA28: bne         $v0, $zero, L_8006EBB0
    if (ctx->r2 != 0) {
        // 0x8006EA2C: andi        $a0, $s0, 0xFF
        ctx->r4 = ctx->r16 & 0XFF;
            goto L_8006EBB0;
    }
    // 0x8006EA2C: andi        $a0, $s0, 0xFF
    ctx->r4 = ctx->r16 & 0XFF;
    // 0x8006EA30: andi        $a1, $s1, 0xFF
    ctx->r5 = ctx->r17 & 0XFF;
    // 0x8006EA34: jal         0x8004D808
    // 0x8006EA38: addiu       $a2, $zero, 0x6
    ctx->r6 = ADD32(0, 0X6);
    func_8004D808(rdram, ctx);
        goto after_8;
    // 0x8006EA38: addiu       $a2, $zero, 0x6
    ctx->r6 = ADD32(0, 0X6);
    after_8:
    // 0x8006EA3C: lui         $t8, 0x8012
    ctx->r24 = S32(0X8012 << 16);
    // 0x8006EA40: lbu         $t8, -0x32A4($t8)
    ctx->r24 = MEM_BU(ctx->r24, -0X32A4);
    // 0x8006EA44: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8006EA48: bne         $t8, $at, L_8006EACC
    if (ctx->r24 != ctx->r1) {
        // 0x8006EA4C: andi        $v1, $v0, 0xFF
        ctx->r3 = ctx->r2 & 0XFF;
            goto L_8006EACC;
    }
    // 0x8006EA4C: andi        $v1, $v0, 0xFF
    ctx->r3 = ctx->r2 & 0XFF;
    // 0x8006EA50: lh          $a2, 0x62($sp)
    ctx->r6 = MEM_H(ctx->r29, 0X62);
    // 0x8006EA54: lui         $t0, 0x800E
    ctx->r8 = S32(0X800E << 16);
    // 0x8006EA58: addiu       $t0, $t0, -0x3770
    ctx->r8 = ADD32(ctx->r8, -0X3770);
    // 0x8006EA5C: sll         $t9, $s2, 5
    ctx->r25 = S32(ctx->r18 << 5);
    // 0x8006EA60: lui         $at, 0x2
    ctx->r1 = S32(0X2 << 16);
    // 0x8006EA64: addiu       $a1, $s3, 0x10
    ctx->r5 = ADD32(ctx->r19, 0X10);
    // 0x8006EA68: addiu       $a2, $a2, 0x18
    ctx->r6 = ADD32(ctx->r6, 0X18);
    // 0x8006EA6C: sll         $t3, $a2, 16
    ctx->r11 = S32(ctx->r6 << 16);
    // 0x8006EA70: sll         $t1, $a1, 16
    ctx->r9 = S32(ctx->r5 << 16);
    // 0x8006EA74: ori         $at, $at, 0xFEE8
    ctx->r1 = ctx->r1 | 0XFEE8;
    // 0x8006EA78: addu        $s1, $t9, $t0
    ctx->r17 = ADD32(ctx->r25, ctx->r8);
    // 0x8006EA7C: lui         $a3, 0x8028
    ctx->r7 = S32(0X8028 << 16);
    // 0x8006EA80: addiu       $t5, $zero, 0xC
    ctx->r13 = ADD32(0, 0XC);
    // 0x8006EA84: addiu       $t6, $zero, 0x2
    ctx->r14 = ADD32(0, 0X2);
    // 0x8006EA88: addiu       $t7, $zero, 0x2
    ctx->r15 = ADD32(0, 0X2);
    // 0x8006EA8C: addiu       $t8, $zero, 0x4
    ctx->r24 = ADD32(0, 0X4);
    // 0x8006EA90: sw          $t8, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r24;
    // 0x8006EA94: sw          $t7, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r15;
    // 0x8006EA98: sw          $t6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r14;
    // 0x8006EA9C: sw          $t5, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r13;
    // 0x8006EAA0: addiu       $a3, $a3, 0x3B00
    ctx->r7 = ADD32(ctx->r7, 0X3B00);
    // 0x8006EAA4: addu        $a0, $s1, $at
    ctx->r4 = ADD32(ctx->r17, ctx->r1);
    // 0x8006EAA8: sra         $a1, $t1, 16
    ctx->r5 = S32(SIGNED(ctx->r9) >> 16);
    // 0x8006EAAC: jal         0x8002F528
    // 0x8006EAB0: sra         $a2, $t3, 16
    ctx->r6 = S32(SIGNED(ctx->r11) >> 16);
    func_8002F528(rdram, ctx);
        goto after_9;
    // 0x8006EAB0: sra         $a2, $t3, 16
    ctx->r6 = S32(SIGNED(ctx->r11) >> 16);
    after_9:
    // 0x8006EAB4: lui         $a1, 0x2
    ctx->r5 = S32(0X2 << 16);
    // 0x8006EAB8: ori         $a1, $a1, 0x8000
    ctx->r5 = ctx->r5 | 0X8000;
    // 0x8006EABC: addiu       $a0, $zero, 0x9
    ctx->r4 = ADD32(0, 0X9);
    // 0x8006EAC0: addu        $t9, $s1, $a1
    ctx->r25 = ADD32(ctx->r17, ctx->r5);
    // 0x8006EAC4: b           L_8006EBA0
    // 0x8006EAC8: sb          $a0, 0x7EED($t9)
    MEM_B(0X7EED, ctx->r25) = ctx->r4;
        goto L_8006EBA0;
    // 0x8006EAC8: sb          $a0, 0x7EED($t9)
    MEM_B(0X7EED, ctx->r25) = ctx->r4;
L_8006EACC:
    // 0x8006EACC: lh          $a2, 0x62($sp)
    ctx->r6 = MEM_H(ctx->r29, 0X62);
    // 0x8006EAD0: lui         $t1, 0x800E
    ctx->r9 = S32(0X800E << 16);
    // 0x8006EAD4: addiu       $t1, $t1, -0x3770
    ctx->r9 = ADD32(ctx->r9, -0X3770);
    // 0x8006EAD8: sll         $t0, $s2, 5
    ctx->r8 = S32(ctx->r18 << 5);
    // 0x8006EADC: lui         $at, 0x2
    ctx->r1 = S32(0X2 << 16);
    // 0x8006EAE0: addiu       $a1, $s3, 0x8
    ctx->r5 = ADD32(ctx->r19, 0X8);
    // 0x8006EAE4: addiu       $a2, $a2, 0x18
    ctx->r6 = ADD32(ctx->r6, 0X18);
    // 0x8006EAE8: sll         $t4, $a2, 16
    ctx->r12 = S32(ctx->r6 << 16);
    // 0x8006EAEC: sll         $t2, $a1, 16
    ctx->r10 = S32(ctx->r5 << 16);
    // 0x8006EAF0: ori         $at, $at, 0xFEE8
    ctx->r1 = ctx->r1 | 0XFEE8;
    // 0x8006EAF4: addu        $s1, $t0, $t1
    ctx->r17 = ADD32(ctx->r8, ctx->r9);
    // 0x8006EAF8: lui         $a3, 0x8028
    ctx->r7 = S32(0X8028 << 16);
    // 0x8006EAFC: addiu       $t6, $zero, 0xA
    ctx->r14 = ADD32(0, 0XA);
    // 0x8006EB00: addiu       $t7, $zero, 0x2
    ctx->r15 = ADD32(0, 0X2);
    // 0x8006EB04: addiu       $t8, $zero, 0x2
    ctx->r24 = ADD32(0, 0X2);
    // 0x8006EB08: addiu       $t9, $zero, 0x4
    ctx->r25 = ADD32(0, 0X4);
    // 0x8006EB0C: sw          $t9, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r25;
    // 0x8006EB10: sw          $t8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r24;
    // 0x8006EB14: sw          $t7, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r15;
    // 0x8006EB18: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x8006EB1C: addiu       $a3, $a3, 0x3AEC
    ctx->r7 = ADD32(ctx->r7, 0X3AEC);
    // 0x8006EB20: addu        $a0, $s1, $at
    ctx->r4 = ADD32(ctx->r17, ctx->r1);
    // 0x8006EB24: sra         $a1, $t2, 16
    ctx->r5 = S32(SIGNED(ctx->r10) >> 16);
    // 0x8006EB28: sra         $a2, $t4, 16
    ctx->r6 = S32(SIGNED(ctx->r12) >> 16);
    // 0x8006EB2C: jal         0x8002F528
    // 0x8006EB30: sb          $v1, 0x4F($sp)
    MEM_B(0X4F, ctx->r29) = ctx->r3;
    func_8002F528(rdram, ctx);
        goto after_10;
    // 0x8006EB30: sb          $v1, 0x4F($sp)
    MEM_B(0X4F, ctx->r29) = ctx->r3;
    after_10:
    // 0x8006EB34: lh          $a2, 0x62($sp)
    ctx->r6 = MEM_H(ctx->r29, 0X62);
    // 0x8006EB38: lui         $t1, 0x800E
    ctx->r9 = S32(0X800E << 16);
    // 0x8006EB3C: addiu       $t1, $t1, -0x3770
    ctx->r9 = ADD32(ctx->r9, -0X3770);
    // 0x8006EB40: sll         $t0, $s4, 5
    ctx->r8 = S32(ctx->r20 << 5);
    // 0x8006EB44: lui         $at, 0x2
    ctx->r1 = S32(0X2 << 16);
    // 0x8006EB48: addiu       $a1, $s3, 0x20
    ctx->r5 = ADD32(ctx->r19, 0X20);
    // 0x8006EB4C: addiu       $a2, $a2, 0x28
    ctx->r6 = ADD32(ctx->r6, 0X28);
    // 0x8006EB50: lbu         $a3, 0x4F($sp)
    ctx->r7 = MEM_BU(ctx->r29, 0X4F);
    // 0x8006EB54: sll         $t4, $a2, 16
    ctx->r12 = S32(ctx->r6 << 16);
    // 0x8006EB58: sll         $t2, $a1, 16
    ctx->r10 = S32(ctx->r5 << 16);
    // 0x8006EB5C: ori         $at, $at, 0xFF08
    ctx->r1 = ctx->r1 | 0XFF08;
    // 0x8006EB60: addu        $s0, $t0, $t1
    ctx->r16 = ADD32(ctx->r8, ctx->r9);
    // 0x8006EB64: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x8006EB68: addiu       $t7, $zero, 0x2
    ctx->r15 = ADD32(0, 0X2);
    // 0x8006EB6C: sw          $t7, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r15;
    // 0x8006EB70: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x8006EB74: addu        $a0, $s0, $at
    ctx->r4 = ADD32(ctx->r16, ctx->r1);
    // 0x8006EB78: sra         $a1, $t2, 16
    ctx->r5 = S32(SIGNED(ctx->r10) >> 16);
    // 0x8006EB7C: jal         0x8002F6EC
    // 0x8006EB80: sra         $a2, $t4, 16
    ctx->r6 = S32(SIGNED(ctx->r12) >> 16);
    func_8002F6EC(rdram, ctx);
        goto after_11;
    // 0x8006EB80: sra         $a2, $t4, 16
    ctx->r6 = S32(SIGNED(ctx->r12) >> 16);
    after_11:
    // 0x8006EB84: lui         $a1, 0x2
    ctx->r5 = S32(0X2 << 16);
    // 0x8006EB88: ori         $a1, $a1, 0x8000
    ctx->r5 = ctx->r5 | 0X8000;
    // 0x8006EB8C: addiu       $a0, $zero, 0x9
    ctx->r4 = ADD32(0, 0X9);
    // 0x8006EB90: addu        $t8, $s1, $a1
    ctx->r24 = ADD32(ctx->r17, ctx->r5);
    // 0x8006EB94: sb          $a0, 0x7EED($t8)
    MEM_B(0X7EED, ctx->r24) = ctx->r4;
    // 0x8006EB98: addu        $t9, $s0, $a1
    ctx->r25 = ADD32(ctx->r16, ctx->r5);
    // 0x8006EB9C: sb          $a0, 0x7F0D($t9)
    MEM_B(0X7F0D, ctx->r25) = ctx->r4;
L_8006EBA0:
    // 0x8006EBA0: addiu       $v0, $s4, 0x2
    ctx->r2 = ADD32(ctx->r20, 0X2);
    // 0x8006EBA4: sll         $t0, $v0, 16
    ctx->r8 = S32(ctx->r2 << 16);
    // 0x8006EBA8: b           L_8006EBDC
    // 0x8006EBAC: sra         $v0, $t0, 16
    ctx->r2 = S32(SIGNED(ctx->r8) >> 16);
        goto L_8006EBDC;
    // 0x8006EBAC: sra         $v0, $t0, 16
    ctx->r2 = S32(SIGNED(ctx->r8) >> 16);
L_8006EBB0:
    // 0x8006EBB0: lh          $t4, 0x62($sp)
    ctx->r12 = MEM_H(ctx->r29, 0X62);
    // 0x8006EBB4: sll         $a2, $s1, 24
    ctx->r6 = S32(ctx->r17 << 24);
    // 0x8006EBB8: sll         $a3, $s3, 16
    ctx->r7 = S32(ctx->r19 << 16);
    // 0x8006EBBC: sra         $t3, $a3, 16
    ctx->r11 = S32(SIGNED(ctx->r7) >> 16);
    // 0x8006EBC0: sra         $t2, $a2, 24
    ctx->r10 = S32(SIGNED(ctx->r6) >> 24);
    // 0x8006EBC4: or          $a2, $t2, $zero
    ctx->r6 = ctx->r10 | 0;
    // 0x8006EBC8: or          $a3, $t3, $zero
    ctx->r7 = ctx->r11 | 0;
    // 0x8006EBCC: andi        $a0, $s2, 0xFF
    ctx->r4 = ctx->r18 & 0XFF;
    // 0x8006EBD0: andi        $a1, $s0, 0xFF
    ctx->r5 = ctx->r16 & 0XFF;
    // 0x8006EBD4: jal         0x8006EBFC
    // 0x8006EBD8: sw          $t4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r12;
    func_8006EBFC(rdram, ctx);
        goto after_12;
    // 0x8006EBD8: sw          $t4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r12;
    after_12:
L_8006EBDC:
    // 0x8006EBDC: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    // 0x8006EBE0: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x8006EBE4: lw          $s1, 0x2C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X2C);
    // 0x8006EBE8: lw          $s2, 0x30($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X30);
    // 0x8006EBEC: lw          $s3, 0x34($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X34);
    // 0x8006EBF0: lw          $s4, 0x38($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X38);
    // 0x8006EBF4: jr          $ra
    // 0x8006EBF8: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
    return;
    // 0x8006EBF8: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
;}
RECOMP_FUNC void func_8006EBFC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8006EBFC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8006EC00: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8006EC04: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x8006EC08: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8006EC0C: lbu         $a0, 0x1F($sp)
    ctx->r4 = MEM_BU(ctx->r29, 0X1F);
    // 0x8006EC10: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    // 0x8006EC14: sw          $a3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r7;
    // 0x8006EC18: jal         0x8004DDD0
    // 0x8006EC1C: andi        $a1, $a2, 0xFF
    ctx->r5 = ctx->r6 & 0XFF;
    func_8004DDD0(rdram, ctx);
        goto after_0;
    // 0x8006EC1C: andi        $a1, $a2, 0xFF
    ctx->r5 = ctx->r6 & 0XFF;
    after_0:
    // 0x8006EC20: lbu         $a0, 0x1B($sp)
    ctx->r4 = MEM_BU(ctx->r29, 0X1B);
    // 0x8006EC24: lh          $a2, 0x26($sp)
    ctx->r6 = MEM_H(ctx->r29, 0X26);
    // 0x8006EC28: lh          $a3, 0x2A($sp)
    ctx->r7 = MEM_H(ctx->r29, 0X2A);
    // 0x8006EC2C: jal         0x8006F070
    // 0x8006EC30: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    func_8006F070(rdram, ctx);
        goto after_1;
    // 0x8006EC30: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    after_1:
    // 0x8006EC34: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8006EC38: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8006EC3C: jr          $ra
    // 0x8006EC40: nop

    return;
    // 0x8006EC40: nop

;}
RECOMP_FUNC void func_8006EC44(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8006EC44: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8006EC48: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x8006EC4C: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    // 0x8006EC50: sll         $a1, $a3, 16
    ctx->r5 = S32(ctx->r7 << 16);
    // 0x8006EC54: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8006EC58: sra         $t8, $a1, 16
    ctx->r24 = S32(SIGNED(ctx->r5) >> 16);
    // 0x8006EC5C: lh          $a2, 0x2A($sp)
    ctx->r6 = MEM_H(ctx->r29, 0X2A);
    // 0x8006EC60: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8006EC64: sw          $a3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r7;
    // 0x8006EC68: jal         0x8004CD44
    // 0x8006EC6C: or          $a1, $t8, $zero
    ctx->r5 = ctx->r24 | 0;
    func_8004CD44(rdram, ctx);
        goto after_0;
    // 0x8006EC6C: or          $a1, $t8, $zero
    ctx->r5 = ctx->r24 | 0;
    after_0:
    // 0x8006EC70: lbu         $a0, 0x1F($sp)
    ctx->r4 = MEM_BU(ctx->r29, 0X1F);
    // 0x8006EC74: lbu         $a1, 0x23($sp)
    ctx->r5 = MEM_BU(ctx->r29, 0X23);
    // 0x8006EC78: jal         0x8006ECA4
    // 0x8006EC7C: nop

    func_8006ECA4(rdram, ctx);
        goto after_1;
    // 0x8006EC7C: nop

    after_1:
    // 0x8006EC80: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x8006EC84: lui         $a2, 0x803D
    ctx->r6 = S32(0X803D << 16);
    // 0x8006EC88: addiu       $a2, $a2, 0x23D8
    ctx->r6 = ADD32(ctx->r6, 0X23D8);
    // 0x8006EC8C: jal         0x8004C578
    // 0x8006EC90: andi        $a1, $v0, 0xFF
    ctx->r5 = ctx->r2 & 0XFF;
    func_8004C578(rdram, ctx);
        goto after_2;
    // 0x8006EC90: andi        $a1, $v0, 0xFF
    ctx->r5 = ctx->r2 & 0XFF;
    after_2:
    // 0x8006EC94: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8006EC98: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8006EC9C: jr          $ra
    // 0x8006ECA0: nop

    return;
    // 0x8006ECA0: nop

;}
RECOMP_FUNC void func_8006ECA4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8006ECA4: andi        $a2, $a0, 0xFF
    ctx->r6 = ctx->r4 & 0XFF;
    // 0x8006ECA8: andi        $a3, $a1, 0xFF
    ctx->r7 = ctx->r5 & 0XFF;
    // 0x8006ECAC: sll         $t7, $a3, 1
    ctx->r15 = S32(ctx->r7 << 1);
    // 0x8006ECB0: sll         $t6, $a2, 5
    ctx->r14 = S32(ctx->r6 << 5);
    // 0x8006ECB4: lui         $t9, 0x8011
    ctx->r25 = S32(0X8011 << 16);
    // 0x8006ECB8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8006ECBC: addiu       $t9, $t9, 0x37B0
    ctx->r25 = ADD32(ctx->r25, 0X37B0);
    // 0x8006ECC0: addu        $t8, $t6, $t7
    ctx->r24 = ADD32(ctx->r14, ctx->r15);
    // 0x8006ECC4: addu        $v0, $t8, $t9
    ctx->r2 = ADD32(ctx->r24, ctx->r25);
    // 0x8006ECC8: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8006ECCC: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x8006ECD0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8006ECD4: lbu         $a0, 0x0($v0)
    ctx->r4 = MEM_BU(ctx->r2, 0X0);
    // 0x8006ECD8: lbu         $a1, 0x1($v0)
    ctx->r5 = MEM_BU(ctx->r2, 0X1);
    // 0x8006ECDC: jal         0x8006F274
    // 0x8006ECE0: nop

    func_8006F274(rdram, ctx);
        goto after_0;
    // 0x8006ECE0: nop

    after_0:
    // 0x8006ECE4: lbu         $t0, 0x18($v0)
    ctx->r8 = MEM_BU(ctx->r2, 0X18);
    // 0x8006ECE8: jal         0x8004D710
    // 0x8006ECEC: andi        $a0, $t0, 0xF
    ctx->r4 = ctx->r8 & 0XF;
    func_8004D710(rdram, ctx);
        goto after_1;
    // 0x8006ECEC: andi        $a0, $t0, 0xF
    ctx->r4 = ctx->r8 & 0XF;
    after_1:
    // 0x8006ECF0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8006ECF4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8006ECF8: jr          $ra
    // 0x8006ECFC: nop

    return;
    // 0x8006ECFC: nop

;}
RECOMP_FUNC void func_8006ED00(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8006ED00: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8006ED04: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x8006ED08: sw          $a2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r6;
    // 0x8006ED0C: lb          $t0, 0x2B($sp)
    ctx->r8 = MEM_B(ctx->r29, 0X2B);
    // 0x8006ED10: lb          $t8, 0x27($sp)
    ctx->r24 = MEM_B(ctx->r29, 0X27);
    // 0x8006ED14: lui         $t3, 0x8011
    ctx->r11 = S32(0X8011 << 16);
    // 0x8006ED18: sll         $t1, $t0, 1
    ctx->r9 = S32(ctx->r8 << 1);
    // 0x8006ED1C: sll         $t9, $t8, 5
    ctx->r25 = S32(ctx->r24 << 5);
    // 0x8006ED20: addu        $t2, $t9, $t1
    ctx->r10 = ADD32(ctx->r25, ctx->r9);
    // 0x8006ED24: addiu       $t3, $t3, 0x37B0
    ctx->r11 = ADD32(ctx->r11, 0X37B0);
    // 0x8006ED28: addu        $v0, $t2, $t3
    ctx->r2 = ADD32(ctx->r10, ctx->r11);
    // 0x8006ED2C: lh          $t4, 0x32($sp)
    ctx->r12 = MEM_H(ctx->r29, 0X32);
    // 0x8006ED30: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8006ED34: sw          $a3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r7;
    // 0x8006ED38: sll         $t6, $a3, 16
    ctx->r14 = S32(ctx->r7 << 16);
    // 0x8006ED3C: lbu         $a1, 0x0($v0)
    ctx->r5 = MEM_BU(ctx->r2, 0X0);
    // 0x8006ED40: lbu         $a2, 0x1($v0)
    ctx->r6 = MEM_BU(ctx->r2, 0X1);
    // 0x8006ED44: sra         $a3, $t6, 16
    ctx->r7 = S32(SIGNED(ctx->r14) >> 16);
    // 0x8006ED48: jal         0x80030A60
    // 0x8006ED4C: sw          $t4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r12;
    func_80030A60(rdram, ctx);
        goto after_0;
    // 0x8006ED4C: sw          $t4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r12;
    after_0:
    // 0x8006ED50: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8006ED54: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x8006ED58: jr          $ra
    // 0x8006ED5C: nop

    return;
    // 0x8006ED5C: nop

;}
RECOMP_FUNC void func_8006ED60(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8006ED60: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8006ED64: sw          $a2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r6;
    // 0x8006ED68: lbu         $t7, 0x2B($sp)
    ctx->r15 = MEM_BU(ctx->r29, 0X2B);
    // 0x8006ED6C: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x8006ED70: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x8006ED74: sw          $a3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r7;
    // 0x8006ED78: sll         $t8, $t7, 3
    ctx->r24 = S32(ctx->r15 << 3);
    // 0x8006ED7C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8006ED80: lh          $a1, 0x2E($sp)
    ctx->r5 = MEM_H(ctx->r29, 0X2E);
    // 0x8006ED84: lh          $a2, 0x32($sp)
    ctx->r6 = MEM_H(ctx->r29, 0X32);
    // 0x8006ED88: addiu       $t9, $zero, 0x8
    ctx->r25 = ADD32(0, 0X8);
    // 0x8006ED8C: addu        $a3, $t6, $t8
    ctx->r7 = ADD32(ctx->r14, ctx->r24);
    // 0x8006ED90: addiu       $a3, $a3, 0xA06
    ctx->r7 = ADD32(ctx->r7, 0XA06);
    // 0x8006ED94: sw          $t9, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r25;
    // 0x8006ED98: jal         0x8002F3D4
    // 0x8006ED9C: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    func_8002F3D4(rdram, ctx);
        goto after_0;
    // 0x8006ED9C: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    after_0:
    // 0x8006EDA0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8006EDA4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x8006EDA8: jr          $ra
    // 0x8006EDAC: nop

    return;
    // 0x8006EDAC: nop

;}
