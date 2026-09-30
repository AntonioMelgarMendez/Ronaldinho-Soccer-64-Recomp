#include "iss64_recomp.h"
#include "funcs.h"

RECOMP_FUNC void func_8007639C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8007639C: lui         $t6, 0x8010
    ctx->r14 = S32(0X8010 << 16);
    // 0x800763A0: lhu         $t6, 0x522A($t6)
    ctx->r14 = MEM_HU(ctx->r14, 0X522A);
    // 0x800763A4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800763A8: andi        $t7, $t6, 0x7
    ctx->r15 = ctx->r14 & 0X7;
    // 0x800763AC: addiu       $t8, $t7, -0x1
    ctx->r24 = ADD32(ctx->r15, -0X1);
    // 0x800763B0: sltiu       $at, $t8, 0x5
    ctx->r1 = ctx->r24 < 0X5 ? 1 : 0;
    // 0x800763B4: beq         $at, $zero, L_8007643C
    if (ctx->r1 == 0) {
        // 0x800763B8: sw          $ra, 0x14($sp)
        MEM_W(0X14, ctx->r29) = ctx->r31;
            goto L_8007643C;
    }
    // 0x800763B8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800763BC: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x800763C0: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x800763C4: addu        $at, $at, $t8
    gpr jr_addend_800763D0 = ctx->r24;
    ctx->r1 = ADD32(ctx->r1, ctx->r24);
    // 0x800763C8: lw          $t8, -0x530C($at)
    ctx->r24 = ADD32(ctx->r1, -0X530C);
    // 0x800763CC: nop

    // 0x800763D0: jr          $t8
    // 0x800763D4: nop

    switch (jr_addend_800763D0 >> 2) {
        case 0: goto L_800763D8; break;
        case 1: goto L_800763EC; break;
        case 2: goto L_80076400; break;
        case 3: goto L_80076414; break;
        case 4: goto L_80076428; break;
        default: switch_error(__func__, 0x800763D0, 0x800DACF4);
    }
    // 0x800763D4: nop

L_800763D8:
    // 0x800763D8: addiu       $a0, $zero, 0x5BD
    ctx->r4 = ADD32(0, 0X5BD);
    // 0x800763DC: jal         0x802A14C0
    // 0x800763E0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    LOOKUP_FUNC(0x802A14C0)(rdram, ctx);
        goto after_0;
    // 0x800763E0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_0:
    // 0x800763E4: b           L_8007644C
    // 0x800763E8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_8007644C;
    // 0x800763E8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_800763EC:
    // 0x800763EC: addiu       $a0, $zero, 0x560
    ctx->r4 = ADD32(0, 0X560);
    // 0x800763F0: jal         0x802A14C0
    // 0x800763F4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    LOOKUP_FUNC(0x802A14C0)(rdram, ctx);
        goto after_1;
    // 0x800763F4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_1:
    // 0x800763F8: b           L_8007644C
    // 0x800763FC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_8007644C;
    // 0x800763FC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80076400:
    // 0x80076400: addiu       $a0, $zero, 0x5BE
    ctx->r4 = ADD32(0, 0X5BE);
    // 0x80076404: jal         0x802A14C0
    // 0x80076408: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    LOOKUP_FUNC(0x802A14C0)(rdram, ctx);
        goto after_2;
    // 0x80076408: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_2:
    // 0x8007640C: b           L_8007644C
    // 0x80076410: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_8007644C;
    // 0x80076410: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80076414:
    // 0x80076414: addiu       $a0, $zero, 0x5C8
    ctx->r4 = ADD32(0, 0X5C8);
    // 0x80076418: jal         0x802A14C0
    // 0x8007641C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    LOOKUP_FUNC(0x802A14C0)(rdram, ctx);
        goto after_3;
    // 0x8007641C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_3:
    // 0x80076420: b           L_8007644C
    // 0x80076424: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_8007644C;
    // 0x80076424: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80076428:
    // 0x80076428: addiu       $a0, $zero, 0x5C7
    ctx->r4 = ADD32(0, 0X5C7);
    // 0x8007642C: jal         0x802A14C0
    // 0x80076430: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    LOOKUP_FUNC(0x802A14C0)(rdram, ctx);
        goto after_4;
    // 0x80076430: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_4:
    // 0x80076434: b           L_8007644C
    // 0x80076438: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_8007644C;
    // 0x80076438: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8007643C:
    // 0x8007643C: addiu       $a0, $zero, 0x55F
    ctx->r4 = ADD32(0, 0X55F);
    // 0x80076440: jal         0x802A14C0
    // 0x80076444: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    LOOKUP_FUNC(0x802A14C0)(rdram, ctx);
        goto after_5;
    // 0x80076444: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_5:
    // 0x80076448: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8007644C:
    // 0x8007644C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80076450: jr          $ra
    // 0x80076454: nop

    return;
    // 0x80076454: nop

;}
RECOMP_FUNC void func_80076458(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80076458: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8007645C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80076460: jal         0x802A1744
    // 0x80076464: nop

    LOOKUP_FUNC(0x802A1744)(rdram, ctx);
        goto after_0;
    // 0x80076464: nop

    after_0:
    // 0x80076468: slti        $at, $v0, 0x3
    ctx->r1 = SIGNED(ctx->r2) < 0X3 ? 1 : 0;
    // 0x8007646C: beq         $at, $zero, L_8007647C
    if (ctx->r1 == 0) {
        // 0x80076470: addiu       $a0, $zero, 0x42B
        ctx->r4 = ADD32(0, 0X42B);
            goto L_8007647C;
    }
    // 0x80076470: addiu       $a0, $zero, 0x42B
    ctx->r4 = ADD32(0, 0X42B);
    // 0x80076474: jal         0x802A14C0
    // 0x80076478: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    LOOKUP_FUNC(0x802A14C0)(rdram, ctx);
        goto after_1;
    // 0x80076478: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_1:
L_8007647C:
    // 0x8007647C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80076480: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80076484: jr          $ra
    // 0x80076488: nop

    return;
    // 0x80076488: nop

;}
RECOMP_FUNC void func_8007648C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8007648C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80076490: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80076494: jal         0x802A1744
    // 0x80076498: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    LOOKUP_FUNC(0x802A1744)(rdram, ctx);
        goto after_0;
    // 0x80076498: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x8007649C: slti        $at, $v0, 0x3
    ctx->r1 = SIGNED(ctx->r2) < 0X3 ? 1 : 0;
    // 0x800764A0: beq         $at, $zero, L_800764B0
    if (ctx->r1 == 0) {
        // 0x800764A4: addiu       $a0, $zero, 0x4C4
        ctx->r4 = ADD32(0, 0X4C4);
            goto L_800764B0;
    }
    // 0x800764A4: addiu       $a0, $zero, 0x4C4
    ctx->r4 = ADD32(0, 0X4C4);
    // 0x800764A8: jal         0x802A14C0
    // 0x800764AC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    LOOKUP_FUNC(0x802A14C0)(rdram, ctx);
        goto after_1;
    // 0x800764AC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_1:
L_800764B0:
    // 0x800764B0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800764B4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800764B8: jr          $ra
    // 0x800764BC: nop

    return;
    // 0x800764BC: nop

;}
RECOMP_FUNC void func_800764C8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800764C8: lui         $v1, 0x802C
    ctx->r3 = S32(0X802C << 16);
    // 0x800764CC: addiu       $v1, $v1, 0x3A3C
    ctx->r3 = ADD32(ctx->r3, 0X3A3C);
    // 0x800764D0: lbu         $t6, 0x0($v1)
    ctx->r14 = MEM_BU(ctx->r3, 0X0);
    // 0x800764D4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800764D8: addiu       $t7, $t6, 0x1
    ctx->r15 = ADD32(ctx->r14, 0X1);
    // 0x800764DC: andi        $v0, $t7, 0xFF
    ctx->r2 = ctx->r15 & 0XFF;
    // 0x800764E0: slti        $at, $v0, 0x4
    ctx->r1 = SIGNED(ctx->r2) < 0X4 ? 1 : 0;
    // 0x800764E4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800764E8: or          $a1, $a0, $zero
    ctx->r5 = ctx->r4 | 0;
    // 0x800764EC: bne         $at, $zero, L_800764FC
    if (ctx->r1 != 0) {
        // 0x800764F0: sb          $t7, 0x0($v1)
        MEM_B(0X0, ctx->r3) = ctx->r15;
            goto L_800764FC;
    }
    // 0x800764F0: sb          $t7, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r15;
    // 0x800764F4: sb          $zero, 0x0($v1)
    MEM_B(0X0, ctx->r3) = 0;
    // 0x800764F8: andi        $v0, $zero, 0xFF
    ctx->r2 = 0 & 0XFF;
L_800764FC:
    // 0x800764FC: lui         $a0, 0x802C
    ctx->r4 = S32(0X802C << 16);
    // 0x80076500: lbu         $a0, 0x3A3D($a0)
    ctx->r4 = MEM_BU(ctx->r4, 0X3A3D);
    // 0x80076504: addiu       $t8, $v0, 0x1
    ctx->r24 = ADD32(ctx->r2, 0X1);
    // 0x80076508: bne         $a0, $v0, L_8007651C
    if (ctx->r4 != ctx->r2) {
        // 0x8007650C: slti        $at, $a0, 0x4
        ctx->r1 = SIGNED(ctx->r4) < 0X4 ? 1 : 0;
            goto L_8007651C;
    }
    // 0x8007650C: slti        $at, $a0, 0x4
    ctx->r1 = SIGNED(ctx->r4) < 0X4 ? 1 : 0;
    // 0x80076510: bne         $at, $zero, L_8007651C
    if (ctx->r1 != 0) {
        // 0x80076514: sb          $t8, 0x0($v1)
        MEM_B(0X0, ctx->r3) = ctx->r24;
            goto L_8007651C;
    }
    // 0x80076514: sb          $t8, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r24;
    // 0x80076518: sb          $zero, 0x0($v1)
    MEM_B(0X0, ctx->r3) = 0;
