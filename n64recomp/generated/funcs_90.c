#include "iss64_recomp.h"
#include "funcs.h"

RECOMP_FUNC void func_803F5270(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803F5270: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x803F5274: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x803F5278: lui         $a0, 0x803F
    ctx->r4 = S32(0X803F << 16);
    // 0x803F527C: sw          $s6, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r22;
    // 0x803F5280: sw          $s5, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r21;
    // 0x803F5284: sw          $s4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r20;
    // 0x803F5288: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x803F528C: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x803F5290: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x803F5294: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x803F5298: addiu       $a0, $a0, 0x5378
    ctx->r4 = ADD32(ctx->r4, 0X5378);
    // 0x803F529C: jal         0x800293DC
    // 0x803F52A0: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    func_800293DC(rdram, ctx);
        goto after_0;
    // 0x803F52A0: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    after_0:
    // 0x803F52A4: lw          $s0, 0x14($v0)
    ctx->r16 = MEM_W(ctx->r2, 0X14);
    // 0x803F52A8: addiu       $s2, $zero, -0x1
    ctx->r18 = ADD32(0, -0X1);
    // 0x803F52AC: beq         $s0, $s2, L_803F5350
    if (ctx->r16 == ctx->r18) {
        // 0x803F52B0: or          $s1, $zero, $zero
        ctx->r17 = 0 | 0;
            goto L_803F5350;
    }
    // 0x803F52B0: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    // 0x803F52B4: lui         $s6, 0x8040
    ctx->r22 = S32(0X8040 << 16);
    // 0x803F52B8: lui         $s5, 0x8040
    ctx->r21 = S32(0X8040 << 16);
    // 0x803F52BC: lui         $s4, 0x8040
    ctx->r20 = S32(0X8040 << 16);
    // 0x803F52C0: lui         $s3, 0x8012
    ctx->r19 = S32(0X8012 << 16);
    // 0x803F52C4: addiu       $s3, $s3, -0x32B0
    ctx->r19 = ADD32(ctx->r19, -0X32B0);
    // 0x803F52C8: addiu       $s4, $s4, -0x4E78
    ctx->r20 = ADD32(ctx->r20, -0X4E78);
    // 0x803F52CC: addiu       $s5, $s5, -0x4E38
    ctx->r21 = ADD32(ctx->r21, -0X4E38);
    // 0x803F52D0: addiu       $s6, $s6, -0x4E58
    ctx->r22 = ADD32(ctx->r22, -0X4E58);
L_803F52D4:
    // 0x803F52D4: lbu         $t6, 0x3E($s3)
    ctx->r14 = MEM_BU(ctx->r19, 0X3E);
    // 0x803F52D8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x803F52DC: bne         $t6, $zero, L_803F5308
    if (ctx->r14 != 0) {
        // 0x803F52E0: sll         $t8, $s1, 3
        ctx->r24 = S32(ctx->r17 << 3);
            goto L_803F5308;
    }
    // 0x803F52E0: sll         $t8, $s1, 3
    ctx->r24 = S32(ctx->r17 << 3);
    // 0x803F52E4: sll         $t7, $s1, 3
    ctx->r15 = S32(ctx->r17 << 3);
    // 0x803F52E8: addu        $v0, $s4, $t7
    ctx->r2 = ADD32(ctx->r20, ctx->r15);
    // 0x803F52EC: lhu         $a1, 0x4($v0)
    ctx->r5 = MEM_HU(ctx->r2, 0X4);
    // 0x803F52F0: lw          $a3, 0x0($v0)
    ctx->r7 = MEM_W(ctx->r2, 0X0);
    // 0x803F52F4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x803F52F8: jal         0x8004CD24
    // 0x803F52FC: addiu       $a2, $zero, 0xA
    ctx->r6 = ADD32(0, 0XA);
    func_8004CD24(rdram, ctx);
        goto after_1;
    // 0x803F52FC: addiu       $a2, $zero, 0xA
    ctx->r6 = ADD32(0, 0XA);
    after_1:
    // 0x803F5300: b           L_803F5320
    // 0x803F5304: lhu         $t9, 0x16($s0)
    ctx->r25 = MEM_HU(ctx->r16, 0X16);
        goto L_803F5320;
    // 0x803F5304: lhu         $t9, 0x16($s0)
    ctx->r25 = MEM_HU(ctx->r16, 0X16);
L_803F5308:
    // 0x803F5308: addu        $v0, $s6, $t8
    ctx->r2 = ADD32(ctx->r22, ctx->r24);
    // 0x803F530C: lhu         $a1, 0x4($v0)
    ctx->r5 = MEM_HU(ctx->r2, 0X4);
    // 0x803F5310: lw          $a3, 0x0($v0)
    ctx->r7 = MEM_W(ctx->r2, 0X0);
    // 0x803F5314: jal         0x8004CD24
    // 0x803F5318: addiu       $a2, $zero, 0xA
    ctx->r6 = ADD32(0, 0XA);
    func_8004CD24(rdram, ctx);
        goto after_2;
    // 0x803F5318: addiu       $a2, $zero, 0xA
    ctx->r6 = ADD32(0, 0XA);
    after_2:
    // 0x803F531C: lhu         $t9, 0x16($s0)
    ctx->r25 = MEM_HU(ctx->r16, 0X16);
L_803F5320:
    // 0x803F5320: addu        $t1, $s5, $s1
    ctx->r9 = ADD32(ctx->r21, ctx->r17);
    // 0x803F5324: ori         $t0, $t9, 0x400
    ctx->r8 = ctx->r25 | 0X400;
    // 0x803F5328: sh          $t0, 0x16($s0)
    MEM_H(0X16, ctx->r16) = ctx->r8;
    // 0x803F532C: lbu         $a2, 0x0($t1)
    ctx->r6 = MEM_BU(ctx->r9, 0X0);
    // 0x803F5330: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x803F5334: jal         0x8002135C
    // 0x803F5338: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_8002135C(rdram, ctx);
        goto after_3;
    // 0x803F5338: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_3:
    // 0x803F533C: lw          $s0, 0x0($s0)
    ctx->r16 = MEM_W(ctx->r16, 0X0);
    // 0x803F5340: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x803F5344: andi        $t2, $s1, 0xFF
    ctx->r10 = ctx->r17 & 0XFF;
    // 0x803F5348: bne         $s0, $s2, L_803F52D4
    if (ctx->r16 != ctx->r18) {
        // 0x803F534C: or          $s1, $t2, $zero
        ctx->r17 = ctx->r10 | 0;
            goto L_803F52D4;
    }
    // 0x803F534C: or          $s1, $t2, $zero
    ctx->r17 = ctx->r10 | 0;
L_803F5350:
    // 0x803F5350: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x803F5354: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x803F5358: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x803F535C: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x803F5360: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x803F5364: lw          $s4, 0x28($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X28);
    // 0x803F5368: lw          $s5, 0x2C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X2C);
    // 0x803F536C: lw          $s6, 0x30($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X30);
    // 0x803F5370: jr          $ra
    // 0x803F5374: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    return;
    // 0x803F5374: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_803F5378(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803F5378: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x803F537C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x803F5380: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x803F5384: lw          $v0, 0x8($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X8);
    // 0x803F5388: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x803F538C: lb          $v1, 0x38($v0)
    ctx->r3 = MEM_B(ctx->r2, 0X38);
    // 0x803F5390: lui         $a0, 0x8005
    ctx->r4 = S32(0X8005 << 16);
    // 0x803F5394: beq         $v1, $zero, L_803F53A4
    if (ctx->r3 == 0) {
        // 0x803F5398: nop
    
            goto L_803F53A4;
    }
    // 0x803F5398: nop

    // 0x803F539C: bne         $v1, $at, L_803F53B4
    if (ctx->r3 != ctx->r1) {
        // 0x803F53A0: nop
    
            goto L_803F53B4;
    }
    // 0x803F53A0: nop

L_803F53A4:
    // 0x803F53A4: jal         0x8002A468
    // 0x803F53A8: addiu       $a0, $a0, -0x3228
    ctx->r4 = ADD32(ctx->r4, -0X3228);
    func_8002A468(rdram, ctx);
        goto after_0;
    // 0x803F53A8: addiu       $a0, $a0, -0x3228
    ctx->r4 = ADD32(ctx->r4, -0X3228);
    after_0:
    // 0x803F53AC: b           L_803F53C4
    // 0x803F53B0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_803F53C4;
    // 0x803F53B0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_803F53B4:
    // 0x803F53B4: lui         $a0, 0x8005
    ctx->r4 = S32(0X8005 << 16);
    // 0x803F53B8: jal         0x8002A468
    // 0x803F53BC: addiu       $a0, $a0, -0x3230
    ctx->r4 = ADD32(ctx->r4, -0X3230);
    func_8002A468(rdram, ctx);
        goto after_1;
    // 0x803F53BC: addiu       $a0, $a0, -0x3230
    ctx->r4 = ADD32(ctx->r4, -0X3230);
    after_1:
    // 0x803F53C0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_803F53C4:
    // 0x803F53C4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x803F53C8: jr          $ra
    // 0x803F53CC: nop

    return;
    // 0x803F53CC: nop

;}
RECOMP_FUNC void func_803F53D0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803F53D0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x803F53D4: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x803F53D8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x803F53DC: lbu         $a0, -0x326C($a0)
    ctx->r4 = MEM_BU(ctx->r4, -0X326C);
    // 0x803F53E0: jal         0x8004BD64
    // 0x803F53E4: nop

    func_8004BD64(rdram, ctx);
        goto after_0;
    // 0x803F53E4: nop

    after_0:
    // 0x803F53E8: lui         $t6, 0x803F
    ctx->r14 = S32(0X803F << 16);
    // 0x803F53EC: lw          $v1, 0x14($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X14);
    // 0x803F53F0: addiu       $t6, $t6, 0x5418
    ctx->r14 = ADD32(ctx->r14, 0X5418);
    // 0x803F53F4: sw          $t6, 0xC($v0)
    MEM_W(0XC, ctx->r2) = ctx->r14;
    // 0x803F53F8: lhu         $t7, 0x16($v1)
    ctx->r15 = MEM_HU(ctx->r3, 0X16);
    // 0x803F53FC: nop

    // 0x803F5400: ori         $t8, $t7, 0x400
    ctx->r24 = ctx->r15 | 0X400;
    // 0x803F5404: sh          $t8, 0x16($v1)
    MEM_H(0X16, ctx->r3) = ctx->r24;
    // 0x803F5408: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x803F540C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x803F5410: jr          $ra
    // 0x803F5414: nop

    return;
    // 0x803F5414: nop

;}
RECOMP_FUNC void func_803F5418(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803F5418: lw          $v0, 0x8($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X8);
    // 0x803F541C: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x803F5420: lb          $v1, 0x38($v0)
    ctx->r3 = MEM_B(ctx->r2, 0X38);
    // 0x803F5424: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x803F5428: beq         $v1, $zero, L_803F5440
    if (ctx->r3 == 0) {
        // 0x803F542C: nop
    
            goto L_803F5440;
    }
    // 0x803F542C: nop

    // 0x803F5430: beq         $v1, $at, L_803F5440
    if (ctx->r3 == ctx->r1) {
        // 0x803F5434: nop
    
            goto L_803F5440;
    }
    // 0x803F5434: nop

    // 0x803F5438: jr          $ra
    // 0x803F543C: sb          $zero, 0x4($a1)
    MEM_B(0X4, ctx->r5) = 0;
    return;
    // 0x803F543C: sb          $zero, 0x4($a1)
    MEM_B(0X4, ctx->r5) = 0;
L_803F5440:
    // 0x803F5440: sb          $t6, 0x4($a1)
    MEM_B(0X4, ctx->r5) = ctx->r14;
    // 0x803F5444: lb          $t7, 0x39($v0)
    ctx->r15 = MEM_B(ctx->r2, 0X39);
    // 0x803F5448: lui         $t9, 0x8040
    ctx->r25 = S32(0X8040 << 16);
    // 0x803F544C: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x803F5450: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x803F5454: lw          $t9, -0x4E34($t9)
    ctx->r25 = MEM_W(ctx->r25, -0X4E34);
    // 0x803F5458: nop

    // 0x803F545C: sw          $t9, 0x30($a1)
    MEM_W(0X30, ctx->r5) = ctx->r25;
    // 0x803F5460: jr          $ra
    // 0x803F5464: nop

    return;
    // 0x803F5464: nop

;}
RECOMP_FUNC void func_803F5454(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803F5454: lw          $t9, -0x4E34($t9)
    ctx->r25 = MEM_W(ctx->r25, -0X4E34);
    // 0x803F5458: nop

    // 0x803F545C: sw          $t9, 0x30($a1)
    MEM_W(0X30, ctx->r5) = ctx->r25;
    // 0x803F5460: jr          $ra
    // 0x803F5464: nop

    return;
    // 0x803F5464: nop

;}
RECOMP_FUNC void func_803F5468(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803F5468: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x803F546C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x803F5470: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x803F5474: lw          $t6, 0x8($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X8);
    // 0x803F5478: or          $s0, $a1, $zero
    ctx->r16 = ctx->r5 | 0;
    // 0x803F547C: lw          $v1, 0x8($t6)
    ctx->r3 = MEM_W(ctx->r14, 0X8);
    // 0x803F5480: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    // 0x803F5484: lb          $v0, 0x39($v1)
    ctx->r2 = MEM_B(ctx->r3, 0X39);
    // 0x803F5488: addiu       $a1, $zero, 0x7
    ctx->r5 = ADD32(0, 0X7);
    // 0x803F548C: bne         $v0, $zero, L_803F54AC
    if (ctx->r2 != 0) {
        // 0x803F5490: addiu       $at, $zero, 0x3
        ctx->r1 = ADD32(0, 0X3);
            goto L_803F54AC;
    }
    // 0x803F5490: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x803F5494: addiu       $a2, $zero, 0x26
    ctx->r6 = ADD32(0, 0X26);
    // 0x803F5498: jal         0x8002135C
    // 0x803F549C: sw          $v1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r3;
    func_8002135C(rdram, ctx);
        goto after_0;
    // 0x803F549C: sw          $v1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r3;
    after_0:
    // 0x803F54A0: lw          $v1, 0x24($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X24);
    // 0x803F54A4: b           L_803F54F0
    // 0x803F54A8: lb          $v0, 0x38($v1)
    ctx->r2 = MEM_B(ctx->r3, 0X38);
        goto L_803F54F0;
    // 0x803F54A8: lb          $v0, 0x38($v1)
    ctx->r2 = MEM_B(ctx->r3, 0X38);
L_803F54AC:
    // 0x803F54AC: bne         $v0, $at, L_803F54D4
    if (ctx->r2 != ctx->r1) {
        // 0x803F54B0: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_803F54D4;
    }
    // 0x803F54B0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x803F54B4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x803F54B8: addiu       $a1, $zero, 0x7
    ctx->r5 = ADD32(0, 0X7);
    // 0x803F54BC: addiu       $a2, $zero, 0x27
    ctx->r6 = ADD32(0, 0X27);
    // 0x803F54C0: jal         0x8002135C
    // 0x803F54C4: sw          $v1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r3;
    func_8002135C(rdram, ctx);
        goto after_1;
    // 0x803F54C4: sw          $v1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r3;
    after_1:
    // 0x803F54C8: lw          $v1, 0x24($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X24);
    // 0x803F54CC: b           L_803F54F0
    // 0x803F54D0: lb          $v0, 0x38($v1)
    ctx->r2 = MEM_B(ctx->r3, 0X38);
        goto L_803F54F0;
    // 0x803F54D0: lb          $v0, 0x38($v1)
    ctx->r2 = MEM_B(ctx->r3, 0X38);
L_803F54D4:
    // 0x803F54D4: addiu       $a1, $zero, 0x7
    ctx->r5 = ADD32(0, 0X7);
    // 0x803F54D8: addiu       $a2, $zero, 0x28
    ctx->r6 = ADD32(0, 0X28);
    // 0x803F54DC: jal         0x8002135C
    // 0x803F54E0: sw          $v1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r3;
    func_8002135C(rdram, ctx);
        goto after_2;
    // 0x803F54E0: sw          $v1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r3;
    after_2:
    // 0x803F54E4: lw          $v1, 0x24($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X24);
    // 0x803F54E8: nop

    // 0x803F54EC: lb          $v0, 0x38($v1)
    ctx->r2 = MEM_B(ctx->r3, 0X38);
L_803F54F0:
    // 0x803F54F0: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x803F54F4: beq         $v0, $zero, L_803F550C
    if (ctx->r2 == 0) {
        // 0x803F54F8: nop
    
            goto L_803F550C;
    }
    // 0x803F54F8: nop

    // 0x803F54FC: beq         $v0, $at, L_803F550C
    if (ctx->r2 == ctx->r1) {
        // 0x803F5500: nop
    
            goto L_803F550C;
    }
    // 0x803F5500: nop

    // 0x803F5504: b           L_803F557C
    // 0x803F5508: sb          $zero, 0x4($s0)
    MEM_B(0X4, ctx->r16) = 0;
        goto L_803F557C;
    // 0x803F5508: sb          $zero, 0x4($s0)
    MEM_B(0X4, ctx->r16) = 0;
L_803F550C:
    // 0x803F550C: lhu         $t7, 0x16($s0)
    ctx->r15 = MEM_HU(ctx->r16, 0X16);
    // 0x803F5510: lui         $t9, 0x8012
    ctx->r25 = S32(0X8012 << 16);
    // 0x803F5514: ori         $t8, $t7, 0x400
    ctx->r24 = ctx->r15 | 0X400;
    // 0x803F5518: sh          $t8, 0x16($s0)
    MEM_H(0X16, ctx->r16) = ctx->r24;
    // 0x803F551C: lbu         $t9, -0x3272($t9)
    ctx->r25 = MEM_BU(ctx->r25, -0X3272);
    // 0x803F5520: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x803F5524: bne         $t9, $zero, L_803F555C
    if (ctx->r25 != 0) {
        // 0x803F5528: lui         $t5, 0x8040
        ctx->r13 = S32(0X8040 << 16);
            goto L_803F555C;
    }
    // 0x803F5528: lui         $t5, 0x8040
    ctx->r13 = S32(0X8040 << 16);
    // 0x803F552C: lb          $t0, 0x39($v1)
    ctx->r8 = MEM_B(ctx->r3, 0X39);
    // 0x803F5530: lui         $t2, 0x8040
    ctx->r10 = S32(0X8040 << 16);
    // 0x803F5534: addiu       $t2, $t2, -0x4E24
    ctx->r10 = ADD32(ctx->r10, -0X4E24);
    // 0x803F5538: sll         $t1, $t0, 3
    ctx->r9 = S32(ctx->r8 << 3);
    // 0x803F553C: addu        $v0, $t1, $t2
    ctx->r2 = ADD32(ctx->r9, ctx->r10);
    // 0x803F5540: lhu         $a1, 0x4($v0)
    ctx->r5 = MEM_HU(ctx->r2, 0X4);
    // 0x803F5544: lw          $a3, 0x0($v0)
    ctx->r7 = MEM_W(ctx->r2, 0X0);
    // 0x803F5548: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x803F554C: jal         0x8004CD24
    // 0x803F5550: addiu       $a2, $zero, 0xA
    ctx->r6 = ADD32(0, 0XA);
    func_8004CD24(rdram, ctx);
        goto after_3;
    // 0x803F5550: addiu       $a2, $zero, 0xA
    ctx->r6 = ADD32(0, 0XA);
    after_3:
    // 0x803F5554: b           L_803F5580
    // 0x803F5558: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_803F5580;
    // 0x803F5558: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_803F555C:
    // 0x803F555C: lb          $t3, 0x39($v1)
    ctx->r11 = MEM_B(ctx->r3, 0X39);
    // 0x803F5560: addiu       $t5, $t5, -0x4E04
    ctx->r13 = ADD32(ctx->r13, -0X4E04);
    // 0x803F5564: sll         $t4, $t3, 3
    ctx->r12 = S32(ctx->r11 << 3);
    // 0x803F5568: addu        $v0, $t4, $t5
    ctx->r2 = ADD32(ctx->r12, ctx->r13);
    // 0x803F556C: lhu         $a1, 0x4($v0)
    ctx->r5 = MEM_HU(ctx->r2, 0X4);
    // 0x803F5570: lw          $a3, 0x0($v0)
    ctx->r7 = MEM_W(ctx->r2, 0X0);
    // 0x803F5574: jal         0x8004CD24
    // 0x803F5578: addiu       $a2, $zero, 0xA
    ctx->r6 = ADD32(0, 0XA);
    func_8004CD24(rdram, ctx);
        goto after_4;
    // 0x803F5578: addiu       $a2, $zero, 0xA
    ctx->r6 = ADD32(0, 0XA);
    after_4:
L_803F557C:
    // 0x803F557C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_803F5580:
    // 0x803F5580: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x803F5584: jr          $ra
    // 0x803F5588: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x803F5588: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_803F54B0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803F54B0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x803F54B4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x803F54B8: addiu       $a1, $zero, 0x7
    ctx->r5 = ADD32(0, 0X7);
    // 0x803F54BC: addiu       $a2, $zero, 0x27
    ctx->r6 = ADD32(0, 0X27);
    // 0x803F54C0: jal         0x8002135C
    // 0x803F54C4: sw          $v1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r3;
    func_8002135C(rdram, ctx);
        goto after_0;
    // 0x803F54C4: sw          $v1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r3;
    after_0:
    // 0x803F54C8: lw          $v1, 0x24($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X24);
    // 0x803F54CC: b           L_803F54F0
    // 0x803F54D0: lb          $v0, 0x38($v1)
    ctx->r2 = MEM_B(ctx->r3, 0X38);
        goto L_803F54F0;
    // 0x803F54D0: lb          $v0, 0x38($v1)
    ctx->r2 = MEM_B(ctx->r3, 0X38);
    // 0x803F54D4: addiu       $a1, $zero, 0x7
    ctx->r5 = ADD32(0, 0X7);
    // 0x803F54D8: addiu       $a2, $zero, 0x28
    ctx->r6 = ADD32(0, 0X28);
    // 0x803F54DC: jal         0x8002135C
    // 0x803F54E0: sw          $v1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r3;
    func_8002135C(rdram, ctx);
        goto after_1;
    // 0x803F54E0: sw          $v1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r3;
    after_1:
    // 0x803F54E4: lw          $v1, 0x24($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X24);
    // 0x803F54E8: nop

    // 0x803F54EC: lb          $v0, 0x38($v1)
    ctx->r2 = MEM_B(ctx->r3, 0X38);
L_803F54F0:
    // 0x803F54F0: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x803F54F4: beq         $v0, $zero, L_803F550C
    if (ctx->r2 == 0) {
        // 0x803F54F8: nop
    
            goto L_803F550C;
    }
    // 0x803F54F8: nop

    // 0x803F54FC: beq         $v0, $at, L_803F550C
    if (ctx->r2 == ctx->r1) {
        // 0x803F5500: nop
    
            goto L_803F550C;
    }
    // 0x803F5500: nop

    // 0x803F5504: b           L_803F557C
    // 0x803F5508: sb          $zero, 0x4($s0)
    MEM_B(0X4, ctx->r16) = 0;
        goto L_803F557C;
    // 0x803F5508: sb          $zero, 0x4($s0)
    MEM_B(0X4, ctx->r16) = 0;
L_803F550C:
    // 0x803F550C: lhu         $t7, 0x16($s0)
    ctx->r15 = MEM_HU(ctx->r16, 0X16);
    // 0x803F5510: lui         $t9, 0x8012
    ctx->r25 = S32(0X8012 << 16);
    // 0x803F5514: ori         $t8, $t7, 0x400
    ctx->r24 = ctx->r15 | 0X400;
    // 0x803F5518: sh          $t8, 0x16($s0)
    MEM_H(0X16, ctx->r16) = ctx->r24;
    // 0x803F551C: lbu         $t9, -0x3272($t9)
    ctx->r25 = MEM_BU(ctx->r25, -0X3272);
    // 0x803F5520: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x803F5524: bne         $t9, $zero, L_803F555C
    if (ctx->r25 != 0) {
        // 0x803F5528: lui         $t5, 0x8040
        ctx->r13 = S32(0X8040 << 16);
            goto L_803F555C;
    }
    // 0x803F5528: lui         $t5, 0x8040
    ctx->r13 = S32(0X8040 << 16);
    // 0x803F552C: lb          $t0, 0x39($v1)
    ctx->r8 = MEM_B(ctx->r3, 0X39);
    // 0x803F5530: lui         $t2, 0x8040
    ctx->r10 = S32(0X8040 << 16);
    // 0x803F5534: addiu       $t2, $t2, -0x4E24
    ctx->r10 = ADD32(ctx->r10, -0X4E24);
    // 0x803F5538: sll         $t1, $t0, 3
    ctx->r9 = S32(ctx->r8 << 3);
    // 0x803F553C: addu        $v0, $t1, $t2
    ctx->r2 = ADD32(ctx->r9, ctx->r10);
    // 0x803F5540: lhu         $a1, 0x4($v0)
    ctx->r5 = MEM_HU(ctx->r2, 0X4);
    // 0x803F5544: lw          $a3, 0x0($v0)
    ctx->r7 = MEM_W(ctx->r2, 0X0);
    // 0x803F5548: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x803F554C: jal         0x8004CD24
    // 0x803F5550: addiu       $a2, $zero, 0xA
    ctx->r6 = ADD32(0, 0XA);
    func_8004CD24(rdram, ctx);
        goto after_2;
    // 0x803F5550: addiu       $a2, $zero, 0xA
    ctx->r6 = ADD32(0, 0XA);
    after_2:
    // 0x803F5554: b           L_803F5580
    // 0x803F5558: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_803F5580;
    // 0x803F5558: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_803F555C:
    // 0x803F555C: lb          $t3, 0x39($v1)
    ctx->r11 = MEM_B(ctx->r3, 0X39);
    // 0x803F5560: addiu       $t5, $t5, -0x4E04
    ctx->r13 = ADD32(ctx->r13, -0X4E04);
    // 0x803F5564: sll         $t4, $t3, 3
    ctx->r12 = S32(ctx->r11 << 3);
    // 0x803F5568: addu        $v0, $t4, $t5
    ctx->r2 = ADD32(ctx->r12, ctx->r13);
    // 0x803F556C: lhu         $a1, 0x4($v0)
    ctx->r5 = MEM_HU(ctx->r2, 0X4);
    // 0x803F5570: lw          $a3, 0x0($v0)
    ctx->r7 = MEM_W(ctx->r2, 0X0);
    // 0x803F5574: jal         0x8004CD24
    // 0x803F5578: addiu       $a2, $zero, 0xA
    ctx->r6 = ADD32(0, 0XA);
    func_8004CD24(rdram, ctx);
        goto after_3;
    // 0x803F5578: addiu       $a2, $zero, 0xA
    ctx->r6 = ADD32(0, 0XA);
    after_3:
L_803F557C:
    // 0x803F557C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_803F5580:
    // 0x803F5580: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x803F5584: jr          $ra
    // 0x803F5588: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x803F5588: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_803F54DC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803F54DC: jal         0x8002135C
    // 0x803F54E0: sw          $v1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r3;
    func_8002135C(rdram, ctx);
        goto after_0;
    // 0x803F54E0: sw          $v1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r3;
    after_0:
    // 0x803F54E4: lw          $v1, 0x24($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X24);
    // 0x803F54E8: nop

    // 0x803F54EC: lb          $v0, 0x38($v1)
    ctx->r2 = MEM_B(ctx->r3, 0X38);
    // 0x803F54F0: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x803F54F4: beq         $v0, $zero, L_803F550C
    if (ctx->r2 == 0) {
        // 0x803F54F8: nop
    
            goto L_803F550C;
    }
    // 0x803F54F8: nop

    // 0x803F54FC: beq         $v0, $at, L_803F550C
    if (ctx->r2 == ctx->r1) {
        // 0x803F5500: nop
    
            goto L_803F550C;
    }
    // 0x803F5500: nop

    // 0x803F5504: b           L_803F557C
    // 0x803F5508: sb          $zero, 0x4($s0)
    MEM_B(0X4, ctx->r16) = 0;
        goto L_803F557C;
    // 0x803F5508: sb          $zero, 0x4($s0)
    MEM_B(0X4, ctx->r16) = 0;
L_803F550C:
    // 0x803F550C: lhu         $t7, 0x16($s0)
    ctx->r15 = MEM_HU(ctx->r16, 0X16);
    // 0x803F5510: lui         $t9, 0x8012
    ctx->r25 = S32(0X8012 << 16);
    // 0x803F5514: ori         $t8, $t7, 0x400
    ctx->r24 = ctx->r15 | 0X400;
    // 0x803F5518: sh          $t8, 0x16($s0)
    MEM_H(0X16, ctx->r16) = ctx->r24;
    // 0x803F551C: lbu         $t9, -0x3272($t9)
    ctx->r25 = MEM_BU(ctx->r25, -0X3272);
    // 0x803F5520: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x803F5524: bne         $t9, $zero, L_803F555C
    if (ctx->r25 != 0) {
        // 0x803F5528: lui         $t5, 0x8040
        ctx->r13 = S32(0X8040 << 16);
            goto L_803F555C;
    }
    // 0x803F5528: lui         $t5, 0x8040
    ctx->r13 = S32(0X8040 << 16);
    // 0x803F552C: lb          $t0, 0x39($v1)
    ctx->r8 = MEM_B(ctx->r3, 0X39);
    // 0x803F5530: lui         $t2, 0x8040
    ctx->r10 = S32(0X8040 << 16);
    // 0x803F5534: addiu       $t2, $t2, -0x4E24
    ctx->r10 = ADD32(ctx->r10, -0X4E24);
    // 0x803F5538: sll         $t1, $t0, 3
    ctx->r9 = S32(ctx->r8 << 3);
    // 0x803F553C: addu        $v0, $t1, $t2
    ctx->r2 = ADD32(ctx->r9, ctx->r10);
    // 0x803F5540: lhu         $a1, 0x4($v0)
    ctx->r5 = MEM_HU(ctx->r2, 0X4);
    // 0x803F5544: lw          $a3, 0x0($v0)
    ctx->r7 = MEM_W(ctx->r2, 0X0);
    // 0x803F5548: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x803F554C: jal         0x8004CD24
    // 0x803F5550: addiu       $a2, $zero, 0xA
    ctx->r6 = ADD32(0, 0XA);
    func_8004CD24(rdram, ctx);
        goto after_1;
    // 0x803F5550: addiu       $a2, $zero, 0xA
    ctx->r6 = ADD32(0, 0XA);
    after_1:
    // 0x803F5554: b           L_803F5580
    // 0x803F5558: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_803F5580;
    // 0x803F5558: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_803F555C:
    // 0x803F555C: lb          $t3, 0x39($v1)
    ctx->r11 = MEM_B(ctx->r3, 0X39);
    // 0x803F5560: addiu       $t5, $t5, -0x4E04
    ctx->r13 = ADD32(ctx->r13, -0X4E04);
    // 0x803F5564: sll         $t4, $t3, 3
    ctx->r12 = S32(ctx->r11 << 3);
    // 0x803F5568: addu        $v0, $t4, $t5
    ctx->r2 = ADD32(ctx->r12, ctx->r13);
    // 0x803F556C: lhu         $a1, 0x4($v0)
    ctx->r5 = MEM_HU(ctx->r2, 0X4);
    // 0x803F5570: lw          $a3, 0x0($v0)
    ctx->r7 = MEM_W(ctx->r2, 0X0);
    // 0x803F5574: jal         0x8004CD24
    // 0x803F5578: addiu       $a2, $zero, 0xA
    ctx->r6 = ADD32(0, 0XA);
    func_8004CD24(rdram, ctx);
        goto after_2;
    // 0x803F5578: addiu       $a2, $zero, 0xA
    ctx->r6 = ADD32(0, 0XA);
    after_2:
L_803F557C:
    // 0x803F557C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_803F5580:
    // 0x803F5580: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x803F5584: jr          $ra
    // 0x803F5588: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x803F5588: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_803F558C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803F558C: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x803F5590: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x803F5594: lui         $a0, 0x803F
    ctx->r4 = S32(0X803F << 16);
    // 0x803F5598: sw          $s3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r19;
    // 0x803F559C: sw          $s2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r18;
    // 0x803F55A0: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x803F55A4: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x803F55A8: addiu       $a0, $a0, 0x5610
    ctx->r4 = ADD32(ctx->r4, 0X5610);
    // 0x803F55AC: jal         0x800293DC
    // 0x803F55B0: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_800293DC(rdram, ctx);
        goto after_0;
    // 0x803F55B0: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_0:
    // 0x803F55B4: lui         $s3, 0x803C
    ctx->r19 = S32(0X803C << 16);
    // 0x803F55B8: lui         $s2, 0x8012
    ctx->r18 = S32(0X8012 << 16);
    // 0x803F55BC: lw          $s0, 0x14($v0)
    ctx->r16 = MEM_W(ctx->r2, 0X14);
    // 0x803F55C0: addiu       $s2, $s2, -0x32B0
    ctx->r18 = ADD32(ctx->r18, -0X32B0);
    // 0x803F55C4: addiu       $s3, $s3, 0x69E0
    ctx->r19 = ADD32(ctx->r19, 0X69E0);
    // 0x803F55C8: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
L_803F55CC:
    // 0x803F55CC: lbu         $a1, 0x44($s2)
    ctx->r5 = MEM_BU(ctx->r18, 0X44);
    // 0x803F55D0: jal         0x8004BDA0
    // 0x803F55D4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8004BDA0(rdram, ctx);
        goto after_1;
    // 0x803F55D4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
    // 0x803F55D8: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x803F55DC: andi        $t6, $s1, 0xFF
    ctx->r14 = ctx->r17 & 0XFF;
    // 0x803F55E0: sw          $s3, 0x30($s0)
    MEM_W(0X30, ctx->r16) = ctx->r19;
    // 0x803F55E4: lw          $s0, 0x0($s0)
    ctx->r16 = MEM_W(ctx->r16, 0X0);
    // 0x803F55E8: slti        $at, $t6, 0x2
    ctx->r1 = SIGNED(ctx->r14) < 0X2 ? 1 : 0;
    // 0x803F55EC: bne         $at, $zero, L_803F55CC
    if (ctx->r1 != 0) {
        // 0x803F55F0: or          $s1, $t6, $zero
        ctx->r17 = ctx->r14 | 0;
            goto L_803F55CC;
    }
    // 0x803F55F0: or          $s1, $t6, $zero
    ctx->r17 = ctx->r14 | 0;
    // 0x803F55F4: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x803F55F8: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x803F55FC: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x803F5600: lw          $s2, 0x1C($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X1C);
    // 0x803F5604: lw          $s3, 0x20($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X20);
    // 0x803F5608: jr          $ra
    // 0x803F560C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x803F560C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_803F5610(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803F5610: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x803F5614: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x803F5618: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x803F561C: lw          $a3, 0x8($a0)
    ctx->r7 = MEM_W(ctx->r4, 0X8);
    // 0x803F5620: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x803F5624: lb          $v0, 0x38($a3)
    ctx->r2 = MEM_B(ctx->r7, 0X38);
    // 0x803F5628: or          $s0, $a1, $zero
    ctx->r16 = ctx->r5 | 0;
    // 0x803F562C: beq         $v0, $v1, L_803F5648
    if (ctx->r2 == ctx->r3) {
        // 0x803F5630: addiu       $t6, $zero, 0x1
        ctx->r14 = ADD32(0, 0X1);
            goto L_803F5648;
    }
    // 0x803F5630: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x803F5634: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x803F5638: beq         $v0, $at, L_803F570C
    if (ctx->r2 == ctx->r1) {
        // 0x803F563C: lui         $a0, 0x8005
        ctx->r4 = S32(0X8005 << 16);
            goto L_803F570C;
    }
    // 0x803F563C: lui         $a0, 0x8005
    ctx->r4 = S32(0X8005 << 16);
    // 0x803F5640: b           L_803F571C
    // 0x803F5644: lui         $a0, 0x8005
    ctx->r4 = S32(0X8005 << 16);
        goto L_803F571C;
    // 0x803F5644: lui         $a0, 0x8005
    ctx->r4 = S32(0X8005 << 16);
L_803F5648:
    // 0x803F5648: sb          $t6, 0x4($s0)
    MEM_B(0X4, ctx->r16) = ctx->r14;
    // 0x803F564C: lb          $v0, 0x3A($a3)
    ctx->r2 = MEM_B(ctx->r7, 0X3A);
    // 0x803F5650: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x803F5654: beq         $v0, $zero, L_803F566C
    if (ctx->r2 == 0) {
        // 0x803F5658: lui         $a1, 0x8012
        ctx->r5 = S32(0X8012 << 16);
            goto L_803F566C;
    }
    // 0x803F5658: lui         $a1, 0x8012
    ctx->r5 = S32(0X8012 << 16);
    // 0x803F565C: beq         $v0, $v1, L_803F56AC
    if (ctx->r2 == ctx->r3) {
        // 0x803F5660: addiu       $t1, $zero, 0x414
        ctx->r9 = ADD32(0, 0X414);
            goto L_803F56AC;
    }
    // 0x803F5660: addiu       $t1, $zero, 0x414
    ctx->r9 = ADD32(0, 0X414);
    // 0x803F5664: b           L_803F5728
    // 0x803F5668: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_803F5728;
    // 0x803F5668: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_803F566C:
    // 0x803F566C: lbu         $a1, -0x326C($a1)
    ctx->r5 = MEM_BU(ctx->r5, -0X326C);
    // 0x803F5670: jal         0x8004BDA0
    // 0x803F5674: sw          $a3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r7;
    func_8004BDA0(rdram, ctx);
        goto after_0;
    // 0x803F5674: sw          $a3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r7;
    after_0:
    // 0x803F5678: lw          $a3, 0x24($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X24);
    // 0x803F567C: lui         $t9, 0x8040
    ctx->r25 = S32(0X8040 << 16);
    // 0x803F5680: lb          $t7, 0x3D($a3)
    ctx->r15 = MEM_B(ctx->r7, 0X3D);
    // 0x803F5684: addiu       $t9, $t9, -0x4F40
    ctx->r25 = ADD32(ctx->r25, -0X4F40);
    // 0x803F5688: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x803F568C: addu        $v0, $t8, $t9
    ctx->r2 = ADD32(ctx->r24, ctx->r25);
    // 0x803F5690: lh          $a1, 0x0($v0)
    ctx->r5 = MEM_H(ctx->r2, 0X0);
    // 0x803F5694: lh          $a2, 0x2($v0)
    ctx->r6 = MEM_H(ctx->r2, 0X2);
    // 0x803F5698: jal         0x8004CD44
    // 0x803F569C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8004CD44(rdram, ctx);
        goto after_1;
    // 0x803F569C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
    // 0x803F56A0: lw          $t0, 0x0($s0)
    ctx->r8 = MEM_W(ctx->r16, 0X0);
    // 0x803F56A4: b           L_803F5724
    // 0x803F56A8: sb          $zero, 0x4($t0)
    MEM_B(0X4, ctx->r8) = 0;
        goto L_803F5724;
    // 0x803F56A8: sb          $zero, 0x4($t0)
    MEM_B(0X4, ctx->r8) = 0;
L_803F56AC:
    // 0x803F56AC: sh          $t1, 0x12($s0)
    MEM_H(0X12, ctx->r16) = ctx->r9;
    // 0x803F56B0: lb          $a2, 0x3D($a3)
    ctx->r6 = MEM_B(ctx->r7, 0X3D);
    // 0x803F56B4: sw          $a3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r7;
    // 0x803F56B8: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
    // 0x803F56BC: jal         0x803F5B9C
    // 0x803F56C0: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    func_803F5B9C(rdram, ctx);
        goto after_2;
    // 0x803F56C0: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_2:
    // 0x803F56C4: lui         $a1, 0x8012
    ctx->r5 = S32(0X8012 << 16);
    // 0x803F56C8: lbu         $a1, -0x326C($a1)
    ctx->r5 = MEM_BU(ctx->r5, -0X326C);
    // 0x803F56CC: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    // 0x803F56D0: jal         0x8004BDA0
    // 0x803F56D4: nop

    func_8004BDA0(rdram, ctx);
        goto after_3;
    // 0x803F56D4: nop

    after_3:
    // 0x803F56D8: lw          $a3, 0x24($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X24);
    // 0x803F56DC: lui         $t4, 0x8040
    ctx->r12 = S32(0X8040 << 16);
    // 0x803F56E0: lb          $t2, 0x3E($a3)
    ctx->r10 = MEM_B(ctx->r7, 0X3E);
    // 0x803F56E4: addiu       $t4, $t4, -0x4F40
    ctx->r12 = ADD32(ctx->r12, -0X4F40);
    // 0x803F56E8: sll         $t3, $t2, 2
    ctx->r11 = S32(ctx->r10 << 2);
    // 0x803F56EC: addu        $v0, $t3, $t4
    ctx->r2 = ADD32(ctx->r11, ctx->r12);
    // 0x803F56F0: lh          $a1, 0x0($v0)
    ctx->r5 = MEM_H(ctx->r2, 0X0);
    // 0x803F56F4: lh          $a2, 0x2($v0)
    ctx->r6 = MEM_H(ctx->r2, 0X2);
    // 0x803F56F8: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    // 0x803F56FC: jal         0x8004CD44
    // 0x803F5700: nop

    func_8004CD44(rdram, ctx);
        goto after_4;
    // 0x803F5700: nop

    after_4:
    // 0x803F5704: b           L_803F5728
    // 0x803F5708: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_803F5728;
    // 0x803F5708: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_803F570C:
    // 0x803F570C: jal         0x8002A468
    // 0x803F5710: addiu       $a0, $a0, -0x3230
    ctx->r4 = ADD32(ctx->r4, -0X3230);
    func_8002A468(rdram, ctx);
        goto after_5;
    // 0x803F5710: addiu       $a0, $a0, -0x3230
    ctx->r4 = ADD32(ctx->r4, -0X3230);
    after_5:
    // 0x803F5714: b           L_803F5728
    // 0x803F5718: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_803F5728;
    // 0x803F5718: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_803F571C:
    // 0x803F571C: jal         0x8002A468
    // 0x803F5720: addiu       $a0, $a0, -0x3230
    ctx->r4 = ADD32(ctx->r4, -0X3230);
    func_8002A468(rdram, ctx);
        goto after_6;
    // 0x803F5720: addiu       $a0, $a0, -0x3230
    ctx->r4 = ADD32(ctx->r4, -0X3230);
    after_6:
L_803F5724:
    // 0x803F5724: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_803F5728:
    // 0x803F5728: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x803F572C: jr          $ra
    // 0x803F5730: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x803F5730: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_803F5734(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803F5734: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x803F5738: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x803F573C: lui         $a0, 0x803F
    ctx->r4 = S32(0X803F << 16);
    // 0x803F5740: addiu       $a0, $a0, 0x57D4
    ctx->r4 = ADD32(ctx->r4, 0X57D4);
    // 0x803F5744: jal         0x800293DC
    // 0x803F5748: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_800293DC(rdram, ctx);
        goto after_0;
    // 0x803F5748: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_0:
    // 0x803F574C: lui         $a1, 0x8012
    ctx->r5 = S32(0X8012 << 16);
    // 0x803F5750: lbu         $a1, -0x326C($a1)
    ctx->r5 = MEM_BU(ctx->r5, -0X326C);
    // 0x803F5754: lw          $a0, 0x14($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X14);
    // 0x803F5758: jal         0x8004BDA0
    // 0x803F575C: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    func_8004BDA0(rdram, ctx);
        goto after_1;
    // 0x803F575C: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    after_1:
    // 0x803F5760: lw          $v1, 0x1C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X1C);
    // 0x803F5764: lui         $a1, 0x8012
    ctx->r5 = S32(0X8012 << 16);
    // 0x803F5768: lw          $t6, 0x14($v1)
    ctx->r14 = MEM_W(ctx->r3, 0X14);
    // 0x803F576C: lbu         $a1, -0x326C($a1)
    ctx->r5 = MEM_BU(ctx->r5, -0X326C);
    // 0x803F5770: lw          $a0, 0x0($t6)
    ctx->r4 = MEM_W(ctx->r14, 0X0);
    // 0x803F5774: jal         0x8004BDA0
    // 0x803F5778: nop

    func_8004BDA0(rdram, ctx);
        goto after_2;
    // 0x803F5778: nop

    after_2:
    // 0x803F577C: lw          $v1, 0x1C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X1C);
    // 0x803F5780: addiu       $t7, $zero, 0x9
    ctx->r15 = ADD32(0, 0X9);
    // 0x803F5784: lw          $t8, 0x14($v1)
    ctx->r24 = MEM_W(ctx->r3, 0X14);
    // 0x803F5788: addiu       $t9, $zero, 0xA
    ctx->r25 = ADD32(0, 0XA);
    // 0x803F578C: sb          $t7, 0x5($t8)
    MEM_B(0X5, ctx->r24) = ctx->r15;
    // 0x803F5790: lw          $t0, 0x14($v1)
    ctx->r8 = MEM_W(ctx->r3, 0X14);
    // 0x803F5794: lui         $v0, 0x803D
    ctx->r2 = S32(0X803D << 16);
    // 0x803F5798: lw          $t1, 0x0($t0)
    ctx->r9 = MEM_W(ctx->r8, 0X0);
    // 0x803F579C: addiu       $v0, $v0, -0x7280
    ctx->r2 = ADD32(ctx->r2, -0X7280);
    // 0x803F57A0: sb          $t9, 0x5($t1)
    MEM_B(0X5, ctx->r9) = ctx->r25;
    // 0x803F57A4: lw          $t2, 0x14($v1)
    ctx->r10 = MEM_W(ctx->r3, 0X14);
    // 0x803F57A8: nop

    // 0x803F57AC: sw          $v0, 0x30($t2)
    MEM_W(0X30, ctx->r10) = ctx->r2;
    // 0x803F57B0: lw          $t3, 0x14($v1)
    ctx->r11 = MEM_W(ctx->r3, 0X14);
    // 0x803F57B4: nop

    // 0x803F57B8: lw          $t4, 0x0($t3)
    ctx->r12 = MEM_W(ctx->r11, 0X0);
    // 0x803F57BC: nop

    // 0x803F57C0: sw          $v0, 0x30($t4)
    MEM_W(0X30, ctx->r12) = ctx->r2;
    // 0x803F57C4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x803F57C8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x803F57CC: jr          $ra
    // 0x803F57D0: nop

    return;
    // 0x803F57D0: nop

;}
RECOMP_FUNC void func_803F57D4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803F57D4: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x803F57D8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x803F57DC: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x803F57E0: lw          $v0, 0x8($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X8);
    // 0x803F57E4: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x803F57E8: lb          $v1, 0x38($v0)
    ctx->r3 = MEM_B(ctx->r2, 0X38);
    // 0x803F57EC: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x803F57F0: beq         $v1, $a2, L_803F5808
    if (ctx->r3 == ctx->r6) {
        // 0x803F57F4: lui         $a0, 0x8005
        ctx->r4 = S32(0X8005 << 16);
            goto L_803F5808;
    }
    // 0x803F57F4: lui         $a0, 0x8005
    ctx->r4 = S32(0X8005 << 16);
    // 0x803F57F8: beq         $v1, $at, L_803F5924
    if (ctx->r3 == ctx->r1) {
        // 0x803F57FC: addiu       $a0, $a0, -0x3230
        ctx->r4 = ADD32(ctx->r4, -0X3230);
            goto L_803F5924;
    }
    // 0x803F57FC: addiu       $a0, $a0, -0x3230
    ctx->r4 = ADD32(ctx->r4, -0X3230);
    // 0x803F5800: b           L_803F59C0
    // 0x803F5804: lui         $a0, 0x8005
    ctx->r4 = S32(0X8005 << 16);
        goto L_803F59C0;
    // 0x803F5804: lui         $a0, 0x8005
    ctx->r4 = S32(0X8005 << 16);
