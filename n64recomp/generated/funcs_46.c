#include "iss64_recomp.h"
#include "funcs.h"

RECOMP_FUNC void func_803AA49C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803AA49C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x803AA4A0: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x803AA4A4: lui         $s1, 0x801B
    ctx->r17 = S32(0X801B << 16);
    // 0x803AA4A8: addiu       $s1, $s1, 0x1CF0
    ctx->r17 = ADD32(ctx->r17, 0X1CF0);
    // 0x803AA4AC: lw          $t6, 0x0($s1)
    ctx->r14 = MEM_W(ctx->r17, 0X0);
    // 0x803AA4B0: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x803AA4B4: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x803AA4B8: sb          $zero, 0x3F($t6)
    MEM_B(0X3F, ctx->r14) = 0;
    // 0x803AA4BC: lw          $t7, 0x0($s1)
    ctx->r15 = MEM_W(ctx->r17, 0X0);
    // 0x803AA4C0: addiu       $t8, $zero, 0xA
    ctx->r24 = ADD32(0, 0XA);
    // 0x803AA4C4: sb          $zero, 0x41($t7)
    MEM_B(0X41, ctx->r15) = 0;
    // 0x803AA4C8: lw          $t9, 0x0($s1)
    ctx->r25 = MEM_W(ctx->r17, 0X0);
    // 0x803AA4CC: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x803AA4D0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x803AA4D4: sb          $t8, 0x40($t9)
    MEM_B(0X40, ctx->r25) = ctx->r24;
L_803AA4D8:
    // 0x803AA4D8: sll         $a0, $v0, 24
    ctx->r4 = S32(ctx->r2 << 24);
    // 0x803AA4DC: sra         $t0, $a0, 24
    ctx->r8 = S32(SIGNED(ctx->r4) >> 24);
    // 0x803AA4E0: jal         0x8006DED4
    // 0x803AA4E4: or          $a0, $t0, $zero
    ctx->r4 = ctx->r8 | 0;
    func_8006DED4(rdram, ctx);
        goto after_0;
    // 0x803AA4E4: or          $a0, $t0, $zero
    ctx->r4 = ctx->r8 | 0;
    after_0:
    // 0x803AA4E8: bne         $v0, $zero, L_803AA508
    if (ctx->r2 != 0) {
        // 0x803AA4EC: addiu       $s0, $s0, 0x1
        ctx->r16 = ADD32(ctx->r16, 0X1);
            goto L_803AA508;
    }
    // 0x803AA4EC: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x803AA4F0: lw          $v0, 0x0($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X0);
    // 0x803AA4F4: nop

    // 0x803AA4F8: lb          $t1, 0x40($v0)
    ctx->r9 = MEM_B(ctx->r2, 0X40);
    // 0x803AA4FC: nop

    // 0x803AA500: addiu       $t2, $t1, -0x1
    ctx->r10 = ADD32(ctx->r9, -0X1);
    // 0x803AA504: sb          $t2, 0x40($v0)
    MEM_B(0X40, ctx->r2) = ctx->r10;
L_803AA508:
    // 0x803AA508: andi        $v0, $s0, 0xFF
    ctx->r2 = ctx->r16 & 0XFF;
    // 0x803AA50C: slti        $at, $v0, 0xB
    ctx->r1 = SIGNED(ctx->r2) < 0XB ? 1 : 0;
    // 0x803AA510: bne         $at, $zero, L_803AA4D8
    if (ctx->r1 != 0) {
        // 0x803AA514: or          $s0, $v0, $zero
        ctx->r16 = ctx->r2 | 0;
            goto L_803AA4D8;
    }
    // 0x803AA514: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x803AA518: lui         $t4, 0x8012
    ctx->r12 = S32(0X8012 << 16);
    // 0x803AA51C: lb          $t4, -0x326C($t4)
    ctx->r12 = MEM_B(ctx->r12, -0X326C);
    // 0x803AA520: nop

    // 0x803AA524: bne         $t4, $zero, L_803AA544
    if (ctx->r12 != 0) {
        // 0x803AA528: nop
    
            goto L_803AA544;
    }
    // 0x803AA528: nop

    // 0x803AA52C: lw          $t5, 0x0($s1)
    ctx->r13 = MEM_W(ctx->r17, 0X0);
    // 0x803AA530: nop

    // 0x803AA534: sb          $zero, 0x39($t5)
    MEM_B(0X39, ctx->r13) = 0;
    // 0x803AA538: lw          $t6, 0x0($s1)
    ctx->r14 = MEM_W(ctx->r17, 0X0);
    // 0x803AA53C: b           L_803AA5B8
    // 0x803AA540: sb          $zero, 0x42($t6)
    MEM_B(0X42, ctx->r14) = 0;
        goto L_803AA5B8;
    // 0x803AA540: sb          $zero, 0x42($t6)
    MEM_B(0X42, ctx->r14) = 0;
L_803AA544:
    // 0x803AA544: jal         0x8004DF70
    // 0x803AA548: nop

    func_8004DF70(rdram, ctx);
        goto after_1;
    // 0x803AA548: nop

    after_1:
    // 0x803AA54C: beq         $v0, $zero, L_803AA588
    if (ctx->r2 == 0) {
        // 0x803AA550: or          $v1, $v0, $zero
        ctx->r3 = ctx->r2 | 0;
            goto L_803AA588;
    }
    // 0x803AA550: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
    // 0x803AA554: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x803AA558: beq         $v1, $v0, L_803AA570
    if (ctx->r3 == ctx->r2) {
        // 0x803AA55C: addiu       $at, $zero, 0x2
        ctx->r1 = ADD32(0, 0X2);
            goto L_803AA570;
    }
    // 0x803AA55C: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x803AA560: beq         $v1, $at, L_803AA5A0
    if (ctx->r3 == ctx->r1) {
        // 0x803AA564: nop
    
            goto L_803AA5A0;
    }
    // 0x803AA564: nop

    // 0x803AA568: b           L_803AA5BC
    // 0x803AA56C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_803AA5BC;
    // 0x803AA56C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_803AA570:
    // 0x803AA570: lw          $t7, 0x0($s1)
    ctx->r15 = MEM_W(ctx->r17, 0X0);
    // 0x803AA574: nop

    // 0x803AA578: sb          $v0, 0x39($t7)
    MEM_B(0X39, ctx->r15) = ctx->r2;
    // 0x803AA57C: lw          $t8, 0x0($s1)
    ctx->r24 = MEM_W(ctx->r17, 0X0);
    // 0x803AA580: b           L_803AA5B8
    // 0x803AA584: sb          $zero, 0x42($t8)
    MEM_B(0X42, ctx->r24) = 0;
        goto L_803AA5B8;
    // 0x803AA584: sb          $zero, 0x42($t8)
    MEM_B(0X42, ctx->r24) = 0;
L_803AA588:
    // 0x803AA588: lw          $t9, 0x0($s1)
    ctx->r25 = MEM_W(ctx->r17, 0X0);
    // 0x803AA58C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x803AA590: sb          $zero, 0x39($t9)
    MEM_B(0X39, ctx->r25) = 0;
    // 0x803AA594: lw          $t0, 0x0($s1)
    ctx->r8 = MEM_W(ctx->r17, 0X0);
    // 0x803AA598: b           L_803AA5B8
    // 0x803AA59C: sb          $v0, 0x42($t0)
    MEM_B(0X42, ctx->r8) = ctx->r2;
        goto L_803AA5B8;
    // 0x803AA59C: sb          $v0, 0x42($t0)
    MEM_B(0X42, ctx->r8) = ctx->r2;
L_803AA5A0:
    // 0x803AA5A0: lw          $t1, 0x0($s1)
    ctx->r9 = MEM_W(ctx->r17, 0X0);
    // 0x803AA5A4: nop

    // 0x803AA5A8: sb          $zero, 0x39($t1)
    MEM_B(0X39, ctx->r9) = 0;
    // 0x803AA5AC: lw          $t2, 0x0($s1)
    ctx->r10 = MEM_W(ctx->r17, 0X0);
    // 0x803AA5B0: nop

    // 0x803AA5B4: sb          $zero, 0x42($t2)
    MEM_B(0X42, ctx->r10) = 0;
L_803AA5B8:
    // 0x803AA5B8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_803AA5BC:
    // 0x803AA5BC: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x803AA5C0: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x803AA5C4: jr          $ra
    // 0x803AA5C8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x803AA5C8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_803AA5CC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803AA5CC: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x803AA5D0: andi        $v1, $a0, 0xFF
    ctx->r3 = ctx->r4 & 0XFF;
    // 0x803AA5D4: lui         $a1, 0x801B
    ctx->r5 = S32(0X801B << 16);
    // 0x803AA5D8: lui         $a0, 0x802C
    ctx->r4 = S32(0X802C << 16);
    // 0x803AA5DC: lui         $a2, 0x802C
    ctx->r6 = S32(0X802C << 16);
    // 0x803AA5E0: lw          $a1, 0x1CF0($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X1CF0);
    // 0x803AA5E4: addiu       $a2, $a2, 0x53C8
    ctx->r6 = ADD32(ctx->r6, 0X53C8);
    // 0x803AA5E8: addiu       $a0, $a0, 0x53E0
    ctx->r4 = ADD32(ctx->r4, 0X53E0);
    // 0x803AA5EC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_803AA5F0:
    // 0x803AA5F0: bne         $v1, $zero, L_803AA610
    if (ctx->r3 != 0) {
        // 0x803AA5F4: addu        $t1, $a1, $v0
        ctx->r9 = ADD32(ctx->r5, ctx->r2);
            goto L_803AA610;
    }
    // 0x803AA5F4: addu        $t1, $a1, $v0
    ctx->r9 = ADD32(ctx->r5, ctx->r2);
    // 0x803AA5F8: addu        $t7, $a1, $v0
    ctx->r15 = ADD32(ctx->r5, ctx->r2);
    // 0x803AA5FC: lb          $t8, 0x50($t7)
    ctx->r24 = MEM_B(ctx->r15, 0X50);
    // 0x803AA600: sll         $t9, $v0, 1
    ctx->r25 = S32(ctx->r2 << 1);
    // 0x803AA604: addu        $t0, $a0, $t9
    ctx->r8 = ADD32(ctx->r4, ctx->r25);
    // 0x803AA608: b           L_803AA620
    // 0x803AA60C: sh          $t8, 0x0($t0)
    MEM_H(0X0, ctx->r8) = ctx->r24;
        goto L_803AA620;
    // 0x803AA60C: sh          $t8, 0x0($t0)
    MEM_H(0X0, ctx->r8) = ctx->r24;
L_803AA610:
    // 0x803AA610: lb          $t2, 0x50($t1)
    ctx->r10 = MEM_B(ctx->r9, 0X50);
    // 0x803AA614: sll         $t3, $v0, 1
    ctx->r11 = S32(ctx->r2 << 1);
    // 0x803AA618: addu        $t4, $a2, $t3
    ctx->r12 = ADD32(ctx->r6, ctx->r11);
    // 0x803AA61C: sh          $t2, 0x0($t4)
    MEM_H(0X0, ctx->r12) = ctx->r10;
L_803AA620:
    // 0x803AA620: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x803AA624: andi        $t5, $v0, 0xFF
    ctx->r13 = ctx->r2 & 0XFF;
    // 0x803AA628: slti        $at, $t5, 0xB
    ctx->r1 = SIGNED(ctx->r13) < 0XB ? 1 : 0;
    // 0x803AA62C: bne         $at, $zero, L_803AA5F0
    if (ctx->r1 != 0) {
        // 0x803AA630: or          $v0, $t5, $zero
        ctx->r2 = ctx->r13 | 0;
            goto L_803AA5F0;
    }
    // 0x803AA630: or          $v0, $t5, $zero
    ctx->r2 = ctx->r13 | 0;
    // 0x803AA634: jr          $ra
    // 0x803AA638: nop

    return;
    // 0x803AA638: nop

;}
RECOMP_FUNC void func_803AA63C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803AA63C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x803AA640: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x803AA644: jal         0x80039CB4
    // 0x803AA648: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_80039CB4(rdram, ctx);
        goto after_0;
    // 0x803AA648: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x803AA64C: lw          $t6, 0x18($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X18);
    // 0x803AA650: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x803AA654: jal         0x80035A3C
    // 0x803AA658: sw          $t6, 0x540C($at)
    MEM_W(0X540C, ctx->r1) = ctx->r14;
    func_80035A3C(rdram, ctx);
        goto after_1;
    // 0x803AA658: sw          $t6, 0x540C($at)
    MEM_W(0X540C, ctx->r1) = ctx->r14;
    after_1:
    // 0x803AA65C: jal         0x800375F8
    // 0x803AA660: nop

    func_800375F8(rdram, ctx);
        goto after_2;
    // 0x803AA660: nop

    after_2:
    // 0x803AA664: jal         0x800380A0
    // 0x803AA668: nop

    func_800380A0(rdram, ctx);
        goto after_3;
    // 0x803AA668: nop

    after_3:
    // 0x803AA66C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x803AA670: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x803AA674: jr          $ra
    // 0x803AA678: nop

    return;
    // 0x803AA678: nop

;}
RECOMP_FUNC void func_803AA67C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803AA67C: lui         $v0, 0x801B
    ctx->r2 = S32(0X801B << 16);
    // 0x803AA680: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x803AA684: sll         $t6, $a0, 24
    ctx->r14 = S32(ctx->r4 << 24);
    // 0x803AA688: lw          $v0, 0x1CF0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X1CF0);
    // 0x803AA68C: sra         $a0, $t6, 24
    ctx->r4 = S32(SIGNED(ctx->r14) >> 24);
    // 0x803AA690: addiu       $v1, $zero, -0x1
    ctx->r3 = ADD32(0, -0X1);
L_803AA694:
    // 0x803AA694: bne         $a0, $zero, L_803AA6A8
    if (ctx->r4 != 0) {
        // 0x803AA698: addiu       $a0, $a0, -0x1
        ctx->r4 = ADD32(ctx->r4, -0X1);
            goto L_803AA6A8;
    }
    // 0x803AA698: addiu       $a0, $a0, -0x1
    ctx->r4 = ADD32(ctx->r4, -0X1);
    // 0x803AA69C: b           L_803AA6B0
    // 0x803AA6A0: addiu       $a0, $zero, 0xB
    ctx->r4 = ADD32(0, 0XB);
        goto L_803AA6B0;
    // 0x803AA6A0: addiu       $a0, $zero, 0xB
    ctx->r4 = ADD32(0, 0XB);
    // 0x803AA6A4: addiu       $a0, $a0, -0x1
    ctx->r4 = ADD32(ctx->r4, -0X1);
L_803AA6A8:
    // 0x803AA6A8: sll         $t8, $a0, 24
    ctx->r24 = S32(ctx->r4 << 24);
    // 0x803AA6AC: sra         $a0, $t8, 24
    ctx->r4 = S32(SIGNED(ctx->r24) >> 24);
L_803AA6B0:
    // 0x803AA6B0: addu        $t0, $v0, $a0
    ctx->r8 = ADD32(ctx->r2, ctx->r4);
    // 0x803AA6B4: lb          $t1, 0x44($t0)
    ctx->r9 = MEM_B(ctx->r8, 0X44);
    // 0x803AA6B8: nop

    // 0x803AA6BC: bne         $v1, $t1, L_803AA694
    if (ctx->r3 != ctx->r9) {
        // 0x803AA6C0: nop
    
            goto L_803AA694;
    }
    // 0x803AA6C0: nop

    // 0x803AA6C4: jr          $ra
    // 0x803AA6C8: or          $v0, $a0, $zero
    ctx->r2 = ctx->r4 | 0;
    return;
    // 0x803AA6C8: or          $v0, $a0, $zero
    ctx->r2 = ctx->r4 | 0;
;}
RECOMP_FUNC void func_803AA6CC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803AA6CC: lui         $v0, 0x801B
    ctx->r2 = S32(0X801B << 16);
    // 0x803AA6D0: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x803AA6D4: sll         $t6, $a0, 24
    ctx->r14 = S32(ctx->r4 << 24);
    // 0x803AA6D8: lw          $v0, 0x1CF0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X1CF0);
    // 0x803AA6DC: sra         $a0, $t6, 24
    ctx->r4 = S32(SIGNED(ctx->r14) >> 24);
    // 0x803AA6E0: addiu       $a1, $zero, -0x1
    ctx->r5 = ADD32(0, -0X1);
    // 0x803AA6E4: addiu       $v1, $zero, 0xB
    ctx->r3 = ADD32(0, 0XB);
L_803AA6E8:
    // 0x803AA6E8: bne         $a0, $v1, L_803AA6FC
    if (ctx->r4 != ctx->r3) {
        // 0x803AA6EC: addiu       $a0, $a0, 0x1
        ctx->r4 = ADD32(ctx->r4, 0X1);
            goto L_803AA6FC;
    }
    // 0x803AA6EC: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    // 0x803AA6F0: b           L_803AA704
    // 0x803AA6F4: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
        goto L_803AA704;
    // 0x803AA6F4: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x803AA6F8: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
L_803AA6FC:
    // 0x803AA6FC: sll         $t8, $a0, 24
    ctx->r24 = S32(ctx->r4 << 24);
    // 0x803AA700: sra         $a0, $t8, 24
    ctx->r4 = S32(SIGNED(ctx->r24) >> 24);
L_803AA704:
    // 0x803AA704: addu        $t0, $v0, $a0
    ctx->r8 = ADD32(ctx->r2, ctx->r4);
    // 0x803AA708: lb          $t1, 0x44($t0)
    ctx->r9 = MEM_B(ctx->r8, 0X44);
    // 0x803AA70C: nop

    // 0x803AA710: bne         $a1, $t1, L_803AA6E8
    if (ctx->r5 != ctx->r9) {
        // 0x803AA714: nop
    
            goto L_803AA6E8;
    }
    // 0x803AA714: nop

    // 0x803AA718: jr          $ra
    // 0x803AA71C: or          $v0, $a0, $zero
    ctx->r2 = ctx->r4 | 0;
    return;
    // 0x803AA71C: or          $v0, $a0, $zero
    ctx->r2 = ctx->r4 | 0;
