#include "iss64_recomp.h"
#include "funcs.h"

RECOMP_FUNC void func_80035584(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80035584: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80035588: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8003558C: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x80035590: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x80035594: addiu       $a1, $zero, 0x14
    ctx->r5 = ADD32(0, 0X14);
    // 0x80035598: addiu       $a0, $zero, 0xF00
    ctx->r4 = ADD32(0, 0XF00);
    // 0x8003559C: jal         0x80049E40
    // 0x800355A0: addiu       $a2, $zero, 0xF
    ctx->r6 = ADD32(0, 0XF);
    func_80049E40(rdram, ctx);
        goto after_0;
    // 0x800355A0: addiu       $a2, $zero, 0xF
    ctx->r6 = ADD32(0, 0XF);
    after_0:
    // 0x800355A4: lui         $a0, 0x8004
    ctx->r4 = S32(0X8004 << 16);
    // 0x800355A8: jal         0x80029220
    // 0x800355AC: addiu       $a0, $a0, -0x59F0
    ctx->r4 = ADD32(ctx->r4, -0X59F0);
    func_80029220(rdram, ctx);
        goto after_1;
    // 0x800355AC: addiu       $a0, $a0, -0x59F0
    ctx->r4 = ADD32(ctx->r4, -0X59F0);
    after_1:
    // 0x800355B0: lui         $a0, 0x8004
    ctx->r4 = S32(0X8004 << 16);
    // 0x800355B4: addiu       $a0, $a0, 0x6D28
    ctx->r4 = ADD32(ctx->r4, 0X6D28);
    // 0x800355B8: jal         0x80029220
    // 0x800355BC: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_80029220(rdram, ctx);
        goto after_2;
    // 0x800355BC: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_2:
    // 0x800355C0: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x800355C4: jal         0x80029220
    // 0x800355C8: sh          $zero, 0x26($v0)
    MEM_H(0X26, ctx->r2) = 0;
    func_80029220(rdram, ctx);
        goto after_3;
    // 0x800355C8: sh          $zero, 0x26($v0)
    MEM_H(0X26, ctx->r2) = 0;
    after_3:
    // 0x800355CC: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x800355D0: lui         $a0, 0x8003
    ctx->r4 = S32(0X8003 << 16);
    // 0x800355D4: sh          $t6, 0x26($v0)
    MEM_H(0X26, ctx->r2) = ctx->r14;
    // 0x800355D8: jal         0x800296E0
    // 0x800355DC: addiu       $a0, $a0, 0x55F0
    ctx->r4 = ADD32(ctx->r4, 0X55F0);
    func_800296E0(rdram, ctx);
        goto after_4;
    // 0x800355DC: addiu       $a0, $a0, 0x55F0
    ctx->r4 = ADD32(ctx->r4, 0X55F0);
    after_4:
    // 0x800355E0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800355E4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x800355E8: jr          $ra
    // 0x800355EC: nop

    return;
    // 0x800355EC: nop

;}
RECOMP_FUNC void func_800355F0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800355F0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800355F4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800355F8: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x800355FC: jal         0x80049F80
    // 0x80035600: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    func_80049F80(rdram, ctx);
        goto after_0;
    // 0x80035600: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    after_0:
    // 0x80035604: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80035608: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8003560C: jr          $ra
    // 0x80035610: nop

    return;
    // 0x80035610: nop

;}
RECOMP_FUNC void func_80035614(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80035614: lui         $t7, 0x8012
    ctx->r15 = S32(0X8012 << 16);
    // 0x80035618: lb          $t7, -0x326C($t7)
    ctx->r15 = MEM_B(ctx->r15, -0X326C);
    // 0x8003561C: lui         $t9, 0x8011
    ctx->r25 = S32(0X8011 << 16);
    // 0x80035620: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x80035624: subu        $t8, $t8, $t7
    ctx->r24 = SUB32(ctx->r24, ctx->r15);
    // 0x80035628: sll         $t8, $t8, 3
    ctx->r24 = S32(ctx->r24 << 3);
    // 0x8003562C: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x80035630: lhu         $t9, -0x3068($t9)
    ctx->r25 = MEM_HU(ctx->r25, -0X3068);
    // 0x80035634: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80035638: and         $v0, $t9, $a0
    ctx->r2 = ctx->r25 & ctx->r4;
    // 0x8003563C: andi        $t0, $v0, 0xFFFF
    ctx->r8 = ctx->r2 & 0XFFFF;
    // 0x80035640: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80035644: beq         $t0, $zero, L_80035670
    if (ctx->r8 == 0) {
        // 0x80035648: sw          $a0, 0x18($sp)
        MEM_W(0X18, ctx->r29) = ctx->r4;
            goto L_80035670;
    }
    // 0x80035648: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8003564C: andi        $t1, $t0, 0x8000
    ctx->r9 = ctx->r8 & 0X8000;
    // 0x80035650: beq         $t1, $zero, L_80035668
    if (ctx->r9 == 0) {
        // 0x80035654: nop
    
            goto L_80035668;
    }
    // 0x80035654: nop

    // 0x80035658: jal         0x80035770
    // 0x8003565C: nop

    func_80035770(rdram, ctx);
        goto after_0;
    // 0x8003565C: nop

    after_0:
    // 0x80035660: b           L_80035674
    // 0x80035664: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80035674;
    // 0x80035664: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80035668:
    // 0x80035668: jal         0x80035734
    // 0x8003566C: nop

    func_80035734(rdram, ctx);
        goto after_1;
    // 0x8003566C: nop

    after_1:
L_80035670:
    // 0x80035670: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80035674:
    // 0x80035674: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80035678: jr          $ra
    // 0x8003567C: nop

    return;
    // 0x8003567C: nop

;}
RECOMP_FUNC void func_80035680(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80035680: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80035684: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x80035688: andi        $a1, $a0, 0xFFFF
    ctx->r5 = ctx->r4 & 0XFFFF;
    // 0x8003568C: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x80035690: lb          $a0, -0x326C($a0)
    ctx->r4 = MEM_B(ctx->r4, -0X326C);
    // 0x80035694: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80035698: andi        $t6, $a0, 0xFFFF
    ctx->r14 = ctx->r4 & 0XFFFF;
    // 0x8003569C: jal         0x800356B4
    // 0x800356A0: or          $a0, $t6, $zero
    ctx->r4 = ctx->r14 | 0;
    func_800356B4(rdram, ctx);
        goto after_0;
    // 0x800356A0: or          $a0, $t6, $zero
    ctx->r4 = ctx->r14 | 0;
    after_0:
    // 0x800356A4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800356A8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800356AC: jr          $ra
    // 0x800356B0: nop

    return;
    // 0x800356B0: nop

;}
RECOMP_FUNC void func_800356B4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800356B4: andi        $t6, $a0, 0xFFFF
    ctx->r14 = ctx->r4 & 0XFFFF;
    // 0x800356B8: sll         $t8, $t6, 2
    ctx->r24 = S32(ctx->r14 << 2);
    // 0x800356BC: subu        $t8, $t8, $t6
    ctx->r24 = SUB32(ctx->r24, ctx->r14);
    // 0x800356C0: sll         $t8, $t8, 3
    ctx->r24 = S32(ctx->r24 << 3);
    // 0x800356C4: lui         $at, 0x3
    ctx->r1 = S32(0X3 << 16);
    // 0x800356C8: lui         $t0, 0x800E
    ctx->r8 = S32(0X800E << 16);
    // 0x800356CC: addiu       $t0, $t0, -0x3770
    ctx->r8 = ADD32(ctx->r8, -0X3770);
    // 0x800356D0: addu        $t9, $t8, $at
    ctx->r25 = ADD32(ctx->r24, ctx->r1);
    // 0x800356D4: addu        $v1, $t9, $t0
    ctx->r3 = ADD32(ctx->r25, ctx->r8);
    // 0x800356D8: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x800356DC: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    // 0x800356E0: sh          $a1, 0x708($v1)
    MEM_H(0X708, ctx->r3) = ctx->r5;
    // 0x800356E4: jr          $ra
    // 0x800356E8: andi        $v0, $a1, 0xFFFF
    ctx->r2 = ctx->r5 & 0XFFFF;
    return;
    // 0x800356E8: andi        $v0, $a1, 0xFFFF
    ctx->r2 = ctx->r5 & 0XFFFF;
;}
RECOMP_FUNC void func_800356EC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800356EC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800356F0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800356F4: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x800356F8: jal         0x800356B4
    // 0x800356FC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_800356B4(rdram, ctx);
        goto after_0;
    // 0x800356FC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_0:
    // 0x80035700: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x80035704: jal         0x800356B4
    // 0x80035708: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_800356B4(rdram, ctx);
        goto after_1;
    // 0x80035708: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_1:
    // 0x8003570C: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    // 0x80035710: jal         0x800356B4
    // 0x80035714: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_800356B4(rdram, ctx);
        goto after_2;
    // 0x80035714: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_2:
    // 0x80035718: addiu       $a0, $zero, 0x3
    ctx->r4 = ADD32(0, 0X3);
    // 0x8003571C: jal         0x800356B4
    // 0x80035720: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_800356B4(rdram, ctx);
        goto after_3;
    // 0x80035720: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_3:
    // 0x80035724: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80035728: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8003572C: jr          $ra
    // 0x80035730: nop

    return;
    // 0x80035730: nop

;}
RECOMP_FUNC void func_80035734(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80035734: lui         $t6, 0x8012
    ctx->r14 = S32(0X8012 << 16);
    // 0x80035738: lbu         $t6, -0x326D($t6)
    ctx->r14 = MEM_BU(ctx->r14, -0X326D);
    // 0x8003573C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80035740: bne         $t6, $zero, L_80035758
    if (ctx->r14 != 0) {
        // 0x80035744: sw          $ra, 0x14($sp)
        MEM_W(0X14, ctx->r29) = ctx->r31;
            goto L_80035758;
    }
    // 0x80035744: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80035748: jal         0x80015BC0
    // 0x8003574C: addiu       $a0, $zero, 0x354
    ctx->r4 = ADD32(0, 0X354);
    func_80015BC0(rdram, ctx);
        goto after_0;
    // 0x8003574C: addiu       $a0, $zero, 0x354
    ctx->r4 = ADD32(0, 0X354);
    after_0:
    // 0x80035750: b           L_80035764
    // 0x80035754: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80035764;
    // 0x80035754: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80035758:
    // 0x80035758: jal         0x80015BC0
    // 0x8003575C: addiu       $a0, $zero, 0x355
    ctx->r4 = ADD32(0, 0X355);
    func_80015BC0(rdram, ctx);
        goto after_1;
    // 0x8003575C: addiu       $a0, $zero, 0x355
    ctx->r4 = ADD32(0, 0X355);
    after_1:
    // 0x80035760: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80035764:
    // 0x80035764: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80035768: jr          $ra
    // 0x8003576C: nop

    return;
    // 0x8003576C: nop

;}
RECOMP_FUNC void func_80035770(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80035770: lui         $t6, 0x8012
    ctx->r14 = S32(0X8012 << 16);
    // 0x80035774: lbu         $t6, -0x326D($t6)
    ctx->r14 = MEM_BU(ctx->r14, -0X326D);
    // 0x80035778: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8003577C: bne         $t6, $zero, L_80035794
    if (ctx->r14 != 0) {
        // 0x80035780: sw          $ra, 0x14($sp)
        MEM_W(0X14, ctx->r29) = ctx->r31;
            goto L_80035794;
    }
    // 0x80035780: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80035784: jal         0x80015BC0
    // 0x80035788: addiu       $a0, $zero, 0x126
    ctx->r4 = ADD32(0, 0X126);
    func_80015BC0(rdram, ctx);
        goto after_0;
    // 0x80035788: addiu       $a0, $zero, 0x126
    ctx->r4 = ADD32(0, 0X126);
    after_0:
    // 0x8003578C: b           L_800357A0
    // 0x80035790: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_800357A0;
    // 0x80035790: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80035794:
    // 0x80035794: jal         0x80015BC0
    // 0x80035798: addiu       $a0, $zero, 0x356
    ctx->r4 = ADD32(0, 0X356);
    func_80015BC0(rdram, ctx);
        goto after_1;
    // 0x80035798: addiu       $a0, $zero, 0x356
    ctx->r4 = ADD32(0, 0X356);
    after_1:
    // 0x8003579C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_800357A0:
    // 0x800357A0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800357A4: jr          $ra
    // 0x800357A8: nop

    return;
    // 0x800357A8: nop

;}
RECOMP_FUNC void func_800357AC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800357AC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800357B0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800357B4: jal         0x80015BC0
    // 0x800357B8: addiu       $a0, $zero, 0x127
    ctx->r4 = ADD32(0, 0X127);
    func_80015BC0(rdram, ctx);
        goto after_0;
    // 0x800357B8: addiu       $a0, $zero, 0x127
    ctx->r4 = ADD32(0, 0X127);
    after_0:
    // 0x800357BC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800357C0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800357C4: jr          $ra
    // 0x800357C8: nop

    return;
    // 0x800357C8: nop

;}
RECOMP_FUNC void func_800357CC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800357CC: lui         $v1, 0x801B
    ctx->r3 = S32(0X801B << 16);
    // 0x800357D0: addiu       $v1, $v1, 0x1CF0
    ctx->r3 = ADD32(ctx->r3, 0X1CF0);
    // 0x800357D4: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x800357D8: nop

    // 0x800357DC: lh          $t6, 0x50($v0)
    ctx->r14 = MEM_H(ctx->r2, 0X50);
    // 0x800357E0: nop

    // 0x800357E4: sb          $t6, 0x54($v0)
    MEM_B(0X54, ctx->r2) = ctx->r14;
    // 0x800357E8: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x800357EC: nop

    // 0x800357F0: lh          $t7, 0x26($v0)
    ctx->r15 = MEM_H(ctx->r2, 0X26);
    // 0x800357F4: nop

    // 0x800357F8: sb          $t7, 0x55($v0)
    MEM_B(0X55, ctx->r2) = ctx->r15;
    // 0x800357FC: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x80035800: nop

    // 0x80035804: lh          $t8, 0x2C($v0)
    ctx->r24 = MEM_H(ctx->r2, 0X2C);
    // 0x80035808: nop

    // 0x8003580C: sb          $t8, 0x56($v0)
    MEM_B(0X56, ctx->r2) = ctx->r24;
    // 0x80035810: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x80035814: nop

    // 0x80035818: lh          $t9, 0x2E($v0)
    ctx->r25 = MEM_H(ctx->r2, 0X2E);
    // 0x8003581C: nop

    // 0x80035820: sb          $t9, 0x57($v0)
    MEM_B(0X57, ctx->r2) = ctx->r25;
    // 0x80035824: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x80035828: nop

    // 0x8003582C: lh          $t0, 0x28($v0)
    ctx->r8 = MEM_H(ctx->r2, 0X28);
    // 0x80035830: nop

    // 0x80035834: sb          $t0, 0x58($v0)
    MEM_B(0X58, ctx->r2) = ctx->r8;
    // 0x80035838: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x8003583C: nop

    // 0x80035840: lh          $t1, 0x2A($v0)
    ctx->r9 = MEM_H(ctx->r2, 0X2A);
    // 0x80035844: nop

    // 0x80035848: sb          $t1, 0x59($v0)
    MEM_B(0X59, ctx->r2) = ctx->r9;
    // 0x8003584C: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x80035850: nop

    // 0x80035854: lh          $t2, 0x24($v0)
    ctx->r10 = MEM_H(ctx->r2, 0X24);
    // 0x80035858: jr          $ra
    // 0x8003585C: sb          $t2, 0x5A($v0)
    MEM_B(0X5A, ctx->r2) = ctx->r10;
    return;
    // 0x8003585C: sb          $t2, 0x5A($v0)
    MEM_B(0X5A, ctx->r2) = ctx->r10;
;}
RECOMP_FUNC void func_80035860(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80035860: lui         $v0, 0x801B
    ctx->r2 = S32(0X801B << 16);
    // 0x80035864: lw          $v0, 0x1CF0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X1CF0);
    // 0x80035868: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8003586C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80035870: lh          $t7, 0x50($v0)
    ctx->r15 = MEM_H(ctx->r2, 0X50);
    // 0x80035874: lb          $t6, 0x54($v0)
    ctx->r14 = MEM_B(ctx->r2, 0X54);
    // 0x80035878: nop

    // 0x8003587C: bne         $t6, $t7, L_800358C0
    if (ctx->r14 != ctx->r15) {
        // 0x80035880: nop
    
            goto L_800358C0;
    }
    // 0x80035880: nop

    // 0x80035884: lb          $t8, 0x55($v0)
    ctx->r24 = MEM_B(ctx->r2, 0X55);
    // 0x80035888: lh          $t9, 0x26($v0)
    ctx->r25 = MEM_H(ctx->r2, 0X26);
    // 0x8003588C: nop

    // 0x80035890: bne         $t8, $t9, L_800358C0
    if (ctx->r24 != ctx->r25) {
        // 0x80035894: nop
    
            goto L_800358C0;
    }
    // 0x80035894: nop

    // 0x80035898: lb          $t0, 0x56($v0)
    ctx->r8 = MEM_B(ctx->r2, 0X56);
    // 0x8003589C: lh          $t1, 0x2C($v0)
    ctx->r9 = MEM_H(ctx->r2, 0X2C);
    // 0x800358A0: nop

    // 0x800358A4: bne         $t0, $t1, L_800358C0
    if (ctx->r8 != ctx->r9) {
        // 0x800358A8: nop
    
            goto L_800358C0;
    }
    // 0x800358A8: nop

    // 0x800358AC: lb          $t2, 0x57($v0)
    ctx->r10 = MEM_B(ctx->r2, 0X57);
    // 0x800358B0: lh          $t3, 0x2E($v0)
    ctx->r11 = MEM_H(ctx->r2, 0X2E);
    // 0x800358B4: nop

    // 0x800358B8: beq         $t2, $t3, L_800358CC
    if (ctx->r10 == ctx->r11) {
        // 0x800358BC: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_800358CC;
    }
    // 0x800358BC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_800358C0:
    // 0x800358C0: jal         0x80035734
    // 0x800358C4: nop

    func_80035734(rdram, ctx);
        goto after_0;
    // 0x800358C4: nop

    after_0:
    // 0x800358C8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_800358CC:
    // 0x800358CC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800358D0: jr          $ra
    // 0x800358D4: nop

    return;
    // 0x800358D4: nop

;}
RECOMP_FUNC void func_800358D8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800358D8: lui         $v0, 0x801B
    ctx->r2 = S32(0X801B << 16);
    // 0x800358DC: lw          $v0, 0x1CF0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X1CF0);
    // 0x800358E0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800358E4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800358E8: lh          $t7, 0x50($v0)
    ctx->r15 = MEM_H(ctx->r2, 0X50);
    // 0x800358EC: lb          $t6, 0x54($v0)
    ctx->r14 = MEM_B(ctx->r2, 0X54);
    // 0x800358F0: nop

    // 0x800358F4: bne         $t6, $t7, L_80035910
    if (ctx->r14 != ctx->r15) {
        // 0x800358F8: nop
    
            goto L_80035910;
    }
    // 0x800358F8: nop

    // 0x800358FC: lb          $t8, 0x56($v0)
    ctx->r24 = MEM_B(ctx->r2, 0X56);
    // 0x80035900: lh          $t9, 0x2C($v0)
    ctx->r25 = MEM_H(ctx->r2, 0X2C);
    // 0x80035904: nop

    // 0x80035908: beq         $t8, $t9, L_8003591C
    if (ctx->r24 == ctx->r25) {
        // 0x8003590C: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_8003591C;
    }
    // 0x8003590C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80035910:
    // 0x80035910: jal         0x80035734
    // 0x80035914: nop

    func_80035734(rdram, ctx);
        goto after_0;
    // 0x80035914: nop

    after_0:
    // 0x80035918: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8003591C:
    // 0x8003591C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80035920: jr          $ra
    // 0x80035924: nop

    return;
    // 0x80035924: nop

;}
RECOMP_FUNC void func_80035928(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80035928: lui         $v0, 0x801B
    ctx->r2 = S32(0X801B << 16);
    // 0x8003592C: lw          $v0, 0x1CF0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X1CF0);
    // 0x80035930: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80035934: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80035938: lh          $t7, 0x50($v0)
    ctx->r15 = MEM_H(ctx->r2, 0X50);
    // 0x8003593C: lb          $t6, 0x54($v0)
    ctx->r14 = MEM_B(ctx->r2, 0X54);
    // 0x80035940: nop

    // 0x80035944: bne         $t6, $t7, L_8003599C
    if (ctx->r14 != ctx->r15) {
        // 0x80035948: nop
    
            goto L_8003599C;
    }
    // 0x80035948: nop

    // 0x8003594C: lb          $t8, 0x55($v0)
    ctx->r24 = MEM_B(ctx->r2, 0X55);
    // 0x80035950: lh          $t9, 0x26($v0)
    ctx->r25 = MEM_H(ctx->r2, 0X26);
    // 0x80035954: nop

    // 0x80035958: bne         $t8, $t9, L_8003599C
    if (ctx->r24 != ctx->r25) {
        // 0x8003595C: nop
    
            goto L_8003599C;
    }
    // 0x8003595C: nop

    // 0x80035960: lb          $t0, 0x56($v0)
    ctx->r8 = MEM_B(ctx->r2, 0X56);
    // 0x80035964: lh          $t1, 0x2C($v0)
    ctx->r9 = MEM_H(ctx->r2, 0X2C);
    // 0x80035968: nop

    // 0x8003596C: bne         $t0, $t1, L_8003599C
    if (ctx->r8 != ctx->r9) {
        // 0x80035970: nop
    
            goto L_8003599C;
    }
    // 0x80035970: nop

    // 0x80035974: lb          $t2, 0x57($v0)
    ctx->r10 = MEM_B(ctx->r2, 0X57);
    // 0x80035978: lh          $t3, 0x2E($v0)
    ctx->r11 = MEM_H(ctx->r2, 0X2E);
    // 0x8003597C: nop

    // 0x80035980: bne         $t2, $t3, L_8003599C
    if (ctx->r10 != ctx->r11) {
        // 0x80035984: nop
    
            goto L_8003599C;
    }
    // 0x80035984: nop

    // 0x80035988: lb          $t4, 0x58($v0)
    ctx->r12 = MEM_B(ctx->r2, 0X58);
    // 0x8003598C: lh          $t5, 0x28($v0)
    ctx->r13 = MEM_H(ctx->r2, 0X28);
    // 0x80035990: nop

    // 0x80035994: beq         $t4, $t5, L_800359A8
    if (ctx->r12 == ctx->r13) {
        // 0x80035998: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_800359A8;
    }
    // 0x80035998: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8003599C:
    // 0x8003599C: jal         0x80035734
    // 0x800359A0: nop

    func_80035734(rdram, ctx);
        goto after_0;
    // 0x800359A0: nop

    after_0:
    // 0x800359A4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_800359A8:
    // 0x800359A8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800359AC: jr          $ra
    // 0x800359B0: nop

    return;
    // 0x800359B0: nop

;}
RECOMP_FUNC void func_800359B4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800359B4: lui         $v0, 0x801B
    ctx->r2 = S32(0X801B << 16);
    // 0x800359B8: lw          $v0, 0x1CF0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X1CF0);
    // 0x800359BC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800359C0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800359C4: lh          $t7, 0x26($v0)
    ctx->r15 = MEM_H(ctx->r2, 0X26);
    // 0x800359C8: lb          $t6, 0x55($v0)
    ctx->r14 = MEM_B(ctx->r2, 0X55);
    // 0x800359CC: nop

    // 0x800359D0: bne         $t6, $t7, L_800359EC
    if (ctx->r14 != ctx->r15) {
        // 0x800359D4: nop
    
            goto L_800359EC;
    }
    // 0x800359D4: nop

    // 0x800359D8: lb          $t8, 0x56($v0)
    ctx->r24 = MEM_B(ctx->r2, 0X56);
    // 0x800359DC: lh          $t9, 0x2C($v0)
    ctx->r25 = MEM_H(ctx->r2, 0X2C);
    // 0x800359E0: nop

    // 0x800359E4: beq         $t8, $t9, L_800359F8
    if (ctx->r24 == ctx->r25) {
        // 0x800359E8: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_800359F8;
    }
    // 0x800359E8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_800359EC:
    // 0x800359EC: jal         0x80035734
    // 0x800359F0: nop

    func_80035734(rdram, ctx);
        goto after_0;
    // 0x800359F0: nop

    after_0:
    // 0x800359F4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_800359F8:
    // 0x800359F8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800359FC: jr          $ra
    // 0x80035A00: nop

    return;
    // 0x80035A00: nop