L_8007651C:
    // 0x8007651C: lbu         $v0, 0x0($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X0);
    // 0x80076520: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80076524: beq         $v0, $zero, L_80076554
    if (ctx->r2 == 0) {
        // 0x80076528: addiu       $a0, $zero, 0x5B4
        ctx->r4 = ADD32(0, 0X5B4);
            goto L_80076554;
    }
    // 0x80076528: addiu       $a0, $zero, 0x5B4
    ctx->r4 = ADD32(0, 0X5B4);
    // 0x8007652C: beq         $v0, $at, L_80076564
    if (ctx->r2 == ctx->r1) {
        // 0x80076530: addiu       $a0, $zero, 0x5B5
        ctx->r4 = ADD32(0, 0X5B5);
            goto L_80076564;
    }
    // 0x80076530: addiu       $a0, $zero, 0x5B5
    ctx->r4 = ADD32(0, 0X5B5);
    // 0x80076534: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x80076538: beq         $v0, $at, L_80076574
    if (ctx->r2 == ctx->r1) {
        // 0x8007653C: addiu       $a0, $zero, 0x5B7
        ctx->r4 = ADD32(0, 0X5B7);
            goto L_80076574;
    }
    // 0x8007653C: addiu       $a0, $zero, 0x5B7
    ctx->r4 = ADD32(0, 0X5B7);
    // 0x80076540: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x80076544: beq         $v0, $at, L_80076584
    if (ctx->r2 == ctx->r1) {
        // 0x80076548: nop
    
            goto L_80076584;
    }
    // 0x80076548: nop

    // 0x8007654C: b           L_8007659C
    // 0x80076550: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_8007659C;
    // 0x80076550: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80076554:
    // 0x80076554: jal         0x802A14C0
    // 0x80076558: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    LOOKUP_FUNC(0x802A14C0)(rdram, ctx);
        goto after_0;
    // 0x80076558: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_0:
    // 0x8007655C: b           L_8007659C
    // 0x80076560: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_8007659C;
    // 0x80076560: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80076564:
    // 0x80076564: jal         0x802A14C0
    // 0x80076568: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    LOOKUP_FUNC(0x802A14C0)(rdram, ctx);
        goto after_1;
    // 0x80076568: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_1:
    // 0x8007656C: b           L_8007659C
    // 0x80076570: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_8007659C;
    // 0x80076570: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80076574:
    // 0x80076574: jal         0x802A14C0
    // 0x80076578: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    LOOKUP_FUNC(0x802A14C0)(rdram, ctx);
        goto after_2;
    // 0x80076578: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_2:
    // 0x8007657C: b           L_8007659C
    // 0x80076580: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_8007659C;
    // 0x80076580: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80076584:
    // 0x80076584: jal         0x80079FD0
    // 0x80076588: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    func_80079FD0(rdram, ctx);
        goto after_3;
    // 0x80076588: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    after_3:
    // 0x8007658C: addiu       $a0, $zero, 0x439
    ctx->r4 = ADD32(0, 0X439);
    // 0x80076590: jal         0x802A14C0
    // 0x80076594: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    LOOKUP_FUNC(0x802A14C0)(rdram, ctx);
        goto after_4;
    // 0x80076594: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_4:
    // 0x80076598: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8007659C:
    // 0x8007659C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800765A0: jr          $ra
    // 0x800765A4: nop

    return;
    // 0x800765A4: nop

;}
RECOMP_FUNC void func_800765A8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800765A8: lui         $t6, 0x8010
    ctx->r14 = S32(0X8010 << 16);
    // 0x800765AC: lhu         $t6, 0x522A($t6)
    ctx->r14 = MEM_HU(ctx->r14, 0X522A);
    // 0x800765B0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800765B4: andi        $t7, $t6, 0x1
    ctx->r15 = ctx->r14 & 0X1;
    // 0x800765B8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800765BC: beq         $t7, $zero, L_800765D8
    if (ctx->r15 == 0) {
        // 0x800765C0: sw          $a0, 0x18($sp)
        MEM_W(0X18, ctx->r29) = ctx->r4;
            goto L_800765D8;
    }
    // 0x800765C0: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x800765C4: addiu       $a0, $zero, 0x40B
    ctx->r4 = ADD32(0, 0X40B);
    // 0x800765C8: jal         0x802A14C0
    // 0x800765CC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    LOOKUP_FUNC(0x802A14C0)(rdram, ctx);
        goto after_0;
    // 0x800765CC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_0:
    // 0x800765D0: b           L_800765E8
    // 0x800765D4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_800765E8;
    // 0x800765D4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_800765D8:
    // 0x800765D8: addiu       $a0, $zero, 0x5D1
    ctx->r4 = ADD32(0, 0X5D1);
    // 0x800765DC: jal         0x802A14C0
    // 0x800765E0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    LOOKUP_FUNC(0x802A14C0)(rdram, ctx);
        goto after_1;
    // 0x800765E0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_1:
    // 0x800765E4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_800765E8:
    // 0x800765E8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800765EC: jr          $ra
    // 0x800765F0: nop

    return;
    // 0x800765F0: nop

;}
RECOMP_FUNC void func_800765F4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800765F4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800765F8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800765FC: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x80076600: lw          $t7, 0xC8($a0)
    ctx->r15 = MEM_W(ctx->r4, 0XC8);
    // 0x80076604: nop

    // 0x80076608: lbu         $a0, 0x7($t7)
    ctx->r4 = MEM_BU(ctx->r15, 0X7);
    // 0x8007660C: jal         0x8007A1CC
    // 0x80076610: nop

    func_8007A1CC(rdram, ctx);
        goto after_0;
    // 0x80076610: nop

    after_0:
    // 0x80076614: addiu       $a0, $zero, 0x57C
    ctx->r4 = ADD32(0, 0X57C);
    // 0x80076618: jal         0x802A14C0
    // 0x8007661C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    LOOKUP_FUNC(0x802A14C0)(rdram, ctx);
        goto after_1;
    // 0x8007661C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_1:
    // 0x80076620: lw          $t8, 0x18($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X18);
    // 0x80076624: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x80076628: lw          $t9, 0xD4($t8)
    ctx->r25 = MEM_W(ctx->r24, 0XD4);
    // 0x8007662C: lui         $t1, 0x8010
    ctx->r9 = S32(0X8010 << 16);
    // 0x80076630: lbu         $t0, 0x4($t9)
    ctx->r8 = MEM_BU(ctx->r25, 0X4);
    // 0x80076634: lui         $v0, 0x8010
    ctx->r2 = S32(0X8010 << 16);
    // 0x80076638: bne         $v1, $t0, L_80076674
    if (ctx->r3 != ctx->r8) {
        // 0x8007663C: nop
    
            goto L_80076674;
    }
    // 0x8007663C: nop

    // 0x80076640: lhu         $t1, 0x522A($t1)
    ctx->r9 = MEM_HU(ctx->r9, 0X522A);
    // 0x80076644: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80076648: andi        $t2, $t1, 0x1
    ctx->r10 = ctx->r9 & 0X1;
    // 0x8007664C: beq         $t2, $zero, L_80076664
    if (ctx->r10 == 0) {
        // 0x80076650: addiu       $a0, $zero, 0x5DC
        ctx->r4 = ADD32(0, 0X5DC);
            goto L_80076664;
    }
    // 0x80076650: addiu       $a0, $zero, 0x5DC
    ctx->r4 = ADD32(0, 0X5DC);
    // 0x80076654: jal         0x802A14C0
    // 0x80076658: addiu       $a0, $zero, 0x57D
    ctx->r4 = ADD32(0, 0X57D);
    LOOKUP_FUNC(0x802A14C0)(rdram, ctx);
        goto after_2;
    // 0x80076658: addiu       $a0, $zero, 0x57D
    ctx->r4 = ADD32(0, 0X57D);
    after_2:
    // 0x8007665C: b           L_800766EC
    // 0x80076660: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_800766EC;
    // 0x80076660: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80076664:
    // 0x80076664: jal         0x802A14C0
    // 0x80076668: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    LOOKUP_FUNC(0x802A14C0)(rdram, ctx);
        goto after_3;
    // 0x80076668: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_3:
    // 0x8007666C: b           L_800766EC
    // 0x80076670: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_800766EC;
    // 0x80076670: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80076674:
    // 0x80076674: lhu         $v0, 0x522A($v0)
    ctx->r2 = MEM_HU(ctx->r2, 0X522A);
    // 0x80076678: addiu       $a0, $zero, 0x57D
    ctx->r4 = ADD32(0, 0X57D);
    // 0x8007667C: andi        $t3, $v0, 0x3
    ctx->r11 = ctx->r2 & 0X3;
    // 0x80076680: beq         $t3, $zero, L_800766B0
    if (ctx->r11 == 0) {
        // 0x80076684: nop
    
            goto L_800766B0;
    }
    // 0x80076684: nop

    // 0x80076688: beq         $t3, $v1, L_800766C0
    if (ctx->r11 == ctx->r3) {
        // 0x8007668C: addiu       $a0, $zero, 0x57E
        ctx->r4 = ADD32(0, 0X57E);
            goto L_800766C0;
    }
    // 0x8007668C: addiu       $a0, $zero, 0x57E
    ctx->r4 = ADD32(0, 0X57E);
    // 0x80076690: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x80076694: beq         $t3, $at, L_800766D0
    if (ctx->r11 == ctx->r1) {
        // 0x80076698: addiu       $a0, $zero, 0x57F
        ctx->r4 = ADD32(0, 0X57F);
            goto L_800766D0;
    }
    // 0x80076698: addiu       $a0, $zero, 0x57F
    ctx->r4 = ADD32(0, 0X57F);
    // 0x8007669C: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x800766A0: beq         $t3, $at, L_800766E0
    if (ctx->r11 == ctx->r1) {
        // 0x800766A4: addiu       $a0, $zero, 0x580
        ctx->r4 = ADD32(0, 0X580);
            goto L_800766E0;
    }
    // 0x800766A4: addiu       $a0, $zero, 0x580
    ctx->r4 = ADD32(0, 0X580);
    // 0x800766A8: b           L_800766EC
    // 0x800766AC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_800766EC;
    // 0x800766AC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_800766B0:
    // 0x800766B0: jal         0x802A14C0
    // 0x800766B4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    LOOKUP_FUNC(0x802A14C0)(rdram, ctx);
        goto after_4;
    // 0x800766B4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_4:
    // 0x800766B8: b           L_800766EC
    // 0x800766BC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_800766EC;
    // 0x800766BC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_800766C0:
    // 0x800766C0: jal         0x802A14C0
    // 0x800766C4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    LOOKUP_FUNC(0x802A14C0)(rdram, ctx);
        goto after_5;
    // 0x800766C4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_5:
    // 0x800766C8: b           L_800766EC
    // 0x800766CC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_800766EC;
    // 0x800766CC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_800766D0:
    // 0x800766D0: jal         0x802A14C0
    // 0x800766D4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    LOOKUP_FUNC(0x802A14C0)(rdram, ctx);
        goto after_6;
    // 0x800766D4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_6:
    // 0x800766D8: b           L_800766EC
    // 0x800766DC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_800766EC;
    // 0x800766DC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_800766E0:
    // 0x800766E0: jal         0x802A14C0
    // 0x800766E4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    LOOKUP_FUNC(0x802A14C0)(rdram, ctx);
        goto after_7;
    // 0x800766E4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_7:
    // 0x800766E8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_800766EC:
    // 0x800766EC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800766F0: jr          $ra
    // 0x800766F4: nop

    return;
    // 0x800766F4: nop

