#include "iss64_recomp.h"
#include "funcs.h"

RECOMP_FUNC void func_8029804C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8029804C: lui         $t6, 0x8012
    ctx->r14 = S32(0X8012 << 16);
    // 0x80298050: lhu         $t6, 0xB78($t6)
    ctx->r14 = MEM_HU(ctx->r14, 0XB78);
    // 0x80298054: lui         $t7, 0x802C
    ctx->r15 = S32(0X802C << 16);
    // 0x80298058: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8029805C: lbu         $t7, -0x3590($t7)
    ctx->r15 = MEM_BU(ctx->r15, -0X3590);
    // 0x80298060: lui         $v1, 0x802C
    ctx->r3 = S32(0X802C << 16);
    // 0x80298064: addiu       $v1, $v1, 0x38E3
    ctx->r3 = ADD32(ctx->r3, 0X38E3);
    // 0x80298068: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8029806C: addiu       $at, $zero, 0x5
    ctx->r1 = ADD32(0, 0X5);
    // 0x80298070: andi        $v0, $t7, 0xFF
    ctx->r2 = ctx->r15 & 0XFF;
    // 0x80298074: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80298078: beq         $v0, $at, L_802980A0
    if (ctx->r2 == ctx->r1) {
        // 0x8029807C: sb          $t7, 0x0($v1)
        MEM_B(0X0, ctx->r3) = ctx->r15;
            goto L_802980A0;
    }
    // 0x8029807C: sb          $t7, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r15;
    // 0x80298080: addiu       $at, $zero, 0x6
    ctx->r1 = ADD32(0, 0X6);
    // 0x80298084: beq         $v0, $at, L_802980DC
    if (ctx->r2 == ctx->r1) {
        // 0x80298088: lui         $t0, 0x8009
        ctx->r8 = S32(0X8009 << 16);
            goto L_802980DC;
    }
    // 0x80298088: lui         $t0, 0x8009
    ctx->r8 = S32(0X8009 << 16);
    // 0x8029808C: addiu       $at, $zero, 0x8
    ctx->r1 = ADD32(0, 0X8);
    // 0x80298090: beq         $v0, $at, L_80298114
    if (ctx->r2 == ctx->r1) {
        // 0x80298094: nop
    
            goto L_80298114;
    }
    // 0x80298094: nop

    // 0x80298098: b           L_80298120
    // 0x8029809C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80298120;
    // 0x8029809C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_802980A0:
    // 0x802980A0: lui         $t8, 0x8009
    ctx->r24 = S32(0X8009 << 16);
    // 0x802980A4: lw          $t8, 0x3B20($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X3B20);
    // 0x802980A8: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x802980AC: lbu         $t9, 0xBC($t8)
    ctx->r25 = MEM_BU(ctx->r24, 0XBC);
    // 0x802980B0: nop

    // 0x802980B4: bne         $t9, $at, L_802980CC
    if (ctx->r25 != ctx->r1) {
        // 0x802980B8: nop
    
            goto L_802980CC;
    }
    // 0x802980B8: nop

    // 0x802980BC: jal         0x802614F8
    // 0x802980C0: nop

    LOOKUP_FUNC(0x802614F8)(rdram, ctx);
        goto after_0;
    // 0x802980C0: nop

    after_0:
    // 0x802980C4: b           L_80298120
    // 0x802980C8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80298120;
    // 0x802980C8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_802980CC:
    // 0x802980CC: jal         0x80261364
    // 0x802980D0: nop

    LOOKUP_FUNC(0x80261364)(rdram, ctx);
        goto after_1;
    // 0x802980D0: nop

    after_1:
    // 0x802980D4: b           L_80298120
    // 0x802980D8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80298120;
    // 0x802980D8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_802980DC:
    // 0x802980DC: lw          $t0, 0x3B20($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X3B20);
    // 0x802980E0: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x802980E4: lbu         $t1, 0xBC($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0XBC);
    // 0x802980E8: nop

    // 0x802980EC: bne         $t1, $at, L_80298104
    if (ctx->r9 != ctx->r1) {
        // 0x802980F0: nop
    
            goto L_80298104;
    }
    // 0x802980F0: nop

    // 0x802980F4: jal         0x802614F8
    // 0x802980F8: nop

    LOOKUP_FUNC(0x802614F8)(rdram, ctx);
        goto after_2;
    // 0x802980F8: nop

    after_2:
    // 0x802980FC: b           L_80298120
    // 0x80298100: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80298120;
    // 0x80298100: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80298104:
    // 0x80298104: jal         0x80261364
    // 0x80298108: nop

    LOOKUP_FUNC(0x80261364)(rdram, ctx);
        goto after_3;
    // 0x80298108: nop

    after_3:
    // 0x8029810C: b           L_80298120
    // 0x80298110: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80298120;
    // 0x80298110: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80298114:
    // 0x80298114: jal         0x80261218
    // 0x80298118: nop

    LOOKUP_FUNC(0x80261218)(rdram, ctx);
        goto after_4;
    // 0x80298118: nop

    after_4:
    // 0x8029811C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80298120:
    // 0x80298120: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80298124: jr          $ra
    // 0x80298128: nop

    return;
    // 0x80298128: nop

;}
RECOMP_FUNC void func_8029812C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8029812C: lui         $a0, 0x8010
    ctx->r4 = S32(0X8010 << 16);
    // 0x80298130: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x80298134: addiu       $a0, $a0, 0x4890
    ctx->r4 = ADD32(ctx->r4, 0X4890);
    // 0x80298138: sb          $zero, 0x39CB($at)
    MEM_B(0X39CB, ctx->r1) = 0;
    // 0x8029813C: lhu         $t6, 0x9C8($a0)
    ctx->r14 = MEM_HU(ctx->r4, 0X9C8);
    // 0x80298140: lhu         $t8, 0x9AA($a0)
    ctx->r24 = MEM_HU(ctx->r4, 0X9AA);
    // 0x80298144: lhu         $t3, 0x9B4($a0)
    ctx->r11 = MEM_HU(ctx->r4, 0X9B4);
    // 0x80298148: andi        $t7, $t6, 0x1000
    ctx->r15 = ctx->r14 & 0X1000;
    // 0x8029814C: lhu         $t6, 0x9BE($a0)
    ctx->r14 = MEM_HU(ctx->r4, 0X9BE);
    // 0x80298150: andi        $t9, $t8, 0x1000
    ctx->r25 = ctx->r24 & 0X1000;
    // 0x80298154: or          $t2, $t7, $t9
    ctx->r10 = ctx->r15 | ctx->r25;
    // 0x80298158: andi        $t4, $t3, 0x1000
    ctx->r12 = ctx->r11 & 0X1000;
    // 0x8029815C: or          $t5, $t2, $t4
    ctx->r13 = ctx->r10 | ctx->r12;
    // 0x80298160: andi        $t8, $t6, 0x1000
    ctx->r24 = ctx->r14 & 0X1000;
    // 0x80298164: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80298168: or          $t7, $t5, $t8
    ctx->r15 = ctx->r13 | ctx->r24;
    // 0x8029816C: bne         $t7, $zero, L_802982DC
    if (ctx->r15 != 0) {
        // 0x80298170: sw          $ra, 0x14($sp)
        MEM_W(0X14, ctx->r29) = ctx->r31;
            goto L_802982DC;
    }
    // 0x80298170: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80298174: lui         $t1, 0x802C
    ctx->r9 = S32(0X802C << 16);
    // 0x80298178: addiu       $t1, $t1, 0x3A74
    ctx->r9 = ADD32(ctx->r9, 0X3A74);
    // 0x8029817C: lbu         $v1, 0x0($t1)
    ctx->r3 = MEM_BU(ctx->r9, 0X0);
    // 0x80298180: lui         $a3, 0x8012
    ctx->r7 = S32(0X8012 << 16);
    // 0x80298184: beq         $v1, $zero, L_802986DC
    if (ctx->r3 == 0) {
        // 0x80298188: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_802986DC;
    }
    // 0x80298188: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8029818C: lhu         $a3, 0xB72($a3)
    ctx->r7 = MEM_HU(ctx->r7, 0XB72);
    // 0x80298190: nop

    // 0x80298194: sltiu       $at, $a3, 0x9
    ctx->r1 = ctx->r7 < 0X9 ? 1 : 0;
    // 0x80298198: beq         $at, $zero, L_802986D8
    if (ctx->r1 == 0) {
        // 0x8029819C: sll         $t9, $a3, 2
        ctx->r25 = S32(ctx->r7 << 2);
            goto L_802986D8;
    }
    // 0x8029819C: sll         $t9, $a3, 2
    ctx->r25 = S32(ctx->r7 << 2);
    // 0x802981A0: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x802981A4: addu        $at, $at, $t9
    gpr jr_addend_802981B0 = ctx->r25;
    ctx->r1 = ADD32(ctx->r1, ctx->r25);
    // 0x802981A8: lw          $t9, 0x870($at)
    ctx->r25 = ADD32(ctx->r1, 0X870);
    // 0x802981AC: nop

    // 0x802981B0: jr          $t9
    // 0x802981B4: nop

    switch (jr_addend_802981B0 >> 2) {
        case 0: goto L_802981B8; break;
        case 1: goto L_802981B8; break;
        case 2: goto L_802981B8; break;
        case 3: goto L_802981B8; break;
        case 4: goto L_80298264; break;
        case 5: goto L_8029823C; break;
        case 6: goto L_80298214; break;
        case 7: goto L_802982B0; break;
        case 8: goto L_80298264; break;
        default: switch_error(__func__, 0x802981B0, 0x802C0870);
    }
    // 0x802981B4: nop

L_802981B8:
    // 0x802981B8: bltz        $a3, L_802986D8
    if (SIGNED(ctx->r7) < 0) {
        // 0x802981BC: or          $v1, $zero, $zero
        ctx->r3 = 0 | 0;
            goto L_802986D8;
    }
    // 0x802981BC: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x802981C0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_802981C4:
    // 0x802981C4: lbu         $t2, 0x0($t1)
    ctx->r10 = MEM_BU(ctx->r9, 0X0);
    // 0x802981C8: addiu       $t3, $v0, 0x1
    ctx->r11 = ADD32(ctx->r2, 0X1);
    // 0x802981CC: bne         $t3, $t2, L_802981F8
    if (ctx->r11 != ctx->r10) {
        // 0x802981D0: nop
    
            goto L_802981F8;
    }
    // 0x802981D0: nop

    // 0x802981D4: jal         0x8029884C
    // 0x802981D8: sb          $v1, 0x1F($sp)
    MEM_B(0X1F, ctx->r29) = ctx->r3;
    func_8029884C(rdram, ctx);
        goto after_0;
    // 0x802981D8: sb          $v1, 0x1F($sp)
    MEM_B(0X1F, ctx->r29) = ctx->r3;
    after_0:
    // 0x802981DC: jal         0x802986E8
    // 0x802981E0: nop

    func_802986E8(rdram, ctx);
        goto after_1;
    // 0x802981E0: nop

    after_1:
    // 0x802981E4: lui         $a3, 0x8012
    ctx->r7 = S32(0X8012 << 16);
    // 0x802981E8: lui         $t1, 0x802C
    ctx->r9 = S32(0X802C << 16);
    // 0x802981EC: lhu         $a3, 0xB72($a3)
    ctx->r7 = MEM_HU(ctx->r7, 0XB72);
    // 0x802981F0: lbu         $v1, 0x1F($sp)
    ctx->r3 = MEM_BU(ctx->r29, 0X1F);
    // 0x802981F4: addiu       $t1, $t1, 0x3A74
    ctx->r9 = ADD32(ctx->r9, 0X3A74);
L_802981F8:
    // 0x802981F8: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x802981FC: andi        $v0, $v1, 0xFF
    ctx->r2 = ctx->r3 & 0XFF;
    // 0x80298200: slt         $at, $a3, $v0
    ctx->r1 = SIGNED(ctx->r7) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x80298204: beq         $at, $zero, L_802981C4
    if (ctx->r1 == 0) {
        // 0x80298208: or          $v1, $v0, $zero
        ctx->r3 = ctx->r2 | 0;
            goto L_802981C4;
    }
    // 0x80298208: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
    // 0x8029820C: b           L_802986DC
    // 0x80298210: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_802986DC;
    // 0x80298210: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80298214:
    // 0x80298214: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x80298218: bne         $v1, $at, L_80298240
    if (ctx->r3 != ctx->r1) {
        // 0x8029821C: addiu       $at, $zero, 0x3
        ctx->r1 = ADD32(0, 0X3);
            goto L_80298240;
    }
    // 0x8029821C: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x80298220: jal         0x802987F8
    // 0x80298224: nop

    func_802987F8(rdram, ctx);
        goto after_2;
    // 0x80298224: nop

    after_2:
    // 0x80298228: jal         0x802986E8
    // 0x8029822C: nop

    func_802986E8(rdram, ctx);
        goto after_3;
    // 0x8029822C: nop

    after_3:
    // 0x80298230: lui         $v1, 0x802C
    ctx->r3 = S32(0X802C << 16);
    // 0x80298234: lbu         $v1, 0x3A74($v1)
    ctx->r3 = MEM_BU(ctx->r3, 0X3A74);
    // 0x80298238: nop

L_8029823C:
    // 0x8029823C: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
L_80298240:
    // 0x80298240: bne         $v1, $at, L_80298268
    if (ctx->r3 != ctx->r1) {
        // 0x80298244: addiu       $at, $zero, 0x1
        ctx->r1 = ADD32(0, 0X1);
            goto L_80298268;
    }
    // 0x80298244: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80298248: jal         0x8029884C
    // 0x8029824C: nop

    func_8029884C(rdram, ctx);
        goto after_4;
    // 0x8029824C: nop

    after_4:
    // 0x80298250: jal         0x802986E8
    // 0x80298254: nop

    func_802986E8(rdram, ctx);
        goto after_5;
    // 0x80298254: nop

    after_5:
    // 0x80298258: lui         $v1, 0x802C
    ctx->r3 = S32(0X802C << 16);
    // 0x8029825C: lbu         $v1, 0x3A74($v1)
    ctx->r3 = MEM_BU(ctx->r3, 0X3A74);
    // 0x80298260: nop

L_80298264:
    // 0x80298264: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
L_80298268:
    // 0x80298268: bne         $v1, $at, L_80298290
    if (ctx->r3 != ctx->r1) {
        // 0x8029826C: addiu       $at, $zero, 0x2
        ctx->r1 = ADD32(0, 0X2);
            goto L_80298290;
    }
    // 0x8029826C: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x80298270: jal         0x8029884C
    // 0x80298274: nop

    func_8029884C(rdram, ctx);
        goto after_6;
    // 0x80298274: nop

    after_6:
    // 0x80298278: jal         0x802986E8
    // 0x8029827C: nop

    func_802986E8(rdram, ctx);
        goto after_7;
    // 0x8029827C: nop

    after_7:
    // 0x80298280: lui         $v1, 0x802C
    ctx->r3 = S32(0X802C << 16);
    // 0x80298284: lbu         $v1, 0x3A74($v1)
    ctx->r3 = MEM_BU(ctx->r3, 0X3A74);
    // 0x80298288: nop

    // 0x8029828C: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
L_80298290:
    // 0x80298290: bne         $v1, $at, L_802986DC
    if (ctx->r3 != ctx->r1) {
        // 0x80298294: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_802986DC;
    }
    // 0x80298294: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80298298: jal         0x802987F8
    // 0x8029829C: nop

    func_802987F8(rdram, ctx);
        goto after_8;
    // 0x8029829C: nop

    after_8:
    // 0x802982A0: jal         0x802986E8
    // 0x802982A4: nop

    func_802986E8(rdram, ctx);
        goto after_9;
    // 0x802982A4: nop

    after_9:
    // 0x802982A8: b           L_802986DC
    // 0x802982AC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_802986DC;
    // 0x802982AC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_802982B0:
    // 0x802982B0: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x802982B4: bne         $v1, $at, L_80298240
    if (ctx->r3 != ctx->r1) {
        // 0x802982B8: addiu       $at, $zero, 0x3
        ctx->r1 = ADD32(0, 0X3);
            goto L_80298240;
    }
    // 0x802982B8: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x802982BC: jal         0x802987F8
    // 0x802982C0: nop

    func_802987F8(rdram, ctx);
        goto after_10;
    // 0x802982C0: nop

    after_10:
    // 0x802982C4: jal         0x802986E8
    // 0x802982C8: nop

    func_802986E8(rdram, ctx);
        goto after_11;
    // 0x802982C8: nop

    after_11:
    // 0x802982CC: lui         $v1, 0x802C
    ctx->r3 = S32(0X802C << 16);
    // 0x802982D0: lbu         $v1, 0x3A74($v1)
    ctx->r3 = MEM_BU(ctx->r3, 0X3A74);
    // 0x802982D4: b           L_80298240
    // 0x802982D8: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
        goto L_80298240;
    // 0x802982D8: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
L_802982DC:
    // 0x802982DC: lui         $t1, 0x802C
    ctx->r9 = S32(0X802C << 16);
    // 0x802982E0: addiu       $t1, $t1, 0x3A74
    ctx->r9 = ADD32(ctx->r9, 0X3A74);
    // 0x802982E4: lbu         $v1, 0x0($t1)
    ctx->r3 = MEM_BU(ctx->r9, 0X0);
    // 0x802982E8: lui         $a3, 0x8012
    ctx->r7 = S32(0X8012 << 16);
    // 0x802982EC: bne         $v1, $zero, L_80298438
    if (ctx->r3 != 0) {
        // 0x802982F0: nop
    
            goto L_80298438;
    }
    // 0x802982F0: nop

    // 0x802982F4: lhu         $a3, 0xB72($a3)
    ctx->r7 = MEM_HU(ctx->r7, 0XB72);
    // 0x802982F8: nop

    // 0x802982FC: sltiu       $at, $a3, 0x9
    ctx->r1 = ctx->r7 < 0X9 ? 1 : 0;
    // 0x80298300: beq         $at, $zero, L_802986D8
    if (ctx->r1 == 0) {
        // 0x80298304: sll         $t6, $a3, 2
        ctx->r14 = S32(ctx->r7 << 2);
            goto L_802986D8;
    }
    // 0x80298304: sll         $t6, $a3, 2
    ctx->r14 = S32(ctx->r7 << 2);
    // 0x80298308: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x8029830C: addu        $at, $at, $t6
    gpr jr_addend_80298318 = ctx->r14;
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x80298310: lw          $t6, 0x894($at)
    ctx->r14 = ADD32(ctx->r1, 0X894);
    // 0x80298314: nop

    // 0x80298318: jr          $t6
    // 0x8029831C: nop

    switch (jr_addend_80298318 >> 2) {
        case 0: goto L_80298320; break;
        case 1: goto L_80298320; break;
        case 2: goto L_80298320; break;
        case 3: goto L_80298320; break;
        case 4: goto L_802983C0; break;
        case 5: goto L_802983A8; break;
        case 6: goto L_80298390; break;
        case 7: goto L_80298414; break;
        case 8: goto L_802983C0; break;
        default: switch_error(__func__, 0x80298318, 0x802C0894);
    }
    // 0x8029831C: nop

L_80298320:
    // 0x80298320: bltz        $a3, L_802986D8
    if (SIGNED(ctx->r7) < 0) {
        // 0x80298324: or          $v1, $zero, $zero
        ctx->r3 = 0 | 0;
            goto L_802986D8;
    }
    // 0x80298324: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x80298328: lui         $a2, 0x2
    ctx->r6 = S32(0X2 << 16);
    // 0x8029832C: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x80298330: addiu       $a0, $a0, -0x3770
    ctx->r4 = ADD32(ctx->r4, -0X3770);
    // 0x80298334: ori         $a2, $a2, 0x8000
    ctx->r6 = ctx->r6 | 0X8000;
    // 0x80298338: addiu       $a1, $zero, 0xA
    ctx->r5 = ADD32(0, 0XA);
L_8029833C:
    // 0x8029833C: multu       $v1, $a1
    result = U64(U32(ctx->r3)) * U64(U32(ctx->r5)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80298340: mflo        $t5
    ctx->r13 = lo;
    // 0x80298344: addu        $t8, $a0, $t5
    ctx->r24 = ADD32(ctx->r4, ctx->r13);
    // 0x80298348: addu        $t7, $t8, $a2
    ctx->r15 = ADD32(ctx->r24, ctx->r6);
    // 0x8029834C: lhu         $t9, 0x9AC($t7)
    ctx->r25 = MEM_HU(ctx->r15, 0X9AC);
    // 0x80298350: nop

    // 0x80298354: andi        $t3, $t9, 0x1000
    ctx->r11 = ctx->r25 & 0X1000;
    // 0x80298358: beq         $t3, $zero, L_80298374
    if (ctx->r11 == 0) {
        // 0x8029835C: nop
    
            goto L_80298374;
    }
    // 0x8029835C: nop

    // 0x80298360: lbu         $t2, 0x0($t1)
    ctx->r10 = MEM_BU(ctx->r9, 0X0);
    // 0x80298364: addiu       $t4, $v1, 0x1
    ctx->r12 = ADD32(ctx->r3, 0X1);
    // 0x80298368: bne         $t2, $zero, L_80298374
    if (ctx->r10 != 0) {
        // 0x8029836C: nop
    
            goto L_80298374;
    }
    // 0x8029836C: nop

    // 0x80298370: sb          $t4, 0x0($t1)
    MEM_B(0X0, ctx->r9) = ctx->r12;
L_80298374:
    // 0x80298374: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x80298378: andi        $t6, $v1, 0xFF
    ctx->r14 = ctx->r3 & 0XFF;
    // 0x8029837C: slt         $at, $a3, $t6
    ctx->r1 = SIGNED(ctx->r7) < SIGNED(ctx->r14) ? 1 : 0;
    // 0x80298380: beq         $at, $zero, L_8029833C
    if (ctx->r1 == 0) {
        // 0x80298384: or          $v1, $t6, $zero
        ctx->r3 = ctx->r14 | 0;
            goto L_8029833C;
    }
    // 0x80298384: or          $v1, $t6, $zero
    ctx->r3 = ctx->r14 | 0;
    // 0x80298388: b           L_802986DC
    // 0x8029838C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_802986DC;
    // 0x8029838C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80298390:
    // 0x80298390: lhu         $t5, 0x9CA($a0)
    ctx->r13 = MEM_HU(ctx->r4, 0X9CA);
    // 0x80298394: addiu       $t7, $zero, 0x4
    ctx->r15 = ADD32(0, 0X4);
    // 0x80298398: andi        $t8, $t5, 0x1000
    ctx->r24 = ctx->r13 & 0X1000;
    // 0x8029839C: beq         $t8, $zero, L_802983A8
    if (ctx->r24 == 0) {
        // 0x802983A0: nop
    
            goto L_802983A8;
    }
    // 0x802983A0: nop

    // 0x802983A4: sb          $t7, 0x0($t1)
    MEM_B(0X0, ctx->r9) = ctx->r15;
L_802983A8:
    // 0x802983A8: lhu         $t9, 0x9C0($a0)
    ctx->r25 = MEM_HU(ctx->r4, 0X9C0);
    // 0x802983AC: addiu       $t2, $zero, 0x3
    ctx->r10 = ADD32(0, 0X3);
    // 0x802983B0: andi        $t3, $t9, 0x1000
    ctx->r11 = ctx->r25 & 0X1000;
    // 0x802983B4: beq         $t3, $zero, L_802983C0
    if (ctx->r11 == 0) {
        // 0x802983B8: nop
    
            goto L_802983C0;
    }
    // 0x802983B8: nop

    // 0x802983BC: sb          $t2, 0x0($t1)
    MEM_B(0X0, ctx->r9) = ctx->r10;
L_802983C0:
    // 0x802983C0: lhu         $t4, 0x9AC($a0)
    ctx->r12 = MEM_HU(ctx->r4, 0X9AC);
    // 0x802983C4: nop

    // 0x802983C8: andi        $t6, $t4, 0x1000
    ctx->r14 = ctx->r12 & 0X1000;
    // 0x802983CC: beq         $t6, $zero, L_802983E8
    if (ctx->r14 == 0) {
        // 0x802983D0: nop
    
            goto L_802983E8;
    }
    // 0x802983D0: nop

    // 0x802983D4: lbu         $t5, 0x0($t1)
    ctx->r13 = MEM_BU(ctx->r9, 0X0);
    // 0x802983D8: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x802983DC: bne         $t5, $zero, L_802983E8
    if (ctx->r13 != 0) {
        // 0x802983E0: nop
    
            goto L_802983E8;
    }
    // 0x802983E0: nop

    // 0x802983E4: sb          $t8, 0x0($t1)
    MEM_B(0X0, ctx->r9) = ctx->r24;
L_802983E8:
    // 0x802983E8: lhu         $t7, 0x9B6($a0)
    ctx->r15 = MEM_HU(ctx->r4, 0X9B6);
    // 0x802983EC: nop

    // 0x802983F0: andi        $t9, $t7, 0x1000
    ctx->r25 = ctx->r15 & 0X1000;
    // 0x802983F4: beq         $t9, $zero, L_802986DC
    if (ctx->r25 == 0) {
        // 0x802983F8: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_802986DC;
    }
    // 0x802983F8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802983FC: lbu         $t3, 0x0($t1)
    ctx->r11 = MEM_BU(ctx->r9, 0X0);
    // 0x80298400: addiu       $t2, $zero, 0x2
    ctx->r10 = ADD32(0, 0X2);
    // 0x80298404: bne         $t3, $zero, L_802986DC
    if (ctx->r11 != 0) {
        // 0x80298408: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_802986DC;
    }
    // 0x80298408: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8029840C: b           L_802986D8
    // 0x80298410: sb          $t2, 0x0($t1)
    MEM_B(0X0, ctx->r9) = ctx->r10;
        goto L_802986D8;
    // 0x80298410: sb          $t2, 0x0($t1)
    MEM_B(0X0, ctx->r9) = ctx->r10;
L_80298414:
    // 0x80298414: lhu         $t4, 0x9CA($a0)
    ctx->r12 = MEM_HU(ctx->r4, 0X9CA);
    // 0x80298418: nop

    // 0x8029841C: andi        $t6, $t4, 0x1000
    ctx->r14 = ctx->r12 & 0X1000;
    // 0x80298420: beq         $t6, $zero, L_802983A8
    if (ctx->r14 == 0) {
        // 0x80298424: nop
    
            goto L_802983A8;
    }
    // 0x80298424: nop

    // 0x80298428: bne         $v1, $zero, L_802983A8
    if (ctx->r3 != 0) {
        // 0x8029842C: addiu       $t5, $zero, 0x4
        ctx->r13 = ADD32(0, 0X4);
            goto L_802983A8;
    }
    // 0x8029842C: addiu       $t5, $zero, 0x4
    ctx->r13 = ADD32(0, 0X4);
    // 0x80298430: b           L_802983A8
    // 0x80298434: sb          $t5, 0x0($t1)
    MEM_B(0X0, ctx->r9) = ctx->r13;
        goto L_802983A8;
    // 0x80298434: sb          $t5, 0x0($t1)
    MEM_B(0X0, ctx->r9) = ctx->r13;
L_80298438:
    // 0x80298438: lui         $a3, 0x8012
    ctx->r7 = S32(0X8012 << 16);
    // 0x8029843C: lhu         $a3, 0xB72($a3)
    ctx->r7 = MEM_HU(ctx->r7, 0XB72);
    // 0x80298440: nop

    // 0x80298444: sltiu       $at, $a3, 0x9
    ctx->r1 = ctx->r7 < 0X9 ? 1 : 0;
    // 0x80298448: beq         $at, $zero, L_802986D8
    if (ctx->r1 == 0) {
        // 0x8029844C: sll         $t8, $a3, 2
        ctx->r24 = S32(ctx->r7 << 2);
            goto L_802986D8;
    }
    // 0x8029844C: sll         $t8, $a3, 2
    ctx->r24 = S32(ctx->r7 << 2);
    // 0x80298450: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x80298454: addu        $at, $at, $t8
    gpr jr_addend_80298460 = ctx->r24;
    ctx->r1 = ADD32(ctx->r1, ctx->r24);
    // 0x80298458: lw          $t8, 0x8B8($at)
    ctx->r24 = ADD32(ctx->r1, 0X8B8);
    // 0x8029845C: nop

    // 0x80298460: jr          $t8
    // 0x80298464: nop

    switch (jr_addend_80298460 >> 2) {
        case 0: goto L_80298468; break;
        case 1: goto L_80298468; break;
        case 2: goto L_80298468; break;
        case 3: goto L_80298468; break;
        case 4: goto L_802985C4; break;
        case 5: goto L_80298564; break;
        case 6: goto L_80298510; break;
        case 7: goto L_80298678; break;
        case 8: goto L_802985C4; break;
        default: switch_error(__func__, 0x80298460, 0x802C08B8);
    }
    // 0x80298464: nop

L_80298468:
    // 0x80298468: bltz        $a3, L_802986D8
    if (SIGNED(ctx->r7) < 0) {
        // 0x8029846C: or          $v1, $zero, $zero
        ctx->r3 = 0 | 0;
            goto L_802986D8;
    }
    // 0x8029846C: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x80298470: lui         $t0, 0x8012
    ctx->r8 = S32(0X8012 << 16);
    // 0x80298474: lui         $a2, 0x2
    ctx->r6 = S32(0X2 << 16);
    // 0x80298478: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x8029847C: addiu       $a0, $a0, -0x3770
    ctx->r4 = ADD32(ctx->r4, -0X3770);
    // 0x80298480: ori         $a2, $a2, 0x8000
    ctx->r6 = ctx->r6 | 0X8000;
    // 0x80298484: addiu       $t0, $t0, -0x2CF0
    ctx->r8 = ADD32(ctx->r8, -0X2CF0);
    // 0x80298488: addiu       $a1, $zero, 0xA
    ctx->r5 = ADD32(0, 0XA);
L_8029848C:
    // 0x8029848C: multu       $v1, $a1
    result = U64(U32(ctx->r3)) * U64(U32(ctx->r5)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80298490: mflo        $t7
    ctx->r15 = lo;
    // 0x80298494: addu        $t9, $a0, $t7
    ctx->r25 = ADD32(ctx->r4, ctx->r15);
    // 0x80298498: addu        $t3, $t9, $a2
    ctx->r11 = ADD32(ctx->r25, ctx->r6);
    // 0x8029849C: lhu         $v0, 0x9AC($t3)
    ctx->r2 = MEM_HU(ctx->r11, 0X9AC);
    // 0x802984A0: nop

    // 0x802984A4: andi        $t2, $v0, 0x10
    ctx->r10 = ctx->r2 & 0X10;
    // 0x802984A8: andi        $t4, $v0, 0x20
    ctx->r12 = ctx->r2 & 0X20;
    // 0x802984AC: or          $t6, $t2, $t4
    ctx->r14 = ctx->r10 | ctx->r12;
    // 0x802984B0: andi        $t5, $v0, 0x2000
    ctx->r13 = ctx->r2 & 0X2000;
    // 0x802984B4: or          $t8, $t6, $t5
    ctx->r24 = ctx->r14 | ctx->r13;
    // 0x802984B8: beq         $t8, $zero, L_802984F4
    if (ctx->r24 == 0) {
        // 0x802984BC: nop
    
            goto L_802984F4;
    }
    // 0x802984BC: nop

    // 0x802984C0: lbu         $t9, 0x0($t1)
    ctx->r25 = MEM_BU(ctx->r9, 0X0);
    // 0x802984C4: addiu       $t7, $v1, 0x1
    ctx->r15 = ADD32(ctx->r3, 0X1);
    // 0x802984C8: bne         $t7, $t9, L_802984F4
    if (ctx->r15 != ctx->r25) {
        // 0x802984CC: nop
    
            goto L_802984F4;
    }
    // 0x802984CC: nop

    // 0x802984D0: lhu         $t3, 0x8($t0)
    ctx->r11 = MEM_HU(ctx->r8, 0X8);
    // 0x802984D4: sb          $zero, 0x0($t1)
    MEM_B(0X0, ctx->r9) = 0;
    // 0x802984D8: andi        $t2, $t3, 0x80
    ctx->r10 = ctx->r11 & 0X80;
    // 0x802984DC: beq         $t2, $zero, L_802984F4
    if (ctx->r10 == 0) {
        // 0x802984E0: nop
    
            goto L_802984F4;
    }
    // 0x802984E0: nop

    // 0x802984E4: lhu         $t4, 0x10($t0)
    ctx->r12 = MEM_HU(ctx->r8, 0X10);
    // 0x802984E8: nop

    // 0x802984EC: xori        $t6, $t4, 0x40
    ctx->r14 = ctx->r12 ^ 0X40;
    // 0x802984F0: sh          $t6, 0x10($t0)
    MEM_H(0X10, ctx->r8) = ctx->r14;
L_802984F4:
    // 0x802984F4: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x802984F8: andi        $t5, $v1, 0xFF
    ctx->r13 = ctx->r3 & 0XFF;
    // 0x802984FC: slt         $at, $a3, $t5
    ctx->r1 = SIGNED(ctx->r7) < SIGNED(ctx->r13) ? 1 : 0;
    // 0x80298500: beq         $at, $zero, L_8029848C
    if (ctx->r1 == 0) {
        // 0x80298504: or          $v1, $t5, $zero
        ctx->r3 = ctx->r13 | 0;
            goto L_8029848C;
    }
    // 0x80298504: or          $v1, $t5, $zero
    ctx->r3 = ctx->r13 | 0;
    // 0x80298508: b           L_802986DC
    // 0x8029850C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_802986DC;
    // 0x8029850C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80298510:
    // 0x80298510: lhu         $v0, 0x9CA($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X9CA);
    // 0x80298514: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x80298518: andi        $t8, $v0, 0x10
    ctx->r24 = ctx->r2 & 0X10;
    // 0x8029851C: andi        $t7, $v0, 0x20
    ctx->r15 = ctx->r2 & 0X20;
    // 0x80298520: or          $t9, $t8, $t7
    ctx->r25 = ctx->r24 | ctx->r15;
    // 0x80298524: andi        $t3, $v0, 0x2000
    ctx->r11 = ctx->r2 & 0X2000;
    // 0x80298528: or          $t2, $t9, $t3
    ctx->r10 = ctx->r25 | ctx->r11;
    // 0x8029852C: beq         $t2, $zero, L_80298564
    if (ctx->r10 == 0) {
        // 0x80298530: nop
    
            goto L_80298564;
    }
    // 0x80298530: nop

    // 0x80298534: bne         $v1, $at, L_80298564
    if (ctx->r3 != ctx->r1) {
        // 0x80298538: lui         $t0, 0x8012
        ctx->r8 = S32(0X8012 << 16);
            goto L_80298564;
    }
    // 0x80298538: lui         $t0, 0x8012
    ctx->r8 = S32(0X8012 << 16);
    // 0x8029853C: addiu       $t0, $t0, -0x2CF0
    ctx->r8 = ADD32(ctx->r8, -0X2CF0);
    // 0x80298540: lhu         $t4, 0xA9C($t0)
    ctx->r12 = MEM_HU(ctx->r8, 0XA9C);
    // 0x80298544: sb          $zero, 0x0($t1)
    MEM_B(0X0, ctx->r9) = 0;
    // 0x80298548: andi        $t6, $t4, 0x80
    ctx->r14 = ctx->r12 & 0X80;
    // 0x8029854C: beq         $t6, $zero, L_80298564
    if (ctx->r14 == 0) {
        // 0x80298550: nop
    
            goto L_80298564;
    }
    // 0x80298550: nop

    // 0x80298554: lhu         $t5, 0xAA4($t0)
    ctx->r13 = MEM_HU(ctx->r8, 0XAA4);
    // 0x80298558: nop

    // 0x8029855C: xori        $t8, $t5, 0x40
    ctx->r24 = ctx->r13 ^ 0X40;
    // 0x80298560: sh          $t8, 0xAA4($t0)
    MEM_H(0XAA4, ctx->r8) = ctx->r24;
L_80298564:
    // 0x80298564: lui         $t0, 0x8012
    ctx->r8 = S32(0X8012 << 16);
    // 0x80298568: addiu       $t0, $t0, -0x2CF0
    ctx->r8 = ADD32(ctx->r8, -0X2CF0);
L_8029856C:
    // 0x8029856C: lhu         $v0, 0x9C0($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X9C0);
    // 0x80298570: nop

    // 0x80298574: andi        $t7, $v0, 0x10
    ctx->r15 = ctx->r2 & 0X10;
    // 0x80298578: andi        $t9, $v0, 0x20
    ctx->r25 = ctx->r2 & 0X20;
    // 0x8029857C: or          $t3, $t7, $t9
    ctx->r11 = ctx->r15 | ctx->r25;
    // 0x80298580: andi        $t2, $v0, 0x2000
    ctx->r10 = ctx->r2 & 0X2000;
    // 0x80298584: or          $t4, $t3, $t2
    ctx->r12 = ctx->r11 | ctx->r10;
    // 0x80298588: beq         $t4, $zero, L_802985C4
    if (ctx->r12 == 0) {
        // 0x8029858C: nop
    
            goto L_802985C4;
    }
    // 0x8029858C: nop

    // 0x80298590: lbu         $t6, 0x0($t1)
    ctx->r14 = MEM_BU(ctx->r9, 0X0);
    // 0x80298594: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x80298598: bne         $t6, $at, L_802985C4
    if (ctx->r14 != ctx->r1) {
        // 0x8029859C: nop
    
            goto L_802985C4;
    }
    // 0x8029859C: nop

    // 0x802985A0: lhu         $t5, 0x8($t0)
    ctx->r13 = MEM_HU(ctx->r8, 0X8);
    // 0x802985A4: sb          $zero, 0x0($t1)
    MEM_B(0X0, ctx->r9) = 0;
    // 0x802985A8: andi        $t8, $t5, 0x80
    ctx->r24 = ctx->r13 & 0X80;
    // 0x802985AC: beq         $t8, $zero, L_802985C4
    if (ctx->r24 == 0) {
        // 0x802985B0: nop
    
            goto L_802985C4;
    }
    // 0x802985B0: nop

    // 0x802985B4: lhu         $t7, 0x10($t0)
    ctx->r15 = MEM_HU(ctx->r8, 0X10);
    // 0x802985B8: nop

    // 0x802985BC: xori        $t9, $t7, 0x40
    ctx->r25 = ctx->r15 ^ 0X40;
    // 0x802985C0: sh          $t9, 0x10($t0)
    MEM_H(0X10, ctx->r8) = ctx->r25;
L_802985C4:
    // 0x802985C4: lhu         $v0, 0x9AC($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X9AC);
    // 0x802985C8: lui         $t0, 0x8012
    ctx->r8 = S32(0X8012 << 16);
    // 0x802985CC: andi        $t3, $v0, 0x10
    ctx->r11 = ctx->r2 & 0X10;
    // 0x802985D0: andi        $t2, $v0, 0x20
    ctx->r10 = ctx->r2 & 0X20;
    // 0x802985D4: or          $t4, $t3, $t2
    ctx->r12 = ctx->r11 | ctx->r10;
    // 0x802985D8: andi        $t6, $v0, 0x2000
    ctx->r14 = ctx->r2 & 0X2000;
    // 0x802985DC: or          $t5, $t4, $t6
    ctx->r13 = ctx->r12 | ctx->r14;
    // 0x802985E0: beq         $t5, $zero, L_8029861C
    if (ctx->r13 == 0) {
        // 0x802985E4: addiu       $t0, $t0, -0x2CF0
        ctx->r8 = ADD32(ctx->r8, -0X2CF0);
            goto L_8029861C;
    }
    // 0x802985E4: addiu       $t0, $t0, -0x2CF0
    ctx->r8 = ADD32(ctx->r8, -0X2CF0);
    // 0x802985E8: lbu         $t8, 0x0($t1)
    ctx->r24 = MEM_BU(ctx->r9, 0X0);
    // 0x802985EC: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x802985F0: bne         $t8, $at, L_8029861C
    if (ctx->r24 != ctx->r1) {
        // 0x802985F4: nop
    
            goto L_8029861C;
    }
    // 0x802985F4: nop

    // 0x802985F8: lhu         $t7, 0x8($t0)
    ctx->r15 = MEM_HU(ctx->r8, 0X8);
    // 0x802985FC: sb          $zero, 0x0($t1)
    MEM_B(0X0, ctx->r9) = 0;
    // 0x80298600: andi        $t9, $t7, 0x80
    ctx->r25 = ctx->r15 & 0X80;
    // 0x80298604: beq         $t9, $zero, L_8029861C
    if (ctx->r25 == 0) {
        // 0x80298608: nop
    
            goto L_8029861C;
    }
    // 0x80298608: nop

    // 0x8029860C: lhu         $t3, 0x10($t0)
    ctx->r11 = MEM_HU(ctx->r8, 0X10);
    // 0x80298610: nop

    // 0x80298614: xori        $t2, $t3, 0x40
    ctx->r10 = ctx->r11 ^ 0X40;
    // 0x80298618: sh          $t2, 0x10($t0)
    MEM_H(0X10, ctx->r8) = ctx->r10;
L_8029861C:
    // 0x8029861C: lhu         $v0, 0x9B6($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X9B6);
    // 0x80298620: nop

    // 0x80298624: andi        $t4, $v0, 0x10
    ctx->r12 = ctx->r2 & 0X10;
    // 0x80298628: andi        $t6, $v0, 0x20
    ctx->r14 = ctx->r2 & 0X20;
    // 0x8029862C: or          $t5, $t4, $t6
    ctx->r13 = ctx->r12 | ctx->r14;
    // 0x80298630: andi        $t8, $v0, 0x2000
    ctx->r24 = ctx->r2 & 0X2000;
    // 0x80298634: or          $t7, $t5, $t8
    ctx->r15 = ctx->r13 | ctx->r24;
    // 0x80298638: beq         $t7, $zero, L_802986DC
    if (ctx->r15 == 0) {
        // 0x8029863C: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_802986DC;
    }
    // 0x8029863C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80298640: lbu         $t9, 0x0($t1)
    ctx->r25 = MEM_BU(ctx->r9, 0X0);
    // 0x80298644: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x80298648: bne         $t9, $at, L_802986DC
    if (ctx->r25 != ctx->r1) {
        // 0x8029864C: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_802986DC;
    }
    // 0x8029864C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80298650: lhu         $t3, 0xA9C($t0)
    ctx->r11 = MEM_HU(ctx->r8, 0XA9C);
    // 0x80298654: sb          $zero, 0x0($t1)
    MEM_B(0X0, ctx->r9) = 0;
    // 0x80298658: andi        $t2, $t3, 0x80
    ctx->r10 = ctx->r11 & 0X80;
    // 0x8029865C: beq         $t2, $zero, L_802986DC
    if (ctx->r10 == 0) {
        // 0x80298660: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_802986DC;
    }
    // 0x80298660: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80298664: lhu         $t4, 0xAA4($t0)
    ctx->r12 = MEM_HU(ctx->r8, 0XAA4);
    // 0x80298668: nop

    // 0x8029866C: xori        $t6, $t4, 0x40
    ctx->r14 = ctx->r12 ^ 0X40;
    // 0x80298670: b           L_802986D8
    // 0x80298674: sh          $t6, 0xAA4($t0)
    MEM_H(0XAA4, ctx->r8) = ctx->r14;
        goto L_802986D8;
    // 0x80298674: sh          $t6, 0xAA4($t0)
    MEM_H(0XAA4, ctx->r8) = ctx->r14;
L_80298678:
    // 0x80298678: lhu         $v0, 0x9CA($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X9CA);
    // 0x8029867C: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x80298680: andi        $t5, $v0, 0x10
    ctx->r13 = ctx->r2 & 0X10;
    // 0x80298684: andi        $t8, $v0, 0x20
    ctx->r24 = ctx->r2 & 0X20;
    // 0x80298688: or          $t7, $t5, $t8
    ctx->r15 = ctx->r13 | ctx->r24;
    // 0x8029868C: andi        $t9, $v0, 0x2000
    ctx->r25 = ctx->r2 & 0X2000;
    // 0x80298690: or          $t3, $t7, $t9
    ctx->r11 = ctx->r15 | ctx->r25;
    // 0x80298694: beq         $t3, $zero, L_802986CC
    if (ctx->r11 == 0) {
        // 0x80298698: nop
    
            goto L_802986CC;
    }
    // 0x80298698: nop

    // 0x8029869C: bne         $v1, $at, L_802986CC
    if (ctx->r3 != ctx->r1) {
        // 0x802986A0: lui         $t0, 0x8012
        ctx->r8 = S32(0X8012 << 16);
            goto L_802986CC;
    }
    // 0x802986A0: lui         $t0, 0x8012
    ctx->r8 = S32(0X8012 << 16);
    // 0x802986A4: addiu       $t0, $t0, -0x2CF0
    ctx->r8 = ADD32(ctx->r8, -0X2CF0);
    // 0x802986A8: lhu         $t2, 0xA9C($t0)
    ctx->r10 = MEM_HU(ctx->r8, 0XA9C);
    // 0x802986AC: sb          $zero, 0x0($t1)
    MEM_B(0X0, ctx->r9) = 0;
    // 0x802986B0: andi        $t4, $t2, 0x80
    ctx->r12 = ctx->r10 & 0X80;
    // 0x802986B4: beq         $t4, $zero, L_802986CC
    if (ctx->r12 == 0) {
        // 0x802986B8: nop
    
            goto L_802986CC;
    }
    // 0x802986B8: nop

    // 0x802986BC: lhu         $t6, 0xAA4($t0)
    ctx->r14 = MEM_HU(ctx->r8, 0XAA4);
    // 0x802986C0: nop

    // 0x802986C4: xori        $t5, $t6, 0x40
    ctx->r13 = ctx->r14 ^ 0X40;
    // 0x802986C8: sh          $t5, 0xAA4($t0)
    MEM_H(0XAA4, ctx->r8) = ctx->r13;
L_802986CC:
    // 0x802986CC: lui         $t0, 0x8012
    ctx->r8 = S32(0X8012 << 16);
    // 0x802986D0: b           L_8029856C
    // 0x802986D4: addiu       $t0, $t0, -0x2CF0
    ctx->r8 = ADD32(ctx->r8, -0X2CF0);
        goto L_8029856C;
    // 0x802986D4: addiu       $t0, $t0, -0x2CF0
    ctx->r8 = ADD32(ctx->r8, -0X2CF0);
L_802986D8:
    // 0x802986D8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_802986DC:
    // 0x802986DC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x802986E0: jr          $ra
    // 0x802986E4: nop

    return;
    // 0x802986E4: nop

;}
RECOMP_FUNC void func_802986E8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802986E8: lui         $t6, 0x802C
    ctx->r14 = S32(0X802C << 16);
    // 0x802986EC: lbu         $t6, 0x39CB($t6)
    ctx->r14 = MEM_BU(ctx->r14, 0X39CB);
    // 0x802986F0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802986F4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x802986F8: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x802986FC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80298700: bne         $v0, $t6, L_80298790
    if (ctx->r2 != ctx->r14) {
        // 0x80298704: sb          $zero, 0x3A74($at)
        MEM_B(0X3A74, ctx->r1) = 0;
            goto L_80298790;
    }
    // 0x80298704: sb          $zero, 0x3A74($at)
    MEM_B(0X3A74, ctx->r1) = 0;
    // 0x80298708: lui         $t7, 0x8011
    ctx->r15 = S32(0X8011 << 16);
    // 0x8029870C: lbu         $t7, -0x2FAF($t7)
    ctx->r15 = MEM_BU(ctx->r15, -0X2FAF);
    // 0x80298710: nop

    // 0x80298714: bne         $v0, $t7, L_80298760
    if (ctx->r2 != ctx->r15) {
        // 0x80298718: nop
    
            goto L_80298760;
    }
    // 0x80298718: nop

    // 0x8029871C: jal         0x80015BC0
    // 0x80298720: addiu       $a0, $zero, 0x3
    ctx->r4 = ADD32(0, 0X3);
    func_80015BC0(rdram, ctx);
        goto after_0;
    // 0x80298720: addiu       $a0, $zero, 0x3
    ctx->r4 = ADD32(0, 0X3);
    after_0:
    // 0x80298724: jal         0x802A13CC
    // 0x80298728: nop

    func_802A13CC(rdram, ctx);
        goto after_1;
    // 0x80298728: nop

    after_1:
    // 0x8029872C: lui         $a0, 0x802C
    ctx->r4 = S32(0X802C << 16);
    // 0x80298730: lbu         $a0, 0x39CA($a0)
    ctx->r4 = MEM_BU(ctx->r4, 0X39CA);
    // 0x80298734: jal         0x80296524
    // 0x80298738: nop

    func_80296524(rdram, ctx);
        goto after_2;
    // 0x80298738: nop

    after_2:
    // 0x8029873C: jal         0x80299E40
    // 0x80298740: nop

    func_80299E40(rdram, ctx);
        goto after_3;
    // 0x80298740: nop

    after_3:
    // 0x80298744: lui         $v0, 0x8011
    ctx->r2 = S32(0X8011 << 16);
    // 0x80298748: addiu       $v0, $v0, -0x3770
    ctx->r2 = ADD32(ctx->r2, -0X3770);
    // 0x8029874C: lbu         $t8, 0x754($v0)
    ctx->r24 = MEM_BU(ctx->r2, 0X754);
    // 0x80298750: nop

    // 0x80298754: andi        $t9, $t8, 0xFE
    ctx->r25 = ctx->r24 & 0XFE;
    // 0x80298758: b           L_80298790
    // 0x8029875C: sb          $t9, 0x754($v0)
    MEM_B(0X754, ctx->r2) = ctx->r25;
        goto L_80298790;
    // 0x8029875C: sb          $t9, 0x754($v0)
    MEM_B(0X754, ctx->r2) = ctx->r25;
L_80298760:
    // 0x80298760: jal         0x80015BC0
    // 0x80298764: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
    func_80015BC0(rdram, ctx);
        goto after_4;
    // 0x80298764: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
    after_4:
    // 0x80298768: jal         0x80297370
    // 0x8029876C: nop

    func_80297370(rdram, ctx);
        goto after_5;
    // 0x8029876C: nop

    after_5:
    // 0x80298770: jal         0x802937C0
    // 0x80298774: nop

    func_802937C0(rdram, ctx);
        goto after_6;
    // 0x80298774: nop

    after_6:
    // 0x80298778: lui         $t0, 0x8011
    ctx->r8 = S32(0X8011 << 16);
    // 0x8029877C: lbu         $t0, -0x301C($t0)
    ctx->r8 = MEM_BU(ctx->r8, -0X301C);
    // 0x80298780: lui         $at, 0x8011
    ctx->r1 = S32(0X8011 << 16);
    // 0x80298784: ori         $t1, $t0, 0x1
    ctx->r9 = ctx->r8 | 0X1;
    // 0x80298788: jal         0x80077E24
    // 0x8029878C: sb          $t1, -0x301C($at)
    MEM_B(-0X301C, ctx->r1) = ctx->r9;
    func_80077E24(rdram, ctx);
        goto after_7;
    // 0x8029878C: sb          $t1, -0x301C($at)
    MEM_B(-0X301C, ctx->r1) = ctx->r9;
    after_7:
L_80298790:
    // 0x80298790: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80298794: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80298798: jr          $ra
    // 0x8029879C: nop

    return;
    // 0x8029879C: nop

;}
RECOMP_FUNC void func_802987A0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802987A0: lui         $v0, 0x8011
    ctx->r2 = S32(0X8011 << 16);
    // 0x802987A4: addiu       $v0, $v0, -0x3770
    ctx->r2 = ADD32(ctx->r2, -0X3770);
    // 0x802987A8: lbu         $t6, 0x7C1($v0)
    ctx->r14 = MEM_BU(ctx->r2, 0X7C1);
    // 0x802987AC: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x802987B0: xori        $t7, $t6, 0x1
    ctx->r15 = ctx->r14 ^ 0X1;
    // 0x802987B4: sb          $t7, 0x7C1($v0)
    MEM_B(0X7C1, ctx->r2) = ctx->r15;
    // 0x802987B8: sb          $zero, 0x39CA($at)
    MEM_B(0X39CA, ctx->r1) = 0;
    // 0x802987BC: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x802987C0: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x802987C4: jr          $ra
    // 0x802987C8: sb          $t8, 0x39CB($at)
    MEM_B(0X39CB, ctx->r1) = ctx->r24;
    return;
    // 0x802987C8: sb          $t8, 0x39CB($at)
    MEM_B(0X39CB, ctx->r1) = ctx->r24;
;}
RECOMP_FUNC void func_802987CC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802987CC: lui         $v0, 0x8011
    ctx->r2 = S32(0X8011 << 16);
    // 0x802987D0: addiu       $v0, $v0, -0x3770
    ctx->r2 = ADD32(ctx->r2, -0X3770);
    // 0x802987D4: lbu         $t6, 0x7C1($v0)
    ctx->r14 = MEM_BU(ctx->r2, 0X7C1);
    // 0x802987D8: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x802987DC: xori        $t7, $t6, 0x1
    ctx->r15 = ctx->r14 ^ 0X1;
    // 0x802987E0: sb          $t7, 0x7C1($v0)
    MEM_B(0X7C1, ctx->r2) = ctx->r15;
    // 0x802987E4: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x802987E8: sb          $v1, 0x39CA($at)
    MEM_B(0X39CA, ctx->r1) = ctx->r3;
    // 0x802987EC: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x802987F0: jr          $ra
    // 0x802987F4: sb          $v1, 0x39CB($at)
    MEM_B(0X39CB, ctx->r1) = ctx->r3;
    return;
    // 0x802987F4: sb          $v1, 0x39CB($at)
    MEM_B(0X39CB, ctx->r1) = ctx->r3;
;}
RECOMP_FUNC void func_802987F8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802987F8: lui         $t6, 0x8011
    ctx->r14 = S32(0X8011 << 16);
    // 0x802987FC: lbu         $t6, -0x2FAF($t6)
    ctx->r14 = MEM_BU(ctx->r14, -0X2FAF);
    // 0x80298800: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80298804: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80298808: bne         $v0, $t6, L_80298834
    if (ctx->r2 != ctx->r14) {
        // 0x8029880C: sw          $ra, 0x14($sp)
        MEM_W(0X14, ctx->r29) = ctx->r31;
            goto L_80298834;
    }
    // 0x8029880C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80298810: lui         $t7, 0x802C
    ctx->r15 = S32(0X802C << 16);
    // 0x80298814: lbu         $t7, 0x39CA($t7)
    ctx->r15 = MEM_BU(ctx->r15, 0X39CA);
    // 0x80298818: nop

    // 0x8029881C: bne         $v0, $t7, L_80298840
    if (ctx->r2 != ctx->r15) {
        // 0x80298820: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_80298840;
    }
    // 0x80298820: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80298824: jal         0x802987CC
    // 0x80298828: nop

    func_802987CC(rdram, ctx);
        goto after_0;
    // 0x80298828: nop

    after_0:
    // 0x8029882C: b           L_80298840
    // 0x80298830: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80298840;
    // 0x80298830: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80298834:
    // 0x80298834: jal         0x802987CC
    // 0x80298838: nop

    func_802987CC(rdram, ctx);
        goto after_1;
    // 0x80298838: nop

    after_1:
    // 0x8029883C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80298840:
    // 0x80298840: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80298844: jr          $ra
    // 0x80298848: nop

    return;
    // 0x80298848: nop

;}
RECOMP_FUNC void func_8029884C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8029884C: lui         $t6, 0x8011
    ctx->r14 = S32(0X8011 << 16);
    // 0x80298850: lbu         $t6, -0x2FAF($t6)
    ctx->r14 = MEM_BU(ctx->r14, -0X2FAF);
    // 0x80298854: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80298858: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8029885C: bne         $t6, $at, L_80298888
    if (ctx->r14 != ctx->r1) {
        // 0x80298860: sw          $ra, 0x14($sp)
        MEM_W(0X14, ctx->r29) = ctx->r31;
            goto L_80298888;
    }
    // 0x80298860: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80298864: lui         $t7, 0x802C
    ctx->r15 = S32(0X802C << 16);
    // 0x80298868: lbu         $t7, 0x39CA($t7)
    ctx->r15 = MEM_BU(ctx->r15, 0X39CA);
    // 0x8029886C: nop

    // 0x80298870: bne         $t7, $zero, L_80298894
    if (ctx->r15 != 0) {
        // 0x80298874: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_80298894;
    }
    // 0x80298874: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80298878: jal         0x802987A0
    // 0x8029887C: nop

    func_802987A0(rdram, ctx);
        goto after_0;
    // 0x8029887C: nop

    after_0:
    // 0x80298880: b           L_80298894
    // 0x80298884: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80298894;
    // 0x80298884: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80298888:
    // 0x80298888: jal         0x802987A0
    // 0x8029888C: nop

    func_802987A0(rdram, ctx);
        goto after_1;
    // 0x8029888C: nop

    after_1:
    // 0x80298890: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80298894:
    // 0x80298894: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80298898: jr          $ra
    // 0x8029889C: nop

    return;
    // 0x8029889C: nop

;}
RECOMP_FUNC void func_802988A0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802988A0: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x802988A4: sh          $zero, 0x3930($at)
    MEM_H(0X3930, ctx->r1) = 0;
    // 0x802988A8: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x802988AC: sh          $zero, 0x392E($at)
    MEM_H(0X392E, ctx->r1) = 0;
    // 0x802988B0: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x802988B4: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x802988B8: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x802988BC: sh          $zero, 0x3932($at)
    MEM_H(0X3932, ctx->r1) = 0;
    // 0x802988C0: lui         $s1, 0x8012
    ctx->r17 = S32(0X8012 << 16);
    // 0x802988C4: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x802988C8: addiu       $s1, $s1, 0xB72
    ctx->r17 = ADD32(ctx->r17, 0XB72);
    // 0x802988CC: sh          $zero, 0x3934($at)
    MEM_H(0X3934, ctx->r1) = 0;
    // 0x802988D0: lhu         $v0, 0x0($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X0);
    // 0x802988D4: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x802988D8: sltiu       $at, $v0, 0x9
    ctx->r1 = ctx->r2 < 0X9 ? 1 : 0;
    // 0x802988DC: beq         $at, $zero, L_80298A04
    if (ctx->r1 == 0) {
        // 0x802988E0: sw          $s0, 0x14($sp)
        MEM_W(0X14, ctx->r29) = ctx->r16;
            goto L_80298A04;
    }
    // 0x802988E0: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x802988E4: sll         $t6, $v0, 2
    ctx->r14 = S32(ctx->r2 << 2);
    // 0x802988E8: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x802988EC: addu        $at, $at, $t6
    gpr jr_addend_802988F8 = ctx->r14;
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x802988F0: lw          $t6, 0x8DC($at)
    ctx->r14 = ADD32(ctx->r1, 0X8DC);
    // 0x802988F4: nop

    // 0x802988F8: jr          $t6
    // 0x802988FC: nop

    switch (jr_addend_802988F8 >> 2) {
        case 0: goto L_80298900; break;
        case 1: goto L_80298900; break;
        case 2: goto L_80298900; break;
        case 3: goto L_80298900; break;
        case 4: goto L_80298930; break;
        case 5: goto L_80298948; break;
        case 6: goto L_80298984; break;
        case 7: goto L_802989C8; break;
        case 8: goto L_80298930; break;
        default: switch_error(__func__, 0x802988F8, 0x802C08DC);
    }
    // 0x802988FC: nop

L_80298900:
    // 0x80298900: bltz        $v0, L_80298A04
    if (SIGNED(ctx->r2) < 0) {
        // 0x80298904: or          $s0, $zero, $zero
        ctx->r16 = 0 | 0;
            goto L_80298A04;
    }
    // 0x80298904: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
L_80298908:
    // 0x80298908: jal         0x80298A18
    // 0x8029890C: andi        $a0, $s0, 0xFF
    ctx->r4 = ctx->r16 & 0XFF;
    func_80298A18(rdram, ctx);
        goto after_0;
    // 0x8029890C: andi        $a0, $s0, 0xFF
    ctx->r4 = ctx->r16 & 0XFF;
    after_0:
    // 0x80298910: lhu         $t8, 0x0($s1)
    ctx->r24 = MEM_HU(ctx->r17, 0X0);
    // 0x80298914: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x80298918: andi        $t7, $s0, 0xFF
    ctx->r15 = ctx->r16 & 0XFF;
    // 0x8029891C: slt         $at, $t8, $t7
    ctx->r1 = SIGNED(ctx->r24) < SIGNED(ctx->r15) ? 1 : 0;
    // 0x80298920: beq         $at, $zero, L_80298908
    if (ctx->r1 == 0) {
        // 0x80298924: or          $s0, $t7, $zero
        ctx->r16 = ctx->r15 | 0;
            goto L_80298908;
    }
    // 0x80298924: or          $s0, $t7, $zero
    ctx->r16 = ctx->r15 | 0;
    // 0x80298928: b           L_80298A08
    // 0x8029892C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_80298A08;
    // 0x8029892C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_80298930:
    // 0x80298930: lui         $a0, 0x802C
    ctx->r4 = S32(0X802C << 16);
    // 0x80298934: lbu         $a0, 0x39CA($a0)
    ctx->r4 = MEM_BU(ctx->r4, 0X39CA);
    // 0x80298938: jal         0x80298A18
    // 0x8029893C: nop

    func_80298A18(rdram, ctx);
        goto after_1;
    // 0x8029893C: nop

    after_1:
    // 0x80298940: b           L_80298A08
    // 0x80298944: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_80298A08;
    // 0x80298944: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_80298948:
    // 0x80298948: lui         $t9, 0x802C
    ctx->r25 = S32(0X802C << 16);
    // 0x8029894C: lbu         $t9, 0x39CA($t9)
    ctx->r25 = MEM_BU(ctx->r25, 0X39CA);
    // 0x80298950: nop

    // 0x80298954: bne         $t9, $zero, L_80298974
    if (ctx->r25 != 0) {
        // 0x80298958: nop
    
            goto L_80298974;
    }
    // 0x80298958: nop

    // 0x8029895C: jal         0x80298A18
    // 0x80298960: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    func_80298A18(rdram, ctx);
        goto after_2;
    // 0x80298960: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_2:
    // 0x80298964: jal         0x80298A18
    // 0x80298968: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    func_80298A18(rdram, ctx);
        goto after_3;
    // 0x80298968: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    after_3:
    // 0x8029896C: b           L_80298A08
    // 0x80298970: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_80298A08;
    // 0x80298970: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_80298974:
    // 0x80298974: jal         0x80298A18
    // 0x80298978: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    func_80298A18(rdram, ctx);
        goto after_4;
    // 0x80298978: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_4:
    // 0x8029897C: b           L_80298A08
    // 0x80298980: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_80298A08;
    // 0x80298980: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_80298984:
    // 0x80298984: lui         $t0, 0x802C
    ctx->r8 = S32(0X802C << 16);
    // 0x80298988: lbu         $t0, 0x39CA($t0)
    ctx->r8 = MEM_BU(ctx->r8, 0X39CA);
    // 0x8029898C: nop

    // 0x80298990: bne         $t0, $zero, L_802989B0
    if (ctx->r8 != 0) {
        // 0x80298994: nop
    
            goto L_802989B0;
    }
    // 0x80298994: nop

    // 0x80298998: jal         0x80298A18
    // 0x8029899C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    func_80298A18(rdram, ctx);
        goto after_5;
    // 0x8029899C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_5:
    // 0x802989A0: jal         0x80298A18
    // 0x802989A4: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    func_80298A18(rdram, ctx);
        goto after_6;
    // 0x802989A4: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    after_6:
    // 0x802989A8: b           L_80298A08
    // 0x802989AC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_80298A08;
    // 0x802989AC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_802989B0:
    // 0x802989B0: jal         0x80298A18
    // 0x802989B4: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    func_80298A18(rdram, ctx);
        goto after_7;
    // 0x802989B4: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_7:
    // 0x802989B8: jal         0x80298A18
    // 0x802989BC: addiu       $a0, $zero, 0x3
    ctx->r4 = ADD32(0, 0X3);
    func_80298A18(rdram, ctx);
        goto after_8;
    // 0x802989BC: addiu       $a0, $zero, 0x3
    ctx->r4 = ADD32(0, 0X3);
    after_8:
    // 0x802989C0: b           L_80298A08
    // 0x802989C4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_80298A08;
    // 0x802989C4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_802989C8:
    // 0x802989C8: lui         $t1, 0x802C
    ctx->r9 = S32(0X802C << 16);
    // 0x802989CC: lbu         $t1, 0x39CA($t1)
    ctx->r9 = MEM_BU(ctx->r9, 0X39CA);
    // 0x802989D0: nop

    // 0x802989D4: bne         $t1, $zero, L_802989FC
    if (ctx->r9 != 0) {
        // 0x802989D8: nop
    
            goto L_802989FC;
    }
    // 0x802989D8: nop

    // 0x802989DC: jal         0x80298A18
    // 0x802989E0: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    func_80298A18(rdram, ctx);
        goto after_9;
    // 0x802989E0: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_9:
    // 0x802989E4: jal         0x80298A18
    // 0x802989E8: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    func_80298A18(rdram, ctx);
        goto after_10;
    // 0x802989E8: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    after_10:
    // 0x802989EC: jal         0x80298A18
    // 0x802989F0: addiu       $a0, $zero, 0x3
    ctx->r4 = ADD32(0, 0X3);
    func_80298A18(rdram, ctx);
        goto after_11;
    // 0x802989F0: addiu       $a0, $zero, 0x3
    ctx->r4 = ADD32(0, 0X3);
    after_11:
    // 0x802989F4: b           L_80298A08
    // 0x802989F8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_80298A08;
    // 0x802989F8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_802989FC:
    // 0x802989FC: jal         0x80298A18
    // 0x80298A00: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    func_80298A18(rdram, ctx);
        goto after_12;
    // 0x80298A00: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_12:
L_80298A04:
    // 0x80298A04: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_80298A08:
    // 0x80298A08: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x80298A0C: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x80298A10: jr          $ra
    // 0x80298A14: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x80298A14: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_80298A18(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80298A18: andi        $t6, $a0, 0xFF
    ctx->r14 = ctx->r4 & 0XFF;
    // 0x80298A1C: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80298A20: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80298A24: lui         $at, 0x2
    ctx->r1 = S32(0X2 << 16);
    // 0x80298A28: ori         $at, $at, 0x8000
    ctx->r1 = ctx->r1 | 0X8000;
    // 0x80298A2C: sll         $t7, $t7, 1
    ctx->r15 = S32(ctx->r15 << 1);
    // 0x80298A30: lui         $t9, 0x800E
    ctx->r25 = S32(0X800E << 16);
    // 0x80298A34: addiu       $t9, $t9, -0x3770
    ctx->r25 = ADD32(ctx->r25, -0X3770);
    // 0x80298A38: addu        $t8, $t7, $at
    ctx->r24 = ADD32(ctx->r15, ctx->r1);
    // 0x80298A3C: lui         $v1, 0x802C
    ctx->r3 = S32(0X802C << 16);
    // 0x80298A40: addu        $v0, $t8, $t9
    ctx->r2 = ADD32(ctx->r24, ctx->r25);
    // 0x80298A44: addiu       $v1, $v1, 0x3930
    ctx->r3 = ADD32(ctx->r3, 0X3930);
    // 0x80298A48: lh          $t0, 0x0($v1)
    ctx->r8 = MEM_H(ctx->r3, 0X0);
    // 0x80298A4C: lh          $t1, 0x9B0($v0)
    ctx->r9 = MEM_H(ctx->r2, 0X9B0);
    // 0x80298A50: lui         $a1, 0x802C
    ctx->r5 = S32(0X802C << 16);
    // 0x80298A54: lui         $a2, 0x802C
    ctx->r6 = S32(0X802C << 16);
    // 0x80298A58: lui         $a3, 0x802C
    ctx->r7 = S32(0X802C << 16);
    // 0x80298A5C: addiu       $a3, $a3, 0x3934
    ctx->r7 = ADD32(ctx->r7, 0X3934);
    // 0x80298A60: addiu       $a2, $a2, 0x3932
    ctx->r6 = ADD32(ctx->r6, 0X3932);
    // 0x80298A64: addiu       $a1, $a1, 0x392E
    ctx->r5 = ADD32(ctx->r5, 0X392E);
    // 0x80298A68: addu        $t2, $t0, $t1
    ctx->r10 = ADD32(ctx->r8, ctx->r9);
    // 0x80298A6C: lh          $t3, 0x0($a1)
    ctx->r11 = MEM_H(ctx->r5, 0X0);
    // 0x80298A70: lh          $t4, 0x9AE($v0)
    ctx->r12 = MEM_H(ctx->r2, 0X9AE);
    // 0x80298A74: lhu         $t6, 0x0($a2)
    ctx->r14 = MEM_HU(ctx->r6, 0X0);
    // 0x80298A78: lhu         $t7, 0x9AA($v0)
    ctx->r15 = MEM_HU(ctx->r2, 0X9AA);
    // 0x80298A7C: lhu         $t0, 0x9AC($v0)
    ctx->r8 = MEM_HU(ctx->r2, 0X9AC);
    // 0x80298A80: lhu         $t9, 0x0($a3)
    ctx->r25 = MEM_HU(ctx->r7, 0X0);
    // 0x80298A84: addu        $t5, $t3, $t4
    ctx->r13 = ADD32(ctx->r11, ctx->r12);
    // 0x80298A88: or          $t8, $t6, $t7
    ctx->r24 = ctx->r14 | ctx->r15;
    // 0x80298A8C: or          $t1, $t9, $t0
    ctx->r9 = ctx->r25 | ctx->r8;
    // 0x80298A90: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x80298A94: sh          $t2, 0x0($v1)
    MEM_H(0X0, ctx->r3) = ctx->r10;
    // 0x80298A98: sh          $t5, 0x0($a1)
    MEM_H(0X0, ctx->r5) = ctx->r13;
    // 0x80298A9C: sh          $t8, 0x0($a2)
    MEM_H(0X0, ctx->r6) = ctx->r24;
    // 0x80298AA0: jr          $ra
    // 0x80298AA4: sh          $t1, 0x0($a3)
    MEM_H(0X0, ctx->r7) = ctx->r9;
    return;
    // 0x80298AA4: sh          $t1, 0x0($a3)
    MEM_H(0X0, ctx->r7) = ctx->r9;
    // 0x80298AA8: nop

    // 0x80298AAC: nop

;}
RECOMP_FUNC void func_80298AB0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80298AB0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80298AB4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80298AB8: jal         0x80020270
    // 0x80298ABC: nop

    func_80020270(rdram, ctx);
        goto after_0;
    // 0x80298ABC: nop

    after_0:
    // 0x80298AC0: jal         0x8000E300
    // 0x80298AC4: nop

    func_8000E300(rdram, ctx);
        goto after_1;
    // 0x80298AC4: nop

    after_1:
    // 0x80298AC8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80298ACC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80298AD0: jr          $ra
    // 0x80298AD4: nop

    return;
    // 0x80298AD4: nop

;}
RECOMP_FUNC void func_80298AD8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80298AD8: addiu       $sp, $sp, -0x50
    ctx->r29 = ADD32(ctx->r29, -0X50);
    // 0x80298ADC: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80298AE0: jal         0x8002F2AC
    // 0x80298AE4: nop

    func_8002F2AC(rdram, ctx);
        goto after_0;
    // 0x80298AE4: nop

    after_0:
    // 0x80298AE8: lui         $t6, 0x8012
    ctx->r14 = S32(0X8012 << 16);
    // 0x80298AEC: lhu         $t6, 0xB78($t6)
    ctx->r14 = MEM_HU(ctx->r14, 0XB78);
    // 0x80298AF0: addiu       $at, $zero, 0x9
    ctx->r1 = ADD32(0, 0X9);
    // 0x80298AF4: bne         $t6, $at, L_80298C1C
    if (ctx->r14 != ctx->r1) {
        // 0x80298AF8: lui         $t3, 0x8012
        ctx->r11 = S32(0X8012 << 16);
            goto L_80298C1C;
    }
    // 0x80298AF8: lui         $t3, 0x8012
    ctx->r11 = S32(0X8012 << 16);
    // 0x80298AFC: addiu       $t3, $t3, 0xB24
    ctx->r11 = ADD32(ctx->r11, 0XB24);
    // 0x80298B00: lw          $v0, 0x0($t3)
    ctx->r2 = MEM_W(ctx->r11, 0X0);
    // 0x80298B04: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x80298B08: addiu       $a0, $a0, -0x2CF0
    ctx->r4 = ADD32(ctx->r4, -0X2CF0);
    // 0x80298B0C: lhu         $t7, 0xA9E($a0)
    ctx->r15 = MEM_HU(ctx->r4, 0XA9E);
    // 0x80298B10: lhu         $t8, 0xA($a0)
    ctx->r24 = MEM_HU(ctx->r4, 0XA);
    // 0x80298B14: lw          $v1, 0xC8($v0)
    ctx->r3 = MEM_W(ctx->r2, 0XC8);
    // 0x80298B18: lhu         $t4, 0x1A($v0)
    ctx->r12 = MEM_HU(ctx->r2, 0X1A);
    // 0x80298B1C: addu        $a2, $t7, $t8
    ctx->r6 = ADD32(ctx->r15, ctx->r24);
    // 0x80298B20: addu        $t5, $v1, $t4
    ctx->r13 = ADD32(ctx->r3, ctx->r12);
    // 0x80298B24: andi        $t9, $a2, 0xFF
    ctx->r25 = ctx->r6 & 0XFF;
    // 0x80298B28: lbu         $t1, 0x308($t5)
    ctx->r9 = MEM_BU(ctx->r13, 0X308);
    // 0x80298B2C: or          $a2, $t9, $zero
    ctx->r6 = ctx->r25 | 0;
    // 0x80298B30: bne         $a0, $v1, L_80298B40
    if (ctx->r4 != ctx->r3) {
        // 0x80298B34: or          $a1, $zero, $zero
        ctx->r5 = 0 | 0;
            goto L_80298B40;
    }
    // 0x80298B34: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80298B38: b           L_80298B44
    // 0x80298B3C: or          $t2, $zero, $zero
    ctx->r10 = 0 | 0;
        goto L_80298B44;
    // 0x80298B3C: or          $t2, $zero, $zero
    ctx->r10 = 0 | 0;
L_80298B40:
    // 0x80298B40: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
L_80298B44:
    // 0x80298B44: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x80298B48: blez        $a2, L_80298BB0
    if (SIGNED(ctx->r6) <= 0) {
        // 0x80298B4C: or          $t0, $a2, $zero
        ctx->r8 = ctx->r6 | 0;
            goto L_80298BB0;
    }
    // 0x80298B4C: or          $t0, $a2, $zero
    ctx->r8 = ctx->r6 | 0;
    // 0x80298B50: lui         $a3, 0x8012
    ctx->r7 = S32(0X8012 << 16);
    // 0x80298B54: addiu       $a3, $a3, 0xB88
    ctx->r7 = ADD32(ctx->r7, 0XB88);
    // 0x80298B58: or          $a2, $t2, $zero
    ctx->r6 = ctx->r10 | 0;
L_80298B5C:
    // 0x80298B5C: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x80298B60: addu        $v1, $a3, $t6
    ctx->r3 = ADD32(ctx->r7, ctx->r14);
    // 0x80298B64: lbu         $v0, 0x0($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X0);
    // 0x80298B68: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    // 0x80298B6C: andi        $t7, $v0, 0xF
    ctx->r15 = ctx->r2 & 0XF;
    // 0x80298B70: bne         $a2, $t7, L_80298BA0
    if (ctx->r6 != ctx->r15) {
        // 0x80298B74: andi        $t5, $a0, 0xFF
        ctx->r13 = ctx->r4 & 0XFF;
            goto L_80298BA0;
    }
    // 0x80298B74: andi        $t5, $a0, 0xFF
    ctx->r13 = ctx->r4 & 0XFF;
    // 0x80298B78: andi        $t8, $v0, 0x10
    ctx->r24 = ctx->r2 & 0X10;
    // 0x80298B7C: bne         $t8, $zero, L_80298BA4
    if (ctx->r24 != 0) {
        // 0x80298B80: slt         $at, $t5, $t0
        ctx->r1 = SIGNED(ctx->r13) < SIGNED(ctx->r8) ? 1 : 0;
            goto L_80298BA4;
    }
    // 0x80298B80: slt         $at, $t5, $t0
    ctx->r1 = SIGNED(ctx->r13) < SIGNED(ctx->r8) ? 1 : 0;
    // 0x80298B84: lbu         $t9, 0x1($v1)
    ctx->r25 = MEM_BU(ctx->r3, 0X1);
    // 0x80298B88: nop

    // 0x80298B8C: bne         $t1, $t9, L_80298BA4
    if (ctx->r9 != ctx->r25) {
        // 0x80298B90: slt         $at, $t5, $t0
        ctx->r1 = SIGNED(ctx->r13) < SIGNED(ctx->r8) ? 1 : 0;
            goto L_80298BA4;
    }
    // 0x80298B90: slt         $at, $t5, $t0
    ctx->r1 = SIGNED(ctx->r13) < SIGNED(ctx->r8) ? 1 : 0;
    // 0x80298B94: addiu       $a1, $a1, 0x1
    ctx->r5 = ADD32(ctx->r5, 0X1);
    // 0x80298B98: andi        $t4, $a1, 0xFF
    ctx->r12 = ctx->r5 & 0XFF;
    // 0x80298B9C: or          $a1, $t4, $zero
    ctx->r5 = ctx->r12 | 0;
L_80298BA0:
    // 0x80298BA0: slt         $at, $t5, $t0
    ctx->r1 = SIGNED(ctx->r13) < SIGNED(ctx->r8) ? 1 : 0;
L_80298BA4:
    // 0x80298BA4: bne         $at, $zero, L_80298B5C
    if (ctx->r1 != 0) {
        // 0x80298BA8: or          $a0, $t5, $zero
        ctx->r4 = ctx->r13 | 0;
            goto L_80298B5C;
    }
    // 0x80298BA8: or          $a0, $t5, $zero
    ctx->r4 = ctx->r13 | 0;
    // 0x80298BAC: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
L_80298BB0:
    // 0x80298BB0: lui         $a3, 0x8012
    ctx->r7 = S32(0X8012 << 16);
    // 0x80298BB4: sb          $a1, 0x45($sp)
    MEM_B(0X45, ctx->r29) = ctx->r5;
    // 0x80298BB8: addiu       $a3, $a3, 0xB88
    ctx->r7 = ADD32(ctx->r7, 0XB88);
    // 0x80298BBC: blez        $t0, L_80298C18
    if (SIGNED(ctx->r8) <= 0) {
        // 0x80298BC0: or          $a1, $zero, $zero
        ctx->r5 = 0 | 0;
            goto L_80298C18;
    }
    // 0x80298BC0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80298BC4: or          $a2, $t2, $zero
    ctx->r6 = ctx->r10 | 0;
L_80298BC8:
    // 0x80298BC8: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x80298BCC: addu        $v1, $a3, $t6
    ctx->r3 = ADD32(ctx->r7, ctx->r14);
    // 0x80298BD0: lbu         $v0, 0x0($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X0);
    // 0x80298BD4: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    // 0x80298BD8: andi        $t7, $v0, 0xF
    ctx->r15 = ctx->r2 & 0XF;
    // 0x80298BDC: bne         $a2, $t7, L_80298C0C
    if (ctx->r6 != ctx->r15) {
        // 0x80298BE0: andi        $t5, $a0, 0xFF
        ctx->r13 = ctx->r4 & 0XFF;
            goto L_80298C0C;
    }
    // 0x80298BE0: andi        $t5, $a0, 0xFF
    ctx->r13 = ctx->r4 & 0XFF;
    // 0x80298BE4: andi        $t8, $v0, 0x10
    ctx->r24 = ctx->r2 & 0X10;
    // 0x80298BE8: beq         $t8, $zero, L_80298C10
    if (ctx->r24 == 0) {
        // 0x80298BEC: slt         $at, $t5, $t0
        ctx->r1 = SIGNED(ctx->r13) < SIGNED(ctx->r8) ? 1 : 0;
            goto L_80298C10;
    }
    // 0x80298BEC: slt         $at, $t5, $t0
    ctx->r1 = SIGNED(ctx->r13) < SIGNED(ctx->r8) ? 1 : 0;
    // 0x80298BF0: lbu         $t9, 0x1($v1)
    ctx->r25 = MEM_BU(ctx->r3, 0X1);
    // 0x80298BF4: nop

    // 0x80298BF8: bne         $t1, $t9, L_80298C10
    if (ctx->r9 != ctx->r25) {
        // 0x80298BFC: slt         $at, $t5, $t0
        ctx->r1 = SIGNED(ctx->r13) < SIGNED(ctx->r8) ? 1 : 0;
            goto L_80298C10;
    }
    // 0x80298BFC: slt         $at, $t5, $t0
    ctx->r1 = SIGNED(ctx->r13) < SIGNED(ctx->r8) ? 1 : 0;
    // 0x80298C00: addiu       $a1, $a1, 0x1
    ctx->r5 = ADD32(ctx->r5, 0X1);
    // 0x80298C04: andi        $t4, $a1, 0xFF
    ctx->r12 = ctx->r5 & 0XFF;
    // 0x80298C08: or          $a1, $t4, $zero
    ctx->r5 = ctx->r12 | 0;
L_80298C0C:
    // 0x80298C0C: slt         $at, $t5, $t0
    ctx->r1 = SIGNED(ctx->r13) < SIGNED(ctx->r8) ? 1 : 0;
L_80298C10:
    // 0x80298C10: bne         $at, $zero, L_80298BC8
    if (ctx->r1 != 0) {
        // 0x80298C14: or          $a0, $t5, $zero
        ctx->r4 = ctx->r13 | 0;
            goto L_80298BC8;
    }
    // 0x80298C14: or          $a0, $t5, $zero
    ctx->r4 = ctx->r13 | 0;
L_80298C18:
    // 0x80298C18: sb          $a1, 0x44($sp)
    MEM_B(0X44, ctx->r29) = ctx->r5;
L_80298C1C:
    // 0x80298C1C: lui         $v0, 0x802C
    ctx->r2 = S32(0X802C << 16);
    // 0x80298C20: lbu         $v0, 0x38DF($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X38DF);
    // 0x80298C24: lui         $v1, 0x8012
    ctx->r3 = S32(0X8012 << 16);
    // 0x80298C28: lbu         $v1, 0xB65($v1)
    ctx->r3 = MEM_BU(ctx->r3, 0XB65);
    // 0x80298C2C: addiu       $a3, $zero, 0x2
    ctx->r7 = ADD32(0, 0X2);
    // 0x80298C30: lui         $t6, 0x8012
    ctx->r14 = S32(0X8012 << 16);
    // 0x80298C34: lhu         $t6, 0xB74($t6)
    ctx->r14 = MEM_HU(ctx->r14, 0XB74);
    // 0x80298C38: xor         $t8, $a3, $v0
    ctx->r24 = ctx->r7 ^ ctx->r2;
    // 0x80298C3C: sltiu       $t8, $t8, 0x1
    ctx->r24 = ctx->r24 < 0X1 ? 1 : 0;
    // 0x80298C40: sltiu       $t9, $v1, 0x1
    ctx->r25 = ctx->r3 < 0X1 ? 1 : 0;
    // 0x80298C44: lui         $t3, 0x8012
    ctx->r11 = S32(0X8012 << 16);
    // 0x80298C48: and         $t4, $t8, $t9
    ctx->r12 = ctx->r24 & ctx->r25;
    // 0x80298C4C: andi        $t7, $t6, 0x1
    ctx->r15 = ctx->r14 & 0X1;
    // 0x80298C50: addiu       $t3, $t3, 0xB24
    ctx->r11 = ADD32(ctx->r11, 0XB24);
    // 0x80298C54: beq         $t4, $zero, L_802992F0
    if (ctx->r12 == 0) {
        // 0x80298C58: sb          $t7, 0x46($sp)
        MEM_B(0X46, ctx->r29) = ctx->r15;
            goto L_802992F0;
    }
    // 0x80298C58: sb          $t7, 0x46($sp)
    MEM_B(0X46, ctx->r29) = ctx->r15;
    // 0x80298C5C: lui         $t6, 0x802C
    ctx->r14 = S32(0X802C << 16);
    // 0x80298C60: lw          $t5, 0x0($t3)
    ctx->r13 = MEM_W(ctx->r11, 0X0);
    // 0x80298C64: lhu         $t6, 0x39CE($t6)
    ctx->r14 = MEM_HU(ctx->r14, 0X39CE);
    // 0x80298C68: sh          $zero, 0x40($sp)
    MEM_H(0X40, ctx->r29) = 0;
    // 0x80298C6C: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    // 0x80298C70: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80298C74: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x80298C78: sw          $t5, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r13;
    // 0x80298C7C: jal         0x8029ACD4
    // 0x80298C80: sh          $t6, 0x48($sp)
    MEM_H(0X48, ctx->r29) = ctx->r14;
    func_8029ACD4(rdram, ctx);
        goto after_1;
    // 0x80298C80: sh          $t6, 0x48($sp)
    MEM_H(0X48, ctx->r29) = ctx->r14;
    after_1:
    // 0x80298C84: lui         $a0, 0x8010
    ctx->r4 = S32(0X8010 << 16);
    // 0x80298C88: addiu       $a0, $a0, 0x6A4C
    ctx->r4 = ADD32(ctx->r4, 0X6A4C);
    // 0x80298C8C: jal         0x8007AAF8
    // 0x80298C90: addiu       $a1, $zero, 0xA7
    ctx->r5 = ADD32(0, 0XA7);
    func_8007AAF8(rdram, ctx);
        goto after_2;
    // 0x80298C90: addiu       $a1, $zero, 0xA7
    ctx->r5 = ADD32(0, 0XA7);
    after_2:
    // 0x80298C94: lui         $a0, 0x8010
    ctx->r4 = S32(0X8010 << 16);
    // 0x80298C98: addiu       $a0, $a0, 0x6A4C
    ctx->r4 = ADD32(ctx->r4, 0X6A4C);
    // 0x80298C9C: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    // 0x80298CA0: jal         0x8002135C
    // 0x80298CA4: addiu       $a2, $zero, 0xE
    ctx->r6 = ADD32(0, 0XE);
    func_8002135C(rdram, ctx);
        goto after_3;
    // 0x80298CA4: addiu       $a2, $zero, 0xE
    ctx->r6 = ADD32(0, 0XE);
    after_3:
    // 0x80298CA8: lui         $a0, 0x8010
    ctx->r4 = S32(0X8010 << 16);
    // 0x80298CAC: addiu       $a0, $a0, 0x6D1C
    ctx->r4 = ADD32(ctx->r4, 0X6D1C);
    // 0x80298CB0: jal         0x8007AAF8
    // 0x80298CB4: addiu       $a1, $zero, 0xAD
    ctx->r5 = ADD32(0, 0XAD);
    func_8007AAF8(rdram, ctx);
        goto after_4;
    // 0x80298CB4: addiu       $a1, $zero, 0xAD
    ctx->r5 = ADD32(0, 0XAD);
    after_4:
    // 0x80298CB8: addiu       $a0, $zero, 0xE
    ctx->r4 = ADD32(0, 0XE);
    // 0x80298CBC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80298CC0: jal         0x8029ACD4
    // 0x80298CC4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8029ACD4(rdram, ctx);
        goto after_5;
    // 0x80298CC4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_5:
    // 0x80298CC8: lui         $a0, 0x8010
    ctx->r4 = S32(0X8010 << 16);
    // 0x80298CCC: addiu       $a0, $a0, 0x6D1C
    ctx->r4 = ADD32(ctx->r4, 0X6D1C);
    // 0x80298CD0: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    // 0x80298CD4: jal         0x8002135C
    // 0x80298CD8: addiu       $a2, $zero, 0xF
    ctx->r6 = ADD32(0, 0XF);
    func_8002135C(rdram, ctx);
        goto after_6;
    // 0x80298CD8: addiu       $a2, $zero, 0xF
    ctx->r6 = ADD32(0, 0XF);
    after_6:
    // 0x80298CDC: lui         $a0, 0x8010
    ctx->r4 = S32(0X8010 << 16);
    // 0x80298CE0: addiu       $a0, $a0, 0x6D58
    ctx->r4 = ADD32(ctx->r4, 0X6D58);
    // 0x80298CE4: jal         0x8007AAF8
    // 0x80298CE8: addiu       $a1, $zero, 0xAE
    ctx->r5 = ADD32(0, 0XAE);
    func_8007AAF8(rdram, ctx);
        goto after_7;
    // 0x80298CE8: addiu       $a1, $zero, 0xAE
    ctx->r5 = ADD32(0, 0XAE);
    after_7:
    // 0x80298CEC: addiu       $a0, $zero, 0xF
    ctx->r4 = ADD32(0, 0XF);
    // 0x80298CF0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80298CF4: jal         0x8029ACD4
    // 0x80298CF8: addiu       $a2, $zero, 0x18
    ctx->r6 = ADD32(0, 0X18);
    func_8029ACD4(rdram, ctx);
        goto after_8;
    // 0x80298CF8: addiu       $a2, $zero, 0x18
    ctx->r6 = ADD32(0, 0X18);
    after_8:
    // 0x80298CFC: lui         $a0, 0x8010
    ctx->r4 = S32(0X8010 << 16);
    // 0x80298D00: addiu       $a0, $a0, 0x6D58
    ctx->r4 = ADD32(ctx->r4, 0X6D58);
    // 0x80298D04: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    // 0x80298D08: jal         0x8002135C
    // 0x80298D0C: addiu       $a2, $zero, 0xF
    ctx->r6 = ADD32(0, 0XF);
    func_8002135C(rdram, ctx);
        goto after_9;
    // 0x80298D0C: addiu       $a2, $zero, 0xF
    ctx->r6 = ADD32(0, 0XF);
    after_9:
    // 0x80298D10: lui         $a0, 0x8010
    ctx->r4 = S32(0X8010 << 16);
    // 0x80298D14: addiu       $a0, $a0, 0x6D94
    ctx->r4 = ADD32(ctx->r4, 0X6D94);
    // 0x80298D18: jal         0x8007AAF8
    // 0x80298D1C: addiu       $a1, $zero, 0xAF
    ctx->r5 = ADD32(0, 0XAF);
    func_8007AAF8(rdram, ctx);
        goto after_10;
    // 0x80298D1C: addiu       $a1, $zero, 0xAF
    ctx->r5 = ADD32(0, 0XAF);
    after_10:
    // 0x80298D20: addiu       $a0, $zero, 0x10
    ctx->r4 = ADD32(0, 0X10);
    // 0x80298D24: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80298D28: jal         0x8029ACD4
    // 0x80298D2C: addiu       $a2, $zero, 0x30
    ctx->r6 = ADD32(0, 0X30);
    func_8029ACD4(rdram, ctx);
        goto after_11;
    // 0x80298D2C: addiu       $a2, $zero, 0x30
    ctx->r6 = ADD32(0, 0X30);
    after_11:
    // 0x80298D30: lui         $a0, 0x8010
    ctx->r4 = S32(0X8010 << 16);
    // 0x80298D34: addiu       $a0, $a0, 0x6D94
    ctx->r4 = ADD32(ctx->r4, 0X6D94);
    // 0x80298D38: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    // 0x80298D3C: jal         0x8002135C
    // 0x80298D40: addiu       $a2, $zero, 0xF
    ctx->r6 = ADD32(0, 0XF);
    func_8002135C(rdram, ctx);
        goto after_12;
    // 0x80298D40: addiu       $a2, $zero, 0xF
    ctx->r6 = ADD32(0, 0XF);
    after_12:
    // 0x80298D44: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x80298D48: lbu         $v0, -0x32A4($v0)
    ctx->r2 = MEM_BU(ctx->r2, -0X32A4);
    // 0x80298D4C: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x80298D50: beq         $v0, $at, L_80298D60
    if (ctx->r2 == ctx->r1) {
        // 0x80298D54: addiu       $a0, $zero, 0x4
        ctx->r4 = ADD32(0, 0X4);
            goto L_80298D60;
    }
    // 0x80298D54: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
    // 0x80298D58: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x80298D5C: bne         $v0, $at, L_80299000
    if (ctx->r2 != ctx->r1) {
        // 0x80298D60: or          $a1, $zero, $zero
        ctx->r5 = 0 | 0;
            goto L_80299000;
    }
L_80298D60:
    // 0x80298D60: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80298D64: jal         0x8029ACD4
    // 0x80298D68: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8029ACD4(rdram, ctx);
        goto after_13;
    // 0x80298D68: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_13:
    // 0x80298D6C: lui         $a0, 0x8010
    ctx->r4 = S32(0X8010 << 16);
    // 0x80298D70: addiu       $a0, $a0, 0x6AC4
    ctx->r4 = ADD32(ctx->r4, 0X6AC4);
    // 0x80298D74: jal         0x8007AAF8
    // 0x80298D78: addiu       $a1, $zero, 0xA9
    ctx->r5 = ADD32(0, 0XA9);
    func_8007AAF8(rdram, ctx);
        goto after_14;
    // 0x80298D78: addiu       $a1, $zero, 0xA9
    ctx->r5 = ADD32(0, 0XA9);
    after_14:
    // 0x80298D7C: lui         $a0, 0x8010
    ctx->r4 = S32(0X8010 << 16);
    // 0x80298D80: addiu       $a0, $a0, 0x6AC4
    ctx->r4 = ADD32(ctx->r4, 0X6AC4);
    // 0x80298D84: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    // 0x80298D88: jal         0x8002135C
    // 0x80298D8C: addiu       $a2, $zero, 0xE
    ctx->r6 = ADD32(0, 0XE);
    func_8002135C(rdram, ctx);
        goto after_15;
    // 0x80298D8C: addiu       $a2, $zero, 0xE
    ctx->r6 = ADD32(0, 0XE);
    after_15:
    // 0x80298D90: lui         $a0, 0x8010
    ctx->r4 = S32(0X8010 << 16);
    // 0x80298D94: addiu       $a0, $a0, 0x6CE0
    ctx->r4 = ADD32(ctx->r4, 0X6CE0);
    // 0x80298D98: jal         0x8007AAF8
    // 0x80298D9C: addiu       $a1, $zero, 0xAC
    ctx->r5 = ADD32(0, 0XAC);
    func_8007AAF8(rdram, ctx);
        goto after_16;
    // 0x80298D9C: addiu       $a1, $zero, 0xAC
    ctx->r5 = ADD32(0, 0XAC);
    after_16:
    // 0x80298DA0: addiu       $a0, $zero, 0xD
    ctx->r4 = ADD32(0, 0XD);
    // 0x80298DA4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80298DA8: jal         0x8029ACD4
    // 0x80298DAC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8029ACD4(rdram, ctx);
        goto after_17;
    // 0x80298DAC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_17:
    // 0x80298DB0: lui         $a0, 0x8010
    ctx->r4 = S32(0X8010 << 16);
    // 0x80298DB4: addiu       $a0, $a0, 0x6CE0
    ctx->r4 = ADD32(ctx->r4, 0X6CE0);
    // 0x80298DB8: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    // 0x80298DBC: jal         0x8002135C
    // 0x80298DC0: addiu       $a2, $zero, 0xF
    ctx->r6 = ADD32(0, 0XF);
    func_8002135C(rdram, ctx);
        goto after_18;
    // 0x80298DC0: addiu       $a2, $zero, 0xF
    ctx->r6 = ADD32(0, 0XF);
    after_18:
    // 0x80298DC4: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x80298DC8: lw          $v0, 0xB24($v0)
    ctx->r2 = MEM_W(ctx->r2, 0XB24);
    // 0x80298DCC: nop

    // 0x80298DD0: lw          $t7, 0xC8($v0)
    ctx->r15 = MEM_W(ctx->r2, 0XC8);
    // 0x80298DD4: lb          $a1, 0x1B($v0)
    ctx->r5 = MEM_B(ctx->r2, 0X1B);
    // 0x80298DD8: lb          $a0, 0x7($t7)
    ctx->r4 = MEM_B(ctx->r15, 0X7);
    // 0x80298DDC: jal         0x80049388
    // 0x80298DE0: nop

    func_80049388(rdram, ctx);
        goto after_19;
    // 0x80298DE0: nop

    after_19:
    // 0x80298DE4: andi        $t8, $v0, 0xFFFF
    ctx->r24 = ctx->r2 & 0XFFFF;
    // 0x80298DE8: slti        $at, $t8, 0x3E9
    ctx->r1 = SIGNED(ctx->r24) < 0X3E9 ? 1 : 0;
    // 0x80298DEC: bne         $at, $zero, L_80298DF8
    if (ctx->r1 != 0) {
        // 0x80298DF0: andi        $a0, $v0, 0xFFFF
        ctx->r4 = ctx->r2 & 0XFFFF;
            goto L_80298DF8;
    }
    // 0x80298DF0: andi        $a0, $v0, 0xFFFF
    ctx->r4 = ctx->r2 & 0XFFFF;
    // 0x80298DF4: addiu       $a0, $zero, 0x3E7
    ctx->r4 = ADD32(0, 0X3E7);
L_80298DF8:
    // 0x80298DF8: slti        $at, $a0, 0xA
    ctx->r1 = SIGNED(ctx->r4) < 0XA ? 1 : 0;
    // 0x80298DFC: beq         $at, $zero, L_80298E58
    if (ctx->r1 == 0) {
        // 0x80298E00: or          $v0, $a0, $zero
        ctx->r2 = ctx->r4 | 0;
            goto L_80298E58;
    }
    // 0x80298E00: or          $v0, $a0, $zero
    ctx->r2 = ctx->r4 | 0;
    // 0x80298E04: lui         $v1, 0x8010
    ctx->r3 = S32(0X8010 << 16);
    // 0x80298E08: addiu       $a1, $v0, 0xDA
    ctx->r5 = ADD32(ctx->r2, 0XDA);
    // 0x80298E0C: addiu       $v1, $v1, 0x4890
    ctx->r3 = ADD32(ctx->r3, 0X4890);
    // 0x80298E10: andi        $t9, $a1, 0xFFFF
    ctx->r25 = ctx->r5 & 0XFFFF;
    // 0x80298E14: lui         $a0, 0x8010
    ctx->r4 = S32(0X8010 << 16);
    // 0x80298E18: sb          $zero, 0x2544($v1)
    MEM_B(0X2544, ctx->r3) = 0;
    // 0x80298E1C: sb          $zero, 0x2760($v1)
    MEM_B(0X2760, ctx->r3) = 0;
    // 0x80298E20: addiu       $a0, $a0, 0x6E0C
    ctx->r4 = ADD32(ctx->r4, 0X6E0C);
    // 0x80298E24: jal         0x8007AAF8
    // 0x80298E28: or          $a1, $t9, $zero
    ctx->r5 = ctx->r25 | 0;
    func_8007AAF8(rdram, ctx);
        goto after_20;
    // 0x80298E28: or          $a1, $t9, $zero
    ctx->r5 = ctx->r25 | 0;
    after_20:
    // 0x80298E2C: addiu       $a0, $zero, 0x12
    ctx->r4 = ADD32(0, 0X12);
    // 0x80298E30: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80298E34: jal         0x8029ACD4
    // 0x80298E38: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8029ACD4(rdram, ctx);
        goto after_21;
    // 0x80298E38: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_21:
    // 0x80298E3C: lui         $a0, 0x8010
    ctx->r4 = S32(0X8010 << 16);
    // 0x80298E40: addiu       $a0, $a0, 0x6E0C
    ctx->r4 = ADD32(ctx->r4, 0X6E0C);
    // 0x80298E44: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    // 0x80298E48: jal         0x8002135C
    // 0x80298E4C: addiu       $a2, $zero, 0xF
    ctx->r6 = ADD32(0, 0XF);
    func_8002135C(rdram, ctx);
        goto after_22;
    // 0x80298E4C: addiu       $a2, $zero, 0xF
    ctx->r6 = ADD32(0, 0XF);
    after_22:
    // 0x80298E50: b           L_80299004
    // 0x80298E54: lbu         $v0, 0x45($sp)
    ctx->r2 = MEM_BU(ctx->r29, 0X45);
        goto L_80299004;
    // 0x80298E54: lbu         $v0, 0x45($sp)
    ctx->r2 = MEM_BU(ctx->r29, 0X45);
L_80298E58:
    // 0x80298E58: slti        $at, $v0, 0x64
    ctx->r1 = SIGNED(ctx->r2) < 0X64 ? 1 : 0;
    // 0x80298E5C: beq         $at, $zero, L_80298F08
    if (ctx->r1 == 0) {
        // 0x80298E60: lui         $at, 0x8010
        ctx->r1 = S32(0X8010 << 16);
            goto L_80298F08;
    }
    // 0x80298E60: lui         $at, 0x8010
    ctx->r1 = S32(0X8010 << 16);
    // 0x80298E64: sb          $zero, 0x6FF0($at)
    MEM_B(0X6FF0, ctx->r1) = 0;
    // 0x80298E68: addiu       $at, $zero, 0xA
    ctx->r1 = ADD32(0, 0XA);
    // 0x80298E6C: div         $zero, $v0, $at
    lo = S32(S64(S32(ctx->r2)) / S64(S32(ctx->r1))); hi = S32(S64(S32(ctx->r2)) % S64(S32(ctx->r1)));
    // 0x80298E70: lui         $a0, 0x8010
    ctx->r4 = S32(0X8010 << 16);
    // 0x80298E74: addiu       $a0, $a0, 0x6DD0
    ctx->r4 = ADD32(ctx->r4, 0X6DD0);
    // 0x80298E78: sw          $v0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r2;
    // 0x80298E7C: mflo        $a1
    ctx->r5 = lo;
    // 0x80298E80: addiu       $a1, $a1, 0xDA
    ctx->r5 = ADD32(ctx->r5, 0XDA);
    // 0x80298E84: andi        $t4, $a1, 0xFFFF
    ctx->r12 = ctx->r5 & 0XFFFF;
    // 0x80298E88: jal         0x8007AAF8
    // 0x80298E8C: or          $a1, $t4, $zero
    ctx->r5 = ctx->r12 | 0;
    func_8007AAF8(rdram, ctx);
        goto after_23;
    // 0x80298E8C: or          $a1, $t4, $zero
    ctx->r5 = ctx->r12 | 0;
    after_23:
    // 0x80298E90: addiu       $a0, $zero, 0x11
    ctx->r4 = ADD32(0, 0X11);
    // 0x80298E94: addiu       $a1, $zero, -0x4
    ctx->r5 = ADD32(0, -0X4);
    // 0x80298E98: jal         0x8029ACD4
    // 0x80298E9C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8029ACD4(rdram, ctx);
        goto after_24;
    // 0x80298E9C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_24:
    // 0x80298EA0: lui         $a0, 0x8010
    ctx->r4 = S32(0X8010 << 16);
    // 0x80298EA4: addiu       $a0, $a0, 0x6DD0
    ctx->r4 = ADD32(ctx->r4, 0X6DD0);
    // 0x80298EA8: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    // 0x80298EAC: jal         0x8002135C
    // 0x80298EB0: addiu       $a2, $zero, 0xF
    ctx->r6 = ADD32(0, 0XF);
    func_8002135C(rdram, ctx);
        goto after_25;
    // 0x80298EB0: addiu       $a2, $zero, 0xF
    ctx->r6 = ADD32(0, 0XF);
    after_25:
    // 0x80298EB4: lw          $a1, 0x2C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X2C);
    // 0x80298EB8: addiu       $at, $zero, 0xA
    ctx->r1 = ADD32(0, 0XA);
    // 0x80298EBC: div         $zero, $a1, $at
    lo = S32(S64(S32(ctx->r5)) / S64(S32(ctx->r1))); hi = S32(S64(S32(ctx->r5)) % S64(S32(ctx->r1)));
    // 0x80298EC0: lui         $a0, 0x8010
    ctx->r4 = S32(0X8010 << 16);
    // 0x80298EC4: addiu       $a0, $a0, 0x6E0C
    ctx->r4 = ADD32(ctx->r4, 0X6E0C);
    // 0x80298EC8: mfhi        $t5
    ctx->r13 = hi;
    // 0x80298ECC: addiu       $a1, $t5, 0xDA
    ctx->r5 = ADD32(ctx->r13, 0XDA);
    // 0x80298ED0: andi        $t6, $a1, 0xFFFF
    ctx->r14 = ctx->r5 & 0XFFFF;
    // 0x80298ED4: jal         0x8007AAF8
    // 0x80298ED8: or          $a1, $t6, $zero
    ctx->r5 = ctx->r14 | 0;
    func_8007AAF8(rdram, ctx);
        goto after_26;
    // 0x80298ED8: or          $a1, $t6, $zero
    ctx->r5 = ctx->r14 | 0;
    after_26:
    // 0x80298EDC: addiu       $a0, $zero, 0x12
    ctx->r4 = ADD32(0, 0X12);
    // 0x80298EE0: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x80298EE4: jal         0x8029ACD4
    // 0x80298EE8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8029ACD4(rdram, ctx);
        goto after_27;
    // 0x80298EE8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_27:
    // 0x80298EEC: lui         $a0, 0x8010
    ctx->r4 = S32(0X8010 << 16);
    // 0x80298EF0: addiu       $a0, $a0, 0x6E0C
    ctx->r4 = ADD32(ctx->r4, 0X6E0C);
    // 0x80298EF4: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    // 0x80298EF8: jal         0x8002135C
    // 0x80298EFC: addiu       $a2, $zero, 0xF
    ctx->r6 = ADD32(0, 0XF);
    func_8002135C(rdram, ctx);
        goto after_28;
    // 0x80298EFC: addiu       $a2, $zero, 0xF
    ctx->r6 = ADD32(0, 0XF);
    after_28:
    // 0x80298F00: b           L_80299004
    // 0x80298F04: lbu         $v0, 0x45($sp)
    ctx->r2 = MEM_BU(ctx->r29, 0X45);
        goto L_80299004;
    // 0x80298F04: lbu         $v0, 0x45($sp)
    ctx->r2 = MEM_BU(ctx->r29, 0X45);
L_80298F08:
    // 0x80298F08: addiu       $at, $zero, 0x64
    ctx->r1 = ADD32(0, 0X64);
    // 0x80298F0C: div         $zero, $v0, $at
    lo = S32(S64(S32(ctx->r2)) / S64(S32(ctx->r1))); hi = S32(S64(S32(ctx->r2)) % S64(S32(ctx->r1)));
    // 0x80298F10: lui         $a0, 0x8010
    ctx->r4 = S32(0X8010 << 16);
    // 0x80298F14: addiu       $a0, $a0, 0x6FEC
    ctx->r4 = ADD32(ctx->r4, 0X6FEC);
    // 0x80298F18: sw          $v0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r2;
    // 0x80298F1C: mflo        $a1
    ctx->r5 = lo;
    // 0x80298F20: addiu       $a1, $a1, 0xDA
    ctx->r5 = ADD32(ctx->r5, 0XDA);
    // 0x80298F24: andi        $t7, $a1, 0xFFFF
    ctx->r15 = ctx->r5 & 0XFFFF;
    // 0x80298F28: jal         0x8007AAF8
    // 0x80298F2C: or          $a1, $t7, $zero
    ctx->r5 = ctx->r15 | 0;
    func_8007AAF8(rdram, ctx);
        goto after_29;
    // 0x80298F2C: or          $a1, $t7, $zero
    ctx->r5 = ctx->r15 | 0;
    after_29:
    // 0x80298F30: addiu       $a0, $zero, 0x1A
    ctx->r4 = ADD32(0, 0X1A);
    // 0x80298F34: addiu       $a1, $zero, -0x8
    ctx->r5 = ADD32(0, -0X8);
    // 0x80298F38: jal         0x8029ACD4
    // 0x80298F3C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8029ACD4(rdram, ctx);
        goto after_30;
    // 0x80298F3C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_30:
    // 0x80298F40: lui         $a0, 0x8010
    ctx->r4 = S32(0X8010 << 16);
    // 0x80298F44: addiu       $a0, $a0, 0x6FEC
    ctx->r4 = ADD32(ctx->r4, 0X6FEC);
    // 0x80298F48: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    // 0x80298F4C: jal         0x8002135C
    // 0x80298F50: addiu       $a2, $zero, 0xF
    ctx->r6 = ADD32(0, 0XF);
    func_8002135C(rdram, ctx);
        goto after_31;
    // 0x80298F50: addiu       $a2, $zero, 0xF
    ctx->r6 = ADD32(0, 0XF);
    after_31:
    // 0x80298F54: lw          $a1, 0x2C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X2C);
    // 0x80298F58: addiu       $at, $zero, 0x64
    ctx->r1 = ADD32(0, 0X64);
    // 0x80298F5C: div         $zero, $a1, $at
    lo = S32(S64(S32(ctx->r5)) / S64(S32(ctx->r1))); hi = S32(S64(S32(ctx->r5)) % S64(S32(ctx->r1)));
    // 0x80298F60: addiu       $at, $zero, 0xA
    ctx->r1 = ADD32(0, 0XA);
    // 0x80298F64: lui         $a0, 0x8010
    ctx->r4 = S32(0X8010 << 16);
    // 0x80298F68: addiu       $a0, $a0, 0x6DD0
    ctx->r4 = ADD32(ctx->r4, 0X6DD0);
    // 0x80298F6C: mfhi        $t8
    ctx->r24 = hi;
    // 0x80298F70: nop

    // 0x80298F74: nop

    // 0x80298F78: div         $zero, $t8, $at
    lo = S32(S64(S32(ctx->r24)) / S64(S32(ctx->r1))); hi = S32(S64(S32(ctx->r24)) % S64(S32(ctx->r1)));
    // 0x80298F7C: mflo        $t9
    ctx->r25 = lo;
    // 0x80298F80: addiu       $a1, $t9, 0xDA
    ctx->r5 = ADD32(ctx->r25, 0XDA);
    // 0x80298F84: andi        $t4, $a1, 0xFFFF
    ctx->r12 = ctx->r5 & 0XFFFF;
    // 0x80298F88: jal         0x8007AAF8
    // 0x80298F8C: or          $a1, $t4, $zero
    ctx->r5 = ctx->r12 | 0;
    func_8007AAF8(rdram, ctx);
        goto after_32;
    // 0x80298F8C: or          $a1, $t4, $zero
    ctx->r5 = ctx->r12 | 0;
    after_32:
    // 0x80298F90: addiu       $a0, $zero, 0x11
    ctx->r4 = ADD32(0, 0X11);
    // 0x80298F94: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80298F98: jal         0x8029ACD4
    // 0x80298F9C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8029ACD4(rdram, ctx);
        goto after_33;
    // 0x80298F9C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_33:
    // 0x80298FA0: lui         $a0, 0x8010
    ctx->r4 = S32(0X8010 << 16);
    // 0x80298FA4: addiu       $a0, $a0, 0x6DD0
    ctx->r4 = ADD32(ctx->r4, 0X6DD0);
    // 0x80298FA8: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    // 0x80298FAC: jal         0x8002135C
    // 0x80298FB0: addiu       $a2, $zero, 0xF
    ctx->r6 = ADD32(0, 0XF);
    func_8002135C(rdram, ctx);
        goto after_34;
    // 0x80298FB0: addiu       $a2, $zero, 0xF
    ctx->r6 = ADD32(0, 0XF);
    after_34:
    // 0x80298FB4: lw          $a1, 0x2C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X2C);
    // 0x80298FB8: addiu       $at, $zero, 0xA
    ctx->r1 = ADD32(0, 0XA);
    // 0x80298FBC: div         $zero, $a1, $at
    lo = S32(S64(S32(ctx->r5)) / S64(S32(ctx->r1))); hi = S32(S64(S32(ctx->r5)) % S64(S32(ctx->r1)));
    // 0x80298FC0: lui         $a0, 0x8010
    ctx->r4 = S32(0X8010 << 16);
    // 0x80298FC4: addiu       $a0, $a0, 0x6E0C
    ctx->r4 = ADD32(ctx->r4, 0X6E0C);
    // 0x80298FC8: mfhi        $t5
    ctx->r13 = hi;
    // 0x80298FCC: addiu       $a1, $t5, 0xDA
    ctx->r5 = ADD32(ctx->r13, 0XDA);
    // 0x80298FD0: andi        $t6, $a1, 0xFFFF
    ctx->r14 = ctx->r5 & 0XFFFF;
    // 0x80298FD4: jal         0x8007AAF8
    // 0x80298FD8: or          $a1, $t6, $zero
    ctx->r5 = ctx->r14 | 0;
    func_8007AAF8(rdram, ctx);
        goto after_35;
    // 0x80298FD8: or          $a1, $t6, $zero
    ctx->r5 = ctx->r14 | 0;
    after_35:
    // 0x80298FDC: addiu       $a0, $zero, 0x12
    ctx->r4 = ADD32(0, 0X12);
    // 0x80298FE0: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    // 0x80298FE4: jal         0x8029ACD4
    // 0x80298FE8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8029ACD4(rdram, ctx);
        goto after_36;
    // 0x80298FE8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_36:
    // 0x80298FEC: lui         $a0, 0x8010
    ctx->r4 = S32(0X8010 << 16);
    // 0x80298FF0: addiu       $a0, $a0, 0x6E0C
    ctx->r4 = ADD32(ctx->r4, 0X6E0C);
    // 0x80298FF4: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    // 0x80298FF8: jal         0x8002135C
    // 0x80298FFC: addiu       $a2, $zero, 0xF
    ctx->r6 = ADD32(0, 0XF);
    func_8002135C(rdram, ctx);
        goto after_37;
    // 0x80298FFC: addiu       $a2, $zero, 0xF
    ctx->r6 = ADD32(0, 0XF);
    after_37:
L_80299000:
    // 0x80299000: lbu         $v0, 0x45($sp)
    ctx->r2 = MEM_BU(ctx->r29, 0X45);
L_80299004:
    // 0x80299004: lui         $a0, 0x8010
    ctx->r4 = S32(0X8010 << 16);
    // 0x80299008: slti        $at, $v0, 0xA
    ctx->r1 = SIGNED(ctx->r2) < 0XA ? 1 : 0;
    // 0x8029900C: beq         $at, $zero, L_8029905C
    if (ctx->r1 == 0) {
        // 0x80299010: addiu       $a0, $a0, 0x6E84
        ctx->r4 = ADD32(ctx->r4, 0X6E84);
            goto L_8029905C;
    }
    // 0x80299010: addiu       $a0, $a0, 0x6E84
    ctx->r4 = ADD32(ctx->r4, 0X6E84);
    // 0x80299014: addiu       $a1, $v0, 0xDA
    ctx->r5 = ADD32(ctx->r2, 0XDA);
    // 0x80299018: lui         $at, 0x8010
    ctx->r1 = S32(0X8010 << 16);
    // 0x8029901C: andi        $t7, $a1, 0xFFFF
    ctx->r15 = ctx->r5 & 0XFFFF;
    // 0x80299020: sb          $zero, 0x6E4C($at)
    MEM_B(0X6E4C, ctx->r1) = 0;
    // 0x80299024: or          $a1, $t7, $zero
    ctx->r5 = ctx->r15 | 0;
    // 0x80299028: jal         0x8007AAF8
    // 0x8029902C: sw          $v0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r2;
    func_8007AAF8(rdram, ctx);
        goto after_38;
    // 0x8029902C: sw          $v0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r2;
    after_38:
    // 0x80299030: addiu       $a0, $zero, 0x14
    ctx->r4 = ADD32(0, 0X14);
    // 0x80299034: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80299038: jal         0x8029ACD4
    // 0x8029903C: addiu       $a2, $zero, 0x20
    ctx->r6 = ADD32(0, 0X20);
    func_8029ACD4(rdram, ctx);
        goto after_39;
    // 0x8029903C: addiu       $a2, $zero, 0x20
    ctx->r6 = ADD32(0, 0X20);
    after_39:
    // 0x80299040: lui         $a0, 0x8010
    ctx->r4 = S32(0X8010 << 16);
    // 0x80299044: addiu       $a0, $a0, 0x6E84
    ctx->r4 = ADD32(ctx->r4, 0X6E84);
    // 0x80299048: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    // 0x8029904C: jal         0x8002135C
    // 0x80299050: addiu       $a2, $zero, 0xF
    ctx->r6 = ADD32(0, 0XF);
    func_8002135C(rdram, ctx);
        goto after_40;
    // 0x80299050: addiu       $a2, $zero, 0xF
    ctx->r6 = ADD32(0, 0XF);
    after_40:
    // 0x80299054: b           L_802990F8
    // 0x80299058: lbu         $v0, 0x44($sp)
    ctx->r2 = MEM_BU(ctx->r29, 0X44);
        goto L_802990F8;
    // 0x80299058: lbu         $v0, 0x44($sp)
    ctx->r2 = MEM_BU(ctx->r29, 0X44);
L_8029905C:
    // 0x8029905C: addiu       $at, $zero, 0xA
    ctx->r1 = ADD32(0, 0XA);
    // 0x80299060: div         $zero, $v0, $at
    lo = S32(S64(S32(ctx->r2)) / S64(S32(ctx->r1))); hi = S32(S64(S32(ctx->r2)) % S64(S32(ctx->r1)));
    // 0x80299064: lui         $a0, 0x8010
    ctx->r4 = S32(0X8010 << 16);
    // 0x80299068: addiu       $a0, $a0, 0x6E48
    ctx->r4 = ADD32(ctx->r4, 0X6E48);
    // 0x8029906C: sw          $v0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r2;
    // 0x80299070: mflo        $a1
    ctx->r5 = lo;
    // 0x80299074: addiu       $a1, $a1, 0xDA
    ctx->r5 = ADD32(ctx->r5, 0XDA);
    // 0x80299078: andi        $t8, $a1, 0xFFFF
    ctx->r24 = ctx->r5 & 0XFFFF;
    // 0x8029907C: jal         0x8007AAF8
    // 0x80299080: or          $a1, $t8, $zero
    ctx->r5 = ctx->r24 | 0;
    func_8007AAF8(rdram, ctx);
        goto after_41;
    // 0x80299080: or          $a1, $t8, $zero
    ctx->r5 = ctx->r24 | 0;
    after_41:
    // 0x80299084: addiu       $a0, $zero, 0x13
    ctx->r4 = ADD32(0, 0X13);
    // 0x80299088: addiu       $a1, $zero, -0x4
    ctx->r5 = ADD32(0, -0X4);
    // 0x8029908C: jal         0x8029ACD4
    // 0x80299090: addiu       $a2, $zero, 0x20
    ctx->r6 = ADD32(0, 0X20);
    func_8029ACD4(rdram, ctx);
        goto after_42;
    // 0x80299090: addiu       $a2, $zero, 0x20
    ctx->r6 = ADD32(0, 0X20);
    after_42:
    // 0x80299094: lui         $a0, 0x8010
    ctx->r4 = S32(0X8010 << 16);
    // 0x80299098: addiu       $a0, $a0, 0x6E48
    ctx->r4 = ADD32(ctx->r4, 0X6E48);
    // 0x8029909C: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    // 0x802990A0: jal         0x8002135C
    // 0x802990A4: addiu       $a2, $zero, 0xF
    ctx->r6 = ADD32(0, 0XF);
    func_8002135C(rdram, ctx);
        goto after_43;
    // 0x802990A4: addiu       $a2, $zero, 0xF
    ctx->r6 = ADD32(0, 0XF);
    after_43:
    // 0x802990A8: lw          $a1, 0x2C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X2C);
    // 0x802990AC: addiu       $at, $zero, 0xA
    ctx->r1 = ADD32(0, 0XA);
    // 0x802990B0: div         $zero, $a1, $at
    lo = S32(S64(S32(ctx->r5)) / S64(S32(ctx->r1))); hi = S32(S64(S32(ctx->r5)) % S64(S32(ctx->r1)));
    // 0x802990B4: lui         $a0, 0x8010
    ctx->r4 = S32(0X8010 << 16);
    // 0x802990B8: addiu       $a0, $a0, 0x6E84
    ctx->r4 = ADD32(ctx->r4, 0X6E84);
    // 0x802990BC: mfhi        $t9
    ctx->r25 = hi;
    // 0x802990C0: addiu       $a1, $t9, 0xDA
    ctx->r5 = ADD32(ctx->r25, 0XDA);
    // 0x802990C4: andi        $t4, $a1, 0xFFFF
    ctx->r12 = ctx->r5 & 0XFFFF;
    // 0x802990C8: jal         0x8007AAF8
    // 0x802990CC: or          $a1, $t4, $zero
    ctx->r5 = ctx->r12 | 0;
    func_8007AAF8(rdram, ctx);
        goto after_44;
    // 0x802990CC: or          $a1, $t4, $zero
    ctx->r5 = ctx->r12 | 0;
    after_44:
    // 0x802990D0: addiu       $a0, $zero, 0x14
    ctx->r4 = ADD32(0, 0X14);
    // 0x802990D4: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x802990D8: jal         0x8029ACD4
    // 0x802990DC: addiu       $a2, $zero, 0x20
    ctx->r6 = ADD32(0, 0X20);
    func_8029ACD4(rdram, ctx);
        goto after_45;
    // 0x802990DC: addiu       $a2, $zero, 0x20
    ctx->r6 = ADD32(0, 0X20);
    after_45:
    // 0x802990E0: lui         $a0, 0x8010
    ctx->r4 = S32(0X8010 << 16);
    // 0x802990E4: addiu       $a0, $a0, 0x6E84
    ctx->r4 = ADD32(ctx->r4, 0X6E84);
    // 0x802990E8: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    // 0x802990EC: jal         0x8002135C
    // 0x802990F0: addiu       $a2, $zero, 0xF
    ctx->r6 = ADD32(0, 0XF);
    func_8002135C(rdram, ctx);
        goto after_46;
    // 0x802990F0: addiu       $a2, $zero, 0xF
    ctx->r6 = ADD32(0, 0XF);
    after_46:
    // 0x802990F4: lbu         $v0, 0x44($sp)
    ctx->r2 = MEM_BU(ctx->r29, 0X44);
L_802990F8:
    // 0x802990F8: lui         $a0, 0x8010
    ctx->r4 = S32(0X8010 << 16);
    // 0x802990FC: slti        $at, $v0, 0xA
    ctx->r1 = SIGNED(ctx->r2) < 0XA ? 1 : 0;
    // 0x80299100: beq         $at, $zero, L_80299150
    if (ctx->r1 == 0) {
        // 0x80299104: addiu       $a0, $a0, 0x6EFC
        ctx->r4 = ADD32(ctx->r4, 0X6EFC);
            goto L_80299150;
    }
    // 0x80299104: addiu       $a0, $a0, 0x6EFC
    ctx->r4 = ADD32(ctx->r4, 0X6EFC);
    // 0x80299108: addiu       $a1, $v0, 0xDA
    ctx->r5 = ADD32(ctx->r2, 0XDA);
    // 0x8029910C: lui         $at, 0x8010
    ctx->r1 = S32(0X8010 << 16);
    // 0x80299110: andi        $t5, $a1, 0xFFFF
    ctx->r13 = ctx->r5 & 0XFFFF;
    // 0x80299114: sb          $zero, 0x6EC4($at)
    MEM_B(0X6EC4, ctx->r1) = 0;
    // 0x80299118: or          $a1, $t5, $zero
    ctx->r5 = ctx->r13 | 0;
    // 0x8029911C: jal         0x8007AAF8
    // 0x80299120: sw          $v0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r2;
    func_8007AAF8(rdram, ctx);
        goto after_47;
    // 0x80299120: sw          $v0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r2;
    after_47:
    // 0x80299124: addiu       $a0, $zero, 0x16
    ctx->r4 = ADD32(0, 0X16);
    // 0x80299128: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8029912C: jal         0x8029ACD4
    // 0x80299130: addiu       $a2, $zero, 0x38
    ctx->r6 = ADD32(0, 0X38);
    func_8029ACD4(rdram, ctx);
        goto after_48;
    // 0x80299130: addiu       $a2, $zero, 0x38
    ctx->r6 = ADD32(0, 0X38);
    after_48:
    // 0x80299134: lui         $a0, 0x8010
    ctx->r4 = S32(0X8010 << 16);
    // 0x80299138: addiu       $a0, $a0, 0x6EFC
    ctx->r4 = ADD32(ctx->r4, 0X6EFC);
    // 0x8029913C: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    // 0x80299140: jal         0x8002135C
    // 0x80299144: addiu       $a2, $zero, 0xF
    ctx->r6 = ADD32(0, 0XF);
    func_8002135C(rdram, ctx);
        goto after_49;
    // 0x80299144: addiu       $a2, $zero, 0xF
    ctx->r6 = ADD32(0, 0XF);
    after_49:
    // 0x80299148: b           L_802991EC
    // 0x8029914C: lw          $t9, 0x2C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X2C);
        goto L_802991EC;
    // 0x8029914C: lw          $t9, 0x2C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X2C);
L_80299150:
    // 0x80299150: addiu       $at, $zero, 0xA
    ctx->r1 = ADD32(0, 0XA);
    // 0x80299154: div         $zero, $v0, $at
    lo = S32(S64(S32(ctx->r2)) / S64(S32(ctx->r1))); hi = S32(S64(S32(ctx->r2)) % S64(S32(ctx->r1)));
    // 0x80299158: lui         $a0, 0x8010
    ctx->r4 = S32(0X8010 << 16);
    // 0x8029915C: addiu       $a0, $a0, 0x6EC0
    ctx->r4 = ADD32(ctx->r4, 0X6EC0);
    // 0x80299160: sw          $v0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r2;
    // 0x80299164: mflo        $a1
    ctx->r5 = lo;
    // 0x80299168: addiu       $a1, $a1, 0xDA
    ctx->r5 = ADD32(ctx->r5, 0XDA);
    // 0x8029916C: andi        $t6, $a1, 0xFFFF
    ctx->r14 = ctx->r5 & 0XFFFF;
    // 0x80299170: jal         0x8007AAF8
    // 0x80299174: or          $a1, $t6, $zero
    ctx->r5 = ctx->r14 | 0;
    func_8007AAF8(rdram, ctx);
        goto after_50;
    // 0x80299174: or          $a1, $t6, $zero
    ctx->r5 = ctx->r14 | 0;
    after_50:
    // 0x80299178: addiu       $a0, $zero, 0x15
    ctx->r4 = ADD32(0, 0X15);
    // 0x8029917C: addiu       $a1, $zero, -0x4
    ctx->r5 = ADD32(0, -0X4);
    // 0x80299180: jal         0x8029ACD4
    // 0x80299184: addiu       $a2, $zero, 0x38
    ctx->r6 = ADD32(0, 0X38);
    func_8029ACD4(rdram, ctx);
        goto after_51;
    // 0x80299184: addiu       $a2, $zero, 0x38
    ctx->r6 = ADD32(0, 0X38);
    after_51:
    // 0x80299188: lui         $a0, 0x8010
    ctx->r4 = S32(0X8010 << 16);
    // 0x8029918C: addiu       $a0, $a0, 0x6EC0
    ctx->r4 = ADD32(ctx->r4, 0X6EC0);
    // 0x80299190: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    // 0x80299194: jal         0x8002135C
    // 0x80299198: addiu       $a2, $zero, 0xF
    ctx->r6 = ADD32(0, 0XF);
    func_8002135C(rdram, ctx);
        goto after_52;
    // 0x80299198: addiu       $a2, $zero, 0xF
    ctx->r6 = ADD32(0, 0XF);
    after_52:
    // 0x8029919C: lw          $a1, 0x28($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X28);
    // 0x802991A0: addiu       $at, $zero, 0xA
    ctx->r1 = ADD32(0, 0XA);
    // 0x802991A4: div         $zero, $a1, $at
    lo = S32(S64(S32(ctx->r5)) / S64(S32(ctx->r1))); hi = S32(S64(S32(ctx->r5)) % S64(S32(ctx->r1)));
    // 0x802991A8: lui         $a0, 0x8010
    ctx->r4 = S32(0X8010 << 16);
    // 0x802991AC: addiu       $a0, $a0, 0x6EFC
    ctx->r4 = ADD32(ctx->r4, 0X6EFC);
    // 0x802991B0: mfhi        $t7
    ctx->r15 = hi;
    // 0x802991B4: addiu       $a1, $t7, 0xDA
    ctx->r5 = ADD32(ctx->r15, 0XDA);
    // 0x802991B8: andi        $t8, $a1, 0xFFFF
    ctx->r24 = ctx->r5 & 0XFFFF;
    // 0x802991BC: jal         0x8007AAF8
    // 0x802991C0: or          $a1, $t8, $zero
    ctx->r5 = ctx->r24 | 0;
    func_8007AAF8(rdram, ctx);
        goto after_53;
    // 0x802991C0: or          $a1, $t8, $zero
    ctx->r5 = ctx->r24 | 0;
    after_53:
    // 0x802991C4: addiu       $a0, $zero, 0x16
    ctx->r4 = ADD32(0, 0X16);
    // 0x802991C8: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x802991CC: jal         0x8029ACD4
    // 0x802991D0: addiu       $a2, $zero, 0x38
    ctx->r6 = ADD32(0, 0X38);
    func_8029ACD4(rdram, ctx);
        goto after_54;
    // 0x802991D0: addiu       $a2, $zero, 0x38
    ctx->r6 = ADD32(0, 0X38);
    after_54:
    // 0x802991D4: lui         $a0, 0x8010
    ctx->r4 = S32(0X8010 << 16);
    // 0x802991D8: addiu       $a0, $a0, 0x6EFC
    ctx->r4 = ADD32(ctx->r4, 0X6EFC);
    // 0x802991DC: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    // 0x802991E0: jal         0x8002135C
    // 0x802991E4: addiu       $a2, $zero, 0xF
    ctx->r6 = ADD32(0, 0XF);
    func_8002135C(rdram, ctx);
        goto after_55;
    // 0x802991E4: addiu       $a2, $zero, 0xF
    ctx->r6 = ADD32(0, 0XF);
    after_55:
    // 0x802991E8: lw          $t9, 0x2C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X2C);
L_802991EC:
    // 0x802991EC: lw          $t4, 0x28($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X28);
    // 0x802991F0: lui         $a0, 0x8010
    ctx->r4 = S32(0X8010 << 16);
    // 0x802991F4: addu        $v0, $t9, $t4
    ctx->r2 = ADD32(ctx->r25, ctx->r12);
    // 0x802991F8: andi        $t5, $v0, 0xFF
    ctx->r13 = ctx->r2 & 0XFF;
    // 0x802991FC: slti        $at, $t5, 0xA
    ctx->r1 = SIGNED(ctx->r13) < 0XA ? 1 : 0;
    // 0x80299200: beq         $at, $zero, L_80299250
    if (ctx->r1 == 0) {
        // 0x80299204: or          $v0, $t5, $zero
        ctx->r2 = ctx->r13 | 0;
            goto L_80299250;
    }
    // 0x80299204: or          $v0, $t5, $zero
    ctx->r2 = ctx->r13 | 0;
    // 0x80299208: addiu       $a1, $t5, 0xDA
    ctx->r5 = ADD32(ctx->r13, 0XDA);
    // 0x8029920C: lui         $at, 0x8010
    ctx->r1 = S32(0X8010 << 16);
    // 0x80299210: andi        $t6, $a1, 0xFFFF
    ctx->r14 = ctx->r5 & 0XFFFF;
    // 0x80299214: sb          $zero, 0x6F3C($at)
    MEM_B(0X6F3C, ctx->r1) = 0;
    // 0x80299218: or          $a1, $t6, $zero
    ctx->r5 = ctx->r14 | 0;
    // 0x8029921C: jal         0x8007AAF8
    // 0x80299220: addiu       $a0, $a0, 0x6F74
    ctx->r4 = ADD32(ctx->r4, 0X6F74);
    func_8007AAF8(rdram, ctx);
        goto after_56;
    // 0x80299220: addiu       $a0, $a0, 0x6F74
    ctx->r4 = ADD32(ctx->r4, 0X6F74);
    after_56:
    // 0x80299224: addiu       $a0, $zero, 0x18
    ctx->r4 = ADD32(0, 0X18);
    // 0x80299228: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8029922C: jal         0x8029ACD4
    // 0x80299230: addiu       $a2, $zero, 0x50
    ctx->r6 = ADD32(0, 0X50);
    func_8029ACD4(rdram, ctx);
        goto after_57;
    // 0x80299230: addiu       $a2, $zero, 0x50
    ctx->r6 = ADD32(0, 0X50);
    after_57:
    // 0x80299234: lui         $a0, 0x8010
    ctx->r4 = S32(0X8010 << 16);
    // 0x80299238: addiu       $a0, $a0, 0x6F74
    ctx->r4 = ADD32(ctx->r4, 0X6F74);
    // 0x8029923C: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    // 0x80299240: jal         0x8002135C
    // 0x80299244: addiu       $a2, $zero, 0xF
    ctx->r6 = ADD32(0, 0XF);
    func_8002135C(rdram, ctx);
        goto after_58;
    // 0x80299244: addiu       $a2, $zero, 0xF
    ctx->r6 = ADD32(0, 0XF);
    after_58:
    // 0x80299248: b           L_802994C0
    // 0x8029924C: lw          $t4, 0x30($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X30);
        goto L_802994C0;
    // 0x8029924C: lw          $t4, 0x30($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X30);
L_80299250:
    // 0x80299250: addiu       $at, $zero, 0xA
    ctx->r1 = ADD32(0, 0XA);
    // 0x80299254: div         $zero, $v0, $at
    lo = S32(S64(S32(ctx->r2)) / S64(S32(ctx->r1))); hi = S32(S64(S32(ctx->r2)) % S64(S32(ctx->r1)));
    // 0x80299258: lui         $a0, 0x8010
    ctx->r4 = S32(0X8010 << 16);
    // 0x8029925C: addiu       $a0, $a0, 0x6F38
    ctx->r4 = ADD32(ctx->r4, 0X6F38);
    // 0x80299260: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
    // 0x80299264: mflo        $a1
    ctx->r5 = lo;
    // 0x80299268: addiu       $a1, $a1, 0xDA
    ctx->r5 = ADD32(ctx->r5, 0XDA);
    // 0x8029926C: andi        $t7, $a1, 0xFFFF
    ctx->r15 = ctx->r5 & 0XFFFF;
    // 0x80299270: jal         0x8007AAF8
    // 0x80299274: or          $a1, $t7, $zero
    ctx->r5 = ctx->r15 | 0;
    func_8007AAF8(rdram, ctx);
        goto after_59;
    // 0x80299274: or          $a1, $t7, $zero
    ctx->r5 = ctx->r15 | 0;
    after_59:
    // 0x80299278: addiu       $a0, $zero, 0x17
    ctx->r4 = ADD32(0, 0X17);
    // 0x8029927C: addiu       $a1, $zero, -0x4
    ctx->r5 = ADD32(0, -0X4);
    // 0x80299280: jal         0x8029ACD4
    // 0x80299284: addiu       $a2, $zero, 0x50
    ctx->r6 = ADD32(0, 0X50);
    func_8029ACD4(rdram, ctx);
        goto after_60;
    // 0x80299284: addiu       $a2, $zero, 0x50
    ctx->r6 = ADD32(0, 0X50);
    after_60:
    // 0x80299288: lui         $a0, 0x8010
    ctx->r4 = S32(0X8010 << 16);
    // 0x8029928C: addiu       $a0, $a0, 0x6F38
    ctx->r4 = ADD32(ctx->r4, 0X6F38);
    // 0x80299290: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    // 0x80299294: jal         0x8002135C
    // 0x80299298: addiu       $a2, $zero, 0xF
    ctx->r6 = ADD32(0, 0XF);
    func_8002135C(rdram, ctx);
        goto after_61;
    // 0x80299298: addiu       $a2, $zero, 0xF
    ctx->r6 = ADD32(0, 0XF);
    after_61:
    // 0x8029929C: lw          $v0, 0x24($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X24);
    // 0x802992A0: addiu       $at, $zero, 0xA
    ctx->r1 = ADD32(0, 0XA);
    // 0x802992A4: div         $zero, $v0, $at
    lo = S32(S64(S32(ctx->r2)) / S64(S32(ctx->r1))); hi = S32(S64(S32(ctx->r2)) % S64(S32(ctx->r1)));
    // 0x802992A8: lui         $a0, 0x8010
    ctx->r4 = S32(0X8010 << 16);
    // 0x802992AC: addiu       $a0, $a0, 0x6F74
    ctx->r4 = ADD32(ctx->r4, 0X6F74);
    // 0x802992B0: mfhi        $a1
    ctx->r5 = hi;
    // 0x802992B4: addiu       $a1, $a1, 0xDA
    ctx->r5 = ADD32(ctx->r5, 0XDA);
    // 0x802992B8: andi        $t8, $a1, 0xFFFF
    ctx->r24 = ctx->r5 & 0XFFFF;
    // 0x802992BC: jal         0x8007AAF8
    // 0x802992C0: or          $a1, $t8, $zero
    ctx->r5 = ctx->r24 | 0;
    func_8007AAF8(rdram, ctx);
        goto after_62;
    // 0x802992C0: or          $a1, $t8, $zero
    ctx->r5 = ctx->r24 | 0;
    after_62:
    // 0x802992C4: addiu       $a0, $zero, 0x18
    ctx->r4 = ADD32(0, 0X18);
    // 0x802992C8: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x802992CC: jal         0x8029ACD4
    // 0x802992D0: addiu       $a2, $zero, 0x50
    ctx->r6 = ADD32(0, 0X50);
    func_8029ACD4(rdram, ctx);
        goto after_63;
    // 0x802992D0: addiu       $a2, $zero, 0x50
    ctx->r6 = ADD32(0, 0X50);
    after_63:
    // 0x802992D4: lui         $a0, 0x8010
    ctx->r4 = S32(0X8010 << 16);
    // 0x802992D8: addiu       $a0, $a0, 0x6F74
    ctx->r4 = ADD32(ctx->r4, 0X6F74);
    // 0x802992DC: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    // 0x802992E0: jal         0x8002135C
    // 0x802992E4: addiu       $a2, $zero, 0xF
    ctx->r6 = ADD32(0, 0XF);
    func_8002135C(rdram, ctx);
        goto after_64;
    // 0x802992E4: addiu       $a2, $zero, 0xF
    ctx->r6 = ADD32(0, 0XF);
    after_64:
    // 0x802992E8: b           L_802994C0
    // 0x802992EC: lw          $t4, 0x30($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X30);
        goto L_802994C0;
    // 0x802992EC: lw          $t4, 0x30($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X30);
L_802992F0:
    // 0x802992F0: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x802992F4: bne         $v0, $at, L_802994A0
    if (ctx->r2 != ctx->r1) {
        // 0x802992F8: lui         $t9, 0x802C
        ctx->r25 = S32(0X802C << 16);
            goto L_802994A0;
    }
    // 0x802992F8: lui         $t9, 0x802C
    ctx->r25 = S32(0X802C << 16);
    // 0x802992FC: lui         $t4, 0x8012
    ctx->r12 = S32(0X8012 << 16);
    // 0x80299300: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x80299304: lhu         $t9, 0x39E0($t9)
    ctx->r25 = MEM_HU(ctx->r25, 0X39E0);
    // 0x80299308: lw          $t4, 0xB28($t4)
    ctx->r12 = MEM_W(ctx->r12, 0XB28);
    // 0x8029930C: lbu         $v0, -0x32A4($v0)
    ctx->r2 = MEM_BU(ctx->r2, -0X32A4);
    // 0x80299310: addiu       $t5, $zero, 0x120
    ctx->r13 = ADD32(0, 0X120);
    // 0x80299314: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x80299318: sh          $t5, 0x40($sp)
    MEM_H(0X40, ctx->r29) = ctx->r13;
    // 0x8029931C: sh          $t9, 0x48($sp)
    MEM_H(0X48, ctx->r29) = ctx->r25;
    // 0x80299320: beq         $v0, $at, L_8029932C
    if (ctx->r2 == ctx->r1) {
        // 0x80299324: sw          $t4, 0x30($sp)
        MEM_W(0X30, ctx->r29) = ctx->r12;
            goto L_8029932C;
    }
    // 0x80299324: sw          $t4, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r12;
    // 0x80299328: bne         $a3, $v0, L_80299440
    if (ctx->r7 != ctx->r2) {
        // 0x8029932C: lui         $t6, 0x8009
        ctx->r14 = S32(0X8009 << 16);
            goto L_80299440;
    }
L_8029932C:
    // 0x8029932C: lui         $t6, 0x8009
    ctx->r14 = S32(0X8009 << 16);
    // 0x80299330: lw          $t6, 0x3B20($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X3B20);
    // 0x80299334: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    // 0x80299338: lhu         $t7, 0xDC($t6)
    ctx->r15 = MEM_HU(ctx->r14, 0XDC);
    // 0x8029933C: addiu       $a1, $zero, 0x120
    ctx->r5 = ADD32(0, 0X120);
    // 0x80299340: andi        $t8, $t7, 0x2
    ctx->r24 = ctx->r15 & 0X2;
    // 0x80299344: beq         $t8, $zero, L_80299440
    if (ctx->r24 == 0) {
        // 0x80299348: nop
    
            goto L_80299440;
    }
    // 0x80299348: nop

    // 0x8029934C: jal         0x8029ACD4
    // 0x80299350: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8029ACD4(rdram, ctx);
        goto after_65;
    // 0x80299350: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_65:
    // 0x80299354: lui         $a0, 0x8010
    ctx->r4 = S32(0X8010 << 16);
    // 0x80299358: addiu       $a0, $a0, 0x6A4C
    ctx->r4 = ADD32(ctx->r4, 0X6A4C);
    // 0x8029935C: jal         0x8007AAF8
    // 0x80299360: addiu       $a1, $zero, 0x1A7
    ctx->r5 = ADD32(0, 0X1A7);
    func_8007AAF8(rdram, ctx);
        goto after_66;
    // 0x80299360: addiu       $a1, $zero, 0x1A7
    ctx->r5 = ADD32(0, 0X1A7);
    after_66:
    // 0x80299364: lui         $a0, 0x8010
    ctx->r4 = S32(0X8010 << 16);
    // 0x80299368: addiu       $a0, $a0, 0x6A4C
    ctx->r4 = ADD32(ctx->r4, 0X6A4C);
    // 0x8029936C: addiu       $a1, $zero, 0x12
    ctx->r5 = ADD32(0, 0X12);
    // 0x80299370: jal         0x8002135C
    // 0x80299374: addiu       $a2, $zero, 0x54
    ctx->r6 = ADD32(0, 0X54);
    func_8002135C(rdram, ctx);
        goto after_67;
    // 0x80299374: addiu       $a2, $zero, 0x54
    ctx->r6 = ADD32(0, 0X54);
    after_67:
    // 0x80299378: lui         $a0, 0x8010
    ctx->r4 = S32(0X8010 << 16);
    // 0x8029937C: addiu       $a0, $a0, 0x6D1C
    ctx->r4 = ADD32(ctx->r4, 0X6D1C);
    // 0x80299380: jal         0x8007AAF8
    // 0x80299384: addiu       $a1, $zero, 0x1A8
    ctx->r5 = ADD32(0, 0X1A8);
    func_8007AAF8(rdram, ctx);
        goto after_68;
    // 0x80299384: addiu       $a1, $zero, 0x1A8
    ctx->r5 = ADD32(0, 0X1A8);
    after_68:
    // 0x80299388: addiu       $a0, $zero, 0xE
    ctx->r4 = ADD32(0, 0XE);
    // 0x8029938C: addiu       $a1, $zero, 0x120
    ctx->r5 = ADD32(0, 0X120);
    // 0x80299390: jal         0x8029ACD4
    // 0x80299394: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8029ACD4(rdram, ctx);
        goto after_69;
    // 0x80299394: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_69:
    // 0x80299398: lui         $a0, 0x8010
    ctx->r4 = S32(0X8010 << 16);
    // 0x8029939C: addiu       $a0, $a0, 0x6D1C
    ctx->r4 = ADD32(ctx->r4, 0X6D1C);
    // 0x802993A0: addiu       $a1, $zero, 0x12
    ctx->r5 = ADD32(0, 0X12);
    // 0x802993A4: jal         0x8002135C
    // 0x802993A8: addiu       $a2, $zero, 0x54
    ctx->r6 = ADD32(0, 0X54);
    func_8002135C(rdram, ctx);
        goto after_70;
    // 0x802993A8: addiu       $a2, $zero, 0x54
    ctx->r6 = ADD32(0, 0X54);
    after_70:
    // 0x802993AC: lui         $a0, 0x8010
    ctx->r4 = S32(0X8010 << 16);
    // 0x802993B0: addiu       $a0, $a0, 0x6D58
    ctx->r4 = ADD32(ctx->r4, 0X6D58);
    // 0x802993B4: jal         0x8007AAF8
    // 0x802993B8: addiu       $a1, $zero, 0x1A9
    ctx->r5 = ADD32(0, 0X1A9);
    func_8007AAF8(rdram, ctx);
        goto after_71;
    // 0x802993B8: addiu       $a1, $zero, 0x1A9
    ctx->r5 = ADD32(0, 0X1A9);
    after_71:
    // 0x802993BC: addiu       $a0, $zero, 0xF
    ctx->r4 = ADD32(0, 0XF);
    // 0x802993C0: addiu       $a1, $zero, 0x120
    ctx->r5 = ADD32(0, 0X120);
    // 0x802993C4: jal         0x8029ACD4
    // 0x802993C8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8029ACD4(rdram, ctx);
        goto after_72;
    // 0x802993C8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_72:
    // 0x802993CC: lui         $a0, 0x8010
    ctx->r4 = S32(0X8010 << 16);
    // 0x802993D0: addiu       $a0, $a0, 0x6D58
    ctx->r4 = ADD32(ctx->r4, 0X6D58);
    // 0x802993D4: addiu       $a1, $zero, 0x12
    ctx->r5 = ADD32(0, 0X12);
    // 0x802993D8: jal         0x8002135C
    // 0x802993DC: addiu       $a2, $zero, 0x53
    ctx->r6 = ADD32(0, 0X53);
    func_8002135C(rdram, ctx);
        goto after_73;
    // 0x802993DC: addiu       $a2, $zero, 0x53
    ctx->r6 = ADD32(0, 0X53);
    after_73:
    // 0x802993E0: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x802993E4: lw          $v0, 0xB28($v0)
    ctx->r2 = MEM_W(ctx->r2, 0XB28);
    // 0x802993E8: nop

    // 0x802993EC: lw          $t9, 0xC8($v0)
    ctx->r25 = MEM_W(ctx->r2, 0XC8);
    // 0x802993F0: lb          $a1, 0x1B($v0)
    ctx->r5 = MEM_B(ctx->r2, 0X1B);
    // 0x802993F4: lb          $a0, 0x7($t9)
    ctx->r4 = MEM_B(ctx->r25, 0X7);
    // 0x802993F8: jal         0x8004948C
    // 0x802993FC: nop

    func_8004948C(rdram, ctx);
        goto after_74;
    // 0x802993FC: nop

    after_74:
    // 0x80299400: andi        $a1, $v0, 0xFF
    ctx->r5 = ctx->r2 & 0XFF;
    // 0x80299404: addiu       $a1, $a1, 0x50
    ctx->r5 = ADD32(ctx->r5, 0X50);
    // 0x80299408: andi        $t4, $a1, 0xFFFF
    ctx->r12 = ctx->r5 & 0XFFFF;
    // 0x8029940C: lui         $a0, 0x8010
    ctx->r4 = S32(0X8010 << 16);
    // 0x80299410: addiu       $a0, $a0, 0x6DD0
    ctx->r4 = ADD32(ctx->r4, 0X6DD0);
    // 0x80299414: jal         0x8007AAF8
    // 0x80299418: or          $a1, $t4, $zero
    ctx->r5 = ctx->r12 | 0;
    func_8007AAF8(rdram, ctx);
        goto after_75;
    // 0x80299418: or          $a1, $t4, $zero
    ctx->r5 = ctx->r12 | 0;
    after_75:
    // 0x8029941C: addiu       $a0, $zero, 0x11
    ctx->r4 = ADD32(0, 0X11);
    // 0x80299420: addiu       $a1, $zero, 0x1F0
    ctx->r5 = ADD32(0, 0X1F0);
    // 0x80299424: jal         0x8029ACD4
    // 0x80299428: addiu       $a2, $zero, 0x50
    ctx->r6 = ADD32(0, 0X50);
    func_8029ACD4(rdram, ctx);
        goto after_76;
    // 0x80299428: addiu       $a2, $zero, 0x50
    ctx->r6 = ADD32(0, 0X50);
    after_76:
    // 0x8029942C: lui         $a0, 0x8010
    ctx->r4 = S32(0X8010 << 16);
    // 0x80299430: addiu       $a0, $a0, 0x6DD0
    ctx->r4 = ADD32(ctx->r4, 0X6DD0);
    // 0x80299434: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    // 0x80299438: jal         0x8002135C
    // 0x8029943C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8002135C(rdram, ctx);
        goto after_77;
    // 0x8029943C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_77:
L_80299440:
    // 0x80299440: lui         $t5, 0x8009
    ctx->r13 = S32(0X8009 << 16);
    // 0x80299444: lw          $t5, 0x3B20($t5)
    ctx->r13 = MEM_W(ctx->r13, 0X3B20);
    // 0x80299448: lui         $a0, 0x8010
    ctx->r4 = S32(0X8010 << 16);
    // 0x8029944C: lhu         $t6, 0xDC($t5)
    ctx->r14 = MEM_HU(ctx->r13, 0XDC);
    // 0x80299450: addiu       $a0, $a0, 0x6D94
    ctx->r4 = ADD32(ctx->r4, 0X6D94);
    // 0x80299454: andi        $t7, $t6, 0x2
    ctx->r15 = ctx->r14 & 0X2;
    // 0x80299458: beq         $t7, $zero, L_80299468
    if (ctx->r15 == 0) {
        // 0x8029945C: addiu       $a1, $zero, 0x1AA
        ctx->r5 = ADD32(0, 0X1AA);
            goto L_80299468;
    }
    // 0x8029945C: addiu       $a1, $zero, 0x1AA
    ctx->r5 = ADD32(0, 0X1AA);
    // 0x80299460: b           L_8029946C
    // 0x80299464: addiu       $a3, $zero, 0x51
    ctx->r7 = ADD32(0, 0X51);
        goto L_8029946C;
    // 0x80299464: addiu       $a3, $zero, 0x51
    ctx->r7 = ADD32(0, 0X51);
L_80299468:
    // 0x80299468: addiu       $a3, $zero, 0x52
    ctx->r7 = ADD32(0, 0X52);
L_8029946C:
    // 0x8029946C: jal         0x8007AAF8
    // 0x80299470: sb          $a3, 0x3F($sp)
    MEM_B(0X3F, ctx->r29) = ctx->r7;
    func_8007AAF8(rdram, ctx);
        goto after_78;
    // 0x80299470: sb          $a3, 0x3F($sp)
    MEM_B(0X3F, ctx->r29) = ctx->r7;
    after_78:
    // 0x80299474: addiu       $a0, $zero, 0x10
    ctx->r4 = ADD32(0, 0X10);
    // 0x80299478: addiu       $a1, $zero, 0x120
    ctx->r5 = ADD32(0, 0X120);
    // 0x8029947C: jal         0x8029ACD4
    // 0x80299480: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8029ACD4(rdram, ctx);
        goto after_79;
    // 0x80299480: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_79:
    // 0x80299484: lbu         $a2, 0x3F($sp)
    ctx->r6 = MEM_BU(ctx->r29, 0X3F);
    // 0x80299488: lui         $a0, 0x8010
    ctx->r4 = S32(0X8010 << 16);
    // 0x8029948C: addiu       $a0, $a0, 0x6D94
    ctx->r4 = ADD32(ctx->r4, 0X6D94);
    // 0x80299490: jal         0x8002135C
    // 0x80299494: addiu       $a1, $zero, 0x12
    ctx->r5 = ADD32(0, 0X12);
    func_8002135C(rdram, ctx);
        goto after_80;
    // 0x80299494: addiu       $a1, $zero, 0x12
    ctx->r5 = ADD32(0, 0X12);
    after_80:
    // 0x80299498: b           L_802994C0
    // 0x8029949C: lw          $t4, 0x30($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X30);
        goto L_802994C0;
    // 0x8029949C: lw          $t4, 0x30($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X30);
L_802994A0:
    // 0x802994A0: beq         $v1, $zero, L_802994BC
    if (ctx->r3 == 0) {
        // 0x802994A4: lui         $t9, 0x802C
        ctx->r25 = S32(0X802C << 16);
            goto L_802994BC;
    }
    // 0x802994A4: lui         $t9, 0x802C
    ctx->r25 = S32(0X802C << 16);
    // 0x802994A8: lw          $t8, 0x0($t3)
    ctx->r24 = MEM_W(ctx->r11, 0X0);
    // 0x802994AC: lhu         $t9, 0x39CE($t9)
    ctx->r25 = MEM_HU(ctx->r25, 0X39CE);
    // 0x802994B0: sh          $zero, 0x40($sp)
    MEM_H(0X40, ctx->r29) = 0;
    // 0x802994B4: sw          $t8, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r24;
    // 0x802994B8: sh          $t9, 0x48($sp)
    MEM_H(0X48, ctx->r29) = ctx->r25;
L_802994BC:
    // 0x802994BC: lw          $t4, 0x30($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X30);
L_802994C0:
    // 0x802994C0: lhu         $v0, 0x40($sp)
    ctx->r2 = MEM_HU(ctx->r29, 0X40);
    // 0x802994C4: lw          $t5, 0xC8($t4)
    ctx->r13 = MEM_W(ctx->r12, 0XC8);
    // 0x802994C8: sll         $a1, $v0, 16
    ctx->r5 = S32(ctx->r2 << 16);
    // 0x802994CC: lbu         $t6, 0x0($t5)
    ctx->r14 = MEM_BU(ctx->r13, 0X0);
    // 0x802994D0: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x802994D4: sb          $t6, 0x4D($sp)
    MEM_B(0X4D, ctx->r29) = ctx->r14;
    // 0x802994D8: lw          $t7, 0xD4($t4)
    ctx->r15 = MEM_W(ctx->r12, 0XD4);
    // 0x802994DC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x802994E0: lbu         $t8, 0x4($t7)
    ctx->r24 = MEM_BU(ctx->r15, 0X4);
    // 0x802994E4: nop

    // 0x802994E8: andi        $t9, $t8, 0x7F
    ctx->r25 = ctx->r24 & 0X7F;
    // 0x802994EC: sb          $t9, 0x4B($sp)
    MEM_B(0X4B, ctx->r29) = ctx->r25;
    // 0x802994F0: lw          $t5, 0xD8($t4)
    ctx->r13 = MEM_W(ctx->r12, 0XD8);
    // 0x802994F4: sra         $t9, $a1, 16
    ctx->r25 = S32(SIGNED(ctx->r5) >> 16);
    // 0x802994F8: lbu         $t6, 0x18($t5)
    ctx->r14 = MEM_BU(ctx->r13, 0X18);
    // 0x802994FC: sw          $t9, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r25;
    // 0x80299500: bgez        $t6, L_80299510
    if (SIGNED(ctx->r14) >= 0) {
        // 0x80299504: sra         $t7, $t6, 4
        ctx->r15 = S32(SIGNED(ctx->r14) >> 4);
            goto L_80299510;
    }
    // 0x80299504: sra         $t7, $t6, 4
    ctx->r15 = S32(SIGNED(ctx->r14) >> 4);
    // 0x80299508: addiu       $at, $t6, 0xF
    ctx->r1 = ADD32(ctx->r14, 0XF);
    // 0x8029950C: sra         $t7, $at, 4
    ctx->r15 = S32(SIGNED(ctx->r1) >> 4);
L_80299510:
    // 0x80299510: addiu       $t8, $t7, 0x1
    ctx->r24 = ADD32(ctx->r15, 0X1);
    // 0x80299514: sb          $t8, 0x47($sp)
    MEM_B(0X47, ctx->r29) = ctx->r24;
    // 0x80299518: or          $a1, $t9, $zero
    ctx->r5 = ctx->r25 | 0;
    // 0x8029951C: jal         0x8029ACD4
    // 0x80299520: sw          $v0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r2;
    func_8029ACD4(rdram, ctx);
        goto after_81;
    // 0x80299520: sw          $v0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r2;
    after_81:
    // 0x80299524: lui         $a0, 0x8010
    ctx->r4 = S32(0X8010 << 16);
    // 0x80299528: addiu       $a0, $a0, 0x69D4
    ctx->r4 = ADD32(ctx->r4, 0X69D4);
    // 0x8029952C: jal         0x8007AAF8
    // 0x80299530: addiu       $a1, $zero, 0xA2
    ctx->r5 = ADD32(0, 0XA2);
    func_8007AAF8(rdram, ctx);
        goto after_82;
    // 0x80299530: addiu       $a1, $zero, 0xA2
    ctx->r5 = ADD32(0, 0XA2);
    after_82:
    // 0x80299534: lui         $a0, 0x8010
    ctx->r4 = S32(0X8010 << 16);
    // 0x80299538: addiu       $a0, $a0, 0x69D4
    ctx->r4 = ADD32(ctx->r4, 0X69D4);
    // 0x8029953C: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    // 0x80299540: jal         0x8002135C
    // 0x80299544: addiu       $a2, $zero, 0xE
    ctx->r6 = ADD32(0, 0XE);
    func_8002135C(rdram, ctx);
        goto after_83;
    // 0x80299544: addiu       $a2, $zero, 0xE
    ctx->r6 = ADD32(0, 0XE);
    after_83:
    // 0x80299548: lh          $a1, 0x2A($sp)
    ctx->r5 = MEM_H(ctx->r29, 0X2A);
    // 0x8029954C: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x80299550: jal         0x8029ACD4
    // 0x80299554: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8029ACD4(rdram, ctx);
        goto after_84;
    // 0x80299554: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_84:
    // 0x80299558: lbu         $v0, 0x4B($sp)
    ctx->r2 = MEM_BU(ctx->r29, 0X4B);
    // 0x8029955C: addiu       $t4, $zero, 0xA6
    ctx->r12 = ADD32(0, 0XA6);
    // 0x80299560: subu        $a1, $t4, $v0
    ctx->r5 = SUB32(ctx->r12, ctx->r2);
    // 0x80299564: andi        $t5, $a1, 0xFFFF
    ctx->r13 = ctx->r5 & 0XFFFF;
    // 0x80299568: lui         $a0, 0x8010
    ctx->r4 = S32(0X8010 << 16);
    // 0x8029956C: addiu       $a0, $a0, 0x6A10
    ctx->r4 = ADD32(ctx->r4, 0X6A10);
    // 0x80299570: or          $a1, $t5, $zero
    ctx->r5 = ctx->r13 | 0;
    // 0x80299574: jal         0x8007AAF8
    // 0x80299578: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
    func_8007AAF8(rdram, ctx);
        goto after_85;
    // 0x80299578: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
    after_85:
    // 0x8029957C: lw          $v0, 0x24($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X24);
    // 0x80299580: addiu       $t6, $zero, 0xD
    ctx->r14 = ADD32(0, 0XD);
    // 0x80299584: subu        $a2, $t6, $v0
    ctx->r6 = SUB32(ctx->r14, ctx->r2);
    // 0x80299588: andi        $t7, $a2, 0xFF
    ctx->r15 = ctx->r6 & 0XFF;
    // 0x8029958C: lui         $a0, 0x8010
    ctx->r4 = S32(0X8010 << 16);
    // 0x80299590: addiu       $a0, $a0, 0x6A10
    ctx->r4 = ADD32(ctx->r4, 0X6A10);
    // 0x80299594: or          $a2, $t7, $zero
    ctx->r6 = ctx->r15 | 0;
    // 0x80299598: jal         0x8002135C
    // 0x8029959C: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    func_8002135C(rdram, ctx);
        goto after_86;
    // 0x8029959C: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    after_86:
    // 0x802995A0: lw          $a1, 0x2C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X2C);
    // 0x802995A4: addiu       $a0, $zero, 0x3
    ctx->r4 = ADD32(0, 0X3);
    // 0x802995A8: negu        $a1, $a1
    ctx->r5 = SUB32(0, ctx->r5);
    // 0x802995AC: sll         $t8, $a1, 16
    ctx->r24 = S32(ctx->r5 << 16);
    // 0x802995B0: sra         $a1, $t8, 16
    ctx->r5 = S32(SIGNED(ctx->r24) >> 16);
    // 0x802995B4: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x802995B8: jal         0x8029ACD4
    // 0x802995BC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8029ACD4(rdram, ctx);
        goto after_87;
    // 0x802995BC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_87:
    // 0x802995C0: lui         $a0, 0x8010
    ctx->r4 = S32(0X8010 << 16);
    // 0x802995C4: addiu       $a0, $a0, 0x6A88
    ctx->r4 = ADD32(ctx->r4, 0X6A88);
    // 0x802995C8: jal         0x8007AAF8
    // 0x802995CC: addiu       $a1, $zero, 0xA8
    ctx->r5 = ADD32(0, 0XA8);
    func_8007AAF8(rdram, ctx);
        goto after_88;
    // 0x802995CC: addiu       $a1, $zero, 0xA8
    ctx->r5 = ADD32(0, 0XA8);
    after_88:
    // 0x802995D0: lui         $a0, 0x8010
    ctx->r4 = S32(0X8010 << 16);
    // 0x802995D4: addiu       $a0, $a0, 0x6A88
    ctx->r4 = ADD32(ctx->r4, 0X6A88);
    // 0x802995D8: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    // 0x802995DC: jal         0x8002135C
    // 0x802995E0: addiu       $a2, $zero, 0xE
    ctx->r6 = ADD32(0, 0XE);
    func_8002135C(rdram, ctx);
        goto after_89;
    // 0x802995E0: addiu       $a2, $zero, 0xE
    ctx->r6 = ADD32(0, 0XE);
    after_89:
    // 0x802995E4: lw          $t4, 0x2C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X2C);
    // 0x802995E8: addiu       $t5, $zero, 0x4
    ctx->r13 = ADD32(0, 0X4);
    // 0x802995EC: subu        $a2, $t5, $t4
    ctx->r6 = SUB32(ctx->r13, ctx->r12);
    // 0x802995F0: sll         $t6, $a2, 16
    ctx->r14 = S32(ctx->r6 << 16);
    // 0x802995F4: lui         $a0, 0x8010
    ctx->r4 = S32(0X8010 << 16);
    // 0x802995F8: lbu         $a1, 0x4D($sp)
    ctx->r5 = MEM_BU(ctx->r29, 0X4D);
    // 0x802995FC: addiu       $a0, $a0, 0x6B00
    ctx->r4 = ADD32(ctx->r4, 0X6B00);
    // 0x80299600: sra         $a2, $t6, 16
    ctx->r6 = S32(SIGNED(ctx->r14) >> 16);
    // 0x80299604: jal         0x8029AD54
    // 0x80299608: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    func_8029AD54(rdram, ctx);
        goto after_90;
    // 0x80299608: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_90:
    // 0x8029960C: lh          $a1, 0x26($sp)
    ctx->r5 = MEM_H(ctx->r29, 0X26);
    // 0x80299610: addiu       $a0, $zero, 0x19
    ctx->r4 = ADD32(0, 0X19);
    // 0x80299614: jal         0x8029ACD4
    // 0x80299618: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8029ACD4(rdram, ctx);
        goto after_91;
    // 0x80299618: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_91:
    // 0x8029961C: lbu         $a1, 0x46($sp)
    ctx->r5 = MEM_BU(ctx->r29, 0X46);
    // 0x80299620: lui         $a0, 0x8010
    ctx->r4 = S32(0X8010 << 16);
    // 0x80299624: addiu       $a1, $a1, 0xAA
    ctx->r5 = ADD32(ctx->r5, 0XAA);
    // 0x80299628: andi        $t8, $a1, 0xFFFF
    ctx->r24 = ctx->r5 & 0XFFFF;
    // 0x8029962C: or          $a1, $t8, $zero
    ctx->r5 = ctx->r24 | 0;
    // 0x80299630: jal         0x8007AAF8
    // 0x80299634: addiu       $a0, $a0, 0x6FB0
    ctx->r4 = ADD32(ctx->r4, 0X6FB0);
    func_8007AAF8(rdram, ctx);
        goto after_92;
    // 0x80299634: addiu       $a0, $a0, 0x6FB0
    ctx->r4 = ADD32(ctx->r4, 0X6FB0);
    after_92:
    // 0x80299638: lui         $a0, 0x8010
    ctx->r4 = S32(0X8010 << 16);
    // 0x8029963C: addiu       $a0, $a0, 0x6FB0
    ctx->r4 = ADD32(ctx->r4, 0X6FB0);
    // 0x80299640: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    // 0x80299644: jal         0x8002135C
    // 0x80299648: addiu       $a2, $zero, 0xF
    ctx->r6 = ADD32(0, 0XF);
    func_8002135C(rdram, ctx);
        goto after_93;
    // 0x80299648: addiu       $a2, $zero, 0xF
    ctx->r6 = ADD32(0, 0XF);
    after_93:
    // 0x8029964C: lh          $a1, 0x26($sp)
    ctx->r5 = MEM_H(ctx->r29, 0X26);
    // 0x80299650: addiu       $a0, $zero, 0x6
    ctx->r4 = ADD32(0, 0X6);
    // 0x80299654: jal         0x8029ACD4
    // 0x80299658: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8029ACD4(rdram, ctx);
        goto after_94;
    // 0x80299658: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_94:
    // 0x8029965C: lhu         $v0, 0x48($sp)
    ctx->r2 = MEM_HU(ctx->r29, 0X48);
    // 0x80299660: addiu       $at, $zero, 0x3C
    ctx->r1 = ADD32(0, 0X3C);
    // 0x80299664: div         $zero, $v0, $at
    lo = S32(S64(S32(ctx->r2)) / S64(S32(ctx->r1))); hi = S32(S64(S32(ctx->r2)) % S64(S32(ctx->r1)));
    // 0x80299668: lui         $a0, 0x8010
    ctx->r4 = S32(0X8010 << 16);
    // 0x8029966C: addiu       $a0, $a0, 0x6B3C
    ctx->r4 = ADD32(ctx->r4, 0X6B3C);
    // 0x80299670: sw          $v0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r2;
    // 0x80299674: mflo        $a1
    ctx->r5 = lo;
    // 0x80299678: addiu       $a1, $a1, 0xC5
    ctx->r5 = ADD32(ctx->r5, 0XC5);
    // 0x8029967C: andi        $t9, $a1, 0xFFFF
    ctx->r25 = ctx->r5 & 0XFFFF;
    // 0x80299680: jal         0x8007AAF8
    // 0x80299684: or          $a1, $t9, $zero
    ctx->r5 = ctx->r25 | 0;
    func_8007AAF8(rdram, ctx);
        goto after_95;
    // 0x80299684: or          $a1, $t9, $zero
    ctx->r5 = ctx->r25 | 0;
    after_95:
    // 0x80299688: lui         $a0, 0x8010
    ctx->r4 = S32(0X8010 << 16);
    // 0x8029968C: addiu       $a0, $a0, 0x6B3C
    ctx->r4 = ADD32(ctx->r4, 0X6B3C);
    // 0x80299690: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    // 0x80299694: jal         0x8002135C
    // 0x80299698: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8002135C(rdram, ctx);
        goto after_96;
    // 0x80299698: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_96:
    // 0x8029969C: lh          $a1, 0x26($sp)
    ctx->r5 = MEM_H(ctx->r29, 0X26);
    // 0x802996A0: addiu       $a0, $zero, 0x7
    ctx->r4 = ADD32(0, 0X7);
    // 0x802996A4: jal         0x8029ACD4
    // 0x802996A8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8029ACD4(rdram, ctx);
        goto after_97;
    // 0x802996A8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_97:
    // 0x802996AC: lui         $a0, 0x8010
    ctx->r4 = S32(0X8010 << 16);
    // 0x802996B0: addiu       $a0, $a0, 0x6B78
    ctx->r4 = ADD32(ctx->r4, 0X6B78);
    // 0x802996B4: jal         0x8007AAF8
    // 0x802996B8: addiu       $a1, $zero, 0xCF
    ctx->r5 = ADD32(0, 0XCF);
    func_8007AAF8(rdram, ctx);
        goto after_98;
    // 0x802996B8: addiu       $a1, $zero, 0xCF
    ctx->r5 = ADD32(0, 0XCF);
    after_98:
    // 0x802996BC: lui         $a0, 0x8010
    ctx->r4 = S32(0X8010 << 16);
    // 0x802996C0: addiu       $a0, $a0, 0x6B78
    ctx->r4 = ADD32(ctx->r4, 0X6B78);
    // 0x802996C4: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    // 0x802996C8: jal         0x8002135C
    // 0x802996CC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8002135C(rdram, ctx);
        goto after_99;
    // 0x802996CC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_99:
    // 0x802996D0: lw          $t5, 0x2C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X2C);
    // 0x802996D4: addiu       $t4, $zero, 0x10
    ctx->r12 = ADD32(0, 0X10);
    // 0x802996D8: subu        $a1, $t4, $t5
    ctx->r5 = SUB32(ctx->r12, ctx->r13);
    // 0x802996DC: sll         $t6, $a1, 16
    ctx->r14 = S32(ctx->r5 << 16);
    // 0x802996E0: sra         $a1, $t6, 16
    ctx->r5 = S32(SIGNED(ctx->r14) >> 16);
    // 0x802996E4: addiu       $a0, $zero, 0x8
    ctx->r4 = ADD32(0, 0X8);
    // 0x802996E8: jal         0x8029ACD4
    // 0x802996EC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8029ACD4(rdram, ctx);
        goto after_100;
    // 0x802996EC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_100:
    // 0x802996F0: lw          $v0, 0x20($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X20);
    // 0x802996F4: addiu       $at, $zero, 0x3C
    ctx->r1 = ADD32(0, 0X3C);
    // 0x802996F8: div         $zero, $v0, $at
    lo = S32(S64(S32(ctx->r2)) / S64(S32(ctx->r1))); hi = S32(S64(S32(ctx->r2)) % S64(S32(ctx->r1)));
    // 0x802996FC: addiu       $at, $zero, 0xA
    ctx->r1 = ADD32(0, 0XA);
    // 0x80299700: lui         $a0, 0x8010
    ctx->r4 = S32(0X8010 << 16);
    // 0x80299704: addiu       $a0, $a0, 0x6BB4
    ctx->r4 = ADD32(ctx->r4, 0X6BB4);
    // 0x80299708: mfhi        $v0
    ctx->r2 = hi;
    // 0x8029970C: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
    // 0x80299710: nop

    // 0x80299714: div         $zero, $v0, $at
    lo = S32(S64(S32(ctx->r2)) / S64(S32(ctx->r1))); hi = S32(S64(S32(ctx->r2)) % S64(S32(ctx->r1)));
    // 0x80299718: mflo        $a1
    ctx->r5 = lo;
    // 0x8029971C: addiu       $a1, $a1, 0xC5
    ctx->r5 = ADD32(ctx->r5, 0XC5);
    // 0x80299720: andi        $t9, $a1, 0xFFFF
    ctx->r25 = ctx->r5 & 0XFFFF;
    // 0x80299724: jal         0x8007AAF8
    // 0x80299728: or          $a1, $t9, $zero
    ctx->r5 = ctx->r25 | 0;
    func_8007AAF8(rdram, ctx);
        goto after_101;
    // 0x80299728: or          $a1, $t9, $zero
    ctx->r5 = ctx->r25 | 0;
    after_101:
    // 0x8029972C: lui         $a0, 0x8010
    ctx->r4 = S32(0X8010 << 16);
    // 0x80299730: addiu       $a0, $a0, 0x6BB4
    ctx->r4 = ADD32(ctx->r4, 0X6BB4);
    // 0x80299734: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    // 0x80299738: jal         0x8002135C
    // 0x8029973C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8002135C(rdram, ctx);
        goto after_102;
    // 0x8029973C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_102:
    // 0x80299740: lw          $t4, 0x2C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X2C);
    // 0x80299744: addiu       $t5, $zero, 0x18
    ctx->r13 = ADD32(0, 0X18);
    // 0x80299748: subu        $a1, $t5, $t4
    ctx->r5 = SUB32(ctx->r13, ctx->r12);
    // 0x8029974C: sll         $t6, $a1, 16
    ctx->r14 = S32(ctx->r5 << 16);
    // 0x80299750: sra         $a1, $t6, 16
    ctx->r5 = S32(SIGNED(ctx->r14) >> 16);
    // 0x80299754: addiu       $a0, $zero, 0x9
    ctx->r4 = ADD32(0, 0X9);
    // 0x80299758: jal         0x8029ACD4
    // 0x8029975C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8029ACD4(rdram, ctx);
        goto after_103;
    // 0x8029975C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_103:
    // 0x80299760: lw          $a1, 0x24($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X24);
    // 0x80299764: addiu       $at, $zero, 0xA
    ctx->r1 = ADD32(0, 0XA);
    // 0x80299768: div         $zero, $a1, $at
    lo = S32(S64(S32(ctx->r5)) / S64(S32(ctx->r1))); hi = S32(S64(S32(ctx->r5)) % S64(S32(ctx->r1)));
    // 0x8029976C: lui         $a0, 0x8010
    ctx->r4 = S32(0X8010 << 16);
    // 0x80299770: addiu       $a0, $a0, 0x6BF0
    ctx->r4 = ADD32(ctx->r4, 0X6BF0);
    // 0x80299774: mfhi        $t8
    ctx->r24 = hi;
    // 0x80299778: addiu       $a1, $t8, 0xC5
    ctx->r5 = ADD32(ctx->r24, 0XC5);
    // 0x8029977C: andi        $t9, $a1, 0xFFFF
    ctx->r25 = ctx->r5 & 0XFFFF;
    // 0x80299780: jal         0x8007AAF8
    // 0x80299784: or          $a1, $t9, $zero
    ctx->r5 = ctx->r25 | 0;
    func_8007AAF8(rdram, ctx);
        goto after_104;
    // 0x80299784: or          $a1, $t9, $zero
    ctx->r5 = ctx->r25 | 0;
    after_104:
    // 0x80299788: lui         $a0, 0x8010
    ctx->r4 = S32(0X8010 << 16);
    // 0x8029978C: addiu       $a0, $a0, 0x6BF0
    ctx->r4 = ADD32(ctx->r4, 0X6BF0);
    // 0x80299790: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    // 0x80299794: jal         0x8002135C
    // 0x80299798: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8002135C(rdram, ctx);
        goto after_105;
    // 0x80299798: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_105:
    // 0x8029979C: lbu         $v0, 0x4D($sp)
    ctx->r2 = MEM_BU(ctx->r29, 0X4D);
    // 0x802997A0: lui         $a0, 0x8010
    ctx->r4 = S32(0X8010 << 16);
    // 0x802997A4: slti        $at, $v0, 0x10
    ctx->r1 = SIGNED(ctx->r2) < 0X10 ? 1 : 0;
    // 0x802997A8: beq         $at, $zero, L_802997BC
    if (ctx->r1 == 0) {
        // 0x802997AC: addiu       $a1, $v0, 0x35
        ctx->r5 = ADD32(ctx->r2, 0X35);
            goto L_802997BC;
    }
    // 0x802997AC: addiu       $a1, $v0, 0x35
    ctx->r5 = ADD32(ctx->r2, 0X35);
    // 0x802997B0: andi        $t5, $a1, 0xFFFF
    ctx->r13 = ctx->r5 & 0XFFFF;
    // 0x802997B4: b           L_802997E0
    // 0x802997B8: or          $a1, $t5, $zero
    ctx->r5 = ctx->r13 | 0;
        goto L_802997E0;
    // 0x802997B8: or          $a1, $t5, $zero
    ctx->r5 = ctx->r13 | 0;
L_802997BC:
    // 0x802997BC: slti        $at, $v0, 0x15
    ctx->r1 = SIGNED(ctx->r2) < 0X15 ? 1 : 0;
    // 0x802997C0: beq         $at, $zero, L_802997D8
    if (ctx->r1 == 0) {
        // 0x802997C4: addiu       $a1, $v0, 0x1EF
        ctx->r5 = ADD32(ctx->r2, 0X1EF);
            goto L_802997D8;
    }
    // 0x802997C4: addiu       $a1, $v0, 0x1EF
    ctx->r5 = ADD32(ctx->r2, 0X1EF);
    // 0x802997C8: addiu       $a1, $v0, 0x1DF
    ctx->r5 = ADD32(ctx->r2, 0X1DF);
    // 0x802997CC: andi        $t4, $a1, 0xFFFF
    ctx->r12 = ctx->r5 & 0XFFFF;
    // 0x802997D0: b           L_802997E0
    // 0x802997D4: or          $a1, $t4, $zero
    ctx->r5 = ctx->r12 | 0;
        goto L_802997E0;
    // 0x802997D4: or          $a1, $t4, $zero
    ctx->r5 = ctx->r12 | 0;
L_802997D8:
    // 0x802997D8: andi        $t6, $a1, 0xFFFF
    ctx->r14 = ctx->r5 & 0XFFFF;
    // 0x802997DC: or          $a1, $t6, $zero
    ctx->r5 = ctx->r14 | 0;
L_802997E0:
    // 0x802997E0: jal         0x8007AAF8
    // 0x802997E4: addiu       $a0, $a0, 0x6C2C
    ctx->r4 = ADD32(ctx->r4, 0X6C2C);
    func_8007AAF8(rdram, ctx);
        goto after_106;
    // 0x802997E4: addiu       $a0, $a0, 0x6C2C
    ctx->r4 = ADD32(ctx->r4, 0X6C2C);
    after_106:
    // 0x802997E8: lh          $a1, 0x2A($sp)
    ctx->r5 = MEM_H(ctx->r29, 0X2A);
    // 0x802997EC: addiu       $a0, $zero, 0xA
    ctx->r4 = ADD32(0, 0XA);
    // 0x802997F0: jal         0x8029ACD4
    // 0x802997F4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8029ACD4(rdram, ctx);
        goto after_107;
    // 0x802997F4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_107:
    // 0x802997F8: lui         $a0, 0x8010
    ctx->r4 = S32(0X8010 << 16);
    // 0x802997FC: addiu       $a0, $a0, 0x6C2C
    ctx->r4 = ADD32(ctx->r4, 0X6C2C);
    // 0x80299800: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    // 0x80299804: jal         0x8002135C
    // 0x80299808: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8002135C(rdram, ctx);
        goto after_108;
    // 0x80299808: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_108:
    // 0x8029980C: lbu         $v0, 0x47($sp)
    ctx->r2 = MEM_BU(ctx->r29, 0X47);
    // 0x80299810: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x80299814: slti        $at, $v0, 0xA
    ctx->r1 = SIGNED(ctx->r2) < 0XA ? 1 : 0;
    // 0x80299818: beq         $at, $zero, L_80299828
    if (ctx->r1 == 0) {
        // 0x8029981C: lui         $at, 0x8010
        ctx->r1 = S32(0X8010 << 16);
            goto L_80299828;
    }
    // 0x8029981C: lui         $at, 0x8010
    ctx->r1 = S32(0X8010 << 16);
    // 0x80299820: b           L_80299888
    // 0x80299824: sb          $t7, 0x6C6C($at)
    MEM_B(0X6C6C, ctx->r1) = ctx->r15;
        goto L_80299888;
    // 0x80299824: sb          $t7, 0x6C6C($at)
    MEM_B(0X6C6C, ctx->r1) = ctx->r15;
L_80299828:
    // 0x80299828: addiu       $at, $zero, 0xA
    ctx->r1 = ADD32(0, 0XA);
    // 0x8029982C: div         $zero, $v0, $at
    lo = S32(S64(S32(ctx->r2)) / S64(S32(ctx->r1))); hi = S32(S64(S32(ctx->r2)) % S64(S32(ctx->r1)));
    // 0x80299830: lui         $a0, 0x8010
    ctx->r4 = S32(0X8010 << 16);
    // 0x80299834: addiu       $a0, $a0, 0x6C68
    ctx->r4 = ADD32(ctx->r4, 0X6C68);
    // 0x80299838: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
    // 0x8029983C: mflo        $a1
    ctx->r5 = lo;
    // 0x80299840: addiu       $a1, $a1, 0x61
    ctx->r5 = ADD32(ctx->r5, 0X61);
    // 0x80299844: andi        $t8, $a1, 0xFFFF
    ctx->r24 = ctx->r5 & 0XFFFF;
    // 0x80299848: jal         0x8007AAF8
    // 0x8029984C: or          $a1, $t8, $zero
    ctx->r5 = ctx->r24 | 0;
    func_8007AAF8(rdram, ctx);
        goto after_109;
    // 0x8029984C: or          $a1, $t8, $zero
    ctx->r5 = ctx->r24 | 0;
    after_109:
    // 0x80299850: lw          $a1, 0x2C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X2C);
    // 0x80299854: addiu       $a0, $zero, 0xB
    ctx->r4 = ADD32(0, 0XB);
    // 0x80299858: addiu       $a1, $a1, -0x8
    ctx->r5 = ADD32(ctx->r5, -0X8);
    // 0x8029985C: sll         $t9, $a1, 16
    ctx->r25 = S32(ctx->r5 << 16);
    // 0x80299860: sra         $a1, $t9, 16
    ctx->r5 = S32(SIGNED(ctx->r25) >> 16);
    // 0x80299864: jal         0x8029ACD4
    // 0x80299868: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8029ACD4(rdram, ctx);
        goto after_110;
    // 0x80299868: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_110:
    // 0x8029986C: lui         $a0, 0x8010
    ctx->r4 = S32(0X8010 << 16);
    // 0x80299870: addiu       $a0, $a0, 0x6C68
    ctx->r4 = ADD32(ctx->r4, 0X6C68);
    // 0x80299874: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    // 0x80299878: jal         0x8002135C
    // 0x8029987C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8002135C(rdram, ctx);
        goto after_111;
    // 0x8029987C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_111:
    // 0x80299880: lw          $v0, 0x24($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X24);
    // 0x80299884: nop

L_80299888:
    // 0x80299888: addiu       $at, $zero, 0xA
    ctx->r1 = ADD32(0, 0XA);
    // 0x8029988C: div         $zero, $v0, $at
    lo = S32(S64(S32(ctx->r2)) / S64(S32(ctx->r1))); hi = S32(S64(S32(ctx->r2)) % S64(S32(ctx->r1)));
    // 0x80299890: lui         $a0, 0x8010
    ctx->r4 = S32(0X8010 << 16);
    // 0x80299894: addiu       $a0, $a0, 0x6CA4
    ctx->r4 = ADD32(ctx->r4, 0X6CA4);
    // 0x80299898: mfhi        $a1
    ctx->r5 = hi;
    // 0x8029989C: addiu       $a1, $a1, 0x61
    ctx->r5 = ADD32(ctx->r5, 0X61);
    // 0x802998A0: andi        $t4, $a1, 0xFFFF
    ctx->r12 = ctx->r5 & 0XFFFF;
    // 0x802998A4: jal         0x8007AAF8
    // 0x802998A8: or          $a1, $t4, $zero
    ctx->r5 = ctx->r12 | 0;
    func_8007AAF8(rdram, ctx);
        goto after_112;
    // 0x802998A8: or          $a1, $t4, $zero
    ctx->r5 = ctx->r12 | 0;
    after_112:
    // 0x802998AC: lh          $a1, 0x2A($sp)
    ctx->r5 = MEM_H(ctx->r29, 0X2A);
    // 0x802998B0: addiu       $a0, $zero, 0xC
    ctx->r4 = ADD32(0, 0XC);
    // 0x802998B4: jal         0x8029ACD4
    // 0x802998B8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8029ACD4(rdram, ctx);
        goto after_113;
    // 0x802998B8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_113:
    // 0x802998BC: lui         $a0, 0x8010
    ctx->r4 = S32(0X8010 << 16);
    // 0x802998C0: addiu       $a0, $a0, 0x6CA4
    ctx->r4 = ADD32(ctx->r4, 0X6CA4);
    // 0x802998C4: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    // 0x802998C8: jal         0x8002135C
    // 0x802998CC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8002135C(rdram, ctx);
        goto after_114;
    // 0x802998CC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_114:
    // 0x802998D0: lw          $t6, 0x30($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X30);
    // 0x802998D4: lw          $a3, 0x2C($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X2C);
    // 0x802998D8: lw          $a1, 0xC8($t6)
    ctx->r5 = MEM_W(ctx->r14, 0XC8);
    // 0x802998DC: lhu         $t7, 0x1A($t6)
    ctx->r15 = MEM_HU(ctx->r14, 0X1A);
    // 0x802998E0: addiu       $a3, $a3, 0xA8
    ctx->r7 = ADD32(ctx->r7, 0XA8);
    // 0x802998E4: addu        $t8, $a1, $t7
    ctx->r24 = ADD32(ctx->r5, ctx->r15);
    // 0x802998E8: lbu         $a2, 0x308($t8)
    ctx->r6 = MEM_BU(ctx->r24, 0X308);
    // 0x802998EC: sll         $t9, $a3, 16
    ctx->r25 = S32(ctx->r7 << 16);
    // 0x802998F0: lui         $a0, 0x8011
    ctx->r4 = S32(0X8011 << 16);
    // 0x802998F4: addiu       $t4, $zero, 0xCB
    ctx->r12 = ADD32(0, 0XCB);
    // 0x802998F8: sw          $t4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r12;
    // 0x802998FC: addiu       $a0, $a0, -0x3888
    ctx->r4 = ADD32(ctx->r4, -0X3888);
    // 0x80299900: jal         0x8006ED60
    // 0x80299904: sra         $a3, $t9, 16
    ctx->r7 = S32(SIGNED(ctx->r25) >> 16);
    func_8006ED60(rdram, ctx);
        goto after_115;
    // 0x80299904: sra         $a3, $t9, 16
    ctx->r7 = S32(SIGNED(ctx->r25) >> 16);
    after_115:
    // 0x80299908: lw          $t6, 0x30($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X30);
    // 0x8029990C: lui         $a0, 0x8010
    ctx->r4 = S32(0X8010 << 16);
    // 0x80299910: lw          $v0, 0xC8($t6)
    ctx->r2 = MEM_W(ctx->r14, 0XC8);
    // 0x80299914: lhu         $t7, 0x1A($t6)
    ctx->r15 = MEM_HU(ctx->r14, 0X1A);
    // 0x80299918: lhu         $a1, 0x6($v0)
    ctx->r5 = MEM_HU(ctx->r2, 0X6);
    // 0x8029991C: addu        $t8, $v0, $t7
    ctx->r24 = ADD32(ctx->r2, ctx->r15);
    // 0x80299920: lbu         $a2, 0x308($t8)
    ctx->r6 = MEM_BU(ctx->r24, 0X308);
    // 0x80299924: addiu       $a0, $a0, 0x70DC
    ctx->r4 = ADD32(ctx->r4, 0X70DC);
    // 0x80299928: jal         0x80039440
    // 0x8029992C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    func_80039440(rdram, ctx);
        goto after_116;
    // 0x8029992C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_116:
    // 0x80299930: lui         $v1, 0x8010
    ctx->r3 = S32(0X8010 << 16);
    // 0x80299934: addiu       $v1, $v1, 0x4890
    ctx->r3 = ADD32(ctx->r3, 0X4890);
    // 0x80299938: lbu         $t9, 0x2855($v1)
    ctx->r25 = MEM_BU(ctx->r3, 0X2855);
    // 0x8029993C: lbu         $t4, 0x2854($v1)
    ctx->r12 = MEM_BU(ctx->r3, 0X2854);
    // 0x80299940: andi        $t5, $t9, 0xFFBF
    ctx->r13 = ctx->r25 & 0XFFBF;
    // 0x80299944: lw          $t8, 0x2C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X2C);
    // 0x80299948: andi        $t6, $t4, 0xFF01
    ctx->r14 = ctx->r12 & 0XFF01;
    // 0x8029994C: sb          $t5, 0x2855($v1)
    MEM_B(0X2855, ctx->r3) = ctx->r13;
    // 0x80299950: lui         $t4, 0x802C
    ctx->r12 = S32(0X802C << 16);
    // 0x80299954: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80299958: sb          $t6, 0x2854($v1)
    MEM_B(0X2854, ctx->r3) = ctx->r14;
    // 0x8029995C: addiu       $t7, $zero, 0xA
    ctx->r15 = ADD32(0, 0XA);
    // 0x80299960: addiu       $t5, $zero, 0xC4
    ctx->r13 = ADD32(0, 0XC4);
    // 0x80299964: addiu       $t4, $t4, -0x3580
    ctx->r12 = ADD32(ctx->r12, -0X3580);
    // 0x80299968: addiu       $t9, $t8, 0x2C
    ctx->r25 = ADD32(ctx->r24, 0X2C);
    // 0x8029996C: sb          $v0, 0x2850($v1)
    MEM_B(0X2850, ctx->r3) = ctx->r2;
    // 0x80299970: sb          $t7, 0x2851($v1)
    MEM_B(0X2851, ctx->r3) = ctx->r15;
    // 0x80299974: sh          $t9, 0x2864($v1)
    MEM_H(0X2864, ctx->r3) = ctx->r25;
    // 0x80299978: sh          $t5, 0x2868($v1)
    MEM_H(0X2868, ctx->r3) = ctx->r13;
    // 0x8029997C: sw          $t4, 0x287C($v1)
    MEM_W(0X287C, ctx->r3) = ctx->r12;
    // 0x80299980: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x80299984: lui         $t6, 0x8011
    ctx->r14 = S32(0X8011 << 16);
    // 0x80299988: lw          $t6, -0x2F98($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X2F98);
    // 0x8029998C: sb          $zero, 0x39DD($at)
    MEM_B(0X39DD, ctx->r1) = 0;
    // 0x80299990: lui         $at, 0x3
    ctx->r1 = S32(0X3 << 16);
    // 0x80299994: addu        $at, $at, $t6
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x80299998: sb          $v0, -0x32B3($at)
    MEM_B(-0X32B3, ctx->r1) = ctx->r2;
    // 0x8029999C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x802999A0: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
    // 0x802999A4: jr          $ra
    // 0x802999A8: nop

    return;
    // 0x802999A8: nop

;}
RECOMP_FUNC void func_802999AC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802999AC: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x802999B0: sb          $zero, 0x39B9($at)
    MEM_B(0X39B9, ctx->r1) = 0;
    // 0x802999B4: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x802999B8: addiu       $t6, $zero, 0x2
    ctx->r14 = ADD32(0, 0X2);
    // 0x802999BC: jr          $ra
    // 0x802999C0: sb          $t6, 0x38DF($at)
    MEM_B(0X38DF, ctx->r1) = ctx->r14;
    return;
    // 0x802999C0: sb          $t6, 0x38DF($at)
    MEM_B(0X38DF, ctx->r1) = ctx->r14;
;}
RECOMP_FUNC void func_802999C4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802999C4: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x802999C8: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x802999CC: lui         $s1, 0x802C
    ctx->r17 = S32(0X802C << 16);
    // 0x802999D0: addiu       $s1, $s1, 0x39B9
    ctx->r17 = ADD32(ctx->r17, 0X39B9);
    // 0x802999D4: lbu         $t6, 0x0($s1)
    ctx->r14 = MEM_BU(ctx->r17, 0X0);
    // 0x802999D8: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x802999DC: sltiu       $at, $t6, 0x8
    ctx->r1 = ctx->r14 < 0X8 ? 1 : 0;
    // 0x802999E0: beq         $at, $zero, L_80299DAC
    if (ctx->r1 == 0) {
        // 0x802999E4: sw          $s0, 0x14($sp)
        MEM_W(0X14, ctx->r29) = ctx->r16;
            goto L_80299DAC;
    }
    // 0x802999E4: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x802999E8: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x802999EC: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x802999F0: addu        $at, $at, $t6
    gpr jr_addend_802999FC = ctx->r14;
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x802999F4: lw          $t6, 0xA40($at)
    ctx->r14 = ADD32(ctx->r1, 0XA40);
    // 0x802999F8: nop

    // 0x802999FC: jr          $t6
    // 0x80299A00: nop

    switch (jr_addend_802999FC >> 2) {
        case 0: goto L_80299A04; break;
        case 1: goto L_80299A20; break;
        case 2: goto L_80299A88; break;
        case 3: goto L_80299AE4; break;
        case 4: goto L_80299BB4; break;
        case 5: goto L_80299D0C; break;
        case 6: goto L_80299D6C; break;
        case 7: goto L_80299DAC; break;
        default: switch_error(__func__, 0x802999FC, 0x802C0A40);
    }
    // 0x80299A00: nop

L_80299A04:
    // 0x80299A04: jal         0x80299DC0
    // 0x80299A08: nop

    func_80299DC0(rdram, ctx);
        goto after_0;
    // 0x80299A08: nop

    after_0:
    // 0x80299A0C: lbu         $t7, 0x0($s1)
    ctx->r15 = MEM_BU(ctx->r17, 0X0);
    // 0x80299A10: nop

    // 0x80299A14: addiu       $t8, $t7, 0x1
    ctx->r24 = ADD32(ctx->r15, 0X1);
    // 0x80299A18: b           L_80299DAC
    // 0x80299A1C: sb          $t8, 0x0($s1)
    MEM_B(0X0, ctx->r17) = ctx->r24;
        goto L_80299DAC;
    // 0x80299A1C: sb          $t8, 0x0($s1)
    MEM_B(0X0, ctx->r17) = ctx->r24;
L_80299A20:
    // 0x80299A20: jal         0x80299DE8
    // 0x80299A24: nop

    func_80299DE8(rdram, ctx);
        goto after_1;
    // 0x80299A24: nop

    after_1:
    // 0x80299A28: lui         $s0, 0x802C
    ctx->r16 = S32(0X802C << 16);
    // 0x80299A2C: addiu       $s0, $s0, 0x39B4
    ctx->r16 = ADD32(ctx->r16, 0X39B4);
    // 0x80299A30: lbu         $t9, 0x0($s0)
    ctx->r25 = MEM_BU(ctx->r16, 0X0);
    // 0x80299A34: lui         $t0, 0x8012
    ctx->r8 = S32(0X8012 << 16);
    // 0x80299A38: bne         $t9, $zero, L_80299DB0
    if (ctx->r25 != 0) {
        // 0x80299A3C: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_80299DB0;
    }
    // 0x80299A3C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80299A40: lbu         $t0, 0xB65($t0)
    ctx->r8 = MEM_BU(ctx->r8, 0XB65);
    // 0x80299A44: nop

    // 0x80299A48: beq         $t0, $zero, L_80299A64
    if (ctx->r8 == 0) {
        // 0x80299A4C: nop
    
            goto L_80299A64;
    }
    // 0x80299A4C: nop

    // 0x80299A50: jal         0x800621C8
    // 0x80299A54: nop

    func_800621C8(rdram, ctx);
        goto after_2;
    // 0x80299A54: nop

    after_2:
    // 0x80299A58: addiu       $t1, $zero, 0x50
    ctx->r9 = ADD32(0, 0X50);
    // 0x80299A5C: b           L_80299A74
    // 0x80299A60: sb          $t1, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r9;
        goto L_80299A74;
    // 0x80299A60: sb          $t1, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r9;
L_80299A64:
    // 0x80299A64: jal         0x80062068
    // 0x80299A68: nop

    func_80062068(rdram, ctx);
        goto after_3;
    // 0x80299A68: nop

    after_3:
    // 0x80299A6C: addiu       $t2, $zero, 0x46
    ctx->r10 = ADD32(0, 0X46);
    // 0x80299A70: sb          $t2, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r10;
L_80299A74:
    // 0x80299A74: lbu         $t3, 0x0($s1)
    ctx->r11 = MEM_BU(ctx->r17, 0X0);
    // 0x80299A78: nop

    // 0x80299A7C: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x80299A80: b           L_80299DAC
    // 0x80299A84: sb          $t4, 0x0($s1)
    MEM_B(0X0, ctx->r17) = ctx->r12;
        goto L_80299DAC;
    // 0x80299A84: sb          $t4, 0x0($s1)
    MEM_B(0X0, ctx->r17) = ctx->r12;
L_80299A88:
    // 0x80299A88: lui         $s0, 0x802C
    ctx->r16 = S32(0X802C << 16);
    // 0x80299A8C: addiu       $s0, $s0, 0x39B4
    ctx->r16 = ADD32(ctx->r16, 0X39B4);
    // 0x80299A90: lbu         $t5, 0x0($s0)
    ctx->r13 = MEM_BU(ctx->r16, 0X0);
    // 0x80299A94: nop

    // 0x80299A98: addiu       $t6, $t5, -0x1
    ctx->r14 = ADD32(ctx->r13, -0X1);
    // 0x80299A9C: andi        $t7, $t6, 0xFF
    ctx->r15 = ctx->r14 & 0XFF;
    // 0x80299AA0: bne         $t7, $zero, L_80299DAC
    if (ctx->r15 != 0) {
        // 0x80299AA4: sb          $t6, 0x0($s0)
        MEM_B(0X0, ctx->r16) = ctx->r14;
            goto L_80299DAC;
    }
    // 0x80299AA4: sb          $t6, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r14;
    // 0x80299AA8: jal         0x8029A1E4
    // 0x80299AAC: nop

    func_8029A1E4(rdram, ctx);
        goto after_4;
    // 0x80299AAC: nop

    after_4:
    // 0x80299AB0: lui         $t8, 0x8012
    ctx->r24 = S32(0X8012 << 16);
    // 0x80299AB4: lhu         $t8, 0xB78($t8)
    ctx->r24 = MEM_HU(ctx->r24, 0XB78);
    // 0x80299AB8: addiu       $at, $zero, 0x9
    ctx->r1 = ADD32(0, 0X9);
    // 0x80299ABC: bne         $t8, $at, L_80299ACC
    if (ctx->r24 != ctx->r1) {
        // 0x80299AC0: nop
    
            goto L_80299ACC;
    }
    // 0x80299AC0: nop

    // 0x80299AC4: jal         0x8029A6A4
    // 0x80299AC8: nop

    func_8029A6A4(rdram, ctx);
        goto after_5;
    // 0x80299AC8: nop

    after_5:
L_80299ACC:
    // 0x80299ACC: lbu         $t0, 0x0($s1)
    ctx->r8 = MEM_BU(ctx->r17, 0X0);
    // 0x80299AD0: addiu       $t9, $zero, 0x10
    ctx->r25 = ADD32(0, 0X10);
    // 0x80299AD4: addiu       $t1, $t0, 0x1
    ctx->r9 = ADD32(ctx->r8, 0X1);
    // 0x80299AD8: sb          $t9, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r25;
    // 0x80299ADC: b           L_80299DAC
    // 0x80299AE0: sb          $t1, 0x0($s1)
    MEM_B(0X0, ctx->r17) = ctx->r9;
        goto L_80299DAC;
    // 0x80299AE0: sb          $t1, 0x0($s1)
    MEM_B(0X0, ctx->r17) = ctx->r9;
L_80299AE4:
    // 0x80299AE4: jal         0x8029A038
    // 0x80299AE8: nop

    func_8029A038(rdram, ctx);
        goto after_6;
    // 0x80299AE8: nop

    after_6:
    // 0x80299AEC: lui         $s0, 0x802C
    ctx->r16 = S32(0X802C << 16);
    // 0x80299AF0: addiu       $s0, $s0, 0x39B4
    ctx->r16 = ADD32(ctx->r16, 0X39B4);
    // 0x80299AF4: lbu         $t2, 0x0($s0)
    ctx->r10 = MEM_BU(ctx->r16, 0X0);
    // 0x80299AF8: addiu       $t5, $zero, 0x5
    ctx->r13 = ADD32(0, 0X5);
    // 0x80299AFC: bne         $t2, $zero, L_80299DAC
    if (ctx->r10 != 0) {
        // 0x80299B00: lui         $t6, 0x802C
        ctx->r14 = S32(0X802C << 16);
            goto L_80299DAC;
    }
    // 0x80299B00: lui         $t6, 0x802C
    ctx->r14 = S32(0X802C << 16);
    // 0x80299B04: lbu         $t3, 0x0($s1)
    ctx->r11 = MEM_BU(ctx->r17, 0X0);
    // 0x80299B08: sb          $t5, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r13;
    // 0x80299B0C: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x80299B10: sb          $t4, 0x0($s1)
    MEM_B(0X0, ctx->r17) = ctx->r12;
    // 0x80299B14: lbu         $t6, 0x39B1($t6)
    ctx->r14 = MEM_BU(ctx->r14, 0X39B1);
    // 0x80299B18: lui         $v0, 0x8010
    ctx->r2 = S32(0X8010 << 16);
    // 0x80299B1C: bne         $t6, $zero, L_80299B70
    if (ctx->r14 != 0) {
        // 0x80299B20: addiu       $v0, $v0, 0x4890
        ctx->r2 = ADD32(ctx->r2, 0X4890);
            goto L_80299B70;
    }
    // 0x80299B20: addiu       $v0, $v0, 0x4890
    ctx->r2 = ADD32(ctx->r2, 0X4890);
    // 0x80299B24: lui         $v0, 0x8010
    ctx->r2 = S32(0X8010 << 16);
    // 0x80299B28: addiu       $v0, $v0, 0x4890
    ctx->r2 = ADD32(ctx->r2, 0X4890);
    // 0x80299B2C: lbu         $t7, 0x214C($v0)
    ctx->r15 = MEM_BU(ctx->r2, 0X214C);
    // 0x80299B30: lbu         $t0, 0x2188($v0)
    ctx->r8 = MEM_BU(ctx->r2, 0X2188);
    // 0x80299B34: lbu         $t3, 0x21C4($v0)
    ctx->r11 = MEM_BU(ctx->r2, 0X21C4);
    // 0x80299B38: lbu         $t6, 0x2200($v0)
    ctx->r14 = MEM_BU(ctx->r2, 0X2200);
    // 0x80299B3C: andi        $t8, $t7, 0xFF01
    ctx->r24 = ctx->r15 & 0XFF01;
    // 0x80299B40: ori         $t9, $t8, 0x4
    ctx->r25 = ctx->r24 | 0X4;
    // 0x80299B44: andi        $t1, $t0, 0xFF01
    ctx->r9 = ctx->r8 & 0XFF01;
    // 0x80299B48: andi        $t4, $t3, 0xFF01
    ctx->r12 = ctx->r11 & 0XFF01;
    // 0x80299B4C: andi        $t7, $t6, 0xFF01
    ctx->r15 = ctx->r14 & 0XFF01;
    // 0x80299B50: ori         $t2, $t1, 0x4
    ctx->r10 = ctx->r9 | 0X4;
    // 0x80299B54: ori         $t5, $t4, 0x4
    ctx->r13 = ctx->r12 | 0X4;
    // 0x80299B58: ori         $t8, $t7, 0x4
    ctx->r24 = ctx->r15 | 0X4;
    // 0x80299B5C: sb          $t9, 0x214C($v0)
    MEM_B(0X214C, ctx->r2) = ctx->r25;
    // 0x80299B60: sb          $t2, 0x2188($v0)
    MEM_B(0X2188, ctx->r2) = ctx->r10;
    // 0x80299B64: sb          $t5, 0x21C4($v0)
    MEM_B(0X21C4, ctx->r2) = ctx->r13;
    // 0x80299B68: b           L_80299DAC
    // 0x80299B6C: sb          $t8, 0x2200($v0)
    MEM_B(0X2200, ctx->r2) = ctx->r24;
        goto L_80299DAC;
    // 0x80299B6C: sb          $t8, 0x2200($v0)
    MEM_B(0X2200, ctx->r2) = ctx->r24;
L_80299B70:
    // 0x80299B70: lbu         $t9, 0x2368($v0)
    ctx->r25 = MEM_BU(ctx->r2, 0X2368);
    // 0x80299B74: lbu         $t2, 0x23A4($v0)
    ctx->r10 = MEM_BU(ctx->r2, 0X23A4);
    // 0x80299B78: lbu         $t5, 0x23E0($v0)
    ctx->r13 = MEM_BU(ctx->r2, 0X23E0);
    // 0x80299B7C: lbu         $t8, 0x241C($v0)
    ctx->r24 = MEM_BU(ctx->r2, 0X241C);
    // 0x80299B80: andi        $t0, $t9, 0xFF01
    ctx->r8 = ctx->r25 & 0XFF01;
    // 0x80299B84: ori         $t1, $t0, 0x4
    ctx->r9 = ctx->r8 | 0X4;
    // 0x80299B88: andi        $t3, $t2, 0xFF01
    ctx->r11 = ctx->r10 & 0XFF01;
    // 0x80299B8C: andi        $t6, $t5, 0xFF01
    ctx->r14 = ctx->r13 & 0XFF01;
    // 0x80299B90: andi        $t9, $t8, 0xFF01
    ctx->r25 = ctx->r24 & 0XFF01;
    // 0x80299B94: ori         $t4, $t3, 0x4
    ctx->r12 = ctx->r11 | 0X4;
    // 0x80299B98: ori         $t7, $t6, 0x4
    ctx->r15 = ctx->r14 | 0X4;
    // 0x80299B9C: ori         $t0, $t9, 0x4
    ctx->r8 = ctx->r25 | 0X4;
    // 0x80299BA0: sb          $t1, 0x2368($v0)
    MEM_B(0X2368, ctx->r2) = ctx->r9;
    // 0x80299BA4: sb          $t4, 0x23A4($v0)
    MEM_B(0X23A4, ctx->r2) = ctx->r12;
    // 0x80299BA8: sb          $t7, 0x23E0($v0)
    MEM_B(0X23E0, ctx->r2) = ctx->r15;
    // 0x80299BAC: b           L_80299DAC
    // 0x80299BB0: sb          $t0, 0x241C($v0)
    MEM_B(0X241C, ctx->r2) = ctx->r8;
        goto L_80299DAC;
    // 0x80299BB0: sb          $t0, 0x241C($v0)
    MEM_B(0X241C, ctx->r2) = ctx->r8;
L_80299BB4:
    // 0x80299BB4: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x80299BB8: lwc1        $f12, 0xA60($at)
    ctx->f12.u32l = MEM_W(ctx->r1, 0XA60);
    // 0x80299BBC: jal         0x8029AB94
    // 0x80299BC0: nop

    func_8029AB94(rdram, ctx);
        goto after_7;
    // 0x80299BC0: nop

    after_7:
    // 0x80299BC4: lui         $s0, 0x802C
    ctx->r16 = S32(0X802C << 16);
    // 0x80299BC8: addiu       $s0, $s0, 0x39B4
    ctx->r16 = ADD32(ctx->r16, 0X39B4);
    // 0x80299BCC: lbu         $t1, 0x0($s0)
    ctx->r9 = MEM_BU(ctx->r16, 0X0);
    // 0x80299BD0: lui         $t4, 0x802C
    ctx->r12 = S32(0X802C << 16);
    // 0x80299BD4: addiu       $t2, $t1, -0x1
    ctx->r10 = ADD32(ctx->r9, -0X1);
    // 0x80299BD8: andi        $t3, $t2, 0xFF
    ctx->r11 = ctx->r10 & 0XFF;
    // 0x80299BDC: bne         $t3, $zero, L_80299DAC
    if (ctx->r11 != 0) {
        // 0x80299BE0: sb          $t2, 0x0($s0)
        MEM_B(0X0, ctx->r16) = ctx->r10;
            goto L_80299DAC;
    }
    // 0x80299BE0: sb          $t2, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r10;
    // 0x80299BE4: lbu         $t4, 0x39B1($t4)
    ctx->r12 = MEM_BU(ctx->r12, 0X39B1);
    // 0x80299BE8: lui         $a0, 0x802C
    ctx->r4 = S32(0X802C << 16);
    // 0x80299BEC: bne         $t4, $zero, L_80299C7C
    if (ctx->r12 != 0) {
        // 0x80299BF0: addiu       $a1, $zero, 0x9
        ctx->r5 = ADD32(0, 0X9);
            goto L_80299C7C;
    }
    // 0x80299BF0: addiu       $a1, $zero, 0x9
    ctx->r5 = ADD32(0, 0X9);
    // 0x80299BF4: lui         $a0, 0x802C
    ctx->r4 = S32(0X802C << 16);
    // 0x80299BF8: lbu         $a0, 0x39B8($a0)
    ctx->r4 = MEM_BU(ctx->r4, 0X39B8);
    // 0x80299BFC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80299C00: jal         0x8029A35C
    // 0x80299C04: addiu       $a2, $zero, 0x20
    ctx->r6 = ADD32(0, 0X20);
    func_8029A35C(rdram, ctx);
        goto after_8;
    // 0x80299C04: addiu       $a2, $zero, 0x20
    ctx->r6 = ADD32(0, 0X20);
    after_8:
    // 0x80299C08: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x80299C0C: lui         $v0, 0x8010
    ctx->r2 = S32(0X8010 << 16);
    // 0x80299C10: addiu       $v0, $v0, 0x4890
    ctx->r2 = ADD32(ctx->r2, 0X4890);
    // 0x80299C14: lui         $a0, 0x8010
    ctx->r4 = S32(0X8010 << 16);
    // 0x80299C18: addiu       $a0, $a0, 0x69D4
    ctx->r4 = ADD32(ctx->r4, 0X69D4);
    // 0x80299C1C: addiu       $a1, $zero, 0x12
    ctx->r5 = ADD32(0, 0X12);
    // 0x80299C20: addiu       $a2, $zero, 0xA2
    ctx->r6 = ADD32(0, 0XA2);
    // 0x80299C24: swc1        $f0, 0x2170($v0)
    MEM_W(0X2170, ctx->r2) = ctx->f0.u32l;
    // 0x80299C28: swc1        $f0, 0x21AC($v0)
    MEM_W(0X21AC, ctx->r2) = ctx->f0.u32l;
    // 0x80299C2C: swc1        $f0, 0x21E8($v0)
    MEM_W(0X21E8, ctx->r2) = ctx->f0.u32l;
    // 0x80299C30: jal         0x8002135C
    // 0x80299C34: swc1        $f0, 0x2224($v0)
    MEM_W(0X2224, ctx->r2) = ctx->f0.u32l;
    func_8002135C(rdram, ctx);
        goto after_9;
    // 0x80299C34: swc1        $f0, 0x2224($v0)
    MEM_W(0X2224, ctx->r2) = ctx->f0.u32l;
    after_9:
    // 0x80299C38: lui         $a0, 0x8010
    ctx->r4 = S32(0X8010 << 16);
    // 0x80299C3C: addiu       $a0, $a0, 0x6A10
    ctx->r4 = ADD32(ctx->r4, 0X6A10);
    // 0x80299C40: addiu       $a1, $zero, 0x12
    ctx->r5 = ADD32(0, 0X12);
    // 0x80299C44: jal         0x8002135C
    // 0x80299C48: addiu       $a2, $zero, 0xA1
    ctx->r6 = ADD32(0, 0XA1);
    func_8002135C(rdram, ctx);
        goto after_10;
    // 0x80299C48: addiu       $a2, $zero, 0xA1
    ctx->r6 = ADD32(0, 0XA1);
    after_10:
    // 0x80299C4C: lui         $a0, 0x8010
    ctx->r4 = S32(0X8010 << 16);
    // 0x80299C50: addiu       $a0, $a0, 0x6A4C
    ctx->r4 = ADD32(ctx->r4, 0X6A4C);
    // 0x80299C54: addiu       $a1, $zero, 0x12
    ctx->r5 = ADD32(0, 0X12);
    // 0x80299C58: jal         0x8002135C
    // 0x80299C5C: addiu       $a2, $zero, 0xA2
    ctx->r6 = ADD32(0, 0XA2);
    func_8002135C(rdram, ctx);
        goto after_11;
    // 0x80299C5C: addiu       $a2, $zero, 0xA2
    ctx->r6 = ADD32(0, 0XA2);
    after_11:
    // 0x80299C60: lui         $a0, 0x8010
    ctx->r4 = S32(0X8010 << 16);
    // 0x80299C64: addiu       $a0, $a0, 0x6A88
    ctx->r4 = ADD32(ctx->r4, 0X6A88);
    // 0x80299C68: addiu       $a1, $zero, 0x12
    ctx->r5 = ADD32(0, 0X12);
    // 0x80299C6C: jal         0x8002135C
    // 0x80299C70: addiu       $a2, $zero, 0xA1
    ctx->r6 = ADD32(0, 0XA1);
    func_8002135C(rdram, ctx);
        goto after_12;
    // 0x80299C70: addiu       $a2, $zero, 0xA1
    ctx->r6 = ADD32(0, 0XA1);
    after_12:
    // 0x80299C74: b           L_80299CF8
    // 0x80299C78: lbu         $t5, 0x0($s1)
    ctx->r13 = MEM_BU(ctx->r17, 0X0);
        goto L_80299CF8;
    // 0x80299C78: lbu         $t5, 0x0($s1)
    ctx->r13 = MEM_BU(ctx->r17, 0X0);
L_80299C7C:
    // 0x80299C7C: lbu         $a0, 0x39B8($a0)
    ctx->r4 = MEM_BU(ctx->r4, 0X39B8);
    // 0x80299C80: jal         0x8029A35C
    // 0x80299C84: addiu       $a2, $zero, 0xB8
    ctx->r6 = ADD32(0, 0XB8);
    func_8029A35C(rdram, ctx);
        goto after_13;
    // 0x80299C84: addiu       $a2, $zero, 0xB8
    ctx->r6 = ADD32(0, 0XB8);
    after_13:
    // 0x80299C88: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x80299C8C: lui         $v0, 0x8010
    ctx->r2 = S32(0X8010 << 16);
    // 0x80299C90: addiu       $v0, $v0, 0x4890
    ctx->r2 = ADD32(ctx->r2, 0X4890);
    // 0x80299C94: lui         $a0, 0x8010
    ctx->r4 = S32(0X8010 << 16);
    // 0x80299C98: addiu       $a0, $a0, 0x6BF0
    ctx->r4 = ADD32(ctx->r4, 0X6BF0);
    // 0x80299C9C: addiu       $a1, $zero, 0x12
    ctx->r5 = ADD32(0, 0X12);
    // 0x80299CA0: addiu       $a2, $zero, 0xA2
    ctx->r6 = ADD32(0, 0XA2);
    // 0x80299CA4: swc1        $f0, 0x238C($v0)
    MEM_W(0X238C, ctx->r2) = ctx->f0.u32l;
    // 0x80299CA8: swc1        $f0, 0x23C8($v0)
    MEM_W(0X23C8, ctx->r2) = ctx->f0.u32l;
    // 0x80299CAC: swc1        $f0, 0x2404($v0)
    MEM_W(0X2404, ctx->r2) = ctx->f0.u32l;
    // 0x80299CB0: jal         0x8002135C
    // 0x80299CB4: swc1        $f0, 0x2440($v0)
    MEM_W(0X2440, ctx->r2) = ctx->f0.u32l;
    func_8002135C(rdram, ctx);
        goto after_14;
    // 0x80299CB4: swc1        $f0, 0x2440($v0)
    MEM_W(0X2440, ctx->r2) = ctx->f0.u32l;
    after_14:
    // 0x80299CB8: lui         $a0, 0x8010
    ctx->r4 = S32(0X8010 << 16);
    // 0x80299CBC: addiu       $a0, $a0, 0x6C2C
    ctx->r4 = ADD32(ctx->r4, 0X6C2C);
    // 0x80299CC0: addiu       $a1, $zero, 0x12
    ctx->r5 = ADD32(0, 0X12);
    // 0x80299CC4: jal         0x8002135C
    // 0x80299CC8: addiu       $a2, $zero, 0xA1
    ctx->r6 = ADD32(0, 0XA1);
    func_8002135C(rdram, ctx);
        goto after_15;
    // 0x80299CC8: addiu       $a2, $zero, 0xA1
    ctx->r6 = ADD32(0, 0XA1);
    after_15:
    // 0x80299CCC: lui         $a0, 0x8010
    ctx->r4 = S32(0X8010 << 16);
    // 0x80299CD0: addiu       $a0, $a0, 0x6C68
    ctx->r4 = ADD32(ctx->r4, 0X6C68);
    // 0x80299CD4: addiu       $a1, $zero, 0x12
    ctx->r5 = ADD32(0, 0X12);
    // 0x80299CD8: jal         0x8002135C
    // 0x80299CDC: addiu       $a2, $zero, 0xA2
    ctx->r6 = ADD32(0, 0XA2);
    func_8002135C(rdram, ctx);
        goto after_16;
    // 0x80299CDC: addiu       $a2, $zero, 0xA2
    ctx->r6 = ADD32(0, 0XA2);
    after_16:
    // 0x80299CE0: lui         $a0, 0x8010
    ctx->r4 = S32(0X8010 << 16);
    // 0x80299CE4: addiu       $a0, $a0, 0x6CA4
    ctx->r4 = ADD32(ctx->r4, 0X6CA4);
    // 0x80299CE8: addiu       $a1, $zero, 0x12
    ctx->r5 = ADD32(0, 0X12);
    // 0x80299CEC: jal         0x8002135C
    // 0x80299CF0: addiu       $a2, $zero, 0xA1
    ctx->r6 = ADD32(0, 0XA1);
    func_8002135C(rdram, ctx);
        goto after_17;
    // 0x80299CF0: addiu       $a2, $zero, 0xA1
    ctx->r6 = ADD32(0, 0XA1);
    after_17:
    // 0x80299CF4: lbu         $t5, 0x0($s1)
    ctx->r13 = MEM_BU(ctx->r17, 0X0);
L_80299CF8:
    // 0x80299CF8: addiu       $t7, $zero, 0x5
    ctx->r15 = ADD32(0, 0X5);
    // 0x80299CFC: addiu       $t6, $t5, 0x1
    ctx->r14 = ADD32(ctx->r13, 0X1);
    // 0x80299D00: sb          $t6, 0x0($s1)
    MEM_B(0X0, ctx->r17) = ctx->r14;
    // 0x80299D04: b           L_80299DAC
    // 0x80299D08: sb          $t7, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r15;
        goto L_80299DAC;
    // 0x80299D08: sb          $t7, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r15;
L_80299D0C:
    // 0x80299D0C: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x80299D10: lwc1        $f12, 0xA64($at)
    ctx->f12.u32l = MEM_W(ctx->r1, 0XA64);
    // 0x80299D14: jal         0x8029AB94
    // 0x80299D18: nop

    func_8029AB94(rdram, ctx);
        goto after_18;
    // 0x80299D18: nop

    after_18:
    // 0x80299D1C: lui         $s0, 0x802C
    ctx->r16 = S32(0X802C << 16);
    // 0x80299D20: addiu       $s0, $s0, 0x39B4
    ctx->r16 = ADD32(ctx->r16, 0X39B4);
    // 0x80299D24: lbu         $t8, 0x0($s0)
    ctx->r24 = MEM_BU(ctx->r16, 0X0);
    // 0x80299D28: nop

    // 0x80299D2C: addiu       $t9, $t8, -0x1
    ctx->r25 = ADD32(ctx->r24, -0X1);
    // 0x80299D30: andi        $t0, $t9, 0xFF
    ctx->r8 = ctx->r25 & 0XFF;
    // 0x80299D34: bne         $t0, $zero, L_80299DAC
    if (ctx->r8 != 0) {
        // 0x80299D38: sb          $t9, 0x0($s0)
        MEM_B(0X0, ctx->r16) = ctx->r25;
            goto L_80299DAC;
    }
    // 0x80299D38: sb          $t9, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r25;
    // 0x80299D3C: lbu         $t1, 0x0($s1)
    ctx->r9 = MEM_BU(ctx->r17, 0X0);
    // 0x80299D40: lui         $t3, 0x8012
    ctx->r11 = S32(0X8012 << 16);
    // 0x80299D44: addiu       $t2, $t1, 0x1
    ctx->r10 = ADD32(ctx->r9, 0X1);
    // 0x80299D48: sb          $t2, 0x0($s1)
    MEM_B(0X0, ctx->r17) = ctx->r10;
    // 0x80299D4C: lbu         $t3, 0xB65($t3)
    ctx->r11 = MEM_BU(ctx->r11, 0XB65);
    // 0x80299D50: addiu       $t4, $zero, 0x14
    ctx->r12 = ADD32(0, 0X14);
    // 0x80299D54: beq         $t3, $zero, L_80299D64
    if (ctx->r11 == 0) {
        // 0x80299D58: addiu       $t5, $zero, 0x3C
        ctx->r13 = ADD32(0, 0X3C);
            goto L_80299D64;
    }
    // 0x80299D58: addiu       $t5, $zero, 0x3C
    ctx->r13 = ADD32(0, 0X3C);
    // 0x80299D5C: b           L_80299DAC
    // 0x80299D60: sb          $t4, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r12;
        goto L_80299DAC;
    // 0x80299D60: sb          $t4, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r12;
L_80299D64:
    // 0x80299D64: b           L_80299DAC
    // 0x80299D68: sb          $t5, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r13;
        goto L_80299DAC;
    // 0x80299D68: sb          $t5, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r13;
L_80299D6C:
    // 0x80299D6C: lui         $s0, 0x802C
    ctx->r16 = S32(0X802C << 16);
    // 0x80299D70: addiu       $s0, $s0, 0x39B4
    ctx->r16 = ADD32(ctx->r16, 0X39B4);
    // 0x80299D74: lbu         $t6, 0x0($s0)
    ctx->r14 = MEM_BU(ctx->r16, 0X0);
    // 0x80299D78: nop

    // 0x80299D7C: addiu       $t7, $t6, -0x1
    ctx->r15 = ADD32(ctx->r14, -0X1);
    // 0x80299D80: andi        $t8, $t7, 0xFF
    ctx->r24 = ctx->r15 & 0XFF;
    // 0x80299D84: bne         $t8, $zero, L_80299DAC
    if (ctx->r24 != 0) {
        // 0x80299D88: sb          $t7, 0x0($s0)
        MEM_B(0X0, ctx->r16) = ctx->r15;
            goto L_80299DAC;
    }
    // 0x80299D88: sb          $t7, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r15;
    // 0x80299D8C: jal         0x8029AC48
    // 0x80299D90: nop

    func_8029AC48(rdram, ctx);
        goto after_19;
    // 0x80299D90: nop

    after_19:
    // 0x80299D94: lbu         $t9, 0x0($s1)
    ctx->r25 = MEM_BU(ctx->r17, 0X0);
    // 0x80299D98: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
    // 0x80299D9C: addiu       $t0, $t9, 0x1
    ctx->r8 = ADD32(ctx->r25, 0X1);
    // 0x80299DA0: sb          $t0, 0x0($s1)
    MEM_B(0X0, ctx->r17) = ctx->r8;
    // 0x80299DA4: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x80299DA8: sb          $t1, 0x39DD($at)
    MEM_B(0X39DD, ctx->r1) = ctx->r9;
L_80299DAC:
    // 0x80299DAC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_80299DB0:
    // 0x80299DB0: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x80299DB4: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x80299DB8: jr          $ra
    // 0x80299DBC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x80299DBC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_80299DC0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80299DC0: lui         $v0, 0x8011
    ctx->r2 = S32(0X8011 << 16);
    // 0x80299DC4: addiu       $t6, $zero, 0x8
    ctx->r14 = ADD32(0, 0X8);
    // 0x80299DC8: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x80299DCC: addiu       $v0, $v0, -0x3770
    ctx->r2 = ADD32(ctx->r2, -0X3770);
    // 0x80299DD0: sb          $t6, 0x39B4($at)
    MEM_B(0X39B4, ctx->r1) = ctx->r14;
    // 0x80299DD4: lbu         $t7, 0x754($v0)
    ctx->r15 = MEM_BU(ctx->r2, 0X754);
    // 0x80299DD8: nop

    // 0x80299DDC: andi        $t8, $t7, 0xFE
    ctx->r24 = ctx->r15 & 0XFE;
    // 0x80299DE0: jr          $ra
    // 0x80299DE4: sb          $t8, 0x754($v0)
    MEM_B(0X754, ctx->r2) = ctx->r24;
    return;
    // 0x80299DE4: sb          $t8, 0x754($v0)
    MEM_B(0X754, ctx->r2) = ctx->r24;
;}
RECOMP_FUNC void func_80299DE8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80299DE8: lui         $v1, 0x802C
    ctx->r3 = S32(0X802C << 16);
    // 0x80299DEC: addiu       $v1, $v1, 0x39B4
    ctx->r3 = ADD32(ctx->r3, 0X39B4);
    // 0x80299DF0: lbu         $v0, 0x0($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X0);
    // 0x80299DF4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80299DF8: beq         $v0, $zero, L_80299E30
    if (ctx->r2 == 0) {
        // 0x80299DFC: sw          $ra, 0x14($sp)
        MEM_W(0X14, ctx->r29) = ctx->r31;
            goto L_80299E30;
    }
    // 0x80299DFC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80299E00: addiu       $t6, $v0, -0x1
    ctx->r14 = ADD32(ctx->r2, -0X1);
    // 0x80299E04: sb          $t6, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r14;
    // 0x80299E08: addiu       $a0, $zero, 0x8
    ctx->r4 = ADD32(0, 0X8);
    // 0x80299E0C: jal         0x80299EB4
    // 0x80299E10: addiu       $a1, $zero, -0x8
    ctx->r5 = ADD32(0, -0X8);
    func_80299EB4(rdram, ctx);
        goto after_0;
    // 0x80299E10: addiu       $a1, $zero, -0x8
    ctx->r5 = ADD32(0, -0X8);
    after_0:
    // 0x80299E14: lui         $t7, 0x802C
    ctx->r15 = S32(0X802C << 16);
    // 0x80299E18: lbu         $t7, 0x39B4($t7)
    ctx->r15 = MEM_BU(ctx->r15, 0X39B4);
    // 0x80299E1C: nop

    // 0x80299E20: bne         $t7, $zero, L_80299E34
    if (ctx->r15 != 0) {
        // 0x80299E24: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_80299E34;
    }
    // 0x80299E24: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80299E28: jal         0x80299E40
    // 0x80299E2C: nop

    func_80299E40(rdram, ctx);
        goto after_1;
    // 0x80299E2C: nop

    after_1:
L_80299E30:
    // 0x80299E30: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80299E34:
    // 0x80299E34: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80299E38: jr          $ra
    // 0x80299E3C: nop

    return;
    // 0x80299E3C: nop

;}
RECOMP_FUNC void func_80299E40(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80299E40: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80299E44: lui         $a1, 0x2
    ctx->r5 = S32(0X2 << 16);
    // 0x80299E48: lui         $v1, 0x800E
    ctx->r3 = S32(0X800E << 16);
    // 0x80299E4C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80299E50: addiu       $v1, $v1, -0x3770
    ctx->r3 = ADD32(ctx->r3, -0X3770);
    // 0x80299E54: ori         $a1, $a1, 0x8000
    ctx->r5 = ctx->r5 | 0X8000;
    // 0x80299E58: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x80299E5C: addiu       $a0, $zero, 0x3C
    ctx->r4 = ADD32(0, 0X3C);
L_80299E60:
    // 0x80299E60: multu       $v0, $a0
    result = U64(U32(ctx->r2)) * U64(U32(ctx->r4)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80299E64: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80299E68: andi        $t9, $v0, 0xFF
    ctx->r25 = ctx->r2 & 0XFF;
    // 0x80299E6C: slti        $at, $t9, 0x32
    ctx->r1 = SIGNED(ctx->r25) < 0X32 ? 1 : 0;
    // 0x80299E70: or          $v0, $t9, $zero
    ctx->r2 = ctx->r25 | 0;
    // 0x80299E74: mflo        $t6
    ctx->r14 = lo;
    // 0x80299E78: addu        $t7, $v1, $t6
    ctx->r15 = ADD32(ctx->r3, ctx->r14);
    // 0x80299E7C: addu        $t8, $t7, $a1
    ctx->r24 = ADD32(ctx->r15, ctx->r5);
    // 0x80299E80: bne         $at, $zero, L_80299E60
    if (ctx->r1 != 0) {
        // 0x80299E84: sb          $zero, 0x2148($t8)
        MEM_B(0X2148, ctx->r24) = 0;
            goto L_80299E60;
    }
    // 0x80299E84: sb          $zero, 0x2148($t8)
    MEM_B(0X2148, ctx->r24) = 0;
    // 0x80299E88: lui         $v0, 0x8010
    ctx->r2 = S32(0X8010 << 16);
    // 0x80299E8C: addiu       $v0, $v0, 0x4890
    ctx->r2 = ADD32(ctx->r2, 0X4890);
    // 0x80299E90: sb          $zero, 0x7EEC($v0)
    MEM_B(0X7EEC, ctx->r2) = 0;
    // 0x80299E94: sb          $zero, 0x7F0C($v0)
    MEM_B(0X7F0C, ctx->r2) = 0;
    // 0x80299E98: sb          $zero, 0x3534($v0)
    MEM_B(0X3534, ctx->r2) = 0;
    // 0x80299E9C: jal         0x8000E300
    // 0x80299EA0: sb          $zero, 0x3570($v0)
    MEM_B(0X3570, ctx->r2) = 0;
    func_8000E300(rdram, ctx);
        goto after_0;
    // 0x80299EA0: sb          $zero, 0x3570($v0)
    MEM_B(0X3570, ctx->r2) = 0;
    after_0:
    // 0x80299EA4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80299EA8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80299EAC: jr          $ra
    // 0x80299EB0: nop

    return;
    // 0x80299EB0: nop

;}
RECOMP_FUNC void func_80299EB4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80299EB4: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x80299EB8: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    // 0x80299EBC: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x80299EC0: lui         $a2, 0x2
    ctx->r6 = S32(0X2 << 16);
    // 0x80299EC4: ori         $a2, $a2, 0x8000
    ctx->r6 = ctx->r6 | 0X8000;
    // 0x80299EC8: addiu       $a0, $a0, -0x3770
    ctx->r4 = ADD32(ctx->r4, -0X3770);
    // 0x80299ECC: addiu       $a1, $zero, 0x3C
    ctx->r5 = ADD32(0, 0X3C);
    // 0x80299ED0: addiu       $v0, $zero, 0xA
    ctx->r2 = ADD32(0, 0XA);
L_80299ED4:
    // 0x80299ED4: multu       $v0, $a1
    result = U64(U32(ctx->r2)) * U64(U32(ctx->r5)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80299ED8: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80299EDC: andi        $t1, $v0, 0xFF
    ctx->r9 = ctx->r2 & 0XFF;
    // 0x80299EE0: slti        $at, $t1, 0x28
    ctx->r1 = SIGNED(ctx->r9) < 0X28 ? 1 : 0;
    // 0x80299EE4: mflo        $t6
    ctx->r14 = lo;
    // 0x80299EE8: addu        $t7, $a0, $t6
    ctx->r15 = ADD32(ctx->r4, ctx->r14);
    // 0x80299EEC: addu        $v1, $t7, $a2
    ctx->r3 = ADD32(ctx->r15, ctx->r6);
    // 0x80299EF0: lbu         $t8, 0x2148($v1)
    ctx->r24 = MEM_BU(ctx->r3, 0X2148);
    // 0x80299EF4: nop

    // 0x80299EF8: beq         $t8, $zero, L_80299F10
    if (ctx->r24 == 0) {
        // 0x80299EFC: nop
    
            goto L_80299F10;
    }
    // 0x80299EFC: nop

    // 0x80299F00: lh          $t9, 0x2160($v1)
    ctx->r25 = MEM_H(ctx->r3, 0X2160);
    // 0x80299F04: nop

    // 0x80299F08: addiu       $t0, $t9, 0x8
    ctx->r8 = ADD32(ctx->r25, 0X8);
    // 0x80299F0C: sh          $t0, 0x2160($v1)
    MEM_H(0X2160, ctx->r3) = ctx->r8;
L_80299F10:
    // 0x80299F10: bne         $at, $zero, L_80299ED4
    if (ctx->r1 != 0) {
        // 0x80299F14: or          $v0, $t1, $zero
        ctx->r2 = ctx->r9 | 0;
            goto L_80299ED4;
    }
    // 0x80299F14: or          $v0, $t1, $zero
    ctx->r2 = ctx->r9 | 0;
    // 0x80299F18: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_80299F1C:
    // 0x80299F1C: multu       $v0, $a1
    result = U64(U32(ctx->r2)) * U64(U32(ctx->r5)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80299F20: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80299F24: andi        $t7, $v0, 0xFF
    ctx->r15 = ctx->r2 & 0XFF;
    // 0x80299F28: slti        $at, $t7, 0x3
    ctx->r1 = SIGNED(ctx->r15) < 0X3 ? 1 : 0;
    // 0x80299F2C: mflo        $t2
    ctx->r10 = lo;
    // 0x80299F30: addu        $t3, $a0, $t2
    ctx->r11 = ADD32(ctx->r4, ctx->r10);
    // 0x80299F34: addu        $v1, $t3, $a2
    ctx->r3 = ADD32(ctx->r11, ctx->r6);
    // 0x80299F38: lbu         $t4, 0x2148($v1)
    ctx->r12 = MEM_BU(ctx->r3, 0X2148);
    // 0x80299F3C: nop

    // 0x80299F40: beq         $t4, $zero, L_80299F58
    if (ctx->r12 == 0) {
        // 0x80299F44: nop
    
            goto L_80299F58;
    }
    // 0x80299F44: nop

    // 0x80299F48: lh          $t5, 0x2160($v1)
    ctx->r13 = MEM_H(ctx->r3, 0X2160);
    // 0x80299F4C: nop

    // 0x80299F50: addiu       $t6, $t5, 0x8
    ctx->r14 = ADD32(ctx->r13, 0X8);
    // 0x80299F54: sh          $t6, 0x2160($v1)
    MEM_H(0X2160, ctx->r3) = ctx->r14;
L_80299F58:
    // 0x80299F58: bne         $at, $zero, L_80299F1C
    if (ctx->r1 != 0) {
        // 0x80299F5C: or          $v0, $t7, $zero
        ctx->r2 = ctx->r15 | 0;
            goto L_80299F1C;
    }
    // 0x80299F5C: or          $v0, $t7, $zero
    ctx->r2 = ctx->r15 | 0;
    // 0x80299F60: lui         $a3, 0x8010
    ctx->r7 = S32(0X8010 << 16);
    // 0x80299F64: addiu       $a3, $a3, 0x4890
    ctx->r7 = ADD32(ctx->r7, 0X4890);
    // 0x80299F68: lh          $t8, 0x7EF4($a3)
    ctx->r24 = MEM_H(ctx->r7, 0X7EF4);
    // 0x80299F6C: lh          $t0, 0x7F14($a3)
    ctx->r8 = MEM_H(ctx->r7, 0X7F14);
    // 0x80299F70: addiu       $t9, $t8, 0x8
    ctx->r25 = ADD32(ctx->r24, 0X8);
    // 0x80299F74: addiu       $t1, $t0, 0x8
    ctx->r9 = ADD32(ctx->r8, 0X8);
    // 0x80299F78: sh          $t9, 0x7EF4($a3)
    MEM_H(0X7EF4, ctx->r7) = ctx->r25;
    // 0x80299F7C: sh          $t1, 0x7F14($a3)
    MEM_H(0X7F14, ctx->r7) = ctx->r9;
    // 0x80299F80: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
L_80299F84:
    // 0x80299F84: multu       $v0, $a1
    result = U64(U32(ctx->r2)) * U64(U32(ctx->r5)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80299F88: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80299F8C: andi        $t7, $v0, 0xFF
    ctx->r15 = ctx->r2 & 0XFF;
    // 0x80299F90: slti        $at, $t7, 0xA
    ctx->r1 = SIGNED(ctx->r15) < 0XA ? 1 : 0;
    // 0x80299F94: mflo        $t2
    ctx->r10 = lo;
    // 0x80299F98: addu        $t3, $a0, $t2
    ctx->r11 = ADD32(ctx->r4, ctx->r10);
    // 0x80299F9C: addu        $v1, $t3, $a2
    ctx->r3 = ADD32(ctx->r11, ctx->r6);
    // 0x80299FA0: lbu         $t4, 0x2148($v1)
    ctx->r12 = MEM_BU(ctx->r3, 0X2148);
    // 0x80299FA4: nop

    // 0x80299FA8: beq         $t4, $zero, L_80299FC0
    if (ctx->r12 == 0) {
        // 0x80299FAC: nop
    
            goto L_80299FC0;
    }
    // 0x80299FAC: nop

    // 0x80299FB0: lh          $t5, 0x2160($v1)
    ctx->r13 = MEM_H(ctx->r3, 0X2160);
    // 0x80299FB4: nop

    // 0x80299FB8: addiu       $t6, $t5, -0x8
    ctx->r14 = ADD32(ctx->r13, -0X8);
    // 0x80299FBC: sh          $t6, 0x2160($v1)
    MEM_H(0X2160, ctx->r3) = ctx->r14;
L_80299FC0:
    // 0x80299FC0: bne         $at, $zero, L_80299F84
    if (ctx->r1 != 0) {
        // 0x80299FC4: or          $v0, $t7, $zero
        ctx->r2 = ctx->r15 | 0;
            goto L_80299F84;
    }
    // 0x80299FC4: or          $v0, $t7, $zero
    ctx->r2 = ctx->r15 | 0;
    // 0x80299FC8: addiu       $v0, $zero, 0x2A
    ctx->r2 = ADD32(0, 0X2A);
L_80299FCC:
    // 0x80299FCC: multu       $v0, $a1
    result = U64(U32(ctx->r2)) * U64(U32(ctx->r5)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80299FD0: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80299FD4: andi        $t3, $v0, 0xFF
    ctx->r11 = ctx->r2 & 0XFF;
    // 0x80299FD8: slti        $at, $t3, 0x32
    ctx->r1 = SIGNED(ctx->r11) < 0X32 ? 1 : 0;
    // 0x80299FDC: mflo        $t8
    ctx->r24 = lo;
    // 0x80299FE0: addu        $t9, $a0, $t8
    ctx->r25 = ADD32(ctx->r4, ctx->r24);
    // 0x80299FE4: addu        $v1, $t9, $a2
    ctx->r3 = ADD32(ctx->r25, ctx->r6);
    // 0x80299FE8: lbu         $t0, 0x2148($v1)
    ctx->r8 = MEM_BU(ctx->r3, 0X2148);
    // 0x80299FEC: nop

    // 0x80299FF0: beq         $t0, $zero, L_8029A008
    if (ctx->r8 == 0) {
        // 0x80299FF4: nop
    
            goto L_8029A008;
    }
    // 0x80299FF4: nop

    // 0x80299FF8: lh          $t1, 0x2160($v1)
    ctx->r9 = MEM_H(ctx->r3, 0X2160);
    // 0x80299FFC: nop

    // 0x8029A000: addiu       $t2, $t1, -0x8
    ctx->r10 = ADD32(ctx->r9, -0X8);
    // 0x8029A004: sh          $t2, 0x2160($v1)
    MEM_H(0X2160, ctx->r3) = ctx->r10;
L_8029A008:
    // 0x8029A008: bne         $at, $zero, L_80299FCC
    if (ctx->r1 != 0) {
        // 0x8029A00C: or          $v0, $t3, $zero
        ctx->r2 = ctx->r11 | 0;
            goto L_80299FCC;
    }
    // 0x8029A00C: or          $v0, $t3, $zero
    ctx->r2 = ctx->r11 | 0;
    // 0x8029A010: lbu         $t4, 0x2AA8($a3)
    ctx->r12 = MEM_BU(ctx->r7, 0X2AA8);
    // 0x8029A014: nop

    // 0x8029A018: beq         $t4, $zero, L_8029A030
    if (ctx->r12 == 0) {
        // 0x8029A01C: nop
    
            goto L_8029A030;
    }
    // 0x8029A01C: nop

    // 0x8029A020: lh          $t5, 0x2AC0($a3)
    ctx->r13 = MEM_H(ctx->r7, 0X2AC0);
    // 0x8029A024: nop

    // 0x8029A028: addiu       $t6, $t5, -0x8
    ctx->r14 = ADD32(ctx->r13, -0X8);
    // 0x8029A02C: sh          $t6, 0x2AC0($a3)
    MEM_H(0X2AC0, ctx->r7) = ctx->r14;
L_8029A030:
    // 0x8029A030: jr          $ra
    // 0x8029A034: nop

    return;
    // 0x8029A034: nop

;}
RECOMP_FUNC void func_8029A038(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8029A038: lui         $t6, 0x802C
    ctx->r14 = S32(0X802C << 16);
    // 0x8029A03C: lbu         $t6, 0x39B4($t6)
    ctx->r14 = MEM_BU(ctx->r14, 0X39B4);
    // 0x8029A040: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8029A044: beq         $t6, $zero, L_8029A1D4
    if (ctx->r14 == 0) {
        // 0x8029A048: sw          $ra, 0x1C($sp)
        MEM_W(0X1C, ctx->r29) = ctx->r31;
            goto L_8029A1D4;
    }
    // 0x8029A048: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8029A04C: lui         $t1, 0x2
    ctx->r9 = S32(0X2 << 16);
    // 0x8029A050: lui         $t0, 0x800E
    ctx->r8 = S32(0X800E << 16);
    // 0x8029A054: addiu       $t0, $t0, -0x3770
    ctx->r8 = ADD32(ctx->r8, -0X3770);
    // 0x8029A058: ori         $t1, $t1, 0x8000
    ctx->r9 = ctx->r9 | 0X8000;
    // 0x8029A05C: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x8029A060: addiu       $t2, $zero, 0x3C
    ctx->r10 = ADD32(0, 0X3C);
L_8029A064:
    // 0x8029A064: multu       $v1, $t2
    result = U64(U32(ctx->r3)) * U64(U32(ctx->r10)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8029A068: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x8029A06C: andi        $t5, $v1, 0xFF
    ctx->r13 = ctx->r3 & 0XFF;
    // 0x8029A070: slti        $at, $t5, 0x9
    ctx->r1 = SIGNED(ctx->r13) < 0X9 ? 1 : 0;
    // 0x8029A074: mflo        $t7
    ctx->r15 = lo;
    // 0x8029A078: addu        $t8, $t0, $t7
    ctx->r24 = ADD32(ctx->r8, ctx->r15);
    // 0x8029A07C: addu        $v0, $t8, $t1
    ctx->r2 = ADD32(ctx->r24, ctx->r9);
    // 0x8029A080: lbu         $t9, 0x2148($v0)
    ctx->r25 = MEM_BU(ctx->r2, 0X2148);
    // 0x8029A084: nop

    // 0x8029A088: beq         $t9, $zero, L_8029A0A0
    if (ctx->r25 == 0) {
        // 0x8029A08C: nop
    
            goto L_8029A0A0;
    }
    // 0x8029A08C: nop

    // 0x8029A090: lh          $t3, 0x215C($v0)
    ctx->r11 = MEM_H(ctx->r2, 0X215C);
    // 0x8029A094: nop

    // 0x8029A098: addiu       $t4, $t3, 0x10
    ctx->r12 = ADD32(ctx->r11, 0X10);
    // 0x8029A09C: sh          $t4, 0x215C($v0)
    MEM_H(0X215C, ctx->r2) = ctx->r12;
L_8029A0A0:
    // 0x8029A0A0: bne         $at, $zero, L_8029A064
    if (ctx->r1 != 0) {
        // 0x8029A0A4: or          $v1, $t5, $zero
        ctx->r3 = ctx->r13 | 0;
            goto L_8029A064;
    }
    // 0x8029A0A4: or          $v1, $t5, $zero
    ctx->r3 = ctx->r13 | 0;
    // 0x8029A0A8: lui         $t6, 0x8012
    ctx->r14 = S32(0X8012 << 16);
    // 0x8029A0AC: lw          $t6, 0xB24($t6)
    ctx->r14 = MEM_W(ctx->r14, 0XB24);
    // 0x8029A0B0: lui         $a2, 0x8010
    ctx->r6 = S32(0X8010 << 16);
    // 0x8029A0B4: lw          $t7, 0xC8($t6)
    ctx->r15 = MEM_W(ctx->r14, 0XC8);
    // 0x8029A0B8: lh          $a2, 0x6BCC($a2)
    ctx->r6 = MEM_H(ctx->r6, 0X6BCC);
    // 0x8029A0BC: lbu         $a1, 0x0($t7)
    ctx->r5 = MEM_BU(ctx->r15, 0X0);
    // 0x8029A0C0: addiu       $t8, $zero, 0x1E
    ctx->r24 = ADD32(0, 0X1E);
    // 0x8029A0C4: addiu       $t9, $zero, 0x18
    ctx->r25 = ADD32(0, 0X18);
    // 0x8029A0C8: sw          $t9, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r25;
    // 0x8029A0CC: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    // 0x8029A0D0: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    // 0x8029A0D4: jal         0x8000E0A8
    // 0x8029A0D8: addiu       $a3, $zero, 0xA4
    ctx->r7 = ADD32(0, 0XA4);
    func_8000E0A8(rdram, ctx);
        goto after_0;
    // 0x8029A0D8: addiu       $a3, $zero, 0xA4
    ctx->r7 = ADD32(0, 0XA4);
    after_0:
    // 0x8029A0DC: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    // 0x8029A0E0: jal         0x8000E1F4
    // 0x8029A0E4: lui         $a1, 0x3F80
    ctx->r5 = S32(0X3F80 << 16);
    func_8000E1F4(rdram, ctx);
        goto after_1;
    // 0x8029A0E4: lui         $a1, 0x3F80
    ctx->r5 = S32(0X3F80 << 16);
    after_1:
    // 0x8029A0E8: lui         $t0, 0x800E
    ctx->r8 = S32(0X800E << 16);
    // 0x8029A0EC: lui         $t1, 0x2
    ctx->r9 = S32(0X2 << 16);
    // 0x8029A0F0: ori         $t1, $t1, 0x8000
    ctx->r9 = ctx->r9 | 0X8000;
    // 0x8029A0F4: addiu       $t0, $t0, -0x3770
    ctx->r8 = ADD32(ctx->r8, -0X3770);
    // 0x8029A0F8: addiu       $t2, $zero, 0x3C
    ctx->r10 = ADD32(0, 0X3C);
    // 0x8029A0FC: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
L_8029A100:
    // 0x8029A100: sll         $t3, $v1, 5
    ctx->r11 = S32(ctx->r3 << 5);
    // 0x8029A104: addu        $t4, $t0, $t3
    ctx->r12 = ADD32(ctx->r8, ctx->r11);
    // 0x8029A108: addu        $v0, $t4, $t1
    ctx->r2 = ADD32(ctx->r12, ctx->r9);
    // 0x8029A10C: lh          $t5, 0x7EF2($v0)
    ctx->r13 = MEM_H(ctx->r2, 0X7EF2);
    // 0x8029A110: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x8029A114: andi        $t7, $v1, 0xFF
    ctx->r15 = ctx->r3 & 0XFF;
    // 0x8029A118: slti        $at, $t7, 0x3
    ctx->r1 = SIGNED(ctx->r15) < 0X3 ? 1 : 0;
    // 0x8029A11C: addiu       $t6, $t5, 0x10
    ctx->r14 = ADD32(ctx->r13, 0X10);
    // 0x8029A120: or          $v1, $t7, $zero
    ctx->r3 = ctx->r15 | 0;
    // 0x8029A124: bne         $at, $zero, L_8029A100
    if (ctx->r1 != 0) {
        // 0x8029A128: sh          $t6, 0x7EF2($v0)
        MEM_H(0X7EF2, ctx->r2) = ctx->r14;
            goto L_8029A100;
    }
    // 0x8029A128: sh          $t6, 0x7EF2($v0)
    MEM_H(0X7EF2, ctx->r2) = ctx->r14;
    // 0x8029A12C: addiu       $v1, $zero, 0xD
    ctx->r3 = ADD32(0, 0XD);
L_8029A130:
    // 0x8029A130: multu       $v1, $t2
    result = U64(U32(ctx->r3)) * U64(U32(ctx->r10)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8029A134: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x8029A138: andi        $t6, $v1, 0xFF
    ctx->r14 = ctx->r3 & 0XFF;
    // 0x8029A13C: slti        $at, $t6, 0x13
    ctx->r1 = SIGNED(ctx->r14) < 0X13 ? 1 : 0;
    // 0x8029A140: mflo        $t8
    ctx->r24 = lo;
    // 0x8029A144: addu        $t9, $t0, $t8
    ctx->r25 = ADD32(ctx->r8, ctx->r24);
    // 0x8029A148: addu        $v0, $t9, $t1
    ctx->r2 = ADD32(ctx->r25, ctx->r9);
    // 0x8029A14C: lbu         $t3, 0x2148($v0)
    ctx->r11 = MEM_BU(ctx->r2, 0X2148);
    // 0x8029A150: nop

    // 0x8029A154: beq         $t3, $zero, L_8029A16C
    if (ctx->r11 == 0) {
        // 0x8029A158: nop
    
            goto L_8029A16C;
    }
    // 0x8029A158: nop

    // 0x8029A15C: lh          $t4, 0x215C($v0)
    ctx->r12 = MEM_H(ctx->r2, 0X215C);
    // 0x8029A160: nop

    // 0x8029A164: addiu       $t5, $t4, 0x10
    ctx->r13 = ADD32(ctx->r12, 0X10);
    // 0x8029A168: sh          $t5, 0x215C($v0)
    MEM_H(0X215C, ctx->r2) = ctx->r13;
L_8029A16C:
    // 0x8029A16C: bne         $at, $zero, L_8029A130
    if (ctx->r1 != 0) {
        // 0x8029A170: or          $v1, $t6, $zero
        ctx->r3 = ctx->r14 | 0;
            goto L_8029A130;
    }
    // 0x8029A170: or          $v1, $t6, $zero
    ctx->r3 = ctx->r14 | 0;
    // 0x8029A174: addiu       $v1, $zero, 0x9
    ctx->r3 = ADD32(0, 0X9);
L_8029A178:
    // 0x8029A178: multu       $v1, $t2
    result = U64(U32(ctx->r3)) * U64(U32(ctx->r10)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8029A17C: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x8029A180: andi        $t5, $v1, 0xFF
    ctx->r13 = ctx->r3 & 0XFF;
    // 0x8029A184: slti        $at, $t5, 0xD
    ctx->r1 = SIGNED(ctx->r13) < 0XD ? 1 : 0;
    // 0x8029A188: mflo        $t7
    ctx->r15 = lo;
    // 0x8029A18C: addu        $t8, $t0, $t7
    ctx->r24 = ADD32(ctx->r8, ctx->r15);
    // 0x8029A190: addu        $v0, $t8, $t1
    ctx->r2 = ADD32(ctx->r24, ctx->r9);
    // 0x8029A194: lbu         $t9, 0x2148($v0)
    ctx->r25 = MEM_BU(ctx->r2, 0X2148);
    // 0x8029A198: nop

    // 0x8029A19C: beq         $t9, $zero, L_8029A1B4
    if (ctx->r25 == 0) {
        // 0x8029A1A0: nop
    
            goto L_8029A1B4;
    }
    // 0x8029A1A0: nop

    // 0x8029A1A4: lh          $t3, 0x215C($v0)
    ctx->r11 = MEM_H(ctx->r2, 0X215C);
    // 0x8029A1A8: nop

    // 0x8029A1AC: addiu       $t4, $t3, -0x10
    ctx->r12 = ADD32(ctx->r11, -0X10);
    // 0x8029A1B0: sh          $t4, 0x215C($v0)
    MEM_H(0X215C, ctx->r2) = ctx->r12;
L_8029A1B4:
    // 0x8029A1B4: bne         $at, $zero, L_8029A178
    if (ctx->r1 != 0) {
        // 0x8029A1B8: or          $v1, $t5, $zero
        ctx->r3 = ctx->r13 | 0;
            goto L_8029A178;
    }
    // 0x8029A1B8: or          $v1, $t5, $zero
    ctx->r3 = ctx->r13 | 0;
    // 0x8029A1BC: lui         $v0, 0x802C
    ctx->r2 = S32(0X802C << 16);
    // 0x8029A1C0: addiu       $v0, $v0, 0x39B4
    ctx->r2 = ADD32(ctx->r2, 0X39B4);
    // 0x8029A1C4: lbu         $t6, 0x0($v0)
    ctx->r14 = MEM_BU(ctx->r2, 0X0);
    // 0x8029A1C8: nop

    // 0x8029A1CC: addiu       $t7, $t6, -0x1
    ctx->r15 = ADD32(ctx->r14, -0X1);
    // 0x8029A1D0: sb          $t7, 0x0($v0)
    MEM_B(0X0, ctx->r2) = ctx->r15;
L_8029A1D4:
    // 0x8029A1D4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8029A1D8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x8029A1DC: jr          $ra
    // 0x8029A1E0: nop

    return;
    // 0x8029A1E0: nop

;}
RECOMP_FUNC void func_8029A1E4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8029A1E4: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x8029A1E8: addiu       $v0, $v0, -0x2CF0
    ctx->r2 = ADD32(ctx->r2, -0X2CF0);
    // 0x8029A1EC: lhu         $t6, 0x8($v0)
    ctx->r14 = MEM_HU(ctx->r2, 0X8);
    // 0x8029A1F0: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8029A1F4: andi        $t7, $t6, 0x1
    ctx->r15 = ctx->r14 & 0X1;
    // 0x8029A1F8: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8029A1FC: beq         $t7, $zero, L_8029A214
    if (ctx->r15 == 0) {
        // 0x8029A200: sw          $s0, 0x18($sp)
        MEM_W(0X18, ctx->r29) = ctx->r16;
            goto L_8029A214;
    }
    // 0x8029A200: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8029A204: lhu         $a0, 0xA9E($v0)
    ctx->r4 = MEM_HU(ctx->r2, 0XA9E);
    // 0x8029A208: lhu         $s0, 0xA($v0)
    ctx->r16 = MEM_HU(ctx->r2, 0XA);
    // 0x8029A20C: b           L_8029A220
    // 0x8029A210: nop

        goto L_8029A220;
    // 0x8029A210: nop

L_8029A214:
    // 0x8029A214: lhu         $a0, 0xA($v0)
    ctx->r4 = MEM_HU(ctx->r2, 0XA);
    // 0x8029A218: lhu         $s0, 0xA9E($v0)
    ctx->r16 = MEM_HU(ctx->r2, 0XA9E);
    // 0x8029A21C: nop

L_8029A220:
    // 0x8029A220: lui         $t8, 0x8009
    ctx->r24 = S32(0X8009 << 16);
    // 0x8029A224: lw          $t8, 0x3B20($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X3B20);
    // 0x8029A228: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x8029A22C: lwc1        $f6, 0x8($t8)
    ctx->f6.u32l = MEM_W(ctx->r24, 0X8);
    // 0x8029A230: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x8029A234: c.lt.s      $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f4.fl < ctx->f6.fl;
    // 0x8029A238: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x8029A23C: bc1f        L_8029A264
    if (!c1cs) {
        // 0x8029A240: or          $a1, $zero, $zero
        ctx->r5 = 0 | 0;
            goto L_8029A264;
    }
    // 0x8029A240: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8029A244: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x8029A248: sb          $s0, 0x39B8($at)
    MEM_B(0X39B8, ctx->r1) = ctx->r16;
    // 0x8029A24C: addiu       $s0, $s0, -0x1
    ctx->r16 = ADD32(ctx->r16, -0X1);
    // 0x8029A250: andi        $t9, $s0, 0xFFFF
    ctx->r25 = ctx->r16 & 0XFFFF;
    // 0x8029A254: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x8029A258: or          $s0, $t9, $zero
    ctx->r16 = ctx->r25 | 0;
    // 0x8029A25C: b           L_8029A27C
    // 0x8029A260: sb          $t0, 0x39B1($at)
    MEM_B(0X39B1, ctx->r1) = ctx->r8;
        goto L_8029A27C;
    // 0x8029A260: sb          $t0, 0x39B1($at)
    MEM_B(0X39B1, ctx->r1) = ctx->r8;
L_8029A264:
    // 0x8029A264: sb          $a0, 0x39B8($at)
    MEM_B(0X39B8, ctx->r1) = ctx->r4;
    // 0x8029A268: addiu       $a0, $a0, -0x1
    ctx->r4 = ADD32(ctx->r4, -0X1);
    // 0x8029A26C: andi        $t1, $a0, 0xFFFF
    ctx->r9 = ctx->r4 & 0XFFFF;
    // 0x8029A270: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x8029A274: or          $a0, $t1, $zero
    ctx->r4 = ctx->r9 | 0;
    // 0x8029A278: sb          $zero, 0x39B1($at)
    MEM_B(0X39B1, ctx->r1) = 0;
L_8029A27C:
    // 0x8029A27C: jal         0x8029A35C
    // 0x8029A280: addiu       $a2, $zero, -0xE0
    ctx->r6 = ADD32(0, -0XE0);
    func_8029A35C(rdram, ctx);
        goto after_0;
    // 0x8029A280: addiu       $a2, $zero, -0xE0
    ctx->r6 = ADD32(0, -0XE0);
    after_0:
    // 0x8029A284: andi        $a0, $s0, 0xFFFF
    ctx->r4 = ctx->r16 & 0XFFFF;
    // 0x8029A288: addiu       $a1, $zero, 0x9
    ctx->r5 = ADD32(0, 0X9);
    // 0x8029A28C: jal         0x8029A35C
    // 0x8029A290: addiu       $a2, $zero, 0x1B8
    ctx->r6 = ADD32(0, 0X1B8);
    func_8029A35C(rdram, ctx);
        goto after_1;
    // 0x8029A290: addiu       $a2, $zero, 0x1B8
    ctx->r6 = ADD32(0, 0X1B8);
    after_1:
    // 0x8029A294: lui         $s0, 0x8010
    ctx->r16 = S32(0X8010 << 16);
    // 0x8029A298: addiu       $s0, $s0, 0x4890
    ctx->r16 = ADD32(ctx->r16, 0X4890);
    // 0x8029A29C: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x8029A2A0: lui         $a0, 0x8010
    ctx->r4 = S32(0X8010 << 16);
    // 0x8029A2A4: sb          $t2, 0x2238($s0)
    MEM_B(0X2238, ctx->r16) = ctx->r10;
    // 0x8029A2A8: addiu       $a0, $a0, 0x6AC4
    ctx->r4 = ADD32(ctx->r4, 0X6AC4);
    // 0x8029A2AC: jal         0x8007AAF8
    // 0x8029A2B0: addiu       $a1, $zero, 0x11C
    ctx->r5 = ADD32(0, 0X11C);
    func_8007AAF8(rdram, ctx);
        goto after_2;
    // 0x8029A2B0: addiu       $a1, $zero, 0x11C
    ctx->r5 = ADD32(0, 0X11C);
    after_2:
    // 0x8029A2B4: lbu         $t3, 0x223D($s0)
    ctx->r11 = MEM_BU(ctx->r16, 0X223D);
    // 0x8029A2B8: lbu         $t5, 0x223C($s0)
    ctx->r13 = MEM_BU(ctx->r16, 0X223C);
    // 0x8029A2BC: addiu       $t7, $zero, 0xA
    ctx->r15 = ADD32(0, 0XA);
    // 0x8029A2C0: addiu       $t8, $zero, -0x100
    ctx->r24 = ADD32(0, -0X100);
    // 0x8029A2C4: lui         $a0, 0x8010
    ctx->r4 = S32(0X8010 << 16);
    // 0x8029A2C8: andi        $t4, $t3, 0xFFBF
    ctx->r12 = ctx->r11 & 0XFFBF;
    // 0x8029A2CC: andi        $t6, $t5, 0xFF01
    ctx->r14 = ctx->r13 & 0XFF01;
    // 0x8029A2D0: sb          $t4, 0x223D($s0)
    MEM_B(0X223D, ctx->r16) = ctx->r12;
    // 0x8029A2D4: sb          $t6, 0x223C($s0)
    MEM_B(0X223C, ctx->r16) = ctx->r14;
    // 0x8029A2D8: sb          $t7, 0x2239($s0)
    MEM_B(0X2239, ctx->r16) = ctx->r15;
    // 0x8029A2DC: sh          $t8, 0x224C($s0)
    MEM_H(0X224C, ctx->r16) = ctx->r24;
    // 0x8029A2E0: sh          $zero, 0x2250($s0)
    MEM_H(0X2250, ctx->r16) = 0;
    // 0x8029A2E4: addiu       $a0, $a0, 0x6AC4
    ctx->r4 = ADD32(ctx->r4, 0X6AC4);
    // 0x8029A2E8: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    // 0x8029A2EC: jal         0x8002135C
    // 0x8029A2F0: addiu       $a2, $zero, 0x29
    ctx->r6 = ADD32(0, 0X29);
    func_8002135C(rdram, ctx);
        goto after_3;
    // 0x8029A2F0: addiu       $a2, $zero, 0x29
    ctx->r6 = ADD32(0, 0X29);
    after_3:
    // 0x8029A2F4: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x8029A2F8: lui         $a0, 0x8010
    ctx->r4 = S32(0X8010 << 16);
    // 0x8029A2FC: sb          $t9, 0x2274($s0)
    MEM_B(0X2274, ctx->r16) = ctx->r25;
    // 0x8029A300: addiu       $a0, $a0, 0x6B00
    ctx->r4 = ADD32(ctx->r4, 0X6B00);
    // 0x8029A304: jal         0x8007AAF8
    // 0x8029A308: addiu       $a1, $zero, 0x11D
    ctx->r5 = ADD32(0, 0X11D);
    func_8007AAF8(rdram, ctx);
        goto after_4;
    // 0x8029A308: addiu       $a1, $zero, 0x11D
    ctx->r5 = ADD32(0, 0X11D);
    after_4:
    // 0x8029A30C: lbu         $t0, 0x2279($s0)
    ctx->r8 = MEM_BU(ctx->r16, 0X2279);
    // 0x8029A310: lbu         $t2, 0x2278($s0)
    ctx->r10 = MEM_BU(ctx->r16, 0X2278);
    // 0x8029A314: addiu       $t4, $zero, 0xA
    ctx->r12 = ADD32(0, 0XA);
    // 0x8029A318: addiu       $t5, $zero, -0x100
    ctx->r13 = ADD32(0, -0X100);
    // 0x8029A31C: lui         $a0, 0x8010
    ctx->r4 = S32(0X8010 << 16);
    // 0x8029A320: andi        $t1, $t0, 0xFFBF
    ctx->r9 = ctx->r8 & 0XFFBF;
    // 0x8029A324: andi        $t3, $t2, 0xFF01
    ctx->r11 = ctx->r10 & 0XFF01;
    // 0x8029A328: sb          $t1, 0x2279($s0)
    MEM_B(0X2279, ctx->r16) = ctx->r9;
    // 0x8029A32C: sb          $t3, 0x2278($s0)
    MEM_B(0X2278, ctx->r16) = ctx->r11;
    // 0x8029A330: sb          $t4, 0x2275($s0)
    MEM_B(0X2275, ctx->r16) = ctx->r12;
    // 0x8029A334: sh          $t5, 0x2288($s0)
    MEM_H(0X2288, ctx->r16) = ctx->r13;
    // 0x8029A338: sh          $zero, 0x228C($s0)
    MEM_H(0X228C, ctx->r16) = 0;
    // 0x8029A33C: addiu       $a0, $a0, 0x6B00
    ctx->r4 = ADD32(ctx->r4, 0X6B00);
    // 0x8029A340: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    // 0x8029A344: jal         0x8002135C
    // 0x8029A348: addiu       $a2, $zero, 0x28
    ctx->r6 = ADD32(0, 0X28);
    func_8002135C(rdram, ctx);
        goto after_5;
    // 0x8029A348: addiu       $a2, $zero, 0x28
    ctx->r6 = ADD32(0, 0X28);
    after_5:
    // 0x8029A34C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8029A350: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8029A354: jr          $ra
    // 0x8029A358: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x8029A358: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_8029A35C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8029A35C: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x8029A360: andi        $t6, $a0, 0xFFFF
    ctx->r14 = ctx->r4 & 0XFFFF;
    // 0x8029A364: sw          $s1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r17;
    // 0x8029A368: slti        $at, $t6, 0xA
    ctx->r1 = SIGNED(ctx->r14) < 0XA ? 1 : 0;
    // 0x8029A36C: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x8029A370: sw          $s0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r16;
    // 0x8029A374: swc1        $f21, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x8029A378: swc1        $f20, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f20.u32l;
    // 0x8029A37C: sw          $a0, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r4;
    // 0x8029A380: sw          $a1, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r5;
    // 0x8029A384: sw          $a2, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r6;
    // 0x8029A388: bne         $at, $zero, L_8029A4FC
    if (ctx->r1 != 0) {
        // 0x8029A38C: or          $s1, $t6, $zero
        ctx->r17 = ctx->r14 | 0;
            goto L_8029A4FC;
    }
    // 0x8029A38C: or          $s1, $t6, $zero
    ctx->r17 = ctx->r14 | 0;
    // 0x8029A390: lbu         $t7, 0x4F($sp)
    ctx->r15 = MEM_BU(ctx->r29, 0X4F);
    // 0x8029A394: lui         $t9, 0x800E
    ctx->r25 = S32(0X800E << 16);
    // 0x8029A398: sll         $t8, $t7, 4
    ctx->r24 = S32(ctx->r15 << 4);
    // 0x8029A39C: subu        $t8, $t8, $t7
    ctx->r24 = SUB32(ctx->r24, ctx->r15);
    // 0x8029A3A0: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x8029A3A4: addiu       $t9, $t9, -0x3770
    ctx->r25 = ADD32(ctx->r25, -0X3770);
    // 0x8029A3A8: lui         $at, 0x2
    ctx->r1 = S32(0X2 << 16);
    // 0x8029A3AC: ori         $at, $at, 0x8000
    ctx->r1 = ctx->r1 | 0X8000;
    // 0x8029A3B0: addu        $v0, $t8, $t9
    ctx->r2 = ADD32(ctx->r24, ctx->r25);
    // 0x8029A3B4: addu        $s0, $v0, $at
    ctx->r16 = ADD32(ctx->r2, ctx->r1);
    // 0x8029A3B8: lui         $at, 0x2
    ctx->r1 = S32(0X2 << 16);
    // 0x8029A3BC: ori         $at, $at, 0xA144
    ctx->r1 = ctx->r1 | 0XA144;
    // 0x8029A3C0: addu        $a0, $v0, $at
    ctx->r4 = ADD32(ctx->r2, ctx->r1);
    // 0x8029A3C4: addiu       $at, $zero, 0xA
    ctx->r1 = ADD32(0, 0XA);
    // 0x8029A3C8: div         $zero, $t6, $at
    lo = S32(S64(S32(ctx->r14)) / S64(S32(ctx->r1))); hi = S32(S64(S32(ctx->r14)) % S64(S32(ctx->r1)));
    // 0x8029A3CC: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x8029A3D0: sb          $t0, 0x2148($s0)
    MEM_B(0X2148, ctx->r16) = ctx->r8;
    // 0x8029A3D4: sw          $a0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r4;
    // 0x8029A3D8: mflo        $v1
    ctx->r3 = lo;
    // 0x8029A3DC: andi        $t1, $v1, 0xFFFF
    ctx->r9 = ctx->r3 & 0XFFFF;
    // 0x8029A3E0: sll         $v1, $t1, 1
    ctx->r3 = S32(ctx->r9 << 1);
    // 0x8029A3E4: addiu       $a1, $v1, 0x108
    ctx->r5 = ADD32(ctx->r3, 0X108);
    // 0x8029A3E8: andi        $t3, $a1, 0xFFFF
    ctx->r11 = ctx->r5 & 0XFFFF;
    // 0x8029A3EC: or          $a1, $t3, $zero
    ctx->r5 = ctx->r11 | 0;
    // 0x8029A3F0: jal         0x8007AAF8
    // 0x8029A3F4: sw          $v1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r3;
    func_8007AAF8(rdram, ctx);
        goto after_0;
    // 0x8029A3F4: sw          $v1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r3;
    after_0:
    // 0x8029A3F8: lbu         $t7, 0x214C($s0)
    ctx->r15 = MEM_BU(ctx->r16, 0X214C);
    // 0x8029A3FC: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x8029A400: mtc1        $at, $f20
    ctx->f20.u32l = ctx->r1;
    // 0x8029A404: lbu         $t5, 0x214D($s0)
    ctx->r13 = MEM_BU(ctx->r16, 0X214D);
    // 0x8029A408: lh          $t2, 0x52($sp)
    ctx->r10 = MEM_H(ctx->r29, 0X52);
    // 0x8029A40C: andi        $t8, $t7, 0xFF01
    ctx->r24 = ctx->r15 & 0XFF01;
    // 0x8029A410: lw          $a0, 0x34($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X34);
    // 0x8029A414: ori         $t9, $t8, 0x4
    ctx->r25 = ctx->r24 | 0X4;
    // 0x8029A418: addiu       $t0, $zero, 0xFF
    ctx->r8 = ADD32(0, 0XFF);
    // 0x8029A41C: addiu       $t1, $zero, 0xA
    ctx->r9 = ADD32(0, 0XA);
    // 0x8029A420: addiu       $t3, $zero, 0x6F
    ctx->r11 = ADD32(0, 0X6F);
    // 0x8029A424: ori         $t6, $t5, 0x40
    ctx->r14 = ctx->r13 | 0X40;
    // 0x8029A428: sb          $t6, 0x214D($s0)
    MEM_B(0X214D, ctx->r16) = ctx->r14;
    // 0x8029A42C: sb          $t9, 0x214C($s0)
    MEM_B(0X214C, ctx->r16) = ctx->r25;
    // 0x8029A430: sb          $t0, 0x2155($s0)
    MEM_B(0X2155, ctx->r16) = ctx->r8;
    // 0x8029A434: sb          $t1, 0x2149($s0)
    MEM_B(0X2149, ctx->r16) = ctx->r9;
    // 0x8029A438: sh          $t3, 0x2160($s0)
    MEM_H(0X2160, ctx->r16) = ctx->r11;
    // 0x8029A43C: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    // 0x8029A440: addiu       $a2, $zero, 0x29
    ctx->r6 = ADD32(0, 0X29);
    // 0x8029A444: swc1        $f20, 0x216C($s0)
    MEM_W(0X216C, ctx->r16) = ctx->f20.u32l;
    // 0x8029A448: swc1        $f20, 0x2170($s0)
    MEM_W(0X2170, ctx->r16) = ctx->f20.u32l;
    // 0x8029A44C: jal         0x8002135C
    // 0x8029A450: sh          $t2, 0x215C($s0)
    MEM_H(0X215C, ctx->r16) = ctx->r10;
    func_8002135C(rdram, ctx);
        goto after_1;
    // 0x8029A450: sh          $t2, 0x215C($s0)
    MEM_H(0X215C, ctx->r16) = ctx->r10;
    after_1:
    // 0x8029A454: lbu         $t4, 0x4F($sp)
    ctx->r12 = MEM_BU(ctx->r29, 0X4F);
    // 0x8029A458: lui         $t6, 0x800E
    ctx->r14 = S32(0X800E << 16);
    // 0x8029A45C: sll         $t5, $t4, 4
    ctx->r13 = S32(ctx->r12 << 4);
    // 0x8029A460: subu        $t5, $t5, $t4
    ctx->r13 = SUB32(ctx->r13, ctx->r12);
    // 0x8029A464: sll         $t5, $t5, 2
    ctx->r13 = S32(ctx->r13 << 2);
    // 0x8029A468: addiu       $t6, $t6, -0x3770
    ctx->r14 = ADD32(ctx->r14, -0X3770);
    // 0x8029A46C: lui         $at, 0x2
    ctx->r1 = S32(0X2 << 16);
    // 0x8029A470: ori         $at, $at, 0x8000
    ctx->r1 = ctx->r1 | 0X8000;
    // 0x8029A474: addu        $v1, $t5, $t6
    ctx->r3 = ADD32(ctx->r13, ctx->r14);
    // 0x8029A478: lw          $a1, 0x2C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X2C);
    // 0x8029A47C: addu        $s0, $v1, $at
    ctx->r16 = ADD32(ctx->r3, ctx->r1);
    // 0x8029A480: lui         $at, 0x2
    ctx->r1 = S32(0X2 << 16);
    // 0x8029A484: ori         $at, $at, 0xA180
    ctx->r1 = ctx->r1 | 0XA180;
    // 0x8029A488: addiu       $a1, $a1, 0x109
    ctx->r5 = ADD32(ctx->r5, 0X109);
    // 0x8029A48C: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x8029A490: andi        $t8, $a1, 0xFFFF
    ctx->r24 = ctx->r5 & 0XFFFF;
    // 0x8029A494: addu        $a0, $v1, $at
    ctx->r4 = ADD32(ctx->r3, ctx->r1);
    // 0x8029A498: sb          $t7, 0x2184($s0)
    MEM_B(0X2184, ctx->r16) = ctx->r15;
    // 0x8029A49C: sw          $a0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r4;
    // 0x8029A4A0: jal         0x8007AAF8
    // 0x8029A4A4: or          $a1, $t8, $zero
    ctx->r5 = ctx->r24 | 0;
    func_8007AAF8(rdram, ctx);
        goto after_2;
    // 0x8029A4A4: or          $a1, $t8, $zero
    ctx->r5 = ctx->r24 | 0;
    after_2:
    // 0x8029A4A8: lbu         $t2, 0x2188($s0)
    ctx->r10 = MEM_BU(ctx->r16, 0X2188);
    // 0x8029A4AC: lbu         $t0, 0x2189($s0)
    ctx->r8 = MEM_BU(ctx->r16, 0X2189);
    // 0x8029A4B0: lh          $t7, 0x52($sp)
    ctx->r15 = MEM_H(ctx->r29, 0X52);
    // 0x8029A4B4: andi        $t3, $t2, 0xFF01
    ctx->r11 = ctx->r10 & 0XFF01;
    // 0x8029A4B8: lw          $a0, 0x38($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X38);
    // 0x8029A4BC: ori         $t4, $t3, 0x4
    ctx->r12 = ctx->r11 | 0X4;
    // 0x8029A4C0: addiu       $t5, $zero, 0xFF
    ctx->r13 = ADD32(0, 0XFF);
    // 0x8029A4C4: addiu       $t6, $zero, 0xA
    ctx->r14 = ADD32(0, 0XA);
    // 0x8029A4C8: addiu       $t8, $zero, 0x6F
    ctx->r24 = ADD32(0, 0X6F);
    // 0x8029A4CC: ori         $t1, $t0, 0x40
    ctx->r9 = ctx->r8 | 0X40;
    // 0x8029A4D0: sb          $t1, 0x2189($s0)
    MEM_B(0X2189, ctx->r16) = ctx->r9;
    // 0x8029A4D4: swc1        $f20, 0x21A8($s0)
    MEM_W(0X21A8, ctx->r16) = ctx->f20.u32l;
    // 0x8029A4D8: swc1        $f20, 0x21AC($s0)
    MEM_W(0X21AC, ctx->r16) = ctx->f20.u32l;
    // 0x8029A4DC: sb          $t4, 0x2188($s0)
    MEM_B(0X2188, ctx->r16) = ctx->r12;
    // 0x8029A4E0: sb          $t5, 0x2191($s0)
    MEM_B(0X2191, ctx->r16) = ctx->r13;
    // 0x8029A4E4: sb          $t6, 0x2185($s0)
    MEM_B(0X2185, ctx->r16) = ctx->r14;
    // 0x8029A4E8: sh          $t8, 0x219C($s0)
    MEM_H(0X219C, ctx->r16) = ctx->r24;
    // 0x8029A4EC: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    // 0x8029A4F0: addiu       $a2, $zero, 0x28
    ctx->r6 = ADD32(0, 0X28);
    // 0x8029A4F4: jal         0x8002135C
    // 0x8029A4F8: sh          $t7, 0x2198($s0)
    MEM_H(0X2198, ctx->r16) = ctx->r15;
    func_8002135C(rdram, ctx);
        goto after_3;
    // 0x8029A4F8: sh          $t7, 0x2198($s0)
    MEM_H(0X2198, ctx->r16) = ctx->r15;
    after_3:
L_8029A4FC:
    // 0x8029A4FC: lbu         $v0, 0x4F($sp)
    ctx->r2 = MEM_BU(ctx->r29, 0X4F);
    // 0x8029A500: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x8029A504: sll         $t9, $v0, 4
    ctx->r25 = S32(ctx->r2 << 4);
    // 0x8029A508: mtc1        $at, $f20
    ctx->f20.u32l = ctx->r1;
    // 0x8029A50C: lui         $t0, 0x800E
    ctx->r8 = S32(0X800E << 16);
    // 0x8029A510: subu        $t9, $t9, $v0
    ctx->r25 = SUB32(ctx->r25, ctx->r2);
    // 0x8029A514: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x8029A518: addiu       $t0, $t0, -0x3770
    ctx->r8 = ADD32(ctx->r8, -0X3770);
    // 0x8029A51C: lui         $at, 0x2
    ctx->r1 = S32(0X2 << 16);
    // 0x8029A520: ori         $at, $at, 0x8000
    ctx->r1 = ctx->r1 | 0X8000;
    // 0x8029A524: addu        $v1, $t9, $t0
    ctx->r3 = ADD32(ctx->r25, ctx->r8);
    // 0x8029A528: beq         $v0, $zero, L_8029A558
    if (ctx->r2 == 0) {
        // 0x8029A52C: addu        $s0, $v1, $at
        ctx->r16 = ADD32(ctx->r3, ctx->r1);
            goto L_8029A558;
    }
    // 0x8029A52C: addu        $s0, $v1, $at
    ctx->r16 = ADD32(ctx->r3, ctx->r1);
    // 0x8029A530: addiu       $at, $zero, 0xA
    ctx->r1 = ADD32(0, 0XA);
    // 0x8029A534: div         $zero, $s1, $at
    lo = S32(S64(S32(ctx->r17)) / S64(S32(ctx->r1))); hi = S32(S64(S32(ctx->r17)) % S64(S32(ctx->r1)));
    // 0x8029A538: mflo        $t1
    ctx->r9 = lo;
    // 0x8029A53C: andi        $t2, $t1, 0xFFFF
    ctx->r10 = ctx->r9 & 0XFFFF;
    // 0x8029A540: bne         $t2, $zero, L_8029A550
    if (ctx->r10 != 0) {
        // 0x8029A544: nop
    
            goto L_8029A550;
    }
    // 0x8029A544: nop

    // 0x8029A548: b           L_8029A55C
    // 0x8029A54C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_8029A55C;
    // 0x8029A54C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_8029A550:
    // 0x8029A550: b           L_8029A55C
    // 0x8029A554: addiu       $v0, $zero, 0x38
    ctx->r2 = ADD32(0, 0X38);
        goto L_8029A55C;
    // 0x8029A554: addiu       $v0, $zero, 0x38
    ctx->r2 = ADD32(0, 0X38);
L_8029A558:
    // 0x8029A558: addiu       $v0, $zero, 0x38
    ctx->r2 = ADD32(0, 0X38);
L_8029A55C:
    // 0x8029A55C: lui         $at, 0x2
    ctx->r1 = S32(0X2 << 16);
    // 0x8029A560: ori         $at, $at, 0xA1BC
    ctx->r1 = ctx->r1 | 0XA1BC;
    // 0x8029A564: addu        $a0, $v1, $at
    ctx->r4 = ADD32(ctx->r3, ctx->r1);
    // 0x8029A568: addiu       $at, $zero, 0xA
    ctx->r1 = ADD32(0, 0XA);
    // 0x8029A56C: div         $zero, $s1, $at
    lo = S32(S64(S32(ctx->r17)) / S64(S32(ctx->r1))); hi = S32(S64(S32(ctx->r17)) % S64(S32(ctx->r1)));
    // 0x8029A570: addiu       $t3, $zero, 0x1
    ctx->r11 = ADD32(0, 0X1);
    // 0x8029A574: sb          $t3, 0x21C0($s0)
    MEM_B(0X21C0, ctx->r16) = ctx->r11;
    // 0x8029A578: sw          $a0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r4;
    // 0x8029A57C: sh          $v0, 0x42($sp)
    MEM_H(0X42, ctx->r29) = ctx->r2;
    // 0x8029A580: sw          $v1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r3;
    // 0x8029A584: mfhi        $a2
    ctx->r6 = hi;
    // 0x8029A588: andi        $t4, $a2, 0xFFFF
    ctx->r12 = ctx->r6 & 0XFFFF;
    // 0x8029A58C: sll         $a2, $t4, 1
    ctx->r6 = S32(ctx->r12 << 1);
    // 0x8029A590: addiu       $a1, $a2, 0x108
    ctx->r5 = ADD32(ctx->r6, 0X108);
    // 0x8029A594: andi        $t6, $a1, 0xFFFF
    ctx->r14 = ctx->r5 & 0XFFFF;
    // 0x8029A598: or          $a1, $t6, $zero
    ctx->r5 = ctx->r14 | 0;
    // 0x8029A59C: jal         0x8007AAF8
    // 0x8029A5A0: sw          $a2, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r6;
    func_8007AAF8(rdram, ctx);
        goto after_4;
    // 0x8029A5A0: sw          $a2, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r6;
    after_4:
    // 0x8029A5A4: lbu         $t0, 0x21C4($s0)
    ctx->r8 = MEM_BU(ctx->r16, 0X21C4);
    // 0x8029A5A8: lhu         $v0, 0x42($sp)
    ctx->r2 = MEM_HU(ctx->r29, 0X42);
    // 0x8029A5AC: lbu         $t8, 0x21C5($s0)
    ctx->r24 = MEM_BU(ctx->r16, 0X21C5);
    // 0x8029A5B0: lh          $t5, 0x52($sp)
    ctx->r13 = MEM_H(ctx->r29, 0X52);
    // 0x8029A5B4: andi        $t1, $t0, 0xFF01
    ctx->r9 = ctx->r8 & 0XFF01;
    // 0x8029A5B8: lw          $a0, 0x38($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X38);
    // 0x8029A5BC: ori         $t2, $t1, 0x4
    ctx->r10 = ctx->r9 | 0X4;
    // 0x8029A5C0: addiu       $t3, $zero, 0xFF
    ctx->r11 = ADD32(0, 0XFF);
    // 0x8029A5C4: addiu       $t4, $zero, 0xA
    ctx->r12 = ADD32(0, 0XA);
    // 0x8029A5C8: addiu       $t6, $zero, 0x6F
    ctx->r14 = ADD32(0, 0X6F);
    // 0x8029A5CC: ori         $t9, $t8, 0x40
    ctx->r25 = ctx->r24 | 0X40;
    // 0x8029A5D0: addu        $a3, $v0, $t5
    ctx->r7 = ADD32(ctx->r2, ctx->r13);
    // 0x8029A5D4: sb          $t9, 0x21C5($s0)
    MEM_B(0X21C5, ctx->r16) = ctx->r25;
    // 0x8029A5D8: swc1        $f20, 0x21E4($s0)
    MEM_W(0X21E4, ctx->r16) = ctx->f20.u32l;
    // 0x8029A5DC: swc1        $f20, 0x21E8($s0)
    MEM_W(0X21E8, ctx->r16) = ctx->f20.u32l;
    // 0x8029A5E0: sb          $t2, 0x21C4($s0)
    MEM_B(0X21C4, ctx->r16) = ctx->r10;
    // 0x8029A5E4: sb          $t3, 0x21CD($s0)
    MEM_B(0X21CD, ctx->r16) = ctx->r11;
    // 0x8029A5E8: sb          $t4, 0x21C1($s0)
    MEM_B(0X21C1, ctx->r16) = ctx->r12;
    // 0x8029A5EC: sh          $a3, 0x21D4($s0)
    MEM_H(0X21D4, ctx->r16) = ctx->r7;
    // 0x8029A5F0: sh          $t6, 0x21D8($s0)
    MEM_H(0X21D8, ctx->r16) = ctx->r14;
    // 0x8029A5F4: sw          $a3, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r7;
    // 0x8029A5F8: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    // 0x8029A5FC: jal         0x8002135C
    // 0x8029A600: addiu       $a2, $zero, 0x29
    ctx->r6 = ADD32(0, 0X29);
    func_8002135C(rdram, ctx);
        goto after_5;
    // 0x8029A600: addiu       $a2, $zero, 0x29
    ctx->r6 = ADD32(0, 0X29);
    after_5:
    // 0x8029A604: lw          $a1, 0x2C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X2C);
    // 0x8029A608: lw          $v1, 0x34($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X34);
    // 0x8029A60C: lui         $at, 0x2
    ctx->r1 = S32(0X2 << 16);
    // 0x8029A610: ori         $at, $at, 0xA1F8
    ctx->r1 = ctx->r1 | 0XA1F8;
    // 0x8029A614: addiu       $a1, $a1, 0x109
    ctx->r5 = ADD32(ctx->r5, 0X109);
    // 0x8029A618: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x8029A61C: andi        $t8, $a1, 0xFFFF
    ctx->r24 = ctx->r5 & 0XFFFF;
    // 0x8029A620: addu        $a0, $v1, $at
    ctx->r4 = ADD32(ctx->r3, ctx->r1);
    // 0x8029A624: sb          $t7, 0x21FC($s0)
    MEM_B(0X21FC, ctx->r16) = ctx->r15;
    // 0x8029A628: sw          $a0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r4;
    // 0x8029A62C: jal         0x8007AAF8
    // 0x8029A630: or          $a1, $t8, $zero
    ctx->r5 = ctx->r24 | 0;
    func_8007AAF8(rdram, ctx);
        goto after_6;
    // 0x8029A630: or          $a1, $t8, $zero
    ctx->r5 = ctx->r24 | 0;
    after_6:
    // 0x8029A634: lbu         $t2, 0x2200($s0)
    ctx->r10 = MEM_BU(ctx->r16, 0X2200);
    // 0x8029A638: lbu         $t0, 0x2201($s0)
    ctx->r8 = MEM_BU(ctx->r16, 0X2201);
    // 0x8029A63C: lw          $t7, 0x3C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X3C);
    // 0x8029A640: andi        $t3, $t2, 0xFF01
    ctx->r11 = ctx->r10 & 0XFF01;
    // 0x8029A644: lw          $a0, 0x38($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X38);
    // 0x8029A648: ori         $t4, $t3, 0x4
    ctx->r12 = ctx->r11 | 0X4;
    // 0x8029A64C: addiu       $t5, $zero, 0xFF
    ctx->r13 = ADD32(0, 0XFF);
    // 0x8029A650: addiu       $t6, $zero, 0xA
    ctx->r14 = ADD32(0, 0XA);
    // 0x8029A654: addiu       $t8, $zero, 0x6F
    ctx->r24 = ADD32(0, 0X6F);
    // 0x8029A658: ori         $t1, $t0, 0x40
    ctx->r9 = ctx->r8 | 0X40;
    // 0x8029A65C: sb          $t1, 0x2201($s0)
    MEM_B(0X2201, ctx->r16) = ctx->r9;
    // 0x8029A660: swc1        $f20, 0x2220($s0)
    MEM_W(0X2220, ctx->r16) = ctx->f20.u32l;
    // 0x8029A664: swc1        $f20, 0x2224($s0)
    MEM_W(0X2224, ctx->r16) = ctx->f20.u32l;
    // 0x8029A668: sb          $t4, 0x2200($s0)
    MEM_B(0X2200, ctx->r16) = ctx->r12;
    // 0x8029A66C: sb          $t5, 0x2209($s0)
    MEM_B(0X2209, ctx->r16) = ctx->r13;
    // 0x8029A670: sb          $t6, 0x21FD($s0)
    MEM_B(0X21FD, ctx->r16) = ctx->r14;
    // 0x8029A674: sh          $t8, 0x2214($s0)
    MEM_H(0X2214, ctx->r16) = ctx->r24;
    // 0x8029A678: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    // 0x8029A67C: addiu       $a2, $zero, 0x28
    ctx->r6 = ADD32(0, 0X28);
    // 0x8029A680: jal         0x8002135C
    // 0x8029A684: sh          $t7, 0x2210($s0)
    MEM_H(0X2210, ctx->r16) = ctx->r15;
    func_8002135C(rdram, ctx);
        goto after_7;
    // 0x8029A684: sh          $t7, 0x2210($s0)
    MEM_H(0X2210, ctx->r16) = ctx->r15;
    after_7:
    // 0x8029A688: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x8029A68C: lwc1        $f21, 0x10($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X10);
    // 0x8029A690: lwc1        $f20, 0x14($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X14);
    // 0x8029A694: lw          $s0, 0x1C($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X1C);
    // 0x8029A698: lw          $s1, 0x20($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X20);
    // 0x8029A69C: jr          $ra
    // 0x8029A6A0: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    return;
    // 0x8029A6A0: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
;}
RECOMP_FUNC void func_8029A6A4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8029A6A4: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x8029A6A8: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x8029A6AC: lui         $s0, 0x8010
    ctx->r16 = S32(0X8010 << 16);
    // 0x8029A6B0: addiu       $s0, $s0, 0x4890
    ctx->r16 = ADD32(ctx->r16, 0X4890);
    // 0x8029A6B4: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x8029A6B8: addiu       $t7, $zero, -0xB8
    ctx->r15 = ADD32(0, -0XB8);
    // 0x8029A6BC: sb          $t6, 0x2328($s0)
    MEM_B(0X2328, ctx->r16) = ctx->r14;
    // 0x8029A6C0: sw          $zero, 0x2354($s0)
    MEM_W(0X2354, ctx->r16) = 0;
    // 0x8029A6C4: sh          $t7, 0x233C($s0)
    MEM_H(0X233C, ctx->r16) = ctx->r15;
    // 0x8029A6C8: lui         $t8, 0x8012
    ctx->r24 = S32(0X8012 << 16);
    // 0x8029A6CC: lw          $t8, 0xB24($t8)
    ctx->r24 = MEM_W(ctx->r24, 0XB24);
    // 0x8029A6D0: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x8029A6D4: lw          $t9, 0xC8($t8)
    ctx->r25 = MEM_W(ctx->r24, 0XC8);
    // 0x8029A6D8: addiu       $t1, $zero, 0x1E
    ctx->r9 = ADD32(0, 0X1E);
    // 0x8029A6DC: lbu         $a1, 0x0($t9)
    ctx->r5 = MEM_BU(ctx->r25, 0X0);
    // 0x8029A6E0: addiu       $t2, $zero, 0x18
    ctx->r10 = ADD32(0, 0X18);
    // 0x8029A6E4: sw          $t2, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r10;
    // 0x8029A6E8: sw          $t1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r9;
    // 0x8029A6EC: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    // 0x8029A6F0: addiu       $a2, $zero, -0xB8
    ctx->r6 = ADD32(0, -0XB8);
    // 0x8029A6F4: jal         0x8000E0A8
    // 0x8029A6F8: addiu       $a3, $zero, 0xA4
    ctx->r7 = ADD32(0, 0XA4);
    func_8000E0A8(rdram, ctx);
        goto after_0;
    // 0x8029A6F8: addiu       $a3, $zero, 0xA4
    ctx->r7 = ADD32(0, 0XA4);
    after_0:
    // 0x8029A6FC: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    // 0x8029A700: jal         0x8000E1F4
    // 0x8029A704: lui         $a1, 0x3F80
    ctx->r5 = S32(0X3F80 << 16);
    func_8000E1F4(rdram, ctx);
        goto after_1;
    // 0x8029A704: lui         $a1, 0x3F80
    ctx->r5 = S32(0X3F80 << 16);
    after_1:
    // 0x8029A708: addiu       $t3, $zero, 0x1
    ctx->r11 = ADD32(0, 0X1);
    // 0x8029A70C: lui         $a0, 0x8010
    ctx->r4 = S32(0X8010 << 16);
    // 0x8029A710: sb          $t3, 0x22B0($s0)
    MEM_B(0X22B0, ctx->r16) = ctx->r11;
    // 0x8029A714: addiu       $a0, $a0, 0x6B3C
    ctx->r4 = ADD32(ctx->r4, 0X6B3C);
    // 0x8029A718: jal         0x8007AAF8
    // 0x8029A71C: addiu       $a1, $zero, 0x11E
    ctx->r5 = ADD32(0, 0X11E);
    func_8007AAF8(rdram, ctx);
        goto after_2;
    // 0x8029A71C: addiu       $a1, $zero, 0x11E
    ctx->r5 = ADD32(0, 0X11E);
    after_2:
    // 0x8029A720: lbu         $t4, 0x22B5($s0)
    ctx->r12 = MEM_BU(ctx->r16, 0X22B5);
    // 0x8029A724: lbu         $t6, 0x22B4($s0)
    ctx->r14 = MEM_BU(ctx->r16, 0X22B4);
    // 0x8029A728: addiu       $t8, $zero, 0xC0
    ctx->r24 = ADD32(0, 0XC0);
    // 0x8029A72C: addiu       $t9, $zero, 0xA
    ctx->r25 = ADD32(0, 0XA);
    // 0x8029A730: addiu       $t1, $zero, -0x100
    ctx->r9 = ADD32(0, -0X100);
    // 0x8029A734: lui         $a0, 0x8010
    ctx->r4 = S32(0X8010 << 16);
    // 0x8029A738: andi        $t5, $t4, 0xFFBF
    ctx->r13 = ctx->r12 & 0XFFBF;
    // 0x8029A73C: andi        $t7, $t6, 0xFF01
    ctx->r15 = ctx->r14 & 0XFF01;
    // 0x8029A740: sb          $t5, 0x22B5($s0)
    MEM_B(0X22B5, ctx->r16) = ctx->r13;
    // 0x8029A744: sb          $t7, 0x22B4($s0)
    MEM_B(0X22B4, ctx->r16) = ctx->r15;
    // 0x8029A748: sb          $t8, 0x22BD($s0)
    MEM_B(0X22BD, ctx->r16) = ctx->r24;
    // 0x8029A74C: sb          $t9, 0x22B1($s0)
    MEM_B(0X22B1, ctx->r16) = ctx->r25;
    // 0x8029A750: sh          $t1, 0x22C4($s0)
    MEM_H(0X22C4, ctx->r16) = ctx->r9;
    // 0x8029A754: sh          $zero, 0x22C8($s0)
    MEM_H(0X22C8, ctx->r16) = 0;
    // 0x8029A758: addiu       $a0, $a0, 0x6B3C
    ctx->r4 = ADD32(ctx->r4, 0X6B3C);
    // 0x8029A75C: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    // 0x8029A760: jal         0x8002135C
    // 0x8029A764: addiu       $a2, $zero, 0x2A
    ctx->r6 = ADD32(0, 0X2A);
    func_8002135C(rdram, ctx);
        goto after_3;
    // 0x8029A764: addiu       $a2, $zero, 0x2A
    ctx->r6 = ADD32(0, 0X2A);
    after_3:
    // 0x8029A768: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x8029A76C: lw          $v0, 0xB24($v0)
    ctx->r2 = MEM_W(ctx->r2, 0XB24);
    // 0x8029A770: lui         $a0, 0x8011
    ctx->r4 = S32(0X8011 << 16);
    // 0x8029A774: lw          $a1, 0xC8($v0)
    ctx->r5 = MEM_W(ctx->r2, 0XC8);
    // 0x8029A778: addiu       $t5, $zero, 0xAA
    ctx->r13 = ADD32(0, 0XAA);
    // 0x8029A77C: lhu         $t2, 0x6($a1)
    ctx->r10 = MEM_HU(ctx->r5, 0X6);
    // 0x8029A780: addiu       $a0, $a0, -0x3888
    ctx->r4 = ADD32(ctx->r4, -0X3888);
    // 0x8029A784: sb          $t2, 0x3A($sp)
    MEM_B(0X3A, ctx->r29) = ctx->r10;
    // 0x8029A788: lhu         $t3, 0x1A($v0)
    ctx->r11 = MEM_HU(ctx->r2, 0X1A);
    // 0x8029A78C: addiu       $a3, $zero, -0x70
    ctx->r7 = ADD32(0, -0X70);
    // 0x8029A790: addu        $t4, $a1, $t3
    ctx->r12 = ADD32(ctx->r5, ctx->r11);
    // 0x8029A794: lbu         $a2, 0x308($t4)
    ctx->r6 = MEM_BU(ctx->r12, 0X308);
    // 0x8029A798: jal         0x8006ED60
    // 0x8029A79C: sw          $t5, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r13;
    func_8006ED60(rdram, ctx);
        goto after_4;
    // 0x8029A79C: sw          $t5, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r13;
    after_4:
    // 0x8029A7A0: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x8029A7A4: lw          $v0, 0xB24($v0)
    ctx->r2 = MEM_W(ctx->r2, 0XB24);
    // 0x8029A7A8: lui         $a0, 0x8010
    ctx->r4 = S32(0X8010 << 16);
    // 0x8029A7AC: lw          $t6, 0xC8($v0)
    ctx->r14 = MEM_W(ctx->r2, 0XC8);
    // 0x8029A7B0: lhu         $t7, 0x1A($v0)
    ctx->r15 = MEM_HU(ctx->r2, 0X1A);
    // 0x8029A7B4: lbu         $a1, 0x3A($sp)
    ctx->r5 = MEM_BU(ctx->r29, 0X3A);
    // 0x8029A7B8: addu        $t8, $t6, $t7
    ctx->r24 = ADD32(ctx->r14, ctx->r15);
    // 0x8029A7BC: lbu         $a2, 0x308($t8)
    ctx->r6 = MEM_BU(ctx->r24, 0X308);
    // 0x8029A7C0: addiu       $a0, $a0, 0x6B78
    ctx->r4 = ADD32(ctx->r4, 0X6B78);
    // 0x8029A7C4: jal         0x80039440
    // 0x8029A7C8: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    func_80039440(rdram, ctx);
        goto after_5;
    // 0x8029A7C8: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_5:
    // 0x8029A7CC: lbu         $t1, 0x22F1($s0)
    ctx->r9 = MEM_BU(ctx->r16, 0X22F1);
    // 0x8029A7D0: lbu         $t3, 0x22F0($s0)
    ctx->r11 = MEM_BU(ctx->r16, 0X22F0);
    // 0x8029A7D4: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x8029A7D8: lui         $t8, 0x802C
    ctx->r24 = S32(0X802C << 16);
    // 0x8029A7DC: sb          $t9, 0x22EC($s0)
    MEM_B(0X22EC, ctx->r16) = ctx->r25;
    // 0x8029A7E0: addiu       $t5, $zero, 0xA
    ctx->r13 = ADD32(0, 0XA);
    // 0x8029A7E4: addiu       $t6, $zero, -0x90
    ctx->r14 = ADD32(0, -0X90);
    // 0x8029A7E8: addiu       $t7, $zero, 0xA0
    ctx->r15 = ADD32(0, 0XA0);
    // 0x8029A7EC: addiu       $t8, $t8, -0x3580
    ctx->r24 = ADD32(ctx->r24, -0X3580);
    // 0x8029A7F0: andi        $t2, $t1, 0xFFBF
    ctx->r10 = ctx->r9 & 0XFFBF;
    // 0x8029A7F4: andi        $t4, $t3, 0xFF01
    ctx->r12 = ctx->r11 & 0XFF01;
    // 0x8029A7F8: sb          $t2, 0x22F1($s0)
    MEM_B(0X22F1, ctx->r16) = ctx->r10;
    // 0x8029A7FC: sb          $t4, 0x22F0($s0)
    MEM_B(0X22F0, ctx->r16) = ctx->r12;
    // 0x8029A800: sb          $t5, 0x22ED($s0)
    MEM_B(0X22ED, ctx->r16) = ctx->r13;
    // 0x8029A804: sh          $t6, 0x2300($s0)
    MEM_H(0X2300, ctx->r16) = ctx->r14;
    // 0x8029A808: sh          $t7, 0x2304($s0)
    MEM_H(0X2304, ctx->r16) = ctx->r15;
    // 0x8029A80C: sw          $t8, 0x2318($s0)
    MEM_W(0X2318, ctx->r16) = ctx->r24;
    // 0x8029A810: lui         $t9, 0x8012
    ctx->r25 = S32(0X8012 << 16);
    // 0x8029A814: lbu         $t9, 0xB65($t9)
    ctx->r25 = MEM_BU(ctx->r25, 0XB65);
    // 0x8029A818: lui         $a1, 0x8012
    ctx->r5 = S32(0X8012 << 16);
    // 0x8029A81C: bne         $t9, $zero, L_8029AB84
    if (ctx->r25 != 0) {
        // 0x8029A820: addiu       $a1, $a1, -0x2CF0
        ctx->r5 = ADD32(ctx->r5, -0X2CF0);
            goto L_8029AB84;
    }
    // 0x8029A820: addiu       $a1, $a1, -0x2CF0
    ctx->r5 = ADD32(ctx->r5, -0X2CF0);
    // 0x8029A824: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x8029A828: lw          $v0, 0xB24($v0)
    ctx->r2 = MEM_W(ctx->r2, 0XB24);
    // 0x8029A82C: lhu         $t1, 0xA9E($a1)
    ctx->r9 = MEM_HU(ctx->r5, 0XA9E);
    // 0x8029A830: lhu         $t2, 0xA($a1)
    ctx->r10 = MEM_HU(ctx->r5, 0XA);
    // 0x8029A834: lw          $t4, 0xC8($v0)
    ctx->r12 = MEM_W(ctx->r2, 0XC8);
    // 0x8029A838: lhu         $t5, 0x1A($v0)
    ctx->r13 = MEM_HU(ctx->r2, 0X1A);
    // 0x8029A83C: addu        $a0, $t1, $t2
    ctx->r4 = ADD32(ctx->r9, ctx->r10);
    // 0x8029A840: addu        $t6, $t4, $t5
    ctx->r14 = ADD32(ctx->r12, ctx->r13);
    // 0x8029A844: andi        $a2, $a0, 0xFF
    ctx->r6 = ctx->r4 & 0XFF;
    // 0x8029A848: lbu         $a3, 0x308($t6)
    ctx->r7 = MEM_BU(ctx->r14, 0X308);
    // 0x8029A84C: or          $t0, $zero, $zero
    ctx->r8 = 0 | 0;
    // 0x8029A850: blez        $a2, L_8029A8A8
    if (SIGNED(ctx->r6) <= 0) {
        // 0x8029A854: or          $v1, $zero, $zero
        ctx->r3 = 0 | 0;
            goto L_8029A8A8;
    }
    // 0x8029A854: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x8029A858: lui         $a1, 0x8012
    ctx->r5 = S32(0X8012 << 16);
    // 0x8029A85C: lbu         $a0, 0x3A($sp)
    ctx->r4 = MEM_BU(ctx->r29, 0X3A);
    // 0x8029A860: addiu       $a1, $a1, 0xB88
    ctx->r5 = ADD32(ctx->r5, 0XB88);
L_8029A864:
    // 0x8029A864: sll         $t7, $v1, 2
    ctx->r15 = S32(ctx->r3 << 2);
    // 0x8029A868: addu        $v0, $a1, $t7
    ctx->r2 = ADD32(ctx->r5, ctx->r15);
    // 0x8029A86C: lbu         $t8, 0x0($v0)
    ctx->r24 = MEM_BU(ctx->r2, 0X0);
    // 0x8029A870: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x8029A874: andi        $t9, $t8, 0xF
    ctx->r25 = ctx->r24 & 0XF;
    // 0x8029A878: bne         $a0, $t9, L_8029A89C
    if (ctx->r4 != ctx->r25) {
        // 0x8029A87C: andi        $t3, $v1, 0xFF
        ctx->r11 = ctx->r3 & 0XFF;
            goto L_8029A89C;
    }
    // 0x8029A87C: andi        $t3, $v1, 0xFF
    ctx->r11 = ctx->r3 & 0XFF;
    // 0x8029A880: lbu         $t1, 0x1($v0)
    ctx->r9 = MEM_BU(ctx->r2, 0X1);
    // 0x8029A884: nop

    // 0x8029A888: bne         $a3, $t1, L_8029A8A0
    if (ctx->r7 != ctx->r9) {
        // 0x8029A88C: slt         $at, $t3, $a2
        ctx->r1 = SIGNED(ctx->r11) < SIGNED(ctx->r6) ? 1 : 0;
            goto L_8029A8A0;
    }
    // 0x8029A88C: slt         $at, $t3, $a2
    ctx->r1 = SIGNED(ctx->r11) < SIGNED(ctx->r6) ? 1 : 0;
    // 0x8029A890: addiu       $t0, $t0, 0x1
    ctx->r8 = ADD32(ctx->r8, 0X1);
    // 0x8029A894: andi        $t2, $t0, 0xFF
    ctx->r10 = ctx->r8 & 0XFF;
    // 0x8029A898: or          $t0, $t2, $zero
    ctx->r8 = ctx->r10 | 0;
L_8029A89C:
    // 0x8029A89C: slt         $at, $t3, $a2
    ctx->r1 = SIGNED(ctx->r11) < SIGNED(ctx->r6) ? 1 : 0;
L_8029A8A0:
    // 0x8029A8A0: bne         $at, $zero, L_8029A864
    if (ctx->r1 != 0) {
        // 0x8029A8A4: or          $v1, $t3, $zero
        ctx->r3 = ctx->r11 | 0;
            goto L_8029A864;
    }
    // 0x8029A8A4: or          $v1, $t3, $zero
    ctx->r3 = ctx->r11 | 0;
L_8029A8A8:
    // 0x8029A8A8: lui         $a0, 0x8011
    ctx->r4 = S32(0X8011 << 16);
    // 0x8029A8AC: addiu       $t4, $zero, 0x2
    ctx->r12 = ADD32(0, 0X2);
    // 0x8029A8B0: addiu       $t5, $zero, 0x2
    ctx->r13 = ADD32(0, 0X2);
    // 0x8029A8B4: sw          $t5, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r13;
    // 0x8029A8B8: sw          $t4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r12;
    // 0x8029A8BC: addiu       $a0, $a0, -0x3868
    ctx->r4 = ADD32(ctx->r4, -0X3868);
    // 0x8029A8C0: addiu       $a1, $zero, -0x40
    ctx->r5 = ADD32(0, -0X40);
    // 0x8029A8C4: addiu       $a2, $zero, 0xA9
    ctx->r6 = ADD32(0, 0XA9);
    // 0x8029A8C8: or          $a3, $t0, $zero
    ctx->r7 = ctx->r8 | 0;
    // 0x8029A8CC: sw          $t0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r8;
    // 0x8029A8D0: jal         0x8002F6EC
    // 0x8029A8D4: sb          $t0, 0x37($sp)
    MEM_B(0X37, ctx->r29) = ctx->r8;
    func_8002F6EC(rdram, ctx);
        goto after_6;
    // 0x8029A8D4: sb          $t0, 0x37($sp)
    MEM_B(0X37, ctx->r29) = ctx->r8;
    after_6:
    // 0x8029A8D8: lw          $a3, 0x2C($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X2C);
    // 0x8029A8DC: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8029A8E0: bne         $a3, $at, L_8029A91C
    if (ctx->r7 != ctx->r1) {
        // 0x8029A8E4: lui         $a0, 0x8011
        ctx->r4 = S32(0X8011 << 16);
            goto L_8029A91C;
    }
    // 0x8029A8E4: lui         $a0, 0x8011
    ctx->r4 = S32(0X8011 << 16);
    // 0x8029A8E8: lui         $a0, 0x8011
    ctx->r4 = S32(0X8011 << 16);
    // 0x8029A8EC: lui         $a3, 0x800B
    ctx->r7 = S32(0X800B << 16);
    // 0x8029A8F0: addiu       $t6, $zero, 0x4
    ctx->r14 = ADD32(0, 0X4);
    // 0x8029A8F4: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x8029A8F8: sw          $t7, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r15;
    // 0x8029A8FC: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x8029A900: addiu       $a3, $a3, -0x5520
    ctx->r7 = ADD32(ctx->r7, -0X5520);
    // 0x8029A904: addiu       $a0, $a0, -0x3848
    ctx->r4 = ADD32(ctx->r4, -0X3848);
    // 0x8029A908: addiu       $a1, $zero, -0x30
    ctx->r5 = ADD32(0, -0X30);
    // 0x8029A90C: jal         0x8002F3D4
    // 0x8029A910: addiu       $a2, $zero, 0xAA
    ctx->r6 = ADD32(0, 0XAA);
    func_8002F3D4(rdram, ctx);
        goto after_7;
    // 0x8029A910: addiu       $a2, $zero, 0xAA
    ctx->r6 = ADD32(0, 0XAA);
    after_7:
    // 0x8029A914: b           L_8029A948
    // 0x8029A918: addiu       $a0, $zero, 0xD
    ctx->r4 = ADD32(0, 0XD);
        goto L_8029A948;
    // 0x8029A918: addiu       $a0, $zero, 0xD
    ctx->r4 = ADD32(0, 0XD);
L_8029A91C:
    // 0x8029A91C: lui         $a3, 0x800B
    ctx->r7 = S32(0X800B << 16);
    // 0x8029A920: addiu       $t8, $zero, 0x5
    ctx->r24 = ADD32(0, 0X5);
    // 0x8029A924: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x8029A928: sw          $t9, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r25;
    // 0x8029A92C: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    // 0x8029A930: addiu       $a3, $a3, -0x551C
    ctx->r7 = ADD32(ctx->r7, -0X551C);
    // 0x8029A934: addiu       $a0, $a0, -0x3848
    ctx->r4 = ADD32(ctx->r4, -0X3848);
    // 0x8029A938: addiu       $a1, $zero, -0x30
    ctx->r5 = ADD32(0, -0X30);
    // 0x8029A93C: jal         0x8002F3D4
    // 0x8029A940: addiu       $a2, $zero, 0xAA
    ctx->r6 = ADD32(0, 0XAA);
    func_8002F3D4(rdram, ctx);
        goto after_8;
    // 0x8029A940: addiu       $a2, $zero, 0xAA
    ctx->r6 = ADD32(0, 0XAA);
    after_8:
    // 0x8029A944: addiu       $a0, $zero, 0xD
    ctx->r4 = ADD32(0, 0XD);
L_8029A948:
    // 0x8029A948: addiu       $a1, $zero, -0x100
    ctx->r5 = ADD32(0, -0X100);
    // 0x8029A94C: jal         0x8029ACD4
    // 0x8029A950: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8029ACD4(rdram, ctx);
        goto after_9;
    // 0x8029A950: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_9:
    // 0x8029A954: lui         $a0, 0x8010
    ctx->r4 = S32(0X8010 << 16);
    // 0x8029A958: addiu       $a0, $a0, 0x6CE0
    ctx->r4 = ADD32(ctx->r4, 0X6CE0);
    // 0x8029A95C: jal         0x8007AAF8
    // 0x8029A960: addiu       $a1, $zero, 0x1F4
    ctx->r5 = ADD32(0, 0X1F4);
    func_8007AAF8(rdram, ctx);
        goto after_10;
    // 0x8029A960: addiu       $a1, $zero, 0x1F4
    ctx->r5 = ADD32(0, 0X1F4);
    after_10:
    // 0x8029A964: lui         $a0, 0x8010
    ctx->r4 = S32(0X8010 << 16);
    // 0x8029A968: addiu       $a0, $a0, 0x6CE0
    ctx->r4 = ADD32(ctx->r4, 0X6CE0);
    // 0x8029A96C: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    // 0x8029A970: jal         0x8002135C
    // 0x8029A974: addiu       $a2, $zero, 0x2A
    ctx->r6 = ADD32(0, 0X2A);
    func_8002135C(rdram, ctx);
        goto after_11;
    // 0x8029A974: addiu       $a2, $zero, 0x2A
    ctx->r6 = ADD32(0, 0X2A);
    after_11:
    // 0x8029A978: cfc1        $t1, $FpcCsr
    ctx->r9 = get_cop1_cs();
    // 0x8029A97C: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x8029A980: lwc1        $f4, 0xB58($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0XB58);
    // 0x8029A984: ori         $at, $t1, 0x3
    ctx->r1 = ctx->r9 | 0X3;
    // 0x8029A988: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x8029A98C: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x8029A990: addiu       $v1, $zero, 0xA
    ctx->r3 = ADD32(0, 0XA);
    // 0x8029A994: cvt.w.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = CVT_W_S(ctx->f4.fl);
    // 0x8029A998: addiu       $a0, $zero, 0xE
    ctx->r4 = ADD32(0, 0XE);
    // 0x8029A99C: mfc1        $v0, $f6
    ctx->r2 = (int32_t)ctx->f6.u32l;
    // 0x8029A9A0: ctc1        $t1, $FpcCsr
    set_cop1_cs(ctx->r9);
    // 0x8029A9A4: sll         $t2, $v0, 16
    ctx->r10 = S32(ctx->r2 << 16);
    // 0x8029A9A8: sra         $t3, $t2, 16
    ctx->r11 = S32(SIGNED(ctx->r10) >> 16);
    // 0x8029A9AC: div         $zero, $t3, $v1
    lo = S32(S64(S32(ctx->r11)) / S64(S32(ctx->r3))); hi = S32(S64(S32(ctx->r11)) % S64(S32(ctx->r3)));
    // 0x8029A9B0: or          $v0, $t3, $zero
    ctx->r2 = ctx->r11 | 0;
    // 0x8029A9B4: bne         $v1, $zero, L_8029A9C0
    if (ctx->r3 != 0) {
        // 0x8029A9B8: nop
    
            goto L_8029A9C0;
    }
    // 0x8029A9B8: nop

    // 0x8029A9BC: break       7
    do_break(2150214076);
L_8029A9C0:
    // 0x8029A9C0: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x8029A9C4: bne         $v1, $at, L_8029A9D8
    if (ctx->r3 != ctx->r1) {
        // 0x8029A9C8: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_8029A9D8;
    }
    // 0x8029A9C8: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x8029A9CC: bne         $v0, $at, L_8029A9D8
    if (ctx->r2 != ctx->r1) {
        // 0x8029A9D0: nop
    
            goto L_8029A9D8;
    }
    // 0x8029A9D0: nop

    // 0x8029A9D4: break       6
    do_break(2150214100);
L_8029A9D8:
    // 0x8029A9D8: addiu       $a1, $zero, -0x100
    ctx->r5 = ADD32(0, -0X100);
    // 0x8029A9DC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x8029A9E0: mflo        $t4
    ctx->r12 = lo;
    // 0x8029A9E4: mfhi        $t6
    ctx->r14 = hi;
    // 0x8029A9E8: sh          $t4, 0x30($sp)
    MEM_H(0X30, ctx->r29) = ctx->r12;
    // 0x8029A9EC: jal         0x8029ACD4
    // 0x8029A9F0: sh          $t6, 0x32($sp)
    MEM_H(0X32, ctx->r29) = ctx->r14;
    func_8029ACD4(rdram, ctx);
        goto after_12;
    // 0x8029A9F0: sh          $t6, 0x32($sp)
    MEM_H(0X32, ctx->r29) = ctx->r14;
    after_12:
    // 0x8029A9F4: lh          $v0, 0x32($sp)
    ctx->r2 = MEM_H(ctx->r29, 0X32);
    // 0x8029A9F8: lui         $a0, 0x8010
    ctx->r4 = S32(0X8010 << 16);
    // 0x8029A9FC: addiu       $a1, $v0, 0x1F5
    ctx->r5 = ADD32(ctx->r2, 0X1F5);
    // 0x8029AA00: andi        $t7, $a1, 0xFFFF
    ctx->r15 = ctx->r5 & 0XFFFF;
    // 0x8029AA04: or          $a1, $t7, $zero
    ctx->r5 = ctx->r15 | 0;
    // 0x8029AA08: jal         0x8007AAF8
    // 0x8029AA0C: addiu       $a0, $a0, 0x6D1C
    ctx->r4 = ADD32(ctx->r4, 0X6D1C);
    func_8007AAF8(rdram, ctx);
        goto after_13;
    // 0x8029AA0C: addiu       $a0, $a0, 0x6D1C
    ctx->r4 = ADD32(ctx->r4, 0X6D1C);
    after_13:
    // 0x8029AA10: lui         $a0, 0x8010
    ctx->r4 = S32(0X8010 << 16);
    // 0x8029AA14: addiu       $a0, $a0, 0x6D1C
    ctx->r4 = ADD32(ctx->r4, 0X6D1C);
    // 0x8029AA18: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    // 0x8029AA1C: jal         0x8002135C
    // 0x8029AA20: addiu       $a2, $zero, 0x2A
    ctx->r6 = ADD32(0, 0X2A);
    func_8002135C(rdram, ctx);
        goto after_14;
    // 0x8029AA20: addiu       $a2, $zero, 0x2A
    ctx->r6 = ADD32(0, 0X2A);
    after_14:
    // 0x8029AA24: addiu       $a0, $zero, 0x10
    ctx->r4 = ADD32(0, 0X10);
    // 0x8029AA28: addiu       $a1, $zero, -0x110
    ctx->r5 = ADD32(0, -0X110);
    // 0x8029AA2C: jal         0x8029ACD4
    // 0x8029AA30: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8029ACD4(rdram, ctx);
        goto after_15;
    // 0x8029AA30: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_15:
    // 0x8029AA34: lh          $a1, 0x30($sp)
    ctx->r5 = MEM_H(ctx->r29, 0X30);
    // 0x8029AA38: addiu       $at, $zero, 0xA
    ctx->r1 = ADD32(0, 0XA);
    // 0x8029AA3C: div         $zero, $a1, $at
    lo = S32(S64(S32(ctx->r5)) / S64(S32(ctx->r1))); hi = S32(S64(S32(ctx->r5)) % S64(S32(ctx->r1)));
    // 0x8029AA40: lui         $a0, 0x8010
    ctx->r4 = S32(0X8010 << 16);
    // 0x8029AA44: addiu       $a0, $a0, 0x6D94
    ctx->r4 = ADD32(ctx->r4, 0X6D94);
    // 0x8029AA48: mfhi        $t8
    ctx->r24 = hi;
    // 0x8029AA4C: addiu       $a1, $t8, 0x1F5
    ctx->r5 = ADD32(ctx->r24, 0X1F5);
    // 0x8029AA50: andi        $t9, $a1, 0xFFFF
    ctx->r25 = ctx->r5 & 0XFFFF;
    // 0x8029AA54: jal         0x8007AAF8
    // 0x8029AA58: or          $a1, $t9, $zero
    ctx->r5 = ctx->r25 | 0;
    func_8007AAF8(rdram, ctx);
        goto after_16;
    // 0x8029AA58: or          $a1, $t9, $zero
    ctx->r5 = ctx->r25 | 0;
    after_16:
    // 0x8029AA5C: lui         $a0, 0x8010
    ctx->r4 = S32(0X8010 << 16);
    // 0x8029AA60: addiu       $a0, $a0, 0x6D94
    ctx->r4 = ADD32(ctx->r4, 0X6D94);
    // 0x8029AA64: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    // 0x8029AA68: jal         0x8002135C
    // 0x8029AA6C: addiu       $a2, $zero, 0x2A
    ctx->r6 = ADD32(0, 0X2A);
    func_8002135C(rdram, ctx);
        goto after_17;
    // 0x8029AA6C: addiu       $a2, $zero, 0x2A
    ctx->r6 = ADD32(0, 0X2A);
    after_17:
    // 0x8029AA70: lh          $v0, 0x30($sp)
    ctx->r2 = MEM_H(ctx->r29, 0X30);
    // 0x8029AA74: addiu       $at, $zero, 0xA
    ctx->r1 = ADD32(0, 0XA);
    // 0x8029AA78: div         $zero, $v0, $at
    lo = S32(S64(S32(ctx->r2)) / S64(S32(ctx->r1))); hi = S32(S64(S32(ctx->r2)) % S64(S32(ctx->r1)));
    // 0x8029AA7C: addiu       $a0, $zero, 0x11
    ctx->r4 = ADD32(0, 0X11);
    // 0x8029AA80: addiu       $a1, $zero, -0x118
    ctx->r5 = ADD32(0, -0X118);
    // 0x8029AA84: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x8029AA88: mflo        $t1
    ctx->r9 = lo;
    // 0x8029AA8C: sll         $t2, $t1, 16
    ctx->r10 = S32(ctx->r9 << 16);
    // 0x8029AA90: sra         $t3, $t2, 16
    ctx->r11 = S32(SIGNED(ctx->r10) >> 16);
    // 0x8029AA94: slti        $at, $t3, 0xA
    ctx->r1 = SIGNED(ctx->r11) < 0XA ? 1 : 0;
    // 0x8029AA98: bne         $at, $zero, L_8029AB38
    if (ctx->r1 != 0) {
        // 0x8029AA9C: or          $v0, $t3, $zero
        ctx->r2 = ctx->r11 | 0;
            goto L_8029AB38;
    }
    // 0x8029AA9C: or          $v0, $t3, $zero
    ctx->r2 = ctx->r11 | 0;
    // 0x8029AAA0: jal         0x8029ACD4
    // 0x8029AAA4: sh          $t3, 0x30($sp)
    MEM_H(0X30, ctx->r29) = ctx->r11;
    func_8029ACD4(rdram, ctx);
        goto after_18;
    // 0x8029AAA4: sh          $t3, 0x30($sp)
    MEM_H(0X30, ctx->r29) = ctx->r11;
    after_18:
    // 0x8029AAA8: lh          $a1, 0x30($sp)
    ctx->r5 = MEM_H(ctx->r29, 0X30);
    // 0x8029AAAC: addiu       $at, $zero, 0xA
    ctx->r1 = ADD32(0, 0XA);
    // 0x8029AAB0: div         $zero, $a1, $at
    lo = S32(S64(S32(ctx->r5)) / S64(S32(ctx->r1))); hi = S32(S64(S32(ctx->r5)) % S64(S32(ctx->r1)));
    // 0x8029AAB4: lui         $a0, 0x8010
    ctx->r4 = S32(0X8010 << 16);
    // 0x8029AAB8: addiu       $a0, $a0, 0x6DD0
    ctx->r4 = ADD32(ctx->r4, 0X6DD0);
    // 0x8029AABC: mfhi        $t4
    ctx->r12 = hi;
    // 0x8029AAC0: addiu       $a1, $t4, 0x1F5
    ctx->r5 = ADD32(ctx->r12, 0X1F5);
    // 0x8029AAC4: andi        $t5, $a1, 0xFFFF
    ctx->r13 = ctx->r5 & 0XFFFF;
    // 0x8029AAC8: jal         0x8007AAF8
    // 0x8029AACC: or          $a1, $t5, $zero
    ctx->r5 = ctx->r13 | 0;
    func_8007AAF8(rdram, ctx);
        goto after_19;
    // 0x8029AACC: or          $a1, $t5, $zero
    ctx->r5 = ctx->r13 | 0;
    after_19:
    // 0x8029AAD0: lui         $a0, 0x8010
    ctx->r4 = S32(0X8010 << 16);
    // 0x8029AAD4: addiu       $a0, $a0, 0x6DD0
    ctx->r4 = ADD32(ctx->r4, 0X6DD0);
    // 0x8029AAD8: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    // 0x8029AADC: jal         0x8002135C
    // 0x8029AAE0: addiu       $a2, $zero, 0x2A
    ctx->r6 = ADD32(0, 0X2A);
    func_8002135C(rdram, ctx);
        goto after_20;
    // 0x8029AAE0: addiu       $a2, $zero, 0x2A
    ctx->r6 = ADD32(0, 0X2A);
    after_20:
    // 0x8029AAE4: addiu       $a0, $zero, 0x12
    ctx->r4 = ADD32(0, 0X12);
    // 0x8029AAE8: addiu       $a1, $zero, -0x120
    ctx->r5 = ADD32(0, -0X120);
    // 0x8029AAEC: jal         0x8029ACD4
    // 0x8029AAF0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8029ACD4(rdram, ctx);
        goto after_21;
    // 0x8029AAF0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_21:
    // 0x8029AAF4: lh          $a1, 0x30($sp)
    ctx->r5 = MEM_H(ctx->r29, 0X30);
    // 0x8029AAF8: addiu       $at, $zero, 0xA
    ctx->r1 = ADD32(0, 0XA);
    // 0x8029AAFC: div         $zero, $a1, $at
    lo = S32(S64(S32(ctx->r5)) / S64(S32(ctx->r1))); hi = S32(S64(S32(ctx->r5)) % S64(S32(ctx->r1)));
    // 0x8029AB00: lui         $s0, 0x8010
    ctx->r16 = S32(0X8010 << 16);
    // 0x8029AB04: addiu       $s0, $s0, 0x6E0C
    ctx->r16 = ADD32(ctx->r16, 0X6E0C);
    // 0x8029AB08: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8029AB0C: mflo        $t6
    ctx->r14 = lo;
    // 0x8029AB10: addiu       $a1, $t6, 0x1F5
    ctx->r5 = ADD32(ctx->r14, 0X1F5);
    // 0x8029AB14: andi        $t7, $a1, 0xFFFF
    ctx->r15 = ctx->r5 & 0XFFFF;
    // 0x8029AB18: jal         0x8007AAF8
    // 0x8029AB1C: or          $a1, $t7, $zero
    ctx->r5 = ctx->r15 | 0;
    func_8007AAF8(rdram, ctx);
        goto after_22;
    // 0x8029AB1C: or          $a1, $t7, $zero
    ctx->r5 = ctx->r15 | 0;
    after_22:
    // 0x8029AB20: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8029AB24: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    // 0x8029AB28: jal         0x8002135C
    // 0x8029AB2C: addiu       $a2, $zero, 0x2A
    ctx->r6 = ADD32(0, 0X2A);
    func_8002135C(rdram, ctx);
        goto after_23;
    // 0x8029AB2C: addiu       $a2, $zero, 0x2A
    ctx->r6 = ADD32(0, 0X2A);
    after_23:
    // 0x8029AB30: b           L_8029AB88
    // 0x8029AB34: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_8029AB88;
    // 0x8029AB34: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_8029AB38:
    // 0x8029AB38: beq         $v0, $zero, L_8029AB84
    if (ctx->r2 == 0) {
        // 0x8029AB3C: addiu       $a0, $zero, 0x11
        ctx->r4 = ADD32(0, 0X11);
            goto L_8029AB84;
    }
    // 0x8029AB3C: addiu       $a0, $zero, 0x11
    ctx->r4 = ADD32(0, 0X11);
    // 0x8029AB40: addiu       $a1, $zero, -0x118
    ctx->r5 = ADD32(0, -0X118);
    // 0x8029AB44: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x8029AB48: jal         0x8029ACD4
    // 0x8029AB4C: sh          $v0, 0x30($sp)
    MEM_H(0X30, ctx->r29) = ctx->r2;
    func_8029ACD4(rdram, ctx);
        goto after_24;
    // 0x8029AB4C: sh          $v0, 0x30($sp)
    MEM_H(0X30, ctx->r29) = ctx->r2;
    after_24:
    // 0x8029AB50: lh          $a1, 0x30($sp)
    ctx->r5 = MEM_H(ctx->r29, 0X30);
    // 0x8029AB54: lui         $a0, 0x8010
    ctx->r4 = S32(0X8010 << 16);
    // 0x8029AB58: addiu       $a1, $a1, 0x1F5
    ctx->r5 = ADD32(ctx->r5, 0X1F5);
    // 0x8029AB5C: andi        $t8, $a1, 0xFFFF
    ctx->r24 = ctx->r5 & 0XFFFF;
    // 0x8029AB60: or          $a1, $t8, $zero
    ctx->r5 = ctx->r24 | 0;
    // 0x8029AB64: jal         0x8007AAF8
    // 0x8029AB68: addiu       $a0, $a0, 0x6DD0
    ctx->r4 = ADD32(ctx->r4, 0X6DD0);
    func_8007AAF8(rdram, ctx);
        goto after_25;
    // 0x8029AB68: addiu       $a0, $a0, 0x6DD0
    ctx->r4 = ADD32(ctx->r4, 0X6DD0);
    after_25:
    // 0x8029AB6C: lui         $a0, 0x8010
    ctx->r4 = S32(0X8010 << 16);
    // 0x8029AB70: addiu       $a0, $a0, 0x6DD0
    ctx->r4 = ADD32(ctx->r4, 0X6DD0);
    // 0x8029AB74: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    // 0x8029AB78: jal         0x8002135C
    // 0x8029AB7C: addiu       $a2, $zero, 0x2A
    ctx->r6 = ADD32(0, 0X2A);
    func_8002135C(rdram, ctx);
        goto after_26;
    // 0x8029AB7C: addiu       $a2, $zero, 0x2A
    ctx->r6 = ADD32(0, 0X2A);
    after_26:
    // 0x8029AB80: sb          $zero, 0x2580($s0)
    MEM_B(0X2580, ctx->r16) = 0;
L_8029AB84:
    // 0x8029AB84: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_8029AB88:
    // 0x8029AB88: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x8029AB8C: jr          $ra
    // 0x8029AB90: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    return;
    // 0x8029AB90: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
RECOMP_FUNC void func_8029AB94(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8029AB94: lui         $t6, 0x802C
    ctx->r14 = S32(0X802C << 16);
    // 0x8029AB98: lbu         $t6, 0x39B1($t6)
    ctx->r14 = MEM_BU(ctx->r14, 0X39B1);
    // 0x8029AB9C: addiu       $v0, $zero, 0x9
    ctx->r2 = ADD32(0, 0X9);
    // 0x8029ABA0: bne         $t6, $zero, L_8029ABFC
    if (ctx->r14 != 0) {
        // 0x8029ABA4: lui         $a2, 0x2
        ctx->r6 = S32(0X2 << 16);
            goto L_8029ABFC;
    }
    // 0x8029ABA4: lui         $a2, 0x2
    ctx->r6 = S32(0X2 << 16);
    // 0x8029ABA8: lui         $a2, 0x2
    ctx->r6 = S32(0X2 << 16);
    // 0x8029ABAC: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x8029ABB0: addiu       $a0, $a0, -0x3770
    ctx->r4 = ADD32(ctx->r4, -0X3770);
    // 0x8029ABB4: ori         $a2, $a2, 0x8000
    ctx->r6 = ctx->r6 | 0X8000;
    // 0x8029ABB8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x8029ABBC: addiu       $a1, $zero, 0x3C
    ctx->r5 = ADD32(0, 0X3C);
L_8029ABC0:
    // 0x8029ABC0: multu       $v0, $a1
    result = U64(U32(ctx->r2)) * U64(U32(ctx->r5)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8029ABC4: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8029ABC8: andi        $t9, $v0, 0xFF
    ctx->r25 = ctx->r2 & 0XFF;
    // 0x8029ABCC: slti        $at, $t9, 0x4
    ctx->r1 = SIGNED(ctx->r25) < 0X4 ? 1 : 0;
    // 0x8029ABD0: or          $v0, $t9, $zero
    ctx->r2 = ctx->r25 | 0;
    // 0x8029ABD4: mflo        $t7
    ctx->r15 = lo;
    // 0x8029ABD8: addu        $t8, $a0, $t7
    ctx->r24 = ADD32(ctx->r4, ctx->r15);
    // 0x8029ABDC: addu        $v1, $t8, $a2
    ctx->r3 = ADD32(ctx->r24, ctx->r6);
    // 0x8029ABE0: lwc1        $f4, 0x2170($v1)
    ctx->f4.u32l = MEM_W(ctx->r3, 0X2170);
    // 0x8029ABE4: nop

    // 0x8029ABE8: add.s       $f6, $f4, $f12
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f6.fl = ctx->f4.fl + ctx->f12.fl;
    // 0x8029ABEC: bne         $at, $zero, L_8029ABC0
    if (ctx->r1 != 0) {
        // 0x8029ABF0: swc1        $f6, 0x2170($v1)
        MEM_W(0X2170, ctx->r3) = ctx->f6.u32l;
            goto L_8029ABC0;
    }
    // 0x8029ABF0: swc1        $f6, 0x2170($v1)
    MEM_W(0X2170, ctx->r3) = ctx->f6.u32l;
    // 0x8029ABF4: jr          $ra
    // 0x8029ABF8: nop

    return;
    // 0x8029ABF8: nop

L_8029ABFC:
    // 0x8029ABFC: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x8029AC00: addiu       $a0, $a0, -0x3770
    ctx->r4 = ADD32(ctx->r4, -0X3770);
    // 0x8029AC04: ori         $a2, $a2, 0x8000
    ctx->r6 = ctx->r6 | 0X8000;
    // 0x8029AC08: addiu       $a1, $zero, 0x3C
    ctx->r5 = ADD32(0, 0X3C);
L_8029AC0C:
    // 0x8029AC0C: multu       $v0, $a1
    result = U64(U32(ctx->r2)) * U64(U32(ctx->r5)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8029AC10: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8029AC14: andi        $t2, $v0, 0xFF
    ctx->r10 = ctx->r2 & 0XFF;
    // 0x8029AC18: slti        $at, $t2, 0xD
    ctx->r1 = SIGNED(ctx->r10) < 0XD ? 1 : 0;
    // 0x8029AC1C: or          $v0, $t2, $zero
    ctx->r2 = ctx->r10 | 0;
    // 0x8029AC20: mflo        $t0
    ctx->r8 = lo;
    // 0x8029AC24: addu        $t1, $a0, $t0
    ctx->r9 = ADD32(ctx->r4, ctx->r8);
    // 0x8029AC28: addu        $v1, $t1, $a2
    ctx->r3 = ADD32(ctx->r9, ctx->r6);
    // 0x8029AC2C: lwc1        $f8, 0x2170($v1)
    ctx->f8.u32l = MEM_W(ctx->r3, 0X2170);
    // 0x8029AC30: nop

    // 0x8029AC34: add.s       $f10, $f8, $f12
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f10.fl = ctx->f8.fl + ctx->f12.fl;
    // 0x8029AC38: bne         $at, $zero, L_8029AC0C
    if (ctx->r1 != 0) {
        // 0x8029AC3C: swc1        $f10, 0x2170($v1)
        MEM_W(0X2170, ctx->r3) = ctx->f10.u32l;
            goto L_8029AC0C;
    }
    // 0x8029AC3C: swc1        $f10, 0x2170($v1)
    MEM_W(0X2170, ctx->r3) = ctx->f10.u32l;
    // 0x8029AC40: jr          $ra
    // 0x8029AC44: nop

    return;
    // 0x8029AC44: nop

;}
RECOMP_FUNC void func_8029AC48(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8029AC48: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8029AC4C: lui         $a2, 0x2
    ctx->r6 = S32(0X2 << 16);
    // 0x8029AC50: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x8029AC54: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8029AC58: addiu       $a0, $a0, -0x3770
    ctx->r4 = ADD32(ctx->r4, -0X3770);
    // 0x8029AC5C: ori         $a2, $a2, 0x8000
    ctx->r6 = ctx->r6 | 0X8000;
    // 0x8029AC60: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x8029AC64: addiu       $a1, $zero, 0x3C
    ctx->r5 = ADD32(0, 0X3C);
L_8029AC68:
    // 0x8029AC68: multu       $v0, $a1
    result = U64(U32(ctx->r2)) * U64(U32(ctx->r5)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8029AC6C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8029AC70: andi        $t8, $v0, 0xFF
    ctx->r24 = ctx->r2 & 0XFF;
    // 0x8029AC74: slti        $at, $t8, 0x13
    ctx->r1 = SIGNED(ctx->r24) < 0X13 ? 1 : 0;
    // 0x8029AC78: or          $v0, $t8, $zero
    ctx->r2 = ctx->r24 | 0;
    // 0x8029AC7C: mflo        $t6
    ctx->r14 = lo;
    // 0x8029AC80: addu        $t7, $a0, $t6
    ctx->r15 = ADD32(ctx->r4, ctx->r14);
    // 0x8029AC84: addu        $v1, $t7, $a2
    ctx->r3 = ADD32(ctx->r15, ctx->r6);
    // 0x8029AC88: sb          $zero, 0x2148($v1)
    MEM_B(0X2148, ctx->r3) = 0;
    // 0x8029AC8C: bne         $at, $zero, L_8029AC68
    if (ctx->r1 != 0) {
        // 0x8029AC90: sw          $zero, 0x2174($v1)
        MEM_W(0X2174, ctx->r3) = 0;
            goto L_8029AC68;
    }
    // 0x8029AC90: sw          $zero, 0x2174($v1)
    MEM_W(0X2174, ctx->r3) = 0;
    // 0x8029AC94: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_8029AC98:
    // 0x8029AC98: sll         $t9, $v0, 5
    ctx->r25 = S32(ctx->r2 << 5);
    // 0x8029AC9C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8029ACA0: andi        $t2, $v0, 0xFF
    ctx->r10 = ctx->r2 & 0XFF;
    // 0x8029ACA4: addu        $t0, $a0, $t9
    ctx->r8 = ADD32(ctx->r4, ctx->r25);
    // 0x8029ACA8: slti        $at, $t2, 0x3
    ctx->r1 = SIGNED(ctx->r10) < 0X3 ? 1 : 0;
    // 0x8029ACAC: addu        $t1, $t0, $a2
    ctx->r9 = ADD32(ctx->r8, ctx->r6);
    // 0x8029ACB0: or          $v0, $t2, $zero
    ctx->r2 = ctx->r10 | 0;
    // 0x8029ACB4: bne         $at, $zero, L_8029AC98
    if (ctx->r1 != 0) {
        // 0x8029ACB8: sb          $zero, 0x7EEC($t1)
        MEM_B(0X7EEC, ctx->r9) = 0;
            goto L_8029AC98;
    }
    // 0x8029ACB8: sb          $zero, 0x7EEC($t1)
    MEM_B(0X7EEC, ctx->r9) = 0;
    // 0x8029ACBC: jal         0x8000E300
    // 0x8029ACC0: nop

    func_8000E300(rdram, ctx);
        goto after_0;
    // 0x8029ACC0: nop

    after_0:
    // 0x8029ACC4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8029ACC8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8029ACCC: jr          $ra
    // 0x8029ACD0: nop

    return;
    // 0x8029ACD0: nop

;}
RECOMP_FUNC void func_8029ACD4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8029ACD4: andi        $t6, $a0, 0xFF
    ctx->r14 = ctx->r4 & 0XFF;
    // 0x8029ACD8: sll         $t1, $t6, 4
    ctx->r9 = S32(ctx->r14 << 4);
    // 0x8029ACDC: subu        $t1, $t1, $t6
    ctx->r9 = SUB32(ctx->r9, ctx->r14);
    // 0x8029ACE0: lui         $at, 0x2
    ctx->r1 = S32(0X2 << 16);
    // 0x8029ACE4: ori         $at, $at, 0x8000
    ctx->r1 = ctx->r1 | 0X8000;
    // 0x8029ACE8: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x8029ACEC: lui         $t3, 0x800E
    ctx->r11 = S32(0X800E << 16);
    // 0x8029ACF0: addiu       $t3, $t3, -0x3770
    ctx->r11 = ADD32(ctx->r11, -0X3770);
    // 0x8029ACF4: addu        $t2, $t1, $at
    ctx->r10 = ADD32(ctx->r9, ctx->r1);
    // 0x8029ACF8: addu        $v0, $t2, $t3
    ctx->r2 = ADD32(ctx->r10, ctx->r11);
    // 0x8029ACFC: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    // 0x8029AD00: or          $t7, $a1, $zero
    ctx->r15 = ctx->r5 | 0;
    // 0x8029AD04: or          $a1, $t7, $zero
    ctx->r5 = ctx->r15 | 0;
    // 0x8029AD08: lbu         $t5, 0x214D($v0)
    ctx->r13 = MEM_BU(ctx->r2, 0X214D);
    // 0x8029AD0C: lbu         $t7, 0x214C($v0)
    ctx->r15 = MEM_BU(ctx->r2, 0X214C);
    // 0x8029AD10: sw          $a2, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r6;
    // 0x8029AD14: or          $t9, $a2, $zero
    ctx->r25 = ctx->r6 | 0;
    // 0x8029AD18: or          $a2, $t9, $zero
    ctx->r6 = ctx->r25 | 0;
    // 0x8029AD1C: addiu       $t4, $zero, 0x1
    ctx->r12 = ADD32(0, 0X1);
    // 0x8029AD20: addiu       $t9, $zero, 0xFF
    ctx->r25 = ADD32(0, 0XFF);
    // 0x8029AD24: addiu       $t0, $zero, 0xA
    ctx->r8 = ADD32(0, 0XA);
    // 0x8029AD28: andi        $t6, $t5, 0xFFBF
    ctx->r14 = ctx->r13 & 0XFFBF;
    // 0x8029AD2C: andi        $t8, $t7, 0xFF01
    ctx->r24 = ctx->r15 & 0XFF01;
    // 0x8029AD30: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x8029AD34: sb          $t4, 0x2148($v0)
    MEM_B(0X2148, ctx->r2) = ctx->r12;
    // 0x8029AD38: sb          $t6, 0x214D($v0)
    MEM_B(0X214D, ctx->r2) = ctx->r14;
    // 0x8029AD3C: sb          $t8, 0x214C($v0)
    MEM_B(0X214C, ctx->r2) = ctx->r24;
    // 0x8029AD40: sb          $t9, 0x2155($v0)
    MEM_B(0X2155, ctx->r2) = ctx->r25;
    // 0x8029AD44: sb          $t0, 0x2149($v0)
    MEM_B(0X2149, ctx->r2) = ctx->r8;
    // 0x8029AD48: sh          $a1, 0x215C($v0)
    MEM_H(0X215C, ctx->r2) = ctx->r5;
    // 0x8029AD4C: jr          $ra
    // 0x8029AD50: sh          $a2, 0x2160($v0)
    MEM_H(0X2160, ctx->r2) = ctx->r6;
    return;
    // 0x8029AD50: sh          $a2, 0x2160($v0)
    MEM_H(0X2160, ctx->r2) = ctx->r6;
;}
RECOMP_FUNC void func_8029AD54(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8029AD54: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8029AD58: sw          $a2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r6;
    // 0x8029AD5C: sw          $a3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r7;
    // 0x8029AD60: lh          $a3, 0x2E($sp)
    ctx->r7 = MEM_H(ctx->r29, 0X2E);
    // 0x8029AD64: lh          $a2, 0x2A($sp)
    ctx->r6 = MEM_H(ctx->r29, 0X2A);
    // 0x8029AD68: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x8029AD6C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8029AD70: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x8029AD74: lbu         $a1, 0x27($sp)
    ctx->r5 = MEM_BU(ctx->r29, 0X27);
    // 0x8029AD78: addiu       $t6, $zero, 0x24
    ctx->r14 = ADD32(0, 0X24);
    // 0x8029AD7C: addiu       $t7, $zero, 0x1C
    ctx->r15 = ADD32(0, 0X1C);
    // 0x8029AD80: sw          $t7, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r15;
    // 0x8029AD84: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x8029AD88: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    // 0x8029AD8C: addiu       $a3, $a3, 0xC
    ctx->r7 = ADD32(ctx->r7, 0XC);
    // 0x8029AD90: jal         0x8000E0A8
    // 0x8029AD94: addiu       $a2, $a2, 0x10
    ctx->r6 = ADD32(ctx->r6, 0X10);
    func_8000E0A8(rdram, ctx);
        goto after_0;
    // 0x8029AD94: addiu       $a2, $a2, 0x10
    ctx->r6 = ADD32(ctx->r6, 0X10);
    after_0:
    // 0x8029AD98: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    // 0x8029AD9C: jal         0x8000E1F4
    // 0x8029ADA0: lui         $a1, 0x3F80
    ctx->r5 = S32(0X3F80 << 16);
    func_8000E1F4(rdram, ctx);
        goto after_1;
    // 0x8029ADA0: lui         $a1, 0x3F80
    ctx->r5 = S32(0X3F80 << 16);
    after_1:
    // 0x8029ADA4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8029ADA8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x8029ADAC: jr          $ra
    // 0x8029ADB0: nop

    return;
    // 0x8029ADB0: nop

;}
RECOMP_FUNC void func_8029ADB4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8029ADB4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8029ADB8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8029ADBC: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x8029ADC0: jal         0x8002F1F0
    // 0x8029ADC4: sb          $zero, 0x39B9($at)
    MEM_B(0X39B9, ctx->r1) = 0;
    func_8002F1F0(rdram, ctx);
        goto after_0;
    // 0x8029ADC4: sb          $zero, 0x39B9($at)
    MEM_B(0X39B9, ctx->r1) = 0;
    after_0:
    // 0x8029ADC8: jal         0x8002F2AC
    // 0x8029ADCC: nop

    func_8002F2AC(rdram, ctx);
        goto after_1;
    // 0x8029ADCC: nop

    after_1:
    // 0x8029ADD0: jal         0x80021004
    // 0x8029ADD4: nop

    func_80021004(rdram, ctx);
        goto after_2;
    // 0x8029ADD4: nop

    after_2:
    // 0x8029ADD8: jal         0x80298AB0
    // 0x8029ADDC: nop

    func_80298AB0(rdram, ctx);
        goto after_3;
    // 0x8029ADDC: nop

    after_3:
    // 0x8029ADE0: lui         $a0, 0x800D
    ctx->r4 = S32(0X800D << 16);
    // 0x8029ADE4: jal         0x8007AAE0
    // 0x8029ADE8: addiu       $a0, $a0, -0xA30
    ctx->r4 = ADD32(ctx->r4, -0XA30);
    func_8007AAE0(rdram, ctx);
        goto after_4;
    // 0x8029ADE8: addiu       $a0, $a0, -0xA30
    ctx->r4 = ADD32(ctx->r4, -0XA30);
    after_4:
    // 0x8029ADEC: addiu       $a0, $zero, 0x8
    ctx->r4 = ADD32(0, 0X8);
    // 0x8029ADF0: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    // 0x8029ADF4: addiu       $a2, $zero, 0x138
    ctx->r6 = ADD32(0, 0X138);
    // 0x8029ADF8: jal         0x800201A8
    // 0x8029ADFC: addiu       $a3, $zero, 0xE8
    ctx->r7 = ADD32(0, 0XE8);
    func_800201A8(rdram, ctx);
        goto after_5;
    // 0x8029ADFC: addiu       $a3, $zero, 0xE8
    ctx->r7 = ADD32(0, 0XE8);
    after_5:
    // 0x8029AE00: jal         0x80292738
    // 0x8029AE04: nop

    func_80292738(rdram, ctx);
        goto after_6;
    // 0x8029AE04: nop

    after_6:
    // 0x8029AE08: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x8029AE0C: addiu       $v0, $v0, -0x2CF0
    ctx->r2 = ADD32(ctx->r2, -0X2CF0);
    // 0x8029AE10: lhu         $t6, 0x8($v0)
    ctx->r14 = MEM_HU(ctx->r2, 0X8);
    // 0x8029AE14: lui         $a0, 0x8010
    ctx->r4 = S32(0X8010 << 16);
    // 0x8029AE18: andi        $t7, $t6, 0x100
    ctx->r15 = ctx->r14 & 0X100;
    // 0x8029AE1C: beq         $t7, $zero, L_8029AE30
    if (ctx->r15 == 0) {
        // 0x8029AE20: addiu       $a0, $a0, 0x6B00
        ctx->r4 = ADD32(ctx->r4, 0X6B00);
            goto L_8029AE30;
    }
    // 0x8029AE20: addiu       $a0, $a0, 0x6B00
    ctx->r4 = ADD32(ctx->r4, 0X6B00);
    // 0x8029AE24: lbu         $a1, 0x0($v0)
    ctx->r5 = MEM_BU(ctx->r2, 0X0);
    // 0x8029AE28: b           L_8029AE3C
    // 0x8029AE2C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
        goto L_8029AE3C;
    // 0x8029AE2C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
L_8029AE30:
    // 0x8029AE30: lbu         $a1, 0xA94($v0)
    ctx->r5 = MEM_BU(ctx->r2, 0XA94);
    // 0x8029AE34: nop

    // 0x8029AE38: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
L_8029AE3C:
    // 0x8029AE3C: jal         0x8029AD54
    // 0x8029AE40: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    func_8029AD54(rdram, ctx);
        goto after_7;
    // 0x8029AE40: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_7:
    // 0x8029AE44: addiu       $a0, $zero, 0x3
    ctx->r4 = ADD32(0, 0X3);
    // 0x8029AE48: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8029AE4C: jal         0x8029ACD4
    // 0x8029AE50: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8029ACD4(rdram, ctx);
        goto after_8;
    // 0x8029AE50: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_8:
    // 0x8029AE54: lui         $a0, 0x8010
    ctx->r4 = S32(0X8010 << 16);
    // 0x8029AE58: addiu       $a0, $a0, 0x6A88
    ctx->r4 = ADD32(ctx->r4, 0X6A88);
    // 0x8029AE5C: jal         0x8007AAF8
    // 0x8029AE60: addiu       $a1, $zero, 0xA8
    ctx->r5 = ADD32(0, 0XA8);
    func_8007AAF8(rdram, ctx);
        goto after_9;
    // 0x8029AE60: addiu       $a1, $zero, 0xA8
    ctx->r5 = ADD32(0, 0XA8);
    after_9:
    // 0x8029AE64: lui         $a0, 0x8010
    ctx->r4 = S32(0X8010 << 16);
    // 0x8029AE68: addiu       $a0, $a0, 0x6A88
    ctx->r4 = ADD32(ctx->r4, 0X6A88);
    // 0x8029AE6C: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    // 0x8029AE70: jal         0x8002135C
    // 0x8029AE74: addiu       $a2, $zero, 0xE
    ctx->r6 = ADD32(0, 0XE);
    func_8002135C(rdram, ctx);
        goto after_10;
    // 0x8029AE74: addiu       $a2, $zero, 0xE
    ctx->r6 = ADD32(0, 0XE);
    after_10:
    // 0x8029AE78: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
    // 0x8029AE7C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8029AE80: jal         0x8029ACD4
    // 0x8029AE84: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8029ACD4(rdram, ctx);
        goto after_11;
    // 0x8029AE84: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_11:
    // 0x8029AE88: lui         $a1, 0x8012
    ctx->r5 = S32(0X8012 << 16);
    // 0x8029AE8C: lhu         $a1, 0xB74($a1)
    ctx->r5 = MEM_HU(ctx->r5, 0XB74);
    // 0x8029AE90: lui         $a0, 0x8010
    ctx->r4 = S32(0X8010 << 16);
    // 0x8029AE94: andi        $t8, $a1, 0x1
    ctx->r24 = ctx->r5 & 0X1;
    // 0x8029AE98: addiu       $a1, $t8, 0xAA
    ctx->r5 = ADD32(ctx->r24, 0XAA);
    // 0x8029AE9C: andi        $t9, $a1, 0xFFFF
    ctx->r25 = ctx->r5 & 0XFFFF;
    // 0x8029AEA0: or          $a1, $t9, $zero
    ctx->r5 = ctx->r25 | 0;
    // 0x8029AEA4: jal         0x8007AAF8
    // 0x8029AEA8: addiu       $a0, $a0, 0x6AC4
    ctx->r4 = ADD32(ctx->r4, 0X6AC4);
    func_8007AAF8(rdram, ctx);
        goto after_12;
    // 0x8029AEA8: addiu       $a0, $a0, 0x6AC4
    ctx->r4 = ADD32(ctx->r4, 0X6AC4);
    after_12:
    // 0x8029AEAC: lui         $a0, 0x8010
    ctx->r4 = S32(0X8010 << 16);
    // 0x8029AEB0: addiu       $a0, $a0, 0x6AC4
    ctx->r4 = ADD32(ctx->r4, 0X6AC4);
    // 0x8029AEB4: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    // 0x8029AEB8: jal         0x8002135C
    // 0x8029AEBC: addiu       $a2, $zero, 0xF
    ctx->r6 = ADD32(0, 0XF);
    func_8002135C(rdram, ctx);
        goto after_13;
    // 0x8029AEBC: addiu       $a2, $zero, 0xF
    ctx->r6 = ADD32(0, 0XF);
    after_13:
    // 0x8029AEC0: addiu       $a0, $zero, 0x6
    ctx->r4 = ADD32(0, 0X6);
    // 0x8029AEC4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8029AEC8: jal         0x8029ACD4
    // 0x8029AECC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8029ACD4(rdram, ctx);
        goto after_14;
    // 0x8029AECC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_14:
    // 0x8029AED0: lui         $a1, 0x802C
    ctx->r5 = S32(0X802C << 16);
    // 0x8029AED4: lhu         $a1, 0x3944($a1)
    ctx->r5 = MEM_HU(ctx->r5, 0X3944);
    // 0x8029AED8: addiu       $at, $zero, 0x3C
    ctx->r1 = ADD32(0, 0X3C);
    // 0x8029AEDC: div         $zero, $a1, $at
    lo = S32(S64(S32(ctx->r5)) / S64(S32(ctx->r1))); hi = S32(S64(S32(ctx->r5)) % S64(S32(ctx->r1)));
    // 0x8029AEE0: lui         $a0, 0x8010
    ctx->r4 = S32(0X8010 << 16);
    // 0x8029AEE4: addiu       $a0, $a0, 0x6B3C
    ctx->r4 = ADD32(ctx->r4, 0X6B3C);
    // 0x8029AEE8: mflo        $t0
    ctx->r8 = lo;
    // 0x8029AEEC: addiu       $a1, $t0, 0xC5
    ctx->r5 = ADD32(ctx->r8, 0XC5);
    // 0x8029AEF0: andi        $t1, $a1, 0xFFFF
    ctx->r9 = ctx->r5 & 0XFFFF;
    // 0x8029AEF4: jal         0x8007AAF8
    // 0x8029AEF8: or          $a1, $t1, $zero
    ctx->r5 = ctx->r9 | 0;
    func_8007AAF8(rdram, ctx);
        goto after_15;
    // 0x8029AEF8: or          $a1, $t1, $zero
    ctx->r5 = ctx->r9 | 0;
    after_15:
    // 0x8029AEFC: lui         $a0, 0x8010
    ctx->r4 = S32(0X8010 << 16);
    // 0x8029AF00: addiu       $a0, $a0, 0x6B3C
    ctx->r4 = ADD32(ctx->r4, 0X6B3C);
    // 0x8029AF04: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    // 0x8029AF08: jal         0x8002135C
    // 0x8029AF0C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8002135C(rdram, ctx);
        goto after_16;
    // 0x8029AF0C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_16:
    // 0x8029AF10: addiu       $a0, $zero, 0x7
    ctx->r4 = ADD32(0, 0X7);
    // 0x8029AF14: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8029AF18: jal         0x8029ACD4
    // 0x8029AF1C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8029ACD4(rdram, ctx);
        goto after_17;
    // 0x8029AF1C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_17:
    // 0x8029AF20: lui         $a0, 0x8010
    ctx->r4 = S32(0X8010 << 16);
    // 0x8029AF24: addiu       $a0, $a0, 0x6B78
    ctx->r4 = ADD32(ctx->r4, 0X6B78);
    // 0x8029AF28: jal         0x8007AAF8
    // 0x8029AF2C: addiu       $a1, $zero, 0xCF
    ctx->r5 = ADD32(0, 0XCF);
    func_8007AAF8(rdram, ctx);
        goto after_18;
    // 0x8029AF2C: addiu       $a1, $zero, 0xCF
    ctx->r5 = ADD32(0, 0XCF);
    after_18:
    // 0x8029AF30: lui         $a0, 0x8010
    ctx->r4 = S32(0X8010 << 16);
    // 0x8029AF34: addiu       $a0, $a0, 0x6B78
    ctx->r4 = ADD32(ctx->r4, 0X6B78);
    // 0x8029AF38: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    // 0x8029AF3C: jal         0x8002135C
    // 0x8029AF40: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8002135C(rdram, ctx);
        goto after_19;
    // 0x8029AF40: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_19:
    // 0x8029AF44: addiu       $a0, $zero, 0x8
    ctx->r4 = ADD32(0, 0X8);
    // 0x8029AF48: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    // 0x8029AF4C: jal         0x8029ACD4
    // 0x8029AF50: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8029ACD4(rdram, ctx);
        goto after_20;
    // 0x8029AF50: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_20:
    // 0x8029AF54: lui         $a1, 0x802C
    ctx->r5 = S32(0X802C << 16);
    // 0x8029AF58: lhu         $a1, 0x3944($a1)
    ctx->r5 = MEM_HU(ctx->r5, 0X3944);
    // 0x8029AF5C: addiu       $at, $zero, 0x3C
    ctx->r1 = ADD32(0, 0X3C);
    // 0x8029AF60: div         $zero, $a1, $at
    lo = S32(S64(S32(ctx->r5)) / S64(S32(ctx->r1))); hi = S32(S64(S32(ctx->r5)) % S64(S32(ctx->r1)));
    // 0x8029AF64: addiu       $at, $zero, 0xA
    ctx->r1 = ADD32(0, 0XA);
    // 0x8029AF68: lui         $a0, 0x8010
    ctx->r4 = S32(0X8010 << 16);
    // 0x8029AF6C: addiu       $a0, $a0, 0x6BB4
    ctx->r4 = ADD32(ctx->r4, 0X6BB4);
    // 0x8029AF70: mfhi        $t2
    ctx->r10 = hi;
    // 0x8029AF74: nop

    // 0x8029AF78: nop

    // 0x8029AF7C: div         $zero, $t2, $at
    lo = S32(S64(S32(ctx->r10)) / S64(S32(ctx->r1))); hi = S32(S64(S32(ctx->r10)) % S64(S32(ctx->r1)));
    // 0x8029AF80: mflo        $t3
    ctx->r11 = lo;
    // 0x8029AF84: addiu       $a1, $t3, 0xC5
    ctx->r5 = ADD32(ctx->r11, 0XC5);
    // 0x8029AF88: andi        $t4, $a1, 0xFFFF
    ctx->r12 = ctx->r5 & 0XFFFF;
    // 0x8029AF8C: jal         0x8007AAF8
    // 0x8029AF90: or          $a1, $t4, $zero
    ctx->r5 = ctx->r12 | 0;
    func_8007AAF8(rdram, ctx);
        goto after_21;
    // 0x8029AF90: or          $a1, $t4, $zero
    ctx->r5 = ctx->r12 | 0;
    after_21:
    // 0x8029AF94: lui         $a0, 0x8010
    ctx->r4 = S32(0X8010 << 16);
    // 0x8029AF98: addiu       $a0, $a0, 0x6BB4
    ctx->r4 = ADD32(ctx->r4, 0X6BB4);
    // 0x8029AF9C: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    // 0x8029AFA0: jal         0x8002135C
    // 0x8029AFA4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8002135C(rdram, ctx);
        goto after_22;
    // 0x8029AFA4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_22:
    // 0x8029AFA8: addiu       $a0, $zero, 0x9
    ctx->r4 = ADD32(0, 0X9);
    // 0x8029AFAC: addiu       $a1, $zero, 0x18
    ctx->r5 = ADD32(0, 0X18);
    // 0x8029AFB0: jal         0x8029ACD4
    // 0x8029AFB4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8029ACD4(rdram, ctx);
        goto after_23;
    // 0x8029AFB4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_23:
    // 0x8029AFB8: lui         $a1, 0x802C
    ctx->r5 = S32(0X802C << 16);
    // 0x8029AFBC: lhu         $a1, 0x3944($a1)
    ctx->r5 = MEM_HU(ctx->r5, 0X3944);
    // 0x8029AFC0: addiu       $at, $zero, 0x3C
    ctx->r1 = ADD32(0, 0X3C);
    // 0x8029AFC4: div         $zero, $a1, $at
    lo = S32(S64(S32(ctx->r5)) / S64(S32(ctx->r1))); hi = S32(S64(S32(ctx->r5)) % S64(S32(ctx->r1)));
    // 0x8029AFC8: addiu       $at, $zero, 0xA
    ctx->r1 = ADD32(0, 0XA);
    // 0x8029AFCC: lui         $a0, 0x8010
    ctx->r4 = S32(0X8010 << 16);
    // 0x8029AFD0: addiu       $a0, $a0, 0x6BF0
    ctx->r4 = ADD32(ctx->r4, 0X6BF0);
    // 0x8029AFD4: mfhi        $t5
    ctx->r13 = hi;
    // 0x8029AFD8: nop

    // 0x8029AFDC: nop

    // 0x8029AFE0: div         $zero, $t5, $at
    lo = S32(S64(S32(ctx->r13)) / S64(S32(ctx->r1))); hi = S32(S64(S32(ctx->r13)) % S64(S32(ctx->r1)));
    // 0x8029AFE4: mfhi        $t6
    ctx->r14 = hi;
    // 0x8029AFE8: addiu       $a1, $t6, 0xC5
    ctx->r5 = ADD32(ctx->r14, 0XC5);
    // 0x8029AFEC: andi        $t7, $a1, 0xFFFF
    ctx->r15 = ctx->r5 & 0XFFFF;
    // 0x8029AFF0: jal         0x8007AAF8
    // 0x8029AFF4: or          $a1, $t7, $zero
    ctx->r5 = ctx->r15 | 0;
    func_8007AAF8(rdram, ctx);
        goto after_24;
    // 0x8029AFF4: or          $a1, $t7, $zero
    ctx->r5 = ctx->r15 | 0;
    after_24:
    // 0x8029AFF8: lui         $a0, 0x8010
    ctx->r4 = S32(0X8010 << 16);
    // 0x8029AFFC: addiu       $a0, $a0, 0x6BF0
    ctx->r4 = ADD32(ctx->r4, 0X6BF0);
    // 0x8029B000: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    // 0x8029B004: jal         0x8002135C
    // 0x8029B008: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8002135C(rdram, ctx);
        goto after_25;
    // 0x8029B008: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_25:
    // 0x8029B00C: lui         $v0, 0x8011
    ctx->r2 = S32(0X8011 << 16);
    // 0x8029B010: addiu       $t8, $zero, 0x5
    ctx->r24 = ADD32(0, 0X5);
    // 0x8029B014: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x8029B018: addiu       $v0, $v0, -0x3770
    ctx->r2 = ADD32(ctx->r2, -0X3770);
    // 0x8029B01C: sb          $t8, 0x38DF($at)
    MEM_B(0X38DF, ctx->r1) = ctx->r24;
    // 0x8029B020: lbu         $t9, 0x754($v0)
    ctx->r25 = MEM_BU(ctx->r2, 0X754);
    // 0x8029B024: nop

    // 0x8029B028: andi        $t0, $t9, 0xFE
    ctx->r8 = ctx->r25 & 0XFE;
    // 0x8029B02C: jal         0x80297DB0
    // 0x8029B030: sb          $t0, 0x754($v0)
    MEM_B(0X754, ctx->r2) = ctx->r8;
    func_80297DB0(rdram, ctx);
        goto after_26;
    // 0x8029B030: sb          $t0, 0x754($v0)
    MEM_B(0X754, ctx->r2) = ctx->r8;
    after_26:
    // 0x8029B034: jal         0x80015BC0
    // 0x8029B038: addiu       $a0, $zero, 0x3BB
    ctx->r4 = ADD32(0, 0X3BB);
    func_80015BC0(rdram, ctx);
        goto after_27;
    // 0x8029B038: addiu       $a0, $zero, 0x3BB
    ctx->r4 = ADD32(0, 0X3BB);
    after_27:
    // 0x8029B03C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8029B040: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8029B044: jr          $ra
    // 0x8029B048: nop

    return;
    // 0x8029B048: nop

;}
RECOMP_FUNC void func_8029B04C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8029B04C: lui         $t1, 0x802C
    ctx->r9 = S32(0X802C << 16);
    // 0x8029B050: addiu       $t1, $t1, 0x39B9
    ctx->r9 = ADD32(ctx->r9, 0X39B9);
    // 0x8029B054: lbu         $v1, 0x0($t1)
    ctx->r3 = MEM_BU(ctx->r9, 0X0);
    // 0x8029B058: lui         $v0, 0x802C
    ctx->r2 = S32(0X802C << 16);
    // 0x8029B05C: addiu       $v0, $v0, 0x38C8
    ctx->r2 = ADD32(ctx->r2, 0X38C8);
    // 0x8029B060: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8029B064: addiu       $a0, $zero, 0x70
    ctx->r4 = ADD32(0, 0X70);
    // 0x8029B068: sltiu       $at, $v1, 0x7
    ctx->r1 = ctx->r3 < 0X7 ? 1 : 0;
    // 0x8029B06C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8029B070: sh          $a0, 0x0($v0)
    MEM_H(0X0, ctx->r2) = ctx->r4;
    // 0x8029B074: beq         $at, $zero, L_8029B624
    if (ctx->r1 == 0) {
        // 0x8029B078: sh          $a0, 0x2($v0)
        MEM_H(0X2, ctx->r2) = ctx->r4;
            goto L_8029B624;
    }
    // 0x8029B078: sh          $a0, 0x2($v0)
    MEM_H(0X2, ctx->r2) = ctx->r4;
    // 0x8029B07C: sll         $t6, $v1, 2
    ctx->r14 = S32(ctx->r3 << 2);
    // 0x8029B080: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x8029B084: addu        $at, $at, $t6
    gpr jr_addend_8029B090 = ctx->r14;
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x8029B088: lw          $t6, 0xA68($at)
    ctx->r14 = ADD32(ctx->r1, 0XA68);
    // 0x8029B08C: nop

    // 0x8029B090: jr          $t6
    // 0x8029B094: nop

    switch (jr_addend_8029B090 >> 2) {
        case 0: goto L_8029B098; break;
        case 1: goto L_8029B138; break;
        case 2: goto L_8029B164; break;
        case 3: goto L_8029B1B4; break;
        case 4: goto L_8029B228; break;
        case 5: goto L_8029B358; break;
        case 6: goto L_8029B4F0; break;
        default: switch_error(__func__, 0x8029B090, 0x802C0A68);
    }
    // 0x8029B094: nop

L_8029B098:
    // 0x8029B098: lui         $t7, 0x8011
    ctx->r15 = S32(0X8011 << 16);
    // 0x8029B09C: lh          $t7, -0x2FAE($t7)
    ctx->r15 = MEM_H(ctx->r15, -0X2FAE);
    // 0x8029B0A0: nop

    // 0x8029B0A4: bne         $t7, $zero, L_8029B624
    if (ctx->r15 != 0) {
        // 0x8029B0A8: lui         $t0, 0x8012
        ctx->r8 = S32(0X8012 << 16);
            goto L_8029B624;
    }
    // 0x8029B0A8: lui         $t0, 0x8012
    ctx->r8 = S32(0X8012 << 16);
    // 0x8029B0AC: addiu       $t0, $t0, -0x2CF0
    ctx->r8 = ADD32(ctx->r8, -0X2CF0);
    // 0x8029B0B0: lhu         $t8, 0x8($t0)
    ctx->r24 = MEM_HU(ctx->r8, 0X8);
    // 0x8029B0B4: nop

    // 0x8029B0B8: andi        $t9, $t8, 0x100
    ctx->r25 = ctx->r24 & 0X100;
    // 0x8029B0BC: beq         $t9, $zero, L_8029B0D8
    if (ctx->r25 == 0) {
        // 0x8029B0C0: nop
    
            goto L_8029B0D8;
    }
    // 0x8029B0C0: nop

    // 0x8029B0C4: jal         0x8029B7E8
    // 0x8029B0C8: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    func_8029B7E8(rdram, ctx);
        goto after_0;
    // 0x8029B0C8: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_0:
    // 0x8029B0CC: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x8029B0D0: b           L_8029B0EC
    // 0x8029B0D4: sb          $zero, 0x39B8($at)
    MEM_B(0X39B8, ctx->r1) = 0;
        goto L_8029B0EC;
    // 0x8029B0D4: sb          $zero, 0x39B8($at)
    MEM_B(0X39B8, ctx->r1) = 0;
L_8029B0D8:
    // 0x8029B0D8: jal         0x8029B7E8
    // 0x8029B0DC: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    func_8029B7E8(rdram, ctx);
        goto after_1;
    // 0x8029B0DC: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_1:
    // 0x8029B0E0: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x8029B0E4: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x8029B0E8: sb          $t2, 0x39B8($at)
    MEM_B(0X39B8, ctx->r1) = ctx->r10;
L_8029B0EC:
    // 0x8029B0EC: lui         $a2, 0x802C
    ctx->r6 = S32(0X802C << 16);
    // 0x8029B0F0: addiu       $a2, $a2, 0x39B5
    ctx->r6 = ADD32(ctx->r6, 0X39B5);
    // 0x8029B0F4: addiu       $t3, $zero, 0x4
    ctx->r11 = ADD32(0, 0X4);
    // 0x8029B0F8: sb          $t3, 0x0($a2)
    MEM_B(0X0, ctx->r6) = ctx->r11;
    // 0x8029B0FC: lui         $t6, 0x802C
    ctx->r14 = S32(0X802C << 16);
    // 0x8029B100: lbu         $t6, 0x39B4($t6)
    ctx->r14 = MEM_BU(ctx->r14, 0X39B4);
    // 0x8029B104: lui         $t4, 0x802C
    ctx->r12 = S32(0X802C << 16);
    // 0x8029B108: lbu         $t4, 0x39B9($t4)
    ctx->r12 = MEM_BU(ctx->r12, 0X39B9);
    // 0x8029B10C: sll         $t7, $t6, 3
    ctx->r15 = S32(ctx->r14 << 3);
    // 0x8029B110: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8029B114: lui         $v0, 0x802C
    ctx->r2 = S32(0X802C << 16);
    // 0x8029B118: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x8029B11C: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8029B120: addiu       $t5, $t4, 0x1
    ctx->r13 = ADD32(ctx->r12, 0X1);
    // 0x8029B124: addiu       $v0, $v0, 0x39B6
    ctx->r2 = ADD32(ctx->r2, 0X39B6);
    // 0x8029B128: sb          $t5, 0x39B9($at)
    MEM_B(0X39B9, ctx->r1) = ctx->r13;
    // 0x8029B12C: addiu       $t8, $t7, 0x24
    ctx->r24 = ADD32(ctx->r15, 0X24);
    // 0x8029B130: b           L_8029B624
    // 0x8029B134: sh          $t8, 0x0($v0)
    MEM_H(0X0, ctx->r2) = ctx->r24;
        goto L_8029B624;
    // 0x8029B134: sh          $t8, 0x0($v0)
    MEM_H(0X0, ctx->r2) = ctx->r24;
L_8029B138:
    // 0x8029B138: lui         $a2, 0x802C
    ctx->r6 = S32(0X802C << 16);
    // 0x8029B13C: addiu       $a2, $a2, 0x39B5
    ctx->r6 = ADD32(ctx->r6, 0X39B5);
    // 0x8029B140: lbu         $v0, 0x0($a2)
    ctx->r2 = MEM_BU(ctx->r6, 0X0);
    // 0x8029B144: addiu       $t9, $v1, 0x1
    ctx->r25 = ADD32(ctx->r3, 0X1);
    // 0x8029B148: bne         $v0, $zero, L_8029B15C
    if (ctx->r2 != 0) {
        // 0x8029B14C: addiu       $t2, $v0, -0x1
        ctx->r10 = ADD32(ctx->r2, -0X1);
            goto L_8029B15C;
    }
    // 0x8029B14C: addiu       $t2, $v0, -0x1
    ctx->r10 = ADD32(ctx->r2, -0X1);
    // 0x8029B150: b           L_8029B624
    // 0x8029B154: sb          $t9, 0x0($t1)
    MEM_B(0X0, ctx->r9) = ctx->r25;
        goto L_8029B624;
    // 0x8029B154: sb          $t9, 0x0($t1)
    MEM_B(0X0, ctx->r9) = ctx->r25;
    // 0x8029B158: addiu       $t2, $v0, -0x1
    ctx->r10 = ADD32(ctx->r2, -0X1);
L_8029B15C:
    // 0x8029B15C: b           L_8029B624
    // 0x8029B160: sb          $t2, 0x0($a2)
    MEM_B(0X0, ctx->r6) = ctx->r10;
        goto L_8029B624;
    // 0x8029B160: sb          $t2, 0x0($a2)
    MEM_B(0X0, ctx->r6) = ctx->r10;
L_8029B164:
    // 0x8029B164: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x8029B168: jal         0x8029B634
    // 0x8029B16C: addiu       $a1, $zero, -0xC
    ctx->r5 = ADD32(0, -0XC);
    func_8029B634(rdram, ctx);
        goto after_2;
    // 0x8029B16C: addiu       $a1, $zero, -0xC
    ctx->r5 = ADD32(0, -0XC);
    after_2:
    // 0x8029B170: lui         $v0, 0x802C
    ctx->r2 = S32(0X802C << 16);
    // 0x8029B174: addiu       $v0, $v0, 0x39B6
    ctx->r2 = ADD32(ctx->r2, 0X39B6);
    // 0x8029B178: lh          $t3, 0x0($v0)
    ctx->r11 = MEM_H(ctx->r2, 0X0);
    // 0x8029B17C: lui         $a2, 0x802C
    ctx->r6 = S32(0X802C << 16);
    // 0x8029B180: addiu       $t4, $t3, -0xC
    ctx->r12 = ADD32(ctx->r11, -0XC);
    // 0x8029B184: sh          $t4, 0x0($v0)
    MEM_H(0X0, ctx->r2) = ctx->r12;
    // 0x8029B188: lh          $t5, 0x0($v0)
    ctx->r13 = MEM_H(ctx->r2, 0X0);
    // 0x8029B18C: addiu       $a2, $a2, 0x39B5
    ctx->r6 = ADD32(ctx->r6, 0X39B5);
    // 0x8029B190: bne         $t5, $zero, L_8029B624
    if (ctx->r13 != 0) {
        // 0x8029B194: lui         $t6, 0x802C
        ctx->r14 = S32(0X802C << 16);
            goto L_8029B624;
    }
    // 0x8029B194: lui         $t6, 0x802C
    ctx->r14 = S32(0X802C << 16);
    // 0x8029B198: lbu         $t6, 0x39B9($t6)
    ctx->r14 = MEM_BU(ctx->r14, 0X39B9);
    // 0x8029B19C: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x8029B1A0: addiu       $t7, $t6, 0x1
    ctx->r15 = ADD32(ctx->r14, 0X1);
    // 0x8029B1A4: sb          $t7, 0x39B9($at)
    MEM_B(0X39B9, ctx->r1) = ctx->r15;
    // 0x8029B1A8: addiu       $t8, $zero, 0x1E
    ctx->r24 = ADD32(0, 0X1E);
    // 0x8029B1AC: b           L_8029B624
    // 0x8029B1B0: sb          $t8, 0x0($a2)
    MEM_B(0X0, ctx->r6) = ctx->r24;
        goto L_8029B624;
    // 0x8029B1B0: sb          $t8, 0x0($a2)
    MEM_B(0X0, ctx->r6) = ctx->r24;
L_8029B1B4:
    // 0x8029B1B4: lui         $a2, 0x802C
    ctx->r6 = S32(0X802C << 16);
    // 0x8029B1B8: addiu       $a2, $a2, 0x39B5
    ctx->r6 = ADD32(ctx->r6, 0X39B5);
    // 0x8029B1BC: lbu         $t9, 0x0($a2)
    ctx->r25 = MEM_BU(ctx->r6, 0X0);
    // 0x8029B1C0: addiu       $a0, $zero, 0x14
    ctx->r4 = ADD32(0, 0X14);
    // 0x8029B1C4: addiu       $t2, $t9, -0x1
    ctx->r10 = ADD32(ctx->r25, -0X1);
    // 0x8029B1C8: andi        $t3, $t2, 0xFF
    ctx->r11 = ctx->r10 & 0XFF;
    // 0x8029B1CC: bne         $t3, $zero, L_8029B624
    if (ctx->r11 != 0) {
        // 0x8029B1D0: sb          $t2, 0x0($a2)
        MEM_B(0X0, ctx->r6) = ctx->r10;
            goto L_8029B624;
    }
    // 0x8029B1D0: sb          $t2, 0x0($a2)
    MEM_B(0X0, ctx->r6) = ctx->r10;
    // 0x8029B1D4: addiu       $t4, $v1, 0x1
    ctx->r12 = ADD32(ctx->r3, 0X1);
    // 0x8029B1D8: sb          $t4, 0x0($t1)
    MEM_B(0X0, ctx->r9) = ctx->r12;
    // 0x8029B1DC: sb          $a0, 0x0($a2)
    MEM_B(0X0, ctx->r6) = ctx->r4;
    // 0x8029B1E0: lui         $v0, 0x802C
    ctx->r2 = S32(0X802C << 16);
    // 0x8029B1E4: lbu         $v0, 0x39B4($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X39B4);
    // 0x8029B1E8: nop

    // 0x8029B1EC: slti        $at, $v0, 0x2
    ctx->r1 = SIGNED(ctx->r2) < 0X2 ? 1 : 0;
    // 0x8029B1F0: bne         $at, $zero, L_8029B200
    if (ctx->r1 != 0) {
        // 0x8029B1F4: lui         $at, 0x802C
        ctx->r1 = S32(0X802C << 16);
            goto L_8029B200;
    }
    // 0x8029B1F4: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x8029B1F8: b           L_8029B208
    // 0x8029B1FC: sb          $a0, 0x39B3($at)
    MEM_B(0X39B3, ctx->r1) = ctx->r4;
        goto L_8029B208;
    // 0x8029B1FC: sb          $a0, 0x39B3($at)
    MEM_B(0X39B3, ctx->r1) = ctx->r4;
L_8029B200:
    // 0x8029B200: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x8029B204: sb          $zero, 0x39B3($at)
    MEM_B(0X39B3, ctx->r1) = 0;
L_8029B208:
    // 0x8029B208: slti        $at, $v0, 0x3
    ctx->r1 = SIGNED(ctx->r2) < 0X3 ? 1 : 0;
    // 0x8029B20C: bne         $at, $zero, L_8029B21C
    if (ctx->r1 != 0) {
        // 0x8029B210: lui         $at, 0x802C
        ctx->r1 = S32(0X802C << 16);
            goto L_8029B21C;
    }
    // 0x8029B210: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x8029B214: b           L_8029B624
    // 0x8029B218: sb          $a0, 0x39B1($at)
    MEM_B(0X39B1, ctx->r1) = ctx->r4;
        goto L_8029B624;
    // 0x8029B218: sb          $a0, 0x39B1($at)
    MEM_B(0X39B1, ctx->r1) = ctx->r4;
L_8029B21C:
    // 0x8029B21C: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x8029B220: b           L_8029B624
    // 0x8029B224: sb          $zero, 0x39B1($at)
    MEM_B(0X39B1, ctx->r1) = 0;
        goto L_8029B624;
    // 0x8029B224: sb          $zero, 0x39B1($at)
    MEM_B(0X39B1, ctx->r1) = 0;
L_8029B228:
    // 0x8029B228: lui         $a2, 0x802C
    ctx->r6 = S32(0X802C << 16);
    // 0x8029B22C: addiu       $a2, $a2, 0x39B5
    ctx->r6 = ADD32(ctx->r6, 0X39B5);
    // 0x8029B230: lbu         $v0, 0x0($a2)
    ctx->r2 = MEM_BU(ctx->r6, 0X0);
    // 0x8029B234: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x8029B238: blez        $v0, L_8029B25C
    if (SIGNED(ctx->r2) <= 0) {
        // 0x8029B23C: addiu       $t5, $v0, -0x1
        ctx->r13 = ADD32(ctx->r2, -0X1);
            goto L_8029B25C;
    }
    // 0x8029B23C: addiu       $t5, $v0, -0x1
    ctx->r13 = ADD32(ctx->r2, -0X1);
    // 0x8029B240: sb          $t5, 0x0($a2)
    MEM_B(0X0, ctx->r6) = ctx->r13;
    // 0x8029B244: jal         0x8029B6FC
    // 0x8029B248: addiu       $a1, $zero, -0x10
    ctx->r5 = ADD32(0, -0X10);
    func_8029B6FC(rdram, ctx);
        goto after_3;
    // 0x8029B248: addiu       $a1, $zero, -0x10
    ctx->r5 = ADD32(0, -0X10);
    after_3:
    // 0x8029B24C: lui         $a2, 0x802C
    ctx->r6 = S32(0X802C << 16);
    // 0x8029B250: lui         $t1, 0x802C
    ctx->r9 = S32(0X802C << 16);
    // 0x8029B254: addiu       $t1, $t1, 0x39B9
    ctx->r9 = ADD32(ctx->r9, 0X39B9);
    // 0x8029B258: addiu       $a2, $a2, 0x39B5
    ctx->r6 = ADD32(ctx->r6, 0X39B5);
L_8029B25C:
    // 0x8029B25C: lui         $v0, 0x802C
    ctx->r2 = S32(0X802C << 16);
    // 0x8029B260: lbu         $v0, 0x39B4($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X39B4);
    // 0x8029B264: nop

    // 0x8029B268: slti        $at, $v0, 0x2
    ctx->r1 = SIGNED(ctx->r2) < 0X2 ? 1 : 0;
    // 0x8029B26C: bne         $at, $zero, L_8029B2BC
    if (ctx->r1 != 0) {
        // 0x8029B270: nop
    
            goto L_8029B2BC;
    }
    // 0x8029B270: nop

    // 0x8029B274: lbu         $t6, 0x0($a2)
    ctx->r14 = MEM_BU(ctx->r6, 0X0);
    // 0x8029B278: lui         $a3, 0x802C
    ctx->r7 = S32(0X802C << 16);
    // 0x8029B27C: slti        $at, $t6, 0xF
    ctx->r1 = SIGNED(ctx->r14) < 0XF ? 1 : 0;
    // 0x8029B280: beq         $at, $zero, L_8029B2BC
    if (ctx->r1 == 0) {
        // 0x8029B284: addiu       $a3, $a3, 0x39B3
        ctx->r7 = ADD32(ctx->r7, 0X39B3);
            goto L_8029B2BC;
    }
    // 0x8029B284: addiu       $a3, $a3, 0x39B3
    ctx->r7 = ADD32(ctx->r7, 0X39B3);
    // 0x8029B288: lbu         $v1, 0x0($a3)
    ctx->r3 = MEM_BU(ctx->r7, 0X0);
    // 0x8029B28C: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x8029B290: blez        $v1, L_8029B2BC
    if (SIGNED(ctx->r3) <= 0) {
        // 0x8029B294: addiu       $t7, $v1, -0x1
        ctx->r15 = ADD32(ctx->r3, -0X1);
            goto L_8029B2BC;
    }
    // 0x8029B294: addiu       $t7, $v1, -0x1
    ctx->r15 = ADD32(ctx->r3, -0X1);
    // 0x8029B298: sb          $t7, 0x0($a3)
    MEM_B(0X0, ctx->r7) = ctx->r15;
    // 0x8029B29C: jal         0x8029B6FC
    // 0x8029B2A0: addiu       $a1, $zero, -0x10
    ctx->r5 = ADD32(0, -0X10);
    func_8029B6FC(rdram, ctx);
        goto after_4;
    // 0x8029B2A0: addiu       $a1, $zero, -0x10
    ctx->r5 = ADD32(0, -0X10);
    after_4:
    // 0x8029B2A4: lui         $v0, 0x802C
    ctx->r2 = S32(0X802C << 16);
    // 0x8029B2A8: lui         $a2, 0x802C
    ctx->r6 = S32(0X802C << 16);
    // 0x8029B2AC: lui         $t1, 0x802C
    ctx->r9 = S32(0X802C << 16);
    // 0x8029B2B0: lbu         $v0, 0x39B4($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X39B4);
    // 0x8029B2B4: addiu       $t1, $t1, 0x39B9
    ctx->r9 = ADD32(ctx->r9, 0X39B9);
    // 0x8029B2B8: addiu       $a2, $a2, 0x39B5
    ctx->r6 = ADD32(ctx->r6, 0X39B5);
L_8029B2BC:
    // 0x8029B2BC: lui         $a3, 0x802C
    ctx->r7 = S32(0X802C << 16);
    // 0x8029B2C0: slti        $at, $v0, 0x3
    ctx->r1 = SIGNED(ctx->r2) < 0X3 ? 1 : 0;
    // 0x8029B2C4: bne         $at, $zero, L_8029B314
    if (ctx->r1 != 0) {
        // 0x8029B2C8: addiu       $a3, $a3, 0x39B3
        ctx->r7 = ADD32(ctx->r7, 0X39B3);
            goto L_8029B314;
    }
    // 0x8029B2C8: addiu       $a3, $a3, 0x39B3
    ctx->r7 = ADD32(ctx->r7, 0X39B3);
    // 0x8029B2CC: lbu         $t8, 0x0($a3)
    ctx->r24 = MEM_BU(ctx->r7, 0X0);
    // 0x8029B2D0: lui         $v1, 0x802C
    ctx->r3 = S32(0X802C << 16);
    // 0x8029B2D4: slti        $at, $t8, 0xF
    ctx->r1 = SIGNED(ctx->r24) < 0XF ? 1 : 0;
    // 0x8029B2D8: beq         $at, $zero, L_8029B314
    if (ctx->r1 == 0) {
        // 0x8029B2DC: addiu       $v1, $v1, 0x39B1
        ctx->r3 = ADD32(ctx->r3, 0X39B1);
            goto L_8029B314;
    }
    // 0x8029B2DC: addiu       $v1, $v1, 0x39B1
    ctx->r3 = ADD32(ctx->r3, 0X39B1);
    // 0x8029B2E0: lbu         $v0, 0x0($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X0);
    // 0x8029B2E4: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    // 0x8029B2E8: blez        $v0, L_8029B314
    if (SIGNED(ctx->r2) <= 0) {
        // 0x8029B2EC: addiu       $t9, $v0, -0x1
        ctx->r25 = ADD32(ctx->r2, -0X1);
            goto L_8029B314;
    }
    // 0x8029B2EC: addiu       $t9, $v0, -0x1
    ctx->r25 = ADD32(ctx->r2, -0X1);
    // 0x8029B2F0: sb          $t9, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r25;
    // 0x8029B2F4: jal         0x8029B6FC
    // 0x8029B2F8: addiu       $a1, $zero, -0x10
    ctx->r5 = ADD32(0, -0X10);
    func_8029B6FC(rdram, ctx);
        goto after_5;
    // 0x8029B2F8: addiu       $a1, $zero, -0x10
    ctx->r5 = ADD32(0, -0X10);
    after_5:
    // 0x8029B2FC: lui         $a2, 0x802C
    ctx->r6 = S32(0X802C << 16);
    // 0x8029B300: lui         $t1, 0x802C
    ctx->r9 = S32(0X802C << 16);
    // 0x8029B304: lui         $a3, 0x802C
    ctx->r7 = S32(0X802C << 16);
    // 0x8029B308: addiu       $a3, $a3, 0x39B3
    ctx->r7 = ADD32(ctx->r7, 0X39B3);
    // 0x8029B30C: addiu       $t1, $t1, 0x39B9
    ctx->r9 = ADD32(ctx->r9, 0X39B9);
    // 0x8029B310: addiu       $a2, $a2, 0x39B5
    ctx->r6 = ADD32(ctx->r6, 0X39B5);
L_8029B314:
    // 0x8029B314: lbu         $t2, 0x0($a2)
    ctx->r10 = MEM_BU(ctx->r6, 0X0);
    // 0x8029B318: lui         $v1, 0x802C
    ctx->r3 = S32(0X802C << 16);
    // 0x8029B31C: bne         $t2, $zero, L_8029B624
    if (ctx->r10 != 0) {
        // 0x8029B320: addiu       $v1, $v1, 0x39B1
        ctx->r3 = ADD32(ctx->r3, 0X39B1);
            goto L_8029B624;
    }
    // 0x8029B320: addiu       $v1, $v1, 0x39B1
    ctx->r3 = ADD32(ctx->r3, 0X39B1);
    // 0x8029B324: lbu         $t3, 0x0($a3)
    ctx->r11 = MEM_BU(ctx->r7, 0X0);
    // 0x8029B328: nop

    // 0x8029B32C: bne         $t3, $zero, L_8029B628
    if (ctx->r11 != 0) {
        // 0x8029B330: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_8029B628;
    }
    // 0x8029B330: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8029B334: lbu         $t4, 0x0($v1)
    ctx->r12 = MEM_BU(ctx->r3, 0X0);
    // 0x8029B338: addiu       $t7, $zero, 0x1E
    ctx->r15 = ADD32(0, 0X1E);
    // 0x8029B33C: bne         $t4, $zero, L_8029B628
    if (ctx->r12 != 0) {
        // 0x8029B340: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_8029B628;
    }
    // 0x8029B340: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8029B344: lbu         $t5, 0x0($t1)
    ctx->r13 = MEM_BU(ctx->r9, 0X0);
    // 0x8029B348: sb          $t7, 0x0($a2)
    MEM_B(0X0, ctx->r6) = ctx->r15;
    // 0x8029B34C: addiu       $t6, $t5, 0x1
    ctx->r14 = ADD32(ctx->r13, 0X1);
    // 0x8029B350: b           L_8029B624
    // 0x8029B354: sb          $t6, 0x0($t1)
    MEM_B(0X0, ctx->r9) = ctx->r14;
        goto L_8029B624;
    // 0x8029B354: sb          $t6, 0x0($t1)
    MEM_B(0X0, ctx->r9) = ctx->r14;
L_8029B358:
    // 0x8029B358: lui         $a2, 0x802C
    ctx->r6 = S32(0X802C << 16);
    // 0x8029B35C: addiu       $a2, $a2, 0x39B5
    ctx->r6 = ADD32(ctx->r6, 0X39B5);
    // 0x8029B360: lbu         $t8, 0x0($a2)
    ctx->r24 = MEM_BU(ctx->r6, 0X0);
    // 0x8029B364: lui         $t3, 0x802C
    ctx->r11 = S32(0X802C << 16);
    // 0x8029B368: addiu       $t9, $t8, -0x1
    ctx->r25 = ADD32(ctx->r24, -0X1);
    // 0x8029B36C: andi        $t2, $t9, 0xFF
    ctx->r10 = ctx->r25 & 0XFF;
    // 0x8029B370: bne         $t2, $zero, L_8029B624
    if (ctx->r10 != 0) {
        // 0x8029B374: sb          $t9, 0x0($a2)
        MEM_B(0X0, ctx->r6) = ctx->r25;
            goto L_8029B624;
    }
    // 0x8029B374: sb          $t9, 0x0($a2)
    MEM_B(0X0, ctx->r6) = ctx->r25;
    // 0x8029B378: lbu         $t3, 0x39B8($t3)
    ctx->r11 = MEM_BU(ctx->r11, 0X39B8);
    // 0x8029B37C: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8029B380: bne         $t3, $at, L_8029B3C4
    if (ctx->r11 != ctx->r1) {
        // 0x8029B384: lui         $t0, 0x8012
        ctx->r8 = S32(0X8012 << 16);
            goto L_8029B3C4;
    }
    // 0x8029B384: lui         $t0, 0x8012
    ctx->r8 = S32(0X8012 << 16);
    // 0x8029B388: jal         0x80015BC0
    // 0x8029B38C: addiu       $a0, $zero, 0xA
    ctx->r4 = ADD32(0, 0XA);
    func_80015BC0(rdram, ctx);
        goto after_6;
    // 0x8029B38C: addiu       $a0, $zero, 0xA
    ctx->r4 = ADD32(0, 0XA);
    after_6:
    // 0x8029B390: jal         0x80015BC0
    // 0x8029B394: ori         $a0, $zero, 0x83BB
    ctx->r4 = 0 | 0X83BB;
    func_80015BC0(rdram, ctx);
        goto after_7;
    // 0x8029B394: ori         $a0, $zero, 0x83BB
    ctx->r4 = 0 | 0X83BB;
    after_7:
    // 0x8029B398: lui         $a2, 0x802C
    ctx->r6 = S32(0X802C << 16);
    // 0x8029B39C: addiu       $a2, $a2, 0x39B5
    ctx->r6 = ADD32(ctx->r6, 0X39B5);
    // 0x8029B3A0: addiu       $t4, $zero, 0x32
    ctx->r12 = ADD32(0, 0X32);
    // 0x8029B3A4: jal         0x80021960
    // 0x8029B3A8: sb          $t4, 0x0($a2)
    MEM_B(0X0, ctx->r6) = ctx->r12;
    func_80021960(rdram, ctx);
        goto after_8;
    // 0x8029B3A8: sb          $t4, 0x0($a2)
    MEM_B(0X0, ctx->r6) = ctx->r12;
    after_8:
    // 0x8029B3AC: lui         $t5, 0x802C
    ctx->r13 = S32(0X802C << 16);
    // 0x8029B3B0: lbu         $t5, 0x39B9($t5)
    ctx->r13 = MEM_BU(ctx->r13, 0X39B9);
    // 0x8029B3B4: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x8029B3B8: addiu       $t6, $t5, 0x1
    ctx->r14 = ADD32(ctx->r13, 0X1);
    // 0x8029B3BC: b           L_8029B624
    // 0x8029B3C0: sb          $t6, 0x39B9($at)
    MEM_B(0X39B9, ctx->r1) = ctx->r14;
        goto L_8029B624;
    // 0x8029B3C0: sb          $t6, 0x39B9($at)
    MEM_B(0X39B9, ctx->r1) = ctx->r14;
L_8029B3C4:
    // 0x8029B3C4: addiu       $t0, $t0, -0x2CF0
    ctx->r8 = ADD32(ctx->r8, -0X2CF0);
    // 0x8029B3C8: lhu         $t7, 0xA9C($t0)
    ctx->r15 = MEM_HU(ctx->r8, 0XA9C);
    // 0x8029B3CC: addiu       $v0, $zero, 0xA
    ctx->r2 = ADD32(0, 0XA);
    // 0x8029B3D0: andi        $t8, $t7, 0x100
    ctx->r24 = ctx->r15 & 0X100;
    // 0x8029B3D4: beq         $t8, $zero, L_8029B4B4
    if (ctx->r24 == 0) {
        // 0x8029B3D8: addiu       $a1, $zero, 0x3C
        ctx->r5 = ADD32(0, 0X3C);
            goto L_8029B4B4;
    }
    // 0x8029B3D8: addiu       $a1, $zero, 0x3C
    ctx->r5 = ADD32(0, 0X3C);
    // 0x8029B3DC: lui         $a0, 0x2
    ctx->r4 = S32(0X2 << 16);
    // 0x8029B3E0: lui         $v1, 0x800E
    ctx->r3 = S32(0X800E << 16);
    // 0x8029B3E4: addiu       $v1, $v1, -0x3770
    ctx->r3 = ADD32(ctx->r3, -0X3770);
    // 0x8029B3E8: ori         $a0, $a0, 0x8000
    ctx->r4 = ctx->r4 | 0X8000;
L_8029B3EC:
    // 0x8029B3EC: multu       $v0, $a1
    result = U64(U32(ctx->r2)) * U64(U32(ctx->r5)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8029B3F0: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8029B3F4: andi        $t4, $v0, 0xFF
    ctx->r12 = ctx->r2 & 0XFF;
    // 0x8029B3F8: slti        $at, $t4, 0x28
    ctx->r1 = SIGNED(ctx->r12) < 0X28 ? 1 : 0;
    // 0x8029B3FC: or          $v0, $t4, $zero
    ctx->r2 = ctx->r12 | 0;
    // 0x8029B400: mflo        $t9
    ctx->r25 = lo;
    // 0x8029B404: addu        $t2, $v1, $t9
    ctx->r10 = ADD32(ctx->r3, ctx->r25);
    // 0x8029B408: addu        $t3, $t2, $a0
    ctx->r11 = ADD32(ctx->r10, ctx->r4);
    // 0x8029B40C: bne         $at, $zero, L_8029B3EC
    if (ctx->r1 != 0) {
        // 0x8029B410: sb          $zero, 0x2148($t3)
        MEM_B(0X2148, ctx->r11) = 0;
            goto L_8029B3EC;
    }
    // 0x8029B410: sb          $zero, 0x2148($t3)
    MEM_B(0X2148, ctx->r11) = 0;
    // 0x8029B414: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_8029B418:
    // 0x8029B418: sll         $t5, $v0, 5
    ctx->r13 = S32(ctx->r2 << 5);
    // 0x8029B41C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8029B420: andi        $t8, $v0, 0xFF
    ctx->r24 = ctx->r2 & 0XFF;
    // 0x8029B424: addu        $t6, $v1, $t5
    ctx->r14 = ADD32(ctx->r3, ctx->r13);
    // 0x8029B428: slti        $at, $t8, 0x6
    ctx->r1 = SIGNED(ctx->r24) < 0X6 ? 1 : 0;
    // 0x8029B42C: addu        $t7, $t6, $a0
    ctx->r15 = ADD32(ctx->r14, ctx->r4);
    // 0x8029B430: or          $v0, $t8, $zero
    ctx->r2 = ctx->r24 | 0;
    // 0x8029B434: bne         $at, $zero, L_8029B418
    if (ctx->r1 != 0) {
        // 0x8029B438: sb          $zero, 0x7EEC($t7)
        MEM_B(0X7EEC, ctx->r15) = 0;
            goto L_8029B418;
    }
    // 0x8029B438: sb          $zero, 0x7EEC($t7)
    MEM_B(0X7EEC, ctx->r15) = 0;
    // 0x8029B43C: sb          $a1, 0x0($a2)
    MEM_B(0X0, ctx->r6) = ctx->r5;
    // 0x8029B440: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x8029B444: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x8029B448: sb          $t9, 0x3A31($at)
    MEM_B(0X3A31, ctx->r1) = ctx->r25;
    // 0x8029B44C: jal         0x8029B7E8
    // 0x8029B450: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    func_8029B7E8(rdram, ctx);
        goto after_9;
    // 0x8029B450: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_9:
    // 0x8029B454: lui         $t3, 0x802C
    ctx->r11 = S32(0X802C << 16);
    // 0x8029B458: lbu         $t3, 0x39B4($t3)
    ctx->r11 = MEM_BU(ctx->r11, 0X39B4);
    // 0x8029B45C: lui         $t0, 0x8012
    ctx->r8 = S32(0X8012 << 16);
    // 0x8029B460: sll         $t4, $t3, 3
    ctx->r12 = S32(ctx->r11 << 3);
    // 0x8029B464: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x8029B468: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x8029B46C: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x8029B470: addiu       $t0, $t0, -0x2CF0
    ctx->r8 = ADD32(ctx->r8, -0X2CF0);
    // 0x8029B474: lui         $v0, 0x802C
    ctx->r2 = S32(0X802C << 16);
    // 0x8029B478: sb          $t2, 0x39B8($at)
    MEM_B(0X39B8, ctx->r1) = ctx->r10;
    // 0x8029B47C: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x8029B480: addiu       $v0, $v0, 0x39B6
    ctx->r2 = ADD32(ctx->r2, 0X39B6);
    // 0x8029B484: addiu       $t5, $t4, 0x24
    ctx->r13 = ADD32(ctx->r12, 0X24);
    // 0x8029B488: lbu         $a1, 0xA94($t0)
    ctx->r5 = MEM_BU(ctx->r8, 0XA94);
    // 0x8029B48C: lui         $a0, 0x8010
    ctx->r4 = S32(0X8010 << 16);
    // 0x8029B490: sh          $t5, 0x0($v0)
    MEM_H(0X0, ctx->r2) = ctx->r13;
    // 0x8029B494: addiu       $a0, $a0, 0x6B00
    ctx->r4 = ADD32(ctx->r4, 0X6B00);
    // 0x8029B498: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x8029B49C: jal         0x8029AD54
    // 0x8029B4A0: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    func_8029AD54(rdram, ctx);
        goto after_10;
    // 0x8029B4A0: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_10:
    // 0x8029B4A4: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x8029B4A8: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x8029B4AC: b           L_8029B624
    // 0x8029B4B0: sb          $t6, 0x39B9($at)
    MEM_B(0X39B9, ctx->r1) = ctx->r14;
        goto L_8029B624;
    // 0x8029B4B0: sb          $t6, 0x39B9($at)
    MEM_B(0X39B9, ctx->r1) = ctx->r14;
L_8029B4B4:
    // 0x8029B4B4: jal         0x80015BC0
    // 0x8029B4B8: addiu       $a0, $zero, 0xA
    ctx->r4 = ADD32(0, 0XA);
    func_80015BC0(rdram, ctx);
        goto after_11;
    // 0x8029B4B8: addiu       $a0, $zero, 0xA
    ctx->r4 = ADD32(0, 0XA);
    after_11:
    // 0x8029B4BC: jal         0x80015BC0
    // 0x8029B4C0: ori         $a0, $zero, 0x83BB
    ctx->r4 = 0 | 0X83BB;
    func_80015BC0(rdram, ctx);
        goto after_12;
    // 0x8029B4C0: ori         $a0, $zero, 0x83BB
    ctx->r4 = 0 | 0X83BB;
    after_12:
    // 0x8029B4C4: lui         $a2, 0x802C
    ctx->r6 = S32(0X802C << 16);
    // 0x8029B4C8: addiu       $a2, $a2, 0x39B5
    ctx->r6 = ADD32(ctx->r6, 0X39B5);
    // 0x8029B4CC: addiu       $t7, $zero, 0x32
    ctx->r15 = ADD32(0, 0X32);
    // 0x8029B4D0: jal         0x80021960
    // 0x8029B4D4: sb          $t7, 0x0($a2)
    MEM_B(0X0, ctx->r6) = ctx->r15;
    func_80021960(rdram, ctx);
        goto after_13;
    // 0x8029B4D4: sb          $t7, 0x0($a2)
    MEM_B(0X0, ctx->r6) = ctx->r15;
    after_13:
    // 0x8029B4D8: lui         $t8, 0x802C
    ctx->r24 = S32(0X802C << 16);
    // 0x8029B4DC: lbu         $t8, 0x39B9($t8)
    ctx->r24 = MEM_BU(ctx->r24, 0X39B9);
    // 0x8029B4E0: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x8029B4E4: addiu       $t9, $t8, 0x1
    ctx->r25 = ADD32(ctx->r24, 0X1);
    // 0x8029B4E8: b           L_8029B624
    // 0x8029B4EC: sb          $t9, 0x39B9($at)
    MEM_B(0X39B9, ctx->r1) = ctx->r25;
        goto L_8029B624;
    // 0x8029B4EC: sb          $t9, 0x39B9($at)
    MEM_B(0X39B9, ctx->r1) = ctx->r25;
L_8029B4F0:
    // 0x8029B4F0: lui         $a2, 0x802C
    ctx->r6 = S32(0X802C << 16);
    // 0x8029B4F4: addiu       $a2, $a2, 0x39B5
    ctx->r6 = ADD32(ctx->r6, 0X39B5);
    // 0x8029B4F8: lbu         $v0, 0x0($a2)
    ctx->r2 = MEM_BU(ctx->r6, 0X0);
    // 0x8029B4FC: nop

    // 0x8029B500: beq         $v0, $zero, L_8029B510
    if (ctx->r2 == 0) {
        // 0x8029B504: addiu       $t2, $v0, -0x1
        ctx->r10 = ADD32(ctx->r2, -0X1);
            goto L_8029B510;
    }
    // 0x8029B504: addiu       $t2, $v0, -0x1
    ctx->r10 = ADD32(ctx->r2, -0X1);
    // 0x8029B508: b           L_8029B624
    // 0x8029B50C: sb          $t2, 0x0($a2)
    MEM_B(0X0, ctx->r6) = ctx->r10;
        goto L_8029B624;
    // 0x8029B50C: sb          $t2, 0x0($a2)
    MEM_B(0X0, ctx->r6) = ctx->r10;
L_8029B510:
    // 0x8029B510: lui         $t3, 0x8011
    ctx->r11 = S32(0X8011 << 16);
    // 0x8029B514: lh          $t3, -0x2FA6($t3)
    ctx->r11 = MEM_H(ctx->r11, -0X2FA6);
    // 0x8029B518: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8029B51C: bne         $t3, $at, L_8029B624
    if (ctx->r11 != ctx->r1) {
        // 0x8029B520: lui         $t0, 0x8012
        ctx->r8 = S32(0X8012 << 16);
            goto L_8029B624;
    }
    // 0x8029B520: lui         $t0, 0x8012
    ctx->r8 = S32(0X8012 << 16);
    // 0x8029B524: addiu       $t0, $t0, -0x2CF0
    ctx->r8 = ADD32(ctx->r8, -0X2CF0);
    // 0x8029B528: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x8029B52C: addiu       $a0, $zero, -0x1
    ctx->r4 = ADD32(0, -0X1);
L_8029B530:
    // 0x8029B530: sll         $t4, $v0, 1
    ctx->r12 = S32(ctx->r2 << 1);
    // 0x8029B534: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8029B538: andi        $t5, $v0, 0xFF
    ctx->r13 = ctx->r2 & 0XFF;
    // 0x8029B53C: slti        $at, $t5, 0x3
    ctx->r1 = SIGNED(ctx->r13) < 0X3 ? 1 : 0;
    // 0x8029B540: addu        $v1, $t0, $t4
    ctx->r3 = ADD32(ctx->r8, ctx->r12);
    // 0x8029B544: or          $v0, $t5, $zero
    ctx->r2 = ctx->r13 | 0;
    // 0x8029B548: sb          $a0, 0xA86($v1)
    MEM_B(0XA86, ctx->r3) = ctx->r4;
    // 0x8029B54C: bne         $at, $zero, L_8029B530
    if (ctx->r1 != 0) {
        // 0x8029B550: sb          $a0, 0x151A($v1)
        MEM_B(0X151A, ctx->r3) = ctx->r4;
            goto L_8029B530;
    }
    // 0x8029B550: sb          $a0, 0x151A($v1)
    MEM_B(0X151A, ctx->r3) = ctx->r4;
    // 0x8029B554: jal         0x8001B854
    // 0x8029B558: addiu       $a0, $zero, 0x3
    ctx->r4 = ADD32(0, 0X3);
    func_8001B854(rdram, ctx);
        goto after_14;
    // 0x8029B558: addiu       $a0, $zero, 0x3
    ctx->r4 = ADD32(0, 0X3);
    after_14:
    // 0x8029B55C: lui         $t6, 0x8011
    ctx->r14 = S32(0X8011 << 16);
    // 0x8029B560: lw          $t6, -0x2F98($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X2F98);
    // 0x8029B564: lui         $at, 0x3
    ctx->r1 = S32(0X3 << 16);
    // 0x8029B568: addu        $at, $at, $t6
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x8029B56C: jal         0x8028E770
    // 0x8029B570: sb          $zero, 0x7D6($at)
    MEM_B(0X7D6, ctx->r1) = 0;
    func_8028E770(rdram, ctx);
        goto after_15;
    // 0x8029B570: sb          $zero, 0x7D6($at)
    MEM_B(0X7D6, ctx->r1) = 0;
    after_15:
    // 0x8029B574: lui         $t7, 0x8012
    ctx->r15 = S32(0X8012 << 16);
    // 0x8029B578: lhu         $t7, 0xB78($t7)
    ctx->r15 = MEM_HU(ctx->r15, 0XB78);
    // 0x8029B57C: lui         $t0, 0x8012
    ctx->r8 = S32(0X8012 << 16);
    // 0x8029B580: addiu       $at, $zero, 0x7
    ctx->r1 = ADD32(0, 0X7);
    // 0x8029B584: bne         $t7, $at, L_8029B624
    if (ctx->r15 != ctx->r1) {
        // 0x8029B588: addiu       $t0, $t0, -0x2CF0
        ctx->r8 = ADD32(ctx->r8, -0X2CF0);
            goto L_8029B624;
    }
    // 0x8029B588: addiu       $t0, $t0, -0x2CF0
    ctx->r8 = ADD32(ctx->r8, -0X2CF0);
    // 0x8029B58C: addiu       $t8, $zero, 0x2
    ctx->r24 = ADD32(0, 0X2);
    // 0x8029B590: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x8029B594: sb          $t8, 0x3988($at)
    MEM_B(0X3988, ctx->r1) = ctx->r24;
    // 0x8029B598: lui         $v0, 0x8009
    ctx->r2 = S32(0X8009 << 16);
    // 0x8029B59C: lw          $v0, 0x3B20($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X3B20);
    // 0x8029B5A0: addiu       $a0, $zero, 0x14
    ctx->r4 = ADD32(0, 0X14);
    // 0x8029B5A4: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x8029B5A8: sb          $a0, 0x3989($at)
    MEM_B(0X3989, ctx->r1) = ctx->r4;
    // 0x8029B5AC: lh          $t9, 0xEA($v0)
    ctx->r25 = MEM_H(ctx->r2, 0XEA);
    // 0x8029B5B0: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x8029B5B4: mtc1        $t9, $f4
    ctx->f4.u32l = ctx->r25;
    // 0x8029B5B8: nop

    // 0x8029B5BC: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x8029B5C0: swc1        $f6, 0x397C($at)
    MEM_W(0X397C, ctx->r1) = ctx->f6.u32l;
    // 0x8029B5C4: lh          $t2, 0xE8($v0)
    ctx->r10 = MEM_H(ctx->r2, 0XE8);
    // 0x8029B5C8: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x8029B5CC: mtc1        $t2, $f8
    ctx->f8.u32l = ctx->r10;
    // 0x8029B5D0: nop

    // 0x8029B5D4: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x8029B5D8: swc1        $f10, 0x3978($at)
    MEM_W(0X3978, ctx->r1) = ctx->f10.u32l;
    // 0x8029B5DC: lh          $t3, 0xEA($v0)
    ctx->r11 = MEM_H(ctx->r2, 0XEA);
    // 0x8029B5E0: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x8029B5E4: mtc1        $t3, $f16
    ctx->f16.u32l = ctx->r11;
    // 0x8029B5E8: nop

    // 0x8029B5EC: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x8029B5F0: swc1        $f18, 0x3974($at)
    MEM_W(0X3974, ctx->r1) = ctx->f18.u32l;
    // 0x8029B5F4: lh          $t4, 0xE8($v0)
    ctx->r12 = MEM_H(ctx->r2, 0XE8);
    // 0x8029B5F8: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x8029B5FC: mtc1        $t4, $f4
    ctx->f4.u32l = ctx->r12;
    // 0x8029B600: nop

    // 0x8029B604: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x8029B608: swc1        $f6, 0x3970($at)
    MEM_W(0X3970, ctx->r1) = ctx->f6.u32l;
    // 0x8029B60C: lhu         $t5, 0x10($t0)
    ctx->r13 = MEM_HU(ctx->r8, 0X10);
    // 0x8029B610: lhu         $t7, 0xAA4($t0)
    ctx->r15 = MEM_HU(ctx->r8, 0XAA4);
    // 0x8029B614: andi        $t6, $t5, 0x8000
    ctx->r14 = ctx->r13 & 0X8000;
    // 0x8029B618: andi        $t8, $t7, 0x8000
    ctx->r24 = ctx->r15 & 0X8000;
    // 0x8029B61C: sh          $t6, 0x10($t0)
    MEM_H(0X10, ctx->r8) = ctx->r14;
    // 0x8029B620: sh          $t8, 0xAA4($t0)
    MEM_H(0XAA4, ctx->r8) = ctx->r24;
L_8029B624:
    // 0x8029B624: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8029B628:
    // 0x8029B628: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8029B62C: jr          $ra
    // 0x8029B630: nop

    return;
    // 0x8029B630: nop

;}
RECOMP_FUNC void func_8029B634(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8029B634: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x8029B638: sll         $t6, $a0, 16
    ctx->r14 = S32(ctx->r4 << 16);
    // 0x8029B63C: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    // 0x8029B640: sll         $t8, $a1, 16
    ctx->r24 = S32(ctx->r5 << 16);
    // 0x8029B644: lui         $t0, 0x2
    ctx->r8 = S32(0X2 << 16);
    // 0x8029B648: lui         $a2, 0x800E
    ctx->r6 = S32(0X800E << 16);
    // 0x8029B64C: sra         $a1, $t8, 16
    ctx->r5 = S32(SIGNED(ctx->r24) >> 16);
    // 0x8029B650: sra         $a0, $t6, 16
    ctx->r4 = S32(SIGNED(ctx->r14) >> 16);
    // 0x8029B654: addiu       $a2, $a2, -0x3770
    ctx->r6 = ADD32(ctx->r6, -0X3770);
    // 0x8029B658: ori         $t0, $t0, 0x8000
    ctx->r8 = ctx->r8 | 0X8000;
    // 0x8029B65C: addiu       $v0, $zero, 0xA
    ctx->r2 = ADD32(0, 0XA);
    // 0x8029B660: addiu       $a3, $zero, 0x3C
    ctx->r7 = ADD32(0, 0X3C);
L_8029B664:
    // 0x8029B664: multu       $v0, $a3
    result = U64(U32(ctx->r2)) * U64(U32(ctx->r7)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8029B668: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8029B66C: andi        $t8, $v0, 0xFF
    ctx->r24 = ctx->r2 & 0XFF;
    // 0x8029B670: slti        $at, $t8, 0x28
    ctx->r1 = SIGNED(ctx->r24) < 0X28 ? 1 : 0;
    // 0x8029B674: mflo        $t1
    ctx->r9 = lo;
    // 0x8029B678: addu        $t2, $a2, $t1
    ctx->r10 = ADD32(ctx->r6, ctx->r9);
    // 0x8029B67C: addu        $v1, $t2, $t0
    ctx->r3 = ADD32(ctx->r10, ctx->r8);
    // 0x8029B680: lbu         $t3, 0x2148($v1)
    ctx->r11 = MEM_BU(ctx->r3, 0X2148);
    // 0x8029B684: nop

    // 0x8029B688: beq         $t3, $zero, L_8029B6A8
    if (ctx->r11 == 0) {
        // 0x8029B68C: nop
    
            goto L_8029B6A8;
    }
    // 0x8029B68C: nop

    // 0x8029B690: lh          $t4, 0x215C($v1)
    ctx->r12 = MEM_H(ctx->r3, 0X215C);
    // 0x8029B694: lh          $t6, 0x2160($v1)
    ctx->r14 = MEM_H(ctx->r3, 0X2160);
    // 0x8029B698: addu        $t5, $t4, $a0
    ctx->r13 = ADD32(ctx->r12, ctx->r4);
    // 0x8029B69C: addu        $t7, $t6, $a1
    ctx->r15 = ADD32(ctx->r14, ctx->r5);
    // 0x8029B6A0: sh          $t5, 0x215C($v1)
    MEM_H(0X215C, ctx->r3) = ctx->r13;
    // 0x8029B6A4: sh          $t7, 0x2160($v1)
    MEM_H(0X2160, ctx->r3) = ctx->r15;
L_8029B6A8:
    // 0x8029B6A8: bne         $at, $zero, L_8029B664
    if (ctx->r1 != 0) {
        // 0x8029B6AC: or          $v0, $t8, $zero
        ctx->r2 = ctx->r24 | 0;
            goto L_8029B664;
    }
    // 0x8029B6AC: or          $v0, $t8, $zero
    ctx->r2 = ctx->r24 | 0;
    // 0x8029B6B0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_8029B6B4:
    // 0x8029B6B4: sll         $t9, $v0, 5
    ctx->r25 = S32(ctx->r2 << 5);
    // 0x8029B6B8: addu        $t1, $a2, $t9
    ctx->r9 = ADD32(ctx->r6, ctx->r25);
    // 0x8029B6BC: addu        $v1, $t1, $t0
    ctx->r3 = ADD32(ctx->r9, ctx->r8);
    // 0x8029B6C0: lbu         $t2, 0x7EEC($v1)
    ctx->r10 = MEM_BU(ctx->r3, 0X7EEC);
    // 0x8029B6C4: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8029B6C8: beq         $t2, $zero, L_8029B6E8
    if (ctx->r10 == 0) {
        // 0x8029B6CC: andi        $t7, $v0, 0xFF
        ctx->r15 = ctx->r2 & 0XFF;
            goto L_8029B6E8;
    }
    // 0x8029B6CC: andi        $t7, $v0, 0xFF
    ctx->r15 = ctx->r2 & 0XFF;
    // 0x8029B6D0: lh          $t3, 0x7EF2($v1)
    ctx->r11 = MEM_H(ctx->r3, 0X7EF2);
    // 0x8029B6D4: lh          $t5, 0x7EF4($v1)
    ctx->r13 = MEM_H(ctx->r3, 0X7EF4);
    // 0x8029B6D8: addu        $t4, $t3, $a0
    ctx->r12 = ADD32(ctx->r11, ctx->r4);
    // 0x8029B6DC: addu        $t6, $t5, $a1
    ctx->r14 = ADD32(ctx->r13, ctx->r5);
    // 0x8029B6E0: sh          $t4, 0x7EF2($v1)
    MEM_H(0X7EF2, ctx->r3) = ctx->r12;
    // 0x8029B6E4: sh          $t6, 0x7EF4($v1)
    MEM_H(0X7EF4, ctx->r3) = ctx->r14;
L_8029B6E8:
    // 0x8029B6E8: slti        $at, $t7, 0x6
    ctx->r1 = SIGNED(ctx->r15) < 0X6 ? 1 : 0;
    // 0x8029B6EC: bne         $at, $zero, L_8029B6B4
    if (ctx->r1 != 0) {
        // 0x8029B6F0: or          $v0, $t7, $zero
        ctx->r2 = ctx->r15 | 0;
            goto L_8029B6B4;
    }
    // 0x8029B6F0: or          $v0, $t7, $zero
    ctx->r2 = ctx->r15 | 0;
    // 0x8029B6F4: jr          $ra
    // 0x8029B6F8: nop

    return;
    // 0x8029B6F8: nop

;}
RECOMP_FUNC void func_8029B6FC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8029B6FC: andi        $v0, $a0, 0xFF
    ctx->r2 = ctx->r4 & 0XFF;
    // 0x8029B700: addiu       $t1, $zero, 0x3C
    ctx->r9 = ADD32(0, 0X3C);
    // 0x8029B704: multu       $v0, $t1
    result = U64(U32(ctx->r2)) * U64(U32(ctx->r9)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8029B708: sll         $a2, $v0, 1
    ctx->r6 = S32(ctx->r2 << 1);
    // 0x8029B70C: lui         $t0, 0x800E
    ctx->r8 = S32(0X800E << 16);
    // 0x8029B710: addiu       $t0, $t0, -0x3770
    ctx->r8 = ADD32(ctx->r8, -0X3770);
    // 0x8029B714: lui         $t2, 0x2
    ctx->r10 = S32(0X2 << 16);
    // 0x8029B718: ori         $t2, $t2, 0x8000
    ctx->r10 = ctx->r10 | 0X8000;
    // 0x8029B71C: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    // 0x8029B720: or          $t7, $a1, $zero
    ctx->r15 = ctx->r5 | 0;
    // 0x8029B724: or          $a1, $t7, $zero
    ctx->r5 = ctx->r15 | 0;
    // 0x8029B728: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x8029B72C: mflo        $t9
    ctx->r25 = lo;
    // 0x8029B730: addu        $t3, $t0, $t9
    ctx->r11 = ADD32(ctx->r8, ctx->r25);
    // 0x8029B734: addu        $v1, $t3, $t2
    ctx->r3 = ADD32(ctx->r11, ctx->r10);
    // 0x8029B738: multu       $a2, $t1
    result = U64(U32(ctx->r6)) * U64(U32(ctx->r9)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8029B73C: lh          $t4, 0x23B4($v1)
    ctx->r12 = MEM_H(ctx->r3, 0X23B4);
    // 0x8029B740: lh          $t6, 0x25D0($v1)
    ctx->r14 = MEM_H(ctx->r3, 0X25D0);
    // 0x8029B744: addu        $t5, $t4, $a1
    ctx->r13 = ADD32(ctx->r12, ctx->r5);
    // 0x8029B748: addu        $t7, $t6, $a1
    ctx->r15 = ADD32(ctx->r14, ctx->r5);
    // 0x8029B74C: sh          $t5, 0x23B4($v1)
    MEM_H(0X23B4, ctx->r3) = ctx->r13;
    // 0x8029B750: sh          $t7, 0x25D0($v1)
    MEM_H(0X25D0, ctx->r3) = ctx->r15;
    // 0x8029B754: mflo        $t8
    ctx->r24 = lo;
    // 0x8029B758: addu        $t9, $t0, $t8
    ctx->r25 = ADD32(ctx->r8, ctx->r24);
    // 0x8029B75C: addu        $a3, $t9, $t2
    ctx->r7 = ADD32(ctx->r25, ctx->r10);
    // 0x8029B760: lh          $t3, 0x2468($a3)
    ctx->r11 = MEM_H(ctx->r7, 0X2468);
    // 0x8029B764: lh          $t5, 0x24A4($a3)
    ctx->r13 = MEM_H(ctx->r7, 0X24A4);
    // 0x8029B768: addu        $t4, $t3, $a1
    ctx->r12 = ADD32(ctx->r11, ctx->r5);
    // 0x8029B76C: lh          $t7, 0x2684($a3)
    ctx->r15 = MEM_H(ctx->r7, 0X2684);
    // 0x8029B770: lh          $t9, 0x26C0($a3)
    ctx->r25 = MEM_H(ctx->r7, 0X26C0);
    // 0x8029B774: sh          $t4, 0x2468($a3)
    MEM_H(0X2468, ctx->r7) = ctx->r12;
    // 0x8029B778: addu        $t6, $t5, $a1
    ctx->r14 = ADD32(ctx->r13, ctx->r5);
    // 0x8029B77C: lh          $t4, 0x27EC($a3)
    ctx->r12 = MEM_H(ctx->r7, 0X27EC);
    // 0x8029B780: sh          $t6, 0x24A4($a3)
    MEM_H(0X24A4, ctx->r7) = ctx->r14;
    // 0x8029B784: addu        $t8, $t7, $a1
    ctx->r24 = ADD32(ctx->r15, ctx->r5);
    // 0x8029B788: addu        $t3, $t9, $a1
    ctx->r11 = ADD32(ctx->r25, ctx->r5);
    // 0x8029B78C: lh          $t6, 0x2828($a3)
    ctx->r14 = MEM_H(ctx->r7, 0X2828);
    // 0x8029B790: sh          $t8, 0x2684($a3)
    MEM_H(0X2684, ctx->r7) = ctx->r24;
    // 0x8029B794: sh          $t3, 0x26C0($a3)
    MEM_H(0X26C0, ctx->r7) = ctx->r11;
    // 0x8029B798: addu        $t5, $t4, $a1
    ctx->r13 = ADD32(ctx->r12, ctx->r5);
    // 0x8029B79C: lh          $t8, 0x2954($a3)
    ctx->r24 = MEM_H(ctx->r7, 0X2954);
    // 0x8029B7A0: lh          $t3, 0x2990($a3)
    ctx->r11 = MEM_H(ctx->r7, 0X2990);
    // 0x8029B7A4: sh          $t5, 0x27EC($a3)
    MEM_H(0X27EC, ctx->r7) = ctx->r13;
    // 0x8029B7A8: sll         $t5, $a2, 5
    ctx->r13 = S32(ctx->r6 << 5);
    // 0x8029B7AC: addu        $t7, $t6, $a1
    ctx->r15 = ADD32(ctx->r14, ctx->r5);
    // 0x8029B7B0: addu        $t6, $t0, $t5
    ctx->r14 = ADD32(ctx->r8, ctx->r13);
    // 0x8029B7B4: addu        $t9, $t8, $a1
    ctx->r25 = ADD32(ctx->r24, ctx->r5);
    // 0x8029B7B8: addu        $t4, $t3, $a1
    ctx->r12 = ADD32(ctx->r11, ctx->r5);
    // 0x8029B7BC: sh          $t7, 0x2828($a3)
    MEM_H(0X2828, ctx->r7) = ctx->r15;
    // 0x8029B7C0: sh          $t9, 0x2954($a3)
    MEM_H(0X2954, ctx->r7) = ctx->r25;
    // 0x8029B7C4: sh          $t4, 0x2990($a3)
    MEM_H(0X2990, ctx->r7) = ctx->r12;
    // 0x8029B7C8: addu        $v0, $t6, $t2
    ctx->r2 = ADD32(ctx->r14, ctx->r10);
    // 0x8029B7CC: lh          $t7, 0x7EF2($v0)
    ctx->r15 = MEM_H(ctx->r2, 0X7EF2);
    // 0x8029B7D0: lh          $t9, 0x7F12($v0)
    ctx->r25 = MEM_H(ctx->r2, 0X7F12);
    // 0x8029B7D4: addu        $t8, $t7, $a1
    ctx->r24 = ADD32(ctx->r15, ctx->r5);
    // 0x8029B7D8: addu        $t3, $t9, $a1
    ctx->r11 = ADD32(ctx->r25, ctx->r5);
    // 0x8029B7DC: sh          $t8, 0x7EF2($v0)
    MEM_H(0X7EF2, ctx->r2) = ctx->r24;
    // 0x8029B7E0: jr          $ra
    // 0x8029B7E4: sh          $t3, 0x7F12($v0)
    MEM_H(0X7F12, ctx->r2) = ctx->r11;
    return;
    // 0x8029B7E4: sh          $t3, 0x7F12($v0)
    MEM_H(0X7F12, ctx->r2) = ctx->r11;
;}
RECOMP_FUNC void func_8029B7E8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8029B7E8: addiu       $sp, $sp, -0x78
    ctx->r29 = ADD32(ctx->r29, -0X78);
    // 0x8029B7EC: addiu       $t6, $zero, 0xA
    ctx->r14 = ADD32(0, 0XA);
    // 0x8029B7F0: sw          $a0, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->r4;
    // 0x8029B7F4: sb          $t6, 0x76($sp)
    MEM_B(0X76, ctx->r29) = ctx->r14;
    // 0x8029B7F8: lbu         $t6, 0x7B($sp)
    ctx->r14 = MEM_BU(ctx->r29, 0X7B);
    // 0x8029B7FC: addiu       $t7, $zero, 0xD
    ctx->r15 = ADD32(0, 0XD);
    // 0x8029B800: sb          $t7, 0x74($sp)
    MEM_B(0X74, ctx->r29) = ctx->r15;
    // 0x8029B804: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x8029B808: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8029B80C: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8029B810: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8029B814: sll         $t7, $t7, 3
    ctx->r15 = S32(ctx->r15 << 3);
    // 0x8029B818: addiu       $t8, $zero, 0x13
    ctx->r24 = ADD32(0, 0X13);
    // 0x8029B81C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8029B820: sb          $t8, 0x75($sp)
    MEM_B(0X75, ctx->r29) = ctx->r24;
    // 0x8029B824: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8029B828: addiu       $t9, $zero, 0x16
    ctx->r25 = ADD32(0, 0X16);
    // 0x8029B82C: lui         $t8, 0x8012
    ctx->r24 = S32(0X8012 << 16);
    // 0x8029B830: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8029B834: sw          $s7, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r23;
    // 0x8029B838: lui         $a3, 0x802C
    ctx->r7 = S32(0X802C << 16);
    // 0x8029B83C: sb          $t9, 0x71($sp)
    MEM_B(0X71, ctx->r29) = ctx->r25;
    // 0x8029B840: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8029B844: addiu       $t8, $t8, -0x2CF0
    ctx->r24 = ADD32(ctx->r24, -0X2CF0);
    // 0x8029B848: addiu       $a3, $a3, 0x39B4
    ctx->r7 = ADD32(ctx->r7, 0X39B4);
    // 0x8029B84C: addiu       $t0, $zero, 0x1C
    ctx->r8 = ADD32(0, 0X1C);
    // 0x8029B850: addiu       $t1, $zero, 0x22
    ctx->r9 = ADD32(0, 0X22);
    // 0x8029B854: addiu       $t2, $zero, 0x10C
    ctx->r10 = ADD32(0, 0X10C);
    // 0x8029B858: addiu       $t3, $zero, 0x48
    ctx->r11 = ADD32(0, 0X48);
    // 0x8029B85C: addiu       $t4, $zero, 0x10A
    ctx->r12 = ADD32(0, 0X10A);
    // 0x8029B860: addiu       $t5, $zero, 0x106
    ctx->r13 = ADD32(0, 0X106);
    // 0x8029B864: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x8029B868: lui         $s7, 0x800E
    ctx->r23 = S32(0X800E << 16);
    // 0x8029B86C: sw          $ra, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r31;
    // 0x8029B870: sw          $fp, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r30;
    // 0x8029B874: sw          $s6, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r22;
    // 0x8029B878: sw          $s5, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r21;
    // 0x8029B87C: sw          $s4, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r20;
    // 0x8029B880: sw          $s3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r19;
    // 0x8029B884: sw          $s2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r18;
    // 0x8029B888: sw          $s1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r17;
    // 0x8029B88C: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x8029B890: sb          $t0, 0x6C($sp)
    MEM_B(0X6C, ctx->r29) = ctx->r8;
    // 0x8029B894: sb          $t1, 0x6B($sp)
    MEM_B(0X6B, ctx->r29) = ctx->r9;
    // 0x8029B898: sb          $zero, 0x6D($sp)
    MEM_B(0X6D, ctx->r29) = 0;
    // 0x8029B89C: addiu       $a2, $zero, 0x48
    ctx->r6 = ADD32(0, 0X48);
    // 0x8029B8A0: sh          $t2, 0x66($sp)
    MEM_H(0X66, ctx->r29) = ctx->r10;
    // 0x8029B8A4: sh          $t3, 0x62($sp)
    MEM_H(0X62, ctx->r29) = ctx->r11;
    // 0x8029B8A8: sh          $t4, 0x5C($sp)
    MEM_H(0X5C, ctx->r29) = ctx->r12;
    // 0x8029B8AC: sh          $t5, 0x58($sp)
    MEM_H(0X58, ctx->r29) = ctx->r13;
    // 0x8029B8B0: sb          $zero, 0x0($a3)
    MEM_B(0X0, ctx->r7) = 0;
    // 0x8029B8B4: addiu       $s7, $s7, -0x3770
    ctx->r23 = ADD32(ctx->r23, -0X3770);
    // 0x8029B8B8: sw          $t9, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r25;
    // 0x8029B8BC: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
L_8029B8C0:
    // 0x8029B8C0: lw          $t0, 0x50($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X50);
    // 0x8029B8C4: sll         $v0, $v1, 1
    ctx->r2 = S32(ctx->r3 << 1);
    // 0x8029B8C8: addu        $s3, $t0, $v0
    ctx->r19 = ADD32(ctx->r8, ctx->r2);
    // 0x8029B8CC: lb          $t1, 0xA86($s3)
    ctx->r9 = MEM_B(ctx->r19, 0XA86);
    // 0x8029B8D0: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x8029B8D4: beq         $t1, $at, L_8029BD64
    if (ctx->r9 == ctx->r1) {
        // 0x8029B8D8: or          $a1, $zero, $zero
        ctx->r5 = 0 | 0;
            goto L_8029BD64;
    }
    // 0x8029B8D8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8029B8DC: lbu         $t4, 0x7B($sp)
    ctx->r12 = MEM_BU(ctx->r29, 0X7B);
    // 0x8029B8E0: lbu         $t2, 0x0($a3)
    ctx->r10 = MEM_BU(ctx->r7, 0X0);
    // 0x8029B8E4: sll         $t7, $t4, 2
    ctx->r15 = S32(ctx->r12 << 2);
    // 0x8029B8E8: addu        $t7, $t7, $t4
    ctx->r15 = ADD32(ctx->r15, ctx->r12);
    // 0x8029B8EC: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8029B8F0: addu        $t7, $t7, $t4
    ctx->r15 = ADD32(ctx->r15, ctx->r12);
    // 0x8029B8F4: sll         $t7, $t7, 3
    ctx->r15 = S32(ctx->r15 << 3);
    // 0x8029B8F8: addu        $t7, $t7, $t4
    ctx->r15 = ADD32(ctx->r15, ctx->r12);
    // 0x8029B8FC: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8029B900: lui         $t6, 0x801B
    ctx->r14 = S32(0X801B << 16);
    // 0x8029B904: lui         $t8, 0x8012
    ctx->r24 = S32(0X8012 << 16);
    // 0x8029B908: addu        $t7, $t7, $t4
    ctx->r15 = ADD32(ctx->r15, ctx->r12);
    // 0x8029B90C: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8029B910: addiu       $t8, $t8, -0x2CF0
    ctx->r24 = ADD32(ctx->r24, -0X2CF0);
    // 0x8029B914: addiu       $t6, $t6, 0x36A0
    ctx->r14 = ADD32(ctx->r14, 0X36A0);
    // 0x8029B918: lbu         $a0, 0x76($sp)
    ctx->r4 = MEM_BU(ctx->r29, 0X76);
    // 0x8029B91C: sll         $t5, $t4, 4
    ctx->r13 = S32(ctx->r12 << 4);
    // 0x8029B920: addiu       $t3, $t2, 0x1
    ctx->r11 = ADD32(ctx->r10, 0X1);
    // 0x8029B924: sb          $t3, 0x0($a3)
    MEM_B(0X0, ctx->r7) = ctx->r11;
    // 0x8029B928: addu        $s4, $t5, $t6
    ctx->r20 = ADD32(ctx->r13, ctx->r14);
    // 0x8029B92C: addu        $s5, $t7, $t8
    ctx->r21 = ADD32(ctx->r15, ctx->r24);
    // 0x8029B930: sw          $v0, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r2;
    // 0x8029B934: sb          $v1, 0x77($sp)
    MEM_B(0X77, ctx->r29) = ctx->r3;
    // 0x8029B938: jal         0x8029ACD4
    // 0x8029B93C: sh          $a2, 0x68($sp)
    MEM_H(0X68, ctx->r29) = ctx->r6;
    func_8029ACD4(rdram, ctx);
        goto after_0;
    // 0x8029B93C: sh          $a2, 0x68($sp)
    MEM_H(0X68, ctx->r29) = ctx->r6;
    after_0:
    // 0x8029B940: lbu         $t9, 0x76($sp)
    ctx->r25 = MEM_BU(ctx->r29, 0X76);
    // 0x8029B944: lui         $at, 0x2
    ctx->r1 = S32(0X2 << 16);
    // 0x8029B948: sll         $t0, $t9, 4
    ctx->r8 = S32(ctx->r25 << 4);
    // 0x8029B94C: subu        $t0, $t0, $t9
    ctx->r8 = SUB32(ctx->r8, ctx->r25);
    // 0x8029B950: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x8029B954: addu        $s0, $s7, $t0
    ctx->r16 = ADD32(ctx->r23, ctx->r8);
    // 0x8029B958: ori         $at, $at, 0xA144
    ctx->r1 = ctx->r1 | 0XA144;
    // 0x8029B95C: addu        $s0, $s0, $at
    ctx->r16 = ADD32(ctx->r16, ctx->r1);
    // 0x8029B960: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8029B964: jal         0x8007AAF8
    // 0x8029B968: addiu       $a1, $zero, 0x1BE
    ctx->r5 = ADD32(0, 0X1BE);
    func_8007AAF8(rdram, ctx);
        goto after_1;
    // 0x8029B968: addiu       $a1, $zero, 0x1BE
    ctx->r5 = ADD32(0, 0X1BE);
    after_1:
    // 0x8029B96C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8029B970: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    // 0x8029B974: jal         0x8002135C
    // 0x8029B978: addiu       $a2, $zero, 0x9
    ctx->r6 = ADD32(0, 0X9);
    func_8002135C(rdram, ctx);
        goto after_2;
    // 0x8029B978: addiu       $a2, $zero, 0x9
    ctx->r6 = ADD32(0, 0X9);
    after_2:
    // 0x8029B97C: lbu         $a0, 0x75($sp)
    ctx->r4 = MEM_BU(ctx->r29, 0X75);
    // 0x8029B980: lh          $a2, 0x68($sp)
    ctx->r6 = MEM_H(ctx->r29, 0X68);
    // 0x8029B984: jal         0x8029ACD4
    // 0x8029B988: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8029ACD4(rdram, ctx);
        goto after_3;
    // 0x8029B988: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_3:
    // 0x8029B98C: lbu         $t1, 0x75($sp)
    ctx->r9 = MEM_BU(ctx->r29, 0X75);
    // 0x8029B990: lui         $at, 0x2
    ctx->r1 = S32(0X2 << 16);
    // 0x8029B994: sll         $t2, $t1, 4
    ctx->r10 = S32(ctx->r9 << 4);
    // 0x8029B998: subu        $t2, $t2, $t1
    ctx->r10 = SUB32(ctx->r10, ctx->r9);
    // 0x8029B99C: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x8029B9A0: addu        $s0, $s7, $t2
    ctx->r16 = ADD32(ctx->r23, ctx->r10);
    // 0x8029B9A4: ori         $at, $at, 0xA144
    ctx->r1 = ctx->r1 | 0XA144;
    // 0x8029B9A8: addu        $s0, $s0, $at
    ctx->r16 = ADD32(ctx->r16, ctx->r1);
    // 0x8029B9AC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8029B9B0: jal         0x8007AAF8
    // 0x8029B9B4: addiu       $a1, $zero, 0x1D3
    ctx->r5 = ADD32(0, 0X1D3);
    func_8007AAF8(rdram, ctx);
        goto after_4;
    // 0x8029B9B4: addiu       $a1, $zero, 0x1D3
    ctx->r5 = ADD32(0, 0X1D3);
    after_4:
    // 0x8029B9B8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8029B9BC: addiu       $a1, $zero, 0x12
    ctx->r5 = ADD32(0, 0X12);
    // 0x8029B9C0: jal         0x8002135C
    // 0x8029B9C4: addiu       $a2, $zero, 0x50
    ctx->r6 = ADD32(0, 0X50);
    func_8002135C(rdram, ctx);
        goto after_5;
    // 0x8029B9C4: addiu       $a2, $zero, 0x50
    ctx->r6 = ADD32(0, 0X50);
    after_5:
    // 0x8029B9C8: lw          $a3, 0x50($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X50);
    // 0x8029B9CC: lb          $v0, 0xA87($s3)
    ctx->r2 = MEM_B(ctx->r19, 0XA87);
    // 0x8029B9D0: lbu         $a0, 0x74($sp)
    ctx->r4 = MEM_BU(ctx->r29, 0X74);
    // 0x8029B9D4: addu        $t3, $a3, $v0
    ctx->r11 = ADD32(ctx->r7, ctx->r2);
    // 0x8029B9D8: lbu         $s2, 0x308($t3)
    ctx->r18 = MEM_BU(ctx->r11, 0X308);
    // 0x8029B9DC: andi        $v1, $v0, 0xFF
    ctx->r3 = ctx->r2 & 0XFF;
    // 0x8029B9E0: sll         $t5, $s2, 2
    ctx->r13 = S32(ctx->r18 << 2);
    // 0x8029B9E4: subu        $t5, $t5, $s2
    ctx->r13 = SUB32(ctx->r13, ctx->r18);
    // 0x8029B9E8: sll         $t5, $t5, 2
    ctx->r13 = S32(ctx->r13 << 2);
    // 0x8029B9EC: subu        $t5, $t5, $s2
    ctx->r13 = SUB32(ctx->r13, ctx->r18);
    // 0x8029B9F0: sll         $t5, $t5, 2
    ctx->r13 = S32(ctx->r13 << 2);
    // 0x8029B9F4: addu        $t6, $a3, $t5
    ctx->r14 = ADD32(ctx->r7, ctx->r13);
    // 0x8029B9F8: lbu         $s6, 0x40($t6)
    ctx->r22 = MEM_BU(ctx->r14, 0X40);
    // 0x8029B9FC: addu        $t8, $a3, $v1
    ctx->r24 = ADD32(ctx->r7, ctx->r3);
    // 0x8029BA00: lbu         $t9, 0x308($t8)
    ctx->r25 = MEM_BU(ctx->r24, 0X308);
    // 0x8029BA04: bgez        $s6, L_8029BA14
    if (SIGNED(ctx->r22) >= 0) {
        // 0x8029BA08: sra         $t4, $s6, 4
        ctx->r12 = S32(SIGNED(ctx->r22) >> 4);
            goto L_8029BA14;
    }
    // 0x8029BA08: sra         $t4, $s6, 4
    ctx->r12 = S32(SIGNED(ctx->r22) >> 4);
    // 0x8029BA0C: addiu       $at, $s6, 0xF
    ctx->r1 = ADD32(ctx->r22, 0XF);
    // 0x8029BA10: sra         $t4, $at, 4
    ctx->r12 = S32(SIGNED(ctx->r1) >> 4);
L_8029BA14:
    // 0x8029BA14: addiu       $s6, $t4, 0x1
    ctx->r22 = ADD32(ctx->r12, 0X1);
    // 0x8029BA18: addu        $t0, $s4, $t9
    ctx->r8 = ADD32(ctx->r20, ctx->r25);
    // 0x8029BA1C: andi        $t7, $s6, 0xFF
    ctx->r15 = ctx->r22 & 0XFF;
    // 0x8029BA20: lbu         $s1, 0x0($t0)
    ctx->r17 = MEM_BU(ctx->r8, 0X0);
    // 0x8029BA24: lh          $a2, 0x68($sp)
    ctx->r6 = MEM_H(ctx->r29, 0X68);
    // 0x8029BA28: or          $s6, $t7, $zero
    ctx->r22 = ctx->r15 | 0;
    // 0x8029BA2C: jal         0x8029ACD4
    // 0x8029BA30: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8029ACD4(rdram, ctx);
        goto after_6;
    // 0x8029BA30: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_6:
    // 0x8029BA34: lbu         $t1, 0x74($sp)
    ctx->r9 = MEM_BU(ctx->r29, 0X74);
    // 0x8029BA38: lui         $at, 0x2
    ctx->r1 = S32(0X2 << 16);
    // 0x8029BA3C: sll         $t2, $t1, 4
    ctx->r10 = S32(ctx->r9 << 4);
    // 0x8029BA40: subu        $t2, $t2, $t1
    ctx->r10 = SUB32(ctx->r10, ctx->r9);
    // 0x8029BA44: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x8029BA48: addu        $s3, $s7, $t2
    ctx->r19 = ADD32(ctx->r23, ctx->r10);
    // 0x8029BA4C: ori         $at, $at, 0xA144
    ctx->r1 = ctx->r1 | 0XA144;
    // 0x8029BA50: addiu       $a1, $s1, 0x1BF
    ctx->r5 = ADD32(ctx->r17, 0X1BF);
    // 0x8029BA54: andi        $t3, $a1, 0xFFFF
    ctx->r11 = ctx->r5 & 0XFFFF;
    // 0x8029BA58: addu        $s3, $s3, $at
    ctx->r19 = ADD32(ctx->r19, ctx->r1);
    // 0x8029BA5C: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    // 0x8029BA60: or          $a1, $t3, $zero
    ctx->r5 = ctx->r11 | 0;
    // 0x8029BA64: jal         0x8007AAF8
    // 0x8029BA68: or          $s0, $s1, $zero
    ctx->r16 = ctx->r17 | 0;
    func_8007AAF8(rdram, ctx);
        goto after_7;
    // 0x8029BA68: or          $s0, $s1, $zero
    ctx->r16 = ctx->r17 | 0;
    after_7:
    // 0x8029BA6C: addiu       $t5, $zero, 0xD
    ctx->r13 = ADD32(0, 0XD);
    // 0x8029BA70: subu        $a2, $t5, $s0
    ctx->r6 = SUB32(ctx->r13, ctx->r16);
    // 0x8029BA74: andi        $t6, $a2, 0xFF
    ctx->r14 = ctx->r6 & 0XFF;
    // 0x8029BA78: or          $a2, $t6, $zero
    ctx->r6 = ctx->r14 | 0;
    // 0x8029BA7C: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    // 0x8029BA80: jal         0x8002135C
    // 0x8029BA84: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    func_8002135C(rdram, ctx);
        goto after_8;
    // 0x8029BA84: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    after_8:
    // 0x8029BA88: lbu         $a0, 0x71($sp)
    ctx->r4 = MEM_BU(ctx->r29, 0X71);
    // 0x8029BA8C: lh          $a2, 0x66($sp)
    ctx->r6 = MEM_H(ctx->r29, 0X66);
    // 0x8029BA90: jal         0x8029ACD4
    // 0x8029BA94: addiu       $a1, $zero, 0xA8
    ctx->r5 = ADD32(0, 0XA8);
    func_8029ACD4(rdram, ctx);
        goto after_9;
    // 0x8029BA94: addiu       $a1, $zero, 0xA8
    ctx->r5 = ADD32(0, 0XA8);
    after_9:
    // 0x8029BA98: lbu         $t4, 0x71($sp)
    ctx->r12 = MEM_BU(ctx->r29, 0X71);
    // 0x8029BA9C: lui         $at, 0x2
    ctx->r1 = S32(0X2 << 16);
    // 0x8029BAA0: sll         $t7, $t4, 4
    ctx->r15 = S32(ctx->r12 << 4);
    // 0x8029BAA4: subu        $t7, $t7, $t4
    ctx->r15 = SUB32(ctx->r15, ctx->r12);
    // 0x8029BAA8: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8029BAAC: addu        $s0, $s7, $t7
    ctx->r16 = ADD32(ctx->r23, ctx->r15);
    // 0x8029BAB0: ori         $at, $at, 0xA144
    ctx->r1 = ctx->r1 | 0XA144;
    // 0x8029BAB4: addiu       $a1, $s6, 0x1D3
    ctx->r5 = ADD32(ctx->r22, 0X1D3);
    // 0x8029BAB8: andi        $t8, $a1, 0xFFFF
    ctx->r24 = ctx->r5 & 0XFFFF;
    // 0x8029BABC: addu        $s0, $s0, $at
    ctx->r16 = ADD32(ctx->r16, ctx->r1);
    // 0x8029BAC0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8029BAC4: jal         0x8007AAF8
    // 0x8029BAC8: or          $a1, $t8, $zero
    ctx->r5 = ctx->r24 | 0;
    func_8007AAF8(rdram, ctx);
        goto after_10;
    // 0x8029BAC8: or          $a1, $t8, $zero
    ctx->r5 = ctx->r24 | 0;
    after_10:
    // 0x8029BACC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8029BAD0: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    // 0x8029BAD4: jal         0x8002135C
    // 0x8029BAD8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8002135C(rdram, ctx);
        goto after_11;
    // 0x8029BAD8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_11:
    // 0x8029BADC: lbu         $t9, 0x6D($sp)
    ctx->r25 = MEM_BU(ctx->r29, 0X6D);
    // 0x8029BAE0: lh          $t1, 0x5C($sp)
    ctx->r9 = MEM_H(ctx->r29, 0X5C);
    // 0x8029BAE4: lui         $at, 0x2
    ctx->r1 = S32(0X2 << 16);
    // 0x8029BAE8: sll         $t0, $t9, 5
    ctx->r8 = S32(ctx->r25 << 5);
    // 0x8029BAEC: addu        $a0, $s7, $t0
    ctx->r4 = ADD32(ctx->r23, ctx->r8);
    // 0x8029BAF0: ori         $at, $at, 0xFEE8
    ctx->r1 = ctx->r1 | 0XFEE8;
    // 0x8029BAF4: addu        $a0, $a0, $at
    ctx->r4 = ADD32(ctx->r4, ctx->r1);
    // 0x8029BAF8: or          $a1, $s5, $zero
    ctx->r5 = ctx->r21 | 0;
    // 0x8029BAFC: andi        $a2, $s2, 0xFF
    ctx->r6 = ctx->r18 & 0XFF;
    // 0x8029BB00: addiu       $a3, $zero, 0xC0
    ctx->r7 = ADD32(0, 0XC0);
    // 0x8029BB04: jal         0x8006ED60
    // 0x8029BB08: sw          $t1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r9;
    func_8006ED60(rdram, ctx);
        goto after_12;
    // 0x8029BB08: sw          $t1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r9;
    after_12:
    // 0x8029BB0C: lbu         $a0, 0x6B($sp)
    ctx->r4 = MEM_BU(ctx->r29, 0X6B);
    // 0x8029BB10: lh          $t2, 0x58($sp)
    ctx->r10 = MEM_H(ctx->r29, 0X58);
    // 0x8029BB14: lbu         $a1, 0x7($s5)
    ctx->r5 = MEM_BU(ctx->r21, 0X7);
    // 0x8029BB18: addiu       $t3, $a0, -0x22
    ctx->r11 = ADD32(ctx->r4, -0X22);
    // 0x8029BB1C: sw          $t3, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r11;
    // 0x8029BB20: andi        $a2, $s2, 0xFF
    ctx->r6 = ctx->r18 & 0XFF;
    // 0x8029BB24: addiu       $a3, $zero, 0x2C
    ctx->r7 = ADD32(0, 0X2C);
    // 0x8029BB28: or          $fp, $a0, $zero
    ctx->r30 = ctx->r4 | 0;
    // 0x8029BB2C: jal         0x8029BE38
    // 0x8029BB30: sw          $t2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r10;
    func_8029BE38(rdram, ctx);
        goto after_13;
    // 0x8029BB30: sw          $t2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r10;
    after_13:
    // 0x8029BB34: lbu         $v0, 0x0($s5)
    ctx->r2 = MEM_BU(ctx->r21, 0X0);
    // 0x8029BB38: lbu         $a0, 0x6C($sp)
    ctx->r4 = MEM_BU(ctx->r29, 0X6C);
    // 0x8029BB3C: slti        $at, $v0, 0x10
    ctx->r1 = SIGNED(ctx->r2) < 0X10 ? 1 : 0;
    // 0x8029BB40: beq         $at, $zero, L_8029BB54
    if (ctx->r1 == 0) {
        // 0x8029BB44: addiu       $s0, $v0, 0x1C3
        ctx->r16 = ADD32(ctx->r2, 0X1C3);
            goto L_8029BB54;
    }
    // 0x8029BB44: addiu       $s0, $v0, 0x1C3
    ctx->r16 = ADD32(ctx->r2, 0X1C3);
    // 0x8029BB48: andi        $t5, $s0, 0xFFFF
    ctx->r13 = ctx->r16 & 0XFFFF;
    // 0x8029BB4C: b           L_8029BB78
    // 0x8029BB50: or          $s0, $t5, $zero
    ctx->r16 = ctx->r13 | 0;
        goto L_8029BB78;
    // 0x8029BB50: or          $s0, $t5, $zero
    ctx->r16 = ctx->r13 | 0;
L_8029BB54:
    // 0x8029BB54: slti        $at, $v0, 0x15
    ctx->r1 = SIGNED(ctx->r2) < 0X15 ? 1 : 0;
    // 0x8029BB58: beq         $at, $zero, L_8029BB70
    if (ctx->r1 == 0) {
        // 0x8029BB5C: addiu       $s0, $v0, 0x204
        ctx->r16 = ADD32(ctx->r2, 0X204);
            goto L_8029BB70;
    }
    // 0x8029BB5C: addiu       $s0, $v0, 0x204
    ctx->r16 = ADD32(ctx->r2, 0X204);
    // 0x8029BB60: addiu       $s0, $v0, 0x1EF
    ctx->r16 = ADD32(ctx->r2, 0X1EF);
    // 0x8029BB64: andi        $t6, $s0, 0xFFFF
    ctx->r14 = ctx->r16 & 0XFFFF;
    // 0x8029BB68: b           L_8029BB78
    // 0x8029BB6C: or          $s0, $t6, $zero
    ctx->r16 = ctx->r14 | 0;
        goto L_8029BB78;
    // 0x8029BB6C: or          $s0, $t6, $zero
    ctx->r16 = ctx->r14 | 0;
L_8029BB70:
    // 0x8029BB70: andi        $t4, $s0, 0xFFFF
    ctx->r12 = ctx->r16 & 0XFFFF;
    // 0x8029BB74: or          $s0, $t4, $zero
    ctx->r16 = ctx->r12 | 0;
L_8029BB78:
    // 0x8029BB78: lh          $a2, 0x62($sp)
    ctx->r6 = MEM_H(ctx->r29, 0X62);
    // 0x8029BB7C: jal         0x8029ACD4
    // 0x8029BB80: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8029ACD4(rdram, ctx);
        goto after_14;
    // 0x8029BB80: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_14:
    // 0x8029BB84: lbu         $t7, 0x6C($sp)
    ctx->r15 = MEM_BU(ctx->r29, 0X6C);
    // 0x8029BB88: lui         $at, 0x2
    ctx->r1 = S32(0X2 << 16);
    // 0x8029BB8C: sll         $t8, $t7, 4
    ctx->r24 = S32(ctx->r15 << 4);
    // 0x8029BB90: subu        $t8, $t8, $t7
    ctx->r24 = SUB32(ctx->r24, ctx->r15);
    // 0x8029BB94: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x8029BB98: addu        $s1, $s7, $t8
    ctx->r17 = ADD32(ctx->r23, ctx->r24);
    // 0x8029BB9C: ori         $at, $at, 0xA144
    ctx->r1 = ctx->r1 | 0XA144;
    // 0x8029BBA0: addu        $s1, $s1, $at
    ctx->r17 = ADD32(ctx->r17, ctx->r1);
    // 0x8029BBA4: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x8029BBA8: jal         0x8007AAF8
    // 0x8029BBAC: andi        $a1, $s0, 0xFFFF
    ctx->r5 = ctx->r16 & 0XFFFF;
    func_8007AAF8(rdram, ctx);
        goto after_15;
    // 0x8029BBAC: andi        $a1, $s0, 0xFFFF
    ctx->r5 = ctx->r16 & 0XFFFF;
    after_15:
    // 0x8029BBB0: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x8029BBB4: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    // 0x8029BBB8: jal         0x8002135C
    // 0x8029BBBC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8002135C(rdram, ctx);
        goto after_16;
    // 0x8029BBBC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_16:
    // 0x8029BBC0: lw          $t9, 0x4C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X4C);
    // 0x8029BBC4: lw          $t4, 0x18($s5)
    ctx->r12 = MEM_W(ctx->r21, 0X18);
    // 0x8029BBC8: addu        $t0, $s5, $t9
    ctx->r8 = ADD32(ctx->r21, ctx->r25);
    // 0x8029BBCC: lb          $v0, 0xA86($t0)
    ctx->r2 = MEM_B(ctx->r8, 0XA86);
    // 0x8029BBD0: lbu         $s3, 0x74($sp)
    ctx->r19 = MEM_BU(ctx->r29, 0X74);
    // 0x8029BBD4: addu        $t1, $s5, $v0
    ctx->r9 = ADD32(ctx->r21, ctx->r2);
    // 0x8029BBD8: lbu         $s2, 0x308($t1)
    ctx->r18 = MEM_BU(ctx->r9, 0X308);
    // 0x8029BBDC: andi        $v1, $v0, 0xFF
    ctx->r3 = ctx->r2 & 0XFF;
    // 0x8029BBE0: sll         $t2, $s2, 2
    ctx->r10 = S32(ctx->r18 << 2);
    // 0x8029BBE4: subu        $t2, $t2, $s2
    ctx->r10 = SUB32(ctx->r10, ctx->r18);
    // 0x8029BBE8: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x8029BBEC: subu        $t2, $t2, $s2
    ctx->r10 = SUB32(ctx->r10, ctx->r18);
    // 0x8029BBF0: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x8029BBF4: addu        $t3, $s5, $t2
    ctx->r11 = ADD32(ctx->r21, ctx->r10);
    // 0x8029BBF8: sll         $t7, $v1, 5
    ctx->r15 = S32(ctx->r3 << 5);
    // 0x8029BBFC: lbu         $s6, 0x40($t3)
    ctx->r22 = MEM_BU(ctx->r11, 0X40);
    // 0x8029BC00: subu        $t7, $t7, $v1
    ctx->r15 = SUB32(ctx->r15, ctx->r3);
    // 0x8029BC04: sll         $t7, $t7, 3
    ctx->r15 = S32(ctx->r15 << 3);
    // 0x8029BC08: addu        $t8, $t4, $t7
    ctx->r24 = ADD32(ctx->r12, ctx->r15);
    // 0x8029BC0C: lw          $t9, 0xD4($t8)
    ctx->r25 = MEM_W(ctx->r24, 0XD4);
    // 0x8029BC10: bgez        $s6, L_8029BC20
    if (SIGNED(ctx->r22) >= 0) {
        // 0x8029BC14: sra         $t5, $s6, 4
        ctx->r13 = S32(SIGNED(ctx->r22) >> 4);
            goto L_8029BC20;
    }
    // 0x8029BC14: sra         $t5, $s6, 4
    ctx->r13 = S32(SIGNED(ctx->r22) >> 4);
    // 0x8029BC18: addiu       $at, $s6, 0xF
    ctx->r1 = ADD32(ctx->r22, 0XF);
    // 0x8029BC1C: sra         $t5, $at, 4
    ctx->r13 = S32(SIGNED(ctx->r1) >> 4);
L_8029BC20:
    // 0x8029BC20: lbu         $t0, 0x4($t9)
    ctx->r8 = MEM_BU(ctx->r25, 0X4);
    // 0x8029BC24: addiu       $s6, $t5, 0x1
    ctx->r22 = ADD32(ctx->r13, 0X1);
    // 0x8029BC28: addiu       $a0, $s3, 0x1
    ctx->r4 = ADD32(ctx->r19, 0X1);
    // 0x8029BC2C: andi        $t6, $s6, 0xFF
    ctx->r14 = ctx->r22 & 0XFF;
    // 0x8029BC30: andi        $t2, $a0, 0xFF
    ctx->r10 = ctx->r4 & 0XFF;
    // 0x8029BC34: lh          $a2, 0x68($sp)
    ctx->r6 = MEM_H(ctx->r29, 0X68);
    // 0x8029BC38: or          $s6, $t6, $zero
    ctx->r22 = ctx->r14 | 0;
    // 0x8029BC3C: or          $a0, $t2, $zero
    ctx->r4 = ctx->r10 | 0;
    // 0x8029BC40: addiu       $a1, $zero, 0x140
    ctx->r5 = ADD32(0, 0X140);
    // 0x8029BC44: jal         0x8029ACD4
    // 0x8029BC48: andi        $s1, $t0, 0x3
    ctx->r17 = ctx->r8 & 0X3;
    func_8029ACD4(rdram, ctx);
        goto after_17;
    // 0x8029BC48: andi        $s1, $t0, 0x3
    ctx->r17 = ctx->r8 & 0X3;
    after_17:
    // 0x8029BC4C: sll         $t3, $s3, 4
    ctx->r11 = S32(ctx->r19 << 4);
    // 0x8029BC50: subu        $t3, $t3, $s3
    ctx->r11 = SUB32(ctx->r11, ctx->r19);
    // 0x8029BC54: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x8029BC58: lui         $at, 0x2
    ctx->r1 = S32(0X2 << 16);
    // 0x8029BC5C: ori         $at, $at, 0xA180
    ctx->r1 = ctx->r1 | 0XA180;
    // 0x8029BC60: addu        $s4, $s7, $t3
    ctx->r20 = ADD32(ctx->r23, ctx->r11);
    // 0x8029BC64: addiu       $a1, $s1, 0x1BF
    ctx->r5 = ADD32(ctx->r17, 0X1BF);
    // 0x8029BC68: andi        $t5, $a1, 0xFFFF
    ctx->r13 = ctx->r5 & 0XFFFF;
    // 0x8029BC6C: addu        $s4, $s4, $at
    ctx->r20 = ADD32(ctx->r20, ctx->r1);
    // 0x8029BC70: or          $a0, $s4, $zero
    ctx->r4 = ctx->r20 | 0;
    // 0x8029BC74: or          $a1, $t5, $zero
    ctx->r5 = ctx->r13 | 0;
    // 0x8029BC78: jal         0x8007AAF8
    // 0x8029BC7C: or          $s0, $s1, $zero
    ctx->r16 = ctx->r17 | 0;
    func_8007AAF8(rdram, ctx);
        goto after_18;
    // 0x8029BC7C: or          $s0, $s1, $zero
    ctx->r16 = ctx->r17 | 0;
    after_18:
    // 0x8029BC80: addiu       $t6, $zero, 0xD
    ctx->r14 = ADD32(0, 0XD);
    // 0x8029BC84: subu        $a2, $t6, $s0
    ctx->r6 = SUB32(ctx->r14, ctx->r16);
    // 0x8029BC88: andi        $t4, $a2, 0xFF
    ctx->r12 = ctx->r6 & 0XFF;
    // 0x8029BC8C: or          $a2, $t4, $zero
    ctx->r6 = ctx->r12 | 0;
    // 0x8029BC90: or          $a0, $s4, $zero
    ctx->r4 = ctx->r20 | 0;
    // 0x8029BC94: jal         0x8002135C
    // 0x8029BC98: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    func_8002135C(rdram, ctx);
        goto after_19;
    // 0x8029BC98: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    after_19:
    // 0x8029BC9C: lbu         $s0, 0x71($sp)
    ctx->r16 = MEM_BU(ctx->r29, 0X71);
    // 0x8029BCA0: lh          $a2, 0x66($sp)
    ctx->r6 = MEM_H(ctx->r29, 0X66);
    // 0x8029BCA4: addiu       $a0, $s0, 0x1
    ctx->r4 = ADD32(ctx->r16, 0X1);
    // 0x8029BCA8: andi        $t7, $a0, 0xFF
    ctx->r15 = ctx->r4 & 0XFF;
    // 0x8029BCAC: or          $a0, $t7, $zero
    ctx->r4 = ctx->r15 | 0;
    // 0x8029BCB0: jal         0x8029ACD4
    // 0x8029BCB4: addiu       $a1, $zero, 0x1EB
    ctx->r5 = ADD32(0, 0X1EB);
    func_8029ACD4(rdram, ctx);
        goto after_20;
    // 0x8029BCB4: addiu       $a1, $zero, 0x1EB
    ctx->r5 = ADD32(0, 0X1EB);
    after_20:
    // 0x8029BCB8: sll         $t8, $s0, 4
    ctx->r24 = S32(ctx->r16 << 4);
    // 0x8029BCBC: subu        $t8, $t8, $s0
    ctx->r24 = SUB32(ctx->r24, ctx->r16);
    // 0x8029BCC0: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x8029BCC4: lui         $at, 0x2
    ctx->r1 = S32(0X2 << 16);
    // 0x8029BCC8: ori         $at, $at, 0xA180
    ctx->r1 = ctx->r1 | 0XA180;
    // 0x8029BCCC: addu        $s1, $s7, $t8
    ctx->r17 = ADD32(ctx->r23, ctx->r24);
    // 0x8029BCD0: addiu       $a1, $s6, 0x1D3
    ctx->r5 = ADD32(ctx->r22, 0X1D3);
    // 0x8029BCD4: andi        $t9, $a1, 0xFFFF
    ctx->r25 = ctx->r5 & 0XFFFF;
    // 0x8029BCD8: addu        $s1, $s1, $at
    ctx->r17 = ADD32(ctx->r17, ctx->r1);
    // 0x8029BCDC: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x8029BCE0: jal         0x8007AAF8
    // 0x8029BCE4: or          $a1, $t9, $zero
    ctx->r5 = ctx->r25 | 0;
    func_8007AAF8(rdram, ctx);
        goto after_21;
    // 0x8029BCE4: or          $a1, $t9, $zero
    ctx->r5 = ctx->r25 | 0;
    after_21:
    // 0x8029BCE8: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x8029BCEC: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    // 0x8029BCF0: jal         0x8002135C
    // 0x8029BCF4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8002135C(rdram, ctx);
        goto after_22;
    // 0x8029BCF4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_22:
    // 0x8029BCF8: lbu         $t0, 0x6D($sp)
    ctx->r8 = MEM_BU(ctx->r29, 0X6D);
    // 0x8029BCFC: lh          $t2, 0x5C($sp)
    ctx->r10 = MEM_H(ctx->r29, 0X5C);
    // 0x8029BD00: lui         $at, 0x2
    ctx->r1 = S32(0X2 << 16);
    // 0x8029BD04: sll         $t1, $t0, 5
    ctx->r9 = S32(ctx->r8 << 5);
    // 0x8029BD08: addu        $a0, $s7, $t1
    ctx->r4 = ADD32(ctx->r23, ctx->r9);
    // 0x8029BD0C: ori         $at, $at, 0xFF08
    ctx->r1 = ctx->r1 | 0XFF08;
    // 0x8029BD10: addu        $a0, $a0, $at
    ctx->r4 = ADD32(ctx->r4, ctx->r1);
    // 0x8029BD14: or          $a1, $s5, $zero
    ctx->r5 = ctx->r21 | 0;
    // 0x8029BD18: andi        $a2, $s2, 0xFF
    ctx->r6 = ctx->r18 & 0XFF;
    // 0x8029BD1C: addiu       $a3, $zero, 0x203
    ctx->r7 = ADD32(0, 0X203);
    // 0x8029BD20: jal         0x8006ED60
    // 0x8029BD24: sw          $t2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r10;
    func_8006ED60(rdram, ctx);
        goto after_23;
    // 0x8029BD24: sw          $t2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r10;
    after_23:
    // 0x8029BD28: lh          $t5, 0x58($sp)
    ctx->r13 = MEM_H(ctx->r29, 0X58);
    // 0x8029BD2C: addiu       $a0, $fp, 0x1
    ctx->r4 = ADD32(ctx->r30, 0X1);
    // 0x8029BD30: andi        $t3, $a0, 0xFF
    ctx->r11 = ctx->r4 & 0XFF;
    // 0x8029BD34: lbu         $a1, 0x7($s5)
    ctx->r5 = MEM_BU(ctx->r21, 0X7);
    // 0x8029BD38: addiu       $t6, $fp, -0x21
    ctx->r14 = ADD32(ctx->r30, -0X21);
    // 0x8029BD3C: sw          $t6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r14;
    // 0x8029BD40: or          $a0, $t3, $zero
    ctx->r4 = ctx->r11 | 0;
    // 0x8029BD44: andi        $a2, $s2, 0xFF
    ctx->r6 = ctx->r18 & 0XFF;
    // 0x8029BD48: addiu       $a3, $zero, 0x16F
    ctx->r7 = ADD32(0, 0X16F);
    // 0x8029BD4C: jal         0x8029BE38
    // 0x8029BD50: sw          $t5, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r13;
    func_8029BE38(rdram, ctx);
        goto after_24;
    // 0x8029BD50: sw          $t5, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r13;
    after_24:
    // 0x8029BD54: lui         $a3, 0x802C
    ctx->r7 = S32(0X802C << 16);
    // 0x8029BD58: lh          $a2, 0x68($sp)
    ctx->r6 = MEM_H(ctx->r29, 0X68);
    // 0x8029BD5C: lbu         $v1, 0x77($sp)
    ctx->r3 = MEM_BU(ctx->r29, 0X77);
    // 0x8029BD60: addiu       $a3, $a3, 0x39B4
    ctx->r7 = ADD32(ctx->r7, 0X39B4);
L_8029BD64:
    // 0x8029BD64: lbu         $t4, 0x76($sp)
    ctx->r12 = MEM_BU(ctx->r29, 0X76);
    // 0x8029BD68: lbu         $t8, 0x74($sp)
    ctx->r24 = MEM_BU(ctx->r29, 0X74);
    // 0x8029BD6C: lbu         $t0, 0x75($sp)
    ctx->r8 = MEM_BU(ctx->r29, 0X75);
    // 0x8029BD70: addiu       $t7, $t4, 0x1
    ctx->r15 = ADD32(ctx->r12, 0X1);
    // 0x8029BD74: addiu       $t9, $t8, 0x2
    ctx->r25 = ADD32(ctx->r24, 0X2);
    // 0x8029BD78: lbu         $t5, 0x6C($sp)
    ctx->r13 = MEM_BU(ctx->r29, 0X6C);
    // 0x8029BD7C: lbu         $t4, 0x6D($sp)
    ctx->r12 = MEM_BU(ctx->r29, 0X6D);
    // 0x8029BD80: lbu         $t8, 0x6B($sp)
    ctx->r24 = MEM_BU(ctx->r29, 0X6B);
    // 0x8029BD84: addiu       $t1, $t0, 0x1
    ctx->r9 = ADD32(ctx->r8, 0X1);
    // 0x8029BD88: lh          $t0, 0x62($sp)
    ctx->r8 = MEM_H(ctx->r29, 0X62);
    // 0x8029BD8C: sb          $t7, 0x76($sp)
    MEM_B(0X76, ctx->r29) = ctx->r15;
    // 0x8029BD90: sb          $t9, 0x74($sp)
    MEM_B(0X74, ctx->r29) = ctx->r25;
    // 0x8029BD94: lbu         $t2, 0x71($sp)
    ctx->r10 = MEM_BU(ctx->r29, 0X71);
    // 0x8029BD98: sb          $t1, 0x75($sp)
    MEM_B(0X75, ctx->r29) = ctx->r9;
    // 0x8029BD9C: addiu       $t6, $t5, 0x2
    ctx->r14 = ADD32(ctx->r13, 0X2);
    // 0x8029BDA0: addiu       $t7, $t4, 0x2
    ctx->r15 = ADD32(ctx->r12, 0X2);
    // 0x8029BDA4: addiu       $t9, $t8, 0x2
    ctx->r25 = ADD32(ctx->r24, 0X2);
    // 0x8029BDA8: lh          $t5, 0x66($sp)
    ctx->r13 = MEM_H(ctx->r29, 0X66);
    // 0x8029BDAC: lh          $t4, 0x5C($sp)
    ctx->r12 = MEM_H(ctx->r29, 0X5C);
    // 0x8029BDB0: lh          $t8, 0x58($sp)
    ctx->r24 = MEM_H(ctx->r29, 0X58);
    // 0x8029BDB4: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x8029BDB8: addiu       $t1, $t0, 0x24
    ctx->r9 = ADD32(ctx->r8, 0X24);
    // 0x8029BDBC: andi        $t0, $v1, 0xFF
    ctx->r8 = ctx->r3 & 0XFF;
    // 0x8029BDC0: sb          $t6, 0x6C($sp)
    MEM_B(0X6C, ctx->r29) = ctx->r14;
    // 0x8029BDC4: sb          $t7, 0x6D($sp)
    MEM_B(0X6D, ctx->r29) = ctx->r15;
    // 0x8029BDC8: sb          $t9, 0x6B($sp)
    MEM_B(0X6B, ctx->r29) = ctx->r25;
    // 0x8029BDCC: addiu       $a2, $a2, 0x24
    ctx->r6 = ADD32(ctx->r6, 0X24);
    // 0x8029BDD0: addiu       $t3, $t2, 0x2
    ctx->r11 = ADD32(ctx->r10, 0X2);
    // 0x8029BDD4: slti        $at, $t0, 0x3
    ctx->r1 = SIGNED(ctx->r8) < 0X3 ? 1 : 0;
    // 0x8029BDD8: sll         $t2, $a2, 16
    ctx->r10 = S32(ctx->r6 << 16);
    // 0x8029BDDC: addiu       $t6, $t5, 0x24
    ctx->r14 = ADD32(ctx->r13, 0X24);
    // 0x8029BDE0: addiu       $t7, $t4, 0x24
    ctx->r15 = ADD32(ctx->r12, 0X24);
    // 0x8029BDE4: addiu       $t9, $t8, 0x24
    ctx->r25 = ADD32(ctx->r24, 0X24);
    // 0x8029BDE8: or          $v1, $t0, $zero
    ctx->r3 = ctx->r8 | 0;
    // 0x8029BDEC: sb          $t3, 0x71($sp)
    MEM_B(0X71, ctx->r29) = ctx->r11;
    // 0x8029BDF0: sh          $t1, 0x62($sp)
    MEM_H(0X62, ctx->r29) = ctx->r9;
    // 0x8029BDF4: sra         $a2, $t2, 16
    ctx->r6 = S32(SIGNED(ctx->r10) >> 16);
    // 0x8029BDF8: sh          $t6, 0x66($sp)
    MEM_H(0X66, ctx->r29) = ctx->r14;
    // 0x8029BDFC: sh          $t7, 0x5C($sp)
    MEM_H(0X5C, ctx->r29) = ctx->r15;
    // 0x8029BE00: bne         $at, $zero, L_8029B8C0
    if (ctx->r1 != 0) {
        // 0x8029BE04: sh          $t9, 0x58($sp)
        MEM_H(0X58, ctx->r29) = ctx->r25;
            goto L_8029B8C0;
    }
    // 0x8029BE04: sh          $t9, 0x58($sp)
    MEM_H(0X58, ctx->r29) = ctx->r25;
    // 0x8029BE08: lw          $ra, 0x44($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X44);
    // 0x8029BE0C: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x8029BE10: lw          $s1, 0x24($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X24);
    // 0x8029BE14: lw          $s2, 0x28($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X28);
    // 0x8029BE18: lw          $s3, 0x2C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X2C);
    // 0x8029BE1C: lw          $s4, 0x30($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X30);
    // 0x8029BE20: lw          $s5, 0x34($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X34);
    // 0x8029BE24: lw          $s6, 0x38($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X38);
    // 0x8029BE28: lw          $s7, 0x3C($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X3C);
    // 0x8029BE2C: lw          $fp, 0x40($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X40);
    // 0x8029BE30: jr          $ra
    // 0x8029BE34: addiu       $sp, $sp, 0x78
    ctx->r29 = ADD32(ctx->r29, 0X78);
    return;
    // 0x8029BE34: addiu       $sp, $sp, 0x78
    ctx->r29 = ADD32(ctx->r29, 0X78);
;}
RECOMP_FUNC void func_8029BE38(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8029BE38: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8029BE3C: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x8029BE40: lbu         $t8, 0x23($sp)
    ctx->r24 = MEM_BU(ctx->r29, 0X23);
    // 0x8029BE44: lui         $t0, 0x800E
    ctx->r8 = S32(0X800E << 16);
    // 0x8029BE48: sll         $t9, $t8, 4
    ctx->r25 = S32(ctx->r24 << 4);
    // 0x8029BE4C: subu        $t9, $t9, $t8
    ctx->r25 = SUB32(ctx->r25, ctx->r24);
    // 0x8029BE50: sw          $a3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r7;
    // 0x8029BE54: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x8029BE58: addiu       $t0, $t0, -0x3770
    ctx->r8 = ADD32(ctx->r8, -0X3770);
    // 0x8029BE5C: lui         $at, 0x2
    ctx->r1 = S32(0X2 << 16);
    // 0x8029BE60: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8029BE64: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x8029BE68: sw          $a2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r6;
    // 0x8029BE6C: andi        $t6, $a1, 0xFF
    ctx->r14 = ctx->r5 & 0XFF;
    // 0x8029BE70: andi        $t7, $a2, 0xFF
    ctx->r15 = ctx->r6 & 0XFF;
    // 0x8029BE74: ori         $at, $at, 0xA144
    ctx->r1 = ctx->r1 | 0XA144;
    // 0x8029BE78: addu        $v1, $t9, $t0
    ctx->r3 = ADD32(ctx->r25, ctx->r8);
    // 0x8029BE7C: lbu         $a3, 0x37($sp)
    ctx->r7 = MEM_BU(ctx->r29, 0X37);
    // 0x8029BE80: or          $a2, $t7, $zero
    ctx->r6 = ctx->r15 | 0;
    // 0x8029BE84: or          $a1, $t6, $zero
    ctx->r5 = ctx->r14 | 0;
    // 0x8029BE88: addu        $a0, $v1, $at
    ctx->r4 = ADD32(ctx->r3, ctx->r1);
    // 0x8029BE8C: jal         0x80039440
    // 0x8029BE90: sw          $v1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r3;
    func_80039440(rdram, ctx);
        goto after_0;
    // 0x8029BE90: sw          $v1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r3;
    after_0:
    // 0x8029BE94: lw          $v1, 0x1C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X1C);
    // 0x8029BE98: lui         $at, 0x2
    ctx->r1 = S32(0X2 << 16);
    // 0x8029BE9C: ori         $at, $at, 0x8000
    ctx->r1 = ctx->r1 | 0X8000;
    // 0x8029BEA0: addu        $v0, $v1, $at
    ctx->r2 = ADD32(ctx->r3, ctx->r1);
    // 0x8029BEA4: lbu         $t2, 0x214D($v0)
    ctx->r10 = MEM_BU(ctx->r2, 0X214D);
    // 0x8029BEA8: lbu         $t4, 0x214C($v0)
    ctx->r12 = MEM_BU(ctx->r2, 0X214C);
    // 0x8029BEAC: lh          $t7, 0x2E($sp)
    ctx->r15 = MEM_H(ctx->r29, 0X2E);
    // 0x8029BEB0: lh          $t8, 0x32($sp)
    ctx->r24 = MEM_H(ctx->r29, 0X32);
    // 0x8029BEB4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8029BEB8: lui         $t9, 0x802C
    ctx->r25 = S32(0X802C << 16);
    // 0x8029BEBC: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
    // 0x8029BEC0: addiu       $t6, $zero, 0xA
    ctx->r14 = ADD32(0, 0XA);
    // 0x8029BEC4: addiu       $t9, $t9, -0x3580
    ctx->r25 = ADD32(ctx->r25, -0X3580);
    // 0x8029BEC8: andi        $t3, $t2, 0xFFBF
    ctx->r11 = ctx->r10 & 0XFFBF;
    // 0x8029BECC: andi        $t5, $t4, 0xFF01
    ctx->r13 = ctx->r12 & 0XFF01;
    // 0x8029BED0: sb          $t1, 0x2148($v0)
    MEM_B(0X2148, ctx->r2) = ctx->r9;
    // 0x8029BED4: sb          $t3, 0x214D($v0)
    MEM_B(0X214D, ctx->r2) = ctx->r11;
    // 0x8029BED8: sb          $t5, 0x214C($v0)
    MEM_B(0X214C, ctx->r2) = ctx->r13;
    // 0x8029BEDC: sb          $t6, 0x2149($v0)
    MEM_B(0X2149, ctx->r2) = ctx->r14;
    // 0x8029BEE0: sw          $t9, 0x2174($v0)
    MEM_W(0X2174, ctx->r2) = ctx->r25;
    // 0x8029BEE4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x8029BEE8: sh          $t7, 0x215C($v0)
    MEM_H(0X215C, ctx->r2) = ctx->r15;
    // 0x8029BEEC: jr          $ra
    // 0x8029BEF0: sh          $t8, 0x2160($v0)
    MEM_H(0X2160, ctx->r2) = ctx->r24;
    return;
    // 0x8029BEF0: sh          $t8, 0x2160($v0)
    MEM_H(0X2160, ctx->r2) = ctx->r24;
;}
RECOMP_FUNC void func_8029BEF4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8029BEF4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8029BEF8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8029BEFC: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x8029BF00: jal         0x8029251C
    // 0x8029BF04: sb          $zero, 0x39B9($at)
    MEM_B(0X39B9, ctx->r1) = 0;
    func_8029251C(rdram, ctx);
        goto after_0;
    // 0x8029BF04: sb          $zero, 0x39B9($at)
    MEM_B(0X39B9, ctx->r1) = 0;
    after_0:
    // 0x8029BF08: lui         $at, 0x8011
    ctx->r1 = S32(0X8011 << 16);
    // 0x8029BF0C: jal         0x80269DE8
    // 0x8029BF10: sb          $zero, -0x4B5C($at)
    MEM_B(-0X4B5C, ctx->r1) = 0;
    LOOKUP_FUNC(0x80269DE8)(rdram, ctx);
        goto after_1;
    // 0x8029BF10: sb          $zero, -0x4B5C($at)
    MEM_B(-0X4B5C, ctx->r1) = 0;
    after_1:
    // 0x8029BF14: jal         0x8002F1F0
    // 0x8029BF18: nop

    func_8002F1F0(rdram, ctx);
        goto after_2;
    // 0x8029BF18: nop

    after_2:
    // 0x8029BF1C: jal         0x8002F2AC
    // 0x8029BF20: nop

    func_8002F2AC(rdram, ctx);
        goto after_3;
    // 0x8029BF20: nop

    after_3:
    // 0x8029BF24: jal         0x80021004
    // 0x8029BF28: nop

    func_80021004(rdram, ctx);
        goto after_4;
    // 0x8029BF28: nop

    after_4:
    // 0x8029BF2C: jal         0x80020270
    // 0x8029BF30: nop

    func_80020270(rdram, ctx);
        goto after_5;
    // 0x8029BF30: nop

    after_5:
    // 0x8029BF34: lui         $a0, 0x800D
    ctx->r4 = S32(0X800D << 16);
    // 0x8029BF38: jal         0x8007AAE0
    // 0x8029BF3C: addiu       $a0, $a0, -0xA30
    ctx->r4 = ADD32(ctx->r4, -0XA30);
    func_8007AAE0(rdram, ctx);
        goto after_6;
    // 0x8029BF3C: addiu       $a0, $a0, -0xA30
    ctx->r4 = ADD32(ctx->r4, -0XA30);
    after_6:
    // 0x8029BF40: jal         0x8002198C
    // 0x8029BF44: nop

    func_8002198C(rdram, ctx);
        goto after_7;
    // 0x8029BF44: nop

    after_7:
    // 0x8029BF48: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x8029BF4C: addiu       $t6, $zero, 0x4
    ctx->r14 = ADD32(0, 0X4);
    // 0x8029BF50: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x8029BF54: addiu       $v0, $v0, 0xB7E
    ctx->r2 = ADD32(ctx->r2, 0XB7E);
    // 0x8029BF58: sb          $t6, 0x38DF($at)
    MEM_B(0X38DF, ctx->r1) = ctx->r14;
    // 0x8029BF5C: lhu         $t7, 0x0($v0)
    ctx->r15 = MEM_HU(ctx->r2, 0X0);
    // 0x8029BF60: nop

    // 0x8029BF64: ori         $t8, $t7, 0x20
    ctx->r24 = ctx->r15 | 0X20;
    // 0x8029BF68: jal         0x80297DB0
    // 0x8029BF6C: sh          $t8, 0x0($v0)
    MEM_H(0X0, ctx->r2) = ctx->r24;
    func_80297DB0(rdram, ctx);
        goto after_8;
    // 0x8029BF6C: sh          $t8, 0x0($v0)
    MEM_H(0X0, ctx->r2) = ctx->r24;
    after_8:
    // 0x8029BF70: lui         $v0, 0x8011
    ctx->r2 = S32(0X8011 << 16);
    // 0x8029BF74: addiu       $v0, $v0, -0x3770
    ctx->r2 = ADD32(ctx->r2, -0X3770);
    // 0x8029BF78: lbu         $t9, 0x754($v0)
    ctx->r25 = MEM_BU(ctx->r2, 0X754);
    // 0x8029BF7C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8029BF80: andi        $t0, $t9, 0xFE
    ctx->r8 = ctx->r25 & 0XFE;
    // 0x8029BF84: sb          $t0, 0x754($v0)
    MEM_B(0X754, ctx->r2) = ctx->r8;
    // 0x8029BF88: jr          $ra
    // 0x8029BF8C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x8029BF8C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8029BF90(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8029BF90: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8029BF94: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8029BF98: jal         0x8000E050
    // 0x8029BF9C: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    func_8000E050(rdram, ctx);
        goto after_0;
    // 0x8029BF9C: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    after_0:
    // 0x8029BFA0: lui         $t3, 0x802C
    ctx->r11 = S32(0X802C << 16);
    // 0x8029BFA4: addiu       $t3, $t3, 0x39B9
    ctx->r11 = ADD32(ctx->r11, 0X39B9);
    // 0x8029BFA8: lbu         $v1, 0x0($t3)
    ctx->r3 = MEM_BU(ctx->r11, 0X0);
    // 0x8029BFAC: lui         $a0, 0x802C
    ctx->r4 = S32(0X802C << 16);
    // 0x8029BFB0: slti        $at, $v1, 0x2
    ctx->r1 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
    // 0x8029BFB4: beq         $at, $zero, L_8029BFD4
    if (ctx->r1 == 0) {
        // 0x8029BFB8: addiu       $a0, $a0, 0x38C8
        ctx->r4 = ADD32(ctx->r4, 0X38C8);
            goto L_8029BFD4;
    }
    // 0x8029BFB8: addiu       $a0, $a0, 0x38C8
    ctx->r4 = ADD32(ctx->r4, 0X38C8);
    // 0x8029BFBC: lui         $a0, 0x802C
    ctx->r4 = S32(0X802C << 16);
    // 0x8029BFC0: addiu       $a0, $a0, 0x38C8
    ctx->r4 = ADD32(ctx->r4, 0X38C8);
    // 0x8029BFC4: addiu       $a1, $zero, 0x90
    ctx->r5 = ADD32(0, 0X90);
    // 0x8029BFC8: sh          $a1, 0x0($a0)
    MEM_H(0X0, ctx->r4) = ctx->r5;
    // 0x8029BFCC: b           L_8029BFE0
    // 0x8029BFD0: sh          $a1, 0x2($a0)
    MEM_H(0X2, ctx->r4) = ctx->r5;
        goto L_8029BFE0;
    // 0x8029BFD0: sh          $a1, 0x2($a0)
    MEM_H(0X2, ctx->r4) = ctx->r5;
L_8029BFD4:
    // 0x8029BFD4: addiu       $a1, $zero, 0xC0
    ctx->r5 = ADD32(0, 0XC0);
    // 0x8029BFD8: sh          $a1, 0x0($a0)
    MEM_H(0X0, ctx->r4) = ctx->r5;
    // 0x8029BFDC: sh          $a1, 0x2($a0)
    MEM_H(0X2, ctx->r4) = ctx->r5;
L_8029BFE0:
    // 0x8029BFE0: sltiu       $at, $v1, 0x7
    ctx->r1 = ctx->r3 < 0X7 ? 1 : 0;
    // 0x8029BFE4: beq         $at, $zero, L_8029C650
    if (ctx->r1 == 0) {
        // 0x8029BFE8: sll         $t6, $v1, 2
        ctx->r14 = S32(ctx->r3 << 2);
            goto L_8029C650;
    }
    // 0x8029BFE8: sll         $t6, $v1, 2
    ctx->r14 = S32(ctx->r3 << 2);
    // 0x8029BFEC: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x8029BFF0: addu        $at, $at, $t6
    gpr jr_addend_8029BFFC = ctx->r14;
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x8029BFF4: lw          $t6, 0xA84($at)
    ctx->r14 = ADD32(ctx->r1, 0XA84);
    // 0x8029BFF8: nop

    // 0x8029BFFC: jr          $t6
    // 0x8029C000: nop

    switch (jr_addend_8029BFFC >> 2) {
        case 0: goto L_8029C004; break;
        case 1: goto L_8029C020; break;
        case 2: goto L_8029C1A0; break;
        case 3: goto L_8029C1E0; break;
        case 4: goto L_8029C354; break;
        case 5: goto L_8029C440; break;
        case 6: goto L_8029C618; break;
        default: switch_error(__func__, 0x8029BFFC, 0x802C0A84);
    }
    // 0x8029C000: nop

L_8029C004:
    // 0x8029C004: lui         $t7, 0x8011
    ctx->r15 = S32(0X8011 << 16);
    // 0x8029C008: lh          $t7, -0x2FAE($t7)
    ctx->r15 = MEM_H(ctx->r15, -0X2FAE);
    // 0x8029C00C: addiu       $t8, $v1, 0x1
    ctx->r24 = ADD32(ctx->r3, 0X1);
    // 0x8029C010: bne         $t7, $zero, L_8029C654
    if (ctx->r15 != 0) {
        // 0x8029C014: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_8029C654;
    }
    // 0x8029C014: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8029C018: b           L_8029C650
    // 0x8029C01C: sb          $t8, 0x0($t3)
    MEM_B(0X0, ctx->r11) = ctx->r24;
        goto L_8029C650;
    // 0x8029C01C: sb          $t8, 0x0($t3)
    MEM_B(0X0, ctx->r11) = ctx->r24;
L_8029C020:
    // 0x8029C020: lui         $t1, 0x8012
    ctx->r9 = S32(0X8012 << 16);
    // 0x8029C024: addiu       $t1, $t1, 0xB7E
    ctx->r9 = ADD32(ctx->r9, 0XB7E);
    // 0x8029C028: lhu         $t9, 0x0($t1)
    ctx->r25 = MEM_HU(ctx->r9, 0X0);
    // 0x8029C02C: lui         $t5, 0x8012
    ctx->r13 = S32(0X8012 << 16);
    // 0x8029C030: andi        $t4, $t9, 0x80
    ctx->r12 = ctx->r25 & 0X80;
    // 0x8029C034: beq         $t4, $zero, L_8029C650
    if (ctx->r12 == 0) {
        // 0x8029C038: lui         $v0, 0x8010
        ctx->r2 = S32(0X8010 << 16);
            goto L_8029C650;
    }
    // 0x8029C038: lui         $v0, 0x8010
    ctx->r2 = S32(0X8010 << 16);
    // 0x8029C03C: lw          $t5, 0xB28($t5)
    ctx->r13 = MEM_W(ctx->r13, 0XB28);
    // 0x8029C040: addiu       $a1, $zero, 0x7F
    ctx->r5 = ADD32(0, 0X7F);
    // 0x8029C044: lw          $t6, 0xC8($t5)
    ctx->r14 = MEM_W(ctx->r13, 0XC8);
    // 0x8029C048: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8029C04C: lhu         $t7, 0x6($t6)
    ctx->r15 = MEM_HU(ctx->r14, 0X6);
    // 0x8029C050: nop

    // 0x8029C054: beq         $t7, $zero, L_8029C064
    if (ctx->r15 == 0) {
        // 0x8029C058: nop
    
            goto L_8029C064;
    }
    // 0x8029C058: nop

    // 0x8029C05C: b           L_8029C064
    // 0x8029C060: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
        goto L_8029C064;
    // 0x8029C060: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
L_8029C064:
    // 0x8029C064: lhu         $v0, 0x522A($v0)
    ctx->r2 = MEM_HU(ctx->r2, 0X522A);
    // 0x8029C068: nop

    // 0x8029C06C: andi        $t8, $v0, 0x3
    ctx->r24 = ctx->r2 & 0X3;
    // 0x8029C070: beq         $t8, $zero, L_8029C098
    if (ctx->r24 == 0) {
        // 0x8029C074: nop
    
            goto L_8029C098;
    }
    // 0x8029C074: nop

    // 0x8029C078: beq         $t8, $at, L_8029C0A8
    if (ctx->r24 == ctx->r1) {
        // 0x8029C07C: addiu       $at, $zero, 0x2
        ctx->r1 = ADD32(0, 0X2);
            goto L_8029C0A8;
    }
    // 0x8029C07C: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x8029C080: beq         $t8, $at, L_8029C0B8
    if (ctx->r24 == ctx->r1) {
        // 0x8029C084: addiu       $at, $zero, 0x3
        ctx->r1 = ADD32(0, 0X3);
            goto L_8029C0B8;
    }
    // 0x8029C084: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x8029C088: beq         $t8, $at, L_8029C0C8
    if (ctx->r24 == ctx->r1) {
        // 0x8029C08C: nop
    
            goto L_8029C0C8;
    }
    // 0x8029C08C: nop

    // 0x8029C090: b           L_8029C0D0
    // 0x8029C094: nop

        goto L_8029C0D0;
    // 0x8029C094: nop

L_8029C098:
    // 0x8029C098: jal         0x80015BEC
    // 0x8029C09C: addiu       $a0, $zero, 0x21C
    ctx->r4 = ADD32(0, 0X21C);
    func_80015BEC(rdram, ctx);
        goto after_1;
    // 0x8029C09C: addiu       $a0, $zero, 0x21C
    ctx->r4 = ADD32(0, 0X21C);
    after_1:
    // 0x8029C0A0: b           L_8029C0D0
    // 0x8029C0A4: nop

        goto L_8029C0D0;
    // 0x8029C0A4: nop

L_8029C0A8:
    // 0x8029C0A8: jal         0x80015BEC
    // 0x8029C0AC: addiu       $a0, $zero, 0x21D
    ctx->r4 = ADD32(0, 0X21D);
    func_80015BEC(rdram, ctx);
        goto after_2;
    // 0x8029C0AC: addiu       $a0, $zero, 0x21D
    ctx->r4 = ADD32(0, 0X21D);
    after_2:
    // 0x8029C0B0: b           L_8029C0D0
    // 0x8029C0B4: nop

        goto L_8029C0D0;
    // 0x8029C0B4: nop

L_8029C0B8:
    // 0x8029C0B8: jal         0x80015BEC
    // 0x8029C0BC: addiu       $a0, $zero, 0x21E
    ctx->r4 = ADD32(0, 0X21E);
    func_80015BEC(rdram, ctx);
        goto after_3;
    // 0x8029C0BC: addiu       $a0, $zero, 0x21E
    ctx->r4 = ADD32(0, 0X21E);
    after_3:
    // 0x8029C0C0: b           L_8029C0D0
    // 0x8029C0C4: nop

        goto L_8029C0D0;
    // 0x8029C0C4: nop

L_8029C0C8:
    // 0x8029C0C8: jal         0x80015BEC
    // 0x8029C0CC: addiu       $a0, $zero, 0x21F
    ctx->r4 = ADD32(0, 0X21F);
    func_80015BEC(rdram, ctx);
        goto after_4;
    // 0x8029C0CC: addiu       $a0, $zero, 0x21F
    ctx->r4 = ADD32(0, 0X21F);
    after_4:
L_8029C0D0:
    // 0x8029C0D0: lui         $t9, 0x8009
    ctx->r25 = S32(0X8009 << 16);
    // 0x8029C0D4: lw          $t9, 0x3B20($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X3B20);
    // 0x8029C0D8: addiu       $t6, $zero, 0x2
    ctx->r14 = ADD32(0, 0X2);
    // 0x8029C0DC: lhu         $t4, 0xDC($t9)
    ctx->r12 = MEM_HU(ctx->r25, 0XDC);
    // 0x8029C0E0: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x8029C0E4: andi        $t5, $t4, 0x4
    ctx->r13 = ctx->r12 & 0X4;
    // 0x8029C0E8: beq         $t5, $zero, L_8029C104
    if (ctx->r13 == 0) {
        // 0x8029C0EC: lui         $at, 0x802C
        ctx->r1 = S32(0X802C << 16);
            goto L_8029C104;
    }
    // 0x8029C0EC: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x8029C0F0: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x8029C0F4: jal         0x800788FC
    // 0x8029C0F8: sb          $t6, 0x38E3($at)
    MEM_B(0X38E3, ctx->r1) = ctx->r14;
    func_800788FC(rdram, ctx);
        goto after_5;
    // 0x8029C0F8: sb          $t6, 0x38E3($at)
    MEM_B(0X38E3, ctx->r1) = ctx->r14;
    after_5:
    // 0x8029C0FC: b           L_8029C10C
    // 0x8029C100: nop

        goto L_8029C10C;
    // 0x8029C100: nop

L_8029C104:
    // 0x8029C104: jal         0x80078820
    // 0x8029C108: sb          $t7, 0x38E3($at)
    MEM_B(0X38E3, ctx->r1) = ctx->r15;
    func_80078820(rdram, ctx);
        goto after_6;
    // 0x8029C108: sb          $t7, 0x38E3($at)
    MEM_B(0X38E3, ctx->r1) = ctx->r15;
    after_6:
L_8029C10C:
    // 0x8029C10C: jal         0x80062B40
    // 0x8029C110: nop

    func_80062B40(rdram, ctx);
        goto after_7;
    // 0x8029C110: nop

    after_7:
    // 0x8029C114: addiu       $t8, $zero, 0x4
    ctx->r24 = ADD32(0, 0X4);
    // 0x8029C118: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x8029C11C: sb          $t8, 0x38DF($at)
    MEM_B(0X38DF, ctx->r1) = ctx->r24;
    // 0x8029C120: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x8029C124: addiu       $t9, $zero, 0xD
    ctx->r25 = ADD32(0, 0XD);
    // 0x8029C128: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x8029C12C: lui         $t3, 0x802C
    ctx->r11 = S32(0X802C << 16);
    // 0x8029C130: sb          $t9, 0x39FA($at)
    MEM_B(0X39FA, ctx->r1) = ctx->r25;
    // 0x8029C134: addiu       $t3, $t3, 0x39B9
    ctx->r11 = ADD32(ctx->r11, 0X39B9);
    // 0x8029C138: addiu       $v0, $v0, -0x2CF0
    ctx->r2 = ADD32(ctx->r2, -0X2CF0);
    // 0x8029C13C: lbu         $t4, 0x0($t3)
    ctx->r12 = MEM_BU(ctx->r11, 0X0);
    // 0x8029C140: lhu         $t6, 0x8($v0)
    ctx->r14 = MEM_HU(ctx->r2, 0X8);
    // 0x8029C144: addiu       $t5, $t4, 0x1
    ctx->r13 = ADD32(ctx->r12, 0X1);
    // 0x8029C148: andi        $t7, $t6, 0x1000
    ctx->r15 = ctx->r14 & 0X1000;
    // 0x8029C14C: bne         $t7, $zero, L_8029C650
    if (ctx->r15 != 0) {
        // 0x8029C150: sb          $t5, 0x0($t3)
        MEM_B(0X0, ctx->r11) = ctx->r13;
            goto L_8029C650;
    }
    // 0x8029C150: sb          $t5, 0x0($t3)
    MEM_B(0X0, ctx->r11) = ctx->r13;
    // 0x8029C154: lhu         $t8, 0xA9C($v0)
    ctx->r24 = MEM_HU(ctx->r2, 0XA9C);
    // 0x8029C158: nop

    // 0x8029C15C: andi        $t9, $t8, 0x1000
    ctx->r25 = ctx->r24 & 0X1000;
    // 0x8029C160: bne         $t9, $zero, L_8029C654
    if (ctx->r25 != 0) {
        // 0x8029C164: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_8029C654;
    }
    // 0x8029C164: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8029C168: lhu         $t4, 0x10($v0)
    ctx->r12 = MEM_HU(ctx->r2, 0X10);
    // 0x8029C16C: nop

    // 0x8029C170: andi        $t5, $t4, 0x40
    ctx->r13 = ctx->r12 & 0X40;
    // 0x8029C174: bne         $t5, $zero, L_8029C190
    if (ctx->r13 != 0) {
        // 0x8029C178: nop
    
            goto L_8029C190;
    }
    // 0x8029C178: nop

    // 0x8029C17C: lhu         $t6, 0xAA4($v0)
    ctx->r14 = MEM_HU(ctx->r2, 0XAA4);
    // 0x8029C180: nop

    // 0x8029C184: andi        $t7, $t6, 0x40
    ctx->r15 = ctx->r14 & 0X40;
    // 0x8029C188: beq         $t7, $zero, L_8029C654
    if (ctx->r15 == 0) {
        // 0x8029C18C: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_8029C654;
    }
    // 0x8029C18C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8029C190:
    // 0x8029C190: jal         0x80077EC8
    // 0x8029C194: nop

    func_80077EC8(rdram, ctx);
        goto after_8;
    // 0x8029C194: nop

    after_8:
    // 0x8029C198: b           L_8029C654
    // 0x8029C19C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_8029C654;
    // 0x8029C19C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8029C1A0:
    // 0x8029C1A0: jal         0x80062E48
    // 0x8029C1A4: nop

    func_80062E48(rdram, ctx);
        goto after_9;
    // 0x8029C1A4: nop

    after_9:
    // 0x8029C1A8: lui         $t8, 0x802C
    ctx->r24 = S32(0X802C << 16);
    // 0x8029C1AC: lbu         $t8, 0x39FA($t8)
    ctx->r24 = MEM_BU(ctx->r24, 0X39FA);
    // 0x8029C1B0: lui         $t3, 0x802C
    ctx->r11 = S32(0X802C << 16);
    // 0x8029C1B4: addiu       $at, $zero, 0x10
    ctx->r1 = ADD32(0, 0X10);
    // 0x8029C1B8: bne         $t8, $at, L_8029C650
    if (ctx->r24 != ctx->r1) {
        // 0x8029C1BC: addiu       $t3, $t3, 0x39B9
        ctx->r11 = ADD32(ctx->r11, 0X39B9);
            goto L_8029C650;
    }
    // 0x8029C1BC: addiu       $t3, $t3, 0x39B9
    ctx->r11 = ADD32(ctx->r11, 0X39B9);
    // 0x8029C1C0: lbu         $t9, 0x0($t3)
    ctx->r25 = MEM_BU(ctx->r11, 0X0);
    // 0x8029C1C4: lui         $t2, 0x802C
    ctx->r10 = S32(0X802C << 16);
    // 0x8029C1C8: addiu       $t2, $t2, 0x39B4
    ctx->r10 = ADD32(ctx->r10, 0X39B4);
    // 0x8029C1CC: addiu       $t5, $zero, 0x12
    ctx->r13 = ADD32(0, 0X12);
    // 0x8029C1D0: addiu       $t4, $t9, 0x1
    ctx->r12 = ADD32(ctx->r25, 0X1);
    // 0x8029C1D4: sb          $t4, 0x0($t3)
    MEM_B(0X0, ctx->r11) = ctx->r12;
    // 0x8029C1D8: b           L_8029C650
    // 0x8029C1DC: sb          $t5, 0x0($t2)
    MEM_B(0X0, ctx->r10) = ctx->r13;
        goto L_8029C650;
    // 0x8029C1DC: sb          $t5, 0x0($t2)
    MEM_B(0X0, ctx->r10) = ctx->r13;
L_8029C1E0:
    // 0x8029C1E0: lui         $t2, 0x802C
    ctx->r10 = S32(0X802C << 16);
    // 0x8029C1E4: addiu       $t2, $t2, 0x39B4
    ctx->r10 = ADD32(ctx->r10, 0X39B4);
    // 0x8029C1E8: lbu         $t6, 0x0($t2)
    ctx->r14 = MEM_BU(ctx->r10, 0X0);
    // 0x8029C1EC: lui         $t0, 0x2
    ctx->r8 = S32(0X2 << 16);
    // 0x8029C1F0: lui         $a2, 0x800E
    ctx->r6 = S32(0X800E << 16);
    // 0x8029C1F4: addiu       $t7, $t6, -0x1
    ctx->r15 = ADD32(ctx->r14, -0X1);
    // 0x8029C1F8: sb          $t7, 0x0($t2)
    MEM_B(0X0, ctx->r10) = ctx->r15;
    // 0x8029C1FC: addiu       $a2, $a2, -0x3770
    ctx->r6 = ADD32(ctx->r6, -0X3770);
    // 0x8029C200: ori         $t0, $t0, 0x8000
    ctx->r8 = ctx->r8 | 0X8000;
    // 0x8029C204: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x8029C208: addiu       $a3, $zero, 0x3C
    ctx->r7 = ADD32(0, 0X3C);
L_8029C20C:
    // 0x8029C20C: multu       $a0, $a3
    result = U64(U32(ctx->r4)) * U64(U32(ctx->r7)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8029C210: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    // 0x8029C214: andi        $t7, $a0, 0xFF
    ctx->r15 = ctx->r4 & 0XFF;
    // 0x8029C218: slti        $at, $t7, 0x3
    ctx->r1 = SIGNED(ctx->r15) < 0X3 ? 1 : 0;
    // 0x8029C21C: mflo        $t8
    ctx->r24 = lo;
    // 0x8029C220: addu        $t9, $a2, $t8
    ctx->r25 = ADD32(ctx->r6, ctx->r24);
    // 0x8029C224: addu        $v1, $t9, $t0
    ctx->r3 = ADD32(ctx->r25, ctx->r8);
    // 0x8029C228: lbu         $t4, 0x2148($v1)
    ctx->r12 = MEM_BU(ctx->r3, 0X2148);
    // 0x8029C22C: nop

    // 0x8029C230: beq         $t4, $zero, L_8029C248
    if (ctx->r12 == 0) {
        // 0x8029C234: nop
    
            goto L_8029C248;
    }
    // 0x8029C234: nop

    // 0x8029C238: lh          $t5, 0x215C($v1)
    ctx->r13 = MEM_H(ctx->r3, 0X215C);
    // 0x8029C23C: nop

    // 0x8029C240: addiu       $t6, $t5, -0x10
    ctx->r14 = ADD32(ctx->r13, -0X10);
    // 0x8029C244: sh          $t6, 0x215C($v1)
    MEM_H(0X215C, ctx->r3) = ctx->r14;
L_8029C248:
    // 0x8029C248: bne         $at, $zero, L_8029C20C
    if (ctx->r1 != 0) {
        // 0x8029C24C: or          $a0, $t7, $zero
        ctx->r4 = ctx->r15 | 0;
            goto L_8029C20C;
    }
    // 0x8029C24C: or          $a0, $t7, $zero
    ctx->r4 = ctx->r15 | 0;
    // 0x8029C250: addiu       $a0, $zero, 0xA
    ctx->r4 = ADD32(0, 0XA);
L_8029C254:
    // 0x8029C254: multu       $a0, $a3
    result = U64(U32(ctx->r4)) * U64(U32(ctx->r7)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8029C258: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    // 0x8029C25C: andi        $t7, $a0, 0xFF
    ctx->r15 = ctx->r4 & 0XFF;
    // 0x8029C260: slti        $at, $t7, 0x12
    ctx->r1 = SIGNED(ctx->r15) < 0X12 ? 1 : 0;
    // 0x8029C264: mflo        $t8
    ctx->r24 = lo;
    // 0x8029C268: addu        $t9, $a2, $t8
    ctx->r25 = ADD32(ctx->r6, ctx->r24);
    // 0x8029C26C: addu        $v1, $t9, $t0
    ctx->r3 = ADD32(ctx->r25, ctx->r8);
    // 0x8029C270: lbu         $t4, 0x2148($v1)
    ctx->r12 = MEM_BU(ctx->r3, 0X2148);
    // 0x8029C274: nop

    // 0x8029C278: beq         $t4, $zero, L_8029C290
    if (ctx->r12 == 0) {
        // 0x8029C27C: nop
    
            goto L_8029C290;
    }
    // 0x8029C27C: nop

    // 0x8029C280: lh          $t5, 0x215C($v1)
    ctx->r13 = MEM_H(ctx->r3, 0X215C);
    // 0x8029C284: nop

    // 0x8029C288: addiu       $t6, $t5, -0x10
    ctx->r14 = ADD32(ctx->r13, -0X10);
    // 0x8029C28C: sh          $t6, 0x215C($v1)
    MEM_H(0X215C, ctx->r3) = ctx->r14;
L_8029C290:
    // 0x8029C290: bne         $at, $zero, L_8029C254
    if (ctx->r1 != 0) {
        // 0x8029C294: or          $a0, $t7, $zero
        ctx->r4 = ctx->r15 | 0;
            goto L_8029C254;
    }
    // 0x8029C294: or          $a0, $t7, $zero
    ctx->r4 = ctx->r15 | 0;
    // 0x8029C298: lui         $at, 0x4180
    ctx->r1 = S32(0X4180 << 16);
    // 0x8029C29C: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x8029C2A0: addiu       $a0, $zero, 0x3
    ctx->r4 = ADD32(0, 0X3);
    // 0x8029C2A4: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x8029C2A8: addiu       $t1, $zero, 0x5
    ctx->r9 = ADD32(0, 0X5);
L_8029C2AC:
    // 0x8029C2AC: multu       $a0, $a3
    result = U64(U32(ctx->r4)) * U64(U32(ctx->r7)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8029C2B0: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    // 0x8029C2B4: mflo        $t8
    ctx->r24 = lo;
    // 0x8029C2B8: addu        $t9, $a2, $t8
    ctx->r25 = ADD32(ctx->r6, ctx->r24);
    // 0x8029C2BC: addu        $v1, $t9, $t0
    ctx->r3 = ADD32(ctx->r25, ctx->r8);
    // 0x8029C2C0: lbu         $t4, 0x2148($v1)
    ctx->r12 = MEM_BU(ctx->r3, 0X2148);
    // 0x8029C2C4: nop

    // 0x8029C2C8: beq         $t4, $zero, L_8029C2E0
    if (ctx->r12 == 0) {
        // 0x8029C2CC: nop
    
            goto L_8029C2E0;
    }
    // 0x8029C2CC: nop

    // 0x8029C2D0: lh          $t5, 0x215C($v1)
    ctx->r13 = MEM_H(ctx->r3, 0X215C);
    // 0x8029C2D4: nop

    // 0x8029C2D8: addiu       $t6, $t5, 0x10
    ctx->r14 = ADD32(ctx->r13, 0X10);
    // 0x8029C2DC: sh          $t6, 0x215C($v1)
    MEM_H(0X215C, ctx->r3) = ctx->r14;
L_8029C2E0:
    // 0x8029C2E0: bne         $t1, $a1, L_8029C2FC
    if (ctx->r9 != ctx->r5) {
        // 0x8029C2E4: andi        $a1, $a0, 0xFF
        ctx->r5 = ctx->r4 & 0XFF;
            goto L_8029C2FC;
    }
    // 0x8029C2E4: andi        $a1, $a0, 0xFF
    ctx->r5 = ctx->r4 & 0XFF;
    // 0x8029C2E8: lwc1        $f4, 0x4($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X4);
    // 0x8029C2EC: nop

    // 0x8029C2F0: add.s       $f6, $f4, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = ctx->f4.fl + ctx->f0.fl;
    // 0x8029C2F4: swc1        $f6, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->f6.u32l;
    // 0x8029C2F8: andi        $a1, $a0, 0xFF
    ctx->r5 = ctx->r4 & 0XFF;
L_8029C2FC:
    // 0x8029C2FC: slti        $at, $a1, 0xA
    ctx->r1 = SIGNED(ctx->r5) < 0XA ? 1 : 0;
    // 0x8029C300: bne         $at, $zero, L_8029C2AC
    if (ctx->r1 != 0) {
        // 0x8029C304: or          $a0, $a1, $zero
        ctx->r4 = ctx->r5 | 0;
            goto L_8029C2AC;
    }
    // 0x8029C304: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    // 0x8029C308: lui         $v0, 0x8010
    ctx->r2 = S32(0X8010 << 16);
    // 0x8029C30C: addiu       $v0, $v0, 0x4890
    ctx->r2 = ADD32(ctx->r2, 0X4890);
    // 0x8029C310: lh          $t8, 0x2738($v0)
    ctx->r24 = MEM_H(ctx->r2, 0X2738);
    // 0x8029C314: lh          $t4, 0x2864($v0)
    ctx->r12 = MEM_H(ctx->r2, 0X2864);
    // 0x8029C318: lh          $t6, 0x7EF2($v0)
    ctx->r14 = MEM_H(ctx->r2, 0X7EF2);
    // 0x8029C31C: addiu       $t9, $t8, 0x10
    ctx->r25 = ADD32(ctx->r24, 0X10);
    // 0x8029C320: lbu         $t8, 0x0($t2)
    ctx->r24 = MEM_BU(ctx->r10, 0X0);
    // 0x8029C324: addiu       $t5, $t4, -0x10
    ctx->r13 = ADD32(ctx->r12, -0X10);
    // 0x8029C328: addiu       $t7, $t6, -0x10
    ctx->r15 = ADD32(ctx->r14, -0X10);
    // 0x8029C32C: sh          $t9, 0x2738($v0)
    MEM_H(0X2738, ctx->r2) = ctx->r25;
    // 0x8029C330: sh          $t5, 0x2864($v0)
    MEM_H(0X2864, ctx->r2) = ctx->r13;
    // 0x8029C334: bne         $t8, $zero, L_8029C650
    if (ctx->r24 != 0) {
        // 0x8029C338: sh          $t7, 0x7EF2($v0)
        MEM_H(0X7EF2, ctx->r2) = ctx->r15;
            goto L_8029C650;
    }
    // 0x8029C338: sh          $t7, 0x7EF2($v0)
    MEM_H(0X7EF2, ctx->r2) = ctx->r15;
    // 0x8029C33C: lbu         $t9, 0x0($t3)
    ctx->r25 = MEM_BU(ctx->r11, 0X0);
    // 0x8029C340: addiu       $t5, $zero, 0x78
    ctx->r13 = ADD32(0, 0X78);
    // 0x8029C344: addiu       $t4, $t9, 0x1
    ctx->r12 = ADD32(ctx->r25, 0X1);
    // 0x8029C348: sb          $t4, 0x0($t3)
    MEM_B(0X0, ctx->r11) = ctx->r12;
    // 0x8029C34C: b           L_8029C650
    // 0x8029C350: sb          $t5, 0x0($t2)
    MEM_B(0X0, ctx->r10) = ctx->r13;
        goto L_8029C650;
    // 0x8029C350: sb          $t5, 0x0($t2)
    MEM_B(0X0, ctx->r10) = ctx->r13;
L_8029C354:
    // 0x8029C354: lui         $t2, 0x802C
    ctx->r10 = S32(0X802C << 16);
    // 0x8029C358: addiu       $t2, $t2, 0x39B4
    ctx->r10 = ADD32(ctx->r10, 0X39B4);
    // 0x8029C35C: lbu         $t6, 0x0($t2)
    ctx->r14 = MEM_BU(ctx->r10, 0X0);
    // 0x8029C360: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x8029C364: addiu       $t7, $t6, -0x1
    ctx->r15 = ADD32(ctx->r14, -0X1);
    // 0x8029C368: andi        $t8, $t7, 0xFF
    ctx->r24 = ctx->r15 & 0XFF;
    // 0x8029C36C: bne         $t8, $zero, L_8029C650
    if (ctx->r24 != 0) {
        // 0x8029C370: sb          $t7, 0x0($t2)
        MEM_B(0X0, ctx->r10) = ctx->r15;
            goto L_8029C650;
    }
    // 0x8029C370: sb          $t7, 0x0($t2)
    MEM_B(0X0, ctx->r10) = ctx->r15;
    // 0x8029C374: addiu       $v0, $v0, -0x2CF0
    ctx->r2 = ADD32(ctx->r2, -0X2CF0);
    // 0x8029C378: lhu         $t4, 0x10($v0)
    ctx->r12 = MEM_HU(ctx->r2, 0X10);
    // 0x8029C37C: addiu       $t9, $v1, 0x1
    ctx->r25 = ADD32(ctx->r3, 0X1);
    // 0x8029C380: andi        $t5, $t4, 0x40
    ctx->r13 = ctx->r12 & 0X40;
    // 0x8029C384: bne         $t5, $zero, L_8029C3A0
    if (ctx->r13 != 0) {
        // 0x8029C388: sb          $t9, 0x0($t3)
        MEM_B(0X0, ctx->r11) = ctx->r25;
            goto L_8029C3A0;
    }
    // 0x8029C388: sb          $t9, 0x0($t3)
    MEM_B(0X0, ctx->r11) = ctx->r25;
    // 0x8029C38C: lhu         $t6, 0xAA4($v0)
    ctx->r14 = MEM_HU(ctx->r2, 0XAA4);
    // 0x8029C390: nop

    // 0x8029C394: andi        $t7, $t6, 0x40
    ctx->r15 = ctx->r14 & 0X40;
    // 0x8029C398: beq         $t7, $zero, L_8029C3EC
    if (ctx->r15 == 0) {
        // 0x8029C39C: nop
    
            goto L_8029C3EC;
    }
    // 0x8029C39C: nop

L_8029C3A0:
    // 0x8029C3A0: lhu         $t8, 0x8($v0)
    ctx->r24 = MEM_HU(ctx->r2, 0X8);
    // 0x8029C3A4: nop

    // 0x8029C3A8: andi        $t9, $t8, 0x1000
    ctx->r25 = ctx->r24 & 0X1000;
    // 0x8029C3AC: bne         $t9, $zero, L_8029C3D0
    if (ctx->r25 != 0) {
        // 0x8029C3B0: nop
    
            goto L_8029C3D0;
    }
    // 0x8029C3B0: nop

    // 0x8029C3B4: lhu         $t4, 0xA9C($v0)
    ctx->r12 = MEM_HU(ctx->r2, 0XA9C);
    // 0x8029C3B8: nop

    // 0x8029C3BC: andi        $t5, $t4, 0x1000
    ctx->r13 = ctx->r12 & 0X1000;
    // 0x8029C3C0: bne         $t5, $zero, L_8029C3D0
    if (ctx->r13 != 0) {
        // 0x8029C3C4: nop
    
            goto L_8029C3D0;
    }
    // 0x8029C3C4: nop

    // 0x8029C3C8: jal         0x80015BC0
    // 0x8029C3CC: addiu       $a0, $zero, 0xA
    ctx->r4 = ADD32(0, 0XA);
    func_80015BC0(rdram, ctx);
        goto after_10;
    // 0x8029C3CC: addiu       $a0, $zero, 0xA
    ctx->r4 = ADD32(0, 0XA);
    after_10:
L_8029C3D0:
    // 0x8029C3D0: jal         0x80021960
    // 0x8029C3D4: nop

    func_80021960(rdram, ctx);
        goto after_11;
    // 0x8029C3D4: nop

    after_11:
    // 0x8029C3D8: lui         $t2, 0x802C
    ctx->r10 = S32(0X802C << 16);
    // 0x8029C3DC: addiu       $t2, $t2, 0x39B4
    ctx->r10 = ADD32(ctx->r10, 0X39B4);
    // 0x8029C3E0: addiu       $t6, $zero, 0x32
    ctx->r14 = ADD32(0, 0X32);
    // 0x8029C3E4: b           L_8029C650
    // 0x8029C3E8: sb          $t6, 0x0($t2)
    MEM_B(0X0, ctx->r10) = ctx->r14;
        goto L_8029C650;
    // 0x8029C3E8: sb          $t6, 0x0($t2)
    MEM_B(0X0, ctx->r10) = ctx->r14;
L_8029C3EC:
    // 0x8029C3EC: lui         $t7, 0x8012
    ctx->r15 = S32(0X8012 << 16);
    // 0x8029C3F0: lhu         $t7, 0xB78($t7)
    ctx->r15 = MEM_HU(ctx->r15, 0XB78);
    // 0x8029C3F4: addiu       $at, $zero, 0x8
    ctx->r1 = ADD32(0, 0X8);
    // 0x8029C3F8: bne         $t7, $at, L_8029C424
    if (ctx->r15 != ctx->r1) {
        // 0x8029C3FC: nop
    
            goto L_8029C424;
    }
    // 0x8029C3FC: nop

    // 0x8029C400: jal         0x80015BC0
    // 0x8029C404: addiu       $a0, $zero, 0xA
    ctx->r4 = ADD32(0, 0XA);
    func_80015BC0(rdram, ctx);
        goto after_12;
    // 0x8029C404: addiu       $a0, $zero, 0xA
    ctx->r4 = ADD32(0, 0XA);
    after_12:
    // 0x8029C408: jal         0x80021960
    // 0x8029C40C: nop

    func_80021960(rdram, ctx);
        goto after_13;
    // 0x8029C40C: nop

    after_13:
    // 0x8029C410: lui         $t2, 0x802C
    ctx->r10 = S32(0X802C << 16);
    // 0x8029C414: addiu       $t2, $t2, 0x39B4
    ctx->r10 = ADD32(ctx->r10, 0X39B4);
    // 0x8029C418: addiu       $t8, $zero, 0x32
    ctx->r24 = ADD32(0, 0X32);
    // 0x8029C41C: b           L_8029C650
    // 0x8029C420: sb          $t8, 0x0($t2)
    MEM_B(0X0, ctx->r10) = ctx->r24;
        goto L_8029C650;
    // 0x8029C420: sb          $t8, 0x0($t2)
    MEM_B(0X0, ctx->r10) = ctx->r24;
L_8029C424:
    // 0x8029C424: jal         0x800219BC
    // 0x8029C428: addiu       $a0, $zero, 0x10
    ctx->r4 = ADD32(0, 0X10);
    func_800219BC(rdram, ctx);
        goto after_14;
    // 0x8029C428: addiu       $a0, $zero, 0x10
    ctx->r4 = ADD32(0, 0X10);
    after_14:
    // 0x8029C42C: lui         $t2, 0x802C
    ctx->r10 = S32(0X802C << 16);
    // 0x8029C430: addiu       $t2, $t2, 0x39B4
    ctx->r10 = ADD32(ctx->r10, 0X39B4);
    // 0x8029C434: addiu       $t9, $zero, 0x8
    ctx->r25 = ADD32(0, 0X8);
    // 0x8029C438: b           L_8029C650
    // 0x8029C43C: sb          $t9, 0x0($t2)
    MEM_B(0X0, ctx->r10) = ctx->r25;
        goto L_8029C650;
    // 0x8029C43C: sb          $t9, 0x0($t2)
    MEM_B(0X0, ctx->r10) = ctx->r25;
L_8029C440:
    // 0x8029C440: lui         $t2, 0x802C
    ctx->r10 = S32(0X802C << 16);
    // 0x8029C444: addiu       $t2, $t2, 0x39B4
    ctx->r10 = ADD32(ctx->r10, 0X39B4);
    // 0x8029C448: lbu         $v0, 0x0($t2)
    ctx->r2 = MEM_BU(ctx->r10, 0X0);
    // 0x8029C44C: nop

    // 0x8029C450: beq         $v0, $zero, L_8029C460
    if (ctx->r2 == 0) {
        // 0x8029C454: addiu       $t4, $v0, -0x1
        ctx->r12 = ADD32(ctx->r2, -0X1);
            goto L_8029C460;
    }
    // 0x8029C454: addiu       $t4, $v0, -0x1
    ctx->r12 = ADD32(ctx->r2, -0X1);
    // 0x8029C458: b           L_8029C650
    // 0x8029C45C: sb          $t4, 0x0($t2)
    MEM_B(0X0, ctx->r10) = ctx->r12;
        goto L_8029C650;
    // 0x8029C45C: sb          $t4, 0x0($t2)
    MEM_B(0X0, ctx->r10) = ctx->r12;
L_8029C460:
    // 0x8029C460: lui         $t0, 0x8011
    ctx->r8 = S32(0X8011 << 16);
    // 0x8029C464: addiu       $t0, $t0, -0x3770
    ctx->r8 = ADD32(ctx->r8, -0X3770);
    // 0x8029C468: lh          $t5, 0x7CA($t0)
    ctx->r13 = MEM_H(ctx->r8, 0X7CA);
    // 0x8029C46C: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8029C470: bne         $t5, $at, L_8029C650
    if (ctx->r13 != ctx->r1) {
        // 0x8029C474: lui         $v1, 0x8009
        ctx->r3 = S32(0X8009 << 16);
            goto L_8029C650;
    }
    // 0x8029C474: lui         $v1, 0x8009
    ctx->r3 = S32(0X8009 << 16);
    // 0x8029C478: lw          $v1, 0x3B20($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X3B20);
    // 0x8029C47C: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x8029C480: lhu         $t6, 0xDC($v1)
    ctx->r14 = MEM_HU(ctx->r3, 0XDC);
    // 0x8029C484: lui         $t1, 0x8012
    ctx->r9 = S32(0X8012 << 16);
    // 0x8029C488: andi        $t7, $t6, 0xFFF9
    ctx->r15 = ctx->r14 & 0XFFF9;
    // 0x8029C48C: sh          $t7, 0xDC($v1)
    MEM_H(0XDC, ctx->r3) = ctx->r15;
    // 0x8029C490: lbu         $t8, 0x0($t3)
    ctx->r24 = MEM_BU(ctx->r11, 0X0);
    // 0x8029C494: addiu       $t1, $t1, 0xB7E
    ctx->r9 = ADD32(ctx->r9, 0XB7E);
    // 0x8029C498: addiu       $t9, $t8, 0x1
    ctx->r25 = ADD32(ctx->r24, 0X1);
    // 0x8029C49C: sb          $t9, 0x0($t3)
    MEM_B(0X0, ctx->r11) = ctx->r25;
    // 0x8029C4A0: sb          $zero, 0x39DF($at)
    MEM_B(0X39DF, ctx->r1) = 0;
    // 0x8029C4A4: lbu         $t4, 0x754($t0)
    ctx->r12 = MEM_BU(ctx->r8, 0X754);
    // 0x8029C4A8: lhu         $t6, 0x0($t1)
    ctx->r14 = MEM_HU(ctx->r9, 0X0);
    // 0x8029C4AC: ori         $t5, $t4, 0x1
    ctx->r13 = ctx->r12 | 0X1;
    // 0x8029C4B0: andi        $t7, $t6, 0xFFC7
    ctx->r15 = ctx->r14 & 0XFFC7;
    // 0x8029C4B4: sb          $t5, 0x754($t0)
    MEM_B(0X754, ctx->r8) = ctx->r13;
    // 0x8029C4B8: sh          $t7, 0x0($t1)
    MEM_H(0X0, ctx->r9) = ctx->r15;
    // 0x8029C4BC: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x8029C4C0: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x8029C4C4: lw          $v0, 0xB28($v0)
    ctx->r2 = MEM_W(ctx->r2, 0XB28);
    // 0x8029C4C8: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x8029C4CC: lhu         $t8, 0x14($v0)
    ctx->r24 = MEM_HU(ctx->r2, 0X14);
    // 0x8029C4D0: mfc1        $a2, $f0
    ctx->r6 = (int32_t)ctx->f0.u32l;
    // 0x8029C4D4: mfc1        $a3, $f0
    ctx->r7 = (int32_t)ctx->f0.u32l;
    // 0x8029C4D8: andi        $t9, $t8, 0xFBFF
    ctx->r25 = ctx->r24 & 0XFBFF;
    // 0x8029C4DC: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x8029C4E0: jal         0x80013364
    // 0x8029C4E4: sh          $t9, 0x14($v0)
    MEM_H(0X14, ctx->r2) = ctx->r25;
    func_80013364(rdram, ctx);
        goto after_15;
    // 0x8029C4E4: sh          $t9, 0x14($v0)
    MEM_H(0X14, ctx->r2) = ctx->r25;
    after_15:
    // 0x8029C4E8: addiu       $t4, $zero, 0x1
    ctx->r12 = ADD32(0, 0X1);
    // 0x8029C4EC: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x8029C4F0: jal         0x8028E770
    // 0x8029C4F4: sb          $t4, 0x39DD($at)
    MEM_B(0X39DD, ctx->r1) = ctx->r12;
    func_8028E770(rdram, ctx);
        goto after_16;
    // 0x8029C4F4: sb          $t4, 0x39DD($at)
    MEM_B(0X39DD, ctx->r1) = ctx->r12;
    after_16:
    // 0x8029C4F8: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x8029C4FC: addiu       $v0, $v0, -0x2CF0
    ctx->r2 = ADD32(ctx->r2, -0X2CF0);
    // 0x8029C500: lhu         $t5, 0x10($v0)
    ctx->r13 = MEM_HU(ctx->r2, 0X10);
    // 0x8029C504: nop

    // 0x8029C508: andi        $t6, $t5, 0x40
    ctx->r14 = ctx->r13 & 0X40;
    // 0x8029C50C: bne         $t6, $zero, L_8029C528
    if (ctx->r14 != 0) {
        // 0x8029C510: nop
    
            goto L_8029C528;
    }
    // 0x8029C510: nop

    // 0x8029C514: lhu         $t7, 0xAA4($v0)
    ctx->r15 = MEM_HU(ctx->r2, 0XAA4);
    // 0x8029C518: nop

    // 0x8029C51C: andi        $t8, $t7, 0x40
    ctx->r24 = ctx->r15 & 0X40;
    // 0x8029C520: beq         $t8, $zero, L_8029C5A8
    if (ctx->r24 == 0) {
        // 0x8029C524: lui         $t7, 0x8012
        ctx->r15 = S32(0X8012 << 16);
            goto L_8029C5A8;
    }
    // 0x8029C524: lui         $t7, 0x8012
    ctx->r15 = S32(0X8012 << 16);
L_8029C528:
    // 0x8029C528: jal         0x8005B560
    // 0x8029C52C: nop

    func_8005B560(rdram, ctx);
        goto after_17;
    // 0x8029C52C: nop

    after_17:
    // 0x8029C530: bne         $v0, $zero, L_8029C564
    if (ctx->r2 != 0) {
        // 0x8029C534: nop
    
            goto L_8029C564;
    }
    // 0x8029C534: nop

    // 0x8029C538: jal         0x800603F0
    // 0x8029C53C: nop

    func_800603F0(rdram, ctx);
        goto after_18;
    // 0x8029C53C: nop

    after_18:
    // 0x8029C540: jal         0x80020270
    // 0x8029C544: nop

    func_80020270(rdram, ctx);
        goto after_19;
    // 0x8029C544: nop

    after_19:
    // 0x8029C548: lui         $v0, 0x8011
    ctx->r2 = S32(0X8011 << 16);
    // 0x8029C54C: addiu       $v0, $v0, -0x3770
    ctx->r2 = ADD32(ctx->r2, -0X3770);
    // 0x8029C550: lbu         $t9, 0x754($v0)
    ctx->r25 = MEM_BU(ctx->r2, 0X754);
    // 0x8029C554: nop

    // 0x8029C558: andi        $t4, $t9, 0xFC
    ctx->r12 = ctx->r25 & 0XFC;
    // 0x8029C55C: b           L_8029C650
    // 0x8029C560: sb          $t4, 0x754($v0)
    MEM_B(0X754, ctx->r2) = ctx->r12;
        goto L_8029C650;
    // 0x8029C560: sb          $t4, 0x754($v0)
    MEM_B(0X754, ctx->r2) = ctx->r12;
L_8029C564:
    // 0x8029C564: jal         0x8002F2AC
    // 0x8029C568: nop

    func_8002F2AC(rdram, ctx);
        goto after_20;
    // 0x8029C568: nop

    after_20:
    // 0x8029C56C: jal         0x8000E300
    // 0x8029C570: nop

    func_8000E300(rdram, ctx);
        goto after_21;
    // 0x8029C570: nop

    after_21:
    // 0x8029C574: lui         $v0, 0x8011
    ctx->r2 = S32(0X8011 << 16);
    // 0x8029C578: addiu       $v0, $v0, -0x3770
    ctx->r2 = ADD32(ctx->r2, -0X3770);
    // 0x8029C57C: lbu         $t5, 0x754($v0)
    ctx->r13 = MEM_BU(ctx->r2, 0X754);
    // 0x8029C580: nop

    // 0x8029C584: andi        $t6, $t5, 0xFE
    ctx->r14 = ctx->r13 & 0XFE;
    // 0x8029C588: jal         0x80020270
    // 0x8029C58C: sb          $t6, 0x754($v0)
    MEM_B(0X754, ctx->r2) = ctx->r14;
    func_80020270(rdram, ctx);
        goto after_22;
    // 0x8029C58C: sb          $t6, 0x754($v0)
    MEM_B(0X754, ctx->r2) = ctx->r14;
    after_22:
    // 0x8029C590: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x8029C594: sb          $zero, 0x38DF($at)
    MEM_B(0X38DF, ctx->r1) = 0;
    // 0x8029C598: jal         0x800219E4
    // 0x8029C59C: addiu       $a0, $zero, 0x14
    ctx->r4 = ADD32(0, 0X14);
    func_800219E4(rdram, ctx);
        goto after_23;
    // 0x8029C59C: addiu       $a0, $zero, 0x14
    ctx->r4 = ADD32(0, 0X14);
    after_23:
    // 0x8029C5A0: b           L_8029C654
    // 0x8029C5A4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_8029C654;
    // 0x8029C5A4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8029C5A8:
    // 0x8029C5A8: lhu         $t7, 0xB78($t7)
    ctx->r15 = MEM_HU(ctx->r15, 0XB78);
    // 0x8029C5AC: addiu       $at, $zero, 0x8
    ctx->r1 = ADD32(0, 0X8);
    // 0x8029C5B0: bne         $t7, $at, L_8029C5F4
    if (ctx->r15 != ctx->r1) {
        // 0x8029C5B4: nop
    
            goto L_8029C5F4;
    }
    // 0x8029C5B4: nop

    // 0x8029C5B8: jal         0x800603F0
    // 0x8029C5BC: nop

    func_800603F0(rdram, ctx);
        goto after_24;
    // 0x8029C5BC: nop

    after_24:
    // 0x8029C5C0: jal         0x80020270
    // 0x8029C5C4: nop

    func_80020270(rdram, ctx);
        goto after_25;
    // 0x8029C5C4: nop

    after_25:
    // 0x8029C5C8: lui         $v0, 0x8011
    ctx->r2 = S32(0X8011 << 16);
    // 0x8029C5CC: addiu       $v0, $v0, -0x3770
    ctx->r2 = ADD32(ctx->r2, -0X3770);
    // 0x8029C5D0: lbu         $t8, 0x754($v0)
    ctx->r24 = MEM_BU(ctx->r2, 0X754);
    // 0x8029C5D4: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x8029C5D8: andi        $t9, $t8, 0xFC
    ctx->r25 = ctx->r24 & 0XFC;
    // 0x8029C5DC: sb          $t9, 0x754($v0)
    MEM_B(0X754, ctx->r2) = ctx->r25;
    // 0x8029C5E0: sw          $zero, 0x540C($at)
    MEM_W(0X540C, ctx->r1) = 0;
    // 0x8029C5E4: jal         0x8001B854
    // 0x8029C5E8: addiu       $a0, $zero, 0xA
    ctx->r4 = ADD32(0, 0XA);
    func_8001B854(rdram, ctx);
        goto after_26;
    // 0x8029C5E8: addiu       $a0, $zero, 0xA
    ctx->r4 = ADD32(0, 0XA);
    after_26:
    // 0x8029C5EC: b           L_8029C654
    // 0x8029C5F0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_8029C654;
    // 0x8029C5F0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8029C5F4:
    // 0x8029C5F4: jal         0x802936B0
    // 0x8029C5F8: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    func_802936B0(rdram, ctx);
        goto after_27;
    // 0x8029C5F8: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_27:
    // 0x8029C5FC: addiu       $t4, $zero, 0x4
    ctx->r12 = ADD32(0, 0X4);
    // 0x8029C600: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x8029C604: sb          $t4, 0x38DF($at)
    MEM_B(0X38DF, ctx->r1) = ctx->r12;
    // 0x8029C608: jal         0x800219E4
    // 0x8029C60C: addiu       $a0, $zero, 0x14
    ctx->r4 = ADD32(0, 0X14);
    func_800219E4(rdram, ctx);
        goto after_28;
    // 0x8029C60C: addiu       $a0, $zero, 0x14
    ctx->r4 = ADD32(0, 0X14);
    after_28:
    // 0x8029C610: b           L_8029C654
    // 0x8029C614: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_8029C654;
    // 0x8029C614: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8029C618:
    // 0x8029C618: jal         0x80296278
    // 0x8029C61C: nop

    func_80296278(rdram, ctx);
        goto after_29;
    // 0x8029C61C: nop

    after_29:
    // 0x8029C620: lui         $v0, 0x8011
    ctx->r2 = S32(0X8011 << 16);
    // 0x8029C624: addiu       $v0, $v0, -0x3770
    ctx->r2 = ADD32(ctx->r2, -0X3770);
    // 0x8029C628: lh          $t5, 0x7C2($v0)
    ctx->r13 = MEM_H(ctx->r2, 0X7C2);
    // 0x8029C62C: lui         $t6, 0x8012
    ctx->r14 = S32(0X8012 << 16);
    // 0x8029C630: bne         $t5, $zero, L_8029C63C
    if (ctx->r13 != 0) {
        // 0x8029C634: lui         $at, 0x802C
        ctx->r1 = S32(0X802C << 16);
            goto L_8029C63C;
    }
    // 0x8029C634: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x8029C638: sb          $zero, 0x7C0($v0)
    MEM_B(0X7C0, ctx->r2) = 0;
L_8029C63C:
    // 0x8029C63C: lhu         $t6, 0xB78($t6)
    ctx->r14 = MEM_HU(ctx->r14, 0XB78);
    // 0x8029C640: nop

    // 0x8029C644: bne         $t6, $zero, L_8029C654
    if (ctx->r14 != 0) {
        // 0x8029C648: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_8029C654;
    }
    // 0x8029C648: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8029C64C: sb          $zero, 0x38DF($at)
    MEM_B(0X38DF, ctx->r1) = 0;
L_8029C650:
    // 0x8029C650: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8029C654:
    // 0x8029C654: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8029C658: jr          $ra
    // 0x8029C65C: nop

    return;
    // 0x8029C65C: nop

;}
RECOMP_FUNC void func_8029C660(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8029C660: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8029C664: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8029C668: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x8029C66C: jal         0x8028BD18
    // 0x8029C670: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    func_8028BD18(rdram, ctx);
        goto after_0;
    // 0x8029C670: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    after_0:
    // 0x8029C674: jal         0x802A10D8
    // 0x8029C678: nop

    func_802A10D8(rdram, ctx);
        goto after_1;
    // 0x8029C678: nop

    after_1:
    // 0x8029C67C: lui         $t6, 0x8012
    ctx->r14 = S32(0X8012 << 16);
    // 0x8029C680: lb          $t6, -0x309C($t6)
    ctx->r14 = MEM_B(ctx->r14, -0X309C);
    // 0x8029C684: nop

    // 0x8029C688: bne         $t6, $zero, L_8029C6D4
    if (ctx->r14 != 0) {
        // 0x8029C68C: lui         $v0, 0x802C
        ctx->r2 = S32(0X802C << 16);
            goto L_8029C6D4;
    }
    // 0x8029C68C: lui         $v0, 0x802C
    ctx->r2 = S32(0X802C << 16);
    // 0x8029C690: addiu       $v0, $v0, 0x3B30
    ctx->r2 = ADD32(ctx->r2, 0X3B30);
    // 0x8029C694: lw          $a1, 0x0($v0)
    ctx->r5 = MEM_W(ctx->r2, 0X0);
    // 0x8029C698: lui         $a2, 0x802C
    ctx->r6 = S32(0X802C << 16);
    // 0x8029C69C: addiu       $a2, $a2, 0x3B08
    ctx->r6 = ADD32(ctx->r6, 0X3B08);
    // 0x8029C6A0: jal         0x8028BB68
    // 0x8029C6A4: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    func_8028BB68(rdram, ctx);
        goto after_2;
    // 0x8029C6A4: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_2:
    // 0x8029C6A8: lui         $v0, 0x802C
    ctx->r2 = S32(0X802C << 16);
    // 0x8029C6AC: addiu       $v0, $v0, 0x3B30
    ctx->r2 = ADD32(ctx->r2, 0X3B30);
    // 0x8029C6B0: lui         $t8, 0x600
    ctx->r24 = S32(0X600 << 16);
    // 0x8029C6B4: lui         $t9, 0x600
    ctx->r25 = S32(0X600 << 16);
    // 0x8029C6B8: lw          $t7, 0x0($v0)
    ctx->r15 = MEM_W(ctx->r2, 0X0);
    // 0x8029C6BC: addiu       $t9, $t9, 0x0
    ctx->r25 = ADD32(ctx->r25, 0X0);
    // 0x8029C6C0: addiu       $t8, $t8, 0x800
    ctx->r24 = ADD32(ctx->r24, 0X800);
    // 0x8029C6C4: subu        $t0, $t8, $t9
    ctx->r8 = SUB32(ctx->r24, ctx->r25);
    // 0x8029C6C8: addu        $t1, $t7, $t0
    ctx->r9 = ADD32(ctx->r15, ctx->r8);
    // 0x8029C6CC: b           L_8029C71C
    // 0x8029C6D0: sw          $t1, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r9;
        goto L_8029C71C;
    // 0x8029C6D0: sw          $t1, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r9;
L_8029C6D4:
    // 0x8029C6D4: lui         $v0, 0x802C
    ctx->r2 = S32(0X802C << 16);
    // 0x8029C6D8: addiu       $v0, $v0, 0x3B30
    ctx->r2 = ADD32(ctx->r2, 0X3B30);
    // 0x8029C6DC: lw          $a2, 0x0($v0)
    ctx->r6 = MEM_W(ctx->r2, 0X0);
    // 0x8029C6E0: lui         $a3, 0x802C
    ctx->r7 = S32(0X802C << 16);
    // 0x8029C6E4: addiu       $a3, $a3, 0x3B08
    ctx->r7 = ADD32(ctx->r7, 0X3B08);
    // 0x8029C6E8: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x8029C6EC: jal         0x8028BB94
    // 0x8029C6F0: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    func_8028BB94(rdram, ctx);
        goto after_3;
    // 0x8029C6F0: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_3:
    // 0x8029C6F4: lui         $v0, 0x802C
    ctx->r2 = S32(0X802C << 16);
    // 0x8029C6F8: addiu       $v0, $v0, 0x3B30
    ctx->r2 = ADD32(ctx->r2, 0X3B30);
    // 0x8029C6FC: lui         $t3, 0x600
    ctx->r11 = S32(0X600 << 16);
    // 0x8029C700: lui         $t4, 0x600
    ctx->r12 = S32(0X600 << 16);
    // 0x8029C704: lw          $t2, 0x0($v0)
    ctx->r10 = MEM_W(ctx->r2, 0X0);
    // 0x8029C708: addiu       $t4, $t4, 0x0
    ctx->r12 = ADD32(ctx->r12, 0X0);
    // 0x8029C70C: addiu       $t3, $t3, 0x800
    ctx->r11 = ADD32(ctx->r11, 0X800);
    // 0x8029C710: subu        $t5, $t3, $t4
    ctx->r13 = SUB32(ctx->r11, ctx->r12);
    // 0x8029C714: addu        $t6, $t2, $t5
    ctx->r14 = ADD32(ctx->r10, ctx->r13);
    // 0x8029C718: sw          $t6, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r14;
L_8029C71C:
    // 0x8029C71C: jal         0x802A1190
    // 0x8029C720: nop

    func_802A1190(rdram, ctx);
        goto after_4;
    // 0x8029C720: nop

    after_4:
    // 0x8029C724: lui         $v0, 0x802C
    ctx->r2 = S32(0X802C << 16);
    // 0x8029C728: addiu       $v0, $v0, 0x3B30
    ctx->r2 = ADD32(ctx->r2, 0X3B30);
    // 0x8029C72C: lw          $a1, 0x0($v0)
    ctx->r5 = MEM_W(ctx->r2, 0X0);
    // 0x8029C730: lui         $a2, 0x802C
    ctx->r6 = S32(0X802C << 16);
    // 0x8029C734: addiu       $a2, $a2, 0x3B10
    ctx->r6 = ADD32(ctx->r6, 0X3B10);
    // 0x8029C738: jal         0x8028BB68
    // 0x8029C73C: addiu       $a0, $zero, 0x1A
    ctx->r4 = ADD32(0, 0X1A);
    func_8028BB68(rdram, ctx);
        goto after_5;
    // 0x8029C73C: addiu       $a0, $zero, 0x1A
    ctx->r4 = ADD32(0, 0X1A);
    after_5:
    // 0x8029C740: lui         $v0, 0x802C
    ctx->r2 = S32(0X802C << 16);
    // 0x8029C744: addiu       $v0, $v0, 0x3B30
    ctx->r2 = ADD32(ctx->r2, 0X3B30);
    // 0x8029C748: lui         $t9, 0x601
    ctx->r25 = S32(0X601 << 16);
    // 0x8029C74C: lui         $t7, 0x600
    ctx->r15 = S32(0X600 << 16);
    // 0x8029C750: lw          $t8, 0x0($v0)
    ctx->r24 = MEM_W(ctx->r2, 0X0);
    // 0x8029C754: addiu       $t7, $t7, 0x0
    ctx->r15 = ADD32(ctx->r15, 0X0);
    // 0x8029C758: addiu       $t9, $t9, 0x2900
    ctx->r25 = ADD32(ctx->r25, 0X2900);
    // 0x8029C75C: subu        $t0, $t9, $t7
    ctx->r8 = SUB32(ctx->r25, ctx->r15);
    // 0x8029C760: lui         $a2, 0x802C
    ctx->r6 = S32(0X802C << 16);
    // 0x8029C764: addu        $a1, $t8, $t0
    ctx->r5 = ADD32(ctx->r24, ctx->r8);
    // 0x8029C768: sw          $a1, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r5;
    // 0x8029C76C: addiu       $a2, $a2, 0x3B18
    ctx->r6 = ADD32(ctx->r6, 0X3B18);
    // 0x8029C770: jal         0x8028BB68
    // 0x8029C774: addiu       $a0, $zero, 0x1B
    ctx->r4 = ADD32(0, 0X1B);
    func_8028BB68(rdram, ctx);
        goto after_6;
    // 0x8029C774: addiu       $a0, $zero, 0x1B
    ctx->r4 = ADD32(0, 0X1B);
    after_6:
    // 0x8029C778: lui         $v0, 0x802C
    ctx->r2 = S32(0X802C << 16);
    // 0x8029C77C: addiu       $v0, $v0, 0x3B30
    ctx->r2 = ADD32(ctx->r2, 0X3B30);
    // 0x8029C780: lui         $t4, 0x600
    ctx->r12 = S32(0X600 << 16);
    // 0x8029C784: lui         $t2, 0x600
    ctx->r10 = S32(0X600 << 16);
    // 0x8029C788: lw          $t3, 0x0($v0)
    ctx->r11 = MEM_W(ctx->r2, 0X0);
    // 0x8029C78C: lui         $s0, 0xF
    ctx->r16 = S32(0XF << 16);
    // 0x8029C790: addiu       $t2, $t2, 0x0
    ctx->r10 = ADD32(ctx->r10, 0X0);
    // 0x8029C794: addiu       $t4, $t4, 0x6100
    ctx->r12 = ADD32(ctx->r12, 0X6100);
    // 0x8029C798: lui         $t9, 0x600
    ctx->r25 = S32(0X600 << 16);
    // 0x8029C79C: ori         $s0, $s0, 0xFFFF
    ctx->r16 = ctx->r16 | 0XFFFF;
    // 0x8029C7A0: lui         $s1, 0x803A
    ctx->r17 = S32(0X803A << 16);
    // 0x8029C7A4: subu        $t5, $t4, $t2
    ctx->r13 = SUB32(ctx->r12, ctx->r10);
    // 0x8029C7A8: addiu       $t9, $t9, 0x56C0
    ctx->r25 = ADD32(ctx->r25, 0X56C0);
    // 0x8029C7AC: ori         $s1, $s1, 0xDA00
    ctx->r17 = ctx->r17 | 0XDA00;
    // 0x8029C7B0: and         $t7, $t9, $s0
    ctx->r15 = ctx->r25 & ctx->r16;
    // 0x8029C7B4: addu        $t6, $t3, $t5
    ctx->r14 = ADD32(ctx->r11, ctx->r13);
    // 0x8029C7B8: sw          $t6, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r14;
    // 0x8029C7BC: jal         0x8028B950
    // 0x8029C7C0: addu        $a0, $t7, $s1
    ctx->r4 = ADD32(ctx->r15, ctx->r17);
    func_8028B950(rdram, ctx);
        goto after_7;
    // 0x8029C7C0: addu        $a0, $t7, $s1
    ctx->r4 = ADD32(ctx->r15, ctx->r17);
    after_7:
    // 0x8029C7C4: lui         $t8, 0x600
    ctx->r24 = S32(0X600 << 16);
    // 0x8029C7C8: addiu       $t8, $t8, 0x6E58
    ctx->r24 = ADD32(ctx->r24, 0X6E58);
    // 0x8029C7CC: and         $t0, $t8, $s0
    ctx->r8 = ctx->r24 & ctx->r16;
    // 0x8029C7D0: jal         0x8028B950
    // 0x8029C7D4: addu        $a0, $t0, $s1
    ctx->r4 = ADD32(ctx->r8, ctx->r17);
    func_8028B950(rdram, ctx);
        goto after_8;
    // 0x8029C7D4: addu        $a0, $t0, $s1
    ctx->r4 = ADD32(ctx->r8, ctx->r17);
    after_8:
    // 0x8029C7D8: lui         $t1, 0x600
    ctx->r9 = S32(0X600 << 16);
    // 0x8029C7DC: addiu       $t1, $t1, 0x7878
    ctx->r9 = ADD32(ctx->r9, 0X7878);
    // 0x8029C7E0: and         $t4, $t1, $s0
    ctx->r12 = ctx->r9 & ctx->r16;
    // 0x8029C7E4: jal         0x8028B950
    // 0x8029C7E8: addu        $a0, $t4, $s1
    ctx->r4 = ADD32(ctx->r12, ctx->r17);
    func_8028B950(rdram, ctx);
        goto after_9;
    // 0x8029C7E8: addu        $a0, $t4, $s1
    ctx->r4 = ADD32(ctx->r12, ctx->r17);
    after_9:
    // 0x8029C7EC: lui         $t2, 0x601
    ctx->r10 = S32(0X601 << 16);
    // 0x8029C7F0: addiu       $t2, $t2, -0x7D30
    ctx->r10 = ADD32(ctx->r10, -0X7D30);
    // 0x8029C7F4: and         $t3, $t2, $s0
    ctx->r11 = ctx->r10 & ctx->r16;
    // 0x8029C7F8: jal         0x8028B950
    // 0x8029C7FC: addu        $a0, $t3, $s1
    ctx->r4 = ADD32(ctx->r11, ctx->r17);
    func_8028B950(rdram, ctx);
        goto after_10;
    // 0x8029C7FC: addu        $a0, $t3, $s1
    ctx->r4 = ADD32(ctx->r11, ctx->r17);
    after_10:
    // 0x8029C800: lui         $t5, 0x601
    ctx->r13 = S32(0X601 << 16);
    // 0x8029C804: addiu       $t5, $t5, -0x7270
    ctx->r13 = ADD32(ctx->r13, -0X7270);
    // 0x8029C808: and         $t6, $t5, $s0
    ctx->r14 = ctx->r13 & ctx->r16;
    // 0x8029C80C: jal         0x8028B950
    // 0x8029C810: addu        $a0, $t6, $s1
    ctx->r4 = ADD32(ctx->r14, ctx->r17);
    func_8028B950(rdram, ctx);
        goto after_11;
    // 0x8029C810: addu        $a0, $t6, $s1
    ctx->r4 = ADD32(ctx->r14, ctx->r17);
    after_11:
    // 0x8029C814: lui         $t9, 0x601
    ctx->r25 = S32(0X601 << 16);
    // 0x8029C818: addiu       $t9, $t9, -0x67B0
    ctx->r25 = ADD32(ctx->r25, -0X67B0);
    // 0x8029C81C: and         $t7, $t9, $s0
    ctx->r15 = ctx->r25 & ctx->r16;
    // 0x8029C820: jal         0x8028B950
    // 0x8029C824: addu        $a0, $t7, $s1
    ctx->r4 = ADD32(ctx->r15, ctx->r17);
    func_8028B950(rdram, ctx);
        goto after_12;
    // 0x8029C824: addu        $a0, $t7, $s1
    ctx->r4 = ADD32(ctx->r15, ctx->r17);
    after_12:
    // 0x8029C828: lui         $t8, 0x601
    ctx->r24 = S32(0X601 << 16);
    // 0x8029C82C: addiu       $t8, $t8, -0x5D58
    ctx->r24 = ADD32(ctx->r24, -0X5D58);
    // 0x8029C830: and         $t0, $t8, $s0
    ctx->r8 = ctx->r24 & ctx->r16;
    // 0x8029C834: jal         0x8028B950
    // 0x8029C838: addu        $a0, $t0, $s1
    ctx->r4 = ADD32(ctx->r8, ctx->r17);
    func_8028B950(rdram, ctx);
        goto after_13;
    // 0x8029C838: addu        $a0, $t0, $s1
    ctx->r4 = ADD32(ctx->r8, ctx->r17);
    after_13:
    // 0x8029C83C: lui         $t1, 0x601
    ctx->r9 = S32(0X601 << 16);
    // 0x8029C840: addiu       $t1, $t1, -0x5338
    ctx->r9 = ADD32(ctx->r9, -0X5338);
    // 0x8029C844: and         $t4, $t1, $s0
    ctx->r12 = ctx->r9 & ctx->r16;
    // 0x8029C848: jal         0x8028B950
    // 0x8029C84C: addu        $a0, $t4, $s1
    ctx->r4 = ADD32(ctx->r12, ctx->r17);
    func_8028B950(rdram, ctx);
        goto after_14;
    // 0x8029C84C: addu        $a0, $t4, $s1
    ctx->r4 = ADD32(ctx->r12, ctx->r17);
    after_14:
    // 0x8029C850: lui         $t2, 0x600
    ctx->r10 = S32(0X600 << 16);
    // 0x8029C854: addiu       $t2, $t2, 0x5820
    ctx->r10 = ADD32(ctx->r10, 0X5820);
    // 0x8029C858: and         $t3, $t2, $s0
    ctx->r11 = ctx->r10 & ctx->r16;
    // 0x8029C85C: jal         0x8028B950
    // 0x8029C860: addu        $a0, $t3, $s1
    ctx->r4 = ADD32(ctx->r11, ctx->r17);
    func_8028B950(rdram, ctx);
        goto after_15;
    // 0x8029C860: addu        $a0, $t3, $s1
    ctx->r4 = ADD32(ctx->r11, ctx->r17);
    after_15:
    // 0x8029C864: lui         $t5, 0x600
    ctx->r13 = S32(0X600 << 16);
    // 0x8029C868: addiu       $t5, $t5, 0x6F88
    ctx->r13 = ADD32(ctx->r13, 0X6F88);
    // 0x8029C86C: and         $t6, $t5, $s0
    ctx->r14 = ctx->r13 & ctx->r16;
    // 0x8029C870: jal         0x8028B950
    // 0x8029C874: addu        $a0, $t6, $s1
    ctx->r4 = ADD32(ctx->r14, ctx->r17);
    func_8028B950(rdram, ctx);
        goto after_16;
    // 0x8029C874: addu        $a0, $t6, $s1
    ctx->r4 = ADD32(ctx->r14, ctx->r17);
    after_16:
    // 0x8029C878: lui         $t9, 0x600
    ctx->r25 = S32(0X600 << 16);
    // 0x8029C87C: addiu       $t9, $t9, 0x79A8
    ctx->r25 = ADD32(ctx->r25, 0X79A8);
    // 0x8029C880: and         $t7, $t9, $s0
    ctx->r15 = ctx->r25 & ctx->r16;
    // 0x8029C884: jal         0x8028B950
    // 0x8029C888: addu        $a0, $t7, $s1
    ctx->r4 = ADD32(ctx->r15, ctx->r17);
    func_8028B950(rdram, ctx);
        goto after_17;
    // 0x8029C888: addu        $a0, $t7, $s1
    ctx->r4 = ADD32(ctx->r15, ctx->r17);
    after_17:
    // 0x8029C88C: lui         $t8, 0x601
    ctx->r24 = S32(0X601 << 16);
    // 0x8029C890: addiu       $t8, $t8, -0x7C00
    ctx->r24 = ADD32(ctx->r24, -0X7C00);
    // 0x8029C894: and         $t0, $t8, $s0
    ctx->r8 = ctx->r24 & ctx->r16;
    // 0x8029C898: jal         0x8028B950
    // 0x8029C89C: addu        $a0, $t0, $s1
    ctx->r4 = ADD32(ctx->r8, ctx->r17);
    func_8028B950(rdram, ctx);
        goto after_18;
    // 0x8029C89C: addu        $a0, $t0, $s1
    ctx->r4 = ADD32(ctx->r8, ctx->r17);
    after_18:
    // 0x8029C8A0: lui         $t1, 0x601
    ctx->r9 = S32(0X601 << 16);
    // 0x8029C8A4: addiu       $t1, $t1, -0x7140
    ctx->r9 = ADD32(ctx->r9, -0X7140);
    // 0x8029C8A8: and         $t4, $t1, $s0
    ctx->r12 = ctx->r9 & ctx->r16;
    // 0x8029C8AC: jal         0x8028B950
    // 0x8029C8B0: addu        $a0, $t4, $s1
    ctx->r4 = ADD32(ctx->r12, ctx->r17);
    func_8028B950(rdram, ctx);
        goto after_19;
    // 0x8029C8B0: addu        $a0, $t4, $s1
    ctx->r4 = ADD32(ctx->r12, ctx->r17);
    after_19:
    // 0x8029C8B4: lui         $t2, 0x601
    ctx->r10 = S32(0X601 << 16);
    // 0x8029C8B8: addiu       $t2, $t2, -0x6680
    ctx->r10 = ADD32(ctx->r10, -0X6680);
    // 0x8029C8BC: and         $t3, $t2, $s0
    ctx->r11 = ctx->r10 & ctx->r16;
    // 0x8029C8C0: jal         0x8028B950
    // 0x8029C8C4: addu        $a0, $t3, $s1
    ctx->r4 = ADD32(ctx->r11, ctx->r17);
    func_8028B950(rdram, ctx);
        goto after_20;
    // 0x8029C8C4: addu        $a0, $t3, $s1
    ctx->r4 = ADD32(ctx->r11, ctx->r17);
    after_20:
    // 0x8029C8C8: lui         $t5, 0x601
    ctx->r13 = S32(0X601 << 16);
    // 0x8029C8CC: addiu       $t5, $t5, -0x5C28
    ctx->r13 = ADD32(ctx->r13, -0X5C28);
    // 0x8029C8D0: and         $t6, $t5, $s0
    ctx->r14 = ctx->r13 & ctx->r16;
    // 0x8029C8D4: jal         0x8028B950
    // 0x8029C8D8: addu        $a0, $t6, $s1
    ctx->r4 = ADD32(ctx->r14, ctx->r17);
    func_8028B950(rdram, ctx);
        goto after_21;
    // 0x8029C8D8: addu        $a0, $t6, $s1
    ctx->r4 = ADD32(ctx->r14, ctx->r17);
    after_21:
    // 0x8029C8DC: lui         $t9, 0x601
    ctx->r25 = S32(0X601 << 16);
    // 0x8029C8E0: addiu       $t9, $t9, -0x51D8
    ctx->r25 = ADD32(ctx->r25, -0X51D8);
    // 0x8029C8E4: and         $t7, $t9, $s0
    ctx->r15 = ctx->r25 & ctx->r16;
    // 0x8029C8E8: jal         0x8028B950
    // 0x8029C8EC: addu        $a0, $t7, $s1
    ctx->r4 = ADD32(ctx->r15, ctx->r17);
    func_8028B950(rdram, ctx);
        goto after_22;
    // 0x8029C8EC: addu        $a0, $t7, $s1
    ctx->r4 = ADD32(ctx->r15, ctx->r17);
    after_22:
    // 0x8029C8F0: lui         $t8, 0x600
    ctx->r24 = S32(0X600 << 16);
    // 0x8029C8F4: addiu       $t8, $t8, 0x5ED8
    ctx->r24 = ADD32(ctx->r24, 0X5ED8);
    // 0x8029C8F8: and         $t0, $t8, $s0
    ctx->r8 = ctx->r24 & ctx->r16;
    // 0x8029C8FC: jal         0x8028B950
    // 0x8029C900: addu        $a0, $t0, $s1
    ctx->r4 = ADD32(ctx->r8, ctx->r17);
    func_8028B950(rdram, ctx);
        goto after_23;
    // 0x8029C900: addu        $a0, $t0, $s1
    ctx->r4 = ADD32(ctx->r8, ctx->r17);
    after_23:
    // 0x8029C904: lui         $t1, 0x600
    ctx->r9 = S32(0X600 << 16);
    // 0x8029C908: addiu       $t1, $t1, 0x7298
    ctx->r9 = ADD32(ctx->r9, 0X7298);
    // 0x8029C90C: and         $t4, $t1, $s0
    ctx->r12 = ctx->r9 & ctx->r16;
    // 0x8029C910: jal         0x8028B950
    // 0x8029C914: addu        $a0, $t4, $s1
    ctx->r4 = ADD32(ctx->r12, ctx->r17);
    func_8028B950(rdram, ctx);
        goto after_24;
    // 0x8029C914: addu        $a0, $t4, $s1
    ctx->r4 = ADD32(ctx->r12, ctx->r17);
    after_24:
    // 0x8029C918: lui         $t2, 0x600
    ctx->r10 = S32(0X600 << 16);
    // 0x8029C91C: addiu       $t2, $t2, 0x7CB8
    ctx->r10 = ADD32(ctx->r10, 0X7CB8);
    // 0x8029C920: and         $t3, $t2, $s0
    ctx->r11 = ctx->r10 & ctx->r16;
    // 0x8029C924: jal         0x8028B950
    // 0x8029C928: addu        $a0, $t3, $s1
    ctx->r4 = ADD32(ctx->r11, ctx->r17);
    func_8028B950(rdram, ctx);
        goto after_25;
    // 0x8029C928: addu        $a0, $t3, $s1
    ctx->r4 = ADD32(ctx->r11, ctx->r17);
    after_25:
    // 0x8029C92C: lui         $t5, 0x601
    ctx->r13 = S32(0X601 << 16);
    // 0x8029C930: addiu       $t5, $t5, -0x78F0
    ctx->r13 = ADD32(ctx->r13, -0X78F0);
    // 0x8029C934: and         $t6, $t5, $s0
    ctx->r14 = ctx->r13 & ctx->r16;
    // 0x8029C938: jal         0x8028B950
    // 0x8029C93C: addu        $a0, $t6, $s1
    ctx->r4 = ADD32(ctx->r14, ctx->r17);
    func_8028B950(rdram, ctx);
        goto after_26;
    // 0x8029C93C: addu        $a0, $t6, $s1
    ctx->r4 = ADD32(ctx->r14, ctx->r17);
    after_26:
    // 0x8029C940: lui         $t9, 0x601
    ctx->r25 = S32(0X601 << 16);
    // 0x8029C944: addiu       $t9, $t9, -0x6E30
    ctx->r25 = ADD32(ctx->r25, -0X6E30);
    // 0x8029C948: and         $t7, $t9, $s0
    ctx->r15 = ctx->r25 & ctx->r16;
    // 0x8029C94C: jal         0x8028B950
    // 0x8029C950: addu        $a0, $t7, $s1
    ctx->r4 = ADD32(ctx->r15, ctx->r17);
    func_8028B950(rdram, ctx);
        goto after_27;
    // 0x8029C950: addu        $a0, $t7, $s1
    ctx->r4 = ADD32(ctx->r15, ctx->r17);
    after_27:
    // 0x8029C954: lui         $t8, 0x601
    ctx->r24 = S32(0X601 << 16);
    // 0x8029C958: addiu       $t8, $t8, -0x6370
    ctx->r24 = ADD32(ctx->r24, -0X6370);
    // 0x8029C95C: and         $t0, $t8, $s0
    ctx->r8 = ctx->r24 & ctx->r16;
    // 0x8029C960: jal         0x8028B950
    // 0x8029C964: addu        $a0, $t0, $s1
    ctx->r4 = ADD32(ctx->r8, ctx->r17);
    func_8028B950(rdram, ctx);
        goto after_28;
    // 0x8029C964: addu        $a0, $t0, $s1
    ctx->r4 = ADD32(ctx->r8, ctx->r17);
    after_28:
    // 0x8029C968: lui         $t1, 0x601
    ctx->r9 = S32(0X601 << 16);
    // 0x8029C96C: addiu       $t1, $t1, -0x5918
    ctx->r9 = ADD32(ctx->r9, -0X5918);
    // 0x8029C970: and         $t4, $t1, $s0
    ctx->r12 = ctx->r9 & ctx->r16;
    // 0x8029C974: jal         0x8028B950
    // 0x8029C978: addu        $a0, $t4, $s1
    ctx->r4 = ADD32(ctx->r12, ctx->r17);
    func_8028B950(rdram, ctx);
        goto after_29;
    // 0x8029C978: addu        $a0, $t4, $s1
    ctx->r4 = ADD32(ctx->r12, ctx->r17);
    after_29:
    // 0x8029C97C: lui         $t2, 0x601
    ctx->r10 = S32(0X601 << 16);
    // 0x8029C980: addiu       $t2, $t2, -0x4A08
    ctx->r10 = ADD32(ctx->r10, -0X4A08);
    // 0x8029C984: and         $t3, $t2, $s0
    ctx->r11 = ctx->r10 & ctx->r16;
    // 0x8029C988: jal         0x8028B950
    // 0x8029C98C: addu        $a0, $t3, $s1
    ctx->r4 = ADD32(ctx->r11, ctx->r17);
    func_8028B950(rdram, ctx);
        goto after_30;
    // 0x8029C98C: addu        $a0, $t3, $s1
    ctx->r4 = ADD32(ctx->r11, ctx->r17);
    after_30:
    // 0x8029C990: lui         $t5, 0x600
    ctx->r13 = S32(0X600 << 16);
    // 0x8029C994: addiu       $t5, $t5, 0x6498
    ctx->r13 = ADD32(ctx->r13, 0X6498);
    // 0x8029C998: and         $t6, $t5, $s0
    ctx->r14 = ctx->r13 & ctx->r16;
    // 0x8029C99C: jal         0x8028B950
    // 0x8029C9A0: addu        $a0, $t6, $s1
    ctx->r4 = ADD32(ctx->r14, ctx->r17);
    func_8028B950(rdram, ctx);
        goto after_31;
    // 0x8029C9A0: addu        $a0, $t6, $s1
    ctx->r4 = ADD32(ctx->r14, ctx->r17);
    after_31:
    // 0x8029C9A4: lui         $t9, 0x600
    ctx->r25 = S32(0X600 << 16);
    // 0x8029C9A8: addiu       $t9, $t9, 0x75A8
    ctx->r25 = ADD32(ctx->r25, 0X75A8);
    // 0x8029C9AC: and         $t7, $t9, $s0
    ctx->r15 = ctx->r25 & ctx->r16;
    // 0x8029C9B0: jal         0x8028B950
    // 0x8029C9B4: addu        $a0, $t7, $s1
    ctx->r4 = ADD32(ctx->r15, ctx->r17);
    func_8028B950(rdram, ctx);
        goto after_32;
    // 0x8029C9B4: addu        $a0, $t7, $s1
    ctx->r4 = ADD32(ctx->r15, ctx->r17);
    after_32:
    // 0x8029C9B8: lui         $t8, 0x601
    ctx->r24 = S32(0X601 << 16);
    // 0x8029C9BC: addiu       $t8, $t8, -0x8000
    ctx->r24 = ADD32(ctx->r24, -0X8000);
    // 0x8029C9C0: and         $t0, $t8, $s0
    ctx->r8 = ctx->r24 & ctx->r16;
    // 0x8029C9C4: jal         0x8028B950
    // 0x8029C9C8: addu        $a0, $t0, $s1
    ctx->r4 = ADD32(ctx->r8, ctx->r17);
    func_8028B950(rdram, ctx);
        goto after_33;
    // 0x8029C9C8: addu        $a0, $t0, $s1
    ctx->r4 = ADD32(ctx->r8, ctx->r17);
    after_33:
    // 0x8029C9CC: lui         $t1, 0x601
    ctx->r9 = S32(0X601 << 16);
    // 0x8029C9D0: addiu       $t1, $t1, -0x7540
    ctx->r9 = ADD32(ctx->r9, -0X7540);
    // 0x8029C9D4: and         $t4, $t1, $s0
    ctx->r12 = ctx->r9 & ctx->r16;
    // 0x8029C9D8: jal         0x8028B950
    // 0x8029C9DC: addu        $a0, $t4, $s1
    ctx->r4 = ADD32(ctx->r12, ctx->r17);
    func_8028B950(rdram, ctx);
        goto after_34;
    // 0x8029C9DC: addu        $a0, $t4, $s1
    ctx->r4 = ADD32(ctx->r12, ctx->r17);
    after_34:
    // 0x8029C9E0: lui         $t2, 0x601
    ctx->r10 = S32(0X601 << 16);
    // 0x8029C9E4: addiu       $t2, $t2, -0x6A80
    ctx->r10 = ADD32(ctx->r10, -0X6A80);
    // 0x8029C9E8: and         $t3, $t2, $s0
    ctx->r11 = ctx->r10 & ctx->r16;
    // 0x8029C9EC: jal         0x8028B950
    // 0x8029C9F0: addu        $a0, $t3, $s1
    ctx->r4 = ADD32(ctx->r11, ctx->r17);
    func_8028B950(rdram, ctx);
        goto after_35;
    // 0x8029C9F0: addu        $a0, $t3, $s1
    ctx->r4 = ADD32(ctx->r11, ctx->r17);
    after_35:
    // 0x8029C9F4: lui         $t5, 0x601
    ctx->r13 = S32(0X601 << 16);
    // 0x8029C9F8: addiu       $t5, $t5, -0x6028
    ctx->r13 = ADD32(ctx->r13, -0X6028);
    // 0x8029C9FC: and         $t6, $t5, $s0
    ctx->r14 = ctx->r13 & ctx->r16;
    // 0x8029CA00: jal         0x8028B950
    // 0x8029CA04: addu        $a0, $t6, $s1
    ctx->r4 = ADD32(ctx->r14, ctx->r17);
    func_8028B950(rdram, ctx);
        goto after_36;
    // 0x8029CA04: addu        $a0, $t6, $s1
    ctx->r4 = ADD32(ctx->r14, ctx->r17);
    after_36:
    // 0x8029CA08: lui         $t9, 0x601
    ctx->r25 = S32(0X601 << 16);
    // 0x8029CA0C: addiu       $t9, $t9, -0x5608
    ctx->r25 = ADD32(ctx->r25, -0X5608);
    // 0x8029CA10: and         $t7, $t9, $s0
    ctx->r15 = ctx->r25 & ctx->r16;
    // 0x8029CA14: jal         0x8028B950
    // 0x8029CA18: addu        $a0, $t7, $s1
    ctx->r4 = ADD32(ctx->r15, ctx->r17);
    func_8028B950(rdram, ctx);
        goto after_37;
    // 0x8029CA18: addu        $a0, $t7, $s1
    ctx->r4 = ADD32(ctx->r15, ctx->r17);
    after_37:
    // 0x8029CA1C: lui         $t8, 0x601
    ctx->r24 = S32(0X601 << 16);
    // 0x8029CA20: addiu       $t8, $t8, -0x43B0
    ctx->r24 = ADD32(ctx->r24, -0X43B0);
    // 0x8029CA24: and         $t0, $t8, $s0
    ctx->r8 = ctx->r24 & ctx->r16;
    // 0x8029CA28: jal         0x8028B950
    // 0x8029CA2C: addu        $a0, $t0, $s1
    ctx->r4 = ADD32(ctx->r8, ctx->r17);
    func_8028B950(rdram, ctx);
        goto after_38;
    // 0x8029CA2C: addu        $a0, $t0, $s1
    ctx->r4 = ADD32(ctx->r8, ctx->r17);
    after_38:
    // 0x8029CA30: lui         $t1, 0x600
    ctx->r9 = S32(0X600 << 16);
    // 0x8029CA34: addiu       $t1, $t1, 0x6B20
    ctx->r9 = ADD32(ctx->r9, 0X6B20);
    // 0x8029CA38: and         $t4, $t1, $s0
    ctx->r12 = ctx->r9 & ctx->r16;
    // 0x8029CA3C: jal         0x8028B950
    // 0x8029CA40: addu        $a0, $t4, $s1
    ctx->r4 = ADD32(ctx->r12, ctx->r17);
    func_8028B950(rdram, ctx);
        goto after_39;
    // 0x8029CA40: addu        $a0, $t4, $s1
    ctx->r4 = ADD32(ctx->r12, ctx->r17);
    after_39:
    // 0x8029CA44: lui         $t2, 0xE00
    ctx->r10 = S32(0XE00 << 16);
    // 0x8029CA48: lui         $s1, 0x803B
    ctx->r17 = S32(0X803B << 16);
    // 0x8029CA4C: addiu       $t2, $t2, 0x20F0
    ctx->r10 = ADD32(ctx->r10, 0X20F0);
    // 0x8029CA50: ori         $s1, $s1, 0xB200
    ctx->r17 = ctx->r17 | 0XB200;
    // 0x8029CA54: and         $t3, $t2, $s0
    ctx->r11 = ctx->r10 & ctx->r16;
    // 0x8029CA58: jal         0x8028B950
    // 0x8029CA5C: addu        $a0, $t3, $s1
    ctx->r4 = ADD32(ctx->r11, ctx->r17);
    func_8028B950(rdram, ctx);
        goto after_40;
    // 0x8029CA5C: addu        $a0, $t3, $s1
    ctx->r4 = ADD32(ctx->r11, ctx->r17);
    after_40:
    // 0x8029CA60: lui         $t5, 0xE00
    ctx->r13 = S32(0XE00 << 16);
    // 0x8029CA64: addiu       $t5, $t5, 0x5988
    ctx->r13 = ADD32(ctx->r13, 0X5988);
    // 0x8029CA68: and         $t6, $t5, $s0
    ctx->r14 = ctx->r13 & ctx->r16;
    // 0x8029CA6C: jal         0x8028B950
    // 0x8029CA70: addu        $a0, $t6, $s1
    ctx->r4 = ADD32(ctx->r14, ctx->r17);
    func_8028B950(rdram, ctx);
        goto after_41;
    // 0x8029CA70: addu        $a0, $t6, $s1
    ctx->r4 = ADD32(ctx->r14, ctx->r17);
    after_41:
    // 0x8029CA74: lui         $t9, 0xE00
    ctx->r25 = S32(0XE00 << 16);
    // 0x8029CA78: addiu       $t9, $t9, 0x1CC0
    ctx->r25 = ADD32(ctx->r25, 0X1CC0);
    // 0x8029CA7C: and         $t7, $t9, $s0
    ctx->r15 = ctx->r25 & ctx->r16;
    // 0x8029CA80: jal         0x8028B950
    // 0x8029CA84: addu        $a0, $t7, $s1
    ctx->r4 = ADD32(ctx->r15, ctx->r17);
    func_8028B950(rdram, ctx);
        goto after_42;
    // 0x8029CA84: addu        $a0, $t7, $s1
    ctx->r4 = ADD32(ctx->r15, ctx->r17);
    after_42:
    // 0x8029CA88: lui         $t8, 0xE00
    ctx->r24 = S32(0XE00 << 16);
    // 0x8029CA8C: addiu       $t8, $t8, 0x2F38
    ctx->r24 = ADD32(ctx->r24, 0X2F38);
    // 0x8029CA90: and         $t0, $t8, $s0
    ctx->r8 = ctx->r24 & ctx->r16;
    // 0x8029CA94: jal         0x8028B950
    // 0x8029CA98: addu        $a0, $t0, $s1
    ctx->r4 = ADD32(ctx->r8, ctx->r17);
    func_8028B950(rdram, ctx);
        goto after_43;
    // 0x8029CA98: addu        $a0, $t0, $s1
    ctx->r4 = ADD32(ctx->r8, ctx->r17);
    after_43:
    // 0x8029CA9C: lui         $t1, 0xE00
    ctx->r9 = S32(0XE00 << 16);
    // 0x8029CAA0: addiu       $t1, $t1, 0x3438
    ctx->r9 = ADD32(ctx->r9, 0X3438);
    // 0x8029CAA4: and         $t4, $t1, $s0
    ctx->r12 = ctx->r9 & ctx->r16;
    // 0x8029CAA8: jal         0x8028B950
    // 0x8029CAAC: addu        $a0, $t4, $s1
    ctx->r4 = ADD32(ctx->r12, ctx->r17);
    func_8028B950(rdram, ctx);
        goto after_44;
    // 0x8029CAAC: addu        $a0, $t4, $s1
    ctx->r4 = ADD32(ctx->r12, ctx->r17);
    after_44:
    // 0x8029CAB0: lui         $t2, 0xE00
    ctx->r10 = S32(0XE00 << 16);
    // 0x8029CAB4: addiu       $t2, $t2, 0x3938
    ctx->r10 = ADD32(ctx->r10, 0X3938);
    // 0x8029CAB8: and         $t3, $t2, $s0
    ctx->r11 = ctx->r10 & ctx->r16;
    // 0x8029CABC: jal         0x8028B950
    // 0x8029CAC0: addu        $a0, $t3, $s1
    ctx->r4 = ADD32(ctx->r11, ctx->r17);
    func_8028B950(rdram, ctx);
        goto after_45;
    // 0x8029CAC0: addu        $a0, $t3, $s1
    ctx->r4 = ADD32(ctx->r11, ctx->r17);
    after_45:
    // 0x8029CAC4: lui         $t5, 0xE00
    ctx->r13 = S32(0XE00 << 16);
    // 0x8029CAC8: addiu       $t5, $t5, 0x4248
    ctx->r13 = ADD32(ctx->r13, 0X4248);
    // 0x8029CACC: and         $t6, $t5, $s0
    ctx->r14 = ctx->r13 & ctx->r16;
    // 0x8029CAD0: jal         0x8028B950
    // 0x8029CAD4: addu        $a0, $t6, $s1
    ctx->r4 = ADD32(ctx->r14, ctx->r17);
    func_8028B950(rdram, ctx);
        goto after_46;
    // 0x8029CAD4: addu        $a0, $t6, $s1
    ctx->r4 = ADD32(ctx->r14, ctx->r17);
    after_46:
    // 0x8029CAD8: lui         $t9, 0xE00
    ctx->r25 = S32(0XE00 << 16);
    // 0x8029CADC: addiu       $t9, $t9, 0x4A88
    ctx->r25 = ADD32(ctx->r25, 0X4A88);
    // 0x8029CAE0: and         $t7, $t9, $s0
    ctx->r15 = ctx->r25 & ctx->r16;
    // 0x8029CAE4: jal         0x8028B950
    // 0x8029CAE8: addu        $a0, $t7, $s1
    ctx->r4 = ADD32(ctx->r15, ctx->r17);
    func_8028B950(rdram, ctx);
        goto after_47;
    // 0x8029CAE8: addu        $a0, $t7, $s1
    ctx->r4 = ADD32(ctx->r15, ctx->r17);
    after_47:
    // 0x8029CAEC: lui         $t8, 0xE00
    ctx->r24 = S32(0XE00 << 16);
    // 0x8029CAF0: addiu       $t8, $t8, 0x4EB8
    ctx->r24 = ADD32(ctx->r24, 0X4EB8);
    // 0x8029CAF4: and         $t0, $t8, $s0
    ctx->r8 = ctx->r24 & ctx->r16;
    // 0x8029CAF8: jal         0x8028B950
    // 0x8029CAFC: addu        $a0, $t0, $s1
    ctx->r4 = ADD32(ctx->r8, ctx->r17);
    func_8028B950(rdram, ctx);
        goto after_48;
    // 0x8029CAFC: addu        $a0, $t0, $s1
    ctx->r4 = ADD32(ctx->r8, ctx->r17);
    after_48:
    // 0x8029CB00: lui         $t1, 0xE00
    ctx->r9 = S32(0XE00 << 16);
    // 0x8029CB04: addiu       $t1, $t1, 0x5558
    ctx->r9 = ADD32(ctx->r9, 0X5558);
    // 0x8029CB08: and         $t4, $t1, $s0
    ctx->r12 = ctx->r9 & ctx->r16;
    // 0x8029CB0C: jal         0x8028B950
    // 0x8029CB10: addu        $a0, $t4, $s1
    ctx->r4 = ADD32(ctx->r12, ctx->r17);
    func_8028B950(rdram, ctx);
        goto after_49;
    // 0x8029CB10: addu        $a0, $t4, $s1
    ctx->r4 = ADD32(ctx->r12, ctx->r17);
    after_49:
    // 0x8029CB14: lui         $t2, 0xE00
    ctx->r10 = S32(0XE00 << 16);
    // 0x8029CB18: addiu       $t2, $t2, 0x1ED8
    ctx->r10 = ADD32(ctx->r10, 0X1ED8);
    // 0x8029CB1C: and         $t3, $t2, $s0
    ctx->r11 = ctx->r10 & ctx->r16;
    // 0x8029CB20: jal         0x8028B950
    // 0x8029CB24: addu        $a0, $t3, $s1
    ctx->r4 = ADD32(ctx->r11, ctx->r17);
    func_8028B950(rdram, ctx);
        goto after_50;
    // 0x8029CB24: addu        $a0, $t3, $s1
    ctx->r4 = ADD32(ctx->r11, ctx->r17);
    after_50:
    // 0x8029CB28: lui         $t5, 0xE00
    ctx->r13 = S32(0XE00 << 16);
    // 0x8029CB2C: addiu       $t5, $t5, 0x3150
    ctx->r13 = ADD32(ctx->r13, 0X3150);
    // 0x8029CB30: and         $t6, $t5, $s0
    ctx->r14 = ctx->r13 & ctx->r16;
    // 0x8029CB34: jal         0x8028B950
    // 0x8029CB38: addu        $a0, $t6, $s1
    ctx->r4 = ADD32(ctx->r14, ctx->r17);
    func_8028B950(rdram, ctx);
        goto after_51;
    // 0x8029CB38: addu        $a0, $t6, $s1
    ctx->r4 = ADD32(ctx->r14, ctx->r17);
    after_51:
    // 0x8029CB3C: lui         $t9, 0xE00
    ctx->r25 = S32(0XE00 << 16);
    // 0x8029CB40: addiu       $t9, $t9, 0x3720
    ctx->r25 = ADD32(ctx->r25, 0X3720);
    // 0x8029CB44: and         $t7, $t9, $s0
    ctx->r15 = ctx->r25 & ctx->r16;
    // 0x8029CB48: jal         0x8028B950
    // 0x8029CB4C: addu        $a0, $t7, $s1
    ctx->r4 = ADD32(ctx->r15, ctx->r17);
    func_8028B950(rdram, ctx);
        goto after_52;
    // 0x8029CB4C: addu        $a0, $t7, $s1
    ctx->r4 = ADD32(ctx->r15, ctx->r17);
    after_52:
    // 0x8029CB50: lui         $t8, 0xE00
    ctx->r24 = S32(0XE00 << 16);
    // 0x8029CB54: addiu       $t8, $t8, 0x3DC0
    ctx->r24 = ADD32(ctx->r24, 0X3DC0);
    // 0x8029CB58: and         $t0, $t8, $s0
    ctx->r8 = ctx->r24 & ctx->r16;
    // 0x8029CB5C: jal         0x8028B950
    // 0x8029CB60: addu        $a0, $t0, $s1
    ctx->r4 = ADD32(ctx->r8, ctx->r17);
    func_8028B950(rdram, ctx);
        goto after_53;
    // 0x8029CB60: addu        $a0, $t0, $s1
    ctx->r4 = ADD32(ctx->r8, ctx->r17);
    after_53:
    // 0x8029CB64: lui         $t1, 0xE00
    ctx->r9 = S32(0XE00 << 16);
    // 0x8029CB68: addiu       $t1, $t1, 0x46D0
    ctx->r9 = ADD32(ctx->r9, 0X46D0);
    // 0x8029CB6C: and         $t4, $t1, $s0
    ctx->r12 = ctx->r9 & ctx->r16;
    // 0x8029CB70: jal         0x8028B950
    // 0x8029CB74: addu        $a0, $t4, $s1
    ctx->r4 = ADD32(ctx->r12, ctx->r17);
    func_8028B950(rdram, ctx);
        goto after_54;
    // 0x8029CB74: addu        $a0, $t4, $s1
    ctx->r4 = ADD32(ctx->r12, ctx->r17);
    after_54:
    // 0x8029CB78: lui         $t2, 0xE00
    ctx->r10 = S32(0XE00 << 16);
    // 0x8029CB7C: addiu       $t2, $t2, 0x4CA0
    ctx->r10 = ADD32(ctx->r10, 0X4CA0);
    // 0x8029CB80: and         $t3, $t2, $s0
    ctx->r11 = ctx->r10 & ctx->r16;
    // 0x8029CB84: jal         0x8028B950
    // 0x8029CB88: addu        $a0, $t3, $s1
    ctx->r4 = ADD32(ctx->r11, ctx->r17);
    func_8028B950(rdram, ctx);
        goto after_55;
    // 0x8029CB88: addu        $a0, $t3, $s1
    ctx->r4 = ADD32(ctx->r11, ctx->r17);
    after_55:
    // 0x8029CB8C: lui         $t5, 0xE00
    ctx->r13 = S32(0XE00 << 16);
    // 0x8029CB90: addiu       $t5, $t5, 0x51A0
    ctx->r13 = ADD32(ctx->r13, 0X51A0);
    // 0x8029CB94: and         $t6, $t5, $s0
    ctx->r14 = ctx->r13 & ctx->r16;
    // 0x8029CB98: jal         0x8028B950
    // 0x8029CB9C: addu        $a0, $t6, $s1
    ctx->r4 = ADD32(ctx->r14, ctx->r17);
    func_8028B950(rdram, ctx);
        goto after_56;
    // 0x8029CB9C: addu        $a0, $t6, $s1
    ctx->r4 = ADD32(ctx->r14, ctx->r17);
    after_56:
    // 0x8029CBA0: lui         $t9, 0xE00
    ctx->r25 = S32(0XE00 << 16);
    // 0x8029CBA4: addiu       $t9, $t9, 0x5770
    ctx->r25 = ADD32(ctx->r25, 0X5770);
    // 0x8029CBA8: and         $t7, $t9, $s0
    ctx->r15 = ctx->r25 & ctx->r16;
    // 0x8029CBAC: jal         0x8028B950
    // 0x8029CBB0: addu        $a0, $t7, $s1
    ctx->r4 = ADD32(ctx->r15, ctx->r17);
    func_8028B950(rdram, ctx);
        goto after_57;
    // 0x8029CBB0: addu        $a0, $t7, $s1
    ctx->r4 = ADD32(ctx->r15, ctx->r17);
    after_57:
    // 0x8029CBB4: jal         0x8029F548
    // 0x8029CBB8: nop

    func_8029F548(rdram, ctx);
        goto after_58;
    // 0x8029CBB8: nop

    after_58:
    // 0x8029CBBC: jal         0x802A0D44
    // 0x8029CBC0: nop

    func_802A0D44(rdram, ctx);
        goto after_59;
    // 0x8029CBC0: nop

    after_59:
    // 0x8029CBC4: lui         $v1, 0x8011
    ctx->r3 = S32(0X8011 << 16);
    // 0x8029CBC8: addiu       $v1, $v1, -0x2F98
    ctx->r3 = ADD32(ctx->r3, -0X2F98);
    // 0x8029CBCC: lw          $t8, 0x0($v1)
    ctx->r24 = MEM_W(ctx->r3, 0X0);
    // 0x8029CBD0: lui         $a0, 0x2
    ctx->r4 = S32(0X2 << 16);
    // 0x8029CBD4: ori         $a0, $a0, 0x8000
    ctx->r4 = ctx->r4 | 0X8000;
    // 0x8029CBD8: lui         $a1, 0x600
    ctx->r5 = S32(0X600 << 16);
    // 0x8029CBDC: addiu       $a1, $a1, 0x5820
    ctx->r5 = ADD32(ctx->r5, 0X5820);
    // 0x8029CBE0: addu        $t0, $t8, $a0
    ctx->r8 = ADD32(ctx->r24, ctx->r4);
    // 0x8029CBE4: sw          $a1, 0x1398($t0)
    MEM_W(0X1398, ctx->r8) = ctx->r5;
    // 0x8029CBE8: lw          $t4, 0x0($v1)
    ctx->r12 = MEM_W(ctx->r3, 0X0);
    // 0x8029CBEC: addiu       $t1, $zero, 0x2
    ctx->r9 = ADD32(0, 0X2);
    // 0x8029CBF0: addu        $t2, $t4, $a0
    ctx->r10 = ADD32(ctx->r12, ctx->r4);
    // 0x8029CBF4: lui         $v0, 0x802C
    ctx->r2 = S32(0X802C << 16);
    // 0x8029CBF8: sw          $t1, 0x139C($t2)
    MEM_W(0X139C, ctx->r10) = ctx->r9;
    // 0x8029CBFC: addiu       $v0, $v0, 0x3600
    ctx->r2 = ADD32(ctx->r2, 0X3600);
    // 0x8029CC00: lui         $t3, 0x600
    ctx->r11 = S32(0X600 << 16);
    // 0x8029CC04: lui         $t5, 0x600
    ctx->r13 = S32(0X600 << 16);
    // 0x8029CC08: lui         $t6, 0x600
    ctx->r14 = S32(0X600 << 16);
    // 0x8029CC0C: lui         $t9, 0x601
    ctx->r25 = S32(0X601 << 16);
    // 0x8029CC10: lui         $t7, 0x601
    ctx->r15 = S32(0X601 << 16);
    // 0x8029CC14: lui         $t8, 0x601
    ctx->r24 = S32(0X601 << 16);
    // 0x8029CC18: lui         $t0, 0x601
    ctx->r8 = S32(0X601 << 16);
    // 0x8029CC1C: lui         $t4, 0x601
    ctx->r12 = S32(0X601 << 16);
    // 0x8029CC20: addiu       $t3, $t3, 0x56C0
    ctx->r11 = ADD32(ctx->r11, 0X56C0);
    // 0x8029CC24: addiu       $t5, $t5, 0x6E58
    ctx->r13 = ADD32(ctx->r13, 0X6E58);
    // 0x8029CC28: addiu       $t6, $t6, 0x7878
    ctx->r14 = ADD32(ctx->r14, 0X7878);
    // 0x8029CC2C: addiu       $t9, $t9, -0x7D30
    ctx->r25 = ADD32(ctx->r25, -0X7D30);
    // 0x8029CC30: addiu       $t7, $t7, -0x7270
    ctx->r15 = ADD32(ctx->r15, -0X7270);
    // 0x8029CC34: addiu       $t8, $t8, -0x67B0
    ctx->r24 = ADD32(ctx->r24, -0X67B0);
    // 0x8029CC38: addiu       $t0, $t0, -0x5D58
    ctx->r8 = ADD32(ctx->r8, -0X5D58);
    // 0x8029CC3C: addiu       $t4, $t4, -0x5338
    ctx->r12 = ADD32(ctx->r12, -0X5338);
    // 0x8029CC40: sw          $t3, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r11;
    // 0x8029CC44: sw          $t5, 0xC($v0)
    MEM_W(0XC, ctx->r2) = ctx->r13;
    // 0x8029CC48: sw          $t6, 0x14($v0)
    MEM_W(0X14, ctx->r2) = ctx->r14;
    // 0x8029CC4C: sw          $t9, 0x1C($v0)
    MEM_W(0X1C, ctx->r2) = ctx->r25;
    // 0x8029CC50: sw          $t7, 0x24($v0)
    MEM_W(0X24, ctx->r2) = ctx->r15;
    // 0x8029CC54: sw          $t8, 0x2C($v0)
    MEM_W(0X2C, ctx->r2) = ctx->r24;
    // 0x8029CC58: sw          $t0, 0x34($v0)
    MEM_W(0X34, ctx->r2) = ctx->r8;
    // 0x8029CC5C: sw          $t4, 0x3C($v0)
    MEM_W(0X3C, ctx->r2) = ctx->r12;
    // 0x8029CC60: lui         $t1, 0x8009
    ctx->r9 = S32(0X8009 << 16);
    // 0x8029CC64: lw          $t1, 0x68E0($t1)
    ctx->r9 = MEM_W(ctx->r9, 0X68E0);
    // 0x8029CC68: lui         $t4, 0x600
    ctx->r12 = S32(0X600 << 16);
    // 0x8029CC6C: beq         $t1, $zero, L_8029CCD4
    if (ctx->r9 == 0) {
        // 0x8029CC70: addiu       $t4, $t4, 0x6F88
        ctx->r12 = ADD32(ctx->r12, 0X6F88);
            goto L_8029CCD4;
    }
    // 0x8029CC70: addiu       $t4, $t4, 0x6F88
    ctx->r12 = ADD32(ctx->r12, 0X6F88);
    // 0x8029CC74: lui         $t2, 0xA00
    ctx->r10 = S32(0XA00 << 16);
    // 0x8029CC78: lui         $t3, 0xA00
    ctx->r11 = S32(0XA00 << 16);
    // 0x8029CC7C: lui         $t5, 0xA00
    ctx->r13 = S32(0XA00 << 16);
    // 0x8029CC80: lui         $t6, 0xA00
    ctx->r14 = S32(0XA00 << 16);
    // 0x8029CC84: lui         $t9, 0xA00
    ctx->r25 = S32(0XA00 << 16);
    // 0x8029CC88: lui         $t7, 0xA00
    ctx->r15 = S32(0XA00 << 16);
    // 0x8029CC8C: lui         $t8, 0xA00
    ctx->r24 = S32(0XA00 << 16);
    // 0x8029CC90: lui         $t0, 0xA00
    ctx->r8 = S32(0XA00 << 16);
    // 0x8029CC94: addiu       $t2, $t2, 0x4660
    ctx->r10 = ADD32(ctx->r10, 0X4660);
    // 0x8029CC98: addiu       $t3, $t3, 0x4758
    ctx->r11 = ADD32(ctx->r11, 0X4758);
    // 0x8029CC9C: addiu       $t5, $t5, 0x4850
    ctx->r13 = ADD32(ctx->r13, 0X4850);
    // 0x8029CCA0: addiu       $t6, $t6, 0x4948
    ctx->r14 = ADD32(ctx->r14, 0X4948);
    // 0x8029CCA4: addiu       $t9, $t9, 0x4A40
    ctx->r25 = ADD32(ctx->r25, 0X4A40);
    // 0x8029CCA8: addiu       $t7, $t7, 0x4B38
    ctx->r15 = ADD32(ctx->r15, 0X4B38);
    // 0x8029CCAC: addiu       $t8, $t8, 0x4C30
    ctx->r24 = ADD32(ctx->r24, 0X4C30);
    // 0x8029CCB0: addiu       $t0, $t0, 0x4D28
    ctx->r8 = ADD32(ctx->r8, 0X4D28);
    // 0x8029CCB4: sw          $t2, 0x84($v0)
    MEM_W(0X84, ctx->r2) = ctx->r10;
    // 0x8029CCB8: sw          $t3, 0x8C($v0)
    MEM_W(0X8C, ctx->r2) = ctx->r11;
    // 0x8029CCBC: sw          $t5, 0x94($v0)
    MEM_W(0X94, ctx->r2) = ctx->r13;
    // 0x8029CCC0: sw          $t6, 0x9C($v0)
    MEM_W(0X9C, ctx->r2) = ctx->r14;
    // 0x8029CCC4: sw          $t9, 0xA4($v0)
    MEM_W(0XA4, ctx->r2) = ctx->r25;
    // 0x8029CCC8: sw          $t7, 0xAC($v0)
    MEM_W(0XAC, ctx->r2) = ctx->r15;
    // 0x8029CCCC: sw          $t8, 0xB4($v0)
    MEM_W(0XB4, ctx->r2) = ctx->r24;
    // 0x8029CCD0: sw          $t0, 0xBC($v0)
    MEM_W(0XBC, ctx->r2) = ctx->r8;
L_8029CCD4:
    // 0x8029CCD4: lui         $t1, 0x600
    ctx->r9 = S32(0X600 << 16);
    // 0x8029CCD8: addiu       $t1, $t1, 0x79A8
    ctx->r9 = ADD32(ctx->r9, 0X79A8);
    // 0x8029CCDC: sw          $t4, 0xCC($v0)
    MEM_W(0XCC, ctx->r2) = ctx->r12;
    // 0x8029CCE0: sw          $t1, 0xD4($v0)
    MEM_W(0XD4, ctx->r2) = ctx->r9;
    // 0x8029CCE4: lui         $t2, 0x601
    ctx->r10 = S32(0X601 << 16);
    // 0x8029CCE8: lui         $t3, 0x601
    ctx->r11 = S32(0X601 << 16);
    // 0x8029CCEC: lui         $t5, 0x601
    ctx->r13 = S32(0X601 << 16);
    // 0x8029CCF0: lui         $t6, 0x601
    ctx->r14 = S32(0X601 << 16);
    // 0x8029CCF4: lui         $t9, 0x601
    ctx->r25 = S32(0X601 << 16);
    // 0x8029CCF8: lui         $t7, 0x600
    ctx->r15 = S32(0X600 << 16);
    // 0x8029CCFC: lui         $t8, 0x600
    ctx->r24 = S32(0X600 << 16);
    // 0x8029CD00: lui         $t0, 0x600
    ctx->r8 = S32(0X600 << 16);
    // 0x8029CD04: lui         $t4, 0x601
    ctx->r12 = S32(0X601 << 16);
    // 0x8029CD08: lui         $t1, 0x601
    ctx->r9 = S32(0X601 << 16);
    // 0x8029CD0C: addiu       $t2, $t2, -0x7C00
    ctx->r10 = ADD32(ctx->r10, -0X7C00);
    // 0x8029CD10: addiu       $t3, $t3, -0x7140
    ctx->r11 = ADD32(ctx->r11, -0X7140);
    // 0x8029CD14: addiu       $t5, $t5, -0x6680
    ctx->r13 = ADD32(ctx->r13, -0X6680);
    // 0x8029CD18: addiu       $t6, $t6, -0x5C28
    ctx->r14 = ADD32(ctx->r14, -0X5C28);
    // 0x8029CD1C: addiu       $t9, $t9, -0x51D8
    ctx->r25 = ADD32(ctx->r25, -0X51D8);
    // 0x8029CD20: addiu       $t7, $t7, 0x5ED8
    ctx->r15 = ADD32(ctx->r15, 0X5ED8);
    // 0x8029CD24: addiu       $t8, $t8, 0x7298
    ctx->r24 = ADD32(ctx->r24, 0X7298);
    // 0x8029CD28: addiu       $t0, $t0, 0x7CB8
    ctx->r8 = ADD32(ctx->r8, 0X7CB8);
    // 0x8029CD2C: addiu       $t4, $t4, -0x78F0
    ctx->r12 = ADD32(ctx->r12, -0X78F0);
    // 0x8029CD30: addiu       $t1, $t1, -0x6E30
    ctx->r9 = ADD32(ctx->r9, -0X6E30);
    // 0x8029CD34: sw          $t2, 0xDC($v0)
    MEM_W(0XDC, ctx->r2) = ctx->r10;
    // 0x8029CD38: sw          $t3, 0xE4($v0)
    MEM_W(0XE4, ctx->r2) = ctx->r11;
    // 0x8029CD3C: sw          $t5, 0xEC($v0)
    MEM_W(0XEC, ctx->r2) = ctx->r13;
    // 0x8029CD40: sw          $t6, 0xF4($v0)
    MEM_W(0XF4, ctx->r2) = ctx->r14;
    // 0x8029CD44: sw          $t9, 0xFC($v0)
    MEM_W(0XFC, ctx->r2) = ctx->r25;
    // 0x8029CD48: sw          $t7, 0x104($v0)
    MEM_W(0X104, ctx->r2) = ctx->r15;
    // 0x8029CD4C: sw          $t8, 0x10C($v0)
    MEM_W(0X10C, ctx->r2) = ctx->r24;
    // 0x8029CD50: sw          $t0, 0x114($v0)
    MEM_W(0X114, ctx->r2) = ctx->r8;
    // 0x8029CD54: sw          $t4, 0x11C($v0)
    MEM_W(0X11C, ctx->r2) = ctx->r12;
    // 0x8029CD58: sw          $t1, 0x124($v0)
    MEM_W(0X124, ctx->r2) = ctx->r9;
    // 0x8029CD5C: lui         $t2, 0x601
    ctx->r10 = S32(0X601 << 16);
    // 0x8029CD60: lui         $t3, 0x601
    ctx->r11 = S32(0X601 << 16);
    // 0x8029CD64: lui         $t5, 0x601
    ctx->r13 = S32(0X601 << 16);
    // 0x8029CD68: lui         $t6, 0x600
    ctx->r14 = S32(0X600 << 16);
    // 0x8029CD6C: lui         $t9, 0x600
    ctx->r25 = S32(0X600 << 16);
    // 0x8029CD70: lui         $t7, 0x601
    ctx->r15 = S32(0X601 << 16);
    // 0x8029CD74: lui         $t8, 0x601
    ctx->r24 = S32(0X601 << 16);
    // 0x8029CD78: lui         $t0, 0x601
    ctx->r8 = S32(0X601 << 16);
    // 0x8029CD7C: lui         $t4, 0x601
    ctx->r12 = S32(0X601 << 16);
    // 0x8029CD80: lui         $t1, 0x601
    ctx->r9 = S32(0X601 << 16);
    // 0x8029CD84: addiu       $t2, $t2, -0x6370
    ctx->r10 = ADD32(ctx->r10, -0X6370);
    // 0x8029CD88: addiu       $t3, $t3, -0x5918
    ctx->r11 = ADD32(ctx->r11, -0X5918);
    // 0x8029CD8C: addiu       $t5, $t5, -0x4A08
    ctx->r13 = ADD32(ctx->r13, -0X4A08);
    // 0x8029CD90: addiu       $t6, $t6, 0x6498
    ctx->r14 = ADD32(ctx->r14, 0X6498);
    // 0x8029CD94: addiu       $t9, $t9, 0x75A8
    ctx->r25 = ADD32(ctx->r25, 0X75A8);
    // 0x8029CD98: addiu       $t7, $t7, -0x8000
    ctx->r15 = ADD32(ctx->r15, -0X8000);
    // 0x8029CD9C: addiu       $t8, $t8, -0x7540
    ctx->r24 = ADD32(ctx->r24, -0X7540);
    // 0x8029CDA0: addiu       $t0, $t0, -0x6A80
    ctx->r8 = ADD32(ctx->r8, -0X6A80);
    // 0x8029CDA4: addiu       $t4, $t4, -0x6028
    ctx->r12 = ADD32(ctx->r12, -0X6028);
    // 0x8029CDA8: addiu       $t1, $t1, -0x5608
    ctx->r9 = ADD32(ctx->r9, -0X5608);
    // 0x8029CDAC: sw          $t2, 0x12C($v0)
    MEM_W(0X12C, ctx->r2) = ctx->r10;
    // 0x8029CDB0: sw          $t3, 0x134($v0)
    MEM_W(0X134, ctx->r2) = ctx->r11;
    // 0x8029CDB4: sw          $t5, 0x13C($v0)
    MEM_W(0X13C, ctx->r2) = ctx->r13;
    // 0x8029CDB8: sw          $t6, 0x144($v0)
    MEM_W(0X144, ctx->r2) = ctx->r14;
    // 0x8029CDBC: sw          $t9, 0x14C($v0)
    MEM_W(0X14C, ctx->r2) = ctx->r25;
    // 0x8029CDC0: sw          $t7, 0x154($v0)
    MEM_W(0X154, ctx->r2) = ctx->r15;
    // 0x8029CDC4: sw          $t8, 0x15C($v0)
    MEM_W(0X15C, ctx->r2) = ctx->r24;
    // 0x8029CDC8: sw          $t0, 0x164($v0)
    MEM_W(0X164, ctx->r2) = ctx->r8;
    // 0x8029CDCC: sw          $t4, 0x16C($v0)
    MEM_W(0X16C, ctx->r2) = ctx->r12;
    // 0x8029CDD0: sw          $t1, 0x174($v0)
    MEM_W(0X174, ctx->r2) = ctx->r9;
    // 0x8029CDD4: lui         $t2, 0x601
    ctx->r10 = S32(0X601 << 16);
    // 0x8029CDD8: lui         $t3, 0x600
    ctx->r11 = S32(0X600 << 16);
    // 0x8029CDDC: lui         $t5, 0xE00
    ctx->r13 = S32(0XE00 << 16);
    // 0x8029CDE0: lui         $t6, 0xE00
    ctx->r14 = S32(0XE00 << 16);
    // 0x8029CDE4: lui         $t9, 0xE00
    ctx->r25 = S32(0XE00 << 16);
    // 0x8029CDE8: lui         $t7, 0xE00
    ctx->r15 = S32(0XE00 << 16);
    // 0x8029CDEC: lui         $t8, 0xE00
    ctx->r24 = S32(0XE00 << 16);
    // 0x8029CDF0: lui         $t0, 0xE00
    ctx->r8 = S32(0XE00 << 16);
    // 0x8029CDF4: lui         $t4, 0xE00
    ctx->r12 = S32(0XE00 << 16);
    // 0x8029CDF8: lui         $t1, 0xE00
    ctx->r9 = S32(0XE00 << 16);
    // 0x8029CDFC: addiu       $t2, $t2, -0x43B0
    ctx->r10 = ADD32(ctx->r10, -0X43B0);
    // 0x8029CE00: addiu       $t3, $t3, 0x6B20
    ctx->r11 = ADD32(ctx->r11, 0X6B20);
    // 0x8029CE04: addiu       $t5, $t5, 0x20F0
    ctx->r13 = ADD32(ctx->r13, 0X20F0);
    // 0x8029CE08: addiu       $t6, $t6, 0x5988
    ctx->r14 = ADD32(ctx->r14, 0X5988);
    // 0x8029CE0C: addiu       $t9, $t9, 0x1CC0
    ctx->r25 = ADD32(ctx->r25, 0X1CC0);
    // 0x8029CE10: addiu       $t7, $t7, 0x2F38
    ctx->r15 = ADD32(ctx->r15, 0X2F38);
    // 0x8029CE14: addiu       $t8, $t8, 0x3438
    ctx->r24 = ADD32(ctx->r24, 0X3438);
    // 0x8029CE18: addiu       $t0, $t0, 0x3938
    ctx->r8 = ADD32(ctx->r8, 0X3938);
    // 0x8029CE1C: addiu       $t4, $t4, 0x4248
    ctx->r12 = ADD32(ctx->r12, 0X4248);
    // 0x8029CE20: addiu       $t1, $t1, 0x4A88
    ctx->r9 = ADD32(ctx->r9, 0X4A88);
    // 0x8029CE24: sw          $t2, 0x17C($v0)
    MEM_W(0X17C, ctx->r2) = ctx->r10;
    // 0x8029CE28: sw          $t3, 0x184($v0)
    MEM_W(0X184, ctx->r2) = ctx->r11;
    // 0x8029CE2C: sw          $t5, 0x194($v0)
    MEM_W(0X194, ctx->r2) = ctx->r13;
    // 0x8029CE30: sw          $t6, 0x19C($v0)
    MEM_W(0X19C, ctx->r2) = ctx->r14;
    // 0x8029CE34: sw          $t9, 0x1A4($v0)
    MEM_W(0X1A4, ctx->r2) = ctx->r25;
    // 0x8029CE38: sw          $t7, 0x1AC($v0)
    MEM_W(0X1AC, ctx->r2) = ctx->r15;
    // 0x8029CE3C: sw          $t8, 0x1B4($v0)
    MEM_W(0X1B4, ctx->r2) = ctx->r24;
    // 0x8029CE40: sw          $t0, 0x1BC($v0)
    MEM_W(0X1BC, ctx->r2) = ctx->r8;
    // 0x8029CE44: sw          $t4, 0x1C4($v0)
    MEM_W(0X1C4, ctx->r2) = ctx->r12;
    // 0x8029CE48: sw          $t1, 0x1CC($v0)
    MEM_W(0X1CC, ctx->r2) = ctx->r9;
    // 0x8029CE4C: lui         $t2, 0xE00
    ctx->r10 = S32(0XE00 << 16);
    // 0x8029CE50: lui         $t3, 0xE00
    ctx->r11 = S32(0XE00 << 16);
    // 0x8029CE54: lui         $t5, 0xE00
    ctx->r13 = S32(0XE00 << 16);
    // 0x8029CE58: lui         $t6, 0xE00
    ctx->r14 = S32(0XE00 << 16);
    // 0x8029CE5C: lui         $t9, 0xE00
    ctx->r25 = S32(0XE00 << 16);
    // 0x8029CE60: lui         $t7, 0xE00
    ctx->r15 = S32(0XE00 << 16);
    // 0x8029CE64: lui         $t8, 0xE00
    ctx->r24 = S32(0XE00 << 16);
    // 0x8029CE68: lui         $t0, 0xE00
    ctx->r8 = S32(0XE00 << 16);
    // 0x8029CE6C: lui         $t4, 0xE00
    ctx->r12 = S32(0XE00 << 16);
    // 0x8029CE70: lui         $t1, 0xE00
    ctx->r9 = S32(0XE00 << 16);
    // 0x8029CE74: addiu       $t2, $t2, 0x4EB8
    ctx->r10 = ADD32(ctx->r10, 0X4EB8);
    // 0x8029CE78: addiu       $t3, $t3, 0x5558
    ctx->r11 = ADD32(ctx->r11, 0X5558);
    // 0x8029CE7C: addiu       $t5, $t5, 0x1ED8
    ctx->r13 = ADD32(ctx->r13, 0X1ED8);
    // 0x8029CE80: addiu       $t6, $t6, 0x3150
    ctx->r14 = ADD32(ctx->r14, 0X3150);
    // 0x8029CE84: addiu       $t9, $t9, 0x3720
    ctx->r25 = ADD32(ctx->r25, 0X3720);
    // 0x8029CE88: addiu       $t7, $t7, 0x3DC0
    ctx->r15 = ADD32(ctx->r15, 0X3DC0);
    // 0x8029CE8C: addiu       $t8, $t8, 0x46D0
    ctx->r24 = ADD32(ctx->r24, 0X46D0);
    // 0x8029CE90: addiu       $t0, $t0, 0x4CA0
    ctx->r8 = ADD32(ctx->r8, 0X4CA0);
    // 0x8029CE94: addiu       $t4, $t4, 0x51A0
    ctx->r12 = ADD32(ctx->r12, 0X51A0);
    // 0x8029CE98: addiu       $t1, $t1, 0x5770
    ctx->r9 = ADD32(ctx->r9, 0X5770);
    // 0x8029CE9C: sw          $a1, 0xC4($v0)
    MEM_W(0XC4, ctx->r2) = ctx->r5;
    // 0x8029CEA0: sw          $t2, 0x1D4($v0)
    MEM_W(0X1D4, ctx->r2) = ctx->r10;
    // 0x8029CEA4: sw          $t3, 0x1DC($v0)
    MEM_W(0X1DC, ctx->r2) = ctx->r11;
    // 0x8029CEA8: sw          $t5, 0x1E4($v0)
    MEM_W(0X1E4, ctx->r2) = ctx->r13;
    // 0x8029CEAC: sw          $t6, 0x1EC($v0)
    MEM_W(0X1EC, ctx->r2) = ctx->r14;
    // 0x8029CEB0: sw          $t9, 0x1F4($v0)
    MEM_W(0X1F4, ctx->r2) = ctx->r25;
    // 0x8029CEB4: sw          $t7, 0x1FC($v0)
    MEM_W(0X1FC, ctx->r2) = ctx->r15;
    // 0x8029CEB8: sw          $t8, 0x204($v0)
    MEM_W(0X204, ctx->r2) = ctx->r24;
    // 0x8029CEBC: sw          $t0, 0x20C($v0)
    MEM_W(0X20C, ctx->r2) = ctx->r8;
    // 0x8029CEC0: sw          $t4, 0x214($v0)
    MEM_W(0X214, ctx->r2) = ctx->r12;
    // 0x8029CEC4: jal         0x8029F758
    // 0x8029CEC8: sw          $t1, 0x21C($v0)
    MEM_W(0X21C, ctx->r2) = ctx->r9;
    func_8029F758(rdram, ctx);
        goto after_60;
    // 0x8029CEC8: sw          $t1, 0x21C($v0)
    MEM_W(0X21C, ctx->r2) = ctx->r9;
    after_60:
    // 0x8029CECC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8029CED0: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x8029CED4: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x8029CED8: jr          $ra
    // 0x8029CEDC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x8029CEDC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_8029CEE0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8029CEE0: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8029CEE4: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8029CEE8: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x8029CEEC: jal         0x8028BD18
    // 0x8029CEF0: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    func_8028BD18(rdram, ctx);
        goto after_0;
    // 0x8029CEF0: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    after_0:
    // 0x8029CEF4: jal         0x802A10D8
    // 0x8029CEF8: nop

    func_802A10D8(rdram, ctx);
        goto after_1;
    // 0x8029CEF8: nop

    after_1:
    // 0x8029CEFC: lui         $t6, 0x8012
    ctx->r14 = S32(0X8012 << 16);
    // 0x8029CF00: lb          $t6, -0x309C($t6)
    ctx->r14 = MEM_B(ctx->r14, -0X309C);
    // 0x8029CF04: nop

    // 0x8029CF08: bne         $t6, $zero, L_8029CF58
    if (ctx->r14 != 0) {
        // 0x8029CF0C: lui         $v0, 0x802C
        ctx->r2 = S32(0X802C << 16);
            goto L_8029CF58;
    }
    // 0x8029CF0C: lui         $v0, 0x802C
    ctx->r2 = S32(0X802C << 16);
    // 0x8029CF10: addiu       $v0, $v0, 0x3B30
    ctx->r2 = ADD32(ctx->r2, 0X3B30);
    // 0x8029CF14: lw          $a2, 0x0($v0)
    ctx->r6 = MEM_W(ctx->r2, 0X0);
    // 0x8029CF18: lui         $a3, 0x802C
    ctx->r7 = S32(0X802C << 16);
    // 0x8029CF1C: addiu       $a3, $a3, 0x3B08
    ctx->r7 = ADD32(ctx->r7, 0X3B08);
    // 0x8029CF20: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x8029CF24: jal         0x8028BB94
    // 0x8029CF28: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    func_8028BB94(rdram, ctx);
        goto after_2;
    // 0x8029CF28: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    after_2:
    // 0x8029CF2C: lui         $v0, 0x802C
    ctx->r2 = S32(0X802C << 16);
    // 0x8029CF30: addiu       $v0, $v0, 0x3B30
    ctx->r2 = ADD32(ctx->r2, 0X3B30);
    // 0x8029CF34: lui         $t8, 0x600
    ctx->r24 = S32(0X600 << 16);
    // 0x8029CF38: lui         $t9, 0x600
    ctx->r25 = S32(0X600 << 16);
    // 0x8029CF3C: lw          $t7, 0x0($v0)
    ctx->r15 = MEM_W(ctx->r2, 0X0);
    // 0x8029CF40: addiu       $t9, $t9, 0x0
    ctx->r25 = ADD32(ctx->r25, 0X0);
    // 0x8029CF44: addiu       $t8, $t8, 0x800
    ctx->r24 = ADD32(ctx->r24, 0X800);
    // 0x8029CF48: subu        $t0, $t8, $t9
    ctx->r8 = SUB32(ctx->r24, ctx->r25);
    // 0x8029CF4C: addu        $t1, $t7, $t0
    ctx->r9 = ADD32(ctx->r15, ctx->r8);
    // 0x8029CF50: b           L_8029CFA0
    // 0x8029CF54: sw          $t1, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r9;
        goto L_8029CFA0;
    // 0x8029CF54: sw          $t1, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r9;
L_8029CF58:
    // 0x8029CF58: lui         $v0, 0x802C
    ctx->r2 = S32(0X802C << 16);
    // 0x8029CF5C: addiu       $v0, $v0, 0x3B30
    ctx->r2 = ADD32(ctx->r2, 0X3B30);
    // 0x8029CF60: lw          $a2, 0x0($v0)
    ctx->r6 = MEM_W(ctx->r2, 0X0);
    // 0x8029CF64: lui         $a3, 0x802C
    ctx->r7 = S32(0X802C << 16);
    // 0x8029CF68: addiu       $a3, $a3, 0x3B08
    ctx->r7 = ADD32(ctx->r7, 0X3B08);
    // 0x8029CF6C: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x8029CF70: jal         0x8028BB94
    // 0x8029CF74: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    func_8028BB94(rdram, ctx);
        goto after_3;
    // 0x8029CF74: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    after_3:
    // 0x8029CF78: lui         $v0, 0x802C
    ctx->r2 = S32(0X802C << 16);
    // 0x8029CF7C: addiu       $v0, $v0, 0x3B30
    ctx->r2 = ADD32(ctx->r2, 0X3B30);
    // 0x8029CF80: lui         $t3, 0x600
    ctx->r11 = S32(0X600 << 16);
    // 0x8029CF84: lui         $t4, 0x600
    ctx->r12 = S32(0X600 << 16);
    // 0x8029CF88: lw          $t2, 0x0($v0)
    ctx->r10 = MEM_W(ctx->r2, 0X0);
    // 0x8029CF8C: addiu       $t4, $t4, 0x0
    ctx->r12 = ADD32(ctx->r12, 0X0);
    // 0x8029CF90: addiu       $t3, $t3, 0x800
    ctx->r11 = ADD32(ctx->r11, 0X800);
    // 0x8029CF94: subu        $t5, $t3, $t4
    ctx->r13 = SUB32(ctx->r11, ctx->r12);
    // 0x8029CF98: addu        $t6, $t2, $t5
    ctx->r14 = ADD32(ctx->r10, ctx->r13);
    // 0x8029CF9C: sw          $t6, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r14;
L_8029CFA0:
    // 0x8029CFA0: jal         0x802A1190
    // 0x8029CFA4: nop

    func_802A1190(rdram, ctx);
        goto after_4;
    // 0x8029CFA4: nop

    after_4:
    // 0x8029CFA8: lui         $v0, 0x802C
    ctx->r2 = S32(0X802C << 16);
    // 0x8029CFAC: addiu       $v0, $v0, 0x3B30
    ctx->r2 = ADD32(ctx->r2, 0X3B30);
    // 0x8029CFB0: lw          $a1, 0x0($v0)
    ctx->r5 = MEM_W(ctx->r2, 0X0);
    // 0x8029CFB4: lui         $a2, 0x802C
    ctx->r6 = S32(0X802C << 16);
    // 0x8029CFB8: addiu       $a2, $a2, 0x3B10
    ctx->r6 = ADD32(ctx->r6, 0X3B10);
    // 0x8029CFBC: jal         0x8028BB68
    // 0x8029CFC0: addiu       $a0, $zero, 0x1A
    ctx->r4 = ADD32(0, 0X1A);
    func_8028BB68(rdram, ctx);
        goto after_5;
    // 0x8029CFC0: addiu       $a0, $zero, 0x1A
    ctx->r4 = ADD32(0, 0X1A);
    after_5:
    // 0x8029CFC4: lui         $v0, 0x802C
    ctx->r2 = S32(0X802C << 16);
    // 0x8029CFC8: addiu       $v0, $v0, 0x3B30
    ctx->r2 = ADD32(ctx->r2, 0X3B30);
    // 0x8029CFCC: lui         $t9, 0x601
    ctx->r25 = S32(0X601 << 16);
    // 0x8029CFD0: lui         $t7, 0x600
    ctx->r15 = S32(0X600 << 16);
    // 0x8029CFD4: lw          $t8, 0x0($v0)
    ctx->r24 = MEM_W(ctx->r2, 0X0);
    // 0x8029CFD8: addiu       $t7, $t7, 0x0
    ctx->r15 = ADD32(ctx->r15, 0X0);
    // 0x8029CFDC: addiu       $t9, $t9, 0x2900
    ctx->r25 = ADD32(ctx->r25, 0X2900);
    // 0x8029CFE0: subu        $t0, $t9, $t7
    ctx->r8 = SUB32(ctx->r25, ctx->r15);
    // 0x8029CFE4: lui         $a2, 0x802C
    ctx->r6 = S32(0X802C << 16);
    // 0x8029CFE8: addu        $a1, $t8, $t0
    ctx->r5 = ADD32(ctx->r24, ctx->r8);
    // 0x8029CFEC: sw          $a1, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r5;
    // 0x8029CFF0: addiu       $a2, $a2, 0x3B18
    ctx->r6 = ADD32(ctx->r6, 0X3B18);
    // 0x8029CFF4: jal         0x8028BB68
    // 0x8029CFF8: addiu       $a0, $zero, 0x1C
    ctx->r4 = ADD32(0, 0X1C);
    func_8028BB68(rdram, ctx);
        goto after_6;
    // 0x8029CFF8: addiu       $a0, $zero, 0x1C
    ctx->r4 = ADD32(0, 0X1C);
    after_6:
    // 0x8029CFFC: lui         $v0, 0x802C
    ctx->r2 = S32(0X802C << 16);
    // 0x8029D000: addiu       $v0, $v0, 0x3B30
    ctx->r2 = ADD32(ctx->r2, 0X3B30);
    // 0x8029D004: lui         $t4, 0x600
    ctx->r12 = S32(0X600 << 16);
    // 0x8029D008: lui         $t2, 0x600
    ctx->r10 = S32(0X600 << 16);
    // 0x8029D00C: lw          $t3, 0x0($v0)
    ctx->r11 = MEM_W(ctx->r2, 0X0);
    // 0x8029D010: lui         $s0, 0xF
    ctx->r16 = S32(0XF << 16);
    // 0x8029D014: addiu       $t2, $t2, 0x0
    ctx->r10 = ADD32(ctx->r10, 0X0);
    // 0x8029D018: addiu       $t4, $t4, 0x58C0
    ctx->r12 = ADD32(ctx->r12, 0X58C0);
    // 0x8029D01C: lui         $t9, 0x600
    ctx->r25 = S32(0X600 << 16);
    // 0x8029D020: ori         $s0, $s0, 0xFFFF
    ctx->r16 = ctx->r16 | 0XFFFF;
    // 0x8029D024: lui         $s1, 0x803A
    ctx->r17 = S32(0X803A << 16);
    // 0x8029D028: subu        $t5, $t4, $t2
    ctx->r13 = SUB32(ctx->r12, ctx->r10);
    // 0x8029D02C: addiu       $t9, $t9, 0x5A00
    ctx->r25 = ADD32(ctx->r25, 0X5A00);
    // 0x8029D030: ori         $s1, $s1, 0xDA00
    ctx->r17 = ctx->r17 | 0XDA00;
    // 0x8029D034: and         $t7, $t9, $s0
    ctx->r15 = ctx->r25 & ctx->r16;
    // 0x8029D038: addu        $t6, $t3, $t5
    ctx->r14 = ADD32(ctx->r11, ctx->r13);
    // 0x8029D03C: sw          $t6, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r14;
    // 0x8029D040: jal         0x8028B950
    // 0x8029D044: addu        $a0, $t7, $s1
    ctx->r4 = ADD32(ctx->r15, ctx->r17);
    func_8028B950(rdram, ctx);
        goto after_7;
    // 0x8029D044: addu        $a0, $t7, $s1
    ctx->r4 = ADD32(ctx->r15, ctx->r17);
    after_7:
    // 0x8029D048: lui         $t8, 0x600
    ctx->r24 = S32(0X600 << 16);
    // 0x8029D04C: addiu       $t8, $t8, 0x76B0
    ctx->r24 = ADD32(ctx->r24, 0X76B0);
    // 0x8029D050: and         $t0, $t8, $s0
    ctx->r8 = ctx->r24 & ctx->r16;
    // 0x8029D054: jal         0x8028B950
    // 0x8029D058: addu        $a0, $t0, $s1
    ctx->r4 = ADD32(ctx->r8, ctx->r17);
    func_8028B950(rdram, ctx);
        goto after_8;
    // 0x8029D058: addu        $a0, $t0, $s1
    ctx->r4 = ADD32(ctx->r8, ctx->r17);
    after_8:
    // 0x8029D05C: lui         $t1, 0x600
    ctx->r9 = S32(0X600 << 16);
    // 0x8029D060: addiu       $t1, $t1, 0x7E00
    ctx->r9 = ADD32(ctx->r9, 0X7E00);
    // 0x8029D064: and         $t4, $t1, $s0
    ctx->r12 = ctx->r9 & ctx->r16;
    // 0x8029D068: jal         0x8028B950
    // 0x8029D06C: addu        $a0, $t4, $s1
    ctx->r4 = ADD32(ctx->r12, ctx->r17);
    func_8028B950(rdram, ctx);
        goto after_9;
    // 0x8029D06C: addu        $a0, $t4, $s1
    ctx->r4 = ADD32(ctx->r12, ctx->r17);
    after_9:
    // 0x8029D070: lui         $t2, 0x601
    ctx->r10 = S32(0X601 << 16);
    // 0x8029D074: addiu       $t2, $t2, -0x7990
    ctx->r10 = ADD32(ctx->r10, -0X7990);
    // 0x8029D078: and         $t3, $t2, $s0
    ctx->r11 = ctx->r10 & ctx->r16;
    // 0x8029D07C: jal         0x8028B950
    // 0x8029D080: addu        $a0, $t3, $s1
    ctx->r4 = ADD32(ctx->r11, ctx->r17);
    func_8028B950(rdram, ctx);
        goto after_10;
    // 0x8029D080: addu        $a0, $t3, $s1
    ctx->r4 = ADD32(ctx->r11, ctx->r17);
    after_10:
    // 0x8029D084: lui         $t5, 0x601
    ctx->r13 = S32(0X601 << 16);
    // 0x8029D088: addiu       $t5, $t5, -0x71B0
    ctx->r13 = ADD32(ctx->r13, -0X71B0);
    // 0x8029D08C: and         $t6, $t5, $s0
    ctx->r14 = ctx->r13 & ctx->r16;
    // 0x8029D090: jal         0x8028B950
    // 0x8029D094: addu        $a0, $t6, $s1
    ctx->r4 = ADD32(ctx->r14, ctx->r17);
    func_8028B950(rdram, ctx);
        goto after_11;
    // 0x8029D094: addu        $a0, $t6, $s1
    ctx->r4 = ADD32(ctx->r14, ctx->r17);
    after_11:
    // 0x8029D098: lui         $t9, 0x601
    ctx->r25 = S32(0X601 << 16);
    // 0x8029D09C: addiu       $t9, $t9, -0x69D0
    ctx->r25 = ADD32(ctx->r25, -0X69D0);
    // 0x8029D0A0: and         $t7, $t9, $s0
    ctx->r15 = ctx->r25 & ctx->r16;
    // 0x8029D0A4: jal         0x8028B950
    // 0x8029D0A8: addu        $a0, $t7, $s1
    ctx->r4 = ADD32(ctx->r15, ctx->r17);
    func_8028B950(rdram, ctx);
        goto after_12;
    // 0x8029D0A8: addu        $a0, $t7, $s1
    ctx->r4 = ADD32(ctx->r15, ctx->r17);
    after_12:
    // 0x8029D0AC: lui         $t8, 0x601
    ctx->r24 = S32(0X601 << 16);
    // 0x8029D0B0: addiu       $t8, $t8, -0x6160
    ctx->r24 = ADD32(ctx->r24, -0X6160);
    // 0x8029D0B4: and         $t0, $t8, $s0
    ctx->r8 = ctx->r24 & ctx->r16;
    // 0x8029D0B8: jal         0x8028B950
    // 0x8029D0BC: addu        $a0, $t0, $s1
    ctx->r4 = ADD32(ctx->r8, ctx->r17);
    func_8028B950(rdram, ctx);
        goto after_13;
    // 0x8029D0BC: addu        $a0, $t0, $s1
    ctx->r4 = ADD32(ctx->r8, ctx->r17);
    after_13:
    // 0x8029D0C0: lui         $t1, 0x601
    ctx->r9 = S32(0X601 << 16);
    // 0x8029D0C4: addiu       $t1, $t1, -0x5A18
    ctx->r9 = ADD32(ctx->r9, -0X5A18);
    // 0x8029D0C8: and         $t4, $t1, $s0
    ctx->r12 = ctx->r9 & ctx->r16;
    // 0x8029D0CC: jal         0x8028B950
    // 0x8029D0D0: addu        $a0, $t4, $s1
    ctx->r4 = ADD32(ctx->r12, ctx->r17);
    func_8028B950(rdram, ctx);
        goto after_14;
    // 0x8029D0D0: addu        $a0, $t4, $s1
    ctx->r4 = ADD32(ctx->r12, ctx->r17);
    after_14:
    // 0x8029D0D4: lui         $t2, 0x600
    ctx->r10 = S32(0X600 << 16);
    // 0x8029D0D8: addiu       $t2, $t2, 0x5B48
    ctx->r10 = ADD32(ctx->r10, 0X5B48);
    // 0x8029D0DC: and         $t3, $t2, $s0
    ctx->r11 = ctx->r10 & ctx->r16;
    // 0x8029D0E0: jal         0x8028B950
    // 0x8029D0E4: addu        $a0, $t3, $s1
    ctx->r4 = ADD32(ctx->r11, ctx->r17);
    func_8028B950(rdram, ctx);
        goto after_15;
    // 0x8029D0E4: addu        $a0, $t3, $s1
    ctx->r4 = ADD32(ctx->r11, ctx->r17);
    after_15:
    // 0x8029D0E8: lui         $t5, 0x600
    ctx->r13 = S32(0X600 << 16);
    // 0x8029D0EC: addiu       $t5, $t5, 0x77E0
    ctx->r13 = ADD32(ctx->r13, 0X77E0);
    // 0x8029D0F0: and         $t6, $t5, $s0
    ctx->r14 = ctx->r13 & ctx->r16;
    // 0x8029D0F4: jal         0x8028B950
    // 0x8029D0F8: addu        $a0, $t6, $s1
    ctx->r4 = ADD32(ctx->r14, ctx->r17);
    func_8028B950(rdram, ctx);
        goto after_16;
    // 0x8029D0F8: addu        $a0, $t6, $s1
    ctx->r4 = ADD32(ctx->r14, ctx->r17);
    after_16:
    // 0x8029D0FC: lui         $t9, 0x600
    ctx->r25 = S32(0X600 << 16);
    // 0x8029D100: addiu       $t9, $t9, 0x7F30
    ctx->r25 = ADD32(ctx->r25, 0X7F30);
    // 0x8029D104: and         $t7, $t9, $s0
    ctx->r15 = ctx->r25 & ctx->r16;
    // 0x8029D108: jal         0x8028B950
    // 0x8029D10C: addu        $a0, $t7, $s1
    ctx->r4 = ADD32(ctx->r15, ctx->r17);
    func_8028B950(rdram, ctx);
        goto after_17;
    // 0x8029D10C: addu        $a0, $t7, $s1
    ctx->r4 = ADD32(ctx->r15, ctx->r17);
    after_17:
    // 0x8029D110: lui         $t8, 0x601
    ctx->r24 = S32(0X601 << 16);
    // 0x8029D114: addiu       $t8, $t8, -0x7860
    ctx->r24 = ADD32(ctx->r24, -0X7860);
    // 0x8029D118: and         $t0, $t8, $s0
    ctx->r8 = ctx->r24 & ctx->r16;
    // 0x8029D11C: jal         0x8028B950
    // 0x8029D120: addu        $a0, $t0, $s1
    ctx->r4 = ADD32(ctx->r8, ctx->r17);
    func_8028B950(rdram, ctx);
        goto after_18;
    // 0x8029D120: addu        $a0, $t0, $s1
    ctx->r4 = ADD32(ctx->r8, ctx->r17);
    after_18:
    // 0x8029D124: lui         $t1, 0x601
    ctx->r9 = S32(0X601 << 16);
    // 0x8029D128: addiu       $t1, $t1, -0x7080
    ctx->r9 = ADD32(ctx->r9, -0X7080);
    // 0x8029D12C: and         $t4, $t1, $s0
    ctx->r12 = ctx->r9 & ctx->r16;
    // 0x8029D130: jal         0x8028B950
    // 0x8029D134: addu        $a0, $t4, $s1
    ctx->r4 = ADD32(ctx->r12, ctx->r17);
    func_8028B950(rdram, ctx);
        goto after_19;
    // 0x8029D134: addu        $a0, $t4, $s1
    ctx->r4 = ADD32(ctx->r12, ctx->r17);
    after_19:
    // 0x8029D138: lui         $t2, 0x601
    ctx->r10 = S32(0X601 << 16);
    // 0x8029D13C: addiu       $t2, $t2, -0x68A0
    ctx->r10 = ADD32(ctx->r10, -0X68A0);
    // 0x8029D140: and         $t3, $t2, $s0
    ctx->r11 = ctx->r10 & ctx->r16;
    // 0x8029D144: jal         0x8028B950
    // 0x8029D148: addu        $a0, $t3, $s1
    ctx->r4 = ADD32(ctx->r11, ctx->r17);
    func_8028B950(rdram, ctx);
        goto after_20;
    // 0x8029D148: addu        $a0, $t3, $s1
    ctx->r4 = ADD32(ctx->r11, ctx->r17);
    after_20:
    // 0x8029D14C: lui         $t5, 0x601
    ctx->r13 = S32(0X601 << 16);
    // 0x8029D150: addiu       $t5, $t5, -0x6030
    ctx->r13 = ADD32(ctx->r13, -0X6030);
    // 0x8029D154: and         $t6, $t5, $s0
    ctx->r14 = ctx->r13 & ctx->r16;
    // 0x8029D158: jal         0x8028B950
    // 0x8029D15C: addu        $a0, $t6, $s1
    ctx->r4 = ADD32(ctx->r14, ctx->r17);
    func_8028B950(rdram, ctx);
        goto after_21;
    // 0x8029D15C: addu        $a0, $t6, $s1
    ctx->r4 = ADD32(ctx->r14, ctx->r17);
    after_21:
    // 0x8029D160: lui         $t9, 0x601
    ctx->r25 = S32(0X601 << 16);
    // 0x8029D164: addiu       $t9, $t9, -0x58D0
    ctx->r25 = ADD32(ctx->r25, -0X58D0);
    // 0x8029D168: and         $t7, $t9, $s0
    ctx->r15 = ctx->r25 & ctx->r16;
    // 0x8029D16C: jal         0x8028B950
    // 0x8029D170: addu        $a0, $t7, $s1
    ctx->r4 = ADD32(ctx->r15, ctx->r17);
    func_8028B950(rdram, ctx);
        goto after_22;
    // 0x8029D170: addu        $a0, $t7, $s1
    ctx->r4 = ADD32(ctx->r15, ctx->r17);
    after_22:
    // 0x8029D174: lui         $t8, 0x600
    ctx->r24 = S32(0X600 << 16);
    // 0x8029D178: addiu       $t8, $t8, 0x5F60
    ctx->r24 = ADD32(ctx->r24, 0X5F60);
    // 0x8029D17C: and         $t0, $t8, $s0
    ctx->r8 = ctx->r24 & ctx->r16;
    // 0x8029D180: jal         0x8028B950
    // 0x8029D184: addu        $a0, $t0, $s1
    ctx->r4 = ADD32(ctx->r8, ctx->r17);
    func_8028B950(rdram, ctx);
        goto after_23;
    // 0x8029D184: addu        $a0, $t0, $s1
    ctx->r4 = ADD32(ctx->r8, ctx->r17);
    after_23:
    // 0x8029D188: lui         $t1, 0x600
    ctx->r9 = S32(0X600 << 16);
    // 0x8029D18C: addiu       $t1, $t1, 0x7AF0
    ctx->r9 = ADD32(ctx->r9, 0X7AF0);
    // 0x8029D190: and         $t4, $t1, $s0
    ctx->r12 = ctx->r9 & ctx->r16;
    // 0x8029D194: jal         0x8028B950
    // 0x8029D198: addu        $a0, $t4, $s1
    ctx->r4 = ADD32(ctx->r12, ctx->r17);
    func_8028B950(rdram, ctx);
        goto after_24;
    // 0x8029D198: addu        $a0, $t4, $s1
    ctx->r4 = ADD32(ctx->r12, ctx->r17);
    after_24:
    // 0x8029D19C: lui         $t2, 0x601
    ctx->r10 = S32(0X601 << 16);
    // 0x8029D1A0: addiu       $t2, $t2, -0x7CA0
    ctx->r10 = ADD32(ctx->r10, -0X7CA0);
    // 0x8029D1A4: and         $t3, $t2, $s0
    ctx->r11 = ctx->r10 & ctx->r16;
    // 0x8029D1A8: jal         0x8028B950
    // 0x8029D1AC: addu        $a0, $t3, $s1
    ctx->r4 = ADD32(ctx->r11, ctx->r17);
    func_8028B950(rdram, ctx);
        goto after_25;
    // 0x8029D1AC: addu        $a0, $t3, $s1
    ctx->r4 = ADD32(ctx->r11, ctx->r17);
    after_25:
    // 0x8029D1B0: lui         $t5, 0x601
    ctx->r13 = S32(0X601 << 16);
    // 0x8029D1B4: addiu       $t5, $t5, -0x74C0
    ctx->r13 = ADD32(ctx->r13, -0X74C0);
    // 0x8029D1B8: and         $t6, $t5, $s0
    ctx->r14 = ctx->r13 & ctx->r16;
    // 0x8029D1BC: jal         0x8028B950
    // 0x8029D1C0: addu        $a0, $t6, $s1
    ctx->r4 = ADD32(ctx->r14, ctx->r17);
    func_8028B950(rdram, ctx);
        goto after_26;
    // 0x8029D1C0: addu        $a0, $t6, $s1
    ctx->r4 = ADD32(ctx->r14, ctx->r17);
    after_26:
    // 0x8029D1C4: lui         $t9, 0x601
    ctx->r25 = S32(0X601 << 16);
    // 0x8029D1C8: addiu       $t9, $t9, -0x6CE0
    ctx->r25 = ADD32(ctx->r25, -0X6CE0);
    // 0x8029D1CC: and         $t7, $t9, $s0
    ctx->r15 = ctx->r25 & ctx->r16;
    // 0x8029D1D0: jal         0x8028B950
    // 0x8029D1D4: addu        $a0, $t7, $s1
    ctx->r4 = ADD32(ctx->r15, ctx->r17);
    func_8028B950(rdram, ctx);
        goto after_27;
    // 0x8029D1D4: addu        $a0, $t7, $s1
    ctx->r4 = ADD32(ctx->r15, ctx->r17);
    after_27:
    // 0x8029D1D8: lui         $t8, 0x601
    ctx->r24 = S32(0X601 << 16);
    // 0x8029D1DC: addiu       $t8, $t8, -0x6470
    ctx->r24 = ADD32(ctx->r24, -0X6470);
    // 0x8029D1E0: and         $t0, $t8, $s0
    ctx->r8 = ctx->r24 & ctx->r16;
    // 0x8029D1E4: jal         0x8028B950
    // 0x8029D1E8: addu        $a0, $t0, $s1
    ctx->r4 = ADD32(ctx->r8, ctx->r17);
    func_8028B950(rdram, ctx);
        goto after_28;
    // 0x8029D1E8: addu        $a0, $t0, $s1
    ctx->r4 = ADD32(ctx->r8, ctx->r17);
    after_28:
    // 0x8029D1EC: lui         $t1, 0x601
    ctx->r9 = S32(0X601 << 16);
    // 0x8029D1F0: addiu       $t1, $t1, -0x5D28
    ctx->r9 = ADD32(ctx->r9, -0X5D28);
    // 0x8029D1F4: and         $t4, $t1, $s0
    ctx->r12 = ctx->r9 & ctx->r16;
    // 0x8029D1F8: jal         0x8028B950
    // 0x8029D1FC: addu        $a0, $t4, $s1
    ctx->r4 = ADD32(ctx->r12, ctx->r17);
    func_8028B950(rdram, ctx);
        goto after_29;
    // 0x8029D1FC: addu        $a0, $t4, $s1
    ctx->r4 = ADD32(ctx->r12, ctx->r17);
    after_29:
    // 0x8029D200: lui         $t2, 0x601
    ctx->r10 = S32(0X601 << 16);
    // 0x8029D204: addiu       $t2, $t2, -0x54B8
    ctx->r10 = ADD32(ctx->r10, -0X54B8);
    // 0x8029D208: and         $t3, $t2, $s0
    ctx->r11 = ctx->r10 & ctx->r16;
    // 0x8029D20C: jal         0x8028B950
    // 0x8029D210: addu        $a0, $t3, $s1
    ctx->r4 = ADD32(ctx->r11, ctx->r17);
    func_8028B950(rdram, ctx);
        goto after_30;
    // 0x8029D210: addu        $a0, $t3, $s1
    ctx->r4 = ADD32(ctx->r11, ctx->r17);
    after_30:
    // 0x8029D214: lui         $t5, 0x600
    ctx->r13 = S32(0X600 << 16);
    // 0x8029D218: addiu       $t5, $t5, 0x6378
    ctx->r13 = ADD32(ctx->r13, 0X6378);
    // 0x8029D21C: and         $t6, $t5, $s0
    ctx->r14 = ctx->r13 & ctx->r16;
    // 0x8029D220: jal         0x8028B950
    // 0x8029D224: addu        $a0, $t6, $s1
    ctx->r4 = ADD32(ctx->r14, ctx->r17);
    func_8028B950(rdram, ctx);
        goto after_31;
    // 0x8029D224: addu        $a0, $t6, $s1
    ctx->r4 = ADD32(ctx->r14, ctx->r17);
    after_31:
    // 0x8029D228: lui         $t9, 0x601
    ctx->r25 = S32(0X601 << 16);
    // 0x8029D22C: addiu       $t9, $t9, -0x50A0
    ctx->r25 = ADD32(ctx->r25, -0X50A0);
    // 0x8029D230: and         $t7, $t9, $s0
    ctx->r15 = ctx->r25 & ctx->r16;
    // 0x8029D234: jal         0x8028B950
    // 0x8029D238: addu        $a0, $t7, $s1
    ctx->r4 = ADD32(ctx->r15, ctx->r17);
    func_8028B950(rdram, ctx);
        goto after_32;
    // 0x8029D238: addu        $a0, $t7, $s1
    ctx->r4 = ADD32(ctx->r15, ctx->r17);
    after_32:
    // 0x8029D23C: lui         $t8, 0x600
    ctx->r24 = S32(0X600 << 16);
    // 0x8029D240: addiu       $t8, $t8, 0x6BF0
    ctx->r24 = ADD32(ctx->r24, 0X6BF0);
    // 0x8029D244: and         $t0, $t8, $s0
    ctx->r8 = ctx->r24 & ctx->r16;
    // 0x8029D248: jal         0x8028B950
    // 0x8029D24C: addu        $a0, $t0, $s1
    ctx->r4 = ADD32(ctx->r8, ctx->r17);
    func_8028B950(rdram, ctx);
        goto after_33;
    // 0x8029D24C: addu        $a0, $t0, $s1
    ctx->r4 = ADD32(ctx->r8, ctx->r17);
    after_33:
    // 0x8029D250: lui         $t1, 0x601
    ctx->r9 = S32(0X601 << 16);
    // 0x8029D254: addiu       $t1, $t1, -0x45E0
    ctx->r9 = ADD32(ctx->r9, -0X45E0);
    // 0x8029D258: and         $t4, $t1, $s0
    ctx->r12 = ctx->r9 & ctx->r16;
    // 0x8029D25C: jal         0x8028B950
    // 0x8029D260: addu        $a0, $t4, $s1
    ctx->r4 = ADD32(ctx->r12, ctx->r17);
    func_8028B950(rdram, ctx);
        goto after_34;
    // 0x8029D260: addu        $a0, $t4, $s1
    ctx->r4 = ADD32(ctx->r12, ctx->r17);
    after_34:
    // 0x8029D264: lui         $t2, 0x600
    ctx->r10 = S32(0X600 << 16);
    // 0x8029D268: addiu       $t2, $t2, 0x6F78
    ctx->r10 = ADD32(ctx->r10, 0X6F78);
    // 0x8029D26C: and         $t3, $t2, $s0
    ctx->r11 = ctx->r10 & ctx->r16;
    // 0x8029D270: jal         0x8028B950
    // 0x8029D274: addu        $a0, $t3, $s1
    ctx->r4 = ADD32(ctx->r11, ctx->r17);
    func_8028B950(rdram, ctx);
        goto after_35;
    // 0x8029D274: addu        $a0, $t3, $s1
    ctx->r4 = ADD32(ctx->r11, ctx->r17);
    after_35:
    // 0x8029D278: lui         $t5, 0xE00
    ctx->r13 = S32(0XE00 << 16);
    // 0x8029D27C: lui         $s1, 0x803B
    ctx->r17 = S32(0X803B << 16);
    // 0x8029D280: addiu       $t5, $t5, 0x20B0
    ctx->r13 = ADD32(ctx->r13, 0X20B0);
    // 0x8029D284: ori         $s1, $s1, 0xB200
    ctx->r17 = ctx->r17 | 0XB200;
    // 0x8029D288: and         $t6, $t5, $s0
    ctx->r14 = ctx->r13 & ctx->r16;
    // 0x8029D28C: jal         0x8028B950
    // 0x8029D290: addu        $a0, $t6, $s1
    ctx->r4 = ADD32(ctx->r14, ctx->r17);
    func_8028B950(rdram, ctx);
        goto after_36;
    // 0x8029D290: addu        $a0, $t6, $s1
    ctx->r4 = ADD32(ctx->r14, ctx->r17);
    after_36:
    // 0x8029D294: lui         $t9, 0xE00
    ctx->r25 = S32(0XE00 << 16);
    // 0x8029D298: addiu       $t9, $t9, 0x5878
    ctx->r25 = ADD32(ctx->r25, 0X5878);
    // 0x8029D29C: and         $t7, $t9, $s0
    ctx->r15 = ctx->r25 & ctx->r16;
    // 0x8029D2A0: jal         0x8028B950
    // 0x8029D2A4: addu        $a0, $t7, $s1
    ctx->r4 = ADD32(ctx->r15, ctx->r17);
    func_8028B950(rdram, ctx);
        goto after_37;
    // 0x8029D2A4: addu        $a0, $t7, $s1
    ctx->r4 = ADD32(ctx->r15, ctx->r17);
    after_37:
    // 0x8029D2A8: lui         $t8, 0xE00
    ctx->r24 = S32(0XE00 << 16);
    // 0x8029D2AC: addiu       $t8, $t8, 0x1C80
    ctx->r24 = ADD32(ctx->r24, 0X1C80);
    // 0x8029D2B0: and         $t0, $t8, $s0
    ctx->r8 = ctx->r24 & ctx->r16;
    // 0x8029D2B4: jal         0x8028B950
    // 0x8029D2B8: addu        $a0, $t0, $s1
    ctx->r4 = ADD32(ctx->r8, ctx->r17);
    func_8028B950(rdram, ctx);
        goto after_38;
    // 0x8029D2B8: addu        $a0, $t0, $s1
    ctx->r4 = ADD32(ctx->r8, ctx->r17);
    after_38:
    // 0x8029D2BC: lui         $t1, 0xE00
    ctx->r9 = S32(0XE00 << 16);
    // 0x8029D2C0: addiu       $t1, $t1, 0x2EF8
    ctx->r9 = ADD32(ctx->r9, 0X2EF8);
    // 0x8029D2C4: and         $t4, $t1, $s0
    ctx->r12 = ctx->r9 & ctx->r16;
    // 0x8029D2C8: jal         0x8028B950
    // 0x8029D2CC: addu        $a0, $t4, $s1
    ctx->r4 = ADD32(ctx->r12, ctx->r17);
    func_8028B950(rdram, ctx);
        goto after_39;
    // 0x8029D2CC: addu        $a0, $t4, $s1
    ctx->r4 = ADD32(ctx->r12, ctx->r17);
    after_39:
    // 0x8029D2D0: lui         $t2, 0xE00
    ctx->r10 = S32(0XE00 << 16);
    // 0x8029D2D4: addiu       $t2, $t2, 0x33F8
    ctx->r10 = ADD32(ctx->r10, 0X33F8);
    // 0x8029D2D8: and         $t3, $t2, $s0
    ctx->r11 = ctx->r10 & ctx->r16;
    // 0x8029D2DC: jal         0x8028B950
    // 0x8029D2E0: addu        $a0, $t3, $s1
    ctx->r4 = ADD32(ctx->r11, ctx->r17);
    func_8028B950(rdram, ctx);
        goto after_40;
    // 0x8029D2E0: addu        $a0, $t3, $s1
    ctx->r4 = ADD32(ctx->r11, ctx->r17);
    after_40:
    // 0x8029D2E4: lui         $t5, 0xE00
    ctx->r13 = S32(0XE00 << 16);
    // 0x8029D2E8: addiu       $t5, $t5, 0x38F8
    ctx->r13 = ADD32(ctx->r13, 0X38F8);
    // 0x8029D2EC: and         $t6, $t5, $s0
    ctx->r14 = ctx->r13 & ctx->r16;
    // 0x8029D2F0: jal         0x8028B950
    // 0x8029D2F4: addu        $a0, $t6, $s1
    ctx->r4 = ADD32(ctx->r14, ctx->r17);
    func_8028B950(rdram, ctx);
        goto after_41;
    // 0x8029D2F4: addu        $a0, $t6, $s1
    ctx->r4 = ADD32(ctx->r14, ctx->r17);
    after_41:
    // 0x8029D2F8: lui         $t9, 0xE00
    ctx->r25 = S32(0XE00 << 16);
    // 0x8029D2FC: addiu       $t9, $t9, 0x4138
    ctx->r25 = ADD32(ctx->r25, 0X4138);
    // 0x8029D300: and         $t7, $t9, $s0
    ctx->r15 = ctx->r25 & ctx->r16;
    // 0x8029D304: jal         0x8028B950
    // 0x8029D308: addu        $a0, $t7, $s1
    ctx->r4 = ADD32(ctx->r15, ctx->r17);
    func_8028B950(rdram, ctx);
        goto after_42;
    // 0x8029D308: addu        $a0, $t7, $s1
    ctx->r4 = ADD32(ctx->r15, ctx->r17);
    after_42:
    // 0x8029D30C: lui         $t8, 0xE00
    ctx->r24 = S32(0XE00 << 16);
    // 0x8029D310: addiu       $t8, $t8, 0x4978
    ctx->r24 = ADD32(ctx->r24, 0X4978);
    // 0x8029D314: and         $t0, $t8, $s0
    ctx->r8 = ctx->r24 & ctx->r16;
    // 0x8029D318: jal         0x8028B950
    // 0x8029D31C: addu        $a0, $t0, $s1
    ctx->r4 = ADD32(ctx->r8, ctx->r17);
    func_8028B950(rdram, ctx);
        goto after_43;
    // 0x8029D31C: addu        $a0, $t0, $s1
    ctx->r4 = ADD32(ctx->r8, ctx->r17);
    after_43:
    // 0x8029D320: lui         $t1, 0xE00
    ctx->r9 = S32(0XE00 << 16);
    // 0x8029D324: addiu       $t1, $t1, 0x4DA8
    ctx->r9 = ADD32(ctx->r9, 0X4DA8);
    // 0x8029D328: and         $t4, $t1, $s0
    ctx->r12 = ctx->r9 & ctx->r16;
    // 0x8029D32C: jal         0x8028B950
    // 0x8029D330: addu        $a0, $t4, $s1
    ctx->r4 = ADD32(ctx->r12, ctx->r17);
    func_8028B950(rdram, ctx);
        goto after_44;
    // 0x8029D330: addu        $a0, $t4, $s1
    ctx->r4 = ADD32(ctx->r12, ctx->r17);
    after_44:
    // 0x8029D334: lui         $t2, 0xE00
    ctx->r10 = S32(0XE00 << 16);
    // 0x8029D338: addiu       $t2, $t2, 0x5448
    ctx->r10 = ADD32(ctx->r10, 0X5448);
    // 0x8029D33C: and         $t3, $t2, $s0
    ctx->r11 = ctx->r10 & ctx->r16;
    // 0x8029D340: jal         0x8028B950
    // 0x8029D344: addu        $a0, $t3, $s1
    ctx->r4 = ADD32(ctx->r11, ctx->r17);
    func_8028B950(rdram, ctx);
        goto after_45;
    // 0x8029D344: addu        $a0, $t3, $s1
    ctx->r4 = ADD32(ctx->r11, ctx->r17);
    after_45:
    // 0x8029D348: lui         $t5, 0xE00
    ctx->r13 = S32(0XE00 << 16);
    // 0x8029D34C: addiu       $t5, $t5, 0x1E98
    ctx->r13 = ADD32(ctx->r13, 0X1E98);
    // 0x8029D350: and         $t6, $t5, $s0
    ctx->r14 = ctx->r13 & ctx->r16;
    // 0x8029D354: jal         0x8028B950
    // 0x8029D358: addu        $a0, $t6, $s1
    ctx->r4 = ADD32(ctx->r14, ctx->r17);
    func_8028B950(rdram, ctx);
        goto after_46;
    // 0x8029D358: addu        $a0, $t6, $s1
    ctx->r4 = ADD32(ctx->r14, ctx->r17);
    after_46:
    // 0x8029D35C: lui         $t9, 0xE00
    ctx->r25 = S32(0XE00 << 16);
    // 0x8029D360: addiu       $t9, $t9, 0x3110
    ctx->r25 = ADD32(ctx->r25, 0X3110);
    // 0x8029D364: and         $t7, $t9, $s0
    ctx->r15 = ctx->r25 & ctx->r16;
    // 0x8029D368: jal         0x8028B950
    // 0x8029D36C: addu        $a0, $t7, $s1
    ctx->r4 = ADD32(ctx->r15, ctx->r17);
    func_8028B950(rdram, ctx);
        goto after_47;
    // 0x8029D36C: addu        $a0, $t7, $s1
    ctx->r4 = ADD32(ctx->r15, ctx->r17);
    after_47:
    // 0x8029D370: lui         $t8, 0xE00
    ctx->r24 = S32(0XE00 << 16);
    // 0x8029D374: addiu       $t8, $t8, 0x36E0
    ctx->r24 = ADD32(ctx->r24, 0X36E0);
    // 0x8029D378: and         $t0, $t8, $s0
    ctx->r8 = ctx->r24 & ctx->r16;
    // 0x8029D37C: jal         0x8028B950
    // 0x8029D380: addu        $a0, $t0, $s1
    ctx->r4 = ADD32(ctx->r8, ctx->r17);
    func_8028B950(rdram, ctx);
        goto after_48;
    // 0x8029D380: addu        $a0, $t0, $s1
    ctx->r4 = ADD32(ctx->r8, ctx->r17);
    after_48:
    // 0x8029D384: lui         $t1, 0xE00
    ctx->r9 = S32(0XE00 << 16);
    // 0x8029D388: addiu       $t1, $t1, 0x3D80
    ctx->r9 = ADD32(ctx->r9, 0X3D80);
    // 0x8029D38C: and         $t4, $t1, $s0
    ctx->r12 = ctx->r9 & ctx->r16;
    // 0x8029D390: jal         0x8028B950
    // 0x8029D394: addu        $a0, $t4, $s1
    ctx->r4 = ADD32(ctx->r12, ctx->r17);
    func_8028B950(rdram, ctx);
        goto after_49;
    // 0x8029D394: addu        $a0, $t4, $s1
    ctx->r4 = ADD32(ctx->r12, ctx->r17);
    after_49:
    // 0x8029D398: lui         $t2, 0xE00
    ctx->r10 = S32(0XE00 << 16);
    // 0x8029D39C: addiu       $t2, $t2, 0x45C0
    ctx->r10 = ADD32(ctx->r10, 0X45C0);
    // 0x8029D3A0: and         $t3, $t2, $s0
    ctx->r11 = ctx->r10 & ctx->r16;
    // 0x8029D3A4: jal         0x8028B950
    // 0x8029D3A8: addu        $a0, $t3, $s1
    ctx->r4 = ADD32(ctx->r11, ctx->r17);
    func_8028B950(rdram, ctx);
        goto after_50;
    // 0x8029D3A8: addu        $a0, $t3, $s1
    ctx->r4 = ADD32(ctx->r11, ctx->r17);
    after_50:
    // 0x8029D3AC: lui         $t5, 0xE00
    ctx->r13 = S32(0XE00 << 16);
    // 0x8029D3B0: addiu       $t5, $t5, 0x4B90
    ctx->r13 = ADD32(ctx->r13, 0X4B90);
    // 0x8029D3B4: and         $t6, $t5, $s0
    ctx->r14 = ctx->r13 & ctx->r16;
    // 0x8029D3B8: jal         0x8028B950
    // 0x8029D3BC: addu        $a0, $t6, $s1
    ctx->r4 = ADD32(ctx->r14, ctx->r17);
    func_8028B950(rdram, ctx);
        goto after_51;
    // 0x8029D3BC: addu        $a0, $t6, $s1
    ctx->r4 = ADD32(ctx->r14, ctx->r17);
    after_51:
    // 0x8029D3C0: lui         $t9, 0xE00
    ctx->r25 = S32(0XE00 << 16);
    // 0x8029D3C4: addiu       $t9, $t9, 0x5090
    ctx->r25 = ADD32(ctx->r25, 0X5090);
    // 0x8029D3C8: and         $t7, $t9, $s0
    ctx->r15 = ctx->r25 & ctx->r16;
    // 0x8029D3CC: jal         0x8028B950
    // 0x8029D3D0: addu        $a0, $t7, $s1
    ctx->r4 = ADD32(ctx->r15, ctx->r17);
    func_8028B950(rdram, ctx);
        goto after_52;
    // 0x8029D3D0: addu        $a0, $t7, $s1
    ctx->r4 = ADD32(ctx->r15, ctx->r17);
    after_52:
    // 0x8029D3D4: lui         $t8, 0xE00
    ctx->r24 = S32(0XE00 << 16);
    // 0x8029D3D8: addiu       $t8, $t8, 0x5660
    ctx->r24 = ADD32(ctx->r24, 0X5660);
    // 0x8029D3DC: and         $t0, $t8, $s0
    ctx->r8 = ctx->r24 & ctx->r16;
    // 0x8029D3E0: jal         0x8028B950
    // 0x8029D3E4: addu        $a0, $t0, $s1
    ctx->r4 = ADD32(ctx->r8, ctx->r17);
    func_8028B950(rdram, ctx);
        goto after_53;
    // 0x8029D3E4: addu        $a0, $t0, $s1
    ctx->r4 = ADD32(ctx->r8, ctx->r17);
    after_53:
    // 0x8029D3E8: jal         0x8029F548
    // 0x8029D3EC: nop

    func_8029F548(rdram, ctx);
        goto after_54;
    // 0x8029D3EC: nop

    after_54:
    // 0x8029D3F0: jal         0x802A0D44
    // 0x8029D3F4: nop

    func_802A0D44(rdram, ctx);
        goto after_55;
    // 0x8029D3F4: nop

    after_55:
    // 0x8029D3F8: lui         $v1, 0x8011
    ctx->r3 = S32(0X8011 << 16);
    // 0x8029D3FC: addiu       $v1, $v1, -0x2F98
    ctx->r3 = ADD32(ctx->r3, -0X2F98);
    // 0x8029D400: lw          $t1, 0x0($v1)
    ctx->r9 = MEM_W(ctx->r3, 0X0);
    // 0x8029D404: lui         $a0, 0x2
    ctx->r4 = S32(0X2 << 16);
    // 0x8029D408: ori         $a0, $a0, 0x8000
    ctx->r4 = ctx->r4 | 0X8000;
    // 0x8029D40C: lui         $a1, 0x600
    ctx->r5 = S32(0X600 << 16);
    // 0x8029D410: addiu       $a1, $a1, 0x5B48
    ctx->r5 = ADD32(ctx->r5, 0X5B48);
    // 0x8029D414: addu        $t4, $t1, $a0
    ctx->r12 = ADD32(ctx->r9, ctx->r4);
    // 0x8029D418: sw          $a1, 0x1398($t4)
    MEM_W(0X1398, ctx->r12) = ctx->r5;
    // 0x8029D41C: lw          $t3, 0x0($v1)
    ctx->r11 = MEM_W(ctx->r3, 0X0);
    // 0x8029D420: addiu       $t2, $zero, 0x3
    ctx->r10 = ADD32(0, 0X3);
    // 0x8029D424: addu        $t5, $t3, $a0
    ctx->r13 = ADD32(ctx->r11, ctx->r4);
    // 0x8029D428: lui         $v0, 0x802C
    ctx->r2 = S32(0X802C << 16);
    // 0x8029D42C: sw          $t2, 0x139C($t5)
    MEM_W(0X139C, ctx->r13) = ctx->r10;
    // 0x8029D430: addiu       $v0, $v0, 0x3600
    ctx->r2 = ADD32(ctx->r2, 0X3600);
    // 0x8029D434: lui         $t6, 0x600
    ctx->r14 = S32(0X600 << 16);
    // 0x8029D438: lui         $t9, 0x600
    ctx->r25 = S32(0X600 << 16);
    // 0x8029D43C: lui         $t7, 0x600
    ctx->r15 = S32(0X600 << 16);
    // 0x8029D440: lui         $t8, 0x601
    ctx->r24 = S32(0X601 << 16);
    // 0x8029D444: lui         $t0, 0x601
    ctx->r8 = S32(0X601 << 16);
    // 0x8029D448: lui         $t1, 0x601
    ctx->r9 = S32(0X601 << 16);
    // 0x8029D44C: lui         $t4, 0x601
    ctx->r12 = S32(0X601 << 16);
    // 0x8029D450: lui         $t3, 0x601
    ctx->r11 = S32(0X601 << 16);
    // 0x8029D454: addiu       $t6, $t6, 0x5A00
    ctx->r14 = ADD32(ctx->r14, 0X5A00);
    // 0x8029D458: addiu       $t9, $t9, 0x76B0
    ctx->r25 = ADD32(ctx->r25, 0X76B0);
    // 0x8029D45C: addiu       $t7, $t7, 0x7E00
    ctx->r15 = ADD32(ctx->r15, 0X7E00);
    // 0x8029D460: addiu       $t8, $t8, -0x7990
    ctx->r24 = ADD32(ctx->r24, -0X7990);
    // 0x8029D464: addiu       $t0, $t0, -0x71B0
    ctx->r8 = ADD32(ctx->r8, -0X71B0);
    // 0x8029D468: addiu       $t1, $t1, -0x69D0
    ctx->r9 = ADD32(ctx->r9, -0X69D0);
    // 0x8029D46C: addiu       $t4, $t4, -0x6160
    ctx->r12 = ADD32(ctx->r12, -0X6160);
    // 0x8029D470: addiu       $t3, $t3, -0x5A18
    ctx->r11 = ADD32(ctx->r11, -0X5A18);
    // 0x8029D474: sw          $t6, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r14;
    // 0x8029D478: sw          $t9, 0xC($v0)
    MEM_W(0XC, ctx->r2) = ctx->r25;
    // 0x8029D47C: sw          $t7, 0x14($v0)
    MEM_W(0X14, ctx->r2) = ctx->r15;
    // 0x8029D480: sw          $t8, 0x1C($v0)
    MEM_W(0X1C, ctx->r2) = ctx->r24;
    // 0x8029D484: sw          $t0, 0x24($v0)
    MEM_W(0X24, ctx->r2) = ctx->r8;
    // 0x8029D488: sw          $t1, 0x2C($v0)
    MEM_W(0X2C, ctx->r2) = ctx->r9;
    // 0x8029D48C: sw          $t4, 0x34($v0)
    MEM_W(0X34, ctx->r2) = ctx->r12;
    // 0x8029D490: sw          $t3, 0x3C($v0)
    MEM_W(0X3C, ctx->r2) = ctx->r11;
    // 0x8029D494: lui         $t2, 0x8009
    ctx->r10 = S32(0X8009 << 16);
    // 0x8029D498: lw          $t2, 0x68E0($t2)
    ctx->r10 = MEM_W(ctx->r10, 0X68E0);
    // 0x8029D49C: lui         $t3, 0x600
    ctx->r11 = S32(0X600 << 16);
    // 0x8029D4A0: beq         $t2, $zero, L_8029D508
    if (ctx->r10 == 0) {
        // 0x8029D4A4: addiu       $t3, $t3, 0x77E0
        ctx->r11 = ADD32(ctx->r11, 0X77E0);
            goto L_8029D508;
    }
    // 0x8029D4A4: addiu       $t3, $t3, 0x77E0
    ctx->r11 = ADD32(ctx->r11, 0X77E0);
    // 0x8029D4A8: lui         $t5, 0xA00
    ctx->r13 = S32(0XA00 << 16);
    // 0x8029D4AC: lui         $t6, 0xA00
    ctx->r14 = S32(0XA00 << 16);
    // 0x8029D4B0: lui         $t9, 0xA00
    ctx->r25 = S32(0XA00 << 16);
    // 0x8029D4B4: lui         $t7, 0xA00
    ctx->r15 = S32(0XA00 << 16);
    // 0x8029D4B8: lui         $t8, 0xA00
    ctx->r24 = S32(0XA00 << 16);
    // 0x8029D4BC: lui         $t0, 0xA00
    ctx->r8 = S32(0XA00 << 16);
    // 0x8029D4C0: lui         $t1, 0xA00
    ctx->r9 = S32(0XA00 << 16);
    // 0x8029D4C4: lui         $t4, 0xA00
    ctx->r12 = S32(0XA00 << 16);
    // 0x8029D4C8: addiu       $t5, $t5, 0x4660
    ctx->r13 = ADD32(ctx->r13, 0X4660);
    // 0x8029D4CC: addiu       $t6, $t6, 0x4758
    ctx->r14 = ADD32(ctx->r14, 0X4758);
    // 0x8029D4D0: addiu       $t9, $t9, 0x4850
    ctx->r25 = ADD32(ctx->r25, 0X4850);
    // 0x8029D4D4: addiu       $t7, $t7, 0x4948
    ctx->r15 = ADD32(ctx->r15, 0X4948);
    // 0x8029D4D8: addiu       $t8, $t8, 0x4A40
    ctx->r24 = ADD32(ctx->r24, 0X4A40);
    // 0x8029D4DC: addiu       $t0, $t0, 0x4B38
    ctx->r8 = ADD32(ctx->r8, 0X4B38);
    // 0x8029D4E0: addiu       $t1, $t1, 0x4C30
    ctx->r9 = ADD32(ctx->r9, 0X4C30);
    // 0x8029D4E4: addiu       $t4, $t4, 0x4D28
    ctx->r12 = ADD32(ctx->r12, 0X4D28);
    // 0x8029D4E8: sw          $t5, 0x84($v0)
    MEM_W(0X84, ctx->r2) = ctx->r13;
    // 0x8029D4EC: sw          $t6, 0x8C($v0)
    MEM_W(0X8C, ctx->r2) = ctx->r14;
    // 0x8029D4F0: sw          $t9, 0x94($v0)
    MEM_W(0X94, ctx->r2) = ctx->r25;
    // 0x8029D4F4: sw          $t7, 0x9C($v0)
    MEM_W(0X9C, ctx->r2) = ctx->r15;
    // 0x8029D4F8: sw          $t8, 0xA4($v0)
    MEM_W(0XA4, ctx->r2) = ctx->r24;
    // 0x8029D4FC: sw          $t0, 0xAC($v0)
    MEM_W(0XAC, ctx->r2) = ctx->r8;
    // 0x8029D500: sw          $t1, 0xB4($v0)
    MEM_W(0XB4, ctx->r2) = ctx->r9;
    // 0x8029D504: sw          $t4, 0xBC($v0)
    MEM_W(0XBC, ctx->r2) = ctx->r12;
L_8029D508:
    // 0x8029D508: lui         $t2, 0x600
    ctx->r10 = S32(0X600 << 16);
    // 0x8029D50C: lui         $t5, 0x601
    ctx->r13 = S32(0X601 << 16);
    // 0x8029D510: lui         $t6, 0x601
    ctx->r14 = S32(0X601 << 16);
    // 0x8029D514: lui         $t9, 0x601
    ctx->r25 = S32(0X601 << 16);
    // 0x8029D518: lui         $t7, 0x601
    ctx->r15 = S32(0X601 << 16);
    // 0x8029D51C: lui         $t8, 0x601
    ctx->r24 = S32(0X601 << 16);
    // 0x8029D520: lui         $t0, 0x600
    ctx->r8 = S32(0X600 << 16);
    // 0x8029D524: addiu       $t2, $t2, 0x7F30
    ctx->r10 = ADD32(ctx->r10, 0X7F30);
    // 0x8029D528: addiu       $t5, $t5, -0x7860
    ctx->r13 = ADD32(ctx->r13, -0X7860);
    // 0x8029D52C: addiu       $t6, $t6, -0x7080
    ctx->r14 = ADD32(ctx->r14, -0X7080);
    // 0x8029D530: addiu       $t9, $t9, -0x68A0
    ctx->r25 = ADD32(ctx->r25, -0X68A0);
    // 0x8029D534: addiu       $t7, $t7, -0x6030
    ctx->r15 = ADD32(ctx->r15, -0X6030);
    // 0x8029D538: addiu       $t8, $t8, -0x58D0
    ctx->r24 = ADD32(ctx->r24, -0X58D0);
    // 0x8029D53C: addiu       $t0, $t0, 0x6378
    ctx->r8 = ADD32(ctx->r8, 0X6378);
    // 0x8029D540: sw          $t3, 0xCC($v0)
    MEM_W(0XCC, ctx->r2) = ctx->r11;
    // 0x8029D544: sw          $t2, 0xD4($v0)
    MEM_W(0XD4, ctx->r2) = ctx->r10;
    // 0x8029D548: sw          $t5, 0xDC($v0)
    MEM_W(0XDC, ctx->r2) = ctx->r13;
    // 0x8029D54C: sw          $t6, 0xE4($v0)
    MEM_W(0XE4, ctx->r2) = ctx->r14;
    // 0x8029D550: sw          $t9, 0xEC($v0)
    MEM_W(0XEC, ctx->r2) = ctx->r25;
    // 0x8029D554: sw          $t7, 0xF4($v0)
    MEM_W(0XF4, ctx->r2) = ctx->r15;
    // 0x8029D558: sw          $t8, 0xFC($v0)
    MEM_W(0XFC, ctx->r2) = ctx->r24;
    // 0x8029D55C: sw          $t0, 0x104($v0)
    MEM_W(0X104, ctx->r2) = ctx->r8;
    // 0x8029D560: lui         $t1, 0x601
    ctx->r9 = S32(0X601 << 16);
    // 0x8029D564: lui         $t4, 0x600
    ctx->r12 = S32(0X600 << 16);
    // 0x8029D568: lui         $t3, 0x600
    ctx->r11 = S32(0X600 << 16);
    // 0x8029D56C: lui         $t2, 0x601
    ctx->r10 = S32(0X601 << 16);
    // 0x8029D570: lui         $t5, 0x601
    ctx->r13 = S32(0X601 << 16);
    // 0x8029D574: lui         $t6, 0x601
    ctx->r14 = S32(0X601 << 16);
    // 0x8029D578: lui         $t9, 0x601
    ctx->r25 = S32(0X601 << 16);
    // 0x8029D57C: lui         $t7, 0x601
    ctx->r15 = S32(0X601 << 16);
    // 0x8029D580: lui         $t8, 0x601
    ctx->r24 = S32(0X601 << 16);
    // 0x8029D584: lui         $t0, 0x600
    ctx->r8 = S32(0X600 << 16);
    // 0x8029D588: addiu       $t1, $t1, -0x50A0
    ctx->r9 = ADD32(ctx->r9, -0X50A0);
    // 0x8029D58C: addiu       $t4, $t4, 0x5F60
    ctx->r12 = ADD32(ctx->r12, 0X5F60);
    // 0x8029D590: addiu       $t3, $t3, 0x7AF0
    ctx->r11 = ADD32(ctx->r11, 0X7AF0);
    // 0x8029D594: addiu       $t2, $t2, -0x7CA0
    ctx->r10 = ADD32(ctx->r10, -0X7CA0);
    // 0x8029D598: addiu       $t5, $t5, -0x74C0
    ctx->r13 = ADD32(ctx->r13, -0X74C0);
    // 0x8029D59C: addiu       $t6, $t6, -0x6CE0
    ctx->r14 = ADD32(ctx->r14, -0X6CE0);
    // 0x8029D5A0: addiu       $t9, $t9, -0x6470
    ctx->r25 = ADD32(ctx->r25, -0X6470);
    // 0x8029D5A4: addiu       $t7, $t7, -0x5D28
    ctx->r15 = ADD32(ctx->r15, -0X5D28);
    // 0x8029D5A8: addiu       $t8, $t8, -0x54B8
    ctx->r24 = ADD32(ctx->r24, -0X54B8);
    // 0x8029D5AC: addiu       $t0, $t0, 0x6BF0
    ctx->r8 = ADD32(ctx->r8, 0X6BF0);
    // 0x8029D5B0: sw          $t1, 0x10C($v0)
    MEM_W(0X10C, ctx->r2) = ctx->r9;
    // 0x8029D5B4: sw          $t4, 0x114($v0)
    MEM_W(0X114, ctx->r2) = ctx->r12;
    // 0x8029D5B8: sw          $t3, 0x11C($v0)
    MEM_W(0X11C, ctx->r2) = ctx->r11;
    // 0x8029D5BC: sw          $t2, 0x124($v0)
    MEM_W(0X124, ctx->r2) = ctx->r10;
    // 0x8029D5C0: sw          $t5, 0x12C($v0)
    MEM_W(0X12C, ctx->r2) = ctx->r13;
    // 0x8029D5C4: sw          $t6, 0x134($v0)
    MEM_W(0X134, ctx->r2) = ctx->r14;
    // 0x8029D5C8: sw          $t9, 0x13C($v0)
    MEM_W(0X13C, ctx->r2) = ctx->r25;
    // 0x8029D5CC: sw          $t7, 0x144($v0)
    MEM_W(0X144, ctx->r2) = ctx->r15;
    // 0x8029D5D0: sw          $t8, 0x14C($v0)
    MEM_W(0X14C, ctx->r2) = ctx->r24;
    // 0x8029D5D4: sw          $t0, 0x154($v0)
    MEM_W(0X154, ctx->r2) = ctx->r8;
    // 0x8029D5D8: lui         $t1, 0x601
    ctx->r9 = S32(0X601 << 16);
    // 0x8029D5DC: lui         $t4, 0x600
    ctx->r12 = S32(0X600 << 16);
    // 0x8029D5E0: lui         $t3, 0xE00
    ctx->r11 = S32(0XE00 << 16);
    // 0x8029D5E4: lui         $t2, 0xE00
    ctx->r10 = S32(0XE00 << 16);
    // 0x8029D5E8: lui         $t5, 0xE00
    ctx->r13 = S32(0XE00 << 16);
    // 0x8029D5EC: lui         $t6, 0xE00
    ctx->r14 = S32(0XE00 << 16);
    // 0x8029D5F0: lui         $t9, 0xE00
    ctx->r25 = S32(0XE00 << 16);
    // 0x8029D5F4: lui         $t7, 0xE00
    ctx->r15 = S32(0XE00 << 16);
    // 0x8029D5F8: lui         $t8, 0xE00
    ctx->r24 = S32(0XE00 << 16);
    // 0x8029D5FC: lui         $t0, 0xE00
    ctx->r8 = S32(0XE00 << 16);
    // 0x8029D600: addiu       $t1, $t1, -0x45E0
    ctx->r9 = ADD32(ctx->r9, -0X45E0);
    // 0x8029D604: addiu       $t4, $t4, 0x6F78
    ctx->r12 = ADD32(ctx->r12, 0X6F78);
    // 0x8029D608: addiu       $t3, $t3, 0x20B0
    ctx->r11 = ADD32(ctx->r11, 0X20B0);
    // 0x8029D60C: addiu       $t2, $t2, 0x5878
    ctx->r10 = ADD32(ctx->r10, 0X5878);
    // 0x8029D610: addiu       $t5, $t5, 0x1C80
    ctx->r13 = ADD32(ctx->r13, 0X1C80);
    // 0x8029D614: addiu       $t6, $t6, 0x2EF8
    ctx->r14 = ADD32(ctx->r14, 0X2EF8);
    // 0x8029D618: addiu       $t9, $t9, 0x33F8
    ctx->r25 = ADD32(ctx->r25, 0X33F8);
    // 0x8029D61C: addiu       $t7, $t7, 0x38F8
    ctx->r15 = ADD32(ctx->r15, 0X38F8);
    // 0x8029D620: addiu       $t8, $t8, 0x4138
    ctx->r24 = ADD32(ctx->r24, 0X4138);
    // 0x8029D624: addiu       $t0, $t0, 0x4978
    ctx->r8 = ADD32(ctx->r8, 0X4978);
    // 0x8029D628: sw          $t1, 0x15C($v0)
    MEM_W(0X15C, ctx->r2) = ctx->r9;
    // 0x8029D62C: sw          $t4, 0x164($v0)
    MEM_W(0X164, ctx->r2) = ctx->r12;
    // 0x8029D630: sw          $t3, 0x194($v0)
    MEM_W(0X194, ctx->r2) = ctx->r11;
    // 0x8029D634: sw          $t2, 0x19C($v0)
    MEM_W(0X19C, ctx->r2) = ctx->r10;
    // 0x8029D638: sw          $t5, 0x1A4($v0)
    MEM_W(0X1A4, ctx->r2) = ctx->r13;
    // 0x8029D63C: sw          $t6, 0x1AC($v0)
    MEM_W(0X1AC, ctx->r2) = ctx->r14;
    // 0x8029D640: sw          $t9, 0x1B4($v0)
    MEM_W(0X1B4, ctx->r2) = ctx->r25;
    // 0x8029D644: sw          $t7, 0x1BC($v0)
    MEM_W(0X1BC, ctx->r2) = ctx->r15;
    // 0x8029D648: sw          $t8, 0x1C4($v0)
    MEM_W(0X1C4, ctx->r2) = ctx->r24;
    // 0x8029D64C: sw          $t0, 0x1CC($v0)
    MEM_W(0X1CC, ctx->r2) = ctx->r8;
    // 0x8029D650: lui         $t1, 0xE00
    ctx->r9 = S32(0XE00 << 16);
    // 0x8029D654: lui         $t4, 0xE00
    ctx->r12 = S32(0XE00 << 16);
    // 0x8029D658: lui         $t3, 0xE00
    ctx->r11 = S32(0XE00 << 16);
    // 0x8029D65C: lui         $t2, 0xE00
    ctx->r10 = S32(0XE00 << 16);
    // 0x8029D660: lui         $t5, 0xE00
    ctx->r13 = S32(0XE00 << 16);
    // 0x8029D664: lui         $t6, 0xE00
    ctx->r14 = S32(0XE00 << 16);
    // 0x8029D668: lui         $t9, 0xE00
    ctx->r25 = S32(0XE00 << 16);
    // 0x8029D66C: lui         $t7, 0xE00
    ctx->r15 = S32(0XE00 << 16);
    // 0x8029D670: lui         $t8, 0xE00
    ctx->r24 = S32(0XE00 << 16);
    // 0x8029D674: lui         $t0, 0xE00
    ctx->r8 = S32(0XE00 << 16);
    // 0x8029D678: addiu       $t1, $t1, 0x4DA8
    ctx->r9 = ADD32(ctx->r9, 0X4DA8);
    // 0x8029D67C: addiu       $t4, $t4, 0x5448
    ctx->r12 = ADD32(ctx->r12, 0X5448);
    // 0x8029D680: addiu       $t3, $t3, 0x1E98
    ctx->r11 = ADD32(ctx->r11, 0X1E98);
    // 0x8029D684: addiu       $t2, $t2, 0x3110
    ctx->r10 = ADD32(ctx->r10, 0X3110);
    // 0x8029D688: addiu       $t5, $t5, 0x36E0
    ctx->r13 = ADD32(ctx->r13, 0X36E0);
    // 0x8029D68C: addiu       $t6, $t6, 0x3D80
    ctx->r14 = ADD32(ctx->r14, 0X3D80);
    // 0x8029D690: addiu       $t9, $t9, 0x45C0
    ctx->r25 = ADD32(ctx->r25, 0X45C0);
    // 0x8029D694: addiu       $t7, $t7, 0x4B90
    ctx->r15 = ADD32(ctx->r15, 0X4B90);
    // 0x8029D698: addiu       $t8, $t8, 0x5090
    ctx->r24 = ADD32(ctx->r24, 0X5090);
    // 0x8029D69C: addiu       $t0, $t0, 0x5660
    ctx->r8 = ADD32(ctx->r8, 0X5660);
    // 0x8029D6A0: sw          $a1, 0xC4($v0)
    MEM_W(0XC4, ctx->r2) = ctx->r5;
    // 0x8029D6A4: sw          $t1, 0x1D4($v0)
    MEM_W(0X1D4, ctx->r2) = ctx->r9;
    // 0x8029D6A8: sw          $t4, 0x1DC($v0)
    MEM_W(0X1DC, ctx->r2) = ctx->r12;
    // 0x8029D6AC: sw          $t3, 0x1E4($v0)
    MEM_W(0X1E4, ctx->r2) = ctx->r11;
    // 0x8029D6B0: sw          $t2, 0x1EC($v0)
    MEM_W(0X1EC, ctx->r2) = ctx->r10;
    // 0x8029D6B4: sw          $t5, 0x1F4($v0)
    MEM_W(0X1F4, ctx->r2) = ctx->r13;
    // 0x8029D6B8: sw          $t6, 0x1FC($v0)
    MEM_W(0X1FC, ctx->r2) = ctx->r14;
    // 0x8029D6BC: sw          $t9, 0x204($v0)
    MEM_W(0X204, ctx->r2) = ctx->r25;
    // 0x8029D6C0: sw          $t7, 0x20C($v0)
    MEM_W(0X20C, ctx->r2) = ctx->r15;
    // 0x8029D6C4: sw          $t8, 0x214($v0)
    MEM_W(0X214, ctx->r2) = ctx->r24;
    // 0x8029D6C8: jal         0x8029F758
    // 0x8029D6CC: sw          $t0, 0x21C($v0)
    MEM_W(0X21C, ctx->r2) = ctx->r8;
    func_8029F758(rdram, ctx);
        goto after_56;
    // 0x8029D6CC: sw          $t0, 0x21C($v0)
    MEM_W(0X21C, ctx->r2) = ctx->r8;
    after_56:
    // 0x8029D6D0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8029D6D4: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x8029D6D8: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x8029D6DC: jr          $ra
    // 0x8029D6E0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x8029D6E0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_8029D6E4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8029D6E4: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8029D6E8: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8029D6EC: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x8029D6F0: jal         0x8028BD18
    // 0x8029D6F4: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    func_8028BD18(rdram, ctx);
        goto after_0;
    // 0x8029D6F4: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    after_0:
    // 0x8029D6F8: jal         0x802A10D8
    // 0x8029D6FC: nop

    func_802A10D8(rdram, ctx);
        goto after_1;
    // 0x8029D6FC: nop

    after_1:
    // 0x8029D700: lui         $t6, 0x8012
    ctx->r14 = S32(0X8012 << 16);
    // 0x8029D704: lb          $t6, -0x309C($t6)
    ctx->r14 = MEM_B(ctx->r14, -0X309C);
    // 0x8029D708: nop

    // 0x8029D70C: bne         $t6, $zero, L_8029D75C
    if (ctx->r14 != 0) {
        // 0x8029D710: lui         $v0, 0x802C
        ctx->r2 = S32(0X802C << 16);
            goto L_8029D75C;
    }
    // 0x8029D710: lui         $v0, 0x802C
    ctx->r2 = S32(0X802C << 16);
    // 0x8029D714: addiu       $v0, $v0, 0x3B30
    ctx->r2 = ADD32(ctx->r2, 0X3B30);
    // 0x8029D718: lw          $a2, 0x0($v0)
    ctx->r6 = MEM_W(ctx->r2, 0X0);
    // 0x8029D71C: lui         $a3, 0x802C
    ctx->r7 = S32(0X802C << 16);
    // 0x8029D720: addiu       $a3, $a3, 0x3B08
    ctx->r7 = ADD32(ctx->r7, 0X3B08);
    // 0x8029D724: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x8029D728: jal         0x8028BB94
    // 0x8029D72C: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    func_8028BB94(rdram, ctx);
        goto after_2;
    // 0x8029D72C: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    after_2:
    // 0x8029D730: lui         $v0, 0x802C
    ctx->r2 = S32(0X802C << 16);
    // 0x8029D734: addiu       $v0, $v0, 0x3B30
    ctx->r2 = ADD32(ctx->r2, 0X3B30);
    // 0x8029D738: lui         $t8, 0x600
    ctx->r24 = S32(0X600 << 16);
    // 0x8029D73C: lui         $t9, 0x600
    ctx->r25 = S32(0X600 << 16);
    // 0x8029D740: lw          $t7, 0x0($v0)
    ctx->r15 = MEM_W(ctx->r2, 0X0);
    // 0x8029D744: addiu       $t9, $t9, 0x0
    ctx->r25 = ADD32(ctx->r25, 0X0);
    // 0x8029D748: addiu       $t8, $t8, 0x800
    ctx->r24 = ADD32(ctx->r24, 0X800);
    // 0x8029D74C: subu        $t0, $t8, $t9
    ctx->r8 = SUB32(ctx->r24, ctx->r25);
    // 0x8029D750: addu        $t1, $t7, $t0
    ctx->r9 = ADD32(ctx->r15, ctx->r8);
    // 0x8029D754: b           L_8029D7A4
    // 0x8029D758: sw          $t1, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r9;
        goto L_8029D7A4;
    // 0x8029D758: sw          $t1, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r9;
L_8029D75C:
    // 0x8029D75C: lui         $v0, 0x802C
    ctx->r2 = S32(0X802C << 16);
    // 0x8029D760: addiu       $v0, $v0, 0x3B30
    ctx->r2 = ADD32(ctx->r2, 0X3B30);
    // 0x8029D764: lw          $a2, 0x0($v0)
    ctx->r6 = MEM_W(ctx->r2, 0X0);
    // 0x8029D768: lui         $a3, 0x802C
    ctx->r7 = S32(0X802C << 16);
    // 0x8029D76C: addiu       $a3, $a3, 0x3B08
    ctx->r7 = ADD32(ctx->r7, 0X3B08);
    // 0x8029D770: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x8029D774: jal         0x8028BB94
    // 0x8029D778: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
    func_8028BB94(rdram, ctx);
        goto after_3;
    // 0x8029D778: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
    after_3:
    // 0x8029D77C: lui         $v0, 0x802C
    ctx->r2 = S32(0X802C << 16);
    // 0x8029D780: addiu       $v0, $v0, 0x3B30
    ctx->r2 = ADD32(ctx->r2, 0X3B30);
    // 0x8029D784: lui         $t3, 0x600
    ctx->r11 = S32(0X600 << 16);
    // 0x8029D788: lui         $t4, 0x600
    ctx->r12 = S32(0X600 << 16);
    // 0x8029D78C: lw          $t2, 0x0($v0)
    ctx->r10 = MEM_W(ctx->r2, 0X0);
    // 0x8029D790: addiu       $t4, $t4, 0x0
    ctx->r12 = ADD32(ctx->r12, 0X0);
    // 0x8029D794: addiu       $t3, $t3, 0x800
    ctx->r11 = ADD32(ctx->r11, 0X800);
    // 0x8029D798: subu        $t5, $t3, $t4
    ctx->r13 = SUB32(ctx->r11, ctx->r12);
    // 0x8029D79C: addu        $t6, $t2, $t5
    ctx->r14 = ADD32(ctx->r10, ctx->r13);
    // 0x8029D7A0: sw          $t6, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r14;
L_8029D7A4:
    // 0x8029D7A4: jal         0x802A1190
    // 0x8029D7A8: nop

    func_802A1190(rdram, ctx);
        goto after_4;
    // 0x8029D7A8: nop

    after_4:
    // 0x8029D7AC: lui         $v0, 0x802C
    ctx->r2 = S32(0X802C << 16);
    // 0x8029D7B0: addiu       $v0, $v0, 0x3B30
    ctx->r2 = ADD32(ctx->r2, 0X3B30);
    // 0x8029D7B4: lw          $a1, 0x0($v0)
    ctx->r5 = MEM_W(ctx->r2, 0X0);
    // 0x8029D7B8: lui         $a2, 0x802C
    ctx->r6 = S32(0X802C << 16);
    // 0x8029D7BC: addiu       $a2, $a2, 0x3B10
    ctx->r6 = ADD32(ctx->r6, 0X3B10);
    // 0x8029D7C0: jal         0x8028BB68
    // 0x8029D7C4: addiu       $a0, $zero, 0x1A
    ctx->r4 = ADD32(0, 0X1A);
    func_8028BB68(rdram, ctx);
        goto after_5;
    // 0x8029D7C4: addiu       $a0, $zero, 0x1A
    ctx->r4 = ADD32(0, 0X1A);
    after_5:
    // 0x8029D7C8: lui         $v0, 0x802C
    ctx->r2 = S32(0X802C << 16);
    // 0x8029D7CC: addiu       $v0, $v0, 0x3B30
    ctx->r2 = ADD32(ctx->r2, 0X3B30);
    // 0x8029D7D0: lui         $t9, 0x601
    ctx->r25 = S32(0X601 << 16);
    // 0x8029D7D4: lui         $t7, 0x600
    ctx->r15 = S32(0X600 << 16);
    // 0x8029D7D8: lw          $t8, 0x0($v0)
    ctx->r24 = MEM_W(ctx->r2, 0X0);
    // 0x8029D7DC: addiu       $t7, $t7, 0x0
    ctx->r15 = ADD32(ctx->r15, 0X0);
    // 0x8029D7E0: addiu       $t9, $t9, 0x2900
    ctx->r25 = ADD32(ctx->r25, 0X2900);
    // 0x8029D7E4: subu        $t0, $t9, $t7
    ctx->r8 = SUB32(ctx->r25, ctx->r15);
    // 0x8029D7E8: lui         $a2, 0x802C
    ctx->r6 = S32(0X802C << 16);
    // 0x8029D7EC: addu        $a1, $t8, $t0
    ctx->r5 = ADD32(ctx->r24, ctx->r8);
    // 0x8029D7F0: sw          $a1, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r5;
    // 0x8029D7F4: addiu       $a2, $a2, 0x3B18
    ctx->r6 = ADD32(ctx->r6, 0X3B18);
    // 0x8029D7F8: jal         0x8028BB68
    // 0x8029D7FC: addiu       $a0, $zero, 0x1D
    ctx->r4 = ADD32(0, 0X1D);
    func_8028BB68(rdram, ctx);
        goto after_6;
    // 0x8029D7FC: addiu       $a0, $zero, 0x1D
    ctx->r4 = ADD32(0, 0X1D);
    after_6:
    // 0x8029D800: lui         $v0, 0x802C
    ctx->r2 = S32(0X802C << 16);
    // 0x8029D804: addiu       $v0, $v0, 0x3B30
    ctx->r2 = ADD32(ctx->r2, 0X3B30);
    // 0x8029D808: lui         $t4, 0x600
    ctx->r12 = S32(0X600 << 16);
    // 0x8029D80C: lui         $t2, 0x600
    ctx->r10 = S32(0X600 << 16);
    // 0x8029D810: lw          $t3, 0x0($v0)
    ctx->r11 = MEM_W(ctx->r2, 0X0);
    // 0x8029D814: lui         $s0, 0xF
    ctx->r16 = S32(0XF << 16);
    // 0x8029D818: addiu       $t2, $t2, 0x0
    ctx->r10 = ADD32(ctx->r10, 0X0);
    // 0x8029D81C: addiu       $t4, $t4, 0x6E00
    ctx->r12 = ADD32(ctx->r12, 0X6E00);
    // 0x8029D820: lui         $t9, 0x600
    ctx->r25 = S32(0X600 << 16);
    // 0x8029D824: ori         $s0, $s0, 0xFFFF
    ctx->r16 = ctx->r16 | 0XFFFF;
    // 0x8029D828: lui         $s1, 0x803A
    ctx->r17 = S32(0X803A << 16);
    // 0x8029D82C: subu        $t5, $t4, $t2
    ctx->r13 = SUB32(ctx->r12, ctx->r10);
    // 0x8029D830: addiu       $t9, $t9, 0x47D0
    ctx->r25 = ADD32(ctx->r25, 0X47D0);
    // 0x8029D834: ori         $s1, $s1, 0xDA00
    ctx->r17 = ctx->r17 | 0XDA00;
    // 0x8029D838: and         $t7, $t9, $s0
    ctx->r15 = ctx->r25 & ctx->r16;
    // 0x8029D83C: addu        $t6, $t3, $t5
    ctx->r14 = ADD32(ctx->r11, ctx->r13);
    // 0x8029D840: sw          $t6, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r14;
    // 0x8029D844: jal         0x8028B950
    // 0x8029D848: addu        $a0, $t7, $s1
    ctx->r4 = ADD32(ctx->r15, ctx->r17);
    func_8028B950(rdram, ctx);
        goto after_7;
    // 0x8029D848: addu        $a0, $t7, $s1
    ctx->r4 = ADD32(ctx->r15, ctx->r17);
    after_7:
    // 0x8029D84C: lui         $t8, 0x600
    ctx->r24 = S32(0X600 << 16);
    // 0x8029D850: addiu       $t8, $t8, 0x6518
    ctx->r24 = ADD32(ctx->r24, 0X6518);
    // 0x8029D854: and         $t0, $t8, $s0
    ctx->r8 = ctx->r24 & ctx->r16;
    // 0x8029D858: jal         0x8028B950
    // 0x8029D85C: addu        $a0, $t0, $s1
    ctx->r4 = ADD32(ctx->r8, ctx->r17);
    func_8028B950(rdram, ctx);
        goto after_8;
    // 0x8029D85C: addu        $a0, $t0, $s1
    ctx->r4 = ADD32(ctx->r8, ctx->r17);
    after_8:
    // 0x8029D860: lui         $t1, 0x600
    ctx->r9 = S32(0X600 << 16);
    // 0x8029D864: addiu       $t1, $t1, 0x6D48
    ctx->r9 = ADD32(ctx->r9, 0X6D48);
    // 0x8029D868: and         $t4, $t1, $s0
    ctx->r12 = ctx->r9 & ctx->r16;
    // 0x8029D86C: jal         0x8028B950
    // 0x8029D870: addu        $a0, $t4, $s1
    ctx->r4 = ADD32(ctx->r12, ctx->r17);
    func_8028B950(rdram, ctx);
        goto after_9;
    // 0x8029D870: addu        $a0, $t4, $s1
    ctx->r4 = ADD32(ctx->r12, ctx->r17);
    after_9:
    // 0x8029D874: lui         $t2, 0x600
    ctx->r10 = S32(0X600 << 16);
    // 0x8029D878: addiu       $t2, $t2, 0x7708
    ctx->r10 = ADD32(ctx->r10, 0X7708);
    // 0x8029D87C: and         $t3, $t2, $s0
    ctx->r11 = ctx->r10 & ctx->r16;
    // 0x8029D880: jal         0x8028B950
    // 0x8029D884: addu        $a0, $t3, $s1
    ctx->r4 = ADD32(ctx->r11, ctx->r17);
    func_8028B950(rdram, ctx);
        goto after_10;
    // 0x8029D884: addu        $a0, $t3, $s1
    ctx->r4 = ADD32(ctx->r11, ctx->r17);
    after_10:
    // 0x8029D888: lui         $t5, 0x601
    ctx->r13 = S32(0X601 << 16);
    // 0x8029D88C: addiu       $t5, $t5, -0x7EA0
    ctx->r13 = ADD32(ctx->r13, -0X7EA0);
    // 0x8029D890: and         $t6, $t5, $s0
    ctx->r14 = ctx->r13 & ctx->r16;
    // 0x8029D894: jal         0x8028B950
    // 0x8029D898: addu        $a0, $t6, $s1
    ctx->r4 = ADD32(ctx->r14, ctx->r17);
    func_8028B950(rdram, ctx);
        goto after_11;
    // 0x8029D898: addu        $a0, $t6, $s1
    ctx->r4 = ADD32(ctx->r14, ctx->r17);
    after_11:
    // 0x8029D89C: lui         $t9, 0x601
    ctx->r25 = S32(0X601 << 16);
    // 0x8029D8A0: addiu       $t9, $t9, -0x7438
    ctx->r25 = ADD32(ctx->r25, -0X7438);
    // 0x8029D8A4: and         $t7, $t9, $s0
    ctx->r15 = ctx->r25 & ctx->r16;
    // 0x8029D8A8: jal         0x8028B950
    // 0x8029D8AC: addu        $a0, $t7, $s1
    ctx->r4 = ADD32(ctx->r15, ctx->r17);
    func_8028B950(rdram, ctx);
        goto after_12;
    // 0x8029D8AC: addu        $a0, $t7, $s1
    ctx->r4 = ADD32(ctx->r15, ctx->r17);
    after_12:
    // 0x8029D8B0: lui         $t8, 0x601
    ctx->r24 = S32(0X601 << 16);
    // 0x8029D8B4: addiu       $t8, $t8, -0x6A68
    ctx->r24 = ADD32(ctx->r24, -0X6A68);
    // 0x8029D8B8: and         $t0, $t8, $s0
    ctx->r8 = ctx->r24 & ctx->r16;
    // 0x8029D8BC: jal         0x8028B950
    // 0x8029D8C0: addu        $a0, $t0, $s1
    ctx->r4 = ADD32(ctx->r8, ctx->r17);
    func_8028B950(rdram, ctx);
        goto after_13;
    // 0x8029D8C0: addu        $a0, $t0, $s1
    ctx->r4 = ADD32(ctx->r8, ctx->r17);
    after_13:
    // 0x8029D8C4: lui         $t1, 0x601
    ctx->r9 = S32(0X601 << 16);
    // 0x8029D8C8: addiu       $t1, $t1, -0x6238
    ctx->r9 = ADD32(ctx->r9, -0X6238);
    // 0x8029D8CC: and         $t4, $t1, $s0
    ctx->r12 = ctx->r9 & ctx->r16;
    // 0x8029D8D0: jal         0x8028B950
    // 0x8029D8D4: addu        $a0, $t4, $s1
    ctx->r4 = ADD32(ctx->r12, ctx->r17);
    func_8028B950(rdram, ctx);
        goto after_14;
    // 0x8029D8D4: addu        $a0, $t4, $s1
    ctx->r4 = ADD32(ctx->r12, ctx->r17);
    after_14:
    // 0x8029D8D8: lui         $t2, 0x600
    ctx->r10 = S32(0X600 << 16);
    // 0x8029D8DC: addiu       $t2, $t2, 0x4930
    ctx->r10 = ADD32(ctx->r10, 0X4930);
    // 0x8029D8E0: and         $t3, $t2, $s0
    ctx->r11 = ctx->r10 & ctx->r16;
    // 0x8029D8E4: jal         0x8028B950
    // 0x8029D8E8: addu        $a0, $t3, $s1
    ctx->r4 = ADD32(ctx->r11, ctx->r17);
    func_8028B950(rdram, ctx);
        goto after_15;
    // 0x8029D8E8: addu        $a0, $t3, $s1
    ctx->r4 = ADD32(ctx->r11, ctx->r17);
    after_15:
    // 0x8029D8EC: lui         $t5, 0x600
    ctx->r13 = S32(0X600 << 16);
    // 0x8029D8F0: addiu       $t5, $t5, 0x6648
    ctx->r13 = ADD32(ctx->r13, 0X6648);
    // 0x8029D8F4: and         $t6, $t5, $s0
    ctx->r14 = ctx->r13 & ctx->r16;
    // 0x8029D8F8: jal         0x8028B950
    // 0x8029D8FC: addu        $a0, $t6, $s1
    ctx->r4 = ADD32(ctx->r14, ctx->r17);
    func_8028B950(rdram, ctx);
        goto after_16;
    // 0x8029D8FC: addu        $a0, $t6, $s1
    ctx->r4 = ADD32(ctx->r14, ctx->r17);
    after_16:
    // 0x8029D900: lui         $t9, 0x600
    ctx->r25 = S32(0X600 << 16);
    // 0x8029D904: addiu       $t9, $t9, 0x6E78
    ctx->r25 = ADD32(ctx->r25, 0X6E78);
    // 0x8029D908: and         $t7, $t9, $s0
    ctx->r15 = ctx->r25 & ctx->r16;
    // 0x8029D90C: jal         0x8028B950
    // 0x8029D910: addu        $a0, $t7, $s1
    ctx->r4 = ADD32(ctx->r15, ctx->r17);
    func_8028B950(rdram, ctx);
        goto after_17;
    // 0x8029D910: addu        $a0, $t7, $s1
    ctx->r4 = ADD32(ctx->r15, ctx->r17);
    after_17:
    // 0x8029D914: lui         $t8, 0x600
    ctx->r24 = S32(0X600 << 16);
    // 0x8029D918: addiu       $t8, $t8, 0x7838
    ctx->r24 = ADD32(ctx->r24, 0X7838);
    // 0x8029D91C: and         $t0, $t8, $s0
    ctx->r8 = ctx->r24 & ctx->r16;
    // 0x8029D920: jal         0x8028B950
    // 0x8029D924: addu        $a0, $t0, $s1
    ctx->r4 = ADD32(ctx->r8, ctx->r17);
    func_8028B950(rdram, ctx);
        goto after_18;
    // 0x8029D924: addu        $a0, $t0, $s1
    ctx->r4 = ADD32(ctx->r8, ctx->r17);
    after_18:
    // 0x8029D928: lui         $t1, 0x601
    ctx->r9 = S32(0X601 << 16);
    // 0x8029D92C: addiu       $t1, $t1, -0x7D70
    ctx->r9 = ADD32(ctx->r9, -0X7D70);
    // 0x8029D930: and         $t4, $t1, $s0
    ctx->r12 = ctx->r9 & ctx->r16;
    // 0x8029D934: jal         0x8028B950
    // 0x8029D938: addu        $a0, $t4, $s1
    ctx->r4 = ADD32(ctx->r12, ctx->r17);
    func_8028B950(rdram, ctx);
        goto after_19;
    // 0x8029D938: addu        $a0, $t4, $s1
    ctx->r4 = ADD32(ctx->r12, ctx->r17);
    after_19:
    // 0x8029D93C: lui         $t2, 0x601
    ctx->r10 = S32(0X601 << 16);
    // 0x8029D940: addiu       $t2, $t2, -0x7308
    ctx->r10 = ADD32(ctx->r10, -0X7308);
    // 0x8029D944: and         $t3, $t2, $s0
    ctx->r11 = ctx->r10 & ctx->r16;
    // 0x8029D948: jal         0x8028B950
    // 0x8029D94C: addu        $a0, $t3, $s1
    ctx->r4 = ADD32(ctx->r11, ctx->r17);
    func_8028B950(rdram, ctx);
        goto after_20;
    // 0x8029D94C: addu        $a0, $t3, $s1
    ctx->r4 = ADD32(ctx->r11, ctx->r17);
    after_20:
    // 0x8029D950: lui         $t5, 0x601
    ctx->r13 = S32(0X601 << 16);
    // 0x8029D954: addiu       $t5, $t5, -0x6938
    ctx->r13 = ADD32(ctx->r13, -0X6938);
    // 0x8029D958: and         $t6, $t5, $s0
    ctx->r14 = ctx->r13 & ctx->r16;
    // 0x8029D95C: jal         0x8028B950
    // 0x8029D960: addu        $a0, $t6, $s1
    ctx->r4 = ADD32(ctx->r14, ctx->r17);
    func_8028B950(rdram, ctx);
        goto after_21;
    // 0x8029D960: addu        $a0, $t6, $s1
    ctx->r4 = ADD32(ctx->r14, ctx->r17);
    after_21:
    // 0x8029D964: lui         $t9, 0x601
    ctx->r25 = S32(0X601 << 16);
    // 0x8029D968: addiu       $t9, $t9, -0x60D8
    ctx->r25 = ADD32(ctx->r25, -0X60D8);
    // 0x8029D96C: and         $t7, $t9, $s0
    ctx->r15 = ctx->r25 & ctx->r16;
    // 0x8029D970: jal         0x8028B950
    // 0x8029D974: addu        $a0, $t7, $s1
    ctx->r4 = ADD32(ctx->r15, ctx->r17);
    func_8028B950(rdram, ctx);
        goto after_22;
    // 0x8029D974: addu        $a0, $t7, $s1
    ctx->r4 = ADD32(ctx->r15, ctx->r17);
    after_22:
    // 0x8029D978: lui         $t8, 0x600
    ctx->r24 = S32(0X600 << 16);
    // 0x8029D97C: addiu       $t8, $t8, 0x4F58
    ctx->r24 = ADD32(ctx->r24, 0X4F58);
    // 0x8029D980: and         $t0, $t8, $s0
    ctx->r8 = ctx->r24 & ctx->r16;
    // 0x8029D984: jal         0x8028B950
    // 0x8029D988: addu        $a0, $t0, $s1
    ctx->r4 = ADD32(ctx->r8, ctx->r17);
    func_8028B950(rdram, ctx);
        goto after_23;
    // 0x8029D988: addu        $a0, $t0, $s1
    ctx->r4 = ADD32(ctx->r8, ctx->r17);
    after_23:
    // 0x8029D98C: lui         $t1, 0x600
    ctx->r9 = S32(0X600 << 16);
    // 0x8029D990: addiu       $t1, $t1, 0x69C8
    ctx->r9 = ADD32(ctx->r9, 0X69C8);
    // 0x8029D994: and         $t4, $t1, $s0
    ctx->r12 = ctx->r9 & ctx->r16;
    // 0x8029D998: jal         0x8028B950
    // 0x8029D99C: addu        $a0, $t4, $s1
    ctx->r4 = ADD32(ctx->r12, ctx->r17);
    func_8028B950(rdram, ctx);
        goto after_24;
    // 0x8029D99C: addu        $a0, $t4, $s1
    ctx->r4 = ADD32(ctx->r12, ctx->r17);
    after_24:
    // 0x8029D9A0: lui         $t2, 0x600
    ctx->r10 = S32(0X600 << 16);
    // 0x8029D9A4: addiu       $t2, $t2, 0x71F0
    ctx->r10 = ADD32(ctx->r10, 0X71F0);
    // 0x8029D9A8: and         $t3, $t2, $s0
    ctx->r11 = ctx->r10 & ctx->r16;
    // 0x8029D9AC: jal         0x8028B950
    // 0x8029D9B0: addu        $a0, $t3, $s1
    ctx->r4 = ADD32(ctx->r11, ctx->r17);
    func_8028B950(rdram, ctx);
        goto after_25;
    // 0x8029D9B0: addu        $a0, $t3, $s1
    ctx->r4 = ADD32(ctx->r11, ctx->r17);
    after_25:
    // 0x8029D9B4: lui         $t5, 0x600
    ctx->r13 = S32(0X600 << 16);
    // 0x8029D9B8: addiu       $t5, $t5, 0x7CA8
    ctx->r13 = ADD32(ctx->r13, 0X7CA8);
    // 0x8029D9BC: and         $t6, $t5, $s0
    ctx->r14 = ctx->r13 & ctx->r16;
    // 0x8029D9C0: jal         0x8028B950
    // 0x8029D9C4: addu        $a0, $t6, $s1
    ctx->r4 = ADD32(ctx->r14, ctx->r17);
    func_8028B950(rdram, ctx);
        goto after_26;
    // 0x8029D9C4: addu        $a0, $t6, $s1
    ctx->r4 = ADD32(ctx->r14, ctx->r17);
    after_26:
    // 0x8029D9C8: lui         $t9, 0x601
    ctx->r25 = S32(0X601 << 16);
    // 0x8029D9CC: addiu       $t9, $t9, -0x78F8
    ctx->r25 = ADD32(ctx->r25, -0X78F8);
    // 0x8029D9D0: and         $t7, $t9, $s0
    ctx->r15 = ctx->r25 & ctx->r16;
    // 0x8029D9D4: jal         0x8028B950
    // 0x8029D9D8: addu        $a0, $t7, $s1
    ctx->r4 = ADD32(ctx->r15, ctx->r17);
    func_8028B950(rdram, ctx);
        goto after_27;
    // 0x8029D9D8: addu        $a0, $t7, $s1
    ctx->r4 = ADD32(ctx->r15, ctx->r17);
    after_27:
    // 0x8029D9DC: lui         $t8, 0x601
    ctx->r24 = S32(0X601 << 16);
    // 0x8029D9E0: addiu       $t8, $t8, -0x6F88
    ctx->r24 = ADD32(ctx->r24, -0X6F88);
    // 0x8029D9E4: and         $t0, $t8, $s0
    ctx->r8 = ctx->r24 & ctx->r16;
    // 0x8029D9E8: jal         0x8028B950
    // 0x8029D9EC: addu        $a0, $t0, $s1
    ctx->r4 = ADD32(ctx->r8, ctx->r17);
    func_8028B950(rdram, ctx);
        goto after_28;
    // 0x8029D9EC: addu        $a0, $t0, $s1
    ctx->r4 = ADD32(ctx->r8, ctx->r17);
    after_28:
    // 0x8029D9F0: lui         $t1, 0x601
    ctx->r9 = S32(0X601 << 16);
    // 0x8029D9F4: addiu       $t1, $t1, -0x65B8
    ctx->r9 = ADD32(ctx->r9, -0X65B8);
    // 0x8029D9F8: and         $t4, $t1, $s0
    ctx->r12 = ctx->r9 & ctx->r16;
    // 0x8029D9FC: jal         0x8028B950
    // 0x8029DA00: addu        $a0, $t4, $s1
    ctx->r4 = ADD32(ctx->r12, ctx->r17);
    func_8028B950(rdram, ctx);
        goto after_29;
    // 0x8029DA00: addu        $a0, $t4, $s1
    ctx->r4 = ADD32(ctx->r12, ctx->r17);
    after_29:
    // 0x8029DA04: lui         $t2, 0x601
    ctx->r10 = S32(0X601 << 16);
    // 0x8029DA08: addiu       $t2, $t2, -0x5AD0
    ctx->r10 = ADD32(ctx->r10, -0X5AD0);
    // 0x8029DA0C: and         $t3, $t2, $s0
    ctx->r11 = ctx->r10 & ctx->r16;
    // 0x8029DA10: jal         0x8028B950
    // 0x8029DA14: addu        $a0, $t3, $s1
    ctx->r4 = ADD32(ctx->r11, ctx->r17);
    func_8028B950(rdram, ctx);
        goto after_30;
    // 0x8029DA14: addu        $a0, $t3, $s1
    ctx->r4 = ADD32(ctx->r11, ctx->r17);
    after_30:
    // 0x8029DA18: lui         $t5, 0x600
    ctx->r13 = S32(0X600 << 16);
    // 0x8029DA1C: addiu       $t5, $t5, 0x5748
    ctx->r13 = ADD32(ctx->r13, 0X5748);
    // 0x8029DA20: and         $t6, $t5, $s0
    ctx->r14 = ctx->r13 & ctx->r16;
    // 0x8029DA24: jal         0x8028B950
    // 0x8029DA28: addu        $a0, $t6, $s1
    ctx->r4 = ADD32(ctx->r14, ctx->r17);
    func_8028B950(rdram, ctx);
        goto after_31;
    // 0x8029DA28: addu        $a0, $t6, $s1
    ctx->r4 = ADD32(ctx->r14, ctx->r17);
    after_31:
    // 0x8029DA2C: lui         $t9, 0x600
    ctx->r25 = S32(0X600 << 16);
    // 0x8029DA30: addiu       $t9, $t9, 0x7568
    ctx->r25 = ADD32(ctx->r25, 0X7568);
    // 0x8029DA34: and         $t7, $t9, $s0
    ctx->r15 = ctx->r25 & ctx->r16;
    // 0x8029DA38: jal         0x8028B950
    // 0x8029DA3C: addu        $a0, $t7, $s1
    ctx->r4 = ADD32(ctx->r15, ctx->r17);
    func_8028B950(rdram, ctx);
        goto after_32;
    // 0x8029DA3C: addu        $a0, $t7, $s1
    ctx->r4 = ADD32(ctx->r15, ctx->r17);
    after_32:
    // 0x8029DA40: lui         $t8, 0x601
    ctx->r24 = S32(0X601 << 16);
    // 0x8029DA44: addiu       $t8, $t8, -0x7FE0
    ctx->r24 = ADD32(ctx->r24, -0X7FE0);
    // 0x8029DA48: and         $t0, $t8, $s0
    ctx->r8 = ctx->r24 & ctx->r16;
    // 0x8029DA4C: jal         0x8028B950
    // 0x8029DA50: addu        $a0, $t0, $s1
    ctx->r4 = ADD32(ctx->r8, ctx->r17);
    func_8028B950(rdram, ctx);
        goto after_33;
    // 0x8029DA50: addu        $a0, $t0, $s1
    ctx->r4 = ADD32(ctx->r8, ctx->r17);
    after_33:
    // 0x8029DA54: lui         $t1, 0x601
    ctx->r9 = S32(0X601 << 16);
    // 0x8029DA58: addiu       $t1, $t1, -0x7578
    ctx->r9 = ADD32(ctx->r9, -0X7578);
    // 0x8029DA5C: and         $t4, $t1, $s0
    ctx->r12 = ctx->r9 & ctx->r16;
    // 0x8029DA60: jal         0x8028B950
    // 0x8029DA64: addu        $a0, $t4, $s1
    ctx->r4 = ADD32(ctx->r12, ctx->r17);
    func_8028B950(rdram, ctx);
        goto after_34;
    // 0x8029DA64: addu        $a0, $t4, $s1
    ctx->r4 = ADD32(ctx->r12, ctx->r17);
    after_34:
    // 0x8029DA68: lui         $t2, 0x601
    ctx->r10 = S32(0X601 << 16);
    // 0x8029DA6C: addiu       $t2, $t2, -0x6C08
    ctx->r10 = ADD32(ctx->r10, -0X6C08);
    // 0x8029DA70: and         $t3, $t2, $s0
    ctx->r11 = ctx->r10 & ctx->r16;
    // 0x8029DA74: jal         0x8028B950
    // 0x8029DA78: addu        $a0, $t3, $s1
    ctx->r4 = ADD32(ctx->r11, ctx->r17);
    func_8028B950(rdram, ctx);
        goto after_35;
    // 0x8029DA78: addu        $a0, $t3, $s1
    ctx->r4 = ADD32(ctx->r11, ctx->r17);
    after_35:
    // 0x8029DA7C: lui         $t5, 0x600
    ctx->r13 = S32(0X600 << 16);
    // 0x8029DA80: addiu       $t5, $t5, 0x5A28
    ctx->r13 = ADD32(ctx->r13, 0X5A28);
    // 0x8029DA84: and         $t6, $t5, $s0
    ctx->r14 = ctx->r13 & ctx->r16;
    // 0x8029DA88: jal         0x8028B950
    // 0x8029DA8C: addu        $a0, $t6, $s1
    ctx->r4 = ADD32(ctx->r14, ctx->r17);
    func_8028B950(rdram, ctx);
        goto after_36;
    // 0x8029DA8C: addu        $a0, $t6, $s1
    ctx->r4 = ADD32(ctx->r14, ctx->r17);
    after_36:
    // 0x8029DA90: lui         $t9, 0x600
    ctx->r25 = S32(0X600 << 16);
    // 0x8029DA94: addiu       $t9, $t9, 0x5C80
    ctx->r25 = ADD32(ctx->r25, 0X5C80);
    // 0x8029DA98: and         $t7, $t9, $s0
    ctx->r15 = ctx->r25 & ctx->r16;
    // 0x8029DA9C: jal         0x8028B950
    // 0x8029DAA0: addu        $a0, $t7, $s1
    ctx->r4 = ADD32(ctx->r15, ctx->r17);
    func_8028B950(rdram, ctx);
        goto after_37;
    // 0x8029DAA0: addu        $a0, $t7, $s1
    ctx->r4 = ADD32(ctx->r15, ctx->r17);
    after_37:
    // 0x8029DAA4: lui         $t8, 0x600
    ctx->r24 = S32(0X600 << 16);
    // 0x8029DAA8: addiu       $t8, $t8, 0x5ED8
    ctx->r24 = ADD32(ctx->r24, 0X5ED8);
    // 0x8029DAAC: and         $t0, $t8, $s0
    ctx->r8 = ctx->r24 & ctx->r16;
    // 0x8029DAB0: jal         0x8028B950
    // 0x8029DAB4: addu        $a0, $t0, $s1
    ctx->r4 = ADD32(ctx->r8, ctx->r17);
    func_8028B950(rdram, ctx);
        goto after_38;
    // 0x8029DAB4: addu        $a0, $t0, $s1
    ctx->r4 = ADD32(ctx->r8, ctx->r17);
    after_38:
    // 0x8029DAB8: lui         $t1, 0x600
    ctx->r9 = S32(0X600 << 16);
    // 0x8029DABC: addiu       $t1, $t1, 0x61F8
    ctx->r9 = ADD32(ctx->r9, 0X61F8);
    // 0x8029DAC0: and         $t4, $t1, $s0
    ctx->r12 = ctx->r9 & ctx->r16;
    // 0x8029DAC4: jal         0x8028B950
    // 0x8029DAC8: addu        $a0, $t4, $s1
    ctx->r4 = ADD32(ctx->r12, ctx->r17);
    func_8028B950(rdram, ctx);
        goto after_39;
    // 0x8029DAC8: addu        $a0, $t4, $s1
    ctx->r4 = ADD32(ctx->r12, ctx->r17);
    after_39:
    // 0x8029DACC: lui         $t2, 0x601
    ctx->r10 = S32(0X601 << 16);
    // 0x8029DAD0: addiu       $t2, $t2, -0x52C8
    ctx->r10 = ADD32(ctx->r10, -0X52C8);
    // 0x8029DAD4: and         $t3, $t2, $s0
    ctx->r11 = ctx->r10 & ctx->r16;
    // 0x8029DAD8: jal         0x8028B950
    // 0x8029DADC: addu        $a0, $t3, $s1
    ctx->r4 = ADD32(ctx->r11, ctx->r17);
    func_8028B950(rdram, ctx);
        goto after_40;
    // 0x8029DADC: addu        $a0, $t3, $s1
    ctx->r4 = ADD32(ctx->r11, ctx->r17);
    after_40:
    // 0x8029DAE0: lui         $t5, 0x600
    ctx->r13 = S32(0X600 << 16);
    // 0x8029DAE4: addiu       $t5, $t5, 0x54C0
    ctx->r13 = ADD32(ctx->r13, 0X54C0);
    // 0x8029DAE8: and         $t6, $t5, $s0
    ctx->r14 = ctx->r13 & ctx->r16;
    // 0x8029DAEC: jal         0x8028B950
    // 0x8029DAF0: addu        $a0, $t6, $s1
    ctx->r4 = ADD32(ctx->r14, ctx->r17);
    func_8028B950(rdram, ctx);
        goto after_41;
    // 0x8029DAF0: addu        $a0, $t6, $s1
    ctx->r4 = ADD32(ctx->r14, ctx->r17);
    after_41:
    // 0x8029DAF4: lui         $t9, 0x601
    ctx->r25 = S32(0X601 << 16);
    // 0x8029DAF8: addiu       $t9, $t9, -0x5568
    ctx->r25 = ADD32(ctx->r25, -0X5568);
    // 0x8029DAFC: and         $t7, $t9, $s0
    ctx->r15 = ctx->r25 & ctx->r16;
    // 0x8029DB00: jal         0x8028B950
    // 0x8029DB04: addu        $a0, $t7, $s1
    ctx->r4 = ADD32(ctx->r15, ctx->r17);
    func_8028B950(rdram, ctx);
        goto after_42;
    // 0x8029DB04: addu        $a0, $t7, $s1
    ctx->r4 = ADD32(ctx->r15, ctx->r17);
    after_42:
    // 0x8029DB08: lui         $t8, 0xE00
    ctx->r24 = S32(0XE00 << 16);
    // 0x8029DB0C: lui         $s1, 0x803B
    ctx->r17 = S32(0X803B << 16);
    // 0x8029DB10: addiu       $t8, $t8, 0x20F0
    ctx->r24 = ADD32(ctx->r24, 0X20F0);
    // 0x8029DB14: ori         $s1, $s1, 0xB200
    ctx->r17 = ctx->r17 | 0XB200;
    // 0x8029DB18: and         $t0, $t8, $s0
    ctx->r8 = ctx->r24 & ctx->r16;
    // 0x8029DB1C: jal         0x8028B950
    // 0x8029DB20: addu        $a0, $t0, $s1
    ctx->r4 = ADD32(ctx->r8, ctx->r17);
    func_8028B950(rdram, ctx);
        goto after_43;
    // 0x8029DB20: addu        $a0, $t0, $s1
    ctx->r4 = ADD32(ctx->r8, ctx->r17);
    after_43:
    // 0x8029DB24: lui         $t1, 0xE00
    ctx->r9 = S32(0XE00 << 16);
    // 0x8029DB28: addiu       $t1, $t1, 0x5988
    ctx->r9 = ADD32(ctx->r9, 0X5988);
    // 0x8029DB2C: and         $t4, $t1, $s0
    ctx->r12 = ctx->r9 & ctx->r16;
    // 0x8029DB30: jal         0x8028B950
    // 0x8029DB34: addu        $a0, $t4, $s1
    ctx->r4 = ADD32(ctx->r12, ctx->r17);
    func_8028B950(rdram, ctx);
        goto after_44;
    // 0x8029DB34: addu        $a0, $t4, $s1
    ctx->r4 = ADD32(ctx->r12, ctx->r17);
    after_44:
    // 0x8029DB38: lui         $t2, 0xE00
    ctx->r10 = S32(0XE00 << 16);
    // 0x8029DB3C: addiu       $t2, $t2, 0x1CC0
    ctx->r10 = ADD32(ctx->r10, 0X1CC0);
    // 0x8029DB40: and         $t3, $t2, $s0
    ctx->r11 = ctx->r10 & ctx->r16;
    // 0x8029DB44: jal         0x8028B950
    // 0x8029DB48: addu        $a0, $t3, $s1
    ctx->r4 = ADD32(ctx->r11, ctx->r17);
    func_8028B950(rdram, ctx);
        goto after_45;
    // 0x8029DB48: addu        $a0, $t3, $s1
    ctx->r4 = ADD32(ctx->r11, ctx->r17);
    after_45:
    // 0x8029DB4C: lui         $t5, 0xE00
    ctx->r13 = S32(0XE00 << 16);
    // 0x8029DB50: addiu       $t5, $t5, 0x2F38
    ctx->r13 = ADD32(ctx->r13, 0X2F38);
    // 0x8029DB54: and         $t6, $t5, $s0
    ctx->r14 = ctx->r13 & ctx->r16;
    // 0x8029DB58: jal         0x8028B950
    // 0x8029DB5C: addu        $a0, $t6, $s1
    ctx->r4 = ADD32(ctx->r14, ctx->r17);
    func_8028B950(rdram, ctx);
        goto after_46;
    // 0x8029DB5C: addu        $a0, $t6, $s1
    ctx->r4 = ADD32(ctx->r14, ctx->r17);
    after_46:
    // 0x8029DB60: lui         $t9, 0xE00
    ctx->r25 = S32(0XE00 << 16);
    // 0x8029DB64: addiu       $t9, $t9, 0x3438
    ctx->r25 = ADD32(ctx->r25, 0X3438);
    // 0x8029DB68: and         $t7, $t9, $s0
    ctx->r15 = ctx->r25 & ctx->r16;
    // 0x8029DB6C: jal         0x8028B950
    // 0x8029DB70: addu        $a0, $t7, $s1
    ctx->r4 = ADD32(ctx->r15, ctx->r17);
    func_8028B950(rdram, ctx);
        goto after_47;
    // 0x8029DB70: addu        $a0, $t7, $s1
    ctx->r4 = ADD32(ctx->r15, ctx->r17);
    after_47:
    // 0x8029DB74: lui         $t8, 0xE00
    ctx->r24 = S32(0XE00 << 16);
    // 0x8029DB78: addiu       $t8, $t8, 0x3938
    ctx->r24 = ADD32(ctx->r24, 0X3938);
    // 0x8029DB7C: and         $t0, $t8, $s0
    ctx->r8 = ctx->r24 & ctx->r16;
    // 0x8029DB80: jal         0x8028B950
    // 0x8029DB84: addu        $a0, $t0, $s1
    ctx->r4 = ADD32(ctx->r8, ctx->r17);
    func_8028B950(rdram, ctx);
        goto after_48;
    // 0x8029DB84: addu        $a0, $t0, $s1
    ctx->r4 = ADD32(ctx->r8, ctx->r17);
    after_48:
    // 0x8029DB88: lui         $t1, 0xE00
    ctx->r9 = S32(0XE00 << 16);
    // 0x8029DB8C: addiu       $t1, $t1, 0x4248
    ctx->r9 = ADD32(ctx->r9, 0X4248);
    // 0x8029DB90: and         $t4, $t1, $s0
    ctx->r12 = ctx->r9 & ctx->r16;
    // 0x8029DB94: jal         0x8028B950
    // 0x8029DB98: addu        $a0, $t4, $s1
    ctx->r4 = ADD32(ctx->r12, ctx->r17);
    func_8028B950(rdram, ctx);
        goto after_49;
    // 0x8029DB98: addu        $a0, $t4, $s1
    ctx->r4 = ADD32(ctx->r12, ctx->r17);
    after_49:
    // 0x8029DB9C: lui         $t2, 0xE00
    ctx->r10 = S32(0XE00 << 16);
    // 0x8029DBA0: addiu       $t2, $t2, 0x4A88
    ctx->r10 = ADD32(ctx->r10, 0X4A88);
    // 0x8029DBA4: and         $t3, $t2, $s0
    ctx->r11 = ctx->r10 & ctx->r16;
    // 0x8029DBA8: jal         0x8028B950
    // 0x8029DBAC: addu        $a0, $t3, $s1
    ctx->r4 = ADD32(ctx->r11, ctx->r17);
    func_8028B950(rdram, ctx);
        goto after_50;
    // 0x8029DBAC: addu        $a0, $t3, $s1
    ctx->r4 = ADD32(ctx->r11, ctx->r17);
    after_50:
    // 0x8029DBB0: lui         $t5, 0xE00
    ctx->r13 = S32(0XE00 << 16);
    // 0x8029DBB4: addiu       $t5, $t5, 0x4EB8
    ctx->r13 = ADD32(ctx->r13, 0X4EB8);
    // 0x8029DBB8: and         $t6, $t5, $s0
    ctx->r14 = ctx->r13 & ctx->r16;
    // 0x8029DBBC: jal         0x8028B950
    // 0x8029DBC0: addu        $a0, $t6, $s1
    ctx->r4 = ADD32(ctx->r14, ctx->r17);
    func_8028B950(rdram, ctx);
        goto after_51;
    // 0x8029DBC0: addu        $a0, $t6, $s1
    ctx->r4 = ADD32(ctx->r14, ctx->r17);
    after_51:
    // 0x8029DBC4: lui         $t9, 0xE00
    ctx->r25 = S32(0XE00 << 16);
    // 0x8029DBC8: addiu       $t9, $t9, 0x5558
    ctx->r25 = ADD32(ctx->r25, 0X5558);
    // 0x8029DBCC: and         $t7, $t9, $s0
    ctx->r15 = ctx->r25 & ctx->r16;
    // 0x8029DBD0: jal         0x8028B950
    // 0x8029DBD4: addu        $a0, $t7, $s1
    ctx->r4 = ADD32(ctx->r15, ctx->r17);
    func_8028B950(rdram, ctx);
        goto after_52;
    // 0x8029DBD4: addu        $a0, $t7, $s1
    ctx->r4 = ADD32(ctx->r15, ctx->r17);
    after_52:
    // 0x8029DBD8: lui         $t8, 0xE00
    ctx->r24 = S32(0XE00 << 16);
    // 0x8029DBDC: addiu       $t8, $t8, 0x1ED8
    ctx->r24 = ADD32(ctx->r24, 0X1ED8);
    // 0x8029DBE0: and         $t0, $t8, $s0
    ctx->r8 = ctx->r24 & ctx->r16;
    // 0x8029DBE4: jal         0x8028B950
    // 0x8029DBE8: addu        $a0, $t0, $s1
    ctx->r4 = ADD32(ctx->r8, ctx->r17);
    func_8028B950(rdram, ctx);
        goto after_53;
    // 0x8029DBE8: addu        $a0, $t0, $s1
    ctx->r4 = ADD32(ctx->r8, ctx->r17);
    after_53:
    // 0x8029DBEC: lui         $t1, 0xE00
    ctx->r9 = S32(0XE00 << 16);
    // 0x8029DBF0: addiu       $t1, $t1, 0x3150
    ctx->r9 = ADD32(ctx->r9, 0X3150);
    // 0x8029DBF4: and         $t4, $t1, $s0
    ctx->r12 = ctx->r9 & ctx->r16;
    // 0x8029DBF8: jal         0x8028B950
    // 0x8029DBFC: addu        $a0, $t4, $s1
    ctx->r4 = ADD32(ctx->r12, ctx->r17);
    func_8028B950(rdram, ctx);
        goto after_54;
    // 0x8029DBFC: addu        $a0, $t4, $s1
    ctx->r4 = ADD32(ctx->r12, ctx->r17);
    after_54:
    // 0x8029DC00: lui         $t2, 0xE00
    ctx->r10 = S32(0XE00 << 16);
    // 0x8029DC04: addiu       $t2, $t2, 0x3720
    ctx->r10 = ADD32(ctx->r10, 0X3720);
    // 0x8029DC08: and         $t3, $t2, $s0
    ctx->r11 = ctx->r10 & ctx->r16;
    // 0x8029DC0C: jal         0x8028B950
    // 0x8029DC10: addu        $a0, $t3, $s1
    ctx->r4 = ADD32(ctx->r11, ctx->r17);
    func_8028B950(rdram, ctx);
        goto after_55;
    // 0x8029DC10: addu        $a0, $t3, $s1
    ctx->r4 = ADD32(ctx->r11, ctx->r17);
    after_55:
    // 0x8029DC14: lui         $t5, 0xE00
    ctx->r13 = S32(0XE00 << 16);
    // 0x8029DC18: addiu       $t5, $t5, 0x3DC0
    ctx->r13 = ADD32(ctx->r13, 0X3DC0);
    // 0x8029DC1C: and         $t6, $t5, $s0
    ctx->r14 = ctx->r13 & ctx->r16;
    // 0x8029DC20: jal         0x8028B950
    // 0x8029DC24: addu        $a0, $t6, $s1
    ctx->r4 = ADD32(ctx->r14, ctx->r17);
    func_8028B950(rdram, ctx);
        goto after_56;
    // 0x8029DC24: addu        $a0, $t6, $s1
    ctx->r4 = ADD32(ctx->r14, ctx->r17);
    after_56:
    // 0x8029DC28: lui         $t9, 0xE00
    ctx->r25 = S32(0XE00 << 16);
    // 0x8029DC2C: addiu       $t9, $t9, 0x46D0
    ctx->r25 = ADD32(ctx->r25, 0X46D0);
    // 0x8029DC30: and         $t7, $t9, $s0
    ctx->r15 = ctx->r25 & ctx->r16;
    // 0x8029DC34: jal         0x8028B950
    // 0x8029DC38: addu        $a0, $t7, $s1
    ctx->r4 = ADD32(ctx->r15, ctx->r17);
    func_8028B950(rdram, ctx);
        goto after_57;
    // 0x8029DC38: addu        $a0, $t7, $s1
    ctx->r4 = ADD32(ctx->r15, ctx->r17);
    after_57:
    // 0x8029DC3C: lui         $t8, 0xE00
    ctx->r24 = S32(0XE00 << 16);
    // 0x8029DC40: addiu       $t8, $t8, 0x4CA0
    ctx->r24 = ADD32(ctx->r24, 0X4CA0);
    // 0x8029DC44: and         $t0, $t8, $s0
    ctx->r8 = ctx->r24 & ctx->r16;
    // 0x8029DC48: jal         0x8028B950
    // 0x8029DC4C: addu        $a0, $t0, $s1
    ctx->r4 = ADD32(ctx->r8, ctx->r17);
    func_8028B950(rdram, ctx);
        goto after_58;
    // 0x8029DC4C: addu        $a0, $t0, $s1
    ctx->r4 = ADD32(ctx->r8, ctx->r17);
    after_58:
    // 0x8029DC50: lui         $t1, 0xE00
    ctx->r9 = S32(0XE00 << 16);
    // 0x8029DC54: addiu       $t1, $t1, 0x51A0
    ctx->r9 = ADD32(ctx->r9, 0X51A0);
    // 0x8029DC58: and         $t4, $t1, $s0
    ctx->r12 = ctx->r9 & ctx->r16;
    // 0x8029DC5C: jal         0x8028B950
    // 0x8029DC60: addu        $a0, $t4, $s1
    ctx->r4 = ADD32(ctx->r12, ctx->r17);
    func_8028B950(rdram, ctx);
        goto after_59;
    // 0x8029DC60: addu        $a0, $t4, $s1
    ctx->r4 = ADD32(ctx->r12, ctx->r17);
    after_59:
    // 0x8029DC64: lui         $t2, 0xE00
    ctx->r10 = S32(0XE00 << 16);
    // 0x8029DC68: addiu       $t2, $t2, 0x5770
    ctx->r10 = ADD32(ctx->r10, 0X5770);
    // 0x8029DC6C: and         $t3, $t2, $s0
    ctx->r11 = ctx->r10 & ctx->r16;
    // 0x8029DC70: jal         0x8028B950
    // 0x8029DC74: addu        $a0, $t3, $s1
    ctx->r4 = ADD32(ctx->r11, ctx->r17);
    func_8028B950(rdram, ctx);
        goto after_60;
    // 0x8029DC74: addu        $a0, $t3, $s1
    ctx->r4 = ADD32(ctx->r11, ctx->r17);
    after_60:
    // 0x8029DC78: jal         0x8029F548
    // 0x8029DC7C: nop

    func_8029F548(rdram, ctx);
        goto after_61;
    // 0x8029DC7C: nop

    after_61:
    // 0x8029DC80: jal         0x802A0D44
    // 0x8029DC84: nop

    func_802A0D44(rdram, ctx);
        goto after_62;
    // 0x8029DC84: nop

    after_62:
    // 0x8029DC88: lui         $v1, 0x8011
    ctx->r3 = S32(0X8011 << 16);
    // 0x8029DC8C: addiu       $v1, $v1, -0x2F98
    ctx->r3 = ADD32(ctx->r3, -0X2F98);
    // 0x8029DC90: lw          $t5, 0x0($v1)
    ctx->r13 = MEM_W(ctx->r3, 0X0);
    // 0x8029DC94: lui         $a0, 0x2
    ctx->r4 = S32(0X2 << 16);
    // 0x8029DC98: ori         $a0, $a0, 0x8000
    ctx->r4 = ctx->r4 | 0X8000;
    // 0x8029DC9C: lui         $a1, 0x600
    ctx->r5 = S32(0X600 << 16);
    // 0x8029DCA0: addiu       $a1, $a1, 0x4930
    ctx->r5 = ADD32(ctx->r5, 0X4930);
    // 0x8029DCA4: addu        $t6, $t5, $a0
    ctx->r14 = ADD32(ctx->r13, ctx->r4);
    // 0x8029DCA8: sw          $a1, 0x1398($t6)
    MEM_W(0X1398, ctx->r14) = ctx->r5;
    // 0x8029DCAC: lw          $t7, 0x0($v1)
    ctx->r15 = MEM_W(ctx->r3, 0X0);
    // 0x8029DCB0: addiu       $t9, $zero, 0x4
    ctx->r25 = ADD32(0, 0X4);
    // 0x8029DCB4: addu        $t8, $t7, $a0
    ctx->r24 = ADD32(ctx->r15, ctx->r4);
    // 0x8029DCB8: lui         $v0, 0x802C
    ctx->r2 = S32(0X802C << 16);
    // 0x8029DCBC: sw          $t9, 0x139C($t8)
    MEM_W(0X139C, ctx->r24) = ctx->r25;
    // 0x8029DCC0: addiu       $v0, $v0, 0x3600
    ctx->r2 = ADD32(ctx->r2, 0X3600);
    // 0x8029DCC4: lui         $t0, 0x600
    ctx->r8 = S32(0X600 << 16);
    // 0x8029DCC8: lui         $t1, 0x600
    ctx->r9 = S32(0X600 << 16);
    // 0x8029DCCC: lui         $t4, 0x600
    ctx->r12 = S32(0X600 << 16);
    // 0x8029DCD0: lui         $t2, 0x600
    ctx->r10 = S32(0X600 << 16);
    // 0x8029DCD4: lui         $t3, 0x601
    ctx->r11 = S32(0X601 << 16);
    // 0x8029DCD8: lui         $t5, 0x601
    ctx->r13 = S32(0X601 << 16);
    // 0x8029DCDC: lui         $t6, 0x601
    ctx->r14 = S32(0X601 << 16);
    // 0x8029DCE0: lui         $t7, 0x601
    ctx->r15 = S32(0X601 << 16);
    // 0x8029DCE4: addiu       $t0, $t0, 0x47D0
    ctx->r8 = ADD32(ctx->r8, 0X47D0);
    // 0x8029DCE8: addiu       $t1, $t1, 0x6518
    ctx->r9 = ADD32(ctx->r9, 0X6518);
    // 0x8029DCEC: addiu       $t4, $t4, 0x6D48
    ctx->r12 = ADD32(ctx->r12, 0X6D48);
    // 0x8029DCF0: addiu       $t2, $t2, 0x7708
    ctx->r10 = ADD32(ctx->r10, 0X7708);
    // 0x8029DCF4: addiu       $t3, $t3, -0x7EA0
    ctx->r11 = ADD32(ctx->r11, -0X7EA0);
    // 0x8029DCF8: addiu       $t5, $t5, -0x7438
    ctx->r13 = ADD32(ctx->r13, -0X7438);
    // 0x8029DCFC: addiu       $t6, $t6, -0x6A68
    ctx->r14 = ADD32(ctx->r14, -0X6A68);
    // 0x8029DD00: addiu       $t7, $t7, -0x6238
    ctx->r15 = ADD32(ctx->r15, -0X6238);
    // 0x8029DD04: sw          $t0, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r8;
    // 0x8029DD08: sw          $t1, 0xC($v0)
    MEM_W(0XC, ctx->r2) = ctx->r9;
    // 0x8029DD0C: sw          $t4, 0x14($v0)
    MEM_W(0X14, ctx->r2) = ctx->r12;
    // 0x8029DD10: sw          $t2, 0x1C($v0)
    MEM_W(0X1C, ctx->r2) = ctx->r10;
    // 0x8029DD14: sw          $t3, 0x24($v0)
    MEM_W(0X24, ctx->r2) = ctx->r11;
    // 0x8029DD18: sw          $t5, 0x2C($v0)
    MEM_W(0X2C, ctx->r2) = ctx->r13;
    // 0x8029DD1C: sw          $t6, 0x34($v0)
    MEM_W(0X34, ctx->r2) = ctx->r14;
    // 0x8029DD20: sw          $t7, 0x3C($v0)
    MEM_W(0X3C, ctx->r2) = ctx->r15;
    // 0x8029DD24: lui         $t9, 0x8009
    ctx->r25 = S32(0X8009 << 16);
    // 0x8029DD28: lw          $t9, 0x68E0($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X68E0);
    // 0x8029DD2C: lui         $t7, 0x600
    ctx->r15 = S32(0X600 << 16);
    // 0x8029DD30: beq         $t9, $zero, L_8029DD98
    if (ctx->r25 == 0) {
        // 0x8029DD34: addiu       $t7, $t7, 0x6648
        ctx->r15 = ADD32(ctx->r15, 0X6648);
            goto L_8029DD98;
    }
    // 0x8029DD34: addiu       $t7, $t7, 0x6648
    ctx->r15 = ADD32(ctx->r15, 0X6648);
    // 0x8029DD38: lui         $t8, 0xA00
    ctx->r24 = S32(0XA00 << 16);
    // 0x8029DD3C: lui         $t0, 0xA00
    ctx->r8 = S32(0XA00 << 16);
    // 0x8029DD40: lui         $t1, 0xA00
    ctx->r9 = S32(0XA00 << 16);
    // 0x8029DD44: lui         $t4, 0xA00
    ctx->r12 = S32(0XA00 << 16);
    // 0x8029DD48: lui         $t2, 0xA00
    ctx->r10 = S32(0XA00 << 16);
    // 0x8029DD4C: lui         $t3, 0xA00
    ctx->r11 = S32(0XA00 << 16);
    // 0x8029DD50: lui         $t5, 0xA00
    ctx->r13 = S32(0XA00 << 16);
    // 0x8029DD54: lui         $t6, 0xA00
    ctx->r14 = S32(0XA00 << 16);
    // 0x8029DD58: addiu       $t8, $t8, 0x4660
    ctx->r24 = ADD32(ctx->r24, 0X4660);
    // 0x8029DD5C: addiu       $t0, $t0, 0x4758
    ctx->r8 = ADD32(ctx->r8, 0X4758);
    // 0x8029DD60: addiu       $t1, $t1, 0x4850
    ctx->r9 = ADD32(ctx->r9, 0X4850);
    // 0x8029DD64: addiu       $t4, $t4, 0x4948
    ctx->r12 = ADD32(ctx->r12, 0X4948);
    // 0x8029DD68: addiu       $t2, $t2, 0x4A40
    ctx->r10 = ADD32(ctx->r10, 0X4A40);
    // 0x8029DD6C: addiu       $t3, $t3, 0x4B38
    ctx->r11 = ADD32(ctx->r11, 0X4B38);
    // 0x8029DD70: addiu       $t5, $t5, 0x4C30
    ctx->r13 = ADD32(ctx->r13, 0X4C30);
    // 0x8029DD74: addiu       $t6, $t6, 0x4D28
    ctx->r14 = ADD32(ctx->r14, 0X4D28);
    // 0x8029DD78: sw          $t8, 0x84($v0)
    MEM_W(0X84, ctx->r2) = ctx->r24;
    // 0x8029DD7C: sw          $t0, 0x8C($v0)
    MEM_W(0X8C, ctx->r2) = ctx->r8;
    // 0x8029DD80: sw          $t1, 0x94($v0)
    MEM_W(0X94, ctx->r2) = ctx->r9;
    // 0x8029DD84: sw          $t4, 0x9C($v0)
    MEM_W(0X9C, ctx->r2) = ctx->r12;
    // 0x8029DD88: sw          $t2, 0xA4($v0)
    MEM_W(0XA4, ctx->r2) = ctx->r10;
    // 0x8029DD8C: sw          $t3, 0xAC($v0)
    MEM_W(0XAC, ctx->r2) = ctx->r11;
    // 0x8029DD90: sw          $t5, 0xB4($v0)
    MEM_W(0XB4, ctx->r2) = ctx->r13;
    // 0x8029DD94: sw          $t6, 0xBC($v0)
    MEM_W(0XBC, ctx->r2) = ctx->r14;
L_8029DD98:
    // 0x8029DD98: lui         $t9, 0x600
    ctx->r25 = S32(0X600 << 16);
    // 0x8029DD9C: lui         $t8, 0x600
    ctx->r24 = S32(0X600 << 16);
    // 0x8029DDA0: lui         $t0, 0x601
    ctx->r8 = S32(0X601 << 16);
    // 0x8029DDA4: lui         $t1, 0x601
    ctx->r9 = S32(0X601 << 16);
    // 0x8029DDA8: addiu       $t9, $t9, 0x6E78
    ctx->r25 = ADD32(ctx->r25, 0X6E78);
    // 0x8029DDAC: addiu       $t8, $t8, 0x7838
    ctx->r24 = ADD32(ctx->r24, 0X7838);
    // 0x8029DDB0: addiu       $t0, $t0, -0x7D70
    ctx->r8 = ADD32(ctx->r8, -0X7D70);
    // 0x8029DDB4: addiu       $t1, $t1, -0x7308
    ctx->r9 = ADD32(ctx->r9, -0X7308);
    // 0x8029DDB8: sw          $t7, 0xCC($v0)
    MEM_W(0XCC, ctx->r2) = ctx->r15;
    // 0x8029DDBC: sw          $t9, 0xD4($v0)
    MEM_W(0XD4, ctx->r2) = ctx->r25;
    // 0x8029DDC0: sw          $t8, 0xDC($v0)
    MEM_W(0XDC, ctx->r2) = ctx->r24;
    // 0x8029DDC4: sw          $t0, 0xE4($v0)
    MEM_W(0XE4, ctx->r2) = ctx->r8;
    // 0x8029DDC8: sw          $t1, 0xEC($v0)
    MEM_W(0XEC, ctx->r2) = ctx->r9;
    // 0x8029DDCC: lui         $t4, 0x601
    ctx->r12 = S32(0X601 << 16);
    // 0x8029DDD0: lui         $t2, 0x601
    ctx->r10 = S32(0X601 << 16);
    // 0x8029DDD4: lui         $t3, 0x600
    ctx->r11 = S32(0X600 << 16);
    // 0x8029DDD8: lui         $t5, 0x600
    ctx->r13 = S32(0X600 << 16);
    // 0x8029DDDC: lui         $t6, 0x600
    ctx->r14 = S32(0X600 << 16);
    // 0x8029DDE0: lui         $t7, 0x600
    ctx->r15 = S32(0X600 << 16);
    // 0x8029DDE4: lui         $t9, 0x601
    ctx->r25 = S32(0X601 << 16);
    // 0x8029DDE8: lui         $t8, 0x601
    ctx->r24 = S32(0X601 << 16);
    // 0x8029DDEC: lui         $t0, 0x601
    ctx->r8 = S32(0X601 << 16);
    // 0x8029DDF0: lui         $t1, 0x601
    ctx->r9 = S32(0X601 << 16);
    // 0x8029DDF4: addiu       $t4, $t4, -0x6938
    ctx->r12 = ADD32(ctx->r12, -0X6938);
    // 0x8029DDF8: addiu       $t2, $t2, -0x60D8
    ctx->r10 = ADD32(ctx->r10, -0X60D8);
    // 0x8029DDFC: addiu       $t3, $t3, 0x4F58
    ctx->r11 = ADD32(ctx->r11, 0X4F58);
    // 0x8029DE00: addiu       $t5, $t5, 0x69C8
    ctx->r13 = ADD32(ctx->r13, 0X69C8);
    // 0x8029DE04: addiu       $t6, $t6, 0x71F0
    ctx->r14 = ADD32(ctx->r14, 0X71F0);
    // 0x8029DE08: addiu       $t7, $t7, 0x7CA8
    ctx->r15 = ADD32(ctx->r15, 0X7CA8);
    // 0x8029DE0C: addiu       $t9, $t9, -0x78F8
    ctx->r25 = ADD32(ctx->r25, -0X78F8);
    // 0x8029DE10: addiu       $t8, $t8, -0x6F88
    ctx->r24 = ADD32(ctx->r24, -0X6F88);
    // 0x8029DE14: addiu       $t0, $t0, -0x65B8
    ctx->r8 = ADD32(ctx->r8, -0X65B8);
    // 0x8029DE18: addiu       $t1, $t1, -0x5AD0
    ctx->r9 = ADD32(ctx->r9, -0X5AD0);
    // 0x8029DE1C: sw          $t4, 0xF4($v0)
    MEM_W(0XF4, ctx->r2) = ctx->r12;
    // 0x8029DE20: sw          $t2, 0xFC($v0)
    MEM_W(0XFC, ctx->r2) = ctx->r10;
    // 0x8029DE24: sw          $t3, 0x104($v0)
    MEM_W(0X104, ctx->r2) = ctx->r11;
    // 0x8029DE28: sw          $t5, 0x10C($v0)
    MEM_W(0X10C, ctx->r2) = ctx->r13;
    // 0x8029DE2C: sw          $t6, 0x114($v0)
    MEM_W(0X114, ctx->r2) = ctx->r14;
    // 0x8029DE30: sw          $t7, 0x11C($v0)
    MEM_W(0X11C, ctx->r2) = ctx->r15;
    // 0x8029DE34: sw          $t9, 0x124($v0)
    MEM_W(0X124, ctx->r2) = ctx->r25;
    // 0x8029DE38: sw          $t8, 0x12C($v0)
    MEM_W(0X12C, ctx->r2) = ctx->r24;
    // 0x8029DE3C: sw          $t0, 0x134($v0)
    MEM_W(0X134, ctx->r2) = ctx->r8;
    // 0x8029DE40: sw          $t1, 0x13C($v0)
    MEM_W(0X13C, ctx->r2) = ctx->r9;
    // 0x8029DE44: lui         $t4, 0x600
    ctx->r12 = S32(0X600 << 16);
    // 0x8029DE48: lui         $t2, 0x601
    ctx->r10 = S32(0X601 << 16);
    // 0x8029DE4C: lui         $t3, 0x600
    ctx->r11 = S32(0X600 << 16);
    // 0x8029DE50: lui         $t5, 0x600
    ctx->r13 = S32(0X600 << 16);
    // 0x8029DE54: lui         $t6, 0x600
    ctx->r14 = S32(0X600 << 16);
    // 0x8029DE58: lui         $t7, 0x601
    ctx->r15 = S32(0X601 << 16);
    // 0x8029DE5C: lui         $t9, 0x601
    ctx->r25 = S32(0X601 << 16);
    // 0x8029DE60: lui         $t8, 0x601
    ctx->r24 = S32(0X601 << 16);
    // 0x8029DE64: lui         $t0, 0x600
    ctx->r8 = S32(0X600 << 16);
    // 0x8029DE68: lui         $t1, 0x600
    ctx->r9 = S32(0X600 << 16);
    // 0x8029DE6C: addiu       $t4, $t4, 0x54C0
    ctx->r12 = ADD32(ctx->r12, 0X54C0);
    // 0x8029DE70: addiu       $t2, $t2, -0x5568
    ctx->r10 = ADD32(ctx->r10, -0X5568);
    // 0x8029DE74: addiu       $t3, $t3, 0x5ED8
    ctx->r11 = ADD32(ctx->r11, 0X5ED8);
    // 0x8029DE78: addiu       $t5, $t5, 0x61F8
    ctx->r13 = ADD32(ctx->r13, 0X61F8);
    // 0x8029DE7C: addiu       $t6, $t6, 0x7568
    ctx->r14 = ADD32(ctx->r14, 0X7568);
    // 0x8029DE80: addiu       $t7, $t7, -0x7FE0
    ctx->r15 = ADD32(ctx->r15, -0X7FE0);
    // 0x8029DE84: addiu       $t9, $t9, -0x7578
    ctx->r25 = ADD32(ctx->r25, -0X7578);
    // 0x8029DE88: addiu       $t8, $t8, -0x6C08
    ctx->r24 = ADD32(ctx->r24, -0X6C08);
    // 0x8029DE8C: addiu       $t0, $t0, 0x5A28
    ctx->r8 = ADD32(ctx->r8, 0X5A28);
    // 0x8029DE90: addiu       $t1, $t1, 0x5C80
    ctx->r9 = ADD32(ctx->r9, 0X5C80);
    // 0x8029DE94: sw          $t4, 0x144($v0)
    MEM_W(0X144, ctx->r2) = ctx->r12;
    // 0x8029DE98: sw          $t2, 0x14C($v0)
    MEM_W(0X14C, ctx->r2) = ctx->r10;
    // 0x8029DE9C: sw          $t3, 0x154($v0)
    MEM_W(0X154, ctx->r2) = ctx->r11;
    // 0x8029DEA0: sw          $t5, 0x15C($v0)
    MEM_W(0X15C, ctx->r2) = ctx->r13;
    // 0x8029DEA4: sw          $t6, 0x164($v0)
    MEM_W(0X164, ctx->r2) = ctx->r14;
    // 0x8029DEA8: sw          $t7, 0x16C($v0)
    MEM_W(0X16C, ctx->r2) = ctx->r15;
    // 0x8029DEAC: sw          $t9, 0x174($v0)
    MEM_W(0X174, ctx->r2) = ctx->r25;
    // 0x8029DEB0: sw          $t8, 0x17C($v0)
    MEM_W(0X17C, ctx->r2) = ctx->r24;
    // 0x8029DEB4: sw          $t0, 0x184($v0)
    MEM_W(0X184, ctx->r2) = ctx->r8;
    // 0x8029DEB8: sw          $t1, 0x18C($v0)
    MEM_W(0X18C, ctx->r2) = ctx->r9;
    // 0x8029DEBC: lui         $t4, 0x600
    ctx->r12 = S32(0X600 << 16);
    // 0x8029DEC0: lui         $t2, 0x601
    ctx->r10 = S32(0X601 << 16);
    // 0x8029DEC4: lui         $t3, 0xE00
    ctx->r11 = S32(0XE00 << 16);
    // 0x8029DEC8: lui         $t5, 0xE00
    ctx->r13 = S32(0XE00 << 16);
    // 0x8029DECC: lui         $t6, 0xE00
    ctx->r14 = S32(0XE00 << 16);
    // 0x8029DED0: lui         $t7, 0xE00
    ctx->r15 = S32(0XE00 << 16);
    // 0x8029DED4: lui         $t9, 0xE00
    ctx->r25 = S32(0XE00 << 16);
    // 0x8029DED8: lui         $t8, 0xE00
    ctx->r24 = S32(0XE00 << 16);
    // 0x8029DEDC: lui         $t0, 0xE00
    ctx->r8 = S32(0XE00 << 16);
    // 0x8029DEE0: lui         $t1, 0xE00
    ctx->r9 = S32(0XE00 << 16);
    // 0x8029DEE4: addiu       $t4, $t4, 0x5748
    ctx->r12 = ADD32(ctx->r12, 0X5748);
    // 0x8029DEE8: addiu       $t2, $t2, -0x52C8
    ctx->r10 = ADD32(ctx->r10, -0X52C8);
    // 0x8029DEEC: addiu       $t3, $t3, 0x20F0
    ctx->r11 = ADD32(ctx->r11, 0X20F0);
    // 0x8029DEF0: addiu       $t5, $t5, 0x5988
    ctx->r13 = ADD32(ctx->r13, 0X5988);
    // 0x8029DEF4: addiu       $t6, $t6, 0x1CC0
    ctx->r14 = ADD32(ctx->r14, 0X1CC0);
    // 0x8029DEF8: addiu       $t7, $t7, 0x2F38
    ctx->r15 = ADD32(ctx->r15, 0X2F38);
    // 0x8029DEFC: addiu       $t9, $t9, 0x3438
    ctx->r25 = ADD32(ctx->r25, 0X3438);
    // 0x8029DF00: addiu       $t8, $t8, 0x3938
    ctx->r24 = ADD32(ctx->r24, 0X3938);
    // 0x8029DF04: addiu       $t0, $t0, 0x4248
    ctx->r8 = ADD32(ctx->r8, 0X4248);
    // 0x8029DF08: addiu       $t1, $t1, 0x4A88
    ctx->r9 = ADD32(ctx->r9, 0X4A88);
    // 0x8029DF0C: sw          $t4, 0x194($v0)
    MEM_W(0X194, ctx->r2) = ctx->r12;
    // 0x8029DF10: sw          $t2, 0x19C($v0)
    MEM_W(0X19C, ctx->r2) = ctx->r10;
    // 0x8029DF14: sw          $t3, 0x1A4($v0)
    MEM_W(0X1A4, ctx->r2) = ctx->r11;
    // 0x8029DF18: sw          $t5, 0x1AC($v0)
    MEM_W(0X1AC, ctx->r2) = ctx->r13;
    // 0x8029DF1C: sw          $t6, 0x1B4($v0)
    MEM_W(0X1B4, ctx->r2) = ctx->r14;
    // 0x8029DF20: sw          $t7, 0x1BC($v0)
    MEM_W(0X1BC, ctx->r2) = ctx->r15;
    // 0x8029DF24: sw          $t9, 0x1C4($v0)
    MEM_W(0X1C4, ctx->r2) = ctx->r25;
    // 0x8029DF28: sw          $t8, 0x1CC($v0)
    MEM_W(0X1CC, ctx->r2) = ctx->r24;
    // 0x8029DF2C: sw          $t0, 0x1D4($v0)
    MEM_W(0X1D4, ctx->r2) = ctx->r8;
    // 0x8029DF30: sw          $t1, 0x1DC($v0)
    MEM_W(0X1DC, ctx->r2) = ctx->r9;
    // 0x8029DF34: lui         $t4, 0xE00
    ctx->r12 = S32(0XE00 << 16);
    // 0x8029DF38: lui         $t2, 0xE00
    ctx->r10 = S32(0XE00 << 16);
    // 0x8029DF3C: lui         $t3, 0xE00
    ctx->r11 = S32(0XE00 << 16);
    // 0x8029DF40: lui         $t5, 0xE00
    ctx->r13 = S32(0XE00 << 16);
    // 0x8029DF44: lui         $t6, 0xE00
    ctx->r14 = S32(0XE00 << 16);
    // 0x8029DF48: lui         $t7, 0xE00
    ctx->r15 = S32(0XE00 << 16);
    // 0x8029DF4C: lui         $t9, 0xE00
    ctx->r25 = S32(0XE00 << 16);
    // 0x8029DF50: lui         $t8, 0xE00
    ctx->r24 = S32(0XE00 << 16);
    // 0x8029DF54: lui         $t0, 0xE00
    ctx->r8 = S32(0XE00 << 16);
    // 0x8029DF58: lui         $t1, 0xE00
    ctx->r9 = S32(0XE00 << 16);
    // 0x8029DF5C: addiu       $t4, $t4, 0x4EB8
    ctx->r12 = ADD32(ctx->r12, 0X4EB8);
    // 0x8029DF60: addiu       $t2, $t2, 0x5558
    ctx->r10 = ADD32(ctx->r10, 0X5558);
    // 0x8029DF64: addiu       $t3, $t3, 0x1ED8
    ctx->r11 = ADD32(ctx->r11, 0X1ED8);
    // 0x8029DF68: addiu       $t5, $t5, 0x3150
    ctx->r13 = ADD32(ctx->r13, 0X3150);
    // 0x8029DF6C: addiu       $t6, $t6, 0x3720
    ctx->r14 = ADD32(ctx->r14, 0X3720);
    // 0x8029DF70: addiu       $t7, $t7, 0x3DC0
    ctx->r15 = ADD32(ctx->r15, 0X3DC0);
    // 0x8029DF74: addiu       $t9, $t9, 0x46D0
    ctx->r25 = ADD32(ctx->r25, 0X46D0);
    // 0x8029DF78: addiu       $t8, $t8, 0x4CA0
    ctx->r24 = ADD32(ctx->r24, 0X4CA0);
    // 0x8029DF7C: addiu       $t0, $t0, 0x51A0
    ctx->r8 = ADD32(ctx->r8, 0X51A0);
    // 0x8029DF80: addiu       $t1, $t1, 0x5770
    ctx->r9 = ADD32(ctx->r9, 0X5770);
    // 0x8029DF84: sw          $a1, 0xC4($v0)
    MEM_W(0XC4, ctx->r2) = ctx->r5;
    // 0x8029DF88: sw          $t4, 0x1E4($v0)
    MEM_W(0X1E4, ctx->r2) = ctx->r12;
    // 0x8029DF8C: sw          $t2, 0x1EC($v0)
    MEM_W(0X1EC, ctx->r2) = ctx->r10;
    // 0x8029DF90: sw          $t3, 0x1F4($v0)
    MEM_W(0X1F4, ctx->r2) = ctx->r11;
    // 0x8029DF94: sw          $t5, 0x1FC($v0)
    MEM_W(0X1FC, ctx->r2) = ctx->r13;
    // 0x8029DF98: sw          $t6, 0x204($v0)
    MEM_W(0X204, ctx->r2) = ctx->r14;
    // 0x8029DF9C: sw          $t7, 0x20C($v0)
    MEM_W(0X20C, ctx->r2) = ctx->r15;
    // 0x8029DFA0: sw          $t9, 0x214($v0)
    MEM_W(0X214, ctx->r2) = ctx->r25;
    // 0x8029DFA4: sw          $t8, 0x21C($v0)
    MEM_W(0X21C, ctx->r2) = ctx->r24;
    // 0x8029DFA8: sw          $t0, 0x224($v0)
    MEM_W(0X224, ctx->r2) = ctx->r8;
    // 0x8029DFAC: jal         0x8029F758
    // 0x8029DFB0: sw          $t1, 0x22C($v0)
    MEM_W(0X22C, ctx->r2) = ctx->r9;
    func_8029F758(rdram, ctx);
        goto after_63;
    // 0x8029DFB0: sw          $t1, 0x22C($v0)
    MEM_W(0X22C, ctx->r2) = ctx->r9;
    after_63:
    // 0x8029DFB4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8029DFB8: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x8029DFBC: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x8029DFC0: jr          $ra
    // 0x8029DFC4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x8029DFC4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_8029DFC8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8029DFC8: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8029DFCC: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8029DFD0: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x8029DFD4: jal         0x8028BD18
    // 0x8029DFD8: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    func_8028BD18(rdram, ctx);
        goto after_0;
    // 0x8029DFD8: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    after_0:
    // 0x8029DFDC: jal         0x802A10D8
    // 0x8029DFE0: nop

    func_802A10D8(rdram, ctx);
        goto after_1;
    // 0x8029DFE0: nop

    after_1:
    // 0x8029DFE4: lui         $t6, 0x8012
    ctx->r14 = S32(0X8012 << 16);
    // 0x8029DFE8: lb          $t6, -0x309C($t6)
    ctx->r14 = MEM_B(ctx->r14, -0X309C);
    // 0x8029DFEC: nop

    // 0x8029DFF0: bne         $t6, $zero, L_8029E040
    if (ctx->r14 != 0) {
        // 0x8029DFF4: lui         $v0, 0x802C
        ctx->r2 = S32(0X802C << 16);
            goto L_8029E040;
    }
    // 0x8029DFF4: lui         $v0, 0x802C
    ctx->r2 = S32(0X802C << 16);
    // 0x8029DFF8: addiu       $v0, $v0, 0x3B30
    ctx->r2 = ADD32(ctx->r2, 0X3B30);
    // 0x8029DFFC: lw          $a2, 0x0($v0)
    ctx->r6 = MEM_W(ctx->r2, 0X0);
    // 0x8029E000: lui         $a3, 0x802C
    ctx->r7 = S32(0X802C << 16);
    // 0x8029E004: addiu       $a3, $a3, 0x3B08
    ctx->r7 = ADD32(ctx->r7, 0X3B08);
    // 0x8029E008: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x8029E00C: jal         0x8028BB94
    // 0x8029E010: addiu       $a1, $zero, 0x7
    ctx->r5 = ADD32(0, 0X7);
    func_8028BB94(rdram, ctx);
        goto after_2;
    // 0x8029E010: addiu       $a1, $zero, 0x7
    ctx->r5 = ADD32(0, 0X7);
    after_2:
    // 0x8029E014: lui         $v0, 0x802C
    ctx->r2 = S32(0X802C << 16);
    // 0x8029E018: addiu       $v0, $v0, 0x3B30
    ctx->r2 = ADD32(ctx->r2, 0X3B30);
    // 0x8029E01C: lui         $t8, 0x600
    ctx->r24 = S32(0X600 << 16);
    // 0x8029E020: lui         $t9, 0x600
    ctx->r25 = S32(0X600 << 16);
    // 0x8029E024: lw          $t7, 0x0($v0)
    ctx->r15 = MEM_W(ctx->r2, 0X0);
    // 0x8029E028: addiu       $t9, $t9, 0x0
    ctx->r25 = ADD32(ctx->r25, 0X0);
    // 0x8029E02C: addiu       $t8, $t8, 0x800
    ctx->r24 = ADD32(ctx->r24, 0X800);
    // 0x8029E030: subu        $t0, $t8, $t9
    ctx->r8 = SUB32(ctx->r24, ctx->r25);
    // 0x8029E034: addu        $t1, $t7, $t0
    ctx->r9 = ADD32(ctx->r15, ctx->r8);
    // 0x8029E038: b           L_8029E088
    // 0x8029E03C: sw          $t1, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r9;
        goto L_8029E088;
    // 0x8029E03C: sw          $t1, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r9;
L_8029E040:
    // 0x8029E040: lui         $v0, 0x802C
    ctx->r2 = S32(0X802C << 16);
    // 0x8029E044: addiu       $v0, $v0, 0x3B30
    ctx->r2 = ADD32(ctx->r2, 0X3B30);
    // 0x8029E048: lw          $a2, 0x0($v0)
    ctx->r6 = MEM_W(ctx->r2, 0X0);
    // 0x8029E04C: lui         $a3, 0x802C
    ctx->r7 = S32(0X802C << 16);
    // 0x8029E050: addiu       $a3, $a3, 0x3B08
    ctx->r7 = ADD32(ctx->r7, 0X3B08);
    // 0x8029E054: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x8029E058: jal         0x8028BB94
    // 0x8029E05C: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    func_8028BB94(rdram, ctx);
        goto after_3;
    // 0x8029E05C: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    after_3:
    // 0x8029E060: lui         $v0, 0x802C
    ctx->r2 = S32(0X802C << 16);
    // 0x8029E064: addiu       $v0, $v0, 0x3B30
    ctx->r2 = ADD32(ctx->r2, 0X3B30);
    // 0x8029E068: lui         $t3, 0x600
    ctx->r11 = S32(0X600 << 16);
    // 0x8029E06C: lui         $t4, 0x600
    ctx->r12 = S32(0X600 << 16);
    // 0x8029E070: lw          $t2, 0x0($v0)
    ctx->r10 = MEM_W(ctx->r2, 0X0);
    // 0x8029E074: addiu       $t4, $t4, 0x0
    ctx->r12 = ADD32(ctx->r12, 0X0);
    // 0x8029E078: addiu       $t3, $t3, 0x800
    ctx->r11 = ADD32(ctx->r11, 0X800);
    // 0x8029E07C: subu        $t5, $t3, $t4
    ctx->r13 = SUB32(ctx->r11, ctx->r12);
    // 0x8029E080: addu        $t6, $t2, $t5
    ctx->r14 = ADD32(ctx->r10, ctx->r13);
    // 0x8029E084: sw          $t6, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r14;
L_8029E088:
    // 0x8029E088: jal         0x802A1190
    // 0x8029E08C: nop

    func_802A1190(rdram, ctx);
        goto after_4;
    // 0x8029E08C: nop

    after_4:
    // 0x8029E090: lui         $v0, 0x802C
    ctx->r2 = S32(0X802C << 16);
    // 0x8029E094: addiu       $v0, $v0, 0x3B30
    ctx->r2 = ADD32(ctx->r2, 0X3B30);
    // 0x8029E098: lw          $a1, 0x0($v0)
    ctx->r5 = MEM_W(ctx->r2, 0X0);
    // 0x8029E09C: lui         $a2, 0x802C
    ctx->r6 = S32(0X802C << 16);
    // 0x8029E0A0: addiu       $a2, $a2, 0x3B10
    ctx->r6 = ADD32(ctx->r6, 0X3B10);
    // 0x8029E0A4: jal         0x8028BB68
    // 0x8029E0A8: addiu       $a0, $zero, 0x1A
    ctx->r4 = ADD32(0, 0X1A);
    func_8028BB68(rdram, ctx);
        goto after_5;
    // 0x8029E0A8: addiu       $a0, $zero, 0x1A
    ctx->r4 = ADD32(0, 0X1A);
    after_5:
    // 0x8029E0AC: lui         $v0, 0x802C
    ctx->r2 = S32(0X802C << 16);
    // 0x8029E0B0: addiu       $v0, $v0, 0x3B30
    ctx->r2 = ADD32(ctx->r2, 0X3B30);
    // 0x8029E0B4: lui         $t9, 0x601
    ctx->r25 = S32(0X601 << 16);
    // 0x8029E0B8: lui         $t7, 0x600
    ctx->r15 = S32(0X600 << 16);
    // 0x8029E0BC: lw          $t8, 0x0($v0)
    ctx->r24 = MEM_W(ctx->r2, 0X0);
    // 0x8029E0C0: addiu       $t7, $t7, 0x0
    ctx->r15 = ADD32(ctx->r15, 0X0);
    // 0x8029E0C4: addiu       $t9, $t9, 0x2900
    ctx->r25 = ADD32(ctx->r25, 0X2900);
    // 0x8029E0C8: subu        $t0, $t9, $t7
    ctx->r8 = SUB32(ctx->r25, ctx->r15);
    // 0x8029E0CC: lui         $a2, 0x802C
    ctx->r6 = S32(0X802C << 16);
    // 0x8029E0D0: addu        $a1, $t8, $t0
    ctx->r5 = ADD32(ctx->r24, ctx->r8);
    // 0x8029E0D4: sw          $a1, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r5;
    // 0x8029E0D8: addiu       $a2, $a2, 0x3B18
    ctx->r6 = ADD32(ctx->r6, 0X3B18);
    // 0x8029E0DC: jal         0x8028BB68
    // 0x8029E0E0: addiu       $a0, $zero, 0x1E
    ctx->r4 = ADD32(0, 0X1E);
    func_8028BB68(rdram, ctx);
        goto after_6;
    // 0x8029E0E0: addiu       $a0, $zero, 0x1E
    ctx->r4 = ADD32(0, 0X1E);
    after_6:
    // 0x8029E0E4: lui         $v0, 0x802C
    ctx->r2 = S32(0X802C << 16);
    // 0x8029E0E8: addiu       $v0, $v0, 0x3B30
    ctx->r2 = ADD32(ctx->r2, 0X3B30);
    // 0x8029E0EC: lui         $t4, 0x600
    ctx->r12 = S32(0X600 << 16);
    // 0x8029E0F0: lui         $t2, 0x600
    ctx->r10 = S32(0X600 << 16);
    // 0x8029E0F4: lw          $t3, 0x0($v0)
    ctx->r11 = MEM_W(ctx->r2, 0X0);
    // 0x8029E0F8: lui         $s0, 0xF
    ctx->r16 = S32(0XF << 16);
    // 0x8029E0FC: addiu       $t2, $t2, 0x0
    ctx->r10 = ADD32(ctx->r10, 0X0);
    // 0x8029E100: addiu       $t4, $t4, 0x5720
    ctx->r12 = ADD32(ctx->r12, 0X5720);
    // 0x8029E104: lui         $t9, 0x600
    ctx->r25 = S32(0X600 << 16);
    // 0x8029E108: ori         $s0, $s0, 0xFFFF
    ctx->r16 = ctx->r16 | 0XFFFF;
    // 0x8029E10C: lui         $s1, 0x803A
    ctx->r17 = S32(0X803A << 16);
    // 0x8029E110: subu        $t5, $t4, $t2
    ctx->r13 = SUB32(ctx->r12, ctx->r10);
    // 0x8029E114: addiu       $t9, $t9, 0x38A0
    ctx->r25 = ADD32(ctx->r25, 0X38A0);
    // 0x8029E118: ori         $s1, $s1, 0xDA00
    ctx->r17 = ctx->r17 | 0XDA00;
    // 0x8029E11C: and         $t7, $t9, $s0
    ctx->r15 = ctx->r25 & ctx->r16;
    // 0x8029E120: addu        $t6, $t3, $t5
    ctx->r14 = ADD32(ctx->r11, ctx->r13);
    // 0x8029E124: sw          $t6, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r14;
    // 0x8029E128: jal         0x8028B950
    // 0x8029E12C: addu        $a0, $t7, $s1
    ctx->r4 = ADD32(ctx->r15, ctx->r17);
    func_8028B950(rdram, ctx);
        goto after_7;
    // 0x8029E12C: addu        $a0, $t7, $s1
    ctx->r4 = ADD32(ctx->r15, ctx->r17);
    after_7:
    // 0x8029E130: lui         $t8, 0x600
    ctx->r24 = S32(0X600 << 16);
    // 0x8029E134: addiu       $t8, $t8, 0x4698
    ctx->r24 = ADD32(ctx->r24, 0X4698);
    // 0x8029E138: and         $t0, $t8, $s0
    ctx->r8 = ctx->r24 & ctx->r16;
    // 0x8029E13C: jal         0x8028B950
    // 0x8029E140: addu        $a0, $t0, $s1
    ctx->r4 = ADD32(ctx->r8, ctx->r17);
    func_8028B950(rdram, ctx);
        goto after_8;
    // 0x8029E140: addu        $a0, $t0, $s1
    ctx->r4 = ADD32(ctx->r8, ctx->r17);
    after_8:
    // 0x8029E144: lui         $t1, 0x600
    ctx->r9 = S32(0X600 << 16);
    // 0x8029E148: addiu       $t1, $t1, 0x5148
    ctx->r9 = ADD32(ctx->r9, 0X5148);
    // 0x8029E14C: and         $t4, $t1, $s0
    ctx->r12 = ctx->r9 & ctx->r16;
    // 0x8029E150: jal         0x8028B950
    // 0x8029E154: addu        $a0, $t4, $s1
    ctx->r4 = ADD32(ctx->r12, ctx->r17);
    func_8028B950(rdram, ctx);
        goto after_9;
    // 0x8029E154: addu        $a0, $t4, $s1
    ctx->r4 = ADD32(ctx->r12, ctx->r17);
    after_9:
    // 0x8029E158: lui         $t2, 0x600
    ctx->r10 = S32(0X600 << 16);
    // 0x8029E15C: addiu       $t2, $t2, 0x5B50
    ctx->r10 = ADD32(ctx->r10, 0X5B50);
    // 0x8029E160: and         $t3, $t2, $s0
    ctx->r11 = ctx->r10 & ctx->r16;
    // 0x8029E164: jal         0x8028B950
    // 0x8029E168: addu        $a0, $t3, $s1
    ctx->r4 = ADD32(ctx->r11, ctx->r17);
    func_8028B950(rdram, ctx);
        goto after_10;
    // 0x8029E168: addu        $a0, $t3, $s1
    ctx->r4 = ADD32(ctx->r11, ctx->r17);
    after_10:
    // 0x8029E16C: lui         $t5, 0x600
    ctx->r13 = S32(0X600 << 16);
    // 0x8029E170: addiu       $t5, $t5, 0x66D8
    ctx->r13 = ADD32(ctx->r13, 0X66D8);
    // 0x8029E174: and         $t6, $t5, $s0
    ctx->r14 = ctx->r13 & ctx->r16;
    // 0x8029E178: jal         0x8028B950
    // 0x8029E17C: addu        $a0, $t6, $s1
    ctx->r4 = ADD32(ctx->r14, ctx->r17);
    func_8028B950(rdram, ctx);
        goto after_11;
    // 0x8029E17C: addu        $a0, $t6, $s1
    ctx->r4 = ADD32(ctx->r14, ctx->r17);
    after_11:
    // 0x8029E180: lui         $t9, 0x600
    ctx->r25 = S32(0X600 << 16);
    // 0x8029E184: addiu       $t9, $t9, 0x7270
    ctx->r25 = ADD32(ctx->r25, 0X7270);
    // 0x8029E188: and         $t7, $t9, $s0
    ctx->r15 = ctx->r25 & ctx->r16;
    // 0x8029E18C: jal         0x8028B950
    // 0x8029E190: addu        $a0, $t7, $s1
    ctx->r4 = ADD32(ctx->r15, ctx->r17);
    func_8028B950(rdram, ctx);
        goto after_12;
    // 0x8029E190: addu        $a0, $t7, $s1
    ctx->r4 = ADD32(ctx->r15, ctx->r17);
    after_12:
    // 0x8029E194: lui         $t8, 0x600
    ctx->r24 = S32(0X600 << 16);
    // 0x8029E198: addiu       $t8, $t8, 0x7C78
    ctx->r24 = ADD32(ctx->r24, 0X7C78);
    // 0x8029E19C: and         $t0, $t8, $s0
    ctx->r8 = ctx->r24 & ctx->r16;
    // 0x8029E1A0: jal         0x8028B950
    // 0x8029E1A4: addu        $a0, $t0, $s1
    ctx->r4 = ADD32(ctx->r8, ctx->r17);
    func_8028B950(rdram, ctx);
        goto after_13;
    // 0x8029E1A4: addu        $a0, $t0, $s1
    ctx->r4 = ADD32(ctx->r8, ctx->r17);
    after_13:
    // 0x8029E1A8: lui         $t1, 0x601
    ctx->r9 = S32(0X601 << 16);
    // 0x8029E1AC: addiu       $t1, $t1, -0x79E8
    ctx->r9 = ADD32(ctx->r9, -0X79E8);
    // 0x8029E1B0: and         $t4, $t1, $s0
    ctx->r12 = ctx->r9 & ctx->r16;
    // 0x8029E1B4: jal         0x8028B950
    // 0x8029E1B8: addu        $a0, $t4, $s1
    ctx->r4 = ADD32(ctx->r12, ctx->r17);
    func_8028B950(rdram, ctx);
        goto after_14;
    // 0x8029E1B8: addu        $a0, $t4, $s1
    ctx->r4 = ADD32(ctx->r12, ctx->r17);
    after_14:
    // 0x8029E1BC: lui         $t2, 0x600
    ctx->r10 = S32(0X600 << 16);
    // 0x8029E1C0: addiu       $t2, $t2, 0x39D8
    ctx->r10 = ADD32(ctx->r10, 0X39D8);
    // 0x8029E1C4: and         $t3, $t2, $s0
    ctx->r11 = ctx->r10 & ctx->r16;
    // 0x8029E1C8: jal         0x8028B950
    // 0x8029E1CC: addu        $a0, $t3, $s1
    ctx->r4 = ADD32(ctx->r11, ctx->r17);
    func_8028B950(rdram, ctx);
        goto after_15;
    // 0x8029E1CC: addu        $a0, $t3, $s1
    ctx->r4 = ADD32(ctx->r11, ctx->r17);
    after_15:
    // 0x8029E1D0: lui         $t5, 0x600
    ctx->r13 = S32(0X600 << 16);
    // 0x8029E1D4: addiu       $t5, $t5, 0x47C8
    ctx->r13 = ADD32(ctx->r13, 0X47C8);
    // 0x8029E1D8: and         $t6, $t5, $s0
    ctx->r14 = ctx->r13 & ctx->r16;
    // 0x8029E1DC: jal         0x8028B950
    // 0x8029E1E0: addu        $a0, $t6, $s1
    ctx->r4 = ADD32(ctx->r14, ctx->r17);
    func_8028B950(rdram, ctx);
        goto after_16;
    // 0x8029E1E0: addu        $a0, $t6, $s1
    ctx->r4 = ADD32(ctx->r14, ctx->r17);
    after_16:
    // 0x8029E1E4: lui         $t9, 0x600
    ctx->r25 = S32(0X600 << 16);
    // 0x8029E1E8: addiu       $t9, $t9, 0x5278
    ctx->r25 = ADD32(ctx->r25, 0X5278);
    // 0x8029E1EC: and         $t7, $t9, $s0
    ctx->r15 = ctx->r25 & ctx->r16;
    // 0x8029E1F0: jal         0x8028B950
    // 0x8029E1F4: addu        $a0, $t7, $s1
    ctx->r4 = ADD32(ctx->r15, ctx->r17);
    func_8028B950(rdram, ctx);
        goto after_17;
    // 0x8029E1F4: addu        $a0, $t7, $s1
    ctx->r4 = ADD32(ctx->r15, ctx->r17);
    after_17:
    // 0x8029E1F8: lui         $t8, 0x600
    ctx->r24 = S32(0X600 << 16);
    // 0x8029E1FC: addiu       $t8, $t8, 0x5C80
    ctx->r24 = ADD32(ctx->r24, 0X5C80);
    // 0x8029E200: and         $t0, $t8, $s0
    ctx->r8 = ctx->r24 & ctx->r16;
    // 0x8029E204: jal         0x8028B950
    // 0x8029E208: addu        $a0, $t0, $s1
    ctx->r4 = ADD32(ctx->r8, ctx->r17);
    func_8028B950(rdram, ctx);
        goto after_18;
    // 0x8029E208: addu        $a0, $t0, $s1
    ctx->r4 = ADD32(ctx->r8, ctx->r17);
    after_18:
    // 0x8029E20C: lui         $t1, 0x600
    ctx->r9 = S32(0X600 << 16);
    // 0x8029E210: addiu       $t1, $t1, 0x6808
    ctx->r9 = ADD32(ctx->r9, 0X6808);
    // 0x8029E214: and         $t4, $t1, $s0
    ctx->r12 = ctx->r9 & ctx->r16;
    // 0x8029E218: jal         0x8028B950
    // 0x8029E21C: addu        $a0, $t4, $s1
    ctx->r4 = ADD32(ctx->r12, ctx->r17);
    func_8028B950(rdram, ctx);
        goto after_19;
    // 0x8029E21C: addu        $a0, $t4, $s1
    ctx->r4 = ADD32(ctx->r12, ctx->r17);
    after_19:
    // 0x8029E220: lui         $t2, 0x600
    ctx->r10 = S32(0X600 << 16);
    // 0x8029E224: addiu       $t2, $t2, 0x73A0
    ctx->r10 = ADD32(ctx->r10, 0X73A0);
    // 0x8029E228: and         $t3, $t2, $s0
    ctx->r11 = ctx->r10 & ctx->r16;
    // 0x8029E22C: jal         0x8028B950
    // 0x8029E230: addu        $a0, $t3, $s1
    ctx->r4 = ADD32(ctx->r11, ctx->r17);
    func_8028B950(rdram, ctx);
        goto after_20;
    // 0x8029E230: addu        $a0, $t3, $s1
    ctx->r4 = ADD32(ctx->r11, ctx->r17);
    after_20:
    // 0x8029E234: lui         $t5, 0x600
    ctx->r13 = S32(0X600 << 16);
    // 0x8029E238: addiu       $t5, $t5, 0x7DA8
    ctx->r13 = ADD32(ctx->r13, 0X7DA8);
    // 0x8029E23C: and         $t6, $t5, $s0
    ctx->r14 = ctx->r13 & ctx->r16;
    // 0x8029E240: jal         0x8028B950
    // 0x8029E244: addu        $a0, $t6, $s1
    ctx->r4 = ADD32(ctx->r14, ctx->r17);
    func_8028B950(rdram, ctx);
        goto after_21;
    // 0x8029E244: addu        $a0, $t6, $s1
    ctx->r4 = ADD32(ctx->r14, ctx->r17);
    after_21:
    // 0x8029E248: lui         $t9, 0x601
    ctx->r25 = S32(0X601 << 16);
    // 0x8029E24C: addiu       $t9, $t9, -0x78B0
    ctx->r25 = ADD32(ctx->r25, -0X78B0);
    // 0x8029E250: and         $t7, $t9, $s0
    ctx->r15 = ctx->r25 & ctx->r16;
    // 0x8029E254: jal         0x8028B950
    // 0x8029E258: addu        $a0, $t7, $s1
    ctx->r4 = ADD32(ctx->r15, ctx->r17);
    func_8028B950(rdram, ctx);
        goto after_22;
    // 0x8029E258: addu        $a0, $t7, $s1
    ctx->r4 = ADD32(ctx->r15, ctx->r17);
    after_22:
    // 0x8029E25C: lui         $t8, 0x600
    ctx->r24 = S32(0X600 << 16);
    // 0x8029E260: addiu       $t8, $t8, 0x49E0
    ctx->r24 = ADD32(ctx->r24, 0X49E0);
    // 0x8029E264: and         $t0, $t8, $s0
    ctx->r8 = ctx->r24 & ctx->r16;
    // 0x8029E268: jal         0x8028B950
    // 0x8029E26C: addu        $a0, $t0, $s1
    ctx->r4 = ADD32(ctx->r8, ctx->r17);
    func_8028B950(rdram, ctx);
        goto after_23;
    // 0x8029E26C: addu        $a0, $t0, $s1
    ctx->r4 = ADD32(ctx->r8, ctx->r17);
    after_23:
    // 0x8029E270: lui         $t1, 0x600
    ctx->r9 = S32(0X600 << 16);
    // 0x8029E274: addiu       $t1, $t1, 0x5440
    ctx->r9 = ADD32(ctx->r9, 0X5440);
    // 0x8029E278: and         $t4, $t1, $s0
    ctx->r12 = ctx->r9 & ctx->r16;
    // 0x8029E27C: jal         0x8028B950
    // 0x8029E280: addu        $a0, $t4, $s1
    ctx->r4 = ADD32(ctx->r12, ctx->r17);
    func_8028B950(rdram, ctx);
        goto after_24;
    // 0x8029E280: addu        $a0, $t4, $s1
    ctx->r4 = ADD32(ctx->r12, ctx->r17);
    after_24:
    // 0x8029E284: lui         $t2, 0x600
    ctx->r10 = S32(0X600 << 16);
    // 0x8029E288: addiu       $t2, $t2, 0x5F40
    ctx->r10 = ADD32(ctx->r10, 0X5F40);
    // 0x8029E28C: and         $t3, $t2, $s0
    ctx->r11 = ctx->r10 & ctx->r16;
    // 0x8029E290: jal         0x8028B950
    // 0x8029E294: addu        $a0, $t3, $s1
    ctx->r4 = ADD32(ctx->r11, ctx->r17);
    func_8028B950(rdram, ctx);
        goto after_25;
    // 0x8029E294: addu        $a0, $t3, $s1
    ctx->r4 = ADD32(ctx->r11, ctx->r17);
    after_25:
    // 0x8029E298: lui         $t5, 0x600
    ctx->r13 = S32(0X600 << 16);
    // 0x8029E29C: addiu       $t5, $t5, 0x6AC8
    ctx->r13 = ADD32(ctx->r13, 0X6AC8);
    // 0x8029E2A0: and         $t6, $t5, $s0
    ctx->r14 = ctx->r13 & ctx->r16;
    // 0x8029E2A4: jal         0x8028B950
    // 0x8029E2A8: addu        $a0, $t6, $s1
    ctx->r4 = ADD32(ctx->r14, ctx->r17);
    func_8028B950(rdram, ctx);
        goto after_26;
    // 0x8029E2A8: addu        $a0, $t6, $s1
    ctx->r4 = ADD32(ctx->r14, ctx->r17);
    after_26:
    // 0x8029E2AC: lui         $t9, 0x600
    ctx->r25 = S32(0X600 << 16);
    // 0x8029E2B0: addiu       $t9, $t9, 0x7568
    ctx->r25 = ADD32(ctx->r25, 0X7568);
    // 0x8029E2B4: and         $t7, $t9, $s0
    ctx->r15 = ctx->r25 & ctx->r16;
    // 0x8029E2B8: jal         0x8028B950
    // 0x8029E2BC: addu        $a0, $t7, $s1
    ctx->r4 = ADD32(ctx->r15, ctx->r17);
    func_8028B950(rdram, ctx);
        goto after_27;
    // 0x8029E2BC: addu        $a0, $t7, $s1
    ctx->r4 = ADD32(ctx->r15, ctx->r17);
    after_27:
    // 0x8029E2C0: lui         $t8, 0x600
    ctx->r24 = S32(0X600 << 16);
    // 0x8029E2C4: addiu       $t8, $t8, 0x7FC8
    ctx->r24 = ADD32(ctx->r24, 0X7FC8);
    // 0x8029E2C8: and         $t0, $t8, $s0
    ctx->r8 = ctx->r24 & ctx->r16;
    // 0x8029E2CC: jal         0x8028B950
    // 0x8029E2D0: addu        $a0, $t0, $s1
    ctx->r4 = ADD32(ctx->r8, ctx->r17);
    func_8028B950(rdram, ctx);
        goto after_28;
    // 0x8029E2D0: addu        $a0, $t0, $s1
    ctx->r4 = ADD32(ctx->r8, ctx->r17);
    after_28:
    // 0x8029E2D4: lui         $t1, 0x600
    ctx->r9 = S32(0X600 << 16);
    // 0x8029E2D8: addiu       $t1, $t1, 0x3FB0
    ctx->r9 = ADD32(ctx->r9, 0X3FB0);
    // 0x8029E2DC: and         $t4, $t1, $s0
    ctx->r12 = ctx->r9 & ctx->r16;
    // 0x8029E2E0: jal         0x8028B950
    // 0x8029E2E4: addu        $a0, $t4, $s1
    ctx->r4 = ADD32(ctx->r12, ctx->r17);
    func_8028B950(rdram, ctx);
        goto after_29;
    // 0x8029E2E4: addu        $a0, $t4, $s1
    ctx->r4 = ADD32(ctx->r12, ctx->r17);
    after_29:
    // 0x8029E2E8: lui         $t2, 0x600
    ctx->r10 = S32(0X600 << 16);
    // 0x8029E2EC: addiu       $t2, $t2, 0x4E48
    ctx->r10 = ADD32(ctx->r10, 0X4E48);
    // 0x8029E2F0: and         $t3, $t2, $s0
    ctx->r11 = ctx->r10 & ctx->r16;
    // 0x8029E2F4: jal         0x8028B950
    // 0x8029E2F8: addu        $a0, $t3, $s1
    ctx->r4 = ADD32(ctx->r11, ctx->r17);
    func_8028B950(rdram, ctx);
        goto after_30;
    // 0x8029E2F8: addu        $a0, $t3, $s1
    ctx->r4 = ADD32(ctx->r11, ctx->r17);
    after_30:
    // 0x8029E2FC: lui         $t5, 0x600
    ctx->r13 = S32(0X600 << 16);
    // 0x8029E300: addiu       $t5, $t5, 0x5780
    ctx->r13 = ADD32(ctx->r13, 0X5780);
    // 0x8029E304: and         $t6, $t5, $s0
    ctx->r14 = ctx->r13 & ctx->r16;
    // 0x8029E308: jal         0x8028B950
    // 0x8029E30C: addu        $a0, $t6, $s1
    ctx->r4 = ADD32(ctx->r14, ctx->r17);
    func_8028B950(rdram, ctx);
        goto after_31;
    // 0x8029E30C: addu        $a0, $t6, $s1
    ctx->r4 = ADD32(ctx->r14, ctx->r17);
    after_31:
    // 0x8029E310: lui         $t9, 0x600
    ctx->r25 = S32(0X600 << 16);
    // 0x8029E314: addiu       $t9, $t9, 0x6368
    ctx->r25 = ADD32(ctx->r25, 0X6368);
    // 0x8029E318: and         $t7, $t9, $s0
    ctx->r15 = ctx->r25 & ctx->r16;
    // 0x8029E31C: jal         0x8028B950
    // 0x8029E320: addu        $a0, $t7, $s1
    ctx->r4 = ADD32(ctx->r15, ctx->r17);
    func_8028B950(rdram, ctx);
        goto after_32;
    // 0x8029E320: addu        $a0, $t7, $s1
    ctx->r4 = ADD32(ctx->r15, ctx->r17);
    after_32:
    // 0x8029E324: lui         $t8, 0x600
    ctx->r24 = S32(0X600 << 16);
    // 0x8029E328: addiu       $t8, $t8, 0x6F00
    ctx->r24 = ADD32(ctx->r24, 0X6F00);
    // 0x8029E32C: and         $t0, $t8, $s0
    ctx->r8 = ctx->r24 & ctx->r16;
    // 0x8029E330: jal         0x8028B950
    // 0x8029E334: addu        $a0, $t0, $s1
    ctx->r4 = ADD32(ctx->r8, ctx->r17);
    func_8028B950(rdram, ctx);
        goto after_33;
    // 0x8029E334: addu        $a0, $t0, $s1
    ctx->r4 = ADD32(ctx->r8, ctx->r17);
    after_33:
    // 0x8029E338: lui         $t1, 0x600
    ctx->r9 = S32(0X600 << 16);
    // 0x8029E33C: addiu       $t1, $t1, 0x78A8
    ctx->r9 = ADD32(ctx->r9, 0X78A8);
    // 0x8029E340: and         $t4, $t1, $s0
    ctx->r12 = ctx->r9 & ctx->r16;
    // 0x8029E344: jal         0x8028B950
    // 0x8029E348: addu        $a0, $t4, $s1
    ctx->r4 = ADD32(ctx->r12, ctx->r17);
    func_8028B950(rdram, ctx);
        goto after_34;
    // 0x8029E348: addu        $a0, $t4, $s1
    ctx->r4 = ADD32(ctx->r12, ctx->r17);
    after_34:
    // 0x8029E34C: lui         $t2, 0x601
    ctx->r10 = S32(0X601 << 16);
    // 0x8029E350: addiu       $t2, $t2, -0x7C18
    ctx->r10 = ADD32(ctx->r10, -0X7C18);
    // 0x8029E354: and         $t3, $t2, $s0
    ctx->r11 = ctx->r10 & ctx->r16;
    // 0x8029E358: jal         0x8028B950
    // 0x8029E35C: addu        $a0, $t3, $s1
    ctx->r4 = ADD32(ctx->r11, ctx->r17);
    func_8028B950(rdram, ctx);
        goto after_35;
    // 0x8029E35C: addu        $a0, $t3, $s1
    ctx->r4 = ADD32(ctx->r11, ctx->r17);
    after_35:
    // 0x8029E360: lui         $t5, 0x601
    ctx->r13 = S32(0X601 << 16);
    // 0x8029E364: addiu       $t5, $t5, -0x7480
    ctx->r13 = ADD32(ctx->r13, -0X7480);
    // 0x8029E368: and         $t6, $t5, $s0
    ctx->r14 = ctx->r13 & ctx->r16;
    // 0x8029E36C: jal         0x8028B950
    // 0x8029E370: addu        $a0, $t6, $s1
    ctx->r4 = ADD32(ctx->r14, ctx->r17);
    func_8028B950(rdram, ctx);
        goto after_36;
    // 0x8029E370: addu        $a0, $t6, $s1
    ctx->r4 = ADD32(ctx->r14, ctx->r17);
    after_36:
    // 0x8029E374: lui         $t9, 0x600
    ctx->r25 = S32(0X600 << 16);
    // 0x8029E378: addiu       $t9, $t9, 0x59B0
    ctx->r25 = ADD32(ctx->r25, 0X59B0);
    // 0x8029E37C: and         $t7, $t9, $s0
    ctx->r15 = ctx->r25 & ctx->r16;
    // 0x8029E380: jal         0x8028B950
    // 0x8029E384: addu        $a0, $t7, $s1
    ctx->r4 = ADD32(ctx->r15, ctx->r17);
    func_8028B950(rdram, ctx);
        goto after_37;
    // 0x8029E384: addu        $a0, $t7, $s1
    ctx->r4 = ADD32(ctx->r15, ctx->r17);
    after_37:
    // 0x8029E388: lui         $t8, 0x600
    ctx->r24 = S32(0X600 << 16);
    // 0x8029E38C: addiu       $t8, $t8, 0x6598
    ctx->r24 = ADD32(ctx->r24, 0X6598);
    // 0x8029E390: and         $t0, $t8, $s0
    ctx->r8 = ctx->r24 & ctx->r16;
    // 0x8029E394: jal         0x8028B950
    // 0x8029E398: addu        $a0, $t0, $s1
    ctx->r4 = ADD32(ctx->r8, ctx->r17);
    func_8028B950(rdram, ctx);
        goto after_38;
    // 0x8029E398: addu        $a0, $t0, $s1
    ctx->r4 = ADD32(ctx->r8, ctx->r17);
    after_38:
    // 0x8029E39C: lui         $t1, 0x600
    ctx->r9 = S32(0X600 << 16);
    // 0x8029E3A0: addiu       $t1, $t1, 0x7130
    ctx->r9 = ADD32(ctx->r9, 0X7130);
    // 0x8029E3A4: and         $t4, $t1, $s0
    ctx->r12 = ctx->r9 & ctx->r16;
    // 0x8029E3A8: jal         0x8028B950
    // 0x8029E3AC: addu        $a0, $t4, $s1
    ctx->r4 = ADD32(ctx->r12, ctx->r17);
    func_8028B950(rdram, ctx);
        goto after_39;
    // 0x8029E3AC: addu        $a0, $t4, $s1
    ctx->r4 = ADD32(ctx->r12, ctx->r17);
    after_39:
    // 0x8029E3B0: lui         $t2, 0x600
    ctx->r10 = S32(0X600 << 16);
    // 0x8029E3B4: addiu       $t2, $t2, 0x7AD8
    ctx->r10 = ADD32(ctx->r10, 0X7AD8);
    // 0x8029E3B8: and         $t3, $t2, $s0
    ctx->r11 = ctx->r10 & ctx->r16;
    // 0x8029E3BC: jal         0x8028B950
    // 0x8029E3C0: addu        $a0, $t3, $s1
    ctx->r4 = ADD32(ctx->r11, ctx->r17);
    func_8028B950(rdram, ctx);
        goto after_40;
    // 0x8029E3C0: addu        $a0, $t3, $s1
    ctx->r4 = ADD32(ctx->r11, ctx->r17);
    after_40:
    // 0x8029E3C4: lui         $t5, 0xE00
    ctx->r13 = S32(0XE00 << 16);
    // 0x8029E3C8: lui         $s1, 0x803B
    ctx->r17 = S32(0X803B << 16);
    // 0x8029E3CC: addiu       $t5, $t5, 0x2020
    ctx->r13 = ADD32(ctx->r13, 0X2020);
    // 0x8029E3D0: ori         $s1, $s1, 0xB200
    ctx->r17 = ctx->r17 | 0XB200;
    // 0x8029E3D4: and         $t6, $t5, $s0
    ctx->r14 = ctx->r13 & ctx->r16;
    // 0x8029E3D8: jal         0x8028B950
    // 0x8029E3DC: addu        $a0, $t6, $s1
    ctx->r4 = ADD32(ctx->r14, ctx->r17);
    func_8028B950(rdram, ctx);
        goto after_41;
    // 0x8029E3DC: addu        $a0, $t6, $s1
    ctx->r4 = ADD32(ctx->r14, ctx->r17);
    after_41:
    // 0x8029E3E0: lui         $t9, 0xE00
    ctx->r25 = S32(0XE00 << 16);
    // 0x8029E3E4: addiu       $t9, $t9, 0x5988
    ctx->r25 = ADD32(ctx->r25, 0X5988);
    // 0x8029E3E8: and         $t7, $t9, $s0
    ctx->r15 = ctx->r25 & ctx->r16;
    // 0x8029E3EC: jal         0x8028B950
    // 0x8029E3F0: addu        $a0, $t7, $s1
    ctx->r4 = ADD32(ctx->r15, ctx->r17);
    func_8028B950(rdram, ctx);
        goto after_42;
    // 0x8029E3F0: addu        $a0, $t7, $s1
    ctx->r4 = ADD32(ctx->r15, ctx->r17);
    after_42:
    // 0x8029E3F4: lui         $t8, 0xE00
    ctx->r24 = S32(0XE00 << 16);
    // 0x8029E3F8: addiu       $t8, $t8, 0x1CC0
    ctx->r24 = ADD32(ctx->r24, 0X1CC0);
    // 0x8029E3FC: and         $t0, $t8, $s0
    ctx->r8 = ctx->r24 & ctx->r16;
    // 0x8029E400: jal         0x8028B950
    // 0x8029E404: addu        $a0, $t0, $s1
    ctx->r4 = ADD32(ctx->r8, ctx->r17);
    func_8028B950(rdram, ctx);
        goto after_43;
    // 0x8029E404: addu        $a0, $t0, $s1
    ctx->r4 = ADD32(ctx->r8, ctx->r17);
    after_43:
    // 0x8029E408: lui         $t1, 0xE00
    ctx->r9 = S32(0XE00 << 16);
    // 0x8029E40C: addiu       $t1, $t1, 0x2E68
    ctx->r9 = ADD32(ctx->r9, 0X2E68);
    // 0x8029E410: and         $t4, $t1, $s0
    ctx->r12 = ctx->r9 & ctx->r16;
    // 0x8029E414: jal         0x8028B950
    // 0x8029E418: addu        $a0, $t4, $s1
    ctx->r4 = ADD32(ctx->r12, ctx->r17);
    func_8028B950(rdram, ctx);
        goto after_44;
    // 0x8029E418: addu        $a0, $t4, $s1
    ctx->r4 = ADD32(ctx->r12, ctx->r17);
    after_44:
    // 0x8029E41C: lui         $t2, 0xE00
    ctx->r10 = S32(0XE00 << 16);
    // 0x8029E420: addiu       $t2, $t2, 0x3438
    ctx->r10 = ADD32(ctx->r10, 0X3438);
    // 0x8029E424: and         $t3, $t2, $s0
    ctx->r11 = ctx->r10 & ctx->r16;
    // 0x8029E428: jal         0x8028B950
    // 0x8029E42C: addu        $a0, $t3, $s1
    ctx->r4 = ADD32(ctx->r11, ctx->r17);
    func_8028B950(rdram, ctx);
        goto after_45;
    // 0x8029E42C: addu        $a0, $t3, $s1
    ctx->r4 = ADD32(ctx->r11, ctx->r17);
    after_45:
    // 0x8029E430: lui         $t5, 0xE00
    ctx->r13 = S32(0XE00 << 16);
    // 0x8029E434: addiu       $t5, $t5, 0x3938
    ctx->r13 = ADD32(ctx->r13, 0X3938);
    // 0x8029E438: and         $t6, $t5, $s0
    ctx->r14 = ctx->r13 & ctx->r16;
    // 0x8029E43C: jal         0x8028B950
    // 0x8029E440: addu        $a0, $t6, $s1
    ctx->r4 = ADD32(ctx->r14, ctx->r17);
    func_8028B950(rdram, ctx);
        goto after_46;
    // 0x8029E440: addu        $a0, $t6, $s1
    ctx->r4 = ADD32(ctx->r14, ctx->r17);
    after_46:
    // 0x8029E444: lui         $t9, 0xE00
    ctx->r25 = S32(0XE00 << 16);
    // 0x8029E448: addiu       $t9, $t9, 0x4248
    ctx->r25 = ADD32(ctx->r25, 0X4248);
    // 0x8029E44C: and         $t7, $t9, $s0
    ctx->r15 = ctx->r25 & ctx->r16;
    // 0x8029E450: jal         0x8028B950
    // 0x8029E454: addu        $a0, $t7, $s1
    ctx->r4 = ADD32(ctx->r15, ctx->r17);
    func_8028B950(rdram, ctx);
        goto after_47;
    // 0x8029E454: addu        $a0, $t7, $s1
    ctx->r4 = ADD32(ctx->r15, ctx->r17);
    after_47:
    // 0x8029E458: lui         $t8, 0xE00
    ctx->r24 = S32(0XE00 << 16);
    // 0x8029E45C: addiu       $t8, $t8, 0x4A88
    ctx->r24 = ADD32(ctx->r24, 0X4A88);
    // 0x8029E460: and         $t0, $t8, $s0
    ctx->r8 = ctx->r24 & ctx->r16;
    // 0x8029E464: jal         0x8028B950
    // 0x8029E468: addu        $a0, $t0, $s1
    ctx->r4 = ADD32(ctx->r8, ctx->r17);
    func_8028B950(rdram, ctx);
        goto after_48;
    // 0x8029E468: addu        $a0, $t0, $s1
    ctx->r4 = ADD32(ctx->r8, ctx->r17);
    after_48:
    // 0x8029E46C: lui         $t1, 0xE00
    ctx->r9 = S32(0XE00 << 16);
    // 0x8029E470: addiu       $t1, $t1, 0x4EB8
    ctx->r9 = ADD32(ctx->r9, 0X4EB8);
    // 0x8029E474: and         $t4, $t1, $s0
    ctx->r12 = ctx->r9 & ctx->r16;
    // 0x8029E478: jal         0x8028B950
    // 0x8029E47C: addu        $a0, $t4, $s1
    ctx->r4 = ADD32(ctx->r12, ctx->r17);
    func_8028B950(rdram, ctx);
        goto after_49;
    // 0x8029E47C: addu        $a0, $t4, $s1
    ctx->r4 = ADD32(ctx->r12, ctx->r17);
    after_49:
    // 0x8029E480: lui         $t2, 0xE00
    ctx->r10 = S32(0XE00 << 16);
    // 0x8029E484: addiu       $t2, $t2, 0x5558
    ctx->r10 = ADD32(ctx->r10, 0X5558);
    // 0x8029E488: and         $t3, $t2, $s0
    ctx->r11 = ctx->r10 & ctx->r16;
    // 0x8029E48C: jal         0x8028B950
    // 0x8029E490: addu        $a0, $t3, $s1
    ctx->r4 = ADD32(ctx->r11, ctx->r17);
    func_8028B950(rdram, ctx);
        goto after_50;
    // 0x8029E490: addu        $a0, $t3, $s1
    ctx->r4 = ADD32(ctx->r11, ctx->r17);
    after_50:
    // 0x8029E494: lui         $t5, 0xE00
    ctx->r13 = S32(0XE00 << 16);
    // 0x8029E498: addiu       $t5, $t5, 0x1ED8
    ctx->r13 = ADD32(ctx->r13, 0X1ED8);
    // 0x8029E49C: and         $t6, $t5, $s0
    ctx->r14 = ctx->r13 & ctx->r16;
    // 0x8029E4A0: jal         0x8028B950
    // 0x8029E4A4: addu        $a0, $t6, $s1
    ctx->r4 = ADD32(ctx->r14, ctx->r17);
    func_8028B950(rdram, ctx);
        goto after_51;
    // 0x8029E4A4: addu        $a0, $t6, $s1
    ctx->r4 = ADD32(ctx->r14, ctx->r17);
    after_51:
    // 0x8029E4A8: lui         $t9, 0xE00
    ctx->r25 = S32(0XE00 << 16);
    // 0x8029E4AC: addiu       $t9, $t9, 0x3080
    ctx->r25 = ADD32(ctx->r25, 0X3080);
    // 0x8029E4B0: and         $t7, $t9, $s0
    ctx->r15 = ctx->r25 & ctx->r16;
    // 0x8029E4B4: jal         0x8028B950
    // 0x8029E4B8: addu        $a0, $t7, $s1
    ctx->r4 = ADD32(ctx->r15, ctx->r17);
    func_8028B950(rdram, ctx);
        goto after_52;
    // 0x8029E4B8: addu        $a0, $t7, $s1
    ctx->r4 = ADD32(ctx->r15, ctx->r17);
    after_52:
    // 0x8029E4BC: lui         $t8, 0xE00
    ctx->r24 = S32(0XE00 << 16);
    // 0x8029E4C0: addiu       $t8, $t8, 0x3720
    ctx->r24 = ADD32(ctx->r24, 0X3720);
    // 0x8029E4C4: and         $t0, $t8, $s0
    ctx->r8 = ctx->r24 & ctx->r16;
    // 0x8029E4C8: jal         0x8028B950
    // 0x8029E4CC: addu        $a0, $t0, $s1
    ctx->r4 = ADD32(ctx->r8, ctx->r17);
    func_8028B950(rdram, ctx);
        goto after_53;
    // 0x8029E4CC: addu        $a0, $t0, $s1
    ctx->r4 = ADD32(ctx->r8, ctx->r17);
    after_53:
    // 0x8029E4D0: lui         $t1, 0xE00
    ctx->r9 = S32(0XE00 << 16);
    // 0x8029E4D4: addiu       $t1, $t1, 0x3DC0
    ctx->r9 = ADD32(ctx->r9, 0X3DC0);
    // 0x8029E4D8: and         $t4, $t1, $s0
    ctx->r12 = ctx->r9 & ctx->r16;
    // 0x8029E4DC: jal         0x8028B950
    // 0x8029E4E0: addu        $a0, $t4, $s1
    ctx->r4 = ADD32(ctx->r12, ctx->r17);
    func_8028B950(rdram, ctx);
        goto after_54;
    // 0x8029E4E0: addu        $a0, $t4, $s1
    ctx->r4 = ADD32(ctx->r12, ctx->r17);
    after_54:
    // 0x8029E4E4: lui         $t2, 0xE00
    ctx->r10 = S32(0XE00 << 16);
    // 0x8029E4E8: addiu       $t2, $t2, 0x46D0
    ctx->r10 = ADD32(ctx->r10, 0X46D0);
    // 0x8029E4EC: and         $t3, $t2, $s0
    ctx->r11 = ctx->r10 & ctx->r16;
    // 0x8029E4F0: jal         0x8028B950
    // 0x8029E4F4: addu        $a0, $t3, $s1
    ctx->r4 = ADD32(ctx->r11, ctx->r17);
    func_8028B950(rdram, ctx);
        goto after_55;
    // 0x8029E4F4: addu        $a0, $t3, $s1
    ctx->r4 = ADD32(ctx->r11, ctx->r17);
    after_55:
    // 0x8029E4F8: lui         $t5, 0xE00
    ctx->r13 = S32(0XE00 << 16);
    // 0x8029E4FC: addiu       $t5, $t5, 0x4CA0
    ctx->r13 = ADD32(ctx->r13, 0X4CA0);
    // 0x8029E500: and         $t6, $t5, $s0
    ctx->r14 = ctx->r13 & ctx->r16;
    // 0x8029E504: jal         0x8028B950
    // 0x8029E508: addu        $a0, $t6, $s1
    ctx->r4 = ADD32(ctx->r14, ctx->r17);
    func_8028B950(rdram, ctx);
        goto after_56;
    // 0x8029E508: addu        $a0, $t6, $s1
    ctx->r4 = ADD32(ctx->r14, ctx->r17);
    after_56:
    // 0x8029E50C: lui         $t9, 0xE00
    ctx->r25 = S32(0XE00 << 16);
    // 0x8029E510: addiu       $t9, $t9, 0x51A0
    ctx->r25 = ADD32(ctx->r25, 0X51A0);
    // 0x8029E514: and         $t7, $t9, $s0
    ctx->r15 = ctx->r25 & ctx->r16;
    // 0x8029E518: jal         0x8028B950
    // 0x8029E51C: addu        $a0, $t7, $s1
    ctx->r4 = ADD32(ctx->r15, ctx->r17);
    func_8028B950(rdram, ctx);
        goto after_57;
    // 0x8029E51C: addu        $a0, $t7, $s1
    ctx->r4 = ADD32(ctx->r15, ctx->r17);
    after_57:
    // 0x8029E520: lui         $t8, 0xE00
    ctx->r24 = S32(0XE00 << 16);
    // 0x8029E524: addiu       $t8, $t8, 0x5770
    ctx->r24 = ADD32(ctx->r24, 0X5770);
    // 0x8029E528: and         $t0, $t8, $s0
    ctx->r8 = ctx->r24 & ctx->r16;
    // 0x8029E52C: jal         0x8028B950
    // 0x8029E530: addu        $a0, $t0, $s1
    ctx->r4 = ADD32(ctx->r8, ctx->r17);
    func_8028B950(rdram, ctx);
        goto after_58;
    // 0x8029E530: addu        $a0, $t0, $s1
    ctx->r4 = ADD32(ctx->r8, ctx->r17);
    after_58:
    // 0x8029E534: jal         0x8029F548
    // 0x8029E538: nop

    func_8029F548(rdram, ctx);
        goto after_59;
    // 0x8029E538: nop

    after_59:
    // 0x8029E53C: jal         0x802A0D44
    // 0x8029E540: nop

    func_802A0D44(rdram, ctx);
        goto after_60;
    // 0x8029E540: nop

    after_60:
    // 0x8029E544: lui         $v1, 0x8011
    ctx->r3 = S32(0X8011 << 16);
    // 0x8029E548: addiu       $v1, $v1, -0x2F98
    ctx->r3 = ADD32(ctx->r3, -0X2F98);
    // 0x8029E54C: lw          $t1, 0x0($v1)
    ctx->r9 = MEM_W(ctx->r3, 0X0);
    // 0x8029E550: lui         $a0, 0x2
    ctx->r4 = S32(0X2 << 16);
    // 0x8029E554: ori         $a0, $a0, 0x8000
    ctx->r4 = ctx->r4 | 0X8000;
    // 0x8029E558: lui         $a1, 0x600
    ctx->r5 = S32(0X600 << 16);
    // 0x8029E55C: addiu       $a1, $a1, 0x39D8
    ctx->r5 = ADD32(ctx->r5, 0X39D8);
    // 0x8029E560: addu        $t4, $t1, $a0
    ctx->r12 = ADD32(ctx->r9, ctx->r4);
    // 0x8029E564: sw          $a1, 0x1398($t4)
    MEM_W(0X1398, ctx->r12) = ctx->r5;
    // 0x8029E568: lw          $t3, 0x0($v1)
    ctx->r11 = MEM_W(ctx->r3, 0X0);
    // 0x8029E56C: addiu       $t2, $zero, 0x5
    ctx->r10 = ADD32(0, 0X5);
    // 0x8029E570: addu        $t5, $t3, $a0
    ctx->r13 = ADD32(ctx->r11, ctx->r4);
    // 0x8029E574: lui         $v0, 0x802C
    ctx->r2 = S32(0X802C << 16);
    // 0x8029E578: sw          $t2, 0x139C($t5)
    MEM_W(0X139C, ctx->r13) = ctx->r10;
    // 0x8029E57C: addiu       $v0, $v0, 0x3600
    ctx->r2 = ADD32(ctx->r2, 0X3600);
    // 0x8029E580: lui         $t6, 0x600
    ctx->r14 = S32(0X600 << 16);
    // 0x8029E584: lui         $t9, 0x600
    ctx->r25 = S32(0X600 << 16);
    // 0x8029E588: lui         $t7, 0x600
    ctx->r15 = S32(0X600 << 16);
    // 0x8029E58C: lui         $t8, 0x600
    ctx->r24 = S32(0X600 << 16);
    // 0x8029E590: lui         $t0, 0x600
    ctx->r8 = S32(0X600 << 16);
    // 0x8029E594: lui         $t1, 0x600
    ctx->r9 = S32(0X600 << 16);
    // 0x8029E598: lui         $t4, 0x600
    ctx->r12 = S32(0X600 << 16);
    // 0x8029E59C: lui         $t3, 0x601
    ctx->r11 = S32(0X601 << 16);
    // 0x8029E5A0: addiu       $t6, $t6, 0x38A0
    ctx->r14 = ADD32(ctx->r14, 0X38A0);
    // 0x8029E5A4: addiu       $t9, $t9, 0x4698
    ctx->r25 = ADD32(ctx->r25, 0X4698);
    // 0x8029E5A8: addiu       $t7, $t7, 0x5148
    ctx->r15 = ADD32(ctx->r15, 0X5148);
    // 0x8029E5AC: addiu       $t8, $t8, 0x5B50
    ctx->r24 = ADD32(ctx->r24, 0X5B50);
    // 0x8029E5B0: addiu       $t0, $t0, 0x66D8
    ctx->r8 = ADD32(ctx->r8, 0X66D8);
    // 0x8029E5B4: addiu       $t1, $t1, 0x7270
    ctx->r9 = ADD32(ctx->r9, 0X7270);
    // 0x8029E5B8: addiu       $t4, $t4, 0x7C78
    ctx->r12 = ADD32(ctx->r12, 0X7C78);
    // 0x8029E5BC: addiu       $t3, $t3, -0x79E8
    ctx->r11 = ADD32(ctx->r11, -0X79E8);
    // 0x8029E5C0: sw          $t6, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r14;
    // 0x8029E5C4: sw          $t9, 0xC($v0)
    MEM_W(0XC, ctx->r2) = ctx->r25;
    // 0x8029E5C8: sw          $t7, 0x14($v0)
    MEM_W(0X14, ctx->r2) = ctx->r15;
    // 0x8029E5CC: sw          $t8, 0x1C($v0)
    MEM_W(0X1C, ctx->r2) = ctx->r24;
    // 0x8029E5D0: sw          $t0, 0x24($v0)
    MEM_W(0X24, ctx->r2) = ctx->r8;
    // 0x8029E5D4: sw          $t1, 0x2C($v0)
    MEM_W(0X2C, ctx->r2) = ctx->r9;
    // 0x8029E5D8: sw          $t4, 0x34($v0)
    MEM_W(0X34, ctx->r2) = ctx->r12;
    // 0x8029E5DC: sw          $t3, 0x3C($v0)
    MEM_W(0X3C, ctx->r2) = ctx->r11;
    // 0x8029E5E0: lui         $t2, 0x8009
    ctx->r10 = S32(0X8009 << 16);
    // 0x8029E5E4: lw          $t2, 0x68E0($t2)
    ctx->r10 = MEM_W(ctx->r10, 0X68E0);
    // 0x8029E5E8: lui         $t3, 0x600
    ctx->r11 = S32(0X600 << 16);
    // 0x8029E5EC: beq         $t2, $zero, L_8029E654
    if (ctx->r10 == 0) {
        // 0x8029E5F0: addiu       $t3, $t3, 0x47C8
        ctx->r11 = ADD32(ctx->r11, 0X47C8);
            goto L_8029E654;
    }
    // 0x8029E5F0: addiu       $t3, $t3, 0x47C8
    ctx->r11 = ADD32(ctx->r11, 0X47C8);
    // 0x8029E5F4: lui         $t5, 0xA00
    ctx->r13 = S32(0XA00 << 16);
    // 0x8029E5F8: lui         $t6, 0xA00
    ctx->r14 = S32(0XA00 << 16);
    // 0x8029E5FC: lui         $t9, 0xA00
    ctx->r25 = S32(0XA00 << 16);
    // 0x8029E600: lui         $t7, 0xA00
    ctx->r15 = S32(0XA00 << 16);
    // 0x8029E604: lui         $t8, 0xA00
    ctx->r24 = S32(0XA00 << 16);
    // 0x8029E608: lui         $t0, 0xA00
    ctx->r8 = S32(0XA00 << 16);
    // 0x8029E60C: lui         $t1, 0xA00
    ctx->r9 = S32(0XA00 << 16);
    // 0x8029E610: lui         $t4, 0xA00
    ctx->r12 = S32(0XA00 << 16);
    // 0x8029E614: addiu       $t5, $t5, 0x4660
    ctx->r13 = ADD32(ctx->r13, 0X4660);
    // 0x8029E618: addiu       $t6, $t6, 0x4758
    ctx->r14 = ADD32(ctx->r14, 0X4758);
    // 0x8029E61C: addiu       $t9, $t9, 0x4850
    ctx->r25 = ADD32(ctx->r25, 0X4850);
    // 0x8029E620: addiu       $t7, $t7, 0x4948
    ctx->r15 = ADD32(ctx->r15, 0X4948);
    // 0x8029E624: addiu       $t8, $t8, 0x4A40
    ctx->r24 = ADD32(ctx->r24, 0X4A40);
    // 0x8029E628: addiu       $t0, $t0, 0x4B38
    ctx->r8 = ADD32(ctx->r8, 0X4B38);
    // 0x8029E62C: addiu       $t1, $t1, 0x4C30
    ctx->r9 = ADD32(ctx->r9, 0X4C30);
    // 0x8029E630: addiu       $t4, $t4, 0x4D28
    ctx->r12 = ADD32(ctx->r12, 0X4D28);
    // 0x8029E634: sw          $t5, 0x84($v0)
    MEM_W(0X84, ctx->r2) = ctx->r13;
    // 0x8029E638: sw          $t6, 0x8C($v0)
    MEM_W(0X8C, ctx->r2) = ctx->r14;
    // 0x8029E63C: sw          $t9, 0x94($v0)
    MEM_W(0X94, ctx->r2) = ctx->r25;
    // 0x8029E640: sw          $t7, 0x9C($v0)
    MEM_W(0X9C, ctx->r2) = ctx->r15;
    // 0x8029E644: sw          $t8, 0xA4($v0)
    MEM_W(0XA4, ctx->r2) = ctx->r24;
    // 0x8029E648: sw          $t0, 0xAC($v0)
    MEM_W(0XAC, ctx->r2) = ctx->r8;
    // 0x8029E64C: sw          $t1, 0xB4($v0)
    MEM_W(0XB4, ctx->r2) = ctx->r9;
    // 0x8029E650: sw          $t4, 0xBC($v0)
    MEM_W(0XBC, ctx->r2) = ctx->r12;
L_8029E654:
    // 0x8029E654: lui         $t2, 0x600
    ctx->r10 = S32(0X600 << 16);
    // 0x8029E658: lui         $t5, 0x600
    ctx->r13 = S32(0X600 << 16);
    // 0x8029E65C: addiu       $t2, $t2, 0x5278
    ctx->r10 = ADD32(ctx->r10, 0X5278);
    // 0x8029E660: addiu       $t5, $t5, 0x5C80
    ctx->r13 = ADD32(ctx->r13, 0X5C80);
    // 0x8029E664: sw          $t3, 0xCC($v0)
    MEM_W(0XCC, ctx->r2) = ctx->r11;
    // 0x8029E668: sw          $t2, 0xD4($v0)
    MEM_W(0XD4, ctx->r2) = ctx->r10;
    // 0x8029E66C: sw          $t5, 0xDC($v0)
    MEM_W(0XDC, ctx->r2) = ctx->r13;
    // 0x8029E670: lui         $t6, 0x600
    ctx->r14 = S32(0X600 << 16);
    // 0x8029E674: lui         $t9, 0x600
    ctx->r25 = S32(0X600 << 16);
    // 0x8029E678: lui         $t7, 0x600
    ctx->r15 = S32(0X600 << 16);
    // 0x8029E67C: lui         $t8, 0x601
    ctx->r24 = S32(0X601 << 16);
    // 0x8029E680: lui         $t0, 0x600
    ctx->r8 = S32(0X600 << 16);
    // 0x8029E684: lui         $t1, 0x600
    ctx->r9 = S32(0X600 << 16);
    // 0x8029E688: lui         $t4, 0x600
    ctx->r12 = S32(0X600 << 16);
    // 0x8029E68C: lui         $t3, 0x600
    ctx->r11 = S32(0X600 << 16);
    // 0x8029E690: lui         $t2, 0x600
    ctx->r10 = S32(0X600 << 16);
    // 0x8029E694: lui         $t5, 0x600
    ctx->r13 = S32(0X600 << 16);
    // 0x8029E698: addiu       $t6, $t6, 0x6808
    ctx->r14 = ADD32(ctx->r14, 0X6808);
    // 0x8029E69C: addiu       $t9, $t9, 0x73A0
    ctx->r25 = ADD32(ctx->r25, 0X73A0);
    // 0x8029E6A0: addiu       $t7, $t7, 0x7DA8
    ctx->r15 = ADD32(ctx->r15, 0X7DA8);
    // 0x8029E6A4: addiu       $t8, $t8, -0x78B0
    ctx->r24 = ADD32(ctx->r24, -0X78B0);
    // 0x8029E6A8: addiu       $t0, $t0, 0x49E0
    ctx->r8 = ADD32(ctx->r8, 0X49E0);
    // 0x8029E6AC: addiu       $t1, $t1, 0x5440
    ctx->r9 = ADD32(ctx->r9, 0X5440);
    // 0x8029E6B0: addiu       $t4, $t4, 0x5F40
    ctx->r12 = ADD32(ctx->r12, 0X5F40);
    // 0x8029E6B4: addiu       $t3, $t3, 0x6AC8
    ctx->r11 = ADD32(ctx->r11, 0X6AC8);
    // 0x8029E6B8: addiu       $t2, $t2, 0x7568
    ctx->r10 = ADD32(ctx->r10, 0X7568);
    // 0x8029E6BC: addiu       $t5, $t5, 0x7FC8
    ctx->r13 = ADD32(ctx->r13, 0X7FC8);
    // 0x8029E6C0: sw          $t6, 0xE4($v0)
    MEM_W(0XE4, ctx->r2) = ctx->r14;
    // 0x8029E6C4: sw          $t9, 0xEC($v0)
    MEM_W(0XEC, ctx->r2) = ctx->r25;
    // 0x8029E6C8: sw          $t7, 0xF4($v0)
    MEM_W(0XF4, ctx->r2) = ctx->r15;
    // 0x8029E6CC: sw          $t8, 0xFC($v0)
    MEM_W(0XFC, ctx->r2) = ctx->r24;
    // 0x8029E6D0: sw          $t0, 0x104($v0)
    MEM_W(0X104, ctx->r2) = ctx->r8;
    // 0x8029E6D4: sw          $t1, 0x10C($v0)
    MEM_W(0X10C, ctx->r2) = ctx->r9;
    // 0x8029E6D8: sw          $t4, 0x114($v0)
    MEM_W(0X114, ctx->r2) = ctx->r12;
    // 0x8029E6DC: sw          $t3, 0x11C($v0)
    MEM_W(0X11C, ctx->r2) = ctx->r11;
    // 0x8029E6E0: sw          $t2, 0x124($v0)
    MEM_W(0X124, ctx->r2) = ctx->r10;
    // 0x8029E6E4: sw          $t5, 0x12C($v0)
    MEM_W(0X12C, ctx->r2) = ctx->r13;
    // 0x8029E6E8: lui         $t6, 0x600
    ctx->r14 = S32(0X600 << 16);
    // 0x8029E6EC: lui         $t9, 0x600
    ctx->r25 = S32(0X600 << 16);
    // 0x8029E6F0: lui         $t7, 0x600
    ctx->r15 = S32(0X600 << 16);
    // 0x8029E6F4: lui         $t8, 0x600
    ctx->r24 = S32(0X600 << 16);
    // 0x8029E6F8: lui         $t0, 0x600
    ctx->r8 = S32(0X600 << 16);
    // 0x8029E6FC: lui         $t1, 0x600
    ctx->r9 = S32(0X600 << 16);
    // 0x8029E700: lui         $t4, 0x601
    ctx->r12 = S32(0X601 << 16);
    // 0x8029E704: lui         $t3, 0x601
    ctx->r11 = S32(0X601 << 16);
    // 0x8029E708: lui         $t2, 0x600
    ctx->r10 = S32(0X600 << 16);
    // 0x8029E70C: lui         $t5, 0x600
    ctx->r13 = S32(0X600 << 16);
    // 0x8029E710: addiu       $t6, $t6, 0x3FB0
    ctx->r14 = ADD32(ctx->r14, 0X3FB0);
    // 0x8029E714: addiu       $t9, $t9, 0x4E48
    ctx->r25 = ADD32(ctx->r25, 0X4E48);
    // 0x8029E718: addiu       $t7, $t7, 0x5780
    ctx->r15 = ADD32(ctx->r15, 0X5780);
    // 0x8029E71C: addiu       $t8, $t8, 0x6368
    ctx->r24 = ADD32(ctx->r24, 0X6368);
    // 0x8029E720: addiu       $t0, $t0, 0x6F00
    ctx->r8 = ADD32(ctx->r8, 0X6F00);
    // 0x8029E724: addiu       $t1, $t1, 0x78A8
    ctx->r9 = ADD32(ctx->r9, 0X78A8);
    // 0x8029E728: addiu       $t4, $t4, -0x7C18
    ctx->r12 = ADD32(ctx->r12, -0X7C18);
    // 0x8029E72C: addiu       $t3, $t3, -0x7480
    ctx->r11 = ADD32(ctx->r11, -0X7480);
    // 0x8029E730: addiu       $t2, $t2, 0x59B0
    ctx->r10 = ADD32(ctx->r10, 0X59B0);
    // 0x8029E734: addiu       $t5, $t5, 0x6598
    ctx->r13 = ADD32(ctx->r13, 0X6598);
    // 0x8029E738: sw          $t6, 0x134($v0)
    MEM_W(0X134, ctx->r2) = ctx->r14;
    // 0x8029E73C: sw          $t9, 0x13C($v0)
    MEM_W(0X13C, ctx->r2) = ctx->r25;
    // 0x8029E740: sw          $t7, 0x144($v0)
    MEM_W(0X144, ctx->r2) = ctx->r15;
    // 0x8029E744: sw          $t8, 0x14C($v0)
    MEM_W(0X14C, ctx->r2) = ctx->r24;
    // 0x8029E748: sw          $t0, 0x154($v0)
    MEM_W(0X154, ctx->r2) = ctx->r8;
    // 0x8029E74C: sw          $t1, 0x15C($v0)
    MEM_W(0X15C, ctx->r2) = ctx->r9;
    // 0x8029E750: sw          $t4, 0x164($v0)
    MEM_W(0X164, ctx->r2) = ctx->r12;
    // 0x8029E754: sw          $t3, 0x16C($v0)
    MEM_W(0X16C, ctx->r2) = ctx->r11;
    // 0x8029E758: sw          $t2, 0x174($v0)
    MEM_W(0X174, ctx->r2) = ctx->r10;
    // 0x8029E75C: sw          $t5, 0x17C($v0)
    MEM_W(0X17C, ctx->r2) = ctx->r13;
    // 0x8029E760: lui         $t6, 0x600
    ctx->r14 = S32(0X600 << 16);
    // 0x8029E764: lui         $t9, 0x600
    ctx->r25 = S32(0X600 << 16);
    // 0x8029E768: lui         $t7, 0xE00
    ctx->r15 = S32(0XE00 << 16);
    // 0x8029E76C: lui         $t8, 0xE00
    ctx->r24 = S32(0XE00 << 16);
    // 0x8029E770: lui         $t0, 0xE00
    ctx->r8 = S32(0XE00 << 16);
    // 0x8029E774: lui         $t1, 0xE00
    ctx->r9 = S32(0XE00 << 16);
    // 0x8029E778: lui         $t4, 0xE00
    ctx->r12 = S32(0XE00 << 16);
    // 0x8029E77C: lui         $t3, 0xE00
    ctx->r11 = S32(0XE00 << 16);
    // 0x8029E780: lui         $t2, 0xE00
    ctx->r10 = S32(0XE00 << 16);
    // 0x8029E784: lui         $t5, 0xE00
    ctx->r13 = S32(0XE00 << 16);
    // 0x8029E788: addiu       $t6, $t6, 0x7130
    ctx->r14 = ADD32(ctx->r14, 0X7130);
    // 0x8029E78C: addiu       $t9, $t9, 0x7AD8
    ctx->r25 = ADD32(ctx->r25, 0X7AD8);
    // 0x8029E790: addiu       $t7, $t7, 0x2020
    ctx->r15 = ADD32(ctx->r15, 0X2020);
    // 0x8029E794: addiu       $t8, $t8, 0x5988
    ctx->r24 = ADD32(ctx->r24, 0X5988);
    // 0x8029E798: addiu       $t0, $t0, 0x1CC0
    ctx->r8 = ADD32(ctx->r8, 0X1CC0);
    // 0x8029E79C: addiu       $t1, $t1, 0x2E68
    ctx->r9 = ADD32(ctx->r9, 0X2E68);
    // 0x8029E7A0: addiu       $t4, $t4, 0x3438
    ctx->r12 = ADD32(ctx->r12, 0X3438);
    // 0x8029E7A4: addiu       $t3, $t3, 0x3938
    ctx->r11 = ADD32(ctx->r11, 0X3938);
    // 0x8029E7A8: addiu       $t2, $t2, 0x4248
    ctx->r10 = ADD32(ctx->r10, 0X4248);
    // 0x8029E7AC: addiu       $t5, $t5, 0x4A88
    ctx->r13 = ADD32(ctx->r13, 0X4A88);
    // 0x8029E7B0: sw          $t6, 0x184($v0)
    MEM_W(0X184, ctx->r2) = ctx->r14;
    // 0x8029E7B4: sw          $t9, 0x18C($v0)
    MEM_W(0X18C, ctx->r2) = ctx->r25;
    // 0x8029E7B8: sw          $t7, 0x194($v0)
    MEM_W(0X194, ctx->r2) = ctx->r15;
    // 0x8029E7BC: sw          $t8, 0x19C($v0)
    MEM_W(0X19C, ctx->r2) = ctx->r24;
    // 0x8029E7C0: sw          $t0, 0x1A4($v0)
    MEM_W(0X1A4, ctx->r2) = ctx->r8;
    // 0x8029E7C4: sw          $t1, 0x1AC($v0)
    MEM_W(0X1AC, ctx->r2) = ctx->r9;
    // 0x8029E7C8: sw          $t4, 0x1B4($v0)
    MEM_W(0X1B4, ctx->r2) = ctx->r12;
    // 0x8029E7CC: sw          $t3, 0x1BC($v0)
    MEM_W(0X1BC, ctx->r2) = ctx->r11;
    // 0x8029E7D0: sw          $t2, 0x1C4($v0)
    MEM_W(0X1C4, ctx->r2) = ctx->r10;
    // 0x8029E7D4: sw          $t5, 0x1CC($v0)
    MEM_W(0X1CC, ctx->r2) = ctx->r13;
    // 0x8029E7D8: lui         $t6, 0xE00
    ctx->r14 = S32(0XE00 << 16);
    // 0x8029E7DC: lui         $t9, 0xE00
    ctx->r25 = S32(0XE00 << 16);
    // 0x8029E7E0: lui         $t7, 0xE00
    ctx->r15 = S32(0XE00 << 16);
    // 0x8029E7E4: lui         $t8, 0xE00
    ctx->r24 = S32(0XE00 << 16);
    // 0x8029E7E8: lui         $t0, 0xE00
    ctx->r8 = S32(0XE00 << 16);
    // 0x8029E7EC: lui         $t1, 0xE00
    ctx->r9 = S32(0XE00 << 16);
    // 0x8029E7F0: lui         $t4, 0xE00
    ctx->r12 = S32(0XE00 << 16);
    // 0x8029E7F4: lui         $t3, 0xE00
    ctx->r11 = S32(0XE00 << 16);
    // 0x8029E7F8: lui         $t2, 0xE00
    ctx->r10 = S32(0XE00 << 16);
    // 0x8029E7FC: lui         $t5, 0xE00
    ctx->r13 = S32(0XE00 << 16);
    // 0x8029E800: addiu       $t6, $t6, 0x4EB8
    ctx->r14 = ADD32(ctx->r14, 0X4EB8);
    // 0x8029E804: addiu       $t9, $t9, 0x5558
    ctx->r25 = ADD32(ctx->r25, 0X5558);
    // 0x8029E808: addiu       $t7, $t7, 0x1ED8
    ctx->r15 = ADD32(ctx->r15, 0X1ED8);
    // 0x8029E80C: addiu       $t8, $t8, 0x3080
    ctx->r24 = ADD32(ctx->r24, 0X3080);
    // 0x8029E810: addiu       $t0, $t0, 0x3720
    ctx->r8 = ADD32(ctx->r8, 0X3720);
    // 0x8029E814: addiu       $t1, $t1, 0x3DC0
    ctx->r9 = ADD32(ctx->r9, 0X3DC0);
    // 0x8029E818: addiu       $t4, $t4, 0x46D0
    ctx->r12 = ADD32(ctx->r12, 0X46D0);
    // 0x8029E81C: addiu       $t3, $t3, 0x4CA0
    ctx->r11 = ADD32(ctx->r11, 0X4CA0);
    // 0x8029E820: addiu       $t2, $t2, 0x51A0
    ctx->r10 = ADD32(ctx->r10, 0X51A0);
    // 0x8029E824: addiu       $t5, $t5, 0x5770
    ctx->r13 = ADD32(ctx->r13, 0X5770);
    // 0x8029E828: sw          $a1, 0xC4($v0)
    MEM_W(0XC4, ctx->r2) = ctx->r5;
    // 0x8029E82C: sw          $t6, 0x1D4($v0)
    MEM_W(0X1D4, ctx->r2) = ctx->r14;
    // 0x8029E830: sw          $t9, 0x1DC($v0)
    MEM_W(0X1DC, ctx->r2) = ctx->r25;
    // 0x8029E834: sw          $t7, 0x1E4($v0)
    MEM_W(0X1E4, ctx->r2) = ctx->r15;
    // 0x8029E838: sw          $t8, 0x1EC($v0)
    MEM_W(0X1EC, ctx->r2) = ctx->r24;
    // 0x8029E83C: sw          $t0, 0x1F4($v0)
    MEM_W(0X1F4, ctx->r2) = ctx->r8;
    // 0x8029E840: sw          $t1, 0x1FC($v0)
    MEM_W(0X1FC, ctx->r2) = ctx->r9;
    // 0x8029E844: sw          $t4, 0x204($v0)
    MEM_W(0X204, ctx->r2) = ctx->r12;
    // 0x8029E848: sw          $t3, 0x20C($v0)
    MEM_W(0X20C, ctx->r2) = ctx->r11;
    // 0x8029E84C: sw          $t2, 0x214($v0)
    MEM_W(0X214, ctx->r2) = ctx->r10;
    // 0x8029E850: jal         0x8029F758
    // 0x8029E854: sw          $t5, 0x21C($v0)
    MEM_W(0X21C, ctx->r2) = ctx->r13;
    func_8029F758(rdram, ctx);
        goto after_61;
    // 0x8029E854: sw          $t5, 0x21C($v0)
    MEM_W(0X21C, ctx->r2) = ctx->r13;
    after_61:
    // 0x8029E858: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8029E85C: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x8029E860: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x8029E864: jr          $ra
    // 0x8029E868: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x8029E868: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_8029E86C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8029E86C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8029E870: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8029E874: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x8029E878: jal         0x8028BD18
    // 0x8029E87C: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    func_8028BD18(rdram, ctx);
        goto after_0;
    // 0x8029E87C: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    after_0:
    // 0x8029E880: jal         0x802A10D8
    // 0x8029E884: nop

    func_802A10D8(rdram, ctx);
        goto after_1;
    // 0x8029E884: nop

    after_1:
    // 0x8029E888: lui         $t6, 0x8012
    ctx->r14 = S32(0X8012 << 16);
    // 0x8029E88C: lb          $t6, -0x309C($t6)
    ctx->r14 = MEM_B(ctx->r14, -0X309C);
    // 0x8029E890: nop

    // 0x8029E894: bne         $t6, $zero, L_8029E8E4
    if (ctx->r14 != 0) {
        // 0x8029E898: lui         $v0, 0x802C
        ctx->r2 = S32(0X802C << 16);
            goto L_8029E8E4;
    }
    // 0x8029E898: lui         $v0, 0x802C
    ctx->r2 = S32(0X802C << 16);
    // 0x8029E89C: addiu       $v0, $v0, 0x3B30
    ctx->r2 = ADD32(ctx->r2, 0X3B30);
    // 0x8029E8A0: lw          $a2, 0x0($v0)
    ctx->r6 = MEM_W(ctx->r2, 0X0);
    // 0x8029E8A4: lui         $a3, 0x802C
    ctx->r7 = S32(0X802C << 16);
    // 0x8029E8A8: addiu       $a3, $a3, 0x3B08
    ctx->r7 = ADD32(ctx->r7, 0X3B08);
    // 0x8029E8AC: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x8029E8B0: jal         0x8028BB94
    // 0x8029E8B4: addiu       $a1, $zero, 0x9
    ctx->r5 = ADD32(0, 0X9);
    func_8028BB94(rdram, ctx);
        goto after_2;
    // 0x8029E8B4: addiu       $a1, $zero, 0x9
    ctx->r5 = ADD32(0, 0X9);
    after_2:
    // 0x8029E8B8: lui         $v0, 0x802C
    ctx->r2 = S32(0X802C << 16);
    // 0x8029E8BC: addiu       $v0, $v0, 0x3B30
    ctx->r2 = ADD32(ctx->r2, 0X3B30);
    // 0x8029E8C0: lui         $t8, 0x600
    ctx->r24 = S32(0X600 << 16);
    // 0x8029E8C4: lui         $t9, 0x600
    ctx->r25 = S32(0X600 << 16);
    // 0x8029E8C8: lw          $t7, 0x0($v0)
    ctx->r15 = MEM_W(ctx->r2, 0X0);
    // 0x8029E8CC: addiu       $t9, $t9, 0x0
    ctx->r25 = ADD32(ctx->r25, 0X0);
    // 0x8029E8D0: addiu       $t8, $t8, 0x800
    ctx->r24 = ADD32(ctx->r24, 0X800);
    // 0x8029E8D4: subu        $t0, $t8, $t9
    ctx->r8 = SUB32(ctx->r24, ctx->r25);
    // 0x8029E8D8: addu        $t1, $t7, $t0
    ctx->r9 = ADD32(ctx->r15, ctx->r8);
    // 0x8029E8DC: b           L_8029E92C
    // 0x8029E8E0: sw          $t1, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r9;
        goto L_8029E92C;
    // 0x8029E8E0: sw          $t1, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r9;
L_8029E8E4:
    // 0x8029E8E4: lui         $v0, 0x802C
    ctx->r2 = S32(0X802C << 16);
    // 0x8029E8E8: addiu       $v0, $v0, 0x3B30
    ctx->r2 = ADD32(ctx->r2, 0X3B30);
    // 0x8029E8EC: lw          $a2, 0x0($v0)
    ctx->r6 = MEM_W(ctx->r2, 0X0);
    // 0x8029E8F0: lui         $a3, 0x802C
    ctx->r7 = S32(0X802C << 16);
    // 0x8029E8F4: addiu       $a3, $a3, 0x3B08
    ctx->r7 = ADD32(ctx->r7, 0X3B08);
    // 0x8029E8F8: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x8029E8FC: jal         0x8028BB94
    // 0x8029E900: addiu       $a1, $zero, 0xA
    ctx->r5 = ADD32(0, 0XA);
    func_8028BB94(rdram, ctx);
        goto after_3;
    // 0x8029E900: addiu       $a1, $zero, 0xA
    ctx->r5 = ADD32(0, 0XA);
    after_3:
    // 0x8029E904: lui         $v0, 0x802C
    ctx->r2 = S32(0X802C << 16);
    // 0x8029E908: addiu       $v0, $v0, 0x3B30
    ctx->r2 = ADD32(ctx->r2, 0X3B30);
    // 0x8029E90C: lui         $t3, 0x600
    ctx->r11 = S32(0X600 << 16);
    // 0x8029E910: lui         $t4, 0x600
    ctx->r12 = S32(0X600 << 16);
    // 0x8029E914: lw          $t2, 0x0($v0)
    ctx->r10 = MEM_W(ctx->r2, 0X0);
    // 0x8029E918: addiu       $t4, $t4, 0x0
    ctx->r12 = ADD32(ctx->r12, 0X0);
    // 0x8029E91C: addiu       $t3, $t3, 0x800
    ctx->r11 = ADD32(ctx->r11, 0X800);
    // 0x8029E920: subu        $t5, $t3, $t4
    ctx->r13 = SUB32(ctx->r11, ctx->r12);
    // 0x8029E924: addu        $t6, $t2, $t5
    ctx->r14 = ADD32(ctx->r10, ctx->r13);
    // 0x8029E928: sw          $t6, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r14;
L_8029E92C:
    // 0x8029E92C: jal         0x802A1190
    // 0x8029E930: nop

    func_802A1190(rdram, ctx);
        goto after_4;
    // 0x8029E930: nop

    after_4:
    // 0x8029E934: lui         $v0, 0x802C
    ctx->r2 = S32(0X802C << 16);
    // 0x8029E938: addiu       $v0, $v0, 0x3B30
    ctx->r2 = ADD32(ctx->r2, 0X3B30);
    // 0x8029E93C: lw          $a1, 0x0($v0)
    ctx->r5 = MEM_W(ctx->r2, 0X0);
    // 0x8029E940: lui         $a2, 0x802C
    ctx->r6 = S32(0X802C << 16);
    // 0x8029E944: addiu       $a2, $a2, 0x3B10
    ctx->r6 = ADD32(ctx->r6, 0X3B10);
    // 0x8029E948: jal         0x8028BB68
    // 0x8029E94C: addiu       $a0, $zero, 0x1A
    ctx->r4 = ADD32(0, 0X1A);
    func_8028BB68(rdram, ctx);
        goto after_5;
    // 0x8029E94C: addiu       $a0, $zero, 0x1A
    ctx->r4 = ADD32(0, 0X1A);
    after_5:
    // 0x8029E950: lui         $v0, 0x802C
    ctx->r2 = S32(0X802C << 16);
    // 0x8029E954: addiu       $v0, $v0, 0x3B30
    ctx->r2 = ADD32(ctx->r2, 0X3B30);
    // 0x8029E958: lui         $t9, 0x601
    ctx->r25 = S32(0X601 << 16);
    // 0x8029E95C: lui         $t7, 0x600
    ctx->r15 = S32(0X600 << 16);
    // 0x8029E960: lw          $t8, 0x0($v0)
    ctx->r24 = MEM_W(ctx->r2, 0X0);
    // 0x8029E964: addiu       $t7, $t7, 0x0
    ctx->r15 = ADD32(ctx->r15, 0X0);
    // 0x8029E968: addiu       $t9, $t9, 0x2900
    ctx->r25 = ADD32(ctx->r25, 0X2900);
    // 0x8029E96C: subu        $t0, $t9, $t7
    ctx->r8 = SUB32(ctx->r25, ctx->r15);
    // 0x8029E970: lui         $a2, 0x802C
    ctx->r6 = S32(0X802C << 16);
    // 0x8029E974: addu        $a1, $t8, $t0
    ctx->r5 = ADD32(ctx->r24, ctx->r8);
    // 0x8029E978: sw          $a1, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r5;
    // 0x8029E97C: addiu       $a2, $a2, 0x3B18
    ctx->r6 = ADD32(ctx->r6, 0X3B18);
    // 0x8029E980: jal         0x8028BB68
    // 0x8029E984: addiu       $a0, $zero, 0x1F
    ctx->r4 = ADD32(0, 0X1F);
    func_8028BB68(rdram, ctx);
        goto after_6;
    // 0x8029E984: addiu       $a0, $zero, 0x1F
    ctx->r4 = ADD32(0, 0X1F);
    after_6:
    // 0x8029E988: lui         $v0, 0x802C
    ctx->r2 = S32(0X802C << 16);
    // 0x8029E98C: addiu       $v0, $v0, 0x3B30
    ctx->r2 = ADD32(ctx->r2, 0X3B30);
    // 0x8029E990: lui         $t4, 0x600
    ctx->r12 = S32(0X600 << 16);
    // 0x8029E994: lui         $t2, 0x600
    ctx->r10 = S32(0X600 << 16);
    // 0x8029E998: lw          $t3, 0x0($v0)
    ctx->r11 = MEM_W(ctx->r2, 0X0);
    // 0x8029E99C: lui         $s1, 0xF
    ctx->r17 = S32(0XF << 16);
    // 0x8029E9A0: addiu       $t2, $t2, 0x0
    ctx->r10 = ADD32(ctx->r10, 0X0);
    // 0x8029E9A4: addiu       $t4, $t4, 0x7000
    ctx->r12 = ADD32(ctx->r12, 0X7000);
    // 0x8029E9A8: lui         $t9, 0x600
    ctx->r25 = S32(0X600 << 16);
    // 0x8029E9AC: ori         $s1, $s1, 0xFFFF
    ctx->r17 = ctx->r17 | 0XFFFF;
    // 0x8029E9B0: lui         $s0, 0x803A
    ctx->r16 = S32(0X803A << 16);
    // 0x8029E9B4: subu        $t5, $t4, $t2
    ctx->r13 = SUB32(ctx->r12, ctx->r10);
    // 0x8029E9B8: addiu       $t9, $t9, 0x51E0
    ctx->r25 = ADD32(ctx->r25, 0X51E0);
    // 0x8029E9BC: ori         $s0, $s0, 0xDA00
    ctx->r16 = ctx->r16 | 0XDA00;
    // 0x8029E9C0: and         $t7, $t9, $s1
    ctx->r15 = ctx->r25 & ctx->r17;
    // 0x8029E9C4: addu        $t6, $t3, $t5
    ctx->r14 = ADD32(ctx->r11, ctx->r13);
    // 0x8029E9C8: sw          $t6, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r14;
    // 0x8029E9CC: jal         0x8028B950
    // 0x8029E9D0: addu        $a0, $t7, $s0
    ctx->r4 = ADD32(ctx->r15, ctx->r16);
    func_8028B950(rdram, ctx);
        goto after_7;
    // 0x8029E9D0: addu        $a0, $t7, $s0
    ctx->r4 = ADD32(ctx->r15, ctx->r16);
    after_7:
    // 0x8029E9D4: lui         $t8, 0x600
    ctx->r24 = S32(0X600 << 16);
    // 0x8029E9D8: addiu       $t8, $t8, 0x62E8
    ctx->r24 = ADD32(ctx->r24, 0X62E8);
    // 0x8029E9DC: and         $t0, $t8, $s1
    ctx->r8 = ctx->r24 & ctx->r17;
    // 0x8029E9E0: jal         0x8028B950
    // 0x8029E9E4: addu        $a0, $t0, $s0
    ctx->r4 = ADD32(ctx->r8, ctx->r16);
    func_8028B950(rdram, ctx);
        goto after_8;
    // 0x8029E9E4: addu        $a0, $t0, $s0
    ctx->r4 = ADD32(ctx->r8, ctx->r16);
    after_8:
    // 0x8029E9E8: lui         $t1, 0x600
    ctx->r9 = S32(0X600 << 16);
    // 0x8029E9EC: addiu       $t1, $t1, 0x7108
    ctx->r9 = ADD32(ctx->r9, 0X7108);
    // 0x8029E9F0: and         $t4, $t1, $s1
    ctx->r12 = ctx->r9 & ctx->r17;
    // 0x8029E9F4: jal         0x8028B950
    // 0x8029E9F8: addu        $a0, $t4, $s0
    ctx->r4 = ADD32(ctx->r12, ctx->r16);
    func_8028B950(rdram, ctx);
        goto after_9;
    // 0x8029E9F8: addu        $a0, $t4, $s0
    ctx->r4 = ADD32(ctx->r12, ctx->r16);
    after_9:
    // 0x8029E9FC: lui         $t2, 0x600
    ctx->r10 = S32(0X600 << 16);
    // 0x8029EA00: addiu       $t2, $t2, 0x7AF8
    ctx->r10 = ADD32(ctx->r10, 0X7AF8);
    // 0x8029EA04: and         $t3, $t2, $s1
    ctx->r11 = ctx->r10 & ctx->r17;
    // 0x8029EA08: jal         0x8028B950
    // 0x8029EA0C: addu        $a0, $t3, $s0
    ctx->r4 = ADD32(ctx->r11, ctx->r16);
    func_8028B950(rdram, ctx);
        goto after_10;
    // 0x8029EA0C: addu        $a0, $t3, $s0
    ctx->r4 = ADD32(ctx->r11, ctx->r16);
    after_10:
    // 0x8029EA10: lui         $t5, 0x601
    ctx->r13 = S32(0X601 << 16);
    // 0x8029EA14: addiu       $t5, $t5, -0x7AF0
    ctx->r13 = ADD32(ctx->r13, -0X7AF0);
    // 0x8029EA18: and         $t6, $t5, $s1
    ctx->r14 = ctx->r13 & ctx->r17;
    // 0x8029EA1C: jal         0x8028B950
    // 0x8029EA20: addu        $a0, $t6, $s0
    ctx->r4 = ADD32(ctx->r14, ctx->r16);
    func_8028B950(rdram, ctx);
        goto after_11;
    // 0x8029EA20: addu        $a0, $t6, $s0
    ctx->r4 = ADD32(ctx->r14, ctx->r16);
    after_11:
    // 0x8029EA24: lui         $t9, 0x601
    ctx->r25 = S32(0X601 << 16);
    // 0x8029EA28: addiu       $t9, $t9, -0x7070
    ctx->r25 = ADD32(ctx->r25, -0X7070);
    // 0x8029EA2C: and         $t7, $t9, $s1
    ctx->r15 = ctx->r25 & ctx->r17;
    // 0x8029EA30: jal         0x8028B950
    // 0x8029EA34: addu        $a0, $t7, $s0
    ctx->r4 = ADD32(ctx->r15, ctx->r16);
    func_8028B950(rdram, ctx);
        goto after_12;
    // 0x8029EA34: addu        $a0, $t7, $s0
    ctx->r4 = ADD32(ctx->r15, ctx->r16);
    after_12:
    // 0x8029EA38: lui         $t8, 0x601
    ctx->r24 = S32(0X601 << 16);
    // 0x8029EA3C: addiu       $t8, $t8, -0x6650
    ctx->r24 = ADD32(ctx->r24, -0X6650);
    // 0x8029EA40: and         $t0, $t8, $s1
    ctx->r8 = ctx->r24 & ctx->r17;
    // 0x8029EA44: jal         0x8028B950
    // 0x8029EA48: addu        $a0, $t0, $s0
    ctx->r4 = ADD32(ctx->r8, ctx->r16);
    func_8028B950(rdram, ctx);
        goto after_13;
    // 0x8029EA48: addu        $a0, $t0, $s0
    ctx->r4 = ADD32(ctx->r8, ctx->r16);
    after_13:
    // 0x8029EA4C: lui         $t1, 0x601
    ctx->r9 = S32(0X601 << 16);
    // 0x8029EA50: addiu       $t1, $t1, -0x5830
    ctx->r9 = ADD32(ctx->r9, -0X5830);
    // 0x8029EA54: and         $t4, $t1, $s1
    ctx->r12 = ctx->r9 & ctx->r17;
    // 0x8029EA58: jal         0x8028B950
    // 0x8029EA5C: addu        $a0, $t4, $s0
    ctx->r4 = ADD32(ctx->r12, ctx->r16);
    func_8028B950(rdram, ctx);
        goto after_14;
    // 0x8029EA5C: addu        $a0, $t4, $s0
    ctx->r4 = ADD32(ctx->r12, ctx->r16);
    after_14:
    // 0x8029EA60: lui         $t2, 0x600
    ctx->r10 = S32(0X600 << 16);
    // 0x8029EA64: addiu       $t2, $t2, 0x5310
    ctx->r10 = ADD32(ctx->r10, 0X5310);
    // 0x8029EA68: and         $t3, $t2, $s1
    ctx->r11 = ctx->r10 & ctx->r17;
    // 0x8029EA6C: jal         0x8028B950
    // 0x8029EA70: addu        $a0, $t3, $s0
    ctx->r4 = ADD32(ctx->r11, ctx->r16);
    func_8028B950(rdram, ctx);
        goto after_15;
    // 0x8029EA70: addu        $a0, $t3, $s0
    ctx->r4 = ADD32(ctx->r11, ctx->r16);
    after_15:
    // 0x8029EA74: lui         $t5, 0x600
    ctx->r13 = S32(0X600 << 16);
    // 0x8029EA78: addiu       $t5, $t5, 0x6420
    ctx->r13 = ADD32(ctx->r13, 0X6420);
    // 0x8029EA7C: and         $t6, $t5, $s1
    ctx->r14 = ctx->r13 & ctx->r17;
    // 0x8029EA80: jal         0x8028B950
    // 0x8029EA84: addu        $a0, $t6, $s0
    ctx->r4 = ADD32(ctx->r14, ctx->r16);
    func_8028B950(rdram, ctx);
        goto after_16;
    // 0x8029EA84: addu        $a0, $t6, $s0
    ctx->r4 = ADD32(ctx->r14, ctx->r16);
    after_16:
    // 0x8029EA88: lui         $t9, 0x600
    ctx->r25 = S32(0X600 << 16);
    // 0x8029EA8C: addiu       $t9, $t9, 0x7238
    ctx->r25 = ADD32(ctx->r25, 0X7238);
    // 0x8029EA90: and         $t7, $t9, $s1
    ctx->r15 = ctx->r25 & ctx->r17;
    // 0x8029EA94: jal         0x8028B950
    // 0x8029EA98: addu        $a0, $t7, $s0
    ctx->r4 = ADD32(ctx->r15, ctx->r16);
    func_8028B950(rdram, ctx);
        goto after_17;
    // 0x8029EA98: addu        $a0, $t7, $s0
    ctx->r4 = ADD32(ctx->r15, ctx->r16);
    after_17:
    // 0x8029EA9C: lui         $t8, 0x600
    ctx->r24 = S32(0X600 << 16);
    // 0x8029EAA0: addiu       $t8, $t8, 0x7C28
    ctx->r24 = ADD32(ctx->r24, 0X7C28);
    // 0x8029EAA4: and         $t0, $t8, $s1
    ctx->r8 = ctx->r24 & ctx->r17;
    // 0x8029EAA8: jal         0x8028B950
    // 0x8029EAAC: addu        $a0, $t0, $s0
    ctx->r4 = ADD32(ctx->r8, ctx->r16);
    func_8028B950(rdram, ctx);
        goto after_18;
    // 0x8029EAAC: addu        $a0, $t0, $s0
    ctx->r4 = ADD32(ctx->r8, ctx->r16);
    after_18:
    // 0x8029EAB0: lui         $t1, 0x601
    ctx->r9 = S32(0X601 << 16);
    // 0x8029EAB4: addiu       $t1, $t1, -0x79C0
    ctx->r9 = ADD32(ctx->r9, -0X79C0);
    // 0x8029EAB8: and         $t4, $t1, $s1
    ctx->r12 = ctx->r9 & ctx->r17;
    // 0x8029EABC: jal         0x8028B950
    // 0x8029EAC0: addu        $a0, $t4, $s0
    ctx->r4 = ADD32(ctx->r12, ctx->r16);
    func_8028B950(rdram, ctx);
        goto after_19;
    // 0x8029EAC0: addu        $a0, $t4, $s0
    ctx->r4 = ADD32(ctx->r12, ctx->r16);
    after_19:
    // 0x8029EAC4: lui         $t2, 0x601
    ctx->r10 = S32(0X601 << 16);
    // 0x8029EAC8: addiu       $t2, $t2, -0x6F40
    ctx->r10 = ADD32(ctx->r10, -0X6F40);
    // 0x8029EACC: and         $t3, $t2, $s1
    ctx->r11 = ctx->r10 & ctx->r17;
    // 0x8029EAD0: jal         0x8028B950
    // 0x8029EAD4: addu        $a0, $t3, $s0
    ctx->r4 = ADD32(ctx->r11, ctx->r16);
    func_8028B950(rdram, ctx);
        goto after_20;
    // 0x8029EAD4: addu        $a0, $t3, $s0
    ctx->r4 = ADD32(ctx->r11, ctx->r16);
    after_20:
    // 0x8029EAD8: lui         $t5, 0x601
    ctx->r13 = S32(0X601 << 16);
    // 0x8029EADC: addiu       $t5, $t5, -0x6518
    ctx->r13 = ADD32(ctx->r13, -0X6518);
    // 0x8029EAE0: and         $t6, $t5, $s1
    ctx->r14 = ctx->r13 & ctx->r17;
    // 0x8029EAE4: jal         0x8028B950
    // 0x8029EAE8: addu        $a0, $t6, $s0
    ctx->r4 = ADD32(ctx->r14, ctx->r16);
    func_8028B950(rdram, ctx);
        goto after_21;
    // 0x8029EAE8: addu        $a0, $t6, $s0
    ctx->r4 = ADD32(ctx->r14, ctx->r16);
    after_21:
    // 0x8029EAEC: lui         $t9, 0x601
    ctx->r25 = S32(0X601 << 16);
    // 0x8029EAF0: addiu       $t9, $t9, -0x5700
    ctx->r25 = ADD32(ctx->r25, -0X5700);
    // 0x8029EAF4: and         $t7, $t9, $s1
    ctx->r15 = ctx->r25 & ctx->r17;
    // 0x8029EAF8: jal         0x8028B950
    // 0x8029EAFC: addu        $a0, $t7, $s0
    ctx->r4 = ADD32(ctx->r15, ctx->r16);
    func_8028B950(rdram, ctx);
        goto after_22;
    // 0x8029EAFC: addu        $a0, $t7, $s0
    ctx->r4 = ADD32(ctx->r15, ctx->r16);
    after_22:
    // 0x8029EB00: lui         $t8, 0x600
    ctx->r24 = S32(0X600 << 16);
    // 0x8029EB04: addiu       $t8, $t8, 0x58A0
    ctx->r24 = ADD32(ctx->r24, 0X58A0);
    // 0x8029EB08: and         $t0, $t8, $s1
    ctx->r8 = ctx->r24 & ctx->r17;
    // 0x8029EB0C: jal         0x8028B950
    // 0x8029EB10: addu        $a0, $t0, $s0
    ctx->r4 = ADD32(ctx->r8, ctx->r16);
    func_8028B950(rdram, ctx);
        goto after_23;
    // 0x8029EB10: addu        $a0, $t0, $s0
    ctx->r4 = ADD32(ctx->r8, ctx->r16);
    after_23:
    // 0x8029EB14: lui         $t1, 0x600
    ctx->r9 = S32(0X600 << 16);
    // 0x8029EB18: addiu       $t1, $t1, 0x6878
    ctx->r9 = ADD32(ctx->r9, 0X6878);
    // 0x8029EB1C: and         $t4, $t1, $s1
    ctx->r12 = ctx->r9 & ctx->r17;
    // 0x8029EB20: jal         0x8028B950
    // 0x8029EB24: addu        $a0, $t4, $s0
    ctx->r4 = ADD32(ctx->r12, ctx->r16);
    func_8028B950(rdram, ctx);
        goto after_24;
    // 0x8029EB24: addu        $a0, $t4, $s0
    ctx->r4 = ADD32(ctx->r12, ctx->r16);
    after_24:
    // 0x8029EB28: lui         $t2, 0x600
    ctx->r10 = S32(0X600 << 16);
    // 0x8029EB2C: addiu       $t2, $t2, 0x7548
    ctx->r10 = ADD32(ctx->r10, 0X7548);
    // 0x8029EB30: and         $t3, $t2, $s1
    ctx->r11 = ctx->r10 & ctx->r17;
    // 0x8029EB34: jal         0x8028B950
    // 0x8029EB38: addu        $a0, $t3, $s0
    ctx->r4 = ADD32(ctx->r11, ctx->r16);
    func_8028B950(rdram, ctx);
        goto after_25;
    // 0x8029EB38: addu        $a0, $t3, $s0
    ctx->r4 = ADD32(ctx->r11, ctx->r16);
    after_25:
    // 0x8029EB3C: lui         $t5, 0x600
    ctx->r13 = S32(0X600 << 16);
    // 0x8029EB40: addiu       $t5, $t5, 0x7F38
    ctx->r13 = ADD32(ctx->r13, 0X7F38);
    // 0x8029EB44: and         $t6, $t5, $s1
    ctx->r14 = ctx->r13 & ctx->r17;
    // 0x8029EB48: jal         0x8028B950
    // 0x8029EB4C: addu        $a0, $t6, $s0
    ctx->r4 = ADD32(ctx->r14, ctx->r16);
    func_8028B950(rdram, ctx);
        goto after_26;
    // 0x8029EB4C: addu        $a0, $t6, $s0
    ctx->r4 = ADD32(ctx->r14, ctx->r16);
    after_26:
    // 0x8029EB50: lui         $t9, 0x601
    ctx->r25 = S32(0X601 << 16);
    // 0x8029EB54: addiu       $t9, $t9, -0x7680
    ctx->r25 = ADD32(ctx->r25, -0X7680);
    // 0x8029EB58: and         $t7, $t9, $s1
    ctx->r15 = ctx->r25 & ctx->r17;
    // 0x8029EB5C: jal         0x8028B950
    // 0x8029EB60: addu        $a0, $t7, $s0
    ctx->r4 = ADD32(ctx->r15, ctx->r16);
    func_8028B950(rdram, ctx);
        goto after_27;
    // 0x8029EB60: addu        $a0, $t7, $s0
    ctx->r4 = ADD32(ctx->r15, ctx->r16);
    after_27:
    // 0x8029EB64: lui         $t8, 0x601
    ctx->r24 = S32(0X601 << 16);
    // 0x8029EB68: addiu       $t8, $t8, -0x6C30
    ctx->r24 = ADD32(ctx->r24, -0X6C30);
    // 0x8029EB6C: and         $t0, $t8, $s1
    ctx->r8 = ctx->r24 & ctx->r17;
    // 0x8029EB70: jal         0x8028B950
    // 0x8029EB74: addu        $a0, $t0, $s0
    ctx->r4 = ADD32(ctx->r8, ctx->r16);
    func_8028B950(rdram, ctx);
        goto after_28;
    // 0x8029EB74: addu        $a0, $t0, $s0
    ctx->r4 = ADD32(ctx->r8, ctx->r16);
    after_28:
    // 0x8029EB78: lui         $t1, 0x601
    ctx->r9 = S32(0X601 << 16);
    // 0x8029EB7C: addiu       $t1, $t1, -0x60C0
    ctx->r9 = ADD32(ctx->r9, -0X60C0);
    // 0x8029EB80: and         $t4, $t1, $s1
    ctx->r12 = ctx->r9 & ctx->r17;
    // 0x8029EB84: jal         0x8028B950
    // 0x8029EB88: addu        $a0, $t4, $s0
    ctx->r4 = ADD32(ctx->r12, ctx->r16);
    func_8028B950(rdram, ctx);
        goto after_29;
    // 0x8029EB88: addu        $a0, $t4, $s0
    ctx->r4 = ADD32(ctx->r12, ctx->r16);
    after_29:
    // 0x8029EB8C: lui         $t2, 0x601
    ctx->r10 = S32(0X601 << 16);
    // 0x8029EB90: addiu       $t2, $t2, -0x5130
    ctx->r10 = ADD32(ctx->r10, -0X5130);
    // 0x8029EB94: and         $t3, $t2, $s1
    ctx->r11 = ctx->r10 & ctx->r17;
    // 0x8029EB98: jal         0x8028B950
    // 0x8029EB9C: addu        $a0, $t3, $s0
    ctx->r4 = ADD32(ctx->r11, ctx->r16);
    func_8028B950(rdram, ctx);
        goto after_30;
    // 0x8029EB9C: addu        $a0, $t3, $s0
    ctx->r4 = ADD32(ctx->r11, ctx->r16);
    after_30:
    // 0x8029EBA0: lui         $t5, 0x600
    ctx->r13 = S32(0X600 << 16);
    // 0x8029EBA4: addiu       $t5, $t5, 0x5CF8
    ctx->r13 = ADD32(ctx->r13, 0X5CF8);
    // 0x8029EBA8: and         $t6, $t5, $s1
    ctx->r14 = ctx->r13 & ctx->r17;
    // 0x8029EBAC: jal         0x8028B950
    // 0x8029EBB0: addu        $a0, $t6, $s0
    ctx->r4 = ADD32(ctx->r14, ctx->r16);
    func_8028B950(rdram, ctx);
        goto after_31;
    // 0x8029EBB0: addu        $a0, $t6, $s0
    ctx->r4 = ADD32(ctx->r14, ctx->r16);
    after_31:
    // 0x8029EBB4: lui         $t9, 0x600
    ctx->r25 = S32(0X600 << 16);
    // 0x8029EBB8: addiu       $t9, $t9, 0x6DE8
    ctx->r25 = ADD32(ctx->r25, 0X6DE8);
    // 0x8029EBBC: and         $t7, $t9, $s1
    ctx->r15 = ctx->r25 & ctx->r17;
    // 0x8029EBC0: jal         0x8028B950
    // 0x8029EBC4: addu        $a0, $t7, $s0
    ctx->r4 = ADD32(ctx->r15, ctx->r16);
    func_8028B950(rdram, ctx);
        goto after_32;
    // 0x8029EBC4: addu        $a0, $t7, $s0
    ctx->r4 = ADD32(ctx->r15, ctx->r16);
    after_32:
    // 0x8029EBC8: lui         $t8, 0x600
    ctx->r24 = S32(0X600 << 16);
    // 0x8029EBCC: addiu       $t8, $t8, 0x7828
    ctx->r24 = ADD32(ctx->r24, 0X7828);
    // 0x8029EBD0: and         $t0, $t8, $s1
    ctx->r8 = ctx->r24 & ctx->r17;
    // 0x8029EBD4: jal         0x8028B950
    // 0x8029EBD8: addu        $a0, $t0, $s0
    ctx->r4 = ADD32(ctx->r8, ctx->r16);
    func_8028B950(rdram, ctx);
        goto after_33;
    // 0x8029EBD8: addu        $a0, $t0, $s0
    ctx->r4 = ADD32(ctx->r8, ctx->r16);
    after_33:
    // 0x8029EBDC: lui         $t1, 0x601
    ctx->r9 = S32(0X601 << 16);
    // 0x8029EBE0: addiu       $t1, $t1, -0x7DB8
    ctx->r9 = ADD32(ctx->r9, -0X7DB8);
    // 0x8029EBE4: and         $t4, $t1, $s1
    ctx->r12 = ctx->r9 & ctx->r17;
    // 0x8029EBE8: jal         0x8028B950
    // 0x8029EBEC: addu        $a0, $t4, $s0
    ctx->r4 = ADD32(ctx->r12, ctx->r16);
    func_8028B950(rdram, ctx);
        goto after_34;
    // 0x8029EBEC: addu        $a0, $t4, $s0
    ctx->r4 = ADD32(ctx->r12, ctx->r16);
    after_34:
    // 0x8029EBF0: lui         $t2, 0x601
    ctx->r10 = S32(0X601 << 16);
    // 0x8029EBF4: addiu       $t2, $t2, -0x7340
    ctx->r10 = ADD32(ctx->r10, -0X7340);
    // 0x8029EBF8: and         $t3, $t2, $s1
    ctx->r11 = ctx->r10 & ctx->r17;
    // 0x8029EBFC: jal         0x8028B950
    // 0x8029EC00: addu        $a0, $t3, $s0
    ctx->r4 = ADD32(ctx->r11, ctx->r16);
    func_8028B950(rdram, ctx);
        goto after_35;
    // 0x8029EC00: addu        $a0, $t3, $s0
    ctx->r4 = ADD32(ctx->r11, ctx->r16);
    after_35:
    // 0x8029EC04: lui         $t5, 0x601
    ctx->r13 = S32(0X601 << 16);
    // 0x8029EC08: addiu       $t5, $t5, -0x6920
    ctx->r13 = ADD32(ctx->r13, -0X6920);
    // 0x8029EC0C: and         $t6, $t5, $s1
    ctx->r14 = ctx->r13 & ctx->r17;
    // 0x8029EC10: jal         0x8028B950
    // 0x8029EC14: addu        $a0, $t6, $s0
    ctx->r4 = ADD32(ctx->r14, ctx->r16);
    func_8028B950(rdram, ctx);
        goto after_36;
    // 0x8029EC14: addu        $a0, $t6, $s0
    ctx->r4 = ADD32(ctx->r14, ctx->r16);
    after_36:
    // 0x8029EC18: lui         $t9, 0x601
    ctx->r25 = S32(0X601 << 16);
    // 0x8029EC1C: addiu       $t9, $t9, -0x5B50
    ctx->r25 = ADD32(ctx->r25, -0X5B50);
    // 0x8029EC20: and         $t7, $t9, $s1
    ctx->r15 = ctx->r25 & ctx->r17;
    // 0x8029EC24: jal         0x8028B950
    // 0x8029EC28: addu        $a0, $t7, $s0
    ctx->r4 = ADD32(ctx->r15, ctx->r16);
    func_8028B950(rdram, ctx);
        goto after_37;
    // 0x8029EC28: addu        $a0, $t7, $s0
    ctx->r4 = ADD32(ctx->r15, ctx->r16);
    after_37:
    // 0x8029EC2C: lui         $t8, 0x601
    ctx->r24 = S32(0X601 << 16);
    // 0x8029EC30: addiu       $t8, $t8, -0x4CD8
    ctx->r24 = ADD32(ctx->r24, -0X4CD8);
    // 0x8029EC34: and         $t0, $t8, $s1
    ctx->r8 = ctx->r24 & ctx->r17;
    // 0x8029EC38: jal         0x8028B950
    // 0x8029EC3C: addu        $a0, $t0, $s0
    ctx->r4 = ADD32(ctx->r8, ctx->r16);
    func_8028B950(rdram, ctx);
        goto after_38;
    // 0x8029EC3C: addu        $a0, $t0, $s0
    ctx->r4 = ADD32(ctx->r8, ctx->r16);
    after_38:
    // 0x8029EC40: lui         $t1, 0x600
    ctx->r9 = S32(0X600 << 16);
    // 0x8029EC44: addiu       $t1, $t1, 0x6058
    ctx->r9 = ADD32(ctx->r9, 0X6058);
    // 0x8029EC48: and         $t4, $t1, $s1
    ctx->r12 = ctx->r9 & ctx->r17;
    // 0x8029EC4C: jal         0x8028B950
    // 0x8029EC50: addu        $a0, $t4, $s0
    ctx->r4 = ADD32(ctx->r12, ctx->r16);
    func_8028B950(rdram, ctx);
        goto after_39;
    // 0x8029EC50: addu        $a0, $t4, $s0
    ctx->r4 = ADD32(ctx->r12, ctx->r16);
    after_39:
    // 0x8029EC54: lui         $t2, 0xE00
    ctx->r10 = S32(0XE00 << 16);
    // 0x8029EC58: lui         $s0, 0x803B
    ctx->r16 = S32(0X803B << 16);
    // 0x8029EC5C: addiu       $t2, $t2, 0x20F0
    ctx->r10 = ADD32(ctx->r10, 0X20F0);
    // 0x8029EC60: ori         $s0, $s0, 0xB200
    ctx->r16 = ctx->r16 | 0XB200;
    // 0x8029EC64: and         $t3, $t2, $s1
    ctx->r11 = ctx->r10 & ctx->r17;
    // 0x8029EC68: jal         0x8028B950
    // 0x8029EC6C: addu        $a0, $t3, $s0
    ctx->r4 = ADD32(ctx->r11, ctx->r16);
    func_8028B950(rdram, ctx);
        goto after_40;
    // 0x8029EC6C: addu        $a0, $t3, $s0
    ctx->r4 = ADD32(ctx->r11, ctx->r16);
    after_40:
    // 0x8029EC70: lui         $t5, 0xE00
    ctx->r13 = S32(0XE00 << 16);
    // 0x8029EC74: addiu       $t5, $t5, 0x5988
    ctx->r13 = ADD32(ctx->r13, 0X5988);
    // 0x8029EC78: and         $t6, $t5, $s1
    ctx->r14 = ctx->r13 & ctx->r17;
    // 0x8029EC7C: jal         0x8028B950
    // 0x8029EC80: addu        $a0, $t6, $s0
    ctx->r4 = ADD32(ctx->r14, ctx->r16);
    func_8028B950(rdram, ctx);
        goto after_41;
    // 0x8029EC80: addu        $a0, $t6, $s0
    ctx->r4 = ADD32(ctx->r14, ctx->r16);
    after_41:
    // 0x8029EC84: lui         $t9, 0xE00
    ctx->r25 = S32(0XE00 << 16);
    // 0x8029EC88: addiu       $t9, $t9, 0x1CC0
    ctx->r25 = ADD32(ctx->r25, 0X1CC0);
    // 0x8029EC8C: and         $t7, $t9, $s1
    ctx->r15 = ctx->r25 & ctx->r17;
    // 0x8029EC90: jal         0x8028B950
    // 0x8029EC94: addu        $a0, $t7, $s0
    ctx->r4 = ADD32(ctx->r15, ctx->r16);
    func_8028B950(rdram, ctx);
        goto after_42;
    // 0x8029EC94: addu        $a0, $t7, $s0
    ctx->r4 = ADD32(ctx->r15, ctx->r16);
    after_42:
    // 0x8029EC98: lui         $t8, 0xE00
    ctx->r24 = S32(0XE00 << 16);
    // 0x8029EC9C: addiu       $t8, $t8, 0x2F38
    ctx->r24 = ADD32(ctx->r24, 0X2F38);
    // 0x8029ECA0: and         $t0, $t8, $s1
    ctx->r8 = ctx->r24 & ctx->r17;
    // 0x8029ECA4: jal         0x8028B950
    // 0x8029ECA8: addu        $a0, $t0, $s0
    ctx->r4 = ADD32(ctx->r8, ctx->r16);
    func_8028B950(rdram, ctx);
        goto after_43;
    // 0x8029ECA8: addu        $a0, $t0, $s0
    ctx->r4 = ADD32(ctx->r8, ctx->r16);
    after_43:
    // 0x8029ECAC: lui         $t1, 0xE00
    ctx->r9 = S32(0XE00 << 16);
    // 0x8029ECB0: addiu       $t1, $t1, 0x3438
    ctx->r9 = ADD32(ctx->r9, 0X3438);
    // 0x8029ECB4: and         $t4, $t1, $s1
    ctx->r12 = ctx->r9 & ctx->r17;
    // 0x8029ECB8: jal         0x8028B950
    // 0x8029ECBC: addu        $a0, $t4, $s0
    ctx->r4 = ADD32(ctx->r12, ctx->r16);
    func_8028B950(rdram, ctx);
        goto after_44;
    // 0x8029ECBC: addu        $a0, $t4, $s0
    ctx->r4 = ADD32(ctx->r12, ctx->r16);
    after_44:
    // 0x8029ECC0: lui         $t2, 0xE00
    ctx->r10 = S32(0XE00 << 16);
    // 0x8029ECC4: addiu       $t2, $t2, 0x3938
    ctx->r10 = ADD32(ctx->r10, 0X3938);
    // 0x8029ECC8: and         $t3, $t2, $s1
    ctx->r11 = ctx->r10 & ctx->r17;
    // 0x8029ECCC: jal         0x8028B950
    // 0x8029ECD0: addu        $a0, $t3, $s0
    ctx->r4 = ADD32(ctx->r11, ctx->r16);
    func_8028B950(rdram, ctx);
        goto after_45;
    // 0x8029ECD0: addu        $a0, $t3, $s0
    ctx->r4 = ADD32(ctx->r11, ctx->r16);
    after_45:
    // 0x8029ECD4: lui         $t5, 0xE00
    ctx->r13 = S32(0XE00 << 16);
    // 0x8029ECD8: addiu       $t5, $t5, 0x4248
    ctx->r13 = ADD32(ctx->r13, 0X4248);
    // 0x8029ECDC: and         $t6, $t5, $s1
    ctx->r14 = ctx->r13 & ctx->r17;
    // 0x8029ECE0: jal         0x8028B950
    // 0x8029ECE4: addu        $a0, $t6, $s0
    ctx->r4 = ADD32(ctx->r14, ctx->r16);
    func_8028B950(rdram, ctx);
        goto after_46;
    // 0x8029ECE4: addu        $a0, $t6, $s0
    ctx->r4 = ADD32(ctx->r14, ctx->r16);
    after_46:
    // 0x8029ECE8: lui         $t9, 0xE00
    ctx->r25 = S32(0XE00 << 16);
    // 0x8029ECEC: addiu       $t9, $t9, 0x4A88
    ctx->r25 = ADD32(ctx->r25, 0X4A88);
    // 0x8029ECF0: and         $t7, $t9, $s1
    ctx->r15 = ctx->r25 & ctx->r17;
    // 0x8029ECF4: jal         0x8028B950
    // 0x8029ECF8: addu        $a0, $t7, $s0
    ctx->r4 = ADD32(ctx->r15, ctx->r16);
    func_8028B950(rdram, ctx);
        goto after_47;
    // 0x8029ECF8: addu        $a0, $t7, $s0
    ctx->r4 = ADD32(ctx->r15, ctx->r16);
    after_47:
    // 0x8029ECFC: lui         $t8, 0xE00
    ctx->r24 = S32(0XE00 << 16);
    // 0x8029ED00: addiu       $t8, $t8, 0x5558
    ctx->r24 = ADD32(ctx->r24, 0X5558);
    // 0x8029ED04: and         $t0, $t8, $s1
    ctx->r8 = ctx->r24 & ctx->r17;
    // 0x8029ED08: jal         0x8028B950
    // 0x8029ED0C: addu        $a0, $t0, $s0
    ctx->r4 = ADD32(ctx->r8, ctx->r16);
    func_8028B950(rdram, ctx);
        goto after_48;
    // 0x8029ED0C: addu        $a0, $t0, $s0
    ctx->r4 = ADD32(ctx->r8, ctx->r16);
    after_48:
    // 0x8029ED10: lui         $t1, 0xE00
    ctx->r9 = S32(0XE00 << 16);
    // 0x8029ED14: addiu       $t1, $t1, 0x1ED8
    ctx->r9 = ADD32(ctx->r9, 0X1ED8);
    // 0x8029ED18: and         $t4, $t1, $s1
    ctx->r12 = ctx->r9 & ctx->r17;
    // 0x8029ED1C: jal         0x8028B950
    // 0x8029ED20: addu        $a0, $t4, $s0
    ctx->r4 = ADD32(ctx->r12, ctx->r16);
    func_8028B950(rdram, ctx);
        goto after_49;
    // 0x8029ED20: addu        $a0, $t4, $s0
    ctx->r4 = ADD32(ctx->r12, ctx->r16);
    after_49:
    // 0x8029ED24: lui         $t2, 0xE00
    ctx->r10 = S32(0XE00 << 16);
    // 0x8029ED28: addiu       $t2, $t2, 0x3150
    ctx->r10 = ADD32(ctx->r10, 0X3150);
    // 0x8029ED2C: and         $t3, $t2, $s1
    ctx->r11 = ctx->r10 & ctx->r17;
    // 0x8029ED30: jal         0x8028B950
    // 0x8029ED34: addu        $a0, $t3, $s0
    ctx->r4 = ADD32(ctx->r11, ctx->r16);
    func_8028B950(rdram, ctx);
        goto after_50;
    // 0x8029ED34: addu        $a0, $t3, $s0
    ctx->r4 = ADD32(ctx->r11, ctx->r16);
    after_50:
    // 0x8029ED38: lui         $t5, 0xE00
    ctx->r13 = S32(0XE00 << 16);
    // 0x8029ED3C: addiu       $t5, $t5, 0x3720
    ctx->r13 = ADD32(ctx->r13, 0X3720);
    // 0x8029ED40: and         $t6, $t5, $s1
    ctx->r14 = ctx->r13 & ctx->r17;
    // 0x8029ED44: jal         0x8028B950
    // 0x8029ED48: addu        $a0, $t6, $s0
    ctx->r4 = ADD32(ctx->r14, ctx->r16);
    func_8028B950(rdram, ctx);
        goto after_51;
    // 0x8029ED48: addu        $a0, $t6, $s0
    ctx->r4 = ADD32(ctx->r14, ctx->r16);
    after_51:
    // 0x8029ED4C: lui         $t9, 0xE00
    ctx->r25 = S32(0XE00 << 16);
    // 0x8029ED50: addiu       $t9, $t9, 0x3DC0
    ctx->r25 = ADD32(ctx->r25, 0X3DC0);
    // 0x8029ED54: and         $t7, $t9, $s1
    ctx->r15 = ctx->r25 & ctx->r17;
    // 0x8029ED58: jal         0x8028B950
    // 0x8029ED5C: addu        $a0, $t7, $s0
    ctx->r4 = ADD32(ctx->r15, ctx->r16);
    func_8028B950(rdram, ctx);
        goto after_52;
    // 0x8029ED5C: addu        $a0, $t7, $s0
    ctx->r4 = ADD32(ctx->r15, ctx->r16);
    after_52:
    // 0x8029ED60: lui         $t8, 0xE00
    ctx->r24 = S32(0XE00 << 16);
    // 0x8029ED64: addiu       $t8, $t8, 0x46D0
    ctx->r24 = ADD32(ctx->r24, 0X46D0);
    // 0x8029ED68: and         $t0, $t8, $s1
    ctx->r8 = ctx->r24 & ctx->r17;
    // 0x8029ED6C: jal         0x8028B950
    // 0x8029ED70: addu        $a0, $t0, $s0
    ctx->r4 = ADD32(ctx->r8, ctx->r16);
    func_8028B950(rdram, ctx);
        goto after_53;
    // 0x8029ED70: addu        $a0, $t0, $s0
    ctx->r4 = ADD32(ctx->r8, ctx->r16);
    after_53:
    // 0x8029ED74: lui         $t1, 0xE00
    ctx->r9 = S32(0XE00 << 16);
    // 0x8029ED78: addiu       $t1, $t1, 0x4CA0
    ctx->r9 = ADD32(ctx->r9, 0X4CA0);
    // 0x8029ED7C: and         $t4, $t1, $s1
    ctx->r12 = ctx->r9 & ctx->r17;
    // 0x8029ED80: jal         0x8028B950
    // 0x8029ED84: addu        $a0, $t4, $s0
    ctx->r4 = ADD32(ctx->r12, ctx->r16);
    func_8028B950(rdram, ctx);
        goto after_54;
    // 0x8029ED84: addu        $a0, $t4, $s0
    ctx->r4 = ADD32(ctx->r12, ctx->r16);
    after_54:
    // 0x8029ED88: lui         $t2, 0xE00
    ctx->r10 = S32(0XE00 << 16);
    // 0x8029ED8C: addiu       $t2, $t2, 0x51A0
    ctx->r10 = ADD32(ctx->r10, 0X51A0);
    // 0x8029ED90: and         $t3, $t2, $s1
    ctx->r11 = ctx->r10 & ctx->r17;
    // 0x8029ED94: jal         0x8028B950
    // 0x8029ED98: addu        $a0, $t3, $s0
    ctx->r4 = ADD32(ctx->r11, ctx->r16);
    func_8028B950(rdram, ctx);
        goto after_55;
    // 0x8029ED98: addu        $a0, $t3, $s0
    ctx->r4 = ADD32(ctx->r11, ctx->r16);
    after_55:
    // 0x8029ED9C: lui         $t5, 0xE00
    ctx->r13 = S32(0XE00 << 16);
    // 0x8029EDA0: addiu       $t5, $t5, 0x5770
    ctx->r13 = ADD32(ctx->r13, 0X5770);
    // 0x8029EDA4: and         $t6, $t5, $s1
    ctx->r14 = ctx->r13 & ctx->r17;
    // 0x8029EDA8: jal         0x8028B950
    // 0x8029EDAC: addu        $a0, $t6, $s0
    ctx->r4 = ADD32(ctx->r14, ctx->r16);
    func_8028B950(rdram, ctx);
        goto after_56;
    // 0x8029EDAC: addu        $a0, $t6, $s0
    ctx->r4 = ADD32(ctx->r14, ctx->r16);
    after_56:
    // 0x8029EDB0: jal         0x8029F548
    // 0x8029EDB4: nop

    func_8029F548(rdram, ctx);
        goto after_57;
    // 0x8029EDB4: nop

    after_57:
    // 0x8029EDB8: jal         0x802A0D44
    // 0x8029EDBC: nop

    func_802A0D44(rdram, ctx);
        goto after_58;
    // 0x8029EDBC: nop

    after_58:
    // 0x8029EDC0: lui         $v1, 0x8011
    ctx->r3 = S32(0X8011 << 16);
    // 0x8029EDC4: addiu       $v1, $v1, -0x2F98
    ctx->r3 = ADD32(ctx->r3, -0X2F98);
    // 0x8029EDC8: lw          $t9, 0x0($v1)
    ctx->r25 = MEM_W(ctx->r3, 0X0);
    // 0x8029EDCC: lui         $a0, 0x2
    ctx->r4 = S32(0X2 << 16);
    // 0x8029EDD0: ori         $a0, $a0, 0x8000
    ctx->r4 = ctx->r4 | 0X8000;
    // 0x8029EDD4: lui         $a1, 0x600
    ctx->r5 = S32(0X600 << 16);
    // 0x8029EDD8: addiu       $a1, $a1, 0x5310
    ctx->r5 = ADD32(ctx->r5, 0X5310);
    // 0x8029EDDC: addu        $t7, $t9, $a0
    ctx->r15 = ADD32(ctx->r25, ctx->r4);
    // 0x8029EDE0: sw          $a1, 0x1398($t7)
    MEM_W(0X1398, ctx->r15) = ctx->r5;
    // 0x8029EDE4: lw          $t0, 0x0($v1)
    ctx->r8 = MEM_W(ctx->r3, 0X0);
    // 0x8029EDE8: addiu       $t8, $zero, 0x6
    ctx->r24 = ADD32(0, 0X6);
    // 0x8029EDEC: addu        $t1, $t0, $a0
    ctx->r9 = ADD32(ctx->r8, ctx->r4);
    // 0x8029EDF0: lui         $v0, 0x802C
    ctx->r2 = S32(0X802C << 16);
    // 0x8029EDF4: sw          $t8, 0x139C($t1)
    MEM_W(0X139C, ctx->r9) = ctx->r24;
    // 0x8029EDF8: addiu       $v0, $v0, 0x3600
    ctx->r2 = ADD32(ctx->r2, 0X3600);
    // 0x8029EDFC: lui         $t4, 0x600
    ctx->r12 = S32(0X600 << 16);
    // 0x8029EE00: lui         $t2, 0x600
    ctx->r10 = S32(0X600 << 16);
    // 0x8029EE04: lui         $t3, 0x600
    ctx->r11 = S32(0X600 << 16);
    // 0x8029EE08: lui         $t5, 0x600
    ctx->r13 = S32(0X600 << 16);
    // 0x8029EE0C: lui         $t6, 0x601
    ctx->r14 = S32(0X601 << 16);
    // 0x8029EE10: lui         $t9, 0x601
    ctx->r25 = S32(0X601 << 16);
    // 0x8029EE14: lui         $t7, 0x601
    ctx->r15 = S32(0X601 << 16);
    // 0x8029EE18: lui         $t0, 0x601
    ctx->r8 = S32(0X601 << 16);
    // 0x8029EE1C: addiu       $t4, $t4, 0x51E0
    ctx->r12 = ADD32(ctx->r12, 0X51E0);
    // 0x8029EE20: addiu       $t2, $t2, 0x62E8
    ctx->r10 = ADD32(ctx->r10, 0X62E8);
    // 0x8029EE24: addiu       $t3, $t3, 0x7108
    ctx->r11 = ADD32(ctx->r11, 0X7108);
    // 0x8029EE28: addiu       $t5, $t5, 0x7AF8
    ctx->r13 = ADD32(ctx->r13, 0X7AF8);
    // 0x8029EE2C: addiu       $t6, $t6, -0x7AF0
    ctx->r14 = ADD32(ctx->r14, -0X7AF0);
    // 0x8029EE30: addiu       $t9, $t9, -0x7070
    ctx->r25 = ADD32(ctx->r25, -0X7070);
    // 0x8029EE34: addiu       $t7, $t7, -0x6650
    ctx->r15 = ADD32(ctx->r15, -0X6650);
    // 0x8029EE38: addiu       $t0, $t0, -0x5830
    ctx->r8 = ADD32(ctx->r8, -0X5830);
    // 0x8029EE3C: sw          $t4, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r12;
    // 0x8029EE40: sw          $t2, 0xC($v0)
    MEM_W(0XC, ctx->r2) = ctx->r10;
    // 0x8029EE44: sw          $t3, 0x14($v0)
    MEM_W(0X14, ctx->r2) = ctx->r11;
    // 0x8029EE48: sw          $t5, 0x1C($v0)
    MEM_W(0X1C, ctx->r2) = ctx->r13;
    // 0x8029EE4C: sw          $t6, 0x24($v0)
    MEM_W(0X24, ctx->r2) = ctx->r14;
    // 0x8029EE50: sw          $t9, 0x2C($v0)
    MEM_W(0X2C, ctx->r2) = ctx->r25;
    // 0x8029EE54: sw          $t7, 0x34($v0)
    MEM_W(0X34, ctx->r2) = ctx->r15;
    // 0x8029EE58: sw          $t0, 0x3C($v0)
    MEM_W(0X3C, ctx->r2) = ctx->r8;
    // 0x8029EE5C: lui         $t8, 0x8009
    ctx->r24 = S32(0X8009 << 16);
    // 0x8029EE60: lw          $t8, 0x68E0($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X68E0);
    // 0x8029EE64: lui         $t0, 0x600
    ctx->r8 = S32(0X600 << 16);
    // 0x8029EE68: beq         $t8, $zero, L_8029EED0
    if (ctx->r24 == 0) {
        // 0x8029EE6C: addiu       $t0, $t0, 0x6420
        ctx->r8 = ADD32(ctx->r8, 0X6420);
            goto L_8029EED0;
    }
    // 0x8029EE6C: addiu       $t0, $t0, 0x6420
    ctx->r8 = ADD32(ctx->r8, 0X6420);
    // 0x8029EE70: lui         $t1, 0xA00
    ctx->r9 = S32(0XA00 << 16);
    // 0x8029EE74: lui         $t4, 0xA00
    ctx->r12 = S32(0XA00 << 16);
    // 0x8029EE78: lui         $t2, 0xA00
    ctx->r10 = S32(0XA00 << 16);
    // 0x8029EE7C: lui         $t3, 0xA00
    ctx->r11 = S32(0XA00 << 16);
    // 0x8029EE80: lui         $t5, 0xA00
    ctx->r13 = S32(0XA00 << 16);
    // 0x8029EE84: lui         $t6, 0xA00
    ctx->r14 = S32(0XA00 << 16);
    // 0x8029EE88: lui         $t9, 0xA00
    ctx->r25 = S32(0XA00 << 16);
    // 0x8029EE8C: lui         $t7, 0xA00
    ctx->r15 = S32(0XA00 << 16);
    // 0x8029EE90: addiu       $t1, $t1, 0x4660
    ctx->r9 = ADD32(ctx->r9, 0X4660);
    // 0x8029EE94: addiu       $t4, $t4, 0x4758
    ctx->r12 = ADD32(ctx->r12, 0X4758);
    // 0x8029EE98: addiu       $t2, $t2, 0x4850
    ctx->r10 = ADD32(ctx->r10, 0X4850);
    // 0x8029EE9C: addiu       $t3, $t3, 0x4948
    ctx->r11 = ADD32(ctx->r11, 0X4948);
    // 0x8029EEA0: addiu       $t5, $t5, 0x4A40
    ctx->r13 = ADD32(ctx->r13, 0X4A40);
    // 0x8029EEA4: addiu       $t6, $t6, 0x4B38
    ctx->r14 = ADD32(ctx->r14, 0X4B38);
    // 0x8029EEA8: addiu       $t9, $t9, 0x4C30
    ctx->r25 = ADD32(ctx->r25, 0X4C30);
    // 0x8029EEAC: addiu       $t7, $t7, 0x4D28
    ctx->r15 = ADD32(ctx->r15, 0X4D28);
    // 0x8029EEB0: sw          $t1, 0x84($v0)
    MEM_W(0X84, ctx->r2) = ctx->r9;
    // 0x8029EEB4: sw          $t4, 0x8C($v0)
    MEM_W(0X8C, ctx->r2) = ctx->r12;
    // 0x8029EEB8: sw          $t2, 0x94($v0)
    MEM_W(0X94, ctx->r2) = ctx->r10;
    // 0x8029EEBC: sw          $t3, 0x9C($v0)
    MEM_W(0X9C, ctx->r2) = ctx->r11;
    // 0x8029EEC0: sw          $t5, 0xA4($v0)
    MEM_W(0XA4, ctx->r2) = ctx->r13;
    // 0x8029EEC4: sw          $t6, 0xAC($v0)
    MEM_W(0XAC, ctx->r2) = ctx->r14;
    // 0x8029EEC8: sw          $t9, 0xB4($v0)
    MEM_W(0XB4, ctx->r2) = ctx->r25;
    // 0x8029EECC: sw          $t7, 0xBC($v0)
    MEM_W(0XBC, ctx->r2) = ctx->r15;
L_8029EED0:
    // 0x8029EED0: sw          $t0, 0xCC($v0)
    MEM_W(0XCC, ctx->r2) = ctx->r8;
    // 0x8029EED4: lui         $t8, 0x600
    ctx->r24 = S32(0X600 << 16);
    // 0x8029EED8: lui         $t1, 0x600
    ctx->r9 = S32(0X600 << 16);
    // 0x8029EEDC: lui         $t4, 0x601
    ctx->r12 = S32(0X601 << 16);
    // 0x8029EEE0: lui         $t2, 0x601
    ctx->r10 = S32(0X601 << 16);
    // 0x8029EEE4: lui         $t3, 0x601
    ctx->r11 = S32(0X601 << 16);
    // 0x8029EEE8: lui         $t5, 0x601
    ctx->r13 = S32(0X601 << 16);
    // 0x8029EEEC: lui         $t6, 0x600
    ctx->r14 = S32(0X600 << 16);
    // 0x8029EEF0: lui         $t9, 0x600
    ctx->r25 = S32(0X600 << 16);
    // 0x8029EEF4: lui         $t7, 0x600
    ctx->r15 = S32(0X600 << 16);
    // 0x8029EEF8: lui         $t0, 0x600
    ctx->r8 = S32(0X600 << 16);
    // 0x8029EEFC: addiu       $t8, $t8, 0x7238
    ctx->r24 = ADD32(ctx->r24, 0X7238);
    // 0x8029EF00: addiu       $t1, $t1, 0x7C28
    ctx->r9 = ADD32(ctx->r9, 0X7C28);
    // 0x8029EF04: addiu       $t4, $t4, -0x79C0
    ctx->r12 = ADD32(ctx->r12, -0X79C0);
    // 0x8029EF08: addiu       $t2, $t2, -0x6F40
    ctx->r10 = ADD32(ctx->r10, -0X6F40);
    // 0x8029EF0C: addiu       $t3, $t3, -0x6518
    ctx->r11 = ADD32(ctx->r11, -0X6518);
    // 0x8029EF10: addiu       $t5, $t5, -0x5700
    ctx->r13 = ADD32(ctx->r13, -0X5700);
    // 0x8029EF14: addiu       $t6, $t6, 0x58A0
    ctx->r14 = ADD32(ctx->r14, 0X58A0);
    // 0x8029EF18: addiu       $t9, $t9, 0x6878
    ctx->r25 = ADD32(ctx->r25, 0X6878);
    // 0x8029EF1C: addiu       $t7, $t7, 0x7548
    ctx->r15 = ADD32(ctx->r15, 0X7548);
    // 0x8029EF20: addiu       $t0, $t0, 0x7F38
    ctx->r8 = ADD32(ctx->r8, 0X7F38);
    // 0x8029EF24: sw          $t8, 0xD4($v0)
    MEM_W(0XD4, ctx->r2) = ctx->r24;
    // 0x8029EF28: sw          $t1, 0xDC($v0)
    MEM_W(0XDC, ctx->r2) = ctx->r9;
    // 0x8029EF2C: sw          $t4, 0xE4($v0)
    MEM_W(0XE4, ctx->r2) = ctx->r12;
    // 0x8029EF30: sw          $t2, 0xEC($v0)
    MEM_W(0XEC, ctx->r2) = ctx->r10;
    // 0x8029EF34: sw          $t3, 0xF4($v0)
    MEM_W(0XF4, ctx->r2) = ctx->r11;
    // 0x8029EF38: sw          $t5, 0xFC($v0)
    MEM_W(0XFC, ctx->r2) = ctx->r13;
    // 0x8029EF3C: sw          $t6, 0x104($v0)
    MEM_W(0X104, ctx->r2) = ctx->r14;
    // 0x8029EF40: sw          $t9, 0x10C($v0)
    MEM_W(0X10C, ctx->r2) = ctx->r25;
    // 0x8029EF44: sw          $t7, 0x114($v0)
    MEM_W(0X114, ctx->r2) = ctx->r15;
    // 0x8029EF48: sw          $t0, 0x11C($v0)
    MEM_W(0X11C, ctx->r2) = ctx->r8;
    // 0x8029EF4C: lui         $t8, 0x601
    ctx->r24 = S32(0X601 << 16);
    // 0x8029EF50: lui         $t1, 0x601
    ctx->r9 = S32(0X601 << 16);
    // 0x8029EF54: lui         $t4, 0x601
    ctx->r12 = S32(0X601 << 16);
    // 0x8029EF58: lui         $t2, 0x601
    ctx->r10 = S32(0X601 << 16);
    // 0x8029EF5C: lui         $t3, 0x600
    ctx->r11 = S32(0X600 << 16);
    // 0x8029EF60: lui         $t5, 0x600
    ctx->r13 = S32(0X600 << 16);
    // 0x8029EF64: lui         $t6, 0x600
    ctx->r14 = S32(0X600 << 16);
    // 0x8029EF68: lui         $t9, 0x601
    ctx->r25 = S32(0X601 << 16);
    // 0x8029EF6C: lui         $t7, 0x601
    ctx->r15 = S32(0X601 << 16);
    // 0x8029EF70: lui         $t0, 0x601
    ctx->r8 = S32(0X601 << 16);
    // 0x8029EF74: addiu       $t8, $t8, -0x7680
    ctx->r24 = ADD32(ctx->r24, -0X7680);
    // 0x8029EF78: addiu       $t1, $t1, -0x6C30
    ctx->r9 = ADD32(ctx->r9, -0X6C30);
    // 0x8029EF7C: addiu       $t4, $t4, -0x60C0
    ctx->r12 = ADD32(ctx->r12, -0X60C0);
    // 0x8029EF80: addiu       $t2, $t2, -0x5130
    ctx->r10 = ADD32(ctx->r10, -0X5130);
    // 0x8029EF84: addiu       $t3, $t3, 0x5CF8
    ctx->r11 = ADD32(ctx->r11, 0X5CF8);
    // 0x8029EF88: addiu       $t5, $t5, 0x6DE8
    ctx->r13 = ADD32(ctx->r13, 0X6DE8);
    // 0x8029EF8C: addiu       $t6, $t6, 0x7828
    ctx->r14 = ADD32(ctx->r14, 0X7828);
    // 0x8029EF90: addiu       $t9, $t9, -0x7DB8
    ctx->r25 = ADD32(ctx->r25, -0X7DB8);
    // 0x8029EF94: addiu       $t7, $t7, -0x7340
    ctx->r15 = ADD32(ctx->r15, -0X7340);
    // 0x8029EF98: addiu       $t0, $t0, -0x6920
    ctx->r8 = ADD32(ctx->r8, -0X6920);
    // 0x8029EF9C: sw          $t8, 0x124($v0)
    MEM_W(0X124, ctx->r2) = ctx->r24;
    // 0x8029EFA0: sw          $t1, 0x12C($v0)
    MEM_W(0X12C, ctx->r2) = ctx->r9;
    // 0x8029EFA4: sw          $t4, 0x134($v0)
    MEM_W(0X134, ctx->r2) = ctx->r12;
    // 0x8029EFA8: sw          $t2, 0x13C($v0)
    MEM_W(0X13C, ctx->r2) = ctx->r10;
    // 0x8029EFAC: sw          $t3, 0x144($v0)
    MEM_W(0X144, ctx->r2) = ctx->r11;
    // 0x8029EFB0: sw          $t5, 0x14C($v0)
    MEM_W(0X14C, ctx->r2) = ctx->r13;
    // 0x8029EFB4: sw          $t6, 0x154($v0)
    MEM_W(0X154, ctx->r2) = ctx->r14;
    // 0x8029EFB8: sw          $t9, 0x15C($v0)
    MEM_W(0X15C, ctx->r2) = ctx->r25;
    // 0x8029EFBC: sw          $t7, 0x164($v0)
    MEM_W(0X164, ctx->r2) = ctx->r15;
    // 0x8029EFC0: sw          $t0, 0x16C($v0)
    MEM_W(0X16C, ctx->r2) = ctx->r8;
    // 0x8029EFC4: lui         $t8, 0x601
    ctx->r24 = S32(0X601 << 16);
    // 0x8029EFC8: lui         $t1, 0x601
    ctx->r9 = S32(0X601 << 16);
    // 0x8029EFCC: lui         $t4, 0x600
    ctx->r12 = S32(0X600 << 16);
    // 0x8029EFD0: lui         $t2, 0xE00
    ctx->r10 = S32(0XE00 << 16);
    // 0x8029EFD4: lui         $t3, 0xE00
    ctx->r11 = S32(0XE00 << 16);
    // 0x8029EFD8: lui         $t5, 0xE00
    ctx->r13 = S32(0XE00 << 16);
    // 0x8029EFDC: lui         $t6, 0xE00
    ctx->r14 = S32(0XE00 << 16);
    // 0x8029EFE0: lui         $t9, 0xE00
    ctx->r25 = S32(0XE00 << 16);
    // 0x8029EFE4: lui         $t7, 0xE00
    ctx->r15 = S32(0XE00 << 16);
    // 0x8029EFE8: lui         $t0, 0xE00
    ctx->r8 = S32(0XE00 << 16);
    // 0x8029EFEC: addiu       $t8, $t8, -0x5B50
    ctx->r24 = ADD32(ctx->r24, -0X5B50);
    // 0x8029EFF0: addiu       $t1, $t1, -0x4CD8
    ctx->r9 = ADD32(ctx->r9, -0X4CD8);
    // 0x8029EFF4: addiu       $t4, $t4, 0x6058
    ctx->r12 = ADD32(ctx->r12, 0X6058);
    // 0x8029EFF8: addiu       $t2, $t2, 0x20F0
    ctx->r10 = ADD32(ctx->r10, 0X20F0);
    // 0x8029EFFC: addiu       $t3, $t3, 0x5988
    ctx->r11 = ADD32(ctx->r11, 0X5988);
    // 0x8029F000: addiu       $t5, $t5, 0x1CC0
    ctx->r13 = ADD32(ctx->r13, 0X1CC0);
    // 0x8029F004: addiu       $t6, $t6, 0x2F38
    ctx->r14 = ADD32(ctx->r14, 0X2F38);
    // 0x8029F008: addiu       $t9, $t9, 0x3438
    ctx->r25 = ADD32(ctx->r25, 0X3438);
    // 0x8029F00C: addiu       $t7, $t7, 0x3938
    ctx->r15 = ADD32(ctx->r15, 0X3938);
    // 0x8029F010: addiu       $t0, $t0, 0x4248
    ctx->r8 = ADD32(ctx->r8, 0X4248);
    // 0x8029F014: sw          $t8, 0x174($v0)
    MEM_W(0X174, ctx->r2) = ctx->r24;
    // 0x8029F018: sw          $t1, 0x17C($v0)
    MEM_W(0X17C, ctx->r2) = ctx->r9;
    // 0x8029F01C: sw          $t4, 0x18C($v0)
    MEM_W(0X18C, ctx->r2) = ctx->r12;
    // 0x8029F020: sw          $t2, 0x194($v0)
    MEM_W(0X194, ctx->r2) = ctx->r10;
    // 0x8029F024: sw          $t3, 0x19C($v0)
    MEM_W(0X19C, ctx->r2) = ctx->r11;
    // 0x8029F028: sw          $t5, 0x1A4($v0)
    MEM_W(0X1A4, ctx->r2) = ctx->r13;
    // 0x8029F02C: sw          $t6, 0x1AC($v0)
    MEM_W(0X1AC, ctx->r2) = ctx->r14;
    // 0x8029F030: sw          $t9, 0x1B4($v0)
    MEM_W(0X1B4, ctx->r2) = ctx->r25;
    // 0x8029F034: sw          $t7, 0x1BC($v0)
    MEM_W(0X1BC, ctx->r2) = ctx->r15;
    // 0x8029F038: sw          $t0, 0x1C4($v0)
    MEM_W(0X1C4, ctx->r2) = ctx->r8;
    // 0x8029F03C: lui         $t8, 0xE00
    ctx->r24 = S32(0XE00 << 16);
    // 0x8029F040: lui         $t1, 0xE00
    ctx->r9 = S32(0XE00 << 16);
    // 0x8029F044: lui         $t4, 0xE00
    ctx->r12 = S32(0XE00 << 16);
    // 0x8029F048: lui         $t2, 0xE00
    ctx->r10 = S32(0XE00 << 16);
    // 0x8029F04C: lui         $t3, 0xE00
    ctx->r11 = S32(0XE00 << 16);
    // 0x8029F050: lui         $t5, 0xE00
    ctx->r13 = S32(0XE00 << 16);
    // 0x8029F054: lui         $t6, 0xE00
    ctx->r14 = S32(0XE00 << 16);
    // 0x8029F058: lui         $t9, 0xE00
    ctx->r25 = S32(0XE00 << 16);
    // 0x8029F05C: lui         $t7, 0xE00
    ctx->r15 = S32(0XE00 << 16);
    // 0x8029F060: lui         $t0, 0xE00
    ctx->r8 = S32(0XE00 << 16);
    // 0x8029F064: addiu       $t8, $t8, 0x4A88
    ctx->r24 = ADD32(ctx->r24, 0X4A88);
    // 0x8029F068: addiu       $t1, $t1, 0x5558
    ctx->r9 = ADD32(ctx->r9, 0X5558);
    // 0x8029F06C: addiu       $t4, $t4, 0x1ED8
    ctx->r12 = ADD32(ctx->r12, 0X1ED8);
    // 0x8029F070: addiu       $t2, $t2, 0x3150
    ctx->r10 = ADD32(ctx->r10, 0X3150);
    // 0x8029F074: addiu       $t3, $t3, 0x3720
    ctx->r11 = ADD32(ctx->r11, 0X3720);
    // 0x8029F078: addiu       $t5, $t5, 0x3DC0
    ctx->r13 = ADD32(ctx->r13, 0X3DC0);
    // 0x8029F07C: addiu       $t6, $t6, 0x46D0
    ctx->r14 = ADD32(ctx->r14, 0X46D0);
    // 0x8029F080: addiu       $t9, $t9, 0x4CA0
    ctx->r25 = ADD32(ctx->r25, 0X4CA0);
    // 0x8029F084: addiu       $t7, $t7, 0x51A0
    ctx->r15 = ADD32(ctx->r15, 0X51A0);
    // 0x8029F088: addiu       $t0, $t0, 0x5770
    ctx->r8 = ADD32(ctx->r8, 0X5770);
    // 0x8029F08C: sw          $a1, 0xC4($v0)
    MEM_W(0XC4, ctx->r2) = ctx->r5;
    // 0x8029F090: sw          $t8, 0x1CC($v0)
    MEM_W(0X1CC, ctx->r2) = ctx->r24;
    // 0x8029F094: sw          $t1, 0x1DC($v0)
    MEM_W(0X1DC, ctx->r2) = ctx->r9;
    // 0x8029F098: sw          $t4, 0x1E4($v0)
    MEM_W(0X1E4, ctx->r2) = ctx->r12;
    // 0x8029F09C: sw          $t2, 0x1EC($v0)
    MEM_W(0X1EC, ctx->r2) = ctx->r10;
    // 0x8029F0A0: sw          $t3, 0x1F4($v0)
    MEM_W(0X1F4, ctx->r2) = ctx->r11;
    // 0x8029F0A4: sw          $t5, 0x1FC($v0)
    MEM_W(0X1FC, ctx->r2) = ctx->r13;
    // 0x8029F0A8: sw          $t6, 0x204($v0)
    MEM_W(0X204, ctx->r2) = ctx->r14;
    // 0x8029F0AC: sw          $t9, 0x20C($v0)
    MEM_W(0X20C, ctx->r2) = ctx->r25;
    // 0x8029F0B0: sw          $t7, 0x214($v0)
    MEM_W(0X214, ctx->r2) = ctx->r15;
    // 0x8029F0B4: jal         0x8029F758
    // 0x8029F0B8: sw          $t0, 0x21C($v0)
    MEM_W(0X21C, ctx->r2) = ctx->r8;
    func_8029F758(rdram, ctx);
        goto after_59;
    // 0x8029F0B8: sw          $t0, 0x21C($v0)
    MEM_W(0X21C, ctx->r2) = ctx->r8;
    after_59:
    // 0x8029F0BC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8029F0C0: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x8029F0C4: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x8029F0C8: jr          $ra
    // 0x8029F0CC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x8029F0CC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_8029F0D0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8029F0D0: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8029F0D4: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8029F0D8: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x8029F0DC: jal         0x8028BD18
    // 0x8029F0E0: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    func_8028BD18(rdram, ctx);
        goto after_0;
    // 0x8029F0E0: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    after_0:
    // 0x8029F0E4: jal         0x802A10D8
    // 0x8029F0E8: nop

    func_802A10D8(rdram, ctx);
        goto after_1;
    // 0x8029F0E8: nop

    after_1:
    // 0x8029F0EC: jal         0x802A1190
    // 0x8029F0F0: nop

    func_802A1190(rdram, ctx);
        goto after_2;
    // 0x8029F0F0: nop

    after_2:
    // 0x8029F0F4: lui         $v0, 0x802C
    ctx->r2 = S32(0X802C << 16);
    // 0x8029F0F8: addiu       $v0, $v0, 0x3B30
    ctx->r2 = ADD32(ctx->r2, 0X3B30);
    // 0x8029F0FC: lw          $a2, 0x0($v0)
    ctx->r6 = MEM_W(ctx->r2, 0X0);
    // 0x8029F100: lui         $a3, 0x802C
    ctx->r7 = S32(0X802C << 16);
    // 0x8029F104: addiu       $a3, $a3, 0x3B08
    ctx->r7 = ADD32(ctx->r7, 0X3B08);
    // 0x8029F108: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x8029F10C: jal         0x8028BB94
    // 0x8029F110: addiu       $a1, $zero, 0xD
    ctx->r5 = ADD32(0, 0XD);
    func_8028BB94(rdram, ctx);
        goto after_3;
    // 0x8029F110: addiu       $a1, $zero, 0xD
    ctx->r5 = ADD32(0, 0XD);
    after_3:
    // 0x8029F114: lui         $v0, 0x802C
    ctx->r2 = S32(0X802C << 16);
    // 0x8029F118: addiu       $v0, $v0, 0x3B30
    ctx->r2 = ADD32(ctx->r2, 0X3B30);
    // 0x8029F11C: lui         $t7, 0x600
    ctx->r15 = S32(0X600 << 16);
    // 0x8029F120: lui         $t8, 0x600
    ctx->r24 = S32(0X600 << 16);
    // 0x8029F124: lw          $t6, 0x0($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X0);
    // 0x8029F128: addiu       $t8, $t8, 0x0
    ctx->r24 = ADD32(ctx->r24, 0X0);
    // 0x8029F12C: addiu       $t7, $t7, 0x800
    ctx->r15 = ADD32(ctx->r15, 0X800);
    // 0x8029F130: subu        $t9, $t7, $t8
    ctx->r25 = SUB32(ctx->r15, ctx->r24);
    // 0x8029F134: lui         $a2, 0x802C
    ctx->r6 = S32(0X802C << 16);
    // 0x8029F138: addu        $a1, $t6, $t9
    ctx->r5 = ADD32(ctx->r14, ctx->r25);
    // 0x8029F13C: sw          $a1, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r5;
    // 0x8029F140: addiu       $a2, $a2, 0x3B10
    ctx->r6 = ADD32(ctx->r6, 0X3B10);
    // 0x8029F144: jal         0x8028BB68
    // 0x8029F148: addiu       $a0, $zero, 0x1A
    ctx->r4 = ADD32(0, 0X1A);
    func_8028BB68(rdram, ctx);
        goto after_4;
    // 0x8029F148: addiu       $a0, $zero, 0x1A
    ctx->r4 = ADD32(0, 0X1A);
    after_4:
    // 0x8029F14C: lui         $v0, 0x802C
    ctx->r2 = S32(0X802C << 16);
    // 0x8029F150: addiu       $v0, $v0, 0x3B30
    ctx->r2 = ADD32(ctx->r2, 0X3B30);
    // 0x8029F154: lui         $t2, 0x601
    ctx->r10 = S32(0X601 << 16);
    // 0x8029F158: lui         $t3, 0x600
    ctx->r11 = S32(0X600 << 16);
    // 0x8029F15C: lw          $t1, 0x0($v0)
    ctx->r9 = MEM_W(ctx->r2, 0X0);
    // 0x8029F160: addiu       $t3, $t3, 0x0
    ctx->r11 = ADD32(ctx->r11, 0X0);
    // 0x8029F164: addiu       $t2, $t2, 0x2900
    ctx->r10 = ADD32(ctx->r10, 0X2900);
    // 0x8029F168: subu        $t4, $t2, $t3
    ctx->r12 = SUB32(ctx->r10, ctx->r11);
    // 0x8029F16C: lui         $a2, 0x802C
    ctx->r6 = S32(0X802C << 16);
    // 0x8029F170: addu        $a1, $t1, $t4
    ctx->r5 = ADD32(ctx->r9, ctx->r12);
    // 0x8029F174: sw          $a1, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r5;
    // 0x8029F178: addiu       $a2, $a2, 0x3B18
    ctx->r6 = ADD32(ctx->r6, 0X3B18);
    // 0x8029F17C: jal         0x8028BB68
    // 0x8029F180: addiu       $a0, $zero, 0x20
    ctx->r4 = ADD32(0, 0X20);
    func_8028BB68(rdram, ctx);
        goto after_5;
    // 0x8029F180: addiu       $a0, $zero, 0x20
    ctx->r4 = ADD32(0, 0X20);
    after_5:
    // 0x8029F184: lui         $v0, 0x802C
    ctx->r2 = S32(0X802C << 16);
    // 0x8029F188: addiu       $v0, $v0, 0x3B30
    ctx->r2 = ADD32(ctx->r2, 0X3B30);
    // 0x8029F18C: lui         $t8, 0x600
    ctx->r24 = S32(0X600 << 16);
    // 0x8029F190: lui         $t6, 0x600
    ctx->r14 = S32(0X600 << 16);
    // 0x8029F194: lw          $t7, 0x0($v0)
    ctx->r15 = MEM_W(ctx->r2, 0X0);
    // 0x8029F198: lui         $s0, 0xF
    ctx->r16 = S32(0XF << 16);
    // 0x8029F19C: addiu       $t6, $t6, 0x0
    ctx->r14 = ADD32(ctx->r14, 0X0);
    // 0x8029F1A0: addiu       $t8, $t8, 0x1B00
    ctx->r24 = ADD32(ctx->r24, 0X1B00);
    // 0x8029F1A4: lui         $t2, 0x600
    ctx->r10 = S32(0X600 << 16);
    // 0x8029F1A8: ori         $s0, $s0, 0xFFFF
    ctx->r16 = ctx->r16 | 0XFFFF;
    // 0x8029F1AC: lui         $s1, 0x803A
    ctx->r17 = S32(0X803A << 16);
    // 0x8029F1B0: subu        $t9, $t8, $t6
    ctx->r25 = SUB32(ctx->r24, ctx->r14);
    // 0x8029F1B4: addiu       $t2, $t2, 0x1CC0
    ctx->r10 = ADD32(ctx->r10, 0X1CC0);
    // 0x8029F1B8: ori         $s1, $s1, 0xDA00
    ctx->r17 = ctx->r17 | 0XDA00;
    // 0x8029F1BC: and         $t3, $t2, $s0
    ctx->r11 = ctx->r10 & ctx->r16;
    // 0x8029F1C0: addu        $t0, $t7, $t9
    ctx->r8 = ADD32(ctx->r15, ctx->r25);
    // 0x8029F1C4: sw          $t0, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r8;
    // 0x8029F1C8: jal         0x8028B950
    // 0x8029F1CC: addu        $a0, $t3, $s1
    ctx->r4 = ADD32(ctx->r11, ctx->r17);
    func_8028B950(rdram, ctx);
        goto after_6;
    // 0x8029F1CC: addu        $a0, $t3, $s1
    ctx->r4 = ADD32(ctx->r11, ctx->r17);
    after_6:
    // 0x8029F1D0: lui         $t1, 0x600
    ctx->r9 = S32(0X600 << 16);
    // 0x8029F1D4: addiu       $t1, $t1, 0x26C0
    ctx->r9 = ADD32(ctx->r9, 0X26C0);
    // 0x8029F1D8: and         $t4, $t1, $s0
    ctx->r12 = ctx->r9 & ctx->r16;
    // 0x8029F1DC: jal         0x8028B950
    // 0x8029F1E0: addu        $a0, $t4, $s1
    ctx->r4 = ADD32(ctx->r12, ctx->r17);
    func_8028B950(rdram, ctx);
        goto after_7;
    // 0x8029F1E0: addu        $a0, $t4, $s1
    ctx->r4 = ADD32(ctx->r12, ctx->r17);
    after_7:
    // 0x8029F1E4: lui         $t5, 0x600
    ctx->r13 = S32(0X600 << 16);
    // 0x8029F1E8: addiu       $t5, $t5, 0x2C60
    ctx->r13 = ADD32(ctx->r13, 0X2C60);
    // 0x8029F1EC: and         $t8, $t5, $s0
    ctx->r24 = ctx->r13 & ctx->r16;
    // 0x8029F1F0: jal         0x8028B950
    // 0x8029F1F4: addu        $a0, $t8, $s1
    ctx->r4 = ADD32(ctx->r24, ctx->r17);
    func_8028B950(rdram, ctx);
        goto after_8;
    // 0x8029F1F4: addu        $a0, $t8, $s1
    ctx->r4 = ADD32(ctx->r24, ctx->r17);
    after_8:
    // 0x8029F1F8: lui         $t6, 0x600
    ctx->r14 = S32(0X600 << 16);
    // 0x8029F1FC: addiu       $t6, $t6, 0x3070
    ctx->r14 = ADD32(ctx->r14, 0X3070);
    // 0x8029F200: and         $t7, $t6, $s0
    ctx->r15 = ctx->r14 & ctx->r16;
    // 0x8029F204: jal         0x8028B950
    // 0x8029F208: addu        $a0, $t7, $s1
    ctx->r4 = ADD32(ctx->r15, ctx->r17);
    func_8028B950(rdram, ctx);
        goto after_9;
    // 0x8029F208: addu        $a0, $t7, $s1
    ctx->r4 = ADD32(ctx->r15, ctx->r17);
    after_9:
    // 0x8029F20C: lui         $t9, 0x600
    ctx->r25 = S32(0X600 << 16);
    // 0x8029F210: addiu       $t9, $t9, 0x3480
    ctx->r25 = ADD32(ctx->r25, 0X3480);
    // 0x8029F214: and         $t0, $t9, $s0
    ctx->r8 = ctx->r25 & ctx->r16;
    // 0x8029F218: jal         0x8028B950
    // 0x8029F21C: addu        $a0, $t0, $s1
    ctx->r4 = ADD32(ctx->r8, ctx->r17);
    func_8028B950(rdram, ctx);
        goto after_10;
    // 0x8029F21C: addu        $a0, $t0, $s1
    ctx->r4 = ADD32(ctx->r8, ctx->r17);
    after_10:
    // 0x8029F220: lui         $t2, 0x600
    ctx->r10 = S32(0X600 << 16);
    // 0x8029F224: addiu       $t2, $t2, 0x3890
    ctx->r10 = ADD32(ctx->r10, 0X3890);
    // 0x8029F228: and         $t3, $t2, $s0
    ctx->r11 = ctx->r10 & ctx->r16;
    // 0x8029F22C: jal         0x8028B950
    // 0x8029F230: addu        $a0, $t3, $s1
    ctx->r4 = ADD32(ctx->r11, ctx->r17);
    func_8028B950(rdram, ctx);
        goto after_11;
    // 0x8029F230: addu        $a0, $t3, $s1
    ctx->r4 = ADD32(ctx->r11, ctx->r17);
    after_11:
    // 0x8029F234: lui         $t1, 0x600
    ctx->r9 = S32(0X600 << 16);
    // 0x8029F238: addiu       $t1, $t1, 0x3CA0
    ctx->r9 = ADD32(ctx->r9, 0X3CA0);
    // 0x8029F23C: and         $t4, $t1, $s0
    ctx->r12 = ctx->r9 & ctx->r16;
    // 0x8029F240: jal         0x8028B950
    // 0x8029F244: addu        $a0, $t4, $s1
    ctx->r4 = ADD32(ctx->r12, ctx->r17);
    func_8028B950(rdram, ctx);
        goto after_12;
    // 0x8029F244: addu        $a0, $t4, $s1
    ctx->r4 = ADD32(ctx->r12, ctx->r17);
    after_12:
    // 0x8029F248: lui         $t5, 0x600
    ctx->r13 = S32(0X600 << 16);
    // 0x8029F24C: addiu       $t5, $t5, 0x4240
    ctx->r13 = ADD32(ctx->r13, 0X4240);
    // 0x8029F250: and         $t8, $t5, $s0
    ctx->r24 = ctx->r13 & ctx->r16;
    // 0x8029F254: jal         0x8028B950
    // 0x8029F258: addu        $a0, $t8, $s1
    ctx->r4 = ADD32(ctx->r24, ctx->r17);
    func_8028B950(rdram, ctx);
        goto after_13;
    // 0x8029F258: addu        $a0, $t8, $s1
    ctx->r4 = ADD32(ctx->r24, ctx->r17);
    after_13:
    // 0x8029F25C: lui         $t6, 0x600
    ctx->r14 = S32(0X600 << 16);
    // 0x8029F260: addiu       $t6, $t6, 0x1E00
    ctx->r14 = ADD32(ctx->r14, 0X1E00);
    // 0x8029F264: and         $t7, $t6, $s0
    ctx->r15 = ctx->r14 & ctx->r16;
    // 0x8029F268: jal         0x8028B950
    // 0x8029F26C: addu        $a0, $t7, $s1
    ctx->r4 = ADD32(ctx->r15, ctx->r17);
    func_8028B950(rdram, ctx);
        goto after_14;
    // 0x8029F26C: addu        $a0, $t7, $s1
    ctx->r4 = ADD32(ctx->r15, ctx->r17);
    after_14:
    // 0x8029F270: lui         $t9, 0x600
    ctx->r25 = S32(0X600 << 16);
    // 0x8029F274: addiu       $t9, $t9, 0x27F0
    ctx->r25 = ADD32(ctx->r25, 0X27F0);
    // 0x8029F278: and         $t0, $t9, $s0
    ctx->r8 = ctx->r25 & ctx->r16;
    // 0x8029F27C: jal         0x8028B950
    // 0x8029F280: addu        $a0, $t0, $s1
    ctx->r4 = ADD32(ctx->r8, ctx->r17);
    func_8028B950(rdram, ctx);
        goto after_15;
    // 0x8029F280: addu        $a0, $t0, $s1
    ctx->r4 = ADD32(ctx->r8, ctx->r17);
    after_15:
    // 0x8029F284: lui         $t2, 0x600
    ctx->r10 = S32(0X600 << 16);
    // 0x8029F288: addiu       $t2, $t2, 0x2D90
    ctx->r10 = ADD32(ctx->r10, 0X2D90);
    // 0x8029F28C: and         $t3, $t2, $s0
    ctx->r11 = ctx->r10 & ctx->r16;
    // 0x8029F290: jal         0x8028B950
    // 0x8029F294: addu        $a0, $t3, $s1
    ctx->r4 = ADD32(ctx->r11, ctx->r17);
    func_8028B950(rdram, ctx);
        goto after_16;
    // 0x8029F294: addu        $a0, $t3, $s1
    ctx->r4 = ADD32(ctx->r11, ctx->r17);
    after_16:
    // 0x8029F298: lui         $t1, 0x600
    ctx->r9 = S32(0X600 << 16);
    // 0x8029F29C: addiu       $t1, $t1, 0x31A0
    ctx->r9 = ADD32(ctx->r9, 0X31A0);
    // 0x8029F2A0: and         $t4, $t1, $s0
    ctx->r12 = ctx->r9 & ctx->r16;
    // 0x8029F2A4: jal         0x8028B950
    // 0x8029F2A8: addu        $a0, $t4, $s1
    ctx->r4 = ADD32(ctx->r12, ctx->r17);
    func_8028B950(rdram, ctx);
        goto after_17;
    // 0x8029F2A8: addu        $a0, $t4, $s1
    ctx->r4 = ADD32(ctx->r12, ctx->r17);
    after_17:
    // 0x8029F2AC: lui         $t5, 0x600
    ctx->r13 = S32(0X600 << 16);
    // 0x8029F2B0: addiu       $t5, $t5, 0x35B0
    ctx->r13 = ADD32(ctx->r13, 0X35B0);
    // 0x8029F2B4: and         $t8, $t5, $s0
    ctx->r24 = ctx->r13 & ctx->r16;
    // 0x8029F2B8: jal         0x8028B950
    // 0x8029F2BC: addu        $a0, $t8, $s1
    ctx->r4 = ADD32(ctx->r24, ctx->r17);
    func_8028B950(rdram, ctx);
        goto after_18;
    // 0x8029F2BC: addu        $a0, $t8, $s1
    ctx->r4 = ADD32(ctx->r24, ctx->r17);
    after_18:
    // 0x8029F2C0: lui         $t6, 0x600
    ctx->r14 = S32(0X600 << 16);
    // 0x8029F2C4: addiu       $t6, $t6, 0x39C0
    ctx->r14 = ADD32(ctx->r14, 0X39C0);
    // 0x8029F2C8: and         $t7, $t6, $s0
    ctx->r15 = ctx->r14 & ctx->r16;
    // 0x8029F2CC: jal         0x8028B950
    // 0x8029F2D0: addu        $a0, $t7, $s1
    ctx->r4 = ADD32(ctx->r15, ctx->r17);
    func_8028B950(rdram, ctx);
        goto after_19;
    // 0x8029F2D0: addu        $a0, $t7, $s1
    ctx->r4 = ADD32(ctx->r15, ctx->r17);
    after_19:
    // 0x8029F2D4: lui         $t9, 0x600
    ctx->r25 = S32(0X600 << 16);
    // 0x8029F2D8: addiu       $t9, $t9, 0x3DD0
    ctx->r25 = ADD32(ctx->r25, 0X3DD0);
    // 0x8029F2DC: and         $t0, $t9, $s0
    ctx->r8 = ctx->r25 & ctx->r16;
    // 0x8029F2E0: jal         0x8028B950
    // 0x8029F2E4: addu        $a0, $t0, $s1
    ctx->r4 = ADD32(ctx->r8, ctx->r17);
    func_8028B950(rdram, ctx);
        goto after_20;
    // 0x8029F2E4: addu        $a0, $t0, $s1
    ctx->r4 = ADD32(ctx->r8, ctx->r17);
    after_20:
    // 0x8029F2E8: lui         $t2, 0x600
    ctx->r10 = S32(0X600 << 16);
    // 0x8029F2EC: addiu       $t2, $t2, 0x4380
    ctx->r10 = ADD32(ctx->r10, 0X4380);
    // 0x8029F2F0: and         $t3, $t2, $s0
    ctx->r11 = ctx->r10 & ctx->r16;
    // 0x8029F2F4: jal         0x8028B950
    // 0x8029F2F8: addu        $a0, $t3, $s1
    ctx->r4 = ADD32(ctx->r11, ctx->r17);
    func_8028B950(rdram, ctx);
        goto after_21;
    // 0x8029F2F8: addu        $a0, $t3, $s1
    ctx->r4 = ADD32(ctx->r11, ctx->r17);
    after_21:
    // 0x8029F2FC: lui         $t1, 0x600
    ctx->r9 = S32(0X600 << 16);
    // 0x8029F300: addiu       $t1, $t1, 0x29F8
    ctx->r9 = ADD32(ctx->r9, 0X29F8);
    // 0x8029F304: and         $t4, $t1, $s0
    ctx->r12 = ctx->r9 & ctx->r16;
    // 0x8029F308: jal         0x8028B950
    // 0x8029F30C: addu        $a0, $t4, $s1
    ctx->r4 = ADD32(ctx->r12, ctx->r17);
    func_8028B950(rdram, ctx);
        goto after_22;
    // 0x8029F30C: addu        $a0, $t4, $s1
    ctx->r4 = ADD32(ctx->r12, ctx->r17);
    after_22:
    // 0x8029F310: lui         $t5, 0x600
    ctx->r13 = S32(0X600 << 16);
    // 0x8029F314: addiu       $t5, $t5, 0x2ED0
    ctx->r13 = ADD32(ctx->r13, 0X2ED0);
    // 0x8029F318: and         $t8, $t5, $s0
    ctx->r24 = ctx->r13 & ctx->r16;
    // 0x8029F31C: jal         0x8028B950
    // 0x8029F320: addu        $a0, $t8, $s1
    ctx->r4 = ADD32(ctx->r24, ctx->r17);
    func_8028B950(rdram, ctx);
        goto after_23;
    // 0x8029F320: addu        $a0, $t8, $s1
    ctx->r4 = ADD32(ctx->r24, ctx->r17);
    after_23:
    // 0x8029F324: lui         $t6, 0x600
    ctx->r14 = S32(0X600 << 16);
    // 0x8029F328: addiu       $t6, $t6, 0x32E0
    ctx->r14 = ADD32(ctx->r14, 0X32E0);
    // 0x8029F32C: and         $t7, $t6, $s0
    ctx->r15 = ctx->r14 & ctx->r16;
    // 0x8029F330: jal         0x8028B950
    // 0x8029F334: addu        $a0, $t7, $s1
    ctx->r4 = ADD32(ctx->r15, ctx->r17);
    func_8028B950(rdram, ctx);
        goto after_24;
    // 0x8029F334: addu        $a0, $t7, $s1
    ctx->r4 = ADD32(ctx->r15, ctx->r17);
    after_24:
    // 0x8029F338: lui         $t9, 0x600
    ctx->r25 = S32(0X600 << 16);
    // 0x8029F33C: addiu       $t9, $t9, 0x36F0
    ctx->r25 = ADD32(ctx->r25, 0X36F0);
    // 0x8029F340: and         $t0, $t9, $s0
    ctx->r8 = ctx->r25 & ctx->r16;
    // 0x8029F344: jal         0x8028B950
    // 0x8029F348: addu        $a0, $t0, $s1
    ctx->r4 = ADD32(ctx->r8, ctx->r17);
    func_8028B950(rdram, ctx);
        goto after_25;
    // 0x8029F348: addu        $a0, $t0, $s1
    ctx->r4 = ADD32(ctx->r8, ctx->r17);
    after_25:
    // 0x8029F34C: lui         $t2, 0x600
    ctx->r10 = S32(0X600 << 16);
    // 0x8029F350: addiu       $t2, $t2, 0x3B00
    ctx->r10 = ADD32(ctx->r10, 0X3B00);
    // 0x8029F354: and         $t3, $t2, $s0
    ctx->r11 = ctx->r10 & ctx->r16;
    // 0x8029F358: jal         0x8028B950
    // 0x8029F35C: addu        $a0, $t3, $s1
    ctx->r4 = ADD32(ctx->r11, ctx->r17);
    func_8028B950(rdram, ctx);
        goto after_26;
    // 0x8029F35C: addu        $a0, $t3, $s1
    ctx->r4 = ADD32(ctx->r11, ctx->r17);
    after_26:
    // 0x8029F360: lui         $t1, 0x600
    ctx->r9 = S32(0X600 << 16);
    // 0x8029F364: addiu       $t1, $t1, 0x3FD8
    ctx->r9 = ADD32(ctx->r9, 0X3FD8);
    // 0x8029F368: and         $t4, $t1, $s0
    ctx->r12 = ctx->r9 & ctx->r16;
    // 0x8029F36C: jal         0x8028B950
    // 0x8029F370: addu        $a0, $t4, $s1
    ctx->r4 = ADD32(ctx->r12, ctx->r17);
    func_8028B950(rdram, ctx);
        goto after_27;
    // 0x8029F370: addu        $a0, $t4, $s1
    ctx->r4 = ADD32(ctx->r12, ctx->r17);
    after_27:
    // 0x8029F374: jal         0x8029F548
    // 0x8029F378: nop

    func_8029F548(rdram, ctx);
        goto after_28;
    // 0x8029F378: nop

    after_28:
    // 0x8029F37C: jal         0x8029F7F4
    // 0x8029F380: nop

    func_8029F7F4(rdram, ctx);
        goto after_29;
    // 0x8029F380: nop

    after_29:
    // 0x8029F384: jal         0x802A0D44
    // 0x8029F388: nop

    func_802A0D44(rdram, ctx);
        goto after_30;
    // 0x8029F388: nop

    after_30:
    // 0x8029F38C: lui         $v1, 0x8011
    ctx->r3 = S32(0X8011 << 16);
    // 0x8029F390: addiu       $v1, $v1, -0x2F98
    ctx->r3 = ADD32(ctx->r3, -0X2F98);
    // 0x8029F394: lw          $t5, 0x0($v1)
    ctx->r13 = MEM_W(ctx->r3, 0X0);
    // 0x8029F398: lui         $a0, 0x2
    ctx->r4 = S32(0X2 << 16);
    // 0x8029F39C: ori         $a0, $a0, 0x8000
    ctx->r4 = ctx->r4 | 0X8000;
    // 0x8029F3A0: lui         $a1, 0x600
    ctx->r5 = S32(0X600 << 16);
    // 0x8029F3A4: addiu       $a1, $a1, 0x1E00
    ctx->r5 = ADD32(ctx->r5, 0X1E00);
    // 0x8029F3A8: addu        $t8, $t5, $a0
    ctx->r24 = ADD32(ctx->r13, ctx->r4);
    // 0x8029F3AC: sw          $a1, 0x1398($t8)
    MEM_W(0X1398, ctx->r24) = ctx->r5;
    // 0x8029F3B0: lw          $t7, 0x0($v1)
    ctx->r15 = MEM_W(ctx->r3, 0X0);
    // 0x8029F3B4: addiu       $t6, $zero, 0x7
    ctx->r14 = ADD32(0, 0X7);
    // 0x8029F3B8: addu        $t9, $t7, $a0
    ctx->r25 = ADD32(ctx->r15, ctx->r4);
    // 0x8029F3BC: lui         $v0, 0x802C
    ctx->r2 = S32(0X802C << 16);
    // 0x8029F3C0: sw          $t6, 0x139C($t9)
    MEM_W(0X139C, ctx->r25) = ctx->r14;
    // 0x8029F3C4: addiu       $v0, $v0, 0x3600
    ctx->r2 = ADD32(ctx->r2, 0X3600);
    // 0x8029F3C8: lui         $t0, 0x600
    ctx->r8 = S32(0X600 << 16);
    // 0x8029F3CC: lui         $t2, 0x600
    ctx->r10 = S32(0X600 << 16);
    // 0x8029F3D0: lui         $t3, 0x600
    ctx->r11 = S32(0X600 << 16);
    // 0x8029F3D4: lui         $t1, 0x600
    ctx->r9 = S32(0X600 << 16);
    // 0x8029F3D8: lui         $t4, 0x600
    ctx->r12 = S32(0X600 << 16);
    // 0x8029F3DC: lui         $t5, 0x600
    ctx->r13 = S32(0X600 << 16);
    // 0x8029F3E0: lui         $t8, 0x600
    ctx->r24 = S32(0X600 << 16);
    // 0x8029F3E4: lui         $t7, 0x600
    ctx->r15 = S32(0X600 << 16);
    // 0x8029F3E8: addiu       $t0, $t0, 0x1CC0
    ctx->r8 = ADD32(ctx->r8, 0X1CC0);
    // 0x8029F3EC: addiu       $t2, $t2, 0x26C0
    ctx->r10 = ADD32(ctx->r10, 0X26C0);
    // 0x8029F3F0: addiu       $t3, $t3, 0x2C60
    ctx->r11 = ADD32(ctx->r11, 0X2C60);
    // 0x8029F3F4: addiu       $t1, $t1, 0x3070
    ctx->r9 = ADD32(ctx->r9, 0X3070);
    // 0x8029F3F8: addiu       $t4, $t4, 0x3480
    ctx->r12 = ADD32(ctx->r12, 0X3480);
    // 0x8029F3FC: addiu       $t5, $t5, 0x3890
    ctx->r13 = ADD32(ctx->r13, 0X3890);
    // 0x8029F400: addiu       $t8, $t8, 0x3CA0
    ctx->r24 = ADD32(ctx->r24, 0X3CA0);
    // 0x8029F404: addiu       $t7, $t7, 0x4240
    ctx->r15 = ADD32(ctx->r15, 0X4240);
    // 0x8029F408: sw          $t0, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r8;
    // 0x8029F40C: sw          $t2, 0xC($v0)
    MEM_W(0XC, ctx->r2) = ctx->r10;
    // 0x8029F410: sw          $t3, 0x14($v0)
    MEM_W(0X14, ctx->r2) = ctx->r11;
    // 0x8029F414: sw          $t1, 0x1C($v0)
    MEM_W(0X1C, ctx->r2) = ctx->r9;
    // 0x8029F418: sw          $t4, 0x24($v0)
    MEM_W(0X24, ctx->r2) = ctx->r12;
    // 0x8029F41C: sw          $t5, 0x2C($v0)
    MEM_W(0X2C, ctx->r2) = ctx->r13;
    // 0x8029F420: sw          $t8, 0x34($v0)
    MEM_W(0X34, ctx->r2) = ctx->r24;
    // 0x8029F424: sw          $t7, 0x3C($v0)
    MEM_W(0X3C, ctx->r2) = ctx->r15;
    // 0x8029F428: lui         $t6, 0x8009
    ctx->r14 = S32(0X8009 << 16);
    // 0x8029F42C: lw          $t6, 0x68E0($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X68E0);
    // 0x8029F430: lui         $t7, 0x600
    ctx->r15 = S32(0X600 << 16);
    // 0x8029F434: beq         $t6, $zero, L_8029F49C
    if (ctx->r14 == 0) {
        // 0x8029F438: addiu       $t7, $t7, 0x27F0
        ctx->r15 = ADD32(ctx->r15, 0X27F0);
            goto L_8029F49C;
    }
    // 0x8029F438: addiu       $t7, $t7, 0x27F0
    ctx->r15 = ADD32(ctx->r15, 0X27F0);
    // 0x8029F43C: lui         $t9, 0xA00
    ctx->r25 = S32(0XA00 << 16);
    // 0x8029F440: lui         $t0, 0xA00
    ctx->r8 = S32(0XA00 << 16);
    // 0x8029F444: lui         $t2, 0xA00
    ctx->r10 = S32(0XA00 << 16);
    // 0x8029F448: lui         $t3, 0xA00
    ctx->r11 = S32(0XA00 << 16);
    // 0x8029F44C: lui         $t1, 0xA00
    ctx->r9 = S32(0XA00 << 16);
    // 0x8029F450: lui         $t4, 0xA00
    ctx->r12 = S32(0XA00 << 16);
    // 0x8029F454: lui         $t5, 0xA00
    ctx->r13 = S32(0XA00 << 16);
    // 0x8029F458: lui         $t8, 0xA00
    ctx->r24 = S32(0XA00 << 16);
    // 0x8029F45C: addiu       $t9, $t9, 0x4660
    ctx->r25 = ADD32(ctx->r25, 0X4660);
    // 0x8029F460: addiu       $t0, $t0, 0x4758
    ctx->r8 = ADD32(ctx->r8, 0X4758);
    // 0x8029F464: addiu       $t2, $t2, 0x4850
    ctx->r10 = ADD32(ctx->r10, 0X4850);
    // 0x8029F468: addiu       $t3, $t3, 0x4948
    ctx->r11 = ADD32(ctx->r11, 0X4948);
    // 0x8029F46C: addiu       $t1, $t1, 0x4A40
    ctx->r9 = ADD32(ctx->r9, 0X4A40);
    // 0x8029F470: addiu       $t4, $t4, 0x4B38
    ctx->r12 = ADD32(ctx->r12, 0X4B38);
    // 0x8029F474: addiu       $t5, $t5, 0x4C30
    ctx->r13 = ADD32(ctx->r13, 0X4C30);
    // 0x8029F478: addiu       $t8, $t8, 0x4D28
    ctx->r24 = ADD32(ctx->r24, 0X4D28);
    // 0x8029F47C: sw          $t9, 0x84($v0)
    MEM_W(0X84, ctx->r2) = ctx->r25;
    // 0x8029F480: sw          $t0, 0x8C($v0)
    MEM_W(0X8C, ctx->r2) = ctx->r8;
    // 0x8029F484: sw          $t2, 0x94($v0)
    MEM_W(0X94, ctx->r2) = ctx->r10;
    // 0x8029F488: sw          $t3, 0x9C($v0)
    MEM_W(0X9C, ctx->r2) = ctx->r11;
    // 0x8029F48C: sw          $t1, 0xA4($v0)
    MEM_W(0XA4, ctx->r2) = ctx->r9;
    // 0x8029F490: sw          $t4, 0xAC($v0)
    MEM_W(0XAC, ctx->r2) = ctx->r12;
    // 0x8029F494: sw          $t5, 0xB4($v0)
    MEM_W(0XB4, ctx->r2) = ctx->r13;
    // 0x8029F498: sw          $t8, 0xBC($v0)
    MEM_W(0XBC, ctx->r2) = ctx->r24;
L_8029F49C:
    // 0x8029F49C: lui         $t6, 0x600
    ctx->r14 = S32(0X600 << 16);
    // 0x8029F4A0: lui         $t9, 0x600
    ctx->r25 = S32(0X600 << 16);
    // 0x8029F4A4: addiu       $t6, $t6, 0x2D90
    ctx->r14 = ADD32(ctx->r14, 0X2D90);
    // 0x8029F4A8: addiu       $t9, $t9, 0x31A0
    ctx->r25 = ADD32(ctx->r25, 0X31A0);
    // 0x8029F4AC: sw          $t7, 0xCC($v0)
    MEM_W(0XCC, ctx->r2) = ctx->r15;
    // 0x8029F4B0: sw          $t6, 0xD4($v0)
    MEM_W(0XD4, ctx->r2) = ctx->r14;
    // 0x8029F4B4: sw          $t9, 0xDC($v0)
    MEM_W(0XDC, ctx->r2) = ctx->r25;
    // 0x8029F4B8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8029F4BC: lui         $t0, 0x600
    ctx->r8 = S32(0X600 << 16);
    // 0x8029F4C0: lui         $t2, 0x600
    ctx->r10 = S32(0X600 << 16);
    // 0x8029F4C4: lui         $t3, 0x600
    ctx->r11 = S32(0X600 << 16);
    // 0x8029F4C8: lui         $t1, 0x600
    ctx->r9 = S32(0X600 << 16);
    // 0x8029F4CC: lui         $t4, 0x600
    ctx->r12 = S32(0X600 << 16);
    // 0x8029F4D0: lui         $t5, 0x600
    ctx->r13 = S32(0X600 << 16);
    // 0x8029F4D4: lui         $t8, 0x600
    ctx->r24 = S32(0X600 << 16);
    // 0x8029F4D8: lui         $t7, 0x600
    ctx->r15 = S32(0X600 << 16);
    // 0x8029F4DC: lui         $t6, 0x600
    ctx->r14 = S32(0X600 << 16);
    // 0x8029F4E0: lui         $t9, 0x600
    ctx->r25 = S32(0X600 << 16);
    // 0x8029F4E4: addiu       $t0, $t0, 0x35B0
    ctx->r8 = ADD32(ctx->r8, 0X35B0);
    // 0x8029F4E8: addiu       $t2, $t2, 0x39C0
    ctx->r10 = ADD32(ctx->r10, 0X39C0);
    // 0x8029F4EC: addiu       $t3, $t3, 0x3DD0
    ctx->r11 = ADD32(ctx->r11, 0X3DD0);
    // 0x8029F4F0: addiu       $t1, $t1, 0x29F8
    ctx->r9 = ADD32(ctx->r9, 0X29F8);
    // 0x8029F4F4: addiu       $t4, $t4, 0x2ED0
    ctx->r12 = ADD32(ctx->r12, 0X2ED0);
    // 0x8029F4F8: addiu       $t5, $t5, 0x32E0
    ctx->r13 = ADD32(ctx->r13, 0X32E0);
    // 0x8029F4FC: addiu       $t8, $t8, 0x36F0
    ctx->r24 = ADD32(ctx->r24, 0X36F0);
    // 0x8029F500: addiu       $t7, $t7, 0x3B00
    ctx->r15 = ADD32(ctx->r15, 0X3B00);
    // 0x8029F504: addiu       $t6, $t6, 0x3FD8
    ctx->r14 = ADD32(ctx->r14, 0X3FD8);
    // 0x8029F508: addiu       $t9, $t9, 0x4380
    ctx->r25 = ADD32(ctx->r25, 0X4380);
    // 0x8029F50C: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x8029F510: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x8029F514: sw          $t0, 0xE4($v0)
    MEM_W(0XE4, ctx->r2) = ctx->r8;
    // 0x8029F518: sw          $t2, 0xEC($v0)
    MEM_W(0XEC, ctx->r2) = ctx->r10;
    // 0x8029F51C: sw          $t3, 0xF4($v0)
    MEM_W(0XF4, ctx->r2) = ctx->r11;
    // 0x8029F520: sw          $t1, 0x10C($v0)
    MEM_W(0X10C, ctx->r2) = ctx->r9;
    // 0x8029F524: sw          $t4, 0x114($v0)
    MEM_W(0X114, ctx->r2) = ctx->r12;
    // 0x8029F528: sw          $t5, 0x11C($v0)
    MEM_W(0X11C, ctx->r2) = ctx->r13;
    // 0x8029F52C: sw          $t8, 0x124($v0)
    MEM_W(0X124, ctx->r2) = ctx->r24;
    // 0x8029F530: sw          $t7, 0x12C($v0)
    MEM_W(0X12C, ctx->r2) = ctx->r15;
    // 0x8029F534: sw          $t6, 0x134($v0)
    MEM_W(0X134, ctx->r2) = ctx->r14;
    // 0x8029F538: sw          $a1, 0x144($v0)
    MEM_W(0X144, ctx->r2) = ctx->r5;
    // 0x8029F53C: sw          $t9, 0x14C($v0)
    MEM_W(0X14C, ctx->r2) = ctx->r25;
    // 0x8029F540: jr          $ra
    // 0x8029F544: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x8029F544: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_8029F548(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8029F548: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8029F54C: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x8029F550: lui         $s0, 0xF
    ctx->r16 = S32(0XF << 16);
    // 0x8029F554: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x8029F558: lui         $t6, 0xA01
    ctx->r14 = S32(0XA01 << 16);
    // 0x8029F55C: lui         $s1, 0x8039
    ctx->r17 = S32(0X8039 << 16);
    // 0x8029F560: ori         $s0, $s0, 0xFFFF
    ctx->r16 = ctx->r16 | 0XFFFF;
    // 0x8029F564: addiu       $t6, $t6, -0x6BA0
    ctx->r14 = ADD32(ctx->r14, -0X6BA0);
    // 0x8029F568: ori         $s1, $s1, 0xAA00
    ctx->r17 = ctx->r17 | 0XAA00;
    // 0x8029F56C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8029F570: and         $t7, $t6, $s0
    ctx->r15 = ctx->r14 & ctx->r16;
    // 0x8029F574: jal         0x8028B950
    // 0x8029F578: addu        $a0, $t7, $s1
    ctx->r4 = ADD32(ctx->r15, ctx->r17);
    func_8028B950(rdram, ctx);
        goto after_0;
    // 0x8029F578: addu        $a0, $t7, $s1
    ctx->r4 = ADD32(ctx->r15, ctx->r17);
    after_0:
    // 0x8029F57C: lui         $t8, 0xA01
    ctx->r24 = S32(0XA01 << 16);
    // 0x8029F580: addiu       $t8, $t8, -0x6F08
    ctx->r24 = ADD32(ctx->r24, -0X6F08);
    // 0x8029F584: and         $t9, $t8, $s0
    ctx->r25 = ctx->r24 & ctx->r16;
    // 0x8029F588: jal         0x8028B950
    // 0x8029F58C: addu        $a0, $t9, $s1
    ctx->r4 = ADD32(ctx->r25, ctx->r17);
    func_8028B950(rdram, ctx);
        goto after_1;
    // 0x8029F58C: addu        $a0, $t9, $s1
    ctx->r4 = ADD32(ctx->r25, ctx->r17);
    after_1:
    // 0x8029F590: lui         $t0, 0xA01
    ctx->r8 = S32(0XA01 << 16);
    // 0x8029F594: addiu       $t0, $t0, -0x7350
    ctx->r8 = ADD32(ctx->r8, -0X7350);
    // 0x8029F598: and         $t1, $t0, $s0
    ctx->r9 = ctx->r8 & ctx->r16;
    // 0x8029F59C: jal         0x8028B950
    // 0x8029F5A0: addu        $a0, $t1, $s1
    ctx->r4 = ADD32(ctx->r9, ctx->r17);
    func_8028B950(rdram, ctx);
        goto after_2;
    // 0x8029F5A0: addu        $a0, $t1, $s1
    ctx->r4 = ADD32(ctx->r9, ctx->r17);
    after_2:
    // 0x8029F5A4: lui         $t2, 0xA01
    ctx->r10 = S32(0XA01 << 16);
    // 0x8029F5A8: addiu       $t2, $t2, -0x78B8
    ctx->r10 = ADD32(ctx->r10, -0X78B8);
    // 0x8029F5AC: and         $t3, $t2, $s0
    ctx->r11 = ctx->r10 & ctx->r16;
    // 0x8029F5B0: jal         0x8028B950
    // 0x8029F5B4: addu        $a0, $t3, $s1
    ctx->r4 = ADD32(ctx->r11, ctx->r17);
    func_8028B950(rdram, ctx);
        goto after_3;
    // 0x8029F5B4: addu        $a0, $t3, $s1
    ctx->r4 = ADD32(ctx->r11, ctx->r17);
    after_3:
    // 0x8029F5B8: lui         $t4, 0xA01
    ctx->r12 = S32(0XA01 << 16);
    // 0x8029F5BC: addiu       $t4, $t4, -0x7C20
    ctx->r12 = ADD32(ctx->r12, -0X7C20);
    // 0x8029F5C0: and         $t5, $t4, $s0
    ctx->r13 = ctx->r12 & ctx->r16;
    // 0x8029F5C4: jal         0x8028B950
    // 0x8029F5C8: addu        $a0, $t5, $s1
    ctx->r4 = ADD32(ctx->r13, ctx->r17);
    func_8028B950(rdram, ctx);
        goto after_4;
    // 0x8029F5C8: addu        $a0, $t5, $s1
    ctx->r4 = ADD32(ctx->r13, ctx->r17);
    after_4:
    // 0x8029F5CC: lui         $t6, 0xA00
    ctx->r14 = S32(0XA00 << 16);
    // 0x8029F5D0: addiu       $t6, $t6, 0x7A20
    ctx->r14 = ADD32(ctx->r14, 0X7A20);
    // 0x8029F5D4: and         $t7, $t6, $s0
    ctx->r15 = ctx->r14 & ctx->r16;
    // 0x8029F5D8: jal         0x8028B950
    // 0x8029F5DC: addu        $a0, $t7, $s1
    ctx->r4 = ADD32(ctx->r15, ctx->r17);
    func_8028B950(rdram, ctx);
        goto after_5;
    // 0x8029F5DC: addu        $a0, $t7, $s1
    ctx->r4 = ADD32(ctx->r15, ctx->r17);
    after_5:
    // 0x8029F5E0: lui         $t8, 0xA00
    ctx->r24 = S32(0XA00 << 16);
    // 0x8029F5E4: addiu       $t8, $t8, 0x4E20
    ctx->r24 = ADD32(ctx->r24, 0X4E20);
    // 0x8029F5E8: and         $t9, $t8, $s0
    ctx->r25 = ctx->r24 & ctx->r16;
    // 0x8029F5EC: jal         0x8028B950
    // 0x8029F5F0: addu        $a0, $t9, $s1
    ctx->r4 = ADD32(ctx->r25, ctx->r17);
    func_8028B950(rdram, ctx);
        goto after_6;
    // 0x8029F5F0: addu        $a0, $t9, $s1
    ctx->r4 = ADD32(ctx->r25, ctx->r17);
    after_6:
    // 0x8029F5F4: lui         $t0, 0xA00
    ctx->r8 = S32(0XA00 << 16);
    // 0x8029F5F8: addiu       $t0, $t0, 0x4FC0
    ctx->r8 = ADD32(ctx->r8, 0X4FC0);
    // 0x8029F5FC: and         $t1, $t0, $s0
    ctx->r9 = ctx->r8 & ctx->r16;
    // 0x8029F600: jal         0x8028B950
    // 0x8029F604: addu        $a0, $t1, $s1
    ctx->r4 = ADD32(ctx->r9, ctx->r17);
    func_8028B950(rdram, ctx);
        goto after_7;
    // 0x8029F604: addu        $a0, $t1, $s1
    ctx->r4 = ADD32(ctx->r9, ctx->r17);
    after_7:
    // 0x8029F608: lui         $t2, 0xA00
    ctx->r10 = S32(0XA00 << 16);
    // 0x8029F60C: addiu       $t2, $t2, 0x5480
    ctx->r10 = ADD32(ctx->r10, 0X5480);
    // 0x8029F610: and         $t3, $t2, $s0
    ctx->r11 = ctx->r10 & ctx->r16;
    // 0x8029F614: jal         0x8028B950
    // 0x8029F618: addu        $a0, $t3, $s1
    ctx->r4 = ADD32(ctx->r11, ctx->r17);
    func_8028B950(rdram, ctx);
        goto after_8;
    // 0x8029F618: addu        $a0, $t3, $s1
    ctx->r4 = ADD32(ctx->r11, ctx->r17);
    after_8:
    // 0x8029F61C: lui         $t4, 0xA00
    ctx->r12 = S32(0XA00 << 16);
    // 0x8029F620: addiu       $t4, $t4, 0x5BA0
    ctx->r12 = ADD32(ctx->r12, 0X5BA0);
    // 0x8029F624: and         $t5, $t4, $s0
    ctx->r13 = ctx->r12 & ctx->r16;
    // 0x8029F628: jal         0x8028B950
    // 0x8029F62C: addu        $a0, $t5, $s1
    ctx->r4 = ADD32(ctx->r13, ctx->r17);
    func_8028B950(rdram, ctx);
        goto after_9;
    // 0x8029F62C: addu        $a0, $t5, $s1
    ctx->r4 = ADD32(ctx->r13, ctx->r17);
    after_9:
    // 0x8029F630: lui         $t6, 0xA00
    ctx->r14 = S32(0XA00 << 16);
    // 0x8029F634: addiu       $t6, $t6, 0x6160
    ctx->r14 = ADD32(ctx->r14, 0X6160);
    // 0x8029F638: and         $t7, $t6, $s0
    ctx->r15 = ctx->r14 & ctx->r16;
    // 0x8029F63C: jal         0x8028B950
    // 0x8029F640: addu        $a0, $t7, $s1
    ctx->r4 = ADD32(ctx->r15, ctx->r17);
    func_8028B950(rdram, ctx);
        goto after_10;
    // 0x8029F640: addu        $a0, $t7, $s1
    ctx->r4 = ADD32(ctx->r15, ctx->r17);
    after_10:
    // 0x8029F644: lui         $t8, 0xA00
    ctx->r24 = S32(0XA00 << 16);
    // 0x8029F648: addiu       $t8, $t8, 0x64F0
    ctx->r24 = ADD32(ctx->r24, 0X64F0);
    // 0x8029F64C: and         $t9, $t8, $s0
    ctx->r25 = ctx->r24 & ctx->r16;
    // 0x8029F650: jal         0x8028B950
    // 0x8029F654: addu        $a0, $t9, $s1
    ctx->r4 = ADD32(ctx->r25, ctx->r17);
    func_8028B950(rdram, ctx);
        goto after_11;
    // 0x8029F654: addu        $a0, $t9, $s1
    ctx->r4 = ADD32(ctx->r25, ctx->r17);
    after_11:
    // 0x8029F658: lui         $t0, 0xA00
    ctx->r8 = S32(0XA00 << 16);
    // 0x8029F65C: addiu       $t0, $t0, 0x6820
    ctx->r8 = ADD32(ctx->r8, 0X6820);
    // 0x8029F660: and         $t1, $t0, $s0
    ctx->r9 = ctx->r8 & ctx->r16;
    // 0x8029F664: jal         0x8028B950
    // 0x8029F668: addu        $a0, $t1, $s1
    ctx->r4 = ADD32(ctx->r9, ctx->r17);
    func_8028B950(rdram, ctx);
        goto after_12;
    // 0x8029F668: addu        $a0, $t1, $s1
    ctx->r4 = ADD32(ctx->r9, ctx->r17);
    after_12:
    // 0x8029F66C: lui         $t2, 0xA00
    ctx->r10 = S32(0XA00 << 16);
    // 0x8029F670: addiu       $t2, $t2, 0x6E40
    ctx->r10 = ADD32(ctx->r10, 0X6E40);
    // 0x8029F674: and         $t3, $t2, $s0
    ctx->r11 = ctx->r10 & ctx->r16;
    // 0x8029F678: jal         0x8028B950
    // 0x8029F67C: addu        $a0, $t3, $s1
    ctx->r4 = ADD32(ctx->r11, ctx->r17);
    func_8028B950(rdram, ctx);
        goto after_13;
    // 0x8029F67C: addu        $a0, $t3, $s1
    ctx->r4 = ADD32(ctx->r11, ctx->r17);
    after_13:
    // 0x8029F680: lui         $t4, 0xA00
    ctx->r12 = S32(0XA00 << 16);
    // 0x8029F684: addiu       $t4, $t4, 0x7560
    ctx->r12 = ADD32(ctx->r12, 0X7560);
    // 0x8029F688: and         $t5, $t4, $s0
    ctx->r13 = ctx->r12 & ctx->r16;
    // 0x8029F68C: jal         0x8028B950
    // 0x8029F690: addu        $a0, $t5, $s1
    ctx->r4 = ADD32(ctx->r13, ctx->r17);
    func_8028B950(rdram, ctx);
        goto after_14;
    // 0x8029F690: addu        $a0, $t5, $s1
    ctx->r4 = ADD32(ctx->r13, ctx->r17);
    after_14:
    // 0x8029F694: lui         $t6, 0xA00
    ctx->r14 = S32(0XA00 << 16);
    // 0x8029F698: addiu       $t6, $t6, 0x5810
    ctx->r14 = ADD32(ctx->r14, 0X5810);
    // 0x8029F69C: and         $t7, $t6, $s0
    ctx->r15 = ctx->r14 & ctx->r16;
    // 0x8029F6A0: jal         0x8028B950
    // 0x8029F6A4: addu        $a0, $t7, $s1
    ctx->r4 = ADD32(ctx->r15, ctx->r17);
    func_8028B950(rdram, ctx);
        goto after_15;
    // 0x8029F6A4: addu        $a0, $t7, $s1
    ctx->r4 = ADD32(ctx->r15, ctx->r17);
    after_15:
    // 0x8029F6A8: lui         $t8, 0xA00
    ctx->r24 = S32(0XA00 << 16);
    // 0x8029F6AC: addiu       $t8, $t8, 0x71D0
    ctx->r24 = ADD32(ctx->r24, 0X71D0);
    // 0x8029F6B0: and         $t9, $t8, $s0
    ctx->r25 = ctx->r24 & ctx->r16;
    // 0x8029F6B4: jal         0x8028B950
    // 0x8029F6B8: addu        $a0, $t9, $s1
    ctx->r4 = ADD32(ctx->r25, ctx->r17);
    func_8028B950(rdram, ctx);
        goto after_16;
    // 0x8029F6B8: addu        $a0, $t9, $s1
    ctx->r4 = ADD32(ctx->r25, ctx->r17);
    after_16:
    // 0x8029F6BC: lui         $t0, 0xA00
    ctx->r8 = S32(0XA00 << 16);
    // 0x8029F6C0: addiu       $t0, $t0, 0x5F50
    ctx->r8 = ADD32(ctx->r8, 0X5F50);
    // 0x8029F6C4: and         $t1, $t0, $s0
    ctx->r9 = ctx->r8 & ctx->r16;
    // 0x8029F6C8: jal         0x8028B950
    // 0x8029F6CC: addu        $a0, $t1, $s1
    ctx->r4 = ADD32(ctx->r9, ctx->r17);
    func_8028B950(rdram, ctx);
        goto after_17;
    // 0x8029F6CC: addu        $a0, $t1, $s1
    ctx->r4 = ADD32(ctx->r9, ctx->r17);
    after_17:
    // 0x8029F6D0: lui         $t2, 0xA00
    ctx->r10 = S32(0XA00 << 16);
    // 0x8029F6D4: addiu       $t2, $t2, 0x6C30
    ctx->r10 = ADD32(ctx->r10, 0X6C30);
    // 0x8029F6D8: and         $t3, $t2, $s0
    ctx->r11 = ctx->r10 & ctx->r16;
    // 0x8029F6DC: jal         0x8028B950
    // 0x8029F6E0: addu        $a0, $t3, $s1
    ctx->r4 = ADD32(ctx->r11, ctx->r17);
    func_8028B950(rdram, ctx);
        goto after_18;
    // 0x8029F6E0: addu        $a0, $t3, $s1
    ctx->r4 = ADD32(ctx->r11, ctx->r17);
    after_18:
    // 0x8029F6E4: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x8029F6E8: sb          $zero, 0x3A35($at)
    MEM_B(0X3A35, ctx->r1) = 0;
    // 0x8029F6EC: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x8029F6F0: sb          $zero, 0x3A38($at)
    MEM_B(0X3A38, ctx->r1) = 0;
    // 0x8029F6F4: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x8029F6F8: sb          $zero, 0x3A37($at)
    MEM_B(0X3A37, ctx->r1) = 0;
    // 0x8029F6FC: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x8029F700: addiu       $t4, $zero, 0x28
    ctx->r12 = ADD32(0, 0X28);
    // 0x8029F704: sb          $t4, 0x3A36($at)
    MEM_B(0X3A36, ctx->r1) = ctx->r12;
    // 0x8029F708: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x8029F70C: addiu       $t5, $zero, 0x20
    ctx->r13 = ADD32(0, 0X20);
    // 0x8029F710: sb          $t5, 0x3A34($at)
    MEM_B(0X3A34, ctx->r1) = ctx->r13;
    // 0x8029F714: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x8029F718: sb          $zero, 0x3A33($at)
    MEM_B(0X3A33, ctx->r1) = 0;
    // 0x8029F71C: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x8029F720: sb          $zero, 0x39F6($at)
    MEM_B(0X39F6, ctx->r1) = 0;
    // 0x8029F724: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x8029F728: addiu       $t6, $zero, 0x2
    ctx->r14 = ADD32(0, 0X2);
    // 0x8029F72C: sb          $t6, 0x39F5($at)
    MEM_B(0X39F5, ctx->r1) = ctx->r14;
    // 0x8029F730: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x8029F734: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8029F738: sb          $zero, 0x39F8($at)
    MEM_B(0X39F8, ctx->r1) = 0;
    // 0x8029F73C: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x8029F740: addiu       $t7, $zero, 0x3
    ctx->r15 = ADD32(0, 0X3);
    // 0x8029F744: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x8029F748: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x8029F74C: sb          $t7, 0x39F7($at)
    MEM_B(0X39F7, ctx->r1) = ctx->r15;
    // 0x8029F750: jr          $ra
    // 0x8029F754: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x8029F754: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_8029F758(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8029F758: lui         $v0, 0x802C
    ctx->r2 = S32(0X802C << 16);
    // 0x8029F75C: addiu       $v0, $v0, 0x3830
    ctx->r2 = ADD32(ctx->r2, 0X3830);
    // 0x8029F760: lui         $t6, 0xA00
    ctx->r14 = S32(0XA00 << 16);
    // 0x8029F764: lui         $t7, 0xA00
    ctx->r15 = S32(0XA00 << 16);
    // 0x8029F768: addiu       $t6, $t6, 0x4FC0
    ctx->r14 = ADD32(ctx->r14, 0X4FC0);
    // 0x8029F76C: addiu       $t7, $t7, 0x5480
    ctx->r15 = ADD32(ctx->r15, 0X5480);
    // 0x8029F770: sw          $t6, 0x34($v0)
    MEM_W(0X34, ctx->r2) = ctx->r14;
    // 0x8029F774: sw          $t7, 0x3C($v0)
    MEM_W(0X3C, ctx->r2) = ctx->r15;
    // 0x8029F778: lui         $t8, 0xA00
    ctx->r24 = S32(0XA00 << 16);
    // 0x8029F77C: lui         $t9, 0xA00
    ctx->r25 = S32(0XA00 << 16);
    // 0x8029F780: lui         $t0, 0xA00
    ctx->r8 = S32(0XA00 << 16);
    // 0x8029F784: lui         $t1, 0xA00
    ctx->r9 = S32(0XA00 << 16);
    // 0x8029F788: lui         $t2, 0xA00
    ctx->r10 = S32(0XA00 << 16);
    // 0x8029F78C: lui         $t3, 0xA00
    ctx->r11 = S32(0XA00 << 16);
    // 0x8029F790: lui         $t4, 0xA00
    ctx->r12 = S32(0XA00 << 16);
    // 0x8029F794: lui         $t5, 0xA00
    ctx->r13 = S32(0XA00 << 16);
    // 0x8029F798: lui         $t6, 0xA00
    ctx->r14 = S32(0XA00 << 16);
    // 0x8029F79C: lui         $t7, 0xA00
    ctx->r15 = S32(0XA00 << 16);
    // 0x8029F7A0: addiu       $t8, $t8, 0x5BA0
    ctx->r24 = ADD32(ctx->r24, 0X5BA0);
    // 0x8029F7A4: addiu       $t9, $t9, 0x6160
    ctx->r25 = ADD32(ctx->r25, 0X6160);
    // 0x8029F7A8: addiu       $t0, $t0, 0x64F0
    ctx->r8 = ADD32(ctx->r8, 0X64F0);
    // 0x8029F7AC: addiu       $t1, $t1, 0x6820
    ctx->r9 = ADD32(ctx->r9, 0X6820);
    // 0x8029F7B0: addiu       $t2, $t2, 0x6E40
    ctx->r10 = ADD32(ctx->r10, 0X6E40);
    // 0x8029F7B4: addiu       $t3, $t3, 0x7560
    ctx->r11 = ADD32(ctx->r11, 0X7560);
    // 0x8029F7B8: addiu       $t4, $t4, 0x5810
    ctx->r12 = ADD32(ctx->r12, 0X5810);
    // 0x8029F7BC: addiu       $t5, $t5, 0x71D0
    ctx->r13 = ADD32(ctx->r13, 0X71D0);
    // 0x8029F7C0: addiu       $t6, $t6, 0x5F50
    ctx->r14 = ADD32(ctx->r14, 0X5F50);
    // 0x8029F7C4: addiu       $t7, $t7, 0x6C30
    ctx->r15 = ADD32(ctx->r15, 0X6C30);
    // 0x8029F7C8: sw          $t8, 0x44($v0)
    MEM_W(0X44, ctx->r2) = ctx->r24;
    // 0x8029F7CC: sw          $t9, 0x4C($v0)
    MEM_W(0X4C, ctx->r2) = ctx->r25;
    // 0x8029F7D0: sw          $t0, 0x54($v0)
    MEM_W(0X54, ctx->r2) = ctx->r8;
    // 0x8029F7D4: sw          $t1, 0x5C($v0)
    MEM_W(0X5C, ctx->r2) = ctx->r9;
    // 0x8029F7D8: sw          $t2, 0x64($v0)
    MEM_W(0X64, ctx->r2) = ctx->r10;
    // 0x8029F7DC: sw          $t3, 0x6C($v0)
    MEM_W(0X6C, ctx->r2) = ctx->r11;
    // 0x8029F7E0: sw          $t4, 0x74($v0)
    MEM_W(0X74, ctx->r2) = ctx->r12;
    // 0x8029F7E4: sw          $t5, 0x8C($v0)
    MEM_W(0X8C, ctx->r2) = ctx->r13;
    // 0x8029F7E8: sw          $t6, 0x7C($v0)
    MEM_W(0X7C, ctx->r2) = ctx->r14;
    // 0x8029F7EC: jr          $ra
    // 0x8029F7F0: sw          $t7, 0x84($v0)
    MEM_W(0X84, ctx->r2) = ctx->r15;
    return;
    // 0x8029F7F0: sw          $t7, 0x84($v0)
    MEM_W(0X84, ctx->r2) = ctx->r15;
;}
RECOMP_FUNC void func_8029F7F4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8029F7F4: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8029F7F8: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x8029F7FC: lui         $s0, 0xF
    ctx->r16 = S32(0XF << 16);
    // 0x8029F800: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x8029F804: lui         $t6, 0xA00
    ctx->r14 = S32(0XA00 << 16);
    // 0x8029F808: lui         $s1, 0x8039
    ctx->r17 = S32(0X8039 << 16);
    // 0x8029F80C: ori         $s0, $s0, 0xFFFF
    ctx->r16 = ctx->r16 | 0XFFFF;
    // 0x8029F810: addiu       $t6, $t6, 0x4660
    ctx->r14 = ADD32(ctx->r14, 0X4660);
    // 0x8029F814: ori         $s1, $s1, 0xAA00
    ctx->r17 = ctx->r17 | 0XAA00;
    // 0x8029F818: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8029F81C: and         $t7, $t6, $s0
    ctx->r15 = ctx->r14 & ctx->r16;
    // 0x8029F820: jal         0x8028B950
    // 0x8029F824: addu        $a0, $t7, $s1
    ctx->r4 = ADD32(ctx->r15, ctx->r17);
    func_8028B950(rdram, ctx);
        goto after_0;
    // 0x8029F824: addu        $a0, $t7, $s1
    ctx->r4 = ADD32(ctx->r15, ctx->r17);
    after_0:
    // 0x8029F828: lui         $t8, 0xA00
    ctx->r24 = S32(0XA00 << 16);
    // 0x8029F82C: addiu       $t8, $t8, 0x4758
    ctx->r24 = ADD32(ctx->r24, 0X4758);
    // 0x8029F830: and         $t9, $t8, $s0
    ctx->r25 = ctx->r24 & ctx->r16;
    // 0x8029F834: jal         0x8028B950
    // 0x8029F838: addu        $a0, $t9, $s1
    ctx->r4 = ADD32(ctx->r25, ctx->r17);
    func_8028B950(rdram, ctx);
        goto after_1;
    // 0x8029F838: addu        $a0, $t9, $s1
    ctx->r4 = ADD32(ctx->r25, ctx->r17);
    after_1:
    // 0x8029F83C: lui         $t0, 0xA00
    ctx->r8 = S32(0XA00 << 16);
    // 0x8029F840: addiu       $t0, $t0, 0x4850
    ctx->r8 = ADD32(ctx->r8, 0X4850);
    // 0x8029F844: and         $t1, $t0, $s0
    ctx->r9 = ctx->r8 & ctx->r16;
    // 0x8029F848: jal         0x8028B950
    // 0x8029F84C: addu        $a0, $t1, $s1
    ctx->r4 = ADD32(ctx->r9, ctx->r17);
    func_8028B950(rdram, ctx);
        goto after_2;
    // 0x8029F84C: addu        $a0, $t1, $s1
    ctx->r4 = ADD32(ctx->r9, ctx->r17);
    after_2:
    // 0x8029F850: lui         $t2, 0xA00
    ctx->r10 = S32(0XA00 << 16);
    // 0x8029F854: addiu       $t2, $t2, 0x4948
    ctx->r10 = ADD32(ctx->r10, 0X4948);
    // 0x8029F858: and         $t3, $t2, $s0
    ctx->r11 = ctx->r10 & ctx->r16;
    // 0x8029F85C: jal         0x8028B950
    // 0x8029F860: addu        $a0, $t3, $s1
    ctx->r4 = ADD32(ctx->r11, ctx->r17);
    func_8028B950(rdram, ctx);
        goto after_3;
    // 0x8029F860: addu        $a0, $t3, $s1
    ctx->r4 = ADD32(ctx->r11, ctx->r17);
    after_3:
    // 0x8029F864: lui         $t4, 0xA00
    ctx->r12 = S32(0XA00 << 16);
    // 0x8029F868: addiu       $t4, $t4, 0x4A40
    ctx->r12 = ADD32(ctx->r12, 0X4A40);
    // 0x8029F86C: and         $t5, $t4, $s0
    ctx->r13 = ctx->r12 & ctx->r16;
    // 0x8029F870: jal         0x8028B950
    // 0x8029F874: addu        $a0, $t5, $s1
    ctx->r4 = ADD32(ctx->r13, ctx->r17);
    func_8028B950(rdram, ctx);
        goto after_4;
    // 0x8029F874: addu        $a0, $t5, $s1
    ctx->r4 = ADD32(ctx->r13, ctx->r17);
    after_4:
    // 0x8029F878: lui         $t6, 0xA00
    ctx->r14 = S32(0XA00 << 16);
    // 0x8029F87C: addiu       $t6, $t6, 0x4B38
    ctx->r14 = ADD32(ctx->r14, 0X4B38);
    // 0x8029F880: and         $t7, $t6, $s0
    ctx->r15 = ctx->r14 & ctx->r16;
    // 0x8029F884: jal         0x8028B950
    // 0x8029F888: addu        $a0, $t7, $s1
    ctx->r4 = ADD32(ctx->r15, ctx->r17);
    func_8028B950(rdram, ctx);
        goto after_5;
    // 0x8029F888: addu        $a0, $t7, $s1
    ctx->r4 = ADD32(ctx->r15, ctx->r17);
    after_5:
    // 0x8029F88C: lui         $t8, 0xA00
    ctx->r24 = S32(0XA00 << 16);
    // 0x8029F890: addiu       $t8, $t8, 0x4C30
    ctx->r24 = ADD32(ctx->r24, 0X4C30);
    // 0x8029F894: and         $t9, $t8, $s0
    ctx->r25 = ctx->r24 & ctx->r16;
    // 0x8029F898: jal         0x8028B950
    // 0x8029F89C: addu        $a0, $t9, $s1
    ctx->r4 = ADD32(ctx->r25, ctx->r17);
    func_8028B950(rdram, ctx);
        goto after_6;
    // 0x8029F89C: addu        $a0, $t9, $s1
    ctx->r4 = ADD32(ctx->r25, ctx->r17);
    after_6:
    // 0x8029F8A0: lui         $t0, 0xA00
    ctx->r8 = S32(0XA00 << 16);
    // 0x8029F8A4: addiu       $t0, $t0, 0x4D28
    ctx->r8 = ADD32(ctx->r8, 0X4D28);
    // 0x8029F8A8: and         $t1, $t0, $s0
    ctx->r9 = ctx->r8 & ctx->r16;
    // 0x8029F8AC: jal         0x8028B950
    // 0x8029F8B0: addu        $a0, $t1, $s1
    ctx->r4 = ADD32(ctx->r9, ctx->r17);
    func_8028B950(rdram, ctx);
        goto after_7;
    // 0x8029F8B0: addu        $a0, $t1, $s1
    ctx->r4 = ADD32(ctx->r9, ctx->r17);
    after_7:
    // 0x8029F8B4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8029F8B8: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x8029F8BC: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x8029F8C0: jr          $ra
    // 0x8029F8C4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x8029F8C4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_8029F8C8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8029F8C8: lui         $t6, 0x8010
    ctx->r14 = S32(0X8010 << 16);
    // 0x8029F8CC: lhu         $t6, 0x5C00($t6)
    ctx->r14 = MEM_HU(ctx->r14, 0X5C00);
    // 0x8029F8D0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8029F8D4: beq         $t6, $zero, L_8029F940
    if (ctx->r14 == 0) {
        // 0x8029F8D8: sw          $ra, 0x14($sp)
        MEM_W(0X14, ctx->r29) = ctx->r31;
            goto L_8029F940;
    }
    // 0x8029F8D8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8029F8DC: lui         $v0, 0x802C
    ctx->r2 = S32(0X802C << 16);
    // 0x8029F8E0: lui         $a0, 0x802C
    ctx->r4 = S32(0X802C << 16);
    // 0x8029F8E4: addiu       $a0, $a0, 0x3830
    ctx->r4 = ADD32(ctx->r4, 0X3830);
    // 0x8029F8E8: addiu       $v0, $v0, 0x3600
    ctx->r2 = ADD32(ctx->r2, 0X3600);
    // 0x8029F8EC: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
L_8029F8F0:
    // 0x8029F8F0: addiu       $v0, $v0, 0x8
    ctx->r2 = ADD32(ctx->r2, 0X8);
    // 0x8029F8F4: sltu        $at, $v0, $a0
    ctx->r1 = ctx->r2 < ctx->r4 ? 1 : 0;
    // 0x8029F8F8: bne         $at, $zero, L_8029F8F0
    if (ctx->r1 != 0) {
        // 0x8029F8FC: sh          $v1, -0x8($v0)
        MEM_H(-0X8, ctx->r2) = ctx->r3;
            goto L_8029F8F0;
    }
    // 0x8029F8FC: sh          $v1, -0x8($v0)
    MEM_H(-0X8, ctx->r2) = ctx->r3;
    // 0x8029F900: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x8029F904: sh          $v1, 0x3830($at)
    MEM_H(0X3830, ctx->r1) = ctx->r3;
    // 0x8029F908: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x8029F90C: lui         $v0, 0x802C
    ctx->r2 = S32(0X802C << 16);
    // 0x8029F910: lui         $a0, 0x802C
    ctx->r4 = S32(0X802C << 16);
    // 0x8029F914: addiu       $a0, $a0, 0x38C0
    ctx->r4 = ADD32(ctx->r4, 0X38C0);
    // 0x8029F918: addiu       $v0, $v0, 0x3840
    ctx->r2 = ADD32(ctx->r2, 0X3840);
    // 0x8029F91C: sh          $v1, 0x3838($at)
    MEM_H(0X3838, ctx->r1) = ctx->r3;
L_8029F920:
    // 0x8029F920: addiu       $v0, $v0, 0x20
    ctx->r2 = ADD32(ctx->r2, 0X20);
    // 0x8029F924: sh          $v1, -0x18($v0)
    MEM_H(-0X18, ctx->r2) = ctx->r3;
    // 0x8029F928: sh          $v1, -0x10($v0)
    MEM_H(-0X10, ctx->r2) = ctx->r3;
    // 0x8029F92C: sh          $v1, -0x8($v0)
    MEM_H(-0X8, ctx->r2) = ctx->r3;
    // 0x8029F930: bne         $v0, $a0, L_8029F920
    if (ctx->r2 != ctx->r4) {
        // 0x8029F934: sh          $v1, -0x20($v0)
        MEM_H(-0X20, ctx->r2) = ctx->r3;
            goto L_8029F920;
    }
    // 0x8029F934: sh          $v1, -0x20($v0)
    MEM_H(-0X20, ctx->r2) = ctx->r3;
    // 0x8029F938: b           L_8029F948
    // 0x8029F93C: nop

        goto L_8029F948;
    // 0x8029F93C: nop

L_8029F940:
    // 0x8029F940: jal         0x8028D5E0
    // 0x8029F944: nop

    func_8028D5E0(rdram, ctx);
        goto after_0;
    // 0x8029F944: nop

    after_0:
L_8029F948:
    // 0x8029F948: lui         $t7, 0x8011
    ctx->r15 = S32(0X8011 << 16);
    // 0x8029F94C: lw          $t7, -0x2F98($t7)
    ctx->r15 = MEM_W(ctx->r15, -0X2F98);
    // 0x8029F950: lui         $v0, 0x3
    ctx->r2 = S32(0X3 << 16);
    // 0x8029F954: addu        $v0, $v0, $t7
    ctx->r2 = ADD32(ctx->r2, ctx->r15);
    // 0x8029F958: lbu         $v0, -0x765E($v0)
    ctx->r2 = MEM_BU(ctx->r2, -0X765E);
    // 0x8029F95C: addiu       $at, $zero, 0xD
    ctx->r1 = ADD32(0, 0XD);
    // 0x8029F960: beq         $v0, $at, L_8029F990
    if (ctx->r2 == ctx->r1) {
        // 0x8029F964: addiu       $at, $zero, 0xE
        ctx->r1 = ADD32(0, 0XE);
            goto L_8029F990;
    }
    // 0x8029F964: addiu       $at, $zero, 0xE
    ctx->r1 = ADD32(0, 0XE);
    // 0x8029F968: beq         $v0, $at, L_8029F990
    if (ctx->r2 == ctx->r1) {
        // 0x8029F96C: nop
    
            goto L_8029F990;
    }
    // 0x8029F96C: nop

    // 0x8029F970: jal         0x802A0484
    // 0x8029F974: nop

    func_802A0484(rdram, ctx);
        goto after_1;
    // 0x8029F974: nop

    after_1:
    // 0x8029F978: lui         $t8, 0x8011
    ctx->r24 = S32(0X8011 << 16);
    // 0x8029F97C: lw          $t8, -0x2F98($t8)
    ctx->r24 = MEM_W(ctx->r24, -0X2F98);
    // 0x8029F980: lui         $v0, 0x3
    ctx->r2 = S32(0X3 << 16);
    // 0x8029F984: addu        $v0, $v0, $t8
    ctx->r2 = ADD32(ctx->r2, ctx->r24);
    // 0x8029F988: lbu         $v0, -0x765E($v0)
    ctx->r2 = MEM_BU(ctx->r2, -0X765E);
    // 0x8029F98C: nop

L_8029F990:
    // 0x8029F990: lui         $t9, 0x8012
    ctx->r25 = S32(0X8012 << 16);
    // 0x8029F994: lbu         $t9, -0x32A4($t9)
    ctx->r25 = MEM_BU(ctx->r25, -0X32A4);
    // 0x8029F998: addiu       $at, $zero, 0x7
    ctx->r1 = ADD32(0, 0X7);
    // 0x8029F99C: beq         $t9, $at, L_8029FA00
    if (ctx->r25 == ctx->r1) {
        // 0x8029F9A0: addiu       $at, $zero, 0x5
        ctx->r1 = ADD32(0, 0X5);
            goto L_8029FA00;
    }
    // 0x8029F9A0: addiu       $at, $zero, 0x5
    ctx->r1 = ADD32(0, 0X5);
    // 0x8029F9A4: bne         $v0, $at, L_8029F9E0
    if (ctx->r2 != ctx->r1) {
        // 0x8029F9A8: lui         $t0, 0x8011
        ctx->r8 = S32(0X8011 << 16);
            goto L_8029F9E0;
    }
    // 0x8029F9A8: lui         $t0, 0x8011
    ctx->r8 = S32(0X8011 << 16);
    // 0x8029F9AC: lbu         $t0, -0x2FAF($t0)
    ctx->r8 = MEM_BU(ctx->r8, -0X2FAF);
    // 0x8029F9B0: nop

    // 0x8029F9B4: bne         $t0, $zero, L_8029FA04
    if (ctx->r8 != 0) {
        // 0x8029F9B8: addiu       $at, $zero, 0x5
        ctx->r1 = ADD32(0, 0X5);
            goto L_8029FA04;
    }
    // 0x8029F9B8: addiu       $at, $zero, 0x5
    ctx->r1 = ADD32(0, 0X5);
    // 0x8029F9BC: jal         0x8029FDE8
    // 0x8029F9C0: nop

    func_8029FDE8(rdram, ctx);
        goto after_2;
    // 0x8029F9C0: nop

    after_2:
    // 0x8029F9C4: lui         $t1, 0x8011
    ctx->r9 = S32(0X8011 << 16);
    // 0x8029F9C8: lw          $t1, -0x2F98($t1)
    ctx->r9 = MEM_W(ctx->r9, -0X2F98);
    // 0x8029F9CC: lui         $v0, 0x3
    ctx->r2 = S32(0X3 << 16);
    // 0x8029F9D0: addu        $v0, $v0, $t1
    ctx->r2 = ADD32(ctx->r2, ctx->r9);
    // 0x8029F9D4: lbu         $v0, -0x765E($v0)
    ctx->r2 = MEM_BU(ctx->r2, -0X765E);
    // 0x8029F9D8: b           L_8029FA04
    // 0x8029F9DC: addiu       $at, $zero, 0x5
    ctx->r1 = ADD32(0, 0X5);
        goto L_8029FA04;
    // 0x8029F9DC: addiu       $at, $zero, 0x5
    ctx->r1 = ADD32(0, 0X5);
L_8029F9E0:
    // 0x8029F9E0: jal         0x8029FDE8
    // 0x8029F9E4: nop

    func_8029FDE8(rdram, ctx);
        goto after_3;
    // 0x8029F9E4: nop

    after_3:
    // 0x8029F9E8: lui         $t2, 0x8011
    ctx->r10 = S32(0X8011 << 16);
    // 0x8029F9EC: lw          $t2, -0x2F98($t2)
    ctx->r10 = MEM_W(ctx->r10, -0X2F98);
    // 0x8029F9F0: lui         $v0, 0x3
    ctx->r2 = S32(0X3 << 16);
    // 0x8029F9F4: addu        $v0, $v0, $t2
    ctx->r2 = ADD32(ctx->r2, ctx->r10);
    // 0x8029F9F8: lbu         $v0, -0x765E($v0)
    ctx->r2 = MEM_BU(ctx->r2, -0X765E);
    // 0x8029F9FC: nop

L_8029FA00:
    // 0x8029FA00: addiu       $at, $zero, 0x5
    ctx->r1 = ADD32(0, 0X5);
L_8029FA04:
    // 0x8029FA04: bne         $v0, $at, L_8029FA34
    if (ctx->r2 != ctx->r1) {
        // 0x8029FA08: lui         $t3, 0x8011
        ctx->r11 = S32(0X8011 << 16);
            goto L_8029FA34;
    }
    // 0x8029FA08: lui         $t3, 0x8011
    ctx->r11 = S32(0X8011 << 16);
    // 0x8029FA0C: lbu         $t3, -0x2FAF($t3)
    ctx->r11 = MEM_BU(ctx->r11, -0X2FAF);
    // 0x8029FA10: nop

    // 0x8029FA14: bne         $t3, $zero, L_8029FA24
    if (ctx->r11 != 0) {
        // 0x8029FA18: nop
    
            goto L_8029FA24;
    }
    // 0x8029FA18: nop

    // 0x8029FA1C: jal         0x8029FAA8
    // 0x8029FA20: nop

    func_8029FAA8(rdram, ctx);
        goto after_4;
    // 0x8029FA20: nop

    after_4:
L_8029FA24:
    // 0x8029FA24: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x8029FA28: lbu         $v0, -0x32A4($v0)
    ctx->r2 = MEM_BU(ctx->r2, -0X32A4);
    // 0x8029FA2C: b           L_8029FA4C
    // 0x8029FA30: addiu       $at, $zero, 0x7
    ctx->r1 = ADD32(0, 0X7);
        goto L_8029FA4C;
    // 0x8029FA30: addiu       $at, $zero, 0x7
    ctx->r1 = ADD32(0, 0X7);
L_8029FA34:
    // 0x8029FA34: jal         0x8029FAA8
    // 0x8029FA38: nop

    func_8029FAA8(rdram, ctx);
        goto after_5;
    // 0x8029FA38: nop

    after_5:
    // 0x8029FA3C: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x8029FA40: lbu         $v0, -0x32A4($v0)
    ctx->r2 = MEM_BU(ctx->r2, -0X32A4);
    // 0x8029FA44: nop

    // 0x8029FA48: addiu       $at, $zero, 0x7
    ctx->r1 = ADD32(0, 0X7);
L_8029FA4C:
    // 0x8029FA4C: beq         $v0, $at, L_8029FA98
    if (ctx->r2 == ctx->r1) {
        // 0x8029FA50: lui         $t4, 0x8011
        ctx->r12 = S32(0X8011 << 16);
            goto L_8029FA98;
    }
    // 0x8029FA50: lui         $t4, 0x8011
    ctx->r12 = S32(0X8011 << 16);
    // 0x8029FA54: lw          $t4, -0x2F98($t4)
    ctx->r12 = MEM_W(ctx->r12, -0X2F98);
    // 0x8029FA58: lui         $t5, 0x3
    ctx->r13 = S32(0X3 << 16);
    // 0x8029FA5C: addu        $t5, $t5, $t4
    ctx->r13 = ADD32(ctx->r13, ctx->r12);
    // 0x8029FA60: lbu         $t5, -0x765E($t5)
    ctx->r13 = MEM_BU(ctx->r13, -0X765E);
    // 0x8029FA64: addiu       $at, $zero, 0x5
    ctx->r1 = ADD32(0, 0X5);
    // 0x8029FA68: bne         $t5, $at, L_8029FA90
    if (ctx->r13 != ctx->r1) {
        // 0x8029FA6C: lui         $t6, 0x8011
        ctx->r14 = S32(0X8011 << 16);
            goto L_8029FA90;
    }
    // 0x8029FA6C: lui         $t6, 0x8011
    ctx->r14 = S32(0X8011 << 16);
    // 0x8029FA70: lbu         $t6, -0x2FAF($t6)
    ctx->r14 = MEM_BU(ctx->r14, -0X2FAF);
    // 0x8029FA74: nop

    // 0x8029FA78: bne         $t6, $zero, L_8029FA9C
    if (ctx->r14 != 0) {
        // 0x8029FA7C: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_8029FA9C;
    }
    // 0x8029FA7C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8029FA80: jal         0x802A006C
    // 0x8029FA84: nop

    func_802A006C(rdram, ctx);
        goto after_6;
    // 0x8029FA84: nop

    after_6:
    // 0x8029FA88: b           L_8029FA9C
    // 0x8029FA8C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_8029FA9C;
    // 0x8029FA8C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8029FA90:
    // 0x8029FA90: jal         0x802A006C
    // 0x8029FA94: nop

    func_802A006C(rdram, ctx);
        goto after_7;
    // 0x8029FA94: nop

    after_7:
L_8029FA98:
    // 0x8029FA98: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8029FA9C:
    // 0x8029FA9C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8029FAA0: jr          $ra
    // 0x8029FAA4: nop

    return;
    // 0x8029FAA4: nop

;}
RECOMP_FUNC void func_8029FAA8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8029FAA8: lui         $v0, 0x802C
    ctx->r2 = S32(0X802C << 16);
    // 0x8029FAAC: addiu       $v0, $v0, 0x3A36
    ctx->r2 = ADD32(ctx->r2, 0X3A36);
    // 0x8029FAB0: lbu         $t6, 0x0($v0)
    ctx->r14 = MEM_BU(ctx->r2, 0X0);
    // 0x8029FAB4: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8029FAB8: addiu       $t7, $t6, -0x1
    ctx->r15 = ADD32(ctx->r14, -0X1);
    // 0x8029FABC: andi        $t8, $t7, 0xFF
    ctx->r24 = ctx->r15 & 0XFF;
    // 0x8029FAC0: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8029FAC4: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x8029FAC8: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x8029FACC: bne         $t8, $zero, L_8029FDD4
    if (ctx->r24 != 0) {
        // 0x8029FAD0: sb          $t7, 0x0($v0)
        MEM_B(0X0, ctx->r2) = ctx->r15;
            goto L_8029FDD4;
    }
    // 0x8029FAD0: sb          $t7, 0x0($v0)
    MEM_B(0X0, ctx->r2) = ctx->r15;
    // 0x8029FAD4: addiu       $t9, $zero, 0x4
    ctx->r25 = ADD32(0, 0X4);
    // 0x8029FAD8: sb          $t9, 0x0($v0)
    MEM_B(0X0, ctx->r2) = ctx->r25;
    // 0x8029FADC: lui         $t0, 0x802C
    ctx->r8 = S32(0X802C << 16);
    // 0x8029FAE0: lbu         $t0, 0x3A38($t0)
    ctx->r8 = MEM_BU(ctx->r8, 0X3A38);
    // 0x8029FAE4: lui         $s1, 0x802C
    ctx->r17 = S32(0X802C << 16);
    // 0x8029FAE8: bne         $t0, $zero, L_8029FC4C
    if (ctx->r8 != 0) {
        // 0x8029FAEC: addiu       $s1, $s1, 0x3A35
        ctx->r17 = ADD32(ctx->r17, 0X3A35);
            goto L_8029FC4C;
    }
    // 0x8029FAEC: addiu       $s1, $s1, 0x3A35
    ctx->r17 = ADD32(ctx->r17, 0X3A35);
    // 0x8029FAF0: lui         $s1, 0x802C
    ctx->r17 = S32(0X802C << 16);
    // 0x8029FAF4: addiu       $s1, $s1, 0x3A35
    ctx->r17 = ADD32(ctx->r17, 0X3A35);
    // 0x8029FAF8: lbu         $t1, 0x0($s1)
    ctx->r9 = MEM_BU(ctx->r17, 0X0);
    // 0x8029FAFC: nop

    // 0x8029FB00: addiu       $t2, $t1, 0x1
    ctx->r10 = ADD32(ctx->r9, 0X1);
    // 0x8029FB04: andi        $v0, $t2, 0xFF
    ctx->r2 = ctx->r10 & 0XFF;
    // 0x8029FB08: slti        $at, $v0, 0x5
    ctx->r1 = SIGNED(ctx->r2) < 0X5 ? 1 : 0;
    // 0x8029FB0C: bne         $at, $zero, L_8029FB1C
    if (ctx->r1 != 0) {
        // 0x8029FB10: sb          $t2, 0x0($s1)
        MEM_B(0X0, ctx->r17) = ctx->r10;
            goto L_8029FB1C;
    }
    // 0x8029FB10: sb          $t2, 0x0($s1)
    MEM_B(0X0, ctx->r17) = ctx->r10;
    // 0x8029FB14: sb          $zero, 0x0($s1)
    MEM_B(0X0, ctx->r17) = 0;
    // 0x8029FB18: andi        $v0, $zero, 0xFF
    ctx->r2 = 0 & 0XFF;
L_8029FB1C:
    // 0x8029FB1C: sltiu       $at, $v0, 0x5
    ctx->r1 = ctx->r2 < 0X5 ? 1 : 0;
    // 0x8029FB20: beq         $at, $zero, L_8029FDD4
    if (ctx->r1 == 0) {
        // 0x8029FB24: sll         $t3, $v0, 2
        ctx->r11 = S32(ctx->r2 << 2);
            goto L_8029FDD4;
    }
    // 0x8029FB24: sll         $t3, $v0, 2
    ctx->r11 = S32(ctx->r2 << 2);
    // 0x8029FB28: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x8029FB2C: addu        $at, $at, $t3
    gpr jr_addend_8029FB38 = ctx->r11;
    ctx->r1 = ADD32(ctx->r1, ctx->r11);
    // 0x8029FB30: lw          $t3, 0xB2C($at)
    ctx->r11 = ADD32(ctx->r1, 0XB2C);
    // 0x8029FB34: nop

    // 0x8029FB38: jr          $t3
    // 0x8029FB3C: nop

    switch (jr_addend_8029FB38 >> 2) {
        case 0: goto L_8029FB40; break;
        case 1: goto L_8029FB6C; break;
        case 2: goto L_8029FB98; break;
        case 3: goto L_8029FBC4; break;
        case 4: goto L_8029FBF0; break;
        default: switch_error(__func__, 0x8029FB38, 0x802C0B2C);
    }
    // 0x8029FB3C: nop

L_8029FB40:
    // 0x8029FB40: jal         0x8028BAD0
    // 0x8029FB44: addiu       $a0, $zero, 0xA40
    ctx->r4 = ADD32(0, 0XA40);
    func_8028BAD0(rdram, ctx);
        goto after_0;
    // 0x8029FB44: addiu       $a0, $zero, 0xA40
    ctx->r4 = ADD32(0, 0XA40);
    after_0:
    // 0x8029FB48: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x8029FB4C: jal         0x8028BAD0
    // 0x8029FB50: addiu       $a0, $zero, 0xA38
    ctx->r4 = ADD32(0, 0XA38);
    func_8028BAD0(rdram, ctx);
        goto after_1;
    // 0x8029FB50: addiu       $a0, $zero, 0xA38
    ctx->r4 = ADD32(0, 0XA38);
    after_1:
    // 0x8029FB54: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8029FB58: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    // 0x8029FB5C: jal         0x80081670
    // 0x8029FB60: addiu       $a2, $zero, 0x300
    ctx->r6 = ADD32(0, 0X300);
    func_80081670(rdram, ctx);
        goto after_2;
    // 0x8029FB60: addiu       $a2, $zero, 0x300
    ctx->r6 = ADD32(0, 0X300);
    after_2:
    // 0x8029FB64: b           L_8029FDD8
    // 0x8029FB68: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_8029FDD8;
    // 0x8029FB68: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_8029FB6C:
    // 0x8029FB6C: jal         0x8028BAD0
    // 0x8029FB70: addiu       $a0, $zero, 0xA3A
    ctx->r4 = ADD32(0, 0XA3A);
    func_8028BAD0(rdram, ctx);
        goto after_3;
    // 0x8029FB70: addiu       $a0, $zero, 0xA3A
    ctx->r4 = ADD32(0, 0XA3A);
    after_3:
    // 0x8029FB74: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x8029FB78: jal         0x8028BAD0
    // 0x8029FB7C: addiu       $a0, $zero, 0xA38
    ctx->r4 = ADD32(0, 0XA38);
    func_8028BAD0(rdram, ctx);
        goto after_4;
    // 0x8029FB7C: addiu       $a0, $zero, 0xA38
    ctx->r4 = ADD32(0, 0XA38);
    after_4:
    // 0x8029FB80: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8029FB84: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    // 0x8029FB88: jal         0x80081670
    // 0x8029FB8C: addiu       $a2, $zero, 0x300
    ctx->r6 = ADD32(0, 0X300);
    func_80081670(rdram, ctx);
        goto after_5;
    // 0x8029FB8C: addiu       $a2, $zero, 0x300
    ctx->r6 = ADD32(0, 0X300);
    after_5:
    // 0x8029FB90: b           L_8029FDD8
    // 0x8029FB94: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_8029FDD8;
    // 0x8029FB94: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_8029FB98:
    // 0x8029FB98: jal         0x8028BAD0
    // 0x8029FB9C: addiu       $a0, $zero, 0xA3B
    ctx->r4 = ADD32(0, 0XA3B);
    func_8028BAD0(rdram, ctx);
        goto after_6;
    // 0x8029FB9C: addiu       $a0, $zero, 0xA3B
    ctx->r4 = ADD32(0, 0XA3B);
    after_6:
    // 0x8029FBA0: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x8029FBA4: jal         0x8028BAD0
    // 0x8029FBA8: addiu       $a0, $zero, 0xA38
    ctx->r4 = ADD32(0, 0XA38);
    func_8028BAD0(rdram, ctx);
        goto after_7;
    // 0x8029FBA8: addiu       $a0, $zero, 0xA38
    ctx->r4 = ADD32(0, 0XA38);
    after_7:
    // 0x8029FBAC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8029FBB0: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    // 0x8029FBB4: jal         0x80081670
    // 0x8029FBB8: addiu       $a2, $zero, 0x300
    ctx->r6 = ADD32(0, 0X300);
    func_80081670(rdram, ctx);
        goto after_8;
    // 0x8029FBB8: addiu       $a2, $zero, 0x300
    ctx->r6 = ADD32(0, 0X300);
    after_8:
    // 0x8029FBBC: b           L_8029FDD8
    // 0x8029FBC0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_8029FDD8;
    // 0x8029FBC0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_8029FBC4:
    // 0x8029FBC4: jal         0x8028BAD0
    // 0x8029FBC8: addiu       $a0, $zero, 0xA3C
    ctx->r4 = ADD32(0, 0XA3C);
    func_8028BAD0(rdram, ctx);
        goto after_9;
    // 0x8029FBC8: addiu       $a0, $zero, 0xA3C
    ctx->r4 = ADD32(0, 0XA3C);
    after_9:
    // 0x8029FBCC: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x8029FBD0: jal         0x8028BAD0
    // 0x8029FBD4: addiu       $a0, $zero, 0xA38
    ctx->r4 = ADD32(0, 0XA38);
    func_8028BAD0(rdram, ctx);
        goto after_10;
    // 0x8029FBD4: addiu       $a0, $zero, 0xA38
    ctx->r4 = ADD32(0, 0XA38);
    after_10:
    // 0x8029FBD8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8029FBDC: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    // 0x8029FBE0: jal         0x80081670
    // 0x8029FBE4: addiu       $a2, $zero, 0x300
    ctx->r6 = ADD32(0, 0X300);
    func_80081670(rdram, ctx);
        goto after_11;
    // 0x8029FBE4: addiu       $a2, $zero, 0x300
    ctx->r6 = ADD32(0, 0X300);
    after_11:
    // 0x8029FBE8: b           L_8029FDD8
    // 0x8029FBEC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_8029FDD8;
    // 0x8029FBEC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_8029FBF0:
    // 0x8029FBF0: jal         0x8028BAD0
    // 0x8029FBF4: addiu       $a0, $zero, 0xA3D
    ctx->r4 = ADD32(0, 0XA3D);
    func_8028BAD0(rdram, ctx);
        goto after_12;
    // 0x8029FBF4: addiu       $a0, $zero, 0xA3D
    ctx->r4 = ADD32(0, 0XA3D);
    after_12:
    // 0x8029FBF8: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x8029FBFC: jal         0x8028BAD0
    // 0x8029FC00: addiu       $a0, $zero, 0xA38
    ctx->r4 = ADD32(0, 0XA38);
    func_8028BAD0(rdram, ctx);
        goto after_13;
    // 0x8029FC00: addiu       $a0, $zero, 0xA38
    ctx->r4 = ADD32(0, 0XA38);
    after_13:
    // 0x8029FC04: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8029FC08: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    // 0x8029FC0C: jal         0x80081670
    // 0x8029FC10: addiu       $a2, $zero, 0x300
    ctx->r6 = ADD32(0, 0X300);
    func_80081670(rdram, ctx);
        goto after_14;
    // 0x8029FC10: addiu       $a2, $zero, 0x300
    ctx->r6 = ADD32(0, 0X300);
    after_14:
    // 0x8029FC14: lui         $v0, 0x802C
    ctx->r2 = S32(0X802C << 16);
    // 0x8029FC18: addiu       $v0, $v0, 0x3A37
    ctx->r2 = ADD32(ctx->r2, 0X3A37);
    // 0x8029FC1C: lbu         $t4, 0x0($v0)
    ctx->r12 = MEM_BU(ctx->r2, 0X0);
    // 0x8029FC20: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x8029FC24: addiu       $t5, $t4, 0x1
    ctx->r13 = ADD32(ctx->r12, 0X1);
    // 0x8029FC28: andi        $t6, $t5, 0xFF
    ctx->r14 = ctx->r13 & 0XFF;
    // 0x8029FC2C: slti        $at, $t6, 0x6
    ctx->r1 = SIGNED(ctx->r14) < 0X6 ? 1 : 0;
    // 0x8029FC30: bne         $at, $zero, L_8029FDD4
    if (ctx->r1 != 0) {
        // 0x8029FC34: sb          $t5, 0x0($v0)
        MEM_B(0X0, ctx->r2) = ctx->r13;
            goto L_8029FDD4;
    }
    // 0x8029FC34: sb          $t5, 0x0($v0)
    MEM_B(0X0, ctx->r2) = ctx->r13;
    // 0x8029FC38: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x8029FC3C: sb          $t7, 0x3A38($at)
    MEM_B(0X3A38, ctx->r1) = ctx->r15;
    // 0x8029FC40: sb          $zero, 0x0($v0)
    MEM_B(0X0, ctx->r2) = 0;
    // 0x8029FC44: b           L_8029FDD4
    // 0x8029FC48: sb          $zero, 0x0($s1)
    MEM_B(0X0, ctx->r17) = 0;
        goto L_8029FDD4;
    // 0x8029FC48: sb          $zero, 0x0($s1)
    MEM_B(0X0, ctx->r17) = 0;
L_8029FC4C:
    // 0x8029FC4C: lbu         $v0, 0x0($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X0);
    // 0x8029FC50: nop

    // 0x8029FC54: slti        $at, $v0, 0x6
    ctx->r1 = SIGNED(ctx->r2) < 0X6 ? 1 : 0;
    // 0x8029FC58: bne         $at, $zero, L_8029FC6C
    if (ctx->r1 != 0) {
        // 0x8029FC5C: sltiu       $at, $v0, 0x6
        ctx->r1 = ctx->r2 < 0X6 ? 1 : 0;
            goto L_8029FC6C;
    }
    // 0x8029FC5C: sltiu       $at, $v0, 0x6
    ctx->r1 = ctx->r2 < 0X6 ? 1 : 0;
    // 0x8029FC60: sb          $zero, 0x0($s1)
    MEM_B(0X0, ctx->r17) = 0;
    // 0x8029FC64: andi        $v0, $zero, 0xFF
    ctx->r2 = 0 & 0XFF;
    // 0x8029FC68: sltiu       $at, $v0, 0x6
    ctx->r1 = ctx->r2 < 0X6 ? 1 : 0;
L_8029FC6C:
    // 0x8029FC6C: beq         $at, $zero, L_8029FDD4
    if (ctx->r1 == 0) {
        // 0x8029FC70: sll         $t8, $v0, 2
        ctx->r24 = S32(ctx->r2 << 2);
            goto L_8029FDD4;
    }
    // 0x8029FC70: sll         $t8, $v0, 2
    ctx->r24 = S32(ctx->r2 << 2);
    // 0x8029FC74: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x8029FC78: addu        $at, $at, $t8
    gpr jr_addend_8029FC84 = ctx->r24;
    ctx->r1 = ADD32(ctx->r1, ctx->r24);
    // 0x8029FC7C: lw          $t8, 0xB40($at)
    ctx->r24 = ADD32(ctx->r1, 0XB40);
    // 0x8029FC80: nop

    // 0x8029FC84: jr          $t8
    // 0x8029FC88: nop

    switch (jr_addend_8029FC84 >> 2) {
        case 0: goto L_8029FC8C; break;
        case 1: goto L_8029FCC4; break;
        case 2: goto L_8029FCFC; break;
        case 3: goto L_8029FD34; break;
        case 4: goto L_8029FD6C; break;
        case 5: goto L_8029FDA4; break;
        default: switch_error(__func__, 0x8029FC84, 0x802C0B40);
    }
    // 0x8029FC88: nop

L_8029FC8C:
    // 0x8029FC8C: jal         0x8028BAD0
    // 0x8029FC90: addiu       $a0, $zero, 0xA3E
    ctx->r4 = ADD32(0, 0XA3E);
    func_8028BAD0(rdram, ctx);
        goto after_15;
    // 0x8029FC90: addiu       $a0, $zero, 0xA3E
    ctx->r4 = ADD32(0, 0XA3E);
    after_15:
    // 0x8029FC94: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x8029FC98: jal         0x8028BAD0
    // 0x8029FC9C: addiu       $a0, $zero, 0xA38
    ctx->r4 = ADD32(0, 0XA38);
    func_8028BAD0(rdram, ctx);
        goto after_16;
    // 0x8029FC9C: addiu       $a0, $zero, 0xA38
    ctx->r4 = ADD32(0, 0XA38);
    after_16:
    // 0x8029FCA0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8029FCA4: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    // 0x8029FCA8: jal         0x80081670
    // 0x8029FCAC: addiu       $a2, $zero, 0x300
    ctx->r6 = ADD32(0, 0X300);
    func_80081670(rdram, ctx);
        goto after_17;
    // 0x8029FCAC: addiu       $a2, $zero, 0x300
    ctx->r6 = ADD32(0, 0X300);
    after_17:
    // 0x8029FCB0: lbu         $t9, 0x0($s1)
    ctx->r25 = MEM_BU(ctx->r17, 0X0);
    // 0x8029FCB4: nop

    // 0x8029FCB8: addiu       $t0, $t9, 0x1
    ctx->r8 = ADD32(ctx->r25, 0X1);
    // 0x8029FCBC: b           L_8029FDD4
    // 0x8029FCC0: sb          $t0, 0x0($s1)
    MEM_B(0X0, ctx->r17) = ctx->r8;
        goto L_8029FDD4;
    // 0x8029FCC0: sb          $t0, 0x0($s1)
    MEM_B(0X0, ctx->r17) = ctx->r8;
L_8029FCC4:
    // 0x8029FCC4: jal         0x8028BAD0
    // 0x8029FCC8: addiu       $a0, $zero, 0xA3F
    ctx->r4 = ADD32(0, 0XA3F);
    func_8028BAD0(rdram, ctx);
        goto after_18;
    // 0x8029FCC8: addiu       $a0, $zero, 0xA3F
    ctx->r4 = ADD32(0, 0XA3F);
    after_18:
    // 0x8029FCCC: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x8029FCD0: jal         0x8028BAD0
    // 0x8029FCD4: addiu       $a0, $zero, 0xA38
    ctx->r4 = ADD32(0, 0XA38);
    func_8028BAD0(rdram, ctx);
        goto after_19;
    // 0x8029FCD4: addiu       $a0, $zero, 0xA38
    ctx->r4 = ADD32(0, 0XA38);
    after_19:
    // 0x8029FCD8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8029FCDC: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    // 0x8029FCE0: jal         0x80081670
    // 0x8029FCE4: addiu       $a2, $zero, 0x300
    ctx->r6 = ADD32(0, 0X300);
    func_80081670(rdram, ctx);
        goto after_20;
    // 0x8029FCE4: addiu       $a2, $zero, 0x300
    ctx->r6 = ADD32(0, 0X300);
    after_20:
    // 0x8029FCE8: lbu         $t1, 0x0($s1)
    ctx->r9 = MEM_BU(ctx->r17, 0X0);
    // 0x8029FCEC: nop

    // 0x8029FCF0: addiu       $t2, $t1, 0x1
    ctx->r10 = ADD32(ctx->r9, 0X1);
    // 0x8029FCF4: b           L_8029FDD4
    // 0x8029FCF8: sb          $t2, 0x0($s1)
    MEM_B(0X0, ctx->r17) = ctx->r10;
        goto L_8029FDD4;
    // 0x8029FCF8: sb          $t2, 0x0($s1)
    MEM_B(0X0, ctx->r17) = ctx->r10;
L_8029FCFC:
    // 0x8029FCFC: jal         0x8028BAD0
    // 0x8029FD00: addiu       $a0, $zero, 0xA3F
    ctx->r4 = ADD32(0, 0XA3F);
    func_8028BAD0(rdram, ctx);
        goto after_21;
    // 0x8029FD00: addiu       $a0, $zero, 0xA3F
    ctx->r4 = ADD32(0, 0XA3F);
    after_21:
    // 0x8029FD04: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x8029FD08: jal         0x8028BAD0
    // 0x8029FD0C: addiu       $a0, $zero, 0xA38
    ctx->r4 = ADD32(0, 0XA38);
    func_8028BAD0(rdram, ctx);
        goto after_22;
    // 0x8029FD0C: addiu       $a0, $zero, 0xA38
    ctx->r4 = ADD32(0, 0XA38);
    after_22:
    // 0x8029FD10: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8029FD14: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    // 0x8029FD18: jal         0x80081670
    // 0x8029FD1C: addiu       $a2, $zero, 0x300
    ctx->r6 = ADD32(0, 0X300);
    func_80081670(rdram, ctx);
        goto after_23;
    // 0x8029FD1C: addiu       $a2, $zero, 0x300
    ctx->r6 = ADD32(0, 0X300);
    after_23:
    // 0x8029FD20: lbu         $t3, 0x0($s1)
    ctx->r11 = MEM_BU(ctx->r17, 0X0);
    // 0x8029FD24: nop

    // 0x8029FD28: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x8029FD2C: b           L_8029FDD4
    // 0x8029FD30: sb          $t4, 0x0($s1)
    MEM_B(0X0, ctx->r17) = ctx->r12;
        goto L_8029FDD4;
    // 0x8029FD30: sb          $t4, 0x0($s1)
    MEM_B(0X0, ctx->r17) = ctx->r12;
L_8029FD34:
    // 0x8029FD34: jal         0x8028BAD0
    // 0x8029FD38: addiu       $a0, $zero, 0xA3F
    ctx->r4 = ADD32(0, 0XA3F);
    func_8028BAD0(rdram, ctx);
        goto after_24;
    // 0x8029FD38: addiu       $a0, $zero, 0xA3F
    ctx->r4 = ADD32(0, 0XA3F);
    after_24:
    // 0x8029FD3C: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x8029FD40: jal         0x8028BAD0
    // 0x8029FD44: addiu       $a0, $zero, 0xA38
    ctx->r4 = ADD32(0, 0XA38);
    func_8028BAD0(rdram, ctx);
        goto after_25;
    // 0x8029FD44: addiu       $a0, $zero, 0xA38
    ctx->r4 = ADD32(0, 0XA38);
    after_25:
    // 0x8029FD48: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8029FD4C: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    // 0x8029FD50: jal         0x80081670
    // 0x8029FD54: addiu       $a2, $zero, 0x300
    ctx->r6 = ADD32(0, 0X300);
    func_80081670(rdram, ctx);
        goto after_26;
    // 0x8029FD54: addiu       $a2, $zero, 0x300
    ctx->r6 = ADD32(0, 0X300);
    after_26:
    // 0x8029FD58: lbu         $t5, 0x0($s1)
    ctx->r13 = MEM_BU(ctx->r17, 0X0);
    // 0x8029FD5C: nop

    // 0x8029FD60: addiu       $t6, $t5, 0x1
    ctx->r14 = ADD32(ctx->r13, 0X1);
    // 0x8029FD64: b           L_8029FDD4
    // 0x8029FD68: sb          $t6, 0x0($s1)
    MEM_B(0X0, ctx->r17) = ctx->r14;
        goto L_8029FDD4;
    // 0x8029FD68: sb          $t6, 0x0($s1)
    MEM_B(0X0, ctx->r17) = ctx->r14;
L_8029FD6C:
    // 0x8029FD6C: jal         0x8028BAD0
    // 0x8029FD70: addiu       $a0, $zero, 0xA3E
    ctx->r4 = ADD32(0, 0XA3E);
    func_8028BAD0(rdram, ctx);
        goto after_27;
    // 0x8029FD70: addiu       $a0, $zero, 0xA3E
    ctx->r4 = ADD32(0, 0XA3E);
    after_27:
    // 0x8029FD74: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x8029FD78: jal         0x8028BAD0
    // 0x8029FD7C: addiu       $a0, $zero, 0xA38
    ctx->r4 = ADD32(0, 0XA38);
    func_8028BAD0(rdram, ctx);
        goto after_28;
    // 0x8029FD7C: addiu       $a0, $zero, 0xA38
    ctx->r4 = ADD32(0, 0XA38);
    after_28:
    // 0x8029FD80: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8029FD84: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    // 0x8029FD88: jal         0x80081670
    // 0x8029FD8C: addiu       $a2, $zero, 0x300
    ctx->r6 = ADD32(0, 0X300);
    func_80081670(rdram, ctx);
        goto after_29;
    // 0x8029FD8C: addiu       $a2, $zero, 0x300
    ctx->r6 = ADD32(0, 0X300);
    after_29:
    // 0x8029FD90: lbu         $t7, 0x0($s1)
    ctx->r15 = MEM_BU(ctx->r17, 0X0);
    // 0x8029FD94: nop

    // 0x8029FD98: addiu       $t8, $t7, 0x1
    ctx->r24 = ADD32(ctx->r15, 0X1);
    // 0x8029FD9C: b           L_8029FDD4
    // 0x8029FDA0: sb          $t8, 0x0($s1)
    MEM_B(0X0, ctx->r17) = ctx->r24;
        goto L_8029FDD4;
    // 0x8029FDA0: sb          $t8, 0x0($s1)
    MEM_B(0X0, ctx->r17) = ctx->r24;
L_8029FDA4:
    // 0x8029FDA4: jal         0x8028BAD0
    // 0x8029FDA8: addiu       $a0, $zero, 0xA3D
    ctx->r4 = ADD32(0, 0XA3D);
    func_8028BAD0(rdram, ctx);
        goto after_30;
    // 0x8029FDA8: addiu       $a0, $zero, 0xA3D
    ctx->r4 = ADD32(0, 0XA3D);
    after_30:
    // 0x8029FDAC: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x8029FDB0: jal         0x8028BAD0
    // 0x8029FDB4: addiu       $a0, $zero, 0xA38
    ctx->r4 = ADD32(0, 0XA38);
    func_8028BAD0(rdram, ctx);
        goto after_31;
    // 0x8029FDB4: addiu       $a0, $zero, 0xA38
    ctx->r4 = ADD32(0, 0XA38);
    after_31:
    // 0x8029FDB8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8029FDBC: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    // 0x8029FDC0: jal         0x80081670
    // 0x8029FDC4: addiu       $a2, $zero, 0x300
    ctx->r6 = ADD32(0, 0X300);
    func_80081670(rdram, ctx);
        goto after_32;
    // 0x8029FDC4: addiu       $a2, $zero, 0x300
    ctx->r6 = ADD32(0, 0X300);
    after_32:
    // 0x8029FDC8: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x8029FDCC: sb          $zero, 0x3A38($at)
    MEM_B(0X3A38, ctx->r1) = 0;
    // 0x8029FDD0: sb          $zero, 0x0($s1)
    MEM_B(0X0, ctx->r17) = 0;
L_8029FDD4:
    // 0x8029FDD4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_8029FDD8:
    // 0x8029FDD8: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x8029FDDC: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x8029FDE0: jr          $ra
    // 0x8029FDE4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x8029FDE4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_8029FDE8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8029FDE8: lui         $v0, 0x802C
    ctx->r2 = S32(0X802C << 16);
    // 0x8029FDEC: addiu       $v0, $v0, 0x3A34
    ctx->r2 = ADD32(ctx->r2, 0X3A34);
    // 0x8029FDF0: lbu         $t6, 0x0($v0)
    ctx->r14 = MEM_BU(ctx->r2, 0X0);
    // 0x8029FDF4: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8029FDF8: addiu       $t7, $t6, -0x1
    ctx->r15 = ADD32(ctx->r14, -0X1);
    // 0x8029FDFC: andi        $t8, $t7, 0xFF
    ctx->r24 = ctx->r15 & 0XFF;
    // 0x8029FE00: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8029FE04: bne         $t8, $zero, L_802A005C
    if (ctx->r24 != 0) {
        // 0x8029FE08: sb          $t7, 0x0($v0)
        MEM_B(0X0, ctx->r2) = ctx->r15;
            goto L_802A005C;
    }
    // 0x8029FE08: sb          $t7, 0x0($v0)
    MEM_B(0X0, ctx->r2) = ctx->r15;
    // 0x8029FE0C: lui         $t9, 0x8012
    ctx->r25 = S32(0X8012 << 16);
    // 0x8029FE10: lhu         $t9, 0xB78($t9)
    ctx->r25 = MEM_HU(ctx->r25, 0XB78);
    // 0x8029FE14: addiu       $at, $zero, 0x9
    ctx->r1 = ADD32(0, 0X9);
    // 0x8029FE18: bne         $t9, $at, L_8029FE2C
    if (ctx->r25 != ctx->r1) {
        // 0x8029FE1C: addiu       $t1, $zero, 0x5
        ctx->r9 = ADD32(0, 0X5);
            goto L_8029FE2C;
    }
    // 0x8029FE1C: addiu       $t1, $zero, 0x5
    ctx->r9 = ADD32(0, 0X5);
    // 0x8029FE20: addiu       $t0, $zero, 0x2
    ctx->r8 = ADD32(0, 0X2);
    // 0x8029FE24: b           L_8029FE30
    // 0x8029FE28: sb          $t0, 0x0($v0)
    MEM_B(0X0, ctx->r2) = ctx->r8;
        goto L_8029FE30;
    // 0x8029FE28: sb          $t0, 0x0($v0)
    MEM_B(0X0, ctx->r2) = ctx->r8;
L_8029FE2C:
    // 0x8029FE2C: sb          $t1, 0x0($v0)
    MEM_B(0X0, ctx->r2) = ctx->r9;
L_8029FE30:
    // 0x8029FE30: lui         $v0, 0x802C
    ctx->r2 = S32(0X802C << 16);
    // 0x8029FE34: addiu       $v0, $v0, 0x3A33
    ctx->r2 = ADD32(ctx->r2, 0X3A33);
    // 0x8029FE38: lbu         $t2, 0x0($v0)
    ctx->r10 = MEM_BU(ctx->r2, 0X0);
    // 0x8029FE3C: nop

    // 0x8029FE40: addiu       $t3, $t2, 0x1
    ctx->r11 = ADD32(ctx->r10, 0X1);
    // 0x8029FE44: andi        $v1, $t3, 0xFF
    ctx->r3 = ctx->r11 & 0XFF;
    // 0x8029FE48: slti        $at, $v1, 0x4
    ctx->r1 = SIGNED(ctx->r3) < 0X4 ? 1 : 0;
    // 0x8029FE4C: bne         $at, $zero, L_8029FE5C
    if (ctx->r1 != 0) {
        // 0x8029FE50: sb          $t3, 0x0($v0)
        MEM_B(0X0, ctx->r2) = ctx->r11;
            goto L_8029FE5C;
    }
    // 0x8029FE50: sb          $t3, 0x0($v0)
    MEM_B(0X0, ctx->r2) = ctx->r11;
    // 0x8029FE54: sb          $zero, 0x0($v0)
    MEM_B(0X0, ctx->r2) = 0;
    // 0x8029FE58: andi        $v1, $zero, 0xFF
    ctx->r3 = 0 & 0XFF;
L_8029FE5C:
    // 0x8029FE5C: beq         $v1, $zero, L_8029FE84
    if (ctx->r3 == 0) {
        // 0x8029FE60: addiu       $at, $zero, 0x1
        ctx->r1 = ADD32(0, 0X1);
            goto L_8029FE84;
    }
    // 0x8029FE60: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8029FE64: beq         $v1, $at, L_8029FEFC
    if (ctx->r3 == ctx->r1) {
        // 0x8029FE68: addiu       $at, $zero, 0x2
        ctx->r1 = ADD32(0, 0X2);
            goto L_8029FEFC;
    }
    // 0x8029FE68: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x8029FE6C: beq         $v1, $at, L_8029FF74
    if (ctx->r3 == ctx->r1) {
        // 0x8029FE70: addiu       $at, $zero, 0x3
        ctx->r1 = ADD32(0, 0X3);
            goto L_8029FF74;
    }
    // 0x8029FE70: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x8029FE74: beq         $v1, $at, L_8029FFEC
    if (ctx->r3 == ctx->r1) {
        // 0x8029FE78: nop
    
            goto L_8029FFEC;
    }
    // 0x8029FE78: nop

    // 0x8029FE7C: b           L_802A0060
    // 0x8029FE80: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_802A0060;
    // 0x8029FE80: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8029FE84:
    // 0x8029FE84: jal         0x8028BAD0
    // 0x8029FE88: addiu       $a0, $zero, 0xA2C
    ctx->r4 = ADD32(0, 0XA2C);
    func_8028BAD0(rdram, ctx);
        goto after_0;
    // 0x8029FE88: addiu       $a0, $zero, 0xA2C
    ctx->r4 = ADD32(0, 0XA2C);
    after_0:
    // 0x8029FE8C: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    // 0x8029FE90: jal         0x8028BAD0
    // 0x8029FE94: addiu       $a0, $zero, 0xA2A
    ctx->r4 = ADD32(0, 0XA2A);
    func_8028BAD0(rdram, ctx);
        goto after_1;
    // 0x8029FE94: addiu       $a0, $zero, 0xA2A
    ctx->r4 = ADD32(0, 0XA2A);
    after_1:
    // 0x8029FE98: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    // 0x8029FE9C: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    // 0x8029FEA0: jal         0x80081670
    // 0x8029FEA4: addiu       $a2, $zero, 0x800
    ctx->r6 = ADD32(0, 0X800);
    func_80081670(rdram, ctx);
        goto after_2;
    // 0x8029FEA4: addiu       $a2, $zero, 0x800
    ctx->r6 = ADD32(0, 0X800);
    after_2:
    // 0x8029FEA8: jal         0x8028BAD0
    // 0x8029FEAC: addiu       $a0, $zero, 0xA2A
    ctx->r4 = ADD32(0, 0XA2A);
    func_8028BAD0(rdram, ctx);
        goto after_3;
    // 0x8029FEAC: addiu       $a0, $zero, 0xA2A
    ctx->r4 = ADD32(0, 0XA2A);
    after_3:
    // 0x8029FEB0: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x8029FEB4: jal         0x80081980
    // 0x8029FEB8: addiu       $a1, $zero, 0x800
    ctx->r5 = ADD32(0, 0X800);
    func_80081980(rdram, ctx);
        goto after_4;
    // 0x8029FEB8: addiu       $a1, $zero, 0x800
    ctx->r5 = ADD32(0, 0X800);
    after_4:
    // 0x8029FEBC: jal         0x8028BAD0
    // 0x8029FEC0: addiu       $a0, $zero, 0xA2F
    ctx->r4 = ADD32(0, 0XA2F);
    func_8028BAD0(rdram, ctx);
        goto after_5;
    // 0x8029FEC0: addiu       $a0, $zero, 0xA2F
    ctx->r4 = ADD32(0, 0XA2F);
    after_5:
    // 0x8029FEC4: sw          $v0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r2;
    // 0x8029FEC8: jal         0x8028BAD0
    // 0x8029FECC: addiu       $a0, $zero, 0xA2B
    ctx->r4 = ADD32(0, 0XA2B);
    func_8028BAD0(rdram, ctx);
        goto after_6;
    // 0x8029FECC: addiu       $a0, $zero, 0xA2B
    ctx->r4 = ADD32(0, 0XA2B);
    after_6:
    // 0x8029FED0: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x8029FED4: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    // 0x8029FED8: jal         0x80081670
    // 0x8029FEDC: addiu       $a2, $zero, 0x800
    ctx->r6 = ADD32(0, 0X800);
    func_80081670(rdram, ctx);
        goto after_7;
    // 0x8029FEDC: addiu       $a2, $zero, 0x800
    ctx->r6 = ADD32(0, 0X800);
    after_7:
    // 0x8029FEE0: jal         0x8028BAD0
    // 0x8029FEE4: addiu       $a0, $zero, 0xA2B
    ctx->r4 = ADD32(0, 0XA2B);
    func_8028BAD0(rdram, ctx);
        goto after_8;
    // 0x8029FEE4: addiu       $a0, $zero, 0xA2B
    ctx->r4 = ADD32(0, 0XA2B);
    after_8:
    // 0x8029FEE8: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x8029FEEC: jal         0x80081980
    // 0x8029FEF0: addiu       $a1, $zero, 0x800
    ctx->r5 = ADD32(0, 0X800);
    func_80081980(rdram, ctx);
        goto after_9;
    // 0x8029FEF0: addiu       $a1, $zero, 0x800
    ctx->r5 = ADD32(0, 0X800);
    after_9:
    // 0x8029FEF4: b           L_802A0060
    // 0x8029FEF8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_802A0060;
    // 0x8029FEF8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8029FEFC:
    // 0x8029FEFC: jal         0x8028BAD0
    // 0x8029FF00: addiu       $a0, $zero, 0xA2D
    ctx->r4 = ADD32(0, 0XA2D);
    func_8028BAD0(rdram, ctx);
        goto after_10;
    // 0x8029FF00: addiu       $a0, $zero, 0xA2D
    ctx->r4 = ADD32(0, 0XA2D);
    after_10:
    // 0x8029FF04: sw          $v0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r2;
    // 0x8029FF08: jal         0x8028BAD0
    // 0x8029FF0C: addiu       $a0, $zero, 0xA2A
    ctx->r4 = ADD32(0, 0XA2A);
    func_8028BAD0(rdram, ctx);
        goto after_11;
    // 0x8029FF0C: addiu       $a0, $zero, 0xA2A
    ctx->r4 = ADD32(0, 0XA2A);
    after_11:
    // 0x8029FF10: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x8029FF14: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    // 0x8029FF18: jal         0x80081670
    // 0x8029FF1C: addiu       $a2, $zero, 0x800
    ctx->r6 = ADD32(0, 0X800);
    func_80081670(rdram, ctx);
        goto after_12;
    // 0x8029FF1C: addiu       $a2, $zero, 0x800
    ctx->r6 = ADD32(0, 0X800);
    after_12:
    // 0x8029FF20: jal         0x8028BAD0
    // 0x8029FF24: addiu       $a0, $zero, 0xA2A
    ctx->r4 = ADD32(0, 0XA2A);
    func_8028BAD0(rdram, ctx);
        goto after_13;
    // 0x8029FF24: addiu       $a0, $zero, 0xA2A
    ctx->r4 = ADD32(0, 0XA2A);
    after_13:
    // 0x8029FF28: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x8029FF2C: jal         0x80081980
    // 0x8029FF30: addiu       $a1, $zero, 0x800
    ctx->r5 = ADD32(0, 0X800);
    func_80081980(rdram, ctx);
        goto after_14;
    // 0x8029FF30: addiu       $a1, $zero, 0x800
    ctx->r5 = ADD32(0, 0X800);
    after_14:
    // 0x8029FF34: jal         0x8028BAD0
    // 0x8029FF38: addiu       $a0, $zero, 0xA30
    ctx->r4 = ADD32(0, 0XA30);
    func_8028BAD0(rdram, ctx);
        goto after_15;
    // 0x8029FF38: addiu       $a0, $zero, 0xA30
    ctx->r4 = ADD32(0, 0XA30);
    after_15:
    // 0x8029FF3C: sw          $v0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r2;
    // 0x8029FF40: jal         0x8028BAD0
    // 0x8029FF44: addiu       $a0, $zero, 0xA2B
    ctx->r4 = ADD32(0, 0XA2B);
    func_8028BAD0(rdram, ctx);
        goto after_16;
    // 0x8029FF44: addiu       $a0, $zero, 0xA2B
    ctx->r4 = ADD32(0, 0XA2B);
    after_16:
    // 0x8029FF48: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x8029FF4C: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    // 0x8029FF50: jal         0x80081670
    // 0x8029FF54: addiu       $a2, $zero, 0x800
    ctx->r6 = ADD32(0, 0X800);
    func_80081670(rdram, ctx);
        goto after_17;
    // 0x8029FF54: addiu       $a2, $zero, 0x800
    ctx->r6 = ADD32(0, 0X800);
    after_17:
    // 0x8029FF58: jal         0x8028BAD0
    // 0x8029FF5C: addiu       $a0, $zero, 0xA2B
    ctx->r4 = ADD32(0, 0XA2B);
    func_8028BAD0(rdram, ctx);
        goto after_18;
    // 0x8029FF5C: addiu       $a0, $zero, 0xA2B
    ctx->r4 = ADD32(0, 0XA2B);
    after_18:
    // 0x8029FF60: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x8029FF64: jal         0x80081980
    // 0x8029FF68: addiu       $a1, $zero, 0x800
    ctx->r5 = ADD32(0, 0X800);
    func_80081980(rdram, ctx);
        goto after_19;
    // 0x8029FF68: addiu       $a1, $zero, 0x800
    ctx->r5 = ADD32(0, 0X800);
    after_19:
    // 0x8029FF6C: b           L_802A0060
    // 0x8029FF70: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_802A0060;
    // 0x8029FF70: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8029FF74:
    // 0x8029FF74: jal         0x8028BAD0
    // 0x8029FF78: addiu       $a0, $zero, 0xA2E
    ctx->r4 = ADD32(0, 0XA2E);
    func_8028BAD0(rdram, ctx);
        goto after_20;
    // 0x8029FF78: addiu       $a0, $zero, 0xA2E
    ctx->r4 = ADD32(0, 0XA2E);
    after_20:
    // 0x8029FF7C: sw          $v0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r2;
    // 0x8029FF80: jal         0x8028BAD0
    // 0x8029FF84: addiu       $a0, $zero, 0xA2A
    ctx->r4 = ADD32(0, 0XA2A);
    func_8028BAD0(rdram, ctx);
        goto after_21;
    // 0x8029FF84: addiu       $a0, $zero, 0xA2A
    ctx->r4 = ADD32(0, 0XA2A);
    after_21:
    // 0x8029FF88: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x8029FF8C: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    // 0x8029FF90: jal         0x80081670
    // 0x8029FF94: addiu       $a2, $zero, 0x800
    ctx->r6 = ADD32(0, 0X800);
    func_80081670(rdram, ctx);
        goto after_22;
    // 0x8029FF94: addiu       $a2, $zero, 0x800
    ctx->r6 = ADD32(0, 0X800);
    after_22:
    // 0x8029FF98: jal         0x8028BAD0
    // 0x8029FF9C: addiu       $a0, $zero, 0xA2A
    ctx->r4 = ADD32(0, 0XA2A);
    func_8028BAD0(rdram, ctx);
        goto after_23;
    // 0x8029FF9C: addiu       $a0, $zero, 0xA2A
    ctx->r4 = ADD32(0, 0XA2A);
    after_23:
    // 0x8029FFA0: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x8029FFA4: jal         0x80081980
    // 0x8029FFA8: addiu       $a1, $zero, 0x800
    ctx->r5 = ADD32(0, 0X800);
    func_80081980(rdram, ctx);
        goto after_24;
    // 0x8029FFA8: addiu       $a1, $zero, 0x800
    ctx->r5 = ADD32(0, 0X800);
    after_24:
    // 0x8029FFAC: jal         0x8028BAD0
    // 0x8029FFB0: addiu       $a0, $zero, 0xA31
    ctx->r4 = ADD32(0, 0XA31);
    func_8028BAD0(rdram, ctx);
        goto after_25;
    // 0x8029FFB0: addiu       $a0, $zero, 0xA31
    ctx->r4 = ADD32(0, 0XA31);
    after_25:
    // 0x8029FFB4: sw          $v0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r2;
    // 0x8029FFB8: jal         0x8028BAD0
    // 0x8029FFBC: addiu       $a0, $zero, 0xA2B
    ctx->r4 = ADD32(0, 0XA2B);
    func_8028BAD0(rdram, ctx);
        goto after_26;
    // 0x8029FFBC: addiu       $a0, $zero, 0xA2B
    ctx->r4 = ADD32(0, 0XA2B);
    after_26:
    // 0x8029FFC0: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x8029FFC4: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    // 0x8029FFC8: jal         0x80081670
    // 0x8029FFCC: addiu       $a2, $zero, 0x800
    ctx->r6 = ADD32(0, 0X800);
    func_80081670(rdram, ctx);
        goto after_27;
    // 0x8029FFCC: addiu       $a2, $zero, 0x800
    ctx->r6 = ADD32(0, 0X800);
    after_27:
    // 0x8029FFD0: jal         0x8028BAD0
    // 0x8029FFD4: addiu       $a0, $zero, 0xA2B
    ctx->r4 = ADD32(0, 0XA2B);
    func_8028BAD0(rdram, ctx);
        goto after_28;
    // 0x8029FFD4: addiu       $a0, $zero, 0xA2B
    ctx->r4 = ADD32(0, 0XA2B);
    after_28:
    // 0x8029FFD8: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x8029FFDC: jal         0x80081980
    // 0x8029FFE0: addiu       $a1, $zero, 0x800
    ctx->r5 = ADD32(0, 0X800);
    func_80081980(rdram, ctx);
        goto after_29;
    // 0x8029FFE0: addiu       $a1, $zero, 0x800
    ctx->r5 = ADD32(0, 0X800);
    after_29:
    // 0x8029FFE4: b           L_802A0060
    // 0x8029FFE8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_802A0060;
    // 0x8029FFE8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8029FFEC:
    // 0x8029FFEC: jal         0x8028BAD0
    // 0x8029FFF0: addiu       $a0, $zero, 0xA2D
    ctx->r4 = ADD32(0, 0XA2D);
    func_8028BAD0(rdram, ctx);
        goto after_30;
    // 0x8029FFF0: addiu       $a0, $zero, 0xA2D
    ctx->r4 = ADD32(0, 0XA2D);
    after_30:
    // 0x8029FFF4: sw          $v0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r2;
    // 0x8029FFF8: jal         0x8028BAD0
    // 0x8029FFFC: addiu       $a0, $zero, 0xA2A
    ctx->r4 = ADD32(0, 0XA2A);
    func_8028BAD0(rdram, ctx);
        goto after_31;
    // 0x8029FFFC: addiu       $a0, $zero, 0xA2A
    ctx->r4 = ADD32(0, 0XA2A);
    after_31:
    // 0x802A0000: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x802A0004: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    // 0x802A0008: jal         0x80081670
    // 0x802A000C: addiu       $a2, $zero, 0x800
    ctx->r6 = ADD32(0, 0X800);
    func_80081670(rdram, ctx);
        goto after_32;
    // 0x802A000C: addiu       $a2, $zero, 0x800
    ctx->r6 = ADD32(0, 0X800);
    after_32:
    // 0x802A0010: jal         0x8028BAD0
    // 0x802A0014: addiu       $a0, $zero, 0xA2A
    ctx->r4 = ADD32(0, 0XA2A);
    func_8028BAD0(rdram, ctx);
        goto after_33;
    // 0x802A0014: addiu       $a0, $zero, 0xA2A
    ctx->r4 = ADD32(0, 0XA2A);
    after_33:
    // 0x802A0018: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x802A001C: jal         0x80081980
    // 0x802A0020: addiu       $a1, $zero, 0x800
    ctx->r5 = ADD32(0, 0X800);
    func_80081980(rdram, ctx);
        goto after_34;
    // 0x802A0020: addiu       $a1, $zero, 0x800
    ctx->r5 = ADD32(0, 0X800);
    after_34:
    // 0x802A0024: jal         0x8028BAD0
    // 0x802A0028: addiu       $a0, $zero, 0xA30
    ctx->r4 = ADD32(0, 0XA30);
    func_8028BAD0(rdram, ctx);
        goto after_35;
    // 0x802A0028: addiu       $a0, $zero, 0xA30
    ctx->r4 = ADD32(0, 0XA30);
    after_35:
    // 0x802A002C: sw          $v0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r2;
    // 0x802A0030: jal         0x8028BAD0
    // 0x802A0034: addiu       $a0, $zero, 0xA2B
    ctx->r4 = ADD32(0, 0XA2B);
    func_8028BAD0(rdram, ctx);
        goto after_36;
    // 0x802A0034: addiu       $a0, $zero, 0xA2B
    ctx->r4 = ADD32(0, 0XA2B);
    after_36:
    // 0x802A0038: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x802A003C: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    // 0x802A0040: jal         0x80081670
    // 0x802A0044: addiu       $a2, $zero, 0x800
    ctx->r6 = ADD32(0, 0X800);
    func_80081670(rdram, ctx);
        goto after_37;
    // 0x802A0044: addiu       $a2, $zero, 0x800
    ctx->r6 = ADD32(0, 0X800);
    after_37:
    // 0x802A0048: jal         0x8028BAD0
    // 0x802A004C: addiu       $a0, $zero, 0xA2B
    ctx->r4 = ADD32(0, 0XA2B);
    func_8028BAD0(rdram, ctx);
        goto after_38;
    // 0x802A004C: addiu       $a0, $zero, 0xA2B
    ctx->r4 = ADD32(0, 0XA2B);
    after_38:
    // 0x802A0050: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x802A0054: jal         0x80081980
    // 0x802A0058: addiu       $a1, $zero, 0x800
    ctx->r5 = ADD32(0, 0X800);
    func_80081980(rdram, ctx);
        goto after_39;
    // 0x802A0058: addiu       $a1, $zero, 0x800
    ctx->r5 = ADD32(0, 0X800);
    after_39:
L_802A005C:
    // 0x802A005C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_802A0060:
    // 0x802A0060: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x802A0064: jr          $ra
    // 0x802A0068: nop

    return;
    // 0x802A0068: nop

;}
RECOMP_FUNC void func_802A006C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802A006C: lui         $v0, 0x802C
    ctx->r2 = S32(0X802C << 16);
    // 0x802A0070: addiu       $v0, $v0, 0x39F5
    ctx->r2 = ADD32(ctx->r2, 0X39F5);
    // 0x802A0074: lbu         $t6, 0x0($v0)
    ctx->r14 = MEM_BU(ctx->r2, 0X0);
    // 0x802A0078: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x802A007C: addiu       $t7, $t6, -0x1
    ctx->r15 = ADD32(ctx->r14, -0X1);
    // 0x802A0080: andi        $t8, $t7, 0xFF
    ctx->r24 = ctx->r15 & 0XFF;
    // 0x802A0084: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802A0088: bne         $t8, $zero, L_802A0338
    if (ctx->r24 != 0) {
        // 0x802A008C: sb          $t7, 0x0($v0)
        MEM_B(0X0, ctx->r2) = ctx->r15;
            goto L_802A0338;
    }
    // 0x802A008C: sb          $t7, 0x0($v0)
    MEM_B(0X0, ctx->r2) = ctx->r15;
    // 0x802A0090: lui         $t9, 0x8012
    ctx->r25 = S32(0X8012 << 16);
    // 0x802A0094: lhu         $t9, 0xB78($t9)
    ctx->r25 = MEM_HU(ctx->r25, 0XB78);
    // 0x802A0098: addiu       $at, $zero, 0x9
    ctx->r1 = ADD32(0, 0X9);
    // 0x802A009C: bne         $t9, $at, L_802A00AC
    if (ctx->r25 != ctx->r1) {
        // 0x802A00A0: addiu       $t0, $zero, 0x2
        ctx->r8 = ADD32(0, 0X2);
            goto L_802A00AC;
    }
    // 0x802A00A0: addiu       $t0, $zero, 0x2
    ctx->r8 = ADD32(0, 0X2);
    // 0x802A00A4: b           L_802A00B4
    // 0x802A00A8: sb          $t0, 0x0($v0)
    MEM_B(0X0, ctx->r2) = ctx->r8;
        goto L_802A00B4;
    // 0x802A00A8: sb          $t0, 0x0($v0)
    MEM_B(0X0, ctx->r2) = ctx->r8;
L_802A00AC:
    // 0x802A00AC: addiu       $t1, $zero, 0x5
    ctx->r9 = ADD32(0, 0X5);
    // 0x802A00B0: sb          $t1, 0x0($v0)
    MEM_B(0X0, ctx->r2) = ctx->r9;
L_802A00B4:
    // 0x802A00B4: lui         $v0, 0x802C
    ctx->r2 = S32(0X802C << 16);
    // 0x802A00B8: addiu       $v0, $v0, 0x39F6
    ctx->r2 = ADD32(ctx->r2, 0X39F6);
    // 0x802A00BC: lbu         $t2, 0x0($v0)
    ctx->r10 = MEM_BU(ctx->r2, 0X0);
    // 0x802A00C0: nop

    // 0x802A00C4: addiu       $t3, $t2, 0x1
    ctx->r11 = ADD32(ctx->r10, 0X1);
    // 0x802A00C8: andi        $a1, $t3, 0xFF
    ctx->r5 = ctx->r11 & 0XFF;
    // 0x802A00CC: slti        $at, $a1, 0x8
    ctx->r1 = SIGNED(ctx->r5) < 0X8 ? 1 : 0;
    // 0x802A00D0: bne         $at, $zero, L_802A00E0
    if (ctx->r1 != 0) {
        // 0x802A00D4: sb          $t3, 0x0($v0)
        MEM_B(0X0, ctx->r2) = ctx->r11;
            goto L_802A00E0;
    }
    // 0x802A00D4: sb          $t3, 0x0($v0)
    MEM_B(0X0, ctx->r2) = ctx->r11;
    // 0x802A00D8: sb          $zero, 0x0($v0)
    MEM_B(0X0, ctx->r2) = 0;
    // 0x802A00DC: andi        $a1, $zero, 0xFF
    ctx->r5 = 0 & 0XFF;
L_802A00E0:
    // 0x802A00E0: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x802A00E4: addiu       $v0, $v0, -0x2CF0
    ctx->r2 = ADD32(ctx->r2, -0X2CF0);
    // 0x802A00E8: lhu         $t4, 0xA9C($v0)
    ctx->r12 = MEM_HU(ctx->r2, 0XA9C);
    // 0x802A00EC: sltiu       $at, $a1, 0x8
    ctx->r1 = ctx->r5 < 0X8 ? 1 : 0;
    // 0x802A00F0: andi        $t5, $t4, 0x8
    ctx->r13 = ctx->r12 & 0X8;
    // 0x802A00F4: beq         $t5, $zero, L_802A0120
    if (ctx->r13 == 0) {
        // 0x802A00F8: lui         $a2, 0x802C
        ctx->r6 = S32(0X802C << 16);
            goto L_802A0120;
    }
    // 0x802A00F8: lui         $a2, 0x802C
    ctx->r6 = S32(0X802C << 16);
    // 0x802A00FC: lbu         $t6, 0x0($v0)
    ctx->r14 = MEM_BU(ctx->r2, 0X0);
    // 0x802A0100: lbu         $t8, 0xA94($v0)
    ctx->r24 = MEM_BU(ctx->r2, 0XA94);
    // 0x802A0104: addiu       $a2, $a2, -0x3524
    ctx->r6 = ADD32(ctx->r6, -0X3524);
    // 0x802A0108: addu        $t7, $a2, $t6
    ctx->r15 = ADD32(ctx->r6, ctx->r14);
    // 0x802A010C: addu        $t9, $a2, $t8
    ctx->r25 = ADD32(ctx->r6, ctx->r24);
    // 0x802A0110: lbu         $v1, 0x0($t7)
    ctx->r3 = MEM_BU(ctx->r15, 0X0);
    // 0x802A0114: lbu         $a0, 0x0($t9)
    ctx->r4 = MEM_BU(ctx->r25, 0X0);
    // 0x802A0118: b           L_802A0144
    // 0x802A011C: nop

        goto L_802A0144;
    // 0x802A011C: nop

L_802A0120:
    // 0x802A0120: lui         $a2, 0x802C
    ctx->r6 = S32(0X802C << 16);
    // 0x802A0124: lbu         $t0, 0xA94($v0)
    ctx->r8 = MEM_BU(ctx->r2, 0XA94);
    // 0x802A0128: lbu         $t2, 0x0($v0)
    ctx->r10 = MEM_BU(ctx->r2, 0X0);
    // 0x802A012C: addiu       $a2, $a2, -0x3524
    ctx->r6 = ADD32(ctx->r6, -0X3524);
    // 0x802A0130: addu        $t1, $a2, $t0
    ctx->r9 = ADD32(ctx->r6, ctx->r8);
    // 0x802A0134: addu        $t3, $a2, $t2
    ctx->r11 = ADD32(ctx->r6, ctx->r10);
    // 0x802A0138: lbu         $v1, 0x0($t1)
    ctx->r3 = MEM_BU(ctx->r9, 0X0);
    // 0x802A013C: lbu         $a0, 0x0($t3)
    ctx->r4 = MEM_BU(ctx->r11, 0X0);
    // 0x802A0140: nop

L_802A0144:
    // 0x802A0144: beq         $at, $zero, L_802A02C0
    if (ctx->r1 == 0) {
        // 0x802A0148: sll         $t4, $a1, 2
        ctx->r12 = S32(ctx->r5 << 2);
            goto L_802A02C0;
    }
    // 0x802A0148: sll         $t4, $a1, 2
    ctx->r12 = S32(ctx->r5 << 2);
    // 0x802A014C: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x802A0150: addu        $at, $at, $t4
    gpr jr_addend_802A015C = ctx->r12;
    ctx->r1 = ADD32(ctx->r1, ctx->r12);
    // 0x802A0154: lw          $t4, 0xB58($at)
    ctx->r12 = ADD32(ctx->r1, 0XB58);
    // 0x802A0158: nop

    // 0x802A015C: jr          $t4
    // 0x802A0160: nop

    switch (jr_addend_802A015C >> 2) {
        case 0: goto L_802A0164; break;
        case 1: goto L_802A0190; break;
        case 2: goto L_802A01BC; break;
        case 3: goto L_802A01E8; break;
        case 4: goto L_802A0214; break;
        case 5: goto L_802A0240; break;
        case 6: goto L_802A026C; break;
        case 7: goto L_802A0298; break;
        default: switch_error(__func__, 0x802A015C, 0x802C0B58);
    }
    // 0x802A0160: nop

L_802A0164:
    // 0x802A0164: lui         $v0, 0x802C
    ctx->r2 = S32(0X802C << 16);
    // 0x802A0168: addiu       $v0, $v0, -0x3564
    ctx->r2 = ADD32(ctx->r2, -0X3564);
    // 0x802A016C: sll         $t5, $v1, 1
    ctx->r13 = S32(ctx->r3 << 1);
    // 0x802A0170: sll         $t8, $a0, 1
    ctx->r24 = S32(ctx->r4 << 1);
    // 0x802A0174: addu        $t6, $v0, $t5
    ctx->r14 = ADD32(ctx->r2, ctx->r13);
    // 0x802A0178: addu        $t9, $v0, $t8
    ctx->r25 = ADD32(ctx->r2, ctx->r24);
    // 0x802A017C: lhu         $t7, 0x0($t6)
    ctx->r15 = MEM_HU(ctx->r14, 0X0);
    // 0x802A0180: lhu         $t0, 0x0($t9)
    ctx->r8 = MEM_HU(ctx->r25, 0X0);
    // 0x802A0184: sh          $t7, 0x2E($sp)
    MEM_H(0X2E, ctx->r29) = ctx->r15;
    // 0x802A0188: b           L_802A02C0
    // 0x802A018C: sh          $t0, 0x2C($sp)
    MEM_H(0X2C, ctx->r29) = ctx->r8;
        goto L_802A02C0;
    // 0x802A018C: sh          $t0, 0x2C($sp)
    MEM_H(0X2C, ctx->r29) = ctx->r8;
L_802A0190:
    // 0x802A0190: lui         $v0, 0x802C
    ctx->r2 = S32(0X802C << 16);
    // 0x802A0194: addiu       $v0, $v0, -0x3564
    ctx->r2 = ADD32(ctx->r2, -0X3564);
    // 0x802A0198: sll         $t1, $v1, 1
    ctx->r9 = S32(ctx->r3 << 1);
    // 0x802A019C: sll         $t4, $a0, 1
    ctx->r12 = S32(ctx->r4 << 1);
    // 0x802A01A0: addu        $t2, $v0, $t1
    ctx->r10 = ADD32(ctx->r2, ctx->r9);
    // 0x802A01A4: addu        $t5, $v0, $t4
    ctx->r13 = ADD32(ctx->r2, ctx->r12);
    // 0x802A01A8: lhu         $t3, 0x8($t2)
    ctx->r11 = MEM_HU(ctx->r10, 0X8);
    // 0x802A01AC: lhu         $t6, 0x8($t5)
    ctx->r14 = MEM_HU(ctx->r13, 0X8);
    // 0x802A01B0: sh          $t3, 0x2E($sp)
    MEM_H(0X2E, ctx->r29) = ctx->r11;
    // 0x802A01B4: b           L_802A02C0
    // 0x802A01B8: sh          $t6, 0x2C($sp)
    MEM_H(0X2C, ctx->r29) = ctx->r14;
        goto L_802A02C0;
    // 0x802A01B8: sh          $t6, 0x2C($sp)
    MEM_H(0X2C, ctx->r29) = ctx->r14;
L_802A01BC:
    // 0x802A01BC: lui         $v0, 0x802C
    ctx->r2 = S32(0X802C << 16);
    // 0x802A01C0: addiu       $v0, $v0, -0x3564
    ctx->r2 = ADD32(ctx->r2, -0X3564);
    // 0x802A01C4: sll         $t7, $v1, 1
    ctx->r15 = S32(ctx->r3 << 1);
    // 0x802A01C8: sll         $t0, $a0, 1
    ctx->r8 = S32(ctx->r4 << 1);
    // 0x802A01CC: addu        $t8, $v0, $t7
    ctx->r24 = ADD32(ctx->r2, ctx->r15);
    // 0x802A01D0: addu        $t1, $v0, $t0
    ctx->r9 = ADD32(ctx->r2, ctx->r8);
    // 0x802A01D4: lhu         $t9, 0x10($t8)
    ctx->r25 = MEM_HU(ctx->r24, 0X10);
    // 0x802A01D8: lhu         $t2, 0x10($t1)
    ctx->r10 = MEM_HU(ctx->r9, 0X10);
    // 0x802A01DC: sh          $t9, 0x2E($sp)
    MEM_H(0X2E, ctx->r29) = ctx->r25;
    // 0x802A01E0: b           L_802A02C0
    // 0x802A01E4: sh          $t2, 0x2C($sp)
    MEM_H(0X2C, ctx->r29) = ctx->r10;
        goto L_802A02C0;
    // 0x802A01E4: sh          $t2, 0x2C($sp)
    MEM_H(0X2C, ctx->r29) = ctx->r10;
L_802A01E8:
    // 0x802A01E8: lui         $v0, 0x802C
    ctx->r2 = S32(0X802C << 16);
    // 0x802A01EC: addiu       $v0, $v0, -0x3564
    ctx->r2 = ADD32(ctx->r2, -0X3564);
    // 0x802A01F0: sll         $t3, $v1, 1
    ctx->r11 = S32(ctx->r3 << 1);
    // 0x802A01F4: sll         $t6, $a0, 1
    ctx->r14 = S32(ctx->r4 << 1);
    // 0x802A01F8: addu        $t4, $v0, $t3
    ctx->r12 = ADD32(ctx->r2, ctx->r11);
    // 0x802A01FC: addu        $t7, $v0, $t6
    ctx->r15 = ADD32(ctx->r2, ctx->r14);
    // 0x802A0200: lhu         $t5, 0x18($t4)
    ctx->r13 = MEM_HU(ctx->r12, 0X18);
    // 0x802A0204: lhu         $t8, 0x18($t7)
    ctx->r24 = MEM_HU(ctx->r15, 0X18);
    // 0x802A0208: sh          $t5, 0x2E($sp)
    MEM_H(0X2E, ctx->r29) = ctx->r13;
    // 0x802A020C: b           L_802A02C0
    // 0x802A0210: sh          $t8, 0x2C($sp)
    MEM_H(0X2C, ctx->r29) = ctx->r24;
        goto L_802A02C0;
    // 0x802A0210: sh          $t8, 0x2C($sp)
    MEM_H(0X2C, ctx->r29) = ctx->r24;
L_802A0214:
    // 0x802A0214: lui         $v0, 0x802C
    ctx->r2 = S32(0X802C << 16);
    // 0x802A0218: addiu       $v0, $v0, -0x3564
    ctx->r2 = ADD32(ctx->r2, -0X3564);
    // 0x802A021C: sll         $t9, $v1, 1
    ctx->r25 = S32(ctx->r3 << 1);
    // 0x802A0220: sll         $t2, $a0, 1
    ctx->r10 = S32(ctx->r4 << 1);
    // 0x802A0224: addu        $t0, $v0, $t9
    ctx->r8 = ADD32(ctx->r2, ctx->r25);
    // 0x802A0228: addu        $t3, $v0, $t2
    ctx->r11 = ADD32(ctx->r2, ctx->r10);
    // 0x802A022C: lhu         $t1, 0x20($t0)
    ctx->r9 = MEM_HU(ctx->r8, 0X20);
    // 0x802A0230: lhu         $t4, 0x20($t3)
    ctx->r12 = MEM_HU(ctx->r11, 0X20);
    // 0x802A0234: sh          $t1, 0x2E($sp)
    MEM_H(0X2E, ctx->r29) = ctx->r9;
    // 0x802A0238: b           L_802A02C0
    // 0x802A023C: sh          $t4, 0x2C($sp)
    MEM_H(0X2C, ctx->r29) = ctx->r12;
        goto L_802A02C0;
    // 0x802A023C: sh          $t4, 0x2C($sp)
    MEM_H(0X2C, ctx->r29) = ctx->r12;
L_802A0240:
    // 0x802A0240: lui         $v0, 0x802C
    ctx->r2 = S32(0X802C << 16);
    // 0x802A0244: addiu       $v0, $v0, -0x3564
    ctx->r2 = ADD32(ctx->r2, -0X3564);
    // 0x802A0248: sll         $t5, $v1, 1
    ctx->r13 = S32(ctx->r3 << 1);
    // 0x802A024C: sll         $t8, $a0, 1
    ctx->r24 = S32(ctx->r4 << 1);
    // 0x802A0250: addu        $t6, $v0, $t5
    ctx->r14 = ADD32(ctx->r2, ctx->r13);
    // 0x802A0254: addu        $t9, $v0, $t8
    ctx->r25 = ADD32(ctx->r2, ctx->r24);
    // 0x802A0258: lhu         $t7, 0x28($t6)
    ctx->r15 = MEM_HU(ctx->r14, 0X28);
    // 0x802A025C: lhu         $t0, 0x28($t9)
    ctx->r8 = MEM_HU(ctx->r25, 0X28);
    // 0x802A0260: sh          $t7, 0x2E($sp)
    MEM_H(0X2E, ctx->r29) = ctx->r15;
    // 0x802A0264: b           L_802A02C0
    // 0x802A0268: sh          $t0, 0x2C($sp)
    MEM_H(0X2C, ctx->r29) = ctx->r8;
        goto L_802A02C0;
    // 0x802A0268: sh          $t0, 0x2C($sp)
    MEM_H(0X2C, ctx->r29) = ctx->r8;
L_802A026C:
    // 0x802A026C: lui         $v0, 0x802C
    ctx->r2 = S32(0X802C << 16);
    // 0x802A0270: addiu       $v0, $v0, -0x3564
    ctx->r2 = ADD32(ctx->r2, -0X3564);
    // 0x802A0274: sll         $t1, $v1, 1
    ctx->r9 = S32(ctx->r3 << 1);
    // 0x802A0278: sll         $t4, $a0, 1
    ctx->r12 = S32(ctx->r4 << 1);
    // 0x802A027C: addu        $t2, $v0, $t1
    ctx->r10 = ADD32(ctx->r2, ctx->r9);
    // 0x802A0280: addu        $t5, $v0, $t4
    ctx->r13 = ADD32(ctx->r2, ctx->r12);
    // 0x802A0284: lhu         $t3, 0x30($t2)
    ctx->r11 = MEM_HU(ctx->r10, 0X30);
    // 0x802A0288: lhu         $t6, 0x30($t5)
    ctx->r14 = MEM_HU(ctx->r13, 0X30);
    // 0x802A028C: sh          $t3, 0x2E($sp)
    MEM_H(0X2E, ctx->r29) = ctx->r11;
    // 0x802A0290: b           L_802A02C0
    // 0x802A0294: sh          $t6, 0x2C($sp)
    MEM_H(0X2C, ctx->r29) = ctx->r14;
        goto L_802A02C0;
    // 0x802A0294: sh          $t6, 0x2C($sp)
    MEM_H(0X2C, ctx->r29) = ctx->r14;
L_802A0298:
    // 0x802A0298: lui         $v0, 0x802C
    ctx->r2 = S32(0X802C << 16);
    // 0x802A029C: addiu       $v0, $v0, -0x3564
    ctx->r2 = ADD32(ctx->r2, -0X3564);
    // 0x802A02A0: sll         $t7, $v1, 1
    ctx->r15 = S32(ctx->r3 << 1);
    // 0x802A02A4: sll         $t0, $a0, 1
    ctx->r8 = S32(ctx->r4 << 1);
    // 0x802A02A8: addu        $t8, $v0, $t7
    ctx->r24 = ADD32(ctx->r2, ctx->r15);
    // 0x802A02AC: addu        $t1, $v0, $t0
    ctx->r9 = ADD32(ctx->r2, ctx->r8);
    // 0x802A02B0: lhu         $t9, 0x38($t8)
    ctx->r25 = MEM_HU(ctx->r24, 0X38);
    // 0x802A02B4: lhu         $t2, 0x38($t1)
    ctx->r10 = MEM_HU(ctx->r9, 0X38);
    // 0x802A02B8: sh          $t9, 0x2E($sp)
    MEM_H(0X2E, ctx->r29) = ctx->r25;
    // 0x802A02BC: sh          $t2, 0x2C($sp)
    MEM_H(0X2C, ctx->r29) = ctx->r10;
L_802A02C0:
    // 0x802A02C0: lhu         $a0, 0x2E($sp)
    ctx->r4 = MEM_HU(ctx->r29, 0X2E);
    // 0x802A02C4: jal         0x8028BAD0
    // 0x802A02C8: nop

    func_8028BAD0(rdram, ctx);
        goto after_0;
    // 0x802A02C8: nop

    after_0:
    // 0x802A02CC: sw          $v0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r2;
    // 0x802A02D0: jal         0x8028BAD0
    // 0x802A02D4: addiu       $a0, $zero, 0xA4B
    ctx->r4 = ADD32(0, 0XA4B);
    func_8028BAD0(rdram, ctx);
        goto after_1;
    // 0x802A02D4: addiu       $a0, $zero, 0xA4B
    ctx->r4 = ADD32(0, 0XA4B);
    after_1:
    // 0x802A02D8: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x802A02DC: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    // 0x802A02E0: jal         0x80081670
    // 0x802A02E4: addiu       $a2, $zero, 0x3C0
    ctx->r6 = ADD32(0, 0X3C0);
    func_80081670(rdram, ctx);
        goto after_2;
    // 0x802A02E4: addiu       $a2, $zero, 0x3C0
    ctx->r6 = ADD32(0, 0X3C0);
    after_2:
    // 0x802A02E8: jal         0x8028BAD0
    // 0x802A02EC: addiu       $a0, $zero, 0xA4B
    ctx->r4 = ADD32(0, 0XA4B);
    func_8028BAD0(rdram, ctx);
        goto after_3;
    // 0x802A02EC: addiu       $a0, $zero, 0xA4B
    ctx->r4 = ADD32(0, 0XA4B);
    after_3:
    // 0x802A02F0: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x802A02F4: jal         0x80081980
    // 0x802A02F8: addiu       $a1, $zero, 0x3C0
    ctx->r5 = ADD32(0, 0X3C0);
    func_80081980(rdram, ctx);
        goto after_4;
    // 0x802A02F8: addiu       $a1, $zero, 0x3C0
    ctx->r5 = ADD32(0, 0X3C0);
    after_4:
    // 0x802A02FC: lhu         $a0, 0x2C($sp)
    ctx->r4 = MEM_HU(ctx->r29, 0X2C);
    // 0x802A0300: jal         0x8028BAD0
    // 0x802A0304: nop

    func_8028BAD0(rdram, ctx);
        goto after_5;
    // 0x802A0304: nop

    after_5:
    // 0x802A0308: sw          $v0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r2;
    // 0x802A030C: jal         0x8028BAD0
    // 0x802A0310: addiu       $a0, $zero, 0xA4C
    ctx->r4 = ADD32(0, 0XA4C);
    func_8028BAD0(rdram, ctx);
        goto after_6;
    // 0x802A0310: addiu       $a0, $zero, 0xA4C
    ctx->r4 = ADD32(0, 0XA4C);
    after_6:
    // 0x802A0314: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x802A0318: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    // 0x802A031C: jal         0x80081670
    // 0x802A0320: addiu       $a2, $zero, 0x3C0
    ctx->r6 = ADD32(0, 0X3C0);
    func_80081670(rdram, ctx);
        goto after_7;
    // 0x802A0320: addiu       $a2, $zero, 0x3C0
    ctx->r6 = ADD32(0, 0X3C0);
    after_7:
    // 0x802A0324: jal         0x8028BAD0
    // 0x802A0328: addiu       $a0, $zero, 0xA4C
    ctx->r4 = ADD32(0, 0XA4C);
    func_8028BAD0(rdram, ctx);
        goto after_8;
    // 0x802A0328: addiu       $a0, $zero, 0xA4C
    ctx->r4 = ADD32(0, 0XA4C);
    after_8:
    // 0x802A032C: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x802A0330: jal         0x80081980
    // 0x802A0334: addiu       $a1, $zero, 0x3C0
    ctx->r5 = ADD32(0, 0X3C0);
    func_80081980(rdram, ctx);
        goto after_9;
    // 0x802A0334: addiu       $a1, $zero, 0x3C0
    ctx->r5 = ADD32(0, 0X3C0);
    after_9:
L_802A0338:
    // 0x802A0338: lui         $v0, 0x802C
    ctx->r2 = S32(0X802C << 16);
    // 0x802A033C: addiu       $v0, $v0, 0x39F7
    ctx->r2 = ADD32(ctx->r2, 0X39F7);
    // 0x802A0340: lbu         $t3, 0x0($v0)
    ctx->r11 = MEM_BU(ctx->r2, 0X0);
    // 0x802A0344: lui         $t6, 0x8012
    ctx->r14 = S32(0X8012 << 16);
    // 0x802A0348: addiu       $t4, $t3, -0x1
    ctx->r12 = ADD32(ctx->r11, -0X1);
    // 0x802A034C: andi        $t5, $t4, 0xFF
    ctx->r13 = ctx->r12 & 0XFF;
    // 0x802A0350: bne         $t5, $zero, L_802A0474
    if (ctx->r13 != 0) {
        // 0x802A0354: sb          $t4, 0x0($v0)
        MEM_B(0X0, ctx->r2) = ctx->r12;
            goto L_802A0474;
    }
    // 0x802A0354: sb          $t4, 0x0($v0)
    MEM_B(0X0, ctx->r2) = ctx->r12;
    // 0x802A0358: lhu         $t6, 0xB78($t6)
    ctx->r14 = MEM_HU(ctx->r14, 0XB78);
    // 0x802A035C: addiu       $at, $zero, 0x9
    ctx->r1 = ADD32(0, 0X9);
    // 0x802A0360: bne         $t6, $at, L_802A0374
    if (ctx->r14 != ctx->r1) {
        // 0x802A0364: addiu       $t8, $zero, 0x6
        ctx->r24 = ADD32(0, 0X6);
            goto L_802A0374;
    }
    // 0x802A0364: addiu       $t8, $zero, 0x6
    ctx->r24 = ADD32(0, 0X6);
    // 0x802A0368: addiu       $t7, $zero, 0x2
    ctx->r15 = ADD32(0, 0X2);
    // 0x802A036C: b           L_802A0378
    // 0x802A0370: sb          $t7, 0x0($v0)
    MEM_B(0X0, ctx->r2) = ctx->r15;
        goto L_802A0378;
    // 0x802A0370: sb          $t7, 0x0($v0)
    MEM_B(0X0, ctx->r2) = ctx->r15;
L_802A0374:
    // 0x802A0374: sb          $t8, 0x0($v0)
    MEM_B(0X0, ctx->r2) = ctx->r24;
L_802A0378:
    // 0x802A0378: lui         $v0, 0x802C
    ctx->r2 = S32(0X802C << 16);
    // 0x802A037C: addiu       $v0, $v0, 0x39F8
    ctx->r2 = ADD32(ctx->r2, 0X39F8);
    // 0x802A0380: lbu         $t9, 0x0($v0)
    ctx->r25 = MEM_BU(ctx->r2, 0X0);
    // 0x802A0384: nop

    // 0x802A0388: addiu       $t0, $t9, 0x1
    ctx->r8 = ADD32(ctx->r25, 0X1);
    // 0x802A038C: andi        $v1, $t0, 0xFF
    ctx->r3 = ctx->r8 & 0XFF;
    // 0x802A0390: slti        $at, $v1, 0x4
    ctx->r1 = SIGNED(ctx->r3) < 0X4 ? 1 : 0;
    // 0x802A0394: bne         $at, $zero, L_802A03A4
    if (ctx->r1 != 0) {
        // 0x802A0398: sb          $t0, 0x0($v0)
        MEM_B(0X0, ctx->r2) = ctx->r8;
            goto L_802A03A4;
    }
    // 0x802A0398: sb          $t0, 0x0($v0)
    MEM_B(0X0, ctx->r2) = ctx->r8;
    // 0x802A039C: sb          $zero, 0x0($v0)
    MEM_B(0X0, ctx->r2) = 0;
    // 0x802A03A0: andi        $v1, $zero, 0xFF
    ctx->r3 = 0 & 0XFF;
L_802A03A4:
    // 0x802A03A4: beq         $v1, $zero, L_802A03CC
    if (ctx->r3 == 0) {
        // 0x802A03A8: addiu       $at, $zero, 0x1
        ctx->r1 = ADD32(0, 0X1);
            goto L_802A03CC;
    }
    // 0x802A03A8: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x802A03AC: beq         $v1, $at, L_802A03F8
    if (ctx->r3 == ctx->r1) {
        // 0x802A03B0: addiu       $at, $zero, 0x2
        ctx->r1 = ADD32(0, 0X2);
            goto L_802A03F8;
    }
    // 0x802A03B0: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x802A03B4: beq         $v1, $at, L_802A0424
    if (ctx->r3 == ctx->r1) {
        // 0x802A03B8: addiu       $at, $zero, 0x3
        ctx->r1 = ADD32(0, 0X3);
            goto L_802A0424;
    }
    // 0x802A03B8: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x802A03BC: beq         $v1, $at, L_802A0450
    if (ctx->r3 == ctx->r1) {
        // 0x802A03C0: nop
    
            goto L_802A0450;
    }
    // 0x802A03C0: nop

    // 0x802A03C4: b           L_802A0478
    // 0x802A03C8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_802A0478;
    // 0x802A03C8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_802A03CC:
    // 0x802A03CC: jal         0x8028BAD0
    // 0x802A03D0: addiu       $a0, $zero, 0xA4E
    ctx->r4 = ADD32(0, 0XA4E);
    func_8028BAD0(rdram, ctx);
        goto after_10;
    // 0x802A03D0: addiu       $a0, $zero, 0xA4E
    ctx->r4 = ADD32(0, 0XA4E);
    after_10:
    // 0x802A03D4: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    // 0x802A03D8: jal         0x8028BAD0
    // 0x802A03DC: addiu       $a0, $zero, 0xA4D
    ctx->r4 = ADD32(0, 0XA4D);
    func_8028BAD0(rdram, ctx);
        goto after_11;
    // 0x802A03DC: addiu       $a0, $zero, 0xA4D
    ctx->r4 = ADD32(0, 0XA4D);
    after_11:
    // 0x802A03E0: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    // 0x802A03E4: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    // 0x802A03E8: jal         0x80081670
    // 0x802A03EC: addiu       $a2, $zero, 0x400
    ctx->r6 = ADD32(0, 0X400);
    func_80081670(rdram, ctx);
        goto after_12;
    // 0x802A03EC: addiu       $a2, $zero, 0x400
    ctx->r6 = ADD32(0, 0X400);
    after_12:
    // 0x802A03F0: b           L_802A0478
    // 0x802A03F4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_802A0478;
    // 0x802A03F4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_802A03F8:
    // 0x802A03F8: jal         0x8028BAD0
    // 0x802A03FC: addiu       $a0, $zero, 0xA4F
    ctx->r4 = ADD32(0, 0XA4F);
    func_8028BAD0(rdram, ctx);
        goto after_13;
    // 0x802A03FC: addiu       $a0, $zero, 0xA4F
    ctx->r4 = ADD32(0, 0XA4F);
    after_13:
    // 0x802A0400: sw          $v0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r2;
    // 0x802A0404: jal         0x8028BAD0
    // 0x802A0408: addiu       $a0, $zero, 0xA4D
    ctx->r4 = ADD32(0, 0XA4D);
    func_8028BAD0(rdram, ctx);
        goto after_14;
    // 0x802A0408: addiu       $a0, $zero, 0xA4D
    ctx->r4 = ADD32(0, 0XA4D);
    after_14:
    // 0x802A040C: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x802A0410: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    // 0x802A0414: jal         0x80081670
    // 0x802A0418: addiu       $a2, $zero, 0x400
    ctx->r6 = ADD32(0, 0X400);
    func_80081670(rdram, ctx);
        goto after_15;
    // 0x802A0418: addiu       $a2, $zero, 0x400
    ctx->r6 = ADD32(0, 0X400);
    after_15:
    // 0x802A041C: b           L_802A0478
    // 0x802A0420: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_802A0478;
    // 0x802A0420: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_802A0424:
    // 0x802A0424: jal         0x8028BAD0
    // 0x802A0428: addiu       $a0, $zero, 0xA50
    ctx->r4 = ADD32(0, 0XA50);
    func_8028BAD0(rdram, ctx);
        goto after_16;
    // 0x802A0428: addiu       $a0, $zero, 0xA50
    ctx->r4 = ADD32(0, 0XA50);
    after_16:
    // 0x802A042C: sw          $v0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r2;
    // 0x802A0430: jal         0x8028BAD0
    // 0x802A0434: addiu       $a0, $zero, 0xA4D
    ctx->r4 = ADD32(0, 0XA4D);
    func_8028BAD0(rdram, ctx);
        goto after_17;
    // 0x802A0434: addiu       $a0, $zero, 0xA4D
    ctx->r4 = ADD32(0, 0XA4D);
    after_17:
    // 0x802A0438: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x802A043C: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    // 0x802A0440: jal         0x80081670
    // 0x802A0444: addiu       $a2, $zero, 0x400
    ctx->r6 = ADD32(0, 0X400);
    func_80081670(rdram, ctx);
        goto after_18;
    // 0x802A0444: addiu       $a2, $zero, 0x400
    ctx->r6 = ADD32(0, 0X400);
    after_18:
    // 0x802A0448: b           L_802A0478
    // 0x802A044C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_802A0478;
    // 0x802A044C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_802A0450:
    // 0x802A0450: jal         0x8028BAD0
    // 0x802A0454: addiu       $a0, $zero, 0xA4F
    ctx->r4 = ADD32(0, 0XA4F);
    func_8028BAD0(rdram, ctx);
        goto after_19;
    // 0x802A0454: addiu       $a0, $zero, 0xA4F
    ctx->r4 = ADD32(0, 0XA4F);
    after_19:
    // 0x802A0458: sw          $v0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r2;
    // 0x802A045C: jal         0x8028BAD0
    // 0x802A0460: addiu       $a0, $zero, 0xA4D
    ctx->r4 = ADD32(0, 0XA4D);
    func_8028BAD0(rdram, ctx);
        goto after_20;
    // 0x802A0460: addiu       $a0, $zero, 0xA4D
    ctx->r4 = ADD32(0, 0XA4D);
    after_20:
    // 0x802A0464: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x802A0468: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    // 0x802A046C: jal         0x80081670
    // 0x802A0470: addiu       $a2, $zero, 0x400
    ctx->r6 = ADD32(0, 0X400);
    func_80081670(rdram, ctx);
        goto after_21;
    // 0x802A0470: addiu       $a2, $zero, 0x400
    ctx->r6 = ADD32(0, 0X400);
    after_21:
L_802A0474:
    // 0x802A0474: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_802A0478:
    // 0x802A0478: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x802A047C: jr          $ra
    // 0x802A0480: nop

    return;
    // 0x802A0480: nop

;}
RECOMP_FUNC void func_802A0484(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802A0484: lui         $v0, 0x8011
    ctx->r2 = S32(0X8011 << 16);
    // 0x802A0488: lw          $v0, -0x2F98($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X2F98);
    // 0x802A048C: lui         $at, 0x2
    ctx->r1 = S32(0X2 << 16);
    // 0x802A0490: ori         $at, $at, 0xA0D8
    ctx->r1 = ctx->r1 | 0XA0D8;
    // 0x802A0494: lui         $t6, 0x8012
    ctx->r14 = S32(0X8012 << 16);
    // 0x802A0498: lbu         $t6, -0x32A4($t6)
    ctx->r14 = MEM_BU(ctx->r14, -0X32A4);
    // 0x802A049C: addu        $v0, $v0, $at
    ctx->r2 = ADD32(ctx->r2, ctx->r1);
    // 0x802A04A0: addiu       $at, $zero, 0x5
    ctx->r1 = ADD32(0, 0X5);
    // 0x802A04A4: beq         $t6, $at, L_802A04DC
    if (ctx->r14 == ctx->r1) {
        // 0x802A04A8: lui         $t7, 0x8012
        ctx->r15 = S32(0X8012 << 16);
            goto L_802A04DC;
    }
    // 0x802A04A8: lui         $t7, 0x8012
    ctx->r15 = S32(0X8012 << 16);
    // 0x802A04AC: lui         $v1, 0x8012
    ctx->r3 = S32(0X8012 << 16);
    // 0x802A04B0: lhu         $v1, 0xB78($v1)
    ctx->r3 = MEM_HU(ctx->r3, 0XB78);
    // 0x802A04B4: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x802A04B8: beq         $v1, $at, L_802A04C8
    if (ctx->r3 == ctx->r1) {
        // 0x802A04BC: lui         $a0, 0x802C
        ctx->r4 = S32(0X802C << 16);
            goto L_802A04C8;
    }
    // 0x802A04BC: lui         $a0, 0x802C
    ctx->r4 = S32(0X802C << 16);
    // 0x802A04C0: addiu       $at, $zero, 0x9
    ctx->r1 = ADD32(0, 0X9);
    // 0x802A04C4: bne         $v1, $at, L_802A04DC
    if (ctx->r3 != ctx->r1) {
        // 0x802A04C8: addiu       $a0, $a0, 0x3830
        ctx->r4 = ADD32(ctx->r4, 0X3830);
            goto L_802A04DC;
    }
L_802A04C8:
    // 0x802A04C8: addiu       $a0, $a0, 0x3830
    ctx->r4 = ADD32(ctx->r4, 0X3830);
    // 0x802A04CC: sh          $zero, 0x70($a0)
    MEM_H(0X70, ctx->r4) = 0;
    // 0x802A04D0: sh          $zero, 0x78($a0)
    MEM_H(0X78, ctx->r4) = 0;
    // 0x802A04D4: sh          $zero, 0x80($a0)
    MEM_H(0X80, ctx->r4) = 0;
    // 0x802A04D8: sh          $zero, 0x88($a0)
    MEM_H(0X88, ctx->r4) = 0;
L_802A04DC:
    // 0x802A04DC: lbu         $t7, -0x309B($t7)
    ctx->r15 = MEM_BU(ctx->r15, -0X309B);
    // 0x802A04E0: lui         $v1, 0x8012
    ctx->r3 = S32(0X8012 << 16);
    // 0x802A04E4: lui         $a0, 0x802C
    ctx->r4 = S32(0X802C << 16);
    // 0x802A04E8: lwc1        $f0, 0x4($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X4);
    // 0x802A04EC: lwc1        $f2, 0xC($v0)
    ctx->f2.u32l = MEM_W(ctx->r2, 0XC);
    // 0x802A04F0: lhu         $v1, 0xB78($v1)
    ctx->r3 = MEM_HU(ctx->r3, 0XB78);
    // 0x802A04F4: sltiu       $at, $t7, 0x5
    ctx->r1 = ctx->r15 < 0X5 ? 1 : 0;
    // 0x802A04F8: beq         $at, $zero, L_802A089C
    if (ctx->r1 == 0) {
        // 0x802A04FC: addiu       $a0, $a0, 0x3830
        ctx->r4 = ADD32(ctx->r4, 0X3830);
            goto L_802A089C;
    }
    // 0x802A04FC: addiu       $a0, $a0, 0x3830
    ctx->r4 = ADD32(ctx->r4, 0X3830);
    // 0x802A0500: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x802A0504: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x802A0508: addu        $at, $at, $t7
    gpr jr_addend_802A0514 = ctx->r15;
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x802A050C: lw          $t7, 0xB78($at)
    ctx->r15 = ADD32(ctx->r1, 0XB78);
    // 0x802A0510: nop

    // 0x802A0514: jr          $t7
    // 0x802A0518: nop

    switch (jr_addend_802A0514 >> 2) {
        case 0: goto L_802A051C; break;
        case 1: goto L_802A05A4; break;
        case 2: goto L_802A0678; break;
        case 3: goto L_802A0724; break;
        case 4: goto L_802A0814; break;
        default: switch_error(__func__, 0x802A0514, 0x802C0B78);
    }
    // 0x802A0518: nop

L_802A051C:
    // 0x802A051C: lui         $at, 0x43C8
    ctx->r1 = S32(0X43C8 << 16);
    // 0x802A0520: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x802A0524: addiu       $v0, $zero, 0x19
    ctx->r2 = ADD32(0, 0X19);
    // 0x802A0528: c.lt.s      $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f4.fl < ctx->f0.fl;
    // 0x802A052C: lui         $a1, 0x802C
    ctx->r5 = S32(0X802C << 16);
    // 0x802A0530: bc1f        L_802A0564
    if (!c1cs) {
        // 0x802A0534: lui         $at, 0xC3C8
        ctx->r1 = S32(0XC3C8 << 16);
            goto L_802A0564;
    }
    // 0x802A0534: lui         $at, 0xC3C8
    ctx->r1 = S32(0XC3C8 << 16);
    // 0x802A0538: addiu       $a1, $a1, 0x3600
    ctx->r5 = ADD32(ctx->r5, 0X3600);
L_802A053C:
    // 0x802A053C: sll         $t8, $v0, 3
    ctx->r24 = S32(ctx->r2 << 3);
    // 0x802A0540: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x802A0544: andi        $t0, $v0, 0xFF
    ctx->r8 = ctx->r2 & 0XFF;
    // 0x802A0548: slti        $at, $t0, 0x1F
    ctx->r1 = SIGNED(ctx->r8) < 0X1F ? 1 : 0;
    // 0x802A054C: addu        $t9, $a1, $t8
    ctx->r25 = ADD32(ctx->r5, ctx->r24);
    // 0x802A0550: or          $v0, $t0, $zero
    ctx->r2 = ctx->r8 | 0;
    // 0x802A0554: bne         $at, $zero, L_802A053C
    if (ctx->r1 != 0) {
        // 0x802A0558: sh          $zero, 0x0($t9)
        MEM_H(0X0, ctx->r25) = 0;
            goto L_802A053C;
    }
    // 0x802A0558: sh          $zero, 0x0($t9)
    MEM_H(0X0, ctx->r25) = 0;
    // 0x802A055C: b           L_802A0920
    // 0x802A0560: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
        goto L_802A0920;
    // 0x802A0560: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
L_802A0564:
    // 0x802A0564: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x802A0568: lui         $a1, 0x802C
    ctx->r5 = S32(0X802C << 16);
    // 0x802A056C: c.lt.s      $f0, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f0.fl < ctx->f6.fl;
    // 0x802A0570: addiu       $a1, $a1, 0x3600
    ctx->r5 = ADD32(ctx->r5, 0X3600);
    // 0x802A0574: bc1f        L_802A091C
    if (!c1cs) {
        // 0x802A0578: addiu       $v0, $zero, 0x21
        ctx->r2 = ADD32(0, 0X21);
            goto L_802A091C;
    }
    // 0x802A0578: addiu       $v0, $zero, 0x21
    ctx->r2 = ADD32(0, 0X21);
L_802A057C:
    // 0x802A057C: sll         $t1, $v0, 3
    ctx->r9 = S32(ctx->r2 << 3);
    // 0x802A0580: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x802A0584: andi        $t3, $v0, 0xFF
    ctx->r11 = ctx->r2 & 0XFF;
    // 0x802A0588: slti        $at, $t3, 0x27
    ctx->r1 = SIGNED(ctx->r11) < 0X27 ? 1 : 0;
    // 0x802A058C: addu        $t2, $a1, $t1
    ctx->r10 = ADD32(ctx->r5, ctx->r9);
    // 0x802A0590: or          $v0, $t3, $zero
    ctx->r2 = ctx->r11 | 0;
    // 0x802A0594: bne         $at, $zero, L_802A057C
    if (ctx->r1 != 0) {
        // 0x802A0598: sh          $zero, 0x0($t2)
        MEM_H(0X0, ctx->r10) = 0;
            goto L_802A057C;
    }
    // 0x802A0598: sh          $zero, 0x0($t2)
    MEM_H(0X0, ctx->r10) = 0;
    // 0x802A059C: b           L_802A0920
    // 0x802A05A0: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
        goto L_802A0920;
    // 0x802A05A0: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
L_802A05A4:
    // 0x802A05A4: lui         $at, 0x43C8
    ctx->r1 = S32(0X43C8 << 16);
    // 0x802A05A8: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x802A05AC: lui         $a1, 0x802C
    ctx->r5 = S32(0X802C << 16);
    // 0x802A05B0: c.lt.s      $f8, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f8.fl < ctx->f0.fl;
    // 0x802A05B4: addiu       $a1, $a1, 0x3600
    ctx->r5 = ADD32(ctx->r5, 0X3600);
    // 0x802A05B8: bc1f        L_802A05E8
    if (!c1cs) {
        // 0x802A05BC: addiu       $v0, $zero, 0x18
        ctx->r2 = ADD32(0, 0X18);
            goto L_802A05E8;
    }
    // 0x802A05BC: addiu       $v0, $zero, 0x18
    ctx->r2 = ADD32(0, 0X18);
L_802A05C0:
    // 0x802A05C0: sll         $t4, $v0, 3
    ctx->r12 = S32(ctx->r2 << 3);
    // 0x802A05C4: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x802A05C8: andi        $t6, $v0, 0xFF
    ctx->r14 = ctx->r2 & 0XFF;
    // 0x802A05CC: slti        $at, $t6, 0x20
    ctx->r1 = SIGNED(ctx->r14) < 0X20 ? 1 : 0;
    // 0x802A05D0: addu        $t5, $a1, $t4
    ctx->r13 = ADD32(ctx->r5, ctx->r12);
    // 0x802A05D4: or          $v0, $t6, $zero
    ctx->r2 = ctx->r14 | 0;
    // 0x802A05D8: bne         $at, $zero, L_802A05C0
    if (ctx->r1 != 0) {
        // 0x802A05DC: sh          $zero, 0x0($t5)
        MEM_H(0X0, ctx->r13) = 0;
            goto L_802A05C0;
    }
    // 0x802A05DC: sh          $zero, 0x0($t5)
    MEM_H(0X0, ctx->r13) = 0;
    // 0x802A05E0: b           L_802A0630
    // 0x802A05E4: lui         $at, 0x4416
    ctx->r1 = S32(0X4416 << 16);
        goto L_802A0630;
    // 0x802A05E4: lui         $at, 0x4416
    ctx->r1 = S32(0X4416 << 16);
L_802A05E8:
    // 0x802A05E8: lui         $at, 0xC3C8
    ctx->r1 = S32(0XC3C8 << 16);
    // 0x802A05EC: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x802A05F0: nop

    // 0x802A05F4: c.lt.s      $f0, $f10
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f0.fl < ctx->f10.fl;
    // 0x802A05F8: nop

    // 0x802A05FC: bc1f        L_802A062C
    if (!c1cs) {
        // 0x802A0600: lui         $a1, 0x802C
        ctx->r5 = S32(0X802C << 16);
            goto L_802A062C;
    }
    // 0x802A0600: lui         $a1, 0x802C
    ctx->r5 = S32(0X802C << 16);
    // 0x802A0604: addiu       $a1, $a1, 0x3600
    ctx->r5 = ADD32(ctx->r5, 0X3600);
    // 0x802A0608: addiu       $v0, $zero, 0x22
    ctx->r2 = ADD32(0, 0X22);
L_802A060C:
    // 0x802A060C: sll         $t7, $v0, 3
    ctx->r15 = S32(ctx->r2 << 3);
    // 0x802A0610: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x802A0614: andi        $t9, $v0, 0xFF
    ctx->r25 = ctx->r2 & 0XFF;
    // 0x802A0618: slti        $at, $t9, 0x2A
    ctx->r1 = SIGNED(ctx->r25) < 0X2A ? 1 : 0;
    // 0x802A061C: addu        $t8, $a1, $t7
    ctx->r24 = ADD32(ctx->r5, ctx->r15);
    // 0x802A0620: or          $v0, $t9, $zero
    ctx->r2 = ctx->r25 | 0;
    // 0x802A0624: bne         $at, $zero, L_802A060C
    if (ctx->r1 != 0) {
        // 0x802A0628: sh          $zero, 0x0($t8)
        MEM_H(0X0, ctx->r24) = 0;
            goto L_802A060C;
    }
    // 0x802A0628: sh          $zero, 0x0($t8)
    MEM_H(0X0, ctx->r24) = 0;
L_802A062C:
    // 0x802A062C: lui         $at, 0x4416
    ctx->r1 = S32(0X4416 << 16);
L_802A0630:
    // 0x802A0630: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x802A0634: lui         $a1, 0x802C
    ctx->r5 = S32(0X802C << 16);
    // 0x802A0638: c.lt.s      $f16, $f2
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f16.fl < ctx->f2.fl;
    // 0x802A063C: addiu       $a1, $a1, 0x3600
    ctx->r5 = ADD32(ctx->r5, 0X3600);
    // 0x802A0640: bc1f        L_802A0654
    if (!c1cs) {
        // 0x802A0644: lui         $at, 0xC416
        ctx->r1 = S32(0XC416 << 16);
            goto L_802A0654;
    }
    // 0x802A0644: lui         $at, 0xC416
    ctx->r1 = S32(0XC416 << 16);
    // 0x802A0648: sh          $zero, 0x100($a1)
    MEM_H(0X100, ctx->r5) = 0;
    // 0x802A064C: b           L_802A091C
    // 0x802A0650: sh          $zero, 0x150($a1)
    MEM_H(0X150, ctx->r5) = 0;
        goto L_802A091C;
    // 0x802A0650: sh          $zero, 0x150($a1)
    MEM_H(0X150, ctx->r5) = 0;
L_802A0654:
    // 0x802A0654: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x802A0658: nop

    // 0x802A065C: c.lt.s      $f2, $f18
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f2.fl < ctx->f18.fl;
    // 0x802A0660: nop

    // 0x802A0664: bc1f        L_802A0920
    if (!c1cs) {
        // 0x802A0668: addiu       $at, $zero, 0x3
        ctx->r1 = ADD32(0, 0X3);
            goto L_802A0920;
    }
    // 0x802A0668: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x802A066C: sh          $zero, 0x108($a1)
    MEM_H(0X108, ctx->r5) = 0;
    // 0x802A0670: b           L_802A091C
    // 0x802A0674: sh          $zero, 0x158($a1)
    MEM_H(0X158, ctx->r5) = 0;
        goto L_802A091C;
    // 0x802A0674: sh          $zero, 0x158($a1)
    MEM_H(0X158, ctx->r5) = 0;
L_802A0678:
    // 0x802A0678: lui         $at, 0x43C8
    ctx->r1 = S32(0X43C8 << 16);
    // 0x802A067C: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x802A0680: addiu       $v0, $zero, 0x19
    ctx->r2 = ADD32(0, 0X19);
    // 0x802A0684: c.lt.s      $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f4.fl < ctx->f0.fl;
    // 0x802A0688: lui         $a1, 0x802C
    ctx->r5 = S32(0X802C << 16);
    // 0x802A068C: bc1f        L_802A06C0
    if (!c1cs) {
        // 0x802A0690: lui         $at, 0xC3C8
        ctx->r1 = S32(0XC3C8 << 16);
            goto L_802A06C0;
    }
    // 0x802A0690: lui         $at, 0xC3C8
    ctx->r1 = S32(0XC3C8 << 16);
    // 0x802A0694: addiu       $a1, $a1, 0x3600
    ctx->r5 = ADD32(ctx->r5, 0X3600);
L_802A0698:
    // 0x802A0698: sll         $t0, $v0, 3
    ctx->r8 = S32(ctx->r2 << 3);
    // 0x802A069C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x802A06A0: andi        $t2, $v0, 0xFF
    ctx->r10 = ctx->r2 & 0XFF;
    // 0x802A06A4: slti        $at, $t2, 0x1F
    ctx->r1 = SIGNED(ctx->r10) < 0X1F ? 1 : 0;
    // 0x802A06A8: addu        $t1, $a1, $t0
    ctx->r9 = ADD32(ctx->r5, ctx->r8);
    // 0x802A06AC: or          $v0, $t2, $zero
    ctx->r2 = ctx->r10 | 0;
    // 0x802A06B0: bne         $at, $zero, L_802A0698
    if (ctx->r1 != 0) {
        // 0x802A06B4: sh          $zero, 0x0($t1)
        MEM_H(0X0, ctx->r9) = 0;
            goto L_802A0698;
    }
    // 0x802A06B4: sh          $zero, 0x0($t1)
    MEM_H(0X0, ctx->r9) = 0;
    // 0x802A06B8: b           L_802A0920
    // 0x802A06BC: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
        goto L_802A0920;
    // 0x802A06BC: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
L_802A06C0:
    // 0x802A06C0: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x802A06C4: lui         $a1, 0x802C
    ctx->r5 = S32(0X802C << 16);
    // 0x802A06C8: c.lt.s      $f0, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f0.fl < ctx->f6.fl;
    // 0x802A06CC: addiu       $a1, $a1, 0x3600
    ctx->r5 = ADD32(ctx->r5, 0X3600);
    // 0x802A06D0: bc1f        L_802A091C
    if (!c1cs) {
        // 0x802A06D4: addiu       $v0, $zero, 0x21
        ctx->r2 = ADD32(0, 0X21);
            goto L_802A091C;
    }
    // 0x802A06D4: addiu       $v0, $zero, 0x21
    ctx->r2 = ADD32(0, 0X21);
L_802A06D8:
    // 0x802A06D8: sll         $t3, $v0, 3
    ctx->r11 = S32(ctx->r2 << 3);
    // 0x802A06DC: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x802A06E0: andi        $t5, $v0, 0xFF
    ctx->r13 = ctx->r2 & 0XFF;
    // 0x802A06E4: slti        $at, $t5, 0x27
    ctx->r1 = SIGNED(ctx->r13) < 0X27 ? 1 : 0;
    // 0x802A06E8: addu        $t4, $a1, $t3
    ctx->r12 = ADD32(ctx->r5, ctx->r11);
    // 0x802A06EC: or          $v0, $t5, $zero
    ctx->r2 = ctx->r13 | 0;
    // 0x802A06F0: bne         $at, $zero, L_802A06D8
    if (ctx->r1 != 0) {
        // 0x802A06F4: sh          $zero, 0x0($t4)
        MEM_H(0X0, ctx->r12) = 0;
            goto L_802A06D8;
    }
    // 0x802A06F4: sh          $zero, 0x0($t4)
    MEM_H(0X0, ctx->r12) = 0;
    // 0x802A06F8: addiu       $v0, $zero, 0x2C
    ctx->r2 = ADD32(0, 0X2C);
L_802A06FC:
    // 0x802A06FC: sll         $t6, $v0, 3
    ctx->r14 = S32(ctx->r2 << 3);
    // 0x802A0700: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x802A0704: andi        $t8, $v0, 0xFF
    ctx->r24 = ctx->r2 & 0XFF;
    // 0x802A0708: slti        $at, $t8, 0x30
    ctx->r1 = SIGNED(ctx->r24) < 0X30 ? 1 : 0;
    // 0x802A070C: addu        $t7, $a1, $t6
    ctx->r15 = ADD32(ctx->r5, ctx->r14);
    // 0x802A0710: or          $v0, $t8, $zero
    ctx->r2 = ctx->r24 | 0;
    // 0x802A0714: bne         $at, $zero, L_802A06FC
    if (ctx->r1 != 0) {
        // 0x802A0718: sh          $zero, 0x0($t7)
        MEM_H(0X0, ctx->r15) = 0;
            goto L_802A06FC;
    }
    // 0x802A0718: sh          $zero, 0x0($t7)
    MEM_H(0X0, ctx->r15) = 0;
    // 0x802A071C: b           L_802A0920
    // 0x802A0720: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
        goto L_802A0920;
    // 0x802A0720: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
L_802A0724:
    // 0x802A0724: lui         $at, 0x43C8
    ctx->r1 = S32(0X43C8 << 16);
    // 0x802A0728: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x802A072C: lui         $a1, 0x802C
    ctx->r5 = S32(0X802C << 16);
    // 0x802A0730: c.lt.s      $f8, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f8.fl < ctx->f0.fl;
    // 0x802A0734: addiu       $a1, $a1, 0x3600
    ctx->r5 = ADD32(ctx->r5, 0X3600);
    // 0x802A0738: bc1f        L_802A0768
    if (!c1cs) {
        // 0x802A073C: addiu       $v0, $zero, 0x19
        ctx->r2 = ADD32(0, 0X19);
            goto L_802A0768;
    }
    // 0x802A073C: addiu       $v0, $zero, 0x19
    ctx->r2 = ADD32(0, 0X19);
L_802A0740:
    // 0x802A0740: sll         $t9, $v0, 3
    ctx->r25 = S32(ctx->r2 << 3);
    // 0x802A0744: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x802A0748: andi        $t1, $v0, 0xFF
    ctx->r9 = ctx->r2 & 0XFF;
    // 0x802A074C: slti        $at, $t1, 0x1F
    ctx->r1 = SIGNED(ctx->r9) < 0X1F ? 1 : 0;
    // 0x802A0750: addu        $t0, $a1, $t9
    ctx->r8 = ADD32(ctx->r5, ctx->r25);
    // 0x802A0754: or          $v0, $t1, $zero
    ctx->r2 = ctx->r9 | 0;
    // 0x802A0758: bne         $at, $zero, L_802A0740
    if (ctx->r1 != 0) {
        // 0x802A075C: sh          $zero, 0x0($t0)
        MEM_H(0X0, ctx->r8) = 0;
            goto L_802A0740;
    }
    // 0x802A075C: sh          $zero, 0x0($t0)
    MEM_H(0X0, ctx->r8) = 0;
    // 0x802A0760: b           L_802A07D4
    // 0x802A0764: lui         $at, 0x4416
    ctx->r1 = S32(0X4416 << 16);
        goto L_802A07D4;
    // 0x802A0764: lui         $at, 0x4416
    ctx->r1 = S32(0X4416 << 16);
L_802A0768:
    // 0x802A0768: lui         $at, 0xC3C8
    ctx->r1 = S32(0XC3C8 << 16);
    // 0x802A076C: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x802A0770: nop

    // 0x802A0774: c.lt.s      $f0, $f10
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f0.fl < ctx->f10.fl;
    // 0x802A0778: nop

    // 0x802A077C: bc1f        L_802A07D0
    if (!c1cs) {
        // 0x802A0780: lui         $a1, 0x802C
        ctx->r5 = S32(0X802C << 16);
            goto L_802A07D0;
    }
    // 0x802A0780: lui         $a1, 0x802C
    ctx->r5 = S32(0X802C << 16);
    // 0x802A0784: addiu       $a1, $a1, 0x3600
    ctx->r5 = ADD32(ctx->r5, 0X3600);
    // 0x802A0788: addiu       $v0, $zero, 0x20
    ctx->r2 = ADD32(0, 0X20);
L_802A078C:
    // 0x802A078C: sll         $t2, $v0, 3
    ctx->r10 = S32(ctx->r2 << 3);
    // 0x802A0790: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x802A0794: andi        $t4, $v0, 0xFF
    ctx->r12 = ctx->r2 & 0XFF;
    // 0x802A0798: slti        $at, $t4, 0x26
    ctx->r1 = SIGNED(ctx->r12) < 0X26 ? 1 : 0;
    // 0x802A079C: addu        $t3, $a1, $t2
    ctx->r11 = ADD32(ctx->r5, ctx->r10);
    // 0x802A07A0: or          $v0, $t4, $zero
    ctx->r2 = ctx->r12 | 0;
    // 0x802A07A4: bne         $at, $zero, L_802A078C
    if (ctx->r1 != 0) {
        // 0x802A07A8: sh          $zero, 0x0($t3)
        MEM_H(0X0, ctx->r11) = 0;
            goto L_802A078C;
    }
    // 0x802A07A8: sh          $zero, 0x0($t3)
    MEM_H(0X0, ctx->r11) = 0;
    // 0x802A07AC: addiu       $v0, $zero, 0x2E
    ctx->r2 = ADD32(0, 0X2E);
L_802A07B0:
    // 0x802A07B0: sll         $t5, $v0, 3
    ctx->r13 = S32(ctx->r2 << 3);
    // 0x802A07B4: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x802A07B8: andi        $t7, $v0, 0xFF
    ctx->r15 = ctx->r2 & 0XFF;
    // 0x802A07BC: slti        $at, $t7, 0x32
    ctx->r1 = SIGNED(ctx->r15) < 0X32 ? 1 : 0;
    // 0x802A07C0: addu        $t6, $a1, $t5
    ctx->r14 = ADD32(ctx->r5, ctx->r13);
    // 0x802A07C4: or          $v0, $t7, $zero
    ctx->r2 = ctx->r15 | 0;
    // 0x802A07C8: bne         $at, $zero, L_802A07B0
    if (ctx->r1 != 0) {
        // 0x802A07CC: sh          $zero, 0x0($t6)
        MEM_H(0X0, ctx->r14) = 0;
            goto L_802A07B0;
    }
    // 0x802A07CC: sh          $zero, 0x0($t6)
    MEM_H(0X0, ctx->r14) = 0;
L_802A07D0:
    // 0x802A07D0: lui         $at, 0x4416
    ctx->r1 = S32(0X4416 << 16);
L_802A07D4:
    // 0x802A07D4: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x802A07D8: lui         $a1, 0x802C
    ctx->r5 = S32(0X802C << 16);
    // 0x802A07DC: c.lt.s      $f16, $f2
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f16.fl < ctx->f2.fl;
    // 0x802A07E0: addiu       $a1, $a1, 0x3600
    ctx->r5 = ADD32(ctx->r5, 0X3600);
    // 0x802A07E4: bc1f        L_802A07F4
    if (!c1cs) {
        // 0x802A07E8: lui         $at, 0xC416
        ctx->r1 = S32(0XC416 << 16);
            goto L_802A07F4;
    }
    // 0x802A07E8: lui         $at, 0xC416
    ctx->r1 = S32(0XC416 << 16);
    // 0x802A07EC: b           L_802A091C
    // 0x802A07F0: sh          $zero, 0xC0($a1)
    MEM_H(0XC0, ctx->r5) = 0;
        goto L_802A091C;
    // 0x802A07F0: sh          $zero, 0xC0($a1)
    MEM_H(0XC0, ctx->r5) = 0;
L_802A07F4:
    // 0x802A07F4: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x802A07F8: nop

    // 0x802A07FC: c.lt.s      $f2, $f18
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f2.fl < ctx->f18.fl;
    // 0x802A0800: nop

    // 0x802A0804: bc1f        L_802A0920
    if (!c1cs) {
        // 0x802A0808: addiu       $at, $zero, 0x3
        ctx->r1 = ADD32(0, 0X3);
            goto L_802A0920;
    }
    // 0x802A0808: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x802A080C: b           L_802A091C
    // 0x802A0810: sh          $zero, 0xF8($a1)
    MEM_H(0XF8, ctx->r5) = 0;
        goto L_802A091C;
    // 0x802A0810: sh          $zero, 0xF8($a1)
    MEM_H(0XF8, ctx->r5) = 0;
L_802A0814:
    // 0x802A0814: lui         $at, 0x43C8
    ctx->r1 = S32(0X43C8 << 16);
    // 0x802A0818: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x802A081C: addiu       $v0, $zero, 0x19
    ctx->r2 = ADD32(0, 0X19);
    // 0x802A0820: c.lt.s      $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f4.fl < ctx->f0.fl;
    // 0x802A0824: lui         $a1, 0x802C
    ctx->r5 = S32(0X802C << 16);
    // 0x802A0828: bc1f        L_802A085C
    if (!c1cs) {
        // 0x802A082C: lui         $at, 0xC3C8
        ctx->r1 = S32(0XC3C8 << 16);
            goto L_802A085C;
    }
    // 0x802A082C: lui         $at, 0xC3C8
    ctx->r1 = S32(0XC3C8 << 16);
    // 0x802A0830: addiu       $a1, $a1, 0x3600
    ctx->r5 = ADD32(ctx->r5, 0X3600);
L_802A0834:
    // 0x802A0834: sll         $t8, $v0, 3
    ctx->r24 = S32(ctx->r2 << 3);
    // 0x802A0838: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x802A083C: andi        $t0, $v0, 0xFF
    ctx->r8 = ctx->r2 & 0XFF;
    // 0x802A0840: slti        $at, $t0, 0x1F
    ctx->r1 = SIGNED(ctx->r8) < 0X1F ? 1 : 0;
    // 0x802A0844: addu        $t9, $a1, $t8
    ctx->r25 = ADD32(ctx->r5, ctx->r24);
    // 0x802A0848: or          $v0, $t0, $zero
    ctx->r2 = ctx->r8 | 0;
    // 0x802A084C: bne         $at, $zero, L_802A0834
    if (ctx->r1 != 0) {
        // 0x802A0850: sh          $zero, 0x0($t9)
        MEM_H(0X0, ctx->r25) = 0;
            goto L_802A0834;
    }
    // 0x802A0850: sh          $zero, 0x0($t9)
    MEM_H(0X0, ctx->r25) = 0;
    // 0x802A0854: b           L_802A0920
    // 0x802A0858: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
        goto L_802A0920;
    // 0x802A0858: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
L_802A085C:
    // 0x802A085C: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x802A0860: lui         $a1, 0x802C
    ctx->r5 = S32(0X802C << 16);
    // 0x802A0864: c.lt.s      $f0, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f0.fl < ctx->f6.fl;
    // 0x802A0868: addiu       $a1, $a1, 0x3600
    ctx->r5 = ADD32(ctx->r5, 0X3600);
    // 0x802A086C: bc1f        L_802A091C
    if (!c1cs) {
        // 0x802A0870: addiu       $v0, $zero, 0x21
        ctx->r2 = ADD32(0, 0X21);
            goto L_802A091C;
    }
    // 0x802A0870: addiu       $v0, $zero, 0x21
    ctx->r2 = ADD32(0, 0X21);
L_802A0874:
    // 0x802A0874: sll         $t1, $v0, 3
    ctx->r9 = S32(ctx->r2 << 3);
    // 0x802A0878: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x802A087C: andi        $t3, $v0, 0xFF
    ctx->r11 = ctx->r2 & 0XFF;
    // 0x802A0880: slti        $at, $t3, 0x27
    ctx->r1 = SIGNED(ctx->r11) < 0X27 ? 1 : 0;
    // 0x802A0884: addu        $t2, $a1, $t1
    ctx->r10 = ADD32(ctx->r5, ctx->r9);
    // 0x802A0888: or          $v0, $t3, $zero
    ctx->r2 = ctx->r11 | 0;
    // 0x802A088C: bne         $at, $zero, L_802A0874
    if (ctx->r1 != 0) {
        // 0x802A0890: sh          $zero, 0x0($t2)
        MEM_H(0X0, ctx->r10) = 0;
            goto L_802A0874;
    }
    // 0x802A0890: sh          $zero, 0x0($t2)
    MEM_H(0X0, ctx->r10) = 0;
    // 0x802A0894: b           L_802A0920
    // 0x802A0898: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
        goto L_802A0920;
    // 0x802A0898: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
L_802A089C:
    // 0x802A089C: lui         $at, 0x43C8
    ctx->r1 = S32(0X43C8 << 16);
    // 0x802A08A0: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x802A08A4: addiu       $v0, $zero, 0x18
    ctx->r2 = ADD32(0, 0X18);
    // 0x802A08A8: c.lt.s      $f8, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f8.fl < ctx->f0.fl;
    // 0x802A08AC: lui         $a1, 0x802C
    ctx->r5 = S32(0X802C << 16);
    // 0x802A08B0: bc1f        L_802A08E4
    if (!c1cs) {
        // 0x802A08B4: lui         $at, 0xC3C8
        ctx->r1 = S32(0XC3C8 << 16);
            goto L_802A08E4;
    }
    // 0x802A08B4: lui         $at, 0xC3C8
    ctx->r1 = S32(0XC3C8 << 16);
    // 0x802A08B8: addiu       $a1, $a1, 0x3600
    ctx->r5 = ADD32(ctx->r5, 0X3600);
L_802A08BC:
    // 0x802A08BC: sll         $t4, $v0, 3
    ctx->r12 = S32(ctx->r2 << 3);
    // 0x802A08C0: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x802A08C4: andi        $t6, $v0, 0xFF
    ctx->r14 = ctx->r2 & 0XFF;
    // 0x802A08C8: slti        $at, $t6, 0x20
    ctx->r1 = SIGNED(ctx->r14) < 0X20 ? 1 : 0;
    // 0x802A08CC: addu        $t5, $a1, $t4
    ctx->r13 = ADD32(ctx->r5, ctx->r12);
    // 0x802A08D0: or          $v0, $t6, $zero
    ctx->r2 = ctx->r14 | 0;
    // 0x802A08D4: bne         $at, $zero, L_802A08BC
    if (ctx->r1 != 0) {
        // 0x802A08D8: sh          $zero, 0x0($t5)
        MEM_H(0X0, ctx->r13) = 0;
            goto L_802A08BC;
    }
    // 0x802A08D8: sh          $zero, 0x0($t5)
    MEM_H(0X0, ctx->r13) = 0;
    // 0x802A08DC: b           L_802A0920
    // 0x802A08E0: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
        goto L_802A0920;
    // 0x802A08E0: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
L_802A08E4:
    // 0x802A08E4: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x802A08E8: lui         $a1, 0x802C
    ctx->r5 = S32(0X802C << 16);
    // 0x802A08EC: c.lt.s      $f0, $f10
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f0.fl < ctx->f10.fl;
    // 0x802A08F0: addiu       $a1, $a1, 0x3600
    ctx->r5 = ADD32(ctx->r5, 0X3600);
    // 0x802A08F4: bc1f        L_802A091C
    if (!c1cs) {
        // 0x802A08F8: addiu       $v0, $zero, 0x20
        ctx->r2 = ADD32(0, 0X20);
            goto L_802A091C;
    }
    // 0x802A08F8: addiu       $v0, $zero, 0x20
    ctx->r2 = ADD32(0, 0X20);
L_802A08FC:
    // 0x802A08FC: sll         $t7, $v0, 3
    ctx->r15 = S32(ctx->r2 << 3);
    // 0x802A0900: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x802A0904: andi        $t9, $v0, 0xFF
    ctx->r25 = ctx->r2 & 0XFF;
    // 0x802A0908: slti        $at, $t9, 0x28
    ctx->r1 = SIGNED(ctx->r25) < 0X28 ? 1 : 0;
    // 0x802A090C: addu        $t8, $a1, $t7
    ctx->r24 = ADD32(ctx->r5, ctx->r15);
    // 0x802A0910: or          $v0, $t9, $zero
    ctx->r2 = ctx->r25 | 0;
    // 0x802A0914: bne         $at, $zero, L_802A08FC
    if (ctx->r1 != 0) {
        // 0x802A0918: sh          $zero, 0x0($t8)
        MEM_H(0X0, ctx->r24) = 0;
            goto L_802A08FC;
    }
    // 0x802A0918: sh          $zero, 0x0($t8)
    MEM_H(0X0, ctx->r24) = 0;
L_802A091C:
    // 0x802A091C: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
L_802A0920:
    // 0x802A0920: bne         $v1, $at, L_802A0958
    if (ctx->r3 != ctx->r1) {
        // 0x802A0924: lui         $at, 0x43FA
        ctx->r1 = S32(0X43FA << 16);
            goto L_802A0958;
    }
    // 0x802A0924: lui         $at, 0x43FA
    ctx->r1 = S32(0X43FA << 16);
    // 0x802A0928: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x802A092C: lui         $at, 0xC3FA
    ctx->r1 = S32(0XC3FA << 16);
    // 0x802A0930: c.lt.s      $f16, $f2
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f16.fl < ctx->f2.fl;
    // 0x802A0934: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x802A0938: bc1f        L_802A0944
    if (!c1cs) {
        // 0x802A093C: nop
    
            goto L_802A0944;
    }
    // 0x802A093C: nop

    // 0x802A0940: sh          $zero, 0x30($a0)
    MEM_H(0X30, ctx->r4) = 0;
L_802A0944:
    // 0x802A0944: c.lt.s      $f2, $f18
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f2.fl < ctx->f18.fl;
    // 0x802A0948: nop

    // 0x802A094C: bc1f        L_802A0958
    if (!c1cs) {
        // 0x802A0950: nop
    
            goto L_802A0958;
    }
    // 0x802A0950: nop

    // 0x802A0954: sh          $zero, 0x68($a0)
    MEM_H(0X68, ctx->r4) = 0;
L_802A0958:
    // 0x802A0958: jr          $ra
    // 0x802A095C: nop

    return;
    // 0x802A095C: nop

;}
RECOMP_FUNC void func_802A0960(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802A0960: jr          $ra
    // 0x802A0964: nop

    return;
    // 0x802A0964: nop

;}
RECOMP_FUNC void func_802A0968(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802A0968: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802A096C: lui         $a0, 0x802C
    ctx->r4 = S32(0X802C << 16);
    // 0x802A0970: lui         $a1, 0x8011
    ctx->r5 = S32(0X8011 << 16);
    // 0x802A0974: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802A0978: addiu       $a0, $a0, 0x3600
    ctx->r4 = ADD32(ctx->r4, 0X3600);
    // 0x802A097C: addiu       $a1, $a1, -0x2F94
    ctx->r5 = ADD32(ctx->r5, -0X2F94);
    // 0x802A0980: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x802A0984: lui         $a3, 0x600
    ctx->r7 = S32(0X600 << 16);
L_802A0988:
    // 0x802A0988: lhu         $t6, 0x0($a0)
    ctx->r14 = MEM_HU(ctx->r4, 0X0);
    // 0x802A098C: addiu       $a2, $a2, 0x1
    ctx->r6 = ADD32(ctx->r6, 0X1);
    // 0x802A0990: beq         $t6, $zero, L_802A09C8
    if (ctx->r14 == 0) {
        // 0x802A0994: slti        $at, $a2, 0x10
        ctx->r1 = SIGNED(ctx->r6) < 0X10 ? 1 : 0;
            goto L_802A09C8;
    }
    // 0x802A0994: slti        $at, $a2, 0x10
    ctx->r1 = SIGNED(ctx->r6) < 0X10 ? 1 : 0;
    // 0x802A0998: lw          $t7, 0x4($a0)
    ctx->r15 = MEM_W(ctx->r4, 0X4);
    // 0x802A099C: nop

    // 0x802A09A0: beq         $t7, $zero, L_802A09C8
    if (ctx->r15 == 0) {
        // 0x802A09A4: nop
    
            goto L_802A09C8;
    }
    // 0x802A09A4: nop

    // 0x802A09A8: lw          $v0, 0x0($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X0);
    // 0x802A09AC: nop

    // 0x802A09B0: addiu       $t8, $v0, 0x8
    ctx->r24 = ADD32(ctx->r2, 0X8);
    // 0x802A09B4: sw          $t8, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r24;
    // 0x802A09B8: sw          $a3, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r7;
    // 0x802A09BC: lw          $t9, 0x4($a0)
    ctx->r25 = MEM_W(ctx->r4, 0X4);
    // 0x802A09C0: nop

    // 0x802A09C4: sw          $t9, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r25;
L_802A09C8:
    // 0x802A09C8: bne         $at, $zero, L_802A0988
    if (ctx->r1 != 0) {
        // 0x802A09CC: addiu       $a0, $a0, 0x8
        ctx->r4 = ADD32(ctx->r4, 0X8);
            goto L_802A0988;
    }
    // 0x802A09CC: addiu       $a0, $a0, 0x8
    ctx->r4 = ADD32(ctx->r4, 0X8);
    // 0x802A09D0: jal         0x8000A418
    // 0x802A09D4: nop

    func_8000A418(rdram, ctx);
        goto after_0;
    // 0x802A09D4: nop

    after_0:
    // 0x802A09D8: lui         $t1, 0x802C
    ctx->r9 = S32(0X802C << 16);
    // 0x802A09DC: lhu         $t1, 0x3680($t1)
    ctx->r9 = MEM_HU(ctx->r9, 0X3680);
    // 0x802A09E0: lui         $a1, 0x8011
    ctx->r5 = S32(0X8011 << 16);
    // 0x802A09E4: addiu       $a1, $a1, -0x2F94
    ctx->r5 = ADD32(ctx->r5, -0X2F94);
    // 0x802A09E8: beq         $t1, $zero, L_802A0A24
    if (ctx->r9 == 0) {
        // 0x802A09EC: lui         $a3, 0x600
        ctx->r7 = S32(0X600 << 16);
            goto L_802A0A24;
    }
    // 0x802A09EC: lui         $a3, 0x600
    ctx->r7 = S32(0X600 << 16);
    // 0x802A09F0: lui         $t2, 0x802C
    ctx->r10 = S32(0X802C << 16);
    // 0x802A09F4: lw          $t2, 0x3684($t2)
    ctx->r10 = MEM_W(ctx->r10, 0X3684);
    // 0x802A09F8: nop

    // 0x802A09FC: beq         $t2, $zero, L_802A0A24
    if (ctx->r10 == 0) {
        // 0x802A0A00: nop
    
            goto L_802A0A24;
    }
    // 0x802A0A00: nop

    // 0x802A0A04: lw          $v0, 0x0($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X0);
    // 0x802A0A08: lui         $t4, 0x802C
    ctx->r12 = S32(0X802C << 16);
    // 0x802A0A0C: addiu       $t3, $v0, 0x8
    ctx->r11 = ADD32(ctx->r2, 0X8);
    // 0x802A0A10: sw          $t3, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r11;
    // 0x802A0A14: sw          $a3, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r7;
    // 0x802A0A18: lw          $t4, 0x3684($t4)
    ctx->r12 = MEM_W(ctx->r12, 0X3684);
    // 0x802A0A1C: nop

    // 0x802A0A20: sw          $t4, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r12;
L_802A0A24:
    // 0x802A0A24: lui         $a0, 0x802C
    ctx->r4 = S32(0X802C << 16);
    // 0x802A0A28: addiu       $a0, $a0, 0x3688
    ctx->r4 = ADD32(ctx->r4, 0X3688);
    // 0x802A0A2C: lhu         $t5, 0x0($a0)
    ctx->r13 = MEM_HU(ctx->r4, 0X0);
    // 0x802A0A30: addiu       $a2, $zero, 0x12
    ctx->r6 = ADD32(0, 0X12);
    // 0x802A0A34: beq         $t5, $zero, L_802A0A6C
    if (ctx->r13 == 0) {
        // 0x802A0A38: addiu       $t0, $zero, 0x46
        ctx->r8 = ADD32(0, 0X46);
            goto L_802A0A6C;
    }
    // 0x802A0A38: addiu       $t0, $zero, 0x46
    ctx->r8 = ADD32(0, 0X46);
    // 0x802A0A3C: lw          $t6, 0x4($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X4);
    // 0x802A0A40: nop

    // 0x802A0A44: beq         $t6, $zero, L_802A0A6C
    if (ctx->r14 == 0) {
        // 0x802A0A48: nop
    
            goto L_802A0A6C;
    }
    // 0x802A0A48: nop

    // 0x802A0A4C: lw          $v0, 0x0($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X0);
    // 0x802A0A50: nop

    // 0x802A0A54: addiu       $t7, $v0, 0x8
    ctx->r15 = ADD32(ctx->r2, 0X8);
    // 0x802A0A58: sw          $t7, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r15;
    // 0x802A0A5C: sw          $a3, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r7;
    // 0x802A0A60: lw          $t8, 0x4($a0)
    ctx->r24 = MEM_W(ctx->r4, 0X4);
    // 0x802A0A64: nop

    // 0x802A0A68: sw          $t8, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r24;
L_802A0A6C:
    // 0x802A0A6C: addiu       $a0, $a0, 0x8
    ctx->r4 = ADD32(ctx->r4, 0X8);
L_802A0A70:
    // 0x802A0A70: lhu         $t9, 0x0($a0)
    ctx->r25 = MEM_HU(ctx->r4, 0X0);
    // 0x802A0A74: addiu       $a2, $a2, 0x4
    ctx->r6 = ADD32(ctx->r6, 0X4);
    // 0x802A0A78: beq         $t9, $zero, L_802A0AB0
    if (ctx->r25 == 0) {
        // 0x802A0A7C: nop
    
            goto L_802A0AB0;
    }
    // 0x802A0A7C: nop

    // 0x802A0A80: lw          $t1, 0x4($a0)
    ctx->r9 = MEM_W(ctx->r4, 0X4);
    // 0x802A0A84: nop

    // 0x802A0A88: beq         $t1, $zero, L_802A0AB0
    if (ctx->r9 == 0) {
        // 0x802A0A8C: nop
    
            goto L_802A0AB0;
    }
    // 0x802A0A8C: nop

    // 0x802A0A90: lw          $v0, 0x0($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X0);
    // 0x802A0A94: nop

    // 0x802A0A98: addiu       $t2, $v0, 0x8
    ctx->r10 = ADD32(ctx->r2, 0X8);
    // 0x802A0A9C: sw          $t2, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r10;
    // 0x802A0AA0: sw          $a3, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r7;
    // 0x802A0AA4: lw          $t3, 0x4($a0)
    ctx->r11 = MEM_W(ctx->r4, 0X4);
    // 0x802A0AA8: nop

    // 0x802A0AAC: sw          $t3, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r11;
L_802A0AB0:
    // 0x802A0AB0: lhu         $t4, 0x8($a0)
    ctx->r12 = MEM_HU(ctx->r4, 0X8);
    // 0x802A0AB4: addiu       $a0, $a0, 0x8
    ctx->r4 = ADD32(ctx->r4, 0X8);
    // 0x802A0AB8: beq         $t4, $zero, L_802A0AF0
    if (ctx->r12 == 0) {
        // 0x802A0ABC: nop
    
            goto L_802A0AF0;
    }
    // 0x802A0ABC: nop

    // 0x802A0AC0: lw          $t5, 0x4($a0)
    ctx->r13 = MEM_W(ctx->r4, 0X4);
    // 0x802A0AC4: nop

    // 0x802A0AC8: beq         $t5, $zero, L_802A0AF0
    if (ctx->r13 == 0) {
        // 0x802A0ACC: nop
    
            goto L_802A0AF0;
    }
    // 0x802A0ACC: nop

    // 0x802A0AD0: lw          $v0, 0x0($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X0);
    // 0x802A0AD4: nop

    // 0x802A0AD8: addiu       $t6, $v0, 0x8
    ctx->r14 = ADD32(ctx->r2, 0X8);
    // 0x802A0ADC: sw          $t6, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r14;
    // 0x802A0AE0: sw          $a3, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r7;
    // 0x802A0AE4: lw          $t7, 0x4($a0)
    ctx->r15 = MEM_W(ctx->r4, 0X4);
    // 0x802A0AE8: nop

    // 0x802A0AEC: sw          $t7, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r15;
L_802A0AF0:
    // 0x802A0AF0: lhu         $t8, 0x8($a0)
    ctx->r24 = MEM_HU(ctx->r4, 0X8);
    // 0x802A0AF4: addiu       $a0, $a0, 0x8
    ctx->r4 = ADD32(ctx->r4, 0X8);
    // 0x802A0AF8: beq         $t8, $zero, L_802A0B30
    if (ctx->r24 == 0) {
        // 0x802A0AFC: nop
    
            goto L_802A0B30;
    }
    // 0x802A0AFC: nop

    // 0x802A0B00: lw          $t9, 0x4($a0)
    ctx->r25 = MEM_W(ctx->r4, 0X4);
    // 0x802A0B04: nop

    // 0x802A0B08: beq         $t9, $zero, L_802A0B30
    if (ctx->r25 == 0) {
        // 0x802A0B0C: nop
    
            goto L_802A0B30;
    }
    // 0x802A0B0C: nop

    // 0x802A0B10: lw          $v0, 0x0($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X0);
    // 0x802A0B14: nop

    // 0x802A0B18: addiu       $t1, $v0, 0x8
    ctx->r9 = ADD32(ctx->r2, 0X8);
    // 0x802A0B1C: sw          $t1, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r9;
    // 0x802A0B20: sw          $a3, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r7;
    // 0x802A0B24: lw          $t2, 0x4($a0)
    ctx->r10 = MEM_W(ctx->r4, 0X4);
    // 0x802A0B28: nop

    // 0x802A0B2C: sw          $t2, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r10;
L_802A0B30:
    // 0x802A0B30: lhu         $t3, 0x8($a0)
    ctx->r11 = MEM_HU(ctx->r4, 0X8);
    // 0x802A0B34: addiu       $a0, $a0, 0x8
    ctx->r4 = ADD32(ctx->r4, 0X8);
    // 0x802A0B38: beq         $t3, $zero, L_802A0B70
    if (ctx->r11 == 0) {
        // 0x802A0B3C: nop
    
            goto L_802A0B70;
    }
    // 0x802A0B3C: nop

    // 0x802A0B40: lw          $t4, 0x4($a0)
    ctx->r12 = MEM_W(ctx->r4, 0X4);
    // 0x802A0B44: nop

    // 0x802A0B48: beq         $t4, $zero, L_802A0B70
    if (ctx->r12 == 0) {
        // 0x802A0B4C: nop
    
            goto L_802A0B70;
    }
    // 0x802A0B4C: nop

    // 0x802A0B50: lw          $v0, 0x0($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X0);
    // 0x802A0B54: nop

    // 0x802A0B58: addiu       $t5, $v0, 0x8
    ctx->r13 = ADD32(ctx->r2, 0X8);
    // 0x802A0B5C: sw          $t5, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r13;
    // 0x802A0B60: sw          $a3, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r7;
    // 0x802A0B64: lw          $t6, 0x4($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X4);
    // 0x802A0B68: nop

    // 0x802A0B6C: sw          $t6, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r14;
L_802A0B70:
    // 0x802A0B70: bne         $a2, $t0, L_802A0A70
    if (ctx->r6 != ctx->r8) {
        // 0x802A0B74: addiu       $a0, $a0, 0x8
        ctx->r4 = ADD32(ctx->r4, 0X8);
            goto L_802A0A70;
    }
    // 0x802A0B74: addiu       $a0, $a0, 0x8
    ctx->r4 = ADD32(ctx->r4, 0X8);
    // 0x802A0B78: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802A0B7C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x802A0B80: jr          $ra
    // 0x802A0B84: nop

    return;
    // 0x802A0B84: nop

;}
RECOMP_FUNC void func_802A0B88(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802A0B88: lui         $t6, 0x802C
    ctx->r14 = S32(0X802C << 16);
    // 0x802A0B8C: lhu         $t6, 0x3830($t6)
    ctx->r14 = MEM_HU(ctx->r14, 0X3830);
    // 0x802A0B90: lui         $v0, 0x802C
    ctx->r2 = S32(0X802C << 16);
    // 0x802A0B94: bne         $t6, $zero, L_802A0BAC
    if (ctx->r14 != 0) {
        // 0x802A0B98: addiu       $v0, $v0, 0x3838
        ctx->r2 = ADD32(ctx->r2, 0X3838);
            goto L_802A0BAC;
    }
    // 0x802A0B98: addiu       $v0, $v0, 0x3838
    ctx->r2 = ADD32(ctx->r2, 0X3838);
    // 0x802A0B9C: lui         $a2, 0x8011
    ctx->r6 = S32(0X8011 << 16);
    // 0x802A0BA0: addiu       $a2, $a2, -0x2F94
    ctx->r6 = ADD32(ctx->r6, -0X2F94);
    // 0x802A0BA4: b           L_802A0BF0
    // 0x802A0BA8: lui         $a3, 0x600
    ctx->r7 = S32(0X600 << 16);
        goto L_802A0BF0;
    // 0x802A0BA8: lui         $a3, 0x600
    ctx->r7 = S32(0X600 << 16);
L_802A0BAC:
    // 0x802A0BAC: lui         $t7, 0x802C
    ctx->r15 = S32(0X802C << 16);
    // 0x802A0BB0: lw          $t7, 0x3834($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X3834);
    // 0x802A0BB4: lui         $a2, 0x8011
    ctx->r6 = S32(0X8011 << 16);
    // 0x802A0BB8: beq         $t7, $zero, L_802A0BE4
    if (ctx->r15 == 0) {
        // 0x802A0BBC: addiu       $a2, $a2, -0x2F94
        ctx->r6 = ADD32(ctx->r6, -0X2F94);
            goto L_802A0BE4;
    }
    // 0x802A0BBC: addiu       $a2, $a2, -0x2F94
    ctx->r6 = ADD32(ctx->r6, -0X2F94);
    // 0x802A0BC0: lw          $a1, 0x0($a2)
    ctx->r5 = MEM_W(ctx->r6, 0X0);
    // 0x802A0BC4: lui         $a3, 0x600
    ctx->r7 = S32(0X600 << 16);
    // 0x802A0BC8: addiu       $t8, $a1, 0x8
    ctx->r24 = ADD32(ctx->r5, 0X8);
    // 0x802A0BCC: sw          $t8, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r24;
    // 0x802A0BD0: lui         $t9, 0x802C
    ctx->r25 = S32(0X802C << 16);
    // 0x802A0BD4: sw          $a3, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r7;
    // 0x802A0BD8: lw          $t9, 0x3834($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X3834);
    // 0x802A0BDC: nop

    // 0x802A0BE0: sw          $t9, 0x4($a1)
    MEM_W(0X4, ctx->r5) = ctx->r25;
L_802A0BE4:
    // 0x802A0BE4: lui         $a2, 0x8011
    ctx->r6 = S32(0X8011 << 16);
    // 0x802A0BE8: addiu       $a2, $a2, -0x2F94
    ctx->r6 = ADD32(ctx->r6, -0X2F94);
    // 0x802A0BEC: lui         $a3, 0x600
    ctx->r7 = S32(0X600 << 16);
L_802A0BF0:
    // 0x802A0BF0: lhu         $t1, 0x0($v0)
    ctx->r9 = MEM_HU(ctx->r2, 0X0);
    // 0x802A0BF4: addiu       $v1, $zero, 0x2
    ctx->r3 = ADD32(0, 0X2);
    // 0x802A0BF8: beq         $t1, $zero, L_802A0C30
    if (ctx->r9 == 0) {
        // 0x802A0BFC: addiu       $t0, $zero, 0x12
        ctx->r8 = ADD32(0, 0X12);
            goto L_802A0C30;
    }
    // 0x802A0BFC: addiu       $t0, $zero, 0x12
    ctx->r8 = ADD32(0, 0X12);
    // 0x802A0C00: lw          $t2, 0x4($v0)
    ctx->r10 = MEM_W(ctx->r2, 0X4);
    // 0x802A0C04: nop

    // 0x802A0C08: beq         $t2, $zero, L_802A0C30
    if (ctx->r10 == 0) {
        // 0x802A0C0C: nop
    
            goto L_802A0C30;
    }
    // 0x802A0C0C: nop

    // 0x802A0C10: lw          $a1, 0x0($a2)
    ctx->r5 = MEM_W(ctx->r6, 0X0);
    // 0x802A0C14: nop

    // 0x802A0C18: addiu       $t3, $a1, 0x8
    ctx->r11 = ADD32(ctx->r5, 0X8);
    // 0x802A0C1C: sw          $t3, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r11;
    // 0x802A0C20: sw          $a3, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r7;
    // 0x802A0C24: lw          $t4, 0x4($v0)
    ctx->r12 = MEM_W(ctx->r2, 0X4);
    // 0x802A0C28: nop

    // 0x802A0C2C: sw          $t4, 0x4($a1)
    MEM_W(0X4, ctx->r5) = ctx->r12;
L_802A0C30:
    // 0x802A0C30: addiu       $v0, $v0, 0x8
    ctx->r2 = ADD32(ctx->r2, 0X8);
L_802A0C34:
    // 0x802A0C34: lhu         $t5, 0x0($v0)
    ctx->r13 = MEM_HU(ctx->r2, 0X0);
    // 0x802A0C38: addiu       $v1, $v1, 0x4
    ctx->r3 = ADD32(ctx->r3, 0X4);
    // 0x802A0C3C: beq         $t5, $zero, L_802A0C74
    if (ctx->r13 == 0) {
        // 0x802A0C40: nop
    
            goto L_802A0C74;
    }
    // 0x802A0C40: nop

    // 0x802A0C44: lw          $t6, 0x4($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X4);
    // 0x802A0C48: nop

    // 0x802A0C4C: beq         $t6, $zero, L_802A0C74
    if (ctx->r14 == 0) {
        // 0x802A0C50: nop
    
            goto L_802A0C74;
    }
    // 0x802A0C50: nop

    // 0x802A0C54: lw          $a1, 0x0($a2)
    ctx->r5 = MEM_W(ctx->r6, 0X0);
    // 0x802A0C58: nop

    // 0x802A0C5C: addiu       $t7, $a1, 0x8
    ctx->r15 = ADD32(ctx->r5, 0X8);
    // 0x802A0C60: sw          $t7, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r15;
    // 0x802A0C64: sw          $a3, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r7;
    // 0x802A0C68: lw          $t8, 0x4($v0)
    ctx->r24 = MEM_W(ctx->r2, 0X4);
    // 0x802A0C6C: nop

    // 0x802A0C70: sw          $t8, 0x4($a1)
    MEM_W(0X4, ctx->r5) = ctx->r24;
L_802A0C74:
    // 0x802A0C74: lhu         $t9, 0x8($v0)
    ctx->r25 = MEM_HU(ctx->r2, 0X8);
    // 0x802A0C78: addiu       $v0, $v0, 0x8
    ctx->r2 = ADD32(ctx->r2, 0X8);
    // 0x802A0C7C: beq         $t9, $zero, L_802A0CB4
    if (ctx->r25 == 0) {
        // 0x802A0C80: nop
    
            goto L_802A0CB4;
    }
    // 0x802A0C80: nop

    // 0x802A0C84: lw          $t1, 0x4($v0)
    ctx->r9 = MEM_W(ctx->r2, 0X4);
    // 0x802A0C88: nop

    // 0x802A0C8C: beq         $t1, $zero, L_802A0CB4
    if (ctx->r9 == 0) {
        // 0x802A0C90: nop
    
            goto L_802A0CB4;
    }
    // 0x802A0C90: nop

    // 0x802A0C94: lw          $a1, 0x0($a2)
    ctx->r5 = MEM_W(ctx->r6, 0X0);
    // 0x802A0C98: nop

    // 0x802A0C9C: addiu       $t2, $a1, 0x8
    ctx->r10 = ADD32(ctx->r5, 0X8);
    // 0x802A0CA0: sw          $t2, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r10;
    // 0x802A0CA4: sw          $a3, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r7;
    // 0x802A0CA8: lw          $t3, 0x4($v0)
    ctx->r11 = MEM_W(ctx->r2, 0X4);
    // 0x802A0CAC: nop

    // 0x802A0CB0: sw          $t3, 0x4($a1)
    MEM_W(0X4, ctx->r5) = ctx->r11;
L_802A0CB4:
    // 0x802A0CB4: lhu         $t4, 0x8($v0)
    ctx->r12 = MEM_HU(ctx->r2, 0X8);
    // 0x802A0CB8: addiu       $v0, $v0, 0x8
    ctx->r2 = ADD32(ctx->r2, 0X8);
    // 0x802A0CBC: beq         $t4, $zero, L_802A0CF4
    if (ctx->r12 == 0) {
        // 0x802A0CC0: nop
    
            goto L_802A0CF4;
    }
    // 0x802A0CC0: nop

    // 0x802A0CC4: lw          $t5, 0x4($v0)
    ctx->r13 = MEM_W(ctx->r2, 0X4);
    // 0x802A0CC8: nop

    // 0x802A0CCC: beq         $t5, $zero, L_802A0CF4
    if (ctx->r13 == 0) {
        // 0x802A0CD0: nop
    
            goto L_802A0CF4;
    }
    // 0x802A0CD0: nop

    // 0x802A0CD4: lw          $a1, 0x0($a2)
    ctx->r5 = MEM_W(ctx->r6, 0X0);
    // 0x802A0CD8: nop

    // 0x802A0CDC: addiu       $t6, $a1, 0x8
    ctx->r14 = ADD32(ctx->r5, 0X8);
    // 0x802A0CE0: sw          $t6, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r14;
    // 0x802A0CE4: sw          $a3, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r7;
    // 0x802A0CE8: lw          $t7, 0x4($v0)
    ctx->r15 = MEM_W(ctx->r2, 0X4);
    // 0x802A0CEC: nop

    // 0x802A0CF0: sw          $t7, 0x4($a1)
    MEM_W(0X4, ctx->r5) = ctx->r15;
L_802A0CF4:
    // 0x802A0CF4: lhu         $t8, 0x8($v0)
    ctx->r24 = MEM_HU(ctx->r2, 0X8);
    // 0x802A0CF8: addiu       $v0, $v0, 0x8
    ctx->r2 = ADD32(ctx->r2, 0X8);
    // 0x802A0CFC: beq         $t8, $zero, L_802A0D34
    if (ctx->r24 == 0) {
        // 0x802A0D00: nop
    
            goto L_802A0D34;
    }
    // 0x802A0D00: nop

    // 0x802A0D04: lw          $t9, 0x4($v0)
    ctx->r25 = MEM_W(ctx->r2, 0X4);
    // 0x802A0D08: nop

    // 0x802A0D0C: beq         $t9, $zero, L_802A0D34
    if (ctx->r25 == 0) {
        // 0x802A0D10: nop
    
            goto L_802A0D34;
    }
    // 0x802A0D10: nop

    // 0x802A0D14: lw          $a1, 0x0($a2)
    ctx->r5 = MEM_W(ctx->r6, 0X0);
    // 0x802A0D18: nop

    // 0x802A0D1C: addiu       $t1, $a1, 0x8
    ctx->r9 = ADD32(ctx->r5, 0X8);
    // 0x802A0D20: sw          $t1, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r9;
    // 0x802A0D24: sw          $a3, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r7;
    // 0x802A0D28: lw          $t2, 0x4($v0)
    ctx->r10 = MEM_W(ctx->r2, 0X4);
    // 0x802A0D2C: nop

    // 0x802A0D30: sw          $t2, 0x4($a1)
    MEM_W(0X4, ctx->r5) = ctx->r10;
L_802A0D34:
    // 0x802A0D34: bne         $v1, $t0, L_802A0C34
    if (ctx->r3 != ctx->r8) {
        // 0x802A0D38: addiu       $v0, $v0, 0x8
        ctx->r2 = ADD32(ctx->r2, 0X8);
            goto L_802A0C34;
    }
    // 0x802A0D38: addiu       $v0, $v0, 0x8
    ctx->r2 = ADD32(ctx->r2, 0X8);
    // 0x802A0D3C: jr          $ra
    // 0x802A0D40: nop

    return;
    // 0x802A0D40: nop

;}
RECOMP_FUNC void func_802A0D44(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802A0D44: lui         $v1, 0x802C
    ctx->r3 = S32(0X802C << 16);
    // 0x802A0D48: addiu       $v1, $v1, 0x3600
    ctx->r3 = ADD32(ctx->r3, 0X3600);
    // 0x802A0D4C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_802A0D50:
    // 0x802A0D50: sll         $t6, $v0, 3
    ctx->r14 = S32(ctx->r2 << 3);
    // 0x802A0D54: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x802A0D58: andi        $t8, $v0, 0xFF
    ctx->r24 = ctx->r2 & 0XFF;
    // 0x802A0D5C: slti        $at, $t8, 0x46
    ctx->r1 = SIGNED(ctx->r24) < 0X46 ? 1 : 0;
    // 0x802A0D60: addu        $t7, $v1, $t6
    ctx->r15 = ADD32(ctx->r3, ctx->r14);
    // 0x802A0D64: or          $v0, $t8, $zero
    ctx->r2 = ctx->r24 | 0;
    // 0x802A0D68: bne         $at, $zero, L_802A0D50
    if (ctx->r1 != 0) {
        // 0x802A0D6C: sw          $zero, 0x4($t7)
        MEM_W(0X4, ctx->r15) = 0;
            goto L_802A0D50;
    }
    // 0x802A0D6C: sw          $zero, 0x4($t7)
    MEM_W(0X4, ctx->r15) = 0;
    // 0x802A0D70: lui         $v1, 0x8011
    ctx->r3 = S32(0X8011 << 16);
    // 0x802A0D74: addiu       $v1, $v1, -0x2F98
    ctx->r3 = ADD32(ctx->r3, -0X2F98);
    // 0x802A0D78: lw          $t9, 0x0($v1)
    ctx->r25 = MEM_W(ctx->r3, 0X0);
    // 0x802A0D7C: lui         $a0, 0x2
    ctx->r4 = S32(0X2 << 16);
    // 0x802A0D80: ori         $a0, $a0, 0x8000
    ctx->r4 = ctx->r4 | 0X8000;
    // 0x802A0D84: lui         $a1, 0xA01
    ctx->r5 = S32(0XA01 << 16);
    // 0x802A0D88: addiu       $a1, $a1, -0x6BA0
    ctx->r5 = ADD32(ctx->r5, -0X6BA0);
    // 0x802A0D8C: addu        $t1, $t9, $a0
    ctx->r9 = ADD32(ctx->r25, ctx->r4);
    // 0x802A0D90: sw          $a1, 0x13CC($t1)
    MEM_W(0X13CC, ctx->r9) = ctx->r5;
    // 0x802A0D94: lw          $t2, 0x0($v1)
    ctx->r10 = MEM_W(ctx->r3, 0X0);
    // 0x802A0D98: addiu       $a2, $zero, 0x48
    ctx->r6 = ADD32(0, 0X48);
    // 0x802A0D9C: addu        $t3, $t2, $a0
    ctx->r11 = ADD32(ctx->r10, ctx->r4);
    // 0x802A0DA0: sw          $a2, 0x13D0($t3)
    MEM_W(0X13D0, ctx->r11) = ctx->r6;
    // 0x802A0DA4: lw          $t4, 0x0($v1)
    ctx->r12 = MEM_W(ctx->r3, 0X0);
    // 0x802A0DA8: lui         $a3, 0xA00
    ctx->r7 = S32(0XA00 << 16);
    // 0x802A0DAC: addiu       $a3, $a3, 0x4E20
    ctx->r7 = ADD32(ctx->r7, 0X4E20);
    // 0x802A0DB0: addu        $t5, $t4, $a0
    ctx->r13 = ADD32(ctx->r12, ctx->r4);
    // 0x802A0DB4: sw          $a3, 0x1400($t5)
    MEM_W(0X1400, ctx->r13) = ctx->r7;
    // 0x802A0DB8: lw          $t6, 0x0($v1)
    ctx->r14 = MEM_W(ctx->r3, 0X0);
    // 0x802A0DBC: lui         $t0, 0x802C
    ctx->r8 = S32(0X802C << 16);
    // 0x802A0DC0: addu        $t7, $t6, $a0
    ctx->r15 = ADD32(ctx->r14, ctx->r4);
    // 0x802A0DC4: sw          $a2, 0x1404($t7)
    MEM_W(0X1404, ctx->r15) = ctx->r6;
    // 0x802A0DC8: lw          $t8, 0x0($v1)
    ctx->r24 = MEM_W(ctx->r3, 0X0);
    // 0x802A0DCC: addiu       $t0, $t0, 0x3830
    ctx->r8 = ADD32(ctx->r8, 0X3830);
    // 0x802A0DD0: addu        $t9, $t8, $a0
    ctx->r25 = ADD32(ctx->r24, ctx->r4);
    // 0x802A0DD4: sw          $a3, 0x1434($t9)
    MEM_W(0X1434, ctx->r25) = ctx->r7;
    // 0x802A0DD8: lw          $t1, 0x0($v1)
    ctx->r9 = MEM_W(ctx->r3, 0X0);
    // 0x802A0DDC: addiu       $v0, $zero, 0x6
    ctx->r2 = ADD32(0, 0X6);
    // 0x802A0DE0: addu        $t2, $t1, $a0
    ctx->r10 = ADD32(ctx->r9, ctx->r4);
    // 0x802A0DE4: sw          $a2, 0x1438($t2)
    MEM_W(0X1438, ctx->r10) = ctx->r6;
    // 0x802A0DE8: lw          $t3, 0x0($v1)
    ctx->r11 = MEM_W(ctx->r3, 0X0);
    // 0x802A0DEC: lui         $t2, 0xA01
    ctx->r10 = S32(0XA01 << 16);
    // 0x802A0DF0: addu        $t4, $t3, $a0
    ctx->r12 = ADD32(ctx->r11, ctx->r4);
    // 0x802A0DF4: sw          $a3, 0x1468($t4)
    MEM_W(0X1468, ctx->r12) = ctx->r7;
    // 0x802A0DF8: lw          $t5, 0x0($v1)
    ctx->r13 = MEM_W(ctx->r3, 0X0);
    // 0x802A0DFC: lui         $t3, 0xA01
    ctx->r11 = S32(0XA01 << 16);
    // 0x802A0E00: addu        $t6, $t5, $a0
    ctx->r14 = ADD32(ctx->r13, ctx->r4);
    // 0x802A0E04: sw          $a2, 0x146C($t6)
    MEM_W(0X146C, ctx->r14) = ctx->r6;
    // 0x802A0E08: lw          $t7, 0x0($v1)
    ctx->r15 = MEM_W(ctx->r3, 0X0);
    // 0x802A0E0C: lui         $t4, 0xA01
    ctx->r12 = S32(0XA01 << 16);
    // 0x802A0E10: addu        $t8, $t7, $a0
    ctx->r24 = ADD32(ctx->r15, ctx->r4);
    // 0x802A0E14: sw          $a3, 0x149C($t8)
    MEM_W(0X149C, ctx->r24) = ctx->r7;
    // 0x802A0E18: lw          $t9, 0x0($v1)
    ctx->r25 = MEM_W(ctx->r3, 0X0);
    // 0x802A0E1C: lui         $t5, 0xA01
    ctx->r13 = S32(0XA01 << 16);
    // 0x802A0E20: addu        $t1, $t9, $a0
    ctx->r9 = ADD32(ctx->r25, ctx->r4);
    // 0x802A0E24: sw          $a2, 0x14A0($t1)
    MEM_W(0X14A0, ctx->r9) = ctx->r6;
    // 0x802A0E28: lui         $t6, 0xA00
    ctx->r14 = S32(0XA00 << 16);
    // 0x802A0E2C: addiu       $t2, $t2, -0x6F08
    ctx->r10 = ADD32(ctx->r10, -0X6F08);
    // 0x802A0E30: addiu       $t3, $t3, -0x7350
    ctx->r11 = ADD32(ctx->r11, -0X7350);
    // 0x802A0E34: addiu       $t4, $t4, -0x78B8
    ctx->r12 = ADD32(ctx->r12, -0X78B8);
    // 0x802A0E38: addiu       $t5, $t5, -0x7C20
    ctx->r13 = ADD32(ctx->r13, -0X7C20);
    // 0x802A0E3C: addiu       $t6, $t6, 0x7A20
    ctx->r14 = ADD32(ctx->r14, 0X7A20);
    // 0x802A0E40: sw          $a1, 0x4($t0)
    MEM_W(0X4, ctx->r8) = ctx->r5;
    // 0x802A0E44: sw          $t2, 0xC($t0)
    MEM_W(0XC, ctx->r8) = ctx->r10;
    // 0x802A0E48: sw          $t3, 0x14($t0)
    MEM_W(0X14, ctx->r8) = ctx->r11;
    // 0x802A0E4C: sw          $t4, 0x1C($t0)
    MEM_W(0X1C, ctx->r8) = ctx->r12;
    // 0x802A0E50: sw          $t5, 0x24($t0)
    MEM_W(0X24, ctx->r8) = ctx->r13;
    // 0x802A0E54: sw          $t6, 0x2C($t0)
    MEM_W(0X2C, ctx->r8) = ctx->r14;
L_802A0E58:
    // 0x802A0E58: sll         $t7, $v0, 3
    ctx->r15 = S32(ctx->r2 << 3);
    // 0x802A0E5C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x802A0E60: andi        $t9, $v0, 0xFF
    ctx->r25 = ctx->r2 & 0XFF;
    // 0x802A0E64: slti        $at, $t9, 0x12
    ctx->r1 = SIGNED(ctx->r25) < 0X12 ? 1 : 0;
    // 0x802A0E68: addu        $t8, $t0, $t7
    ctx->r24 = ADD32(ctx->r8, ctx->r15);
    // 0x802A0E6C: or          $v0, $t9, $zero
    ctx->r2 = ctx->r25 | 0;
    // 0x802A0E70: bne         $at, $zero, L_802A0E58
    if (ctx->r1 != 0) {
        // 0x802A0E74: sw          $zero, 0x4($t8)
        MEM_W(0X4, ctx->r24) = 0;
            goto L_802A0E58;
    }
    // 0x802A0E74: sw          $zero, 0x4($t8)
    MEM_W(0X4, ctx->r24) = 0;
    // 0x802A0E78: lui         $t1, 0x8012
    ctx->r9 = S32(0X8012 << 16);
    // 0x802A0E7C: lb          $t1, -0x309B($t1)
    ctx->r9 = MEM_B(ctx->r9, -0X309B);
    // 0x802A0E80: lui         $t2, 0x802C
    ctx->r10 = S32(0X802C << 16);
    // 0x802A0E84: addu        $t2, $t2, $t1
    ctx->r10 = ADD32(ctx->r10, ctx->r9);
    // 0x802A0E88: lbu         $t2, -0x34F8($t2)
    ctx->r10 = MEM_BU(ctx->r10, -0X34F8);
    // 0x802A0E8C: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x802A0E90: jr          $ra
    // 0x802A0E94: sb          $t2, 0x39F9($at)
    MEM_B(0X39F9, ctx->r1) = ctx->r10;
    return;
    // 0x802A0E94: sb          $t2, 0x39F9($at)
    MEM_B(0X39F9, ctx->r1) = ctx->r10;
;}
RECOMP_FUNC void func_802A0E98(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802A0E98: lui         $t6, 0x8012
    ctx->r14 = S32(0X8012 << 16);
    // 0x802A0E9C: lbu         $t6, -0x32A4($t6)
    ctx->r14 = MEM_BU(ctx->r14, -0X32A4);
    // 0x802A0EA0: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x802A0EA4: addiu       $at, $zero, 0x7
    ctx->r1 = ADD32(0, 0X7);
    // 0x802A0EA8: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x802A0EAC: beq         $t6, $at, L_802A10C8
    if (ctx->r14 == ctx->r1) {
        // 0x802A0EB0: sw          $s0, 0x18($sp)
        MEM_W(0X18, ctx->r29) = ctx->r16;
            goto L_802A10C8;
    }
    // 0x802A0EB0: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x802A0EB4: lui         $t7, 0x8012
    ctx->r15 = S32(0X8012 << 16);
    // 0x802A0EB8: lb          $t7, -0x309C($t7)
    ctx->r15 = MEM_B(ctx->r15, -0X309C);
    // 0x802A0EBC: lui         $t0, 0x8012
    ctx->r8 = S32(0X8012 << 16);
    // 0x802A0EC0: bne         $t7, $zero, L_802A0ED0
    if (ctx->r15 != 0) {
        // 0x802A0EC4: addiu       $t0, $t0, -0x2CF0
        ctx->r8 = ADD32(ctx->r8, -0X2CF0);
            goto L_802A0ED0;
    }
    // 0x802A0EC4: addiu       $t0, $t0, -0x2CF0
    ctx->r8 = ADD32(ctx->r8, -0X2CF0);
    // 0x802A0EC8: b           L_802A0ED4
    // 0x802A0ECC: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
        goto L_802A0ED4;
    // 0x802A0ECC: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
L_802A0ED0:
    // 0x802A0ED0: addiu       $a3, $zero, 0x3
    ctx->r7 = ADD32(0, 0X3);
L_802A0ED4:
    // 0x802A0ED4: lhu         $t8, 0x8($t0)
    ctx->r24 = MEM_HU(ctx->r8, 0X8);
    // 0x802A0ED8: nop

    // 0x802A0EDC: andi        $t9, $t8, 0x8
    ctx->r25 = ctx->r24 & 0X8;
    // 0x802A0EE0: beq         $t9, $zero, L_802A0F78
    if (ctx->r25 == 0) {
        // 0x802A0EE4: nop
    
            goto L_802A0F78;
    }
    // 0x802A0EE4: nop

    // 0x802A0EE8: lbu         $v0, 0xA94($t0)
    ctx->r2 = MEM_BU(ctx->r8, 0XA94);
    // 0x802A0EEC: lui         $t3, 0x802C
    ctx->r11 = S32(0X802C << 16);
    // 0x802A0EF0: addiu       $t3, $t3, -0x34F0
    ctx->r11 = ADD32(ctx->r11, -0X34F0);
    // 0x802A0EF4: addu        $t6, $t3, $v0
    ctx->r14 = ADD32(ctx->r11, ctx->r2);
    // 0x802A0EF8: lbu         $t7, 0x0($t6)
    ctx->r15 = MEM_BU(ctx->r14, 0X0);
    // 0x802A0EFC: lbu         $a1, 0x0($t0)
    ctx->r5 = MEM_BU(ctx->r8, 0X0);
    // 0x802A0F00: addu        $a0, $t7, $a3
    ctx->r4 = ADD32(ctx->r15, ctx->r7);
    // 0x802A0F04: lui         $t2, 0x802C
    ctx->r10 = S32(0X802C << 16);
    // 0x802A0F08: sll         $t8, $a0, 1
    ctx->r24 = S32(ctx->r4 << 1);
    // 0x802A0F0C: addiu       $t2, $t2, -0x34C4
    ctx->r10 = ADD32(ctx->r10, -0X34C4);
    // 0x802A0F10: addu        $t9, $t2, $t8
    ctx->r25 = ADD32(ctx->r10, ctx->r24);
    // 0x802A0F14: or          $a0, $t8, $zero
    ctx->r4 = ctx->r24 | 0;
    // 0x802A0F18: addu        $t7, $t3, $a1
    ctx->r15 = ADD32(ctx->r11, ctx->r5);
    // 0x802A0F1C: lbu         $t8, 0x0($t7)
    ctx->r24 = MEM_BU(ctx->r15, 0X0);
    // 0x802A0F20: lhu         $t6, 0x0($t9)
    ctx->r14 = MEM_HU(ctx->r25, 0X0);
    // 0x802A0F24: addu        $a2, $t8, $a3
    ctx->r6 = ADD32(ctx->r24, ctx->r7);
    // 0x802A0F28: sll         $t9, $a2, 1
    ctx->r25 = S32(ctx->r6 << 1);
    // 0x802A0F2C: sh          $t6, 0x3C($sp)
    MEM_H(0X3C, ctx->r29) = ctx->r14;
    // 0x802A0F30: lui         $t4, 0x802C
    ctx->r12 = S32(0X802C << 16);
    // 0x802A0F34: addu        $t6, $t2, $t9
    ctx->r14 = ADD32(ctx->r10, ctx->r25);
    // 0x802A0F38: lhu         $t7, 0x0($t6)
    ctx->r15 = MEM_HU(ctx->r14, 0X0);
    // 0x802A0F3C: addiu       $t4, $t4, -0x34B8
    ctx->r12 = ADD32(ctx->r12, -0X34B8);
    // 0x802A0F40: lui         $t5, 0x802C
    ctx->r13 = S32(0X802C << 16);
    // 0x802A0F44: addu        $t8, $t4, $a0
    ctx->r24 = ADD32(ctx->r12, ctx->r4);
    // 0x802A0F48: addiu       $t5, $t5, -0x34AC
    ctx->r13 = ADD32(ctx->r13, -0X34AC);
    // 0x802A0F4C: lhu         $s0, 0x0($t8)
    ctx->r16 = MEM_HU(ctx->r24, 0X0);
    // 0x802A0F50: addu        $t9, $t4, $t9
    ctx->r25 = ADD32(ctx->r12, ctx->r25);
    // 0x802A0F54: sh          $t7, 0x3A($sp)
    MEM_H(0X3A, ctx->r29) = ctx->r15;
    // 0x802A0F58: lhu         $t6, 0x0($t9)
    ctx->r14 = MEM_HU(ctx->r25, 0X0);
    // 0x802A0F5C: addu        $t8, $t5, $a1
    ctx->r24 = ADD32(ctx->r13, ctx->r5);
    // 0x802A0F60: lbu         $t9, 0x0($t8)
    ctx->r25 = MEM_BU(ctx->r24, 0X0);
    // 0x802A0F64: addu        $t7, $t5, $v0
    ctx->r15 = ADD32(ctx->r13, ctx->r2);
    // 0x802A0F68: lbu         $t1, 0x0($t7)
    ctx->r9 = MEM_BU(ctx->r15, 0X0);
    // 0x802A0F6C: sh          $t6, 0x36($sp)
    MEM_H(0X36, ctx->r29) = ctx->r14;
    // 0x802A0F70: b           L_802A1004
    // 0x802A0F74: sh          $t9, 0x32($sp)
    MEM_H(0X32, ctx->r29) = ctx->r25;
        goto L_802A1004;
    // 0x802A0F74: sh          $t9, 0x32($sp)
    MEM_H(0X32, ctx->r29) = ctx->r25;
L_802A0F78:
    // 0x802A0F78: lbu         $a1, 0x0($t0)
    ctx->r5 = MEM_BU(ctx->r8, 0X0);
    // 0x802A0F7C: lui         $t3, 0x802C
    ctx->r11 = S32(0X802C << 16);
    // 0x802A0F80: addiu       $t3, $t3, -0x34F0
    ctx->r11 = ADD32(ctx->r11, -0X34F0);
    // 0x802A0F84: addu        $t6, $t3, $a1
    ctx->r14 = ADD32(ctx->r11, ctx->r5);
    // 0x802A0F88: lbu         $t7, 0x0($t6)
    ctx->r15 = MEM_BU(ctx->r14, 0X0);
    // 0x802A0F8C: lbu         $v0, 0xA94($t0)
    ctx->r2 = MEM_BU(ctx->r8, 0XA94);
    // 0x802A0F90: addu        $a2, $t7, $a3
    ctx->r6 = ADD32(ctx->r15, ctx->r7);
    // 0x802A0F94: lui         $t2, 0x802C
    ctx->r10 = S32(0X802C << 16);
    // 0x802A0F98: sll         $t8, $a2, 1
    ctx->r24 = S32(ctx->r6 << 1);
    // 0x802A0F9C: addiu       $t2, $t2, -0x34C4
    ctx->r10 = ADD32(ctx->r10, -0X34C4);
    // 0x802A0FA0: addu        $t9, $t2, $t8
    ctx->r25 = ADD32(ctx->r10, ctx->r24);
    // 0x802A0FA4: or          $a2, $t8, $zero
    ctx->r6 = ctx->r24 | 0;
    // 0x802A0FA8: addu        $t7, $t3, $v0
    ctx->r15 = ADD32(ctx->r11, ctx->r2);
    // 0x802A0FAC: lbu         $t8, 0x0($t7)
    ctx->r24 = MEM_BU(ctx->r15, 0X0);
    // 0x802A0FB0: lhu         $t6, 0x0($t9)
    ctx->r14 = MEM_HU(ctx->r25, 0X0);
    // 0x802A0FB4: addu        $a0, $t8, $a3
    ctx->r4 = ADD32(ctx->r24, ctx->r7);
    // 0x802A0FB8: sll         $t9, $a0, 1
    ctx->r25 = S32(ctx->r4 << 1);
    // 0x802A0FBC: sh          $t6, 0x3C($sp)
    MEM_H(0X3C, ctx->r29) = ctx->r14;
    // 0x802A0FC0: lui         $t4, 0x802C
    ctx->r12 = S32(0X802C << 16);
    // 0x802A0FC4: addu        $t6, $t2, $t9
    ctx->r14 = ADD32(ctx->r10, ctx->r25);
    // 0x802A0FC8: lhu         $t7, 0x0($t6)
    ctx->r15 = MEM_HU(ctx->r14, 0X0);
    // 0x802A0FCC: addiu       $t4, $t4, -0x34B8
    ctx->r12 = ADD32(ctx->r12, -0X34B8);
    // 0x802A0FD0: lui         $t5, 0x802C
    ctx->r13 = S32(0X802C << 16);
    // 0x802A0FD4: addu        $t8, $t4, $a2
    ctx->r24 = ADD32(ctx->r12, ctx->r6);
    // 0x802A0FD8: addiu       $t5, $t5, -0x34AC
    ctx->r13 = ADD32(ctx->r13, -0X34AC);
    // 0x802A0FDC: lhu         $s0, 0x0($t8)
    ctx->r16 = MEM_HU(ctx->r24, 0X0);
    // 0x802A0FE0: addu        $t9, $t4, $t9
    ctx->r25 = ADD32(ctx->r12, ctx->r25);
    // 0x802A0FE4: sh          $t7, 0x3A($sp)
    MEM_H(0X3A, ctx->r29) = ctx->r15;
    // 0x802A0FE8: lhu         $t6, 0x0($t9)
    ctx->r14 = MEM_HU(ctx->r25, 0X0);
    // 0x802A0FEC: addu        $t8, $t5, $v0
    ctx->r24 = ADD32(ctx->r13, ctx->r2);
    // 0x802A0FF0: lbu         $t9, 0x0($t8)
    ctx->r25 = MEM_BU(ctx->r24, 0X0);
    // 0x802A0FF4: addu        $t7, $t5, $a1
    ctx->r15 = ADD32(ctx->r13, ctx->r5);
    // 0x802A0FF8: lbu         $t1, 0x0($t7)
    ctx->r9 = MEM_BU(ctx->r15, 0X0);
    // 0x802A0FFC: sh          $t6, 0x36($sp)
    MEM_H(0X36, ctx->r29) = ctx->r14;
    // 0x802A1000: sh          $t9, 0x32($sp)
    MEM_H(0X32, ctx->r29) = ctx->r25;
L_802A1004:
    // 0x802A1004: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802A1008: jal         0x8028BAD0
    // 0x802A100C: sh          $t1, 0x34($sp)
    MEM_H(0X34, ctx->r29) = ctx->r9;
    func_8028BAD0(rdram, ctx);
        goto after_0;
    // 0x802A100C: sh          $t1, 0x34($sp)
    MEM_H(0X34, ctx->r29) = ctx->r9;
    after_0:
    // 0x802A1010: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x802A1014: jal         0x8028BAD0
    // 0x802A1018: addiu       $a0, $zero, 0x66
    ctx->r4 = ADD32(0, 0X66);
    func_8028BAD0(rdram, ctx);
        goto after_1;
    // 0x802A1018: addiu       $a0, $zero, 0x66
    ctx->r4 = ADD32(0, 0X66);
    after_1:
    // 0x802A101C: lhu         $t1, 0x34($sp)
    ctx->r9 = MEM_HU(ctx->r29, 0X34);
    // 0x802A1020: addiu       $a1, $v0, 0x140
    ctx->r5 = ADD32(ctx->r2, 0X140);
    // 0x802A1024: sll         $v1, $t1, 5
    ctx->r3 = S32(ctx->r9 << 5);
    // 0x802A1028: addu        $a0, $s0, $v1
    ctx->r4 = ADD32(ctx->r16, ctx->r3);
    // 0x802A102C: sw          $v1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r3;
    // 0x802A1030: jal         0x80081670
    // 0x802A1034: addiu       $a2, $zero, 0x20
    ctx->r6 = ADD32(0, 0X20);
    func_80081670(rdram, ctx);
        goto after_2;
    // 0x802A1034: addiu       $a2, $zero, 0x20
    ctx->r6 = ADD32(0, 0X20);
    after_2:
    // 0x802A1038: lhu         $a0, 0x36($sp)
    ctx->r4 = MEM_HU(ctx->r29, 0X36);
    // 0x802A103C: jal         0x8028BAD0
    // 0x802A1040: nop

    func_8028BAD0(rdram, ctx);
        goto after_3;
    // 0x802A1040: nop

    after_3:
    // 0x802A1044: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x802A1048: jal         0x8028BAD0
    // 0x802A104C: addiu       $a0, $zero, 0x66
    ctx->r4 = ADD32(0, 0X66);
    func_8028BAD0(rdram, ctx);
        goto after_4;
    // 0x802A104C: addiu       $a0, $zero, 0x66
    ctx->r4 = ADD32(0, 0X66);
    after_4:
    // 0x802A1050: lhu         $v1, 0x32($sp)
    ctx->r3 = MEM_HU(ctx->r29, 0X32);
    // 0x802A1054: addiu       $a1, $v0, 0x160
    ctx->r5 = ADD32(ctx->r2, 0X160);
    // 0x802A1058: sll         $t6, $v1, 5
    ctx->r14 = S32(ctx->r3 << 5);
    // 0x802A105C: or          $v1, $t6, $zero
    ctx->r3 = ctx->r14 | 0;
    // 0x802A1060: addu        $a0, $s0, $t6
    ctx->r4 = ADD32(ctx->r16, ctx->r14);
    // 0x802A1064: sw          $t6, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r14;
    // 0x802A1068: jal         0x80081670
    // 0x802A106C: addiu       $a2, $zero, 0x20
    ctx->r6 = ADD32(0, 0X20);
    func_80081670(rdram, ctx);
        goto after_5;
    // 0x802A106C: addiu       $a2, $zero, 0x20
    ctx->r6 = ADD32(0, 0X20);
    after_5:
    // 0x802A1070: lhu         $a0, 0x3C($sp)
    ctx->r4 = MEM_HU(ctx->r29, 0X3C);
    // 0x802A1074: jal         0x8028BAD0
    // 0x802A1078: nop

    func_8028BAD0(rdram, ctx);
        goto after_6;
    // 0x802A1078: nop

    after_6:
    // 0x802A107C: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x802A1080: jal         0x8028BAD0
    // 0x802A1084: addiu       $a0, $zero, 0x66
    ctx->r4 = ADD32(0, 0X66);
    func_8028BAD0(rdram, ctx);
        goto after_7;
    // 0x802A1084: addiu       $a0, $zero, 0x66
    ctx->r4 = ADD32(0, 0X66);
    after_7:
    // 0x802A1088: lw          $t7, 0x24($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X24);
    // 0x802A108C: addiu       $a1, $v0, 0x180
    ctx->r5 = ADD32(ctx->r2, 0X180);
    // 0x802A1090: addiu       $a2, $zero, 0x20
    ctx->r6 = ADD32(0, 0X20);
    // 0x802A1094: jal         0x80081670
    // 0x802A1098: addu        $a0, $s0, $t7
    ctx->r4 = ADD32(ctx->r16, ctx->r15);
    func_80081670(rdram, ctx);
        goto after_8;
    // 0x802A1098: addu        $a0, $s0, $t7
    ctx->r4 = ADD32(ctx->r16, ctx->r15);
    after_8:
    // 0x802A109C: lhu         $a0, 0x3A($sp)
    ctx->r4 = MEM_HU(ctx->r29, 0X3A);
    // 0x802A10A0: jal         0x8028BAD0
    // 0x802A10A4: nop

    func_8028BAD0(rdram, ctx);
        goto after_9;
    // 0x802A10A4: nop

    after_9:
    // 0x802A10A8: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x802A10AC: jal         0x8028BAD0
    // 0x802A10B0: addiu       $a0, $zero, 0x66
    ctx->r4 = ADD32(0, 0X66);
    func_8028BAD0(rdram, ctx);
        goto after_10;
    // 0x802A10B0: addiu       $a0, $zero, 0x66
    ctx->r4 = ADD32(0, 0X66);
    after_10:
    // 0x802A10B4: lw          $t8, 0x20($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X20);
    // 0x802A10B8: addiu       $a1, $v0, 0x1A0
    ctx->r5 = ADD32(ctx->r2, 0X1A0);
    // 0x802A10BC: addiu       $a2, $zero, 0x20
    ctx->r6 = ADD32(0, 0X20);
    // 0x802A10C0: jal         0x80081670
    // 0x802A10C4: addu        $a0, $s0, $t8
    ctx->r4 = ADD32(ctx->r16, ctx->r24);
    func_80081670(rdram, ctx);
        goto after_11;
    // 0x802A10C4: addu        $a0, $s0, $t8
    ctx->r4 = ADD32(ctx->r16, ctx->r24);
    after_11:
L_802A10C8:
    // 0x802A10C8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x802A10CC: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x802A10D0: jr          $ra
    // 0x802A10D4: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    return;
    // 0x802A10D4: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
RECOMP_FUNC void func_802A10D8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802A10D8: lui         $v0, 0x802C
    ctx->r2 = S32(0X802C << 16);
    // 0x802A10DC: lui         $t6, 0x803C
    ctx->r14 = S32(0X803C << 16);
    // 0x802A10E0: addiu       $v0, $v0, 0x3B30
    ctx->r2 = ADD32(ctx->r2, 0X3B30);
    // 0x802A10E4: addiu       $t6, $t6, 0x1A00
    ctx->r14 = ADD32(ctx->r14, 0X1A00);
    // 0x802A10E8: sw          $t6, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r14;
    // 0x802A10EC: lui         $t7, 0x8012
    ctx->r15 = S32(0X8012 << 16);
    // 0x802A10F0: lb          $t7, -0x309C($t7)
    ctx->r15 = MEM_B(ctx->r15, -0X309C);
    // 0x802A10F4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802A10F8: bne         $t7, $zero, L_802A1140
    if (ctx->r15 != 0) {
        // 0x802A10FC: sw          $ra, 0x14($sp)
        MEM_W(0X14, ctx->r29) = ctx->r31;
            goto L_802A1140;
    }
    // 0x802A10FC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802A1100: lui         $a2, 0x802C
    ctx->r6 = S32(0X802C << 16);
    // 0x802A1104: addiu       $a2, $a2, 0x3AF0
    ctx->r6 = ADD32(ctx->r6, 0X3AF0);
    // 0x802A1108: addiu       $a0, $zero, 0xB
    ctx->r4 = ADD32(0, 0XB);
    // 0x802A110C: jal         0x8028BB68
    // 0x802A1110: or          $a1, $t6, $zero
    ctx->r5 = ctx->r14 | 0;
    func_8028BB68(rdram, ctx);
        goto after_0;
    // 0x802A1110: or          $a1, $t6, $zero
    ctx->r5 = ctx->r14 | 0;
    after_0:
    // 0x802A1114: lui         $v0, 0x802C
    ctx->r2 = S32(0X802C << 16);
    // 0x802A1118: addiu       $v0, $v0, 0x3B30
    ctx->r2 = ADD32(ctx->r2, 0X3B30);
    // 0x802A111C: lui         $t9, 0x600
    ctx->r25 = S32(0X600 << 16);
    // 0x802A1120: lui         $t0, 0x600
    ctx->r8 = S32(0X600 << 16);
    // 0x802A1124: lw          $t8, 0x0($v0)
    ctx->r24 = MEM_W(ctx->r2, 0X0);
    // 0x802A1128: addiu       $t0, $t0, 0x0
    ctx->r8 = ADD32(ctx->r8, 0X0);
    // 0x802A112C: addiu       $t9, $t9, 0x200
    ctx->r25 = ADD32(ctx->r25, 0X200);
    // 0x802A1130: subu        $t1, $t9, $t0
    ctx->r9 = SUB32(ctx->r25, ctx->r8);
    // 0x802A1134: addu        $t2, $t8, $t1
    ctx->r10 = ADD32(ctx->r24, ctx->r9);
    // 0x802A1138: b           L_802A1180
    // 0x802A113C: sw          $t2, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r10;
        goto L_802A1180;
    // 0x802A113C: sw          $t2, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r10;
L_802A1140:
    // 0x802A1140: lw          $a2, 0x0($v0)
    ctx->r6 = MEM_W(ctx->r2, 0X0);
    // 0x802A1144: lui         $a3, 0x802C
    ctx->r7 = S32(0X802C << 16);
    // 0x802A1148: addiu       $a3, $a3, 0x3AF0
    ctx->r7 = ADD32(ctx->r7, 0X3AF0);
    // 0x802A114C: addiu       $a0, $zero, 0xB
    ctx->r4 = ADD32(0, 0XB);
    // 0x802A1150: jal         0x8028BB94
    // 0x802A1154: addiu       $a1, $zero, 0xC
    ctx->r5 = ADD32(0, 0XC);
    func_8028BB94(rdram, ctx);
        goto after_1;
    // 0x802A1154: addiu       $a1, $zero, 0xC
    ctx->r5 = ADD32(0, 0XC);
    after_1:
    // 0x802A1158: lui         $v0, 0x802C
    ctx->r2 = S32(0X802C << 16);
    // 0x802A115C: addiu       $v0, $v0, 0x3B30
    ctx->r2 = ADD32(ctx->r2, 0X3B30);
    // 0x802A1160: lui         $t4, 0x600
    ctx->r12 = S32(0X600 << 16);
    // 0x802A1164: lui         $t5, 0x600
    ctx->r13 = S32(0X600 << 16);
    // 0x802A1168: lw          $t3, 0x0($v0)
    ctx->r11 = MEM_W(ctx->r2, 0X0);
    // 0x802A116C: addiu       $t5, $t5, 0x0
    ctx->r13 = ADD32(ctx->r13, 0X0);
    // 0x802A1170: addiu       $t4, $t4, 0x200
    ctx->r12 = ADD32(ctx->r12, 0X200);
    // 0x802A1174: subu        $t6, $t4, $t5
    ctx->r14 = SUB32(ctx->r12, ctx->r13);
    // 0x802A1178: addu        $t7, $t3, $t6
    ctx->r15 = ADD32(ctx->r11, ctx->r14);
    // 0x802A117C: sw          $t7, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r15;
L_802A1180:
    // 0x802A1180: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802A1184: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x802A1188: jr          $ra
    // 0x802A118C: nop

    return;
    // 0x802A118C: nop

;}
RECOMP_FUNC void func_802A1190(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802A1190: lui         $t6, 0x8012
    ctx->r14 = S32(0X8012 << 16);
    // 0x802A1194: lb          $t6, -0x309C($t6)
    ctx->r14 = MEM_B(ctx->r14, -0X309C);
    // 0x802A1198: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x802A119C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x802A11A0: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x802A11A4: bne         $t6, $zero, L_802A11B4
    if (ctx->r14 != 0) {
        // 0x802A11A8: sw          $s0, 0x14($sp)
        MEM_W(0X14, ctx->r29) = ctx->r16;
            goto L_802A11B4;
    }
    // 0x802A11A8: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x802A11AC: b           L_802A11B8
    // 0x802A11B0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
        goto L_802A11B8;
    // 0x802A11B0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
L_802A11B4:
    // 0x802A11B4: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
L_802A11B8:
    // 0x802A11B8: lui         $a2, 0x8012
    ctx->r6 = S32(0X8012 << 16);
    // 0x802A11BC: addiu       $a2, $a2, -0x2CF0
    ctx->r6 = ADD32(ctx->r6, -0X2CF0);
    // 0x802A11C0: lhu         $t7, 0x8($a2)
    ctx->r15 = MEM_HU(ctx->r6, 0X8);
    // 0x802A11C4: lui         $s0, 0x802C
    ctx->r16 = S32(0X802C << 16);
    // 0x802A11C8: andi        $t8, $t7, 0x8
    ctx->r24 = ctx->r15 & 0X8;
    // 0x802A11CC: beq         $t8, $zero, L_802A1244
    if (ctx->r24 == 0) {
        // 0x802A11D0: addiu       $s0, $s0, 0x3B30
        ctx->r16 = ADD32(ctx->r16, 0X3B30);
            goto L_802A1244;
    }
    // 0x802A11D0: addiu       $s0, $s0, 0x3B30
    ctx->r16 = ADD32(ctx->r16, 0X3B30);
    // 0x802A11D4: lbu         $t9, 0xA94($a2)
    ctx->r25 = MEM_BU(ctx->r6, 0XA94);
    // 0x802A11D8: lui         $t1, 0x802C
    ctx->r9 = S32(0X802C << 16);
    // 0x802A11DC: lbu         $t7, 0x0($a2)
    ctx->r15 = MEM_BU(ctx->r6, 0X0);
    // 0x802A11E0: addiu       $t1, $t1, -0x34F0
    ctx->r9 = ADD32(ctx->r9, -0X34F0);
    // 0x802A11E4: addu        $t3, $t1, $t9
    ctx->r11 = ADD32(ctx->r9, ctx->r25);
    // 0x802A11E8: lbu         $t4, 0x0($t3)
    ctx->r12 = MEM_BU(ctx->r11, 0X0);
    // 0x802A11EC: addu        $t8, $t1, $t7
    ctx->r24 = ADD32(ctx->r9, ctx->r15);
    // 0x802A11F0: lbu         $t9, 0x0($t8)
    ctx->r25 = MEM_BU(ctx->r24, 0X0);
    // 0x802A11F4: lui         $t0, 0x802C
    ctx->r8 = S32(0X802C << 16);
    // 0x802A11F8: addu        $v1, $t4, $a1
    ctx->r3 = ADD32(ctx->r12, ctx->r5);
    // 0x802A11FC: addiu       $t0, $t0, -0x3474
    ctx->r8 = ADD32(ctx->r8, -0X3474);
    // 0x802A1200: sll         $t5, $v1, 1
    ctx->r13 = S32(ctx->r3 << 1);
    // 0x802A1204: addu        $a0, $t9, $a1
    ctx->r4 = ADD32(ctx->r25, ctx->r5);
    // 0x802A1208: lui         $t2, 0x802C
    ctx->r10 = S32(0X802C << 16);
    // 0x802A120C: addu        $t6, $t0, $t5
    ctx->r14 = ADD32(ctx->r8, ctx->r13);
    // 0x802A1210: sll         $t3, $a0, 1
    ctx->r11 = S32(ctx->r4 << 1);
    // 0x802A1214: addiu       $t2, $t2, -0x3480
    ctx->r10 = ADD32(ctx->r10, -0X3480);
    // 0x802A1218: or          $v1, $t5, $zero
    ctx->r3 = ctx->r13 | 0;
    // 0x802A121C: lhu         $a3, 0x0($t6)
    ctx->r7 = MEM_HU(ctx->r14, 0X0);
    // 0x802A1220: addu        $t4, $t0, $t3
    ctx->r12 = ADD32(ctx->r8, ctx->r11);
    // 0x802A1224: addu        $t7, $t2, $t3
    ctx->r15 = ADD32(ctx->r10, ctx->r11);
    // 0x802A1228: lhu         $t5, 0x0($t4)
    ctx->r13 = MEM_HU(ctx->r12, 0X0);
    // 0x802A122C: lhu         $t8, 0x0($t7)
    ctx->r24 = MEM_HU(ctx->r15, 0X0);
    // 0x802A1230: addu        $t6, $t2, $v1
    ctx->r14 = ADD32(ctx->r10, ctx->r3);
    // 0x802A1234: lhu         $s1, 0x0($t6)
    ctx->r17 = MEM_HU(ctx->r14, 0X0);
    // 0x802A1238: sh          $t5, 0x20($sp)
    MEM_H(0X20, ctx->r29) = ctx->r13;
    // 0x802A123C: b           L_802A12B0
    // 0x802A1240: sh          $t8, 0x24($sp)
    MEM_H(0X24, ctx->r29) = ctx->r24;
        goto L_802A12B0;
    // 0x802A1240: sh          $t8, 0x24($sp)
    MEM_H(0X24, ctx->r29) = ctx->r24;
L_802A1244:
    // 0x802A1244: lbu         $t9, 0x0($a2)
    ctx->r25 = MEM_BU(ctx->r6, 0X0);
    // 0x802A1248: lui         $t1, 0x802C
    ctx->r9 = S32(0X802C << 16);
    // 0x802A124C: lbu         $t7, 0xA94($a2)
    ctx->r15 = MEM_BU(ctx->r6, 0XA94);
    // 0x802A1250: addiu       $t1, $t1, -0x34F0
    ctx->r9 = ADD32(ctx->r9, -0X34F0);
    // 0x802A1254: addu        $t3, $t1, $t9
    ctx->r11 = ADD32(ctx->r9, ctx->r25);
    // 0x802A1258: lbu         $t4, 0x0($t3)
    ctx->r12 = MEM_BU(ctx->r11, 0X0);
    // 0x802A125C: addu        $t8, $t1, $t7
    ctx->r24 = ADD32(ctx->r9, ctx->r15);
    // 0x802A1260: lbu         $t9, 0x0($t8)
    ctx->r25 = MEM_BU(ctx->r24, 0X0);
    // 0x802A1264: lui         $t0, 0x802C
    ctx->r8 = S32(0X802C << 16);
    // 0x802A1268: addu        $a0, $t4, $a1
    ctx->r4 = ADD32(ctx->r12, ctx->r5);
    // 0x802A126C: addiu       $t0, $t0, -0x3474
    ctx->r8 = ADD32(ctx->r8, -0X3474);
    // 0x802A1270: sll         $t5, $a0, 1
    ctx->r13 = S32(ctx->r4 << 1);
    // 0x802A1274: addu        $v1, $t9, $a1
    ctx->r3 = ADD32(ctx->r25, ctx->r5);
    // 0x802A1278: lui         $t2, 0x802C
    ctx->r10 = S32(0X802C << 16);
    // 0x802A127C: addu        $t6, $t0, $t5
    ctx->r14 = ADD32(ctx->r8, ctx->r13);
    // 0x802A1280: sll         $t3, $v1, 1
    ctx->r11 = S32(ctx->r3 << 1);
    // 0x802A1284: addiu       $t2, $t2, -0x3480
    ctx->r10 = ADD32(ctx->r10, -0X3480);
    // 0x802A1288: or          $a0, $t5, $zero
    ctx->r4 = ctx->r13 | 0;
    // 0x802A128C: lhu         $a3, 0x0($t6)
    ctx->r7 = MEM_HU(ctx->r14, 0X0);
    // 0x802A1290: addu        $t4, $t0, $t3
    ctx->r12 = ADD32(ctx->r8, ctx->r11);
    // 0x802A1294: addu        $t7, $t2, $t3
    ctx->r15 = ADD32(ctx->r10, ctx->r11);
    // 0x802A1298: lhu         $t5, 0x0($t4)
    ctx->r13 = MEM_HU(ctx->r12, 0X0);
    // 0x802A129C: lhu         $t8, 0x0($t7)
    ctx->r24 = MEM_HU(ctx->r15, 0X0);
    // 0x802A12A0: addu        $t6, $t2, $a0
    ctx->r14 = ADD32(ctx->r10, ctx->r4);
    // 0x802A12A4: lhu         $s1, 0x0($t6)
    ctx->r17 = MEM_HU(ctx->r14, 0X0);
    // 0x802A12A8: sh          $t5, 0x20($sp)
    MEM_H(0X20, ctx->r29) = ctx->r13;
    // 0x802A12AC: sh          $t8, 0x24($sp)
    MEM_H(0X24, ctx->r29) = ctx->r24;
L_802A12B0:
    // 0x802A12B0: lw          $a1, 0x0($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X0);
    // 0x802A12B4: lui         $a2, 0x802C
    ctx->r6 = S32(0X802C << 16);
    // 0x802A12B8: addiu       $a2, $a2, 0x3AF8
    ctx->r6 = ADD32(ctx->r6, 0X3AF8);
    // 0x802A12BC: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x802A12C0: jal         0x8028BB68
    // 0x802A12C4: sh          $a3, 0x22($sp)
    MEM_H(0X22, ctx->r29) = ctx->r7;
    func_8028BB68(rdram, ctx);
        goto after_0;
    // 0x802A12C4: sh          $a3, 0x22($sp)
    MEM_H(0X22, ctx->r29) = ctx->r7;
    after_0:
    // 0x802A12C8: lui         $t9, 0x600
    ctx->r25 = S32(0X600 << 16);
    // 0x802A12CC: lui         $t3, 0x600
    ctx->r11 = S32(0X600 << 16);
    // 0x802A12D0: lw          $t4, 0x0($s0)
    ctx->r12 = MEM_W(ctx->r16, 0X0);
    // 0x802A12D4: addiu       $t3, $t3, 0x0
    ctx->r11 = ADD32(ctx->r11, 0X0);
    // 0x802A12D8: addiu       $t9, $t9, 0x200
    ctx->r25 = ADD32(ctx->r25, 0X200);
    // 0x802A12DC: subu        $s1, $t9, $t3
    ctx->r17 = SUB32(ctx->r25, ctx->r11);
    // 0x802A12E0: lhu         $a0, 0x24($sp)
    ctx->r4 = MEM_HU(ctx->r29, 0X24);
    // 0x802A12E4: lui         $a2, 0x802C
    ctx->r6 = S32(0X802C << 16);
    // 0x802A12E8: addu        $a1, $t4, $s1
    ctx->r5 = ADD32(ctx->r12, ctx->r17);
    // 0x802A12EC: sw          $a1, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r5;
    // 0x802A12F0: jal         0x8028BB68
    // 0x802A12F4: addiu       $a2, $a2, 0x3B00
    ctx->r6 = ADD32(ctx->r6, 0X3B00);
    func_8028BB68(rdram, ctx);
        goto after_1;
    // 0x802A12F4: addiu       $a2, $a2, 0x3B00
    ctx->r6 = ADD32(ctx->r6, 0X3B00);
    after_1:
    // 0x802A12F8: lw          $t6, 0x0($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X0);
    // 0x802A12FC: lhu         $a0, 0x22($sp)
    ctx->r4 = MEM_HU(ctx->r29, 0X22);
    // 0x802A1300: lui         $a2, 0x802C
    ctx->r6 = S32(0X802C << 16);
    // 0x802A1304: addu        $a1, $t6, $s1
    ctx->r5 = ADD32(ctx->r14, ctx->r17);
    // 0x802A1308: sw          $a1, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r5;
    // 0x802A130C: jal         0x8028BB68
    // 0x802A1310: addiu       $a2, $a2, 0x3B20
    ctx->r6 = ADD32(ctx->r6, 0X3B20);
    func_8028BB68(rdram, ctx);
        goto after_2;
    // 0x802A1310: addiu       $a2, $a2, 0x3B20
    ctx->r6 = ADD32(ctx->r6, 0X3B20);
    after_2:
    // 0x802A1314: lw          $t8, 0x0($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X0);
    // 0x802A1318: lhu         $a0, 0x20($sp)
    ctx->r4 = MEM_HU(ctx->r29, 0X20);
    // 0x802A131C: lui         $a2, 0x802C
    ctx->r6 = S32(0X802C << 16);
    // 0x802A1320: addu        $a1, $t8, $s1
    ctx->r5 = ADD32(ctx->r24, ctx->r17);
    // 0x802A1324: sw          $a1, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r5;
    // 0x802A1328: jal         0x8028BB68
    // 0x802A132C: addiu       $a2, $a2, 0x3B28
    ctx->r6 = ADD32(ctx->r6, 0X3B28);
    func_8028BB68(rdram, ctx);
        goto after_3;
    // 0x802A132C: addiu       $a2, $a2, 0x3B28
    ctx->r6 = ADD32(ctx->r6, 0X3B28);
    after_3:
    // 0x802A1330: lw          $t3, 0x0($s0)
    ctx->r11 = MEM_W(ctx->r16, 0X0);
    // 0x802A1334: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x802A1338: addu        $t4, $t3, $s1
    ctx->r12 = ADD32(ctx->r11, ctx->r17);
    // 0x802A133C: sw          $t4, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r12;
    // 0x802A1340: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x802A1344: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x802A1348: jr          $ra
    // 0x802A134C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x802A134C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_802A1350(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802A1350: lui         $v0, 0x8011
    ctx->r2 = S32(0X8011 << 16);
    // 0x802A1354: addiu       $v0, $v0, -0x2F98
    ctx->r2 = ADD32(ctx->r2, -0X2F98);
    // 0x802A1358: lw          $t6, 0x0($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X0);
    // 0x802A135C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802A1360: lui         $at, 0x3
    ctx->r1 = S32(0X3 << 16);
    // 0x802A1364: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802A1368: addu        $at, $at, $t6
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x802A136C: sh          $zero, 0x758($at)
    MEM_H(0X758, ctx->r1) = 0;
    // 0x802A1370: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x802A1374: sb          $zero, 0x3AC6($at)
    MEM_B(0X3AC6, ctx->r1) = 0;
    // 0x802A1378: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x802A137C: sb          $zero, 0x3ACF($at)
    MEM_B(0X3ACF, ctx->r1) = 0;
    // 0x802A1380: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x802A1384: sb          $zero, 0x3A32($at)
    MEM_B(0X3A32, ctx->r1) = 0;
    // 0x802A1388: lw          $a0, 0x0($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X0);
    // 0x802A138C: lui         $at, 0x3
    ctx->r1 = S32(0X3 << 16);
    // 0x802A1390: ori         $at, $at, 0x75C
    ctx->r1 = ctx->r1 | 0X75C;
    // 0x802A1394: addiu       $a1, $zero, 0x50
    ctx->r5 = ADD32(0, 0X50);
    // 0x802A1398: jal         0x800218E0
    // 0x802A139C: addu        $a0, $a0, $at
    ctx->r4 = ADD32(ctx->r4, ctx->r1);
    func_800218E0(rdram, ctx);
        goto after_0;
    // 0x802A139C: addu        $a0, $a0, $at
    ctx->r4 = ADD32(ctx->r4, ctx->r1);
    after_0:
    // 0x802A13A0: lui         $a0, 0x8011
    ctx->r4 = S32(0X8011 << 16);
    // 0x802A13A4: lw          $a0, -0x2F98($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X2F98);
    // 0x802A13A8: lui         $at, 0x3
    ctx->r1 = S32(0X3 << 16);
    // 0x802A13AC: ori         $at, $at, 0x7AC
    ctx->r1 = ctx->r1 | 0X7AC;
    // 0x802A13B0: addiu       $a1, $zero, 0x14
    ctx->r5 = ADD32(0, 0X14);
    // 0x802A13B4: jal         0x800218E0
    // 0x802A13B8: addu        $a0, $a0, $at
    ctx->r4 = ADD32(ctx->r4, ctx->r1);
    func_800218E0(rdram, ctx);
        goto after_1;
    // 0x802A13B8: addu        $a0, $a0, $at
    ctx->r4 = ADD32(ctx->r4, ctx->r1);
    after_1:
    // 0x802A13BC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802A13C0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x802A13C4: jr          $ra
    // 0x802A13C8: nop

    return;
    // 0x802A13C8: nop

;}
RECOMP_FUNC void func_802A13CC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802A13CC: lui         $a0, 0x8011
    ctx->r4 = S32(0X8011 << 16);
    // 0x802A13D0: lw          $a0, -0x2F98($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X2F98);
    // 0x802A13D4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802A13D8: lui         $at, 0x3
    ctx->r1 = S32(0X3 << 16);
    // 0x802A13DC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802A13E0: ori         $at, $at, 0x75C
    ctx->r1 = ctx->r1 | 0X75C;
    // 0x802A13E4: addiu       $a1, $zero, 0x50
    ctx->r5 = ADD32(0, 0X50);
    // 0x802A13E8: jal         0x800218E0
    // 0x802A13EC: addu        $a0, $a0, $at
    ctx->r4 = ADD32(ctx->r4, ctx->r1);
    func_800218E0(rdram, ctx);
        goto after_0;
    // 0x802A13EC: addu        $a0, $a0, $at
    ctx->r4 = ADD32(ctx->r4, ctx->r1);
    after_0:
    // 0x802A13F0: lui         $a0, 0x8011
    ctx->r4 = S32(0X8011 << 16);
    // 0x802A13F4: lw          $a0, -0x2F98($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X2F98);
    // 0x802A13F8: lui         $at, 0x3
    ctx->r1 = S32(0X3 << 16);
    // 0x802A13FC: ori         $at, $at, 0x7AC
    ctx->r1 = ctx->r1 | 0X7AC;
    // 0x802A1400: addiu       $a1, $zero, 0x14
    ctx->r5 = ADD32(0, 0X14);
    // 0x802A1404: jal         0x800218E0
    // 0x802A1408: addu        $a0, $a0, $at
    ctx->r4 = ADD32(ctx->r4, ctx->r1);
    func_800218E0(rdram, ctx);
        goto after_1;
    // 0x802A1408: addu        $a0, $a0, $at
    ctx->r4 = ADD32(ctx->r4, ctx->r1);
    after_1:
    // 0x802A140C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802A1410: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x802A1414: jr          $ra
    // 0x802A1418: nop

    return;
    // 0x802A1418: nop

;}
RECOMP_FUNC void func_802A141C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802A141C: lui         $a0, 0x8011
    ctx->r4 = S32(0X8011 << 16);
    // 0x802A1420: lw          $a0, -0x2F98($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X2F98);
    // 0x802A1424: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802A1428: lui         $at, 0x3
    ctx->r1 = S32(0X3 << 16);
    // 0x802A142C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802A1430: ori         $at, $at, 0x75C
    ctx->r1 = ctx->r1 | 0X75C;
    // 0x802A1434: addiu       $a1, $zero, 0x50
    ctx->r5 = ADD32(0, 0X50);
    // 0x802A1438: jal         0x800218E0
    // 0x802A143C: addu        $a0, $a0, $at
    ctx->r4 = ADD32(ctx->r4, ctx->r1);
    func_800218E0(rdram, ctx);
        goto after_0;
    // 0x802A143C: addu        $a0, $a0, $at
    ctx->r4 = ADD32(ctx->r4, ctx->r1);
    after_0:
    // 0x802A1440: lui         $a0, 0x8011
    ctx->r4 = S32(0X8011 << 16);
    // 0x802A1444: lw          $a0, -0x2F98($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X2F98);
    // 0x802A1448: lui         $at, 0x3
    ctx->r1 = S32(0X3 << 16);
    // 0x802A144C: ori         $at, $at, 0x7AC
    ctx->r1 = ctx->r1 | 0X7AC;
    // 0x802A1450: addiu       $a1, $zero, 0x14
    ctx->r5 = ADD32(0, 0X14);
    // 0x802A1454: jal         0x800218E0
    // 0x802A1458: addu        $a0, $a0, $at
    ctx->r4 = ADD32(ctx->r4, ctx->r1);
    func_800218E0(rdram, ctx);
        goto after_1;
    // 0x802A1458: addu        $a0, $a0, $at
    ctx->r4 = ADD32(ctx->r4, ctx->r1);
    after_1:
    // 0x802A145C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802A1460: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x802A1464: jr          $ra
    // 0x802A1468: nop

    return;
    // 0x802A1468: nop

;}
RECOMP_FUNC void func_802A146C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802A146C: lui         $t6, 0x8011
    ctx->r14 = S32(0X8011 << 16);
    // 0x802A1470: lw          $t6, -0x2F98($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X2F98);
    // 0x802A1474: lui         $at, 0x3
    ctx->r1 = S32(0X3 << 16);
    // 0x802A1478: addu        $at, $at, $t6
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x802A147C: jr          $ra
    // 0x802A1480: sh          $zero, 0x758($at)
    MEM_H(0X758, ctx->r1) = 0;
    return;
    // 0x802A1480: sh          $zero, 0x758($at)
    MEM_H(0X758, ctx->r1) = 0;
;}
RECOMP_FUNC void func_802A1484(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802A1484: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802A1488: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802A148C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x802A1490: jal         0x802A1728
    // 0x802A1494: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    func_802A1728(rdram, ctx);
        goto after_0;
    // 0x802A1494: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    after_0:
    // 0x802A1498: lhu         $a0, 0x1A($sp)
    ctx->r4 = MEM_HU(ctx->r29, 0X1A);
    // 0x802A149C: lhu         $a1, 0x1E($sp)
    ctx->r5 = MEM_HU(ctx->r29, 0X1E);
    // 0x802A14A0: beq         $v0, $a0, L_802A14B4
    if (ctx->r2 == ctx->r4) {
        // 0x802A14A4: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_802A14B4;
    }
    // 0x802A14A4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802A14A8: jal         0x802A14C0
    // 0x802A14AC: nop

    func_802A14C0(rdram, ctx);
        goto after_1;
    // 0x802A14AC: nop

    after_1:
    // 0x802A14B0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_802A14B4:
    // 0x802A14B4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x802A14B8: jr          $ra
    // 0x802A14BC: nop

    return;
    // 0x802A14BC: nop

;}
RECOMP_FUNC void func_802A14C0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802A14C0: lui         $t7, 0x8012
    ctx->r15 = S32(0X8012 << 16);
    // 0x802A14C4: lb          $t7, -0x3095($t7)
    ctx->r15 = MEM_B(ctx->r15, -0X3095);
    // 0x802A14C8: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    // 0x802A14CC: andi        $t6, $a1, 0xFFFF
    ctx->r14 = ctx->r5 & 0XFFFF;
    // 0x802A14D0: or          $a1, $t6, $zero
    ctx->r5 = ctx->r14 | 0;
    // 0x802A14D4: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x802A14D8: bne         $t7, $zero, L_802A15E4
    if (ctx->r15 != 0) {
        // 0x802A14DC: andi        $a2, $a0, 0xFFFF
        ctx->r6 = ctx->r4 & 0XFFFF;
            goto L_802A15E4;
    }
    // 0x802A14DC: andi        $a2, $a0, 0xFFFF
    ctx->r6 = ctx->r4 & 0XFFFF;
    // 0x802A14E0: lui         $t8, 0x802C
    ctx->r24 = S32(0X802C << 16);
    // 0x802A14E4: lbu         $t8, 0x3AC6($t8)
    ctx->r24 = MEM_BU(ctx->r24, 0X3AC6);
    // 0x802A14E8: lui         $t0, 0x8011
    ctx->r8 = S32(0X8011 << 16);
    // 0x802A14EC: bne         $t8, $zero, L_802A15E4
    if (ctx->r24 != 0) {
        // 0x802A14F0: addiu       $t0, $t0, -0x2F98
        ctx->r8 = ADD32(ctx->r8, -0X2F98);
            goto L_802A15E4;
    }
    // 0x802A14F0: addiu       $t0, $t0, -0x2F98
    ctx->r8 = ADD32(ctx->r8, -0X2F98);
    // 0x802A14F4: lw          $v0, 0x0($t0)
    ctx->r2 = MEM_W(ctx->r8, 0X0);
    // 0x802A14F8: lui         $t9, 0x3
    ctx->r25 = S32(0X3 << 16);
    // 0x802A14FC: addu        $t9, $t9, $v0
    ctx->r25 = ADD32(ctx->r25, ctx->r2);
    // 0x802A1500: lbu         $t9, -0x7664($t9)
    ctx->r25 = MEM_BU(ctx->r25, -0X7664);
    // 0x802A1504: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x802A1508: bne         $t9, $at, L_802A151C
    if (ctx->r25 != ctx->r1) {
        // 0x802A150C: lui         $t2, 0x8011
        ctx->r10 = S32(0X8011 << 16);
            goto L_802A151C;
    }
    // 0x802A150C: lui         $t2, 0x8011
    ctx->r10 = S32(0X8011 << 16);
    // 0x802A1510: lh          $t2, -0x2FAE($t2)
    ctx->r10 = MEM_H(ctx->r10, -0X2FAE);
    // 0x802A1514: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x802A1518: beq         $t2, $at, L_802A15E4
    if (ctx->r10 == ctx->r1) {
        // 0x802A151C: lui         $t3, 0x8012
        ctx->r11 = S32(0X8012 << 16);
            goto L_802A15E4;
    }
L_802A151C:
    // 0x802A151C: lui         $t3, 0x8012
    ctx->r11 = S32(0X8012 << 16);
    // 0x802A1520: lbu         $t3, -0x32A4($t3)
    ctx->r11 = MEM_BU(ctx->r11, -0X32A4);
    // 0x802A1524: addiu       $at, $zero, 0x7
    ctx->r1 = ADD32(0, 0X7);
    // 0x802A1528: beq         $t3, $at, L_802A15E4
    if (ctx->r11 == ctx->r1) {
        // 0x802A152C: addiu       $t4, $zero, 0xB4
        ctx->r12 = ADD32(0, 0XB4);
            goto L_802A15E4;
    }
    // 0x802A152C: addiu       $t4, $zero, 0xB4
    ctx->r12 = ADD32(0, 0XB4);
    // 0x802A1530: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x802A1534: sh          $t4, 0x3AAC($at)
    MEM_H(0X3AAC, ctx->r1) = ctx->r12;
    // 0x802A1538: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x802A153C: or          $a3, $v0, $zero
    ctx->r7 = ctx->r2 | 0;
    // 0x802A1540: lui         $t1, 0x3
    ctx->r9 = S32(0X3 << 16);
    // 0x802A1544: sll         $a0, $v1, 2
    ctx->r4 = S32(ctx->r3 << 2);
L_802A1548:
    // 0x802A1548: addu        $t5, $a3, $a0
    ctx->r13 = ADD32(ctx->r7, ctx->r4);
    // 0x802A154C: addu        $t6, $t5, $t1
    ctx->r14 = ADD32(ctx->r13, ctx->r9);
    // 0x802A1550: lhu         $t7, 0x75C($t6)
    ctx->r15 = MEM_HU(ctx->r14, 0X75C);
    // 0x802A1554: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x802A1558: bne         $t7, $zero, L_802A15D0
    if (ctx->r15 != 0) {
        // 0x802A155C: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_802A15D0;
    }
    // 0x802A155C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_802A1560:
    // 0x802A1560: lw          $t8, 0x0($t0)
    ctx->r24 = MEM_W(ctx->r8, 0X0);
    // 0x802A1564: sll         $t9, $v0, 1
    ctx->r25 = S32(ctx->r2 << 1);
    // 0x802A1568: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x802A156C: addu        $t2, $t8, $t9
    ctx->r10 = ADD32(ctx->r24, ctx->r25);
    // 0x802A1570: sll         $t4, $v0, 16
    ctx->r12 = S32(ctx->r2 << 16);
    // 0x802A1574: addu        $v1, $t2, $t1
    ctx->r3 = ADD32(ctx->r10, ctx->r9);
    // 0x802A1578: lhu         $t3, 0x7AE($v1)
    ctx->r11 = MEM_HU(ctx->r3, 0X7AE);
    // 0x802A157C: sra         $v0, $t4, 16
    ctx->r2 = S32(SIGNED(ctx->r12) >> 16);
    // 0x802A1580: slti        $at, $v0, 0x9
    ctx->r1 = SIGNED(ctx->r2) < 0X9 ? 1 : 0;
    // 0x802A1584: bne         $at, $zero, L_802A1560
    if (ctx->r1 != 0) {
        // 0x802A1588: sh          $t3, 0x7AC($v1)
        MEM_H(0X7AC, ctx->r3) = ctx->r11;
            goto L_802A1560;
    }
    // 0x802A1588: sh          $t3, 0x7AC($v1)
    MEM_H(0X7AC, ctx->r3) = ctx->r11;
    // 0x802A158C: lw          $t6, 0x0($t0)
    ctx->r14 = MEM_W(ctx->r8, 0X0);
    // 0x802A1590: nop

    // 0x802A1594: addu        $t7, $t6, $t1
    ctx->r15 = ADD32(ctx->r14, ctx->r9);
    // 0x802A1598: sh          $a2, 0x7BE($t7)
    MEM_H(0X7BE, ctx->r15) = ctx->r6;
    // 0x802A159C: lw          $v0, 0x0($t0)
    ctx->r2 = MEM_W(ctx->r8, 0X0);
    // 0x802A15A0: nop

    // 0x802A15A4: addu        $t8, $v0, $t1
    ctx->r24 = ADD32(ctx->r2, ctx->r9);
    // 0x802A15A8: lhu         $t9, 0x7BE($t8)
    ctx->r25 = MEM_HU(ctx->r24, 0X7BE);
    // 0x802A15AC: addu        $t2, $v0, $a0
    ctx->r10 = ADD32(ctx->r2, ctx->r4);
    // 0x802A15B0: addu        $t3, $t2, $t1
    ctx->r11 = ADD32(ctx->r10, ctx->r9);
    // 0x802A15B4: sh          $t9, 0x75C($t3)
    MEM_H(0X75C, ctx->r11) = ctx->r25;
    // 0x802A15B8: lw          $t4, 0x0($t0)
    ctx->r12 = MEM_W(ctx->r8, 0X0);
    // 0x802A15BC: nop

    // 0x802A15C0: addu        $t5, $t4, $a0
    ctx->r13 = ADD32(ctx->r12, ctx->r4);
    // 0x802A15C4: addu        $t6, $t5, $t1
    ctx->r14 = ADD32(ctx->r13, ctx->r9);
    // 0x802A15C8: jr          $ra
    // 0x802A15CC: sh          $a1, 0x75E($t6)
    MEM_H(0X75E, ctx->r14) = ctx->r5;
    return;
    // 0x802A15CC: sh          $a1, 0x75E($t6)
    MEM_H(0X75E, ctx->r14) = ctx->r5;
L_802A15D0:
    // 0x802A15D0: sll         $t7, $v1, 16
    ctx->r15 = S32(ctx->r3 << 16);
    // 0x802A15D4: sra         $v1, $t7, 16
    ctx->r3 = S32(SIGNED(ctx->r15) >> 16);
    // 0x802A15D8: slti        $at, $v1, 0x14
    ctx->r1 = SIGNED(ctx->r3) < 0X14 ? 1 : 0;
    // 0x802A15DC: bne         $at, $zero, L_802A1548
    if (ctx->r1 != 0) {
        // 0x802A15E0: sll         $a0, $v1, 2
        ctx->r4 = S32(ctx->r3 << 2);
            goto L_802A1548;
    }
    // 0x802A15E0: sll         $a0, $v1, 2
    ctx->r4 = S32(ctx->r3 << 2);
L_802A15E4:
    // 0x802A15E4: jr          $ra
    // 0x802A15E8: nop

    return;
    // 0x802A15E8: nop

;}
RECOMP_FUNC void func_802A15EC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802A15EC: lui         $t6, 0x8012
    ctx->r14 = S32(0X8012 << 16);
    // 0x802A15F0: lb          $t6, -0x3095($t6)
    ctx->r14 = MEM_B(ctx->r14, -0X3095);
    // 0x802A15F4: lui         $t7, 0x8012
    ctx->r15 = S32(0X8012 << 16);
    // 0x802A15F8: bne         $t6, $zero, L_802A16BC
    if (ctx->r14 != 0) {
        // 0x802A15FC: nop
    
            goto L_802A16BC;
    }
    // 0x802A15FC: nop

    // 0x802A1600: lbu         $t7, -0x32A4($t7)
    ctx->r15 = MEM_BU(ctx->r15, -0X32A4);
    // 0x802A1604: addiu       $at, $zero, 0x7
    ctx->r1 = ADD32(0, 0X7);
    // 0x802A1608: beq         $t7, $at, L_802A16BC
    if (ctx->r15 == ctx->r1) {
        // 0x802A160C: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_802A16BC;
    }
    // 0x802A160C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x802A1610: lui         $a1, 0x8011
    ctx->r5 = S32(0X8011 << 16);
    // 0x802A1614: lw          $a1, -0x2F98($a1)
    ctx->r5 = MEM_W(ctx->r5, -0X2F98);
    // 0x802A1618: lui         $a2, 0x3
    ctx->r6 = S32(0X3 << 16);
    // 0x802A161C: sll         $v1, $v0, 2
    ctx->r3 = S32(ctx->r2 << 2);
L_802A1620:
    // 0x802A1620: addu        $t8, $a1, $v1
    ctx->r24 = ADD32(ctx->r5, ctx->r3);
    // 0x802A1624: addu        $t9, $t8, $a2
    ctx->r25 = ADD32(ctx->r24, ctx->r6);
    // 0x802A1628: lhu         $t0, 0x75C($t9)
    ctx->r8 = MEM_HU(ctx->r25, 0X75C);
    // 0x802A162C: lui         $a3, 0x8011
    ctx->r7 = S32(0X8011 << 16);
    // 0x802A1630: bne         $t0, $zero, L_802A16A4
    if (ctx->r8 != 0) {
        // 0x802A1634: addiu       $a3, $a3, -0x2F98
        ctx->r7 = ADD32(ctx->r7, -0X2F98);
            goto L_802A16A4;
    }
    // 0x802A1634: addiu       $a3, $a3, -0x2F98
    ctx->r7 = ADD32(ctx->r7, -0X2F98);
    // 0x802A1638: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_802A163C:
    // 0x802A163C: lw          $t1, 0x0($a3)
    ctx->r9 = MEM_W(ctx->r7, 0X0);
    // 0x802A1640: sll         $t2, $v0, 1
    ctx->r10 = S32(ctx->r2 << 1);
    // 0x802A1644: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x802A1648: addu        $t3, $t1, $t2
    ctx->r11 = ADD32(ctx->r9, ctx->r10);
    // 0x802A164C: sll         $t5, $v0, 16
    ctx->r13 = S32(ctx->r2 << 16);
    // 0x802A1650: addu        $a1, $t3, $a2
    ctx->r5 = ADD32(ctx->r11, ctx->r6);
    // 0x802A1654: lhu         $t4, 0x7AE($a1)
    ctx->r12 = MEM_HU(ctx->r5, 0X7AE);
    // 0x802A1658: sra         $v0, $t5, 16
    ctx->r2 = S32(SIGNED(ctx->r13) >> 16);
    // 0x802A165C: slti        $at, $v0, 0x9
    ctx->r1 = SIGNED(ctx->r2) < 0X9 ? 1 : 0;
    // 0x802A1660: bne         $at, $zero, L_802A163C
    if (ctx->r1 != 0) {
        // 0x802A1664: sh          $t4, 0x7AC($a1)
        MEM_H(0X7AC, ctx->r5) = ctx->r12;
            goto L_802A163C;
    }
    // 0x802A1664: sh          $t4, 0x7AC($a1)
    MEM_H(0X7AC, ctx->r5) = ctx->r12;
    // 0x802A1668: lw          $t7, 0x0($a3)
    ctx->r15 = MEM_W(ctx->r7, 0X0);
    // 0x802A166C: lhu         $v0, 0x0($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X0);
    // 0x802A1670: addu        $t8, $t7, $a2
    ctx->r24 = ADD32(ctx->r15, ctx->r6);
    // 0x802A1674: sh          $v0, 0x7BE($t8)
    MEM_H(0X7BE, ctx->r24) = ctx->r2;
    // 0x802A1678: lw          $t9, 0x0($a3)
    ctx->r25 = MEM_W(ctx->r7, 0X0);
    // 0x802A167C: nop

    // 0x802A1680: addu        $t0, $t9, $v1
    ctx->r8 = ADD32(ctx->r25, ctx->r3);
    // 0x802A1684: addu        $t1, $t0, $a2
    ctx->r9 = ADD32(ctx->r8, ctx->r6);
    // 0x802A1688: sh          $v0, 0x75C($t1)
    MEM_H(0X75C, ctx->r9) = ctx->r2;
    // 0x802A168C: lw          $t3, 0x0($a3)
    ctx->r11 = MEM_W(ctx->r7, 0X0);
    // 0x802A1690: lhu         $t2, 0x2($a0)
    ctx->r10 = MEM_HU(ctx->r4, 0X2);
    // 0x802A1694: addu        $t4, $t3, $v1
    ctx->r12 = ADD32(ctx->r11, ctx->r3);
    // 0x802A1698: addu        $t5, $t4, $a2
    ctx->r13 = ADD32(ctx->r12, ctx->r6);
    // 0x802A169C: jr          $ra
    // 0x802A16A0: sh          $t2, 0x75E($t5)
    MEM_H(0X75E, ctx->r13) = ctx->r10;
    return;
    // 0x802A16A0: sh          $t2, 0x75E($t5)
    MEM_H(0X75E, ctx->r13) = ctx->r10;
L_802A16A4:
    // 0x802A16A4: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x802A16A8: sll         $t6, $v0, 16
    ctx->r14 = S32(ctx->r2 << 16);
    // 0x802A16AC: sra         $v0, $t6, 16
    ctx->r2 = S32(SIGNED(ctx->r14) >> 16);
    // 0x802A16B0: slti        $at, $v0, 0x14
    ctx->r1 = SIGNED(ctx->r2) < 0X14 ? 1 : 0;
    // 0x802A16B4: bne         $at, $zero, L_802A1620
    if (ctx->r1 != 0) {
        // 0x802A16B8: sll         $v1, $v0, 2
        ctx->r3 = S32(ctx->r2 << 2);
            goto L_802A1620;
    }
    // 0x802A16B8: sll         $v1, $v0, 2
    ctx->r3 = S32(ctx->r2 << 2);
L_802A16BC:
    // 0x802A16BC: jr          $ra
    // 0x802A16C0: nop

    return;
    // 0x802A16C0: nop

;}
RECOMP_FUNC void func_802A16C4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802A16C4: lui         $a3, 0x8011
    ctx->r7 = S32(0X8011 << 16);
    // 0x802A16C8: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x802A16CC: andi        $a2, $a0, 0xFFFF
    ctx->r6 = ctx->r4 & 0XFFFF;
    // 0x802A16D0: lw          $a3, -0x2F98($a3)
    ctx->r7 = MEM_W(ctx->r7, -0X2F98);
    // 0x802A16D4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x802A16D8: addiu       $v1, $zero, -0x1
    ctx->r3 = ADD32(0, -0X1);
    // 0x802A16DC: lui         $a0, 0x3
    ctx->r4 = S32(0X3 << 16);
    // 0x802A16E0: addiu       $a1, $zero, 0x9
    ctx->r5 = ADD32(0, 0X9);
L_802A16E4:
    // 0x802A16E4: sll         $t7, $a1, 1
    ctx->r15 = S32(ctx->r5 << 1);
    // 0x802A16E8: addu        $t8, $a3, $t7
    ctx->r24 = ADD32(ctx->r7, ctx->r15);
    // 0x802A16EC: addu        $t9, $t8, $a0
    ctx->r25 = ADD32(ctx->r24, ctx->r4);
    // 0x802A16F0: lhu         $t0, 0x7AC($t9)
    ctx->r8 = MEM_HU(ctx->r25, 0X7AC);
    // 0x802A16F4: addiu       $a1, $a1, -0x1
    ctx->r5 = ADD32(ctx->r5, -0X1);
    // 0x802A16F8: bne         $a2, $t0, L_802A170C
    if (ctx->r6 != ctx->r8) {
        // 0x802A16FC: sll         $t4, $a1, 16
        ctx->r12 = S32(ctx->r5 << 16);
            goto L_802A170C;
    }
    // 0x802A16FC: sll         $t4, $a1, 16
    ctx->r12 = S32(ctx->r5 << 16);
    // 0x802A1700: sll         $v1, $v0, 16
    ctx->r3 = S32(ctx->r2 << 16);
    // 0x802A1704: jr          $ra
    // 0x802A1708: sra         $v0, $v1, 16
    ctx->r2 = S32(SIGNED(ctx->r3) >> 16);
    return;
    // 0x802A1708: sra         $v0, $v1, 16
    ctx->r2 = S32(SIGNED(ctx->r3) >> 16);
L_802A170C:
    // 0x802A170C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x802A1710: sra         $a1, $t4, 16
    ctx->r5 = S32(SIGNED(ctx->r12) >> 16);
    // 0x802A1714: sll         $t2, $v0, 16
    ctx->r10 = S32(ctx->r2 << 16);
    // 0x802A1718: bgez        $a1, L_802A16E4
    if (SIGNED(ctx->r5) >= 0) {
        // 0x802A171C: sra         $v0, $t2, 16
        ctx->r2 = S32(SIGNED(ctx->r10) >> 16);
            goto L_802A16E4;
    }
    // 0x802A171C: sra         $v0, $t2, 16
    ctx->r2 = S32(SIGNED(ctx->r10) >> 16);
    // 0x802A1720: jr          $ra
    // 0x802A1724: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    return;
    // 0x802A1724: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
;}
RECOMP_FUNC void func_802A1728(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802A1728: lui         $t6, 0x8011
    ctx->r14 = S32(0X8011 << 16);
    // 0x802A172C: lw          $t6, -0x2F98($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X2F98);
    // 0x802A1730: lui         $v0, 0x3
    ctx->r2 = S32(0X3 << 16);
    // 0x802A1734: addu        $v0, $v0, $t6
    ctx->r2 = ADD32(ctx->r2, ctx->r14);
    // 0x802A1738: lh          $v0, 0x7BE($v0)
    ctx->r2 = MEM_H(ctx->r2, 0X7BE);
    // 0x802A173C: jr          $ra
    // 0x802A1740: nop

    return;
    // 0x802A1740: nop

;}
RECOMP_FUNC void func_802A1744(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802A1744: lui         $v0, 0x8011
    ctx->r2 = S32(0X8011 << 16);
    // 0x802A1748: lw          $v0, -0x2F98($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X2F98);
    // 0x802A174C: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x802A1750: lui         $a0, 0x3
    ctx->r4 = S32(0X3 << 16);
    // 0x802A1754: sll         $t6, $v1, 2
    ctx->r14 = S32(ctx->r3 << 2);
L_802A1758:
    // 0x802A1758: addu        $t7, $v0, $t6
    ctx->r15 = ADD32(ctx->r2, ctx->r14);
    // 0x802A175C: addu        $t8, $t7, $a0
    ctx->r24 = ADD32(ctx->r15, ctx->r4);
    // 0x802A1760: lhu         $t9, 0x75C($t8)
    ctx->r25 = MEM_HU(ctx->r24, 0X75C);
    // 0x802A1764: nop

    // 0x802A1768: beq         $t9, $zero, L_802A1788
    if (ctx->r25 == 0) {
        // 0x802A176C: nop
    
            goto L_802A1788;
    }
    // 0x802A176C: nop

    // 0x802A1770: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x802A1774: sll         $t0, $v1, 16
    ctx->r8 = S32(ctx->r3 << 16);
    // 0x802A1778: sra         $v1, $t0, 16
    ctx->r3 = S32(SIGNED(ctx->r8) >> 16);
    // 0x802A177C: slti        $at, $v1, 0x14
    ctx->r1 = SIGNED(ctx->r3) < 0X14 ? 1 : 0;
    // 0x802A1780: bne         $at, $zero, L_802A1758
    if (ctx->r1 != 0) {
        // 0x802A1784: sll         $t6, $v1, 2
        ctx->r14 = S32(ctx->r3 << 2);
            goto L_802A1758;
    }
    // 0x802A1784: sll         $t6, $v1, 2
    ctx->r14 = S32(ctx->r3 << 2);
L_802A1788:
    // 0x802A1788: jr          $ra
    // 0x802A178C: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    return;
    // 0x802A178C: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
;}
