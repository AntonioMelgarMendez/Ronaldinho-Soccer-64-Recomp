#include "iss64_recomp.h"
#include "funcs.h"

RECOMP_FUNC void func_800774D8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800774D8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800774DC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800774E0: addiu       $a0, $zero, 0x487
    ctx->r4 = ADD32(0, 0X487);
    // 0x800774E4: jal         0x802A14C0
    // 0x800774E8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    LOOKUP_FUNC(0x802A14C0)(rdram, ctx);
        goto after_0;
    // 0x800774E8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_0:
    // 0x800774EC: lui         $t6, 0x8012
    ctx->r14 = S32(0X8012 << 16);
    // 0x800774F0: lhu         $t6, 0xB72($t6)
    ctx->r14 = MEM_HU(ctx->r14, 0XB72);
    // 0x800774F4: lui         $a1, 0x8012
    ctx->r5 = S32(0X8012 << 16);
    // 0x800774F8: slti        $at, $t6, 0x4
    ctx->r1 = SIGNED(ctx->r14) < 0X4 ? 1 : 0;
    // 0x800774FC: beq         $at, $zero, L_80077514
    if (ctx->r1 == 0) {
        // 0x80077500: addiu       $a1, $a1, -0x2CF0
        ctx->r5 = ADD32(ctx->r5, -0X2CF0);
            goto L_80077514;
    }
    // 0x80077500: addiu       $a1, $a1, -0x2CF0
    ctx->r5 = ADD32(ctx->r5, -0X2CF0);
    // 0x80077504: jal         0x80077060
    // 0x80077508: nop

    func_80077060(rdram, ctx);
        goto after_1;
    // 0x80077508: nop

    after_1:
    // 0x8007750C: b           L_80077580
    // 0x80077510: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80077580;
    // 0x80077510: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80077514:
    // 0x80077514: lhu         $v0, 0xA($a1)
    ctx->r2 = MEM_HU(ctx->r5, 0XA);
    // 0x80077518: lhu         $v1, 0xA9E($a1)
    ctx->r3 = MEM_HU(ctx->r5, 0XA9E);
    // 0x8007751C: lui         $t7, 0x8009
    ctx->r15 = S32(0X8009 << 16);
    // 0x80077520: bne         $v0, $v1, L_80077554
    if (ctx->r2 != ctx->r3) {
        // 0x80077524: slt         $at, $v0, $v1
        ctx->r1 = SIGNED(ctx->r2) < SIGNED(ctx->r3) ? 1 : 0;
            goto L_80077554;
    }
    // 0x80077524: slt         $at, $v0, $v1
    ctx->r1 = SIGNED(ctx->r2) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x80077528: lw          $t7, 0x3B20($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X3B20);
    // 0x8007752C: nop

    // 0x80077530: lw          $t8, 0x8C($t7)
    ctx->r24 = MEM_W(ctx->r15, 0X8C);
    // 0x80077534: nop

    // 0x80077538: lw          $t9, 0xC8($t8)
    ctx->r25 = MEM_W(ctx->r24, 0XC8);
    // 0x8007753C: nop

    // 0x80077540: lbu         $a0, 0x0($t9)
    ctx->r4 = MEM_BU(ctx->r25, 0X0);
    // 0x80077544: jal         0x80079F98
    // 0x80077548: nop

    func_80079F98(rdram, ctx);
        goto after_2;
    // 0x80077548: nop

    after_2:
    // 0x8007754C: b           L_80077580
    // 0x80077550: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80077580;
    // 0x80077550: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80077554:
    // 0x80077554: beq         $at, $zero, L_80077570
    if (ctx->r1 == 0) {
        // 0x80077558: nop
    
            goto L_80077570;
    }
    // 0x80077558: nop

    // 0x8007755C: lbu         $a0, 0x0($a1)
    ctx->r4 = MEM_BU(ctx->r5, 0X0);
    // 0x80077560: jal         0x80079F98
    // 0x80077564: nop

    func_80079F98(rdram, ctx);
        goto after_3;
    // 0x80077564: nop

    after_3:
    // 0x80077568: b           L_80077580
    // 0x8007756C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80077580;
    // 0x8007756C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80077570:
    // 0x80077570: lbu         $a0, 0xA94($a1)
    ctx->r4 = MEM_BU(ctx->r5, 0XA94);
    // 0x80077574: jal         0x80079F98
    // 0x80077578: nop

    func_80079F98(rdram, ctx);
        goto after_4;
    // 0x80077578: nop

    after_4:
    // 0x8007757C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80077580:
    // 0x80077580: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80077584: jr          $ra
    // 0x80077588: nop

    return;
    // 0x80077588: nop

;}
RECOMP_FUNC void func_8007758C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8007758C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80077590: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80077594: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x80077598: addiu       $a0, $zero, 0x419
    ctx->r4 = ADD32(0, 0X419);
    // 0x8007759C: jal         0x802A14C0
    // 0x800775A0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    LOOKUP_FUNC(0x802A14C0)(rdram, ctx);
        goto after_0;
    // 0x800775A0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_0:
    // 0x800775A4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800775A8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800775AC: jr          $ra
    // 0x800775B0: nop

    return;
    // 0x800775B0: nop

;}
RECOMP_FUNC void func_800775B4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800775B4: lui         $t6, 0x8009
    ctx->r14 = S32(0X8009 << 16);
    // 0x800775B8: lw          $t6, 0x3B20($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X3B20);
    // 0x800775BC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800775C0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800775C4: lw          $t7, 0x8C($t6)
    ctx->r15 = MEM_W(ctx->r14, 0X8C);
    // 0x800775C8: nop

    // 0x800775CC: lw          $t8, 0xC8($t7)
    ctx->r24 = MEM_W(ctx->r15, 0XC8);
    // 0x800775D0: nop

    // 0x800775D4: lbu         $a0, 0x7($t8)
    ctx->r4 = MEM_BU(ctx->r24, 0X7);
    // 0x800775D8: jal         0x8007A1CC
    // 0x800775DC: nop

    func_8007A1CC(rdram, ctx);
        goto after_0;
    // 0x800775DC: nop

    after_0:
    // 0x800775E0: lui         $t9, 0x8009
    ctx->r25 = S32(0X8009 << 16);
    // 0x800775E4: lw          $t9, 0x3B20($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X3B20);
    // 0x800775E8: nop

    // 0x800775EC: lw          $t0, 0x8C($t9)
    ctx->r8 = MEM_W(ctx->r25, 0X8C);
    // 0x800775F0: nop

    // 0x800775F4: lw          $t1, 0xC8($t0)
    ctx->r9 = MEM_W(ctx->r8, 0XC8);
    // 0x800775F8: nop

    // 0x800775FC: lw          $t2, 0x24($t1)
    ctx->r10 = MEM_W(ctx->r9, 0X24);
    // 0x80077600: nop

    // 0x80077604: lbu         $a0, 0x7($t2)
    ctx->r4 = MEM_BU(ctx->r10, 0X7);
    // 0x80077608: jal         0x8007A08C
    // 0x8007760C: nop

    func_8007A08C(rdram, ctx);
        goto after_1;
    // 0x8007760C: nop

    after_1:
    // 0x80077610: jal         0x80077880
    // 0x80077614: nop

    func_80077880(rdram, ctx);
        goto after_2;
    // 0x80077614: nop

    after_2:
    // 0x80077618: jal         0x8007840C
    // 0x8007761C: nop

    func_8007840C(rdram, ctx);
        goto after_3;
    // 0x8007761C: nop

    after_3:
    // 0x80077620: lui         $v0, 0x8010
    ctx->r2 = S32(0X8010 << 16);
    // 0x80077624: lhu         $v0, 0x522A($v0)
    ctx->r2 = MEM_HU(ctx->r2, 0X522A);
    // 0x80077628: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x8007762C: andi        $t3, $v0, 0x7
    ctx->r11 = ctx->r2 & 0X7;
    // 0x80077630: beq         $t3, $zero, L_80077660
    if (ctx->r11 == 0) {
        // 0x80077634: addiu       $a0, $zero, 0x5D3
        ctx->r4 = ADD32(0, 0X5D3);
            goto L_80077660;
    }
    // 0x80077634: addiu       $a0, $zero, 0x5D3
    ctx->r4 = ADD32(0, 0X5D3);
    // 0x80077638: beq         $t3, $at, L_80077670
    if (ctx->r11 == ctx->r1) {
        // 0x8007763C: addiu       $a0, $zero, 0x5D4
        ctx->r4 = ADD32(0, 0X5D4);
            goto L_80077670;
    }
    // 0x8007763C: addiu       $a0, $zero, 0x5D4
    ctx->r4 = ADD32(0, 0X5D4);
    // 0x80077640: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x80077644: beq         $t3, $at, L_80077680
    if (ctx->r11 == ctx->r1) {
        // 0x80077648: addiu       $a0, $zero, 0x5DD
        ctx->r4 = ADD32(0, 0X5DD);
            goto L_80077680;
    }
    // 0x80077648: addiu       $a0, $zero, 0x5DD
    ctx->r4 = ADD32(0, 0X5DD);
    // 0x8007764C: addiu       $at, $zero, 0x5
    ctx->r1 = ADD32(0, 0X5);
    // 0x80077650: beq         $t3, $at, L_80077690
    if (ctx->r11 == ctx->r1) {
        // 0x80077654: addiu       $a0, $zero, 0x566
        ctx->r4 = ADD32(0, 0X566);
            goto L_80077690;
    }
    // 0x80077654: addiu       $a0, $zero, 0x566
    ctx->r4 = ADD32(0, 0X566);
    // 0x80077658: b           L_800776A0
    // 0x8007765C: addiu       $a0, $zero, 0x4BE
    ctx->r4 = ADD32(0, 0X4BE);
        goto L_800776A0;
    // 0x8007765C: addiu       $a0, $zero, 0x4BE
    ctx->r4 = ADD32(0, 0X4BE);
L_80077660:
    // 0x80077660: jal         0x802A14C0
    // 0x80077664: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    LOOKUP_FUNC(0x802A14C0)(rdram, ctx);
        goto after_4;
    // 0x80077664: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_4:
    // 0x80077668: b           L_800776AC
    // 0x8007766C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_800776AC;
    // 0x8007766C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80077670:
    // 0x80077670: jal         0x802A14C0
    // 0x80077674: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    LOOKUP_FUNC(0x802A14C0)(rdram, ctx);
        goto after_5;
    // 0x80077674: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_5:
    // 0x80077678: b           L_800776AC
    // 0x8007767C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_800776AC;
    // 0x8007767C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80077680:
    // 0x80077680: jal         0x802A14C0
    // 0x80077684: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    LOOKUP_FUNC(0x802A14C0)(rdram, ctx);
        goto after_6;
    // 0x80077684: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_6:
    // 0x80077688: b           L_800776AC
    // 0x8007768C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_800776AC;
    // 0x8007768C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80077690:
    // 0x80077690: jal         0x802A14C0
    // 0x80077694: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    LOOKUP_FUNC(0x802A14C0)(rdram, ctx);
        goto after_7;
    // 0x80077694: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_7:
    // 0x80077698: b           L_800776AC
    // 0x8007769C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_800776AC;
    // 0x8007769C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_800776A0:
    // 0x800776A0: jal         0x802A14C0
    // 0x800776A4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    LOOKUP_FUNC(0x802A14C0)(rdram, ctx);
        goto after_8;
    // 0x800776A4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_8:
    // 0x800776A8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_800776AC:
    // 0x800776AC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800776B0: jr          $ra
    // 0x800776B4: nop

    return;
    // 0x800776B4: nop

;}
RECOMP_FUNC void func_80077750(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80077750: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80077754: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80077758: jal         0x80077880
    // 0x8007775C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_80077880(rdram, ctx);
        goto after_0;
    // 0x8007775C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x80077760: lw          $t6, 0x18($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X18);
    // 0x80077764: nop

    // 0x80077768: lw          $t7, 0xC8($t6)
    ctx->r15 = MEM_W(ctx->r14, 0XC8);
    // 0x8007776C: nop

    // 0x80077770: lbu         $a0, 0x7($t7)
    ctx->r4 = MEM_BU(ctx->r15, 0X7);
    // 0x80077774: jal         0x8007A1CC
    // 0x80077778: nop

    func_8007A1CC(rdram, ctx);
        goto after_1;
    // 0x80077778: nop

    after_1:
    // 0x8007777C: lui         $v0, 0x8010
    ctx->r2 = S32(0X8010 << 16);
    // 0x80077780: lhu         $v0, 0x522A($v0)
    ctx->r2 = MEM_HU(ctx->r2, 0X522A);
    // 0x80077784: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80077788: andi        $t8, $v0, 0x3
    ctx->r24 = ctx->r2 & 0X3;
    // 0x8007778C: beq         $t8, $zero, L_800777A4
    if (ctx->r24 == 0) {
        // 0x80077790: addiu       $a0, $zero, 0x5D8
        ctx->r4 = ADD32(0, 0X5D8);
            goto L_800777A4;
    }
    // 0x80077790: addiu       $a0, $zero, 0x5D8
    ctx->r4 = ADD32(0, 0X5D8);
    // 0x80077794: beq         $t8, $at, L_800777B4
    if (ctx->r24 == ctx->r1) {
        // 0x80077798: addiu       $a0, $zero, 0x5D7
        ctx->r4 = ADD32(0, 0X5D7);
            goto L_800777B4;
    }
    // 0x80077798: addiu       $a0, $zero, 0x5D7
    ctx->r4 = ADD32(0, 0X5D7);
    // 0x8007779C: b           L_800777C4
    // 0x800777A0: addiu       $a0, $zero, 0x497
    ctx->r4 = ADD32(0, 0X497);
        goto L_800777C4;
    // 0x800777A0: addiu       $a0, $zero, 0x497
    ctx->r4 = ADD32(0, 0X497);
L_800777A4:
    // 0x800777A4: jal         0x802A14C0
    // 0x800777A8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    LOOKUP_FUNC(0x802A14C0)(rdram, ctx);
        goto after_2;
    // 0x800777A8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_2:
    // 0x800777AC: b           L_800777D0
    // 0x800777B0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_800777D0;
    // 0x800777B0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_800777B4:
    // 0x800777B4: jal         0x802A14C0
    // 0x800777B8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    LOOKUP_FUNC(0x802A14C0)(rdram, ctx);
        goto after_3;
    // 0x800777B8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_3:
    // 0x800777BC: b           L_800777D0
    // 0x800777C0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_800777D0;
    // 0x800777C0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_800777C4:
    // 0x800777C4: jal         0x802A14C0
    // 0x800777C8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    LOOKUP_FUNC(0x802A14C0)(rdram, ctx);
        goto after_4;
    // 0x800777C8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_4:
    // 0x800777CC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_800777D0:
    // 0x800777D0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800777D4: jr          $ra
    // 0x800777D8: nop

    return;
    // 0x800777D8: nop

;}
RECOMP_FUNC void func_800777DC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800777DC: lui         $v0, 0x8010
    ctx->r2 = S32(0X8010 << 16);
    // 0x800777E0: lhu         $v0, 0x522A($v0)
    ctx->r2 = MEM_HU(ctx->r2, 0X522A);
    // 0x800777E4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800777E8: andi        $t6, $v0, 0x3
    ctx->r14 = ctx->r2 & 0X3;
    // 0x800777EC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800777F0: beq         $t6, $zero, L_80077824
    if (ctx->r14 == 0) {
        // 0x800777F4: sw          $a0, 0x18($sp)
        MEM_W(0X18, ctx->r29) = ctx->r4;
            goto L_80077824;
    }
    // 0x800777F4: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x800777F8: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x800777FC: beq         $t6, $at, L_80077838
    if (ctx->r14 == ctx->r1) {
        // 0x80077800: addiu       $a0, $zero, 0x5D5
        ctx->r4 = ADD32(0, 0X5D5);
            goto L_80077838;
    }
    // 0x80077800: addiu       $a0, $zero, 0x5D5
    ctx->r4 = ADD32(0, 0X5D5);
    // 0x80077804: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x80077808: beq         $t6, $at, L_80077848
    if (ctx->r14 == ctx->r1) {
        // 0x8007780C: addiu       $a0, $zero, 0x4DB
        ctx->r4 = ADD32(0, 0X4DB);
            goto L_80077848;
    }
    // 0x8007780C: addiu       $a0, $zero, 0x4DB
    ctx->r4 = ADD32(0, 0X4DB);
    // 0x80077810: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x80077814: beq         $t6, $at, L_80077858
    if (ctx->r14 == ctx->r1) {
        // 0x80077818: addiu       $a0, $zero, 0x5D6
        ctx->r4 = ADD32(0, 0X5D6);
            goto L_80077858;
    }
    // 0x80077818: addiu       $a0, $zero, 0x5D6
    ctx->r4 = ADD32(0, 0X5D6);
    // 0x8007781C: b           L_80077864
    // 0x80077820: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80077864;
    // 0x80077820: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80077824:
    // 0x80077824: addiu       $a0, $zero, 0x4BE
    ctx->r4 = ADD32(0, 0X4BE);
    // 0x80077828: jal         0x802A14C0
    // 0x8007782C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    LOOKUP_FUNC(0x802A14C0)(rdram, ctx);
        goto after_0;
    // 0x8007782C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_0:
    // 0x80077830: b           L_80077864
    // 0x80077834: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80077864;
    // 0x80077834: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80077838:
    // 0x80077838: jal         0x802A14C0
    // 0x8007783C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    LOOKUP_FUNC(0x802A14C0)(rdram, ctx);
        goto after_1;
    // 0x8007783C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_1:
    // 0x80077840: b           L_80077864
    // 0x80077844: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80077864;
    // 0x80077844: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80077848:
    // 0x80077848: jal         0x802A14C0
    // 0x8007784C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    LOOKUP_FUNC(0x802A14C0)(rdram, ctx);
        goto after_2;
    // 0x8007784C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_2:
    // 0x80077850: b           L_80077864
    // 0x80077854: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80077864;
    // 0x80077854: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80077858:
    // 0x80077858: jal         0x802A14C0
    // 0x8007785C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    LOOKUP_FUNC(0x802A14C0)(rdram, ctx);
        goto after_3;
    // 0x8007785C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_3:
    // 0x80077860: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80077864:
    // 0x80077864: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80077868: jr          $ra
    // 0x8007786C: nop

    return;
    // 0x8007786C: nop