;}
RECOMP_FUNC void func_803AA720(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803AA720: lui         $v1, 0x801B
    ctx->r3 = S32(0X801B << 16);
    // 0x803AA724: addiu       $v1, $v1, 0x1CF0
    ctx->r3 = ADD32(ctx->r3, 0X1CF0);
    // 0x803AA728: lw          $t6, 0x0($v1)
    ctx->r14 = MEM_W(ctx->r3, 0X0);
    // 0x803AA72C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x803AA730: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x803AA734: lb          $a0, 0x3F($t6)
    ctx->r4 = MEM_B(ctx->r14, 0X3F);
    // 0x803AA738: jal         0x8006DED4
    // 0x803AA73C: sb          $a0, 0x1F($sp)
    MEM_B(0X1F, ctx->r29) = ctx->r4;
    func_8006DED4(rdram, ctx);
        goto after_0;
    // 0x803AA73C: sb          $a0, 0x1F($sp)
    MEM_B(0X1F, ctx->r29) = ctx->r4;
    after_0:
    // 0x803AA740: lb          $a0, 0x1F($sp)
    ctx->r4 = MEM_B(ctx->r29, 0X1F);
    // 0x803AA744: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x803AA748: bne         $v0, $at, L_803AA7EC
    if (ctx->r2 != ctx->r1) {
        // 0x803AA74C: nop
    
            goto L_803AA7EC;
    }
    // 0x803AA74C: nop

    // 0x803AA750: jal         0x80035734
    // 0x803AA754: sb          $a0, 0x1F($sp)
    MEM_B(0X1F, ctx->r29) = ctx->r4;
    func_80035734(rdram, ctx);
        goto after_1;
    // 0x803AA754: sb          $a0, 0x1F($sp)
    MEM_B(0X1F, ctx->r29) = ctx->r4;
    after_1:
    // 0x803AA758: lui         $v1, 0x801B
    ctx->r3 = S32(0X801B << 16);
    // 0x803AA75C: addiu       $v1, $v1, 0x1CF0
    ctx->r3 = ADD32(ctx->r3, 0X1CF0);
    // 0x803AA760: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x803AA764: lb          $a0, 0x1F($sp)
    ctx->r4 = MEM_B(ctx->r29, 0X1F);
    // 0x803AA768: lb          $t7, 0x41($v0)
    ctx->r15 = MEM_B(ctx->r2, 0X41);
    // 0x803AA76C: addu        $t8, $v0, $a0
    ctx->r24 = ADD32(ctx->r2, ctx->r4);
    // 0x803AA770: sb          $t7, 0x44($t8)
    MEM_B(0X44, ctx->r24) = ctx->r15;
    // 0x803AA774: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x803AA778: nop

    // 0x803AA77C: lb          $t9, 0x41($v0)
    ctx->r25 = MEM_B(ctx->r2, 0X41);
    // 0x803AA780: nop

    // 0x803AA784: addu        $t0, $v0, $t9
    ctx->r8 = ADD32(ctx->r2, ctx->r25);
    // 0x803AA788: sb          $a0, 0x50($t0)
    MEM_B(0X50, ctx->r8) = ctx->r4;
    // 0x803AA78C: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x803AA790: nop

    // 0x803AA794: lb          $t1, 0x41($v0)
    ctx->r9 = MEM_B(ctx->r2, 0X41);
    // 0x803AA798: nop

    // 0x803AA79C: addiu       $t2, $t1, 0x1
    ctx->r10 = ADD32(ctx->r9, 0X1);
    // 0x803AA7A0: sb          $t2, 0x41($v0)
    MEM_B(0X41, ctx->r2) = ctx->r10;
    // 0x803AA7A4: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x803AA7A8: nop

    // 0x803AA7AC: lb          $t3, 0x40($v0)
    ctx->r11 = MEM_B(ctx->r2, 0X40);
    // 0x803AA7B0: lb          $t4, 0x41($v0)
    ctx->r12 = MEM_B(ctx->r2, 0X41);
    // 0x803AA7B4: nop

    // 0x803AA7B8: slt         $at, $t3, $t4
    ctx->r1 = SIGNED(ctx->r11) < SIGNED(ctx->r12) ? 1 : 0;
    // 0x803AA7BC: beq         $at, $zero, L_803AA7CC
    if (ctx->r1 == 0) {
        // 0x803AA7C0: nop
    
            goto L_803AA7CC;
    }
    // 0x803AA7C0: nop

    // 0x803AA7C4: b           L_803AA7F4
    // 0x803AA7C8: sb          $zero, 0x38($v0)
    MEM_B(0X38, ctx->r2) = 0;
        goto L_803AA7F4;
    // 0x803AA7C8: sb          $zero, 0x38($v0)
    MEM_B(0X38, ctx->r2) = 0;
L_803AA7CC:
    // 0x803AA7CC: lb          $a0, 0x3F($v0)
    ctx->r4 = MEM_B(ctx->r2, 0X3F);
    // 0x803AA7D0: jal         0x803AA6CC
    // 0x803AA7D4: nop

    func_803AA6CC(rdram, ctx);
        goto after_2;
    // 0x803AA7D4: nop

    after_2:
    // 0x803AA7D8: lui         $v1, 0x801B
    ctx->r3 = S32(0X801B << 16);
    // 0x803AA7DC: addiu       $v1, $v1, 0x1CF0
    ctx->r3 = ADD32(ctx->r3, 0X1CF0);
    // 0x803AA7E0: lw          $t5, 0x0($v1)
    ctx->r13 = MEM_W(ctx->r3, 0X0);
    // 0x803AA7E4: b           L_803AA7F4
    // 0x803AA7E8: sb          $v0, 0x3F($t5)
    MEM_B(0X3F, ctx->r13) = ctx->r2;
        goto L_803AA7F4;
    // 0x803AA7E8: sb          $v0, 0x3F($t5)
    MEM_B(0X3F, ctx->r13) = ctx->r2;
L_803AA7EC:
    // 0x803AA7EC: jal         0x800357AC
    // 0x803AA7F0: nop

    func_800357AC(rdram, ctx);
        goto after_3;
    // 0x803AA7F0: nop

    after_3:
L_803AA7F4:
    // 0x803AA7F4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x803AA7F8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x803AA7FC: jr          $ra
    // 0x803AA800: nop

    return;
    // 0x803AA800: nop

;}
RECOMP_FUNC void func_803AA804(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803AA804: lui         $a2, 0x801B
    ctx->r6 = S32(0X801B << 16);
    // 0x803AA808: addiu       $a2, $a2, 0x1CF0
    ctx->r6 = ADD32(ctx->r6, 0X1CF0);
    // 0x803AA80C: lw          $v0, 0x0($a2)
    ctx->r2 = MEM_W(ctx->r6, 0X0);
    // 0x803AA810: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x803AA814: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x803AA818: lb          $a1, 0x41($v0)
    ctx->r5 = MEM_B(ctx->r2, 0X41);
    // 0x803AA81C: nop

    // 0x803AA820: bne         $a1, $zero, L_803AA838
    if (ctx->r5 != 0) {
        // 0x803AA824: addiu       $t6, $a1, -0x1
        ctx->r14 = ADD32(ctx->r5, -0X1);
            goto L_803AA838;
    }
    // 0x803AA824: addiu       $t6, $a1, -0x1
    ctx->r14 = ADD32(ctx->r5, -0X1);
    // 0x803AA828: jal         0x803AAD34
    // 0x803AA82C: sb          $zero, 0x38($v0)
    MEM_B(0X38, ctx->r2) = 0;
    func_803AAD34(rdram, ctx);
        goto after_0;
    // 0x803AA82C: sb          $zero, 0x38($v0)
    MEM_B(0X38, ctx->r2) = 0;
    after_0:
    // 0x803AA830: b           L_803AA878
    // 0x803AA834: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_803AA878;
    // 0x803AA834: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_803AA838:
    // 0x803AA838: sb          $t6, 0x41($v0)
    MEM_B(0X41, ctx->r2) = ctx->r14;
    // 0x803AA83C: lw          $v0, 0x0($a2)
    ctx->r2 = MEM_W(ctx->r6, 0X0);
    // 0x803AA840: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    // 0x803AA844: lb          $t7, 0x41($v0)
    ctx->r15 = MEM_B(ctx->r2, 0X41);
    // 0x803AA848: nop

    // 0x803AA84C: addu        $a0, $v0, $t7
    ctx->r4 = ADD32(ctx->r2, ctx->r15);
    // 0x803AA850: lb          $v1, 0x50($a0)
    ctx->r3 = MEM_B(ctx->r4, 0X50);
    // 0x803AA854: sb          $a3, 0x50($a0)
    MEM_B(0X50, ctx->r4) = ctx->r7;
    // 0x803AA858: lw          $t8, 0x0($a2)
    ctx->r24 = MEM_W(ctx->r6, 0X0);
    // 0x803AA85C: nop

    // 0x803AA860: addu        $t9, $t8, $v1
    ctx->r25 = ADD32(ctx->r24, ctx->r3);
    // 0x803AA864: sb          $a3, 0x44($t9)
    MEM_B(0X44, ctx->r25) = ctx->r7;
    // 0x803AA868: lw          $t0, 0x0($a2)
    ctx->r8 = MEM_W(ctx->r6, 0X0);
    // 0x803AA86C: nop

    // 0x803AA870: sb          $v1, 0x3F($t0)
    MEM_B(0X3F, ctx->r8) = ctx->r3;
    // 0x803AA874: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_803AA878:
    // 0x803AA878: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x803AA87C: jr          $ra
    // 0x803AA880: nop

    return;
    // 0x803AA880: nop

;}
RECOMP_FUNC void func_803AA884(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803AA884: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x803AA888: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x803AA88C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x803AA890: lbu         $a0, -0x326C($a0)
    ctx->r4 = MEM_BU(ctx->r4, -0X326C);
    // 0x803AA894: jal         0x8004BD64
    // 0x803AA898: nop

    func_8004BD64(rdram, ctx);
        goto after_0;
    // 0x803AA898: nop

    after_0:
    // 0x803AA89C: lui         $t6, 0x803B
    ctx->r14 = S32(0X803B << 16);
    // 0x803AA8A0: lw          $t8, 0x14($v0)
    ctx->r24 = MEM_W(ctx->r2, 0X14);
    // 0x803AA8A4: addiu       $t6, $t6, -0x5738
    ctx->r14 = ADD32(ctx->r14, -0X5738);
    // 0x803AA8A8: lui         $t7, 0x803C
    ctx->r15 = S32(0X803C << 16);
    // 0x803AA8AC: sw          $t6, 0xC($v0)
    MEM_W(0XC, ctx->r2) = ctx->r14;
    // 0x803AA8B0: addiu       $t7, $t7, 0x69E0
    ctx->r15 = ADD32(ctx->r15, 0X69E0);
    // 0x803AA8B4: sw          $t7, 0x30($t8)
    MEM_W(0X30, ctx->r24) = ctx->r15;
    // 0x803AA8B8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x803AA8BC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x803AA8C0: jr          $ra
    // 0x803AA8C4: nop

    return;
    // 0x803AA8C4: nop

;}
RECOMP_FUNC void func_803AA8C8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803AA8C8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x803AA8CC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x803AA8D0: lw          $v1, 0x8($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X8);
    // 0x803AA8D4: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x803AA8D8: lb          $t6, 0x38($v1)
    ctx->r14 = MEM_B(ctx->r3, 0X38);
    // 0x803AA8DC: or          $a3, $a1, $zero
    ctx->r7 = ctx->r5 | 0;
    // 0x803AA8E0: bne         $t6, $at, L_803AA91C
    if (ctx->r14 != ctx->r1) {
        // 0x803AA8E4: addiu       $t7, $zero, 0x1
        ctx->r15 = ADD32(0, 0X1);
            goto L_803AA91C;
    }
    // 0x803AA8E4: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x803AA8E8: sb          $t7, 0x4($a1)
    MEM_B(0X4, ctx->r5) = ctx->r15;
    // 0x803AA8EC: lb          $t8, 0x3F($v1)
    ctx->r24 = MEM_B(ctx->r3, 0X3F);
    // 0x803AA8F0: lui         $t0, 0x8040
    ctx->r8 = S32(0X8040 << 16);
    // 0x803AA8F4: addiu       $t0, $t0, -0x4F40
    ctx->r8 = ADD32(ctx->r8, -0X4F40);
    // 0x803AA8F8: sll         $t9, $t8, 2
    ctx->r25 = S32(ctx->r24 << 2);
    // 0x803AA8FC: addu        $v0, $t9, $t0
    ctx->r2 = ADD32(ctx->r25, ctx->r8);
    // 0x803AA900: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    // 0x803AA904: lh          $a1, 0x0($v0)
    ctx->r5 = MEM_H(ctx->r2, 0X0);
    // 0x803AA908: lh          $a2, 0x2($v0)
    ctx->r6 = MEM_H(ctx->r2, 0X2);
    // 0x803AA90C: jal         0x8004CD44
    // 0x803AA910: nop

    func_8004CD44(rdram, ctx);
        goto after_0;
    // 0x803AA910: nop

    after_0:
    // 0x803AA914: b           L_803AA924
    // 0x803AA918: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_803AA924;
    // 0x803AA918: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_803AA91C:
    // 0x803AA91C: sb          $zero, 0x4($a3)
    MEM_B(0X4, ctx->r7) = 0;
    // 0x803AA920: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_803AA924:
    // 0x803AA924: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x803AA928: jr          $ra
    // 0x803AA92C: nop

    return;
    // 0x803AA92C: nop

;}
RECOMP_FUNC void func_803AA930(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803AA930: lui         $t6, 0x8012
    ctx->r14 = S32(0X8012 << 16);
    // 0x803AA934: lb          $t6, -0x326C($t6)
    ctx->r14 = MEM_B(ctx->r14, -0X326C);
    // 0x803AA938: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x803AA93C: bne         $t6, $zero, L_803AA958
    if (ctx->r14 != 0) {
        // 0x803AA940: sw          $ra, 0x14($sp)
        MEM_W(0X14, ctx->r29) = ctx->r31;
            goto L_803AA958;
    }
    // 0x803AA940: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x803AA944: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x803AA948: jal         0x8004C3C8
    // 0x803AA94C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8004C3C8(rdram, ctx);
        goto after_0;
    // 0x803AA94C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_0:
    // 0x803AA950: b           L_803AA968
    // 0x803AA954: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_803AA968;
    // 0x803AA954: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_803AA958:
    // 0x803AA958: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x803AA95C: jal         0x8004C3C8
    // 0x803AA960: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8004C3C8(rdram, ctx);
        goto after_1;
    // 0x803AA960: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_1:
    // 0x803AA964: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_803AA968:
    // 0x803AA968: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x803AA96C: jr          $ra
    // 0x803AA970: nop

    return;
    // 0x803AA970: nop

;}
RECOMP_FUNC void func_803AA974(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803AA974: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x803AA978: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x803AA97C: lui         $a0, 0x8005
    ctx->r4 = S32(0X8005 << 16);
    // 0x803AA980: jal         0x80029354
    // 0x803AA984: addiu       $a0, $a0, -0x1E98
    ctx->r4 = ADD32(ctx->r4, -0X1E98);
    func_80029354(rdram, ctx);
        goto after_0;
    // 0x803AA984: addiu       $a0, $a0, -0x1E98
    ctx->r4 = ADD32(ctx->r4, -0X1E98);
    after_0:
    // 0x803AA988: lw          $a0, 0x14($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X14);
    // 0x803AA98C: lui         $a3, 0x803D
    ctx->r7 = S32(0X803D << 16);
    // 0x803AA990: addiu       $a3, $a3, 0x4F94
    ctx->r7 = ADD32(ctx->r7, 0X4F94);
    // 0x803AA994: addiu       $a1, $zero, 0xCD
    ctx->r5 = ADD32(0, 0XCD);
    // 0x803AA998: addiu       $a2, $zero, 0x9
    ctx->r6 = ADD32(0, 0X9);
    // 0x803AA99C: jal         0x8004CD24
    // 0x803AA9A0: sw          $a0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r4;
    func_8004CD24(rdram, ctx);
        goto after_1;
    // 0x803AA9A0: sw          $a0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r4;
    after_1:
    // 0x803AA9A4: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    // 0x803AA9A8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x803AA9AC: jal         0x8002135C
    // 0x803AA9B0: addiu       $a2, $zero, 0x18
    ctx->r6 = ADD32(0, 0X18);
    func_8002135C(rdram, ctx);
        goto after_2;
    // 0x803AA9B0: addiu       $a2, $zero, 0x18
    ctx->r6 = ADD32(0, 0X18);
    after_2:
    // 0x803AA9B4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x803AA9B8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x803AA9BC: jr          $ra
    // 0x803AA9C0: nop

    return;
    // 0x803AA9C0: nop

;}
RECOMP_FUNC void func_803AA9C4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803AA9C4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x803AA9C8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x803AA9CC: lui         $a0, 0x803B
    ctx->r4 = S32(0X803B << 16);
    // 0x803AA9D0: addiu       $a0, $a0, -0x55FC
    ctx->r4 = ADD32(ctx->r4, -0X55FC);
    // 0x803AA9D4: jal         0x800293DC
    // 0x803AA9D8: addiu       $a1, $zero, 0xA
    ctx->r5 = ADD32(0, 0XA);
    func_800293DC(rdram, ctx);
        goto after_0;
    // 0x803AA9D8: addiu       $a1, $zero, 0xA
    ctx->r5 = ADD32(0, 0XA);
    after_0:
    // 0x803AA9DC: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x803AA9E0: lbu         $a0, -0x326C($a0)
    ctx->r4 = MEM_BU(ctx->r4, -0X326C);
    // 0x803AA9E4: lw          $a1, 0x14($v0)
    ctx->r5 = MEM_W(ctx->r2, 0X14);
    // 0x803AA9E8: lui         $a2, 0x8040
    ctx->r6 = S32(0X8040 << 16);
    // 0x803AA9EC: jal         0x8004C7D4
    // 0x803AA9F0: addiu       $a2, $a2, -0x4F40
    ctx->r6 = ADD32(ctx->r6, -0X4F40);
    func_8004C7D4(rdram, ctx);
        goto after_1;
    // 0x803AA9F0: addiu       $a2, $a2, -0x4F40
    ctx->r6 = ADD32(ctx->r6, -0X4F40);
    after_1:
    // 0x803AA9F4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x803AA9F8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x803AA9FC: jr          $ra
    // 0x803AAA00: nop

    return;
    // 0x803AAA00: nop

;}
RECOMP_FUNC void func_803AAA04(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803AAA04: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x803AAA08: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x803AAA0C: lw          $v0, 0x8($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X8);
    // 0x803AAA10: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x803AAA14: lb          $v1, 0x3C($v0)
    ctx->r3 = MEM_B(ctx->r2, 0X3C);
    // 0x803AAA18: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x803AAA1C: beq         $v1, $zero, L_803AAA44
    if (ctx->r3 == 0) {
        // 0x803AAA20: lui         $a2, 0x8040
        ctx->r6 = S32(0X8040 << 16);
            goto L_803AAA44;
    }
    // 0x803AAA20: lui         $a2, 0x8040
    ctx->r6 = S32(0X8040 << 16);
    // 0x803AAA24: bne         $v1, $at, L_803AAA50
    if (ctx->r3 != ctx->r1) {
        // 0x803AAA28: lui         $a0, 0x8012
        ctx->r4 = S32(0X8012 << 16);
            goto L_803AAA50;
    }
    // 0x803AAA28: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x803AAA2C: lbu         $a0, -0x326C($a0)
    ctx->r4 = MEM_BU(ctx->r4, -0X326C);
    // 0x803AAA30: lui         $a2, 0x8040
    ctx->r6 = S32(0X8040 << 16);
    // 0x803AAA34: jal         0x8004CB3C
    // 0x803AAA38: addiu       $a2, $a2, -0x4F40
    ctx->r6 = ADD32(ctx->r6, -0X4F40);
    func_8004CB3C(rdram, ctx);
        goto after_0;
    // 0x803AAA38: addiu       $a2, $a2, -0x4F40
    ctx->r6 = ADD32(ctx->r6, -0X4F40);
    after_0:
    // 0x803AAA3C: b           L_803AAA54
    // 0x803AAA40: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_803AAA54;
    // 0x803AAA40: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_803AAA44:
    // 0x803AAA44: lbu         $a0, -0x326C($a0)
    ctx->r4 = MEM_BU(ctx->r4, -0X326C);
    // 0x803AAA48: jal         0x8004C7D4
    // 0x803AAA4C: addiu       $a2, $a2, -0x4F40
    ctx->r6 = ADD32(ctx->r6, -0X4F40);
    func_8004C7D4(rdram, ctx);
        goto after_1;
    // 0x803AAA4C: addiu       $a2, $a2, -0x4F40
    ctx->r6 = ADD32(ctx->r6, -0X4F40);
    after_1:
L_803AAA50:
    // 0x803AAA50: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_803AAA54:
    // 0x803AAA54: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x803AAA58: jr          $ra
    // 0x803AAA5C: nop

    return;
    // 0x803AAA5C: nop

;}
RECOMP_FUNC void func_803AAA60(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803AAA60: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x803AAA64: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x803AAA68: lui         $a0, 0x8005
    ctx->r4 = S32(0X8005 << 16);
    // 0x803AAA6C: addiu       $a0, $a0, -0x1E98
    ctx->r4 = ADD32(ctx->r4, -0X1E98);
    // 0x803AAA70: jal         0x800293DC
    // 0x803AAA74: addiu       $a1, $zero, 0xA
    ctx->r5 = ADD32(0, 0XA);
    func_800293DC(rdram, ctx);
        goto after_0;
    // 0x803AAA74: addiu       $a1, $zero, 0xA
    ctx->r5 = ADD32(0, 0XA);
    after_0:
    // 0x803AAA78: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x803AAA7C: lbu         $a0, -0x326C($a0)
    ctx->r4 = MEM_BU(ctx->r4, -0X326C);
    // 0x803AAA80: lw          $a1, 0x14($v0)
    ctx->r5 = MEM_W(ctx->r2, 0X14);
    // 0x803AAA84: lui         $a2, 0x8040
    ctx->r6 = S32(0X8040 << 16);
    // 0x803AAA88: addiu       $t6, $zero, 0xB
    ctx->r14 = ADD32(0, 0XB);
    // 0x803AAA8C: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x803AAA90: addiu       $a2, $a2, -0x4F40
    ctx->r6 = ADD32(ctx->r6, -0X4F40);
    // 0x803AAA94: jal         0x8004C9FC
    // 0x803AAA98: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    func_8004C9FC(rdram, ctx);
        goto after_1;
    // 0x803AAA98: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_1:
    // 0x803AAA9C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x803AAAA0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x803AAAA4: jr          $ra
    // 0x803AAAA8: nop

    return;
    // 0x803AAAA8: nop

;}
RECOMP_FUNC void func_803AAAAC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803AAAAC: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x803AAAB0: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x803AAAB4: lui         $a0, 0x8005
    ctx->r4 = S32(0X8005 << 16);
    // 0x803AAAB8: addiu       $a0, $a0, -0x1E98
    ctx->r4 = ADD32(ctx->r4, -0X1E98);
    // 0x803AAABC: jal         0x800293DC
    // 0x803AAAC0: addiu       $a1, $zero, 0xA
    ctx->r5 = ADD32(0, 0XA);
    func_800293DC(rdram, ctx);
        goto after_0;
    // 0x803AAAC0: addiu       $a1, $zero, 0xA
    ctx->r5 = ADD32(0, 0XA);
    after_0:
    // 0x803AAAC4: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x803AAAC8: lw          $a1, 0x14($v0)
    ctx->r5 = MEM_W(ctx->r2, 0X14);
    // 0x803AAACC: lbu         $a0, -0x326C($a0)
    ctx->r4 = MEM_BU(ctx->r4, -0X326C);
    // 0x803AAAD0: lui         $a2, 0x803C
    ctx->r6 = S32(0X803C << 16);
    // 0x803AAAD4: lui         $a3, 0x8040
    ctx->r7 = S32(0X8040 << 16);
    // 0x803AAAD8: addiu       $t6, $zero, 0xB
    ctx->r14 = ADD32(0, 0XB);
    // 0x803AAADC: sw          $t6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r14;
    // 0x803AAAE0: addiu       $a3, $a3, -0x4F40
    ctx->r7 = ADD32(ctx->r7, -0X4F40);
    // 0x803AAAE4: addiu       $a2, $a2, 0x6BB4
    ctx->r6 = ADD32(ctx->r6, 0X6BB4);
    // 0x803AAAE8: jal         0x8004C5DC
    // 0x803AAAEC: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    func_8004C5DC(rdram, ctx);
        goto after_1;
    // 0x803AAAEC: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_1:
    // 0x803AAAF0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x803AAAF4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x803AAAF8: jr          $ra
    // 0x803AAAFC: nop

    return;
    // 0x803AAAFC: nop