;}
RECOMP_FUNC void func_800766F8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800766F8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800766FC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80076700: jal         0x8007840C
    // 0x80076704: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_8007840C(rdram, ctx);
        goto after_0;
    // 0x80076704: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x80076708: lui         $v0, 0x8010
    ctx->r2 = S32(0X8010 << 16);
    // 0x8007670C: lhu         $v0, 0x522A($v0)
    ctx->r2 = MEM_HU(ctx->r2, 0X522A);
    // 0x80076710: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x80076714: andi        $t6, $v0, 0x1
    ctx->r14 = ctx->r2 & 0X1;
    // 0x80076718: beq         $t6, $zero, L_80076730
    if (ctx->r14 == 0) {
        // 0x8007671C: addiu       $at, $zero, 0x1
        ctx->r1 = ADD32(0, 0X1);
            goto L_80076730;
    }
    // 0x8007671C: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80076720: beq         $t6, $at, L_80076778
    if (ctx->r14 == ctx->r1) {
        // 0x80076724: addiu       $a0, $zero, 0x582
        ctx->r4 = ADD32(0, 0X582);
            goto L_80076778;
    }
    // 0x80076724: addiu       $a0, $zero, 0x582
    ctx->r4 = ADD32(0, 0X582);
    // 0x80076728: b           L_80076784
    // 0x8007672C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80076784;
    // 0x8007672C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80076730:
    // 0x80076730: lw          $t7, 0xD4($a0)
    ctx->r15 = MEM_W(ctx->r4, 0XD4);
    // 0x80076734: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80076738: lbu         $t8, 0x4($t7)
    ctx->r24 = MEM_BU(ctx->r15, 0X4);
    // 0x8007673C: nop

    // 0x80076740: andi        $t9, $t8, 0x3
    ctx->r25 = ctx->r24 & 0X3;
    // 0x80076744: beq         $t9, $zero, L_8007675C
    if (ctx->r25 == 0) {
        // 0x80076748: nop
    
            goto L_8007675C;
    }
    // 0x80076748: nop

    // 0x8007674C: jal         0x80079EDC
    // 0x80076750: nop

    func_80079EDC(rdram, ctx);
        goto after_1;
    // 0x80076750: nop

    after_1:
    // 0x80076754: b           L_80076768
    // 0x80076758: addiu       $a0, $zero, 0x581
    ctx->r4 = ADD32(0, 0X581);
        goto L_80076768;
    // 0x80076758: addiu       $a0, $zero, 0x581
    ctx->r4 = ADD32(0, 0X581);
L_8007675C:
    // 0x8007675C: jal         0x802A14C0
    // 0x80076760: addiu       $a0, $zero, 0x5C2
    ctx->r4 = ADD32(0, 0X5C2);
    LOOKUP_FUNC(0x802A14C0)(rdram, ctx);
        goto after_2;
    // 0x80076760: addiu       $a0, $zero, 0x5C2
    ctx->r4 = ADD32(0, 0X5C2);
    after_2:
    // 0x80076764: addiu       $a0, $zero, 0x581
    ctx->r4 = ADD32(0, 0X581);
L_80076768:
    // 0x80076768: jal         0x802A14C0
    // 0x8007676C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    LOOKUP_FUNC(0x802A14C0)(rdram, ctx);
        goto after_3;
    // 0x8007676C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_3:
    // 0x80076770: b           L_80076784
    // 0x80076774: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80076784;
    // 0x80076774: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80076778:
    // 0x80076778: jal         0x802A14C0
    // 0x8007677C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    LOOKUP_FUNC(0x802A14C0)(rdram, ctx);
        goto after_4;
    // 0x8007677C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_4:
    // 0x80076780: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80076784:
    // 0x80076784: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80076788: jr          $ra
    // 0x8007678C: nop

    return;
    // 0x8007678C: nop

;}
RECOMP_FUNC void func_80076790(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80076790: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80076794: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80076798: jal         0x8007840C
    // 0x8007679C: nop

    func_8007840C(rdram, ctx);
        goto after_0;
    // 0x8007679C: nop

    after_0:
    // 0x800767A0: addiu       $a0, $zero, 0x584
    ctx->r4 = ADD32(0, 0X584);
    // 0x800767A4: jal         0x802A14C0
    // 0x800767A8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    LOOKUP_FUNC(0x802A14C0)(rdram, ctx);
        goto after_1;
    // 0x800767A8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_1:
    // 0x800767AC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800767B0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800767B4: jr          $ra
    // 0x800767B8: nop

    return;
    // 0x800767B8: nop

;}
RECOMP_FUNC void func_800767BC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800767BC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800767C0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800767C4: addiu       $a0, $zero, 0x58D
    ctx->r4 = ADD32(0, 0X58D);
    // 0x800767C8: jal         0x802A14C0
    // 0x800767CC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    LOOKUP_FUNC(0x802A14C0)(rdram, ctx);
        goto after_0;
    // 0x800767CC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_0:
    // 0x800767D0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800767D4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800767D8: jr          $ra
    // 0x800767DC: nop

    return;
    // 0x800767DC: nop

;}
RECOMP_FUNC void func_800767E0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800767E0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800767E4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800767E8: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x800767EC: addiu       $a0, $zero, 0x57C
    ctx->r4 = ADD32(0, 0X57C);
    // 0x800767F0: jal         0x802A14C0
    // 0x800767F4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    LOOKUP_FUNC(0x802A14C0)(rdram, ctx);
        goto after_0;
    // 0x800767F4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_0:
    // 0x800767F8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800767FC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80076800: jr          $ra
    // 0x80076804: nop

    return;
    // 0x80076804: nop

;}
RECOMP_FUNC void func_80076808(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80076808: lui         $t6, 0x8010
    ctx->r14 = S32(0X8010 << 16);
    // 0x8007680C: lhu         $t6, 0x522A($t6)
    ctx->r14 = MEM_HU(ctx->r14, 0X522A);
    // 0x80076810: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80076814: andi        $t7, $t6, 0x1
    ctx->r15 = ctx->r14 & 0X1;
    // 0x80076818: beq         $t7, $zero, L_80076834
    if (ctx->r15 == 0) {
        // 0x8007681C: sw          $ra, 0x14($sp)
        MEM_W(0X14, ctx->r29) = ctx->r31;
            goto L_80076834;
    }
    // 0x8007681C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80076820: addiu       $a0, $zero, 0x58E
    ctx->r4 = ADD32(0, 0X58E);
    // 0x80076824: jal         0x802A14C0
    // 0x80076828: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    LOOKUP_FUNC(0x802A14C0)(rdram, ctx);
        goto after_0;
    // 0x80076828: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_0:
    // 0x8007682C: b           L_80076844
    // 0x80076830: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80076844;
    // 0x80076830: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80076834:
    // 0x80076834: addiu       $a0, $zero, 0x5E6
    ctx->r4 = ADD32(0, 0X5E6);
    // 0x80076838: jal         0x802A14C0
    // 0x8007683C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    LOOKUP_FUNC(0x802A14C0)(rdram, ctx);
        goto after_1;
    // 0x8007683C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_1:
    // 0x80076840: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80076844:
    // 0x80076844: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80076848: jr          $ra
    // 0x8007684C: nop

    return;
    // 0x8007684C: nop

;}
RECOMP_FUNC void func_80076850(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80076850: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80076854: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80076858: addiu       $a0, $zero, 0x582
    ctx->r4 = ADD32(0, 0X582);
    // 0x8007685C: jal         0x802A14C0
    // 0x80076860: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    LOOKUP_FUNC(0x802A14C0)(rdram, ctx);
        goto after_0;
    // 0x80076860: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_0:
    // 0x80076864: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80076868: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8007686C: jr          $ra
    // 0x80076870: nop

    return;
    // 0x80076870: nop

;}
RECOMP_FUNC void func_800768A0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800768A0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800768A4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800768A8: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x800768AC: lw          $t7, 0xC8($a0)
    ctx->r15 = MEM_W(ctx->r4, 0XC8);
    // 0x800768B0: nop

    // 0x800768B4: lbu         $a0, 0x7($t7)
    ctx->r4 = MEM_BU(ctx->r15, 0X7);
    // 0x800768B8: jal         0x8007A1CC
    // 0x800768BC: nop

    func_8007A1CC(rdram, ctx);
        goto after_0;
    // 0x800768BC: nop

    after_0:
    // 0x800768C0: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x800768C4: jal         0x80079FD0
    // 0x800768C8: nop

    func_80079FD0(rdram, ctx);
        goto after_1;
    // 0x800768C8: nop

    after_1:
    // 0x800768CC: addiu       $a0, $zero, 0x590
    ctx->r4 = ADD32(0, 0X590);
    // 0x800768D0: jal         0x802A14C0
    // 0x800768D4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    LOOKUP_FUNC(0x802A14C0)(rdram, ctx);
        goto after_2;
    // 0x800768D4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_2:
    // 0x800768D8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800768DC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800768E0: jr          $ra
    // 0x800768E4: nop

    return;
    // 0x800768E4: nop

;}
RECOMP_FUNC void func_800768E8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800768E8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800768EC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800768F0: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x800768F4: addiu       $a0, $zero, 0x591
    ctx->r4 = ADD32(0, 0X591);
    // 0x800768F8: jal         0x802A14C0
    // 0x800768FC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    LOOKUP_FUNC(0x802A14C0)(rdram, ctx);
        goto after_0;
    // 0x800768FC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_0:
    // 0x80076900: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80076904: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80076908: jr          $ra
    // 0x8007690C: nop

    return;
    // 0x8007690C: nop

;}
RECOMP_FUNC void func_80076910(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80076910: lui         $t6, 0x8010
    ctx->r14 = S32(0X8010 << 16);
    // 0x80076914: lhu         $t6, 0x522A($t6)
    ctx->r14 = MEM_HU(ctx->r14, 0X522A);
    // 0x80076918: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8007691C: andi        $t7, $t6, 0x1
    ctx->r15 = ctx->r14 & 0X1;
    // 0x80076920: beq         $t7, $zero, L_8007693C
    if (ctx->r15 == 0) {
        // 0x80076924: sw          $ra, 0x14($sp)
        MEM_W(0X14, ctx->r29) = ctx->r31;
            goto L_8007693C;
    }
    // 0x80076924: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80076928: addiu       $a0, $zero, 0x592
    ctx->r4 = ADD32(0, 0X592);
    // 0x8007692C: jal         0x802A14C0
    // 0x80076930: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    LOOKUP_FUNC(0x802A14C0)(rdram, ctx);
        goto after_0;
    // 0x80076930: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_0:
    // 0x80076934: b           L_8007694C
    // 0x80076938: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_8007694C;
    // 0x80076938: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8007693C:
    // 0x8007693C: addiu       $a0, $zero, 0x57F
    ctx->r4 = ADD32(0, 0X57F);
    // 0x80076940: jal         0x802A14C0
    // 0x80076944: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    LOOKUP_FUNC(0x802A14C0)(rdram, ctx);
        goto after_1;
    // 0x80076944: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_1:
    // 0x80076948: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8007694C:
    // 0x8007694C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80076950: jr          $ra
    // 0x80076954: nop

    return;
    // 0x80076954: nop

;}
RECOMP_FUNC void func_80076958(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80076958: lui         $v0, 0x8010
    ctx->r2 = S32(0X8010 << 16);
    // 0x8007695C: lhu         $v0, 0x522A($v0)
    ctx->r2 = MEM_HU(ctx->r2, 0X522A);
    // 0x80076960: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80076964: andi        $t6, $v0, 0x3
    ctx->r14 = ctx->r2 & 0X3;
    // 0x80076968: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8007696C: beq         $t6, $zero, L_80076988
    if (ctx->r14 == 0) {
        // 0x80076970: sw          $a0, 0x18($sp)
        MEM_W(0X18, ctx->r29) = ctx->r4;
            goto L_80076988;
    }
    // 0x80076970: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x80076974: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80076978: beq         $t6, $at, L_8007699C
    if (ctx->r14 == ctx->r1) {
        // 0x8007697C: addiu       $a0, $zero, 0x5E8
        ctx->r4 = ADD32(0, 0X5E8);
            goto L_8007699C;
    }
    // 0x8007697C: addiu       $a0, $zero, 0x5E8
    ctx->r4 = ADD32(0, 0X5E8);
    // 0x80076980: b           L_800769AC
    // 0x80076984: addiu       $a0, $zero, 0x483
    ctx->r4 = ADD32(0, 0X483);
        goto L_800769AC;
    // 0x80076984: addiu       $a0, $zero, 0x483
    ctx->r4 = ADD32(0, 0X483);
L_80076988:
    // 0x80076988: addiu       $a0, $zero, 0x486
    ctx->r4 = ADD32(0, 0X486);
    // 0x8007698C: jal         0x802A14C0
    // 0x80076990: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    LOOKUP_FUNC(0x802A14C0)(rdram, ctx);
        goto after_0;
    // 0x80076990: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_0:
    // 0x80076994: b           L_800769B8
    // 0x80076998: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_800769B8;
    // 0x80076998: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8007699C:
    // 0x8007699C: jal         0x802A14C0
    // 0x800769A0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    LOOKUP_FUNC(0x802A14C0)(rdram, ctx);
        goto after_1;
    // 0x800769A0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_1:
    // 0x800769A4: b           L_800769B8
    // 0x800769A8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_800769B8;
    // 0x800769A8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_800769AC:
    // 0x800769AC: jal         0x802A14C0
    // 0x800769B0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    LOOKUP_FUNC(0x802A14C0)(rdram, ctx);
        goto after_2;
    // 0x800769B0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_2:
    // 0x800769B4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_800769B8:
    // 0x800769B8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800769BC: jr          $ra
    // 0x800769C0: nop

    return;
    // 0x800769C0: nop

;}
RECOMP_FUNC void func_800769C4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800769C4: lui         $v0, 0x802C
    ctx->r2 = S32(0X802C << 16);
    // 0x800769C8: addiu       $v0, $v0, 0x3A3D
    ctx->r2 = ADD32(ctx->r2, 0X3A3D);
    // 0x800769CC: lbu         $t6, 0x0($v0)
    ctx->r14 = MEM_BU(ctx->r2, 0X0);
    // 0x800769D0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800769D4: addiu       $t7, $t6, 0x1
    ctx->r15 = ADD32(ctx->r14, 0X1);
    // 0x800769D8: andi        $v1, $t7, 0xFF
    ctx->r3 = ctx->r15 & 0XFF;
    // 0x800769DC: slti        $at, $v1, 0x3
    ctx->r1 = SIGNED(ctx->r3) < 0X3 ? 1 : 0;
    // 0x800769E0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800769E4: bne         $at, $zero, L_800769F4
    if (ctx->r1 != 0) {
        // 0x800769E8: sb          $t7, 0x0($v0)
        MEM_B(0X0, ctx->r2) = ctx->r15;
            goto L_800769F4;
    }
    // 0x800769E8: sb          $t7, 0x0($v0)
    MEM_B(0X0, ctx->r2) = ctx->r15;
    // 0x800769EC: sb          $zero, 0x0($v0)
    MEM_B(0X0, ctx->r2) = 0;
    // 0x800769F0: andi        $v1, $zero, 0xFF
    ctx->r3 = 0 & 0XFF;
