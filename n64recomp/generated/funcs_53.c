#include "iss64_recomp.h"
#include "funcs.h"

RECOMP_FUNC void ovl_8024B800_func_80261218(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80261218: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8026121C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80261220: jal         0x800489A8
    // 0x80261224: nop

    func_800489A8(rdram, ctx);
        goto after_0;
    // 0x80261224: nop

    after_0:
    // 0x80261228: lui         $v0, 0x8010
    ctx->r2 = S32(0X8010 << 16);
    // 0x8026122C: lhu         $v0, 0x522A($v0)
    ctx->r2 = MEM_HU(ctx->r2, 0X522A);
    // 0x80261230: addiu       $a0, $zero, 0x4DF
    ctx->r4 = ADD32(0, 0X4DF);
    // 0x80261234: andi        $t6, $v0, 0x3
    ctx->r14 = ctx->r2 & 0X3;
    // 0x80261238: beq         $t6, $zero, L_80261258
    if (ctx->r14 == 0) {
        // 0x8026123C: andi        $v1, $v0, 0x1
        ctx->r3 = ctx->r2 & 0X1;
            goto L_80261258;
    }
    // 0x8026123C: andi        $v1, $v0, 0x1
    ctx->r3 = ctx->r2 & 0X1;
    // 0x80261240: jal         0x802A14C0
    // 0x80261244: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    LOOKUP_FUNC(0x802A14C0)(rdram, ctx);
        goto after_1;
    // 0x80261244: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_1:
    // 0x80261248: lui         $v0, 0x8010
    ctx->r2 = S32(0X8010 << 16);
    // 0x8026124C: lhu         $v0, 0x522A($v0)
    ctx->r2 = MEM_HU(ctx->r2, 0X522A);
    // 0x80261250: nop

    // 0x80261254: andi        $v1, $v0, 0x1
    ctx->r3 = ctx->r2 & 0X1;
L_80261258:
    // 0x80261258: beq         $v1, $zero, L_80261274
    if (ctx->r3 == 0) {
        // 0x8026125C: addiu       $a0, $zero, 0x4D4
        ctx->r4 = ADD32(0, 0X4D4);
            goto L_80261274;
    }
    // 0x8026125C: addiu       $a0, $zero, 0x4D4
    ctx->r4 = ADD32(0, 0X4D4);
    // 0x80261260: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80261264: beq         $v1, $at, L_802612AC
    if (ctx->r3 == ctx->r1) {
        // 0x80261268: addiu       $a0, $zero, 0x4D5
        ctx->r4 = ADD32(0, 0X4D5);
            goto L_802612AC;
    }
    // 0x80261268: addiu       $a0, $zero, 0x4D5
    ctx->r4 = ADD32(0, 0X4D5);
    // 0x8026126C: b           L_802612B8
    // 0x80261270: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_802612B8;
    // 0x80261270: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80261274:
    // 0x80261274: jal         0x802A14C0
    // 0x80261278: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    LOOKUP_FUNC(0x802A14C0)(rdram, ctx);
        goto after_2;
    // 0x80261278: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_2:
    // 0x8026127C: lui         $t7, 0x8009
    ctx->r15 = S32(0X8009 << 16);
    // 0x80261280: lw          $t7, 0x3B20($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X3B20);
    // 0x80261284: nop

    // 0x80261288: lw          $t8, 0xB4($t7)
    ctx->r24 = MEM_W(ctx->r15, 0XB4);
    // 0x8026128C: nop

    // 0x80261290: lw          $t9, 0x24($t8)
    ctx->r25 = MEM_W(ctx->r24, 0X24);
    // 0x80261294: nop

    // 0x80261298: lbu         $a0, 0x0($t9)
    ctx->r4 = MEM_BU(ctx->r25, 0X0);
    // 0x8026129C: jal         0x80079F98
    // 0x802612A0: nop

    func_80079F98(rdram, ctx);
        goto after_3;
    // 0x802612A0: nop

    after_3:
    // 0x802612A4: b           L_802612B8
    // 0x802612A8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_802612B8;
    // 0x802612A8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_802612AC:
    // 0x802612AC: jal         0x802A14C0
    // 0x802612B0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    LOOKUP_FUNC(0x802A14C0)(rdram, ctx);
        goto after_4;
    // 0x802612B0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_4:
    // 0x802612B4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_802612B8:
    // 0x802612B8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x802612BC: jr          $ra
    // 0x802612C0: nop

    return;
    // 0x802612C0: nop

;}
RECOMP_FUNC void ovl_8024B800_func_802612C4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802612C4: jr          $ra
    // 0x802612C8: nop

    return;
    // 0x802612C8: nop

;}
RECOMP_FUNC void ovl_8024B800_func_802612CC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802612CC: lui         $t6, 0x8010
    ctx->r14 = S32(0X8010 << 16);
    // 0x802612D0: lhu         $t6, 0x522A($t6)
    ctx->r14 = MEM_HU(ctx->r14, 0X522A);
    // 0x802612D4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802612D8: andi        $t7, $t6, 0x1
    ctx->r15 = ctx->r14 & 0X1;
    // 0x802612DC: beq         $t7, $zero, L_80261320
    if (ctx->r15 == 0) {
        // 0x802612E0: sw          $ra, 0x14($sp)
        MEM_W(0X14, ctx->r29) = ctx->r31;
            goto L_80261320;
    }
    // 0x802612E0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802612E4: addiu       $a0, $zero, 0x456
    ctx->r4 = ADD32(0, 0X456);
    // 0x802612E8: jal         0x802A14C0
    // 0x802612EC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    LOOKUP_FUNC(0x802A14C0)(rdram, ctx);
        goto after_0;
    // 0x802612EC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_0:
    // 0x802612F0: lui         $t8, 0x8009
    ctx->r24 = S32(0X8009 << 16);
    // 0x802612F4: lw          $t8, 0x3B20($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X3B20);
    // 0x802612F8: nop

    // 0x802612FC: lw          $t9, 0xB4($t8)
    ctx->r25 = MEM_W(ctx->r24, 0XB4);
    // 0x80261300: nop

    // 0x80261304: lw          $t0, 0x24($t9)
    ctx->r8 = MEM_W(ctx->r25, 0X24);
    // 0x80261308: nop

    // 0x8026130C: lbu         $a0, 0x0($t0)
    ctx->r4 = MEM_BU(ctx->r8, 0X0);
    // 0x80261310: jal         0x80079F98
    // 0x80261314: nop

    func_80079F98(rdram, ctx);
        goto after_1;
    // 0x80261314: nop

    after_1:
    // 0x80261318: b           L_80261358
    // 0x8026131C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80261358;
    // 0x8026131C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80261320:
    // 0x80261320: lui         $t1, 0x8009
    ctx->r9 = S32(0X8009 << 16);
    // 0x80261324: lw          $t1, 0x3B20($t1)
    ctx->r9 = MEM_W(ctx->r9, 0X3B20);
    // 0x80261328: nop

    // 0x8026132C: lw          $t2, 0xB4($t1)
    ctx->r10 = MEM_W(ctx->r9, 0XB4);
    // 0x80261330: nop

    // 0x80261334: lw          $t3, 0x24($t2)
    ctx->r11 = MEM_W(ctx->r10, 0X24);
    // 0x80261338: nop

    // 0x8026133C: lbu         $a0, 0x0($t3)
    ctx->r4 = MEM_BU(ctx->r11, 0X0);
    // 0x80261340: jal         0x80079F98
    // 0x80261344: nop

    func_80079F98(rdram, ctx);
        goto after_2;
    // 0x80261344: nop

    after_2:
    // 0x80261348: addiu       $a0, $zero, 0x457
    ctx->r4 = ADD32(0, 0X457);
    // 0x8026134C: jal         0x802A14C0
    // 0x80261350: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    LOOKUP_FUNC(0x802A14C0)(rdram, ctx);
        goto after_3;
    // 0x80261350: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_3:
    // 0x80261354: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80261358:
    // 0x80261358: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8026135C: jr          $ra
    // 0x80261360: nop

    return;
    // 0x80261360: nop

;}
RECOMP_FUNC void ovl_8024B800_func_80261364(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80261364: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80261368: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8026136C: jal         0x800489A8
    // 0x80261370: nop

    func_800489A8(rdram, ctx);
        goto after_0;
    // 0x80261370: nop

    after_0:
    // 0x80261374: jal         0x802612C4
    // 0x80261378: nop

    ovl_8024B800_func_802612C4(rdram, ctx);
        goto after_1;
    // 0x80261378: nop

    after_1:
    // 0x8026137C: lui         $t6, 0x8012
    ctx->r14 = S32(0X8012 << 16);
    // 0x80261380: lhu         $t6, 0xB7A($t6)
    ctx->r14 = MEM_HU(ctx->r14, 0XB7A);
    // 0x80261384: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x80261388: beq         $t6, $at, L_8026139C
    if (ctx->r14 == ctx->r1) {
        // 0x8026138C: addiu       $a0, $zero, 0x4DF
        ctx->r4 = ADD32(0, 0X4DF);
            goto L_8026139C;
    }
    // 0x8026138C: addiu       $a0, $zero, 0x4DF
    ctx->r4 = ADD32(0, 0X4DF);
    // 0x80261390: jal         0x800778DC
    // 0x80261394: nop

    func_800778DC(rdram, ctx);
        goto after_2;
    // 0x80261394: nop

    after_2:
    // 0x80261398: addiu       $a0, $zero, 0x4DF
    ctx->r4 = ADD32(0, 0X4DF);
L_8026139C:
    // 0x8026139C: jal         0x802A14C0
    // 0x802613A0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    LOOKUP_FUNC(0x802A14C0)(rdram, ctx);
        goto after_3;
    // 0x802613A0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_3:
    // 0x802613A4: lui         $t7, 0x8012
    ctx->r15 = S32(0X8012 << 16);
    // 0x802613A8: lhu         $t7, 0xB7A($t7)
    ctx->r15 = MEM_HU(ctx->r15, 0XB7A);
    // 0x802613AC: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x802613B0: bne         $t7, $at, L_8026144C
    if (ctx->r15 != ctx->r1) {
        // 0x802613B4: lui         $v0, 0x8010
        ctx->r2 = S32(0X8010 << 16);
            goto L_8026144C;
    }
    // 0x802613B4: lui         $v0, 0x8010
    ctx->r2 = S32(0X8010 << 16);
    // 0x802613B8: lui         $t8, 0x802C
    ctx->r24 = S32(0X802C << 16);
    // 0x802613BC: lhu         $t8, 0x3A90($t8)
    ctx->r24 = MEM_HU(ctx->r24, 0X3A90);
    // 0x802613C0: lui         $v0, 0x8009
    ctx->r2 = S32(0X8009 << 16);
    // 0x802613C4: bne         $t8, $zero, L_80261434
    if (ctx->r24 != 0) {
        // 0x802613C8: nop
    
            goto L_80261434;
    }
    // 0x802613C8: nop

    // 0x802613CC: lw          $v0, 0x3B20($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X3B20);
    // 0x802613D0: addiu       $at, $zero, 0x14
    ctx->r1 = ADD32(0, 0X14);
    // 0x802613D4: lbu         $t9, 0xBC($v0)
    ctx->r25 = MEM_BU(ctx->r2, 0XBC);
    // 0x802613D8: nop

    // 0x802613DC: bne         $t9, $at, L_80261424
    if (ctx->r25 != ctx->r1) {
        // 0x802613E0: nop
    
            goto L_80261424;
    }
    // 0x802613E0: nop

    // 0x802613E4: lw          $t0, 0x8C($v0)
    ctx->r8 = MEM_W(ctx->r2, 0X8C);
    // 0x802613E8: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x802613EC: lw          $t1, 0xD4($t0)
    ctx->r9 = MEM_W(ctx->r8, 0XD4);
    // 0x802613F0: addiu       $a0, $zero, 0x4E5
    ctx->r4 = ADD32(0, 0X4E5);
    // 0x802613F4: lbu         $t2, 0x4($t1)
    ctx->r10 = MEM_BU(ctx->r9, 0X4);
    // 0x802613F8: nop

    // 0x802613FC: bne         $t2, $at, L_80261414
    if (ctx->r10 != ctx->r1) {
        // 0x80261400: nop
    
            goto L_80261414;
    }
    // 0x80261400: nop

    // 0x80261404: jal         0x802A14C0
    // 0x80261408: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    LOOKUP_FUNC(0x802A14C0)(rdram, ctx);
        goto after_4;
    // 0x80261408: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_4:
    // 0x8026140C: b           L_80261440
    // 0x80261410: addiu       $t3, $zero, 0x12C
    ctx->r11 = ADD32(0, 0X12C);
        goto L_80261440;
    // 0x80261410: addiu       $t3, $zero, 0x12C
    ctx->r11 = ADD32(0, 0X12C);
L_80261414:
    // 0x80261414: jal         0x802612CC
    // 0x80261418: nop

    ovl_8024B800_func_802612CC(rdram, ctx);
        goto after_5;
    // 0x80261418: nop

    after_5:
    // 0x8026141C: b           L_80261440
    // 0x80261420: addiu       $t3, $zero, 0x12C
    ctx->r11 = ADD32(0, 0X12C);
        goto L_80261440;
    // 0x80261420: addiu       $t3, $zero, 0x12C
    ctx->r11 = ADD32(0, 0X12C);
L_80261424:
    // 0x80261424: jal         0x802612CC
    // 0x80261428: nop

    ovl_8024B800_func_802612CC(rdram, ctx);
        goto after_6;
    // 0x80261428: nop

    after_6:
    // 0x8026142C: b           L_80261440
    // 0x80261430: addiu       $t3, $zero, 0x12C
    ctx->r11 = ADD32(0, 0X12C);
        goto L_80261440;
    // 0x80261430: addiu       $t3, $zero, 0x12C
    ctx->r11 = ADD32(0, 0X12C);
L_80261434:
    // 0x80261434: jal         0x80076F34
    // 0x80261438: nop

    func_80076F34(rdram, ctx);
        goto after_7;
    // 0x80261438: nop

    after_7:
    // 0x8026143C: addiu       $t3, $zero, 0x12C
    ctx->r11 = ADD32(0, 0X12C);
L_80261440:
    // 0x80261440: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x80261444: b           L_802614E8
    // 0x80261448: sh          $t3, 0x3A90($at)
    MEM_H(0X3A90, ctx->r1) = ctx->r11;
        goto L_802614E8;
    // 0x80261448: sh          $t3, 0x3A90($at)
    MEM_H(0X3A90, ctx->r1) = ctx->r11;
L_8026144C:
    // 0x8026144C: lhu         $v0, 0x522A($v0)
    ctx->r2 = MEM_HU(ctx->r2, 0X522A);
    // 0x80261450: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80261454: andi        $t4, $v0, 0x3
    ctx->r12 = ctx->r2 & 0X3;
    // 0x80261458: beq         $t4, $zero, L_80261470
    if (ctx->r12 == 0) {
        // 0x8026145C: addiu       $a0, $zero, 0x46D
        ctx->r4 = ADD32(0, 0X46D);
            goto L_80261470;
    }
    // 0x8026145C: addiu       $a0, $zero, 0x46D
    ctx->r4 = ADD32(0, 0X46D);
    // 0x80261460: beq         $t4, $at, L_802614A8
    if (ctx->r12 == ctx->r1) {
        // 0x80261464: addiu       $a0, $zero, 0x46C
        ctx->r4 = ADD32(0, 0X46C);
            goto L_802614A8;
    }
    // 0x80261464: addiu       $a0, $zero, 0x46C
    ctx->r4 = ADD32(0, 0X46C);
    // 0x80261468: b           L_802614B8
    // 0x8026146C: addiu       $a0, $zero, 0x452
    ctx->r4 = ADD32(0, 0X452);
        goto L_802614B8;
    // 0x8026146C: addiu       $a0, $zero, 0x452
    ctx->r4 = ADD32(0, 0X452);
L_80261470:
    // 0x80261470: jal         0x802A14C0
    // 0x80261474: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    LOOKUP_FUNC(0x802A14C0)(rdram, ctx);
        goto after_8;
    // 0x80261474: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_8:
    // 0x80261478: lui         $t5, 0x8009
    ctx->r13 = S32(0X8009 << 16);
    // 0x8026147C: lw          $t5, 0x3B20($t5)
    ctx->r13 = MEM_W(ctx->r13, 0X3B20);
    // 0x80261480: nop

    // 0x80261484: lw          $t6, 0xB4($t5)
    ctx->r14 = MEM_W(ctx->r13, 0XB4);
    // 0x80261488: nop

    // 0x8026148C: lw          $t7, 0x24($t6)
    ctx->r15 = MEM_W(ctx->r14, 0X24);
    // 0x80261490: nop

    // 0x80261494: lbu         $a0, 0x0($t7)
    ctx->r4 = MEM_BU(ctx->r15, 0X0);
    // 0x80261498: jal         0x80079F98
    // 0x8026149C: nop

    func_80079F98(rdram, ctx);
        goto after_9;
    // 0x8026149C: nop

    after_9:
    // 0x802614A0: b           L_802614EC
    // 0x802614A4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_802614EC;
    // 0x802614A4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_802614A8:
    // 0x802614A8: jal         0x802A14C0
    // 0x802614AC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    LOOKUP_FUNC(0x802A14C0)(rdram, ctx);
        goto after_10;
    // 0x802614AC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_10:
    // 0x802614B0: b           L_802614EC
    // 0x802614B4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_802614EC;
    // 0x802614B4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_802614B8:
    // 0x802614B8: jal         0x802A14C0
    // 0x802614BC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    LOOKUP_FUNC(0x802A14C0)(rdram, ctx);
        goto after_11;
    // 0x802614BC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_11:
    // 0x802614C0: lui         $t8, 0x8009
    ctx->r24 = S32(0X8009 << 16);
    // 0x802614C4: lw          $t8, 0x3B20($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X3B20);
    // 0x802614C8: nop

    // 0x802614CC: lw          $t9, 0xB4($t8)
    ctx->r25 = MEM_W(ctx->r24, 0XB4);
    // 0x802614D0: nop

    // 0x802614D4: lw          $t0, 0x24($t9)
    ctx->r8 = MEM_W(ctx->r25, 0X24);
    // 0x802614D8: nop

    // 0x802614DC: lbu         $a0, 0x0($t0)
    ctx->r4 = MEM_BU(ctx->r8, 0X0);
    // 0x802614E0: jal         0x80079F98
    // 0x802614E4: nop

    func_80079F98(rdram, ctx);
        goto after_12;
    // 0x802614E4: nop

    after_12:
L_802614E8:
    // 0x802614E8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_802614EC:
    // 0x802614EC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x802614F0: jr          $ra
    // 0x802614F4: nop

    return;
    // 0x802614F4: nop

;}
RECOMP_FUNC void ovl_8024B800_func_802614F8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802614F8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802614FC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80261500: jal         0x800778DC
    // 0x80261504: nop

    func_800778DC(rdram, ctx);
        goto after_0;
    // 0x80261504: nop

    after_0:
    // 0x80261508: lui         $v0, 0x8009
    ctx->r2 = S32(0X8009 << 16);
    // 0x8026150C: lw          $v0, 0x3B20($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X3B20);
    // 0x80261510: lui         $at, 0x41F0
    ctx->r1 = S32(0X41F0 << 16);
    // 0x80261514: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x80261518: lwc1        $f4, 0x4($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X4);
    // 0x8026151C: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x80261520: c.lt.s      $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f4.fl < ctx->f6.fl;
    // 0x80261524: nop

    // 0x80261528: bc1f        L_80261584
    if (!c1cs) {
        // 0x8026152C: nop
    
            goto L_80261584;
    }
    // 0x8026152C: nop

    // 0x80261530: lwc1        $f0, 0x0($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X0);
    // 0x80261534: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x80261538: lui         $at, 0xC120
    ctx->r1 = S32(0XC120 << 16);
    // 0x8026153C: c.lt.s      $f8, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f8.fl < ctx->f0.fl;
    // 0x80261540: nop

    // 0x80261544: bc1f        L_8026155C
    if (!c1cs) {
        // 0x80261548: nop
    
            goto L_8026155C;
    }
    // 0x80261548: nop

    // 0x8026154C: jal         0x8026159C
    // 0x80261550: nop

    ovl_8024B800_func_8026159C(rdram, ctx);
        goto after_1;
    // 0x80261550: nop

    after_1:
    // 0x80261554: b           L_80261590
    // 0x80261558: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80261590;
    // 0x80261558: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8026155C:
    // 0x8026155C: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x80261560: nop

    // 0x80261564: c.lt.s      $f0, $f10
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f0.fl < ctx->f10.fl;
    // 0x80261568: nop

    // 0x8026156C: bc1f        L_80261590
    if (!c1cs) {
        // 0x80261570: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_80261590;
    }
    // 0x80261570: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80261574: jal         0x8026159C
    // 0x80261578: nop

    ovl_8024B800_func_8026159C(rdram, ctx);
        goto after_2;
    // 0x80261578: nop

    after_2:
    // 0x8026157C: b           L_80261590
    // 0x80261580: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80261590;
    // 0x80261580: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80261584:
    // 0x80261584: jal         0x80261678
    // 0x80261588: nop

    ovl_8024B800_func_80261678(rdram, ctx);
        goto after_3;
    // 0x80261588: nop

    after_3:
    // 0x8026158C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80261590:
    // 0x80261590: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80261594: jr          $ra
    // 0x80261598: nop

    return;
    // 0x80261598: nop

;}
RECOMP_FUNC void ovl_8024B800_func_8026159C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8026159C: lui         $v0, 0x8009
    ctx->r2 = S32(0X8009 << 16);
    // 0x802615A0: lw          $v0, 0x3B20($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X3B20);
    // 0x802615A4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802615A8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802615AC: mtc1        $zero, $f2
    ctx->f2.u32l = 0;
    // 0x802615B0: lwc1        $f0, 0x0($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X0);
    // 0x802615B4: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x802615B8: c.lt.s      $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f0.fl < ctx->f2.fl;
    // 0x802615BC: nop

    // 0x802615C0: bc1f        L_802615D8
    if (!c1cs) {
        // 0x802615C4: nop
    
            goto L_802615D8;
    }
    // 0x802615C4: nop

    // 0x802615C8: neg.s       $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = -ctx->f0.fl;
    // 0x802615CC: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x802615D0: b           L_802615DC
    // 0x802615D4: swc1        $f4, 0x3AB4($at)
    MEM_W(0X3AB4, ctx->r1) = ctx->f4.u32l;
        goto L_802615DC;
    // 0x802615D4: swc1        $f4, 0x3AB4($at)
    MEM_W(0X3AB4, ctx->r1) = ctx->f4.u32l;
L_802615D8:
    // 0x802615D8: swc1        $f0, 0x3AB4($at)
    MEM_W(0X3AB4, ctx->r1) = ctx->f0.u32l;
L_802615DC:
    // 0x802615DC: lw          $t6, 0x8C($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X8C);
    // 0x802615E0: nop

    // 0x802615E4: lw          $t7, 0xC8($t6)
    ctx->r15 = MEM_W(ctx->r14, 0XC8);
    // 0x802615E8: nop

    // 0x802615EC: lhu         $t8, 0x8($t7)
    ctx->r24 = MEM_HU(ctx->r15, 0X8);
    // 0x802615F0: nop

    // 0x802615F4: andi        $t9, $t8, 0x1
    ctx->r25 = ctx->r24 & 0X1;
    // 0x802615F8: beq         $t9, $zero, L_80261638
    if (ctx->r25 == 0) {
        // 0x802615FC: nop
    
            goto L_80261638;
    }
    // 0x802615FC: nop

    // 0x80261600: lwc1        $f6, 0x0($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0X0);
    // 0x80261604: nop

    // 0x80261608: c.lt.s      $f6, $f2
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f6.fl < ctx->f2.fl;
    // 0x8026160C: nop

    // 0x80261610: bc1f        L_80261628
    if (!c1cs) {
        // 0x80261614: nop
    
            goto L_80261628;
    }
    // 0x80261614: nop

    // 0x80261618: jal         0x802617E8
    // 0x8026161C: nop

    ovl_8024B800_func_802617E8(rdram, ctx);
        goto after_0;
    // 0x8026161C: nop

    after_0:
    // 0x80261620: b           L_8026166C
    // 0x80261624: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_8026166C;
    // 0x80261624: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80261628:
    // 0x80261628: jal         0x802618E0
    // 0x8026162C: nop

    ovl_8024B800_func_802618E0(rdram, ctx);
        goto after_1;
    // 0x8026162C: nop

    after_1:
    // 0x80261630: b           L_8026166C
    // 0x80261634: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_8026166C;
    // 0x80261634: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80261638:
    // 0x80261638: lwc1        $f8, 0x0($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X0);
    // 0x8026163C: nop

    // 0x80261640: c.lt.s      $f8, $f2
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f8.fl < ctx->f2.fl;
    // 0x80261644: nop

    // 0x80261648: bc1f        L_80261660
    if (!c1cs) {
        // 0x8026164C: nop
    
            goto L_80261660;
    }
    // 0x8026164C: nop

    // 0x80261650: jal         0x802618E0
    // 0x80261654: nop

    ovl_8024B800_func_802618E0(rdram, ctx);
        goto after_2;
    // 0x80261654: nop

    after_2:
    // 0x80261658: b           L_8026166C
    // 0x8026165C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_8026166C;
    // 0x8026165C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80261660:
    // 0x80261660: jal         0x802617E8
    // 0x80261664: nop

    ovl_8024B800_func_802617E8(rdram, ctx);
        goto after_3;
    // 0x80261664: nop

    after_3:
    // 0x80261668: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8026166C:
    // 0x8026166C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80261670: jr          $ra
    // 0x80261674: nop

    return;
    // 0x80261674: nop

;}
RECOMP_FUNC void ovl_8024B800_func_80261678(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80261678: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8026167C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80261680: jal         0x80015BC0
    // 0x80261684: addiu       $a0, $zero, 0x3D9
    ctx->r4 = ADD32(0, 0X3D9);
    func_80015BC0(rdram, ctx);
        goto after_0;
    // 0x80261684: addiu       $a0, $zero, 0x3D9
    ctx->r4 = ADD32(0, 0X3D9);
    after_0:
    // 0x80261688: lui         $t6, 0x8009
    ctx->r14 = S32(0X8009 << 16);
    // 0x8026168C: lw          $t6, 0x3B20($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X3B20);
    // 0x80261690: nop

    // 0x80261694: lw          $t7, 0x8C($t6)
    ctx->r15 = MEM_W(ctx->r14, 0X8C);
    // 0x80261698: nop

    // 0x8026169C: lw          $t8, 0xC8($t7)
    ctx->r24 = MEM_W(ctx->r15, 0XC8);
    // 0x802616A0: nop

    // 0x802616A4: lbu         $a0, 0x7($t8)
    ctx->r4 = MEM_BU(ctx->r24, 0X7);
    // 0x802616A8: jal         0x8007A08C
    // 0x802616AC: nop

    func_8007A08C(rdram, ctx);
        goto after_1;
    // 0x802616AC: nop

    after_1:
    // 0x802616B0: lui         $t9, 0x8009
    ctx->r25 = S32(0X8009 << 16);
    // 0x802616B4: lw          $t9, 0x3B20($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X3B20);
    // 0x802616B8: lui         $at, 0x4220
    ctx->r1 = S32(0X4220 << 16);
    // 0x802616BC: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x802616C0: lwc1        $f4, 0x4($t9)
    ctx->f4.u32l = MEM_W(ctx->r25, 0X4);
    // 0x802616C4: lui         $v1, 0x8010
    ctx->r3 = S32(0X8010 << 16);
    // 0x802616C8: c.lt.s      $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f4.fl < ctx->f6.fl;
    // 0x802616CC: lui         $v0, 0x8010
    ctx->r2 = S32(0X8010 << 16);
    // 0x802616D0: bc1f        L_8026179C
    if (!c1cs) {
        // 0x802616D4: nop
    
            goto L_8026179C;
    }
    // 0x802616D4: nop

    // 0x802616D8: lhu         $v1, 0x522A($v1)
    ctx->r3 = MEM_HU(ctx->r3, 0X522A);
    // 0x802616DC: nop

    // 0x802616E0: andi        $t0, $v1, 0x1
    ctx->r8 = ctx->r3 & 0X1;
    // 0x802616E4: beq         $t0, $zero, L_80261720
    if (ctx->r8 == 0) {
        // 0x802616E8: andi        $v0, $v1, 0x7
        ctx->r2 = ctx->r3 & 0X7;
            goto L_80261720;
    }
    // 0x802616E8: andi        $v0, $v1, 0x7
    ctx->r2 = ctx->r3 & 0X7;
    // 0x802616EC: jal         0x802617E0
    // 0x802616F0: nop

    ovl_8024B800_func_802617E0(rdram, ctx);
        goto after_2;
    // 0x802616F0: nop

    after_2:
    // 0x802616F4: addiu       $a0, $zero, 0x577
    ctx->r4 = ADD32(0, 0X577);
    // 0x802616F8: jal         0x802A14C0
    // 0x802616FC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    LOOKUP_FUNC(0x802A14C0)(rdram, ctx);
        goto after_3;
    // 0x802616FC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_3:
    // 0x80261700: lui         $t1, 0x8009
    ctx->r9 = S32(0X8009 << 16);
    // 0x80261704: lw          $t1, 0x3B20($t1)
    ctx->r9 = MEM_W(ctx->r9, 0X3B20);
    // 0x80261708: nop

    // 0x8026170C: lw          $a0, 0x8C($t1)
    ctx->r4 = MEM_W(ctx->r9, 0X8C);
    // 0x80261710: jal         0x80079FD0
    // 0x80261714: nop

    func_80079FD0(rdram, ctx);
        goto after_4;
    // 0x80261714: nop

    after_4:
    // 0x80261718: b           L_8026178C
    // 0x8026171C: nop

        goto L_8026178C;
    // 0x8026171C: nop

L_80261720:
    // 0x80261720: beq         $v0, $zero, L_80261754
    if (ctx->r2 == 0) {
        // 0x80261724: addiu       $a0, $zero, 0x576
        ctx->r4 = ADD32(0, 0X576);
            goto L_80261754;
    }
    // 0x80261724: addiu       $a0, $zero, 0x576
    ctx->r4 = ADD32(0, 0X576);
    // 0x80261728: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x8026172C: beq         $v0, $at, L_80261764
    if (ctx->r2 == ctx->r1) {
        // 0x80261730: addiu       $a0, $zero, 0x46F
        ctx->r4 = ADD32(0, 0X46F);
            goto L_80261764;
    }
    // 0x80261730: addiu       $a0, $zero, 0x46F
    ctx->r4 = ADD32(0, 0X46F);
    // 0x80261734: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x80261738: beq         $v0, $at, L_80261774
    if (ctx->r2 == ctx->r1) {
        // 0x8026173C: addiu       $a0, $zero, 0x4F7
        ctx->r4 = ADD32(0, 0X4F7);
            goto L_80261774;
    }
    // 0x8026173C: addiu       $a0, $zero, 0x4F7
    ctx->r4 = ADD32(0, 0X4F7);
    // 0x80261740: addiu       $at, $zero, 0x6
    ctx->r1 = ADD32(0, 0X6);
    // 0x80261744: beq         $v0, $at, L_80261784
    if (ctx->r2 == ctx->r1) {
        // 0x80261748: addiu       $a0, $zero, 0x49B
        ctx->r4 = ADD32(0, 0X49B);
            goto L_80261784;
    }
    // 0x80261748: addiu       $a0, $zero, 0x49B
    ctx->r4 = ADD32(0, 0X49B);
    // 0x8026174C: b           L_8026178C
    // 0x80261750: nop

        goto L_8026178C;
    // 0x80261750: nop

L_80261754:
    // 0x80261754: jal         0x802A14C0
    // 0x80261758: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    LOOKUP_FUNC(0x802A14C0)(rdram, ctx);
        goto after_5;
    // 0x80261758: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_5:
    // 0x8026175C: b           L_8026178C
    // 0x80261760: nop

        goto L_8026178C;
    // 0x80261760: nop

L_80261764:
    // 0x80261764: jal         0x802A14C0
    // 0x80261768: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    LOOKUP_FUNC(0x802A14C0)(rdram, ctx);
        goto after_6;
    // 0x80261768: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_6:
    // 0x8026176C: b           L_8026178C
    // 0x80261770: nop

        goto L_8026178C;
    // 0x80261770: nop

L_80261774:
    // 0x80261774: jal         0x802A14C0
    // 0x80261778: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    LOOKUP_FUNC(0x802A14C0)(rdram, ctx);
        goto after_7;
    // 0x80261778: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_7:
    // 0x8026177C: b           L_8026178C
    // 0x80261780: nop

        goto L_8026178C;
    // 0x80261780: nop

L_80261784:
    // 0x80261784: jal         0x802A14C0
    // 0x80261788: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    LOOKUP_FUNC(0x802A14C0)(rdram, ctx);
        goto after_8;
    // 0x80261788: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_8:
L_8026178C:
    // 0x8026178C: jal         0x802619D8
    // 0x80261790: nop

    ovl_8024B800_func_802619D8(rdram, ctx);
        goto after_9;
    // 0x80261790: nop

    after_9:
    // 0x80261794: b           L_802617D4
    // 0x80261798: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_802617D4;
    // 0x80261798: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8026179C:
    // 0x8026179C: lhu         $v0, 0x522A($v0)
    ctx->r2 = MEM_HU(ctx->r2, 0X522A);
    // 0x802617A0: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x802617A4: andi        $t2, $v0, 0x1
    ctx->r10 = ctx->r2 & 0X1;
    // 0x802617A8: beq         $t2, $zero, L_802617B8
    if (ctx->r10 == 0) {
        // 0x802617AC: addiu       $a0, $zero, 0x576
        ctx->r4 = ADD32(0, 0X576);
            goto L_802617B8;
    }
    // 0x802617AC: addiu       $a0, $zero, 0x576
    ctx->r4 = ADD32(0, 0X576);
    // 0x802617B0: bne         $t2, $at, L_802617C8
    if (ctx->r10 != ctx->r1) {
        // 0x802617B4: or          $a1, $zero, $zero
        ctx->r5 = 0 | 0;
            goto L_802617C8;
    }
    // 0x802617B4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
L_802617B8:
    // 0x802617B8: jal         0x802A14C0
    // 0x802617BC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    LOOKUP_FUNC(0x802A14C0)(rdram, ctx);
        goto after_10;
    // 0x802617BC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_10:
    // 0x802617C0: b           L_802617D4
    // 0x802617C4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_802617D4;
    // 0x802617C4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_802617C8:
    // 0x802617C8: jal         0x802A14C0
    // 0x802617CC: addiu       $a0, $zero, 0x49B
    ctx->r4 = ADD32(0, 0X49B);
    LOOKUP_FUNC(0x802A14C0)(rdram, ctx);
        goto after_11;
    // 0x802617CC: addiu       $a0, $zero, 0x49B
    ctx->r4 = ADD32(0, 0X49B);
    after_11:
    // 0x802617D0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_802617D4:
    // 0x802617D4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x802617D8: jr          $ra
    // 0x802617DC: nop

    return;
    // 0x802617DC: nop

;}
RECOMP_FUNC void ovl_8024B800_func_802617E0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802617E0: jr          $ra
    // 0x802617E4: nop

    return;
    // 0x802617E4: nop

;}
RECOMP_FUNC void ovl_8024B800_func_802617E8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802617E8: lui         $t6, 0x8009
    ctx->r14 = S32(0X8009 << 16);
    // 0x802617EC: lw          $t6, 0x3B20($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X3B20);
    // 0x802617F0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802617F4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802617F8: lw          $t7, 0x8C($t6)
    ctx->r15 = MEM_W(ctx->r14, 0X8C);
    // 0x802617FC: nop

    // 0x80261800: lw          $t8, 0xC8($t7)
    ctx->r24 = MEM_W(ctx->r15, 0XC8);
    // 0x80261804: nop

    // 0x80261808: lbu         $a0, 0x7($t8)
    ctx->r4 = MEM_BU(ctx->r24, 0X7);
    // 0x8026180C: jal         0x8007A08C
    // 0x80261810: nop

    func_8007A08C(rdram, ctx);
        goto after_0;
    // 0x80261810: nop

    after_0:
    // 0x80261814: jal         0x80015BC0
    // 0x80261818: addiu       $a0, $zero, 0x3D9
    ctx->r4 = ADD32(0, 0X3D9);
    func_80015BC0(rdram, ctx);
        goto after_1;
    // 0x80261818: addiu       $a0, $zero, 0x3D9
    ctx->r4 = ADD32(0, 0X3D9);
    after_1:
    // 0x8026181C: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x80261820: lwc1        $f4, 0x3AB4($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X3AB4);
    // 0x80261824: lui         $at, 0x4220
    ctx->r1 = S32(0X4220 << 16);
    // 0x80261828: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x8026182C: lui         $t9, 0x8010
    ctx->r25 = S32(0X8010 << 16);
    // 0x80261830: c.lt.s      $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f4.fl < ctx->f6.fl;
    // 0x80261834: addiu       $a0, $zero, 0x466
    ctx->r4 = ADD32(0, 0X466);
    // 0x80261838: bc1f        L_802618BC
    if (!c1cs) {
        // 0x8026183C: nop
    
            goto L_802618BC;
    }
    // 0x8026183C: nop

    // 0x80261840: lhu         $t9, 0x522A($t9)
    ctx->r25 = MEM_HU(ctx->r25, 0X522A);
    // 0x80261844: addiu       $a0, $zero, 0x466
    ctx->r4 = ADD32(0, 0X466);
    // 0x80261848: andi        $t0, $t9, 0x1
    ctx->r8 = ctx->r25 & 0X1;
    // 0x8026184C: beq         $t0, $zero, L_80261898
    if (ctx->r8 == 0) {
        // 0x80261850: nop
    
            goto L_80261898;
    }
    // 0x80261850: nop

    // 0x80261854: jal         0x802617E0
    // 0x80261858: nop

    ovl_8024B800_func_802617E0(rdram, ctx);
        goto after_2;
    // 0x80261858: nop

    after_2:
    // 0x8026185C: lui         $t1, 0x8010
    ctx->r9 = S32(0X8010 << 16);
    // 0x80261860: lhu         $t1, 0x522A($t1)
    ctx->r9 = MEM_HU(ctx->r9, 0X522A);
    // 0x80261864: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x80261868: andi        $t2, $t1, 0x3
    ctx->r10 = ctx->r9 & 0X3;
    // 0x8026186C: bne         $t2, $at, L_80261888
    if (ctx->r10 != ctx->r1) {
        // 0x80261870: addiu       $a0, $zero, 0x5E7
        ctx->r4 = ADD32(0, 0X5E7);
            goto L_80261888;
    }
    // 0x80261870: addiu       $a0, $zero, 0x5E7
    ctx->r4 = ADD32(0, 0X5E7);
    // 0x80261874: addiu       $a0, $zero, 0x575
    ctx->r4 = ADD32(0, 0X575);
    // 0x80261878: jal         0x802A14C0
    // 0x8026187C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    LOOKUP_FUNC(0x802A14C0)(rdram, ctx);
        goto after_3;
    // 0x8026187C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_3:
    // 0x80261880: b           L_802618AC
    // 0x80261884: nop

        goto L_802618AC;
    // 0x80261884: nop

L_80261888:
    // 0x80261888: jal         0x802A14C0
    // 0x8026188C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    LOOKUP_FUNC(0x802A14C0)(rdram, ctx);
        goto after_4;
    // 0x8026188C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_4:
    // 0x80261890: b           L_802618AC
    // 0x80261894: nop

        goto L_802618AC;
    // 0x80261894: nop

L_80261898:
    // 0x80261898: jal         0x802A14C0
    // 0x8026189C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    LOOKUP_FUNC(0x802A14C0)(rdram, ctx);
        goto after_5;
    // 0x8026189C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_5:
    // 0x802618A0: addiu       $a0, $zero, 0x56F
    ctx->r4 = ADD32(0, 0X56F);
    // 0x802618A4: jal         0x802A14C0
    // 0x802618A8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    LOOKUP_FUNC(0x802A14C0)(rdram, ctx);
        goto after_6;
    // 0x802618A8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_6:
L_802618AC:
    // 0x802618AC: jal         0x802619D8
    // 0x802618B0: nop

    ovl_8024B800_func_802619D8(rdram, ctx);
        goto after_7;
    // 0x802618B0: nop

    after_7:
    // 0x802618B4: b           L_802618D4
    // 0x802618B8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_802618D4;
    // 0x802618B8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_802618BC:
    // 0x802618BC: jal         0x802A14C0
    // 0x802618C0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    LOOKUP_FUNC(0x802A14C0)(rdram, ctx);
        goto after_8;
    // 0x802618C0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_8:
    // 0x802618C4: addiu       $a0, $zero, 0x56F
    ctx->r4 = ADD32(0, 0X56F);
    // 0x802618C8: jal         0x802A14C0
    // 0x802618CC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    LOOKUP_FUNC(0x802A14C0)(rdram, ctx);
        goto after_9;
    // 0x802618CC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_9:
    // 0x802618D0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_802618D4:
    // 0x802618D4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x802618D8: jr          $ra
    // 0x802618DC: nop

    return;
    // 0x802618DC: nop

;}
RECOMP_FUNC void ovl_8024B800_func_802618E0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802618E0: lui         $t6, 0x8009
    ctx->r14 = S32(0X8009 << 16);
    // 0x802618E4: lw          $t6, 0x3B20($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X3B20);
    // 0x802618E8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802618EC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802618F0: lw          $t7, 0x8C($t6)
    ctx->r15 = MEM_W(ctx->r14, 0X8C);
    // 0x802618F4: nop

    // 0x802618F8: lw          $t8, 0xC8($t7)
    ctx->r24 = MEM_W(ctx->r15, 0XC8);
    // 0x802618FC: nop

    // 0x80261900: lbu         $a0, 0x7($t8)
    ctx->r4 = MEM_BU(ctx->r24, 0X7);
    // 0x80261904: jal         0x8007A08C
    // 0x80261908: nop

    func_8007A08C(rdram, ctx);
        goto after_0;
    // 0x80261908: nop

    after_0:
    // 0x8026190C: jal         0x80015BC0
    // 0x80261910: addiu       $a0, $zero, 0x3D9
    ctx->r4 = ADD32(0, 0X3D9);
    func_80015BC0(rdram, ctx);
        goto after_1;
    // 0x80261910: addiu       $a0, $zero, 0x3D9
    ctx->r4 = ADD32(0, 0X3D9);
    after_1:
    // 0x80261914: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x80261918: lwc1        $f4, 0x3AB4($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X3AB4);
    // 0x8026191C: lui         $at, 0x4220
    ctx->r1 = S32(0X4220 << 16);
    // 0x80261920: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x80261924: lui         $t9, 0x8010
    ctx->r25 = S32(0X8010 << 16);
    // 0x80261928: c.lt.s      $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f4.fl < ctx->f6.fl;
    // 0x8026192C: addiu       $a0, $zero, 0x466
    ctx->r4 = ADD32(0, 0X466);
    // 0x80261930: bc1f        L_802619B4
    if (!c1cs) {
        // 0x80261934: nop
    
            goto L_802619B4;
    }
    // 0x80261934: nop

    // 0x80261938: lhu         $t9, 0x522A($t9)
    ctx->r25 = MEM_HU(ctx->r25, 0X522A);
    // 0x8026193C: addiu       $a0, $zero, 0x466
    ctx->r4 = ADD32(0, 0X466);
    // 0x80261940: andi        $t0, $t9, 0x1
    ctx->r8 = ctx->r25 & 0X1;
    // 0x80261944: beq         $t0, $zero, L_80261990
    if (ctx->r8 == 0) {
        // 0x80261948: nop
    
            goto L_80261990;
    }
    // 0x80261948: nop

    // 0x8026194C: jal         0x802617E0
    // 0x80261950: nop

    ovl_8024B800_func_802617E0(rdram, ctx);
        goto after_2;
    // 0x80261950: nop

    after_2:
    // 0x80261954: lui         $t1, 0x8010
    ctx->r9 = S32(0X8010 << 16);
    // 0x80261958: lhu         $t1, 0x522A($t1)
    ctx->r9 = MEM_HU(ctx->r9, 0X522A);
    // 0x8026195C: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x80261960: andi        $t2, $t1, 0x3
    ctx->r10 = ctx->r9 & 0X3;
    // 0x80261964: bne         $t2, $at, L_80261980
    if (ctx->r10 != ctx->r1) {
        // 0x80261968: addiu       $a0, $zero, 0x5E7
        ctx->r4 = ADD32(0, 0X5E7);
            goto L_80261980;
    }
    // 0x80261968: addiu       $a0, $zero, 0x5E7
    ctx->r4 = ADD32(0, 0X5E7);
    // 0x8026196C: addiu       $a0, $zero, 0x575
    ctx->r4 = ADD32(0, 0X575);
    // 0x80261970: jal         0x802A14C0
    // 0x80261974: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    LOOKUP_FUNC(0x802A14C0)(rdram, ctx);
        goto after_3;
    // 0x80261974: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_3:
    // 0x80261978: b           L_802619A4
    // 0x8026197C: nop

        goto L_802619A4;
    // 0x8026197C: nop

L_80261980:
    // 0x80261980: jal         0x802A14C0
    // 0x80261984: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    LOOKUP_FUNC(0x802A14C0)(rdram, ctx);
        goto after_4;
    // 0x80261984: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_4:
    // 0x80261988: b           L_802619A4
    // 0x8026198C: nop

        goto L_802619A4;
    // 0x8026198C: nop

L_80261990:
    // 0x80261990: jal         0x802A14C0
    // 0x80261994: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    LOOKUP_FUNC(0x802A14C0)(rdram, ctx);
        goto after_5;
    // 0x80261994: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_5:
    // 0x80261998: addiu       $a0, $zero, 0x56E
    ctx->r4 = ADD32(0, 0X56E);
    // 0x8026199C: jal         0x802A14C0
    // 0x802619A0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    LOOKUP_FUNC(0x802A14C0)(rdram, ctx);
        goto after_6;
    // 0x802619A0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_6:
L_802619A4:
    // 0x802619A4: jal         0x802619D8
    // 0x802619A8: nop

    ovl_8024B800_func_802619D8(rdram, ctx);
        goto after_7;
    // 0x802619A8: nop

    after_7:
    // 0x802619AC: b           L_802619CC
    // 0x802619B0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_802619CC;
    // 0x802619B0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_802619B4:
    // 0x802619B4: jal         0x802A14C0
    // 0x802619B8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    LOOKUP_FUNC(0x802A14C0)(rdram, ctx);
        goto after_8;
    // 0x802619B8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_8:
    // 0x802619BC: addiu       $a0, $zero, 0x56E
    ctx->r4 = ADD32(0, 0X56E);
    // 0x802619C0: jal         0x802A14C0
    // 0x802619C4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    LOOKUP_FUNC(0x802A14C0)(rdram, ctx);
        goto after_9;
    // 0x802619C4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_9:
    // 0x802619C8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_802619CC:
    // 0x802619CC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x802619D0: jr          $ra
    // 0x802619D4: nop

    return;
    // 0x802619D4: nop

;}
RECOMP_FUNC void ovl_8024B800_func_802619D8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802619D8: lui         $t6, 0x8009
    ctx->r14 = S32(0X8009 << 16);
    // 0x802619DC: lw          $t6, 0x3B20($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X3B20);
    // 0x802619E0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802619E4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802619E8: lwc1        $f6, 0xC($t6)
    ctx->f6.u32l = MEM_W(ctx->r14, 0XC);
    // 0x802619EC: lui         $at, 0x4020
    ctx->r1 = S32(0X4020 << 16);
    // 0x802619F0: mtc1        $at, $f5
    ctx->f_odd[(5 - 1) * 2] = ctx->r1;
    // 0x802619F4: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x802619F8: cvt.d.s     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f8.d = CVT_D_S(ctx->f6.fl);
    // 0x802619FC: c.lt.d      $f4, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f4.d < ctx->f8.d;
    // 0x80261A00: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x80261A04: bc1f        L_80261A1C
    if (!c1cs) {
        // 0x80261A08: nop
    
            goto L_80261A1C;
    }
    // 0x80261A08: nop

    // 0x80261A0C: jal         0x80078048
    // 0x80261A10: nop

    func_80078048(rdram, ctx);
        goto after_0;
    // 0x80261A10: nop

    after_0:
    // 0x80261A14: b           L_80261A48
    // 0x80261A18: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80261A48;
    // 0x80261A18: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80261A1C:
    // 0x80261A1C: lwc1        $f10, 0x3AC0($at)
    ctx->f10.u32l = MEM_W(ctx->r1, 0X3AC0);
    // 0x80261A20: lui         $at, 0x4348
    ctx->r1 = S32(0X4348 << 16);
    // 0x80261A24: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x80261A28: nop

    // 0x80261A2C: c.lt.s      $f10, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f10.fl < ctx->f16.fl;
    // 0x80261A30: nop

    // 0x80261A34: bc1f        L_80261A48
    if (!c1cs) {
        // 0x80261A38: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_80261A48;
    }
    // 0x80261A38: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80261A3C: jal         0x80077F80
    // 0x80261A40: nop

    func_80077F80(rdram, ctx);
        goto after_1;
    // 0x80261A40: nop

    after_1:
    // 0x80261A44: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80261A48:
    // 0x80261A48: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80261A4C: jr          $ra
    // 0x80261A50: nop

    return;
    // 0x80261A50: nop

;}
RECOMP_FUNC void ovl_8024B800_func_80261A54(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80261A54: lui         $v0, 0x802C
    ctx->r2 = S32(0X802C << 16);
    // 0x80261A58: addiu       $v0, $v0, 0x3A96
    ctx->r2 = ADD32(ctx->r2, 0X3A96);
    // 0x80261A5C: addiu       $sp, $sp, -0x10
    ctx->r29 = ADD32(ctx->r29, -0X10);
    // 0x80261A60: addiu       $t6, $zero, 0xFE
    ctx->r14 = ADD32(0, 0XFE);
    // 0x80261A64: sb          $t6, 0x0($v0)
    MEM_B(0X0, ctx->r2) = ctx->r14;
    // 0x80261A68: lui         $t7, 0x8009
    ctx->r15 = S32(0X8009 << 16);
    // 0x80261A6C: lw          $t7, 0x3B20($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X3B20);
    // 0x80261A70: swc1        $f21, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x80261A74: swc1        $f20, 0xC($sp)
    MEM_W(0XC, ctx->r29) = ctx->f20.u32l;
    // 0x80261A78: sw          $a3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r7;
    // 0x80261A7C: lw          $t8, 0x8C($t7)
    ctx->r24 = MEM_W(ctx->r15, 0X8C);
    // 0x80261A80: mtc1        $a2, $f20
    ctx->f20.u32l = ctx->r6;
    // 0x80261A84: lw          $t9, 0xC8($t8)
    ctx->r25 = MEM_W(ctx->r24, 0XC8);
    // 0x80261A88: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x80261A8C: lhu         $t0, 0x8($t9)
    ctx->r8 = MEM_HU(ctx->r25, 0X8);
    // 0x80261A90: nop

    // 0x80261A94: andi        $t1, $t0, 0x1
    ctx->r9 = ctx->r8 & 0X1;
    // 0x80261A98: bne         $t1, $zero, L_80261AA4
    if (ctx->r9 != 0) {
        // 0x80261A9C: nop
    
            goto L_80261AA4;
    }
    // 0x80261A9C: nop

    // 0x80261AA0: neg.s       $f20, $f20
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f20.fl); 
    ctx->f20.fl = -ctx->f20.fl;
L_80261AA4:
    // 0x80261AA4: c.lt.s      $f20, $f4
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f20.fl < ctx->f4.fl;
    // 0x80261AA8: nop

    // 0x80261AAC: bc1f        L_80261AFC
    if (!c1cs) {
        // 0x80261AB0: nop
    
            goto L_80261AFC;
    }
    // 0x80261AB0: nop

    // 0x80261AB4: c.lt.s      $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    c1cs = ctx->f12.fl < ctx->f20.fl;
    // 0x80261AB8: lwc1        $f6, 0x1C($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x80261ABC: bc1f        L_80261B40
    if (!c1cs) {
        // 0x80261AC0: nop
    
            goto L_80261B40;
    }
    // 0x80261AC0: nop

    // 0x80261AC4: neg.s       $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = -ctx->f6.fl;
    // 0x80261AC8: c.lt.s      $f8, $f14
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 14);
    c1cs = ctx->f8.fl < ctx->f14.fl;
    // 0x80261ACC: nop

    // 0x80261AD0: bc1f        L_80261B40
    if (!c1cs) {
        // 0x80261AD4: nop
    
            goto L_80261B40;
    }
    // 0x80261AD4: nop

    // 0x80261AD8: c.lt.s      $f14, $f6
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f14.fl < ctx->f6.fl;
    // 0x80261ADC: nop

    // 0x80261AE0: bc1f        L_80261B40
    if (!c1cs) {
        // 0x80261AE4: nop
    
            goto L_80261B40;
    }
    // 0x80261AE4: nop

    // 0x80261AE8: lbu         $t2, 0x0($v0)
    ctx->r10 = MEM_BU(ctx->r2, 0X0);
    // 0x80261AEC: nop

    // 0x80261AF0: ori         $t3, $t2, 0x1
    ctx->r11 = ctx->r10 | 0X1;
    // 0x80261AF4: b           L_80261B40
    // 0x80261AF8: sb          $t3, 0x0($v0)
    MEM_B(0X0, ctx->r2) = ctx->r11;
        goto L_80261B40;
    // 0x80261AF8: sb          $t3, 0x0($v0)
    MEM_B(0X0, ctx->r2) = ctx->r11;
L_80261AFC:
    // 0x80261AFC: c.lt.s      $f20, $f12
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f20.fl < ctx->f12.fl;
    // 0x80261B00: lwc1        $f10, 0x1C($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x80261B04: bc1f        L_80261B40
    if (!c1cs) {
        // 0x80261B08: nop
    
            goto L_80261B40;
    }
    // 0x80261B08: nop

    // 0x80261B0C: neg.s       $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = -ctx->f10.fl;
    // 0x80261B10: c.lt.s      $f16, $f14
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 14);
    c1cs = ctx->f16.fl < ctx->f14.fl;
    // 0x80261B14: nop

    // 0x80261B18: bc1f        L_80261B40
    if (!c1cs) {
        // 0x80261B1C: nop
    
            goto L_80261B40;
    }
    // 0x80261B1C: nop

    // 0x80261B20: c.lt.s      $f14, $f10
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f14.fl < ctx->f10.fl;
    // 0x80261B24: nop

    // 0x80261B28: bc1f        L_80261B40
    if (!c1cs) {
        // 0x80261B2C: nop
    
            goto L_80261B40;
    }
    // 0x80261B2C: nop

    // 0x80261B30: lbu         $t4, 0x0($v0)
    ctx->r12 = MEM_BU(ctx->r2, 0X0);
    // 0x80261B34: nop

    // 0x80261B38: ori         $t5, $t4, 0x1
    ctx->r13 = ctx->r12 | 0X1;
    // 0x80261B3C: sb          $t5, 0x0($v0)
    MEM_B(0X0, ctx->r2) = ctx->r13;
L_80261B40:
    // 0x80261B40: lwc1        $f21, 0x8($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X8);
    // 0x80261B44: lwc1        $f20, 0xC($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0XC);
    // 0x80261B48: jr          $ra
    // 0x80261B4C: addiu       $sp, $sp, 0x10
    ctx->r29 = ADD32(ctx->r29, 0X10);
    return;
    // 0x80261B4C: addiu       $sp, $sp, 0x10
    ctx->r29 = ADD32(ctx->r29, 0X10);
;}
RECOMP_FUNC void ovl_8024B800_func_80261B50(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80261B50: sw          $a2, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r6;
    // 0x80261B54: lwc1        $f4, 0x8($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X8);
    // 0x80261B58: lui         $v0, 0x802C
    ctx->r2 = S32(0X802C << 16);
    // 0x80261B5C: sub.s       $f6, $f4, $f12
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f6.fl = ctx->f4.fl - ctx->f12.fl;
    // 0x80261B60: addiu       $v0, $v0, 0x3A98
    ctx->r2 = ADD32(ctx->r2, 0X3A98);
    // 0x80261B64: swc1        $f6, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->f6.u32l;
    // 0x80261B68: mtc1        $zero, $f2
    ctx->f2.u32l = 0;
    // 0x80261B6C: lwc1        $f0, 0x0($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X0);
    // 0x80261B70: sw          $a3, 0xC($sp)
    MEM_W(0XC, ctx->r29) = ctx->r7;
    // 0x80261B74: c.lt.s      $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f0.fl < ctx->f2.fl;
    // 0x80261B78: nop

    // 0x80261B7C: bc1f        L_80261B8C
    if (!c1cs) {
        // 0x80261B80: nop
    
            goto L_80261B8C;
    }
    // 0x80261B80: nop

    // 0x80261B84: neg.s       $f8, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = -ctx->f0.fl;
    // 0x80261B88: swc1        $f8, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->f8.u32l;
L_80261B8C:
    // 0x80261B8C: lwc1        $f10, 0xC($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0XC);
    // 0x80261B90: lui         $v0, 0x802C
    ctx->r2 = S32(0X802C << 16);
    // 0x80261B94: sub.s       $f16, $f10, $f14
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f16.fl = ctx->f10.fl - ctx->f14.fl;
    // 0x80261B98: addiu       $v0, $v0, 0x3A9C
    ctx->r2 = ADD32(ctx->r2, 0X3A9C);
    // 0x80261B9C: swc1        $f16, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->f16.u32l;
    // 0x80261BA0: lwc1        $f0, 0x0($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X0);
    // 0x80261BA4: nop

    // 0x80261BA8: c.lt.s      $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f0.fl < ctx->f2.fl;
    // 0x80261BAC: nop

    // 0x80261BB0: bc1f        L_80261BC0
    if (!c1cs) {
        // 0x80261BB4: nop
    
            goto L_80261BC0;
    }
    // 0x80261BB4: nop

    // 0x80261BB8: neg.s       $f18, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f18.fl = -ctx->f0.fl;
    // 0x80261BBC: swc1        $f18, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->f18.u32l;
L_80261BC0:
    // 0x80261BC0: jr          $ra
    // 0x80261BC4: nop

    return;
    // 0x80261BC4: nop

;}
RECOMP_FUNC void ovl_8024B800_func_80261BC8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80261BC8: lui         $v1, 0x8009
    ctx->r3 = S32(0X8009 << 16);
    // 0x80261BCC: lw          $v1, 0x3B20($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X3B20);
    // 0x80261BD0: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x80261BD4: lw          $a0, 0x8C($v1)
    ctx->r4 = MEM_W(ctx->r3, 0X8C);
    // 0x80261BD8: nop

    // 0x80261BDC: lhu         $v0, 0x1A($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X1A);
    // 0x80261BE0: lw          $a2, 0xC8($a0)
    ctx->r6 = MEM_W(ctx->r4, 0XC8);
    // 0x80261BE4: nop

    // 0x80261BE8: addu        $t6, $a2, $v0
    ctx->r14 = ADD32(ctx->r6, ctx->r2);
    // 0x80261BEC: lbu         $a1, 0x308($t6)
    ctx->r5 = MEM_BU(ctx->r14, 0X308);
    // 0x80261BF0: nop

    // 0x80261BF4: sll         $a3, $a1, 1
    ctx->r7 = S32(ctx->r5 << 1);
    // 0x80261BF8: addu        $t7, $a2, $a3
    ctx->r15 = ADD32(ctx->r6, ctx->r7);
    // 0x80261BFC: lbu         $t8, 0x2E8($t7)
    ctx->r24 = MEM_BU(ctx->r15, 0X2E8);
    // 0x80261C00: nop

    // 0x80261C04: sh          $t8, 0x3AA0($at)
    MEM_H(0X3AA0, ctx->r1) = ctx->r24;
    // 0x80261C08: lw          $t9, 0x8C($v1)
    ctx->r25 = MEM_W(ctx->r3, 0X8C);
    // 0x80261C0C: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x80261C10: lw          $t0, 0xC8($t9)
    ctx->r8 = MEM_W(ctx->r25, 0XC8);
    // 0x80261C14: nop

    // 0x80261C18: addu        $t1, $t0, $a3
    ctx->r9 = ADD32(ctx->r8, ctx->r7);
    // 0x80261C1C: lbu         $t2, 0x2E9($t1)
    ctx->r10 = MEM_BU(ctx->r9, 0X2E9);
    // 0x80261C20: jr          $ra
    // 0x80261C24: sh          $t2, 0x3AA2($at)
    MEM_H(0X3AA2, ctx->r1) = ctx->r10;
    return;
    // 0x80261C24: sh          $t2, 0x3AA2($at)
    MEM_H(0X3AA2, ctx->r1) = ctx->r10;
    // 0x80261C28: nop

    // 0x80261C2C: nop

;}
RECOMP_FUNC void ovl_8024B800_func_80261C30(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80261C30: lh          $t6, 0x8CC($a0)
    ctx->r14 = MEM_H(ctx->r4, 0X8CC);
    // 0x80261C34: lui         $at, 0x4316
    ctx->r1 = S32(0X4316 << 16);
    // 0x80261C38: mtc1        $a2, $f12
    ctx->f12.u32l = ctx->r6;
    // 0x80261C3C: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x80261C40: mtc1        $t6, $f4
    ctx->f4.u32l = ctx->r14;
    // 0x80261C44: mul.s       $f10, $f8, $f12
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f10.fl = MUL_S(ctx->f8.fl, ctx->f12.fl);
    // 0x80261C48: addiu       $t0, $zero, -0x136
    ctx->r8 = ADD32(0, -0X136);
    // 0x80261C4C: addiu       $t3, $zero, 0x122
    ctx->r11 = ADD32(0, 0X122);
    // 0x80261C50: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x80261C54: add.s       $f16, $f6, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f6.fl + ctx->f10.fl;
    // 0x80261C58: cfc1        $t7, $FpcCsr
    ctx->r15 = get_cop1_cs();
    // 0x80261C5C: nop

    // 0x80261C60: ori         $at, $t7, 0x3
    ctx->r1 = ctx->r15 | 0X3;
    // 0x80261C64: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x80261C68: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x80261C6C: nop

    // 0x80261C70: cvt.w.s     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.u32l = CVT_W_S(ctx->f16.fl);
    // 0x80261C74: mfc1        $v0, $f18
    ctx->r2 = (int32_t)ctx->f18.u32l;
    // 0x80261C78: ctc1        $t7, $FpcCsr
    set_cop1_cs(ctx->r15);
    // 0x80261C7C: sll         $t8, $v0, 16
    ctx->r24 = S32(ctx->r2 << 16);
    // 0x80261C80: sra         $t9, $t8, 16
    ctx->r25 = S32(SIGNED(ctx->r24) >> 16);
    // 0x80261C84: slti        $at, $t9, -0x136
    ctx->r1 = SIGNED(ctx->r25) < -0X136 ? 1 : 0;
    // 0x80261C88: beq         $at, $zero, L_80261C94
    if (ctx->r1 == 0) {
        // 0x80261C8C: sh          $t9, 0x8CE($a0)
        MEM_H(0X8CE, ctx->r4) = ctx->r25;
            goto L_80261C94;
    }
    // 0x80261C8C: sh          $t9, 0x8CE($a0)
    MEM_H(0X8CE, ctx->r4) = ctx->r25;
    // 0x80261C90: sh          $t0, 0x8CE($a0)
    MEM_H(0X8CE, ctx->r4) = ctx->r8;
L_80261C94:
    // 0x80261C94: lh          $v0, 0x8CE($a0)
    ctx->r2 = MEM_H(ctx->r4, 0X8CE);
    // 0x80261C98: nop

    // 0x80261C9C: negu        $v0, $v0
    ctx->r2 = SUB32(0, ctx->r2);
    // 0x80261CA0: sll         $t1, $v0, 16
    ctx->r9 = S32(ctx->r2 << 16);
    // 0x80261CA4: sra         $t2, $t1, 16
    ctx->r10 = S32(SIGNED(ctx->r9) >> 16);
    // 0x80261CA8: slti        $at, $t2, 0x123
    ctx->r1 = SIGNED(ctx->r10) < 0X123 ? 1 : 0;
    // 0x80261CAC: bne         $at, $zero, L_80261CB8
    if (ctx->r1 != 0) {
        // 0x80261CB0: sh          $t2, 0x8CE($a1)
        MEM_H(0X8CE, ctx->r5) = ctx->r10;
            goto L_80261CB8;
    }
    // 0x80261CB0: sh          $t2, 0x8CE($a1)
    MEM_H(0X8CE, ctx->r5) = ctx->r10;
    // 0x80261CB4: sh          $t3, 0x8CE($a1)
    MEM_H(0X8CE, ctx->r5) = ctx->r11;
L_80261CB8:
    // 0x80261CB8: jr          $ra
    // 0x80261CBC: nop

    return;
    // 0x80261CBC: nop

;}
RECOMP_FUNC void ovl_8024B800_func_80261CC0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80261CC0: lui         $t6, 0x8012
    ctx->r14 = S32(0X8012 << 16);
    // 0x80261CC4: lh          $t6, 0x9BC($t6)
    ctx->r14 = MEM_H(ctx->r14, 0X9BC);
    // 0x80261CC8: lui         $t7, 0x8009
    ctx->r15 = S32(0X8009 << 16);
    // 0x80261CCC: lw          $t7, 0x3B20($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X3B20);
    // 0x80261CD0: mtc1        $t6, $f4
    ctx->f4.u32l = ctx->r14;
    // 0x80261CD4: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80261CD8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80261CDC: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x80261CE0: lwc1        $f8, 0x8($t7)
    ctx->f8.u32l = MEM_W(ctx->r15, 0X8);
    // 0x80261CE4: jal         0x80272AEC
    // 0x80261CE8: sub.s       $f12, $f6, $f8
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f12.fl = ctx->f6.fl - ctx->f8.fl;
    ovl_8024B800_func_80272AEC(rdram, ctx);
        goto after_0;
    // 0x80261CE8: sub.s       $f12, $f6, $f8
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f12.fl = ctx->f6.fl - ctx->f8.fl;
    after_0:
    // 0x80261CEC: lui         $v0, 0x8009
    ctx->r2 = S32(0X8009 << 16);
    // 0x80261CF0: lw          $v0, 0x3B20($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X3B20);
    // 0x80261CF4: nop

    // 0x80261CF8: lw          $t8, 0x88($v0)
    ctx->r24 = MEM_W(ctx->r2, 0X88);
    // 0x80261CFC: nop

    // 0x80261D00: bne         $t8, $zero, L_80261D5C
    if (ctx->r24 != 0) {
        // 0x80261D04: nop
    
            goto L_80261D5C;
    }
    // 0x80261D04: nop

    // 0x80261D08: lw          $t9, 0x90($v0)
    ctx->r25 = MEM_W(ctx->r2, 0X90);
    // 0x80261D0C: nop

    // 0x80261D10: bne         $t9, $zero, L_80261D5C
    if (ctx->r25 != 0) {
        // 0x80261D14: nop
    
            goto L_80261D5C;
    }
    // 0x80261D14: nop

    // 0x80261D18: lw          $t0, 0xA0($v0)
    ctx->r8 = MEM_W(ctx->r2, 0XA0);
    // 0x80261D1C: nop

    // 0x80261D20: bne         $t0, $zero, L_80261D5C
    if (ctx->r8 != 0) {
        // 0x80261D24: nop
    
            goto L_80261D5C;
    }
    // 0x80261D24: nop

    // 0x80261D28: lw          $t1, 0xB0($v0)
    ctx->r9 = MEM_W(ctx->r2, 0XB0);
    // 0x80261D2C: lui         $t2, 0x8012
    ctx->r10 = S32(0X8012 << 16);
    // 0x80261D30: bne         $t1, $zero, L_80261D5C
    if (ctx->r9 != 0) {
        // 0x80261D34: nop
    
            goto L_80261D5C;
    }
    // 0x80261D34: nop

    // 0x80261D38: lhu         $t2, 0xB78($t2)
    ctx->r10 = MEM_HU(ctx->r10, 0XB78);
    // 0x80261D3C: lui         $at, 0x42C8
    ctx->r1 = S32(0X42C8 << 16);
    // 0x80261D40: bne         $t2, $zero, L_80261D5C
    if (ctx->r10 != 0) {
        // 0x80261D44: nop
    
            goto L_80261D5C;
    }
    // 0x80261D44: nop

    // 0x80261D48: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x80261D4C: nop

    // 0x80261D50: c.lt.s      $f10, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f10.fl < ctx->f0.fl;
    // 0x80261D54: nop

    // 0x80261D58: bc1f        L_80261DB0
    if (!c1cs) {
        // 0x80261D5C: lui         $t3, 0x8012
        ctx->r11 = S32(0X8012 << 16);
            goto L_80261DB0;
    }
L_80261D5C:
    // 0x80261D5C: lui         $t3, 0x8012
    ctx->r11 = S32(0X8012 << 16);
    // 0x80261D60: lhu         $t3, 0xB7A($t3)
    ctx->r11 = MEM_HU(ctx->r11, 0XB7A);
    // 0x80261D64: nop

    // 0x80261D68: beq         $t3, $zero, L_80261D84
    if (ctx->r11 == 0) {
        // 0x80261D6C: nop
    
            goto L_80261D84;
    }
    // 0x80261D6C: nop

    // 0x80261D70: lw          $t4, 0xB4($v0)
    ctx->r12 = MEM_W(ctx->r2, 0XB4);
    // 0x80261D74: lui         $at, 0x8028
    ctx->r1 = S32(0X8028 << 16);
    // 0x80261D78: lw          $a0, 0x24($t4)
    ctx->r4 = MEM_W(ctx->r12, 0X24);
    // 0x80261D7C: b           L_80261D98
    // 0x80261D80: sw          $a0, -0x1B1C($at)
    MEM_W(-0X1B1C, ctx->r1) = ctx->r4;
        goto L_80261D98;
    // 0x80261D80: sw          $a0, -0x1B1C($at)
    MEM_W(-0X1B1C, ctx->r1) = ctx->r4;
L_80261D84:
    // 0x80261D84: lw          $t5, 0x8C($v0)
    ctx->r13 = MEM_W(ctx->r2, 0X8C);
    // 0x80261D88: lui         $at, 0x8028
    ctx->r1 = S32(0X8028 << 16);
    // 0x80261D8C: lw          $t6, 0xC8($t5)
    ctx->r14 = MEM_W(ctx->r13, 0XC8);
    // 0x80261D90: nop

    // 0x80261D94: sw          $t6, -0x1B1C($at)
    MEM_W(-0X1B1C, ctx->r1) = ctx->r14;
L_80261D98:
    // 0x80261D98: lui         $a0, 0x8028
    ctx->r4 = S32(0X8028 << 16);
    // 0x80261D9C: lw          $a0, -0x1B1C($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X1B1C);
    // 0x80261DA0: lui         $at, 0x8028
    ctx->r1 = S32(0X8028 << 16);
    // 0x80261DA4: lw          $a1, 0x24($a0)
    ctx->r5 = MEM_W(ctx->r4, 0X24);
    // 0x80261DA8: nop

    // 0x80261DAC: sw          $a1, -0x1B18($at)
    MEM_W(-0X1B18, ctx->r1) = ctx->r5;
L_80261DB0:
    // 0x80261DB0: lui         $a0, 0x8028
    ctx->r4 = S32(0X8028 << 16);
    // 0x80261DB4: lw          $a0, -0x1B1C($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X1B1C);
    // 0x80261DB8: lui         $v0, 0x8028
    ctx->r2 = S32(0X8028 << 16);
    // 0x80261DBC: lui         $a1, 0x8028
    ctx->r5 = S32(0X8028 << 16);
    // 0x80261DC0: lw          $a1, -0x1B18($a1)
    ctx->r5 = MEM_W(ctx->r5, -0X1B18);
    // 0x80261DC4: addiu       $v0, $v0, -0x1B40
    ctx->r2 = ADD32(ctx->r2, -0X1B40);
    // 0x80261DC8: sh          $zero, 0x0($v0)
    MEM_H(0X0, ctx->r2) = 0;
    // 0x80261DCC: lh          $t7, 0x8AE($a0)
    ctx->r15 = MEM_H(ctx->r4, 0X8AE);
    // 0x80261DD0: nop

    // 0x80261DD4: bne         $t7, $zero, L_80261DF8
    if (ctx->r15 != 0) {
        // 0x80261DD8: addiu       $t8, $zero, 0x1
        ctx->r24 = ADD32(0, 0X1);
            goto L_80261DF8;
    }
    // 0x80261DD8: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x80261DDC: jal         0x80262A90
    // 0x80261DE0: sh          $t8, 0x0($v0)
    MEM_H(0X0, ctx->r2) = ctx->r24;
    ovl_8024B800_func_80262A90(rdram, ctx);
        goto after_1;
    // 0x80261DE0: sh          $t8, 0x0($v0)
    MEM_H(0X0, ctx->r2) = ctx->r24;
    after_1:
    // 0x80261DE4: lui         $a1, 0x8028
    ctx->r5 = S32(0X8028 << 16);
    // 0x80261DE8: lui         $a0, 0x8028
    ctx->r4 = S32(0X8028 << 16);
    // 0x80261DEC: lw          $a0, -0x1B1C($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X1B1C);
    // 0x80261DF0: lw          $a1, -0x1B18($a1)
    ctx->r5 = MEM_W(ctx->r5, -0X1B18);
    // 0x80261DF4: nop

L_80261DF8:
    // 0x80261DF8: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x80261DFC: sh          $t9, 0x8AE($a0)
    MEM_H(0X8AE, ctx->r4) = ctx->r25;
    // 0x80261E00: sh          $zero, 0x8AE($a1)
    MEM_H(0X8AE, ctx->r5) = 0;
    // 0x80261E04: lhu         $t0, 0x4($a0)
    ctx->r8 = MEM_HU(ctx->r4, 0X4);
    // 0x80261E08: addiu       $v0, $zero, 0x7
    ctx->r2 = ADD32(0, 0X7);
    // 0x80261E0C: bne         $v0, $t0, L_80261E20
    if (ctx->r2 != ctx->r8) {
        // 0x80261E10: lui         $t8, 0x8012
        ctx->r24 = S32(0X8012 << 16);
            goto L_80261E20;
    }
    // 0x80261E10: lui         $t8, 0x8012
    ctx->r24 = S32(0X8012 << 16);
    // 0x80261E14: addiu       $t1, $zero, 0x3C
    ctx->r9 = ADD32(0, 0X3C);
    // 0x80261E18: b           L_80261E2C
    // 0x80261E1C: sh          $t1, 0x8C6($a0)
    MEM_H(0X8C6, ctx->r4) = ctx->r9;
        goto L_80261E2C;
    // 0x80261E1C: sh          $t1, 0x8C6($a0)
    MEM_H(0X8C6, ctx->r4) = ctx->r9;
L_80261E20:
    // 0x80261E20: lh          $t2, 0x8C8($a0)
    ctx->r10 = MEM_H(ctx->r4, 0X8C8);
    // 0x80261E24: nop

    // 0x80261E28: sh          $t2, 0x8C6($a0)
    MEM_H(0X8C6, ctx->r4) = ctx->r10;
L_80261E2C:
    // 0x80261E2C: lhu         $t3, 0x4($a1)
    ctx->r11 = MEM_HU(ctx->r5, 0X4);
    // 0x80261E30: nop

    // 0x80261E34: bne         $v0, $t3, L_80261E44
    if (ctx->r2 != ctx->r11) {
        // 0x80261E38: addiu       $t4, $zero, 0x3C
        ctx->r12 = ADD32(0, 0X3C);
            goto L_80261E44;
    }
    // 0x80261E38: addiu       $t4, $zero, 0x3C
    ctx->r12 = ADD32(0, 0X3C);
    // 0x80261E3C: b           L_80261E50
    // 0x80261E40: sh          $t4, 0x8C6($a1)
    MEM_H(0X8C6, ctx->r5) = ctx->r12;
        goto L_80261E50;
    // 0x80261E40: sh          $t4, 0x8C6($a1)
    MEM_H(0X8C6, ctx->r5) = ctx->r12;
L_80261E44:
    // 0x80261E44: lh          $t5, 0x8C8($a1)
    ctx->r13 = MEM_H(ctx->r5, 0X8C8);
    // 0x80261E48: nop

    // 0x80261E4C: sh          $t5, 0x8C6($a1)
    MEM_H(0X8C6, ctx->r5) = ctx->r13;
L_80261E50:
    // 0x80261E50: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x80261E54: lhu         $v0, 0xB78($v0)
    ctx->r2 = MEM_HU(ctx->r2, 0XB78);
    // 0x80261E58: lui         $v1, 0x8012
    ctx->r3 = S32(0X8012 << 16);
    // 0x80261E5C: beq         $v0, $zero, L_80261E74
    if (ctx->r2 == 0) {
        // 0x80261E60: addiu       $v1, $v1, 0xB44
        ctx->r3 = ADD32(ctx->r3, 0XB44);
            goto L_80261E74;
    }
    // 0x80261E60: addiu       $v1, $v1, 0xB44
    ctx->r3 = ADD32(ctx->r3, 0XB44);
    // 0x80261E64: lui         $v1, 0x8012
    ctx->r3 = S32(0X8012 << 16);
    // 0x80261E68: addiu       $v1, $v1, 0xB44
    ctx->r3 = ADD32(ctx->r3, 0XB44);
    // 0x80261E6C: b           L_80261E84
    // 0x80261E70: sw          $zero, 0x0($v1)
    MEM_W(0X0, ctx->r3) = 0;
        goto L_80261E84;
    // 0x80261E70: sw          $zero, 0x0($v1)
    MEM_W(0X0, ctx->r3) = 0;
L_80261E74:
    // 0x80261E74: lw          $t6, 0x0($v1)
    ctx->r14 = MEM_W(ctx->r3, 0X0);
    // 0x80261E78: nop

    // 0x80261E7C: addiu       $t7, $t6, 0x1
    ctx->r15 = ADD32(ctx->r14, 0X1);
    // 0x80261E80: sw          $t7, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r15;
L_80261E84:
    // 0x80261E84: lhu         $t8, 0xB7A($t8)
    ctx->r24 = MEM_HU(ctx->r24, 0XB7A);
    // 0x80261E88: nop

    // 0x80261E8C: sltiu       $at, $t8, 0xA
    ctx->r1 = ctx->r24 < 0XA ? 1 : 0;
    // 0x80261E90: beq         $at, $zero, L_80261FA0
    if (ctx->r1 == 0) {
        // 0x80261E94: sll         $t8, $t8, 2
        ctx->r24 = S32(ctx->r24 << 2);
            goto L_80261FA0;
    }
    // 0x80261E94: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x80261E98: lui         $at, 0x8028
    ctx->r1 = S32(0X8028 << 16);
    // 0x80261E9C: addu        $at, $at, $t8
    gpr jr_addend_80261EA8 = ctx->r24;
    ctx->r1 = ADD32(ctx->r1, ctx->r24);
    // 0x80261EA0: lw          $t8, -0x2E50($at)
    ctx->r24 = ADD32(ctx->r1, -0X2E50);
    // 0x80261EA4: nop

    // 0x80261EA8: jr          $t8
    // 0x80261EAC: nop

    switch (jr_addend_80261EA8 >> 2) {
        case 0: goto L_80261F1C; break;
        case 1: goto L_80261F68; break;
        case 2: goto L_80261EB0; break;
        case 3: goto L_80261F68; break;
        case 4: goto L_80261F84; break;
        case 5: goto L_80261ECC; break;
        case 6: goto L_80261ECC; break;
        case 7: goto L_80261ECC; break;
        case 8: goto L_80261F84; break;
        case 9: goto L_80261F68; break;
        default: switch_error(__func__, 0x80261EA8, 0x8027D1B0);
    }
    // 0x80261EAC: nop

L_80261EB0:
    // 0x80261EB0: lui         $at, 0x8028
    ctx->r1 = S32(0X8028 << 16);
    // 0x80261EB4: sw          $a0, -0x1B1C($at)
    MEM_W(-0X1B1C, ctx->r1) = ctx->r4;
    // 0x80261EB8: lui         $at, 0x8028
    ctx->r1 = S32(0X8028 << 16);
    // 0x80261EBC: jal         0x80262214
    // 0x80261EC0: sw          $a1, -0x1B18($at)
    MEM_W(-0X1B18, ctx->r1) = ctx->r5;
    ovl_8024B800_func_80262214(rdram, ctx);
        goto after_2;
    // 0x80261EC0: sw          $a1, -0x1B18($at)
    MEM_W(-0X1B18, ctx->r1) = ctx->r5;
    after_2:
    // 0x80261EC4: b           L_80261FB0
    // 0x80261EC8: nop

        goto L_80261FB0;
    // 0x80261EC8: nop

L_80261ECC:
    // 0x80261ECC: beq         $v0, $zero, L_80261EF0
    if (ctx->r2 == 0) {
        // 0x80261ED0: lui         $at, 0x8028
        ctx->r1 = S32(0X8028 << 16);
            goto L_80261EF0;
    }
    // 0x80261ED0: lui         $at, 0x8028
    ctx->r1 = S32(0X8028 << 16);
    // 0x80261ED4: lui         $at, 0x8028
    ctx->r1 = S32(0X8028 << 16);
    // 0x80261ED8: sw          $a0, -0x1B1C($at)
    MEM_W(-0X1B1C, ctx->r1) = ctx->r4;
    // 0x80261EDC: lui         $at, 0x8028
    ctx->r1 = S32(0X8028 << 16);
    // 0x80261EE0: jal         0x8026210C
    // 0x80261EE4: sw          $a1, -0x1B18($at)
    MEM_W(-0X1B18, ctx->r1) = ctx->r5;
    ovl_8024B800_func_8026210C(rdram, ctx);
        goto after_3;
    // 0x80261EE4: sw          $a1, -0x1B18($at)
    MEM_W(-0X1B18, ctx->r1) = ctx->r5;
    after_3:
    // 0x80261EE8: b           L_80261FB0
    // 0x80261EEC: nop

        goto L_80261FB0;
    // 0x80261EEC: nop

L_80261EF0:
    // 0x80261EF0: lh          $a3, 0x8C4($a1)
    ctx->r7 = MEM_H(ctx->r5, 0X8C4);
    // 0x80261EF4: lh          $a2, 0x8C4($a0)
    ctx->r6 = MEM_H(ctx->r4, 0X8C4);
    // 0x80261EF8: sw          $a0, -0x1B1C($at)
    MEM_W(-0X1B1C, ctx->r1) = ctx->r4;
    // 0x80261EFC: negu        $a3, $a3
    ctx->r7 = SUB32(0, ctx->r7);
    // 0x80261F00: sll         $t9, $a3, 16
    ctx->r25 = S32(ctx->r7 << 16);
    // 0x80261F04: lui         $at, 0x8028
    ctx->r1 = S32(0X8028 << 16);
    // 0x80261F08: sw          $a1, -0x1B18($at)
    MEM_W(-0X1B18, ctx->r1) = ctx->r5;
    // 0x80261F0C: jal         0x8026239C
    // 0x80261F10: sra         $a3, $t9, 16
    ctx->r7 = S32(SIGNED(ctx->r25) >> 16);
    ovl_8024B800_func_8026239C(rdram, ctx);
        goto after_4;
    // 0x80261F10: sra         $a3, $t9, 16
    ctx->r7 = S32(SIGNED(ctx->r25) >> 16);
    after_4:
    // 0x80261F14: b           L_80261FB0
    // 0x80261F18: nop

        goto L_80261FB0;
    // 0x80261F18: nop

L_80261F1C:
    // 0x80261F1C: lui         $t1, 0x8009
    ctx->r9 = S32(0X8009 << 16);
    // 0x80261F20: lw          $t1, 0x3B20($t1)
    ctx->r9 = MEM_W(ctx->r9, 0X3B20);
    // 0x80261F24: lui         $at, 0x8028
    ctx->r1 = S32(0X8028 << 16);
    // 0x80261F28: lhu         $t2, 0xC2($t1)
    ctx->r10 = MEM_HU(ctx->r9, 0XC2);
    // 0x80261F2C: nop

    // 0x80261F30: andi        $t3, $t2, 0x40
    ctx->r11 = ctx->r10 & 0X40;
    // 0x80261F34: bne         $t3, $zero, L_80261F68
    if (ctx->r11 != 0) {
        // 0x80261F38: nop
    
            goto L_80261F68;
    }
    // 0x80261F38: nop

    // 0x80261F3C: lh          $a3, 0x8C4($a1)
    ctx->r7 = MEM_H(ctx->r5, 0X8C4);
    // 0x80261F40: lh          $a2, 0x8C4($a0)
    ctx->r6 = MEM_H(ctx->r4, 0X8C4);
    // 0x80261F44: sw          $a0, -0x1B1C($at)
    MEM_W(-0X1B1C, ctx->r1) = ctx->r4;
    // 0x80261F48: negu        $a3, $a3
    ctx->r7 = SUB32(0, ctx->r7);
    // 0x80261F4C: sll         $t4, $a3, 16
    ctx->r12 = S32(ctx->r7 << 16);
    // 0x80261F50: lui         $at, 0x8028
    ctx->r1 = S32(0X8028 << 16);
    // 0x80261F54: sw          $a1, -0x1B18($at)
    MEM_W(-0X1B18, ctx->r1) = ctx->r5;
    // 0x80261F58: jal         0x8026239C
    // 0x80261F5C: sra         $a3, $t4, 16
    ctx->r7 = S32(SIGNED(ctx->r12) >> 16);
    ovl_8024B800_func_8026239C(rdram, ctx);
        goto after_5;
    // 0x80261F5C: sra         $a3, $t4, 16
    ctx->r7 = S32(SIGNED(ctx->r12) >> 16);
    after_5:
    // 0x80261F60: b           L_80261FB0
    // 0x80261F64: nop

        goto L_80261FB0;
    // 0x80261F64: nop

L_80261F68:
    // 0x80261F68: lui         $at, 0x8028
    ctx->r1 = S32(0X8028 << 16);
    // 0x80261F6C: sw          $a0, -0x1B1C($at)
    MEM_W(-0X1B1C, ctx->r1) = ctx->r4;
    // 0x80261F70: lui         $at, 0x8028
    ctx->r1 = S32(0X8028 << 16);
    // 0x80261F74: jal         0x80262334
    // 0x80261F78: sw          $a1, -0x1B18($at)
    MEM_W(-0X1B18, ctx->r1) = ctx->r5;
    ovl_8024B800_func_80262334(rdram, ctx);
        goto after_6;
    // 0x80261F78: sw          $a1, -0x1B18($at)
    MEM_W(-0X1B18, ctx->r1) = ctx->r5;
    after_6:
    // 0x80261F7C: b           L_80261FB0
    // 0x80261F80: nop

        goto L_80261FB0;
    // 0x80261F80: nop

L_80261F84:
    // 0x80261F84: lui         $at, 0x8028
    ctx->r1 = S32(0X8028 << 16);
    // 0x80261F88: sw          $a0, -0x1B1C($at)
    MEM_W(-0X1B1C, ctx->r1) = ctx->r4;
    // 0x80261F8C: lui         $at, 0x8028
    ctx->r1 = S32(0X8028 << 16);
    // 0x80261F90: jal         0x802622E8
    // 0x80261F94: sw          $a1, -0x1B18($at)
    MEM_W(-0X1B18, ctx->r1) = ctx->r5;
    ovl_8024B800_func_802622E8(rdram, ctx);
        goto after_7;
    // 0x80261F94: sw          $a1, -0x1B18($at)
    MEM_W(-0X1B18, ctx->r1) = ctx->r5;
    after_7:
    // 0x80261F98: b           L_80261FB0
    // 0x80261F9C: nop

        goto L_80261FB0;
    // 0x80261F9C: nop

L_80261FA0:
    // 0x80261FA0: lui         $at, 0x8028
    ctx->r1 = S32(0X8028 << 16);
    // 0x80261FA4: sw          $a0, -0x1B1C($at)
    MEM_W(-0X1B1C, ctx->r1) = ctx->r4;
    // 0x80261FA8: lui         $at, 0x8028
    ctx->r1 = S32(0X8028 << 16);
    // 0x80261FAC: sw          $a1, -0x1B18($at)
    MEM_W(-0X1B18, ctx->r1) = ctx->r5;
L_80261FB0:
    // 0x80261FB0: lui         $a0, 0x8028
    ctx->r4 = S32(0X8028 << 16);
    // 0x80261FB4: lw          $a0, -0x1B1C($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X1B1C);
    // 0x80261FB8: jal         0x8026A674
    // 0x80261FBC: nop

    ovl_8024B800_func_8026A674(rdram, ctx);
        goto after_8;
    // 0x80261FBC: nop

    after_8:
    // 0x80261FC0: lui         $a0, 0x8028
    ctx->r4 = S32(0X8028 << 16);
    // 0x80261FC4: lw          $a0, -0x1B18($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X1B18);
    // 0x80261FC8: jal         0x8026A674
    // 0x80261FCC: nop

    ovl_8024B800_func_8026A674(rdram, ctx);
        goto after_9;
    // 0x80261FCC: nop

    after_9:
    // 0x80261FD0: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x80261FD4: addiu       $v0, $v0, -0x2CF0
    ctx->r2 = ADD32(ctx->r2, -0X2CF0);
    // 0x80261FD8: lh          $t6, 0x8CC($v0)
    ctx->r14 = MEM_H(ctx->r2, 0X8CC);
    // 0x80261FDC: lh          $t7, 0x1360($v0)
    ctx->r15 = MEM_H(ctx->r2, 0X1360);
    // 0x80261FE0: mtc1        $t6, $f16
    ctx->f16.u32l = ctx->r14;
    // 0x80261FE4: mtc1        $t7, $f18
    ctx->f18.u32l = ctx->r15;
    // 0x80261FE8: cvt.s.w     $f0, $f16
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    ctx->f0.fl = CVT_S_W(ctx->f16.u32l);
    // 0x80261FEC: cvt.s.w     $f2, $f18
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 18);
    ctx->f2.fl = CVT_S_W(ctx->f18.u32l);
    // 0x80261FF0: jal         0x80272AEC
    // 0x80261FF4: add.s       $f12, $f0, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f12.fl = ctx->f0.fl + ctx->f2.fl;
    ovl_8024B800_func_80272AEC(rdram, ctx);
        goto after_10;
    // 0x80261FF4: add.s       $f12, $f0, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f12.fl = ctx->f0.fl + ctx->f2.fl;
    after_10:
    // 0x80261FF8: lui         $at, 0x43B4
    ctx->r1 = S32(0X43B4 << 16);
    // 0x80261FFC: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80262000: lui         $at, 0x3FF0
    ctx->r1 = S32(0X3FF0 << 16);
    // 0x80262004: div.s       $f2, $f0, $f4
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f2.fl = DIV_S(ctx->f0.fl, ctx->f4.fl);
    // 0x80262008: mtc1        $at, $f7
    ctx->f_odd[(7 - 1) * 2] = ctx->r1;
    // 0x8026200C: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x80262010: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x80262014: addiu       $v0, $v0, -0x2CF0
    ctx->r2 = ADD32(ctx->r2, -0X2CF0);
    // 0x80262018: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x8026201C: lui         $a0, 0x8028
    ctx->r4 = S32(0X8028 << 16);
    // 0x80262020: lui         $a1, 0x8028
    ctx->r5 = S32(0X8028 << 16);
    // 0x80262024: cvt.d.s     $f8, $f2
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f8.d = CVT_D_S(ctx->f2.fl);
    // 0x80262028: c.lt.d      $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f6.d < ctx->f8.d;
    // 0x8026202C: nop

    // 0x80262030: bc1f        L_80262040
    if (!c1cs) {
        // 0x80262034: nop
    
            goto L_80262040;
    }
    // 0x80262034: nop

    // 0x80262038: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    // 0x8026203C: nop

L_80262040:
    // 0x80262040: swc1        $f2, 0x8D8($v0)
    MEM_W(0X8D8, ctx->r2) = ctx->f2.u32l;
    // 0x80262044: swc1        $f2, 0x136C($v0)
    MEM_W(0X136C, ctx->r2) = ctx->f2.u32l;
    // 0x80262048: lw          $a1, -0x1B1C($a1)
    ctx->r5 = MEM_W(ctx->r5, -0X1B1C);
    // 0x8026204C: lw          $a0, -0x1B18($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X1B18);
    // 0x80262050: mfc1        $a2, $f2
    ctx->r6 = (int32_t)ctx->f2.u32l;
    // 0x80262054: jal         0x80261C30
    // 0x80262058: swc1        $f2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f2.u32l;
    ovl_8024B800_func_80261C30(rdram, ctx);
        goto after_11;
    // 0x80262058: swc1        $f2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f2.u32l;
    after_11:
    // 0x8026205C: lwc1        $f2, 0x18($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X18);
    // 0x80262060: lui         $a0, 0x8028
    ctx->r4 = S32(0X8028 << 16);
    // 0x80262064: lw          $a0, -0x1B1C($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X1B1C);
    // 0x80262068: mfc1        $a1, $f2
    ctx->r5 = (int32_t)ctx->f2.u32l;
    // 0x8026206C: jal         0x8026A5AC
    // 0x80262070: nop

    ovl_8024B800_func_8026A5AC(rdram, ctx);
        goto after_12;
    // 0x80262070: nop

    after_12:
    // 0x80262074: lwc1        $f2, 0x18($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X18);
    // 0x80262078: lui         $a0, 0x8028
    ctx->r4 = S32(0X8028 << 16);
    // 0x8026207C: lw          $a0, -0x1B18($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X1B18);
    // 0x80262080: mfc1        $a1, $f2
    ctx->r5 = (int32_t)ctx->f2.u32l;
    // 0x80262084: jal         0x8026A5AC
    // 0x80262088: nop

    ovl_8024B800_func_8026A5AC(rdram, ctx);
        goto after_13;
    // 0x80262088: nop

    after_13:
    // 0x8026208C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80262090: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80262094: jr          $ra
    // 0x80262098: nop

    return;
    // 0x80262098: nop

;}
RECOMP_FUNC void ovl_8024B800_func_8026209C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8026209C: sw          $a2, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r6;
    // 0x802620A0: sw          $a3, 0xC($sp)
    MEM_W(0XC, ctx->r29) = ctx->r7;
    // 0x802620A4: sh          $a2, 0x8C4($a0)
    MEM_H(0X8C4, ctx->r4) = ctx->r6;
    // 0x802620A8: sh          $a3, 0x8CA($a0)
    MEM_H(0X8CA, ctx->r4) = ctx->r7;
    // 0x802620AC: negu        $t0, $a3
    ctx->r8 = SUB32(0, ctx->r7);
    // 0x802620B0: negu        $t1, $a2
    ctx->r9 = SUB32(0, ctx->r6);
    // 0x802620B4: sh          $t0, 0x8C4($a1)
    MEM_H(0X8C4, ctx->r5) = ctx->r8;
    // 0x802620B8: jr          $ra
    // 0x802620BC: sh          $t1, 0x8CA($a1)
    MEM_H(0X8CA, ctx->r5) = ctx->r9;
    return;
    // 0x802620BC: sh          $t1, 0x8CA($a1)
    MEM_H(0X8CA, ctx->r5) = ctx->r9;
;}
RECOMP_FUNC void ovl_8024B800_func_802620C0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802620C0: sh          $zero, 0x8B6($a0)
    MEM_H(0X8B6, ctx->r4) = 0;
    // 0x802620C4: sh          $zero, 0x8B6($a1)
    MEM_H(0X8B6, ctx->r5) = 0;
    // 0x802620C8: sh          $zero, 0xE($a0)
    MEM_H(0XE, ctx->r4) = 0;
    // 0x802620CC: sh          $zero, 0xE($a1)
    MEM_H(0XE, ctx->r5) = 0;
    // 0x802620D0: addiu       $t6, $zero, -0x96
    ctx->r14 = ADD32(0, -0X96);
    // 0x802620D4: sh          $t6, 0x0($a2)
    MEM_H(0X0, ctx->r6) = ctx->r14;
    // 0x802620D8: addiu       $t7, $zero, 0xD2
    ctx->r15 = ADD32(0, 0XD2);
    // 0x802620DC: sh          $t7, 0x0($a3)
    MEM_H(0X0, ctx->r7) = ctx->r15;
    // 0x802620E0: lh          $t9, 0x8C6($a0)
    ctx->r25 = MEM_H(ctx->r4, 0X8C6);
    // 0x802620E4: lh          $t8, 0x0($a2)
    ctx->r24 = MEM_H(ctx->r6, 0X0);
    // 0x802620E8: nop

    // 0x802620EC: addu        $t0, $t8, $t9
    ctx->r8 = ADD32(ctx->r24, ctx->r25);
    // 0x802620F0: sh          $t0, 0x8CC($a0)
    MEM_H(0X8CC, ctx->r4) = ctx->r8;
    // 0x802620F4: lh          $t2, 0x0($a3)
    ctx->r10 = MEM_H(ctx->r7, 0X0);
    // 0x802620F8: lh          $t1, 0x8C6($a1)
    ctx->r9 = MEM_H(ctx->r5, 0X8C6);
    // 0x802620FC: nop

    // 0x80262100: subu        $t3, $t1, $t2
    ctx->r11 = SUB32(ctx->r9, ctx->r10);
    // 0x80262104: jr          $ra
    // 0x80262108: sh          $t3, 0x8CC($a1)
    MEM_H(0X8CC, ctx->r5) = ctx->r11;
    return;
    // 0x80262108: sh          $t3, 0x8CC($a1)
    MEM_H(0X8CC, ctx->r5) = ctx->r11;
;}
RECOMP_FUNC void ovl_8024B800_func_8026210C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8026210C: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80262110: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80262114: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80262118: lh          $t0, 0x8B0($a0)
    ctx->r8 = MEM_H(ctx->r4, 0X8B0);
    // 0x8026211C: or          $s0, $a1, $zero
    ctx->r16 = ctx->r5 | 0;
    // 0x80262120: slti        $at, $t0, -0x96
    ctx->r1 = SIGNED(ctx->r8) < -0X96 ? 1 : 0;
    // 0x80262124: beq         $at, $zero, L_8026215C
    if (ctx->r1 == 0) {
        // 0x80262128: addiu       $t8, $zero, 0x1
        ctx->r24 = ADD32(0, 0X1);
            goto L_8026215C;
    }
    // 0x80262128: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x8026212C: sh          $zero, 0x8B6($a0)
    MEM_H(0X8B6, ctx->r4) = 0;
    // 0x80262130: sh          $zero, 0x8B6($a1)
    MEM_H(0X8B6, ctx->r5) = 0;
    // 0x80262134: sh          $zero, 0xE($a0)
    MEM_H(0XE, ctx->r4) = 0;
    // 0x80262138: sh          $zero, 0xE($a1)
    MEM_H(0XE, ctx->r5) = 0;
    // 0x8026213C: lh          $a3, 0x8C4($s0)
    ctx->r7 = MEM_H(ctx->r16, 0X8C4);
    // 0x80262140: lh          $a2, 0x8C4($a0)
    ctx->r6 = MEM_H(ctx->r4, 0X8C4);
    // 0x80262144: negu        $a3, $a3
    ctx->r7 = SUB32(0, ctx->r7);
    // 0x80262148: sll         $t6, $a3, 16
    ctx->r14 = S32(ctx->r7 << 16);
    // 0x8026214C: jal         0x8026239C
    // 0x80262150: sra         $a3, $t6, 16
    ctx->r7 = S32(SIGNED(ctx->r14) >> 16);
    ovl_8024B800_func_8026239C(rdram, ctx);
        goto after_0;
    // 0x80262150: sra         $a3, $t6, 16
    ctx->r7 = S32(SIGNED(ctx->r14) >> 16);
    after_0:
    // 0x80262154: b           L_80262208
    // 0x80262158: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_80262208;
    // 0x80262158: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_8026215C:
    // 0x8026215C: sh          $t8, 0xE($a0)
    MEM_H(0XE, ctx->r4) = ctx->r24;
    // 0x80262160: addiu       $t9, $zero, 0x2
    ctx->r25 = ADD32(0, 0X2);
    // 0x80262164: sh          $t9, 0xE($s0)
    MEM_H(0XE, ctx->r16) = ctx->r25;
    // 0x80262168: lui         $t1, 0x8009
    ctx->r9 = S32(0X8009 << 16);
    // 0x8026216C: lw          $t1, 0x3B20($t1)
    ctx->r9 = MEM_W(ctx->r9, 0X3B20);
    // 0x80262170: nop

    // 0x80262174: lh          $a1, 0xE8($t1)
    ctx->r5 = MEM_H(ctx->r9, 0XE8);
    // 0x80262178: sh          $t0, 0x26($sp)
    MEM_H(0X26, ctx->r29) = ctx->r8;
    // 0x8026217C: addiu       $a1, $a1, 0x64
    ctx->r5 = ADD32(ctx->r5, 0X64);
    // 0x80262180: sll         $t2, $a1, 16
    ctx->r10 = S32(ctx->r5 << 16);
    // 0x80262184: sra         $a1, $t2, 16
    ctx->r5 = S32(SIGNED(ctx->r10) >> 16);
    // 0x80262188: jal         0x8026A7C8
    // 0x8026218C: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    ovl_8024B800_func_8026A7C8(rdram, ctx);
        goto after_1;
    // 0x8026218C: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    after_1:
    // 0x80262190: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    // 0x80262194: lh          $t0, 0x26($sp)
    ctx->r8 = MEM_H(ctx->r29, 0X26);
    // 0x80262198: sh          $v0, 0x8B0($a0)
    MEM_H(0X8B0, ctx->r4) = ctx->r2;
    // 0x8026219C: lh          $v1, 0x8B0($a0)
    ctx->r3 = MEM_H(ctx->r4, 0X8B0);
    // 0x802621A0: addiu       $t4, $zero, 0x15E
    ctx->r12 = ADD32(0, 0X15E);
    // 0x802621A4: bgez        $v1, L_802621B8
    if (SIGNED(ctx->r3) >= 0) {
        // 0x802621A8: or          $a1, $s0, $zero
        ctx->r5 = ctx->r16 | 0;
            goto L_802621B8;
    }
    // 0x802621A8: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x802621AC: sh          $zero, 0x8B0($a0)
    MEM_H(0X8B0, ctx->r4) = 0;
    // 0x802621B0: lh          $v1, 0x8B0($a0)
    ctx->r3 = MEM_H(ctx->r4, 0X8B0);
    // 0x802621B4: nop

L_802621B8:
    // 0x802621B8: slti        $at, $v1, 0x15F
    ctx->r1 = SIGNED(ctx->r3) < 0X15F ? 1 : 0;
    // 0x802621BC: bne         $at, $zero, L_802621C8
    if (ctx->r1 != 0) {
        // 0x802621C0: nop
    
            goto L_802621C8;
    }
    // 0x802621C0: nop

    // 0x802621C4: sh          $t4, 0x8B0($a0)
    MEM_H(0X8B0, ctx->r4) = ctx->r12;
L_802621C8:
    // 0x802621C8: lhu         $t5, 0x10($a0)
    ctx->r13 = MEM_HU(ctx->r4, 0X10);
    // 0x802621CC: lh          $a2, 0x8C4($a0)
    ctx->r6 = MEM_H(ctx->r4, 0X8C4);
    // 0x802621D0: ori         $t6, $t5, 0x20
    ctx->r14 = ctx->r13 | 0X20;
    // 0x802621D4: sh          $t6, 0x10($a0)
    MEM_H(0X10, ctx->r4) = ctx->r14;
    // 0x802621D8: lh          $a3, 0x8C4($s0)
    ctx->r7 = MEM_H(ctx->r16, 0X8C4);
    // 0x802621DC: sh          $t0, 0x26($sp)
    MEM_H(0X26, ctx->r29) = ctx->r8;
    // 0x802621E0: negu        $a3, $a3
    ctx->r7 = SUB32(0, ctx->r7);
    // 0x802621E4: sll         $t7, $a3, 16
    ctx->r15 = S32(ctx->r7 << 16);
    // 0x802621E8: sra         $a3, $t7, 16
    ctx->r7 = S32(SIGNED(ctx->r15) >> 16);
    // 0x802621EC: jal         0x8026239C
    // 0x802621F0: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    ovl_8024B800_func_8026239C(rdram, ctx);
        goto after_2;
    // 0x802621F0: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    after_2:
    // 0x802621F4: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    // 0x802621F8: lh          $t0, 0x26($sp)
    ctx->r8 = MEM_H(ctx->r29, 0X26);
    // 0x802621FC: nop

    // 0x80262200: sh          $t0, 0x8B0($a0)
    MEM_H(0X8B0, ctx->r4) = ctx->r8;
    // 0x80262204: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_80262208:
    // 0x80262208: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8026220C: jr          $ra
    // 0x80262210: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x80262210: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void ovl_8024B800_func_80262214(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80262214: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80262218: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8026221C: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80262220: lh          $v1, 0x8B0($a0)
    ctx->r3 = MEM_H(ctx->r4, 0X8B0);
    // 0x80262224: or          $s0, $a1, $zero
    ctx->r16 = ctx->r5 | 0;
    // 0x80262228: slti        $at, $v1, -0x96
    ctx->r1 = SIGNED(ctx->r3) < -0X96 ? 1 : 0;
    // 0x8026222C: beq         $at, $zero, L_80262264
    if (ctx->r1 == 0) {
        // 0x80262230: addiu       $t8, $zero, 0x1
        ctx->r24 = ADD32(0, 0X1);
            goto L_80262264;
    }
    // 0x80262230: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x80262234: sh          $zero, 0x8B6($a0)
    MEM_H(0X8B6, ctx->r4) = 0;
    // 0x80262238: sh          $zero, 0x8B6($a1)
    MEM_H(0X8B6, ctx->r5) = 0;
    // 0x8026223C: sh          $zero, 0xE($a0)
    MEM_H(0XE, ctx->r4) = 0;
    // 0x80262240: sh          $zero, 0xE($a1)
    MEM_H(0XE, ctx->r5) = 0;
    // 0x80262244: lh          $a3, 0x8C4($s0)
    ctx->r7 = MEM_H(ctx->r16, 0X8C4);
    // 0x80262248: lh          $a2, 0x8C4($a0)
    ctx->r6 = MEM_H(ctx->r4, 0X8C4);
    // 0x8026224C: negu        $a3, $a3
    ctx->r7 = SUB32(0, ctx->r7);
    // 0x80262250: sll         $t6, $a3, 16
    ctx->r14 = S32(ctx->r7 << 16);
    // 0x80262254: jal         0x8026239C
    // 0x80262258: sra         $a3, $t6, 16
    ctx->r7 = S32(SIGNED(ctx->r14) >> 16);
    ovl_8024B800_func_8026239C(rdram, ctx);
        goto after_0;
    // 0x80262258: sra         $a3, $t6, 16
    ctx->r7 = S32(SIGNED(ctx->r14) >> 16);
    after_0:
    // 0x8026225C: b           L_802622DC
    // 0x80262260: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_802622DC;
    // 0x80262260: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_80262264:
    // 0x80262264: sh          $t8, 0xE($a0)
    MEM_H(0XE, ctx->r4) = ctx->r24;
    // 0x80262268: addiu       $t9, $zero, 0x2
    ctx->r25 = ADD32(0, 0X2);
    // 0x8026226C: sh          $t9, 0xE($s0)
    MEM_H(0XE, ctx->r16) = ctx->r25;
    // 0x80262270: lui         $t0, 0x8009
    ctx->r8 = S32(0X8009 << 16);
    // 0x80262274: lw          $t0, 0x3B20($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X3B20);
    // 0x80262278: nop

    // 0x8026227C: lh          $a1, 0xE8($t0)
    ctx->r5 = MEM_H(ctx->r8, 0XE8);
    // 0x80262280: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x80262284: addiu       $a1, $a1, 0x96
    ctx->r5 = ADD32(ctx->r5, 0X96);
    // 0x80262288: sll         $t1, $a1, 16
    ctx->r9 = S32(ctx->r5 << 16);
    // 0x8026228C: sra         $a1, $t1, 16
    ctx->r5 = S32(SIGNED(ctx->r9) >> 16);
    // 0x80262290: jal         0x8026A7C8
    // 0x80262294: sh          $v1, 0x26($sp)
    MEM_H(0X26, ctx->r29) = ctx->r3;
    ovl_8024B800_func_8026A7C8(rdram, ctx);
        goto after_1;
    // 0x80262294: sh          $v1, 0x26($sp)
    MEM_H(0X26, ctx->r29) = ctx->r3;
    after_1:
    // 0x80262298: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    // 0x8026229C: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x802622A0: lhu         $t3, 0x10($a0)
    ctx->r11 = MEM_HU(ctx->r4, 0X10);
    // 0x802622A4: sh          $v0, 0x8B0($a0)
    MEM_H(0X8B0, ctx->r4) = ctx->r2;
    // 0x802622A8: ori         $t4, $t3, 0x20
    ctx->r12 = ctx->r11 | 0X20;
    // 0x802622AC: sh          $t4, 0x10($a0)
    MEM_H(0X10, ctx->r4) = ctx->r12;
    // 0x802622B0: lh          $a3, 0x8C4($s0)
    ctx->r7 = MEM_H(ctx->r16, 0X8C4);
    // 0x802622B4: lh          $a2, 0x8C4($a0)
    ctx->r6 = MEM_H(ctx->r4, 0X8C4);
    // 0x802622B8: negu        $a3, $a3
    ctx->r7 = SUB32(0, ctx->r7);
    // 0x802622BC: sll         $t5, $a3, 16
    ctx->r13 = S32(ctx->r7 << 16);
    // 0x802622C0: jal         0x8026239C
    // 0x802622C4: sra         $a3, $t5, 16
    ctx->r7 = S32(SIGNED(ctx->r13) >> 16);
    ovl_8024B800_func_8026239C(rdram, ctx);
        goto after_2;
    // 0x802622C4: sra         $a3, $t5, 16
    ctx->r7 = S32(SIGNED(ctx->r13) >> 16);
    after_2:
    // 0x802622C8: lh          $v1, 0x26($sp)
    ctx->r3 = MEM_H(ctx->r29, 0X26);
    // 0x802622CC: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    // 0x802622D0: nop

    // 0x802622D4: sh          $v1, 0x8B0($a0)
    MEM_H(0X8B0, ctx->r4) = ctx->r3;
    // 0x802622D8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_802622DC:
    // 0x802622DC: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x802622E0: jr          $ra
    // 0x802622E4: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x802622E4: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void ovl_8024B800_func_802622E8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802622E8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802622EC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802622F0: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x802622F4: sh          $t6, 0xE($a0)
    MEM_H(0XE, ctx->r4) = ctx->r14;
    // 0x802622F8: addiu       $t7, $zero, 0x2
    ctx->r15 = ADD32(0, 0X2);
    // 0x802622FC: sh          $t7, 0xE($a1)
    MEM_H(0XE, ctx->r5) = ctx->r15;
    // 0x80262300: lh          $t8, 0x8C6($a0)
    ctx->r24 = MEM_H(ctx->r4, 0X8C6);
    // 0x80262304: addiu       $a2, $zero, 0x14
    ctx->r6 = ADD32(0, 0X14);
    // 0x80262308: addiu       $t9, $t8, 0x14
    ctx->r25 = ADD32(ctx->r24, 0X14);
    // 0x8026230C: sh          $t9, 0x8CC($a0)
    MEM_H(0X8CC, ctx->r4) = ctx->r25;
    // 0x80262310: lh          $t0, 0x8C6($a1)
    ctx->r8 = MEM_H(ctx->r5, 0X8C6);
    // 0x80262314: addiu       $a3, $zero, 0x1C1
    ctx->r7 = ADD32(0, 0X1C1);
    // 0x80262318: addiu       $t1, $t0, -0x1C1
    ctx->r9 = ADD32(ctx->r8, -0X1C1);
    // 0x8026231C: jal         0x8026209C
    // 0x80262320: sh          $t1, 0x8CC($a1)
    MEM_H(0X8CC, ctx->r5) = ctx->r9;
    ovl_8024B800_func_8026209C(rdram, ctx);
        goto after_0;
    // 0x80262320: sh          $t1, 0x8CC($a1)
    MEM_H(0X8CC, ctx->r5) = ctx->r9;
    after_0:
    // 0x80262324: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80262328: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8026232C: jr          $ra
    // 0x80262330: nop

    return;
    // 0x80262330: nop

;}
RECOMP_FUNC void ovl_8024B800_func_80262334(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80262334: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80262338: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8026233C: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x80262340: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x80262344: addiu       $a2, $sp, 0x1E
    ctx->r6 = ADD32(ctx->r29, 0X1E);
    // 0x80262348: jal         0x802620C0
    // 0x8026234C: addiu       $a3, $sp, 0x1C
    ctx->r7 = ADD32(ctx->r29, 0X1C);
    ovl_8024B800_func_802620C0(rdram, ctx);
        goto after_0;
    // 0x8026234C: addiu       $a3, $sp, 0x1C
    ctx->r7 = ADD32(ctx->r29, 0X1C);
    after_0:
    // 0x80262350: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x80262354: lw          $a1, 0x24($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X24);
    // 0x80262358: lh          $a2, 0x1E($sp)
    ctx->r6 = MEM_H(ctx->r29, 0X1E);
    // 0x8026235C: lh          $a3, 0x1C($sp)
    ctx->r7 = MEM_H(ctx->r29, 0X1C);
    // 0x80262360: jal         0x8026209C
    // 0x80262364: nop

    ovl_8024B800_func_8026209C(rdram, ctx);
        goto after_1;
    // 0x80262364: nop

    after_1:
    // 0x80262368: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8026236C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80262370: jr          $ra
    // 0x80262374: nop

    return;
    // 0x80262374: nop

;}
RECOMP_FUNC void ovl_8024B800_func_80262378(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80262378: lh          $v0, 0x8B0($a0)
    ctx->r2 = MEM_H(ctx->r4, 0X8B0);
    // 0x8026237C: lh          $t6, 0x8CC($a0)
    ctx->r14 = MEM_H(ctx->r4, 0X8CC);
    // 0x80262380: addiu       $v0, $v0, -0x14
    ctx->r2 = ADD32(ctx->r2, -0X14);
    // 0x80262384: slt         $at, $v0, $t6
    ctx->r1 = SIGNED(ctx->r2) < SIGNED(ctx->r14) ? 1 : 0;
    // 0x80262388: beq         $at, $zero, L_80262394
    if (ctx->r1 == 0) {
        // 0x8026238C: nop
    
            goto L_80262394;
    }
    // 0x8026238C: nop

    // 0x80262390: sh          $v0, 0x8CC($a0)
    MEM_H(0X8CC, ctx->r4) = ctx->r2;
L_80262394:
    // 0x80262394: jr          $ra
    // 0x80262398: nop

    return;
    // 0x80262398: nop

;}
RECOMP_FUNC void ovl_8024B800_func_8026239C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8026239C: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x802623A0: lui         $v0, 0x8009
    ctx->r2 = S32(0X8009 << 16);
    // 0x802623A4: lw          $v0, 0x3B20($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X3B20);
    // 0x802623A8: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x802623AC: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x802623B0: sw          $a2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r6;
    // 0x802623B4: sw          $a3, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r7;
    // 0x802623B8: lw          $v1, 0x88($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X88);
    // 0x802623BC: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x802623C0: beq         $v1, $zero, L_80262408
    if (ctx->r3 == 0) {
        // 0x802623C4: lui         $t4, 0x8028
        ctx->r12 = S32(0X8028 << 16);
            goto L_80262408;
    }
    // 0x802623C4: lui         $t4, 0x8028
    ctx->r12 = S32(0X8028 << 16);
    // 0x802623C8: lwc1        $f0, 0x4C($v1)
    ctx->f0.u32l = MEM_W(ctx->r3, 0X4C);
    // 0x802623CC: lwc1        $f4, 0x28($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X28);
    // 0x802623D0: swc1        $f0, 0x28($v0)
    MEM_W(0X28, ctx->r2) = ctx->f0.u32l;
    // 0x802623D4: sub.s       $f6, $f0, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f0.fl - ctx->f4.fl;
    // 0x802623D8: cfc1        $t6, $FpcCsr
    ctx->r14 = get_cop1_cs();
    // 0x802623DC: nop

    // 0x802623E0: ori         $at, $t6, 0x3
    ctx->r1 = ctx->r14 | 0X3;
    // 0x802623E4: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x802623E8: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x802623EC: nop

    // 0x802623F0: cvt.w.s     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.u32l = CVT_W_S(ctx->f6.fl);
    // 0x802623F4: mfc1        $t0, $f8
    ctx->r8 = (int32_t)ctx->f8.u32l;
    // 0x802623F8: ctc1        $t6, $FpcCsr
    set_cop1_cs(ctx->r14);
    // 0x802623FC: sll         $t7, $t0, 16
    ctx->r15 = S32(ctx->r8 << 16);
    // 0x80262400: b           L_80262458
    // 0x80262404: sra         $t0, $t7, 16
    ctx->r8 = S32(SIGNED(ctx->r15) >> 16);
        goto L_80262458;
    // 0x80262404: sra         $t0, $t7, 16
    ctx->r8 = S32(SIGNED(ctx->r15) >> 16);
L_80262408:
    // 0x80262408: lw          $t9, 0x90($v0)
    ctx->r25 = MEM_W(ctx->r2, 0X90);
    // 0x8026240C: or          $t0, $zero, $zero
    ctx->r8 = 0 | 0;
    // 0x80262410: beq         $t9, $zero, L_80262458
    if (ctx->r25 == 0) {
        // 0x80262414: nop
    
            goto L_80262458;
    }
    // 0x80262414: nop

    // 0x80262418: lwc1        $f10, 0x8($v0)
    ctx->f10.u32l = MEM_W(ctx->r2, 0X8);
    // 0x8026241C: lwc1        $f16, 0x28($v0)
    ctx->f16.u32l = MEM_W(ctx->r2, 0X28);
    // 0x80262420: nop

    // 0x80262424: sub.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl - ctx->f16.fl;
    // 0x80262428: cfc1        $t1, $FpcCsr
    ctx->r9 = get_cop1_cs();
    // 0x8026242C: nop

    // 0x80262430: ori         $at, $t1, 0x3
    ctx->r1 = ctx->r9 | 0X3;
    // 0x80262434: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x80262438: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x8026243C: nop

    // 0x80262440: cvt.w.s     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    ctx->f4.u32l = CVT_W_S(ctx->f18.fl);
    // 0x80262444: mfc1        $t0, $f4
    ctx->r8 = (int32_t)ctx->f4.u32l;
    // 0x80262448: ctc1        $t1, $FpcCsr
    set_cop1_cs(ctx->r9);
    // 0x8026244C: sll         $t2, $t0, 16
    ctx->r10 = S32(ctx->r8 << 16);
    // 0x80262450: b           L_80262458
    // 0x80262454: sra         $t0, $t2, 16
    ctx->r8 = S32(SIGNED(ctx->r10) >> 16);
        goto L_80262458;
    // 0x80262454: sra         $t0, $t2, 16
    ctx->r8 = S32(SIGNED(ctx->r10) >> 16);
L_80262458:
    // 0x80262458: lhu         $t4, -0x1B40($t4)
    ctx->r12 = MEM_HU(ctx->r12, -0X1B40);
    // 0x8026245C: nop

    // 0x80262460: beq         $t4, $zero, L_8026246C
    if (ctx->r12 == 0) {
        // 0x80262464: nop
    
            goto L_8026246C;
    }
    // 0x80262464: nop

    // 0x80262468: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
L_8026246C:
    // 0x8026246C: lhu         $t5, 0x10($s0)
    ctx->r13 = MEM_HU(ctx->r16, 0X10);
    // 0x80262470: nop

    // 0x80262474: andi        $t6, $t5, 0x20
    ctx->r14 = ctx->r13 & 0X20;
    // 0x80262478: beq         $t6, $zero, L_8026248C
    if (ctx->r14 == 0) {
        // 0x8026247C: nop
    
            goto L_8026248C;
    }
    // 0x8026247C: nop

    // 0x80262480: bne         $t0, $zero, L_8026248C
    if (ctx->r8 != 0) {
        // 0x80262484: nop
    
            goto L_8026248C;
    }
    // 0x80262484: nop

    // 0x80262488: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
L_8026248C:
    // 0x8026248C: lhu         $t7, 0x8($s0)
    ctx->r15 = MEM_HU(ctx->r16, 0X8);
    // 0x80262490: nop

    // 0x80262494: andi        $t8, $t7, 0x1
    ctx->r24 = ctx->r15 & 0X1;
    // 0x80262498: bne         $t8, $zero, L_802624AC
    if (ctx->r24 != 0) {
        // 0x8026249C: nop
    
            goto L_802624AC;
    }
    // 0x8026249C: nop

    // 0x802624A0: negu        $t0, $t0
    ctx->r8 = SUB32(0, ctx->r8);
    // 0x802624A4: sll         $t9, $t0, 16
    ctx->r25 = S32(ctx->r8 << 16);
    // 0x802624A8: sra         $t0, $t9, 16
    ctx->r8 = S32(SIGNED(ctx->r25) >> 16);
L_802624AC:
    // 0x802624AC: lhu         $v0, 0xE($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0XE);
    // 0x802624B0: nop

    // 0x802624B4: beq         $v0, $zero, L_802624D4
    if (ctx->r2 == 0) {
        // 0x802624B8: addiu       $at, $zero, 0x1
        ctx->r1 = ADD32(0, 0X1);
            goto L_802624D4;
    }
    // 0x802624B8: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x802624BC: beq         $v0, $at, L_80262538
    if (ctx->r2 == ctx->r1) {
        // 0x802624C0: addiu       $at, $zero, 0x2
        ctx->r1 = ADD32(0, 0X2);
            goto L_80262538;
    }
    // 0x802624C0: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x802624C4: beq         $v0, $at, L_802627A4
    if (ctx->r2 == ctx->r1) {
        // 0x802624C8: nop
    
            goto L_802627A4;
    }
    // 0x802624C8: nop

    // 0x802624CC: b           L_80262874
    // 0x802624D0: lhu         $t7, 0x4($a1)
    ctx->r15 = MEM_HU(ctx->r5, 0X4);
        goto L_80262874;
    // 0x802624D0: lhu         $t7, 0x4($a1)
    ctx->r15 = MEM_HU(ctx->r5, 0X4);
L_802624D4:
    // 0x802624D4: lh          $t2, 0x8B0($s0)
    ctx->r10 = MEM_H(ctx->r16, 0X8B0);
    // 0x802624D8: addiu       $t5, $zero, 0x1
    ctx->r13 = ADD32(0, 0X1);
    // 0x802624DC: slti        $at, $t2, 0x32
    ctx->r1 = SIGNED(ctx->r10) < 0X32 ? 1 : 0;
    // 0x802624E0: beq         $at, $zero, L_802624FC
    if (ctx->r1 == 0) {
        // 0x802624E4: addiu       $t6, $zero, 0x2
        ctx->r14 = ADD32(0, 0X2);
            goto L_802624FC;
    }
    // 0x802624E4: addiu       $t6, $zero, 0x2
    ctx->r14 = ADD32(0, 0X2);
    // 0x802624E8: addiu       $t3, $zero, -0x96
    ctx->r11 = ADD32(0, -0X96);
    // 0x802624EC: addiu       $t4, $zero, 0xD2
    ctx->r12 = ADD32(0, 0XD2);
    // 0x802624F0: sh          $t3, 0x32($sp)
    MEM_H(0X32, ctx->r29) = ctx->r11;
    // 0x802624F4: b           L_80262504
    // 0x802624F8: sh          $t4, 0x36($sp)
    MEM_H(0X36, ctx->r29) = ctx->r12;
        goto L_80262504;
    // 0x802624F8: sh          $t4, 0x36($sp)
    MEM_H(0X36, ctx->r29) = ctx->r12;
L_802624FC:
    // 0x802624FC: sh          $t5, 0xE($s0)
    MEM_H(0XE, ctx->r16) = ctx->r13;
    // 0x80262500: sh          $t6, 0xE($a1)
    MEM_H(0XE, ctx->r5) = ctx->r14;
L_80262504:
    // 0x80262504: lh          $t7, 0x32($sp)
    ctx->r15 = MEM_H(ctx->r29, 0X32);
    // 0x80262508: lh          $t8, 0x8C6($s0)
    ctx->r24 = MEM_H(ctx->r16, 0X8C6);
    // 0x8026250C: nop

    // 0x80262510: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80262514: sh          $t9, 0x8CC($s0)
    MEM_H(0X8CC, ctx->r16) = ctx->r25;
    // 0x80262518: lh          $t2, 0x36($sp)
    ctx->r10 = MEM_H(ctx->r29, 0X36);
    // 0x8026251C: lh          $t1, 0x8C6($a1)
    ctx->r9 = MEM_H(ctx->r5, 0X8C6);
    // 0x80262520: nop

    // 0x80262524: subu        $t3, $t1, $t2
    ctx->r11 = SUB32(ctx->r9, ctx->r10);
    // 0x80262528: sh          $t3, 0x8CC($a1)
    MEM_H(0X8CC, ctx->r5) = ctx->r11;
    // 0x8026252C: sh          $zero, 0x8B6($s0)
    MEM_H(0X8B6, ctx->r16) = 0;
    // 0x80262530: b           L_80262870
    // 0x80262534: sh          $zero, 0x8B6($a1)
    MEM_H(0X8B6, ctx->r5) = 0;
        goto L_80262870;
    // 0x80262534: sh          $zero, 0x8B6($a1)
    MEM_H(0X8B6, ctx->r5) = 0;
L_80262538:
    // 0x80262538: lh          $t4, 0x8B0($s0)
    ctx->r12 = MEM_H(ctx->r16, 0X8B0);
    // 0x8026253C: nop

    // 0x80262540: slti        $at, $t4, 0x15F
    ctx->r1 = SIGNED(ctx->r12) < 0X15F ? 1 : 0;
    // 0x80262544: bne         $at, $zero, L_8026255C
    if (ctx->r1 != 0) {
        // 0x80262548: nop
    
            goto L_8026255C;
    }
    // 0x80262548: nop

    // 0x8026254C: lhu         $t5, 0x8B6($s0)
    ctx->r13 = MEM_HU(ctx->r16, 0X8B6);
    // 0x80262550: nop

    // 0x80262554: addiu       $t6, $t5, 0x1
    ctx->r14 = ADD32(ctx->r13, 0X1);
    // 0x80262558: sh          $t6, 0x8B6($s0)
    MEM_H(0X8B6, ctx->r16) = ctx->r14;
L_8026255C:
    // 0x8026255C: beq         $t0, $zero, L_80262870
    if (ctx->r8 == 0) {
        // 0x80262560: nop
    
            goto L_80262870;
    }
    // 0x80262560: nop

    // 0x80262564: lh          $v1, 0x8B0($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X8B0);
    // 0x80262568: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8026256C: slti        $at, $v1, -0x96
    ctx->r1 = SIGNED(ctx->r3) < -0X96 ? 1 : 0;
    // 0x80262570: beq         $at, $zero, L_80262598
    if (ctx->r1 == 0) {
        // 0x80262574: addiu       $a2, $sp, 0x32
        ctx->r6 = ADD32(ctx->r29, 0X32);
            goto L_80262598;
    }
    // 0x80262574: addiu       $a2, $sp, 0x32
    ctx->r6 = ADD32(ctx->r29, 0X32);
    // 0x80262578: addiu       $a3, $sp, 0x36
    ctx->r7 = ADD32(ctx->r29, 0X36);
    // 0x8026257C: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x80262580: jal         0x802620C0
    // 0x80262584: sh          $t0, 0x24($sp)
    MEM_H(0X24, ctx->r29) = ctx->r8;
    ovl_8024B800_func_802620C0(rdram, ctx);
        goto after_0;
    // 0x80262584: sh          $t0, 0x24($sp)
    MEM_H(0X24, ctx->r29) = ctx->r8;
    after_0:
    // 0x80262588: lw          $a1, 0x2C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X2C);
    // 0x8026258C: lh          $t0, 0x24($sp)
    ctx->r8 = MEM_H(ctx->r29, 0X24);
    // 0x80262590: lh          $v1, 0x8B0($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X8B0);
    // 0x80262594: nop

L_80262598:
    // 0x80262598: blez        $t0, L_80262688
    if (SIGNED(ctx->r8) <= 0) {
        // 0x8026259C: addiu       $v0, $v1, -0x3C
        ctx->r2 = ADD32(ctx->r3, -0X3C);
            goto L_80262688;
    }
    // 0x8026259C: addiu       $v0, $v1, -0x3C
    ctx->r2 = ADD32(ctx->r3, -0X3C);
    // 0x802625A0: addiu       $v0, $v1, -0xC8
    ctx->r2 = ADD32(ctx->r3, -0XC8);
    // 0x802625A4: lh          $t9, 0x32($sp)
    ctx->r25 = MEM_H(ctx->r29, 0X32);
    // 0x802625A8: sll         $t7, $v0, 16
    ctx->r15 = S32(ctx->r2 << 16);
    // 0x802625AC: sra         $t8, $t7, 16
    ctx->r24 = S32(SIGNED(ctx->r15) >> 16);
    // 0x802625B0: slt         $at, $t9, $t8
    ctx->r1 = SIGNED(ctx->r25) < SIGNED(ctx->r24) ? 1 : 0;
    // 0x802625B4: beq         $at, $zero, L_802625C0
    if (ctx->r1 == 0) {
        // 0x802625B8: addiu       $t2, $zero, -0xA
        ctx->r10 = ADD32(0, -0XA);
            goto L_802625C0;
    }
    // 0x802625B8: addiu       $t2, $zero, -0xA
    ctx->r10 = ADD32(0, -0XA);
    // 0x802625BC: sh          $t8, 0x32($sp)
    MEM_H(0X32, ctx->r29) = ctx->r24;
L_802625C0:
    // 0x802625C0: lh          $t1, 0x32($sp)
    ctx->r9 = MEM_H(ctx->r29, 0X32);
    // 0x802625C4: nop

    // 0x802625C8: slti        $at, $t1, -0x9
    ctx->r1 = SIGNED(ctx->r9) < -0X9 ? 1 : 0;
    // 0x802625CC: bne         $at, $zero, L_802625DC
    if (ctx->r1 != 0) {
        // 0x802625D0: lh          $t3, 0x32($sp)
        ctx->r11 = MEM_H(ctx->r29, 0X32);
            goto L_802625DC;
    }
    // 0x802625D0: lh          $t3, 0x32($sp)
    ctx->r11 = MEM_H(ctx->r29, 0X32);
    // 0x802625D4: sh          $t2, 0x32($sp)
    MEM_H(0X32, ctx->r29) = ctx->r10;
    // 0x802625D8: lh          $t3, 0x32($sp)
    ctx->r11 = MEM_H(ctx->r29, 0X32);
L_802625DC:
    // 0x802625DC: lh          $t4, 0x8C6($s0)
    ctx->r12 = MEM_H(ctx->r16, 0X8C6);
    // 0x802625E0: lhu         $t6, 0x8B6($s0)
    ctx->r14 = MEM_HU(ctx->r16, 0X8B6);
    // 0x802625E4: addu        $t5, $t3, $t4
    ctx->r13 = ADD32(ctx->r11, ctx->r12);
    // 0x802625E8: beq         $t6, $zero, L_80262620
    if (ctx->r14 == 0) {
        // 0x802625EC: sh          $t5, 0x8CC($s0)
        MEM_H(0X8CC, ctx->r16) = ctx->r13;
            goto L_80262620;
    }
    // 0x802625EC: sh          $t5, 0x8CC($s0)
    MEM_H(0X8CC, ctx->r16) = ctx->r13;
    // 0x802625F0: lh          $v1, 0x8B0($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X8B0);
    // 0x802625F4: lh          $t7, 0x36($sp)
    ctx->r15 = MEM_H(ctx->r29, 0X36);
    // 0x802625F8: nop

    // 0x802625FC: slt         $at, $t7, $v1
    ctx->r1 = SIGNED(ctx->r15) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x80262600: beq         $at, $zero, L_80262870
    if (ctx->r1 == 0) {
        // 0x80262604: nop
    
            goto L_80262870;
    }
    // 0x80262604: nop

    // 0x80262608: sh          $v1, 0x36($sp)
    MEM_H(0X36, ctx->r29) = ctx->r3;
    // 0x8026260C: lh          $t8, 0x36($sp)
    ctx->r24 = MEM_H(ctx->r29, 0X36);
    // 0x80262610: nop

    // 0x80262614: negu        $t9, $t8
    ctx->r25 = SUB32(0, ctx->r24);
    // 0x80262618: b           L_80262870
    // 0x8026261C: sh          $t9, 0x8CC($a1)
    MEM_H(0X8CC, ctx->r5) = ctx->r25;
        goto L_80262870;
    // 0x8026261C: sh          $t9, 0x8CC($a1)
    MEM_H(0X8CC, ctx->r5) = ctx->r25;
L_80262620:
    // 0x80262620: lh          $v0, 0x8B0($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X8B0);
    // 0x80262624: lh          $t3, 0x36($sp)
    ctx->r11 = MEM_H(ctx->r29, 0X36);
    // 0x80262628: addiu       $v0, $v0, 0xA0
    ctx->r2 = ADD32(ctx->r2, 0XA0);
    // 0x8026262C: sll         $t1, $v0, 16
    ctx->r9 = S32(ctx->r2 << 16);
    // 0x80262630: sra         $t2, $t1, 16
    ctx->r10 = S32(SIGNED(ctx->r9) >> 16);
    // 0x80262634: slt         $at, $t3, $t2
    ctx->r1 = SIGNED(ctx->r11) < SIGNED(ctx->r10) ? 1 : 0;
    // 0x80262638: beq         $at, $zero, L_80262644
    if (ctx->r1 == 0) {
        // 0x8026263C: addiu       $t8, $zero, -0x15E
        ctx->r24 = ADD32(0, -0X15E);
            goto L_80262644;
    }
    // 0x8026263C: addiu       $t8, $zero, -0x15E
    ctx->r24 = ADD32(0, -0X15E);
    // 0x80262640: sh          $t2, 0x36($sp)
    MEM_H(0X36, ctx->r29) = ctx->r10;
L_80262644:
    // 0x80262644: lh          $t4, 0x8C6($a1)
    ctx->r12 = MEM_H(ctx->r5, 0X8C6);
    // 0x80262648: lh          $t5, 0x36($sp)
    ctx->r13 = MEM_H(ctx->r29, 0X36);
    // 0x8026264C: addiu       $t1, $zero, 0x15E
    ctx->r9 = ADD32(0, 0X15E);
    // 0x80262650: subu        $v0, $t4, $t5
    ctx->r2 = SUB32(ctx->r12, ctx->r13);
    // 0x80262654: sll         $t6, $v0, 16
    ctx->r14 = S32(ctx->r2 << 16);
    // 0x80262658: sra         $t7, $t6, 16
    ctx->r15 = S32(SIGNED(ctx->r14) >> 16);
    // 0x8026265C: slti        $at, $t7, -0x15E
    ctx->r1 = SIGNED(ctx->r15) < -0X15E ? 1 : 0;
    // 0x80262660: beq         $at, $zero, L_8026266C
    if (ctx->r1 == 0) {
        // 0x80262664: sh          $t7, 0x8CC($a1)
        MEM_H(0X8CC, ctx->r5) = ctx->r15;
            goto L_8026266C;
    }
    // 0x80262664: sh          $t7, 0x8CC($a1)
    MEM_H(0X8CC, ctx->r5) = ctx->r15;
    // 0x80262668: sh          $t8, 0x8CC($a1)
    MEM_H(0X8CC, ctx->r5) = ctx->r24;
L_8026266C:
    // 0x8026266C: lh          $t9, 0x36($sp)
    ctx->r25 = MEM_H(ctx->r29, 0X36);
    // 0x80262670: nop

    // 0x80262674: slti        $at, $t9, 0x15F
    ctx->r1 = SIGNED(ctx->r25) < 0X15F ? 1 : 0;
    // 0x80262678: bne         $at, $zero, L_80262870
    if (ctx->r1 != 0) {
        // 0x8026267C: nop
    
            goto L_80262870;
    }
    // 0x8026267C: nop

    // 0x80262680: b           L_80262870
    // 0x80262684: sh          $t1, 0x36($sp)
    MEM_H(0X36, ctx->r29) = ctx->r9;
        goto L_80262870;
    // 0x80262684: sh          $t1, 0x36($sp)
    MEM_H(0X36, ctx->r29) = ctx->r9;
L_80262688:
    // 0x80262688: lh          $t4, 0x32($sp)
    ctx->r12 = MEM_H(ctx->r29, 0X32);
    // 0x8026268C: sll         $t2, $v0, 16
    ctx->r10 = S32(ctx->r2 << 16);
    // 0x80262690: sra         $t3, $t2, 16
    ctx->r11 = S32(SIGNED(ctx->r10) >> 16);
    // 0x80262694: slt         $at, $t3, $t4
    ctx->r1 = SIGNED(ctx->r11) < SIGNED(ctx->r12) ? 1 : 0;
    // 0x80262698: beq         $at, $zero, L_802626A4
    if (ctx->r1 == 0) {
        // 0x8026269C: addiu       $t6, $zero, -0x96
        ctx->r14 = ADD32(0, -0X96);
            goto L_802626A4;
    }
    // 0x8026269C: addiu       $t6, $zero, -0x96
    ctx->r14 = ADD32(0, -0X96);
    // 0x802626A0: sh          $t3, 0x32($sp)
    MEM_H(0X32, ctx->r29) = ctx->r11;
L_802626A4:
    // 0x802626A4: lh          $t5, 0x32($sp)
    ctx->r13 = MEM_H(ctx->r29, 0X32);
    // 0x802626A8: nop

    // 0x802626AC: slti        $at, $t5, -0x96
    ctx->r1 = SIGNED(ctx->r13) < -0X96 ? 1 : 0;
    // 0x802626B0: beq         $at, $zero, L_802626C0
    if (ctx->r1 == 0) {
        // 0x802626B4: lh          $t7, 0x32($sp)
        ctx->r15 = MEM_H(ctx->r29, 0X32);
            goto L_802626C0;
    }
    // 0x802626B4: lh          $t7, 0x32($sp)
    ctx->r15 = MEM_H(ctx->r29, 0X32);
    // 0x802626B8: sh          $t6, 0x32($sp)
    MEM_H(0X32, ctx->r29) = ctx->r14;
    // 0x802626BC: lh          $t7, 0x32($sp)
    ctx->r15 = MEM_H(ctx->r29, 0X32);
L_802626C0:
    // 0x802626C0: lh          $t8, 0x8C6($s0)
    ctx->r24 = MEM_H(ctx->r16, 0X8C6);
    // 0x802626C4: lh          $v1, 0x8B0($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X8B0);
    // 0x802626C8: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x802626CC: slti        $at, $v1, 0x15E
    ctx->r1 = SIGNED(ctx->r3) < 0X15E ? 1 : 0;
    // 0x802626D0: beq         $at, $zero, L_80262788
    if (ctx->r1 == 0) {
        // 0x802626D4: sh          $t9, 0x8CC($s0)
        MEM_H(0X8CC, ctx->r16) = ctx->r25;
            goto L_80262788;
    }
    // 0x802626D4: sh          $t9, 0x8CC($s0)
    MEM_H(0X8CC, ctx->r16) = ctx->r25;
    // 0x802626D8: lh          $t1, 0x36($sp)
    ctx->r9 = MEM_H(ctx->r29, 0X36);
    // 0x802626DC: addiu       $v0, $v1, 0x96
    ctx->r2 = ADD32(ctx->r3, 0X96);
    // 0x802626E0: slti        $at, $t1, 0x15F
    ctx->r1 = SIGNED(ctx->r9) < 0X15F ? 1 : 0;
    // 0x802626E4: bne         $at, $zero, L_80262708
    if (ctx->r1 != 0) {
        // 0x802626E8: sll         $t2, $v0, 16
        ctx->r10 = S32(ctx->r2 << 16);
            goto L_80262708;
    }
    // 0x802626E8: sll         $t2, $v0, 16
    ctx->r10 = S32(ctx->r2 << 16);
    // 0x802626EC: sra         $t3, $t2, 16
    ctx->r11 = S32(SIGNED(ctx->r10) >> 16);
    // 0x802626F0: slt         $at, $t3, $t1
    ctx->r1 = SIGNED(ctx->r11) < SIGNED(ctx->r9) ? 1 : 0;
    // 0x802626F4: beq         $at, $zero, L_80262708
    if (ctx->r1 == 0) {
        // 0x802626F8: nop
    
            goto L_80262708;
    }
    // 0x802626F8: nop

    // 0x802626FC: sh          $t3, 0x36($sp)
    MEM_H(0X36, ctx->r29) = ctx->r11;
    // 0x80262700: lh          $v1, 0x8B0($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X8B0);
    // 0x80262704: nop

L_80262708:
    // 0x80262708: lh          $t4, 0x8C6($a1)
    ctx->r12 = MEM_H(ctx->r5, 0X8C6);
    // 0x8026270C: addiu       $t3, $zero, 0xD2
    ctx->r11 = ADD32(0, 0XD2);
    // 0x80262710: addiu       $t5, $t4, 0xC8
    ctx->r13 = ADD32(ctx->r12, 0XC8);
    // 0x80262714: slt         $at, $v1, $t5
    ctx->r1 = SIGNED(ctx->r3) < SIGNED(ctx->r13) ? 1 : 0;
    // 0x80262718: beq         $at, $zero, L_8026274C
    if (ctx->r1 == 0) {
        // 0x8026271C: lh          $t2, 0x36($sp)
        ctx->r10 = MEM_H(ctx->r29, 0X36);
            goto L_8026274C;
    }
    // 0x8026271C: lh          $t2, 0x36($sp)
    ctx->r10 = MEM_H(ctx->r29, 0X36);
    // 0x80262720: lh          $v1, 0x32($sp)
    ctx->r3 = MEM_H(ctx->r29, 0X32);
    // 0x80262724: lh          $t9, 0x36($sp)
    ctx->r25 = MEM_H(ctx->r29, 0X36);
    // 0x80262728: addiu       $v1, $v1, 0x168
    ctx->r3 = ADD32(ctx->r3, 0X168);
    // 0x8026272C: sll         $t7, $v1, 16
    ctx->r15 = S32(ctx->r3 << 16);
    // 0x80262730: sra         $t8, $t7, 16
    ctx->r24 = S32(SIGNED(ctx->r15) >> 16);
    // 0x80262734: sll         $v0, $v1, 16
    ctx->r2 = S32(ctx->r3 << 16);
    // 0x80262738: slt         $at, $t8, $t9
    ctx->r1 = SIGNED(ctx->r24) < SIGNED(ctx->r25) ? 1 : 0;
    // 0x8026273C: beq         $at, $zero, L_80262748
    if (ctx->r1 == 0) {
        // 0x80262740: sra         $t6, $v0, 16
        ctx->r14 = S32(SIGNED(ctx->r2) >> 16);
            goto L_80262748;
    }
    // 0x80262740: sra         $t6, $v0, 16
    ctx->r14 = S32(SIGNED(ctx->r2) >> 16);
    // 0x80262744: sh          $t6, 0x36($sp)
    MEM_H(0X36, ctx->r29) = ctx->r14;
L_80262748:
    // 0x80262748: lh          $t2, 0x36($sp)
    ctx->r10 = MEM_H(ctx->r29, 0X36);
L_8026274C:
    // 0x8026274C: nop

    // 0x80262750: slti        $at, $t2, 0xD2
    ctx->r1 = SIGNED(ctx->r10) < 0XD2 ? 1 : 0;
    // 0x80262754: beq         $at, $zero, L_80262760
    if (ctx->r1 == 0) {
        // 0x80262758: nop
    
            goto L_80262760;
    }
    // 0x80262758: nop

    // 0x8026275C: sh          $t3, 0x36($sp)
    MEM_H(0X36, ctx->r29) = ctx->r11;
L_80262760:
    // 0x80262760: lh          $t1, 0x8C6($a1)
    ctx->r9 = MEM_H(ctx->r5, 0X8C6);
    // 0x80262764: lh          $t4, 0x36($sp)
    ctx->r12 = MEM_H(ctx->r29, 0X36);
    // 0x80262768: lh          $t7, 0x8CC($a1)
    ctx->r15 = MEM_H(ctx->r5, 0X8CC);
    // 0x8026276C: subu        $v0, $t1, $t4
    ctx->r2 = SUB32(ctx->r9, ctx->r12);
    // 0x80262770: sll         $t5, $v0, 16
    ctx->r13 = S32(ctx->r2 << 16);
    // 0x80262774: sra         $t6, $t5, 16
    ctx->r14 = S32(SIGNED(ctx->r13) >> 16);
    // 0x80262778: slt         $at, $t7, $t6
    ctx->r1 = SIGNED(ctx->r15) < SIGNED(ctx->r14) ? 1 : 0;
    // 0x8026277C: beq         $at, $zero, L_80262788
    if (ctx->r1 == 0) {
        // 0x80262780: nop
    
            goto L_80262788;
    }
    // 0x80262780: nop

    // 0x80262784: sh          $t6, 0x8CC($a1)
    MEM_H(0X8CC, ctx->r5) = ctx->r14;
L_80262788:
    // 0x80262788: lh          $t8, 0x8CC($a1)
    ctx->r24 = MEM_H(ctx->r5, 0X8CC);
    // 0x8026278C: nop

    // 0x80262790: slti        $at, $t8, -0x15D
    ctx->r1 = SIGNED(ctx->r24) < -0X15D ? 1 : 0;
    // 0x80262794: bne         $at, $zero, L_80262870
    if (ctx->r1 != 0) {
        // 0x80262798: nop
    
            goto L_80262870;
    }
    // 0x80262798: nop

    // 0x8026279C: b           L_80262870
    // 0x802627A0: sh          $zero, 0x8B6($s0)
    MEM_H(0X8B6, ctx->r16) = 0;
        goto L_80262870;
    // 0x802627A0: sh          $zero, 0x8B6($s0)
    MEM_H(0X8B6, ctx->r16) = 0;
L_802627A4:
    // 0x802627A4: beq         $t0, $zero, L_80262870
    if (ctx->r8 == 0) {
        // 0x802627A8: nop
    
            goto L_80262870;
    }
    // 0x802627A8: nop

    // 0x802627AC: lh          $v1, 0x8B0($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X8B0);
    // 0x802627B0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802627B4: slti        $at, $v1, -0x5A
    ctx->r1 = SIGNED(ctx->r3) < -0X5A ? 1 : 0;
    // 0x802627B8: beq         $at, $zero, L_8026285C
    if (ctx->r1 == 0) {
        // 0x802627BC: addiu       $a2, $sp, 0x32
        ctx->r6 = ADD32(ctx->r29, 0X32);
            goto L_8026285C;
    }
    // 0x802627BC: addiu       $a2, $sp, 0x32
    ctx->r6 = ADD32(ctx->r29, 0X32);
    // 0x802627C0: addiu       $v0, $v1, -0x3C
    ctx->r2 = ADD32(ctx->r3, -0X3C);
    // 0x802627C4: lh          $t3, 0x32($sp)
    ctx->r11 = MEM_H(ctx->r29, 0X32);
    // 0x802627C8: sll         $t9, $v0, 16
    ctx->r25 = S32(ctx->r2 << 16);
    // 0x802627CC: sra         $t2, $t9, 16
    ctx->r10 = S32(SIGNED(ctx->r25) >> 16);
    // 0x802627D0: slt         $at, $t3, $t2
    ctx->r1 = SIGNED(ctx->r11) < SIGNED(ctx->r10) ? 1 : 0;
    // 0x802627D4: beq         $at, $zero, L_80262808
    if (ctx->r1 == 0) {
        // 0x802627D8: lh          $v1, 0x32($sp)
        ctx->r3 = MEM_H(ctx->r29, 0X32);
            goto L_80262808;
    }
    // 0x802627D8: lh          $v1, 0x32($sp)
    ctx->r3 = MEM_H(ctx->r29, 0X32);
    // 0x802627DC: sh          $t2, 0x32($sp)
    MEM_H(0X32, ctx->r29) = ctx->r10;
    // 0x802627E0: lh          $t1, 0x8C6($s0)
    ctx->r9 = MEM_H(ctx->r16, 0X8C6);
    // 0x802627E4: lh          $t6, 0x8CC($s0)
    ctx->r14 = MEM_H(ctx->r16, 0X8CC);
    // 0x802627E8: addu        $v0, $t2, $t1
    ctx->r2 = ADD32(ctx->r10, ctx->r9);
    // 0x802627EC: sll         $t4, $v0, 16
    ctx->r12 = S32(ctx->r2 << 16);
    // 0x802627F0: sra         $t5, $t4, 16
    ctx->r13 = S32(SIGNED(ctx->r12) >> 16);
    // 0x802627F4: slt         $at, $t6, $t5
    ctx->r1 = SIGNED(ctx->r14) < SIGNED(ctx->r13) ? 1 : 0;
    // 0x802627F8: beq         $at, $zero, L_80262808
    if (ctx->r1 == 0) {
        // 0x802627FC: lh          $v1, 0x32($sp)
        ctx->r3 = MEM_H(ctx->r29, 0X32);
            goto L_80262808;
    }
    // 0x802627FC: lh          $v1, 0x32($sp)
    ctx->r3 = MEM_H(ctx->r29, 0X32);
    // 0x80262800: sh          $t5, 0x8CC($s0)
    MEM_H(0X8CC, ctx->r16) = ctx->r13;
    // 0x80262804: lh          $v1, 0x32($sp)
    ctx->r3 = MEM_H(ctx->r29, 0X32);
L_80262808:
    // 0x80262808: lh          $t8, 0x36($sp)
    ctx->r24 = MEM_H(ctx->r29, 0X36);
    // 0x8026280C: addiu       $v1, $v1, 0x168
    ctx->r3 = ADD32(ctx->r3, 0X168);
    // 0x80262810: sll         $t9, $v1, 16
    ctx->r25 = S32(ctx->r3 << 16);
    // 0x80262814: sra         $t2, $t9, 16
    ctx->r10 = S32(SIGNED(ctx->r25) >> 16);
    // 0x80262818: sll         $v0, $v1, 16
    ctx->r2 = S32(ctx->r3 << 16);
    // 0x8026281C: slt         $at, $t8, $t2
    ctx->r1 = SIGNED(ctx->r24) < SIGNED(ctx->r10) ? 1 : 0;
    // 0x80262820: beq         $at, $zero, L_8026282C
    if (ctx->r1 == 0) {
        // 0x80262824: sra         $t7, $v0, 16
        ctx->r15 = S32(SIGNED(ctx->r2) >> 16);
            goto L_8026282C;
    }
    // 0x80262824: sra         $t7, $v0, 16
    ctx->r15 = S32(SIGNED(ctx->r2) >> 16);
    // 0x80262828: sh          $t7, 0x36($sp)
    MEM_H(0X36, ctx->r29) = ctx->r15;
L_8026282C:
    // 0x8026282C: lh          $t3, 0x36($sp)
    ctx->r11 = MEM_H(ctx->r29, 0X36);
    // 0x80262830: addiu       $t1, $zero, 0x50
    ctx->r9 = ADD32(0, 0X50);
    // 0x80262834: slti        $at, $t3, 0x50
    ctx->r1 = SIGNED(ctx->r11) < 0X50 ? 1 : 0;
    // 0x80262838: beq         $at, $zero, L_80262844
    if (ctx->r1 == 0) {
        // 0x8026283C: nop
    
            goto L_80262844;
    }
    // 0x8026283C: nop

    // 0x80262840: sh          $t1, 0x36($sp)
    MEM_H(0X36, ctx->r29) = ctx->r9;
L_80262844:
    // 0x80262844: lh          $t4, 0x8C6($a1)
    ctx->r12 = MEM_H(ctx->r5, 0X8C6);
    // 0x80262848: lh          $t5, 0x36($sp)
    ctx->r13 = MEM_H(ctx->r29, 0X36);
    // 0x8026284C: nop

    // 0x80262850: subu        $t6, $t4, $t5
    ctx->r14 = SUB32(ctx->r12, ctx->r13);
    // 0x80262854: b           L_80262870
    // 0x80262858: sh          $t6, 0x8CC($a1)
    MEM_H(0X8CC, ctx->r5) = ctx->r14;
        goto L_80262870;
    // 0x80262858: sh          $t6, 0x8CC($a1)
    MEM_H(0X8CC, ctx->r5) = ctx->r14;
L_8026285C:
    // 0x8026285C: addiu       $a3, $sp, 0x36
    ctx->r7 = ADD32(ctx->r29, 0X36);
    // 0x80262860: jal         0x802620C0
    // 0x80262864: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    ovl_8024B800_func_802620C0(rdram, ctx);
        goto after_1;
    // 0x80262864: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    after_1:
    // 0x80262868: lw          $a1, 0x2C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X2C);
    // 0x8026286C: nop

L_80262870:
    // 0x80262870: lhu         $t7, 0x4($a1)
    ctx->r15 = MEM_HU(ctx->r5, 0X4);
L_80262874:
    // 0x80262874: addiu       $at, $zero, 0x6
    ctx->r1 = ADD32(0, 0X6);
    // 0x80262878: bne         $t7, $at, L_802628B8
    if (ctx->r15 != ctx->r1) {
        // 0x8026287C: or          $a0, $a1, $zero
        ctx->r4 = ctx->r5 | 0;
            goto L_802628B8;
    }
    // 0x8026287C: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    // 0x80262880: lh          $t9, 0x36($sp)
    ctx->r25 = MEM_H(ctx->r29, 0X36);
    // 0x80262884: nop

    // 0x80262888: slti        $at, $t9, 0x15F
    ctx->r1 = SIGNED(ctx->r25) < 0X15F ? 1 : 0;
    // 0x8026288C: bne         $at, $zero, L_802628B8
    if (ctx->r1 != 0) {
        // 0x80262890: addiu       $t8, $t9, -0x1
        ctx->r24 = ADD32(ctx->r25, -0X1);
            goto L_802628B8;
    }
    // 0x80262890: addiu       $t8, $t9, -0x1
    ctx->r24 = ADD32(ctx->r25, -0X1);
    // 0x80262894: sll         $t2, $t8, 16
    ctx->r10 = S32(ctx->r24 << 16);
    // 0x80262898: sra         $t3, $t2, 16
    ctx->r11 = S32(SIGNED(ctx->r10) >> 16);
    // 0x8026289C: beq         $t3, $zero, L_802628AC
    if (ctx->r11 == 0) {
        // 0x802628A0: sh          $t8, 0x36($sp)
        MEM_H(0X36, ctx->r29) = ctx->r24;
            goto L_802628AC;
    }
    // 0x802628A0: sh          $t8, 0x36($sp)
    MEM_H(0X36, ctx->r29) = ctx->r24;
    // 0x802628A4: addiu       $t1, $zero, 0x15E
    ctx->r9 = ADD32(0, 0X15E);
    // 0x802628A8: sh          $t1, 0x36($sp)
    MEM_H(0X36, ctx->r29) = ctx->r9;
L_802628AC:
    // 0x802628AC: lh          $t4, 0x36($sp)
    ctx->r12 = MEM_H(ctx->r29, 0X36);
    // 0x802628B0: nop

    // 0x802628B4: sh          $t4, 0x8CC($a1)
    MEM_H(0X8CC, ctx->r5) = ctx->r12;
L_802628B8:
    // 0x802628B8: jal         0x80262378
    // 0x802628BC: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    ovl_8024B800_func_80262378(rdram, ctx);
        goto after_2;
    // 0x802628BC: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    after_2:
    // 0x802628C0: lh          $t5, 0x32($sp)
    ctx->r13 = MEM_H(ctx->r29, 0X32);
    // 0x802628C4: lw          $a1, 0x2C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X2C);
    // 0x802628C8: slti        $at, $t5, -0x15E
    ctx->r1 = SIGNED(ctx->r13) < -0X15E ? 1 : 0;
    // 0x802628CC: beq         $at, $zero, L_802628FC
    if (ctx->r1 == 0) {
        // 0x802628D0: addiu       $t6, $zero, -0x15E
        ctx->r14 = ADD32(0, -0X15E);
            goto L_802628FC;
    }
    // 0x802628D0: addiu       $t6, $zero, -0x15E
    ctx->r14 = ADD32(0, -0X15E);
    // 0x802628D4: sh          $t6, 0x32($sp)
    MEM_H(0X32, ctx->r29) = ctx->r14;
    // 0x802628D8: lh          $v0, 0x8C6($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X8C6);
    // 0x802628DC: lh          $t8, 0x8CC($s0)
    ctx->r24 = MEM_H(ctx->r16, 0X8CC);
    // 0x802628E0: addiu       $v0, $v0, -0x15E
    ctx->r2 = ADD32(ctx->r2, -0X15E);
    // 0x802628E4: sll         $t7, $v0, 16
    ctx->r15 = S32(ctx->r2 << 16);
    // 0x802628E8: sra         $t9, $t7, 16
    ctx->r25 = S32(SIGNED(ctx->r15) >> 16);
    // 0x802628EC: slt         $at, $t8, $t9
    ctx->r1 = SIGNED(ctx->r24) < SIGNED(ctx->r25) ? 1 : 0;
    // 0x802628F0: beq         $at, $zero, L_80262900
    if (ctx->r1 == 0) {
        // 0x802628F4: lh          $a2, 0x32($sp)
        ctx->r6 = MEM_H(ctx->r29, 0X32);
            goto L_80262900;
    }
    // 0x802628F4: lh          $a2, 0x32($sp)
    ctx->r6 = MEM_H(ctx->r29, 0X32);
    // 0x802628F8: sh          $t9, 0x8CC($s0)
    MEM_H(0X8CC, ctx->r16) = ctx->r25;
L_802628FC:
    // 0x802628FC: lh          $a2, 0x32($sp)
    ctx->r6 = MEM_H(ctx->r29, 0X32);
L_80262900:
    // 0x80262900: lh          $a3, 0x36($sp)
    ctx->r7 = MEM_H(ctx->r29, 0X36);
    // 0x80262904: jal         0x8026209C
    // 0x80262908: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_8024B800_func_8026209C(rdram, ctx);
        goto after_3;
    // 0x80262908: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_3:
    // 0x8026290C: lui         $v0, 0x8009
    ctx->r2 = S32(0X8009 << 16);
    // 0x80262910: lw          $v0, 0x3B20($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X3B20);
    // 0x80262914: mtc1        $zero, $f2
    ctx->f2.u32l = 0;
    // 0x80262918: lwc1        $f0, 0x0($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X0);
    // 0x8026291C: nop

    // 0x80262920: c.lt.s      $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f0.fl < ctx->f2.fl;
    // 0x80262924: nop

    // 0x80262928: bc1f        L_80262964
    if (!c1cs) {
        // 0x8026292C: nop
    
            goto L_80262964;
    }
    // 0x8026292C: nop

    // 0x80262930: neg.s       $f6, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = -ctx->f0.fl;
    // 0x80262934: cfc1        $t2, $FpcCsr
    ctx->r10 = get_cop1_cs();
    // 0x80262938: nop

    // 0x8026293C: ori         $at, $t2, 0x3
    ctx->r1 = ctx->r10 | 0X3;
    // 0x80262940: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x80262944: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x80262948: nop

    // 0x8026294C: cvt.w.s     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.u32l = CVT_W_S(ctx->f6.fl);
    // 0x80262950: mfc1        $v1, $f8
    ctx->r3 = (int32_t)ctx->f8.u32l;
    // 0x80262954: ctc1        $t2, $FpcCsr
    set_cop1_cs(ctx->r10);
    // 0x80262958: sll         $t3, $v1, 16
    ctx->r11 = S32(ctx->r3 << 16);
    // 0x8026295C: b           L_80262990
    // 0x80262960: sra         $v1, $t3, 16
    ctx->r3 = S32(SIGNED(ctx->r11) >> 16);
        goto L_80262990;
    // 0x80262960: sra         $v1, $t3, 16
    ctx->r3 = S32(SIGNED(ctx->r11) >> 16);
L_80262964:
    // 0x80262964: cfc1        $t4, $FpcCsr
    ctx->r12 = get_cop1_cs();
    // 0x80262968: nop

    // 0x8026296C: ori         $at, $t4, 0x3
    ctx->r1 = ctx->r12 | 0X3;
    // 0x80262970: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x80262974: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x80262978: nop

    // 0x8026297C: cvt.w.s     $f10, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    ctx->f10.u32l = CVT_W_S(ctx->f0.fl);
    // 0x80262980: mfc1        $v1, $f10
    ctx->r3 = (int32_t)ctx->f10.u32l;
    // 0x80262984: ctc1        $t4, $FpcCsr
    set_cop1_cs(ctx->r12);
    // 0x80262988: sll         $t5, $v1, 16
    ctx->r13 = S32(ctx->r3 << 16);
    // 0x8026298C: sra         $v1, $t5, 16
    ctx->r3 = S32(SIGNED(ctx->r13) >> 16);
L_80262990:
    // 0x80262990: slti        $at, $v1, 0x160
    ctx->r1 = SIGNED(ctx->r3) < 0X160 ? 1 : 0;
    // 0x80262994: bne         $at, $zero, L_802629A0
    if (ctx->r1 != 0) {
        // 0x80262998: lui         $t3, 0x8009
        ctx->r11 = S32(0X8009 << 16);
            goto L_802629A0;
    }
    // 0x80262998: lui         $t3, 0x8009
    ctx->r11 = S32(0X8009 << 16);
    // 0x8026299C: addiu       $v1, $zero, 0x15F
    ctx->r3 = ADD32(0, 0X15F);
L_802629A0:
    // 0x802629A0: lh          $a0, 0xC8($v0)
    ctx->r4 = MEM_H(ctx->r2, 0XC8);
    // 0x802629A4: slti        $at, $v1, 0x3C
    ctx->r1 = SIGNED(ctx->r3) < 0X3C ? 1 : 0;
    // 0x802629A8: bgez        $a0, L_802629C0
    if (SIGNED(ctx->r4) >= 0) {
        // 0x802629AC: sll         $a1, $a0, 16
        ctx->r5 = S32(ctx->r4 << 16);
            goto L_802629C0;
    }
    // 0x802629AC: sll         $a1, $a0, 16
    ctx->r5 = S32(ctx->r4 << 16);
    // 0x802629B0: negu        $a1, $a0
    ctx->r5 = SUB32(0, ctx->r4);
    // 0x802629B4: sll         $t7, $a1, 16
    ctx->r15 = S32(ctx->r5 << 16);
    // 0x802629B8: b           L_802629C8
    // 0x802629BC: sra         $a1, $t7, 16
    ctx->r5 = S32(SIGNED(ctx->r15) >> 16);
        goto L_802629C8;
    // 0x802629BC: sra         $a1, $t7, 16
    ctx->r5 = S32(SIGNED(ctx->r15) >> 16);
L_802629C0:
    // 0x802629C0: sra         $t8, $a1, 16
    ctx->r24 = S32(SIGNED(ctx->r5) >> 16);
    // 0x802629C4: or          $a1, $t8, $zero
    ctx->r5 = ctx->r24 | 0;
L_802629C8:
    // 0x802629C8: bne         $at, $zero, L_80262A70
    if (ctx->r1 != 0) {
        // 0x802629CC: addiu       $t2, $a1, 0x3C
        ctx->r10 = ADD32(ctx->r5, 0X3C);
            goto L_80262A70;
    }
    // 0x802629CC: addiu       $t2, $a1, 0x3C
    ctx->r10 = ADD32(ctx->r5, 0X3C);
    // 0x802629D0: slt         $at, $v1, $t2
    ctx->r1 = SIGNED(ctx->r3) < SIGNED(ctx->r10) ? 1 : 0;
    // 0x802629D4: beq         $at, $zero, L_802629EC
    if (ctx->r1 == 0) {
        // 0x802629D8: addiu       $t4, $a1, 0x78
        ctx->r12 = ADD32(ctx->r5, 0X78);
            goto L_802629EC;
    }
    // 0x802629D8: addiu       $t4, $a1, 0x78
    ctx->r12 = ADD32(ctx->r5, 0X78);
    // 0x802629DC: addiu       $a1, $v1, -0x3C
    ctx->r5 = ADD32(ctx->r3, -0X3C);
    // 0x802629E0: sll         $t3, $a1, 16
    ctx->r11 = S32(ctx->r5 << 16);
    // 0x802629E4: sra         $a1, $t3, 16
    ctx->r5 = S32(SIGNED(ctx->r11) >> 16);
    // 0x802629E8: addiu       $t4, $a1, 0x78
    ctx->r12 = ADD32(ctx->r5, 0X78);
L_802629EC:
    // 0x802629EC: slt         $at, $t4, $v1
    ctx->r1 = SIGNED(ctx->r12) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x802629F0: beq         $at, $zero, L_80262A04
    if (ctx->r1 == 0) {
        // 0x802629F4: nop
    
            goto L_80262A04;
    }
    // 0x802629F4: nop

    // 0x802629F8: addiu       $a1, $v1, -0x78
    ctx->r5 = ADD32(ctx->r3, -0X78);
    // 0x802629FC: sll         $t5, $a1, 16
    ctx->r13 = S32(ctx->r5 << 16);
    // 0x80262A00: sra         $a1, $t5, 16
    ctx->r5 = S32(SIGNED(ctx->r13) >> 16);
L_80262A04:
    // 0x80262A04: c.le.s      $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f2.fl <= ctx->f0.fl;
    // 0x80262A08: negu        $t7, $a1
    ctx->r15 = SUB32(0, ctx->r5);
    // 0x80262A0C: bc1f        L_80262A1C
    if (!c1cs) {
        // 0x80262A10: nop
    
            goto L_80262A1C;
    }
    // 0x80262A10: nop

    // 0x80262A14: b           L_80262A20
    // 0x80262A18: sh          $a1, 0xC8($v0)
    MEM_H(0XC8, ctx->r2) = ctx->r5;
        goto L_80262A20;
    // 0x80262A18: sh          $a1, 0xC8($v0)
    MEM_H(0XC8, ctx->r2) = ctx->r5;
L_80262A1C:
    // 0x80262A1C: sh          $t7, 0xC8($v0)
    MEM_H(0XC8, ctx->r2) = ctx->r15;
L_80262A20:
    // 0x80262A20: lui         $v0, 0x8009
    ctx->r2 = S32(0X8009 << 16);
    // 0x80262A24: lw          $v0, 0x3B20($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X3B20);
    // 0x80262A28: lui         $at, 0x3FE0
    ctx->r1 = S32(0X3FE0 << 16);
    // 0x80262A2C: lh          $t9, 0xC8($v0)
    ctx->r25 = MEM_H(ctx->r2, 0XC8);
    // 0x80262A30: mtc1        $at, $f5
    ctx->f_odd[(5 - 1) * 2] = ctx->r1;
    // 0x80262A34: mtc1        $t9, $f16
    ctx->f16.u32l = ctx->r25;
    // 0x80262A38: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x80262A3C: cvt.d.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.d = CVT_D_W(ctx->f16.u32l);
    // 0x80262A40: mul.d       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.d); NAN_CHECK(ctx->f4.d); 
    ctx->f6.d = MUL_D(ctx->f18.d, ctx->f4.d);
    // 0x80262A44: cfc1        $t8, $FpcCsr
    ctx->r24 = get_cop1_cs();
    // 0x80262A48: nop

    // 0x80262A4C: ori         $at, $t8, 0x3
    ctx->r1 = ctx->r24 | 0X3;
    // 0x80262A50: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x80262A54: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x80262A58: nop

    // 0x80262A5C: cvt.w.d     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.u32l = CVT_W_D(ctx->f6.d);
    // 0x80262A60: mfc1        $t2, $f8
    ctx->r10 = (int32_t)ctx->f8.u32l;
    // 0x80262A64: ctc1        $t8, $FpcCsr
    set_cop1_cs(ctx->r24);
    // 0x80262A68: b           L_80262A80
    // 0x80262A6C: sh          $t2, 0xCA($v0)
    MEM_H(0XCA, ctx->r2) = ctx->r10;
        goto L_80262A80;
    // 0x80262A6C: sh          $t2, 0xCA($v0)
    MEM_H(0XCA, ctx->r2) = ctx->r10;
L_80262A70:
    // 0x80262A70: sh          $zero, 0xC8($v0)
    MEM_H(0XC8, ctx->r2) = 0;
    // 0x80262A74: lw          $t3, 0x3B20($t3)
    ctx->r11 = MEM_W(ctx->r11, 0X3B20);
    // 0x80262A78: nop

    // 0x80262A7C: sh          $zero, 0xCA($t3)
    MEM_H(0XCA, ctx->r11) = 0;
L_80262A80:
    // 0x80262A80: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80262A84: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80262A88: jr          $ra
    // 0x80262A8C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x80262A8C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void ovl_8024B800_func_80262A90(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80262A90: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x80262A94: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x80262A98: sw          $s4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r20;
    // 0x80262A9C: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x80262AA0: lui         $s3, 0x8012
    ctx->r19 = S32(0X8012 << 16);
    // 0x80262AA4: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x80262AA8: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x80262AAC: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80262AB0: addiu       $s3, $s3, -0x2CF0
    ctx->r19 = ADD32(ctx->r19, -0X2CF0);
    // 0x80262AB4: or          $s2, $zero, $zero
    ctx->r18 = 0 | 0;
    // 0x80262AB8: addiu       $s4, $zero, 0xA94
    ctx->r20 = ADD32(0, 0XA94);
L_80262ABC:
    // 0x80262ABC: multu       $s2, $s4
    result = U64(U32(ctx->r18)) * U64(U32(ctx->r20)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80262AC0: mflo        $t6
    ctx->r14 = lo;
    // 0x80262AC4: addu        $s1, $s3, $t6
    ctx->r17 = ADD32(ctx->r19, ctx->r14);
    // 0x80262AC8: lhu         $t7, 0x8($s1)
    ctx->r15 = MEM_HU(ctx->r17, 0X8);
    // 0x80262ACC: lw          $s0, 0x18($s1)
    ctx->r16 = MEM_W(ctx->r17, 0X18);
    // 0x80262AD0: andi        $t8, $t7, 0xFFDF
    ctx->r24 = ctx->r15 & 0XFFDF;
    // 0x80262AD4: sh          $t8, 0x8($s1)
    MEM_H(0X8, ctx->r17) = ctx->r24;
    // 0x80262AD8: sb          $zero, 0x8DC($s1)
    MEM_B(0X8DC, ctx->r17) = 0;
    // 0x80262ADC: sb          $zero, 0x8DD($s1)
    MEM_B(0X8DD, ctx->r17) = 0;
    // 0x80262AE0: sb          $zero, 0x8DE($s1)
    MEM_B(0X8DE, ctx->r17) = 0;
    // 0x80262AE4: sb          $zero, 0x90E($s1)
    MEM_B(0X90E, ctx->r17) = 0;
    // 0x80262AE8: sb          $zero, 0x90F($s1)
    MEM_B(0X90F, ctx->r17) = 0;
    // 0x80262AEC: sb          $zero, 0x910($s1)
    MEM_B(0X910, ctx->r17) = 0;
    // 0x80262AF0: jal         0x80059868
    // 0x80262AF4: sb          $zero, 0x911($s1)
    MEM_B(0X911, ctx->r17) = 0;
    func_80059868(rdram, ctx);
        goto after_0;
    // 0x80262AF4: sb          $zero, 0x911($s1)
    MEM_B(0X911, ctx->r17) = 0;
    after_0:
    // 0x80262AF8: sh          $v0, 0x92C($s1)
    MEM_H(0X92C, ctx->r17) = ctx->r2;
    // 0x80262AFC: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
L_80262B00:
    // 0x80262B00: lhu         $t9, 0x12($s0)
    ctx->r25 = MEM_HU(ctx->r16, 0X12);
    // 0x80262B04: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x80262B08: andi        $t1, $v1, 0xFFFF
    ctx->r9 = ctx->r3 & 0XFFFF;
    // 0x80262B0C: slti        $at, $t1, 0xB
    ctx->r1 = SIGNED(ctx->r9) < 0XB ? 1 : 0;
    // 0x80262B10: andi        $t0, $t9, 0xFCFF
    ctx->r8 = ctx->r25 & 0XFCFF;
    // 0x80262B14: or          $v1, $t1, $zero
    ctx->r3 = ctx->r9 | 0;
    // 0x80262B18: addiu       $s0, $s0, 0xF8
    ctx->r16 = ADD32(ctx->r16, 0XF8);
    // 0x80262B1C: bne         $at, $zero, L_80262B00
    if (ctx->r1 != 0) {
        // 0x80262B20: sh          $t0, -0xE6($s0)
        MEM_H(-0XE6, ctx->r16) = ctx->r8;
            goto L_80262B00;
    }
    // 0x80262B20: sh          $t0, -0xE6($s0)
    MEM_H(-0XE6, ctx->r16) = ctx->r8;
    // 0x80262B24: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
    // 0x80262B28: andi        $t2, $s2, 0xFFFF
    ctx->r10 = ctx->r18 & 0XFFFF;
    // 0x80262B2C: slti        $at, $t2, 0x2
    ctx->r1 = SIGNED(ctx->r10) < 0X2 ? 1 : 0;
    // 0x80262B30: bne         $at, $zero, L_80262ABC
    if (ctx->r1 != 0) {
        // 0x80262B34: or          $s2, $t2, $zero
        ctx->r18 = ctx->r10 | 0;
            goto L_80262ABC;
    }
    // 0x80262B34: or          $s2, $t2, $zero
    ctx->r18 = ctx->r10 | 0;
    // 0x80262B38: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x80262B3C: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80262B40: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x80262B44: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x80262B48: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x80262B4C: lw          $s4, 0x28($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X28);
    // 0x80262B50: jr          $ra
    // 0x80262B54: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x80262B54: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void ovl_8024B800_func_80262B58(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80262B58: addiu       $sp, $sp, -0x8
    ctx->r29 = ADD32(ctx->r29, -0X8);
    // 0x80262B5C: sw          $s0, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r16;
    // 0x80262B60: sw          $a1, 0xC($sp)
    MEM_W(0XC, ctx->r29) = ctx->r5;
    // 0x80262B64: sw          $a2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r6;
    // 0x80262B68: addiu       $v1, $a0, 0x318
    ctx->r3 = ADD32(ctx->r4, 0X318);
    // 0x80262B6C: lhu         $t7, 0x0($v1)
    ctx->r15 = MEM_HU(ctx->r3, 0X0);
    // 0x80262B70: addiu       $t1, $zero, 0xF8
    ctx->r9 = ADD32(0, 0XF8);
    // 0x80262B74: multu       $t7, $t1
    result = U64(U32(ctx->r15)) * U64(U32(ctx->r9)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80262B78: lw          $a3, 0x18($a0)
    ctx->r7 = MEM_W(ctx->r4, 0X18);
    // 0x80262B7C: andi        $t6, $a2, 0xFFFF
    ctx->r14 = ctx->r6 & 0XFFFF;
    // 0x80262B80: lui         $t2, 0x8009
    ctx->r10 = S32(0X8009 << 16);
    // 0x80262B84: lui         $t3, 0x8028
    ctx->r11 = S32(0X8028 << 16);
    // 0x80262B88: or          $a2, $t6, $zero
    ctx->r6 = ctx->r14 | 0;
    // 0x80262B8C: andi        $s0, $a1, 0xFFFF
    ctx->r16 = ctx->r5 & 0XFFFF;
    // 0x80262B90: addiu       $t3, $t3, -0x3678
    ctx->r11 = ADD32(ctx->r11, -0X3678);
    // 0x80262B94: addiu       $t2, $t2, 0x3B20
    ctx->r10 = ADD32(ctx->r10, 0X3B20);
    // 0x80262B98: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x80262B9C: addiu       $v0, $v1, 0x8
    ctx->r2 = ADD32(ctx->r3, 0X8);
    // 0x80262BA0: mflo        $t8
    ctx->r24 = lo;
    // 0x80262BA4: addu        $t0, $t8, $a3
    ctx->r8 = ADD32(ctx->r24, ctx->r7);
    // 0x80262BA8: lhu         $t9, 0x12($t0)
    ctx->r25 = MEM_HU(ctx->r8, 0X12);
    // 0x80262BAC: nop

    // 0x80262BB0: andi        $t4, $t9, 0x300
    ctx->r12 = ctx->r25 & 0X300;
    // 0x80262BB4: beq         $t4, $zero, L_80262BC8
    if (ctx->r12 == 0) {
        // 0x80262BB8: nop
    
            goto L_80262BC8;
    }
    // 0x80262BB8: nop

    // 0x80262BBC: lui         $t2, 0x8009
    ctx->r10 = S32(0X8009 << 16);
    // 0x80262BC0: b           L_80262C40
    // 0x80262BC4: addiu       $t2, $t2, 0x3B20
    ctx->r10 = ADD32(ctx->r10, 0X3B20);
        goto L_80262C40;
    // 0x80262BC4: addiu       $t2, $t2, 0x3B20
    ctx->r10 = ADD32(ctx->r10, 0X3B20);
L_80262BC8:
    // 0x80262BC8: lw          $t5, 0x0($t2)
    ctx->r13 = MEM_W(ctx->r10, 0X0);
    // 0x80262BCC: lui         $t3, 0x8028
    ctx->r11 = S32(0X8028 << 16);
    // 0x80262BD0: lw          $t6, 0x88($t5)
    ctx->r14 = MEM_W(ctx->r13, 0X88);
    // 0x80262BD4: nop

    // 0x80262BD8: bne         $t0, $t6, L_80262BE8
    if (ctx->r8 != ctx->r14) {
        // 0x80262BDC: nop
    
            goto L_80262BE8;
    }
    // 0x80262BDC: nop

    // 0x80262BE0: b           L_80262C40
    // 0x80262BE4: addiu       $t3, $t3, -0x3678
    ctx->r11 = ADD32(ctx->r11, -0X3678);
        goto L_80262C40;
    // 0x80262BE4: addiu       $t3, $t3, -0x3678
    ctx->r11 = ADD32(ctx->r11, -0X3678);
L_80262BE8:
    // 0x80262BE8: lw          $t7, 0xD4($t0)
    ctx->r15 = MEM_W(ctx->r8, 0XD4);
    // 0x80262BEC: lui         $t3, 0x8028
    ctx->r11 = S32(0X8028 << 16);
    // 0x80262BF0: lbu         $t8, 0x5($t7)
    ctx->r24 = MEM_BU(ctx->r15, 0X5);
    // 0x80262BF4: addiu       $t3, $t3, -0x3678
    ctx->r11 = ADD32(ctx->r11, -0X3678);
    // 0x80262BF8: sll         $t9, $t8, 1
    ctx->r25 = S32(ctx->r24 << 1);
    // 0x80262BFC: addu        $t4, $t3, $t9
    ctx->r12 = ADD32(ctx->r11, ctx->r25);
    // 0x80262C00: lhu         $t5, 0x0($t4)
    ctx->r13 = MEM_HU(ctx->r12, 0X0);
    // 0x80262C04: nop

    // 0x80262C08: and         $t6, $t5, $s0
    ctx->r14 = ctx->r13 & ctx->r16;
    // 0x80262C0C: beq         $t6, $zero, L_80262C40
    if (ctx->r14 == 0) {
        // 0x80262C10: nop
    
            goto L_80262C40;
    }
    // 0x80262C10: nop

    // 0x80262C14: beq         $a2, $zero, L_80262C38
    if (ctx->r6 == 0) {
        // 0x80262C18: nop
    
            goto L_80262C38;
    }
    // 0x80262C18: nop

    // 0x80262C1C: lw          $t7, 0xD4($a3)
    ctx->r15 = MEM_W(ctx->r7, 0XD4);
    // 0x80262C20: nop

    // 0x80262C24: lbu         $t8, 0x4($t7)
    ctx->r24 = MEM_BU(ctx->r15, 0X4);
    // 0x80262C28: nop

    // 0x80262C2C: andi        $t9, $t8, 0x80
    ctx->r25 = ctx->r24 & 0X80;
    // 0x80262C30: beq         $t9, $zero, L_80262C40
    if (ctx->r25 == 0) {
        // 0x80262C34: nop
    
            goto L_80262C40;
    }
    // 0x80262C34: nop

L_80262C38:
    // 0x80262C38: b           L_80262D84
    // 0x80262C3C: or          $v0, $t0, $zero
    ctx->r2 = ctx->r8 | 0;
        goto L_80262D84;
    // 0x80262C3C: or          $v0, $t0, $zero
    ctx->r2 = ctx->r8 | 0;
L_80262C40:
    // 0x80262C40: addiu       $t0, $zero, 0xB
    ctx->r8 = ADD32(0, 0XB);
L_80262C44:
    // 0x80262C44: lhu         $t4, 0x0($v0)
    ctx->r12 = MEM_HU(ctx->r2, 0X0);
    // 0x80262C48: nop

    // 0x80262C4C: multu       $t4, $t1
    result = U64(U32(ctx->r12)) * U64(U32(ctx->r9)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80262C50: mflo        $t5
    ctx->r13 = lo;
    // 0x80262C54: addu        $v1, $t5, $a3
    ctx->r3 = ADD32(ctx->r13, ctx->r7);
    // 0x80262C58: lhu         $t6, 0x12($v1)
    ctx->r14 = MEM_HU(ctx->r3, 0X12);
    // 0x80262C5C: nop

    // 0x80262C60: andi        $t7, $t6, 0x300
    ctx->r15 = ctx->r14 & 0X300;
    // 0x80262C64: bne         $t7, $zero, L_80262CDC
    if (ctx->r15 != 0) {
        // 0x80262C68: nop
    
            goto L_80262CDC;
    }
    // 0x80262C68: nop

    // 0x80262C6C: lw          $t8, 0x0($t2)
    ctx->r24 = MEM_W(ctx->r10, 0X0);
    // 0x80262C70: nop

    // 0x80262C74: lw          $t9, 0x88($t8)
    ctx->r25 = MEM_W(ctx->r24, 0X88);
    // 0x80262C78: nop

    // 0x80262C7C: beq         $v1, $t9, L_80262CDC
    if (ctx->r3 == ctx->r25) {
        // 0x80262C80: nop
    
            goto L_80262CDC;
    }
    // 0x80262C80: nop

    // 0x80262C84: lw          $t4, 0xD4($v1)
    ctx->r12 = MEM_W(ctx->r3, 0XD4);
    // 0x80262C88: nop

    // 0x80262C8C: lbu         $t5, 0x5($t4)
    ctx->r13 = MEM_BU(ctx->r12, 0X5);
    // 0x80262C90: nop

    // 0x80262C94: sll         $t6, $t5, 1
    ctx->r14 = S32(ctx->r13 << 1);
    // 0x80262C98: addu        $t7, $t3, $t6
    ctx->r15 = ADD32(ctx->r11, ctx->r14);
    // 0x80262C9C: lhu         $t8, 0x0($t7)
    ctx->r24 = MEM_HU(ctx->r15, 0X0);
    // 0x80262CA0: nop

    // 0x80262CA4: and         $t9, $t8, $s0
    ctx->r25 = ctx->r24 & ctx->r16;
    // 0x80262CA8: beq         $t9, $zero, L_80262CDC
    if (ctx->r25 == 0) {
        // 0x80262CAC: nop
    
            goto L_80262CDC;
    }
    // 0x80262CAC: nop

    // 0x80262CB0: beq         $a2, $zero, L_80262CD4
    if (ctx->r6 == 0) {
        // 0x80262CB4: nop
    
            goto L_80262CD4;
    }
    // 0x80262CB4: nop

    // 0x80262CB8: lw          $t4, 0xD4($a3)
    ctx->r12 = MEM_W(ctx->r7, 0XD4);
    // 0x80262CBC: nop

    // 0x80262CC0: lbu         $t5, 0x4($t4)
    ctx->r13 = MEM_BU(ctx->r12, 0X4);
    // 0x80262CC4: nop

    // 0x80262CC8: andi        $t6, $t5, 0x80
    ctx->r14 = ctx->r13 & 0X80;
    // 0x80262CCC: beq         $t6, $zero, L_80262CDC
    if (ctx->r14 == 0) {
        // 0x80262CD0: nop
    
            goto L_80262CDC;
    }
    // 0x80262CD0: nop

L_80262CD4:
    // 0x80262CD4: b           L_80262D84
    // 0x80262CD8: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
        goto L_80262D84;
    // 0x80262CD8: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
L_80262CDC:
    // 0x80262CDC: lhu         $t7, 0x8($v0)
    ctx->r15 = MEM_HU(ctx->r2, 0X8);
    // 0x80262CE0: addiu       $v0, $v0, 0x8
    ctx->r2 = ADD32(ctx->r2, 0X8);
    // 0x80262CE4: multu       $t7, $t1
    result = U64(U32(ctx->r15)) * U64(U32(ctx->r9)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80262CE8: addiu       $a0, $a0, 0x2
    ctx->r4 = ADD32(ctx->r4, 0X2);
    // 0x80262CEC: mflo        $t8
    ctx->r24 = lo;
    // 0x80262CF0: addu        $v1, $t8, $a3
    ctx->r3 = ADD32(ctx->r24, ctx->r7);
    // 0x80262CF4: lhu         $t9, 0x12($v1)
    ctx->r25 = MEM_HU(ctx->r3, 0X12);
    // 0x80262CF8: nop

    // 0x80262CFC: andi        $t4, $t9, 0x300
    ctx->r12 = ctx->r25 & 0X300;
    // 0x80262D00: bne         $t4, $zero, L_80262D78
    if (ctx->r12 != 0) {
        // 0x80262D04: nop
    
            goto L_80262D78;
    }
    // 0x80262D04: nop

    // 0x80262D08: lw          $t5, 0x0($t2)
    ctx->r13 = MEM_W(ctx->r10, 0X0);
    // 0x80262D0C: nop

    // 0x80262D10: lw          $t6, 0x88($t5)
    ctx->r14 = MEM_W(ctx->r13, 0X88);
    // 0x80262D14: nop

    // 0x80262D18: beq         $v1, $t6, L_80262D78
    if (ctx->r3 == ctx->r14) {
        // 0x80262D1C: nop
    
            goto L_80262D78;
    }
    // 0x80262D1C: nop

    // 0x80262D20: lw          $t7, 0xD4($v1)
    ctx->r15 = MEM_W(ctx->r3, 0XD4);
    // 0x80262D24: nop

    // 0x80262D28: lbu         $t8, 0x5($t7)
    ctx->r24 = MEM_BU(ctx->r15, 0X5);
    // 0x80262D2C: nop

    // 0x80262D30: sll         $t9, $t8, 1
    ctx->r25 = S32(ctx->r24 << 1);
    // 0x80262D34: addu        $t4, $t3, $t9
    ctx->r12 = ADD32(ctx->r11, ctx->r25);
    // 0x80262D38: lhu         $t5, 0x0($t4)
    ctx->r13 = MEM_HU(ctx->r12, 0X0);
    // 0x80262D3C: nop

    // 0x80262D40: and         $t6, $t5, $s0
    ctx->r14 = ctx->r13 & ctx->r16;
    // 0x80262D44: beq         $t6, $zero, L_80262D78
    if (ctx->r14 == 0) {
        // 0x80262D48: nop
    
            goto L_80262D78;
    }
    // 0x80262D48: nop

    // 0x80262D4C: beq         $a2, $zero, L_80262D70
    if (ctx->r6 == 0) {
        // 0x80262D50: nop
    
            goto L_80262D70;
    }
    // 0x80262D50: nop

    // 0x80262D54: lw          $t7, 0xD4($a3)
    ctx->r15 = MEM_W(ctx->r7, 0XD4);
    // 0x80262D58: nop

    // 0x80262D5C: lbu         $t8, 0x4($t7)
    ctx->r24 = MEM_BU(ctx->r15, 0X4);
    // 0x80262D60: nop

    // 0x80262D64: andi        $t9, $t8, 0x80
    ctx->r25 = ctx->r24 & 0X80;
    // 0x80262D68: beq         $t9, $zero, L_80262D78
    if (ctx->r25 == 0) {
        // 0x80262D6C: nop
    
            goto L_80262D78;
    }
    // 0x80262D6C: nop

L_80262D70:
    // 0x80262D70: b           L_80262D84
    // 0x80262D74: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
        goto L_80262D84;
    // 0x80262D74: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
L_80262D78:
    // 0x80262D78: bne         $a0, $t0, L_80262C44
    if (ctx->r4 != ctx->r8) {
        // 0x80262D7C: addiu       $v0, $v0, 0x8
        ctx->r2 = ADD32(ctx->r2, 0X8);
            goto L_80262C44;
    }
    // 0x80262D7C: addiu       $v0, $v0, 0x8
    ctx->r2 = ADD32(ctx->r2, 0X8);
    // 0x80262D80: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_80262D84:
    // 0x80262D84: lw          $s0, 0x4($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X4);
    // 0x80262D88: jr          $ra
    // 0x80262D8C: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
    return;
    // 0x80262D8C: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
;}
RECOMP_FUNC void ovl_8024B800_func_80262D90(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80262D90: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x80262D94: sw          $ra, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r31;
    // 0x80262D98: sw          $fp, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r30;
    // 0x80262D9C: sw          $s7, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r23;
    // 0x80262DA0: sw          $s6, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r22;
    // 0x80262DA4: sw          $s5, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r21;
    // 0x80262DA8: sw          $s4, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r20;
    // 0x80262DAC: sw          $s3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r19;
    // 0x80262DB0: sw          $s2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r18;
    // 0x80262DB4: sw          $s1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r17;
    // 0x80262DB8: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x80262DBC: swc1        $f21, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x80262DC0: swc1        $f20, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f20.u32l;
    // 0x80262DC4: sw          $a1, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r5;
    // 0x80262DC8: sw          $a2, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r6;
    // 0x80262DCC: lhu         $t7, 0x8($a0)
    ctx->r15 = MEM_HU(ctx->r4, 0X8);
    // 0x80262DD0: sll         $s3, $a2, 16
    ctx->r19 = S32(ctx->r6 << 16);
    // 0x80262DD4: sra         $t6, $s3, 16
    ctx->r14 = S32(SIGNED(ctx->r19) >> 16);
    // 0x80262DD8: andi        $t8, $t7, 0x1
    ctx->r24 = ctx->r15 & 0X1;
    // 0x80262DDC: or          $s3, $t6, $zero
    ctx->r19 = ctx->r14 | 0;
    // 0x80262DE0: andi        $fp, $a1, 0xFFFF
    ctx->r30 = ctx->r5 & 0XFFFF;
    // 0x80262DE4: or          $s4, $zero, $zero
    ctx->r20 = 0 | 0;
    // 0x80262DE8: beq         $t8, $zero, L_80262E28
    if (ctx->r24 == 0) {
        // 0x80262DEC: addiu       $s2, $zero, 0x2710
        ctx->r18 = ADD32(0, 0X2710);
            goto L_80262E28;
    }
    // 0x80262DEC: addiu       $s2, $zero, 0x2710
    ctx->r18 = ADD32(0, 0X2710);
    // 0x80262DF0: cfc1        $t9, $FpcCsr
    ctx->r25 = get_cop1_cs();
    // 0x80262DF4: lui         $v1, 0x8009
    ctx->r3 = S32(0X8009 << 16);
    // 0x80262DF8: lw          $v1, 0x3B20($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X3B20);
    // 0x80262DFC: ori         $at, $t9, 0x3
    ctx->r1 = ctx->r25 | 0X3;
    // 0x80262E00: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x80262E04: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x80262E08: lwc1        $f4, 0x0($v1)
    ctx->f4.u32l = MEM_W(ctx->r3, 0X0);
    // 0x80262E0C: nop

    // 0x80262E10: cvt.w.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = CVT_W_S(ctx->f4.fl);
    // 0x80262E14: mfc1        $s5, $f6
    ctx->r21 = (int32_t)ctx->f6.u32l;
    // 0x80262E18: ctc1        $t9, $FpcCsr
    set_cop1_cs(ctx->r25);
    // 0x80262E1C: sll         $t0, $s5, 16
    ctx->r8 = S32(ctx->r21 << 16);
    // 0x80262E20: b           L_80262E6C
    // 0x80262E24: sra         $s5, $t0, 16
    ctx->r21 = S32(SIGNED(ctx->r8) >> 16);
        goto L_80262E6C;
    // 0x80262E24: sra         $s5, $t0, 16
    ctx->r21 = S32(SIGNED(ctx->r8) >> 16);
L_80262E28:
    // 0x80262E28: lui         $v1, 0x8009
    ctx->r3 = S32(0X8009 << 16);
    // 0x80262E2C: lw          $v1, 0x3B20($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X3B20);
    // 0x80262E30: nop

    // 0x80262E34: lwc1        $f8, 0x0($v1)
    ctx->f8.u32l = MEM_W(ctx->r3, 0X0);
    // 0x80262E38: nop

    // 0x80262E3C: neg.s       $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = -ctx->f8.fl;
    // 0x80262E40: cfc1        $t2, $FpcCsr
    ctx->r10 = get_cop1_cs();
    // 0x80262E44: nop

    // 0x80262E48: ori         $at, $t2, 0x3
    ctx->r1 = ctx->r10 | 0X3;
    // 0x80262E4C: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x80262E50: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x80262E54: nop

    // 0x80262E58: cvt.w.s     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.u32l = CVT_W_S(ctx->f10.fl);
    // 0x80262E5C: mfc1        $s5, $f16
    ctx->r21 = (int32_t)ctx->f16.u32l;
    // 0x80262E60: ctc1        $t2, $FpcCsr
    set_cop1_cs(ctx->r10);
    // 0x80262E64: sll         $t3, $s5, 16
    ctx->r11 = S32(ctx->r21 << 16);
    // 0x80262E68: sra         $s5, $t3, 16
    ctx->r21 = S32(SIGNED(ctx->r11) >> 16);
L_80262E6C:
    // 0x80262E6C: lui         $s7, 0x8028
    ctx->r23 = S32(0X8028 << 16);
    // 0x80262E70: lw          $s0, 0x18($a0)
    ctx->r16 = MEM_W(ctx->r4, 0X18);
    // 0x80262E74: mtc1        $zero, $f20
    ctx->f20.u32l = 0;
    // 0x80262E78: addiu       $s7, $s7, -0x3678
    ctx->r23 = ADD32(ctx->r23, -0X3678);
    // 0x80262E7C: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    // 0x80262E80: addiu       $s6, $zero, 0xB
    ctx->r22 = ADD32(0, 0XB);
L_80262E84:
    // 0x80262E84: lw          $t5, 0x88($v1)
    ctx->r13 = MEM_W(ctx->r3, 0X88);
    // 0x80262E88: nop

    // 0x80262E8C: beq         $s0, $t5, L_80262F78
    if (ctx->r16 == ctx->r13) {
        // 0x80262E90: nop
    
            goto L_80262F78;
    }
    // 0x80262E90: nop

    // 0x80262E94: lhu         $t6, 0x12($s0)
    ctx->r14 = MEM_HU(ctx->r16, 0X12);
    // 0x80262E98: nop

    // 0x80262E9C: andi        $t7, $t6, 0x300
    ctx->r15 = ctx->r14 & 0X300;
    // 0x80262EA0: bne         $t7, $zero, L_80262F78
    if (ctx->r15 != 0) {
        // 0x80262EA4: nop
    
            goto L_80262F78;
    }
    // 0x80262EA4: nop

    // 0x80262EA8: lw          $v0, 0xD4($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XD4);
    // 0x80262EAC: andi        $t3, $s3, 0x1
    ctx->r11 = ctx->r19 & 0X1;
    // 0x80262EB0: lbu         $t8, 0x5($v0)
    ctx->r24 = MEM_BU(ctx->r2, 0X5);
    // 0x80262EB4: nop

    // 0x80262EB8: sll         $t9, $t8, 1
    ctx->r25 = S32(ctx->r24 << 1);
    // 0x80262EBC: addu        $t0, $s7, $t9
    ctx->r8 = ADD32(ctx->r23, ctx->r25);
    // 0x80262EC0: lhu         $t1, 0x0($t0)
    ctx->r9 = MEM_HU(ctx->r8, 0X0);
    // 0x80262EC4: nop

    // 0x80262EC8: and         $t2, $t1, $fp
    ctx->r10 = ctx->r9 & ctx->r30;
    // 0x80262ECC: beq         $t2, $zero, L_80262F78
    if (ctx->r10 == 0) {
        // 0x80262ED0: nop
    
            goto L_80262F78;
    }
    // 0x80262ED0: nop

    // 0x80262ED4: beq         $t3, $zero, L_80262EF0
    if (ctx->r11 == 0) {
        // 0x80262ED8: andi        $t6, $s3, 0x2
        ctx->r14 = ctx->r19 & 0X2;
            goto L_80262EF0;
    }
    // 0x80262ED8: andi        $t6, $s3, 0x2
    ctx->r14 = ctx->r19 & 0X2;
    // 0x80262EDC: lbu         $t4, 0x4($v0)
    ctx->r12 = MEM_BU(ctx->r2, 0X4);
    // 0x80262EE0: nop

    // 0x80262EE4: andi        $t5, $t4, 0x80
    ctx->r13 = ctx->r12 & 0X80;
    // 0x80262EE8: beq         $t5, $zero, L_80262F78
    if (ctx->r13 == 0) {
        // 0x80262EEC: nop
    
            goto L_80262F78;
    }
    // 0x80262EEC: nop

L_80262EF0:
    // 0x80262EF0: beq         $t6, $zero, L_80262F2C
    if (ctx->r14 == 0) {
        // 0x80262EF4: nop
    
            goto L_80262F2C;
    }
    // 0x80262EF4: nop

    // 0x80262EF8: jal         0x8026AACC
    // 0x80262EFC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_8024B800_func_8026AACC(rdram, ctx);
        goto after_0;
    // 0x80262EFC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_0:
    // 0x80262F00: mtc1        $v0, $f18
    ctx->f18.u32l = ctx->r2;
    // 0x80262F04: lui         $v1, 0x8009
    ctx->r3 = S32(0X8009 << 16);
    // 0x80262F08: lw          $v1, 0x3B20($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X3B20);
    // 0x80262F0C: cvt.s.w     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    ctx->f4.fl = CVT_S_W(ctx->f18.u32l);
    // 0x80262F10: lwc1        $f6, 0x0($v1)
    ctx->f6.u32l = MEM_W(ctx->r3, 0X0);
    // 0x80262F14: nop

    // 0x80262F18: mul.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f4.fl, ctx->f6.fl);
    // 0x80262F1C: c.lt.s      $f8, $f20
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 20);
    c1cs = ctx->f8.fl < ctx->f20.fl;
    // 0x80262F20: nop

    // 0x80262F24: bc1t        L_80262F78
    if (c1cs) {
        // 0x80262F28: nop
    
            goto L_80262F78;
    }
    // 0x80262F28: nop

L_80262F2C:
    // 0x80262F2C: lw          $t7, 0xD4($s0)
    ctx->r15 = MEM_W(ctx->r16, 0XD4);
    // 0x80262F30: nop

    // 0x80262F34: lh          $t8, 0x2($t7)
    ctx->r24 = MEM_H(ctx->r15, 0X2);
    // 0x80262F38: nop

    // 0x80262F3C: subu        $v0, $t8, $s5
    ctx->r2 = SUB32(ctx->r24, ctx->r21);
    // 0x80262F40: sll         $t9, $v0, 16
    ctx->r25 = S32(ctx->r2 << 16);
    // 0x80262F44: sra         $t0, $t9, 16
    ctx->r8 = S32(SIGNED(ctx->r25) >> 16);
    // 0x80262F48: bgez        $t0, L_80262F5C
    if (SIGNED(ctx->r8) >= 0) {
        // 0x80262F4C: or          $v0, $t0, $zero
        ctx->r2 = ctx->r8 | 0;
            goto L_80262F5C;
    }
    // 0x80262F4C: or          $v0, $t0, $zero
    ctx->r2 = ctx->r8 | 0;
    // 0x80262F50: negu        $v0, $t0
    ctx->r2 = SUB32(0, ctx->r8);
    // 0x80262F54: sll         $t1, $v0, 16
    ctx->r9 = S32(ctx->r2 << 16);
    // 0x80262F58: sra         $v0, $t1, 16
    ctx->r2 = S32(SIGNED(ctx->r9) >> 16);
L_80262F5C:
    // 0x80262F5C: slt         $at, $v0, $s2
    ctx->r1 = SIGNED(ctx->r2) < SIGNED(ctx->r18) ? 1 : 0;
    // 0x80262F60: beq         $at, $zero, L_80262F78
    if (ctx->r1 == 0) {
        // 0x80262F64: nop
    
            goto L_80262F78;
    }
    // 0x80262F64: nop

    // 0x80262F68: sll         $s2, $v0, 16
    ctx->r18 = S32(ctx->r2 << 16);
    // 0x80262F6C: sra         $t3, $s2, 16
    ctx->r11 = S32(SIGNED(ctx->r18) >> 16);
    // 0x80262F70: or          $s2, $t3, $zero
    ctx->r18 = ctx->r11 | 0;
    // 0x80262F74: or          $s4, $s0, $zero
    ctx->r20 = ctx->r16 | 0;
L_80262F78:
    // 0x80262F78: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x80262F7C: bne         $s1, $s6, L_80262E84
    if (ctx->r17 != ctx->r22) {
        // 0x80262F80: addiu       $s0, $s0, 0xF8
        ctx->r16 = ADD32(ctx->r16, 0XF8);
            goto L_80262E84;
    }
    // 0x80262F80: addiu       $s0, $s0, 0xF8
    ctx->r16 = ADD32(ctx->r16, 0XF8);
    // 0x80262F84: lw          $ra, 0x44($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X44);
    // 0x80262F88: or          $v0, $s4, $zero
    ctx->r2 = ctx->r20 | 0;
    // 0x80262F8C: lw          $s4, 0x30($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X30);
    // 0x80262F90: lwc1        $f21, 0x18($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X18);
    // 0x80262F94: lwc1        $f20, 0x1C($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x80262F98: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x80262F9C: lw          $s1, 0x24($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X24);
    // 0x80262FA0: lw          $s2, 0x28($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X28);
    // 0x80262FA4: lw          $s3, 0x2C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X2C);
    // 0x80262FA8: lw          $s5, 0x34($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X34);
    // 0x80262FAC: lw          $s6, 0x38($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X38);
    // 0x80262FB0: lw          $s7, 0x3C($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X3C);
    // 0x80262FB4: lw          $fp, 0x40($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X40);
    // 0x80262FB8: jr          $ra
    // 0x80262FBC: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    return;
    // 0x80262FBC: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
;}
RECOMP_FUNC void ovl_8024B800_func_80262FC0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80262FC0: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    // 0x80262FC4: sw          $a2, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r6;
    // 0x80262FC8: lw          $v0, 0x18($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X18);
    // 0x80262FCC: lui         $a3, 0x8028
    ctx->r7 = S32(0X8028 << 16);
    // 0x80262FD0: lw          $t8, 0xD4($v0)
    ctx->r24 = MEM_W(ctx->r2, 0XD4);
    // 0x80262FD4: addiu       $a3, $a3, -0x3678
    ctx->r7 = ADD32(ctx->r7, -0X3678);
    // 0x80262FD8: lbu         $t9, 0x5($t8)
    ctx->r25 = MEM_BU(ctx->r24, 0X5);
    // 0x80262FDC: andi        $t6, $a1, 0xFFFF
    ctx->r14 = ctx->r5 & 0XFFFF;
    // 0x80262FE0: sll         $t0, $t9, 1
    ctx->r8 = S32(ctx->r25 << 1);
    // 0x80262FE4: addu        $t1, $a3, $t0
    ctx->r9 = ADD32(ctx->r7, ctx->r8);
    // 0x80262FE8: lhu         $t2, 0x0($t1)
    ctx->r10 = MEM_HU(ctx->r9, 0X0);
    // 0x80262FEC: andi        $t7, $a2, 0xFFFF
    ctx->r15 = ctx->r6 & 0XFFFF;
    // 0x80262FF0: and         $t3, $t2, $t6
    ctx->r11 = ctx->r10 & ctx->r14;
    // 0x80262FF4: or          $a2, $t7, $zero
    ctx->r6 = ctx->r15 | 0;
    // 0x80262FF8: beq         $t3, $zero, L_80263018
    if (ctx->r11 == 0) {
        // 0x80262FFC: or          $a0, $t6, $zero
        ctx->r4 = ctx->r14 | 0;
            goto L_80263018;
    }
    // 0x80262FFC: or          $a0, $t6, $zero
    ctx->r4 = ctx->r14 | 0;
    // 0x80263000: lhu         $t4, 0x12($v0)
    ctx->r12 = MEM_HU(ctx->r2, 0X12);
    // 0x80263004: nop

    // 0x80263008: andi        $t5, $t4, 0x300
    ctx->r13 = ctx->r12 & 0X300;
    // 0x8026300C: bne         $t5, $zero, L_80263018
    if (ctx->r13 != 0) {
        // 0x80263010: nop
    
            goto L_80263018;
    }
    // 0x80263010: nop

    // 0x80263014: sb          $t7, 0x0($v0)
    MEM_B(0X0, ctx->r2) = ctx->r15;
L_80263018:
    // 0x80263018: lw          $t6, 0x1CC($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X1CC);
    // 0x8026301C: addiu       $v0, $v0, 0xF8
    ctx->r2 = ADD32(ctx->r2, 0XF8);
    // 0x80263020: lbu         $t7, 0x5($t6)
    ctx->r15 = MEM_BU(ctx->r14, 0X5);
    // 0x80263024: addiu       $v1, $zero, 0x3
    ctx->r3 = ADD32(0, 0X3);
    // 0x80263028: sll         $t8, $t7, 1
    ctx->r24 = S32(ctx->r15 << 1);
    // 0x8026302C: addu        $t9, $a3, $t8
    ctx->r25 = ADD32(ctx->r7, ctx->r24);
    // 0x80263030: lhu         $t0, 0x0($t9)
    ctx->r8 = MEM_HU(ctx->r25, 0X0);
    // 0x80263034: addiu       $a1, $zero, 0xB
    ctx->r5 = ADD32(0, 0XB);
    // 0x80263038: and         $t1, $t0, $a0
    ctx->r9 = ctx->r8 & ctx->r4;
    // 0x8026303C: beq         $t1, $zero, L_8026305C
    if (ctx->r9 == 0) {
        // 0x80263040: nop
    
            goto L_8026305C;
    }
    // 0x80263040: nop

    // 0x80263044: lhu         $t2, 0x12($v0)
    ctx->r10 = MEM_HU(ctx->r2, 0X12);
    // 0x80263048: nop

    // 0x8026304C: andi        $t3, $t2, 0x300
    ctx->r11 = ctx->r10 & 0X300;
    // 0x80263050: bne         $t3, $zero, L_8026305C
    if (ctx->r11 != 0) {
        // 0x80263054: nop
    
            goto L_8026305C;
    }
    // 0x80263054: nop

    // 0x80263058: sb          $a2, 0x0($v0)
    MEM_B(0X0, ctx->r2) = ctx->r6;
L_8026305C:
    // 0x8026305C: lw          $t4, 0x1CC($v0)
    ctx->r12 = MEM_W(ctx->r2, 0X1CC);
    // 0x80263060: addiu       $v0, $v0, 0xF8
    ctx->r2 = ADD32(ctx->r2, 0XF8);
    // 0x80263064: lbu         $t5, 0x5($t4)
    ctx->r13 = MEM_BU(ctx->r12, 0X5);
    // 0x80263068: nop

    // 0x8026306C: sll         $t6, $t5, 1
    ctx->r14 = S32(ctx->r13 << 1);
    // 0x80263070: addu        $t7, $a3, $t6
    ctx->r15 = ADD32(ctx->r7, ctx->r14);
    // 0x80263074: lhu         $t8, 0x0($t7)
    ctx->r24 = MEM_HU(ctx->r15, 0X0);
    // 0x80263078: nop

    // 0x8026307C: and         $t9, $t8, $a0
    ctx->r25 = ctx->r24 & ctx->r4;
    // 0x80263080: beq         $t9, $zero, L_802630A0
    if (ctx->r25 == 0) {
        // 0x80263084: nop
    
            goto L_802630A0;
    }
    // 0x80263084: nop

    // 0x80263088: lhu         $t0, 0x12($v0)
    ctx->r8 = MEM_HU(ctx->r2, 0X12);
    // 0x8026308C: nop

    // 0x80263090: andi        $t1, $t0, 0x300
    ctx->r9 = ctx->r8 & 0X300;
    // 0x80263094: bne         $t1, $zero, L_802630A0
    if (ctx->r9 != 0) {
        // 0x80263098: nop
    
            goto L_802630A0;
    }
    // 0x80263098: nop

    // 0x8026309C: sb          $a2, 0x0($v0)
    MEM_B(0X0, ctx->r2) = ctx->r6;
L_802630A0:
    // 0x802630A0: addiu       $v0, $v0, 0xF8
    ctx->r2 = ADD32(ctx->r2, 0XF8);
L_802630A4:
    // 0x802630A4: lw          $t2, 0xD4($v0)
    ctx->r10 = MEM_W(ctx->r2, 0XD4);
    // 0x802630A8: addiu       $v1, $v1, 0x4
    ctx->r3 = ADD32(ctx->r3, 0X4);
    // 0x802630AC: lbu         $t3, 0x5($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X5);
    // 0x802630B0: nop

    // 0x802630B4: sll         $t4, $t3, 1
    ctx->r12 = S32(ctx->r11 << 1);
    // 0x802630B8: addu        $t5, $a3, $t4
    ctx->r13 = ADD32(ctx->r7, ctx->r12);
    // 0x802630BC: lhu         $t6, 0x0($t5)
    ctx->r14 = MEM_HU(ctx->r13, 0X0);
    // 0x802630C0: nop

    // 0x802630C4: and         $t7, $t6, $a0
    ctx->r15 = ctx->r14 & ctx->r4;
    // 0x802630C8: beq         $t7, $zero, L_802630E8
    if (ctx->r15 == 0) {
        // 0x802630CC: nop
    
            goto L_802630E8;
    }
    // 0x802630CC: nop

    // 0x802630D0: lhu         $t8, 0x12($v0)
    ctx->r24 = MEM_HU(ctx->r2, 0X12);
    // 0x802630D4: nop

    // 0x802630D8: andi        $t9, $t8, 0x300
    ctx->r25 = ctx->r24 & 0X300;
    // 0x802630DC: bne         $t9, $zero, L_802630E8
    if (ctx->r25 != 0) {
        // 0x802630E0: nop
    
            goto L_802630E8;
    }
    // 0x802630E0: nop

    // 0x802630E4: sb          $a2, 0x0($v0)
    MEM_B(0X0, ctx->r2) = ctx->r6;
L_802630E8:
    // 0x802630E8: lw          $t0, 0x1CC($v0)
    ctx->r8 = MEM_W(ctx->r2, 0X1CC);
    // 0x802630EC: addiu       $v0, $v0, 0xF8
    ctx->r2 = ADD32(ctx->r2, 0XF8);
    // 0x802630F0: lbu         $t1, 0x5($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X5);
    // 0x802630F4: nop

    // 0x802630F8: sll         $t2, $t1, 1
    ctx->r10 = S32(ctx->r9 << 1);
    // 0x802630FC: addu        $t3, $a3, $t2
    ctx->r11 = ADD32(ctx->r7, ctx->r10);
    // 0x80263100: lhu         $t4, 0x0($t3)
    ctx->r12 = MEM_HU(ctx->r11, 0X0);
    // 0x80263104: nop

    // 0x80263108: and         $t5, $t4, $a0
    ctx->r13 = ctx->r12 & ctx->r4;
    // 0x8026310C: beq         $t5, $zero, L_8026312C
    if (ctx->r13 == 0) {
        // 0x80263110: nop
    
            goto L_8026312C;
    }
    // 0x80263110: nop

    // 0x80263114: lhu         $t6, 0x12($v0)
    ctx->r14 = MEM_HU(ctx->r2, 0X12);
    // 0x80263118: nop

    // 0x8026311C: andi        $t7, $t6, 0x300
    ctx->r15 = ctx->r14 & 0X300;
    // 0x80263120: bne         $t7, $zero, L_8026312C
    if (ctx->r15 != 0) {
        // 0x80263124: nop
    
            goto L_8026312C;
    }
    // 0x80263124: nop

    // 0x80263128: sb          $a2, 0x0($v0)
    MEM_B(0X0, ctx->r2) = ctx->r6;
L_8026312C:
    // 0x8026312C: lw          $t8, 0x1CC($v0)
    ctx->r24 = MEM_W(ctx->r2, 0X1CC);
    // 0x80263130: addiu       $v0, $v0, 0xF8
    ctx->r2 = ADD32(ctx->r2, 0XF8);
    // 0x80263134: lbu         $t9, 0x5($t8)
    ctx->r25 = MEM_BU(ctx->r24, 0X5);
    // 0x80263138: nop

    // 0x8026313C: sll         $t0, $t9, 1
    ctx->r8 = S32(ctx->r25 << 1);
    // 0x80263140: addu        $t1, $a3, $t0
    ctx->r9 = ADD32(ctx->r7, ctx->r8);
    // 0x80263144: lhu         $t2, 0x0($t1)
    ctx->r10 = MEM_HU(ctx->r9, 0X0);
    // 0x80263148: nop

    // 0x8026314C: and         $t3, $t2, $a0
    ctx->r11 = ctx->r10 & ctx->r4;
    // 0x80263150: beq         $t3, $zero, L_80263170
    if (ctx->r11 == 0) {
        // 0x80263154: nop
    
            goto L_80263170;
    }
    // 0x80263154: nop

    // 0x80263158: lhu         $t4, 0x12($v0)
    ctx->r12 = MEM_HU(ctx->r2, 0X12);
    // 0x8026315C: nop

    // 0x80263160: andi        $t5, $t4, 0x300
    ctx->r13 = ctx->r12 & 0X300;
    // 0x80263164: bne         $t5, $zero, L_80263170
    if (ctx->r13 != 0) {
        // 0x80263168: nop
    
            goto L_80263170;
    }
    // 0x80263168: nop

    // 0x8026316C: sb          $a2, 0x0($v0)
    MEM_B(0X0, ctx->r2) = ctx->r6;
L_80263170:
    // 0x80263170: lw          $t6, 0x1CC($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X1CC);
    // 0x80263174: addiu       $v0, $v0, 0xF8
    ctx->r2 = ADD32(ctx->r2, 0XF8);
    // 0x80263178: lbu         $t7, 0x5($t6)
    ctx->r15 = MEM_BU(ctx->r14, 0X5);
    // 0x8026317C: nop

    // 0x80263180: sll         $t8, $t7, 1
    ctx->r24 = S32(ctx->r15 << 1);
    // 0x80263184: addu        $t9, $a3, $t8
    ctx->r25 = ADD32(ctx->r7, ctx->r24);
    // 0x80263188: lhu         $t0, 0x0($t9)
    ctx->r8 = MEM_HU(ctx->r25, 0X0);
    // 0x8026318C: nop

    // 0x80263190: and         $t1, $t0, $a0
    ctx->r9 = ctx->r8 & ctx->r4;
    // 0x80263194: beq         $t1, $zero, L_802631B4
    if (ctx->r9 == 0) {
        // 0x80263198: nop
    
            goto L_802631B4;
    }
    // 0x80263198: nop

    // 0x8026319C: lhu         $t2, 0x12($v0)
    ctx->r10 = MEM_HU(ctx->r2, 0X12);
    // 0x802631A0: nop

    // 0x802631A4: andi        $t3, $t2, 0x300
    ctx->r11 = ctx->r10 & 0X300;
    // 0x802631A8: bne         $t3, $zero, L_802631B4
    if (ctx->r11 != 0) {
        // 0x802631AC: nop
    
            goto L_802631B4;
    }
    // 0x802631AC: nop

    // 0x802631B0: sb          $a2, 0x0($v0)
    MEM_B(0X0, ctx->r2) = ctx->r6;
L_802631B4:
    // 0x802631B4: bne         $v1, $a1, L_802630A4
    if (ctx->r3 != ctx->r5) {
        // 0x802631B8: addiu       $v0, $v0, 0xF8
        ctx->r2 = ADD32(ctx->r2, 0XF8);
            goto L_802630A4;
    }
    // 0x802631B8: addiu       $v0, $v0, 0xF8
    ctx->r2 = ADD32(ctx->r2, 0XF8);
    // 0x802631BC: jr          $ra
    // 0x802631C0: nop

    return;
    // 0x802631C0: nop

;}
RECOMP_FUNC void ovl_8024B800_func_802631C4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802631C4: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x802631C8: sw          $s6, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r22;
    // 0x802631CC: swc1        $f20, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f20.u32l;
    // 0x802631D0: sw          $ra, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r31;
    // 0x802631D4: sw          $fp, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r30;
    // 0x802631D8: sw          $s7, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r23;
    // 0x802631DC: sw          $s5, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r21;
    // 0x802631E0: sw          $s4, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r20;
    // 0x802631E4: sw          $s3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r19;
    // 0x802631E8: sw          $s2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r18;
    // 0x802631EC: sw          $s1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r17;
    // 0x802631F0: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x802631F4: swc1        $f21, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x802631F8: lui         $at, 0xC374
    ctx->r1 = S32(0XC374 << 16);
    // 0x802631FC: lui         $s6, 0x8012
    ctx->r22 = S32(0X8012 << 16);
    // 0x80263200: lw          $s0, 0x18($a0)
    ctx->r16 = MEM_W(ctx->r4, 0X18);
    // 0x80263204: mtc1        $at, $f20
    ctx->f20.u32l = ctx->r1;
    // 0x80263208: or          $s3, $a0, $zero
    ctx->r19 = ctx->r4 | 0;
    // 0x8026320C: addiu       $s6, $s6, 0xB78
    ctx->r22 = ADD32(ctx->r22, 0XB78);
    // 0x80263210: or          $s4, $zero, $zero
    ctx->r20 = 0 | 0;
    // 0x80263214: addiu       $s5, $zero, 0xF8
    ctx->r21 = ADD32(0, 0XF8);
    // 0x80263218: addiu       $s7, $zero, 0x1A
    ctx->r23 = ADD32(0, 0X1A);
    // 0x8026321C: addiu       $fp, $zero, 0x4B
    ctx->r30 = ADD32(0, 0X4B);
L_80263220:
    // 0x80263220: lhu         $v1, 0x12($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X12);
    // 0x80263224: nop

    // 0x80263228: andi        $t6, $v1, 0x300
    ctx->r14 = ctx->r3 & 0X300;
    // 0x8026322C: bne         $t6, $zero, L_802633EC
    if (ctx->r14 != 0) {
        // 0x80263230: nop
    
            goto L_802633EC;
    }
    // 0x80263230: nop

    // 0x80263234: lhu         $t7, 0x20($s0)
    ctx->r15 = MEM_HU(ctx->r16, 0X20);
    // 0x80263238: ori         $t9, $v1, 0x100
    ctx->r25 = ctx->r3 | 0X100;
    // 0x8026323C: andi        $t8, $t7, 0x10
    ctx->r24 = ctx->r15 & 0X10;
    // 0x80263240: beq         $t8, $zero, L_80263254
    if (ctx->r24 == 0) {
        // 0x80263244: nop
    
            goto L_80263254;
    }
    // 0x80263244: nop

    // 0x80263248: sb          $fp, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r30;
    // 0x8026324C: b           L_802633EC
    // 0x80263250: sh          $t9, 0x12($s0)
    MEM_H(0X12, ctx->r16) = ctx->r25;
        goto L_802633EC;
    // 0x80263250: sh          $t9, 0x12($s0)
    MEM_H(0X12, ctx->r16) = ctx->r25;
L_80263254:
    // 0x80263254: lhu         $a1, 0x0($s6)
    ctx->r5 = MEM_HU(ctx->r22, 0X0);
    // 0x80263258: lui         $t0, 0x8028
    ctx->r8 = S32(0X8028 << 16);
    // 0x8026325C: addu        $t0, $t0, $a1
    ctx->r8 = ADD32(ctx->r8, ctx->r5);
    // 0x80263260: lbu         $t0, -0x30E0($t0)
    ctx->r8 = MEM_BU(ctx->r8, -0X30E0);
    // 0x80263264: lui         $t1, 0x8012
    ctx->r9 = S32(0X8012 << 16);
    // 0x80263268: beq         $t0, $zero, L_80263394
    if (ctx->r8 == 0) {
        // 0x8026326C: nop
    
            goto L_80263394;
    }
    // 0x8026326C: nop

    // 0x80263270: lhu         $t1, 0xB7E($t1)
    ctx->r9 = MEM_HU(ctx->r9, 0XB7E);
    // 0x80263274: nop

    // 0x80263278: andi        $t2, $t1, 0x4
    ctx->r10 = ctx->r9 & 0X4;
    // 0x8026327C: bne         $t2, $zero, L_80263394
    if (ctx->r10 != 0) {
        // 0x80263280: nop
    
            goto L_80263394;
    }
    // 0x80263280: nop

    // 0x80263284: lh          $t3, 0x8AE($s3)
    ctx->r11 = MEM_H(ctx->r19, 0X8AE);
    // 0x80263288: addu        $s2, $s3, $s4
    ctx->r18 = ADD32(ctx->r19, ctx->r20);
    // 0x8026328C: beq         $t3, $zero, L_80263320
    if (ctx->r11 == 0) {
        // 0x80263290: nop
    
            goto L_80263320;
    }
    // 0x80263290: nop

    // 0x80263294: lbu         $v0, 0x86F($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0X86F);
    // 0x80263298: andi        $t4, $v1, 0x400
    ctx->r12 = ctx->r3 & 0X400;
    // 0x8026329C: beq         $v0, $zero, L_80263394
    if (ctx->r2 == 0) {
        // 0x802632A0: nop
    
            goto L_80263394;
    }
    // 0x802632A0: nop

    // 0x802632A4: bne         $t4, $zero, L_80263394
    if (ctx->r12 != 0) {
        // 0x802632A8: nop
    
            goto L_80263394;
    }
    // 0x802632A8: nop

    // 0x802632AC: multu       $v0, $s5
    result = U64(U32(ctx->r2)) * U64(U32(ctx->r21)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x802632B0: lw          $t5, 0x24($s3)
    ctx->r13 = MEM_W(ctx->r19, 0X24);
    // 0x802632B4: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x802632B8: lw          $a0, 0x18($t5)
    ctx->r4 = MEM_W(ctx->r13, 0X18);
    // 0x802632BC: mflo        $t6
    ctx->r14 = lo;
    // 0x802632C0: addu        $s1, $t6, $a0
    ctx->r17 = ADD32(ctx->r14, ctx->r4);
    // 0x802632C4: lw          $t7, 0xD4($s1)
    ctx->r15 = MEM_W(ctx->r17, 0XD4);
    // 0x802632C8: nop

    // 0x802632CC: lbu         $t8, 0x4($t7)
    ctx->r24 = MEM_BU(ctx->r15, 0X4);
    // 0x802632D0: nop

    // 0x802632D4: andi        $t9, $t8, 0x7F
    ctx->r25 = ctx->r24 & 0X7F;
    // 0x802632D8: beq         $t9, $at, L_80263394
    if (ctx->r25 == ctx->r1) {
        // 0x802632DC: nop
    
            goto L_80263394;
    }
    // 0x802632DC: nop

    // 0x802632E0: jal         0x8026AB2C
    // 0x802632E4: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    ovl_8024B800_func_8026AB2C(rdram, ctx);
        goto after_0;
    // 0x802632E4: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_0:
    // 0x802632E8: c.lt.s      $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f20.fl < ctx->f0.fl;
    // 0x802632EC: nop

    // 0x802632F0: bc1f        L_80263394
    if (!c1cs) {
        // 0x802632F4: nop
    
            goto L_80263394;
    }
    // 0x802632F4: nop

    // 0x802632F8: sb          $s7, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r23;
    // 0x802632FC: lbu         $t0, 0x86F($s2)
    ctx->r8 = MEM_BU(ctx->r18, 0X86F);
    // 0x80263300: lhu         $t1, 0x1A($s0)
    ctx->r9 = MEM_HU(ctx->r16, 0X1A);
    // 0x80263304: sb          $t0, 0x7($s0)
    MEM_B(0X7, ctx->r16) = ctx->r8;
    // 0x80263308: sb          $t1, 0x8($s1)
    MEM_B(0X8, ctx->r17) = ctx->r9;
    // 0x8026330C: lhu         $t2, 0x12($s0)
    ctx->r10 = MEM_HU(ctx->r16, 0X12);
    // 0x80263310: nop

    // 0x80263314: ori         $t3, $t2, 0x100
    ctx->r11 = ctx->r10 | 0X100;
    // 0x80263318: b           L_802633EC
    // 0x8026331C: sh          $t3, 0x12($s0)
    MEM_H(0X12, ctx->r16) = ctx->r11;
        goto L_802633EC;
    // 0x8026331C: sh          $t3, 0x12($s0)
    MEM_H(0X12, ctx->r16) = ctx->r11;
L_80263320:
    // 0x80263320: lbu         $v0, 0x86F($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0X86F);
    // 0x80263324: nop

    // 0x80263328: beq         $v0, $zero, L_80263394
    if (ctx->r2 == 0) {
        // 0x8026332C: nop
    
            goto L_80263394;
    }
    // 0x8026332C: nop

    // 0x80263330: lw          $t4, 0x24($s3)
    ctx->r12 = MEM_W(ctx->r19, 0X24);
    // 0x80263334: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
    // 0x80263338: lw          $a0, 0x18($t4)
    ctx->r4 = MEM_W(ctx->r12, 0X18);
    // 0x8026333C: beq         $a1, $zero, L_80263360
    if (ctx->r5 == 0) {
        // 0x80263340: nop
    
            goto L_80263360;
    }
    // 0x80263340: nop

    // 0x80263344: multu       $v0, $s5
    result = U64(U32(ctx->r2)) * U64(U32(ctx->r21)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80263348: lui         $t7, 0x8012
    ctx->r15 = S32(0X8012 << 16);
    // 0x8026334C: lw          $t7, 0xB2C($t7)
    ctx->r15 = MEM_W(ctx->r15, 0XB2C);
    // 0x80263350: mflo        $t5
    ctx->r13 = lo;
    // 0x80263354: addu        $t6, $t5, $a0
    ctx->r14 = ADD32(ctx->r13, ctx->r4);
    // 0x80263358: beq         $t6, $t7, L_80263394
    if (ctx->r14 == ctx->r15) {
        // 0x8026335C: nop
    
            goto L_80263394;
    }
    // 0x8026335C: nop

L_80263360:
    // 0x80263360: multu       $v1, $s5
    result = U64(U32(ctx->r3)) * U64(U32(ctx->r21)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80263364: sb          $s7, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r23;
    // 0x80263368: lbu         $t8, 0x86F($s2)
    ctx->r24 = MEM_BU(ctx->r18, 0X86F);
    // 0x8026336C: lhu         $t9, 0x1A($s0)
    ctx->r25 = MEM_HU(ctx->r16, 0X1A);
    // 0x80263370: sb          $t8, 0x7($s0)
    MEM_B(0X7, ctx->r16) = ctx->r24;
    // 0x80263374: mflo        $t0
    ctx->r8 = lo;
    // 0x80263378: addu        $t1, $t0, $a0
    ctx->r9 = ADD32(ctx->r8, ctx->r4);
    // 0x8026337C: sb          $t9, 0x8($t1)
    MEM_B(0X8, ctx->r9) = ctx->r25;
    // 0x80263380: lhu         $t2, 0x12($s0)
    ctx->r10 = MEM_HU(ctx->r16, 0X12);
    // 0x80263384: nop

    // 0x80263388: ori         $t3, $t2, 0x100
    ctx->r11 = ctx->r10 | 0X100;
    // 0x8026338C: b           L_802633EC
    // 0x80263390: sh          $t3, 0x12($s0)
    MEM_H(0X12, ctx->r16) = ctx->r11;
        goto L_802633EC;
    // 0x80263390: sh          $t3, 0x12($s0)
    MEM_H(0X12, ctx->r16) = ctx->r11;
L_80263394:
    // 0x80263394: lw          $t4, 0xD4($s0)
    ctx->r12 = MEM_W(ctx->r16, 0XD4);
    // 0x80263398: lui         $t7, 0x8028
    ctx->r15 = S32(0X8028 << 16);
    // 0x8026339C: lbu         $t5, 0x5($t4)
    ctx->r13 = MEM_BU(ctx->r12, 0X5);
    // 0x802633A0: nop

    // 0x802633A4: sll         $t6, $t5, 1
    ctx->r14 = S32(ctx->r13 << 1);
    // 0x802633A8: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x802633AC: lhu         $t7, -0x3648($t7)
    ctx->r15 = MEM_HU(ctx->r15, -0X3648);
    // 0x802633B0: nop

    // 0x802633B4: sb          $t7, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r15;
    // 0x802633B8: lhu         $t8, 0x0($s6)
    ctx->r24 = MEM_HU(ctx->r22, 0X0);
    // 0x802633BC: nop

    // 0x802633C0: bne         $t8, $zero, L_802633EC
    if (ctx->r24 != 0) {
        // 0x802633C4: nop
    
            goto L_802633EC;
    }
    // 0x802633C4: nop

    // 0x802633C8: lhu         $t0, 0x20($s0)
    ctx->r8 = MEM_HU(ctx->r16, 0X20);
    // 0x802633CC: nop

    // 0x802633D0: andi        $t9, $t0, 0x4
    ctx->r25 = ctx->r8 & 0X4;
    // 0x802633D4: beq         $t9, $zero, L_802633EC
    if (ctx->r25 == 0) {
        // 0x802633D8: nop
    
            goto L_802633EC;
    }
    // 0x802633D8: nop

    // 0x802633DC: lhu         $t1, 0x12($s0)
    ctx->r9 = MEM_HU(ctx->r16, 0X12);
    // 0x802633E0: nop

    // 0x802633E4: ori         $t2, $t1, 0x100
    ctx->r10 = ctx->r9 | 0X100;
    // 0x802633E8: sh          $t2, 0x12($s0)
    MEM_H(0X12, ctx->r16) = ctx->r10;
L_802633EC:
    // 0x802633EC: addiu       $s4, $s4, 0x1
    ctx->r20 = ADD32(ctx->r20, 0X1);
    // 0x802633F0: addiu       $at, $zero, 0xB
    ctx->r1 = ADD32(0, 0XB);
    // 0x802633F4: bne         $s4, $at, L_80263220
    if (ctx->r20 != ctx->r1) {
        // 0x802633F8: addiu       $s0, $s0, 0xF8
        ctx->r16 = ADD32(ctx->r16, 0XF8);
            goto L_80263220;
    }
    // 0x802633F8: addiu       $s0, $s0, 0xF8
    ctx->r16 = ADD32(ctx->r16, 0XF8);
    // 0x802633FC: lw          $ra, 0x44($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X44);
    // 0x80263400: lwc1        $f21, 0x18($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X18);
    // 0x80263404: lwc1        $f20, 0x1C($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x80263408: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x8026340C: lw          $s1, 0x24($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X24);
    // 0x80263410: lw          $s2, 0x28($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X28);
    // 0x80263414: lw          $s3, 0x2C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X2C);
    // 0x80263418: lw          $s4, 0x30($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X30);
    // 0x8026341C: lw          $s5, 0x34($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X34);
    // 0x80263420: lw          $s6, 0x38($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X38);
    // 0x80263424: lw          $s7, 0x3C($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X3C);
    // 0x80263428: lw          $fp, 0x40($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X40);
    // 0x8026342C: jr          $ra
    // 0x80263430: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    return;
    // 0x80263430: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
;}
RECOMP_FUNC void ovl_8024B800_func_80263434(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80263434: lbu         $t6, 0x1($a0)
    ctx->r14 = MEM_BU(ctx->r4, 0X1);
    // 0x80263438: lui         $v0, 0x8028
    ctx->r2 = S32(0X8028 << 16);
    // 0x8026343C: addu        $v0, $v0, $t6
    ctx->r2 = ADD32(ctx->r2, ctx->r14);
    // 0x80263440: lbu         $v0, -0x3658($v0)
    ctx->r2 = MEM_BU(ctx->r2, -0X3658);
    // 0x80263444: lhu         $v1, 0x4($a0)
    ctx->r3 = MEM_HU(ctx->r4, 0X4);
    // 0x80263448: addiu       $a2, $zero, 0x5
    ctx->r6 = ADD32(0, 0X5);
    // 0x8026344C: bne         $a2, $v1, L_8026345C
    if (ctx->r6 != ctx->r3) {
        // 0x80263450: addiu       $v0, $v0, 0x1
        ctx->r2 = ADD32(ctx->r2, 0X1);
            goto L_8026345C;
    }
    // 0x80263450: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80263454: jr          $ra
    // 0x80263458: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    return;
    // 0x80263458: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_8026345C:
    // 0x8026345C: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80263460: beq         $v1, $at, L_8026347C
    if (ctx->r3 == ctx->r1) {
        // 0x80263464: addiu       $t7, $zero, 0x3
        ctx->r15 = ADD32(0, 0X3);
            goto L_8026347C;
    }
    // 0x80263464: addiu       $t7, $zero, 0x3
    ctx->r15 = ADD32(0, 0X3);
    // 0x80263468: subu        $v1, $t7, $v0
    ctx->r3 = SUB32(ctx->r15, ctx->r2);
    // 0x8026346C: bgtz        $v1, L_8026348C
    if (SIGNED(ctx->r3) > 0) {
        // 0x80263470: nop
    
            goto L_8026348C;
    }
    // 0x80263470: nop

    // 0x80263474: b           L_8026348C
    // 0x80263478: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
        goto L_8026348C;
    // 0x80263478: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
L_8026347C:
    // 0x8026347C: subu        $v1, $a2, $v0
    ctx->r3 = SUB32(ctx->r6, ctx->r2);
    // 0x80263480: bgtz        $v1, L_8026348C
    if (SIGNED(ctx->r3) > 0) {
        // 0x80263484: nop
    
            goto L_8026348C;
    }
    // 0x80263484: nop

    // 0x80263488: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
L_8026348C:
    // 0x8026348C: bne         $v1, $zero, L_802634B0
    if (ctx->r3 != 0) {
        // 0x80263490: or          $v0, $v1, $zero
        ctx->r2 = ctx->r3 | 0;
            goto L_802634B0;
    }
    // 0x80263490: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    // 0x80263494: lhu         $t8, 0x92C($a0)
    ctx->r24 = MEM_HU(ctx->r4, 0X92C);
    // 0x80263498: nop

    // 0x8026349C: andi        $t9, $t8, 0x1
    ctx->r25 = ctx->r24 & 0X1;
    // 0x802634A0: bne         $t9, $zero, L_802634B0
    if (ctx->r25 != 0) {
        // 0x802634A4: nop
    
            goto L_802634B0;
    }
    // 0x802634A4: nop

    // 0x802634A8: jr          $ra
    // 0x802634AC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    return;
    // 0x802634AC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_802634B0:
    // 0x802634B0: jr          $ra
    // 0x802634B4: nop

    return;
    // 0x802634B4: nop

;}
RECOMP_FUNC void ovl_8024B800_func_802634B8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802634B8: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x802634BC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802634C0: lw          $a1, 0xC8($a0)
    ctx->r5 = MEM_W(ctx->r4, 0XC8);
    // 0x802634C4: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x802634C8: lhu         $v0, 0x4($a1)
    ctx->r2 = MEM_HU(ctx->r5, 0X4);
    // 0x802634CC: or          $a3, $a0, $zero
    ctx->r7 = ctx->r4 | 0;
    // 0x802634D0: beq         $v0, $at, L_8026351C
    if (ctx->r2 == ctx->r1) {
        // 0x802634D4: addiu       $at, $zero, 0x5
        ctx->r1 = ADD32(0, 0X5);
            goto L_8026351C;
    }
    // 0x802634D4: addiu       $at, $zero, 0x5
    ctx->r1 = ADD32(0, 0X5);
    // 0x802634D8: lw          $v0, 0xD4($a0)
    ctx->r2 = MEM_W(ctx->r4, 0XD4);
    // 0x802634DC: nop

    // 0x802634E0: lbu         $t6, 0x4($v0)
    ctx->r14 = MEM_BU(ctx->r2, 0X4);
    // 0x802634E4: nop

    // 0x802634E8: andi        $t7, $t6, 0x80
    ctx->r15 = ctx->r14 & 0X80;
    // 0x802634EC: beq         $t7, $zero, L_802635FC
    if (ctx->r15 == 0) {
        // 0x802634F0: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_802635FC;
    }
    // 0x802634F0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802634F4: lbu         $t8, 0x5($v0)
    ctx->r24 = MEM_BU(ctx->r2, 0X5);
    // 0x802634F8: lui         $t9, 0x8028
    ctx->r25 = S32(0X8028 << 16);
    // 0x802634FC: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x80263500: lbu         $t9, -0x30D0($t9)
    ctx->r25 = MEM_BU(ctx->r25, -0X30D0);
    // 0x80263504: nop

    // 0x80263508: bne         $t9, $zero, L_80263524
    if (ctx->r25 != 0) {
        // 0x8026350C: or          $a0, $a1, $zero
        ctx->r4 = ctx->r5 | 0;
            goto L_80263524;
    }
    // 0x8026350C: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    // 0x80263510: b           L_802635FC
    // 0x80263514: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_802635FC;
    // 0x80263514: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80263518: addiu       $at, $zero, 0x5
    ctx->r1 = ADD32(0, 0X5);
L_8026351C:
    // 0x8026351C: beq         $v0, $at, L_802635F8
    if (ctx->r2 == ctx->r1) {
        // 0x80263520: or          $a0, $a1, $zero
        ctx->r4 = ctx->r5 | 0;
            goto L_802635F8;
    }
    // 0x80263520: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
L_80263524:
    // 0x80263524: jal         0x80263434
    // 0x80263528: sw          $a3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r7;
    ovl_8024B800_func_80263434(rdram, ctx);
        goto after_0;
    // 0x80263528: sw          $a3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r7;
    after_0:
    // 0x8026352C: lw          $a3, 0x20($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X20);
    // 0x80263530: beq         $v0, $zero, L_802635F8
    if (ctx->r2 == 0) {
        // 0x80263534: or          $a0, $a3, $zero
        ctx->r4 = ctx->r7 | 0;
            goto L_802635F8;
    }
    // 0x80263534: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
    // 0x80263538: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    // 0x8026353C: jal         0x8026AB2C
    // 0x80263540: sw          $a3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r7;
    ovl_8024B800_func_8026AB2C(rdram, ctx);
        goto after_1;
    // 0x80263540: sw          $a3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r7;
    after_1:
    // 0x80263544: lui         $at, 0x4391
    ctx->r1 = S32(0X4391 << 16);
    // 0x80263548: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x8026354C: lw          $a2, 0x18($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X18);
    // 0x80263550: c.lt.s      $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f0.fl < ctx->f4.fl;
    // 0x80263554: lw          $a3, 0x20($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X20);
    // 0x80263558: bc1f        L_802635FC
    if (!c1cs) {
        // 0x8026355C: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_802635FC;
    }
    // 0x8026355C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80263560: beq         $a2, $zero, L_802635F8
    if (ctx->r6 == 0) {
        // 0x80263564: or          $v1, $zero, $zero
        ctx->r3 = 0 | 0;
            goto L_802635F8;
    }
    // 0x80263564: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x80263568: lhu         $t0, 0x1A($a3)
    ctx->r8 = MEM_HU(ctx->r7, 0X1A);
    // 0x8026356C: lw          $v0, 0xC8($a3)
    ctx->r2 = MEM_W(ctx->r7, 0XC8);
    // 0x80263570: or          $a1, $t0, $zero
    ctx->r5 = ctx->r8 | 0;
L_80263574:
    // 0x80263574: lbu         $a0, 0x90E($v0)
    ctx->r4 = MEM_BU(ctx->r2, 0X90E);
    // 0x80263578: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x8026357C: beq         $a1, $a0, L_802635FC
    if (ctx->r5 == ctx->r4) {
        // 0x80263580: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_802635FC;
    }
    // 0x80263580: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80263584: bne         $a0, $zero, L_802635F0
    if (ctx->r4 != 0) {
        // 0x80263588: nop
    
            goto L_802635F0;
    }
    // 0x80263588: nop

    // 0x8026358C: sb          $t0, 0x90E($v0)
    MEM_B(0X90E, ctx->r2) = ctx->r8;
    // 0x80263590: sw          $a3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r7;
    // 0x80263594: jal         0x8026AB2C
    // 0x80263598: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
    ovl_8024B800_func_8026AB2C(rdram, ctx);
        goto after_2;
    // 0x80263598: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
    after_2:
    // 0x8026359C: cfc1        $t1, $FpcCsr
    ctx->r9 = get_cop1_cs();
    // 0x802635A0: lw          $a3, 0x20($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X20);
    // 0x802635A4: ori         $at, $t1, 0x3
    ctx->r1 = ctx->r9 | 0X3;
    // 0x802635A8: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x802635AC: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x802635B0: lwc1        $f8, 0x44($a3)
    ctx->f8.u32l = MEM_W(ctx->r7, 0X44);
    // 0x802635B4: cvt.w.s     $f6, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    ctx->f6.u32l = CVT_W_S(ctx->f0.fl);
    // 0x802635B8: ctc1        $t1, $FpcCsr
    set_cop1_cs(ctx->r9);
    // 0x802635BC: mfc1        $t2, $f6
    ctx->r10 = (int32_t)ctx->f6.u32l;
    // 0x802635C0: nop

    // 0x802635C4: cfc1        $t3, $FpcCsr
    ctx->r11 = get_cop1_cs();
    // 0x802635C8: sh          $t2, 0x32($a3)
    MEM_H(0X32, ctx->r7) = ctx->r10;
    // 0x802635CC: ori         $at, $t3, 0x3
    ctx->r1 = ctx->r11 | 0X3;
    // 0x802635D0: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x802635D4: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x802635D8: nop

    // 0x802635DC: cvt.w.s     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.u32l = CVT_W_S(ctx->f8.fl);
    // 0x802635E0: mfc1        $t4, $f10
    ctx->r12 = (int32_t)ctx->f10.u32l;
    // 0x802635E4: ctc1        $t3, $FpcCsr
    set_cop1_cs(ctx->r11);
    // 0x802635E8: b           L_802635F8
    // 0x802635EC: sh          $t4, 0x34($a3)
    MEM_H(0X34, ctx->r7) = ctx->r12;
        goto L_802635F8;
    // 0x802635EC: sh          $t4, 0x34($a3)
    MEM_H(0X34, ctx->r7) = ctx->r12;
L_802635F0:
    // 0x802635F0: bne         $v1, $a2, L_80263574
    if (ctx->r3 != ctx->r6) {
        // 0x802635F4: addiu       $v0, $v0, 0x1
        ctx->r2 = ADD32(ctx->r2, 0X1);
            goto L_80263574;
    }
    // 0x802635F4: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
L_802635F8:
    // 0x802635F8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_802635FC:
    // 0x802635FC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80263600: jr          $ra
    // 0x80263604: nop

    return;
    // 0x80263604: nop

;}
RECOMP_FUNC void ovl_8024B800_func_80263608(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80263608: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8026360C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80263610: jal         0x80059868
    // 0x80263614: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_80059868(rdram, ctx);
        goto after_0;
    // 0x80263614: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x80263618: andi        $v1, $v0, 0xF
    ctx->r3 = ctx->r2 & 0XF;
    // 0x8026361C: sltiu       $at, $v1, 0xB
    ctx->r1 = ctx->r3 < 0XB ? 1 : 0;
    // 0x80263620: beq         $at, $zero, L_80263640
    if (ctx->r1 == 0) {
        // 0x80263624: sll         $t8, $v1, 5
        ctx->r24 = S32(ctx->r3 << 5);
            goto L_80263640;
    }
    // 0x80263624: sll         $t8, $v1, 5
    ctx->r24 = S32(ctx->r3 << 5);
    // 0x80263628: lw          $t6, 0x18($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X18);
    // 0x8026362C: subu        $t8, $t8, $v1
    ctx->r24 = SUB32(ctx->r24, ctx->r3);
    // 0x80263630: lw          $t7, 0x18($t6)
    ctx->r15 = MEM_W(ctx->r14, 0X18);
    // 0x80263634: sll         $t8, $t8, 3
    ctx->r24 = S32(ctx->r24 << 3);
    // 0x80263638: jal         0x802634B8
    // 0x8026363C: addu        $a0, $t7, $t8
    ctx->r4 = ADD32(ctx->r15, ctx->r24);
    ovl_8024B800_func_802634B8(rdram, ctx);
        goto after_1;
    // 0x8026363C: addu        $a0, $t7, $t8
    ctx->r4 = ADD32(ctx->r15, ctx->r24);
    after_1:
L_80263640:
    // 0x80263640: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80263644: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80263648: jr          $ra
    // 0x8026364C: nop

    return;
    // 0x8026364C: nop

;}
RECOMP_FUNC void ovl_8024B800_func_80263650(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80263650: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80263654: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80263658: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8026365C: jal         0x80263434
    // 0x80263660: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    ovl_8024B800_func_80263434(rdram, ctx);
        goto after_0;
    // 0x80263660: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    after_0:
    // 0x80263664: or          $t0, $v0, $zero
    ctx->r8 = ctx->r2 | 0;
    // 0x80263668: beq         $v0, $zero, L_802636BC
    if (ctx->r2 == 0) {
        // 0x8026366C: or          $a1, $zero, $zero
        ctx->r5 = 0 | 0;
            goto L_802636BC;
    }
    // 0x8026366C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80263670: or          $v0, $s0, $zero
    ctx->r2 = ctx->r16 | 0;
    // 0x80263674: addiu       $a3, $zero, 0x13
    ctx->r7 = ADD32(0, 0X13);
    // 0x80263678: addiu       $a2, $zero, 0xF8
    ctx->r6 = ADD32(0, 0XF8);
L_8026367C:
    // 0x8026367C: lbu         $v1, 0x90E($v0)
    ctx->r3 = MEM_BU(ctx->r2, 0X90E);
    // 0x80263680: addiu       $a1, $a1, 0x1
    ctx->r5 = ADD32(ctx->r5, 0X1);
    // 0x80263684: beq         $v1, $zero, L_802636B4
    if (ctx->r3 == 0) {
        // 0x80263688: sltu        $at, $a1, $t0
        ctx->r1 = ctx->r5 < ctx->r8 ? 1 : 0;
            goto L_802636B4;
    }
    // 0x80263688: sltu        $at, $a1, $t0
    ctx->r1 = ctx->r5 < ctx->r8 ? 1 : 0;
    // 0x8026368C: multu       $v1, $a2
    result = U64(U32(ctx->r3)) * U64(U32(ctx->r6)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80263690: lw          $t6, 0x18($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X18);
    // 0x80263694: mflo        $t7
    ctx->r15 = lo;
    // 0x80263698: addu        $a0, $t6, $t7
    ctx->r4 = ADD32(ctx->r14, ctx->r15);
    // 0x8026369C: lhu         $t8, 0x12($a0)
    ctx->r24 = MEM_HU(ctx->r4, 0X12);
    // 0x802636A0: nop

    // 0x802636A4: andi        $t9, $t8, 0x300
    ctx->r25 = ctx->r24 & 0X300;
    // 0x802636A8: bne         $t9, $zero, L_802636B4
    if (ctx->r25 != 0) {
        // 0x802636AC: nop
    
            goto L_802636B4;
    }
    // 0x802636AC: nop

    // 0x802636B0: sb          $a3, 0x0($a0)
    MEM_B(0X0, ctx->r4) = ctx->r7;
L_802636B4:
    // 0x802636B4: bne         $at, $zero, L_8026367C
    if (ctx->r1 != 0) {
        // 0x802636B8: addiu       $v0, $v0, 0x1
        ctx->r2 = ADD32(ctx->r2, 0X1);
            goto L_8026367C;
    }
    // 0x802636B8: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
L_802636BC:
    // 0x802636BC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x802636C0: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x802636C4: jr          $ra
    // 0x802636C8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x802636C8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void ovl_8024B800_func_802636CC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802636CC: lui         $a2, 0x8012
    ctx->r6 = S32(0X8012 << 16);
    // 0x802636D0: lw          $v0, 0x18($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X18);
    // 0x802636D4: lw          $a2, 0xB2C($a2)
    ctx->r6 = MEM_W(ctx->r6, 0XB2C);
    // 0x802636D8: addiu       $a0, $zero, 0xF8
    ctx->r4 = ADD32(0, 0XF8);
L_802636DC:
    // 0x802636DC: lhu         $t6, 0x0($a1)
    ctx->r14 = MEM_HU(ctx->r5, 0X0);
    // 0x802636E0: nop

    // 0x802636E4: multu       $t6, $a0
    result = U64(U32(ctx->r14)) * U64(U32(ctx->r4)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x802636E8: mflo        $t7
    ctx->r15 = lo;
    // 0x802636EC: addu        $v1, $v0, $t7
    ctx->r3 = ADD32(ctx->r2, ctx->r15);
    // 0x802636F0: lhu         $t8, 0x1A($v1)
    ctx->r24 = MEM_HU(ctx->r3, 0X1A);
    // 0x802636F4: nop

    // 0x802636F8: beq         $t8, $zero, L_80263724
    if (ctx->r24 == 0) {
        // 0x802636FC: nop
    
            goto L_80263724;
    }
    // 0x802636FC: nop

    // 0x80263700: lhu         $t9, 0x14($v1)
    ctx->r25 = MEM_HU(ctx->r3, 0X14);
    // 0x80263704: nop

    // 0x80263708: andi        $t0, $t9, 0x8000
    ctx->r8 = ctx->r25 & 0X8000;
    // 0x8026370C: bne         $t0, $zero, L_80263724
    if (ctx->r8 != 0) {
        // 0x80263710: nop
    
            goto L_80263724;
    }
    // 0x80263710: nop

    // 0x80263714: beq         $v1, $a2, L_80263724
    if (ctx->r3 == ctx->r6) {
        // 0x80263718: nop
    
            goto L_80263724;
    }
    // 0x80263718: nop

    // 0x8026371C: jr          $ra
    // 0x80263720: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    return;
    // 0x80263720: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
L_80263724:
    // 0x80263724: b           L_802636DC
    // 0x80263728: addiu       $a1, $a1, 0x8
    ctx->r5 = ADD32(ctx->r5, 0X8);
        goto L_802636DC;
    // 0x80263728: addiu       $a1, $a1, 0x8
    ctx->r5 = ADD32(ctx->r5, 0X8);
    // 0x8026372C: jr          $ra
    // 0x80263730: nop

    return;
    // 0x80263730: nop

;}
RECOMP_FUNC void ovl_8024B800_func_80263734(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80263734: addiu       $sp, $sp, -0x78
    ctx->r29 = ADD32(ctx->r29, -0X78);
    // 0x80263738: sw          $a1, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = ctx->r5;
    // 0x8026373C: lw          $t6, 0x7C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X7C);
    // 0x80263740: lui         $t8, 0x8012
    ctx->r24 = S32(0X8012 << 16);
    // 0x80263744: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80263748: subu        $t7, $t7, $t6
    ctx->r15 = SUB32(ctx->r15, ctx->r14);
    // 0x8026374C: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80263750: addiu       $t8, $t8, 0x680
    ctx->r24 = ADD32(ctx->r24, 0X680);
    // 0x80263754: addu        $v0, $t7, $t8
    ctx->r2 = ADD32(ctx->r15, ctx->r24);
    // 0x80263758: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8026375C: lw          $a2, 0x8($v0)
    ctx->r6 = MEM_W(ctx->r2, 0X8);
    // 0x80263760: lw          $a3, 0x0($v0)
    ctx->r7 = MEM_W(ctx->r2, 0X0);
    // 0x80263764: addiu       $a1, $sp, 0x1C
    ctx->r5 = ADD32(ctx->r29, 0X1C);
    // 0x80263768: jal         0x8027A42C
    // 0x8026376C: sw          $a0, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->r4;
    ovl_8024B800_func_8027A42C(rdram, ctx);
        goto after_0;
    // 0x8026376C: sw          $a0, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->r4;
    after_0:
    // 0x80263770: lhu         $t9, 0x1C($sp)
    ctx->r25 = MEM_HU(ctx->r29, 0X1C);
    // 0x80263774: lw          $a0, 0x78($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X78);
    // 0x80263778: sll         $t0, $t9, 5
    ctx->r8 = S32(ctx->r25 << 5);
    // 0x8026377C: lw          $t1, 0x18($a0)
    ctx->r9 = MEM_W(ctx->r4, 0X18);
    // 0x80263780: subu        $t0, $t0, $t9
    ctx->r8 = SUB32(ctx->r8, ctx->r25);
    // 0x80263784: sll         $t0, $t0, 3
    ctx->r8 = S32(ctx->r8 << 3);
    // 0x80263788: addu        $v0, $t0, $t1
    ctx->r2 = ADD32(ctx->r8, ctx->r9);
    // 0x8026378C: lhu         $t2, 0x16($v0)
    ctx->r10 = MEM_HU(ctx->r2, 0X16);
    // 0x80263790: addiu       $a1, $sp, 0x1C
    ctx->r5 = ADD32(ctx->r29, 0X1C);
    // 0x80263794: ori         $t3, $t2, 0x80
    ctx->r11 = ctx->r10 | 0X80;
    // 0x80263798: jal         0x802636CC
    // 0x8026379C: sh          $t3, 0x16($v0)
    MEM_H(0X16, ctx->r2) = ctx->r11;
    ovl_8024B800_func_802636CC(rdram, ctx);
        goto after_1;
    // 0x8026379C: sh          $t3, 0x16($v0)
    MEM_H(0X16, ctx->r2) = ctx->r11;
    after_1:
    // 0x802637A0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802637A4: addiu       $sp, $sp, 0x78
    ctx->r29 = ADD32(ctx->r29, 0X78);
    // 0x802637A8: jr          $ra
    // 0x802637AC: nop

    return;
    // 0x802637AC: nop

;}
RECOMP_FUNC void ovl_8024B800_func_802637B0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802637B0: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x802637B4: mtc1        $a2, $f14
    ctx->f14.u32l = ctx->r6;
    // 0x802637B8: addiu       $sp, $sp, -0x70
    ctx->r29 = ADD32(ctx->r29, -0X70);
    // 0x802637BC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802637C0: mfc1        $a2, $f12
    ctx->r6 = (int32_t)ctx->f12.u32l;
    // 0x802637C4: mfc1        $a3, $f14
    ctx->r7 = (int32_t)ctx->f14.u32l;
    // 0x802637C8: sw          $a0, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->r4;
    // 0x802637CC: jal         0x8027A42C
    // 0x802637D0: addiu       $a1, $sp, 0x18
    ctx->r5 = ADD32(ctx->r29, 0X18);
    ovl_8024B800_func_8027A42C(rdram, ctx);
        goto after_0;
    // 0x802637D0: addiu       $a1, $sp, 0x18
    ctx->r5 = ADD32(ctx->r29, 0X18);
    after_0:
    // 0x802637D4: lw          $a0, 0x70($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X70);
    // 0x802637D8: jal         0x802636CC
    // 0x802637DC: addiu       $a1, $sp, 0x18
    ctx->r5 = ADD32(ctx->r29, 0X18);
    ovl_8024B800_func_802636CC(rdram, ctx);
        goto after_1;
    // 0x802637DC: addiu       $a1, $sp, 0x18
    ctx->r5 = ADD32(ctx->r29, 0X18);
    after_1:
    // 0x802637E0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802637E4: addiu       $sp, $sp, 0x70
    ctx->r29 = ADD32(ctx->r29, 0X70);
    // 0x802637E8: jr          $ra
    // 0x802637EC: nop

    return;
    // 0x802637EC: nop

;}
RECOMP_FUNC void ovl_8024B800_func_802637F0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802637F0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802637F4: lui         $t6, 0x8009
    ctx->r14 = S32(0X8009 << 16);
    // 0x802637F8: lw          $t6, 0x3B20($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X3B20);
    // 0x802637FC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80263800: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x80263804: lw          $t7, 0x8C($t6)
    ctx->r15 = MEM_W(ctx->r14, 0X8C);
    // 0x80263808: addiu       $at, $zero, 0x11
    ctx->r1 = ADD32(0, 0X11);
    // 0x8026380C: lhu         $t8, 0x2C($t7)
    ctx->r24 = MEM_HU(ctx->r15, 0X2C);
    // 0x80263810: nop

    // 0x80263814: div         $zero, $t8, $at
    lo = S32(S64(S32(ctx->r24)) / S64(S32(ctx->r1))); hi = S32(S64(S32(ctx->r24)) % S64(S32(ctx->r1)));
    // 0x80263818: mfhi        $t9
    ctx->r25 = hi;
    // 0x8026381C: addiu       $t0, $t9, 0xA
    ctx->r8 = ADD32(ctx->r25, 0XA);
    // 0x80263820: mtc1        $t0, $f4
    ctx->f4.u32l = ctx->r8;
    // 0x80263824: jal         0x8026D720
    // 0x80263828: cvt.s.w     $f12, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    ctx->f12.fl = CVT_S_W(ctx->f4.u32l);
    ovl_8024B800_func_8026D720(rdram, ctx);
        goto after_0;
    // 0x80263828: cvt.s.w     $f12, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    ctx->f12.fl = CVT_S_W(ctx->f4.u32l);
    after_0:
    // 0x8026382C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80263830: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80263834: jr          $ra
    // 0x80263838: nop

    return;
    // 0x80263838: nop

;}
RECOMP_FUNC void ovl_8024B800_func_8026383C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8026383C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80263840: lui         $v0, 0x8009
    ctx->r2 = S32(0X8009 << 16);
    // 0x80263844: lw          $v0, 0x3B20($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X3B20);
    // 0x80263848: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8026384C: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x80263850: lhu         $v1, 0xC0($v0)
    ctx->r3 = MEM_HU(ctx->r2, 0XC0);
    // 0x80263854: nop

    // 0x80263858: andi        $t6, $v1, 0x80
    ctx->r14 = ctx->r3 & 0X80;
    // 0x8026385C: bne         $t6, $zero, L_80263A8C
    if (ctx->r14 != 0) {
        // 0x80263860: andi        $t7, $v1, 0x1
        ctx->r15 = ctx->r3 & 0X1;
            goto L_80263A8C;
    }
    // 0x80263860: andi        $t7, $v1, 0x1
    ctx->r15 = ctx->r3 & 0X1;
    // 0x80263864: beq         $t7, $zero, L_80263958
    if (ctx->r15 == 0) {
        // 0x80263868: nop
    
            goto L_80263958;
    }
    // 0x80263868: nop

    // 0x8026386C: lw          $v1, 0x8C($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X8C);
    // 0x80263870: addiu       $at, $zero, 0x15
    ctx->r1 = ADD32(0, 0X15);
    // 0x80263874: lhu         $t8, 0xE($v1)
    ctx->r24 = MEM_HU(ctx->r3, 0XE);
    // 0x80263878: lw          $t0, 0x20($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X20);
    // 0x8026387C: bne         $t8, $at, L_80263890
    if (ctx->r24 != ctx->r1) {
        // 0x80263880: or          $a0, $v1, $zero
        ctx->r4 = ctx->r3 | 0;
            goto L_80263890;
    }
    // 0x80263880: or          $a0, $v1, $zero
    ctx->r4 = ctx->r3 | 0;
    // 0x80263884: addiu       $t9, $zero, 0x26
    ctx->r25 = ADD32(0, 0X26);
    // 0x80263888: b           L_8026394C
    // 0x8026388C: sb          $t9, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r25;
        goto L_8026394C;
    // 0x8026388C: sb          $t9, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r25;
L_80263890:
    // 0x80263890: lw          $a0, 0x18($t0)
    ctx->r4 = MEM_W(ctx->r8, 0X18);
    // 0x80263894: jal         0x8026D670
    // 0x80263898: nop

    ovl_8024B800_func_8026D670(rdram, ctx);
        goto after_0;
    // 0x80263898: nop

    after_0:
    // 0x8026389C: beq         $v0, $zero, L_80263908
    if (ctx->r2 == 0) {
        // 0x802638A0: lw          $a0, 0x20($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X20);
            goto L_80263908;
    }
    // 0x802638A0: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x802638A4: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x802638A8: jal         0x802637F0
    // 0x802638AC: nop

    ovl_8024B800_func_802637F0(rdram, ctx);
        goto after_1;
    // 0x802638AC: nop

    after_1:
    // 0x802638B0: blez        $v0, L_80263904
    if (SIGNED(ctx->r2) <= 0) {
        // 0x802638B4: or          $a1, $v0, $zero
        ctx->r5 = ctx->r2 | 0;
            goto L_80263904;
    }
    // 0x802638B4: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    // 0x802638B8: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x802638BC: jal         0x80263734
    // 0x802638C0: nop

    ovl_8024B800_func_80263734(rdram, ctx);
        goto after_2;
    // 0x802638C0: nop

    after_2:
    // 0x802638C4: lui         $v1, 0x801B
    ctx->r3 = S32(0X801B << 16);
    // 0x802638C8: lw          $v1, 0x3614($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X3614);
    // 0x802638CC: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x802638D0: beq         $v1, $zero, L_802638FC
    if (ctx->r3 == 0) {
        // 0x802638D4: addiu       $t3, $zero, 0x26
        ctx->r11 = ADD32(0, 0X26);
            goto L_802638FC;
    }
    // 0x802638D4: addiu       $t3, $zero, 0x26
    ctx->r11 = ADD32(0, 0X26);
    // 0x802638D8: lui         $t1, 0x8009
    ctx->r9 = S32(0X8009 << 16);
    // 0x802638DC: lw          $t1, 0x3B20($t1)
    ctx->r9 = MEM_W(ctx->r9, 0X3B20);
    // 0x802638E0: nop

    // 0x802638E4: lhu         $t2, 0x6A($t1)
    ctx->r10 = MEM_HU(ctx->r9, 0X6A);
    // 0x802638E8: nop

    // 0x802638EC: slti        $at, $t2, 0x3C
    ctx->r1 = SIGNED(ctx->r10) < 0X3C ? 1 : 0;
    // 0x802638F0: beq         $at, $zero, L_802638FC
    if (ctx->r1 == 0) {
        // 0x802638F4: nop
    
            goto L_802638FC;
    }
    // 0x802638F4: nop

    // 0x802638F8: or          $a0, $v1, $zero
    ctx->r4 = ctx->r3 | 0;
L_802638FC:
    // 0x802638FC: b           L_8026394C
    // 0x80263900: sb          $t3, 0x0($a0)
    MEM_B(0X0, ctx->r4) = ctx->r11;
        goto L_8026394C;
    // 0x80263900: sb          $t3, 0x0($a0)
    MEM_B(0X0, ctx->r4) = ctx->r11;
L_80263904:
    // 0x80263904: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
L_80263908:
    // 0x80263908: jal         0x802636CC
    // 0x8026390C: addiu       $a1, $a0, 0x318
    ctx->r5 = ADD32(ctx->r4, 0X318);
    ovl_8024B800_func_802636CC(rdram, ctx);
        goto after_3;
    // 0x8026390C: addiu       $a1, $a0, 0x318
    ctx->r5 = ADD32(ctx->r4, 0X318);
    after_3:
    // 0x80263910: lui         $v1, 0x801B
    ctx->r3 = S32(0X801B << 16);
    // 0x80263914: lw          $v1, 0x3614($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X3614);
    // 0x80263918: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x8026391C: beq         $v1, $zero, L_80263948
    if (ctx->r3 == 0) {
        // 0x80263920: addiu       $t7, $zero, 0x18
        ctx->r15 = ADD32(0, 0X18);
            goto L_80263948;
    }
    // 0x80263920: addiu       $t7, $zero, 0x18
    ctx->r15 = ADD32(0, 0X18);
    // 0x80263924: lui         $t5, 0x8009
    ctx->r13 = S32(0X8009 << 16);
    // 0x80263928: lw          $t5, 0x3B20($t5)
    ctx->r13 = MEM_W(ctx->r13, 0X3B20);
    // 0x8026392C: nop

    // 0x80263930: lhu         $t6, 0x6A($t5)
    ctx->r14 = MEM_HU(ctx->r13, 0X6A);
    // 0x80263934: nop

    // 0x80263938: slti        $at, $t6, 0x3C
    ctx->r1 = SIGNED(ctx->r14) < 0X3C ? 1 : 0;
    // 0x8026393C: beq         $at, $zero, L_80263948
    if (ctx->r1 == 0) {
        // 0x80263940: nop
    
            goto L_80263948;
    }
    // 0x80263940: nop

    // 0x80263944: or          $a0, $v1, $zero
    ctx->r4 = ctx->r3 | 0;
L_80263948:
    // 0x80263948: sb          $t7, 0x0($a0)
    MEM_B(0X0, ctx->r4) = ctx->r15;
L_8026394C:
    // 0x8026394C: lw          $t8, 0x20($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X20);
    // 0x80263950: b           L_80263A08
    // 0x80263954: sw          $a0, 0x918($t8)
    MEM_W(0X918, ctx->r24) = ctx->r4;
        goto L_80263A08;
    // 0x80263954: sw          $a0, 0x918($t8)
    MEM_W(0X918, ctx->r24) = ctx->r4;
L_80263958:
    // 0x80263958: lw          $v1, 0x8C($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X8C);
    // 0x8026395C: addiu       $at, $zero, 0x15
    ctx->r1 = ADD32(0, 0X15);
    // 0x80263960: lhu         $t9, 0xE($v1)
    ctx->r25 = MEM_HU(ctx->r3, 0XE);
    // 0x80263964: lui         $t1, 0x801B
    ctx->r9 = S32(0X801B << 16);
    // 0x80263968: bne         $t9, $at, L_8026397C
    if (ctx->r25 != ctx->r1) {
        // 0x8026396C: or          $a0, $v1, $zero
        ctx->r4 = ctx->r3 | 0;
            goto L_8026397C;
    }
    // 0x8026396C: or          $a0, $v1, $zero
    ctx->r4 = ctx->r3 | 0;
    // 0x80263970: addiu       $t0, $zero, 0x19
    ctx->r8 = ADD32(0, 0X19);
    // 0x80263974: b           L_80263A08
    // 0x80263978: sb          $t0, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r8;
        goto L_80263A08;
    // 0x80263978: sb          $t0, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r8;
L_8026397C:
    // 0x8026397C: lhu         $t1, 0x361E($t1)
    ctx->r9 = MEM_HU(ctx->r9, 0X361E);
    // 0x80263980: nop

    // 0x80263984: andi        $t2, $t1, 0x4
    ctx->r10 = ctx->r9 & 0X4;
    // 0x80263988: beq         $t2, $zero, L_802639B0
    if (ctx->r10 == 0) {
        // 0x8026398C: nop
    
            goto L_802639B0;
    }
    // 0x8026398C: nop

    // 0x80263990: lhu         $t3, 0x6A($v0)
    ctx->r11 = MEM_HU(ctx->r2, 0X6A);
    // 0x80263994: lui         $a0, 0x801B
    ctx->r4 = S32(0X801B << 16);
    // 0x80263998: slti        $at, $t3, 0x3C
    ctx->r1 = SIGNED(ctx->r11) < 0X3C ? 1 : 0;
    // 0x8026399C: beq         $at, $zero, L_802639B0
    if (ctx->r1 == 0) {
        // 0x802639A0: addiu       $t4, $zero, 0x19
        ctx->r12 = ADD32(0, 0X19);
            goto L_802639B0;
    }
    // 0x802639A0: addiu       $t4, $zero, 0x19
    ctx->r12 = ADD32(0, 0X19);
    // 0x802639A4: lw          $a0, 0x3614($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X3614);
    // 0x802639A8: b           L_80263A08
    // 0x802639AC: sb          $t4, 0x0($a0)
    MEM_B(0X0, ctx->r4) = ctx->r12;
        goto L_80263A08;
    // 0x802639AC: sb          $t4, 0x0($a0)
    MEM_B(0X0, ctx->r4) = ctx->r12;
L_802639B0:
    // 0x802639B0: lw          $a0, 0xA0($v0)
    ctx->r4 = MEM_W(ctx->r2, 0XA0);
    // 0x802639B4: lw          $t6, 0x20($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X20);
    // 0x802639B8: beq         $a0, $zero, L_802639C8
    if (ctx->r4 == 0) {
        // 0x802639BC: addiu       $t5, $zero, 0x2C
        ctx->r13 = ADD32(0, 0X2C);
            goto L_802639C8;
    }
    // 0x802639BC: addiu       $t5, $zero, 0x2C
    ctx->r13 = ADD32(0, 0X2C);
    // 0x802639C0: b           L_80263A08
    // 0x802639C4: sb          $t5, 0x0($a0)
    MEM_B(0X0, ctx->r4) = ctx->r13;
        goto L_80263A08;
    // 0x802639C4: sb          $t5, 0x0($a0)
    MEM_B(0X0, ctx->r4) = ctx->r13;
L_802639C8:
    // 0x802639C8: lw          $t7, 0xC8($v1)
    ctx->r15 = MEM_W(ctx->r3, 0XC8);
    // 0x802639CC: nop

    // 0x802639D0: bne         $t6, $t7, L_802639F4
    if (ctx->r14 != ctx->r15) {
        // 0x802639D4: lw          $a0, 0x20($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X20);
            goto L_802639F4;
    }
    // 0x802639D4: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x802639D8: lw          $a0, 0x90($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X90);
    // 0x802639DC: addiu       $t8, $zero, 0x7
    ctx->r24 = ADD32(0, 0X7);
    // 0x802639E0: beq         $a0, $zero, L_802639F0
    if (ctx->r4 == 0) {
        // 0x802639E4: nop
    
            goto L_802639F0;
    }
    // 0x802639E4: nop

    // 0x802639E8: b           L_80263A08
    // 0x802639EC: sb          $t8, 0x0($a0)
    MEM_B(0X0, ctx->r4) = ctx->r24;
        goto L_80263A08;
    // 0x802639EC: sb          $t8, 0x0($a0)
    MEM_B(0X0, ctx->r4) = ctx->r24;
L_802639F0:
    // 0x802639F0: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
L_802639F4:
    // 0x802639F4: jal         0x80263734
    // 0x802639F8: addiu       $a1, $zero, 0xF
    ctx->r5 = ADD32(0, 0XF);
    ovl_8024B800_func_80263734(rdram, ctx);
        goto after_4;
    // 0x802639F8: addiu       $a1, $zero, 0xF
    ctx->r5 = ADD32(0, 0XF);
    after_4:
    // 0x802639FC: addiu       $t9, $zero, 0x19
    ctx->r25 = ADD32(0, 0X19);
    // 0x80263A00: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x80263A04: sb          $t9, 0x0($v0)
    MEM_B(0X0, ctx->r2) = ctx->r25;
L_80263A08:
    // 0x80263A08: lui         $t0, 0x8009
    ctx->r8 = S32(0X8009 << 16);
    // 0x80263A0C: lw          $t0, 0x3B20($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X3B20);
    // 0x80263A10: lw          $t1, 0x20($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X20);
    // 0x80263A14: lw          $v0, 0xB0($t0)
    ctx->r2 = MEM_W(ctx->r8, 0XB0);
    // 0x80263A18: lui         $t0, 0x801B
    ctx->r8 = S32(0X801B << 16);
    // 0x80263A1C: beq         $v0, $zero, L_80263A3C
    if (ctx->r2 == 0) {
        // 0x80263A20: nop
    
            goto L_80263A3C;
    }
    // 0x80263A20: nop

    // 0x80263A24: lw          $t2, 0xC8($v0)
    ctx->r10 = MEM_W(ctx->r2, 0XC8);
    // 0x80263A28: addiu       $t3, $zero, 0x19
    ctx->r11 = ADD32(0, 0X19);
    // 0x80263A2C: bne         $t1, $t2, L_80263A3C
    if (ctx->r9 != ctx->r10) {
        // 0x80263A30: nop
    
            goto L_80263A3C;
    }
    // 0x80263A30: nop

    // 0x80263A34: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x80263A38: sb          $t3, 0x0($v0)
    MEM_B(0X0, ctx->r2) = ctx->r11;
L_80263A3C:
    // 0x80263A3C: lhu         $t4, 0x12($a0)
    ctx->r12 = MEM_HU(ctx->r4, 0X12);
    // 0x80263A40: lui         $t7, 0x8012
    ctx->r15 = S32(0X8012 << 16);
    // 0x80263A44: ori         $t5, $t4, 0x100
    ctx->r13 = ctx->r12 | 0X100;
    // 0x80263A48: sh          $t5, 0x12($a0)
    MEM_H(0X12, ctx->r4) = ctx->r13;
    // 0x80263A4C: lw          $t6, 0x20($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X20);
    // 0x80263A50: nop

    // 0x80263A54: sw          $a0, 0x914($t6)
    MEM_W(0X914, ctx->r14) = ctx->r4;
    // 0x80263A58: lhu         $t7, 0xB78($t7)
    ctx->r15 = MEM_HU(ctx->r15, 0XB78);
    // 0x80263A5C: nop

    // 0x80263A60: bne         $t7, $zero, L_80263A78
    if (ctx->r15 != 0) {
        // 0x80263A64: nop
    
            goto L_80263A78;
    }
    // 0x80263A64: nop

    // 0x80263A68: lhu         $t8, 0x20($a0)
    ctx->r24 = MEM_HU(ctx->r4, 0X20);
    // 0x80263A6C: nop

    // 0x80263A70: ori         $t9, $t8, 0x200
    ctx->r25 = ctx->r24 | 0X200;
    // 0x80263A74: sh          $t9, 0x20($a0)
    MEM_H(0X20, ctx->r4) = ctx->r25;
L_80263A78:
    // 0x80263A78: lhu         $t0, 0x3674($t0)
    ctx->r8 = MEM_HU(ctx->r8, 0X3674);
    // 0x80263A7C: nop

    // 0x80263A80: beq         $t0, $zero, L_80263A90
    if (ctx->r8 == 0) {
        // 0x80263A84: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_80263A90;
    }
    // 0x80263A84: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80263A88: sb          $zero, 0x0($a0)
    MEM_B(0X0, ctx->r4) = 0;
L_80263A8C:
    // 0x80263A8C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80263A90:
    // 0x80263A90: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80263A94: jr          $ra
    // 0x80263A98: nop

    return;
    // 0x80263A98: nop

;}
RECOMP_FUNC void ovl_8024B800_func_80263A9C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80263A9C: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x80263AA0: lui         $v1, 0x8009
    ctx->r3 = S32(0X8009 << 16);
    // 0x80263AA4: lw          $v1, 0x3B20($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X3B20);
    // 0x80263AA8: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80263AAC: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80263AB0: sw          $zero, 0x24($sp)
    MEM_W(0X24, ctx->r29) = 0;
    // 0x80263AB4: lhu         $v0, 0xC0($v1)
    ctx->r2 = MEM_HU(ctx->r3, 0XC0);
    // 0x80263AB8: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x80263ABC: andi        $t6, $v0, 0x80
    ctx->r14 = ctx->r2 & 0X80;
    // 0x80263AC0: bne         $t6, $zero, L_80263E70
    if (ctx->r14 != 0) {
        // 0x80263AC4: andi        $t7, $v0, 0x1
        ctx->r15 = ctx->r2 & 0X1;
            goto L_80263E70;
    }
    // 0x80263AC4: andi        $t7, $v0, 0x1
    ctx->r15 = ctx->r2 & 0X1;
    // 0x80263AC8: beq         $t7, $zero, L_80263C70
    if (ctx->r15 == 0) {
        // 0x80263ACC: lui         $v0, 0x801B
        ctx->r2 = S32(0X801B << 16);
            goto L_80263C70;
    }
    // 0x80263ACC: lui         $v0, 0x801B
    ctx->r2 = S32(0X801B << 16);
    // 0x80263AD0: jal         0x802636CC
    // 0x80263AD4: addiu       $a1, $s0, 0x318
    ctx->r5 = ADD32(ctx->r16, 0X318);
    ovl_8024B800_func_802636CC(rdram, ctx);
        goto after_0;
    // 0x80263AD4: addiu       $a1, $s0, 0x318
    ctx->r5 = ADD32(ctx->r16, 0X318);
    after_0:
    // 0x80263AD8: addiu       $t8, $zero, 0x2B
    ctx->r24 = ADD32(0, 0X2B);
    // 0x80263ADC: sb          $t8, 0x0($v0)
    MEM_B(0X0, ctx->r2) = ctx->r24;
    // 0x80263AE0: lhu         $t9, 0x8($s0)
    ctx->r25 = MEM_HU(ctx->r16, 0X8);
    // 0x80263AE4: or          $a3, $v0, $zero
    ctx->r7 = ctx->r2 | 0;
    // 0x80263AE8: andi        $t0, $t9, 0x1
    ctx->r8 = ctx->r25 & 0X1;
    // 0x80263AEC: beq         $t0, $zero, L_80263B04
    if (ctx->r8 == 0) {
        // 0x80263AF0: lui         $at, 0x8028
        ctx->r1 = S32(0X8028 << 16);
            goto L_80263B04;
    }
    // 0x80263AF0: lui         $at, 0x8028
    ctx->r1 = S32(0X8028 << 16);
    // 0x80263AF4: lwc1        $f5, -0x2E28($at)
    ctx->f_odd[(5 - 1) * 2] = MEM_W(ctx->r1, -0X2E28);
    // 0x80263AF8: lwc1        $f4, -0x2E24($at)
    ctx->f4.u32l = MEM_W(ctx->r1, -0X2E24);
    // 0x80263AFC: b           L_80263B14
    // 0x80263B00: cvt.s.d     $f14, $f4
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.d); 
    ctx->f14.fl = CVT_S_D(ctx->f4.d);
        goto L_80263B14;
    // 0x80263B00: cvt.s.d     $f14, $f4
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.d); 
    ctx->f14.fl = CVT_S_D(ctx->f4.d);
L_80263B04:
    // 0x80263B04: mtc1        $zero, $f7
    ctx->f_odd[(7 - 1) * 2] = 0;
    // 0x80263B08: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x80263B0C: nop

    // 0x80263B10: cvt.s.d     $f14, $f6
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.d); 
    ctx->f14.fl = CVT_S_D(ctx->f6.d);
L_80263B14:
    // 0x80263B14: lw          $t1, 0x24($s0)
    ctx->r9 = MEM_W(ctx->r16, 0X24);
    // 0x80263B18: nop

    // 0x80263B1C: lw          $a0, 0x18($t1)
    ctx->r4 = MEM_W(ctx->r9, 0X18);
    // 0x80263B20: swc1        $f14, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f14.u32l;
    // 0x80263B24: jal         0x8026D670
    // 0x80263B28: sw          $a3, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r7;
    ovl_8024B800_func_8026D670(rdram, ctx);
        goto after_1;
    // 0x80263B28: sw          $a3, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r7;
    after_1:
    // 0x80263B2C: lw          $a3, 0x34($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X34);
    // 0x80263B30: lwc1        $f14, 0x20($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X20);
    // 0x80263B34: bne         $v0, $zero, L_80263B78
    if (ctx->r2 != 0) {
        // 0x80263B38: lui         $t2, 0x8009
        ctx->r10 = S32(0X8009 << 16);
            goto L_80263B78;
    }
    // 0x80263B38: lui         $t2, 0x8009
    ctx->r10 = S32(0X8009 << 16);
    // 0x80263B3C: lw          $t2, 0x3B20($t2)
    ctx->r10 = MEM_W(ctx->r10, 0X3B20);
    // 0x80263B40: nop

    // 0x80263B44: lwc1        $f12, 0x20($t2)
    ctx->f12.u32l = MEM_W(ctx->r10, 0X20);
    // 0x80263B48: jal         0x80279308
    // 0x80263B4C: sw          $a3, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r7;
    ovl_8024B800_func_80279308(rdram, ctx);
        goto after_2;
    // 0x80263B4C: sw          $a3, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r7;
    after_2:
    // 0x80263B50: lui         $at, 0x8028
    ctx->r1 = S32(0X8028 << 16);
    // 0x80263B54: lwc1        $f11, -0x2E20($at)
    ctx->f_odd[(11 - 1) * 2] = MEM_W(ctx->r1, -0X2E20);
    // 0x80263B58: lwc1        $f10, -0x2E1C($at)
    ctx->f10.u32l = MEM_W(ctx->r1, -0X2E1C);
    // 0x80263B5C: cvt.d.s     $f8, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f8.d = CVT_D_S(ctx->f0.fl);
    // 0x80263B60: c.lt.d      $f8, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f8.d < ctx->f10.d;
    // 0x80263B64: lw          $a3, 0x34($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X34);
    // 0x80263B68: bc1f        L_80263B78
    if (!c1cs) {
        // 0x80263B6C: addiu       $t3, $zero, 0x51
        ctx->r11 = ADD32(0, 0X51);
            goto L_80263B78;
    }
    // 0x80263B6C: addiu       $t3, $zero, 0x51
    ctx->r11 = ADD32(0, 0X51);
    // 0x80263B70: b           L_80263C20
    // 0x80263B74: sb          $t3, 0x0($a3)
    MEM_B(0X0, ctx->r7) = ctx->r11;
        goto L_80263C20;
    // 0x80263B74: sb          $t3, 0x0($a3)
    MEM_B(0X0, ctx->r7) = ctx->r11;
L_80263B78:
    // 0x80263B78: lui         $at, 0x41A0
    ctx->r1 = S32(0X41A0 << 16);
    // 0x80263B7C: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    // 0x80263B80: jal         0x8026D720
    // 0x80263B84: sw          $a3, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r7;
    ovl_8024B800_func_8026D720(rdram, ctx);
        goto after_3;
    // 0x80263B84: sw          $a3, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r7;
    after_3:
    // 0x80263B88: lw          $a3, 0x34($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X34);
    // 0x80263B8C: blez        $v0, L_80263BAC
    if (SIGNED(ctx->r2) <= 0) {
        // 0x80263B90: or          $a1, $v0, $zero
        ctx->r5 = ctx->r2 | 0;
            goto L_80263BAC;
    }
    // 0x80263B90: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    // 0x80263B94: jal         0x80263734
    // 0x80263B98: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_8024B800_func_80263734(rdram, ctx);
        goto after_4;
    // 0x80263B98: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_4:
    // 0x80263B9C: addiu       $t4, $zero, 0x45
    ctx->r12 = ADD32(0, 0X45);
    // 0x80263BA0: or          $a3, $v0, $zero
    ctx->r7 = ctx->r2 | 0;
    // 0x80263BA4: b           L_80263C20
    // 0x80263BA8: sb          $t4, 0x0($v0)
    MEM_B(0X0, ctx->r2) = ctx->r12;
        goto L_80263C20;
    // 0x80263BA8: sb          $t4, 0x0($v0)
    MEM_B(0X0, ctx->r2) = ctx->r12;
L_80263BAC:
    // 0x80263BAC: lw          $t5, 0xC8($a3)
    ctx->r13 = MEM_W(ctx->r7, 0XC8);
    // 0x80263BB0: nop

    // 0x80263BB4: lw          $t6, 0x24($t5)
    ctx->r14 = MEM_W(ctx->r13, 0X24);
    // 0x80263BB8: nop

    // 0x80263BBC: lw          $v1, 0x914($t6)
    ctx->r3 = MEM_W(ctx->r14, 0X914);
    // 0x80263BC0: nop

    // 0x80263BC4: beq         $v1, $zero, L_80263C20
    if (ctx->r3 == 0) {
        // 0x80263BC8: nop
    
            goto L_80263C20;
    }
    // 0x80263BC8: nop

    // 0x80263BCC: lh          $t7, 0x2E($v1)
    ctx->r15 = MEM_H(ctx->r3, 0X2E);
    // 0x80263BD0: lh          $t8, 0x30($v1)
    ctx->r24 = MEM_H(ctx->r3, 0X30);
    // 0x80263BD4: mtc1        $t7, $f16
    ctx->f16.u32l = ctx->r15;
    // 0x80263BD8: mtc1        $t8, $f18
    ctx->f18.u32l = ctx->r24;
    // 0x80263BDC: cvt.s.w     $f16, $f16
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    ctx->f16.fl = CVT_S_W(ctx->f16.u32l);
    // 0x80263BE0: sw          $a3, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r7;
    // 0x80263BE4: sw          $v1, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r3;
    // 0x80263BE8: cvt.s.w     $f18, $f18
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    ctx->f18.fl = CVT_S_W(ctx->f18.u32l);
    // 0x80263BEC: mfc1        $a1, $f16
    ctx->r5 = (int32_t)ctx->f16.u32l;
    // 0x80263BF0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80263BF4: mfc1        $a2, $f18
    ctx->r6 = (int32_t)ctx->f18.u32l;
    // 0x80263BF8: jal         0x802637B0
    // 0x80263BFC: nop

    ovl_8024B800_func_802637B0(rdram, ctx);
        goto after_5;
    // 0x80263BFC: nop

    after_5:
    // 0x80263C00: lw          $v1, 0x30($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X30);
    // 0x80263C04: lw          $a3, 0x34($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X34);
    // 0x80263C08: lbu         $t9, 0x0($v1)
    ctx->r25 = MEM_BU(ctx->r3, 0X0);
    // 0x80263C0C: addiu       $at, $zero, 0x26
    ctx->r1 = ADD32(0, 0X26);
    // 0x80263C10: bne         $t9, $at, L_80263C20
    if (ctx->r25 != ctx->r1) {
        // 0x80263C14: addiu       $t0, $zero, 0x45
        ctx->r8 = ADD32(0, 0X45);
            goto L_80263C20;
    }
    // 0x80263C14: addiu       $t0, $zero, 0x45
    ctx->r8 = ADD32(0, 0X45);
    // 0x80263C18: or          $a3, $v0, $zero
    ctx->r7 = ctx->r2 | 0;
    // 0x80263C1C: sb          $t0, 0x0($v0)
    MEM_B(0X0, ctx->r2) = ctx->r8;
L_80263C20:
    // 0x80263C20: sw          $a3, 0x918($s0)
    MEM_W(0X918, ctx->r16) = ctx->r7;
    // 0x80263C24: lui         $v1, 0x8009
    ctx->r3 = S32(0X8009 << 16);
    // 0x80263C28: lw          $v1, 0x3B20($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X3B20);
    // 0x80263C2C: addiu       $at, $zero, 0x17
    ctx->r1 = ADD32(0, 0X17);
    // 0x80263C30: lbu         $t1, 0xBC($v1)
    ctx->r9 = MEM_BU(ctx->r3, 0XBC);
    // 0x80263C34: nop

    // 0x80263C38: bne         $t1, $at, L_80263DF0
    if (ctx->r9 != ctx->r1) {
        // 0x80263C3C: nop
    
            goto L_80263DF0;
    }
    // 0x80263C3C: nop

    // 0x80263C40: lw          $t2, 0x8C($v1)
    ctx->r10 = MEM_W(ctx->r3, 0X8C);
    // 0x80263C44: nop

    // 0x80263C48: lhu         $t3, 0x2C($t2)
    ctx->r11 = MEM_HU(ctx->r10, 0X2C);
    // 0x80263C4C: nop

    // 0x80263C50: andi        $t4, $t3, 0x1
    ctx->r12 = ctx->r11 & 0X1;
    // 0x80263C54: beq         $t4, $zero, L_80263DF0
    if (ctx->r12 == 0) {
        // 0x80263C58: nop
    
            goto L_80263DF0;
    }
    // 0x80263C58: nop

    // 0x80263C5C: sb          $zero, 0x0($a3)
    MEM_B(0X0, ctx->r7) = 0;
    // 0x80263C60: lui         $v1, 0x8009
    ctx->r3 = S32(0X8009 << 16);
    // 0x80263C64: lw          $v1, 0x3B20($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X3B20);
    // 0x80263C68: b           L_80263DF4
    // 0x80263C6C: lw          $v0, 0xB0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0XB0);
        goto L_80263DF4;
    // 0x80263C6C: lw          $v0, 0xB0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0XB0);
L_80263C70:
    // 0x80263C70: lw          $v0, 0x3680($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X3680);
    // 0x80263C74: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80263C78: beq         $v0, $zero, L_80263D2C
    if (ctx->r2 == 0) {
        // 0x80263C7C: nop
    
            goto L_80263D2C;
    }
    // 0x80263C7C: nop

    // 0x80263C80: lhu         $t5, 0x6A($v1)
    ctx->r13 = MEM_HU(ctx->r3, 0X6A);
    // 0x80263C84: nop

    // 0x80263C88: slti        $at, $t5, 0x32
    ctx->r1 = SIGNED(ctx->r13) < 0X32 ? 1 : 0;
    // 0x80263C8C: beq         $at, $zero, L_80263D2C
    if (ctx->r1 == 0) {
        // 0x80263C90: nop
    
            goto L_80263D2C;
    }
    // 0x80263C90: nop

    // 0x80263C94: lw          $a1, 0x4C($v0)
    ctx->r5 = MEM_W(ctx->r2, 0X4C);
    // 0x80263C98: lw          $a2, 0x44($v0)
    ctx->r6 = MEM_W(ctx->r2, 0X44);
    // 0x80263C9C: jal         0x802637B0
    // 0x80263CA0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_8024B800_func_802637B0(rdram, ctx);
        goto after_6;
    // 0x80263CA0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_6:
    // 0x80263CA4: lbu         $t6, 0x8AC($s0)
    ctx->r14 = MEM_BU(ctx->r16, 0X8AC);
    // 0x80263CA8: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x80263CAC: bne         $t6, $at, L_80263CE4
    if (ctx->r14 != ctx->r1) {
        // 0x80263CB0: or          $a3, $v0, $zero
        ctx->r7 = ctx->r2 | 0;
            goto L_80263CE4;
    }
    // 0x80263CB0: or          $a3, $v0, $zero
    ctx->r7 = ctx->r2 | 0;
    // 0x80263CB4: lui         $t7, 0x8009
    ctx->r15 = S32(0X8009 << 16);
    // 0x80263CB8: lw          $t7, 0x3B20($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X3B20);
    // 0x80263CBC: addiu       $t1, $zero, 0x52
    ctx->r9 = ADD32(0, 0X52);
    // 0x80263CC0: lw          $t8, 0x8C($t7)
    ctx->r24 = MEM_W(ctx->r15, 0X8C);
    // 0x80263CC4: nop

    // 0x80263CC8: lhu         $t9, 0x2C($t8)
    ctx->r25 = MEM_HU(ctx->r24, 0X2C);
    // 0x80263CCC: nop

    // 0x80263CD0: andi        $t0, $t9, 0x1
    ctx->r8 = ctx->r25 & 0X1;
    // 0x80263CD4: beq         $t0, $zero, L_80263CE4
    if (ctx->r8 == 0) {
        // 0x80263CD8: nop
    
            goto L_80263CE4;
    }
    // 0x80263CD8: nop

    // 0x80263CDC: b           L_80263D1C
    // 0x80263CE0: sb          $t1, 0x0($v0)
    MEM_B(0X0, ctx->r2) = ctx->r9;
        goto L_80263D1C;
    // 0x80263CE0: sb          $t1, 0x0($v0)
    MEM_B(0X0, ctx->r2) = ctx->r9;
L_80263CE4:
    // 0x80263CE4: lui         $v0, 0x801B
    ctx->r2 = S32(0X801B << 16);
    // 0x80263CE8: lw          $v0, 0x3680($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X3680);
    // 0x80263CEC: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
    // 0x80263CF0: lw          $a1, 0x4C($v0)
    ctx->r5 = MEM_W(ctx->r2, 0X4C);
    // 0x80263CF4: lw          $a2, 0x44($v0)
    ctx->r6 = MEM_W(ctx->r2, 0X44);
    // 0x80263CF8: jal         0x80272058
    // 0x80263CFC: sw          $a3, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r7;
    ovl_8024B800_func_80272058(rdram, ctx);
        goto after_7;
    // 0x80263CFC: sw          $a3, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r7;
    after_7:
    // 0x80263D00: lw          $a3, 0x34($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X34);
    // 0x80263D04: beq         $v0, $zero, L_80263D18
    if (ctx->r2 == 0) {
        // 0x80263D08: addiu       $t3, $zero, 0x52
        ctx->r11 = ADD32(0, 0X52);
            goto L_80263D18;
    }
    // 0x80263D08: addiu       $t3, $zero, 0x52
    ctx->r11 = ADD32(0, 0X52);
    // 0x80263D0C: addiu       $t2, $zero, 0x23
    ctx->r10 = ADD32(0, 0X23);
    // 0x80263D10: b           L_80263D1C
    // 0x80263D14: sb          $t2, 0x0($a3)
    MEM_B(0X0, ctx->r7) = ctx->r10;
        goto L_80263D1C;
    // 0x80263D14: sb          $t2, 0x0($a3)
    MEM_B(0X0, ctx->r7) = ctx->r10;
L_80263D18:
    // 0x80263D18: sb          $t3, 0x0($a3)
    MEM_B(0X0, ctx->r7) = ctx->r11;
L_80263D1C:
    // 0x80263D1C: lui         $v1, 0x8009
    ctx->r3 = S32(0X8009 << 16);
    // 0x80263D20: lw          $v1, 0x3B20($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X3B20);
    // 0x80263D24: b           L_80263DF4
    // 0x80263D28: lw          $v0, 0xB0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0XB0);
        goto L_80263DF4;
    // 0x80263D28: lw          $v0, 0xB0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0XB0);
L_80263D2C:
    // 0x80263D2C: jal         0x80263734
    // 0x80263D30: addiu       $a1, $zero, 0xF
    ctx->r5 = ADD32(0, 0XF);
    ovl_8024B800_func_80263734(rdram, ctx);
        goto after_8;
    // 0x80263D30: addiu       $a1, $zero, 0xF
    ctx->r5 = ADD32(0, 0XF);
    after_8:
    // 0x80263D34: lui         $t4, 0x801B
    ctx->r12 = S32(0X801B << 16);
    // 0x80263D38: lhu         $t4, 0x361E($t4)
    ctx->r12 = MEM_HU(ctx->r12, 0X361E);
    // 0x80263D3C: or          $a3, $v0, $zero
    ctx->r7 = ctx->r2 | 0;
    // 0x80263D40: andi        $t5, $t4, 0x4
    ctx->r13 = ctx->r12 & 0X4;
    // 0x80263D44: beq         $t5, $zero, L_80263D90
    if (ctx->r13 == 0) {
        // 0x80263D48: lui         $t6, 0x8009
        ctx->r14 = S32(0X8009 << 16);
            goto L_80263D90;
    }
    // 0x80263D48: lui         $t6, 0x8009
    ctx->r14 = S32(0X8009 << 16);
    // 0x80263D4C: lbu         $t8, 0x8AC($s0)
    ctx->r24 = MEM_BU(ctx->r16, 0X8AC);
    // 0x80263D50: lw          $t6, 0x3B20($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X3B20);
    // 0x80263D54: lui         $t0, 0x8028
    ctx->r8 = S32(0X8028 << 16);
    // 0x80263D58: sll         $t9, $t8, 1
    ctx->r25 = S32(ctx->r24 << 1);
    // 0x80263D5C: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x80263D60: lhu         $t0, -0x30C4($t0)
    ctx->r8 = MEM_HU(ctx->r8, -0X30C4);
    // 0x80263D64: lhu         $t7, 0x6A($t6)
    ctx->r15 = MEM_HU(ctx->r14, 0X6A);
    // 0x80263D68: nop

    // 0x80263D6C: slt         $at, $t7, $t0
    ctx->r1 = SIGNED(ctx->r15) < SIGNED(ctx->r8) ? 1 : 0;
    // 0x80263D70: beq         $at, $zero, L_80263D90
    if (ctx->r1 == 0) {
        // 0x80263D74: nop
    
            goto L_80263D90;
    }
    // 0x80263D74: nop

    // 0x80263D78: lhu         $t1, 0x12($v0)
    ctx->r9 = MEM_HU(ctx->r2, 0X12);
    // 0x80263D7C: sb          $zero, 0x0($v0)
    MEM_B(0X0, ctx->r2) = 0;
    // 0x80263D80: ori         $t2, $t1, 0x100
    ctx->r10 = ctx->r9 | 0X100;
    // 0x80263D84: sh          $t2, 0x12($v0)
    MEM_H(0X12, ctx->r2) = ctx->r10;
    // 0x80263D88: b           L_80263E70
    // 0x80263D8C: sw          $v0, 0x914($s0)
    MEM_W(0X914, ctx->r16) = ctx->r2;
        goto L_80263E70;
    // 0x80263D8C: sw          $v0, 0x914($s0)
    MEM_W(0X914, ctx->r16) = ctx->r2;
L_80263D90:
    // 0x80263D90: lui         $t3, 0x801B
    ctx->r11 = S32(0X801B << 16);
    // 0x80263D94: lhu         $t3, 0x362A($t3)
    ctx->r11 = MEM_HU(ctx->r11, 0X362A);
    // 0x80263D98: lui         $v1, 0x8009
    ctx->r3 = S32(0X8009 << 16);
    // 0x80263D9C: lw          $v1, 0x3B20($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X3B20);
    // 0x80263DA0: beq         $t3, $zero, L_80263DB4
    if (ctx->r11 == 0) {
        // 0x80263DA4: lui         $t8, 0x8028
        ctx->r24 = S32(0X8028 << 16);
            goto L_80263DB4;
    }
    // 0x80263DA4: lui         $t8, 0x8028
    ctx->r24 = S32(0X8028 << 16);
    // 0x80263DA8: addiu       $t4, $zero, 0x1
    ctx->r12 = ADD32(0, 0X1);
    // 0x80263DAC: b           L_80263DF0
    // 0x80263DB0: sw          $t4, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r12;
        goto L_80263DF0;
    // 0x80263DB0: sw          $t4, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r12;
L_80263DB4:
    // 0x80263DB4: lbu         $t5, 0x8AC($s0)
    ctx->r13 = MEM_BU(ctx->r16, 0X8AC);
    // 0x80263DB8: lhu         $t9, 0x6A($v1)
    ctx->r25 = MEM_HU(ctx->r3, 0X6A);
    // 0x80263DBC: sll         $t6, $t5, 1
    ctx->r14 = S32(ctx->r13 << 1);
    // 0x80263DC0: addu        $t8, $t8, $t6
    ctx->r24 = ADD32(ctx->r24, ctx->r14);
    // 0x80263DC4: lhu         $t8, -0x30B8($t8)
    ctx->r24 = MEM_HU(ctx->r24, -0X30B8);
    // 0x80263DC8: addiu       $t7, $zero, 0x19
    ctx->r15 = ADD32(0, 0X19);
    // 0x80263DCC: slt         $at, $t8, $t9
    ctx->r1 = SIGNED(ctx->r24) < SIGNED(ctx->r25) ? 1 : 0;
    // 0x80263DD0: beq         $at, $zero, L_80263DEC
    if (ctx->r1 == 0) {
        // 0x80263DD4: addiu       $t0, $zero, 0x1
        ctx->r8 = ADD32(0, 0X1);
            goto L_80263DEC;
    }
    // 0x80263DD4: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x80263DD8: sb          $t7, 0x0($v0)
    MEM_B(0X0, ctx->r2) = ctx->r15;
    // 0x80263DDC: lui         $v1, 0x8009
    ctx->r3 = S32(0X8009 << 16);
    // 0x80263DE0: lw          $v1, 0x3B20($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X3B20);
    // 0x80263DE4: b           L_80263DF4
    // 0x80263DE8: lw          $v0, 0xB0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0XB0);
        goto L_80263DF4;
    // 0x80263DE8: lw          $v0, 0xB0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0XB0);
L_80263DEC:
    // 0x80263DEC: sw          $t0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r8;
L_80263DF0:
    // 0x80263DF0: lw          $v0, 0xB0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0XB0);
L_80263DF4:
    // 0x80263DF4: lui         $t6, 0x8012
    ctx->r14 = S32(0X8012 << 16);
    // 0x80263DF8: beq         $v0, $zero, L_80263E18
    if (ctx->r2 == 0) {
        // 0x80263DFC: lui         $t7, 0x801B
        ctx->r15 = S32(0X801B << 16);
            goto L_80263E18;
    }
    // 0x80263DFC: lui         $t7, 0x801B
    ctx->r15 = S32(0X801B << 16);
    // 0x80263E00: lw          $t1, 0xC8($v0)
    ctx->r9 = MEM_W(ctx->r2, 0XC8);
    // 0x80263E04: addiu       $t2, $zero, 0x19
    ctx->r10 = ADD32(0, 0X19);
    // 0x80263E08: bne         $s0, $t1, L_80263E1C
    if (ctx->r16 != ctx->r9) {
        // 0x80263E0C: lw          $t3, 0x24($sp)
        ctx->r11 = MEM_W(ctx->r29, 0X24);
            goto L_80263E1C;
    }
    // 0x80263E0C: lw          $t3, 0x24($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X24);
    // 0x80263E10: or          $a3, $v0, $zero
    ctx->r7 = ctx->r2 | 0;
    // 0x80263E14: sb          $t2, 0x0($v0)
    MEM_B(0X0, ctx->r2) = ctx->r10;
L_80263E18:
    // 0x80263E18: lw          $t3, 0x24($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X24);
L_80263E1C:
    // 0x80263E1C: nop

    // 0x80263E20: bne         $t3, $zero, L_80263E38
    if (ctx->r11 != 0) {
        // 0x80263E24: nop
    
            goto L_80263E38;
    }
    // 0x80263E24: nop

    // 0x80263E28: lhu         $t4, 0x12($a3)
    ctx->r12 = MEM_HU(ctx->r7, 0X12);
    // 0x80263E2C: nop

    // 0x80263E30: ori         $t5, $t4, 0x100
    ctx->r13 = ctx->r12 | 0X100;
    // 0x80263E34: sh          $t5, 0x12($a3)
    MEM_H(0X12, ctx->r7) = ctx->r13;
L_80263E38:
    // 0x80263E38: sw          $a3, 0x914($s0)
    MEM_W(0X914, ctx->r16) = ctx->r7;
    // 0x80263E3C: lhu         $t6, 0xB78($t6)
    ctx->r14 = MEM_HU(ctx->r14, 0XB78);
    // 0x80263E40: nop

    // 0x80263E44: bne         $t6, $zero, L_80263E5C
    if (ctx->r14 != 0) {
        // 0x80263E48: nop
    
            goto L_80263E5C;
    }
    // 0x80263E48: nop

    // 0x80263E4C: lhu         $t8, 0x20($a3)
    ctx->r24 = MEM_HU(ctx->r7, 0X20);
    // 0x80263E50: nop

    // 0x80263E54: ori         $t9, $t8, 0x200
    ctx->r25 = ctx->r24 | 0X200;
    // 0x80263E58: sh          $t9, 0x20($a3)
    MEM_H(0X20, ctx->r7) = ctx->r25;
L_80263E5C:
    // 0x80263E5C: lhu         $t7, 0x3674($t7)
    ctx->r15 = MEM_HU(ctx->r15, 0X3674);
    // 0x80263E60: nop

    // 0x80263E64: beq         $t7, $zero, L_80263E74
    if (ctx->r15 == 0) {
        // 0x80263E68: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_80263E74;
    }
    // 0x80263E68: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80263E6C: sb          $zero, 0x0($a3)
    MEM_B(0X0, ctx->r7) = 0;
L_80263E70:
    // 0x80263E70: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_80263E74:
    // 0x80263E74: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80263E78: jr          $ra
    // 0x80263E7C: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    return;
    // 0x80263E7C: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void ovl_8024B800_func_80263E80(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80263E80: lw          $v0, 0x18($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X18);
    // 0x80263E84: addiu       $v1, $zero, 0x3
    ctx->r3 = ADD32(0, 0X3);
    // 0x80263E88: lhu         $a0, 0x12($v0)
    ctx->r4 = MEM_HU(ctx->r2, 0X12);
    // 0x80263E8C: addiu       $a1, $zero, 0xB
    ctx->r5 = ADD32(0, 0XB);
    // 0x80263E90: andi        $t6, $a0, 0x300
    ctx->r14 = ctx->r4 & 0X300;
    // 0x80263E94: bne         $t6, $zero, L_80263EA4
    if (ctx->r14 != 0) {
        // 0x80263E98: ori         $t7, $a0, 0x100
        ctx->r15 = ctx->r4 | 0X100;
            goto L_80263EA4;
    }
    // 0x80263E98: ori         $t7, $a0, 0x100
    ctx->r15 = ctx->r4 | 0X100;
    // 0x80263E9C: sb          $zero, 0x0($v0)
    MEM_B(0X0, ctx->r2) = 0;
    // 0x80263EA0: sh          $t7, 0x12($v0)
    MEM_H(0X12, ctx->r2) = ctx->r15;
L_80263EA4:
    // 0x80263EA4: lhu         $a0, 0x10A($v0)
    ctx->r4 = MEM_HU(ctx->r2, 0X10A);
    // 0x80263EA8: addiu       $v0, $v0, 0xF8
    ctx->r2 = ADD32(ctx->r2, 0XF8);
    // 0x80263EAC: andi        $t8, $a0, 0x300
    ctx->r24 = ctx->r4 & 0X300;
    // 0x80263EB0: bne         $t8, $zero, L_80263EC0
    if (ctx->r24 != 0) {
        // 0x80263EB4: ori         $t9, $a0, 0x100
        ctx->r25 = ctx->r4 | 0X100;
            goto L_80263EC0;
    }
    // 0x80263EB4: ori         $t9, $a0, 0x100
    ctx->r25 = ctx->r4 | 0X100;
    // 0x80263EB8: sb          $zero, 0x0($v0)
    MEM_B(0X0, ctx->r2) = 0;
    // 0x80263EBC: sh          $t9, 0x12($v0)
    MEM_H(0X12, ctx->r2) = ctx->r25;
L_80263EC0:
    // 0x80263EC0: lhu         $a0, 0x10A($v0)
    ctx->r4 = MEM_HU(ctx->r2, 0X10A);
    // 0x80263EC4: addiu       $v0, $v0, 0xF8
    ctx->r2 = ADD32(ctx->r2, 0XF8);
    // 0x80263EC8: andi        $t0, $a0, 0x300
    ctx->r8 = ctx->r4 & 0X300;
    // 0x80263ECC: bne         $t0, $zero, L_80263EDC
    if (ctx->r8 != 0) {
        // 0x80263ED0: ori         $t1, $a0, 0x100
        ctx->r9 = ctx->r4 | 0X100;
            goto L_80263EDC;
    }
    // 0x80263ED0: ori         $t1, $a0, 0x100
    ctx->r9 = ctx->r4 | 0X100;
    // 0x80263ED4: sb          $zero, 0x0($v0)
    MEM_B(0X0, ctx->r2) = 0;
    // 0x80263ED8: sh          $t1, 0x12($v0)
    MEM_H(0X12, ctx->r2) = ctx->r9;
L_80263EDC:
    // 0x80263EDC: addiu       $v0, $v0, 0xF8
    ctx->r2 = ADD32(ctx->r2, 0XF8);
L_80263EE0:
    // 0x80263EE0: lhu         $a0, 0x12($v0)
    ctx->r4 = MEM_HU(ctx->r2, 0X12);
    // 0x80263EE4: addiu       $v1, $v1, 0x4
    ctx->r3 = ADD32(ctx->r3, 0X4);
    // 0x80263EE8: andi        $t2, $a0, 0x300
    ctx->r10 = ctx->r4 & 0X300;
    // 0x80263EEC: bne         $t2, $zero, L_80263EFC
    if (ctx->r10 != 0) {
        // 0x80263EF0: ori         $t3, $a0, 0x100
        ctx->r11 = ctx->r4 | 0X100;
            goto L_80263EFC;
    }
    // 0x80263EF0: ori         $t3, $a0, 0x100
    ctx->r11 = ctx->r4 | 0X100;
    // 0x80263EF4: sb          $zero, 0x0($v0)
    MEM_B(0X0, ctx->r2) = 0;
    // 0x80263EF8: sh          $t3, 0x12($v0)
    MEM_H(0X12, ctx->r2) = ctx->r11;
L_80263EFC:
    // 0x80263EFC: lhu         $a0, 0x10A($v0)
    ctx->r4 = MEM_HU(ctx->r2, 0X10A);
    // 0x80263F00: addiu       $v0, $v0, 0xF8
    ctx->r2 = ADD32(ctx->r2, 0XF8);
    // 0x80263F04: andi        $t4, $a0, 0x300
    ctx->r12 = ctx->r4 & 0X300;
    // 0x80263F08: bne         $t4, $zero, L_80263F18
    if (ctx->r12 != 0) {
        // 0x80263F0C: ori         $t5, $a0, 0x100
        ctx->r13 = ctx->r4 | 0X100;
            goto L_80263F18;
    }
    // 0x80263F0C: ori         $t5, $a0, 0x100
    ctx->r13 = ctx->r4 | 0X100;
    // 0x80263F10: sb          $zero, 0x0($v0)
    MEM_B(0X0, ctx->r2) = 0;
    // 0x80263F14: sh          $t5, 0x12($v0)
    MEM_H(0X12, ctx->r2) = ctx->r13;
L_80263F18:
    // 0x80263F18: lhu         $a0, 0x10A($v0)
    ctx->r4 = MEM_HU(ctx->r2, 0X10A);
    // 0x80263F1C: addiu       $v0, $v0, 0xF8
    ctx->r2 = ADD32(ctx->r2, 0XF8);
    // 0x80263F20: andi        $t6, $a0, 0x300
    ctx->r14 = ctx->r4 & 0X300;
    // 0x80263F24: bne         $t6, $zero, L_80263F34
    if (ctx->r14 != 0) {
        // 0x80263F28: ori         $t7, $a0, 0x100
        ctx->r15 = ctx->r4 | 0X100;
            goto L_80263F34;
    }
    // 0x80263F28: ori         $t7, $a0, 0x100
    ctx->r15 = ctx->r4 | 0X100;
    // 0x80263F2C: sb          $zero, 0x0($v0)
    MEM_B(0X0, ctx->r2) = 0;
    // 0x80263F30: sh          $t7, 0x12($v0)
    MEM_H(0X12, ctx->r2) = ctx->r15;
L_80263F34:
    // 0x80263F34: lhu         $a0, 0x10A($v0)
    ctx->r4 = MEM_HU(ctx->r2, 0X10A);
    // 0x80263F38: addiu       $v0, $v0, 0xF8
    ctx->r2 = ADD32(ctx->r2, 0XF8);
    // 0x80263F3C: andi        $t8, $a0, 0x300
    ctx->r24 = ctx->r4 & 0X300;
    // 0x80263F40: bne         $t8, $zero, L_80263F50
    if (ctx->r24 != 0) {
        // 0x80263F44: ori         $t9, $a0, 0x100
        ctx->r25 = ctx->r4 | 0X100;
            goto L_80263F50;
    }
    // 0x80263F44: ori         $t9, $a0, 0x100
    ctx->r25 = ctx->r4 | 0X100;
    // 0x80263F48: sb          $zero, 0x0($v0)
    MEM_B(0X0, ctx->r2) = 0;
    // 0x80263F4C: sh          $t9, 0x12($v0)
    MEM_H(0X12, ctx->r2) = ctx->r25;
L_80263F50:
    // 0x80263F50: bne         $v1, $a1, L_80263EE0
    if (ctx->r3 != ctx->r5) {
        // 0x80263F54: addiu       $v0, $v0, 0xF8
        ctx->r2 = ADD32(ctx->r2, 0XF8);
            goto L_80263EE0;
    }
    // 0x80263F54: addiu       $v0, $v0, 0xF8
    ctx->r2 = ADD32(ctx->r2, 0XF8);
    // 0x80263F58: jr          $ra
    // 0x80263F5C: nop

    return;
    // 0x80263F5C: nop

;}
RECOMP_FUNC void ovl_8024B800_func_80263F60(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80263F60: lui         $t8, 0x8012
    ctx->r24 = S32(0X8012 << 16);
    // 0x80263F64: lhu         $t8, 0xB78($t8)
    ctx->r24 = MEM_HU(ctx->r24, 0XB78);
    // 0x80263F68: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    // 0x80263F6C: sll         $t6, $a1, 16
    ctx->r14 = S32(ctx->r5 << 16);
    // 0x80263F70: sra         $a1, $t6, 16
    ctx->r5 = S32(SIGNED(ctx->r14) >> 16);
    // 0x80263F74: bne         $t8, $zero, L_80264028
    if (ctx->r24 != 0) {
        // 0x80263F78: sw          $a0, 0x0($sp)
        MEM_W(0X0, ctx->r29) = ctx->r4;
            goto L_80264028;
    }
    // 0x80263F78: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x80263F7C: lui         $v0, 0x8009
    ctx->r2 = S32(0X8009 << 16);
    // 0x80263F80: lw          $v0, 0x3B20($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X3B20);
    // 0x80263F84: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x80263F88: lhu         $t9, 0xC2($v0)
    ctx->r25 = MEM_HU(ctx->r2, 0XC2);
    // 0x80263F8C: addiu       $a0, $a0, 0xB7A
    ctx->r4 = ADD32(ctx->r4, 0XB7A);
    // 0x80263F90: andi        $t0, $t9, 0x40
    ctx->r8 = ctx->r25 & 0X40;
    // 0x80263F94: beq         $t0, $zero, L_80263FA0
    if (ctx->r8 == 0) {
        // 0x80263F98: negu        $t6, $a1
        ctx->r14 = SUB32(0, ctx->r5);
            goto L_80263FA0;
    }
    // 0x80263F98: negu        $t6, $a1
    ctx->r14 = SUB32(0, ctx->r5);
    // 0x80263F9C: sh          $zero, 0x0($a0)
    MEM_H(0X0, ctx->r4) = 0;
L_80263FA0:
    // 0x80263FA0: lw          $v1, 0x88($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X88);
    // 0x80263FA4: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x80263FA8: beq         $v1, $zero, L_80263FC8
    if (ctx->r3 == 0) {
        // 0x80263FAC: addiu       $a0, $a0, 0xB7A
        ctx->r4 = ADD32(ctx->r4, 0XB7A);
            goto L_80263FC8;
    }
    // 0x80263FAC: addiu       $a0, $a0, 0xB7A
    ctx->r4 = ADD32(ctx->r4, 0XB7A);
    // 0x80263FB0: lw          $t1, 0xC8($v1)
    ctx->r9 = MEM_W(ctx->r3, 0XC8);
    // 0x80263FB4: lw          $t2, 0xB4($v0)
    ctx->r10 = MEM_W(ctx->r2, 0XB4);
    // 0x80263FB8: nop

    // 0x80263FBC: bne         $t1, $t2, L_80263FC8
    if (ctx->r9 != ctx->r10) {
        // 0x80263FC0: nop
    
            goto L_80263FC8;
    }
    // 0x80263FC0: nop

    // 0x80263FC4: sh          $zero, 0x0($a0)
    MEM_H(0X0, ctx->r4) = 0;
L_80263FC8:
    // 0x80263FC8: lw          $t3, 0xB4($v0)
    ctx->r11 = MEM_W(ctx->r2, 0XB4);
    // 0x80263FCC: nop

    // 0x80263FD0: lhu         $t4, 0x8($t3)
    ctx->r12 = MEM_HU(ctx->r11, 0X8);
    // 0x80263FD4: nop

    // 0x80263FD8: andi        $t5, $t4, 0x1
    ctx->r13 = ctx->r12 & 0X1;
    // 0x80263FDC: beq         $t5, $zero, L_80264008
    if (ctx->r13 == 0) {
        // 0x80263FE0: nop
    
            goto L_80264008;
    }
    // 0x80263FE0: nop

    // 0x80263FE4: mtc1        $t6, $f4
    ctx->f4.u32l = ctx->r14;
    // 0x80263FE8: lwc1        $f8, 0x8($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X8);
    // 0x80263FEC: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x80263FF0: c.lt.s      $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f6.fl < ctx->f8.fl;
    // 0x80263FF4: nop

    // 0x80263FF8: bc1f        L_80264028
    if (!c1cs) {
        // 0x80263FFC: nop
    
            goto L_80264028;
    }
    // 0x80263FFC: nop

    // 0x80264000: b           L_80264028
    // 0x80264004: sh          $zero, 0x0($a0)
    MEM_H(0X0, ctx->r4) = 0;
        goto L_80264028;
    // 0x80264004: sh          $zero, 0x0($a0)
    MEM_H(0X0, ctx->r4) = 0;
L_80264008:
    // 0x80264008: mtc1        $a1, $f16
    ctx->f16.u32l = ctx->r5;
    // 0x8026400C: lwc1        $f10, 0x8($v0)
    ctx->f10.u32l = MEM_W(ctx->r2, 0X8);
    // 0x80264010: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x80264014: c.lt.s      $f10, $f18
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f10.fl < ctx->f18.fl;
    // 0x80264018: nop

    // 0x8026401C: bc1f        L_80264028
    if (!c1cs) {
        // 0x80264020: nop
    
            goto L_80264028;
    }
    // 0x80264020: nop

    // 0x80264024: sh          $zero, 0x0($a0)
    MEM_H(0X0, ctx->r4) = 0;
L_80264028:
    // 0x80264028: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x8026402C: addiu       $a0, $a0, 0xB7A
    ctx->r4 = ADD32(ctx->r4, 0XB7A);
    // 0x80264030: lhu         $v0, 0x0($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X0);
    // 0x80264034: jr          $ra
    // 0x80264038: nop

    return;
    // 0x80264038: nop

;}
RECOMP_FUNC void ovl_8024B800_func_8026403C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8026403C: lui         $t6, 0x8009
    ctx->r14 = S32(0X8009 << 16);
    // 0x80264040: lw          $t6, 0x3B20($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X3B20);
    // 0x80264044: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80264048: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8026404C: lw          $t7, 0x88($t6)
    ctx->r15 = MEM_W(ctx->r14, 0X88);
    // 0x80264050: or          $a3, $a0, $zero
    ctx->r7 = ctx->r4 | 0;
    // 0x80264054: beq         $t7, $zero, L_80264174
    if (ctx->r15 == 0) {
        // 0x80264058: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_80264174;
    }
    // 0x80264058: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8026405C: lhu         $t8, 0xE($a0)
    ctx->r24 = MEM_HU(ctx->r4, 0XE);
    // 0x80264060: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x80264064: beq         $t8, $at, L_80264174
    if (ctx->r24 == ctx->r1) {
        // 0x80264068: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_80264174;
    }
    // 0x80264068: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8026406C: lh          $t9, 0x8B0($a0)
    ctx->r25 = MEM_H(ctx->r4, 0X8B0);
    // 0x80264070: lui         $t0, 0x8010
    ctx->r8 = S32(0X8010 << 16);
    // 0x80264074: slti        $at, $t9, 0x109
    ctx->r1 = SIGNED(ctx->r25) < 0X109 ? 1 : 0;
    // 0x80264078: beq         $at, $zero, L_80264174
    if (ctx->r1 == 0) {
        // 0x8026407C: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_80264174;
    }
    // 0x8026407C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80264080: lhu         $t0, 0x522A($t0)
    ctx->r8 = MEM_HU(ctx->r8, 0X522A);
    // 0x80264084: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x80264088: andi        $t1, $t0, 0x3F
    ctx->r9 = ctx->r8 & 0X3F;
    // 0x8026408C: bne         $t1, $zero, L_80264170
    if (ctx->r9 != 0) {
        // 0x80264090: addiu       $a2, $zero, 0xA
        ctx->r6 = ADD32(0, 0XA);
            goto L_80264170;
    }
    // 0x80264090: addiu       $a2, $zero, 0xA
    ctx->r6 = ADD32(0, 0XA);
    // 0x80264094: lw          $a0, 0x18($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X18);
    // 0x80264098: addiu       $a1, $zero, 0xB8
    ctx->r5 = ADD32(0, 0XB8);
    // 0x8026409C: addiu       $a0, $a0, 0xF8
    ctx->r4 = ADD32(ctx->r4, 0XF8);
L_802640A0:
    // 0x802640A0: lw          $t2, 0xD8($a0)
    ctx->r10 = MEM_W(ctx->r4, 0XD8);
    // 0x802640A4: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x802640A8: lbu         $t3, 0x14($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X14);
    // 0x802640AC: nop

    // 0x802640B0: bne         $a1, $t3, L_802640DC
    if (ctx->r5 != ctx->r11) {
        // 0x802640B4: nop
    
            goto L_802640DC;
    }
    // 0x802640B4: nop

    // 0x802640B8: lhu         $v0, 0x18($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X18);
    // 0x802640BC: nop

    // 0x802640C0: andi        $t4, $v0, 0x100
    ctx->r12 = ctx->r2 & 0X100;
    // 0x802640C4: bne         $t4, $zero, L_802640DC
    if (ctx->r12 != 0) {
        // 0x802640C8: ori         $t6, $v0, 0x100
        ctx->r14 = ctx->r2 | 0X100;
            goto L_802640DC;
    }
    // 0x802640C8: ori         $t6, $v0, 0x100
    ctx->r14 = ctx->r2 | 0X100;
    // 0x802640CC: sh          $t6, 0x18($a0)
    MEM_H(0X18, ctx->r4) = ctx->r14;
    // 0x802640D0: andi        $t7, $t6, 0xFDFF
    ctx->r15 = ctx->r14 & 0XFDFF;
    // 0x802640D4: sb          $zero, 0xB($a0)
    MEM_B(0XB, ctx->r4) = 0;
    // 0x802640D8: sh          $t7, 0x18($a0)
    MEM_H(0X18, ctx->r4) = ctx->r15;
L_802640DC:
    // 0x802640DC: bne         $v1, $a2, L_802640A0
    if (ctx->r3 != ctx->r6) {
        // 0x802640E0: addiu       $a0, $a0, 0xF8
        ctx->r4 = ADD32(ctx->r4, 0XF8);
            goto L_802640A0;
    }
    // 0x802640E0: addiu       $a0, $a0, 0xF8
    ctx->r4 = ADD32(ctx->r4, 0XF8);
    // 0x802640E4: lhu         $t9, 0x318($a3)
    ctx->r25 = MEM_HU(ctx->r7, 0X318);
    // 0x802640E8: addiu       $a1, $zero, 0xF8
    ctx->r5 = ADD32(0, 0XF8);
    // 0x802640EC: multu       $t9, $a1
    result = U64(U32(ctx->r25)) * U64(U32(ctx->r5)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x802640F0: lui         $t8, 0x8009
    ctx->r24 = S32(0X8009 << 16);
    // 0x802640F4: lw          $t8, 0x3B20($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X3B20);
    // 0x802640F8: lw          $v0, 0x18($a3)
    ctx->r2 = MEM_W(ctx->r7, 0X18);
    // 0x802640FC: lw          $v1, 0x88($t8)
    ctx->r3 = MEM_W(ctx->r24, 0X88);
    // 0x80264100: mflo        $t0
    ctx->r8 = lo;
    // 0x80264104: addu        $a0, $t0, $v0
    ctx->r4 = ADD32(ctx->r8, ctx->r2);
    // 0x80264108: bne         $a0, $v1, L_80264128
    if (ctx->r4 != ctx->r3) {
        // 0x8026410C: nop
    
            goto L_80264128;
    }
    // 0x8026410C: nop

    // 0x80264110: lhu         $t1, 0x320($a3)
    ctx->r9 = MEM_HU(ctx->r7, 0X320);
    // 0x80264114: nop

    // 0x80264118: multu       $t1, $a1
    result = U64(U32(ctx->r9)) * U64(U32(ctx->r5)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8026411C: mflo        $t2
    ctx->r10 = lo;
    // 0x80264120: addu        $a0, $t2, $v0
    ctx->r4 = ADD32(ctx->r10, ctx->r2);
    // 0x80264124: nop

L_80264128:
    // 0x80264128: jal         0x8026FFAC
    // 0x8026412C: sw          $a0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r4;
    ovl_8024B800_func_8026FFAC(rdram, ctx);
        goto after_0;
    // 0x8026412C: sw          $a0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r4;
    after_0:
    // 0x80264130: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    // 0x80264134: beq         $v0, $zero, L_80264174
    if (ctx->r2 == 0) {
        // 0x80264138: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_80264174;
    }
    // 0x80264138: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8026413C: lhu         $v0, 0x18($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X18);
    // 0x80264140: lui         $t7, 0x8028
    ctx->r15 = S32(0X8028 << 16);
    // 0x80264144: andi        $t3, $v0, 0x100
    ctx->r11 = ctx->r2 & 0X100;
    // 0x80264148: bne         $t3, $zero, L_80264170
    if (ctx->r11 != 0) {
        // 0x8026414C: ori         $t5, $v0, 0x100
        ctx->r13 = ctx->r2 | 0X100;
            goto L_80264170;
    }
    // 0x8026414C: ori         $t5, $v0, 0x100
    ctx->r13 = ctx->r2 | 0X100;
    // 0x80264150: sh          $t5, 0x18($a0)
    MEM_H(0X18, ctx->r4) = ctx->r13;
    // 0x80264154: andi        $t6, $t5, 0xFDFF
    ctx->r14 = ctx->r13 & 0XFDFF;
    // 0x80264158: sh          $t6, 0x18($a0)
    MEM_H(0X18, ctx->r4) = ctx->r14;
    // 0x8026415C: lh          $t7, -0x1B60($t7)
    ctx->r15 = MEM_H(ctx->r15, -0X1B60);
    // 0x80264160: nop

    // 0x80264164: andi        $t8, $t7, 0x1
    ctx->r24 = ctx->r15 & 0X1;
    // 0x80264168: addiu       $t9, $t8, 0x1
    ctx->r25 = ADD32(ctx->r24, 0X1);
    // 0x8026416C: sb          $t9, 0xB($a0)
    MEM_B(0XB, ctx->r4) = ctx->r25;
L_80264170:
    // 0x80264170: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80264174:
    // 0x80264174: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80264178: jr          $ra
    // 0x8026417C: nop

    return;
    // 0x8026417C: nop

;}
RECOMP_FUNC void ovl_8024B800_func_80264180(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80264180: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80264184: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80264188: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8026418C: lhu         $t6, 0x10($a0)
    ctx->r14 = MEM_HU(ctx->r4, 0X10);
    // 0x80264190: lui         $t8, 0x8012
    ctx->r24 = S32(0X8012 << 16);
    // 0x80264194: andi        $t7, $t6, 0xFFFE
    ctx->r15 = ctx->r14 & 0XFFFE;
    // 0x80264198: sh          $t7, 0x10($a0)
    MEM_H(0X10, ctx->r4) = ctx->r15;
    // 0x8026419C: lhu         $t8, 0xB7A($t8)
    ctx->r24 = MEM_HU(ctx->r24, 0XB7A);
    // 0x802641A0: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x802641A4: sltiu       $at, $t8, 0xE
    ctx->r1 = ctx->r24 < 0XE ? 1 : 0;
    // 0x802641A8: beq         $at, $zero, L_802643C4
    if (ctx->r1 == 0) {
        // 0x802641AC: sll         $t8, $t8, 2
        ctx->r24 = S32(ctx->r24 << 2);
            goto L_802643C4;
    }
    // 0x802641AC: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x802641B0: lui         $at, 0x8028
    ctx->r1 = S32(0X8028 << 16);
    // 0x802641B4: addu        $at, $at, $t8
    gpr jr_addend_802641C0 = ctx->r24;
    ctx->r1 = ADD32(ctx->r1, ctx->r24);
    // 0x802641B8: lw          $t8, -0x2E18($at)
    ctx->r24 = ADD32(ctx->r1, -0X2E18);
    // 0x802641BC: nop

    // 0x802641C0: jr          $t8
    // 0x802641C4: nop

    switch (jr_addend_802641C0 >> 2) {
        case 0: goto L_80264248; break;
        case 1: goto L_802642C8; break;
        case 2: goto L_80264320; break;
        case 3: goto L_802643AC; break;
        case 4: goto L_80264280; break;
        case 5: goto L_802643AC; break;
        case 6: goto L_802642A4; break;
        case 7: goto L_802643AC; break;
        case 8: goto L_802641E0; break;
        case 9: goto L_802642D8; break;
        case 10: goto L_802643C4; break;
        case 11: goto L_802643C4; break;
        case 12: goto L_802643C4; break;
        case 13: goto L_802641C8; break;
        default: switch_error(__func__, 0x802641C0, 0x8027D1E8);
    }
    // 0x802641C4: nop

L_802641C8:
    // 0x802641C8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802641CC: addiu       $a1, $zero, 0x7FE
    ctx->r5 = ADD32(0, 0X7FE);
    // 0x802641D0: jal         0x80262FC0
    // 0x802641D4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    ovl_8024B800_func_80262FC0(rdram, ctx);
        goto after_0;
    // 0x802641D4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_0:
    // 0x802641D8: b           L_802643C8
    // 0x802641DC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_802643C8;
    // 0x802641DC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_802641E0:
    // 0x802641E0: lui         $t9, 0x8012
    ctx->r25 = S32(0X8012 << 16);
    // 0x802641E4: lhu         $t9, 0xB7E($t9)
    ctx->r25 = MEM_HU(ctx->r25, 0XB7E);
    // 0x802641E8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802641EC: andi        $t0, $t9, 0x100
    ctx->r8 = ctx->r25 & 0X100;
    // 0x802641F0: beq         $t0, $zero, L_80264238
    if (ctx->r8 == 0) {
        // 0x802641F4: addiu       $a1, $zero, 0x7FE
        ctx->r5 = ADD32(0, 0X7FE);
            goto L_80264238;
    }
    // 0x802641F4: addiu       $a1, $zero, 0x7FE
    ctx->r5 = ADD32(0, 0X7FE);
    // 0x802641F8: jal         0x80264A3C
    // 0x802641FC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_8024B800_func_80264A3C(rdram, ctx);
        goto after_1;
    // 0x802641FC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
    // 0x80264200: jal         0x80264B30
    // 0x80264204: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_8024B800_func_80264B30(rdram, ctx);
        goto after_2;
    // 0x80264204: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_2:
    // 0x80264208: lui         $t1, 0x8012
    ctx->r9 = S32(0X8012 << 16);
    // 0x8026420C: lhu         $t1, 0xB78($t1)
    ctx->r9 = MEM_HU(ctx->r9, 0XB78);
    // 0x80264210: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x80264214: bne         $t1, $zero, L_802643C4
    if (ctx->r9 != 0) {
        // 0x80264218: addiu       $v0, $v0, 0xB7E
        ctx->r2 = ADD32(ctx->r2, 0XB7E);
            goto L_802643C4;
    }
    // 0x80264218: addiu       $v0, $v0, 0xB7E
    ctx->r2 = ADD32(ctx->r2, 0XB7E);
    // 0x8026421C: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x80264220: sh          $zero, 0xB7A($at)
    MEM_H(0XB7A, ctx->r1) = 0;
    // 0x80264224: lhu         $t2, 0x0($v0)
    ctx->r10 = MEM_HU(ctx->r2, 0X0);
    // 0x80264228: nop

    // 0x8026422C: andi        $t3, $t2, 0xFEFF
    ctx->r11 = ctx->r10 & 0XFEFF;
    // 0x80264230: b           L_802643C4
    // 0x80264234: sh          $t3, 0x0($v0)
    MEM_H(0X0, ctx->r2) = ctx->r11;
        goto L_802643C4;
    // 0x80264234: sh          $t3, 0x0($v0)
    MEM_H(0X0, ctx->r2) = ctx->r11;
L_80264238:
    // 0x80264238: jal         0x80262FC0
    // 0x8026423C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    ovl_8024B800_func_80262FC0(rdram, ctx);
        goto after_3;
    // 0x8026423C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_3:
    // 0x80264240: b           L_802643C8
    // 0x80264244: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_802643C8;
    // 0x80264244: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_80264248:
    // 0x80264248: lui         $t4, 0x8009
    ctx->r12 = S32(0X8009 << 16);
    // 0x8026424C: lw          $t4, 0x3B20($t4)
    ctx->r12 = MEM_W(ctx->r12, 0X3B20);
    // 0x80264250: nop

    // 0x80264254: lhu         $t5, 0xC2($t4)
    ctx->r13 = MEM_HU(ctx->r12, 0XC2);
    // 0x80264258: nop

    // 0x8026425C: andi        $t6, $t5, 0x40
    ctx->r14 = ctx->r13 & 0X40;
    // 0x80264260: bne         $t6, $zero, L_80264270
    if (ctx->r14 != 0) {
        // 0x80264264: nop
    
            goto L_80264270;
    }
    // 0x80264264: nop

    // 0x80264268: jal         0x80265D9C
    // 0x8026426C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_8024B800_func_80265D9C(rdram, ctx);
        goto after_4;
    // 0x8026426C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_4:
L_80264270:
    // 0x80264270: jal         0x8026403C
    // 0x80264274: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_8024B800_func_8026403C(rdram, ctx);
        goto after_5;
    // 0x80264274: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_5:
    // 0x80264278: b           L_802643C8
    // 0x8026427C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_802643C8;
    // 0x8026427C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_80264280:
    // 0x80264280: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80264284: jal         0x80263F60
    // 0x80264288: addiu       $a1, $zero, 0x158
    ctx->r5 = ADD32(0, 0X158);
    ovl_8024B800_func_80263F60(rdram, ctx);
        goto after_6;
    // 0x80264288: addiu       $a1, $zero, 0x158
    ctx->r5 = ADD32(0, 0X158);
    after_6:
    // 0x8026428C: beq         $v0, $zero, L_802643C8
    if (ctx->r2 == 0) {
        // 0x80264290: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_802643C8;
    }
    // 0x80264290: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80264294: jal         0x80264E70
    // 0x80264298: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_8024B800_func_80264E70(rdram, ctx);
        goto after_7;
    // 0x80264298: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_7:
    // 0x8026429C: b           L_802643C8
    // 0x802642A0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_802643C8;
    // 0x802642A0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_802642A4:
    // 0x802642A4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802642A8: jal         0x80263F60
    // 0x802642AC: addiu       $a1, $zero, 0xD2
    ctx->r5 = ADD32(0, 0XD2);
    ovl_8024B800_func_80263F60(rdram, ctx);
        goto after_8;
    // 0x802642AC: addiu       $a1, $zero, 0xD2
    ctx->r5 = ADD32(0, 0XD2);
    after_8:
    // 0x802642B0: beq         $v0, $zero, L_802643C8
    if (ctx->r2 == 0) {
        // 0x802642B4: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_802643C8;
    }
    // 0x802642B4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x802642B8: jal         0x80265238
    // 0x802642BC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_8024B800_func_80265238(rdram, ctx);
        goto after_9;
    // 0x802642BC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_9:
    // 0x802642C0: b           L_802643C8
    // 0x802642C4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_802643C8;
    // 0x802642C4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_802642C8:
    // 0x802642C8: jal         0x80263E80
    // 0x802642CC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_8024B800_func_80263E80(rdram, ctx);
        goto after_10;
    // 0x802642CC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_10:
    // 0x802642D0: b           L_802643C8
    // 0x802642D4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_802643C8;
    // 0x802642D4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_802642D8:
    // 0x802642D8: lui         $v0, 0x8028
    ctx->r2 = S32(0X8028 << 16);
    // 0x802642DC: addiu       $v0, $v0, -0x1B3C
    ctx->r2 = ADD32(ctx->r2, -0X1B3C);
    // 0x802642E0: lhu         $t7, 0x0($v0)
    ctx->r15 = MEM_HU(ctx->r2, 0X0);
    // 0x802642E4: addiu       $at, $zero, 0x1C2
    ctx->r1 = ADD32(0, 0X1C2);
    // 0x802642E8: addiu       $t8, $t7, 0x1
    ctx->r24 = ADD32(ctx->r15, 0X1);
    // 0x802642EC: andi        $t9, $t8, 0xFFFF
    ctx->r25 = ctx->r24 & 0XFFFF;
    // 0x802642F0: bne         $t9, $at, L_80264308
    if (ctx->r25 != ctx->r1) {
        // 0x802642F4: sh          $t8, 0x0($v0)
        MEM_H(0X0, ctx->r2) = ctx->r24;
            goto L_80264308;
    }
    // 0x802642F4: sh          $t8, 0x0($v0)
    MEM_H(0X0, ctx->r2) = ctx->r24;
    // 0x802642F8: lhu         $t0, 0x10($s0)
    ctx->r8 = MEM_HU(ctx->r16, 0X10);
    // 0x802642FC: nop

    // 0x80264300: ori         $t1, $t0, 0x200
    ctx->r9 = ctx->r8 | 0X200;
    // 0x80264304: sh          $t1, 0x10($s0)
    MEM_H(0X10, ctx->r16) = ctx->r9;
L_80264308:
    // 0x80264308: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8026430C: addiu       $a1, $zero, 0x7FE
    ctx->r5 = ADD32(0, 0X7FE);
    // 0x80264310: jal         0x80262FC0
    // 0x80264314: addiu       $a2, $zero, 0x33
    ctx->r6 = ADD32(0, 0X33);
    ovl_8024B800_func_80262FC0(rdram, ctx);
        goto after_11;
    // 0x80264314: addiu       $a2, $zero, 0x33
    ctx->r6 = ADD32(0, 0X33);
    after_11:
    // 0x80264318: b           L_802643C8
    // 0x8026431C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_802643C8;
    // 0x8026431C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_80264320:
    // 0x80264320: jal         0x8026605C
    // 0x80264324: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_8024B800_func_8026605C(rdram, ctx);
        goto after_12;
    // 0x80264324: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_12:
    // 0x80264328: lui         $v1, 0x8028
    ctx->r3 = S32(0X8028 << 16);
    // 0x8026432C: addiu       $v1, $v1, -0x1B30
    ctx->r3 = ADD32(ctx->r3, -0X1B30);
    // 0x80264330: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x80264334: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80264338: beq         $v0, $zero, L_80264360
    if (ctx->r2 == 0) {
        // 0x8026433C: addiu       $a1, $zero, 0x700
        ctx->r5 = ADD32(0, 0X700);
            goto L_80264360;
    }
    // 0x8026433C: addiu       $a1, $zero, 0x700
    ctx->r5 = ADD32(0, 0X700);
    // 0x80264340: addiu       $t2, $zero, 0x4A
    ctx->r10 = ADD32(0, 0X4A);
    // 0x80264344: sb          $t2, 0x0($v0)
    MEM_B(0X0, ctx->r2) = ctx->r10;
    // 0x80264348: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x8026434C: nop

    // 0x80264350: lhu         $t3, 0x12($v0)
    ctx->r11 = MEM_HU(ctx->r2, 0X12);
    // 0x80264354: nop

    // 0x80264358: ori         $t4, $t3, 0x100
    ctx->r12 = ctx->r11 | 0X100;
    // 0x8026435C: sh          $t4, 0x12($v0)
    MEM_H(0X12, ctx->r2) = ctx->r12;
L_80264360:
    // 0x80264360: lw          $v0, 0x4($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X4);
    // 0x80264364: addiu       $t5, $zero, 0x4A
    ctx->r13 = ADD32(0, 0X4A);
    // 0x80264368: beq         $v0, $zero, L_8026438C
    if (ctx->r2 == 0) {
        // 0x8026436C: nop
    
            goto L_8026438C;
    }
    // 0x8026436C: nop

    // 0x80264370: sb          $t5, 0x0($v0)
    MEM_B(0X0, ctx->r2) = ctx->r13;
    // 0x80264374: lw          $v0, 0x4($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X4);
    // 0x80264378: nop

    // 0x8026437C: lhu         $t6, 0x12($v0)
    ctx->r14 = MEM_HU(ctx->r2, 0X12);
    // 0x80264380: nop

    // 0x80264384: ori         $t7, $t6, 0x100
    ctx->r15 = ctx->r14 | 0X100;
    // 0x80264388: sh          $t7, 0x12($v0)
    MEM_H(0X12, ctx->r2) = ctx->r15;
L_8026438C:
    // 0x8026438C: jal         0x80262FC0
    // 0x80264390: addiu       $a2, $zero, 0x12
    ctx->r6 = ADD32(0, 0X12);
    ovl_8024B800_func_80262FC0(rdram, ctx);
        goto after_13;
    // 0x80264390: addiu       $a2, $zero, 0x12
    ctx->r6 = ADD32(0, 0X12);
    after_13:
    // 0x80264394: jal         0x80263608
    // 0x80264398: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_8024B800_func_80263608(rdram, ctx);
        goto after_14;
    // 0x80264398: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_14:
    // 0x8026439C: jal         0x80263650
    // 0x802643A0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_8024B800_func_80263650(rdram, ctx);
        goto after_15;
    // 0x802643A0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_15:
    // 0x802643A4: jal         0x80265A40
    // 0x802643A8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_8024B800_func_80265A40(rdram, ctx);
        goto after_16;
    // 0x802643A8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_16:
L_802643AC:
    // 0x802643AC: lui         $t8, 0x8012
    ctx->r24 = S32(0X8012 << 16);
    // 0x802643B0: lhu         $t8, 0xB78($t8)
    ctx->r24 = MEM_HU(ctx->r24, 0XB78);
    // 0x802643B4: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x802643B8: bne         $t8, $zero, L_802643C8
    if (ctx->r24 != 0) {
        // 0x802643BC: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_802643C8;
    }
    // 0x802643BC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x802643C0: sh          $zero, 0xB7A($at)
    MEM_H(0XB7A, ctx->r1) = 0;
L_802643C4:
    // 0x802643C4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_802643C8:
    // 0x802643C8: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x802643CC: jr          $ra
    // 0x802643D0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x802643D0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void ovl_8024B800_func_802643D4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802643D4: lui         $v0, 0x8009
    ctx->r2 = S32(0X8009 << 16);
    // 0x802643D8: addiu       $v0, $v0, 0x3B20
    ctx->r2 = ADD32(ctx->r2, 0X3B20);
    // 0x802643DC: lw          $t7, 0x0($v0)
    ctx->r15 = MEM_W(ctx->r2, 0X0);
    // 0x802643E0: sw          $a2, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r6;
    // 0x802643E4: lhu         $t8, 0xD2($t7)
    ctx->r24 = MEM_HU(ctx->r15, 0XD2);
    // 0x802643E8: andi        $t6, $a2, 0xFFFF
    ctx->r14 = ctx->r6 & 0XFFFF;
    // 0x802643EC: andi        $t9, $t8, 0x1
    ctx->r25 = ctx->r24 & 0X1;
    // 0x802643F0: beq         $t9, $zero, L_80264404
    if (ctx->r25 == 0) {
        // 0x802643F4: or          $a2, $t6, $zero
        ctx->r6 = ctx->r14 | 0;
            goto L_80264404;
    }
    // 0x802643F4: or          $a2, $t6, $zero
    ctx->r6 = ctx->r14 | 0;
    // 0x802643F8: lh          $t0, 0x0($a1)
    ctx->r8 = MEM_H(ctx->r5, 0X0);
    // 0x802643FC: b           L_80264414
    // 0x80264400: sh          $t0, 0x2E($a0)
    MEM_H(0X2E, ctx->r4) = ctx->r8;
        goto L_80264414;
    // 0x80264400: sh          $t0, 0x2E($a0)
    MEM_H(0X2E, ctx->r4) = ctx->r8;
L_80264404:
    // 0x80264404: lh          $t1, 0x0($a1)
    ctx->r9 = MEM_H(ctx->r5, 0X0);
    // 0x80264408: nop

    // 0x8026440C: negu        $t2, $t1
    ctx->r10 = SUB32(0, ctx->r9);
    // 0x80264410: sh          $t2, 0x2E($a0)
    MEM_H(0X2E, ctx->r4) = ctx->r10;
L_80264414:
    // 0x80264414: lw          $t3, 0x0($v0)
    ctx->r11 = MEM_W(ctx->r2, 0X0);
    // 0x80264418: nop

    // 0x8026441C: lh          $t4, 0xDA($t3)
    ctx->r12 = MEM_H(ctx->r11, 0XDA);
    // 0x80264420: nop

    // 0x80264424: bltz        $t4, L_80264438
    if (SIGNED(ctx->r12) < 0) {
        // 0x80264428: nop
    
            goto L_80264438;
    }
    // 0x80264428: nop

    // 0x8026442C: lh          $t5, 0x2($a1)
    ctx->r13 = MEM_H(ctx->r5, 0X2);
    // 0x80264430: b           L_80264448
    // 0x80264434: sh          $t5, 0x30($a0)
    MEM_H(0X30, ctx->r4) = ctx->r13;
        goto L_80264448;
    // 0x80264434: sh          $t5, 0x30($a0)
    MEM_H(0X30, ctx->r4) = ctx->r13;
L_80264438:
    // 0x80264438: lh          $t6, 0x2($a1)
    ctx->r14 = MEM_H(ctx->r5, 0X2);
    // 0x8026443C: nop

    // 0x80264440: negu        $t7, $t6
    ctx->r15 = SUB32(0, ctx->r14);
    // 0x80264444: sh          $t7, 0x30($a0)
    MEM_H(0X30, ctx->r4) = ctx->r15;
L_80264448:
    // 0x80264448: lhu         $t8, 0x12($a0)
    ctx->r24 = MEM_HU(ctx->r4, 0X12);
    // 0x8026444C: sb          $a2, 0x0($a0)
    MEM_B(0X0, ctx->r4) = ctx->r6;
    // 0x80264450: ori         $t9, $t8, 0x100
    ctx->r25 = ctx->r24 | 0X100;
    // 0x80264454: jr          $ra
    // 0x80264458: sh          $t9, 0x12($a0)
    MEM_H(0X12, ctx->r4) = ctx->r25;
    return;
    // 0x80264458: sh          $t9, 0x12($a0)
    MEM_H(0X12, ctx->r4) = ctx->r25;
;}
RECOMP_FUNC void ovl_8024B800_func_8026445C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8026445C: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x80264460: sw          $s7, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r23;
    // 0x80264464: sw          $s6, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r22;
    // 0x80264468: sw          $s5, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r21;
    // 0x8026446C: sw          $s4, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r20;
    // 0x80264470: sw          $s3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r19;
    // 0x80264474: sw          $s2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r18;
    // 0x80264478: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x8026447C: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x80264480: or          $s2, $a1, $zero
    ctx->r18 = ctx->r5 | 0;
    // 0x80264484: or          $s3, $a2, $zero
    ctx->r19 = ctx->r6 | 0;
    // 0x80264488: or          $s4, $a0, $zero
    ctx->r20 = ctx->r4 | 0;
    // 0x8026448C: andi        $s5, $a3, 0xFFFF
    ctx->r21 = ctx->r7 & 0XFFFF;
    // 0x80264490: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x80264494: sw          $a3, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r7;
    // 0x80264498: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x8026449C: or          $s1, $a0, $zero
    ctx->r17 = ctx->r4 | 0;
    // 0x802644A0: addiu       $s6, $zero, 0xF8
    ctx->r22 = ADD32(0, 0XF8);
    // 0x802644A4: addiu       $s7, $zero, 0xB
    ctx->r23 = ADD32(0, 0XB);
L_802644A8:
    // 0x802644A8: lb          $t6, 0x87A($s1)
    ctx->r14 = MEM_B(ctx->r17, 0X87A);
    // 0x802644AC: lw          $t8, 0x18($s4)
    ctx->r24 = MEM_W(ctx->r20, 0X18);
    // 0x802644B0: multu       $t6, $s6
    result = U64(U32(ctx->r14)) * U64(U32(ctx->r22)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x802644B4: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    // 0x802644B8: mflo        $t7
    ctx->r15 = lo;
    // 0x802644BC: addu        $a0, $t7, $t8
    ctx->r4 = ADD32(ctx->r15, ctx->r24);
    // 0x802644C0: lhu         $t9, 0x12($a0)
    ctx->r25 = MEM_HU(ctx->r4, 0X12);
    // 0x802644C4: nop

    // 0x802644C8: andi        $t0, $t9, 0x300
    ctx->r8 = ctx->r25 & 0X300;
    // 0x802644CC: bne         $t0, $zero, L_802644E8
    if (ctx->r8 != 0) {
        // 0x802644D0: nop
    
            goto L_802644E8;
    }
    // 0x802644D0: nop

    // 0x802644D4: jal         0x802643D4
    // 0x802644D8: andi        $a2, $s5, 0xFFFF
    ctx->r6 = ctx->r21 & 0XFFFF;
    ovl_8024B800_func_802643D4(rdram, ctx);
        goto after_0;
    // 0x802644D8: andi        $a2, $s5, 0xFFFF
    ctx->r6 = ctx->r21 & 0XFFFF;
    after_0:
    // 0x802644DC: addiu       $s3, $s3, -0x1
    ctx->r19 = ADD32(ctx->r19, -0X1);
    // 0x802644E0: beq         $s3, $zero, L_802644F4
    if (ctx->r19 == 0) {
        // 0x802644E4: addiu       $s2, $s2, 0x4
        ctx->r18 = ADD32(ctx->r18, 0X4);
            goto L_802644F4;
    }
    // 0x802644E4: addiu       $s2, $s2, 0x4
    ctx->r18 = ADD32(ctx->r18, 0X4);
L_802644E8:
    // 0x802644E8: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x802644EC: bne         $s0, $s7, L_802644A8
    if (ctx->r16 != ctx->r23) {
        // 0x802644F0: addiu       $s1, $s1, 0x1
        ctx->r17 = ADD32(ctx->r17, 0X1);
            goto L_802644A8;
    }
    // 0x802644F0: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
L_802644F4:
    // 0x802644F4: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x802644F8: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x802644FC: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x80264500: lw          $s2, 0x1C($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X1C);
    // 0x80264504: lw          $s3, 0x20($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X20);
    // 0x80264508: lw          $s4, 0x24($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X24);
    // 0x8026450C: lw          $s5, 0x28($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X28);
    // 0x80264510: lw          $s6, 0x2C($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X2C);
    // 0x80264514: lw          $s7, 0x30($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X30);
    // 0x80264518: jr          $ra
    // 0x8026451C: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    return;
    // 0x8026451C: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void ovl_8024B800_func_80264520(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80264520: sw          $a2, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r6;
    // 0x80264524: lhu         $t7, 0x12($a0)
    ctx->r15 = MEM_HU(ctx->r4, 0X12);
    // 0x80264528: andi        $t6, $a2, 0xFFFF
    ctx->r14 = ctx->r6 & 0XFFFF;
    // 0x8026452C: andi        $t8, $t7, 0x300
    ctx->r24 = ctx->r15 & 0X300;
    // 0x80264530: bne         $t8, $zero, L_802645D8
    if (ctx->r24 != 0) {
        // 0x80264534: or          $a2, $t6, $zero
        ctx->r6 = ctx->r14 | 0;
            goto L_802645D8;
    }
    // 0x80264534: or          $a2, $t6, $zero
    ctx->r6 = ctx->r14 | 0;
    // 0x80264538: lhu         $t9, 0x20($a0)
    ctx->r25 = MEM_HU(ctx->r4, 0X20);
    // 0x8026453C: addiu       $t2, $zero, 0x1FD
    ctx->r10 = ADD32(0, 0X1FD);
    // 0x80264540: andi        $t0, $t9, 0x200
    ctx->r8 = ctx->r25 & 0X200;
    // 0x80264544: bne         $t0, $zero, L_802645D8
    if (ctx->r8 != 0) {
        // 0x80264548: nop
    
            goto L_802645D8;
    }
    // 0x80264548: nop

    // 0x8026454C: lbu         $t3, 0x2($a1)
    ctx->r11 = MEM_BU(ctx->r5, 0X2);
    // 0x80264550: lbu         $t1, 0x0($a1)
    ctx->r9 = MEM_BU(ctx->r5, 0X0);
    // 0x80264554: andi        $t4, $t3, 0x80
    ctx->r12 = ctx->r11 & 0X80;
    // 0x80264558: beq         $t4, $zero, L_8026456C
    if (ctx->r12 == 0) {
        // 0x8026455C: subu        $v0, $t2, $t1
        ctx->r2 = SUB32(ctx->r10, ctx->r9);
            goto L_8026456C;
    }
    // 0x8026455C: subu        $v0, $t2, $t1
    ctx->r2 = SUB32(ctx->r10, ctx->r9);
    // 0x80264560: lbu         $v1, 0x1($a1)
    ctx->r3 = MEM_BU(ctx->r5, 0X1);
    // 0x80264564: b           L_80264574
    // 0x80264568: negu        $v1, $v1
    ctx->r3 = SUB32(0, ctx->r3);
        goto L_80264574;
    // 0x80264568: negu        $v1, $v1
    ctx->r3 = SUB32(0, ctx->r3);
L_8026456C:
    // 0x8026456C: lbu         $v1, 0x1($a1)
    ctx->r3 = MEM_BU(ctx->r5, 0X1);
    // 0x80264570: nop

L_80264574:
    // 0x80264574: lui         $a1, 0x8009
    ctx->r5 = S32(0X8009 << 16);
    // 0x80264578: addiu       $a1, $a1, 0x3B20
    ctx->r5 = ADD32(ctx->r5, 0X3B20);
    // 0x8026457C: lw          $t5, 0x0($a1)
    ctx->r13 = MEM_W(ctx->r5, 0X0);
    // 0x80264580: negu        $t8, $v0
    ctx->r24 = SUB32(0, ctx->r2);
    // 0x80264584: lhu         $t6, 0xD2($t5)
    ctx->r14 = MEM_HU(ctx->r13, 0XD2);
    // 0x80264588: negu        $t2, $v1
    ctx->r10 = SUB32(0, ctx->r3);
    // 0x8026458C: andi        $t7, $t6, 0x1
    ctx->r15 = ctx->r14 & 0X1;
    // 0x80264590: beq         $t7, $zero, L_802645A0
    if (ctx->r15 == 0) {
        // 0x80264594: nop
    
            goto L_802645A0;
    }
    // 0x80264594: nop

    // 0x80264598: b           L_802645A4
    // 0x8026459C: sh          $v0, 0x2E($a0)
    MEM_H(0X2E, ctx->r4) = ctx->r2;
        goto L_802645A4;
    // 0x8026459C: sh          $v0, 0x2E($a0)
    MEM_H(0X2E, ctx->r4) = ctx->r2;
L_802645A0:
    // 0x802645A0: sh          $t8, 0x2E($a0)
    MEM_H(0X2E, ctx->r4) = ctx->r24;
L_802645A4:
    // 0x802645A4: lw          $t9, 0x0($a1)
    ctx->r25 = MEM_W(ctx->r5, 0X0);
    // 0x802645A8: nop

    // 0x802645AC: lh          $t0, 0xDA($t9)
    ctx->r8 = MEM_H(ctx->r25, 0XDA);
    // 0x802645B0: nop

    // 0x802645B4: bgtz        $t0, L_802645C4
    if (SIGNED(ctx->r8) > 0) {
        // 0x802645B8: nop
    
            goto L_802645C4;
    }
    // 0x802645B8: nop

    // 0x802645BC: b           L_802645C8
    // 0x802645C0: sh          $v1, 0x30($a0)
    MEM_H(0X30, ctx->r4) = ctx->r3;
        goto L_802645C8;
    // 0x802645C0: sh          $v1, 0x30($a0)
    MEM_H(0X30, ctx->r4) = ctx->r3;
L_802645C4:
    // 0x802645C4: sh          $t2, 0x30($a0)
    MEM_H(0X30, ctx->r4) = ctx->r10;
L_802645C8:
    // 0x802645C8: lhu         $t1, 0x12($a0)
    ctx->r9 = MEM_HU(ctx->r4, 0X12);
    // 0x802645CC: sb          $a2, 0x0($a0)
    MEM_B(0X0, ctx->r4) = ctx->r6;
    // 0x802645D0: ori         $t3, $t1, 0x100
    ctx->r11 = ctx->r9 | 0X100;
    // 0x802645D4: sh          $t3, 0x12($a0)
    MEM_H(0X12, ctx->r4) = ctx->r11;
L_802645D8:
    // 0x802645D8: jr          $ra
    // 0x802645DC: nop

    return;
    // 0x802645DC: nop

;}
RECOMP_FUNC void ovl_8024B800_func_802645E0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802645E0: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x802645E4: lui         $v0, 0x8009
    ctx->r2 = S32(0X8009 << 16);
    // 0x802645E8: lw          $v0, 0x3B20($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X3B20);
    // 0x802645EC: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x802645F0: swc1        $f12, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->f12.u32l;
    // 0x802645F4: lh          $t7, 0xEA($v0)
    ctx->r15 = MEM_H(ctx->r2, 0XEA);
    // 0x802645F8: lh          $t6, 0xE8($v0)
    ctx->r14 = MEM_H(ctx->r2, 0XE8);
    // 0x802645FC: mtc1        $t7, $f6
    ctx->f6.u32l = ctx->r15;
    // 0x80264600: mtc1        $t6, $f4
    ctx->f4.u32l = ctx->r14;
    // 0x80264604: cvt.s.w     $f6, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    ctx->f6.fl = CVT_S_W(ctx->f6.u32l);
    // 0x80264608: lwc1        $f12, 0x40($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X40);
    // 0x8026460C: addiu       $t8, $sp, 0x38
    ctx->r24 = ADD32(ctx->r29, 0X38);
    // 0x80264610: cvt.s.w     $f4, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    ctx->f4.fl = CVT_S_W(ctx->f4.u32l);
    // 0x80264614: mfc1        $a3, $f6
    ctx->r7 = (int32_t)ctx->f6.u32l;
    // 0x80264618: mtc1        $zero, $f14
    ctx->f14.u32l = 0;
    // 0x8026461C: mfc1        $a2, $f4
    ctx->r6 = (int32_t)ctx->f4.u32l;
    // 0x80264620: jal         0x80272B1C
    // 0x80264624: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    ovl_8024B800_func_80272B1C(rdram, ctx);
        goto after_0;
    // 0x80264624: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    after_0:
    // 0x80264628: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x8026462C: lwc1        $f10, 0x40($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X40);
    // 0x80264630: lwc1        $f14, 0x38($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X38);
    // 0x80264634: c.lt.s      $f8, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f8.fl < ctx->f10.fl;
    // 0x80264638: lui         $at, 0x8028
    ctx->r1 = S32(0X8028 << 16);
    // 0x8026463C: bc1f        L_80264654
    if (!c1cs) {
        // 0x80264640: nop
    
            goto L_80264654;
    }
    // 0x80264640: nop

    // 0x80264644: lwc1        $f1, -0x2DE0($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, -0X2DE0);
    // 0x80264648: lwc1        $f0, -0x2DDC($at)
    ctx->f0.u32l = MEM_W(ctx->r1, -0X2DDC);
    // 0x8026464C: b           L_80264660
    // 0x80264650: nop

        goto L_80264660;
    // 0x80264650: nop

L_80264654:
    // 0x80264654: mtc1        $zero, $f1
    ctx->f_odd[(1 - 1) * 2] = 0;
    // 0x80264658: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x8026465C: nop

L_80264660:
    // 0x80264660: jal         0x80279308
    // 0x80264664: cvt.s.d     $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.d); 
    ctx->f12.fl = CVT_S_D(ctx->f0.d);
    ovl_8024B800_func_80279308(rdram, ctx);
        goto after_1;
    // 0x80264664: cvt.s.d     $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.d); 
    ctx->f12.fl = CVT_S_D(ctx->f0.d);
    after_1:
    // 0x80264668: lui         $at, 0x8028
    ctx->r1 = S32(0X8028 << 16);
    // 0x8026466C: lwc1        $f19, -0x2DD8($at)
    ctx->f_odd[(19 - 1) * 2] = MEM_W(ctx->r1, -0X2DD8);
    // 0x80264670: lwc1        $f18, -0x2DD4($at)
    ctx->f18.u32l = MEM_W(ctx->r1, -0X2DD4);
    // 0x80264674: cvt.d.s     $f16, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f16.d = CVT_D_S(ctx->f0.fl);
    // 0x80264678: mul.d       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.d); NAN_CHECK(ctx->f18.d); 
    ctx->f4.d = MUL_D(ctx->f16.d, ctx->f18.d);
    // 0x8026467C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80264680: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80264684: lui         $at, 0x41E0
    ctx->r1 = S32(0X41E0 << 16);
    // 0x80264688: cfc1        $t9, $FpcCsr
    ctx->r25 = get_cop1_cs();
    // 0x8026468C: ctc1        $v0, $FpcCsr
    set_cop1_cs(ctx->r2);
    // 0x80264690: nop

    // 0x80264694: cvt.w.d     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = CVT_W_D(ctx->f4.d);
    // 0x80264698: cfc1        $v0, $FpcCsr
    ctx->r2 = get_cop1_cs();
    // 0x8026469C: nop

    // 0x802646A0: andi        $v0, $v0, 0x78
    ctx->r2 = ctx->r2 & 0X78;
    // 0x802646A4: beq         $v0, $zero, L_802646F4
    if (ctx->r2 == 0) {
        // 0x802646A8: nop
    
            goto L_802646F4;
    }
    // 0x802646A8: nop

    // 0x802646AC: mtc1        $at, $f7
    ctx->f_odd[(7 - 1) * 2] = ctx->r1;
    // 0x802646B0: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x802646B4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x802646B8: sub.d       $f6, $f4, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f6.d); 
    ctx->f6.d = ctx->f4.d - ctx->f6.d;
    // 0x802646BC: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x802646C0: ctc1        $v0, $FpcCsr
    set_cop1_cs(ctx->r2);
    // 0x802646C4: nop

    // 0x802646C8: cvt.w.d     $f6, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    ctx->f6.u32l = CVT_W_D(ctx->f6.d);
    // 0x802646CC: cfc1        $v0, $FpcCsr
    ctx->r2 = get_cop1_cs();
    // 0x802646D0: nop

    // 0x802646D4: andi        $v0, $v0, 0x78
    ctx->r2 = ctx->r2 & 0X78;
    // 0x802646D8: bne         $v0, $zero, L_802646EC
    if (ctx->r2 != 0) {
        // 0x802646DC: nop
    
            goto L_802646EC;
    }
    // 0x802646DC: nop

    // 0x802646E0: mfc1        $v0, $f6
    ctx->r2 = (int32_t)ctx->f6.u32l;
    // 0x802646E4: b           L_80264704
    // 0x802646E8: or          $v0, $v0, $at
    ctx->r2 = ctx->r2 | ctx->r1;
        goto L_80264704;
    // 0x802646E8: or          $v0, $v0, $at
    ctx->r2 = ctx->r2 | ctx->r1;
L_802646EC:
    // 0x802646EC: b           L_80264704
    // 0x802646F0: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
        goto L_80264704;
    // 0x802646F0: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
L_802646F4:
    // 0x802646F4: mfc1        $v0, $f6
    ctx->r2 = (int32_t)ctx->f6.u32l;
    // 0x802646F8: nop

    // 0x802646FC: bltz        $v0, L_802646EC
    if (SIGNED(ctx->r2) < 0) {
        // 0x80264700: nop
    
            goto L_802646EC;
    }
    // 0x80264700: nop

L_80264704:
    // 0x80264704: ctc1        $t9, $FpcCsr
    set_cop1_cs(ctx->r25);
    // 0x80264708: jr          $ra
    // 0x8026470C: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    return;
    // 0x8026470C: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
RECOMP_FUNC void ovl_8024B800_func_80264710(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80264710: lui         $v0, 0x8009
    ctx->r2 = S32(0X8009 << 16);
    // 0x80264714: lw          $v0, 0x3B20($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X3B20);
    // 0x80264718: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    // 0x8026471C: lhu         $t8, 0xC2($v0)
    ctx->r24 = MEM_HU(ctx->r2, 0XC2);
    // 0x80264720: sll         $t6, $a1, 16
    ctx->r14 = S32(ctx->r5 << 16);
    // 0x80264724: andi        $t9, $t8, 0x10
    ctx->r25 = ctx->r24 & 0X10;
    // 0x80264728: bne         $t9, $zero, L_80264794
    if (ctx->r25 != 0) {
        // 0x8026472C: sra         $t7, $t6, 16
        ctx->r15 = S32(SIGNED(ctx->r14) >> 16);
            goto L_80264794;
    }
    // 0x8026472C: sra         $t7, $t6, 16
    ctx->r15 = S32(SIGNED(ctx->r14) >> 16);
    // 0x80264730: blez        $t7, L_80264768
    if (SIGNED(ctx->r15) <= 0) {
        // 0x80264734: nop
    
            goto L_80264768;
    }
    // 0x80264734: nop

    // 0x80264738: lh          $v1, 0xE8($v0)
    ctx->r3 = MEM_H(ctx->r2, 0XE8);
    // 0x8026473C: nop

    // 0x80264740: addiu       $v1, $v1, -0x14E
    ctx->r3 = ADD32(ctx->r3, -0X14E);
    // 0x80264744: sll         $t0, $v1, 16
    ctx->r8 = S32(ctx->r3 << 16);
    // 0x80264748: sra         $t1, $t0, 16
    ctx->r9 = S32(SIGNED(ctx->r8) >> 16);
    // 0x8026474C: bgez        $t1, L_80264794
    if (SIGNED(ctx->r9) >= 0) {
        // 0x80264750: nop
    
            goto L_80264794;
    }
    // 0x80264750: nop

    // 0x80264754: lh          $t2, 0x2E($a0)
    ctx->r10 = MEM_H(ctx->r4, 0X2E);
    // 0x80264758: nop

    // 0x8026475C: addu        $t3, $t2, $t1
    ctx->r11 = ADD32(ctx->r10, ctx->r9);
    // 0x80264760: jr          $ra
    // 0x80264764: sh          $t3, 0x2E($a0)
    MEM_H(0X2E, ctx->r4) = ctx->r11;
    return;
    // 0x80264764: sh          $t3, 0x2E($a0)
    MEM_H(0X2E, ctx->r4) = ctx->r11;
L_80264768:
    // 0x80264768: lh          $v1, 0xE8($v0)
    ctx->r3 = MEM_H(ctx->r2, 0XE8);
    // 0x8026476C: nop

    // 0x80264770: addiu       $v1, $v1, 0x14E
    ctx->r3 = ADD32(ctx->r3, 0X14E);
    // 0x80264774: sll         $t4, $v1, 16
    ctx->r12 = S32(ctx->r3 << 16);
    // 0x80264778: sra         $t5, $t4, 16
    ctx->r13 = S32(SIGNED(ctx->r12) >> 16);
    // 0x8026477C: blez        $t5, L_80264794
    if (SIGNED(ctx->r13) <= 0) {
        // 0x80264780: nop
    
            goto L_80264794;
    }
    // 0x80264780: nop

    // 0x80264784: lh          $t6, 0x2E($a0)
    ctx->r14 = MEM_H(ctx->r4, 0X2E);
    // 0x80264788: nop

    // 0x8026478C: addu        $t7, $t6, $t5
    ctx->r15 = ADD32(ctx->r14, ctx->r13);
    // 0x80264790: sh          $t7, 0x2E($a0)
    MEM_H(0X2E, ctx->r4) = ctx->r15;
L_80264794:
    // 0x80264794: jr          $ra
    // 0x80264798: nop

    return;
    // 0x80264798: nop

;}
RECOMP_FUNC void ovl_8024B800_func_8026479C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8026479C: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    // 0x802647A0: lw          $v0, 0x18($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X18);
    // 0x802647A4: andi        $t6, $a1, 0xFFFF
    ctx->r14 = ctx->r5 & 0XFFFF;
    // 0x802647A8: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x802647AC: lui         $t0, 0x8028
    ctx->r8 = S32(0X8028 << 16);
    // 0x802647B0: or          $a1, $t6, $zero
    ctx->r5 = ctx->r14 | 0;
    // 0x802647B4: addiu       $t0, $t0, -0x3678
    ctx->r8 = ADD32(ctx->r8, -0X3678);
    // 0x802647B8: addiu       $a0, $a0, 0xB2C
    ctx->r4 = ADD32(ctx->r4, 0XB2C);
    // 0x802647BC: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x802647C0: addiu       $t2, $zero, 0xB
    ctx->r10 = ADD32(0, 0XB);
    // 0x802647C4: addiu       $t1, $zero, 0x4B
    ctx->r9 = ADD32(0, 0X4B);
    // 0x802647C8: addiu       $v0, $v0, 0xF8
    ctx->r2 = ADD32(ctx->r2, 0XF8);
L_802647CC:
    // 0x802647CC: lhu         $t7, 0x20($v0)
    ctx->r15 = MEM_HU(ctx->r2, 0X20);
    // 0x802647D0: nop

    // 0x802647D4: andi        $t8, $t7, 0x18
    ctx->r24 = ctx->r15 & 0X18;
    // 0x802647D8: bne         $t8, $zero, L_8026487C
    if (ctx->r24 != 0) {
        // 0x802647DC: nop
    
            goto L_8026487C;
    }
    // 0x802647DC: nop

    // 0x802647E0: lw          $t9, 0x0($a0)
    ctx->r25 = MEM_W(ctx->r4, 0X0);
    // 0x802647E4: nop

    // 0x802647E8: beq         $v0, $t9, L_8026487C
    if (ctx->r2 == ctx->r25) {
        // 0x802647EC: nop
    
            goto L_8026487C;
    }
    // 0x802647EC: nop

    // 0x802647F0: lw          $t3, 0xD4($v0)
    ctx->r11 = MEM_W(ctx->r2, 0XD4);
    // 0x802647F4: nop

    // 0x802647F8: lbu         $t4, 0x5($t3)
    ctx->r12 = MEM_BU(ctx->r11, 0X5);
    // 0x802647FC: nop

    // 0x80264800: sll         $t5, $t4, 1
    ctx->r13 = S32(ctx->r12 << 1);
    // 0x80264804: addu        $t6, $t0, $t5
    ctx->r14 = ADD32(ctx->r8, ctx->r13);
    // 0x80264808: lhu         $t7, 0x0($t6)
    ctx->r15 = MEM_HU(ctx->r14, 0X0);
    // 0x8026480C: nop

    // 0x80264810: and         $t8, $t7, $a1
    ctx->r24 = ctx->r15 & ctx->r5;
    // 0x80264814: beq         $t8, $zero, L_8026487C
    if (ctx->r24 == 0) {
        // 0x80264818: nop
    
            goto L_8026487C;
    }
    // 0x80264818: nop

    // 0x8026481C: lw          $t9, 0x0($a3)
    ctx->r25 = MEM_W(ctx->r7, 0X0);
    // 0x80264820: nop

    // 0x80264824: addiu       $t3, $t9, -0x1
    ctx->r11 = ADD32(ctx->r25, -0X1);
    // 0x80264828: sw          $t3, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->r11;
    // 0x8026482C: lhu         $t4, 0x20($v0)
    ctx->r12 = MEM_HU(ctx->r2, 0X20);
    // 0x80264830: nop

    // 0x80264834: ori         $t5, $t4, 0x10
    ctx->r13 = ctx->r12 | 0X10;
    // 0x80264838: sh          $t5, 0x20($v0)
    MEM_H(0X20, ctx->r2) = ctx->r13;
    // 0x8026483C: lw          $t6, 0x0($a3)
    ctx->r14 = MEM_W(ctx->r7, 0X0);
    // 0x80264840: lhu         $t4, 0x12($v0)
    ctx->r12 = MEM_HU(ctx->r2, 0X12);
    // 0x80264844: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80264848: addu        $t8, $a2, $t7
    ctx->r24 = ADD32(ctx->r6, ctx->r15);
    // 0x8026484C: lw          $t9, 0x0($t8)
    ctx->r25 = MEM_W(ctx->r24, 0X0);
    // 0x80264850: ori         $t5, $t4, 0x100
    ctx->r13 = ctx->r12 | 0X100;
    // 0x80264854: lhu         $t3, 0x1A($t9)
    ctx->r11 = MEM_HU(ctx->r25, 0X1A);
    // 0x80264858: sb          $t1, 0x0($v0)
    MEM_B(0X0, ctx->r2) = ctx->r9;
    // 0x8026485C: sh          $t5, 0x12($v0)
    MEM_H(0X12, ctx->r2) = ctx->r13;
    // 0x80264860: sb          $t3, 0xA($v0)
    MEM_B(0XA, ctx->r2) = ctx->r11;
    // 0x80264864: lw          $t6, 0x0($a3)
    ctx->r14 = MEM_W(ctx->r7, 0X0);
    // 0x80264868: nop

    // 0x8026486C: bne         $t6, $zero, L_8026487C
    if (ctx->r14 != 0) {
        // 0x80264870: nop
    
            goto L_8026487C;
    }
    // 0x80264870: nop

    // 0x80264874: jr          $ra
    // 0x80264878: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    return;
    // 0x80264878: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_8026487C:
    // 0x8026487C: lhu         $t7, 0x118($v0)
    ctx->r15 = MEM_HU(ctx->r2, 0X118);
    // 0x80264880: addiu       $v0, $v0, 0xF8
    ctx->r2 = ADD32(ctx->r2, 0XF8);
    // 0x80264884: andi        $t8, $t7, 0x18
    ctx->r24 = ctx->r15 & 0X18;
    // 0x80264888: bne         $t8, $zero, L_8026492C
    if (ctx->r24 != 0) {
        // 0x8026488C: addiu       $v1, $v1, 0x2
        ctx->r3 = ADD32(ctx->r3, 0X2);
            goto L_8026492C;
    }
    // 0x8026488C: addiu       $v1, $v1, 0x2
    ctx->r3 = ADD32(ctx->r3, 0X2);
    // 0x80264890: lw          $t9, 0x0($a0)
    ctx->r25 = MEM_W(ctx->r4, 0X0);
    // 0x80264894: nop

    // 0x80264898: beq         $v0, $t9, L_8026492C
    if (ctx->r2 == ctx->r25) {
        // 0x8026489C: nop
    
            goto L_8026492C;
    }
    // 0x8026489C: nop

    // 0x802648A0: lw          $t3, 0xD4($v0)
    ctx->r11 = MEM_W(ctx->r2, 0XD4);
    // 0x802648A4: nop

    // 0x802648A8: lbu         $t4, 0x5($t3)
    ctx->r12 = MEM_BU(ctx->r11, 0X5);
    // 0x802648AC: nop

    // 0x802648B0: sll         $t5, $t4, 1
    ctx->r13 = S32(ctx->r12 << 1);
    // 0x802648B4: addu        $t6, $t0, $t5
    ctx->r14 = ADD32(ctx->r8, ctx->r13);
    // 0x802648B8: lhu         $t7, 0x0($t6)
    ctx->r15 = MEM_HU(ctx->r14, 0X0);
    // 0x802648BC: nop

    // 0x802648C0: and         $t8, $t7, $a1
    ctx->r24 = ctx->r15 & ctx->r5;
    // 0x802648C4: beq         $t8, $zero, L_8026492C
    if (ctx->r24 == 0) {
        // 0x802648C8: nop
    
            goto L_8026492C;
    }
    // 0x802648C8: nop

    // 0x802648CC: lw          $t9, 0x0($a3)
    ctx->r25 = MEM_W(ctx->r7, 0X0);
    // 0x802648D0: nop

    // 0x802648D4: addiu       $t3, $t9, -0x1
    ctx->r11 = ADD32(ctx->r25, -0X1);
    // 0x802648D8: sw          $t3, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->r11;
    // 0x802648DC: lhu         $t4, 0x20($v0)
    ctx->r12 = MEM_HU(ctx->r2, 0X20);
    // 0x802648E0: nop

    // 0x802648E4: ori         $t5, $t4, 0x10
    ctx->r13 = ctx->r12 | 0X10;
    // 0x802648E8: sh          $t5, 0x20($v0)
    MEM_H(0X20, ctx->r2) = ctx->r13;
    // 0x802648EC: lw          $t6, 0x0($a3)
    ctx->r14 = MEM_W(ctx->r7, 0X0);
    // 0x802648F0: lhu         $t4, 0x12($v0)
    ctx->r12 = MEM_HU(ctx->r2, 0X12);
    // 0x802648F4: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x802648F8: addu        $t8, $a2, $t7
    ctx->r24 = ADD32(ctx->r6, ctx->r15);
    // 0x802648FC: lw          $t9, 0x0($t8)
    ctx->r25 = MEM_W(ctx->r24, 0X0);
    // 0x80264900: ori         $t5, $t4, 0x100
    ctx->r13 = ctx->r12 | 0X100;
    // 0x80264904: lhu         $t3, 0x1A($t9)
    ctx->r11 = MEM_HU(ctx->r25, 0X1A);
    // 0x80264908: sh          $t5, 0x12($v0)
    MEM_H(0X12, ctx->r2) = ctx->r13;
    // 0x8026490C: sb          $t1, 0x0($v0)
    MEM_B(0X0, ctx->r2) = ctx->r9;
    // 0x80264910: sb          $t3, 0xA($v0)
    MEM_B(0XA, ctx->r2) = ctx->r11;
    // 0x80264914: lw          $t6, 0x0($a3)
    ctx->r14 = MEM_W(ctx->r7, 0X0);
    // 0x80264918: nop

    // 0x8026491C: bne         $t6, $zero, L_8026492C
    if (ctx->r14 != 0) {
        // 0x80264920: nop
    
            goto L_8026492C;
    }
    // 0x80264920: nop

    // 0x80264924: jr          $ra
    // 0x80264928: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    return;
    // 0x80264928: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_8026492C:
    // 0x8026492C: bne         $v1, $t2, L_802647CC
    if (ctx->r3 != ctx->r10) {
        // 0x80264930: addiu       $v0, $v0, 0xF8
        ctx->r2 = ADD32(ctx->r2, 0XF8);
            goto L_802647CC;
    }
    // 0x80264930: addiu       $v0, $v0, 0xF8
    ctx->r2 = ADD32(ctx->r2, 0XF8);
    // 0x80264934: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x80264938: jr          $ra
    // 0x8026493C: nop

    return;
    // 0x8026493C: nop

;}
RECOMP_FUNC void ovl_8024B800_func_80264940(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80264940: addiu       $sp, $sp, -0x50
    ctx->r29 = ADD32(ctx->r29, -0X50);
    // 0x80264944: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80264948: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8026494C: sw          $a0, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r4;
    // 0x80264950: sw          $a1, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r5;
    // 0x80264954: lw          $v0, 0x18($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X18);
    // 0x80264958: lui         $a0, 0x8028
    ctx->r4 = S32(0X8028 << 16);
    // 0x8026495C: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x80264960: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x80264964: addiu       $a0, $a0, -0x3678
    ctx->r4 = ADD32(ctx->r4, -0X3678);
    // 0x80264968: addiu       $a1, $zero, 0xB
    ctx->r5 = ADD32(0, 0XB);
    // 0x8026496C: addiu       $s0, $sp, 0x24
    ctx->r16 = ADD32(ctx->r29, 0X24);
    // 0x80264970: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x80264974: addiu       $v0, $v0, 0xF8
    ctx->r2 = ADD32(ctx->r2, 0XF8);
L_80264978:
    // 0x80264978: lw          $t7, 0xD4($v0)
    ctx->r15 = MEM_W(ctx->r2, 0XD4);
    // 0x8026497C: addiu       $a2, $a2, 0x1
    ctx->r6 = ADD32(ctx->r6, 0X1);
    // 0x80264980: lbu         $t8, 0x5($t7)
    ctx->r24 = MEM_BU(ctx->r15, 0X5);
    // 0x80264984: nop

    // 0x80264988: sll         $t9, $t8, 1
    ctx->r25 = S32(ctx->r24 << 1);
    // 0x8026498C: addu        $t0, $a0, $t9
    ctx->r8 = ADD32(ctx->r4, ctx->r25);
    // 0x80264990: lhu         $t1, 0x0($t0)
    ctx->r9 = MEM_HU(ctx->r8, 0X0);
    // 0x80264994: nop

    // 0x80264998: andi        $t2, $t1, 0xE
    ctx->r10 = ctx->r9 & 0XE;
    // 0x8026499C: beq         $t2, $zero, L_802649C4
    if (ctx->r10 == 0) {
        // 0x802649A0: nop
    
            goto L_802649C4;
    }
    // 0x802649A0: nop

    // 0x802649A4: lhu         $t3, 0x20($v0)
    ctx->r11 = MEM_HU(ctx->r2, 0X20);
    // 0x802649A8: addiu       $a3, $a3, 0x1
    ctx->r7 = ADD32(ctx->r7, 0X1);
    // 0x802649AC: andi        $t4, $t3, 0x8
    ctx->r12 = ctx->r11 & 0X8;
    // 0x802649B0: beq         $t4, $zero, L_802649C4
    if (ctx->r12 == 0) {
        // 0x802649B4: sll         $t5, $v1, 2
        ctx->r13 = S32(ctx->r3 << 2);
            goto L_802649C4;
    }
    // 0x802649B4: sll         $t5, $v1, 2
    ctx->r13 = S32(ctx->r3 << 2);
    // 0x802649B8: addu        $t6, $s0, $t5
    ctx->r14 = ADD32(ctx->r16, ctx->r13);
    // 0x802649BC: sw          $v0, 0x0($t6)
    MEM_W(0X0, ctx->r14) = ctx->r2;
    // 0x802649C0: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
L_802649C4:
    // 0x802649C4: bne         $a2, $a1, L_80264978
    if (ctx->r6 != ctx->r5) {
        // 0x802649C8: addiu       $v0, $v0, 0xF8
        ctx->r2 = ADD32(ctx->r2, 0XF8);
            goto L_80264978;
    }
    // 0x802649C8: addiu       $v0, $v0, 0xF8
    ctx->r2 = ADD32(ctx->r2, 0XF8);
    // 0x802649CC: beq         $a3, $zero, L_80264A30
    if (ctx->r7 == 0) {
        // 0x802649D0: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_80264A30;
    }
    // 0x802649D0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x802649D4: lh          $t7, 0x56($sp)
    ctx->r15 = MEM_H(ctx->r29, 0X56);
    // 0x802649D8: addiu       $t8, $zero, 0x2
    ctx->r24 = ADD32(0, 0X2);
    // 0x802649DC: subu        $v0, $a3, $t7
    ctx->r2 = SUB32(ctx->r7, ctx->r15);
    // 0x802649E0: slti        $at, $v0, 0x2
    ctx->r1 = SIGNED(ctx->r2) < 0X2 ? 1 : 0;
    // 0x802649E4: beq         $at, $zero, L_80264A2C
    if (ctx->r1 == 0) {
        // 0x802649E8: subu        $t9, $t8, $v0
        ctx->r25 = SUB32(ctx->r24, ctx->r2);
            goto L_80264A2C;
    }
    // 0x802649E8: subu        $t9, $t8, $v0
    ctx->r25 = SUB32(ctx->r24, ctx->r2);
    // 0x802649EC: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x802649F0: bne         $a3, $at, L_80264A00
    if (ctx->r7 != ctx->r1) {
        // 0x802649F4: sw          $t9, 0x3C($sp)
        MEM_W(0X3C, ctx->r29) = ctx->r25;
            goto L_80264A00;
    }
    // 0x802649F4: sw          $t9, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r25;
    // 0x802649F8: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x802649FC: sw          $t0, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r8;
L_80264A00:
    // 0x80264A00: lw          $a0, 0x50($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X50);
    // 0x80264A04: addiu       $a1, $zero, 0x50
    ctx->r5 = ADD32(0, 0X50);
    // 0x80264A08: or          $a2, $s0, $zero
    ctx->r6 = ctx->r16 | 0;
    // 0x80264A0C: jal         0x8026479C
    // 0x80264A10: addiu       $a3, $sp, 0x3C
    ctx->r7 = ADD32(ctx->r29, 0X3C);
    ovl_8024B800_func_8026479C(rdram, ctx);
        goto after_0;
    // 0x80264A10: addiu       $a3, $sp, 0x3C
    ctx->r7 = ADD32(ctx->r29, 0X3C);
    after_0:
    // 0x80264A14: bne         $v0, $zero, L_80264A2C
    if (ctx->r2 != 0) {
        // 0x80264A18: addiu       $a1, $zero, 0x7FE
        ctx->r5 = ADD32(0, 0X7FE);
            goto L_80264A2C;
    }
    // 0x80264A18: addiu       $a1, $zero, 0x7FE
    ctx->r5 = ADD32(0, 0X7FE);
    // 0x80264A1C: lw          $a0, 0x50($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X50);
    // 0x80264A20: or          $a2, $s0, $zero
    ctx->r6 = ctx->r16 | 0;
    // 0x80264A24: jal         0x8026479C
    // 0x80264A28: addiu       $a3, $sp, 0x3C
    ctx->r7 = ADD32(ctx->r29, 0X3C);
    ovl_8024B800_func_8026479C(rdram, ctx);
        goto after_1;
    // 0x80264A28: addiu       $a3, $sp, 0x3C
    ctx->r7 = ADD32(ctx->r29, 0X3C);
    after_1:
L_80264A2C:
    // 0x80264A2C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_80264A30:
    // 0x80264A30: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80264A34: jr          $ra
    // 0x80264A38: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
    return;
    // 0x80264A38: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
;}
RECOMP_FUNC void ovl_8024B800_func_80264A3C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80264A3C: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x80264A40: sw          $s2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r18;
    // 0x80264A44: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x80264A48: sw          $s5, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r21;
    // 0x80264A4C: sw          $s4, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r20;
    // 0x80264A50: sw          $s3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r19;
    // 0x80264A54: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x80264A58: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x80264A5C: lui         $s2, 0x8028
    ctx->r18 = S32(0X8028 << 16);
    // 0x80264A60: lw          $s0, 0x18($a0)
    ctx->r16 = MEM_W(ctx->r4, 0X18);
    // 0x80264A64: or          $s5, $a0, $zero
    ctx->r21 = ctx->r4 | 0;
    // 0x80264A68: addiu       $s2, $s2, -0x3630
    ctx->r18 = ADD32(ctx->r18, -0X3630);
    // 0x80264A6C: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    // 0x80264A70: addiu       $s3, $zero, 0x1E
    ctx->r19 = ADD32(0, 0X1E);
L_80264A74:
    // 0x80264A74: lbu         $t6, 0x0($s0)
    ctx->r14 = MEM_BU(ctx->r16, 0X0);
    // 0x80264A78: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80264A7C: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80264A80: addu        $t8, $s2, $t7
    ctx->r24 = ADD32(ctx->r18, ctx->r15);
    // 0x80264A84: lw          $t9, 0x0($t8)
    ctx->r25 = MEM_W(ctx->r24, 0X0);
    // 0x80264A88: nop

    // 0x80264A8C: jalr        $t9
    // 0x80264A90: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x80264A90: nop

    after_0:
    // 0x80264A94: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x80264A98: sltiu       $at, $s1, 0xB
    ctx->r1 = ctx->r17 < 0XB ? 1 : 0;
    // 0x80264A9C: addiu       $s0, $s0, 0xF8
    ctx->r16 = ADD32(ctx->r16, 0XF8);
    // 0x80264AA0: bne         $at, $zero, L_80264A74
    if (ctx->r1 != 0) {
        // 0x80264AA4: sb          $s3, -0xF8($s0)
        MEM_B(-0XF8, ctx->r16) = ctx->r19;
            goto L_80264A74;
    }
    // 0x80264AA4: sb          $s3, -0xF8($s0)
    MEM_B(-0XF8, ctx->r16) = ctx->r19;
    // 0x80264AA8: lui         $s3, 0x800B
    ctx->r19 = S32(0X800B << 16);
    // 0x80264AAC: lui         $s1, 0x8012
    ctx->r17 = S32(0X8012 << 16);
    // 0x80264AB0: addiu       $s3, $s3, -0x40A0
    ctx->r19 = ADD32(ctx->r19, -0X40A0);
    // 0x80264AB4: addiu       $s4, $zero, 0x4
    ctx->r20 = ADD32(0, 0X4);
    // 0x80264AB8: addiu       $s1, $s1, 0xB2C
    ctx->r17 = ADD32(ctx->r17, 0XB2C);
    // 0x80264ABC: addiu       $s2, $zero, 0x9B0
    ctx->r18 = ADD32(0, 0X9B0);
L_80264AC0:
    // 0x80264AC0: lw          $t0, 0x18($s5)
    ctx->r8 = MEM_W(ctx->r21, 0X18);
    // 0x80264AC4: nop

    // 0x80264AC8: addu        $s0, $t0, $s2
    ctx->r16 = ADD32(ctx->r8, ctx->r18);
    // 0x80264ACC: lhu         $t1, 0xC($s0)
    ctx->r9 = MEM_HU(ctx->r16, 0XC);
    // 0x80264AD0: nop

    // 0x80264AD4: beq         $t1, $zero, L_80264B00
    if (ctx->r9 == 0) {
        // 0x80264AD8: nop
    
            goto L_80264B00;
    }
    // 0x80264AD8: nop

    // 0x80264ADC: lw          $t2, 0x0($s1)
    ctx->r10 = MEM_W(ctx->r17, 0X0);
    // 0x80264AE0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80264AE4: beq         $s0, $t2, L_80264B00
    if (ctx->r16 == ctx->r10) {
        // 0x80264AE8: or          $a1, $s3, $zero
        ctx->r5 = ctx->r19 | 0;
            goto L_80264B00;
    }
    // 0x80264AE8: or          $a1, $s3, $zero
    ctx->r5 = ctx->r19 | 0;
    // 0x80264AEC: jal         0x80264520
    // 0x80264AF0: addiu       $a2, $zero, 0x1E
    ctx->r6 = ADD32(0, 0X1E);
    ovl_8024B800_func_80264520(rdram, ctx);
        goto after_1;
    // 0x80264AF0: addiu       $a2, $zero, 0x1E
    ctx->r6 = ADD32(0, 0X1E);
    after_1:
    // 0x80264AF4: addiu       $s4, $s4, -0x1
    ctx->r20 = ADD32(ctx->r20, -0X1);
    // 0x80264AF8: beq         $s4, $zero, L_80264B0C
    if (ctx->r20 == 0) {
        // 0x80264AFC: addiu       $s3, $s3, 0x3
        ctx->r19 = ADD32(ctx->r19, 0X3);
            goto L_80264B0C;
    }
    // 0x80264AFC: addiu       $s3, $s3, 0x3
    ctx->r19 = ADD32(ctx->r19, 0X3);
L_80264B00:
    // 0x80264B00: addiu       $s2, $s2, -0xF8
    ctx->r18 = ADD32(ctx->r18, -0XF8);
    // 0x80264B04: bne         $s2, $zero, L_80264AC0
    if (ctx->r18 != 0) {
        // 0x80264B08: nop
    
            goto L_80264AC0;
    }
    // 0x80264B08: nop

L_80264B0C:
    // 0x80264B0C: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x80264B10: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x80264B14: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x80264B18: lw          $s2, 0x1C($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X1C);
    // 0x80264B1C: lw          $s3, 0x20($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X20);
    // 0x80264B20: lw          $s4, 0x24($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X24);
    // 0x80264B24: lw          $s5, 0x28($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X28);
    // 0x80264B28: jr          $ra
    // 0x80264B2C: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x80264B2C: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void ovl_8024B800_func_80264B30(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80264B30: addiu       $sp, $sp, -0x60
    ctx->r29 = ADD32(ctx->r29, -0X60);
    // 0x80264B34: sw          $ra, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r31;
    // 0x80264B38: sw          $s6, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r22;
    // 0x80264B3C: sw          $s5, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r21;
    // 0x80264B40: sw          $s4, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r20;
    // 0x80264B44: sw          $s3, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r19;
    // 0x80264B48: sw          $s2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r18;
    // 0x80264B4C: sw          $s1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r17;
    // 0x80264B50: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    // 0x80264B54: swc1        $f21, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x80264B58: swc1        $f20, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f20.u32l;
    // 0x80264B5C: lw          $s0, 0x18($a0)
    ctx->r16 = MEM_W(ctx->r4, 0X18);
    // 0x80264B60: lui         $at, 0x42F0
    ctx->r1 = S32(0X42F0 << 16);
    // 0x80264B64: lui         $s1, 0x8009
    ctx->r17 = S32(0X8009 << 16);
    // 0x80264B68: mtc1        $at, $f20
    ctx->f20.u32l = ctx->r1;
    // 0x80264B6C: addiu       $s1, $s1, 0x3B20
    ctx->r17 = ADD32(ctx->r17, 0X3B20);
    // 0x80264B70: addiu       $s2, $zero, 0x1
    ctx->r18 = ADD32(0, 0X1);
    // 0x80264B74: addiu       $s3, $zero, 0xB
    ctx->r19 = ADD32(0, 0XB);
    // 0x80264B78: addiu       $s4, $zero, -0x153
    ctx->r20 = ADD32(0, -0X153);
    // 0x80264B7C: addiu       $s5, $zero, 0x153
    ctx->r21 = ADD32(0, 0X153);
    // 0x80264B80: addiu       $s6, $sp, 0x54
    ctx->r22 = ADD32(ctx->r29, 0X54);
    // 0x80264B84: addiu       $s0, $s0, 0xF8
    ctx->r16 = ADD32(ctx->r16, 0XF8);
L_80264B88:
    // 0x80264B88: lhu         $t6, 0xC($s0)
    ctx->r14 = MEM_HU(ctx->r16, 0XC);
    // 0x80264B8C: nop

    // 0x80264B90: beq         $t6, $zero, L_80264CD0
    if (ctx->r14 == 0) {
        // 0x80264B94: nop
    
            goto L_80264CD0;
    }
    // 0x80264B94: nop

    // 0x80264B98: lh          $v0, 0x2E($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X2E);
    // 0x80264B9C: nop

    // 0x80264BA0: slti        $at, $v0, -0x153
    ctx->r1 = SIGNED(ctx->r2) < -0X153 ? 1 : 0;
    // 0x80264BA4: beq         $at, $zero, L_80264BBC
    if (ctx->r1 == 0) {
        // 0x80264BA8: slti        $at, $v0, 0x154
        ctx->r1 = SIGNED(ctx->r2) < 0X154 ? 1 : 0;
            goto L_80264BBC;
    }
    // 0x80264BA8: slti        $at, $v0, 0x154
    ctx->r1 = SIGNED(ctx->r2) < 0X154 ? 1 : 0;
    // 0x80264BAC: sh          $s4, 0x2E($s0)
    MEM_H(0X2E, ctx->r16) = ctx->r20;
    // 0x80264BB0: lh          $v0, 0x2E($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X2E);
    // 0x80264BB4: nop

    // 0x80264BB8: slti        $at, $v0, 0x154
    ctx->r1 = SIGNED(ctx->r2) < 0X154 ? 1 : 0;
L_80264BBC:
    // 0x80264BBC: bne         $at, $zero, L_80264BD0
    if (ctx->r1 != 0) {
        // 0x80264BC0: nop
    
            goto L_80264BD0;
    }
    // 0x80264BC0: nop

    // 0x80264BC4: sh          $s5, 0x2E($s0)
    MEM_H(0X2E, ctx->r16) = ctx->r21;
    // 0x80264BC8: lh          $v0, 0x2E($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X2E);
    // 0x80264BCC: nop

L_80264BD0:
    // 0x80264BD0: mtc1        $v0, $f18
    ctx->f18.u32l = ctx->r2;
    // 0x80264BD4: lw          $v1, 0x0($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X0);
    // 0x80264BD8: cvt.s.w     $f18, $f18
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    ctx->f18.fl = CVT_S_W(ctx->f18.u32l);
    // 0x80264BDC: lh          $t9, 0x30($s0)
    ctx->r25 = MEM_H(ctx->r16, 0X30);
    // 0x80264BE0: lh          $t7, 0xE8($v1)
    ctx->r15 = MEM_H(ctx->r3, 0XE8);
    // 0x80264BE4: mtc1        $t9, $f16
    ctx->f16.u32l = ctx->r25;
    // 0x80264BE8: mtc1        $t7, $f10
    ctx->f10.u32l = ctx->r15;
    // 0x80264BEC: cvt.s.w     $f16, $f16
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    ctx->f16.fl = CVT_S_W(ctx->f16.u32l);
    // 0x80264BF0: mfc1        $a2, $f18
    ctx->r6 = (int32_t)ctx->f18.u32l;
    // 0x80264BF4: lh          $t8, 0xEA($v1)
    ctx->r24 = MEM_H(ctx->r3, 0XEA);
    // 0x80264BF8: mfc1        $a3, $f16
    ctx->r7 = (int32_t)ctx->f16.u32l;
    // 0x80264BFC: mtc1        $t8, $f16
    ctx->f16.u32l = ctx->r24;
    // 0x80264C00: cvt.s.w     $f12, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    ctx->f12.fl = CVT_S_W(ctx->f10.u32l);
    // 0x80264C04: sw          $s6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r22;
    // 0x80264C08: jal         0x80272B1C
    // 0x80264C0C: cvt.s.w     $f14, $f16
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 16);
    ctx->f14.fl = CVT_S_W(ctx->f16.u32l);
    ovl_8024B800_func_80272B1C(rdram, ctx);
        goto after_0;
    // 0x80264C0C: cvt.s.w     $f14, $f16
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 16);
    ctx->f14.fl = CVT_S_W(ctx->f16.u32l);
    after_0:
    // 0x80264C10: lwc1        $f16, 0x58($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X58);
    // 0x80264C14: lwc1        $f12, 0x54($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X54);
    // 0x80264C18: c.lt.s      $f16, $f20
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 20);
    c1cs = ctx->f16.fl < ctx->f20.fl;
    // 0x80264C1C: nop

    // 0x80264C20: bc1f        L_80264CD0
    if (!c1cs) {
        // 0x80264C24: nop
    
            goto L_80264CD0;
    }
    // 0x80264C24: nop

    // 0x80264C28: jal         0x80081040
    // 0x80264C2C: nop

    func_80081040(rdram, ctx);
        goto after_1;
    // 0x80264C2C: nop

    after_1:
    // 0x80264C30: lw          $t0, 0x0($s1)
    ctx->r8 = MEM_W(ctx->r17, 0X0);
    // 0x80264C34: mul.s       $f18, $f0, $f20
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f18.fl = MUL_S(ctx->f0.fl, ctx->f20.fl);
    // 0x80264C38: lh          $t1, 0xE8($t0)
    ctx->r9 = MEM_H(ctx->r8, 0XE8);
    // 0x80264C3C: nop

    // 0x80264C40: mtc1        $t1, $f4
    ctx->f4.u32l = ctx->r9;
    // 0x80264C44: nop

    // 0x80264C48: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x80264C4C: add.s       $f8, $f18, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f18.fl + ctx->f6.fl;
    // 0x80264C50: cfc1        $t2, $FpcCsr
    ctx->r10 = get_cop1_cs();
    // 0x80264C54: nop

    // 0x80264C58: ori         $at, $t2, 0x3
    ctx->r1 = ctx->r10 | 0X3;
    // 0x80264C5C: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x80264C60: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x80264C64: nop

    // 0x80264C68: cvt.w.s     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.u32l = CVT_W_S(ctx->f8.fl);
    // 0x80264C6C: mfc1        $t3, $f10
    ctx->r11 = (int32_t)ctx->f10.u32l;
    // 0x80264C70: ctc1        $t2, $FpcCsr
    set_cop1_cs(ctx->r10);
    // 0x80264C74: sh          $t3, 0x2E($s0)
    MEM_H(0X2E, ctx->r16) = ctx->r11;
    // 0x80264C78: lwc1        $f12, 0x54($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X54);
    // 0x80264C7C: jal         0x80080E80
    // 0x80264C80: nop

    func_80080E80(rdram, ctx);
        goto after_2;
    // 0x80264C80: nop

    after_2:
    // 0x80264C84: lw          $t4, 0x0($s1)
    ctx->r12 = MEM_W(ctx->r17, 0X0);
    // 0x80264C88: mul.s       $f16, $f0, $f20
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f16.fl = MUL_S(ctx->f0.fl, ctx->f20.fl);
    // 0x80264C8C: lh          $t5, 0xEA($t4)
    ctx->r13 = MEM_H(ctx->r12, 0XEA);
    // 0x80264C90: nop

    // 0x80264C94: mtc1        $t5, $f4
    ctx->f4.u32l = ctx->r13;
    // 0x80264C98: nop

    // 0x80264C9C: cvt.s.w     $f18, $f4
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    ctx->f18.fl = CVT_S_W(ctx->f4.u32l);
    // 0x80264CA0: add.s       $f6, $f16, $f18
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f6.fl = ctx->f16.fl + ctx->f18.fl;
    // 0x80264CA4: cfc1        $t6, $FpcCsr
    ctx->r14 = get_cop1_cs();
    // 0x80264CA8: nop

    // 0x80264CAC: ori         $at, $t6, 0x3
    ctx->r1 = ctx->r14 | 0X3;
    // 0x80264CB0: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x80264CB4: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x80264CB8: nop

    // 0x80264CBC: cvt.w.s     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.u32l = CVT_W_S(ctx->f6.fl);
    // 0x80264CC0: mfc1        $t7, $f8
    ctx->r15 = (int32_t)ctx->f8.u32l;
    // 0x80264CC4: ctc1        $t6, $FpcCsr
    set_cop1_cs(ctx->r14);
    // 0x80264CC8: sh          $t7, 0x30($s0)
    MEM_H(0X30, ctx->r16) = ctx->r15;
    // 0x80264CCC: nop

L_80264CD0:
    // 0x80264CD0: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
    // 0x80264CD4: bne         $s2, $s3, L_80264B88
    if (ctx->r18 != ctx->r19) {
        // 0x80264CD8: addiu       $s0, $s0, 0xF8
        ctx->r16 = ADD32(ctx->r16, 0XF8);
            goto L_80264B88;
    }
    // 0x80264CD8: addiu       $s0, $s0, 0xF8
    ctx->r16 = ADD32(ctx->r16, 0XF8);
    // 0x80264CDC: lw          $ra, 0x44($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X44);
    // 0x80264CE0: lwc1        $f21, 0x20($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X20);
    // 0x80264CE4: lwc1        $f20, 0x24($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X24);
    // 0x80264CE8: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x80264CEC: lw          $s1, 0x2C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X2C);
    // 0x80264CF0: lw          $s2, 0x30($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X30);
    // 0x80264CF4: lw          $s3, 0x34($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X34);
    // 0x80264CF8: lw          $s4, 0x38($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X38);
    // 0x80264CFC: lw          $s5, 0x3C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X3C);
    // 0x80264D00: lw          $s6, 0x40($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X40);
    // 0x80264D04: jr          $ra
    // 0x80264D08: addiu       $sp, $sp, 0x60
    ctx->r29 = ADD32(ctx->r29, 0X60);
    return;
    // 0x80264D08: addiu       $sp, $sp, 0x60
    ctx->r29 = ADD32(ctx->r29, 0X60);
;}
RECOMP_FUNC void ovl_8024B800_func_80264D0C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80264D0C: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x80264D10: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x80264D14: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x80264D18: sw          $s6, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r22;
    // 0x80264D1C: sw          $s5, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r21;
    // 0x80264D20: sw          $s4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r20;
    // 0x80264D24: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x80264D28: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x80264D2C: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80264D30: lui         $s2, 0x8028
    ctx->r18 = S32(0X8028 << 16);
    // 0x80264D34: lw          $s0, 0x18($a0)
    ctx->r16 = MEM_W(ctx->r4, 0X18);
    // 0x80264D38: or          $s6, $a0, $zero
    ctx->r22 = ctx->r4 | 0;
    // 0x80264D3C: addiu       $s2, $s2, -0x3630
    ctx->r18 = ADD32(ctx->r18, -0X3630);
    // 0x80264D40: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    // 0x80264D44: addiu       $s3, $zero, 0x1E
    ctx->r19 = ADD32(0, 0X1E);
L_80264D48:
    // 0x80264D48: lbu         $t6, 0x0($s0)
    ctx->r14 = MEM_BU(ctx->r16, 0X0);
    // 0x80264D4C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80264D50: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80264D54: addu        $t8, $s2, $t7
    ctx->r24 = ADD32(ctx->r18, ctx->r15);
    // 0x80264D58: lw          $t9, 0x0($t8)
    ctx->r25 = MEM_W(ctx->r24, 0X0);
    // 0x80264D5C: nop

    // 0x80264D60: jalr        $t9
    // 0x80264D64: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x80264D64: nop

    after_0:
    // 0x80264D68: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x80264D6C: sltiu       $at, $s1, 0xB
    ctx->r1 = ctx->r17 < 0XB ? 1 : 0;
    // 0x80264D70: addiu       $s0, $s0, 0xF8
    ctx->r16 = ADD32(ctx->r16, 0XF8);
    // 0x80264D74: bne         $at, $zero, L_80264D48
    if (ctx->r1 != 0) {
        // 0x80264D78: sb          $s3, -0xF8($s0)
        MEM_B(-0XF8, ctx->r16) = ctx->r19;
            goto L_80264D48;
    }
    // 0x80264D78: sb          $s3, -0xF8($s0)
    MEM_B(-0XF8, ctx->r16) = ctx->r19;
    // 0x80264D7C: lui         $s3, 0x800B
    ctx->r19 = S32(0X800B << 16);
    // 0x80264D80: lui         $s1, 0x8012
    ctx->r17 = S32(0X8012 << 16);
    // 0x80264D84: addiu       $s3, $s3, -0x4094
    ctx->r19 = ADD32(ctx->r19, -0X4094);
    // 0x80264D88: addiu       $s4, $zero, 0x4
    ctx->r20 = ADD32(0, 0X4);
    // 0x80264D8C: addiu       $s1, $s1, 0xB2C
    ctx->r17 = ADD32(ctx->r17, 0XB2C);
    // 0x80264D90: addiu       $s2, $zero, 0xF8
    ctx->r18 = ADD32(0, 0XF8);
    // 0x80264D94: addiu       $s5, $zero, 0x9B0
    ctx->r21 = ADD32(0, 0X9B0);
L_80264D98:
    // 0x80264D98: lw          $t0, 0x18($s6)
    ctx->r8 = MEM_W(ctx->r22, 0X18);
    // 0x80264D9C: nop

    // 0x80264DA0: addu        $s0, $t0, $s2
    ctx->r16 = ADD32(ctx->r8, ctx->r18);
    // 0x80264DA4: lhu         $t1, 0xC($s0)
    ctx->r9 = MEM_HU(ctx->r16, 0XC);
    // 0x80264DA8: nop

    // 0x80264DAC: beq         $t1, $zero, L_80264DD8
    if (ctx->r9 == 0) {
        // 0x80264DB0: nop
    
            goto L_80264DD8;
    }
    // 0x80264DB0: nop

    // 0x80264DB4: lw          $t2, 0x0($s1)
    ctx->r10 = MEM_W(ctx->r17, 0X0);
    // 0x80264DB8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80264DBC: beq         $s0, $t2, L_80264DD8
    if (ctx->r16 == ctx->r10) {
        // 0x80264DC0: or          $a1, $s3, $zero
        ctx->r5 = ctx->r19 | 0;
            goto L_80264DD8;
    }
    // 0x80264DC0: or          $a1, $s3, $zero
    ctx->r5 = ctx->r19 | 0;
    // 0x80264DC4: jal         0x80264520
    // 0x80264DC8: addiu       $a2, $zero, 0x1E
    ctx->r6 = ADD32(0, 0X1E);
    ovl_8024B800_func_80264520(rdram, ctx);
        goto after_1;
    // 0x80264DC8: addiu       $a2, $zero, 0x1E
    ctx->r6 = ADD32(0, 0X1E);
    after_1:
    // 0x80264DCC: addiu       $s4, $s4, -0x1
    ctx->r20 = ADD32(ctx->r20, -0X1);
    // 0x80264DD0: beq         $s4, $zero, L_80264DE4
    if (ctx->r20 == 0) {
        // 0x80264DD4: addiu       $s3, $s3, 0x3
        ctx->r19 = ADD32(ctx->r19, 0X3);
            goto L_80264DE4;
    }
    // 0x80264DD4: addiu       $s3, $s3, 0x3
    ctx->r19 = ADD32(ctx->r19, 0X3);
L_80264DD8:
    // 0x80264DD8: addiu       $s2, $s2, 0xF8
    ctx->r18 = ADD32(ctx->r18, 0XF8);
    // 0x80264DDC: bne         $s2, $s5, L_80264D98
    if (ctx->r18 != ctx->r21) {
        // 0x80264DE0: nop
    
            goto L_80264D98;
    }
    // 0x80264DE0: nop

L_80264DE4:
    // 0x80264DE4: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x80264DE8: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80264DEC: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x80264DF0: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x80264DF4: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x80264DF8: lw          $s4, 0x28($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X28);
    // 0x80264DFC: lw          $s5, 0x2C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X2C);
    // 0x80264E00: lw          $s6, 0x30($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X30);
    // 0x80264E04: jr          $ra
    // 0x80264E08: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    return;
    // 0x80264E08: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void ovl_8024B800_func_80264E0C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80264E0C: lui         $a2, 0x8028
    ctx->r6 = S32(0X8028 << 16);
    // 0x80264E10: addiu       $a2, $a2, -0x1B28
    ctx->r6 = ADD32(ctx->r6, -0X1B28);
    // 0x80264E14: lhu         $v1, 0x0($a2)
    ctx->r3 = MEM_HU(ctx->r6, 0X0);
    // 0x80264E18: lw          $t6, 0x24($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X24);
    // 0x80264E1C: sll         $t8, $v1, 5
    ctx->r24 = S32(ctx->r3 << 5);
    // 0x80264E20: lw          $t7, 0x18($t6)
    ctx->r15 = MEM_W(ctx->r14, 0X18);
    // 0x80264E24: lui         $a1, 0x8012
    ctx->r5 = S32(0X8012 << 16);
    // 0x80264E28: subu        $t8, $t8, $v1
    ctx->r24 = SUB32(ctx->r24, ctx->r3);
    // 0x80264E2C: sll         $t8, $t8, 3
    ctx->r24 = S32(ctx->r24 << 3);
    // 0x80264E30: lw          $a1, 0xB2C($a1)
    ctx->r5 = MEM_W(ctx->r5, 0XB2C);
    // 0x80264E34: addu        $v0, $t7, $t8
    ctx->r2 = ADD32(ctx->r15, ctx->r24);
L_80264E38:
    // 0x80264E38: lhu         $t9, 0xC($v0)
    ctx->r25 = MEM_HU(ctx->r2, 0XC);
    // 0x80264E3C: addiu       $t0, $v1, -0x1
    ctx->r8 = ADD32(ctx->r3, -0X1);
    // 0x80264E40: beq         $t9, $zero, L_80264E58
    if (ctx->r25 == 0) {
        // 0x80264E44: nop
    
            goto L_80264E58;
    }
    // 0x80264E44: nop

    // 0x80264E48: beq         $v0, $a1, L_80264E58
    if (ctx->r2 == ctx->r5) {
        // 0x80264E4C: nop
    
            goto L_80264E58;
    }
    // 0x80264E4C: nop

    // 0x80264E50: jr          $ra
    // 0x80264E54: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    return;
    // 0x80264E54: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
L_80264E58:
    // 0x80264E58: sh          $t0, 0x0($a2)
    MEM_H(0X0, ctx->r6) = ctx->r8;
    // 0x80264E5C: addiu       $v0, $v0, -0xF8
    ctx->r2 = ADD32(ctx->r2, -0XF8);
    // 0x80264E60: b           L_80264E38
    // 0x80264E64: andi        $v1, $t0, 0xFFFF
    ctx->r3 = ctx->r8 & 0XFFFF;
        goto L_80264E38;
    // 0x80264E64: andi        $v1, $t0, 0xFFFF
    ctx->r3 = ctx->r8 & 0XFFFF;
    // 0x80264E68: jr          $ra
    // 0x80264E6C: nop

    return;
    // 0x80264E6C: nop

;}
RECOMP_FUNC void ovl_8024B800_func_80264E70(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80264E70: addiu       $sp, $sp, -0x68
    ctx->r29 = ADD32(ctx->r29, -0X68);
    // 0x80264E74: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x80264E78: sw          $fp, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r30;
    // 0x80264E7C: sw          $s7, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r23;
    // 0x80264E80: sw          $s6, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r22;
    // 0x80264E84: sw          $s5, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r21;
    // 0x80264E88: sw          $s4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r20;
    // 0x80264E8C: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x80264E90: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x80264E94: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x80264E98: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80264E9C: lw          $s0, 0x18($a0)
    ctx->r16 = MEM_W(ctx->r4, 0X18);
    // 0x80264EA0: or          $s6, $a0, $zero
    ctx->r22 = ctx->r4 | 0;
    // 0x80264EA4: addiu       $a3, $zero, 0x4
    ctx->r7 = ADD32(0, 0X4);
    // 0x80264EA8: or          $s7, $zero, $zero
    ctx->r23 = 0 | 0;
    // 0x80264EAC: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
L_80264EB0:
    // 0x80264EB0: lhu         $t6, 0x20($s0)
    ctx->r14 = MEM_HU(ctx->r16, 0X20);
    // 0x80264EB4: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x80264EB8: sltiu       $at, $s1, 0xB
    ctx->r1 = ctx->r17 < 0XB ? 1 : 0;
    // 0x80264EBC: andi        $t7, $t6, 0xFFE7
    ctx->r15 = ctx->r14 & 0XFFE7;
    // 0x80264EC0: addiu       $s0, $s0, 0xF8
    ctx->r16 = ADD32(ctx->r16, 0XF8);
    // 0x80264EC4: bne         $at, $zero, L_80264EB0
    if (ctx->r1 != 0) {
        // 0x80264EC8: sh          $t7, -0xD8($s0)
        MEM_H(-0XD8, ctx->r16) = ctx->r15;
            goto L_80264EB0;
    }
    // 0x80264EC8: sh          $t7, -0xD8($s0)
    MEM_H(-0XD8, ctx->r16) = ctx->r15;
    // 0x80264ECC: lbu         $v0, 0x2($s6)
    ctx->r2 = MEM_BU(ctx->r22, 0X2);
    // 0x80264ED0: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80264ED4: bne         $v0, $at, L_80264EE0
    if (ctx->r2 != ctx->r1) {
        // 0x80264ED8: lui         $s3, 0x800B
        ctx->r19 = S32(0X800B << 16);
            goto L_80264EE0;
    }
    // 0x80264ED8: lui         $s3, 0x800B
    ctx->r19 = S32(0X800B << 16);
    // 0x80264EDC: addiu       $a3, $zero, 0x5
    ctx->r7 = ADD32(0, 0X5);
L_80264EE0:
    // 0x80264EE0: addiu       $at, $zero, 0x5
    ctx->r1 = ADD32(0, 0X5);
    // 0x80264EE4: bne         $v0, $at, L_80264EF0
    if (ctx->r2 != ctx->r1) {
        // 0x80264EE8: lui         $t3, 0x8009
        ctx->r11 = S32(0X8009 << 16);
            goto L_80264EF0;
    }
    // 0x80264EE8: lui         $t3, 0x8009
    ctx->r11 = S32(0X8009 << 16);
    // 0x80264EEC: addiu       $a3, $zero, 0x2
    ctx->r7 = ADD32(0, 0X2);
L_80264EF0:
    // 0x80264EF0: lbu         $t8, 0x0($s6)
    ctx->r24 = MEM_BU(ctx->r22, 0X0);
    // 0x80264EF4: lbu         $t0, 0x3($s6)
    ctx->r8 = MEM_BU(ctx->r22, 0X3);
    // 0x80264EF8: sll         $t9, $t8, 2
    ctx->r25 = S32(ctx->r24 << 2);
    // 0x80264EFC: subu        $t9, $t9, $t8
    ctx->r25 = SUB32(ctx->r25, ctx->r24);
    // 0x80264F00: sll         $t9, $t9, 1
    ctx->r25 = S32(ctx->r25 << 1);
    // 0x80264F04: sll         $t1, $t0, 1
    ctx->r9 = S32(ctx->r8 << 1);
    // 0x80264F08: addu        $t2, $t9, $t1
    ctx->r10 = ADD32(ctx->r25, ctx->r9);
    // 0x80264F0C: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x80264F10: addu        $v0, $v0, $t2
    ctx->r2 = ADD32(ctx->r2, ctx->r10);
    // 0x80264F14: lhu         $v0, -0x3330($v0)
    ctx->r2 = MEM_HU(ctx->r2, -0X3330);
    // 0x80264F18: lw          $t3, 0x3B20($t3)
    ctx->r11 = MEM_W(ctx->r11, 0X3B20);
    // 0x80264F1C: sll         $v1, $v0, 2
    ctx->r3 = S32(ctx->r2 << 2);
    // 0x80264F20: lhu         $t4, 0xC2($t3)
    ctx->r12 = MEM_HU(ctx->r11, 0XC2);
    // 0x80264F24: addu        $s3, $s3, $v1
    ctx->r19 = ADD32(ctx->r19, ctx->r3);
    // 0x80264F28: lw          $s3, -0x3228($s3)
    ctx->r19 = MEM_W(ctx->r19, -0X3228);
    // 0x80264F2C: andi        $t5, $t4, 0x10
    ctx->r13 = ctx->r12 & 0X10;
    // 0x80264F30: beq         $t5, $zero, L_80264F48
    if (ctx->r13 == 0) {
        // 0x80264F34: or          $s5, $s3, $zero
        ctx->r21 = ctx->r19 | 0;
            goto L_80264F48;
    }
    // 0x80264F34: or          $s5, $s3, $zero
    ctx->r21 = ctx->r19 | 0;
    // 0x80264F38: lui         $s3, 0x800B
    ctx->r19 = S32(0X800B << 16);
    // 0x80264F3C: addu        $s3, $s3, $v1
    ctx->r19 = ADD32(ctx->r19, ctx->r3);
    // 0x80264F40: lw          $s3, -0x315C($s3)
    ctx->r19 = MEM_W(ctx->r19, -0X315C);
    // 0x80264F44: nop

L_80264F48:
    // 0x80264F48: or          $s4, $zero, $zero
    ctx->r20 = 0 | 0;
    // 0x80264F4C: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    // 0x80264F50: beq         $a3, $zero, L_8026506C
    if (ctx->r7 == 0) {
        // 0x80264F54: or          $s2, $zero, $zero
        ctx->r18 = 0 | 0;
            goto L_8026506C;
    }
    // 0x80264F54: or          $s2, $zero, $zero
    ctx->r18 = 0 | 0;
    // 0x80264F58: addiu       $fp, $zero, 0xA
    ctx->r30 = ADD32(0, 0XA);
L_80264F5C:
    // 0x80264F5C: lbu         $t6, 0x2($s6)
    ctx->r14 = MEM_BU(ctx->r22, 0X2);
    // 0x80264F60: lw          $v1, 0x18($s6)
    ctx->r3 = MEM_W(ctx->r22, 0X18);
    // 0x80264F64: addiu       $at, $zero, 0x5
    ctx->r1 = ADD32(0, 0X5);
    // 0x80264F68: bne         $t6, $at, L_80264F78
    if (ctx->r14 != ctx->r1) {
        // 0x80264F6C: addu        $t7, $s6, $s1
        ctx->r15 = ADD32(ctx->r22, ctx->r17);
            goto L_80264F78;
    }
    // 0x80264F6C: addu        $t7, $s6, $s1
    ctx->r15 = ADD32(ctx->r22, ctx->r17);
    // 0x80264F70: b           L_80264F80
    // 0x80264F74: subu        $v0, $fp, $s2
    ctx->r2 = SUB32(ctx->r30, ctx->r18);
        goto L_80264F80;
    // 0x80264F74: subu        $v0, $fp, $s2
    ctx->r2 = SUB32(ctx->r30, ctx->r18);
L_80264F78:
    // 0x80264F78: lb          $v0, 0x885($t7)
    ctx->r2 = MEM_B(ctx->r15, 0X885);
    // 0x80264F7C: nop

L_80264F80:
    // 0x80264F80: sll         $t8, $v0, 5
    ctx->r24 = S32(ctx->r2 << 5);
    // 0x80264F84: subu        $t8, $t8, $v0
    ctx->r24 = SUB32(ctx->r24, ctx->r2);
    // 0x80264F88: sll         $t8, $t8, 3
    ctx->r24 = S32(ctx->r24 << 3);
    // 0x80264F8C: addu        $s0, $v1, $t8
    ctx->r16 = ADD32(ctx->r3, ctx->r24);
    // 0x80264F90: lhu         $t0, 0xC($s0)
    ctx->r8 = MEM_HU(ctx->r16, 0XC);
    // 0x80264F94: lui         $t9, 0x8012
    ctx->r25 = S32(0X8012 << 16);
    // 0x80264F98: beq         $t0, $zero, L_80265054
    if (ctx->r8 == 0) {
        // 0x80264F9C: sltu        $at, $s4, $a3
        ctx->r1 = ctx->r20 < ctx->r7 ? 1 : 0;
            goto L_80265054;
    }
    // 0x80264F9C: sltu        $at, $s4, $a3
    ctx->r1 = ctx->r20 < ctx->r7 ? 1 : 0;
    // 0x80264FA0: lw          $t9, 0xB2C($t9)
    ctx->r25 = MEM_W(ctx->r25, 0XB2C);
    // 0x80264FA4: lui         $t1, 0x8012
    ctx->r9 = S32(0X8012 << 16);
    // 0x80264FA8: beq         $s0, $t9, L_80265054
    if (ctx->r16 == ctx->r25) {
        // 0x80264FAC: sltu        $at, $s4, $a3
        ctx->r1 = ctx->r20 < ctx->r7 ? 1 : 0;
            goto L_80265054;
    }
    // 0x80264FAC: sltu        $at, $s4, $a3
    ctx->r1 = ctx->r20 < ctx->r7 ? 1 : 0;
    // 0x80264FB0: lw          $t1, 0xB44($t1)
    ctx->r9 = MEM_W(ctx->r9, 0XB44);
    // 0x80264FB4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80264FB8: sltiu       $at, $t1, 0x51
    ctx->r1 = ctx->r9 < 0X51 ? 1 : 0;
    // 0x80264FBC: bne         $at, $zero, L_80264FE0
    if (ctx->r1 != 0) {
        // 0x80264FC0: or          $a1, $s3, $zero
        ctx->r5 = ctx->r19 | 0;
            goto L_80264FE0;
    }
    // 0x80264FC0: or          $a1, $s3, $zero
    ctx->r5 = ctx->r19 | 0;
    // 0x80264FC4: lhu         $t2, 0x12($s0)
    ctx->r10 = MEM_HU(ctx->r16, 0X12);
    // 0x80264FC8: addiu       $t4, $zero, 0x12
    ctx->r12 = ADD32(0, 0X12);
    // 0x80264FCC: andi        $t3, $t2, 0x300
    ctx->r11 = ctx->r10 & 0X300;
    // 0x80264FD0: bne         $t3, $zero, L_80265010
    if (ctx->r11 != 0) {
        // 0x80264FD4: nop
    
            goto L_80265010;
    }
    // 0x80264FD4: nop

    // 0x80264FD8: b           L_80265010
    // 0x80264FDC: sb          $t4, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r12;
        goto L_80265010;
    // 0x80264FDC: sb          $t4, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r12;
L_80264FE0:
    // 0x80264FE0: lbu         $t5, 0x0($s3)
    ctx->r13 = MEM_BU(ctx->r19, 0X0);
    // 0x80264FE4: lbu         $t6, 0x0($s5)
    ctx->r14 = MEM_BU(ctx->r21, 0X0);
    // 0x80264FE8: addiu       $v0, $zero, 0x28
    ctx->r2 = ADD32(0, 0X28);
    // 0x80264FEC: bne         $t5, $t6, L_80264FFC
    if (ctx->r13 != ctx->r14) {
        // 0x80264FF0: nop
    
            goto L_80264FFC;
    }
    // 0x80264FF0: nop

    // 0x80264FF4: b           L_80264FFC
    // 0x80264FF8: addiu       $v0, $zero, 0x29
    ctx->r2 = ADD32(0, 0X29);
        goto L_80264FFC;
    // 0x80264FF8: addiu       $v0, $zero, 0x29
    ctx->r2 = ADD32(0, 0X29);
L_80264FFC:
    // 0x80264FFC: andi        $a2, $v0, 0xFFFF
    ctx->r6 = ctx->r2 & 0XFFFF;
    // 0x80265000: jal         0x80264520
    // 0x80265004: sw          $a3, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r7;
    ovl_8024B800_func_80264520(rdram, ctx);
        goto after_0;
    // 0x80265004: sw          $a3, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r7;
    after_0:
    // 0x80265008: lw          $a3, 0x44($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X44);
    // 0x8026500C: nop

L_80265010:
    // 0x80265010: lw          $t7, 0xD4($s0)
    ctx->r15 = MEM_W(ctx->r16, 0XD4);
    // 0x80265014: lui         $t9, 0x8028
    ctx->r25 = S32(0X8028 << 16);
    // 0x80265018: lbu         $t8, 0x5($t7)
    ctx->r24 = MEM_BU(ctx->r15, 0X5);
    // 0x8026501C: addiu       $s4, $s4, 0x1
    ctx->r20 = ADD32(ctx->r20, 0X1);
    // 0x80265020: sll         $t0, $t8, 1
    ctx->r8 = S32(ctx->r24 << 1);
    // 0x80265024: addu        $t9, $t9, $t0
    ctx->r25 = ADD32(ctx->r25, ctx->r8);
    // 0x80265028: lhu         $t9, -0x3678($t9)
    ctx->r25 = MEM_HU(ctx->r25, -0X3678);
    // 0x8026502C: addiu       $s3, $s3, 0x3
    ctx->r19 = ADD32(ctx->r19, 0X3);
    // 0x80265030: andi        $t1, $t9, 0xE
    ctx->r9 = ctx->r25 & 0XE;
    // 0x80265034: beq         $t1, $zero, L_80265040
    if (ctx->r9 == 0) {
        // 0x80265038: nop
    
            goto L_80265040;
    }
    // 0x80265038: nop

    // 0x8026503C: addiu       $s7, $s7, 0x1
    ctx->r23 = ADD32(ctx->r23, 0X1);
L_80265040:
    // 0x80265040: lhu         $t2, 0x20($s0)
    ctx->r10 = MEM_HU(ctx->r16, 0X20);
    // 0x80265044: addiu       $s5, $s5, 0x3
    ctx->r21 = ADD32(ctx->r21, 0X3);
    // 0x80265048: ori         $t3, $t2, 0x8
    ctx->r11 = ctx->r10 | 0X8;
    // 0x8026504C: sh          $t3, 0x20($s0)
    MEM_H(0X20, ctx->r16) = ctx->r11;
    // 0x80265050: sltu        $at, $s4, $a3
    ctx->r1 = ctx->r20 < ctx->r7 ? 1 : 0;
L_80265054:
    // 0x80265054: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
    // 0x80265058: beq         $at, $zero, L_8026506C
    if (ctx->r1 == 0) {
        // 0x8026505C: addiu       $s1, $s1, 0x1
        ctx->r17 = ADD32(ctx->r17, 0X1);
            goto L_8026506C;
    }
    // 0x8026505C: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x80265060: addiu       $at, $zero, 0xB
    ctx->r1 = ADD32(0, 0XB);
    // 0x80265064: bne         $s2, $at, L_80264F5C
    if (ctx->r18 != ctx->r1) {
        // 0x80265068: nop
    
            goto L_80264F5C;
    }
    // 0x80265068: nop

L_8026506C:
    // 0x8026506C: beq         $s7, $zero, L_80265084
    if (ctx->r23 == 0) {
        // 0x80265070: or          $a0, $s6, $zero
        ctx->r4 = ctx->r22 | 0;
            goto L_80265084;
    }
    // 0x80265070: or          $a0, $s6, $zero
    ctx->r4 = ctx->r22 | 0;
    // 0x80265074: sll         $a1, $s7, 16
    ctx->r5 = S32(ctx->r23 << 16);
    // 0x80265078: sra         $t4, $a1, 16
    ctx->r12 = S32(SIGNED(ctx->r5) >> 16);
    // 0x8026507C: jal         0x80264940
    // 0x80265080: or          $a1, $t4, $zero
    ctx->r5 = ctx->r12 | 0;
    ovl_8024B800_func_80264940(rdram, ctx);
        goto after_1;
    // 0x80265080: or          $a1, $t4, $zero
    ctx->r5 = ctx->r12 | 0;
    after_1:
L_80265084:
    // 0x80265084: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    // 0x80265088: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8026508C: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x80265090: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x80265094: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x80265098: lw          $s4, 0x28($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X28);
    // 0x8026509C: lw          $s5, 0x2C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X2C);
    // 0x802650A0: lw          $s6, 0x30($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X30);
    // 0x802650A4: lw          $s7, 0x34($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X34);
    // 0x802650A8: lw          $fp, 0x38($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X38);
    // 0x802650AC: jr          $ra
    // 0x802650B0: addiu       $sp, $sp, 0x68
    ctx->r29 = ADD32(ctx->r29, 0X68);
    return;
    // 0x802650B0: addiu       $sp, $sp, 0x68
    ctx->r29 = ADD32(ctx->r29, 0X68);
;}
RECOMP_FUNC void ovl_8024B800_func_802650B4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802650B4: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x802650B8: addiu       $t6, $zero, 0xA
    ctx->r14 = ADD32(0, 0XA);
    // 0x802650BC: lui         $at, 0x8028
    ctx->r1 = S32(0X8028 << 16);
    // 0x802650C0: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x802650C4: sw          $fp, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r30;
    // 0x802650C8: sw          $s7, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r23;
    // 0x802650CC: sw          $s6, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r22;
    // 0x802650D0: sw          $s5, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r21;
    // 0x802650D4: sw          $s4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r20;
    // 0x802650D8: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x802650DC: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x802650E0: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x802650E4: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x802650E8: sh          $t6, -0x1B28($at)
    MEM_H(-0X1B28, ctx->r1) = ctx->r14;
    // 0x802650EC: lbu         $v0, 0x2($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X2);
    // 0x802650F0: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x802650F4: or          $s4, $a0, $zero
    ctx->r20 = ctx->r4 | 0;
    // 0x802650F8: addiu       $s6, $zero, 0x6
    ctx->r22 = ADD32(0, 0X6);
    // 0x802650FC: bne         $a1, $v0, L_80265108
    if (ctx->r5 != ctx->r2) {
        // 0x80265100: addiu       $s7, $zero, 0x4
        ctx->r23 = ADD32(0, 0X4);
            goto L_80265108;
    }
    // 0x80265100: addiu       $s7, $zero, 0x4
    ctx->r23 = ADD32(0, 0X4);
    // 0x80265104: addiu       $s6, $zero, 0x5
    ctx->r22 = ADD32(0, 0X5);
L_80265108:
    // 0x80265108: addiu       $fp, $zero, 0x5
    ctx->r30 = ADD32(0, 0X5);
    // 0x8026510C: bne         $fp, $v0, L_80265118
    if (ctx->r30 != ctx->r2) {
        // 0x80265110: or          $s2, $zero, $zero
        ctx->r18 = 0 | 0;
            goto L_80265118;
    }
    // 0x80265110: or          $s2, $zero, $zero
    ctx->r18 = 0 | 0;
    // 0x80265114: addiu       $s6, $zero, 0x7
    ctx->r22 = ADD32(0, 0X7);
L_80265118:
    // 0x80265118: lw          $v1, 0x24($s4)
    ctx->r3 = MEM_W(ctx->r20, 0X24);
    // 0x8026511C: addiu       $s5, $zero, 0xC
    ctx->r21 = ADD32(0, 0XC);
    // 0x80265120: lbu         $v0, 0x2($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X2);
    // 0x80265124: nop

    // 0x80265128: bne         $a1, $v0, L_80265134
    if (ctx->r5 != ctx->r2) {
        // 0x8026512C: nop
    
            goto L_80265134;
    }
    // 0x8026512C: nop

    // 0x80265130: addiu       $s7, $zero, 0x5
    ctx->r23 = ADD32(0, 0X5);
L_80265134:
    // 0x80265134: bne         $fp, $v0, L_80265140
    if (ctx->r30 != ctx->r2) {
        // 0x80265138: nop
    
            goto L_80265140;
    }
    // 0x80265138: nop

    // 0x8026513C: addiu       $s7, $zero, 0x2
    ctx->r23 = ADD32(0, 0X2);
L_80265140:
    // 0x80265140: lbu         $t7, 0x0($v1)
    ctx->r15 = MEM_BU(ctx->r3, 0X0);
    // 0x80265144: lbu         $t9, 0x3($s4)
    ctx->r25 = MEM_BU(ctx->r20, 0X3);
    // 0x80265148: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x8026514C: subu        $t8, $t8, $t7
    ctx->r24 = SUB32(ctx->r24, ctx->r15);
    // 0x80265150: sll         $t8, $t8, 1
    ctx->r24 = S32(ctx->r24 << 1);
    // 0x80265154: sll         $t0, $t9, 1
    ctx->r8 = S32(ctx->r25 << 1);
    // 0x80265158: addu        $t1, $t8, $t0
    ctx->r9 = ADD32(ctx->r24, ctx->r8);
    // 0x8026515C: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x80265160: addu        $v0, $v0, $t1
    ctx->r2 = ADD32(ctx->r2, ctx->r9);
    // 0x80265164: lhu         $v0, -0x3330($v0)
    ctx->r2 = MEM_HU(ctx->r2, -0X3330);
    // 0x80265168: lui         $s1, 0x800B
    ctx->r17 = S32(0X800B << 16);
    // 0x8026516C: sll         $t2, $v0, 2
    ctx->r10 = S32(ctx->r2 << 2);
    // 0x80265170: addu        $s1, $s1, $t2
    ctx->r17 = ADD32(ctx->r17, ctx->r10);
    // 0x80265174: lw          $s1, -0x3090($s1)
    ctx->r17 = MEM_W(ctx->r17, -0X3090);
    // 0x80265178: beq         $s6, $zero, L_80265208
    if (ctx->r22 == 0) {
        // 0x8026517C: or          $s3, $zero, $zero
        ctx->r19 = 0 | 0;
            goto L_80265208;
    }
    // 0x8026517C: or          $s3, $zero, $zero
    ctx->r19 = 0 | 0;
L_80265180:
    // 0x80265180: lw          $t3, 0x18($s4)
    ctx->r11 = MEM_W(ctx->r20, 0X18);
    // 0x80265184: lbu         $v0, 0x3($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X3);
    // 0x80265188: addu        $s0, $t3, $s2
    ctx->r16 = ADD32(ctx->r11, ctx->r18);
    // 0x8026518C: sltu        $at, $v0, $s7
    ctx->r1 = ctx->r2 < ctx->r23 ? 1 : 0;
    // 0x80265190: beq         $at, $zero, L_802651CC
    if (ctx->r1 == 0) {
        // 0x80265194: addiu       $s0, $s0, 0xF8
        ctx->r16 = ADD32(ctx->r16, 0XF8);
            goto L_802651CC;
    }
    // 0x80265194: addiu       $s0, $s0, 0xF8
    ctx->r16 = ADD32(ctx->r16, 0XF8);
    // 0x80265198: lw          $v1, 0x24($s4)
    ctx->r3 = MEM_W(ctx->r20, 0X24);
    // 0x8026519C: nop

    // 0x802651A0: lbu         $t4, 0x2($v1)
    ctx->r12 = MEM_BU(ctx->r3, 0X2);
    // 0x802651A4: addu        $t5, $v1, $v0
    ctx->r13 = ADD32(ctx->r3, ctx->r2);
    // 0x802651A8: bne         $fp, $t4, L_802651C0
    if (ctx->r30 != ctx->r12) {
        // 0x802651AC: nop
    
            goto L_802651C0;
    }
    // 0x802651AC: nop

    // 0x802651B0: jal         0x80264E0C
    // 0x802651B4: or          $a0, $s4, $zero
    ctx->r4 = ctx->r20 | 0;
    ovl_8024B800_func_80264E0C(rdram, ctx);
        goto after_0;
    // 0x802651B4: or          $a0, $s4, $zero
    ctx->r4 = ctx->r20 | 0;
    after_0:
    // 0x802651B8: b           L_802651D0
    // 0x802651BC: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
        goto L_802651D0;
    // 0x802651BC: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
L_802651C0:
    // 0x802651C0: lb          $t6, 0x885($t5)
    ctx->r14 = MEM_B(ctx->r13, 0X885);
    // 0x802651C4: b           L_802651D0
    // 0x802651C8: sb          $t6, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r14;
        goto L_802651D0;
    // 0x802651C8: sb          $t6, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r14;
L_802651CC:
    // 0x802651CC: sb          $s5, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r21;
L_802651D0:
    // 0x802651D0: lbu         $t7, 0xA($s0)
    ctx->r15 = MEM_BU(ctx->r16, 0XA);
    // 0x802651D4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802651D8: slti        $at, $t7, 0xB
    ctx->r1 = SIGNED(ctx->r15) < 0XB ? 1 : 0;
    // 0x802651DC: beq         $at, $zero, L_802651EC
    if (ctx->r1 == 0) {
        // 0x802651E0: or          $a1, $s1, $zero
        ctx->r5 = ctx->r17 | 0;
            goto L_802651EC;
    }
    // 0x802651E0: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    // 0x802651E4: b           L_802651F0
    // 0x802651E8: addiu       $v0, $zero, 0x1F
    ctx->r2 = ADD32(0, 0X1F);
        goto L_802651F0;
    // 0x802651E8: addiu       $v0, $zero, 0x1F
    ctx->r2 = ADD32(0, 0X1F);
L_802651EC:
    // 0x802651EC: addiu       $v0, $zero, 0x29
    ctx->r2 = ADD32(0, 0X29);
L_802651F0:
    // 0x802651F0: jal         0x80264520
    // 0x802651F4: andi        $a2, $v0, 0xFFFF
    ctx->r6 = ctx->r2 & 0XFFFF;
    ovl_8024B800_func_80264520(rdram, ctx);
        goto after_1;
    // 0x802651F4: andi        $a2, $v0, 0xFFFF
    ctx->r6 = ctx->r2 & 0XFFFF;
    after_1:
    // 0x802651F8: addiu       $s3, $s3, 0x1
    ctx->r19 = ADD32(ctx->r19, 0X1);
    // 0x802651FC: addiu       $s2, $s2, 0xF8
    ctx->r18 = ADD32(ctx->r18, 0XF8);
    // 0x80265200: bne         $s3, $s6, L_80265180
    if (ctx->r19 != ctx->r22) {
        // 0x80265204: addiu       $s1, $s1, 0x4
        ctx->r17 = ADD32(ctx->r17, 0X4);
            goto L_80265180;
    }
    // 0x80265204: addiu       $s1, $s1, 0x4
    ctx->r17 = ADD32(ctx->r17, 0X4);
L_80265208:
    // 0x80265208: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    // 0x8026520C: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80265210: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x80265214: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x80265218: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x8026521C: lw          $s4, 0x28($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X28);
    // 0x80265220: lw          $s5, 0x2C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X2C);
    // 0x80265224: lw          $s6, 0x30($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X30);
    // 0x80265228: lw          $s7, 0x34($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X34);
    // 0x8026522C: lw          $fp, 0x38($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X38);
    // 0x80265230: jr          $ra
    // 0x80265234: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    return;
    // 0x80265234: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
RECOMP_FUNC void ovl_8024B800_func_80265238(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80265238: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x8026523C: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x80265240: sw          $fp, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r30;
    // 0x80265244: sw          $s7, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r23;
    // 0x80265248: sw          $s6, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r22;
    // 0x8026524C: sw          $s5, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r21;
    // 0x80265250: sw          $s4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r20;
    // 0x80265254: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x80265258: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x8026525C: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x80265260: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80265264: lw          $s0, 0x18($a0)
    ctx->r16 = MEM_W(ctx->r4, 0X18);
    // 0x80265268: or          $s5, $a0, $zero
    ctx->r21 = ctx->r4 | 0;
    // 0x8026526C: addiu       $fp, $zero, 0x4
    ctx->r30 = ADD32(0, 0X4);
    // 0x80265270: or          $s7, $zero, $zero
    ctx->r23 = 0 | 0;
    // 0x80265274: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
L_80265278:
    // 0x80265278: lhu         $t6, 0x20($s0)
    ctx->r14 = MEM_HU(ctx->r16, 0X20);
    // 0x8026527C: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x80265280: sltiu       $at, $s1, 0xB
    ctx->r1 = ctx->r17 < 0XB ? 1 : 0;
    // 0x80265284: andi        $t7, $t6, 0xFFE7
    ctx->r15 = ctx->r14 & 0XFFE7;
    // 0x80265288: addiu       $s0, $s0, 0xF8
    ctx->r16 = ADD32(ctx->r16, 0XF8);
    // 0x8026528C: bne         $at, $zero, L_80265278
    if (ctx->r1 != 0) {
        // 0x80265290: sh          $t7, -0xD8($s0)
        MEM_H(-0XD8, ctx->r16) = ctx->r15;
            goto L_80265278;
    }
    // 0x80265290: sh          $t7, -0xD8($s0)
    MEM_H(-0XD8, ctx->r16) = ctx->r15;
    // 0x80265294: lbu         $v0, 0x2($s5)
    ctx->r2 = MEM_BU(ctx->r21, 0X2);
    // 0x80265298: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8026529C: bne         $v0, $at, L_802652AC
    if (ctx->r2 != ctx->r1) {
        // 0x802652A0: addiu       $at, $zero, 0x5
        ctx->r1 = ADD32(0, 0X5);
            goto L_802652AC;
    }
    // 0x802652A0: addiu       $at, $zero, 0x5
    ctx->r1 = ADD32(0, 0X5);
    // 0x802652A4: addiu       $fp, $zero, 0x5
    ctx->r30 = ADD32(0, 0X5);
    // 0x802652A8: addiu       $at, $zero, 0x5
    ctx->r1 = ADD32(0, 0X5);
L_802652AC:
    // 0x802652AC: bne         $v0, $at, L_802652B8
    if (ctx->r2 != ctx->r1) {
        // 0x802652B0: nop
    
            goto L_802652B8;
    }
    // 0x802652B0: nop

    // 0x802652B4: addiu       $fp, $zero, 0x2
    ctx->r30 = ADD32(0, 0X2);
L_802652B8:
    // 0x802652B8: lw          $t8, 0x24($s5)
    ctx->r24 = MEM_W(ctx->r21, 0X24);
    // 0x802652BC: nop

    // 0x802652C0: lh          $t9, 0x8B8($t8)
    ctx->r25 = MEM_H(ctx->r24, 0X8B8);
    // 0x802652C4: nop

    // 0x802652C8: mtc1        $t9, $f4
    ctx->f4.u32l = ctx->r25;
    // 0x802652CC: jal         0x802645E0
    // 0x802652D0: cvt.s.w     $f12, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    ctx->f12.fl = CVT_S_W(ctx->f4.u32l);
    ovl_8024B800_func_802645E0(rdram, ctx);
        goto after_0;
    // 0x802652D0: cvt.s.w     $f12, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    ctx->f12.fl = CVT_S_W(ctx->f4.u32l);
    after_0:
    // 0x802652D4: lui         $t0, 0x8009
    ctx->r8 = S32(0X8009 << 16);
    // 0x802652D8: lw          $t0, 0x3B20($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X3B20);
    // 0x802652DC: sll         $v1, $v0, 2
    ctx->r3 = S32(ctx->r2 << 2);
    // 0x802652E0: lui         $s2, 0x800B
    ctx->r18 = S32(0X800B << 16);
    // 0x802652E4: lhu         $t1, 0xC2($t0)
    ctx->r9 = MEM_HU(ctx->r8, 0XC2);
    // 0x802652E8: addu        $s2, $s2, $v1
    ctx->r18 = ADD32(ctx->r18, ctx->r3);
    // 0x802652EC: lw          $s2, -0x3F6C($s2)
    ctx->r18 = MEM_W(ctx->r18, -0X3F6C);
    // 0x802652F0: andi        $t2, $t1, 0x10
    ctx->r10 = ctx->r9 & 0X10;
    // 0x802652F4: beq         $t2, $zero, L_8026530C
    if (ctx->r10 == 0) {
        // 0x802652F8: or          $s6, $s2, $zero
        ctx->r22 = ctx->r18 | 0;
            goto L_8026530C;
    }
    // 0x802652F8: or          $s6, $s2, $zero
    ctx->r22 = ctx->r18 | 0;
    // 0x802652FC: lui         $s2, 0x800B
    ctx->r18 = S32(0X800B << 16);
    // 0x80265300: addu        $s2, $s2, $v1
    ctx->r18 = ADD32(ctx->r18, ctx->r3);
    // 0x80265304: lw          $s2, -0x3F54($s2)
    ctx->r18 = MEM_W(ctx->r18, -0X3F54);
    // 0x80265308: nop

L_8026530C:
    // 0x8026530C: or          $s3, $zero, $zero
    ctx->r19 = 0 | 0;
    // 0x80265310: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    // 0x80265314: beq         $fp, $zero, L_80265438
    if (ctx->r30 == 0) {
        // 0x80265318: or          $s4, $zero, $zero
        ctx->r20 = 0 | 0;
            goto L_80265438;
    }
    // 0x80265318: or          $s4, $zero, $zero
    ctx->r20 = 0 | 0;
L_8026531C:
    // 0x8026531C: lbu         $t3, 0x2($s5)
    ctx->r11 = MEM_BU(ctx->r21, 0X2);
    // 0x80265320: lw          $v1, 0x18($s5)
    ctx->r3 = MEM_W(ctx->r21, 0X18);
    // 0x80265324: addiu       $at, $zero, 0x5
    ctx->r1 = ADD32(0, 0X5);
    // 0x80265328: bne         $t3, $at, L_8026533C
    if (ctx->r11 != ctx->r1) {
        // 0x8026532C: addu        $t5, $s5, $s1
        ctx->r13 = ADD32(ctx->r21, ctx->r17);
            goto L_8026533C;
    }
    // 0x8026532C: addu        $t5, $s5, $s1
    ctx->r13 = ADD32(ctx->r21, ctx->r17);
    // 0x80265330: addiu       $t4, $zero, 0xA
    ctx->r12 = ADD32(0, 0XA);
    // 0x80265334: b           L_80265344
    // 0x80265338: subu        $v0, $t4, $s1
    ctx->r2 = SUB32(ctx->r12, ctx->r17);
        goto L_80265344;
    // 0x80265338: subu        $v0, $t4, $s1
    ctx->r2 = SUB32(ctx->r12, ctx->r17);
L_8026533C:
    // 0x8026533C: lb          $v0, 0x88E($t5)
    ctx->r2 = MEM_B(ctx->r13, 0X88E);
    // 0x80265340: nop

L_80265344:
    // 0x80265344: sll         $t6, $v0, 5
    ctx->r14 = S32(ctx->r2 << 5);
    // 0x80265348: subu        $t6, $t6, $v0
    ctx->r14 = SUB32(ctx->r14, ctx->r2);
    // 0x8026534C: sll         $t6, $t6, 3
    ctx->r14 = S32(ctx->r14 << 3);
    // 0x80265350: addu        $s0, $v1, $t6
    ctx->r16 = ADD32(ctx->r3, ctx->r14);
    // 0x80265354: lhu         $t7, 0xC($s0)
    ctx->r15 = MEM_HU(ctx->r16, 0XC);
    // 0x80265358: lui         $t8, 0x8012
    ctx->r24 = S32(0X8012 << 16);
    // 0x8026535C: beq         $t7, $zero, L_80265420
    if (ctx->r15 == 0) {
        // 0x80265360: sltu        $at, $s3, $fp
        ctx->r1 = ctx->r19 < ctx->r30 ? 1 : 0;
            goto L_80265420;
    }
    // 0x80265360: sltu        $at, $s3, $fp
    ctx->r1 = ctx->r19 < ctx->r30 ? 1 : 0;
    // 0x80265364: lw          $t8, 0xB2C($t8)
    ctx->r24 = MEM_W(ctx->r24, 0XB2C);
    // 0x80265368: lui         $t9, 0x8012
    ctx->r25 = S32(0X8012 << 16);
    // 0x8026536C: beq         $s0, $t8, L_80265420
    if (ctx->r16 == ctx->r24) {
        // 0x80265370: sltu        $at, $s3, $fp
        ctx->r1 = ctx->r19 < ctx->r30 ? 1 : 0;
            goto L_80265420;
    }
    // 0x80265370: sltu        $at, $s3, $fp
    ctx->r1 = ctx->r19 < ctx->r30 ? 1 : 0;
    // 0x80265374: lw          $t9, 0xB44($t9)
    ctx->r25 = MEM_W(ctx->r25, 0XB44);
    // 0x80265378: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8026537C: sltiu       $at, $t9, 0x51
    ctx->r1 = ctx->r25 < 0X51 ? 1 : 0;
    // 0x80265380: bne         $at, $zero, L_802653A4
    if (ctx->r1 != 0) {
        // 0x80265384: or          $a1, $s2, $zero
        ctx->r5 = ctx->r18 | 0;
            goto L_802653A4;
    }
    // 0x80265384: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    // 0x80265388: lhu         $t0, 0x12($s0)
    ctx->r8 = MEM_HU(ctx->r16, 0X12);
    // 0x8026538C: addiu       $t2, $zero, 0x12
    ctx->r10 = ADD32(0, 0X12);
    // 0x80265390: andi        $t1, $t0, 0x300
    ctx->r9 = ctx->r8 & 0X300;
    // 0x80265394: bne         $t1, $zero, L_802653DC
    if (ctx->r9 != 0) {
        // 0x80265398: nop
    
            goto L_802653DC;
    }
    // 0x80265398: nop

    // 0x8026539C: b           L_802653DC
    // 0x802653A0: sb          $t2, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r10;
        goto L_802653DC;
    // 0x802653A0: sb          $t2, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r10;
L_802653A4:
    // 0x802653A4: lbu         $t3, 0x0($s2)
    ctx->r11 = MEM_BU(ctx->r18, 0X0);
    // 0x802653A8: lbu         $t4, 0x0($s6)
    ctx->r12 = MEM_BU(ctx->r22, 0X0);
    // 0x802653AC: addiu       $v0, $zero, 0x28
    ctx->r2 = ADD32(0, 0X28);
    // 0x802653B0: bne         $t3, $t4, L_802653C0
    if (ctx->r11 != ctx->r12) {
        // 0x802653B4: nop
    
            goto L_802653C0;
    }
    // 0x802653B4: nop

    // 0x802653B8: b           L_802653C0
    // 0x802653BC: addiu       $v0, $zero, 0x29
    ctx->r2 = ADD32(0, 0X29);
        goto L_802653C0;
    // 0x802653BC: addiu       $v0, $zero, 0x29
    ctx->r2 = ADD32(0, 0X29);
L_802653C0:
    // 0x802653C0: jal         0x80264520
    // 0x802653C4: andi        $a2, $v0, 0xFFFF
    ctx->r6 = ctx->r2 & 0XFFFF;
    ovl_8024B800_func_80264520(rdram, ctx);
        goto after_1;
    // 0x802653C4: andi        $a2, $v0, 0xFFFF
    ctx->r6 = ctx->r2 & 0XFFFF;
    after_1:
    // 0x802653C8: lw          $t5, 0x24($s5)
    ctx->r13 = MEM_W(ctx->r21, 0X24);
    // 0x802653CC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802653D0: lh          $a1, 0x8B8($t5)
    ctx->r5 = MEM_H(ctx->r13, 0X8B8);
    // 0x802653D4: jal         0x80264710
    // 0x802653D8: nop

    ovl_8024B800_func_80264710(rdram, ctx);
        goto after_2;
    // 0x802653D8: nop

    after_2:
L_802653DC:
    // 0x802653DC: lw          $t6, 0xD4($s0)
    ctx->r14 = MEM_W(ctx->r16, 0XD4);
    // 0x802653E0: lui         $t9, 0x8028
    ctx->r25 = S32(0X8028 << 16);
    // 0x802653E4: lbu         $t7, 0x5($t6)
    ctx->r15 = MEM_BU(ctx->r14, 0X5);
    // 0x802653E8: addiu       $s3, $s3, 0x1
    ctx->r19 = ADD32(ctx->r19, 0X1);
    // 0x802653EC: sll         $t8, $t7, 1
    ctx->r24 = S32(ctx->r15 << 1);
    // 0x802653F0: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x802653F4: lhu         $t9, -0x3678($t9)
    ctx->r25 = MEM_HU(ctx->r25, -0X3678);
    // 0x802653F8: addiu       $s2, $s2, 0x3
    ctx->r18 = ADD32(ctx->r18, 0X3);
    // 0x802653FC: andi        $t0, $t9, 0xE
    ctx->r8 = ctx->r25 & 0XE;
    // 0x80265400: beq         $t0, $zero, L_8026540C
    if (ctx->r8 == 0) {
        // 0x80265404: nop
    
            goto L_8026540C;
    }
    // 0x80265404: nop

    // 0x80265408: addiu       $s7, $s7, 0x1
    ctx->r23 = ADD32(ctx->r23, 0X1);
L_8026540C:
    // 0x8026540C: lhu         $t1, 0x20($s0)
    ctx->r9 = MEM_HU(ctx->r16, 0X20);
    // 0x80265410: addiu       $s6, $s6, 0x3
    ctx->r22 = ADD32(ctx->r22, 0X3);
    // 0x80265414: ori         $t2, $t1, 0x8
    ctx->r10 = ctx->r9 | 0X8;
    // 0x80265418: sh          $t2, 0x20($s0)
    MEM_H(0X20, ctx->r16) = ctx->r10;
    // 0x8026541C: sltu        $at, $s3, $fp
    ctx->r1 = ctx->r19 < ctx->r30 ? 1 : 0;
L_80265420:
    // 0x80265420: addiu       $s4, $s4, 0x1
    ctx->r20 = ADD32(ctx->r20, 0X1);
    // 0x80265424: beq         $at, $zero, L_80265438
    if (ctx->r1 == 0) {
        // 0x80265428: addiu       $s1, $s1, 0x1
        ctx->r17 = ADD32(ctx->r17, 0X1);
            goto L_80265438;
    }
    // 0x80265428: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x8026542C: addiu       $at, $zero, 0xB
    ctx->r1 = ADD32(0, 0XB);
    // 0x80265430: bne         $s4, $at, L_8026531C
    if (ctx->r20 != ctx->r1) {
        // 0x80265434: nop
    
            goto L_8026531C;
    }
    // 0x80265434: nop

L_80265438:
    // 0x80265438: beq         $s7, $zero, L_80265450
    if (ctx->r23 == 0) {
        // 0x8026543C: or          $a0, $s5, $zero
        ctx->r4 = ctx->r21 | 0;
            goto L_80265450;
    }
    // 0x8026543C: or          $a0, $s5, $zero
    ctx->r4 = ctx->r21 | 0;
    // 0x80265440: sll         $a1, $s7, 16
    ctx->r5 = S32(ctx->r23 << 16);
    // 0x80265444: sra         $t3, $a1, 16
    ctx->r11 = S32(SIGNED(ctx->r5) >> 16);
    // 0x80265448: jal         0x80264940
    // 0x8026544C: or          $a1, $t3, $zero
    ctx->r5 = ctx->r11 | 0;
    ovl_8024B800_func_80264940(rdram, ctx);
        goto after_3;
    // 0x8026544C: or          $a1, $t3, $zero
    ctx->r5 = ctx->r11 | 0;
    after_3:
L_80265450:
    // 0x80265450: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    // 0x80265454: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80265458: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x8026545C: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x80265460: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x80265464: lw          $s4, 0x28($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X28);
    // 0x80265468: lw          $s5, 0x2C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X2C);
    // 0x8026546C: lw          $s6, 0x30($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X30);
    // 0x80265470: lw          $s7, 0x34($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X34);
    // 0x80265474: lw          $fp, 0x38($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X38);
    // 0x80265478: jr          $ra
    // 0x8026547C: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    return;
    // 0x8026547C: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
RECOMP_FUNC void ovl_8024B800_func_80265480(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80265480: addiu       $sp, $sp, -0xB8
    ctx->r29 = ADD32(ctx->r29, -0XB8);
    // 0x80265484: sw          $ra, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r31;
    // 0x80265488: sw          $s5, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r21;
    // 0x8026548C: sw          $s1, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r17;
    // 0x80265490: sw          $s4, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r20;
    // 0x80265494: sw          $s3, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r19;
    // 0x80265498: sw          $s2, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r18;
    // 0x8026549C: sw          $s0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r16;
    // 0x802654A0: swc1        $f23, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f_odd[(23 - 1) * 2];
    // 0x802654A4: swc1        $f22, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f22.u32l;
    // 0x802654A8: swc1        $f21, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x802654AC: swc1        $f20, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f20.u32l;
    // 0x802654B0: addiu       $t6, $zero, 0x4
    ctx->r14 = ADD32(0, 0X4);
    // 0x802654B4: lui         $s1, 0x8009
    ctx->r17 = S32(0X8009 << 16);
    // 0x802654B8: addiu       $t7, $zero, 0x4
    ctx->r15 = ADD32(0, 0X4);
    // 0x802654BC: sw          $t6, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->r14;
    // 0x802654C0: addiu       $s1, $s1, 0x3B20
    ctx->r17 = ADD32(ctx->r17, 0X3B20);
    // 0x802654C4: addiu       $t8, $zero, 0xA
    ctx->r24 = ADD32(0, 0XA);
    // 0x802654C8: lui         $at, 0x8028
    ctx->r1 = S32(0X8028 << 16);
    // 0x802654CC: sw          $t7, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->r15;
    // 0x802654D0: sh          $t8, -0x1B28($at)
    MEM_H(-0X1B28, ctx->r1) = ctx->r24;
    // 0x802654D4: lw          $s0, 0x0($s1)
    ctx->r16 = MEM_W(ctx->r17, 0X0);
    // 0x802654D8: lh          $t1, 0x8B8($a0)
    ctx->r9 = MEM_H(ctx->r4, 0X8B8);
    // 0x802654DC: lh          $t9, 0xD8($s0)
    ctx->r25 = MEM_H(ctx->r16, 0XD8);
    // 0x802654E0: mtc1        $t1, $f18
    ctx->f18.u32l = ctx->r9;
    // 0x802654E4: mtc1        $t9, $f16
    ctx->f16.u32l = ctx->r25;
    // 0x802654E8: cvt.s.w     $f18, $f18
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    ctx->f18.fl = CVT_S_W(ctx->f18.u32l);
    // 0x802654EC: lh          $t0, 0xDA($s0)
    ctx->r8 = MEM_H(ctx->r16, 0XDA);
    // 0x802654F0: addiu       $t2, $sp, 0x98
    ctx->r10 = ADD32(ctx->r29, 0X98);
    // 0x802654F4: mtc1        $t0, $f10
    ctx->f10.u32l = ctx->r8;
    // 0x802654F8: mfc1        $a2, $f18
    ctx->r6 = (int32_t)ctx->f18.u32l;
    // 0x802654FC: cvt.s.w     $f12, $f16
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 16);
    ctx->f12.fl = CVT_S_W(ctx->f16.u32l);
    // 0x80265500: or          $s5, $a0, $zero
    ctx->r21 = ctx->r4 | 0;
    // 0x80265504: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    // 0x80265508: cvt.s.w     $f14, $f10
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 10);
    ctx->f14.fl = CVT_S_W(ctx->f10.u32l);
    // 0x8026550C: jal         0x80272B1C
    // 0x80265510: sw          $t2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r10;
    ovl_8024B800_func_80272B1C(rdram, ctx);
        goto after_0;
    // 0x80265510: sw          $t2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r10;
    after_0:
    // 0x80265514: lw          $s0, 0x0($s1)
    ctx->r16 = MEM_W(ctx->r17, 0X0);
    // 0x80265518: addiu       $t5, $sp, 0x90
    ctx->r13 = ADD32(ctx->r29, 0X90);
    // 0x8026551C: lh          $v1, 0xDA($s0)
    ctx->r3 = MEM_H(ctx->r16, 0XDA);
    // 0x80265520: nop

    // 0x80265524: blez        $v1, L_80265538
    if (SIGNED(ctx->r3) <= 0) {
        // 0x80265528: addiu       $v0, $zero, -0x26
        ctx->r2 = ADD32(0, -0X26);
            goto L_80265538;
    }
    // 0x80265528: addiu       $v0, $zero, -0x26
    ctx->r2 = ADD32(0, -0X26);
    // 0x8026552C: b           L_80265538
    // 0x80265530: addiu       $v0, $zero, 0x26
    ctx->r2 = ADD32(0, 0X26);
        goto L_80265538;
    // 0x80265530: addiu       $v0, $zero, 0x26
    ctx->r2 = ADD32(0, 0X26);
    // 0x80265534: addiu       $v0, $zero, -0x26
    ctx->r2 = ADD32(0, -0X26);
L_80265538:
    // 0x80265538: lh          $t4, 0x8B8($s5)
    ctx->r12 = MEM_H(ctx->r21, 0X8B8);
    // 0x8026553C: mtc1        $v0, $f4
    ctx->f4.u32l = ctx->r2;
    // 0x80265540: mtc1        $t4, $f18
    ctx->f18.u32l = ctx->r12;
    // 0x80265544: cvt.s.w     $f4, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    ctx->f4.fl = CVT_S_W(ctx->f4.u32l);
    // 0x80265548: lh          $t3, 0xD8($s0)
    ctx->r11 = MEM_H(ctx->r16, 0XD8);
    // 0x8026554C: mtc1        $v1, $f16
    ctx->f16.u32l = ctx->r3;
    // 0x80265550: cvt.s.w     $f18, $f18
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    ctx->f18.fl = CVT_S_W(ctx->f18.u32l);
    // 0x80265554: mtc1        $t3, $f10
    ctx->f10.u32l = ctx->r11;
    // 0x80265558: mfc1        $a3, $f4
    ctx->r7 = (int32_t)ctx->f4.u32l;
    // 0x8026555C: mfc1        $a2, $f18
    ctx->r6 = (int32_t)ctx->f18.u32l;
    // 0x80265560: sw          $t5, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r13;
    // 0x80265564: cvt.s.w     $f14, $f16
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 16);
    ctx->f14.fl = CVT_S_W(ctx->f16.u32l);
    // 0x80265568: jal         0x80272B1C
    // 0x8026556C: cvt.s.w     $f12, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    ctx->f12.fl = CVT_S_W(ctx->f10.u32l);
    ovl_8024B800_func_80272B1C(rdram, ctx);
        goto after_1;
    // 0x8026556C: cvt.s.w     $f12, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    ctx->f12.fl = CVT_S_W(ctx->f10.u32l);
    after_1:
    // 0x80265570: lwc1        $f12, 0x98($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X98);
    // 0x80265574: jal         0x80081040
    // 0x80265578: nop

    func_80081040(rdram, ctx);
        goto after_2;
    // 0x80265578: nop

    after_2:
    // 0x8026557C: lw          $t6, 0x0($s1)
    ctx->r14 = MEM_W(ctx->r17, 0X0);
    // 0x80265580: lui         $at, 0x42C6
    ctx->r1 = S32(0X42C6 << 16);
    // 0x80265584: lh          $t7, 0xD8($t6)
    ctx->r15 = MEM_H(ctx->r14, 0XD8);
    // 0x80265588: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x8026558C: mtc1        $t7, $f10
    ctx->f10.u32l = ctx->r15;
    // 0x80265590: mul.s       $f8, $f0, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f0.fl, ctx->f6.fl);
    // 0x80265594: lwc1        $f12, 0x98($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X98);
    // 0x80265598: cvt.s.w     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.fl = CVT_S_W(ctx->f10.u32l);
    // 0x8026559C: add.s       $f18, $f8, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f8.fl + ctx->f16.fl;
    // 0x802655A0: jal         0x80080E80
    // 0x802655A4: swc1        $f18, 0xB4($sp)
    MEM_W(0XB4, ctx->r29) = ctx->f18.u32l;
    func_80080E80(rdram, ctx);
        goto after_3;
    // 0x802655A4: swc1        $f18, 0xB4($sp)
    MEM_W(0XB4, ctx->r29) = ctx->f18.u32l;
    after_3:
    // 0x802655A8: lw          $t8, 0x0($s1)
    ctx->r24 = MEM_W(ctx->r17, 0X0);
    // 0x802655AC: lui         $at, 0x42C6
    ctx->r1 = S32(0X42C6 << 16);
    // 0x802655B0: lh          $t9, 0xDA($t8)
    ctx->r25 = MEM_H(ctx->r24, 0XDA);
    // 0x802655B4: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x802655B8: mtc1        $t9, $f10
    ctx->f10.u32l = ctx->r25;
    // 0x802655BC: mul.s       $f6, $f0, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f0.fl, ctx->f4.fl);
    // 0x802655C0: lwc1        $f4, 0x90($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X90);
    // 0x802655C4: lwc1        $f18, 0x98($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X98);
    // 0x802655C8: cvt.s.w     $f8, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    ctx->f8.fl = CVT_S_W(ctx->f10.u32l);
    // 0x802655CC: add.s       $f16, $f6, $f8
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f16.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x802655D0: sub.s       $f20, $f18, $f4
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f20.fl = ctx->f18.fl - ctx->f4.fl;
    // 0x802655D4: swc1        $f16, 0xB0($sp)
    MEM_W(0XB0, ctx->r29) = ctx->f16.u32l;
    // 0x802655D8: jal         0x80080E80
    // 0x802655DC: mov.s       $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    ctx->f12.fl = ctx->f20.fl;
    func_80080E80(rdram, ctx);
        goto after_4;
    // 0x802655DC: mov.s       $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    ctx->f12.fl = ctx->f20.fl;
    after_4:
    // 0x802655E0: mov.s       $f22, $f0
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 0);
    ctx->f22.fl = ctx->f0.fl;
    // 0x802655E4: jal         0x80081040
    // 0x802655E8: mov.s       $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    ctx->f12.fl = ctx->f20.fl;
    func_80081040(rdram, ctx);
        goto after_5;
    // 0x802655E8: mov.s       $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    ctx->f12.fl = ctx->f20.fl;
    after_5:
    // 0x802655EC: lui         $at, 0x42C6
    ctx->r1 = S32(0X42C6 << 16);
    // 0x802655F0: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x802655F4: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x802655F8: mul.s       $f6, $f10, $f22
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f6.fl = MUL_S(ctx->f10.fl, ctx->f22.fl);
    // 0x802655FC: lwc1        $f12, 0x98($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X98);
    // 0x80265600: div.s       $f20, $f6, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f20.fl = DIV_S(ctx->f6.fl, ctx->f0.fl);
    // 0x80265604: cvt.d.s     $f4, $f12
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); 
    ctx->f4.d = CVT_D_S(ctx->f12.fl);
    // 0x80265608: c.lt.s      $f8, $f20
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 20);
    c1cs = ctx->f8.fl < ctx->f20.fl;
    // 0x8026560C: cvt.d.s     $f16, $f20
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f20.fl); 
    ctx->f16.d = CVT_D_S(ctx->f20.fl);
    // 0x80265610: bc1f        L_80265628
    if (!c1cs) {
        // 0x80265614: lui         $at, 0x4012
        ctx->r1 = S32(0X4012 << 16);
            goto L_80265628;
    }
    // 0x80265614: lui         $at, 0x4012
    ctx->r1 = S32(0X4012 << 16);
    // 0x80265618: mtc1        $at, $f1
    ctx->f_odd[(1 - 1) * 2] = ctx->r1;
    // 0x8026561C: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x80265620: b           L_80265638
    // 0x80265624: nop

        goto L_80265638;
    // 0x80265624: nop

L_80265628:
    // 0x80265628: lui         $at, 0xC012
    ctx->r1 = S32(0XC012 << 16);
    // 0x8026562C: mtc1        $at, $f1
    ctx->f_odd[(1 - 1) * 2] = ctx->r1;
    // 0x80265630: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x80265634: nop

L_80265638:
    // 0x80265638: lui         $at, 0x8028
    ctx->r1 = S32(0X8028 << 16);
    // 0x8026563C: add.d       $f18, $f16, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f16.d); NAN_CHECK(ctx->f0.d); 
    ctx->f18.d = ctx->f16.d + ctx->f0.d;
    // 0x80265640: lwc1        $f11, -0x2DD0($at)
    ctx->f_odd[(11 - 1) * 2] = MEM_W(ctx->r1, -0X2DD0);
    // 0x80265644: lwc1        $f10, -0x2DCC($at)
    ctx->f10.u32l = MEM_W(ctx->r1, -0X2DCC);
    // 0x80265648: cvt.s.d     $f20, $f18
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.d); 
    ctx->f20.fl = CVT_S_D(ctx->f18.d);
    // 0x8026564C: add.d       $f6, $f4, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f10.d); 
    ctx->f6.d = ctx->f4.d + ctx->f10.d;
    // 0x80265650: swc1        $f20, 0xA0($sp)
    MEM_W(0XA0, ctx->r29) = ctx->f20.u32l;
    // 0x80265654: jal         0x80081040
    // 0x80265658: cvt.s.d     $f22, $f6
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.d); 
    ctx->f22.fl = CVT_S_D(ctx->f6.d);
    func_80081040(rdram, ctx);
        goto after_6;
    // 0x80265658: cvt.s.d     $f22, $f6
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.d); 
    ctx->f22.fl = CVT_S_D(ctx->f6.d);
    after_6:
    // 0x8026565C: jal         0x80272AEC
    // 0x80265660: mov.s       $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    ctx->f12.fl = ctx->f0.fl;
    ovl_8024B800_func_80272AEC(rdram, ctx);
        goto after_7;
    // 0x80265660: mov.s       $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    ctx->f12.fl = ctx->f0.fl;
    after_7:
    // 0x80265664: lui         $at, 0x8028
    ctx->r1 = S32(0X8028 << 16);
    // 0x80265668: lwc1        $f17, -0x2DC8($at)
    ctx->f_odd[(17 - 1) * 2] = MEM_W(ctx->r1, -0X2DC8);
    // 0x8026566C: lwc1        $f16, -0x2DC4($at)
    ctx->f16.u32l = MEM_W(ctx->r1, -0X2DC4);
    // 0x80265670: cvt.d.s     $f8, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f8.d = CVT_D_S(ctx->f0.fl);
    // 0x80265674: mul.d       $f18, $f8, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f16.d); 
    ctx->f18.d = MUL_D(ctx->f8.d, ctx->f16.d);
    // 0x80265678: lui         $at, 0x3FF0
    ctx->r1 = S32(0X3FF0 << 16);
    // 0x8026567C: mtc1        $at, $f5
    ctx->f_odd[(5 - 1) * 2] = ctx->r1;
    // 0x80265680: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x80265684: lwc1        $f8, 0x9C($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X9C);
    // 0x80265688: cvt.s.d     $f12, $f18
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.d); 
    ctx->f12.fl = CVT_S_D(ctx->f18.d);
    // 0x8026568C: lui         $s4, 0x8012
    ctx->r20 = S32(0X8012 << 16);
    // 0x80265690: cvt.d.s     $f10, $f12
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); 
    ctx->f10.d = CVT_D_S(ctx->f12.fl);
    // 0x80265694: c.lt.d      $f4, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f4.d < ctx->f10.d;
    // 0x80265698: addiu       $s4, $s4, 0xB78
    ctx->r20 = ADD32(ctx->r20, 0XB78);
    // 0x8026569C: bc1f        L_802656B0
    if (!c1cs) {
        // 0x802656A0: or          $s3, $zero, $zero
        ctx->r19 = 0 | 0;
            goto L_802656B0;
    }
    // 0x802656A0: or          $s3, $zero, $zero
    ctx->r19 = 0 | 0;
    // 0x802656A4: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x802656A8: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    // 0x802656AC: nop

L_802656B0:
    // 0x802656B0: lui         $at, 0x8028
    ctx->r1 = S32(0X8028 << 16);
    // 0x802656B4: lwc1        $f6, -0x2DC0($at)
    ctx->f6.u32l = MEM_W(ctx->r1, -0X2DC0);
    // 0x802656B8: addiu       $s1, $zero, 0x1
    ctx->r17 = ADD32(0, 0X1);
    // 0x802656BC: div.s       $f16, $f6, $f8
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f16.fl = DIV_S(ctx->f6.fl, ctx->f8.fl);
    // 0x802656C0: mul.s       $f18, $f16, $f12
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f18.fl = MUL_S(ctx->f16.fl, ctx->f12.fl);
    // 0x802656C4: cfc1        $t0, $FpcCsr
    ctx->r8 = get_cop1_cs();
    // 0x802656C8: ctc1        $s1, $FpcCsr
    set_cop1_cs(ctx->r17);
    // 0x802656CC: nop

    // 0x802656D0: cvt.w.s     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    ctx->f4.u32l = CVT_W_S(ctx->f18.fl);
    // 0x802656D4: cfc1        $s1, $FpcCsr
    ctx->r17 = get_cop1_cs();
    // 0x802656D8: nop

    // 0x802656DC: andi        $s1, $s1, 0x78
    ctx->r17 = ctx->r17 & 0X78;
    // 0x802656E0: beq         $s1, $zero, L_8026572C
    if (ctx->r17 == 0) {
        // 0x802656E4: lui         $at, 0x4F00
        ctx->r1 = S32(0X4F00 << 16);
            goto L_8026572C;
    }
    // 0x802656E4: lui         $at, 0x4F00
    ctx->r1 = S32(0X4F00 << 16);
    // 0x802656E8: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x802656EC: addiu       $s1, $zero, 0x1
    ctx->r17 = ADD32(0, 0X1);
    // 0x802656F0: sub.s       $f4, $f18, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f4.fl = ctx->f18.fl - ctx->f4.fl;
    // 0x802656F4: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x802656F8: ctc1        $s1, $FpcCsr
    set_cop1_cs(ctx->r17);
    // 0x802656FC: nop

    // 0x80265700: cvt.w.s     $f4, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    ctx->f4.u32l = CVT_W_S(ctx->f4.fl);
    // 0x80265704: cfc1        $s1, $FpcCsr
    ctx->r17 = get_cop1_cs();
    // 0x80265708: nop

    // 0x8026570C: andi        $s1, $s1, 0x78
    ctx->r17 = ctx->r17 & 0X78;
    // 0x80265710: bne         $s1, $zero, L_80265724
    if (ctx->r17 != 0) {
        // 0x80265714: nop
    
            goto L_80265724;
    }
    // 0x80265714: nop

    // 0x80265718: mfc1        $s1, $f4
    ctx->r17 = (int32_t)ctx->f4.u32l;
    // 0x8026571C: b           L_8026573C
    // 0x80265720: or          $s1, $s1, $at
    ctx->r17 = ctx->r17 | ctx->r1;
        goto L_8026573C;
    // 0x80265720: or          $s1, $s1, $at
    ctx->r17 = ctx->r17 | ctx->r1;
L_80265724:
    // 0x80265724: b           L_8026573C
    // 0x80265728: addiu       $s1, $zero, -0x1
    ctx->r17 = ADD32(0, -0X1);
        goto L_8026573C;
    // 0x80265728: addiu       $s1, $zero, -0x1
    ctx->r17 = ADD32(0, -0X1);
L_8026572C:
    // 0x8026572C: mfc1        $s1, $f4
    ctx->r17 = (int32_t)ctx->f4.u32l;
    // 0x80265730: nop

    // 0x80265734: bltz        $s1, L_80265724
    if (SIGNED(ctx->r17) < 0) {
        // 0x80265738: nop
    
            goto L_80265724;
    }
    // 0x80265738: nop

L_8026573C:
    // 0x8026573C: ctc1        $t0, $FpcCsr
    set_cop1_cs(ctx->r8);
    // 0x80265740: sltiu       $at, $s1, 0x6
    ctx->r1 = ctx->r17 < 0X6 ? 1 : 0;
    // 0x80265744: bne         $at, $zero, L_80265750
    if (ctx->r1 != 0) {
        // 0x80265748: nop
    
            goto L_80265750;
    }
    // 0x80265748: nop

    // 0x8026574C: addiu       $s1, $zero, 0x5
    ctx->r17 = ADD32(0, 0X5);
L_80265750:
    // 0x80265750: bne         $s1, $zero, L_8026575C
    if (ctx->r17 != 0) {
        // 0x80265754: lui         $at, 0x8012
        ctx->r1 = S32(0X8012 << 16);
            goto L_8026575C;
    }
    // 0x80265754: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x80265758: addiu       $s1, $zero, 0x1
    ctx->r17 = ADD32(0, 0X1);
L_8026575C:
    // 0x8026575C: sh          $s1, 0xB3C($at)
    MEM_H(0XB3C, ctx->r1) = ctx->r17;
    // 0x80265760: lw          $s0, 0x18($s5)
    ctx->r16 = MEM_W(ctx->r21, 0X18);
    // 0x80265764: addiu       $s2, $zero, 0x6
    ctx->r18 = ADD32(0, 0X6);
    // 0x80265768: addiu       $s0, $s0, 0xAA8
    ctx->r16 = ADD32(ctx->r16, 0XAA8);
L_8026576C:
    // 0x8026576C: lhu         $t1, 0xC($s0)
    ctx->r9 = MEM_HU(ctx->r16, 0XC);
    // 0x80265770: nop

    // 0x80265774: beq         $t1, $zero, L_802658B0
    if (ctx->r9 == 0) {
        // 0x80265778: nop
    
            goto L_802658B0;
    }
    // 0x80265778: nop

    // 0x8026577C: lhu         $v0, 0x12($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X12);
    // 0x80265780: lui         $v1, 0x8012
    ctx->r3 = S32(0X8012 << 16);
    // 0x80265784: andi        $t2, $v0, 0x200
    ctx->r10 = ctx->r2 & 0X200;
    // 0x80265788: bne         $t2, $zero, L_80265868
    if (ctx->r10 != 0) {
        // 0x8026578C: nop
    
            goto L_80265868;
    }
    // 0x8026578C: nop

    // 0x80265790: lw          $v1, 0xB44($v1)
    ctx->r3 = MEM_W(ctx->r3, 0XB44);
    // 0x80265794: nop

    // 0x80265798: sltiu       $at, $v1, 0x3D
    ctx->r1 = ctx->r3 < 0X3D ? 1 : 0;
    // 0x8026579C: beq         $at, $zero, L_802658B0
    if (ctx->r1 == 0) {
        // 0x802657A0: sltiu       $at, $v1, 0x29
        ctx->r1 = ctx->r3 < 0X29 ? 1 : 0;
            goto L_802658B0;
    }
    // 0x802657A0: sltiu       $at, $v1, 0x29
    ctx->r1 = ctx->r3 < 0X29 ? 1 : 0;
    // 0x802657A4: bne         $at, $zero, L_802657CC
    if (ctx->r1 != 0) {
        // 0x802657A8: nop
    
            goto L_802657CC;
    }
    // 0x802657A8: nop

    // 0x802657AC: lhu         $t3, 0x0($s4)
    ctx->r11 = MEM_HU(ctx->r20, 0X0);
    // 0x802657B0: andi        $t4, $v0, 0x100
    ctx->r12 = ctx->r2 & 0X100;
    // 0x802657B4: beq         $s2, $t3, L_802657CC
    if (ctx->r18 == ctx->r11) {
        // 0x802657B8: nop
    
            goto L_802657CC;
    }
    // 0x802657B8: nop

    // 0x802657BC: bne         $t4, $zero, L_80265868
    if (ctx->r12 != 0) {
        // 0x802657C0: nop
    
            goto L_80265868;
    }
    // 0x802657C0: nop

    // 0x802657C4: b           L_80265868
    // 0x802657C8: sb          $zero, 0x0($s0)
    MEM_B(0X0, ctx->r16) = 0;
        goto L_80265868;
    // 0x802657C8: sb          $zero, 0x0($s0)
    MEM_B(0X0, ctx->r16) = 0;
L_802657CC:
    // 0x802657CC: jal         0x80081040
    // 0x802657D0: mov.s       $f12, $f22
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 22);
    ctx->f12.fl = ctx->f22.fl;
    func_80081040(rdram, ctx);
        goto after_8;
    // 0x802657D0: mov.s       $f12, $f22
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 22);
    ctx->f12.fl = ctx->f22.fl;
    after_8:
    // 0x802657D4: mul.s       $f10, $f0, $f20
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f10.fl = MUL_S(ctx->f0.fl, ctx->f20.fl);
    // 0x802657D8: lwc1        $f6, 0xB4($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0XB4);
    // 0x802657DC: nop

    // 0x802657E0: add.s       $f8, $f10, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f10.fl + ctx->f6.fl;
    // 0x802657E4: cfc1        $t5, $FpcCsr
    ctx->r13 = get_cop1_cs();
    // 0x802657E8: nop

    // 0x802657EC: ori         $at, $t5, 0x3
    ctx->r1 = ctx->r13 | 0X3;
    // 0x802657F0: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x802657F4: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x802657F8: nop

    // 0x802657FC: cvt.w.s     $f16, $f8
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    ctx->f16.u32l = CVT_W_S(ctx->f8.fl);
    // 0x80265800: mfc1        $t6, $f16
    ctx->r14 = (int32_t)ctx->f16.u32l;
    // 0x80265804: ctc1        $t5, $FpcCsr
    set_cop1_cs(ctx->r13);
    // 0x80265808: sh          $t6, 0x2E($s0)
    MEM_H(0X2E, ctx->r16) = ctx->r14;
    // 0x8026580C: jal         0x80080E80
    // 0x80265810: mov.s       $f12, $f22
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 22);
    ctx->f12.fl = ctx->f22.fl;
    func_80080E80(rdram, ctx);
        goto after_9;
    // 0x80265810: mov.s       $f12, $f22
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 22);
    ctx->f12.fl = ctx->f22.fl;
    after_9:
    // 0x80265814: mul.s       $f18, $f0, $f20
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f18.fl = MUL_S(ctx->f0.fl, ctx->f20.fl);
    // 0x80265818: lwc1        $f4, 0xB0($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0XB0);
    // 0x8026581C: lhu         $t9, 0xE($s0)
    ctx->r25 = MEM_HU(ctx->r16, 0XE);
    // 0x80265820: add.s       $f10, $f18, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f10.fl = ctx->f18.fl + ctx->f4.fl;
    // 0x80265824: cfc1        $t7, $FpcCsr
    ctx->r15 = get_cop1_cs();
    // 0x80265828: nop

    // 0x8026582C: ori         $at, $t7, 0x3
    ctx->r1 = ctx->r15 | 0X3;
    // 0x80265830: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x80265834: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x80265838: addiu       $at, $zero, 0x1D
    ctx->r1 = ADD32(0, 0X1D);
    // 0x8026583C: cvt.w.s     $f6, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    ctx->f6.u32l = CVT_W_S(ctx->f10.fl);
    // 0x80265840: mfc1        $t8, $f6
    ctx->r24 = (int32_t)ctx->f6.u32l;
    // 0x80265844: ctc1        $t7, $FpcCsr
    set_cop1_cs(ctx->r15);
    // 0x80265848: beq         $t9, $at, L_80265868
    if (ctx->r25 == ctx->r1) {
        // 0x8026584C: sh          $t8, 0x30($s0)
        MEM_H(0X30, ctx->r16) = ctx->r24;
            goto L_80265868;
    }
    // 0x8026584C: sh          $t8, 0x30($s0)
    MEM_H(0X30, ctx->r16) = ctx->r24;
    // 0x80265850: lhu         $t0, 0x0($s4)
    ctx->r8 = MEM_HU(ctx->r20, 0X0);
    // 0x80265854: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80265858: bne         $s2, $t0, L_80265868
    if (ctx->r18 != ctx->r8) {
        // 0x8026585C: lui         $a1, 0x8028
        ctx->r5 = S32(0X8028 << 16);
            goto L_80265868;
    }
    // 0x8026585C: lui         $a1, 0x8028
    ctx->r5 = S32(0X8028 << 16);
    // 0x80265860: jal         0x8026F2EC
    // 0x80265864: addiu       $a1, $a1, -0x3410
    ctx->r5 = ADD32(ctx->r5, -0X3410);
    ovl_8024B800_func_8026F2EC(rdram, ctx);
        goto after_10;
    // 0x80265864: addiu       $a1, $a1, -0x3410
    ctx->r5 = ADD32(ctx->r5, -0X3410);
    after_10:
L_80265868:
    // 0x80265868: addiu       $s1, $s1, -0x1
    ctx->r17 = ADD32(ctx->r17, -0X1);
    // 0x8026586C: bne         $s1, $zero, L_8026587C
    if (ctx->r17 != 0) {
        // 0x80265870: addiu       $v0, $zero, 0x7
        ctx->r2 = ADD32(0, 0X7);
            goto L_8026587C;
    }
    // 0x80265870: addiu       $v0, $zero, 0x7
    ctx->r2 = ADD32(0, 0X7);
    // 0x80265874: b           L_802658C4
    // 0x80265878: or          $s3, $zero, $zero
    ctx->r19 = 0 | 0;
        goto L_802658C4;
    // 0x80265878: or          $s3, $zero, $zero
    ctx->r19 = 0 | 0;
L_8026587C:
    // 0x8026587C: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x80265880: lwc1        $f16, 0xA0($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0XA0);
    // 0x80265884: nop

    // 0x80265888: c.lt.s      $f8, $f16
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f8.fl < ctx->f16.fl;
    // 0x8026588C: nop

    // 0x80265890: bc1f        L_802658A0
    if (!c1cs) {
        // 0x80265894: nop
    
            goto L_802658A0;
    }
    // 0x80265894: nop

    // 0x80265898: b           L_802658A0
    // 0x8026589C: addiu       $v0, $zero, -0x7
    ctx->r2 = ADD32(0, -0X7);
        goto L_802658A0;
    // 0x8026589C: addiu       $v0, $zero, -0x7
    ctx->r2 = ADD32(0, -0X7);
L_802658A0:
    // 0x802658A0: mtc1        $v0, $f18
    ctx->f18.u32l = ctx->r2;
    // 0x802658A4: nop

    // 0x802658A8: cvt.s.w     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    ctx->f4.fl = CVT_S_W(ctx->f18.u32l);
    // 0x802658AC: add.s       $f20, $f20, $f4
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f20.fl = ctx->f20.fl + ctx->f4.fl;
L_802658B0:
    // 0x802658B0: addiu       $s3, $s3, 0x1
    ctx->r19 = ADD32(ctx->r19, 0X1);
    // 0x802658B4: sltiu       $at, $s3, 0xA
    ctx->r1 = ctx->r19 < 0XA ? 1 : 0;
    // 0x802658B8: bne         $at, $zero, L_8026576C
    if (ctx->r1 != 0) {
        // 0x802658BC: addiu       $s0, $s0, -0xF8
        ctx->r16 = ADD32(ctx->r16, -0XF8);
            goto L_8026576C;
    }
    // 0x802658BC: addiu       $s0, $s0, -0xF8
    ctx->r16 = ADD32(ctx->r16, -0XF8);
    // 0x802658C0: or          $s3, $zero, $zero
    ctx->r19 = 0 | 0;
L_802658C4:
    // 0x802658C4: lbu         $v0, 0x2($s5)
    ctx->r2 = MEM_BU(ctx->r21, 0X2);
    // 0x802658C8: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x802658CC: bne         $v1, $v0, L_802658DC
    if (ctx->r3 != ctx->r2) {
        // 0x802658D0: addiu       $a0, $zero, 0x5
        ctx->r4 = ADD32(0, 0X5);
            goto L_802658DC;
    }
    // 0x802658D0: addiu       $a0, $zero, 0x5
    ctx->r4 = ADD32(0, 0X5);
    // 0x802658D4: addiu       $t1, $zero, 0x3
    ctx->r9 = ADD32(0, 0X3);
    // 0x802658D8: sw          $t1, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->r9;
L_802658DC:
    // 0x802658DC: bne         $a0, $v0, L_802658E8
    if (ctx->r4 != ctx->r2) {
        // 0x802658E0: addiu       $t2, $zero, 0x5
        ctx->r10 = ADD32(0, 0X5);
            goto L_802658E8;
    }
    // 0x802658E0: addiu       $t2, $zero, 0x5
    ctx->r10 = ADD32(0, 0X5);
    // 0x802658E4: sw          $t2, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->r10;
L_802658E8:
    // 0x802658E8: lw          $t3, 0x24($s5)
    ctx->r11 = MEM_W(ctx->r21, 0X24);
    // 0x802658EC: addiu       $t4, $zero, 0x5
    ctx->r12 = ADD32(0, 0X5);
    // 0x802658F0: lbu         $v0, 0x2($t3)
    ctx->r2 = MEM_BU(ctx->r11, 0X2);
    // 0x802658F4: addiu       $t5, $zero, 0x2
    ctx->r13 = ADD32(0, 0X2);
    // 0x802658F8: bne         $v1, $v0, L_80265904
    if (ctx->r3 != ctx->r2) {
        // 0x802658FC: nop
    
            goto L_80265904;
    }
    // 0x802658FC: nop

    // 0x80265900: sw          $t4, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->r12;
L_80265904:
    // 0x80265904: bne         $a0, $v0, L_80265910
    if (ctx->r4 != ctx->r2) {
        // 0x80265908: nop
    
            goto L_80265910;
    }
    // 0x80265908: nop

    // 0x8026590C: sw          $t5, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->r13;
L_80265910:
    // 0x80265910: lh          $t6, 0x8B8($s5)
    ctx->r14 = MEM_H(ctx->r21, 0X8B8);
    // 0x80265914: nop

    // 0x80265918: mtc1        $t6, $f10
    ctx->f10.u32l = ctx->r14;
    // 0x8026591C: jal         0x802645E0
    // 0x80265920: cvt.s.w     $f12, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    ctx->f12.fl = CVT_S_W(ctx->f10.u32l);
    ovl_8024B800_func_802645E0(rdram, ctx);
        goto after_11;
    // 0x80265920: cvt.s.w     $f12, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    ctx->f12.fl = CVT_S_W(ctx->f10.u32l);
    after_11:
    // 0x80265924: sll         $t7, $v0, 2
    ctx->r15 = S32(ctx->r2 << 2);
    // 0x80265928: lui         $s2, 0x800B
    ctx->r18 = S32(0X800B << 16);
    // 0x8026592C: lw          $t8, 0x70($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X70);
    // 0x80265930: addu        $s2, $s2, $t7
    ctx->r18 = ADD32(ctx->r18, ctx->r15);
    // 0x80265934: lw          $s2, -0x3F3C($s2)
    ctx->r18 = MEM_W(ctx->r18, -0X3F3C);
    // 0x80265938: beq         $t8, $zero, L_80265A0C
    if (ctx->r24 == 0) {
        // 0x8026593C: sll         $s1, $zero, 5
        ctx->r17 = S32(0 << 5);
            goto L_80265A0C;
    }
    // 0x8026593C: sll         $s1, $zero, 5
    ctx->r17 = S32(0 << 5);
    // 0x80265940: subu        $s1, $s1, $zero
    ctx->r17 = SUB32(ctx->r17, 0);
    // 0x80265944: sll         $s1, $s1, 3
    ctx->r17 = S32(ctx->r17 << 3);
    // 0x80265948: addiu       $s4, $zero, 0x9B0
    ctx->r20 = ADD32(0, 0X9B0);
L_8026594C:
    // 0x8026594C: lw          $t9, 0x18($s5)
    ctx->r25 = MEM_W(ctx->r21, 0X18);
    // 0x80265950: lw          $t2, 0x6C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X6C);
    // 0x80265954: addu        $s0, $t9, $s1
    ctx->r16 = ADD32(ctx->r25, ctx->r17);
    // 0x80265958: lhu         $t0, 0x10A($s0)
    ctx->r8 = MEM_HU(ctx->r16, 0X10A);
    // 0x8026595C: addiu       $s0, $s0, 0xF8
    ctx->r16 = ADD32(ctx->r16, 0XF8);
    // 0x80265960: andi        $t1, $t0, 0x200
    ctx->r9 = ctx->r8 & 0X200;
    // 0x80265964: bne         $t1, $zero, L_802659F8
    if (ctx->r9 != 0) {
        // 0x80265968: lw          $t8, 0x70($sp)
        ctx->r24 = MEM_W(ctx->r29, 0X70);
            goto L_802659F8;
    }
    // 0x80265968: lw          $t8, 0x70($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X70);
    // 0x8026596C: lbu         $v1, 0x3($s2)
    ctx->r3 = MEM_BU(ctx->r18, 0X3);
    // 0x80265970: addiu       $t6, $zero, 0xC
    ctx->r14 = ADD32(0, 0XC);
    // 0x80265974: sltu        $at, $v1, $t2
    ctx->r1 = ctx->r3 < ctx->r10 ? 1 : 0;
    // 0x80265978: beq         $at, $zero, L_802659B4
    if (ctx->r1 == 0) {
        // 0x8026597C: nop
    
            goto L_802659B4;
    }
    // 0x8026597C: nop

    // 0x80265980: lw          $v0, 0x24($s5)
    ctx->r2 = MEM_W(ctx->r21, 0X24);
    // 0x80265984: addiu       $at, $zero, 0x5
    ctx->r1 = ADD32(0, 0X5);
    // 0x80265988: lbu         $t3, 0x2($v0)
    ctx->r11 = MEM_BU(ctx->r2, 0X2);
    // 0x8026598C: addu        $t4, $v0, $v1
    ctx->r12 = ADD32(ctx->r2, ctx->r3);
    // 0x80265990: bne         $t3, $at, L_802659A8
    if (ctx->r11 != ctx->r1) {
        // 0x80265994: nop
    
            goto L_802659A8;
    }
    // 0x80265994: nop

    // 0x80265998: jal         0x80264E0C
    // 0x8026599C: or          $a0, $s5, $zero
    ctx->r4 = ctx->r21 | 0;
    ovl_8024B800_func_80264E0C(rdram, ctx);
        goto after_12;
    // 0x8026599C: or          $a0, $s5, $zero
    ctx->r4 = ctx->r21 | 0;
    after_12:
    // 0x802659A0: b           L_802659B8
    // 0x802659A4: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
        goto L_802659B8;
    // 0x802659A4: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
L_802659A8:
    // 0x802659A8: lb          $t5, 0x88E($t4)
    ctx->r13 = MEM_B(ctx->r12, 0X88E);
    // 0x802659AC: b           L_802659B8
    // 0x802659B0: sb          $t5, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r13;
        goto L_802659B8;
    // 0x802659B0: sb          $t5, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r13;
L_802659B4:
    // 0x802659B4: sb          $t6, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r14;
L_802659B8:
    // 0x802659B8: lbu         $t7, 0xA($s0)
    ctx->r15 = MEM_BU(ctx->r16, 0XA);
    // 0x802659BC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802659C0: slti        $at, $t7, 0xB
    ctx->r1 = SIGNED(ctx->r15) < 0XB ? 1 : 0;
    // 0x802659C4: beq         $at, $zero, L_802659D4
    if (ctx->r1 == 0) {
        // 0x802659C8: or          $a1, $s2, $zero
        ctx->r5 = ctx->r18 | 0;
            goto L_802659D4;
    }
    // 0x802659C8: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    // 0x802659CC: b           L_802659D8
    // 0x802659D0: addiu       $v0, $zero, 0x1F
    ctx->r2 = ADD32(0, 0X1F);
        goto L_802659D8;
    // 0x802659D0: addiu       $v0, $zero, 0x1F
    ctx->r2 = ADD32(0, 0X1F);
L_802659D4:
    // 0x802659D4: addiu       $v0, $zero, 0x29
    ctx->r2 = ADD32(0, 0X29);
L_802659D8:
    // 0x802659D8: jal         0x80264520
    // 0x802659DC: andi        $a2, $v0, 0xFFFF
    ctx->r6 = ctx->r2 & 0XFFFF;
    ovl_8024B800_func_80264520(rdram, ctx);
        goto after_13;
    // 0x802659DC: andi        $a2, $v0, 0xFFFF
    ctx->r6 = ctx->r2 & 0XFFFF;
    after_13:
    // 0x802659E0: lh          $a1, 0x8B8($s5)
    ctx->r5 = MEM_H(ctx->r21, 0X8B8);
    // 0x802659E4: jal         0x80264710
    // 0x802659E8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_8024B800_func_80264710(rdram, ctx);
        goto after_14;
    // 0x802659E8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_14:
    // 0x802659EC: addiu       $s3, $s3, 0x1
    ctx->r19 = ADD32(ctx->r19, 0X1);
    // 0x802659F0: addiu       $s2, $s2, 0x4
    ctx->r18 = ADD32(ctx->r18, 0X4);
    // 0x802659F4: lw          $t8, 0x70($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X70);
L_802659F8:
    // 0x802659F8: addiu       $s1, $s1, 0xF8
    ctx->r17 = ADD32(ctx->r17, 0XF8);
    // 0x802659FC: beq         $s3, $t8, L_80265A10
    if (ctx->r19 == ctx->r24) {
        // 0x80265A00: lw          $ra, 0x44($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X44);
            goto L_80265A10;
    }
    // 0x80265A00: lw          $ra, 0x44($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X44);
    // 0x80265A04: bne         $s1, $s4, L_8026594C
    if (ctx->r17 != ctx->r20) {
        // 0x80265A08: nop
    
            goto L_8026594C;
    }
    // 0x80265A08: nop

L_80265A0C:
    // 0x80265A0C: lw          $ra, 0x44($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X44);
L_80265A10:
    // 0x80265A10: lwc1        $f21, 0x18($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X18);
    // 0x80265A14: lwc1        $f20, 0x1C($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x80265A18: lwc1        $f23, 0x20($sp)
    ctx->f_odd[(23 - 1) * 2] = MEM_W(ctx->r29, 0X20);
    // 0x80265A1C: lwc1        $f22, 0x24($sp)
    ctx->f22.u32l = MEM_W(ctx->r29, 0X24);
    // 0x80265A20: lw          $s0, 0x2C($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X2C);
    // 0x80265A24: lw          $s1, 0x30($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X30);
    // 0x80265A28: lw          $s2, 0x34($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X34);
    // 0x80265A2C: lw          $s3, 0x38($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X38);
    // 0x80265A30: lw          $s4, 0x3C($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X3C);
    // 0x80265A34: lw          $s5, 0x40($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X40);
    // 0x80265A38: jr          $ra
    // 0x80265A3C: addiu       $sp, $sp, 0xB8
    ctx->r29 = ADD32(ctx->r29, 0XB8);
    return;
    // 0x80265A3C: addiu       $sp, $sp, 0xB8
    ctx->r29 = ADD32(ctx->r29, 0XB8);
;}
RECOMP_FUNC void ovl_8024B800_func_802654F0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802654F0: addiu       $t2, $sp, 0x98
    ctx->r10 = ADD32(ctx->r29, 0X98);
    // 0x802654F4: mtc1        $t0, $f10
    ctx->f10.u32l = ctx->r8;
    // 0x802654F8: mfc1        $a2, $f18
    ctx->r6 = (int32_t)ctx->f18.u32l;
    // 0x802654FC: cvt.s.w     $f12, $f16
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 16);
    ctx->f12.fl = CVT_S_W(ctx->f16.u32l);
    // 0x80265500: or          $s5, $a0, $zero
    ctx->r21 = ctx->r4 | 0;
    // 0x80265504: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    // 0x80265508: cvt.s.w     $f14, $f10
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 10);
    ctx->f14.fl = CVT_S_W(ctx->f10.u32l);
    // 0x8026550C: jal         0x80272B1C
    // 0x80265510: sw          $t2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r10;
    ovl_8024B800_func_80272B1C(rdram, ctx);
        goto after_0;
    // 0x80265510: sw          $t2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r10;
    after_0:
    // 0x80265514: lw          $s0, 0x0($s1)
    ctx->r16 = MEM_W(ctx->r17, 0X0);
    // 0x80265518: addiu       $t5, $sp, 0x90
    ctx->r13 = ADD32(ctx->r29, 0X90);
    // 0x8026551C: lh          $v1, 0xDA($s0)
    ctx->r3 = MEM_H(ctx->r16, 0XDA);
    // 0x80265520: nop

    // 0x80265524: blez        $v1, L_80265538
    if (SIGNED(ctx->r3) <= 0) {
        // 0x80265528: addiu       $v0, $zero, -0x26
        ctx->r2 = ADD32(0, -0X26);
            goto L_80265538;
    }
    // 0x80265528: addiu       $v0, $zero, -0x26
    ctx->r2 = ADD32(0, -0X26);
    // 0x8026552C: b           L_80265538
    // 0x80265530: addiu       $v0, $zero, 0x26
    ctx->r2 = ADD32(0, 0X26);
        goto L_80265538;
    // 0x80265530: addiu       $v0, $zero, 0x26
    ctx->r2 = ADD32(0, 0X26);
    // 0x80265534: addiu       $v0, $zero, -0x26
    ctx->r2 = ADD32(0, -0X26);
L_80265538:
    // 0x80265538: lh          $t4, 0x8B8($s5)
    ctx->r12 = MEM_H(ctx->r21, 0X8B8);
    // 0x8026553C: mtc1        $v0, $f4
    ctx->f4.u32l = ctx->r2;
    // 0x80265540: mtc1        $t4, $f18
    ctx->f18.u32l = ctx->r12;
    // 0x80265544: cvt.s.w     $f4, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    ctx->f4.fl = CVT_S_W(ctx->f4.u32l);
    // 0x80265548: lh          $t3, 0xD8($s0)
    ctx->r11 = MEM_H(ctx->r16, 0XD8);
    // 0x8026554C: mtc1        $v1, $f16
    ctx->f16.u32l = ctx->r3;
    // 0x80265550: cvt.s.w     $f18, $f18
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    ctx->f18.fl = CVT_S_W(ctx->f18.u32l);
    // 0x80265554: mtc1        $t3, $f10
    ctx->f10.u32l = ctx->r11;
    // 0x80265558: mfc1        $a3, $f4
    ctx->r7 = (int32_t)ctx->f4.u32l;
    // 0x8026555C: mfc1        $a2, $f18
    ctx->r6 = (int32_t)ctx->f18.u32l;
    // 0x80265560: sw          $t5, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r13;
    // 0x80265564: cvt.s.w     $f14, $f16
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 16);
    ctx->f14.fl = CVT_S_W(ctx->f16.u32l);
    // 0x80265568: jal         0x80272B1C
    // 0x8026556C: cvt.s.w     $f12, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    ctx->f12.fl = CVT_S_W(ctx->f10.u32l);
    ovl_8024B800_func_80272B1C(rdram, ctx);
        goto after_1;
    // 0x8026556C: cvt.s.w     $f12, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    ctx->f12.fl = CVT_S_W(ctx->f10.u32l);
    after_1:
    // 0x80265570: lwc1        $f12, 0x98($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X98);
    // 0x80265574: jal         0x80081040
    // 0x80265578: nop

    func_80081040(rdram, ctx);
        goto after_2;
    // 0x80265578: nop

    after_2:
    // 0x8026557C: lw          $t6, 0x0($s1)
    ctx->r14 = MEM_W(ctx->r17, 0X0);
    // 0x80265580: lui         $at, 0x42C6
    ctx->r1 = S32(0X42C6 << 16);
    // 0x80265584: lh          $t7, 0xD8($t6)
    ctx->r15 = MEM_H(ctx->r14, 0XD8);
    // 0x80265588: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x8026558C: mtc1        $t7, $f10
    ctx->f10.u32l = ctx->r15;
    // 0x80265590: mul.s       $f8, $f0, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f0.fl, ctx->f6.fl);
    // 0x80265594: lwc1        $f12, 0x98($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X98);
    // 0x80265598: cvt.s.w     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.fl = CVT_S_W(ctx->f10.u32l);
    // 0x8026559C: add.s       $f18, $f8, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f8.fl + ctx->f16.fl;
    // 0x802655A0: jal         0x80080E80
    // 0x802655A4: swc1        $f18, 0xB4($sp)
    MEM_W(0XB4, ctx->r29) = ctx->f18.u32l;
    func_80080E80(rdram, ctx);
        goto after_3;
    // 0x802655A4: swc1        $f18, 0xB4($sp)
    MEM_W(0XB4, ctx->r29) = ctx->f18.u32l;
    after_3:
    // 0x802655A8: lw          $t8, 0x0($s1)
    ctx->r24 = MEM_W(ctx->r17, 0X0);
    // 0x802655AC: lui         $at, 0x42C6
    ctx->r1 = S32(0X42C6 << 16);
    // 0x802655B0: lh          $t9, 0xDA($t8)
    ctx->r25 = MEM_H(ctx->r24, 0XDA);
    // 0x802655B4: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x802655B8: mtc1        $t9, $f10
    ctx->f10.u32l = ctx->r25;
    // 0x802655BC: mul.s       $f6, $f0, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f0.fl, ctx->f4.fl);
    // 0x802655C0: lwc1        $f4, 0x90($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X90);
    // 0x802655C4: lwc1        $f18, 0x98($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X98);
    // 0x802655C8: cvt.s.w     $f8, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    ctx->f8.fl = CVT_S_W(ctx->f10.u32l);
    // 0x802655CC: add.s       $f16, $f6, $f8
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f16.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x802655D0: sub.s       $f20, $f18, $f4
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f20.fl = ctx->f18.fl - ctx->f4.fl;
    // 0x802655D4: swc1        $f16, 0xB0($sp)
    MEM_W(0XB0, ctx->r29) = ctx->f16.u32l;
    // 0x802655D8: jal         0x80080E80
    // 0x802655DC: mov.s       $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    ctx->f12.fl = ctx->f20.fl;
    func_80080E80(rdram, ctx);
        goto after_4;
    // 0x802655DC: mov.s       $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    ctx->f12.fl = ctx->f20.fl;
    after_4:
    // 0x802655E0: mov.s       $f22, $f0
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 0);
    ctx->f22.fl = ctx->f0.fl;
    // 0x802655E4: jal         0x80081040
    // 0x802655E8: mov.s       $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    ctx->f12.fl = ctx->f20.fl;
    func_80081040(rdram, ctx);
        goto after_5;
    // 0x802655E8: mov.s       $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    ctx->f12.fl = ctx->f20.fl;
    after_5:
    // 0x802655EC: lui         $at, 0x42C6
    ctx->r1 = S32(0X42C6 << 16);
    // 0x802655F0: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x802655F4: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x802655F8: mul.s       $f6, $f10, $f22
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f6.fl = MUL_S(ctx->f10.fl, ctx->f22.fl);
    // 0x802655FC: lwc1        $f12, 0x98($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X98);
    // 0x80265600: div.s       $f20, $f6, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f20.fl = DIV_S(ctx->f6.fl, ctx->f0.fl);
    // 0x80265604: cvt.d.s     $f4, $f12
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); 
    ctx->f4.d = CVT_D_S(ctx->f12.fl);
    // 0x80265608: c.lt.s      $f8, $f20
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 20);
    c1cs = ctx->f8.fl < ctx->f20.fl;
    // 0x8026560C: cvt.d.s     $f16, $f20
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f20.fl); 
    ctx->f16.d = CVT_D_S(ctx->f20.fl);
    // 0x80265610: bc1f        L_80265628
    if (!c1cs) {
        // 0x80265614: lui         $at, 0x4012
        ctx->r1 = S32(0X4012 << 16);
            goto L_80265628;
    }
    // 0x80265614: lui         $at, 0x4012
    ctx->r1 = S32(0X4012 << 16);
    // 0x80265618: mtc1        $at, $f1
    ctx->f_odd[(1 - 1) * 2] = ctx->r1;
    // 0x8026561C: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x80265620: b           L_80265638
    // 0x80265624: nop

        goto L_80265638;
    // 0x80265624: nop

L_80265628:
    // 0x80265628: lui         $at, 0xC012
    ctx->r1 = S32(0XC012 << 16);
    // 0x8026562C: mtc1        $at, $f1
    ctx->f_odd[(1 - 1) * 2] = ctx->r1;
    // 0x80265630: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x80265634: nop

L_80265638:
    // 0x80265638: lui         $at, 0x8028
    ctx->r1 = S32(0X8028 << 16);
    // 0x8026563C: add.d       $f18, $f16, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f16.d); NAN_CHECK(ctx->f0.d); 
    ctx->f18.d = ctx->f16.d + ctx->f0.d;
    // 0x80265640: lwc1        $f11, -0x2DD0($at)
    ctx->f_odd[(11 - 1) * 2] = MEM_W(ctx->r1, -0X2DD0);
    // 0x80265644: lwc1        $f10, -0x2DCC($at)
    ctx->f10.u32l = MEM_W(ctx->r1, -0X2DCC);
    // 0x80265648: cvt.s.d     $f20, $f18
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.d); 
    ctx->f20.fl = CVT_S_D(ctx->f18.d);
    // 0x8026564C: add.d       $f6, $f4, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f10.d); 
    ctx->f6.d = ctx->f4.d + ctx->f10.d;
    // 0x80265650: swc1        $f20, 0xA0($sp)
    MEM_W(0XA0, ctx->r29) = ctx->f20.u32l;
    // 0x80265654: jal         0x80081040
    // 0x80265658: cvt.s.d     $f22, $f6
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.d); 
    ctx->f22.fl = CVT_S_D(ctx->f6.d);
    func_80081040(rdram, ctx);
        goto after_6;
    // 0x80265658: cvt.s.d     $f22, $f6
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.d); 
    ctx->f22.fl = CVT_S_D(ctx->f6.d);
    after_6:
    // 0x8026565C: jal         0x80272AEC
    // 0x80265660: mov.s       $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    ctx->f12.fl = ctx->f0.fl;
    ovl_8024B800_func_80272AEC(rdram, ctx);
        goto after_7;
    // 0x80265660: mov.s       $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    ctx->f12.fl = ctx->f0.fl;
    after_7:
    // 0x80265664: lui         $at, 0x8028
    ctx->r1 = S32(0X8028 << 16);
    // 0x80265668: lwc1        $f17, -0x2DC8($at)
    ctx->f_odd[(17 - 1) * 2] = MEM_W(ctx->r1, -0X2DC8);
    // 0x8026566C: lwc1        $f16, -0x2DC4($at)
    ctx->f16.u32l = MEM_W(ctx->r1, -0X2DC4);
    // 0x80265670: cvt.d.s     $f8, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f8.d = CVT_D_S(ctx->f0.fl);
    // 0x80265674: mul.d       $f18, $f8, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f16.d); 
    ctx->f18.d = MUL_D(ctx->f8.d, ctx->f16.d);
    // 0x80265678: lui         $at, 0x3FF0
    ctx->r1 = S32(0X3FF0 << 16);
    // 0x8026567C: mtc1        $at, $f5
    ctx->f_odd[(5 - 1) * 2] = ctx->r1;
    // 0x80265680: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x80265684: lwc1        $f8, 0x9C($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X9C);
    // 0x80265688: cvt.s.d     $f12, $f18
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.d); 
    ctx->f12.fl = CVT_S_D(ctx->f18.d);
    // 0x8026568C: lui         $s4, 0x8012
    ctx->r20 = S32(0X8012 << 16);
    // 0x80265690: cvt.d.s     $f10, $f12
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); 
    ctx->f10.d = CVT_D_S(ctx->f12.fl);
    // 0x80265694: c.lt.d      $f4, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f4.d < ctx->f10.d;
    // 0x80265698: addiu       $s4, $s4, 0xB78
    ctx->r20 = ADD32(ctx->r20, 0XB78);
    // 0x8026569C: bc1f        L_802656B0
    if (!c1cs) {
        // 0x802656A0: or          $s3, $zero, $zero
        ctx->r19 = 0 | 0;
            goto L_802656B0;
    }
    // 0x802656A0: or          $s3, $zero, $zero
    ctx->r19 = 0 | 0;
    // 0x802656A4: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x802656A8: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    // 0x802656AC: nop

L_802656B0:
    // 0x802656B0: lui         $at, 0x8028
    ctx->r1 = S32(0X8028 << 16);
    // 0x802656B4: lwc1        $f6, -0x2DC0($at)
    ctx->f6.u32l = MEM_W(ctx->r1, -0X2DC0);
    // 0x802656B8: addiu       $s1, $zero, 0x1
    ctx->r17 = ADD32(0, 0X1);
    // 0x802656BC: div.s       $f16, $f6, $f8
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f16.fl = DIV_S(ctx->f6.fl, ctx->f8.fl);
    // 0x802656C0: mul.s       $f18, $f16, $f12
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f18.fl = MUL_S(ctx->f16.fl, ctx->f12.fl);
    // 0x802656C4: cfc1        $t0, $FpcCsr
    ctx->r8 = get_cop1_cs();
    // 0x802656C8: ctc1        $s1, $FpcCsr
    set_cop1_cs(ctx->r17);
    // 0x802656CC: nop

    // 0x802656D0: cvt.w.s     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    ctx->f4.u32l = CVT_W_S(ctx->f18.fl);
    // 0x802656D4: cfc1        $s1, $FpcCsr
    ctx->r17 = get_cop1_cs();
    // 0x802656D8: nop

    // 0x802656DC: andi        $s1, $s1, 0x78
    ctx->r17 = ctx->r17 & 0X78;
    // 0x802656E0: beq         $s1, $zero, L_8026572C
    if (ctx->r17 == 0) {
        // 0x802656E4: lui         $at, 0x4F00
        ctx->r1 = S32(0X4F00 << 16);
            goto L_8026572C;
    }
    // 0x802656E4: lui         $at, 0x4F00
    ctx->r1 = S32(0X4F00 << 16);
    // 0x802656E8: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x802656EC: addiu       $s1, $zero, 0x1
    ctx->r17 = ADD32(0, 0X1);
    // 0x802656F0: sub.s       $f4, $f18, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f4.fl = ctx->f18.fl - ctx->f4.fl;
    // 0x802656F4: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x802656F8: ctc1        $s1, $FpcCsr
    set_cop1_cs(ctx->r17);
    // 0x802656FC: nop

    // 0x80265700: cvt.w.s     $f4, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    ctx->f4.u32l = CVT_W_S(ctx->f4.fl);
    // 0x80265704: cfc1        $s1, $FpcCsr
    ctx->r17 = get_cop1_cs();
    // 0x80265708: nop

    // 0x8026570C: andi        $s1, $s1, 0x78
    ctx->r17 = ctx->r17 & 0X78;
    // 0x80265710: bne         $s1, $zero, L_80265724
    if (ctx->r17 != 0) {
        // 0x80265714: nop
    
            goto L_80265724;
    }
    // 0x80265714: nop

    // 0x80265718: mfc1        $s1, $f4
    ctx->r17 = (int32_t)ctx->f4.u32l;
    // 0x8026571C: b           L_8026573C
    // 0x80265720: or          $s1, $s1, $at
    ctx->r17 = ctx->r17 | ctx->r1;
        goto L_8026573C;
    // 0x80265720: or          $s1, $s1, $at
    ctx->r17 = ctx->r17 | ctx->r1;
L_80265724:
    // 0x80265724: b           L_8026573C
    // 0x80265728: addiu       $s1, $zero, -0x1
    ctx->r17 = ADD32(0, -0X1);
        goto L_8026573C;
    // 0x80265728: addiu       $s1, $zero, -0x1
    ctx->r17 = ADD32(0, -0X1);
L_8026572C:
    // 0x8026572C: mfc1        $s1, $f4
    ctx->r17 = (int32_t)ctx->f4.u32l;
    // 0x80265730: nop

    // 0x80265734: bltz        $s1, L_80265724
    if (SIGNED(ctx->r17) < 0) {
        // 0x80265738: nop
    
            goto L_80265724;
    }
    // 0x80265738: nop

L_8026573C:
    // 0x8026573C: ctc1        $t0, $FpcCsr
    set_cop1_cs(ctx->r8);
    // 0x80265740: sltiu       $at, $s1, 0x6
    ctx->r1 = ctx->r17 < 0X6 ? 1 : 0;
    // 0x80265744: bne         $at, $zero, L_80265750
    if (ctx->r1 != 0) {
        // 0x80265748: nop
    
            goto L_80265750;
    }
    // 0x80265748: nop

    // 0x8026574C: addiu       $s1, $zero, 0x5
    ctx->r17 = ADD32(0, 0X5);
L_80265750:
    // 0x80265750: bne         $s1, $zero, L_8026575C
    if (ctx->r17 != 0) {
        // 0x80265754: lui         $at, 0x8012
        ctx->r1 = S32(0X8012 << 16);
            goto L_8026575C;
    }
    // 0x80265754: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x80265758: addiu       $s1, $zero, 0x1
    ctx->r17 = ADD32(0, 0X1);
L_8026575C:
    // 0x8026575C: sh          $s1, 0xB3C($at)
    MEM_H(0XB3C, ctx->r1) = ctx->r17;
    // 0x80265760: lw          $s0, 0x18($s5)
    ctx->r16 = MEM_W(ctx->r21, 0X18);
    // 0x80265764: addiu       $s2, $zero, 0x6
    ctx->r18 = ADD32(0, 0X6);
    // 0x80265768: addiu       $s0, $s0, 0xAA8
    ctx->r16 = ADD32(ctx->r16, 0XAA8);
L_8026576C:
    // 0x8026576C: lhu         $t1, 0xC($s0)
    ctx->r9 = MEM_HU(ctx->r16, 0XC);
    // 0x80265770: nop

    // 0x80265774: beq         $t1, $zero, L_802658B0
    if (ctx->r9 == 0) {
        // 0x80265778: nop
    
            goto L_802658B0;
    }
    // 0x80265778: nop

    // 0x8026577C: lhu         $v0, 0x12($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X12);
    // 0x80265780: lui         $v1, 0x8012
    ctx->r3 = S32(0X8012 << 16);
    // 0x80265784: andi        $t2, $v0, 0x200
    ctx->r10 = ctx->r2 & 0X200;
    // 0x80265788: bne         $t2, $zero, L_80265868
    if (ctx->r10 != 0) {
        // 0x8026578C: nop
    
            goto L_80265868;
    }
    // 0x8026578C: nop

    // 0x80265790: lw          $v1, 0xB44($v1)
    ctx->r3 = MEM_W(ctx->r3, 0XB44);
    // 0x80265794: nop

    // 0x80265798: sltiu       $at, $v1, 0x3D
    ctx->r1 = ctx->r3 < 0X3D ? 1 : 0;
    // 0x8026579C: beq         $at, $zero, L_802658B0
    if (ctx->r1 == 0) {
        // 0x802657A0: sltiu       $at, $v1, 0x29
        ctx->r1 = ctx->r3 < 0X29 ? 1 : 0;
            goto L_802658B0;
    }
    // 0x802657A0: sltiu       $at, $v1, 0x29
    ctx->r1 = ctx->r3 < 0X29 ? 1 : 0;
    // 0x802657A4: bne         $at, $zero, L_802657CC
    if (ctx->r1 != 0) {
        // 0x802657A8: nop
    
            goto L_802657CC;
    }
    // 0x802657A8: nop

    // 0x802657AC: lhu         $t3, 0x0($s4)
    ctx->r11 = MEM_HU(ctx->r20, 0X0);
    // 0x802657B0: andi        $t4, $v0, 0x100
    ctx->r12 = ctx->r2 & 0X100;
    // 0x802657B4: beq         $s2, $t3, L_802657CC
    if (ctx->r18 == ctx->r11) {
        // 0x802657B8: nop
    
            goto L_802657CC;
    }
    // 0x802657B8: nop

    // 0x802657BC: bne         $t4, $zero, L_80265868
    if (ctx->r12 != 0) {
        // 0x802657C0: nop
    
            goto L_80265868;
    }
    // 0x802657C0: nop

    // 0x802657C4: b           L_80265868
    // 0x802657C8: sb          $zero, 0x0($s0)
    MEM_B(0X0, ctx->r16) = 0;
        goto L_80265868;
    // 0x802657C8: sb          $zero, 0x0($s0)
    MEM_B(0X0, ctx->r16) = 0;
L_802657CC:
    // 0x802657CC: jal         0x80081040
    // 0x802657D0: mov.s       $f12, $f22
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 22);
    ctx->f12.fl = ctx->f22.fl;
    func_80081040(rdram, ctx);
        goto after_8;
    // 0x802657D0: mov.s       $f12, $f22
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 22);
    ctx->f12.fl = ctx->f22.fl;
    after_8:
    // 0x802657D4: mul.s       $f10, $f0, $f20
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f10.fl = MUL_S(ctx->f0.fl, ctx->f20.fl);
    // 0x802657D8: lwc1        $f6, 0xB4($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0XB4);
    // 0x802657DC: nop

    // 0x802657E0: add.s       $f8, $f10, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f10.fl + ctx->f6.fl;
    // 0x802657E4: cfc1        $t5, $FpcCsr
    ctx->r13 = get_cop1_cs();
    // 0x802657E8: nop

    // 0x802657EC: ori         $at, $t5, 0x3
    ctx->r1 = ctx->r13 | 0X3;
    // 0x802657F0: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x802657F4: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x802657F8: nop

    // 0x802657FC: cvt.w.s     $f16, $f8
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    ctx->f16.u32l = CVT_W_S(ctx->f8.fl);
    // 0x80265800: mfc1        $t6, $f16
    ctx->r14 = (int32_t)ctx->f16.u32l;
    // 0x80265804: ctc1        $t5, $FpcCsr
    set_cop1_cs(ctx->r13);
    // 0x80265808: sh          $t6, 0x2E($s0)
    MEM_H(0X2E, ctx->r16) = ctx->r14;
    // 0x8026580C: jal         0x80080E80
    // 0x80265810: mov.s       $f12, $f22
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 22);
    ctx->f12.fl = ctx->f22.fl;
    func_80080E80(rdram, ctx);
        goto after_9;
    // 0x80265810: mov.s       $f12, $f22
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 22);
    ctx->f12.fl = ctx->f22.fl;
    after_9:
    // 0x80265814: mul.s       $f18, $f0, $f20
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f18.fl = MUL_S(ctx->f0.fl, ctx->f20.fl);
    // 0x80265818: lwc1        $f4, 0xB0($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0XB0);
    // 0x8026581C: lhu         $t9, 0xE($s0)
    ctx->r25 = MEM_HU(ctx->r16, 0XE);
    // 0x80265820: add.s       $f10, $f18, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f10.fl = ctx->f18.fl + ctx->f4.fl;
    // 0x80265824: cfc1        $t7, $FpcCsr
    ctx->r15 = get_cop1_cs();
    // 0x80265828: nop

    // 0x8026582C: ori         $at, $t7, 0x3
    ctx->r1 = ctx->r15 | 0X3;
    // 0x80265830: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x80265834: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x80265838: addiu       $at, $zero, 0x1D
    ctx->r1 = ADD32(0, 0X1D);
    // 0x8026583C: cvt.w.s     $f6, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    ctx->f6.u32l = CVT_W_S(ctx->f10.fl);
    // 0x80265840: mfc1        $t8, $f6
    ctx->r24 = (int32_t)ctx->f6.u32l;
    // 0x80265844: ctc1        $t7, $FpcCsr
    set_cop1_cs(ctx->r15);
    // 0x80265848: beq         $t9, $at, L_80265868
    if (ctx->r25 == ctx->r1) {
        // 0x8026584C: sh          $t8, 0x30($s0)
        MEM_H(0X30, ctx->r16) = ctx->r24;
            goto L_80265868;
    }
    // 0x8026584C: sh          $t8, 0x30($s0)
    MEM_H(0X30, ctx->r16) = ctx->r24;
    // 0x80265850: lhu         $t0, 0x0($s4)
    ctx->r8 = MEM_HU(ctx->r20, 0X0);
    // 0x80265854: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80265858: bne         $s2, $t0, L_80265868
    if (ctx->r18 != ctx->r8) {
        // 0x8026585C: lui         $a1, 0x8028
        ctx->r5 = S32(0X8028 << 16);
            goto L_80265868;
    }
    // 0x8026585C: lui         $a1, 0x8028
    ctx->r5 = S32(0X8028 << 16);
    // 0x80265860: jal         0x8026F2EC
    // 0x80265864: addiu       $a1, $a1, -0x3410
    ctx->r5 = ADD32(ctx->r5, -0X3410);
    ovl_8024B800_func_8026F2EC(rdram, ctx);
        goto after_10;
    // 0x80265864: addiu       $a1, $a1, -0x3410
    ctx->r5 = ADD32(ctx->r5, -0X3410);
    after_10:
L_80265868:
    // 0x80265868: addiu       $s1, $s1, -0x1
    ctx->r17 = ADD32(ctx->r17, -0X1);
    // 0x8026586C: bne         $s1, $zero, L_8026587C
    if (ctx->r17 != 0) {
        // 0x80265870: addiu       $v0, $zero, 0x7
        ctx->r2 = ADD32(0, 0X7);
            goto L_8026587C;
    }
    // 0x80265870: addiu       $v0, $zero, 0x7
    ctx->r2 = ADD32(0, 0X7);
    // 0x80265874: b           L_802658C4
    // 0x80265878: or          $s3, $zero, $zero
    ctx->r19 = 0 | 0;
        goto L_802658C4;
    // 0x80265878: or          $s3, $zero, $zero
    ctx->r19 = 0 | 0;
L_8026587C:
    // 0x8026587C: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x80265880: lwc1        $f16, 0xA0($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0XA0);
    // 0x80265884: nop

    // 0x80265888: c.lt.s      $f8, $f16
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f8.fl < ctx->f16.fl;
    // 0x8026588C: nop

    // 0x80265890: bc1f        L_802658A0
    if (!c1cs) {
        // 0x80265894: nop
    
            goto L_802658A0;
    }
    // 0x80265894: nop

    // 0x80265898: b           L_802658A0
    // 0x8026589C: addiu       $v0, $zero, -0x7
    ctx->r2 = ADD32(0, -0X7);
        goto L_802658A0;
    // 0x8026589C: addiu       $v0, $zero, -0x7
    ctx->r2 = ADD32(0, -0X7);
L_802658A0:
    // 0x802658A0: mtc1        $v0, $f18
    ctx->f18.u32l = ctx->r2;
    // 0x802658A4: nop

    // 0x802658A8: cvt.s.w     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    ctx->f4.fl = CVT_S_W(ctx->f18.u32l);
    // 0x802658AC: add.s       $f20, $f20, $f4
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f20.fl = ctx->f20.fl + ctx->f4.fl;
L_802658B0:
    // 0x802658B0: addiu       $s3, $s3, 0x1
    ctx->r19 = ADD32(ctx->r19, 0X1);
    // 0x802658B4: sltiu       $at, $s3, 0xA
    ctx->r1 = ctx->r19 < 0XA ? 1 : 0;
    // 0x802658B8: bne         $at, $zero, L_8026576C
    if (ctx->r1 != 0) {
        // 0x802658BC: addiu       $s0, $s0, -0xF8
        ctx->r16 = ADD32(ctx->r16, -0XF8);
            goto L_8026576C;
    }
    // 0x802658BC: addiu       $s0, $s0, -0xF8
    ctx->r16 = ADD32(ctx->r16, -0XF8);
    // 0x802658C0: or          $s3, $zero, $zero
    ctx->r19 = 0 | 0;
L_802658C4:
    // 0x802658C4: lbu         $v0, 0x2($s5)
    ctx->r2 = MEM_BU(ctx->r21, 0X2);
    // 0x802658C8: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x802658CC: bne         $v1, $v0, L_802658DC
    if (ctx->r3 != ctx->r2) {
        // 0x802658D0: addiu       $a0, $zero, 0x5
        ctx->r4 = ADD32(0, 0X5);
            goto L_802658DC;
    }
    // 0x802658D0: addiu       $a0, $zero, 0x5
    ctx->r4 = ADD32(0, 0X5);
    // 0x802658D4: addiu       $t1, $zero, 0x3
    ctx->r9 = ADD32(0, 0X3);
    // 0x802658D8: sw          $t1, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->r9;
L_802658DC:
    // 0x802658DC: bne         $a0, $v0, L_802658E8
    if (ctx->r4 != ctx->r2) {
        // 0x802658E0: addiu       $t2, $zero, 0x5
        ctx->r10 = ADD32(0, 0X5);
            goto L_802658E8;
    }
    // 0x802658E0: addiu       $t2, $zero, 0x5
    ctx->r10 = ADD32(0, 0X5);
    // 0x802658E4: sw          $t2, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->r10;
L_802658E8:
    // 0x802658E8: lw          $t3, 0x24($s5)
    ctx->r11 = MEM_W(ctx->r21, 0X24);
    // 0x802658EC: addiu       $t4, $zero, 0x5
    ctx->r12 = ADD32(0, 0X5);
    // 0x802658F0: lbu         $v0, 0x2($t3)
    ctx->r2 = MEM_BU(ctx->r11, 0X2);
    // 0x802658F4: addiu       $t5, $zero, 0x2
    ctx->r13 = ADD32(0, 0X2);
    // 0x802658F8: bne         $v1, $v0, L_80265904
    if (ctx->r3 != ctx->r2) {
        // 0x802658FC: nop
    
            goto L_80265904;
    }
    // 0x802658FC: nop

    // 0x80265900: sw          $t4, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->r12;
L_80265904:
    // 0x80265904: bne         $a0, $v0, L_80265910
    if (ctx->r4 != ctx->r2) {
        // 0x80265908: nop
    
            goto L_80265910;
    }
    // 0x80265908: nop

    // 0x8026590C: sw          $t5, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->r13;
L_80265910:
    // 0x80265910: lh          $t6, 0x8B8($s5)
    ctx->r14 = MEM_H(ctx->r21, 0X8B8);
    // 0x80265914: nop

    // 0x80265918: mtc1        $t6, $f10
    ctx->f10.u32l = ctx->r14;
    // 0x8026591C: jal         0x802645E0
    // 0x80265920: cvt.s.w     $f12, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    ctx->f12.fl = CVT_S_W(ctx->f10.u32l);
    ovl_8024B800_func_802645E0(rdram, ctx);
        goto after_11;
    // 0x80265920: cvt.s.w     $f12, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    ctx->f12.fl = CVT_S_W(ctx->f10.u32l);
    after_11:
    // 0x80265924: sll         $t7, $v0, 2
    ctx->r15 = S32(ctx->r2 << 2);
    // 0x80265928: lui         $s2, 0x800B
    ctx->r18 = S32(0X800B << 16);
    // 0x8026592C: lw          $t8, 0x70($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X70);
    // 0x80265930: addu        $s2, $s2, $t7
    ctx->r18 = ADD32(ctx->r18, ctx->r15);
    // 0x80265934: lw          $s2, -0x3F3C($s2)
    ctx->r18 = MEM_W(ctx->r18, -0X3F3C);
    // 0x80265938: beq         $t8, $zero, L_80265A0C
    if (ctx->r24 == 0) {
        // 0x8026593C: sll         $s1, $zero, 5
        ctx->r17 = S32(0 << 5);
            goto L_80265A0C;
    }
    // 0x8026593C: sll         $s1, $zero, 5
    ctx->r17 = S32(0 << 5);
    // 0x80265940: subu        $s1, $s1, $zero
    ctx->r17 = SUB32(ctx->r17, 0);
    // 0x80265944: sll         $s1, $s1, 3
    ctx->r17 = S32(ctx->r17 << 3);
    // 0x80265948: addiu       $s4, $zero, 0x9B0
    ctx->r20 = ADD32(0, 0X9B0);
L_8026594C:
    // 0x8026594C: lw          $t9, 0x18($s5)
    ctx->r25 = MEM_W(ctx->r21, 0X18);
    // 0x80265950: lw          $t2, 0x6C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X6C);
    // 0x80265954: addu        $s0, $t9, $s1
    ctx->r16 = ADD32(ctx->r25, ctx->r17);
    // 0x80265958: lhu         $t0, 0x10A($s0)
    ctx->r8 = MEM_HU(ctx->r16, 0X10A);
    // 0x8026595C: addiu       $s0, $s0, 0xF8
    ctx->r16 = ADD32(ctx->r16, 0XF8);
    // 0x80265960: andi        $t1, $t0, 0x200
    ctx->r9 = ctx->r8 & 0X200;
    // 0x80265964: bne         $t1, $zero, L_802659F8
    if (ctx->r9 != 0) {
        // 0x80265968: lw          $t8, 0x70($sp)
        ctx->r24 = MEM_W(ctx->r29, 0X70);
            goto L_802659F8;
    }
    // 0x80265968: lw          $t8, 0x70($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X70);
    // 0x8026596C: lbu         $v1, 0x3($s2)
    ctx->r3 = MEM_BU(ctx->r18, 0X3);
    // 0x80265970: addiu       $t6, $zero, 0xC
    ctx->r14 = ADD32(0, 0XC);
    // 0x80265974: sltu        $at, $v1, $t2
    ctx->r1 = ctx->r3 < ctx->r10 ? 1 : 0;
    // 0x80265978: beq         $at, $zero, L_802659B4
    if (ctx->r1 == 0) {
        // 0x8026597C: nop
    
            goto L_802659B4;
    }
    // 0x8026597C: nop

    // 0x80265980: lw          $v0, 0x24($s5)
    ctx->r2 = MEM_W(ctx->r21, 0X24);
    // 0x80265984: addiu       $at, $zero, 0x5
    ctx->r1 = ADD32(0, 0X5);
    // 0x80265988: lbu         $t3, 0x2($v0)
    ctx->r11 = MEM_BU(ctx->r2, 0X2);
    // 0x8026598C: addu        $t4, $v0, $v1
    ctx->r12 = ADD32(ctx->r2, ctx->r3);
    // 0x80265990: bne         $t3, $at, L_802659A8
    if (ctx->r11 != ctx->r1) {
        // 0x80265994: nop
    
            goto L_802659A8;
    }
    // 0x80265994: nop

    // 0x80265998: jal         0x80264E0C
    // 0x8026599C: or          $a0, $s5, $zero
    ctx->r4 = ctx->r21 | 0;
    ovl_8024B800_func_80264E0C(rdram, ctx);
        goto after_12;
    // 0x8026599C: or          $a0, $s5, $zero
    ctx->r4 = ctx->r21 | 0;
    after_12:
    // 0x802659A0: b           L_802659B8
    // 0x802659A4: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
        goto L_802659B8;
    // 0x802659A4: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
L_802659A8:
    // 0x802659A8: lb          $t5, 0x88E($t4)
    ctx->r13 = MEM_B(ctx->r12, 0X88E);
    // 0x802659AC: b           L_802659B8
    // 0x802659B0: sb          $t5, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r13;
        goto L_802659B8;
    // 0x802659B0: sb          $t5, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r13;
L_802659B4:
    // 0x802659B4: sb          $t6, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r14;
L_802659B8:
    // 0x802659B8: lbu         $t7, 0xA($s0)
    ctx->r15 = MEM_BU(ctx->r16, 0XA);
    // 0x802659BC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802659C0: slti        $at, $t7, 0xB
    ctx->r1 = SIGNED(ctx->r15) < 0XB ? 1 : 0;
    // 0x802659C4: beq         $at, $zero, L_802659D4
    if (ctx->r1 == 0) {
        // 0x802659C8: or          $a1, $s2, $zero
        ctx->r5 = ctx->r18 | 0;
            goto L_802659D4;
    }
    // 0x802659C8: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    // 0x802659CC: b           L_802659D8
    // 0x802659D0: addiu       $v0, $zero, 0x1F
    ctx->r2 = ADD32(0, 0X1F);
        goto L_802659D8;
    // 0x802659D0: addiu       $v0, $zero, 0x1F
    ctx->r2 = ADD32(0, 0X1F);
L_802659D4:
    // 0x802659D4: addiu       $v0, $zero, 0x29
    ctx->r2 = ADD32(0, 0X29);
L_802659D8:
    // 0x802659D8: jal         0x80264520
    // 0x802659DC: andi        $a2, $v0, 0xFFFF
    ctx->r6 = ctx->r2 & 0XFFFF;
    ovl_8024B800_func_80264520(rdram, ctx);
        goto after_13;
    // 0x802659DC: andi        $a2, $v0, 0xFFFF
    ctx->r6 = ctx->r2 & 0XFFFF;
    after_13:
    // 0x802659E0: lh          $a1, 0x8B8($s5)
    ctx->r5 = MEM_H(ctx->r21, 0X8B8);
    // 0x802659E4: jal         0x80264710
    // 0x802659E8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_8024B800_func_80264710(rdram, ctx);
        goto after_14;
    // 0x802659E8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_14:
    // 0x802659EC: addiu       $s3, $s3, 0x1
    ctx->r19 = ADD32(ctx->r19, 0X1);
    // 0x802659F0: addiu       $s2, $s2, 0x4
    ctx->r18 = ADD32(ctx->r18, 0X4);
    // 0x802659F4: lw          $t8, 0x70($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X70);
L_802659F8:
    // 0x802659F8: addiu       $s1, $s1, 0xF8
    ctx->r17 = ADD32(ctx->r17, 0XF8);
    // 0x802659FC: beq         $s3, $t8, L_80265A10
    if (ctx->r19 == ctx->r24) {
        // 0x80265A00: lw          $ra, 0x44($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X44);
            goto L_80265A10;
    }
    // 0x80265A00: lw          $ra, 0x44($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X44);
    // 0x80265A04: bne         $s1, $s4, L_8026594C
    if (ctx->r17 != ctx->r20) {
        // 0x80265A08: nop
    
            goto L_8026594C;
    }
    // 0x80265A08: nop

L_80265A0C:
    // 0x80265A0C: lw          $ra, 0x44($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X44);
L_80265A10:
    // 0x80265A10: lwc1        $f21, 0x18($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X18);
    // 0x80265A14: lwc1        $f20, 0x1C($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x80265A18: lwc1        $f23, 0x20($sp)
    ctx->f_odd[(23 - 1) * 2] = MEM_W(ctx->r29, 0X20);
    // 0x80265A1C: lwc1        $f22, 0x24($sp)
    ctx->f22.u32l = MEM_W(ctx->r29, 0X24);
    // 0x80265A20: lw          $s0, 0x2C($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X2C);
    // 0x80265A24: lw          $s1, 0x30($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X30);
    // 0x80265A28: lw          $s2, 0x34($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X34);
    // 0x80265A2C: lw          $s3, 0x38($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X38);
    // 0x80265A30: lw          $s4, 0x3C($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X3C);
    // 0x80265A34: lw          $s5, 0x40($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X40);
    // 0x80265A38: jr          $ra
    // 0x80265A3C: addiu       $sp, $sp, 0xB8
    ctx->r29 = ADD32(ctx->r29, 0XB8);
    return;
    // 0x80265A3C: addiu       $sp, $sp, 0xB8
    ctx->r29 = ADD32(ctx->r29, 0XB8);
;}
RECOMP_FUNC void ovl_8024B800_func_802655F8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802655F8: mul.s       $f6, $f10, $f22
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f6.fl = MUL_S(ctx->f10.fl, ctx->f22.fl);
    // 0x802655FC: lwc1        $f12, 0x98($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X98);
    // 0x80265600: div.s       $f20, $f6, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f20.fl = DIV_S(ctx->f6.fl, ctx->f0.fl);
    // 0x80265604: cvt.d.s     $f4, $f12
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); 
    ctx->f4.d = CVT_D_S(ctx->f12.fl);
    // 0x80265608: c.lt.s      $f8, $f20
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 20);
    c1cs = ctx->f8.fl < ctx->f20.fl;
    // 0x8026560C: cvt.d.s     $f16, $f20
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f20.fl); 
    ctx->f16.d = CVT_D_S(ctx->f20.fl);
    // 0x80265610: bc1f        L_80265628
    if (!c1cs) {
        // 0x80265614: lui         $at, 0x4012
        ctx->r1 = S32(0X4012 << 16);
            goto L_80265628;
    }
    // 0x80265614: lui         $at, 0x4012
    ctx->r1 = S32(0X4012 << 16);
    // 0x80265618: mtc1        $at, $f1
    ctx->f_odd[(1 - 1) * 2] = ctx->r1;
    // 0x8026561C: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x80265620: b           L_80265638
    // 0x80265624: nop

        goto L_80265638;
    // 0x80265624: nop

L_80265628:
    // 0x80265628: lui         $at, 0xC012
    ctx->r1 = S32(0XC012 << 16);
    // 0x8026562C: mtc1        $at, $f1
    ctx->f_odd[(1 - 1) * 2] = ctx->r1;
    // 0x80265630: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x80265634: nop

L_80265638:
    // 0x80265638: lui         $at, 0x8028
    ctx->r1 = S32(0X8028 << 16);
    // 0x8026563C: add.d       $f18, $f16, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f16.d); NAN_CHECK(ctx->f0.d); 
    ctx->f18.d = ctx->f16.d + ctx->f0.d;
    // 0x80265640: lwc1        $f11, -0x2DD0($at)
    ctx->f_odd[(11 - 1) * 2] = MEM_W(ctx->r1, -0X2DD0);
    // 0x80265644: lwc1        $f10, -0x2DCC($at)
    ctx->f10.u32l = MEM_W(ctx->r1, -0X2DCC);
    // 0x80265648: cvt.s.d     $f20, $f18
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.d); 
    ctx->f20.fl = CVT_S_D(ctx->f18.d);
    // 0x8026564C: add.d       $f6, $f4, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f10.d); 
    ctx->f6.d = ctx->f4.d + ctx->f10.d;
    // 0x80265650: swc1        $f20, 0xA0($sp)
    MEM_W(0XA0, ctx->r29) = ctx->f20.u32l;
    // 0x80265654: jal         0x80081040
    // 0x80265658: cvt.s.d     $f22, $f6
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.d); 
    ctx->f22.fl = CVT_S_D(ctx->f6.d);
    func_80081040(rdram, ctx);
        goto after_0;
    // 0x80265658: cvt.s.d     $f22, $f6
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.d); 
    ctx->f22.fl = CVT_S_D(ctx->f6.d);
    after_0:
    // 0x8026565C: jal         0x80272AEC
    // 0x80265660: mov.s       $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    ctx->f12.fl = ctx->f0.fl;
    ovl_8024B800_func_80272AEC(rdram, ctx);
        goto after_1;
    // 0x80265660: mov.s       $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    ctx->f12.fl = ctx->f0.fl;
    after_1:
    // 0x80265664: lui         $at, 0x8028
    ctx->r1 = S32(0X8028 << 16);
    // 0x80265668: lwc1        $f17, -0x2DC8($at)
    ctx->f_odd[(17 - 1) * 2] = MEM_W(ctx->r1, -0X2DC8);
    // 0x8026566C: lwc1        $f16, -0x2DC4($at)
    ctx->f16.u32l = MEM_W(ctx->r1, -0X2DC4);
    // 0x80265670: cvt.d.s     $f8, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f8.d = CVT_D_S(ctx->f0.fl);
    // 0x80265674: mul.d       $f18, $f8, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f16.d); 
    ctx->f18.d = MUL_D(ctx->f8.d, ctx->f16.d);
    // 0x80265678: lui         $at, 0x3FF0
    ctx->r1 = S32(0X3FF0 << 16);
    // 0x8026567C: mtc1        $at, $f5
    ctx->f_odd[(5 - 1) * 2] = ctx->r1;
    // 0x80265680: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x80265684: lwc1        $f8, 0x9C($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X9C);
    // 0x80265688: cvt.s.d     $f12, $f18
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.d); 
    ctx->f12.fl = CVT_S_D(ctx->f18.d);
    // 0x8026568C: lui         $s4, 0x8012
    ctx->r20 = S32(0X8012 << 16);
    // 0x80265690: cvt.d.s     $f10, $f12
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); 
    ctx->f10.d = CVT_D_S(ctx->f12.fl);
    // 0x80265694: c.lt.d      $f4, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f4.d < ctx->f10.d;
    // 0x80265698: addiu       $s4, $s4, 0xB78
    ctx->r20 = ADD32(ctx->r20, 0XB78);
    // 0x8026569C: bc1f        L_802656B0
    if (!c1cs) {
        // 0x802656A0: or          $s3, $zero, $zero
        ctx->r19 = 0 | 0;
            goto L_802656B0;
    }
    // 0x802656A0: or          $s3, $zero, $zero
    ctx->r19 = 0 | 0;
    // 0x802656A4: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x802656A8: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    // 0x802656AC: nop

L_802656B0:
    // 0x802656B0: lui         $at, 0x8028
    ctx->r1 = S32(0X8028 << 16);
    // 0x802656B4: lwc1        $f6, -0x2DC0($at)
    ctx->f6.u32l = MEM_W(ctx->r1, -0X2DC0);
    // 0x802656B8: addiu       $s1, $zero, 0x1
    ctx->r17 = ADD32(0, 0X1);
    // 0x802656BC: div.s       $f16, $f6, $f8
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f16.fl = DIV_S(ctx->f6.fl, ctx->f8.fl);
    // 0x802656C0: mul.s       $f18, $f16, $f12
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f18.fl = MUL_S(ctx->f16.fl, ctx->f12.fl);
    // 0x802656C4: cfc1        $t0, $FpcCsr
    ctx->r8 = get_cop1_cs();
    // 0x802656C8: ctc1        $s1, $FpcCsr
    set_cop1_cs(ctx->r17);
    // 0x802656CC: nop

    // 0x802656D0: cvt.w.s     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    ctx->f4.u32l = CVT_W_S(ctx->f18.fl);
    // 0x802656D4: cfc1        $s1, $FpcCsr
    ctx->r17 = get_cop1_cs();
    // 0x802656D8: nop

    // 0x802656DC: andi        $s1, $s1, 0x78
    ctx->r17 = ctx->r17 & 0X78;
    // 0x802656E0: beq         $s1, $zero, L_8026572C
    if (ctx->r17 == 0) {
        // 0x802656E4: lui         $at, 0x4F00
        ctx->r1 = S32(0X4F00 << 16);
            goto L_8026572C;
    }
    // 0x802656E4: lui         $at, 0x4F00
    ctx->r1 = S32(0X4F00 << 16);
    // 0x802656E8: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x802656EC: addiu       $s1, $zero, 0x1
    ctx->r17 = ADD32(0, 0X1);
    // 0x802656F0: sub.s       $f4, $f18, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f4.fl = ctx->f18.fl - ctx->f4.fl;
    // 0x802656F4: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x802656F8: ctc1        $s1, $FpcCsr
    set_cop1_cs(ctx->r17);
    // 0x802656FC: nop

    // 0x80265700: cvt.w.s     $f4, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    ctx->f4.u32l = CVT_W_S(ctx->f4.fl);
    // 0x80265704: cfc1        $s1, $FpcCsr
    ctx->r17 = get_cop1_cs();
    // 0x80265708: nop

    // 0x8026570C: andi        $s1, $s1, 0x78
    ctx->r17 = ctx->r17 & 0X78;
    // 0x80265710: bne         $s1, $zero, L_80265724
    if (ctx->r17 != 0) {
        // 0x80265714: nop
    
            goto L_80265724;
    }
    // 0x80265714: nop

    // 0x80265718: mfc1        $s1, $f4
    ctx->r17 = (int32_t)ctx->f4.u32l;
    // 0x8026571C: b           L_8026573C
    // 0x80265720: or          $s1, $s1, $at
    ctx->r17 = ctx->r17 | ctx->r1;
        goto L_8026573C;
    // 0x80265720: or          $s1, $s1, $at
    ctx->r17 = ctx->r17 | ctx->r1;
L_80265724:
    // 0x80265724: b           L_8026573C
    // 0x80265728: addiu       $s1, $zero, -0x1
    ctx->r17 = ADD32(0, -0X1);
        goto L_8026573C;
    // 0x80265728: addiu       $s1, $zero, -0x1
    ctx->r17 = ADD32(0, -0X1);
L_8026572C:
    // 0x8026572C: mfc1        $s1, $f4
    ctx->r17 = (int32_t)ctx->f4.u32l;
    // 0x80265730: nop

    // 0x80265734: bltz        $s1, L_80265724
    if (SIGNED(ctx->r17) < 0) {
        // 0x80265738: nop
    
            goto L_80265724;
    }
    // 0x80265738: nop

L_8026573C:
    // 0x8026573C: ctc1        $t0, $FpcCsr
    set_cop1_cs(ctx->r8);
    // 0x80265740: sltiu       $at, $s1, 0x6
    ctx->r1 = ctx->r17 < 0X6 ? 1 : 0;
    // 0x80265744: bne         $at, $zero, L_80265750
    if (ctx->r1 != 0) {
        // 0x80265748: nop
    
            goto L_80265750;
    }
    // 0x80265748: nop

    // 0x8026574C: addiu       $s1, $zero, 0x5
    ctx->r17 = ADD32(0, 0X5);
L_80265750:
    // 0x80265750: bne         $s1, $zero, L_8026575C
    if (ctx->r17 != 0) {
        // 0x80265754: lui         $at, 0x8012
        ctx->r1 = S32(0X8012 << 16);
            goto L_8026575C;
    }
    // 0x80265754: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x80265758: addiu       $s1, $zero, 0x1
    ctx->r17 = ADD32(0, 0X1);
L_8026575C:
    // 0x8026575C: sh          $s1, 0xB3C($at)
    MEM_H(0XB3C, ctx->r1) = ctx->r17;
    // 0x80265760: lw          $s0, 0x18($s5)
    ctx->r16 = MEM_W(ctx->r21, 0X18);
    // 0x80265764: addiu       $s2, $zero, 0x6
    ctx->r18 = ADD32(0, 0X6);
    // 0x80265768: addiu       $s0, $s0, 0xAA8
    ctx->r16 = ADD32(ctx->r16, 0XAA8);
L_8026576C:
    // 0x8026576C: lhu         $t1, 0xC($s0)
    ctx->r9 = MEM_HU(ctx->r16, 0XC);
    // 0x80265770: nop

    // 0x80265774: beq         $t1, $zero, L_802658B0
    if (ctx->r9 == 0) {
        // 0x80265778: nop
    
            goto L_802658B0;
    }
    // 0x80265778: nop

    // 0x8026577C: lhu         $v0, 0x12($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X12);
    // 0x80265780: lui         $v1, 0x8012
    ctx->r3 = S32(0X8012 << 16);
    // 0x80265784: andi        $t2, $v0, 0x200
    ctx->r10 = ctx->r2 & 0X200;
    // 0x80265788: bne         $t2, $zero, L_80265868
    if (ctx->r10 != 0) {
        // 0x8026578C: nop
    
            goto L_80265868;
    }
    // 0x8026578C: nop

    // 0x80265790: lw          $v1, 0xB44($v1)
    ctx->r3 = MEM_W(ctx->r3, 0XB44);
    // 0x80265794: nop

    // 0x80265798: sltiu       $at, $v1, 0x3D
    ctx->r1 = ctx->r3 < 0X3D ? 1 : 0;
    // 0x8026579C: beq         $at, $zero, L_802658B0
    if (ctx->r1 == 0) {
        // 0x802657A0: sltiu       $at, $v1, 0x29
        ctx->r1 = ctx->r3 < 0X29 ? 1 : 0;
            goto L_802658B0;
    }
    // 0x802657A0: sltiu       $at, $v1, 0x29
    ctx->r1 = ctx->r3 < 0X29 ? 1 : 0;
    // 0x802657A4: bne         $at, $zero, L_802657CC
    if (ctx->r1 != 0) {
        // 0x802657A8: nop
    
            goto L_802657CC;
    }
    // 0x802657A8: nop

    // 0x802657AC: lhu         $t3, 0x0($s4)
    ctx->r11 = MEM_HU(ctx->r20, 0X0);
    // 0x802657B0: andi        $t4, $v0, 0x100
    ctx->r12 = ctx->r2 & 0X100;
    // 0x802657B4: beq         $s2, $t3, L_802657CC
    if (ctx->r18 == ctx->r11) {
        // 0x802657B8: nop
    
            goto L_802657CC;
    }
    // 0x802657B8: nop

    // 0x802657BC: bne         $t4, $zero, L_80265868
    if (ctx->r12 != 0) {
        // 0x802657C0: nop
    
            goto L_80265868;
    }
    // 0x802657C0: nop

    // 0x802657C4: b           L_80265868
    // 0x802657C8: sb          $zero, 0x0($s0)
    MEM_B(0X0, ctx->r16) = 0;
        goto L_80265868;
    // 0x802657C8: sb          $zero, 0x0($s0)
    MEM_B(0X0, ctx->r16) = 0;
L_802657CC:
    // 0x802657CC: jal         0x80081040
    // 0x802657D0: mov.s       $f12, $f22
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 22);
    ctx->f12.fl = ctx->f22.fl;
    func_80081040(rdram, ctx);
        goto after_2;
    // 0x802657D0: mov.s       $f12, $f22
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 22);
    ctx->f12.fl = ctx->f22.fl;
    after_2:
    // 0x802657D4: mul.s       $f10, $f0, $f20
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f10.fl = MUL_S(ctx->f0.fl, ctx->f20.fl);
    // 0x802657D8: lwc1        $f6, 0xB4($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0XB4);
    // 0x802657DC: nop

    // 0x802657E0: add.s       $f8, $f10, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f10.fl + ctx->f6.fl;
    // 0x802657E4: cfc1        $t5, $FpcCsr
    ctx->r13 = get_cop1_cs();
    // 0x802657E8: nop

    // 0x802657EC: ori         $at, $t5, 0x3
    ctx->r1 = ctx->r13 | 0X3;
    // 0x802657F0: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x802657F4: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x802657F8: nop

    // 0x802657FC: cvt.w.s     $f16, $f8
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    ctx->f16.u32l = CVT_W_S(ctx->f8.fl);
    // 0x80265800: mfc1        $t6, $f16
    ctx->r14 = (int32_t)ctx->f16.u32l;
    // 0x80265804: ctc1        $t5, $FpcCsr
    set_cop1_cs(ctx->r13);
    // 0x80265808: sh          $t6, 0x2E($s0)
    MEM_H(0X2E, ctx->r16) = ctx->r14;
    // 0x8026580C: jal         0x80080E80
    // 0x80265810: mov.s       $f12, $f22
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 22);
    ctx->f12.fl = ctx->f22.fl;
    func_80080E80(rdram, ctx);
        goto after_3;
    // 0x80265810: mov.s       $f12, $f22
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 22);
    ctx->f12.fl = ctx->f22.fl;
    after_3:
    // 0x80265814: mul.s       $f18, $f0, $f20
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f18.fl = MUL_S(ctx->f0.fl, ctx->f20.fl);
    // 0x80265818: lwc1        $f4, 0xB0($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0XB0);
    // 0x8026581C: lhu         $t9, 0xE($s0)
    ctx->r25 = MEM_HU(ctx->r16, 0XE);
    // 0x80265820: add.s       $f10, $f18, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f10.fl = ctx->f18.fl + ctx->f4.fl;
    // 0x80265824: cfc1        $t7, $FpcCsr
    ctx->r15 = get_cop1_cs();
    // 0x80265828: nop

    // 0x8026582C: ori         $at, $t7, 0x3
    ctx->r1 = ctx->r15 | 0X3;
    // 0x80265830: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x80265834: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x80265838: addiu       $at, $zero, 0x1D
    ctx->r1 = ADD32(0, 0X1D);
    // 0x8026583C: cvt.w.s     $f6, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    ctx->f6.u32l = CVT_W_S(ctx->f10.fl);
    // 0x80265840: mfc1        $t8, $f6
    ctx->r24 = (int32_t)ctx->f6.u32l;
    // 0x80265844: ctc1        $t7, $FpcCsr
    set_cop1_cs(ctx->r15);
    // 0x80265848: beq         $t9, $at, L_80265868
    if (ctx->r25 == ctx->r1) {
        // 0x8026584C: sh          $t8, 0x30($s0)
        MEM_H(0X30, ctx->r16) = ctx->r24;
            goto L_80265868;
    }
    // 0x8026584C: sh          $t8, 0x30($s0)
    MEM_H(0X30, ctx->r16) = ctx->r24;
    // 0x80265850: lhu         $t0, 0x0($s4)
    ctx->r8 = MEM_HU(ctx->r20, 0X0);
    // 0x80265854: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80265858: bne         $s2, $t0, L_80265868
    if (ctx->r18 != ctx->r8) {
        // 0x8026585C: lui         $a1, 0x8028
        ctx->r5 = S32(0X8028 << 16);
            goto L_80265868;
    }
    // 0x8026585C: lui         $a1, 0x8028
    ctx->r5 = S32(0X8028 << 16);
    // 0x80265860: jal         0x8026F2EC
    // 0x80265864: addiu       $a1, $a1, -0x3410
    ctx->r5 = ADD32(ctx->r5, -0X3410);
    ovl_8024B800_func_8026F2EC(rdram, ctx);
        goto after_4;
    // 0x80265864: addiu       $a1, $a1, -0x3410
    ctx->r5 = ADD32(ctx->r5, -0X3410);
    after_4:
L_80265868:
    // 0x80265868: addiu       $s1, $s1, -0x1
    ctx->r17 = ADD32(ctx->r17, -0X1);
    // 0x8026586C: bne         $s1, $zero, L_8026587C
    if (ctx->r17 != 0) {
        // 0x80265870: addiu       $v0, $zero, 0x7
        ctx->r2 = ADD32(0, 0X7);
            goto L_8026587C;
    }
    // 0x80265870: addiu       $v0, $zero, 0x7
    ctx->r2 = ADD32(0, 0X7);
    // 0x80265874: b           L_802658C4
    // 0x80265878: or          $s3, $zero, $zero
    ctx->r19 = 0 | 0;
        goto L_802658C4;
    // 0x80265878: or          $s3, $zero, $zero
    ctx->r19 = 0 | 0;
L_8026587C:
    // 0x8026587C: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x80265880: lwc1        $f16, 0xA0($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0XA0);
    // 0x80265884: nop

    // 0x80265888: c.lt.s      $f8, $f16
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f8.fl < ctx->f16.fl;
    // 0x8026588C: nop

    // 0x80265890: bc1f        L_802658A0
    if (!c1cs) {
        // 0x80265894: nop
    
            goto L_802658A0;
    }
    // 0x80265894: nop

    // 0x80265898: b           L_802658A0
    // 0x8026589C: addiu       $v0, $zero, -0x7
    ctx->r2 = ADD32(0, -0X7);
        goto L_802658A0;
    // 0x8026589C: addiu       $v0, $zero, -0x7
    ctx->r2 = ADD32(0, -0X7);
L_802658A0:
    // 0x802658A0: mtc1        $v0, $f18
    ctx->f18.u32l = ctx->r2;
    // 0x802658A4: nop

    // 0x802658A8: cvt.s.w     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    ctx->f4.fl = CVT_S_W(ctx->f18.u32l);
    // 0x802658AC: add.s       $f20, $f20, $f4
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f20.fl = ctx->f20.fl + ctx->f4.fl;
L_802658B0:
    // 0x802658B0: addiu       $s3, $s3, 0x1
    ctx->r19 = ADD32(ctx->r19, 0X1);
    // 0x802658B4: sltiu       $at, $s3, 0xA
    ctx->r1 = ctx->r19 < 0XA ? 1 : 0;
    // 0x802658B8: bne         $at, $zero, L_8026576C
    if (ctx->r1 != 0) {
        // 0x802658BC: addiu       $s0, $s0, -0xF8
        ctx->r16 = ADD32(ctx->r16, -0XF8);
            goto L_8026576C;
    }
    // 0x802658BC: addiu       $s0, $s0, -0xF8
    ctx->r16 = ADD32(ctx->r16, -0XF8);
    // 0x802658C0: or          $s3, $zero, $zero
    ctx->r19 = 0 | 0;
L_802658C4:
    // 0x802658C4: lbu         $v0, 0x2($s5)
    ctx->r2 = MEM_BU(ctx->r21, 0X2);
    // 0x802658C8: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x802658CC: bne         $v1, $v0, L_802658DC
    if (ctx->r3 != ctx->r2) {
        // 0x802658D0: addiu       $a0, $zero, 0x5
        ctx->r4 = ADD32(0, 0X5);
            goto L_802658DC;
    }
    // 0x802658D0: addiu       $a0, $zero, 0x5
    ctx->r4 = ADD32(0, 0X5);
    // 0x802658D4: addiu       $t1, $zero, 0x3
    ctx->r9 = ADD32(0, 0X3);
    // 0x802658D8: sw          $t1, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->r9;
L_802658DC:
    // 0x802658DC: bne         $a0, $v0, L_802658E8
    if (ctx->r4 != ctx->r2) {
        // 0x802658E0: addiu       $t2, $zero, 0x5
        ctx->r10 = ADD32(0, 0X5);
            goto L_802658E8;
    }
    // 0x802658E0: addiu       $t2, $zero, 0x5
    ctx->r10 = ADD32(0, 0X5);
    // 0x802658E4: sw          $t2, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->r10;
L_802658E8:
    // 0x802658E8: lw          $t3, 0x24($s5)
    ctx->r11 = MEM_W(ctx->r21, 0X24);
    // 0x802658EC: addiu       $t4, $zero, 0x5
    ctx->r12 = ADD32(0, 0X5);
    // 0x802658F0: lbu         $v0, 0x2($t3)
    ctx->r2 = MEM_BU(ctx->r11, 0X2);
    // 0x802658F4: addiu       $t5, $zero, 0x2
    ctx->r13 = ADD32(0, 0X2);
    // 0x802658F8: bne         $v1, $v0, L_80265904
    if (ctx->r3 != ctx->r2) {
        // 0x802658FC: nop
    
            goto L_80265904;
    }
    // 0x802658FC: nop

    // 0x80265900: sw          $t4, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->r12;
L_80265904:
    // 0x80265904: bne         $a0, $v0, L_80265910
    if (ctx->r4 != ctx->r2) {
        // 0x80265908: nop
    
            goto L_80265910;
    }
    // 0x80265908: nop

    // 0x8026590C: sw          $t5, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->r13;
L_80265910:
    // 0x80265910: lh          $t6, 0x8B8($s5)
    ctx->r14 = MEM_H(ctx->r21, 0X8B8);
    // 0x80265914: nop

    // 0x80265918: mtc1        $t6, $f10
    ctx->f10.u32l = ctx->r14;
    // 0x8026591C: jal         0x802645E0
    // 0x80265920: cvt.s.w     $f12, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    ctx->f12.fl = CVT_S_W(ctx->f10.u32l);
    ovl_8024B800_func_802645E0(rdram, ctx);
        goto after_5;
    // 0x80265920: cvt.s.w     $f12, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    ctx->f12.fl = CVT_S_W(ctx->f10.u32l);
    after_5:
    // 0x80265924: sll         $t7, $v0, 2
    ctx->r15 = S32(ctx->r2 << 2);
    // 0x80265928: lui         $s2, 0x800B
    ctx->r18 = S32(0X800B << 16);
    // 0x8026592C: lw          $t8, 0x70($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X70);
    // 0x80265930: addu        $s2, $s2, $t7
    ctx->r18 = ADD32(ctx->r18, ctx->r15);
    // 0x80265934: lw          $s2, -0x3F3C($s2)
    ctx->r18 = MEM_W(ctx->r18, -0X3F3C);
    // 0x80265938: beq         $t8, $zero, L_80265A0C
    if (ctx->r24 == 0) {
        // 0x8026593C: sll         $s1, $zero, 5
        ctx->r17 = S32(0 << 5);
            goto L_80265A0C;
    }
    // 0x8026593C: sll         $s1, $zero, 5
    ctx->r17 = S32(0 << 5);
    // 0x80265940: subu        $s1, $s1, $zero
    ctx->r17 = SUB32(ctx->r17, 0);
    // 0x80265944: sll         $s1, $s1, 3
    ctx->r17 = S32(ctx->r17 << 3);
    // 0x80265948: addiu       $s4, $zero, 0x9B0
    ctx->r20 = ADD32(0, 0X9B0);
L_8026594C:
    // 0x8026594C: lw          $t9, 0x18($s5)
    ctx->r25 = MEM_W(ctx->r21, 0X18);
    // 0x80265950: lw          $t2, 0x6C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X6C);
    // 0x80265954: addu        $s0, $t9, $s1
    ctx->r16 = ADD32(ctx->r25, ctx->r17);
    // 0x80265958: lhu         $t0, 0x10A($s0)
    ctx->r8 = MEM_HU(ctx->r16, 0X10A);
    // 0x8026595C: addiu       $s0, $s0, 0xF8
    ctx->r16 = ADD32(ctx->r16, 0XF8);
    // 0x80265960: andi        $t1, $t0, 0x200
    ctx->r9 = ctx->r8 & 0X200;
    // 0x80265964: bne         $t1, $zero, L_802659F8
    if (ctx->r9 != 0) {
        // 0x80265968: lw          $t8, 0x70($sp)
        ctx->r24 = MEM_W(ctx->r29, 0X70);
            goto L_802659F8;
    }
    // 0x80265968: lw          $t8, 0x70($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X70);
    // 0x8026596C: lbu         $v1, 0x3($s2)
    ctx->r3 = MEM_BU(ctx->r18, 0X3);
    // 0x80265970: addiu       $t6, $zero, 0xC
    ctx->r14 = ADD32(0, 0XC);
    // 0x80265974: sltu        $at, $v1, $t2
    ctx->r1 = ctx->r3 < ctx->r10 ? 1 : 0;
    // 0x80265978: beq         $at, $zero, L_802659B4
    if (ctx->r1 == 0) {
        // 0x8026597C: nop
    
            goto L_802659B4;
    }
    // 0x8026597C: nop

    // 0x80265980: lw          $v0, 0x24($s5)
    ctx->r2 = MEM_W(ctx->r21, 0X24);
    // 0x80265984: addiu       $at, $zero, 0x5
    ctx->r1 = ADD32(0, 0X5);
    // 0x80265988: lbu         $t3, 0x2($v0)
    ctx->r11 = MEM_BU(ctx->r2, 0X2);
    // 0x8026598C: addu        $t4, $v0, $v1
    ctx->r12 = ADD32(ctx->r2, ctx->r3);
    // 0x80265990: bne         $t3, $at, L_802659A8
    if (ctx->r11 != ctx->r1) {
        // 0x80265994: nop
    
            goto L_802659A8;
    }
    // 0x80265994: nop

    // 0x80265998: jal         0x80264E0C
    // 0x8026599C: or          $a0, $s5, $zero
    ctx->r4 = ctx->r21 | 0;
    ovl_8024B800_func_80264E0C(rdram, ctx);
        goto after_6;
    // 0x8026599C: or          $a0, $s5, $zero
    ctx->r4 = ctx->r21 | 0;
    after_6:
    // 0x802659A0: b           L_802659B8
    // 0x802659A4: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
        goto L_802659B8;
    // 0x802659A4: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
L_802659A8:
    // 0x802659A8: lb          $t5, 0x88E($t4)
    ctx->r13 = MEM_B(ctx->r12, 0X88E);
    // 0x802659AC: b           L_802659B8
    // 0x802659B0: sb          $t5, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r13;
        goto L_802659B8;
    // 0x802659B0: sb          $t5, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r13;
L_802659B4:
    // 0x802659B4: sb          $t6, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r14;
L_802659B8:
    // 0x802659B8: lbu         $t7, 0xA($s0)
    ctx->r15 = MEM_BU(ctx->r16, 0XA);
    // 0x802659BC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802659C0: slti        $at, $t7, 0xB
    ctx->r1 = SIGNED(ctx->r15) < 0XB ? 1 : 0;
    // 0x802659C4: beq         $at, $zero, L_802659D4
    if (ctx->r1 == 0) {
        // 0x802659C8: or          $a1, $s2, $zero
        ctx->r5 = ctx->r18 | 0;
            goto L_802659D4;
    }
    // 0x802659C8: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    // 0x802659CC: b           L_802659D8
    // 0x802659D0: addiu       $v0, $zero, 0x1F
    ctx->r2 = ADD32(0, 0X1F);
        goto L_802659D8;
    // 0x802659D0: addiu       $v0, $zero, 0x1F
    ctx->r2 = ADD32(0, 0X1F);
L_802659D4:
    // 0x802659D4: addiu       $v0, $zero, 0x29
    ctx->r2 = ADD32(0, 0X29);
L_802659D8:
    // 0x802659D8: jal         0x80264520
    // 0x802659DC: andi        $a2, $v0, 0xFFFF
    ctx->r6 = ctx->r2 & 0XFFFF;
    ovl_8024B800_func_80264520(rdram, ctx);
        goto after_7;
    // 0x802659DC: andi        $a2, $v0, 0xFFFF
    ctx->r6 = ctx->r2 & 0XFFFF;
    after_7:
    // 0x802659E0: lh          $a1, 0x8B8($s5)
    ctx->r5 = MEM_H(ctx->r21, 0X8B8);
    // 0x802659E4: jal         0x80264710
    // 0x802659E8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_8024B800_func_80264710(rdram, ctx);
        goto after_8;
    // 0x802659E8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_8:
    // 0x802659EC: addiu       $s3, $s3, 0x1
    ctx->r19 = ADD32(ctx->r19, 0X1);
    // 0x802659F0: addiu       $s2, $s2, 0x4
    ctx->r18 = ADD32(ctx->r18, 0X4);
    // 0x802659F4: lw          $t8, 0x70($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X70);
L_802659F8:
    // 0x802659F8: addiu       $s1, $s1, 0xF8
    ctx->r17 = ADD32(ctx->r17, 0XF8);
    // 0x802659FC: beq         $s3, $t8, L_80265A10
    if (ctx->r19 == ctx->r24) {
        // 0x80265A00: lw          $ra, 0x44($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X44);
            goto L_80265A10;
    }
    // 0x80265A00: lw          $ra, 0x44($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X44);
    // 0x80265A04: bne         $s1, $s4, L_8026594C
    if (ctx->r17 != ctx->r20) {
        // 0x80265A08: nop
    
            goto L_8026594C;
    }
    // 0x80265A08: nop

L_80265A0C:
    // 0x80265A0C: lw          $ra, 0x44($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X44);
L_80265A10:
    // 0x80265A10: lwc1        $f21, 0x18($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X18);
    // 0x80265A14: lwc1        $f20, 0x1C($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x80265A18: lwc1        $f23, 0x20($sp)
    ctx->f_odd[(23 - 1) * 2] = MEM_W(ctx->r29, 0X20);
    // 0x80265A1C: lwc1        $f22, 0x24($sp)
    ctx->f22.u32l = MEM_W(ctx->r29, 0X24);
    // 0x80265A20: lw          $s0, 0x2C($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X2C);
    // 0x80265A24: lw          $s1, 0x30($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X30);
    // 0x80265A28: lw          $s2, 0x34($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X34);
    // 0x80265A2C: lw          $s3, 0x38($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X38);
    // 0x80265A30: lw          $s4, 0x3C($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X3C);
    // 0x80265A34: lw          $s5, 0x40($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X40);
    // 0x80265A38: jr          $ra
    // 0x80265A3C: addiu       $sp, $sp, 0xB8
    ctx->r29 = ADD32(ctx->r29, 0XB8);
    return;
    // 0x80265A3C: addiu       $sp, $sp, 0xB8
    ctx->r29 = ADD32(ctx->r29, 0XB8);
;}
RECOMP_FUNC void ovl_8024B800_func_802656F4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802656F4: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x802656F8: ctc1        $s1, $FpcCsr
    set_cop1_cs(ctx->r17);
    // 0x802656FC: nop

    // 0x80265700: cvt.w.s     $f4, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    ctx->f4.u32l = CVT_W_S(ctx->f4.fl);
    // 0x80265704: cfc1        $s1, $FpcCsr
    ctx->r17 = get_cop1_cs();
    // 0x80265708: nop

    // 0x8026570C: andi        $s1, $s1, 0x78
    ctx->r17 = ctx->r17 & 0X78;
    // 0x80265710: bne         $s1, $zero, L_80265724
    if (ctx->r17 != 0) {
        // 0x80265714: nop
    
            goto L_80265724;
    }
    // 0x80265714: nop

    // 0x80265718: mfc1        $s1, $f4
    ctx->r17 = (int32_t)ctx->f4.u32l;
    // 0x8026571C: b           L_8026573C
    // 0x80265720: or          $s1, $s1, $at
    ctx->r17 = ctx->r17 | ctx->r1;
        goto L_8026573C;
    // 0x80265720: or          $s1, $s1, $at
    ctx->r17 = ctx->r17 | ctx->r1;
L_80265724:
    // 0x80265724: b           L_8026573C
    // 0x80265728: addiu       $s1, $zero, -0x1
    ctx->r17 = ADD32(0, -0X1);
        goto L_8026573C;
    // 0x80265728: addiu       $s1, $zero, -0x1
    ctx->r17 = ADD32(0, -0X1);
    // 0x8026572C: mfc1        $s1, $f4
    ctx->r17 = (int32_t)ctx->f4.u32l;
    // 0x80265730: nop

    // 0x80265734: bltz        $s1, L_80265724
    if (SIGNED(ctx->r17) < 0) {
        // 0x80265738: nop
    
            goto L_80265724;
    }
    // 0x80265738: nop

L_8026573C:
    // 0x8026573C: ctc1        $t0, $FpcCsr
    set_cop1_cs(ctx->r8);
    // 0x80265740: sltiu       $at, $s1, 0x6
    ctx->r1 = ctx->r17 < 0X6 ? 1 : 0;
    // 0x80265744: bne         $at, $zero, L_80265750
    if (ctx->r1 != 0) {
        // 0x80265748: nop
    
            goto L_80265750;
    }
    // 0x80265748: nop

    // 0x8026574C: addiu       $s1, $zero, 0x5
    ctx->r17 = ADD32(0, 0X5);
L_80265750:
    // 0x80265750: bne         $s1, $zero, L_8026575C
    if (ctx->r17 != 0) {
        // 0x80265754: lui         $at, 0x8012
        ctx->r1 = S32(0X8012 << 16);
            goto L_8026575C;
    }
    // 0x80265754: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x80265758: addiu       $s1, $zero, 0x1
    ctx->r17 = ADD32(0, 0X1);
L_8026575C:
    // 0x8026575C: sh          $s1, 0xB3C($at)
    MEM_H(0XB3C, ctx->r1) = ctx->r17;
    // 0x80265760: lw          $s0, 0x18($s5)
    ctx->r16 = MEM_W(ctx->r21, 0X18);
    // 0x80265764: addiu       $s2, $zero, 0x6
    ctx->r18 = ADD32(0, 0X6);
    // 0x80265768: addiu       $s0, $s0, 0xAA8
    ctx->r16 = ADD32(ctx->r16, 0XAA8);
L_8026576C:
    // 0x8026576C: lhu         $t1, 0xC($s0)
    ctx->r9 = MEM_HU(ctx->r16, 0XC);
    // 0x80265770: nop

    // 0x80265774: beq         $t1, $zero, L_802658B0
    if (ctx->r9 == 0) {
        // 0x80265778: nop
    
            goto L_802658B0;
    }
    // 0x80265778: nop

    // 0x8026577C: lhu         $v0, 0x12($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X12);
    // 0x80265780: lui         $v1, 0x8012
    ctx->r3 = S32(0X8012 << 16);
    // 0x80265784: andi        $t2, $v0, 0x200
    ctx->r10 = ctx->r2 & 0X200;
    // 0x80265788: bne         $t2, $zero, L_80265868
    if (ctx->r10 != 0) {
        // 0x8026578C: nop
    
            goto L_80265868;
    }
    // 0x8026578C: nop

    // 0x80265790: lw          $v1, 0xB44($v1)
    ctx->r3 = MEM_W(ctx->r3, 0XB44);
    // 0x80265794: nop

    // 0x80265798: sltiu       $at, $v1, 0x3D
    ctx->r1 = ctx->r3 < 0X3D ? 1 : 0;
    // 0x8026579C: beq         $at, $zero, L_802658B0
    if (ctx->r1 == 0) {
        // 0x802657A0: sltiu       $at, $v1, 0x29
        ctx->r1 = ctx->r3 < 0X29 ? 1 : 0;
            goto L_802658B0;
    }
    // 0x802657A0: sltiu       $at, $v1, 0x29
    ctx->r1 = ctx->r3 < 0X29 ? 1 : 0;
    // 0x802657A4: bne         $at, $zero, L_802657CC
    if (ctx->r1 != 0) {
        // 0x802657A8: nop
    
            goto L_802657CC;
    }
    // 0x802657A8: nop

    // 0x802657AC: lhu         $t3, 0x0($s4)
    ctx->r11 = MEM_HU(ctx->r20, 0X0);
    // 0x802657B0: andi        $t4, $v0, 0x100
    ctx->r12 = ctx->r2 & 0X100;
    // 0x802657B4: beq         $s2, $t3, L_802657CC
    if (ctx->r18 == ctx->r11) {
        // 0x802657B8: nop
    
            goto L_802657CC;
    }
    // 0x802657B8: nop

    // 0x802657BC: bne         $t4, $zero, L_80265868
    if (ctx->r12 != 0) {
        // 0x802657C0: nop
    
            goto L_80265868;
    }
    // 0x802657C0: nop

    // 0x802657C4: b           L_80265868
    // 0x802657C8: sb          $zero, 0x0($s0)
    MEM_B(0X0, ctx->r16) = 0;
        goto L_80265868;
    // 0x802657C8: sb          $zero, 0x0($s0)
    MEM_B(0X0, ctx->r16) = 0;
L_802657CC:
    // 0x802657CC: jal         0x80081040
    // 0x802657D0: mov.s       $f12, $f22
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 22);
    ctx->f12.fl = ctx->f22.fl;
    func_80081040(rdram, ctx);
        goto after_0;
    // 0x802657D0: mov.s       $f12, $f22
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 22);
    ctx->f12.fl = ctx->f22.fl;
    after_0:
    // 0x802657D4: mul.s       $f10, $f0, $f20
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f10.fl = MUL_S(ctx->f0.fl, ctx->f20.fl);
    // 0x802657D8: lwc1        $f6, 0xB4($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0XB4);
    // 0x802657DC: nop

    // 0x802657E0: add.s       $f8, $f10, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f10.fl + ctx->f6.fl;
    // 0x802657E4: cfc1        $t5, $FpcCsr
    ctx->r13 = get_cop1_cs();
    // 0x802657E8: nop

    // 0x802657EC: ori         $at, $t5, 0x3
    ctx->r1 = ctx->r13 | 0X3;
    // 0x802657F0: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x802657F4: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x802657F8: nop

    // 0x802657FC: cvt.w.s     $f16, $f8
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    ctx->f16.u32l = CVT_W_S(ctx->f8.fl);
    // 0x80265800: mfc1        $t6, $f16
    ctx->r14 = (int32_t)ctx->f16.u32l;
    // 0x80265804: ctc1        $t5, $FpcCsr
    set_cop1_cs(ctx->r13);
    // 0x80265808: sh          $t6, 0x2E($s0)
    MEM_H(0X2E, ctx->r16) = ctx->r14;
    // 0x8026580C: jal         0x80080E80
    // 0x80265810: mov.s       $f12, $f22
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 22);
    ctx->f12.fl = ctx->f22.fl;
    func_80080E80(rdram, ctx);
        goto after_1;
    // 0x80265810: mov.s       $f12, $f22
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 22);
    ctx->f12.fl = ctx->f22.fl;
    after_1:
    // 0x80265814: mul.s       $f18, $f0, $f20
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f18.fl = MUL_S(ctx->f0.fl, ctx->f20.fl);
    // 0x80265818: lwc1        $f4, 0xB0($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0XB0);
    // 0x8026581C: lhu         $t9, 0xE($s0)
    ctx->r25 = MEM_HU(ctx->r16, 0XE);
    // 0x80265820: add.s       $f10, $f18, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f10.fl = ctx->f18.fl + ctx->f4.fl;
    // 0x80265824: cfc1        $t7, $FpcCsr
    ctx->r15 = get_cop1_cs();
    // 0x80265828: nop

    // 0x8026582C: ori         $at, $t7, 0x3
    ctx->r1 = ctx->r15 | 0X3;
    // 0x80265830: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x80265834: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x80265838: addiu       $at, $zero, 0x1D
    ctx->r1 = ADD32(0, 0X1D);
    // 0x8026583C: cvt.w.s     $f6, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    ctx->f6.u32l = CVT_W_S(ctx->f10.fl);
    // 0x80265840: mfc1        $t8, $f6
    ctx->r24 = (int32_t)ctx->f6.u32l;
    // 0x80265844: ctc1        $t7, $FpcCsr
    set_cop1_cs(ctx->r15);
    // 0x80265848: beq         $t9, $at, L_80265868
    if (ctx->r25 == ctx->r1) {
        // 0x8026584C: sh          $t8, 0x30($s0)
        MEM_H(0X30, ctx->r16) = ctx->r24;
            goto L_80265868;
    }
    // 0x8026584C: sh          $t8, 0x30($s0)
    MEM_H(0X30, ctx->r16) = ctx->r24;
    // 0x80265850: lhu         $t0, 0x0($s4)
    ctx->r8 = MEM_HU(ctx->r20, 0X0);
    // 0x80265854: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80265858: bne         $s2, $t0, L_80265868
    if (ctx->r18 != ctx->r8) {
        // 0x8026585C: lui         $a1, 0x8028
        ctx->r5 = S32(0X8028 << 16);
            goto L_80265868;
    }
    // 0x8026585C: lui         $a1, 0x8028
    ctx->r5 = S32(0X8028 << 16);
    // 0x80265860: jal         0x8026F2EC
    // 0x80265864: addiu       $a1, $a1, -0x3410
    ctx->r5 = ADD32(ctx->r5, -0X3410);
    ovl_8024B800_func_8026F2EC(rdram, ctx);
        goto after_2;
    // 0x80265864: addiu       $a1, $a1, -0x3410
    ctx->r5 = ADD32(ctx->r5, -0X3410);
    after_2:
L_80265868:
    // 0x80265868: addiu       $s1, $s1, -0x1
    ctx->r17 = ADD32(ctx->r17, -0X1);
    // 0x8026586C: bne         $s1, $zero, L_8026587C
    if (ctx->r17 != 0) {
        // 0x80265870: addiu       $v0, $zero, 0x7
        ctx->r2 = ADD32(0, 0X7);
            goto L_8026587C;
    }
    // 0x80265870: addiu       $v0, $zero, 0x7
    ctx->r2 = ADD32(0, 0X7);
    // 0x80265874: b           L_802658C4
    // 0x80265878: or          $s3, $zero, $zero
    ctx->r19 = 0 | 0;
        goto L_802658C4;
    // 0x80265878: or          $s3, $zero, $zero
    ctx->r19 = 0 | 0;
L_8026587C:
    // 0x8026587C: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x80265880: lwc1        $f16, 0xA0($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0XA0);
    // 0x80265884: nop

    // 0x80265888: c.lt.s      $f8, $f16
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f8.fl < ctx->f16.fl;
    // 0x8026588C: nop

    // 0x80265890: bc1f        L_802658A0
    if (!c1cs) {
        // 0x80265894: nop
    
            goto L_802658A0;
    }
    // 0x80265894: nop

    // 0x80265898: b           L_802658A0
    // 0x8026589C: addiu       $v0, $zero, -0x7
    ctx->r2 = ADD32(0, -0X7);
        goto L_802658A0;
    // 0x8026589C: addiu       $v0, $zero, -0x7
    ctx->r2 = ADD32(0, -0X7);
L_802658A0:
    // 0x802658A0: mtc1        $v0, $f18
    ctx->f18.u32l = ctx->r2;
    // 0x802658A4: nop

    // 0x802658A8: cvt.s.w     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    ctx->f4.fl = CVT_S_W(ctx->f18.u32l);
    // 0x802658AC: add.s       $f20, $f20, $f4
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f20.fl = ctx->f20.fl + ctx->f4.fl;
L_802658B0:
    // 0x802658B0: addiu       $s3, $s3, 0x1
    ctx->r19 = ADD32(ctx->r19, 0X1);
    // 0x802658B4: sltiu       $at, $s3, 0xA
    ctx->r1 = ctx->r19 < 0XA ? 1 : 0;
    // 0x802658B8: bne         $at, $zero, L_8026576C
    if (ctx->r1 != 0) {
        // 0x802658BC: addiu       $s0, $s0, -0xF8
        ctx->r16 = ADD32(ctx->r16, -0XF8);
            goto L_8026576C;
    }
    // 0x802658BC: addiu       $s0, $s0, -0xF8
    ctx->r16 = ADD32(ctx->r16, -0XF8);
    // 0x802658C0: or          $s3, $zero, $zero
    ctx->r19 = 0 | 0;
L_802658C4:
    // 0x802658C4: lbu         $v0, 0x2($s5)
    ctx->r2 = MEM_BU(ctx->r21, 0X2);
    // 0x802658C8: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x802658CC: bne         $v1, $v0, L_802658DC
    if (ctx->r3 != ctx->r2) {
        // 0x802658D0: addiu       $a0, $zero, 0x5
        ctx->r4 = ADD32(0, 0X5);
            goto L_802658DC;
    }
    // 0x802658D0: addiu       $a0, $zero, 0x5
    ctx->r4 = ADD32(0, 0X5);
    // 0x802658D4: addiu       $t1, $zero, 0x3
    ctx->r9 = ADD32(0, 0X3);
    // 0x802658D8: sw          $t1, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->r9;
L_802658DC:
    // 0x802658DC: bne         $a0, $v0, L_802658E8
    if (ctx->r4 != ctx->r2) {
        // 0x802658E0: addiu       $t2, $zero, 0x5
        ctx->r10 = ADD32(0, 0X5);
            goto L_802658E8;
    }
    // 0x802658E0: addiu       $t2, $zero, 0x5
    ctx->r10 = ADD32(0, 0X5);
    // 0x802658E4: sw          $t2, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->r10;
L_802658E8:
    // 0x802658E8: lw          $t3, 0x24($s5)
    ctx->r11 = MEM_W(ctx->r21, 0X24);
    // 0x802658EC: addiu       $t4, $zero, 0x5
    ctx->r12 = ADD32(0, 0X5);
    // 0x802658F0: lbu         $v0, 0x2($t3)
    ctx->r2 = MEM_BU(ctx->r11, 0X2);
    // 0x802658F4: addiu       $t5, $zero, 0x2
    ctx->r13 = ADD32(0, 0X2);
    // 0x802658F8: bne         $v1, $v0, L_80265904
    if (ctx->r3 != ctx->r2) {
        // 0x802658FC: nop
    
            goto L_80265904;
    }
    // 0x802658FC: nop

    // 0x80265900: sw          $t4, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->r12;
L_80265904:
    // 0x80265904: bne         $a0, $v0, L_80265910
    if (ctx->r4 != ctx->r2) {
        // 0x80265908: nop
    
            goto L_80265910;
    }
    // 0x80265908: nop

    // 0x8026590C: sw          $t5, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->r13;
L_80265910:
    // 0x80265910: lh          $t6, 0x8B8($s5)
    ctx->r14 = MEM_H(ctx->r21, 0X8B8);
    // 0x80265914: nop

    // 0x80265918: mtc1        $t6, $f10
    ctx->f10.u32l = ctx->r14;
    // 0x8026591C: jal         0x802645E0
    // 0x80265920: cvt.s.w     $f12, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    ctx->f12.fl = CVT_S_W(ctx->f10.u32l);
    ovl_8024B800_func_802645E0(rdram, ctx);
        goto after_3;
    // 0x80265920: cvt.s.w     $f12, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    ctx->f12.fl = CVT_S_W(ctx->f10.u32l);
    after_3:
    // 0x80265924: sll         $t7, $v0, 2
    ctx->r15 = S32(ctx->r2 << 2);
    // 0x80265928: lui         $s2, 0x800B
    ctx->r18 = S32(0X800B << 16);
    // 0x8026592C: lw          $t8, 0x70($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X70);
    // 0x80265930: addu        $s2, $s2, $t7
    ctx->r18 = ADD32(ctx->r18, ctx->r15);
    // 0x80265934: lw          $s2, -0x3F3C($s2)
    ctx->r18 = MEM_W(ctx->r18, -0X3F3C);
    // 0x80265938: beq         $t8, $zero, L_80265A0C
    if (ctx->r24 == 0) {
        // 0x8026593C: sll         $s1, $zero, 5
        ctx->r17 = S32(0 << 5);
            goto L_80265A0C;
    }
    // 0x8026593C: sll         $s1, $zero, 5
    ctx->r17 = S32(0 << 5);
    // 0x80265940: subu        $s1, $s1, $zero
    ctx->r17 = SUB32(ctx->r17, 0);
    // 0x80265944: sll         $s1, $s1, 3
    ctx->r17 = S32(ctx->r17 << 3);
    // 0x80265948: addiu       $s4, $zero, 0x9B0
    ctx->r20 = ADD32(0, 0X9B0);
L_8026594C:
    // 0x8026594C: lw          $t9, 0x18($s5)
    ctx->r25 = MEM_W(ctx->r21, 0X18);
    // 0x80265950: lw          $t2, 0x6C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X6C);
    // 0x80265954: addu        $s0, $t9, $s1
    ctx->r16 = ADD32(ctx->r25, ctx->r17);
    // 0x80265958: lhu         $t0, 0x10A($s0)
    ctx->r8 = MEM_HU(ctx->r16, 0X10A);
    // 0x8026595C: addiu       $s0, $s0, 0xF8
    ctx->r16 = ADD32(ctx->r16, 0XF8);
    // 0x80265960: andi        $t1, $t0, 0x200
    ctx->r9 = ctx->r8 & 0X200;
    // 0x80265964: bne         $t1, $zero, L_802659F8
    if (ctx->r9 != 0) {
        // 0x80265968: lw          $t8, 0x70($sp)
        ctx->r24 = MEM_W(ctx->r29, 0X70);
            goto L_802659F8;
    }
    // 0x80265968: lw          $t8, 0x70($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X70);
    // 0x8026596C: lbu         $v1, 0x3($s2)
    ctx->r3 = MEM_BU(ctx->r18, 0X3);
    // 0x80265970: addiu       $t6, $zero, 0xC
    ctx->r14 = ADD32(0, 0XC);
    // 0x80265974: sltu        $at, $v1, $t2
    ctx->r1 = ctx->r3 < ctx->r10 ? 1 : 0;
    // 0x80265978: beq         $at, $zero, L_802659B4
    if (ctx->r1 == 0) {
        // 0x8026597C: nop
    
            goto L_802659B4;
    }
    // 0x8026597C: nop

    // 0x80265980: lw          $v0, 0x24($s5)
    ctx->r2 = MEM_W(ctx->r21, 0X24);
    // 0x80265984: addiu       $at, $zero, 0x5
    ctx->r1 = ADD32(0, 0X5);
    // 0x80265988: lbu         $t3, 0x2($v0)
    ctx->r11 = MEM_BU(ctx->r2, 0X2);
    // 0x8026598C: addu        $t4, $v0, $v1
    ctx->r12 = ADD32(ctx->r2, ctx->r3);
    // 0x80265990: bne         $t3, $at, L_802659A8
    if (ctx->r11 != ctx->r1) {
        // 0x80265994: nop
    
            goto L_802659A8;
    }
    // 0x80265994: nop

    // 0x80265998: jal         0x80264E0C
    // 0x8026599C: or          $a0, $s5, $zero
    ctx->r4 = ctx->r21 | 0;
    ovl_8024B800_func_80264E0C(rdram, ctx);
        goto after_4;
    // 0x8026599C: or          $a0, $s5, $zero
    ctx->r4 = ctx->r21 | 0;
    after_4:
    // 0x802659A0: b           L_802659B8
    // 0x802659A4: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
        goto L_802659B8;
    // 0x802659A4: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
L_802659A8:
    // 0x802659A8: lb          $t5, 0x88E($t4)
    ctx->r13 = MEM_B(ctx->r12, 0X88E);
    // 0x802659AC: b           L_802659B8
    // 0x802659B0: sb          $t5, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r13;
        goto L_802659B8;
    // 0x802659B0: sb          $t5, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r13;
L_802659B4:
    // 0x802659B4: sb          $t6, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r14;
L_802659B8:
    // 0x802659B8: lbu         $t7, 0xA($s0)
    ctx->r15 = MEM_BU(ctx->r16, 0XA);
    // 0x802659BC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802659C0: slti        $at, $t7, 0xB
    ctx->r1 = SIGNED(ctx->r15) < 0XB ? 1 : 0;
    // 0x802659C4: beq         $at, $zero, L_802659D4
    if (ctx->r1 == 0) {
        // 0x802659C8: or          $a1, $s2, $zero
        ctx->r5 = ctx->r18 | 0;
            goto L_802659D4;
    }
    // 0x802659C8: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    // 0x802659CC: b           L_802659D8
    // 0x802659D0: addiu       $v0, $zero, 0x1F
    ctx->r2 = ADD32(0, 0X1F);
        goto L_802659D8;
    // 0x802659D0: addiu       $v0, $zero, 0x1F
    ctx->r2 = ADD32(0, 0X1F);
L_802659D4:
    // 0x802659D4: addiu       $v0, $zero, 0x29
    ctx->r2 = ADD32(0, 0X29);
L_802659D8:
    // 0x802659D8: jal         0x80264520
    // 0x802659DC: andi        $a2, $v0, 0xFFFF
    ctx->r6 = ctx->r2 & 0XFFFF;
    ovl_8024B800_func_80264520(rdram, ctx);
        goto after_5;
    // 0x802659DC: andi        $a2, $v0, 0xFFFF
    ctx->r6 = ctx->r2 & 0XFFFF;
    after_5:
    // 0x802659E0: lh          $a1, 0x8B8($s5)
    ctx->r5 = MEM_H(ctx->r21, 0X8B8);
    // 0x802659E4: jal         0x80264710
    // 0x802659E8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_8024B800_func_80264710(rdram, ctx);
        goto after_6;
    // 0x802659E8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_6:
    // 0x802659EC: addiu       $s3, $s3, 0x1
    ctx->r19 = ADD32(ctx->r19, 0X1);
    // 0x802659F0: addiu       $s2, $s2, 0x4
    ctx->r18 = ADD32(ctx->r18, 0X4);
    // 0x802659F4: lw          $t8, 0x70($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X70);
L_802659F8:
    // 0x802659F8: addiu       $s1, $s1, 0xF8
    ctx->r17 = ADD32(ctx->r17, 0XF8);
    // 0x802659FC: beq         $s3, $t8, L_80265A10
    if (ctx->r19 == ctx->r24) {
        // 0x80265A00: lw          $ra, 0x44($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X44);
            goto L_80265A10;
    }
    // 0x80265A00: lw          $ra, 0x44($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X44);
    // 0x80265A04: bne         $s1, $s4, L_8026594C
    if (ctx->r17 != ctx->r20) {
        // 0x80265A08: nop
    
            goto L_8026594C;
    }
    // 0x80265A08: nop

L_80265A0C:
    // 0x80265A0C: lw          $ra, 0x44($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X44);
L_80265A10:
    // 0x80265A10: lwc1        $f21, 0x18($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X18);
    // 0x80265A14: lwc1        $f20, 0x1C($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x80265A18: lwc1        $f23, 0x20($sp)
    ctx->f_odd[(23 - 1) * 2] = MEM_W(ctx->r29, 0X20);
    // 0x80265A1C: lwc1        $f22, 0x24($sp)
    ctx->f22.u32l = MEM_W(ctx->r29, 0X24);
    // 0x80265A20: lw          $s0, 0x2C($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X2C);
    // 0x80265A24: lw          $s1, 0x30($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X30);
    // 0x80265A28: lw          $s2, 0x34($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X34);
    // 0x80265A2C: lw          $s3, 0x38($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X38);
    // 0x80265A30: lw          $s4, 0x3C($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X3C);
    // 0x80265A34: lw          $s5, 0x40($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X40);
    // 0x80265A38: jr          $ra
    // 0x80265A3C: addiu       $sp, $sp, 0xB8
    ctx->r29 = ADD32(ctx->r29, 0XB8);
    return;
    // 0x80265A3C: addiu       $sp, $sp, 0xB8
    ctx->r29 = ADD32(ctx->r29, 0XB8);
;}
RECOMP_FUNC void ovl_8024B800_func_8026576C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
L_8026576C:
    // 0x8026576C: lhu         $t1, 0xC($s0)
    ctx->r9 = MEM_HU(ctx->r16, 0XC);
    // 0x80265770: nop

    // 0x80265774: beq         $t1, $zero, L_802658B0
    if (ctx->r9 == 0) {
        // 0x80265778: nop
    
            goto L_802658B0;
    }
    // 0x80265778: nop

    // 0x8026577C: lhu         $v0, 0x12($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X12);
    // 0x80265780: lui         $v1, 0x8012
    ctx->r3 = S32(0X8012 << 16);
    // 0x80265784: andi        $t2, $v0, 0x200
    ctx->r10 = ctx->r2 & 0X200;
    // 0x80265788: bne         $t2, $zero, L_80265868
    if (ctx->r10 != 0) {
        // 0x8026578C: nop
    
            goto L_80265868;
    }
    // 0x8026578C: nop

    // 0x80265790: lw          $v1, 0xB44($v1)
    ctx->r3 = MEM_W(ctx->r3, 0XB44);
    // 0x80265794: nop

    // 0x80265798: sltiu       $at, $v1, 0x3D
    ctx->r1 = ctx->r3 < 0X3D ? 1 : 0;
    // 0x8026579C: beq         $at, $zero, L_802658B0
    if (ctx->r1 == 0) {
        // 0x802657A0: sltiu       $at, $v1, 0x29
        ctx->r1 = ctx->r3 < 0X29 ? 1 : 0;
            goto L_802658B0;
    }
    // 0x802657A0: sltiu       $at, $v1, 0x29
    ctx->r1 = ctx->r3 < 0X29 ? 1 : 0;
    // 0x802657A4: bne         $at, $zero, L_802657CC
    if (ctx->r1 != 0) {
        // 0x802657A8: nop
    
            goto L_802657CC;
    }
    // 0x802657A8: nop

    // 0x802657AC: lhu         $t3, 0x0($s4)
    ctx->r11 = MEM_HU(ctx->r20, 0X0);
    // 0x802657B0: andi        $t4, $v0, 0x100
    ctx->r12 = ctx->r2 & 0X100;
    // 0x802657B4: beq         $s2, $t3, L_802657CC
    if (ctx->r18 == ctx->r11) {
        // 0x802657B8: nop
    
            goto L_802657CC;
    }
    // 0x802657B8: nop

    // 0x802657BC: bne         $t4, $zero, L_80265868
    if (ctx->r12 != 0) {
        // 0x802657C0: nop
    
            goto L_80265868;
    }
    // 0x802657C0: nop

    // 0x802657C4: b           L_80265868
    // 0x802657C8: sb          $zero, 0x0($s0)
    MEM_B(0X0, ctx->r16) = 0;
        goto L_80265868;
    // 0x802657C8: sb          $zero, 0x0($s0)
    MEM_B(0X0, ctx->r16) = 0;
L_802657CC:
    // 0x802657CC: jal         0x80081040
    // 0x802657D0: mov.s       $f12, $f22
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 22);
    ctx->f12.fl = ctx->f22.fl;
    func_80081040(rdram, ctx);
        goto after_0;
    // 0x802657D0: mov.s       $f12, $f22
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 22);
    ctx->f12.fl = ctx->f22.fl;
    after_0:
    // 0x802657D4: mul.s       $f10, $f0, $f20
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f10.fl = MUL_S(ctx->f0.fl, ctx->f20.fl);
    // 0x802657D8: lwc1        $f6, 0xB4($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0XB4);
    // 0x802657DC: nop

    // 0x802657E0: add.s       $f8, $f10, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f10.fl + ctx->f6.fl;
    // 0x802657E4: cfc1        $t5, $FpcCsr
    ctx->r13 = get_cop1_cs();
    // 0x802657E8: nop

    // 0x802657EC: ori         $at, $t5, 0x3
    ctx->r1 = ctx->r13 | 0X3;
    // 0x802657F0: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x802657F4: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x802657F8: nop

    // 0x802657FC: cvt.w.s     $f16, $f8
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    ctx->f16.u32l = CVT_W_S(ctx->f8.fl);
    // 0x80265800: mfc1        $t6, $f16
    ctx->r14 = (int32_t)ctx->f16.u32l;
    // 0x80265804: ctc1        $t5, $FpcCsr
    set_cop1_cs(ctx->r13);
    // 0x80265808: sh          $t6, 0x2E($s0)
    MEM_H(0X2E, ctx->r16) = ctx->r14;
    // 0x8026580C: jal         0x80080E80
    // 0x80265810: mov.s       $f12, $f22
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 22);
    ctx->f12.fl = ctx->f22.fl;
    func_80080E80(rdram, ctx);
        goto after_1;
    // 0x80265810: mov.s       $f12, $f22
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 22);
    ctx->f12.fl = ctx->f22.fl;
    after_1:
    // 0x80265814: mul.s       $f18, $f0, $f20
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f18.fl = MUL_S(ctx->f0.fl, ctx->f20.fl);
    // 0x80265818: lwc1        $f4, 0xB0($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0XB0);
    // 0x8026581C: lhu         $t9, 0xE($s0)
    ctx->r25 = MEM_HU(ctx->r16, 0XE);
    // 0x80265820: add.s       $f10, $f18, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f10.fl = ctx->f18.fl + ctx->f4.fl;
    // 0x80265824: cfc1        $t7, $FpcCsr
    ctx->r15 = get_cop1_cs();
    // 0x80265828: nop

    // 0x8026582C: ori         $at, $t7, 0x3
    ctx->r1 = ctx->r15 | 0X3;
    // 0x80265830: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x80265834: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x80265838: addiu       $at, $zero, 0x1D
    ctx->r1 = ADD32(0, 0X1D);
    // 0x8026583C: cvt.w.s     $f6, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    ctx->f6.u32l = CVT_W_S(ctx->f10.fl);
    // 0x80265840: mfc1        $t8, $f6
    ctx->r24 = (int32_t)ctx->f6.u32l;
    // 0x80265844: ctc1        $t7, $FpcCsr
    set_cop1_cs(ctx->r15);
    // 0x80265848: beq         $t9, $at, L_80265868
    if (ctx->r25 == ctx->r1) {
        // 0x8026584C: sh          $t8, 0x30($s0)
        MEM_H(0X30, ctx->r16) = ctx->r24;
            goto L_80265868;
    }
    // 0x8026584C: sh          $t8, 0x30($s0)
    MEM_H(0X30, ctx->r16) = ctx->r24;
    // 0x80265850: lhu         $t0, 0x0($s4)
    ctx->r8 = MEM_HU(ctx->r20, 0X0);
    // 0x80265854: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80265858: bne         $s2, $t0, L_80265868
    if (ctx->r18 != ctx->r8) {
        // 0x8026585C: lui         $a1, 0x8028
        ctx->r5 = S32(0X8028 << 16);
            goto L_80265868;
    }
    // 0x8026585C: lui         $a1, 0x8028
    ctx->r5 = S32(0X8028 << 16);
    // 0x80265860: jal         0x8026F2EC
    // 0x80265864: addiu       $a1, $a1, -0x3410
    ctx->r5 = ADD32(ctx->r5, -0X3410);
    ovl_8024B800_func_8026F2EC(rdram, ctx);
        goto after_2;
    // 0x80265864: addiu       $a1, $a1, -0x3410
    ctx->r5 = ADD32(ctx->r5, -0X3410);
    after_2:
L_80265868:
    // 0x80265868: addiu       $s1, $s1, -0x1
    ctx->r17 = ADD32(ctx->r17, -0X1);
    // 0x8026586C: bne         $s1, $zero, L_8026587C
    if (ctx->r17 != 0) {
        // 0x80265870: addiu       $v0, $zero, 0x7
        ctx->r2 = ADD32(0, 0X7);
            goto L_8026587C;
    }
    // 0x80265870: addiu       $v0, $zero, 0x7
    ctx->r2 = ADD32(0, 0X7);
    // 0x80265874: b           L_802658C4
    // 0x80265878: or          $s3, $zero, $zero
    ctx->r19 = 0 | 0;
        goto L_802658C4;
    // 0x80265878: or          $s3, $zero, $zero
    ctx->r19 = 0 | 0;
L_8026587C:
    // 0x8026587C: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x80265880: lwc1        $f16, 0xA0($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0XA0);
    // 0x80265884: nop

    // 0x80265888: c.lt.s      $f8, $f16
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f8.fl < ctx->f16.fl;
    // 0x8026588C: nop

    // 0x80265890: bc1f        L_802658A0
    if (!c1cs) {
        // 0x80265894: nop
    
            goto L_802658A0;
    }
    // 0x80265894: nop

    // 0x80265898: b           L_802658A0
    // 0x8026589C: addiu       $v0, $zero, -0x7
    ctx->r2 = ADD32(0, -0X7);
        goto L_802658A0;
    // 0x8026589C: addiu       $v0, $zero, -0x7
    ctx->r2 = ADD32(0, -0X7);
L_802658A0:
    // 0x802658A0: mtc1        $v0, $f18
    ctx->f18.u32l = ctx->r2;
    // 0x802658A4: nop

    // 0x802658A8: cvt.s.w     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    ctx->f4.fl = CVT_S_W(ctx->f18.u32l);
    // 0x802658AC: add.s       $f20, $f20, $f4
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f20.fl = ctx->f20.fl + ctx->f4.fl;
L_802658B0:
    // 0x802658B0: addiu       $s3, $s3, 0x1
    ctx->r19 = ADD32(ctx->r19, 0X1);
    // 0x802658B4: sltiu       $at, $s3, 0xA
    ctx->r1 = ctx->r19 < 0XA ? 1 : 0;
    // 0x802658B8: bne         $at, $zero, L_8026576C
    if (ctx->r1 != 0) {
        // 0x802658BC: addiu       $s0, $s0, -0xF8
        ctx->r16 = ADD32(ctx->r16, -0XF8);
            goto L_8026576C;
    }
    // 0x802658BC: addiu       $s0, $s0, -0xF8
    ctx->r16 = ADD32(ctx->r16, -0XF8);
    // 0x802658C0: or          $s3, $zero, $zero
    ctx->r19 = 0 | 0;
L_802658C4:
    // 0x802658C4: lbu         $v0, 0x2($s5)
    ctx->r2 = MEM_BU(ctx->r21, 0X2);
    // 0x802658C8: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x802658CC: bne         $v1, $v0, L_802658DC
    if (ctx->r3 != ctx->r2) {
        // 0x802658D0: addiu       $a0, $zero, 0x5
        ctx->r4 = ADD32(0, 0X5);
            goto L_802658DC;
    }
    // 0x802658D0: addiu       $a0, $zero, 0x5
    ctx->r4 = ADD32(0, 0X5);
    // 0x802658D4: addiu       $t1, $zero, 0x3
    ctx->r9 = ADD32(0, 0X3);
    // 0x802658D8: sw          $t1, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->r9;
L_802658DC:
    // 0x802658DC: bne         $a0, $v0, L_802658E8
    if (ctx->r4 != ctx->r2) {
        // 0x802658E0: addiu       $t2, $zero, 0x5
        ctx->r10 = ADD32(0, 0X5);
            goto L_802658E8;
    }
    // 0x802658E0: addiu       $t2, $zero, 0x5
    ctx->r10 = ADD32(0, 0X5);
    // 0x802658E4: sw          $t2, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->r10;
L_802658E8:
    // 0x802658E8: lw          $t3, 0x24($s5)
    ctx->r11 = MEM_W(ctx->r21, 0X24);
    // 0x802658EC: addiu       $t4, $zero, 0x5
    ctx->r12 = ADD32(0, 0X5);
    // 0x802658F0: lbu         $v0, 0x2($t3)
    ctx->r2 = MEM_BU(ctx->r11, 0X2);
    // 0x802658F4: addiu       $t5, $zero, 0x2
    ctx->r13 = ADD32(0, 0X2);
    // 0x802658F8: bne         $v1, $v0, L_80265904
    if (ctx->r3 != ctx->r2) {
        // 0x802658FC: nop
    
            goto L_80265904;
    }
    // 0x802658FC: nop

    // 0x80265900: sw          $t4, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->r12;
L_80265904:
    // 0x80265904: bne         $a0, $v0, L_80265910
    if (ctx->r4 != ctx->r2) {
        // 0x80265908: nop
    
            goto L_80265910;
    }
    // 0x80265908: nop

    // 0x8026590C: sw          $t5, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->r13;
L_80265910:
    // 0x80265910: lh          $t6, 0x8B8($s5)
    ctx->r14 = MEM_H(ctx->r21, 0X8B8);
    // 0x80265914: nop

    // 0x80265918: mtc1        $t6, $f10
    ctx->f10.u32l = ctx->r14;
    // 0x8026591C: jal         0x802645E0
    // 0x80265920: cvt.s.w     $f12, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    ctx->f12.fl = CVT_S_W(ctx->f10.u32l);
    ovl_8024B800_func_802645E0(rdram, ctx);
        goto after_3;
    // 0x80265920: cvt.s.w     $f12, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    ctx->f12.fl = CVT_S_W(ctx->f10.u32l);
    after_3:
    // 0x80265924: sll         $t7, $v0, 2
    ctx->r15 = S32(ctx->r2 << 2);
    // 0x80265928: lui         $s2, 0x800B
    ctx->r18 = S32(0X800B << 16);
    // 0x8026592C: lw          $t8, 0x70($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X70);
    // 0x80265930: addu        $s2, $s2, $t7
    ctx->r18 = ADD32(ctx->r18, ctx->r15);
    // 0x80265934: lw          $s2, -0x3F3C($s2)
    ctx->r18 = MEM_W(ctx->r18, -0X3F3C);
    // 0x80265938: beq         $t8, $zero, L_80265A0C
    if (ctx->r24 == 0) {
        // 0x8026593C: sll         $s1, $zero, 5
        ctx->r17 = S32(0 << 5);
            goto L_80265A0C;
    }
    // 0x8026593C: sll         $s1, $zero, 5
    ctx->r17 = S32(0 << 5);
    // 0x80265940: subu        $s1, $s1, $zero
    ctx->r17 = SUB32(ctx->r17, 0);
    // 0x80265944: sll         $s1, $s1, 3
    ctx->r17 = S32(ctx->r17 << 3);
    // 0x80265948: addiu       $s4, $zero, 0x9B0
    ctx->r20 = ADD32(0, 0X9B0);
L_8026594C:
    // 0x8026594C: lw          $t9, 0x18($s5)
    ctx->r25 = MEM_W(ctx->r21, 0X18);
    // 0x80265950: lw          $t2, 0x6C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X6C);
    // 0x80265954: addu        $s0, $t9, $s1
    ctx->r16 = ADD32(ctx->r25, ctx->r17);
    // 0x80265958: lhu         $t0, 0x10A($s0)
    ctx->r8 = MEM_HU(ctx->r16, 0X10A);
    // 0x8026595C: addiu       $s0, $s0, 0xF8
    ctx->r16 = ADD32(ctx->r16, 0XF8);
    // 0x80265960: andi        $t1, $t0, 0x200
    ctx->r9 = ctx->r8 & 0X200;
    // 0x80265964: bne         $t1, $zero, L_802659F8
    if (ctx->r9 != 0) {
        // 0x80265968: lw          $t8, 0x70($sp)
        ctx->r24 = MEM_W(ctx->r29, 0X70);
            goto L_802659F8;
    }
    // 0x80265968: lw          $t8, 0x70($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X70);
    // 0x8026596C: lbu         $v1, 0x3($s2)
    ctx->r3 = MEM_BU(ctx->r18, 0X3);
    // 0x80265970: addiu       $t6, $zero, 0xC
    ctx->r14 = ADD32(0, 0XC);
    // 0x80265974: sltu        $at, $v1, $t2
    ctx->r1 = ctx->r3 < ctx->r10 ? 1 : 0;
    // 0x80265978: beq         $at, $zero, L_802659B4
    if (ctx->r1 == 0) {
        // 0x8026597C: nop
    
            goto L_802659B4;
    }
    // 0x8026597C: nop

    // 0x80265980: lw          $v0, 0x24($s5)
    ctx->r2 = MEM_W(ctx->r21, 0X24);
    // 0x80265984: addiu       $at, $zero, 0x5
    ctx->r1 = ADD32(0, 0X5);
    // 0x80265988: lbu         $t3, 0x2($v0)
    ctx->r11 = MEM_BU(ctx->r2, 0X2);
    // 0x8026598C: addu        $t4, $v0, $v1
    ctx->r12 = ADD32(ctx->r2, ctx->r3);
    // 0x80265990: bne         $t3, $at, L_802659A8
    if (ctx->r11 != ctx->r1) {
        // 0x80265994: nop
    
            goto L_802659A8;
    }
    // 0x80265994: nop

    // 0x80265998: jal         0x80264E0C
    // 0x8026599C: or          $a0, $s5, $zero
    ctx->r4 = ctx->r21 | 0;
    ovl_8024B800_func_80264E0C(rdram, ctx);
        goto after_4;
    // 0x8026599C: or          $a0, $s5, $zero
    ctx->r4 = ctx->r21 | 0;
    after_4:
    // 0x802659A0: b           L_802659B8
    // 0x802659A4: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
        goto L_802659B8;
    // 0x802659A4: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
L_802659A8:
    // 0x802659A8: lb          $t5, 0x88E($t4)
    ctx->r13 = MEM_B(ctx->r12, 0X88E);
    // 0x802659AC: b           L_802659B8
    // 0x802659B0: sb          $t5, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r13;
        goto L_802659B8;
    // 0x802659B0: sb          $t5, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r13;
L_802659B4:
    // 0x802659B4: sb          $t6, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r14;
L_802659B8:
    // 0x802659B8: lbu         $t7, 0xA($s0)
    ctx->r15 = MEM_BU(ctx->r16, 0XA);
    // 0x802659BC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802659C0: slti        $at, $t7, 0xB
    ctx->r1 = SIGNED(ctx->r15) < 0XB ? 1 : 0;
    // 0x802659C4: beq         $at, $zero, L_802659D4
    if (ctx->r1 == 0) {
        // 0x802659C8: or          $a1, $s2, $zero
        ctx->r5 = ctx->r18 | 0;
            goto L_802659D4;
    }
    // 0x802659C8: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    // 0x802659CC: b           L_802659D8
    // 0x802659D0: addiu       $v0, $zero, 0x1F
    ctx->r2 = ADD32(0, 0X1F);
        goto L_802659D8;
    // 0x802659D0: addiu       $v0, $zero, 0x1F
    ctx->r2 = ADD32(0, 0X1F);
L_802659D4:
    // 0x802659D4: addiu       $v0, $zero, 0x29
    ctx->r2 = ADD32(0, 0X29);
L_802659D8:
    // 0x802659D8: jal         0x80264520
    // 0x802659DC: andi        $a2, $v0, 0xFFFF
    ctx->r6 = ctx->r2 & 0XFFFF;
    ovl_8024B800_func_80264520(rdram, ctx);
        goto after_5;
    // 0x802659DC: andi        $a2, $v0, 0xFFFF
    ctx->r6 = ctx->r2 & 0XFFFF;
    after_5:
    // 0x802659E0: lh          $a1, 0x8B8($s5)
    ctx->r5 = MEM_H(ctx->r21, 0X8B8);
    // 0x802659E4: jal         0x80264710
    // 0x802659E8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_8024B800_func_80264710(rdram, ctx);
        goto after_6;
    // 0x802659E8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_6:
    // 0x802659EC: addiu       $s3, $s3, 0x1
    ctx->r19 = ADD32(ctx->r19, 0X1);
    // 0x802659F0: addiu       $s2, $s2, 0x4
    ctx->r18 = ADD32(ctx->r18, 0X4);
    // 0x802659F4: lw          $t8, 0x70($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X70);
L_802659F8:
    // 0x802659F8: addiu       $s1, $s1, 0xF8
    ctx->r17 = ADD32(ctx->r17, 0XF8);
    // 0x802659FC: beq         $s3, $t8, L_80265A10
    if (ctx->r19 == ctx->r24) {
        // 0x80265A00: lw          $ra, 0x44($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X44);
            goto L_80265A10;
    }
    // 0x80265A00: lw          $ra, 0x44($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X44);
    // 0x80265A04: bne         $s1, $s4, L_8026594C
    if (ctx->r17 != ctx->r20) {
        // 0x80265A08: nop
    
            goto L_8026594C;
    }
    // 0x80265A08: nop

L_80265A0C:
    // 0x80265A0C: lw          $ra, 0x44($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X44);
L_80265A10:
    // 0x80265A10: lwc1        $f21, 0x18($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X18);
    // 0x80265A14: lwc1        $f20, 0x1C($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x80265A18: lwc1        $f23, 0x20($sp)
    ctx->f_odd[(23 - 1) * 2] = MEM_W(ctx->r29, 0X20);
    // 0x80265A1C: lwc1        $f22, 0x24($sp)
    ctx->f22.u32l = MEM_W(ctx->r29, 0X24);
    // 0x80265A20: lw          $s0, 0x2C($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X2C);
    // 0x80265A24: lw          $s1, 0x30($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X30);
    // 0x80265A28: lw          $s2, 0x34($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X34);
    // 0x80265A2C: lw          $s3, 0x38($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X38);
    // 0x80265A30: lw          $s4, 0x3C($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X3C);
    // 0x80265A34: lw          $s5, 0x40($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X40);
    // 0x80265A38: jr          $ra
    // 0x80265A3C: addiu       $sp, $sp, 0xB8
    ctx->r29 = ADD32(ctx->r29, 0XB8);
    return;
    // 0x80265A3C: addiu       $sp, $sp, 0xB8
    ctx->r29 = ADD32(ctx->r29, 0XB8);
;}
RECOMP_FUNC void ovl_8024B800_func_802657BC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
L_8026576C:
    // 0x802657BC: bne         $t4, $zero, L_80265868
    if (ctx->r12 != 0) {
        // 0x802657C0: nop
    
            goto L_80265868;
    }
    // 0x802657C0: nop

    // 0x802657C4: b           L_80265868
    // 0x802657C8: sb          $zero, 0x0($s0)
    MEM_B(0X0, ctx->r16) = 0;
        goto L_80265868;
    // 0x802657C8: sb          $zero, 0x0($s0)
    MEM_B(0X0, ctx->r16) = 0;
    // 0x802657CC: jal         0x80081040
    // 0x802657D0: mov.s       $f12, $f22
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 22);
    ctx->f12.fl = ctx->f22.fl;
    func_80081040(rdram, ctx);
        goto after_0;
    // 0x802657D0: mov.s       $f12, $f22
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 22);
    ctx->f12.fl = ctx->f22.fl;
    after_0:
    // 0x802657D4: mul.s       $f10, $f0, $f20
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f10.fl = MUL_S(ctx->f0.fl, ctx->f20.fl);
    // 0x802657D8: lwc1        $f6, 0xB4($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0XB4);
    // 0x802657DC: nop

    // 0x802657E0: add.s       $f8, $f10, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f10.fl + ctx->f6.fl;
    // 0x802657E4: cfc1        $t5, $FpcCsr
    ctx->r13 = get_cop1_cs();
    // 0x802657E8: nop

    // 0x802657EC: ori         $at, $t5, 0x3
    ctx->r1 = ctx->r13 | 0X3;
    // 0x802657F0: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x802657F4: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x802657F8: nop

    // 0x802657FC: cvt.w.s     $f16, $f8
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    ctx->f16.u32l = CVT_W_S(ctx->f8.fl);
    // 0x80265800: mfc1        $t6, $f16
    ctx->r14 = (int32_t)ctx->f16.u32l;
    // 0x80265804: ctc1        $t5, $FpcCsr
    set_cop1_cs(ctx->r13);
    // 0x80265808: sh          $t6, 0x2E($s0)
    MEM_H(0X2E, ctx->r16) = ctx->r14;
    // 0x8026580C: jal         0x80080E80
    // 0x80265810: mov.s       $f12, $f22
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 22);
    ctx->f12.fl = ctx->f22.fl;
    func_80080E80(rdram, ctx);
        goto after_1;
    // 0x80265810: mov.s       $f12, $f22
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 22);
    ctx->f12.fl = ctx->f22.fl;
    after_1:
    // 0x80265814: mul.s       $f18, $f0, $f20
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f18.fl = MUL_S(ctx->f0.fl, ctx->f20.fl);
    // 0x80265818: lwc1        $f4, 0xB0($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0XB0);
    // 0x8026581C: lhu         $t9, 0xE($s0)
    ctx->r25 = MEM_HU(ctx->r16, 0XE);
    // 0x80265820: add.s       $f10, $f18, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f10.fl = ctx->f18.fl + ctx->f4.fl;
    // 0x80265824: cfc1        $t7, $FpcCsr
    ctx->r15 = get_cop1_cs();
    // 0x80265828: nop

    // 0x8026582C: ori         $at, $t7, 0x3
    ctx->r1 = ctx->r15 | 0X3;
    // 0x80265830: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x80265834: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x80265838: addiu       $at, $zero, 0x1D
    ctx->r1 = ADD32(0, 0X1D);
    // 0x8026583C: cvt.w.s     $f6, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    ctx->f6.u32l = CVT_W_S(ctx->f10.fl);
    // 0x80265840: mfc1        $t8, $f6
    ctx->r24 = (int32_t)ctx->f6.u32l;
    // 0x80265844: ctc1        $t7, $FpcCsr
    set_cop1_cs(ctx->r15);
    // 0x80265848: beq         $t9, $at, L_80265868
    if (ctx->r25 == ctx->r1) {
        // 0x8026584C: sh          $t8, 0x30($s0)
        MEM_H(0X30, ctx->r16) = ctx->r24;
            goto L_80265868;
    }
    // 0x8026584C: sh          $t8, 0x30($s0)
    MEM_H(0X30, ctx->r16) = ctx->r24;
    // 0x80265850: lhu         $t0, 0x0($s4)
    ctx->r8 = MEM_HU(ctx->r20, 0X0);
    // 0x80265854: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80265858: bne         $s2, $t0, L_80265868
    if (ctx->r18 != ctx->r8) {
        // 0x8026585C: lui         $a1, 0x8028
        ctx->r5 = S32(0X8028 << 16);
            goto L_80265868;
    }
    // 0x8026585C: lui         $a1, 0x8028
    ctx->r5 = S32(0X8028 << 16);
    // 0x80265860: jal         0x8026F2EC
    // 0x80265864: addiu       $a1, $a1, -0x3410
    ctx->r5 = ADD32(ctx->r5, -0X3410);
    ovl_8024B800_func_8026F2EC(rdram, ctx);
        goto after_2;
    // 0x80265864: addiu       $a1, $a1, -0x3410
    ctx->r5 = ADD32(ctx->r5, -0X3410);
    after_2:
L_80265868:
    // 0x80265868: addiu       $s1, $s1, -0x1
    ctx->r17 = ADD32(ctx->r17, -0X1);
    // 0x8026586C: bne         $s1, $zero, L_8026587C
    if (ctx->r17 != 0) {
        // 0x80265870: addiu       $v0, $zero, 0x7
        ctx->r2 = ADD32(0, 0X7);
            goto L_8026587C;
    }
    // 0x80265870: addiu       $v0, $zero, 0x7
    ctx->r2 = ADD32(0, 0X7);
    // 0x80265874: b           L_802658C4
    // 0x80265878: or          $s3, $zero, $zero
    ctx->r19 = 0 | 0;
        goto L_802658C4;
    // 0x80265878: or          $s3, $zero, $zero
    ctx->r19 = 0 | 0;
L_8026587C:
    // 0x8026587C: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x80265880: lwc1        $f16, 0xA0($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0XA0);
    // 0x80265884: nop

    // 0x80265888: c.lt.s      $f8, $f16
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f8.fl < ctx->f16.fl;
    // 0x8026588C: nop

    // 0x80265890: bc1f        L_802658A0
    if (!c1cs) {
        // 0x80265894: nop
    
            goto L_802658A0;
    }
    // 0x80265894: nop

    // 0x80265898: b           L_802658A0
    // 0x8026589C: addiu       $v0, $zero, -0x7
    ctx->r2 = ADD32(0, -0X7);
        goto L_802658A0;
    // 0x8026589C: addiu       $v0, $zero, -0x7
    ctx->r2 = ADD32(0, -0X7);
L_802658A0:
    // 0x802658A0: mtc1        $v0, $f18
    ctx->f18.u32l = ctx->r2;
    // 0x802658A4: nop

    // 0x802658A8: cvt.s.w     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    ctx->f4.fl = CVT_S_W(ctx->f18.u32l);
    // 0x802658AC: add.s       $f20, $f20, $f4
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f20.fl = ctx->f20.fl + ctx->f4.fl;
    // 0x802658B0: addiu       $s3, $s3, 0x1
    ctx->r19 = ADD32(ctx->r19, 0X1);
    // 0x802658B4: sltiu       $at, $s3, 0xA
    ctx->r1 = ctx->r19 < 0XA ? 1 : 0;
    // 0x802658B8: bne         $at, $zero, L_8026576C
    if (ctx->r1 != 0) {
            // 0x802658BC: addiu       $s0, $s0, -0xF8
    ctx->r16 = ADD32(ctx->r16, -0XF8);
    ovl_8024B800_func_8026576C(rdram, ctx);
    return;
    }
    // 0x802658BC: addiu       $s0, $s0, -0xF8
    ctx->r16 = ADD32(ctx->r16, -0XF8);
    // 0x802658C0: or          $s3, $zero, $zero
    ctx->r19 = 0 | 0;
L_802658C4:
    // 0x802658C4: lbu         $v0, 0x2($s5)
    ctx->r2 = MEM_BU(ctx->r21, 0X2);
    // 0x802658C8: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x802658CC: bne         $v1, $v0, L_802658DC
    if (ctx->r3 != ctx->r2) {
        // 0x802658D0: addiu       $a0, $zero, 0x5
        ctx->r4 = ADD32(0, 0X5);
            goto L_802658DC;
    }
    // 0x802658D0: addiu       $a0, $zero, 0x5
    ctx->r4 = ADD32(0, 0X5);
    // 0x802658D4: addiu       $t1, $zero, 0x3
    ctx->r9 = ADD32(0, 0X3);
    // 0x802658D8: sw          $t1, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->r9;
L_802658DC:
    // 0x802658DC: bne         $a0, $v0, L_802658E8
    if (ctx->r4 != ctx->r2) {
        // 0x802658E0: addiu       $t2, $zero, 0x5
        ctx->r10 = ADD32(0, 0X5);
            goto L_802658E8;
    }
    // 0x802658E0: addiu       $t2, $zero, 0x5
    ctx->r10 = ADD32(0, 0X5);
    // 0x802658E4: sw          $t2, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->r10;
L_802658E8:
    // 0x802658E8: lw          $t3, 0x24($s5)
    ctx->r11 = MEM_W(ctx->r21, 0X24);
    // 0x802658EC: addiu       $t4, $zero, 0x5
    ctx->r12 = ADD32(0, 0X5);
    // 0x802658F0: lbu         $v0, 0x2($t3)
    ctx->r2 = MEM_BU(ctx->r11, 0X2);
    // 0x802658F4: addiu       $t5, $zero, 0x2
    ctx->r13 = ADD32(0, 0X2);
    // 0x802658F8: bne         $v1, $v0, L_80265904
    if (ctx->r3 != ctx->r2) {
        // 0x802658FC: nop
    
            goto L_80265904;
    }
    // 0x802658FC: nop

    // 0x80265900: sw          $t4, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->r12;
L_80265904:
    // 0x80265904: bne         $a0, $v0, L_80265910
    if (ctx->r4 != ctx->r2) {
        // 0x80265908: nop
    
            goto L_80265910;
    }
    // 0x80265908: nop

    // 0x8026590C: sw          $t5, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->r13;
L_80265910:
    // 0x80265910: lh          $t6, 0x8B8($s5)
    ctx->r14 = MEM_H(ctx->r21, 0X8B8);
    // 0x80265914: nop

    // 0x80265918: mtc1        $t6, $f10
    ctx->f10.u32l = ctx->r14;
    // 0x8026591C: jal         0x802645E0
    // 0x80265920: cvt.s.w     $f12, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    ctx->f12.fl = CVT_S_W(ctx->f10.u32l);
    ovl_8024B800_func_802645E0(rdram, ctx);
        goto after_3;
    // 0x80265920: cvt.s.w     $f12, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    ctx->f12.fl = CVT_S_W(ctx->f10.u32l);
    after_3:
    // 0x80265924: sll         $t7, $v0, 2
    ctx->r15 = S32(ctx->r2 << 2);
    // 0x80265928: lui         $s2, 0x800B
    ctx->r18 = S32(0X800B << 16);
    // 0x8026592C: lw          $t8, 0x70($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X70);
    // 0x80265930: addu        $s2, $s2, $t7
    ctx->r18 = ADD32(ctx->r18, ctx->r15);
    // 0x80265934: lw          $s2, -0x3F3C($s2)
    ctx->r18 = MEM_W(ctx->r18, -0X3F3C);
    // 0x80265938: beq         $t8, $zero, L_80265A0C
    if (ctx->r24 == 0) {
        // 0x8026593C: sll         $s1, $zero, 5
        ctx->r17 = S32(0 << 5);
            goto L_80265A0C;
    }
    // 0x8026593C: sll         $s1, $zero, 5
    ctx->r17 = S32(0 << 5);
    // 0x80265940: subu        $s1, $s1, $zero
    ctx->r17 = SUB32(ctx->r17, 0);
    // 0x80265944: sll         $s1, $s1, 3
    ctx->r17 = S32(ctx->r17 << 3);
    // 0x80265948: addiu       $s4, $zero, 0x9B0
    ctx->r20 = ADD32(0, 0X9B0);
L_8026594C:
    // 0x8026594C: lw          $t9, 0x18($s5)
    ctx->r25 = MEM_W(ctx->r21, 0X18);
    // 0x80265950: lw          $t2, 0x6C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X6C);
    // 0x80265954: addu        $s0, $t9, $s1
    ctx->r16 = ADD32(ctx->r25, ctx->r17);
    // 0x80265958: lhu         $t0, 0x10A($s0)
    ctx->r8 = MEM_HU(ctx->r16, 0X10A);
    // 0x8026595C: addiu       $s0, $s0, 0xF8
    ctx->r16 = ADD32(ctx->r16, 0XF8);
    // 0x80265960: andi        $t1, $t0, 0x200
    ctx->r9 = ctx->r8 & 0X200;
    // 0x80265964: bne         $t1, $zero, L_802659F8
    if (ctx->r9 != 0) {
        // 0x80265968: lw          $t8, 0x70($sp)
        ctx->r24 = MEM_W(ctx->r29, 0X70);
            goto L_802659F8;
    }
    // 0x80265968: lw          $t8, 0x70($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X70);
    // 0x8026596C: lbu         $v1, 0x3($s2)
    ctx->r3 = MEM_BU(ctx->r18, 0X3);
    // 0x80265970: addiu       $t6, $zero, 0xC
    ctx->r14 = ADD32(0, 0XC);
    // 0x80265974: sltu        $at, $v1, $t2
    ctx->r1 = ctx->r3 < ctx->r10 ? 1 : 0;
    // 0x80265978: beq         $at, $zero, L_802659B4
    if (ctx->r1 == 0) {
        // 0x8026597C: nop
    
            goto L_802659B4;
    }
    // 0x8026597C: nop

    // 0x80265980: lw          $v0, 0x24($s5)
    ctx->r2 = MEM_W(ctx->r21, 0X24);
    // 0x80265984: addiu       $at, $zero, 0x5
    ctx->r1 = ADD32(0, 0X5);
    // 0x80265988: lbu         $t3, 0x2($v0)
    ctx->r11 = MEM_BU(ctx->r2, 0X2);
    // 0x8026598C: addu        $t4, $v0, $v1
    ctx->r12 = ADD32(ctx->r2, ctx->r3);
    // 0x80265990: bne         $t3, $at, L_802659A8
    if (ctx->r11 != ctx->r1) {
        // 0x80265994: nop
    
            goto L_802659A8;
    }
    // 0x80265994: nop

    // 0x80265998: jal         0x80264E0C
    // 0x8026599C: or          $a0, $s5, $zero
    ctx->r4 = ctx->r21 | 0;
    ovl_8024B800_func_80264E0C(rdram, ctx);
        goto after_4;
    // 0x8026599C: or          $a0, $s5, $zero
    ctx->r4 = ctx->r21 | 0;
    after_4:
    // 0x802659A0: b           L_802659B8
    // 0x802659A4: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
        goto L_802659B8;
    // 0x802659A4: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
L_802659A8:
    // 0x802659A8: lb          $t5, 0x88E($t4)
    ctx->r13 = MEM_B(ctx->r12, 0X88E);
    // 0x802659AC: b           L_802659B8
    // 0x802659B0: sb          $t5, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r13;
        goto L_802659B8;
    // 0x802659B0: sb          $t5, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r13;
L_802659B4:
    // 0x802659B4: sb          $t6, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r14;
L_802659B8:
    // 0x802659B8: lbu         $t7, 0xA($s0)
    ctx->r15 = MEM_BU(ctx->r16, 0XA);
    // 0x802659BC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802659C0: slti        $at, $t7, 0xB
    ctx->r1 = SIGNED(ctx->r15) < 0XB ? 1 : 0;
    // 0x802659C4: beq         $at, $zero, L_802659D4
    if (ctx->r1 == 0) {
        // 0x802659C8: or          $a1, $s2, $zero
        ctx->r5 = ctx->r18 | 0;
            goto L_802659D4;
    }
    // 0x802659C8: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    // 0x802659CC: b           L_802659D8
    // 0x802659D0: addiu       $v0, $zero, 0x1F
    ctx->r2 = ADD32(0, 0X1F);
        goto L_802659D8;
    // 0x802659D0: addiu       $v0, $zero, 0x1F
    ctx->r2 = ADD32(0, 0X1F);
L_802659D4:
    // 0x802659D4: addiu       $v0, $zero, 0x29
    ctx->r2 = ADD32(0, 0X29);
L_802659D8:
    // 0x802659D8: jal         0x80264520
    // 0x802659DC: andi        $a2, $v0, 0xFFFF
    ctx->r6 = ctx->r2 & 0XFFFF;
    ovl_8024B800_func_80264520(rdram, ctx);
        goto after_5;
    // 0x802659DC: andi        $a2, $v0, 0xFFFF
    ctx->r6 = ctx->r2 & 0XFFFF;
    after_5:
    // 0x802659E0: lh          $a1, 0x8B8($s5)
    ctx->r5 = MEM_H(ctx->r21, 0X8B8);
    // 0x802659E4: jal         0x80264710
    // 0x802659E8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_8024B800_func_80264710(rdram, ctx);
        goto after_6;
    // 0x802659E8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_6:
    // 0x802659EC: addiu       $s3, $s3, 0x1
    ctx->r19 = ADD32(ctx->r19, 0X1);
    // 0x802659F0: addiu       $s2, $s2, 0x4
    ctx->r18 = ADD32(ctx->r18, 0X4);
    // 0x802659F4: lw          $t8, 0x70($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X70);
L_802659F8:
    // 0x802659F8: addiu       $s1, $s1, 0xF8
    ctx->r17 = ADD32(ctx->r17, 0XF8);
    // 0x802659FC: beq         $s3, $t8, L_80265A10
    if (ctx->r19 == ctx->r24) {
        // 0x80265A00: lw          $ra, 0x44($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X44);
            goto L_80265A10;
    }
    // 0x80265A00: lw          $ra, 0x44($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X44);
    // 0x80265A04: bne         $s1, $s4, L_8026594C
    if (ctx->r17 != ctx->r20) {
        // 0x80265A08: nop
    
            goto L_8026594C;
    }
    // 0x80265A08: nop

L_80265A0C:
    // 0x80265A0C: lw          $ra, 0x44($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X44);
L_80265A10:
    // 0x80265A10: lwc1        $f21, 0x18($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X18);
    // 0x80265A14: lwc1        $f20, 0x1C($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x80265A18: lwc1        $f23, 0x20($sp)
    ctx->f_odd[(23 - 1) * 2] = MEM_W(ctx->r29, 0X20);
    // 0x80265A1C: lwc1        $f22, 0x24($sp)
    ctx->f22.u32l = MEM_W(ctx->r29, 0X24);
    // 0x80265A20: lw          $s0, 0x2C($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X2C);
    // 0x80265A24: lw          $s1, 0x30($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X30);
    // 0x80265A28: lw          $s2, 0x34($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X34);
    // 0x80265A2C: lw          $s3, 0x38($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X38);
    // 0x80265A30: lw          $s4, 0x3C($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X3C);
    // 0x80265A34: lw          $s5, 0x40($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X40);
    // 0x80265A38: jr          $ra
    // 0x80265A3C: addiu       $sp, $sp, 0xB8
    ctx->r29 = ADD32(ctx->r29, 0XB8);
    return;
    // 0x80265A3C: addiu       $sp, $sp, 0xB8
    ctx->r29 = ADD32(ctx->r29, 0XB8);
;}
RECOMP_FUNC void ovl_8024B800_func_802658D0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802658D0: addiu       $a0, $zero, 0x5
    ctx->r4 = ADD32(0, 0X5);
    // 0x802658D4: addiu       $t1, $zero, 0x3
    ctx->r9 = ADD32(0, 0X3);
    // 0x802658D8: sw          $t1, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->r9;
    // 0x802658DC: bne         $a0, $v0, L_802658E8
    if (ctx->r4 != ctx->r2) {
        // 0x802658E0: addiu       $t2, $zero, 0x5
        ctx->r10 = ADD32(0, 0X5);
            goto L_802658E8;
    }
    // 0x802658E0: addiu       $t2, $zero, 0x5
    ctx->r10 = ADD32(0, 0X5);
    // 0x802658E4: sw          $t2, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->r10;
L_802658E8:
    // 0x802658E8: lw          $t3, 0x24($s5)
    ctx->r11 = MEM_W(ctx->r21, 0X24);
    // 0x802658EC: addiu       $t4, $zero, 0x5
    ctx->r12 = ADD32(0, 0X5);
    // 0x802658F0: lbu         $v0, 0x2($t3)
    ctx->r2 = MEM_BU(ctx->r11, 0X2);
    // 0x802658F4: addiu       $t5, $zero, 0x2
    ctx->r13 = ADD32(0, 0X2);
    // 0x802658F8: bne         $v1, $v0, L_80265904
    if (ctx->r3 != ctx->r2) {
        // 0x802658FC: nop
    
            goto L_80265904;
    }
    // 0x802658FC: nop

    // 0x80265900: sw          $t4, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->r12;
L_80265904:
    // 0x80265904: bne         $a0, $v0, L_80265910
    if (ctx->r4 != ctx->r2) {
        // 0x80265908: nop
    
            goto L_80265910;
    }
    // 0x80265908: nop

    // 0x8026590C: sw          $t5, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->r13;
L_80265910:
    // 0x80265910: lh          $t6, 0x8B8($s5)
    ctx->r14 = MEM_H(ctx->r21, 0X8B8);
    // 0x80265914: nop

    // 0x80265918: mtc1        $t6, $f10
    ctx->f10.u32l = ctx->r14;
    // 0x8026591C: jal         0x802645E0
    // 0x80265920: cvt.s.w     $f12, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    ctx->f12.fl = CVT_S_W(ctx->f10.u32l);
    ovl_8024B800_func_802645E0(rdram, ctx);
        goto after_0;
    // 0x80265920: cvt.s.w     $f12, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    ctx->f12.fl = CVT_S_W(ctx->f10.u32l);
    after_0:
    // 0x80265924: sll         $t7, $v0, 2
    ctx->r15 = S32(ctx->r2 << 2);
    // 0x80265928: lui         $s2, 0x800B
    ctx->r18 = S32(0X800B << 16);
    // 0x8026592C: lw          $t8, 0x70($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X70);
    // 0x80265930: addu        $s2, $s2, $t7
    ctx->r18 = ADD32(ctx->r18, ctx->r15);
    // 0x80265934: lw          $s2, -0x3F3C($s2)
    ctx->r18 = MEM_W(ctx->r18, -0X3F3C);
    // 0x80265938: beq         $t8, $zero, L_80265A0C
    if (ctx->r24 == 0) {
        // 0x8026593C: sll         $s1, $zero, 5
        ctx->r17 = S32(0 << 5);
            goto L_80265A0C;
    }
    // 0x8026593C: sll         $s1, $zero, 5
    ctx->r17 = S32(0 << 5);
    // 0x80265940: subu        $s1, $s1, $zero
    ctx->r17 = SUB32(ctx->r17, 0);
    // 0x80265944: sll         $s1, $s1, 3
    ctx->r17 = S32(ctx->r17 << 3);
    // 0x80265948: addiu       $s4, $zero, 0x9B0
    ctx->r20 = ADD32(0, 0X9B0);
L_8026594C:
    // 0x8026594C: lw          $t9, 0x18($s5)
    ctx->r25 = MEM_W(ctx->r21, 0X18);
    // 0x80265950: lw          $t2, 0x6C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X6C);
    // 0x80265954: addu        $s0, $t9, $s1
    ctx->r16 = ADD32(ctx->r25, ctx->r17);
    // 0x80265958: lhu         $t0, 0x10A($s0)
    ctx->r8 = MEM_HU(ctx->r16, 0X10A);
    // 0x8026595C: addiu       $s0, $s0, 0xF8
    ctx->r16 = ADD32(ctx->r16, 0XF8);
    // 0x80265960: andi        $t1, $t0, 0x200
    ctx->r9 = ctx->r8 & 0X200;
    // 0x80265964: bne         $t1, $zero, L_802659F8
    if (ctx->r9 != 0) {
        // 0x80265968: lw          $t8, 0x70($sp)
        ctx->r24 = MEM_W(ctx->r29, 0X70);
            goto L_802659F8;
    }
    // 0x80265968: lw          $t8, 0x70($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X70);
    // 0x8026596C: lbu         $v1, 0x3($s2)
    ctx->r3 = MEM_BU(ctx->r18, 0X3);
    // 0x80265970: addiu       $t6, $zero, 0xC
    ctx->r14 = ADD32(0, 0XC);
    // 0x80265974: sltu        $at, $v1, $t2
    ctx->r1 = ctx->r3 < ctx->r10 ? 1 : 0;
    // 0x80265978: beq         $at, $zero, L_802659B4
    if (ctx->r1 == 0) {
        // 0x8026597C: nop
    
            goto L_802659B4;
    }
    // 0x8026597C: nop

    // 0x80265980: lw          $v0, 0x24($s5)
    ctx->r2 = MEM_W(ctx->r21, 0X24);
    // 0x80265984: addiu       $at, $zero, 0x5
    ctx->r1 = ADD32(0, 0X5);
    // 0x80265988: lbu         $t3, 0x2($v0)
    ctx->r11 = MEM_BU(ctx->r2, 0X2);
    // 0x8026598C: addu        $t4, $v0, $v1
    ctx->r12 = ADD32(ctx->r2, ctx->r3);
    // 0x80265990: bne         $t3, $at, L_802659A8
    if (ctx->r11 != ctx->r1) {
        // 0x80265994: nop
    
            goto L_802659A8;
    }
    // 0x80265994: nop

    // 0x80265998: jal         0x80264E0C
    // 0x8026599C: or          $a0, $s5, $zero
    ctx->r4 = ctx->r21 | 0;
    ovl_8024B800_func_80264E0C(rdram, ctx);
        goto after_1;
    // 0x8026599C: or          $a0, $s5, $zero
    ctx->r4 = ctx->r21 | 0;
    after_1:
    // 0x802659A0: b           L_802659B8
    // 0x802659A4: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
        goto L_802659B8;
    // 0x802659A4: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
L_802659A8:
    // 0x802659A8: lb          $t5, 0x88E($t4)
    ctx->r13 = MEM_B(ctx->r12, 0X88E);
    // 0x802659AC: b           L_802659B8
    // 0x802659B0: sb          $t5, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r13;
        goto L_802659B8;
    // 0x802659B0: sb          $t5, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r13;
L_802659B4:
    // 0x802659B4: sb          $t6, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r14;
L_802659B8:
    // 0x802659B8: lbu         $t7, 0xA($s0)
    ctx->r15 = MEM_BU(ctx->r16, 0XA);
    // 0x802659BC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802659C0: slti        $at, $t7, 0xB
    ctx->r1 = SIGNED(ctx->r15) < 0XB ? 1 : 0;
    // 0x802659C4: beq         $at, $zero, L_802659D4
    if (ctx->r1 == 0) {
        // 0x802659C8: or          $a1, $s2, $zero
        ctx->r5 = ctx->r18 | 0;
            goto L_802659D4;
    }
    // 0x802659C8: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    // 0x802659CC: b           L_802659D8
    // 0x802659D0: addiu       $v0, $zero, 0x1F
    ctx->r2 = ADD32(0, 0X1F);
        goto L_802659D8;
    // 0x802659D0: addiu       $v0, $zero, 0x1F
    ctx->r2 = ADD32(0, 0X1F);
L_802659D4:
    // 0x802659D4: addiu       $v0, $zero, 0x29
    ctx->r2 = ADD32(0, 0X29);
L_802659D8:
    // 0x802659D8: jal         0x80264520
    // 0x802659DC: andi        $a2, $v0, 0xFFFF
    ctx->r6 = ctx->r2 & 0XFFFF;
    ovl_8024B800_func_80264520(rdram, ctx);
        goto after_2;
    // 0x802659DC: andi        $a2, $v0, 0xFFFF
    ctx->r6 = ctx->r2 & 0XFFFF;
    after_2:
    // 0x802659E0: lh          $a1, 0x8B8($s5)
    ctx->r5 = MEM_H(ctx->r21, 0X8B8);
    // 0x802659E4: jal         0x80264710
    // 0x802659E8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_8024B800_func_80264710(rdram, ctx);
        goto after_3;
    // 0x802659E8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_3:
    // 0x802659EC: addiu       $s3, $s3, 0x1
    ctx->r19 = ADD32(ctx->r19, 0X1);
    // 0x802659F0: addiu       $s2, $s2, 0x4
    ctx->r18 = ADD32(ctx->r18, 0X4);
    // 0x802659F4: lw          $t8, 0x70($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X70);
L_802659F8:
    // 0x802659F8: addiu       $s1, $s1, 0xF8
    ctx->r17 = ADD32(ctx->r17, 0XF8);
    // 0x802659FC: beq         $s3, $t8, L_80265A10
    if (ctx->r19 == ctx->r24) {
        // 0x80265A00: lw          $ra, 0x44($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X44);
            goto L_80265A10;
    }
    // 0x80265A00: lw          $ra, 0x44($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X44);
    // 0x80265A04: bne         $s1, $s4, L_8026594C
    if (ctx->r17 != ctx->r20) {
        // 0x80265A08: nop
    
            goto L_8026594C;
    }
    // 0x80265A08: nop

L_80265A0C:
    // 0x80265A0C: lw          $ra, 0x44($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X44);
L_80265A10:
    // 0x80265A10: lwc1        $f21, 0x18($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X18);
    // 0x80265A14: lwc1        $f20, 0x1C($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x80265A18: lwc1        $f23, 0x20($sp)
    ctx->f_odd[(23 - 1) * 2] = MEM_W(ctx->r29, 0X20);
    // 0x80265A1C: lwc1        $f22, 0x24($sp)
    ctx->f22.u32l = MEM_W(ctx->r29, 0X24);
    // 0x80265A20: lw          $s0, 0x2C($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X2C);
    // 0x80265A24: lw          $s1, 0x30($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X30);
    // 0x80265A28: lw          $s2, 0x34($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X34);
    // 0x80265A2C: lw          $s3, 0x38($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X38);
    // 0x80265A30: lw          $s4, 0x3C($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X3C);
    // 0x80265A34: lw          $s5, 0x40($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X40);
    // 0x80265A38: jr          $ra
    // 0x80265A3C: addiu       $sp, $sp, 0xB8
    ctx->r29 = ADD32(ctx->r29, 0XB8);
    return;
    // 0x80265A3C: addiu       $sp, $sp, 0xB8
    ctx->r29 = ADD32(ctx->r29, 0XB8);
;}