;}
RECOMP_FUNC void func_803AAB00(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803AAB00: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x803AAB04: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x803AAB08: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x803AAB0C: lbu         $a0, -0x326C($a0)
    ctx->r4 = MEM_BU(ctx->r4, -0X326C);
    // 0x803AAB10: lui         $a2, 0x8040
    ctx->r6 = S32(0X8040 << 16);
    // 0x803AAB14: addiu       $t6, $zero, 0xB
    ctx->r14 = ADD32(0, 0XB);
    // 0x803AAB18: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x803AAB1C: addiu       $a2, $a2, -0x4EF8
    ctx->r6 = ADD32(ctx->r6, -0X4EF8);
    // 0x803AAB20: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x803AAB24: jal         0x8004D0C8
    // 0x803AAB28: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    func_8004D0C8(rdram, ctx);
        goto after_0;
    // 0x803AAB28: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_0:
    // 0x803AAB2C: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x803AAB30: lbu         $a0, -0x326C($a0)
    ctx->r4 = MEM_BU(ctx->r4, -0X326C);
    // 0x803AAB34: lui         $a2, 0x8040
    ctx->r6 = S32(0X8040 << 16);
    // 0x803AAB38: addiu       $t7, $zero, 0xB
    ctx->r15 = ADD32(0, 0XB);
    // 0x803AAB3C: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x803AAB40: addiu       $a2, $a2, -0x4EB8
    ctx->r6 = ADD32(ctx->r6, -0X4EB8);
    // 0x803AAB44: addiu       $a1, $zero, 0xB
    ctx->r5 = ADD32(0, 0XB);
    // 0x803AAB48: jal         0x8004D384
    // 0x803AAB4C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    func_8004D384(rdram, ctx);
        goto after_1;
    // 0x803AAB4C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_1:
    // 0x803AAB50: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x803AAB54: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x803AAB58: jr          $ra
    // 0x803AAB5C: nop

    return;
    // 0x803AAB5C: nop

;}
RECOMP_FUNC void func_803AAB60(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803AAB60: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x803AAB64: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x803AAB68: lui         $a0, 0x8005
    ctx->r4 = S32(0X8005 << 16);
    // 0x803AAB6C: jal         0x80029354
    // 0x803AAB70: addiu       $a0, $a0, -0x1E98
    ctx->r4 = ADD32(ctx->r4, -0X1E98);
    func_80029354(rdram, ctx);
        goto after_0;
    // 0x803AAB70: addiu       $a0, $a0, -0x1E98
    ctx->r4 = ADD32(ctx->r4, -0X1E98);
    after_0:
    // 0x803AAB74: lw          $a0, 0x14($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X14);
    // 0x803AAB78: lui         $a1, 0x803B
    ctx->r5 = S32(0X803B << 16);
    // 0x803AAB7C: addiu       $a1, $a1, -0x3110
    ctx->r5 = ADD32(ctx->r5, -0X3110);
    // 0x803AAB80: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x803AAB84: jal         0x8004A298
    // 0x803AAB88: sw          $a0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r4;
    func_8004A298(rdram, ctx);
        goto after_1;
    // 0x803AAB88: sw          $a0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r4;
    after_1:
    // 0x803AAB8C: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    // 0x803AAB90: jal         0x803AAC68
    // 0x803AAB94: nop

    func_803AAC68(rdram, ctx);
        goto after_2;
    // 0x803AAB94: nop

    after_2:
    // 0x803AAB98: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x803AAB9C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x803AABA0: jr          $ra
    // 0x803AABA4: nop

    return;
    // 0x803AABA4: nop

;}
RECOMP_FUNC void func_803AABA8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803AABA8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x803AABAC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x803AABB0: lui         $a0, 0x803B
    ctx->r4 = S32(0X803B << 16);
    // 0x803AABB4: jal         0x80029354
    // 0x803AABB8: addiu       $a0, $a0, -0x5420
    ctx->r4 = ADD32(ctx->r4, -0X5420);
    func_80029354(rdram, ctx);
        goto after_0;
    // 0x803AABB8: addiu       $a0, $a0, -0x5420
    ctx->r4 = ADD32(ctx->r4, -0X5420);
    after_0:
    // 0x803AABBC: lw          $a0, 0x14($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X14);
    // 0x803AABC0: lui         $a1, 0x803B
    ctx->r5 = S32(0X803B << 16);
    // 0x803AABC4: addiu       $a1, $a1, -0x311A
    ctx->r5 = ADD32(ctx->r5, -0X311A);
    // 0x803AABC8: jal         0x8004A298
    // 0x803AABCC: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_8004A298(rdram, ctx);
        goto after_1;
    // 0x803AABCC: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_1:
    // 0x803AABD0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x803AABD4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x803AABD8: jr          $ra
    // 0x803AABDC: nop

    return;
    // 0x803AABDC: nop

;}
RECOMP_FUNC void func_803AABE0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803AABE0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x803AABE4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x803AABE8: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x803AABEC: lw          $v0, 0x8($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X8);
    // 0x803AABF0: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    // 0x803AABF4: lb          $v1, 0x38($v0)
    ctx->r3 = MEM_B(ctx->r2, 0X38);
    // 0x803AABF8: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x803AABFC: beq         $v1, $zero, L_803AAC1C
    if (ctx->r3 == 0) {
        // 0x803AAC00: lui         $a1, 0x803B
        ctx->r5 = S32(0X803B << 16);
            goto L_803AAC1C;
    }
    // 0x803AAC00: lui         $a1, 0x803B
    ctx->r5 = S32(0X803B << 16);
    // 0x803AAC04: beq         $v1, $at, L_803AAC1C
    if (ctx->r3 == ctx->r1) {
        // 0x803AAC08: addiu       $at, $zero, 0x2
        ctx->r1 = ADD32(0, 0X2);
            goto L_803AAC1C;
    }
    // 0x803AAC08: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x803AAC0C: beq         $v1, $at, L_803AAC3C
    if (ctx->r3 == ctx->r1) {
        // 0x803AAC10: lui         $a1, 0x803B
        ctx->r5 = S32(0X803B << 16);
            goto L_803AAC3C;
    }
    // 0x803AAC10: lui         $a1, 0x803B
    ctx->r5 = S32(0X803B << 16);
    // 0x803AAC14: b           L_803AAC5C
    // 0x803AAC18: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_803AAC5C;
    // 0x803AAC18: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_803AAC1C:
    // 0x803AAC1C: addiu       $a1, $a1, -0x311A
    ctx->r5 = ADD32(ctx->r5, -0X311A);
    // 0x803AAC20: jal         0x8004A298
    // 0x803AAC24: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_8004A298(rdram, ctx);
        goto after_0;
    // 0x803AAC24: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_0:
    // 0x803AAC28: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    // 0x803AAC2C: jal         0x803AAC68
    // 0x803AAC30: nop

    func_803AAC68(rdram, ctx);
        goto after_1;
    // 0x803AAC30: nop

    after_1:
    // 0x803AAC34: b           L_803AAC5C
    // 0x803AAC38: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_803AAC5C;
    // 0x803AAC38: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_803AAC3C:
    // 0x803AAC3C: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    // 0x803AAC40: addiu       $a1, $a1, -0x3124
    ctx->r5 = ADD32(ctx->r5, -0X3124);
    // 0x803AAC44: jal         0x8004A298
    // 0x803AAC48: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_8004A298(rdram, ctx);
        goto after_2;
    // 0x803AAC48: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_2:
    // 0x803AAC4C: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    // 0x803AAC50: jal         0x803AAC68
    // 0x803AAC54: nop

    func_803AAC68(rdram, ctx);
        goto after_3;
    // 0x803AAC54: nop

    after_3:
    // 0x803AAC58: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_803AAC5C:
    // 0x803AAC5C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x803AAC60: jr          $ra
    // 0x803AAC64: nop

    return;
    // 0x803AAC64: nop

;}
RECOMP_FUNC void func_803AAC68(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803AAC68: lui         $t6, 0x8012
    ctx->r14 = S32(0X8012 << 16);
    // 0x803AAC6C: lb          $t6, -0x326C($t6)
    ctx->r14 = MEM_B(ctx->r14, -0X326C);
    // 0x803AAC70: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x803AAC74: bne         $t6, $zero, L_803AAC9C
    if (ctx->r14 != 0) {
        // 0x803AAC78: sw          $ra, 0x1C($sp)
        MEM_W(0X1C, ctx->r29) = ctx->r31;
            goto L_803AAC9C;
    }
    // 0x803AAC78: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x803AAC7C: addiu       $t7, $zero, 0xB3
    ctx->r15 = ADD32(0, 0XB3);
    // 0x803AAC80: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x803AAC84: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x803AAC88: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x803AAC8C: jal         0x8004A5C0
    // 0x803AAC90: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    func_8004A5C0(rdram, ctx);
        goto after_0;
    // 0x803AAC90: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_0:
    // 0x803AAC94: b           L_803AACB8
    // 0x803AAC98: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_803AACB8;
    // 0x803AAC98: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_803AAC9C:
    // 0x803AAC9C: addiu       $t8, $zero, 0xB3
    ctx->r24 = ADD32(0, 0XB3);
    // 0x803AACA0: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    // 0x803AACA4: addiu       $a1, $zero, 0x50
    ctx->r5 = ADD32(0, 0X50);
    // 0x803AACA8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x803AACAC: jal         0x8004A5C0
    // 0x803AACB0: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    func_8004A5C0(rdram, ctx);
        goto after_1;
    // 0x803AACB0: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_1:
    // 0x803AACB4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_803AACB8:
    // 0x803AACB8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x803AACBC: jr          $ra
    // 0x803AACC0: nop

    return;
    // 0x803AACC0: nop

;}
RECOMP_FUNC void func_803AACC4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803AACC4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x803AACC8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x803AACCC: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x803AACD0: lw          $v0, 0x8($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X8);
    // 0x803AACD4: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x803AACD8: lb          $v1, 0x38($v0)
    ctx->r3 = MEM_B(ctx->r2, 0X38);
    // 0x803AACDC: addiu       $a0, $zero, 0x32
    ctx->r4 = ADD32(0, 0X32);
    // 0x803AACE0: beq         $v1, $zero, L_803AAD00
    if (ctx->r3 == 0) {
        // 0x803AACE4: lui         $a1, 0x803B
        ctx->r5 = S32(0X803B << 16);
            goto L_803AAD00;
    }
    // 0x803AACE4: lui         $a1, 0x803B
    ctx->r5 = S32(0X803B << 16);
    // 0x803AACE8: beq         $v1, $at, L_803AAD00
    if (ctx->r3 == ctx->r1) {
        // 0x803AACEC: addiu       $at, $zero, 0x2
        ctx->r1 = ADD32(0, 0X2);
            goto L_803AAD00;
    }
    // 0x803AACEC: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x803AACF0: beq         $v1, $at, L_803AAD14
    if (ctx->r3 == ctx->r1) {
        // 0x803AACF4: addiu       $a0, $zero, 0x32
        ctx->r4 = ADD32(0, 0X32);
            goto L_803AAD14;
    }
    // 0x803AACF4: addiu       $a0, $zero, 0x32
    ctx->r4 = ADD32(0, 0X32);
    // 0x803AACF8: b           L_803AAD28
    // 0x803AACFC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_803AAD28;
    // 0x803AACFC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_803AAD00:
    // 0x803AAD00: addiu       $a1, $a1, -0x3134
    ctx->r5 = ADD32(ctx->r5, -0X3134);
    // 0x803AAD04: jal         0x8002F444
    // 0x803AAD08: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_8002F444(rdram, ctx);
        goto after_0;
    // 0x803AAD08: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_0:
    // 0x803AAD0C: b           L_803AAD28
    // 0x803AAD10: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_803AAD28;
    // 0x803AAD10: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_803AAD14:
    // 0x803AAD14: lui         $a1, 0x803B
    ctx->r5 = S32(0X803B << 16);
    // 0x803AAD18: addiu       $a1, $a1, -0x3144
    ctx->r5 = ADD32(ctx->r5, -0X3144);
    // 0x803AAD1C: jal         0x8002F444
    // 0x803AAD20: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_8002F444(rdram, ctx);
        goto after_1;
    // 0x803AAD20: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_1:
    // 0x803AAD24: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_803AAD28:
    // 0x803AAD28: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x803AAD2C: jr          $ra
    // 0x803AAD30: nop

    return;
    // 0x803AAD30: nop

;}
RECOMP_FUNC void func_803AAD34(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803AAD34: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x803AAD38: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x803AAD3C: jal         0x803AAD64
    // 0x803AAD40: nop

    func_803AAD64(rdram, ctx);
        goto after_0;
    // 0x803AAD40: nop

    after_0:
    // 0x803AAD44: jal         0x803AADA0
    // 0x803AAD48: nop

    func_803AADA0(rdram, ctx);
        goto after_1;
    // 0x803AAD48: nop

    after_1:
    // 0x803AAD4C: jal         0x803AADDC
    // 0x803AAD50: nop

    func_803AADDC(rdram, ctx);
        goto after_2;
    // 0x803AAD50: nop

    after_2:
    // 0x803AAD54: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x803AAD58: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x803AAD5C: jr          $ra
    // 0x803AAD60: nop

    return;
    // 0x803AAD60: nop

;}
RECOMP_FUNC void func_803AAD64(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803AAD64: lui         $v1, 0x801B
    ctx->r3 = S32(0X801B << 16);
    // 0x803AAD68: addiu       $v1, $v1, 0x1CF0
    ctx->r3 = ADD32(ctx->r3, 0X1CF0);
    // 0x803AAD6C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x803AAD70: addiu       $a0, $zero, -0x1
    ctx->r4 = ADD32(0, -0X1);
L_803AAD74:
    // 0x803AAD74: lw          $t6, 0x0($v1)
    ctx->r14 = MEM_W(ctx->r3, 0X0);
    // 0x803AAD78: nop

    // 0x803AAD7C: addu        $t7, $t6, $v0
    ctx->r15 = ADD32(ctx->r14, ctx->r2);
    // 0x803AAD80: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x803AAD84: andi        $t8, $v0, 0xFF
    ctx->r24 = ctx->r2 & 0XFF;
    // 0x803AAD88: slti        $at, $t8, 0xB
    ctx->r1 = SIGNED(ctx->r24) < 0XB ? 1 : 0;
    // 0x803AAD8C: or          $v0, $t8, $zero
    ctx->r2 = ctx->r24 | 0;
    // 0x803AAD90: bne         $at, $zero, L_803AAD74
    if (ctx->r1 != 0) {
        // 0x803AAD94: sb          $a0, 0x44($t7)
        MEM_B(0X44, ctx->r15) = ctx->r4;
            goto L_803AAD74;
    }
    // 0x803AAD94: sb          $a0, 0x44($t7)
    MEM_B(0X44, ctx->r15) = ctx->r4;
    // 0x803AAD98: jr          $ra
    // 0x803AAD9C: nop

    return;
    // 0x803AAD9C: nop

;}
RECOMP_FUNC void func_803AADA0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803AADA0: lui         $v1, 0x801B
    ctx->r3 = S32(0X801B << 16);
    // 0x803AADA4: addiu       $v1, $v1, 0x1CF0
    ctx->r3 = ADD32(ctx->r3, 0X1CF0);
    // 0x803AADA8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x803AADAC: addiu       $a0, $zero, -0x1
    ctx->r4 = ADD32(0, -0X1);
L_803AADB0:
    // 0x803AADB0: lw          $t6, 0x0($v1)
    ctx->r14 = MEM_W(ctx->r3, 0X0);
    // 0x803AADB4: nop

    // 0x803AADB8: addu        $t7, $t6, $v0
    ctx->r15 = ADD32(ctx->r14, ctx->r2);
    // 0x803AADBC: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x803AADC0: andi        $t8, $v0, 0xFF
    ctx->r24 = ctx->r2 & 0XFF;
    // 0x803AADC4: slti        $at, $t8, 0xB
    ctx->r1 = SIGNED(ctx->r24) < 0XB ? 1 : 0;
    // 0x803AADC8: or          $v0, $t8, $zero
    ctx->r2 = ctx->r24 | 0;
    // 0x803AADCC: bne         $at, $zero, L_803AADB0
    if (ctx->r1 != 0) {
        // 0x803AADD0: sb          $a0, 0x50($t7)
        MEM_B(0X50, ctx->r15) = ctx->r4;
            goto L_803AADB0;
    }
    // 0x803AADD0: sb          $a0, 0x50($t7)
    MEM_B(0X50, ctx->r15) = ctx->r4;
    // 0x803AADD4: jr          $ra
    // 0x803AADD8: nop

    return;
    // 0x803AADD8: nop

;}
RECOMP_FUNC void func_803AADDC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803AADDC: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x803AADE0: sw          $s2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r18;
    // 0x803AADE4: lui         $s2, 0x8012
    ctx->r18 = S32(0X8012 << 16);
    // 0x803AADE8: addiu       $s2, $s2, -0x32B0
    ctx->r18 = ADD32(ctx->r18, -0X32B0);
    // 0x803AADEC: lb          $v0, 0x45($s2)
    ctx->r2 = MEM_B(ctx->r18, 0X45);
    // 0x803AADF0: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x803AADF4: slti        $at, $v0, 0x2A
    ctx->r1 = SIGNED(ctx->r2) < 0X2A ? 1 : 0;
    // 0x803AADF8: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x803AADFC: sw          $s7, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r23;
    // 0x803AAE00: sw          $s6, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r22;
    // 0x803AAE04: sw          $s5, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r21;
    // 0x803AAE08: sw          $s4, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r20;
    // 0x803AAE0C: sw          $s3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r19;
    // 0x803AAE10: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x803AAE14: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    // 0x803AAE18: bne         $at, $zero, L_803AAE24
    if (ctx->r1 != 0) {
        // 0x803AAE1C: andi        $v1, $v0, 0xFF
        ctx->r3 = ctx->r2 & 0XFF;
            goto L_803AAE24;
    }
    // 0x803AAE1C: andi        $v1, $v0, 0xFF
    ctx->r3 = ctx->r2 & 0XFF;
    // 0x803AAE20: sb          $zero, 0x45($s2)
    MEM_B(0X45, ctx->r18) = 0;
L_803AAE24:
    // 0x803AAE24: sll         $t6, $v1, 2
    ctx->r14 = S32(ctx->r3 << 2);
    // 0x803AAE28: lui         $s7, 0x803B
    ctx->r23 = S32(0X803B << 16);
    // 0x803AAE2C: addu        $s7, $s7, $t6
    ctx->r23 = ADD32(ctx->r23, ctx->r14);
    // 0x803AAE30: lui         $s3, 0x801B
    ctx->r19 = S32(0X801B << 16);
    // 0x803AAE34: lw          $s7, -0x31F8($s7)
    ctx->r23 = MEM_W(ctx->r23, -0X31F8);
    // 0x803AAE38: addiu       $s3, $s3, 0x1CF0
    ctx->r19 = ADD32(ctx->r19, 0X1CF0);
    // 0x803AAE3C: or          $s5, $zero, $zero
    ctx->r21 = 0 | 0;
    // 0x803AAE40: addiu       $s6, $zero, 0x1
    ctx->r22 = ADD32(0, 0X1);
    // 0x803AAE44: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
L_803AAE48:
    // 0x803AAE48: addu        $s4, $s5, $s7
    ctx->r20 = ADD32(ctx->r21, ctx->r23);
L_803AAE4C:
    // 0x803AAE4C: lb          $t7, 0x44($s2)
    ctx->r15 = MEM_B(ctx->r18, 0X44);
    // 0x803AAE50: lbu         $t1, 0x0($s4)
    ctx->r9 = MEM_BU(ctx->r20, 0X0);
    // 0x803AAE54: sll         $t8, $t7, 4
    ctx->r24 = S32(ctx->r15 << 4);
    // 0x803AAE58: addu        $t9, $s2, $t8
    ctx->r25 = ADD32(ctx->r18, ctx->r24);
    // 0x803AAE5C: addu        $t0, $t9, $s0
    ctx->r8 = ADD32(ctx->r25, ctx->r16);
    // 0x803AAE60: lb          $v0, 0x1E($t0)
    ctx->r2 = MEM_B(ctx->r8, 0X1E);
    // 0x803AAE64: sll         $a0, $s0, 24
    ctx->r4 = S32(ctx->r16 << 24);
    // 0x803AAE68: bne         $v0, $t1, L_803AAEAC
    if (ctx->r2 != ctx->r9) {
        // 0x803AAE6C: sra         $t2, $a0, 24
        ctx->r10 = S32(SIGNED(ctx->r4) >> 24);
            goto L_803AAEAC;
    }
    // 0x803AAE6C: sra         $t2, $a0, 24
    ctx->r10 = S32(SIGNED(ctx->r4) >> 24);
    // 0x803AAE70: jal         0x8006DED4
    // 0x803AAE74: or          $a0, $t2, $zero
    ctx->r4 = ctx->r10 | 0;
    func_8006DED4(rdram, ctx);
        goto after_0;
    // 0x803AAE74: or          $a0, $t2, $zero
    ctx->r4 = ctx->r10 | 0;
    after_0:
    // 0x803AAE78: bne         $s6, $v0, L_803AAEAC
    if (ctx->r22 != ctx->r2) {
        // 0x803AAE7C: nop
    
            goto L_803AAEAC;
    }
    // 0x803AAE7C: nop

    // 0x803AAE80: lw          $t3, 0x0($s3)
    ctx->r11 = MEM_W(ctx->r19, 0X0);
    // 0x803AAE84: nop

    // 0x803AAE88: addu        $t4, $t3, $s1
    ctx->r12 = ADD32(ctx->r11, ctx->r17);
    // 0x803AAE8C: sb          $s0, 0x50($t4)
    MEM_B(0X50, ctx->r12) = ctx->r16;
    // 0x803AAE90: lw          $t5, 0x0($s3)
    ctx->r13 = MEM_W(ctx->r19, 0X0);
    // 0x803AAE94: nop

    // 0x803AAE98: addu        $t6, $t5, $s0
    ctx->r14 = ADD32(ctx->r13, ctx->r16);
    // 0x803AAE9C: sb          $s1, 0x44($t6)
    MEM_B(0X44, ctx->r14) = ctx->r17;
    // 0x803AAEA0: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x803AAEA4: sll         $t7, $s1, 24
    ctx->r15 = S32(ctx->r17 << 24);
    // 0x803AAEA8: sra         $s1, $t7, 24
    ctx->r17 = S32(SIGNED(ctx->r15) >> 24);
L_803AAEAC:
    // 0x803AAEAC: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x803AAEB0: sll         $t9, $s0, 24
    ctx->r25 = S32(ctx->r16 << 24);
    // 0x803AAEB4: sra         $s0, $t9, 24
    ctx->r16 = S32(SIGNED(ctx->r25) >> 24);
    // 0x803AAEB8: slti        $at, $s0, 0xB
    ctx->r1 = SIGNED(ctx->r16) < 0XB ? 1 : 0;
    // 0x803AAEBC: bne         $at, $zero, L_803AAE4C
    if (ctx->r1 != 0) {
        // 0x803AAEC0: nop
    
            goto L_803AAE4C;
    }
    // 0x803AAEC0: nop

    // 0x803AAEC4: addiu       $s5, $s5, 0x1
    ctx->r21 = ADD32(ctx->r21, 0X1);
    // 0x803AAEC8: sll         $t1, $s5, 24
    ctx->r9 = S32(ctx->r21 << 24);
    // 0x803AAECC: sra         $s5, $t1, 24
    ctx->r21 = S32(SIGNED(ctx->r9) >> 24);
    // 0x803AAED0: slti        $at, $s5, 0x5
    ctx->r1 = SIGNED(ctx->r21) < 0X5 ? 1 : 0;
    // 0x803AAED4: bne         $at, $zero, L_803AAE48
    if (ctx->r1 != 0) {
        // 0x803AAED8: or          $s0, $zero, $zero
        ctx->r16 = 0 | 0;
            goto L_803AAE48;
    }
    // 0x803AAED8: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x803AAEDC: addiu       $s5, $zero, 0xA
    ctx->r21 = ADD32(0, 0XA);
    // 0x803AAEE0: addiu       $s0, $zero, -0x1
    ctx->r16 = ADD32(0, -0X1);
