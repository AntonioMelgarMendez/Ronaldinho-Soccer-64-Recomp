#include "iss64_recomp.h"
#include "funcs.h"

RECOMP_FUNC void func_8008E418(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8008E418: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x8008E41C: sw          $a1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r5;
    // 0x8008E420: lbu         $t8, 0x34($sp)
    ctx->r24 = MEM_BU(ctx->r29, 0X34);
    // 0x8008E424: lbu         $t6, 0x35($sp)
    ctx->r14 = MEM_BU(ctx->r29, 0X35);
    // 0x8008E428: sw          $a0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r4;
    // 0x8008E42C: lw          $t2, 0x30($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X30);
    // 0x8008E430: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8008E434: sw          $a2, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r6;
    // 0x8008E438: sw          $zero, 0x24($sp)
    MEM_W(0X24, ctx->r29) = 0;
    // 0x8008E43C: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x8008E440: bgez        $t6, L_8008E450
    if (SIGNED(ctx->r14) >= 0) {
        // 0x8008E444: sra         $t7, $t6, 2
        ctx->r15 = S32(SIGNED(ctx->r14) >> 2);
            goto L_8008E450;
    }
    // 0x8008E444: sra         $t7, $t6, 2
    ctx->r15 = S32(SIGNED(ctx->r14) >> 2);
    // 0x8008E448: addiu       $at, $t6, 0x3
    ctx->r1 = ADD32(ctx->r14, 0X3);
    // 0x8008E44C: sra         $t7, $at, 2
    ctx->r15 = S32(SIGNED(ctx->r1) >> 2);
L_8008E450:
    // 0x8008E450: bgez        $t8, L_8008E464
    if (SIGNED(ctx->r24) >= 0) {
        // 0x8008E454: andi        $t9, $t8, 0x7
        ctx->r25 = ctx->r24 & 0X7;
            goto L_8008E464;
    }
    // 0x8008E454: andi        $t9, $t8, 0x7
    ctx->r25 = ctx->r24 & 0X7;
    // 0x8008E458: beq         $t9, $zero, L_8008E464
    if (ctx->r25 == 0) {
        // 0x8008E45C: nop
    
            goto L_8008E464;
    }
    // 0x8008E45C: nop

    // 0x8008E460: addiu       $t9, $t9, -0x8
    ctx->r25 = ADD32(ctx->r25, -0X8);
L_8008E464:
    // 0x8008E464: sll         $t0, $t9, 5
    ctx->r8 = S32(ctx->r25 << 5);
    // 0x8008E468: addu        $t1, $t7, $t0
    ctx->r9 = ADD32(ctx->r15, ctx->r8);
    // 0x8008E46C: sw          $t1, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r9;
    // 0x8008E470: sb          $zero, 0x23($sp)
    MEM_B(0X23, ctx->r29) = 0;
    // 0x8008E474: lbu         $t3, 0x64($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X64);
    // 0x8008E478: blez        $t3, L_8008E5EC
    if (SIGNED(ctx->r11) <= 0) {
        // 0x8008E47C: nop
    
            goto L_8008E5EC;
    }
    // 0x8008E47C: nop

L_8008E480:
    // 0x8008E480: lbu         $t4, 0x23($sp)
    ctx->r12 = MEM_BU(ctx->r29, 0X23);
    // 0x8008E484: blez        $t4, L_8008E498
    if (SIGNED(ctx->r12) <= 0) {
        // 0x8008E488: nop
    
            goto L_8008E498;
    }
    // 0x8008E488: nop

    // 0x8008E48C: addiu       $t5, $zero, 0x1
    ctx->r13 = ADD32(0, 0X1);
    // 0x8008E490: b           L_8008E4A4
    // 0x8008E494: sw          $t5, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r13;
        goto L_8008E4A4;
    // 0x8008E494: sw          $t5, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r13;
L_8008E498:
    // 0x8008E498: lw          $t6, 0x30($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X30);
    // 0x8008E49C: lw          $t8, 0x60($t6)
    ctx->r24 = MEM_W(ctx->r14, 0X60);
    // 0x8008E4A0: sw          $t8, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r24;
L_8008E4A4:
    // 0x8008E4A4: lbu         $t9, 0x23($sp)
    ctx->r25 = MEM_BU(ctx->r29, 0X23);
    // 0x8008E4A8: lbu         $t7, 0x34($sp)
    ctx->r15 = MEM_BU(ctx->r29, 0X34);
    // 0x8008E4AC: beq         $t9, $t7, L_8008E4EC
    if (ctx->r25 == ctx->r15) {
        // 0x8008E4B0: nop
    
            goto L_8008E4EC;
    }
    // 0x8008E4B0: nop

    // 0x8008E4B4: lw          $t0, 0x38($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X38);
    // 0x8008E4B8: lw          $t1, 0x28($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X28);
    // 0x8008E4BC: addiu       $t5, $zero, 0x1
    ctx->r13 = ADD32(0, 0X1);
    // 0x8008E4C0: addu        $t2, $t0, $t1
    ctx->r10 = ADD32(ctx->r8, ctx->r9);
    // 0x8008E4C4: lbu         $t3, 0x101($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X101);
    // 0x8008E4C8: bgez        $t9, L_8008E4DC
    if (SIGNED(ctx->r25) >= 0) {
        // 0x8008E4CC: andi        $t4, $t9, 0x7
        ctx->r12 = ctx->r25 & 0X7;
            goto L_8008E4DC;
    }
    // 0x8008E4CC: andi        $t4, $t9, 0x7
    ctx->r12 = ctx->r25 & 0X7;
    // 0x8008E4D0: beq         $t4, $zero, L_8008E4DC
    if (ctx->r12 == 0) {
        // 0x8008E4D4: nop
    
            goto L_8008E4DC;
    }
    // 0x8008E4D4: nop

    // 0x8008E4D8: addiu       $t4, $t4, -0x8
    ctx->r12 = ADD32(ctx->r12, -0X8);
L_8008E4DC:
    // 0x8008E4DC: sllv        $t6, $t5, $t4
    ctx->r14 = S32(ctx->r13 << (ctx->r12 & 31));
    // 0x8008E4E0: and         $t8, $t3, $t6
    ctx->r24 = ctx->r11 & ctx->r14;
    // 0x8008E4E4: beq         $t8, $zero, L_8008E5C8
    if (ctx->r24 == 0) {
        // 0x8008E4E8: nop
    
            goto L_8008E5C8;
    }
    // 0x8008E4E8: nop

L_8008E4EC:
    // 0x8008E4EC: lw          $t0, 0x38($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X38);
    // 0x8008E4F0: lbu         $t7, 0x23($sp)
    ctx->r15 = MEM_BU(ctx->r29, 0X23);
    // 0x8008E4F4: lbu         $t1, 0x100($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X100);
    // 0x8008E4F8: beq         $t7, $t1, L_8008E540
    if (ctx->r15 == ctx->r9) {
        // 0x8008E4FC: nop
    
            goto L_8008E540;
    }
    // 0x8008E4FC: nop

    // 0x8008E500: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    // 0x8008E504: or          $a1, $t0, $zero
    ctx->r5 = ctx->r8 | 0;
    // 0x8008E508: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x8008E50C: jal         0x8008D47C
    // 0x8008E510: or          $a3, $t7, $zero
    ctx->r7 = ctx->r15 | 0;
    func_8008D47C(rdram, ctx);
        goto after_0;
    // 0x8008E510: or          $a3, $t7, $zero
    ctx->r7 = ctx->r15 | 0;
    after_0:
    // 0x8008E514: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    // 0x8008E518: lw          $t2, 0x18($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X18);
    // 0x8008E51C: beq         $t2, $zero, L_8008E534
    if (ctx->r10 == 0) {
        // 0x8008E520: addiu       $at, $zero, 0x3
        ctx->r1 = ADD32(0, 0X3);
            goto L_8008E534;
    }
    // 0x8008E520: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x8008E524: beq         $t2, $at, L_8008E534
    if (ctx->r10 == ctx->r1) {
        // 0x8008E528: nop
    
            goto L_8008E534;
    }
    // 0x8008E528: nop

    // 0x8008E52C: b           L_8008E5F0
    // 0x8008E530: or          $v0, $t2, $zero
    ctx->r2 = ctx->r10 | 0;
        goto L_8008E5F0;
    // 0x8008E530: or          $v0, $t2, $zero
    ctx->r2 = ctx->r10 | 0;
L_8008E534:
    // 0x8008E534: lbu         $t9, 0x23($sp)
    ctx->r25 = MEM_BU(ctx->r29, 0X23);
    // 0x8008E538: lw          $t5, 0x38($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X38);
    // 0x8008E53C: sb          $t9, 0x100($t5)
    MEM_B(0X100, ctx->r13) = ctx->r25;
L_8008E540:
    // 0x8008E540: lw          $t3, 0x24($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X24);
    // 0x8008E544: lw          $t4, 0x1C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X1C);
    // 0x8008E548: slti        $at, $t3, 0x2
    ctx->r1 = SIGNED(ctx->r11) < 0X2 ? 1 : 0;
    // 0x8008E54C: beq         $at, $zero, L_8008E5B0
    if (ctx->r1 == 0) {
        // 0x8008E550: sw          $t4, 0x2C($sp)
        MEM_W(0X2C, ctx->r29) = ctx->r12;
            goto L_8008E5B0;
    }
    // 0x8008E550: sw          $t4, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r12;
    // 0x8008E554: slti        $at, $t4, 0x80
    ctx->r1 = SIGNED(ctx->r12) < 0X80 ? 1 : 0;
    // 0x8008E558: beq         $at, $zero, L_8008E5B0
    if (ctx->r1 == 0) {
        // 0x8008E55C: nop
    
            goto L_8008E5B0;
    }
    // 0x8008E55C: nop

L_8008E560:
    // 0x8008E560: lw          $t8, 0x2C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X2C);
    // 0x8008E564: lw          $t6, 0x38($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X38);
    // 0x8008E568: lhu         $t2, 0x34($sp)
    ctx->r10 = MEM_HU(ctx->r29, 0X34);
    // 0x8008E56C: sll         $t1, $t8, 1
    ctx->r9 = S32(ctx->r24 << 1);
    // 0x8008E570: addu        $t0, $t6, $t1
    ctx->r8 = ADD32(ctx->r14, ctx->r9);
    // 0x8008E574: lhu         $t7, 0x0($t0)
    ctx->r15 = MEM_HU(ctx->r8, 0X0);
    // 0x8008E578: bne         $t7, $t2, L_8008E58C
    if (ctx->r15 != ctx->r10) {
        // 0x8008E57C: nop
    
            goto L_8008E58C;
    }
    // 0x8008E57C: nop

    // 0x8008E580: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    // 0x8008E584: addiu       $t5, $t9, 0x1
    ctx->r13 = ADD32(ctx->r25, 0X1);
    // 0x8008E588: sw          $t5, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r13;
L_8008E58C:
    // 0x8008E58C: lw          $t3, 0x2C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X2C);
    // 0x8008E590: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x8008E594: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x8008E598: slti        $at, $t8, 0x2
    ctx->r1 = SIGNED(ctx->r24) < 0X2 ? 1 : 0;
    // 0x8008E59C: beq         $at, $zero, L_8008E5B0
    if (ctx->r1 == 0) {
        // 0x8008E5A0: sw          $t4, 0x2C($sp)
        MEM_W(0X2C, ctx->r29) = ctx->r12;
            goto L_8008E5B0;
    }
    // 0x8008E5A0: sw          $t4, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r12;
    // 0x8008E5A4: slti        $at, $t4, 0x80
    ctx->r1 = SIGNED(ctx->r12) < 0X80 ? 1 : 0;
    // 0x8008E5A8: bne         $at, $zero, L_8008E560
    if (ctx->r1 != 0) {
        // 0x8008E5AC: nop
    
            goto L_8008E560;
    }
    // 0x8008E5AC: nop

L_8008E5B0:
    // 0x8008E5B0: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x8008E5B4: slti        $at, $t6, 0x2
    ctx->r1 = SIGNED(ctx->r14) < 0X2 ? 1 : 0;
    // 0x8008E5B8: bne         $at, $zero, L_8008E5C8
    if (ctx->r1 != 0) {
        // 0x8008E5BC: nop
    
            goto L_8008E5C8;
    }
    // 0x8008E5BC: nop

    // 0x8008E5C0: b           L_8008E5F0
    // 0x8008E5C4: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
        goto L_8008E5F0;
    // 0x8008E5C4: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
L_8008E5C8:
    // 0x8008E5C8: lbu         $t1, 0x23($sp)
    ctx->r9 = MEM_BU(ctx->r29, 0X23);
    // 0x8008E5CC: lw          $t2, 0x30($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X30);
    // 0x8008E5D0: addiu       $t0, $t1, 0x1
    ctx->r8 = ADD32(ctx->r9, 0X1);
    // 0x8008E5D4: sb          $t0, 0x23($sp)
    MEM_B(0X23, ctx->r29) = ctx->r8;
    // 0x8008E5D8: lbu         $t9, 0x64($t2)
    ctx->r25 = MEM_BU(ctx->r10, 0X64);
    // 0x8008E5DC: andi        $t7, $t0, 0xFF
    ctx->r15 = ctx->r8 & 0XFF;
    // 0x8008E5E0: slt         $at, $t7, $t9
    ctx->r1 = SIGNED(ctx->r15) < SIGNED(ctx->r25) ? 1 : 0;
    // 0x8008E5E4: bne         $at, $zero, L_8008E480
    if (ctx->r1 != 0) {
        // 0x8008E5E8: nop
    
            goto L_8008E480;
    }
    // 0x8008E5E8: nop

L_8008E5EC:
    // 0x8008E5EC: lw          $v0, 0x24($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X24);
L_8008E5F0:
    // 0x8008E5F0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8008E5F4: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x8008E5F8: jr          $ra
    // 0x8008E5FC: nop

    return;
    // 0x8008E5FC: nop

;}
RECOMP_FUNC void func_8008E600(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8008E600: addiu       $sp, $sp, -0x60
    ctx->r29 = ADD32(ctx->r29, -0X60);
    // 0x8008E604: lw          $t8, 0x70($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X70);
    // 0x8008E608: lui         $t6, 0x801C
    ctx->r14 = S32(0X801C << 16);
    // 0x8008E60C: addiu       $t6, $t6, -0x7690
    ctx->r14 = ADD32(ctx->r14, -0X7690);
    // 0x8008E610: addiu       $t7, $zero, 0x2
    ctx->r15 = ADD32(0, 0X2);
    // 0x8008E614: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8008E618: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8008E61C: sw          $a0, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r4;
    // 0x8008E620: sw          $a1, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r5;
    // 0x8008E624: sw          $a2, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->r6;
    // 0x8008E628: sw          $a3, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->r7;
    // 0x8008E62C: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8008E630: sw          $zero, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = 0;
    // 0x8008E634: sw          $t6, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r14;
    // 0x8008E638: beq         $t8, $at, L_8008E660
    if (ctx->r24 == ctx->r1) {
        // 0x8008E63C: sw          $t7, 0x28($sp)
        MEM_W(0X28, ctx->r29) = ctx->r15;
            goto L_8008E660;
    }
    // 0x8008E63C: sw          $t7, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r15;
    // 0x8008E640: lhu         $t9, 0x6A($sp)
    ctx->r25 = MEM_HU(ctx->r29, 0X6A);
    // 0x8008E644: slti        $at, $t9, 0x7
    ctx->r1 = SIGNED(ctx->r25) < 0X7 ? 1 : 0;
    // 0x8008E648: beq         $at, $zero, L_8008E660
    if (ctx->r1 == 0) {
        // 0x8008E64C: nop
    
            goto L_8008E660;
    }
    // 0x8008E64C: nop

    // 0x8008E650: beq         $t9, $zero, L_8008E660
    if (ctx->r25 == 0) {
        // 0x8008E654: nop
    
            goto L_8008E660;
    }
    // 0x8008E654: nop

    // 0x8008E658: b           L_8008E7F0
    // 0x8008E65C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_8008E7F0;
    // 0x8008E65C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_8008E660:
    // 0x8008E660: jal         0x8008BFC0
    // 0x8008E664: nop

    func_8008BFC0(rdram, ctx);
        goto after_0;
    // 0x8008E664: nop

    after_0:
    // 0x8008E668: addiu       $t0, $zero, 0x3
    ctx->r8 = ADD32(0, 0X3);
    // 0x8008E66C: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x8008E670: sb          $t0, -0x7610($at)
    MEM_B(-0X7610, ctx->r1) = ctx->r8;
    // 0x8008E674: lw          $a0, 0x64($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X64);
    // 0x8008E678: lhu         $a1, 0x6A($sp)
    ctx->r5 = MEM_HU(ctx->r29, 0X6A);
    // 0x8008E67C: jal         0x8008E804
    // 0x8008E680: lw          $a2, 0x6C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X6C);
    func_8008E804(rdram, ctx);
        goto after_1;
    // 0x8008E680: lw          $a2, 0x6C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X6C);
    after_1:
    // 0x8008E684: lui         $a1, 0x801C
    ctx->r5 = S32(0X801C << 16);
    // 0x8008E688: addiu       $a1, $a1, -0x7690
    ctx->r5 = ADD32(ctx->r5, -0X7690);
    // 0x8008E68C: jal         0x8008C030
    // 0x8008E690: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    __osSiRawStartDma_recomp(rdram, ctx);
        goto after_2;
    // 0x8008E690: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_2:
    // 0x8008E694: sw          $v0, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r2;
    // 0x8008E698: lw          $a0, 0x60($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X60);
    // 0x8008E69C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8008E6A0: jal         0x80081F50
    // 0x8008E6A4: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    osRecvMesg_recomp(rdram, ctx);
        goto after_3;
    // 0x8008E6A4: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_3:
L_8008E6A8:
    // 0x8008E6A8: lui         $a1, 0x801C
    ctx->r5 = S32(0X801C << 16);
    // 0x8008E6AC: addiu       $a1, $a1, -0x7690
    ctx->r5 = ADD32(ctx->r5, -0X7690);
    // 0x8008E6B0: jal         0x8008C030
    // 0x8008E6B4: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    __osSiRawStartDma_recomp(rdram, ctx);
        goto after_4;
    // 0x8008E6B4: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_4:
    // 0x8008E6B8: sw          $v0, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r2;
    // 0x8008E6BC: lw          $a0, 0x60($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X60);
    // 0x8008E6C0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8008E6C4: jal         0x80081F50
    // 0x8008E6C8: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    osRecvMesg_recomp(rdram, ctx);
        goto after_5;
    // 0x8008E6C8: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_5:
    // 0x8008E6CC: lw          $t2, 0x64($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X64);
    // 0x8008E6D0: lui         $t1, 0x801C
    ctx->r9 = S32(0X801C << 16);
    // 0x8008E6D4: addiu       $t1, $t1, -0x7690
    ctx->r9 = ADD32(ctx->r9, -0X7690);
    // 0x8008E6D8: beq         $t2, $zero, L_8008E70C
    if (ctx->r10 == 0) {
        // 0x8008E6DC: sw          $t1, 0x54($sp)
        MEM_W(0X54, ctx->r29) = ctx->r9;
            goto L_8008E70C;
    }
    // 0x8008E6DC: sw          $t1, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r9;
    // 0x8008E6E0: blez        $t2, L_8008E70C
    if (SIGNED(ctx->r10) <= 0) {
        // 0x8008E6E4: sw          $zero, 0x58($sp)
        MEM_W(0X58, ctx->r29) = 0;
            goto L_8008E70C;
    }
    // 0x8008E6E4: sw          $zero, 0x58($sp)
    MEM_W(0X58, ctx->r29) = 0;
L_8008E6E8:
    // 0x8008E6E8: lw          $t5, 0x58($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X58);
    // 0x8008E6EC: lw          $t7, 0x64($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X64);
    // 0x8008E6F0: lw          $t3, 0x54($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X54);
    // 0x8008E6F4: addiu       $t6, $t5, 0x1
    ctx->r14 = ADD32(ctx->r13, 0X1);
    // 0x8008E6F8: slt         $at, $t6, $t7
    ctx->r1 = SIGNED(ctx->r14) < SIGNED(ctx->r15) ? 1 : 0;
    // 0x8008E6FC: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x8008E700: sw          $t6, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r14;
    // 0x8008E704: bne         $at, $zero, L_8008E6E8
    if (ctx->r1 != 0) {
        // 0x8008E708: sw          $t4, 0x54($sp)
        MEM_W(0X54, ctx->r29) = ctx->r12;
            goto L_8008E6E8;
    }
    // 0x8008E708: sw          $t4, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r12;
L_8008E70C:
    // 0x8008E70C: lw          $t9, 0x54($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X54);
    // 0x8008E710: addiu       $t8, $sp, 0x2C
    ctx->r24 = ADD32(ctx->r29, 0X2C);
    // 0x8008E714: addiu       $t1, $t9, 0x24
    ctx->r9 = ADD32(ctx->r25, 0X24);
L_8008E718:
    // 0x8008E718: lwl         $at, 0x0($t9)
    ctx->r1 = do_lwl(rdram, ctx->r1, ctx->r25, 0X0);
    // 0x8008E71C: lwr         $at, 0x3($t9)
    ctx->r1 = do_lwr(rdram, ctx->r1, ctx->r25, 0X3);
    // 0x8008E720: addiu       $t9, $t9, 0xC
    ctx->r25 = ADD32(ctx->r25, 0XC);
    // 0x8008E724: addiu       $t8, $t8, 0xC
    ctx->r24 = ADD32(ctx->r24, 0XC);
    // 0x8008E728: sw          $at, -0xC($t8)
    MEM_W(-0XC, ctx->r24) = ctx->r1;
    // 0x8008E72C: lwl         $at, -0x8($t9)
    ctx->r1 = do_lwl(rdram, ctx->r1, ctx->r25, -0X8);
    // 0x8008E730: lwr         $at, -0x5($t9)
    ctx->r1 = do_lwr(rdram, ctx->r1, ctx->r25, -0X5);
    // 0x8008E734: sw          $at, -0x8($t8)
    MEM_W(-0X8, ctx->r24) = ctx->r1;
    // 0x8008E738: lwl         $at, -0x4($t9)
    ctx->r1 = do_lwl(rdram, ctx->r1, ctx->r25, -0X4);
    // 0x8008E73C: lwr         $at, -0x1($t9)
    ctx->r1 = do_lwr(rdram, ctx->r1, ctx->r25, -0X1);
    // 0x8008E740: bne         $t9, $t1, L_8008E718
    if (ctx->r25 != ctx->r9) {
        // 0x8008E744: sw          $at, -0x4($t8)
        MEM_W(-0X4, ctx->r24) = ctx->r1;
            goto L_8008E718;
    }
    // 0x8008E744: sw          $at, -0x4($t8)
    MEM_W(-0X4, ctx->r24) = ctx->r1;
    // 0x8008E748: lwl         $at, 0x0($t9)
    ctx->r1 = do_lwl(rdram, ctx->r1, ctx->r25, 0X0);
    // 0x8008E74C: lwr         $at, 0x3($t9)
    ctx->r1 = do_lwr(rdram, ctx->r1, ctx->r25, 0X3);
    // 0x8008E750: sw          $at, 0x0($t8)
    MEM_W(0X0, ctx->r24) = ctx->r1;
    // 0x8008E754: lbu         $t2, 0x2E($sp)
    ctx->r10 = MEM_BU(ctx->r29, 0X2E);
    // 0x8008E758: andi        $t3, $t2, 0xC0
    ctx->r11 = ctx->r10 & 0XC0;
    // 0x8008E75C: sra         $t4, $t3, 4
    ctx->r12 = S32(SIGNED(ctx->r11) >> 4);
    // 0x8008E760: bne         $t4, $zero, L_8008E7B4
    if (ctx->r12 != 0) {
        // 0x8008E764: sw          $t4, 0x5C($sp)
        MEM_W(0X5C, ctx->r29) = ctx->r12;
            goto L_8008E7B4;
    }
    // 0x8008E764: sw          $t4, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r12;
    // 0x8008E768: jal         0x80090360
    // 0x8008E76C: lw          $a0, 0x6C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X6C);
    func_80090360(rdram, ctx);
        goto after_6;
    // 0x8008E76C: lw          $a0, 0x6C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X6C);
    after_6:
    // 0x8008E770: lbu         $t5, 0x52($sp)
    ctx->r13 = MEM_BU(ctx->r29, 0X52);
    // 0x8008E774: beq         $v0, $t5, L_8008E7BC
    if (ctx->r2 == ctx->r13) {
        // 0x8008E778: nop
    
            goto L_8008E7BC;
    }
    // 0x8008E778: nop

    // 0x8008E77C: lw          $a0, 0x60($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X60);
    // 0x8008E780: jal         0x8008C9A0
    // 0x8008E784: lw          $a1, 0x64($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X64);
    __osPfsGetStatus_recomp(rdram, ctx);
        goto after_7;
    // 0x8008E784: lw          $a1, 0x64($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X64);
    after_7:
    // 0x8008E788: sw          $v0, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r2;
    // 0x8008E78C: lw          $t6, 0x5C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X5C);
    // 0x8008E790: beq         $t6, $zero, L_8008E7A8
    if (ctx->r14 == 0) {
        // 0x8008E794: nop
    
            goto L_8008E7A8;
    }
    // 0x8008E794: nop

    // 0x8008E798: jal         0x8008C004
    // 0x8008E79C: nop

    func_8008C004(rdram, ctx);
        goto after_8;
    // 0x8008E79C: nop

    after_8:
    // 0x8008E7A0: b           L_8008E7F0
    // 0x8008E7A4: lw          $v0, 0x5C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X5C);
        goto L_8008E7F0;
    // 0x8008E7A4: lw          $v0, 0x5C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X5C);
L_8008E7A8:
    // 0x8008E7A8: addiu       $t7, $zero, 0x4
    ctx->r15 = ADD32(0, 0X4);
    // 0x8008E7AC: b           L_8008E7BC
    // 0x8008E7B0: sw          $t7, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r15;
        goto L_8008E7BC;
    // 0x8008E7B0: sw          $t7, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r15;
L_8008E7B4:
    // 0x8008E7B4: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x8008E7B8: sw          $t0, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r8;
L_8008E7BC:
    // 0x8008E7BC: lw          $t1, 0x5C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X5C);
    // 0x8008E7C0: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x8008E7C4: bne         $t1, $at, L_8008E7E4
    if (ctx->r9 != ctx->r1) {
        // 0x8008E7C8: nop
    
            goto L_8008E7E4;
    }
    // 0x8008E7C8: nop

    // 0x8008E7CC: lw          $t9, 0x28($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X28);
    // 0x8008E7D0: slti        $s0, $t9, 0x0
    ctx->r16 = SIGNED(ctx->r25) < 0X0 ? 1 : 0;
    // 0x8008E7D4: xori        $s0, $s0, 0x1
    ctx->r16 = ctx->r16 ^ 0X1;
    // 0x8008E7D8: addiu       $t8, $t9, -0x1
    ctx->r24 = ADD32(ctx->r25, -0X1);
    // 0x8008E7DC: bne         $s0, $zero, L_8008E6A8
    if (ctx->r16 != 0) {
        // 0x8008E7E0: sw          $t8, 0x28($sp)
        MEM_W(0X28, ctx->r29) = ctx->r24;
            goto L_8008E6A8;
    }
    // 0x8008E7E0: sw          $t8, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r24;
L_8008E7E4:
    // 0x8008E7E4: jal         0x8008C004
    // 0x8008E7E8: nop

    func_8008C004(rdram, ctx);
        goto after_9;
    // 0x8008E7E8: nop

    after_9:
    // 0x8008E7EC: lw          $v0, 0x5C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X5C);
L_8008E7F0:
    // 0x8008E7F0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8008E7F4: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8008E7F8: addiu       $sp, $sp, 0x60
    ctx->r29 = ADD32(ctx->r29, 0X60);
    // 0x8008E7FC: jr          $ra
    // 0x8008E800: nop

    return;
    // 0x8008E800: nop

;}
RECOMP_FUNC void func_8008E804(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8008E804: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x8008E808: lui         $t6, 0x801C
    ctx->r14 = S32(0X801C << 16);
    // 0x8008E80C: addiu       $t6, $t6, -0x7690
    ctx->r14 = ADD32(ctx->r14, -0X7690);
    // 0x8008E810: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8008E814: sw          $a0, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r4;
    // 0x8008E818: sw          $a1, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r5;
    // 0x8008E81C: sw          $a2, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r6;
    // 0x8008E820: sw          $t6, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r14;
    // 0x8008E824: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
L_8008E828:
    // 0x8008E828: lw          $t7, 0x18($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X18);
    // 0x8008E82C: lw          $t9, 0x18($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X18);
    // 0x8008E830: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x8008E834: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x8008E838: addu        $at, $at, $t8
    ctx->r1 = ADD32(ctx->r1, ctx->r24);
    // 0x8008E83C: sw          $zero, -0x7690($at)
    MEM_W(-0X7690, ctx->r1) = 0;
    // 0x8008E840: addiu       $t0, $t9, 0x1
    ctx->r8 = ADD32(ctx->r25, 0X1);
    // 0x8008E844: slti        $at, $t0, 0x10
    ctx->r1 = SIGNED(ctx->r8) < 0X10 ? 1 : 0;
    // 0x8008E848: bne         $at, $zero, L_8008E828
    if (ctx->r1 != 0) {
        // 0x8008E84C: sw          $t0, 0x18($sp)
        MEM_W(0X18, ctx->r29) = ctx->r8;
            goto L_8008E828;
    }
    // 0x8008E84C: sw          $t0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r8;
    // 0x8008E850: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
    // 0x8008E854: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x8008E858: addiu       $t2, $zero, 0xFF
    ctx->r10 = ADD32(0, 0XFF);
    // 0x8008E85C: addiu       $t3, $zero, 0x23
    ctx->r11 = ADD32(0, 0X23);
    // 0x8008E860: addiu       $t4, $zero, 0x1
    ctx->r12 = ADD32(0, 0X1);
    // 0x8008E864: addiu       $t5, $zero, 0x3
    ctx->r13 = ADD32(0, 0X3);
    // 0x8008E868: sw          $t1, -0x7654($at)
    MEM_W(-0X7654, ctx->r1) = ctx->r9;
    // 0x8008E86C: sb          $t2, 0x1C($sp)
    MEM_B(0X1C, ctx->r29) = ctx->r10;
    // 0x8008E870: sb          $t3, 0x1D($sp)
    MEM_B(0X1D, ctx->r29) = ctx->r11;
    // 0x8008E874: sb          $t4, 0x1E($sp)
    MEM_B(0X1E, ctx->r29) = ctx->r12;
    // 0x8008E878: sb          $t5, 0x1F($sp)
    MEM_B(0X1F, ctx->r29) = ctx->r13;
    // 0x8008E87C: jal         0x800902B0
    // 0x8008E880: lhu         $a0, 0x4E($sp)
    ctx->r4 = MEM_HU(ctx->r29, 0X4E);
    func_800902B0(rdram, ctx);
        goto after_0;
    // 0x8008E880: lhu         $a0, 0x4E($sp)
    ctx->r4 = MEM_HU(ctx->r29, 0X4E);
    after_0:
    // 0x8008E884: lhu         $t6, 0x4E($sp)
    ctx->r14 = MEM_HU(ctx->r29, 0X4E);
    // 0x8008E888: addiu       $t9, $zero, 0xFF
    ctx->r25 = ADD32(0, 0XFF);
    // 0x8008E88C: sb          $t9, 0x42($sp)
    MEM_B(0X42, ctx->r29) = ctx->r25;
    // 0x8008E890: sll         $t7, $t6, 5
    ctx->r15 = S32(ctx->r14 << 5);
    // 0x8008E894: or          $t8, $v0, $t7
    ctx->r24 = ctx->r2 | ctx->r15;
    // 0x8008E898: sh          $t8, 0x20($sp)
    MEM_H(0X20, ctx->r29) = ctx->r24;
    // 0x8008E89C: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
L_8008E8A0:
    // 0x8008E8A0: lw          $t0, 0x50($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X50);
    // 0x8008E8A4: lw          $t2, 0x18($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X18);
    // 0x8008E8A8: lbu         $t1, 0x0($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X0);
    // 0x8008E8AC: addu        $t3, $sp, $t2
    ctx->r11 = ADD32(ctx->r29, ctx->r10);
    // 0x8008E8B0: sb          $t1, 0x22($t3)
    MEM_B(0X22, ctx->r11) = ctx->r9;
    // 0x8008E8B4: lw          $t6, 0x18($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X18);
    // 0x8008E8B8: lw          $t4, 0x50($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X50);
    // 0x8008E8BC: addiu       $t7, $t6, 0x1
    ctx->r15 = ADD32(ctx->r14, 0X1);
    // 0x8008E8C0: slti        $at, $t7, 0x20
    ctx->r1 = SIGNED(ctx->r15) < 0X20 ? 1 : 0;
    // 0x8008E8C4: addiu       $t5, $t4, 0x1
    ctx->r13 = ADD32(ctx->r12, 0X1);
    // 0x8008E8C8: sw          $t7, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r15;
    // 0x8008E8CC: bne         $at, $zero, L_8008E8A0
    if (ctx->r1 != 0) {
        // 0x8008E8D0: sw          $t5, 0x50($sp)
        MEM_W(0X50, ctx->r29) = ctx->r13;
            goto L_8008E8A0;
    }
    // 0x8008E8D0: sw          $t5, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r13;
    // 0x8008E8D4: lw          $t8, 0x48($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X48);
    // 0x8008E8D8: beq         $t8, $zero, L_8008E914
    if (ctx->r24 == 0) {
        // 0x8008E8DC: nop
    
            goto L_8008E914;
    }
    // 0x8008E8DC: nop

    // 0x8008E8E0: blez        $t8, L_8008E914
    if (SIGNED(ctx->r24) <= 0) {
        // 0x8008E8E4: sw          $zero, 0x18($sp)
        MEM_W(0X18, ctx->r29) = 0;
            goto L_8008E914;
    }
    // 0x8008E8E4: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
L_8008E8E8:
    // 0x8008E8E8: lw          $t9, 0x44($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X44);
    // 0x8008E8EC: sb          $zero, 0x0($t9)
    MEM_B(0X0, ctx->r25) = 0;
    // 0x8008E8F0: lw          $t2, 0x18($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X18);
    // 0x8008E8F4: lw          $t4, 0x48($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X48);
    // 0x8008E8F8: lw          $t0, 0x44($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X44);
    // 0x8008E8FC: addiu       $t3, $t2, 0x1
    ctx->r11 = ADD32(ctx->r10, 0X1);
    // 0x8008E900: slt         $at, $t3, $t4
    ctx->r1 = SIGNED(ctx->r11) < SIGNED(ctx->r12) ? 1 : 0;
    // 0x8008E904: addiu       $t1, $t0, 0x1
    ctx->r9 = ADD32(ctx->r8, 0X1);
    // 0x8008E908: sw          $t3, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r11;
    // 0x8008E90C: bne         $at, $zero, L_8008E8E8
    if (ctx->r1 != 0) {
        // 0x8008E910: sw          $t1, 0x44($sp)
        MEM_W(0X44, ctx->r29) = ctx->r9;
            goto L_8008E8E8;
    }
    // 0x8008E910: sw          $t1, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r9;
L_8008E914:
    // 0x8008E914: addiu       $t6, $sp, 0x1C
    ctx->r14 = ADD32(ctx->r29, 0X1C);
    // 0x8008E918: addiu       $t8, $t6, 0x24
    ctx->r24 = ADD32(ctx->r14, 0X24);
    // 0x8008E91C: lw          $t5, 0x44($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X44);
L_8008E920:
    // 0x8008E920: lw          $at, 0x0($t6)
    ctx->r1 = MEM_W(ctx->r14, 0X0);
    // 0x8008E924: addiu       $t6, $t6, 0xC
    ctx->r14 = ADD32(ctx->r14, 0XC);
    // 0x8008E928: addiu       $t5, $t5, 0xC
    ctx->r13 = ADD32(ctx->r13, 0XC);
    // 0x8008E92C: swl         $at, -0xC($t5)
    do_swl(rdram, -0XC, ctx->r13, ctx->r1);
    // 0x8008E930: swr         $at, -0x9($t5)
    do_swr(rdram, -0X9, ctx->r13, ctx->r1);
    // 0x8008E934: lw          $at, -0x8($t6)
    ctx->r1 = MEM_W(ctx->r14, -0X8);
    // 0x8008E938: swl         $at, -0x8($t5)
    do_swl(rdram, -0X8, ctx->r13, ctx->r1);
    // 0x8008E93C: swr         $at, -0x5($t5)
    do_swr(rdram, -0X5, ctx->r13, ctx->r1);
    // 0x8008E940: lw          $at, -0x4($t6)
    ctx->r1 = MEM_W(ctx->r14, -0X4);
    // 0x8008E944: swl         $at, -0x4($t5)
    do_swl(rdram, -0X4, ctx->r13, ctx->r1);
    // 0x8008E948: bne         $t6, $t8, L_8008E920
    if (ctx->r14 != ctx->r24) {
        // 0x8008E94C: swr         $at, -0x1($t5)
        do_swr(rdram, -0X1, ctx->r13, ctx->r1);
            goto L_8008E920;
    }
    // 0x8008E94C: swr         $at, -0x1($t5)
    do_swr(rdram, -0X1, ctx->r13, ctx->r1);
    // 0x8008E950: lw          $at, 0x0($t6)
    ctx->r1 = MEM_W(ctx->r14, 0X0);
    // 0x8008E954: addiu       $t1, $zero, 0xFE
    ctx->r9 = ADD32(0, 0XFE);
    // 0x8008E958: swl         $at, 0x0($t5)
    do_swl(rdram, 0X0, ctx->r13, ctx->r1);
    // 0x8008E95C: swr         $at, 0x3($t5)
    do_swr(rdram, 0X3, ctx->r13, ctx->r1);
    // 0x8008E960: lw          $t9, 0x44($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X44);
    // 0x8008E964: addiu       $t0, $t9, 0x28
    ctx->r8 = ADD32(ctx->r25, 0X28);
    // 0x8008E968: sw          $t0, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r8;
    // 0x8008E96C: sb          $t1, 0x0($t0)
    MEM_B(0X0, ctx->r8) = ctx->r9;
    // 0x8008E970: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8008E974: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    // 0x8008E978: jr          $ra
    // 0x8008E97C: nop

    return;
    // 0x8008E97C: nop

;}
RECOMP_FUNC void func_8008F2E0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8008F2E0: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x8008F2E4: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x8008F2E8: sw          $a0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r4;
    // 0x8008F2EC: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x8008F2F0: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x8008F2F4: jal         0x80088970
    // 0x8008F2F8: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    __osDisableInt_recomp(rdram, ctx);
        goto after_0;
    // 0x8008F2F8: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    after_0:
    // 0x8008F2FC: lw          $t6, 0x38($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X38);
    // 0x8008F300: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x8008F304: bne         $t6, $zero, L_8008F31C
    if (ctx->r14 != 0) {
        // 0x8008F308: nop
    
            goto L_8008F31C;
    }
    // 0x8008F308: nop

    // 0x8008F30C: lui         $t7, 0x800D
    ctx->r15 = S32(0X800D << 16);
    // 0x8008F310: lw          $t7, 0x2670($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X2670);
    // 0x8008F314: b           L_8008F33C
    // 0x8008F318: sw          $t7, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r15;
        goto L_8008F33C;
    // 0x8008F318: sw          $t7, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r15;
L_8008F31C:
    // 0x8008F31C: lw          $t8, 0x38($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X38);
    // 0x8008F320: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8008F324: lhu         $t9, 0x10($t8)
    ctx->r25 = MEM_HU(ctx->r24, 0X10);
    // 0x8008F328: beq         $t9, $at, L_8008F33C
    if (ctx->r25 == ctx->r1) {
        // 0x8008F32C: nop
    
            goto L_8008F33C;
    }
    // 0x8008F32C: nop

    // 0x8008F330: lw          $a0, 0x8($t8)
    ctx->r4 = MEM_W(ctx->r24, 0X8);
    // 0x8008F334: jal         0x80088020
    // 0x8008F338: or          $a1, $t8, $zero
    ctx->r5 = ctx->r24 | 0;
    func_80088020(rdram, ctx);
        goto after_1;
    // 0x8008F338: or          $a1, $t8, $zero
    ctx->r5 = ctx->r24 | 0;
    after_1:
L_8008F33C:
    // 0x8008F33C: lui         $t0, 0x800D
    ctx->r8 = S32(0X800D << 16);
    // 0x8008F340: lw          $t0, 0x266C($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X266C);
    // 0x8008F344: lw          $t1, 0x38($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X38);
    // 0x8008F348: bne         $t0, $t1, L_8008F360
    if (ctx->r8 != ctx->r9) {
        // 0x8008F34C: nop
    
            goto L_8008F360;
    }
    // 0x8008F34C: nop

    // 0x8008F350: lw          $t2, 0xC($t0)
    ctx->r10 = MEM_W(ctx->r8, 0XC);
    // 0x8008F354: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x8008F358: b           L_8008F39C
    // 0x8008F35C: sw          $t2, 0x266C($at)
    MEM_W(0X266C, ctx->r1) = ctx->r10;
        goto L_8008F39C;
    // 0x8008F35C: sw          $t2, 0x266C($at)
    MEM_W(0X266C, ctx->r1) = ctx->r10;
L_8008F360:
    // 0x8008F360: lui         $s1, 0x800D
    ctx->r17 = S32(0X800D << 16);
    // 0x8008F364: lw          $s1, 0x266C($s1)
    ctx->r17 = MEM_W(ctx->r17, 0X266C);
    // 0x8008F368: lw          $s2, 0xC($s1)
    ctx->r18 = MEM_W(ctx->r17, 0XC);
    // 0x8008F36C: beq         $s2, $zero, L_8008F39C
    if (ctx->r18 == 0) {
        // 0x8008F370: nop
    
            goto L_8008F39C;
    }
    // 0x8008F370: nop

L_8008F374:
    // 0x8008F374: lw          $t3, 0x38($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X38);
    // 0x8008F378: bne         $s2, $t3, L_8008F38C
    if (ctx->r18 != ctx->r11) {
        // 0x8008F37C: nop
    
            goto L_8008F38C;
    }
    // 0x8008F37C: nop

    // 0x8008F380: lw          $t4, 0xC($t3)
    ctx->r12 = MEM_W(ctx->r11, 0XC);
    // 0x8008F384: b           L_8008F39C
    // 0x8008F388: sw          $t4, 0xC($s1)
    MEM_W(0XC, ctx->r17) = ctx->r12;
        goto L_8008F39C;
    // 0x8008F388: sw          $t4, 0xC($s1)
    MEM_W(0XC, ctx->r17) = ctx->r12;
L_8008F38C:
    // 0x8008F38C: or          $s1, $s2, $zero
    ctx->r17 = ctx->r18 | 0;
    // 0x8008F390: lw          $s2, 0xC($s1)
    ctx->r18 = MEM_W(ctx->r17, 0XC);
    // 0x8008F394: bne         $s2, $zero, L_8008F374
    if (ctx->r18 != 0) {
        // 0x8008F398: nop
    
            goto L_8008F374;
    }
    // 0x8008F398: nop

L_8008F39C:
    // 0x8008F39C: lui         $t6, 0x800D
    ctx->r14 = S32(0X800D << 16);
    // 0x8008F3A0: lw          $t6, 0x2670($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X2670);
    // 0x8008F3A4: lw          $t5, 0x38($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X38);
    // 0x8008F3A8: bne         $t5, $t6, L_8008F3B8
    if (ctx->r13 != ctx->r14) {
        // 0x8008F3AC: nop
    
            goto L_8008F3B8;
    }
    // 0x8008F3AC: nop

    // 0x8008F3B0: jal         0x800887E4
    // 0x8008F3B4: nop

    func_800887E4(rdram, ctx);
        goto after_2;
    // 0x8008F3B4: nop

    after_2:
L_8008F3B8:
    // 0x8008F3B8: jal         0x80088990
    // 0x8008F3BC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    __osRestoreInt_recomp(rdram, ctx);
        goto after_3;
    // 0x8008F3BC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_3:
    // 0x8008F3C0: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x8008F3C4: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8008F3C8: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x8008F3CC: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x8008F3D0: jr          $ra
    // 0x8008F3D4: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    return;
    // 0x8008F3D4: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    // 0x8008F3D8: nop

    // 0x8008F3DC: nop

;}
RECOMP_FUNC void func_8008F3E0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8008F3E0: sw          $zero, 0x0($a0)
    MEM_W(0X0, ctx->r4) = 0;
    // 0x8008F3E4: sw          $a1, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->r5;
    // 0x8008F3E8: sw          $a2, 0x8($a0)
    MEM_W(0X8, ctx->r4) = ctx->r6;
    // 0x8008F3EC: sh          $zero, 0xC($a0)
    MEM_H(0XC, ctx->r4) = 0;
    // 0x8008F3F0: sh          $zero, 0xE($a0)
    MEM_H(0XE, ctx->r4) = 0;
    // 0x8008F3F4: jr          $ra
    // 0x8008F3F8: sw          $a3, 0x10($a0)
    MEM_W(0X10, ctx->r4) = ctx->r7;
    return;
    // 0x8008F3F8: sw          $a3, 0x10($a0)
    MEM_W(0X10, ctx->r4) = ctx->r7;
    // 0x8008F3FC: nop

;}
RECOMP_FUNC void func_8008F400(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8008F400: mtc1        $a1, $f6
    ctx->f6.u32l = ctx->r5;
    // 0x8008F404: lwc1        $f4, 0x10($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X10);
    // 0x8008F408: lwc1        $f16, 0x14($a0)
    ctx->f16.u32l = MEM_W(ctx->r4, 0X14);
    // 0x8008F40C: cvt.s.w     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.fl = CVT_S_W(ctx->f6.u32l);
    // 0x8008F410: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x8008F414: mtc1        $at, $f5
    ctx->f_odd[(5 - 1) * 2] = ctx->r1;
    // 0x8008F418: lui         $at, 0x4010
    ctx->r1 = S32(0X4010 << 16);
    // 0x8008F41C: mul.s       $f10, $f4, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = MUL_S(ctx->f4.fl, ctx->f8.fl);
    // 0x8008F420: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x8008F424: add.s       $f18, $f16, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f18.fl = ctx->f16.fl + ctx->f10.fl;
    // 0x8008F428: swc1        $f18, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->f18.u32l;
    // 0x8008F42C: lwc1        $f6, 0x14($a0)
    ctx->f6.u32l = MEM_W(ctx->r4, 0X14);
    // 0x8008F430: cvt.d.s     $f0, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f0.d = CVT_D_S(ctx->f6.fl);
    // 0x8008F434: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x8008F438: c.lt.d      $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f4.d < ctx->f0.d;
    // 0x8008F43C: nop

    // 0x8008F440: bc1fl       L_8008F468
    if (!c1cs) {
        // 0x8008F444: cvt.s.d     $f18, $f0
        CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.d); 
    ctx->f18.fl = CVT_S_D(ctx->f0.d);
            goto L_8008F468;
    }
    goto skip_0;
    // 0x8008F444: cvt.s.d     $f18, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.d); 
    ctx->f18.fl = CVT_S_D(ctx->f0.d);
    skip_0:
    // 0x8008F448: mtc1        $at, $f9
    ctx->f_odd[(9 - 1) * 2] = ctx->r1;
    // 0x8008F44C: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x8008F450: nop

    // 0x8008F454: sub.d       $f16, $f0, $f8
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f0.d); NAN_CHECK(ctx->f8.d); 
    ctx->f16.d = ctx->f0.d - ctx->f8.d;
    // 0x8008F458: cvt.s.d     $f10, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.d); 
    ctx->f10.fl = CVT_S_D(ctx->f16.d);
    // 0x8008F45C: b           L_8008F46C
    // 0x8008F460: swc1        $f10, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->f10.u32l;
        goto L_8008F46C;
    // 0x8008F460: swc1        $f10, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->f10.u32l;
    // 0x8008F464: cvt.s.d     $f18, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.d); 
    ctx->f18.fl = CVT_S_D(ctx->f0.d);
L_8008F468:
    // 0x8008F468: swc1        $f18, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->f18.u32l;
L_8008F46C:
    // 0x8008F46C: lwc1        $f2, 0x14($a0)
    ctx->f2.u32l = MEM_W(ctx->r4, 0X14);
    // 0x8008F470: lui         $at, 0x3FF0
    ctx->r1 = S32(0X3FF0 << 16);
    // 0x8008F474: mtc1        $at, $f9
    ctx->f_odd[(9 - 1) * 2] = ctx->r1;
    // 0x8008F478: c.lt.s      $f2, $f6
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f2.fl < ctx->f6.fl;
    // 0x8008F47C: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x8008F480: bc1fl       L_8008F490
    if (!c1cs) {
        // 0x8008F484: cvt.d.s     $f4, $f2
        CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f4.d = CVT_D_S(ctx->f2.fl);
            goto L_8008F490;
    }
    goto skip_1;
    // 0x8008F484: cvt.d.s     $f4, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f4.d = CVT_D_S(ctx->f2.fl);
    skip_1:
    // 0x8008F488: neg.s       $f2, $f2
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f2.fl = -ctx->f2.fl;
    // 0x8008F48C: cvt.d.s     $f4, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f4.d = CVT_D_S(ctx->f2.fl);
L_8008F490:
    // 0x8008F490: lwc1        $f10, 0x1C($a0)
    ctx->f10.u32l = MEM_W(ctx->r4, 0X1C);
    // 0x8008F494: sub.d       $f16, $f4, $f8
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f8.d); 
    ctx->f16.d = ctx->f4.d - ctx->f8.d;
    // 0x8008F498: cvt.s.d     $f2, $f16
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.d); 
    ctx->f2.fl = CVT_S_D(ctx->f16.d);
    // 0x8008F49C: mul.s       $f0, $f10, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = MUL_S(ctx->f10.fl, ctx->f2.fl);
    // 0x8008F4A0: jr          $ra
    // 0x8008F4A4: nop

    return;
    // 0x8008F4A4: nop

;}
RECOMP_FUNC void func_8008F4A8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8008F4A8: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8008F4AC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8008F4B0: andi        $v0, $a1, 0xFFFF
    ctx->r2 = ctx->r5 & 0XFFFF;
    // 0x8008F4B4: sll         $t8, $a2, 1
    ctx->r24 = S32(ctx->r6 << 1);
    // 0x8008F4B8: andi        $t9, $t8, 0xFFFF
    ctx->r25 = ctx->r24 & 0XFFFF;
    // 0x8008F4BC: sll         $t7, $v0, 16
    ctx->r15 = S32(ctx->r2 << 16);
    // 0x8008F4C0: lui         $at, 0x800
    ctx->r1 = S32(0X800 << 16);
    // 0x8008F4C4: lui         $t2, 0xB00
    ctx->r10 = S32(0XB00 << 16);
    // 0x8008F4C8: or          $t6, $v0, $at
    ctx->r14 = ctx->r2 | ctx->r1;
    // 0x8008F4CC: or          $t1, $t7, $t9
    ctx->r9 = ctx->r15 | ctx->r25;
    // 0x8008F4D0: ori         $t2, $t2, 0x20
    ctx->r10 = ctx->r10 | 0X20;
    // 0x8008F4D4: or          $t0, $a0, $zero
    ctx->r8 = ctx->r4 | 0;
    // 0x8008F4D8: sw          $t1, 0x4($a3)
    MEM_W(0X4, ctx->r7) = ctx->r9;
    // 0x8008F4DC: sw          $t6, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->r14;
    // 0x8008F4E0: sw          $t2, 0x8($a3)
    MEM_W(0X8, ctx->r7) = ctx->r10;
    // 0x8008F4E4: sw          $t0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r8;
    // 0x8008F4E8: sw          $a3, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r7;
    // 0x8008F4EC: jal         0x80082090
    // 0x8008F4F0: addiu       $a0, $a0, 0x8
    ctx->r4 = ADD32(ctx->r4, 0X8);
    osVirtualToPhysical_recomp(rdram, ctx);
        goto after_0;
    // 0x8008F4F0: addiu       $a0, $a0, 0x8
    ctx->r4 = ADD32(ctx->r4, 0X8);
    after_0:
    // 0x8008F4F4: lw          $a3, 0x34($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X34);
    // 0x8008F4F8: lw          $t0, 0x28($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X28);
    // 0x8008F4FC: lui         $at, 0xE00
    ctx->r1 = S32(0XE00 << 16);
    // 0x8008F500: addiu       $v1, $a3, 0x10
    ctx->r3 = ADD32(ctx->r7, 0X10);
    // 0x8008F504: addiu       $t3, $v1, 0x8
    ctx->r11 = ADD32(ctx->r3, 0X8);
    // 0x8008F508: sw          $v0, 0xC($a3)
    MEM_W(0XC, ctx->r7) = ctx->r2;
    // 0x8008F50C: sw          $t3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r11;
    // 0x8008F510: lw          $t4, 0x2C($t0)
    ctx->r12 = MEM_W(ctx->r8, 0X2C);
    // 0x8008F514: lh          $t7, 0x2($t0)
    ctx->r15 = MEM_H(ctx->r8, 0X2);
    // 0x8008F518: andi        $t5, $t4, 0xFF
    ctx->r13 = ctx->r12 & 0XFF;
    // 0x8008F51C: sll         $t6, $t5, 16
    ctx->r14 = S32(ctx->r13 << 16);
    // 0x8008F520: or          $t8, $t6, $at
    ctx->r24 = ctx->r14 | ctx->r1;
    // 0x8008F524: andi        $t9, $t7, 0xFFFF
    ctx->r25 = ctx->r15 & 0XFFFF;
    // 0x8008F528: or          $t1, $t8, $t9
    ctx->r9 = ctx->r24 | ctx->r25;
    // 0x8008F52C: sw          $t1, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r9;
    // 0x8008F530: lw          $a0, 0x28($t0)
    ctx->r4 = MEM_W(ctx->r8, 0X28);
    // 0x8008F534: jal         0x80082090
    // 0x8008F538: sw          $v1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r3;
    osVirtualToPhysical_recomp(rdram, ctx);
        goto after_1;
    // 0x8008F538: sw          $v1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r3;
    after_1:
    // 0x8008F53C: lw          $a1, 0x18($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X18);
    // 0x8008F540: lw          $t0, 0x28($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X28);
    // 0x8008F544: sw          $v0, 0x4($a1)
    MEM_W(0X4, ctx->r5) = ctx->r2;
    // 0x8008F548: sw          $zero, 0x2C($t0)
    MEM_W(0X2C, ctx->r8) = 0;
    // 0x8008F54C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8008F550: lw          $v0, 0x24($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X24);
    // 0x8008F554: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x8008F558: jr          $ra
    // 0x8008F55C: nop

    return;
    // 0x8008F55C: nop

;}
RECOMP_FUNC void func_8008F560(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8008F560: addiu       $sp, $sp, -0x60
    ctx->r29 = ADD32(ctx->r29, -0X60);
    // 0x8008F564: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8008F568: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8008F56C: lw          $v1, 0x1C($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X1C);
    // 0x8008F570: lw          $v0, 0x14($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X14);
    // 0x8008F574: lw          $t0, 0x70($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X70);
    // 0x8008F578: sll         $t6, $v1, 1
    ctx->r14 = S32(ctx->r3 << 1);
    // 0x8008F57C: sltu        $at, $a1, $v0
    ctx->r1 = ctx->r5 < ctx->r2 ? 1 : 0;
    // 0x8008F580: or          $t2, $a0, $zero
    ctx->r10 = ctx->r4 | 0;
    // 0x8008F584: or          $t5, $a2, $zero
    ctx->r13 = ctx->r6 | 0;
    // 0x8008F588: or          $t3, $a3, $zero
    ctx->r11 = ctx->r7 | 0;
    // 0x8008F58C: beq         $at, $zero, L_8008F598
    if (ctx->r1 == 0) {
        // 0x8008F590: addu        $t1, $v0, $t6
        ctx->r9 = ADD32(ctx->r2, ctx->r14);
            goto L_8008F598;
    }
    // 0x8008F590: addu        $t1, $v0, $t6
    ctx->r9 = ADD32(ctx->r2, ctx->r14);
    // 0x8008F594: addu        $a1, $a1, $t6
    ctx->r5 = ADD32(ctx->r5, ctx->r14);
L_8008F598:
    // 0x8008F598: sll         $a2, $t3, 1
    ctx->r6 = S32(ctx->r11 << 1);
    // 0x8008F59C: addu        $a3, $a2, $a1
    ctx->r7 = ADD32(ctx->r6, ctx->r5);
    // 0x8008F5A0: sltu        $at, $t1, $a3
    ctx->r1 = ctx->r9 < ctx->r7 ? 1 : 0;
    // 0x8008F5A4: beq         $at, $zero, L_8008F698
    if (ctx->r1 == 0) {
        // 0x8008F5A8: addiu       $s0, $t0, 0x8
        ctx->r16 = ADD32(ctx->r8, 0X8);
            goto L_8008F698;
    }
    // 0x8008F5A8: addiu       $s0, $t0, 0x8
    ctx->r16 = ADD32(ctx->r8, 0X8);
    // 0x8008F5AC: subu        $t3, $t1, $a1
    ctx->r11 = SUB32(ctx->r9, ctx->r5);
    // 0x8008F5B0: sra         $t8, $t3, 1
    ctx->r24 = S32(SIGNED(ctx->r11) >> 1);
    // 0x8008F5B4: lui         $t7, 0x800
    ctx->r15 = S32(0X800 << 16);
    // 0x8008F5B8: sw          $t7, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->r15;
    // 0x8008F5BC: sll         $t3, $t8, 1
    ctx->r11 = S32(ctx->r24 << 1);
    // 0x8008F5C0: andi        $t8, $t3, 0xFFFF
    ctx->r24 = ctx->r11 & 0XFFFF;
    // 0x8008F5C4: sll         $t7, $t5, 16
    ctx->r15 = S32(ctx->r13 << 16);
    // 0x8008F5C8: or          $t9, $t7, $t8
    ctx->r25 = ctx->r15 | ctx->r24;
    // 0x8008F5CC: addiu       $s0, $t0, 0x8
    ctx->r16 = ADD32(ctx->r8, 0X8);
    // 0x8008F5D0: sw          $t9, 0x4($t0)
    MEM_W(0X4, ctx->r8) = ctx->r25;
    // 0x8008F5D4: or          $t4, $s0, $zero
    ctx->r12 = ctx->r16 | 0;
    // 0x8008F5D8: lui         $t6, 0x600
    ctx->r14 = S32(0X600 << 16);
    // 0x8008F5DC: sw          $t6, 0x0($t4)
    MEM_W(0X0, ctx->r12) = ctx->r14;
    // 0x8008F5E0: sw          $t5, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->r13;
    // 0x8008F5E4: sw          $t4, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r12;
    // 0x8008F5E8: sw          $t3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r11;
    // 0x8008F5EC: sw          $t2, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r10;
    // 0x8008F5F0: sw          $t1, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r9;
    // 0x8008F5F4: sw          $a3, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r7;
    // 0x8008F5F8: sw          $a2, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r6;
    // 0x8008F5FC: addiu       $s0, $s0, 0x8
    ctx->r16 = ADD32(ctx->r16, 0X8);
    // 0x8008F600: jal         0x80082090
    // 0x8008F604: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    osVirtualToPhysical_recomp(rdram, ctx);
        goto after_0;
    // 0x8008F604: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    after_0:
    // 0x8008F608: lw          $t4, 0x44($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X44);
    // 0x8008F60C: lw          $a3, 0x28($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X28);
    // 0x8008F610: lw          $t1, 0x4C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X4C);
    // 0x8008F614: lw          $t3, 0x24($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X24);
    // 0x8008F618: lw          $t5, 0x68($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X68);
    // 0x8008F61C: lw          $t2, 0x60($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X60);
    // 0x8008F620: or          $v1, $s0, $zero
    ctx->r3 = ctx->r16 | 0;
    // 0x8008F624: lui         $t7, 0x800
    ctx->r15 = S32(0X800 << 16);
    // 0x8008F628: sw          $v0, 0x4($t4)
    MEM_W(0X4, ctx->r12) = ctx->r2;
    // 0x8008F62C: sw          $t7, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r15;
    // 0x8008F630: subu        $t7, $a3, $t1
    ctx->r15 = SUB32(ctx->r7, ctx->r9);
    // 0x8008F634: addu        $t9, $t3, $t5
    ctx->r25 = ADD32(ctx->r11, ctx->r13);
    // 0x8008F638: sll         $t6, $t9, 16
    ctx->r14 = S32(ctx->r25 << 16);
    // 0x8008F63C: sra         $t8, $t7, 1
    ctx->r24 = S32(SIGNED(ctx->r15) >> 1);
    // 0x8008F640: sll         $t9, $t8, 1
    ctx->r25 = S32(ctx->r24 << 1);
    // 0x8008F644: andi        $t7, $t9, 0xFFFF
    ctx->r15 = ctx->r25 & 0XFFFF;
    // 0x8008F648: or          $t8, $t6, $t7
    ctx->r24 = ctx->r14 | ctx->r15;
    // 0x8008F64C: addiu       $s0, $s0, 0x8
    ctx->r16 = ADD32(ctx->r16, 0X8);
    // 0x8008F650: sw          $t8, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r24;
    // 0x8008F654: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x8008F658: lui         $t9, 0x600
    ctx->r25 = S32(0X600 << 16);
    // 0x8008F65C: sw          $t9, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r25;
    // 0x8008F660: lw          $a0, 0x14($t2)
    ctx->r4 = MEM_W(ctx->r10, 0X14);
    // 0x8008F664: sw          $a1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r5;
    // 0x8008F668: jal         0x80082090
    // 0x8008F66C: addiu       $s0, $s0, 0x8
    ctx->r16 = ADD32(ctx->r16, 0X8);
    osVirtualToPhysical_recomp(rdram, ctx);
        goto after_1;
    // 0x8008F66C: addiu       $s0, $s0, 0x8
    ctx->r16 = ADD32(ctx->r16, 0X8);
    after_1:
    // 0x8008F670: lw          $a1, 0x3C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X3C);
    // 0x8008F674: lw          $a2, 0x2C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X2C);
    // 0x8008F678: or          $v1, $s0, $zero
    ctx->r3 = ctx->r16 | 0;
    // 0x8008F67C: lui         $t6, 0x800
    ctx->r14 = S32(0X800 << 16);
    // 0x8008F680: sw          $v0, 0x4($a1)
    MEM_W(0X4, ctx->r5) = ctx->r2;
    // 0x8008F684: andi        $t7, $a2, 0xFFFF
    ctx->r15 = ctx->r6 & 0XFFFF;
    // 0x8008F688: sw          $t7, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r15;
    // 0x8008F68C: sw          $t6, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r14;
    // 0x8008F690: b           L_8008F6D4
    // 0x8008F694: addiu       $s0, $s0, 0x8
    ctx->r16 = ADD32(ctx->r16, 0X8);
        goto L_8008F6D4;
    // 0x8008F694: addiu       $s0, $s0, 0x8
    ctx->r16 = ADD32(ctx->r16, 0X8);
L_8008F698:
    // 0x8008F698: lui         $t8, 0x800
    ctx->r24 = S32(0X800 << 16);
    // 0x8008F69C: sw          $t8, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->r24;
    // 0x8008F6A0: sll         $t6, $t5, 16
    ctx->r14 = S32(ctx->r13 << 16);
    // 0x8008F6A4: andi        $t7, $a2, 0xFFFF
    ctx->r15 = ctx->r6 & 0XFFFF;
    // 0x8008F6A8: or          $t8, $t6, $t7
    ctx->r24 = ctx->r14 | ctx->r15;
    // 0x8008F6AC: sw          $t8, 0x4($t0)
    MEM_W(0X4, ctx->r8) = ctx->r24;
    // 0x8008F6B0: or          $v1, $s0, $zero
    ctx->r3 = ctx->r16 | 0;
    // 0x8008F6B4: lui         $t9, 0x600
    ctx->r25 = S32(0X600 << 16);
    // 0x8008F6B8: sw          $t9, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r25;
    // 0x8008F6BC: sw          $v1, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r3;
    // 0x8008F6C0: addiu       $s0, $s0, 0x8
    ctx->r16 = ADD32(ctx->r16, 0X8);
    // 0x8008F6C4: jal         0x80082090
    // 0x8008F6C8: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    osVirtualToPhysical_recomp(rdram, ctx);
        goto after_2;
    // 0x8008F6C8: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    after_2:
    // 0x8008F6CC: lw          $v1, 0x30($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X30);
    // 0x8008F6D0: sw          $v0, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r2;
L_8008F6D4:
    // 0x8008F6D4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8008F6D8: or          $v0, $s0, $zero
    ctx->r2 = ctx->r16 | 0;
    // 0x8008F6DC: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8008F6E0: jr          $ra
    // 0x8008F6E4: addiu       $sp, $sp, 0x60
    ctx->r29 = ADD32(ctx->r29, 0X60);
    return;
    // 0x8008F6E4: addiu       $sp, $sp, 0x60
    ctx->r29 = ADD32(ctx->r29, 0X60);
;}
RECOMP_FUNC void func_8008F6E8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8008F6E8: addiu       $sp, $sp, -0x60
    ctx->r29 = ADD32(ctx->r29, -0X60);
    // 0x8008F6EC: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8008F6F0: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8008F6F4: lw          $v1, 0x1C($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X1C);
    // 0x8008F6F8: lw          $v0, 0x14($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X14);
    // 0x8008F6FC: lw          $t0, 0x70($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X70);
    // 0x8008F700: sll         $t6, $v1, 1
    ctx->r14 = S32(ctx->r3 << 1);
    // 0x8008F704: sltu        $at, $a1, $v0
    ctx->r1 = ctx->r5 < ctx->r2 ? 1 : 0;
    // 0x8008F708: or          $t2, $a0, $zero
    ctx->r10 = ctx->r4 | 0;
    // 0x8008F70C: or          $t5, $a2, $zero
    ctx->r13 = ctx->r6 | 0;
    // 0x8008F710: or          $t3, $a3, $zero
    ctx->r11 = ctx->r7 | 0;
    // 0x8008F714: beq         $at, $zero, L_8008F720
    if (ctx->r1 == 0) {
        // 0x8008F718: addu        $t1, $v0, $t6
        ctx->r9 = ADD32(ctx->r2, ctx->r14);
            goto L_8008F720;
    }
    // 0x8008F718: addu        $t1, $v0, $t6
    ctx->r9 = ADD32(ctx->r2, ctx->r14);
    // 0x8008F71C: addu        $a1, $a1, $t6
    ctx->r5 = ADD32(ctx->r5, ctx->r14);
L_8008F720:
    // 0x8008F720: sll         $a2, $t3, 1
    ctx->r6 = S32(ctx->r11 << 1);
    // 0x8008F724: addu        $a3, $a2, $a1
    ctx->r7 = ADD32(ctx->r6, ctx->r5);
    // 0x8008F728: sltu        $at, $t1, $a3
    ctx->r1 = ctx->r9 < ctx->r7 ? 1 : 0;
    // 0x8008F72C: beq         $at, $zero, L_8008F80C
    if (ctx->r1 == 0) {
        // 0x8008F730: addiu       $s0, $t0, 0x8
        ctx->r16 = ADD32(ctx->r8, 0X8);
            goto L_8008F80C;
    }
    // 0x8008F730: addiu       $s0, $t0, 0x8
    ctx->r16 = ADD32(ctx->r8, 0X8);
    // 0x8008F734: andi        $t7, $t5, 0xFFFF
    ctx->r15 = ctx->r13 & 0XFFFF;
    // 0x8008F738: lui         $at, 0x800
    ctx->r1 = S32(0X800 << 16);
    // 0x8008F73C: subu        $t3, $t1, $a1
    ctx->r11 = SUB32(ctx->r9, ctx->r5);
    // 0x8008F740: sra         $t9, $t3, 1
    ctx->r25 = S32(SIGNED(ctx->r11) >> 1);
    // 0x8008F744: or          $t8, $t7, $at
    ctx->r24 = ctx->r15 | ctx->r1;
    // 0x8008F748: sll         $t6, $t9, 1
    ctx->r14 = S32(ctx->r25 << 1);
    // 0x8008F74C: andi        $t7, $t6, 0xFFFF
    ctx->r15 = ctx->r14 & 0XFFFF;
    // 0x8008F750: sw          $t8, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->r24;
    // 0x8008F754: addiu       $s0, $t0, 0x8
    ctx->r16 = ADD32(ctx->r8, 0X8);
    // 0x8008F758: sw          $t7, 0x4($t0)
    MEM_W(0X4, ctx->r8) = ctx->r15;
    // 0x8008F75C: or          $t4, $s0, $zero
    ctx->r12 = ctx->r16 | 0;
    // 0x8008F760: lui         $t8, 0x400
    ctx->r24 = S32(0X400 << 16);
    // 0x8008F764: sw          $t8, 0x0($t4)
    MEM_W(0X0, ctx->r12) = ctx->r24;
    // 0x8008F768: sw          $t5, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->r13;
    // 0x8008F76C: sw          $t4, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r12;
    // 0x8008F770: sw          $t6, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r14;
    // 0x8008F774: sw          $t2, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r10;
    // 0x8008F778: sw          $t1, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r9;
    // 0x8008F77C: sw          $a3, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r7;
    // 0x8008F780: sw          $a2, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r6;
    // 0x8008F784: addiu       $s0, $s0, 0x8
    ctx->r16 = ADD32(ctx->r16, 0X8);
    // 0x8008F788: jal         0x80082090
    // 0x8008F78C: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    osVirtualToPhysical_recomp(rdram, ctx);
        goto after_0;
    // 0x8008F78C: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    after_0:
    // 0x8008F790: lw          $t3, 0x24($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X24);
    // 0x8008F794: lw          $t5, 0x68($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X68);
    // 0x8008F798: lw          $a3, 0x28($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X28);
    // 0x8008F79C: lw          $t1, 0x4C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X4C);
    // 0x8008F7A0: lw          $t4, 0x44($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X44);
    // 0x8008F7A4: addu        $t9, $t3, $t5
    ctx->r25 = ADD32(ctx->r11, ctx->r13);
    // 0x8008F7A8: andi        $t6, $t9, 0xFFFF
    ctx->r14 = ctx->r25 & 0XFFFF;
    // 0x8008F7AC: lui         $at, 0x800
    ctx->r1 = S32(0X800 << 16);
    // 0x8008F7B0: lw          $t2, 0x60($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X60);
    // 0x8008F7B4: or          $t7, $t6, $at
    ctx->r15 = ctx->r14 | ctx->r1;
    // 0x8008F7B8: subu        $t8, $a3, $t1
    ctx->r24 = SUB32(ctx->r7, ctx->r9);
    // 0x8008F7BC: sra         $t9, $t8, 1
    ctx->r25 = S32(SIGNED(ctx->r24) >> 1);
    // 0x8008F7C0: or          $v1, $s0, $zero
    ctx->r3 = ctx->r16 | 0;
    // 0x8008F7C4: sw          $v0, 0x4($t4)
    MEM_W(0X4, ctx->r12) = ctx->r2;
    // 0x8008F7C8: sw          $t7, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r15;
    // 0x8008F7CC: sll         $t6, $t9, 1
    ctx->r14 = S32(ctx->r25 << 1);
    // 0x8008F7D0: andi        $t7, $t6, 0xFFFF
    ctx->r15 = ctx->r14 & 0XFFFF;
    // 0x8008F7D4: addiu       $s0, $s0, 0x8
    ctx->r16 = ADD32(ctx->r16, 0X8);
    // 0x8008F7D8: sw          $t7, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r15;
    // 0x8008F7DC: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x8008F7E0: lui         $t8, 0x400
    ctx->r24 = S32(0X400 << 16);
    // 0x8008F7E4: sw          $t8, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r24;
    // 0x8008F7E8: lw          $a0, 0x14($t2)
    ctx->r4 = MEM_W(ctx->r10, 0X14);
    // 0x8008F7EC: sw          $a1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r5;
    // 0x8008F7F0: jal         0x80082090
    // 0x8008F7F4: addiu       $s0, $s0, 0x8
    ctx->r16 = ADD32(ctx->r16, 0X8);
    osVirtualToPhysical_recomp(rdram, ctx);
        goto after_1;
    // 0x8008F7F4: addiu       $s0, $s0, 0x8
    ctx->r16 = ADD32(ctx->r16, 0X8);
    after_1:
    // 0x8008F7F8: lw          $a1, 0x3C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X3C);
    // 0x8008F7FC: lw          $a2, 0x2C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X2C);
    // 0x8008F800: sw          $v0, 0x4($a1)
    MEM_W(0X4, ctx->r5) = ctx->r2;
    // 0x8008F804: b           L_8008F850
    // 0x8008F808: andi        $a3, $a2, 0xFFFF
    ctx->r7 = ctx->r6 & 0XFFFF;
        goto L_8008F850;
    // 0x8008F808: andi        $a3, $a2, 0xFFFF
    ctx->r7 = ctx->r6 & 0XFFFF;
L_8008F80C:
    // 0x8008F80C: andi        $t9, $t5, 0xFFFF
    ctx->r25 = ctx->r13 & 0XFFFF;
    // 0x8008F810: lui         $at, 0x800
    ctx->r1 = S32(0X800 << 16);
    // 0x8008F814: or          $t6, $t9, $at
    ctx->r14 = ctx->r25 | ctx->r1;
    // 0x8008F818: andi        $a3, $a2, 0xFFFF
    ctx->r7 = ctx->r6 & 0XFFFF;
    // 0x8008F81C: sw          $a3, 0x4($t0)
    MEM_W(0X4, ctx->r8) = ctx->r7;
    // 0x8008F820: sw          $t6, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->r14;
    // 0x8008F824: or          $v1, $s0, $zero
    ctx->r3 = ctx->r16 | 0;
    // 0x8008F828: lui         $t7, 0x400
    ctx->r15 = S32(0X400 << 16);
    // 0x8008F82C: sw          $t7, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r15;
    // 0x8008F830: sw          $a3, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r7;
    // 0x8008F834: sw          $v1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r3;
    // 0x8008F838: addiu       $s0, $s0, 0x8
    ctx->r16 = ADD32(ctx->r16, 0X8);
    // 0x8008F83C: jal         0x80082090
    // 0x8008F840: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    osVirtualToPhysical_recomp(rdram, ctx);
        goto after_2;
    // 0x8008F840: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    after_2:
    // 0x8008F844: lw          $v1, 0x34($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X34);
    // 0x8008F848: lw          $a3, 0x28($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X28);
    // 0x8008F84C: sw          $v0, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r2;
L_8008F850:
    // 0x8008F850: or          $v1, $s0, $zero
    ctx->r3 = ctx->r16 | 0;
    // 0x8008F854: lui         $t8, 0x800
    ctx->r24 = S32(0X800 << 16);
    // 0x8008F858: sw          $t8, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r24;
    // 0x8008F85C: sw          $a3, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r7;
    // 0x8008F860: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8008F864: addiu       $v0, $s0, 0x8
    ctx->r2 = ADD32(ctx->r16, 0X8);
    // 0x8008F868: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8008F86C: jr          $ra
    // 0x8008F870: addiu       $sp, $sp, 0x60
    ctx->r29 = ADD32(ctx->r29, 0X60);
    return;
    // 0x8008F870: addiu       $sp, $sp, 0x60
    ctx->r29 = ADD32(ctx->r29, 0X60);
;}
RECOMP_FUNC void func_8008F874(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8008F874: addiu       $sp, $sp, -0x60
    ctx->r29 = ADD32(ctx->r29, -0X60);
    // 0x8008F878: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x8008F87C: sw          $s1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r17;
    // 0x8008F880: sw          $s0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r16;
    // 0x8008F884: sw          $a2, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->r6;
    // 0x8008F888: lw          $t6, 0x24($a1)
    ctx->r14 = MEM_W(ctx->r5, 0X24);
    // 0x8008F88C: or          $s0, $a1, $zero
    ctx->r16 = ctx->r5 | 0;
    // 0x8008F890: or          $s1, $a3, $zero
    ctx->r17 = ctx->r7 | 0;
    // 0x8008F894: beq         $t6, $zero, L_8008FA50
    if (ctx->r14 == 0) {
        // 0x8008F898: or          $t2, $a0, $zero
        ctx->r10 = ctx->r4 | 0;
            goto L_8008FA50;
    }
    // 0x8008F898: or          $t2, $a0, $zero
    ctx->r10 = ctx->r4 | 0;
    // 0x8008F89C: lw          $t7, 0x4($a1)
    ctx->r15 = MEM_W(ctx->r5, 0X4);
    // 0x8008F8A0: lw          $t8, 0x0($a1)
    ctx->r24 = MEM_W(ctx->r5, 0X0);
    // 0x8008F8A4: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    // 0x8008F8A8: or          $a1, $a3, $zero
    ctx->r5 = ctx->r7 | 0;
    // 0x8008F8AC: subu        $t9, $t7, $t8
    ctx->r25 = SUB32(ctx->r15, ctx->r24);
    // 0x8008F8B0: sw          $t9, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r25;
    // 0x8008F8B4: jal         0x8008F400
    // 0x8008F8B8: sw          $t2, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r10;
    func_8008F400(rdram, ctx);
        goto after_0;
    // 0x8008F8B8: sw          $t2, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r10;
    after_0:
    // 0x8008F8BC: lw          $t4, 0x38($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X38);
    // 0x8008F8C0: lui         $at, 0x4700
    ctx->r1 = S32(0X4700 << 16);
    // 0x8008F8C4: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x8008F8C8: mtc1        $t4, $f6
    ctx->f6.u32l = ctx->r12;
    // 0x8008F8CC: lui         $at, 0x3FF0
    ctx->r1 = S32(0X3FF0 << 16);
    // 0x8008F8D0: mtc1        $at, $f5
    ctx->f_odd[(5 - 1) * 2] = ctx->r1;
    // 0x8008F8D4: cvt.s.w     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.fl = CVT_S_W(ctx->f6.u32l);
    // 0x8008F8D8: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x8008F8DC: lw          $a0, 0x60($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X60);
    // 0x8008F8E0: addiu       $a2, $zero, 0x280
    ctx->r6 = ADD32(0, 0X280);
    // 0x8008F8E4: div.s       $f10, $f0, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = DIV_S(ctx->f0.fl, ctx->f8.fl);
    // 0x8008F8E8: mul.s       $f16, $f10, $f14
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f16.fl = MUL_S(ctx->f10.fl, ctx->f14.fl);
    // 0x8008F8EC: trunc.w.s   $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.u32l = TRUNC_W_S(ctx->f16.fl);
    // 0x8008F8F0: mfc1        $t6, $f18
    ctx->r14 = (int32_t)ctx->f18.u32l;
    // 0x8008F8F4: nop

    // 0x8008F8F8: mtc1        $t6, $f6
    ctx->f6.u32l = ctx->r14;
    // 0x8008F8FC: nop

    // 0x8008F900: cvt.s.w     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.fl = CVT_S_W(ctx->f6.u32l);
    // 0x8008F904: div.s       $f10, $f8, $f14
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f10.fl = DIV_S(ctx->f8.fl, ctx->f14.fl);
    // 0x8008F908: mtc1        $s1, $f8
    ctx->f8.u32l = ctx->r17;
    // 0x8008F90C: cvt.d.s     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.fl); 
    ctx->f16.d = CVT_D_S(ctx->f10.fl);
    // 0x8008F910: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x8008F914: sub.d       $f18, $f4, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f16.d); 
    ctx->f18.d = ctx->f4.d - ctx->f16.d;
    // 0x8008F918: cvt.s.d     $f2, $f18
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.d); 
    ctx->f2.fl = CVT_S_D(ctx->f18.d);
    // 0x8008F91C: mul.s       $f4, $f2, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = MUL_S(ctx->f2.fl, ctx->f10.fl);
    // 0x8008F920: swc1        $f2, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->f2.u32l;
    // 0x8008F924: lw          $v0, 0x24($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X24);
    // 0x8008F928: lwc1        $f6, 0x20($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0X20);
    // 0x8008F92C: add.s       $f12, $f6, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f12.fl = ctx->f6.fl + ctx->f4.fl;
    // 0x8008F930: trunc.w.s   $f16, $f12
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 12);
    ctx->f16.u32l = TRUNC_W_S(ctx->f12.fl);
    // 0x8008F934: mfc1        $t1, $f16
    ctx->r9 = (int32_t)ctx->f16.u32l;
    // 0x8008F938: nop

    // 0x8008F93C: mtc1        $t1, $f18
    ctx->f18.u32l = ctx->r9;
    // 0x8008F940: nop

    // 0x8008F944: cvt.s.w     $f8, $f18
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    ctx->f8.fl = CVT_S_W(ctx->f18.u32l);
    // 0x8008F948: sub.s       $f10, $f12, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f12.fl - ctx->f8.fl;
    // 0x8008F94C: swc1        $f10, 0x20($v0)
    MEM_W(0X20, ctx->r2) = ctx->f10.u32l;
    // 0x8008F950: lw          $t9, 0x18($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X18);
    // 0x8008F954: lw          $t8, 0x4($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X4);
    // 0x8008F958: lw          $t7, 0x18($a0)
    ctx->r15 = MEM_W(ctx->r4, 0X18);
    // 0x8008F95C: sw          $t1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r9;
    // 0x8008F960: subu        $t4, $t8, $t9
    ctx->r12 = SUB32(ctx->r24, ctx->r25);
    // 0x8008F964: negu        $t5, $t4
    ctx->r13 = SUB32(0, ctx->r12);
    // 0x8008F968: sll         $t6, $t5, 1
    ctx->r14 = S32(ctx->r13 << 1);
    // 0x8008F96C: addu        $t0, $t7, $t6
    ctx->r8 = ADD32(ctx->r15, ctx->r14);
    // 0x8008F970: andi        $v1, $t0, 0x7
    ctx->r3 = ctx->r8 & 0X7;
    // 0x8008F974: lw          $t9, 0x70($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X70);
    // 0x8008F978: sra         $t8, $v1, 1
    ctx->r24 = S32(SIGNED(ctx->r3) >> 1);
    // 0x8008F97C: sll         $t3, $t8, 1
    ctx->r11 = S32(ctx->r24 << 1);
    // 0x8008F980: subu        $a1, $t0, $t3
    ctx->r5 = SUB32(ctx->r8, ctx->r11);
    // 0x8008F984: sw          $t3, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r11;
    // 0x8008F988: or          $v1, $t8, $zero
    ctx->r3 = ctx->r24 | 0;
    // 0x8008F98C: addu        $a3, $t1, $t8
    ctx->r7 = ADD32(ctx->r9, ctx->r24);
    // 0x8008F990: jal         0x8008F6E8
    // 0x8008F994: sw          $t9, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r25;
    func_8008F6E8(rdram, ctx);
        goto after_1;
    // 0x8008F994: sw          $t9, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r25;
    after_1:
    // 0x8008F998: lw          $t3, 0x28($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X28);
    // 0x8008F99C: lui         $at, 0x800
    ctx->r1 = S32(0X800 << 16);
    // 0x8008F9A0: addiu       $t6, $v0, 0x8
    ctx->r14 = ADD32(ctx->r2, 0X8);
    // 0x8008F9A4: addiu       $t4, $t3, 0x280
    ctx->r12 = ADD32(ctx->r11, 0X280);
    // 0x8008F9A8: andi        $t5, $t4, 0xFFFF
    ctx->r13 = ctx->r12 & 0XFFFF;
    // 0x8008F9AC: or          $t7, $t5, $at
    ctx->r15 = ctx->r13 | ctx->r1;
    // 0x8008F9B0: sw          $t7, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r15;
    // 0x8008F9B4: lw          $t8, 0x68($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X68);
    // 0x8008F9B8: sll         $t4, $s1, 1
    ctx->r12 = S32(ctx->r17 << 1);
    // 0x8008F9BC: andi        $t5, $t4, 0xFFFF
    ctx->r13 = ctx->r12 & 0XFFFF;
    // 0x8008F9C0: sll         $t9, $t8, 16
    ctx->r25 = S32(ctx->r24 << 16);
    // 0x8008F9C4: or          $t7, $t9, $t5
    ctx->r15 = ctx->r25 | ctx->r13;
    // 0x8008F9C8: sw          $t7, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r15;
    // 0x8008F9CC: lui         $at, 0x4700
    ctx->r1 = S32(0X4700 << 16);
    // 0x8008F9D0: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x8008F9D4: lwc1        $f6, 0x44($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X44);
    // 0x8008F9D8: sw          $t6, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r14;
    // 0x8008F9DC: lw          $t5, 0x24($s0)
    ctx->r13 = MEM_W(ctx->r16, 0X24);
    // 0x8008F9E0: mul.s       $f16, $f6, $f4
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f16.fl = MUL_S(ctx->f6.fl, ctx->f4.fl);
    // 0x8008F9E4: lui         $at, 0x500
    ctx->r1 = S32(0X500 << 16);
    // 0x8008F9E8: lw          $t7, 0x24($t5)
    ctx->r15 = MEM_W(ctx->r13, 0X24);
    // 0x8008F9EC: addiu       $v1, $v0, 0x10
    ctx->r3 = ADD32(ctx->r2, 0X10);
    // 0x8008F9F0: andi        $t6, $t7, 0xFF
    ctx->r14 = ctx->r15 & 0XFF;
    // 0x8008F9F4: sll         $t8, $t6, 16
    ctx->r24 = S32(ctx->r14 << 16);
    // 0x8008F9F8: trunc.w.s   $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.u32l = TRUNC_W_S(ctx->f16.fl);
    // 0x8008F9FC: mfc1        $t4, $f18
    ctx->r12 = (int32_t)ctx->f18.u32l;
    // 0x8008FA00: nop

    // 0x8008FA04: andi        $t9, $t4, 0xFFFF
    ctx->r25 = ctx->r12 & 0XFFFF;
    // 0x8008FA08: or          $t4, $t8, $at
    ctx->r12 = ctx->r24 | ctx->r1;
    // 0x8008FA0C: or          $t5, $t4, $t9
    ctx->r13 = ctx->r12 | ctx->r25;
    // 0x8008FA10: sw          $t5, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->r13;
    // 0x8008FA14: lw          $t7, 0x24($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X24);
    // 0x8008FA18: lw          $a0, 0x14($t7)
    ctx->r4 = MEM_W(ctx->r15, 0X14);
    // 0x8008FA1C: jal         0x80082090
    // 0x8008FA20: sw          $v1, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r3;
    osVirtualToPhysical_recomp(rdram, ctx);
        goto after_2;
    // 0x8008FA20: sw          $v1, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r3;
    after_2:
    // 0x8008FA24: lw          $t6, 0x30($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X30);
    // 0x8008FA28: lw          $t1, 0x2C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X2C);
    // 0x8008FA2C: lw          $v1, 0x5C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X5C);
    // 0x8008FA30: sw          $v0, 0x4($t6)
    MEM_W(0X4, ctx->r14) = ctx->r2;
    // 0x8008FA34: lw          $t8, 0x24($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X24);
    // 0x8008FA38: sw          $zero, 0x24($t8)
    MEM_W(0X24, ctx->r24) = 0;
    // 0x8008FA3C: lw          $t4, 0x18($s0)
    ctx->r12 = MEM_W(ctx->r16, 0X18);
    // 0x8008FA40: addu        $t9, $t4, $t1
    ctx->r25 = ADD32(ctx->r12, ctx->r9);
    // 0x8008FA44: subu        $t5, $t9, $s1
    ctx->r13 = SUB32(ctx->r25, ctx->r17);
    // 0x8008FA48: b           L_8008FA80
    // 0x8008FA4C: sw          $t5, 0x18($s0)
    MEM_W(0X18, ctx->r16) = ctx->r13;
        goto L_8008FA80;
    // 0x8008FA4C: sw          $t5, 0x18($s0)
    MEM_W(0X18, ctx->r16) = ctx->r13;
L_8008FA50:
    // 0x8008FA50: lw          $t6, 0x4($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X4);
    // 0x8008FA54: lw          $t7, 0x18($t2)
    ctx->r15 = MEM_W(ctx->r10, 0X18);
    // 0x8008FA58: lw          $t9, 0x70($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X70);
    // 0x8008FA5C: negu        $t8, $t6
    ctx->r24 = SUB32(0, ctx->r14);
    // 0x8008FA60: sll         $t4, $t8, 1
    ctx->r12 = S32(ctx->r24 << 1);
    // 0x8008FA64: or          $a0, $t2, $zero
    ctx->r4 = ctx->r10 | 0;
    // 0x8008FA68: lw          $a2, 0x68($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X68);
    // 0x8008FA6C: or          $a3, $s1, $zero
    ctx->r7 = ctx->r17 | 0;
    // 0x8008FA70: addu        $a1, $t7, $t4
    ctx->r5 = ADD32(ctx->r15, ctx->r12);
    // 0x8008FA74: jal         0x8008F6E8
    // 0x8008FA78: sw          $t9, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r25;
    func_8008F6E8(rdram, ctx);
        goto after_3;
    // 0x8008FA78: sw          $t9, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r25;
    after_3:
    // 0x8008FA7C: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
L_8008FA80:
    // 0x8008FA80: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x8008FA84: lw          $s0, 0x1C($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X1C);
    // 0x8008FA88: lw          $s1, 0x20($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X20);
    // 0x8008FA8C: addiu       $sp, $sp, 0x60
    ctx->r29 = ADD32(ctx->r29, 0X60);
    // 0x8008FA90: jr          $ra
    // 0x8008FA94: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    return;
    // 0x8008FA94: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
;}
RECOMP_FUNC void func_8008FA98(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8008FA98: addiu       $v1, $a1, -0x2
    ctx->r3 = ADD32(ctx->r5, -0X2);
    // 0x8008FA9C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8008FAA0: andi        $t6, $v1, 0x7
    ctx->r14 = ctx->r3 & 0X7;
    // 0x8008FAA4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8008FAA8: sltiu       $at, $t6, 0x8
    ctx->r1 = ctx->r14 < 0X8 ? 1 : 0;
    // 0x8008FAAC: or          $a3, $a0, $zero
    ctx->r7 = ctx->r4 | 0;
    // 0x8008FAB0: beq         $at, $zero, L_8008FCE0
    if (ctx->r1 == 0) {
        // 0x8008FAB4: lw          $t0, 0x0($a2)
        ctx->r8 = MEM_W(ctx->r6, 0X0);
            goto L_8008FCE0;
    }
    // 0x8008FAB4: lw          $t0, 0x0($a2)
    ctx->r8 = MEM_W(ctx->r6, 0X0);
    // 0x8008FAB8: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x8008FABC: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x8008FAC0: addu        $at, $at, $t6
    gpr jr_addend_8008FAC8 = ctx->r14;
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x8008FAC4: lw          $t6, -0x4A60($at)
    ctx->r14 = ADD32(ctx->r1, -0X4A60);
    // 0x8008FAC8: jr          $t6
    // 0x8008FACC: nop

    switch (jr_addend_8008FAC8 >> 2) {
        case 0: goto L_8008FAD0; break;
        case 1: goto L_8008FB04; break;
        case 2: goto L_8008FB64; break;
        case 3: goto L_8008FB38; break;
        case 4: goto L_8008FB90; break;
        case 5: goto L_8008FBBC; break;
        case 6: goto L_8008FC24; break;
        case 7: goto L_8008FC9C; break;
        default: switch_error(__func__, 0x8008FAC8, 0x800DB5A0);
    }
    // 0x8008FACC: nop

L_8008FAD0:
    // 0x8008FAD0: addiu       $at, $zero, -0x8
    ctx->r1 = ADD32(0, -0X8);
    // 0x8008FAD4: and         $t7, $t0, $at
    ctx->r15 = ctx->r8 & ctx->r1;
    // 0x8008FAD8: lw          $t8, 0x20($a3)
    ctx->r24 = MEM_W(ctx->r7, 0X20);
    // 0x8008FADC: bgez        $v1, L_8008FAEC
    if (SIGNED(ctx->r3) >= 0) {
        // 0x8008FAE0: sra         $t9, $v1, 3
        ctx->r25 = S32(SIGNED(ctx->r3) >> 3);
            goto L_8008FAEC;
    }
    // 0x8008FAE0: sra         $t9, $v1, 3
    ctx->r25 = S32(SIGNED(ctx->r3) >> 3);
    // 0x8008FAE4: addiu       $at, $v1, 0x7
    ctx->r1 = ADD32(ctx->r3, 0X7);
    // 0x8008FAE8: sra         $t9, $at, 3
    ctx->r25 = S32(SIGNED(ctx->r1) >> 3);
L_8008FAEC:
    // 0x8008FAEC: sll         $t1, $t9, 2
    ctx->r9 = S32(ctx->r25 << 2);
    // 0x8008FAF0: addu        $t1, $t1, $t9
    ctx->r9 = ADD32(ctx->r9, ctx->r25);
    // 0x8008FAF4: sll         $t1, $t1, 3
    ctx->r9 = S32(ctx->r9 << 3);
    // 0x8008FAF8: addu        $t2, $t8, $t1
    ctx->r10 = ADD32(ctx->r24, ctx->r9);
    // 0x8008FAFC: b           L_8008FCE0
    // 0x8008FB00: sw          $t7, 0x0($t2)
    MEM_W(0X0, ctx->r10) = ctx->r15;
        goto L_8008FCE0;
    // 0x8008FB00: sw          $t7, 0x0($t2)
    MEM_W(0X0, ctx->r10) = ctx->r15;
L_8008FB04:
    // 0x8008FB04: addiu       $at, $zero, -0x8
    ctx->r1 = ADD32(0, -0X8);
    // 0x8008FB08: and         $t3, $t0, $at
    ctx->r11 = ctx->r8 & ctx->r1;
    // 0x8008FB0C: lw          $t4, 0x20($a3)
    ctx->r12 = MEM_W(ctx->r7, 0X20);
    // 0x8008FB10: bgez        $v1, L_8008FB20
    if (SIGNED(ctx->r3) >= 0) {
        // 0x8008FB14: sra         $t5, $v1, 3
        ctx->r13 = S32(SIGNED(ctx->r3) >> 3);
            goto L_8008FB20;
    }
    // 0x8008FB14: sra         $t5, $v1, 3
    ctx->r13 = S32(SIGNED(ctx->r3) >> 3);
    // 0x8008FB18: addiu       $at, $v1, 0x7
    ctx->r1 = ADD32(ctx->r3, 0X7);
    // 0x8008FB1C: sra         $t5, $at, 3
    ctx->r13 = S32(SIGNED(ctx->r1) >> 3);
L_8008FB20:
    // 0x8008FB20: sll         $t6, $t5, 2
    ctx->r14 = S32(ctx->r13 << 2);
    // 0x8008FB24: addu        $t6, $t6, $t5
    ctx->r14 = ADD32(ctx->r14, ctx->r13);
    // 0x8008FB28: sll         $t6, $t6, 3
    ctx->r14 = S32(ctx->r14 << 3);
    // 0x8008FB2C: addu        $t9, $t4, $t6
    ctx->r25 = ADD32(ctx->r12, ctx->r14);
    // 0x8008FB30: b           L_8008FCE0
    // 0x8008FB34: sw          $t3, 0x4($t9)
    MEM_W(0X4, ctx->r25) = ctx->r11;
        goto L_8008FCE0;
    // 0x8008FB34: sw          $t3, 0x4($t9)
    MEM_W(0X4, ctx->r25) = ctx->r11;
L_8008FB38:
    // 0x8008FB38: lw          $t8, 0x20($a3)
    ctx->r24 = MEM_W(ctx->r7, 0X20);
    // 0x8008FB3C: bgez        $v1, L_8008FB4C
    if (SIGNED(ctx->r3) >= 0) {
        // 0x8008FB40: sra         $t1, $v1, 3
        ctx->r9 = S32(SIGNED(ctx->r3) >> 3);
            goto L_8008FB4C;
    }
    // 0x8008FB40: sra         $t1, $v1, 3
    ctx->r9 = S32(SIGNED(ctx->r3) >> 3);
    // 0x8008FB44: addiu       $at, $v1, 0x7
    ctx->r1 = ADD32(ctx->r3, 0X7);
    // 0x8008FB48: sra         $t1, $at, 3
    ctx->r9 = S32(SIGNED(ctx->r1) >> 3);
L_8008FB4C:
    // 0x8008FB4C: sll         $t7, $t1, 2
    ctx->r15 = S32(ctx->r9 << 2);
    // 0x8008FB50: addu        $t7, $t7, $t1
    ctx->r15 = ADD32(ctx->r15, ctx->r9);
    // 0x8008FB54: sll         $t7, $t7, 3
    ctx->r15 = S32(ctx->r15 << 3);
    // 0x8008FB58: addu        $t2, $t8, $t7
    ctx->r10 = ADD32(ctx->r24, ctx->r15);
    // 0x8008FB5C: b           L_8008FCE0
    // 0x8008FB60: sh          $t0, 0x8($t2)
    MEM_H(0X8, ctx->r10) = ctx->r8;
        goto L_8008FCE0;
    // 0x8008FB60: sh          $t0, 0x8($t2)
    MEM_H(0X8, ctx->r10) = ctx->r8;
L_8008FB64:
    // 0x8008FB64: lw          $t5, 0x20($a3)
    ctx->r13 = MEM_W(ctx->r7, 0X20);
    // 0x8008FB68: bgez        $v1, L_8008FB78
    if (SIGNED(ctx->r3) >= 0) {
        // 0x8008FB6C: sra         $t4, $v1, 3
        ctx->r12 = S32(SIGNED(ctx->r3) >> 3);
            goto L_8008FB78;
    }
    // 0x8008FB6C: sra         $t4, $v1, 3
    ctx->r12 = S32(SIGNED(ctx->r3) >> 3);
    // 0x8008FB70: addiu       $at, $v1, 0x7
    ctx->r1 = ADD32(ctx->r3, 0X7);
    // 0x8008FB74: sra         $t4, $at, 3
    ctx->r12 = S32(SIGNED(ctx->r1) >> 3);
L_8008FB78:
    // 0x8008FB78: sll         $t6, $t4, 2
    ctx->r14 = S32(ctx->r12 << 2);
    // 0x8008FB7C: addu        $t6, $t6, $t4
    ctx->r14 = ADD32(ctx->r14, ctx->r12);
    // 0x8008FB80: sll         $t6, $t6, 3
    ctx->r14 = S32(ctx->r14 << 3);
    // 0x8008FB84: addu        $t3, $t5, $t6
    ctx->r11 = ADD32(ctx->r13, ctx->r14);
    // 0x8008FB88: b           L_8008FCE0
    // 0x8008FB8C: sh          $t0, 0xA($t3)
    MEM_H(0XA, ctx->r11) = ctx->r8;
        goto L_8008FCE0;
    // 0x8008FB8C: sh          $t0, 0xA($t3)
    MEM_H(0XA, ctx->r11) = ctx->r8;
L_8008FB90:
    // 0x8008FB90: lw          $t9, 0x20($a3)
    ctx->r25 = MEM_W(ctx->r7, 0X20);
    // 0x8008FB94: bgez        $v1, L_8008FBA4
    if (SIGNED(ctx->r3) >= 0) {
        // 0x8008FB98: sra         $t1, $v1, 3
        ctx->r9 = S32(SIGNED(ctx->r3) >> 3);
            goto L_8008FBA4;
    }
    // 0x8008FB98: sra         $t1, $v1, 3
    ctx->r9 = S32(SIGNED(ctx->r3) >> 3);
    // 0x8008FB9C: addiu       $at, $v1, 0x7
    ctx->r1 = ADD32(ctx->r3, 0X7);
    // 0x8008FBA0: sra         $t1, $at, 3
    ctx->r9 = S32(SIGNED(ctx->r1) >> 3);
L_8008FBA4:
    // 0x8008FBA4: sll         $t8, $t1, 2
    ctx->r24 = S32(ctx->r9 << 2);
    // 0x8008FBA8: addu        $t8, $t8, $t1
    ctx->r24 = ADD32(ctx->r24, ctx->r9);
    // 0x8008FBAC: sll         $t8, $t8, 3
    ctx->r24 = S32(ctx->r24 << 3);
    // 0x8008FBB0: addu        $t7, $t9, $t8
    ctx->r15 = ADD32(ctx->r25, ctx->r24);
    // 0x8008FBB4: b           L_8008FCE0
    // 0x8008FBB8: sh          $t0, 0xC($t7)
    MEM_H(0XC, ctx->r15) = ctx->r8;
        goto L_8008FCE0;
    // 0x8008FBB8: sh          $t0, 0xC($t7)
    MEM_H(0XC, ctx->r15) = ctx->r8;
L_8008FBBC:
    // 0x8008FBBC: mtc1        $t0, $f4
    ctx->f4.u32l = ctx->r8;
    // 0x8008FBC0: lui         $at, 0x447A
    ctx->r1 = S32(0X447A << 16);
    // 0x8008FBC4: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x8008FBC8: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x8008FBCC: lui         $t2, 0x800D
    ctx->r10 = S32(0X800D << 16);
    // 0x8008FBD0: lw          $t2, 0x1890($t2)
    ctx->r10 = MEM_W(ctx->r10, 0X1890);
    // 0x8008FBD4: lw          $t5, 0x20($a3)
    ctx->r13 = MEM_W(ctx->r7, 0X20);
    // 0x8008FBD8: lw          $t4, 0x44($t2)
    ctx->r12 = MEM_W(ctx->r10, 0X44);
    // 0x8008FBDC: div.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = DIV_S(ctx->f6.fl, ctx->f8.fl);
    // 0x8008FBE0: mtc1        $t4, $f18
    ctx->f18.u32l = ctx->r12;
    // 0x8008FBE4: nop

    // 0x8008FBE8: cvt.d.w     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    ctx->f4.d = CVT_D_W(ctx->f18.u32l);
    // 0x8008FBEC: cvt.d.s     $f0, $f10
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.fl); 
    ctx->f0.d = CVT_D_S(ctx->f10.fl);
    // 0x8008FBF0: add.d       $f16, $f0, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.d); NAN_CHECK(ctx->f0.d); 
    ctx->f16.d = ctx->f0.d + ctx->f0.d;
    // 0x8008FBF4: div.d       $f6, $f16, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f16.d); NAN_CHECK(ctx->f4.d); 
    ctx->f6.d = DIV_D(ctx->f16.d, ctx->f4.d);
    // 0x8008FBF8: cvt.s.d     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.d); 
    ctx->f8.fl = CVT_S_D(ctx->f6.d);
    // 0x8008FBFC: bgez        $v1, L_8008FC0C
    if (SIGNED(ctx->r3) >= 0) {
        // 0x8008FC00: sra         $t6, $v1, 3
        ctx->r14 = S32(SIGNED(ctx->r3) >> 3);
            goto L_8008FC0C;
    }
    // 0x8008FC00: sra         $t6, $v1, 3
    ctx->r14 = S32(SIGNED(ctx->r3) >> 3);
    // 0x8008FC04: addiu       $at, $v1, 0x7
    ctx->r1 = ADD32(ctx->r3, 0X7);
    // 0x8008FC08: sra         $t6, $at, 3
    ctx->r14 = S32(SIGNED(ctx->r1) >> 3);
L_8008FC0C:
    // 0x8008FC0C: sll         $t3, $t6, 2
    ctx->r11 = S32(ctx->r14 << 2);
    // 0x8008FC10: addu        $t3, $t3, $t6
    ctx->r11 = ADD32(ctx->r11, ctx->r14);
    // 0x8008FC14: sll         $t3, $t3, 3
    ctx->r11 = S32(ctx->r11 << 3);
    // 0x8008FC18: addu        $t1, $t5, $t3
    ctx->r9 = ADD32(ctx->r13, ctx->r11);
    // 0x8008FC1C: b           L_8008FCE0
    // 0x8008FC20: swc1        $f8, 0x10($t1)
    MEM_W(0X10, ctx->r9) = ctx->f8.u32l;
        goto L_8008FCE0;
    // 0x8008FC20: swc1        $f8, 0x10($t1)
    MEM_W(0X10, ctx->r9) = ctx->f8.u32l;
L_8008FC24:
    // 0x8008FC24: lw          $t9, 0x20($a3)
    ctx->r25 = MEM_W(ctx->r7, 0X20);
    // 0x8008FC28: bgez        $v1, L_8008FC38
    if (SIGNED(ctx->r3) >= 0) {
        // 0x8008FC2C: sra         $t8, $v1, 3
        ctx->r24 = S32(SIGNED(ctx->r3) >> 3);
            goto L_8008FC38;
    }
    // 0x8008FC2C: sra         $t8, $v1, 3
    ctx->r24 = S32(SIGNED(ctx->r3) >> 3);
    // 0x8008FC30: addiu       $at, $v1, 0x7
    ctx->r1 = ADD32(ctx->r3, 0X7);
    // 0x8008FC34: sra         $t8, $at, 3
    ctx->r24 = S32(SIGNED(ctx->r1) >> 3);
L_8008FC38:
    // 0x8008FC38: sll         $t7, $t8, 2
    ctx->r15 = S32(ctx->r24 << 2);
    // 0x8008FC3C: addu        $t7, $t7, $t8
    ctx->r15 = ADD32(ctx->r15, ctx->r24);
    // 0x8008FC40: sll         $t7, $t7, 3
    ctx->r15 = S32(ctx->r15 << 3);
    // 0x8008FC44: addu        $v0, $t9, $t7
    ctx->r2 = ADD32(ctx->r25, ctx->r15);
    // 0x8008FC48: lw          $t2, 0x4($v0)
    ctx->r10 = MEM_W(ctx->r2, 0X4);
    // 0x8008FC4C: lw          $t4, 0x0($v0)
    ctx->r12 = MEM_W(ctx->r2, 0X0);
    // 0x8008FC50: mtc1        $t0, $f4
    ctx->f4.u32l = ctx->r8;
    // 0x8008FC54: lui         $at, 0x41F0
    ctx->r1 = S32(0X41F0 << 16);
    // 0x8008FC58: subu        $t6, $t2, $t4
    ctx->r14 = SUB32(ctx->r10, ctx->r12);
    // 0x8008FC5C: mtc1        $t6, $f10
    ctx->f10.u32l = ctx->r14;
    // 0x8008FC60: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x8008FC64: bgez        $t6, L_8008FC7C
    if (SIGNED(ctx->r14) >= 0) {
        // 0x8008FC68: cvt.d.w     $f18, $f10
        CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    ctx->f18.d = CVT_D_W(ctx->f10.u32l);
            goto L_8008FC7C;
    }
    // 0x8008FC68: cvt.d.w     $f18, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    ctx->f18.d = CVT_D_W(ctx->f10.u32l);
    // 0x8008FC6C: mtc1        $at, $f17
    ctx->f_odd[(17 - 1) * 2] = ctx->r1;
    // 0x8008FC70: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x8008FC74: nop

    // 0x8008FC78: add.d       $f18, $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f18.d); NAN_CHECK(ctx->f16.d); 
    ctx->f18.d = ctx->f18.d + ctx->f16.d;
L_8008FC7C:
    // 0x8008FC7C: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x8008FC80: ldc1        $f10, -0x4A40($at)
    CHECK_FR(ctx, 10);
    ctx->f10.u64 = LD(ctx->r1, -0X4A40);
    // 0x8008FC84: cvt.d.s     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f8.d = CVT_D_S(ctx->f6.fl);
    // 0x8008FC88: div.d       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f10.d); 
    ctx->f16.d = DIV_D(ctx->f8.d, ctx->f10.d);
    // 0x8008FC8C: mul.d       $f4, $f18, $f16
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f18.d); NAN_CHECK(ctx->f16.d); 
    ctx->f4.d = MUL_D(ctx->f18.d, ctx->f16.d);
    // 0x8008FC90: cvt.s.d     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.d); 
    ctx->f6.fl = CVT_S_D(ctx->f4.d);
    // 0x8008FC94: b           L_8008FCE0
    // 0x8008FC98: swc1        $f6, 0x1C($v0)
    MEM_W(0X1C, ctx->r2) = ctx->f6.u32l;
        goto L_8008FCE0;
    // 0x8008FC98: swc1        $f6, 0x1C($v0)
    MEM_W(0X1C, ctx->r2) = ctx->f6.u32l;
L_8008FC9C:
    // 0x8008FC9C: bgez        $v1, L_8008FCAC
    if (SIGNED(ctx->r3) >= 0) {
        // 0x8008FCA0: sra         $v0, $v1, 3
        ctx->r2 = S32(SIGNED(ctx->r3) >> 3);
            goto L_8008FCAC;
    }
    // 0x8008FCA0: sra         $v0, $v1, 3
    ctx->r2 = S32(SIGNED(ctx->r3) >> 3);
    // 0x8008FCA4: addiu       $at, $v1, 0x7
    ctx->r1 = ADD32(ctx->r3, 0X7);
    // 0x8008FCA8: sra         $v0, $at, 3
    ctx->r2 = S32(SIGNED(ctx->r1) >> 3);
L_8008FCAC:
    // 0x8008FCAC: lw          $t3, 0x20($a3)
    ctx->r11 = MEM_W(ctx->r7, 0X20);
    // 0x8008FCB0: sll         $t5, $v0, 2
    ctx->r13 = S32(ctx->r2 << 2);
    // 0x8008FCB4: addu        $t5, $t5, $v0
    ctx->r13 = ADD32(ctx->r13, ctx->r2);
    // 0x8008FCB8: sll         $t5, $t5, 3
    ctx->r13 = S32(ctx->r13 << 3);
    // 0x8008FCBC: addu        $t1, $t3, $t5
    ctx->r9 = ADD32(ctx->r11, ctx->r13);
    // 0x8008FCC0: lw          $a1, 0x20($t1)
    ctx->r5 = MEM_W(ctx->r9, 0X20);
    // 0x8008FCC4: beql        $a1, $zero, L_8008FCE4
    if (ctx->r5 == 0) {
        // 0x8008FCC8: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_8008FCE4;
    }
    goto skip_0;
    // 0x8008FCC8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x8008FCCC: sh          $t0, 0x0($a1)
    MEM_H(0X0, ctx->r5) = ctx->r8;
    // 0x8008FCD0: lw          $t8, 0x20($a3)
    ctx->r24 = MEM_W(ctx->r7, 0X20);
    // 0x8008FCD4: addu        $t9, $t8, $t5
    ctx->r25 = ADD32(ctx->r24, ctx->r13);
    // 0x8008FCD8: jal         0x80088D60
    // 0x8008FCDC: lw          $a0, 0x20($t9)
    ctx->r4 = MEM_W(ctx->r25, 0X20);
    func_80088D60(rdram, ctx);
        goto after_0;
    // 0x8008FCDC: lw          $a0, 0x20($t9)
    ctx->r4 = MEM_W(ctx->r25, 0X20);
    after_0:
L_8008FCE0:
    // 0x8008FCE0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8008FCE4:
    // 0x8008FCE4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8008FCE8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x8008FCEC: jr          $ra
    // 0x8008FCF0: nop

    return;
    // 0x8008FCF0: nop

;}
RECOMP_FUNC void func_8008FCF4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8008FCF4: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8008FCF8: bne         $a1, $at, L_8008FD04
    if (ctx->r5 != ctx->r1) {
        // 0x8008FCFC: nop
    
            goto L_8008FD04;
    }
    // 0x8008FCFC: nop

    // 0x8008FD00: sw          $a2, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r6;
L_8008FD04:
    // 0x8008FD04: jr          $ra
    // 0x8008FD08: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    return;
    // 0x8008FD08: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
;}
RECOMP_FUNC void func_8008FD0C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8008FD0C: addiu       $sp, $sp, -0xA8
    ctx->r29 = ADD32(ctx->r29, -0XA8);
    // 0x8008FD10: sw          $s3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r19;
    // 0x8008FD14: or          $s3, $a0, $zero
    ctx->r19 = ctx->r4 | 0;
    // 0x8008FD18: sw          $ra, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r31;
    // 0x8008FD1C: sw          $fp, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r30;
    // 0x8008FD20: sw          $s7, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r23;
    // 0x8008FD24: sw          $s6, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r22;
    // 0x8008FD28: sw          $s5, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r21;
    // 0x8008FD2C: sw          $s4, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r20;
    // 0x8008FD30: sw          $s2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r18;
    // 0x8008FD34: sw          $s1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r17;
    // 0x8008FD38: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x8008FD3C: lw          $a0, 0x0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X0);
    // 0x8008FD40: lw          $t6, 0xB8($sp)
    ctx->r14 = MEM_W(ctx->r29, 0XB8);
    // 0x8008FD44: sw          $zero, 0x80($sp)
    MEM_W(0X80, ctx->r29) = 0;
    // 0x8008FD48: or          $s6, $a2, $zero
    ctx->r22 = ctx->r6 | 0;
    // 0x8008FD4C: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x8008FD50: lw          $t9, 0x4($a0)
    ctx->r25 = MEM_W(ctx->r4, 0X4);
    // 0x8008FD54: jalr        $t9
    // 0x8008FD58: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x8008FD58: nop

    after_0:
    // 0x8008FD5C: sll         $s1, $s6, 1
    ctx->r17 = S32(ctx->r22 << 1);
    // 0x8008FD60: lui         $t8, 0xC00
    ctx->r24 = S32(0XC00 << 16);
    // 0x8008FD64: lui         $t2, 0x6C0
    ctx->r10 = S32(0X6C0 << 16);
    // 0x8008FD68: lui         $t3, 0xC00
    ctx->r11 = S32(0XC00 << 16);
    // 0x8008FD6C: lui         $t4, 0x800
    ctx->r12 = S32(0X800 << 16);
    // 0x8008FD70: andi        $t1, $s1, 0xFFFF
    ctx->r9 = ctx->r17 & 0XFFFF;
    // 0x8008FD74: lui         $t7, 0x800
    ctx->r15 = S32(0X800 << 16);
    // 0x8008FD78: ori         $t2, $t2, 0x6C0
    ctx->r10 = ctx->r10 | 0X6C0;
    // 0x8008FD7C: ori         $t8, $t8, 0xDA83
    ctx->r24 = ctx->r24 | 0XDA83;
    // 0x8008FD80: ori         $t4, $t4, 0x6C0
    ctx->r12 = ctx->r12 | 0X6C0;
    // 0x8008FD84: ori         $t3, $t3, 0x5A82
    ctx->r11 = ctx->r11 | 0X5A82;
    // 0x8008FD88: sw          $t7, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r15;
    // 0x8008FD8C: sw          $t1, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r9;
    // 0x8008FD90: sw          $t8, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->r24;
    // 0x8008FD94: sw          $t2, 0xC($v0)
    MEM_W(0XC, ctx->r2) = ctx->r10;
    // 0x8008FD98: sw          $t3, 0x10($v0)
    MEM_W(0X10, ctx->r2) = ctx->r11;
    // 0x8008FD9C: sw          $t4, 0x14($v0)
    MEM_W(0X14, ctx->r2) = ctx->r12;
    // 0x8008FDA0: lw          $a1, 0x18($s3)
    ctx->r5 = MEM_W(ctx->r19, 0X18);
    // 0x8008FDA4: addiu       $t5, $v0, 0x18
    ctx->r13 = ADD32(ctx->r2, 0X18);
    // 0x8008FDA8: or          $s5, $zero, $zero
    ctx->r21 = 0 | 0;
    // 0x8008FDAC: addiu       $s2, $zero, 0x140
    ctx->r18 = ADD32(0, 0X140);
    // 0x8008FDB0: sw          $t5, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r13;
    // 0x8008FDB4: sw          $t1, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r9;
    // 0x8008FDB8: sw          $s1, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r17;
    // 0x8008FDBC: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    // 0x8008FDC0: addiu       $a2, $zero, 0x6C0
    ctx->r6 = ADD32(0, 0X6C0);
    // 0x8008FDC4: jal         0x8008F560
    // 0x8008FDC8: or          $a3, $s6, $zero
    ctx->r7 = ctx->r22 | 0;
    func_8008F560(rdram, ctx);
        goto after_1;
    // 0x8008FDC8: or          $a3, $s6, $zero
    ctx->r7 = ctx->r22 | 0;
    after_1:
    // 0x8008FDCC: lw          $v1, 0x80($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X80);
    // 0x8008FDD0: lui         $t6, 0x200
    ctx->r14 = S32(0X200 << 16);
    // 0x8008FDD4: ori         $t6, $t6, 0x800
    ctx->r14 = ctx->r14 | 0X800;
    // 0x8008FDD8: sw          $t6, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r14;
    // 0x8008FDDC: sw          $s1, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r17;
    // 0x8008FDE0: lbu         $t9, 0x24($s3)
    ctx->r25 = MEM_BU(ctx->r19, 0X24);
    // 0x8008FDE4: addiu       $s0, $v0, 0x8
    ctx->r16 = ADD32(ctx->r2, 0X8);
    // 0x8008FDE8: or          $s7, $zero, $zero
    ctx->r23 = 0 | 0;
    // 0x8008FDEC: blezl       $t9, L_8008FFCC
    if (SIGNED(ctx->r25) <= 0) {
        // 0x8008FDF0: lw          $v1, 0x1C($s3)
        ctx->r3 = MEM_W(ctx->r19, 0X1C);
            goto L_8008FFCC;
    }
    goto skip_0;
    // 0x8008FDF0: lw          $v1, 0x1C($s3)
    ctx->r3 = MEM_W(ctx->r19, 0X1C);
    skip_0:
    // 0x8008FDF4: lw          $v0, 0x18($s3)
    ctx->r2 = MEM_W(ctx->r19, 0X18);
L_8008FDF8:
    // 0x8008FDF8: lw          $t7, 0x20($s3)
    ctx->r15 = MEM_W(ctx->r19, 0X20);
    // 0x8008FDFC: sll         $t8, $s7, 2
    ctx->r24 = S32(ctx->r23 << 2);
    // 0x8008FE00: addu        $t8, $t8, $s7
    ctx->r24 = ADD32(ctx->r24, ctx->r23);
    // 0x8008FE04: sll         $t8, $t8, 3
    ctx->r24 = S32(ctx->r24 << 3);
    // 0x8008FE08: addu        $s1, $t7, $t8
    ctx->r17 = ADD32(ctx->r15, ctx->r24);
    // 0x8008FE0C: lw          $t2, 0x0($s1)
    ctx->r10 = MEM_W(ctx->r17, 0X0);
    // 0x8008FE10: lw          $t5, 0x4($s1)
    ctx->r13 = MEM_W(ctx->r17, 0X4);
    // 0x8008FE14: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    // 0x8008FE18: negu        $t3, $t2
    ctx->r11 = SUB32(0, ctx->r10);
    // 0x8008FE1C: sll         $t4, $t3, 1
    ctx->r12 = S32(ctx->r11 << 1);
    // 0x8008FE20: negu        $t6, $t5
    ctx->r14 = SUB32(0, ctx->r13);
    // 0x8008FE24: addu        $s4, $v0, $t4
    ctx->r20 = ADD32(ctx->r2, ctx->r12);
    // 0x8008FE28: sll         $t9, $t6, 1
    ctx->r25 = S32(ctx->r14 << 1);
    // 0x8008FE2C: bne         $s4, $v1, L_8008FE54
    if (ctx->r20 != ctx->r3) {
        // 0x8008FE30: addu        $fp, $v0, $t9
        ctx->r30 = ADD32(ctx->r2, ctx->r25);
            goto L_8008FE54;
    }
    // 0x8008FE30: addu        $fp, $v0, $t9
    ctx->r30 = ADD32(ctx->r2, ctx->r25);
    // 0x8008FE34: or          $t7, $s2, $zero
    ctx->r15 = ctx->r18 | 0;
    // 0x8008FE38: sll         $s2, $s5, 16
    ctx->r18 = S32(ctx->r21 << 16);
    // 0x8008FE3C: sll         $s5, $t7, 16
    ctx->r21 = S32(ctx->r15 << 16);
    // 0x8008FE40: sra         $t2, $s5, 16
    ctx->r10 = S32(SIGNED(ctx->r21) >> 16);
    // 0x8008FE44: sra         $t8, $s2, 16
    ctx->r24 = S32(SIGNED(ctx->r18) >> 16);
    // 0x8008FE48: or          $s2, $t8, $zero
    ctx->r18 = ctx->r24 | 0;
    // 0x8008FE4C: b           L_8008FE6C
    // 0x8008FE50: or          $s5, $t2, $zero
    ctx->r21 = ctx->r10 | 0;
        goto L_8008FE6C;
    // 0x8008FE50: or          $s5, $t2, $zero
    ctx->r21 = ctx->r10 | 0;
L_8008FE54:
    // 0x8008FE54: or          $a1, $s4, $zero
    ctx->r5 = ctx->r20 | 0;
    // 0x8008FE58: or          $a2, $s5, $zero
    ctx->r6 = ctx->r21 | 0;
    // 0x8008FE5C: or          $a3, $s6, $zero
    ctx->r7 = ctx->r22 | 0;
    // 0x8008FE60: jal         0x8008F6E8
    // 0x8008FE64: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    func_8008F6E8(rdram, ctx);
        goto after_2;
    // 0x8008FE64: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    after_2:
    // 0x8008FE68: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
L_8008FE6C:
    // 0x8008FE6C: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    // 0x8008FE70: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    // 0x8008FE74: or          $a2, $s2, $zero
    ctx->r6 = ctx->r18 | 0;
    // 0x8008FE78: or          $a3, $s6, $zero
    ctx->r7 = ctx->r22 | 0;
    // 0x8008FE7C: jal         0x8008F874
    // 0x8008FE80: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    func_8008F874(rdram, ctx);
        goto after_3;
    // 0x8008FE80: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    after_3:
    // 0x8008FE84: lh          $a0, 0x8($s1)
    ctx->r4 = MEM_H(ctx->r17, 0X8);
    // 0x8008FE88: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x8008FE8C: lui         $at, 0xC00
    ctx->r1 = S32(0XC00 << 16);
    // 0x8008FE90: beq         $a0, $zero, L_8008FEE4
    if (ctx->r4 == 0) {
        // 0x8008FE94: andi        $t4, $a0, 0xFFFF
        ctx->r12 = ctx->r4 & 0XFFFF;
            goto L_8008FEE4;
    }
    // 0x8008FE94: andi        $t4, $a0, 0xFFFF
    ctx->r12 = ctx->r4 & 0XFFFF;
    // 0x8008FE98: sll         $t9, $s5, 16
    ctx->r25 = S32(ctx->r21 << 16);
    // 0x8008FE9C: andi        $t7, $s2, 0xFFFF
    ctx->r15 = ctx->r18 & 0XFFFF;
    // 0x8008FEA0: or          $t8, $t9, $t7
    ctx->r24 = ctx->r25 | ctx->r15;
    // 0x8008FEA4: or          $t5, $t4, $at
    ctx->r13 = ctx->r12 | ctx->r1;
    // 0x8008FEA8: sw          $t5, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r13;
    // 0x8008FEAC: sw          $t8, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r24;
    // 0x8008FEB0: lw          $t2, 0x24($s1)
    ctx->r10 = MEM_W(ctx->r17, 0X24);
    // 0x8008FEB4: addiu       $s0, $v0, 0x8
    ctx->r16 = ADD32(ctx->r2, 0X8);
    // 0x8008FEB8: bnel        $t2, $zero, L_8008FEE8
    if (ctx->r10 != 0) {
        // 0x8008FEBC: lh          $v1, 0xA($s1)
        ctx->r3 = MEM_H(ctx->r17, 0XA);
            goto L_8008FEE8;
    }
    goto skip_1;
    // 0x8008FEBC: lh          $v1, 0xA($s1)
    ctx->r3 = MEM_H(ctx->r17, 0XA);
    skip_1:
    // 0x8008FEC0: lw          $t3, 0x20($s1)
    ctx->r11 = MEM_W(ctx->r17, 0X20);
    // 0x8008FEC4: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    // 0x8008FEC8: or          $a1, $fp, $zero
    ctx->r5 = ctx->r30 | 0;
    // 0x8008FECC: bne         $t3, $zero, L_8008FEE4
    if (ctx->r11 != 0) {
        // 0x8008FED0: or          $a2, $s2, $zero
        ctx->r6 = ctx->r18 | 0;
            goto L_8008FEE4;
    }
    // 0x8008FED0: or          $a2, $s2, $zero
    ctx->r6 = ctx->r18 | 0;
    // 0x8008FED4: or          $a3, $s6, $zero
    ctx->r7 = ctx->r22 | 0;
    // 0x8008FED8: jal         0x8008F560
    // 0x8008FEDC: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    func_8008F560(rdram, ctx);
        goto after_4;
    // 0x8008FEDC: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    after_4:
    // 0x8008FEE0: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
L_8008FEE4:
    // 0x8008FEE4: lh          $v1, 0xA($s1)
    ctx->r3 = MEM_H(ctx->r17, 0XA);
L_8008FEE8:
    // 0x8008FEE8: or          $v0, $s0, $zero
    ctx->r2 = ctx->r16 | 0;
    // 0x8008FEEC: lui         $at, 0xC00
    ctx->r1 = S32(0XC00 << 16);
    // 0x8008FEF0: beq         $v1, $zero, L_8008FF30
    if (ctx->r3 == 0) {
        // 0x8008FEF4: andi        $t5, $v1, 0xFFFF
        ctx->r13 = ctx->r3 & 0XFFFF;
            goto L_8008FF30;
    }
    // 0x8008FEF4: andi        $t5, $v1, 0xFFFF
    ctx->r13 = ctx->r3 & 0XFFFF;
    // 0x8008FEF8: sll         $t7, $s2, 16
    ctx->r15 = S32(ctx->r18 << 16);
    // 0x8008FEFC: andi        $t8, $s5, 0xFFFF
    ctx->r24 = ctx->r21 & 0XFFFF;
    // 0x8008FF00: or          $t2, $t7, $t8
    ctx->r10 = ctx->r15 | ctx->r24;
    // 0x8008FF04: or          $t6, $t5, $at
    ctx->r14 = ctx->r13 | ctx->r1;
    // 0x8008FF08: sw          $t6, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r14;
    // 0x8008FF0C: sw          $t2, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r10;
    // 0x8008FF10: addiu       $s0, $s0, 0x8
    ctx->r16 = ADD32(ctx->r16, 0X8);
    // 0x8008FF14: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8008FF18: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    // 0x8008FF1C: or          $a1, $s4, $zero
    ctx->r5 = ctx->r20 | 0;
    // 0x8008FF20: or          $a2, $s5, $zero
    ctx->r6 = ctx->r21 | 0;
    // 0x8008FF24: jal         0x8008F560
    // 0x8008FF28: or          $a3, $s6, $zero
    ctx->r7 = ctx->r22 | 0;
    func_8008F560(rdram, ctx);
        goto after_5;
    // 0x8008FF28: or          $a3, $s6, $zero
    ctx->r7 = ctx->r22 | 0;
    after_5:
    // 0x8008FF2C: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
L_8008FF30:
    // 0x8008FF30: lw          $a0, 0x20($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X20);
    // 0x8008FF34: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    // 0x8008FF38: or          $a2, $s6, $zero
    ctx->r6 = ctx->r22 | 0;
    // 0x8008FF3C: beql        $a0, $zero, L_8008FF54
    if (ctx->r4 == 0) {
        // 0x8008FF40: lw          $t3, 0x24($s1)
        ctx->r11 = MEM_W(ctx->r17, 0X24);
            goto L_8008FF54;
    }
    goto skip_2;
    // 0x8008FF40: lw          $t3, 0x24($s1)
    ctx->r11 = MEM_W(ctx->r17, 0X24);
    skip_2:
    // 0x8008FF44: jal         0x8008F4A8
    // 0x8008FF48: or          $a3, $s0, $zero
    ctx->r7 = ctx->r16 | 0;
    func_8008F4A8(rdram, ctx);
        goto after_6;
    // 0x8008FF48: or          $a3, $s0, $zero
    ctx->r7 = ctx->r16 | 0;
    after_6:
    // 0x8008FF4C: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x8008FF50: lw          $t3, 0x24($s1)
    ctx->r11 = MEM_W(ctx->r17, 0X24);
L_8008FF54:
    // 0x8008FF54: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    // 0x8008FF58: or          $a1, $fp, $zero
    ctx->r5 = ctx->r30 | 0;
    // 0x8008FF5C: bne         $t3, $zero, L_8008FF74
    if (ctx->r11 != 0) {
        // 0x8008FF60: or          $a2, $s2, $zero
        ctx->r6 = ctx->r18 | 0;
            goto L_8008FF74;
    }
    // 0x8008FF60: or          $a2, $s2, $zero
    ctx->r6 = ctx->r18 | 0;
    // 0x8008FF64: or          $a3, $s6, $zero
    ctx->r7 = ctx->r22 | 0;
    // 0x8008FF68: jal         0x8008F560
    // 0x8008FF6C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    func_8008F560(rdram, ctx);
        goto after_7;
    // 0x8008FF6C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    after_7:
    // 0x8008FF70: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
L_8008FF74:
    // 0x8008FF74: lh          $v1, 0xC($s1)
    ctx->r3 = MEM_H(ctx->r17, 0XC);
    // 0x8008FF78: addiu       $s7, $s7, 0x1
    ctx->r23 = ADD32(ctx->r23, 0X1);
    // 0x8008FF7C: sll         $t4, $s7, 16
    ctx->r12 = S32(ctx->r23 << 16);
    // 0x8008FF80: beq         $v1, $zero, L_8008FFAC
    if (ctx->r3 == 0) {
        // 0x8008FF84: sra         $s7, $t4, 16
        ctx->r23 = S32(SIGNED(ctx->r12) >> 16);
            goto L_8008FFAC;
    }
    // 0x8008FF84: sra         $s7, $t4, 16
    ctx->r23 = S32(SIGNED(ctx->r12) >> 16);
    // 0x8008FF88: or          $v0, $s0, $zero
    ctx->r2 = ctx->r16 | 0;
    // 0x8008FF8C: andi        $t5, $v1, 0xFFFF
    ctx->r13 = ctx->r3 & 0XFFFF;
    // 0x8008FF90: lui         $at, 0xC00
    ctx->r1 = S32(0XC00 << 16);
    // 0x8008FF94: sll         $t7, $s2, 16
    ctx->r15 = S32(ctx->r18 << 16);
    // 0x8008FF98: ori         $t8, $t7, 0x800
    ctx->r24 = ctx->r15 | 0X800;
    // 0x8008FF9C: or          $t6, $t5, $at
    ctx->r14 = ctx->r13 | ctx->r1;
    // 0x8008FFA0: sw          $t6, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r14;
    // 0x8008FFA4: sw          $t8, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r24;
    // 0x8008FFA8: addiu       $s0, $s0, 0x8
    ctx->r16 = ADD32(ctx->r16, 0X8);
L_8008FFAC:
    // 0x8008FFAC: lbu         $t6, 0x24($s3)
    ctx->r14 = MEM_BU(ctx->r19, 0X24);
    // 0x8008FFB0: lw          $t2, 0x4($s1)
    ctx->r10 = MEM_W(ctx->r17, 0X4);
    // 0x8008FFB4: lw          $v0, 0x18($s3)
    ctx->r2 = MEM_W(ctx->r19, 0X18);
    // 0x8008FFB8: slt         $at, $s7, $t6
    ctx->r1 = SIGNED(ctx->r23) < SIGNED(ctx->r14) ? 1 : 0;
    // 0x8008FFBC: sll         $t3, $t2, 1
    ctx->r11 = S32(ctx->r10 << 1);
    // 0x8008FFC0: bne         $at, $zero, L_8008FDF8
    if (ctx->r1 != 0) {
        // 0x8008FFC4: addu        $v1, $v0, $t3
        ctx->r3 = ADD32(ctx->r2, ctx->r11);
            goto L_8008FDF8;
    }
    // 0x8008FFC4: addu        $v1, $v0, $t3
    ctx->r3 = ADD32(ctx->r2, ctx->r11);
    // 0x8008FFC8: lw          $v1, 0x1C($s3)
    ctx->r3 = MEM_W(ctx->r19, 0X1C);
L_8008FFCC:
    // 0x8008FFCC: lw          $t9, 0x18($s3)
    ctx->r25 = MEM_W(ctx->r19, 0X18);
    // 0x8008FFD0: lw          $t7, 0x50($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X50);
    // 0x8008FFD4: lw          $t3, 0x14($s3)
    ctx->r11 = MEM_W(ctx->r19, 0X14);
    // 0x8008FFD8: sll         $t2, $v1, 1
    ctx->r10 = S32(ctx->r3 << 1);
    // 0x8008FFDC: addu        $t8, $t9, $t7
    ctx->r24 = ADD32(ctx->r25, ctx->r15);
    // 0x8008FFE0: addu        $t4, $t3, $t2
    ctx->r12 = ADD32(ctx->r11, ctx->r10);
    // 0x8008FFE4: sltu        $at, $t4, $t8
    ctx->r1 = ctx->r12 < ctx->r24 ? 1 : 0;
    // 0x8008FFE8: beq         $at, $zero, L_8008FFF8
    if (ctx->r1 == 0) {
        // 0x8008FFEC: sw          $t8, 0x18($s3)
        MEM_W(0X18, ctx->r19) = ctx->r24;
            goto L_8008FFF8;
    }
    // 0x8008FFEC: sw          $t8, 0x18($s3)
    MEM_W(0X18, ctx->r19) = ctx->r24;
    // 0x8008FFF0: subu        $t5, $t8, $t2
    ctx->r13 = SUB32(ctx->r24, ctx->r10);
    // 0x8008FFF4: sw          $t5, 0x18($s3)
    MEM_W(0X18, ctx->r19) = ctx->r13;
L_8008FFF8:
    // 0x8008FFF8: lui         $t6, 0xA00
    ctx->r14 = S32(0XA00 << 16);
    // 0x8008FFFC: ori         $t6, $t6, 0x800
    ctx->r14 = ctx->r14 | 0X800;
    // 0x80090000: or          $v1, $s0, $zero
    ctx->r3 = ctx->r16 | 0;
    // 0x80090004: sw          $t6, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r14;
    // 0x80090008: lw          $t9, 0x48($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X48);
    // 0x8009000C: lui         $at, 0x6C0
    ctx->r1 = S32(0X6C0 << 16);
    // 0x80090010: addiu       $v0, $s0, 0x8
    ctx->r2 = ADD32(ctx->r16, 0X8);
    // 0x80090014: or          $t7, $t9, $at
    ctx->r15 = ctx->r25 | ctx->r1;
    // 0x80090018: sw          $t7, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r15;
    // 0x8009001C: lw          $ra, 0x44($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X44);
    // 0x80090020: lw          $fp, 0x40($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X40);
    // 0x80090024: lw          $s7, 0x3C($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X3C);
    // 0x80090028: lw          $s6, 0x38($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X38);
    // 0x8009002C: lw          $s5, 0x34($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X34);
    // 0x80090030: lw          $s4, 0x30($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X30);
    // 0x80090034: lw          $s3, 0x2C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X2C);
    // 0x80090038: lw          $s2, 0x28($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X28);
    // 0x8009003C: lw          $s1, 0x24($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X24);
    // 0x80090040: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x80090044: jr          $ra
    // 0x80090048: addiu       $sp, $sp, 0xA8
    ctx->r29 = ADD32(ctx->r29, 0XA8);
    return;
    // 0x80090048: addiu       $sp, $sp, 0xA8
    ctx->r29 = ADD32(ctx->r29, 0XA8);
    // 0x8009004C: nop

;}
RECOMP_FUNC void func_80090050(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80090050: or          $v0, $a0, $zero
    ctx->r2 = ctx->r4 | 0;
    // 0x80090054: or          $v1, $a1, $zero
    ctx->r3 = ctx->r5 | 0;
    // 0x80090058: blez        $a2, L_800900BC
    if (SIGNED(ctx->r6) <= 0) {
        // 0x8009005C: or          $a3, $zero, $zero
        ctx->r7 = 0 | 0;
            goto L_800900BC;
    }
    // 0x8009005C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x80090060: andi        $a1, $a2, 0x3
    ctx->r5 = ctx->r6 & 0X3;
    // 0x80090064: beq         $a1, $zero, L_8009008C
    if (ctx->r5 == 0) {
        // 0x80090068: or          $a0, $a1, $zero
        ctx->r4 = ctx->r5 | 0;
            goto L_8009008C;
    }
    // 0x80090068: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
L_8009006C:
    // 0x8009006C: lbu         $t6, 0x0($v0)
    ctx->r14 = MEM_BU(ctx->r2, 0X0);
    // 0x80090070: addiu       $a3, $a3, 0x1
    ctx->r7 = ADD32(ctx->r7, 0X1);
    // 0x80090074: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x80090078: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8009007C: bne         $a0, $a3, L_8009006C
    if (ctx->r4 != ctx->r7) {
        // 0x80090080: sb          $t6, -0x1($v1)
        MEM_B(-0X1, ctx->r3) = ctx->r14;
            goto L_8009006C;
    }
    // 0x80090080: sb          $t6, -0x1($v1)
    MEM_B(-0X1, ctx->r3) = ctx->r14;
    // 0x80090084: beq         $a3, $a2, L_800900BC
    if (ctx->r7 == ctx->r6) {
        // 0x80090088: nop
    
            goto L_800900BC;
    }
    // 0x80090088: nop

L_8009008C:
    // 0x8009008C: lbu         $t7, 0x0($v0)
    ctx->r15 = MEM_BU(ctx->r2, 0X0);
    // 0x80090090: addiu       $a3, $a3, 0x4
    ctx->r7 = ADD32(ctx->r7, 0X4);
    // 0x80090094: addiu       $v1, $v1, 0x4
    ctx->r3 = ADD32(ctx->r3, 0X4);
    // 0x80090098: sb          $t7, -0x4($v1)
    MEM_B(-0X4, ctx->r3) = ctx->r15;
    // 0x8009009C: lbu         $t8, 0x1($v0)
    ctx->r24 = MEM_BU(ctx->r2, 0X1);
    // 0x800900A0: addiu       $v0, $v0, 0x4
    ctx->r2 = ADD32(ctx->r2, 0X4);
    // 0x800900A4: sb          $t8, -0x3($v1)
    MEM_B(-0X3, ctx->r3) = ctx->r24;
    // 0x800900A8: lbu         $t9, -0x2($v0)
    ctx->r25 = MEM_BU(ctx->r2, -0X2);
    // 0x800900AC: sb          $t9, -0x2($v1)
    MEM_B(-0X2, ctx->r3) = ctx->r25;
    // 0x800900B0: lbu         $t0, -0x1($v0)
    ctx->r8 = MEM_BU(ctx->r2, -0X1);
    // 0x800900B4: bne         $a3, $a2, L_8009008C
    if (ctx->r7 != ctx->r6) {
        // 0x800900B8: sb          $t0, -0x1($v1)
        MEM_B(-0X1, ctx->r3) = ctx->r8;
            goto L_8009008C;
    }
    // 0x800900B8: sb          $t0, -0x1($v1)
    MEM_B(-0X1, ctx->r3) = ctx->r8;
L_800900BC:
    // 0x800900BC: jr          $ra
    // 0x800900C0: nop

    return;
    // 0x800900C0: nop

    // 0x800900C4: nop

    // 0x800900C8: nop

    // 0x800900CC: nop

;}
RECOMP_FUNC void func_80090100(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80090100: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80090104: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80090108: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x8009010C: jal         0x80088970
    // 0x80090110: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    __osDisableInt_recomp(rdram, ctx);
        goto after_0;
    // 0x80090110: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    after_0:
    // 0x80090114: lw          $t7, 0x28($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X28);
    // 0x80090118: lui         $t6, 0x800D
    ctx->r14 = S32(0X800D << 16);
    // 0x8009011C: lw          $t6, 0x18C0($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X18C0);
    // 0x80090120: addiu       $at, $zero, -0x402
    ctx->r1 = ADD32(0, -0X402);
    // 0x80090124: and         $t8, $t7, $at
    ctx->r24 = ctx->r15 & ctx->r1;
    // 0x80090128: nor         $t9, $t8, $zero
    ctx->r25 = ~(ctx->r24 | 0);
    // 0x8009012C: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x80090130: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x80090134: and         $t0, $t6, $t9
    ctx->r8 = ctx->r14 & ctx->r25;
    // 0x80090138: sw          $t0, 0x18C0($at)
    MEM_W(0X18C0, ctx->r1) = ctx->r8;
    // 0x8009013C: jal         0x80088990
    // 0x80090140: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    __osRestoreInt_recomp(rdram, ctx);
        goto after_1;
    // 0x80090140: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
    // 0x80090144: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80090148: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8009014C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80090150: jr          $ra
    // 0x80090154: nop

    return;
    // 0x80090154: nop

    // 0x80090158: nop

    // 0x8009015C: nop

;}
RECOMP_FUNC void func_80090160(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80090160: lui         $t6, 0xA460
    ctx->r14 = S32(0XA460 << 16);
    // 0x80090164: lw          $a3, 0x10($t6)
    ctx->r7 = MEM_W(ctx->r14, 0X10);
    // 0x80090168: addiu       $sp, $sp, -0x8
    ctx->r29 = ADD32(ctx->r29, -0X8);
    // 0x8009016C: andi        $t7, $a3, 0x3
    ctx->r15 = ctx->r7 & 0X3;
    // 0x80090170: beq         $t7, $zero, L_8009018C
    if (ctx->r15 == 0) {
        // 0x80090174: nop
    
            goto L_8009018C;
    }
    // 0x80090174: nop

L_80090178:
    // 0x80090178: lui         $t8, 0xA460
    ctx->r24 = S32(0XA460 << 16);
    // 0x8009017C: lw          $a3, 0x10($t8)
    ctx->r7 = MEM_W(ctx->r24, 0X10);
    // 0x80090180: andi        $t9, $a3, 0x3
    ctx->r25 = ctx->r7 & 0X3;
    // 0x80090184: bne         $t9, $zero, L_80090178
    if (ctx->r25 != 0) {
        // 0x80090188: nop
    
            goto L_80090178;
    }
    // 0x80090188: nop

L_8009018C:
    // 0x8009018C: lw          $t0, 0xC($a0)
    ctx->r8 = MEM_W(ctx->r4, 0XC);
    // 0x80090190: lui         $at, 0xA000
    ctx->r1 = S32(0XA000 << 16);
    // 0x80090194: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
    // 0x80090198: or          $t1, $t0, $a1
    ctx->r9 = ctx->r8 | ctx->r5;
    // 0x8009019C: or          $t2, $t1, $at
    ctx->r10 = ctx->r9 | ctx->r1;
    // 0x800901A0: sw          $a2, 0x0($t2)
    MEM_W(0X0, ctx->r10) = ctx->r6;
    // 0x800901A4: jr          $ra
    // 0x800901A8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    return;
    // 0x800901A8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x800901AC: nop

;}
RECOMP_FUNC void func_800901B0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800901B0: lui         $t6, 0xA460
    ctx->r14 = S32(0XA460 << 16);
    // 0x800901B4: lw          $a3, 0x10($t6)
    ctx->r7 = MEM_W(ctx->r14, 0X10);
    // 0x800901B8: addiu       $sp, $sp, -0x8
    ctx->r29 = ADD32(ctx->r29, -0X8);
    // 0x800901BC: andi        $t7, $a3, 0x3
    ctx->r15 = ctx->r7 & 0X3;
    // 0x800901C0: beq         $t7, $zero, L_800901DC
    if (ctx->r15 == 0) {
        // 0x800901C4: nop
    
            goto L_800901DC;
    }
    // 0x800901C4: nop

L_800901C8:
    // 0x800901C8: lui         $t8, 0xA460
    ctx->r24 = S32(0XA460 << 16);
    // 0x800901CC: lw          $a3, 0x10($t8)
    ctx->r7 = MEM_W(ctx->r24, 0X10);
    // 0x800901D0: andi        $t9, $a3, 0x3
    ctx->r25 = ctx->r7 & 0X3;
    // 0x800901D4: bne         $t9, $zero, L_800901C8
    if (ctx->r25 != 0) {
        // 0x800901D8: nop
    
            goto L_800901C8;
    }
    // 0x800901D8: nop

L_800901DC:
    // 0x800901DC: lw          $t0, 0xC($a0)
    ctx->r8 = MEM_W(ctx->r4, 0XC);
    // 0x800901E0: lui         $at, 0xA000
    ctx->r1 = S32(0XA000 << 16);
    // 0x800901E4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x800901E8: or          $t1, $t0, $a1
    ctx->r9 = ctx->r8 | ctx->r5;
    // 0x800901EC: or          $t2, $t1, $at
    ctx->r10 = ctx->r9 | ctx->r1;
    // 0x800901F0: lw          $t3, 0x0($t2)
    ctx->r11 = MEM_W(ctx->r10, 0X0);
    // 0x800901F4: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
    // 0x800901F8: jr          $ra
    // 0x800901FC: sw          $t3, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r11;
    return;
    // 0x800901FC: sw          $t3, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r11;
;}
RECOMP_FUNC void func_80090200(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80090200: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80090204: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80090208: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x8009020C: jal         0x80088970
    // 0x80090210: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    __osDisableInt_recomp(rdram, ctx);
        goto after_0;
    // 0x80090210: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    after_0:
    // 0x80090214: lui         $t6, 0x800D
    ctx->r14 = S32(0X800D << 16);
    // 0x80090218: lw          $t6, 0x18C0($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X18C0);
    // 0x8009021C: lw          $t7, 0x28($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X28);
    // 0x80090220: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x80090224: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x80090228: or          $t8, $t6, $t7
    ctx->r24 = ctx->r14 | ctx->r15;
    // 0x8009022C: sw          $t8, 0x18C0($at)
    MEM_W(0X18C0, ctx->r1) = ctx->r24;
    // 0x80090230: jal         0x80088990
    // 0x80090234: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    __osRestoreInt_recomp(rdram, ctx);
        goto after_1;
    // 0x80090234: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
    // 0x80090238: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8009023C: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80090240: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80090244: jr          $ra
    // 0x80090248: nop

    return;
    // 0x80090248: nop

    // 0x8009024C: nop

;}
RECOMP_FUNC void func_80090250(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80090250: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80090254: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80090258: jal         0x80088970
    // 0x8009025C: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    __osDisableInt_recomp(rdram, ctx);
        goto after_0;
    // 0x8009025C: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    after_0:
    // 0x80090260: lui         $t7, 0x800D
    ctx->r15 = S32(0X800D << 16);
    // 0x80090264: lw          $t7, 0x2670($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X2670);
    // 0x80090268: addiu       $t6, $zero, 0x2
    ctx->r14 = ADD32(0, 0X2);
    // 0x8009026C: lui         $a0, 0x800D
    ctx->r4 = S32(0X800D << 16);
    // 0x80090270: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x80090274: addiu       $a0, $a0, 0x2668
    ctx->r4 = ADD32(ctx->r4, 0X2668);
    // 0x80090278: jal         0x8008868C
    // 0x8009027C: sh          $t6, 0x10($t7)
    MEM_H(0X10, ctx->r15) = ctx->r14;
    func_8008868C(rdram, ctx);
        goto after_1;
    // 0x8009027C: sh          $t6, 0x10($t7)
    MEM_H(0X10, ctx->r15) = ctx->r14;
    after_1:
    // 0x80090280: jal         0x80088990
    // 0x80090284: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    __osRestoreInt_recomp(rdram, ctx);
        goto after_2;
    // 0x80090284: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_2:
    // 0x80090288: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8009028C: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80090290: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80090294: jr          $ra
    // 0x80090298: nop

    return;
    // 0x80090298: nop

    // 0x8009029C: nop

;}
RECOMP_FUNC void func_800902B0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800902B0: addiu       $sp, $sp, -0x10
    ctx->r29 = ADD32(ctx->r29, -0X10);
    // 0x800902B4: andi        $a0, $a0, 0xFFFF
    ctx->r4 = ctx->r4 & 0XFFFF;
    // 0x800902B8: sb          $zero, 0xF($sp)
    MEM_B(0XF, ctx->r29) = 0;
    // 0x800902BC: sw          $zero, 0x8($sp)
    MEM_W(0X8, ctx->r29) = 0;
L_800902C0:
    // 0x800902C0: lbu         $t6, 0xF($sp)
    ctx->r14 = MEM_BU(ctx->r29, 0XF);
    // 0x800902C4: andi        $t7, $t6, 0x10
    ctx->r15 = ctx->r14 & 0X10;
    // 0x800902C8: beq         $t7, $zero, L_800902DC
    if (ctx->r15 == 0) {
        // 0x800902CC: nop
    
            goto L_800902DC;
    }
    // 0x800902CC: nop

    // 0x800902D0: addiu       $t8, $zero, 0x15
    ctx->r24 = ADD32(0, 0X15);
    // 0x800902D4: b           L_800902E0
    // 0x800902D8: sb          $t8, 0xE($sp)
    MEM_B(0XE, ctx->r29) = ctx->r24;
        goto L_800902E0;
    // 0x800902D8: sb          $t8, 0xE($sp)
    MEM_B(0XE, ctx->r29) = ctx->r24;
L_800902DC:
    // 0x800902DC: sb          $zero, 0xE($sp)
    MEM_B(0XE, ctx->r29) = 0;
L_800902E0:
    // 0x800902E0: lbu         $t9, 0xF($sp)
    ctx->r25 = MEM_BU(ctx->r29, 0XF);
    // 0x800902E4: andi        $t1, $a0, 0x400
    ctx->r9 = ctx->r4 & 0X400;
    // 0x800902E8: sll         $t0, $t9, 1
    ctx->r8 = S32(ctx->r25 << 1);
    // 0x800902EC: beq         $t1, $zero, L_800902FC
    if (ctx->r9 == 0) {
        // 0x800902F0: sb          $t0, 0xF($sp)
        MEM_B(0XF, ctx->r29) = ctx->r8;
            goto L_800902FC;
    }
    // 0x800902F0: sb          $t0, 0xF($sp)
    MEM_B(0XF, ctx->r29) = ctx->r8;
    // 0x800902F4: b           L_80090300
    // 0x800902F8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
        goto L_80090300;
    // 0x800902F8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
L_800902FC:
    // 0x800902FC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
L_80090300:
    // 0x80090300: lbu         $t2, 0xF($sp)
    ctx->r10 = MEM_BU(ctx->r29, 0XF);
    // 0x80090304: lw          $t0, 0x8($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X8);
    // 0x80090308: lbu         $t7, 0xE($sp)
    ctx->r15 = MEM_BU(ctx->r29, 0XE);
    // 0x8009030C: andi        $t3, $a1, 0xFF
    ctx->r11 = ctx->r5 & 0XFF;
    // 0x80090310: sll         $t5, $a0, 1
    ctx->r13 = S32(ctx->r4 << 1);
    // 0x80090314: or          $t4, $t2, $t3
    ctx->r12 = ctx->r10 | ctx->r11;
    // 0x80090318: or          $a0, $t5, $zero
    ctx->r4 = ctx->r13 | 0;
    // 0x8009031C: andi        $t8, $t4, 0xFF
    ctx->r24 = ctx->r12 & 0XFF;
    // 0x80090320: addiu       $t1, $t0, 0x1
    ctx->r9 = ADD32(ctx->r8, 0X1);
    // 0x80090324: slti        $at, $t1, 0x10
    ctx->r1 = SIGNED(ctx->r9) < 0X10 ? 1 : 0;
    // 0x80090328: sb          $t4, 0xF($sp)
    MEM_B(0XF, ctx->r29) = ctx->r12;
    // 0x8009032C: andi        $t6, $a0, 0xFFFF
    ctx->r14 = ctx->r4 & 0XFFFF;
    // 0x80090330: xor         $t9, $t8, $t7
    ctx->r25 = ctx->r24 ^ ctx->r15;
    // 0x80090334: sw          $t1, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r9;
    // 0x80090338: or          $a0, $t6, $zero
    ctx->r4 = ctx->r14 | 0;
    // 0x8009033C: bne         $at, $zero, L_800902C0
    if (ctx->r1 != 0) {
        // 0x80090340: sb          $t9, 0xF($sp)
        MEM_B(0XF, ctx->r29) = ctx->r25;
            goto L_800902C0;
    }
    // 0x80090340: sb          $t9, 0xF($sp)
    MEM_B(0XF, ctx->r29) = ctx->r25;
    // 0x80090344: lbu         $v0, 0xF($sp)
    ctx->r2 = MEM_BU(ctx->r29, 0XF);
    // 0x80090348: addiu       $sp, $sp, 0x10
    ctx->r29 = ADD32(ctx->r29, 0X10);
    // 0x8009034C: andi        $t2, $v0, 0x1F
    ctx->r10 = ctx->r2 & 0X1F;
    // 0x80090350: or          $v0, $t2, $zero
    ctx->r2 = ctx->r10 | 0;
    // 0x80090354: andi        $t3, $v0, 0xFF
    ctx->r11 = ctx->r2 & 0XFF;
    // 0x80090358: jr          $ra
    // 0x8009035C: or          $v0, $t3, $zero
    ctx->r2 = ctx->r11 | 0;
    return;
    // 0x8009035C: or          $v0, $t3, $zero
    ctx->r2 = ctx->r11 | 0;
;}
RECOMP_FUNC void func_80090360(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80090360: addiu       $sp, $sp, -0x10
    ctx->r29 = ADD32(ctx->r29, -0X10);
    // 0x80090364: sb          $zero, 0xF($sp)
    MEM_B(0XF, ctx->r29) = 0;
    // 0x80090368: sw          $zero, 0x8($sp)
    MEM_W(0X8, ctx->r29) = 0;
L_8009036C:
    // 0x8009036C: addiu       $t6, $zero, 0x7
    ctx->r14 = ADD32(0, 0X7);
    // 0x80090370: sw          $t6, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r14;
L_80090374:
    // 0x80090374: lbu         $t7, 0xF($sp)
    ctx->r15 = MEM_BU(ctx->r29, 0XF);
    // 0x80090378: andi        $t8, $t7, 0x80
    ctx->r24 = ctx->r15 & 0X80;
    // 0x8009037C: beq         $t8, $zero, L_80090390
    if (ctx->r24 == 0) {
        // 0x80090380: nop
    
            goto L_80090390;
    }
    // 0x80090380: nop

    // 0x80090384: addiu       $t9, $zero, 0x85
    ctx->r25 = ADD32(0, 0X85);
    // 0x80090388: b           L_80090394
    // 0x8009038C: sb          $t9, 0xE($sp)
    MEM_B(0XE, ctx->r29) = ctx->r25;
        goto L_80090394;
    // 0x8009038C: sb          $t9, 0xE($sp)
    MEM_B(0XE, ctx->r29) = ctx->r25;
L_80090390:
    // 0x80090390: sb          $zero, 0xE($sp)
    MEM_B(0XE, ctx->r29) = 0;
L_80090394:
    // 0x80090394: lbu         $t0, 0xF($sp)
    ctx->r8 = MEM_BU(ctx->r29, 0XF);
    // 0x80090398: lw          $t2, 0x8($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X8);
    // 0x8009039C: addiu       $at, $zero, 0x20
    ctx->r1 = ADD32(0, 0X20);
    // 0x800903A0: sll         $t1, $t0, 1
    ctx->r9 = S32(ctx->r8 << 1);
    // 0x800903A4: bne         $t2, $at, L_800903B8
    if (ctx->r10 != ctx->r1) {
        // 0x800903A8: sb          $t1, 0xF($sp)
        MEM_B(0XF, ctx->r29) = ctx->r9;
            goto L_800903B8;
    }
    // 0x800903A8: sb          $t1, 0xF($sp)
    MEM_B(0XF, ctx->r29) = ctx->r9;
    // 0x800903AC: andi        $t3, $t1, 0xFF
    ctx->r11 = ctx->r9 & 0XFF;
    // 0x800903B0: b           L_800903EC
    // 0x800903B4: sb          $t3, 0xF($sp)
    MEM_B(0XF, ctx->r29) = ctx->r11;
        goto L_800903EC;
    // 0x800903B4: sb          $t3, 0xF($sp)
    MEM_B(0XF, ctx->r29) = ctx->r11;
L_800903B8:
    // 0x800903B8: lw          $t5, 0x4($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X4);
    // 0x800903BC: lbu         $t4, 0x0($a0)
    ctx->r12 = MEM_BU(ctx->r4, 0X0);
    // 0x800903C0: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x800903C4: sllv        $t7, $t6, $t5
    ctx->r15 = S32(ctx->r14 << (ctx->r13 & 31));
    // 0x800903C8: and         $t8, $t4, $t7
    ctx->r24 = ctx->r12 & ctx->r15;
    // 0x800903CC: beq         $t8, $zero, L_800903DC
    if (ctx->r24 == 0) {
        // 0x800903D0: nop
    
            goto L_800903DC;
    }
    // 0x800903D0: nop

    // 0x800903D4: b           L_800903E0
    // 0x800903D8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
        goto L_800903E0;
    // 0x800903D8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
L_800903DC:
    // 0x800903DC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
L_800903E0:
    // 0x800903E0: lbu         $t9, 0xF($sp)
    ctx->r25 = MEM_BU(ctx->r29, 0XF);
    // 0x800903E4: or          $t0, $t9, $a1
    ctx->r8 = ctx->r25 | ctx->r5;
    // 0x800903E8: sb          $t0, 0xF($sp)
    MEM_B(0XF, ctx->r29) = ctx->r8;
L_800903EC:
    // 0x800903EC: lw          $t6, 0x4($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X4);
    // 0x800903F0: lbu         $t2, 0xF($sp)
    ctx->r10 = MEM_BU(ctx->r29, 0XF);
    // 0x800903F4: lbu         $t1, 0xE($sp)
    ctx->r9 = MEM_BU(ctx->r29, 0XE);
    // 0x800903F8: addiu       $t5, $t6, -0x1
    ctx->r13 = ADD32(ctx->r14, -0X1);
    // 0x800903FC: sw          $t5, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r13;
    // 0x80090400: xor         $t3, $t2, $t1
    ctx->r11 = ctx->r10 ^ ctx->r9;
    // 0x80090404: bgez        $t5, L_80090374
    if (SIGNED(ctx->r13) >= 0) {
        // 0x80090408: sb          $t3, 0xF($sp)
        MEM_B(0XF, ctx->r29) = ctx->r11;
            goto L_80090374;
    }
    // 0x80090408: sb          $t3, 0xF($sp)
    MEM_B(0XF, ctx->r29) = ctx->r11;
    // 0x8009040C: lw          $t4, 0x8($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X8);
    // 0x80090410: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    // 0x80090414: addiu       $t7, $t4, 0x1
    ctx->r15 = ADD32(ctx->r12, 0X1);
    // 0x80090418: slti        $at, $t7, 0x21
    ctx->r1 = SIGNED(ctx->r15) < 0X21 ? 1 : 0;
    // 0x8009041C: bne         $at, $zero, L_8009036C
    if (ctx->r1 != 0) {
        // 0x80090420: sw          $t7, 0x8($sp)
        MEM_W(0X8, ctx->r29) = ctx->r15;
            goto L_8009036C;
    }
    // 0x80090420: sw          $t7, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r15;
    // 0x80090424: lbu         $v0, 0xF($sp)
    ctx->r2 = MEM_BU(ctx->r29, 0XF);
    // 0x80090428: jr          $ra
    // 0x8009042C: addiu       $sp, $sp, 0x10
    ctx->r29 = ADD32(ctx->r29, 0X10);
    return;
    // 0x8009042C: addiu       $sp, $sp, 0x10
    ctx->r29 = ADD32(ctx->r29, 0X10);
;}
RECOMP_FUNC void func_801E1300(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x801E1300: lw          $t6, 0x30($a2)
    ctx->r14 = MEM_W(ctx->r6, 0X30);
    // 0x801E1304: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x801E1308: lhu         $t2, 0x3C($t6)
    ctx->r10 = MEM_HU(ctx->r14, 0X3C);
    // 0x801E130C: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x801E1310: addiu       $t8, $v0, 0x8
    ctx->r24 = ADD32(ctx->r2, 0X8);
    // 0x801E1314: lui         $a3, 0xBC00
    ctx->r7 = S32(0XBC00 << 16);
    // 0x801E1318: sw          $t8, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r24;
    // 0x801E131C: ori         $at, $at, 0x80
    ctx->r1 = ctx->r1 | 0X80;
    // 0x801E1320: ori         $a3, $a3, 0x2406
    ctx->r7 = ctx->r7 | 0X2406;
    // 0x801E1324: addu        $t9, $a1, $at
    ctx->r25 = ADD32(ctx->r5, ctx->r1);
    // 0x801E1328: sw          $t9, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r25;
    // 0x801E132C: sw          $a3, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r7;
    // 0x801E1330: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x801E1334: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x801E1338: addiu       $t6, $v0, 0x8
    ctx->r14 = ADD32(ctx->r2, 0X8);
    // 0x801E133C: lui         $t0, 0xBC00
    ctx->r8 = S32(0XBC00 << 16);
    // 0x801E1340: sw          $t6, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r14;
    // 0x801E1344: ori         $at, $at, 0xC0
    ctx->r1 = ctx->r1 | 0XC0;
    // 0x801E1348: ori         $t0, $t0, 0x2006
    ctx->r8 = ctx->r8 | 0X2006;
    // 0x801E134C: addu        $t4, $a1, $at
    ctx->r12 = ADD32(ctx->r5, ctx->r1);
    // 0x801E1350: sw          $t4, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r12;
    // 0x801E1354: sw          $t0, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r8;
    // 0x801E1358: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x801E135C: andi        $t7, $t2, 0x8000
    ctx->r15 = ctx->r10 & 0X8000;
    // 0x801E1360: or          $t2, $t7, $zero
    ctx->r10 = ctx->r15 | 0;
    // 0x801E1364: addiu       $t7, $v0, 0x8
    ctx->r15 = ADD32(ctx->r2, 0X8);
    // 0x801E1368: sw          $t7, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r15;
    // 0x801E136C: lui         $t8, 0x801E
    ctx->r24 = S32(0X801E << 16);
    // 0x801E1370: lui         $t1, 0x600
    ctx->r9 = S32(0X600 << 16);
    // 0x801E1374: addiu       $t8, $t8, 0x6040
    ctx->r24 = ADD32(ctx->r24, 0X6040);
    // 0x801E1378: sw          $t8, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r24;
    // 0x801E137C: sw          $t1, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r9;
    // 0x801E1380: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x801E1384: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x801E1388: sw          $v0, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r2;
    // 0x801E138C: addiu       $t9, $v0, 0x8
    ctx->r25 = ADD32(ctx->r2, 0X8);
    // 0x801E1390: sw          $t9, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r25;
    // 0x801E1394: lw          $t6, 0x4($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X4);
    // 0x801E1398: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x801E139C: sw          $a3, 0x0($t6)
    MEM_W(0X0, ctx->r14) = ctx->r7;
    // 0x801E13A0: sw          $t4, 0x4($t6)
    MEM_W(0X4, ctx->r14) = ctx->r12;
    // 0x801E13A4: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x801E13A8: ori         $at, $at, 0x100
    ctx->r1 = ctx->r1 | 0X100;
    // 0x801E13AC: addiu       $t7, $v0, 0x8
    ctx->r15 = ADD32(ctx->r2, 0X8);
    // 0x801E13B0: sw          $t7, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r15;
    // 0x801E13B4: addu        $v1, $a1, $at
    ctx->r3 = ADD32(ctx->r5, ctx->r1);
    // 0x801E13B8: sw          $v1, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r3;
    // 0x801E13BC: sw          $t0, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r8;
    // 0x801E13C0: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x801E13C4: lui         $t9, 0x801E
    ctx->r25 = S32(0X801E << 16);
    // 0x801E13C8: addiu       $t8, $v0, 0x8
    ctx->r24 = ADD32(ctx->r2, 0X8);
    // 0x801E13CC: sw          $t8, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r24;
    // 0x801E13D0: addiu       $t9, $t9, 0x63B8
    ctx->r25 = ADD32(ctx->r25, 0X63B8);
    // 0x801E13D4: sw          $t9, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r25;
    // 0x801E13D8: beq         $t2, $zero, L_801E153C
    if (ctx->r10 == 0) {
        // 0x801E13DC: sw          $t1, 0x0($v0)
        MEM_W(0X0, ctx->r2) = ctx->r9;
            goto L_801E153C;
    }
    // 0x801E13DC: sw          $t1, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r9;
    // 0x801E13E0: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x801E13E4: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x801E13E8: addiu       $t6, $v0, 0x8
    ctx->r14 = ADD32(ctx->r2, 0X8);
    // 0x801E13EC: sw          $t6, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r14;
    // 0x801E13F0: sw          $v1, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r3;
    // 0x801E13F4: sw          $a3, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r7;
    // 0x801E13F8: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x801E13FC: ori         $at, $at, 0x280
    ctx->r1 = ctx->r1 | 0X280;
    // 0x801E1400: addiu       $t7, $v0, 0x8
    ctx->r15 = ADD32(ctx->r2, 0X8);
    // 0x801E1404: sw          $t7, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r15;
    // 0x801E1408: addu        $t8, $a1, $at
    ctx->r24 = ADD32(ctx->r5, ctx->r1);
    // 0x801E140C: sw          $t8, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r24;
    // 0x801E1410: sw          $t0, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r8;
    // 0x801E1414: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x801E1418: lui         $t6, 0x801E
    ctx->r14 = S32(0X801E << 16);
    // 0x801E141C: addiu       $t9, $v0, 0x8
    ctx->r25 = ADD32(ctx->r2, 0X8);
    // 0x801E1420: sw          $t9, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r25;
    // 0x801E1424: addiu       $t6, $t6, 0x60C0
    ctx->r14 = ADD32(ctx->r14, 0X60C0);
    // 0x801E1428: sw          $t6, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r14;
    // 0x801E142C: sw          $t1, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r9;
    // 0x801E1430: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x801E1434: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x801E1438: addiu       $t7, $v0, 0x8
    ctx->r15 = ADD32(ctx->r2, 0X8);
    // 0x801E143C: sw          $t7, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r15;
    // 0x801E1440: sw          $v1, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r3;
    // 0x801E1444: sw          $a3, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r7;
    // 0x801E1448: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x801E144C: ori         $at, $at, 0x180
    ctx->r1 = ctx->r1 | 0X180;
    // 0x801E1450: addiu       $t8, $v0, 0x8
    ctx->r24 = ADD32(ctx->r2, 0X8);
    // 0x801E1454: sw          $t8, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r24;
    // 0x801E1458: addu        $t9, $a1, $at
    ctx->r25 = ADD32(ctx->r5, ctx->r1);
    // 0x801E145C: sw          $t9, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r25;
    // 0x801E1460: sw          $t0, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r8;
    // 0x801E1464: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x801E1468: lui         $t7, 0x801E
    ctx->r15 = S32(0X801E << 16);
    // 0x801E146C: addiu       $t6, $v0, 0x8
    ctx->r14 = ADD32(ctx->r2, 0X8);
    // 0x801E1470: sw          $t6, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r14;
    // 0x801E1474: addiu       $t7, $t7, 0x6168
    ctx->r15 = ADD32(ctx->r15, 0X6168);
    // 0x801E1478: sw          $t7, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r15;
    // 0x801E147C: sw          $t1, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r9;
    // 0x801E1480: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x801E1484: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x801E1488: addiu       $t8, $v0, 0x8
    ctx->r24 = ADD32(ctx->r2, 0X8);
    // 0x801E148C: sw          $t8, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r24;
    // 0x801E1490: ori         $at, $at, 0x500
    ctx->r1 = ctx->r1 | 0X500;
    // 0x801E1494: addu        $t9, $a1, $at
    ctx->r25 = ADD32(ctx->r5, ctx->r1);
    // 0x801E1498: sw          $t9, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r25;
    // 0x801E149C: sw          $a3, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r7;
    // 0x801E14A0: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x801E14A4: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x801E14A8: addiu       $t6, $v0, 0x8
    ctx->r14 = ADD32(ctx->r2, 0X8);
    // 0x801E14AC: sw          $t6, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r14;
    // 0x801E14B0: ori         $at, $at, 0x540
    ctx->r1 = ctx->r1 | 0X540;
    // 0x801E14B4: addu        $t7, $a1, $at
    ctx->r15 = ADD32(ctx->r5, ctx->r1);
    // 0x801E14B8: sw          $t7, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r15;
    // 0x801E14BC: sw          $t0, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r8;
    // 0x801E14C0: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x801E14C4: lui         $t9, 0x801E
    ctx->r25 = S32(0X801E << 16);
    // 0x801E14C8: addiu       $t8, $v0, 0x8
    ctx->r24 = ADD32(ctx->r2, 0X8);
    // 0x801E14CC: sw          $t8, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r24;
    // 0x801E14D0: addiu       $t9, $t9, 0x6268
    ctx->r25 = ADD32(ctx->r25, 0X6268);
    // 0x801E14D4: sw          $t9, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r25;
    // 0x801E14D8: sw          $t1, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r9;
    // 0x801E14DC: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x801E14E0: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x801E14E4: addiu       $t6, $v0, 0x8
    ctx->r14 = ADD32(ctx->r2, 0X8);
    // 0x801E14E8: sw          $t6, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r14;
    // 0x801E14EC: ori         $at, $at, 0x400
    ctx->r1 = ctx->r1 | 0X400;
    // 0x801E14F0: addu        $t7, $a1, $at
    ctx->r15 = ADD32(ctx->r5, ctx->r1);
    // 0x801E14F4: sw          $t7, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r15;
    // 0x801E14F8: sw          $a3, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r7;
    // 0x801E14FC: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x801E1500: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x801E1504: addiu       $t8, $v0, 0x8
    ctx->r24 = ADD32(ctx->r2, 0X8);
    // 0x801E1508: sw          $t8, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r24;
    // 0x801E150C: ori         $at, $at, 0x440
    ctx->r1 = ctx->r1 | 0X440;
    // 0x801E1510: addu        $t9, $a1, $at
    ctx->r25 = ADD32(ctx->r5, ctx->r1);
    // 0x801E1514: sw          $t9, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r25;
    // 0x801E1518: sw          $t0, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r8;
    // 0x801E151C: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x801E1520: lui         $t7, 0x801E
    ctx->r15 = S32(0X801E << 16);
    // 0x801E1524: addiu       $t6, $v0, 0x8
    ctx->r14 = ADD32(ctx->r2, 0X8);
    // 0x801E1528: sw          $t6, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r14;
    // 0x801E152C: addiu       $t7, $t7, 0x6310
    ctx->r15 = ADD32(ctx->r15, 0X6310);
    // 0x801E1530: sw          $t7, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r15;
    // 0x801E1534: b           L_801E1694
    // 0x801E1538: sw          $t1, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r9;
        goto L_801E1694;
    // 0x801E1538: sw          $t1, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r9;
L_801E153C:
    // 0x801E153C: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x801E1540: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x801E1544: addiu       $t8, $v0, 0x8
    ctx->r24 = ADD32(ctx->r2, 0X8);
    // 0x801E1548: sw          $t8, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r24;
    // 0x801E154C: sw          $v1, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r3;
    // 0x801E1550: sw          $a3, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r7;
    // 0x801E1554: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x801E1558: ori         $at, $at, 0x180
    ctx->r1 = ctx->r1 | 0X180;
    // 0x801E155C: addiu       $t9, $v0, 0x8
    ctx->r25 = ADD32(ctx->r2, 0X8);
    // 0x801E1560: sw          $t9, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r25;
    // 0x801E1564: addu        $t6, $a1, $at
    ctx->r14 = ADD32(ctx->r5, ctx->r1);
    // 0x801E1568: sw          $t6, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r14;
    // 0x801E156C: sw          $t0, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r8;
    // 0x801E1570: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x801E1574: lui         $t8, 0x801E
    ctx->r24 = S32(0X801E << 16);
    // 0x801E1578: addiu       $t7, $v0, 0x8
    ctx->r15 = ADD32(ctx->r2, 0X8);
    // 0x801E157C: sw          $t7, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r15;
    // 0x801E1580: addiu       $t8, $t8, 0x60C0
    ctx->r24 = ADD32(ctx->r24, 0X60C0);
    // 0x801E1584: sw          $t8, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r24;
    // 0x801E1588: sw          $t1, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r9;
    // 0x801E158C: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x801E1590: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x801E1594: addiu       $t9, $v0, 0x8
    ctx->r25 = ADD32(ctx->r2, 0X8);
    // 0x801E1598: sw          $t9, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r25;
    // 0x801E159C: sw          $v1, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r3;
    // 0x801E15A0: sw          $a3, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r7;
    // 0x801E15A4: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x801E15A8: ori         $at, $at, 0x280
    ctx->r1 = ctx->r1 | 0X280;
    // 0x801E15AC: addiu       $t6, $v0, 0x8
    ctx->r14 = ADD32(ctx->r2, 0X8);
    // 0x801E15B0: sw          $t6, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r14;
    // 0x801E15B4: addu        $t7, $a1, $at
    ctx->r15 = ADD32(ctx->r5, ctx->r1);
    // 0x801E15B8: sw          $t7, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r15;
    // 0x801E15BC: sw          $t0, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r8;
    // 0x801E15C0: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x801E15C4: lui         $t9, 0x801E
    ctx->r25 = S32(0X801E << 16);
    // 0x801E15C8: addiu       $t8, $v0, 0x8
    ctx->r24 = ADD32(ctx->r2, 0X8);
    // 0x801E15CC: sw          $t8, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r24;
    // 0x801E15D0: addiu       $t9, $t9, 0x6168
    ctx->r25 = ADD32(ctx->r25, 0X6168);
    // 0x801E15D4: sw          $t9, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r25;
    // 0x801E15D8: sw          $t1, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r9;
    // 0x801E15DC: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x801E15E0: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x801E15E4: addiu       $t6, $v0, 0x8
    ctx->r14 = ADD32(ctx->r2, 0X8);
    // 0x801E15E8: sw          $t6, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r14;
    // 0x801E15EC: ori         $at, $at, 0x400
    ctx->r1 = ctx->r1 | 0X400;
    // 0x801E15F0: addu        $t7, $a1, $at
    ctx->r15 = ADD32(ctx->r5, ctx->r1);
    // 0x801E15F4: sw          $t7, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r15;
    // 0x801E15F8: sw          $a3, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r7;
    // 0x801E15FC: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x801E1600: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x801E1604: addiu       $t8, $v0, 0x8
    ctx->r24 = ADD32(ctx->r2, 0X8);
    // 0x801E1608: sw          $t8, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r24;
    // 0x801E160C: ori         $at, $at, 0x440
    ctx->r1 = ctx->r1 | 0X440;
    // 0x801E1610: addu        $t9, $a1, $at
    ctx->r25 = ADD32(ctx->r5, ctx->r1);
    // 0x801E1614: sw          $t9, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r25;
    // 0x801E1618: sw          $t0, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r8;
    // 0x801E161C: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x801E1620: lui         $t7, 0x801E
    ctx->r15 = S32(0X801E << 16);
    // 0x801E1624: addiu       $t6, $v0, 0x8
    ctx->r14 = ADD32(ctx->r2, 0X8);
    // 0x801E1628: sw          $t6, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r14;
    // 0x801E162C: addiu       $t7, $t7, 0x6268
    ctx->r15 = ADD32(ctx->r15, 0X6268);
    // 0x801E1630: sw          $t7, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r15;
    // 0x801E1634: sw          $t1, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r9;
    // 0x801E1638: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x801E163C: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x801E1640: addiu       $t8, $v0, 0x8
    ctx->r24 = ADD32(ctx->r2, 0X8);
    // 0x801E1644: sw          $t8, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r24;
    // 0x801E1648: ori         $at, $at, 0x500
    ctx->r1 = ctx->r1 | 0X500;
    // 0x801E164C: addu        $t9, $a1, $at
    ctx->r25 = ADD32(ctx->r5, ctx->r1);
    // 0x801E1650: sw          $t9, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r25;
    // 0x801E1654: sw          $a3, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r7;
    // 0x801E1658: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x801E165C: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x801E1660: addiu       $t6, $v0, 0x8
    ctx->r14 = ADD32(ctx->r2, 0X8);
    // 0x801E1664: sw          $t6, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r14;
    // 0x801E1668: ori         $at, $at, 0x540
    ctx->r1 = ctx->r1 | 0X540;
    // 0x801E166C: addu        $t7, $a1, $at
    ctx->r15 = ADD32(ctx->r5, ctx->r1);
    // 0x801E1670: sw          $t7, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r15;
    // 0x801E1674: sw          $t0, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r8;
    // 0x801E1678: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x801E167C: lui         $t9, 0x801E
    ctx->r25 = S32(0X801E << 16);
    // 0x801E1680: addiu       $t8, $v0, 0x8
    ctx->r24 = ADD32(ctx->r2, 0X8);
    // 0x801E1684: sw          $t8, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r24;
    // 0x801E1688: addiu       $t9, $t9, 0x6310
    ctx->r25 = ADD32(ctx->r25, 0X6310);
    // 0x801E168C: sw          $t9, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r25;
    // 0x801E1690: sw          $t1, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r9;
L_801E1694:
    // 0x801E1694: jr          $ra
    // 0x801E1698: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x801E1698: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_801E169C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x801E169C: sw          $a2, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r6;
    // 0x801E16A0: lw          $v1, 0x0($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X0);
    // 0x801E16A4: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x801E16A8: addiu       $t6, $v1, 0x8
    ctx->r14 = ADD32(ctx->r3, 0X8);
    // 0x801E16AC: sw          $t6, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r14;
    // 0x801E16B0: ori         $at, $at, 0x140
    ctx->r1 = ctx->r1 | 0X140;
    // 0x801E16B4: lui         $t7, 0x102
    ctx->r15 = S32(0X102 << 16);
    // 0x801E16B8: ori         $t7, $t7, 0x40
    ctx->r15 = ctx->r15 | 0X40;
    // 0x801E16BC: addu        $a2, $a1, $at
    ctx->r6 = ADD32(ctx->r5, ctx->r1);
    // 0x801E16C0: sw          $a2, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r6;
    // 0x801E16C4: sw          $t7, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r15;
    // 0x801E16C8: lw          $v1, 0x0($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X0);
    // 0x801E16CC: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x801E16D0: addiu       $t8, $v1, 0x8
    ctx->r24 = ADD32(ctx->r3, 0X8);
    // 0x801E16D4: sw          $t8, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r24;
    // 0x801E16D8: ori         $at, $at, 0x100
    ctx->r1 = ctx->r1 | 0X100;
    // 0x801E16DC: lui         $t9, 0xBC00
    ctx->r25 = S32(0XBC00 << 16);
    // 0x801E16E0: ori         $t9, $t9, 0x2406
    ctx->r25 = ctx->r25 | 0X2406;
    // 0x801E16E4: addu        $t2, $a1, $at
    ctx->r10 = ADD32(ctx->r5, ctx->r1);
    // 0x801E16E8: sw          $t2, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r10;
    // 0x801E16EC: sw          $t9, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r25;
    // 0x801E16F0: lw          $v1, 0x0($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X0);
    // 0x801E16F4: lui         $t4, 0xBC00
    ctx->r12 = S32(0XBC00 << 16);
    // 0x801E16F8: addiu       $t3, $v1, 0x8
    ctx->r11 = ADD32(ctx->r3, 0X8);
    // 0x801E16FC: sw          $t3, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r11;
    // 0x801E1700: ori         $t4, $t4, 0x2006
    ctx->r12 = ctx->r12 | 0X2006;
    // 0x801E1704: sw          $t4, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r12;
    // 0x801E1708: sw          $a2, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r6;
    // 0x801E170C: lw          $v1, 0x0($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X0);
    // 0x801E1710: lui         $t7, 0x801E
    ctx->r15 = S32(0X801E << 16);
    // 0x801E1714: addiu       $t5, $v1, 0x8
    ctx->r13 = ADD32(ctx->r3, 0X8);
    // 0x801E1718: sw          $t5, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r13;
    // 0x801E171C: addiu       $t7, $t7, 0x7E38
    ctx->r15 = ADD32(ctx->r15, 0X7E38);
    // 0x801E1720: lui         $t6, 0x600
    ctx->r14 = S32(0X600 << 16);
    // 0x801E1724: sw          $t6, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r14;
    // 0x801E1728: jr          $ra
    // 0x801E172C: sw          $t7, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r15;
    return;
    // 0x801E172C: sw          $t7, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r15;
;}
RECOMP_FUNC void func_801E1730(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x801E1730: lw          $t6, 0x30($a2)
    ctx->r14 = MEM_W(ctx->r6, 0X30);
    // 0x801E1734: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x801E1738: lhu         $t2, 0x3C($t6)
    ctx->r10 = MEM_HU(ctx->r14, 0X3C);
    // 0x801E173C: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x801E1740: addiu       $t8, $v0, 0x8
    ctx->r24 = ADD32(ctx->r2, 0X8);
    // 0x801E1744: lui         $a3, 0xBC00
    ctx->r7 = S32(0XBC00 << 16);
    // 0x801E1748: sw          $t8, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r24;
    // 0x801E174C: ori         $at, $at, 0x80
    ctx->r1 = ctx->r1 | 0X80;
    // 0x801E1750: ori         $a3, $a3, 0x2406
    ctx->r7 = ctx->r7 | 0X2406;
    // 0x801E1754: addu        $t9, $a1, $at
    ctx->r25 = ADD32(ctx->r5, ctx->r1);
    // 0x801E1758: sw          $t9, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r25;
    // 0x801E175C: sw          $a3, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r7;
    // 0x801E1760: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x801E1764: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x801E1768: addiu       $t6, $v0, 0x8
    ctx->r14 = ADD32(ctx->r2, 0X8);
    // 0x801E176C: lui         $t0, 0xBC00
    ctx->r8 = S32(0XBC00 << 16);
    // 0x801E1770: sw          $t6, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r14;
    // 0x801E1774: ori         $at, $at, 0xC0
    ctx->r1 = ctx->r1 | 0XC0;
    // 0x801E1778: ori         $t0, $t0, 0x2006
    ctx->r8 = ctx->r8 | 0X2006;
    // 0x801E177C: addu        $t4, $a1, $at
    ctx->r12 = ADD32(ctx->r5, ctx->r1);
    // 0x801E1780: sw          $t4, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r12;
    // 0x801E1784: sw          $t0, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r8;
    // 0x801E1788: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x801E178C: andi        $t7, $t2, 0x8000
    ctx->r15 = ctx->r10 & 0X8000;
    // 0x801E1790: or          $t2, $t7, $zero
    ctx->r10 = ctx->r15 | 0;
    // 0x801E1794: addiu       $t7, $v0, 0x8
    ctx->r15 = ADD32(ctx->r2, 0X8);
    // 0x801E1798: sw          $t7, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r15;
    // 0x801E179C: lui         $t8, 0x801E
    ctx->r24 = S32(0X801E << 16);
    // 0x801E17A0: lui         $t1, 0x600
    ctx->r9 = S32(0X600 << 16);
    // 0x801E17A4: addiu       $t8, $t8, 0x7AA0
    ctx->r24 = ADD32(ctx->r24, 0X7AA0);
    // 0x801E17A8: sw          $t8, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r24;
    // 0x801E17AC: sw          $t1, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r9;
    // 0x801E17B0: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x801E17B4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x801E17B8: sw          $v0, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r2;
    // 0x801E17BC: addiu       $t9, $v0, 0x8
    ctx->r25 = ADD32(ctx->r2, 0X8);
    // 0x801E17C0: sw          $t9, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r25;
    // 0x801E17C4: lw          $t6, 0x4($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X4);
    // 0x801E17C8: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x801E17CC: sw          $a3, 0x0($t6)
    MEM_W(0X0, ctx->r14) = ctx->r7;
    // 0x801E17D0: sw          $t4, 0x4($t6)
    MEM_W(0X4, ctx->r14) = ctx->r12;
    // 0x801E17D4: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x801E17D8: ori         $at, $at, 0x100
    ctx->r1 = ctx->r1 | 0X100;
    // 0x801E17DC: addiu       $t7, $v0, 0x8
    ctx->r15 = ADD32(ctx->r2, 0X8);
    // 0x801E17E0: sw          $t7, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r15;
    // 0x801E17E4: addu        $v1, $a1, $at
    ctx->r3 = ADD32(ctx->r5, ctx->r1);
    // 0x801E17E8: sw          $v1, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r3;
    // 0x801E17EC: sw          $t0, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r8;
    // 0x801E17F0: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x801E17F4: lui         $t9, 0x801E
    ctx->r25 = S32(0X801E << 16);
    // 0x801E17F8: addiu       $t8, $v0, 0x8
    ctx->r24 = ADD32(ctx->r2, 0X8);
    // 0x801E17FC: sw          $t8, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r24;
    // 0x801E1800: addiu       $t9, $t9, 0x7DA0
    ctx->r25 = ADD32(ctx->r25, 0X7DA0);
    // 0x801E1804: sw          $t9, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r25;
    // 0x801E1808: beq         $t2, $zero, L_801E196C
    if (ctx->r10 == 0) {
        // 0x801E180C: sw          $t1, 0x0($v0)
        MEM_W(0X0, ctx->r2) = ctx->r9;
            goto L_801E196C;
    }
    // 0x801E180C: sw          $t1, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r9;
    // 0x801E1810: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x801E1814: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x801E1818: addiu       $t6, $v0, 0x8
    ctx->r14 = ADD32(ctx->r2, 0X8);
    // 0x801E181C: sw          $t6, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r14;
    // 0x801E1820: sw          $v1, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r3;
    // 0x801E1824: sw          $a3, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r7;
    // 0x801E1828: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x801E182C: ori         $at, $at, 0x280
    ctx->r1 = ctx->r1 | 0X280;
    // 0x801E1830: addiu       $t7, $v0, 0x8
    ctx->r15 = ADD32(ctx->r2, 0X8);
    // 0x801E1834: sw          $t7, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r15;
    // 0x801E1838: addu        $t8, $a1, $at
    ctx->r24 = ADD32(ctx->r5, ctx->r1);
    // 0x801E183C: sw          $t8, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r24;
    // 0x801E1840: sw          $t0, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r8;
    // 0x801E1844: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x801E1848: lui         $t6, 0x801E
    ctx->r14 = S32(0X801E << 16);
    // 0x801E184C: addiu       $t9, $v0, 0x8
    ctx->r25 = ADD32(ctx->r2, 0X8);
    // 0x801E1850: sw          $t9, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r25;
    // 0x801E1854: addiu       $t6, $t6, 0x7B20
    ctx->r14 = ADD32(ctx->r14, 0X7B20);
    // 0x801E1858: sw          $t6, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r14;
    // 0x801E185C: sw          $t1, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r9;
    // 0x801E1860: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x801E1864: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x801E1868: addiu       $t7, $v0, 0x8
    ctx->r15 = ADD32(ctx->r2, 0X8);
    // 0x801E186C: sw          $t7, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r15;
    // 0x801E1870: sw          $v1, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r3;
    // 0x801E1874: sw          $a3, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r7;
    // 0x801E1878: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x801E187C: ori         $at, $at, 0x180
    ctx->r1 = ctx->r1 | 0X180;
    // 0x801E1880: addiu       $t8, $v0, 0x8
    ctx->r24 = ADD32(ctx->r2, 0X8);
    // 0x801E1884: sw          $t8, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r24;
    // 0x801E1888: addu        $t9, $a1, $at
    ctx->r25 = ADD32(ctx->r5, ctx->r1);
    // 0x801E188C: sw          $t9, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r25;
    // 0x801E1890: sw          $t0, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r8;
    // 0x801E1894: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x801E1898: lui         $t7, 0x801E
    ctx->r15 = S32(0X801E << 16);
    // 0x801E189C: addiu       $t6, $v0, 0x8
    ctx->r14 = ADD32(ctx->r2, 0X8);
    // 0x801E18A0: sw          $t6, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r14;
    // 0x801E18A4: addiu       $t7, $t7, 0x7BC8
    ctx->r15 = ADD32(ctx->r15, 0X7BC8);
    // 0x801E18A8: sw          $t7, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r15;
    // 0x801E18AC: sw          $t1, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r9;
    // 0x801E18B0: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x801E18B4: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x801E18B8: addiu       $t8, $v0, 0x8
    ctx->r24 = ADD32(ctx->r2, 0X8);
    // 0x801E18BC: sw          $t8, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r24;
    // 0x801E18C0: ori         $at, $at, 0x500
    ctx->r1 = ctx->r1 | 0X500;
    // 0x801E18C4: addu        $t9, $a1, $at
    ctx->r25 = ADD32(ctx->r5, ctx->r1);
    // 0x801E18C8: sw          $t9, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r25;
    // 0x801E18CC: sw          $a3, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r7;
    // 0x801E18D0: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x801E18D4: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x801E18D8: addiu       $t6, $v0, 0x8
    ctx->r14 = ADD32(ctx->r2, 0X8);
    // 0x801E18DC: sw          $t6, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r14;
    // 0x801E18E0: ori         $at, $at, 0x540
    ctx->r1 = ctx->r1 | 0X540;
    // 0x801E18E4: addu        $t7, $a1, $at
    ctx->r15 = ADD32(ctx->r5, ctx->r1);
    // 0x801E18E8: sw          $t7, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r15;
    // 0x801E18EC: sw          $t0, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r8;
    // 0x801E18F0: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x801E18F4: lui         $t9, 0x801E
    ctx->r25 = S32(0X801E << 16);
    // 0x801E18F8: addiu       $t8, $v0, 0x8
    ctx->r24 = ADD32(ctx->r2, 0X8);
    // 0x801E18FC: sw          $t8, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r24;
    // 0x801E1900: addiu       $t9, $t9, 0x7C70
    ctx->r25 = ADD32(ctx->r25, 0X7C70);
    // 0x801E1904: sw          $t9, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r25;
    // 0x801E1908: sw          $t1, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r9;
    // 0x801E190C: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x801E1910: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x801E1914: addiu       $t6, $v0, 0x8
    ctx->r14 = ADD32(ctx->r2, 0X8);
    // 0x801E1918: sw          $t6, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r14;
    // 0x801E191C: ori         $at, $at, 0x400
    ctx->r1 = ctx->r1 | 0X400;
    // 0x801E1920: addu        $t7, $a1, $at
    ctx->r15 = ADD32(ctx->r5, ctx->r1);
    // 0x801E1924: sw          $t7, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r15;
    // 0x801E1928: sw          $a3, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r7;
    // 0x801E192C: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x801E1930: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x801E1934: addiu       $t8, $v0, 0x8
    ctx->r24 = ADD32(ctx->r2, 0X8);
    // 0x801E1938: sw          $t8, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r24;
    // 0x801E193C: ori         $at, $at, 0x440
    ctx->r1 = ctx->r1 | 0X440;
    // 0x801E1940: addu        $t9, $a1, $at
    ctx->r25 = ADD32(ctx->r5, ctx->r1);
    // 0x801E1944: sw          $t9, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r25;
    // 0x801E1948: sw          $t0, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r8;
    // 0x801E194C: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x801E1950: lui         $t7, 0x801E
    ctx->r15 = S32(0X801E << 16);
    // 0x801E1954: addiu       $t6, $v0, 0x8
    ctx->r14 = ADD32(ctx->r2, 0X8);
    // 0x801E1958: sw          $t6, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r14;
    // 0x801E195C: addiu       $t7, $t7, 0x7D08
    ctx->r15 = ADD32(ctx->r15, 0X7D08);
    // 0x801E1960: sw          $t7, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r15;
    // 0x801E1964: b           L_801E1AC4
    // 0x801E1968: sw          $t1, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r9;
        goto L_801E1AC4;
    // 0x801E1968: sw          $t1, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r9;
L_801E196C:
    // 0x801E196C: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x801E1970: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x801E1974: addiu       $t8, $v0, 0x8
    ctx->r24 = ADD32(ctx->r2, 0X8);
    // 0x801E1978: sw          $t8, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r24;
    // 0x801E197C: sw          $v1, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r3;
    // 0x801E1980: sw          $a3, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r7;
    // 0x801E1984: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x801E1988: ori         $at, $at, 0x180
    ctx->r1 = ctx->r1 | 0X180;
    // 0x801E198C: addiu       $t9, $v0, 0x8
    ctx->r25 = ADD32(ctx->r2, 0X8);
    // 0x801E1990: sw          $t9, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r25;
    // 0x801E1994: addu        $t6, $a1, $at
    ctx->r14 = ADD32(ctx->r5, ctx->r1);
    // 0x801E1998: sw          $t6, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r14;
    // 0x801E199C: sw          $t0, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r8;
    // 0x801E19A0: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x801E19A4: lui         $t8, 0x801E
    ctx->r24 = S32(0X801E << 16);
    // 0x801E19A8: addiu       $t7, $v0, 0x8
    ctx->r15 = ADD32(ctx->r2, 0X8);
    // 0x801E19AC: sw          $t7, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r15;
    // 0x801E19B0: addiu       $t8, $t8, 0x7B20
    ctx->r24 = ADD32(ctx->r24, 0X7B20);
    // 0x801E19B4: sw          $t8, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r24;
    // 0x801E19B8: sw          $t1, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r9;
    // 0x801E19BC: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x801E19C0: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x801E19C4: addiu       $t9, $v0, 0x8
    ctx->r25 = ADD32(ctx->r2, 0X8);
    // 0x801E19C8: sw          $t9, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r25;
    // 0x801E19CC: sw          $v1, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r3;
    // 0x801E19D0: sw          $a3, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r7;
    // 0x801E19D4: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x801E19D8: ori         $at, $at, 0x280
    ctx->r1 = ctx->r1 | 0X280;
    // 0x801E19DC: addiu       $t6, $v0, 0x8
    ctx->r14 = ADD32(ctx->r2, 0X8);
    // 0x801E19E0: sw          $t6, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r14;
    // 0x801E19E4: addu        $t7, $a1, $at
    ctx->r15 = ADD32(ctx->r5, ctx->r1);
    // 0x801E19E8: sw          $t7, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r15;
    // 0x801E19EC: sw          $t0, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r8;
    // 0x801E19F0: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x801E19F4: lui         $t9, 0x801E
    ctx->r25 = S32(0X801E << 16);
    // 0x801E19F8: addiu       $t8, $v0, 0x8
    ctx->r24 = ADD32(ctx->r2, 0X8);
    // 0x801E19FC: sw          $t8, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r24;
    // 0x801E1A00: addiu       $t9, $t9, 0x7BC8
    ctx->r25 = ADD32(ctx->r25, 0X7BC8);
    // 0x801E1A04: sw          $t9, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r25;
    // 0x801E1A08: sw          $t1, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r9;
    // 0x801E1A0C: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x801E1A10: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x801E1A14: addiu       $t6, $v0, 0x8
    ctx->r14 = ADD32(ctx->r2, 0X8);
    // 0x801E1A18: sw          $t6, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r14;
    // 0x801E1A1C: ori         $at, $at, 0x400
    ctx->r1 = ctx->r1 | 0X400;
    // 0x801E1A20: addu        $t7, $a1, $at
    ctx->r15 = ADD32(ctx->r5, ctx->r1);
    // 0x801E1A24: sw          $t7, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r15;
    // 0x801E1A28: sw          $a3, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r7;
    // 0x801E1A2C: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x801E1A30: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x801E1A34: addiu       $t8, $v0, 0x8
    ctx->r24 = ADD32(ctx->r2, 0X8);
    // 0x801E1A38: sw          $t8, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r24;
    // 0x801E1A3C: ori         $at, $at, 0x440
    ctx->r1 = ctx->r1 | 0X440;
    // 0x801E1A40: addu        $t9, $a1, $at
    ctx->r25 = ADD32(ctx->r5, ctx->r1);
    // 0x801E1A44: sw          $t9, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r25;
    // 0x801E1A48: sw          $t0, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r8;
    // 0x801E1A4C: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x801E1A50: lui         $t7, 0x801E
    ctx->r15 = S32(0X801E << 16);
    // 0x801E1A54: addiu       $t6, $v0, 0x8
    ctx->r14 = ADD32(ctx->r2, 0X8);
    // 0x801E1A58: sw          $t6, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r14;
    // 0x801E1A5C: addiu       $t7, $t7, 0x7C70
    ctx->r15 = ADD32(ctx->r15, 0X7C70);
    // 0x801E1A60: sw          $t7, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r15;
    // 0x801E1A64: sw          $t1, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r9;
    // 0x801E1A68: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x801E1A6C: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x801E1A70: addiu       $t8, $v0, 0x8
    ctx->r24 = ADD32(ctx->r2, 0X8);
    // 0x801E1A74: sw          $t8, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r24;
    // 0x801E1A78: ori         $at, $at, 0x500
    ctx->r1 = ctx->r1 | 0X500;
    // 0x801E1A7C: addu        $t9, $a1, $at
    ctx->r25 = ADD32(ctx->r5, ctx->r1);
    // 0x801E1A80: sw          $t9, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r25;
    // 0x801E1A84: sw          $a3, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r7;
    // 0x801E1A88: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x801E1A8C: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x801E1A90: addiu       $t6, $v0, 0x8
    ctx->r14 = ADD32(ctx->r2, 0X8);
    // 0x801E1A94: sw          $t6, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r14;
    // 0x801E1A98: ori         $at, $at, 0x540
    ctx->r1 = ctx->r1 | 0X540;
    // 0x801E1A9C: addu        $t7, $a1, $at
    ctx->r15 = ADD32(ctx->r5, ctx->r1);
    // 0x801E1AA0: sw          $t7, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r15;
    // 0x801E1AA4: sw          $t0, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r8;
    // 0x801E1AA8: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x801E1AAC: lui         $t9, 0x801E
    ctx->r25 = S32(0X801E << 16);
    // 0x801E1AB0: addiu       $t8, $v0, 0x8
    ctx->r24 = ADD32(ctx->r2, 0X8);
    // 0x801E1AB4: sw          $t8, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r24;
    // 0x801E1AB8: addiu       $t9, $t9, 0x7D08
    ctx->r25 = ADD32(ctx->r25, 0X7D08);
    // 0x801E1ABC: sw          $t9, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r25;
    // 0x801E1AC0: sw          $t1, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r9;
L_801E1AC4:
    // 0x801E1AC4: jr          $ra
    // 0x801E1AC8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x801E1AC8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_801E1ACC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x801E1ACC: sw          $a2, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r6;
    // 0x801E1AD0: lw          $v1, 0x0($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X0);
    // 0x801E1AD4: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x801E1AD8: addiu       $t6, $v1, 0x8
    ctx->r14 = ADD32(ctx->r3, 0X8);
    // 0x801E1ADC: sw          $t6, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r14;
    // 0x801E1AE0: ori         $at, $at, 0x140
    ctx->r1 = ctx->r1 | 0X140;
    // 0x801E1AE4: lui         $t7, 0x102
    ctx->r15 = S32(0X102 << 16);
    // 0x801E1AE8: ori         $t7, $t7, 0x40
    ctx->r15 = ctx->r15 | 0X40;
    // 0x801E1AEC: addu        $a2, $a1, $at
    ctx->r6 = ADD32(ctx->r5, ctx->r1);
    // 0x801E1AF0: sw          $a2, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r6;
    // 0x801E1AF4: sw          $t7, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r15;
    // 0x801E1AF8: lw          $v1, 0x0($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X0);
    // 0x801E1AFC: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x801E1B00: addiu       $t8, $v1, 0x8
    ctx->r24 = ADD32(ctx->r3, 0X8);
    // 0x801E1B04: sw          $t8, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r24;
    // 0x801E1B08: ori         $at, $at, 0x100
    ctx->r1 = ctx->r1 | 0X100;
    // 0x801E1B0C: lui         $t9, 0xBC00
    ctx->r25 = S32(0XBC00 << 16);
    // 0x801E1B10: ori         $t9, $t9, 0x2406
    ctx->r25 = ctx->r25 | 0X2406;
    // 0x801E1B14: addu        $t2, $a1, $at
    ctx->r10 = ADD32(ctx->r5, ctx->r1);
    // 0x801E1B18: sw          $t2, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r10;
    // 0x801E1B1C: sw          $t9, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r25;
    // 0x801E1B20: lw          $v1, 0x0($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X0);
    // 0x801E1B24: lui         $t4, 0xBC00
    ctx->r12 = S32(0XBC00 << 16);
    // 0x801E1B28: addiu       $t3, $v1, 0x8
    ctx->r11 = ADD32(ctx->r3, 0X8);
    // 0x801E1B2C: sw          $t3, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r11;
    // 0x801E1B30: ori         $t4, $t4, 0x2006
    ctx->r12 = ctx->r12 | 0X2006;
    // 0x801E1B34: sw          $t4, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r12;
    // 0x801E1B38: sw          $a2, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r6;
    // 0x801E1B3C: lw          $v1, 0x0($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X0);
    // 0x801E1B40: lui         $t7, 0x801F
    ctx->r15 = S32(0X801F << 16);
    // 0x801E1B44: addiu       $t5, $v1, 0x8
    ctx->r13 = ADD32(ctx->r3, 0X8);
    // 0x801E1B48: sw          $t5, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r13;
    // 0x801E1B4C: addiu       $t7, $t7, -0x7098
    ctx->r15 = ADD32(ctx->r15, -0X7098);
    // 0x801E1B50: lui         $t6, 0x600
    ctx->r14 = S32(0X600 << 16);
    // 0x801E1B54: sw          $t6, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r14;
    // 0x801E1B58: jr          $ra
    // 0x801E1B5C: sw          $t7, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r15;
    return;
    // 0x801E1B5C: sw          $t7, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r15;
;}
RECOMP_FUNC void func_801E1B60(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x801E1B60: lw          $t6, 0x30($a2)
    ctx->r14 = MEM_W(ctx->r6, 0X30);
    // 0x801E1B64: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x801E1B68: lhu         $t1, 0x3C($t6)
    ctx->r9 = MEM_HU(ctx->r14, 0X3C);
    // 0x801E1B6C: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x801E1B70: addiu       $t8, $v0, 0x8
    ctx->r24 = ADD32(ctx->r2, 0X8);
    // 0x801E1B74: lui         $v1, 0xBC00
    ctx->r3 = S32(0XBC00 << 16);
    // 0x801E1B78: sw          $t8, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r24;
    // 0x801E1B7C: ori         $at, $at, 0x80
    ctx->r1 = ctx->r1 | 0X80;
    // 0x801E1B80: ori         $v1, $v1, 0x2406
    ctx->r3 = ctx->r3 | 0X2406;
    // 0x801E1B84: addu        $t9, $a1, $at
    ctx->r25 = ADD32(ctx->r5, ctx->r1);
    // 0x801E1B88: sw          $t9, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r25;
    // 0x801E1B8C: sw          $v1, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r3;
    // 0x801E1B90: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x801E1B94: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x801E1B98: addiu       $t6, $v0, 0x8
    ctx->r14 = ADD32(ctx->r2, 0X8);
    // 0x801E1B9C: lui         $a3, 0xBC00
    ctx->r7 = S32(0XBC00 << 16);
    // 0x801E1BA0: sw          $t6, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r14;
    // 0x801E1BA4: ori         $at, $at, 0xC0
    ctx->r1 = ctx->r1 | 0XC0;
    // 0x801E1BA8: ori         $a3, $a3, 0x2006
    ctx->r7 = ctx->r7 | 0X2006;
    // 0x801E1BAC: addu        $t4, $a1, $at
    ctx->r12 = ADD32(ctx->r5, ctx->r1);
    // 0x801E1BB0: sw          $t4, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r12;
    // 0x801E1BB4: sw          $a3, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r7;
    // 0x801E1BB8: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x801E1BBC: andi        $t7, $t1, 0x8000
    ctx->r15 = ctx->r9 & 0X8000;
    // 0x801E1BC0: or          $t1, $t7, $zero
    ctx->r9 = ctx->r15 | 0;
    // 0x801E1BC4: addiu       $t7, $v0, 0x8
    ctx->r15 = ADD32(ctx->r2, 0X8);
    // 0x801E1BC8: sw          $t7, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r15;
    // 0x801E1BCC: lui         $t8, 0x801F
    ctx->r24 = S32(0X801F << 16);
    // 0x801E1BD0: lui         $t0, 0x600
    ctx->r8 = S32(0X600 << 16);
    // 0x801E1BD4: addiu       $t8, $t8, -0x72B8
    ctx->r24 = ADD32(ctx->r24, -0X72B8);
    // 0x801E1BD8: sw          $t8, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r24;
    // 0x801E1BDC: sw          $t0, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r8;
    // 0x801E1BE0: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x801E1BE4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x801E1BE8: sw          $v0, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r2;
    // 0x801E1BEC: addiu       $t9, $v0, 0x8
    ctx->r25 = ADD32(ctx->r2, 0X8);
    // 0x801E1BF0: sw          $t9, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r25;
    // 0x801E1BF4: lw          $t6, 0x4($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X4);
    // 0x801E1BF8: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x801E1BFC: sw          $v1, 0x0($t6)
    MEM_W(0X0, ctx->r14) = ctx->r3;
    // 0x801E1C00: sw          $t4, 0x4($t6)
    MEM_W(0X4, ctx->r14) = ctx->r12;
    // 0x801E1C04: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x801E1C08: ori         $at, $at, 0x100
    ctx->r1 = ctx->r1 | 0X100;
    // 0x801E1C0C: addiu       $t7, $v0, 0x8
    ctx->r15 = ADD32(ctx->r2, 0X8);
    // 0x801E1C10: sw          $t7, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r15;
    // 0x801E1C14: addu        $t8, $a1, $at
    ctx->r24 = ADD32(ctx->r5, ctx->r1);
    // 0x801E1C18: sw          $t8, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r24;
    // 0x801E1C1C: sw          $a3, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r7;
    // 0x801E1C20: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x801E1C24: lui         $t6, 0x801F
    ctx->r14 = S32(0X801F << 16);
    // 0x801E1C28: addiu       $t9, $v0, 0x8
    ctx->r25 = ADD32(ctx->r2, 0X8);
    // 0x801E1C2C: sw          $t9, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r25;
    // 0x801E1C30: addiu       $t6, $t6, -0x7148
    ctx->r14 = ADD32(ctx->r14, -0X7148);
    // 0x801E1C34: sw          $t6, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r14;
    // 0x801E1C38: beq         $t1, $zero, L_801E1CFC
    if (ctx->r9 == 0) {
        // 0x801E1C3C: sw          $t0, 0x0($v0)
        MEM_W(0X0, ctx->r2) = ctx->r8;
            goto L_801E1CFC;
    }
    // 0x801E1C3C: sw          $t0, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r8;
    // 0x801E1C40: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x801E1C44: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x801E1C48: addiu       $t7, $v0, 0x8
    ctx->r15 = ADD32(ctx->r2, 0X8);
    // 0x801E1C4C: sw          $t7, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r15;
    // 0x801E1C50: ori         $at, $at, 0x500
    ctx->r1 = ctx->r1 | 0X500;
    // 0x801E1C54: addu        $t8, $a1, $at
    ctx->r24 = ADD32(ctx->r5, ctx->r1);
    // 0x801E1C58: sw          $t8, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r24;
    // 0x801E1C5C: sw          $v1, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r3;
    // 0x801E1C60: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x801E1C64: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x801E1C68: addiu       $t9, $v0, 0x8
    ctx->r25 = ADD32(ctx->r2, 0X8);
    // 0x801E1C6C: sw          $t9, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r25;
    // 0x801E1C70: ori         $at, $at, 0x540
    ctx->r1 = ctx->r1 | 0X540;
    // 0x801E1C74: addu        $t6, $a1, $at
    ctx->r14 = ADD32(ctx->r5, ctx->r1);
    // 0x801E1C78: sw          $t6, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r14;
    // 0x801E1C7C: sw          $a3, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r7;
    // 0x801E1C80: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x801E1C84: lui         $t8, 0x801F
    ctx->r24 = S32(0X801F << 16);
    // 0x801E1C88: addiu       $t7, $v0, 0x8
    ctx->r15 = ADD32(ctx->r2, 0X8);
    // 0x801E1C8C: sw          $t7, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r15;
    // 0x801E1C90: addiu       $t8, $t8, -0x7238
    ctx->r24 = ADD32(ctx->r24, -0X7238);
    // 0x801E1C94: sw          $t8, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r24;
    // 0x801E1C98: sw          $t0, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r8;
    // 0x801E1C9C: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x801E1CA0: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x801E1CA4: addiu       $t9, $v0, 0x8
    ctx->r25 = ADD32(ctx->r2, 0X8);
    // 0x801E1CA8: sw          $t9, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r25;
    // 0x801E1CAC: ori         $at, $at, 0x400
    ctx->r1 = ctx->r1 | 0X400;
    // 0x801E1CB0: addu        $t6, $a1, $at
    ctx->r14 = ADD32(ctx->r5, ctx->r1);
    // 0x801E1CB4: sw          $t6, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r14;
    // 0x801E1CB8: sw          $v1, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r3;
    // 0x801E1CBC: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x801E1CC0: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x801E1CC4: addiu       $t7, $v0, 0x8
    ctx->r15 = ADD32(ctx->r2, 0X8);
    // 0x801E1CC8: sw          $t7, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r15;
    // 0x801E1CCC: ori         $at, $at, 0x440
    ctx->r1 = ctx->r1 | 0X440;
    // 0x801E1CD0: addu        $t8, $a1, $at
    ctx->r24 = ADD32(ctx->r5, ctx->r1);
    // 0x801E1CD4: sw          $t8, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r24;
    // 0x801E1CD8: sw          $a3, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r7;
    // 0x801E1CDC: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x801E1CE0: lui         $t6, 0x801F
    ctx->r14 = S32(0X801F << 16);
    // 0x801E1CE4: addiu       $t9, $v0, 0x8
    ctx->r25 = ADD32(ctx->r2, 0X8);
    // 0x801E1CE8: sw          $t9, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r25;
    // 0x801E1CEC: addiu       $t6, $t6, -0x71C0
    ctx->r14 = ADD32(ctx->r14, -0X71C0);
    // 0x801E1CF0: sw          $t6, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r14;
    // 0x801E1CF4: b           L_801E1DB4
    // 0x801E1CF8: sw          $t0, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r8;
        goto L_801E1DB4;
    // 0x801E1CF8: sw          $t0, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r8;
L_801E1CFC:
    // 0x801E1CFC: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x801E1D00: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x801E1D04: addiu       $t7, $v0, 0x8
    ctx->r15 = ADD32(ctx->r2, 0X8);
    // 0x801E1D08: sw          $t7, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r15;
    // 0x801E1D0C: ori         $at, $at, 0x400
    ctx->r1 = ctx->r1 | 0X400;
    // 0x801E1D10: addu        $t8, $a1, $at
    ctx->r24 = ADD32(ctx->r5, ctx->r1);
    // 0x801E1D14: sw          $t8, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r24;
    // 0x801E1D18: sw          $v1, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r3;
    // 0x801E1D1C: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x801E1D20: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x801E1D24: addiu       $t9, $v0, 0x8
    ctx->r25 = ADD32(ctx->r2, 0X8);
    // 0x801E1D28: sw          $t9, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r25;
    // 0x801E1D2C: ori         $at, $at, 0x440
    ctx->r1 = ctx->r1 | 0X440;
    // 0x801E1D30: addu        $t6, $a1, $at
    ctx->r14 = ADD32(ctx->r5, ctx->r1);
    // 0x801E1D34: sw          $t6, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r14;
    // 0x801E1D38: sw          $a3, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r7;
    // 0x801E1D3C: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x801E1D40: lui         $t8, 0x801F
    ctx->r24 = S32(0X801F << 16);
    // 0x801E1D44: addiu       $t7, $v0, 0x8
    ctx->r15 = ADD32(ctx->r2, 0X8);
    // 0x801E1D48: sw          $t7, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r15;
    // 0x801E1D4C: addiu       $t8, $t8, -0x7238
    ctx->r24 = ADD32(ctx->r24, -0X7238);
    // 0x801E1D50: sw          $t8, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r24;
    // 0x801E1D54: sw          $t0, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r8;
    // 0x801E1D58: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x801E1D5C: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x801E1D60: addiu       $t9, $v0, 0x8
    ctx->r25 = ADD32(ctx->r2, 0X8);
    // 0x801E1D64: sw          $t9, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r25;
    // 0x801E1D68: ori         $at, $at, 0x500
    ctx->r1 = ctx->r1 | 0X500;
    // 0x801E1D6C: addu        $t6, $a1, $at
    ctx->r14 = ADD32(ctx->r5, ctx->r1);
    // 0x801E1D70: sw          $t6, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r14;
    // 0x801E1D74: sw          $v1, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r3;
    // 0x801E1D78: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x801E1D7C: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x801E1D80: addiu       $t7, $v0, 0x8
    ctx->r15 = ADD32(ctx->r2, 0X8);
    // 0x801E1D84: sw          $t7, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r15;
    // 0x801E1D88: ori         $at, $at, 0x540
    ctx->r1 = ctx->r1 | 0X540;
    // 0x801E1D8C: addu        $t8, $a1, $at
    ctx->r24 = ADD32(ctx->r5, ctx->r1);
    // 0x801E1D90: sw          $t8, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r24;
    // 0x801E1D94: sw          $a3, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r7;
    // 0x801E1D98: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x801E1D9C: lui         $t6, 0x801F
    ctx->r14 = S32(0X801F << 16);
    // 0x801E1DA0: addiu       $t9, $v0, 0x8
    ctx->r25 = ADD32(ctx->r2, 0X8);
    // 0x801E1DA4: sw          $t9, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r25;
    // 0x801E1DA8: addiu       $t6, $t6, -0x71C0
    ctx->r14 = ADD32(ctx->r14, -0X71C0);
    // 0x801E1DAC: sw          $t6, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r14;
    // 0x801E1DB0: sw          $t0, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r8;
L_801E1DB4:
    // 0x801E1DB4: jr          $ra
    // 0x801E1DB8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x801E1DB8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_801E1DBC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x801E1DBC: sw          $a2, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r6;
    // 0x801E1DC0: lw          $v1, 0x0($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X0);
    // 0x801E1DC4: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x801E1DC8: addiu       $t6, $v1, 0x8
    ctx->r14 = ADD32(ctx->r3, 0X8);
    // 0x801E1DCC: sw          $t6, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r14;
    // 0x801E1DD0: ori         $at, $at, 0x140
    ctx->r1 = ctx->r1 | 0X140;
    // 0x801E1DD4: lui         $t7, 0x102
    ctx->r15 = S32(0X102 << 16);
    // 0x801E1DD8: ori         $t7, $t7, 0x40
    ctx->r15 = ctx->r15 | 0X40;
    // 0x801E1DDC: addu        $a2, $a1, $at
    ctx->r6 = ADD32(ctx->r5, ctx->r1);
    // 0x801E1DE0: sw          $a2, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r6;
    // 0x801E1DE4: sw          $t7, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r15;
    // 0x801E1DE8: lw          $v1, 0x0($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X0);
    // 0x801E1DEC: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x801E1DF0: addiu       $t8, $v1, 0x8
    ctx->r24 = ADD32(ctx->r3, 0X8);
    // 0x801E1DF4: sw          $t8, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r24;
    // 0x801E1DF8: ori         $at, $at, 0x100
    ctx->r1 = ctx->r1 | 0X100;
    // 0x801E1DFC: lui         $t9, 0xBC00
    ctx->r25 = S32(0XBC00 << 16);
    // 0x801E1E00: ori         $t9, $t9, 0x2406
    ctx->r25 = ctx->r25 | 0X2406;
    // 0x801E1E04: addu        $t2, $a1, $at
    ctx->r10 = ADD32(ctx->r5, ctx->r1);
    // 0x801E1E08: sw          $t2, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r10;
    // 0x801E1E0C: sw          $t9, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r25;
    // 0x801E1E10: lw          $v1, 0x0($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X0);
    // 0x801E1E14: lui         $t4, 0xBC00
    ctx->r12 = S32(0XBC00 << 16);
    // 0x801E1E18: addiu       $t3, $v1, 0x8
    ctx->r11 = ADD32(ctx->r3, 0X8);
    // 0x801E1E1C: sw          $t3, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r11;
    // 0x801E1E20: ori         $t4, $t4, 0x2006
    ctx->r12 = ctx->r12 | 0X2006;
    // 0x801E1E24: sw          $t4, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r12;
    // 0x801E1E28: sw          $a2, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r6;
    // 0x801E1E2C: lw          $v1, 0x0($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X0);
    // 0x801E1E30: lui         $t7, 0x801F
    ctx->r15 = S32(0X801F << 16);
    // 0x801E1E34: addiu       $t5, $v1, 0x8
    ctx->r13 = ADD32(ctx->r3, 0X8);
    // 0x801E1E38: sw          $t5, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r13;
    // 0x801E1E3C: addiu       $t7, $t7, -0x6668
    ctx->r15 = ADD32(ctx->r15, -0X6668);
    // 0x801E1E40: lui         $t6, 0x600
    ctx->r14 = S32(0X600 << 16);
    // 0x801E1E44: sw          $t6, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r14;
    // 0x801E1E48: jr          $ra
    // 0x801E1E4C: sw          $t7, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r15;
    return;
    // 0x801E1E4C: sw          $t7, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r15;
;}
RECOMP_FUNC void func_801E1E50(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x801E1E50: sw          $a2, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r6;
    // 0x801E1E54: lw          $v1, 0x0($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X0);
    // 0x801E1E58: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x801E1E5C: addiu       $t6, $v1, 0x8
    ctx->r14 = ADD32(ctx->r3, 0X8);
    // 0x801E1E60: lui         $t2, 0xBC00
    ctx->r10 = S32(0XBC00 << 16);
    // 0x801E1E64: sw          $t6, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r14;
    // 0x801E1E68: ori         $at, $at, 0x80
    ctx->r1 = ctx->r1 | 0X80;
    // 0x801E1E6C: ori         $t2, $t2, 0x2406
    ctx->r10 = ctx->r10 | 0X2406;
    // 0x801E1E70: addu        $t7, $a1, $at
    ctx->r15 = ADD32(ctx->r5, ctx->r1);
    // 0x801E1E74: sw          $t7, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r15;
    // 0x801E1E78: sw          $t2, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r10;
    // 0x801E1E7C: lw          $v1, 0x0($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X0);
    // 0x801E1E80: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x801E1E84: addiu       $t8, $v1, 0x8
    ctx->r24 = ADD32(ctx->r3, 0X8);
    // 0x801E1E88: lui         $t3, 0xBC00
    ctx->r11 = S32(0XBC00 << 16);
    // 0x801E1E8C: sw          $t8, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r24;
    // 0x801E1E90: ori         $at, $at, 0xC0
    ctx->r1 = ctx->r1 | 0XC0;
    // 0x801E1E94: ori         $t3, $t3, 0x2006
    ctx->r11 = ctx->r11 | 0X2006;
    // 0x801E1E98: addu        $a3, $a1, $at
    ctx->r7 = ADD32(ctx->r5, ctx->r1);
    // 0x801E1E9C: sw          $a3, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r7;
    // 0x801E1EA0: sw          $t3, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r11;
    // 0x801E1EA4: lw          $v1, 0x0($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X0);
    // 0x801E1EA8: lui         $t5, 0x801F
    ctx->r13 = S32(0X801F << 16);
    // 0x801E1EAC: addiu       $t9, $v1, 0x8
    ctx->r25 = ADD32(ctx->r3, 0X8);
    // 0x801E1EB0: sw          $t9, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r25;
    // 0x801E1EB4: lui         $t4, 0x600
    ctx->r12 = S32(0X600 << 16);
    // 0x801E1EB8: addiu       $t5, $t5, -0x6758
    ctx->r13 = ADD32(ctx->r13, -0X6758);
    // 0x801E1EBC: sw          $t5, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r13;
    // 0x801E1EC0: sw          $t4, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r12;
    // 0x801E1EC4: lw          $v1, 0x0($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X0);
    // 0x801E1EC8: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x801E1ECC: addiu       $t6, $v1, 0x8
    ctx->r14 = ADD32(ctx->r3, 0X8);
    // 0x801E1ED0: sw          $t6, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r14;
    // 0x801E1ED4: sw          $a3, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r7;
    // 0x801E1ED8: sw          $t2, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r10;
    // 0x801E1EDC: lw          $v1, 0x0($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X0);
    // 0x801E1EE0: ori         $at, $at, 0x100
    ctx->r1 = ctx->r1 | 0X100;
    // 0x801E1EE4: addiu       $t7, $v1, 0x8
    ctx->r15 = ADD32(ctx->r3, 0X8);
    // 0x801E1EE8: sw          $t7, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r15;
    // 0x801E1EEC: addu        $t8, $a1, $at
    ctx->r24 = ADD32(ctx->r5, ctx->r1);
    // 0x801E1EF0: sw          $t8, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r24;
    // 0x801E1EF4: sw          $t3, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r11;
    // 0x801E1EF8: lw          $v1, 0x0($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X0);
    // 0x801E1EFC: lui         $t5, 0x801F
    ctx->r13 = S32(0X801F << 16);
    // 0x801E1F00: addiu       $t9, $v1, 0x8
    ctx->r25 = ADD32(ctx->r3, 0X8);
    // 0x801E1F04: sw          $t9, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r25;
    // 0x801E1F08: addiu       $t5, $t5, -0x66E0
    ctx->r13 = ADD32(ctx->r13, -0X66E0);
    // 0x801E1F0C: sw          $t5, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r13;
    // 0x801E1F10: jr          $ra
    // 0x801E1F14: sw          $t4, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r12;
    return;
    // 0x801E1F14: sw          $t4, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r12;
;}
RECOMP_FUNC void func_801E1F18(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x801E1F18: sw          $a2, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r6;
    // 0x801E1F1C: lw          $v1, 0x0($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X0);
    // 0x801E1F20: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x801E1F24: addiu       $t6, $v1, 0x8
    ctx->r14 = ADD32(ctx->r3, 0X8);
    // 0x801E1F28: sw          $t6, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r14;
    // 0x801E1F2C: ori         $at, $at, 0x140
    ctx->r1 = ctx->r1 | 0X140;
    // 0x801E1F30: lui         $t7, 0x102
    ctx->r15 = S32(0X102 << 16);
    // 0x801E1F34: ori         $t7, $t7, 0x40
    ctx->r15 = ctx->r15 | 0X40;
    // 0x801E1F38: addu        $a2, $a1, $at
    ctx->r6 = ADD32(ctx->r5, ctx->r1);
    // 0x801E1F3C: sw          $a2, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r6;
    // 0x801E1F40: sw          $t7, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r15;
    // 0x801E1F44: lw          $v1, 0x0($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X0);
    // 0x801E1F48: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x801E1F4C: addiu       $t8, $v1, 0x8
    ctx->r24 = ADD32(ctx->r3, 0X8);
    // 0x801E1F50: sw          $t8, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r24;
    // 0x801E1F54: ori         $at, $at, 0x100
    ctx->r1 = ctx->r1 | 0X100;
    // 0x801E1F58: lui         $t9, 0xBC00
    ctx->r25 = S32(0XBC00 << 16);
    // 0x801E1F5C: ori         $t9, $t9, 0x2406
    ctx->r25 = ctx->r25 | 0X2406;
    // 0x801E1F60: addu        $t2, $a1, $at
    ctx->r10 = ADD32(ctx->r5, ctx->r1);
    // 0x801E1F64: sw          $t2, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r10;
    // 0x801E1F68: sw          $t9, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r25;
    // 0x801E1F6C: lw          $v1, 0x0($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X0);
    // 0x801E1F70: lui         $t4, 0xBC00
    ctx->r12 = S32(0XBC00 << 16);
    // 0x801E1F74: addiu       $t3, $v1, 0x8
    ctx->r11 = ADD32(ctx->r3, 0X8);
    // 0x801E1F78: sw          $t3, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r11;
    // 0x801E1F7C: ori         $t4, $t4, 0x2006
    ctx->r12 = ctx->r12 | 0X2006;
    // 0x801E1F80: sw          $t4, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r12;
    // 0x801E1F84: sw          $a2, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r6;
    // 0x801E1F88: lw          $v1, 0x0($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X0);
    // 0x801E1F8C: lui         $t7, 0x801F
    ctx->r15 = S32(0X801F << 16);
    // 0x801E1F90: addiu       $t5, $v1, 0x8
    ctx->r13 = ADD32(ctx->r3, 0X8);
    // 0x801E1F94: sw          $t5, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r13;
    // 0x801E1F98: addiu       $t7, $t7, -0x5CF8
    ctx->r15 = ADD32(ctx->r15, -0X5CF8);
    // 0x801E1F9C: lui         $t6, 0x600
    ctx->r14 = S32(0X600 << 16);
    // 0x801E1FA0: sw          $t6, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r14;
    // 0x801E1FA4: jr          $ra
    // 0x801E1FA8: sw          $t7, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r15;
    return;
    // 0x801E1FA8: sw          $t7, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r15;
;}
RECOMP_FUNC void func_801E1FAC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x801E1FAC: sw          $a2, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r6;
    // 0x801E1FB0: lw          $v1, 0x0($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X0);
    // 0x801E1FB4: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x801E1FB8: addiu       $t6, $v1, 0x8
    ctx->r14 = ADD32(ctx->r3, 0X8);
    // 0x801E1FBC: sw          $t6, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r14;
    // 0x801E1FC0: ori         $at, $at, 0x80
    ctx->r1 = ctx->r1 | 0X80;
    // 0x801E1FC4: lui         $t7, 0xBC00
    ctx->r15 = S32(0XBC00 << 16);
    // 0x801E1FC8: ori         $t7, $t7, 0x2406
    ctx->r15 = ctx->r15 | 0X2406;
    // 0x801E1FCC: addu        $t8, $a1, $at
    ctx->r24 = ADD32(ctx->r5, ctx->r1);
    // 0x801E1FD0: sw          $t8, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r24;
    // 0x801E1FD4: sw          $t7, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r15;
    // 0x801E1FD8: lw          $v1, 0x0($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X0);
    // 0x801E1FDC: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x801E1FE0: addiu       $t9, $v1, 0x8
    ctx->r25 = ADD32(ctx->r3, 0X8);
    // 0x801E1FE4: sw          $t9, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r25;
    // 0x801E1FE8: ori         $at, $at, 0x100
    ctx->r1 = ctx->r1 | 0X100;
    // 0x801E1FEC: lui         $t0, 0xBC00
    ctx->r8 = S32(0XBC00 << 16);
    // 0x801E1FF0: ori         $t0, $t0, 0x2006
    ctx->r8 = ctx->r8 | 0X2006;
    // 0x801E1FF4: addu        $t1, $a1, $at
    ctx->r9 = ADD32(ctx->r5, ctx->r1);
    // 0x801E1FF8: sw          $t1, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r9;
    // 0x801E1FFC: sw          $t0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r8;
    // 0x801E2000: lw          $v1, 0x0($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X0);
    // 0x801E2004: lui         $t4, 0x801F
    ctx->r12 = S32(0X801F << 16);
    // 0x801E2008: addiu       $t2, $v1, 0x8
    ctx->r10 = ADD32(ctx->r3, 0X8);
    // 0x801E200C: sw          $t2, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r10;
    // 0x801E2010: addiu       $t4, $t4, -0x5D98
    ctx->r12 = ADD32(ctx->r12, -0X5D98);
    // 0x801E2014: lui         $t3, 0x600
    ctx->r11 = S32(0X600 << 16);
    // 0x801E2018: sw          $t3, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r11;
    // 0x801E201C: jr          $ra
    // 0x801E2020: sw          $t4, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r12;
    return;
    // 0x801E2020: sw          $t4, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r12;
;}
RECOMP_FUNC void func_801E2024(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x801E2024: sw          $a2, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r6;
    // 0x801E2028: lw          $v1, 0x0($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X0);
    // 0x801E202C: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x801E2030: addiu       $t6, $v1, 0x8
    ctx->r14 = ADD32(ctx->r3, 0X8);
    // 0x801E2034: sw          $t6, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r14;
    // 0x801E2038: ori         $at, $at, 0x140
    ctx->r1 = ctx->r1 | 0X140;
    // 0x801E203C: lui         $t7, 0x102
    ctx->r15 = S32(0X102 << 16);
    // 0x801E2040: ori         $t7, $t7, 0x40
    ctx->r15 = ctx->r15 | 0X40;
    // 0x801E2044: addu        $a2, $a1, $at
    ctx->r6 = ADD32(ctx->r5, ctx->r1);
    // 0x801E2048: sw          $a2, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r6;
    // 0x801E204C: sw          $t7, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r15;
    // 0x801E2050: lw          $v1, 0x0($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X0);
    // 0x801E2054: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x801E2058: addiu       $t8, $v1, 0x8
    ctx->r24 = ADD32(ctx->r3, 0X8);
    // 0x801E205C: sw          $t8, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r24;
    // 0x801E2060: ori         $at, $at, 0x100
    ctx->r1 = ctx->r1 | 0X100;
    // 0x801E2064: lui         $t9, 0xBC00
    ctx->r25 = S32(0XBC00 << 16);
    // 0x801E2068: ori         $t9, $t9, 0x2406
    ctx->r25 = ctx->r25 | 0X2406;
    // 0x801E206C: addu        $t2, $a1, $at
    ctx->r10 = ADD32(ctx->r5, ctx->r1);
    // 0x801E2070: sw          $t2, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r10;
    // 0x801E2074: sw          $t9, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r25;
    // 0x801E2078: lw          $v1, 0x0($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X0);
    // 0x801E207C: lui         $t4, 0xBC00
    ctx->r12 = S32(0XBC00 << 16);
    // 0x801E2080: addiu       $t3, $v1, 0x8
    ctx->r11 = ADD32(ctx->r3, 0X8);
    // 0x801E2084: sw          $t3, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r11;
    // 0x801E2088: ori         $t4, $t4, 0x2006
    ctx->r12 = ctx->r12 | 0X2006;
    // 0x801E208C: sw          $t4, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r12;
    // 0x801E2090: sw          $a2, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r6;
    // 0x801E2094: lw          $v1, 0x0($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X0);
    // 0x801E2098: lui         $t7, 0x801F
    ctx->r15 = S32(0X801F << 16);
    // 0x801E209C: addiu       $t5, $v1, 0x8
    ctx->r13 = ADD32(ctx->r3, 0X8);
    // 0x801E20A0: sw          $t5, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r13;
    // 0x801E20A4: addiu       $t7, $t7, -0x33B0
    ctx->r15 = ADD32(ctx->r15, -0X33B0);
    // 0x801E20A8: lui         $t6, 0x600
    ctx->r14 = S32(0X600 << 16);
    // 0x801E20AC: sw          $t6, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r14;
    // 0x801E20B0: jr          $ra
    // 0x801E20B4: sw          $t7, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r15;
    return;
    // 0x801E20B4: sw          $t7, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r15;
;}
RECOMP_FUNC void func_801E20B8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x801E20B8: lw          $t6, 0x30($a2)
    ctx->r14 = MEM_W(ctx->r6, 0X30);
    // 0x801E20BC: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x801E20C0: lhu         $t3, 0x3C($t6)
    ctx->r11 = MEM_HU(ctx->r14, 0X3C);
    // 0x801E20C4: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x801E20C8: addiu       $t8, $v0, 0x8
    ctx->r24 = ADD32(ctx->r2, 0X8);
    // 0x801E20CC: lui         $v1, 0xBC00
    ctx->r3 = S32(0XBC00 << 16);
    // 0x801E20D0: sw          $t8, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r24;
    // 0x801E20D4: ori         $at, $at, 0x80
    ctx->r1 = ctx->r1 | 0X80;
    // 0x801E20D8: ori         $v1, $v1, 0x2006
    ctx->r3 = ctx->r3 | 0X2006;
    // 0x801E20DC: addu        $t2, $a1, $at
    ctx->r10 = ADD32(ctx->r5, ctx->r1);
    // 0x801E20E0: sw          $t2, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r10;
    // 0x801E20E4: sw          $v1, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r3;
    // 0x801E20E8: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x801E20EC: lui         $t6, 0x801F
    ctx->r14 = S32(0X801F << 16);
    // 0x801E20F0: addiu       $t9, $v0, 0x8
    ctx->r25 = ADD32(ctx->r2, 0X8);
    // 0x801E20F4: sw          $t9, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r25;
    // 0x801E20F8: lui         $a3, 0x600
    ctx->r7 = S32(0X600 << 16);
    // 0x801E20FC: addiu       $t6, $t6, -0x35F8
    ctx->r14 = ADD32(ctx->r14, -0X35F8);
    // 0x801E2100: sw          $t6, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r14;
    // 0x801E2104: sw          $a3, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r7;
    // 0x801E2108: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x801E210C: andi        $t7, $t3, 0x8000
    ctx->r15 = ctx->r11 & 0X8000;
    // 0x801E2110: addiu       $sp, $sp, -0x100
    ctx->r29 = ADD32(ctx->r29, -0X100);
    // 0x801E2114: or          $t3, $t7, $zero
    ctx->r11 = ctx->r15 | 0;
    // 0x801E2118: addiu       $t7, $v0, 0x8
    ctx->r15 = ADD32(ctx->r2, 0X8);
    // 0x801E211C: sw          $v0, 0xF0($sp)
    MEM_W(0XF0, ctx->r29) = ctx->r2;
    // 0x801E2120: sw          $t7, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r15;
    // 0x801E2124: lw          $t8, 0xF0($sp)
    ctx->r24 = MEM_W(ctx->r29, 0XF0);
    // 0x801E2128: lui         $t0, 0xBC00
    ctx->r8 = S32(0XBC00 << 16);
    // 0x801E212C: ori         $t0, $t0, 0x2406
    ctx->r8 = ctx->r8 | 0X2406;
    // 0x801E2130: sw          $t0, 0x0($t8)
    MEM_W(0X0, ctx->r24) = ctx->r8;
    // 0x801E2134: sw          $t2, 0x4($t8)
    MEM_W(0X4, ctx->r24) = ctx->r10;
    // 0x801E2138: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x801E213C: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x801E2140: addiu       $t9, $v0, 0x8
    ctx->r25 = ADD32(ctx->r2, 0X8);
    // 0x801E2144: sw          $t9, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r25;
    // 0x801E2148: ori         $at, $at, 0xC0
    ctx->r1 = ctx->r1 | 0XC0;
    // 0x801E214C: addu        $t4, $a1, $at
    ctx->r12 = ADD32(ctx->r5, ctx->r1);
    // 0x801E2150: sw          $t4, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r12;
    // 0x801E2154: sw          $v1, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r3;
    // 0x801E2158: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x801E215C: lui         $t7, 0x801F
    ctx->r15 = S32(0X801F << 16);
    // 0x801E2160: addiu       $t6, $v0, 0x8
    ctx->r14 = ADD32(ctx->r2, 0X8);
    // 0x801E2164: sw          $t6, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r14;
    // 0x801E2168: addiu       $t7, $t7, -0x3810
    ctx->r15 = ADD32(ctx->r15, -0X3810);
    // 0x801E216C: sw          $t7, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r15;
    // 0x801E2170: sw          $a3, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r7;
    // 0x801E2174: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x801E2178: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x801E217C: sw          $v0, 0xE4($sp)
    MEM_W(0XE4, ctx->r29) = ctx->r2;
    // 0x801E2180: addiu       $t8, $v0, 0x8
    ctx->r24 = ADD32(ctx->r2, 0X8);
    // 0x801E2184: sw          $t8, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r24;
    // 0x801E2188: lw          $t9, 0xE4($sp)
    ctx->r25 = MEM_W(ctx->r29, 0XE4);
    // 0x801E218C: ori         $at, $at, 0x100
    ctx->r1 = ctx->r1 | 0X100;
    // 0x801E2190: sw          $t0, 0x0($t9)
    MEM_W(0X0, ctx->r25) = ctx->r8;
    // 0x801E2194: sw          $t4, 0x4($t9)
    MEM_W(0X4, ctx->r25) = ctx->r12;
    // 0x801E2198: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x801E219C: addu        $a2, $a1, $at
    ctx->r6 = ADD32(ctx->r5, ctx->r1);
    // 0x801E21A0: sw          $v0, 0xE0($sp)
    MEM_W(0XE0, ctx->r29) = ctx->r2;
    // 0x801E21A4: addiu       $t6, $v0, 0x8
    ctx->r14 = ADD32(ctx->r2, 0X8);
    // 0x801E21A8: sw          $t6, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r14;
    // 0x801E21AC: lw          $t7, 0xE0($sp)
    ctx->r15 = MEM_W(ctx->r29, 0XE0);
    // 0x801E21B0: lui         $t9, 0x801F
    ctx->r25 = S32(0X801F << 16);
    // 0x801E21B4: sw          $v1, 0x0($t7)
    MEM_W(0X0, ctx->r15) = ctx->r3;
    // 0x801E21B8: sw          $a2, 0x4($t7)
    MEM_W(0X4, ctx->r15) = ctx->r6;
    // 0x801E21BC: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x801E21C0: addiu       $t9, $t9, -0x3448
    ctx->r25 = ADD32(ctx->r25, -0X3448);
    // 0x801E21C4: addiu       $t8, $v0, 0x8
    ctx->r24 = ADD32(ctx->r2, 0X8);
    // 0x801E21C8: sw          $t8, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r24;
    // 0x801E21CC: sw          $t9, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r25;
    // 0x801E21D0: beq         $t3, $zero, L_801E2528
    if (ctx->r11 == 0) {
        // 0x801E21D4: sw          $a3, 0x0($v0)
        MEM_W(0X0, ctx->r2) = ctx->r7;
            goto L_801E2528;
    }
    // 0x801E21D4: sw          $a3, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r7;
    // 0x801E21D8: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x801E21DC: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x801E21E0: addiu       $t6, $v0, 0x8
    ctx->r14 = ADD32(ctx->r2, 0X8);
    // 0x801E21E4: sw          $t6, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r14;
    // 0x801E21E8: sw          $a2, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r6;
    // 0x801E21EC: sw          $t0, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r8;
    // 0x801E21F0: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x801E21F4: ori         $at, $at, 0x280
    ctx->r1 = ctx->r1 | 0X280;
    // 0x801E21F8: addiu       $t7, $v0, 0x8
    ctx->r15 = ADD32(ctx->r2, 0X8);
    // 0x801E21FC: sw          $t7, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r15;
    // 0x801E2200: addu        $t8, $a1, $at
    ctx->r24 = ADD32(ctx->r5, ctx->r1);
    // 0x801E2204: sw          $t8, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r24;
    // 0x801E2208: sw          $v1, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r3;
    // 0x801E220C: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x801E2210: lui         $t6, 0x801F
    ctx->r14 = S32(0X801F << 16);
    // 0x801E2214: addiu       $t9, $v0, 0x8
    ctx->r25 = ADD32(ctx->r2, 0X8);
    // 0x801E2218: sw          $t9, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r25;
    // 0x801E221C: addiu       $t6, $t6, -0x3788
    ctx->r14 = ADD32(ctx->r14, -0X3788);
    // 0x801E2220: sw          $t6, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r14;
    // 0x801E2224: sw          $a3, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r7;
    // 0x801E2228: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x801E222C: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x801E2230: addiu       $t7, $v0, 0x8
    ctx->r15 = ADD32(ctx->r2, 0X8);
    // 0x801E2234: sw          $t7, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r15;
    // 0x801E2238: sw          $a2, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r6;
    // 0x801E223C: sw          $t0, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r8;
    // 0x801E2240: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x801E2244: ori         $at, $at, 0x180
    ctx->r1 = ctx->r1 | 0X180;
    // 0x801E2248: addiu       $t8, $v0, 0x8
    ctx->r24 = ADD32(ctx->r2, 0X8);
    // 0x801E224C: sw          $t8, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r24;
    // 0x801E2250: addu        $t9, $a1, $at
    ctx->r25 = ADD32(ctx->r5, ctx->r1);
    // 0x801E2254: sw          $t9, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r25;
    // 0x801E2258: sw          $v1, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r3;
    // 0x801E225C: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x801E2260: lui         $t7, 0x801F
    ctx->r15 = S32(0X801F << 16);
    // 0x801E2264: addiu       $t6, $v0, 0x8
    ctx->r14 = ADD32(ctx->r2, 0X8);
    // 0x801E2268: sw          $t6, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r14;
    // 0x801E226C: addiu       $t7, $t7, -0x36C0
    ctx->r15 = ADD32(ctx->r15, -0X36C0);
    // 0x801E2270: sw          $t7, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r15;
    // 0x801E2274: sw          $a3, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r7;
    // 0x801E2278: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x801E227C: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x801E2280: addiu       $t8, $v0, 0x8
    ctx->r24 = ADD32(ctx->r2, 0X8);
    // 0x801E2284: sw          $t8, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r24;
    // 0x801E2288: sw          $t2, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r10;
    // 0x801E228C: sw          $t0, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r8;
    // 0x801E2290: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x801E2294: ori         $at, $at, 0x480
    ctx->r1 = ctx->r1 | 0X480;
    // 0x801E2298: addiu       $t9, $v0, 0x8
    ctx->r25 = ADD32(ctx->r2, 0X8);
    // 0x801E229C: sw          $t9, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r25;
    // 0x801E22A0: addu        $a2, $a1, $at
    ctx->r6 = ADD32(ctx->r5, ctx->r1);
    // 0x801E22A4: sw          $a2, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r6;
    // 0x801E22A8: sw          $v1, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r3;
    // 0x801E22AC: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x801E22B0: lui         $t7, 0x801F
    ctx->r15 = S32(0X801F << 16);
    // 0x801E22B4: addiu       $t6, $v0, 0x8
    ctx->r14 = ADD32(ctx->r2, 0X8);
    // 0x801E22B8: sw          $t6, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r14;
    // 0x801E22BC: addiu       $t7, $t7, -0x3230
    ctx->r15 = ADD32(ctx->r15, -0X3230);
    // 0x801E22C0: sw          $t7, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r15;
    // 0x801E22C4: sw          $a3, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r7;
    // 0x801E22C8: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x801E22CC: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x801E22D0: addiu       $t8, $v0, 0x8
    ctx->r24 = ADD32(ctx->r2, 0X8);
    // 0x801E22D4: sw          $t8, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r24;
    // 0x801E22D8: sw          $t2, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r10;
    // 0x801E22DC: sw          $t0, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r8;
    // 0x801E22E0: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x801E22E4: ori         $at, $at, 0x380
    ctx->r1 = ctx->r1 | 0X380;
    // 0x801E22E8: addiu       $t9, $v0, 0x8
    ctx->r25 = ADD32(ctx->r2, 0X8);
    // 0x801E22EC: sw          $t9, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r25;
    // 0x801E22F0: addu        $t1, $a1, $at
    ctx->r9 = ADD32(ctx->r5, ctx->r1);
    // 0x801E22F4: sw          $t1, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r9;
    // 0x801E22F8: sw          $v1, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r3;
    // 0x801E22FC: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x801E2300: lui         $t7, 0x801F
    ctx->r15 = S32(0X801F << 16);
    // 0x801E2304: addiu       $t6, $v0, 0x8
    ctx->r14 = ADD32(ctx->r2, 0X8);
    // 0x801E2308: sw          $t6, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r14;
    // 0x801E230C: addiu       $t7, $t7, -0x3150
    ctx->r15 = ADD32(ctx->r15, -0X3150);
    // 0x801E2310: sw          $t7, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r15;
    // 0x801E2314: sw          $a3, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r7;
    // 0x801E2318: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x801E231C: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x801E2320: addiu       $t8, $v0, 0x8
    ctx->r24 = ADD32(ctx->r2, 0X8);
    // 0x801E2324: sw          $t8, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r24;
    // 0x801E2328: sw          $a2, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r6;
    // 0x801E232C: sw          $t0, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r8;
    // 0x801E2330: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x801E2334: ori         $at, $at, 0x4C0
    ctx->r1 = ctx->r1 | 0X4C0;
    // 0x801E2338: sw          $v0, 0xA4($sp)
    MEM_W(0XA4, ctx->r29) = ctx->r2;
    // 0x801E233C: addiu       $t9, $v0, 0x8
    ctx->r25 = ADD32(ctx->r2, 0X8);
    // 0x801E2340: sw          $t9, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r25;
    // 0x801E2344: lw          $t6, 0xA4($sp)
    ctx->r14 = MEM_W(ctx->r29, 0XA4);
    // 0x801E2348: addu        $t2, $a1, $at
    ctx->r10 = ADD32(ctx->r5, ctx->r1);
    // 0x801E234C: sw          $t2, 0x4($t6)
    MEM_W(0X4, ctx->r14) = ctx->r10;
    // 0x801E2350: sw          $v1, 0x0($t6)
    MEM_W(0X0, ctx->r14) = ctx->r3;
    // 0x801E2354: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x801E2358: lui         $t8, 0x801F
    ctx->r24 = S32(0X801F << 16);
    // 0x801E235C: addiu       $t7, $v0, 0x8
    ctx->r15 = ADD32(ctx->r2, 0X8);
    // 0x801E2360: sw          $t7, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r15;
    // 0x801E2364: addiu       $t8, $t8, -0x3070
    ctx->r24 = ADD32(ctx->r24, -0X3070);
    // 0x801E2368: sw          $t8, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r24;
    // 0x801E236C: sw          $a3, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r7;
    // 0x801E2370: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x801E2374: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x801E2378: addiu       $t9, $v0, 0x8
    ctx->r25 = ADD32(ctx->r2, 0X8);
    // 0x801E237C: sw          $t9, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r25;
    // 0x801E2380: sw          $t1, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r9;
    // 0x801E2384: sw          $t0, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r8;
    // 0x801E2388: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x801E238C: ori         $at, $at, 0x3C0
    ctx->r1 = ctx->r1 | 0X3C0;
    // 0x801E2390: sw          $v0, 0x98($sp)
    MEM_W(0X98, ctx->r29) = ctx->r2;
    // 0x801E2394: addiu       $t6, $v0, 0x8
    ctx->r14 = ADD32(ctx->r2, 0X8);
    // 0x801E2398: sw          $t6, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r14;
    // 0x801E239C: lw          $t7, 0x98($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X98);
    // 0x801E23A0: addu        $t3, $a1, $at
    ctx->r11 = ADD32(ctx->r5, ctx->r1);
    // 0x801E23A4: sw          $t3, 0x4($t7)
    MEM_W(0X4, ctx->r15) = ctx->r11;
    // 0x801E23A8: sw          $v1, 0x0($t7)
    MEM_W(0X0, ctx->r15) = ctx->r3;
    // 0x801E23AC: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x801E23B0: lui         $t9, 0x801F
    ctx->r25 = S32(0X801F << 16);
    // 0x801E23B4: addiu       $t8, $v0, 0x8
    ctx->r24 = ADD32(ctx->r2, 0X8);
    // 0x801E23B8: sw          $t8, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r24;
    // 0x801E23BC: addiu       $t9, $t9, -0x2FD8
    ctx->r25 = ADD32(ctx->r25, -0X2FD8);
    // 0x801E23C0: sw          $t9, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r25;
    // 0x801E23C4: sw          $a3, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r7;
    // 0x801E23C8: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x801E23CC: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x801E23D0: addiu       $t6, $v0, 0x8
    ctx->r14 = ADD32(ctx->r2, 0X8);
    // 0x801E23D4: sw          $t6, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r14;
    // 0x801E23D8: sw          $t2, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r10;
    // 0x801E23DC: sw          $t0, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r8;
    // 0x801E23E0: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x801E23E4: ori         $at, $at, 0x500
    ctx->r1 = ctx->r1 | 0X500;
    // 0x801E23E8: sw          $v0, 0x8C($sp)
    MEM_W(0X8C, ctx->r29) = ctx->r2;
    // 0x801E23EC: addiu       $t7, $v0, 0x8
    ctx->r15 = ADD32(ctx->r2, 0X8);
    // 0x801E23F0: sw          $t7, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r15;
    // 0x801E23F4: lw          $t8, 0x8C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X8C);
    // 0x801E23F8: addu        $a2, $a1, $at
    ctx->r6 = ADD32(ctx->r5, ctx->r1);
    // 0x801E23FC: sw          $a2, 0x4($t8)
    MEM_W(0X4, ctx->r24) = ctx->r6;
    // 0x801E2400: sw          $v1, 0x0($t8)
    MEM_W(0X0, ctx->r24) = ctx->r3;
    // 0x801E2404: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x801E2408: lui         $t7, 0x801F
    ctx->r15 = S32(0X801F << 16);
    // 0x801E240C: sw          $v0, 0x88($sp)
    MEM_W(0X88, ctx->r29) = ctx->r2;
    // 0x801E2410: addiu       $t9, $v0, 0x8
    ctx->r25 = ADD32(ctx->r2, 0X8);
    // 0x801E2414: sw          $t9, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r25;
    // 0x801E2418: lw          $t6, 0x88($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X88);
    // 0x801E241C: addiu       $t7, $t7, -0x39D0
    ctx->r15 = ADD32(ctx->r15, -0X39D0);
    // 0x801E2420: sw          $t7, 0x4($t6)
    MEM_W(0X4, ctx->r14) = ctx->r15;
    // 0x801E2424: sw          $a3, 0x0($t6)
    MEM_W(0X0, ctx->r14) = ctx->r7;
    // 0x801E2428: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x801E242C: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x801E2430: addiu       $t8, $v0, 0x8
    ctx->r24 = ADD32(ctx->r2, 0X8);
    // 0x801E2434: sw          $t8, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r24;
    // 0x801E2438: sw          $t3, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r11;
    // 0x801E243C: sw          $t0, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r8;
    // 0x801E2440: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x801E2444: ori         $at, $at, 0x400
    ctx->r1 = ctx->r1 | 0X400;
    // 0x801E2448: addiu       $t9, $v0, 0x8
    ctx->r25 = ADD32(ctx->r2, 0X8);
    // 0x801E244C: sw          $t9, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r25;
    // 0x801E2450: addu        $t1, $a1, $at
    ctx->r9 = ADD32(ctx->r5, ctx->r1);
    // 0x801E2454: sw          $t1, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r9;
    // 0x801E2458: sw          $v1, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r3;
    // 0x801E245C: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x801E2460: lui         $t6, 0x801F
    ctx->r14 = S32(0X801F << 16);
    // 0x801E2464: addiu       $t7, $v0, 0x8
    ctx->r15 = ADD32(ctx->r2, 0X8);
    // 0x801E2468: sw          $t7, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r15;
    // 0x801E246C: addiu       $t6, $t6, -0x38F0
    ctx->r14 = ADD32(ctx->r14, -0X38F0);
    // 0x801E2470: sw          $t6, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r14;
    // 0x801E2474: sw          $a3, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r7;
    // 0x801E2478: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x801E247C: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x801E2480: sw          $v0, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->r2;
    // 0x801E2484: addiu       $t8, $v0, 0x8
    ctx->r24 = ADD32(ctx->r2, 0X8);
    // 0x801E2488: sw          $t8, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r24;
    // 0x801E248C: lw          $t9, 0x78($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X78);
    // 0x801E2490: ori         $at, $at, 0x540
    ctx->r1 = ctx->r1 | 0X540;
    // 0x801E2494: sw          $t0, 0x0($t9)
    MEM_W(0X0, ctx->r25) = ctx->r8;
    // 0x801E2498: lw          $t7, 0x78($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X78);
    // 0x801E249C: addu        $t8, $a1, $at
    ctx->r24 = ADD32(ctx->r5, ctx->r1);
    // 0x801E24A0: sw          $a2, 0x4($t7)
    MEM_W(0X4, ctx->r15) = ctx->r6;
    // 0x801E24A4: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x801E24A8: lui         $t7, 0x801F
    ctx->r15 = S32(0X801F << 16);
    // 0x801E24AC: addiu       $t6, $v0, 0x8
    ctx->r14 = ADD32(ctx->r2, 0X8);
    // 0x801E24B0: sw          $t6, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r14;
    // 0x801E24B4: sw          $t8, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r24;
    // 0x801E24B8: sw          $v1, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r3;
    // 0x801E24BC: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x801E24C0: addiu       $t7, $t7, -0x3578
    ctx->r15 = ADD32(ctx->r15, -0X3578);
    // 0x801E24C4: addiu       $t9, $v0, 0x8
    ctx->r25 = ADD32(ctx->r2, 0X8);
    // 0x801E24C8: sw          $t9, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r25;
    // 0x801E24CC: sw          $t7, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r15;
    // 0x801E24D0: sw          $a3, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r7;
    // 0x801E24D4: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x801E24D8: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x801E24DC: addiu       $t6, $v0, 0x8
    ctx->r14 = ADD32(ctx->r2, 0X8);
    // 0x801E24E0: sw          $t6, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r14;
    // 0x801E24E4: sw          $t1, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r9;
    // 0x801E24E8: sw          $t0, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r8;
    // 0x801E24EC: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x801E24F0: ori         $at, $at, 0x440
    ctx->r1 = ctx->r1 | 0X440;
    // 0x801E24F4: addiu       $t8, $v0, 0x8
    ctx->r24 = ADD32(ctx->r2, 0X8);
    // 0x801E24F8: sw          $t8, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r24;
    // 0x801E24FC: addu        $t9, $a1, $at
    ctx->r25 = ADD32(ctx->r5, ctx->r1);
    // 0x801E2500: sw          $t9, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r25;
    // 0x801E2504: sw          $v1, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r3;
    // 0x801E2508: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x801E250C: lui         $t6, 0x801F
    ctx->r14 = S32(0X801F << 16);
    // 0x801E2510: addiu       $t7, $v0, 0x8
    ctx->r15 = ADD32(ctx->r2, 0X8);
    // 0x801E2514: sw          $t7, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r15;
    // 0x801E2518: addiu       $t6, $t6, -0x34E0
    ctx->r14 = ADD32(ctx->r14, -0X34E0);
    // 0x801E251C: sw          $t6, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r14;
    // 0x801E2520: b           L_801E2884
    // 0x801E2524: sw          $a3, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r7;
        goto L_801E2884;
    // 0x801E2524: sw          $a3, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r7;
L_801E2528:
    // 0x801E2528: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x801E252C: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x801E2530: addiu       $t8, $v0, 0x8
    ctx->r24 = ADD32(ctx->r2, 0X8);
    // 0x801E2534: sw          $t8, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r24;
    // 0x801E2538: sw          $a2, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r6;
    // 0x801E253C: sw          $t0, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r8;
    // 0x801E2540: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x801E2544: ori         $at, $at, 0x180
    ctx->r1 = ctx->r1 | 0X180;
    // 0x801E2548: addiu       $t9, $v0, 0x8
    ctx->r25 = ADD32(ctx->r2, 0X8);
    // 0x801E254C: sw          $t9, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r25;
    // 0x801E2550: addu        $t7, $a1, $at
    ctx->r15 = ADD32(ctx->r5, ctx->r1);
    // 0x801E2554: sw          $t7, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r15;
    // 0x801E2558: sw          $v1, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r3;
    // 0x801E255C: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x801E2560: lui         $t8, 0x801F
    ctx->r24 = S32(0X801F << 16);
    // 0x801E2564: addiu       $t6, $v0, 0x8
    ctx->r14 = ADD32(ctx->r2, 0X8);
    // 0x801E2568: sw          $t6, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r14;
    // 0x801E256C: addiu       $t8, $t8, -0x3788
    ctx->r24 = ADD32(ctx->r24, -0X3788);
    // 0x801E2570: sw          $t8, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r24;
    // 0x801E2574: sw          $a3, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r7;
    // 0x801E2578: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x801E257C: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x801E2580: addiu       $t9, $v0, 0x8
    ctx->r25 = ADD32(ctx->r2, 0X8);
    // 0x801E2584: sw          $t9, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r25;
    // 0x801E2588: sw          $a2, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r6;
    // 0x801E258C: sw          $t0, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r8;
    // 0x801E2590: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x801E2594: ori         $at, $at, 0x280
    ctx->r1 = ctx->r1 | 0X280;
    // 0x801E2598: addiu       $t7, $v0, 0x8
    ctx->r15 = ADD32(ctx->r2, 0X8);
    // 0x801E259C: sw          $t7, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r15;
    // 0x801E25A0: addu        $t6, $a1, $at
    ctx->r14 = ADD32(ctx->r5, ctx->r1);
    // 0x801E25A4: sw          $t6, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r14;
    // 0x801E25A8: sw          $v1, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r3;
    // 0x801E25AC: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x801E25B0: lui         $t9, 0x801F
    ctx->r25 = S32(0X801F << 16);
    // 0x801E25B4: addiu       $t8, $v0, 0x8
    ctx->r24 = ADD32(ctx->r2, 0X8);
    // 0x801E25B8: sw          $t8, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r24;
    // 0x801E25BC: addiu       $t9, $t9, -0x36C0
    ctx->r25 = ADD32(ctx->r25, -0X36C0);
    // 0x801E25C0: sw          $t9, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r25;
    // 0x801E25C4: sw          $a3, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r7;
    // 0x801E25C8: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x801E25CC: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x801E25D0: addiu       $t7, $v0, 0x8
    ctx->r15 = ADD32(ctx->r2, 0X8);
    // 0x801E25D4: sw          $t7, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r15;
    // 0x801E25D8: sw          $t2, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r10;
    // 0x801E25DC: sw          $t0, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r8;
    // 0x801E25E0: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x801E25E4: ori         $at, $at, 0x380
    ctx->r1 = ctx->r1 | 0X380;
    // 0x801E25E8: addiu       $t6, $v0, 0x8
    ctx->r14 = ADD32(ctx->r2, 0X8);
    // 0x801E25EC: sw          $t6, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r14;
    // 0x801E25F0: addu        $t1, $a1, $at
    ctx->r9 = ADD32(ctx->r5, ctx->r1);
    // 0x801E25F4: sw          $t1, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r9;
    // 0x801E25F8: sw          $v1, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r3;
    // 0x801E25FC: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x801E2600: lui         $t9, 0x801F
    ctx->r25 = S32(0X801F << 16);
    // 0x801E2604: addiu       $t8, $v0, 0x8
    ctx->r24 = ADD32(ctx->r2, 0X8);
    // 0x801E2608: sw          $t8, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r24;
    // 0x801E260C: addiu       $t9, $t9, -0x3230
    ctx->r25 = ADD32(ctx->r25, -0X3230);
    // 0x801E2610: sw          $t9, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r25;
    // 0x801E2614: sw          $a3, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r7;
    // 0x801E2618: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x801E261C: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x801E2620: addiu       $t7, $v0, 0x8
    ctx->r15 = ADD32(ctx->r2, 0X8);
    // 0x801E2624: sw          $t7, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r15;
    // 0x801E2628: sw          $t2, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r10;
    // 0x801E262C: sw          $t0, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r8;
    // 0x801E2630: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x801E2634: ori         $at, $at, 0x480
    ctx->r1 = ctx->r1 | 0X480;
    // 0x801E2638: addiu       $t6, $v0, 0x8
    ctx->r14 = ADD32(ctx->r2, 0X8);
    // 0x801E263C: sw          $t6, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r14;
    // 0x801E2640: addu        $a2, $a1, $at
    ctx->r6 = ADD32(ctx->r5, ctx->r1);
    // 0x801E2644: sw          $a2, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r6;
    // 0x801E2648: sw          $v1, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r3;
    // 0x801E264C: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x801E2650: lui         $t9, 0x801F
    ctx->r25 = S32(0X801F << 16);
    // 0x801E2654: addiu       $t8, $v0, 0x8
    ctx->r24 = ADD32(ctx->r2, 0X8);
    // 0x801E2658: sw          $t8, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r24;
    // 0x801E265C: addiu       $t9, $t9, -0x3150
    ctx->r25 = ADD32(ctx->r25, -0X3150);
    // 0x801E2660: sw          $t9, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r25;
    // 0x801E2664: sw          $a3, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r7;
    // 0x801E2668: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x801E266C: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x801E2670: addiu       $t7, $v0, 0x8
    ctx->r15 = ADD32(ctx->r2, 0X8);
    // 0x801E2674: sw          $t7, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r15;
    // 0x801E2678: sw          $t1, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r9;
    // 0x801E267C: sw          $t0, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r8;
    // 0x801E2680: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x801E2684: ori         $at, $at, 0x3C0
    ctx->r1 = ctx->r1 | 0X3C0;
    // 0x801E2688: sw          $v0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r2;
    // 0x801E268C: addiu       $t6, $v0, 0x8
    ctx->r14 = ADD32(ctx->r2, 0X8);
    // 0x801E2690: sw          $t6, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r14;
    // 0x801E2694: lw          $t8, 0x2C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X2C);
    // 0x801E2698: addu        $t3, $a1, $at
    ctx->r11 = ADD32(ctx->r5, ctx->r1);
    // 0x801E269C: sw          $v1, 0x0($t8)
    MEM_W(0X0, ctx->r24) = ctx->r3;
    // 0x801E26A0: lw          $t9, 0x2C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X2C);
    // 0x801E26A4: lui         $t6, 0x801F
    ctx->r14 = S32(0X801F << 16);
    // 0x801E26A8: sw          $t3, 0x4($t9)
    MEM_W(0X4, ctx->r25) = ctx->r11;
    // 0x801E26AC: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x801E26B0: addiu       $t6, $t6, -0x3070
    ctx->r14 = ADD32(ctx->r14, -0X3070);
    // 0x801E26B4: addiu       $t7, $v0, 0x8
    ctx->r15 = ADD32(ctx->r2, 0X8);
    // 0x801E26B8: sw          $t7, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r15;
    // 0x801E26BC: sw          $t6, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r14;
    // 0x801E26C0: sw          $a3, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r7;
    // 0x801E26C4: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x801E26C8: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x801E26CC: addiu       $t8, $v0, 0x8
    ctx->r24 = ADD32(ctx->r2, 0X8);
    // 0x801E26D0: sw          $t8, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r24;
    // 0x801E26D4: sw          $a2, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r6;
    // 0x801E26D8: sw          $t0, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r8;
    // 0x801E26DC: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x801E26E0: ori         $at, $at, 0x4C0
    ctx->r1 = ctx->r1 | 0X4C0;
    // 0x801E26E4: sw          $v0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r2;
    // 0x801E26E8: addiu       $t9, $v0, 0x8
    ctx->r25 = ADD32(ctx->r2, 0X8);
    // 0x801E26EC: sw          $t9, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r25;
    // 0x801E26F0: lw          $t7, 0x20($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X20);
    // 0x801E26F4: addu        $t2, $a1, $at
    ctx->r10 = ADD32(ctx->r5, ctx->r1);
    // 0x801E26F8: sw          $v1, 0x0($t7)
    MEM_W(0X0, ctx->r15) = ctx->r3;
    // 0x801E26FC: lw          $t6, 0x20($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X20);
    // 0x801E2700: lui         $t9, 0x801F
    ctx->r25 = S32(0X801F << 16);
    // 0x801E2704: sw          $t2, 0x4($t6)
    MEM_W(0X4, ctx->r14) = ctx->r10;
    // 0x801E2708: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x801E270C: addiu       $t9, $t9, -0x2FD8
    ctx->r25 = ADD32(ctx->r25, -0X2FD8);
    // 0x801E2710: addiu       $t8, $v0, 0x8
    ctx->r24 = ADD32(ctx->r2, 0X8);
    // 0x801E2714: sw          $t8, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r24;
    // 0x801E2718: sw          $t9, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r25;
    // 0x801E271C: sw          $a3, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r7;
    // 0x801E2720: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x801E2724: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x801E2728: addiu       $t7, $v0, 0x8
    ctx->r15 = ADD32(ctx->r2, 0X8);
    // 0x801E272C: sw          $t7, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r15;
    // 0x801E2730: sw          $t3, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r11;
    // 0x801E2734: sw          $t0, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r8;
    // 0x801E2738: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x801E273C: ori         $at, $at, 0x400
    ctx->r1 = ctx->r1 | 0X400;
    // 0x801E2740: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    // 0x801E2744: addiu       $t6, $v0, 0x8
    ctx->r14 = ADD32(ctx->r2, 0X8);
    // 0x801E2748: sw          $t6, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r14;
    // 0x801E274C: lw          $t8, 0x14($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X14);
    // 0x801E2750: addu        $t1, $a1, $at
    ctx->r9 = ADD32(ctx->r5, ctx->r1);
    // 0x801E2754: sw          $v1, 0x0($t8)
    MEM_W(0X0, ctx->r24) = ctx->r3;
    // 0x801E2758: lw          $t9, 0x14($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X14);
    // 0x801E275C: lui         $t8, 0x801F
    ctx->r24 = S32(0X801F << 16);
    // 0x801E2760: sw          $t1, 0x4($t9)
    MEM_W(0X4, ctx->r25) = ctx->r9;
    // 0x801E2764: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x801E2768: addiu       $t8, $t8, -0x39D0
    ctx->r24 = ADD32(ctx->r24, -0X39D0);
    // 0x801E276C: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x801E2770: addiu       $t7, $v0, 0x8
    ctx->r15 = ADD32(ctx->r2, 0X8);
    // 0x801E2774: sw          $t7, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r15;
    // 0x801E2778: lw          $t6, 0x10($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X10);
    // 0x801E277C: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x801E2780: sw          $a3, 0x0($t6)
    MEM_W(0X0, ctx->r14) = ctx->r7;
    // 0x801E2784: lw          $t9, 0x10($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X10);
    // 0x801E2788: ori         $at, $at, 0x500
    ctx->r1 = ctx->r1 | 0X500;
    // 0x801E278C: sw          $t8, 0x4($t9)
    MEM_W(0X4, ctx->r25) = ctx->r24;
    // 0x801E2790: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x801E2794: addu        $a2, $a1, $at
    ctx->r6 = ADD32(ctx->r5, ctx->r1);
    // 0x801E2798: addiu       $t7, $v0, 0x8
    ctx->r15 = ADD32(ctx->r2, 0X8);
    // 0x801E279C: sw          $t7, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r15;
    // 0x801E27A0: sw          $t2, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r10;
    // 0x801E27A4: sw          $t0, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r8;
    // 0x801E27A8: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x801E27AC: lui         $t9, 0x801F
    ctx->r25 = S32(0X801F << 16);
    // 0x801E27B0: addiu       $t6, $v0, 0x8
    ctx->r14 = ADD32(ctx->r2, 0X8);
    // 0x801E27B4: sw          $t6, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r14;
    // 0x801E27B8: sw          $a2, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r6;
    // 0x801E27BC: sw          $v1, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r3;
    // 0x801E27C0: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x801E27C4: addiu       $t9, $t9, -0x38F0
    ctx->r25 = ADD32(ctx->r25, -0X38F0);
    // 0x801E27C8: addiu       $t8, $v0, 0x8
    ctx->r24 = ADD32(ctx->r2, 0X8);
    // 0x801E27CC: sw          $t8, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r24;
    // 0x801E27D0: sw          $t9, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r25;
    // 0x801E27D4: sw          $a3, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r7;
    // 0x801E27D8: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x801E27DC: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x801E27E0: sw          $v0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r2;
    // 0x801E27E4: addiu       $t7, $v0, 0x8
    ctx->r15 = ADD32(ctx->r2, 0X8);
    // 0x801E27E8: sw          $t7, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r15;
    // 0x801E27EC: lw          $t6, 0x0($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X0);
    // 0x801E27F0: ori         $at, $at, 0x440
    ctx->r1 = ctx->r1 | 0X440;
    // 0x801E27F4: sw          $t0, 0x0($t6)
    MEM_W(0X0, ctx->r14) = ctx->r8;
    // 0x801E27F8: lw          $t8, 0x0($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X0);
    // 0x801E27FC: addu        $t7, $a1, $at
    ctx->r15 = ADD32(ctx->r5, ctx->r1);
    // 0x801E2800: sw          $t1, 0x4($t8)
    MEM_W(0X4, ctx->r24) = ctx->r9;
    // 0x801E2804: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x801E2808: lui         $t8, 0x801F
    ctx->r24 = S32(0X801F << 16);
    // 0x801E280C: addiu       $t9, $v0, 0x8
    ctx->r25 = ADD32(ctx->r2, 0X8);
    // 0x801E2810: sw          $t9, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r25;
    // 0x801E2814: sw          $t7, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r15;
    // 0x801E2818: sw          $v1, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r3;
    // 0x801E281C: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x801E2820: addiu       $t8, $t8, -0x3578
    ctx->r24 = ADD32(ctx->r24, -0X3578);
    // 0x801E2824: addiu       $t6, $v0, 0x8
    ctx->r14 = ADD32(ctx->r2, 0X8);
    // 0x801E2828: sw          $t6, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r14;
    // 0x801E282C: sw          $t8, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r24;
    // 0x801E2830: sw          $a3, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r7;
    // 0x801E2834: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x801E2838: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x801E283C: addiu       $t9, $v0, 0x8
    ctx->r25 = ADD32(ctx->r2, 0X8);
    // 0x801E2840: sw          $t9, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r25;
    // 0x801E2844: sw          $a2, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r6;
    // 0x801E2848: sw          $t0, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r8;
    // 0x801E284C: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x801E2850: ori         $at, $at, 0x540
    ctx->r1 = ctx->r1 | 0X540;
    // 0x801E2854: addiu       $t7, $v0, 0x8
    ctx->r15 = ADD32(ctx->r2, 0X8);
    // 0x801E2858: sw          $t7, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r15;
    // 0x801E285C: addu        $t6, $a1, $at
    ctx->r14 = ADD32(ctx->r5, ctx->r1);
    // 0x801E2860: sw          $t6, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r14;
    // 0x801E2864: sw          $v1, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r3;
    // 0x801E2868: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x801E286C: lui         $t9, 0x801F
    ctx->r25 = S32(0X801F << 16);
    // 0x801E2870: addiu       $t8, $v0, 0x8
    ctx->r24 = ADD32(ctx->r2, 0X8);
    // 0x801E2874: sw          $t8, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r24;
    // 0x801E2878: addiu       $t9, $t9, -0x34E0
    ctx->r25 = ADD32(ctx->r25, -0X34E0);
    // 0x801E287C: sw          $t9, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r25;
    // 0x801E2880: sw          $a3, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r7;
L_801E2884:
    // 0x801E2884: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x801E2888: lui         $t6, 0xE700
    ctx->r14 = S32(0XE700 << 16);
    // 0x801E288C: addiu       $t7, $v0, 0x8
    ctx->r15 = ADD32(ctx->r2, 0X8);
    // 0x801E2890: sw          $t7, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r15;
    // 0x801E2894: addiu       $sp, $sp, 0x100
    ctx->r29 = ADD32(ctx->r29, 0X100);
    // 0x801E2898: sw          $zero, 0x4($v0)
    MEM_W(0X4, ctx->r2) = 0;
    // 0x801E289C: jr          $ra
    // 0x801E28A0: sw          $t6, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r14;
    return;
    // 0x801E28A0: sw          $t6, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r14;
;}
RECOMP_FUNC void func_801E28A4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x801E28A4: addiu       $sp, $sp, -0x130
    ctx->r29 = ADD32(ctx->r29, -0X130);
    // 0x801E28A8: sw          $s1, 0xC($sp)
    MEM_W(0XC, ctx->r29) = ctx->r17;
    // 0x801E28AC: sw          $s0, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r16;
    // 0x801E28B0: sw          $a2, 0x138($sp)
    MEM_W(0X138, ctx->r29) = ctx->r6;
    // 0x801E28B4: lw          $t7, 0x30($a2)
    ctx->r15 = MEM_W(ctx->r6, 0X30);
    // 0x801E28B8: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x801E28BC: lhu         $t2, 0x3C($t7)
    ctx->r10 = MEM_HU(ctx->r15, 0X3C);
    // 0x801E28C0: addiu       $t9, $v0, 0x8
    ctx->r25 = ADD32(ctx->r2, 0X8);
    // 0x801E28C4: sw          $t9, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r25;
    // 0x801E28C8: lui         $t6, 0xE700
    ctx->r14 = S32(0XE700 << 16);
    // 0x801E28CC: sw          $t6, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r14;
    // 0x801E28D0: sw          $zero, 0x4($v0)
    MEM_W(0X4, ctx->r2) = 0;
    // 0x801E28D4: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x801E28D8: andi        $t8, $t2, 0x8000
    ctx->r24 = ctx->r10 & 0X8000;
    // 0x801E28DC: or          $t2, $t8, $zero
    ctx->r10 = ctx->r24 | 0;
    // 0x801E28E0: addiu       $t7, $v0, 0x8
    ctx->r15 = ADD32(ctx->r2, 0X8);
    // 0x801E28E4: sw          $t7, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r15;
    // 0x801E28E8: lui         $t8, 0xB900
    ctx->r24 = S32(0XB900 << 16);
    // 0x801E28EC: lui         $t9, 0x55
    ctx->r25 = S32(0X55 << 16);
    // 0x801E28F0: ori         $t9, $t9, 0x3078
    ctx->r25 = ctx->r25 | 0X3078;
    // 0x801E28F4: ori         $t8, $t8, 0x31D
    ctx->r24 = ctx->r24 | 0X31D;
    // 0x801E28F8: sw          $t8, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r24;
    // 0x801E28FC: sw          $t9, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r25;
    // 0x801E2900: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x801E2904: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x801E2908: addiu       $t6, $v0, 0x8
    ctx->r14 = ADD32(ctx->r2, 0X8);
    // 0x801E290C: lui         $v1, 0xBC00
    ctx->r3 = S32(0XBC00 << 16);
    // 0x801E2910: sw          $t6, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r14;
    // 0x801E2914: ori         $at, $at, 0x80
    ctx->r1 = ctx->r1 | 0X80;
    // 0x801E2918: ori         $v1, $v1, 0x2006
    ctx->r3 = ctx->r3 | 0X2006;
    // 0x801E291C: addu        $s0, $a1, $at
    ctx->r16 = ADD32(ctx->r5, ctx->r1);
    // 0x801E2920: sw          $s0, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r16;
    // 0x801E2924: sw          $v1, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r3;
    // 0x801E2928: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x801E292C: lui         $t8, 0x801F
    ctx->r24 = S32(0X801F << 16);
    // 0x801E2930: addiu       $t7, $v0, 0x8
    ctx->r15 = ADD32(ctx->r2, 0X8);
    // 0x801E2934: sw          $t7, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r15;
    // 0x801E2938: addiu       $t8, $t8, 0x8C8
    ctx->r24 = ADD32(ctx->r24, 0X8C8);
    // 0x801E293C: lui         $a3, 0x600
    ctx->r7 = S32(0X600 << 16);
    // 0x801E2940: sw          $a3, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r7;
    // 0x801E2944: sw          $t8, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r24;
    // 0x801E2948: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x801E294C: lui         $a2, 0xBC00
    ctx->r6 = S32(0XBC00 << 16);
    // 0x801E2950: addiu       $t9, $v0, 0x8
    ctx->r25 = ADD32(ctx->r2, 0X8);
    // 0x801E2954: sw          $t9, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r25;
    // 0x801E2958: ori         $a2, $a2, 0x2406
    ctx->r6 = ctx->r6 | 0X2406;
    // 0x801E295C: sw          $a2, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r6;
    // 0x801E2960: sw          $s0, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r16;
    // 0x801E2964: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x801E2968: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x801E296C: addiu       $t6, $v0, 0x8
    ctx->r14 = ADD32(ctx->r2, 0X8);
    // 0x801E2970: sw          $t6, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r14;
    // 0x801E2974: ori         $at, $at, 0xC0
    ctx->r1 = ctx->r1 | 0XC0;
    // 0x801E2978: addu        $s1, $a1, $at
    ctx->r17 = ADD32(ctx->r5, ctx->r1);
    // 0x801E297C: sw          $s1, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r17;
    // 0x801E2980: sw          $v1, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r3;
    // 0x801E2984: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x801E2988: lui         $t8, 0x801F
    ctx->r24 = S32(0X801F << 16);
    // 0x801E298C: addiu       $t7, $v0, 0x8
    ctx->r15 = ADD32(ctx->r2, 0X8);
    // 0x801E2990: sw          $t7, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r15;
    // 0x801E2994: addiu       $t8, $t8, 0x670
    ctx->r24 = ADD32(ctx->r24, 0X670);
    // 0x801E2998: sw          $t8, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r24;
    // 0x801E299C: sw          $a3, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r7;
    // 0x801E29A0: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x801E29A4: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x801E29A8: addiu       $t9, $v0, 0x8
    ctx->r25 = ADD32(ctx->r2, 0X8);
    // 0x801E29AC: sw          $t9, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r25;
    // 0x801E29B0: sw          $s1, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r17;
    // 0x801E29B4: sw          $a2, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r6;
    // 0x801E29B8: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x801E29BC: ori         $at, $at, 0x100
    ctx->r1 = ctx->r1 | 0X100;
    // 0x801E29C0: addiu       $t6, $v0, 0x8
    ctx->r14 = ADD32(ctx->r2, 0X8);
    // 0x801E29C4: sw          $t6, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r14;
    // 0x801E29C8: addu        $t0, $a1, $at
    ctx->r8 = ADD32(ctx->r5, ctx->r1);
    // 0x801E29CC: sw          $t0, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r8;
    // 0x801E29D0: sw          $v1, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r3;
    // 0x801E29D4: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x801E29D8: lui         $t8, 0x801F
    ctx->r24 = S32(0X801F << 16);
    // 0x801E29DC: addiu       $t7, $v0, 0x8
    ctx->r15 = ADD32(ctx->r2, 0X8);
    // 0x801E29E0: sw          $t7, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r15;
    // 0x801E29E4: addiu       $t8, $t8, 0xA60
    ctx->r24 = ADD32(ctx->r24, 0XA60);
    // 0x801E29E8: sw          $t8, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r24;
    // 0x801E29EC: beq         $t2, $zero, L_801E2EAC
    if (ctx->r10 == 0) {
        // 0x801E29F0: sw          $a3, 0x0($v0)
        MEM_W(0X0, ctx->r2) = ctx->r7;
            goto L_801E2EAC;
    }
    // 0x801E29F0: sw          $a3, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r7;
    // 0x801E29F4: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x801E29F8: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x801E29FC: addiu       $t9, $v0, 0x8
    ctx->r25 = ADD32(ctx->r2, 0X8);
    // 0x801E2A00: sw          $t9, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r25;
    // 0x801E2A04: sw          $t0, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r8;
    // 0x801E2A08: sw          $a2, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r6;
    // 0x801E2A0C: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x801E2A10: ori         $at, $at, 0x280
    ctx->r1 = ctx->r1 | 0X280;
    // 0x801E2A14: addiu       $t6, $v0, 0x8
    ctx->r14 = ADD32(ctx->r2, 0X8);
    // 0x801E2A18: sw          $t6, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r14;
    // 0x801E2A1C: addu        $t7, $a1, $at
    ctx->r15 = ADD32(ctx->r5, ctx->r1);
    // 0x801E2A20: sw          $t7, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r15;
    // 0x801E2A24: sw          $v1, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r3;
    // 0x801E2A28: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x801E2A2C: lui         $t9, 0x801F
    ctx->r25 = S32(0X801F << 16);
    // 0x801E2A30: addiu       $t8, $v0, 0x8
    ctx->r24 = ADD32(ctx->r2, 0X8);
    // 0x801E2A34: sw          $t8, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r24;
    // 0x801E2A38: addiu       $t9, $t9, 0x6D8
    ctx->r25 = ADD32(ctx->r25, 0X6D8);
    // 0x801E2A3C: sw          $t9, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r25;
    // 0x801E2A40: sw          $a3, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r7;
    // 0x801E2A44: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x801E2A48: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x801E2A4C: addiu       $t6, $v0, 0x8
    ctx->r14 = ADD32(ctx->r2, 0X8);
    // 0x801E2A50: sw          $t6, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r14;
    // 0x801E2A54: sw          $t0, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r8;
    // 0x801E2A58: sw          $a2, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r6;
    // 0x801E2A5C: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x801E2A60: ori         $at, $at, 0x180
    ctx->r1 = ctx->r1 | 0X180;
    // 0x801E2A64: addiu       $t7, $v0, 0x8
    ctx->r15 = ADD32(ctx->r2, 0X8);
    // 0x801E2A68: sw          $t7, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r15;
    // 0x801E2A6C: addu        $t8, $a1, $at
    ctx->r24 = ADD32(ctx->r5, ctx->r1);
    // 0x801E2A70: sw          $t8, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r24;
    // 0x801E2A74: sw          $v1, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r3;
    // 0x801E2A78: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x801E2A7C: lui         $t6, 0x801F
    ctx->r14 = S32(0X801F << 16);
    // 0x801E2A80: addiu       $t9, $v0, 0x8
    ctx->r25 = ADD32(ctx->r2, 0X8);
    // 0x801E2A84: sw          $t9, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r25;
    // 0x801E2A88: addiu       $t6, $t6, 0x7D0
    ctx->r14 = ADD32(ctx->r14, 0X7D0);
    // 0x801E2A8C: sw          $t6, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r14;
    // 0x801E2A90: sw          $a3, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r7;
    // 0x801E2A94: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x801E2A98: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x801E2A9C: addiu       $t7, $v0, 0x8
    ctx->r15 = ADD32(ctx->r2, 0X8);
    // 0x801E2AA0: sw          $t7, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r15;
    // 0x801E2AA4: ori         $at, $at, 0x480
    ctx->r1 = ctx->r1 | 0X480;
    // 0x801E2AA8: addu        $t4, $a1, $at
    ctx->r12 = ADD32(ctx->r5, ctx->r1);
    // 0x801E2AAC: sw          $t4, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r12;
    // 0x801E2AB0: sw          $a2, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r6;
    // 0x801E2AB4: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x801E2AB8: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x801E2ABC: addiu       $t8, $v0, 0x8
    ctx->r24 = ADD32(ctx->r2, 0X8);
    // 0x801E2AC0: sw          $t8, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r24;
    // 0x801E2AC4: ori         $at, $at, 0x4C0
    ctx->r1 = ctx->r1 | 0X4C0;
    // 0x801E2AC8: addu        $t0, $a1, $at
    ctx->r8 = ADD32(ctx->r5, ctx->r1);
    // 0x801E2ACC: sw          $t0, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r8;
    // 0x801E2AD0: sw          $v1, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r3;
    // 0x801E2AD4: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x801E2AD8: lui         $t6, 0x801F
    ctx->r14 = S32(0X801F << 16);
    // 0x801E2ADC: addiu       $t9, $v0, 0x8
    ctx->r25 = ADD32(ctx->r2, 0X8);
    // 0x801E2AE0: sw          $t9, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r25;
    // 0x801E2AE4: addiu       $t6, $t6, 0x1040
    ctx->r14 = ADD32(ctx->r14, 0X1040);
    // 0x801E2AE8: sw          $t6, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r14;
    // 0x801E2AEC: sw          $a3, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r7;
    // 0x801E2AF0: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x801E2AF4: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x801E2AF8: sw          $v0, 0xDC($sp)
    MEM_W(0XDC, ctx->r29) = ctx->r2;
    // 0x801E2AFC: addiu       $t7, $v0, 0x8
    ctx->r15 = ADD32(ctx->r2, 0X8);
    // 0x801E2B00: sw          $t7, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r15;
    // 0x801E2B04: lw          $t8, 0xDC($sp)
    ctx->r24 = MEM_W(ctx->r29, 0XDC);
    // 0x801E2B08: ori         $at, $at, 0x380
    ctx->r1 = ctx->r1 | 0X380;
    // 0x801E2B0C: addu        $t5, $a1, $at
    ctx->r13 = ADD32(ctx->r5, ctx->r1);
    // 0x801E2B10: sw          $t5, 0x4($t8)
    MEM_W(0X4, ctx->r24) = ctx->r13;
    // 0x801E2B14: sw          $a2, 0x0($t8)
    MEM_W(0X0, ctx->r24) = ctx->r6;
    // 0x801E2B18: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x801E2B1C: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x801E2B20: addiu       $t9, $v0, 0x8
    ctx->r25 = ADD32(ctx->r2, 0X8);
    // 0x801E2B24: sw          $t9, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r25;
    // 0x801E2B28: ori         $at, $at, 0x3C0
    ctx->r1 = ctx->r1 | 0X3C0;
    // 0x801E2B2C: addu        $t1, $a1, $at
    ctx->r9 = ADD32(ctx->r5, ctx->r1);
    // 0x801E2B30: sw          $t1, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r9;
    // 0x801E2B34: sw          $v1, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r3;
    // 0x801E2B38: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x801E2B3C: lui         $t8, 0x801F
    ctx->r24 = S32(0X801F << 16);
    // 0x801E2B40: sw          $v0, 0xD4($sp)
    MEM_W(0XD4, ctx->r29) = ctx->r2;
    // 0x801E2B44: addiu       $t6, $v0, 0x8
    ctx->r14 = ADD32(ctx->r2, 0X8);
    // 0x801E2B48: sw          $t6, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r14;
    // 0x801E2B4C: lw          $t7, 0xD4($sp)
    ctx->r15 = MEM_W(ctx->r29, 0XD4);
    // 0x801E2B50: addiu       $t8, $t8, 0x1108
    ctx->r24 = ADD32(ctx->r24, 0X1108);
    // 0x801E2B54: sw          $t8, 0x4($t7)
    MEM_W(0X4, ctx->r15) = ctx->r24;
    // 0x801E2B58: sw          $a3, 0x0($t7)
    MEM_W(0X0, ctx->r15) = ctx->r7;
    // 0x801E2B5C: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x801E2B60: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x801E2B64: sw          $v0, 0xD0($sp)
    MEM_W(0XD0, ctx->r29) = ctx->r2;
    // 0x801E2B68: addiu       $t9, $v0, 0x8
    ctx->r25 = ADD32(ctx->r2, 0X8);
    // 0x801E2B6C: sw          $t9, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r25;
    // 0x801E2B70: lw          $t6, 0xD0($sp)
    ctx->r14 = MEM_W(ctx->r29, 0XD0);
    // 0x801E2B74: ori         $at, $at, 0x500
    ctx->r1 = ctx->r1 | 0X500;
    // 0x801E2B78: sw          $a2, 0x0($t6)
    MEM_W(0X0, ctx->r14) = ctx->r6;
    // 0x801E2B7C: sw          $t0, 0x4($t6)
    MEM_W(0X4, ctx->r14) = ctx->r8;
    // 0x801E2B80: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x801E2B84: addu        $t2, $a1, $at
    ctx->r10 = ADD32(ctx->r5, ctx->r1);
    // 0x801E2B88: sw          $v0, 0xCC($sp)
    MEM_W(0XCC, ctx->r29) = ctx->r2;
    // 0x801E2B8C: addiu       $t8, $v0, 0x8
    ctx->r24 = ADD32(ctx->r2, 0X8);
    // 0x801E2B90: sw          $t8, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r24;
    // 0x801E2B94: lw          $t7, 0xCC($sp)
    ctx->r15 = MEM_W(ctx->r29, 0XCC);
    // 0x801E2B98: lui         $t8, 0x801F
    ctx->r24 = S32(0X801F << 16);
    // 0x801E2B9C: sw          $v1, 0x0($t7)
    MEM_W(0X0, ctx->r15) = ctx->r3;
    // 0x801E2BA0: sw          $t2, 0x4($t7)
    MEM_W(0X4, ctx->r15) = ctx->r10;
    // 0x801E2BA4: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x801E2BA8: addiu       $t8, $t8, 0x480
    ctx->r24 = ADD32(ctx->r24, 0X480);
    // 0x801E2BAC: sw          $v0, 0xC8($sp)
    MEM_W(0XC8, ctx->r29) = ctx->r2;
    // 0x801E2BB0: addiu       $t9, $v0, 0x8
    ctx->r25 = ADD32(ctx->r2, 0X8);
    // 0x801E2BB4: sw          $t9, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r25;
    // 0x801E2BB8: lw          $t6, 0xC8($sp)
    ctx->r14 = MEM_W(ctx->r29, 0XC8);
    // 0x801E2BBC: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x801E2BC0: sw          $a3, 0x0($t6)
    MEM_W(0X0, ctx->r14) = ctx->r7;
    // 0x801E2BC4: sw          $t8, 0x4($t6)
    MEM_W(0X4, ctx->r14) = ctx->r24;
    // 0x801E2BC8: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x801E2BCC: ori         $at, $at, 0x400
    ctx->r1 = ctx->r1 | 0X400;
    // 0x801E2BD0: sw          $v0, 0xC4($sp)
    MEM_W(0XC4, ctx->r29) = ctx->r2;
    // 0x801E2BD4: addiu       $t7, $v0, 0x8
    ctx->r15 = ADD32(ctx->r2, 0X8);
    // 0x801E2BD8: sw          $t7, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r15;
    // 0x801E2BDC: lw          $t9, 0xC4($sp)
    ctx->r25 = MEM_W(ctx->r29, 0XC4);
    // 0x801E2BE0: addu        $t3, $a1, $at
    ctx->r11 = ADD32(ctx->r5, ctx->r1);
    // 0x801E2BE4: sw          $a2, 0x0($t9)
    MEM_W(0X0, ctx->r25) = ctx->r6;
    // 0x801E2BE8: sw          $t1, 0x4($t9)
    MEM_W(0X4, ctx->r25) = ctx->r9;
    // 0x801E2BEC: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x801E2BF0: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x801E2BF4: sw          $v0, 0xC0($sp)
    MEM_W(0XC0, ctx->r29) = ctx->r2;
    // 0x801E2BF8: addiu       $t8, $v0, 0x8
    ctx->r24 = ADD32(ctx->r2, 0X8);
    // 0x801E2BFC: sw          $t8, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r24;
    // 0x801E2C00: lw          $t6, 0xC0($sp)
    ctx->r14 = MEM_W(ctx->r29, 0XC0);
    // 0x801E2C04: lui         $t8, 0x801F
    ctx->r24 = S32(0X801F << 16);
    // 0x801E2C08: sw          $v1, 0x0($t6)
    MEM_W(0X0, ctx->r14) = ctx->r3;
    // 0x801E2C0C: lw          $t7, 0xC0($sp)
    ctx->r15 = MEM_W(ctx->r29, 0XC0);
    // 0x801E2C10: addiu       $t8, $t8, 0x578
    ctx->r24 = ADD32(ctx->r24, 0X578);
    // 0x801E2C14: sw          $t3, 0x4($t7)
    MEM_W(0X4, ctx->r15) = ctx->r11;
    // 0x801E2C18: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x801E2C1C: ori         $at, $at, 0x540
    ctx->r1 = ctx->r1 | 0X540;
    // 0x801E2C20: addiu       $t9, $v0, 0x8
    ctx->r25 = ADD32(ctx->r2, 0X8);
    // 0x801E2C24: sw          $t9, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r25;
    // 0x801E2C28: sw          $t8, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r24;
    // 0x801E2C2C: sw          $a3, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r7;
    // 0x801E2C30: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x801E2C34: nop

    // 0x801E2C38: sw          $v0, 0xB8($sp)
    MEM_W(0XB8, ctx->r29) = ctx->r2;
    // 0x801E2C3C: addiu       $t6, $v0, 0x8
    ctx->r14 = ADD32(ctx->r2, 0X8);
    // 0x801E2C40: sw          $t6, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r14;
    // 0x801E2C44: lw          $t7, 0xB8($sp)
    ctx->r15 = MEM_W(ctx->r29, 0XB8);
    // 0x801E2C48: nop

    // 0x801E2C4C: sw          $a2, 0x0($t7)
    MEM_W(0X0, ctx->r15) = ctx->r6;
    // 0x801E2C50: lw          $t9, 0xB8($sp)
    ctx->r25 = MEM_W(ctx->r29, 0XB8);
    // 0x801E2C54: addu        $t7, $a1, $at
    ctx->r15 = ADD32(ctx->r5, ctx->r1);
    // 0x801E2C58: sw          $t2, 0x4($t9)
    MEM_W(0X4, ctx->r25) = ctx->r10;
    // 0x801E2C5C: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x801E2C60: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x801E2C64: sw          $v0, 0xB4($sp)
    MEM_W(0XB4, ctx->r29) = ctx->r2;
    // 0x801E2C68: addiu       $t8, $v0, 0x8
    ctx->r24 = ADD32(ctx->r2, 0X8);
    // 0x801E2C6C: sw          $t8, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r24;
    // 0x801E2C70: lw          $t6, 0xB4($sp)
    ctx->r14 = MEM_W(ctx->r29, 0XB4);
    // 0x801E2C74: ori         $at, $at, 0x440
    ctx->r1 = ctx->r1 | 0X440;
    // 0x801E2C78: sw          $v1, 0x0($t6)
    MEM_W(0X0, ctx->r14) = ctx->r3;
    // 0x801E2C7C: lw          $t9, 0xB4($sp)
    ctx->r25 = MEM_W(ctx->r29, 0XB4);
    // 0x801E2C80: nop

    // 0x801E2C84: sw          $t7, 0x4($t9)
    MEM_W(0X4, ctx->r25) = ctx->r15;
    // 0x801E2C88: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x801E2C8C: lui         $t7, 0x801F
    ctx->r15 = S32(0X801F << 16);
    // 0x801E2C90: sw          $v0, 0xB0($sp)
    MEM_W(0XB0, ctx->r29) = ctx->r2;
    // 0x801E2C94: addiu       $t8, $v0, 0x8
    ctx->r24 = ADD32(ctx->r2, 0X8);
    // 0x801E2C98: sw          $t8, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r24;
    // 0x801E2C9C: lw          $t6, 0xB0($sp)
    ctx->r14 = MEM_W(ctx->r29, 0XB0);
    // 0x801E2CA0: addiu       $t7, $t7, 0x920
    ctx->r15 = ADD32(ctx->r15, 0X920);
    // 0x801E2CA4: sw          $a3, 0x0($t6)
    MEM_W(0X0, ctx->r14) = ctx->r7;
    // 0x801E2CA8: lw          $t9, 0xB0($sp)
    ctx->r25 = MEM_W(ctx->r29, 0XB0);
    // 0x801E2CAC: nop

    // 0x801E2CB0: sw          $t7, 0x4($t9)
    MEM_W(0X4, ctx->r25) = ctx->r15;
    // 0x801E2CB4: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x801E2CB8: addu        $t7, $a1, $at
    ctx->r15 = ADD32(ctx->r5, ctx->r1);
    // 0x801E2CBC: addiu       $t8, $v0, 0x8
    ctx->r24 = ADD32(ctx->r2, 0X8);
    // 0x801E2CC0: sw          $t8, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r24;
    // 0x801E2CC4: sw          $t3, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r11;
    // 0x801E2CC8: sw          $a2, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r6;
    // 0x801E2CCC: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x801E2CD0: lui         $t8, 0x801F
    ctx->r24 = S32(0X801F << 16);
    // 0x801E2CD4: addiu       $t6, $v0, 0x8
    ctx->r14 = ADD32(ctx->r2, 0X8);
    // 0x801E2CD8: sw          $t6, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r14;
    // 0x801E2CDC: sw          $t7, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r15;
    // 0x801E2CE0: sw          $v1, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r3;
    // 0x801E2CE4: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x801E2CE8: addiu       $t8, $t8, 0x9C0
    ctx->r24 = ADD32(ctx->r24, 0X9C0);
    // 0x801E2CEC: addiu       $t9, $v0, 0x8
    ctx->r25 = ADD32(ctx->r2, 0X8);
    // 0x801E2CF0: sw          $t9, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r25;
    // 0x801E2CF4: sw          $t8, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r24;
    // 0x801E2CF8: sw          $a3, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r7;
    // 0x801E2CFC: lw          $t6, 0x138($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X138);
    // 0x801E2D00: lui         $a1, 0xBC00
    ctx->r5 = S32(0XBC00 << 16);
    // 0x801E2D04: lw          $t7, 0x30($t6)
    ctx->r15 = MEM_W(ctx->r14, 0X30);
    // 0x801E2D08: nop

    // 0x801E2D0C: lhu         $t9, 0x3C($t7)
    ctx->r25 = MEM_HU(ctx->r15, 0X3C);
    // 0x801E2D10: nop

    // 0x801E2D14: andi        $t8, $t9, 0x800
    ctx->r24 = ctx->r25 & 0X800;
    // 0x801E2D18: beq         $t8, $zero, L_801E2DE8
    if (ctx->r24 == 0) {
        // 0x801E2D1C: nop
    
            goto L_801E2DE8;
    }
    // 0x801E2D1C: nop

    // 0x801E2D20: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x801E2D24: lui         $a1, 0xBC00
    ctx->r5 = S32(0XBC00 << 16);
    // 0x801E2D28: addiu       $t6, $v0, 0x8
    ctx->r14 = ADD32(ctx->r2, 0X8);
    // 0x801E2D2C: sw          $t6, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r14;
    // 0x801E2D30: ori         $a1, $a1, 0x3006
    ctx->r5 = ctx->r5 | 0X3006;
    // 0x801E2D34: sw          $a1, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r5;
    // 0x801E2D38: sw          $s1, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r17;
    // 0x801E2D3C: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x801E2D40: lui         $t6, 0x801F
    ctx->r14 = S32(0X801F << 16);
    // 0x801E2D44: addiu       $t7, $v0, 0x8
    ctx->r15 = ADD32(ctx->r2, 0X8);
    // 0x801E2D48: sw          $t7, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r15;
    // 0x801E2D4C: sw          $s0, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r16;
    // 0x801E2D50: sw          $a2, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r6;
    // 0x801E2D54: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x801E2D58: addiu       $t6, $t6, 0x5620
    ctx->r14 = ADD32(ctx->r14, 0X5620);
    // 0x801E2D5C: addiu       $t9, $v0, 0x8
    ctx->r25 = ADD32(ctx->r2, 0X8);
    // 0x801E2D60: sw          $t9, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r25;
    // 0x801E2D64: sw          $t4, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r12;
    // 0x801E2D68: sw          $v1, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r3;
    // 0x801E2D6C: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x801E2D70: nop

    // 0x801E2D74: addiu       $t8, $v0, 0x8
    ctx->r24 = ADD32(ctx->r2, 0X8);
    // 0x801E2D78: sw          $t8, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r24;
    // 0x801E2D7C: sw          $t6, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r14;
    // 0x801E2D80: sw          $a3, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r7;
    // 0x801E2D84: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x801E2D88: nop

    // 0x801E2D8C: addiu       $t7, $v0, 0x8
    ctx->r15 = ADD32(ctx->r2, 0X8);
    // 0x801E2D90: sw          $t7, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r15;
    // 0x801E2D94: sw          $s1, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r17;
    // 0x801E2D98: sw          $a1, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r5;
    // 0x801E2D9C: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x801E2DA0: lui         $t7, 0x801F
    ctx->r15 = S32(0X801F << 16);
    // 0x801E2DA4: addiu       $t9, $v0, 0x8
    ctx->r25 = ADD32(ctx->r2, 0X8);
    // 0x801E2DA8: sw          $t9, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r25;
    // 0x801E2DAC: sw          $s0, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r16;
    // 0x801E2DB0: sw          $a2, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r6;
    // 0x801E2DB4: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x801E2DB8: addiu       $t7, $t7, 0x5C18
    ctx->r15 = ADD32(ctx->r15, 0X5C18);
    // 0x801E2DBC: addiu       $t8, $v0, 0x8
    ctx->r24 = ADD32(ctx->r2, 0X8);
    // 0x801E2DC0: sw          $t8, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r24;
    // 0x801E2DC4: sw          $t5, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r13;
    // 0x801E2DC8: sw          $v1, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r3;
    // 0x801E2DCC: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x801E2DD0: nop

    // 0x801E2DD4: addiu       $t6, $v0, 0x8
    ctx->r14 = ADD32(ctx->r2, 0X8);
    // 0x801E2DD8: sw          $t6, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r14;
    // 0x801E2DDC: sw          $t7, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r15;
    // 0x801E2DE0: b           L_801E338C
    // 0x801E2DE4: sw          $a3, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r7;
        goto L_801E338C;
    // 0x801E2DE4: sw          $a3, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r7;
L_801E2DE8:
    // 0x801E2DE8: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x801E2DEC: ori         $a1, $a1, 0x3006
    ctx->r5 = ctx->r5 | 0X3006;
    // 0x801E2DF0: addiu       $t9, $v0, 0x8
    ctx->r25 = ADD32(ctx->r2, 0X8);
    // 0x801E2DF4: sw          $t9, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r25;
    // 0x801E2DF8: sw          $s1, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r17;
    // 0x801E2DFC: sw          $a1, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r5;
    // 0x801E2E00: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x801E2E04: lui         $t9, 0x801F
    ctx->r25 = S32(0X801F << 16);
    // 0x801E2E08: addiu       $t8, $v0, 0x8
    ctx->r24 = ADD32(ctx->r2, 0X8);
    // 0x801E2E0C: sw          $t8, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r24;
    // 0x801E2E10: sw          $s0, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r16;
    // 0x801E2E14: sw          $a2, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r6;
    // 0x801E2E18: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x801E2E1C: addiu       $t9, $t9, 0xD50
    ctx->r25 = ADD32(ctx->r25, 0XD50);
    // 0x801E2E20: addiu       $t6, $v0, 0x8
    ctx->r14 = ADD32(ctx->r2, 0X8);
    // 0x801E2E24: sw          $t6, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r14;
    // 0x801E2E28: sw          $t4, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r12;
    // 0x801E2E2C: sw          $v1, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r3;
    // 0x801E2E30: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x801E2E34: nop

    // 0x801E2E38: addiu       $t7, $v0, 0x8
    ctx->r15 = ADD32(ctx->r2, 0X8);
    // 0x801E2E3C: sw          $t7, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r15;
    // 0x801E2E40: sw          $t9, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r25;
    // 0x801E2E44: sw          $a3, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r7;
    // 0x801E2E48: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x801E2E4C: nop

    // 0x801E2E50: addiu       $t8, $v0, 0x8
    ctx->r24 = ADD32(ctx->r2, 0X8);
    // 0x801E2E54: sw          $t8, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r24;
    // 0x801E2E58: sw          $s1, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r17;
    // 0x801E2E5C: sw          $a1, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r5;
    // 0x801E2E60: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x801E2E64: lui         $t8, 0x801F
    ctx->r24 = S32(0X801F << 16);
    // 0x801E2E68: addiu       $t6, $v0, 0x8
    ctx->r14 = ADD32(ctx->r2, 0X8);
    // 0x801E2E6C: sw          $t6, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r14;
    // 0x801E2E70: sw          $s0, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r16;
    // 0x801E2E74: sw          $a2, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r6;
    // 0x801E2E78: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x801E2E7C: addiu       $t8, $t8, 0xEC8
    ctx->r24 = ADD32(ctx->r24, 0XEC8);
    // 0x801E2E80: addiu       $t7, $v0, 0x8
    ctx->r15 = ADD32(ctx->r2, 0X8);
    // 0x801E2E84: sw          $t7, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r15;
    // 0x801E2E88: sw          $t5, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r13;
    // 0x801E2E8C: sw          $v1, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r3;
    // 0x801E2E90: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x801E2E94: nop

    // 0x801E2E98: addiu       $t9, $v0, 0x8
    ctx->r25 = ADD32(ctx->r2, 0X8);
    // 0x801E2E9C: sw          $t9, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r25;
    // 0x801E2EA0: sw          $t8, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r24;
    // 0x801E2EA4: b           L_801E338C
    // 0x801E2EA8: sw          $a3, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r7;
        goto L_801E338C;
    // 0x801E2EA8: sw          $a3, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r7;
L_801E2EAC:
    // 0x801E2EAC: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x801E2EB0: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x801E2EB4: addiu       $t6, $v0, 0x8
    ctx->r14 = ADD32(ctx->r2, 0X8);
    // 0x801E2EB8: sw          $t6, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r14;
    // 0x801E2EBC: sw          $t0, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r8;
    // 0x801E2EC0: sw          $a2, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r6;
    // 0x801E2EC4: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x801E2EC8: ori         $at, $at, 0x180
    ctx->r1 = ctx->r1 | 0X180;
    // 0x801E2ECC: addiu       $t7, $v0, 0x8
    ctx->r15 = ADD32(ctx->r2, 0X8);
    // 0x801E2ED0: sw          $t7, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r15;
    // 0x801E2ED4: addu        $t9, $a1, $at
    ctx->r25 = ADD32(ctx->r5, ctx->r1);
    // 0x801E2ED8: sw          $t9, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r25;
    // 0x801E2EDC: sw          $v1, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r3;
    // 0x801E2EE0: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x801E2EE4: lui         $t6, 0x801F
    ctx->r14 = S32(0X801F << 16);
    // 0x801E2EE8: addiu       $t8, $v0, 0x8
    ctx->r24 = ADD32(ctx->r2, 0X8);
    // 0x801E2EEC: sw          $t8, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r24;
    // 0x801E2EF0: addiu       $t6, $t6, 0x6D8
    ctx->r14 = ADD32(ctx->r14, 0X6D8);
    // 0x801E2EF4: sw          $t6, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r14;
    // 0x801E2EF8: sw          $a3, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r7;
    // 0x801E2EFC: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x801E2F00: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x801E2F04: addiu       $t7, $v0, 0x8
    ctx->r15 = ADD32(ctx->r2, 0X8);
    // 0x801E2F08: sw          $t7, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r15;
    // 0x801E2F0C: sw          $t0, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r8;
    // 0x801E2F10: sw          $a2, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r6;
    // 0x801E2F14: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x801E2F18: ori         $at, $at, 0x280
    ctx->r1 = ctx->r1 | 0X280;
    // 0x801E2F1C: addiu       $t9, $v0, 0x8
    ctx->r25 = ADD32(ctx->r2, 0X8);
    // 0x801E2F20: sw          $t9, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r25;
    // 0x801E2F24: addu        $t8, $a1, $at
    ctx->r24 = ADD32(ctx->r5, ctx->r1);
    // 0x801E2F28: sw          $t8, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r24;
    // 0x801E2F2C: sw          $v1, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r3;
    // 0x801E2F30: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x801E2F34: lui         $t7, 0x801F
    ctx->r15 = S32(0X801F << 16);
    // 0x801E2F38: addiu       $t6, $v0, 0x8
    ctx->r14 = ADD32(ctx->r2, 0X8);
    // 0x801E2F3C: sw          $t6, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r14;
    // 0x801E2F40: addiu       $t7, $t7, 0x7D0
    ctx->r15 = ADD32(ctx->r15, 0X7D0);
    // 0x801E2F44: sw          $t7, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r15;
    // 0x801E2F48: sw          $a3, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r7;
    // 0x801E2F4C: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x801E2F50: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x801E2F54: addiu       $t9, $v0, 0x8
    ctx->r25 = ADD32(ctx->r2, 0X8);
    // 0x801E2F58: sw          $t9, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r25;
    // 0x801E2F5C: ori         $at, $at, 0x380
    ctx->r1 = ctx->r1 | 0X380;
    // 0x801E2F60: addu        $t5, $a1, $at
    ctx->r13 = ADD32(ctx->r5, ctx->r1);
    // 0x801E2F64: sw          $t5, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r13;
    // 0x801E2F68: sw          $a2, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r6;
    // 0x801E2F6C: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x801E2F70: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x801E2F74: addiu       $t8, $v0, 0x8
    ctx->r24 = ADD32(ctx->r2, 0X8);
    // 0x801E2F78: sw          $t8, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r24;
    // 0x801E2F7C: ori         $at, $at, 0x3C0
    ctx->r1 = ctx->r1 | 0X3C0;
    // 0x801E2F80: addu        $t1, $a1, $at
    ctx->r9 = ADD32(ctx->r5, ctx->r1);
    // 0x801E2F84: sw          $t1, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r9;
    // 0x801E2F88: sw          $v1, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r3;
    // 0x801E2F8C: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x801E2F90: lui         $t7, 0x801F
    ctx->r15 = S32(0X801F << 16);
    // 0x801E2F94: addiu       $t6, $v0, 0x8
    ctx->r14 = ADD32(ctx->r2, 0X8);
    // 0x801E2F98: sw          $t6, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r14;
    // 0x801E2F9C: addiu       $t7, $t7, 0x1040
    ctx->r15 = ADD32(ctx->r15, 0X1040);
    // 0x801E2FA0: sw          $t7, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r15;
    // 0x801E2FA4: sw          $a3, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r7;
    // 0x801E2FA8: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x801E2FAC: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x801E2FB0: sw          $v0, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r2;
    // 0x801E2FB4: addiu       $t9, $v0, 0x8
    ctx->r25 = ADD32(ctx->r2, 0X8);
    // 0x801E2FB8: sw          $t9, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r25;
    // 0x801E2FBC: lw          $t8, 0x3C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X3C);
    // 0x801E2FC0: ori         $at, $at, 0x480
    ctx->r1 = ctx->r1 | 0X480;
    // 0x801E2FC4: sw          $a2, 0x0($t8)
    MEM_W(0X0, ctx->r24) = ctx->r6;
    // 0x801E2FC8: lw          $t6, 0x3C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X3C);
    // 0x801E2FCC: addu        $t4, $a1, $at
    ctx->r12 = ADD32(ctx->r5, ctx->r1);
    // 0x801E2FD0: sw          $t4, 0x4($t6)
    MEM_W(0X4, ctx->r14) = ctx->r12;
    // 0x801E2FD4: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x801E2FD8: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x801E2FDC: addiu       $t7, $v0, 0x8
    ctx->r15 = ADD32(ctx->r2, 0X8);
    // 0x801E2FE0: sw          $t7, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r15;
    // 0x801E2FE4: ori         $at, $at, 0x4C0
    ctx->r1 = ctx->r1 | 0X4C0;
    // 0x801E2FE8: addu        $t0, $a1, $at
    ctx->r8 = ADD32(ctx->r5, ctx->r1);
    // 0x801E2FEC: sw          $t0, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r8;
    // 0x801E2FF0: sw          $v1, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r3;
    // 0x801E2FF4: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x801E2FF8: lui         $t6, 0x801F
    ctx->r14 = S32(0X801F << 16);
    // 0x801E2FFC: sw          $v0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r2;
    // 0x801E3000: addiu       $t9, $v0, 0x8
    ctx->r25 = ADD32(ctx->r2, 0X8);
    // 0x801E3004: sw          $t9, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r25;
    // 0x801E3008: lw          $t8, 0x34($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X34);
    // 0x801E300C: addiu       $t6, $t6, 0x1108
    ctx->r14 = ADD32(ctx->r14, 0X1108);
    // 0x801E3010: sw          $a3, 0x0($t8)
    MEM_W(0X0, ctx->r24) = ctx->r7;
    // 0x801E3014: lw          $t7, 0x34($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X34);
    // 0x801E3018: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x801E301C: sw          $t6, 0x4($t7)
    MEM_W(0X4, ctx->r15) = ctx->r14;
    // 0x801E3020: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x801E3024: ori         $at, $at, 0x400
    ctx->r1 = ctx->r1 | 0X400;
    // 0x801E3028: sw          $v0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r2;
    // 0x801E302C: addiu       $t9, $v0, 0x8
    ctx->r25 = ADD32(ctx->r2, 0X8);
    // 0x801E3030: sw          $t9, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r25;
    // 0x801E3034: lw          $t8, 0x30($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X30);
    // 0x801E3038: addu        $t3, $a1, $at
    ctx->r11 = ADD32(ctx->r5, ctx->r1);
    // 0x801E303C: sw          $a2, 0x0($t8)
    MEM_W(0X0, ctx->r24) = ctx->r6;
    // 0x801E3040: lw          $t6, 0x30($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X30);
    // 0x801E3044: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x801E3048: sw          $t1, 0x4($t6)
    MEM_W(0X4, ctx->r14) = ctx->r9;
    // 0x801E304C: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x801E3050: ori         $at, $at, 0x500
    ctx->r1 = ctx->r1 | 0X500;
    // 0x801E3054: sw          $v0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r2;
    // 0x801E3058: addiu       $t7, $v0, 0x8
    ctx->r15 = ADD32(ctx->r2, 0X8);
    // 0x801E305C: sw          $t7, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r15;
    // 0x801E3060: lw          $t9, 0x2C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X2C);
    // 0x801E3064: addu        $t2, $a1, $at
    ctx->r10 = ADD32(ctx->r5, ctx->r1);
    // 0x801E3068: sw          $v1, 0x0($t9)
    MEM_W(0X0, ctx->r25) = ctx->r3;
    // 0x801E306C: lw          $t8, 0x2C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X2C);
    // 0x801E3070: lui         $t9, 0x801F
    ctx->r25 = S32(0X801F << 16);
    // 0x801E3074: sw          $t3, 0x4($t8)
    MEM_W(0X4, ctx->r24) = ctx->r11;
    // 0x801E3078: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x801E307C: addiu       $t9, $t9, 0x480
    ctx->r25 = ADD32(ctx->r25, 0X480);
    // 0x801E3080: sw          $v0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r2;
    // 0x801E3084: addiu       $t6, $v0, 0x8
    ctx->r14 = ADD32(ctx->r2, 0X8);
    // 0x801E3088: sw          $t6, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r14;
    // 0x801E308C: lw          $t7, 0x28($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X28);
    // 0x801E3090: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x801E3094: sw          $a3, 0x0($t7)
    MEM_W(0X0, ctx->r15) = ctx->r7;
    // 0x801E3098: lw          $t8, 0x28($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X28);
    // 0x801E309C: ori         $at, $at, 0x440
    ctx->r1 = ctx->r1 | 0X440;
    // 0x801E30A0: sw          $t9, 0x4($t8)
    MEM_W(0X4, ctx->r24) = ctx->r25;
    // 0x801E30A4: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x801E30A8: nop

    // 0x801E30AC: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
    // 0x801E30B0: addiu       $t6, $v0, 0x8
    ctx->r14 = ADD32(ctx->r2, 0X8);
    // 0x801E30B4: sw          $t6, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r14;
    // 0x801E30B8: lw          $t7, 0x24($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X24);
    // 0x801E30BC: nop

    // 0x801E30C0: sw          $a2, 0x0($t7)
    MEM_W(0X0, ctx->r15) = ctx->r6;
    // 0x801E30C4: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    // 0x801E30C8: nop

    // 0x801E30CC: sw          $t0, 0x4($t9)
    MEM_W(0X4, ctx->r25) = ctx->r8;
    // 0x801E30D0: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x801E30D4: nop

    // 0x801E30D8: sw          $v0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r2;
    // 0x801E30DC: addiu       $t8, $v0, 0x8
    ctx->r24 = ADD32(ctx->r2, 0X8);
    // 0x801E30E0: sw          $t8, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r24;
    // 0x801E30E4: lw          $t6, 0x20($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X20);
    // 0x801E30E8: lui         $t8, 0x801F
    ctx->r24 = S32(0X801F << 16);
    // 0x801E30EC: sw          $v1, 0x0($t6)
    MEM_W(0X0, ctx->r14) = ctx->r3;
    // 0x801E30F0: lw          $t7, 0x20($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X20);
    // 0x801E30F4: addiu       $t8, $t8, 0x578
    ctx->r24 = ADD32(ctx->r24, 0X578);
    // 0x801E30F8: sw          $t2, 0x4($t7)
    MEM_W(0X4, ctx->r15) = ctx->r10;
    // 0x801E30FC: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x801E3100: nop

    // 0x801E3104: addiu       $t9, $v0, 0x8
    ctx->r25 = ADD32(ctx->r2, 0X8);
    // 0x801E3108: sw          $t9, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r25;
    // 0x801E310C: sw          $t8, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r24;
    // 0x801E3110: sw          $a3, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r7;
    // 0x801E3114: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x801E3118: nop

    // 0x801E311C: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    // 0x801E3120: addiu       $t6, $v0, 0x8
    ctx->r14 = ADD32(ctx->r2, 0X8);
    // 0x801E3124: sw          $t6, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r14;
    // 0x801E3128: lw          $t7, 0x18($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X18);
    // 0x801E312C: nop

    // 0x801E3130: sw          $a2, 0x0($t7)
    MEM_W(0X0, ctx->r15) = ctx->r6;
    // 0x801E3134: lw          $t9, 0x18($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X18);
    // 0x801E3138: addu        $t7, $a1, $at
    ctx->r15 = ADD32(ctx->r5, ctx->r1);
    // 0x801E313C: sw          $t3, 0x4($t9)
    MEM_W(0X4, ctx->r25) = ctx->r11;
    // 0x801E3140: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x801E3144: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x801E3148: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    // 0x801E314C: addiu       $t8, $v0, 0x8
    ctx->r24 = ADD32(ctx->r2, 0X8);
    // 0x801E3150: sw          $t8, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r24;
    // 0x801E3154: lw          $t6, 0x14($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X14);
    // 0x801E3158: ori         $at, $at, 0x540
    ctx->r1 = ctx->r1 | 0X540;
    // 0x801E315C: sw          $v1, 0x0($t6)
    MEM_W(0X0, ctx->r14) = ctx->r3;
    // 0x801E3160: lw          $t9, 0x14($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X14);
    // 0x801E3164: nop

    // 0x801E3168: sw          $t7, 0x4($t9)
    MEM_W(0X4, ctx->r25) = ctx->r15;
    // 0x801E316C: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x801E3170: lui         $t7, 0x801F
    ctx->r15 = S32(0X801F << 16);
    // 0x801E3174: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x801E3178: addiu       $t8, $v0, 0x8
    ctx->r24 = ADD32(ctx->r2, 0X8);
    // 0x801E317C: sw          $t8, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r24;
    // 0x801E3180: lw          $t6, 0x10($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X10);
    // 0x801E3184: addiu       $t7, $t7, 0x920
    ctx->r15 = ADD32(ctx->r15, 0X920);
    // 0x801E3188: sw          $a3, 0x0($t6)
    MEM_W(0X0, ctx->r14) = ctx->r7;
    // 0x801E318C: lw          $t9, 0x10($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X10);
    // 0x801E3190: nop

    // 0x801E3194: sw          $t7, 0x4($t9)
    MEM_W(0X4, ctx->r25) = ctx->r15;
    // 0x801E3198: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x801E319C: addu        $t7, $a1, $at
    ctx->r15 = ADD32(ctx->r5, ctx->r1);
    // 0x801E31A0: addiu       $t8, $v0, 0x8
    ctx->r24 = ADD32(ctx->r2, 0X8);
    // 0x801E31A4: sw          $t8, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r24;
    // 0x801E31A8: sw          $t2, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r10;
    // 0x801E31AC: sw          $a2, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r6;
    // 0x801E31B0: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x801E31B4: lui         $t8, 0x801F
    ctx->r24 = S32(0X801F << 16);
    // 0x801E31B8: addiu       $t6, $v0, 0x8
    ctx->r14 = ADD32(ctx->r2, 0X8);
    // 0x801E31BC: sw          $t6, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r14;
    // 0x801E31C0: sw          $t7, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r15;
    // 0x801E31C4: sw          $v1, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r3;
    // 0x801E31C8: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x801E31CC: addiu       $t8, $t8, 0x9C0
    ctx->r24 = ADD32(ctx->r24, 0X9C0);
    // 0x801E31D0: addiu       $t9, $v0, 0x8
    ctx->r25 = ADD32(ctx->r2, 0X8);
    // 0x801E31D4: sw          $t9, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r25;
    // 0x801E31D8: sw          $t8, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r24;
    // 0x801E31DC: sw          $a3, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r7;
    // 0x801E31E0: lw          $t6, 0x138($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X138);
    // 0x801E31E4: lui         $a1, 0xBC00
    ctx->r5 = S32(0XBC00 << 16);
    // 0x801E31E8: lw          $t7, 0x30($t6)
    ctx->r15 = MEM_W(ctx->r14, 0X30);
    // 0x801E31EC: nop

    // 0x801E31F0: lhu         $t9, 0x3C($t7)
    ctx->r25 = MEM_HU(ctx->r15, 0X3C);
    // 0x801E31F4: nop

    // 0x801E31F8: andi        $t8, $t9, 0x800
    ctx->r24 = ctx->r25 & 0X800;
    // 0x801E31FC: beq         $t8, $zero, L_801E32CC
    if (ctx->r24 == 0) {
        // 0x801E3200: nop
    
            goto L_801E32CC;
    }
    // 0x801E3200: nop

    // 0x801E3204: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x801E3208: lui         $a1, 0xBC00
    ctx->r5 = S32(0XBC00 << 16);
    // 0x801E320C: addiu       $t6, $v0, 0x8
    ctx->r14 = ADD32(ctx->r2, 0X8);
    // 0x801E3210: sw          $t6, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r14;
    // 0x801E3214: ori         $a1, $a1, 0x3006
    ctx->r5 = ctx->r5 | 0X3006;
    // 0x801E3218: sw          $a1, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r5;
    // 0x801E321C: sw          $s1, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r17;
    // 0x801E3220: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x801E3224: lui         $t6, 0x801F
    ctx->r14 = S32(0X801F << 16);
    // 0x801E3228: addiu       $t7, $v0, 0x8
    ctx->r15 = ADD32(ctx->r2, 0X8);
    // 0x801E322C: sw          $t7, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r15;
    // 0x801E3230: sw          $s0, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r16;
    // 0x801E3234: sw          $a2, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r6;
    // 0x801E3238: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x801E323C: addiu       $t6, $t6, 0x5620
    ctx->r14 = ADD32(ctx->r14, 0X5620);
    // 0x801E3240: addiu       $t9, $v0, 0x8
    ctx->r25 = ADD32(ctx->r2, 0X8);
    // 0x801E3244: sw          $t9, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r25;
    // 0x801E3248: sw          $t5, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r13;
    // 0x801E324C: sw          $v1, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r3;
    // 0x801E3250: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x801E3254: nop

    // 0x801E3258: addiu       $t8, $v0, 0x8
    ctx->r24 = ADD32(ctx->r2, 0X8);
    // 0x801E325C: sw          $t8, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r24;
    // 0x801E3260: sw          $t6, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r14;
    // 0x801E3264: sw          $a3, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r7;
    // 0x801E3268: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x801E326C: nop

    // 0x801E3270: addiu       $t7, $v0, 0x8
    ctx->r15 = ADD32(ctx->r2, 0X8);
    // 0x801E3274: sw          $t7, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r15;
    // 0x801E3278: sw          $s1, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r17;
    // 0x801E327C: sw          $a1, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r5;
    // 0x801E3280: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x801E3284: lui         $t7, 0x801F
    ctx->r15 = S32(0X801F << 16);
    // 0x801E3288: addiu       $t9, $v0, 0x8
    ctx->r25 = ADD32(ctx->r2, 0X8);
    // 0x801E328C: sw          $t9, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r25;
    // 0x801E3290: sw          $s0, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r16;
    // 0x801E3294: sw          $a2, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r6;
    // 0x801E3298: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x801E329C: addiu       $t7, $t7, 0x5C18
    ctx->r15 = ADD32(ctx->r15, 0X5C18);
    // 0x801E32A0: addiu       $t8, $v0, 0x8
    ctx->r24 = ADD32(ctx->r2, 0X8);
    // 0x801E32A4: sw          $t8, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r24;
    // 0x801E32A8: sw          $t4, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r12;
    // 0x801E32AC: sw          $v1, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r3;
    // 0x801E32B0: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x801E32B4: nop

    // 0x801E32B8: addiu       $t6, $v0, 0x8
    ctx->r14 = ADD32(ctx->r2, 0X8);
    // 0x801E32BC: sw          $t6, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r14;
    // 0x801E32C0: sw          $t7, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r15;
    // 0x801E32C4: b           L_801E338C
    // 0x801E32C8: sw          $a3, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r7;
        goto L_801E338C;
    // 0x801E32C8: sw          $a3, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r7;
L_801E32CC:
    // 0x801E32CC: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x801E32D0: ori         $a1, $a1, 0x3006
    ctx->r5 = ctx->r5 | 0X3006;
    // 0x801E32D4: addiu       $t9, $v0, 0x8
    ctx->r25 = ADD32(ctx->r2, 0X8);
    // 0x801E32D8: sw          $t9, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r25;
    // 0x801E32DC: sw          $s1, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r17;
    // 0x801E32E0: sw          $a1, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r5;
    // 0x801E32E4: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x801E32E8: lui         $t9, 0x801F
    ctx->r25 = S32(0X801F << 16);
    // 0x801E32EC: addiu       $t8, $v0, 0x8
    ctx->r24 = ADD32(ctx->r2, 0X8);
    // 0x801E32F0: sw          $t8, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r24;
    // 0x801E32F4: sw          $s0, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r16;
    // 0x801E32F8: sw          $a2, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r6;
    // 0x801E32FC: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x801E3300: addiu       $t9, $t9, 0xD50
    ctx->r25 = ADD32(ctx->r25, 0XD50);
    // 0x801E3304: addiu       $t6, $v0, 0x8
    ctx->r14 = ADD32(ctx->r2, 0X8);
    // 0x801E3308: sw          $t6, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r14;
    // 0x801E330C: sw          $t5, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r13;
    // 0x801E3310: sw          $v1, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r3;
    // 0x801E3314: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x801E3318: nop

    // 0x801E331C: addiu       $t7, $v0, 0x8
    ctx->r15 = ADD32(ctx->r2, 0X8);
    // 0x801E3320: sw          $t7, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r15;
    // 0x801E3324: sw          $t9, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r25;
    // 0x801E3328: sw          $a3, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r7;
    // 0x801E332C: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x801E3330: nop

    // 0x801E3334: addiu       $t8, $v0, 0x8
    ctx->r24 = ADD32(ctx->r2, 0X8);
    // 0x801E3338: sw          $t8, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r24;
    // 0x801E333C: sw          $s1, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r17;
    // 0x801E3340: sw          $a1, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r5;
    // 0x801E3344: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x801E3348: lui         $t8, 0x801F
    ctx->r24 = S32(0X801F << 16);
    // 0x801E334C: addiu       $t6, $v0, 0x8
    ctx->r14 = ADD32(ctx->r2, 0X8);
    // 0x801E3350: sw          $t6, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r14;
    // 0x801E3354: sw          $s0, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r16;
    // 0x801E3358: sw          $a2, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r6;
    // 0x801E335C: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x801E3360: addiu       $t8, $t8, 0xEC8
    ctx->r24 = ADD32(ctx->r24, 0XEC8);
    // 0x801E3364: addiu       $t7, $v0, 0x8
    ctx->r15 = ADD32(ctx->r2, 0X8);
    // 0x801E3368: sw          $t7, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r15;
    // 0x801E336C: sw          $t4, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r12;
    // 0x801E3370: sw          $v1, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r3;
    // 0x801E3374: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x801E3378: nop

    // 0x801E337C: addiu       $t9, $v0, 0x8
    ctx->r25 = ADD32(ctx->r2, 0X8);
    // 0x801E3380: sw          $t9, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r25;
    // 0x801E3384: sw          $t8, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r24;
    // 0x801E3388: sw          $a3, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r7;
L_801E338C:
    // 0x801E338C: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x801E3390: lui         $t7, 0xE700
    ctx->r15 = S32(0XE700 << 16);
    // 0x801E3394: addiu       $t6, $v0, 0x8
    ctx->r14 = ADD32(ctx->r2, 0X8);
    // 0x801E3398: sw          $t6, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r14;
    // 0x801E339C: sw          $zero, 0x4($v0)
    MEM_W(0X4, ctx->r2) = 0;
    // 0x801E33A0: sw          $t7, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r15;
    // 0x801E33A4: lw          $s1, 0xC($sp)
    ctx->r17 = MEM_W(ctx->r29, 0XC);
    // 0x801E33A8: lw          $s0, 0x8($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X8);
    // 0x801E33AC: jr          $ra
    // 0x801E33B0: addiu       $sp, $sp, 0x130
    ctx->r29 = ADD32(ctx->r29, 0X130);
    return;
    // 0x801E33B0: addiu       $sp, $sp, 0x130
    ctx->r29 = ADD32(ctx->r29, 0X130);
;}
RECOMP_FUNC void func_801E33B4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x801E33B4: lw          $v1, 0x30($a2)
    ctx->r3 = MEM_W(ctx->r6, 0X30);
    // 0x801E33B8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x801E33BC: addiu       $v1, $v1, 0x2C
    ctx->r3 = ADD32(ctx->r3, 0X2C);
    // 0x801E33C0: beq         $v1, $zero, L_801E33D8
    if (ctx->r3 == 0) {
        // 0x801E33C4: lui         $t4, 0xE700
        ctx->r12 = S32(0XE700 << 16);
            goto L_801E33D8;
    }
    // 0x801E33C4: lui         $t4, 0xE700
    ctx->r12 = S32(0XE700 << 16);
    // 0x801E33C8: lbu         $v0, 0x2($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X2);
    // 0x801E33CC: nop

    // 0x801E33D0: andi        $t6, $v0, 0xF0
    ctx->r14 = ctx->r2 & 0XF0;
    // 0x801E33D4: sra         $v0, $t6, 4
    ctx->r2 = S32(SIGNED(ctx->r14) >> 4);
L_801E33D8:
    // 0x801E33D8: lw          $a2, 0x0($a0)
    ctx->r6 = MEM_W(ctx->r4, 0X0);
    // 0x801E33DC: lui         $t5, 0xB900
    ctx->r13 = S32(0XB900 << 16);
    // 0x801E33E0: addiu       $t8, $a2, 0x8
    ctx->r24 = ADD32(ctx->r6, 0X8);
    // 0x801E33E4: sw          $t8, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r24;
    // 0x801E33E8: sw          $zero, 0x4($a2)
    MEM_W(0X4, ctx->r6) = 0;
    // 0x801E33EC: sw          $t4, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r12;
    // 0x801E33F0: lw          $a2, 0x0($a0)
    ctx->r6 = MEM_W(ctx->r4, 0X0);
    // 0x801E33F4: lui         $t6, 0x55
    ctx->r14 = S32(0X55 << 16);
    // 0x801E33F8: addiu       $t9, $a2, 0x8
    ctx->r25 = ADD32(ctx->r6, 0X8);
    // 0x801E33FC: sw          $t9, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r25;
    // 0x801E3400: ori         $t6, $t6, 0x3078
    ctx->r14 = ctx->r14 | 0X3078;
    // 0x801E3404: ori         $t5, $t5, 0x31D
    ctx->r13 = ctx->r13 | 0X31D;
    // 0x801E3408: sw          $t5, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r13;
    // 0x801E340C: sw          $t6, 0x4($a2)
    MEM_W(0X4, ctx->r6) = ctx->r14;
    // 0x801E3410: lw          $a2, 0x0($a0)
    ctx->r6 = MEM_W(ctx->r4, 0X0);
    // 0x801E3414: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x801E3418: addiu       $t7, $a2, 0x8
    ctx->r15 = ADD32(ctx->r6, 0X8);
    // 0x801E341C: sw          $t7, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r15;
    // 0x801E3420: ori         $at, $at, 0x140
    ctx->r1 = ctx->r1 | 0X140;
    // 0x801E3424: lui         $t8, 0x102
    ctx->r24 = S32(0X102 << 16);
    // 0x801E3428: ori         $t8, $t8, 0x40
    ctx->r24 = ctx->r24 | 0X40;
    // 0x801E342C: addu        $t2, $a1, $at
    ctx->r10 = ADD32(ctx->r5, ctx->r1);
    // 0x801E3430: sw          $t2, 0x4($a2)
    MEM_W(0X4, ctx->r6) = ctx->r10;
    // 0x801E3434: sw          $t8, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r24;
    // 0x801E3438: lw          $a2, 0x0($a0)
    ctx->r6 = MEM_W(ctx->r4, 0X0);
    // 0x801E343C: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x801E3440: addiu       $t9, $a2, 0x8
    ctx->r25 = ADD32(ctx->r6, 0X8);
    // 0x801E3444: sw          $t9, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r25;
    // 0x801E3448: ori         $at, $at, 0x100
    ctx->r1 = ctx->r1 | 0X100;
    // 0x801E344C: lui         $t5, 0xBC00
    ctx->r13 = S32(0XBC00 << 16);
    // 0x801E3450: ori         $t5, $t5, 0x2406
    ctx->r13 = ctx->r13 | 0X2406;
    // 0x801E3454: addu        $t6, $a1, $at
    ctx->r14 = ADD32(ctx->r5, ctx->r1);
    // 0x801E3458: sw          $t6, 0x4($a2)
    MEM_W(0X4, ctx->r6) = ctx->r14;
    // 0x801E345C: sw          $t5, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r13;
    // 0x801E3460: lw          $a2, 0x0($a0)
    ctx->r6 = MEM_W(ctx->r4, 0X0);
    // 0x801E3464: lui         $t8, 0xBC00
    ctx->r24 = S32(0XBC00 << 16);
    // 0x801E3468: addiu       $t7, $a2, 0x8
    ctx->r15 = ADD32(ctx->r6, 0X8);
    // 0x801E346C: sw          $t7, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r15;
    // 0x801E3470: ori         $t8, $t8, 0x2006
    ctx->r24 = ctx->r24 | 0X2006;
    // 0x801E3474: sw          $t8, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r24;
    // 0x801E3478: sw          $t2, 0x4($a2)
    MEM_W(0X4, ctx->r6) = ctx->r10;
    // 0x801E347C: lw          $a2, 0x0($a0)
    ctx->r6 = MEM_W(ctx->r4, 0X0);
    // 0x801E3480: lui         $t5, 0x600
    ctx->r13 = S32(0X600 << 16);
    // 0x801E3484: addiu       $t9, $a2, 0x8
    ctx->r25 = ADD32(ctx->r6, 0X8);
    // 0x801E3488: sw          $t9, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r25;
    // 0x801E348C: sll         $t6, $v0, 2
    ctx->r14 = S32(ctx->r2 << 2);
    // 0x801E3490: addu        $t7, $a3, $t6
    ctx->r15 = ADD32(ctx->r7, ctx->r14);
    // 0x801E3494: sw          $t5, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r13;
    // 0x801E3498: lw          $t8, 0x0($t7)
    ctx->r24 = MEM_W(ctx->r15, 0X0);
    // 0x801E349C: nop

    // 0x801E34A0: sw          $t8, 0x4($a2)
    MEM_W(0X4, ctx->r6) = ctx->r24;
    // 0x801E34A4: lw          $a2, 0x0($a0)
    ctx->r6 = MEM_W(ctx->r4, 0X0);
    // 0x801E34A8: nop

    // 0x801E34AC: addiu       $t9, $a2, 0x8
    ctx->r25 = ADD32(ctx->r6, 0X8);
    // 0x801E34B0: sw          $t9, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r25;
    // 0x801E34B4: sw          $zero, 0x4($a2)
    MEM_W(0X4, ctx->r6) = 0;
    // 0x801E34B8: jr          $ra
    // 0x801E34BC: sw          $t4, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r12;
    return;
    // 0x801E34BC: sw          $t4, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r12;
;}
RECOMP_FUNC void func_801E34C0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x801E34C0: lw          $t6, 0x30($a2)
    ctx->r14 = MEM_W(ctx->r6, 0X30);
    // 0x801E34C4: lw          $a3, 0x0($a0)
    ctx->r7 = MEM_W(ctx->r4, 0X0);
    // 0x801E34C8: lhu         $v0, 0x2($t6)
    ctx->r2 = MEM_HU(ctx->r14, 0X2);
    // 0x801E34CC: addiu       $t8, $a3, 0x8
    ctx->r24 = ADD32(ctx->r7, 0X8);
    // 0x801E34D0: sw          $t8, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r24;
    // 0x801E34D4: lui         $t3, 0xE700
    ctx->r11 = S32(0XE700 << 16);
    // 0x801E34D8: sw          $t3, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->r11;
    // 0x801E34DC: sw          $zero, 0x4($a3)
    MEM_W(0X4, ctx->r7) = 0;
    // 0x801E34E0: lw          $a3, 0x0($a0)
    ctx->r7 = MEM_W(ctx->r4, 0X0);
    // 0x801E34E4: lui         $t4, 0xB900
    ctx->r12 = S32(0XB900 << 16);
    // 0x801E34E8: addiu       $t9, $a3, 0x8
    ctx->r25 = ADD32(ctx->r7, 0X8);
    // 0x801E34EC: sw          $t9, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r25;
    // 0x801E34F0: lui         $t5, 0x50
    ctx->r13 = S32(0X50 << 16);
    // 0x801E34F4: ori         $t5, $t5, 0x4A50
    ctx->r13 = ctx->r13 | 0X4A50;
    // 0x801E34F8: ori         $t4, $t4, 0x31D
    ctx->r12 = ctx->r12 | 0X31D;
    // 0x801E34FC: sw          $t4, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->r12;
    // 0x801E3500: sw          $t5, 0x4($a3)
    MEM_W(0X4, ctx->r7) = ctx->r13;
    // 0x801E3504: lw          $a3, 0x0($a0)
    ctx->r7 = MEM_W(ctx->r4, 0X0);
    // 0x801E3508: andi        $t7, $v0, 0x7
    ctx->r15 = ctx->r2 & 0X7;
    // 0x801E350C: or          $v0, $t7, $zero
    ctx->r2 = ctx->r15 | 0;
    // 0x801E3510: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x801E3514: addiu       $t6, $a3, 0x8
    ctx->r14 = ADD32(ctx->r7, 0X8);
    // 0x801E3518: sw          $t6, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r14;
    // 0x801E351C: ori         $at, $at, 0x100
    ctx->r1 = ctx->r1 | 0X100;
    // 0x801E3520: lui         $t7, 0xBC00
    ctx->r15 = S32(0XBC00 << 16);
    // 0x801E3524: ori         $t7, $t7, 0x2006
    ctx->r15 = ctx->r15 | 0X2006;
    // 0x801E3528: addu        $t8, $a1, $at
    ctx->r24 = ADD32(ctx->r5, ctx->r1);
    // 0x801E352C: sw          $t8, 0x4($a3)
    MEM_W(0X4, ctx->r7) = ctx->r24;
    // 0x801E3530: sw          $t7, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->r15;
    // 0x801E3534: lw          $a3, 0x0($a0)
    ctx->r7 = MEM_W(ctx->r4, 0X0);
    // 0x801E3538: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x801E353C: ori         $at, $at, 0xC0
    ctx->r1 = ctx->r1 | 0XC0;
    // 0x801E3540: lui         $t4, 0xBC00
    ctx->r12 = S32(0XBC00 << 16);
    // 0x801E3544: addiu       $t9, $a3, 0x8
    ctx->r25 = ADD32(ctx->r7, 0X8);
    // 0x801E3548: sw          $t9, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r25;
    // 0x801E354C: ori         $t4, $t4, 0x2406
    ctx->r12 = ctx->r12 | 0X2406;
    // 0x801E3550: addu        $t5, $a1, $at
    ctx->r13 = ADD32(ctx->r5, ctx->r1);
    // 0x801E3554: sw          $t5, 0x4($a3)
    MEM_W(0X4, ctx->r7) = ctx->r13;
    // 0x801E3558: bne         $v0, $zero, L_801E3584
    if (ctx->r2 != 0) {
        // 0x801E355C: sw          $t4, 0x0($a3)
        MEM_W(0X0, ctx->r7) = ctx->r12;
            goto L_801E3584;
    }
    // 0x801E355C: sw          $t4, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->r12;
    // 0x801E3560: lw          $a3, 0x0($a0)
    ctx->r7 = MEM_W(ctx->r4, 0X0);
    // 0x801E3564: lui         $t8, 0x801F
    ctx->r24 = S32(0X801F << 16);
    // 0x801E3568: addiu       $t6, $a3, 0x8
    ctx->r14 = ADD32(ctx->r7, 0X8);
    // 0x801E356C: sw          $t6, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r14;
    // 0x801E3570: addiu       $t8, $t8, 0x60B8
    ctx->r24 = ADD32(ctx->r24, 0X60B8);
    // 0x801E3574: lui         $t7, 0x600
    ctx->r15 = S32(0X600 << 16);
    // 0x801E3578: sw          $t7, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->r15;
    // 0x801E357C: b           L_801E35A4
    // 0x801E3580: sw          $t8, 0x4($a3)
    MEM_W(0X4, ctx->r7) = ctx->r24;
        goto L_801E35A4;
    // 0x801E3580: sw          $t8, 0x4($a3)
    MEM_W(0X4, ctx->r7) = ctx->r24;
L_801E3584:
    // 0x801E3584: lw          $a3, 0x0($a0)
    ctx->r7 = MEM_W(ctx->r4, 0X0);
    // 0x801E3588: lui         $t5, 0x801F
    ctx->r13 = S32(0X801F << 16);
    // 0x801E358C: addiu       $t9, $a3, 0x8
    ctx->r25 = ADD32(ctx->r7, 0X8);
    // 0x801E3590: sw          $t9, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r25;
    // 0x801E3594: addiu       $t5, $t5, 0x6040
    ctx->r13 = ADD32(ctx->r13, 0X6040);
    // 0x801E3598: lui         $t4, 0x600
    ctx->r12 = S32(0X600 << 16);
    // 0x801E359C: sw          $t4, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->r12;
    // 0x801E35A0: sw          $t5, 0x4($a3)
    MEM_W(0X4, ctx->r7) = ctx->r13;
L_801E35A4:
    // 0x801E35A4: lw          $a3, 0x0($a0)
    ctx->r7 = MEM_W(ctx->r4, 0X0);
    // 0x801E35A8: nop

    // 0x801E35AC: addiu       $t6, $a3, 0x8
    ctx->r14 = ADD32(ctx->r7, 0X8);
    // 0x801E35B0: sw          $t6, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r14;
    // 0x801E35B4: sw          $zero, 0x4($a3)
    MEM_W(0X4, ctx->r7) = 0;
    // 0x801E35B8: jr          $ra
    // 0x801E35BC: sw          $t3, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->r11;
    return;
    // 0x801E35BC: sw          $t3, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->r11;
;}
RECOMP_FUNC void func_801E35C0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x801E35C0: lw          $t6, 0x30($a2)
    ctx->r14 = MEM_W(ctx->r6, 0X30);
    // 0x801E35C4: lui         $v1, 0x102
    ctx->r3 = S32(0X102 << 16);
    // 0x801E35C8: lhu         $v0, 0x3C($t6)
    ctx->r2 = MEM_HU(ctx->r14, 0X3C);
    // 0x801E35CC: ori         $v1, $v1, 0x40
    ctx->r3 = ctx->r3 | 0X40;
    // 0x801E35D0: andi        $t7, $v0, 0x8000
    ctx->r15 = ctx->r2 & 0X8000;
    // 0x801E35D4: beq         $t7, $zero, L_801E3740
    if (ctx->r15 == 0) {
        // 0x801E35D8: lui         $a2, 0x600
        ctx->r6 = S32(0X600 << 16);
            goto L_801E3740;
    }
    // 0x801E35D8: lui         $a2, 0x600
    ctx->r6 = S32(0X600 << 16);
    // 0x801E35DC: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x801E35E0: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x801E35E4: addiu       $t8, $v0, 0x8
    ctx->r24 = ADD32(ctx->r2, 0X8);
    // 0x801E35E8: lui         $v1, 0x102
    ctx->r3 = S32(0X102 << 16);
    // 0x801E35EC: sw          $t8, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r24;
    // 0x801E35F0: ori         $at, $at, 0x2C0
    ctx->r1 = ctx->r1 | 0X2C0;
    // 0x801E35F4: ori         $v1, $v1, 0x40
    ctx->r3 = ctx->r3 | 0X40;
    // 0x801E35F8: addu        $t9, $a1, $at
    ctx->r25 = ADD32(ctx->r5, ctx->r1);
    // 0x801E35FC: sw          $t9, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r25;
    // 0x801E3600: sw          $v1, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r3;
    // 0x801E3604: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x801E3608: lui         $a2, 0x600
    ctx->r6 = S32(0X600 << 16);
    // 0x801E360C: addiu       $t4, $v0, 0x8
    ctx->r12 = ADD32(ctx->r2, 0X8);
    // 0x801E3610: sw          $t4, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r12;
    // 0x801E3614: sw          $a2, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r6;
    // 0x801E3618: lw          $t5, 0x0($a3)
    ctx->r13 = MEM_W(ctx->r7, 0X0);
    // 0x801E361C: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x801E3620: sw          $t5, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r13;
    // 0x801E3624: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x801E3628: ori         $at, $at, 0x1C0
    ctx->r1 = ctx->r1 | 0X1C0;
    // 0x801E362C: addiu       $t6, $v0, 0x8
    ctx->r14 = ADD32(ctx->r2, 0X8);
    // 0x801E3630: sw          $t6, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r14;
    // 0x801E3634: addu        $t7, $a1, $at
    ctx->r15 = ADD32(ctx->r5, ctx->r1);
    // 0x801E3638: sw          $t7, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r15;
    // 0x801E363C: sw          $v1, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r3;
    // 0x801E3640: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x801E3644: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x801E3648: addiu       $t8, $v0, 0x8
    ctx->r24 = ADD32(ctx->r2, 0X8);
    // 0x801E364C: sw          $t8, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r24;
    // 0x801E3650: sw          $a2, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r6;
    // 0x801E3654: lw          $t9, 0x4($a3)
    ctx->r25 = MEM_W(ctx->r7, 0X4);
    // 0x801E3658: ori         $at, $at, 0x300
    ctx->r1 = ctx->r1 | 0X300;
    // 0x801E365C: sw          $t9, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r25;
    // 0x801E3660: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x801E3664: addu        $t5, $a1, $at
    ctx->r13 = ADD32(ctx->r5, ctx->r1);
    // 0x801E3668: addiu       $t4, $v0, 0x8
    ctx->r12 = ADD32(ctx->r2, 0X8);
    // 0x801E366C: sw          $t4, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r12;
    // 0x801E3670: sw          $t5, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r13;
    // 0x801E3674: sw          $v1, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r3;
    // 0x801E3678: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x801E367C: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x801E3680: addiu       $t6, $v0, 0x8
    ctx->r14 = ADD32(ctx->r2, 0X8);
    // 0x801E3684: sw          $t6, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r14;
    // 0x801E3688: sw          $a2, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r6;
    // 0x801E368C: lw          $t7, 0x8($a3)
    ctx->r15 = MEM_W(ctx->r7, 0X8);
    // 0x801E3690: ori         $at, $at, 0x200
    ctx->r1 = ctx->r1 | 0X200;
    // 0x801E3694: sw          $t7, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r15;
    // 0x801E3698: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x801E369C: addu        $t9, $a1, $at
    ctx->r25 = ADD32(ctx->r5, ctx->r1);
    // 0x801E36A0: addiu       $t8, $v0, 0x8
    ctx->r24 = ADD32(ctx->r2, 0X8);
    // 0x801E36A4: sw          $t8, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r24;
    // 0x801E36A8: sw          $t9, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r25;
    // 0x801E36AC: sw          $v1, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r3;
    // 0x801E36B0: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x801E36B4: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x801E36B8: addiu       $t4, $v0, 0x8
    ctx->r12 = ADD32(ctx->r2, 0X8);
    // 0x801E36BC: sw          $t4, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r12;
    // 0x801E36C0: sw          $a2, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r6;
    // 0x801E36C4: lw          $t5, 0xC($a3)
    ctx->r13 = MEM_W(ctx->r7, 0XC);
    // 0x801E36C8: ori         $at, $at, 0x340
    ctx->r1 = ctx->r1 | 0X340;
    // 0x801E36CC: sw          $t5, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r13;
    // 0x801E36D0: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x801E36D4: addu        $t7, $a1, $at
    ctx->r15 = ADD32(ctx->r5, ctx->r1);
    // 0x801E36D8: addiu       $t6, $v0, 0x8
    ctx->r14 = ADD32(ctx->r2, 0X8);
    // 0x801E36DC: sw          $t6, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r14;
    // 0x801E36E0: sw          $t7, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r15;
    // 0x801E36E4: sw          $v1, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r3;
    // 0x801E36E8: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x801E36EC: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x801E36F0: addiu       $t8, $v0, 0x8
    ctx->r24 = ADD32(ctx->r2, 0X8);
    // 0x801E36F4: sw          $t8, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r24;
    // 0x801E36F8: sw          $a2, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r6;
    // 0x801E36FC: lw          $t9, 0x10($a3)
    ctx->r25 = MEM_W(ctx->r7, 0X10);
    // 0x801E3700: ori         $at, $at, 0x240
    ctx->r1 = ctx->r1 | 0X240;
    // 0x801E3704: sw          $t9, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r25;
    // 0x801E3708: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x801E370C: addu        $t5, $a1, $at
    ctx->r13 = ADD32(ctx->r5, ctx->r1);
    // 0x801E3710: addiu       $t4, $v0, 0x8
    ctx->r12 = ADD32(ctx->r2, 0X8);
    // 0x801E3714: sw          $t4, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r12;
    // 0x801E3718: sw          $t5, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r13;
    // 0x801E371C: sw          $v1, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r3;
    // 0x801E3720: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x801E3724: addiu       $a3, $a3, 0x14
    ctx->r7 = ADD32(ctx->r7, 0X14);
    // 0x801E3728: addiu       $t6, $v0, 0x8
    ctx->r14 = ADD32(ctx->r2, 0X8);
    // 0x801E372C: sw          $t6, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r14;
    // 0x801E3730: sw          $a2, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r6;
    // 0x801E3734: lw          $t7, 0x0($a3)
    ctx->r15 = MEM_W(ctx->r7, 0X0);
    // 0x801E3738: jr          $ra
    // 0x801E373C: sw          $t7, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r15;
    return;
    // 0x801E373C: sw          $t7, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r15;
L_801E3740:
    // 0x801E3740: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x801E3744: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x801E3748: addiu       $t8, $v0, 0x8
    ctx->r24 = ADD32(ctx->r2, 0X8);
    // 0x801E374C: sw          $t8, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r24;
    // 0x801E3750: ori         $at, $at, 0x1C0
    ctx->r1 = ctx->r1 | 0X1C0;
    // 0x801E3754: addu        $t9, $a1, $at
    ctx->r25 = ADD32(ctx->r5, ctx->r1);
    // 0x801E3758: sw          $t9, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r25;
    // 0x801E375C: sw          $v1, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r3;
    // 0x801E3760: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x801E3764: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x801E3768: addiu       $t4, $v0, 0x8
    ctx->r12 = ADD32(ctx->r2, 0X8);
    // 0x801E376C: sw          $t4, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r12;
    // 0x801E3770: sw          $a2, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r6;
    // 0x801E3774: lw          $t5, 0x0($a3)
    ctx->r13 = MEM_W(ctx->r7, 0X0);
    // 0x801E3778: ori         $at, $at, 0x2C0
    ctx->r1 = ctx->r1 | 0X2C0;
    // 0x801E377C: sw          $t5, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r13;
    // 0x801E3780: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x801E3784: addu        $t7, $a1, $at
    ctx->r15 = ADD32(ctx->r5, ctx->r1);
    // 0x801E3788: addiu       $t6, $v0, 0x8
    ctx->r14 = ADD32(ctx->r2, 0X8);
    // 0x801E378C: sw          $t6, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r14;
    // 0x801E3790: sw          $t7, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r15;
    // 0x801E3794: sw          $v1, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r3;
    // 0x801E3798: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x801E379C: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x801E37A0: addiu       $t8, $v0, 0x8
    ctx->r24 = ADD32(ctx->r2, 0X8);
    // 0x801E37A4: sw          $t8, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r24;
    // 0x801E37A8: sw          $a2, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r6;
    // 0x801E37AC: lw          $t9, 0x4($a3)
    ctx->r25 = MEM_W(ctx->r7, 0X4);
    // 0x801E37B0: ori         $at, $at, 0x200
    ctx->r1 = ctx->r1 | 0X200;
    // 0x801E37B4: sw          $t9, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r25;
    // 0x801E37B8: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x801E37BC: addu        $t5, $a1, $at
    ctx->r13 = ADD32(ctx->r5, ctx->r1);
    // 0x801E37C0: addiu       $t4, $v0, 0x8
    ctx->r12 = ADD32(ctx->r2, 0X8);
    // 0x801E37C4: sw          $t4, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r12;
    // 0x801E37C8: sw          $t5, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r13;
    // 0x801E37CC: sw          $v1, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r3;
    // 0x801E37D0: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x801E37D4: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x801E37D8: addiu       $t6, $v0, 0x8
    ctx->r14 = ADD32(ctx->r2, 0X8);
    // 0x801E37DC: sw          $t6, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r14;
    // 0x801E37E0: sw          $a2, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r6;
    // 0x801E37E4: lw          $t7, 0x8($a3)
    ctx->r15 = MEM_W(ctx->r7, 0X8);
    // 0x801E37E8: ori         $at, $at, 0x300
    ctx->r1 = ctx->r1 | 0X300;
    // 0x801E37EC: sw          $t7, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r15;
    // 0x801E37F0: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x801E37F4: addu        $t9, $a1, $at
    ctx->r25 = ADD32(ctx->r5, ctx->r1);
    // 0x801E37F8: addiu       $t8, $v0, 0x8
    ctx->r24 = ADD32(ctx->r2, 0X8);
    // 0x801E37FC: sw          $t8, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r24;
    // 0x801E3800: sw          $t9, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r25;
    // 0x801E3804: sw          $v1, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r3;
    // 0x801E3808: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x801E380C: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x801E3810: addiu       $t4, $v0, 0x8
    ctx->r12 = ADD32(ctx->r2, 0X8);
    // 0x801E3814: sw          $t4, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r12;
    // 0x801E3818: sw          $a2, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r6;
    // 0x801E381C: lw          $t5, 0xC($a3)
    ctx->r13 = MEM_W(ctx->r7, 0XC);
    // 0x801E3820: ori         $at, $at, 0x240
    ctx->r1 = ctx->r1 | 0X240;
    // 0x801E3824: sw          $t5, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r13;
    // 0x801E3828: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x801E382C: addu        $t7, $a1, $at
    ctx->r15 = ADD32(ctx->r5, ctx->r1);
    // 0x801E3830: addiu       $t6, $v0, 0x8
    ctx->r14 = ADD32(ctx->r2, 0X8);
    // 0x801E3834: sw          $t6, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r14;
    // 0x801E3838: sw          $t7, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r15;
    // 0x801E383C: sw          $v1, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r3;
    // 0x801E3840: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x801E3844: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x801E3848: addiu       $t8, $v0, 0x8
    ctx->r24 = ADD32(ctx->r2, 0X8);
    // 0x801E384C: sw          $t8, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r24;
    // 0x801E3850: sw          $a2, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r6;
    // 0x801E3854: lw          $t9, 0x10($a3)
    ctx->r25 = MEM_W(ctx->r7, 0X10);
    // 0x801E3858: ori         $at, $at, 0x340
    ctx->r1 = ctx->r1 | 0X340;
    // 0x801E385C: sw          $t9, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r25;
    // 0x801E3860: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x801E3864: addu        $t5, $a1, $at
    ctx->r13 = ADD32(ctx->r5, ctx->r1);
    // 0x801E3868: addiu       $t4, $v0, 0x8
    ctx->r12 = ADD32(ctx->r2, 0X8);
    // 0x801E386C: sw          $t4, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r12;
    // 0x801E3870: sw          $t5, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r13;
    // 0x801E3874: sw          $v1, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r3;
    // 0x801E3878: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x801E387C: addiu       $a3, $a3, 0x14
    ctx->r7 = ADD32(ctx->r7, 0X14);
    // 0x801E3880: addiu       $t6, $v0, 0x8
    ctx->r14 = ADD32(ctx->r2, 0X8);
    // 0x801E3884: sw          $t6, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r14;
    // 0x801E3888: sw          $a2, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r6;
    // 0x801E388C: lw          $t7, 0x0($a3)
    ctx->r15 = MEM_W(ctx->r7, 0X0);
    // 0x801E3890: nop

    // 0x801E3894: sw          $t7, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r15;
    // 0x801E3898: jr          $ra
    // 0x801E389C: nop

    return;
    // 0x801E389C: nop

;}
RECOMP_FUNC void func_801E38A0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x801E38A0: lw          $t6, 0x30($a2)
    ctx->r14 = MEM_W(ctx->r6, 0X30);
    // 0x801E38A4: lui         $t2, 0x102
    ctx->r10 = S32(0X102 << 16);
    // 0x801E38A8: lhu         $v0, 0x3C($t6)
    ctx->r2 = MEM_HU(ctx->r14, 0X3C);
    // 0x801E38AC: ori         $t2, $t2, 0x40
    ctx->r10 = ctx->r10 | 0X40;
    // 0x801E38B0: andi        $t7, $v0, 0x8000
    ctx->r15 = ctx->r2 & 0X8000;
    // 0x801E38B4: beq         $t7, $zero, L_801E3940
    if (ctx->r15 == 0) {
        // 0x801E38B8: lui         $t3, 0x600
        ctx->r11 = S32(0X600 << 16);
            goto L_801E3940;
    }
    // 0x801E38B8: lui         $t3, 0x600
    ctx->r11 = S32(0X600 << 16);
    // 0x801E38BC: lw          $v1, 0x0($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X0);
    // 0x801E38C0: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x801E38C4: addiu       $t8, $v1, 0x8
    ctx->r24 = ADD32(ctx->r3, 0X8);
    // 0x801E38C8: lui         $t2, 0x102
    ctx->r10 = S32(0X102 << 16);
    // 0x801E38CC: sw          $t8, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r24;
    // 0x801E38D0: ori         $at, $at, 0x300
    ctx->r1 = ctx->r1 | 0X300;
    // 0x801E38D4: ori         $t2, $t2, 0x40
    ctx->r10 = ctx->r10 | 0X40;
    // 0x801E38D8: addu        $t9, $a1, $at
    ctx->r25 = ADD32(ctx->r5, ctx->r1);
    // 0x801E38DC: sw          $t9, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r25;
    // 0x801E38E0: sw          $t2, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r10;
    // 0x801E38E4: lw          $v1, 0x0($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X0);
    // 0x801E38E8: lui         $t3, 0x600
    ctx->r11 = S32(0X600 << 16);
    // 0x801E38EC: addiu       $t4, $v1, 0x8
    ctx->r12 = ADD32(ctx->r3, 0X8);
    // 0x801E38F0: sw          $t4, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r12;
    // 0x801E38F4: sw          $t3, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r11;
    // 0x801E38F8: lw          $t5, 0x0($a3)
    ctx->r13 = MEM_W(ctx->r7, 0X0);
    // 0x801E38FC: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x801E3900: sw          $t5, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r13;
    // 0x801E3904: lw          $v1, 0x0($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X0);
    // 0x801E3908: ori         $at, $at, 0x200
    ctx->r1 = ctx->r1 | 0X200;
    // 0x801E390C: addiu       $t6, $v1, 0x8
    ctx->r14 = ADD32(ctx->r3, 0X8);
    // 0x801E3910: sw          $t6, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r14;
    // 0x801E3914: addu        $t7, $a1, $at
    ctx->r15 = ADD32(ctx->r5, ctx->r1);
    // 0x801E3918: sw          $t7, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r15;
    // 0x801E391C: sw          $t2, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r10;
    // 0x801E3920: lw          $v1, 0x0($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X0);
    // 0x801E3924: addiu       $a3, $a3, 0x4
    ctx->r7 = ADD32(ctx->r7, 0X4);
    // 0x801E3928: addiu       $t8, $v1, 0x8
    ctx->r24 = ADD32(ctx->r3, 0X8);
    // 0x801E392C: sw          $t8, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r24;
    // 0x801E3930: sw          $t3, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r11;
    // 0x801E3934: lw          $t9, 0x0($a3)
    ctx->r25 = MEM_W(ctx->r7, 0X0);
    // 0x801E3938: jr          $ra
    // 0x801E393C: sw          $t9, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r25;
    return;
    // 0x801E393C: sw          $t9, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r25;
L_801E3940:
    // 0x801E3940: lw          $v1, 0x0($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X0);
    // 0x801E3944: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x801E3948: addiu       $t4, $v1, 0x8
    ctx->r12 = ADD32(ctx->r3, 0X8);
    // 0x801E394C: sw          $t4, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r12;
    // 0x801E3950: ori         $at, $at, 0x200
    ctx->r1 = ctx->r1 | 0X200;
    // 0x801E3954: addu        $t5, $a1, $at
    ctx->r13 = ADD32(ctx->r5, ctx->r1);
    // 0x801E3958: sw          $t5, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r13;
    // 0x801E395C: sw          $t2, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r10;
    // 0x801E3960: lw          $v1, 0x0($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X0);
    // 0x801E3964: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x801E3968: addiu       $t6, $v1, 0x8
    ctx->r14 = ADD32(ctx->r3, 0X8);
    // 0x801E396C: sw          $t6, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r14;
    // 0x801E3970: sw          $t3, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r11;
    // 0x801E3974: lw          $t7, 0x0($a3)
    ctx->r15 = MEM_W(ctx->r7, 0X0);
    // 0x801E3978: ori         $at, $at, 0x300
    ctx->r1 = ctx->r1 | 0X300;
    // 0x801E397C: sw          $t7, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r15;
    // 0x801E3980: lw          $v1, 0x0($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X0);
    // 0x801E3984: addu        $t9, $a1, $at
    ctx->r25 = ADD32(ctx->r5, ctx->r1);
    // 0x801E3988: addiu       $t8, $v1, 0x8
    ctx->r24 = ADD32(ctx->r3, 0X8);
    // 0x801E398C: sw          $t8, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r24;
    // 0x801E3990: sw          $t9, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r25;
    // 0x801E3994: sw          $t2, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r10;
    // 0x801E3998: lw          $v1, 0x0($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X0);
    // 0x801E399C: addiu       $a3, $a3, 0x4
    ctx->r7 = ADD32(ctx->r7, 0X4);
    // 0x801E39A0: addiu       $t4, $v1, 0x8
    ctx->r12 = ADD32(ctx->r3, 0X8);
    // 0x801E39A4: sw          $t4, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r12;
    // 0x801E39A8: sw          $t3, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r11;
    // 0x801E39AC: lw          $t5, 0x0($a3)
    ctx->r13 = MEM_W(ctx->r7, 0X0);
    // 0x801E39B0: nop

    // 0x801E39B4: sw          $t5, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r13;
    // 0x801E39B8: jr          $ra
    // 0x801E39BC: nop

    return;
    // 0x801E39BC: nop

;}
RECOMP_FUNC void func_801E39C0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x801E39C0: lw          $t6, 0x30($a2)
    ctx->r14 = MEM_W(ctx->r6, 0X30);
    // 0x801E39C4: lui         $t0, 0xBC00
    ctx->r8 = S32(0XBC00 << 16);
    // 0x801E39C8: lhu         $v0, 0x3C($t6)
    ctx->r2 = MEM_HU(ctx->r14, 0X3C);
    // 0x801E39CC: addiu       $sp, $sp, -0x80
    ctx->r29 = ADD32(ctx->r29, -0X80);
    // 0x801E39D0: andi        $t7, $v0, 0x8000
    ctx->r15 = ctx->r2 & 0X8000;
    // 0x801E39D4: beq         $t7, $zero, L_801E3C0C
    if (ctx->r15 == 0) {
        // 0x801E39D8: ori         $t0, $t0, 0x2406
        ctx->r8 = ctx->r8 | 0X2406;
            goto L_801E3C0C;
    }
    // 0x801E39D8: ori         $t0, $t0, 0x2406
    ctx->r8 = ctx->r8 | 0X2406;
    // 0x801E39DC: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x801E39E0: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x801E39E4: addiu       $t8, $v0, 0x8
    ctx->r24 = ADD32(ctx->r2, 0X8);
    // 0x801E39E8: lui         $t0, 0xBC00
    ctx->r8 = S32(0XBC00 << 16);
    // 0x801E39EC: sw          $t8, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r24;
    // 0x801E39F0: ori         $at, $at, 0x280
    ctx->r1 = ctx->r1 | 0X280;
    // 0x801E39F4: ori         $t0, $t0, 0x2406
    ctx->r8 = ctx->r8 | 0X2406;
    // 0x801E39F8: addu        $t9, $a1, $at
    ctx->r25 = ADD32(ctx->r5, ctx->r1);
    // 0x801E39FC: sw          $t9, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r25;
    // 0x801E3A00: sw          $t0, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r8;
    // 0x801E3A04: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x801E3A08: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x801E3A0C: addiu       $t6, $v0, 0x8
    ctx->r14 = ADD32(ctx->r2, 0X8);
    // 0x801E3A10: lui         $t1, 0xBC00
    ctx->r9 = S32(0XBC00 << 16);
    // 0x801E3A14: sw          $t6, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r14;
    // 0x801E3A18: ori         $at, $at, 0x2C0
    ctx->r1 = ctx->r1 | 0X2C0;
    // 0x801E3A1C: ori         $t1, $t1, 0x2006
    ctx->r9 = ctx->r9 | 0X2006;
    // 0x801E3A20: addu        $t3, $a1, $at
    ctx->r11 = ADD32(ctx->r5, ctx->r1);
    // 0x801E3A24: sw          $t3, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r11;
    // 0x801E3A28: sw          $t1, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r9;
    // 0x801E3A2C: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x801E3A30: lui         $t2, 0x600
    ctx->r10 = S32(0X600 << 16);
    // 0x801E3A34: addiu       $t7, $v0, 0x8
    ctx->r15 = ADD32(ctx->r2, 0X8);
    // 0x801E3A38: sw          $t7, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r15;
    // 0x801E3A3C: sw          $t2, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r10;
    // 0x801E3A40: lw          $t8, 0x0($a3)
    ctx->r24 = MEM_W(ctx->r7, 0X0);
    // 0x801E3A44: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x801E3A48: sw          $t8, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r24;
    // 0x801E3A4C: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x801E3A50: ori         $at, $at, 0x180
    ctx->r1 = ctx->r1 | 0X180;
    // 0x801E3A54: addiu       $t9, $v0, 0x8
    ctx->r25 = ADD32(ctx->r2, 0X8);
    // 0x801E3A58: sw          $t9, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r25;
    // 0x801E3A5C: addu        $t6, $a1, $at
    ctx->r14 = ADD32(ctx->r5, ctx->r1);
    // 0x801E3A60: sw          $t6, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r14;
    // 0x801E3A64: sw          $t0, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r8;
    // 0x801E3A68: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x801E3A6C: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x801E3A70: addiu       $t7, $v0, 0x8
    ctx->r15 = ADD32(ctx->r2, 0X8);
    // 0x801E3A74: sw          $t7, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r15;
    // 0x801E3A78: ori         $at, $at, 0x1C0
    ctx->r1 = ctx->r1 | 0X1C0;
    // 0x801E3A7C: addu        $t4, $a1, $at
    ctx->r12 = ADD32(ctx->r5, ctx->r1);
    // 0x801E3A80: sw          $t4, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r12;
    // 0x801E3A84: sw          $t1, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r9;
    // 0x801E3A88: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x801E3A8C: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x801E3A90: addiu       $t8, $v0, 0x8
    ctx->r24 = ADD32(ctx->r2, 0X8);
    // 0x801E3A94: sw          $t8, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r24;
    // 0x801E3A98: sw          $t2, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r10;
    // 0x801E3A9C: lw          $t9, 0x4($a3)
    ctx->r25 = MEM_W(ctx->r7, 0X4);
    // 0x801E3AA0: ori         $at, $at, 0x300
    ctx->r1 = ctx->r1 | 0X300;
    // 0x801E3AA4: sw          $t9, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r25;
    // 0x801E3AA8: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x801E3AAC: addu        $v1, $a1, $at
    ctx->r3 = ADD32(ctx->r5, ctx->r1);
    // 0x801E3AB0: sw          $v0, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r2;
    // 0x801E3AB4: addiu       $t6, $v0, 0x8
    ctx->r14 = ADD32(ctx->r2, 0X8);
    // 0x801E3AB8: sw          $t6, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r14;
    // 0x801E3ABC: lw          $t7, 0x60($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X60);
    // 0x801E3AC0: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x801E3AC4: sw          $t0, 0x0($t7)
    MEM_W(0X0, ctx->r15) = ctx->r8;
    // 0x801E3AC8: sw          $t3, 0x4($t7)
    MEM_W(0X4, ctx->r15) = ctx->r11;
    // 0x801E3ACC: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x801E3AD0: ori         $at, $at, 0x200
    ctx->r1 = ctx->r1 | 0X200;
    // 0x801E3AD4: addiu       $t8, $v0, 0x8
    ctx->r24 = ADD32(ctx->r2, 0X8);
    // 0x801E3AD8: sw          $t8, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r24;
    // 0x801E3ADC: sw          $v1, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r3;
    // 0x801E3AE0: sw          $t1, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r9;
    // 0x801E3AE4: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x801E3AE8: addu        $a2, $a1, $at
    ctx->r6 = ADD32(ctx->r5, ctx->r1);
    // 0x801E3AEC: addiu       $t9, $v0, 0x8
    ctx->r25 = ADD32(ctx->r2, 0X8);
    // 0x801E3AF0: sw          $t9, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r25;
    // 0x801E3AF4: sw          $t2, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r10;
    // 0x801E3AF8: lw          $t6, 0x8($a3)
    ctx->r14 = MEM_W(ctx->r7, 0X8);
    // 0x801E3AFC: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x801E3B00: sw          $t6, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r14;
    // 0x801E3B04: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x801E3B08: ori         $at, $at, 0x340
    ctx->r1 = ctx->r1 | 0X340;
    // 0x801E3B0C: sw          $v0, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r2;
    // 0x801E3B10: addiu       $t7, $v0, 0x8
    ctx->r15 = ADD32(ctx->r2, 0X8);
    // 0x801E3B14: sw          $t7, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r15;
    // 0x801E3B18: lw          $t8, 0x54($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X54);
    // 0x801E3B1C: addiu       $a3, $a3, 0x14
    ctx->r7 = ADD32(ctx->r7, 0X14);
    // 0x801E3B20: sw          $t0, 0x0($t8)
    MEM_W(0X0, ctx->r24) = ctx->r8;
    // 0x801E3B24: sw          $t4, 0x4($t8)
    MEM_W(0X4, ctx->r24) = ctx->r12;
    // 0x801E3B28: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x801E3B2C: nop

    // 0x801E3B30: addiu       $t9, $v0, 0x8
    ctx->r25 = ADD32(ctx->r2, 0X8);
    // 0x801E3B34: sw          $t9, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r25;
    // 0x801E3B38: sw          $a2, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r6;
    // 0x801E3B3C: sw          $t1, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r9;
    // 0x801E3B40: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x801E3B44: nop

    // 0x801E3B48: addiu       $t6, $v0, 0x8
    ctx->r14 = ADD32(ctx->r2, 0X8);
    // 0x801E3B4C: sw          $t6, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r14;
    // 0x801E3B50: sw          $t2, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r10;
    // 0x801E3B54: lw          $t7, -0x8($a3)
    ctx->r15 = MEM_W(ctx->r7, -0X8);
    // 0x801E3B58: nop

    // 0x801E3B5C: sw          $t7, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r15;
    // 0x801E3B60: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x801E3B64: addu        $t7, $a1, $at
    ctx->r15 = ADD32(ctx->r5, ctx->r1);
    // 0x801E3B68: sw          $v0, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r2;
    // 0x801E3B6C: addiu       $t8, $v0, 0x8
    ctx->r24 = ADD32(ctx->r2, 0X8);
    // 0x801E3B70: sw          $t8, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r24;
    // 0x801E3B74: lw          $t9, 0x48($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X48);
    // 0x801E3B78: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x801E3B7C: sw          $t0, 0x0($t9)
    MEM_W(0X0, ctx->r25) = ctx->r8;
    // 0x801E3B80: sw          $v1, 0x4($t9)
    MEM_W(0X4, ctx->r25) = ctx->r3;
    // 0x801E3B84: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x801E3B88: ori         $at, $at, 0x240
    ctx->r1 = ctx->r1 | 0X240;
    // 0x801E3B8C: addiu       $t6, $v0, 0x8
    ctx->r14 = ADD32(ctx->r2, 0X8);
    // 0x801E3B90: sw          $t6, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r14;
    // 0x801E3B94: sw          $t7, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r15;
    // 0x801E3B98: sw          $t1, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r9;
    // 0x801E3B9C: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x801E3BA0: nop

    // 0x801E3BA4: addiu       $t8, $v0, 0x8
    ctx->r24 = ADD32(ctx->r2, 0X8);
    // 0x801E3BA8: sw          $t8, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r24;
    // 0x801E3BAC: sw          $t2, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r10;
    // 0x801E3BB0: lw          $t9, -0x4($a3)
    ctx->r25 = MEM_W(ctx->r7, -0X4);
    // 0x801E3BB4: addu        $t8, $a1, $at
    ctx->r24 = ADD32(ctx->r5, ctx->r1);
    // 0x801E3BB8: sw          $t9, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r25;
    // 0x801E3BBC: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x801E3BC0: nop

    // 0x801E3BC4: addiu       $t6, $v0, 0x8
    ctx->r14 = ADD32(ctx->r2, 0X8);
    // 0x801E3BC8: sw          $t6, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r14;
    // 0x801E3BCC: sw          $a2, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r6;
    // 0x801E3BD0: sw          $t0, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r8;
    // 0x801E3BD4: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x801E3BD8: nop

    // 0x801E3BDC: addiu       $t7, $v0, 0x8
    ctx->r15 = ADD32(ctx->r2, 0X8);
    // 0x801E3BE0: sw          $t7, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r15;
    // 0x801E3BE4: sw          $t8, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r24;
    // 0x801E3BE8: sw          $t1, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r9;
    // 0x801E3BEC: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x801E3BF0: nop

    // 0x801E3BF4: addiu       $t9, $v0, 0x8
    ctx->r25 = ADD32(ctx->r2, 0X8);
    // 0x801E3BF8: sw          $t9, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r25;
    // 0x801E3BFC: sw          $t2, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r10;
    // 0x801E3C00: lw          $t6, 0x0($a3)
    ctx->r14 = MEM_W(ctx->r7, 0X0);
    // 0x801E3C04: b           L_801E3E34
    // 0x801E3C08: sw          $t6, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r14;
        goto L_801E3E34;
    // 0x801E3C08: sw          $t6, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r14;
L_801E3C0C:
    // 0x801E3C0C: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x801E3C10: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x801E3C14: addiu       $t7, $v0, 0x8
    ctx->r15 = ADD32(ctx->r2, 0X8);
    // 0x801E3C18: sw          $t7, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r15;
    // 0x801E3C1C: ori         $at, $at, 0x180
    ctx->r1 = ctx->r1 | 0X180;
    // 0x801E3C20: addu        $t8, $a1, $at
    ctx->r24 = ADD32(ctx->r5, ctx->r1);
    // 0x801E3C24: sw          $t8, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r24;
    // 0x801E3C28: sw          $t0, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r8;
    // 0x801E3C2C: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x801E3C30: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x801E3C34: addiu       $t9, $v0, 0x8
    ctx->r25 = ADD32(ctx->r2, 0X8);
    // 0x801E3C38: lui         $t1, 0xBC00
    ctx->r9 = S32(0XBC00 << 16);
    // 0x801E3C3C: sw          $t9, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r25;
    // 0x801E3C40: ori         $at, $at, 0x1C0
    ctx->r1 = ctx->r1 | 0X1C0;
    // 0x801E3C44: ori         $t1, $t1, 0x2006
    ctx->r9 = ctx->r9 | 0X2006;
    // 0x801E3C48: addu        $t4, $a1, $at
    ctx->r12 = ADD32(ctx->r5, ctx->r1);
    // 0x801E3C4C: sw          $t4, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r12;
    // 0x801E3C50: sw          $t1, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r9;
    // 0x801E3C54: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x801E3C58: lui         $t2, 0x600
    ctx->r10 = S32(0X600 << 16);
    // 0x801E3C5C: addiu       $t6, $v0, 0x8
    ctx->r14 = ADD32(ctx->r2, 0X8);
    // 0x801E3C60: sw          $t6, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r14;
    // 0x801E3C64: sw          $t2, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r10;
    // 0x801E3C68: lw          $t7, 0x0($a3)
    ctx->r15 = MEM_W(ctx->r7, 0X0);
    // 0x801E3C6C: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x801E3C70: sw          $t7, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r15;
    // 0x801E3C74: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x801E3C78: ori         $at, $at, 0x280
    ctx->r1 = ctx->r1 | 0X280;
    // 0x801E3C7C: addiu       $t8, $v0, 0x8
    ctx->r24 = ADD32(ctx->r2, 0X8);
    // 0x801E3C80: sw          $t8, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r24;
    // 0x801E3C84: addu        $t9, $a1, $at
    ctx->r25 = ADD32(ctx->r5, ctx->r1);
    // 0x801E3C88: sw          $t9, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r25;
    // 0x801E3C8C: sw          $t0, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r8;
    // 0x801E3C90: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x801E3C94: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x801E3C98: addiu       $t6, $v0, 0x8
    ctx->r14 = ADD32(ctx->r2, 0X8);
    // 0x801E3C9C: sw          $t6, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r14;
    // 0x801E3CA0: ori         $at, $at, 0x2C0
    ctx->r1 = ctx->r1 | 0X2C0;
    // 0x801E3CA4: addu        $t3, $a1, $at
    ctx->r11 = ADD32(ctx->r5, ctx->r1);
    // 0x801E3CA8: sw          $t3, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r11;
    // 0x801E3CAC: sw          $t1, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r9;
    // 0x801E3CB0: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x801E3CB4: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x801E3CB8: addiu       $t7, $v0, 0x8
    ctx->r15 = ADD32(ctx->r2, 0X8);
    // 0x801E3CBC: sw          $t7, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r15;
    // 0x801E3CC0: sw          $t2, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r10;
    // 0x801E3CC4: lw          $t8, 0x4($a3)
    ctx->r24 = MEM_W(ctx->r7, 0X4);
    // 0x801E3CC8: ori         $at, $at, 0x200
    ctx->r1 = ctx->r1 | 0X200;
    // 0x801E3CCC: sw          $t8, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r24;
    // 0x801E3CD0: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x801E3CD4: addu        $a2, $a1, $at
    ctx->r6 = ADD32(ctx->r5, ctx->r1);
    // 0x801E3CD8: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    // 0x801E3CDC: addiu       $t9, $v0, 0x8
    ctx->r25 = ADD32(ctx->r2, 0X8);
    // 0x801E3CE0: sw          $t9, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r25;
    // 0x801E3CE4: lw          $t6, 0x18($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X18);
    // 0x801E3CE8: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x801E3CEC: sw          $t0, 0x0($t6)
    MEM_W(0X0, ctx->r14) = ctx->r8;
    // 0x801E3CF0: sw          $t4, 0x4($t6)
    MEM_W(0X4, ctx->r14) = ctx->r12;
    // 0x801E3CF4: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x801E3CF8: ori         $at, $at, 0x300
    ctx->r1 = ctx->r1 | 0X300;
    // 0x801E3CFC: addiu       $t7, $v0, 0x8
    ctx->r15 = ADD32(ctx->r2, 0X8);
    // 0x801E3D00: sw          $t7, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r15;
    // 0x801E3D04: sw          $a2, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r6;
    // 0x801E3D08: sw          $t1, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r9;
    // 0x801E3D0C: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x801E3D10: addu        $v1, $a1, $at
    ctx->r3 = ADD32(ctx->r5, ctx->r1);
    // 0x801E3D14: addiu       $t8, $v0, 0x8
    ctx->r24 = ADD32(ctx->r2, 0X8);
    // 0x801E3D18: sw          $t8, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r24;
    // 0x801E3D1C: sw          $t2, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r10;
    // 0x801E3D20: lw          $t9, 0x8($a3)
    ctx->r25 = MEM_W(ctx->r7, 0X8);
    // 0x801E3D24: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x801E3D28: sw          $t9, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r25;
    // 0x801E3D2C: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x801E3D30: ori         $at, $at, 0x240
    ctx->r1 = ctx->r1 | 0X240;
    // 0x801E3D34: sw          $v0, 0xC($sp)
    MEM_W(0XC, ctx->r29) = ctx->r2;
    // 0x801E3D38: addiu       $t6, $v0, 0x8
    ctx->r14 = ADD32(ctx->r2, 0X8);
    // 0x801E3D3C: sw          $t6, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r14;
    // 0x801E3D40: lw          $t7, 0xC($sp)
    ctx->r15 = MEM_W(ctx->r29, 0XC);
    // 0x801E3D44: addiu       $a3, $a3, 0x14
    ctx->r7 = ADD32(ctx->r7, 0X14);
    // 0x801E3D48: sw          $t0, 0x0($t7)
    MEM_W(0X0, ctx->r15) = ctx->r8;
    // 0x801E3D4C: sw          $t3, 0x4($t7)
    MEM_W(0X4, ctx->r15) = ctx->r11;
    // 0x801E3D50: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x801E3D54: nop

    // 0x801E3D58: addiu       $t8, $v0, 0x8
    ctx->r24 = ADD32(ctx->r2, 0X8);
    // 0x801E3D5C: sw          $t8, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r24;
    // 0x801E3D60: sw          $v1, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r3;
    // 0x801E3D64: sw          $t1, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r9;
    // 0x801E3D68: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x801E3D6C: nop

    // 0x801E3D70: addiu       $t9, $v0, 0x8
    ctx->r25 = ADD32(ctx->r2, 0X8);
    // 0x801E3D74: sw          $t9, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r25;
    // 0x801E3D78: sw          $t2, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r10;
    // 0x801E3D7C: lw          $t6, -0x8($a3)
    ctx->r14 = MEM_W(ctx->r7, -0X8);
    // 0x801E3D80: nop

    // 0x801E3D84: sw          $t6, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r14;
    // 0x801E3D88: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x801E3D8C: addu        $t6, $a1, $at
    ctx->r14 = ADD32(ctx->r5, ctx->r1);
    // 0x801E3D90: sw          $v0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r2;
    // 0x801E3D94: addiu       $t7, $v0, 0x8
    ctx->r15 = ADD32(ctx->r2, 0X8);
    // 0x801E3D98: sw          $t7, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r15;
    // 0x801E3D9C: lw          $t8, 0x0($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X0);
    // 0x801E3DA0: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x801E3DA4: sw          $t0, 0x0($t8)
    MEM_W(0X0, ctx->r24) = ctx->r8;
    // 0x801E3DA8: sw          $a2, 0x4($t8)
    MEM_W(0X4, ctx->r24) = ctx->r6;
    // 0x801E3DAC: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x801E3DB0: ori         $at, $at, 0x340
    ctx->r1 = ctx->r1 | 0X340;
    // 0x801E3DB4: addiu       $t9, $v0, 0x8
    ctx->r25 = ADD32(ctx->r2, 0X8);
    // 0x801E3DB8: sw          $t9, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r25;
    // 0x801E3DBC: sw          $t6, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r14;
    // 0x801E3DC0: sw          $t1, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r9;
    // 0x801E3DC4: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x801E3DC8: nop

    // 0x801E3DCC: addiu       $t7, $v0, 0x8
    ctx->r15 = ADD32(ctx->r2, 0X8);
    // 0x801E3DD0: sw          $t7, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r15;
    // 0x801E3DD4: sw          $t2, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r10;
    // 0x801E3DD8: lw          $t8, -0x4($a3)
    ctx->r24 = MEM_W(ctx->r7, -0X4);
    // 0x801E3DDC: addu        $t7, $a1, $at
    ctx->r15 = ADD32(ctx->r5, ctx->r1);
    // 0x801E3DE0: sw          $t8, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r24;
    // 0x801E3DE4: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x801E3DE8: nop

    // 0x801E3DEC: addiu       $t9, $v0, 0x8
    ctx->r25 = ADD32(ctx->r2, 0X8);
    // 0x801E3DF0: sw          $t9, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r25;
    // 0x801E3DF4: sw          $v1, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r3;
    // 0x801E3DF8: sw          $t0, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r8;
    // 0x801E3DFC: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x801E3E00: nop

    // 0x801E3E04: addiu       $t6, $v0, 0x8
    ctx->r14 = ADD32(ctx->r2, 0X8);
    // 0x801E3E08: sw          $t6, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r14;
    // 0x801E3E0C: sw          $t7, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r15;
    // 0x801E3E10: sw          $t1, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r9;
    // 0x801E3E14: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x801E3E18: nop

    // 0x801E3E1C: addiu       $t8, $v0, 0x8
    ctx->r24 = ADD32(ctx->r2, 0X8);
    // 0x801E3E20: sw          $t8, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r24;
    // 0x801E3E24: sw          $t2, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r10;
    // 0x801E3E28: lw          $t9, 0x0($a3)
    ctx->r25 = MEM_W(ctx->r7, 0X0);
    // 0x801E3E2C: nop

    // 0x801E3E30: sw          $t9, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r25;
L_801E3E34:
    // 0x801E3E34: jr          $ra
    // 0x801E3E38: addiu       $sp, $sp, 0x80
    ctx->r29 = ADD32(ctx->r29, 0X80);
    return;
    // 0x801E3E38: addiu       $sp, $sp, 0x80
    ctx->r29 = ADD32(ctx->r29, 0X80);
;}
RECOMP_FUNC void func_801E3E3C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x801E3E3C: lw          $t0, 0x0($a0)
    ctx->r8 = MEM_W(ctx->r4, 0X0);
    // 0x801E3E40: lhu         $v0, 0x1C($a1)
    ctx->r2 = MEM_HU(ctx->r5, 0X1C);
    // 0x801E3E44: addiu       $t6, $t0, 0x8
    ctx->r14 = ADD32(ctx->r8, 0X8);
    // 0x801E3E48: sw          $t6, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r14;
    // 0x801E3E4C: lui         $t7, 0xE700
    ctx->r15 = S32(0XE700 << 16);
    // 0x801E3E50: addiu       $at, $zero, 0xFA
    ctx->r1 = ADD32(0, 0XFA);
    // 0x801E3E54: sw          $t7, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->r15;
    // 0x801E3E58: beq         $v0, $at, L_801E3EC4
    if (ctx->r2 == ctx->r1) {
        // 0x801E3E5C: sw          $zero, 0x4($t0)
        MEM_W(0X4, ctx->r8) = 0;
            goto L_801E3EC4;
    }
    // 0x801E3E5C: sw          $zero, 0x4($t0)
    MEM_W(0X4, ctx->r8) = 0;
    // 0x801E3E60: addiu       $at, $zero, 0x100
    ctx->r1 = ADD32(0, 0X100);
    // 0x801E3E64: beq         $v0, $at, L_801E3E8C
    if (ctx->r2 == ctx->r1) {
        // 0x801E3E68: lui         $t9, 0xFA00
        ctx->r25 = S32(0XFA00 << 16);
            goto L_801E3E8C;
    }
    // 0x801E3E68: lui         $t9, 0xFA00
    ctx->r25 = S32(0XFA00 << 16);
    // 0x801E3E6C: addiu       $at, $zero, 0x101
    ctx->r1 = ADD32(0, 0X101);
    // 0x801E3E70: beq         $v0, $at, L_801E3E8C
    if (ctx->r2 == ctx->r1) {
        // 0x801E3E74: addiu       $at, $zero, 0x131
        ctx->r1 = ADD32(0, 0X131);
            goto L_801E3E8C;
    }
    // 0x801E3E74: addiu       $at, $zero, 0x131
    ctx->r1 = ADD32(0, 0X131);
    // 0x801E3E78: beq         $v0, $at, L_801E3EC4
    if (ctx->r2 == ctx->r1) {
        // 0x801E3E7C: nop
    
            goto L_801E3EC4;
    }
    // 0x801E3E7C: nop

    // 0x801E3E80: sw          $zero, 0x0($a2)
    MEM_W(0X0, ctx->r6) = 0;
    // 0x801E3E84: jr          $ra
    // 0x801E3E88: sw          $zero, 0x0($a3)
    MEM_W(0X0, ctx->r7) = 0;
    return;
    // 0x801E3E88: sw          $zero, 0x0($a3)
    MEM_W(0X0, ctx->r7) = 0;
L_801E3E8C:
    // 0x801E3E8C: lw          $t0, 0x0($a0)
    ctx->r8 = MEM_W(ctx->r4, 0X0);
    // 0x801E3E90: lui         $t2, 0x8080
    ctx->r10 = S32(0X8080 << 16);
    // 0x801E3E94: addiu       $t8, $t0, 0x8
    ctx->r24 = ADD32(ctx->r8, 0X8);
    // 0x801E3E98: sw          $t8, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r24;
    // 0x801E3E9C: ori         $t2, $t2, 0x80FF
    ctx->r10 = ctx->r10 | 0X80FF;
    // 0x801E3EA0: lui         $t3, 0x801F
    ctx->r11 = S32(0X801F << 16);
    // 0x801E3EA4: addiu       $t3, $t3, 0x5F48
    ctx->r11 = ADD32(ctx->r11, 0X5F48);
    // 0x801E3EA8: lui         $t4, 0x801F
    ctx->r12 = S32(0X801F << 16);
    // 0x801E3EAC: sw          $t2, 0x4($t0)
    MEM_W(0X4, ctx->r8) = ctx->r10;
    // 0x801E3EB0: sw          $t9, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->r25;
    // 0x801E3EB4: sw          $t3, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r11;
    // 0x801E3EB8: addiu       $t4, $t4, 0x5FC8
    ctx->r12 = ADD32(ctx->r12, 0X5FC8);
    // 0x801E3EBC: jr          $ra
    // 0x801E3EC0: sw          $t4, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->r12;
    return;
    // 0x801E3EC0: sw          $t4, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->r12;
L_801E3EC4:
    // 0x801E3EC4: lui         $t5, 0x8009
    ctx->r13 = S32(0X8009 << 16);
    // 0x801E3EC8: lw          $t5, 0x3B20($t5)
    ctx->r13 = MEM_W(ctx->r13, 0X3B20);
    // 0x801E3ECC: lui         $t8, 0x8009
    ctx->r24 = S32(0X8009 << 16);
    // 0x801E3ED0: lhu         $t6, 0xDC($t5)
    ctx->r14 = MEM_HU(ctx->r13, 0XDC);
    // 0x801E3ED4: lui         $t2, 0xFA00
    ctx->r10 = S32(0XFA00 << 16);
    // 0x801E3ED8: andi        $t7, $t6, 0x4
    ctx->r15 = ctx->r14 & 0X4;
    // 0x801E3EDC: bne         $t7, $zero, L_801E3EF4
    if (ctx->r15 != 0) {
        // 0x801E3EE0: lui         $t3, 0xFF00
        ctx->r11 = S32(0XFF00 << 16);
            goto L_801E3EF4;
    }
    // 0x801E3EE0: lui         $t3, 0xFF00
    ctx->r11 = S32(0XFF00 << 16);
    // 0x801E3EE4: lw          $t8, 0x6980($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X6980);
    // 0x801E3EE8: addiu       $at, $zero, 0x6
    ctx->r1 = ADD32(0, 0X6);
    // 0x801E3EEC: bne         $t8, $at, L_801E3F10
    if (ctx->r24 != ctx->r1) {
        // 0x801E3EF0: lui         $t5, 0xFA00
        ctx->r13 = S32(0XFA00 << 16);
            goto L_801E3F10;
    }
    // 0x801E3EF0: lui         $t5, 0xFA00
    ctx->r13 = S32(0XFA00 << 16);
L_801E3EF4:
    // 0x801E3EF4: lw          $t0, 0x0($a0)
    ctx->r8 = MEM_W(ctx->r4, 0X0);
    // 0x801E3EF8: ori         $t3, $t3, 0xFF
    ctx->r11 = ctx->r11 | 0XFF;
    // 0x801E3EFC: addiu       $t9, $t0, 0x8
    ctx->r25 = ADD32(ctx->r8, 0X8);
    // 0x801E3F00: sw          $t9, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r25;
    // 0x801E3F04: sw          $t3, 0x4($t0)
    MEM_W(0X4, ctx->r8) = ctx->r11;
    // 0x801E3F08: b           L_801E3F2C
    // 0x801E3F0C: sw          $t2, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->r10;
        goto L_801E3F2C;
    // 0x801E3F0C: sw          $t2, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->r10;
L_801E3F10:
    // 0x801E3F10: lw          $t0, 0x0($a0)
    ctx->r8 = MEM_W(ctx->r4, 0X0);
    // 0x801E3F14: lui         $t6, 0xFFFF
    ctx->r14 = S32(0XFFFF << 16);
    // 0x801E3F18: addiu       $t4, $t0, 0x8
    ctx->r12 = ADD32(ctx->r8, 0X8);
    // 0x801E3F1C: sw          $t4, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r12;
    // 0x801E3F20: ori         $t6, $t6, 0xFF
    ctx->r14 = ctx->r14 | 0XFF;
    // 0x801E3F24: sw          $t6, 0x4($t0)
    MEM_W(0X4, ctx->r8) = ctx->r14;
    // 0x801E3F28: sw          $t5, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->r13;
L_801E3F2C:
    // 0x801E3F2C: lui         $t7, 0x801F
    ctx->r15 = S32(0X801F << 16);
    // 0x801E3F30: sw          $zero, 0x0($a2)
    MEM_W(0X0, ctx->r6) = 0;
    // 0x801E3F34: addiu       $t7, $t7, 0x5DD0
    ctx->r15 = ADD32(ctx->r15, 0X5DD0);
    // 0x801E3F38: sw          $t7, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->r15;
    // 0x801E3F3C: jr          $ra
    // 0x801E3F40: nop

    return;
    // 0x801E3F40: nop

;}
RECOMP_FUNC void func_801E3F44(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x801E3F44: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x801E3F48: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x801E3F4C: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x801E3F50: sw          $a1, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r5;
    // 0x801E3F54: lw          $t6, 0x30($a2)
    ctx->r14 = MEM_W(ctx->r6, 0X30);
    // 0x801E3F58: addiu       $at, $zero, 0x5
    ctx->r1 = ADD32(0, 0X5);
    // 0x801E3F5C: sw          $t6, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r14;
    // 0x801E3F60: lhu         $v0, 0x2($t6)
    ctx->r2 = MEM_HU(ctx->r14, 0X2);
    // 0x801E3F64: lhu         $t0, 0x3C($t6)
    ctx->r8 = MEM_HU(ctx->r14, 0X3C);
    // 0x801E3F68: andi        $t9, $v0, 0x7
    ctx->r25 = ctx->r2 & 0X7;
    // 0x801E3F6C: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x801E3F70: beq         $t9, $at, L_801E4064
    if (ctx->r25 == ctx->r1) {
        // 0x801E3F74: andi        $t8, $t0, 0x8000
        ctx->r24 = ctx->r8 & 0X8000;
            goto L_801E4064;
    }
    // 0x801E3F74: andi        $t8, $t0, 0x8000
    ctx->r24 = ctx->r8 & 0X8000;
    // 0x801E3F78: addiu       $at, $zero, 0x6
    ctx->r1 = ADD32(0, 0X6);
    // 0x801E3F7C: beq         $t9, $at, L_801E4064
    if (ctx->r25 == ctx->r1) {
        // 0x801E3F80: or          $a1, $t6, $zero
        ctx->r5 = ctx->r14 | 0;
            goto L_801E4064;
    }
    // 0x801E3F80: or          $a1, $t6, $zero
    ctx->r5 = ctx->r14 | 0;
    // 0x801E3F84: addiu       $a2, $sp, 0x38
    ctx->r6 = ADD32(ctx->r29, 0X38);
    // 0x801E3F88: addiu       $a3, $sp, 0x3C
    ctx->r7 = ADD32(ctx->r29, 0X3C);
    // 0x801E3F8C: jal         0x801E3E3C
    // 0x801E3F90: sw          $t8, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r24;
    func_801E3E3C(rdram, ctx);
        goto after_0;
    // 0x801E3F90: sw          $t8, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r24;
    after_0:
    // 0x801E3F94: lw          $t1, 0x3C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X3C);
    // 0x801E3F98: lw          $a2, 0x4C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X4C);
    // 0x801E3F9C: lw          $t0, 0x44($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X44);
    // 0x801E3FA0: beq         $t1, $zero, L_801E4000
    if (ctx->r9 == 0) {
        // 0x801E3FA4: lui         $t3, 0x102
        ctx->r11 = S32(0X102 << 16);
            goto L_801E4000;
    }
    // 0x801E3FA4: lui         $t3, 0x102
    ctx->r11 = S32(0X102 << 16);
    // 0x801E3FA8: lw          $a1, 0x0($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X0);
    // 0x801E3FAC: ori         $t3, $t3, 0x40
    ctx->r11 = ctx->r11 | 0X40;
    // 0x801E3FB0: addiu       $t2, $a1, 0x8
    ctx->r10 = ADD32(ctx->r5, 0X8);
    // 0x801E3FB4: sw          $t2, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r10;
    // 0x801E3FB8: beq         $t0, $zero, L_801E3FC8
    if (ctx->r8 == 0) {
        // 0x801E3FBC: sw          $t3, 0x0($a1)
        MEM_W(0X0, ctx->r5) = ctx->r11;
            goto L_801E3FC8;
    }
    // 0x801E3FBC: sw          $t3, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r11;
    // 0x801E3FC0: b           L_801E3FCC
    // 0x801E3FC4: addiu       $a0, $zero, 0x9
    ctx->r4 = ADD32(0, 0X9);
        goto L_801E3FCC;
    // 0x801E3FC4: addiu       $a0, $zero, 0x9
    ctx->r4 = ADD32(0, 0X9);
L_801E3FC8:
    // 0x801E3FC8: addiu       $a0, $zero, 0xD
    ctx->r4 = ADD32(0, 0XD);
L_801E3FCC:
    // 0x801E3FCC: sll         $t4, $a0, 6
    ctx->r12 = S32(ctx->r4 << 6);
    // 0x801E3FD0: addu        $t5, $t4, $a2
    ctx->r13 = ADD32(ctx->r12, ctx->r6);
    // 0x801E3FD4: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x801E3FD8: addu        $t6, $t5, $at
    ctx->r14 = ADD32(ctx->r13, ctx->r1);
    // 0x801E3FDC: sw          $t6, 0x4($a1)
    MEM_W(0X4, ctx->r5) = ctx->r14;
    // 0x801E3FE0: lw          $v0, 0x0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X0);
    // 0x801E3FE4: lui         $t7, 0x600
    ctx->r15 = S32(0X600 << 16);
    // 0x801E3FE8: addiu       $t8, $v0, 0x8
    ctx->r24 = ADD32(ctx->r2, 0X8);
    // 0x801E3FEC: sw          $t8, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r24;
    // 0x801E3FF0: sw          $t7, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r15;
    // 0x801E3FF4: lw          $t9, 0x3C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X3C);
    // 0x801E3FF8: nop

    // 0x801E3FFC: sw          $t9, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r25;
L_801E4000:
    // 0x801E4000: lw          $t1, 0x38($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X38);
    // 0x801E4004: lui         $t3, 0x102
    ctx->r11 = S32(0X102 << 16);
    // 0x801E4008: beq         $t1, $zero, L_801E4064
    if (ctx->r9 == 0) {
        // 0x801E400C: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_801E4064;
    }
    // 0x801E400C: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x801E4010: lw          $a1, 0x0($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X0);
    // 0x801E4014: ori         $t3, $t3, 0x40
    ctx->r11 = ctx->r11 | 0X40;
    // 0x801E4018: addiu       $t2, $a1, 0x8
    ctx->r10 = ADD32(ctx->r5, 0X8);
    // 0x801E401C: sw          $t2, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r10;
    // 0x801E4020: beq         $t0, $zero, L_801E4030
    if (ctx->r8 == 0) {
        // 0x801E4024: sw          $t3, 0x0($a1)
        MEM_W(0X0, ctx->r5) = ctx->r11;
            goto L_801E4030;
    }
    // 0x801E4024: sw          $t3, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r11;
    // 0x801E4028: b           L_801E4034
    // 0x801E402C: addiu       $a0, $zero, 0xD
    ctx->r4 = ADD32(0, 0XD);
        goto L_801E4034;
    // 0x801E402C: addiu       $a0, $zero, 0xD
    ctx->r4 = ADD32(0, 0XD);
L_801E4030:
    // 0x801E4030: addiu       $a0, $zero, 0x9
    ctx->r4 = ADD32(0, 0X9);
L_801E4034:
    // 0x801E4034: sll         $t4, $a0, 6
    ctx->r12 = S32(ctx->r4 << 6);
    // 0x801E4038: addu        $t5, $t4, $a2
    ctx->r13 = ADD32(ctx->r12, ctx->r6);
    // 0x801E403C: addu        $t6, $t5, $at
    ctx->r14 = ADD32(ctx->r13, ctx->r1);
    // 0x801E4040: sw          $t6, 0x4($a1)
    MEM_W(0X4, ctx->r5) = ctx->r14;
    // 0x801E4044: lw          $v0, 0x0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X0);
    // 0x801E4048: lui         $t7, 0x600
    ctx->r15 = S32(0X600 << 16);
    // 0x801E404C: addiu       $t8, $v0, 0x8
    ctx->r24 = ADD32(ctx->r2, 0X8);
    // 0x801E4050: sw          $t8, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r24;
    // 0x801E4054: sw          $t7, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r15;
    // 0x801E4058: lw          $t9, 0x38($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X38);
    // 0x801E405C: nop

    // 0x801E4060: sw          $t9, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r25;
L_801E4064:
    // 0x801E4064: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x801E4068: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x801E406C: jr          $ra
    // 0x801E4070: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    return;
    // 0x801E4070: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    // 0x801E4074: nop

    // 0x801E4078: nop

    // 0x801E407C: nop

;}
RECOMP_FUNC void func_8039ABF0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8039ABF0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8039ABF4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8039ABF8: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8039ABFC: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x8039AC00: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    // 0x8039AC04: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x8039AC08: jal         0x80021214
    // 0x8039AC0C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_80021214(rdram, ctx);
        goto after_0;
    // 0x8039AC0C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_0:
    // 0x8039AC10: lui         $t7, 0x800B
    ctx->r15 = S32(0X800B << 16);
    // 0x8039AC14: lw          $t6, 0x1C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X1C);
    // 0x8039AC18: addiu       $t7, $t7, -0x6CE4
    ctx->r15 = ADD32(ctx->r15, -0X6CE4);
    // 0x8039AC1C: lw          $at, 0x0($t7)
    ctx->r1 = MEM_W(ctx->r15, 0X0);
    // 0x8039AC20: lw          $a0, 0x4($t6)
    ctx->r4 = MEM_W(ctx->r14, 0X4);
    // 0x8039AC24: sw          $at, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r1;
    // 0x8039AC28: lw          $a2, 0x4($t7)
    ctx->r6 = MEM_W(ctx->r15, 0X4);
    // 0x8039AC2C: lw          $a1, 0x4($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X4);
    // 0x8039AC30: sw          $a2, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r6;
    // 0x8039AC34: lw          $a3, 0x8($t7)
    ctx->r7 = MEM_W(ctx->r15, 0X8);
    // 0x8039AC38: jal         0x8004B078
    // 0x8039AC3C: sw          $a3, 0xC($sp)
    MEM_W(0XC, ctx->r29) = ctx->r7;
    func_8004B078(rdram, ctx);
        goto after_1;
    // 0x8039AC3C: sw          $a3, 0xC($sp)
    MEM_W(0XC, ctx->r29) = ctx->r7;
    after_1:
    // 0x8039AC40: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x8039AC44: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x8039AC48: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    // 0x8039AC4C: jal         0x8002B608
    // 0x8039AC50: addiu       $a3, $zero, 0xFF
    ctx->r7 = ADD32(0, 0XFF);
    func_8002B608(rdram, ctx);
        goto after_2;
    // 0x8039AC50: addiu       $a3, $zero, 0xFF
    ctx->r7 = ADD32(0, 0XFF);
    after_2:
    // 0x8039AC54: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8039AC58: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8039AC5C: jr          $ra
    // 0x8039AC60: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    return;
    // 0x8039AC60: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
;}
RECOMP_FUNC void func_8039AC64(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8039AC64: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8039AC68: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8039AC6C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8039AC70: jal         0x80036234
    // 0x8039AC74: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    func_80036234(rdram, ctx);
        goto after_0;
    // 0x8039AC74: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    after_0:
    // 0x8039AC78: lui         $a0, 0x803B
    ctx->r4 = S32(0X803B << 16);
    // 0x8039AC7C: jal         0x80035FF0
    // 0x8039AC80: addiu       $a0, $a0, -0x2C70
    ctx->r4 = ADD32(ctx->r4, -0X2C70);
    func_80035FF0(rdram, ctx);
        goto after_1;
    // 0x8039AC80: addiu       $a0, $a0, -0x2C70
    ctx->r4 = ADD32(ctx->r4, -0X2C70);
    after_1:
    // 0x8039AC84: addiu       $a0, $zero, 0xF00
    ctx->r4 = ADD32(0, 0XF00);
    // 0x8039AC88: addiu       $a1, $zero, 0x14
    ctx->r5 = ADD32(0, 0X14);
    // 0x8039AC8C: jal         0x80049E40
    // 0x8039AC90: addiu       $a2, $zero, 0x14
    ctx->r6 = ADD32(0, 0X14);
    func_80049E40(rdram, ctx);
        goto after_2;
    // 0x8039AC90: addiu       $a2, $zero, 0x14
    ctx->r6 = ADD32(0, 0X14);
    after_2:
    // 0x8039AC94: lw          $t6, 0x18($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X18);
    // 0x8039AC98: lui         $a0, 0x803A
    ctx->r4 = S32(0X803A << 16);
    // 0x8039AC9C: addiu       $a0, $a0, 0xC00
    ctx->r4 = ADD32(ctx->r4, 0XC00);
    // 0x8039ACA0: jal         0x8002AAC0
    // 0x8039ACA4: sh          $zero, 0x2C($t6)
    MEM_H(0X2C, ctx->r14) = 0;
    func_8002AAC0(rdram, ctx);
        goto after_3;
    // 0x8039ACA4: sh          $zero, 0x2C($t6)
    MEM_H(0X2C, ctx->r14) = 0;
    after_3:
    // 0x8039ACA8: jal         0x80039DF0
    // 0x8039ACAC: nop

    func_80039DF0(rdram, ctx);
        goto after_4;
    // 0x8039ACAC: nop

    after_4:
    // 0x8039ACB0: jal         0x8006FB58
    // 0x8039ACB4: nop

    func_8006FB58(rdram, ctx);
        goto after_5;
    // 0x8039ACB4: nop

    after_5:
    // 0x8039ACB8: lui         $a0, 0x803A
    ctx->r4 = S32(0X803A << 16);
    // 0x8039ACBC: addiu       $a0, $a0, -0x51FC
    ctx->r4 = ADD32(ctx->r4, -0X51FC);
    // 0x8039ACC0: jal         0x800293DC
    // 0x8039ACC4: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    func_800293DC(rdram, ctx);
        goto after_6;
    // 0x8039ACC4: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_6:
    // 0x8039ACC8: lui         $a0, 0x803A
    ctx->r4 = S32(0X803A << 16);
    // 0x8039ACCC: addiu       $a0, $a0, -0x5318
    ctx->r4 = ADD32(ctx->r4, -0X5318);
    // 0x8039ACD0: jal         0x8004A9B4
    // 0x8039ACD4: addiu       $a1, $zero, 0xB
    ctx->r5 = ADD32(0, 0XB);
    func_8004A9B4(rdram, ctx);
        goto after_7;
    // 0x8039ACD4: addiu       $a1, $zero, 0xB
    ctx->r5 = ADD32(0, 0XB);
    after_7:
    // 0x8039ACD8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8039ACDC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8039ACE0: jr          $ra
    // 0x8039ACE4: nop

    return;
    // 0x8039ACE4: nop

;}
RECOMP_FUNC void func_8039ACE8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8039ACE8: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8039ACEC: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8039ACF0: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8039ACF4: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x8039ACF8: jal         0x800357CC
    // 0x8039ACFC: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    func_800357CC(rdram, ctx);
        goto after_0;
    // 0x8039ACFC: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    after_0:
    // 0x8039AD00: lui         $t6, 0x8012
    ctx->r14 = S32(0X8012 << 16);
    // 0x8039AD04: lw          $t6, -0x3250($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X3250);
    // 0x8039AD08: nop

    // 0x8039AD0C: lhu         $a0, 0x0($t6)
    ctx->r4 = MEM_HU(ctx->r14, 0X0);
    // 0x8039AD10: jal         0x80035B2C
    // 0x8039AD14: nop

    func_80035B2C(rdram, ctx);
        goto after_1;
    // 0x8039AD14: nop

    after_1:
    // 0x8039AD18: sll         $t7, $v0, 2
    ctx->r15 = S32(ctx->r2 << 2);
    // 0x8039AD1C: lui         $t9, 0x803A
    ctx->r25 = S32(0X803A << 16);
    // 0x8039AD20: addu        $t9, $t9, $t7
    ctx->r25 = ADD32(ctx->r25, ctx->r15);
    // 0x8039AD24: lw          $t9, 0xC48($t9)
    ctx->r25 = MEM_W(ctx->r25, 0XC48);
    // 0x8039AD28: lw          $a1, 0x24($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X24);
    // 0x8039AD2C: jalr        $t9
    // 0x8039AD30: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x8039AD30: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_2:
    // 0x8039AD34: lh          $a0, 0x26($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X26);
    // 0x8039AD38: jal         0x8001D6EC
    // 0x8039AD3C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_8001D6EC(rdram, ctx);
        goto after_3;
    // 0x8039AD3C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_3:
    // 0x8039AD40: sh          $v0, 0x26($s0)
    MEM_H(0X26, ctx->r16) = ctx->r2;
    // 0x8039AD44: lh          $t8, 0x26($s0)
    ctx->r24 = MEM_H(ctx->r16, 0X26);
    // 0x8039AD48: lui         $a1, 0x803A
    ctx->r5 = S32(0X803A << 16);
    // 0x8039AD4C: addu        $a1, $a1, $t8
    ctx->r5 = ADD32(ctx->r5, ctx->r24);
    // 0x8039AD50: lbu         $a1, 0xD3C($a1)
    ctx->r5 = MEM_BU(ctx->r5, 0XD3C);
    // 0x8039AD54: lh          $a0, 0x2E($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X2E);
    // 0x8039AD58: jal         0x8001D6EC
    // 0x8039AD5C: nop

    func_8001D6EC(rdram, ctx);
        goto after_4;
    // 0x8039AD5C: nop

    after_4:
    // 0x8039AD60: lh          $t0, 0x26($s0)
    ctx->r8 = MEM_H(ctx->r16, 0X26);
    // 0x8039AD64: sh          $v0, 0x2E($s0)
    MEM_H(0X2E, ctx->r16) = ctx->r2;
    // 0x8039AD68: lh          $t2, 0x2E($s0)
    ctx->r10 = MEM_H(ctx->r16, 0X2E);
    // 0x8039AD6C: sll         $t1, $t0, 2
    ctx->r9 = S32(ctx->r8 << 2);
    // 0x8039AD70: lui         $t4, 0x803A
    ctx->r12 = S32(0X803A << 16);
    // 0x8039AD74: addu        $t3, $t1, $t2
    ctx->r11 = ADD32(ctx->r9, ctx->r10);
    // 0x8039AD78: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x8039AD7C: lbu         $t4, 0xD34($t4)
    ctx->r12 = MEM_BU(ctx->r12, 0XD34);
    // 0x8039AD80: jal         0x80035860
    // 0x8039AD84: sh          $t4, 0x2C($s0)
    MEM_H(0X2C, ctx->r16) = ctx->r12;
    func_80035860(rdram, ctx);
        goto after_5;
    // 0x8039AD84: sh          $t4, 0x2C($s0)
    MEM_H(0X2C, ctx->r16) = ctx->r12;
    after_5:
    // 0x8039AD88: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8039AD8C: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8039AD90: jr          $ra
    // 0x8039AD94: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x8039AD94: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_8039AD98(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8039AD98: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8039AD9C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8039ADA0: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8039ADA4: jal         0x80035770
    // 0x8039ADA8: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    func_80035770(rdram, ctx);
        goto after_0;
    // 0x8039ADA8: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    after_0:
    // 0x8039ADAC: lw          $v0, 0x18($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X18);
    // 0x8039ADB0: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x8039ADB4: lh          $t7, 0x2C($v0)
    ctx->r15 = MEM_H(ctx->r2, 0X2C);
    // 0x8039ADB8: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x8039ADBC: sh          $t6, 0x2A($v0)
    MEM_H(0X2A, ctx->r2) = ctx->r14;
    // 0x8039ADC0: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x8039ADC4: jal         0x80037908
    // 0x8039ADC8: sb          $t7, -0x3165($at)
    MEM_B(-0X3165, ctx->r1) = ctx->r15;
    func_80037908(rdram, ctx);
        goto after_1;
    // 0x8039ADC8: sb          $t7, -0x3165($at)
    MEM_B(-0X3165, ctx->r1) = ctx->r15;
    after_1:
    // 0x8039ADCC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8039ADD0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8039ADD4: jr          $ra
    // 0x8039ADD8: nop

    return;
    // 0x8039ADD8: nop

;}
RECOMP_FUNC void func_8039ADDC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8039ADDC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8039ADE0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8039ADE4: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8039ADE8: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x8039ADEC: jal         0x80037908
    // 0x8039ADF0: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    func_80037908(rdram, ctx);
        goto after_0;
    // 0x8039ADF0: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_0:
    // 0x8039ADF4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8039ADF8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8039ADFC: jr          $ra
    // 0x8039AE00: nop

    return;
    // 0x8039AE00: nop

;}
RECOMP_FUNC void func_8039AE04(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8039AE04: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8039AE08: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x8039AE0C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8039AE10: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8039AE14: lui         $a1, 0x803A
    ctx->r5 = S32(0X803A << 16);
    // 0x8039AE18: addiu       $a1, $a1, 0xCE4
    ctx->r5 = ADD32(ctx->r5, 0XCE4);
    // 0x8039AE1C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x8039AE20: jal         0x8002F444
    // 0x8039AE24: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_8002F444(rdram, ctx);
        goto after_0;
    // 0x8039AE24: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_0:
    // 0x8039AE28: lui         $t6, 0x801B
    ctx->r14 = S32(0X801B << 16);
    // 0x8039AE2C: lh          $t6, -0x6B0($t6)
    ctx->r14 = MEM_H(ctx->r14, -0X6B0);
    // 0x8039AE30: lui         $t8, 0x803A
    ctx->r24 = S32(0X803A << 16);
    // 0x8039AE34: addiu       $t8, $t8, 0xC64
    ctx->r24 = ADD32(ctx->r24, 0XC64);
    // 0x8039AE38: sll         $t7, $t6, 4
    ctx->r15 = S32(ctx->r14 << 4);
    // 0x8039AE3C: addu        $a1, $t7, $t8
    ctx->r5 = ADD32(ctx->r15, ctx->r24);
    // 0x8039AE40: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x8039AE44: jal         0x8002F444
    // 0x8039AE48: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_8002F444(rdram, ctx);
        goto after_1;
    // 0x8039AE48: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_1:
    // 0x8039AE4C: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    // 0x8039AE50: lui         $a1, 0x803A
    ctx->r5 = S32(0X803A << 16);
    // 0x8039AE54: addiu       $a1, $a1, 0xD40
    ctx->r5 = ADD32(ctx->r5, 0XD40);
    // 0x8039AE58: jal         0x8004A298
    // 0x8039AE5C: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    func_8004A298(rdram, ctx);
        goto after_2;
    // 0x8039AE5C: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    after_2:
    // 0x8039AE60: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8039AE64: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8039AE68: jr          $ra
    // 0x8039AE6C: nop

    return;
    // 0x8039AE6C: nop

;}
RECOMP_FUNC void func_8039AE70(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8039AE70: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8039AE74: lui         $t7, 0x801B
    ctx->r15 = S32(0X801B << 16);
    // 0x8039AE78: lh          $t7, -0x6B4($t7)
    ctx->r15 = MEM_H(ctx->r15, -0X6B4);
    // 0x8039AE7C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8039AE80: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x8039AE84: lhu         $a3, 0x1E($a1)
    ctx->r7 = MEM_HU(ctx->r5, 0X1E);
    // 0x8039AE88: sll         $t8, $t7, 3
    ctx->r24 = S32(ctx->r15 << 3);
    // 0x8039AE8C: addu        $t0, $t8, $a3
    ctx->r8 = ADD32(ctx->r24, ctx->r7);
    // 0x8039AE90: andi        $a2, $t0, 0xFFFF
    ctx->r6 = ctx->r8 & 0XFFFF;
    // 0x8039AE94: jal         0x800392F4
    // 0x8039AE98: addiu       $a1, $zero, 0x24
    ctx->r5 = ADD32(0, 0X24);
    func_800392F4(rdram, ctx);
        goto after_0;
    // 0x8039AE98: addiu       $a1, $zero, 0x24
    ctx->r5 = ADD32(0, 0X24);
    after_0:
    // 0x8039AE9C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8039AEA0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8039AEA4: jr          $ra
    // 0x8039AEA8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    return;
    // 0x8039AEA8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
;}
RECOMP_FUNC void func_8039AEAC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8039AEAC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8039AEB0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8039AEB4: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x8039AEB8: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x8039AEBC: addiu       $a2, $zero, 0x30
    ctx->r6 = ADD32(0, 0X30);
    // 0x8039AEC0: jal         0x8039AED8
    // 0x8039AEC4: addiu       $a3, $zero, 0x34
    ctx->r7 = ADD32(0, 0X34);
    func_8039AED8(rdram, ctx);
        goto after_0;
    // 0x8039AEC4: addiu       $a3, $zero, 0x34
    ctx->r7 = ADD32(0, 0X34);
    after_0:
    // 0x8039AEC8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8039AECC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8039AED0: jr          $ra
    // 0x8039AED4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    return;
    // 0x8039AED4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
;}
RECOMP_FUNC void func_8039AED8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8039AED8: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8039AEDC: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x8039AEE0: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x8039AEE4: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8039AEE8: lb          $a0, -0x3165($a0)
    ctx->r4 = MEM_B(ctx->r4, -0X3165);
    // 0x8039AEEC: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x8039AEF0: sw          $a2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r6;
    // 0x8039AEF4: jal         0x80039C50
    // 0x8039AEF8: sw          $a3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r7;
    func_80039C50(rdram, ctx);
        goto after_0;
    // 0x8039AEF8: sw          $a3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r7;
    after_0:
    // 0x8039AEFC: lh          $t6, 0x26($sp)
    ctx->r14 = MEM_H(ctx->r29, 0X26);
    // 0x8039AF00: lui         $at, 0x2
    ctx->r1 = S32(0X2 << 16);
    // 0x8039AF04: ori         $at, $at, 0xFEE8
    ctx->r1 = ctx->r1 | 0XFEE8;
    // 0x8039AF08: lui         $t9, 0x800E
    ctx->r25 = S32(0X800E << 16);
    // 0x8039AF0C: sll         $t7, $t6, 5
    ctx->r15 = S32(ctx->r14 << 5);
    // 0x8039AF10: addu        $t8, $t7, $at
    ctx->r24 = ADD32(ctx->r15, ctx->r1);
    // 0x8039AF14: addiu       $t9, $t9, -0x3770
    ctx->r25 = ADD32(ctx->r25, -0X3770);
    // 0x8039AF18: lh          $a1, 0x2A($sp)
    ctx->r5 = MEM_H(ctx->r29, 0X2A);
    // 0x8039AF1C: lh          $a2, 0x2E($sp)
    ctx->r6 = MEM_H(ctx->r29, 0X2E);
    // 0x8039AF20: lui         $a3, 0x8012
    ctx->r7 = S32(0X8012 << 16);
    // 0x8039AF24: addiu       $t0, $zero, 0x8
    ctx->r8 = ADD32(0, 0X8);
    // 0x8039AF28: sw          $t0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r8;
    // 0x8039AF2C: addiu       $a3, $a3, -0x3160
    ctx->r7 = ADD32(ctx->r7, -0X3160);
    // 0x8039AF30: addu        $a0, $t8, $t9
    ctx->r4 = ADD32(ctx->r24, ctx->r25);
    // 0x8039AF34: jal         0x8002F3D4
    // 0x8039AF38: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    func_8002F3D4(rdram, ctx);
        goto after_1;
    // 0x8039AF38: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    after_1:
    // 0x8039AF3C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8039AF40: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x8039AF44: jr          $ra
    // 0x8039AF48: nop

    return;
    // 0x8039AF48: nop

;}
RECOMP_FUNC void func_8039AF4C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8039AF4C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8039AF50: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8039AF54: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8039AF58: jal         0x80036234
    // 0x8039AF5C: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    func_80036234(rdram, ctx);
        goto after_0;
    // 0x8039AF5C: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    after_0:
    // 0x8039AF60: lui         $a0, 0x803B
    ctx->r4 = S32(0X803B << 16);
    // 0x8039AF64: jal         0x80035FF0
    // 0x8039AF68: addiu       $a0, $a0, -0x2C70
    ctx->r4 = ADD32(ctx->r4, -0X2C70);
    func_80035FF0(rdram, ctx);
        goto after_1;
    // 0x8039AF68: addiu       $a0, $a0, -0x2C70
    ctx->r4 = ADD32(ctx->r4, -0X2C70);
    after_1:
    // 0x8039AF6C: addiu       $a0, $zero, 0xF00
    ctx->r4 = ADD32(0, 0XF00);
    // 0x8039AF70: addiu       $a1, $zero, 0x14
    ctx->r5 = ADD32(0, 0X14);
    // 0x8039AF74: jal         0x80049E40
    // 0x8039AF78: addiu       $a2, $zero, 0x14
    ctx->r6 = ADD32(0, 0X14);
    func_80049E40(rdram, ctx);
        goto after_2;
    // 0x8039AF78: addiu       $a2, $zero, 0x14
    ctx->r6 = ADD32(0, 0X14);
    after_2:
    // 0x8039AF7C: lui         $a0, 0x803A
    ctx->r4 = S32(0X803A << 16);
    // 0x8039AF80: jal         0x8002AAC0
    // 0x8039AF84: addiu       $a0, $a0, 0xE00
    ctx->r4 = ADD32(ctx->r4, 0XE00);
    func_8002AAC0(rdram, ctx);
        goto after_3;
    // 0x8039AF84: addiu       $a0, $a0, 0xE00
    ctx->r4 = ADD32(ctx->r4, 0XE00);
    after_3:
    // 0x8039AF88: jal         0x80039DF0
    // 0x8039AF8C: nop

    func_80039DF0(rdram, ctx);
        goto after_4;
    // 0x8039AF8C: nop

    after_4:
    // 0x8039AF90: jal         0x8006FB58
    // 0x8039AF94: nop

    func_8006FB58(rdram, ctx);
        goto after_5;
    // 0x8039AF94: nop

    after_5:
    // 0x8039AF98: lui         $a0, 0x803A
    ctx->r4 = S32(0X803A << 16);
    // 0x8039AF9C: addiu       $a0, $a0, -0x4E70
    ctx->r4 = ADD32(ctx->r4, -0X4E70);
    // 0x8039AFA0: jal         0x800293DC
    // 0x8039AFA4: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    func_800293DC(rdram, ctx);
        goto after_6;
    // 0x8039AFA4: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    after_6:
    // 0x8039AFA8: lui         $a0, 0x803A
    ctx->r4 = S32(0X803A << 16);
    // 0x8039AFAC: addiu       $a0, $a0, -0x5038
    ctx->r4 = ADD32(ctx->r4, -0X5038);
    // 0x8039AFB0: jal         0x8004A9B4
    // 0x8039AFB4: addiu       $a1, $zero, 0xB
    ctx->r5 = ADD32(0, 0XB);
    func_8004A9B4(rdram, ctx);
        goto after_7;
    // 0x8039AFB4: addiu       $a1, $zero, 0xB
    ctx->r5 = ADD32(0, 0XB);
    after_7:
    // 0x8039AFB8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8039AFBC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8039AFC0: jr          $ra
    // 0x8039AFC4: nop

    return;
    // 0x8039AFC4: nop

;}
RECOMP_FUNC void func_8039AFC8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8039AFC8: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8039AFCC: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8039AFD0: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8039AFD4: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x8039AFD8: jal         0x800357CC
    // 0x8039AFDC: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    func_800357CC(rdram, ctx);
        goto after_0;
    // 0x8039AFDC: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    after_0:
    // 0x8039AFE0: lui         $t6, 0x8012
    ctx->r14 = S32(0X8012 << 16);
    // 0x8039AFE4: lw          $t6, -0x3250($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X3250);
    // 0x8039AFE8: nop

    // 0x8039AFEC: lhu         $a0, 0x0($t6)
    ctx->r4 = MEM_HU(ctx->r14, 0X0);
    // 0x8039AFF0: jal         0x80035D2C
    // 0x8039AFF4: nop

    func_80035D2C(rdram, ctx);
        goto after_1;
    // 0x8039AFF4: nop

    after_1:
    // 0x8039AFF8: sll         $t7, $v0, 2
    ctx->r15 = S32(ctx->r2 << 2);
    // 0x8039AFFC: lui         $t9, 0x803A
    ctx->r25 = S32(0X803A << 16);
    // 0x8039B000: addu        $t9, $t9, $t7
    ctx->r25 = ADD32(ctx->r25, ctx->r15);
    // 0x8039B004: lw          $t9, 0xE48($t9)
    ctx->r25 = MEM_W(ctx->r25, 0XE48);
    // 0x8039B008: lw          $a1, 0x24($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X24);
    // 0x8039B00C: jalr        $t9
    // 0x8039B010: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x8039B010: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_2:
    // 0x8039B014: lh          $a0, 0x26($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X26);
    // 0x8039B018: jal         0x8001D6EC
    // 0x8039B01C: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    func_8001D6EC(rdram, ctx);
        goto after_3;
    // 0x8039B01C: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    after_3:
    // 0x8039B020: lh          $a0, 0x2E($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X2E);
    // 0x8039B024: sh          $v0, 0x26($s0)
    MEM_H(0X26, ctx->r16) = ctx->r2;
    // 0x8039B028: jal         0x8001D6EC
    // 0x8039B02C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_8001D6EC(rdram, ctx);
        goto after_4;
    // 0x8039B02C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_4:
    // 0x8039B030: sh          $v0, 0x2E($s0)
    MEM_H(0X2E, ctx->r16) = ctx->r2;
    // 0x8039B034: lh          $t8, 0x2E($s0)
    ctx->r24 = MEM_H(ctx->r16, 0X2E);
    // 0x8039B038: lh          $t1, 0x26($s0)
    ctx->r9 = MEM_H(ctx->r16, 0X26);
    // 0x8039B03C: sll         $t0, $t8, 2
    ctx->r8 = S32(ctx->r24 << 2);
    // 0x8039B040: lui         $t3, 0x803A
    ctx->r11 = S32(0X803A << 16);
    // 0x8039B044: addu        $t2, $t0, $t1
    ctx->r10 = ADD32(ctx->r8, ctx->r9);
    // 0x8039B048: addu        $t3, $t3, $t2
    ctx->r11 = ADD32(ctx->r11, ctx->r10);
    // 0x8039B04C: lbu         $t3, 0xEEC($t3)
    ctx->r11 = MEM_BU(ctx->r11, 0XEEC);
    // 0x8039B050: lh          $a0, 0x28($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X28);
    // 0x8039B054: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x8039B058: jal         0x8001D6EC
    // 0x8039B05C: sh          $t3, 0x2C($s0)
    MEM_H(0X2C, ctx->r16) = ctx->r11;
    func_8001D6EC(rdram, ctx);
        goto after_5;
    // 0x8039B05C: sh          $t3, 0x2C($s0)
    MEM_H(0X2C, ctx->r16) = ctx->r11;
    after_5:
    // 0x8039B060: jal         0x80035928
    // 0x8039B064: sh          $v0, 0x28($s0)
    MEM_H(0X28, ctx->r16) = ctx->r2;
    func_80035928(rdram, ctx);
        goto after_6;
    // 0x8039B064: sh          $v0, 0x28($s0)
    MEM_H(0X28, ctx->r16) = ctx->r2;
    after_6:
    // 0x8039B068: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8039B06C: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8039B070: jr          $ra
    // 0x8039B074: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x8039B074: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_8039B078(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8039B078: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8039B07C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8039B080: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x8039B084: jal         0x80035770
    // 0x8039B088: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_80035770(rdram, ctx);
        goto after_0;
    // 0x8039B088: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x8039B08C: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x8039B090: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x8039B094: lh          $t7, 0x28($a0)
    ctx->r15 = MEM_H(ctx->r4, 0X28);
    // 0x8039B098: lh          $t9, 0x2C($a0)
    ctx->r25 = MEM_H(ctx->r4, 0X2C);
    // 0x8039B09C: sll         $t8, $t7, 3
    ctx->r24 = S32(ctx->r15 << 3);
    // 0x8039B0A0: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x8039B0A4: sh          $t6, 0x2A($a0)
    MEM_H(0X2A, ctx->r4) = ctx->r14;
    // 0x8039B0A8: addu        $t0, $t8, $t9
    ctx->r8 = ADD32(ctx->r24, ctx->r25);
    // 0x8039B0AC: jal         0x8039B93C
    // 0x8039B0B0: sb          $t0, -0x3166($at)
    MEM_B(-0X3166, ctx->r1) = ctx->r8;
    func_8039B93C(rdram, ctx);
        goto after_1;
    // 0x8039B0B0: sb          $t0, -0x3166($at)
    MEM_B(-0X3166, ctx->r1) = ctx->r8;
    after_1:
    // 0x8039B0B4: beq         $v0, $zero, L_8039B0DC
    if (ctx->r2 == 0) {
        // 0x8039B0B8: nop
    
            goto L_8039B0DC;
    }
    // 0x8039B0B8: nop

    // 0x8039B0BC: jal         0x8039B438
    // 0x8039B0C0: nop

    func_8039B438(rdram, ctx);
        goto after_2;
    // 0x8039B0C0: nop

    after_2:
    // 0x8039B0C4: jal         0x8039B6DC
    // 0x8039B0C8: nop

    func_8039B6DC(rdram, ctx);
        goto after_3;
    // 0x8039B0C8: nop

    after_3:
    // 0x8039B0CC: jal         0x8039B7DC
    // 0x8039B0D0: nop

    func_8039B7DC(rdram, ctx);
        goto after_4;
    // 0x8039B0D0: nop

    after_4:
    // 0x8039B0D4: jal         0x8039B878
    // 0x8039B0D8: nop

    func_8039B878(rdram, ctx);
        goto after_5;
    // 0x8039B0D8: nop

    after_5:
L_8039B0DC:
    // 0x8039B0DC: jal         0x80037908
    // 0x8039B0E0: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    func_80037908(rdram, ctx);
        goto after_6;
    // 0x8039B0E0: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_6:
    // 0x8039B0E4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8039B0E8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8039B0EC: jr          $ra
    // 0x8039B0F0: nop

    return;
    // 0x8039B0F0: nop

;}
RECOMP_FUNC void func_8039B0F4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8039B0F4: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x8039B0F8: jr          $ra
    // 0x8039B0FC: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    return;
    // 0x8039B0FC: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
;}
RECOMP_FUNC void func_8039B100(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8039B100: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    // 0x8039B104: lh          $t6, 0x2E($a0)
    ctx->r14 = MEM_H(ctx->r4, 0X2E);
    // 0x8039B108: nop

    // 0x8039B10C: addiu       $t7, $t6, -0x1
    ctx->r15 = ADD32(ctx->r14, -0X1);
    // 0x8039B110: jr          $ra
    // 0x8039B114: sh          $t7, 0x2E($a0)
    MEM_H(0X2E, ctx->r4) = ctx->r15;
    return;
    // 0x8039B114: sh          $t7, 0x2E($a0)
    MEM_H(0X2E, ctx->r4) = ctx->r15;
;}
RECOMP_FUNC void func_8039B118(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8039B118: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    // 0x8039B11C: lh          $t6, 0x2E($a0)
    ctx->r14 = MEM_H(ctx->r4, 0X2E);
    // 0x8039B120: nop

    // 0x8039B124: addiu       $t7, $t6, 0x1
    ctx->r15 = ADD32(ctx->r14, 0X1);
    // 0x8039B128: jr          $ra
    // 0x8039B12C: sh          $t7, 0x2E($a0)
    MEM_H(0X2E, ctx->r4) = ctx->r15;
    return;
    // 0x8039B12C: sh          $t7, 0x2E($a0)
    MEM_H(0X2E, ctx->r4) = ctx->r15;
;}
RECOMP_FUNC void func_8039B130(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8039B130: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    // 0x8039B134: lh          $t6, 0x26($a0)
    ctx->r14 = MEM_H(ctx->r4, 0X26);
    // 0x8039B138: nop

    // 0x8039B13C: addiu       $t7, $t6, -0x1
    ctx->r15 = ADD32(ctx->r14, -0X1);
    // 0x8039B140: jr          $ra
    // 0x8039B144: sh          $t7, 0x26($a0)
    MEM_H(0X26, ctx->r4) = ctx->r15;
    return;
    // 0x8039B144: sh          $t7, 0x26($a0)
    MEM_H(0X26, ctx->r4) = ctx->r15;
;}
RECOMP_FUNC void func_8039B148(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8039B148: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    // 0x8039B14C: lh          $t6, 0x26($a0)
    ctx->r14 = MEM_H(ctx->r4, 0X26);
    // 0x8039B150: nop

    // 0x8039B154: addiu       $t7, $t6, 0x1
    ctx->r15 = ADD32(ctx->r14, 0X1);
    // 0x8039B158: jr          $ra
    // 0x8039B15C: sh          $t7, 0x26($a0)
    MEM_H(0X26, ctx->r4) = ctx->r15;
    return;
    // 0x8039B15C: sh          $t7, 0x26($a0)
    MEM_H(0X26, ctx->r4) = ctx->r15;
;}
RECOMP_FUNC void func_8039B160(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8039B160: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    // 0x8039B164: lh          $t6, 0x28($a0)
    ctx->r14 = MEM_H(ctx->r4, 0X28);
    // 0x8039B168: nop

    // 0x8039B16C: addiu       $t7, $t6, -0x1
    ctx->r15 = ADD32(ctx->r14, -0X1);
    // 0x8039B170: jr          $ra
    // 0x8039B174: sh          $t7, 0x28($a0)
    MEM_H(0X28, ctx->r4) = ctx->r15;
    return;
    // 0x8039B174: sh          $t7, 0x28($a0)
    MEM_H(0X28, ctx->r4) = ctx->r15;
;}
RECOMP_FUNC void func_8039B178(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8039B178: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    // 0x8039B17C: lh          $t6, 0x28($a0)
    ctx->r14 = MEM_H(ctx->r4, 0X28);
    // 0x8039B180: nop

    // 0x8039B184: addiu       $t7, $t6, 0x1
    ctx->r15 = ADD32(ctx->r14, 0X1);
    // 0x8039B188: jr          $ra
    // 0x8039B18C: sh          $t7, 0x28($a0)
    MEM_H(0X28, ctx->r4) = ctx->r15;
    return;
    // 0x8039B18C: sh          $t7, 0x28($a0)
    MEM_H(0X28, ctx->r4) = ctx->r15;
;}
RECOMP_FUNC void func_8039B190(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8039B190: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8039B194: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x8039B198: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8039B19C: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x8039B1A0: lui         $a1, 0x803A
    ctx->r5 = S32(0X803A << 16);
    // 0x8039B1A4: addiu       $a1, $a1, 0xE6C
    ctx->r5 = ADD32(ctx->r5, 0XE6C);
    // 0x8039B1A8: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x8039B1AC: jal         0x8002F444
    // 0x8039B1B0: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    func_8002F444(rdram, ctx);
        goto after_0;
    // 0x8039B1B0: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    after_0:
    // 0x8039B1B4: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    // 0x8039B1B8: lui         $a1, 0x803A
    ctx->r5 = S32(0X803A << 16);
    // 0x8039B1BC: addiu       $a1, $a1, 0xEF4
    ctx->r5 = ADD32(ctx->r5, 0XEF4);
    // 0x8039B1C0: jal         0x8004A298
    // 0x8039B1C4: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    func_8004A298(rdram, ctx);
        goto after_1;
    // 0x8039B1C4: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    after_1:
    // 0x8039B1C8: lw          $t6, 0x20($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X20);
    // 0x8039B1CC: lui         $a0, 0x8011
    ctx->r4 = S32(0X8011 << 16);
    // 0x8039B1D0: lw          $t7, 0x8($t6)
    ctx->r15 = MEM_W(ctx->r14, 0X8);
    // 0x8039B1D4: addiu       $t8, $zero, 0x2
    ctx->r24 = ADD32(0, 0X2);
    // 0x8039B1D8: lh          $a3, 0x28($t7)
    ctx->r7 = MEM_H(ctx->r15, 0X28);
    // 0x8039B1DC: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x8039B1E0: sw          $t9, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r25;
    // 0x8039B1E4: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    // 0x8039B1E8: addiu       $a0, $a0, -0x3748
    ctx->r4 = ADD32(ctx->r4, -0X3748);
    // 0x8039B1EC: addiu       $a1, $zero, 0x6F
    ctx->r5 = ADD32(0, 0X6F);
    // 0x8039B1F0: addiu       $a2, $zero, 0x57
    ctx->r6 = ADD32(0, 0X57);
    // 0x8039B1F4: jal         0x8002F60C
    // 0x8039B1F8: addiu       $a3, $a3, 0x1
    ctx->r7 = ADD32(ctx->r7, 0X1);
    func_8002F60C(rdram, ctx);
        goto after_2;
    // 0x8039B1F8: addiu       $a3, $a3, 0x1
    ctx->r7 = ADD32(ctx->r7, 0X1);
    after_2:
    // 0x8039B1FC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8039B200: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x8039B204: jr          $ra
    // 0x8039B208: nop

    return;
    // 0x8039B208: nop

;}
RECOMP_FUNC void func_8039B20C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8039B20C: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x8039B210: jr          $ra
    // 0x8039B214: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    return;
    // 0x8039B214: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
;}
RECOMP_FUNC void func_8039B218(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8039B218: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x8039B21C: sw          $s4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r20;
    // 0x8039B220: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x8039B224: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x8039B228: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x8039B22C: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8039B230: lui         $s2, 0x803A
    ctx->r18 = S32(0X803A << 16);
    // 0x8039B234: lui         $s3, 0x8012
    ctx->r19 = S32(0X8012 << 16);
    // 0x8039B238: lui         $s4, 0x803A
    ctx->r20 = S32(0X803A << 16);
    // 0x8039B23C: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x8039B240: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    // 0x8039B244: addiu       $s4, $s4, 0xFAC
    ctx->r20 = ADD32(ctx->r20, 0XFAC);
    // 0x8039B248: addiu       $s3, $s3, -0x32B0
    ctx->r19 = ADD32(ctx->r19, -0X32B0);
    // 0x8039B24C: addiu       $s2, $s2, 0xFB4
    ctx->r18 = ADD32(ctx->r18, 0XFB4);
    // 0x8039B250: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
L_8039B254:
    // 0x8039B254: jal         0x8001CA74
    // 0x8039B258: addiu       $a0, $zero, 0x64
    ctx->r4 = ADD32(0, 0X64);
    func_8001CA74(rdram, ctx);
        goto after_0;
    // 0x8039B258: addiu       $a0, $zero, 0x64
    ctx->r4 = ADD32(0, 0X64);
    after_0:
    // 0x8039B25C: lb          $t6, 0x14B($s3)
    ctx->r14 = MEM_B(ctx->r19, 0X14B);
    // 0x8039B260: addu        $t1, $s4, $s0
    ctx->r9 = ADD32(ctx->r20, ctx->r16);
    // 0x8039B264: sll         $t7, $t6, 3
    ctx->r15 = S32(ctx->r14 << 3);
    // 0x8039B268: addu        $t8, $s2, $t7
    ctx->r24 = ADD32(ctx->r18, ctx->r15);
    // 0x8039B26C: addu        $t9, $t8, $s0
    ctx->r25 = ADD32(ctx->r24, ctx->r16);
    // 0x8039B270: lbu         $t0, 0x0($t9)
    ctx->r8 = MEM_BU(ctx->r25, 0X0);
    // 0x8039B274: nop

    // 0x8039B278: slt         $at, $v0, $t0
    ctx->r1 = SIGNED(ctx->r2) < SIGNED(ctx->r8) ? 1 : 0;
    // 0x8039B27C: beq         $at, $zero, L_8039B298
    if (ctx->r1 == 0) {
        // 0x8039B280: nop
    
            goto L_8039B298;
    }
    // 0x8039B280: nop

    // 0x8039B284: lbu         $t2, 0x0($t1)
    ctx->r10 = MEM_BU(ctx->r9, 0X0);
    // 0x8039B288: nop

    // 0x8039B28C: or          $s1, $s1, $t2
    ctx->r17 = ctx->r17 | ctx->r10;
    // 0x8039B290: andi        $t3, $s1, 0xFF
    ctx->r11 = ctx->r17 & 0XFF;
    // 0x8039B294: or          $s1, $t3, $zero
    ctx->r17 = ctx->r11 | 0;
L_8039B298:
    // 0x8039B298: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x8039B29C: sll         $t4, $s0, 16
    ctx->r12 = S32(ctx->r16 << 16);
    // 0x8039B2A0: sra         $s0, $t4, 16
    ctx->r16 = S32(SIGNED(ctx->r12) >> 16);
    // 0x8039B2A4: slti        $at, $s0, 0x8
    ctx->r1 = SIGNED(ctx->r16) < 0X8 ? 1 : 0;
    // 0x8039B2A8: bne         $at, $zero, L_8039B254
    if (ctx->r1 != 0) {
        // 0x8039B2AC: nop
    
            goto L_8039B254;
    }
    // 0x8039B2AC: nop

    // 0x8039B2B0: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x8039B2B4: or          $v0, $s1, $zero
    ctx->r2 = ctx->r17 | 0;
    // 0x8039B2B8: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x8039B2BC: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8039B2C0: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x8039B2C4: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x8039B2C8: lw          $s4, 0x28($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X28);
    // 0x8039B2CC: jr          $ra
    // 0x8039B2D0: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x8039B2D0: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_8039B2D4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8039B2D4: lui         $a2, 0x8012
    ctx->r6 = S32(0X8012 << 16);
    // 0x8039B2D8: addiu       $a2, $a2, -0x32B0
    ctx->r6 = ADD32(ctx->r6, -0X32B0);
    // 0x8039B2DC: lb          $t6, 0x14B($a2)
    ctx->r14 = MEM_B(ctx->r6, 0X14B);
    // 0x8039B2E0: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x8039B2E4: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    // 0x8039B2E8: bne         $t6, $zero, L_8039B2F8
    if (ctx->r14 != 0) {
        // 0x8039B2EC: or          $v1, $zero, $zero
        ctx->r3 = 0 | 0;
            goto L_8039B2F8;
    }
    // 0x8039B2EC: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x8039B2F0: jr          $ra
    // 0x8039B2F4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    return;
    // 0x8039B2F4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_8039B2F8:
    // 0x8039B2F8: lbu         $t7, 0x160($a2)
    ctx->r15 = MEM_BU(ctx->r6, 0X160);
    // 0x8039B2FC: nop

    // 0x8039B300: slti        $at, $t7, 0x58
    ctx->r1 = SIGNED(ctx->r15) < 0X58 ? 1 : 0;
    // 0x8039B304: bne         $at, $zero, L_8039B324
    if (ctx->r1 != 0) {
        // 0x8039B308: nop
    
            goto L_8039B324;
    }
    // 0x8039B308: nop

    // 0x8039B30C: lbu         $t8, 0x162($a2)
    ctx->r24 = MEM_BU(ctx->r6, 0X162);
    // 0x8039B310: nop

    // 0x8039B314: slti        $at, $t8, 0x5A
    ctx->r1 = SIGNED(ctx->r24) < 0X5A ? 1 : 0;
    // 0x8039B318: bne         $at, $zero, L_8039B324
    if (ctx->r1 != 0) {
        // 0x8039B31C: nop
    
            goto L_8039B324;
    }
    // 0x8039B31C: nop

    // 0x8039B320: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
L_8039B324:
    // 0x8039B324: lbu         $t9, 0x16F($a2)
    ctx->r25 = MEM_BU(ctx->r6, 0X16F);
    // 0x8039B328: ori         $t0, $v1, 0x2
    ctx->r8 = ctx->r3 | 0X2;
    // 0x8039B32C: slti        $at, $t9, 0x56
    ctx->r1 = SIGNED(ctx->r25) < 0X56 ? 1 : 0;
    // 0x8039B330: beq         $at, $zero, L_8039B34C
    if (ctx->r1 == 0) {
        // 0x8039B334: nop
    
            goto L_8039B34C;
    }
    // 0x8039B334: nop

    // 0x8039B338: lbu         $v0, 0x15F($a2)
    ctx->r2 = MEM_BU(ctx->r6, 0X15F);
    // 0x8039B33C: nop

    // 0x8039B340: slti        $at, $v0, 0x58
    ctx->r1 = SIGNED(ctx->r2) < 0X58 ? 1 : 0;
    // 0x8039B344: bne         $at, $zero, L_8039B354
    if (ctx->r1 != 0) {
        // 0x8039B348: nop
    
            goto L_8039B354;
    }
    // 0x8039B348: nop

L_8039B34C:
    // 0x8039B34C: lbu         $v0, 0x15F($a2)
    ctx->r2 = MEM_BU(ctx->r6, 0X15F);
    // 0x8039B350: andi        $v1, $t0, 0xFF
    ctx->r3 = ctx->r8 & 0XFF;
L_8039B354:
    // 0x8039B354: lbu         $a0, 0x161($a2)
    ctx->r4 = MEM_BU(ctx->r6, 0X161);
    // 0x8039B358: nop

    // 0x8039B35C: slti        $at, $a0, 0x5A
    ctx->r1 = SIGNED(ctx->r4) < 0X5A ? 1 : 0;
    // 0x8039B360: bne         $at, $zero, L_8039B394
    if (ctx->r1 != 0) {
        // 0x8039B364: nop
    
            goto L_8039B394;
    }
    // 0x8039B364: nop

    // 0x8039B368: lbu         $t2, 0x16C($a2)
    ctx->r10 = MEM_BU(ctx->r6, 0X16C);
    // 0x8039B36C: nop

    // 0x8039B370: slti        $at, $t2, 0x52
    ctx->r1 = SIGNED(ctx->r10) < 0X52 ? 1 : 0;
    // 0x8039B374: bne         $at, $zero, L_8039B394
    if (ctx->r1 != 0) {
        // 0x8039B378: nop
    
            goto L_8039B394;
    }
    // 0x8039B378: nop

    // 0x8039B37C: lbu         $t3, 0x15D($a2)
    ctx->r11 = MEM_BU(ctx->r6, 0X15D);
    // 0x8039B380: ori         $t4, $v1, 0x4
    ctx->r12 = ctx->r3 | 0X4;
    // 0x8039B384: slti        $at, $t3, 0x5A
    ctx->r1 = SIGNED(ctx->r11) < 0X5A ? 1 : 0;
    // 0x8039B388: bne         $at, $zero, L_8039B394
    if (ctx->r1 != 0) {
        // 0x8039B38C: nop
    
            goto L_8039B394;
    }
    // 0x8039B38C: nop

    // 0x8039B390: andi        $v1, $t4, 0xFF
    ctx->r3 = ctx->r12 & 0XFF;
L_8039B394:
    // 0x8039B394: lbu         $a1, 0x15E($a2)
    ctx->r5 = MEM_BU(ctx->r6, 0X15E);
    // 0x8039B398: ori         $t6, $v1, 0x8
    ctx->r14 = ctx->r3 | 0X8;
    // 0x8039B39C: slti        $at, $a1, 0x5F
    ctx->r1 = SIGNED(ctx->r5) < 0X5F ? 1 : 0;
    // 0x8039B3A0: bne         $at, $zero, L_8039B3B0
    if (ctx->r1 != 0) {
        // 0x8039B3A4: slti        $at, $a1, 0x5A
        ctx->r1 = SIGNED(ctx->r5) < 0X5A ? 1 : 0;
            goto L_8039B3B0;
    }
    // 0x8039B3A4: slti        $at, $a1, 0x5A
    ctx->r1 = SIGNED(ctx->r5) < 0X5A ? 1 : 0;
    // 0x8039B3A8: andi        $v1, $t6, 0xFF
    ctx->r3 = ctx->r14 & 0XFF;
    // 0x8039B3AC: slti        $at, $a1, 0x5A
    ctx->r1 = SIGNED(ctx->r5) < 0X5A ? 1 : 0;
L_8039B3B0:
    // 0x8039B3B0: bne         $at, $zero, L_8039B3BC
    if (ctx->r1 != 0) {
        // 0x8039B3B4: ori         $t8, $v1, 0x10
        ctx->r24 = ctx->r3 | 0X10;
            goto L_8039B3BC;
    }
    // 0x8039B3B4: ori         $t8, $v1, 0x10
    ctx->r24 = ctx->r3 | 0X10;
    // 0x8039B3B8: andi        $v1, $t8, 0xFF
    ctx->r3 = ctx->r24 & 0XFF;
L_8039B3BC:
    // 0x8039B3BC: lbu         $t0, 0x16E($a2)
    ctx->r8 = MEM_BU(ctx->r6, 0X16E);
    // 0x8039B3C0: nop

    // 0x8039B3C4: slti        $at, $t0, 0x55
    ctx->r1 = SIGNED(ctx->r8) < 0X55 ? 1 : 0;
    // 0x8039B3C8: bne         $at, $zero, L_8039B3E8
    if (ctx->r1 != 0) {
        // 0x8039B3CC: nop
    
            goto L_8039B3E8;
    }
    // 0x8039B3CC: nop

    // 0x8039B3D0: lbu         $t1, 0x163($a2)
    ctx->r9 = MEM_BU(ctx->r6, 0X163);
    // 0x8039B3D4: ori         $t2, $v1, 0x20
    ctx->r10 = ctx->r3 | 0X20;
    // 0x8039B3D8: slti        $at, $t1, 0x5A
    ctx->r1 = SIGNED(ctx->r9) < 0X5A ? 1 : 0;
    // 0x8039B3DC: bne         $at, $zero, L_8039B3E8
    if (ctx->r1 != 0) {
        // 0x8039B3E0: nop
    
            goto L_8039B3E8;
    }
    // 0x8039B3E0: nop

    // 0x8039B3E4: andi        $v1, $t2, 0xFF
    ctx->r3 = ctx->r10 & 0XFF;
L_8039B3E8:
    // 0x8039B3E8: lbu         $t4, 0x164($a2)
    ctx->r12 = MEM_BU(ctx->r6, 0X164);
    // 0x8039B3EC: nop

    // 0x8039B3F0: slti        $at, $t4, 0x5A
    ctx->r1 = SIGNED(ctx->r12) < 0X5A ? 1 : 0;
    // 0x8039B3F4: bne         $at, $zero, L_8039B408
    if (ctx->r1 != 0) {
        // 0x8039B3F8: slti        $at, $a0, 0x5A
        ctx->r1 = SIGNED(ctx->r4) < 0X5A ? 1 : 0;
            goto L_8039B408;
    }
    // 0x8039B3F8: slti        $at, $a0, 0x5A
    ctx->r1 = SIGNED(ctx->r4) < 0X5A ? 1 : 0;
    // 0x8039B3FC: bne         $at, $zero, L_8039B408
    if (ctx->r1 != 0) {
        // 0x8039B400: ori         $t5, $v1, 0x40
        ctx->r13 = ctx->r3 | 0X40;
            goto L_8039B408;
    }
    // 0x8039B400: ori         $t5, $v1, 0x40
    ctx->r13 = ctx->r3 | 0X40;
    // 0x8039B404: andi        $v1, $t5, 0xFF
    ctx->r3 = ctx->r13 & 0XFF;
L_8039B408:
    // 0x8039B408: slti        $at, $v0, 0x5A
    ctx->r1 = SIGNED(ctx->r2) < 0X5A ? 1 : 0;
    // 0x8039B40C: bne         $at, $zero, L_8039B430
    if (ctx->r1 != 0) {
        // 0x8039B410: or          $v0, $v1, $zero
        ctx->r2 = ctx->r3 | 0;
            goto L_8039B430;
    }
    // 0x8039B410: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    // 0x8039B414: lbu         $t7, 0x15D($a2)
    ctx->r15 = MEM_BU(ctx->r6, 0X15D);
    // 0x8039B418: ori         $t8, $v1, 0x80
    ctx->r24 = ctx->r3 | 0X80;
    // 0x8039B41C: slti        $at, $t7, 0x5A
    ctx->r1 = SIGNED(ctx->r15) < 0X5A ? 1 : 0;
    // 0x8039B420: bne         $at, $zero, L_8039B430
    if (ctx->r1 != 0) {
        // 0x8039B424: or          $v0, $v1, $zero
        ctx->r2 = ctx->r3 | 0;
            goto L_8039B430;
    }
    // 0x8039B424: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    // 0x8039B428: andi        $v1, $t8, 0xFF
    ctx->r3 = ctx->r24 & 0XFF;
    // 0x8039B42C: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
L_8039B430:
    // 0x8039B430: jr          $ra
    // 0x8039B434: nop

    return;
    // 0x8039B434: nop

;}
RECOMP_FUNC void func_8039B438(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8039B438: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x8039B43C: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x8039B440: sw          $s5, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r21;
    // 0x8039B444: sw          $s4, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r20;
    // 0x8039B448: sw          $s3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r19;
    // 0x8039B44C: sw          $s2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r18;
    // 0x8039B450: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x8039B454: jal         0x8039B668
    // 0x8039B458: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    func_8039B668(rdram, ctx);
        goto after_0;
    // 0x8039B458: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    after_0:
    // 0x8039B45C: lui         $s4, 0x8012
    ctx->r20 = S32(0X8012 << 16);
    // 0x8039B460: addiu       $s4, $s4, -0x32B0
    ctx->r20 = ADD32(ctx->r20, -0X32B0);
    // 0x8039B464: lb          $t7, 0x14B($s4)
    ctx->r15 = MEM_B(ctx->r20, 0X14B);
    // 0x8039B468: sll         $s2, $v0, 16
    ctx->r18 = S32(ctx->r2 << 16);
    // 0x8039B46C: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x8039B470: sra         $t6, $s2, 16
    ctx->r14 = S32(SIGNED(ctx->r18) >> 16);
    // 0x8039B474: subu        $t8, $t8, $t7
    ctx->r24 = SUB32(ctx->r24, ctx->r15);
    // 0x8039B478: sll         $t8, $t8, 3
    ctx->r24 = S32(ctx->r24 << 3);
    // 0x8039B47C: lui         $t9, 0x803A
    ctx->r25 = S32(0X803A << 16);
    // 0x8039B480: addiu       $s1, $t6, 0x15
    ctx->r17 = ADD32(ctx->r14, 0X15);
    // 0x8039B484: addiu       $t9, $t9, 0xFF4
    ctx->r25 = ADD32(ctx->r25, 0XFF4);
    // 0x8039B488: andi        $t0, $s1, 0xFFFF
    ctx->r8 = ctx->r17 & 0XFFFF;
    // 0x8039B48C: lui         $s3, 0x8012
    ctx->r19 = S32(0X8012 << 16);
    // 0x8039B490: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x8039B494: or          $s2, $t6, $zero
    ctx->r18 = ctx->r14 | 0;
    // 0x8039B498: addu        $s5, $t8, $t9
    ctx->r21 = ADD32(ctx->r24, ctx->r25);
    // 0x8039B49C: addiu       $s3, $s3, -0x3153
    ctx->r19 = ADD32(ctx->r19, -0X3153);
    // 0x8039B4A0: or          $s1, $t0, $zero
    ctx->r17 = ctx->r8 | 0;
    // 0x8039B4A4: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
L_8039B4A8:
    // 0x8039B4A8: jal         0x8001CA74
    // 0x8039B4AC: andi        $a0, $s1, 0xFFFF
    ctx->r4 = ctx->r17 & 0XFFFF;
    func_8001CA74(rdram, ctx);
        goto after_1;
    // 0x8039B4AC: andi        $a0, $s1, 0xFFFF
    ctx->r4 = ctx->r17 & 0XFFFF;
    after_1:
    // 0x8039B4B0: addu        $t1, $s5, $s0
    ctx->r9 = ADD32(ctx->r21, ctx->r16);
    // 0x8039B4B4: lbu         $t2, 0x0($t1)
    ctx->r10 = MEM_BU(ctx->r9, 0X0);
    // 0x8039B4B8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8039B4BC: addu        $t3, $v0, $t2
    ctx->r11 = ADD32(ctx->r2, ctx->r10);
    // 0x8039B4C0: addu        $a0, $t3, $s2
    ctx->r4 = ADD32(ctx->r11, ctx->r18);
    // 0x8039B4C4: addiu       $a0, $a0, -0xF
    ctx->r4 = ADD32(ctx->r4, -0XF);
    // 0x8039B4C8: jal         0x8001D4C0
    // 0x8039B4CC: addiu       $a2, $zero, 0x63
    ctx->r6 = ADD32(0, 0X63);
    func_8001D4C0(rdram, ctx);
        goto after_2;
    // 0x8039B4CC: addiu       $a2, $zero, 0x63
    ctx->r6 = ADD32(0, 0X63);
    after_2:
    // 0x8039B4D0: addu        $t4, $s3, $s0
    ctx->r12 = ADD32(ctx->r19, ctx->r16);
    // 0x8039B4D4: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x8039B4D8: sll         $t5, $s0, 16
    ctx->r13 = S32(ctx->r16 << 16);
    // 0x8039B4DC: sra         $s0, $t5, 16
    ctx->r16 = S32(SIGNED(ctx->r13) >> 16);
    // 0x8039B4E0: slti        $at, $s0, 0x13
    ctx->r1 = SIGNED(ctx->r16) < 0X13 ? 1 : 0;
    // 0x8039B4E4: bne         $at, $zero, L_8039B4A8
    if (ctx->r1 != 0) {
        // 0x8039B4E8: sb          $v0, 0x0($t4)
        MEM_B(0X0, ctx->r12) = ctx->r2;
            goto L_8039B4A8;
    }
    // 0x8039B4E8: sb          $v0, 0x0($t4)
    MEM_B(0X0, ctx->r12) = ctx->r2;
    // 0x8039B4EC: addiu       $a0, $s2, 0x14
    ctx->r4 = ADD32(ctx->r18, 0X14);
    // 0x8039B4F0: andi        $t7, $a0, 0xFFFF
    ctx->r15 = ctx->r4 & 0XFFFF;
    // 0x8039B4F4: jal         0x8001CA74
    // 0x8039B4F8: or          $a0, $t7, $zero
    ctx->r4 = ctx->r15 | 0;
    func_8001CA74(rdram, ctx);
        goto after_3;
    // 0x8039B4F8: or          $a0, $t7, $zero
    ctx->r4 = ctx->r15 | 0;
    after_3:
    // 0x8039B4FC: addu        $a0, $v0, $s2
    ctx->r4 = ADD32(ctx->r2, ctx->r18);
    // 0x8039B500: addiu       $a0, $a0, 0x1F
    ctx->r4 = ADD32(ctx->r4, 0X1F);
    // 0x8039B504: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8039B508: jal         0x8001D4C0
    // 0x8039B50C: addiu       $a2, $zero, 0x3F
    ctx->r6 = ADD32(0, 0X3F);
    func_8001D4C0(rdram, ctx);
        goto after_4;
    // 0x8039B50C: addiu       $a2, $zero, 0x3F
    ctx->r6 = ADD32(0, 0X3F);
    after_4:
    // 0x8039B510: lui         $v1, 0x8010
    ctx->r3 = S32(0X8010 << 16);
    // 0x8039B514: lhu         $v1, 0x523A($v1)
    ctx->r3 = MEM_HU(ctx->r3, 0X523A);
    // 0x8039B518: andi        $a0, $v0, 0xFF
    ctx->r4 = ctx->r2 & 0XFF;
    // 0x8039B51C: andi        $t8, $v1, 0x10
    ctx->r24 = ctx->r3 & 0X10;
    // 0x8039B520: beq         $t8, $zero, L_8039B538
    if (ctx->r24 == 0) {
        // 0x8039B524: andi        $t0, $v1, 0x20
        ctx->r8 = ctx->r3 & 0X20;
            goto L_8039B538;
    }
    // 0x8039B524: andi        $t0, $v1, 0x20
    ctx->r8 = ctx->r3 & 0X20;
    // 0x8039B528: addiu       $t9, $a0, 0x40
    ctx->r25 = ADD32(ctx->r4, 0X40);
    // 0x8039B52C: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x8039B530: b           L_8039B57C
    // 0x8039B534: sb          $t9, -0x3140($at)
    MEM_B(-0X3140, ctx->r1) = ctx->r25;
        goto L_8039B57C;
    // 0x8039B534: sb          $t9, -0x3140($at)
    MEM_B(-0X3140, ctx->r1) = ctx->r25;
L_8039B538:
    // 0x8039B538: beq         $t0, $zero, L_8039B550
    if (ctx->r8 == 0) {
        // 0x8039B53C: lui         $at, 0x8012
        ctx->r1 = S32(0X8012 << 16);
            goto L_8039B550;
    }
    // 0x8039B53C: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x8039B540: addiu       $t1, $a0, 0x80
    ctx->r9 = ADD32(ctx->r4, 0X80);
    // 0x8039B544: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x8039B548: b           L_8039B57C
    // 0x8039B54C: sb          $t1, -0x3140($at)
    MEM_B(-0X3140, ctx->r1) = ctx->r9;
        goto L_8039B57C;
    // 0x8039B54C: sb          $t1, -0x3140($at)
    MEM_B(-0X3140, ctx->r1) = ctx->r9;
L_8039B550:
    // 0x8039B550: jal         0x8001C994
    // 0x8039B554: sb          $a0, -0x3140($at)
    MEM_B(-0X3140, ctx->r1) = ctx->r4;
    func_8001C994(rdram, ctx);
        goto after_5;
    // 0x8039B554: sb          $a0, -0x3140($at)
    MEM_B(-0X3140, ctx->r1) = ctx->r4;
    after_5:
    // 0x8039B558: bne         $v0, $zero, L_8039B568
    if (ctx->r2 != 0) {
        // 0x8039B55C: lui         $a0, 0x8012
        ctx->r4 = S32(0X8012 << 16);
            goto L_8039B568;
    }
    // 0x8039B55C: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x8039B560: b           L_8039B56C
    // 0x8039B564: addiu       $v0, $zero, 0x80
    ctx->r2 = ADD32(0, 0X80);
        goto L_8039B56C;
    // 0x8039B564: addiu       $v0, $zero, 0x80
    ctx->r2 = ADD32(0, 0X80);
L_8039B568:
    // 0x8039B568: addiu       $v0, $zero, 0x40
    ctx->r2 = ADD32(0, 0X40);
L_8039B56C:
    // 0x8039B56C: lbu         $a0, -0x3140($a0)
    ctx->r4 = MEM_BU(ctx->r4, -0X3140);
    // 0x8039B570: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x8039B574: addu        $t2, $a0, $v0
    ctx->r10 = ADD32(ctx->r4, ctx->r2);
    // 0x8039B578: sb          $t2, -0x3140($at)
    MEM_B(-0X3140, ctx->r1) = ctx->r10;
L_8039B57C:
    // 0x8039B57C: addiu       $s0, $zero, 0x15
    ctx->r16 = ADD32(0, 0X15);
L_8039B580:
    // 0x8039B580: addu        $t3, $s5, $s0
    ctx->r11 = ADD32(ctx->r21, ctx->r16);
    // 0x8039B584: addu        $t5, $s3, $s0
    ctx->r13 = ADD32(ctx->r19, ctx->r16);
    // 0x8039B588: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x8039B58C: sll         $t6, $s0, 16
    ctx->r14 = S32(ctx->r16 << 16);
    // 0x8039B590: lbu         $t4, 0x0($t3)
    ctx->r12 = MEM_BU(ctx->r11, 0X0);
    // 0x8039B594: sra         $s0, $t6, 16
    ctx->r16 = S32(SIGNED(ctx->r14) >> 16);
    // 0x8039B598: sltiu       $at, $s0, 0x19
    ctx->r1 = ctx->r16 < 0X19 ? 1 : 0;
    // 0x8039B59C: bne         $at, $zero, L_8039B580
    if (ctx->r1 != 0) {
        // 0x8039B5A0: sb          $t4, 0x0($t5)
        MEM_B(0X0, ctx->r13) = ctx->r12;
            goto L_8039B580;
    }
    // 0x8039B5A0: sb          $t4, 0x0($t5)
    MEM_B(0X0, ctx->r13) = ctx->r12;
    // 0x8039B5A4: lb          $t8, 0x14A($s4)
    ctx->r24 = MEM_B(ctx->r20, 0X14A);
    // 0x8039B5A8: lui         $v0, 0x803A
    ctx->r2 = S32(0X803A << 16);
    // 0x8039B5AC: addiu       $v0, $v0, 0xF1C
    ctx->r2 = ADD32(ctx->r2, 0XF1C);
    // 0x8039B5B0: sll         $t9, $t8, 2
    ctx->r25 = S32(ctx->r24 << 2);
    // 0x8039B5B4: addu        $t0, $v0, $t9
    ctx->r8 = ADD32(ctx->r2, ctx->r25);
    // 0x8039B5B8: lbu         $t1, 0x0($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X0);
    // 0x8039B5BC: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x8039B5C0: sb          $t1, -0x313E($at)
    MEM_B(-0X313E, ctx->r1) = ctx->r9;
    // 0x8039B5C4: lb          $t2, 0x14A($s4)
    ctx->r10 = MEM_B(ctx->r20, 0X14A);
    // 0x8039B5C8: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x8039B5CC: sll         $t3, $t2, 2
    ctx->r11 = S32(ctx->r10 << 2);
    // 0x8039B5D0: addu        $t4, $v0, $t3
    ctx->r12 = ADD32(ctx->r2, ctx->r11);
    // 0x8039B5D4: lbu         $t5, 0x1($t4)
    ctx->r13 = MEM_BU(ctx->r12, 0X1);
    // 0x8039B5D8: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x8039B5DC: sb          $t5, -0x313D($at)
    MEM_B(-0X313D, ctx->r1) = ctx->r13;
    // 0x8039B5E0: lb          $t6, 0x14A($s4)
    ctx->r14 = MEM_B(ctx->r20, 0X14A);
    // 0x8039B5E4: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x8039B5E8: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x8039B5EC: addu        $t8, $v0, $t7
    ctx->r24 = ADD32(ctx->r2, ctx->r15);
    // 0x8039B5F0: lbu         $t9, 0x2($t8)
    ctx->r25 = MEM_BU(ctx->r24, 0X2);
    // 0x8039B5F4: lui         $v0, 0x803A
    ctx->r2 = S32(0X803A << 16);
    // 0x8039B5F8: addiu       $v0, $v0, 0x10BC
    ctx->r2 = ADD32(ctx->r2, 0X10BC);
    // 0x8039B5FC: sb          $t9, -0x313C($at)
    MEM_B(-0X313C, ctx->r1) = ctx->r25;
L_8039B600:
    // 0x8039B600: lb          $t0, 0x14B($s4)
    ctx->r8 = MEM_B(ctx->r20, 0X14B);
    // 0x8039B604: addu        $t5, $s4, $s0
    ctx->r13 = ADD32(ctx->r20, ctx->r16);
    // 0x8039B608: sll         $t1, $t0, 2
    ctx->r9 = S32(ctx->r8 << 2);
    // 0x8039B60C: addu        $t2, $v0, $t1
    ctx->r10 = ADD32(ctx->r2, ctx->r9);
    // 0x8039B610: addu        $t3, $t2, $s0
    ctx->r11 = ADD32(ctx->r10, ctx->r16);
    // 0x8039B614: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x8039B618: sll         $t6, $s0, 16
    ctx->r14 = S32(ctx->r16 << 16);
    // 0x8039B61C: lbu         $t4, 0x0($t3)
    ctx->r12 = MEM_BU(ctx->r11, 0X0);
    // 0x8039B620: sra         $s0, $t6, 16
    ctx->r16 = S32(SIGNED(ctx->r14) >> 16);
    // 0x8039B624: slti        $at, $s0, 0x4
    ctx->r1 = SIGNED(ctx->r16) < 0X4 ? 1 : 0;
    // 0x8039B628: bne         $at, $zero, L_8039B600
    if (ctx->r1 != 0) {
        // 0x8039B62C: sb          $t4, 0x158($t5)
        MEM_B(0X158, ctx->r13) = ctx->r12;
            goto L_8039B600;
    }
    // 0x8039B62C: sb          $t4, 0x158($t5)
    MEM_B(0X158, ctx->r13) = ctx->r12;
    // 0x8039B630: jal         0x8001CA74
    // 0x8039B634: addiu       $a0, $zero, 0x100
    ctx->r4 = ADD32(0, 0X100);
    func_8001CA74(rdram, ctx);
        goto after_6;
    // 0x8039B634: addiu       $a0, $zero, 0x100
    ctx->r4 = ADD32(0, 0X100);
    after_6:
    // 0x8039B638: jal         0x8039B218
    // 0x8039B63C: sb          $v0, 0x15C($s4)
    MEM_B(0X15C, ctx->r20) = ctx->r2;
    func_8039B218(rdram, ctx);
        goto after_7;
    // 0x8039B63C: sb          $v0, 0x15C($s4)
    MEM_B(0X15C, ctx->r20) = ctx->r2;
    after_7:
    // 0x8039B640: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x8039B644: sb          $v0, 0x14C($s4)
    MEM_B(0X14C, ctx->r20) = ctx->r2;
    // 0x8039B648: lw          $s4, 0x24($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X24);
    // 0x8039B64C: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x8039B650: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x8039B654: lw          $s2, 0x1C($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X1C);
    // 0x8039B658: lw          $s3, 0x20($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X20);
    // 0x8039B65C: lw          $s5, 0x28($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X28);
    // 0x8039B660: jr          $ra
    // 0x8039B664: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x8039B664: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