L_803F5808:
    // 0x803F5808: lb          $v1, 0x3A($v0)
    ctx->r3 = MEM_B(ctx->r2, 0X3A);
    // 0x803F580C: lui         $a0, 0x8005
    ctx->r4 = S32(0X8005 << 16);
    // 0x803F5810: beq         $v1, $zero, L_803F5828
    if (ctx->r3 == 0) {
        // 0x803F5814: addiu       $a0, $a0, -0x3230
        ctx->r4 = ADD32(ctx->r4, -0X3230);
            goto L_803F5828;
    }
    // 0x803F5814: addiu       $a0, $a0, -0x3230
    ctx->r4 = ADD32(ctx->r4, -0X3230);
    // 0x803F5818: beq         $v1, $a2, L_803F587C
    if (ctx->r3 == ctx->r6) {
        // 0x803F581C: lui         $a0, 0x8005
        ctx->r4 = S32(0X8005 << 16);
            goto L_803F587C;
    }
    // 0x803F581C: lui         $a0, 0x8005
    ctx->r4 = S32(0X8005 << 16);
    // 0x803F5820: b           L_803F59CC
    // 0x803F5824: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_803F59CC;
    // 0x803F5824: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_803F5828:
    // 0x803F5828: jal         0x8002A468
    // 0x803F582C: sw          $v0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r2;
    func_8002A468(rdram, ctx);
        goto after_0;
    // 0x803F582C: sw          $v0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r2;
    after_0:
    // 0x803F5830: lw          $v0, 0x20($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X20);
    // 0x803F5834: lw          $t8, 0x2C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X2C);
    // 0x803F5838: lb          $t6, 0x3D($v0)
    ctx->r14 = MEM_B(ctx->r2, 0X3D);
    // 0x803F583C: nop

    // 0x803F5840: slti        $at, $t6, 0xB
    ctx->r1 = SIGNED(ctx->r14) < 0XB ? 1 : 0;
    // 0x803F5844: beq         $at, $zero, L_803F59C8
    if (ctx->r1 == 0) {
        // 0x803F5848: addiu       $t7, $zero, 0x139
        ctx->r15 = ADD32(0, 0X139);
            goto L_803F59C8;
    }
    // 0x803F5848: addiu       $t7, $zero, 0x139
    ctx->r15 = ADD32(0, 0X139);
    // 0x803F584C: sh          $t7, 0x12($t8)
    MEM_H(0X12, ctx->r24) = ctx->r15;
    // 0x803F5850: lbu         $a2, 0x3D($v0)
    ctx->r6 = MEM_BU(ctx->r2, 0X3D);
    // 0x803F5854: lbu         $a1, 0x2E($v0)
    ctx->r5 = MEM_BU(ctx->r2, 0X2E);
    // 0x803F5858: jal         0x803F7ABC
    // 0x803F585C: addiu       $a0, $sp, 0x24
    ctx->r4 = ADD32(ctx->r29, 0X24);
    func_803F7ABC(rdram, ctx);
        goto after_1;
    // 0x803F585C: addiu       $a0, $sp, 0x24
    ctx->r4 = ADD32(ctx->r29, 0X24);
    after_1:
    // 0x803F5860: lw          $a0, 0x2C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X2C);
    // 0x803F5864: lh          $a1, 0x24($sp)
    ctx->r5 = MEM_H(ctx->r29, 0X24);
    // 0x803F5868: lh          $a2, 0x26($sp)
    ctx->r6 = MEM_H(ctx->r29, 0X26);
    // 0x803F586C: jal         0x8004CD44
    // 0x803F5870: nop

    func_8004CD44(rdram, ctx);
        goto after_2;
    // 0x803F5870: nop

    after_2:
    // 0x803F5874: b           L_803F59CC
    // 0x803F5878: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_803F59CC;
    // 0x803F5878: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_803F587C:
    // 0x803F587C: addiu       $a0, $a0, -0x3230
    ctx->r4 = ADD32(ctx->r4, -0X3230);
    // 0x803F5880: jal         0x8002A468
    // 0x803F5884: sw          $v0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r2;
    func_8002A468(rdram, ctx);
        goto after_3;
    // 0x803F5884: sw          $v0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r2;
    after_3:
    // 0x803F5888: lw          $v0, 0x20($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X20);
    // 0x803F588C: lw          $t1, 0x2C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X2C);
    // 0x803F5890: lb          $t9, 0x3D($v0)
    ctx->r25 = MEM_B(ctx->r2, 0X3D);
    // 0x803F5894: addiu       $t0, $zero, 0x146
    ctx->r8 = ADD32(0, 0X146);
    // 0x803F5898: slti        $at, $t9, 0xB
    ctx->r1 = SIGNED(ctx->r25) < 0XB ? 1 : 0;
    // 0x803F589C: beq         $at, $zero, L_803F58D4
    if (ctx->r1 == 0) {
        // 0x803F58A0: addiu       $a0, $sp, 0x24
        ctx->r4 = ADD32(ctx->r29, 0X24);
            goto L_803F58D4;
    }
    // 0x803F58A0: addiu       $a0, $sp, 0x24
    ctx->r4 = ADD32(ctx->r29, 0X24);
    // 0x803F58A4: sh          $t0, 0x12($t1)
    MEM_H(0X12, ctx->r9) = ctx->r8;
    // 0x803F58A8: lbu         $a2, 0x3D($v0)
    ctx->r6 = MEM_BU(ctx->r2, 0X3D);
    // 0x803F58AC: lbu         $a1, 0x2E($v0)
    ctx->r5 = MEM_BU(ctx->r2, 0X2E);
    // 0x803F58B0: jal         0x803F7ABC
    // 0x803F58B4: sw          $v0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r2;
    func_803F7ABC(rdram, ctx);
        goto after_4;
    // 0x803F58B4: sw          $v0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r2;
    after_4:
    // 0x803F58B8: lw          $a0, 0x2C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X2C);
    // 0x803F58BC: lh          $a1, 0x24($sp)
    ctx->r5 = MEM_H(ctx->r29, 0X24);
    // 0x803F58C0: lh          $a2, 0x26($sp)
    ctx->r6 = MEM_H(ctx->r29, 0X26);
    // 0x803F58C4: jal         0x8004CD44
    // 0x803F58C8: nop

    func_8004CD44(rdram, ctx);
        goto after_5;
    // 0x803F58C8: nop

    after_5:
    // 0x803F58CC: lw          $v0, 0x20($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X20);
    // 0x803F58D0: nop

L_803F58D4:
    // 0x803F58D4: lb          $t2, 0x3E($v0)
    ctx->r10 = MEM_B(ctx->r2, 0X3E);
    // 0x803F58D8: lw          $t4, 0x2C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X2C);
    // 0x803F58DC: slti        $at, $t2, 0xB
    ctx->r1 = SIGNED(ctx->r10) < 0XB ? 1 : 0;
    // 0x803F58E0: beq         $at, $zero, L_803F59CC
    if (ctx->r1 == 0) {
        // 0x803F58E4: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_803F59CC;
    }
    // 0x803F58E4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x803F58E8: lw          $t5, 0x0($t4)
    ctx->r13 = MEM_W(ctx->r12, 0X0);
    // 0x803F58EC: addiu       $t3, $zero, 0x139
    ctx->r11 = ADD32(0, 0X139);
    // 0x803F58F0: sh          $t3, 0x12($t5)
    MEM_H(0X12, ctx->r13) = ctx->r11;
    // 0x803F58F4: lbu         $a2, 0x3E($v0)
    ctx->r6 = MEM_BU(ctx->r2, 0X3E);
    // 0x803F58F8: lbu         $a1, 0x2E($v0)
    ctx->r5 = MEM_BU(ctx->r2, 0X2E);
    // 0x803F58FC: jal         0x803F7ABC
    // 0x803F5900: addiu       $a0, $sp, 0x24
    ctx->r4 = ADD32(ctx->r29, 0X24);
    func_803F7ABC(rdram, ctx);
        goto after_6;
    // 0x803F5900: addiu       $a0, $sp, 0x24
    ctx->r4 = ADD32(ctx->r29, 0X24);
    after_6:
    // 0x803F5904: lw          $t6, 0x2C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X2C);
    // 0x803F5908: lh          $a1, 0x24($sp)
    ctx->r5 = MEM_H(ctx->r29, 0X24);
    // 0x803F590C: lh          $a2, 0x26($sp)
    ctx->r6 = MEM_H(ctx->r29, 0X26);
    // 0x803F5910: lw          $a0, 0x0($t6)
    ctx->r4 = MEM_W(ctx->r14, 0X0);
    // 0x803F5914: jal         0x8004CD44
    // 0x803F5918: nop

    func_8004CD44(rdram, ctx);
        goto after_7;
    // 0x803F5918: nop

    after_7:
    // 0x803F591C: b           L_803F59CC
    // 0x803F5920: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_803F59CC;
    // 0x803F5920: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_803F5924:
    // 0x803F5924: jal         0x8002A468
    // 0x803F5928: sw          $v0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r2;
    func_8002A468(rdram, ctx);
        goto after_8;
    // 0x803F5928: sw          $v0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r2;
    after_8:
    // 0x803F592C: lw          $v0, 0x20($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X20);
    // 0x803F5930: nop

    // 0x803F5934: lbu         $t7, 0x3C($v0)
    ctx->r15 = MEM_BU(ctx->r2, 0X3C);
    // 0x803F5938: nop

    // 0x803F593C: sltiu       $at, $t7, 0x5
    ctx->r1 = ctx->r15 < 0X5 ? 1 : 0;
    // 0x803F5940: beq         $at, $zero, L_803F59C8
    if (ctx->r1 == 0) {
        // 0x803F5944: sll         $t7, $t7, 2
        ctx->r15 = S32(ctx->r15 << 2);
            goto L_803F59C8;
    }
    // 0x803F5944: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x803F5948: lui         $at, 0x8040
    ctx->r1 = S32(0X8040 << 16);
    // 0x803F594C: addu        $at, $at, $t7
    gpr jr_addend_803F5958 = ctx->r15;
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x803F5950: lw          $t7, -0x472C($at)
    ctx->r15 = ADD32(ctx->r1, -0X472C);
    // 0x803F5954: nop

    // 0x803F5958: jr          $t7
    // 0x803F595C: nop

    switch (jr_addend_803F5958 >> 2) {
        case 0: goto L_803F59C8; break;
        case 1: goto L_803F59C8; break;
        case 2: goto L_803F5960; break;
        case 3: goto L_803F5980; break;
        case 4: goto L_803F59A0; break;
        default: switch_error(__func__, 0x803F5958, 0x803FB8D4);
    }
    // 0x803F595C: nop

L_803F5960:
    // 0x803F5960: lw          $a0, 0x2C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X2C);
    // 0x803F5964: lb          $a1, 0x2E($v0)
    ctx->r5 = MEM_B(ctx->r2, 0X2E);
    // 0x803F5968: lb          $a2, 0x3F($v0)
    ctx->r6 = MEM_B(ctx->r2, 0X3F);
    // 0x803F596C: lb          $a3, 0x4A($v0)
    ctx->r7 = MEM_B(ctx->r2, 0X4A);
    // 0x803F5970: jal         0x803F5B08
    // 0x803F5974: nop

    func_803F5B08(rdram, ctx);
        goto after_9;
    // 0x803F5974: nop

    after_9:
    // 0x803F5978: b           L_803F59CC
    // 0x803F597C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_803F59CC;
    // 0x803F597C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_803F5980:
    // 0x803F5980: lw          $a0, 0x2C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X2C);
    // 0x803F5984: lb          $a1, 0x2E($v0)
    ctx->r5 = MEM_B(ctx->r2, 0X2E);
    // 0x803F5988: lb          $a2, 0x40($v0)
    ctx->r6 = MEM_B(ctx->r2, 0X40);
    // 0x803F598C: lb          $a3, 0x4B($v0)
    ctx->r7 = MEM_B(ctx->r2, 0X4B);
    // 0x803F5990: jal         0x803F5B08
    // 0x803F5994: nop

    func_803F5B08(rdram, ctx);
        goto after_10;
    // 0x803F5994: nop

    after_10:
    // 0x803F5998: b           L_803F59CC
    // 0x803F599C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_803F59CC;
    // 0x803F599C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_803F59A0:
    // 0x803F59A0: lw          $a0, 0x2C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X2C);
    // 0x803F59A4: lb          $a1, 0x2E($v0)
    ctx->r5 = MEM_B(ctx->r2, 0X2E);
    // 0x803F59A8: lb          $a2, 0x41($v0)
    ctx->r6 = MEM_B(ctx->r2, 0X41);
    // 0x803F59AC: lb          $a3, 0x4C($v0)
    ctx->r7 = MEM_B(ctx->r2, 0X4C);
    // 0x803F59B0: jal         0x803F5B08
    // 0x803F59B4: nop

    func_803F5B08(rdram, ctx);
        goto after_11;
    // 0x803F59B4: nop

    after_11:
    // 0x803F59B8: b           L_803F59CC
    // 0x803F59BC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_803F59CC;
    // 0x803F59BC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_803F59C0:
    // 0x803F59C0: jal         0x8002A468
    // 0x803F59C4: addiu       $a0, $a0, -0x3230
    ctx->r4 = ADD32(ctx->r4, -0X3230);
    func_8002A468(rdram, ctx);
        goto after_12;
    // 0x803F59C4: addiu       $a0, $a0, -0x3230
    ctx->r4 = ADD32(ctx->r4, -0X3230);
    after_12:
L_803F59C8:
    // 0x803F59C8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_803F59CC:
    // 0x803F59CC: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x803F59D0: jr          $ra
    // 0x803F59D4: nop

    return;
    // 0x803F59D4: nop

;}
RECOMP_FUNC void func_803F5814(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803F5814: addiu       $a0, $a0, -0x3230
    ctx->r4 = ADD32(ctx->r4, -0X3230);
    // 0x803F5818: beq         $v1, $a2, L_803F587C
    if (ctx->r3 == ctx->r6) {
        // 0x803F581C: lui         $a0, 0x8005
        ctx->r4 = S32(0X8005 << 16);
            goto L_803F587C;
    }
    // 0x803F581C: lui         $a0, 0x8005
    ctx->r4 = S32(0X8005 << 16);
    // 0x803F5820: b           L_803F59CC
    // 0x803F5824: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_803F59CC;
    // 0x803F5824: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x803F5828: jal         0x8002A468
    // 0x803F582C: sw          $v0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r2;
    func_8002A468(rdram, ctx);
        goto after_0;
    // 0x803F582C: sw          $v0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r2;
    after_0:
    // 0x803F5830: lw          $v0, 0x20($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X20);
    // 0x803F5834: lw          $t8, 0x2C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X2C);
    // 0x803F5838: lb          $t6, 0x3D($v0)
    ctx->r14 = MEM_B(ctx->r2, 0X3D);
    // 0x803F583C: nop

    // 0x803F5840: slti        $at, $t6, 0xB
    ctx->r1 = SIGNED(ctx->r14) < 0XB ? 1 : 0;
    // 0x803F5844: beq         $at, $zero, L_803F59C8
    if (ctx->r1 == 0) {
        // 0x803F5848: addiu       $t7, $zero, 0x139
        ctx->r15 = ADD32(0, 0X139);
            goto L_803F59C8;
    }
    // 0x803F5848: addiu       $t7, $zero, 0x139
    ctx->r15 = ADD32(0, 0X139);
    // 0x803F584C: sh          $t7, 0x12($t8)
    MEM_H(0X12, ctx->r24) = ctx->r15;
    // 0x803F5850: lbu         $a2, 0x3D($v0)
    ctx->r6 = MEM_BU(ctx->r2, 0X3D);
    // 0x803F5854: lbu         $a1, 0x2E($v0)
    ctx->r5 = MEM_BU(ctx->r2, 0X2E);
    // 0x803F5858: jal         0x803F7ABC
    // 0x803F585C: addiu       $a0, $sp, 0x24
    ctx->r4 = ADD32(ctx->r29, 0X24);
    func_803F7ABC(rdram, ctx);
        goto after_1;
    // 0x803F585C: addiu       $a0, $sp, 0x24
    ctx->r4 = ADD32(ctx->r29, 0X24);
    after_1:
    // 0x803F5860: lw          $a0, 0x2C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X2C);
    // 0x803F5864: lh          $a1, 0x24($sp)
    ctx->r5 = MEM_H(ctx->r29, 0X24);
    // 0x803F5868: lh          $a2, 0x26($sp)
    ctx->r6 = MEM_H(ctx->r29, 0X26);
    // 0x803F586C: jal         0x8004CD44
    // 0x803F5870: nop

    func_8004CD44(rdram, ctx);
        goto after_2;
    // 0x803F5870: nop

    after_2:
    // 0x803F5874: b           L_803F59CC
    // 0x803F5878: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_803F59CC;
    // 0x803F5878: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_803F587C:
    // 0x803F587C: addiu       $a0, $a0, -0x3230
    ctx->r4 = ADD32(ctx->r4, -0X3230);
    // 0x803F5880: jal         0x8002A468
    // 0x803F5884: sw          $v0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r2;
    func_8002A468(rdram, ctx);
        goto after_3;
    // 0x803F5884: sw          $v0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r2;
    after_3:
    // 0x803F5888: lw          $v0, 0x20($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X20);
    // 0x803F588C: lw          $t1, 0x2C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X2C);
    // 0x803F5890: lb          $t9, 0x3D($v0)
    ctx->r25 = MEM_B(ctx->r2, 0X3D);
    // 0x803F5894: addiu       $t0, $zero, 0x146
    ctx->r8 = ADD32(0, 0X146);
    // 0x803F5898: slti        $at, $t9, 0xB
    ctx->r1 = SIGNED(ctx->r25) < 0XB ? 1 : 0;
    // 0x803F589C: beq         $at, $zero, L_803F58D4
    if (ctx->r1 == 0) {
        // 0x803F58A0: addiu       $a0, $sp, 0x24
        ctx->r4 = ADD32(ctx->r29, 0X24);
            goto L_803F58D4;
    }
    // 0x803F58A0: addiu       $a0, $sp, 0x24
    ctx->r4 = ADD32(ctx->r29, 0X24);
    // 0x803F58A4: sh          $t0, 0x12($t1)
    MEM_H(0X12, ctx->r9) = ctx->r8;
    // 0x803F58A8: lbu         $a2, 0x3D($v0)
    ctx->r6 = MEM_BU(ctx->r2, 0X3D);
    // 0x803F58AC: lbu         $a1, 0x2E($v0)
    ctx->r5 = MEM_BU(ctx->r2, 0X2E);
    // 0x803F58B0: jal         0x803F7ABC
    // 0x803F58B4: sw          $v0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r2;
    func_803F7ABC(rdram, ctx);
        goto after_4;
    // 0x803F58B4: sw          $v0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r2;
    after_4:
    // 0x803F58B8: lw          $a0, 0x2C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X2C);
    // 0x803F58BC: lh          $a1, 0x24($sp)
    ctx->r5 = MEM_H(ctx->r29, 0X24);
    // 0x803F58C0: lh          $a2, 0x26($sp)
    ctx->r6 = MEM_H(ctx->r29, 0X26);
    // 0x803F58C4: jal         0x8004CD44
    // 0x803F58C8: nop

    func_8004CD44(rdram, ctx);
        goto after_5;
    // 0x803F58C8: nop

    after_5:
    // 0x803F58CC: lw          $v0, 0x20($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X20);
    // 0x803F58D0: nop

L_803F58D4:
    // 0x803F58D4: lb          $t2, 0x3E($v0)
    ctx->r10 = MEM_B(ctx->r2, 0X3E);
    // 0x803F58D8: lw          $t4, 0x2C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X2C);
    // 0x803F58DC: slti        $at, $t2, 0xB
    ctx->r1 = SIGNED(ctx->r10) < 0XB ? 1 : 0;
    // 0x803F58E0: beq         $at, $zero, L_803F59CC
    if (ctx->r1 == 0) {
        // 0x803F58E4: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_803F59CC;
    }
    // 0x803F58E4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x803F58E8: lw          $t5, 0x0($t4)
    ctx->r13 = MEM_W(ctx->r12, 0X0);
    // 0x803F58EC: addiu       $t3, $zero, 0x139
    ctx->r11 = ADD32(0, 0X139);
    // 0x803F58F0: sh          $t3, 0x12($t5)
    MEM_H(0X12, ctx->r13) = ctx->r11;
    // 0x803F58F4: lbu         $a2, 0x3E($v0)
    ctx->r6 = MEM_BU(ctx->r2, 0X3E);
    // 0x803F58F8: lbu         $a1, 0x2E($v0)
    ctx->r5 = MEM_BU(ctx->r2, 0X2E);
    // 0x803F58FC: jal         0x803F7ABC
    // 0x803F5900: addiu       $a0, $sp, 0x24
    ctx->r4 = ADD32(ctx->r29, 0X24);
    func_803F7ABC(rdram, ctx);
        goto after_6;
    // 0x803F5900: addiu       $a0, $sp, 0x24
    ctx->r4 = ADD32(ctx->r29, 0X24);
    after_6:
    // 0x803F5904: lw          $t6, 0x2C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X2C);
    // 0x803F5908: lh          $a1, 0x24($sp)
    ctx->r5 = MEM_H(ctx->r29, 0X24);
    // 0x803F590C: lh          $a2, 0x26($sp)
    ctx->r6 = MEM_H(ctx->r29, 0X26);
    // 0x803F5910: lw          $a0, 0x0($t6)
    ctx->r4 = MEM_W(ctx->r14, 0X0);
    // 0x803F5914: jal         0x8004CD44
    // 0x803F5918: nop

    func_8004CD44(rdram, ctx);
        goto after_7;
    // 0x803F5918: nop

    after_7:
    // 0x803F591C: b           L_803F59CC
    // 0x803F5920: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_803F59CC;
    // 0x803F5920: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x803F5924: jal         0x8002A468
    // 0x803F5928: sw          $v0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r2;
    func_8002A468(rdram, ctx);
        goto after_8;
    // 0x803F5928: sw          $v0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r2;
    after_8:
    // 0x803F592C: lw          $v0, 0x20($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X20);
    // 0x803F5930: nop

    // 0x803F5934: lbu         $t7, 0x3C($v0)
    ctx->r15 = MEM_BU(ctx->r2, 0X3C);
    // 0x803F5938: nop

    // 0x803F593C: sltiu       $at, $t7, 0x5
    ctx->r1 = ctx->r15 < 0X5 ? 1 : 0;
    // 0x803F5940: beq         $at, $zero, L_803F59C8
    if (ctx->r1 == 0) {
        // 0x803F5944: sll         $t7, $t7, 2
        ctx->r15 = S32(ctx->r15 << 2);
            goto L_803F59C8;
    }
    // 0x803F5944: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x803F5948: lui         $at, 0x8040
    ctx->r1 = S32(0X8040 << 16);
    // 0x803F594C: addu        $at, $at, $t7
    gpr jr_addend_803F5958 = ctx->r15;
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x803F5950: lw          $t7, -0x472C($at)
    ctx->r15 = ADD32(ctx->r1, -0X472C);
    // 0x803F5954: nop

    // 0x803F5958: jr          $t7
    // 0x803F595C: nop

    switch (jr_addend_803F5958 >> 2) {
        case 0: goto L_803F59C8; break;
        case 1: goto L_803F59C8; break;
        case 2: goto L_803F5960; break;
        case 3: goto L_803F5980; break;
        case 4: goto L_803F59A0; break;
        default: switch_error(__func__, 0x803F5958, 0x803FB8D4);
    }
    // 0x803F595C: nop

L_803F5960:
    // 0x803F5960: lw          $a0, 0x2C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X2C);
    // 0x803F5964: lb          $a1, 0x2E($v0)
    ctx->r5 = MEM_B(ctx->r2, 0X2E);
    // 0x803F5968: lb          $a2, 0x3F($v0)
    ctx->r6 = MEM_B(ctx->r2, 0X3F);
    // 0x803F596C: lb          $a3, 0x4A($v0)
    ctx->r7 = MEM_B(ctx->r2, 0X4A);
    // 0x803F5970: jal         0x803F5B08
    // 0x803F5974: nop

    func_803F5B08(rdram, ctx);
        goto after_9;
    // 0x803F5974: nop

    after_9:
    // 0x803F5978: b           L_803F59CC
    // 0x803F597C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_803F59CC;
    // 0x803F597C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_803F5980:
    // 0x803F5980: lw          $a0, 0x2C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X2C);
    // 0x803F5984: lb          $a1, 0x2E($v0)
    ctx->r5 = MEM_B(ctx->r2, 0X2E);
    // 0x803F5988: lb          $a2, 0x40($v0)
    ctx->r6 = MEM_B(ctx->r2, 0X40);
    // 0x803F598C: lb          $a3, 0x4B($v0)
    ctx->r7 = MEM_B(ctx->r2, 0X4B);
    // 0x803F5990: jal         0x803F5B08
    // 0x803F5994: nop

    func_803F5B08(rdram, ctx);
        goto after_10;
    // 0x803F5994: nop

    after_10:
    // 0x803F5998: b           L_803F59CC
    // 0x803F599C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_803F59CC;
    // 0x803F599C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_803F59A0:
    // 0x803F59A0: lw          $a0, 0x2C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X2C);
    // 0x803F59A4: lb          $a1, 0x2E($v0)
    ctx->r5 = MEM_B(ctx->r2, 0X2E);
    // 0x803F59A8: lb          $a2, 0x41($v0)
    ctx->r6 = MEM_B(ctx->r2, 0X41);
    // 0x803F59AC: lb          $a3, 0x4C($v0)
    ctx->r7 = MEM_B(ctx->r2, 0X4C);
    // 0x803F59B0: jal         0x803F5B08
    // 0x803F59B4: nop

    func_803F5B08(rdram, ctx);
        goto after_11;
    // 0x803F59B4: nop

    after_11:
    // 0x803F59B8: b           L_803F59CC
    // 0x803F59BC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_803F59CC;
    // 0x803F59BC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x803F59C0: jal         0x8002A468
    // 0x803F59C4: addiu       $a0, $a0, -0x3230
    ctx->r4 = ADD32(ctx->r4, -0X3230);
    func_8002A468(rdram, ctx);
        goto after_12;
    // 0x803F59C4: addiu       $a0, $a0, -0x3230
    ctx->r4 = ADD32(ctx->r4, -0X3230);
    after_12:
L_803F59C8:
    // 0x803F59C8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_803F59CC:
    // 0x803F59CC: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x803F59D0: jr          $ra
    // 0x803F59D4: nop

    return;
    // 0x803F59D4: nop

;}
RECOMP_FUNC void func_803F58E0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803F58E0: beq         $at, $zero, L_803F59CC
    if (ctx->r1 == 0) {
        // 0x803F58E4: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_803F59CC;
    }
    // 0x803F58E4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x803F58E8: lw          $t5, 0x0($t4)
    ctx->r13 = MEM_W(ctx->r12, 0X0);
    // 0x803F58EC: addiu       $t3, $zero, 0x139
    ctx->r11 = ADD32(0, 0X139);
    // 0x803F58F0: sh          $t3, 0x12($t5)
    MEM_H(0X12, ctx->r13) = ctx->r11;
    // 0x803F58F4: lbu         $a2, 0x3E($v0)
    ctx->r6 = MEM_BU(ctx->r2, 0X3E);
    // 0x803F58F8: lbu         $a1, 0x2E($v0)
    ctx->r5 = MEM_BU(ctx->r2, 0X2E);
    // 0x803F58FC: jal         0x803F7ABC
    // 0x803F5900: addiu       $a0, $sp, 0x24
    ctx->r4 = ADD32(ctx->r29, 0X24);
    func_803F7ABC(rdram, ctx);
        goto after_0;
    // 0x803F5900: addiu       $a0, $sp, 0x24
    ctx->r4 = ADD32(ctx->r29, 0X24);
    after_0:
    // 0x803F5904: lw          $t6, 0x2C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X2C);
    // 0x803F5908: lh          $a1, 0x24($sp)
    ctx->r5 = MEM_H(ctx->r29, 0X24);
    // 0x803F590C: lh          $a2, 0x26($sp)
    ctx->r6 = MEM_H(ctx->r29, 0X26);
    // 0x803F5910: lw          $a0, 0x0($t6)
    ctx->r4 = MEM_W(ctx->r14, 0X0);
    // 0x803F5914: jal         0x8004CD44
    // 0x803F5918: nop

    func_8004CD44(rdram, ctx);
        goto after_1;
    // 0x803F5918: nop

    after_1:
    // 0x803F591C: b           L_803F59CC
    // 0x803F5920: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_803F59CC;
    // 0x803F5920: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x803F5924: jal         0x8002A468
    // 0x803F5928: sw          $v0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r2;
    func_8002A468(rdram, ctx);
        goto after_2;
    // 0x803F5928: sw          $v0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r2;
    after_2:
    // 0x803F592C: lw          $v0, 0x20($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X20);
    // 0x803F5930: nop

    // 0x803F5934: lbu         $t7, 0x3C($v0)
    ctx->r15 = MEM_BU(ctx->r2, 0X3C);
    // 0x803F5938: nop

    // 0x803F593C: sltiu       $at, $t7, 0x5
    ctx->r1 = ctx->r15 < 0X5 ? 1 : 0;
    // 0x803F5940: beq         $at, $zero, L_803F59C8
    if (ctx->r1 == 0) {
        // 0x803F5944: sll         $t7, $t7, 2
        ctx->r15 = S32(ctx->r15 << 2);
            goto L_803F59C8;
    }
    // 0x803F5944: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x803F5948: lui         $at, 0x8040
    ctx->r1 = S32(0X8040 << 16);
    // 0x803F594C: addu        $at, $at, $t7
    gpr jr_addend_803F5958 = ctx->r15;
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x803F5950: lw          $t7, -0x472C($at)
    ctx->r15 = ADD32(ctx->r1, -0X472C);
    // 0x803F5954: nop

    // 0x803F5958: jr          $t7
    // 0x803F595C: nop

    switch (jr_addend_803F5958 >> 2) {
        case 0: goto L_803F59C8; break;
        case 1: goto L_803F59C8; break;
        case 2: goto L_803F5960; break;
        case 3: goto L_803F5980; break;
        case 4: goto L_803F59A0; break;
        default: switch_error(__func__, 0x803F5958, 0x803FB8D4);
    }
    // 0x803F595C: nop