L_800769F4:
    // 0x800769F4: lui         $a0, 0x802C
    ctx->r4 = S32(0X802C << 16);
    // 0x800769F8: lbu         $a0, 0x3A3C($a0)
    ctx->r4 = MEM_BU(ctx->r4, 0X3A3C);
    // 0x800769FC: addiu       $t8, $v1, 0x1
    ctx->r24 = ADD32(ctx->r3, 0X1);
    // 0x80076A00: bne         $v1, $a0, L_80076A18
    if (ctx->r3 != ctx->r4) {
        // 0x80076A04: andi        $t9, $t8, 0xFF
        ctx->r25 = ctx->r24 & 0XFF;
            goto L_80076A18;
    }
    // 0x80076A04: andi        $t9, $t8, 0xFF
    ctx->r25 = ctx->r24 & 0XFF;
    // 0x80076A08: slti        $at, $t9, 0x3
    ctx->r1 = SIGNED(ctx->r25) < 0X3 ? 1 : 0;
    // 0x80076A0C: bne         $at, $zero, L_80076A18
    if (ctx->r1 != 0) {
        // 0x80076A10: sb          $t8, 0x0($v0)
        MEM_B(0X0, ctx->r2) = ctx->r24;
            goto L_80076A18;
    }
    // 0x80076A10: sb          $t8, 0x0($v0)
    MEM_B(0X0, ctx->r2) = ctx->r24;
    // 0x80076A14: sb          $zero, 0x0($v0)
    MEM_B(0X0, ctx->r2) = 0;
L_80076A18:
    // 0x80076A18: beq         $a0, $zero, L_80076A40
    if (ctx->r4 == 0) {
        // 0x80076A1C: or          $a1, $zero, $zero
        ctx->r5 = 0 | 0;
            goto L_80076A40;
    }
    // 0x80076A1C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80076A20: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80076A24: beq         $a0, $at, L_80076A50
    if (ctx->r4 == ctx->r1) {
        // 0x80076A28: or          $a1, $zero, $zero
        ctx->r5 = 0 | 0;
            goto L_80076A50;
    }
    // 0x80076A28: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80076A2C: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x80076A30: beq         $a0, $at, L_80076A60
    if (ctx->r4 == ctx->r1) {
        // 0x80076A34: or          $a1, $zero, $zero
        ctx->r5 = 0 | 0;
            goto L_80076A60;
    }
    // 0x80076A34: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80076A38: b           L_80076A6C
    // 0x80076A3C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80076A6C;
    // 0x80076A3C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80076A40:
    // 0x80076A40: jal         0x802A14C0
    // 0x80076A44: addiu       $a0, $zero, 0x5B4
    ctx->r4 = ADD32(0, 0X5B4);
    LOOKUP_FUNC(0x802A14C0)(rdram, ctx);
        goto after_0;
    // 0x80076A44: addiu       $a0, $zero, 0x5B4
    ctx->r4 = ADD32(0, 0X5B4);
    after_0:
    // 0x80076A48: b           L_80076A6C
    // 0x80076A4C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80076A6C;
    // 0x80076A4C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80076A50:
    // 0x80076A50: jal         0x802A14C0
    // 0x80076A54: addiu       $a0, $zero, 0x5B5
    ctx->r4 = ADD32(0, 0X5B5);
    LOOKUP_FUNC(0x802A14C0)(rdram, ctx);
        goto after_1;
    // 0x80076A54: addiu       $a0, $zero, 0x5B5
    ctx->r4 = ADD32(0, 0X5B5);
    after_1:
    // 0x80076A58: b           L_80076A6C
    // 0x80076A5C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80076A6C;
    // 0x80076A5C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80076A60:
    // 0x80076A60: jal         0x802A14C0
    // 0x80076A64: addiu       $a0, $zero, 0x5B7
    ctx->r4 = ADD32(0, 0X5B7);
    LOOKUP_FUNC(0x802A14C0)(rdram, ctx);
        goto after_2;
    // 0x80076A64: addiu       $a0, $zero, 0x5B7
    ctx->r4 = ADD32(0, 0X5B7);
    after_2:
    // 0x80076A68: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80076A6C:
    // 0x80076A6C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80076A70: jr          $ra
    // 0x80076A74: nop

    return;
    // 0x80076A74: nop

;}
RECOMP_FUNC void func_80076A78(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80076A78: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80076A7C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80076A80: addiu       $a0, $zero, 0x416
    ctx->r4 = ADD32(0, 0X416);
    // 0x80076A84: jal         0x802A14C0
    // 0x80076A88: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    LOOKUP_FUNC(0x802A14C0)(rdram, ctx);
        goto after_0;
    // 0x80076A88: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_0:
    // 0x80076A8C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80076A90: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80076A94: jr          $ra
    // 0x80076A98: nop

    return;
    // 0x80076A98: nop

;}
RECOMP_FUNC void func_80076A9C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80076A9C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80076AA0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80076AA4: jal         0x802A1744
    // 0x80076AA8: nop

    LOOKUP_FUNC(0x802A1744)(rdram, ctx);
        goto after_0;
    // 0x80076AA8: nop

    after_0:
    // 0x80076AAC: slti        $at, $v0, 0x3
    ctx->r1 = SIGNED(ctx->r2) < 0X3 ? 1 : 0;
    // 0x80076AB0: beq         $at, $zero, L_80076B08
    if (ctx->r1 == 0) {
        // 0x80076AB4: lui         $t6, 0x802C
        ctx->r14 = S32(0X802C << 16);
            goto L_80076B08;
    }
    // 0x80076AB4: lui         $t6, 0x802C
    ctx->r14 = S32(0X802C << 16);
    // 0x80076AB8: lhu         $t6, 0x38D0($t6)
    ctx->r14 = MEM_HU(ctx->r14, 0X38D0);
    // 0x80076ABC: addiu       $a0, $zero, 0x593
    ctx->r4 = ADD32(0, 0X593);
    // 0x80076AC0: slti        $at, $t6, 0x96
    ctx->r1 = SIGNED(ctx->r14) < 0X96 ? 1 : 0;
    // 0x80076AC4: beq         $at, $zero, L_80076ADC
    if (ctx->r1 == 0) {
        // 0x80076AC8: lui         $t7, 0x8010
        ctx->r15 = S32(0X8010 << 16);
            goto L_80076ADC;
    }
    // 0x80076AC8: lui         $t7, 0x8010
    ctx->r15 = S32(0X8010 << 16);
    // 0x80076ACC: jal         0x802A14C0
    // 0x80076AD0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    LOOKUP_FUNC(0x802A14C0)(rdram, ctx);
        goto after_1;
    // 0x80076AD0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_1:
    // 0x80076AD4: b           L_80076B0C
    // 0x80076AD8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80076B0C;
    // 0x80076AD8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80076ADC:
    // 0x80076ADC: lhu         $t7, 0x522A($t7)
    ctx->r15 = MEM_HU(ctx->r15, 0X522A);
    // 0x80076AE0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80076AE4: andi        $t8, $t7, 0x1
    ctx->r24 = ctx->r15 & 0X1;
    // 0x80076AE8: beq         $t8, $zero, L_80076B00
    if (ctx->r24 == 0) {
        // 0x80076AEC: addiu       $a0, $zero, 0x4C6
        ctx->r4 = ADD32(0, 0X4C6);
            goto L_80076B00;
    }
    // 0x80076AEC: addiu       $a0, $zero, 0x4C6
    ctx->r4 = ADD32(0, 0X4C6);
    // 0x80076AF0: jal         0x802A14C0
    // 0x80076AF4: addiu       $a0, $zero, 0x593
    ctx->r4 = ADD32(0, 0X593);
    LOOKUP_FUNC(0x802A14C0)(rdram, ctx);
        goto after_2;
    // 0x80076AF4: addiu       $a0, $zero, 0x593
    ctx->r4 = ADD32(0, 0X593);
    after_2:
    // 0x80076AF8: b           L_80076B0C
    // 0x80076AFC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80076B0C;
    // 0x80076AFC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80076B00:
    // 0x80076B00: jal         0x802A14C0
    // 0x80076B04: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    LOOKUP_FUNC(0x802A14C0)(rdram, ctx);
        goto after_3;
    // 0x80076B04: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_3:
L_80076B08:
    // 0x80076B08: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80076B0C:
    // 0x80076B0C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80076B10: jr          $ra
    // 0x80076B14: nop

    return;
    // 0x80076B14: nop