;}
RECOMP_FUNC void func_80035A04(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80035A04: lui         $t6, 0x8012
    ctx->r14 = S32(0X8012 << 16);
    // 0x80035A08: lbu         $t6, -0x3271($t6)
    ctx->r14 = MEM_BU(ctx->r14, -0X3271);
    // 0x80035A0C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80035A10: bne         $t6, $zero, L_80035A2C
    if (ctx->r14 != 0) {
        // 0x80035A14: sw          $ra, 0x14($sp)
        MEM_W(0X14, ctx->r29) = ctx->r31;
            goto L_80035A2C;
    }
    // 0x80035A14: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80035A18: jal         0x80015BC0
    // 0x80035A1C: addiu       $a0, $zero, 0x1C
    ctx->r4 = ADD32(0, 0X1C);
    func_80015BC0(rdram, ctx);
        goto after_0;
    // 0x80035A1C: addiu       $a0, $zero, 0x1C
    ctx->r4 = ADD32(0, 0X1C);
    after_0:
    // 0x80035A20: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x80035A24: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x80035A28: sb          $t7, -0x3271($at)
    MEM_B(-0X3271, ctx->r1) = ctx->r15;
L_80035A2C:
    // 0x80035A2C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80035A30: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80035A34: jr          $ra
    // 0x80035A38: nop

    return;
    // 0x80035A38: nop

;}
RECOMP_FUNC void func_80035A3C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80035A3C: lui         $t6, 0x8012
    ctx->r14 = S32(0X8012 << 16);
    // 0x80035A40: lbu         $t6, -0x3271($t6)
    ctx->r14 = MEM_BU(ctx->r14, -0X3271);
    // 0x80035A44: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80035A48: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80035A4C: bne         $t6, $at, L_80035A64
    if (ctx->r14 != ctx->r1) {
        // 0x80035A50: sw          $ra, 0x14($sp)
        MEM_W(0X14, ctx->r29) = ctx->r31;
            goto L_80035A64;
    }
    // 0x80035A50: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80035A54: jal         0x80015BC0
    // 0x80035A58: addiu       $a0, $zero, 0x7
    ctx->r4 = ADD32(0, 0X7);
    func_80015BC0(rdram, ctx);
        goto after_0;
    // 0x80035A58: addiu       $a0, $zero, 0x7
    ctx->r4 = ADD32(0, 0X7);
    after_0:
    // 0x80035A5C: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x80035A60: sb          $zero, -0x3271($at)
    MEM_B(-0X3271, ctx->r1) = 0;
L_80035A64:
    // 0x80035A64: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80035A68: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80035A6C: jr          $ra
    // 0x80035A70: nop

    return;
    // 0x80035A70: nop

;}
RECOMP_FUNC void func_80035A74(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80035A74: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x80035A78: addiu       $v0, $v0, -0x32B0
    ctx->r2 = ADD32(ctx->r2, -0X32B0);
    // 0x80035A7C: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x80035A80: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    // 0x80035A84: sb          $a0, 0x40($v0)
    MEM_B(0X40, ctx->r2) = ctx->r4;
    // 0x80035A88: jr          $ra
    // 0x80035A8C: sb          $a1, 0x41($v0)
    MEM_B(0X41, ctx->r2) = ctx->r5;
    return;
    // 0x80035A8C: sb          $a1, 0x41($v0)
    MEM_B(0X41, ctx->r2) = ctx->r5;
;}
RECOMP_FUNC void func_80035A90(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80035A90: lui         $t6, 0x8012
    ctx->r14 = S32(0X8012 << 16);
    // 0x80035A94: lbu         $t6, -0x326E($t6)
    ctx->r14 = MEM_BU(ctx->r14, -0X326E);
    // 0x80035A98: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80035A9C: bne         $t6, $zero, L_80035AE4
    if (ctx->r14 != 0) {
        // 0x80035AA0: sw          $ra, 0x14($sp)
        MEM_W(0X14, ctx->r29) = ctx->r31;
            goto L_80035AE4;
    }
    // 0x80035AA0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80035AA4: jal         0x80015BC0
    // 0x80035AA8: addiu       $a0, $zero, 0x200
    ctx->r4 = ADD32(0, 0X200);
    func_80015BC0(rdram, ctx);
        goto after_0;
    // 0x80035AA8: addiu       $a0, $zero, 0x200
    ctx->r4 = ADD32(0, 0X200);
    after_0:
    // 0x80035AAC: jal         0x80015BC0
    // 0x80035AB0: addiu       $a0, $zero, 0x201
    ctx->r4 = ADD32(0, 0X201);
    func_80015BC0(rdram, ctx);
        goto after_1;
    // 0x80035AB0: addiu       $a0, $zero, 0x201
    ctx->r4 = ADD32(0, 0X201);
    after_1:
    // 0x80035AB4: jal         0x80015BC0
    // 0x80035AB8: addiu       $a0, $zero, 0x202
    ctx->r4 = ADD32(0, 0X202);
    func_80015BC0(rdram, ctx);
        goto after_2;
    // 0x80035AB8: addiu       $a0, $zero, 0x202
    ctx->r4 = ADD32(0, 0X202);
    after_2:
    // 0x80035ABC: jal         0x80015BC0
    // 0x80035AC0: addiu       $a0, $zero, 0x203
    ctx->r4 = ADD32(0, 0X203);
    func_80015BC0(rdram, ctx);
        goto after_3;
    // 0x80035AC0: addiu       $a0, $zero, 0x203
    ctx->r4 = ADD32(0, 0X203);
    after_3:
    // 0x80035AC4: lui         $v0, 0x802C
    ctx->r2 = S32(0X802C << 16);
    // 0x80035AC8: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x80035ACC: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x80035AD0: addiu       $v0, $v0, 0x38C8
    ctx->r2 = ADD32(ctx->r2, 0X38C8);
    // 0x80035AD4: addiu       $v1, $zero, 0x40
    ctx->r3 = ADD32(0, 0X40);
    // 0x80035AD8: sb          $t7, -0x326E($at)
    MEM_B(-0X326E, ctx->r1) = ctx->r15;
    // 0x80035ADC: sh          $v1, 0x0($v0)
    MEM_H(0X0, ctx->r2) = ctx->r3;
    // 0x80035AE0: sh          $v1, 0x2($v0)
    MEM_H(0X2, ctx->r2) = ctx->r3;
L_80035AE4:
    // 0x80035AE4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80035AE8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80035AEC: jr          $ra
    // 0x80035AF0: nop

    return;
    // 0x80035AF0: nop

;}
RECOMP_FUNC void func_80035AF4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80035AF4: lui         $t6, 0x8012
    ctx->r14 = S32(0X8012 << 16);
    // 0x80035AF8: lbu         $t6, -0x326E($t6)
    ctx->r14 = MEM_BU(ctx->r14, -0X326E);
    // 0x80035AFC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80035B00: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80035B04: bne         $t6, $at, L_80035B1C
    if (ctx->r14 != ctx->r1) {
        // 0x80035B08: sw          $ra, 0x14($sp)
        MEM_W(0X14, ctx->r29) = ctx->r31;
            goto L_80035B1C;
    }
    // 0x80035B08: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80035B0C: jal         0x80015BC0
    // 0x80035B10: addiu       $a0, $zero, 0xA
    ctx->r4 = ADD32(0, 0XA);
    func_80015BC0(rdram, ctx);
        goto after_0;
    // 0x80035B10: addiu       $a0, $zero, 0xA
    ctx->r4 = ADD32(0, 0XA);
    after_0:
    // 0x80035B14: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x80035B18: sb          $zero, -0x326E($at)
    MEM_B(-0X326E, ctx->r1) = 0;
L_80035B1C:
    // 0x80035B1C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80035B20: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80035B24: jr          $ra
    // 0x80035B28: nop

    return;
    // 0x80035B28: nop

;}
RECOMP_FUNC void func_80035B2C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80035B2C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80035B30: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x80035B34: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80035B38: lhu         $a0, 0x1A($sp)
    ctx->r4 = MEM_HU(ctx->r29, 0X1A);
    // 0x80035B3C: jal         0x80035614
    // 0x80035B40: nop

    func_80035614(rdram, ctx);
        goto after_0;
    // 0x80035B40: nop

    after_0:
    // 0x80035B44: lhu         $v0, 0x1A($sp)
    ctx->r2 = MEM_HU(ctx->r29, 0X1A);
    // 0x80035B48: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80035B4C: andi        $t6, $v0, 0x8000
    ctx->r14 = ctx->r2 & 0X8000;
    // 0x80035B50: beq         $t6, $zero, L_80035B60
    if (ctx->r14 == 0) {
        // 0x80035B54: andi        $t7, $v0, 0x4000
        ctx->r15 = ctx->r2 & 0X4000;
            goto L_80035B60;
    }
    // 0x80035B54: andi        $t7, $v0, 0x4000
    ctx->r15 = ctx->r2 & 0X4000;
    // 0x80035B58: b           L_80035BB0
    // 0x80035B5C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_80035BB0;
    // 0x80035B5C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_80035B60:
    // 0x80035B60: beq         $t7, $zero, L_80035B70
    if (ctx->r15 == 0) {
        // 0x80035B64: andi        $t8, $v0, 0x800
        ctx->r24 = ctx->r2 & 0X800;
            goto L_80035B70;
    }
    // 0x80035B64: andi        $t8, $v0, 0x800
    ctx->r24 = ctx->r2 & 0X800;
    // 0x80035B68: b           L_80035BB0
    // 0x80035B6C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_80035BB0;
    // 0x80035B6C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_80035B70:
    // 0x80035B70: beq         $t8, $zero, L_80035B80
    if (ctx->r24 == 0) {
        // 0x80035B74: andi        $t9, $v0, 0x400
        ctx->r25 = ctx->r2 & 0X400;
            goto L_80035B80;
    }
    // 0x80035B74: andi        $t9, $v0, 0x400
    ctx->r25 = ctx->r2 & 0X400;
    // 0x80035B78: b           L_80035BB0
    // 0x80035B7C: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
        goto L_80035BB0;
    // 0x80035B7C: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
L_80035B80:
    // 0x80035B80: beq         $t9, $zero, L_80035B90
    if (ctx->r25 == 0) {
        // 0x80035B84: andi        $t0, $v0, 0x200
        ctx->r8 = ctx->r2 & 0X200;
            goto L_80035B90;
    }
    // 0x80035B84: andi        $t0, $v0, 0x200
    ctx->r8 = ctx->r2 & 0X200;
    // 0x80035B88: b           L_80035BB0
    // 0x80035B8C: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
        goto L_80035BB0;
    // 0x80035B8C: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
L_80035B90:
    // 0x80035B90: beq         $t0, $zero, L_80035BA0
    if (ctx->r8 == 0) {
        // 0x80035B94: andi        $t1, $v0, 0x100
        ctx->r9 = ctx->r2 & 0X100;
            goto L_80035BA0;
    }
    // 0x80035B94: andi        $t1, $v0, 0x100
    ctx->r9 = ctx->r2 & 0X100;
    // 0x80035B98: b           L_80035BB0
    // 0x80035B9C: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
        goto L_80035BB0;
    // 0x80035B9C: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
L_80035BA0:
    // 0x80035BA0: beq         $t1, $zero, L_80035BB0
    if (ctx->r9 == 0) {
        // 0x80035BA4: addiu       $v0, $zero, 0x6
        ctx->r2 = ADD32(0, 0X6);
            goto L_80035BB0;
    }
    // 0x80035BA4: addiu       $v0, $zero, 0x6
    ctx->r2 = ADD32(0, 0X6);
    // 0x80035BA8: b           L_80035BB0
    // 0x80035BAC: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
        goto L_80035BB0;
    // 0x80035BAC: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
L_80035BB0:
    // 0x80035BB0: jr          $ra
    // 0x80035BB4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x80035BB4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80035BB8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80035BB8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80035BBC: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x80035BC0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80035BC4: lhu         $a0, 0x1A($sp)
    ctx->r4 = MEM_HU(ctx->r29, 0X1A);
    // 0x80035BC8: jal         0x80035614
    // 0x80035BCC: nop

    func_80035614(rdram, ctx);
        goto after_0;
    // 0x80035BCC: nop

    after_0:
    // 0x80035BD0: lhu         $v0, 0x1A($sp)
    ctx->r2 = MEM_HU(ctx->r29, 0X1A);
    // 0x80035BD4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80035BD8: andi        $t6, $v0, 0x8000
    ctx->r14 = ctx->r2 & 0X8000;
    // 0x80035BDC: beq         $t6, $zero, L_80035BEC
    if (ctx->r14 == 0) {
        // 0x80035BE0: andi        $t7, $v0, 0x4000
        ctx->r15 = ctx->r2 & 0X4000;
            goto L_80035BEC;
    }
    // 0x80035BE0: andi        $t7, $v0, 0x4000
    ctx->r15 = ctx->r2 & 0X4000;
    // 0x80035BE4: b           L_80035C1C
    // 0x80035BE8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_80035C1C;
    // 0x80035BE8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_80035BEC:
    // 0x80035BEC: beq         $t7, $zero, L_80035BFC
    if (ctx->r15 == 0) {
        // 0x80035BF0: andi        $t8, $v0, 0x800
        ctx->r24 = ctx->r2 & 0X800;
            goto L_80035BFC;
    }
    // 0x80035BF0: andi        $t8, $v0, 0x800
    ctx->r24 = ctx->r2 & 0X800;
    // 0x80035BF4: b           L_80035C1C
    // 0x80035BF8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_80035C1C;
    // 0x80035BF8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_80035BFC:
    // 0x80035BFC: beq         $t8, $zero, L_80035C0C
    if (ctx->r24 == 0) {
        // 0x80035C00: andi        $t9, $v0, 0x400
        ctx->r25 = ctx->r2 & 0X400;
            goto L_80035C0C;
    }
    // 0x80035C00: andi        $t9, $v0, 0x400
    ctx->r25 = ctx->r2 & 0X400;
    // 0x80035C04: b           L_80035C1C
    // 0x80035C08: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
        goto L_80035C1C;
    // 0x80035C08: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
L_80035C0C:
    // 0x80035C0C: beq         $t9, $zero, L_80035C1C
    if (ctx->r25 == 0) {
        // 0x80035C10: addiu       $v0, $zero, 0x4
        ctx->r2 = ADD32(0, 0X4);
            goto L_80035C1C;
    }
    // 0x80035C10: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x80035C14: b           L_80035C1C
    // 0x80035C18: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
        goto L_80035C1C;
    // 0x80035C18: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
L_80035C1C:
    // 0x80035C1C: jr          $ra
    // 0x80035C20: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x80035C20: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80035C24(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80035C24: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80035C28: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x80035C2C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80035C30: lhu         $a0, 0x1A($sp)
    ctx->r4 = MEM_HU(ctx->r29, 0X1A);
    // 0x80035C34: jal         0x80035614
    // 0x80035C38: nop

    func_80035614(rdram, ctx);
        goto after_0;
    // 0x80035C38: nop

    after_0:
    // 0x80035C3C: lhu         $v0, 0x1A($sp)
    ctx->r2 = MEM_HU(ctx->r29, 0X1A);
    // 0x80035C40: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80035C44: andi        $t6, $v0, 0x8000
    ctx->r14 = ctx->r2 & 0X8000;
    // 0x80035C48: beq         $t6, $zero, L_80035C58
    if (ctx->r14 == 0) {
        // 0x80035C4C: andi        $t7, $v0, 0x4000
        ctx->r15 = ctx->r2 & 0X4000;
            goto L_80035C58;
    }
    // 0x80035C4C: andi        $t7, $v0, 0x4000
    ctx->r15 = ctx->r2 & 0X4000;
    // 0x80035C50: b           L_80035C88
    // 0x80035C54: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_80035C88;
    // 0x80035C54: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_80035C58:
    // 0x80035C58: beq         $t7, $zero, L_80035C68
    if (ctx->r15 == 0) {
        // 0x80035C5C: andi        $t8, $v0, 0x200
        ctx->r24 = ctx->r2 & 0X200;
            goto L_80035C68;
    }
    // 0x80035C5C: andi        $t8, $v0, 0x200
    ctx->r24 = ctx->r2 & 0X200;
    // 0x80035C60: b           L_80035C88
    // 0x80035C64: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_80035C88;
    // 0x80035C64: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_80035C68:
    // 0x80035C68: beq         $t8, $zero, L_80035C78
    if (ctx->r24 == 0) {
        // 0x80035C6C: andi        $t9, $v0, 0x100
        ctx->r25 = ctx->r2 & 0X100;
            goto L_80035C78;
    }
    // 0x80035C6C: andi        $t9, $v0, 0x100
    ctx->r25 = ctx->r2 & 0X100;
    // 0x80035C70: b           L_80035C88
    // 0x80035C74: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
        goto L_80035C88;
    // 0x80035C74: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
L_80035C78:
    // 0x80035C78: beq         $t9, $zero, L_80035C88
    if (ctx->r25 == 0) {
        // 0x80035C7C: addiu       $v0, $zero, 0x4
        ctx->r2 = ADD32(0, 0X4);
            goto L_80035C88;
    }
    // 0x80035C7C: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x80035C80: b           L_80035C88
    // 0x80035C84: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
        goto L_80035C88;
    // 0x80035C84: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
L_80035C88:
    // 0x80035C88: jr          $ra
    // 0x80035C8C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x80035C8C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80035C90(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80035C90: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80035C94: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x80035C98: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80035C9C: lhu         $a0, 0x1A($sp)
    ctx->r4 = MEM_HU(ctx->r29, 0X1A);
    // 0x80035CA0: jal         0x80035614
    // 0x80035CA4: nop

    func_80035614(rdram, ctx);
        goto after_0;
    // 0x80035CA4: nop

    after_0:
    // 0x80035CA8: lhu         $v0, 0x1A($sp)
    ctx->r2 = MEM_HU(ctx->r29, 0X1A);
    // 0x80035CAC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80035CB0: andi        $t6, $v0, 0x8000
    ctx->r14 = ctx->r2 & 0X8000;
    // 0x80035CB4: beq         $t6, $zero, L_80035CC4
    if (ctx->r14 == 0) {
        // 0x80035CB8: andi        $t7, $v0, 0x4000
        ctx->r15 = ctx->r2 & 0X4000;
            goto L_80035CC4;
    }
    // 0x80035CB8: andi        $t7, $v0, 0x4000
    ctx->r15 = ctx->r2 & 0X4000;
    // 0x80035CBC: b           L_80035D24
    // 0x80035CC0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_80035D24;
    // 0x80035CC0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_80035CC4:
    // 0x80035CC4: beq         $t7, $zero, L_80035CD4
    if (ctx->r15 == 0) {
        // 0x80035CC8: andi        $t8, $v0, 0x200
        ctx->r24 = ctx->r2 & 0X200;
            goto L_80035CD4;
    }
    // 0x80035CC8: andi        $t8, $v0, 0x200
    ctx->r24 = ctx->r2 & 0X200;
    // 0x80035CCC: b           L_80035D24
    // 0x80035CD0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_80035D24;
    // 0x80035CD0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_80035CD4:
    // 0x80035CD4: beq         $t8, $zero, L_80035CE4
    if (ctx->r24 == 0) {
        // 0x80035CD8: andi        $t9, $v0, 0x100
        ctx->r25 = ctx->r2 & 0X100;
            goto L_80035CE4;
    }
    // 0x80035CD8: andi        $t9, $v0, 0x100
    ctx->r25 = ctx->r2 & 0X100;
    // 0x80035CDC: b           L_80035D24
    // 0x80035CE0: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
        goto L_80035D24;
    // 0x80035CE0: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
L_80035CE4:
    // 0x80035CE4: beq         $t9, $zero, L_80035CF4
    if (ctx->r25 == 0) {
        // 0x80035CE8: andi        $t0, $v0, 0x20
        ctx->r8 = ctx->r2 & 0X20;
            goto L_80035CF4;
    }
    // 0x80035CE8: andi        $t0, $v0, 0x20
    ctx->r8 = ctx->r2 & 0X20;
    // 0x80035CEC: b           L_80035D24
    // 0x80035CF0: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
        goto L_80035D24;
    // 0x80035CF0: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
L_80035CF4:
    // 0x80035CF4: beq         $t0, $zero, L_80035D04
    if (ctx->r8 == 0) {
        // 0x80035CF8: andi        $t1, $v0, 0x10
        ctx->r9 = ctx->r2 & 0X10;
            goto L_80035D04;
    }
    // 0x80035CF8: andi        $t1, $v0, 0x10
    ctx->r9 = ctx->r2 & 0X10;
    // 0x80035CFC: b           L_80035D24
    // 0x80035D00: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
        goto L_80035D24;
    // 0x80035D00: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
L_80035D04:
    // 0x80035D04: beq         $t1, $zero, L_80035D14
    if (ctx->r9 == 0) {
        // 0x80035D08: andi        $t2, $v0, 0x2000
        ctx->r10 = ctx->r2 & 0X2000;
            goto L_80035D14;
    }
    // 0x80035D08: andi        $t2, $v0, 0x2000
    ctx->r10 = ctx->r2 & 0X2000;
    // 0x80035D0C: b           L_80035D24
    // 0x80035D10: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
        goto L_80035D24;
    // 0x80035D10: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