L_803F5960:
    // 0x803F5960: lw          $a0, 0x2C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X2C);
    // 0x803F5964: lb          $a1, 0x2E($v0)
    ctx->r5 = MEM_B(ctx->r2, 0X2E);
    // 0x803F5968: lb          $a2, 0x3F($v0)
    ctx->r6 = MEM_B(ctx->r2, 0X3F);
    // 0x803F596C: lb          $a3, 0x4A($v0)
    ctx->r7 = MEM_B(ctx->r2, 0X4A);
    // 0x803F5970: jal         0x803F5B08
    // 0x803F5974: nop

    func_803F5B08(rdram, ctx);
        goto after_3;
    // 0x803F5974: nop

    after_3:
    // 0x803F5978: b           L_803F59CC
    // 0x803F597C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_803F59CC;
    // 0x803F597C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_803F5980:
    // 0x803F5980: lw          $a0, 0x2C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X2C);
    // 0x803F5984: lb          $a1, 0x2E($v0)
    ctx->r5 = MEM_B(ctx->r2, 0X2E);
    // 0x803F5988: lb          $a2, 0x40($v0)
    ctx->r6 = MEM_B(ctx->r2, 0X40);
    // 0x803F598C: lb          $a3, 0x4B($v0)
    ctx->r7 = MEM_B(ctx->r2, 0X4B);
    // 0x803F5990: jal         0x803F5B08
    // 0x803F5994: nop

    func_803F5B08(rdram, ctx);
        goto after_4;
    // 0x803F5994: nop

    after_4:
    // 0x803F5998: b           L_803F59CC
    // 0x803F599C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_803F59CC;
    // 0x803F599C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_803F59A0:
    // 0x803F59A0: lw          $a0, 0x2C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X2C);
    // 0x803F59A4: lb          $a1, 0x2E($v0)
    ctx->r5 = MEM_B(ctx->r2, 0X2E);
    // 0x803F59A8: lb          $a2, 0x41($v0)
    ctx->r6 = MEM_B(ctx->r2, 0X41);
    // 0x803F59AC: lb          $a3, 0x4C($v0)
    ctx->r7 = MEM_B(ctx->r2, 0X4C);
    // 0x803F59B0: jal         0x803F5B08
    // 0x803F59B4: nop

    func_803F5B08(rdram, ctx);
        goto after_5;
    // 0x803F59B4: nop

    after_5:
    // 0x803F59B8: b           L_803F59CC
    // 0x803F59BC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_803F59CC;
    // 0x803F59BC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x803F59C0: jal         0x8002A468
    // 0x803F59C4: addiu       $a0, $a0, -0x3230
    ctx->r4 = ADD32(ctx->r4, -0X3230);
    func_8002A468(rdram, ctx);
        goto after_6;
    // 0x803F59C4: addiu       $a0, $a0, -0x3230
    ctx->r4 = ADD32(ctx->r4, -0X3230);
    after_6:
L_803F59C8:
    // 0x803F59C8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_803F59CC:
    // 0x803F59CC: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x803F59D0: jr          $ra
    // 0x803F59D4: nop

    return;
    // 0x803F59D4: nop

;}
RECOMP_FUNC void func_803F59D4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803F59D4: nop

;}
RECOMP_FUNC void func_803F59D8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803F59D8: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x803F59DC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x803F59E0: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x803F59E4: lw          $v1, 0x8($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X8);
    // 0x803F59E8: addiu       $a0, $zero, 0x32
    ctx->r4 = ADD32(0, 0X32);
    // 0x803F59EC: addiu       $a1, $zero, 0x33
    ctx->r5 = ADD32(0, 0X33);
    // 0x803F59F0: jal         0x8002F224
    // 0x803F59F4: sw          $v1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r3;
    func_8002F224(rdram, ctx);
        goto after_0;
    // 0x803F59F4: sw          $v1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r3;
    after_0:
    // 0x803F59F8: lw          $v1, 0x1C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X1C);
    // 0x803F59FC: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x803F5A00: lb          $v0, 0x38($v1)
    ctx->r2 = MEM_B(ctx->r3, 0X38);
    // 0x803F5A04: nop

    // 0x803F5A08: beq         $v0, $at, L_803F5A2C
    if (ctx->r2 == ctx->r1) {
        // 0x803F5A0C: addiu       $at, $zero, 0x3
        ctx->r1 = ADD32(0, 0X3);
            goto L_803F5A2C;
    }
    // 0x803F5A0C: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x803F5A10: beq         $v0, $at, L_803F5A58
    if (ctx->r2 == ctx->r1) {
        // 0x803F5A14: lui         $t6, 0x8012
        ctx->r14 = S32(0X8012 << 16);
            goto L_803F5A58;
    }
    // 0x803F5A14: lui         $t6, 0x8012
    ctx->r14 = S32(0X8012 << 16);
    // 0x803F5A18: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x803F5A1C: beq         $v0, $at, L_803F5AE8
    if (ctx->r2 == ctx->r1) {
        // 0x803F5A20: addiu       $a0, $zero, 0x32
        ctx->r4 = ADD32(0, 0X32);
            goto L_803F5AE8;
    }
    // 0x803F5A20: addiu       $a0, $zero, 0x32
    ctx->r4 = ADD32(0, 0X32);
    // 0x803F5A24: b           L_803F5AFC
    // 0x803F5A28: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_803F5AFC;
    // 0x803F5A28: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_803F5A2C:
    // 0x803F5A2C: lb          $v0, 0x3C($v1)
    ctx->r2 = MEM_B(ctx->r3, 0X3C);
    // 0x803F5A30: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x803F5A34: beq         $v0, $zero, L_803F5A40
    if (ctx->r2 == 0) {
        // 0x803F5A38: addiu       $a0, $zero, 0x32
        ctx->r4 = ADD32(0, 0X32);
            goto L_803F5A40;
    }
    // 0x803F5A38: addiu       $a0, $zero, 0x32
    ctx->r4 = ADD32(0, 0X32);
    // 0x803F5A3C: bne         $v0, $at, L_803F5AF8
    if (ctx->r2 != ctx->r1) {
        // 0x803F5A40: lui         $a1, 0x8040
        ctx->r5 = S32(0X8040 << 16);
            goto L_803F5AF8;
    }
L_803F5A40:
    // 0x803F5A40: lui         $a1, 0x8040
    ctx->r5 = S32(0X8040 << 16);
    // 0x803F5A44: addiu       $a1, $a1, -0x4C7C
    ctx->r5 = ADD32(ctx->r5, -0X4C7C);
    // 0x803F5A48: jal         0x8002F444
    // 0x803F5A4C: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_8002F444(rdram, ctx);
        goto after_1;
    // 0x803F5A4C: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_1:
    // 0x803F5A50: b           L_803F5AFC
    // 0x803F5A54: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_803F5AFC;
    // 0x803F5A54: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_803F5A58:
    // 0x803F5A58: lbu         $t6, -0x3272($t6)
    ctx->r14 = MEM_BU(ctx->r14, -0X3272);
    // 0x803F5A5C: nop

    // 0x803F5A60: bne         $t6, $zero, L_803F5AA8
    if (ctx->r14 != 0) {
        // 0x803F5A64: nop
    
            goto L_803F5AA8;
    }
    // 0x803F5A64: nop

    // 0x803F5A68: lb          $t7, 0x3B($v1)
    ctx->r15 = MEM_B(ctx->r3, 0X3B);
    // 0x803F5A6C: addiu       $a0, $zero, 0x32
    ctx->r4 = ADD32(0, 0X32);
    // 0x803F5A70: bne         $t7, $zero, L_803F5A94
    if (ctx->r15 != 0) {
        // 0x803F5A74: lui         $a1, 0x8040
        ctx->r5 = S32(0X8040 << 16);
            goto L_803F5A94;
    }
    // 0x803F5A74: lui         $a1, 0x8040
    ctx->r5 = S32(0X8040 << 16);
    // 0x803F5A78: lui         $a1, 0x8040
    ctx->r5 = S32(0X8040 << 16);
    // 0x803F5A7C: addiu       $a1, $a1, -0x4C6C
    ctx->r5 = ADD32(ctx->r5, -0X4C6C);
    // 0x803F5A80: addiu       $a0, $zero, 0x32
    ctx->r4 = ADD32(0, 0X32);
    // 0x803F5A84: jal         0x8002F444
    // 0x803F5A88: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_8002F444(rdram, ctx);
        goto after_2;
    // 0x803F5A88: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_2:
    // 0x803F5A8C: b           L_803F5AFC
    // 0x803F5A90: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_803F5AFC;
    // 0x803F5A90: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_803F5A94:
    // 0x803F5A94: addiu       $a1, $a1, -0x4C6C
    ctx->r5 = ADD32(ctx->r5, -0X4C6C);
    // 0x803F5A98: jal         0x8002F444
    // 0x803F5A9C: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    func_8002F444(rdram, ctx);
        goto after_3;
    // 0x803F5A9C: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    after_3:
    // 0x803F5AA0: b           L_803F5AFC
    // 0x803F5AA4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_803F5AFC;
    // 0x803F5AA4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_803F5AA8:
    // 0x803F5AA8: lb          $t8, 0x3B($v1)
    ctx->r24 = MEM_B(ctx->r3, 0X3B);
    // 0x803F5AAC: addiu       $a0, $zero, 0x32
    ctx->r4 = ADD32(0, 0X32);
    // 0x803F5AB0: bne         $t8, $zero, L_803F5AD4
    if (ctx->r24 != 0) {
        // 0x803F5AB4: lui         $a1, 0x8040
        ctx->r5 = S32(0X8040 << 16);
            goto L_803F5AD4;
    }
    // 0x803F5AB4: lui         $a1, 0x8040
    ctx->r5 = S32(0X8040 << 16);
    // 0x803F5AB8: lui         $a1, 0x8040
    ctx->r5 = S32(0X8040 << 16);
    // 0x803F5ABC: addiu       $a1, $a1, -0x4C4C
    ctx->r5 = ADD32(ctx->r5, -0X4C4C);
    // 0x803F5AC0: addiu       $a0, $zero, 0x32
    ctx->r4 = ADD32(0, 0X32);
    // 0x803F5AC4: jal         0x8002F444
    // 0x803F5AC8: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_8002F444(rdram, ctx);
        goto after_4;
    // 0x803F5AC8: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_4:
    // 0x803F5ACC: b           L_803F5AFC
    // 0x803F5AD0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_803F5AFC;
    // 0x803F5AD0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_803F5AD4:
    // 0x803F5AD4: addiu       $a1, $a1, -0x4C4C
    ctx->r5 = ADD32(ctx->r5, -0X4C4C);
    // 0x803F5AD8: jal         0x8002F444
    // 0x803F5ADC: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    func_8002F444(rdram, ctx);
        goto after_5;
    // 0x803F5ADC: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    after_5:
    // 0x803F5AE0: b           L_803F5AFC
    // 0x803F5AE4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_803F5AFC;
    // 0x803F5AE4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_803F5AE8:
    // 0x803F5AE8: lui         $a1, 0x8040
    ctx->r5 = S32(0X8040 << 16);
    // 0x803F5AEC: addiu       $a1, $a1, -0x4C2C
    ctx->r5 = ADD32(ctx->r5, -0X4C2C);
    // 0x803F5AF0: jal         0x8002F444
    // 0x803F5AF4: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_8002F444(rdram, ctx);
        goto after_6;
    // 0x803F5AF4: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_6:
L_803F5AF8:
    // 0x803F5AF8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_803F5AFC:
    // 0x803F5AFC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x803F5B00: jr          $ra
    // 0x803F5B04: nop

    return;
    // 0x803F5B04: nop

;}
RECOMP_FUNC void func_803F5B08(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803F5B08: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x803F5B0C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x803F5B10: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x803F5B14: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x803F5B18: sw          $a2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r6;
    // 0x803F5B1C: sw          $a3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r7;
    // 0x803F5B20: addiu       $t8, $zero, 0x146
    ctx->r24 = ADD32(0, 0X146);
    // 0x803F5B24: sh          $t8, 0x12($a0)
    MEM_H(0X12, ctx->r4) = ctx->r24;
    // 0x803F5B28: lbu         $a1, 0x27($sp)
    ctx->r5 = MEM_BU(ctx->r29, 0X27);
    // 0x803F5B2C: addiu       $a0, $sp, 0x1C
    ctx->r4 = ADD32(ctx->r29, 0X1C);
    // 0x803F5B30: andi        $a2, $a3, 0xFF
    ctx->r6 = ctx->r7 & 0XFF;
    // 0x803F5B34: jal         0x803F7ABC
    // 0x803F5B38: sw          $a1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r5;
    func_803F7ABC(rdram, ctx);
        goto after_0;
    // 0x803F5B38: sw          $a1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r5;
    after_0:
    // 0x803F5B3C: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x803F5B40: lh          $a1, 0x1C($sp)
    ctx->r5 = MEM_H(ctx->r29, 0X1C);
    // 0x803F5B44: lh          $a2, 0x1E($sp)
    ctx->r6 = MEM_H(ctx->r29, 0X1E);
    // 0x803F5B48: jal         0x8004CD44
    // 0x803F5B4C: nop

    func_8004CD44(rdram, ctx);
        goto after_1;
    // 0x803F5B4C: nop

    after_1:
    // 0x803F5B50: lw          $t1, 0x20($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X20);
    // 0x803F5B54: addiu       $t0, $zero, 0x139
    ctx->r8 = ADD32(0, 0X139);
    // 0x803F5B58: lw          $t2, 0x0($t1)
    ctx->r10 = MEM_W(ctx->r9, 0X0);
    // 0x803F5B5C: addiu       $a0, $sp, 0x1C
    ctx->r4 = ADD32(ctx->r29, 0X1C);
    // 0x803F5B60: sh          $t0, 0x12($t2)
    MEM_H(0X12, ctx->r10) = ctx->r8;
    // 0x803F5B64: lbu         $a2, 0x2B($sp)
    ctx->r6 = MEM_BU(ctx->r29, 0X2B);
    // 0x803F5B68: lbu         $a1, 0x1B($sp)
    ctx->r5 = MEM_BU(ctx->r29, 0X1B);
    // 0x803F5B6C: jal         0x803F7ABC
    // 0x803F5B70: nop

    func_803F7ABC(rdram, ctx);
        goto after_2;
    // 0x803F5B70: nop

    after_2:
    // 0x803F5B74: lw          $t3, 0x20($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X20);
    // 0x803F5B78: lh          $a1, 0x1C($sp)
    ctx->r5 = MEM_H(ctx->r29, 0X1C);
    // 0x803F5B7C: lh          $a2, 0x1E($sp)
    ctx->r6 = MEM_H(ctx->r29, 0X1E);
    // 0x803F5B80: lw          $a0, 0x0($t3)
    ctx->r4 = MEM_W(ctx->r11, 0X0);
    // 0x803F5B84: jal         0x8004CD44
    // 0x803F5B88: nop

    func_8004CD44(rdram, ctx);
        goto after_3;
    // 0x803F5B88: nop

    after_3:
    // 0x803F5B8C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x803F5B90: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x803F5B94: jr          $ra
    // 0x803F5B98: nop

    return;
    // 0x803F5B98: nop

;}
RECOMP_FUNC void func_803F5B1C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803F5B1C: sw          $a3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r7;
    // 0x803F5B20: addiu       $t8, $zero, 0x146
    ctx->r24 = ADD32(0, 0X146);
    // 0x803F5B24: sh          $t8, 0x12($a0)
    MEM_H(0X12, ctx->r4) = ctx->r24;
    // 0x803F5B28: lbu         $a1, 0x27($sp)
    ctx->r5 = MEM_BU(ctx->r29, 0X27);
    // 0x803F5B2C: addiu       $a0, $sp, 0x1C
    ctx->r4 = ADD32(ctx->r29, 0X1C);
    // 0x803F5B30: andi        $a2, $a3, 0xFF
    ctx->r6 = ctx->r7 & 0XFF;
    // 0x803F5B34: jal         0x803F7ABC
    // 0x803F5B38: sw          $a1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r5;
    func_803F7ABC(rdram, ctx);
        goto after_0;
    // 0x803F5B38: sw          $a1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r5;
    after_0:
    // 0x803F5B3C: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x803F5B40: lh          $a1, 0x1C($sp)
    ctx->r5 = MEM_H(ctx->r29, 0X1C);
    // 0x803F5B44: lh          $a2, 0x1E($sp)
    ctx->r6 = MEM_H(ctx->r29, 0X1E);
    // 0x803F5B48: jal         0x8004CD44
    // 0x803F5B4C: nop

    func_8004CD44(rdram, ctx);
        goto after_1;
    // 0x803F5B4C: nop

    after_1:
    // 0x803F5B50: lw          $t1, 0x20($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X20);
    // 0x803F5B54: addiu       $t0, $zero, 0x139
    ctx->r8 = ADD32(0, 0X139);
    // 0x803F5B58: lw          $t2, 0x0($t1)
    ctx->r10 = MEM_W(ctx->r9, 0X0);
    // 0x803F5B5C: addiu       $a0, $sp, 0x1C
    ctx->r4 = ADD32(ctx->r29, 0X1C);
    // 0x803F5B60: sh          $t0, 0x12($t2)
    MEM_H(0X12, ctx->r10) = ctx->r8;
    // 0x803F5B64: lbu         $a2, 0x2B($sp)
    ctx->r6 = MEM_BU(ctx->r29, 0X2B);
    // 0x803F5B68: lbu         $a1, 0x1B($sp)
    ctx->r5 = MEM_BU(ctx->r29, 0X1B);
    // 0x803F5B6C: jal         0x803F7ABC
    // 0x803F5B70: nop

    func_803F7ABC(rdram, ctx);
        goto after_2;
    // 0x803F5B70: nop

    after_2:
    // 0x803F5B74: lw          $t3, 0x20($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X20);
    // 0x803F5B78: lh          $a1, 0x1C($sp)
    ctx->r5 = MEM_H(ctx->r29, 0X1C);
    // 0x803F5B7C: lh          $a2, 0x1E($sp)
    ctx->r6 = MEM_H(ctx->r29, 0X1E);
    // 0x803F5B80: lw          $a0, 0x0($t3)
    ctx->r4 = MEM_W(ctx->r11, 0X0);
    // 0x803F5B84: jal         0x8004CD44
    // 0x803F5B88: nop

    func_8004CD44(rdram, ctx);
        goto after_3;
    // 0x803F5B88: nop

    after_3:
    // 0x803F5B8C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x803F5B90: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x803F5B94: jr          $ra
    // 0x803F5B98: nop

    return;
    // 0x803F5B98: nop

;}
RECOMP_FUNC void func_803F5B9C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803F5B9C: sw          $a2, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r6;
    // 0x803F5BA0: lbu         $v0, 0x44($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X44);
    // 0x803F5BA4: sll         $t6, $a2, 24
    ctx->r14 = S32(ctx->r6 << 24);
    // 0x803F5BA8: sra         $t7, $t6, 24
    ctx->r15 = S32(SIGNED(ctx->r14) >> 24);
    // 0x803F5BAC: beq         $v0, $zero, L_803F5BD8
    if (ctx->r2 == 0) {
        // 0x803F5BB0: or          $a2, $t7, $zero
        ctx->r6 = ctx->r15 | 0;
            goto L_803F5BD8;
    }
    // 0x803F5BB0: or          $a2, $t7, $zero
    ctx->r6 = ctx->r15 | 0;
    // 0x803F5BB4: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x803F5BB8: bne         $v0, $at, L_803F5BF0
    if (ctx->r2 != ctx->r1) {
        // 0x803F5BBC: slti        $at, $t7, 0xB
        ctx->r1 = SIGNED(ctx->r15) < 0XB ? 1 : 0;
            goto L_803F5BF0;
    }
    // 0x803F5BBC: slti        $at, $t7, 0xB
    ctx->r1 = SIGNED(ctx->r15) < 0XB ? 1 : 0;
    // 0x803F5BC0: bne         $at, $zero, L_803F5BD0
    if (ctx->r1 != 0) {
        // 0x803F5BC4: addiu       $t8, $zero, 0x1
        ctx->r24 = ADD32(0, 0X1);
            goto L_803F5BD0;
    }
    // 0x803F5BC4: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x803F5BC8: jr          $ra
    // 0x803F5BCC: sb          $zero, 0x4($a1)
    MEM_B(0X4, ctx->r5) = 0;
    return;
    // 0x803F5BCC: sb          $zero, 0x4($a1)
    MEM_B(0X4, ctx->r5) = 0;
L_803F5BD0:
    // 0x803F5BD0: jr          $ra
    // 0x803F5BD4: sb          $t8, 0x4($a1)
    MEM_B(0X4, ctx->r5) = ctx->r24;
    return;
    // 0x803F5BD4: sb          $t8, 0x4($a1)
    MEM_B(0X4, ctx->r5) = ctx->r24;
L_803F5BD8:
    // 0x803F5BD8: slti        $at, $a2, 0xB
    ctx->r1 = SIGNED(ctx->r6) < 0XB ? 1 : 0;
    // 0x803F5BDC: beq         $at, $zero, L_803F5BEC
    if (ctx->r1 == 0) {
        // 0x803F5BE0: addiu       $t9, $zero, 0x1
        ctx->r25 = ADD32(0, 0X1);
            goto L_803F5BEC;
    }
    // 0x803F5BE0: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x803F5BE4: jr          $ra
    // 0x803F5BE8: sb          $zero, 0x4($a1)
    MEM_B(0X4, ctx->r5) = 0;
    return;
    // 0x803F5BE8: sb          $zero, 0x4($a1)
    MEM_B(0X4, ctx->r5) = 0;
L_803F5BEC:
    // 0x803F5BEC: sb          $t9, 0x4($a1)
    MEM_B(0X4, ctx->r5) = ctx->r25;
L_803F5BF0:
    // 0x803F5BF0: jr          $ra
    // 0x803F5BF4: nop

    return;
    // 0x803F5BF4: nop

;}
RECOMP_FUNC void func_803F5BF8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803F5BF8: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x803F5BFC: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x803F5C00: lui         $a0, 0x8005
    ctx->r4 = S32(0X8005 << 16);
    // 0x803F5C04: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x803F5C08: jal         0x80029354
    // 0x803F5C0C: addiu       $a0, $a0, -0x1E98
    ctx->r4 = ADD32(ctx->r4, -0X1E98);
    func_80029354(rdram, ctx);
        goto after_0;
    // 0x803F5C0C: addiu       $a0, $a0, -0x1E98
    ctx->r4 = ADD32(ctx->r4, -0X1E98);
    after_0:
    // 0x803F5C10: lui         $t6, 0x801B
    ctx->r14 = S32(0X801B << 16);
    // 0x803F5C14: lw          $t6, 0x1CF0($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X1CF0);
    // 0x803F5C18: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x803F5C1C: lb          $t7, 0x2E($t6)
    ctx->r15 = MEM_B(ctx->r14, 0X2E);
    // 0x803F5C20: addiu       $a1, $zero, 0xDE
    ctx->r5 = ADD32(0, 0XDE);
    // 0x803F5C24: bne         $t7, $zero, L_803F5C4C
    if (ctx->r15 != 0) {
        // 0x803F5C28: addiu       $a2, $zero, 0x6
        ctx->r6 = ADD32(0, 0X6);
            goto L_803F5C4C;
    }
    // 0x803F5C28: addiu       $a2, $zero, 0x6
    ctx->r6 = ADD32(0, 0X6);
    // 0x803F5C2C: lw          $a0, 0x14($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X14);
    // 0x803F5C30: lui         $a3, 0x803D
    ctx->r7 = S32(0X803D << 16);
    // 0x803F5C34: addiu       $a3, $a3, 0x5018
    ctx->r7 = ADD32(ctx->r7, 0X5018);
    // 0x803F5C38: addiu       $a1, $zero, 0xDE
    ctx->r5 = ADD32(0, 0XDE);
    // 0x803F5C3C: jal         0x8004CD24
    // 0x803F5C40: addiu       $a2, $zero, 0x6
    ctx->r6 = ADD32(0, 0X6);
    func_8004CD24(rdram, ctx);
        goto after_1;
    // 0x803F5C40: addiu       $a2, $zero, 0x6
    ctx->r6 = ADD32(0, 0X6);
    after_1:
    // 0x803F5C44: b           L_803F5C60
    // 0x803F5C48: lw          $a0, 0x14($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X14);
        goto L_803F5C60;
    // 0x803F5C48: lw          $a0, 0x14($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X14);
L_803F5C4C:
    // 0x803F5C4C: lw          $a0, 0x14($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X14);
    // 0x803F5C50: lui         $a3, 0x803D
    ctx->r7 = S32(0X803D << 16);
    // 0x803F5C54: jal         0x8004CD24
    // 0x803F5C58: addiu       $a3, $a3, 0x59F0
    ctx->r7 = ADD32(ctx->r7, 0X59F0);
    func_8004CD24(rdram, ctx);
        goto after_2;
    // 0x803F5C58: addiu       $a3, $a3, 0x59F0
    ctx->r7 = ADD32(ctx->r7, 0X59F0);
    after_2:
    // 0x803F5C5C: lw          $a0, 0x14($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X14);
L_803F5C60:
    // 0x803F5C60: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x803F5C64: jal         0x8002135C
    // 0x803F5C68: addiu       $a2, $zero, 0xCB
    ctx->r6 = ADD32(0, 0XCB);
    func_8002135C(rdram, ctx);
        goto after_3;
    // 0x803F5C68: addiu       $a2, $zero, 0xCB
    ctx->r6 = ADD32(0, 0XCB);
    after_3:
    // 0x803F5C6C: lw          $a0, 0x14($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X14);
    // 0x803F5C70: addiu       $a1, $zero, 0xA8
    ctx->r5 = ADD32(0, 0XA8);
    // 0x803F5C74: jal         0x8004CD44
    // 0x803F5C78: addiu       $a2, $zero, 0x80
    ctx->r6 = ADD32(0, 0X80);
    func_8004CD44(rdram, ctx);
        goto after_4;
    // 0x803F5C78: addiu       $a2, $zero, 0x80
    ctx->r6 = ADD32(0, 0X80);
    after_4:
    // 0x803F5C7C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x803F5C80: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x803F5C84: jr          $ra
    // 0x803F5C88: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x803F5C88: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_803F5C8C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803F5C8C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x803F5C90: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x803F5C94: lui         $a0, 0x803F
    ctx->r4 = S32(0X803F << 16);
    // 0x803F5C98: addiu       $a0, $a0, 0x5CC8
    ctx->r4 = ADD32(ctx->r4, 0X5CC8);
    // 0x803F5C9C: jal         0x800293DC
    // 0x803F5CA0: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    func_800293DC(rdram, ctx);
        goto after_0;
    // 0x803F5CA0: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    after_0:
    // 0x803F5CA4: lw          $a0, 0x14($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X14);
    // 0x803F5CA8: addiu       $a1, $zero, 0xB2
    ctx->r5 = ADD32(0, 0XB2);
    // 0x803F5CAC: addiu       $a2, $zero, 0x40
    ctx->r6 = ADD32(0, 0X40);
    // 0x803F5CB0: jal         0x8006E170
    // 0x803F5CB4: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    func_8006E170(rdram, ctx);
        goto after_1;
    // 0x803F5CB4: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_1:
    // 0x803F5CB8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x803F5CBC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x803F5CC0: jr          $ra
    // 0x803F5CC4: nop

    return;
    // 0x803F5CC4: nop

;}
RECOMP_FUNC void func_803F5CC8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803F5CC8: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x803F5CCC: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x803F5CD0: sw          $a1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r5;
    // 0x803F5CD4: lw          $v0, 0x8($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X8);
    // 0x803F5CD8: addiu       $a0, $zero, 0x19
    ctx->r4 = ADD32(0, 0X19);
    // 0x803F5CDC: addiu       $a1, $zero, 0x23
    ctx->r5 = ADD32(0, 0X23);
    // 0x803F5CE0: jal         0x8002F224
    // 0x803F5CE4: sw          $v0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r2;
    func_8002F224(rdram, ctx);
        goto after_0;
    // 0x803F5CE4: sw          $v0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r2;
    after_0:
    // 0x803F5CE8: lw          $v0, 0x2C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X2C);
    // 0x803F5CEC: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x803F5CF0: lb          $v1, 0x38($v0)
    ctx->r3 = MEM_B(ctx->r2, 0X38);
    // 0x803F5CF4: lw          $a2, 0x3C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X3C);
    // 0x803F5CF8: beq         $v1, $a0, L_803F5D10
    if (ctx->r3 == ctx->r4) {
        // 0x803F5CFC: addiu       $at, $zero, 0x2
        ctx->r1 = ADD32(0, 0X2);
            goto L_803F5D10;
    }
    // 0x803F5CFC: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x803F5D00: beq         $v1, $at, L_803F5DB0
    if (ctx->r3 == ctx->r1) {
        // 0x803F5D04: nop
    
            goto L_803F5DB0;
    }
    // 0x803F5D04: nop

    // 0x803F5D08: b           L_803F5E44
    // 0x803F5D0C: lui         $a0, 0x8005
    ctx->r4 = S32(0X8005 << 16);
        goto L_803F5E44;
    // 0x803F5D0C: lui         $a0, 0x8005
    ctx->r4 = S32(0X8005 << 16);
L_803F5D10:
    // 0x803F5D10: lb          $v1, 0x3A($v0)
    ctx->r3 = MEM_B(ctx->r2, 0X3A);
    // 0x803F5D14: nop

    // 0x803F5D18: beq         $v1, $zero, L_803F5D30
    if (ctx->r3 == 0) {
        // 0x803F5D1C: nop
    
            goto L_803F5D30;
    }
    // 0x803F5D1C: nop

    // 0x803F5D20: beq         $v1, $a0, L_803F5D84
    if (ctx->r3 == ctx->r4) {
        // 0x803F5D24: addiu       $a3, $zero, 0x19
        ctx->r7 = ADD32(0, 0X19);
            goto L_803F5D84;
    }
    // 0x803F5D24: addiu       $a3, $zero, 0x19
    ctx->r7 = ADD32(0, 0X19);
    // 0x803F5D28: b           L_803F5E50
    // 0x803F5D2C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_803F5E50;
    // 0x803F5D2C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_803F5D30:
    // 0x803F5D30: lb          $a1, 0x3D($v0)
    ctx->r5 = MEM_B(ctx->r2, 0X3D);
    // 0x803F5D34: addiu       $at, $zero, 0x10
    ctx->r1 = ADD32(0, 0X10);
    // 0x803F5D38: beq         $a1, $at, L_803F5D4C
    if (ctx->r5 == ctx->r1) {
        // 0x803F5D3C: lui         $a0, 0x8005
        ctx->r4 = S32(0X8005 << 16);
            goto L_803F5D4C;
    }
    // 0x803F5D3C: lui         $a0, 0x8005
    ctx->r4 = S32(0X8005 << 16);
    // 0x803F5D40: addiu       $at, $zero, 0x11
    ctx->r1 = ADD32(0, 0X11);
    // 0x803F5D44: bne         $a1, $at, L_803F5D5C
    if (ctx->r5 != ctx->r1) {
        // 0x803F5D48: addiu       $a3, $zero, 0x19
        ctx->r7 = ADD32(0, 0X19);
            goto L_803F5D5C;
    }
    // 0x803F5D48: addiu       $a3, $zero, 0x19
    ctx->r7 = ADD32(0, 0X19);