;}
RECOMP_FUNC void func_80076B18(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80076B18: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80076B1C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80076B20: addiu       $a0, $zero, 0x44D
    ctx->r4 = ADD32(0, 0X44D);
    // 0x80076B24: jal         0x802A14C0
    // 0x80076B28: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    LOOKUP_FUNC(0x802A14C0)(rdram, ctx);
        goto after_0;
    // 0x80076B28: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_0:
    // 0x80076B2C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80076B30: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80076B34: jr          $ra
    // 0x80076B38: nop

    return;
    // 0x80076B38: nop

;}
RECOMP_FUNC void func_80076B3C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80076B3C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80076B40: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80076B44: jal         0x802A1744
    // 0x80076B48: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    LOOKUP_FUNC(0x802A1744)(rdram, ctx);
        goto after_0;
    // 0x80076B48: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x80076B4C: slti        $at, $v0, 0x3
    ctx->r1 = SIGNED(ctx->r2) < 0X3 ? 1 : 0;
    // 0x80076B50: beq         $at, $zero, L_80076B60
    if (ctx->r1 == 0) {
        // 0x80076B54: addiu       $a0, $zero, 0x440
        ctx->r4 = ADD32(0, 0X440);
            goto L_80076B60;
    }
    // 0x80076B54: addiu       $a0, $zero, 0x440
    ctx->r4 = ADD32(0, 0X440);
    // 0x80076B58: jal         0x802A14C0
    // 0x80076B5C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    LOOKUP_FUNC(0x802A14C0)(rdram, ctx);
        goto after_1;
    // 0x80076B5C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_1:
L_80076B60:
    // 0x80076B60: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80076B64: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80076B68: jr          $ra
    // 0x80076B6C: nop

    return;
    // 0x80076B6C: nop

;}
RECOMP_FUNC void func_80076B70(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80076B70: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80076B74: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80076B78: jal         0x802A1744
    // 0x80076B7C: nop

    LOOKUP_FUNC(0x802A1744)(rdram, ctx);
        goto after_0;
    // 0x80076B7C: nop

    after_0:
    // 0x80076B80: addiu       $a0, $zero, 0x417
    ctx->r4 = ADD32(0, 0X417);
    // 0x80076B84: jal         0x802A14C0
    // 0x80076B88: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    LOOKUP_FUNC(0x802A14C0)(rdram, ctx);
        goto after_1;
    // 0x80076B88: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_1:
    // 0x80076B8C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80076B90: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80076B94: jr          $ra
    // 0x80076B98: nop

    return;
    // 0x80076B98: nop

;}
RECOMP_FUNC void func_80076BA4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80076BA4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80076BA8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80076BAC: jal         0x80079FD0
    // 0x80076BB0: nop

    func_80079FD0(rdram, ctx);
        goto after_0;
    // 0x80076BB0: nop

    after_0:
    // 0x80076BB4: addiu       $a0, $zero, 0x460
    ctx->r4 = ADD32(0, 0X460);
    // 0x80076BB8: jal         0x802A14C0
    // 0x80076BBC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    LOOKUP_FUNC(0x802A14C0)(rdram, ctx);
        goto after_1;
    // 0x80076BBC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_1:
    // 0x80076BC0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80076BC4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80076BC8: jr          $ra
    // 0x80076BCC: nop

    return;
    // 0x80076BCC: nop

;}
RECOMP_FUNC void func_80076BD0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80076BD0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80076BD4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80076BD8: jal         0x802A1744
    // 0x80076BDC: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    LOOKUP_FUNC(0x802A1744)(rdram, ctx);
        goto after_0;
    // 0x80076BDC: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x80076BE0: lui         $v0, 0x8010
    ctx->r2 = S32(0X8010 << 16);
    // 0x80076BE4: lhu         $v0, 0x522A($v0)
    ctx->r2 = MEM_HU(ctx->r2, 0X522A);
    // 0x80076BE8: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80076BEC: andi        $t7, $v0, 0x3
    ctx->r15 = ctx->r2 & 0X3;
    // 0x80076BF0: beq         $t7, $zero, L_80076C20
    if (ctx->r15 == 0) {
        // 0x80076BF4: addiu       $a0, $zero, 0x58B
        ctx->r4 = ADD32(0, 0X58B);
            goto L_80076C20;
    }
    // 0x80076BF4: addiu       $a0, $zero, 0x58B
    ctx->r4 = ADD32(0, 0X58B);
    // 0x80076BF8: beq         $t7, $at, L_80076C30
    if (ctx->r15 == ctx->r1) {
        // 0x80076BFC: addiu       $a0, $zero, 0x5DB
        ctx->r4 = ADD32(0, 0X5DB);
            goto L_80076C30;
    }
    // 0x80076BFC: addiu       $a0, $zero, 0x5DB
    ctx->r4 = ADD32(0, 0X5DB);
    // 0x80076C00: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x80076C04: beq         $t7, $at, L_80076C40
    if (ctx->r15 == ctx->r1) {
        // 0x80076C08: addiu       $a0, $zero, 0x5BA
        ctx->r4 = ADD32(0, 0X5BA);
            goto L_80076C40;
    }
    // 0x80076C08: addiu       $a0, $zero, 0x5BA
    ctx->r4 = ADD32(0, 0X5BA);
    // 0x80076C0C: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x80076C10: beq         $t7, $at, L_80076C50
    if (ctx->r15 == ctx->r1) {
        // 0x80076C14: addiu       $a0, $zero, 0x5D2
        ctx->r4 = ADD32(0, 0X5D2);
            goto L_80076C50;
    }
    // 0x80076C14: addiu       $a0, $zero, 0x5D2
    ctx->r4 = ADD32(0, 0X5D2);
    // 0x80076C18: b           L_80076C5C
    // 0x80076C1C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80076C5C;
    // 0x80076C1C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80076C20:
    // 0x80076C20: jal         0x802A14C0
    // 0x80076C24: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    LOOKUP_FUNC(0x802A14C0)(rdram, ctx);
        goto after_1;
    // 0x80076C24: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_1:
    // 0x80076C28: b           L_80076C5C
    // 0x80076C2C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80076C5C;
    // 0x80076C2C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80076C30:
    // 0x80076C30: jal         0x802A14C0
    // 0x80076C34: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    LOOKUP_FUNC(0x802A14C0)(rdram, ctx);
        goto after_2;
    // 0x80076C34: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_2:
    // 0x80076C38: b           L_80076C5C
    // 0x80076C3C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80076C5C;
    // 0x80076C3C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80076C40:
    // 0x80076C40: jal         0x802A14C0
    // 0x80076C44: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    LOOKUP_FUNC(0x802A14C0)(rdram, ctx);
        goto after_3;
    // 0x80076C44: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_3:
    // 0x80076C48: b           L_80076C5C
    // 0x80076C4C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80076C5C;
    // 0x80076C4C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80076C50:
    // 0x80076C50: jal         0x802A14C0
    // 0x80076C54: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    LOOKUP_FUNC(0x802A14C0)(rdram, ctx);
        goto after_4;
    // 0x80076C54: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_4:
    // 0x80076C58: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80076C5C:
    // 0x80076C5C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80076C60: jr          $ra
    // 0x80076C64: nop

    return;
    // 0x80076C64: nop

;}
RECOMP_FUNC void func_80076C68(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80076C68: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80076C6C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80076C70: jal         0x802A1744
    // 0x80076C74: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    LOOKUP_FUNC(0x802A1744)(rdram, ctx);
        goto after_0;
    // 0x80076C74: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x80076C78: addiu       $a0, $zero, 0x465
    ctx->r4 = ADD32(0, 0X465);
    // 0x80076C7C: jal         0x802A14C0
    // 0x80076C80: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    LOOKUP_FUNC(0x802A14C0)(rdram, ctx);
        goto after_1;
    // 0x80076C80: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_1:
    // 0x80076C84: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80076C88: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80076C8C: jr          $ra
    // 0x80076C90: nop

    return;
    // 0x80076C90: nop

;}
RECOMP_FUNC void func_80076C94(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80076C94: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80076C98: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80076C9C: addiu       $a0, $zero, 0x44E
    ctx->r4 = ADD32(0, 0X44E);
    // 0x80076CA0: jal         0x802A14C0
    // 0x80076CA4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    LOOKUP_FUNC(0x802A14C0)(rdram, ctx);
        goto after_0;
    // 0x80076CA4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_0:
    // 0x80076CA8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80076CAC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80076CB0: jr          $ra
    // 0x80076CB4: nop

    return;
    // 0x80076CB4: nop

;}
RECOMP_FUNC void func_80076CB8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80076CB8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80076CBC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80076CC0: jal         0x80079FD0
    // 0x80076CC4: nop

    func_80079FD0(rdram, ctx);
        goto after_0;
    // 0x80076CC4: nop

    after_0:
    // 0x80076CC8: addiu       $a0, $zero, 0x58C
    ctx->r4 = ADD32(0, 0X58C);
    // 0x80076CCC: jal         0x802A14C0
    // 0x80076CD0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    LOOKUP_FUNC(0x802A14C0)(rdram, ctx);
        goto after_1;
    // 0x80076CD0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_1:
    // 0x80076CD4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80076CD8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80076CDC: jr          $ra
    // 0x80076CE0: nop

    return;
    // 0x80076CE0: nop

;}
RECOMP_FUNC void func_80076CE4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80076CE4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80076CE8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80076CEC: lw          $t6, 0xC8($a0)
    ctx->r14 = MEM_W(ctx->r4, 0XC8);
    // 0x80076CF0: or          $a1, $a0, $zero
    ctx->r5 = ctx->r4 | 0;
    // 0x80076CF4: lbu         $a0, 0x7($t6)
    ctx->r4 = MEM_BU(ctx->r14, 0X7);
    // 0x80076CF8: jal         0x8007A1CC
    // 0x80076CFC: sw          $a1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r5;
    func_8007A1CC(rdram, ctx);
        goto after_0;
    // 0x80076CFC: sw          $a1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r5;
    after_0:
    // 0x80076D00: lui         $v0, 0x8010
    ctx->r2 = S32(0X8010 << 16);
    // 0x80076D04: lhu         $v0, 0x522A($v0)
    ctx->r2 = MEM_HU(ctx->r2, 0X522A);
    // 0x80076D08: lw          $a1, 0x18($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X18);
    // 0x80076D0C: andi        $t7, $v0, 0x3
    ctx->r15 = ctx->r2 & 0X3;
    // 0x80076D10: beq         $t7, $zero, L_80076D34
    if (ctx->r15 == 0) {
        // 0x80076D14: addiu       $at, $zero, 0x1
        ctx->r1 = ADD32(0, 0X1);
            goto L_80076D34;
    }
    // 0x80076D14: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80076D18: beq         $t7, $at, L_80076D50
    if (ctx->r15 == ctx->r1) {
        // 0x80076D1C: addiu       $at, $zero, 0x2
        ctx->r1 = ADD32(0, 0X2);
            goto L_80076D50;
    }
    // 0x80076D1C: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x80076D20: beq         $t7, $at, L_80076D6C
    if (ctx->r15 == ctx->r1) {
        // 0x80076D24: addiu       $a0, $zero, 0x594
        ctx->r4 = ADD32(0, 0X594);
            goto L_80076D6C;
    }
    // 0x80076D24: addiu       $a0, $zero, 0x594
    ctx->r4 = ADD32(0, 0X594);
    // 0x80076D28: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x80076D2C: bne         $t7, $at, L_80076D78
    if (ctx->r15 != ctx->r1) {
        // 0x80076D30: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_80076D78;
    }
    // 0x80076D30: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80076D34:
    // 0x80076D34: jal         0x80079FD0
    // 0x80076D38: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    func_80079FD0(rdram, ctx);
        goto after_1;
    // 0x80076D38: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    after_1:
    // 0x80076D3C: addiu       $a0, $zero, 0x43B
    ctx->r4 = ADD32(0, 0X43B);
    // 0x80076D40: jal         0x802A14C0
    // 0x80076D44: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    LOOKUP_FUNC(0x802A14C0)(rdram, ctx);
        goto after_2;
    // 0x80076D44: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_2:
    // 0x80076D48: b           L_80076D78
    // 0x80076D4C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80076D78;
    // 0x80076D4C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80076D50:
    // 0x80076D50: jal         0x80079FD0
    // 0x80076D54: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    func_80079FD0(rdram, ctx);
        goto after_3;
    // 0x80076D54: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    after_3:
    // 0x80076D58: addiu       $a0, $zero, 0x442
    ctx->r4 = ADD32(0, 0X442);
    // 0x80076D5C: jal         0x802A14C0
    // 0x80076D60: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    LOOKUP_FUNC(0x802A14C0)(rdram, ctx);
        goto after_4;
    // 0x80076D60: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_4:
    // 0x80076D64: b           L_80076D78
    // 0x80076D68: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80076D78;
    // 0x80076D68: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80076D6C:
    // 0x80076D6C: jal         0x802A14C0
    // 0x80076D70: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    LOOKUP_FUNC(0x802A14C0)(rdram, ctx);
        goto after_5;
    // 0x80076D70: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_5:
    // 0x80076D74: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80076D78:
    // 0x80076D78: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80076D7C: jr          $ra
    // 0x80076D80: nop

    return;
    // 0x80076D80: nop