L_80035D14:
    // 0x80035D14: beq         $t2, $zero, L_80035D24
    if (ctx->r10 == 0) {
        // 0x80035D18: addiu       $v0, $zero, 0x6
        ctx->r2 = ADD32(0, 0X6);
            goto L_80035D24;
    }
    // 0x80035D18: addiu       $v0, $zero, 0x6
    ctx->r2 = ADD32(0, 0X6);
    // 0x80035D1C: b           L_80035D24
    // 0x80035D20: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
        goto L_80035D24;
    // 0x80035D20: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
L_80035D24:
    // 0x80035D24: jr          $ra
    // 0x80035D28: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x80035D28: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80035D2C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80035D2C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80035D30: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x80035D34: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80035D38: lhu         $a0, 0x1A($sp)
    ctx->r4 = MEM_HU(ctx->r29, 0X1A);
    // 0x80035D3C: jal         0x80035614
    // 0x80035D40: nop

    func_80035614(rdram, ctx);
        goto after_0;
    // 0x80035D40: nop

    after_0:
    // 0x80035D44: lhu         $v0, 0x1A($sp)
    ctx->r2 = MEM_HU(ctx->r29, 0X1A);
    // 0x80035D48: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80035D4C: andi        $t6, $v0, 0x8000
    ctx->r14 = ctx->r2 & 0X8000;
    // 0x80035D50: beq         $t6, $zero, L_80035D60
    if (ctx->r14 == 0) {
        // 0x80035D54: andi        $t7, $v0, 0x4000
        ctx->r15 = ctx->r2 & 0X4000;
            goto L_80035D60;
    }
    // 0x80035D54: andi        $t7, $v0, 0x4000
    ctx->r15 = ctx->r2 & 0X4000;
    // 0x80035D58: b           L_80035DE0
    // 0x80035D5C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_80035DE0;
    // 0x80035D5C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_80035D60:
    // 0x80035D60: beq         $t7, $zero, L_80035D70
    if (ctx->r15 == 0) {
        // 0x80035D64: andi        $t8, $v0, 0x800
        ctx->r24 = ctx->r2 & 0X800;
            goto L_80035D70;
    }
    // 0x80035D64: andi        $t8, $v0, 0x800
    ctx->r24 = ctx->r2 & 0X800;
    // 0x80035D68: b           L_80035DE0
    // 0x80035D6C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_80035DE0;
    // 0x80035D6C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_80035D70:
    // 0x80035D70: beq         $t8, $zero, L_80035D80
    if (ctx->r24 == 0) {
        // 0x80035D74: andi        $t9, $v0, 0x400
        ctx->r25 = ctx->r2 & 0X400;
            goto L_80035D80;
    }
    // 0x80035D74: andi        $t9, $v0, 0x400
    ctx->r25 = ctx->r2 & 0X400;
    // 0x80035D78: b           L_80035DE0
    // 0x80035D7C: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
        goto L_80035DE0;
    // 0x80035D7C: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
L_80035D80:
    // 0x80035D80: beq         $t9, $zero, L_80035D90
    if (ctx->r25 == 0) {
        // 0x80035D84: andi        $t0, $v0, 0x200
        ctx->r8 = ctx->r2 & 0X200;
            goto L_80035D90;
    }
    // 0x80035D84: andi        $t0, $v0, 0x200
    ctx->r8 = ctx->r2 & 0X200;
    // 0x80035D88: b           L_80035DE0
    // 0x80035D8C: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
        goto L_80035DE0;
    // 0x80035D8C: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
L_80035D90:
    // 0x80035D90: beq         $t0, $zero, L_80035DA0
    if (ctx->r8 == 0) {
        // 0x80035D94: andi        $t1, $v0, 0x100
        ctx->r9 = ctx->r2 & 0X100;
            goto L_80035DA0;
    }
    // 0x80035D94: andi        $t1, $v0, 0x100
    ctx->r9 = ctx->r2 & 0X100;
    // 0x80035D98: b           L_80035DE0
    // 0x80035D9C: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
        goto L_80035DE0;
    // 0x80035D9C: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
L_80035DA0:
    // 0x80035DA0: beq         $t1, $zero, L_80035DB0
    if (ctx->r9 == 0) {
        // 0x80035DA4: andi        $t2, $v0, 0x20
        ctx->r10 = ctx->r2 & 0X20;
            goto L_80035DB0;
    }
    // 0x80035DA4: andi        $t2, $v0, 0x20
    ctx->r10 = ctx->r2 & 0X20;
    // 0x80035DA8: b           L_80035DE0
    // 0x80035DAC: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
        goto L_80035DE0;
    // 0x80035DAC: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
L_80035DB0:
    // 0x80035DB0: beq         $t2, $zero, L_80035DC0
    if (ctx->r10 == 0) {
        // 0x80035DB4: andi        $t3, $v0, 0x2000
        ctx->r11 = ctx->r2 & 0X2000;
            goto L_80035DC0;
    }
    // 0x80035DB4: andi        $t3, $v0, 0x2000
    ctx->r11 = ctx->r2 & 0X2000;
    // 0x80035DB8: b           L_80035DE0
    // 0x80035DBC: addiu       $v0, $zero, 0x6
    ctx->r2 = ADD32(0, 0X6);
        goto L_80035DE0;
    // 0x80035DBC: addiu       $v0, $zero, 0x6
    ctx->r2 = ADD32(0, 0X6);
L_80035DC0:
    // 0x80035DC0: beq         $t3, $zero, L_80035DD0
    if (ctx->r11 == 0) {
        // 0x80035DC4: andi        $t4, $v0, 0x10
        ctx->r12 = ctx->r2 & 0X10;
            goto L_80035DD0;
    }
    // 0x80035DC4: andi        $t4, $v0, 0x10
    ctx->r12 = ctx->r2 & 0X10;
    // 0x80035DC8: b           L_80035DE0
    // 0x80035DCC: addiu       $v0, $zero, 0x6
    ctx->r2 = ADD32(0, 0X6);
        goto L_80035DE0;
    // 0x80035DCC: addiu       $v0, $zero, 0x6
    ctx->r2 = ADD32(0, 0X6);
L_80035DD0:
    // 0x80035DD0: beq         $t4, $zero, L_80035DE0
    if (ctx->r12 == 0) {
        // 0x80035DD4: addiu       $v0, $zero, 0x8
        ctx->r2 = ADD32(0, 0X8);
            goto L_80035DE0;
    }
    // 0x80035DD4: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
    // 0x80035DD8: b           L_80035DE0
    // 0x80035DDC: addiu       $v0, $zero, 0x7
    ctx->r2 = ADD32(0, 0X7);
        goto L_80035DE0;
    // 0x80035DDC: addiu       $v0, $zero, 0x7
    ctx->r2 = ADD32(0, 0X7);
L_80035DE0:
    // 0x80035DE0: jr          $ra
    // 0x80035DE4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x80035DE4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80035DE8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80035DE8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80035DEC: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x80035DF0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80035DF4: lhu         $a0, 0x1A($sp)
    ctx->r4 = MEM_HU(ctx->r29, 0X1A);
    // 0x80035DF8: jal         0x80035614
    // 0x80035DFC: nop

    func_80035614(rdram, ctx);
        goto after_0;
    // 0x80035DFC: nop

    after_0:
    // 0x80035E00: lhu         $v0, 0x1A($sp)
    ctx->r2 = MEM_HU(ctx->r29, 0X1A);
    // 0x80035E04: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80035E08: andi        $t6, $v0, 0x8000
    ctx->r14 = ctx->r2 & 0X8000;
    // 0x80035E0C: beq         $t6, $zero, L_80035E1C
    if (ctx->r14 == 0) {
        // 0x80035E10: andi        $t7, $v0, 0x4000
        ctx->r15 = ctx->r2 & 0X4000;
            goto L_80035E1C;
    }
    // 0x80035E10: andi        $t7, $v0, 0x4000
    ctx->r15 = ctx->r2 & 0X4000;
    // 0x80035E14: b           L_80035EDC
    // 0x80035E18: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_80035EDC;
    // 0x80035E18: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_80035E1C:
    // 0x80035E1C: beq         $t7, $zero, L_80035E2C
    if (ctx->r15 == 0) {
        // 0x80035E20: andi        $t8, $v0, 0x800
        ctx->r24 = ctx->r2 & 0X800;
            goto L_80035E2C;
    }
    // 0x80035E20: andi        $t8, $v0, 0x800
    ctx->r24 = ctx->r2 & 0X800;
    // 0x80035E24: b           L_80035EDC
    // 0x80035E28: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_80035EDC;
    // 0x80035E28: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_80035E2C:
    // 0x80035E2C: beq         $t8, $zero, L_80035E3C
    if (ctx->r24 == 0) {
        // 0x80035E30: andi        $t9, $v0, 0x400
        ctx->r25 = ctx->r2 & 0X400;
            goto L_80035E3C;
    }
    // 0x80035E30: andi        $t9, $v0, 0x400
    ctx->r25 = ctx->r2 & 0X400;
    // 0x80035E34: b           L_80035EDC
    // 0x80035E38: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
        goto L_80035EDC;
    // 0x80035E38: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
L_80035E3C:
    // 0x80035E3C: beq         $t9, $zero, L_80035E4C
    if (ctx->r25 == 0) {
        // 0x80035E40: andi        $t0, $v0, 0x200
        ctx->r8 = ctx->r2 & 0X200;
            goto L_80035E4C;
    }
    // 0x80035E40: andi        $t0, $v0, 0x200
    ctx->r8 = ctx->r2 & 0X200;
    // 0x80035E44: b           L_80035EDC
    // 0x80035E48: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
        goto L_80035EDC;
    // 0x80035E48: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
L_80035E4C:
    // 0x80035E4C: beq         $t0, $zero, L_80035E5C
    if (ctx->r8 == 0) {
        // 0x80035E50: andi        $t1, $v0, 0x100
        ctx->r9 = ctx->r2 & 0X100;
            goto L_80035E5C;
    }
    // 0x80035E50: andi        $t1, $v0, 0x100
    ctx->r9 = ctx->r2 & 0X100;
    // 0x80035E54: b           L_80035EDC
    // 0x80035E58: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
        goto L_80035EDC;
    // 0x80035E58: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
L_80035E5C:
    // 0x80035E5C: beq         $t1, $zero, L_80035E6C
    if (ctx->r9 == 0) {
        // 0x80035E60: andi        $t2, $v0, 0x20
        ctx->r10 = ctx->r2 & 0X20;
            goto L_80035E6C;
    }
    // 0x80035E60: andi        $t2, $v0, 0x20
    ctx->r10 = ctx->r2 & 0X20;
    // 0x80035E64: b           L_80035EDC
    // 0x80035E68: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
        goto L_80035EDC;
    // 0x80035E68: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
L_80035E6C:
    // 0x80035E6C: beq         $t2, $zero, L_80035E7C
    if (ctx->r10 == 0) {
        // 0x80035E70: andi        $t3, $v0, 0x2000
        ctx->r11 = ctx->r2 & 0X2000;
            goto L_80035E7C;
    }
    // 0x80035E70: andi        $t3, $v0, 0x2000
    ctx->r11 = ctx->r2 & 0X2000;
    // 0x80035E74: b           L_80035EDC
    // 0x80035E78: addiu       $v0, $zero, 0x6
    ctx->r2 = ADD32(0, 0X6);
        goto L_80035EDC;
    // 0x80035E78: addiu       $v0, $zero, 0x6
    ctx->r2 = ADD32(0, 0X6);
L_80035E7C:
    // 0x80035E7C: beq         $t3, $zero, L_80035E8C
    if (ctx->r11 == 0) {
        // 0x80035E80: andi        $t4, $v0, 0x10
        ctx->r12 = ctx->r2 & 0X10;
            goto L_80035E8C;
    }
    // 0x80035E80: andi        $t4, $v0, 0x10
    ctx->r12 = ctx->r2 & 0X10;
    // 0x80035E84: b           L_80035EDC
    // 0x80035E88: addiu       $v0, $zero, 0x6
    ctx->r2 = ADD32(0, 0X6);
        goto L_80035EDC;
    // 0x80035E88: addiu       $v0, $zero, 0x6
    ctx->r2 = ADD32(0, 0X6);
L_80035E8C:
    // 0x80035E8C: beq         $t4, $zero, L_80035E9C
    if (ctx->r12 == 0) {
        // 0x80035E90: andi        $t5, $v0, 0x1
        ctx->r13 = ctx->r2 & 0X1;
            goto L_80035E9C;
    }
    // 0x80035E90: andi        $t5, $v0, 0x1
    ctx->r13 = ctx->r2 & 0X1;
    // 0x80035E94: b           L_80035EDC
    // 0x80035E98: addiu       $v0, $zero, 0x7
    ctx->r2 = ADD32(0, 0X7);
        goto L_80035EDC;
    // 0x80035E98: addiu       $v0, $zero, 0x7
    ctx->r2 = ADD32(0, 0X7);
L_80035E9C:
    // 0x80035E9C: beq         $t5, $zero, L_80035EAC
    if (ctx->r13 == 0) {
        // 0x80035EA0: andi        $t6, $v0, 0x4
        ctx->r14 = ctx->r2 & 0X4;
            goto L_80035EAC;
    }
    // 0x80035EA0: andi        $t6, $v0, 0x4
    ctx->r14 = ctx->r2 & 0X4;
    // 0x80035EA4: b           L_80035EDC
    // 0x80035EA8: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
        goto L_80035EDC;
    // 0x80035EA8: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
L_80035EAC:
    // 0x80035EAC: beq         $t6, $zero, L_80035EBC
    if (ctx->r14 == 0) {
        // 0x80035EB0: andi        $t7, $v0, 0x2
        ctx->r15 = ctx->r2 & 0X2;
            goto L_80035EBC;
    }
    // 0x80035EB0: andi        $t7, $v0, 0x2
    ctx->r15 = ctx->r2 & 0X2;
    // 0x80035EB4: b           L_80035EDC
    // 0x80035EB8: addiu       $v0, $zero, 0x9
    ctx->r2 = ADD32(0, 0X9);
        goto L_80035EDC;
    // 0x80035EB8: addiu       $v0, $zero, 0x9
    ctx->r2 = ADD32(0, 0X9);
L_80035EBC:
    // 0x80035EBC: beq         $t7, $zero, L_80035ECC
    if (ctx->r15 == 0) {
        // 0x80035EC0: andi        $t8, $v0, 0x8
        ctx->r24 = ctx->r2 & 0X8;
            goto L_80035ECC;
    }
    // 0x80035EC0: andi        $t8, $v0, 0x8
    ctx->r24 = ctx->r2 & 0X8;
    // 0x80035EC4: b           L_80035EDC
    // 0x80035EC8: addiu       $v0, $zero, 0xA
    ctx->r2 = ADD32(0, 0XA);
        goto L_80035EDC;
    // 0x80035EC8: addiu       $v0, $zero, 0xA
    ctx->r2 = ADD32(0, 0XA);
L_80035ECC:
    // 0x80035ECC: beq         $t8, $zero, L_80035EDC
    if (ctx->r24 == 0) {
        // 0x80035ED0: addiu       $v0, $zero, 0xC
        ctx->r2 = ADD32(0, 0XC);
            goto L_80035EDC;
    }
    // 0x80035ED0: addiu       $v0, $zero, 0xC
    ctx->r2 = ADD32(0, 0XC);
    // 0x80035ED4: b           L_80035EDC
    // 0x80035ED8: addiu       $v0, $zero, 0xB
    ctx->r2 = ADD32(0, 0XB);
        goto L_80035EDC;
    // 0x80035ED8: addiu       $v0, $zero, 0xB
    ctx->r2 = ADD32(0, 0XB);
L_80035EDC:
    // 0x80035EDC: jr          $ra
    // 0x80035EE0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x80035EE0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80035EE4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80035EE4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80035EE8: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x80035EEC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80035EF0: lhu         $a0, 0x1A($sp)
    ctx->r4 = MEM_HU(ctx->r29, 0X1A);
    // 0x80035EF4: jal         0x80035614
    // 0x80035EF8: nop

    func_80035614(rdram, ctx);
        goto after_0;
    // 0x80035EF8: nop

    after_0:
    // 0x80035EFC: lhu         $v0, 0x1A($sp)
    ctx->r2 = MEM_HU(ctx->r29, 0X1A);
    // 0x80035F00: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80035F04: andi        $t6, $v0, 0x8000
    ctx->r14 = ctx->r2 & 0X8000;
    // 0x80035F08: beq         $t6, $zero, L_80035F18
    if (ctx->r14 == 0) {
        // 0x80035F0C: andi        $t7, $v0, 0x4000
        ctx->r15 = ctx->r2 & 0X4000;
            goto L_80035F18;
    }
    // 0x80035F0C: andi        $t7, $v0, 0x4000
    ctx->r15 = ctx->r2 & 0X4000;
    // 0x80035F10: b           L_80035FE8
    // 0x80035F14: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_80035FE8;
    // 0x80035F14: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_80035F18:
    // 0x80035F18: beq         $t7, $zero, L_80035F28
    if (ctx->r15 == 0) {
        // 0x80035F1C: andi        $t8, $v0, 0x800
        ctx->r24 = ctx->r2 & 0X800;
            goto L_80035F28;
    }
    // 0x80035F1C: andi        $t8, $v0, 0x800
    ctx->r24 = ctx->r2 & 0X800;
    // 0x80035F20: b           L_80035FE8
    // 0x80035F24: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_80035FE8;
    // 0x80035F24: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_80035F28:
    // 0x80035F28: beq         $t8, $zero, L_80035F38
    if (ctx->r24 == 0) {
        // 0x80035F2C: andi        $t9, $v0, 0x400
        ctx->r25 = ctx->r2 & 0X400;
            goto L_80035F38;
    }
    // 0x80035F2C: andi        $t9, $v0, 0x400
    ctx->r25 = ctx->r2 & 0X400;
    // 0x80035F30: b           L_80035FE8
    // 0x80035F34: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
        goto L_80035FE8;
    // 0x80035F34: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
L_80035F38:
    // 0x80035F38: beq         $t9, $zero, L_80035F48
    if (ctx->r25 == 0) {
        // 0x80035F3C: andi        $t0, $v0, 0x200
        ctx->r8 = ctx->r2 & 0X200;
            goto L_80035F48;
    }
    // 0x80035F3C: andi        $t0, $v0, 0x200
    ctx->r8 = ctx->r2 & 0X200;
    // 0x80035F40: b           L_80035FE8
    // 0x80035F44: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
        goto L_80035FE8;
    // 0x80035F44: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
L_80035F48:
    // 0x80035F48: beq         $t0, $zero, L_80035F58
    if (ctx->r8 == 0) {
        // 0x80035F4C: andi        $t1, $v0, 0x100
        ctx->r9 = ctx->r2 & 0X100;
            goto L_80035F58;
    }
    // 0x80035F4C: andi        $t1, $v0, 0x100
    ctx->r9 = ctx->r2 & 0X100;
    // 0x80035F50: b           L_80035FE8
    // 0x80035F54: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
        goto L_80035FE8;
    // 0x80035F54: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
L_80035F58:
    // 0x80035F58: beq         $t1, $zero, L_80035F68
    if (ctx->r9 == 0) {
        // 0x80035F5C: andi        $t2, $v0, 0x20
        ctx->r10 = ctx->r2 & 0X20;
            goto L_80035F68;
    }
    // 0x80035F5C: andi        $t2, $v0, 0x20
    ctx->r10 = ctx->r2 & 0X20;
    // 0x80035F60: b           L_80035FE8
    // 0x80035F64: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
        goto L_80035FE8;
    // 0x80035F64: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
L_80035F68:
    // 0x80035F68: beq         $t2, $zero, L_80035F78
    if (ctx->r10 == 0) {
        // 0x80035F6C: andi        $t3, $v0, 0x2000
        ctx->r11 = ctx->r2 & 0X2000;
            goto L_80035F78;
    }
    // 0x80035F6C: andi        $t3, $v0, 0x2000
    ctx->r11 = ctx->r2 & 0X2000;
    // 0x80035F70: b           L_80035FE8
    // 0x80035F74: addiu       $v0, $zero, 0x6
    ctx->r2 = ADD32(0, 0X6);
        goto L_80035FE8;
    // 0x80035F74: addiu       $v0, $zero, 0x6
    ctx->r2 = ADD32(0, 0X6);
L_80035F78:
    // 0x80035F78: beq         $t3, $zero, L_80035F88
    if (ctx->r11 == 0) {
        // 0x80035F7C: andi        $t4, $v0, 0x10
        ctx->r12 = ctx->r2 & 0X10;
            goto L_80035F88;
    }
    // 0x80035F7C: andi        $t4, $v0, 0x10
    ctx->r12 = ctx->r2 & 0X10;
    // 0x80035F80: b           L_80035FE8
    // 0x80035F84: addiu       $v0, $zero, 0x6
    ctx->r2 = ADD32(0, 0X6);
        goto L_80035FE8;
    // 0x80035F84: addiu       $v0, $zero, 0x6
    ctx->r2 = ADD32(0, 0X6);
L_80035F88:
    // 0x80035F88: beq         $t4, $zero, L_80035F98
    if (ctx->r12 == 0) {
        // 0x80035F8C: andi        $t5, $v0, 0x1
        ctx->r13 = ctx->r2 & 0X1;
            goto L_80035F98;
    }
    // 0x80035F8C: andi        $t5, $v0, 0x1
    ctx->r13 = ctx->r2 & 0X1;
    // 0x80035F90: b           L_80035FE8
    // 0x80035F94: addiu       $v0, $zero, 0x7
    ctx->r2 = ADD32(0, 0X7);
        goto L_80035FE8;
    // 0x80035F94: addiu       $v0, $zero, 0x7
    ctx->r2 = ADD32(0, 0X7);
L_80035F98:
    // 0x80035F98: beq         $t5, $zero, L_80035FA8
    if (ctx->r13 == 0) {
        // 0x80035F9C: andi        $t6, $v0, 0x4
        ctx->r14 = ctx->r2 & 0X4;
            goto L_80035FA8;
    }
    // 0x80035F9C: andi        $t6, $v0, 0x4
    ctx->r14 = ctx->r2 & 0X4;
    // 0x80035FA0: b           L_80035FE8
    // 0x80035FA4: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
        goto L_80035FE8;
    // 0x80035FA4: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
L_80035FA8:
    // 0x80035FA8: beq         $t6, $zero, L_80035FB8
    if (ctx->r14 == 0) {
        // 0x80035FAC: andi        $t7, $v0, 0x2
        ctx->r15 = ctx->r2 & 0X2;
            goto L_80035FB8;
    }
    // 0x80035FAC: andi        $t7, $v0, 0x2
    ctx->r15 = ctx->r2 & 0X2;
    // 0x80035FB0: b           L_80035FE8
    // 0x80035FB4: addiu       $v0, $zero, 0x9
    ctx->r2 = ADD32(0, 0X9);
        goto L_80035FE8;
    // 0x80035FB4: addiu       $v0, $zero, 0x9
    ctx->r2 = ADD32(0, 0X9);