L_803F5D4C:
    // 0x803F5D4C: jal         0x8002A468
    // 0x803F5D50: addiu       $a0, $a0, -0x3230
    ctx->r4 = ADD32(ctx->r4, -0X3230);
    func_8002A468(rdram, ctx);
        goto after_1;
    // 0x803F5D50: addiu       $a0, $a0, -0x3230
    ctx->r4 = ADD32(ctx->r4, -0X3230);
    after_1:
    // 0x803F5D54: b           L_803F5E50
    // 0x803F5D58: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_803F5E50;
    // 0x803F5D58: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_803F5D5C:
    // 0x803F5D5C: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x803F5D60: lbu         $a0, -0x326C($a0)
    ctx->r4 = MEM_BU(ctx->r4, -0X326C);
    // 0x803F5D64: addiu       $t6, $zero, 0xBA
    ctx->r14 = ADD32(0, 0XBA);
    // 0x803F5D68: addiu       $t7, $zero, 0x40
    ctx->r15 = ADD32(0, 0X40);
    // 0x803F5D6C: sw          $t7, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r15;
    // 0x803F5D70: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x803F5D74: jal         0x8006E244
    // 0x803F5D78: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    func_8006E244(rdram, ctx);
        goto after_2;
    // 0x803F5D78: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    after_2:
    // 0x803F5D7C: b           L_803F5E50
    // 0x803F5D80: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_803F5E50;
    // 0x803F5D80: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_803F5D84:
    // 0x803F5D84: lb          $a1, 0x3D($v0)
    ctx->r5 = MEM_B(ctx->r2, 0X3D);
    // 0x803F5D88: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x803F5D8C: lbu         $a0, -0x326C($a0)
    ctx->r4 = MEM_BU(ctx->r4, -0X326C);
    // 0x803F5D90: addiu       $t8, $zero, 0xBA
    ctx->r24 = ADD32(0, 0XBA);
    // 0x803F5D94: addiu       $t9, $zero, 0x10
    ctx->r25 = ADD32(0, 0X10);
    // 0x803F5D98: sw          $t9, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r25;
    // 0x803F5D9C: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    // 0x803F5DA0: jal         0x8006E244
    // 0x803F5DA4: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    func_8006E244(rdram, ctx);
        goto after_3;
    // 0x803F5DA4: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    after_3:
    // 0x803F5DA8: b           L_803F5E50
    // 0x803F5DAC: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_803F5E50;
    // 0x803F5DAC: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_803F5DB0:
    // 0x803F5DB0: lbu         $t0, 0x3C($v0)
    ctx->r8 = MEM_BU(ctx->r2, 0X3C);
    // 0x803F5DB4: nop

    // 0x803F5DB8: sltiu       $at, $t0, 0x5
    ctx->r1 = ctx->r8 < 0X5 ? 1 : 0;
    // 0x803F5DBC: beq         $at, $zero, L_803F5E4C
    if (ctx->r1 == 0) {
        // 0x803F5DC0: sll         $t0, $t0, 2
        ctx->r8 = S32(ctx->r8 << 2);
            goto L_803F5E4C;
    }
    // 0x803F5DC0: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x803F5DC4: lui         $at, 0x8040
    ctx->r1 = S32(0X8040 << 16);
    // 0x803F5DC8: addu        $at, $at, $t0
    gpr jr_addend_803F5DD4 = ctx->r8;
    ctx->r1 = ADD32(ctx->r1, ctx->r8);
    // 0x803F5DCC: lw          $t0, -0x4718($at)
    ctx->r8 = ADD32(ctx->r1, -0X4718);
    // 0x803F5DD0: nop

    // 0x803F5DD4: jr          $t0
    // 0x803F5DD8: nop

    switch (jr_addend_803F5DD4 >> 2) {
        case 0: goto L_803F5DDC; break;
        case 1: goto L_803F5DDC; break;
        case 2: goto L_803F5DF0; break;
        case 3: goto L_803F5E0C; break;
        case 4: goto L_803F5E28; break;
        default: switch_error(__func__, 0x803F5DD4, 0x803FB8E8);
    }
    // 0x803F5DD8: nop

L_803F5DDC:
    // 0x803F5DDC: lui         $a0, 0x8005
    ctx->r4 = S32(0X8005 << 16);
    // 0x803F5DE0: jal         0x8002A468
    // 0x803F5DE4: addiu       $a0, $a0, -0x3230
    ctx->r4 = ADD32(ctx->r4, -0X3230);
    func_8002A468(rdram, ctx);
        goto after_4;
    // 0x803F5DE4: addiu       $a0, $a0, -0x3230
    ctx->r4 = ADD32(ctx->r4, -0X3230);
    after_4:
    // 0x803F5DE8: b           L_803F5E50
    // 0x803F5DEC: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_803F5E50;
    // 0x803F5DEC: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_803F5DF0:
    // 0x803F5DF0: lw          $a0, 0x3C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X3C);
    // 0x803F5DF4: lb          $a1, 0x3F($v0)
    ctx->r5 = MEM_B(ctx->r2, 0X3F);
    // 0x803F5DF8: lb          $a2, 0x4A($v0)
    ctx->r6 = MEM_B(ctx->r2, 0X4A);
    // 0x803F5DFC: jal         0x803F5E5C
    // 0x803F5E00: nop

    func_803F5E5C(rdram, ctx);
        goto after_5;
    // 0x803F5E00: nop

    after_5:
    // 0x803F5E04: b           L_803F5E50
    // 0x803F5E08: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_803F5E50;
    // 0x803F5E08: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_803F5E0C:
    // 0x803F5E0C: lw          $a0, 0x3C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X3C);
    // 0x803F5E10: lb          $a1, 0x40($v0)
    ctx->r5 = MEM_B(ctx->r2, 0X40);
    // 0x803F5E14: lb          $a2, 0x4B($v0)
    ctx->r6 = MEM_B(ctx->r2, 0X4B);
    // 0x803F5E18: jal         0x803F5E5C
    // 0x803F5E1C: nop

    func_803F5E5C(rdram, ctx);
        goto after_6;
    // 0x803F5E1C: nop

    after_6:
    // 0x803F5E20: b           L_803F5E50
    // 0x803F5E24: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_803F5E50;
    // 0x803F5E24: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_803F5E28:
    // 0x803F5E28: lw          $a0, 0x3C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X3C);
    // 0x803F5E2C: lb          $a1, 0x41($v0)
    ctx->r5 = MEM_B(ctx->r2, 0X41);
    // 0x803F5E30: lb          $a2, 0x4C($v0)
    ctx->r6 = MEM_B(ctx->r2, 0X4C);
    // 0x803F5E34: jal         0x803F5E5C
    // 0x803F5E38: nop

    func_803F5E5C(rdram, ctx);
        goto after_7;
    // 0x803F5E38: nop

    after_7:
    // 0x803F5E3C: b           L_803F5E50
    // 0x803F5E40: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_803F5E50;
    // 0x803F5E40: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_803F5E44:
    // 0x803F5E44: jal         0x8002A468
    // 0x803F5E48: addiu       $a0, $a0, -0x3230
    ctx->r4 = ADD32(ctx->r4, -0X3230);
    func_8002A468(rdram, ctx);
        goto after_8;
    // 0x803F5E48: addiu       $a0, $a0, -0x3230
    ctx->r4 = ADD32(ctx->r4, -0X3230);
    after_8:
L_803F5E4C:
    // 0x803F5E4C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_803F5E50:
    // 0x803F5E50: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    // 0x803F5E54: jr          $ra
    // 0x803F5E58: nop

    return;
    // 0x803F5E58: nop

;}
RECOMP_FUNC void func_803F5DA0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803F5DA0: jal         0x8006E244
    // 0x803F5DA4: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    func_8006E244(rdram, ctx);
        goto after_0;
    // 0x803F5DA4: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    after_0:
    // 0x803F5DA8: b           L_803F5E50
    // 0x803F5DAC: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_803F5E50;
    // 0x803F5DAC: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x803F5DB0: lbu         $t0, 0x3C($v0)
    ctx->r8 = MEM_BU(ctx->r2, 0X3C);
    // 0x803F5DB4: nop

    // 0x803F5DB8: sltiu       $at, $t0, 0x5
    ctx->r1 = ctx->r8 < 0X5 ? 1 : 0;
    // 0x803F5DBC: beq         $at, $zero, L_803F5E4C
    if (ctx->r1 == 0) {
        // 0x803F5DC0: sll         $t0, $t0, 2
        ctx->r8 = S32(ctx->r8 << 2);
            goto L_803F5E4C;
    }
    // 0x803F5DC0: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x803F5DC4: lui         $at, 0x8040
    ctx->r1 = S32(0X8040 << 16);
    // 0x803F5DC8: addu        $at, $at, $t0
    gpr jr_addend_803F5DD4 = ctx->r8;
    ctx->r1 = ADD32(ctx->r1, ctx->r8);
    // 0x803F5DCC: lw          $t0, -0x4718($at)
    ctx->r8 = ADD32(ctx->r1, -0X4718);
    // 0x803F5DD0: nop

    // 0x803F5DD4: jr          $t0
    // 0x803F5DD8: nop

    switch (jr_addend_803F5DD4 >> 2) {
        case 0: goto L_803F5DDC; break;
        case 1: goto L_803F5DDC; break;
        case 2: goto L_803F5DF0; break;
        case 3: goto L_803F5E0C; break;
        case 4: goto L_803F5E28; break;
        default: switch_error(__func__, 0x803F5DD4, 0x803FB8E8);
    }
    // 0x803F5DD8: nop

L_803F5DDC:
    // 0x803F5DDC: lui         $a0, 0x8005
    ctx->r4 = S32(0X8005 << 16);
    // 0x803F5DE0: jal         0x8002A468
    // 0x803F5DE4: addiu       $a0, $a0, -0x3230
    ctx->r4 = ADD32(ctx->r4, -0X3230);
    func_8002A468(rdram, ctx);
        goto after_1;
    // 0x803F5DE4: addiu       $a0, $a0, -0x3230
    ctx->r4 = ADD32(ctx->r4, -0X3230);
    after_1:
    // 0x803F5DE8: b           L_803F5E50
    // 0x803F5DEC: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_803F5E50;
    // 0x803F5DEC: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_803F5DF0:
    // 0x803F5DF0: lw          $a0, 0x3C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X3C);
    // 0x803F5DF4: lb          $a1, 0x3F($v0)
    ctx->r5 = MEM_B(ctx->r2, 0X3F);
    // 0x803F5DF8: lb          $a2, 0x4A($v0)
    ctx->r6 = MEM_B(ctx->r2, 0X4A);
    // 0x803F5DFC: jal         0x803F5E5C
    // 0x803F5E00: nop

    func_803F5E5C(rdram, ctx);
        goto after_2;
    // 0x803F5E00: nop

    after_2:
    // 0x803F5E04: b           L_803F5E50
    // 0x803F5E08: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_803F5E50;
    // 0x803F5E08: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_803F5E0C:
    // 0x803F5E0C: lw          $a0, 0x3C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X3C);
    // 0x803F5E10: lb          $a1, 0x40($v0)
    ctx->r5 = MEM_B(ctx->r2, 0X40);
    // 0x803F5E14: lb          $a2, 0x4B($v0)
    ctx->r6 = MEM_B(ctx->r2, 0X4B);
    // 0x803F5E18: jal         0x803F5E5C
    // 0x803F5E1C: nop

    func_803F5E5C(rdram, ctx);
        goto after_3;
    // 0x803F5E1C: nop

    after_3:
    // 0x803F5E20: b           L_803F5E50
    // 0x803F5E24: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_803F5E50;
    // 0x803F5E24: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_803F5E28:
    // 0x803F5E28: lw          $a0, 0x3C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X3C);
    // 0x803F5E2C: lb          $a1, 0x41($v0)
    ctx->r5 = MEM_B(ctx->r2, 0X41);
    // 0x803F5E30: lb          $a2, 0x4C($v0)
    ctx->r6 = MEM_B(ctx->r2, 0X4C);
    // 0x803F5E34: jal         0x803F5E5C
    // 0x803F5E38: nop

    func_803F5E5C(rdram, ctx);
        goto after_4;
    // 0x803F5E38: nop

    after_4:
    // 0x803F5E3C: b           L_803F5E50
    // 0x803F5E40: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_803F5E50;
    // 0x803F5E40: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x803F5E44: jal         0x8002A468
    // 0x803F5E48: addiu       $a0, $a0, -0x3230
    ctx->r4 = ADD32(ctx->r4, -0X3230);
    func_8002A468(rdram, ctx);
        goto after_5;
    // 0x803F5E48: addiu       $a0, $a0, -0x3230
    ctx->r4 = ADD32(ctx->r4, -0X3230);
    after_5:
L_803F5E4C:
    // 0x803F5E4C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_803F5E50:
    // 0x803F5E50: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    // 0x803F5E54: jr          $ra
    // 0x803F5E58: nop

    return;
    // 0x803F5E58: nop

;}
RECOMP_FUNC void func_803F5DEC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803F5DEC: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x803F5DF0: lw          $a0, 0x3C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X3C);
    // 0x803F5DF4: lb          $a1, 0x3F($v0)
    ctx->r5 = MEM_B(ctx->r2, 0X3F);
    // 0x803F5DF8: lb          $a2, 0x4A($v0)
    ctx->r6 = MEM_B(ctx->r2, 0X4A);
    // 0x803F5DFC: jal         0x803F5E5C
    // 0x803F5E00: nop

    func_803F5E5C(rdram, ctx);
        goto after_0;
    // 0x803F5E00: nop

    after_0:
    // 0x803F5E04: b           L_803F5E50
    // 0x803F5E08: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_803F5E50;
    // 0x803F5E08: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x803F5E0C: lw          $a0, 0x3C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X3C);
    // 0x803F5E10: lb          $a1, 0x40($v0)
    ctx->r5 = MEM_B(ctx->r2, 0X40);
    // 0x803F5E14: lb          $a2, 0x4B($v0)
    ctx->r6 = MEM_B(ctx->r2, 0X4B);
    // 0x803F5E18: jal         0x803F5E5C
    // 0x803F5E1C: nop

    func_803F5E5C(rdram, ctx);
        goto after_1;
    // 0x803F5E1C: nop

    after_1:
    // 0x803F5E20: b           L_803F5E50
    // 0x803F5E24: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_803F5E50;
    // 0x803F5E24: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x803F5E28: lw          $a0, 0x3C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X3C);
    // 0x803F5E2C: lb          $a1, 0x41($v0)
    ctx->r5 = MEM_B(ctx->r2, 0X41);
    // 0x803F5E30: lb          $a2, 0x4C($v0)
    ctx->r6 = MEM_B(ctx->r2, 0X4C);
    // 0x803F5E34: jal         0x803F5E5C
    // 0x803F5E38: nop

    func_803F5E5C(rdram, ctx);
        goto after_2;
    // 0x803F5E38: nop

    after_2:
    // 0x803F5E3C: b           L_803F5E50
    // 0x803F5E40: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_803F5E50;
    // 0x803F5E40: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x803F5E44: jal         0x8002A468
    // 0x803F5E48: addiu       $a0, $a0, -0x3230
    ctx->r4 = ADD32(ctx->r4, -0X3230);
    func_8002A468(rdram, ctx);
        goto after_3;
    // 0x803F5E48: addiu       $a0, $a0, -0x3230
    ctx->r4 = ADD32(ctx->r4, -0X3230);
    after_3:
    // 0x803F5E4C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_803F5E50:
    // 0x803F5E50: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    // 0x803F5E54: jr          $ra
    // 0x803F5E58: nop

    return;
    // 0x803F5E58: nop

;}
RECOMP_FUNC void func_803F5E5C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803F5E5C: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x803F5E60: sw          $a2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r6;
    // 0x803F5E64: lb          $t8, 0x33($sp)
    ctx->r24 = MEM_B(ctx->r29, 0X33);
    // 0x803F5E68: sll         $t6, $a1, 24
    ctx->r14 = S32(ctx->r5 << 24);
    // 0x803F5E6C: sra         $t7, $t6, 24
    ctx->r15 = S32(SIGNED(ctx->r14) >> 24);
    // 0x803F5E70: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x803F5E74: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x803F5E78: bne         $t7, $t8, L_803F5EB4
    if (ctx->r15 != ctx->r24) {
        // 0x803F5E7C: sw          $a1, 0x2C($sp)
        MEM_W(0X2C, ctx->r29) = ctx->r5;
            goto L_803F5EB4;
    }
    // 0x803F5E7C: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x803F5E80: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x803F5E84: lbu         $a0, -0x326C($a0)
    ctx->r4 = MEM_BU(ctx->r4, -0X326C);
    // 0x803F5E88: lw          $a2, 0x28($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X28);
    // 0x803F5E8C: addiu       $t9, $zero, 0xBA
    ctx->r25 = ADD32(0, 0XBA);
    // 0x803F5E90: addiu       $t0, $zero, 0x40
    ctx->r8 = ADD32(0, 0X40);
    // 0x803F5E94: sw          $t0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r8;
    // 0x803F5E98: sw          $t9, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r25;
    // 0x803F5E9C: or          $a1, $t8, $zero
    ctx->r5 = ctx->r24 | 0;
    // 0x803F5EA0: addiu       $a3, $zero, 0x19
    ctx->r7 = ADD32(0, 0X19);
    // 0x803F5EA4: jal         0x8006E244
    // 0x803F5EA8: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    func_8006E244(rdram, ctx);
        goto after_0;
    // 0x803F5EA8: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    after_0:
    // 0x803F5EAC: b           L_803F5EE4
    // 0x803F5EB0: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_803F5EE4;
    // 0x803F5EB0: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_803F5EB4:
    // 0x803F5EB4: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x803F5EB8: lbu         $a0, -0x326C($a0)
    ctx->r4 = MEM_BU(ctx->r4, -0X326C);
    // 0x803F5EBC: lb          $a1, 0x33($sp)
    ctx->r5 = MEM_B(ctx->r29, 0X33);
    // 0x803F5EC0: lw          $a2, 0x28($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X28);
    // 0x803F5EC4: addiu       $t1, $zero, 0xBA
    ctx->r9 = ADD32(0, 0XBA);
    // 0x803F5EC8: addiu       $t2, $zero, 0x10
    ctx->r10 = ADD32(0, 0X10);
    // 0x803F5ECC: sw          $t2, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r10;
    // 0x803F5ED0: sw          $t1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r9;
    // 0x803F5ED4: addiu       $a3, $zero, 0x19
    ctx->r7 = ADD32(0, 0X19);
    // 0x803F5ED8: jal         0x8006E244
    // 0x803F5EDC: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    func_8006E244(rdram, ctx);
        goto after_1;
    // 0x803F5EDC: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    after_1:
    // 0x803F5EE0: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_803F5EE4:
    // 0x803F5EE4: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x803F5EE8: jr          $ra
    // 0x803F5EEC: nop

    return;
    // 0x803F5EEC: nop

;}
RECOMP_FUNC void func_803F5EF0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803F5EF0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x803F5EF4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x803F5EF8: lui         $a0, 0x803F
    ctx->r4 = S32(0X803F << 16);
    // 0x803F5EFC: addiu       $a0, $a0, 0x5F2C
    ctx->r4 = ADD32(ctx->r4, 0X5F2C);
    // 0x803F5F00: jal         0x800293DC
    // 0x803F5F04: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    func_800293DC(rdram, ctx);
        goto after_0;
    // 0x803F5F04: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    after_0:
    // 0x803F5F08: lw          $a0, 0x14($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X14);
    // 0x803F5F0C: addiu       $a1, $zero, 0xA0
    ctx->r5 = ADD32(0, 0XA0);
    // 0x803F5F10: addiu       $a2, $zero, 0x48
    ctx->r6 = ADD32(0, 0X48);
    // 0x803F5F14: jal         0x8006E170
    // 0x803F5F18: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    func_8006E170(rdram, ctx);
        goto after_1;
    // 0x803F5F18: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_1:
    // 0x803F5F1C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x803F5F20: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x803F5F24: jr          $ra
    // 0x803F5F28: nop

    return;
    // 0x803F5F28: nop

;}
RECOMP_FUNC void func_803F5F18(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803F5F18: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    // 0x803F5F1C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x803F5F20: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x803F5F24: jr          $ra
    // 0x803F5F28: nop

    return;
    // 0x803F5F28: nop

;}
RECOMP_FUNC void func_803F5F2C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803F5F2C: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x803F5F30: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x803F5F34: sw          $a1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r5;
    // 0x803F5F38: lw          $v1, 0x8($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X8);
    // 0x803F5F3C: addiu       $a0, $zero, 0x24
    ctx->r4 = ADD32(0, 0X24);
    // 0x803F5F40: addiu       $a1, $zero, 0x2E
    ctx->r5 = ADD32(0, 0X2E);
    // 0x803F5F44: jal         0x8002F224
    // 0x803F5F48: sw          $v1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r3;
    func_8002F224(rdram, ctx);
        goto after_0;
    // 0x803F5F48: sw          $v1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r3;
    after_0:
    // 0x803F5F4C: lw          $v1, 0x2C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X2C);
    // 0x803F5F50: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x803F5F54: lb          $v0, 0x38($v1)
    ctx->r2 = MEM_B(ctx->r3, 0X38);
    // 0x803F5F58: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x803F5F5C: beq         $v0, $a0, L_803F5F74
    if (ctx->r2 == ctx->r4) {
        // 0x803F5F60: nop
    
            goto L_803F5F74;
    }
    // 0x803F5F60: nop

    // 0x803F5F64: beq         $v0, $at, L_803F5FDC
    if (ctx->r2 == ctx->r1) {
        // 0x803F5F68: nop
    
            goto L_803F5FDC;
    }
    // 0x803F5F68: nop

    // 0x803F5F6C: b           L_803F6070
    // 0x803F5F70: lui         $a0, 0x8005
    ctx->r4 = S32(0X8005 << 16);
        goto L_803F6070;
    // 0x803F5F70: lui         $a0, 0x8005
    ctx->r4 = S32(0X8005 << 16);
L_803F5F74:
    // 0x803F5F74: lb          $v0, 0x3A($v1)
    ctx->r2 = MEM_B(ctx->r3, 0X3A);
    // 0x803F5F78: nop

    // 0x803F5F7C: beq         $v0, $zero, L_803F5F94
    if (ctx->r2 == 0) {
        // 0x803F5F80: nop
    
            goto L_803F5F94;
    }
    // 0x803F5F80: nop

    // 0x803F5F84: beq         $v0, $a0, L_803F5FA8
    if (ctx->r2 == ctx->r4) {
        // 0x803F5F88: addiu       $a3, $zero, 0x24
        ctx->r7 = ADD32(0, 0X24);
            goto L_803F5FA8;
    }
    // 0x803F5F88: addiu       $a3, $zero, 0x24
    ctx->r7 = ADD32(0, 0X24);
    // 0x803F5F8C: b           L_803F607C
    // 0x803F5F90: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_803F607C;
    // 0x803F5F90: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_803F5F94:
    // 0x803F5F94: lui         $a0, 0x8005
    ctx->r4 = S32(0X8005 << 16);
    // 0x803F5F98: jal         0x8002A468
    // 0x803F5F9C: addiu       $a0, $a0, -0x3230
    ctx->r4 = ADD32(ctx->r4, -0X3230);
    func_8002A468(rdram, ctx);
        goto after_1;
    // 0x803F5F9C: addiu       $a0, $a0, -0x3230
    ctx->r4 = ADD32(ctx->r4, -0X3230);
    after_1:
    // 0x803F5FA0: b           L_803F607C
    // 0x803F5FA4: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_803F607C;
    // 0x803F5FA4: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_803F5FA8:
    // 0x803F5FA8: lb          $a1, 0x3E($v1)
    ctx->r5 = MEM_B(ctx->r3, 0X3E);
    // 0x803F5FAC: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x803F5FB0: lbu         $a0, -0x326C($a0)
    ctx->r4 = MEM_BU(ctx->r4, -0X326C);
    // 0x803F5FB4: lw          $a2, 0x34($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X34);
    // 0x803F5FB8: addiu       $t6, $zero, 0xBA
    ctx->r14 = ADD32(0, 0XBA);
    // 0x803F5FBC: addiu       $t7, $zero, 0x48
    ctx->r15 = ADD32(0, 0X48);
    // 0x803F5FC0: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x803F5FC4: sw          $t8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r24;
    // 0x803F5FC8: sw          $t7, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r15;
    // 0x803F5FCC: jal         0x8006E244
    // 0x803F5FD0: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    func_8006E244(rdram, ctx);
        goto after_2;
    // 0x803F5FD0: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    after_2:
    // 0x803F5FD4: b           L_803F607C
    // 0x803F5FD8: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_803F607C;
    // 0x803F5FD8: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_803F5FDC:
    // 0x803F5FDC: lbu         $t9, 0x3C($v1)
    ctx->r25 = MEM_BU(ctx->r3, 0X3C);
    // 0x803F5FE0: nop

    // 0x803F5FE4: sltiu       $at, $t9, 0x5
    ctx->r1 = ctx->r25 < 0X5 ? 1 : 0;
    // 0x803F5FE8: beq         $at, $zero, L_803F6078
    if (ctx->r1 == 0) {
        // 0x803F5FEC: sll         $t9, $t9, 2
        ctx->r25 = S32(ctx->r25 << 2);
            goto L_803F6078;
    }
    // 0x803F5FEC: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x803F5FF0: lui         $at, 0x8040
    ctx->r1 = S32(0X8040 << 16);
    // 0x803F5FF4: addu        $at, $at, $t9
    gpr jr_addend_803F6000 = ctx->r25;
    ctx->r1 = ADD32(ctx->r1, ctx->r25);
    // 0x803F5FF8: lw          $t9, -0x4704($at)
    ctx->r25 = ADD32(ctx->r1, -0X4704);
    // 0x803F5FFC: nop

    // 0x803F6000: jr          $t9
    // 0x803F6004: nop

    switch (jr_addend_803F6000 >> 2) {
        case 0: goto L_803F6008; break;
        case 1: goto L_803F6008; break;
        case 2: goto L_803F601C; break;
        case 3: goto L_803F6038; break;
        case 4: goto L_803F6054; break;
        default: switch_error(__func__, 0x803F6000, 0x803FB8FC);
    }
    // 0x803F6004: nop

L_803F6008:
    // 0x803F6008: lui         $a0, 0x8005
    ctx->r4 = S32(0X8005 << 16);
    // 0x803F600C: jal         0x8002A468
    // 0x803F6010: addiu       $a0, $a0, -0x3230
    ctx->r4 = ADD32(ctx->r4, -0X3230);
    func_8002A468(rdram, ctx);
        goto after_3;
    // 0x803F6010: addiu       $a0, $a0, -0x3230
    ctx->r4 = ADD32(ctx->r4, -0X3230);
    after_3:
    // 0x803F6014: b           L_803F607C
    // 0x803F6018: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_803F607C;
    // 0x803F6018: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_803F601C:
    // 0x803F601C: lw          $a0, 0x34($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X34);
    // 0x803F6020: lb          $a1, 0x3F($v1)
    ctx->r5 = MEM_B(ctx->r3, 0X3F);
    // 0x803F6024: lb          $a2, 0x4A($v1)
    ctx->r6 = MEM_B(ctx->r3, 0X4A);
    // 0x803F6028: jal         0x803F6088
    // 0x803F602C: nop

    func_803F6088(rdram, ctx);
        goto after_4;
    // 0x803F602C: nop

    after_4:
    // 0x803F6030: b           L_803F607C
    // 0x803F6034: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_803F607C;
    // 0x803F6034: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_803F6038:
    // 0x803F6038: lw          $a0, 0x34($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X34);
    // 0x803F603C: lb          $a1, 0x40($v1)
    ctx->r5 = MEM_B(ctx->r3, 0X40);
    // 0x803F6040: lb          $a2, 0x4B($v1)
    ctx->r6 = MEM_B(ctx->r3, 0X4B);
    // 0x803F6044: jal         0x803F6088
    // 0x803F6048: nop

    func_803F6088(rdram, ctx);
        goto after_5;
    // 0x803F6048: nop

    after_5:
    // 0x803F604C: b           L_803F607C
    // 0x803F6050: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_803F607C;
    // 0x803F6050: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_803F6054:
    // 0x803F6054: lw          $a0, 0x34($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X34);
    // 0x803F6058: lb          $a1, 0x41($v1)
    ctx->r5 = MEM_B(ctx->r3, 0X41);
    // 0x803F605C: lb          $a2, 0x4C($v1)
    ctx->r6 = MEM_B(ctx->r3, 0X4C);
    // 0x803F6060: jal         0x803F6088
    // 0x803F6064: nop

    func_803F6088(rdram, ctx);
        goto after_6;
    // 0x803F6064: nop

    after_6:
    // 0x803F6068: b           L_803F607C
    // 0x803F606C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_803F607C;
    // 0x803F606C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_803F6070:
    // 0x803F6070: jal         0x8002A468
    // 0x803F6074: addiu       $a0, $a0, -0x3230
    ctx->r4 = ADD32(ctx->r4, -0X3230);
    func_8002A468(rdram, ctx);
        goto after_7;
    // 0x803F6074: addiu       $a0, $a0, -0x3230
    ctx->r4 = ADD32(ctx->r4, -0X3230);
    after_7:
L_803F6078:
    // 0x803F6078: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_803F607C:
    // 0x803F607C: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x803F6080: jr          $ra
    // 0x803F6084: nop

    return;
    // 0x803F6084: nop