;}
RECOMP_FUNC void func_80077880(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80077880: lui         $t6, 0x8009
    ctx->r14 = S32(0X8009 << 16);
    // 0x80077884: lw          $t6, 0x3B20($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X3B20);
    // 0x80077888: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8007788C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80077890: lhu         $t7, 0xC2($t6)
    ctx->r15 = MEM_HU(ctx->r14, 0XC2);
    // 0x80077894: lui         $t9, 0x802C
    ctx->r25 = S32(0X802C << 16);
    // 0x80077898: andi        $t8, $t7, 0x40
    ctx->r24 = ctx->r15 & 0X40;
    // 0x8007789C: beq         $t8, $zero, L_800778D0
    if (ctx->r24 == 0) {
        // 0x800778A0: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_800778D0;
    }
    // 0x800778A0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800778A4: lbu         $t9, 0x39FF($t9)
    ctx->r25 = MEM_BU(ctx->r25, 0X39FF);
    // 0x800778A8: nop

    // 0x800778AC: beq         $t9, $zero, L_800778C4
    if (ctx->r25 == 0) {
        // 0x800778B0: nop
    
            goto L_800778C4;
    }
    // 0x800778B0: nop

    // 0x800778B4: jal         0x80015BC0
    // 0x800778B8: addiu       $a0, $zero, 0x9
    ctx->r4 = ADD32(0, 0X9);
    func_80015BC0(rdram, ctx);
        goto after_0;
    // 0x800778B8: addiu       $a0, $zero, 0x9
    ctx->r4 = ADD32(0, 0X9);
    after_0:
    // 0x800778BC: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x800778C0: sb          $zero, 0x39FF($at)
    MEM_B(0X39FF, ctx->r1) = 0;
L_800778C4:
    // 0x800778C4: jal         0x80074D34
    // 0x800778C8: nop

    func_80074D34(rdram, ctx);
        goto after_1;
    // 0x800778C8: nop

    after_1:
    // 0x800778CC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_800778D0:
    // 0x800778D0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800778D4: jr          $ra
    // 0x800778D8: nop

    return;
    // 0x800778D8: nop

;}
RECOMP_FUNC void func_800778DC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800778DC: lui         $t6, 0x802C
    ctx->r14 = S32(0X802C << 16);
    // 0x800778E0: lbu         $t6, 0x39FF($t6)
    ctx->r14 = MEM_BU(ctx->r14, 0X39FF);
    // 0x800778E4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800778E8: beq         $t6, $zero, L_80077900
    if (ctx->r14 == 0) {
        // 0x800778EC: sw          $ra, 0x14($sp)
        MEM_W(0X14, ctx->r29) = ctx->r31;
            goto L_80077900;
    }
    // 0x800778EC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800778F0: jal         0x80015BC0
    // 0x800778F4: addiu       $a0, $zero, 0x9
    ctx->r4 = ADD32(0, 0X9);
    func_80015BC0(rdram, ctx);
        goto after_0;
    // 0x800778F4: addiu       $a0, $zero, 0x9
    ctx->r4 = ADD32(0, 0X9);
    after_0:
    // 0x800778F8: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x800778FC: sb          $zero, 0x39FF($at)
    MEM_B(0X39FF, ctx->r1) = 0;
L_80077900:
    // 0x80077900: jal         0x80074D34
    // 0x80077904: nop

    func_80074D34(rdram, ctx);
        goto after_1;
    // 0x80077904: nop

    after_1:
    // 0x80077908: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8007790C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80077910: jr          $ra
    // 0x80077914: nop

    return;
    // 0x80077914: nop

;}
RECOMP_FUNC void func_80077918(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80077918: lui         $t6, 0x802C
    ctx->r14 = S32(0X802C << 16);
    // 0x8007791C: lbu         $t6, 0x39FF($t6)
    ctx->r14 = MEM_BU(ctx->r14, 0X39FF);
    // 0x80077920: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80077924: beq         $t6, $zero, L_8007793C
    if (ctx->r14 == 0) {
        // 0x80077928: sw          $ra, 0x14($sp)
        MEM_W(0X14, ctx->r29) = ctx->r31;
            goto L_8007793C;
    }
    // 0x80077928: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8007792C: jal         0x80015BC0
    // 0x80077930: addiu       $a0, $zero, 0x9
    ctx->r4 = ADD32(0, 0X9);
    func_80015BC0(rdram, ctx);
        goto after_0;
    // 0x80077930: addiu       $a0, $zero, 0x9
    ctx->r4 = ADD32(0, 0X9);
    after_0:
    // 0x80077934: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x80077938: sb          $zero, 0x39FF($at)
    MEM_B(0X39FF, ctx->r1) = 0;
L_8007793C:
    // 0x8007793C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80077940: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80077944: jr          $ra
    // 0x80077948: nop

    return;
    // 0x80077948: nop

;}
RECOMP_FUNC void func_8007794C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8007794C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80077950: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80077954: jal         0x8007840C
    // 0x80077958: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_8007840C(rdram, ctx);
        goto after_0;
    // 0x80077958: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x8007795C: jal         0x80077880
    // 0x80077960: nop

    func_80077880(rdram, ctx);
        goto after_1;
    // 0x80077960: nop

    after_1:
    // 0x80077964: lui         $t6, 0x8010
    ctx->r14 = S32(0X8010 << 16);
    // 0x80077968: lhu         $t6, 0x522A($t6)
    ctx->r14 = MEM_HU(ctx->r14, 0X522A);
    // 0x8007796C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80077970: andi        $t7, $t6, 0x1
    ctx->r15 = ctx->r14 & 0X1;
    // 0x80077974: beq         $t7, $zero, L_8007798C
    if (ctx->r15 == 0) {
        // 0x80077978: addiu       $a0, $zero, 0x444
        ctx->r4 = ADD32(0, 0X444);
            goto L_8007798C;
    }
    // 0x80077978: addiu       $a0, $zero, 0x444
    ctx->r4 = ADD32(0, 0X444);
    // 0x8007797C: jal         0x802A14C0
    // 0x80077980: addiu       $a0, $zero, 0x47B
    ctx->r4 = ADD32(0, 0X47B);
    LOOKUP_FUNC(0x802A14C0)(rdram, ctx);
        goto after_2;
    // 0x80077980: addiu       $a0, $zero, 0x47B
    ctx->r4 = ADD32(0, 0X47B);
    after_2:
    // 0x80077984: b           L_80077998
    // 0x80077988: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80077998;
    // 0x80077988: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8007798C:
    // 0x8007798C: jal         0x802A14C0
    // 0x80077990: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    LOOKUP_FUNC(0x802A14C0)(rdram, ctx);
        goto after_3;
    // 0x80077990: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_3:
    // 0x80077994: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80077998:
    // 0x80077998: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8007799C: jr          $ra
    // 0x800779A0: nop

    return;
    // 0x800779A0: nop

;}
RECOMP_FUNC void func_800779A4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800779A4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800779A8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800779AC: jal         0x8007840C
    // 0x800779B0: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_8007840C(rdram, ctx);
        goto after_0;
    // 0x800779B0: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x800779B4: jal         0x80077880
    // 0x800779B8: nop

    func_80077880(rdram, ctx);
        goto after_1;
    // 0x800779B8: nop

    after_1:
    // 0x800779BC: lw          $t6, 0x18($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X18);
    // 0x800779C0: nop

    // 0x800779C4: lw          $t7, 0xC8($t6)
    ctx->r15 = MEM_W(ctx->r14, 0XC8);
    // 0x800779C8: nop

    // 0x800779CC: lbu         $a0, 0x7($t7)
    ctx->r4 = MEM_BU(ctx->r15, 0X7);
    // 0x800779D0: jal         0x8007A1CC
    // 0x800779D4: nop

    func_8007A1CC(rdram, ctx);
        goto after_2;
    // 0x800779D4: nop

    after_2:
    // 0x800779D8: lui         $v0, 0x8010
    ctx->r2 = S32(0X8010 << 16);
    // 0x800779DC: lhu         $v0, 0x522A($v0)
    ctx->r2 = MEM_HU(ctx->r2, 0X522A);
    // 0x800779E0: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x800779E4: andi        $t8, $v0, 0x7
    ctx->r24 = ctx->r2 & 0X7;
    // 0x800779E8: beq         $t8, $at, L_80077A10
    if (ctx->r24 == ctx->r1) {
        // 0x800779EC: addiu       $a0, $zero, 0x4BE
        ctx->r4 = ADD32(0, 0X4BE);
            goto L_80077A10;
    }
    // 0x800779EC: addiu       $a0, $zero, 0x4BE
    ctx->r4 = ADD32(0, 0X4BE);
    // 0x800779F0: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x800779F4: beq         $t8, $at, L_80077A30
    if (ctx->r24 == ctx->r1) {
        // 0x800779F8: addiu       $a0, $zero, 0x5D4
        ctx->r4 = ADD32(0, 0X5D4);
            goto L_80077A30;
    }
    // 0x800779F8: addiu       $a0, $zero, 0x5D4
    ctx->r4 = ADD32(0, 0X5D4);
    // 0x800779FC: addiu       $at, $zero, 0x6
    ctx->r1 = ADD32(0, 0X6);
    // 0x80077A00: beq         $t8, $at, L_80077A20
    if (ctx->r24 == ctx->r1) {
        // 0x80077A04: addiu       $a0, $zero, 0x5D3
        ctx->r4 = ADD32(0, 0X5D3);
            goto L_80077A20;
    }
    // 0x80077A04: addiu       $a0, $zero, 0x5D3
    ctx->r4 = ADD32(0, 0X5D3);
    // 0x80077A08: b           L_80077A40
    // 0x80077A0C: addiu       $a0, $zero, 0x564
    ctx->r4 = ADD32(0, 0X564);
        goto L_80077A40;
    // 0x80077A0C: addiu       $a0, $zero, 0x564
    ctx->r4 = ADD32(0, 0X564);
L_80077A10:
    // 0x80077A10: jal         0x802A14C0
    // 0x80077A14: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    LOOKUP_FUNC(0x802A14C0)(rdram, ctx);
        goto after_3;
    // 0x80077A14: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_3:
    // 0x80077A18: b           L_80077A48
    // 0x80077A1C: nop

        goto L_80077A48;
    // 0x80077A1C: nop

L_80077A20:
    // 0x80077A20: jal         0x802A14C0
    // 0x80077A24: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    LOOKUP_FUNC(0x802A14C0)(rdram, ctx);
        goto after_4;
    // 0x80077A24: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_4:
    // 0x80077A28: b           L_80077A48
    // 0x80077A2C: nop

        goto L_80077A48;
    // 0x80077A2C: nop

L_80077A30:
    // 0x80077A30: jal         0x802A14C0
    // 0x80077A34: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    LOOKUP_FUNC(0x802A14C0)(rdram, ctx);
        goto after_5;
    // 0x80077A34: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_5:
    // 0x80077A38: b           L_80077A48
    // 0x80077A3C: nop

        goto L_80077A48;
    // 0x80077A3C: nop

L_80077A40:
    // 0x80077A40: jal         0x802A14C0
    // 0x80077A44: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    LOOKUP_FUNC(0x802A14C0)(rdram, ctx);
        goto after_6;
    // 0x80077A44: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_6:
L_80077A48:
    // 0x80077A48: lui         $t9, 0x8010
    ctx->r25 = S32(0X8010 << 16);
    // 0x80077A4C: lhu         $t9, 0x522A($t9)
    ctx->r25 = MEM_HU(ctx->r25, 0X522A);
    // 0x80077A50: addiu       $a0, $zero, 0x59D
    ctx->r4 = ADD32(0, 0X59D);
    // 0x80077A54: andi        $t0, $t9, 0x1
    ctx->r8 = ctx->r25 & 0X1;
    // 0x80077A58: beq         $t0, $zero, L_80077A6C
    if (ctx->r8 == 0) {
        // 0x80077A5C: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_80077A6C;
    }
    // 0x80077A5C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80077A60: jal         0x802A14C0
    // 0x80077A64: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    LOOKUP_FUNC(0x802A14C0)(rdram, ctx);
        goto after_7;
    // 0x80077A64: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_7:
    // 0x80077A68: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80077A6C:
    // 0x80077A6C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80077A70: jr          $ra
    // 0x80077A74: nop

    return;
    // 0x80077A74: nop

;}
RECOMP_FUNC void func_80077A78(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80077A78: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80077A7C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80077A80: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x80077A84: addiu       $a0, $zero, 0x46B
    ctx->r4 = ADD32(0, 0X46B);
    // 0x80077A88: jal         0x802A14C0
    // 0x80077A8C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    LOOKUP_FUNC(0x802A14C0)(rdram, ctx);
        goto after_0;
    // 0x80077A8C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_0:
    // 0x80077A90: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80077A94: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80077A98: jr          $ra
    // 0x80077A9C: nop

    return;
    // 0x80077A9C: nop

;}
RECOMP_FUNC void func_80077AA0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80077AA0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80077AA4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80077AA8: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x80077AAC: addiu       $a0, $zero, 0x59E
    ctx->r4 = ADD32(0, 0X59E);
    // 0x80077AB0: jal         0x802A14C0
    // 0x80077AB4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    LOOKUP_FUNC(0x802A14C0)(rdram, ctx);
        goto after_0;
    // 0x80077AB4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_0:
    // 0x80077AB8: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x80077ABC: jal         0x80079FD0
    // 0x80077AC0: nop

    func_80079FD0(rdram, ctx);
        goto after_1;
    // 0x80077AC0: nop

    after_1:
    // 0x80077AC4: addiu       $a0, $zero, 0x570
    ctx->r4 = ADD32(0, 0X570);
    // 0x80077AC8: jal         0x802A14C0
    // 0x80077ACC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    LOOKUP_FUNC(0x802A14C0)(rdram, ctx);
        goto after_2;
    // 0x80077ACC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_2:
    // 0x80077AD0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80077AD4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80077AD8: jr          $ra
    // 0x80077ADC: nop

    return;
    // 0x80077ADC: nop

;}
RECOMP_FUNC void func_80077AE0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80077AE0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80077AE4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80077AE8: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x80077AEC: addiu       $a0, $zero, 0x44F
    ctx->r4 = ADD32(0, 0X44F);
    // 0x80077AF0: jal         0x802A14C0
    // 0x80077AF4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    LOOKUP_FUNC(0x802A14C0)(rdram, ctx);
        goto after_0;
    // 0x80077AF4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_0:
    // 0x80077AF8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80077AFC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80077B00: jr          $ra
    // 0x80077B04: nop

    return;
    // 0x80077B04: nop

;}
RECOMP_FUNC void func_80077B08(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80077B08: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80077B0C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80077B10: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x80077B14: addiu       $a0, $zero, 0x59F
    ctx->r4 = ADD32(0, 0X59F);
    // 0x80077B18: jal         0x802A14C0
    // 0x80077B1C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    LOOKUP_FUNC(0x802A14C0)(rdram, ctx);
        goto after_0;
    // 0x80077B1C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_0:
    // 0x80077B20: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80077B24: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80077B28: jr          $ra
    // 0x80077B2C: nop

    return;
    // 0x80077B2C: nop

;}
RECOMP_FUNC void func_80077B30(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80077B30: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80077B34: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80077B38: jal         0x8007840C
    // 0x80077B3C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_8007840C(rdram, ctx);
        goto after_0;
    // 0x80077B3C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x80077B40: jal         0x80077880
    // 0x80077B44: nop

    func_80077880(rdram, ctx);
        goto after_1;
    // 0x80077B44: nop

    after_1:
    // 0x80077B48: addiu       $a0, $zero, 0x565
    ctx->r4 = ADD32(0, 0X565);
    // 0x80077B4C: jal         0x802A14C0
    // 0x80077B50: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    LOOKUP_FUNC(0x802A14C0)(rdram, ctx);
        goto after_2;
    // 0x80077B50: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_2:
    // 0x80077B54: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80077B58: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80077B5C: jr          $ra
    // 0x80077B60: nop

    return;
    // 0x80077B60: nop

;}
RECOMP_FUNC void func_80077B64(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80077B64: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80077B68: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80077B6C: jal         0x8007840C
    // 0x80077B70: nop

    func_8007840C(rdram, ctx);
        goto after_0;
    // 0x80077B70: nop

    after_0:
    // 0x80077B74: lui         $v0, 0x8010
    ctx->r2 = S32(0X8010 << 16);
    // 0x80077B78: lhu         $v0, 0x522A($v0)
    ctx->r2 = MEM_HU(ctx->r2, 0X522A);
    // 0x80077B7C: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80077B80: andi        $t6, $v0, 0x1
    ctx->r14 = ctx->r2 & 0X1;
    // 0x80077B84: beq         $t6, $zero, L_80077B9C
    if (ctx->r14 == 0) {
        // 0x80077B88: addiu       $a0, $zero, 0x41A
        ctx->r4 = ADD32(0, 0X41A);
            goto L_80077B9C;
    }
    // 0x80077B88: addiu       $a0, $zero, 0x41A
    ctx->r4 = ADD32(0, 0X41A);
    // 0x80077B8C: beq         $t6, $at, L_80077BAC
    if (ctx->r14 == ctx->r1) {
        // 0x80077B90: addiu       $a0, $zero, 0x5C9
        ctx->r4 = ADD32(0, 0X5C9);
            goto L_80077BAC;
    }
    // 0x80077B90: addiu       $a0, $zero, 0x5C9
    ctx->r4 = ADD32(0, 0X5C9);
    // 0x80077B94: b           L_80077BB8
    // 0x80077B98: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80077BB8;
    // 0x80077B98: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80077B9C:
    // 0x80077B9C: jal         0x802A14C0
    // 0x80077BA0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    LOOKUP_FUNC(0x802A14C0)(rdram, ctx);
        goto after_1;
    // 0x80077BA0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_1:
    // 0x80077BA4: b           L_80077BB8
    // 0x80077BA8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80077BB8;
    // 0x80077BA8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80077BAC:
    // 0x80077BAC: jal         0x802A14C0
    // 0x80077BB0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    LOOKUP_FUNC(0x802A14C0)(rdram, ctx);
        goto after_2;
    // 0x80077BB0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_2:
    // 0x80077BB4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80077BB8:
    // 0x80077BB8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80077BBC: jr          $ra
    // 0x80077BC0: nop

    return;
    // 0x80077BC0: nop

;}
RECOMP_FUNC void func_80077BC4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80077BC4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80077BC8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80077BCC: jal         0x802A1744
    // 0x80077BD0: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    LOOKUP_FUNC(0x802A1744)(rdram, ctx);
        goto after_0;
    // 0x80077BD0: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x80077BD4: slti        $at, $v0, 0x2
    ctx->r1 = SIGNED(ctx->r2) < 0X2 ? 1 : 0;
    // 0x80077BD8: beq         $at, $zero, L_80077BE8
    if (ctx->r1 == 0) {
        // 0x80077BDC: addiu       $a0, $zero, 0x567
        ctx->r4 = ADD32(0, 0X567);
            goto L_80077BE8;
    }
    // 0x80077BDC: addiu       $a0, $zero, 0x567
    ctx->r4 = ADD32(0, 0X567);
    // 0x80077BE0: jal         0x802A14C0
    // 0x80077BE4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    LOOKUP_FUNC(0x802A14C0)(rdram, ctx);
        goto after_1;
    // 0x80077BE4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_1:
L_80077BE8:
    // 0x80077BE8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80077BEC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80077BF0: jr          $ra
    // 0x80077BF4: nop

    return;
    // 0x80077BF4: nop

;}
RECOMP_FUNC void func_80077BF8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80077BF8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80077BFC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80077C00: addiu       $a0, $zero, 0x41B
    ctx->r4 = ADD32(0, 0X41B);
    // 0x80077C04: jal         0x802A14C0
    // 0x80077C08: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    LOOKUP_FUNC(0x802A14C0)(rdram, ctx);
        goto after_0;
    // 0x80077C08: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_0:
    // 0x80077C0C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80077C10: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80077C14: jr          $ra
    // 0x80077C18: nop

    return;
    // 0x80077C18: nop

;}
RECOMP_FUNC void func_80077C1C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80077C1C: lui         $t6, 0x8010
    ctx->r14 = S32(0X8010 << 16);
    // 0x80077C20: lhu         $t6, 0x522A($t6)
    ctx->r14 = MEM_HU(ctx->r14, 0X522A);
    // 0x80077C24: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80077C28: andi        $t7, $t6, 0x1
    ctx->r15 = ctx->r14 & 0X1;
    // 0x80077C2C: beq         $t7, $zero, L_80077C48
    if (ctx->r15 == 0) {
        // 0x80077C30: sw          $ra, 0x14($sp)
        MEM_W(0X14, ctx->r29) = ctx->r31;
            goto L_80077C48;
    }
    // 0x80077C30: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80077C34: addiu       $a0, $zero, 0x474
    ctx->r4 = ADD32(0, 0X474);
    // 0x80077C38: jal         0x802A14C0
    // 0x80077C3C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    LOOKUP_FUNC(0x802A14C0)(rdram, ctx);
        goto after_0;
    // 0x80077C3C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_0:
    // 0x80077C40: b           L_80077C58
    // 0x80077C44: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80077C58;
    // 0x80077C44: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80077C48:
    // 0x80077C48: addiu       $a0, $zero, 0x5DE
    ctx->r4 = ADD32(0, 0X5DE);
    // 0x80077C4C: jal         0x802A14C0
    // 0x80077C50: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    LOOKUP_FUNC(0x802A14C0)(rdram, ctx);
        goto after_1;
    // 0x80077C50: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_1:
    // 0x80077C54: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80077C58:
    // 0x80077C58: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80077C5C: jr          $ra
    // 0x80077C60: nop

    return;
    // 0x80077C60: nop

;}
RECOMP_FUNC void func_80077C64(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80077C64: lui         $t6, 0x8010
    ctx->r14 = S32(0X8010 << 16);
    // 0x80077C68: lhu         $t6, 0x522A($t6)
    ctx->r14 = MEM_HU(ctx->r14, 0X522A);
    // 0x80077C6C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80077C70: andi        $t7, $t6, 0x1
    ctx->r15 = ctx->r14 & 0X1;
    // 0x80077C74: beq         $t7, $zero, L_80077C98
    if (ctx->r15 == 0) {
        // 0x80077C78: sw          $ra, 0x14($sp)
        MEM_W(0X14, ctx->r29) = ctx->r31;
            goto L_80077C98;
    }
    // 0x80077C78: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80077C7C: addiu       $a0, $zero, 0x448
    ctx->r4 = ADD32(0, 0X448);
    // 0x80077C80: jal         0x802A14C0
    // 0x80077C84: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    LOOKUP_FUNC(0x802A14C0)(rdram, ctx);
        goto after_0;
    // 0x80077C84: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_0:
    // 0x80077C88: jal         0x80077EC8
    // 0x80077C8C: nop

    func_80077EC8(rdram, ctx);
        goto after_1;
    // 0x80077C8C: nop

    after_1:
    // 0x80077C90: b           L_80077CA8
    // 0x80077C94: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80077CA8;
    // 0x80077C94: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80077C98:
    // 0x80077C98: addiu       $a0, $zero, 0x5DF
    ctx->r4 = ADD32(0, 0X5DF);
    // 0x80077C9C: jal         0x802A14C0
    // 0x80077CA0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    LOOKUP_FUNC(0x802A14C0)(rdram, ctx);
        goto after_2;
    // 0x80077CA0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_2:
    // 0x80077CA4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80077CA8:
    // 0x80077CA8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80077CAC: jr          $ra
    // 0x80077CB0: nop

    return;
    // 0x80077CB0: nop

;}
RECOMP_FUNC void func_80077CB4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80077CB4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80077CB8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80077CBC: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x80077CC0: addiu       $a0, $zero, 0x462
    ctx->r4 = ADD32(0, 0X462);
    // 0x80077CC4: jal         0x802A14C0
    // 0x80077CC8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    LOOKUP_FUNC(0x802A14C0)(rdram, ctx);
        goto after_0;
    // 0x80077CC8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_0:
    // 0x80077CCC: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x80077CD0: jal         0x80079FD0
    // 0x80077CD4: nop

    func_80079FD0(rdram, ctx);
        goto after_1;
    // 0x80077CD4: nop

    after_1:
    // 0x80077CD8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80077CDC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80077CE0: jr          $ra
    // 0x80077CE4: nop

    return;
    // 0x80077CE4: nop

;}
RECOMP_FUNC void func_80077CE8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80077CE8: lui         $t6, 0x8009
    ctx->r14 = S32(0X8009 << 16);
    // 0x80077CEC: lw          $t6, 0x3B20($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X3B20);
    // 0x80077CF0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80077CF4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80077CF8: lw          $a0, 0x8C($t6)
    ctx->r4 = MEM_W(ctx->r14, 0X8C);
    // 0x80077CFC: jal         0x800764C8
    // 0x80077D00: nop

    func_800764C8(rdram, ctx);
        goto after_0;
    // 0x80077D00: nop

    after_0:
    // 0x80077D04: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80077D08: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80077D0C: jr          $ra
    // 0x80077D10: nop

    return;
    // 0x80077D10: nop

;}
RECOMP_FUNC void func_80077D14(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80077D14: lui         $t6, 0x8012
    ctx->r14 = S32(0X8012 << 16);
    // 0x80077D18: lhu         $t6, 0xB74($t6)
    ctx->r14 = MEM_HU(ctx->r14, 0XB74);
    // 0x80077D1C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80077D20: beq         $t6, $zero, L_80077DD4
    if (ctx->r14 == 0) {
        // 0x80077D24: sw          $ra, 0x14($sp)
        MEM_W(0X14, ctx->r29) = ctx->r31;
            goto L_80077DD4;
    }
    // 0x80077D24: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80077D28: lui         $t7, 0x8009
    ctx->r15 = S32(0X8009 << 16);
    // 0x80077D2C: lw          $t7, 0x3B20($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X3B20);
    // 0x80077D30: lui         $t0, 0x802C
    ctx->r8 = S32(0X802C << 16);
    // 0x80077D34: lw          $a0, 0x8C($t7)
    ctx->r4 = MEM_W(ctx->r15, 0X8C);
    // 0x80077D38: lui         $t4, 0x802C
    ctx->r12 = S32(0X802C << 16);
    // 0x80077D3C: lw          $t8, 0xC8($a0)
    ctx->r24 = MEM_W(ctx->r4, 0XC8);
    // 0x80077D40: nop

    // 0x80077D44: lhu         $t9, 0x6($t8)
    ctx->r25 = MEM_HU(ctx->r24, 0X6);
    // 0x80077D48: nop

    // 0x80077D4C: bne         $t9, $zero, L_80077D98
    if (ctx->r25 != 0) {
        // 0x80077D50: nop
    
            goto L_80077D98;
    }
    // 0x80077D50: nop

    // 0x80077D54: lbu         $t0, 0x3AA9($t0)
    ctx->r8 = MEM_BU(ctx->r8, 0X3AA9);
    // 0x80077D58: nop

    // 0x80077D5C: andi        $t1, $t0, 0x4
    ctx->r9 = ctx->r8 & 0X4;
    // 0x80077D60: bne         $t1, $zero, L_80077DD8
    if (ctx->r9 != 0) {
        // 0x80077D64: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_80077DD8;
    }
    // 0x80077D64: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80077D68: jal         0x80079FD0
    // 0x80077D6C: nop

    func_80079FD0(rdram, ctx);
        goto after_0;
    // 0x80077D6C: nop

    after_0:
    // 0x80077D70: addiu       $a0, $zero, 0x56C
    ctx->r4 = ADD32(0, 0X56C);
    // 0x80077D74: jal         0x802A14C0
    // 0x80077D78: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    LOOKUP_FUNC(0x802A14C0)(rdram, ctx);
        goto after_1;
    // 0x80077D78: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_1:
    // 0x80077D7C: lui         $v0, 0x802C
    ctx->r2 = S32(0X802C << 16);
    // 0x80077D80: addiu       $v0, $v0, 0x3AA9
    ctx->r2 = ADD32(ctx->r2, 0X3AA9);
    // 0x80077D84: lbu         $t2, 0x0($v0)
    ctx->r10 = MEM_BU(ctx->r2, 0X0);
    // 0x80077D88: nop

    // 0x80077D8C: ori         $t3, $t2, 0x4
    ctx->r11 = ctx->r10 | 0X4;
    // 0x80077D90: b           L_80077DD4
    // 0x80077D94: sb          $t3, 0x0($v0)
    MEM_B(0X0, ctx->r2) = ctx->r11;
        goto L_80077DD4;
    // 0x80077D94: sb          $t3, 0x0($v0)
    MEM_B(0X0, ctx->r2) = ctx->r11;
L_80077D98:
    // 0x80077D98: lbu         $t4, 0x3AA9($t4)
    ctx->r12 = MEM_BU(ctx->r12, 0X3AA9);
    // 0x80077D9C: nop

    // 0x80077DA0: andi        $t5, $t4, 0x8
    ctx->r13 = ctx->r12 & 0X8;
    // 0x80077DA4: bne         $t5, $zero, L_80077DD8
    if (ctx->r13 != 0) {
        // 0x80077DA8: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_80077DD8;
    }
    // 0x80077DA8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80077DAC: jal         0x80079FD0
    // 0x80077DB0: nop

    func_80079FD0(rdram, ctx);
        goto after_2;
    // 0x80077DB0: nop

    after_2:
    // 0x80077DB4: addiu       $a0, $zero, 0x56C
    ctx->r4 = ADD32(0, 0X56C);
    // 0x80077DB8: jal         0x802A14C0
    // 0x80077DBC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    LOOKUP_FUNC(0x802A14C0)(rdram, ctx);
        goto after_3;
    // 0x80077DBC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_3:
    // 0x80077DC0: lui         $t6, 0x802C
    ctx->r14 = S32(0X802C << 16);
    // 0x80077DC4: lbu         $t6, 0x3AA9($t6)
    ctx->r14 = MEM_BU(ctx->r14, 0X3AA9);
    // 0x80077DC8: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x80077DCC: ori         $t7, $t6, 0x8
    ctx->r15 = ctx->r14 | 0X8;
    // 0x80077DD0: sb          $t7, 0x3AA9($at)
    MEM_B(0X3AA9, ctx->r1) = ctx->r15;
L_80077DD4:
    // 0x80077DD4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80077DD8:
    // 0x80077DD8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80077DDC: jr          $ra
    // 0x80077DE0: nop

    return;
    // 0x80077DE0: nop

;}
RECOMP_FUNC void func_80077DEC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80077DEC: jr          $ra
    // 0x80077DF0: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    return;
    // 0x80077DF0: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
;}
RECOMP_FUNC void func_80077DF4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80077DF4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80077DF8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80077DFC: addiu       $a0, $zero, 0x400
    ctx->r4 = ADD32(0, 0X400);
    // 0x80077E00: jal         0x802A14C0
    // 0x80077E04: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    LOOKUP_FUNC(0x802A14C0)(rdram, ctx);
        goto after_0;
    // 0x80077E04: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_0:
    // 0x80077E08: addiu       $a0, $zero, 0x5A0
    ctx->r4 = ADD32(0, 0X5A0);
    // 0x80077E0C: jal         0x802A14C0
    // 0x80077E10: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    LOOKUP_FUNC(0x802A14C0)(rdram, ctx);
        goto after_1;
    // 0x80077E10: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_1:
    // 0x80077E14: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80077E18: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80077E1C: jr          $ra
    // 0x80077E20: nop

    return;
    // 0x80077E20: nop

;}
RECOMP_FUNC void func_80077E24(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80077E24: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x80077E28: addiu       $v0, $v0, -0x2CF0
    ctx->r2 = ADD32(ctx->r2, -0X2CF0);
    // 0x80077E2C: lhu         $t6, 0x10($v0)
    ctx->r14 = MEM_HU(ctx->r2, 0X10);
    // 0x80077E30: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80077E34: andi        $t7, $t6, 0x40
    ctx->r15 = ctx->r14 & 0X40;
    // 0x80077E38: bne         $t7, $zero, L_80077E70
    if (ctx->r15 != 0) {
        // 0x80077E3C: sw          $ra, 0x14($sp)
        MEM_W(0X14, ctx->r29) = ctx->r31;
            goto L_80077E70;
    }
    // 0x80077E3C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80077E40: lhu         $t8, 0xAA4($v0)
    ctx->r24 = MEM_HU(ctx->r2, 0XAA4);
    // 0x80077E44: lui         $t0, 0x802C
    ctx->r8 = S32(0X802C << 16);
    // 0x80077E48: andi        $t9, $t8, 0x40
    ctx->r25 = ctx->r24 & 0X40;
    // 0x80077E4C: bne         $t9, $zero, L_80077E74
    if (ctx->r25 != 0) {
        // 0x80077E50: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_80077E74;
    }
    // 0x80077E50: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80077E54: lhu         $t0, 0x3ACA($t0)
    ctx->r8 = MEM_HU(ctx->r8, 0X3ACA);
    // 0x80077E58: addiu       $a0, $zero, 0x4D0
    ctx->r4 = ADD32(0, 0X4D0);
    // 0x80077E5C: slti        $at, $t0, 0x4B1
    ctx->r1 = SIGNED(ctx->r8) < 0X4B1 ? 1 : 0;
    // 0x80077E60: bne         $at, $zero, L_80077E74
    if (ctx->r1 != 0) {
        // 0x80077E64: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_80077E74;
    }
    // 0x80077E64: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80077E68: jal         0x802A14C0
    // 0x80077E6C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    LOOKUP_FUNC(0x802A14C0)(rdram, ctx);
        goto after_0;
    // 0x80077E6C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_0:
L_80077E70:
    // 0x80077E70: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80077E74:
    // 0x80077E74: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80077E78: jr          $ra
    // 0x80077E7C: nop

    return;
    // 0x80077E7C: nop

;}
RECOMP_FUNC void func_80077E80(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80077E80: lui         $t6, 0x8010
    ctx->r14 = S32(0X8010 << 16);
    // 0x80077E84: lhu         $t6, 0x522A($t6)
    ctx->r14 = MEM_HU(ctx->r14, 0X522A);
    // 0x80077E88: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80077E8C: andi        $t7, $t6, 0x1
    ctx->r15 = ctx->r14 & 0X1;
    // 0x80077E90: bne         $t7, $zero, L_80077EAC
    if (ctx->r15 != 0) {
        // 0x80077E94: sw          $ra, 0x14($sp)
        MEM_W(0X14, ctx->r29) = ctx->r31;
            goto L_80077EAC;
    }
    // 0x80077E94: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80077E98: addiu       $a0, $zero, 0x463
    ctx->r4 = ADD32(0, 0X463);
    // 0x80077E9C: jal         0x802A14C0
    // 0x80077EA0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    LOOKUP_FUNC(0x802A14C0)(rdram, ctx);
        goto after_0;
    // 0x80077EA0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_0:
    // 0x80077EA4: b           L_80077EBC
    // 0x80077EA8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80077EBC;
    // 0x80077EA8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80077EAC:
    // 0x80077EAC: addiu       $a0, $zero, 0x5A1
    ctx->r4 = ADD32(0, 0X5A1);
    // 0x80077EB0: jal         0x802A14C0
    // 0x80077EB4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    LOOKUP_FUNC(0x802A14C0)(rdram, ctx);
        goto after_1;
    // 0x80077EB4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_1:
    // 0x80077EB8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80077EBC:
    // 0x80077EBC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80077EC0: jr          $ra
    // 0x80077EC4: nop

    return;
    // 0x80077EC4: nop

;}
RECOMP_FUNC void func_80077EC8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80077EC8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80077ECC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80077ED0: jal         0x80077E80
    // 0x80077ED4: nop

    func_80077E80(rdram, ctx);
        goto after_0;
    // 0x80077ED4: nop

    after_0:
    // 0x80077ED8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80077EDC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80077EE0: jr          $ra
    // 0x80077EE4: nop

    return;
    // 0x80077EE4: nop

;}
RECOMP_FUNC void func_80077EE8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80077EE8: lui         $t6, 0x8010
    ctx->r14 = S32(0X8010 << 16);
    // 0x80077EEC: lhu         $t6, 0x522A($t6)
    ctx->r14 = MEM_HU(ctx->r14, 0X522A);
    // 0x80077EF0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80077EF4: andi        $t7, $t6, 0x1
    ctx->r15 = ctx->r14 & 0X1;
    // 0x80077EF8: beq         $t7, $zero, L_80077F1C
    if (ctx->r15 == 0) {
        // 0x80077EFC: sw          $ra, 0x14($sp)
        MEM_W(0X14, ctx->r29) = ctx->r31;
            goto L_80077F1C;
    }
    // 0x80077EFC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80077F00: jal         0x80079FD0
    // 0x80077F04: nop

    func_80079FD0(rdram, ctx);
        goto after_0;
    // 0x80077F04: nop

    after_0:
    // 0x80077F08: addiu       $a0, $zero, 0x445
    ctx->r4 = ADD32(0, 0X445);
    // 0x80077F0C: jal         0x802A14C0
    // 0x80077F10: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    LOOKUP_FUNC(0x802A14C0)(rdram, ctx);
        goto after_1;
    // 0x80077F10: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_1:
    // 0x80077F14: b           L_80077F2C
    // 0x80077F18: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80077F2C;
    // 0x80077F18: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80077F1C:
    // 0x80077F1C: addiu       $a0, $zero, 0x4BF
    ctx->r4 = ADD32(0, 0X4BF);
    // 0x80077F20: jal         0x802A14C0
    // 0x80077F24: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    LOOKUP_FUNC(0x802A14C0)(rdram, ctx);
        goto after_2;
    // 0x80077F24: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_2:
    // 0x80077F28: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80077F2C:
    // 0x80077F2C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80077F30: jr          $ra
    // 0x80077F34: nop

    return;
    // 0x80077F34: nop