L_803AAEE4:
    // 0x803AAEE4: lw          $t3, 0x0($s3)
    ctx->r11 = MEM_W(ctx->r19, 0X0);
    // 0x803AAEE8: sll         $a0, $s5, 24
    ctx->r4 = S32(ctx->r21 << 24);
    // 0x803AAEEC: addu        $t4, $t3, $s5
    ctx->r12 = ADD32(ctx->r11, ctx->r21);
    // 0x803AAEF0: lb          $t5, 0x44($t4)
    ctx->r13 = MEM_B(ctx->r12, 0X44);
    // 0x803AAEF4: sra         $t6, $a0, 24
    ctx->r14 = S32(SIGNED(ctx->r4) >> 24);
    // 0x803AAEF8: bne         $s0, $t5, L_803AAF3C
    if (ctx->r16 != ctx->r13) {
        // 0x803AAEFC: nop
    
            goto L_803AAF3C;
    }
    // 0x803AAEFC: nop

    // 0x803AAF00: jal         0x8006DED4
    // 0x803AAF04: or          $a0, $t6, $zero
    ctx->r4 = ctx->r14 | 0;
    func_8006DED4(rdram, ctx);
        goto after_1;
    // 0x803AAF04: or          $a0, $t6, $zero
    ctx->r4 = ctx->r14 | 0;
    after_1:
    // 0x803AAF08: bne         $s6, $v0, L_803AAF3C
    if (ctx->r22 != ctx->r2) {
        // 0x803AAF0C: nop
    
            goto L_803AAF3C;
    }
    // 0x803AAF0C: nop

    // 0x803AAF10: lw          $t7, 0x0($s3)
    ctx->r15 = MEM_W(ctx->r19, 0X0);
    // 0x803AAF14: nop

    // 0x803AAF18: addu        $t8, $t7, $s5
    ctx->r24 = ADD32(ctx->r15, ctx->r21);
    // 0x803AAF1C: sb          $s1, 0x44($t8)
    MEM_B(0X44, ctx->r24) = ctx->r17;
    // 0x803AAF20: lw          $t9, 0x0($s3)
    ctx->r25 = MEM_W(ctx->r19, 0X0);
    // 0x803AAF24: nop

    // 0x803AAF28: addu        $t0, $t9, $s1
    ctx->r8 = ADD32(ctx->r25, ctx->r17);
    // 0x803AAF2C: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x803AAF30: sll         $t1, $s1, 24
    ctx->r9 = S32(ctx->r17 << 24);
    // 0x803AAF34: sb          $s5, 0x50($t0)
    MEM_B(0X50, ctx->r8) = ctx->r21;
    // 0x803AAF38: sra         $s1, $t1, 24
    ctx->r17 = S32(SIGNED(ctx->r9) >> 24);
L_803AAF3C:
    // 0x803AAF3C: addiu       $s5, $s5, -0x1
    ctx->r21 = ADD32(ctx->r21, -0X1);
    // 0x803AAF40: sll         $t3, $s5, 24
    ctx->r11 = S32(ctx->r21 << 24);
    // 0x803AAF44: sra         $s5, $t3, 24
    ctx->r21 = S32(SIGNED(ctx->r11) >> 24);
    // 0x803AAF48: bgez        $s5, L_803AAEE4
    if (SIGNED(ctx->r21) >= 0) {
        // 0x803AAF4C: nop
    
            goto L_803AAEE4;
    }
    // 0x803AAF4C: nop

    // 0x803AAF50: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x803AAF54: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x803AAF58: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x803AAF5C: lw          $s2, 0x1C($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X1C);
    // 0x803AAF60: lw          $s3, 0x20($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X20);
    // 0x803AAF64: lw          $s4, 0x24($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X24);
    // 0x803AAF68: lw          $s5, 0x28($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X28);
    // 0x803AAF6C: lw          $s6, 0x2C($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X2C);
    // 0x803AAF70: lw          $s7, 0x30($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X30);
    // 0x803AAF74: jr          $ra
    // 0x803AAF78: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    return;
    // 0x803AAF78: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_803AAF7C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803AAF7C: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x803AAF80: sw          $s6, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r22;
    // 0x803AAF84: sw          $s3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r19;
    // 0x803AAF88: sw          $s2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r18;
    // 0x803AAF8C: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x803AAF90: sw          $s5, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r21;
    // 0x803AAF94: sw          $s4, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r20;
    // 0x803AAF98: sw          $s1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r17;
    // 0x803AAF9C: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x803AAFA0: sw          $a1, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r5;
    // 0x803AAFA4: lui         $s2, 0x800E
    ctx->r18 = S32(0X800E << 16);
    // 0x803AAFA8: lui         $s3, 0x3
    ctx->r19 = S32(0X3 << 16);
    // 0x803AAFAC: lui         $s6, 0x8040
    ctx->r22 = S32(0X8040 << 16);
    // 0x803AAFB0: lw          $s4, 0x8($a0)
    ctx->r20 = MEM_W(ctx->r4, 0X8);
    // 0x803AAFB4: addiu       $s6, $s6, -0x4EF8
    ctx->r22 = ADD32(ctx->r22, -0X4EF8);
    // 0x803AAFB8: ori         $s3, $s3, 0x1A8
    ctx->r19 = ctx->r19 | 0X1A8;
    // 0x803AAFBC: addiu       $s2, $s2, -0x3770
    ctx->r18 = ADD32(ctx->r18, -0X3770);
    // 0x803AAFC0: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x803AAFC4: addiu       $s5, $zero, -0x1
    ctx->r21 = ADD32(0, -0X1);
    // 0x803AAFC8: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
L_803AAFCC:
    // 0x803AAFCC: addu        $t6, $s4, $s0
    ctx->r14 = ADD32(ctx->r20, ctx->r16);
    // 0x803AAFD0: lb          $t0, 0x44($t6)
    ctx->r8 = MEM_B(ctx->r14, 0X44);
    // 0x803AAFD4: sll         $t4, $v1, 5
    ctx->r12 = S32(ctx->r3 << 5);
    // 0x803AAFD8: beq         $s5, $t0, L_803AB030
    if (ctx->r21 == ctx->r8) {
        // 0x803AAFDC: addu        $t5, $s2, $t4
        ctx->r13 = ADD32(ctx->r18, ctx->r12);
            goto L_803AB030;
    }
    // 0x803AAFDC: addu        $t5, $s2, $t4
    ctx->r13 = ADD32(ctx->r18, ctx->r12);
    // 0x803AAFE0: sll         $t9, $s0, 2
    ctx->r25 = S32(ctx->r16 << 2);
    // 0x803AAFE4: addu        $v0, $s6, $t9
    ctx->r2 = ADD32(ctx->r22, ctx->r25);
    // 0x803AAFE8: lh          $a1, 0x0($v0)
    ctx->r5 = MEM_H(ctx->r2, 0X0);
    // 0x803AAFEC: sll         $t7, $v1, 5
    ctx->r15 = S32(ctx->r3 << 5);
    // 0x803AAFF0: addu        $t8, $s2, $t7
    ctx->r24 = ADD32(ctx->r18, ctx->r15);
    // 0x803AAFF4: addiu       $a1, $a1, 0x38
    ctx->r5 = ADD32(ctx->r5, 0X38);
    // 0x803AAFF8: sll         $t1, $a1, 16
    ctx->r9 = S32(ctx->r5 << 16);
    // 0x803AAFFC: addu        $s1, $t8, $s3
    ctx->r17 = ADD32(ctx->r24, ctx->r19);
    // 0x803AB000: lh          $a2, 0x2($v0)
    ctx->r6 = MEM_H(ctx->r2, 0X2);
    // 0x803AB004: addiu       $t3, $zero, 0x2
    ctx->r11 = ADD32(0, 0X2);
    // 0x803AB008: sw          $t3, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r11;
    // 0x803AB00C: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x803AB010: sra         $a1, $t1, 16
    ctx->r5 = S32(SIGNED(ctx->r9) >> 16);
    // 0x803AB014: jal         0x8002F914
    // 0x803AB018: addiu       $a3, $t0, 0x1
    ctx->r7 = ADD32(ctx->r8, 0X1);
    func_8002F914(rdram, ctx);
        goto after_0;
    // 0x803AB018: addiu       $a3, $t0, 0x1
    ctx->r7 = ADD32(ctx->r8, 0X1);
    after_0:
    // 0x803AB01C: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x803AB020: jal         0x80031B0C
    // 0x803AB024: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    func_80031B0C(rdram, ctx);
        goto after_1;
    // 0x803AB024: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    after_1:
    // 0x803AB028: b           L_803AB03C
    // 0x803AB02C: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
        goto L_803AB03C;
    // 0x803AB02C: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
L_803AB030:
    // 0x803AB030: jal         0x8002F310
    // 0x803AB034: addu        $a0, $t5, $s3
    ctx->r4 = ADD32(ctx->r13, ctx->r19);
    func_8002F310(rdram, ctx);
        goto after_2;
    // 0x803AB034: addu        $a0, $t5, $s3
    ctx->r4 = ADD32(ctx->r13, ctx->r19);
    after_2:
    // 0x803AB038: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
L_803AB03C:
    // 0x803AB03C: andi        $v1, $s0, 0xFF
    ctx->r3 = ctx->r16 & 0XFF;
    // 0x803AB040: slti        $at, $v1, 0xB
    ctx->r1 = SIGNED(ctx->r3) < 0XB ? 1 : 0;
    // 0x803AB044: bne         $at, $zero, L_803AAFCC
    if (ctx->r1 != 0) {
        // 0x803AB048: or          $s0, $v1, $zero
        ctx->r16 = ctx->r3 | 0;
            goto L_803AAFCC;
    }
    // 0x803AB048: or          $s0, $v1, $zero
    ctx->r16 = ctx->r3 | 0;
    // 0x803AB04C: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    // 0x803AB050: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x803AB054: lw          $s1, 0x24($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X24);
    // 0x803AB058: lw          $s2, 0x28($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X28);
    // 0x803AB05C: lw          $s3, 0x2C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X2C);
    // 0x803AB060: lw          $s4, 0x30($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X30);
    // 0x803AB064: lw          $s5, 0x34($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X34);
    // 0x803AB068: lw          $s6, 0x38($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X38);
    // 0x803AB06C: jr          $ra
    // 0x803AB070: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    return;
    // 0x803AB070: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
RECOMP_FUNC void func_803AB074(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803AB074: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x803AB078: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x803AB07C: lui         $a0, 0x803B
    ctx->r4 = S32(0X803B << 16);
    // 0x803AB080: addiu       $a0, $a0, -0x4F50
    ctx->r4 = ADD32(ctx->r4, -0X4F50);
    // 0x803AB084: jal         0x800293DC
    // 0x803AB088: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    func_800293DC(rdram, ctx);
        goto after_0;
    // 0x803AB088: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    after_0:
    // 0x803AB08C: lw          $a0, 0x14($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X14);
    // 0x803AB090: addiu       $a1, $zero, 0xB8
    ctx->r5 = ADD32(0, 0XB8);
    // 0x803AB094: addiu       $a2, $zero, 0x78
    ctx->r6 = ADD32(0, 0X78);
    // 0x803AB098: jal         0x8006E170
    // 0x803AB09C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    func_8006E170(rdram, ctx);
        goto after_1;
    // 0x803AB09C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_1:
    // 0x803AB0A0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x803AB0A4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x803AB0A8: jr          $ra
    // 0x803AB0AC: nop

    return;
    // 0x803AB0AC: nop

;}
RECOMP_FUNC void func_803AB0B0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803AB0B0: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x803AB0B4: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x803AB0B8: sw          $a1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r5;
    // 0x803AB0BC: lw          $t6, 0x8($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X8);
    // 0x803AB0C0: addiu       $a0, $zero, 0x23
    ctx->r4 = ADD32(0, 0X23);
    // 0x803AB0C4: addiu       $a1, $zero, 0x2D
    ctx->r5 = ADD32(0, 0X2D);
    // 0x803AB0C8: jal         0x8002F224
    // 0x803AB0CC: sw          $t6, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r14;
    func_8002F224(rdram, ctx);
        goto after_0;
    // 0x803AB0CC: sw          $t6, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r14;
    after_0:
    // 0x803AB0D0: lui         $a0, 0x8005
    ctx->r4 = S32(0X8005 << 16);
    // 0x803AB0D4: jal         0x8002A468
    // 0x803AB0D8: addiu       $a0, $a0, -0x3230
    ctx->r4 = ADD32(ctx->r4, -0X3230);
    func_8002A468(rdram, ctx);
        goto after_1;
    // 0x803AB0D8: addiu       $a0, $a0, -0x3230
    ctx->r4 = ADD32(ctx->r4, -0X3230);
    after_1:
    // 0x803AB0DC: lw          $v1, 0x2C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X2C);
    // 0x803AB0E0: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x803AB0E4: lb          $v0, 0x38($v1)
    ctx->r2 = MEM_B(ctx->r3, 0X38);
    // 0x803AB0E8: nop

    // 0x803AB0EC: beq         $v0, $zero, L_803AB130
    if (ctx->r2 == 0) {
        // 0x803AB0F0: lw          $ra, 0x24($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X24);
            goto L_803AB130;
    }
    // 0x803AB0F0: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x803AB0F4: beq         $v0, $at, L_803AB12C
    if (ctx->r2 == ctx->r1) {
        // 0x803AB0F8: addiu       $at, $zero, 0x2
        ctx->r1 = ADD32(0, 0X2);
            goto L_803AB12C;
    }
    // 0x803AB0F8: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x803AB0FC: bne         $v0, $at, L_803AB12C
    if (ctx->r2 != ctx->r1) {
        // 0x803AB100: lui         $a0, 0x8012
        ctx->r4 = S32(0X8012 << 16);
            goto L_803AB12C;
    }
    // 0x803AB100: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x803AB104: lb          $a1, 0x3F($v1)
    ctx->r5 = MEM_B(ctx->r3, 0X3F);
    // 0x803AB108: lbu         $a0, -0x326C($a0)
    ctx->r4 = MEM_BU(ctx->r4, -0X326C);
    // 0x803AB10C: lw          $a2, 0x34($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X34);
    // 0x803AB110: addiu       $t7, $zero, 0xB8
    ctx->r15 = ADD32(0, 0XB8);
    // 0x803AB114: addiu       $t8, $zero, 0x78
    ctx->r24 = ADD32(0, 0X78);
    // 0x803AB118: sw          $t8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r24;
    // 0x803AB11C: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x803AB120: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x803AB124: jal         0x8006E244
    // 0x803AB128: addiu       $a3, $zero, 0x23
    ctx->r7 = ADD32(0, 0X23);
    func_8006E244(rdram, ctx);
        goto after_2;
    // 0x803AB128: addiu       $a3, $zero, 0x23
    ctx->r7 = ADD32(0, 0X23);
    after_2:
L_803AB12C:
    // 0x803AB12C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_803AB130:
    // 0x803AB130: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x803AB134: jr          $ra
    // 0x803AB138: nop

    return;
    // 0x803AB138: nop

;}
RECOMP_FUNC void func_803AB13C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803AB13C: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x803AB140: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x803AB144: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x803AB148: lw          $t6, 0x8($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X8);
    // 0x803AB14C: lbu         $a2, 0x71($a0)
    ctx->r6 = MEM_BU(ctx->r4, 0X71);
    // 0x803AB150: lw          $v0, 0x8($t6)
    ctx->r2 = MEM_W(ctx->r14, 0X8);
    // 0x803AB154: or          $s0, $a1, $zero
    ctx->r16 = ctx->r5 | 0;
    // 0x803AB158: lb          $t7, 0x3E($v0)
    ctx->r15 = MEM_B(ctx->r2, 0X3E);
    // 0x803AB15C: nop

    // 0x803AB160: beq         $t7, $zero, L_803AB1B8
    if (ctx->r15 == 0) {
        // 0x803AB164: nop
    
            goto L_803AB1B8;
    }
    // 0x803AB164: nop

    // 0x803AB168: lb          $v1, 0x3D($v0)
    ctx->r3 = MEM_B(ctx->r2, 0X3D);
    // 0x803AB16C: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x803AB170: beq         $v1, $zero, L_803AB1AC
    if (ctx->r3 == 0) {
        // 0x803AB174: lui         $a0, 0x8012
        ctx->r4 = S32(0X8012 << 16);
            goto L_803AB1AC;
    }
    // 0x803AB174: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x803AB178: bne         $v1, $at, L_803AB1B8
    if (ctx->r3 != ctx->r1) {
        // 0x803AB17C: or          $a0, $a1, $zero
        ctx->r4 = ctx->r5 | 0;
            goto L_803AB1B8;
    }
    // 0x803AB17C: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    // 0x803AB180: lui         $a1, 0x800B
    ctx->r5 = S32(0X800B << 16);
    // 0x803AB184: addiu       $a1, $a1, -0x1060
    ctx->r5 = ADD32(ctx->r5, -0X1060);
    // 0x803AB188: jal         0x8002B9DC
    // 0x803AB18C: sb          $a2, 0x27($sp)
    MEM_B(0X27, ctx->r29) = ctx->r6;
    func_8002B9DC(rdram, ctx);
        goto after_0;
    // 0x803AB18C: sb          $a2, 0x27($sp)
    MEM_B(0X27, ctx->r29) = ctx->r6;
    after_0:
    // 0x803AB190: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x803AB194: lbu         $a2, 0x27($sp)
    ctx->r6 = MEM_BU(ctx->r29, 0X27);
    // 0x803AB198: lbu         $a0, -0x326C($a0)
    ctx->r4 = MEM_BU(ctx->r4, -0X326C);
    // 0x803AB19C: jal         0x8006DAD8
    // 0x803AB1A0: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    func_8006DAD8(rdram, ctx);
        goto after_1;
    // 0x803AB1A0: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_1:
    // 0x803AB1A4: b           L_803AB1BC
    // 0x803AB1A8: lw          $a1, 0x38($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X38);
        goto L_803AB1BC;
    // 0x803AB1A8: lw          $a1, 0x38($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X38);
L_803AB1AC:
    // 0x803AB1AC: lbu         $a0, -0x326C($a0)
    ctx->r4 = MEM_BU(ctx->r4, -0X326C);
    // 0x803AB1B0: jal         0x8006DB98
    // 0x803AB1B4: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    func_8006DB98(rdram, ctx);
        goto after_2;
    // 0x803AB1B4: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_2:
L_803AB1B8:
    // 0x803AB1B8: lw          $a1, 0x38($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X38);
L_803AB1BC:
    // 0x803AB1BC: jal         0x8002BEC4
    // 0x803AB1C0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8002BEC4(rdram, ctx);
        goto after_3;
    // 0x803AB1C0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_3:
    // 0x803AB1C4: lw          $a1, 0x38($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X38);
    // 0x803AB1C8: jal         0x8002BFF4
    // 0x803AB1CC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8002BFF4(rdram, ctx);
        goto after_4;
    // 0x803AB1CC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_4:
    // 0x803AB1D0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x803AB1D4: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x803AB1D8: jr          $ra
    // 0x803AB1DC: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x803AB1DC: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_803AB1E0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803AB1E0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x803AB1E4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x803AB1E8: lw          $t6, 0x8($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X8);
    // 0x803AB1EC: or          $a3, $a1, $zero
    ctx->r7 = ctx->r5 | 0;
    // 0x803AB1F0: lw          $v0, 0x8($t6)
    ctx->r2 = MEM_W(ctx->r14, 0X8);
    // 0x803AB1F4: addiu       $t8, $zero, 0xA
    ctx->r24 = ADD32(0, 0XA);
    // 0x803AB1F8: lb          $t7, 0x38($v0)
    ctx->r15 = MEM_B(ctx->r2, 0X38);
    // 0x803AB1FC: nop

    // 0x803AB200: bne         $t7, $zero, L_803AB224
    if (ctx->r15 != 0) {
        // 0x803AB204: nop
    
            goto L_803AB224;
    }
    // 0x803AB204: nop

    // 0x803AB208: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x803AB20C: jal         0x8006F678
    // 0x803AB210: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    func_8006F678(rdram, ctx);
        goto after_0;
    // 0x803AB210: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    after_0:
    // 0x803AB214: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x803AB218: lw          $a3, 0x1C($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X1C);
    // 0x803AB21C: b           L_803AB230
    // 0x803AB220: lhu         $v0, 0x3A($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X3A);
        goto L_803AB230;
    // 0x803AB220: lhu         $v0, 0x3A($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X3A);
L_803AB224:
    // 0x803AB224: sh          $t8, 0x38($a0)
    MEM_H(0X38, ctx->r4) = ctx->r24;
    // 0x803AB228: sh          $zero, 0x3A($a0)
    MEM_H(0X3A, ctx->r4) = 0;
    // 0x803AB22C: lhu         $v0, 0x3A($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X3A);
L_803AB230:
    // 0x803AB230: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
    // 0x803AB234: beq         $v0, $zero, L_803AB25C
    if (ctx->r2 == 0) {
        // 0x803AB238: addiu       $a1, $zero, 0x1
        ctx->r5 = ADD32(0, 0X1);
            goto L_803AB25C;
    }
    // 0x803AB238: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x803AB23C: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x803AB240: bne         $v0, $at, L_803AB264
    if (ctx->r2 != ctx->r1) {
        // 0x803AB244: or          $a0, $a3, $zero
        ctx->r4 = ctx->r7 | 0;
            goto L_803AB264;
    }
    // 0x803AB244: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
    // 0x803AB248: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x803AB24C: jal         0x8002135C
    // 0x803AB250: addiu       $a2, $zero, 0xDB
    ctx->r6 = ADD32(0, 0XDB);
    func_8002135C(rdram, ctx);
        goto after_1;
    // 0x803AB250: addiu       $a2, $zero, 0xDB
    ctx->r6 = ADD32(0, 0XDB);
    after_1:
    // 0x803AB254: b           L_803AB268
    // 0x803AB258: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_803AB268;
    // 0x803AB258: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_803AB25C:
    // 0x803AB25C: jal         0x8002135C
    // 0x803AB260: addiu       $a2, $zero, 0xDA
    ctx->r6 = ADD32(0, 0XDA);
    func_8002135C(rdram, ctx);
        goto after_2;
    // 0x803AB260: addiu       $a2, $zero, 0xDA
    ctx->r6 = ADD32(0, 0XDA);
    after_2:
L_803AB264:
    // 0x803AB264: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_803AB268:
    // 0x803AB268: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x803AB26C: jr          $ra
    // 0x803AB270: nop

    return;
    // 0x803AB270: nop

;}
RECOMP_FUNC void func_803AB274(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803AB274: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x803AB278: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x803AB27C: lw          $t6, 0x8($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X8);
    // 0x803AB280: or          $a3, $a1, $zero
    ctx->r7 = ctx->r5 | 0;
    // 0x803AB284: lw          $v1, 0x8($t6)
    ctx->r3 = MEM_W(ctx->r14, 0X8);
    // 0x803AB288: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x803AB28C: lb          $v0, 0x38($v1)
    ctx->r2 = MEM_B(ctx->r3, 0X38);
    // 0x803AB290: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x803AB294: beq         $v0, $zero, L_803AB2B8
    if (ctx->r2 == 0) {
        // 0x803AB298: nop
    
            goto L_803AB2B8;
    }
    // 0x803AB298: nop

    // 0x803AB29C: beq         $v0, $at, L_803AB2C8
    if (ctx->r2 == ctx->r1) {
        // 0x803AB2A0: addiu       $t8, $zero, 0x1
        ctx->r24 = ADD32(0, 0X1);
            goto L_803AB2C8;
    }
    // 0x803AB2A0: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x803AB2A4: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x803AB2A8: beq         $v0, $at, L_803AB2E8
    if (ctx->r2 == ctx->r1) {
        // 0x803AB2AC: addiu       $t9, $zero, 0xA
        ctx->r25 = ADD32(0, 0XA);
            goto L_803AB2E8;
    }
    // 0x803AB2AC: addiu       $t9, $zero, 0xA
    ctx->r25 = ADD32(0, 0XA);
    // 0x803AB2B0: b           L_803AB2F8
    // 0x803AB2B4: lhu         $v0, 0x3A($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X3A);
        goto L_803AB2F8;
    // 0x803AB2B4: lhu         $v0, 0x3A($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X3A);
L_803AB2B8:
    // 0x803AB2B8: sb          $t7, 0x4($a3)
    MEM_B(0X4, ctx->r7) = ctx->r15;
    // 0x803AB2BC: sh          $zero, 0x38($a0)
    MEM_H(0X38, ctx->r4) = 0;
    // 0x803AB2C0: b           L_803AB2F4
    // 0x803AB2C4: sh          $zero, 0x3A($a0)
    MEM_H(0X3A, ctx->r4) = 0;
        goto L_803AB2F4;
    // 0x803AB2C4: sh          $zero, 0x3A($a0)
    MEM_H(0X3A, ctx->r4) = 0;
L_803AB2C8:
    // 0x803AB2C8: sb          $t8, 0x4($a3)
    MEM_B(0X4, ctx->r7) = ctx->r24;
    // 0x803AB2CC: sw          $a3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r7;
    // 0x803AB2D0: jal         0x8006F678
    // 0x803AB2D4: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_8006F678(rdram, ctx);
        goto after_0;
    // 0x803AB2D4: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x803AB2D8: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x803AB2DC: lw          $a3, 0x1C($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X1C);
    // 0x803AB2E0: b           L_803AB2F8
    // 0x803AB2E4: lhu         $v0, 0x3A($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X3A);
        goto L_803AB2F8;
    // 0x803AB2E4: lhu         $v0, 0x3A($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X3A);
L_803AB2E8:
    // 0x803AB2E8: sb          $zero, 0x4($a3)
    MEM_B(0X4, ctx->r7) = 0;
    // 0x803AB2EC: sh          $t9, 0x38($a0)
    MEM_H(0X38, ctx->r4) = ctx->r25;
    // 0x803AB2F0: sh          $zero, 0x3A($a0)
    MEM_H(0X3A, ctx->r4) = 0;
L_803AB2F4:
    // 0x803AB2F4: lhu         $v0, 0x3A($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X3A);
L_803AB2F8:
    // 0x803AB2F8: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
    // 0x803AB2FC: beq         $v0, $zero, L_803AB324
    if (ctx->r2 == 0) {
        // 0x803AB300: addiu       $a1, $zero, 0x1
        ctx->r5 = ADD32(0, 0X1);
            goto L_803AB324;
    }
    // 0x803AB300: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x803AB304: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x803AB308: bne         $v0, $at, L_803AB32C
    if (ctx->r2 != ctx->r1) {
        // 0x803AB30C: or          $a0, $a3, $zero
        ctx->r4 = ctx->r7 | 0;
            goto L_803AB32C;
    }
    // 0x803AB30C: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
    // 0x803AB310: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x803AB314: jal         0x8002135C
    // 0x803AB318: addiu       $a2, $zero, 0xDB
    ctx->r6 = ADD32(0, 0XDB);
    func_8002135C(rdram, ctx);
        goto after_1;
    // 0x803AB318: addiu       $a2, $zero, 0xDB
    ctx->r6 = ADD32(0, 0XDB);
    after_1:
    // 0x803AB31C: b           L_803AB330
    // 0x803AB320: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_803AB330;
    // 0x803AB320: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_803AB324:
    // 0x803AB324: jal         0x8002135C
    // 0x803AB328: addiu       $a2, $zero, 0xDA
    ctx->r6 = ADD32(0, 0XDA);
    func_8002135C(rdram, ctx);
        goto after_2;
    // 0x803AB328: addiu       $a2, $zero, 0xDA
    ctx->r6 = ADD32(0, 0XDA);
    after_2:
L_803AB32C:
    // 0x803AB32C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_803AB330:
    // 0x803AB330: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x803AB334: jr          $ra
    // 0x803AB338: nop

    return;
    // 0x803AB338: nop

;}
RECOMP_FUNC void func_803AB33C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803AB33C: lw          $t6, 0x8($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X8);
    // 0x803AB340: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x803AB344: lw          $v0, 0x8($t6)
    ctx->r2 = MEM_W(ctx->r14, 0X8);
    // 0x803AB348: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x803AB34C: lb          $t7, 0x38($v0)
    ctx->r15 = MEM_B(ctx->r2, 0X38);
    // 0x803AB350: nop

    // 0x803AB354: bne         $t7, $at, L_803AB364
    if (ctx->r15 != ctx->r1) {
        // 0x803AB358: nop
    
            goto L_803AB364;
    }
    // 0x803AB358: nop

    // 0x803AB35C: jr          $ra
    // 0x803AB360: sb          $t8, 0x4($a1)
    MEM_B(0X4, ctx->r5) = ctx->r24;
    return;
    // 0x803AB360: sb          $t8, 0x4($a1)
    MEM_B(0X4, ctx->r5) = ctx->r24;
L_803AB364:
    // 0x803AB364: sb          $zero, 0x4($a1)
    MEM_B(0X4, ctx->r5) = 0;
    // 0x803AB368: jr          $ra
    // 0x803AB36C: nop

    return;
    // 0x803AB36C: nop

;}
RECOMP_FUNC void func_803AB370(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803AB370: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x803AB374: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x803AB378: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x803AB37C: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x803AB380: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    // 0x803AB384: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x803AB388: jal         0x80021214
    // 0x803AB38C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_80021214(rdram, ctx);
        goto after_0;
    // 0x803AB38C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_0:
    // 0x803AB390: lui         $t6, 0x800B
    ctx->r14 = S32(0X800B << 16);
    // 0x803AB394: addiu       $t6, $t6, -0x6CE4
    ctx->r14 = ADD32(ctx->r14, -0X6CE4);
    // 0x803AB398: lw          $at, 0x0($t6)
    ctx->r1 = MEM_W(ctx->r14, 0X0);
    // 0x803AB39C: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x803AB3A0: sw          $at, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r1;
    // 0x803AB3A4: lw          $a2, 0x4($t6)
    ctx->r6 = MEM_W(ctx->r14, 0X4);
    // 0x803AB3A8: lw          $a1, 0x4($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X4);
    // 0x803AB3AC: sw          $a2, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r6;
    // 0x803AB3B0: lw          $a3, 0x8($t6)
    ctx->r7 = MEM_W(ctx->r14, 0X8);
    // 0x803AB3B4: jal         0x8004B078
    // 0x803AB3B8: sw          $a3, 0xC($sp)
    MEM_W(0XC, ctx->r29) = ctx->r7;
    func_8004B078(rdram, ctx);
        goto after_1;
    // 0x803AB3B8: sw          $a3, 0xC($sp)
    MEM_W(0XC, ctx->r29) = ctx->r7;
    after_1:
    // 0x803AB3BC: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    // 0x803AB3C0: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x803AB3C4: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    // 0x803AB3C8: jal         0x8002B608
    // 0x803AB3CC: addiu       $a3, $zero, 0xFF
    ctx->r7 = ADD32(0, 0XFF);
    func_8002B608(rdram, ctx);
        goto after_2;
    // 0x803AB3CC: addiu       $a3, $zero, 0xFF
    ctx->r7 = ADD32(0, 0XFF);
    after_2:
    // 0x803AB3D0: lui         $a0, 0x803B
    ctx->r4 = S32(0X803B << 16);
    // 0x803AB3D4: jal         0x800296E0
    // 0x803AB3D8: addiu       $a0, $a0, -0x4C14
    ctx->r4 = ADD32(ctx->r4, -0X4C14);
    func_800296E0(rdram, ctx);
        goto after_3;
    // 0x803AB3D8: addiu       $a0, $a0, -0x4C14
    ctx->r4 = ADD32(ctx->r4, -0X4C14);
    after_3:
    // 0x803AB3DC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x803AB3E0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x803AB3E4: jr          $ra
    // 0x803AB3E8: nop

    return;
    // 0x803AB3E8: nop

;}
RECOMP_FUNC void func_803AB3EC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803AB3EC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x803AB3F0: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x803AB3F4: or          $a2, $a1, $zero
    ctx->r6 = ctx->r5 | 0;
    // 0x803AB3F8: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    // 0x803AB3FC: lui         $a1, 0x801B
    ctx->r5 = S32(0X801B << 16);
    // 0x803AB400: lh          $a1, -0x6B0($a1)
    ctx->r5 = MEM_H(ctx->r5, -0X6B0);
    // 0x803AB404: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x803AB408: addiu       $a1, $a1, 0x2
    ctx->r5 = ADD32(ctx->r5, 0X2);
    // 0x803AB40C: andi        $t6, $a1, 0xFFFF
    ctx->r14 = ctx->r5 & 0XFFFF;
    // 0x803AB410: or          $a1, $t6, $zero
    ctx->r5 = ctx->r14 | 0;
    // 0x803AB414: jal         0x8002BB50
    // 0x803AB418: sw          $a2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r6;
    func_8002BB50(rdram, ctx);
        goto after_0;
    // 0x803AB418: sw          $a2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r6;
    after_0:
    // 0x803AB41C: lui         $v0, 0x801B
    ctx->r2 = S32(0X801B << 16);
    // 0x803AB420: addiu       $v0, $v0, -0x750
    ctx->r2 = ADD32(ctx->r2, -0X750);
    // 0x803AB424: lh          $t7, 0x9E($v0)
    ctx->r15 = MEM_H(ctx->r2, 0X9E);
    // 0x803AB428: lw          $a2, 0x1C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X1C);
    // 0x803AB42C: addiu       $at, $zero, 0x7
    ctx->r1 = ADD32(0, 0X7);
    // 0x803AB430: bne         $t7, $at, L_803AB440
    if (ctx->r15 != ctx->r1) {
        // 0x803AB434: addiu       $t8, $zero, 0x1
        ctx->r24 = ADD32(0, 0X1);
            goto L_803AB440;
    }
    // 0x803AB434: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x803AB438: b           L_803AB444
    // 0x803AB43C: sb          $zero, 0x4($a2)
    MEM_B(0X4, ctx->r6) = 0;
        goto L_803AB444;
    // 0x803AB43C: sb          $zero, 0x4($a2)
    MEM_B(0X4, ctx->r6) = 0;
L_803AB440:
    // 0x803AB440: sb          $t8, 0x4($a2)
    MEM_B(0X4, ctx->r6) = ctx->r24;
L_803AB444:
    // 0x803AB444: lh          $t9, 0x9E($v0)
    ctx->r25 = MEM_H(ctx->r2, 0X9E);
    // 0x803AB448: addiu       $t0, $zero, 0xB
    ctx->r8 = ADD32(0, 0XB);
    // 0x803AB44C: bne         $t9, $zero, L_803AB45C
    if (ctx->r25 != 0) {
        // 0x803AB450: addiu       $t1, $zero, 0x414
        ctx->r9 = ADD32(0, 0X414);
            goto L_803AB45C;
    }
    // 0x803AB450: addiu       $t1, $zero, 0x414
    ctx->r9 = ADD32(0, 0X414);
    // 0x803AB454: b           L_803AB460
    // 0x803AB458: sb          $t0, 0x5($a2)
    MEM_B(0X5, ctx->r6) = ctx->r8;
        goto L_803AB460;
    // 0x803AB458: sb          $t0, 0x5($a2)
    MEM_B(0X5, ctx->r6) = ctx->r8;
L_803AB45C:
    // 0x803AB45C: sh          $t1, 0x12($a2)
    MEM_H(0X12, ctx->r6) = ctx->r9;
L_803AB460:
    // 0x803AB460: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x803AB464: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x803AB468: jr          $ra
    // 0x803AB46C: nop

    return;
    // 0x803AB46C: nop

;}
RECOMP_FUNC void func_803AB470(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803AB470: lui         $v0, 0x801B
    ctx->r2 = S32(0X801B << 16);
    // 0x803AB474: addiu       $v0, $v0, -0x750
    ctx->r2 = ADD32(ctx->r2, -0X750);
    // 0x803AB478: lh          $t6, 0x9E($v0)
    ctx->r14 = MEM_H(ctx->r2, 0X9E);
    // 0x803AB47C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x803AB480: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x803AB484: addiu       $at, $zero, 0xC
    ctx->r1 = ADD32(0, 0XC);
    // 0x803AB488: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    // 0x803AB48C: bne         $t6, $at, L_803AB4B4
    if (ctx->r14 != ctx->r1) {
        // 0x803AB490: sw          $ra, 0x14($sp)
        MEM_W(0X14, ctx->r29) = ctx->r31;
            goto L_803AB4B4;
    }
    // 0x803AB490: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x803AB494: lh          $a1, 0xC4($v0)
    ctx->r5 = MEM_H(ctx->r2, 0XC4);
    // 0x803AB498: nop

    // 0x803AB49C: addiu       $a1, $a1, 0x4
    ctx->r5 = ADD32(ctx->r5, 0X4);
    // 0x803AB4A0: andi        $t7, $a1, 0xFFFF
    ctx->r15 = ctx->r5 & 0XFFFF;
    // 0x803AB4A4: jal         0x8002BB50
    // 0x803AB4A8: or          $a1, $t7, $zero
    ctx->r5 = ctx->r15 | 0;
    func_8002BB50(rdram, ctx);
        goto after_0;
    // 0x803AB4A8: or          $a1, $t7, $zero
    ctx->r5 = ctx->r15 | 0;
    after_0:
    // 0x803AB4AC: b           L_803AB4C0
    // 0x803AB4B0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_803AB4C0;
    // 0x803AB4B0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_803AB4B4:
    // 0x803AB4B4: jal         0x8002BB50
    // 0x803AB4B8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8002BB50(rdram, ctx);
        goto after_1;
    // 0x803AB4B8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_1:
    // 0x803AB4BC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_803AB4C0:
    // 0x803AB4C0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x803AB4C4: jr          $ra
    // 0x803AB4C8: nop

    return;
    // 0x803AB4C8: nop

;}
RECOMP_FUNC void func_803AB4CC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803AB4CC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x803AB4D0: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x803AB4D4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x803AB4D8: lui         $a0, 0x803B
    ctx->r4 = S32(0X803B << 16);
    // 0x803AB4DC: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x803AB4E0: jal         0x800296E0
    // 0x803AB4E4: addiu       $a0, $a0, -0x4B08
    ctx->r4 = ADD32(ctx->r4, -0X4B08);
    func_800296E0(rdram, ctx);
        goto after_0;
    // 0x803AB4E4: addiu       $a0, $a0, -0x4B08
    ctx->r4 = ADD32(ctx->r4, -0X4B08);
    after_0:
    // 0x803AB4E8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x803AB4EC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x803AB4F0: jr          $ra
    // 0x803AB4F4: nop

    return;
    // 0x803AB4F4: nop

;}
RECOMP_FUNC void func_803AB4F8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803AB4F8: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x803AB4FC: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x803AB500: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x803AB504: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x803AB508: jal         0x80036858
    // 0x803AB50C: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    func_80036858(rdram, ctx);
        goto after_0;
    // 0x803AB50C: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    after_0:
    // 0x803AB510: lui         $a0, 0x803B
    ctx->r4 = S32(0X803B << 16);
    // 0x803AB514: jal         0x80035FF0
    // 0x803AB518: addiu       $a0, $a0, -0x2F40
    ctx->r4 = ADD32(ctx->r4, -0X2F40);
    func_80035FF0(rdram, ctx);
        goto after_1;
    // 0x803AB518: addiu       $a0, $a0, -0x2F40
    ctx->r4 = ADD32(ctx->r4, -0X2F40);
    after_1:
    // 0x803AB51C: addiu       $a0, $zero, 0xF00
    ctx->r4 = ADD32(0, 0XF00);
    // 0x803AB520: addiu       $a1, $zero, 0xF
    ctx->r5 = ADD32(0, 0XF);
    // 0x803AB524: jal         0x80049E40
    // 0x803AB528: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_80049E40(rdram, ctx);
        goto after_2;
    // 0x803AB528: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_2:
    // 0x803AB52C: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x803AB530: sh          $t6, 0x3C($s0)
    MEM_H(0X3C, ctx->r16) = ctx->r14;
    // 0x803AB534: jal         0x80034940
    // 0x803AB538: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    func_80034940(rdram, ctx);
        goto after_3;
    // 0x803AB538: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_3:
    // 0x803AB53C: beq         $v0, $zero, L_803AB56C
    if (ctx->r2 == 0) {
        // 0x803AB540: sw          $v0, 0x24($sp)
        MEM_W(0X24, ctx->r29) = ctx->r2;
            goto L_803AB56C;
    }
    // 0x803AB540: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
    // 0x803AB544: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x803AB548: beq         $v0, $at, L_803AB588
    if (ctx->r2 == ctx->r1) {
        // 0x803AB54C: or          $a0, $zero, $zero
        ctx->r4 = 0 | 0;
            goto L_803AB588;
    }
    // 0x803AB54C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x803AB550: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x803AB554: beq         $v0, $at, L_803AB57C
    if (ctx->r2 == ctx->r1) {
        // 0x803AB558: addiu       $at, $zero, 0x3
        ctx->r1 = ADD32(0, 0X3);
            goto L_803AB57C;
    }
    // 0x803AB558: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x803AB55C: beq         $v0, $at, L_803AB584
    if (ctx->r2 == ctx->r1) {
        // 0x803AB560: nop
    
            goto L_803AB584;
    }
    // 0x803AB560: nop

    // 0x803AB564: b           L_803AB588
    // 0x803AB568: sh          $zero, 0x3C($s0)
    MEM_H(0X3C, ctx->r16) = 0;
        goto L_803AB588;
    // 0x803AB568: sh          $zero, 0x3C($s0)
    MEM_H(0X3C, ctx->r16) = 0;
L_803AB56C:
    // 0x803AB56C: jal         0x800354D0
    // 0x803AB570: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    func_800354D0(rdram, ctx);
        goto after_4;
    // 0x803AB570: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_4:
    // 0x803AB574: b           L_803AB5D4
    // 0x803AB578: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_803AB5D4;
    // 0x803AB578: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_803AB57C:
    // 0x803AB57C: b           L_803AB588
    // 0x803AB580: sh          $zero, 0x3C($s0)
    MEM_H(0X3C, ctx->r16) = 0;
        goto L_803AB588;
    // 0x803AB580: sh          $zero, 0x3C($s0)
    MEM_H(0X3C, ctx->r16) = 0;
L_803AB584:
    // 0x803AB584: sh          $zero, 0x3C($s0)
    MEM_H(0X3C, ctx->r16) = 0;
L_803AB588:
    // 0x803AB588: lh          $t7, 0x3C($s0)
    ctx->r15 = MEM_H(ctx->r16, 0X3C);
    // 0x803AB58C: nop

    // 0x803AB590: beq         $t7, $zero, L_803AB5B4
    if (ctx->r15 == 0) {
        // 0x803AB594: nop
    
            goto L_803AB5B4;
    }
    // 0x803AB594: nop

    // 0x803AB598: jal         0x80022094
    // 0x803AB59C: addiu       $a1, $sp, 0x24
    ctx->r5 = ADD32(ctx->r29, 0X24);
    func_80022094(rdram, ctx);
        goto after_5;
    // 0x803AB59C: addiu       $a1, $sp, 0x24
    ctx->r5 = ADD32(ctx->r29, 0X24);
    after_5:
    // 0x803AB5A0: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x803AB5A4: nop

    // 0x803AB5A8: sra         $t9, $t8, 8
    ctx->r25 = S32(SIGNED(ctx->r24) >> 8);
    // 0x803AB5AC: b           L_803AB5B8
    // 0x803AB5B0: sh          $t9, 0x3A($s0)
    MEM_H(0X3A, ctx->r16) = ctx->r25;
        goto L_803AB5B8;
    // 0x803AB5B0: sh          $t9, 0x3A($s0)
    MEM_H(0X3A, ctx->r16) = ctx->r25;
L_803AB5B4:
    // 0x803AB5B4: sh          $zero, 0x3A($s0)
    MEM_H(0X3A, ctx->r16) = 0;