;}
RECOMP_FUNC void func_803F6088(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803F6088: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x803F608C: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x803F6090: sll         $t6, $a1, 24
    ctx->r14 = S32(ctx->r5 << 24);
    // 0x803F6094: sll         $t8, $a2, 24
    ctx->r24 = S32(ctx->r6 << 24);
    // 0x803F6098: sra         $t9, $t8, 24
    ctx->r25 = S32(SIGNED(ctx->r24) >> 24);
    // 0x803F609C: sra         $a1, $t6, 24
    ctx->r5 = S32(SIGNED(ctx->r14) >> 24);
    // 0x803F60A0: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x803F60A4: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x803F60A8: bne         $a1, $t9, L_803F60C4
    if (ctx->r5 != ctx->r25) {
        // 0x803F60AC: sw          $a2, 0x30($sp)
        MEM_W(0X30, ctx->r29) = ctx->r6;
            goto L_803F60C4;
    }
    // 0x803F60AC: sw          $a2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r6;
    // 0x803F60B0: lui         $a0, 0x8005
    ctx->r4 = S32(0X8005 << 16);
    // 0x803F60B4: jal         0x8002A468
    // 0x803F60B8: addiu       $a0, $a0, -0x3230
    ctx->r4 = ADD32(ctx->r4, -0X3230);
    func_8002A468(rdram, ctx);
        goto after_0;
    // 0x803F60B8: addiu       $a0, $a0, -0x3230
    ctx->r4 = ADD32(ctx->r4, -0X3230);
    after_0:
    // 0x803F60BC: b           L_803F60F4
    // 0x803F60C0: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_803F60F4;
    // 0x803F60C0: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_803F60C4:
    // 0x803F60C4: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x803F60C8: lbu         $a0, -0x326C($a0)
    ctx->r4 = MEM_BU(ctx->r4, -0X326C);
    // 0x803F60CC: lw          $a2, 0x28($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X28);
    // 0x803F60D0: addiu       $t0, $zero, 0xBA
    ctx->r8 = ADD32(0, 0XBA);
    // 0x803F60D4: addiu       $t1, $zero, 0x48
    ctx->r9 = ADD32(0, 0X48);
    // 0x803F60D8: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x803F60DC: sw          $t2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r10;
    // 0x803F60E0: sw          $t1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r9;
    // 0x803F60E4: sw          $t0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r8;
    // 0x803F60E8: jal         0x8006E244
    // 0x803F60EC: addiu       $a3, $zero, 0x24
    ctx->r7 = ADD32(0, 0X24);
    func_8006E244(rdram, ctx);
        goto after_1;
    // 0x803F60EC: addiu       $a3, $zero, 0x24
    ctx->r7 = ADD32(0, 0X24);
    after_1:
    // 0x803F60F0: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_803F60F4:
    // 0x803F60F4: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x803F60F8: jr          $ra
    // 0x803F60FC: nop

    return;
    // 0x803F60FC: nop

;}
RECOMP_FUNC void func_803F6100(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803F6100: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x803F6104: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x803F6108: lui         $a0, 0x803F
    ctx->r4 = S32(0X803F << 16);
    // 0x803F610C: jal         0x80029354
    // 0x803F6110: addiu       $a0, $a0, 0x6150
    ctx->r4 = ADD32(ctx->r4, 0X6150);
    func_80029354(rdram, ctx);
        goto after_0;
    // 0x803F6110: addiu       $a0, $a0, 0x6150
    ctx->r4 = ADD32(ctx->r4, 0X6150);
    after_0:
    // 0x803F6114: lw          $a0, 0x14($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X14);
    // 0x803F6118: lui         $a3, 0x803C
    ctx->r7 = S32(0X803C << 16);
    // 0x803F611C: addiu       $a3, $a3, 0x6800
    ctx->r7 = ADD32(ctx->r7, 0X6800);
    // 0x803F6120: addiu       $a1, $zero, 0x4C8
    ctx->r5 = ADD32(0, 0X4C8);
    // 0x803F6124: addiu       $a2, $zero, 0x9
    ctx->r6 = ADD32(0, 0X9);
    // 0x803F6128: jal         0x8004CD24
    // 0x803F612C: sw          $a0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r4;
    func_8004CD24(rdram, ctx);
        goto after_1;
    // 0x803F612C: sw          $a0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r4;
    after_1:
    // 0x803F6130: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    // 0x803F6134: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    // 0x803F6138: jal         0x8002135C
    // 0x803F613C: addiu       $a2, $zero, 0x24
    ctx->r6 = ADD32(0, 0X24);
    func_8002135C(rdram, ctx);
        goto after_2;
    // 0x803F613C: addiu       $a2, $zero, 0x24
    ctx->r6 = ADD32(0, 0X24);
    after_2:
    // 0x803F6140: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x803F6144: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x803F6148: jr          $ra
    // 0x803F614C: nop

    return;
    // 0x803F614C: nop

;}
RECOMP_FUNC void func_803F6150(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803F6150: lw          $v0, 0x8($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X8);
    // 0x803F6154: sb          $zero, 0x4($a1)
    MEM_B(0X4, ctx->r5) = 0;
    // 0x803F6158: lb          $v1, 0x38($v0)
    ctx->r3 = MEM_B(ctx->r2, 0X38);
    // 0x803F615C: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x803F6160: beq         $v1, $a2, L_803F6178
    if (ctx->r3 == ctx->r6) {
        // 0x803F6164: addiu       $a0, $zero, 0x2
        ctx->r4 = ADD32(0, 0X2);
            goto L_803F6178;
    }
    // 0x803F6164: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    // 0x803F6168: beq         $v1, $a0, L_803F6190
    if (ctx->r3 == ctx->r4) {
        // 0x803F616C: nop
    
            goto L_803F6190;
    }
    // 0x803F616C: nop

    // 0x803F6170: jr          $ra
    // 0x803F6174: nop

    return;
    // 0x803F6174: nop

L_803F6178:
    // 0x803F6178: lb          $t6, 0x3A($v0)
    ctx->r14 = MEM_B(ctx->r2, 0X3A);
    // 0x803F617C: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x803F6180: bne         $a2, $t6, L_803F6208
    if (ctx->r6 != ctx->r14) {
        // 0x803F6184: nop
    
            goto L_803F6208;
    }
    // 0x803F6184: nop

    // 0x803F6188: jr          $ra
    // 0x803F618C: sb          $t7, 0x4($a1)
    MEM_B(0X4, ctx->r5) = ctx->r15;
    return;
    // 0x803F618C: sb          $t7, 0x4($a1)
    MEM_B(0X4, ctx->r5) = ctx->r15;
L_803F6190:
    // 0x803F6190: lb          $v1, 0x3C($v0)
    ctx->r3 = MEM_B(ctx->r2, 0X3C);
    // 0x803F6194: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x803F6198: beq         $v1, $a0, L_803F61B8
    if (ctx->r3 == ctx->r4) {
        // 0x803F619C: nop
    
            goto L_803F61B8;
    }
    // 0x803F619C: nop

    // 0x803F61A0: beq         $v1, $at, L_803F61D4
    if (ctx->r3 == ctx->r1) {
        // 0x803F61A4: addiu       $at, $zero, 0x4
        ctx->r1 = ADD32(0, 0X4);
            goto L_803F61D4;
    }
    // 0x803F61A4: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x803F61A8: beq         $v1, $at, L_803F61F0
    if (ctx->r3 == ctx->r1) {
        // 0x803F61AC: nop
    
            goto L_803F61F0;
    }
    // 0x803F61AC: nop

    // 0x803F61B0: jr          $ra
    // 0x803F61B4: nop

    return;
    // 0x803F61B4: nop

L_803F61B8:
    // 0x803F61B8: lb          $t8, 0x3F($v0)
    ctx->r24 = MEM_B(ctx->r2, 0X3F);
    // 0x803F61BC: lb          $t9, 0x4A($v0)
    ctx->r25 = MEM_B(ctx->r2, 0X4A);
    // 0x803F61C0: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x803F61C4: beq         $t8, $t9, L_803F6208
    if (ctx->r24 == ctx->r25) {
        // 0x803F61C8: nop
    
            goto L_803F6208;
    }
    // 0x803F61C8: nop

    // 0x803F61CC: jr          $ra
    // 0x803F61D0: sb          $t0, 0x4($a1)
    MEM_B(0X4, ctx->r5) = ctx->r8;
    return;
    // 0x803F61D0: sb          $t0, 0x4($a1)
    MEM_B(0X4, ctx->r5) = ctx->r8;
L_803F61D4:
    // 0x803F61D4: lb          $t1, 0x40($v0)
    ctx->r9 = MEM_B(ctx->r2, 0X40);
    // 0x803F61D8: lb          $t2, 0x4B($v0)
    ctx->r10 = MEM_B(ctx->r2, 0X4B);
    // 0x803F61DC: addiu       $t3, $zero, 0x1
    ctx->r11 = ADD32(0, 0X1);
    // 0x803F61E0: beq         $t1, $t2, L_803F6208
    if (ctx->r9 == ctx->r10) {
        // 0x803F61E4: nop
    
            goto L_803F6208;
    }
    // 0x803F61E4: nop

    // 0x803F61E8: jr          $ra
    // 0x803F61EC: sb          $t3, 0x4($a1)
    MEM_B(0X4, ctx->r5) = ctx->r11;
    return;
    // 0x803F61EC: sb          $t3, 0x4($a1)
    MEM_B(0X4, ctx->r5) = ctx->r11;
L_803F61F0:
    // 0x803F61F0: lb          $t4, 0x41($v0)
    ctx->r12 = MEM_B(ctx->r2, 0X41);
    // 0x803F61F4: lb          $t5, 0x4C($v0)
    ctx->r13 = MEM_B(ctx->r2, 0X4C);
    // 0x803F61F8: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x803F61FC: beq         $t4, $t5, L_803F6208
    if (ctx->r12 == ctx->r13) {
        // 0x803F6200: nop
    
            goto L_803F6208;
    }
    // 0x803F6200: nop

    // 0x803F6204: sb          $t6, 0x4($a1)
    MEM_B(0X4, ctx->r5) = ctx->r14;
L_803F6208:
    // 0x803F6208: jr          $ra
    // 0x803F620C: nop

    return;
    // 0x803F620C: nop

;}
RECOMP_FUNC void func_803F6210(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803F6210: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x803F6214: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x803F6218: lui         $a0, 0x803F
    ctx->r4 = S32(0X803F << 16);
    // 0x803F621C: addiu       $a0, $a0, 0x6264
    ctx->r4 = ADD32(ctx->r4, 0X6264);
    // 0x803F6220: jal         0x800293DC
    // 0x803F6224: addiu       $a1, $zero, 0xA
    ctx->r5 = ADD32(0, 0XA);
    func_800293DC(rdram, ctx);
        goto after_0;
    // 0x803F6224: addiu       $a1, $zero, 0xA
    ctx->r5 = ADD32(0, 0XA);
    after_0:
    // 0x803F6228: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x803F622C: lw          $a1, 0x14($v0)
    ctx->r5 = MEM_W(ctx->r2, 0X14);
    // 0x803F6230: lbu         $a0, -0x326C($a0)
    ctx->r4 = MEM_BU(ctx->r4, -0X326C);
    // 0x803F6234: lui         $a2, 0x803C
    ctx->r6 = S32(0X803C << 16);
    // 0x803F6238: lui         $a3, 0x8040
    ctx->r7 = S32(0X8040 << 16);
    // 0x803F623C: addiu       $t6, $zero, 0xB
    ctx->r14 = ADD32(0, 0XB);
    // 0x803F6240: sw          $t6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r14;
    // 0x803F6244: addiu       $a3, $a3, -0x4F40
    ctx->r7 = ADD32(ctx->r7, -0X4F40);
    // 0x803F6248: addiu       $a2, $a2, 0x6BB4
    ctx->r6 = ADD32(ctx->r6, 0X6BB4);
    // 0x803F624C: jal         0x8004C5DC
    // 0x803F6250: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    func_8004C5DC(rdram, ctx);
        goto after_1;
    // 0x803F6250: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_1:
    // 0x803F6254: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x803F6258: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x803F625C: jr          $ra
    // 0x803F6260: nop

    return;
    // 0x803F6260: nop

;}
RECOMP_FUNC void func_803F6264(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803F6264: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x803F6268: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x803F626C: lw          $v0, 0x8($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X8);
    // 0x803F6270: lui         $a0, 0x8005
    ctx->r4 = S32(0X8005 << 16);
    // 0x803F6274: lbu         $t6, 0x45($v0)
    ctx->r14 = MEM_BU(ctx->r2, 0X45);
    // 0x803F6278: addiu       $a0, $a0, -0x3230
    ctx->r4 = ADD32(ctx->r4, -0X3230);
    // 0x803F627C: bne         $t6, $zero, L_803F6294
    if (ctx->r14 != 0) {
        // 0x803F6280: nop
    
            goto L_803F6294;
    }
    // 0x803F6280: nop

    // 0x803F6284: lbu         $t7, 0x49($v0)
    ctx->r15 = MEM_BU(ctx->r2, 0X49);
    // 0x803F6288: nop

    // 0x803F628C: beq         $t7, $zero, L_803F6318
    if (ctx->r15 == 0) {
        // 0x803F6290: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_803F6318;
    }
    // 0x803F6290: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_803F6294:
    // 0x803F6294: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
    // 0x803F6298: jal         0x8002A468
    // 0x803F629C: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    func_8002A468(rdram, ctx);
        goto after_0;
    // 0x803F629C: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    after_0:
    // 0x803F62A0: lw          $v0, 0x24($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X24);
    // 0x803F62A4: lw          $a1, 0x2C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X2C);
    // 0x803F62A8: lbu         $v1, 0x44($v0)
    ctx->r3 = MEM_BU(ctx->r2, 0X44);
    // 0x803F62AC: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x803F62B0: beq         $v1, $zero, L_803F62F0
    if (ctx->r3 == 0) {
        // 0x803F62B4: lui         $a2, 0x803C
        ctx->r6 = S32(0X803C << 16);
            goto L_803F62F0;
    }
    // 0x803F62B4: lui         $a2, 0x803C
    ctx->r6 = S32(0X803C << 16);
    // 0x803F62B8: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x803F62BC: bne         $v1, $at, L_803F6314
    if (ctx->r3 != ctx->r1) {
        // 0x803F62C0: lui         $a0, 0x8012
        ctx->r4 = S32(0X8012 << 16);
            goto L_803F6314;
    }
    // 0x803F62C0: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x803F62C4: lbu         $a0, -0x326C($a0)
    ctx->r4 = MEM_BU(ctx->r4, -0X326C);
    // 0x803F62C8: lui         $a2, 0x803C
    ctx->r6 = S32(0X803C << 16);
    // 0x803F62CC: lui         $a3, 0x8040
    ctx->r7 = S32(0X8040 << 16);
    // 0x803F62D0: addiu       $t8, $zero, 0xB
    ctx->r24 = ADD32(0, 0XB);
    // 0x803F62D4: sw          $t8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r24;
    // 0x803F62D8: addiu       $a3, $a3, -0x4F40
    ctx->r7 = ADD32(ctx->r7, -0X4F40);
    // 0x803F62DC: addiu       $a2, $a2, 0x6BB4
    ctx->r6 = ADD32(ctx->r6, 0X6BB4);
    // 0x803F62E0: jal         0x8004C5DC
    // 0x803F62E4: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    func_8004C5DC(rdram, ctx);
        goto after_1;
    // 0x803F62E4: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_1:
    // 0x803F62E8: b           L_803F6318
    // 0x803F62EC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_803F6318;
    // 0x803F62EC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_803F62F0:
    // 0x803F62F0: lbu         $a0, -0x326C($a0)
    ctx->r4 = MEM_BU(ctx->r4, -0X326C);
    // 0x803F62F4: lui         $a3, 0x8040
    ctx->r7 = S32(0X8040 << 16);
    // 0x803F62F8: addiu       $t9, $zero, 0xB
    ctx->r25 = ADD32(0, 0XB);
    // 0x803F62FC: addiu       $t0, $zero, 0x5
    ctx->r8 = ADD32(0, 0X5);
    // 0x803F6300: sw          $t0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r8;
    // 0x803F6304: sw          $t9, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r25;
    // 0x803F6308: addiu       $a3, $a3, -0x4F40
    ctx->r7 = ADD32(ctx->r7, -0X4F40);
    // 0x803F630C: jal         0x8004C5DC
    // 0x803F6310: addiu       $a2, $a2, 0x6BB4
    ctx->r6 = ADD32(ctx->r6, 0X6BB4);
    func_8004C5DC(rdram, ctx);
        goto after_2;
    // 0x803F6310: addiu       $a2, $a2, 0x6BB4
    ctx->r6 = ADD32(ctx->r6, 0X6BB4);
    after_2:
L_803F6314:
    // 0x803F6314: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_803F6318:
    // 0x803F6318: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x803F631C: jr          $ra
    // 0x803F6320: nop

    return;
    // 0x803F6320: nop

;}
RECOMP_FUNC void func_803F6324(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803F6324: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x803F6328: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x803F632C: lui         $a0, 0x803F
    ctx->r4 = S32(0X803F << 16);
    // 0x803F6330: jal         0x80029220
    // 0x803F6334: addiu       $a0, $a0, 0x6390
    ctx->r4 = ADD32(ctx->r4, 0X6390);
    func_80029220(rdram, ctx);
        goto after_0;
    // 0x803F6334: addiu       $a0, $a0, 0x6390
    ctx->r4 = ADD32(ctx->r4, 0X6390);
    after_0:
    // 0x803F6338: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x803F633C: lbu         $a0, -0x326C($a0)
    ctx->r4 = MEM_BU(ctx->r4, -0X326C);
    // 0x803F6340: lui         $a2, 0x8040
    ctx->r6 = S32(0X8040 << 16);
    // 0x803F6344: addiu       $t6, $zero, 0xB
    ctx->r14 = ADD32(0, 0XB);
    // 0x803F6348: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x803F634C: addiu       $a2, $a2, -0x4EF8
    ctx->r6 = ADD32(ctx->r6, -0X4EF8);
    // 0x803F6350: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x803F6354: jal         0x8004D0C8
    // 0x803F6358: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    func_8004D0C8(rdram, ctx);
        goto after_1;
    // 0x803F6358: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_1:
    // 0x803F635C: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x803F6360: lbu         $a0, -0x326C($a0)
    ctx->r4 = MEM_BU(ctx->r4, -0X326C);
    // 0x803F6364: lui         $a2, 0x8040
    ctx->r6 = S32(0X8040 << 16);
    // 0x803F6368: addiu       $t7, $zero, 0xB
    ctx->r15 = ADD32(0, 0XB);
    // 0x803F636C: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x803F6370: addiu       $a2, $a2, -0x4EB8
    ctx->r6 = ADD32(ctx->r6, -0X4EB8);
    // 0x803F6374: addiu       $a1, $zero, 0xB
    ctx->r5 = ADD32(0, 0XB);
    // 0x803F6378: jal         0x8004D384
    // 0x803F637C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    func_8004D384(rdram, ctx);
        goto after_2;
    // 0x803F637C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_2:
    // 0x803F6380: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x803F6384: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x803F6388: jr          $ra
    // 0x803F638C: nop

    return;
    // 0x803F638C: nop

;}
RECOMP_FUNC void func_803F6390(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803F6390: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x803F6394: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x803F6398: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x803F639C: lw          $v0, 0x8($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X8);
    // 0x803F63A0: nop

    // 0x803F63A4: lbu         $t6, 0x45($v0)
    ctx->r14 = MEM_BU(ctx->r2, 0X45);
    // 0x803F63A8: nop

    // 0x803F63AC: bne         $t6, $zero, L_803F63C4
    if (ctx->r14 != 0) {
        // 0x803F63B0: nop
    
            goto L_803F63C4;
    }
    // 0x803F63B0: nop

    // 0x803F63B4: lbu         $t7, 0x49($v0)
    ctx->r15 = MEM_BU(ctx->r2, 0X49);
    // 0x803F63B8: nop

    // 0x803F63BC: beq         $t7, $zero, L_803F647C
    if (ctx->r15 == 0) {
        // 0x803F63C0: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_803F647C;
    }
    // 0x803F63C0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_803F63C4:
    // 0x803F63C4: lbu         $v1, 0x44($v0)
    ctx->r3 = MEM_BU(ctx->r2, 0X44);
    // 0x803F63C8: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x803F63CC: beq         $v1, $zero, L_803F6428
    if (ctx->r3 == 0) {
        // 0x803F63D0: or          $a0, $zero, $zero
        ctx->r4 = 0 | 0;
            goto L_803F6428;
    }
    // 0x803F63D0: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x803F63D4: bne         $v1, $at, L_803F6478
    if (ctx->r3 != ctx->r1) {
        // 0x803F63D8: lui         $a0, 0x8012
        ctx->r4 = S32(0X8012 << 16);
            goto L_803F6478;
    }
    // 0x803F63D8: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x803F63DC: lbu         $a0, -0x326C($a0)
    ctx->r4 = MEM_BU(ctx->r4, -0X326C);
    // 0x803F63E0: lui         $a2, 0x8040
    ctx->r6 = S32(0X8040 << 16);
    // 0x803F63E4: addiu       $t8, $zero, 0xB
    ctx->r24 = ADD32(0, 0XB);
    // 0x803F63E8: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    // 0x803F63EC: addiu       $a2, $a2, -0x4EF8
    ctx->r6 = ADD32(ctx->r6, -0X4EF8);
    // 0x803F63F0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x803F63F4: jal         0x8004D0C8
    // 0x803F63F8: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    func_8004D0C8(rdram, ctx);
        goto after_0;
    // 0x803F63F8: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_0:
    // 0x803F63FC: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x803F6400: lbu         $a0, -0x326C($a0)
    ctx->r4 = MEM_BU(ctx->r4, -0X326C);
    // 0x803F6404: lui         $a2, 0x8040
    ctx->r6 = S32(0X8040 << 16);
    // 0x803F6408: addiu       $t9, $zero, 0xB
    ctx->r25 = ADD32(0, 0XB);
    // 0x803F640C: sw          $t9, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r25;
    // 0x803F6410: addiu       $a2, $a2, -0x4EB8
    ctx->r6 = ADD32(ctx->r6, -0X4EB8);
    // 0x803F6414: addiu       $a1, $zero, 0xB
    ctx->r5 = ADD32(0, 0XB);
    // 0x803F6418: jal         0x8004D384
    // 0x803F641C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    func_8004D384(rdram, ctx);
        goto after_1;
    // 0x803F641C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_1:
    // 0x803F6420: b           L_803F647C
    // 0x803F6424: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_803F647C;
    // 0x803F6424: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_803F6428:
    // 0x803F6428: jal         0x8002F224
    // 0x803F642C: addiu       $a1, $zero, 0x15
    ctx->r5 = ADD32(0, 0X15);
    func_8002F224(rdram, ctx);
        goto after_2;
    // 0x803F642C: addiu       $a1, $zero, 0x15
    ctx->r5 = ADD32(0, 0X15);
    after_2:
    // 0x803F6430: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x803F6434: lbu         $a0, -0x326C($a0)
    ctx->r4 = MEM_BU(ctx->r4, -0X326C);
    // 0x803F6438: lui         $a2, 0x8040
    ctx->r6 = S32(0X8040 << 16);
    // 0x803F643C: addiu       $t0, $zero, 0x5
    ctx->r8 = ADD32(0, 0X5);
    // 0x803F6440: sw          $t0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r8;
    // 0x803F6444: addiu       $a2, $a2, -0x4EF8
    ctx->r6 = ADD32(ctx->r6, -0X4EF8);
    // 0x803F6448: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x803F644C: jal         0x8004D0C8
    // 0x803F6450: addiu       $a3, $zero, 0xB
    ctx->r7 = ADD32(0, 0XB);
    func_8004D0C8(rdram, ctx);
        goto after_3;
    // 0x803F6450: addiu       $a3, $zero, 0xB
    ctx->r7 = ADD32(0, 0XB);
    after_3:
    // 0x803F6454: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x803F6458: lbu         $a0, -0x326C($a0)
    ctx->r4 = MEM_BU(ctx->r4, -0X326C);
    // 0x803F645C: lui         $a2, 0x8040
    ctx->r6 = S32(0X8040 << 16);
    // 0x803F6460: addiu       $t1, $zero, 0x5
    ctx->r9 = ADD32(0, 0X5);
    // 0x803F6464: sw          $t1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r9;
    // 0x803F6468: addiu       $a2, $a2, -0x4EB8
    ctx->r6 = ADD32(ctx->r6, -0X4EB8);
    // 0x803F646C: addiu       $a1, $zero, 0xB
    ctx->r5 = ADD32(0, 0XB);
    // 0x803F6470: jal         0x8004D384
    // 0x803F6474: addiu       $a3, $zero, 0xB
    ctx->r7 = ADD32(0, 0XB);
    func_8004D384(rdram, ctx);
        goto after_4;
    // 0x803F6474: addiu       $a3, $zero, 0xB
    ctx->r7 = ADD32(0, 0XB);
    after_4:
L_803F6478:
    // 0x803F6478: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_803F647C:
    // 0x803F647C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x803F6480: jr          $ra
    // 0x803F6484: nop

    return;
    // 0x803F6484: nop

;}
RECOMP_FUNC void func_803F63A4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803F63A4: lbu         $t6, 0x45($v0)
    ctx->r14 = MEM_BU(ctx->r2, 0X45);
    // 0x803F63A8: nop

    // 0x803F63AC: bne         $t6, $zero, L_803F63C4
    if (ctx->r14 != 0) {
        // 0x803F63B0: nop
    
            goto L_803F63C4;
    }
    // 0x803F63B0: nop

    // 0x803F63B4: lbu         $t7, 0x49($v0)
    ctx->r15 = MEM_BU(ctx->r2, 0X49);
    // 0x803F63B8: nop

    // 0x803F63BC: beq         $t7, $zero, L_803F647C
    if (ctx->r15 == 0) {
        // 0x803F63C0: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_803F647C;
    }
    // 0x803F63C0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_803F63C4:
    // 0x803F63C4: lbu         $v1, 0x44($v0)
    ctx->r3 = MEM_BU(ctx->r2, 0X44);
    // 0x803F63C8: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x803F63CC: beq         $v1, $zero, L_803F6428
    if (ctx->r3 == 0) {
        // 0x803F63D0: or          $a0, $zero, $zero
        ctx->r4 = 0 | 0;
            goto L_803F6428;
    }
    // 0x803F63D0: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x803F63D4: bne         $v1, $at, L_803F6478
    if (ctx->r3 != ctx->r1) {
        // 0x803F63D8: lui         $a0, 0x8012
        ctx->r4 = S32(0X8012 << 16);
            goto L_803F6478;
    }
    // 0x803F63D8: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x803F63DC: lbu         $a0, -0x326C($a0)
    ctx->r4 = MEM_BU(ctx->r4, -0X326C);
    // 0x803F63E0: lui         $a2, 0x8040
    ctx->r6 = S32(0X8040 << 16);
    // 0x803F63E4: addiu       $t8, $zero, 0xB
    ctx->r24 = ADD32(0, 0XB);
    // 0x803F63E8: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    // 0x803F63EC: addiu       $a2, $a2, -0x4EF8
    ctx->r6 = ADD32(ctx->r6, -0X4EF8);
    // 0x803F63F0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x803F63F4: jal         0x8004D0C8
    // 0x803F63F8: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    func_8004D0C8(rdram, ctx);
        goto after_0;
    // 0x803F63F8: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_0:
    // 0x803F63FC: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x803F6400: lbu         $a0, -0x326C($a0)
    ctx->r4 = MEM_BU(ctx->r4, -0X326C);
    // 0x803F6404: lui         $a2, 0x8040
    ctx->r6 = S32(0X8040 << 16);
    // 0x803F6408: addiu       $t9, $zero, 0xB
    ctx->r25 = ADD32(0, 0XB);
    // 0x803F640C: sw          $t9, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r25;
    // 0x803F6410: addiu       $a2, $a2, -0x4EB8
    ctx->r6 = ADD32(ctx->r6, -0X4EB8);
    // 0x803F6414: addiu       $a1, $zero, 0xB
    ctx->r5 = ADD32(0, 0XB);
    // 0x803F6418: jal         0x8004D384
    // 0x803F641C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    func_8004D384(rdram, ctx);
        goto after_1;
    // 0x803F641C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_1:
    // 0x803F6420: b           L_803F647C
    // 0x803F6424: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_803F647C;
    // 0x803F6424: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_803F6428:
    // 0x803F6428: jal         0x8002F224
    // 0x803F642C: addiu       $a1, $zero, 0x15
    ctx->r5 = ADD32(0, 0X15);
    func_8002F224(rdram, ctx);
        goto after_2;
    // 0x803F642C: addiu       $a1, $zero, 0x15
    ctx->r5 = ADD32(0, 0X15);
    after_2:
    // 0x803F6430: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x803F6434: lbu         $a0, -0x326C($a0)
    ctx->r4 = MEM_BU(ctx->r4, -0X326C);
    // 0x803F6438: lui         $a2, 0x8040
    ctx->r6 = S32(0X8040 << 16);
    // 0x803F643C: addiu       $t0, $zero, 0x5
    ctx->r8 = ADD32(0, 0X5);
    // 0x803F6440: sw          $t0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r8;
    // 0x803F6444: addiu       $a2, $a2, -0x4EF8
    ctx->r6 = ADD32(ctx->r6, -0X4EF8);
    // 0x803F6448: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x803F644C: jal         0x8004D0C8
    // 0x803F6450: addiu       $a3, $zero, 0xB
    ctx->r7 = ADD32(0, 0XB);
    func_8004D0C8(rdram, ctx);
        goto after_3;
    // 0x803F6450: addiu       $a3, $zero, 0xB
    ctx->r7 = ADD32(0, 0XB);
    after_3:
    // 0x803F6454: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x803F6458: lbu         $a0, -0x326C($a0)
    ctx->r4 = MEM_BU(ctx->r4, -0X326C);
    // 0x803F645C: lui         $a2, 0x8040
    ctx->r6 = S32(0X8040 << 16);
    // 0x803F6460: addiu       $t1, $zero, 0x5
    ctx->r9 = ADD32(0, 0X5);
    // 0x803F6464: sw          $t1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r9;
    // 0x803F6468: addiu       $a2, $a2, -0x4EB8
    ctx->r6 = ADD32(ctx->r6, -0X4EB8);
    // 0x803F646C: addiu       $a1, $zero, 0xB
    ctx->r5 = ADD32(0, 0XB);
    // 0x803F6470: jal         0x8004D384
    // 0x803F6474: addiu       $a3, $zero, 0xB
    ctx->r7 = ADD32(0, 0XB);
    func_8004D384(rdram, ctx);
        goto after_4;
    // 0x803F6474: addiu       $a3, $zero, 0xB
    ctx->r7 = ADD32(0, 0XB);
    after_4:
L_803F6478:
    // 0x803F6478: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_803F647C:
    // 0x803F647C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x803F6480: jr          $ra
    // 0x803F6484: nop

    return;
    // 0x803F6484: nop

;}
RECOMP_FUNC void func_803F6488(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803F6488: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x803F648C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x803F6490: lui         $a0, 0x803F
    ctx->r4 = S32(0X803F << 16);
    // 0x803F6494: addiu       $a0, $a0, 0x64D4
    ctx->r4 = ADD32(ctx->r4, 0X64D4);
    // 0x803F6498: jal         0x800293DC
    // 0x803F649C: addiu       $a1, $zero, 0xA
    ctx->r5 = ADD32(0, 0XA);
    func_800293DC(rdram, ctx);
        goto after_0;
    // 0x803F649C: addiu       $a1, $zero, 0xA
    ctx->r5 = ADD32(0, 0XA);
    after_0:
    // 0x803F64A0: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x803F64A4: lbu         $a0, -0x326C($a0)
    ctx->r4 = MEM_BU(ctx->r4, -0X326C);
    // 0x803F64A8: lw          $a1, 0x14($v0)
    ctx->r5 = MEM_W(ctx->r2, 0X14);
    // 0x803F64AC: lui         $a2, 0x8040
    ctx->r6 = S32(0X8040 << 16);
    // 0x803F64B0: addiu       $t6, $zero, 0xB
    ctx->r14 = ADD32(0, 0XB);
    // 0x803F64B4: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x803F64B8: addiu       $a2, $a2, -0x4F40
    ctx->r6 = ADD32(ctx->r6, -0X4F40);
    // 0x803F64BC: jal         0x8004C9FC
    // 0x803F64C0: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    func_8004C9FC(rdram, ctx);
        goto after_1;
    // 0x803F64C0: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_1:
    // 0x803F64C4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x803F64C8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x803F64CC: jr          $ra
    // 0x803F64D0: nop

    return;
    // 0x803F64D0: nop

;}
RECOMP_FUNC void func_803F64D4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803F64D4: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x803F64D8: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x803F64DC: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x803F64E0: lw          $v0, 0x8($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X8);
    // 0x803F64E4: nop

    // 0x803F64E8: lbu         $t6, 0x45($v0)
    ctx->r14 = MEM_BU(ctx->r2, 0X45);
    // 0x803F64EC: nop

    // 0x803F64F0: bne         $t6, $zero, L_803F6508
    if (ctx->r14 != 0) {
        // 0x803F64F4: nop
    
            goto L_803F6508;
    }
    // 0x803F64F4: nop

    // 0x803F64F8: lbu         $t7, 0x49($v0)
    ctx->r15 = MEM_BU(ctx->r2, 0X49);
    // 0x803F64FC: nop

    // 0x803F6500: beq         $t7, $zero, L_803F6584
    if (ctx->r15 == 0) {
        // 0x803F6504: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_803F6584;
    }
    // 0x803F6504: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_803F6508:
    // 0x803F6508: lbu         $v1, 0x44($v0)
    ctx->r3 = MEM_BU(ctx->r2, 0X44);
    // 0x803F650C: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x803F6510: beq         $v1, $zero, L_803F6554
    if (ctx->r3 == 0) {
        // 0x803F6514: lui         $a0, 0x8005
        ctx->r4 = S32(0X8005 << 16);
            goto L_803F6554;
    }
    // 0x803F6514: lui         $a0, 0x8005
    ctx->r4 = S32(0X8005 << 16);
    // 0x803F6518: bne         $v1, $at, L_803F6580
    if (ctx->r3 != ctx->r1) {
        // 0x803F651C: lui         $a0, 0x8005
        ctx->r4 = S32(0X8005 << 16);
            goto L_803F6580;
    }
    // 0x803F651C: lui         $a0, 0x8005
    ctx->r4 = S32(0X8005 << 16);
    // 0x803F6520: jal         0x8002A468
    // 0x803F6524: addiu       $a0, $a0, -0x3230
    ctx->r4 = ADD32(ctx->r4, -0X3230);
    func_8002A468(rdram, ctx);
        goto after_0;
    // 0x803F6524: addiu       $a0, $a0, -0x3230
    ctx->r4 = ADD32(ctx->r4, -0X3230);
    after_0:
    // 0x803F6528: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x803F652C: lbu         $a0, -0x326C($a0)
    ctx->r4 = MEM_BU(ctx->r4, -0X326C);
    // 0x803F6530: lw          $a1, 0x24($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X24);
    // 0x803F6534: lui         $a2, 0x8040
    ctx->r6 = S32(0X8040 << 16);
    // 0x803F6538: addiu       $t8, $zero, 0xB
    ctx->r24 = ADD32(0, 0XB);
    // 0x803F653C: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    // 0x803F6540: addiu       $a2, $a2, -0x4F40
    ctx->r6 = ADD32(ctx->r6, -0X4F40);
    // 0x803F6544: jal         0x8004C9FC
    // 0x803F6548: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    func_8004C9FC(rdram, ctx);
        goto after_1;
    // 0x803F6548: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_1:
    // 0x803F654C: b           L_803F6584
    // 0x803F6550: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_803F6584;
    // 0x803F6550: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_803F6554:
    // 0x803F6554: jal         0x8002A468
    // 0x803F6558: addiu       $a0, $a0, -0x3230
    ctx->r4 = ADD32(ctx->r4, -0X3230);
    func_8002A468(rdram, ctx);
        goto after_2;
    // 0x803F6558: addiu       $a0, $a0, -0x3230
    ctx->r4 = ADD32(ctx->r4, -0X3230);
    after_2:
    // 0x803F655C: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x803F6560: lbu         $a0, -0x326C($a0)
    ctx->r4 = MEM_BU(ctx->r4, -0X326C);
    // 0x803F6564: lw          $a1, 0x24($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X24);
    // 0x803F6568: lui         $a2, 0x8040
    ctx->r6 = S32(0X8040 << 16);
    // 0x803F656C: addiu       $t9, $zero, 0x5
    ctx->r25 = ADD32(0, 0X5);
    // 0x803F6570: sw          $t9, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r25;
    // 0x803F6574: addiu       $a2, $a2, -0x4F40
    ctx->r6 = ADD32(ctx->r6, -0X4F40);
    // 0x803F6578: jal         0x8004C9FC
    // 0x803F657C: addiu       $a3, $zero, 0xB
    ctx->r7 = ADD32(0, 0XB);
    func_8004C9FC(rdram, ctx);
        goto after_3;
    // 0x803F657C: addiu       $a3, $zero, 0xB
    ctx->r7 = ADD32(0, 0XB);
    after_3:
L_803F6580:
    // 0x803F6580: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_803F6584:
    // 0x803F6584: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x803F6588: jr          $ra
    // 0x803F658C: nop

    return;
    // 0x803F658C: nop

;}
RECOMP_FUNC void func_803F6590(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803F6590: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x803F6594: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x803F6598: lui         $a0, 0x803F
    ctx->r4 = S32(0X803F << 16);
    // 0x803F659C: addiu       $a0, $a0, 0x65D0
    ctx->r4 = ADD32(ctx->r4, 0X65D0);
    // 0x803F65A0: jal         0x800293DC
    // 0x803F65A4: addiu       $a1, $zero, 0xA
    ctx->r5 = ADD32(0, 0XA);
    func_800293DC(rdram, ctx);
        goto after_0;
    // 0x803F65A4: addiu       $a1, $zero, 0xA
    ctx->r5 = ADD32(0, 0XA);
    after_0:
    // 0x803F65A8: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x803F65AC: lbu         $a0, -0x326C($a0)
    ctx->r4 = MEM_BU(ctx->r4, -0X326C);
    // 0x803F65B0: lw          $a1, 0x14($v0)
    ctx->r5 = MEM_W(ctx->r2, 0X14);
    // 0x803F65B4: lui         $a2, 0x8040
    ctx->r6 = S32(0X8040 << 16);
    // 0x803F65B8: jal         0x8004C7D4
    // 0x803F65BC: addiu       $a2, $a2, -0x4F40
    ctx->r6 = ADD32(ctx->r6, -0X4F40);
    func_8004C7D4(rdram, ctx);
        goto after_1;
    // 0x803F65BC: addiu       $a2, $a2, -0x4F40
    ctx->r6 = ADD32(ctx->r6, -0X4F40);
    after_1:
    // 0x803F65C0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x803F65C4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x803F65C8: jr          $ra
    // 0x803F65CC: nop

    return;
    // 0x803F65CC: nop

;}
RECOMP_FUNC void func_803F65D0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803F65D0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x803F65D4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x803F65D8: lw          $v1, 0x8($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X8);
    // 0x803F65DC: lui         $a0, 0x8005
    ctx->r4 = S32(0X8005 << 16);
    // 0x803F65E0: lbu         $v0, 0x44($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X44);
    // 0x803F65E4: nop

    // 0x803F65E8: beq         $v0, $zero, L_803F6644
    if (ctx->r2 == 0) {
        // 0x803F65EC: nop
    
            goto L_803F6644;
    }
    // 0x803F65EC: nop

    // 0x803F65F0: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x803F65F4: bne         $v0, $a0, L_803F6650
    if (ctx->r2 != ctx->r4) {
        // 0x803F65F8: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_803F6650;
    }
    // 0x803F65F8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x803F65FC: lbu         $v0, 0x46($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X46);
    // 0x803F6600: lui         $a2, 0x8040
    ctx->r6 = S32(0X8040 << 16);
    // 0x803F6604: beq         $v0, $zero, L_803F662C
    if (ctx->r2 == 0) {
        // 0x803F6608: nop
    
            goto L_803F662C;
    }
    // 0x803F6608: nop

    // 0x803F660C: bne         $v0, $a0, L_803F664C
    if (ctx->r2 != ctx->r4) {
        // 0x803F6610: lui         $a2, 0x8040
        ctx->r6 = S32(0X8040 << 16);
            goto L_803F664C;
    }
    // 0x803F6610: lui         $a2, 0x8040
    ctx->r6 = S32(0X8040 << 16);
    // 0x803F6614: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x803F6618: lbu         $a0, -0x326C($a0)
    ctx->r4 = MEM_BU(ctx->r4, -0X326C);
    // 0x803F661C: jal         0x8004CB3C
    // 0x803F6620: addiu       $a2, $a2, -0x4F40
    ctx->r6 = ADD32(ctx->r6, -0X4F40);
    func_8004CB3C(rdram, ctx);
        goto after_0;
    // 0x803F6620: addiu       $a2, $a2, -0x4F40
    ctx->r6 = ADD32(ctx->r6, -0X4F40);
    after_0:
    // 0x803F6624: b           L_803F6650
    // 0x803F6628: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_803F6650;
    // 0x803F6628: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_803F662C:
    // 0x803F662C: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x803F6630: lbu         $a0, -0x326C($a0)
    ctx->r4 = MEM_BU(ctx->r4, -0X326C);
    // 0x803F6634: jal         0x8004C7D4
    // 0x803F6638: addiu       $a2, $a2, -0x4F40
    ctx->r6 = ADD32(ctx->r6, -0X4F40);
    func_8004C7D4(rdram, ctx);
        goto after_1;
    // 0x803F6638: addiu       $a2, $a2, -0x4F40
    ctx->r6 = ADD32(ctx->r6, -0X4F40);
    after_1:
    // 0x803F663C: b           L_803F6650
    // 0x803F6640: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_803F6650;
    // 0x803F6640: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_803F6644:
    // 0x803F6644: jal         0x8002A468
    // 0x803F6648: addiu       $a0, $a0, -0x3230
    ctx->r4 = ADD32(ctx->r4, -0X3230);
    func_8002A468(rdram, ctx);
        goto after_2;
    // 0x803F6648: addiu       $a0, $a0, -0x3230
    ctx->r4 = ADD32(ctx->r4, -0X3230);
    after_2:
L_803F664C:
    // 0x803F664C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_803F6650:
    // 0x803F6650: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x803F6654: jr          $ra
    // 0x803F6658: nop

    return;
    // 0x803F6658: nop

;}
RECOMP_FUNC void func_803F665C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803F665C: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x803F6660: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x803F6664: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x803F6668: lw          $t6, 0x8($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X8);
    // 0x803F666C: lhu         $t7, 0x70($a0)
    ctx->r15 = MEM_HU(ctx->r4, 0X70);
    // 0x803F6670: lw          $v1, 0x8($t6)
    ctx->r3 = MEM_W(ctx->r14, 0X8);
    // 0x803F6674: sb          $t7, 0x27($sp)
    MEM_B(0X27, ctx->r29) = ctx->r15;
    // 0x803F6678: lbu         $t8, 0x45($v1)
    ctx->r24 = MEM_BU(ctx->r3, 0X45);
    // 0x803F667C: or          $s0, $a1, $zero
    ctx->r16 = ctx->r5 | 0;
    // 0x803F6680: bne         $t8, $zero, L_803F66A8
    if (ctx->r24 != 0) {
        // 0x803F6684: nop
    
            goto L_803F66A8;
    }
    // 0x803F6684: nop

    // 0x803F6688: lbu         $t9, 0x48($v1)
    ctx->r25 = MEM_BU(ctx->r3, 0X48);
    // 0x803F668C: nop

    // 0x803F6690: bne         $t9, $zero, L_803F66A8
    if (ctx->r25 != 0) {
        // 0x803F6694: nop
    
            goto L_803F66A8;
    }
    // 0x803F6694: nop

    // 0x803F6698: lbu         $t0, 0x49($v1)
    ctx->r8 = MEM_BU(ctx->r3, 0X49);
    // 0x803F669C: nop

    // 0x803F66A0: beq         $t0, $zero, L_803F6760
    if (ctx->r8 == 0) {
        // 0x803F66A4: nop
    
            goto L_803F6760;
    }
    // 0x803F66A4: nop

L_803F66A8:
    // 0x803F66A8: lbu         $v0, 0x47($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X47);
    // 0x803F66AC: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x803F66B0: beq         $v0, $zero, L_803F66F4
    if (ctx->r2 == 0) {
        // 0x803F66B4: or          $a1, $s0, $zero
        ctx->r5 = ctx->r16 | 0;
            goto L_803F66F4;
    }
    // 0x803F66B4: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x803F66B8: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x803F66BC: bne         $v0, $at, L_803F670C
    if (ctx->r2 != ctx->r1) {
        // 0x803F66C0: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_803F670C;
    }
    // 0x803F66C0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x803F66C4: lui         $a1, 0x800B
    ctx->r5 = S32(0X800B << 16);
    // 0x803F66C8: addiu       $a1, $a1, -0x1060
    ctx->r5 = ADD32(ctx->r5, -0X1060);
    // 0x803F66CC: jal         0x8002B9DC
    // 0x803F66D0: sw          $v1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r3;
    func_8002B9DC(rdram, ctx);
        goto after_0;
    // 0x803F66D0: sw          $v1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r3;
    after_0:
    // 0x803F66D4: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x803F66D8: lbu         $a0, -0x326C($a0)
    ctx->r4 = MEM_BU(ctx->r4, -0X326C);
    // 0x803F66DC: lbu         $a2, 0x27($sp)
    ctx->r6 = MEM_BU(ctx->r29, 0X27);
    // 0x803F66E0: jal         0x8006DAD8
    // 0x803F66E4: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    func_8006DAD8(rdram, ctx);
        goto after_1;
    // 0x803F66E4: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_1:
    // 0x803F66E8: lw          $v1, 0x20($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X20);
    // 0x803F66EC: b           L_803F6710
    // 0x803F66F0: lbu         $v0, 0x44($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X44);
        goto L_803F6710;
    // 0x803F66F0: lbu         $v0, 0x44($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X44);
L_803F66F4:
    // 0x803F66F4: lbu         $a0, -0x326C($a0)
    ctx->r4 = MEM_BU(ctx->r4, -0X326C);
    // 0x803F66F8: lbu         $a2, 0x27($sp)
    ctx->r6 = MEM_BU(ctx->r29, 0X27);
    // 0x803F66FC: jal         0x8006DB98
    // 0x803F6700: sw          $v1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r3;
    func_8006DB98(rdram, ctx);
        goto after_2;
    // 0x803F6700: sw          $v1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r3;
    after_2:
    // 0x803F6704: lw          $v1, 0x20($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X20);
    // 0x803F6708: nop

L_803F670C:
    // 0x803F670C: lbu         $v0, 0x44($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X44);
L_803F6710:
    // 0x803F6710: lbu         $t3, 0x27($sp)
    ctx->r11 = MEM_BU(ctx->r29, 0X27);
    // 0x803F6714: beq         $v0, $zero, L_803F674C
    if (ctx->r2 == 0) {
        // 0x803F6718: slti        $at, $t3, 0xB
        ctx->r1 = SIGNED(ctx->r11) < 0XB ? 1 : 0;
            goto L_803F674C;
    }
    // 0x803F6718: slti        $at, $t3, 0xB
    ctx->r1 = SIGNED(ctx->r11) < 0XB ? 1 : 0;
    // 0x803F671C: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x803F6720: bne         $v0, $at, L_803F6760
    if (ctx->r2 != ctx->r1) {
        // 0x803F6724: nop
    
            goto L_803F6760;
    }
    // 0x803F6724: nop

    // 0x803F6728: lbu         $t1, 0x27($sp)
    ctx->r9 = MEM_BU(ctx->r29, 0X27);
    // 0x803F672C: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x803F6730: slti        $at, $t1, 0xB
    ctx->r1 = SIGNED(ctx->r9) < 0XB ? 1 : 0;
    // 0x803F6734: bne         $at, $zero, L_803F6744
    if (ctx->r1 != 0) {
        // 0x803F6738: nop
    
            goto L_803F6744;
    }
    // 0x803F6738: nop

    // 0x803F673C: b           L_803F6760
    // 0x803F6740: sb          $zero, 0x4($s0)
    MEM_B(0X4, ctx->r16) = 0;
        goto L_803F6760;
    // 0x803F6740: sb          $zero, 0x4($s0)
    MEM_B(0X4, ctx->r16) = 0;
L_803F6744:
    // 0x803F6744: b           L_803F6760
    // 0x803F6748: sb          $t2, 0x4($s0)
    MEM_B(0X4, ctx->r16) = ctx->r10;
        goto L_803F6760;
    // 0x803F6748: sb          $t2, 0x4($s0)
    MEM_B(0X4, ctx->r16) = ctx->r10;
L_803F674C:
    // 0x803F674C: bne         $at, $zero, L_803F675C
    if (ctx->r1 != 0) {
        // 0x803F6750: addiu       $t4, $zero, 0x1
        ctx->r12 = ADD32(0, 0X1);
            goto L_803F675C;
    }
    // 0x803F6750: addiu       $t4, $zero, 0x1
    ctx->r12 = ADD32(0, 0X1);
    // 0x803F6754: b           L_803F6760
    // 0x803F6758: sb          $t4, 0x4($s0)
    MEM_B(0X4, ctx->r16) = ctx->r12;
        goto L_803F6760;
    // 0x803F6758: sb          $t4, 0x4($s0)
    MEM_B(0X4, ctx->r16) = ctx->r12;
L_803F675C:
    // 0x803F675C: sb          $zero, 0x4($s0)
    MEM_B(0X4, ctx->r16) = 0;
L_803F6760:
    // 0x803F6760: lw          $a1, 0x38($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X38);
    // 0x803F6764: jal         0x8002BEC4
    // 0x803F6768: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8002BEC4(rdram, ctx);
        goto after_3;
    // 0x803F6768: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_3:
    // 0x803F676C: lw          $a1, 0x38($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X38);
    // 0x803F6770: jal         0x8002BFF4
    // 0x803F6774: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8002BFF4(rdram, ctx);
        goto after_4;
    // 0x803F6774: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_4:
    // 0x803F6778: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x803F677C: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x803F6780: jr          $ra
    // 0x803F6784: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x803F6784: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_803F6788(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803F6788: lw          $t6, 0x8($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X8);
    // 0x803F678C: nop

    // 0x803F6790: lw          $v0, 0x8($t6)
    ctx->r2 = MEM_W(ctx->r14, 0X8);
    // 0x803F6794: nop

    // 0x803F6798: lbu         $t7, 0x45($v0)
    ctx->r15 = MEM_BU(ctx->r2, 0X45);
    // 0x803F679C: nop

    // 0x803F67A0: beq         $t7, $zero, L_803F67D0
    if (ctx->r15 == 0) {
        // 0x803F67A4: nop
    
            goto L_803F67D0;
    }
    // 0x803F67A4: nop

    // 0x803F67A8: lbu         $t8, 0x44($v0)
    ctx->r24 = MEM_BU(ctx->r2, 0X44);
    // 0x803F67AC: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x803F67B0: bne         $t8, $at, L_803F67C8
    if (ctx->r24 != ctx->r1) {
        // 0x803F67B4: lui         $t0, 0x803C
        ctx->r8 = S32(0X803C << 16);
            goto L_803F67C8;
    }
    // 0x803F67B4: lui         $t0, 0x803C
    ctx->r8 = S32(0X803C << 16);
    // 0x803F67B8: lui         $t9, 0x803C
    ctx->r25 = S32(0X803C << 16);
    // 0x803F67BC: addiu       $t9, $t9, 0x6764
    ctx->r25 = ADD32(ctx->r25, 0X6764);
    // 0x803F67C0: jr          $ra
    // 0x803F67C4: sw          $t9, 0x30($a1)
    MEM_W(0X30, ctx->r5) = ctx->r25;
    return;
    // 0x803F67C4: sw          $t9, 0x30($a1)
    MEM_W(0X30, ctx->r5) = ctx->r25;
L_803F67C8:
    // 0x803F67C8: addiu       $t0, $t0, 0x6C20
    ctx->r8 = ADD32(ctx->r8, 0X6C20);
    // 0x803F67CC: sw          $t0, 0x30($a1)
    MEM_W(0X30, ctx->r5) = ctx->r8;
L_803F67D0:
    // 0x803F67D0: jr          $ra
    // 0x803F67D4: nop

    return;
    // 0x803F67D4: nop

;}
RECOMP_FUNC void func_803F67D8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803F67D8: lw          $t6, 0x8($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X8);
    // 0x803F67DC: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x803F67E0: lw          $v0, 0x8($t6)
    ctx->r2 = MEM_W(ctx->r14, 0X8);
    // 0x803F67E4: lui         $t9, 0x803C
    ctx->r25 = S32(0X803C << 16);
    // 0x803F67E8: lbu         $t7, 0x44($v0)
    ctx->r15 = MEM_BU(ctx->r2, 0X44);
    // 0x803F67EC: addiu       $t9, $t9, 0x67E8
    ctx->r25 = ADD32(ctx->r25, 0X67E8);
    // 0x803F67F0: bne         $t7, $at, L_803F6804
    if (ctx->r15 != ctx->r1) {
        // 0x803F67F4: lui         $t8, 0x803C
        ctx->r24 = S32(0X803C << 16);
            goto L_803F6804;
    }
    // 0x803F67F4: lui         $t8, 0x803C
    ctx->r24 = S32(0X803C << 16);
    // 0x803F67F8: addiu       $t8, $t8, 0x6710
    ctx->r24 = ADD32(ctx->r24, 0X6710);
    // 0x803F67FC: jr          $ra
    // 0x803F6800: sw          $t8, 0x30($a1)
    MEM_W(0X30, ctx->r5) = ctx->r24;
    return;
    // 0x803F6800: sw          $t8, 0x30($a1)
    MEM_W(0X30, ctx->r5) = ctx->r24;
L_803F6804:
    // 0x803F6804: sw          $t9, 0x30($a1)
    MEM_W(0X30, ctx->r5) = ctx->r25;
    // 0x803F6808: jr          $ra
    // 0x803F680C: nop

    return;
    // 0x803F680C: nop

;}
RECOMP_FUNC void func_803F6810(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803F6810: lw          $t6, 0x8($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X8);
    // 0x803F6814: nop

    // 0x803F6818: lw          $v0, 0x8($t6)
    ctx->r2 = MEM_W(ctx->r14, 0X8);
    // 0x803F681C: nop

    // 0x803F6820: lbu         $t7, 0x45($v0)
    ctx->r15 = MEM_BU(ctx->r2, 0X45);
    // 0x803F6824: nop

    // 0x803F6828: beq         $t7, $zero, L_803F6858
    if (ctx->r15 == 0) {
        // 0x803F682C: nop
    
            goto L_803F6858;
    }
    // 0x803F682C: nop

    // 0x803F6830: lbu         $t8, 0x44($v0)
    ctx->r24 = MEM_BU(ctx->r2, 0X44);
    // 0x803F6834: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x803F6838: bne         $t8, $at, L_803F6850
    if (ctx->r24 != ctx->r1) {
        // 0x803F683C: lui         $t0, 0x803C
        ctx->r8 = S32(0X803C << 16);
            goto L_803F6850;
    }
    // 0x803F683C: lui         $t0, 0x803C
    ctx->r8 = S32(0X803C << 16);
    // 0x803F6840: lui         $t9, 0x803C
    ctx->r25 = S32(0X803C << 16);
    // 0x803F6844: addiu       $t9, $t9, 0x6734
    ctx->r25 = ADD32(ctx->r25, 0X6734);
    // 0x803F6848: jr          $ra
    // 0x803F684C: sw          $t9, 0x30($a1)
    MEM_W(0X30, ctx->r5) = ctx->r25;
    return;
    // 0x803F684C: sw          $t9, 0x30($a1)
    MEM_W(0X30, ctx->r5) = ctx->r25;
L_803F6850:
    // 0x803F6850: addiu       $t0, $t0, 0x6C14
    ctx->r8 = ADD32(ctx->r8, 0X6C14);
    // 0x803F6854: sw          $t0, 0x30($a1)
    MEM_W(0X30, ctx->r5) = ctx->r8;
L_803F6858:
    // 0x803F6858: jr          $ra
    // 0x803F685C: nop

    return;
    // 0x803F685C: nop

;}
RECOMP_FUNC void func_803F6860(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803F6860: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x803F6864: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x803F6868: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x803F686C: lw          $t6, 0x8($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X8);
    // 0x803F6870: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x803F6874: lw          $v1, 0x8($t6)
    ctx->r3 = MEM_W(ctx->r14, 0X8);
    // 0x803F6878: nop

    // 0x803F687C: lb          $v0, 0x38($v1)
    ctx->r2 = MEM_B(ctx->r3, 0X38);
    // 0x803F6880: nop

    // 0x803F6884: beq         $v0, $at, L_803F68A0
    if (ctx->r2 == ctx->r1) {
        // 0x803F6888: addiu       $at, $zero, 0x2
        ctx->r1 = ADD32(0, 0X2);
            goto L_803F68A0;
    }
    // 0x803F6888: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x803F688C: beq         $v0, $at, L_803F68D8
    if (ctx->r2 == ctx->r1) {
        // 0x803F6890: addiu       $t7, $zero, 0xA
        ctx->r15 = ADD32(0, 0XA);
            goto L_803F68D8;
    }
    // 0x803F6890: addiu       $t7, $zero, 0xA
    ctx->r15 = ADD32(0, 0XA);
    // 0x803F6894: sh          $t7, 0x38($a0)
    MEM_H(0X38, ctx->r4) = ctx->r15;
    // 0x803F6898: b           L_803F6904
    // 0x803F689C: sh          $zero, 0x3A($a0)
    MEM_H(0X3A, ctx->r4) = 0;
        goto L_803F6904;
    // 0x803F689C: sh          $zero, 0x3A($a0)
    MEM_H(0X3A, ctx->r4) = 0;
L_803F68A0:
    // 0x803F68A0: lb          $v0, 0x3D($v1)
    ctx->r2 = MEM_B(ctx->r3, 0X3D);
    // 0x803F68A4: addiu       $at, $zero, 0x10
    ctx->r1 = ADD32(0, 0X10);
    // 0x803F68A8: beq         $v0, $at, L_803F68C4
    if (ctx->r2 == ctx->r1) {
        // 0x803F68AC: addiu       $at, $zero, 0x11
        ctx->r1 = ADD32(0, 0X11);
            goto L_803F68C4;
    }
    // 0x803F68AC: addiu       $at, $zero, 0x11
    ctx->r1 = ADD32(0, 0X11);
    // 0x803F68B0: beq         $v0, $at, L_803F68C4
    if (ctx->r2 == ctx->r1) {
        // 0x803F68B4: addiu       $t8, $zero, 0xA
        ctx->r24 = ADD32(0, 0XA);
            goto L_803F68C4;
    }
    // 0x803F68B4: addiu       $t8, $zero, 0xA
    ctx->r24 = ADD32(0, 0XA);
    // 0x803F68B8: sh          $t8, 0x38($a0)
    MEM_H(0X38, ctx->r4) = ctx->r24;
    // 0x803F68BC: b           L_803F6904
    // 0x803F68C0: sh          $zero, 0x3A($a0)
    MEM_H(0X3A, ctx->r4) = 0;
        goto L_803F6904;
    // 0x803F68C0: sh          $zero, 0x3A($a0)
    MEM_H(0X3A, ctx->r4) = 0;
L_803F68C4:
    // 0x803F68C4: jal         0x8006F678
    // 0x803F68C8: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_8006F678(rdram, ctx);
        goto after_0;
    // 0x803F68C8: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x803F68CC: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x803F68D0: b           L_803F6908
    // 0x803F68D4: lhu         $v0, 0x3A($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X3A);
        goto L_803F6908;
    // 0x803F68D4: lhu         $v0, 0x3A($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X3A);
L_803F68D8:
    // 0x803F68D8: lb          $t9, 0x3C($v1)
    ctx->r25 = MEM_B(ctx->r3, 0X3C);
    // 0x803F68DC: addiu       $t0, $zero, 0xA
    ctx->r8 = ADD32(0, 0XA);
    // 0x803F68E0: bne         $t9, $zero, L_803F68FC
    if (ctx->r25 != 0) {
        // 0x803F68E4: nop
    
            goto L_803F68FC;
    }
    // 0x803F68E4: nop

    // 0x803F68E8: jal         0x8006F678
    // 0x803F68EC: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_8006F678(rdram, ctx);
        goto after_1;
    // 0x803F68EC: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_1:
    // 0x803F68F0: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x803F68F4: b           L_803F6908
    // 0x803F68F8: lhu         $v0, 0x3A($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X3A);
        goto L_803F6908;
    // 0x803F68F8: lhu         $v0, 0x3A($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X3A);
L_803F68FC:
    // 0x803F68FC: sh          $t0, 0x38($a0)
    MEM_H(0X38, ctx->r4) = ctx->r8;
    // 0x803F6900: sh          $zero, 0x3A($a0)
    MEM_H(0X3A, ctx->r4) = 0;
L_803F6904:
    // 0x803F6904: lhu         $v0, 0x3A($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X3A);
L_803F6908:
    // 0x803F6908: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    // 0x803F690C: beq         $v0, $zero, L_803F6934
    if (ctx->r2 == 0) {
        // 0x803F6910: addiu       $a1, $zero, 0x1
        ctx->r5 = ADD32(0, 0X1);
            goto L_803F6934;
    }
    // 0x803F6910: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x803F6914: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x803F6918: bne         $v0, $at, L_803F693C
    if (ctx->r2 != ctx->r1) {
        // 0x803F691C: addiu       $a1, $zero, 0x1
        ctx->r5 = ADD32(0, 0X1);
            goto L_803F693C;
    }
    // 0x803F691C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x803F6920: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    // 0x803F6924: jal         0x8002135C
    // 0x803F6928: addiu       $a2, $zero, 0xDB
    ctx->r6 = ADD32(0, 0XDB);
    func_8002135C(rdram, ctx);
        goto after_2;
    // 0x803F6928: addiu       $a2, $zero, 0xDB
    ctx->r6 = ADD32(0, 0XDB);
    after_2:
    // 0x803F692C: b           L_803F6940
    // 0x803F6930: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_803F6940;
    // 0x803F6930: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_803F6934:
    // 0x803F6934: jal         0x8002135C
    // 0x803F6938: addiu       $a2, $zero, 0xDA
    ctx->r6 = ADD32(0, 0XDA);
    func_8002135C(rdram, ctx);
        goto after_3;
    // 0x803F6938: addiu       $a2, $zero, 0xDA
    ctx->r6 = ADD32(0, 0XDA);
    after_3:
L_803F693C:
    // 0x803F693C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_803F6940:
    // 0x803F6940: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x803F6944: jr          $ra
    // 0x803F6948: nop

    return;
    // 0x803F6948: nop

;}
RECOMP_FUNC void func_803F694C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803F694C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x803F6950: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x803F6954: lw          $t6, 0x8($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X8);
    // 0x803F6958: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x803F695C: lw          $v0, 0x8($t6)
    ctx->r2 = MEM_W(ctx->r14, 0X8);
    // 0x803F6960: or          $a3, $a1, $zero
    ctx->r7 = ctx->r5 | 0;
    // 0x803F6964: lb          $t7, 0x38($v0)
    ctx->r15 = MEM_B(ctx->r2, 0X38);
    // 0x803F6968: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x803F696C: bne         $t7, $at, L_803F69B0
    if (ctx->r15 != ctx->r1) {
        // 0x803F6970: addiu       $t1, $zero, 0xA
        ctx->r9 = ADD32(0, 0XA);
            goto L_803F69B0;
    }
    // 0x803F6970: addiu       $t1, $zero, 0xA
    ctx->r9 = ADD32(0, 0XA);
    // 0x803F6974: sb          $t8, 0x4($a1)
    MEM_B(0X4, ctx->r5) = ctx->r24;
    // 0x803F6978: lb          $t9, 0x3C($v0)
    ctx->r25 = MEM_B(ctx->r2, 0X3C);
    // 0x803F697C: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x803F6980: bne         $t9, $at, L_803F69A4
    if (ctx->r25 != ctx->r1) {
        // 0x803F6984: addiu       $t0, $zero, 0xA
        ctx->r8 = ADD32(0, 0XA);
            goto L_803F69A4;
    }
    // 0x803F6984: addiu       $t0, $zero, 0xA
    ctx->r8 = ADD32(0, 0XA);
    // 0x803F6988: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x803F698C: jal         0x8006F678
    // 0x803F6990: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    func_8006F678(rdram, ctx);
        goto after_0;
    // 0x803F6990: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    after_0:
    // 0x803F6994: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x803F6998: lw          $a3, 0x1C($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X1C);
    // 0x803F699C: b           L_803F69C0
    // 0x803F69A0: lhu         $v0, 0x3A($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X3A);
        goto L_803F69C0;
    // 0x803F69A0: lhu         $v0, 0x3A($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X3A);
L_803F69A4:
    // 0x803F69A4: sh          $t0, 0x38($a0)
    MEM_H(0X38, ctx->r4) = ctx->r8;
    // 0x803F69A8: b           L_803F69BC
    // 0x803F69AC: sh          $zero, 0x3A($a0)
    MEM_H(0X3A, ctx->r4) = 0;
        goto L_803F69BC;
    // 0x803F69AC: sh          $zero, 0x3A($a0)
    MEM_H(0X3A, ctx->r4) = 0;
L_803F69B0:
    // 0x803F69B0: sh          $t1, 0x38($a0)
    MEM_H(0X38, ctx->r4) = ctx->r9;
    // 0x803F69B4: sh          $zero, 0x3A($a0)
    MEM_H(0X3A, ctx->r4) = 0;
    // 0x803F69B8: sb          $zero, 0x4($a3)
    MEM_B(0X4, ctx->r7) = 0;
L_803F69BC:
    // 0x803F69BC: lhu         $v0, 0x3A($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X3A);
L_803F69C0:
    // 0x803F69C0: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
    // 0x803F69C4: beq         $v0, $zero, L_803F69EC
    if (ctx->r2 == 0) {
        // 0x803F69C8: addiu       $a1, $zero, 0x1
        ctx->r5 = ADD32(0, 0X1);
            goto L_803F69EC;
    }
    // 0x803F69C8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x803F69CC: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x803F69D0: bne         $v0, $at, L_803F69F4
    if (ctx->r2 != ctx->r1) {
        // 0x803F69D4: or          $a0, $a3, $zero
        ctx->r4 = ctx->r7 | 0;
            goto L_803F69F4;
    }
    // 0x803F69D4: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
    // 0x803F69D8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x803F69DC: jal         0x8002135C
    // 0x803F69E0: addiu       $a2, $zero, 0xDB
    ctx->r6 = ADD32(0, 0XDB);
    func_8002135C(rdram, ctx);
        goto after_1;
    // 0x803F69E0: addiu       $a2, $zero, 0xDB
    ctx->r6 = ADD32(0, 0XDB);
    after_1:
    // 0x803F69E4: b           L_803F69F8
    // 0x803F69E8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_803F69F8;
    // 0x803F69E8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_803F69EC:
    // 0x803F69EC: jal         0x8002135C
    // 0x803F69F0: addiu       $a2, $zero, 0xDA
    ctx->r6 = ADD32(0, 0XDA);
    func_8002135C(rdram, ctx);
        goto after_2;
    // 0x803F69F0: addiu       $a2, $zero, 0xDA
    ctx->r6 = ADD32(0, 0XDA);
    after_2:
L_803F69F4:
    // 0x803F69F4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_803F69F8:
    // 0x803F69F8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x803F69FC: jr          $ra
    // 0x803F6A00: nop

    return;
    // 0x803F6A00: nop

;}
RECOMP_FUNC void func_803F6980(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803F6980: bne         $t9, $at, L_803F69A4
    if (ctx->r25 != ctx->r1) {
        // 0x803F6984: addiu       $t0, $zero, 0xA
        ctx->r8 = ADD32(0, 0XA);
            goto L_803F69A4;
    }
    // 0x803F6984: addiu       $t0, $zero, 0xA
    ctx->r8 = ADD32(0, 0XA);
    // 0x803F6988: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x803F698C: jal         0x8006F678
    // 0x803F6990: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    func_8006F678(rdram, ctx);
        goto after_0;
    // 0x803F6990: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    after_0:
    // 0x803F6994: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x803F6998: lw          $a3, 0x1C($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X1C);
    // 0x803F699C: b           L_803F69C0
    // 0x803F69A0: lhu         $v0, 0x3A($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X3A);
        goto L_803F69C0;
    // 0x803F69A0: lhu         $v0, 0x3A($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X3A);
L_803F69A4:
    // 0x803F69A4: sh          $t0, 0x38($a0)
    MEM_H(0X38, ctx->r4) = ctx->r8;
    // 0x803F69A8: b           L_803F69BC
    // 0x803F69AC: sh          $zero, 0x3A($a0)
    MEM_H(0X3A, ctx->r4) = 0;
        goto L_803F69BC;
    // 0x803F69AC: sh          $zero, 0x3A($a0)
    MEM_H(0X3A, ctx->r4) = 0;
    // 0x803F69B0: sh          $t1, 0x38($a0)
    MEM_H(0X38, ctx->r4) = ctx->r9;
    // 0x803F69B4: sh          $zero, 0x3A($a0)
    MEM_H(0X3A, ctx->r4) = 0;
    // 0x803F69B8: sb          $zero, 0x4($a3)
    MEM_B(0X4, ctx->r7) = 0;
L_803F69BC:
    // 0x803F69BC: lhu         $v0, 0x3A($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X3A);
L_803F69C0:
    // 0x803F69C0: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
    // 0x803F69C4: beq         $v0, $zero, L_803F69EC
    if (ctx->r2 == 0) {
        // 0x803F69C8: addiu       $a1, $zero, 0x1
        ctx->r5 = ADD32(0, 0X1);
            goto L_803F69EC;
    }
    // 0x803F69C8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x803F69CC: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x803F69D0: bne         $v0, $at, L_803F69F4
    if (ctx->r2 != ctx->r1) {
        // 0x803F69D4: or          $a0, $a3, $zero
        ctx->r4 = ctx->r7 | 0;
            goto L_803F69F4;
    }
    // 0x803F69D4: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
    // 0x803F69D8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x803F69DC: jal         0x8002135C
    // 0x803F69E0: addiu       $a2, $zero, 0xDB
    ctx->r6 = ADD32(0, 0XDB);
    func_8002135C(rdram, ctx);
        goto after_1;
    // 0x803F69E0: addiu       $a2, $zero, 0xDB
    ctx->r6 = ADD32(0, 0XDB);
    after_1:
    // 0x803F69E4: b           L_803F69F8
    // 0x803F69E8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_803F69F8;
    // 0x803F69E8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_803F69EC:
    // 0x803F69EC: jal         0x8002135C
    // 0x803F69F0: addiu       $a2, $zero, 0xDA
    ctx->r6 = ADD32(0, 0XDA);
    func_8002135C(rdram, ctx);
        goto after_2;
    // 0x803F69F0: addiu       $a2, $zero, 0xDA
    ctx->r6 = ADD32(0, 0XDA);
    after_2:
L_803F69F4:
    // 0x803F69F4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_803F69F8:
    // 0x803F69F8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x803F69FC: jr          $ra
    // 0x803F6A00: nop

    return;
    // 0x803F6A00: nop

;}
RECOMP_FUNC void func_803F6A04(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803F6A04: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x803F6A08: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x803F6A0C: lui         $a0, 0x803F
    ctx->r4 = S32(0X803F << 16);
    // 0x803F6A10: sw          $s4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r20;
    // 0x803F6A14: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x803F6A18: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x803F6A1C: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x803F6A20: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x803F6A24: addiu       $a0, $a0, 0x6AC8
    ctx->r4 = ADD32(ctx->r4, 0X6AC8);
    // 0x803F6A28: jal         0x800293DC
    // 0x803F6A2C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_800293DC(rdram, ctx);
        goto after_0;
    // 0x803F6A2C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_0:
    // 0x803F6A30: lw          $s0, 0x14($v0)
    ctx->r16 = MEM_W(ctx->r2, 0X14);
    // 0x803F6A34: addiu       $s4, $zero, -0x1
    ctx->r20 = ADD32(0, -0X1);
    // 0x803F6A38: beq         $s0, $s4, L_803F6AA8
    if (ctx->r16 == ctx->r20) {
        // 0x803F6A3C: or          $s1, $zero, $zero
        ctx->r17 = 0 | 0;
            goto L_803F6AA8;
    }
    // 0x803F6A3C: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    // 0x803F6A40: lui         $s3, 0x8040
    ctx->r19 = S32(0X8040 << 16);
    // 0x803F6A44: lui         $s2, 0x8040
    ctx->r18 = S32(0X8040 << 16);
    // 0x803F6A48: addiu       $s2, $s2, -0x4DE4
    ctx->r18 = ADD32(ctx->r18, -0X4DE4);
    // 0x803F6A4C: addiu       $s3, $s3, -0x4DD4
    ctx->r19 = ADD32(ctx->r19, -0X4DD4);
L_803F6A50:
    // 0x803F6A50: sll         $t6, $s1, 3
    ctx->r14 = S32(ctx->r17 << 3);
    // 0x803F6A54: addu        $v0, $s2, $t6
    ctx->r2 = ADD32(ctx->r18, ctx->r14);
    // 0x803F6A58: lhu         $a1, 0x4($v0)
    ctx->r5 = MEM_HU(ctx->r2, 0X4);
    // 0x803F6A5C: lw          $a3, 0x0($v0)
    ctx->r7 = MEM_W(ctx->r2, 0X0);
    // 0x803F6A60: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x803F6A64: jal         0x8004CD24
    // 0x803F6A68: addiu       $a2, $zero, 0xA
    ctx->r6 = ADD32(0, 0XA);
    func_8004CD24(rdram, ctx);
        goto after_1;
    // 0x803F6A68: addiu       $a2, $zero, 0xA
    ctx->r6 = ADD32(0, 0XA);
    after_1:
    // 0x803F6A6C: sll         $t7, $s1, 2
    ctx->r15 = S32(ctx->r17 << 2);
    // 0x803F6A70: addu        $v0, $s3, $t7
    ctx->r2 = ADD32(ctx->r19, ctx->r15);
    // 0x803F6A74: lh          $a1, 0x0($v0)
    ctx->r5 = MEM_H(ctx->r2, 0X0);
    // 0x803F6A78: lh          $a2, 0x2($v0)
    ctx->r6 = MEM_H(ctx->r2, 0X2);
    // 0x803F6A7C: jal         0x8004CD44
    // 0x803F6A80: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8004CD44(rdram, ctx);
        goto after_2;
    // 0x803F6A80: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_2:
    // 0x803F6A84: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x803F6A88: addiu       $a1, $zero, 0x7
    ctx->r5 = ADD32(0, 0X7);
    // 0x803F6A8C: jal         0x8002135C
    // 0x803F6A90: addiu       $a2, $zero, 0x28
    ctx->r6 = ADD32(0, 0X28);
    func_8002135C(rdram, ctx);
        goto after_3;
    // 0x803F6A90: addiu       $a2, $zero, 0x28
    ctx->r6 = ADD32(0, 0X28);
    after_3:
    // 0x803F6A94: lw          $s0, 0x0($s0)
    ctx->r16 = MEM_W(ctx->r16, 0X0);
    // 0x803F6A98: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x803F6A9C: andi        $t8, $s1, 0xFF
    ctx->r24 = ctx->r17 & 0XFF;
    // 0x803F6AA0: bne         $s0, $s4, L_803F6A50
    if (ctx->r16 != ctx->r20) {
        // 0x803F6AA4: or          $s1, $t8, $zero
        ctx->r17 = ctx->r24 | 0;
            goto L_803F6A50;
    }
    // 0x803F6AA4: or          $s1, $t8, $zero
    ctx->r17 = ctx->r24 | 0;
L_803F6AA8:
    // 0x803F6AA8: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x803F6AAC: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x803F6AB0: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x803F6AB4: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x803F6AB8: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x803F6ABC: lw          $s4, 0x28($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X28);
    // 0x803F6AC0: jr          $ra
    // 0x803F6AC4: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x803F6AC4: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_803F6A38(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803F6A38: beq         $s0, $s4, L_803F6AA8
    if (ctx->r16 == ctx->r20) {
        // 0x803F6A3C: or          $s1, $zero, $zero
        ctx->r17 = 0 | 0;
            goto L_803F6AA8;
    }
    // 0x803F6A3C: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    // 0x803F6A40: lui         $s3, 0x8040
    ctx->r19 = S32(0X8040 << 16);
    // 0x803F6A44: lui         $s2, 0x8040
    ctx->r18 = S32(0X8040 << 16);
    // 0x803F6A48: addiu       $s2, $s2, -0x4DE4
    ctx->r18 = ADD32(ctx->r18, -0X4DE4);
    // 0x803F6A4C: addiu       $s3, $s3, -0x4DD4
    ctx->r19 = ADD32(ctx->r19, -0X4DD4);
L_803F6A50:
    // 0x803F6A50: sll         $t6, $s1, 3
    ctx->r14 = S32(ctx->r17 << 3);
    // 0x803F6A54: addu        $v0, $s2, $t6
    ctx->r2 = ADD32(ctx->r18, ctx->r14);
    // 0x803F6A58: lhu         $a1, 0x4($v0)
    ctx->r5 = MEM_HU(ctx->r2, 0X4);
    // 0x803F6A5C: lw          $a3, 0x0($v0)
    ctx->r7 = MEM_W(ctx->r2, 0X0);
    // 0x803F6A60: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x803F6A64: jal         0x8004CD24
    // 0x803F6A68: addiu       $a2, $zero, 0xA
    ctx->r6 = ADD32(0, 0XA);
    func_8004CD24(rdram, ctx);
        goto after_0;
    // 0x803F6A68: addiu       $a2, $zero, 0xA
    ctx->r6 = ADD32(0, 0XA);
    after_0:
    // 0x803F6A6C: sll         $t7, $s1, 2
    ctx->r15 = S32(ctx->r17 << 2);
    // 0x803F6A70: addu        $v0, $s3, $t7
    ctx->r2 = ADD32(ctx->r19, ctx->r15);
    // 0x803F6A74: lh          $a1, 0x0($v0)
    ctx->r5 = MEM_H(ctx->r2, 0X0);
    // 0x803F6A78: lh          $a2, 0x2($v0)
    ctx->r6 = MEM_H(ctx->r2, 0X2);
    // 0x803F6A7C: jal         0x8004CD44
    // 0x803F6A80: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8004CD44(rdram, ctx);
        goto after_1;
    // 0x803F6A80: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
    // 0x803F6A84: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x803F6A88: addiu       $a1, $zero, 0x7
    ctx->r5 = ADD32(0, 0X7);
    // 0x803F6A8C: jal         0x8002135C
    // 0x803F6A90: addiu       $a2, $zero, 0x28
    ctx->r6 = ADD32(0, 0X28);
    func_8002135C(rdram, ctx);
        goto after_2;
    // 0x803F6A90: addiu       $a2, $zero, 0x28
    ctx->r6 = ADD32(0, 0X28);
    after_2:
    // 0x803F6A94: lw          $s0, 0x0($s0)
    ctx->r16 = MEM_W(ctx->r16, 0X0);
    // 0x803F6A98: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x803F6A9C: andi        $t8, $s1, 0xFF
    ctx->r24 = ctx->r17 & 0XFF;
    // 0x803F6AA0: bne         $s0, $s4, L_803F6A50
    if (ctx->r16 != ctx->r20) {
        // 0x803F6AA4: or          $s1, $t8, $zero
        ctx->r17 = ctx->r24 | 0;
            goto L_803F6A50;
    }
    // 0x803F6AA4: or          $s1, $t8, $zero
    ctx->r17 = ctx->r24 | 0;
L_803F6AA8:
    // 0x803F6AA8: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x803F6AAC: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x803F6AB0: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x803F6AB4: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x803F6AB8: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x803F6ABC: lw          $s4, 0x28($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X28);
    // 0x803F6AC0: jr          $ra
    // 0x803F6AC4: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x803F6AC4: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_803F6AC8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803F6AC8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x803F6ACC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x803F6AD0: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x803F6AD4: lw          $v0, 0x8($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X8);
    // 0x803F6AD8: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x803F6ADC: lb          $t6, 0x38($v0)
    ctx->r14 = MEM_B(ctx->r2, 0X38);
    // 0x803F6AE0: lui         $a0, 0x8005
    ctx->r4 = S32(0X8005 << 16);
    // 0x803F6AE4: bne         $t6, $at, L_803F6B00
    if (ctx->r14 != ctx->r1) {
        // 0x803F6AE8: nop
    
            goto L_803F6B00;
    }
    // 0x803F6AE8: nop

    // 0x803F6AEC: lui         $a0, 0x8005
    ctx->r4 = S32(0X8005 << 16);
    // 0x803F6AF0: jal         0x8002A468
    // 0x803F6AF4: addiu       $a0, $a0, -0x3228
    ctx->r4 = ADD32(ctx->r4, -0X3228);
    func_8002A468(rdram, ctx);
        goto after_0;
    // 0x803F6AF4: addiu       $a0, $a0, -0x3228
    ctx->r4 = ADD32(ctx->r4, -0X3228);
    after_0:
    // 0x803F6AF8: b           L_803F6B0C
    // 0x803F6AFC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_803F6B0C;
    // 0x803F6AFC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_803F6B00:
    // 0x803F6B00: jal         0x8002A468
    // 0x803F6B04: addiu       $a0, $a0, -0x3230
    ctx->r4 = ADD32(ctx->r4, -0X3230);
    func_8002A468(rdram, ctx);
        goto after_1;
    // 0x803F6B04: addiu       $a0, $a0, -0x3230
    ctx->r4 = ADD32(ctx->r4, -0X3230);
    after_1:
    // 0x803F6B08: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_803F6B0C:
    // 0x803F6B0C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x803F6B10: jr          $ra
    // 0x803F6B14: nop

    return;
    // 0x803F6B14: nop

;}
RECOMP_FUNC void func_803F6AFC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803F6AFC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x803F6B00: jal         0x8002A468
    // 0x803F6B04: addiu       $a0, $a0, -0x3230
    ctx->r4 = ADD32(ctx->r4, -0X3230);
    func_8002A468(rdram, ctx);
        goto after_0;
    // 0x803F6B04: addiu       $a0, $a0, -0x3230
    ctx->r4 = ADD32(ctx->r4, -0X3230);
    after_0:
    // 0x803F6B08: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x803F6B0C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x803F6B10: jr          $ra
    // 0x803F6B14: nop

    return;
    // 0x803F6B14: nop