L_80035FB8:
    // 0x80035FB8: beq         $t7, $zero, L_80035FC8
    if (ctx->r15 == 0) {
        // 0x80035FBC: andi        $t8, $v0, 0x8
        ctx->r24 = ctx->r2 & 0X8;
            goto L_80035FC8;
    }
    // 0x80035FBC: andi        $t8, $v0, 0x8
    ctx->r24 = ctx->r2 & 0X8;
    // 0x80035FC0: b           L_80035FE8
    // 0x80035FC4: addiu       $v0, $zero, 0xA
    ctx->r2 = ADD32(0, 0XA);
        goto L_80035FE8;
    // 0x80035FC4: addiu       $v0, $zero, 0xA
    ctx->r2 = ADD32(0, 0XA);
L_80035FC8:
    // 0x80035FC8: beq         $t8, $zero, L_80035FD8
    if (ctx->r24 == 0) {
        // 0x80035FCC: andi        $t9, $v0, 0x1000
        ctx->r25 = ctx->r2 & 0X1000;
            goto L_80035FD8;
    }
    // 0x80035FCC: andi        $t9, $v0, 0x1000
    ctx->r25 = ctx->r2 & 0X1000;
    // 0x80035FD0: b           L_80035FE8
    // 0x80035FD4: addiu       $v0, $zero, 0xB
    ctx->r2 = ADD32(0, 0XB);
        goto L_80035FE8;
    // 0x80035FD4: addiu       $v0, $zero, 0xB
    ctx->r2 = ADD32(0, 0XB);
L_80035FD8:
    // 0x80035FD8: beq         $t9, $zero, L_80035FE8
    if (ctx->r25 == 0) {
        // 0x80035FDC: addiu       $v0, $zero, 0xD
        ctx->r2 = ADD32(0, 0XD);
            goto L_80035FE8;
    }
    // 0x80035FDC: addiu       $v0, $zero, 0xD
    ctx->r2 = ADD32(0, 0XD);
    // 0x80035FE0: b           L_80035FE8
    // 0x80035FE4: addiu       $v0, $zero, 0xC
    ctx->r2 = ADD32(0, 0XC);
        goto L_80035FE8;
    // 0x80035FE4: addiu       $v0, $zero, 0xC
    ctx->r2 = ADD32(0, 0XC);
L_80035FE8:
    // 0x80035FE8: jr          $ra
    // 0x80035FEC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x80035FEC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80035FF0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80035FF0: lui         $v0, 0x8011
    ctx->r2 = S32(0X8011 << 16);
    // 0x80035FF4: addiu       $v0, $v0, -0x3770
    ctx->r2 = ADD32(ctx->r2, -0X3770);
    // 0x80035FF8: lbu         $t6, 0x754($v0)
    ctx->r14 = MEM_BU(ctx->r2, 0X754);
    // 0x80035FFC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80036000: lui         $v1, 0x8010
    ctx->r3 = S32(0X8010 << 16);
    // 0x80036004: addiu       $v1, $v1, -0x3770
    ctx->r3 = ADD32(ctx->r3, -0X3770);
    // 0x80036008: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8003600C: andi        $t7, $t6, 0xFFF4
    ctx->r15 = ctx->r14 & 0XFFF4;
    // 0x80036010: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x80036014: sb          $t7, 0x754($v0)
    MEM_B(0X754, ctx->r2) = ctx->r15;
    // 0x80036018: addiu       $at, $v1, 0x7FFF
    ctx->r1 = ADD32(ctx->r3, 0X7FFF);
    // 0x8003601C: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x80036020: sh          $zero, 0x991($at)
    MEM_H(0X991, ctx->r1) = 0;
    // 0x80036024: jal         0x80020A4C
    // 0x80036028: sb          $t8, 0x6C15($at)
    MEM_B(0X6C15, ctx->r1) = ctx->r24;
    func_80020A4C(rdram, ctx);
        goto after_0;
    // 0x80036028: sb          $t8, 0x6C15($at)
    MEM_B(0X6C15, ctx->r1) = ctx->r24;
    after_0:
    // 0x8003602C: addiu       $a0, $zero, 0x10
    ctx->r4 = ADD32(0, 0X10);
    // 0x80036030: jal         0x80020318
    // 0x80036034: addiu       $a1, $zero, 0xAF
    ctx->r5 = ADD32(0, 0XAF);
    func_80020318(rdram, ctx);
        goto after_1;
    // 0x80036034: addiu       $a1, $zero, 0xAF
    ctx->r5 = ADD32(0, 0XAF);
    after_1:
    // 0x80036038: jal         0x800202D8
    // 0x8003603C: nop

    func_800202D8(rdram, ctx);
        goto after_2;
    // 0x8003603C: nop

    after_2:
    // 0x80036040: jal         0x80029A54
    // 0x80036044: nop

    func_80029A54(rdram, ctx);
        goto after_3;
    // 0x80036044: nop

    after_3:
    // 0x80036048: jal         0x8002F1F0
    // 0x8003604C: nop

    func_8002F1F0(rdram, ctx);
        goto after_4;
    // 0x8003604C: nop

    after_4:
    // 0x80036050: jal         0x8002F2AC
    // 0x80036054: nop

    func_8002F2AC(rdram, ctx);
        goto after_5;
    // 0x80036054: nop

    after_5:
    // 0x80036058: jal         0x8000E300
    // 0x8003605C: nop

    func_8000E300(rdram, ctx);
        goto after_6;
    // 0x8003605C: nop

    after_6:
    // 0x80036060: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x80036064: jal         0x8007AAE0
    // 0x80036068: nop

    func_8007AAE0(rdram, ctx);
        goto after_7;
    // 0x80036068: nop

    after_7:
    // 0x8003606C: jal         0x80021940
    // 0x80036070: nop

    func_80021940(rdram, ctx);
        goto after_8;
    // 0x80036070: nop

    after_8:
    // 0x80036074: jal         0x80073F40
    // 0x80036078: nop

    func_80073F40(rdram, ctx);
        goto after_9;
    // 0x80036078: nop

    after_9:
    // 0x8003607C: jal         0x800356EC
    // 0x80036080: nop

    func_800356EC(rdram, ctx);
        goto after_10;
    // 0x80036080: nop

    after_10:
    // 0x80036084: jal         0x80021004
    // 0x80036088: nop

    func_80021004(rdram, ctx);
        goto after_11;
    // 0x80036088: nop

    after_11:
    // 0x8003608C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80036090: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80036094: jr          $ra
    // 0x80036098: nop

    return;
    // 0x80036098: nop

;}
RECOMP_FUNC void func_8003609C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8003609C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800360A0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800360A4: jal         0x8001C9B8
    // 0x800360A8: nop

    func_8001C9B8(rdram, ctx);
        goto after_0;
    // 0x800360A8: nop

    after_0:
    // 0x800360AC: lui         $t6, 0x800D
    ctx->r14 = S32(0X800D << 16);
    // 0x800360B0: addu        $t6, $t6, $v0
    ctx->r14 = ADD32(ctx->r14, ctx->r2);
    // 0x800360B4: lbu         $t6, 0x4C7C($t6)
    ctx->r14 = MEM_BU(ctx->r14, 0X4C7C);
    // 0x800360B8: lui         $v1, 0x8012
    ctx->r3 = S32(0X8012 << 16);
    // 0x800360BC: addiu       $v1, $v1, -0x30A0
    ctx->r3 = ADD32(ctx->r3, -0X30A0);
    // 0x800360C0: sb          $t6, 0x7($v1)
    MEM_B(0X7, ctx->r3) = ctx->r14;
    // 0x800360C4: lb          $t7, 0x7($v1)
    ctx->r15 = MEM_B(ctx->r3, 0X7);
    // 0x800360C8: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x800360CC: addiu       $a0, $a0, 0xB7C
    ctx->r4 = ADD32(ctx->r4, 0XB7C);
    // 0x800360D0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800360D4: sh          $t7, 0x0($a0)
    MEM_H(0X0, ctx->r4) = ctx->r15;
    // 0x800360D8: lb          $v0, 0x1($a0)
    ctx->r2 = MEM_B(ctx->r4, 0X1);
    // 0x800360DC: jr          $ra
    // 0x800360E0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x800360E0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_800360E4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800360E4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800360E8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800360EC: lui         $a0, 0x801B
    ctx->r4 = S32(0X801B << 16);
    // 0x800360F0: addiu       $a0, $a0, -0x6B8
    ctx->r4 = ADD32(ctx->r4, -0X6B8);
    // 0x800360F4: jal         0x800218E0
    // 0x800360F8: addiu       $a1, $zero, 0x50
    ctx->r5 = ADD32(0, 0X50);
    func_800218E0(rdram, ctx);
        goto after_0;
    // 0x800360F8: addiu       $a1, $zero, 0x50
    ctx->r5 = ADD32(0, 0X50);
    after_0:
    // 0x800360FC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80036100: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80036104: jr          $ra
    // 0x80036108: nop

    return;
    // 0x80036108: nop

;}
RECOMP_FUNC void func_8003610C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8003610C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80036110: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80036114: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x80036118: addiu       $a0, $a0, -0x32B0
    ctx->r4 = ADD32(ctx->r4, -0X32B0);
    // 0x8003611C: jal         0x800218E0
    // 0x80036120: addiu       $a1, $zero, 0x178
    ctx->r5 = ADD32(0, 0X178);
    func_800218E0(rdram, ctx);
        goto after_0;
    // 0x80036120: addiu       $a1, $zero, 0x178
    ctx->r5 = ADD32(0, 0X178);
    after_0:
    // 0x80036124: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80036128: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x8003612C: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x80036130: sb          $t6, -0x32A4($at)
    MEM_B(-0X32A4, ctx->r1) = ctx->r14;
    // 0x80036134: jr          $ra
    // 0x80036138: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x80036138: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8003613C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8003613C: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x80036140: addiu       $v0, $v0, -0x32B0
    ctx->r2 = ADD32(ctx->r2, -0X32B0);
    // 0x80036144: lb          $v1, 0x44($v0)
    ctx->r3 = MEM_B(ctx->r2, 0X44);
    // 0x80036148: lui         $t7, 0x8012
    ctx->r15 = S32(0X8012 << 16);
    // 0x8003614C: sll         $t6, $v1, 2
    ctx->r14 = S32(ctx->r3 << 2);
    // 0x80036150: addu        $t6, $t6, $v1
    ctx->r14 = ADD32(ctx->r14, ctx->r3);
    // 0x80036154: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x80036158: addu        $t6, $t6, $v1
    ctx->r14 = ADD32(ctx->r14, ctx->r3);
    // 0x8003615C: sll         $t6, $t6, 3
    ctx->r14 = S32(ctx->r14 << 3);
    // 0x80036160: addu        $t6, $t6, $v1
    ctx->r14 = ADD32(ctx->r14, ctx->r3);
    // 0x80036164: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x80036168: addu        $t6, $t6, $v1
    ctx->r14 = ADD32(ctx->r14, ctx->r3);
    // 0x8003616C: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x80036170: addiu       $t7, $t7, -0x2CF0
    ctx->r15 = ADD32(ctx->r15, -0X2CF0);
    // 0x80036174: addu        $t8, $t6, $t7
    ctx->r24 = ADD32(ctx->r14, ctx->r15);
    // 0x80036178: addu        $t9, $t8, $v1
    ctx->r25 = ADD32(ctx->r24, ctx->r3);
    // 0x8003617C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80036180: addiu       $t0, $t9, 0x308
    ctx->r8 = ADD32(ctx->r25, 0X308);
    // 0x80036184: sll         $t2, $v1, 2
    ctx->r10 = S32(ctx->r3 << 2);
    // 0x80036188: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8003618C: sw          $t8, 0x5C($v0)
    MEM_W(0X5C, ctx->r2) = ctx->r24;
    // 0x80036190: sw          $t0, 0x58($v0)
    MEM_W(0X58, ctx->r2) = ctx->r8;
    // 0x80036194: lui         $at, 0x3
    ctx->r1 = S32(0X3 << 16);
    // 0x80036198: subu        $t2, $t2, $v1
    ctx->r10 = SUB32(ctx->r10, ctx->r3);
    // 0x8003619C: lbu         $t1, 0x0($t8)
    ctx->r9 = MEM_BU(ctx->r24, 0X0);
    // 0x800361A0: sll         $t2, $t2, 3
    ctx->r10 = S32(ctx->r10 << 3);
    // 0x800361A4: ori         $at, $at, 0x6F8
    ctx->r1 = ctx->r1 | 0X6F8;
    // 0x800361A8: lui         $t4, 0x800E
    ctx->r12 = S32(0X800E << 16);
    // 0x800361AC: addiu       $t4, $t4, -0x3770
    ctx->r12 = ADD32(ctx->r12, -0X3770);
    // 0x800361B0: addu        $t3, $t2, $at
    ctx->r11 = ADD32(ctx->r10, ctx->r1);
    // 0x800361B4: addu        $t5, $t3, $t4
    ctx->r13 = ADD32(ctx->r11, ctx->r12);
    // 0x800361B8: sh          $zero, 0x8($v0)
    MEM_H(0X8, ctx->r2) = 0;
    // 0x800361BC: sw          $t5, 0x60($v0)
    MEM_W(0X60, ctx->r2) = ctx->r13;
    // 0x800361C0: addiu       $a0, $zero, 0xF00
    ctx->r4 = ADD32(0, 0XF00);
    // 0x800361C4: addiu       $a1, $zero, 0x14
    ctx->r5 = ADD32(0, 0X14);
    // 0x800361C8: addiu       $a2, $zero, 0xF
    ctx->r6 = ADD32(0, 0XF);
    // 0x800361CC: jal         0x80049E40
    // 0x800361D0: sb          $t1, 0x45($v0)
    MEM_B(0X45, ctx->r2) = ctx->r9;
    func_80049E40(rdram, ctx);
        goto after_0;
    // 0x800361D0: sb          $t1, 0x45($v0)
    MEM_B(0X45, ctx->r2) = ctx->r9;
    after_0:
    // 0x800361D4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800361D8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800361DC: jr          $ra
    // 0x800361E0: nop

    return;
    // 0x800361E0: nop

;}
RECOMP_FUNC void func_800361E4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800361E4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800361E8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800361EC: jal         0x800360E4
    // 0x800361F0: nop

    func_800360E4(rdram, ctx);
        goto after_0;
    // 0x800361F0: nop

    after_0:
    // 0x800361F4: jal         0x8003613C
    // 0x800361F8: nop

    func_8003613C(rdram, ctx);
        goto after_1;
    // 0x800361F8: nop

    after_1:
    // 0x800361FC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80036200: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80036204: jr          $ra
    // 0x80036208: nop

    return;
    // 0x80036208: nop

;}
RECOMP_FUNC void func_8003620C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8003620C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80036210: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80036214: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x80036218: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x8003621C: jal         0x800361E4
    // 0x80036220: sb          $t6, -0x326C($at)
    MEM_B(-0X326C, ctx->r1) = ctx->r14;
    func_800361E4(rdram, ctx);
        goto after_0;
    // 0x80036220: sb          $t6, -0x326C($at)
    MEM_B(-0X326C, ctx->r1) = ctx->r14;
    after_0:
    // 0x80036224: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80036228: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8003622C: jr          $ra
    // 0x80036230: nop

    return;
    // 0x80036230: nop

;}
RECOMP_FUNC void func_80036234(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80036234: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80036238: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8003623C: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x80036240: jal         0x800361E4
    // 0x80036244: sb          $zero, -0x326C($at)
    MEM_B(-0X326C, ctx->r1) = 0;
    func_800361E4(rdram, ctx);
        goto after_0;
    // 0x80036244: sb          $zero, -0x326C($at)
    MEM_B(-0X326C, ctx->r1) = 0;
    after_0:
    // 0x80036248: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8003624C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80036250: jr          $ra
    // 0x80036254: nop

    return;
    // 0x80036254: nop

;}
RECOMP_FUNC void func_80036258(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80036258: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8003625C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80036260: jal         0x800361E4
    // 0x80036264: nop

    func_800361E4(rdram, ctx);
        goto after_0;
    // 0x80036264: nop

    after_0:
    // 0x80036268: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8003626C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80036270: jr          $ra
    // 0x80036274: nop

    return;
    // 0x80036274: nop

;}
RECOMP_FUNC void func_80036278(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80036278: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x8003627C: sh          $zero, 0xB74($at)
    MEM_H(0XB74, ctx->r1) = 0;
    // 0x80036280: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x80036284: sh          $zero, 0xB76($at)
    MEM_H(0XB76, ctx->r1) = 0;
    // 0x80036288: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x8003628C: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x80036290: sh          $t6, 0xB78($at)
    MEM_H(0XB78, ctx->r1) = ctx->r14;
    // 0x80036294: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x80036298: sh          $zero, 0x3944($at)
    MEM_H(0X3944, ctx->r1) = 0;
    // 0x8003629C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800362A0: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x800362A4: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x800362A8: addiu       $v0, $v0, -0x32B0
    ctx->r2 = ADD32(ctx->r2, -0X32B0);
    // 0x800362AC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800362B0: sh          $zero, 0x3946($at)
    MEM_H(0X3946, ctx->r1) = 0;
    // 0x800362B4: sb          $zero, 0x6B($v0)
    MEM_B(0X6B, ctx->r2) = 0;
    // 0x800362B8: jal         0x800392AC
    // 0x800362BC: sb          $zero, 0x6C($v0)
    MEM_B(0X6C, ctx->r2) = 0;
    func_800392AC(rdram, ctx);
        goto after_0;
    // 0x800362BC: sb          $zero, 0x6C($v0)
    MEM_B(0X6C, ctx->r2) = 0;
    after_0:
    // 0x800362C0: jal         0x800362E0
    // 0x800362C4: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    func_800362E0(rdram, ctx);
        goto after_1;
    // 0x800362C4: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_1:
    // 0x800362C8: jal         0x800362E0
    // 0x800362CC: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    func_800362E0(rdram, ctx);
        goto after_2;
    // 0x800362CC: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_2:
    // 0x800362D0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800362D4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800362D8: jr          $ra
    // 0x800362DC: nop

    return;
    // 0x800362DC: nop

;}
RECOMP_FUNC void func_800362E0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800362E0: andi        $t6, $a0, 0xFF
    ctx->r14 = ctx->r4 & 0XFF;
    // 0x800362E4: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800362E8: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800362EC: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800362F0: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800362F4: sll         $t7, $t7, 3
    ctx->r15 = S32(ctx->r15 << 3);
    // 0x800362F8: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800362FC: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80036300: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80036304: lui         $t8, 0x8012
    ctx->r24 = S32(0X8012 << 16);
    // 0x80036308: addiu       $t8, $t8, -0x2CF0
    ctx->r24 = ADD32(ctx->r24, -0X2CF0);
    // 0x8003630C: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80036310: addu        $v0, $t7, $t8
    ctx->r2 = ADD32(ctx->r15, ctx->r24);
    // 0x80036314: addiu       $t9, $zero, -0x1
    ctx->r25 = ADD32(0, -0X1);
    // 0x80036318: sh          $t9, 0xA90($v0)
    MEM_H(0XA90, ctx->r2) = ctx->r25;
    // 0x8003631C: lh          $v1, 0xA90($v0)
    ctx->r3 = MEM_H(ctx->r2, 0XA90);
    // 0x80036320: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x80036324: sh          $v1, 0xA8E($v0)
    MEM_H(0XA8E, ctx->r2) = ctx->r3;
    // 0x80036328: jr          $ra
    // 0x8003632C: sh          $v1, 0xA8C($v0)
    MEM_H(0XA8C, ctx->r2) = ctx->r3;
    return;
    // 0x8003632C: sh          $v1, 0xA8C($v0)
    MEM_H(0XA8C, ctx->r2) = ctx->r3;