;}
RECOMP_FUNC void func_80077F38(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80077F38: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80077F3C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80077F40: addiu       $a0, $zero, 0x4D1
    ctx->r4 = ADD32(0, 0X4D1);
    // 0x80077F44: jal         0x802A14C0
    // 0x80077F48: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    LOOKUP_FUNC(0x802A14C0)(rdram, ctx);
        goto after_0;
    // 0x80077F48: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_0:
    // 0x80077F4C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80077F50: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80077F54: jr          $ra
    // 0x80077F58: nop

    return;
    // 0x80077F58: nop

;}
RECOMP_FUNC void func_80077F5C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80077F5C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80077F60: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80077F64: addiu       $a0, $zero, 0x449
    ctx->r4 = ADD32(0, 0X449);
    // 0x80077F68: jal         0x802A14C0
    // 0x80077F6C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    LOOKUP_FUNC(0x802A14C0)(rdram, ctx);
        goto after_0;
    // 0x80077F6C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_0:
    // 0x80077F70: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80077F74: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80077F78: jr          $ra
    // 0x80077F7C: nop

    return;
    // 0x80077F7C: nop

;}
RECOMP_FUNC void func_80077F80(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80077F80: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80077F84: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80077F88: addiu       $a0, $zero, 0x41E
    ctx->r4 = ADD32(0, 0X41E);
    // 0x80077F8C: jal         0x802A14C0
    // 0x80077F90: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    LOOKUP_FUNC(0x802A14C0)(rdram, ctx);
        goto after_0;
    // 0x80077F90: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_0:
    // 0x80077F94: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80077F98: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80077F9C: jr          $ra
    // 0x80077FA0: nop

    return;
    // 0x80077FA0: nop

;}
RECOMP_FUNC void func_80077FA4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80077FA4: lui         $v0, 0x8010
    ctx->r2 = S32(0X8010 << 16);
    // 0x80077FA8: lhu         $v0, 0x522A($v0)
    ctx->r2 = MEM_HU(ctx->r2, 0X522A);
    // 0x80077FAC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80077FB0: andi        $t6, $v0, 0x3
    ctx->r14 = ctx->r2 & 0X3;
    // 0x80077FB4: beq         $t6, $zero, L_80077FE8
    if (ctx->r14 == 0) {
        // 0x80077FB8: sw          $ra, 0x14($sp)
        MEM_W(0X14, ctx->r29) = ctx->r31;
            goto L_80077FE8;
    }
    // 0x80077FB8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80077FBC: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80077FC0: beq         $t6, $at, L_80078004
    if (ctx->r14 == ctx->r1) {
        // 0x80077FC4: or          $a1, $zero, $zero
        ctx->r5 = 0 | 0;
            goto L_80078004;
    }
    // 0x80077FC4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80077FC8: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x80077FCC: beq         $t6, $at, L_80078014
    if (ctx->r14 == ctx->r1) {
        // 0x80077FD0: or          $a1, $zero, $zero
        ctx->r5 = 0 | 0;
            goto L_80078014;
    }
    // 0x80077FD0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80077FD4: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x80077FD8: beq         $t6, $at, L_80078024
    if (ctx->r14 == ctx->r1) {
        // 0x80077FDC: nop
    
            goto L_80078024;
    }
    // 0x80077FDC: nop

    // 0x80077FE0: b           L_8007803C
    // 0x80077FE4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_8007803C;
    // 0x80077FE4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80077FE8:
    // 0x80077FE8: jal         0x8007A034
    // 0x80077FEC: nop

    func_8007A034(rdram, ctx);
        goto after_0;
    // 0x80077FEC: nop

    after_0:
    // 0x80077FF0: addiu       $a0, $zero, 0x471
    ctx->r4 = ADD32(0, 0X471);
    // 0x80077FF4: jal         0x802A14C0
    // 0x80077FF8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    LOOKUP_FUNC(0x802A14C0)(rdram, ctx);
        goto after_1;
    // 0x80077FF8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_1:
    // 0x80077FFC: b           L_8007803C
    // 0x80078000: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_8007803C;
    // 0x80078000: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80078004:
    // 0x80078004: jal         0x802A14C0
    // 0x80078008: addiu       $a0, $zero, 0x57E
    ctx->r4 = ADD32(0, 0X57E);
    LOOKUP_FUNC(0x802A14C0)(rdram, ctx);
        goto after_2;
    // 0x80078008: addiu       $a0, $zero, 0x57E
    ctx->r4 = ADD32(0, 0X57E);
    after_2:
    // 0x8007800C: b           L_8007803C
    // 0x80078010: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_8007803C;
    // 0x80078010: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80078014:
    // 0x80078014: jal         0x802A14C0
    // 0x80078018: addiu       $a0, $zero, 0x580
    ctx->r4 = ADD32(0, 0X580);
    LOOKUP_FUNC(0x802A14C0)(rdram, ctx);
        goto after_3;
    // 0x80078018: addiu       $a0, $zero, 0x580
    ctx->r4 = ADD32(0, 0X580);
    after_3:
    // 0x8007801C: b           L_8007803C
    // 0x80078020: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_8007803C;
    // 0x80078020: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80078024:
    // 0x80078024: jal         0x80079FD0
    // 0x80078028: nop

    func_80079FD0(rdram, ctx);
        goto after_4;
    // 0x80078028: nop

    after_4:
    // 0x8007802C: addiu       $a0, $zero, 0x5A2
    ctx->r4 = ADD32(0, 0X5A2);
    // 0x80078030: jal         0x802A14C0
    // 0x80078034: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    LOOKUP_FUNC(0x802A14C0)(rdram, ctx);
        goto after_5;
    // 0x80078034: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_5:
    // 0x80078038: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8007803C:
    // 0x8007803C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80078040: jr          $ra
    // 0x80078044: nop

    return;
    // 0x80078044: nop

;}
RECOMP_FUNC void func_80078048(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80078048: lui         $v0, 0x8010
    ctx->r2 = S32(0X8010 << 16);
    // 0x8007804C: lhu         $v0, 0x522A($v0)
    ctx->r2 = MEM_HU(ctx->r2, 0X522A);
    // 0x80078050: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80078054: andi        $t6, $v0, 0x3
    ctx->r14 = ctx->r2 & 0X3;
    // 0x80078058: beq         $t6, $zero, L_80078074
    if (ctx->r14 == 0) {
        // 0x8007805C: sw          $ra, 0x14($sp)
        MEM_W(0X14, ctx->r29) = ctx->r31;
            goto L_80078074;
    }
    // 0x8007805C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80078060: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80078064: beq         $t6, $at, L_80078088
    if (ctx->r14 == ctx->r1) {
        // 0x80078068: addiu       $a0, $zero, 0x5AF
        ctx->r4 = ADD32(0, 0X5AF);
            goto L_80078088;
    }
    // 0x80078068: addiu       $a0, $zero, 0x5AF
    ctx->r4 = ADD32(0, 0X5AF);
    // 0x8007806C: b           L_80078098
    // 0x80078070: addiu       $a0, $zero, 0x4D7
    ctx->r4 = ADD32(0, 0X4D7);
        goto L_80078098;
    // 0x80078070: addiu       $a0, $zero, 0x4D7
    ctx->r4 = ADD32(0, 0X4D7);
L_80078074:
    // 0x80078074: addiu       $a0, $zero, 0x5E9
    ctx->r4 = ADD32(0, 0X5E9);
    // 0x80078078: jal         0x802A14C0
    // 0x8007807C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    LOOKUP_FUNC(0x802A14C0)(rdram, ctx);
        goto after_0;
    // 0x8007807C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_0:
    // 0x80078080: b           L_800780A4
    // 0x80078084: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_800780A4;
    // 0x80078084: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80078088:
    // 0x80078088: jal         0x802A14C0
    // 0x8007808C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    LOOKUP_FUNC(0x802A14C0)(rdram, ctx);
        goto after_1;
    // 0x8007808C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_1:
    // 0x80078090: b           L_800780A4
    // 0x80078094: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_800780A4;
    // 0x80078094: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80078098:
    // 0x80078098: jal         0x802A14C0
    // 0x8007809C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    LOOKUP_FUNC(0x802A14C0)(rdram, ctx);
        goto after_2;
    // 0x8007809C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_2:
    // 0x800780A0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_800780A4:
    // 0x800780A4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800780A8: jr          $ra
    // 0x800780AC: nop

    return;
    // 0x800780AC: nop

;}
RECOMP_FUNC void func_800780B0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800780B0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800780B4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800780B8: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x800780BC: addiu       $a0, $zero, 0x43A
    ctx->r4 = ADD32(0, 0X43A);
    // 0x800780C0: jal         0x802A14C0
    // 0x800780C4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    LOOKUP_FUNC(0x802A14C0)(rdram, ctx);
        goto after_0;
    // 0x800780C4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_0:
    // 0x800780C8: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x800780CC: jal         0x80079FD0
    // 0x800780D0: nop

    func_80079FD0(rdram, ctx);
        goto after_1;
    // 0x800780D0: nop

    after_1:
    // 0x800780D4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800780D8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800780DC: jr          $ra
    // 0x800780E0: nop

    return;
    // 0x800780E0: nop

;}
RECOMP_FUNC void func_800780E4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800780E4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800780E8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800780EC: addiu       $a0, $zero, 0x434
    ctx->r4 = ADD32(0, 0X434);
    // 0x800780F0: jal         0x802A14C0
    // 0x800780F4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    LOOKUP_FUNC(0x802A14C0)(rdram, ctx);
        goto after_0;
    // 0x800780F4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_0:
    // 0x800780F8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800780FC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80078100: jr          $ra
    // 0x80078104: nop

    return;
    // 0x80078104: nop

;}
RECOMP_FUNC void func_80078108(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80078108: lui         $t6, 0x8012
    ctx->r14 = S32(0X8012 << 16);
    // 0x8007810C: lhu         $t6, 0xB78($t6)
    ctx->r14 = MEM_HU(ctx->r14, 0XB78);
    // 0x80078110: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80078114: bne         $t6, $zero, L_8007816C
    if (ctx->r14 != 0) {
        // 0x80078118: sw          $ra, 0x14($sp)
        MEM_W(0X14, ctx->r29) = ctx->r31;
            goto L_8007816C;
    }
    // 0x80078118: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8007811C: lui         $v0, 0x8010
    ctx->r2 = S32(0X8010 << 16);
    // 0x80078120: lhu         $v0, 0x522A($v0)
    ctx->r2 = MEM_HU(ctx->r2, 0X522A);
    // 0x80078124: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80078128: andi        $t7, $v0, 0x3
    ctx->r15 = ctx->r2 & 0X3;
    // 0x8007812C: beq         $t7, $zero, L_80078144
    if (ctx->r15 == 0) {
        // 0x80078130: addiu       $a0, $zero, 0x470
        ctx->r4 = ADD32(0, 0X470);
            goto L_80078144;
    }
    // 0x80078130: addiu       $a0, $zero, 0x470
    ctx->r4 = ADD32(0, 0X470);
    // 0x80078134: beq         $t7, $at, L_80078154
    if (ctx->r15 == ctx->r1) {
        // 0x80078138: addiu       $a0, $zero, 0x5E3
        ctx->r4 = ADD32(0, 0X5E3);
            goto L_80078154;
    }
    // 0x80078138: addiu       $a0, $zero, 0x5E3
    ctx->r4 = ADD32(0, 0X5E3);
    // 0x8007813C: b           L_80078164
    // 0x80078140: addiu       $a0, $zero, 0x5E4
    ctx->r4 = ADD32(0, 0X5E4);
        goto L_80078164;
    // 0x80078140: addiu       $a0, $zero, 0x5E4
    ctx->r4 = ADD32(0, 0X5E4);
L_80078144:
    // 0x80078144: jal         0x802A14C0
    // 0x80078148: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    LOOKUP_FUNC(0x802A14C0)(rdram, ctx);
        goto after_0;
    // 0x80078148: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_0:
    // 0x8007814C: b           L_80078170
    // 0x80078150: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80078170;
    // 0x80078150: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80078154:
    // 0x80078154: jal         0x802A14C0
    // 0x80078158: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    LOOKUP_FUNC(0x802A14C0)(rdram, ctx);
        goto after_1;
    // 0x80078158: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_1:
    // 0x8007815C: b           L_80078170
    // 0x80078160: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80078170;
    // 0x80078160: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80078164:
    // 0x80078164: jal         0x802A14C0
    // 0x80078168: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    LOOKUP_FUNC(0x802A14C0)(rdram, ctx);
        goto after_2;
    // 0x80078168: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_2:
L_8007816C:
    // 0x8007816C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80078170:
    // 0x80078170: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80078174: jr          $ra
    // 0x80078178: nop

    return;
    // 0x80078178: nop

;}
RECOMP_FUNC void func_8007817C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8007817C: lui         $t6, 0x8012
    ctx->r14 = S32(0X8012 << 16);
    // 0x80078180: lhu         $t6, 0xB78($t6)
    ctx->r14 = MEM_HU(ctx->r14, 0XB78);
    // 0x80078184: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80078188: bne         $t6, $zero, L_800781E0
    if (ctx->r14 != 0) {
        // 0x8007818C: sw          $ra, 0x14($sp)
        MEM_W(0X14, ctx->r29) = ctx->r31;
            goto L_800781E0;
    }
    // 0x8007818C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80078190: lui         $v0, 0x8010
    ctx->r2 = S32(0X8010 << 16);
    // 0x80078194: lhu         $v0, 0x522A($v0)
    ctx->r2 = MEM_HU(ctx->r2, 0X522A);
    // 0x80078198: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8007819C: andi        $t7, $v0, 0x3
    ctx->r15 = ctx->r2 & 0X3;
    // 0x800781A0: beq         $t7, $zero, L_800781B8
    if (ctx->r15 == 0) {
        // 0x800781A4: addiu       $a0, $zero, 0x41E
        ctx->r4 = ADD32(0, 0X41E);
            goto L_800781B8;
    }
    // 0x800781A4: addiu       $a0, $zero, 0x41E
    ctx->r4 = ADD32(0, 0X41E);
    // 0x800781A8: beq         $t7, $at, L_800781C8
    if (ctx->r15 == ctx->r1) {
        // 0x800781AC: addiu       $a0, $zero, 0x49B
        ctx->r4 = ADD32(0, 0X49B);
            goto L_800781C8;
    }
    // 0x800781AC: addiu       $a0, $zero, 0x49B
    ctx->r4 = ADD32(0, 0X49B);
    // 0x800781B0: b           L_800781D8
    // 0x800781B4: addiu       $a0, $zero, 0x432
    ctx->r4 = ADD32(0, 0X432);
        goto L_800781D8;
    // 0x800781B4: addiu       $a0, $zero, 0x432
    ctx->r4 = ADD32(0, 0X432);
L_800781B8:
    // 0x800781B8: jal         0x802A14C0
    // 0x800781BC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    LOOKUP_FUNC(0x802A14C0)(rdram, ctx);
        goto after_0;
    // 0x800781BC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_0:
    // 0x800781C0: b           L_800781E4
    // 0x800781C4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_800781E4;
    // 0x800781C4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_800781C8:
    // 0x800781C8: jal         0x802A14C0
    // 0x800781CC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    LOOKUP_FUNC(0x802A14C0)(rdram, ctx);
        goto after_1;
    // 0x800781CC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_1:
    // 0x800781D0: b           L_800781E4
    // 0x800781D4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_800781E4;
    // 0x800781D4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_800781D8:
    // 0x800781D8: jal         0x802A14C0
    // 0x800781DC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    LOOKUP_FUNC(0x802A14C0)(rdram, ctx);
        goto after_2;
    // 0x800781DC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_2:
L_800781E0:
    // 0x800781E0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_800781E4:
    // 0x800781E4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800781E8: jr          $ra
    // 0x800781EC: nop

    return;
    // 0x800781EC: nop

;}
RECOMP_FUNC void func_800781F0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800781F0: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x800781F4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800781F8: sw          $a0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r4;
    // 0x800781FC: lw          $t7, 0xC8($a0)
    ctx->r15 = MEM_W(ctx->r4, 0XC8);
    // 0x80078200: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x80078204: lhu         $t8, 0x6($t7)
    ctx->r24 = MEM_HU(ctx->r15, 0X6);
    // 0x80078208: sb          $zero, 0x27($sp)
    MEM_B(0X27, ctx->r29) = 0;
    // 0x8007820C: addiu       $t9, $t8, 0x80
    ctx->r25 = ADD32(ctx->r24, 0X80);
    // 0x80078210: jal         0x802A1744
    // 0x80078214: sb          $t9, 0x3A39($at)
    MEM_B(0X3A39, ctx->r1) = ctx->r25;
    LOOKUP_FUNC(0x802A1744)(rdram, ctx);
        goto after_0;
    // 0x80078214: sb          $t9, 0x3A39($at)
    MEM_B(0X3A39, ctx->r1) = ctx->r25;
    after_0:
    // 0x80078218: lbu         $v1, 0x27($sp)
    ctx->r3 = MEM_BU(ctx->r29, 0X27);
    // 0x8007821C: slti        $at, $v0, 0x2
    ctx->r1 = SIGNED(ctx->r2) < 0X2 ? 1 : 0;
    // 0x80078220: beq         $at, $zero, L_800783FC
    if (ctx->r1 == 0) {
        // 0x80078224: addiu       $a0, $zero, 0x1
        ctx->r4 = ADD32(0, 0X1);
            goto L_800783FC;
    }
    // 0x80078224: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x80078228: lw          $a2, 0x30($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X30);
    // 0x8007822C: lui         $at, 0x4348
    ctx->r1 = S32(0X4348 << 16);
    // 0x80078230: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80078234: lwc1        $f0, 0x44($a2)
    ctx->f0.u32l = MEM_W(ctx->r6, 0X44);
    // 0x80078238: lui         $at, 0xC348
    ctx->r1 = S32(0XC348 << 16);
    // 0x8007823C: c.lt.s      $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f0.fl < ctx->f4.fl;
    // 0x80078240: lui         $v0, 0x8010
    ctx->r2 = S32(0X8010 << 16);
    // 0x80078244: bc1f        L_800782A4
    if (!c1cs) {
        // 0x80078248: nop
    
            goto L_800782A4;
    }
    // 0x80078248: nop

    // 0x8007824C: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x80078250: lui         $at, 0x43AA
    ctx->r1 = S32(0X43AA << 16);
    // 0x80078254: c.lt.s      $f6, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f6.fl < ctx->f0.fl;
    // 0x80078258: nop

    // 0x8007825C: bc1f        L_800782A4
    if (!c1cs) {
        // 0x80078260: nop
    
            goto L_800782A4;
    }
    // 0x80078260: nop

    // 0x80078264: lwc1        $f0, 0x4C($a2)
    ctx->f0.u32l = MEM_W(ctx->r6, 0X4C);
    // 0x80078268: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x8007826C: lui         $at, 0xC3AA
    ctx->r1 = S32(0XC3AA << 16);
    // 0x80078270: c.lt.s      $f8, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f8.fl < ctx->f0.fl;
    // 0x80078274: nop

    // 0x80078278: bc1f        L_80078288
    if (!c1cs) {
        // 0x8007827C: nop
    
            goto L_80078288;
    }
    // 0x8007827C: nop

    // 0x80078280: b           L_800782A4
    // 0x80078284: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
        goto L_800782A4;
    // 0x80078284: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