L_803AB5B8:
    // 0x803AB5B8: lui         $a0, 0x803B
    ctx->r4 = S32(0X803B << 16);
    // 0x803AB5BC: jal         0x8002AAC0
    // 0x803AB5C0: addiu       $a0, $a0, -0x2EF4
    ctx->r4 = ADD32(ctx->r4, -0X2EF4);
    func_8002AAC0(rdram, ctx);
        goto after_6;
    // 0x803AB5C0: addiu       $a0, $a0, -0x2EF4
    ctx->r4 = ADD32(ctx->r4, -0X2EF4);
    after_6:
    // 0x803AB5C4: lui         $a0, 0x803B
    ctx->r4 = S32(0X803B << 16);
    // 0x803AB5C8: jal         0x800296E0
    // 0x803AB5CC: addiu       $a0, $a0, -0x4A20
    ctx->r4 = ADD32(ctx->r4, -0X4A20);
    func_800296E0(rdram, ctx);
        goto after_7;
    // 0x803AB5CC: addiu       $a0, $a0, -0x4A20
    ctx->r4 = ADD32(ctx->r4, -0X4A20);
    after_7:
    // 0x803AB5D0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_803AB5D4:
    // 0x803AB5D4: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x803AB5D8: jr          $ra
    // 0x803AB5DC: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x803AB5DC: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_803AB5E0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803AB5E0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x803AB5E4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x803AB5E8: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x803AB5EC: jal         0x8006FF08
    // 0x803AB5F0: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    func_8006FF08(rdram, ctx);
        goto after_0;
    // 0x803AB5F0: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    after_0:
    // 0x803AB5F4: lui         $a0, 0x803B
    ctx->r4 = S32(0X803B << 16);
    // 0x803AB5F8: addiu       $a0, $a0, -0x45FC
    ctx->r4 = ADD32(ctx->r4, -0X45FC);
    // 0x803AB5FC: jal         0x800293DC
    // 0x803AB600: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    func_800293DC(rdram, ctx);
        goto after_1;
    // 0x803AB600: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    after_1:
    // 0x803AB604: jal         0x80035A04
    // 0x803AB608: nop

    func_80035A04(rdram, ctx);
        goto after_2;
    // 0x803AB608: nop

    after_2:
    // 0x803AB60C: lui         $a0, 0x803B
    ctx->r4 = S32(0X803B << 16);
    // 0x803AB610: addiu       $a0, $a0, -0x49D4
    ctx->r4 = ADD32(ctx->r4, -0X49D4);
    // 0x803AB614: jal         0x8004A9B4
    // 0x803AB618: addiu       $a1, $zero, 0xB
    ctx->r5 = ADD32(0, 0XB);
    func_8004A9B4(rdram, ctx);
        goto after_3;
    // 0x803AB618: addiu       $a1, $zero, 0xB
    ctx->r5 = ADD32(0, 0XB);
    after_3:
    // 0x803AB61C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x803AB620: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x803AB624: jr          $ra
    // 0x803AB628: nop

    return;
    // 0x803AB628: nop

;}
RECOMP_FUNC void func_803AB62C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803AB62C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x803AB630: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x803AB634: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x803AB638: jal         0x800357CC
    // 0x803AB63C: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    func_800357CC(rdram, ctx);
        goto after_0;
    // 0x803AB63C: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    after_0:
    // 0x803AB640: lui         $t6, 0x8012
    ctx->r14 = S32(0X8012 << 16);
    // 0x803AB644: lw          $t6, -0x3250($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X3250);
    // 0x803AB648: nop

    // 0x803AB64C: lhu         $a0, 0x0($t6)
    ctx->r4 = MEM_HU(ctx->r14, 0X0);
    // 0x803AB650: jal         0x80035C24
    // 0x803AB654: nop

    func_80035C24(rdram, ctx);
        goto after_1;
    // 0x803AB654: nop

    after_1:
    // 0x803AB658: sll         $t7, $v0, 2
    ctx->r15 = S32(ctx->r2 << 2);
    // 0x803AB65C: lui         $t9, 0x803B
    ctx->r25 = S32(0X803B << 16);
    // 0x803AB660: addu        $t9, $t9, $t7
    ctx->r25 = ADD32(ctx->r25, ctx->r15);
    // 0x803AB664: lw          $t9, -0x2ED0($t9)
    ctx->r25 = MEM_W(ctx->r25, -0X2ED0);
    // 0x803AB668: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x803AB66C: lw          $a1, 0x1C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X1C);
    // 0x803AB670: jalr        $t9
    // 0x803AB674: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x803AB674: nop

    after_2:
    // 0x803AB678: jal         0x80035860
    // 0x803AB67C: nop

    func_80035860(rdram, ctx);
        goto after_3;
    // 0x803AB67C: nop

    after_3:
    // 0x803AB680: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x803AB684: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x803AB688: jr          $ra
    // 0x803AB68C: nop

    return;
    // 0x803AB68C: nop

;}
RECOMP_FUNC void func_803AB690(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803AB690: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x803AB694: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x803AB698: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x803AB69C: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x803AB6A0: jal         0x80035770
    // 0x803AB6A4: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_80035770(rdram, ctx);
        goto after_0;
    // 0x803AB6A4: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x803AB6A8: lui         $t6, 0x801B
    ctx->r14 = S32(0X801B << 16);
    // 0x803AB6AC: lh          $t6, -0x6A0($t6)
    ctx->r14 = MEM_H(ctx->r14, -0X6A0);
    // 0x803AB6B0: lw          $a1, 0x18($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X18);
    // 0x803AB6B4: bne         $t6, $zero, L_803AB6D4
    if (ctx->r14 != 0) {
        // 0x803AB6B8: nop
    
            goto L_803AB6D4;
    }
    // 0x803AB6B8: nop

    // 0x803AB6BC: jal         0x80269334
    // 0x803AB6C0: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    LOOKUP_FUNC(0x80269334)(rdram, ctx);
        goto after_1;
    // 0x803AB6C0: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_1:
    // 0x803AB6C4: jal         0x80037908
    // 0x803AB6C8: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    func_80037908(rdram, ctx);
        goto after_2;
    // 0x803AB6C8: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_2:
    // 0x803AB6CC: b           L_803AB794
    // 0x803AB6D0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_803AB794;
    // 0x803AB6D0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_803AB6D4:
    // 0x803AB6D4: lh          $t7, 0x24($a1)
    ctx->r15 = MEM_H(ctx->r5, 0X24);
    // 0x803AB6D8: sh          $zero, 0x2A($a1)
    MEM_H(0X2A, ctx->r5) = 0;
    // 0x803AB6DC: bne         $t7, $zero, L_803AB6F0
    if (ctx->r15 != 0) {
        // 0x803AB6E0: addiu       $at, $zero, 0x1
        ctx->r1 = ADD32(0, 0X1);
            goto L_803AB6F0;
    }
    // 0x803AB6E0: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x803AB6E4: lh          $t8, 0x2C($a1)
    ctx->r24 = MEM_H(ctx->r5, 0X2C);
    // 0x803AB6E8: nop

    // 0x803AB6EC: sh          $t8, 0x36($a1)
    MEM_H(0X36, ctx->r5) = ctx->r24;
L_803AB6F0:
    // 0x803AB6F0: lh          $v0, 0x36($a1)
    ctx->r2 = MEM_H(ctx->r5, 0X36);
    // 0x803AB6F4: nop

    // 0x803AB6F8: beq         $v0, $zero, L_803AB710
    if (ctx->r2 == 0) {
        // 0x803AB6FC: nop
    
            goto L_803AB710;
    }
    // 0x803AB6FC: nop

    // 0x803AB700: beq         $v0, $at, L_803AB788
    if (ctx->r2 == ctx->r1) {
        // 0x803AB704: lui         $a0, 0x803B
        ctx->r4 = S32(0X803B << 16);
            goto L_803AB788;
    }
    // 0x803AB704: lui         $a0, 0x803B
    ctx->r4 = S32(0X803B << 16);
    // 0x803AB708: b           L_803AB794
    // 0x803AB70C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_803AB794;
    // 0x803AB70C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_803AB710:
    // 0x803AB710: lh          $v0, 0x24($a1)
    ctx->r2 = MEM_H(ctx->r5, 0X24);
    // 0x803AB714: addiu       $t9, $zero, 0x14
    ctx->r25 = ADD32(0, 0X14);
    // 0x803AB718: beq         $v0, $zero, L_803AB734
    if (ctx->r2 == 0) {
        // 0x803AB71C: lui         $a0, 0x803B
        ctx->r4 = S32(0X803B << 16);
            goto L_803AB734;
    }
    // 0x803AB71C: lui         $a0, 0x803B
    ctx->r4 = S32(0X803B << 16);
    // 0x803AB720: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x803AB724: beq         $v0, $at, L_803AB748
    if (ctx->r2 == ctx->r1) {
        // 0x803AB728: nop
    
            goto L_803AB748;
    }
    // 0x803AB728: nop

    // 0x803AB72C: b           L_803AB794
    // 0x803AB730: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_803AB794;
    // 0x803AB730: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_803AB734:
    // 0x803AB734: sh          $t9, 0x2A($a1)
    MEM_H(0X2A, ctx->r5) = ctx->r25;
    // 0x803AB738: jal         0x800296E0
    // 0x803AB73C: addiu       $a0, $a0, -0x4790
    ctx->r4 = ADD32(ctx->r4, -0X4790);
    func_800296E0(rdram, ctx);
        goto after_3;
    // 0x803AB73C: addiu       $a0, $a0, -0x4790
    ctx->r4 = ADD32(ctx->r4, -0X4790);
    after_3:
    // 0x803AB740: b           L_803AB794
    // 0x803AB744: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_803AB794;
    // 0x803AB744: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_803AB748:
    // 0x803AB748: lh          $t0, 0x50($a1)
    ctx->r8 = MEM_H(ctx->r5, 0X50);
    // 0x803AB74C: lui         $a0, 0x803B
    ctx->r4 = S32(0X803B << 16);
    // 0x803AB750: bne         $t0, $zero, L_803AB778
    if (ctx->r8 != 0) {
        // 0x803AB754: nop
    
            goto L_803AB778;
    }
    // 0x803AB754: nop

    // 0x803AB758: jal         0x80269334
    // 0x803AB75C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    LOOKUP_FUNC(0x80269334)(rdram, ctx);
        goto after_4;
    // 0x803AB75C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_4:
    // 0x803AB760: lui         $a0, 0x803B
    ctx->r4 = S32(0X803B << 16);
    // 0x803AB764: addiu       $a0, $a0, -0x4838
    ctx->r4 = ADD32(ctx->r4, -0X4838);
    // 0x803AB768: jal         0x8002989C
    // 0x803AB76C: addiu       $a1, $zero, 0x30
    ctx->r5 = ADD32(0, 0X30);
    func_8002989C(rdram, ctx);
        goto after_5;
    // 0x803AB76C: addiu       $a1, $zero, 0x30
    ctx->r5 = ADD32(0, 0X30);
    after_5:
    // 0x803AB770: b           L_803AB794
    // 0x803AB774: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_803AB794;
    // 0x803AB774: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_803AB778:
    // 0x803AB778: jal         0x800296E0
    // 0x803AB77C: addiu       $a0, $a0, -0x47D0
    ctx->r4 = ADD32(ctx->r4, -0X47D0);
    func_800296E0(rdram, ctx);
        goto after_6;
    // 0x803AB77C: addiu       $a0, $a0, -0x47D0
    ctx->r4 = ADD32(ctx->r4, -0X47D0);
    after_6:
    // 0x803AB780: b           L_803AB794
    // 0x803AB784: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_803AB794;
    // 0x803AB784: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_803AB788:
    // 0x803AB788: jal         0x800296E0
    // 0x803AB78C: addiu       $a0, $a0, -0x4810
    ctx->r4 = ADD32(ctx->r4, -0X4810);
    func_800296E0(rdram, ctx);
        goto after_7;
    // 0x803AB78C: addiu       $a0, $a0, -0x4810
    ctx->r4 = ADD32(ctx->r4, -0X4810);
    after_7:
    // 0x803AB790: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_803AB794:
    // 0x803AB794: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x803AB798: jr          $ra
    // 0x803AB79C: nop

    return;
    // 0x803AB79C: nop

;}
RECOMP_FUNC void func_803AB7A0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803AB7A0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x803AB7A4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x803AB7A8: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x803AB7AC: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x803AB7B0: jal         0x80037908
    // 0x803AB7B4: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    func_80037908(rdram, ctx);
        goto after_0;
    // 0x803AB7B4: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_0:
    // 0x803AB7B8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x803AB7BC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x803AB7C0: jr          $ra
    // 0x803AB7C4: nop

    return;
    // 0x803AB7C4: nop

;}
RECOMP_FUNC void func_803AB7C8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803AB7C8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x803AB7CC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x803AB7D0: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x803AB7D4: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x803AB7D8: jal         0x80037908
    // 0x803AB7DC: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    func_80037908(rdram, ctx);
        goto after_0;
    // 0x803AB7DC: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_0:
    // 0x803AB7E0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x803AB7E4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x803AB7E8: jr          $ra
    // 0x803AB7EC: nop

    return;
    // 0x803AB7EC: nop

;}
RECOMP_FUNC void func_803AB7F0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803AB7F0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x803AB7F4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x803AB7F8: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x803AB7FC: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x803AB800: addiu       $t6, $zero, 0xC
    ctx->r14 = ADD32(0, 0XC);
    // 0x803AB804: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x803AB808: sh          $t6, 0x2A($a0)
    MEM_H(0X2A, ctx->r4) = ctx->r14;
    // 0x803AB80C: sh          $zero, 0x36($a0)
    MEM_H(0X36, ctx->r4) = 0;
    // 0x803AB810: sh          $t7, 0x24($a0)
    MEM_H(0X24, ctx->r4) = ctx->r15;
    // 0x803AB814: lui         $a0, 0x803B
    ctx->r4 = S32(0X803B << 16);
    // 0x803AB818: jal         0x800296E0
    // 0x803AB81C: addiu       $a0, $a0, -0x49D4
    ctx->r4 = ADD32(ctx->r4, -0X49D4);
    func_800296E0(rdram, ctx);
        goto after_0;
    // 0x803AB81C: addiu       $a0, $a0, -0x49D4
    ctx->r4 = ADD32(ctx->r4, -0X49D4);
    after_0:
    // 0x803AB820: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x803AB824: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x803AB828: jr          $ra
    // 0x803AB82C: nop

    return;
    // 0x803AB82C: nop

;}
RECOMP_FUNC void func_803AB830(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803AB830: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x803AB834: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x803AB838: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x803AB83C: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x803AB840: sh          $zero, 0x2A($a0)
    MEM_H(0X2A, ctx->r4) = 0;
    // 0x803AB844: lh          $v0, 0x2A($a0)
    ctx->r2 = MEM_H(ctx->r4, 0X2A);
    // 0x803AB848: nop

    // 0x803AB84C: sh          $v0, 0x24($a0)
    MEM_H(0X24, ctx->r4) = ctx->r2;
    // 0x803AB850: sh          $v0, 0x36($a0)
    MEM_H(0X36, ctx->r4) = ctx->r2;
    // 0x803AB854: lui         $a0, 0x803B
    ctx->r4 = S32(0X803B << 16);
    // 0x803AB858: jal         0x800296E0
    // 0x803AB85C: addiu       $a0, $a0, -0x49D4
    ctx->r4 = ADD32(ctx->r4, -0X49D4);
    func_800296E0(rdram, ctx);
        goto after_0;
    // 0x803AB85C: addiu       $a0, $a0, -0x49D4
    ctx->r4 = ADD32(ctx->r4, -0X49D4);
    after_0:
    // 0x803AB860: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x803AB864: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x803AB868: jr          $ra
    // 0x803AB86C: nop

    return;
    // 0x803AB86C: nop

;}
RECOMP_FUNC void func_803AB870(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803AB870: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x803AB874: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x803AB878: or          $a2, $a0, $zero
    ctx->r6 = ctx->r4 | 0;
    // 0x803AB87C: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x803AB880: sw          $a2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r6;
    // 0x803AB884: jal         0x80034D40
    // 0x803AB888: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    func_80034D40(rdram, ctx);
        goto after_0;
    // 0x803AB888: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_0:
    // 0x803AB88C: lw          $a2, 0x18($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X18);
    // 0x803AB890: beq         $v0, $zero, L_803AB8E4
    if (ctx->r2 == 0) {
        // 0x803AB894: addiu       $at, $zero, 0x2
        ctx->r1 = ADD32(0, 0X2);
            goto L_803AB8E4;
    }
    // 0x803AB894: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x803AB898: beq         $v0, $at, L_803AB90C
    if (ctx->r2 == ctx->r1) {
        // 0x803AB89C: addiu       $t9, $zero, 0xE
        ctx->r25 = ADD32(0, 0XE);
            goto L_803AB90C;
    }
    // 0x803AB89C: addiu       $t9, $zero, 0xE
    ctx->r25 = ADD32(0, 0XE);
    // 0x803AB8A0: addiu       $at, $zero, 0x8
    ctx->r1 = ADD32(0, 0X8);
    // 0x803AB8A4: beq         $v0, $at, L_803AB914
    if (ctx->r2 == ctx->r1) {
        // 0x803AB8A8: addiu       $t0, $zero, 0xB
        ctx->r8 = ADD32(0, 0XB);
            goto L_803AB914;
    }
    // 0x803AB8A8: addiu       $t0, $zero, 0xB
    ctx->r8 = ADD32(0, 0XB);
    // 0x803AB8AC: addiu       $at, $zero, 0x9
    ctx->r1 = ADD32(0, 0X9);
    // 0x803AB8B0: bne         $v0, $at, L_803AB91C
    if (ctx->r2 != ctx->r1) {
        // 0x803AB8B4: addiu       $t1, $zero, 0xF
        ctx->r9 = ADD32(0, 0XF);
            goto L_803AB91C;
    }
    // 0x803AB8B4: addiu       $t1, $zero, 0xF
    ctx->r9 = ADD32(0, 0XF);
    // 0x803AB8B8: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x803AB8BC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x803AB8C0: jal         0x80034D7C
    // 0x803AB8C4: sw          $a2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r6;
    func_80034D7C(rdram, ctx);
        goto after_1;
    // 0x803AB8C4: sw          $a2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r6;
    after_1:
    // 0x803AB8C8: jal         0x80034D40
    // 0x803AB8CC: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    func_80034D40(rdram, ctx);
        goto after_2;
    // 0x803AB8CC: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_2:
    // 0x803AB8D0: lw          $a2, 0x18($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X18);
    // 0x803AB8D4: beq         $v0, $zero, L_803AB8E4
    if (ctx->r2 == 0) {
        // 0x803AB8D8: addiu       $t6, $zero, 0xF
        ctx->r14 = ADD32(0, 0XF);
            goto L_803AB8E4;
    }
    // 0x803AB8D8: addiu       $t6, $zero, 0xF
    ctx->r14 = ADD32(0, 0XF);
    // 0x803AB8DC: b           L_803AB920
    // 0x803AB8E0: sh          $t6, 0x2A($a2)
    MEM_H(0X2A, ctx->r6) = ctx->r14;
        goto L_803AB920;
    // 0x803AB8E0: sh          $t6, 0x2A($a2)
    MEM_H(0X2A, ctx->r6) = ctx->r14;
L_803AB8E4:
    // 0x803AB8E4: addiu       $t7, $zero, 0xA
    ctx->r15 = ADD32(0, 0XA);
    // 0x803AB8E8: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x803AB8EC: lui         $a0, 0x803B
    ctx->r4 = S32(0X803B << 16);
    // 0x803AB8F0: sh          $t7, 0x2A($a2)
    MEM_H(0X2A, ctx->r6) = ctx->r15;
    // 0x803AB8F4: sh          $t8, 0x24($a2)
    MEM_H(0X24, ctx->r6) = ctx->r24;
    // 0x803AB8F8: addiu       $a0, $a0, -0x4860
    ctx->r4 = ADD32(ctx->r4, -0X4860);
    // 0x803AB8FC: jal         0x8002989C
    // 0x803AB900: addiu       $a1, $zero, 0x30
    ctx->r5 = ADD32(0, 0X30);
    func_8002989C(rdram, ctx);
        goto after_3;
    // 0x803AB900: addiu       $a1, $zero, 0x30
    ctx->r5 = ADD32(0, 0X30);
    after_3:
    // 0x803AB904: b           L_803AB934
    // 0x803AB908: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_803AB934;
    // 0x803AB908: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_803AB90C:
    // 0x803AB90C: b           L_803AB920
    // 0x803AB910: sh          $t9, 0x2A($a2)
    MEM_H(0X2A, ctx->r6) = ctx->r25;
        goto L_803AB920;
    // 0x803AB910: sh          $t9, 0x2A($a2)
    MEM_H(0X2A, ctx->r6) = ctx->r25;
L_803AB914:
    // 0x803AB914: b           L_803AB920
    // 0x803AB918: sh          $t0, 0x2A($a2)
    MEM_H(0X2A, ctx->r6) = ctx->r8;
        goto L_803AB920;
    // 0x803AB918: sh          $t0, 0x2A($a2)
    MEM_H(0X2A, ctx->r6) = ctx->r8;
L_803AB91C:
    // 0x803AB91C: sh          $t1, 0x2A($a2)
    MEM_H(0X2A, ctx->r6) = ctx->r9;
L_803AB920:
    // 0x803AB920: lui         $a0, 0x803B
    ctx->r4 = S32(0X803B << 16);
    // 0x803AB924: addiu       $a0, $a0, -0x4810
    ctx->r4 = ADD32(ctx->r4, -0X4810);
    // 0x803AB928: jal         0x8002989C
    // 0x803AB92C: addiu       $a1, $zero, 0x50
    ctx->r5 = ADD32(0, 0X50);
    func_8002989C(rdram, ctx);
        goto after_4;
    // 0x803AB92C: addiu       $a1, $zero, 0x50
    ctx->r5 = ADD32(0, 0X50);
    after_4:
    // 0x803AB930: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_803AB934:
    // 0x803AB934: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x803AB938: jr          $ra
    // 0x803AB93C: nop

    return;
    // 0x803AB93C: nop

;}
RECOMP_FUNC void func_803AB940(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803AB940: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x803AB944: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x803AB948: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x803AB94C: lh          $t6, 0x24($a0)
    ctx->r14 = MEM_H(ctx->r4, 0X24);
    // 0x803AB950: nop

    // 0x803AB954: bne         $t6, $zero, L_803AB968
    if (ctx->r14 != 0) {
        // 0x803AB958: nop
    
            goto L_803AB968;
    }
    // 0x803AB958: nop

    // 0x803AB95C: lh          $t7, 0x3C($a0)
    ctx->r15 = MEM_H(ctx->r4, 0X3C);
    // 0x803AB960: nop

    // 0x803AB964: bne         $t7, $zero, L_803AB974
    if (ctx->r15 != 0) {
        // 0x803AB968: lui         $a0, 0x803B
        ctx->r4 = S32(0X803B << 16);
            goto L_803AB974;
    }
L_803AB968:
    // 0x803AB968: lui         $a0, 0x803B
    ctx->r4 = S32(0X803B << 16);
    // 0x803AB96C: jal         0x800296E0
    // 0x803AB970: addiu       $a0, $a0, -0x47D0
    ctx->r4 = ADD32(ctx->r4, -0X47D0);
    func_800296E0(rdram, ctx);
        goto after_0;
    // 0x803AB970: addiu       $a0, $a0, -0x47D0
    ctx->r4 = ADD32(ctx->r4, -0X47D0);
    after_0:
L_803AB974:
    // 0x803AB974: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x803AB978: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x803AB97C: jr          $ra
    // 0x803AB980: nop

    return;
    // 0x803AB980: nop

;}
RECOMP_FUNC void func_803AB984(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803AB984: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    // 0x803AB988: lh          $v0, 0x2A($a0)
    ctx->r2 = MEM_H(ctx->r4, 0X2A);
    // 0x803AB98C: addiu       $at, $zero, 0xC
    ctx->r1 = ADD32(0, 0XC);
    // 0x803AB990: bne         $v0, $zero, L_803AB9B0
    if (ctx->r2 != 0) {
        // 0x803AB994: nop
    
            goto L_803AB9B0;
    }
    // 0x803AB994: nop

    // 0x803AB998: lh          $t6, 0x3C($a0)
    ctx->r14 = MEM_H(ctx->r4, 0X3C);
    // 0x803AB99C: nop

    // 0x803AB9A0: beq         $t6, $zero, L_803AB9B0
    if (ctx->r14 == 0) {
        // 0x803AB9A4: nop
    
            goto L_803AB9B0;
    }
    // 0x803AB9A4: nop

    // 0x803AB9A8: jr          $ra
    // 0x803AB9AC: sh          $zero, 0x2C($a0)
    MEM_H(0X2C, ctx->r4) = 0;
    return;
    // 0x803AB9AC: sh          $zero, 0x2C($a0)
    MEM_H(0X2C, ctx->r4) = 0;
L_803AB9B0:
    // 0x803AB9B0: bne         $v0, $at, L_803AB9BC
    if (ctx->r2 != ctx->r1) {
        // 0x803AB9B4: nop
    
            goto L_803AB9BC;
    }
    // 0x803AB9B4: nop

    // 0x803AB9B8: sh          $zero, 0x50($a0)
    MEM_H(0X50, ctx->r4) = 0;
L_803AB9BC:
    // 0x803AB9BC: jr          $ra
    // 0x803AB9C0: nop

    return;
    // 0x803AB9C0: nop

;}
RECOMP_FUNC void func_803AB9C4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803AB9C4: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    // 0x803AB9C8: lh          $v0, 0x2A($a0)
    ctx->r2 = MEM_H(ctx->r4, 0X2A);
    // 0x803AB9CC: addiu       $at, $zero, 0xC
    ctx->r1 = ADD32(0, 0XC);
    // 0x803AB9D0: bne         $v0, $zero, L_803AB9F0
    if (ctx->r2 != 0) {
        // 0x803AB9D4: nop
    
            goto L_803AB9F0;
    }
    // 0x803AB9D4: nop

    // 0x803AB9D8: lh          $t6, 0x3C($a0)
    ctx->r14 = MEM_H(ctx->r4, 0X3C);
    // 0x803AB9DC: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x803AB9E0: beq         $t6, $zero, L_803AB9F0
    if (ctx->r14 == 0) {
        // 0x803AB9E4: nop
    
            goto L_803AB9F0;
    }
    // 0x803AB9E4: nop

    // 0x803AB9E8: jr          $ra
    // 0x803AB9EC: sh          $t7, 0x2C($a0)
    MEM_H(0X2C, ctx->r4) = ctx->r15;
    return;
    // 0x803AB9EC: sh          $t7, 0x2C($a0)
    MEM_H(0X2C, ctx->r4) = ctx->r15;