;}
RECOMP_FUNC void func_80036330(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80036330: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80036334: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80036338: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8003633C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x80036340: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80036344: addiu       $a2, $zero, 0x140
    ctx->r6 = ADD32(0, 0X140);
    // 0x80036348: jal         0x800201A8
    // 0x8003634C: addiu       $a3, $zero, 0xF0
    ctx->r7 = ADD32(0, 0XF0);
    func_800201A8(rdram, ctx);
        goto after_0;
    // 0x8003634C: addiu       $a3, $zero, 0xF0
    ctx->r7 = ADD32(0, 0XF0);
    after_0:
    // 0x80036350: lui         $s0, 0x8012
    ctx->r16 = S32(0X8012 << 16);
    // 0x80036354: addiu       $s0, $s0, -0x3088
    ctx->r16 = ADD32(ctx->r16, -0X3088);
    // 0x80036358: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8003635C: jal         0x800218E0
    // 0x80036360: addiu       $a1, $zero, 0x11
    ctx->r5 = ADD32(0, 0X11);
    func_800218E0(rdram, ctx);
        goto after_1;
    // 0x80036360: addiu       $a1, $zero, 0x11
    ctx->r5 = ADD32(0, 0X11);
    after_1:
    // 0x80036364: jal         0x800348C0
    // 0x80036368: nop

    func_800348C0(rdram, ctx);
        goto after_2;
    // 0x80036368: nop

    after_2:
    // 0x8003636C: addiu       $t6, $zero, 0xA
    ctx->r14 = ADD32(0, 0XA);
    // 0x80036370: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x80036374: sh          $t6, 0x6DFE($at)
    MEM_H(0X6DFE, ctx->r1) = ctx->r14;
    // 0x80036378: lui         $v1, 0x8012
    ctx->r3 = S32(0X8012 << 16);
    // 0x8003637C: addiu       $v1, $v1, -0x2CF0
    ctx->r3 = ADD32(ctx->r3, -0X2CF0);
    // 0x80036380: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80036384: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x80036388: addiu       $t9, $zero, 0x2
    ctx->r25 = ADD32(0, 0X2);
    // 0x8003638C: addiu       $t0, $zero, 0x1E
    ctx->r8 = ADD32(0, 0X1E);
    // 0x80036390: addiu       $t1, $zero, 0x2
    ctx->r9 = ADD32(0, 0X2);
    // 0x80036394: sb          $zero, 0x1($s0)
    MEM_B(0X1, ctx->r16) = 0;
    // 0x80036398: sb          $t8, 0xF($s0)
    MEM_B(0XF, ctx->r16) = ctx->r24;
    // 0x8003639C: sb          $t8, 0xE($s0)
    MEM_B(0XE, ctx->r16) = ctx->r24;
    // 0x800363A0: sb          $t9, 0x2($s0)
    MEM_B(0X2, ctx->r16) = ctx->r25;
    // 0x800363A4: sb          $v0, 0x3($s0)
    MEM_B(0X3, ctx->r16) = ctx->r2;
    // 0x800363A8: sb          $zero, 0x5($s0)
    MEM_B(0X5, ctx->r16) = 0;
    // 0x800363AC: sb          $v0, 0xD($s0)
    MEM_B(0XD, ctx->r16) = ctx->r2;
    // 0x800363B0: sb          $t0, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r8;
    // 0x800363B4: jal         0x80038EB0
    // 0x800363B8: sb          $t1, 0xA94($v1)
    MEM_B(0XA94, ctx->r3) = ctx->r9;
    func_80038EB0(rdram, ctx);
        goto after_3;
    // 0x800363B8: sb          $t1, 0xA94($v1)
    MEM_B(0XA94, ctx->r3) = ctx->r9;
    after_3:
    // 0x800363BC: addiu       $t2, $zero, 0x24
    ctx->r10 = ADD32(0, 0X24);
    // 0x800363C0: jal         0x800382A8
    // 0x800363C4: sb          $t2, 0x6($s0)
    MEM_B(0X6, ctx->r16) = ctx->r10;
    func_800382A8(rdram, ctx);
        goto after_4;
    // 0x800363C4: sb          $t2, 0x6($s0)
    MEM_B(0X6, ctx->r16) = ctx->r10;
    after_4:
    // 0x800363C8: jal         0x800383DC
    // 0x800363CC: nop

    func_800383DC(rdram, ctx);
        goto after_5;
    // 0x800363CC: nop

    after_5:
    // 0x800363D0: jal         0x8003849C
    // 0x800363D4: nop

    func_8003849C(rdram, ctx);
        goto after_6;
    // 0x800363D4: nop

    after_6:
    // 0x800363D8: jal         0x80039638
    // 0x800363DC: nop

    func_80039638(rdram, ctx);
        goto after_7;
    // 0x800363DC: nop

    after_7:
    // 0x800363E0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x800363E4: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x800363E8: jr          $ra
    // 0x800363EC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x800363EC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_800363F0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800363F0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800363F4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800363F8: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x800363FC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80036400: addiu       $a2, $zero, 0x140
    ctx->r6 = ADD32(0, 0X140);
    // 0x80036404: jal         0x800201A8
    // 0x80036408: addiu       $a3, $zero, 0xF0
    ctx->r7 = ADD32(0, 0XF0);
    func_800201A8(rdram, ctx);
        goto after_0;
    // 0x80036408: addiu       $a3, $zero, 0xF0
    ctx->r7 = ADD32(0, 0XF0);
    after_0:
    // 0x8003640C: jal         0x8003610C
    // 0x80036410: nop

    func_8003610C(rdram, ctx);
        goto after_1;
    // 0x80036410: nop

    after_1:
    // 0x80036414: jal         0x8027EC64
    // 0x80036418: nop

    LOOKUP_FUNC(0x8027EC64)(rdram, ctx);
        goto after_2;
    // 0x80036418: nop

    after_2:
    // 0x8003641C: jal         0x8027F2F8
    // 0x80036420: nop

    LOOKUP_FUNC(0x8027F2F8)(rdram, ctx);
        goto after_3;
    // 0x80036420: nop

    after_3:
    // 0x80036424: jal         0x8002A840
    // 0x80036428: nop

    func_8002A840(rdram, ctx);
        goto after_4;
    // 0x80036428: nop

    after_4:
    // 0x8003642C: addiu       $t6, $zero, 0xA
    ctx->r14 = ADD32(0, 0XA);
    // 0x80036430: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x80036434: sh          $t6, 0x6DFE($at)
    MEM_H(0X6DFE, ctx->r1) = ctx->r14;
    // 0x80036438: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x8003643C: addiu       $a0, $a0, -0x30A0
    ctx->r4 = ADD32(ctx->r4, -0X30A0);
    // 0x80036440: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x80036444: addiu       $v0, $v0, -0x32B0
    ctx->r2 = ADD32(ctx->r2, -0X32B0);
    // 0x80036448: lui         $v1, 0x8012
    ctx->r3 = S32(0X8012 << 16);
    // 0x8003644C: sb          $zero, 0x0($a0)
    MEM_B(0X0, ctx->r4) = 0;
    // 0x80036450: lb          $t8, 0x0($a0)
    ctx->r24 = MEM_B(ctx->r4, 0X0);
    // 0x80036454: addiu       $v1, $v1, 0xB72
    ctx->r3 = ADD32(ctx->r3, 0XB72);
    // 0x80036458: sb          $zero, 0x10($v0)
    MEM_B(0X10, ctx->r2) = 0;
    // 0x8003645C: sb          $zero, 0x43($v0)
    MEM_B(0X43, ctx->r2) = 0;
    // 0x80036460: sh          $zero, 0x0($v1)
    MEM_H(0X0, ctx->r3) = 0;
    // 0x80036464: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x80036468: jal         0x80039CB4
    // 0x8003646C: sb          $t8, -0x3088($at)
    MEM_B(-0X3088, ctx->r1) = ctx->r24;
    func_80039CB4(rdram, ctx);
        goto after_5;
    // 0x8003646C: sb          $t8, -0x3088($at)
    MEM_B(-0X3088, ctx->r1) = ctx->r24;
    after_5:
    // 0x80036470: jal         0x80036278
    // 0x80036474: nop

    func_80036278(rdram, ctx);
        goto after_6;
    // 0x80036474: nop

    after_6:
    // 0x80036478: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x8003647C: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x80036480: jal         0x80038EB0
    // 0x80036484: sh          $t9, -0x32AA($at)
    MEM_H(-0X32AA, ctx->r1) = ctx->r25;
    func_80038EB0(rdram, ctx);
        goto after_7;
    // 0x80036484: sh          $t9, -0x32AA($at)
    MEM_H(-0X32AA, ctx->r1) = ctx->r25;
    after_7:
    // 0x80036488: jal         0x80039D64
    // 0x8003648C: nop

    func_80039D64(rdram, ctx);
        goto after_8;
    // 0x8003648C: nop

    after_8:
    // 0x80036490: jal         0x800364A8
    // 0x80036494: nop

    func_800364A8(rdram, ctx);
        goto after_9;
    // 0x80036494: nop

    after_9:
    // 0x80036498: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8003649C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800364A0: jr          $ra
    // 0x800364A4: nop

    return;
    // 0x800364A4: nop

;}
RECOMP_FUNC void func_800364A8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800364A8: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x800364AC: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x800364B0: lui         $s0, 0x8012
    ctx->r16 = S32(0X8012 << 16);
    // 0x800364B4: addiu       $s0, $s0, -0x3088
    ctx->r16 = ADD32(ctx->r16, -0X3088);
    // 0x800364B8: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800364BC: lb          $a0, 0x0($s0)
    ctx->r4 = MEM_B(ctx->r16, 0X0);
    // 0x800364C0: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x800364C4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800364C8: jal         0x8001D4C0
    // 0x800364CC: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    func_8001D4C0(rdram, ctx);
        goto after_0;
    // 0x800364CC: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_0:
    // 0x800364D0: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    // 0x800364D4: lb          $t6, 0x0($s0)
    ctx->r14 = MEM_B(ctx->r16, 0X0);
    // 0x800364D8: lui         $s1, 0x8012
    ctx->r17 = S32(0X8012 << 16);
    // 0x800364DC: addiu       $s1, $s1, -0x30A0
    ctx->r17 = ADD32(ctx->r17, -0X30A0);
    // 0x800364E0: sb          $t6, 0x0($s1)
    MEM_B(0X0, ctx->r17) = ctx->r14;
    // 0x800364E4: lb          $t7, 0x0($s1)
    ctx->r15 = MEM_B(ctx->r17, 0X0);
    // 0x800364E8: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x800364EC: jal         0x80039CB4
    // 0x800364F0: sh          $t7, 0xB72($at)
    MEM_H(0XB72, ctx->r1) = ctx->r15;
    func_80039CB4(rdram, ctx);
        goto after_1;
    // 0x800364F0: sh          $t7, 0xB72($at)
    MEM_H(0XB72, ctx->r1) = ctx->r15;
    after_1:
    // 0x800364F4: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x800364F8: jal         0x80039028
    // 0x800364FC: sb          $zero, -0x32B0($at)
    MEM_B(-0X32B0, ctx->r1) = 0;
    func_80039028(rdram, ctx);
        goto after_2;
    // 0x800364FC: sb          $zero, -0x32B0($at)
    MEM_B(-0X32B0, ctx->r1) = 0;
    after_2:
    // 0x80036500: beq         $v0, $zero, L_800366AC
    if (ctx->r2 == 0) {
        // 0x80036504: addiu       $t6, $zero, 0x1
        ctx->r14 = ADD32(0, 0X1);
            goto L_800366AC;
    }
    // 0x80036504: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x80036508: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x8003650C: lbu         $v0, -0x32A4($v0)
    ctx->r2 = MEM_BU(ctx->r2, -0X32A4);
    // 0x80036510: addiu       $at, $zero, 0x6
    ctx->r1 = ADD32(0, 0X6);
    // 0x80036514: beq         $v0, $at, L_800366AC
    if (ctx->r2 == ctx->r1) {
        // 0x80036518: or          $a1, $zero, $zero
        ctx->r5 = 0 | 0;
            goto L_800366AC;
    }
    // 0x80036518: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8003651C: addiu       $at, $zero, 0x5
    ctx->r1 = ADD32(0, 0X5);
    // 0x80036520: beq         $v0, $at, L_80036534
    if (ctx->r2 == ctx->r1) {
        // 0x80036524: addiu       $a2, $zero, 0x4
        ctx->r6 = ADD32(0, 0X4);
            goto L_80036534;
    }
    // 0x80036524: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    // 0x80036528: addiu       $at, $zero, 0x7
    ctx->r1 = ADD32(0, 0X7);
    // 0x8003652C: bne         $v0, $at, L_80036548
    if (ctx->r2 != ctx->r1) {
        // 0x80036530: nop
    
            goto L_80036548;
    }
    // 0x80036530: nop

L_80036534:
    // 0x80036534: sb          $zero, 0x1($s1)
    MEM_B(0X1, ctx->r17) = 0;
    // 0x80036538: lb          $t8, 0x1($s1)
    ctx->r24 = MEM_B(ctx->r17, 0X1);
    // 0x8003653C: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x80036540: b           L_80036580
    // 0x80036544: sh          $t8, 0xB82($at)
    MEM_H(0XB82, ctx->r1) = ctx->r24;
        goto L_80036580;
    // 0x80036544: sh          $t8, 0xB82($at)
    MEM_H(0XB82, ctx->r1) = ctx->r24;
L_80036548:
    // 0x80036548: lb          $v0, 0x1($s0)
    ctx->r2 = MEM_B(ctx->r16, 0X1);
    // 0x8003654C: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x80036550: slti        $at, $v0, 0x3
    ctx->r1 = SIGNED(ctx->r2) < 0X3 ? 1 : 0;
    // 0x80036554: beq         $at, $zero, L_80036564
    if (ctx->r1 == 0) {
        // 0x80036558: nop
    
            goto L_80036564;
    }
    // 0x80036558: nop

    // 0x8003655C: b           L_80036564
    // 0x80036560: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
        goto L_80036564;
    // 0x80036560: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
L_80036564:
    // 0x80036564: sb          $v1, 0x1($s0)
    MEM_B(0X1, ctx->r16) = ctx->r3;
    // 0x80036568: lb          $t9, 0x1($s0)
    ctx->r25 = MEM_B(ctx->r16, 0X1);
    // 0x8003656C: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x80036570: sb          $t9, 0x1($s1)
    MEM_B(0X1, ctx->r17) = ctx->r25;
    // 0x80036574: lb          $t0, 0x1($s1)
    ctx->r8 = MEM_B(ctx->r17, 0X1);
    // 0x80036578: nop

    // 0x8003657C: sh          $t0, 0xB82($at)
    MEM_H(0XB82, ctx->r1) = ctx->r8;
L_80036580:
    // 0x80036580: lb          $t1, 0x3($s0)
    ctx->r9 = MEM_B(ctx->r16, 0X3);
    // 0x80036584: lb          $t4, 0x4($s0)
    ctx->r12 = MEM_B(ctx->r16, 0X4);
    // 0x80036588: andi        $t2, $t1, 0x3
    ctx->r10 = ctx->r9 & 0X3;
    // 0x8003658C: andi        $t5, $t4, 0x1
    ctx->r13 = ctx->r12 & 0X1;
    // 0x80036590: sb          $t2, 0x3($s0)
    MEM_B(0X3, ctx->r16) = ctx->r10;
    // 0x80036594: sb          $t5, 0x4($s0)
    MEM_B(0X4, ctx->r16) = ctx->r13;
    // 0x80036598: lb          $t3, 0x3($s0)
    ctx->r11 = MEM_B(ctx->r16, 0X3);
    // 0x8003659C: lb          $t6, 0x4($s0)
    ctx->r14 = MEM_B(ctx->r16, 0X4);
    // 0x800365A0: lb          $a0, 0x5($s0)
    ctx->r4 = MEM_B(ctx->r16, 0X5);
    // 0x800365A4: sb          $t3, 0x3($s1)
    MEM_B(0X3, ctx->r17) = ctx->r11;
    // 0x800365A8: jal         0x8001D4C0
    // 0x800365AC: sb          $t6, 0x4($s1)
    MEM_B(0X4, ctx->r17) = ctx->r14;
    func_8001D4C0(rdram, ctx);
        goto after_3;
    // 0x800365AC: sb          $t6, 0x4($s1)
    MEM_B(0X4, ctx->r17) = ctx->r14;
    after_3:
    // 0x800365B0: sb          $v0, 0x5($s0)
    MEM_B(0X5, ctx->r16) = ctx->r2;
    // 0x800365B4: lb          $t7, 0x5($s0)
    ctx->r15 = MEM_B(ctx->r16, 0X5);
    // 0x800365B8: lui         $t8, 0x8012
    ctx->r24 = S32(0X8012 << 16);
    // 0x800365BC: sb          $t7, 0x5($s1)
    MEM_B(0X5, ctx->r17) = ctx->r15;
    // 0x800365C0: lbu         $t8, -0x32A4($t8)
    ctx->r24 = MEM_BU(ctx->r24, -0X32A4);
    // 0x800365C4: addiu       $at, $zero, 0x7
    ctx->r1 = ADD32(0, 0X7);
    // 0x800365C8: bne         $t8, $at, L_800365D4
    if (ctx->r24 != ctx->r1) {
        // 0x800365CC: addiu       $t9, $zero, 0x5
        ctx->r25 = ADD32(0, 0X5);
            goto L_800365D4;
    }
    // 0x800365CC: addiu       $t9, $zero, 0x5
    ctx->r25 = ADD32(0, 0X5);
    // 0x800365D0: sb          $t9, 0x5($s1)
    MEM_B(0X5, ctx->r17) = ctx->r25;
L_800365D4:
    // 0x800365D4: jal         0x8003906C
    // 0x800365D8: nop

    func_8003906C(rdram, ctx);
        goto after_4;
    // 0x800365D8: nop

    after_4:
    // 0x800365DC: bne         $v0, $zero, L_80036620
    if (ctx->r2 != 0) {
        // 0x800365E0: nop
    
            goto L_80036620;
    }
    // 0x800365E0: nop

    // 0x800365E4: lb          $v0, 0x7($s0)
    ctx->r2 = MEM_B(ctx->r16, 0X7);
    // 0x800365E8: nop

    // 0x800365EC: andi        $t0, $v0, 0x3
    ctx->r8 = ctx->r2 & 0X3;
    // 0x800365F0: slti        $at, $t0, 0x3
    ctx->r1 = SIGNED(ctx->r8) < 0X3 ? 1 : 0;
    // 0x800365F4: beq         $at, $zero, L_80036604
    if (ctx->r1 == 0) {
        // 0x800365F8: nop
    
            goto L_80036604;
    }
    // 0x800365F8: nop

    // 0x800365FC: b           L_80036610
    // 0x80036600: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
        goto L_80036610;
    // 0x80036600: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
L_80036604:
    // 0x80036604: jal         0x8003609C
    // 0x80036608: nop

    func_8003609C(rdram, ctx);
        goto after_5;
    // 0x80036608: nop

    after_5:
    // 0x8003660C: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
L_80036610:
    // 0x80036610: sb          $v1, 0x7($s1)
    MEM_B(0X7, ctx->r17) = ctx->r3;
    // 0x80036614: lb          $t1, 0x7($s1)
    ctx->r9 = MEM_B(ctx->r17, 0X7);
    // 0x80036618: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x8003661C: sh          $t1, 0xB7C($at)
    MEM_H(0XB7C, ctx->r1) = ctx->r9;
L_80036620:
    // 0x80036620: lb          $t2, 0x8($s0)
    ctx->r10 = MEM_B(ctx->r16, 0X8);
    // 0x80036624: lb          $t5, 0x9($s0)
    ctx->r13 = MEM_B(ctx->r16, 0X9);
    // 0x80036628: lb          $t8, 0xA($s0)
    ctx->r24 = MEM_B(ctx->r16, 0XA);
    // 0x8003662C: lb          $t1, 0xD($s0)
    ctx->r9 = MEM_B(ctx->r16, 0XD);
    // 0x80036630: andi        $t3, $t2, 0x1
    ctx->r11 = ctx->r10 & 0X1;
    // 0x80036634: sb          $t3, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r11;
    // 0x80036638: andi        $t6, $t5, 0x1
    ctx->r14 = ctx->r13 & 0X1;
    // 0x8003663C: andi        $t9, $t8, 0x1
    ctx->r25 = ctx->r24 & 0X1;
    // 0x80036640: andi        $t2, $t1, 0x1
    ctx->r10 = ctx->r9 & 0X1;
    // 0x80036644: lb          $v0, 0x2($s0)
    ctx->r2 = MEM_B(ctx->r16, 0X2);
    // 0x80036648: sb          $t6, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r14;
    // 0x8003664C: sb          $t9, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r25;
    // 0x80036650: sb          $t2, 0xD($s0)
    MEM_B(0XD, ctx->r16) = ctx->r10;
    // 0x80036654: lb          $t4, 0x8($s0)
    ctx->r12 = MEM_B(ctx->r16, 0X8);
    // 0x80036658: lb          $t7, 0x9($s0)
    ctx->r15 = MEM_B(ctx->r16, 0X9);
    // 0x8003665C: lb          $t0, 0xA($s0)
    ctx->r8 = MEM_B(ctx->r16, 0XA);
    // 0x80036660: lb          $t3, 0xD($s0)
    ctx->r11 = MEM_B(ctx->r16, 0XD);
    // 0x80036664: slti        $at, $v0, 0x5
    ctx->r1 = SIGNED(ctx->r2) < 0X5 ? 1 : 0;
    // 0x80036668: sb          $t4, 0x8($s1)
    MEM_B(0X8, ctx->r17) = ctx->r12;
    // 0x8003666C: sb          $t7, 0x9($s1)
    MEM_B(0X9, ctx->r17) = ctx->r15;
    // 0x80036670: sb          $t0, 0xA($s1)
    MEM_B(0XA, ctx->r17) = ctx->r8;
    // 0x80036674: beq         $at, $zero, L_80036684
    if (ctx->r1 == 0) {
        // 0x80036678: sb          $t3, 0xD($s1)
        MEM_B(0XD, ctx->r17) = ctx->r11;
            goto L_80036684;
    }
    // 0x80036678: sb          $t3, 0xD($s1)
    MEM_B(0XD, ctx->r17) = ctx->r11;
    // 0x8003667C: b           L_80036688
    // 0x80036680: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
        goto L_80036688;
    // 0x80036680: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
L_80036684:
    // 0x80036684: addiu       $v1, $zero, 0x2
    ctx->r3 = ADD32(0, 0X2);
L_80036688:
    // 0x80036688: sb          $v1, 0x2($s0)
    MEM_B(0X2, ctx->r16) = ctx->r3;
    // 0x8003668C: lb          $t4, 0x2($s0)
    ctx->r12 = MEM_B(ctx->r16, 0X2);
    // 0x80036690: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x80036694: sb          $t4, 0x2($s1)
    MEM_B(0X2, ctx->r17) = ctx->r12;
    // 0x80036698: lb          $t5, 0x2($s1)
    ctx->r13 = MEM_B(ctx->r17, 0X2);
    // 0x8003669C: lbu         $v0, -0x32A4($v0)
    ctx->r2 = MEM_BU(ctx->r2, -0X32A4);
    // 0x800366A0: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x800366A4: b           L_80036788
    // 0x800366A8: sh          $t5, 0xB80($at)
    MEM_H(0XB80, ctx->r1) = ctx->r13;
        goto L_80036788;
    // 0x800366A8: sh          $t5, 0xB80($at)
    MEM_H(0XB80, ctx->r1) = ctx->r13;
L_800366AC:
    // 0x800366AC: sb          $t6, 0x3($s1)
    MEM_B(0X3, ctx->r17) = ctx->r14;
    // 0x800366B0: sb          $zero, 0x8($s1)
    MEM_B(0X8, ctx->r17) = 0;
    // 0x800366B4: sb          $zero, 0x9($s1)
    MEM_B(0X9, ctx->r17) = 0;
    // 0x800366B8: jal         0x8004974C
    // 0x800366BC: sb          $zero, 0xA($s1)
    MEM_B(0XA, ctx->r17) = 0;
    func_8004974C(rdram, ctx);
        goto after_6;
    // 0x800366BC: sb          $zero, 0xA($s1)
    MEM_B(0XA, ctx->r17) = 0;
    after_6:
    // 0x800366C0: slti        $at, $v0, 0x3
    ctx->r1 = SIGNED(ctx->r2) < 0X3 ? 1 : 0;
    // 0x800366C4: beq         $at, $zero, L_800366D8
    if (ctx->r1 == 0) {
        // 0x800366C8: lui         $t9, 0x8012
        ctx->r25 = S32(0X8012 << 16);
            goto L_800366D8;
    }
    // 0x800366C8: lui         $t9, 0x8012
    ctx->r25 = S32(0X8012 << 16);
    // 0x800366CC: addiu       $t7, $zero, 0x2
    ctx->r15 = ADD32(0, 0X2);
    // 0x800366D0: b           L_800366E0
    // 0x800366D4: sb          $t7, 0xD($s1)
    MEM_B(0XD, ctx->r17) = ctx->r15;
        goto L_800366E0;
    // 0x800366D4: sb          $t7, 0xD($s1)
    MEM_B(0XD, ctx->r17) = ctx->r15;
L_800366D8:
    // 0x800366D8: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x800366DC: sb          $t8, 0xD($s1)
    MEM_B(0XD, ctx->r17) = ctx->r24;
L_800366E0:
    // 0x800366E0: lbu         $t9, -0x32A4($t9)
    ctx->r25 = MEM_BU(ctx->r25, -0X32A4);
    // 0x800366E4: addiu       $at, $zero, 0x6
    ctx->r1 = ADD32(0, 0X6);
    // 0x800366E8: bne         $t9, $at, L_800366F4
    if (ctx->r25 != ctx->r1) {
        // 0x800366EC: addiu       $t0, $zero, 0x2
        ctx->r8 = ADD32(0, 0X2);
            goto L_800366F4;
    }
    // 0x800366EC: addiu       $t0, $zero, 0x2
    ctx->r8 = ADD32(0, 0X2);
    // 0x800366F0: sb          $t0, 0xD($s1)
    MEM_B(0XD, ctx->r17) = ctx->r8;