L_80078288:
    // 0x80078288: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x8007828C: nop

    // 0x80078290: c.lt.s      $f0, $f10
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f0.fl < ctx->f10.fl;
    // 0x80078294: nop

    // 0x80078298: bc1f        L_800782A4
    if (!c1cs) {
        // 0x8007829C: nop
    
            goto L_800782A4;
    }
    // 0x8007829C: nop

    // 0x800782A0: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
L_800782A4:
    // 0x800782A4: bne         $a0, $v1, L_800782FC
    if (ctx->r4 != ctx->r3) {
        // 0x800782A8: sw          $v1, 0x1C($sp)
        MEM_W(0X1C, ctx->r29) = ctx->r3;
            goto L_800782FC;
    }
    // 0x800782A8: sw          $v1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r3;
    // 0x800782AC: lhu         $v0, 0x522A($v0)
    ctx->r2 = MEM_HU(ctx->r2, 0X522A);
    // 0x800782B0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800782B4: andi        $t1, $v0, 0x1
    ctx->r9 = ctx->r2 & 0X1;
    // 0x800782B8: beq         $t1, $zero, L_800782D0
    if (ctx->r9 == 0) {
        // 0x800782BC: nop
    
            goto L_800782D0;
    }
    // 0x800782BC: nop

    // 0x800782C0: beq         $t1, $a0, L_800782E4
    if (ctx->r9 == ctx->r4) {
        // 0x800782C4: or          $a1, $zero, $zero
        ctx->r5 = 0 | 0;
            goto L_800782E4;
    }
    // 0x800782C4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800782C8: b           L_80078300
    // 0x800782CC: lw          $t2, 0x1C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X1C);
        goto L_80078300;
    // 0x800782CC: lw          $t2, 0x1C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X1C);
L_800782D0:
    // 0x800782D0: jal         0x802A14C0
    // 0x800782D4: addiu       $a0, $zero, 0x49C
    ctx->r4 = ADD32(0, 0X49C);
    LOOKUP_FUNC(0x802A14C0)(rdram, ctx);
        goto after_1;
    // 0x800782D4: addiu       $a0, $zero, 0x49C
    ctx->r4 = ADD32(0, 0X49C);
    after_1:
    // 0x800782D8: lw          $a2, 0x30($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X30);
    // 0x800782DC: b           L_80078300
    // 0x800782E0: lw          $t2, 0x1C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X1C);
        goto L_80078300;
    // 0x800782E0: lw          $t2, 0x1C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X1C);
L_800782E4:
    // 0x800782E4: jal         0x802A14C0
    // 0x800782E8: addiu       $a0, $zero, 0x4C9
    ctx->r4 = ADD32(0, 0X4C9);
    LOOKUP_FUNC(0x802A14C0)(rdram, ctx);
        goto after_2;
    // 0x800782E8: addiu       $a0, $zero, 0x4C9
    ctx->r4 = ADD32(0, 0X4C9);
    after_2:
    // 0x800782EC: jal         0x80015BC0
    // 0x800782F0: addiu       $a0, $zero, 0x3D5
    ctx->r4 = ADD32(0, 0X3D5);
    func_80015BC0(rdram, ctx);
        goto after_3;
    // 0x800782F0: addiu       $a0, $zero, 0x3D5
    ctx->r4 = ADD32(0, 0X3D5);
    after_3:
    // 0x800782F4: lw          $a2, 0x30($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X30);
    // 0x800782F8: nop

L_800782FC:
    // 0x800782FC: lw          $t2, 0x1C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X1C);
L_80078300:
    // 0x80078300: lui         $t3, 0x8010
    ctx->r11 = S32(0X8010 << 16);
    // 0x80078304: bne         $t2, $zero, L_80078400
    if (ctx->r10 != 0) {
        // 0x80078308: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_80078400;
    }
    // 0x80078308: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8007830C: lhu         $t3, 0x522A($t3)
    ctx->r11 = MEM_HU(ctx->r11, 0X522A);
    // 0x80078310: nop

    // 0x80078314: andi        $t4, $t3, 0xF
    ctx->r12 = ctx->r11 & 0XF;
    // 0x80078318: sltiu       $at, $t4, 0xF
    ctx->r1 = ctx->r12 < 0XF ? 1 : 0;
    // 0x8007831C: beq         $at, $zero, L_800783F0
    if (ctx->r1 == 0) {
        // 0x80078320: sll         $t4, $t4, 2
        ctx->r12 = S32(ctx->r12 << 2);
            goto L_800783F0;
    }
    // 0x80078320: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x80078324: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x80078328: addu        $at, $at, $t4
    gpr jr_addend_80078334 = ctx->r12;
    ctx->r1 = ADD32(ctx->r1, ctx->r12);
    // 0x8007832C: lw          $t4, -0x52F8($at)
    ctx->r12 = ADD32(ctx->r1, -0X52F8);
    // 0x80078330: nop

    // 0x80078334: jr          $t4
    // 0x80078338: nop

    switch (jr_addend_80078334 >> 2) {
        case 0: goto L_8007833C; break;
        case 1: goto L_80078350; break;
        case 2: goto L_80078364; break;
        case 3: goto L_80078384; break;
        case 4: goto L_80078378; break;
        case 5: goto L_80078398; break;
        case 6: goto L_800783B4; break;
        case 7: goto L_800783C8; break;
        case 8: goto L_800783DC; break;
        case 9: goto L_800783F0; break;
        case 10: goto L_800783F0; break;
        case 11: goto L_80078398; break;
        case 12: goto L_800783DC; break;
        case 13: goto L_8007833C; break;
        case 14: goto L_800783C8; break;
        default: switch_error(__func__, 0x80078334, 0x800DAD08);
    }
    // 0x80078338: nop

L_8007833C:
    // 0x8007833C: addiu       $a0, $zero, 0x498
    ctx->r4 = ADD32(0, 0X498);
    // 0x80078340: jal         0x802A14C0
    // 0x80078344: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    LOOKUP_FUNC(0x802A14C0)(rdram, ctx);
        goto after_4;
    // 0x80078344: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_4:
    // 0x80078348: b           L_80078400
    // 0x8007834C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80078400;
    // 0x8007834C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80078350:
    // 0x80078350: addiu       $a0, $zero, 0x475
    ctx->r4 = ADD32(0, 0X475);
    // 0x80078354: jal         0x802A14C0
    // 0x80078358: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    LOOKUP_FUNC(0x802A14C0)(rdram, ctx);
        goto after_5;
    // 0x80078358: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_5:
    // 0x8007835C: b           L_80078400
    // 0x80078360: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80078400;
    // 0x80078360: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80078364:
    // 0x80078364: addiu       $a0, $zero, 0x40D
    ctx->r4 = ADD32(0, 0X40D);
    // 0x80078368: jal         0x802A14C0
    // 0x8007836C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    LOOKUP_FUNC(0x802A14C0)(rdram, ctx);
        goto after_6;
    // 0x8007836C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_6:
    // 0x80078370: b           L_80078400
    // 0x80078374: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80078400;
    // 0x80078374: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80078378:
    // 0x80078378: addiu       $a0, $zero, 0x5E2
    ctx->r4 = ADD32(0, 0X5E2);
    // 0x8007837C: jal         0x802A14C0
    // 0x80078380: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    LOOKUP_FUNC(0x802A14C0)(rdram, ctx);
        goto after_7;
    // 0x80078380: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_7:
L_80078384:
    // 0x80078384: addiu       $a0, $zero, 0x49C
    ctx->r4 = ADD32(0, 0X49C);
    // 0x80078388: jal         0x802A14C0
    // 0x8007838C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    LOOKUP_FUNC(0x802A14C0)(rdram, ctx);
        goto after_8;
    // 0x8007838C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_8:
    // 0x80078390: b           L_80078400
    // 0x80078394: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80078400;
    // 0x80078394: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80078398:
    // 0x80078398: jal         0x8007A034
    // 0x8007839C: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    func_8007A034(rdram, ctx);
        goto after_9;
    // 0x8007839C: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    after_9:
    // 0x800783A0: addiu       $a0, $zero, 0x4CA
    ctx->r4 = ADD32(0, 0X4CA);
    // 0x800783A4: jal         0x802A14C0
    // 0x800783A8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    LOOKUP_FUNC(0x802A14C0)(rdram, ctx);
        goto after_10;
    // 0x800783A8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_10:
    // 0x800783AC: b           L_80078400
    // 0x800783B0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80078400;
    // 0x800783B0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_800783B4:
    // 0x800783B4: addiu       $a0, $zero, 0x498
    ctx->r4 = ADD32(0, 0X498);
    // 0x800783B8: jal         0x802A14C0
    // 0x800783BC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    LOOKUP_FUNC(0x802A14C0)(rdram, ctx);
        goto after_11;
    // 0x800783BC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_11:
    // 0x800783C0: b           L_80078400
    // 0x800783C4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80078400;
    // 0x800783C4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_800783C8:
    // 0x800783C8: addiu       $a0, $zero, 0x42D
    ctx->r4 = ADD32(0, 0X42D);
    // 0x800783CC: jal         0x802A14C0
    // 0x800783D0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    LOOKUP_FUNC(0x802A14C0)(rdram, ctx);
        goto after_12;
    // 0x800783D0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_12:
    // 0x800783D4: b           L_80078400
    // 0x800783D8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80078400;
    // 0x800783D8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_800783DC:
    // 0x800783DC: addiu       $a0, $zero, 0x4A7
    ctx->r4 = ADD32(0, 0X4A7);
    // 0x800783E0: jal         0x802A14C0
    // 0x800783E4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    LOOKUP_FUNC(0x802A14C0)(rdram, ctx);
        goto after_13;
    // 0x800783E4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_13:
    // 0x800783E8: b           L_80078400
    // 0x800783EC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80078400;
    // 0x800783EC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_800783F0:
    // 0x800783F0: addiu       $a0, $zero, 0x40E
    ctx->r4 = ADD32(0, 0X40E);
    // 0x800783F4: jal         0x802A14C0
    // 0x800783F8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    LOOKUP_FUNC(0x802A14C0)(rdram, ctx);
        goto after_14;
    // 0x800783F8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_14:
L_800783FC:
    // 0x800783FC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80078400:
    // 0x80078400: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x80078404: jr          $ra
    // 0x80078408: nop

    return;
    // 0x80078408: nop

;}
RECOMP_FUNC void func_8007840C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8007840C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80078410: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80078414: jal         0x802A16C4
    // 0x80078418: addiu       $a0, $zero, 0x4F0
    ctx->r4 = ADD32(0, 0X4F0);
    LOOKUP_FUNC(0x802A16C4)(rdram, ctx);
        goto after_0;
    // 0x80078418: addiu       $a0, $zero, 0x4F0
    ctx->r4 = ADD32(0, 0X4F0);
    after_0:
    // 0x8007841C: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x80078420: bne         $v0, $at, L_80078448
    if (ctx->r2 != ctx->r1) {
        // 0x80078424: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_80078448;
    }
    // 0x80078424: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80078428: jal         0x802A16C4
    // 0x8007842C: addiu       $a0, $zero, 0x43D
    ctx->r4 = ADD32(0, 0X43D);
    LOOKUP_FUNC(0x802A16C4)(rdram, ctx);
        goto after_1;
    // 0x8007842C: addiu       $a0, $zero, 0x43D
    ctx->r4 = ADD32(0, 0X43D);
    after_1:
    // 0x80078430: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x80078434: bne         $v0, $at, L_80078448
    if (ctx->r2 != ctx->r1) {
        // 0x80078438: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_80078448;
    }
    // 0x80078438: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8007843C: jal         0x802A13CC
    // 0x80078440: nop

    LOOKUP_FUNC(0x802A13CC)(rdram, ctx);
        goto after_2;
    // 0x80078440: nop

    after_2:
    // 0x80078444: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80078448:
    // 0x80078448: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8007844C: jr          $ra
    // 0x80078450: nop

    return;
    // 0x80078450: nop