;}
RECOMP_FUNC void func_80076D84(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80076D84: lui         $v0, 0x8010
    ctx->r2 = S32(0X8010 << 16);
    // 0x80076D88: lhu         $v0, 0x522A($v0)
    ctx->r2 = MEM_HU(ctx->r2, 0X522A);
    // 0x80076D8C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80076D90: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80076D94: andi        $t6, $v0, 0x3
    ctx->r14 = ctx->r2 & 0X3;
    // 0x80076D98: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80076D9C: beq         $t6, $at, L_80076DB8
    if (ctx->r14 == ctx->r1) {
        // 0x80076DA0: sw          $a0, 0x18($sp)
        MEM_W(0X18, ctx->r29) = ctx->r4;
            goto L_80076DB8;
    }
    // 0x80076DA0: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x80076DA4: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x80076DA8: beq         $t6, $at, L_80076DCC
    if (ctx->r14 == ctx->r1) {
        // 0x80076DAC: addiu       $a0, $zero, 0x5D2
        ctx->r4 = ADD32(0, 0X5D2);
            goto L_80076DCC;
    }
    // 0x80076DAC: addiu       $a0, $zero, 0x5D2
    ctx->r4 = ADD32(0, 0X5D2);
    // 0x80076DB0: b           L_80076DDC
    // 0x80076DB4: addiu       $a0, $zero, 0x410
    ctx->r4 = ADD32(0, 0X410);
        goto L_80076DDC;
    // 0x80076DB4: addiu       $a0, $zero, 0x410
    ctx->r4 = ADD32(0, 0X410);
L_80076DB8:
    // 0x80076DB8: addiu       $a0, $zero, 0x5BA
    ctx->r4 = ADD32(0, 0X5BA);
    // 0x80076DBC: jal         0x802A14C0
    // 0x80076DC0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    LOOKUP_FUNC(0x802A14C0)(rdram, ctx);
        goto after_0;
    // 0x80076DC0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_0:
    // 0x80076DC4: b           L_80076DE8
    // 0x80076DC8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80076DE8;
    // 0x80076DC8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80076DCC:
    // 0x80076DCC: jal         0x802A14C0
    // 0x80076DD0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    LOOKUP_FUNC(0x802A14C0)(rdram, ctx);
        goto after_1;
    // 0x80076DD0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_1:
    // 0x80076DD4: b           L_80076DE8
    // 0x80076DD8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80076DE8;
    // 0x80076DD8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80076DDC:
    // 0x80076DDC: jal         0x802A14C0
    // 0x80076DE0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    LOOKUP_FUNC(0x802A14C0)(rdram, ctx);
        goto after_2;
    // 0x80076DE0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_2:
    // 0x80076DE4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80076DE8:
    // 0x80076DE8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80076DEC: jr          $ra
    // 0x80076DF0: nop

    return;
    // 0x80076DF0: nop

;}
RECOMP_FUNC void func_80076DF4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80076DF4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80076DF8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80076DFC: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x80076E00: addiu       $a0, $zero, 0x443
    ctx->r4 = ADD32(0, 0X443);
    // 0x80076E04: jal         0x802A14C0
    // 0x80076E08: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    LOOKUP_FUNC(0x802A14C0)(rdram, ctx);
        goto after_0;
    // 0x80076E08: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_0:
    // 0x80076E0C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80076E10: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80076E14: jr          $ra
    // 0x80076E18: nop

    return;
    // 0x80076E18: nop

;}
RECOMP_FUNC void func_80076E1C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80076E1C: jr          $ra
    // 0x80076E20: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    return;
    // 0x80076E20: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
;}
RECOMP_FUNC void func_80076E24(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80076E24: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80076E28: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80076E2C: addiu       $a0, $zero, 0x4A3
    ctx->r4 = ADD32(0, 0X4A3);
    // 0x80076E30: jal         0x802A14C0
    // 0x80076E34: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    LOOKUP_FUNC(0x802A14C0)(rdram, ctx);
        goto after_0;
    // 0x80076E34: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_0:
    // 0x80076E38: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80076E3C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80076E40: jr          $ra
    // 0x80076E44: nop

    return;
    // 0x80076E44: nop

;}
RECOMP_FUNC void func_80076E48(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80076E48: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80076E4C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80076E50: addiu       $a0, $zero, 0x49E
    ctx->r4 = ADD32(0, 0X49E);
    // 0x80076E54: jal         0x802A14C0
    // 0x80076E58: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    LOOKUP_FUNC(0x802A14C0)(rdram, ctx);
        goto after_0;
    // 0x80076E58: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_0:
    // 0x80076E5C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80076E60: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80076E64: jr          $ra
    // 0x80076E68: nop

    return;
    // 0x80076E68: nop

;}
RECOMP_FUNC void func_80076E6C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80076E6C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80076E70: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80076E74: jal         0x802A1744
    // 0x80076E78: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    LOOKUP_FUNC(0x802A1744)(rdram, ctx);
        goto after_0;
    // 0x80076E78: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x80076E7C: slti        $at, $v0, 0x2
    ctx->r1 = SIGNED(ctx->r2) < 0X2 ? 1 : 0;
    // 0x80076E80: beq         $at, $zero, L_80076EB4
    if (ctx->r1 == 0) {
        // 0x80076E84: lui         $t6, 0x8010
        ctx->r14 = S32(0X8010 << 16);
            goto L_80076EB4;
    }
    // 0x80076E84: lui         $t6, 0x8010
    ctx->r14 = S32(0X8010 << 16);
    // 0x80076E88: lhu         $t6, 0x522A($t6)
    ctx->r14 = MEM_HU(ctx->r14, 0X522A);
    // 0x80076E8C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80076E90: andi        $t7, $t6, 0x1
    ctx->r15 = ctx->r14 & 0X1;
    // 0x80076E94: beq         $t7, $zero, L_80076EAC
    if (ctx->r15 == 0) {
        // 0x80076E98: addiu       $a0, $zero, 0x5E1
        ctx->r4 = ADD32(0, 0X5E1);
            goto L_80076EAC;
    }
    // 0x80076E98: addiu       $a0, $zero, 0x5E1
    ctx->r4 = ADD32(0, 0X5E1);
    // 0x80076E9C: jal         0x802A14C0
    // 0x80076EA0: addiu       $a0, $zero, 0x49F
    ctx->r4 = ADD32(0, 0X49F);
    LOOKUP_FUNC(0x802A14C0)(rdram, ctx);
        goto after_1;
    // 0x80076EA0: addiu       $a0, $zero, 0x49F
    ctx->r4 = ADD32(0, 0X49F);
    after_1:
    // 0x80076EA4: b           L_80076EB8
    // 0x80076EA8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80076EB8;
    // 0x80076EA8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80076EAC:
    // 0x80076EAC: jal         0x802A14C0
    // 0x80076EB0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    LOOKUP_FUNC(0x802A14C0)(rdram, ctx);
        goto after_2;
    // 0x80076EB0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_2:
L_80076EB4:
    // 0x80076EB4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80076EB8:
    // 0x80076EB8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80076EBC: jr          $ra
    // 0x80076EC0: nop

    return;
    // 0x80076EC0: nop

;}
RECOMP_FUNC void func_80076EC4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80076EC4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80076EC8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80076ECC: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x80076ED0: addiu       $a0, $zero, 0x42F
    ctx->r4 = ADD32(0, 0X42F);
    // 0x80076ED4: jal         0x802A14C0
    // 0x80076ED8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    LOOKUP_FUNC(0x802A14C0)(rdram, ctx);
        goto after_0;
    // 0x80076ED8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_0:
    // 0x80076EDC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80076EE0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80076EE4: jr          $ra
    // 0x80076EE8: nop

    return;
    // 0x80076EE8: nop

;}
RECOMP_FUNC void func_80076EEC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80076EEC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80076EF0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80076EF4: addiu       $a0, $zero, 0x461
    ctx->r4 = ADD32(0, 0X461);
    // 0x80076EF8: jal         0x802A14C0
    // 0x80076EFC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    LOOKUP_FUNC(0x802A14C0)(rdram, ctx);
        goto after_0;
    // 0x80076EFC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_0:
    // 0x80076F00: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80076F04: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80076F08: jr          $ra
    // 0x80076F0C: nop

    return;
    // 0x80076F0C: nop

;}
RECOMP_FUNC void func_80076F10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80076F10: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80076F14: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80076F18: addiu       $a0, $zero, 0x4AE
    ctx->r4 = ADD32(0, 0X4AE);
    // 0x80076F1C: jal         0x802A14C0
    // 0x80076F20: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    LOOKUP_FUNC(0x802A14C0)(rdram, ctx);
        goto after_0;
    // 0x80076F20: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_0:
    // 0x80076F24: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80076F28: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80076F2C: jr          $ra
    // 0x80076F30: nop

    return;
    // 0x80076F30: nop