L_800366F4:
    // 0x800366F4: lb          $t1, 0x1($s1)
    ctx->r9 = MEM_B(ctx->r17, 0X1);
    // 0x800366F8: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x800366FC: jal         0x8003906C
    // 0x80036700: sh          $t1, 0xB82($at)
    MEM_H(0XB82, ctx->r1) = ctx->r9;
    func_8003906C(rdram, ctx);
        goto after_7;
    // 0x80036700: sh          $t1, 0xB82($at)
    MEM_H(0XB82, ctx->r1) = ctx->r9;
    after_7:
    // 0x80036704: bne         $v0, $zero, L_80036718
    if (ctx->r2 != 0) {
        // 0x80036708: lui         $v1, 0x8012
        ctx->r3 = S32(0X8012 << 16);
            goto L_80036718;
    }
    // 0x80036708: lui         $v1, 0x8012
    ctx->r3 = S32(0X8012 << 16);
    // 0x8003670C: lb          $t2, 0x7($s1)
    ctx->r10 = MEM_B(ctx->r17, 0X7);
    // 0x80036710: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x80036714: sh          $t2, 0xB7C($at)
    MEM_H(0XB7C, ctx->r1) = ctx->r10;
L_80036718:
    // 0x80036718: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x8003671C: lbu         $v0, -0x32A4($v0)
    ctx->r2 = MEM_BU(ctx->r2, -0X32A4);
    // 0x80036720: addiu       $at, $zero, 0x6
    ctx->r1 = ADD32(0, 0X6);
    // 0x80036724: beq         $v0, $at, L_80036770
    if (ctx->r2 == ctx->r1) {
        // 0x80036728: lui         $t3, 0x8012
        ctx->r11 = S32(0X8012 << 16);
            goto L_80036770;
    }
    // 0x80036728: lui         $t3, 0x8012
    ctx->r11 = S32(0X8012 << 16);
    // 0x8003672C: lb          $t3, -0x32A1($t3)
    ctx->r11 = MEM_B(ctx->r11, -0X32A1);
    // 0x80036730: lui         $v1, 0x8011
    ctx->r3 = S32(0X8011 << 16);
    // 0x80036734: sll         $t4, $t3, 2
    ctx->r12 = S32(ctx->r11 << 2);
    // 0x80036738: subu        $t4, $t4, $t3
    ctx->r12 = SUB32(ctx->r12, ctx->r11);
    // 0x8003673C: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x80036740: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x80036744: sll         $t4, $t4, 3
    ctx->r12 = S32(ctx->r12 << 3);
    // 0x80036748: subu        $t4, $t4, $t3
    ctx->r12 = SUB32(ctx->r12, ctx->r11);
    // 0x8003674C: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x80036750: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x80036754: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x80036758: subu        $t4, $t4, $t3
    ctx->r12 = SUB32(ctx->r12, ctx->r11);
    // 0x8003675C: sll         $t4, $t4, 3
    ctx->r12 = S32(ctx->r12 << 3);
    // 0x80036760: addu        $v1, $v1, $t4
    ctx->r3 = ADD32(ctx->r3, ctx->r12);
    // 0x80036764: lb          $v1, -0x2F7E($v1)
    ctx->r3 = MEM_B(ctx->r3, -0X2F7E);
    // 0x80036768: b           L_8003677C
    // 0x8003676C: sb          $v1, 0x2($s1)
    MEM_B(0X2, ctx->r17) = ctx->r3;
        goto L_8003677C;
    // 0x8003676C: sb          $v1, 0x2($s1)
    MEM_B(0X2, ctx->r17) = ctx->r3;
L_80036770:
    // 0x80036770: lbu         $v1, -0x317A($v1)
    ctx->r3 = MEM_BU(ctx->r3, -0X317A);
    // 0x80036774: nop

    // 0x80036778: sb          $v1, 0x2($s1)
    MEM_B(0X2, ctx->r17) = ctx->r3;
L_8003677C:
    // 0x8003677C: lb          $t5, 0x2($s1)
    ctx->r13 = MEM_B(ctx->r17, 0X2);
    // 0x80036780: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x80036784: sh          $t5, 0xB80($at)
    MEM_H(0XB80, ctx->r1) = ctx->r13;
L_80036788:
    // 0x80036788: addiu       $at, $zero, 0x7
    ctx->r1 = ADD32(0, 0X7);
    // 0x8003678C: bne         $v0, $at, L_8003679C
    if (ctx->r2 != ctx->r1) {
        // 0x80036790: or          $a1, $zero, $zero
        ctx->r5 = 0 | 0;
            goto L_8003679C;
    }
    // 0x80036790: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80036794: b           L_800367B8
    // 0x80036798: sb          $zero, 0xB($s1)
    MEM_B(0XB, ctx->r17) = 0;
        goto L_800367B8;
    // 0x80036798: sb          $zero, 0xB($s1)
    MEM_B(0XB, ctx->r17) = 0;
L_8003679C:
    // 0x8003679C: lb          $t6, 0xB($s0)
    ctx->r14 = MEM_B(ctx->r16, 0XB);
    // 0x800367A0: nop

    // 0x800367A4: andi        $t7, $t6, 0x1
    ctx->r15 = ctx->r14 & 0X1;
    // 0x800367A8: sb          $t7, 0xB($s0)
    MEM_B(0XB, ctx->r16) = ctx->r15;
    // 0x800367AC: lb          $t8, 0xB($s0)
    ctx->r24 = MEM_B(ctx->r16, 0XB);
    // 0x800367B0: nop

    // 0x800367B4: sb          $t8, 0xB($s1)
    MEM_B(0XB, ctx->r17) = ctx->r24;
L_800367B8:
    // 0x800367B8: lb          $t9, 0xC($s0)
    ctx->r25 = MEM_B(ctx->r16, 0XC);
    // 0x800367BC: lbu         $a0, 0xE($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0XE);
    // 0x800367C0: andi        $t0, $t9, 0x1
    ctx->r8 = ctx->r25 & 0X1;
    // 0x800367C4: sb          $t0, 0xC($s0)
    MEM_B(0XC, ctx->r16) = ctx->r8;
    // 0x800367C8: lb          $t1, 0xC($s0)
    ctx->r9 = MEM_B(ctx->r16, 0XC);
    // 0x800367CC: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    // 0x800367D0: jal         0x8001D4C0
    // 0x800367D4: sb          $t1, 0xC($s1)
    MEM_B(0XC, ctx->r17) = ctx->r9;
    func_8001D4C0(rdram, ctx);
        goto after_8;
    // 0x800367D4: sb          $t1, 0xC($s1)
    MEM_B(0XC, ctx->r17) = ctx->r9;
    after_8:
    // 0x800367D8: lbu         $a0, 0xF($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0XF);
    // 0x800367DC: sb          $v0, 0xE($s0)
    MEM_B(0XE, ctx->r16) = ctx->r2;
    // 0x800367E0: sb          $v0, 0xE($s1)
    MEM_B(0XE, ctx->r17) = ctx->r2;
    // 0x800367E4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800367E8: jal         0x8001D4C0
    // 0x800367EC: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    func_8001D4C0(rdram, ctx);
        goto after_9;
    // 0x800367EC: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    after_9:
    // 0x800367F0: sb          $v0, 0xF($s0)
    MEM_B(0XF, ctx->r16) = ctx->r2;
    // 0x800367F4: jal         0x800391DC
    // 0x800367F8: sb          $v0, 0xF($s1)
    MEM_B(0XF, ctx->r17) = ctx->r2;
    func_800391DC(rdram, ctx);
        goto after_10;
    // 0x800367F8: sb          $v0, 0xF($s1)
    MEM_B(0XF, ctx->r17) = ctx->r2;
    after_10:
    // 0x800367FC: jal         0x8003906C
    // 0x80036800: nop

    func_8003906C(rdram, ctx);
        goto after_11;
    // 0x80036800: nop

    after_11:
    // 0x80036804: bne         $v0, $zero, L_8003681C
    if (ctx->r2 != 0) {
        // 0x80036808: lui         $v0, 0x8012
        ctx->r2 = S32(0X8012 << 16);
            goto L_8003681C;
    }
    // 0x80036808: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x8003680C: addiu       $v0, $v0, -0x32B0
    ctx->r2 = ADD32(ctx->r2, -0X32B0);
    // 0x80036810: sb          $zero, 0x6B($v0)
    MEM_B(0X6B, ctx->r2) = 0;
    // 0x80036814: jal         0x80039214
    // 0x80036818: sb          $zero, 0x6C($v0)
    MEM_B(0X6C, ctx->r2) = 0;
    func_80039214(rdram, ctx);
        goto after_12;
    // 0x80036818: sb          $zero, 0x6C($v0)
    MEM_B(0X6C, ctx->r2) = 0;
    after_12:
L_8003681C:
    // 0x8003681C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80036820: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x80036824: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x80036828: jr          $ra
    // 0x8003682C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x8003682C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_80036830(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80036830: lui         $t7, 0x8011
    ctx->r15 = S32(0X8011 << 16);
    // 0x80036834: lw          $t7, -0x2F98($t7)
    ctx->r15 = MEM_W(ctx->r15, -0X2F98);
    // 0x80036838: lui         $t6, 0x800B
    ctx->r14 = S32(0X800B << 16);
    // 0x8003683C: lui         $at, 0x3
    ctx->r1 = S32(0X3 << 16);
    // 0x80036840: addiu       $t6, $t6, -0x440
    ctx->r14 = ADD32(ctx->r14, -0X440);
    // 0x80036844: addu        $at, $at, $t7
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x80036848: sw          $t6, -0x1178($at)
    MEM_W(-0X1178, ctx->r1) = ctx->r14;
    // 0x8003684C: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x80036850: jr          $ra
    // 0x80036854: sb          $zero, -0x329A($at)
    MEM_B(-0X329A, ctx->r1) = 0;
    return;
    // 0x80036854: sb          $zero, -0x329A($at)
    MEM_B(-0X329A, ctx->r1) = 0;
;}
RECOMP_FUNC void func_80036858(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80036858: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8003685C: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x80036860: lui         $v1, 0x8012
    ctx->r3 = S32(0X8012 << 16);
    // 0x80036864: addiu       $v1, $v1, -0x2CF0
    ctx->r3 = ADD32(ctx->r3, -0X2CF0);
    // 0x80036868: addiu       $v0, $v0, -0x32B0
    ctx->r2 = ADD32(ctx->r2, -0X32B0);
    // 0x8003686C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80036870: sb          $zero, 0xF($v0)
    MEM_B(0XF, ctx->r2) = 0;
    // 0x80036874: sb          $zero, 0x868($v1)
    MEM_B(0X868, ctx->r3) = 0;
    // 0x80036878: jal         0x80038EB0
    // 0x8003687C: sb          $zero, 0x12FC($v1)
    MEM_B(0X12FC, ctx->r3) = 0;
    func_80038EB0(rdram, ctx);
        goto after_0;
    // 0x8003687C: sb          $zero, 0x12FC($v1)
    MEM_B(0X12FC, ctx->r3) = 0;
    after_0:
    // 0x80036880: jal         0x80039D64
    // 0x80036884: nop

    func_80039D64(rdram, ctx);
        goto after_1;
    // 0x80036884: nop

    after_1:
    // 0x80036888: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x8003688C: addiu       $a0, $a0, -0x30A0
    ctx->r4 = ADD32(ctx->r4, -0X30A0);
    // 0x80036890: lui         $v1, 0x8012
    ctx->r3 = S32(0X8012 << 16);
    // 0x80036894: sb          $zero, 0x0($a0)
    MEM_B(0X0, ctx->r4) = 0;
    // 0x80036898: lb          $t7, 0x0($a0)
    ctx->r15 = MEM_B(ctx->r4, 0X0);
    // 0x8003689C: addiu       $v1, $v1, 0xB72
    ctx->r3 = ADD32(ctx->r3, 0XB72);
    // 0x800368A0: sh          $zero, 0x0($v1)
    MEM_H(0X0, ctx->r3) = 0;
    // 0x800368A4: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x800368A8: jal         0x80039CB4
    // 0x800368AC: sb          $t7, -0x3088($at)
    MEM_B(-0X3088, ctx->r1) = ctx->r15;
    func_80039CB4(rdram, ctx);
        goto after_2;
    // 0x800368AC: sb          $t7, -0x3088($at)
    MEM_B(-0X3088, ctx->r1) = ctx->r15;
    after_2:
    // 0x800368B0: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x800368B4: addiu       $v0, $v0, -0x32B0
    ctx->r2 = ADD32(ctx->r2, -0X32B0);
    // 0x800368B8: andi        $t1, $zero, 0xFF
    ctx->r9 = 0 & 0XFF;
    // 0x800368BC: lui         $v1, 0x800A
    ctx->r3 = S32(0X800A << 16);
    // 0x800368C0: addiu       $v1, $v1, 0x6DF0
    ctx->r3 = ADD32(ctx->r3, 0X6DF0);
    // 0x800368C4: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x800368C8: sh          $t8, 0x6($v0)
    MEM_H(0X6, ctx->r2) = ctx->r24;
    // 0x800368CC: sh          $t1, 0xE($v1)
    MEM_H(0XE, ctx->r3) = ctx->r9;
    // 0x800368D0: sb          $t1, 0x12($v0)
    MEM_B(0X12, ctx->r2) = ctx->r9;
    // 0x800368D4: sb          $t1, 0x11($v0)
    MEM_B(0X11, ctx->r2) = ctx->r9;
    // 0x800368D8: sb          $zero, 0x10($v0)
    MEM_B(0X10, ctx->r2) = 0;
    // 0x800368DC: lui         $at, 0x8011
    ctx->r1 = S32(0X8011 << 16);
    // 0x800368E0: sb          $zero, -0x301C($at)
    MEM_B(-0X301C, ctx->r1) = 0;
    // 0x800368E4: sb          $zero, 0x1C($v0)
    MEM_B(0X1C, ctx->r2) = 0;
    // 0x800368E8: sb          $zero, 0x1D($v0)
    MEM_B(0X1D, ctx->r2) = 0;
    // 0x800368EC: sb          $zero, 0x14($v0)
    MEM_B(0X14, ctx->r2) = 0;
    // 0x800368F0: sb          $zero, 0x15($v0)
    MEM_B(0X15, ctx->r2) = 0;
    // 0x800368F4: sb          $zero, 0x16($v0)
    MEM_B(0X16, ctx->r2) = 0;
    // 0x800368F8: sb          $zero, 0x19($v0)
    MEM_B(0X19, ctx->r2) = 0;
    // 0x800368FC: lui         $t2, 0x800A
    ctx->r10 = S32(0X800A << 16);
    // 0x80036900: lhu         $t2, -0x2390($t2)
    ctx->r10 = MEM_HU(ctx->r10, -0X2390);
    // 0x80036904: lui         $a1, 0x8012
    ctx->r5 = S32(0X8012 << 16);
    // 0x80036908: beq         $t2, $zero, L_80036918
    if (ctx->r10 == 0) {
        // 0x8003690C: addiu       $a1, $a1, -0x3088
        ctx->r5 = ADD32(ctx->r5, -0X3088);
            goto L_80036918;
    }
    // 0x8003690C: addiu       $a1, $a1, -0x3088
    ctx->r5 = ADD32(ctx->r5, -0X3088);
    // 0x80036910: addiu       $t3, $zero, 0x29
    ctx->r11 = ADD32(0, 0X29);
    // 0x80036914: sb          $t3, 0x6($a1)
    MEM_B(0X6, ctx->r5) = ctx->r11;
L_80036918:
    // 0x80036918: lb          $t4, 0x6($a1)
    ctx->r12 = MEM_B(ctx->r5, 0X6);
    // 0x8003691C: lui         $a0, 0x8011
    ctx->r4 = S32(0X8011 << 16);
    // 0x80036920: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x80036924: addiu       $a0, $a0, -0x2F80
    ctx->r4 = ADD32(ctx->r4, -0X2F80);
    // 0x80036928: sb          $t4, -0x309A($at)
    MEM_B(-0X309A, ctx->r1) = ctx->r12;
    // 0x8003692C: sb          $zero, 0x3399($a0)
    MEM_B(0X3399, ctx->r4) = 0;
    // 0x80036930: lb          $v1, 0x3399($a0)
    ctx->r3 = MEM_B(ctx->r4, 0X3399);
    // 0x80036934: sb          $zero, 0x0($v0)
    MEM_B(0X0, ctx->r2) = 0;
    // 0x80036938: sb          $zero, 0x3E($v0)
    MEM_B(0X3E, ctx->r2) = 0;
    // 0x8003693C: sb          $v1, 0x1($a0)
    MEM_B(0X1, ctx->r4) = ctx->r3;
    // 0x80036940: sb          $v1, 0x3398($a0)
    MEM_B(0X3398, ctx->r4) = ctx->r3;
    // 0x80036944: jal         0x800356EC
    // 0x80036948: sb          $v1, 0x0($a0)
    MEM_B(0X0, ctx->r4) = ctx->r3;
    func_800356EC(rdram, ctx);
        goto after_3;
    // 0x80036948: sb          $v1, 0x0($a0)
    MEM_B(0X0, ctx->r4) = ctx->r3;
    after_3:
    // 0x8003694C: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x80036950: addiu       $v0, $v0, -0x2CF0
    ctx->r2 = ADD32(ctx->r2, -0X2CF0);
    // 0x80036954: addiu       $t5, $zero, 0x1E
    ctx->r13 = ADD32(0, 0X1E);
    // 0x80036958: addiu       $t6, $zero, 0x2
    ctx->r14 = ADD32(0, 0X2);
    // 0x8003695C: sb          $t5, 0x0($v0)
    MEM_B(0X0, ctx->r2) = ctx->r13;
    // 0x80036960: jal         0x800369CC
    // 0x80036964: sb          $t6, 0xA94($v0)
    MEM_B(0XA94, ctx->r2) = ctx->r14;
    func_800369CC(rdram, ctx);
        goto after_4;
    // 0x80036964: sb          $t6, 0xA94($v0)
    MEM_B(0XA94, ctx->r2) = ctx->r14;
    after_4:
    // 0x80036968: jal         0x8003294C
    // 0x8003696C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    func_8003294C(rdram, ctx);
        goto after_5;
    // 0x8003696C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_5:
    // 0x80036970: jal         0x80032310
    // 0x80036974: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    func_80032310(rdram, ctx);
        goto after_6;
    // 0x80036974: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_6:
    // 0x80036978: jal         0x80032EC0
    // 0x8003697C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    func_80032EC0(rdram, ctx);
        goto after_7;
    // 0x8003697C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_7:
    // 0x80036980: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80036984: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80036988: jr          $ra
    // 0x8003698C: nop

    return;
    // 0x8003698C: nop

;}
RECOMP_FUNC void func_80036990(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80036990: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80036994: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80036998: jal         0x8003A108
    // 0x8003699C: nop

    func_8003A108(rdram, ctx);
        goto after_0;
    // 0x8003699C: nop

    after_0:
    // 0x800369A0: jal         0x8003A150
    // 0x800369A4: nop

    func_8003A150(rdram, ctx);
        goto after_1;
    // 0x800369A4: nop

    after_1:
    // 0x800369A8: jal         0x800369CC
    // 0x800369AC: nop

    func_800369CC(rdram, ctx);
        goto after_2;
    // 0x800369AC: nop

    after_2:
    // 0x800369B0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800369B4: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x800369B8: addiu       $v0, $v0, -0x2CF0
    ctx->r2 = ADD32(ctx->r2, -0X2CF0);
    // 0x800369BC: sb          $zero, 0x133C($v0)
    MEM_B(0X133C, ctx->r2) = 0;
    // 0x800369C0: sb          $zero, 0x8A8($v0)
    MEM_B(0X8A8, ctx->r2) = 0;
    // 0x800369C4: jr          $ra
    // 0x800369C8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x800369C8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_800369CC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800369CC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800369D0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800369D4: jal         0x80036278
    // 0x800369D8: nop

    func_80036278(rdram, ctx);
        goto after_0;
    // 0x800369D8: nop

    after_0:
    // 0x800369DC: jal         0x80039258
    // 0x800369E0: nop

    func_80039258(rdram, ctx);
        goto after_1;
    // 0x800369E0: nop

    after_1:
    // 0x800369E4: jal         0x800598D0
    // 0x800369E8: nop

    func_800598D0(rdram, ctx);
        goto after_2;
    // 0x800369E8: nop

    after_2:
    // 0x800369EC: jal         0x8005AC60
    // 0x800369F0: nop

    func_8005AC60(rdram, ctx);
        goto after_3;
    // 0x800369F0: nop

    after_3:
    // 0x800369F4: jal         0x8005ACAC
    // 0x800369F8: nop

    func_8005ACAC(rdram, ctx);
        goto after_4;
    // 0x800369F8: nop

    after_4:
    // 0x800369FC: jal         0x800603F0
    // 0x80036A00: nop

    func_800603F0(rdram, ctx);
        goto after_5;
    // 0x80036A00: nop

    after_5:
    // 0x80036A04: jal         0x8005A8BC
    // 0x80036A08: nop

    func_8005A8BC(rdram, ctx);
        goto after_6;
    // 0x80036A08: nop

    after_6:
    // 0x80036A0C: jal         0x8005B330
    // 0x80036A10: nop

    func_8005B330(rdram, ctx);
        goto after_7;
    // 0x80036A10: nop

    after_7:
    // 0x80036A14: jal         0x8027F760
    // 0x80036A18: nop

    LOOKUP_FUNC(0x8027F760)(rdram, ctx);
        goto after_8;
    // 0x80036A18: nop

    after_8:
    // 0x80036A1C: jal         0x8005B4C0
    // 0x80036A20: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    func_8005B4C0(rdram, ctx);
        goto after_9;
    // 0x80036A20: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_9:
    // 0x80036A24: jal         0x8005B4C0
    // 0x80036A28: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    func_8005B4C0(rdram, ctx);
        goto after_10;
    // 0x80036A28: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_10:
    // 0x80036A2C: jal         0x8005C930
    // 0x80036A30: nop

    func_8005C930(rdram, ctx);
        goto after_11;
    // 0x80036A30: nop

    after_11:
    // 0x80036A34: jal         0x800383DC
    // 0x80036A38: nop

    func_800383DC(rdram, ctx);
        goto after_12;
    // 0x80036A38: nop

    after_12:
    // 0x80036A3C: jal         0x8005B43C
    // 0x80036A40: nop

    func_8005B43C(rdram, ctx);
        goto after_13;
    // 0x80036A40: nop

    after_13:
    // 0x80036A44: jal         0x800398E8
    // 0x80036A48: nop

    func_800398E8(rdram, ctx);
        goto after_14;
    // 0x80036A48: nop

    after_14:
    // 0x80036A4C: jal         0x80039690
    // 0x80036A50: nop

    func_80039690(rdram, ctx);
        goto after_15;
    // 0x80036A50: nop

    after_15:
    // 0x80036A54: jal         0x80039754
    // 0x80036A58: nop

    func_80039754(rdram, ctx);
        goto after_16;
    // 0x80036A58: nop

    after_16:
    // 0x80036A5C: jal         0x800399EC
    // 0x80036A60: nop

    func_800399EC(rdram, ctx);
        goto after_17;
    // 0x80036A60: nop

    after_17:
    // 0x80036A64: jal         0x8005B004
    // 0x80036A68: nop

    func_8005B004(rdram, ctx);
        goto after_18;
    // 0x80036A68: nop

    after_18:
    // 0x80036A6C: jal         0x8005CFC8
    // 0x80036A70: nop

    func_8005CFC8(rdram, ctx);
        goto after_19;
    // 0x80036A70: nop

    after_19:
    // 0x80036A74: jal         0x8003C448
    // 0x80036A78: nop

    func_8003C448(rdram, ctx);
        goto after_20;
    // 0x80036A78: nop

    after_20:
    // 0x80036A7C: jal         0x8005CC40
    // 0x80036A80: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    func_8005CC40(rdram, ctx);
        goto after_21;
    // 0x80036A80: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_21:
    // 0x80036A84: jal         0x8005CC40
    // 0x80036A88: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    func_8005CC40(rdram, ctx);
        goto after_22;
    // 0x80036A88: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_22:
    // 0x80036A8C: jal         0x8006DFEC
    // 0x80036A90: nop

    func_8006DFEC(rdram, ctx);
        goto after_23;
    // 0x80036A90: nop

    after_23:
    // 0x80036A94: jal         0x800385C0
    // 0x80036A98: nop

    func_800385C0(rdram, ctx);
        goto after_24;
    // 0x80036A98: nop

    after_24:
    // 0x80036A9C: jal         0x80038AF0
    // 0x80036AA0: nop

    func_80038AF0(rdram, ctx);
        goto after_25;
    // 0x80036AA0: nop

    after_25:
    // 0x80036AA4: jal         0x80038B90
    // 0x80036AA8: nop

    func_80038B90(rdram, ctx);
        goto after_26;
    // 0x80036AA8: nop

    after_26:
    // 0x80036AAC: jal         0x80038C10
    // 0x80036AB0: nop

    func_80038C10(rdram, ctx);
        goto after_27;
    // 0x80036AB0: nop

    after_27:
    // 0x80036AB4: jal         0x80036234
    // 0x80036AB8: nop

    func_80036234(rdram, ctx);
        goto after_28;
    // 0x80036AB8: nop

    after_28:
    // 0x80036ABC: jal         0x800372F4
    // 0x80036AC0: nop

    func_800372F4(rdram, ctx);
        goto after_29;
    // 0x80036AC0: nop

    after_29:
    // 0x80036AC4: jal         0x80038CAC
    // 0x80036AC8: nop

    func_80038CAC(rdram, ctx);
        goto after_30;
    // 0x80036AC8: nop

    after_30:
    // 0x80036ACC: jal         0x80038E28
    // 0x80036AD0: nop

    func_80038E28(rdram, ctx);
        goto after_31;
    // 0x80036AD0: nop

    after_31:
    // 0x80036AD4: jal         0x80036B1C
    // 0x80036AD8: nop

    func_80036B1C(rdram, ctx);
        goto after_32;
    // 0x80036AD8: nop

    after_32:
    // 0x80036ADC: jal         0x80038DF4
    // 0x80036AE0: nop

    func_80038DF4(rdram, ctx);
        goto after_33;
    // 0x80036AE0: nop

    after_33:
    // 0x80036AE4: jal         0x80038DDC
    // 0x80036AE8: nop

    func_80038DDC(rdram, ctx);
        goto after_34;
    // 0x80036AE8: nop

    after_34:
    // 0x80036AEC: jal         0x80038EF8
    // 0x80036AF0: nop

    func_80038EF8(rdram, ctx);
        goto after_35;
    // 0x80036AF0: nop

    after_35:
    // 0x80036AF4: jal         0x80038FAC
    // 0x80036AF8: nop

    func_80038FAC(rdram, ctx);
        goto after_36;
    // 0x80036AF8: nop

    after_36:
    // 0x80036AFC: jal         0x8006F4C0
    // 0x80036B00: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    func_8006F4C0(rdram, ctx);
        goto after_37;
    // 0x80036B00: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_37:
    // 0x80036B04: jal         0x8006F4C0
    // 0x80036B08: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    func_8006F4C0(rdram, ctx);
        goto after_38;
    // 0x80036B08: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_38:
    // 0x80036B0C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80036B10: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80036B14: jr          $ra
    // 0x80036B18: nop

    return;
    // 0x80036B18: nop

;}
RECOMP_FUNC void func_80036B1C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80036B1C: lui         $v1, 0x8012
    ctx->r3 = S32(0X8012 << 16);
    // 0x80036B20: addiu       $v1, $v1, -0x32B0
    ctx->r3 = ADD32(ctx->r3, -0X32B0);
    // 0x80036B24: addiu       $a0, $zero, -0x1
    ctx->r4 = ADD32(0, -0X1);
    // 0x80036B28: sh          $zero, 0x148($v1)
    MEM_H(0X148, ctx->r3) = 0;
    // 0x80036B2C: sb          $a0, 0x134($v1)
    MEM_B(0X134, ctx->r3) = ctx->r4;
    // 0x80036B30: sb          $a0, 0x135($v1)
    MEM_B(0X135, ctx->r3) = ctx->r4;
    // 0x80036B34: lui         $t6, 0x8012
    ctx->r14 = S32(0X8012 << 16);
    // 0x80036B38: lb          $t6, -0x3086($t6)
    ctx->r14 = MEM_B(ctx->r14, -0X3086);
    // 0x80036B3C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x80036B40: sb          $t6, 0x136($v1)
    MEM_B(0X136, ctx->r3) = ctx->r14;