;}
RECOMP_FUNC void func_80078454(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80078454: lui         $at, 0x437F
    ctx->r1 = S32(0X437F << 16);
    // 0x80078458: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x8007845C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80078460: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80078464: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x80078468: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8007846C: jal         0x8007A400
    // 0x80078470: swc1        $f4, 0x3A1C($at)
    MEM_W(0X3A1C, ctx->r1) = ctx->f4.u32l;
    func_8007A400(rdram, ctx);
        goto after_0;
    // 0x80078470: swc1        $f4, 0x3A1C($at)
    MEM_W(0X3A1C, ctx->r1) = ctx->f4.u32l;
    after_0:
    // 0x80078474: lui         $t6, 0x802C
    ctx->r14 = S32(0X802C << 16);
    // 0x80078478: lhu         $t6, 0x3944($t6)
    ctx->r14 = MEM_HU(ctx->r14, 0X3944);
    // 0x8007847C: lui         $t7, 0x8009
    ctx->r15 = S32(0X8009 << 16);
    // 0x80078480: lw          $t7, 0x3B20($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X3B20);
    // 0x80078484: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x80078488: sh          $t6, 0x39E0($at)
    MEM_H(0X39E0, ctx->r1) = ctx->r14;
    // 0x8007848C: lhu         $v0, 0xDC($t7)
    ctx->r2 = MEM_HU(ctx->r15, 0XDC);
    // 0x80078490: lui         $t0, 0x8012
    ctx->r8 = S32(0X8012 << 16);
    // 0x80078494: andi        $t8, $v0, 0x2
    ctx->r24 = ctx->r2 & 0X2;
    // 0x80078498: bne         $t8, $zero, L_800784A8
    if (ctx->r24 != 0) {
        // 0x8007849C: andi        $t9, $v0, 0x4
        ctx->r25 = ctx->r2 & 0X4;
            goto L_800784A8;
    }
    // 0x8007849C: andi        $t9, $v0, 0x4
    ctx->r25 = ctx->r2 & 0X4;
    // 0x800784A0: beq         $t9, $zero, L_800784CC
    if (ctx->r25 == 0) {
        // 0x800784A4: nop
    
            goto L_800784CC;
    }
    // 0x800784A4: nop

L_800784A8:
    // 0x800784A8: lw          $t0, 0xB28($t0)
    ctx->r8 = MEM_W(ctx->r8, 0XB28);
    // 0x800784AC: nop

    // 0x800784B0: lw          $t1, 0xC8($t0)
    ctx->r9 = MEM_W(ctx->r8, 0XC8);
    // 0x800784B4: nop

    // 0x800784B8: lw          $t2, 0x24($t1)
    ctx->r10 = MEM_W(ctx->r9, 0X24);
    // 0x800784BC: nop

    // 0x800784C0: lbu         $a0, 0x7($t2)
    ctx->r4 = MEM_BU(ctx->r10, 0X7);
    // 0x800784C4: jal         0x8007A12C
    // 0x800784C8: nop

    func_8007A12C(rdram, ctx);
        goto after_1;
    // 0x800784C8: nop

    after_1:
L_800784CC:
    // 0x800784CC: jal         0x8007840C
    // 0x800784D0: nop

    func_8007840C(rdram, ctx);
        goto after_2;
    // 0x800784D0: nop

    after_2:
    // 0x800784D4: lw          $a2, 0x18($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X18);
    // 0x800784D8: lui         $v1, 0x8010
    ctx->r3 = S32(0X8010 << 16);
    // 0x800784DC: lhu         $v1, 0x522A($v1)
    ctx->r3 = MEM_HU(ctx->r3, 0X522A);
    // 0x800784E0: lw          $v0, 0xC8($a2)
    ctx->r2 = MEM_W(ctx->r6, 0XC8);
    // 0x800784E4: andi        $t3, $v1, 0x3
    ctx->r11 = ctx->r3 & 0X3;
    // 0x800784E8: lbu         $a1, 0x0($v0)
    ctx->r5 = MEM_BU(ctx->r2, 0X0);
    // 0x800784EC: beq         $t3, $zero, L_8007851C
    if (ctx->r11 == 0) {
        // 0x800784F0: addiu       $a0, $zero, 0x40F
        ctx->r4 = ADD32(0, 0X40F);
            goto L_8007851C;
    }
    // 0x800784F0: addiu       $a0, $zero, 0x40F
    ctx->r4 = ADD32(0, 0X40F);
    // 0x800784F4: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x800784F8: beq         $t3, $at, L_8007852C
    if (ctx->r11 == ctx->r1) {
        // 0x800784FC: addiu       $at, $zero, 0x2
        ctx->r1 = ADD32(0, 0X2);
            goto L_8007852C;
    }
    // 0x800784FC: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x80078500: beq         $t3, $at, L_80078548
    if (ctx->r11 == ctx->r1) {
        // 0x80078504: addiu       $a0, $zero, 0x467
        ctx->r4 = ADD32(0, 0X467);
            goto L_80078548;
    }
    // 0x80078504: addiu       $a0, $zero, 0x467
    ctx->r4 = ADD32(0, 0X467);
    // 0x80078508: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x8007850C: beq         $t3, $at, L_80078558
    if (ctx->r11 == ctx->r1) {
        // 0x80078510: addiu       $a0, $zero, 0x404
        ctx->r4 = ADD32(0, 0X404);
            goto L_80078558;
    }
    // 0x80078510: addiu       $a0, $zero, 0x404
    ctx->r4 = ADD32(0, 0X404);
    // 0x80078514: b           L_80078568
    // 0x80078518: addiu       $a0, $zero, 0x40F
    ctx->r4 = ADD32(0, 0X40F);
        goto L_80078568;
    // 0x80078518: addiu       $a0, $zero, 0x40F
    ctx->r4 = ADD32(0, 0X40F);
L_8007851C:
    // 0x8007851C: jal         0x802A14C0
    // 0x80078520: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    LOOKUP_FUNC(0x802A14C0)(rdram, ctx);
        goto after_3;
    // 0x80078520: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_3:
    // 0x80078524: b           L_80078574
    // 0x80078528: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80078574;
    // 0x80078528: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8007852C:
    // 0x8007852C: jal         0x80079F98
    // 0x80078530: andi        $a0, $a1, 0xFF
    ctx->r4 = ctx->r5 & 0XFF;
    func_80079F98(rdram, ctx);
        goto after_4;
    // 0x80078530: andi        $a0, $a1, 0xFF
    ctx->r4 = ctx->r5 & 0XFF;
    after_4:
    // 0x80078534: addiu       $a0, $zero, 0x40F
    ctx->r4 = ADD32(0, 0X40F);
    // 0x80078538: jal         0x802A14C0
    // 0x8007853C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    LOOKUP_FUNC(0x802A14C0)(rdram, ctx);
        goto after_5;
    // 0x8007853C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_5:
    // 0x80078540: b           L_80078574
    // 0x80078544: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80078574;
    // 0x80078544: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80078548:
    // 0x80078548: jal         0x802A14C0
    // 0x8007854C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    LOOKUP_FUNC(0x802A14C0)(rdram, ctx);
        goto after_6;
    // 0x8007854C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_6:
    // 0x80078550: b           L_80078574
    // 0x80078554: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80078574;
    // 0x80078554: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80078558:
    // 0x80078558: jal         0x802A14C0
    // 0x8007855C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    LOOKUP_FUNC(0x802A14C0)(rdram, ctx);
        goto after_7;
    // 0x8007855C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_7:
    // 0x80078560: b           L_80078574
    // 0x80078564: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80078574;
    // 0x80078564: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80078568:
    // 0x80078568: jal         0x802A14C0
    // 0x8007856C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    LOOKUP_FUNC(0x802A14C0)(rdram, ctx);
        goto after_8;
    // 0x8007856C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_8:
    // 0x80078570: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80078574:
    // 0x80078574: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80078578: jr          $ra
    // 0x8007857C: nop

    return;
    // 0x8007857C: nop

;}
RECOMP_FUNC void func_80078580(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80078580: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80078584: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80078588: jal         0x8007A400
    // 0x8007858C: nop

    func_8007A400(rdram, ctx);
        goto after_0;
    // 0x8007858C: nop

    after_0:
    // 0x80078590: jal         0x8007840C
    // 0x80078594: nop

    func_8007840C(rdram, ctx);
        goto after_1;
    // 0x80078594: nop

    after_1:
    // 0x80078598: lui         $v0, 0x8010
    ctx->r2 = S32(0X8010 << 16);
    // 0x8007859C: lhu         $v0, 0x522A($v0)
    ctx->r2 = MEM_HU(ctx->r2, 0X522A);
    // 0x800785A0: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x800785A4: andi        $t6, $v0, 0x1
    ctx->r14 = ctx->r2 & 0X1;
    // 0x800785A8: beq         $t6, $zero, L_800785C0
    if (ctx->r14 == 0) {
        // 0x800785AC: addiu       $a0, $zero, 0x5A3
        ctx->r4 = ADD32(0, 0X5A3);
            goto L_800785C0;
    }
    // 0x800785AC: addiu       $a0, $zero, 0x5A3
    ctx->r4 = ADD32(0, 0X5A3);
    // 0x800785B0: beq         $t6, $at, L_800785D0
    if (ctx->r14 == ctx->r1) {
        // 0x800785B4: addiu       $a0, $zero, 0x5A4
        ctx->r4 = ADD32(0, 0X5A4);
            goto L_800785D0;
    }
    // 0x800785B4: addiu       $a0, $zero, 0x5A4
    ctx->r4 = ADD32(0, 0X5A4);
    // 0x800785B8: b           L_80078604
    // 0x800785BC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80078604;
    // 0x800785BC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_800785C0:
    // 0x800785C0: jal         0x802A14C0
    // 0x800785C4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    LOOKUP_FUNC(0x802A14C0)(rdram, ctx);
        goto after_2;
    // 0x800785C4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_2:
    // 0x800785C8: b           L_80078604
    // 0x800785CC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80078604;
    // 0x800785CC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_800785D0:
    // 0x800785D0: jal         0x802A14C0
    // 0x800785D4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    LOOKUP_FUNC(0x802A14C0)(rdram, ctx);
        goto after_3;
    // 0x800785D4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_3:
    // 0x800785D8: lui         $t7, 0x8012
    ctx->r15 = S32(0X8012 << 16);
    // 0x800785DC: lw          $t7, 0xB28($t7)
    ctx->r15 = MEM_W(ctx->r15, 0XB28);
    // 0x800785E0: nop

    // 0x800785E4: lw          $t8, 0xC8($t7)
    ctx->r24 = MEM_W(ctx->r15, 0XC8);
    // 0x800785E8: nop

    // 0x800785EC: lw          $t9, 0x24($t8)
    ctx->r25 = MEM_W(ctx->r24, 0X24);
    // 0x800785F0: nop

    // 0x800785F4: lbu         $a0, 0x0($t9)
    ctx->r4 = MEM_BU(ctx->r25, 0X0);
    // 0x800785F8: jal         0x80079F98
    // 0x800785FC: nop

    func_80079F98(rdram, ctx);
        goto after_4;
    // 0x800785FC: nop

    after_4:
    // 0x80078600: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80078604:
    // 0x80078604: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80078608: jr          $ra
    // 0x8007860C: nop

    return;
    // 0x8007860C: nop

;}
RECOMP_FUNC void func_80078610(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80078610: lui         $t6, 0x8012
    ctx->r14 = S32(0X8012 << 16);
    // 0x80078614: lhu         $t6, 0xB78($t6)
    ctx->r14 = MEM_HU(ctx->r14, 0XB78);
    // 0x80078618: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8007861C: bne         $t6, $zero, L_80078790
    if (ctx->r14 != 0) {
        // 0x80078620: sw          $ra, 0x14($sp)
        MEM_W(0X14, ctx->r29) = ctx->r31;
            goto L_80078790;
    }
    // 0x80078620: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80078624: lui         $t7, 0x802C
    ctx->r15 = S32(0X802C << 16);
    // 0x80078628: lbu         $t7, 0x3A94($t7)
    ctx->r15 = MEM_BU(ctx->r15, 0X3A94);
    // 0x8007862C: nop

    // 0x80078630: bne         $t7, $zero, L_80078794
    if (ctx->r15 != 0) {
        // 0x80078634: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_80078794;
    }
    // 0x80078634: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80078638: lhu         $t8, 0x14($a0)
    ctx->r24 = MEM_HU(ctx->r4, 0X14);
    // 0x8007863C: lui         $t0, 0x8009
    ctx->r8 = S32(0X8009 << 16);
    // 0x80078640: andi        $t9, $t8, 0x800
    ctx->r25 = ctx->r24 & 0X800;
    // 0x80078644: bne         $t9, $zero, L_80078794
    if (ctx->r25 != 0) {
        // 0x80078648: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_80078794;
    }
    // 0x80078648: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8007864C: lw          $t0, 0x3B20($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X3B20);
    // 0x80078650: nop

    // 0x80078654: lhu         $t1, 0xC2($t0)
    ctx->r9 = MEM_HU(ctx->r8, 0XC2);
    // 0x80078658: nop

    // 0x8007865C: andi        $t2, $t1, 0x40
    ctx->r10 = ctx->r9 & 0X40;
    // 0x80078660: bne         $t2, $zero, L_80078794
    if (ctx->r10 != 0) {
        // 0x80078664: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_80078794;
    }
    // 0x80078664: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80078668: jal         0x802A1744
    // 0x8007866C: nop

    LOOKUP_FUNC(0x802A1744)(rdram, ctx);
        goto after_0;
    // 0x8007866C: nop

    after_0:
    // 0x80078670: bne         $v0, $zero, L_80078790
    if (ctx->r2 != 0) {
        // 0x80078674: addiu       $t3, $zero, 0x3C
        ctx->r11 = ADD32(0, 0X3C);
            goto L_80078790;
    }
    // 0x80078674: addiu       $t3, $zero, 0x3C
    ctx->r11 = ADD32(0, 0X3C);
    // 0x80078678: lui         $v0, 0x802C
    ctx->r2 = S32(0X802C << 16);
    // 0x8007867C: lbu         $v0, 0x3A95($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X3A95);
    // 0x80078680: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x80078684: sb          $t3, 0x3A94($at)
    MEM_B(0X3A94, ctx->r1) = ctx->r11;
    // 0x80078688: andi        $t4, $v0, 0x7
    ctx->r12 = ctx->r2 & 0X7;
    // 0x8007868C: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x80078690: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x80078694: addu        $at, $at, $t4
    gpr jr_addend_800786A0 = ctx->r12;
    ctx->r1 = ADD32(ctx->r1, ctx->r12);
    // 0x80078698: lw          $t4, -0x52BC($at)
    ctx->r12 = ADD32(ctx->r1, -0X52BC);
    // 0x8007869C: nop

    // 0x800786A0: jr          $t4
    // 0x800786A4: nop

    switch (jr_addend_800786A0 >> 2) {
        case 0: goto L_800786A8; break;
        case 1: goto L_800786C4; break;
        case 2: goto L_800786E0; break;
        case 3: goto L_800786FC; break;
        case 4: goto L_80078718; break;
        case 5: goto L_80078734; break;
        case 6: goto L_80078750; break;
        case 7: goto L_8007876C; break;
        default: switch_error(__func__, 0x800786A0, 0x800DAD44);
    }
    // 0x800786A4: nop

L_800786A8:
    // 0x800786A8: addiu       $a0, $zero, 0x5B9
    ctx->r4 = ADD32(0, 0X5B9);
    // 0x800786AC: jal         0x802A14C0
    // 0x800786B0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    LOOKUP_FUNC(0x802A14C0)(rdram, ctx);
        goto after_1;
    // 0x800786B0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_1:
    // 0x800786B4: lui         $v0, 0x802C
    ctx->r2 = S32(0X802C << 16);
    // 0x800786B8: lbu         $v0, 0x3A95($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X3A95);
    // 0x800786BC: b           L_80078788
    // 0x800786C0: addiu       $t5, $v0, 0x1
    ctx->r13 = ADD32(ctx->r2, 0X1);
        goto L_80078788;
    // 0x800786C0: addiu       $t5, $v0, 0x1
    ctx->r13 = ADD32(ctx->r2, 0X1);
L_800786C4:
    // 0x800786C4: addiu       $a0, $zero, 0x4D8
    ctx->r4 = ADD32(0, 0X4D8);
    // 0x800786C8: jal         0x802A14C0
    // 0x800786CC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    LOOKUP_FUNC(0x802A14C0)(rdram, ctx);
        goto after_2;
    // 0x800786CC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_2:
    // 0x800786D0: lui         $v0, 0x802C
    ctx->r2 = S32(0X802C << 16);
    // 0x800786D4: lbu         $v0, 0x3A95($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X3A95);
    // 0x800786D8: b           L_80078788
    // 0x800786DC: addiu       $t5, $v0, 0x1
    ctx->r13 = ADD32(ctx->r2, 0X1);
        goto L_80078788;
    // 0x800786DC: addiu       $t5, $v0, 0x1
    ctx->r13 = ADD32(ctx->r2, 0X1);
L_800786E0:
    // 0x800786E0: addiu       $a0, $zero, 0x5B8
    ctx->r4 = ADD32(0, 0X5B8);
    // 0x800786E4: jal         0x802A14C0
    // 0x800786E8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    LOOKUP_FUNC(0x802A14C0)(rdram, ctx);
        goto after_3;
    // 0x800786E8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_3:
    // 0x800786EC: lui         $v0, 0x802C
    ctx->r2 = S32(0X802C << 16);
    // 0x800786F0: lbu         $v0, 0x3A95($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X3A95);
    // 0x800786F4: b           L_80078788
    // 0x800786F8: addiu       $t5, $v0, 0x1
    ctx->r13 = ADD32(ctx->r2, 0X1);
        goto L_80078788;
    // 0x800786F8: addiu       $t5, $v0, 0x1
    ctx->r13 = ADD32(ctx->r2, 0X1);
L_800786FC:
    // 0x800786FC: addiu       $a0, $zero, 0x5C6
    ctx->r4 = ADD32(0, 0X5C6);
    // 0x80078700: jal         0x802A14C0
    // 0x80078704: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    LOOKUP_FUNC(0x802A14C0)(rdram, ctx);
        goto after_4;
    // 0x80078704: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_4:
    // 0x80078708: lui         $v0, 0x802C
    ctx->r2 = S32(0X802C << 16);
    // 0x8007870C: lbu         $v0, 0x3A95($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X3A95);
    // 0x80078710: b           L_80078788
    // 0x80078714: addiu       $t5, $v0, 0x1
    ctx->r13 = ADD32(ctx->r2, 0X1);
        goto L_80078788;
    // 0x80078714: addiu       $t5, $v0, 0x1
    ctx->r13 = ADD32(ctx->r2, 0X1);
L_80078718:
    // 0x80078718: addiu       $a0, $zero, 0x44D
    ctx->r4 = ADD32(0, 0X44D);
    // 0x8007871C: jal         0x802A14C0
    // 0x80078720: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    LOOKUP_FUNC(0x802A14C0)(rdram, ctx);
        goto after_5;
    // 0x80078720: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_5:
    // 0x80078724: lui         $v0, 0x802C
    ctx->r2 = S32(0X802C << 16);
    // 0x80078728: lbu         $v0, 0x3A95($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X3A95);
    // 0x8007872C: b           L_80078788
    // 0x80078730: addiu       $t5, $v0, 0x1
    ctx->r13 = ADD32(ctx->r2, 0X1);
        goto L_80078788;
    // 0x80078730: addiu       $t5, $v0, 0x1
    ctx->r13 = ADD32(ctx->r2, 0X1);
L_80078734:
    // 0x80078734: addiu       $a0, $zero, 0x4D8
    ctx->r4 = ADD32(0, 0X4D8);
    // 0x80078738: jal         0x802A14C0
    // 0x8007873C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    LOOKUP_FUNC(0x802A14C0)(rdram, ctx);
        goto after_6;
    // 0x8007873C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_6:
    // 0x80078740: lui         $v0, 0x802C
    ctx->r2 = S32(0X802C << 16);
    // 0x80078744: lbu         $v0, 0x3A95($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X3A95);
    // 0x80078748: b           L_80078788
    // 0x8007874C: addiu       $t5, $v0, 0x1
    ctx->r13 = ADD32(ctx->r2, 0X1);
        goto L_80078788;
    // 0x8007874C: addiu       $t5, $v0, 0x1
    ctx->r13 = ADD32(ctx->r2, 0X1);
L_80078750:
    // 0x80078750: addiu       $a0, $zero, 0x44E
    ctx->r4 = ADD32(0, 0X44E);
    // 0x80078754: jal         0x802A14C0
    // 0x80078758: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    LOOKUP_FUNC(0x802A14C0)(rdram, ctx);
        goto after_7;
    // 0x80078758: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_7:
    // 0x8007875C: lui         $v0, 0x802C
    ctx->r2 = S32(0X802C << 16);
    // 0x80078760: lbu         $v0, 0x3A95($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X3A95);
    // 0x80078764: b           L_80078788
    // 0x80078768: addiu       $t5, $v0, 0x1
    ctx->r13 = ADD32(ctx->r2, 0X1);
        goto L_80078788;
    // 0x80078768: addiu       $t5, $v0, 0x1
    ctx->r13 = ADD32(ctx->r2, 0X1);
L_8007876C:
    // 0x8007876C: addiu       $a0, $zero, 0x5C6
    ctx->r4 = ADD32(0, 0X5C6);
    // 0x80078770: jal         0x802A14C0
    // 0x80078774: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    LOOKUP_FUNC(0x802A14C0)(rdram, ctx);
        goto after_8;
    // 0x80078774: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_8:
    // 0x80078778: lui         $v0, 0x802C
    ctx->r2 = S32(0X802C << 16);
    // 0x8007877C: lbu         $v0, 0x3A95($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X3A95);
    // 0x80078780: nop

    // 0x80078784: addiu       $t5, $v0, 0x1
    ctx->r13 = ADD32(ctx->r2, 0X1);
L_80078788:
    // 0x80078788: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x8007878C: sb          $t5, 0x3A95($at)
    MEM_B(0X3A95, ctx->r1) = ctx->r13;
L_80078790:
    // 0x80078790: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80078794:
    // 0x80078794: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80078798: jr          $ra
    // 0x8007879C: nop

    return;
    // 0x8007879C: nop

;}
RECOMP_FUNC void func_800787A0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800787A0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800787A4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800787A8: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x800787AC: addiu       $a0, $zero, 0x41F
    ctx->r4 = ADD32(0, 0X41F);
    // 0x800787B0: jal         0x802A14C0
    // 0x800787B4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    LOOKUP_FUNC(0x802A14C0)(rdram, ctx);
        goto after_0;
    // 0x800787B4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_0:
    // 0x800787B8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800787BC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800787C0: jr          $ra
    // 0x800787C4: nop

    return;
    // 0x800787C4: nop

;}
RECOMP_FUNC void func_800787C8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800787C8: lui         $v0, 0x8010
    ctx->r2 = S32(0X8010 << 16);
    // 0x800787CC: lhu         $v0, 0x522A($v0)
    ctx->r2 = MEM_HU(ctx->r2, 0X522A);
    // 0x800787D0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800787D4: andi        $t6, $v0, 0x1
    ctx->r14 = ctx->r2 & 0X1;
    // 0x800787D8: beq         $t6, $zero, L_800787F4
    if (ctx->r14 == 0) {
        // 0x800787DC: sw          $ra, 0x14($sp)
        MEM_W(0X14, ctx->r29) = ctx->r31;
            goto L_800787F4;
    }
    // 0x800787DC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800787E0: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x800787E4: beq         $t6, $at, L_80078808
    if (ctx->r14 == ctx->r1) {
        // 0x800787E8: addiu       $a0, $zero, 0x4EC
        ctx->r4 = ADD32(0, 0X4EC);
            goto L_80078808;
    }
    // 0x800787E8: addiu       $a0, $zero, 0x4EC
    ctx->r4 = ADD32(0, 0X4EC);
    // 0x800787EC: b           L_80078814
    // 0x800787F0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80078814;
    // 0x800787F0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_800787F4:
    // 0x800787F4: addiu       $a0, $zero, 0x4A8
    ctx->r4 = ADD32(0, 0X4A8);
    // 0x800787F8: jal         0x802A14C0
    // 0x800787FC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    LOOKUP_FUNC(0x802A14C0)(rdram, ctx);
        goto after_0;
    // 0x800787FC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_0:
    // 0x80078800: b           L_80078814
    // 0x80078804: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80078814;
    // 0x80078804: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80078808:
    // 0x80078808: jal         0x802A14C0
    // 0x8007880C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    LOOKUP_FUNC(0x802A14C0)(rdram, ctx);
        goto after_1;
    // 0x8007880C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_1:
    // 0x80078810: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80078814:
    // 0x80078814: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80078818: jr          $ra
    // 0x8007881C: nop

    return;
    // 0x8007881C: nop