;}
RECOMP_FUNC void func_803F6B18(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803F6B18: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x803F6B1C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x803F6B20: lui         $a0, 0x803F
    ctx->r4 = S32(0X803F << 16);
    // 0x803F6B24: addiu       $a0, $a0, 0x6B74
    ctx->r4 = ADD32(ctx->r4, 0X6B74);
    // 0x803F6B28: jal         0x800293DC
    // 0x803F6B2C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_800293DC(rdram, ctx);
        goto after_0;
    // 0x803F6B2C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_0:
    // 0x803F6B30: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    // 0x803F6B34: lui         $a1, 0x8012
    ctx->r5 = S32(0X8012 << 16);
    // 0x803F6B38: lbu         $a1, -0x326C($a1)
    ctx->r5 = MEM_BU(ctx->r5, -0X326C);
    // 0x803F6B3C: lw          $a0, 0x14($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X14);
    // 0x803F6B40: jal         0x8004BDA0
    // 0x803F6B44: nop

    func_8004BDA0(rdram, ctx);
        goto after_1;
    // 0x803F6B44: nop

    after_1:
    // 0x803F6B48: lw          $t6, 0x1C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X1C);
    // 0x803F6B4C: lui         $a1, 0x8012
    ctx->r5 = S32(0X8012 << 16);
    // 0x803F6B50: lw          $t7, 0x14($t6)
    ctx->r15 = MEM_W(ctx->r14, 0X14);
    // 0x803F6B54: lbu         $a1, -0x326C($a1)
    ctx->r5 = MEM_BU(ctx->r5, -0X326C);
    // 0x803F6B58: lw          $a0, 0x0($t7)
    ctx->r4 = MEM_W(ctx->r15, 0X0);
    // 0x803F6B5C: jal         0x8004BDA0
    // 0x803F6B60: nop

    func_8004BDA0(rdram, ctx);
        goto after_2;
    // 0x803F6B60: nop

    after_2:
    // 0x803F6B64: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x803F6B68: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x803F6B6C: jr          $ra
    // 0x803F6B70: nop

    return;
    // 0x803F6B70: nop

;}
RECOMP_FUNC void func_803F6B74(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803F6B74: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x803F6B78: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x803F6B7C: lw          $v1, 0x8($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X8);
    // 0x803F6B80: lui         $a0, 0x8005
    ctx->r4 = S32(0X8005 << 16);
    // 0x803F6B84: addiu       $a0, $a0, -0x3230
    ctx->r4 = ADD32(ctx->r4, -0X3230);
    // 0x803F6B88: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x803F6B8C: jal         0x8002A468
    // 0x803F6B90: sw          $v1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r3;
    func_8002A468(rdram, ctx);
        goto after_0;
    // 0x803F6B90: sw          $v1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r3;
    after_0:
    // 0x803F6B94: lw          $v1, 0x1C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X1C);
    // 0x803F6B98: lw          $a3, 0x24($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X24);
    // 0x803F6B9C: lb          $t6, 0x38($v1)
    ctx->r14 = MEM_B(ctx->r3, 0X38);
    // 0x803F6BA0: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x803F6BA4: bne         $t6, $at, L_803F6C4C
    if (ctx->r14 != ctx->r1) {
        // 0x803F6BA8: addiu       $t7, $zero, 0x1
        ctx->r15 = ADD32(0, 0X1);
            goto L_803F6C4C;
    }
    // 0x803F6BA8: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x803F6BAC: lui         $t8, 0x803D
    ctx->r24 = S32(0X803D << 16);
    // 0x803F6BB0: addiu       $t8, $t8, 0x3C44
    ctx->r24 = ADD32(ctx->r24, 0X3C44);
    // 0x803F6BB4: sb          $t7, 0x4($a3)
    MEM_B(0X4, ctx->r7) = ctx->r15;
    // 0x803F6BB8: sw          $t8, 0x30($a3)
    MEM_W(0X30, ctx->r7) = ctx->r24;
    // 0x803F6BBC: lb          $t9, 0x42($v1)
    ctx->r25 = MEM_B(ctx->r3, 0X42);
    // 0x803F6BC0: lui         $t1, 0x8040
    ctx->r9 = S32(0X8040 << 16);
    // 0x803F6BC4: addiu       $t1, $t1, -0x4DD4
    ctx->r9 = ADD32(ctx->r9, -0X4DD4);
    // 0x803F6BC8: sll         $t0, $t9, 2
    ctx->r8 = S32(ctx->r25 << 2);
    // 0x803F6BCC: addu        $v0, $t0, $t1
    ctx->r2 = ADD32(ctx->r8, ctx->r9);
    // 0x803F6BD0: lh          $a1, 0x0($v0)
    ctx->r5 = MEM_H(ctx->r2, 0X0);
    // 0x803F6BD4: lh          $a2, 0x2($v0)
    ctx->r6 = MEM_H(ctx->r2, 0X2);
    // 0x803F6BD8: sw          $a3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r7;
    // 0x803F6BDC: sw          $v1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r3;
    // 0x803F6BE0: jal         0x8004CD44
    // 0x803F6BE4: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
    func_8004CD44(rdram, ctx);
        goto after_1;
    // 0x803F6BE4: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
    after_1:
    // 0x803F6BE8: lw          $v1, 0x1C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X1C);
    // 0x803F6BEC: lw          $a3, 0x24($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X24);
    // 0x803F6BF0: lb          $t2, 0x3B($v1)
    ctx->r10 = MEM_B(ctx->r3, 0X3B);
    // 0x803F6BF4: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x803F6BF8: bne         $t2, $at, L_803F6C4C
    if (ctx->r10 != ctx->r1) {
        // 0x803F6BFC: addiu       $t3, $zero, 0x1
        ctx->r11 = ADD32(0, 0X1);
            goto L_803F6C4C;
    }
    // 0x803F6BFC: addiu       $t3, $zero, 0x1
    ctx->r11 = ADD32(0, 0X1);
    // 0x803F6C00: lw          $t4, 0x0($a3)
    ctx->r12 = MEM_W(ctx->r7, 0X0);
    // 0x803F6C04: lui         $t7, 0x803D
    ctx->r15 = S32(0X803D << 16);
    // 0x803F6C08: sb          $t3, 0x4($t4)
    MEM_B(0X4, ctx->r12) = ctx->r11;
    // 0x803F6C0C: lb          $t5, 0x43($v1)
    ctx->r13 = MEM_B(ctx->r3, 0X43);
    // 0x803F6C10: lw          $t8, 0x0($a3)
    ctx->r24 = MEM_W(ctx->r7, 0X0);
    // 0x803F6C14: sll         $t6, $t5, 2
    ctx->r14 = S32(ctx->r13 << 2);
    // 0x803F6C18: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x803F6C1C: lw          $t7, 0x1A2C($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X1A2C);
    // 0x803F6C20: lui         $t1, 0x8040
    ctx->r9 = S32(0X8040 << 16);
    // 0x803F6C24: sw          $t7, 0x30($t8)
    MEM_W(0X30, ctx->r24) = ctx->r15;
    // 0x803F6C28: lb          $t9, 0x43($v1)
    ctx->r25 = MEM_B(ctx->r3, 0X43);
    // 0x803F6C2C: addiu       $t1, $t1, -0x4DCC
    ctx->r9 = ADD32(ctx->r9, -0X4DCC);
    // 0x803F6C30: sll         $t0, $t9, 2
    ctx->r8 = S32(ctx->r25 << 2);
    // 0x803F6C34: addu        $v0, $t0, $t1
    ctx->r2 = ADD32(ctx->r8, ctx->r9);
    // 0x803F6C38: lh          $a1, 0x0($v0)
    ctx->r5 = MEM_H(ctx->r2, 0X0);
    // 0x803F6C3C: lh          $a2, 0x2($v0)
    ctx->r6 = MEM_H(ctx->r2, 0X2);
    // 0x803F6C40: lw          $a0, 0x0($a3)
    ctx->r4 = MEM_W(ctx->r7, 0X0);
    // 0x803F6C44: jal         0x8004CD44
    // 0x803F6C48: nop

    func_8004CD44(rdram, ctx);
        goto after_2;
    // 0x803F6C48: nop

    after_2:
L_803F6C4C:
    // 0x803F6C4C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x803F6C50: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x803F6C54: jr          $ra
    // 0x803F6C58: nop

    return;
    // 0x803F6C58: nop

;}
RECOMP_FUNC void func_803F6C5C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803F6C5C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x803F6C60: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x803F6C64: lui         $a0, 0x803F
    ctx->r4 = S32(0X803F << 16);
    // 0x803F6C68: jal         0x80029354
    // 0x803F6C6C: addiu       $a0, $a0, 0x6C94
    ctx->r4 = ADD32(ctx->r4, 0X6C94);
    func_80029354(rdram, ctx);
        goto after_0;
    // 0x803F6C6C: addiu       $a0, $a0, 0x6C94
    ctx->r4 = ADD32(ctx->r4, 0X6C94);
    after_0:
    // 0x803F6C70: lw          $a0, 0x14($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X14);
    // 0x803F6C74: lui         $a1, 0x8040
    ctx->r5 = S32(0X8040 << 16);
    // 0x803F6C78: addiu       $a1, $a1, -0x4C9A
    ctx->r5 = ADD32(ctx->r5, -0X4C9A);
    // 0x803F6C7C: jal         0x8004A298
    // 0x803F6C80: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_8004A298(rdram, ctx);
        goto after_1;
    // 0x803F6C80: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_1:
    // 0x803F6C84: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x803F6C88: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x803F6C8C: jr          $ra
    // 0x803F6C90: nop

    return;
    // 0x803F6C90: nop

;}
RECOMP_FUNC void func_803F6C94(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803F6C94: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x803F6C98: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x803F6C9C: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x803F6CA0: lw          $a2, 0x8($a0)
    ctx->r6 = MEM_W(ctx->r4, 0X8);
    // 0x803F6CA4: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x803F6CA8: lb          $t6, 0x38($a2)
    ctx->r14 = MEM_B(ctx->r6, 0X38);
    // 0x803F6CAC: addiu       $a0, $zero, 0x34
    ctx->r4 = ADD32(0, 0X34);
    // 0x803F6CB0: bne         $t6, $at, L_803F6D80
    if (ctx->r14 != ctx->r1) {
        // 0x803F6CB4: nop
    
            goto L_803F6D80;
    }
    // 0x803F6CB4: nop

    // 0x803F6CB8: lb          $t7, 0x3A($a2)
    ctx->r15 = MEM_B(ctx->r6, 0X3A);
    // 0x803F6CBC: nop

    // 0x803F6CC0: bne         $t7, $zero, L_803F6D80
    if (ctx->r15 != 0) {
        // 0x803F6CC4: nop
    
            goto L_803F6D80;
    }
    // 0x803F6CC4: nop

    // 0x803F6CC8: jal         0x8003A540
    // 0x803F6CCC: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    func_8003A540(rdram, ctx);
        goto after_0;
    // 0x803F6CCC: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    after_0:
    // 0x803F6CD0: lw          $a2, 0x20($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X20);
    // 0x803F6CD4: andi        $t0, $v0, 0xFF
    ctx->r8 = ctx->r2 & 0XFF;
    // 0x803F6CD8: bne         $v0, $zero, L_803F6D14
    if (ctx->r2 != 0) {
        // 0x803F6CDC: sb          $v0, 0x4E($a2)
        MEM_B(0X4E, ctx->r6) = ctx->r2;
            goto L_803F6D14;
    }
    // 0x803F6CDC: sb          $v0, 0x4E($a2)
    MEM_B(0X4E, ctx->r6) = ctx->r2;
    // 0x803F6CE0: lui         $a0, 0x8011
    ctx->r4 = S32(0X8011 << 16);
    // 0x803F6CE4: lui         $a3, 0x8028
    ctx->r7 = S32(0X8028 << 16);
    // 0x803F6CE8: addiu       $t8, $zero, 0xE
    ctx->r24 = ADD32(0, 0XE);
    // 0x803F6CEC: addiu       $t9, $zero, 0x2
    ctx->r25 = ADD32(0, 0X2);
    // 0x803F6CF0: sw          $t9, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r25;
    // 0x803F6CF4: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    // 0x803F6CF8: addiu       $a3, $a3, 0x3B20
    ctx->r7 = ADD32(ctx->r7, 0X3B20);
    // 0x803F6CFC: addiu       $a0, $a0, -0x3208
    ctx->r4 = ADD32(ctx->r4, -0X3208);
    // 0x803F6D00: addiu       $a1, $zero, 0xC1
    ctx->r5 = ADD32(0, 0XC1);
    // 0x803F6D04: jal         0x8002F3D4
    // 0x803F6D08: addiu       $a2, $zero, 0x2A
    ctx->r6 = ADD32(0, 0X2A);
    func_8002F3D4(rdram, ctx);
        goto after_1;
    // 0x803F6D08: addiu       $a2, $zero, 0x2A
    ctx->r6 = ADD32(0, 0X2A);
    after_1:
    // 0x803F6D0C: b           L_803F6D70
    // 0x803F6D10: lw          $a0, 0x2C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X2C);
        goto L_803F6D70;
    // 0x803F6D10: lw          $a0, 0x2C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X2C);
L_803F6D14:
    // 0x803F6D14: lui         $a0, 0x8011
    ctx->r4 = S32(0X8011 << 16);
    // 0x803F6D18: lui         $a3, 0x8028
    ctx->r7 = S32(0X8028 << 16);
    // 0x803F6D1C: addiu       $t1, $zero, 0xE
    ctx->r9 = ADD32(0, 0XE);
    // 0x803F6D20: addiu       $t2, $zero, 0x2
    ctx->r10 = ADD32(0, 0X2);
    // 0x803F6D24: sw          $t2, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r10;
    // 0x803F6D28: sw          $t1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r9;
    // 0x803F6D2C: addiu       $a3, $a3, 0x3B18
    ctx->r7 = ADD32(ctx->r7, 0X3B18);
    // 0x803F6D30: addiu       $a0, $a0, -0x3208
    ctx->r4 = ADD32(ctx->r4, -0X3208);
    // 0x803F6D34: addiu       $a1, $zero, 0xC1
    ctx->r5 = ADD32(0, 0XC1);
    // 0x803F6D38: addiu       $a2, $zero, 0x2A
    ctx->r6 = ADD32(0, 0X2A);
    // 0x803F6D3C: jal         0x8002F3D4
    // 0x803F6D40: sb          $t0, 0x27($sp)
    MEM_B(0X27, ctx->r29) = ctx->r8;
    func_8002F3D4(rdram, ctx);
        goto after_2;
    // 0x803F6D40: sb          $t0, 0x27($sp)
    MEM_B(0X27, ctx->r29) = ctx->r8;
    after_2:
    // 0x803F6D44: lbu         $a3, 0x27($sp)
    ctx->r7 = MEM_BU(ctx->r29, 0X27);
    // 0x803F6D48: lui         $a0, 0x8011
    ctx->r4 = S32(0X8011 << 16);
    // 0x803F6D4C: addiu       $t3, $zero, 0x1
    ctx->r11 = ADD32(0, 0X1);
    // 0x803F6D50: addiu       $t4, $zero, 0x1
    ctx->r12 = ADD32(0, 0X1);
    // 0x803F6D54: sw          $t4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r12;
    // 0x803F6D58: sw          $t3, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r11;
    // 0x803F6D5C: addiu       $a0, $a0, -0x31E8
    ctx->r4 = ADD32(ctx->r4, -0X31E8);
    // 0x803F6D60: addiu       $a1, $zero, 0xF0
    ctx->r5 = ADD32(0, 0XF0);
    // 0x803F6D64: jal         0x8002F60C
    // 0x803F6D68: addiu       $a2, $zero, 0x2A
    ctx->r6 = ADD32(0, 0X2A);
    func_8002F60C(rdram, ctx);
        goto after_3;
    // 0x803F6D68: addiu       $a2, $zero, 0x2A
    ctx->r6 = ADD32(0, 0X2A);
    after_3:
    // 0x803F6D6C: lw          $a0, 0x2C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X2C);
L_803F6D70:
    // 0x803F6D70: jal         0x8004CDD8
    // 0x803F6D74: nop

    func_8004CDD8(rdram, ctx);
        goto after_4;
    // 0x803F6D74: nop

    after_4:
    // 0x803F6D78: b           L_803F6D98
    // 0x803F6D7C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_803F6D98;
    // 0x803F6D7C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_803F6D80:
    // 0x803F6D80: jal         0x8002F224
    // 0x803F6D84: addiu       $a1, $zero, 0x35
    ctx->r5 = ADD32(0, 0X35);
    func_8002F224(rdram, ctx);
        goto after_5;
    // 0x803F6D84: addiu       $a1, $zero, 0x35
    ctx->r5 = ADD32(0, 0X35);
    after_5:
    // 0x803F6D88: lw          $a0, 0x2C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X2C);
    // 0x803F6D8C: jal         0x8004CDD0
    // 0x803F6D90: nop

    func_8004CDD0(rdram, ctx);
        goto after_6;
    // 0x803F6D90: nop

    after_6:
    // 0x803F6D94: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_803F6D98:
    // 0x803F6D98: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x803F6D9C: jr          $ra
    // 0x803F6DA0: nop

    return;
    // 0x803F6DA0: nop

;}
RECOMP_FUNC void func_803F6D88(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803F6D88: lw          $a0, 0x2C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X2C);
    // 0x803F6D8C: jal         0x8004CDD0
    // 0x803F6D90: nop

    func_8004CDD0(rdram, ctx);
        goto after_0;
    // 0x803F6D90: nop

    after_0:
    // 0x803F6D94: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x803F6D98: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x803F6D9C: jr          $ra
    // 0x803F6DA0: nop

    return;
    // 0x803F6DA0: nop

;}
RECOMP_FUNC void func_803F6DA4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803F6DA4: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x803F6DA8: sw          $s5, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r21;
    // 0x803F6DAC: lui         $s5, 0x8012
    ctx->r21 = S32(0X8012 << 16);
    // 0x803F6DB0: addiu       $s5, $s5, -0x32B0
    ctx->r21 = ADD32(ctx->r21, -0X32B0);
    // 0x803F6DB4: lb          $t6, 0x44($s5)
    ctx->r14 = MEM_B(ctx->r21, 0X44);
    // 0x803F6DB8: sw          $s4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r20;
    // 0x803F6DBC: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x803F6DC0: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x803F6DC4: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x803F6DC8: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x803F6DCC: sll         $t7, $t7, 3
    ctx->r15 = S32(ctx->r15 << 3);
    // 0x803F6DD0: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x803F6DD4: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x803F6DD8: lui         $s4, 0x8012
    ctx->r20 = S32(0X8012 << 16);
    // 0x803F6DDC: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x803F6DE0: addiu       $s4, $s4, -0x2CF0
    ctx->r20 = ADD32(ctx->r20, -0X2CF0);
    // 0x803F6DE4: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x803F6DE8: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x803F6DEC: addu        $t8, $s4, $t7
    ctx->r24 = ADD32(ctx->r20, ctx->r15);
    // 0x803F6DF0: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x803F6DF4: lbu         $s2, 0x1($t8)
    ctx->r18 = MEM_BU(ctx->r24, 0X1);
    // 0x803F6DF8: lui         $a0, 0x803F
    ctx->r4 = S32(0X803F << 16);
    // 0x803F6DFC: sw          $s6, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r22;
    // 0x803F6E00: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x803F6E04: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x803F6E08: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x803F6E0C: addiu       $a0, $a0, 0x6F88
    ctx->r4 = ADD32(ctx->r4, 0X6F88);
    // 0x803F6E10: jal         0x800293DC
    // 0x803F6E14: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    func_800293DC(rdram, ctx);
        goto after_0;
    // 0x803F6E14: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    after_0:
    // 0x803F6E18: lw          $s0, 0x14($v0)
    ctx->r16 = MEM_W(ctx->r2, 0X14);
    // 0x803F6E1C: addiu       $s6, $zero, -0x1
    ctx->r22 = ADD32(0, -0X1);
    // 0x803F6E20: beq         $s0, $s6, L_803F6EC0
    if (ctx->r16 == ctx->r22) {
        // 0x803F6E24: addiu       $s1, $zero, 0x1
        ctx->r17 = ADD32(0, 0X1);
            goto L_803F6EC0;
    }
    // 0x803F6E24: addiu       $s1, $zero, 0x1
    ctx->r17 = ADD32(0, 0X1);
    // 0x803F6E28: sll         $s3, $s2, 2
    ctx->r19 = S32(ctx->r18 << 2);
    // 0x803F6E2C: subu        $s3, $s3, $s2
    ctx->r19 = SUB32(ctx->r19, ctx->r18);
    // 0x803F6E30: sll         $s3, $s3, 2
    ctx->r19 = S32(ctx->r19 << 2);
    // 0x803F6E34: subu        $s3, $s3, $s2
    ctx->r19 = SUB32(ctx->r19, ctx->r18);
    // 0x803F6E38: addiu       $s2, $zero, 0x6
    ctx->r18 = ADD32(0, 0X6);