L_80036B44:
    // 0x80036B44: addu        $t7, $v1, $v0
    ctx->r15 = ADD32(ctx->r3, ctx->r2);
    // 0x80036B48: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80036B4C: sll         $t8, $v0, 16
    ctx->r24 = S32(ctx->r2 << 16);
    // 0x80036B50: sra         $v0, $t8, 16
    ctx->r2 = S32(SIGNED(ctx->r24) >> 16);
    // 0x80036B54: slti        $at, $v0, 0x10
    ctx->r1 = SIGNED(ctx->r2) < 0X10 ? 1 : 0;
    // 0x80036B58: bne         $at, $zero, L_80036B44
    if (ctx->r1 != 0) {
        // 0x80036B5C: sb          $zero, 0x137($t7)
        MEM_B(0X137, ctx->r15) = 0;
            goto L_80036B44;
    }
    // 0x80036B5C: sb          $zero, 0x137($t7)
    MEM_B(0X137, ctx->r15) = 0;
    // 0x80036B60: jr          $ra
    // 0x80036B64: nop

    return;
    // 0x80036B64: nop

;}
RECOMP_FUNC void func_80036B68(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80036B68: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80036B6C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80036B70: jal         0x80036278
    // 0x80036B74: nop

    func_80036278(rdram, ctx);
        goto after_0;
    // 0x80036B74: nop

    after_0:
    // 0x80036B78: jal         0x80039258
    // 0x80036B7C: nop

    func_80039258(rdram, ctx);
        goto after_1;
    // 0x80036B7C: nop

    after_1:
    // 0x80036B80: jal         0x8005B330
    // 0x80036B84: nop

    func_8005B330(rdram, ctx);
        goto after_2;
    // 0x80036B84: nop

    after_2:
    // 0x80036B88: jal         0x8027F760
    // 0x80036B8C: nop

    LOOKUP_FUNC(0x8027F760)(rdram, ctx);
        goto after_3;
    // 0x80036B8C: nop

    after_3:
    // 0x80036B90: jal         0x8005B4C0
    // 0x80036B94: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    func_8005B4C0(rdram, ctx);
        goto after_4;
    // 0x80036B94: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_4:
    // 0x80036B98: jal         0x8005B4C0
    // 0x80036B9C: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    func_8005B4C0(rdram, ctx);
        goto after_5;
    // 0x80036B9C: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_5:
    // 0x80036BA0: jal         0x8005C930
    // 0x80036BA4: nop

    func_8005C930(rdram, ctx);
        goto after_6;
    // 0x80036BA4: nop

    after_6:
    // 0x80036BA8: jal         0x8005B004
    // 0x80036BAC: nop

    func_8005B004(rdram, ctx);
        goto after_7;
    // 0x80036BAC: nop

    after_7:
    // 0x80036BB0: jal         0x8003C448
    // 0x80036BB4: nop

    func_8003C448(rdram, ctx);
        goto after_8;
    // 0x80036BB4: nop

    after_8:
    // 0x80036BB8: jal         0x8006DFEC
    // 0x80036BBC: nop

    func_8006DFEC(rdram, ctx);
        goto after_9;
    // 0x80036BBC: nop

    after_9:
    // 0x80036BC0: jal         0x80038AF0
    // 0x80036BC4: nop

    func_80038AF0(rdram, ctx);
        goto after_10;
    // 0x80036BC4: nop

    after_10:
    // 0x80036BC8: jal         0x80038B90
    // 0x80036BCC: nop

    func_80038B90(rdram, ctx);
        goto after_11;
    // 0x80036BCC: nop

    after_11:
    // 0x80036BD0: jal         0x8006DF08
    // 0x80036BD4: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    func_8006DF08(rdram, ctx);
        goto after_12;
    // 0x80036BD4: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_12:
    // 0x80036BD8: jal         0x8006DF08
    // 0x80036BDC: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    func_8006DF08(rdram, ctx);
        goto after_13;
    // 0x80036BDC: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_13:
    // 0x80036BE0: jal         0x80038C10
    // 0x80036BE4: nop

    func_80038C10(rdram, ctx);
        goto after_14;
    // 0x80036BE4: nop

    after_14:
    // 0x80036BE8: jal         0x80036234
    // 0x80036BEC: nop

    func_80036234(rdram, ctx);
        goto after_15;
    // 0x80036BEC: nop

    after_15:
    // 0x80036BF0: jal         0x800372F4
    // 0x80036BF4: nop

    func_800372F4(rdram, ctx);
        goto after_16;
    // 0x80036BF4: nop

    after_16:
    // 0x80036BF8: jal         0x80038EF8
    // 0x80036BFC: nop

    func_80038EF8(rdram, ctx);
        goto after_17;
    // 0x80036BFC: nop

    after_17:
    // 0x80036C00: jal         0x8006F4C0
    // 0x80036C04: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    func_8006F4C0(rdram, ctx);
        goto after_18;
    // 0x80036C04: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_18:
    // 0x80036C08: jal         0x8006F4C0
    // 0x80036C0C: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    func_8006F4C0(rdram, ctx);
        goto after_19;
    // 0x80036C0C: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_19:
    // 0x80036C10: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80036C14: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80036C18: jr          $ra
    // 0x80036C1C: nop

    return;
    // 0x80036C1C: nop

;}
RECOMP_FUNC void func_80036C20(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80036C20: jr          $ra
    // 0x80036C24: nop

    return;
    // 0x80036C24: nop

;}
RECOMP_FUNC void func_80036C28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80036C28: jr          $ra
    // 0x80036C2C: nop

    return;
    // 0x80036C2C: nop

;}
RECOMP_FUNC void func_80036C58(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80036C58: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x80036C5C: addiu       $v0, $v0, -0x32B0
    ctx->r2 = ADD32(ctx->r2, -0X32B0);
    // 0x80036C60: lbu         $t6, 0xC($v0)
    ctx->r14 = MEM_BU(ctx->r2, 0XC);
    // 0x80036C64: lui         $t7, 0x800D
    ctx->r15 = S32(0X800D << 16);
    // 0x80036C68: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80036C6C: lbu         $t7, 0x4EA0($t7)
    ctx->r15 = MEM_BU(ctx->r15, 0X4EA0);
    // 0x80036C70: jr          $ra
    // 0x80036C74: sb          $t7, 0x10($v0)
    MEM_B(0X10, ctx->r2) = ctx->r15;
    return;
    // 0x80036C74: sb          $t7, 0x10($v0)
    MEM_B(0X10, ctx->r2) = ctx->r15;
;}
RECOMP_FUNC void func_80036C78(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80036C78: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x80036C7C: addiu       $v0, $v0, -0x32B0
    ctx->r2 = ADD32(ctx->r2, -0X32B0);
    // 0x80036C80: lbu         $t6, 0x10($v0)
    ctx->r14 = MEM_BU(ctx->r2, 0X10);
    // 0x80036C84: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80036C88: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80036C8C: sb          $zero, 0x3E($v0)
    MEM_B(0X3E, ctx->r2) = 0;
    // 0x80036C90: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x80036C94: addiu       $a0, $zero, 0x7
    ctx->r4 = ADD32(0, 0X7);
    // 0x80036C98: jal         0x8001B854
    // 0x80036C9C: sh          $t6, 0x6DFE($at)
    MEM_H(0X6DFE, ctx->r1) = ctx->r14;
    func_8001B854(rdram, ctx);
        goto after_0;
    // 0x80036C9C: sh          $t6, 0x6DFE($at)
    MEM_H(0X6DFE, ctx->r1) = ctx->r14;
    after_0:
    // 0x80036CA0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80036CA4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80036CA8: jr          $ra
    // 0x80036CAC: nop

    return;
    // 0x80036CAC: nop

;}
RECOMP_FUNC void func_80036CB0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80036CB0: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x80036CB4: addiu       $v0, $v0, -0x32B0
    ctx->r2 = ADD32(ctx->r2, -0X32B0);
    // 0x80036CB8: lbu         $t6, 0xC($v0)
    ctx->r14 = MEM_BU(ctx->r2, 0XC);
    // 0x80036CBC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80036CC0: addiu       $at, $zero, 0x7
    ctx->r1 = ADD32(0, 0X7);
    // 0x80036CC4: bne         $t6, $at, L_80036CE8
    if (ctx->r14 != ctx->r1) {
        // 0x80036CC8: sw          $ra, 0x14($sp)
        MEM_W(0X14, ctx->r29) = ctx->r31;
            goto L_80036CE8;
    }
    // 0x80036CC8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80036CCC: addiu       $t7, $zero, 0xD
    ctx->r15 = ADD32(0, 0XD);
    // 0x80036CD0: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x80036CD4: sh          $t7, 0x6DFE($at)
    MEM_H(0X6DFE, ctx->r1) = ctx->r15;
    // 0x80036CD8: jal         0x8001B854
    // 0x80036CDC: addiu       $a0, $zero, 0x7
    ctx->r4 = ADD32(0, 0X7);
    func_8001B854(rdram, ctx);
        goto after_0;
    // 0x80036CDC: addiu       $a0, $zero, 0x7
    ctx->r4 = ADD32(0, 0X7);
    after_0:
    // 0x80036CE0: b           L_80036D0C
    // 0x80036CE4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80036D0C;
    // 0x80036CE4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80036CE8:
    // 0x80036CE8: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x80036CEC: jal         0x80036E88
    // 0x80036CF0: sb          $t8, 0x3E($v0)
    MEM_B(0X3E, ctx->r2) = ctx->r24;
    func_80036E88(rdram, ctx);
        goto after_1;
    // 0x80036CF0: sb          $t8, 0x3E($v0)
    MEM_B(0X3E, ctx->r2) = ctx->r24;
    after_1:
    // 0x80036CF4: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x80036CF8: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x80036CFC: sh          $t9, 0x6DFE($at)
    MEM_H(0X6DFE, ctx->r1) = ctx->r25;
    // 0x80036D00: jal         0x8001B854
    // 0x80036D04: addiu       $a0, $zero, 0x7
    ctx->r4 = ADD32(0, 0X7);
    func_8001B854(rdram, ctx);
        goto after_2;
    // 0x80036D04: addiu       $a0, $zero, 0x7
    ctx->r4 = ADD32(0, 0X7);
    after_2:
    // 0x80036D08: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80036D0C:
    // 0x80036D0C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80036D10: jr          $ra
    // 0x80036D14: nop

    return;
    // 0x80036D14: nop

;}
RECOMP_FUNC void func_80036D18(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80036D18: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80036D1C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80036D20: jal         0x80036E88
    // 0x80036D24: nop

    func_80036E88(rdram, ctx);
        goto after_0;
    // 0x80036D24: nop

    after_0:
    // 0x80036D28: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x80036D2C: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x80036D30: sb          $t6, -0x3272($at)
    MEM_B(-0X3272, ctx->r1) = ctx->r14;
    // 0x80036D34: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x80036D38: addiu       $t7, $zero, 0xC
    ctx->r15 = ADD32(0, 0XC);
    // 0x80036D3C: sh          $t7, 0x6DFE($at)
    MEM_H(0X6DFE, ctx->r1) = ctx->r15;
    // 0x80036D40: jal         0x8001B854
    // 0x80036D44: addiu       $a0, $zero, 0x7
    ctx->r4 = ADD32(0, 0X7);
    func_8001B854(rdram, ctx);
        goto after_1;
    // 0x80036D44: addiu       $a0, $zero, 0x7
    ctx->r4 = ADD32(0, 0X7);
    after_1:
    // 0x80036D48: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80036D4C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80036D50: jr          $ra
    // 0x80036D54: nop

    return;
    // 0x80036D54: nop

;}
RECOMP_FUNC void func_80036D58(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80036D58: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x80036D5C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80036D60: sb          $zero, -0x3272($at)
    MEM_B(-0X3272, ctx->r1) = 0;
    // 0x80036D64: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80036D68: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x80036D6C: addiu       $t6, $zero, 0xB
    ctx->r14 = ADD32(0, 0XB);
    // 0x80036D70: sh          $t6, 0x6DFE($at)
    MEM_H(0X6DFE, ctx->r1) = ctx->r14;
    // 0x80036D74: jal         0x8001B854
    // 0x80036D78: addiu       $a0, $zero, 0x7
    ctx->r4 = ADD32(0, 0X7);
    func_8001B854(rdram, ctx);
        goto after_0;
    // 0x80036D78: addiu       $a0, $zero, 0x7
    ctx->r4 = ADD32(0, 0X7);
    after_0:
    // 0x80036D7C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80036D80: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80036D84: jr          $ra
    // 0x80036D88: nop

    return;
    // 0x80036D88: nop

;}
RECOMP_FUNC void func_80036D8C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80036D8C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80036D90: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80036D94: jal         0x80036E88
    // 0x80036D98: nop

    func_80036E88(rdram, ctx);
        goto after_0;
    // 0x80036D98: nop

    after_0:
    // 0x80036D9C: addiu       $t6, $zero, 0x8
    ctx->r14 = ADD32(0, 0X8);
    // 0x80036DA0: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x80036DA4: sh          $t6, 0x6DFE($at)
    MEM_H(0X6DFE, ctx->r1) = ctx->r14;
    // 0x80036DA8: jal         0x8001B854
    // 0x80036DAC: addiu       $a0, $zero, 0x7
    ctx->r4 = ADD32(0, 0X7);
    func_8001B854(rdram, ctx);
        goto after_1;
    // 0x80036DAC: addiu       $a0, $zero, 0x7
    ctx->r4 = ADD32(0, 0X7);
    after_1:
    // 0x80036DB0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80036DB4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80036DB8: jr          $ra
    // 0x80036DBC: nop

    return;
    // 0x80036DBC: nop

;}
RECOMP_FUNC void func_80036DC0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80036DC0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80036DC4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80036DC8: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x80036DCC: sh          $zero, 0x6DFE($at)
    MEM_H(0X6DFE, ctx->r1) = 0;
    // 0x80036DD0: jal         0x8001B854
    // 0x80036DD4: addiu       $a0, $zero, 0x7
    ctx->r4 = ADD32(0, 0X7);
    func_8001B854(rdram, ctx);
        goto after_0;
    // 0x80036DD4: addiu       $a0, $zero, 0x7
    ctx->r4 = ADD32(0, 0X7);
    after_0:
    // 0x80036DD8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80036DDC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80036DE0: jr          $ra
    // 0x80036DE4: nop

    return;
    // 0x80036DE4: nop

;}
RECOMP_FUNC void func_80036DE8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80036DE8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80036DEC: lui         $v1, 0x8012
    ctx->r3 = S32(0X8012 << 16);
    // 0x80036DF0: addiu       $v1, $v1, -0x32B0
    ctx->r3 = ADD32(ctx->r3, -0X32B0);
    // 0x80036DF4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80036DF8: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x80036DFC: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x80036E00: jal         0x80036E88
    // 0x80036E04: sb          $t6, 0x3E($v1)
    MEM_B(0X3E, ctx->r3) = ctx->r14;
    func_80036E88(rdram, ctx);
        goto after_0;
    // 0x80036E04: sb          $t6, 0x3E($v1)
    MEM_B(0X3E, ctx->r3) = ctx->r14;
    after_0:
    // 0x80036E08: addiu       $t7, $zero, 0xE
    ctx->r15 = ADD32(0, 0XE);
    // 0x80036E0C: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x80036E10: sh          $t7, 0x6DFE($at)
    MEM_H(0X6DFE, ctx->r1) = ctx->r15;
    // 0x80036E14: jal         0x8001B854
    // 0x80036E18: addiu       $a0, $zero, 0x7
    ctx->r4 = ADD32(0, 0X7);
    func_8001B854(rdram, ctx);
        goto after_1;
    // 0x80036E18: addiu       $a0, $zero, 0x7
    ctx->r4 = ADD32(0, 0X7);
    after_1:
    // 0x80036E1C: jal         0x800372F4
    // 0x80036E20: nop

    func_800372F4(rdram, ctx);
        goto after_2;
    // 0x80036E20: nop

    after_2:
    // 0x80036E24: lbu         $v0, 0x1B($sp)
    ctx->r2 = MEM_BU(ctx->r29, 0X1B);
    // 0x80036E28: lui         $v1, 0x8012
    ctx->r3 = S32(0X8012 << 16);
    // 0x80036E2C: beq         $v0, $zero, L_80036E54
    if (ctx->r2 == 0) {
        // 0x80036E30: addiu       $v1, $v1, -0x32B0
        ctx->r3 = ADD32(ctx->r3, -0X32B0);
            goto L_80036E54;
    }
    // 0x80036E30: addiu       $v1, $v1, -0x32B0
    ctx->r3 = ADD32(ctx->r3, -0X32B0);
    // 0x80036E34: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x80036E38: beq         $v0, $a0, L_80036E64
    if (ctx->r2 == ctx->r4) {
        // 0x80036E3C: addiu       $t9, $zero, -0x1
        ctx->r25 = ADD32(0, -0X1);
            goto L_80036E64;
    }
    // 0x80036E3C: addiu       $t9, $zero, -0x1
    ctx->r25 = ADD32(0, -0X1);
    // 0x80036E40: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    // 0x80036E44: beq         $v0, $a0, L_80036E70
    if (ctx->r2 == ctx->r4) {
        // 0x80036E48: nop
    
            goto L_80036E70;
    }
    // 0x80036E48: nop

    // 0x80036E4C: b           L_80036E7C
    // 0x80036E50: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80036E7C;
    // 0x80036E50: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80036E54:
    // 0x80036E54: addiu       $t8, $zero, -0x1
    ctx->r24 = ADD32(0, -0X1);
    // 0x80036E58: sb          $zero, 0x44($v1)
    MEM_B(0X44, ctx->r3) = 0;
    // 0x80036E5C: b           L_80036E78
    // 0x80036E60: sb          $t8, 0x69($v1)
    MEM_B(0X69, ctx->r3) = ctx->r24;
        goto L_80036E78;
    // 0x80036E60: sb          $t8, 0x69($v1)
    MEM_B(0X69, ctx->r3) = ctx->r24;