;}
RECOMP_FUNC void func_80078820(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80078820: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80078824: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80078828: jal         0x80015BC0
    // 0x8007882C: addiu       $a0, $zero, 0x3D6
    ctx->r4 = ADD32(0, 0X3D6);
    func_80015BC0(rdram, ctx);
        goto after_0;
    // 0x8007882C: addiu       $a0, $zero, 0x3D6
    ctx->r4 = ADD32(0, 0X3D6);
    after_0:
    // 0x80078830: lui         $v1, 0x802C
    ctx->r3 = S32(0X802C << 16);
    // 0x80078834: addiu       $v1, $v1, 0x3AAA
    ctx->r3 = ADD32(ctx->r3, 0X3AAA);
    // 0x80078838: lbu         $t6, 0x0($v1)
    ctx->r14 = MEM_BU(ctx->r3, 0X0);
    // 0x8007883C: lui         $v0, 0x8010
    ctx->r2 = S32(0X8010 << 16);
    // 0x80078840: addiu       $t7, $t6, 0x1
    ctx->r15 = ADD32(ctx->r14, 0X1);
    // 0x80078844: sb          $t7, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r15;
    // 0x80078848: lhu         $v0, 0x522A($v0)
    ctx->r2 = MEM_HU(ctx->r2, 0X522A);
    // 0x8007884C: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80078850: andi        $t8, $v0, 0x3
    ctx->r24 = ctx->r2 & 0X3;
    // 0x80078854: beq         $t8, $zero, L_80078884
    if (ctx->r24 == 0) {
        // 0x80078858: addiu       $a0, $zero, 0x5EC
        ctx->r4 = ADD32(0, 0X5EC);
            goto L_80078884;
    }
    // 0x80078858: addiu       $a0, $zero, 0x5EC
    ctx->r4 = ADD32(0, 0X5EC);
    // 0x8007885C: beq         $t8, $at, L_80078898
    if (ctx->r24 == ctx->r1) {
        // 0x80078860: addiu       $a0, $zero, 0x5EB
        ctx->r4 = ADD32(0, 0X5EB);
            goto L_80078898;
    }
    // 0x80078860: addiu       $a0, $zero, 0x5EB
    ctx->r4 = ADD32(0, 0X5EB);
    // 0x80078864: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x80078868: beq         $t8, $at, L_800788AC
    if (ctx->r24 == ctx->r1) {
        // 0x8007886C: addiu       $a0, $zero, 0x43C
        ctx->r4 = ADD32(0, 0X43C);
            goto L_800788AC;
    }
    // 0x8007886C: addiu       $a0, $zero, 0x43C
    ctx->r4 = ADD32(0, 0X43C);
    // 0x80078870: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x80078874: beq         $t8, $at, L_800788C0
    if (ctx->r24 == ctx->r1) {
        // 0x80078878: addiu       $a0, $zero, 0x5EA
        ctx->r4 = ADD32(0, 0X5EA);
            goto L_800788C0;
    }
    // 0x80078878: addiu       $a0, $zero, 0x5EA
    ctx->r4 = ADD32(0, 0X5EA);
    // 0x8007887C: b           L_800788D4
    // 0x80078880: lbu         $t9, 0x0($v1)
    ctx->r25 = MEM_BU(ctx->r3, 0X0);
        goto L_800788D4;
    // 0x80078880: lbu         $t9, 0x0($v1)
    ctx->r25 = MEM_BU(ctx->r3, 0X0);
L_80078884:
    // 0x80078884: jal         0x802A14C0
    // 0x80078888: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    LOOKUP_FUNC(0x802A14C0)(rdram, ctx);
        goto after_1;
    // 0x80078888: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_1:
    // 0x8007888C: lui         $v1, 0x802C
    ctx->r3 = S32(0X802C << 16);
    // 0x80078890: b           L_800788D0
    // 0x80078894: addiu       $v1, $v1, 0x3AAA
    ctx->r3 = ADD32(ctx->r3, 0X3AAA);
        goto L_800788D0;
    // 0x80078894: addiu       $v1, $v1, 0x3AAA
    ctx->r3 = ADD32(ctx->r3, 0X3AAA);
L_80078898:
    // 0x80078898: jal         0x802A14C0
    // 0x8007889C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    LOOKUP_FUNC(0x802A14C0)(rdram, ctx);
        goto after_2;
    // 0x8007889C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_2:
    // 0x800788A0: lui         $v1, 0x802C
    ctx->r3 = S32(0X802C << 16);
    // 0x800788A4: b           L_800788D0
    // 0x800788A8: addiu       $v1, $v1, 0x3AAA
    ctx->r3 = ADD32(ctx->r3, 0X3AAA);
        goto L_800788D0;
    // 0x800788A8: addiu       $v1, $v1, 0x3AAA
    ctx->r3 = ADD32(ctx->r3, 0X3AAA);
L_800788AC:
    // 0x800788AC: jal         0x802A14C0
    // 0x800788B0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    LOOKUP_FUNC(0x802A14C0)(rdram, ctx);
        goto after_3;
    // 0x800788B0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_3:
    // 0x800788B4: lui         $v1, 0x802C
    ctx->r3 = S32(0X802C << 16);
    // 0x800788B8: b           L_800788D0
    // 0x800788BC: addiu       $v1, $v1, 0x3AAA
    ctx->r3 = ADD32(ctx->r3, 0X3AAA);
        goto L_800788D0;
    // 0x800788BC: addiu       $v1, $v1, 0x3AAA
    ctx->r3 = ADD32(ctx->r3, 0X3AAA);
L_800788C0:
    // 0x800788C0: jal         0x802A14C0
    // 0x800788C4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    LOOKUP_FUNC(0x802A14C0)(rdram, ctx);
        goto after_4;
    // 0x800788C4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_4:
    // 0x800788C8: lui         $v1, 0x802C
    ctx->r3 = S32(0X802C << 16);
    // 0x800788CC: addiu       $v1, $v1, 0x3AAA
    ctx->r3 = ADD32(ctx->r3, 0X3AAA);
L_800788D0:
    // 0x800788D0: lbu         $t9, 0x0($v1)
    ctx->r25 = MEM_BU(ctx->r3, 0X0);
L_800788D4:
    // 0x800788D4: nop

    // 0x800788D8: andi        $t0, $t9, 0x1
    ctx->r8 = ctx->r25 & 0X1;
    // 0x800788DC: bne         $t0, $zero, L_800788F0
    if (ctx->r8 != 0) {
        // 0x800788E0: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_800788F0;
    }
    // 0x800788E0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800788E4: jal         0x800787C8
    // 0x800788E8: nop

    func_800787C8(rdram, ctx);
        goto after_5;
    // 0x800788E8: nop

    after_5:
    // 0x800788EC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_800788F0:
    // 0x800788F0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800788F4: jr          $ra
    // 0x800788F8: nop

    return;
    // 0x800788F8: nop

;}
RECOMP_FUNC void func_800788FC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800788FC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80078900: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80078904: jal         0x80015BC0
    // 0x80078908: addiu       $a0, $zero, 0x3D6
    ctx->r4 = ADD32(0, 0X3D6);
    func_80015BC0(rdram, ctx);
        goto after_0;
    // 0x80078908: addiu       $a0, $zero, 0x3D6
    ctx->r4 = ADD32(0, 0X3D6);
    after_0:
    // 0x8007890C: lui         $v0, 0x802C
    ctx->r2 = S32(0X802C << 16);
    // 0x80078910: addiu       $v0, $v0, 0x3AAA
    ctx->r2 = ADD32(ctx->r2, 0X3AAA);
    // 0x80078914: lbu         $t6, 0x0($v0)
    ctx->r14 = MEM_BU(ctx->r2, 0X0);
    // 0x80078918: addiu       $a0, $zero, 0x4A9
    ctx->r4 = ADD32(0, 0X4A9);
    // 0x8007891C: addiu       $t7, $t6, 0x1
    ctx->r15 = ADD32(ctx->r14, 0X1);
    // 0x80078920: sb          $t7, 0x0($v0)
    MEM_B(0X0, ctx->r2) = ctx->r15;
    // 0x80078924: jal         0x802A14C0
    // 0x80078928: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    LOOKUP_FUNC(0x802A14C0)(rdram, ctx);
        goto after_1;
    // 0x80078928: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_1:
    // 0x8007892C: lui         $t8, 0x802C
    ctx->r24 = S32(0X802C << 16);
    // 0x80078930: lbu         $t8, 0x3AAA($t8)
    ctx->r24 = MEM_BU(ctx->r24, 0X3AAA);
    // 0x80078934: nop

    // 0x80078938: andi        $t9, $t8, 0x1
    ctx->r25 = ctx->r24 & 0X1;
    // 0x8007893C: bne         $t9, $zero, L_80078950
    if (ctx->r25 != 0) {
        // 0x80078940: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_80078950;
    }
    // 0x80078940: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80078944: jal         0x800787C8
    // 0x80078948: nop

    func_800787C8(rdram, ctx);
        goto after_2;
    // 0x80078948: nop

    after_2:
    // 0x8007894C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80078950:
    // 0x80078950: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80078954: jr          $ra
    // 0x80078958: nop

    return;
    // 0x80078958: nop

;}
RECOMP_FUNC void func_8007895C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8007895C: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x80078960: addiu       $v0, $v0, -0x2CF0
    ctx->r2 = ADD32(ctx->r2, -0X2CF0);
    // 0x80078964: lhu         $t6, 0x8($v0)
    ctx->r14 = MEM_HU(ctx->r2, 0X8);
    // 0x80078968: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8007896C: andi        $t7, $t6, 0x1000
    ctx->r15 = ctx->r14 & 0X1000;
    // 0x80078970: beq         $t7, $zero, L_800789C8
    if (ctx->r15 == 0) {
        // 0x80078974: sw          $ra, 0x14($sp)
        MEM_W(0X14, ctx->r29) = ctx->r31;
            goto L_800789C8;
    }
    // 0x80078974: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80078978: lui         $v1, 0x802C
    ctx->r3 = S32(0X802C << 16);
    // 0x8007897C: addiu       $v1, $v1, 0x38C8
    ctx->r3 = ADD32(ctx->r3, 0X38C8);
    // 0x80078980: addiu       $t8, $zero, 0x90
    ctx->r24 = ADD32(0, 0X90);
    // 0x80078984: addiu       $t9, $zero, 0xC0
    ctx->r25 = ADD32(0, 0XC0);
    // 0x80078988: sh          $t8, 0x0($v1)
    MEM_H(0X0, ctx->r3) = ctx->r24;
    // 0x8007898C: sh          $t9, 0x2($v1)
    MEM_H(0X2, ctx->r3) = ctx->r25;
    // 0x80078990: lui         $t1, 0x8012
    ctx->r9 = S32(0X8012 << 16);
    // 0x80078994: lhu         $t1, 0xB72($t1)
    ctx->r9 = MEM_HU(ctx->r9, 0XB72);
    // 0x80078998: lbu         $t0, 0xA94($v0)
    ctx->r8 = MEM_BU(ctx->r2, 0XA94);
    // 0x8007899C: slti        $at, $t1, 0x4
    ctx->r1 = SIGNED(ctx->r9) < 0X4 ? 1 : 0;
    // 0x800789A0: beq         $at, $zero, L_800789B8
    if (ctx->r1 == 0) {
        // 0x800789A4: sb          $t0, 0x1F($sp)
        MEM_B(0X1F, ctx->r29) = ctx->r8;
            goto L_800789B8;
    }
    // 0x800789A4: sb          $t0, 0x1F($sp)
    MEM_B(0X1F, ctx->r29) = ctx->r8;
    // 0x800789A8: jal         0x80062860
    // 0x800789AC: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    func_80062860(rdram, ctx);
        goto after_0;
    // 0x800789AC: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_0:
    // 0x800789B0: b           L_80078A14
    // 0x800789B4: lbu         $a0, 0x1F($sp)
    ctx->r4 = MEM_BU(ctx->r29, 0X1F);
        goto L_80078A14;
    // 0x800789B4: lbu         $a0, 0x1F($sp)
    ctx->r4 = MEM_BU(ctx->r29, 0X1F);
L_800789B8:
    // 0x800789B8: jal         0x800625BC
    // 0x800789BC: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    func_800625BC(rdram, ctx);
        goto after_1;
    // 0x800789BC: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_1:
    // 0x800789C0: b           L_80078A14
    // 0x800789C4: lbu         $a0, 0x1F($sp)
    ctx->r4 = MEM_BU(ctx->r29, 0X1F);
        goto L_80078A14;
    // 0x800789C4: lbu         $a0, 0x1F($sp)
    ctx->r4 = MEM_BU(ctx->r29, 0X1F);
L_800789C8:
    // 0x800789C8: lui         $v1, 0x802C
    ctx->r3 = S32(0X802C << 16);
    // 0x800789CC: addiu       $v1, $v1, 0x38C8
    ctx->r3 = ADD32(ctx->r3, 0X38C8);
    // 0x800789D0: addiu       $t2, $zero, 0xC0
    ctx->r10 = ADD32(0, 0XC0);
    // 0x800789D4: addiu       $t3, $zero, 0x90
    ctx->r11 = ADD32(0, 0X90);
    // 0x800789D8: sh          $t2, 0x0($v1)
    MEM_H(0X0, ctx->r3) = ctx->r10;
    // 0x800789DC: sh          $t3, 0x2($v1)
    MEM_H(0X2, ctx->r3) = ctx->r11;
    // 0x800789E0: lui         $t5, 0x8012
    ctx->r13 = S32(0X8012 << 16);
    // 0x800789E4: lhu         $t5, 0xB72($t5)
    ctx->r13 = MEM_HU(ctx->r13, 0XB72);
    // 0x800789E8: lbu         $t4, 0x0($v0)
    ctx->r12 = MEM_BU(ctx->r2, 0X0);
    // 0x800789EC: slti        $at, $t5, 0x4
    ctx->r1 = SIGNED(ctx->r13) < 0X4 ? 1 : 0;
    // 0x800789F0: beq         $at, $zero, L_80078A08
    if (ctx->r1 == 0) {
        // 0x800789F4: sb          $t4, 0x1F($sp)
        MEM_B(0X1F, ctx->r29) = ctx->r12;
            goto L_80078A08;
    }
    // 0x800789F4: sb          $t4, 0x1F($sp)
    MEM_B(0X1F, ctx->r29) = ctx->r12;
    // 0x800789F8: jal         0x80062764
    // 0x800789FC: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    func_80062764(rdram, ctx);
        goto after_2;
    // 0x800789FC: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_2:
    // 0x80078A00: b           L_80078A14
    // 0x80078A04: lbu         $a0, 0x1F($sp)
    ctx->r4 = MEM_BU(ctx->r29, 0X1F);
        goto L_80078A14;
    // 0x80078A04: lbu         $a0, 0x1F($sp)
    ctx->r4 = MEM_BU(ctx->r29, 0X1F);
L_80078A08:
    // 0x80078A08: jal         0x80062414
    // 0x80078A0C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    func_80062414(rdram, ctx);
        goto after_3;
    // 0x80078A0C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_3:
    // 0x80078A10: lbu         $a0, 0x1F($sp)
    ctx->r4 = MEM_BU(ctx->r29, 0X1F);
L_80078A14:
    // 0x80078A14: jal         0x80079FFC
    // 0x80078A18: nop

    func_80079FFC(rdram, ctx);
        goto after_4;
    // 0x80078A18: nop

    after_4:
    // 0x80078A1C: addiu       $a0, $zero, 0x4B1
    ctx->r4 = ADD32(0, 0X4B1);
    // 0x80078A20: jal         0x802A14C0
    // 0x80078A24: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    LOOKUP_FUNC(0x802A14C0)(rdram, ctx);
        goto after_5;
    // 0x80078A24: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_5:
    // 0x80078A28: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80078A2C: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x80078A30: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x80078A34: sb          $t6, 0x3ACF($at)
    MEM_B(0X3ACF, ctx->r1) = ctx->r14;
    // 0x80078A38: jr          $ra
    // 0x80078A3C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x80078A3C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_80078A40(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80078A40: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80078A44: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80078A48: jal         0x80079E48
    // 0x80078A4C: nop

    func_80079E48(rdram, ctx);
        goto after_0;
    // 0x80078A4C: nop

    after_0:
    // 0x80078A50: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80078A54: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80078A58: jr          $ra
    // 0x80078A5C: nop

    return;
    // 0x80078A5C: nop

;}
RECOMP_FUNC void func_80078AF8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80078AF8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80078AFC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80078B00: jal         0x802A1744
    // 0x80078B04: nop

    LOOKUP_FUNC(0x802A1744)(rdram, ctx);
        goto after_0;
    // 0x80078B04: nop

    after_0:
    // 0x80078B08: slti        $at, $v0, 0x2
    ctx->r1 = SIGNED(ctx->r2) < 0X2 ? 1 : 0;
    // 0x80078B0C: beq         $at, $zero, L_80078B44
    if (ctx->r1 == 0) {
        // 0x80078B10: addiu       $a0, $zero, 0x45B
        ctx->r4 = ADD32(0, 0X45B);
            goto L_80078B44;
    }
    // 0x80078B10: addiu       $a0, $zero, 0x45B
    ctx->r4 = ADD32(0, 0X45B);
    // 0x80078B14: jal         0x802A14C0
    // 0x80078B18: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    LOOKUP_FUNC(0x802A14C0)(rdram, ctx);
        goto after_1;
    // 0x80078B18: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_1:
    // 0x80078B1C: lui         $t6, 0x8009
    ctx->r14 = S32(0X8009 << 16);
    // 0x80078B20: lw          $t6, 0x3B20($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X3B20);
    // 0x80078B24: nop

    // 0x80078B28: lw          $t7, 0x8C($t6)
    ctx->r15 = MEM_W(ctx->r14, 0X8C);
    // 0x80078B2C: nop

    // 0x80078B30: lw          $t8, 0xC8($t7)
    ctx->r24 = MEM_W(ctx->r15, 0XC8);
    // 0x80078B34: nop

    // 0x80078B38: lbu         $a0, 0x0($t8)
    ctx->r4 = MEM_BU(ctx->r24, 0X0);
    // 0x80078B3C: jal         0x80079F98
    // 0x80078B40: nop

    func_80079F98(rdram, ctx);
        goto after_2;
    // 0x80078B40: nop

    after_2:
L_80078B44:
    // 0x80078B44: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80078B48: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80078B4C: jr          $ra
    // 0x80078B50: nop

    return;
    // 0x80078B50: nop

;}
RECOMP_FUNC void func_80078B5C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80078B5C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80078B60: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80078B64: addiu       $a0, $zero, 0x476
    ctx->r4 = ADD32(0, 0X476);
    // 0x80078B68: jal         0x802A14C0
    // 0x80078B6C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    LOOKUP_FUNC(0x802A14C0)(rdram, ctx);
        goto after_0;
    // 0x80078B6C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_0:
    // 0x80078B70: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80078B74: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80078B78: jr          $ra
    // 0x80078B7C: nop

    return;
    // 0x80078B7C: nop

;}
RECOMP_FUNC void func_80078B80(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80078B80: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80078B84: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80078B88: addiu       $a0, $zero, 0x558
    ctx->r4 = ADD32(0, 0X558);
    // 0x80078B8C: jal         0x802A14C0
    // 0x80078B90: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    LOOKUP_FUNC(0x802A14C0)(rdram, ctx);
        goto after_0;
    // 0x80078B90: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_0:
    // 0x80078B94: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80078B98: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80078B9C: jr          $ra
    // 0x80078BA0: nop

    return;
    // 0x80078BA0: nop

;}
RECOMP_FUNC void func_80078BA4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80078BA4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80078BA8: lui         $t6, 0x8012
    ctx->r14 = S32(0X8012 << 16);
    // 0x80078BAC: lw          $t6, 0xB2C($t6)
    ctx->r14 = MEM_W(ctx->r14, 0XB2C);
    // 0x80078BB0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80078BB4: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x80078BB8: lw          $t7, 0xC8($t6)
    ctx->r15 = MEM_W(ctx->r14, 0XC8);
    // 0x80078BBC: nop

    // 0x80078BC0: lbu         $a0, 0x7($t7)
    ctx->r4 = MEM_BU(ctx->r15, 0X7);
    // 0x80078BC4: jal         0x8007A5B8
    // 0x80078BC8: nop

    func_8007A5B8(rdram, ctx);
        goto after_0;
    // 0x80078BC8: nop

    after_0:
    // 0x80078BCC: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x80078BD0: jal         0x80078C9C
    // 0x80078BD4: nop

    func_80078C9C(rdram, ctx);
        goto after_1;
    // 0x80078BD4: nop

    after_1:
    // 0x80078BD8: lui         $t8, 0x8010
    ctx->r24 = S32(0X8010 << 16);
    // 0x80078BDC: lhu         $t8, 0x522A($t8)
    ctx->r24 = MEM_HU(ctx->r24, 0X522A);
    // 0x80078BE0: nop

    // 0x80078BE4: andi        $t9, $t8, 0x1
    ctx->r25 = ctx->r24 & 0X1;
    // 0x80078BE8: beq         $t9, $zero, L_80078C00
    if (ctx->r25 == 0) {
        // 0x80078BEC: nop
    
            goto L_80078C00;
    }
    // 0x80078BEC: nop

    // 0x80078BF0: jal         0x80078B80
    // 0x80078BF4: nop

    func_80078B80(rdram, ctx);
        goto after_2;
    // 0x80078BF4: nop

    after_2:
    // 0x80078BF8: b           L_80078C0C
    // 0x80078BFC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80078C0C;
    // 0x80078BFC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80078C00:
    // 0x80078C00: jal         0x80078AF8
    // 0x80078C04: nop

    func_80078AF8(rdram, ctx);
        goto after_3;
    // 0x80078C04: nop

    after_3:
    // 0x80078C08: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80078C0C:
    // 0x80078C0C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80078C10: jr          $ra
    // 0x80078C14: nop

    return;
    // 0x80078C14: nop

;}
RECOMP_FUNC void func_80078C18(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80078C18: lui         $t6, 0x8012
    ctx->r14 = S32(0X8012 << 16);
    // 0x80078C1C: lw          $t6, 0xB2C($t6)
    ctx->r14 = MEM_W(ctx->r14, 0XB2C);
    // 0x80078C20: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80078C24: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80078C28: lw          $t7, 0xC8($t6)
    ctx->r15 = MEM_W(ctx->r14, 0XC8);
    // 0x80078C2C: or          $a1, $a0, $zero
    ctx->r5 = ctx->r4 | 0;
    // 0x80078C30: lbu         $a0, 0x7($t7)
    ctx->r4 = MEM_BU(ctx->r15, 0X7);
    // 0x80078C34: jal         0x8007A5B8
    // 0x80078C38: sw          $a1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r5;
    func_8007A5B8(rdram, ctx);
        goto after_0;
    // 0x80078C38: sw          $a1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r5;
    after_0:
    // 0x80078C3C: lui         $v0, 0x8010
    ctx->r2 = S32(0X8010 << 16);
    // 0x80078C40: lhu         $v0, 0x522A($v0)
    ctx->r2 = MEM_HU(ctx->r2, 0X522A);
    // 0x80078C44: lw          $a1, 0x18($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X18);
    // 0x80078C48: andi        $t8, $v0, 0x3
    ctx->r24 = ctx->r2 & 0X3;
    // 0x80078C4C: beq         $t8, $zero, L_80078C64
    if (ctx->r24 == 0) {
        // 0x80078C50: addiu       $at, $zero, 0x1
        ctx->r1 = ADD32(0, 0X1);
            goto L_80078C64;
    }
    // 0x80078C50: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80078C54: beq         $t8, $at, L_80078C74
    if (ctx->r24 == ctx->r1) {
        // 0x80078C58: nop
    
            goto L_80078C74;
    }
    // 0x80078C58: nop

    // 0x80078C5C: b           L_80078C84
    // 0x80078C60: nop

        goto L_80078C84;
    // 0x80078C60: nop

L_80078C64:
    // 0x80078C64: jal         0x80078C9C
    // 0x80078C68: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    func_80078C9C(rdram, ctx);
        goto after_1;
    // 0x80078C68: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    after_1:
    // 0x80078C6C: b           L_80078C90
    // 0x80078C70: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80078C90;
    // 0x80078C70: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80078C74:
    // 0x80078C74: jal         0x80078D00
    // 0x80078C78: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    func_80078D00(rdram, ctx);
        goto after_2;
    // 0x80078C78: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    after_2:
    // 0x80078C7C: b           L_80078C90
    // 0x80078C80: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80078C90;
    // 0x80078C80: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80078C84:
    // 0x80078C84: jal         0x80078D28
    // 0x80078C88: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    func_80078D28(rdram, ctx);
        goto after_3;
    // 0x80078C88: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    after_3:
    // 0x80078C8C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80078C90:
    // 0x80078C90: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80078C94: jr          $ra
    // 0x80078C98: nop

    return;
    // 0x80078C98: nop

;}
RECOMP_FUNC void func_80078C9C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80078C9C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80078CA0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80078CA4: jal         0x80079FD0
    // 0x80078CA8: nop

    func_80079FD0(rdram, ctx);
        goto after_0;
    // 0x80078CA8: nop

    after_0:
    // 0x80078CAC: addiu       $a0, $zero, 0x411
    ctx->r4 = ADD32(0, 0X411);
    // 0x80078CB0: jal         0x802A14C0
    // 0x80078CB4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    LOOKUP_FUNC(0x802A14C0)(rdram, ctx);
        goto after_1;
    // 0x80078CB4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_1:
    // 0x80078CB8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80078CBC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80078CC0: jr          $ra
    // 0x80078CC4: nop

    return;
    // 0x80078CC4: nop

;}
RECOMP_FUNC void func_80078D00(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80078D00: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80078D04: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80078D08: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x80078D0C: addiu       $a0, $zero, 0x45C
    ctx->r4 = ADD32(0, 0X45C);
    // 0x80078D10: jal         0x802A14C0
    // 0x80078D14: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    LOOKUP_FUNC(0x802A14C0)(rdram, ctx);
        goto after_0;
    // 0x80078D14: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_0:
    // 0x80078D18: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80078D1C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80078D20: jr          $ra
    // 0x80078D24: nop

    return;
    // 0x80078D24: nop

;}
RECOMP_FUNC void func_80078D28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80078D28: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80078D2C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80078D30: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x80078D34: addiu       $a0, $zero, 0x45C
    ctx->r4 = ADD32(0, 0X45C);
    // 0x80078D38: jal         0x802A14C0
    // 0x80078D3C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    LOOKUP_FUNC(0x802A14C0)(rdram, ctx);
        goto after_0;
    // 0x80078D3C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_0:
    // 0x80078D40: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80078D44: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80078D48: jr          $ra
    // 0x80078D4C: nop

    return;
    // 0x80078D4C: nop

;}
RECOMP_FUNC void func_80078D50(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80078D50: lui         $t6, 0x8012
    ctx->r14 = S32(0X8012 << 16);
    // 0x80078D54: lw          $t6, 0xB2C($t6)
    ctx->r14 = MEM_W(ctx->r14, 0XB2C);
    // 0x80078D58: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80078D5C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80078D60: lw          $t7, 0xC8($t6)
    ctx->r15 = MEM_W(ctx->r14, 0XC8);
    // 0x80078D64: nop

    // 0x80078D68: lbu         $a0, 0x7($t7)
    ctx->r4 = MEM_BU(ctx->r15, 0X7);
    // 0x80078D6C: jal         0x8007A5B8
    // 0x80078D70: nop

    func_8007A5B8(rdram, ctx);
        goto after_0;
    // 0x80078D70: nop

    after_0:
    // 0x80078D74: addiu       $a0, $zero, 0x412
    ctx->r4 = ADD32(0, 0X412);
    // 0x80078D78: jal         0x802A14C0
    // 0x80078D7C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    LOOKUP_FUNC(0x802A14C0)(rdram, ctx);
        goto after_1;
    // 0x80078D7C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_1:
    // 0x80078D80: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80078D84: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80078D88: jr          $ra
    // 0x80078D8C: nop

    return;
    // 0x80078D8C: nop

;}
RECOMP_FUNC void func_80078D90(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80078D90: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80078D94: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80078D98: jal         0x8007840C
    // 0x80078D9C: nop

    func_8007840C(rdram, ctx);
        goto after_0;
    // 0x80078D9C: nop

    after_0:
    // 0x80078DA0: jal         0x8007A400
    // 0x80078DA4: nop

    func_8007A400(rdram, ctx);
        goto after_1;
    // 0x80078DA4: nop

    after_1:
    // 0x80078DA8: addiu       $a0, $zero, 0x571
    ctx->r4 = ADD32(0, 0X571);
    // 0x80078DAC: jal         0x802A14C0
    // 0x80078DB0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    LOOKUP_FUNC(0x802A14C0)(rdram, ctx);
        goto after_2;
    // 0x80078DB0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_2:
    // 0x80078DB4: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x80078DB8: lw          $a0, 0xB28($a0)
    ctx->r4 = MEM_W(ctx->r4, 0XB28);
    // 0x80078DBC: jal         0x80079E48
    // 0x80078DC0: nop

    func_80079E48(rdram, ctx);
        goto after_3;
    // 0x80078DC0: nop

    after_3:
    // 0x80078DC4: addiu       $a0, $zero, 0x4A4
    ctx->r4 = ADD32(0, 0X4A4);
    // 0x80078DC8: jal         0x802A14C0
    // 0x80078DCC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    LOOKUP_FUNC(0x802A14C0)(rdram, ctx);
        goto after_4;
    // 0x80078DCC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_4:
    // 0x80078DD0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80078DD4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80078DD8: jr          $ra
    // 0x80078DDC: nop

    return;
    // 0x80078DDC: nop

;}
RECOMP_FUNC void func_80078DE0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80078DE0: lui         $t6, 0x8012
    ctx->r14 = S32(0X8012 << 16);
    // 0x80078DE4: lw          $t6, 0xB2C($t6)
    ctx->r14 = MEM_W(ctx->r14, 0XB2C);
    // 0x80078DE8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80078DEC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80078DF0: lw          $t7, 0xC8($t6)
    ctx->r15 = MEM_W(ctx->r14, 0XC8);
    // 0x80078DF4: nop

    // 0x80078DF8: lbu         $a0, 0x7($t7)
    ctx->r4 = MEM_BU(ctx->r15, 0X7);
    // 0x80078DFC: jal         0x8007A5B8
    // 0x80078E00: nop

    func_8007A5B8(rdram, ctx);
        goto after_0;
    // 0x80078E00: nop

    after_0:
    // 0x80078E04: lui         $v0, 0x8010
    ctx->r2 = S32(0X8010 << 16);
    // 0x80078E08: lhu         $v0, 0x522A($v0)
    ctx->r2 = MEM_HU(ctx->r2, 0X522A);
    // 0x80078E0C: lui         $v1, 0x8012
    ctx->r3 = S32(0X8012 << 16);
    // 0x80078E10: andi        $t8, $v0, 0x1
    ctx->r24 = ctx->r2 & 0X1;
    // 0x80078E14: beq         $t8, $zero, L_80078E30
    if (ctx->r24 == 0) {
        // 0x80078E18: addiu       $v1, $v1, 0xB2C
        ctx->r3 = ADD32(ctx->r3, 0XB2C);
            goto L_80078E30;
    }
    // 0x80078E18: addiu       $v1, $v1, 0xB2C
    ctx->r3 = ADD32(ctx->r3, 0XB2C);
    // 0x80078E1C: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80078E20: beq         $t8, $at, L_80078E44
    if (ctx->r24 == ctx->r1) {
        // 0x80078E24: nop
    
            goto L_80078E44;
    }
    // 0x80078E24: nop

    // 0x80078E28: b           L_80078E50
    // 0x80078E2C: nop

        goto L_80078E50;
    // 0x80078E2C: nop

L_80078E30:
    // 0x80078E30: lw          $a0, 0x0($v1)
    ctx->r4 = MEM_W(ctx->r3, 0X0);
    // 0x80078E34: jal         0x80078ED4
    // 0x80078E38: nop

    func_80078ED4(rdram, ctx);
        goto after_1;
    // 0x80078E38: nop

    after_1:
    // 0x80078E3C: b           L_80078E50
    // 0x80078E40: nop

        goto L_80078E50;
    // 0x80078E40: nop

L_80078E44:
    // 0x80078E44: lw          $a0, 0x0($v1)
    ctx->r4 = MEM_W(ctx->r3, 0X0);
    // 0x80078E48: jal         0x80078EDC
    // 0x80078E4C: nop

    func_80078EDC(rdram, ctx);
        goto after_2;
    // 0x80078E4C: nop

    after_2:
L_80078E50:
    // 0x80078E50: jal         0x80078E68
    // 0x80078E54: nop

    func_80078E68(rdram, ctx);
        goto after_3;
    // 0x80078E54: nop

    after_3:
    // 0x80078E58: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80078E5C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80078E60: jr          $ra
    // 0x80078E64: nop

    return;
    // 0x80078E64: nop

;}
RECOMP_FUNC void func_80078E68(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80078E68: lui         $t6, 0x8010
    ctx->r14 = S32(0X8010 << 16);
    // 0x80078E6C: lhu         $t6, 0x522A($t6)
    ctx->r14 = MEM_HU(ctx->r14, 0X522A);
    // 0x80078E70: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80078E74: andi        $t7, $t6, 0x3
    ctx->r15 = ctx->r14 & 0X3;
    // 0x80078E78: bne         $t7, $zero, L_80078EBC
    if (ctx->r15 != 0) {
        // 0x80078E7C: sw          $ra, 0x14($sp)
        MEM_W(0X14, ctx->r29) = ctx->r31;
            goto L_80078EBC;
    }
    // 0x80078E7C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80078E80: addiu       $a0, $zero, 0x45B
    ctx->r4 = ADD32(0, 0X45B);
    // 0x80078E84: jal         0x802A14C0
    // 0x80078E88: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    LOOKUP_FUNC(0x802A14C0)(rdram, ctx);
        goto after_0;
    // 0x80078E88: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_0:
    // 0x80078E8C: lui         $t8, 0x8009
    ctx->r24 = S32(0X8009 << 16);
    // 0x80078E90: lw          $t8, 0x3B20($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X3B20);
    // 0x80078E94: nop

    // 0x80078E98: lw          $t9, 0xB4($t8)
    ctx->r25 = MEM_W(ctx->r24, 0XB4);
    // 0x80078E9C: nop

    // 0x80078EA0: lw          $t0, 0x24($t9)
    ctx->r8 = MEM_W(ctx->r25, 0X24);
    // 0x80078EA4: nop

    // 0x80078EA8: lbu         $a0, 0x0($t0)
    ctx->r4 = MEM_BU(ctx->r8, 0X0);
    // 0x80078EAC: jal         0x80079F98
    // 0x80078EB0: nop

    func_80079F98(rdram, ctx);
        goto after_1;
    // 0x80078EB0: nop

    after_1:
    // 0x80078EB4: b           L_80078EC8
    // 0x80078EB8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80078EC8;
    // 0x80078EB8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80078EBC:
    // 0x80078EBC: jal         0x80078EE4
    // 0x80078EC0: nop

    func_80078EE4(rdram, ctx);
        goto after_2;
    // 0x80078EC0: nop

    after_2:
    // 0x80078EC4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80078EC8:
    // 0x80078EC8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80078ECC: jr          $ra
    // 0x80078ED0: nop

    return;
    // 0x80078ED0: nop

;}
RECOMP_FUNC void func_80078ED4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80078ED4: jr          $ra
    // 0x80078ED8: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    return;
    // 0x80078ED8: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
;}
RECOMP_FUNC void func_80078EDC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80078EDC: jr          $ra
    // 0x80078EE0: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    return;
    // 0x80078EE0: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
;}
RECOMP_FUNC void func_80078EE4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80078EE4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80078EE8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80078EEC: addiu       $a0, $zero, 0x45E
    ctx->r4 = ADD32(0, 0X45E);
    // 0x80078EF0: jal         0x802A14C0
    // 0x80078EF4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    LOOKUP_FUNC(0x802A14C0)(rdram, ctx);
        goto after_0;
    // 0x80078EF4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_0:
    // 0x80078EF8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80078EFC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80078F00: jr          $ra
    // 0x80078F04: nop

    return;
    // 0x80078F04: nop

;}