L_803F6E3C:
    // 0x803F6E3C: multu       $s1, $s2
    result = U64(U32(ctx->r17)) * U64(U32(ctx->r18)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x803F6E40: lb          $t9, 0x44($s5)
    ctx->r25 = MEM_B(ctx->r21, 0X44);
    // 0x803F6E44: sll         $t2, $s3, 2
    ctx->r10 = S32(ctx->r19 << 2);
    // 0x803F6E48: sll         $t0, $t9, 2
    ctx->r8 = S32(ctx->r25 << 2);
    // 0x803F6E4C: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x803F6E50: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x803F6E54: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x803F6E58: sll         $t0, $t0, 3
    ctx->r8 = S32(ctx->r8 << 3);
    // 0x803F6E5C: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x803F6E60: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x803F6E64: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x803F6E68: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x803F6E6C: subu        $t2, $t2, $s3
    ctx->r10 = SUB32(ctx->r10, ctx->r19);
    // 0x803F6E70: sll         $t2, $t2, 1
    ctx->r10 = S32(ctx->r10 << 1);
    // 0x803F6E74: addu        $t1, $s4, $t0
    ctx->r9 = ADD32(ctx->r20, ctx->r8);
    // 0x803F6E78: addu        $t3, $t1, $t2
    ctx->r11 = ADD32(ctx->r9, ctx->r10);
    // 0x803F6E7C: mflo        $t4
    ctx->r12 = lo;
    // 0x803F6E80: addu        $t5, $t3, $t4
    ctx->r13 = ADD32(ctx->r11, ctx->r12);
    // 0x803F6E84: lbu         $v0, 0x41C($t5)
    ctx->r2 = MEM_BU(ctx->r13, 0X41C);
    // 0x803F6E88: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x803F6E8C: andi        $t6, $v0, 0x80
    ctx->r14 = ctx->r2 & 0X80;
    // 0x803F6E90: beq         $t6, $zero, L_803F6EA8
    if (ctx->r14 == 0) {
        // 0x803F6E94: nop
    
            goto L_803F6EA8;
    }
    // 0x803F6E94: nop

    // 0x803F6E98: jal         0x803F6EE8
    // 0x803F6E9C: andi        $a1, $s1, 0xFF
    ctx->r5 = ctx->r17 & 0XFF;
    func_803F6EE8(rdram, ctx);
        goto after_1;
    // 0x803F6E9C: andi        $a1, $s1, 0xFF
    ctx->r5 = ctx->r17 & 0XFF;
    after_1:
    // 0x803F6EA0: b           L_803F6EB0
    // 0x803F6EA4: lw          $s0, 0x0($s0)
    ctx->r16 = MEM_W(ctx->r16, 0X0);
        goto L_803F6EB0;
    // 0x803F6EA4: lw          $s0, 0x0($s0)
    ctx->r16 = MEM_W(ctx->r16, 0X0);
L_803F6EA8:
    // 0x803F6EA8: sw          $zero, 0x30($s0)
    MEM_W(0X30, ctx->r16) = 0;
    // 0x803F6EAC: lw          $s0, 0x0($s0)
    ctx->r16 = MEM_W(ctx->r16, 0X0);
L_803F6EB0:
    // 0x803F6EB0: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x803F6EB4: andi        $t7, $s1, 0xFF
    ctx->r15 = ctx->r17 & 0XFF;
    // 0x803F6EB8: bne         $s0, $s6, L_803F6E3C
    if (ctx->r16 != ctx->r22) {
        // 0x803F6EBC: or          $s1, $t7, $zero
        ctx->r17 = ctx->r15 | 0;
            goto L_803F6E3C;
    }
    // 0x803F6EBC: or          $s1, $t7, $zero
    ctx->r17 = ctx->r15 | 0;
L_803F6EC0:
    // 0x803F6EC0: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x803F6EC4: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x803F6EC8: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x803F6ECC: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x803F6ED0: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x803F6ED4: lw          $s4, 0x28($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X28);
    // 0x803F6ED8: lw          $s5, 0x2C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X2C);
    // 0x803F6EDC: lw          $s6, 0x30($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X30);
    // 0x803F6EE0: jr          $ra
    // 0x803F6EE4: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    return;
    // 0x803F6EE4: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_803F6EE8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803F6EE8: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x803F6EEC: lui         $t6, 0x801B
    ctx->r14 = S32(0X801B << 16);
    // 0x803F6EF0: lw          $t6, 0x1CF0($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X1CF0);
    // 0x803F6EF4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x803F6EF8: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x803F6EFC: lb          $t7, 0x2E($t6)
    ctx->r15 = MEM_B(ctx->r14, 0X2E);
    // 0x803F6F00: or          $a3, $a0, $zero
    ctx->r7 = ctx->r4 | 0;
    // 0x803F6F04: bne         $t7, $zero, L_803F6F1C
    if (ctx->r15 != 0) {
        // 0x803F6F08: addiu       $t0, $zero, 0x30B
        ctx->r8 = ADD32(0, 0X30B);
            goto L_803F6F1C;
    }
    // 0x803F6F08: addiu       $t0, $zero, 0x30B
    ctx->r8 = ADD32(0, 0X30B);
    // 0x803F6F0C: lui         $t8, 0x803D
    ctx->r24 = S32(0X803D << 16);
    // 0x803F6F10: addiu       $t8, $t8, -0x728C
    ctx->r24 = ADD32(ctx->r24, -0X728C);
    // 0x803F6F14: b           L_803F6F28
    // 0x803F6F18: sw          $t8, 0x30($a0)
    MEM_W(0X30, ctx->r4) = ctx->r24;
        goto L_803F6F28;
    // 0x803F6F18: sw          $t8, 0x30($a0)
    MEM_W(0X30, ctx->r4) = ctx->r24;
L_803F6F1C:
    // 0x803F6F1C: lui         $t9, 0x803D
    ctx->r25 = S32(0X803D << 16);
    // 0x803F6F20: addiu       $t9, $t9, -0x72E0
    ctx->r25 = ADD32(ctx->r25, -0X72E0);
    // 0x803F6F24: sw          $t9, 0x30($a3)
    MEM_W(0X30, ctx->r7) = ctx->r25;
L_803F6F28:
    // 0x803F6F28: sh          $t0, 0x12($a3)
    MEM_H(0X12, ctx->r7) = ctx->r8;
    // 0x803F6F2C: sw          $a3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r7;
    // 0x803F6F30: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
    // 0x803F6F34: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x803F6F38: jal         0x8002135C
    // 0x803F6F3C: addiu       $a2, $zero, 0xFA
    ctx->r6 = ADD32(0, 0XFA);
    func_8002135C(rdram, ctx);
        goto after_0;
    // 0x803F6F3C: addiu       $a2, $zero, 0xFA
    ctx->r6 = ADD32(0, 0XFA);
    after_0:
    // 0x803F6F40: lw          $a3, 0x20($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X20);
    // 0x803F6F44: addiu       $t1, $zero, 0x7
    ctx->r9 = ADD32(0, 0X7);
    // 0x803F6F48: lui         $t2, 0x801B
    ctx->r10 = S32(0X801B << 16);
    // 0x803F6F4C: sb          $t1, 0x5($a3)
    MEM_B(0X5, ctx->r7) = ctx->r9;
    // 0x803F6F50: lw          $t2, 0x1CF0($t2)
    ctx->r10 = MEM_W(ctx->r10, 0X1CF0);
    // 0x803F6F54: lbu         $a2, 0x27($sp)
    ctx->r6 = MEM_BU(ctx->r29, 0X27);
    // 0x803F6F58: lbu         $a1, 0x2E($t2)
    ctx->r5 = MEM_BU(ctx->r10, 0X2E);
    // 0x803F6F5C: jal         0x803F7ABC
    // 0x803F6F60: addiu       $a0, $sp, 0x1C
    ctx->r4 = ADD32(ctx->r29, 0X1C);
    func_803F7ABC(rdram, ctx);
        goto after_1;
    // 0x803F6F60: addiu       $a0, $sp, 0x1C
    ctx->r4 = ADD32(ctx->r29, 0X1C);
    after_1:
    // 0x803F6F64: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x803F6F68: lh          $a1, 0x1C($sp)
    ctx->r5 = MEM_H(ctx->r29, 0X1C);
    // 0x803F6F6C: lh          $a2, 0x1E($sp)
    ctx->r6 = MEM_H(ctx->r29, 0X1E);
    // 0x803F6F70: jal         0x8004CD44
    // 0x803F6F74: nop

    func_8004CD44(rdram, ctx);
        goto after_2;
    // 0x803F6F74: nop

    after_2:
    // 0x803F6F78: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x803F6F7C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x803F6F80: jr          $ra
    // 0x803F6F84: nop

    return;
    // 0x803F6F84: nop

;}
RECOMP_FUNC void func_803F6F88(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803F6F88: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x803F6F8C: sw          $s3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r19;
    // 0x803F6F90: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x803F6F94: sw          $s2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r18;
    // 0x803F6F98: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x803F6F9C: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x803F6FA0: addiu       $s3, $zero, -0x1
    ctx->r19 = ADD32(0, -0X1);
    // 0x803F6FA4: lw          $s2, 0x8($a0)
    ctx->r18 = MEM_W(ctx->r4, 0X8);
    // 0x803F6FA8: or          $s0, $a1, $zero
    ctx->r16 = ctx->r5 | 0;
    // 0x803F6FAC: beq         $a1, $s3, L_803F6FE4
    if (ctx->r5 == ctx->r19) {
        // 0x803F6FB0: addiu       $s1, $zero, 0x1
        ctx->r17 = ADD32(0, 0X1);
            goto L_803F6FE4;
    }
    // 0x803F6FB0: addiu       $s1, $zero, 0x1
    ctx->r17 = ADD32(0, 0X1);
L_803F6FB4:
    // 0x803F6FB4: sll         $a2, $s1, 24
    ctx->r6 = S32(ctx->r17 << 24);
    // 0x803F6FB8: sra         $t6, $a2, 24
    ctx->r14 = S32(SIGNED(ctx->r6) >> 24);
    // 0x803F6FBC: lh          $a3, 0x1C($s0)
    ctx->r7 = MEM_H(ctx->r16, 0X1C);
    // 0x803F6FC0: or          $a2, $t6, $zero
    ctx->r6 = ctx->r14 | 0;
    // 0x803F6FC4: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x803F6FC8: jal         0x803F80B8
    // 0x803F6FCC: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    func_803F80B8(rdram, ctx);
        goto after_0;
    // 0x803F6FCC: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_0:
    // 0x803F6FD0: lw          $s0, 0x0($s0)
    ctx->r16 = MEM_W(ctx->r16, 0X0);
    // 0x803F6FD4: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x803F6FD8: andi        $t7, $s1, 0xFF
    ctx->r15 = ctx->r17 & 0XFF;
    // 0x803F6FDC: bne         $s0, $s3, L_803F6FB4
    if (ctx->r16 != ctx->r19) {
        // 0x803F6FE0: or          $s1, $t7, $zero
        ctx->r17 = ctx->r15 | 0;
            goto L_803F6FB4;
    }
    // 0x803F6FE0: or          $s1, $t7, $zero
    ctx->r17 = ctx->r15 | 0;
L_803F6FE4:
    // 0x803F6FE4: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x803F6FE8: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x803F6FEC: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x803F6FF0: lw          $s2, 0x1C($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X1C);
    // 0x803F6FF4: lw          $s3, 0x20($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X20);
    // 0x803F6FF8: jr          $ra
    // 0x803F6FFC: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x803F6FFC: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_803F7000(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803F7000: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x803F7004: sll         $a2, $a0, 24
    ctx->r6 = S32(ctx->r4 << 24);
    // 0x803F7008: sll         $a3, $a1, 24
    ctx->r7 = S32(ctx->r5 << 24);
    // 0x803F700C: sra         $t7, $a3, 24
    ctx->r15 = S32(SIGNED(ctx->r7) >> 24);
    // 0x803F7010: sra         $t6, $a2, 24
    ctx->r14 = S32(SIGNED(ctx->r6) >> 24);
    // 0x803F7014: or          $a2, $t6, $zero
    ctx->r6 = ctx->r14 | 0;
    // 0x803F7018: or          $a3, $t7, $zero
    ctx->r7 = ctx->r15 | 0;
    // 0x803F701C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x803F7020: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x803F7024: bne         $t6, $t7, L_803F7034
    if (ctx->r14 != ctx->r15) {
        // 0x803F7028: sw          $a1, 0x1C($sp)
        MEM_W(0X1C, ctx->r29) = ctx->r5;
            goto L_803F7034;
    }
    // 0x803F7028: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x803F702C: b           L_803F722C
    // 0x803F7030: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_803F722C;
    // 0x803F7030: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_803F7034:
    // 0x803F7034: lui         $v1, 0x8012
    ctx->r3 = S32(0X8012 << 16);
    // 0x803F7038: addiu       $v1, $v1, -0x32B0
    ctx->r3 = ADD32(ctx->r3, -0X32B0);
    // 0x803F703C: lbu         $v0, 0x3E($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X3E);
    // 0x803F7040: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x803F7044: beq         $v0, $zero, L_803F705C
    if (ctx->r2 == 0) {
        // 0x803F7048: nop
    
            goto L_803F705C;
    }
    // 0x803F7048: nop

    // 0x803F704C: beq         $v0, $at, L_803F7118
    if (ctx->r2 == ctx->r1) {
        // 0x803F7050: sll         $a0, $a2, 24
        ctx->r4 = S32(ctx->r6 << 24);
            goto L_803F7118;
    }
    // 0x803F7050: sll         $a0, $a2, 24
    ctx->r4 = S32(ctx->r6 << 24);
    // 0x803F7054: b           L_803F722C
    // 0x803F7058: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_803F722C;
    // 0x803F7058: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_803F705C:
    // 0x803F705C: bne         $a2, $zero, L_803F70A8
    if (ctx->r6 != 0) {
        // 0x803F7060: sll         $a1, $a3, 24
        ctx->r5 = S32(ctx->r7 << 24);
            goto L_803F70A8;
    }
    // 0x803F7060: sll         $a1, $a3, 24
    ctx->r5 = S32(ctx->r7 << 24);
    // 0x803F7064: lbu         $a0, 0x44($v1)
    ctx->r4 = MEM_BU(ctx->r3, 0X44);
    // 0x803F7068: sra         $t8, $a1, 24
    ctx->r24 = S32(SIGNED(ctx->r5) >> 24);
    // 0x803F706C: or          $a1, $t8, $zero
    ctx->r5 = ctx->r24 | 0;
    // 0x803F7070: jal         0x8006DCB0
    // 0x803F7074: sb          $a3, 0x1F($sp)
    MEM_B(0X1F, ctx->r29) = ctx->r7;
    func_8006DCB0(rdram, ctx);
        goto after_0;
    // 0x803F7074: sb          $a3, 0x1F($sp)
    MEM_B(0X1F, ctx->r29) = ctx->r7;
    after_0:
    // 0x803F7078: lb          $a3, 0x1F($sp)
    ctx->r7 = MEM_B(ctx->r29, 0X1F);
    // 0x803F707C: bne         $v0, $zero, L_803F70A0
    if (ctx->r2 != 0) {
        // 0x803F7080: lui         $a0, 0x8012
        ctx->r4 = S32(0X8012 << 16);
            goto L_803F70A0;
    }
    // 0x803F7080: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x803F7084: sll         $a1, $a3, 24
    ctx->r5 = S32(ctx->r7 << 24);
    // 0x803F7088: sra         $t9, $a1, 24
    ctx->r25 = S32(SIGNED(ctx->r5) >> 24);
    // 0x803F708C: lbu         $a0, -0x326C($a0)
    ctx->r4 = MEM_BU(ctx->r4, -0X326C);
    // 0x803F7090: jal         0x803F75C0
    // 0x803F7094: or          $a1, $t9, $zero
    ctx->r5 = ctx->r25 | 0;
    func_803F75C0(rdram, ctx);
        goto after_1;
    // 0x803F7094: or          $a1, $t9, $zero
    ctx->r5 = ctx->r25 | 0;
    after_1:
    // 0x803F7098: b           L_803F7230
    // 0x803F709C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_803F7230;
    // 0x803F709C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_803F70A0:
    // 0x803F70A0: b           L_803F722C
    // 0x803F70A4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_803F722C;
    // 0x803F70A4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_803F70A8:
    // 0x803F70A8: bne         $a3, $zero, L_803F70F8
    if (ctx->r7 != 0) {
        // 0x803F70AC: sll         $a0, $a2, 24
        ctx->r4 = S32(ctx->r6 << 24);
            goto L_803F70F8;
    }
    // 0x803F70AC: sll         $a0, $a2, 24
    ctx->r4 = S32(ctx->r6 << 24);
    // 0x803F70B0: sll         $a1, $a2, 24
    ctx->r5 = S32(ctx->r6 << 24);
    // 0x803F70B4: sra         $t0, $a1, 24
    ctx->r8 = S32(SIGNED(ctx->r5) >> 24);
    // 0x803F70B8: lbu         $a0, 0x44($v1)
    ctx->r4 = MEM_BU(ctx->r3, 0X44);
    // 0x803F70BC: or          $a1, $t0, $zero
    ctx->r5 = ctx->r8 | 0;
    // 0x803F70C0: jal         0x8006DCB0
    // 0x803F70C4: sb          $a2, 0x1B($sp)
    MEM_B(0X1B, ctx->r29) = ctx->r6;
    func_8006DCB0(rdram, ctx);
        goto after_2;
    // 0x803F70C4: sb          $a2, 0x1B($sp)
    MEM_B(0X1B, ctx->r29) = ctx->r6;
    after_2:
    // 0x803F70C8: lb          $a2, 0x1B($sp)
    ctx->r6 = MEM_B(ctx->r29, 0X1B);
    // 0x803F70CC: bne         $v0, $zero, L_803F70F0
    if (ctx->r2 != 0) {
        // 0x803F70D0: lui         $a0, 0x8012
        ctx->r4 = S32(0X8012 << 16);
            goto L_803F70F0;
    }
    // 0x803F70D0: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x803F70D4: sll         $a1, $a2, 24
    ctx->r5 = S32(ctx->r6 << 24);
    // 0x803F70D8: sra         $t1, $a1, 24
    ctx->r9 = S32(SIGNED(ctx->r5) >> 24);
    // 0x803F70DC: lbu         $a0, -0x326C($a0)
    ctx->r4 = MEM_BU(ctx->r4, -0X326C);
    // 0x803F70E0: jal         0x803F75C0
    // 0x803F70E4: or          $a1, $t1, $zero
    ctx->r5 = ctx->r9 | 0;
    func_803F75C0(rdram, ctx);
        goto after_3;
    // 0x803F70E4: or          $a1, $t1, $zero
    ctx->r5 = ctx->r9 | 0;
    after_3:
    // 0x803F70E8: b           L_803F7230
    // 0x803F70EC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_803F7230;
    // 0x803F70EC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_803F70F0:
    // 0x803F70F0: b           L_803F722C
    // 0x803F70F4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_803F722C;
    // 0x803F70F4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_803F70F8:
    // 0x803F70F8: sll         $a1, $a3, 24
    ctx->r5 = S32(ctx->r7 << 24);
    // 0x803F70FC: sra         $t3, $a1, 24
    ctx->r11 = S32(SIGNED(ctx->r5) >> 24);
    // 0x803F7100: sra         $t2, $a0, 24
    ctx->r10 = S32(SIGNED(ctx->r4) >> 24);
    // 0x803F7104: or          $a0, $t2, $zero
    ctx->r4 = ctx->r10 | 0;
    // 0x803F7108: jal         0x803F7314
    // 0x803F710C: or          $a1, $t3, $zero
    ctx->r5 = ctx->r11 | 0;
    func_803F7314(rdram, ctx);
        goto after_4;
    // 0x803F710C: or          $a1, $t3, $zero
    ctx->r5 = ctx->r11 | 0;
    after_4:
    // 0x803F7110: b           L_803F7230
    // 0x803F7114: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_803F7230;
    // 0x803F7114: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_803F7118:
    // 0x803F7118: sll         $a1, $a3, 24
    ctx->r5 = S32(ctx->r7 << 24);
    // 0x803F711C: sra         $t5, $a1, 24
    ctx->r13 = S32(SIGNED(ctx->r5) >> 24);
    // 0x803F7120: sra         $t4, $a0, 24
    ctx->r12 = S32(SIGNED(ctx->r4) >> 24);
    // 0x803F7124: or          $a0, $t4, $zero
    ctx->r4 = ctx->r12 | 0;
    // 0x803F7128: or          $a1, $t5, $zero
    ctx->r5 = ctx->r13 | 0;
    // 0x803F712C: sb          $a2, 0x1B($sp)
    MEM_B(0X1B, ctx->r29) = ctx->r6;
    // 0x803F7130: jal         0x803F7564
    // 0x803F7134: sb          $a3, 0x1F($sp)
    MEM_B(0X1F, ctx->r29) = ctx->r7;
    func_803F7564(rdram, ctx);
        goto after_5;
    // 0x803F7134: sb          $a3, 0x1F($sp)
    MEM_B(0X1F, ctx->r29) = ctx->r7;
    after_5:
    // 0x803F7138: lb          $a2, 0x1B($sp)
    ctx->r6 = MEM_B(ctx->r29, 0X1B);
    // 0x803F713C: lb          $a3, 0x1F($sp)
    ctx->r7 = MEM_B(ctx->r29, 0X1F);
    // 0x803F7140: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x803F7144: beq         $v0, $at, L_803F7160
    if (ctx->r2 == ctx->r1) {
        // 0x803F7148: lui         $t6, 0x801B
        ctx->r14 = S32(0X801B << 16);
            goto L_803F7160;
    }
    // 0x803F7148: lui         $t6, 0x801B
    ctx->r14 = S32(0X801B << 16);
    // 0x803F714C: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x803F7150: beq         $v0, $at, L_803F719C
    if (ctx->r2 == ctx->r1) {
        // 0x803F7154: lui         $t9, 0x801B
        ctx->r25 = S32(0X801B << 16);
            goto L_803F719C;
    }
    // 0x803F7154: lui         $t9, 0x801B
    ctx->r25 = S32(0X801B << 16);
    // 0x803F7158: b           L_803F71D8
    // 0x803F715C: nop

        goto L_803F71D8;
    // 0x803F715C: nop

L_803F7160:
    // 0x803F7160: lw          $t6, 0x1CF0($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X1CF0);
    // 0x803F7164: sll         $a0, $a2, 24
    ctx->r4 = S32(ctx->r6 << 24);
    // 0x803F7168: lb          $t7, 0x4E($t6)
    ctx->r15 = MEM_B(ctx->r14, 0X4E);
    // 0x803F716C: sra         $t8, $a0, 24
    ctx->r24 = S32(SIGNED(ctx->r4) >> 24);
    // 0x803F7170: bgtz        $t7, L_803F71D8
    if (SIGNED(ctx->r15) > 0) {
        // 0x803F7174: or          $a0, $t8, $zero
        ctx->r4 = ctx->r24 | 0;
            goto L_803F71D8;
    }
    // 0x803F7174: or          $a0, $t8, $zero
    ctx->r4 = ctx->r24 | 0;
    // 0x803F7178: sb          $a2, 0x1B($sp)
    MEM_B(0X1B, ctx->r29) = ctx->r6;
    // 0x803F717C: jal         0x803F7914
    // 0x803F7180: sb          $a3, 0x1F($sp)
    MEM_B(0X1F, ctx->r29) = ctx->r7;
    func_803F7914(rdram, ctx);
        goto after_6;
    // 0x803F7180: sb          $a3, 0x1F($sp)
    MEM_B(0X1F, ctx->r29) = ctx->r7;
    after_6:
    // 0x803F7184: lb          $a2, 0x1B($sp)
    ctx->r6 = MEM_B(ctx->r29, 0X1B);
    // 0x803F7188: lb          $a3, 0x1F($sp)
    ctx->r7 = MEM_B(ctx->r29, 0X1F);
    // 0x803F718C: bne         $v0, $zero, L_803F71D8
    if (ctx->r2 != 0) {
        // 0x803F7190: nop
    
            goto L_803F71D8;
    }
    // 0x803F7190: nop

    // 0x803F7194: b           L_803F722C
    // 0x803F7198: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_803F722C;
    // 0x803F7198: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_803F719C:
    // 0x803F719C: lw          $t9, 0x1CF0($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X1CF0);
    // 0x803F71A0: sll         $a0, $a3, 24
    ctx->r4 = S32(ctx->r7 << 24);
    // 0x803F71A4: lb          $t0, 0x4E($t9)
    ctx->r8 = MEM_B(ctx->r25, 0X4E);
    // 0x803F71A8: sra         $t1, $a0, 24
    ctx->r9 = S32(SIGNED(ctx->r4) >> 24);
    // 0x803F71AC: bgtz        $t0, L_803F71D8
    if (SIGNED(ctx->r8) > 0) {
        // 0x803F71B0: or          $a0, $t1, $zero
        ctx->r4 = ctx->r9 | 0;
            goto L_803F71D8;
    }
    // 0x803F71B0: or          $a0, $t1, $zero
    ctx->r4 = ctx->r9 | 0;
    // 0x803F71B4: sb          $a2, 0x1B($sp)
    MEM_B(0X1B, ctx->r29) = ctx->r6;
    // 0x803F71B8: jal         0x803F7914
    // 0x803F71BC: sb          $a3, 0x1F($sp)
    MEM_B(0X1F, ctx->r29) = ctx->r7;
    func_803F7914(rdram, ctx);
        goto after_7;
    // 0x803F71BC: sb          $a3, 0x1F($sp)
    MEM_B(0X1F, ctx->r29) = ctx->r7;
    after_7:
    // 0x803F71C0: lb          $a2, 0x1B($sp)
    ctx->r6 = MEM_B(ctx->r29, 0X1B);
    // 0x803F71C4: lb          $a3, 0x1F($sp)
    ctx->r7 = MEM_B(ctx->r29, 0X1F);
    // 0x803F71C8: bne         $v0, $zero, L_803F71D8
    if (ctx->r2 != 0) {
        // 0x803F71CC: nop
    
            goto L_803F71D8;
    }
    // 0x803F71CC: nop

    // 0x803F71D0: b           L_803F722C
    // 0x803F71D4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_803F722C;
    // 0x803F71D4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_803F71D8:
    // 0x803F71D8: bne         $a2, $zero, L_803F71F0
    if (ctx->r6 != 0) {
        // 0x803F71DC: andi        $a0, $a2, 0xFF
        ctx->r4 = ctx->r6 & 0XFF;
            goto L_803F71F0;
    }
    // 0x803F71DC: andi        $a0, $a2, 0xFF
    ctx->r4 = ctx->r6 & 0XFF;
    // 0x803F71E0: jal         0x803F723C
    // 0x803F71E4: andi        $a1, $a3, 0xFF
    ctx->r5 = ctx->r7 & 0XFF;
    func_803F723C(rdram, ctx);
        goto after_8;
    // 0x803F71E4: andi        $a1, $a3, 0xFF
    ctx->r5 = ctx->r7 & 0XFF;
    after_8:
    // 0x803F71E8: b           L_803F7230
    // 0x803F71EC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_803F7230;
    // 0x803F71EC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_803F71F0:
    // 0x803F71F0: bne         $a3, $zero, L_803F720C
    if (ctx->r7 != 0) {
        // 0x803F71F4: sll         $a0, $a2, 24
        ctx->r4 = S32(ctx->r6 << 24);
            goto L_803F720C;
    }
    // 0x803F71F4: sll         $a0, $a2, 24
    ctx->r4 = S32(ctx->r6 << 24);
    // 0x803F71F8: andi        $a0, $a3, 0xFF
    ctx->r4 = ctx->r7 & 0XFF;
    // 0x803F71FC: jal         0x803F723C
    // 0x803F7200: andi        $a1, $a2, 0xFF
    ctx->r5 = ctx->r6 & 0XFF;
    func_803F723C(rdram, ctx);
        goto after_9;
    // 0x803F7200: andi        $a1, $a2, 0xFF
    ctx->r5 = ctx->r6 & 0XFF;
    after_9:
    // 0x803F7204: b           L_803F7230
    // 0x803F7208: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_803F7230;
    // 0x803F7208: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_803F720C:
    // 0x803F720C: sll         $a1, $a3, 24
    ctx->r5 = S32(ctx->r7 << 24);
    // 0x803F7210: sra         $t3, $a1, 24
    ctx->r11 = S32(SIGNED(ctx->r5) >> 24);
    // 0x803F7214: sra         $t2, $a0, 24
    ctx->r10 = S32(SIGNED(ctx->r4) >> 24);
    // 0x803F7218: or          $a0, $t2, $zero
    ctx->r4 = ctx->r10 | 0;
    // 0x803F721C: jal         0x803F742C
    // 0x803F7220: or          $a1, $t3, $zero
    ctx->r5 = ctx->r11 | 0;
    func_803F742C(rdram, ctx);
        goto after_10;
    // 0x803F7220: or          $a1, $t3, $zero
    ctx->r5 = ctx->r11 | 0;
    after_10:
    // 0x803F7224: b           L_803F7230
    // 0x803F7228: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_803F7230;
    // 0x803F7228: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_803F722C:
    // 0x803F722C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_803F7230:
    // 0x803F7230: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x803F7234: jr          $ra
    // 0x803F7238: nop

    return;
    // 0x803F7238: nop

;}
RECOMP_FUNC void func_803F71F0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803F71F0: bne         $a3, $zero, L_803F720C
    if (ctx->r7 != 0) {
        // 0x803F71F4: sll         $a0, $a2, 24
        ctx->r4 = S32(ctx->r6 << 24);
            goto L_803F720C;
    }
    // 0x803F71F4: sll         $a0, $a2, 24
    ctx->r4 = S32(ctx->r6 << 24);
    // 0x803F71F8: andi        $a0, $a3, 0xFF
    ctx->r4 = ctx->r7 & 0XFF;
    // 0x803F71FC: jal         0x803F723C
    // 0x803F7200: andi        $a1, $a2, 0xFF
    ctx->r5 = ctx->r6 & 0XFF;
    func_803F723C(rdram, ctx);
        goto after_0;
    // 0x803F7200: andi        $a1, $a2, 0xFF
    ctx->r5 = ctx->r6 & 0XFF;
    after_0:
    // 0x803F7204: b           L_803F7230
    // 0x803F7208: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_803F7230;
    // 0x803F7208: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_803F720C:
    // 0x803F720C: sll         $a1, $a3, 24
    ctx->r5 = S32(ctx->r7 << 24);
    // 0x803F7210: sra         $t3, $a1, 24
    ctx->r11 = S32(SIGNED(ctx->r5) >> 24);
    // 0x803F7214: sra         $t2, $a0, 24
    ctx->r10 = S32(SIGNED(ctx->r4) >> 24);
    // 0x803F7218: or          $a0, $t2, $zero
    ctx->r4 = ctx->r10 | 0;
    // 0x803F721C: jal         0x803F742C
    // 0x803F7220: or          $a1, $t3, $zero
    ctx->r5 = ctx->r11 | 0;
    func_803F742C(rdram, ctx);
        goto after_1;
    // 0x803F7220: or          $a1, $t3, $zero
    ctx->r5 = ctx->r11 | 0;
    after_1:
    // 0x803F7224: b           L_803F7230
    // 0x803F7228: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_803F7230;
    // 0x803F7228: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x803F722C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_803F7230:
    // 0x803F7230: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x803F7234: jr          $ra
    // 0x803F7238: nop

    return;
    // 0x803F7238: nop

;}
RECOMP_FUNC void func_803F723C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803F723C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x803F7240: or          $a2, $a0, $zero
    ctx->r6 = ctx->r4 | 0;
    // 0x803F7244: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x803F7248: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x803F724C: sll         $a1, $a2, 24
    ctx->r5 = S32(ctx->r6 << 24);
    // 0x803F7250: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x803F7254: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x803F7258: lbu         $a0, -0x326C($a0)
    ctx->r4 = MEM_BU(ctx->r4, -0X326C);
    // 0x803F725C: sra         $t6, $a1, 24
    ctx->r14 = S32(SIGNED(ctx->r5) >> 24);
    // 0x803F7260: jal         0x8006DD88
    // 0x803F7264: or          $a1, $t6, $zero
    ctx->r5 = ctx->r14 | 0;
    func_8006DD88(rdram, ctx);
        goto after_0;
    // 0x803F7264: or          $a1, $t6, $zero
    ctx->r5 = ctx->r14 | 0;
    after_0:
    // 0x803F7268: lbu         $v1, 0x27($sp)
    ctx->r3 = MEM_BU(ctx->r29, 0X27);
    // 0x803F726C: bne         $v0, $zero, L_803F72B8
    if (ctx->r2 != 0) {
        // 0x803F7270: slti        $at, $v1, 0xB
        ctx->r1 = SIGNED(ctx->r3) < 0XB ? 1 : 0;
            goto L_803F72B8;
    }
    // 0x803F7270: slti        $at, $v1, 0xB
    ctx->r1 = SIGNED(ctx->r3) < 0XB ? 1 : 0;
    // 0x803F7274: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x803F7278: sll         $a1, $v1, 24
    ctx->r5 = S32(ctx->r3 << 24);
    // 0x803F727C: sra         $t7, $a1, 24
    ctx->r15 = S32(SIGNED(ctx->r5) >> 24);
    // 0x803F7280: lbu         $a0, -0x326C($a0)
    ctx->r4 = MEM_BU(ctx->r4, -0X326C);
    // 0x803F7284: or          $a1, $t7, $zero
    ctx->r5 = ctx->r15 | 0;
    // 0x803F7288: jal         0x8006DCB0
    // 0x803F728C: sw          $t7, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r15;
    func_8006DCB0(rdram, ctx);
        goto after_1;
    // 0x803F728C: sw          $t7, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r15;
    after_1:
    // 0x803F7290: lw          $a1, 0x18($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X18);
    // 0x803F7294: bne         $v0, $zero, L_803F72B0
    if (ctx->r2 != 0) {
        // 0x803F7298: lui         $a0, 0x8012
        ctx->r4 = S32(0X8012 << 16);
            goto L_803F72B0;
    }
    // 0x803F7298: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x803F729C: lbu         $a0, -0x326C($a0)
    ctx->r4 = MEM_BU(ctx->r4, -0X326C);
    // 0x803F72A0: jal         0x803F7620
    // 0x803F72A4: nop

    func_803F7620(rdram, ctx);
        goto after_2;
    // 0x803F72A4: nop

    after_2:
    // 0x803F72A8: b           L_803F7308
    // 0x803F72AC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_803F7308;
    // 0x803F72AC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_803F72B0:
    // 0x803F72B0: b           L_803F7304
    // 0x803F72B4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_803F7304;
    // 0x803F72B4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_803F72B8:
    // 0x803F72B8: beq         $at, $zero, L_803F7304
    if (ctx->r1 == 0) {
        // 0x803F72BC: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_803F7304;
    }
    // 0x803F72BC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x803F72C0: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x803F72C4: sll         $a1, $v1, 24
    ctx->r5 = S32(ctx->r3 << 24);
    // 0x803F72C8: sra         $t8, $a1, 24
    ctx->r24 = S32(SIGNED(ctx->r5) >> 24);
    // 0x803F72CC: lbu         $a0, -0x326C($a0)
    ctx->r4 = MEM_BU(ctx->r4, -0X326C);
    // 0x803F72D0: or          $a1, $t8, $zero
    ctx->r5 = ctx->r24 | 0;
    // 0x803F72D4: jal         0x8006DCB0
    // 0x803F72D8: sw          $t8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r24;
    func_8006DCB0(rdram, ctx);
        goto after_3;
    // 0x803F72D8: sw          $t8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r24;
    after_3:
    // 0x803F72DC: lw          $a1, 0x18($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X18);
    // 0x803F72E0: bne         $v0, $zero, L_803F72FC
    if (ctx->r2 != 0) {
        // 0x803F72E4: lui         $a0, 0x8012
        ctx->r4 = S32(0X8012 << 16);
            goto L_803F72FC;
    }
    // 0x803F72E4: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x803F72E8: lbu         $a0, -0x326C($a0)
    ctx->r4 = MEM_BU(ctx->r4, -0X326C);
    // 0x803F72EC: jal         0x803F7620
    // 0x803F72F0: nop

    func_803F7620(rdram, ctx);
        goto after_4;
    // 0x803F72F0: nop

    after_4:
    // 0x803F72F4: b           L_803F7308
    // 0x803F72F8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_803F7308;
    // 0x803F72F8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_803F72FC:
    // 0x803F72FC: b           L_803F7304
    // 0x803F7300: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_803F7304;
    // 0x803F7300: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_803F7304:
    // 0x803F7304: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_803F7308:
    // 0x803F7308: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x803F730C: jr          $ra
    // 0x803F7310: nop

    return;
    // 0x803F7310: nop

;}
RECOMP_FUNC void func_803F728C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803F728C: sw          $t7, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r15;
    // 0x803F7290: lw          $a1, 0x18($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X18);
    // 0x803F7294: bne         $v0, $zero, L_803F72B0
    if (ctx->r2 != 0) {
        // 0x803F7298: lui         $a0, 0x8012
        ctx->r4 = S32(0X8012 << 16);
            goto L_803F72B0;
    }
    // 0x803F7298: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x803F729C: lbu         $a0, -0x326C($a0)
    ctx->r4 = MEM_BU(ctx->r4, -0X326C);
    // 0x803F72A0: jal         0x803F7620
    // 0x803F72A4: nop

    func_803F7620(rdram, ctx);
        goto after_0;
    // 0x803F72A4: nop

    after_0:
    // 0x803F72A8: b           L_803F7308
    // 0x803F72AC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_803F7308;
    // 0x803F72AC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_803F72B0:
    // 0x803F72B0: b           L_803F7304
    // 0x803F72B4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_803F7304;
    // 0x803F72B4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x803F72B8: beq         $at, $zero, L_803F7304
    if (ctx->r1 == 0) {
        // 0x803F72BC: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_803F7304;
    }
    // 0x803F72BC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x803F72C0: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x803F72C4: sll         $a1, $v1, 24
    ctx->r5 = S32(ctx->r3 << 24);
    // 0x803F72C8: sra         $t8, $a1, 24
    ctx->r24 = S32(SIGNED(ctx->r5) >> 24);
    // 0x803F72CC: lbu         $a0, -0x326C($a0)
    ctx->r4 = MEM_BU(ctx->r4, -0X326C);
    // 0x803F72D0: or          $a1, $t8, $zero
    ctx->r5 = ctx->r24 | 0;
    // 0x803F72D4: jal         0x8006DCB0
    // 0x803F72D8: sw          $t8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r24;
    func_8006DCB0(rdram, ctx);
        goto after_1;
    // 0x803F72D8: sw          $t8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r24;
    after_1:
    // 0x803F72DC: lw          $a1, 0x18($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X18);
    // 0x803F72E0: bne         $v0, $zero, L_803F72FC
    if (ctx->r2 != 0) {
        // 0x803F72E4: lui         $a0, 0x8012
        ctx->r4 = S32(0X8012 << 16);
            goto L_803F72FC;
    }
    // 0x803F72E4: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x803F72E8: lbu         $a0, -0x326C($a0)
    ctx->r4 = MEM_BU(ctx->r4, -0X326C);
    // 0x803F72EC: jal         0x803F7620
    // 0x803F72F0: nop

    func_803F7620(rdram, ctx);
        goto after_2;
    // 0x803F72F0: nop

    after_2:
    // 0x803F72F4: b           L_803F7308
    // 0x803F72F8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_803F7308;
    // 0x803F72F8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_803F72FC:
    // 0x803F72FC: b           L_803F7304
    // 0x803F7300: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_803F7304;
    // 0x803F7300: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_803F7304:
    // 0x803F7304: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_803F7308:
    // 0x803F7308: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x803F730C: jr          $ra
    // 0x803F7310: nop

    return;
    // 0x803F7310: nop

;}
RECOMP_FUNC void func_803F7314(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803F7314: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x803F7318: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x803F731C: or          $t6, $a0, $zero
    ctx->r14 = ctx->r4 | 0;
    // 0x803F7320: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x803F7324: sll         $a0, $t6, 24
    ctx->r4 = S32(ctx->r14 << 24);
    // 0x803F7328: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x803F732C: sra         $t7, $a0, 24
    ctx->r15 = S32(SIGNED(ctx->r4) >> 24);
    // 0x803F7330: lb          $a1, 0x1F($sp)
    ctx->r5 = MEM_B(ctx->r29, 0X1F);
    // 0x803F7334: or          $a0, $t7, $zero
    ctx->r4 = ctx->r15 | 0;
    // 0x803F7338: jal         0x803F7564
    // 0x803F733C: sb          $t6, 0x1B($sp)
    MEM_B(0X1B, ctx->r29) = ctx->r14;
    func_803F7564(rdram, ctx);
        goto after_0;
    // 0x803F733C: sb          $t6, 0x1B($sp)
    MEM_B(0X1B, ctx->r29) = ctx->r14;
    after_0:
    // 0x803F7340: lb          $a2, 0x1B($sp)
    ctx->r6 = MEM_B(ctx->r29, 0X1B);
    // 0x803F7344: beq         $v0, $zero, L_803F7374
    if (ctx->r2 == 0) {
        // 0x803F7348: addiu       $at, $zero, 0x1
        ctx->r1 = ADD32(0, 0X1);
            goto L_803F7374;
    }
    // 0x803F7348: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x803F734C: beq         $v0, $at, L_803F737C
    if (ctx->r2 == ctx->r1) {
        // 0x803F7350: lui         $a0, 0x8012
        ctx->r4 = S32(0X8012 << 16);
            goto L_803F737C;
    }
    // 0x803F7350: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x803F7354: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x803F7358: beq         $v0, $at, L_803F73C8
    if (ctx->r2 == ctx->r1) {
        // 0x803F735C: lui         $a0, 0x8012
        ctx->r4 = S32(0X8012 << 16);
            goto L_803F73C8;
    }
    // 0x803F735C: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x803F7360: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x803F7364: beq         $v0, $at, L_803F7414
    if (ctx->r2 == ctx->r1) {
        // 0x803F7368: nop
    
            goto L_803F7414;
    }
    // 0x803F7368: nop

    // 0x803F736C: b           L_803F741C
    // 0x803F7370: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_803F741C;
    // 0x803F7370: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_803F7374:
    // 0x803F7374: b           L_803F741C
    // 0x803F7378: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_803F741C;
    // 0x803F7378: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_803F737C:
    // 0x803F737C: sll         $a1, $a2, 24
    ctx->r5 = S32(ctx->r6 << 24);
    // 0x803F7380: sra         $t8, $a1, 24
    ctx->r24 = S32(SIGNED(ctx->r5) >> 24);
    // 0x803F7384: lbu         $a0, -0x326C($a0)
    ctx->r4 = MEM_BU(ctx->r4, -0X326C);
    // 0x803F7388: jal         0x803F75C0
    // 0x803F738C: or          $a1, $t8, $zero
    ctx->r5 = ctx->r24 | 0;
    func_803F75C0(rdram, ctx);
        goto after_1;
    // 0x803F738C: or          $a1, $t8, $zero
    ctx->r5 = ctx->r24 | 0;
    after_1:
    // 0x803F7390: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x803F7394: bne         $v0, $at, L_803F73C0
    if (ctx->r2 != ctx->r1) {
        // 0x803F7398: lui         $a0, 0x8012
        ctx->r4 = S32(0X8012 << 16);
            goto L_803F73C0;
    }
    // 0x803F7398: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x803F739C: lbu         $a0, -0x326C($a0)
    ctx->r4 = MEM_BU(ctx->r4, -0X326C);
    // 0x803F73A0: lb          $a1, 0x1F($sp)
    ctx->r5 = MEM_B(ctx->r29, 0X1F);
    // 0x803F73A4: jal         0x803F75C0
    // 0x803F73A8: nop

    func_803F75C0(rdram, ctx);
        goto after_2;
    // 0x803F73A8: nop

    after_2:
    // 0x803F73AC: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x803F73B0: bne         $v0, $at, L_803F73C0
    if (ctx->r2 != ctx->r1) {
        // 0x803F73B4: nop
    
            goto L_803F73C0;
    }
    // 0x803F73B4: nop

    // 0x803F73B8: b           L_803F741C
    // 0x803F73BC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_803F741C;
    // 0x803F73BC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_803F73C0:
    // 0x803F73C0: b           L_803F741C
    // 0x803F73C4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_803F741C;
    // 0x803F73C4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_803F73C8:
    // 0x803F73C8: sll         $a1, $a2, 24
    ctx->r5 = S32(ctx->r6 << 24);
    // 0x803F73CC: sra         $t9, $a1, 24
    ctx->r25 = S32(SIGNED(ctx->r5) >> 24);
    // 0x803F73D0: lbu         $a0, -0x326C($a0)
    ctx->r4 = MEM_BU(ctx->r4, -0X326C);
    // 0x803F73D4: jal         0x803F75C0
    // 0x803F73D8: or          $a1, $t9, $zero
    ctx->r5 = ctx->r25 | 0;
    func_803F75C0(rdram, ctx);
        goto after_3;
    // 0x803F73D8: or          $a1, $t9, $zero
    ctx->r5 = ctx->r25 | 0;
    after_3:
    // 0x803F73DC: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x803F73E0: bne         $v0, $at, L_803F740C
    if (ctx->r2 != ctx->r1) {
        // 0x803F73E4: lui         $a0, 0x8012
        ctx->r4 = S32(0X8012 << 16);
            goto L_803F740C;
    }
    // 0x803F73E4: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x803F73E8: lbu         $a0, -0x326C($a0)
    ctx->r4 = MEM_BU(ctx->r4, -0X326C);
    // 0x803F73EC: lb          $a1, 0x1F($sp)
    ctx->r5 = MEM_B(ctx->r29, 0X1F);
    // 0x803F73F0: jal         0x803F75C0
    // 0x803F73F4: nop

    func_803F75C0(rdram, ctx);
        goto after_4;
    // 0x803F73F4: nop

    after_4:
    // 0x803F73F8: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x803F73FC: bne         $v0, $at, L_803F740C
    if (ctx->r2 != ctx->r1) {
        // 0x803F7400: nop
    
            goto L_803F740C;
    }
    // 0x803F7400: nop

    // 0x803F7404: b           L_803F741C
    // 0x803F7408: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_803F741C;
    // 0x803F7408: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_803F740C:
    // 0x803F740C: b           L_803F741C
    // 0x803F7410: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_803F741C;
    // 0x803F7410: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_803F7414:
    // 0x803F7414: b           L_803F741C
    // 0x803F7418: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_803F741C;
    // 0x803F7418: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_803F741C:
    // 0x803F741C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x803F7420: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x803F7424: jr          $ra
    // 0x803F7428: nop

    return;
    // 0x803F7428: nop

;}