L_803AB9F0:
    // 0x803AB9F0: bne         $v0, $at, L_803AB9FC
    if (ctx->r2 != ctx->r1) {
        // 0x803AB9F4: addiu       $t8, $zero, 0x1
        ctx->r24 = ADD32(0, 0X1);
            goto L_803AB9FC;
    }
    // 0x803AB9F4: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x803AB9F8: sh          $t8, 0x50($a0)
    MEM_H(0X50, ctx->r4) = ctx->r24;
L_803AB9FC:
    // 0x803AB9FC: jr          $ra
    // 0x803ABA00: nop

    return;
    // 0x803ABA00: nop

;}
RECOMP_FUNC void func_803ABA04(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803ABA04: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x803ABA08: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x803ABA0C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x803ABA10: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x803ABA14: addiu       $t6, $zero, 0x147
    ctx->r14 = ADD32(0, 0X147);
    // 0x803ABA18: sh          $t6, 0x12($a1)
    MEM_H(0X12, ctx->r5) = ctx->r14;
    // 0x803ABA1C: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    // 0x803ABA20: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x803ABA24: addiu       $a2, $zero, 0xE0
    ctx->r6 = ADD32(0, 0XE0);
    // 0x803ABA28: jal         0x8002B608
    // 0x803ABA2C: addiu       $a3, $zero, 0xFF
    ctx->r7 = ADD32(0, 0XFF);
    func_8002B608(rdram, ctx);
        goto after_0;
    // 0x803ABA2C: addiu       $a3, $zero, 0xFF
    ctx->r7 = ADD32(0, 0XFF);
    after_0:
    // 0x803ABA30: lw          $t9, 0x1C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X1C);
    // 0x803ABA34: addiu       $t8, $zero, 0xB
    ctx->r24 = ADD32(0, 0XB);
    // 0x803ABA38: lui         $a0, 0x803B
    ctx->r4 = S32(0X803B << 16);
    // 0x803ABA3C: addiu       $a0, $a0, -0x45A8
    ctx->r4 = ADD32(ctx->r4, -0X45A8);
    // 0x803ABA40: jal         0x800296E0
    // 0x803ABA44: sb          $t8, 0x5($t9)
    MEM_B(0X5, ctx->r25) = ctx->r24;
    func_800296E0(rdram, ctx);
        goto after_1;
    // 0x803ABA44: sb          $t8, 0x5($t9)
    MEM_B(0X5, ctx->r25) = ctx->r24;
    after_1:
    // 0x803ABA48: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x803ABA4C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x803ABA50: jr          $ra
    // 0x803ABA54: nop

    return;
    // 0x803ABA54: nop

;}
RECOMP_FUNC void func_803ABA58(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803ABA58: lui         $t0, 0x801B
    ctx->r8 = S32(0X801B << 16);
    // 0x803ABA5C: addiu       $t0, $t0, -0x750
    ctx->r8 = ADD32(ctx->r8, -0X750);
    // 0x803ABA60: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x803ABA64: lh          $t6, 0xB0($t0)
    ctx->r14 = MEM_H(ctx->r8, 0XB0);
    // 0x803ABA68: sw          $s0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r16;
    // 0x803ABA6C: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x803ABA70: sw          $a0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r4;
    // 0x803ABA74: sw          $a1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r5;
    // 0x803ABA78: beq         $t6, $zero, L_803ABB7C
    if (ctx->r14 == 0) {
        // 0x803ABA7C: or          $s0, $zero, $zero
        ctx->r16 = 0 | 0;
            goto L_803ABB7C;
    }
    // 0x803ABA7C: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x803ABA80: lui         $a0, 0x8011
    ctx->r4 = S32(0X8011 << 16);
    // 0x803ABA84: lui         $a3, 0x8028
    ctx->r7 = S32(0X8028 << 16);
    // 0x803ABA88: addiu       $t7, $zero, 0x26
    ctx->r15 = ADD32(0, 0X26);
    // 0x803ABA8C: addiu       $t8, $zero, 0x2
    ctx->r24 = ADD32(0, 0X2);
    // 0x803ABA90: addiu       $t9, $zero, 0x7
    ctx->r25 = ADD32(0, 0X7);
    // 0x803ABA94: addiu       $t1, $zero, 0x4
    ctx->r9 = ADD32(0, 0X4);
    // 0x803ABA98: sw          $t1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r9;
    // 0x803ABA9C: sw          $t9, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r25;
    // 0x803ABAA0: sw          $t8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r24;
    // 0x803ABAA4: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x803ABAA8: addiu       $a3, $a3, 0x76F0
    ctx->r7 = ADD32(ctx->r7, 0X76F0);
    // 0x803ABAAC: addiu       $a0, $a0, -0x3888
    ctx->r4 = ADD32(ctx->r4, -0X3888);
    // 0x803ABAB0: addiu       $a1, $zero, 0x24
    ctx->r5 = ADD32(0, 0X24);
    // 0x803ABAB4: addiu       $a2, $zero, 0x4A
    ctx->r6 = ADD32(0, 0X4A);
    // 0x803ABAB8: jal         0x8002F528
    // 0x803ABABC: addiu       $s0, $zero, 0x1
    ctx->r16 = ADD32(0, 0X1);
    func_8002F528(rdram, ctx);
        goto after_0;
    // 0x803ABABC: addiu       $s0, $zero, 0x1
    ctx->r16 = ADD32(0, 0X1);
    after_0:
    // 0x803ABAC0: lui         $t0, 0x801B
    ctx->r8 = S32(0X801B << 16);
    // 0x803ABAC4: sll         $t2, $s0, 5
    ctx->r10 = S32(ctx->r16 << 5);
    // 0x803ABAC8: lui         $at, 0x2
    ctx->r1 = S32(0X2 << 16);
    // 0x803ABACC: addiu       $t0, $t0, -0x750
    ctx->r8 = ADD32(ctx->r8, -0X750);
    // 0x803ABAD0: ori         $at, $at, 0xFEE8
    ctx->r1 = ctx->r1 | 0XFEE8;
    // 0x803ABAD4: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x803ABAD8: lui         $t4, 0x800E
    ctx->r12 = S32(0X800E << 16);
    // 0x803ABADC: addiu       $t4, $t4, -0x3770
    ctx->r12 = ADD32(ctx->r12, -0X3770);
    // 0x803ABAE0: sll         $t7, $s0, 16
    ctx->r15 = S32(ctx->r16 << 16);
    // 0x803ABAE4: addu        $t3, $t2, $at
    ctx->r11 = ADD32(ctx->r10, ctx->r1);
    // 0x803ABAE8: lh          $a3, 0xAE($t0)
    ctx->r7 = MEM_H(ctx->r8, 0XAE);
    // 0x803ABAEC: addiu       $t5, $zero, 0x1
    ctx->r13 = ADD32(0, 0X1);
    // 0x803ABAF0: addiu       $t6, $zero, 0x3
    ctx->r14 = ADD32(0, 0X3);
    // 0x803ABAF4: sw          $t6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r14;
    // 0x803ABAF8: sw          $t5, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r13;
    // 0x803ABAFC: addu        $a0, $t3, $t4
    ctx->r4 = ADD32(ctx->r11, ctx->r12);
    // 0x803ABB00: sra         $s0, $t7, 16
    ctx->r16 = S32(SIGNED(ctx->r15) >> 16);
    // 0x803ABB04: addiu       $a1, $zero, 0x62
    ctx->r5 = ADD32(0, 0X62);
    // 0x803ABB08: jal         0x8002F6EC
    // 0x803ABB0C: addiu       $a2, $zero, 0x9A
    ctx->r6 = ADD32(0, 0X9A);
    func_8002F6EC(rdram, ctx);
        goto after_1;
    // 0x803ABB0C: addiu       $a2, $zero, 0x9A
    ctx->r6 = ADD32(0, 0X9A);
    after_1:
    // 0x803ABB10: lui         $v1, 0x8010
    ctx->r3 = S32(0X8010 << 16);
    // 0x803ABB14: addiu       $v1, $v1, 0x4890
    ctx->r3 = ADD32(ctx->r3, 0X4890);
    // 0x803ABB18: addiu       $v0, $zero, 0x9
    ctx->r2 = ADD32(0, 0X9);
    // 0x803ABB1C: lw          $t1, 0x3C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X3C);
    // 0x803ABB20: sb          $v0, 0x7F2D($v1)
    MEM_B(0X7F2D, ctx->r3) = ctx->r2;
    // 0x803ABB24: sb          $v0, 0x7F0D($v1)
    MEM_B(0X7F0D, ctx->r3) = ctx->r2;
    // 0x803ABB28: sb          $v0, 0x7EED($v1)
    MEM_B(0X7EED, ctx->r3) = ctx->r2;
    // 0x803ABB2C: lw          $t2, 0x0($t1)
    ctx->r10 = MEM_W(ctx->r9, 0X0);
    // 0x803ABB30: addiu       $t3, $zero, 0x108
    ctx->r11 = ADD32(0, 0X108);
    // 0x803ABB34: lw          $a0, 0x0($t2)
    ctx->r4 = MEM_W(ctx->r10, 0X0);
    // 0x803ABB38: addiu       $t4, $zero, 0x78
    ctx->r12 = ADD32(0, 0X78);
    // 0x803ABB3C: addiu       $t5, $zero, 0x1
    ctx->r13 = ADD32(0, 0X1);
    // 0x803ABB40: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x803ABB44: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x803ABB48: addiu       $t8, $zero, 0xB3
    ctx->r24 = ADD32(0, 0XB3);
    // 0x803ABB4C: sw          $t8, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r24;
    // 0x803ABB50: sw          $t7, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r15;
    // 0x803ABB54: sw          $t6, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r14;
    // 0x803ABB58: sw          $t5, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r13;
    // 0x803ABB5C: sw          $t4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r12;
    // 0x803ABB60: sw          $t3, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r11;
    // 0x803ABB64: addiu       $a1, $zero, 0x82
    ctx->r5 = ADD32(0, 0X82);
    // 0x803ABB68: addiu       $a2, $zero, 0x20
    ctx->r6 = ADD32(0, 0X20);
    // 0x803ABB6C: jal         0x8004A5E4
    // 0x803ABB70: addiu       $a3, $zero, 0x40
    ctx->r7 = ADD32(0, 0X40);
    func_8004A5E4(rdram, ctx);
        goto after_2;
    // 0x803ABB70: addiu       $a3, $zero, 0x40
    ctx->r7 = ADD32(0, 0X40);
    after_2:
    // 0x803ABB74: b           L_803ABBB0
    // 0x803ABB78: sll         $a1, $s0, 16
    ctx->r5 = S32(ctx->r16 << 16);
        goto L_803ABBB0;
    // 0x803ABB78: sll         $a1, $s0, 16
    ctx->r5 = S32(ctx->r16 << 16);
L_803ABB7C:
    // 0x803ABB7C: lw          $t9, 0x3C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X3C);
    // 0x803ABB80: lui         $v1, 0x8010
    ctx->r3 = S32(0X8010 << 16);
    // 0x803ABB84: lw          $t1, 0x0($t9)
    ctx->r9 = MEM_W(ctx->r25, 0X0);
    // 0x803ABB88: addiu       $v1, $v1, 0x4890
    ctx->r3 = ADD32(ctx->r3, 0X4890);
    // 0x803ABB8C: sb          $zero, 0x4($t1)
    MEM_B(0X4, ctx->r9) = 0;
    // 0x803ABB90: lw          $t2, 0x0($t9)
    ctx->r10 = MEM_W(ctx->r25, 0X0);
    // 0x803ABB94: addiu       $t3, $zero, 0x7
    ctx->r11 = ADD32(0, 0X7);
    // 0x803ABB98: lbu         $v0, 0x4($t2)
    ctx->r2 = MEM_BU(ctx->r10, 0X4);
    // 0x803ABB9C: sh          $t3, 0x9E($t0)
    MEM_H(0X9E, ctx->r8) = ctx->r11;
    // 0x803ABBA0: sb          $v0, 0x7F2C($v1)
    MEM_B(0X7F2C, ctx->r3) = ctx->r2;
    // 0x803ABBA4: sb          $v0, 0x7F0C($v1)
    MEM_B(0X7F0C, ctx->r3) = ctx->r2;
    // 0x803ABBA8: sb          $v0, 0x7EEC($v1)
    MEM_B(0X7EEC, ctx->r3) = ctx->r2;
    // 0x803ABBAC: sll         $a1, $s0, 16
    ctx->r5 = S32(ctx->r16 << 16);
L_803ABBB0:
    // 0x803ABBB0: sra         $t4, $a1, 16
    ctx->r12 = S32(SIGNED(ctx->r5) >> 16);
    // 0x803ABBB4: lw          $a0, 0x3C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X3C);
    // 0x803ABBB8: or          $a1, $t4, $zero
    ctx->r5 = ctx->r12 | 0;
    // 0x803ABBBC: jal         0x80268D30
    // 0x803ABBC0: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    LOOKUP_FUNC(0x80268D30)(rdram, ctx);
        goto after_3;
    // 0x803ABBC0: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_3:
    // 0x803ABBC4: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x803ABBC8: lw          $s0, 0x30($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X30);
    // 0x803ABBCC: jr          $ra
    // 0x803ABBD0: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    return;
    // 0x803ABBD0: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    // 0x803ABBD4: nop

    // 0x803ABBD8: nop

    // 0x803ABBDC: nop

;}
RECOMP_FUNC void func_803ABBE0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803ABBE0: lui         $v0, 0x801B
    ctx->r2 = S32(0X801B << 16);
    // 0x803ABBE4: addiu       $v0, $v0, -0x750
    ctx->r2 = ADD32(ctx->r2, -0X750);
    // 0x803ABBE8: lh          $t6, 0xA0($v0)
    ctx->r14 = MEM_H(ctx->r2, 0XA0);
    // 0x803ABBEC: lh          $t7, 0xE6($v0)
    ctx->r15 = MEM_H(ctx->r2, 0XE6);
    // 0x803ABBF0: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x803ABBF4: bne         $t6, $t7, L_803ABC08
    if (ctx->r14 != ctx->r15) {
        // 0x803ABBF8: sw          $a1, 0x4($sp)
        MEM_W(0X4, ctx->r29) = ctx->r5;
            goto L_803ABC08;
    }
    // 0x803ABBF8: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    // 0x803ABBFC: sh          $zero, 0xE6($v0)
    MEM_H(0XE6, ctx->r2) = 0;
    // 0x803ABC00: jr          $ra
    // 0x803ABC04: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    return;
    // 0x803ABC04: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_803ABC08:
    // 0x803ABC08: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x803ABC0C: sh          $t8, 0xE6($v0)
    MEM_H(0XE6, ctx->r2) = ctx->r24;
    // 0x803ABC10: jr          $ra
    // 0x803ABC14: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    return;
    // 0x803ABC14: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