L_80036E64:
    // 0x80036E64: sb          $a0, 0x44($v1)
    MEM_B(0X44, ctx->r3) = ctx->r4;
    // 0x80036E68: b           L_80036E78
    // 0x80036E6C: sb          $t9, 0x68($v1)
    MEM_B(0X68, ctx->r3) = ctx->r25;
        goto L_80036E78;
    // 0x80036E6C: sb          $t9, 0x68($v1)
    MEM_B(0X68, ctx->r3) = ctx->r25;
L_80036E70:
    // 0x80036E70: sb          $zero, 0x44($v1)
    MEM_B(0X44, ctx->r3) = 0;
    // 0x80036E74: sb          $a0, 0x69($v1)
    MEM_B(0X69, ctx->r3) = ctx->r4;
L_80036E78:
    // 0x80036E78: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80036E7C:
    // 0x80036E7C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80036E80: jr          $ra
    // 0x80036E84: nop

    return;
    // 0x80036E84: nop

;}
RECOMP_FUNC void func_80036E88(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80036E88: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80036E8C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80036E90: jal         0x80036EB0
    // 0x80036E94: nop

    func_80036EB0(rdram, ctx);
        goto after_0;
    // 0x80036E94: nop

    after_0:
    // 0x80036E98: jal         0x80037050
    // 0x80036E9C: nop

    func_80037050(rdram, ctx);
        goto after_1;
    // 0x80036E9C: nop

    after_1:
    // 0x80036EA0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80036EA4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80036EA8: jr          $ra
    // 0x80036EAC: nop

    return;
    // 0x80036EAC: nop

;}
RECOMP_FUNC void func_80036EB0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80036EB0: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80036EB4: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80036EB8: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80036EBC: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
L_80036EC0:
    // 0x80036EC0: jal         0x80036EEC
    // 0x80036EC4: andi        $a0, $s0, 0xFF
    ctx->r4 = ctx->r16 & 0XFF;
    func_80036EEC(rdram, ctx);
        goto after_0;
    // 0x80036EC4: andi        $a0, $s0, 0xFF
    ctx->r4 = ctx->r16 & 0XFF;
    after_0:
    // 0x80036EC8: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x80036ECC: andi        $t6, $s0, 0xFF
    ctx->r14 = ctx->r16 & 0XFF;
    // 0x80036ED0: slti        $at, $t6, 0x2
    ctx->r1 = SIGNED(ctx->r14) < 0X2 ? 1 : 0;
    // 0x80036ED4: bne         $at, $zero, L_80036EC0
    if (ctx->r1 != 0) {
        // 0x80036ED8: or          $s0, $t6, $zero
        ctx->r16 = ctx->r14 | 0;
            goto L_80036EC0;
    }
    // 0x80036ED8: or          $s0, $t6, $zero
    ctx->r16 = ctx->r14 | 0;
    // 0x80036EDC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80036EE0: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80036EE4: jr          $ra
    // 0x80036EE8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x80036EE8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_80036EEC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80036EEC: andi        $t6, $a0, 0xFF
    ctx->r14 = ctx->r4 & 0XFF;
    // 0x80036EF0: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80036EF4: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80036EF8: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80036EFC: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80036F00: sll         $t7, $t7, 3
    ctx->r15 = S32(ctx->r15 << 3);
    // 0x80036F04: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80036F08: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80036F0C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80036F10: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80036F14: lui         $t8, 0x8012
    ctx->r24 = S32(0X8012 << 16);
    // 0x80036F18: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80036F1C: addiu       $t8, $t8, -0x2CF0
    ctx->r24 = ADD32(ctx->r24, -0X2CF0);
    // 0x80036F20: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80036F24: addu        $s0, $t7, $t8
    ctx->r16 = ADD32(ctx->r15, ctx->r24);
    // 0x80036F28: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80036F2C: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x80036F30: lb          $a1, 0x8A9($s0)
    ctx->r5 = MEM_B(ctx->r16, 0X8A9);
    // 0x80036F34: or          $a0, $t6, $zero
    ctx->r4 = ctx->r14 | 0;
    // 0x80036F38: jal         0x80036F74
    // 0x80036F3C: sb          $t6, 0x23($sp)
    MEM_B(0X23, ctx->r29) = ctx->r14;
    func_80036F74(rdram, ctx);
        goto after_0;
    // 0x80036F3C: sb          $t6, 0x23($sp)
    MEM_B(0X23, ctx->r29) = ctx->r14;
    after_0:
    // 0x80036F40: lbu         $a0, 0x23($sp)
    ctx->r4 = MEM_BU(ctx->r29, 0X23);
    // 0x80036F44: lb          $a1, 0x8AA($s0)
    ctx->r5 = MEM_B(ctx->r16, 0X8AA);
    // 0x80036F48: jal         0x80036F74
    // 0x80036F4C: sb          $v0, 0x8A9($s0)
    MEM_B(0X8A9, ctx->r16) = ctx->r2;
    func_80036F74(rdram, ctx);
        goto after_1;
    // 0x80036F4C: sb          $v0, 0x8A9($s0)
    MEM_B(0X8A9, ctx->r16) = ctx->r2;
    after_1:
    // 0x80036F50: lbu         $a0, 0x23($sp)
    ctx->r4 = MEM_BU(ctx->r29, 0X23);
    // 0x80036F54: lb          $a1, 0x8AB($s0)
    ctx->r5 = MEM_B(ctx->r16, 0X8AB);
    // 0x80036F58: jal         0x80036F74
    // 0x80036F5C: sb          $v0, 0x8AA($s0)
    MEM_B(0X8AA, ctx->r16) = ctx->r2;
    func_80036F74(rdram, ctx);
        goto after_2;
    // 0x80036F5C: sb          $v0, 0x8AA($s0)
    MEM_B(0X8AA, ctx->r16) = ctx->r2;
    after_2:
    // 0x80036F60: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80036F64: sb          $v0, 0x8AB($s0)
    MEM_B(0X8AB, ctx->r16) = ctx->r2;
    // 0x80036F68: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80036F6C: jr          $ra
    // 0x80036F70: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x80036F70: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_80036F74(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80036F74: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80036F78: sw          $s3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r19;
    // 0x80036F7C: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x80036F80: sll         $s0, $a1, 24
    ctx->r16 = S32(ctx->r5 << 24);
    // 0x80036F84: andi        $s3, $a0, 0xFF
    ctx->r19 = ctx->r4 & 0XFF;
    // 0x80036F88: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x80036F8C: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x80036F90: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x80036F94: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x80036F98: sra         $a0, $s0, 24
    ctx->r4 = S32(SIGNED(ctx->r16) >> 24);
    // 0x80036F9C: sw          $s2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r18;
    // 0x80036FA0: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    // 0x80036FA4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80036FA8: jal         0x8001D4C0
    // 0x80036FAC: addiu       $a2, $zero, 0xA
    ctx->r6 = ADD32(0, 0XA);
    func_8001D4C0(rdram, ctx);
        goto after_0;
    // 0x80036FAC: addiu       $a2, $zero, 0xA
    ctx->r6 = ADD32(0, 0XA);
    after_0:
    // 0x80036FB0: sll         $s0, $v0, 24
    ctx->r16 = S32(ctx->r2 << 24);
    // 0x80036FB4: sll         $a1, $v0, 24
    ctx->r5 = S32(ctx->r2 << 24);
    // 0x80036FB8: sra         $t7, $s0, 24
    ctx->r15 = S32(SIGNED(ctx->r16) >> 24);
    // 0x80036FBC: sra         $t8, $a1, 24
    ctx->r24 = S32(SIGNED(ctx->r5) >> 24);
    // 0x80036FC0: or          $s0, $t7, $zero
    ctx->r16 = ctx->r15 | 0;
    // 0x80036FC4: or          $a1, $t8, $zero
    ctx->r5 = ctx->r24 | 0;
    // 0x80036FC8: jal         0x8006DEA0
    // 0x80036FCC: andi        $a0, $s3, 0xFF
    ctx->r4 = ctx->r19 & 0XFF;
    func_8006DEA0(rdram, ctx);
        goto after_1;
    // 0x80036FCC: andi        $a0, $s3, 0xFF
    ctx->r4 = ctx->r19 & 0XFF;
    after_1:
    // 0x80036FD0: bne         $v0, $zero, L_80037030
    if (ctx->r2 != 0) {
        // 0x80036FD4: addiu       $s2, $zero, 0x1
        ctx->r18 = ADD32(0, 0X1);
            goto L_80037030;
    }
    // 0x80036FD4: addiu       $s2, $zero, 0x1
    ctx->r18 = ADD32(0, 0X1);
L_80036FD8:
    // 0x80036FD8: beq         $s0, $zero, L_80036FE8
    if (ctx->r16 == 0) {
        // 0x80036FDC: addiu       $s1, $s1, 0x1
        ctx->r17 = ADD32(ctx->r17, 0X1);
            goto L_80036FE8;
    }
    // 0x80036FDC: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x80036FE0: bne         $s0, $s2, L_80036FF4
    if (ctx->r16 != ctx->r18) {
        // 0x80036FE4: addiu       $s0, $s0, -0x1
        ctx->r16 = ADD32(ctx->r16, -0X1);
            goto L_80036FF4;
    }
    // 0x80036FE4: addiu       $s0, $s0, -0x1
    ctx->r16 = ADD32(ctx->r16, -0X1);
L_80036FE8:
    // 0x80036FE8: b           L_80036FFC
    // 0x80036FEC: addiu       $s0, $zero, 0xA
    ctx->r16 = ADD32(0, 0XA);
        goto L_80036FFC;
    // 0x80036FEC: addiu       $s0, $zero, 0xA
    ctx->r16 = ADD32(0, 0XA);
    // 0x80036FF0: addiu       $s0, $s0, -0x1
    ctx->r16 = ADD32(ctx->r16, -0X1);
L_80036FF4:
    // 0x80036FF4: sll         $t9, $s0, 24
    ctx->r25 = S32(ctx->r16 << 24);
    // 0x80036FF8: sra         $s0, $t9, 24
    ctx->r16 = S32(SIGNED(ctx->r25) >> 24);
L_80036FFC:
    // 0x80036FFC: andi        $t1, $s1, 0xFF
    ctx->r9 = ctx->r17 & 0XFF;
    // 0x80037000: slti        $at, $t1, 0xB
    ctx->r1 = SIGNED(ctx->r9) < 0XB ? 1 : 0;
    // 0x80037004: bne         $at, $zero, L_80037014
    if (ctx->r1 != 0) {
        // 0x80037008: or          $s1, $t1, $zero
        ctx->r17 = ctx->r9 | 0;
            goto L_80037014;
    }
    // 0x80037008: or          $s1, $t1, $zero
    ctx->r17 = ctx->r9 | 0;
    // 0x8003700C: b           L_80037030
    // 0x80037010: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
        goto L_80037030;
    // 0x80037010: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
L_80037014:
    // 0x80037014: sll         $a1, $s0, 24
    ctx->r5 = S32(ctx->r16 << 24);
    // 0x80037018: sra         $t2, $a1, 24
    ctx->r10 = S32(SIGNED(ctx->r5) >> 24);
    // 0x8003701C: or          $a1, $t2, $zero
    ctx->r5 = ctx->r10 | 0;
    // 0x80037020: jal         0x8006DEA0
    // 0x80037024: andi        $a0, $s3, 0xFF
    ctx->r4 = ctx->r19 & 0XFF;
    func_8006DEA0(rdram, ctx);
        goto after_2;
    // 0x80037024: andi        $a0, $s3, 0xFF
    ctx->r4 = ctx->r19 & 0XFF;
    after_2:
    // 0x80037028: beq         $v0, $zero, L_80036FD8
    if (ctx->r2 == 0) {
        // 0x8003702C: nop
    
            goto L_80036FD8;
    }
    // 0x8003702C: nop

L_80037030:
    // 0x80037030: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x80037034: or          $v0, $s0, $zero
    ctx->r2 = ctx->r16 | 0;
    // 0x80037038: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x8003703C: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x80037040: lw          $s2, 0x1C($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X1C);
    // 0x80037044: lw          $s3, 0x20($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X20);
    // 0x80037048: jr          $ra
    // 0x8003704C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x8003704C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_80037050(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80037050: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80037054: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80037058: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8003705C: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
L_80037060:
    // 0x80037060: jal         0x8003708C
    // 0x80037064: andi        $a0, $s0, 0xFF
    ctx->r4 = ctx->r16 & 0XFF;
    func_8003708C(rdram, ctx);
        goto after_0;
    // 0x80037064: andi        $a0, $s0, 0xFF
    ctx->r4 = ctx->r16 & 0XFF;
    after_0:
    // 0x80037068: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x8003706C: andi        $t6, $s0, 0xFF
    ctx->r14 = ctx->r16 & 0XFF;
    // 0x80037070: slti        $at, $t6, 0x2
    ctx->r1 = SIGNED(ctx->r14) < 0X2 ? 1 : 0;
    // 0x80037074: bne         $at, $zero, L_80037060
    if (ctx->r1 != 0) {
        // 0x80037078: or          $s0, $t6, $zero
        ctx->r16 = ctx->r14 | 0;
            goto L_80037060;
    }
    // 0x80037078: or          $s0, $t6, $zero
    ctx->r16 = ctx->r14 | 0;
    // 0x8003707C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80037080: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80037084: jr          $ra
    // 0x80037088: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x80037088: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_8003708C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8003708C: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x80037090: sw          $s3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r19;
    // 0x80037094: andi        $s3, $a0, 0xFF
    ctx->r19 = ctx->r4 & 0XFF;
    // 0x80037098: sll         $t6, $s3, 2
    ctx->r14 = S32(ctx->r19 << 2);
    // 0x8003709C: addu        $t6, $t6, $s3
    ctx->r14 = ADD32(ctx->r14, ctx->r19);
    // 0x800370A0: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x800370A4: addu        $t6, $t6, $s3
    ctx->r14 = ADD32(ctx->r14, ctx->r19);
    // 0x800370A8: sll         $t6, $t6, 3
    ctx->r14 = S32(ctx->r14 << 3);
    // 0x800370AC: addu        $t6, $t6, $s3
    ctx->r14 = ADD32(ctx->r14, ctx->r19);
    // 0x800370B0: sw          $s5, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r21;
    // 0x800370B4: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x800370B8: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x800370BC: subu        $s5, $t8, $s3
    ctx->r21 = SUB32(ctx->r24, ctx->r19);
    // 0x800370C0: addu        $t6, $t6, $s3
    ctx->r14 = ADD32(ctx->r14, ctx->r19);
    // 0x800370C4: lui         $t7, 0x8012
    ctx->r15 = S32(0X8012 << 16);
    // 0x800370C8: sw          $s4, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r20;
    // 0x800370CC: sw          $s2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r18;
    // 0x800370D0: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x800370D4: addiu       $t7, $t7, -0x2CF0
    ctx->r15 = ADD32(ctx->r15, -0X2CF0);
    // 0x800370D8: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x800370DC: andi        $t9, $s5, 0xFF
    ctx->r25 = ctx->r21 & 0XFF;
    // 0x800370E0: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x800370E4: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x800370E8: sw          $a0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r4;
    // 0x800370EC: or          $s5, $t9, $zero
    ctx->r21 = ctx->r25 | 0;
    // 0x800370F0: addu        $s4, $t6, $t7
    ctx->r20 = ADD32(ctx->r14, ctx->r15);
    // 0x800370F4: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x800370F8: or          $s2, $zero, $zero
    ctx->r18 = 0 | 0;
L_800370FC:
    // 0x800370FC: addu        $s1, $s4, $s0
    ctx->r17 = ADD32(ctx->r20, ctx->r16);
    // 0x80037100: lb          $a1, 0x86F($s1)
    ctx->r5 = MEM_B(ctx->r17, 0X86F);
    // 0x80037104: jal         0x8006DEA0
    // 0x80037108: andi        $a0, $s5, 0xFF
    ctx->r4 = ctx->r21 & 0XFF;
    func_8006DEA0(rdram, ctx);
        goto after_0;
    // 0x80037108: andi        $a0, $s5, 0xFF
    ctx->r4 = ctx->r21 & 0XFF;
    after_0:
    // 0x8003710C: bne         $v0, $zero, L_80037118
    if (ctx->r2 != 0) {
        // 0x80037110: andi        $a0, $s3, 0xFF
        ctx->r4 = ctx->r19 & 0XFF;
            goto L_80037118;
    }
    // 0x80037110: andi        $a0, $s3, 0xFF
    ctx->r4 = ctx->r19 & 0XFF;
    // 0x80037114: sb          $zero, 0x86F($s1)
    MEM_B(0X86F, ctx->r17) = 0;
L_80037118:
    // 0x80037118: sll         $a1, $s2, 24
    ctx->r5 = S32(ctx->r18 << 24);
    // 0x8003711C: sra         $t0, $a1, 24
    ctx->r8 = S32(SIGNED(ctx->r5) >> 24);
    // 0x80037120: jal         0x8006DEA0
    // 0x80037124: or          $a1, $t0, $zero
    ctx->r5 = ctx->r8 | 0;
    func_8006DEA0(rdram, ctx);
        goto after_1;
    // 0x80037124: or          $a1, $t0, $zero
    ctx->r5 = ctx->r8 | 0;
    after_1:
    // 0x80037128: bne         $v0, $zero, L_80037134
    if (ctx->r2 != 0) {
        // 0x8003712C: addiu       $s0, $s0, 0x1
        ctx->r16 = ADD32(ctx->r16, 0X1);
            goto L_80037134;
    }
    // 0x8003712C: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x80037130: sb          $zero, 0x86F($s1)
    MEM_B(0X86F, ctx->r17) = 0;
L_80037134:
    // 0x80037134: andi        $s2, $s0, 0xFF
    ctx->r18 = ctx->r16 & 0XFF;
    // 0x80037138: slti        $at, $s2, 0xB
    ctx->r1 = SIGNED(ctx->r18) < 0XB ? 1 : 0;
    // 0x8003713C: bne         $at, $zero, L_800370FC
    if (ctx->r1 != 0) {
        // 0x80037140: or          $s0, $s2, $zero
        ctx->r16 = ctx->r18 | 0;
            goto L_800370FC;
    }
    // 0x80037140: or          $s0, $s2, $zero
    ctx->r16 = ctx->r18 | 0;
    // 0x80037144: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x80037148: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x8003714C: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x80037150: lw          $s2, 0x1C($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X1C);
    // 0x80037154: lw          $s3, 0x20($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X20);
    // 0x80037158: lw          $s4, 0x24($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X24);
    // 0x8003715C: lw          $s5, 0x28($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X28);
    // 0x80037160: jr          $ra
    // 0x80037164: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x80037164: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_8003725C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8003725C: lui         $v0, 0x801B
    ctx->r2 = S32(0X801B << 16);
    // 0x80037260: addiu       $v0, $v0, 0x1CF0
    ctx->r2 = ADD32(ctx->r2, 0X1CF0);
    // 0x80037264: lw          $t7, 0x0($v0)
    ctx->r15 = MEM_W(ctx->r2, 0X0);
    // 0x80037268: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8003726C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80037270: addiu       $t6, $zero, 0x8
    ctx->r14 = ADD32(0, 0X8);
    // 0x80037274: sh          $t6, 0x20($t7)
    MEM_H(0X20, ctx->r15) = ctx->r14;
    // 0x80037278: lw          $t9, 0x0($v0)
    ctx->r25 = MEM_W(ctx->r2, 0X0);
    // 0x8003727C: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x80037280: jal         0x8002984C
    // 0x80037284: sh          $t8, 0x1E($t9)
    MEM_H(0X1E, ctx->r25) = ctx->r24;
    func_8002984C(rdram, ctx);
        goto after_0;
    // 0x80037284: sh          $t8, 0x1E($t9)
    MEM_H(0X1E, ctx->r25) = ctx->r24;
    after_0:
    // 0x80037288: lui         $a0, 0x8003
    ctx->r4 = S32(0X8003 << 16);
    // 0x8003728C: jal         0x800296E0
    // 0x80037290: addiu       $a0, $a0, 0x72A4
    ctx->r4 = ADD32(ctx->r4, 0X72A4);
    func_800296E0(rdram, ctx);
        goto after_1;
    // 0x80037290: addiu       $a0, $a0, 0x72A4
    ctx->r4 = ADD32(ctx->r4, 0X72A4);
    after_1:
    // 0x80037294: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80037298: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8003729C: jr          $ra
    // 0x800372A0: nop

    return;
    // 0x800372A0: nop

;}
RECOMP_FUNC void func_800372A4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800372A4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800372A8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800372AC: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x800372B0: lh          $t6, 0x20($a0)
    ctx->r14 = MEM_H(ctx->r4, 0X20);
    // 0x800372B4: lui         $v1, 0x8012
    ctx->r3 = S32(0X8012 << 16);
    // 0x800372B8: addiu       $t7, $t6, -0x1
    ctx->r15 = ADD32(ctx->r14, -0X1);
    // 0x800372BC: addiu       $v1, $v1, -0x32B0
    ctx->r3 = ADD32(ctx->r3, -0X32B0);
    // 0x800372C0: sh          $t7, 0x20($a0)
    MEM_H(0X20, ctx->r4) = ctx->r15;
    // 0x800372C4: lhu         $v0, 0x2($v1)
    ctx->r2 = MEM_HU(ctx->r3, 0X2);
    // 0x800372C8: lhu         $t8, 0x1E($a0)
    ctx->r24 = MEM_HU(ctx->r4, 0X1E);
    // 0x800372CC: andi        $t0, $v0, 0xFFFD
    ctx->r8 = ctx->r2 & 0XFFFD;
    // 0x800372D0: and         $t9, $v0, $t8
    ctx->r25 = ctx->r2 & ctx->r24;
    // 0x800372D4: bne         $t9, $zero, L_800372E8
    if (ctx->r25 != 0) {
        // 0x800372D8: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_800372E8;
    }
    // 0x800372D8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800372DC: jal         0x800297E0
    // 0x800372E0: sh          $t0, 0x2($v1)
    MEM_H(0X2, ctx->r3) = ctx->r8;
    func_800297E0(rdram, ctx);
        goto after_0;
    // 0x800372E0: sh          $t0, 0x2($v1)
    MEM_H(0X2, ctx->r3) = ctx->r8;
    after_0:
    // 0x800372E4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_800372E8:
    // 0x800372E8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800372EC: jr          $ra
    // 0x800372F0: nop

    return;
    // 0x800372F0: nop

;}