;}
RECOMP_FUNC void func_80076F34(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80076F34: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80076F38: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80076F3C: addiu       $a0, $zero, 0x413
    ctx->r4 = ADD32(0, 0X413);
    // 0x80076F40: jal         0x802A14C0
    // 0x80076F44: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    LOOKUP_FUNC(0x802A14C0)(rdram, ctx);
        goto after_0;
    // 0x80076F44: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_0:
    // 0x80076F48: lui         $t6, 0x8009
    ctx->r14 = S32(0X8009 << 16);
    // 0x80076F4C: lw          $t6, 0x3B20($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X3B20);
    // 0x80076F50: nop

    // 0x80076F54: lw          $t7, 0xB4($t6)
    ctx->r15 = MEM_W(ctx->r14, 0XB4);
    // 0x80076F58: nop

    // 0x80076F5C: lw          $t8, 0x24($t7)
    ctx->r24 = MEM_W(ctx->r15, 0X24);
    // 0x80076F60: nop

    // 0x80076F64: lbu         $a0, 0x0($t8)
    ctx->r4 = MEM_BU(ctx->r24, 0X0);
    // 0x80076F68: jal         0x80079F98
    // 0x80076F6C: nop

    func_80079F98(rdram, ctx);
        goto after_1;
    // 0x80076F6C: nop

    after_1:
    // 0x80076F70: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80076F74: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80076F78: jr          $ra
    // 0x80076F7C: nop

    return;
    // 0x80076F7C: nop

;}
RECOMP_FUNC void func_80076F80(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80076F80: jr          $ra
    // 0x80076F84: nop

    return;
    // 0x80076F84: nop

;}
RECOMP_FUNC void func_80076F88(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80076F88: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80076F8C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80076F90: jal         0x802A1744
    // 0x80076F94: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    LOOKUP_FUNC(0x802A1744)(rdram, ctx);
        goto after_0;
    // 0x80076F94: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x80076F98: slti        $at, $v0, 0x3
    ctx->r1 = SIGNED(ctx->r2) < 0X3 ? 1 : 0;
    // 0x80076F9C: beq         $at, $zero, L_80076FBC
    if (ctx->r1 == 0) {
        // 0x80076FA0: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_80076FBC;
    }
    // 0x80076FA0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80076FA4: jal         0x80077060
    // 0x80076FA8: nop

    func_80077060(rdram, ctx);
        goto after_1;
    // 0x80076FA8: nop

    after_1:
    // 0x80076FAC: addiu       $a0, $zero, 0x562
    ctx->r4 = ADD32(0, 0X562);
    // 0x80076FB0: jal         0x802A14C0
    // 0x80076FB4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    LOOKUP_FUNC(0x802A14C0)(rdram, ctx);
        goto after_2;
    // 0x80076FB4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_2:
    // 0x80076FB8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80076FBC:
    // 0x80076FBC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80076FC0: jr          $ra
    // 0x80076FC4: nop

    return;
    // 0x80076FC4: nop

;}
RECOMP_FUNC void func_80076FC8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80076FC8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80076FCC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80076FD0: addiu       $a0, $zero, 0x4AB
    ctx->r4 = ADD32(0, 0X4AB);
    // 0x80076FD4: jal         0x802A14C0
    // 0x80076FD8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    LOOKUP_FUNC(0x802A14C0)(rdram, ctx);
        goto after_0;
    // 0x80076FD8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_0:
    // 0x80076FDC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80076FE0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80076FE4: jr          $ra
    // 0x80076FE8: nop

    return;
    // 0x80076FE8: nop

;}
RECOMP_FUNC void func_80076FEC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80076FEC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80076FF0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80076FF4: addiu       $a0, $zero, 0x559
    ctx->r4 = ADD32(0, 0X559);
    // 0x80076FF8: jal         0x802A14C0
    // 0x80076FFC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    LOOKUP_FUNC(0x802A14C0)(rdram, ctx);
        goto after_0;
    // 0x80076FFC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_0:
    // 0x80077000: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80077004: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80077008: jr          $ra
    // 0x8007700C: nop

    return;
    // 0x8007700C: nop

;}
RECOMP_FUNC void func_80077010(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80077010: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80077014: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80077018: addiu       $a0, $zero, 0x4AC
    ctx->r4 = ADD32(0, 0X4AC);
    // 0x8007701C: jal         0x802A14C0
    // 0x80077020: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    LOOKUP_FUNC(0x802A14C0)(rdram, ctx);
        goto after_0;
    // 0x80077020: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_0:
    // 0x80077024: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80077028: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8007702C: jr          $ra
    // 0x80077030: nop

    return;
    // 0x80077030: nop

;}
RECOMP_FUNC void func_80077034(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80077034: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80077038: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8007703C: addiu       $a0, $zero, 0x4BD
    ctx->r4 = ADD32(0, 0X4BD);
    // 0x80077040: jal         0x802A14C0
    // 0x80077044: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    LOOKUP_FUNC(0x802A14C0)(rdram, ctx);
        goto after_0;
    // 0x80077044: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_0:
    // 0x80077048: jal         0x80077060
    // 0x8007704C: nop

    func_80077060(rdram, ctx);
        goto after_1;
    // 0x8007704C: nop

    after_1:
    // 0x80077050: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80077054: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80077058: jr          $ra
    // 0x8007705C: nop

    return;
    // 0x8007705C: nop

;}
RECOMP_FUNC void func_80077060(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80077060: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x80077064: addiu       $v0, $v0, -0x2CF0
    ctx->r2 = ADD32(ctx->r2, -0X2CF0);
    // 0x80077068: lhu         $t6, 0xA9E($v0)
    ctx->r14 = MEM_HU(ctx->r2, 0XA9E);
    // 0x8007706C: lhu         $t7, 0xA($v0)
    ctx->r15 = MEM_HU(ctx->r2, 0XA);
    // 0x80077070: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80077074: slt         $at, $t6, $t7
    ctx->r1 = SIGNED(ctx->r14) < SIGNED(ctx->r15) ? 1 : 0;
    // 0x80077078: beq         $at, $zero, L_80077094
    if (ctx->r1 == 0) {
        // 0x8007707C: sw          $ra, 0x14($sp)
        MEM_W(0X14, ctx->r29) = ctx->r31;
            goto L_80077094;
    }
    // 0x8007707C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80077080: lbu         $a0, 0xA94($v0)
    ctx->r4 = MEM_BU(ctx->r2, 0XA94);
    // 0x80077084: jal         0x80079F98
    // 0x80077088: nop

    func_80079F98(rdram, ctx);
        goto after_0;
    // 0x80077088: nop

    after_0:
    // 0x8007708C: b           L_800770A4
    // 0x80077090: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_800770A4;
    // 0x80077090: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80077094:
    // 0x80077094: lbu         $a0, 0x0($v0)
    ctx->r4 = MEM_BU(ctx->r2, 0X0);
    // 0x80077098: jal         0x80079F98
    // 0x8007709C: nop

    func_80079F98(rdram, ctx);
        goto after_1;
    // 0x8007709C: nop

    after_1:
    // 0x800770A0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_800770A4:
    // 0x800770A4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800770A8: jr          $ra
    // 0x800770AC: nop

    return;
    // 0x800770AC: nop

;}
RECOMP_FUNC void func_800770B0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800770B0: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x800770B4: addiu       $v0, $v0, -0x2CF0
    ctx->r2 = ADD32(ctx->r2, -0X2CF0);
    // 0x800770B8: lhu         $t6, 0xA9E($v0)
    ctx->r14 = MEM_HU(ctx->r2, 0XA9E);
    // 0x800770BC: lhu         $t7, 0xA($v0)
    ctx->r15 = MEM_HU(ctx->r2, 0XA);
    // 0x800770C0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800770C4: slt         $at, $t6, $t7
    ctx->r1 = SIGNED(ctx->r14) < SIGNED(ctx->r15) ? 1 : 0;
    // 0x800770C8: beq         $at, $zero, L_800770E4
    if (ctx->r1 == 0) {
        // 0x800770CC: sw          $ra, 0x14($sp)
        MEM_W(0X14, ctx->r29) = ctx->r31;
            goto L_800770E4;
    }
    // 0x800770CC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800770D0: lbu         $a0, 0x0($v0)
    ctx->r4 = MEM_BU(ctx->r2, 0X0);
    // 0x800770D4: jal         0x80079F98
    // 0x800770D8: nop

    func_80079F98(rdram, ctx);
        goto after_0;
    // 0x800770D8: nop

    after_0:
    // 0x800770DC: b           L_800770F4
    // 0x800770E0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_800770F4;
    // 0x800770E0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_800770E4:
    // 0x800770E4: lbu         $a0, 0xA94($v0)
    ctx->r4 = MEM_BU(ctx->r2, 0XA94);
    // 0x800770E8: jal         0x80079F98
    // 0x800770EC: nop

    func_80079F98(rdram, ctx);
        goto after_1;
    // 0x800770EC: nop

    after_1:
    // 0x800770F0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_800770F4:
    // 0x800770F4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800770F8: jr          $ra
    // 0x800770FC: nop

    return;
    // 0x800770FC: nop

;}
RECOMP_FUNC void func_80077100(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80077100: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80077104: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80077108: jal         0x80077060
    // 0x8007710C: nop

    func_80077060(rdram, ctx);
        goto after_0;
    // 0x8007710C: nop

    after_0:
    // 0x80077110: addiu       $a0, $zero, 0x4E7
    ctx->r4 = ADD32(0, 0X4E7);
    // 0x80077114: jal         0x802A14C0
    // 0x80077118: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    LOOKUP_FUNC(0x802A14C0)(rdram, ctx);
        goto after_1;
    // 0x80077118: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_1:
    // 0x8007711C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80077120: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80077124: jr          $ra
    // 0x80077128: nop

    return;
    // 0x80077128: nop

;}
RECOMP_FUNC void func_8007712C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8007712C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80077130: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80077134: jal         0x80077060
    // 0x80077138: nop

    func_80077060(rdram, ctx);
        goto after_0;
    // 0x80077138: nop

    after_0:
    // 0x8007713C: addiu       $a0, $zero, 0x4D9
    ctx->r4 = ADD32(0, 0X4D9);
    // 0x80077140: jal         0x802A14C0
    // 0x80077144: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    LOOKUP_FUNC(0x802A14C0)(rdram, ctx);
        goto after_1;
    // 0x80077144: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_1:
    // 0x80077148: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8007714C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80077150: jr          $ra
    // 0x80077154: nop

    return;
    // 0x80077154: nop

;}
RECOMP_FUNC void func_80077158(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80077158: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8007715C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80077160: addiu       $a0, $zero, 0x42C
    ctx->r4 = ADD32(0, 0X42C);
    // 0x80077164: jal         0x802A14C0
    // 0x80077168: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    LOOKUP_FUNC(0x802A14C0)(rdram, ctx);
        goto after_0;
    // 0x80077168: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_0:
    // 0x8007716C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80077170: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80077174: jr          $ra
    // 0x80077178: nop

    return;
    // 0x80077178: nop

;}
RECOMP_FUNC void func_8007717C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8007717C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80077180: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80077184: jal         0x802A1744
    // 0x80077188: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    LOOKUP_FUNC(0x802A1744)(rdram, ctx);
        goto after_0;
    // 0x80077188: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x8007718C: addiu       $a0, $zero, 0x4C5
    ctx->r4 = ADD32(0, 0X4C5);
    // 0x80077190: jal         0x802A14C0
    // 0x80077194: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    LOOKUP_FUNC(0x802A14C0)(rdram, ctx);
        goto after_1;
    // 0x80077194: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_1:
    // 0x80077198: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8007719C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800771A0: jr          $ra
    // 0x800771A4: nop

    return;
    // 0x800771A4: nop