;}
RECOMP_FUNC void func_803ABC18(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803ABC18: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x803ABC1C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x803ABC20: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x803ABC24: jal         0x80036234
    // 0x803ABC28: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    func_80036234(rdram, ctx);
        goto after_0;
    // 0x803ABC28: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    after_0:
    // 0x803ABC2C: lui         $a0, 0x803B
    ctx->r4 = S32(0X803B << 16);
    // 0x803ABC30: jal         0x80035FF0
    // 0x803ABC34: addiu       $a0, $a0, -0x2E00
    ctx->r4 = ADD32(ctx->r4, -0X2E00);
    func_80035FF0(rdram, ctx);
        goto after_1;
    // 0x803ABC34: addiu       $a0, $a0, -0x2E00
    ctx->r4 = ADD32(ctx->r4, -0X2E00);
    after_1:
    // 0x803ABC38: addiu       $a0, $zero, 0xF00
    ctx->r4 = ADD32(0, 0XF00);
    // 0x803ABC3C: addiu       $a1, $zero, 0x14
    ctx->r5 = ADD32(0, 0X14);
    // 0x803ABC40: jal         0x80049E40
    // 0x803ABC44: addiu       $a2, $zero, 0xF
    ctx->r6 = ADD32(0, 0XF);
    func_80049E40(rdram, ctx);
        goto after_2;
    // 0x803ABC44: addiu       $a2, $zero, 0xF
    ctx->r6 = ADD32(0, 0XF);
    after_2:
    // 0x803ABC48: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x803ABC4C: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    // 0x803ABC50: jal         0x80021214
    // 0x803ABC54: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_80021214(rdram, ctx);
        goto after_3;
    // 0x803ABC54: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_3:
    // 0x803ABC58: lui         $t6, 0x800B
    ctx->r14 = S32(0X800B << 16);
    // 0x803ABC5C: addiu       $t6, $t6, -0x6C9C
    ctx->r14 = ADD32(ctx->r14, -0X6C9C);
    // 0x803ABC60: lw          $at, 0x0($t6)
    ctx->r1 = MEM_W(ctx->r14, 0X0);
    // 0x803ABC64: lui         $a0, 0x801B
    ctx->r4 = S32(0X801B << 16);
    // 0x803ABC68: sw          $at, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r1;
    // 0x803ABC6C: lw          $a2, 0x4($t6)
    ctx->r6 = MEM_W(ctx->r14, 0X4);
    // 0x803ABC70: lw          $a1, 0x4($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X4);
    // 0x803ABC74: sw          $a2, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r6;
    // 0x803ABC78: lw          $a3, 0x8($t6)
    ctx->r7 = MEM_W(ctx->r14, 0X8);
    // 0x803ABC7C: lw          $a0, 0x1CF0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X1CF0);
    // 0x803ABC80: jal         0x8004B078
    // 0x803ABC84: sw          $a3, 0xC($sp)
    MEM_W(0XC, ctx->r29) = ctx->r7;
    func_8004B078(rdram, ctx);
        goto after_4;
    // 0x803ABC84: sw          $a3, 0xC($sp)
    MEM_W(0XC, ctx->r29) = ctx->r7;
    after_4:
    // 0x803ABC88: jal         0x803AC028
    // 0x803ABC8C: nop

    func_803AC028(rdram, ctx);
        goto after_5;
    // 0x803ABC8C: nop

    after_5:
    // 0x803ABC90: lui         $a0, 0x803B
    ctx->r4 = S32(0X803B << 16);
    // 0x803ABC94: jal         0x8002AAC0
    // 0x803ABC98: addiu       $a0, $a0, -0x2D54
    ctx->r4 = ADD32(ctx->r4, -0X2D54);
    func_8002AAC0(rdram, ctx);
        goto after_6;
    // 0x803ABC98: addiu       $a0, $a0, -0x2D54
    ctx->r4 = ADD32(ctx->r4, -0X2D54);
    after_6:
    // 0x803ABC9C: jal         0x803ABED4
    // 0x803ABCA0: nop

    func_803ABED4(rdram, ctx);
        goto after_7;
    // 0x803ABCA0: nop

    after_7:
    // 0x803ABCA4: jal         0x803ABFF8
    // 0x803ABCA8: nop

    func_803ABFF8(rdram, ctx);
        goto after_8;
    // 0x803ABCA8: nop

    after_8:
    // 0x803ABCAC: jal         0x8006FB58
    // 0x803ABCB0: nop

    func_8006FB58(rdram, ctx);
        goto after_9;
    // 0x803ABCB0: nop

    after_9:
    // 0x803ABCB4: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x803ABCB8: addiu       $v0, $v0, -0x30A0
    ctx->r2 = ADD32(ctx->r2, -0X30A0);
    // 0x803ABCBC: sb          $zero, 0x0($v0)
    MEM_B(0X0, ctx->r2) = 0;
    // 0x803ABCC0: lb          $t9, 0x0($v0)
    ctx->r25 = MEM_B(ctx->r2, 0X0);
    // 0x803ABCC4: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x803ABCC8: jal         0x80039CB4
    // 0x803ABCCC: sb          $t9, -0x3088($at)
    MEM_B(-0X3088, ctx->r1) = ctx->r25;
    func_80039CB4(rdram, ctx);
        goto after_10;
    // 0x803ABCCC: sb          $t9, -0x3088($at)
    MEM_B(-0X3088, ctx->r1) = ctx->r25;
    after_10:
    // 0x803ABCD0: jal         0x80039DF0
    // 0x803ABCD4: nop

    func_80039DF0(rdram, ctx);
        goto after_11;
    // 0x803ABCD4: nop

    after_11:
    // 0x803ABCD8: lui         $a0, 0x803B
    ctx->r4 = S32(0X803B << 16);
    // 0x803ABCDC: jal         0x80029354
    // 0x803ABCE0: addiu       $a0, $a0, -0x41AC
    ctx->r4 = ADD32(ctx->r4, -0X41AC);
    func_80029354(rdram, ctx);
        goto after_12;
    // 0x803ABCE0: addiu       $a0, $a0, -0x41AC
    ctx->r4 = ADD32(ctx->r4, -0X41AC);
    after_12:
    // 0x803ABCE4: jal         0x80035A04
    // 0x803ABCE8: nop

    func_80035A04(rdram, ctx);
        goto after_13;
    // 0x803ABCE8: nop

    after_13:
    // 0x803ABCEC: jal         0x80036278
    // 0x803ABCF0: nop

    func_80036278(rdram, ctx);
        goto after_14;
    // 0x803ABCF0: nop

    after_14:
    // 0x803ABCF4: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x803ABCF8: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x803ABCFC: jal         0x80038620
    // 0x803ABD00: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_80038620(rdram, ctx);
        goto after_15;
    // 0x803ABD00: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_15:
    // 0x803ABD04: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x803ABD08: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x803ABD0C: jal         0x80038620
    // 0x803ABD10: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_80038620(rdram, ctx);
        goto after_16;
    // 0x803ABD10: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_16:
    // 0x803ABD14: jal         0x80038AF0
    // 0x803ABD18: nop

    func_80038AF0(rdram, ctx);
        goto after_17;
    // 0x803ABD18: nop

    after_17:
    // 0x803ABD1C: jal         0x80038C10
    // 0x803ABD20: nop

    func_80038C10(rdram, ctx);
        goto after_18;
    // 0x803ABD20: nop

    after_18:
    // 0x803ABD24: lui         $a0, 0x803B
    ctx->r4 = S32(0X803B << 16);
    // 0x803ABD28: addiu       $a0, $a0, -0x42BC
    ctx->r4 = ADD32(ctx->r4, -0X42BC);
    // 0x803ABD2C: jal         0x8004A9B4
    // 0x803ABD30: addiu       $a1, $zero, 0xB
    ctx->r5 = ADD32(0, 0XB);
    func_8004A9B4(rdram, ctx);
        goto after_19;
    // 0x803ABD30: addiu       $a1, $zero, 0xB
    ctx->r5 = ADD32(0, 0XB);
    after_19:
    // 0x803ABD34: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x803ABD38: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x803ABD3C: jr          $ra
    // 0x803ABD40: nop

    return;
    // 0x803ABD40: nop

;}
RECOMP_FUNC void func_803ABD44(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803ABD44: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x803ABD48: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x803ABD4C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x803ABD50: jal         0x800357CC
    // 0x803ABD54: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    func_800357CC(rdram, ctx);
        goto after_0;
    // 0x803ABD54: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    after_0:
    // 0x803ABD58: lui         $t6, 0x8012
    ctx->r14 = S32(0X8012 << 16);
    // 0x803ABD5C: lw          $t6, -0x3250($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X3250);
    // 0x803ABD60: nop

    // 0x803ABD64: lhu         $a0, 0x0($t6)
    ctx->r4 = MEM_HU(ctx->r14, 0X0);
    // 0x803ABD68: jal         0x80035B2C
    // 0x803ABD6C: nop

    func_80035B2C(rdram, ctx);
        goto after_1;
    // 0x803ABD6C: nop

    after_1:
    // 0x803ABD70: sll         $t7, $v0, 2
    ctx->r15 = S32(ctx->r2 << 2);
    // 0x803ABD74: lui         $t9, 0x803B
    ctx->r25 = S32(0X803B << 16);
    // 0x803ABD78: addu        $t9, $t9, $t7
    ctx->r25 = ADD32(ctx->r25, ctx->r15);
    // 0x803ABD7C: lw          $t9, -0x2CF4($t9)
    ctx->r25 = MEM_W(ctx->r25, -0X2CF4);
    // 0x803ABD80: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x803ABD84: lw          $a1, 0x1C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X1C);
    // 0x803ABD88: jalr        $t9
    // 0x803ABD8C: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x803ABD8C: nop

    after_2:
    // 0x803ABD90: lw          $t8, 0x18($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X18);
    // 0x803ABD94: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x803ABD98: lh          $a0, 0x2C($t8)
    ctx->r4 = MEM_H(ctx->r24, 0X2C);
    // 0x803ABD9C: jal         0x8001D6EC
    // 0x803ABDA0: nop

    func_8001D6EC(rdram, ctx);
        goto after_3;
    // 0x803ABDA0: nop

    after_3:
    // 0x803ABDA4: lw          $t0, 0x18($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X18);
    // 0x803ABDA8: jal         0x800358D8
    // 0x803ABDAC: sh          $v0, 0x2C($t0)
    MEM_H(0X2C, ctx->r8) = ctx->r2;
    func_800358D8(rdram, ctx);
        goto after_4;
    // 0x803ABDAC: sh          $v0, 0x2C($t0)
    MEM_H(0X2C, ctx->r8) = ctx->r2;
    after_4:
    // 0x803ABDB0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x803ABDB4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x803ABDB8: jr          $ra
    // 0x803ABDBC: nop

    return;
    // 0x803ABDBC: nop

;}
RECOMP_FUNC void func_803ABDC0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803ABDC0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x803ABDC4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x803ABDC8: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x803ABDCC: jal         0x80035770
    // 0x803ABDD0: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    func_80035770(rdram, ctx);
        goto after_0;
    // 0x803ABDD0: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    after_0:
    // 0x803ABDD4: lw          $t6, 0x18($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X18);
    // 0x803ABDD8: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x803ABDDC: lh          $t7, 0x2C($t6)
    ctx->r15 = MEM_H(ctx->r14, 0X2C);
    // 0x803ABDE0: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x803ABDE4: jal         0x80037908
    // 0x803ABDE8: sb          $t7, -0x32A2($at)
    MEM_B(-0X32A2, ctx->r1) = ctx->r15;
    func_80037908(rdram, ctx);
        goto after_1;
    // 0x803ABDE8: sb          $t7, -0x32A2($at)
    MEM_B(-0X32A2, ctx->r1) = ctx->r15;
    after_1:
    // 0x803ABDEC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x803ABDF0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x803ABDF4: jr          $ra
    // 0x803ABDF8: nop

    return;
    // 0x803ABDF8: nop

;}
RECOMP_FUNC void func_803ABDFC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803ABDFC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x803ABE00: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x803ABE04: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x803ABE08: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x803ABE0C: jal         0x80037908
    // 0x803ABE10: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    func_80037908(rdram, ctx);
        goto after_0;
    // 0x803ABE10: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_0:
    // 0x803ABE14: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x803ABE18: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x803ABE1C: jr          $ra
    // 0x803ABE20: nop

    return;
    // 0x803ABE20: nop

;}
RECOMP_FUNC void func_803ABE24(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803ABE24: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    // 0x803ABE28: lh          $t6, 0x2C($a0)
    ctx->r14 = MEM_H(ctx->r4, 0X2C);
    // 0x803ABE2C: nop

    // 0x803ABE30: addiu       $t7, $t6, -0x1
    ctx->r15 = ADD32(ctx->r14, -0X1);
    // 0x803ABE34: jr          $ra
    // 0x803ABE38: sh          $t7, 0x2C($a0)
    MEM_H(0X2C, ctx->r4) = ctx->r15;
    return;
    // 0x803ABE38: sh          $t7, 0x2C($a0)
    MEM_H(0X2C, ctx->r4) = ctx->r15;
;}
RECOMP_FUNC void func_803ABE3C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803ABE3C: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    // 0x803ABE40: lh          $t6, 0x2C($a0)
    ctx->r14 = MEM_H(ctx->r4, 0X2C);
    // 0x803ABE44: nop

    // 0x803ABE48: addiu       $t7, $t6, 0x1
    ctx->r15 = ADD32(ctx->r14, 0X1);
    // 0x803ABE4C: jr          $ra
    // 0x803ABE50: sh          $t7, 0x2C($a0)
    MEM_H(0X2C, ctx->r4) = ctx->r15;
    return;
    // 0x803ABE50: sh          $t7, 0x2C($a0)
    MEM_H(0X2C, ctx->r4) = ctx->r15;
;}
RECOMP_FUNC void func_803ABE54(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803ABE54: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x803ABE58: lui         $t6, 0x801B
    ctx->r14 = S32(0X801B << 16);
    // 0x803ABE5C: lh          $t6, -0x6B0($t6)
    ctx->r14 = MEM_H(ctx->r14, -0X6B0);
    // 0x803ABE60: lui         $a3, 0x8028
    ctx->r7 = S32(0X8028 << 16);
    // 0x803ABE64: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x803ABE68: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x803ABE6C: addu        $a3, $a3, $t7
    ctx->r7 = ADD32(ctx->r7, ctx->r15);
    // 0x803ABE70: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x803ABE74: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x803ABE78: lw          $a3, 0x3A20($a3)
    ctx->r7 = MEM_W(ctx->r7, 0X3A20);
    // 0x803ABE7C: lui         $a0, 0x8011
    ctx->r4 = S32(0X8011 << 16);
    // 0x803ABE80: addiu       $t8, $zero, 0x1F
    ctx->r24 = ADD32(0, 0X1F);
    // 0x803ABE84: addiu       $t9, $zero, 0x4
    ctx->r25 = ADD32(0, 0X4);
    // 0x803ABE88: addiu       $t0, $zero, 0x4
    ctx->r8 = ADD32(0, 0X4);
    // 0x803ABE8C: addiu       $t1, $zero, 0x4
    ctx->r9 = ADD32(0, 0X4);
    // 0x803ABE90: sw          $t1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r9;
    // 0x803ABE94: sw          $t0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r8;
    // 0x803ABE98: sw          $t9, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r25;
    // 0x803ABE9C: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    // 0x803ABEA0: addiu       $a0, $a0, -0x3868
    ctx->r4 = ADD32(ctx->r4, -0X3868);
    // 0x803ABEA4: addiu       $a1, $zero, 0x28
    ctx->r5 = ADD32(0, 0X28);
    // 0x803ABEA8: jal         0x8002F528
    // 0x803ABEAC: addiu       $a2, $zero, 0x90
    ctx->r6 = ADD32(0, 0X90);
    func_8002F528(rdram, ctx);
        goto after_0;
    // 0x803ABEAC: addiu       $a2, $zero, 0x90
    ctx->r6 = ADD32(0, 0X90);
    after_0:
    // 0x803ABEB0: lw          $a0, 0x2C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X2C);
    // 0x803ABEB4: lui         $a1, 0x803B
    ctx->r5 = S32(0X803B << 16);
    // 0x803ABEB8: addiu       $a1, $a1, -0x2C9C
    ctx->r5 = ADD32(ctx->r5, -0X2C9C);
    // 0x803ABEBC: jal         0x8004A298
    // 0x803ABEC0: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_8004A298(rdram, ctx);
        goto after_1;
    // 0x803ABEC0: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_1:
    // 0x803ABEC4: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x803ABEC8: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x803ABECC: jr          $ra
    // 0x803ABED0: nop

    return;
    // 0x803ABED0: nop

;}
RECOMP_FUNC void func_803ABED4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803ABED4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x803ABED8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x803ABEDC: lui         $a1, 0x803E
    ctx->r5 = S32(0X803E << 16);
    // 0x803ABEE0: addiu       $a1, $a1, -0x1E70
    ctx->r5 = ADD32(ctx->r5, -0X1E70);
    // 0x803ABEE4: jal         0x8004C2C8
    // 0x803ABEE8: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    func_8004C2C8(rdram, ctx);
        goto after_0;
    // 0x803ABEE8: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_0:
    // 0x803ABEEC: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x803ABEF0: lbu         $a0, -0x326B($a0)
    ctx->r4 = MEM_BU(ctx->r4, -0X326B);
    // 0x803ABEF4: addiu       $a1, $zero, 0x48
    ctx->r5 = ADD32(0, 0X48);
    // 0x803ABEF8: jal         0x8004BA70
    // 0x803ABEFC: addiu       $a2, $zero, 0x20
    ctx->r6 = ADD32(0, 0X20);
    func_8004BA70(rdram, ctx);
        goto after_1;
    // 0x803ABEFC: addiu       $a2, $zero, 0x20
    ctx->r6 = ADD32(0, 0X20);
    after_1:
    // 0x803ABF00: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x803ABF04: addiu       $a1, $zero, 0x48
    ctx->r5 = ADD32(0, 0X48);
    // 0x803ABF08: jal         0x8004BB64
    // 0x803ABF0C: addiu       $a2, $zero, 0x20
    ctx->r6 = ADD32(0, 0X20);
    func_8004BB64(rdram, ctx);
        goto after_2;
    // 0x803ABF0C: addiu       $a2, $zero, 0x20
    ctx->r6 = ADD32(0, 0X20);
    after_2:
    // 0x803ABF10: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x803ABF14: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x803ABF18: jr          $ra
    // 0x803ABF1C: nop

    return;
    // 0x803ABF1C: nop

;}
RECOMP_FUNC void func_803ABF20(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803ABF20: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x803ABF24: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x803ABF28: lbu         $v0, 0x71($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X71);
    // 0x803ABF2C: lw          $t6, 0x8($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X8);
    // 0x803ABF30: lui         $t8, 0x803B
    ctx->r24 = S32(0X803B << 16);
    // 0x803ABF34: sll         $t7, $v0, 2
    ctx->r15 = S32(ctx->r2 << 2);
    // 0x803ABF38: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x803ABF3C: lw          $t8, -0x2CD8($t8)
    ctx->r24 = MEM_W(ctx->r24, -0X2CD8);
    // 0x803ABF40: lw          $v1, 0x8($t6)
    ctx->r3 = MEM_W(ctx->r14, 0X8);
    // 0x803ABF44: sw          $t8, 0x30($a1)
    MEM_W(0X30, ctx->r5) = ctx->r24;
    // 0x803ABF48: lh          $t9, 0x2C($v1)
    ctx->r25 = MEM_H(ctx->r3, 0X2C);
    // 0x803ABF4C: or          $a3, $a1, $zero
    ctx->r7 = ctx->r5 | 0;
    // 0x803ABF50: bne         $v0, $t9, L_803ABF70
    if (ctx->r2 != ctx->r25) {
        // 0x803ABF54: or          $a0, $a3, $zero
        ctx->r4 = ctx->r7 | 0;
            goto L_803ABF70;
    }
    // 0x803ABF54: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
    // 0x803ABF58: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    // 0x803ABF5C: addiu       $a1, $zero, 0x7
    ctx->r5 = ADD32(0, 0X7);
    // 0x803ABF60: jal         0x8002135C
    // 0x803ABF64: addiu       $a2, $zero, 0x6
    ctx->r6 = ADD32(0, 0X6);
    func_8002135C(rdram, ctx);
        goto after_0;
    // 0x803ABF64: addiu       $a2, $zero, 0x6
    ctx->r6 = ADD32(0, 0X6);
    after_0:
    // 0x803ABF68: b           L_803ABF80
    // 0x803ABF6C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_803ABF80;
    // 0x803ABF6C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_803ABF70:
    // 0x803ABF70: addiu       $a1, $zero, 0x7
    ctx->r5 = ADD32(0, 0X7);
    // 0x803ABF74: jal         0x8002135C
    // 0x803ABF78: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8002135C(rdram, ctx);
        goto after_1;
    // 0x803ABF78: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_1:
    // 0x803ABF7C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_803ABF80:
    // 0x803ABF80: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x803ABF84: jr          $ra
    // 0x803ABF88: nop

    return;
    // 0x803ABF88: nop

;}
RECOMP_FUNC void func_803ABF8C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803ABF8C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x803ABF90: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x803ABF94: lbu         $v0, 0x71($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X71);
    // 0x803ABF98: lw          $t6, 0x8($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X8);
    // 0x803ABF9C: lui         $t8, 0x803B
    ctx->r24 = S32(0X803B << 16);
    // 0x803ABFA0: sll         $t7, $v0, 2
    ctx->r15 = S32(ctx->r2 << 2);
    // 0x803ABFA4: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x803ABFA8: lw          $t8, -0x2CCC($t8)
    ctx->r24 = MEM_W(ctx->r24, -0X2CCC);
    // 0x803ABFAC: lw          $v1, 0x8($t6)
    ctx->r3 = MEM_W(ctx->r14, 0X8);
    // 0x803ABFB0: sw          $t8, 0x30($a1)
    MEM_W(0X30, ctx->r5) = ctx->r24;
    // 0x803ABFB4: lh          $t9, 0x2C($v1)
    ctx->r25 = MEM_H(ctx->r3, 0X2C);
    // 0x803ABFB8: or          $a3, $a1, $zero
    ctx->r7 = ctx->r5 | 0;
    // 0x803ABFBC: bne         $v0, $t9, L_803ABFDC
    if (ctx->r2 != ctx->r25) {
        // 0x803ABFC0: or          $a0, $a3, $zero
        ctx->r4 = ctx->r7 | 0;
            goto L_803ABFDC;
    }
    // 0x803ABFC0: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
    // 0x803ABFC4: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    // 0x803ABFC8: addiu       $a1, $zero, 0x7
    ctx->r5 = ADD32(0, 0X7);
    // 0x803ABFCC: jal         0x8002135C
    // 0x803ABFD0: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    func_8002135C(rdram, ctx);
        goto after_0;
    // 0x803ABFD0: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    after_0:
    // 0x803ABFD4: b           L_803ABFEC
    // 0x803ABFD8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_803ABFEC;
    // 0x803ABFD8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_803ABFDC:
    // 0x803ABFDC: addiu       $a1, $zero, 0x7
    ctx->r5 = ADD32(0, 0X7);
    // 0x803ABFE0: jal         0x8002135C
    // 0x803ABFE4: addiu       $a2, $zero, 0x16
    ctx->r6 = ADD32(0, 0X16);
    func_8002135C(rdram, ctx);
        goto after_1;
    // 0x803ABFE4: addiu       $a2, $zero, 0x16
    ctx->r6 = ADD32(0, 0X16);
    after_1:
    // 0x803ABFE8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_803ABFEC:
    // 0x803ABFEC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x803ABFF0: jr          $ra
    // 0x803ABFF4: nop

    return;
    // 0x803ABFF4: nop

;}
RECOMP_FUNC void func_803ABFF8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803ABFF8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x803ABFFC: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x803AC000: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x803AC004: lb          $a0, -0x326B($a0)
    ctx->r4 = MEM_B(ctx->r4, -0X326B);
    // 0x803AC008: addiu       $a1, $zero, 0x2A
    ctx->r5 = ADD32(0, 0X2A);
    // 0x803AC00C: addiu       $a2, $zero, 0x20
    ctx->r6 = ADD32(0, 0X20);
    // 0x803AC010: jal         0x80039F88
    // 0x803AC014: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    func_80039F88(rdram, ctx);
        goto after_0;
    // 0x803AC014: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_0:
    // 0x803AC018: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x803AC01C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x803AC020: jr          $ra
    // 0x803AC024: nop

    return;
    // 0x803AC024: nop

;}
RECOMP_FUNC void func_803AC028(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803AC028: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x803AC02C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x803AC030: jal         0x8004BD64
    // 0x803AC034: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    func_8004BD64(rdram, ctx);
        goto after_0;
    // 0x803AC034: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_0:
    // 0x803AC038: lui         $t6, 0x803B
    ctx->r14 = S32(0X803B << 16);
    // 0x803AC03C: addiu       $t6, $t6, -0x3FAC
    ctx->r14 = ADD32(ctx->r14, -0X3FAC);
    // 0x803AC040: sw          $t6, 0xC($v0)
    MEM_W(0XC, ctx->r2) = ctx->r14;
    // 0x803AC044: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x803AC048: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x803AC04C: jr          $ra
    // 0x803AC050: nop

    return;
    // 0x803AC050: nop

;}
RECOMP_FUNC void func_803AC054(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803AC054: lw          $v0, 0x8($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X8);
    // 0x803AC058: lui         $t8, 0x803B
    ctx->r24 = S32(0X803B << 16);
    // 0x803AC05C: lh          $t6, 0x2C($v0)
    ctx->r14 = MEM_H(ctx->r2, 0X2C);
    // 0x803AC060: nop

    // 0x803AC064: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x803AC068: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x803AC06C: lw          $t8, -0x2CC0($t8)
    ctx->r24 = MEM_W(ctx->r24, -0X2CC0);
    // 0x803AC070: jr          $ra
    // 0x803AC074: sw          $t8, 0x30($a1)
    MEM_W(0X30, ctx->r5) = ctx->r24;
    return;
    // 0x803AC074: sw          $t8, 0x30($a1)
    MEM_W(0X30, ctx->r5) = ctx->r24;
    // 0x803AC078: nop

    // 0x803AC07C: nop

;}