;}
RECOMP_FUNC void func_800771A8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800771A8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800771AC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800771B0: jal         0x802A1744
    // 0x800771B4: nop

    LOOKUP_FUNC(0x802A1744)(rdram, ctx);
        goto after_0;
    // 0x800771B4: nop

    after_0:
    // 0x800771B8: lui         $t6, 0x8010
    ctx->r14 = S32(0X8010 << 16);
    // 0x800771BC: lhu         $t6, 0x522A($t6)
    ctx->r14 = MEM_HU(ctx->r14, 0X522A);
    // 0x800771C0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800771C4: andi        $t7, $t6, 0x1
    ctx->r15 = ctx->r14 & 0X1;
    // 0x800771C8: beq         $t7, $zero, L_800771E0
    if (ctx->r15 == 0) {
        // 0x800771CC: addiu       $a0, $zero, 0x416
        ctx->r4 = ADD32(0, 0X416);
            goto L_800771E0;
    }
    // 0x800771CC: addiu       $a0, $zero, 0x416
    ctx->r4 = ADD32(0, 0X416);
    // 0x800771D0: jal         0x802A14C0
    // 0x800771D4: addiu       $a0, $zero, 0x418
    ctx->r4 = ADD32(0, 0X418);
    LOOKUP_FUNC(0x802A14C0)(rdram, ctx);
        goto after_1;
    // 0x800771D4: addiu       $a0, $zero, 0x418
    ctx->r4 = ADD32(0, 0X418);
    after_1:
    // 0x800771D8: b           L_800771EC
    // 0x800771DC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_800771EC;
    // 0x800771DC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_800771E0:
    // 0x800771E0: jal         0x802A14C0
    // 0x800771E4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    LOOKUP_FUNC(0x802A14C0)(rdram, ctx);
        goto after_2;
    // 0x800771E4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_2:
    // 0x800771E8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_800771EC:
    // 0x800771EC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800771F0: jr          $ra
    // 0x800771F4: nop

    return;
    // 0x800771F4: nop

;}
RECOMP_FUNC void func_800771F8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800771F8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800771FC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80077200: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x80077204: addiu       $a0, $zero, 0x430
    ctx->r4 = ADD32(0, 0X430);
    // 0x80077208: jal         0x802A14C0
    // 0x8007720C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    LOOKUP_FUNC(0x802A14C0)(rdram, ctx);
        goto after_0;
    // 0x8007720C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_0:
    // 0x80077210: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80077214: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80077218: jr          $ra
    // 0x8007721C: nop

    return;
    // 0x8007721C: nop

;}
RECOMP_FUNC void func_80077220(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80077220: lui         $t6, 0x802C
    ctx->r14 = S32(0X802C << 16);
    // 0x80077224: lhu         $t6, 0x38D0($t6)
    ctx->r14 = MEM_HU(ctx->r14, 0X38D0);
    // 0x80077228: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8007722C: slti        $at, $t6, 0x97
    ctx->r1 = SIGNED(ctx->r14) < 0X97 ? 1 : 0;
    // 0x80077230: bne         $at, $zero, L_80077244
    if (ctx->r1 != 0) {
        // 0x80077234: sw          $ra, 0x14($sp)
        MEM_W(0X14, ctx->r29) = ctx->r31;
            goto L_80077244;
    }
    // 0x80077234: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80077238: addiu       $a0, $zero, 0x4C6
    ctx->r4 = ADD32(0, 0X4C6);
    // 0x8007723C: jal         0x802A14C0
    // 0x80077240: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    LOOKUP_FUNC(0x802A14C0)(rdram, ctx);
        goto after_0;
    // 0x80077240: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_0:
L_80077244:
    // 0x80077244: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80077248: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8007724C: jr          $ra
    // 0x80077250: nop

    return;
    // 0x80077250: nop

;}
RECOMP_FUNC void func_80077254(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80077254: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80077258: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8007725C: addiu       $a0, $zero, 0x4E2
    ctx->r4 = ADD32(0, 0X4E2);
    // 0x80077260: jal         0x802A14C0
    // 0x80077264: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    LOOKUP_FUNC(0x802A14C0)(rdram, ctx);
        goto after_0;
    // 0x80077264: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_0:
    // 0x80077268: jal         0x800770B0
    // 0x8007726C: nop

    func_800770B0(rdram, ctx);
        goto after_1;
    // 0x8007726C: nop

    after_1:
    // 0x80077270: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80077274: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80077278: jr          $ra
    // 0x8007727C: nop

    return;
    // 0x8007727C: nop

;}
RECOMP_FUNC void func_80077280(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80077280: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80077284: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80077288: jal         0x800770B0
    // 0x8007728C: nop

    func_800770B0(rdram, ctx);
        goto after_0;
    // 0x8007728C: nop

    after_0:
    // 0x80077290: addiu       $a0, $zero, 0x405
    ctx->r4 = ADD32(0, 0X405);
    // 0x80077294: jal         0x802A14C0
    // 0x80077298: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    LOOKUP_FUNC(0x802A14C0)(rdram, ctx);
        goto after_1;
    // 0x80077298: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_1:
    // 0x8007729C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800772A0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800772A4: jr          $ra
    // 0x800772A8: nop

    return;
    // 0x800772A8: nop

;}
RECOMP_FUNC void func_800772AC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800772AC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800772B0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800772B4: jal         0x80079FD0
    // 0x800772B8: nop

    func_80079FD0(rdram, ctx);
        goto after_0;
    // 0x800772B8: nop

    after_0:
    // 0x800772BC: addiu       $a0, $zero, 0x56B
    ctx->r4 = ADD32(0, 0X56B);
    // 0x800772C0: jal         0x802A14C0
    // 0x800772C4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    LOOKUP_FUNC(0x802A14C0)(rdram, ctx);
        goto after_1;
    // 0x800772C4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_1:
    // 0x800772C8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800772CC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800772D0: jr          $ra
    // 0x800772D4: nop

    return;
    // 0x800772D4: nop

;}
RECOMP_FUNC void func_800772D8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800772D8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800772DC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800772E0: jal         0x80077060
    // 0x800772E4: nop

    func_80077060(rdram, ctx);
        goto after_0;
    // 0x800772E4: nop

    after_0:
    // 0x800772E8: addiu       $a0, $zero, 0x472
    ctx->r4 = ADD32(0, 0X472);
    // 0x800772EC: jal         0x802A14C0
    // 0x800772F0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    LOOKUP_FUNC(0x802A14C0)(rdram, ctx);
        goto after_1;
    // 0x800772F0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_1:
    // 0x800772F4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800772F8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800772FC: jr          $ra
    // 0x80077300: nop

    return;
    // 0x80077300: nop

;}
RECOMP_FUNC void func_80077304(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80077304: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80077308: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8007730C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x80077310: addiu       $a0, $zero, 0x42E
    ctx->r4 = ADD32(0, 0X42E);
    // 0x80077314: jal         0x802A14C0
    // 0x80077318: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    LOOKUP_FUNC(0x802A14C0)(rdram, ctx);
        goto after_0;
    // 0x80077318: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_0:
    // 0x8007731C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80077320: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80077324: jr          $ra
    // 0x80077328: nop

    return;
    // 0x80077328: nop

;}
RECOMP_FUNC void func_8007736C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8007736C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80077370: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80077374: addiu       $a0, $zero, 0x48C
    ctx->r4 = ADD32(0, 0X48C);
    // 0x80077378: jal         0x802A14C0
    // 0x8007737C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    LOOKUP_FUNC(0x802A14C0)(rdram, ctx);
        goto after_0;
    // 0x8007737C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_0:
    // 0x80077380: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80077384: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80077388: jr          $ra
    // 0x8007738C: nop

    return;
    // 0x8007738C: nop

;}
RECOMP_FUNC void func_800773BC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800773BC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800773C0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800773C4: jal         0x80077060
    // 0x800773C8: nop

    func_80077060(rdram, ctx);
        goto after_0;
    // 0x800773C8: nop

    after_0:
    // 0x800773CC: addiu       $a0, $zero, 0x59C
    ctx->r4 = ADD32(0, 0X59C);
    // 0x800773D0: jal         0x802A14C0
    // 0x800773D4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    LOOKUP_FUNC(0x802A14C0)(rdram, ctx);
        goto after_1;
    // 0x800773D4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_1:
    // 0x800773D8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800773DC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800773E0: jr          $ra
    // 0x800773E4: nop

    return;
    // 0x800773E4: nop

;}
RECOMP_FUNC void func_800773E8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800773E8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800773EC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800773F0: jal         0x80077060
    // 0x800773F4: nop

    func_80077060(rdram, ctx);
        goto after_0;
    // 0x800773F4: nop

    after_0:
    // 0x800773F8: addiu       $a0, $zero, 0x48D
    ctx->r4 = ADD32(0, 0X48D);
    // 0x800773FC: jal         0x802A14C0
    // 0x80077400: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    LOOKUP_FUNC(0x802A14C0)(rdram, ctx);
        goto after_1;
    // 0x80077400: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_1:
    // 0x80077404: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80077408: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8007740C: jr          $ra
    // 0x80077410: nop

    return;
    // 0x80077410: nop

;}
RECOMP_FUNC void func_80077414(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80077414: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80077418: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8007741C: addiu       $a0, $zero, 0x438
    ctx->r4 = ADD32(0, 0X438);
    // 0x80077420: jal         0x802A14C0
    // 0x80077424: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    LOOKUP_FUNC(0x802A14C0)(rdram, ctx);
        goto after_0;
    // 0x80077424: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_0:
    // 0x80077428: jal         0x800770B0
    // 0x8007742C: nop

    func_800770B0(rdram, ctx);
        goto after_1;
    // 0x8007742C: nop

    after_1:
    // 0x80077430: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80077434: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80077438: jr          $ra
    // 0x8007743C: nop

    return;
    // 0x8007743C: nop

;}
RECOMP_FUNC void func_8007746C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8007746C: lui         $t6, 0x8010
    ctx->r14 = S32(0X8010 << 16);
    // 0x80077470: lhu         $t6, 0x522A($t6)
    ctx->r14 = MEM_HU(ctx->r14, 0X522A);
    // 0x80077474: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80077478: andi        $t7, $t6, 0x1
    ctx->r15 = ctx->r14 & 0X1;
    // 0x8007747C: beq         $t7, $zero, L_80077498
    if (ctx->r15 == 0) {
        // 0x80077480: sw          $ra, 0x14($sp)
        MEM_W(0X14, ctx->r29) = ctx->r31;
            goto L_80077498;
    }
    // 0x80077480: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80077484: addiu       $a0, $zero, 0x46A
    ctx->r4 = ADD32(0, 0X46A);
    // 0x80077488: jal         0x802A14C0
    // 0x8007748C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    LOOKUP_FUNC(0x802A14C0)(rdram, ctx);
        goto after_0;
    // 0x8007748C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_0:
    // 0x80077490: b           L_800774A8
    // 0x80077494: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_800774A8;
    // 0x80077494: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80077498:
    // 0x80077498: addiu       $a0, $zero, 0x5E5
    ctx->r4 = ADD32(0, 0X5E5);
    // 0x8007749C: jal         0x802A14C0
    // 0x800774A0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    LOOKUP_FUNC(0x802A14C0)(rdram, ctx);
        goto after_1;
    // 0x800774A0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_1:
    // 0x800774A4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_800774A8:
    // 0x800774A8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800774AC: jr          $ra
    // 0x800774B0: nop

    return;
    // 0x800774B0: nop

;}
RECOMP_FUNC void func_800774B4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800774B4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800774B8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800774BC: addiu       $a0, $zero, 0x451
    ctx->r4 = ADD32(0, 0X451);
    // 0x800774C0: jal         0x802A14C0
    // 0x800774C4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    LOOKUP_FUNC(0x802A14C0)(rdram, ctx);
        goto after_0;
    // 0x800774C4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_0:
    // 0x800774C8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800774CC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800774D0: jr          $ra
    // 0x800774D4: nop

    return;
    // 0x800774D4: nop

;}
