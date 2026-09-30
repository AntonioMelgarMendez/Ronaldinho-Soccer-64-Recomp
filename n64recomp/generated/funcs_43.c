#include "iss64_recomp.h"
#include "funcs.h"

RECOMP_FUNC void func_803A343C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803A343C: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x803A3440: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x803A3444: lui         $a0, 0x8005
    ctx->r4 = S32(0X8005 << 16);
    // 0x803A3448: sw          $s3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r19;
    // 0x803A344C: sw          $s2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r18;
    // 0x803A3450: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x803A3454: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x803A3458: addiu       $a0, $a0, -0x1E98
    ctx->r4 = ADD32(ctx->r4, -0X1E98);
    // 0x803A345C: jal         0x800293DC
    // 0x803A3460: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_800293DC(rdram, ctx);
        goto after_0;
    // 0x803A3460: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_0:
    // 0x803A3464: lw          $s0, 0x14($v0)
    ctx->r16 = MEM_W(ctx->r2, 0X14);
    // 0x803A3468: addiu       $s2, $zero, -0x1
    ctx->r18 = ADD32(0, -0X1);
    // 0x803A346C: beq         $s0, $s2, L_803A34BC
    if (ctx->r16 == ctx->r18) {
        // 0x803A3470: or          $s1, $zero, $zero
        ctx->r17 = 0 | 0;
            goto L_803A34BC;
    }
    // 0x803A3470: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    // 0x803A3474: lui         $s3, 0x803A
    ctx->r19 = S32(0X803A << 16);
    // 0x803A3478: addiu       $s3, $s3, 0x6C00
    ctx->r19 = ADD32(ctx->r19, 0X6C00);
L_803A347C:
    // 0x803A347C: sll         $t6, $s1, 3
    ctx->r14 = S32(ctx->r17 << 3);
    // 0x803A3480: addu        $v0, $s3, $t6
    ctx->r2 = ADD32(ctx->r19, ctx->r14);
    // 0x803A3484: lhu         $a1, 0x4($v0)
    ctx->r5 = MEM_HU(ctx->r2, 0X4);
    // 0x803A3488: lw          $a3, 0x0($v0)
    ctx->r7 = MEM_W(ctx->r2, 0X0);
    // 0x803A348C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x803A3490: jal         0x8004CD24
    // 0x803A3494: addiu       $a2, $zero, 0x9
    ctx->r6 = ADD32(0, 0X9);
    func_8004CD24(rdram, ctx);
        goto after_1;
    // 0x803A3494: addiu       $a2, $zero, 0x9
    ctx->r6 = ADD32(0, 0X9);
    after_1:
    // 0x803A3498: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x803A349C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x803A34A0: jal         0x8002135C
    // 0x803A34A4: addiu       $a2, $zero, 0x18
    ctx->r6 = ADD32(0, 0X18);
    func_8002135C(rdram, ctx);
        goto after_2;
    // 0x803A34A4: addiu       $a2, $zero, 0x18
    ctx->r6 = ADD32(0, 0X18);
    after_2:
    // 0x803A34A8: lw          $s0, 0x0($s0)
    ctx->r16 = MEM_W(ctx->r16, 0X0);
    // 0x803A34AC: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x803A34B0: andi        $t7, $s1, 0xFF
    ctx->r15 = ctx->r17 & 0XFF;
    // 0x803A34B4: bne         $s0, $s2, L_803A347C
    if (ctx->r16 != ctx->r18) {
        // 0x803A34B8: or          $s1, $t7, $zero
        ctx->r17 = ctx->r15 | 0;
            goto L_803A347C;
    }
    // 0x803A34B8: or          $s1, $t7, $zero
    ctx->r17 = ctx->r15 | 0;
L_803A34BC:
    // 0x803A34BC: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x803A34C0: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x803A34C4: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x803A34C8: lw          $s2, 0x1C($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X1C);
    // 0x803A34CC: lw          $s3, 0x20($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X20);
    // 0x803A34D0: jr          $ra
    // 0x803A34D4: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x803A34D4: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_803A34D8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803A34D8: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x803A34DC: sw          $s4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r20;
    // 0x803A34E0: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x803A34E4: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x803A34E8: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x803A34EC: lui         $s3, 0x803A
    ctx->r19 = S32(0X803A << 16);
    // 0x803A34F0: lui         $s4, 0x803A
    ctx->r20 = S32(0X803A << 16);
    // 0x803A34F4: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x803A34F8: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x803A34FC: addiu       $s4, $s4, 0x6BE0
    ctx->r20 = ADD32(ctx->r20, 0X6BE0);
    // 0x803A3500: addiu       $s3, $s3, 0x357C
    ctx->r19 = ADD32(ctx->r19, 0X357C);
    // 0x803A3504: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x803A3508: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
L_803A350C:
    // 0x803A350C: jal         0x80029354
    // 0x803A3510: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    func_80029354(rdram, ctx);
        goto after_0;
    // 0x803A3510: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    after_0:
    // 0x803A3514: sll         $t6, $s0, 2
    ctx->r14 = S32(ctx->r16 << 2);
    // 0x803A3518: lw          $s2, 0x14($v0)
    ctx->r18 = MEM_W(ctx->r2, 0X14);
    // 0x803A351C: sb          $s1, 0x44($v0)
    MEM_B(0X44, ctx->r2) = ctx->r17;
    // 0x803A3520: addu        $t7, $s4, $t6
    ctx->r15 = ADD32(ctx->r20, ctx->r14);
    // 0x803A3524: lw          $a3, 0x0($t7)
    ctx->r7 = MEM_W(ctx->r15, 0X0);
    // 0x803A3528: addiu       $a1, $zero, 0x4BC
    ctx->r5 = ADD32(0, 0X4BC);
    // 0x803A352C: addiu       $a2, $zero, 0x7
    ctx->r6 = ADD32(0, 0X7);
    // 0x803A3530: jal         0x8004CD24
    // 0x803A3534: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    func_8004CD24(rdram, ctx);
        goto after_1;
    // 0x803A3534: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    after_1:
    // 0x803A3538: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x803A353C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x803A3540: jal         0x8002135C
    // 0x803A3544: addiu       $a2, $zero, 0xDA
    ctx->r6 = ADD32(0, 0XDA);
    func_8002135C(rdram, ctx);
        goto after_2;
    // 0x803A3544: addiu       $a2, $zero, 0xDA
    ctx->r6 = ADD32(0, 0XDA);
    after_2:
    // 0x803A3548: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x803A354C: andi        $s1, $s0, 0xFF
    ctx->r17 = ctx->r16 & 0XFF;
    // 0x803A3550: slti        $at, $s1, 0x4
    ctx->r1 = SIGNED(ctx->r17) < 0X4 ? 1 : 0;
    // 0x803A3554: bne         $at, $zero, L_803A350C
    if (ctx->r1 != 0) {
        // 0x803A3558: or          $s0, $s1, $zero
        ctx->r16 = ctx->r17 | 0;
            goto L_803A350C;
    }
    // 0x803A3558: or          $s0, $s1, $zero
    ctx->r16 = ctx->r17 | 0;
    // 0x803A355C: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x803A3560: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x803A3564: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x803A3568: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x803A356C: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x803A3570: lw          $s4, 0x28($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X28);
    // 0x803A3574: jr          $ra
    // 0x803A3578: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x803A3578: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_803A357C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803A357C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x803A3580: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x803A3584: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x803A3588: lw          $v0, 0x8($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X8);
    // 0x803A358C: lb          $v1, 0x44($a0)
    ctx->r3 = MEM_B(ctx->r4, 0X44);
    // 0x803A3590: addiu       $t8, $zero, 0xA
    ctx->r24 = ADD32(0, 0XA);
    // 0x803A3594: addu        $a3, $v0, $v1
    ctx->r7 = ADD32(ctx->r2, ctx->r3);
    // 0x803A3598: lb          $a2, 0x38($a3)
    ctx->r6 = MEM_B(ctx->r7, 0X38);
    // 0x803A359C: nop

    // 0x803A35A0: bne         $a2, $zero, L_803A35D8
    if (ctx->r6 != 0) {
        // 0x803A35A4: nop
    
            goto L_803A35D8;
    }
    // 0x803A35A4: nop

    // 0x803A35A8: lb          $t6, 0x48($a3)
    ctx->r14 = MEM_B(ctx->r7, 0X48);
    // 0x803A35AC: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x803A35B0: bne         $t6, $zero, L_803A35CC
    if (ctx->r14 != 0) {
        // 0x803A35B4: nop
    
            goto L_803A35CC;
    }
    // 0x803A35B4: nop

    // 0x803A35B8: jal         0x8006F678
    // 0x803A35BC: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_8006F678(rdram, ctx);
        goto after_0;
    // 0x803A35BC: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x803A35C0: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x803A35C4: b           L_803A35E4
    // 0x803A35C8: lhu         $t9, 0x3A($a0)
    ctx->r25 = MEM_HU(ctx->r4, 0X3A);
        goto L_803A35E4;
    // 0x803A35C8: lhu         $t9, 0x3A($a0)
    ctx->r25 = MEM_HU(ctx->r4, 0X3A);
L_803A35CC:
    // 0x803A35CC: sh          $zero, 0x38($a0)
    MEM_H(0X38, ctx->r4) = 0;
    // 0x803A35D0: b           L_803A35E0
    // 0x803A35D4: sh          $t7, 0x3A($a0)
    MEM_H(0X3A, ctx->r4) = ctx->r15;
        goto L_803A35E0;
    // 0x803A35D4: sh          $t7, 0x3A($a0)
    MEM_H(0X3A, ctx->r4) = ctx->r15;
L_803A35D8:
    // 0x803A35D8: sh          $t8, 0x38($a0)
    MEM_H(0X38, ctx->r4) = ctx->r24;
    // 0x803A35DC: sh          $zero, 0x3A($a0)
    MEM_H(0X3A, ctx->r4) = 0;
L_803A35E0:
    // 0x803A35E0: lhu         $t9, 0x3A($a0)
    ctx->r25 = MEM_HU(ctx->r4, 0X3A);
L_803A35E4:
    // 0x803A35E4: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x803A35E8: bne         $t9, $at, L_803A3608
    if (ctx->r25 != ctx->r1) {
        // 0x803A35EC: addiu       $a1, $zero, 0x1
        ctx->r5 = ADD32(0, 0X1);
            goto L_803A3608;
    }
    // 0x803A35EC: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x803A35F0: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    // 0x803A35F4: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x803A35F8: jal         0x8002135C
    // 0x803A35FC: addiu       $a2, $zero, 0xDB
    ctx->r6 = ADD32(0, 0XDB);
    func_8002135C(rdram, ctx);
        goto after_1;
    // 0x803A35FC: addiu       $a2, $zero, 0xDB
    ctx->r6 = ADD32(0, 0XDB);
    after_1:
    // 0x803A3600: b           L_803A3618
    // 0x803A3604: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_803A3618;
    // 0x803A3604: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_803A3608:
    // 0x803A3608: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    // 0x803A360C: jal         0x8002135C
    // 0x803A3610: addiu       $a2, $zero, 0xDA
    ctx->r6 = ADD32(0, 0XDA);
    func_8002135C(rdram, ctx);
        goto after_2;
    // 0x803A3610: addiu       $a2, $zero, 0xDA
    ctx->r6 = ADD32(0, 0XDA);
    after_2:
    // 0x803A3614: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_803A3618:
    // 0x803A3618: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x803A361C: jr          $ra
    // 0x803A3620: nop

    return;
    // 0x803A3620: nop

;}
RECOMP_FUNC void func_803A3624(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803A3624: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x803A3628: sw          $s3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r19;
    // 0x803A362C: sw          $s2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r18;
    // 0x803A3630: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x803A3634: lui         $s2, 0x8005
    ctx->r18 = S32(0X8005 << 16);
    // 0x803A3638: lui         $s3, 0x803A
    ctx->r19 = S32(0X803A << 16);
    // 0x803A363C: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x803A3640: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x803A3644: addiu       $s3, $s3, 0x6BF0
    ctx->r19 = ADD32(ctx->r19, 0X6BF0);
    // 0x803A3648: addiu       $s2, $s2, -0x1E98
    ctx->r18 = ADD32(ctx->r18, -0X1E98);
    // 0x803A364C: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
L_803A3650:
    // 0x803A3650: jal         0x80029354
    // 0x803A3654: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    func_80029354(rdram, ctx);
        goto after_0;
    // 0x803A3654: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    after_0:
    // 0x803A3658: sll         $t6, $s0, 2
    ctx->r14 = S32(ctx->r16 << 2);
    // 0x803A365C: lw          $s1, 0x14($v0)
    ctx->r17 = MEM_W(ctx->r2, 0X14);
    // 0x803A3660: addu        $t7, $s3, $t6
    ctx->r15 = ADD32(ctx->r19, ctx->r14);
    // 0x803A3664: lw          $a3, 0x0($t7)
    ctx->r7 = MEM_W(ctx->r15, 0X0);
    // 0x803A3668: addiu       $a1, $zero, 0x290
    ctx->r5 = ADD32(0, 0X290);
    // 0x803A366C: addiu       $a2, $zero, 0x7
    ctx->r6 = ADD32(0, 0X7);
    // 0x803A3670: jal         0x8004CD24
    // 0x803A3674: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    func_8004CD24(rdram, ctx);
        goto after_1;
    // 0x803A3674: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_1:
    // 0x803A3678: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x803A367C: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    // 0x803A3680: jal         0x8002135C
    // 0x803A3684: addiu       $a2, $zero, 0x3D
    ctx->r6 = ADD32(0, 0X3D);
    func_8002135C(rdram, ctx);
        goto after_2;
    // 0x803A3684: addiu       $a2, $zero, 0x3D
    ctx->r6 = ADD32(0, 0X3D);
    after_2:
    // 0x803A3688: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x803A368C: andi        $t8, $s0, 0xFF
    ctx->r24 = ctx->r16 & 0XFF;
    // 0x803A3690: slti        $at, $t8, 0x4
    ctx->r1 = SIGNED(ctx->r24) < 0X4 ? 1 : 0;
    // 0x803A3694: bne         $at, $zero, L_803A3650
    if (ctx->r1 != 0) {
        // 0x803A3698: or          $s0, $t8, $zero
        ctx->r16 = ctx->r24 | 0;
            goto L_803A3650;
    }
    // 0x803A3698: or          $s0, $t8, $zero
    ctx->r16 = ctx->r24 | 0;
    // 0x803A369C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x803A36A0: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x803A36A4: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x803A36A8: lw          $s2, 0x1C($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X1C);
    // 0x803A36AC: lw          $s3, 0x20($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X20);
    // 0x803A36B0: jr          $ra
    // 0x803A36B4: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x803A36B4: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_803A36B8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803A36B8: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x803A36BC: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x803A36C0: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x803A36C4: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x803A36C8: lui         $s2, 0x803A
    ctx->r18 = S32(0X803A << 16);
    // 0x803A36CC: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x803A36D0: addiu       $s2, $s2, 0x3714
    ctx->r18 = ADD32(ctx->r18, 0X3714);
    // 0x803A36D4: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x803A36D8: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
L_803A36DC:
    // 0x803A36DC: jal         0x80029220
    // 0x803A36E0: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    func_80029220(rdram, ctx);
        goto after_0;
    // 0x803A36E0: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    after_0:
    // 0x803A36E4: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x803A36E8: sb          $s1, 0x38($v0)
    MEM_B(0X38, ctx->r2) = ctx->r17;
    // 0x803A36EC: andi        $s1, $s0, 0xFF
    ctx->r17 = ctx->r16 & 0XFF;
    // 0x803A36F0: slti        $at, $s1, 0x4
    ctx->r1 = SIGNED(ctx->r17) < 0X4 ? 1 : 0;
    // 0x803A36F4: bne         $at, $zero, L_803A36DC
    if (ctx->r1 != 0) {
        // 0x803A36F8: or          $s0, $s1, $zero
        ctx->r16 = ctx->r17 | 0;
            goto L_803A36DC;
    }
    // 0x803A36F8: or          $s0, $s1, $zero
    ctx->r16 = ctx->r17 | 0;
    // 0x803A36FC: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x803A3700: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x803A3704: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x803A3708: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x803A370C: jr          $ra
    // 0x803A3710: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x803A3710: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_803A3714(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803A3714: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x803A3718: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x803A371C: sw          $a0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r4;
    // 0x803A3720: sw          $a1, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r5;
    // 0x803A3724: lb          $v1, 0x38($a0)
    ctx->r3 = MEM_B(ctx->r4, 0X38);
    // 0x803A3728: lw          $t1, 0x8($a0)
    ctx->r9 = MEM_W(ctx->r4, 0X8);
    // 0x803A372C: sll         $t7, $v1, 2
    ctx->r15 = S32(ctx->r3 << 2);
    // 0x803A3730: addu        $t0, $t1, $v1
    ctx->r8 = ADD32(ctx->r9, ctx->r3);
    // 0x803A3734: lb          $t5, 0x3C($t0)
    ctx->r13 = MEM_B(ctx->r8, 0X3C);
    // 0x803A3738: lui         $at, 0x2
    ctx->r1 = S32(0X2 << 16);
    // 0x803A373C: lui         $t4, 0x803A
    ctx->r12 = S32(0X803A << 16);
    // 0x803A3740: subu        $t7, $t7, $v1
    ctx->r15 = SUB32(ctx->r15, ctx->r3);
    // 0x803A3744: sll         $t8, $t7, 5
    ctx->r24 = S32(ctx->r15 << 5);
    // 0x803A3748: addiu       $t4, $t4, 0x6CD8
    ctx->r12 = ADD32(ctx->r12, 0X6CD8);
    // 0x803A374C: ori         $at, $at, 0xFEE8
    ctx->r1 = ctx->r1 | 0XFEE8;
    // 0x803A3750: sll         $t2, $v1, 2
    ctx->r10 = S32(ctx->r3 << 2);
    // 0x803A3754: addu        $v0, $t2, $t4
    ctx->r2 = ADD32(ctx->r10, ctx->r12);
    // 0x803A3758: addu        $t9, $t8, $at
    ctx->r25 = ADD32(ctx->r24, ctx->r1);
    // 0x803A375C: lui         $t3, 0x800E
    ctx->r11 = S32(0X800E << 16);
    // 0x803A3760: lui         $a3, 0x8028
    ctx->r7 = S32(0X8028 << 16);
    // 0x803A3764: sll         $t6, $t5, 2
    ctx->r14 = S32(ctx->r13 << 2);
    // 0x803A3768: addu        $a3, $a3, $t6
    ctx->r7 = ADD32(ctx->r7, ctx->r14);
    // 0x803A376C: addiu       $t3, $t3, -0x3770
    ctx->r11 = ADD32(ctx->r11, -0X3770);
    // 0x803A3770: addu        $a0, $t9, $t3
    ctx->r4 = ADD32(ctx->r25, ctx->r11);
    // 0x803A3774: lw          $a3, 0x5EAC($a3)
    ctx->r7 = MEM_W(ctx->r7, 0X5EAC);
    // 0x803A3778: addiu       $t8, $zero, 0x2
    ctx->r24 = ADD32(0, 0X2);
    // 0x803A377C: lh          $a1, 0x0($v0)
    ctx->r5 = MEM_H(ctx->r2, 0X0);
    // 0x803A3780: lh          $a2, 0x2($v0)
    ctx->r6 = MEM_H(ctx->r2, 0X2);
    // 0x803A3784: addiu       $t7, $zero, 0x5
    ctx->r15 = ADD32(0, 0X5);
    // 0x803A3788: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x803A378C: sw          $t8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r24;
    // 0x803A3790: sw          $a0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r4;
    // 0x803A3794: sw          $t2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r10;
    // 0x803A3798: sw          $t0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r8;
    // 0x803A379C: sb          $v1, 0x3E($sp)
    MEM_B(0X3E, ctx->r29) = ctx->r3;
    // 0x803A37A0: jal         0x8002F3D4
    // 0x803A37A4: sw          $t1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r9;
    func_8002F3D4(rdram, ctx);
        goto after_0;
    // 0x803A37A4: sw          $t1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r9;
    after_0:
    // 0x803A37A8: lw          $a2, 0x2C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X2C);
    // 0x803A37AC: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x803A37B0: lw          $t2, 0x28($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X28);
    // 0x803A37B4: lb          $v1, 0x3E($sp)
    ctx->r3 = MEM_B(ctx->r29, 0X3E);
    // 0x803A37B8: addiu       $t9, $zero, 0x8
    ctx->r25 = ADD32(0, 0X8);
    // 0x803A37BC: lui         $t3, 0x803A
    ctx->r11 = S32(0X803A << 16);
    // 0x803A37C0: addiu       $t3, $t3, 0x6CE8
    ctx->r11 = ADD32(ctx->r11, 0X6CE8);
    // 0x803A37C4: sb          $t9, 0x5($a2)
    MEM_B(0X5, ctx->r6) = ctx->r25;
    // 0x803A37C8: lb          $t1, 0x40($t0)
    ctx->r9 = MEM_B(ctx->r8, 0X40);
    // 0x803A37CC: addu        $v0, $t2, $t3
    ctx->r2 = ADD32(ctx->r10, ctx->r11);
    // 0x803A37D0: lh          $a1, 0x0($v0)
    ctx->r5 = MEM_H(ctx->r2, 0X0);
    // 0x803A37D4: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x803A37D8: bne         $t1, $at, L_803A37EC
    if (ctx->r9 != ctx->r1) {
        // 0x803A37DC: addiu       $a0, $a2, 0x20
        ctx->r4 = ADD32(ctx->r6, 0X20);
            goto L_803A37EC;
    }
    // 0x803A37DC: addiu       $a0, $a2, 0x20
    ctx->r4 = ADD32(ctx->r6, 0X20);
    // 0x803A37E0: addiu       $a1, $a1, -0x3
    ctx->r5 = ADD32(ctx->r5, -0X3);
    // 0x803A37E4: sll         $t4, $a1, 16
    ctx->r12 = S32(ctx->r5 << 16);
    // 0x803A37E8: sra         $a1, $t4, 16
    ctx->r5 = S32(SIGNED(ctx->r12) >> 16);
L_803A37EC:
    // 0x803A37EC: sll         $t6, $t1, 2
    ctx->r14 = S32(ctx->r9 << 2);
    // 0x803A37F0: lui         $a3, 0x8028
    ctx->r7 = S32(0X8028 << 16);
    // 0x803A37F4: addu        $a3, $a3, $t6
    ctx->r7 = ADD32(ctx->r7, ctx->r14);
    // 0x803A37F8: lw          $a3, 0x5EB8($a3)
    ctx->r7 = MEM_W(ctx->r7, 0X5EB8);
    // 0x803A37FC: lh          $a2, 0x2($v0)
    ctx->r6 = MEM_H(ctx->r2, 0X2);
    // 0x803A3800: addiu       $t7, $zero, 0x5
    ctx->r15 = ADD32(0, 0X5);
    // 0x803A3804: addiu       $t8, $zero, 0x2
    ctx->r24 = ADD32(0, 0X2);
    // 0x803A3808: sw          $t8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r24;
    // 0x803A380C: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x803A3810: sw          $v0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r2;
    // 0x803A3814: sb          $v1, 0x3E($sp)
    MEM_B(0X3E, ctx->r29) = ctx->r3;
    // 0x803A3818: sw          $a0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r4;
    // 0x803A381C: jal         0x8002F3D4
    // 0x803A3820: sw          $t2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r10;
    func_8002F3D4(rdram, ctx);
        goto after_1;
    // 0x803A3820: sw          $t2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r10;
    after_1:
    // 0x803A3824: lb          $v1, 0x3E($sp)
    ctx->r3 = MEM_B(ctx->r29, 0X3E);
    // 0x803A3828: lw          $a0, 0x38($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X38);
    // 0x803A382C: lw          $v0, 0x20($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X20);
    // 0x803A3830: lw          $t2, 0x28($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X28);
    // 0x803A3834: addiu       $t9, $zero, 0x8
    ctx->r25 = ADD32(0, 0X8);
    // 0x803A3838: lui         $t4, 0x8012
    ctx->r12 = S32(0X8012 << 16);
    // 0x803A383C: sb          $t9, 0x5($a0)
    MEM_B(0X5, ctx->r4) = ctx->r25;
    // 0x803A3840: lb          $t4, -0x3088($t4)
    ctx->r12 = MEM_B(ctx->r12, -0X3088);
    // 0x803A3844: sll         $t3, $v1, 3
    ctx->r11 = S32(ctx->r3 << 3);
    // 0x803A3848: addu        $t3, $t3, $v1
    ctx->r11 = ADD32(ctx->r11, ctx->r3);
    // 0x803A384C: lui         $a2, 0x803A
    ctx->r6 = S32(0X803A << 16);
    // 0x803A3850: addu        $t5, $t3, $t4
    ctx->r13 = ADD32(ctx->r11, ctx->r12);
    // 0x803A3854: addu        $a2, $a2, $t5
    ctx->r6 = ADD32(ctx->r6, ctx->r13);
    // 0x803A3858: lbu         $a2, 0x6D14($a2)
    ctx->r6 = MEM_BU(ctx->r6, 0X6D14);
    // 0x803A385C: lw          $t6, 0x34($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X34);
    // 0x803A3860: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x803A3864: addu        $t7, $t6, $a2
    ctx->r15 = ADD32(ctx->r14, ctx->r6);
    // 0x803A3868: lb          $t0, 0x44($t7)
    ctx->r8 = MEM_B(ctx->r15, 0X44);
    // 0x803A386C: lh          $a1, 0x0($v0)
    ctx->r5 = MEM_H(ctx->r2, 0X0);
    // 0x803A3870: bne         $t0, $at, L_803A3884
    if (ctx->r8 != ctx->r1) {
        // 0x803A3874: addiu       $a0, $a0, 0x20
        ctx->r4 = ADD32(ctx->r4, 0X20);
            goto L_803A3884;
    }
    // 0x803A3874: addiu       $a0, $a0, 0x20
    ctx->r4 = ADD32(ctx->r4, 0X20);
    // 0x803A3878: addiu       $a1, $a1, -0x3
    ctx->r5 = ADD32(ctx->r5, -0X3);
    // 0x803A387C: sll         $t8, $a1, 16
    ctx->r24 = S32(ctx->r5 << 16);
    // 0x803A3880: sra         $a1, $t8, 16
    ctx->r5 = S32(SIGNED(ctx->r24) >> 16);
L_803A3884:
    // 0x803A3884: lui         $a2, 0x803A
    ctx->r6 = S32(0X803A << 16);
    // 0x803A3888: sll         $t3, $t0, 2
    ctx->r11 = S32(ctx->r8 << 2);
    // 0x803A388C: lui         $a3, 0x8028
    ctx->r7 = S32(0X8028 << 16);
    // 0x803A3890: addu        $a3, $a3, $t3
    ctx->r7 = ADD32(ctx->r7, ctx->r11);
    // 0x803A3894: addu        $a2, $a2, $t2
    ctx->r6 = ADD32(ctx->r6, ctx->r10);
    // 0x803A3898: lh          $a2, 0x6CFA($a2)
    ctx->r6 = MEM_H(ctx->r6, 0X6CFA);
    // 0x803A389C: lw          $a3, 0x5EC8($a3)
    ctx->r7 = MEM_W(ctx->r7, 0X5EC8);
    // 0x803A38A0: addiu       $t4, $zero, 0x5
    ctx->r12 = ADD32(0, 0X5);
    // 0x803A38A4: addiu       $t5, $zero, 0x2
    ctx->r13 = ADD32(0, 0X2);
    // 0x803A38A8: sw          $t5, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r13;
    // 0x803A38AC: sw          $t4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r12;
    // 0x803A38B0: jal         0x8002F3D4
    // 0x803A38B4: sw          $a0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r4;
    func_8002F3D4(rdram, ctx);
        goto after_2;
    // 0x803A38B4: sw          $a0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r4;
    after_2:
    // 0x803A38B8: lw          $a0, 0x38($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X38);
    // 0x803A38BC: addiu       $t6, $zero, 0x8
    ctx->r14 = ADD32(0, 0X8);
    // 0x803A38C0: sb          $t6, 0x5($a0)
    MEM_B(0X5, ctx->r4) = ctx->r14;
    // 0x803A38C4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x803A38C8: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    // 0x803A38CC: jr          $ra
    // 0x803A38D0: nop

    return;
    // 0x803A38D0: nop

;}
RECOMP_FUNC void func_803A38D4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803A38D4: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x803A38D8: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x803A38DC: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x803A38E0: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x803A38E4: lw          $v0, 0x8($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X8);
    // 0x803A38E8: lui         $a3, 0x8028
    ctx->r7 = S32(0X8028 << 16);
    // 0x803A38EC: lb          $t7, 0x4C($v0)
    ctx->r15 = MEM_B(ctx->r2, 0X4C);
    // 0x803A38F0: lui         $a0, 0x8011
    ctx->r4 = S32(0X8011 << 16);
    // 0x803A38F4: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x803A38F8: addu        $a3, $a3, $t8
    ctx->r7 = ADD32(ctx->r7, ctx->r24);
    // 0x803A38FC: lw          $a3, 0x5F54($a3)
    ctx->r7 = MEM_W(ctx->r7, 0X5F54);
    // 0x803A3900: addiu       $t9, $zero, 0x1C
    ctx->r25 = ADD32(0, 0X1C);
    // 0x803A3904: addiu       $t0, $zero, 0x2
    ctx->r8 = ADD32(0, 0X2);
    // 0x803A3908: addiu       $t1, $zero, 0x4
    ctx->r9 = ADD32(0, 0X4);
    // 0x803A390C: addiu       $t2, $zero, 0x2
    ctx->r10 = ADD32(0, 0X2);
    // 0x803A3910: sw          $t2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r10;
    // 0x803A3914: sw          $t1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r9;
    // 0x803A3918: sw          $t0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r8;
    // 0x803A391C: sw          $t9, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r25;
    // 0x803A3920: addiu       $a0, $a0, -0x3608
    ctx->r4 = ADD32(ctx->r4, -0X3608);
    // 0x803A3924: addiu       $a1, $zero, 0x3D
    ctx->r5 = ADD32(0, 0X3D);
    // 0x803A3928: jal         0x8002F528
    // 0x803A392C: addiu       $a2, $zero, 0xA1
    ctx->r6 = ADD32(0, 0XA1);
    func_8002F528(rdram, ctx);
        goto after_0;
    // 0x803A392C: addiu       $a2, $zero, 0xA1
    ctx->r6 = ADD32(0, 0XA1);
    after_0:
    // 0x803A3930: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x803A3934: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x803A3938: jr          $ra
    // 0x803A393C: nop

    return;
    // 0x803A393C: nop

;}
RECOMP_FUNC void func_803A3940(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803A3940: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x803A3944: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x803A3948: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x803A394C: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x803A3950: lw          $v1, 0x8($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X8);
    // 0x803A3954: lui         $a1, 0x803A
    ctx->r5 = S32(0X803A << 16);
    // 0x803A3958: lb          $v0, 0x4C($v1)
    ctx->r2 = MEM_B(ctx->r3, 0X4C);
    // 0x803A395C: lui         $a3, 0x8028
    ctx->r7 = S32(0X8028 << 16);
    // 0x803A3960: sll         $t7, $v0, 1
    ctx->r15 = S32(ctx->r2 << 1);
    // 0x803A3964: sll         $t8, $v0, 2
    ctx->r24 = S32(ctx->r2 << 2);
    // 0x803A3968: addu        $a3, $a3, $t8
    ctx->r7 = ADD32(ctx->r7, ctx->r24);
    // 0x803A396C: addu        $a1, $a1, $t7
    ctx->r5 = ADD32(ctx->r5, ctx->r15);
    // 0x803A3970: lh          $a1, 0x6E2C($a1)
    ctx->r5 = MEM_H(ctx->r5, 0X6E2C);
    // 0x803A3974: lw          $a3, 0x5ED4($a3)
    ctx->r7 = MEM_W(ctx->r7, 0X5ED4);
    // 0x803A3978: lui         $a0, 0x8011
    ctx->r4 = S32(0X8011 << 16);
    // 0x803A397C: addiu       $t9, $zero, 0x5
    ctx->r25 = ADD32(0, 0X5);
    // 0x803A3980: addiu       $t0, $zero, 0x2
    ctx->r8 = ADD32(0, 0X2);
    // 0x803A3984: sw          $t0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r8;
    // 0x803A3988: sw          $t9, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r25;
    // 0x803A398C: addiu       $a0, $a0, -0x3568
    ctx->r4 = ADD32(ctx->r4, -0X3568);
    // 0x803A3990: jal         0x8002F3D4
    // 0x803A3994: addiu       $a2, $zero, 0x9E
    ctx->r6 = ADD32(0, 0X9E);
    func_8002F3D4(rdram, ctx);
        goto after_0;
    // 0x803A3994: addiu       $a2, $zero, 0x9E
    ctx->r6 = ADD32(0, 0X9E);
    after_0:
    // 0x803A3998: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x803A399C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x803A39A0: jr          $ra
    // 0x803A39A4: nop

    return;
    // 0x803A39A4: nop

;}
RECOMP_FUNC void func_803A39A8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803A39A8: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x803A39AC: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x803A39B0: lui         $a0, 0x803A
    ctx->r4 = S32(0X803A << 16);
    // 0x803A39B4: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x803A39B8: addiu       $a0, $a0, 0x3A2C
    ctx->r4 = ADD32(ctx->r4, 0X3A2C);
    // 0x803A39BC: jal         0x800293DC
    // 0x803A39C0: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_800293DC(rdram, ctx);
        goto after_0;
    // 0x803A39C0: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_0:
    // 0x803A39C4: lw          $s0, 0x14($v0)
    ctx->r16 = MEM_W(ctx->r2, 0X14);
    // 0x803A39C8: lui         $a3, 0x803E
    ctx->r7 = S32(0X803E << 16);
    // 0x803A39CC: addiu       $a3, $a3, -0x7CD0
    ctx->r7 = ADD32(ctx->r7, -0X7CD0);
    // 0x803A39D0: addiu       $a1, $zero, 0x4BD
    ctx->r5 = ADD32(0, 0X4BD);
    // 0x803A39D4: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x803A39D8: jal         0x8004CD24
    // 0x803A39DC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8004CD24(rdram, ctx);
        goto after_1;
    // 0x803A39DC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
    // 0x803A39E0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x803A39E4: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    // 0x803A39E8: jal         0x8002135C
    // 0x803A39EC: addiu       $a2, $zero, 0x60
    ctx->r6 = ADD32(0, 0X60);
    func_8002135C(rdram, ctx);
        goto after_2;
    // 0x803A39EC: addiu       $a2, $zero, 0x60
    ctx->r6 = ADD32(0, 0X60);
    after_2:
    // 0x803A39F0: lw          $s0, 0x0($s0)
    ctx->r16 = MEM_W(ctx->r16, 0X0);
    // 0x803A39F4: lui         $a3, 0x803E
    ctx->r7 = S32(0X803E << 16);
    // 0x803A39F8: addiu       $a3, $a3, -0x7C88
    ctx->r7 = ADD32(ctx->r7, -0X7C88);
    // 0x803A39FC: addiu       $a1, $zero, 0x4BE
    ctx->r5 = ADD32(0, 0X4BE);
    // 0x803A3A00: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x803A3A04: jal         0x8004CD24
    // 0x803A3A08: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8004CD24(rdram, ctx);
        goto after_3;
    // 0x803A3A08: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_3:
    // 0x803A3A0C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x803A3A10: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    // 0x803A3A14: jal         0x8002135C
    // 0x803A3A18: addiu       $a2, $zero, 0x60
    ctx->r6 = ADD32(0, 0X60);
    func_8002135C(rdram, ctx);
        goto after_4;
    // 0x803A3A18: addiu       $a2, $zero, 0x60
    ctx->r6 = ADD32(0, 0X60);
    after_4:
    // 0x803A3A1C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x803A3A20: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x803A3A24: jr          $ra
    // 0x803A3A28: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x803A3A28: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_803A3A2C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803A3A2C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x803A3A30: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x803A3A34: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x803A3A38: lw          $v0, 0x8($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X8);
    // 0x803A3A3C: lui         $a0, 0x8005
    ctx->r4 = S32(0X8005 << 16);
    // 0x803A3A40: lb          $v1, 0x4C($v0)
    ctx->r3 = MEM_B(ctx->r2, 0X4C);
    // 0x803A3A44: nop

    // 0x803A3A48: bltz        $v1, L_803A3A90
    if (SIGNED(ctx->r3) < 0) {
        // 0x803A3A4C: slti        $at, $v1, 0x3
        ctx->r1 = SIGNED(ctx->r3) < 0X3 ? 1 : 0;
            goto L_803A3A90;
    }
    // 0x803A3A4C: slti        $at, $v1, 0x3
    ctx->r1 = SIGNED(ctx->r3) < 0X3 ? 1 : 0;
    // 0x803A3A50: beq         $at, $zero, L_803A3A90
    if (ctx->r1 == 0) {
        // 0x803A3A54: nop
    
            goto L_803A3A90;
    }
    // 0x803A3A54: nop

    // 0x803A3A58: lui         $a0, 0x8005
    ctx->r4 = S32(0X8005 << 16);
    // 0x803A3A5C: addiu       $a0, $a0, -0x3228
    ctx->r4 = ADD32(ctx->r4, -0X3228);
    // 0x803A3A60: jal         0x8002A468
    // 0x803A3A64: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    func_8002A468(rdram, ctx);
        goto after_0;
    // 0x803A3A64: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    after_0:
    // 0x803A3A68: lw          $v0, 0x1C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X1C);
    // 0x803A3A6C: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    // 0x803A3A70: lb          $t6, 0x4C($v0)
    ctx->r14 = MEM_B(ctx->r2, 0X4C);
    // 0x803A3A74: lui         $t8, 0x803A
    ctx->r24 = S32(0X803A << 16);
    // 0x803A3A78: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x803A3A7C: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x803A3A80: lw          $t8, 0x6D08($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X6D08);
    // 0x803A3A84: lw          $t0, 0x0($t9)
    ctx->r8 = MEM_W(ctx->r25, 0X0);
    // 0x803A3A88: b           L_803A3A98
    // 0x803A3A8C: sw          $t8, 0x30($t0)
    MEM_W(0X30, ctx->r8) = ctx->r24;
        goto L_803A3A98;
    // 0x803A3A8C: sw          $t8, 0x30($t0)
    MEM_W(0X30, ctx->r8) = ctx->r24;
L_803A3A90:
    // 0x803A3A90: jal         0x8002A468
    // 0x803A3A94: addiu       $a0, $a0, -0x3230
    ctx->r4 = ADD32(ctx->r4, -0X3230);
    func_8002A468(rdram, ctx);
        goto after_1;
    // 0x803A3A94: addiu       $a0, $a0, -0x3230
    ctx->r4 = ADD32(ctx->r4, -0X3230);
    after_1:
L_803A3A98:
    // 0x803A3A98: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x803A3A9C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x803A3AA0: jr          $ra
    // 0x803A3AA4: nop

    return;
    // 0x803A3AA4: nop

;}
RECOMP_FUNC void func_803A3AA8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803A3AA8: lw          $t6, 0x8($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X8);
    // 0x803A3AAC: nop

    // 0x803A3AB0: lw          $v0, 0x8($t6)
    ctx->r2 = MEM_W(ctx->r14, 0X8);
    // 0x803A3AB4: nop

    // 0x803A3AB8: lb          $v1, 0x4C($v0)
    ctx->r3 = MEM_B(ctx->r2, 0X4C);
    // 0x803A3ABC: nop

    // 0x803A3AC0: bltz        $v1, L_803A3AE8
    if (SIGNED(ctx->r3) < 0) {
        // 0x803A3AC4: slti        $at, $v1, 0xC
        ctx->r1 = SIGNED(ctx->r3) < 0XC ? 1 : 0;
            goto L_803A3AE8;
    }
    // 0x803A3AC4: slti        $at, $v1, 0xC
    ctx->r1 = SIGNED(ctx->r3) < 0XC ? 1 : 0;
    // 0x803A3AC8: beq         $at, $zero, L_803A3AE8
    if (ctx->r1 == 0) {
        // 0x803A3ACC: addiu       $at, $zero, 0x6
        ctx->r1 = ADD32(0, 0X6);
            goto L_803A3AE8;
    }
    // 0x803A3ACC: addiu       $at, $zero, 0x6
    ctx->r1 = ADD32(0, 0X6);
    // 0x803A3AD0: beq         $v1, $at, L_803A3AE8
    if (ctx->r3 == ctx->r1) {
        // 0x803A3AD4: addiu       $at, $zero, 0x7
        ctx->r1 = ADD32(0, 0X7);
            goto L_803A3AE8;
    }
    // 0x803A3AD4: addiu       $at, $zero, 0x7
    ctx->r1 = ADD32(0, 0X7);
    // 0x803A3AD8: beq         $v1, $at, L_803A3AE8
    if (ctx->r3 == ctx->r1) {
        // 0x803A3ADC: addiu       $t7, $zero, 0x1
        ctx->r15 = ADD32(0, 0X1);
            goto L_803A3AE8;
    }
    // 0x803A3ADC: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x803A3AE0: jr          $ra
    // 0x803A3AE4: sb          $t7, 0x4($a1)
    MEM_B(0X4, ctx->r5) = ctx->r15;
    return;
    // 0x803A3AE4: sb          $t7, 0x4($a1)
    MEM_B(0X4, ctx->r5) = ctx->r15;
L_803A3AE8:
    // 0x803A3AE8: sb          $zero, 0x4($a1)
    MEM_B(0X4, ctx->r5) = 0;
    // 0x803A3AEC: jr          $ra
    // 0x803A3AF0: nop

    return;
    // 0x803A3AF0: nop

;}
RECOMP_FUNC void func_803A3AF4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803A3AF4: lw          $t6, 0x8($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X8);
    // 0x803A3AF8: nop

    // 0x803A3AFC: lw          $v0, 0x8($t6)
    ctx->r2 = MEM_W(ctx->r14, 0X8);
    // 0x803A3B00: nop

    // 0x803A3B04: lb          $v1, 0x4C($v0)
    ctx->r3 = MEM_B(ctx->r2, 0X4C);
    // 0x803A3B08: nop

    // 0x803A3B0C: bltz        $v1, L_803A3B28
    if (SIGNED(ctx->r3) < 0) {
        // 0x803A3B10: slti        $at, $v1, 0x3
        ctx->r1 = SIGNED(ctx->r3) < 0X3 ? 1 : 0;
            goto L_803A3B28;
    }
    // 0x803A3B10: slti        $at, $v1, 0x3
    ctx->r1 = SIGNED(ctx->r3) < 0X3 ? 1 : 0;
    // 0x803A3B14: beq         $at, $zero, L_803A3B28
    if (ctx->r1 == 0) {
        // 0x803A3B18: lui         $t7, 0x803E
        ctx->r15 = S32(0X803E << 16);
            goto L_803A3B28;
    }
    // 0x803A3B18: lui         $t7, 0x803E
    ctx->r15 = S32(0X803E << 16);
    // 0x803A3B1C: addiu       $t7, $t7, -0x7C40
    ctx->r15 = ADD32(ctx->r15, -0X7C40);
    // 0x803A3B20: jr          $ra
    // 0x803A3B24: sw          $t7, 0x30($a1)
    MEM_W(0X30, ctx->r5) = ctx->r15;
    return;
    // 0x803A3B24: sw          $t7, 0x30($a1)
    MEM_W(0X30, ctx->r5) = ctx->r15;
L_803A3B28:
    // 0x803A3B28: slti        $at, $v1, 0x3
    ctx->r1 = SIGNED(ctx->r3) < 0X3 ? 1 : 0;
    // 0x803A3B2C: bne         $at, $zero, L_803A3B48
    if (ctx->r1 != 0) {
        // 0x803A3B30: slti        $at, $v1, 0x6
        ctx->r1 = SIGNED(ctx->r3) < 0X6 ? 1 : 0;
            goto L_803A3B48;
    }
    // 0x803A3B30: slti        $at, $v1, 0x6
    ctx->r1 = SIGNED(ctx->r3) < 0X6 ? 1 : 0;
    // 0x803A3B34: beq         $at, $zero, L_803A3B48
    if (ctx->r1 == 0) {
        // 0x803A3B38: lui         $t8, 0x803E
        ctx->r24 = S32(0X803E << 16);
            goto L_803A3B48;
    }
    // 0x803A3B38: lui         $t8, 0x803E
    ctx->r24 = S32(0X803E << 16);
    // 0x803A3B3C: addiu       $t8, $t8, -0x7C34
    ctx->r24 = ADD32(ctx->r24, -0X7C34);
    // 0x803A3B40: jr          $ra
    // 0x803A3B44: sw          $t8, 0x30($a1)
    MEM_W(0X30, ctx->r5) = ctx->r24;
    return;
    // 0x803A3B44: sw          $t8, 0x30($a1)
    MEM_W(0X30, ctx->r5) = ctx->r24;
L_803A3B48:
    // 0x803A3B48: slti        $at, $v1, 0x6
    ctx->r1 = SIGNED(ctx->r3) < 0X6 ? 1 : 0;
    // 0x803A3B4C: bne         $at, $zero, L_803A3B68
    if (ctx->r1 != 0) {
        // 0x803A3B50: slti        $at, $v1, 0xC
        ctx->r1 = SIGNED(ctx->r3) < 0XC ? 1 : 0;
            goto L_803A3B68;
    }
    // 0x803A3B50: slti        $at, $v1, 0xC
    ctx->r1 = SIGNED(ctx->r3) < 0XC ? 1 : 0;
    // 0x803A3B54: beq         $at, $zero, L_803A3B68
    if (ctx->r1 == 0) {
        // 0x803A3B58: lui         $t9, 0x803E
        ctx->r25 = S32(0X803E << 16);
            goto L_803A3B68;
    }
    // 0x803A3B58: lui         $t9, 0x803E
    ctx->r25 = S32(0X803E << 16);
    // 0x803A3B5C: addiu       $t9, $t9, -0x7C28
    ctx->r25 = ADD32(ctx->r25, -0X7C28);
    // 0x803A3B60: jr          $ra
    // 0x803A3B64: sw          $t9, 0x30($a1)
    MEM_W(0X30, ctx->r5) = ctx->r25;
    return;
    // 0x803A3B64: sw          $t9, 0x30($a1)
    MEM_W(0X30, ctx->r5) = ctx->r25;
L_803A3B68:
    // 0x803A3B68: sw          $zero, 0x30($a1)
    MEM_W(0X30, ctx->r5) = 0;
    // 0x803A3B6C: jr          $ra
    // 0x803A3B70: nop

    return;
    // 0x803A3B70: nop

    // 0x803A3B74: nop

    // 0x803A3B78: nop

    // 0x803A3B7C: nop

;}
RECOMP_FUNC void func_803A3B80(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803A3B80: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x803A3B84: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x803A3B88: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x803A3B8C: jal         0x80036258
    // 0x803A3B90: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    func_80036258(rdram, ctx);
        goto after_0;
    // 0x803A3B90: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    after_0:
    // 0x803A3B94: lui         $a0, 0x803D
    ctx->r4 = S32(0X803D << 16);
    // 0x803A3B98: jal         0x80035FF0
    // 0x803A3B9C: addiu       $a0, $a0, 0x1DE4
    ctx->r4 = ADD32(ctx->r4, 0X1DE4);
    func_80035FF0(rdram, ctx);
        goto after_1;
    // 0x803A3B9C: addiu       $a0, $a0, 0x1DE4
    ctx->r4 = ADD32(ctx->r4, 0X1DE4);
    after_1:
    // 0x803A3BA0: addiu       $a0, $zero, 0xF00
    ctx->r4 = ADD32(0, 0XF00);
    // 0x803A3BA4: addiu       $a1, $zero, 0x14
    ctx->r5 = ADD32(0, 0X14);
    // 0x803A3BA8: jal         0x80049E40
    // 0x803A3BAC: addiu       $a2, $zero, 0xF
    ctx->r6 = ADD32(0, 0XF);
    func_80049E40(rdram, ctx);
        goto after_2;
    // 0x803A3BAC: addiu       $a2, $zero, 0xF
    ctx->r6 = ADD32(0, 0XF);
    after_2:
    // 0x803A3BB0: jal         0x8003731C
    // 0x803A3BB4: nop

    func_8003731C(rdram, ctx);
        goto after_3;
    // 0x803A3BB4: nop

    after_3:
    // 0x803A3BB8: jal         0x803A3FA0
    // 0x803A3BBC: nop

    func_803A3FA0(rdram, ctx);
        goto after_4;
    // 0x803A3BBC: nop

    after_4:
    // 0x803A3BC0: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x803A3BC4: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    // 0x803A3BC8: jal         0x80021214
    // 0x803A3BCC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_80021214(rdram, ctx);
        goto after_5;
    // 0x803A3BCC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_5:
    // 0x803A3BD0: lui         $t6, 0x800B
    ctx->r14 = S32(0X800B << 16);
    // 0x803A3BD4: addiu       $t6, $t6, -0x6CE4
    ctx->r14 = ADD32(ctx->r14, -0X6CE4);
    // 0x803A3BD8: lw          $at, 0x0($t6)
    ctx->r1 = MEM_W(ctx->r14, 0X0);
    // 0x803A3BDC: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x803A3BE0: sw          $at, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r1;
    // 0x803A3BE4: lw          $a2, 0x4($t6)
    ctx->r6 = MEM_W(ctx->r14, 0X4);
    // 0x803A3BE8: lw          $a1, 0x4($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X4);
    // 0x803A3BEC: sw          $a2, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r6;
    // 0x803A3BF0: lw          $a3, 0x8($t6)
    ctx->r7 = MEM_W(ctx->r14, 0X8);
    // 0x803A3BF4: jal         0x8004B078
    // 0x803A3BF8: sw          $a3, 0xC($sp)
    MEM_W(0XC, ctx->r29) = ctx->r7;
    func_8004B078(rdram, ctx);
        goto after_6;
    // 0x803A3BF8: sw          $a3, 0xC($sp)
    MEM_W(0XC, ctx->r29) = ctx->r7;
    after_6:
    // 0x803A3BFC: jal         0x803A4160
    // 0x803A3C00: nop

    func_803A4160(rdram, ctx);
        goto after_7;
    // 0x803A3C00: nop

    after_7:
    // 0x803A3C04: jal         0x803A41AC
    // 0x803A3C08: nop

    func_803A41AC(rdram, ctx);
        goto after_8;
    // 0x803A3C08: nop

    after_8:
    // 0x803A3C0C: jal         0x803A41F8
    // 0x803A3C10: nop

    func_803A41F8(rdram, ctx);
        goto after_9;
    // 0x803A3C10: nop

    after_9:
    // 0x803A3C14: jal         0x803A4244
    // 0x803A3C18: nop

    func_803A4244(rdram, ctx);
        goto after_10;
    // 0x803A3C18: nop

    after_10:
    // 0x803A3C1C: lui         $a0, 0x803A
    ctx->r4 = S32(0X803A << 16);
    // 0x803A3C20: jal         0x8002AAC0
    // 0x803A3C24: addiu       $a0, $a0, 0x72CC
    ctx->r4 = ADD32(ctx->r4, 0X72CC);
    func_8002AAC0(rdram, ctx);
        goto after_11;
    // 0x803A3C24: addiu       $a0, $a0, 0x72CC
    ctx->r4 = ADD32(ctx->r4, 0X72CC);
    after_11:
    // 0x803A3C28: jal         0x803A43BC
    // 0x803A3C2C: nop

    func_803A43BC(rdram, ctx);
        goto after_12;
    // 0x803A3C2C: nop

    after_12:
    // 0x803A3C30: jal         0x8006F918
    // 0x803A3C34: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    func_8006F918(rdram, ctx);
        goto after_13;
    // 0x803A3C34: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_13:
    // 0x803A3C38: jal         0x803A4458
    // 0x803A3C3C: nop

    func_803A4458(rdram, ctx);
        goto after_14;
    // 0x803A3C3C: nop

    after_14:
    // 0x803A3C40: jal         0x803A44BC
    // 0x803A3C44: nop

    func_803A44BC(rdram, ctx);
        goto after_15;
    // 0x803A3C44: nop

    after_15:
    // 0x803A3C48: jal         0x803A459C
    // 0x803A3C4C: nop

    func_803A459C(rdram, ctx);
        goto after_16;
    // 0x803A3C4C: nop

    after_16:
    // 0x803A3C50: jal         0x803A467C
    // 0x803A3C54: nop

    func_803A467C(rdram, ctx);
        goto after_17;
    // 0x803A3C54: nop

    after_17:
    // 0x803A3C58: jal         0x803A4754
    // 0x803A3C5C: nop

    func_803A4754(rdram, ctx);
        goto after_18;
    // 0x803A3C5C: nop

    after_18:
    // 0x803A3C60: jal         0x803A482C
    // 0x803A3C64: nop

    func_803A482C(rdram, ctx);
        goto after_19;
    // 0x803A3C64: nop

    after_19:
    // 0x803A3C68: lui         $a0, 0x803A
    ctx->r4 = S32(0X803A << 16);
    // 0x803A3C6C: addiu       $a0, $a0, 0x3C88
    ctx->r4 = ADD32(ctx->r4, 0X3C88);
    // 0x803A3C70: jal         0x8004AE38
    // 0x803A3C74: addiu       $a1, $zero, 0xF
    ctx->r5 = ADD32(0, 0XF);
    func_8004AE38(rdram, ctx);
        goto after_20;
    // 0x803A3C74: addiu       $a1, $zero, 0xF
    ctx->r5 = ADD32(0, 0XF);
    after_20:
    // 0x803A3C78: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x803A3C7C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x803A3C80: jr          $ra
    // 0x803A3C84: nop

    return;
    // 0x803A3C84: nop

;}
RECOMP_FUNC void func_803A3C88(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803A3C88: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x803A3C8C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x803A3C90: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x803A3C94: lui         $v0, 0x8011
    ctx->r2 = S32(0X8011 << 16);
    // 0x803A3C98: lb          $t6, 0x2C($a0)
    ctx->r14 = MEM_B(ctx->r4, 0X2C);
    // 0x803A3C9C: addiu       $v0, $v0, -0x3770
    ctx->r2 = ADD32(ctx->r2, -0X3770);
    // 0x803A3CA0: lhu         $a2, 0x6F8($v0)
    ctx->r6 = MEM_HU(ctx->r2, 0X6F8);
    // 0x803A3CA4: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x803A3CA8: bne         $t6, $at, L_803A3CC4
    if (ctx->r14 != ctx->r1) {
        // 0x803A3CAC: or          $a3, $a0, $zero
        ctx->r7 = ctx->r4 | 0;
            goto L_803A3CC4;
    }
    // 0x803A3CAC: or          $a3, $a0, $zero
    ctx->r7 = ctx->r4 | 0;
    // 0x803A3CB0: lhu         $t7, 0x710($v0)
    ctx->r15 = MEM_HU(ctx->r2, 0X710);
    // 0x803A3CB4: nop

    // 0x803A3CB8: or          $a2, $a2, $t7
    ctx->r6 = ctx->r6 | ctx->r15;
    // 0x803A3CBC: andi        $t8, $a2, 0xFFFF
    ctx->r24 = ctx->r6 & 0XFFFF;
    // 0x803A3CC0: or          $a2, $t8, $zero
    ctx->r6 = ctx->r24 | 0;
L_803A3CC4:
    // 0x803A3CC4: andi        $a0, $a2, 0xFFFF
    ctx->r4 = ctx->r6 & 0XFFFF;
    // 0x803A3CC8: jal         0x80035B2C
    // 0x803A3CCC: sw          $a3, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r7;
    func_80035B2C(rdram, ctx);
        goto after_0;
    // 0x803A3CCC: sw          $a3, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r7;
    after_0:
    // 0x803A3CD0: sll         $t9, $v0, 2
    ctx->r25 = S32(ctx->r2 << 2);
    // 0x803A3CD4: lui         $at, 0x803A
    ctx->r1 = S32(0X803A << 16);
    // 0x803A3CD8: addu        $at, $at, $t9
    ctx->r1 = ADD32(ctx->r1, ctx->r25);
    // 0x803A3CDC: lw          $t9, 0x7338($at)
    ctx->r25 = MEM_W(ctx->r1, 0X7338);
    // 0x803A3CE0: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x803A3CE4: lw          $a1, 0x1C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X1C);
    // 0x803A3CE8: jalr        $t9
    // 0x803A3CEC: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x803A3CEC: nop

    after_1:
    // 0x803A3CF0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x803A3CF4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x803A3CF8: jr          $ra
    // 0x803A3CFC: nop

    return;
    // 0x803A3CFC: nop

;}
RECOMP_FUNC void func_803A3D00(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803A3D00: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x803A3D04: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x803A3D08: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x803A3D0C: lb          $t6, 0x38($a0)
    ctx->r14 = MEM_B(ctx->r4, 0X38);
    // 0x803A3D10: nop

    // 0x803A3D14: bne         $t6, $zero, L_803A3D38
    if (ctx->r14 != 0) {
        // 0x803A3D18: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_803A3D38;
    }
    // 0x803A3D18: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x803A3D1C: jal         0x80035770
    // 0x803A3D20: nop

    func_80035770(rdram, ctx);
        goto after_0;
    // 0x803A3D20: nop

    after_0:
    // 0x803A3D24: jal         0x803A40DC
    // 0x803A3D28: nop

    func_803A40DC(rdram, ctx);
        goto after_1;
    // 0x803A3D28: nop

    after_1:
    // 0x803A3D2C: jal         0x800373A4
    // 0x803A3D30: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    func_800373A4(rdram, ctx);
        goto after_2;
    // 0x803A3D30: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_2:
    // 0x803A3D34: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_803A3D38:
    // 0x803A3D38: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x803A3D3C: jr          $ra
    // 0x803A3D40: nop

    return;
    // 0x803A3D40: nop

;}
RECOMP_FUNC void func_803A3D44(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803A3D44: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    // 0x803A3D48: jr          $ra
    // 0x803A3D4C: sb          $zero, 0x38($a0)
    MEM_B(0X38, ctx->r4) = 0;
    return;
    // 0x803A3D4C: sb          $zero, 0x38($a0)
    MEM_B(0X38, ctx->r4) = 0;
;}
RECOMP_FUNC void func_803A3D50(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803A3D50: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x803A3D54: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x803A3D58: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x803A3D5C: jal         0x80035734
    // 0x803A3D60: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_80035734(rdram, ctx);
        goto after_0;
    // 0x803A3D60: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x803A3D64: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x803A3D68: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x803A3D6C: lb          $t6, 0x39($a0)
    ctx->r14 = MEM_B(ctx->r4, 0X39);
    // 0x803A3D70: nop

    // 0x803A3D74: bne         $t6, $at, L_803A3D9C
    if (ctx->r14 != ctx->r1) {
        // 0x803A3D78: nop
    
            goto L_803A3D9C;
    }
    // 0x803A3D78: nop

    // 0x803A3D7C: lb          $v0, 0x38($a0)
    ctx->r2 = MEM_B(ctx->r4, 0X38);
    // 0x803A3D80: addiu       $t7, $zero, 0x2
    ctx->r15 = ADD32(0, 0X2);
    // 0x803A3D84: bne         $v0, $zero, L_803A3D94
    if (ctx->r2 != 0) {
        // 0x803A3D88: addiu       $t8, $v0, -0x1
        ctx->r24 = ADD32(ctx->r2, -0X1);
            goto L_803A3D94;
    }
    // 0x803A3D88: addiu       $t8, $v0, -0x1
    ctx->r24 = ADD32(ctx->r2, -0X1);
    // 0x803A3D8C: b           L_803A3DB8
    // 0x803A3D90: sb          $t7, 0x38($a0)
    MEM_B(0X38, ctx->r4) = ctx->r15;
        goto L_803A3DB8;
    // 0x803A3D90: sb          $t7, 0x38($a0)
    MEM_B(0X38, ctx->r4) = ctx->r15;
L_803A3D94:
    // 0x803A3D94: b           L_803A3DB8
    // 0x803A3D98: sb          $t8, 0x38($a0)
    MEM_B(0X38, ctx->r4) = ctx->r24;
        goto L_803A3DB8;
    // 0x803A3D98: sb          $t8, 0x38($a0)
    MEM_B(0X38, ctx->r4) = ctx->r24;
L_803A3D9C:
    // 0x803A3D9C: lb          $v0, 0x38($a0)
    ctx->r2 = MEM_B(ctx->r4, 0X38);
    // 0x803A3DA0: addiu       $t9, $zero, 0x4
    ctx->r25 = ADD32(0, 0X4);
    // 0x803A3DA4: bne         $v0, $zero, L_803A3DB4
    if (ctx->r2 != 0) {
        // 0x803A3DA8: addiu       $t0, $v0, -0x1
        ctx->r8 = ADD32(ctx->r2, -0X1);
            goto L_803A3DB4;
    }
    // 0x803A3DA8: addiu       $t0, $v0, -0x1
    ctx->r8 = ADD32(ctx->r2, -0X1);
    // 0x803A3DAC: b           L_803A3DB8
    // 0x803A3DB0: sb          $t9, 0x38($a0)
    MEM_B(0X38, ctx->r4) = ctx->r25;
        goto L_803A3DB8;
    // 0x803A3DB0: sb          $t9, 0x38($a0)
    MEM_B(0X38, ctx->r4) = ctx->r25;
L_803A3DB4:
    // 0x803A3DB4: sb          $t0, 0x38($a0)
    MEM_B(0X38, ctx->r4) = ctx->r8;
L_803A3DB8:
    // 0x803A3DB8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x803A3DBC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x803A3DC0: jr          $ra
    // 0x803A3DC4: nop

    return;
    // 0x803A3DC4: nop

;}
RECOMP_FUNC void func_803A3DC8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803A3DC8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x803A3DCC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x803A3DD0: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x803A3DD4: jal         0x80035734
    // 0x803A3DD8: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_80035734(rdram, ctx);
        goto after_0;
    // 0x803A3DD8: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x803A3DDC: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x803A3DE0: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x803A3DE4: lb          $t6, 0x39($a0)
    ctx->r14 = MEM_B(ctx->r4, 0X39);
    // 0x803A3DE8: nop

    // 0x803A3DEC: bne         $t6, $at, L_803A3E14
    if (ctx->r14 != ctx->r1) {
        // 0x803A3DF0: nop
    
            goto L_803A3E14;
    }
    // 0x803A3DF0: nop

    // 0x803A3DF4: lb          $v0, 0x38($a0)
    ctx->r2 = MEM_B(ctx->r4, 0X38);
    // 0x803A3DF8: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x803A3DFC: bne         $v0, $at, L_803A3E0C
    if (ctx->r2 != ctx->r1) {
        // 0x803A3E00: addiu       $t7, $v0, 0x1
        ctx->r15 = ADD32(ctx->r2, 0X1);
            goto L_803A3E0C;
    }
    // 0x803A3E00: addiu       $t7, $v0, 0x1
    ctx->r15 = ADD32(ctx->r2, 0X1);
    // 0x803A3E04: b           L_803A3E30
    // 0x803A3E08: sb          $zero, 0x38($a0)
    MEM_B(0X38, ctx->r4) = 0;
        goto L_803A3E30;
    // 0x803A3E08: sb          $zero, 0x38($a0)
    MEM_B(0X38, ctx->r4) = 0;
L_803A3E0C:
    // 0x803A3E0C: b           L_803A3E30
    // 0x803A3E10: sb          $t7, 0x38($a0)
    MEM_B(0X38, ctx->r4) = ctx->r15;
        goto L_803A3E30;
    // 0x803A3E10: sb          $t7, 0x38($a0)
    MEM_B(0X38, ctx->r4) = ctx->r15;
L_803A3E14:
    // 0x803A3E14: lb          $v0, 0x38($a0)
    ctx->r2 = MEM_B(ctx->r4, 0X38);
    // 0x803A3E18: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x803A3E1C: bne         $v0, $at, L_803A3E2C
    if (ctx->r2 != ctx->r1) {
        // 0x803A3E20: addiu       $t8, $v0, 0x1
        ctx->r24 = ADD32(ctx->r2, 0X1);
            goto L_803A3E2C;
    }
    // 0x803A3E20: addiu       $t8, $v0, 0x1
    ctx->r24 = ADD32(ctx->r2, 0X1);
    // 0x803A3E24: b           L_803A3E30
    // 0x803A3E28: sb          $zero, 0x38($a0)
    MEM_B(0X38, ctx->r4) = 0;
        goto L_803A3E30;
    // 0x803A3E28: sb          $zero, 0x38($a0)
    MEM_B(0X38, ctx->r4) = 0;
L_803A3E2C:
    // 0x803A3E2C: sb          $t8, 0x38($a0)
    MEM_B(0X38, ctx->r4) = ctx->r24;
L_803A3E30:
    // 0x803A3E30: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x803A3E34: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x803A3E38: jr          $ra
    // 0x803A3E3C: nop

    return;
    // 0x803A3E3C: nop

;}
RECOMP_FUNC void func_803A3E40(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803A3E40: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x803A3E44: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x803A3E48: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x803A3E4C: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x803A3E50: lb          $v0, 0x38($a0)
    ctx->r2 = MEM_B(ctx->r4, 0X38);
    // 0x803A3E54: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x803A3E58: bne         $v0, $at, L_803A3E78
    if (ctx->r2 != ctx->r1) {
        // 0x803A3E5C: or          $s0, $a0, $zero
        ctx->r16 = ctx->r4 | 0;
            goto L_803A3E78;
    }
    // 0x803A3E5C: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x803A3E60: lb          $a0, 0x3A($a0)
    ctx->r4 = MEM_B(ctx->r4, 0X3A);
    // 0x803A3E64: lui         $a1, 0x803A
    ctx->r5 = S32(0X803A << 16);
    // 0x803A3E68: jal         0x8004C0D4
    // 0x803A3E6C: addiu       $a1, $a1, 0x7140
    ctx->r5 = ADD32(ctx->r5, 0X7140);
    func_8004C0D4(rdram, ctx);
        goto after_0;
    // 0x803A3E6C: addiu       $a1, $a1, 0x7140
    ctx->r5 = ADD32(ctx->r5, 0X7140);
    after_0:
    // 0x803A3E70: b           L_803A3ED4
    // 0x803A3E74: sb          $v0, 0x3A($s0)
    MEM_B(0X3A, ctx->r16) = ctx->r2;
        goto L_803A3ED4;
    // 0x803A3E74: sb          $v0, 0x3A($s0)
    MEM_B(0X3A, ctx->r16) = ctx->r2;
L_803A3E78:
    // 0x803A3E78: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x803A3E7C: bne         $v0, $at, L_803A3E98
    if (ctx->r2 != ctx->r1) {
        // 0x803A3E80: lui         $a1, 0x803A
        ctx->r5 = S32(0X803A << 16);
            goto L_803A3E98;
    }
    // 0x803A3E80: lui         $a1, 0x803A
    ctx->r5 = S32(0X803A << 16);
    // 0x803A3E84: lb          $a0, 0x3B($s0)
    ctx->r4 = MEM_B(ctx->r16, 0X3B);
    // 0x803A3E88: jal         0x8004C0D4
    // 0x803A3E8C: addiu       $a1, $a1, 0x7150
    ctx->r5 = ADD32(ctx->r5, 0X7150);
    func_8004C0D4(rdram, ctx);
        goto after_1;
    // 0x803A3E8C: addiu       $a1, $a1, 0x7150
    ctx->r5 = ADD32(ctx->r5, 0X7150);
    after_1:
    // 0x803A3E90: b           L_803A3ED4
    // 0x803A3E94: sb          $v0, 0x3B($s0)
    MEM_B(0X3B, ctx->r16) = ctx->r2;
        goto L_803A3ED4;
    // 0x803A3E94: sb          $v0, 0x3B($s0)
    MEM_B(0X3B, ctx->r16) = ctx->r2;
L_803A3E98:
    // 0x803A3E98: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x803A3E9C: bne         $v0, $at, L_803A3EB8
    if (ctx->r2 != ctx->r1) {
        // 0x803A3EA0: lui         $a1, 0x803A
        ctx->r5 = S32(0X803A << 16);
            goto L_803A3EB8;
    }
    // 0x803A3EA0: lui         $a1, 0x803A
    ctx->r5 = S32(0X803A << 16);
    // 0x803A3EA4: lb          $a0, 0x3C($s0)
    ctx->r4 = MEM_B(ctx->r16, 0X3C);
    // 0x803A3EA8: jal         0x8004C0D4
    // 0x803A3EAC: addiu       $a1, $a1, 0x7160
    ctx->r5 = ADD32(ctx->r5, 0X7160);
    func_8004C0D4(rdram, ctx);
        goto after_2;
    // 0x803A3EAC: addiu       $a1, $a1, 0x7160
    ctx->r5 = ADD32(ctx->r5, 0X7160);
    after_2:
    // 0x803A3EB0: b           L_803A3ED4
    // 0x803A3EB4: sb          $v0, 0x3C($s0)
    MEM_B(0X3C, ctx->r16) = ctx->r2;
        goto L_803A3ED4;
    // 0x803A3EB4: sb          $v0, 0x3C($s0)
    MEM_B(0X3C, ctx->r16) = ctx->r2;
L_803A3EB8:
    // 0x803A3EB8: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x803A3EBC: bne         $v0, $at, L_803A3ED4
    if (ctx->r2 != ctx->r1) {
        // 0x803A3EC0: lui         $a1, 0x803A
        ctx->r5 = S32(0X803A << 16);
            goto L_803A3ED4;
    }
    // 0x803A3EC0: lui         $a1, 0x803A
    ctx->r5 = S32(0X803A << 16);
    // 0x803A3EC4: lb          $a0, 0x3D($s0)
    ctx->r4 = MEM_B(ctx->r16, 0X3D);
    // 0x803A3EC8: jal         0x8004C0D4
    // 0x803A3ECC: addiu       $a1, $a1, 0x716C
    ctx->r5 = ADD32(ctx->r5, 0X716C);
    func_8004C0D4(rdram, ctx);
        goto after_3;
    // 0x803A3ECC: addiu       $a1, $a1, 0x716C
    ctx->r5 = ADD32(ctx->r5, 0X716C);
    after_3:
    // 0x803A3ED0: sb          $v0, 0x3D($s0)
    MEM_B(0X3D, ctx->r16) = ctx->r2;
L_803A3ED4:
    // 0x803A3ED4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x803A3ED8: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x803A3EDC: jr          $ra
    // 0x803A3EE0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x803A3EE0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_803A3EE4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803A3EE4: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x803A3EE8: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x803A3EEC: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x803A3EF0: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x803A3EF4: lb          $v0, 0x38($a0)
    ctx->r2 = MEM_B(ctx->r4, 0X38);
    // 0x803A3EF8: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x803A3EFC: bne         $v0, $at, L_803A3F1C
    if (ctx->r2 != ctx->r1) {
        // 0x803A3F00: or          $s0, $a0, $zero
        ctx->r16 = ctx->r4 | 0;
            goto L_803A3F1C;
    }
    // 0x803A3F00: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x803A3F04: lb          $a0, 0x3A($a0)
    ctx->r4 = MEM_B(ctx->r4, 0X3A);
    // 0x803A3F08: lui         $a1, 0x803A
    ctx->r5 = S32(0X803A << 16);
    // 0x803A3F0C: jal         0x8004C048
    // 0x803A3F10: addiu       $a1, $a1, 0x7140
    ctx->r5 = ADD32(ctx->r5, 0X7140);
    func_8004C048(rdram, ctx);
        goto after_0;
    // 0x803A3F10: addiu       $a1, $a1, 0x7140
    ctx->r5 = ADD32(ctx->r5, 0X7140);
    after_0:
    // 0x803A3F14: b           L_803A3F78
    // 0x803A3F18: sb          $v0, 0x3A($s0)
    MEM_B(0X3A, ctx->r16) = ctx->r2;
        goto L_803A3F78;
    // 0x803A3F18: sb          $v0, 0x3A($s0)
    MEM_B(0X3A, ctx->r16) = ctx->r2;
L_803A3F1C:
    // 0x803A3F1C: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x803A3F20: bne         $v0, $at, L_803A3F3C
    if (ctx->r2 != ctx->r1) {
        // 0x803A3F24: lui         $a1, 0x803A
        ctx->r5 = S32(0X803A << 16);
            goto L_803A3F3C;
    }
    // 0x803A3F24: lui         $a1, 0x803A
    ctx->r5 = S32(0X803A << 16);
    // 0x803A3F28: lb          $a0, 0x3B($s0)
    ctx->r4 = MEM_B(ctx->r16, 0X3B);
    // 0x803A3F2C: jal         0x8004C048
    // 0x803A3F30: addiu       $a1, $a1, 0x7150
    ctx->r5 = ADD32(ctx->r5, 0X7150);
    func_8004C048(rdram, ctx);
        goto after_1;
    // 0x803A3F30: addiu       $a1, $a1, 0x7150
    ctx->r5 = ADD32(ctx->r5, 0X7150);
    after_1:
    // 0x803A3F34: b           L_803A3F78
    // 0x803A3F38: sb          $v0, 0x3B($s0)
    MEM_B(0X3B, ctx->r16) = ctx->r2;
        goto L_803A3F78;
    // 0x803A3F38: sb          $v0, 0x3B($s0)
    MEM_B(0X3B, ctx->r16) = ctx->r2;
L_803A3F3C:
    // 0x803A3F3C: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x803A3F40: bne         $v0, $at, L_803A3F5C
    if (ctx->r2 != ctx->r1) {
        // 0x803A3F44: lui         $a1, 0x803A
        ctx->r5 = S32(0X803A << 16);
            goto L_803A3F5C;
    }
    // 0x803A3F44: lui         $a1, 0x803A
    ctx->r5 = S32(0X803A << 16);
    // 0x803A3F48: lb          $a0, 0x3C($s0)
    ctx->r4 = MEM_B(ctx->r16, 0X3C);
    // 0x803A3F4C: jal         0x8004C048
    // 0x803A3F50: addiu       $a1, $a1, 0x7160
    ctx->r5 = ADD32(ctx->r5, 0X7160);
    func_8004C048(rdram, ctx);
        goto after_2;
    // 0x803A3F50: addiu       $a1, $a1, 0x7160
    ctx->r5 = ADD32(ctx->r5, 0X7160);
    after_2:
    // 0x803A3F54: b           L_803A3F78
    // 0x803A3F58: sb          $v0, 0x3C($s0)
    MEM_B(0X3C, ctx->r16) = ctx->r2;
        goto L_803A3F78;
    // 0x803A3F58: sb          $v0, 0x3C($s0)
    MEM_B(0X3C, ctx->r16) = ctx->r2;
L_803A3F5C:
    // 0x803A3F5C: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x803A3F60: bne         $v0, $at, L_803A3F78
    if (ctx->r2 != ctx->r1) {
        // 0x803A3F64: lui         $a1, 0x803A
        ctx->r5 = S32(0X803A << 16);
            goto L_803A3F78;
    }
    // 0x803A3F64: lui         $a1, 0x803A
    ctx->r5 = S32(0X803A << 16);
    // 0x803A3F68: lb          $a0, 0x3D($s0)
    ctx->r4 = MEM_B(ctx->r16, 0X3D);
    // 0x803A3F6C: jal         0x8004C048
    // 0x803A3F70: addiu       $a1, $a1, 0x716C
    ctx->r5 = ADD32(ctx->r5, 0X716C);
    func_8004C048(rdram, ctx);
        goto after_3;
    // 0x803A3F70: addiu       $a1, $a1, 0x716C
    ctx->r5 = ADD32(ctx->r5, 0X716C);
    after_3:
    // 0x803A3F74: sb          $v0, 0x3D($s0)
    MEM_B(0X3D, ctx->r16) = ctx->r2;
L_803A3F78:
    // 0x803A3F78: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x803A3F7C: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x803A3F80: jr          $ra
    // 0x803A3F84: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x803A3F84: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_803A3F88(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803A3F88: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x803A3F8C: jr          $ra
    // 0x803A3F90: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    return;
    // 0x803A3F90: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
;}
RECOMP_FUNC void func_803A3F94(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803A3F94: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x803A3F98: jr          $ra
    // 0x803A3F9C: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    return;
    // 0x803A3F9C: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
;}
RECOMP_FUNC void func_803A3FA0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803A3FA0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x803A3FA4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x803A3FA8: jal         0x8004DF70
    // 0x803A3FAC: nop

    func_8004DF70(rdram, ctx);
        goto after_0;
    // 0x803A3FAC: nop

    after_0:
    // 0x803A3FB0: lui         $v1, 0x801B
    ctx->r3 = S32(0X801B << 16);
    // 0x803A3FB4: addiu       $v1, $v1, 0x1CF0
    ctx->r3 = ADD32(ctx->r3, 0X1CF0);
    // 0x803A3FB8: lw          $t6, 0x0($v1)
    ctx->r14 = MEM_W(ctx->r3, 0X0);
    // 0x803A3FBC: lui         $a1, 0x8012
    ctx->r5 = S32(0X8012 << 16);
    // 0x803A3FC0: sb          $v0, 0x2C($t6)
    MEM_B(0X2C, ctx->r14) = ctx->r2;
    // 0x803A3FC4: lw          $t7, 0x0($v1)
    ctx->r15 = MEM_W(ctx->r3, 0X0);
    // 0x803A3FC8: addiu       $a1, $a1, -0x32B0
    ctx->r5 = ADD32(ctx->r5, -0X32B0);
    // 0x803A3FCC: sb          $zero, 0x39($t7)
    MEM_B(0X39, ctx->r15) = 0;
    // 0x803A3FD0: lbu         $t8, 0xC($a1)
    ctx->r24 = MEM_BU(ctx->r5, 0XC);
    // 0x803A3FD4: nop

    // 0x803A3FD8: addiu       $t9, $t8, -0x1
    ctx->r25 = ADD32(ctx->r24, -0X1);
    // 0x803A3FDC: sltiu       $at, $t9, 0x7
    ctx->r1 = ctx->r25 < 0X7 ? 1 : 0;
    // 0x803A3FE0: beq         $at, $zero, L_803A402C
    if (ctx->r1 == 0) {
        // 0x803A3FE4: sll         $t9, $t9, 2
        ctx->r25 = S32(ctx->r25 << 2);
            goto L_803A402C;
    }
    // 0x803A3FE4: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x803A3FE8: lui         $at, 0x803A
    ctx->r1 = S32(0X803A << 16);
    // 0x803A3FEC: addu        $at, $at, $t9
    gpr jr_addend_803A3FF8 = ctx->r25;
    ctx->r1 = ADD32(ctx->r1, ctx->r25);
    // 0x803A3FF0: lw          $t9, 0x738C($at)
    ctx->r25 = ADD32(ctx->r1, 0X738C);
    // 0x803A3FF4: nop

    // 0x803A3FF8: jr          $t9
    // 0x803A3FFC: nop

    switch (jr_addend_803A3FF8 >> 2) {
        case 0: goto L_803A4000; break;
        case 1: goto L_803A401C; break;
        case 2: goto L_803A401C; break;
        case 3: goto L_803A402C; break;
        case 4: goto L_803A402C; break;
        case 5: goto L_803A401C; break;
        case 6: goto L_803A401C; break;
        default: switch_error(__func__, 0x803A3FF8, 0x803A738C);
    }
    // 0x803A3FFC: nop

L_803A4000:
    // 0x803A4000: lbu         $t0, 0x3E($a1)
    ctx->r8 = MEM_BU(ctx->r5, 0X3E);
    // 0x803A4004: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x803A4008: bne         $a2, $t0, L_803A4030
    if (ctx->r6 != ctx->r8) {
        // 0x803A400C: nop
    
            goto L_803A4030;
    }
    // 0x803A400C: nop

    // 0x803A4010: lw          $t1, 0x0($v1)
    ctx->r9 = MEM_W(ctx->r3, 0X0);
    // 0x803A4014: b           L_803A4030
    // 0x803A4018: sb          $a2, 0x39($t1)
    MEM_B(0X39, ctx->r9) = ctx->r6;
        goto L_803A4030;
    // 0x803A4018: sb          $a2, 0x39($t1)
    MEM_B(0X39, ctx->r9) = ctx->r6;
L_803A401C:
    // 0x803A401C: lw          $t2, 0x0($v1)
    ctx->r10 = MEM_W(ctx->r3, 0X0);
    // 0x803A4020: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x803A4024: b           L_803A4030
    // 0x803A4028: sb          $a2, 0x39($t2)
    MEM_B(0X39, ctx->r10) = ctx->r6;
        goto L_803A4030;
    // 0x803A4028: sb          $a2, 0x39($t2)
    MEM_B(0X39, ctx->r10) = ctx->r6;
L_803A402C:
    // 0x803A402C: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
L_803A4030:
    // 0x803A4030: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x803A4034: addiu       $a0, $a0, -0x3088
    ctx->r4 = ADD32(ctx->r4, -0X3088);
    // 0x803A4038: lbu         $t3, 0xF($a0)
    ctx->r11 = MEM_BU(ctx->r4, 0XF);
    // 0x803A403C: lw          $t4, 0x0($v1)
    ctx->r12 = MEM_W(ctx->r3, 0X0);
    // 0x803A4040: addiu       $at, $zero, 0x7
    ctx->r1 = ADD32(0, 0X7);
    // 0x803A4044: sb          $t3, 0x3A($t4)
    MEM_B(0X3A, ctx->r12) = ctx->r11;
    // 0x803A4048: lw          $t6, 0x0($v1)
    ctx->r14 = MEM_W(ctx->r3, 0X0);
    // 0x803A404C: lbu         $t5, 0xE($a0)
    ctx->r13 = MEM_BU(ctx->r4, 0XE);
    // 0x803A4050: nop

    // 0x803A4054: sb          $t5, 0x3B($t6)
    MEM_B(0X3B, ctx->r14) = ctx->r13;
    // 0x803A4058: lbu         $v0, 0xC($a1)
    ctx->r2 = MEM_BU(ctx->r5, 0XC);
    // 0x803A405C: nop

    // 0x803A4060: beq         $v0, $a2, L_803A4094
    if (ctx->r2 == ctx->r6) {
        // 0x803A4064: nop
    
            goto L_803A4094;
    }
    // 0x803A4064: nop

    // 0x803A4068: beq         $v0, $at, L_803A40B4
    if (ctx->r2 == ctx->r1) {
        // 0x803A406C: lui         $v0, 0x8012
        ctx->r2 = S32(0X8012 << 16);
            goto L_803A40B4;
    }
    // 0x803A406C: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x803A4070: addiu       $v0, $v0, -0x30A0
    ctx->r2 = ADD32(ctx->r2, -0X30A0);
    // 0x803A4074: lb          $t7, 0x4($v0)
    ctx->r15 = MEM_B(ctx->r2, 0X4);
    // 0x803A4078: lw          $t8, 0x0($v1)
    ctx->r24 = MEM_W(ctx->r3, 0X0);
    // 0x803A407C: nop

    // 0x803A4080: sb          $t7, 0x3C($t8)
    MEM_B(0X3C, ctx->r24) = ctx->r15;
    // 0x803A4084: lw          $t0, 0x0($v1)
    ctx->r8 = MEM_W(ctx->r3, 0X0);
    // 0x803A4088: lb          $t9, 0x1($v0)
    ctx->r25 = MEM_B(ctx->r2, 0X1);
    // 0x803A408C: b           L_803A40CC
    // 0x803A4090: sb          $t9, 0x3D($t0)
    MEM_B(0X3D, ctx->r8) = ctx->r25;
        goto L_803A40CC;
    // 0x803A4090: sb          $t9, 0x3D($t0)
    MEM_B(0X3D, ctx->r8) = ctx->r25;
L_803A4094:
    // 0x803A4094: lb          $t1, 0x4($a0)
    ctx->r9 = MEM_B(ctx->r4, 0X4);
    // 0x803A4098: lw          $t2, 0x0($v1)
    ctx->r10 = MEM_W(ctx->r3, 0X0);
    // 0x803A409C: nop

    // 0x803A40A0: sb          $t1, 0x3C($t2)
    MEM_B(0X3C, ctx->r10) = ctx->r9;
    // 0x803A40A4: lw          $t4, 0x0($v1)
    ctx->r12 = MEM_W(ctx->r3, 0X0);
    // 0x803A40A8: lb          $t3, 0x1($a0)
    ctx->r11 = MEM_B(ctx->r4, 0X1);
    // 0x803A40AC: b           L_803A40CC
    // 0x803A40B0: sb          $t3, 0x3D($t4)
    MEM_B(0X3D, ctx->r12) = ctx->r11;
        goto L_803A40CC;
    // 0x803A40B0: sb          $t3, 0x3D($t4)
    MEM_B(0X3D, ctx->r12) = ctx->r11;
L_803A40B4:
    // 0x803A40B4: lw          $t5, 0x0($v1)
    ctx->r13 = MEM_W(ctx->r3, 0X0);
    // 0x803A40B8: nop

    // 0x803A40BC: sb          $zero, 0x3C($t5)
    MEM_B(0X3C, ctx->r13) = 0;
    // 0x803A40C0: lw          $t6, 0x0($v1)
    ctx->r14 = MEM_W(ctx->r3, 0X0);
    // 0x803A40C4: nop

    // 0x803A40C8: sb          $zero, 0x3D($t6)
    MEM_B(0X3D, ctx->r14) = 0;
L_803A40CC:
    // 0x803A40CC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x803A40D0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x803A40D4: jr          $ra
    // 0x803A40D8: nop

    return;
    // 0x803A40D8: nop

;}
RECOMP_FUNC void func_803A40DC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803A40DC: lui         $v0, 0x801B
    ctx->r2 = S32(0X801B << 16);
    // 0x803A40E0: lw          $v0, 0x1CF0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X1CF0);
    // 0x803A40E4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x803A40E8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x803A40EC: lb          $t6, 0x3A($v0)
    ctx->r14 = MEM_B(ctx->r2, 0X3A);
    // 0x803A40F0: lui         $v1, 0x8012
    ctx->r3 = S32(0X8012 << 16);
    // 0x803A40F4: addiu       $v1, $v1, -0x3088
    ctx->r3 = ADD32(ctx->r3, -0X3088);
    // 0x803A40F8: sb          $t6, 0xF($v1)
    MEM_B(0XF, ctx->r3) = ctx->r14;
    // 0x803A40FC: lb          $t7, 0x3B($v0)
    ctx->r15 = MEM_B(ctx->r2, 0X3B);
    // 0x803A4100: lui         $t8, 0x8012
    ctx->r24 = S32(0X8012 << 16);
    // 0x803A4104: sb          $t7, 0xE($v1)
    MEM_B(0XE, ctx->r3) = ctx->r15;
    // 0x803A4108: lbu         $t8, -0x32A4($t8)
    ctx->r24 = MEM_BU(ctx->r24, -0X32A4);
    // 0x803A410C: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x803A4110: bne         $t8, $at, L_803A4130
    if (ctx->r24 != ctx->r1) {
        // 0x803A4114: nop
    
            goto L_803A4130;
    }
    // 0x803A4114: nop

    // 0x803A4118: lb          $t9, 0x3C($v0)
    ctx->r25 = MEM_B(ctx->r2, 0X3C);
    // 0x803A411C: nop

    // 0x803A4120: sb          $t9, 0x4($v1)
    MEM_B(0X4, ctx->r3) = ctx->r25;
    // 0x803A4124: lb          $t0, 0x3D($v0)
    ctx->r8 = MEM_B(ctx->r2, 0X3D);
    // 0x803A4128: nop

    // 0x803A412C: sb          $t0, 0x1($v1)
    MEM_B(0X1, ctx->r3) = ctx->r8;
L_803A4130:
    // 0x803A4130: jal         0x800331E0
    // 0x803A4134: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    func_800331E0(rdram, ctx);
        goto after_0;
    // 0x803A4134: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_0:
    // 0x803A4138: jal         0x80034908
    // 0x803A413C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    func_80034908(rdram, ctx);
        goto after_1;
    // 0x803A413C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_1:
    // 0x803A4140: bne         $v0, $zero, L_803A4154
    if (ctx->r2 != 0) {
        // 0x803A4144: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_803A4154;
    }
    // 0x803A4144: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x803A4148: jal         0x80035154
    // 0x803A414C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    func_80035154(rdram, ctx);
        goto after_2;
    // 0x803A414C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_2:
    // 0x803A4150: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_803A4154:
    // 0x803A4154: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x803A4158: jr          $ra
    // 0x803A415C: nop

    return;
    // 0x803A415C: nop

;}
RECOMP_FUNC void func_803A4160(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803A4160: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x803A4164: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x803A4168: jal         0x8004BD64
    // 0x803A416C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    func_8004BD64(rdram, ctx);
        goto after_0;
    // 0x803A416C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_0:
    // 0x803A4170: lui         $t7, 0x803A
    ctx->r15 = S32(0X803A << 16);
    // 0x803A4174: lw          $v1, 0x14($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X14);
    // 0x803A4178: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x803A417C: addiu       $t7, $t7, 0x4290
    ctx->r15 = ADD32(ctx->r15, 0X4290);
    // 0x803A4180: sb          $t6, 0x38($v0)
    MEM_B(0X38, ctx->r2) = ctx->r14;
    // 0x803A4184: sw          $t7, 0xC($v0)
    MEM_W(0XC, ctx->r2) = ctx->r15;
    // 0x803A4188: lui         $t9, 0x803E
    ctx->r25 = S32(0X803E << 16);
    // 0x803A418C: addiu       $t8, $zero, 0x9
    ctx->r24 = ADD32(0, 0X9);
    // 0x803A4190: addiu       $t9, $t9, -0x51EC
    ctx->r25 = ADD32(ctx->r25, -0X51EC);
    // 0x803A4194: sb          $t8, 0x5($v1)
    MEM_B(0X5, ctx->r3) = ctx->r24;
    // 0x803A4198: sw          $t9, 0x30($v1)
    MEM_W(0X30, ctx->r3) = ctx->r25;
    // 0x803A419C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x803A41A0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x803A41A4: jr          $ra
    // 0x803A41A8: nop

    return;
    // 0x803A41A8: nop

;}
RECOMP_FUNC void func_803A41AC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803A41AC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x803A41B0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x803A41B4: jal         0x8004BD64
    // 0x803A41B8: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    func_8004BD64(rdram, ctx);
        goto after_0;
    // 0x803A41B8: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_0:
    // 0x803A41BC: lui         $t7, 0x803A
    ctx->r15 = S32(0X803A << 16);
    // 0x803A41C0: lw          $v1, 0x14($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X14);
    // 0x803A41C4: addiu       $t6, $zero, 0x2
    ctx->r14 = ADD32(0, 0X2);
    // 0x803A41C8: addiu       $t7, $t7, 0x4290
    ctx->r15 = ADD32(ctx->r15, 0X4290);
    // 0x803A41CC: sb          $t6, 0x38($v0)
    MEM_B(0X38, ctx->r2) = ctx->r14;
    // 0x803A41D0: sw          $t7, 0xC($v0)
    MEM_W(0XC, ctx->r2) = ctx->r15;
    // 0x803A41D4: lui         $t9, 0x803E
    ctx->r25 = S32(0X803E << 16);
    // 0x803A41D8: addiu       $t8, $zero, 0x9
    ctx->r24 = ADD32(0, 0X9);
    // 0x803A41DC: addiu       $t9, $t9, -0x51EC
    ctx->r25 = ADD32(ctx->r25, -0X51EC);
    // 0x803A41E0: sb          $t8, 0x5($v1)
    MEM_B(0X5, ctx->r3) = ctx->r24;
    // 0x803A41E4: sw          $t9, 0x30($v1)
    MEM_W(0X30, ctx->r3) = ctx->r25;
    // 0x803A41E8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x803A41EC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x803A41F0: jr          $ra
    // 0x803A41F4: nop

    return;
    // 0x803A41F4: nop

;}
RECOMP_FUNC void func_803A41F8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803A41F8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x803A41FC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x803A4200: jal         0x8004BD64
    // 0x803A4204: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    func_8004BD64(rdram, ctx);
        goto after_0;
    // 0x803A4204: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_0:
    // 0x803A4208: lui         $t7, 0x803A
    ctx->r15 = S32(0X803A << 16);
    // 0x803A420C: lw          $v1, 0x14($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X14);
    // 0x803A4210: addiu       $t6, $zero, 0x3
    ctx->r14 = ADD32(0, 0X3);
    // 0x803A4214: addiu       $t7, $t7, 0x4290
    ctx->r15 = ADD32(ctx->r15, 0X4290);
    // 0x803A4218: sb          $t6, 0x38($v0)
    MEM_B(0X38, ctx->r2) = ctx->r14;
    // 0x803A421C: sw          $t7, 0xC($v0)
    MEM_W(0XC, ctx->r2) = ctx->r15;
    // 0x803A4220: lui         $t9, 0x803E
    ctx->r25 = S32(0X803E << 16);
    // 0x803A4224: addiu       $t8, $zero, 0x9
    ctx->r24 = ADD32(0, 0X9);
    // 0x803A4228: addiu       $t9, $t9, -0x5150
    ctx->r25 = ADD32(ctx->r25, -0X5150);
    // 0x803A422C: sb          $t8, 0x5($v1)
    MEM_B(0X5, ctx->r3) = ctx->r24;
    // 0x803A4230: sw          $t9, 0x30($v1)
    MEM_W(0X30, ctx->r3) = ctx->r25;
    // 0x803A4234: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x803A4238: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x803A423C: jr          $ra
    // 0x803A4240: nop

    return;
    // 0x803A4240: nop

;}
RECOMP_FUNC void func_803A4244(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803A4244: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x803A4248: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x803A424C: jal         0x8004BD64
    // 0x803A4250: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    func_8004BD64(rdram, ctx);
        goto after_0;
    // 0x803A4250: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_0:
    // 0x803A4254: lui         $t7, 0x803A
    ctx->r15 = S32(0X803A << 16);
    // 0x803A4258: lw          $v1, 0x14($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X14);
    // 0x803A425C: addiu       $t6, $zero, 0x4
    ctx->r14 = ADD32(0, 0X4);
    // 0x803A4260: addiu       $t7, $t7, 0x4290
    ctx->r15 = ADD32(ctx->r15, 0X4290);
    // 0x803A4264: sb          $t6, 0x38($v0)
    MEM_B(0X38, ctx->r2) = ctx->r14;
    // 0x803A4268: sw          $t7, 0xC($v0)
    MEM_W(0XC, ctx->r2) = ctx->r15;
    // 0x803A426C: lui         $t9, 0x803E
    ctx->r25 = S32(0X803E << 16);
    // 0x803A4270: addiu       $t8, $zero, 0x9
    ctx->r24 = ADD32(0, 0X9);
    // 0x803A4274: addiu       $t9, $t9, -0x509C
    ctx->r25 = ADD32(ctx->r25, -0X509C);
    // 0x803A4278: sb          $t8, 0x5($v1)
    MEM_B(0X5, ctx->r3) = ctx->r24;
    // 0x803A427C: sw          $t9, 0x30($v1)
    MEM_W(0X30, ctx->r3) = ctx->r25;
    // 0x803A4280: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x803A4284: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x803A4288: jr          $ra
    // 0x803A428C: nop

    return;
    // 0x803A428C: nop

;}
RECOMP_FUNC void func_803A4290(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803A4290: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x803A4294: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x803A4298: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x803A429C: lb          $a3, 0x38($a0)
    ctx->r7 = MEM_B(ctx->r4, 0X38);
    // 0x803A42A0: lw          $v1, 0x8($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X8);
    // 0x803A42A4: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x803A42A8: bne         $a3, $at, L_803A42D4
    if (ctx->r7 != ctx->r1) {
        // 0x803A42AC: lui         $t8, 0x803A
        ctx->r24 = S32(0X803A << 16);
            goto L_803A42D4;
    }
    // 0x803A42AC: lui         $t8, 0x803A
    ctx->r24 = S32(0X803A << 16);
    // 0x803A42B0: lb          $t6, 0x3A($v1)
    ctx->r14 = MEM_B(ctx->r3, 0X3A);
    // 0x803A42B4: addiu       $t8, $t8, 0x7360
    ctx->r24 = ADD32(ctx->r24, 0X7360);
    // 0x803A42B8: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x803A42BC: addu        $v0, $t7, $t8
    ctx->r2 = ADD32(ctx->r15, ctx->r24);
    // 0x803A42C0: lh          $t9, 0x0($v0)
    ctx->r25 = MEM_H(ctx->r2, 0X0);
    // 0x803A42C4: lh          $t0, 0x2($v0)
    ctx->r8 = MEM_H(ctx->r2, 0X2);
    // 0x803A42C8: sh          $t9, 0x24($sp)
    MEM_H(0X24, ctx->r29) = ctx->r25;
    // 0x803A42CC: b           L_803A436C
    // 0x803A42D0: sh          $t0, 0x22($sp)
    MEM_H(0X22, ctx->r29) = ctx->r8;
        goto L_803A436C;
    // 0x803A42D0: sh          $t0, 0x22($sp)
    MEM_H(0X22, ctx->r29) = ctx->r8;
L_803A42D4:
    // 0x803A42D4: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x803A42D8: bne         $a3, $at, L_803A430C
    if (ctx->r7 != ctx->r1) {
        // 0x803A42DC: addiu       $at, $zero, 0x3
        ctx->r1 = ADD32(0, 0X3);
            goto L_803A430C;
    }
    // 0x803A42DC: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x803A42E0: lb          $t1, 0x3B($v1)
    ctx->r9 = MEM_B(ctx->r3, 0X3B);
    // 0x803A42E4: lui         $t3, 0x803A
    ctx->r11 = S32(0X803A << 16);
    // 0x803A42E8: addiu       $t3, $t3, 0x736C
    ctx->r11 = ADD32(ctx->r11, 0X736C);
    // 0x803A42EC: sll         $t2, $t1, 2
    ctx->r10 = S32(ctx->r9 << 2);
    // 0x803A42F0: addu        $v0, $t2, $t3
    ctx->r2 = ADD32(ctx->r10, ctx->r11);
    // 0x803A42F4: lh          $t4, 0x0($v0)
    ctx->r12 = MEM_H(ctx->r2, 0X0);
    // 0x803A42F8: lh          $t5, 0x2($v0)
    ctx->r13 = MEM_H(ctx->r2, 0X2);
    // 0x803A42FC: sh          $t4, 0x24($sp)
    MEM_H(0X24, ctx->r29) = ctx->r12;
    // 0x803A4300: b           L_803A436C
    // 0x803A4304: sh          $t5, 0x22($sp)
    MEM_H(0X22, ctx->r29) = ctx->r13;
        goto L_803A436C;
    // 0x803A4304: sh          $t5, 0x22($sp)
    MEM_H(0X22, ctx->r29) = ctx->r13;
    // 0x803A4308: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
L_803A430C:
    // 0x803A430C: bne         $a3, $at, L_803A4340
    if (ctx->r7 != ctx->r1) {
        // 0x803A4310: addiu       $at, $zero, 0x4
        ctx->r1 = ADD32(0, 0X4);
            goto L_803A4340;
    }
    // 0x803A4310: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x803A4314: lb          $t6, 0x3C($v1)
    ctx->r14 = MEM_B(ctx->r3, 0X3C);
    // 0x803A4318: lui         $t8, 0x803A
    ctx->r24 = S32(0X803A << 16);
    // 0x803A431C: addiu       $t8, $t8, 0x7378
    ctx->r24 = ADD32(ctx->r24, 0X7378);
    // 0x803A4320: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x803A4324: addu        $v0, $t7, $t8
    ctx->r2 = ADD32(ctx->r15, ctx->r24);
    // 0x803A4328: lh          $t9, 0x0($v0)
    ctx->r25 = MEM_H(ctx->r2, 0X0);
    // 0x803A432C: lh          $t0, 0x2($v0)
    ctx->r8 = MEM_H(ctx->r2, 0X2);
    // 0x803A4330: sh          $t9, 0x24($sp)
    MEM_H(0X24, ctx->r29) = ctx->r25;
    // 0x803A4334: b           L_803A436C
    // 0x803A4338: sh          $t0, 0x22($sp)
    MEM_H(0X22, ctx->r29) = ctx->r8;
        goto L_803A436C;
    // 0x803A4338: sh          $t0, 0x22($sp)
    MEM_H(0X22, ctx->r29) = ctx->r8;
    // 0x803A433C: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
L_803A4340:
    // 0x803A4340: bne         $a3, $at, L_803A4370
    if (ctx->r7 != ctx->r1) {
        // 0x803A4344: lw          $a0, 0x2C($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X2C);
            goto L_803A4370;
    }
    // 0x803A4344: lw          $a0, 0x2C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X2C);
    // 0x803A4348: lb          $t1, 0x3D($v1)
    ctx->r9 = MEM_B(ctx->r3, 0X3D);
    // 0x803A434C: lui         $t3, 0x803A
    ctx->r11 = S32(0X803A << 16);
    // 0x803A4350: addiu       $t3, $t3, 0x7380
    ctx->r11 = ADD32(ctx->r11, 0X7380);
    // 0x803A4354: sll         $t2, $t1, 2
    ctx->r10 = S32(ctx->r9 << 2);
    // 0x803A4358: addu        $v0, $t2, $t3
    ctx->r2 = ADD32(ctx->r10, ctx->r11);
    // 0x803A435C: lh          $t4, 0x0($v0)
    ctx->r12 = MEM_H(ctx->r2, 0X0);
    // 0x803A4360: lh          $t5, 0x2($v0)
    ctx->r13 = MEM_H(ctx->r2, 0X2);
    // 0x803A4364: sh          $t4, 0x24($sp)
    MEM_H(0X24, ctx->r29) = ctx->r12;
    // 0x803A4368: sh          $t5, 0x22($sp)
    MEM_H(0X22, ctx->r29) = ctx->r13;
L_803A436C:
    // 0x803A436C: lw          $a0, 0x2C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X2C);
L_803A4370:
    // 0x803A4370: lh          $a1, 0x24($sp)
    ctx->r5 = MEM_H(ctx->r29, 0X24);
    // 0x803A4374: lh          $a2, 0x22($sp)
    ctx->r6 = MEM_H(ctx->r29, 0X22);
    // 0x803A4378: sw          $v1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r3;
    // 0x803A437C: jal         0x8004CD44
    // 0x803A4380: sb          $a3, 0x27($sp)
    MEM_B(0X27, ctx->r29) = ctx->r7;
    func_8004CD44(rdram, ctx);
        goto after_0;
    // 0x803A4380: sb          $a3, 0x27($sp)
    MEM_B(0X27, ctx->r29) = ctx->r7;
    after_0:
    // 0x803A4384: lw          $v1, 0x1C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X1C);
    // 0x803A4388: lb          $a3, 0x27($sp)
    ctx->r7 = MEM_B(ctx->r29, 0X27);
    // 0x803A438C: lb          $t6, 0x38($v1)
    ctx->r14 = MEM_B(ctx->r3, 0X38);
    // 0x803A4390: lw          $v0, 0x2C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X2C);
    // 0x803A4394: bne         $a3, $t6, L_803A43A4
    if (ctx->r7 != ctx->r14) {
        // 0x803A4398: addiu       $t7, $zero, 0x210
        ctx->r15 = ADD32(0, 0X210);
            goto L_803A43A4;
    }
    // 0x803A4398: addiu       $t7, $zero, 0x210
    ctx->r15 = ADD32(0, 0X210);
    // 0x803A439C: b           L_803A43AC
    // 0x803A43A0: sh          $t7, 0x12($v0)
    MEM_H(0X12, ctx->r2) = ctx->r15;
        goto L_803A43AC;
    // 0x803A43A0: sh          $t7, 0x12($v0)
    MEM_H(0X12, ctx->r2) = ctx->r15;
L_803A43A4:
    // 0x803A43A4: addiu       $t8, $zero, 0x414
    ctx->r24 = ADD32(0, 0X414);
    // 0x803A43A8: sh          $t8, 0x12($v0)
    MEM_H(0X12, ctx->r2) = ctx->r24;
L_803A43AC:
    // 0x803A43AC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x803A43B0: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x803A43B4: jr          $ra
    // 0x803A43B8: nop

    return;
    // 0x803A43B8: nop

;}
RECOMP_FUNC void func_803A43BC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803A43BC: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x803A43C0: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x803A43C4: lui         $a0, 0x8005
    ctx->r4 = S32(0X8005 << 16);
    // 0x803A43C8: sw          $s3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r19;
    // 0x803A43CC: sw          $s2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r18;
    // 0x803A43D0: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x803A43D4: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x803A43D8: addiu       $a0, $a0, -0x1E98
    ctx->r4 = ADD32(ctx->r4, -0X1E98);
    // 0x803A43DC: jal         0x800293DC
    // 0x803A43E0: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    func_800293DC(rdram, ctx);
        goto after_0;
    // 0x803A43E0: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_0:
    // 0x803A43E4: lw          $s0, 0x14($v0)
    ctx->r16 = MEM_W(ctx->r2, 0X14);
    // 0x803A43E8: addiu       $s2, $zero, -0x1
    ctx->r18 = ADD32(0, -0X1);
    // 0x803A43EC: beq         $s0, $s2, L_803A443C
    if (ctx->r16 == ctx->r18) {
        // 0x803A43F0: or          $s1, $zero, $zero
        ctx->r17 = 0 | 0;
            goto L_803A443C;
    }
    // 0x803A43F0: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    // 0x803A43F4: lui         $s3, 0x803A
    ctx->r19 = S32(0X803A << 16);
    // 0x803A43F8: addiu       $s3, $s3, 0x6F90
    ctx->r19 = ADD32(ctx->r19, 0X6F90);
L_803A43FC:
    // 0x803A43FC: sll         $t6, $s1, 3
    ctx->r14 = S32(ctx->r17 << 3);
    // 0x803A4400: addu        $v0, $s3, $t6
    ctx->r2 = ADD32(ctx->r19, ctx->r14);
    // 0x803A4404: lhu         $a1, 0x4($v0)
    ctx->r5 = MEM_HU(ctx->r2, 0X4);
    // 0x803A4408: lw          $a3, 0x0($v0)
    ctx->r7 = MEM_W(ctx->r2, 0X0);
    // 0x803A440C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x803A4410: jal         0x8004CD24
    // 0x803A4414: addiu       $a2, $zero, 0x5
    ctx->r6 = ADD32(0, 0X5);
    func_8004CD24(rdram, ctx);
        goto after_1;
    // 0x803A4414: addiu       $a2, $zero, 0x5
    ctx->r6 = ADD32(0, 0X5);
    after_1:
    // 0x803A4418: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x803A441C: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    // 0x803A4420: jal         0x80021408
    // 0x803A4424: addiu       $a2, $zero, 0x40
    ctx->r6 = ADD32(0, 0X40);
    func_80021408(rdram, ctx);
        goto after_2;
    // 0x803A4424: addiu       $a2, $zero, 0x40
    ctx->r6 = ADD32(0, 0X40);
    after_2:
    // 0x803A4428: lw          $s0, 0x0($s0)
    ctx->r16 = MEM_W(ctx->r16, 0X0);
    // 0x803A442C: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x803A4430: andi        $t7, $s1, 0xFF
    ctx->r15 = ctx->r17 & 0XFF;
    // 0x803A4434: bne         $s0, $s2, L_803A43FC
    if (ctx->r16 != ctx->r18) {
        // 0x803A4438: or          $s1, $t7, $zero
        ctx->r17 = ctx->r15 | 0;
            goto L_803A43FC;
    }
    // 0x803A4438: or          $s1, $t7, $zero
    ctx->r17 = ctx->r15 | 0;
L_803A443C:
    // 0x803A443C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x803A4440: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x803A4444: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x803A4448: lw          $s2, 0x1C($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X1C);
    // 0x803A444C: lw          $s3, 0x20($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X20);
    // 0x803A4450: jr          $ra
    // 0x803A4454: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x803A4454: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_803A4458(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803A4458: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x803A445C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x803A4460: lui         $a0, 0x8005
    ctx->r4 = S32(0X8005 << 16);
    // 0x803A4464: addiu       $a0, $a0, -0x1E98
    ctx->r4 = ADD32(ctx->r4, -0X1E98);
    // 0x803A4468: jal         0x800293DC
    // 0x803A446C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_800293DC(rdram, ctx);
        goto after_0;
    // 0x803A446C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_0:
    // 0x803A4470: lui         $t6, 0x801B
    ctx->r14 = S32(0X801B << 16);
    // 0x803A4474: lw          $t6, 0x1CF0($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X1CF0);
    // 0x803A4478: lw          $a0, 0x14($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X14);
    // 0x803A447C: lb          $t7, 0x39($t6)
    ctx->r15 = MEM_B(ctx->r14, 0X39);
    // 0x803A4480: lui         $a1, 0x803A
    ctx->r5 = S32(0X803A << 16);
    // 0x803A4484: beq         $t7, $zero, L_803A44A4
    if (ctx->r15 == 0) {
        // 0x803A4488: addiu       $a1, $a1, 0x6FA8
        ctx->r5 = ADD32(ctx->r5, 0X6FA8);
            goto L_803A44A4;
    }
    // 0x803A4488: addiu       $a1, $a1, 0x6FA8
    ctx->r5 = ADD32(ctx->r5, 0X6FA8);
    // 0x803A448C: lui         $a1, 0x803A
    ctx->r5 = S32(0X803A << 16);
    // 0x803A4490: addiu       $a1, $a1, 0x6FBC
    ctx->r5 = ADD32(ctx->r5, 0X6FBC);
    // 0x803A4494: jal         0x8004A3FC
    // 0x803A4498: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    func_8004A3FC(rdram, ctx);
        goto after_1;
    // 0x803A4498: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    after_1:
    // 0x803A449C: b           L_803A44B0
    // 0x803A44A0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_803A44B0;
    // 0x803A44A0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_803A44A4:
    // 0x803A44A4: jal         0x8004A298
    // 0x803A44A8: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    func_8004A298(rdram, ctx);
        goto after_2;
    // 0x803A44A8: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    after_2:
    // 0x803A44AC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_803A44B0:
    // 0x803A44B0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x803A44B4: jr          $ra
    // 0x803A44B8: nop

    return;
    // 0x803A44B8: nop

;}
RECOMP_FUNC void func_803A44BC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803A44BC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x803A44C0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x803A44C4: lui         $a0, 0x803A
    ctx->r4 = S32(0X803A << 16);
    // 0x803A44C8: addiu       $a0, $a0, 0x44F8
    ctx->r4 = ADD32(ctx->r4, 0X44F8);
    // 0x803A44CC: jal         0x800293DC
    // 0x803A44D0: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    func_800293DC(rdram, ctx);
        goto after_0;
    // 0x803A44D0: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_0:
    // 0x803A44D4: lw          $a0, 0x14($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X14);
    // 0x803A44D8: lui         $a1, 0x803A
    ctx->r5 = S32(0X803A << 16);
    // 0x803A44DC: addiu       $a1, $a1, 0x6FD0
    ctx->r5 = ADD32(ctx->r5, 0X6FD0);
    // 0x803A44E0: jal         0x8004A298
    // 0x803A44E4: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    func_8004A298(rdram, ctx);
        goto after_1;
    // 0x803A44E4: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    after_1:
    // 0x803A44E8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x803A44EC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x803A44F0: jr          $ra
    // 0x803A44F4: nop

    return;
    // 0x803A44F4: nop

;}
RECOMP_FUNC void func_803A44F8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803A44F8: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x803A44FC: sw          $s3, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r19;
    // 0x803A4500: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x803A4504: sw          $s2, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r18;
    // 0x803A4508: sw          $s1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r17;
    // 0x803A450C: sw          $s0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r16;
    // 0x803A4510: addiu       $s3, $zero, -0x1
    ctx->r19 = ADD32(0, -0X1);
    // 0x803A4514: lw          $s2, 0x8($a0)
    ctx->r18 = MEM_W(ctx->r4, 0X8);
    // 0x803A4518: or          $s0, $a1, $zero
    ctx->r16 = ctx->r5 | 0;
    // 0x803A451C: beq         $a1, $s3, L_803A4580
    if (ctx->r5 == ctx->r19) {
        // 0x803A4520: or          $s1, $zero, $zero
        ctx->r17 = 0 | 0;
            goto L_803A4580;
    }
    // 0x803A4520: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
L_803A4524:
    // 0x803A4524: lb          $t6, 0x3A($s2)
    ctx->r14 = MEM_B(ctx->r18, 0X3A);
    // 0x803A4528: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x803A452C: bne         $s1, $t6, L_803A4558
    if (ctx->r17 != ctx->r14) {
        // 0x803A4530: or          $a1, $zero, $zero
        ctx->r5 = 0 | 0;
            goto L_803A4558;
    }
    // 0x803A4530: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x803A4534: addiu       $t7, $zero, 0xB3
    ctx->r15 = ADD32(0, 0XB3);
    // 0x803A4538: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x803A453C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x803A4540: addiu       $a1, $zero, 0x45
    ctx->r5 = ADD32(0, 0X45);
    // 0x803A4544: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x803A4548: jal         0x8004A5C0
    // 0x803A454C: addiu       $a3, $zero, 0x14
    ctx->r7 = ADD32(0, 0X14);
    func_8004A5C0(rdram, ctx);
        goto after_0;
    // 0x803A454C: addiu       $a3, $zero, 0x14
    ctx->r7 = ADD32(0, 0X14);
    after_0:
    // 0x803A4550: b           L_803A4570
    // 0x803A4554: lw          $s0, 0x0($s0)
    ctx->r16 = MEM_W(ctx->r16, 0X0);
        goto L_803A4570;
    // 0x803A4554: lw          $s0, 0x0($s0)
    ctx->r16 = MEM_W(ctx->r16, 0X0);
L_803A4558:
    // 0x803A4558: addiu       $t8, $zero, 0xB3
    ctx->r24 = ADD32(0, 0XB3);
    // 0x803A455C: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    // 0x803A4560: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x803A4564: jal         0x8004A5C0
    // 0x803A4568: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    func_8004A5C0(rdram, ctx);
        goto after_1;
    // 0x803A4568: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_1:
    // 0x803A456C: lw          $s0, 0x0($s0)
    ctx->r16 = MEM_W(ctx->r16, 0X0);
L_803A4570:
    // 0x803A4570: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x803A4574: andi        $t9, $s1, 0xFF
    ctx->r25 = ctx->r17 & 0XFF;
    // 0x803A4578: bne         $s0, $s3, L_803A4524
    if (ctx->r16 != ctx->r19) {
        // 0x803A457C: or          $s1, $t9, $zero
        ctx->r17 = ctx->r25 | 0;
            goto L_803A4524;
    }
    // 0x803A457C: or          $s1, $t9, $zero
    ctx->r17 = ctx->r25 | 0;
L_803A4580:
    // 0x803A4580: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x803A4584: lw          $s0, 0x1C($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X1C);
    // 0x803A4588: lw          $s1, 0x20($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X20);
    // 0x803A458C: lw          $s2, 0x24($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X24);
    // 0x803A4590: lw          $s3, 0x28($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X28);
    // 0x803A4594: jr          $ra
    // 0x803A4598: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x803A4598: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_803A459C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803A459C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x803A45A0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x803A45A4: lui         $a0, 0x803A
    ctx->r4 = S32(0X803A << 16);
    // 0x803A45A8: addiu       $a0, $a0, 0x45D8
    ctx->r4 = ADD32(ctx->r4, 0X45D8);
    // 0x803A45AC: jal         0x800293DC
    // 0x803A45B0: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    func_800293DC(rdram, ctx);
        goto after_0;
    // 0x803A45B0: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_0:
    // 0x803A45B4: lw          $a0, 0x14($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X14);
    // 0x803A45B8: lui         $a1, 0x803A
    ctx->r5 = S32(0X803A << 16);
    // 0x803A45BC: addiu       $a1, $a1, 0x6FEE
    ctx->r5 = ADD32(ctx->r5, 0X6FEE);
    // 0x803A45C0: jal         0x8004A298
    // 0x803A45C4: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    func_8004A298(rdram, ctx);
        goto after_1;
    // 0x803A45C4: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    after_1:
    // 0x803A45C8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x803A45CC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x803A45D0: jr          $ra
    // 0x803A45D4: nop

    return;
    // 0x803A45D4: nop

;}
RECOMP_FUNC void func_803A45D8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803A45D8: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x803A45DC: sw          $s3, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r19;
    // 0x803A45E0: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x803A45E4: sw          $s2, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r18;
    // 0x803A45E8: sw          $s1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r17;
    // 0x803A45EC: sw          $s0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r16;
    // 0x803A45F0: addiu       $s3, $zero, -0x1
    ctx->r19 = ADD32(0, -0X1);
    // 0x803A45F4: lw          $s2, 0x8($a0)
    ctx->r18 = MEM_W(ctx->r4, 0X8);
    // 0x803A45F8: or          $s0, $a1, $zero
    ctx->r16 = ctx->r5 | 0;
    // 0x803A45FC: beq         $a1, $s3, L_803A4660
    if (ctx->r5 == ctx->r19) {
        // 0x803A4600: or          $s1, $zero, $zero
        ctx->r17 = 0 | 0;
            goto L_803A4660;
    }
    // 0x803A4600: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
L_803A4604:
    // 0x803A4604: lb          $t6, 0x3B($s2)
    ctx->r14 = MEM_B(ctx->r18, 0X3B);
    // 0x803A4608: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x803A460C: bne         $s1, $t6, L_803A4638
    if (ctx->r17 != ctx->r14) {
        // 0x803A4610: or          $a1, $zero, $zero
        ctx->r5 = 0 | 0;
            goto L_803A4638;
    }
    // 0x803A4610: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x803A4614: addiu       $t7, $zero, 0xB3
    ctx->r15 = ADD32(0, 0XB3);
    // 0x803A4618: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x803A461C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x803A4620: addiu       $a1, $zero, 0x45
    ctx->r5 = ADD32(0, 0X45);
    // 0x803A4624: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x803A4628: jal         0x8004A5C0
    // 0x803A462C: addiu       $a3, $zero, 0x14
    ctx->r7 = ADD32(0, 0X14);
    func_8004A5C0(rdram, ctx);
        goto after_0;
    // 0x803A462C: addiu       $a3, $zero, 0x14
    ctx->r7 = ADD32(0, 0X14);
    after_0:
    // 0x803A4630: b           L_803A4650
    // 0x803A4634: lw          $s0, 0x0($s0)
    ctx->r16 = MEM_W(ctx->r16, 0X0);
        goto L_803A4650;
    // 0x803A4634: lw          $s0, 0x0($s0)
    ctx->r16 = MEM_W(ctx->r16, 0X0);
L_803A4638:
    // 0x803A4638: addiu       $t8, $zero, 0xB3
    ctx->r24 = ADD32(0, 0XB3);
    // 0x803A463C: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    // 0x803A4640: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x803A4644: jal         0x8004A5C0
    // 0x803A4648: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    func_8004A5C0(rdram, ctx);
        goto after_1;
    // 0x803A4648: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_1:
    // 0x803A464C: lw          $s0, 0x0($s0)
    ctx->r16 = MEM_W(ctx->r16, 0X0);
L_803A4650:
    // 0x803A4650: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x803A4654: andi        $t9, $s1, 0xFF
    ctx->r25 = ctx->r17 & 0XFF;
    // 0x803A4658: bne         $s0, $s3, L_803A4604
    if (ctx->r16 != ctx->r19) {
        // 0x803A465C: or          $s1, $t9, $zero
        ctx->r17 = ctx->r25 | 0;
            goto L_803A4604;
    }
    // 0x803A465C: or          $s1, $t9, $zero
    ctx->r17 = ctx->r25 | 0;
L_803A4660:
    // 0x803A4660: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x803A4664: lw          $s0, 0x1C($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X1C);
    // 0x803A4668: lw          $s1, 0x20($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X20);
    // 0x803A466C: lw          $s2, 0x24($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X24);
    // 0x803A4670: lw          $s3, 0x28($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X28);
    // 0x803A4674: jr          $ra
    // 0x803A4678: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x803A4678: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_803A467C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803A467C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x803A4680: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x803A4684: lui         $a0, 0x803A
    ctx->r4 = S32(0X803A << 16);
    // 0x803A4688: addiu       $a0, $a0, 0x46B8
    ctx->r4 = ADD32(ctx->r4, 0X46B8);
    // 0x803A468C: jal         0x800293DC
    // 0x803A4690: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_800293DC(rdram, ctx);
        goto after_0;
    // 0x803A4690: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_0:
    // 0x803A4694: lw          $a0, 0x14($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X14);
    // 0x803A4698: lui         $a1, 0x803A
    ctx->r5 = S32(0X803A << 16);
    // 0x803A469C: addiu       $a1, $a1, 0x700C
    ctx->r5 = ADD32(ctx->r5, 0X700C);
    // 0x803A46A0: jal         0x8004A298
    // 0x803A46A4: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    func_8004A298(rdram, ctx);
        goto after_1;
    // 0x803A46A4: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    after_1:
    // 0x803A46A8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x803A46AC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x803A46B0: jr          $ra
    // 0x803A46B4: nop

    return;
    // 0x803A46B4: nop

;}
RECOMP_FUNC void func_803A46B8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803A46B8: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x803A46BC: sw          $s4, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r20;
    // 0x803A46C0: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x803A46C4: sw          $s3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r19;
    // 0x803A46C8: sw          $s2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r18;
    // 0x803A46CC: sw          $s1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r17;
    // 0x803A46D0: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x803A46D4: addiu       $s4, $zero, -0x1
    ctx->r20 = ADD32(0, -0X1);
    // 0x803A46D8: lw          $s3, 0x8($a0)
    ctx->r19 = MEM_W(ctx->r4, 0X8);
    // 0x803A46DC: or          $s0, $a1, $zero
    ctx->r16 = ctx->r5 | 0;
    // 0x803A46E0: beq         $a1, $s4, L_803A4734
    if (ctx->r5 == ctx->r20) {
        // 0x803A46E4: or          $s1, $zero, $zero
        ctx->r17 = 0 | 0;
            goto L_803A4734;
    }
    // 0x803A46E4: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    // 0x803A46E8: addiu       $s2, $zero, 0x1
    ctx->r18 = ADD32(0, 0X1);
L_803A46EC:
    // 0x803A46EC: lb          $t6, 0x3C($s3)
    ctx->r14 = MEM_B(ctx->r19, 0X3C);
    // 0x803A46F0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x803A46F4: bne         $s1, $t6, L_803A471C
    if (ctx->r17 != ctx->r14) {
        // 0x803A46F8: addiu       $a1, $zero, 0x45
        ctx->r5 = ADD32(0, 0X45);
            goto L_803A471C;
    }
    // 0x803A46F8: addiu       $a1, $zero, 0x45
    ctx->r5 = ADD32(0, 0X45);
    // 0x803A46FC: sb          $s2, 0x4($s0)
    MEM_B(0X4, ctx->r16) = ctx->r18;
    // 0x803A4700: addiu       $t7, $zero, 0xB3
    ctx->r15 = ADD32(0, 0XB3);
    // 0x803A4704: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x803A4708: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x803A470C: jal         0x8004A5C0
    // 0x803A4710: addiu       $a3, $zero, 0x14
    ctx->r7 = ADD32(0, 0X14);
    func_8004A5C0(rdram, ctx);
        goto after_0;
    // 0x803A4710: addiu       $a3, $zero, 0x14
    ctx->r7 = ADD32(0, 0X14);
    after_0:
    // 0x803A4714: b           L_803A4724
    // 0x803A4718: lw          $s0, 0x0($s0)
    ctx->r16 = MEM_W(ctx->r16, 0X0);
        goto L_803A4724;
    // 0x803A4718: lw          $s0, 0x0($s0)
    ctx->r16 = MEM_W(ctx->r16, 0X0);
L_803A471C:
    // 0x803A471C: sb          $zero, 0x4($s0)
    MEM_B(0X4, ctx->r16) = 0;
    // 0x803A4720: lw          $s0, 0x0($s0)
    ctx->r16 = MEM_W(ctx->r16, 0X0);
L_803A4724:
    // 0x803A4724: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x803A4728: andi        $t8, $s1, 0xFF
    ctx->r24 = ctx->r17 & 0XFF;
    // 0x803A472C: bne         $s0, $s4, L_803A46EC
    if (ctx->r16 != ctx->r20) {
        // 0x803A4730: or          $s1, $t8, $zero
        ctx->r17 = ctx->r24 | 0;
            goto L_803A46EC;
    }
    // 0x803A4730: or          $s1, $t8, $zero
    ctx->r17 = ctx->r24 | 0;
L_803A4734:
    // 0x803A4734: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x803A4738: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x803A473C: lw          $s1, 0x24($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X24);
    // 0x803A4740: lw          $s2, 0x28($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X28);
    // 0x803A4744: lw          $s3, 0x2C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X2C);
    // 0x803A4748: lw          $s4, 0x30($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X30);
    // 0x803A474C: jr          $ra
    // 0x803A4750: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    return;
    // 0x803A4750: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_803A4754(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803A4754: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x803A4758: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x803A475C: lui         $a0, 0x803A
    ctx->r4 = S32(0X803A << 16);
    // 0x803A4760: addiu       $a0, $a0, 0x4790
    ctx->r4 = ADD32(ctx->r4, 0X4790);
    // 0x803A4764: jal         0x800293DC
    // 0x803A4768: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    func_800293DC(rdram, ctx);
        goto after_0;
    // 0x803A4768: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_0:
    // 0x803A476C: lw          $a0, 0x14($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X14);
    // 0x803A4770: lui         $a1, 0x803A
    ctx->r5 = S32(0X803A << 16);
    // 0x803A4774: addiu       $a1, $a1, 0x7020
    ctx->r5 = ADD32(ctx->r5, 0X7020);
    // 0x803A4778: jal         0x8004A298
    // 0x803A477C: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    func_8004A298(rdram, ctx);
        goto after_1;
    // 0x803A477C: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    after_1:
    // 0x803A4780: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x803A4784: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x803A4788: jr          $ra
    // 0x803A478C: nop

    return;
    // 0x803A478C: nop

;}
RECOMP_FUNC void func_803A4790(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803A4790: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x803A4794: sw          $s4, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r20;
    // 0x803A4798: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x803A479C: sw          $s3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r19;
    // 0x803A47A0: sw          $s2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r18;
    // 0x803A47A4: sw          $s1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r17;
    // 0x803A47A8: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x803A47AC: addiu       $s4, $zero, -0x1
    ctx->r20 = ADD32(0, -0X1);
    // 0x803A47B0: lw          $s3, 0x8($a0)
    ctx->r19 = MEM_W(ctx->r4, 0X8);
    // 0x803A47B4: or          $s0, $a1, $zero
    ctx->r16 = ctx->r5 | 0;
    // 0x803A47B8: beq         $a1, $s4, L_803A480C
    if (ctx->r5 == ctx->r20) {
        // 0x803A47BC: or          $s1, $zero, $zero
        ctx->r17 = 0 | 0;
            goto L_803A480C;
    }
    // 0x803A47BC: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    // 0x803A47C0: addiu       $s2, $zero, 0x1
    ctx->r18 = ADD32(0, 0X1);
L_803A47C4:
    // 0x803A47C4: lb          $t6, 0x3D($s3)
    ctx->r14 = MEM_B(ctx->r19, 0X3D);
    // 0x803A47C8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x803A47CC: bne         $s1, $t6, L_803A47F4
    if (ctx->r17 != ctx->r14) {
        // 0x803A47D0: addiu       $a1, $zero, 0x45
        ctx->r5 = ADD32(0, 0X45);
            goto L_803A47F4;
    }
    // 0x803A47D0: addiu       $a1, $zero, 0x45
    ctx->r5 = ADD32(0, 0X45);
    // 0x803A47D4: sb          $s2, 0x4($s0)
    MEM_B(0X4, ctx->r16) = ctx->r18;
    // 0x803A47D8: addiu       $t7, $zero, 0xB3
    ctx->r15 = ADD32(0, 0XB3);
    // 0x803A47DC: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x803A47E0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x803A47E4: jal         0x8004A5C0
    // 0x803A47E8: addiu       $a3, $zero, 0x14
    ctx->r7 = ADD32(0, 0X14);
    func_8004A5C0(rdram, ctx);
        goto after_0;
    // 0x803A47E8: addiu       $a3, $zero, 0x14
    ctx->r7 = ADD32(0, 0X14);
    after_0:
    // 0x803A47EC: b           L_803A47FC
    // 0x803A47F0: lw          $s0, 0x0($s0)
    ctx->r16 = MEM_W(ctx->r16, 0X0);
        goto L_803A47FC;
    // 0x803A47F0: lw          $s0, 0x0($s0)
    ctx->r16 = MEM_W(ctx->r16, 0X0);
L_803A47F4:
    // 0x803A47F4: sb          $zero, 0x4($s0)
    MEM_B(0X4, ctx->r16) = 0;
    // 0x803A47F8: lw          $s0, 0x0($s0)
    ctx->r16 = MEM_W(ctx->r16, 0X0);
L_803A47FC:
    // 0x803A47FC: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x803A4800: andi        $t8, $s1, 0xFF
    ctx->r24 = ctx->r17 & 0XFF;
    // 0x803A4804: bne         $s0, $s4, L_803A47C4
    if (ctx->r16 != ctx->r20) {
        // 0x803A4808: or          $s1, $t8, $zero
        ctx->r17 = ctx->r24 | 0;
            goto L_803A47C4;
    }
    // 0x803A4808: or          $s1, $t8, $zero
    ctx->r17 = ctx->r24 | 0;
L_803A480C:
    // 0x803A480C: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x803A4810: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x803A4814: lw          $s1, 0x24($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X24);
    // 0x803A4818: lw          $s2, 0x28($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X28);
    // 0x803A481C: lw          $s3, 0x2C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X2C);
    // 0x803A4820: lw          $s4, 0x30($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X30);
    // 0x803A4824: jr          $ra
    // 0x803A4828: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    return;
    // 0x803A4828: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_803A482C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803A482C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x803A4830: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x803A4834: lui         $a1, 0x803A
    ctx->r5 = S32(0X803A << 16);
    // 0x803A4838: addiu       $a1, $a1, 0x7040
    ctx->r5 = ADD32(ctx->r5, 0X7040);
    // 0x803A483C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x803A4840: jal         0x8002F444
    // 0x803A4844: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    func_8002F444(rdram, ctx);
        goto after_0;
    // 0x803A4844: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    after_0:
    // 0x803A4848: lui         $a1, 0x2
    ctx->r5 = S32(0X2 << 16);
    // 0x803A484C: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x803A4850: addiu       $a0, $a0, -0x3770
    ctx->r4 = ADD32(ctx->r4, -0X3770);
    // 0x803A4854: ori         $a1, $a1, 0x8000
    ctx->r5 = ctx->r5 | 0X8000;
    // 0x803A4858: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x803A485C: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x803A4860: addiu       $a2, $zero, 0x9
    ctx->r6 = ADD32(0, 0X9);
L_803A4864:
    // 0x803A4864: sll         $t6, $v1, 5
    ctx->r14 = S32(ctx->r3 << 5);
    // 0x803A4868: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x803A486C: andi        $v1, $v0, 0xFF
    ctx->r3 = ctx->r2 & 0XFF;
    // 0x803A4870: addu        $t7, $a0, $t6
    ctx->r15 = ADD32(ctx->r4, ctx->r14);
    // 0x803A4874: slti        $at, $v1, 0x10
    ctx->r1 = SIGNED(ctx->r3) < 0X10 ? 1 : 0;
    // 0x803A4878: addu        $t8, $t7, $a1
    ctx->r24 = ADD32(ctx->r15, ctx->r5);
    // 0x803A487C: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    // 0x803A4880: bne         $at, $zero, L_803A4864
    if (ctx->r1 != 0) {
        // 0x803A4884: sb          $a2, 0x7EED($t8)
        MEM_B(0X7EED, ctx->r24) = ctx->r6;
            goto L_803A4864;
    }
    // 0x803A4884: sb          $a2, 0x7EED($t8)
    MEM_B(0X7EED, ctx->r24) = ctx->r6;
    // 0x803A4888: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x803A488C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x803A4890: jr          $ra
    // 0x803A4894: nop

    return;
    // 0x803A4894: nop

;}
RECOMP_FUNC void func_803A4898(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803A4898: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x803A489C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x803A48A0: lw          $t6, 0x8($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X8);
    // 0x803A48A4: or          $a3, $a1, $zero
    ctx->r7 = ctx->r5 | 0;
    // 0x803A48A8: lw          $v0, 0x8($t6)
    ctx->r2 = MEM_W(ctx->r14, 0X8);
    // 0x803A48AC: addiu       $t8, $zero, 0xA
    ctx->r24 = ADD32(0, 0XA);
    // 0x803A48B0: lb          $t7, 0x38($v0)
    ctx->r15 = MEM_B(ctx->r2, 0X38);
    // 0x803A48B4: nop

    // 0x803A48B8: bne         $t7, $zero, L_803A48DC
    if (ctx->r15 != 0) {
        // 0x803A48BC: nop
    
            goto L_803A48DC;
    }
    // 0x803A48BC: nop

    // 0x803A48C0: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x803A48C4: jal         0x8006F678
    // 0x803A48C8: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    func_8006F678(rdram, ctx);
        goto after_0;
    // 0x803A48C8: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    after_0:
    // 0x803A48CC: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x803A48D0: lw          $a3, 0x1C($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X1C);
    // 0x803A48D4: b           L_803A48E8
    // 0x803A48D8: lhu         $t9, 0x3A($a0)
    ctx->r25 = MEM_HU(ctx->r4, 0X3A);
        goto L_803A48E8;
    // 0x803A48D8: lhu         $t9, 0x3A($a0)
    ctx->r25 = MEM_HU(ctx->r4, 0X3A);
L_803A48DC:
    // 0x803A48DC: sh          $t8, 0x38($a0)
    MEM_H(0X38, ctx->r4) = ctx->r24;
    // 0x803A48E0: sh          $zero, 0x3A($a0)
    MEM_H(0X3A, ctx->r4) = 0;
    // 0x803A48E4: lhu         $t9, 0x3A($a0)
    ctx->r25 = MEM_HU(ctx->r4, 0X3A);
L_803A48E8:
    // 0x803A48E8: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x803A48EC: bne         $t9, $at, L_803A490C
    if (ctx->r25 != ctx->r1) {
        // 0x803A48F0: or          $a0, $a3, $zero
        ctx->r4 = ctx->r7 | 0;
            goto L_803A490C;
    }
    // 0x803A48F0: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
    // 0x803A48F4: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
    // 0x803A48F8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x803A48FC: jal         0x8002135C
    // 0x803A4900: addiu       $a2, $zero, 0xDB
    ctx->r6 = ADD32(0, 0XDB);
    func_8002135C(rdram, ctx);
        goto after_1;
    // 0x803A4900: addiu       $a2, $zero, 0xDB
    ctx->r6 = ADD32(0, 0XDB);
    after_1:
    // 0x803A4904: b           L_803A491C
    // 0x803A4908: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_803A491C;
    // 0x803A4908: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_803A490C:
    // 0x803A490C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x803A4910: jal         0x8002135C
    // 0x803A4914: addiu       $a2, $zero, 0xDA
    ctx->r6 = ADD32(0, 0XDA);
    func_8002135C(rdram, ctx);
        goto after_2;
    // 0x803A4914: addiu       $a2, $zero, 0xDA
    ctx->r6 = ADD32(0, 0XDA);
    after_2:
    // 0x803A4918: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_803A491C:
    // 0x803A491C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x803A4920: jr          $ra
    // 0x803A4924: nop

    return;
    // 0x803A4924: nop

    // 0x803A4928: nop

    // 0x803A492C: nop

;}
RECOMP_FUNC void func_803A4930(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803A4930: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x803A4934: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x803A4938: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x803A493C: lui         $at, 0x803B
    ctx->r1 = S32(0X803B << 16);
    // 0x803A4940: lui         $a0, 0x803A
    ctx->r4 = S32(0X803A << 16);
    // 0x803A4944: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x803A4948: sb          $zero, -0x7D30($at)
    MEM_B(-0X7D30, ctx->r1) = 0;
    // 0x803A494C: jal         0x800296E0
    // 0x803A4950: addiu       $a0, $a0, 0x499C
    ctx->r4 = ADD32(ctx->r4, 0X499C);
    func_800296E0(rdram, ctx);
        goto after_0;
    // 0x803A4950: addiu       $a0, $a0, 0x499C
    ctx->r4 = ADD32(ctx->r4, 0X499C);
    after_0:
    // 0x803A4954: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x803A4958: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x803A495C: jr          $ra
    // 0x803A4960: nop

    return;
    // 0x803A4960: nop

;}
RECOMP_FUNC void func_803A4964(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803A4964: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x803A4968: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x803A496C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x803A4970: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x803A4974: lui         $at, 0x803B
    ctx->r1 = S32(0X803B << 16);
    // 0x803A4978: lui         $a0, 0x803A
    ctx->r4 = S32(0X803A << 16);
    // 0x803A497C: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x803A4980: sb          $t6, -0x7D30($at)
    MEM_B(-0X7D30, ctx->r1) = ctx->r14;
    // 0x803A4984: jal         0x800296E0
    // 0x803A4988: addiu       $a0, $a0, 0x499C
    ctx->r4 = ADD32(ctx->r4, 0X499C);
    func_800296E0(rdram, ctx);
        goto after_0;
    // 0x803A4988: addiu       $a0, $a0, 0x499C
    ctx->r4 = ADD32(ctx->r4, 0X499C);
    after_0:
    // 0x803A498C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x803A4990: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x803A4994: jr          $ra
    // 0x803A4998: nop

    return;
    // 0x803A4998: nop

;}
RECOMP_FUNC void func_803A499C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803A499C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x803A49A0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x803A49A4: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x803A49A8: jal         0x80036258
    // 0x803A49AC: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    func_80036258(rdram, ctx);
        goto after_0;
    // 0x803A49AC: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    after_0:
    // 0x803A49B0: lui         $a0, 0x803D
    ctx->r4 = S32(0X803D << 16);
    // 0x803A49B4: jal         0x80035FF0
    // 0x803A49B8: addiu       $a0, $a0, 0x1E4C
    ctx->r4 = ADD32(ctx->r4, 0X1E4C);
    func_80035FF0(rdram, ctx);
        goto after_1;
    // 0x803A49B8: addiu       $a0, $a0, 0x1E4C
    ctx->r4 = ADD32(ctx->r4, 0X1E4C);
    after_1:
    // 0x803A49BC: addiu       $a0, $zero, 0xF00
    ctx->r4 = ADD32(0, 0XF00);
    // 0x803A49C0: addiu       $a1, $zero, 0x14
    ctx->r5 = ADD32(0, 0X14);
    // 0x803A49C4: jal         0x80049E40
    // 0x803A49C8: addiu       $a2, $zero, 0xF
    ctx->r6 = ADD32(0, 0XF);
    func_80049E40(rdram, ctx);
        goto after_2;
    // 0x803A49C8: addiu       $a2, $zero, 0xF
    ctx->r6 = ADD32(0, 0XF);
    after_2:
    // 0x803A49CC: jal         0x8003731C
    // 0x803A49D0: nop

    func_8003731C(rdram, ctx);
        goto after_3;
    // 0x803A49D0: nop

    after_3:
    // 0x803A49D4: jal         0x803A4DE4
    // 0x803A49D8: nop

    func_803A4DE4(rdram, ctx);
        goto after_4;
    // 0x803A49D8: nop

    after_4:
    // 0x803A49DC: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x803A49E0: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    // 0x803A49E4: jal         0x80021214
    // 0x803A49E8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_80021214(rdram, ctx);
        goto after_5;
    // 0x803A49E8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_5:
    // 0x803A49EC: lui         $t6, 0x800B
    ctx->r14 = S32(0X800B << 16);
    // 0x803A49F0: addiu       $t6, $t6, -0x6CE4
    ctx->r14 = ADD32(ctx->r14, -0X6CE4);
    // 0x803A49F4: lw          $at, 0x0($t6)
    ctx->r1 = MEM_W(ctx->r14, 0X0);
    // 0x803A49F8: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x803A49FC: sw          $at, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r1;
    // 0x803A4A00: lw          $a2, 0x4($t6)
    ctx->r6 = MEM_W(ctx->r14, 0X4);
    // 0x803A4A04: lw          $a1, 0x4($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X4);
    // 0x803A4A08: sw          $a2, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r6;
    // 0x803A4A0C: lw          $a3, 0x8($t6)
    ctx->r7 = MEM_W(ctx->r14, 0X8);
    // 0x803A4A10: jal         0x8004B078
    // 0x803A4A14: sw          $a3, 0xC($sp)
    MEM_W(0XC, ctx->r29) = ctx->r7;
    func_8004B078(rdram, ctx);
        goto after_6;
    // 0x803A4A14: sw          $a3, 0xC($sp)
    MEM_W(0XC, ctx->r29) = ctx->r7;
    after_6:
    // 0x803A4A18: jal         0x803A4E70
    // 0x803A4A1C: nop

    func_803A4E70(rdram, ctx);
        goto after_7;
    // 0x803A4A1C: nop

    after_7:
    // 0x803A4A20: lui         $a0, 0x803A
    ctx->r4 = S32(0X803A << 16);
    // 0x803A4A24: jal         0x8002AAC0
    // 0x803A4A28: addiu       $a0, $a0, 0x7470
    ctx->r4 = ADD32(ctx->r4, 0X7470);
    func_8002AAC0(rdram, ctx);
        goto after_8;
    // 0x803A4A28: addiu       $a0, $a0, 0x7470
    ctx->r4 = ADD32(ctx->r4, 0X7470);
    after_8:
    // 0x803A4A2C: lui         $v0, 0x8011
    ctx->r2 = S32(0X8011 << 16);
    // 0x803A4A30: addiu       $v0, $v0, -0x2F98
    ctx->r2 = ADD32(ctx->r2, -0X2F98);
    // 0x803A4A34: lw          $t9, 0x0($v0)
    ctx->r25 = MEM_W(ctx->r2, 0X0);
    // 0x803A4A38: lui         $v1, 0x2
    ctx->r3 = S32(0X2 << 16);
    // 0x803A4A3C: ori         $v1, $v1, 0x8000
    ctx->r3 = ctx->r3 | 0X8000;
    // 0x803A4A40: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x803A4A44: addu        $t0, $t9, $v1
    ctx->r8 = ADD32(ctx->r25, ctx->r3);
    // 0x803A4A48: sb          $a0, 0x60E1($t0)
    MEM_B(0X60E1, ctx->r8) = ctx->r4;
    // 0x803A4A4C: lw          $t1, 0x0($v0)
    ctx->r9 = MEM_W(ctx->r2, 0X0);
    // 0x803A4A50: nop

    // 0x803A4A54: addu        $t2, $t1, $v1
    ctx->r10 = ADD32(ctx->r9, ctx->r3);
    // 0x803A4A58: jal         0x803A4F40
    // 0x803A4A5C: sb          $a0, 0x6679($t2)
    MEM_B(0X6679, ctx->r10) = ctx->r4;
    func_803A4F40(rdram, ctx);
        goto after_9;
    // 0x803A4A5C: sb          $a0, 0x6679($t2)
    MEM_B(0X6679, ctx->r10) = ctx->r4;
    after_9:
    // 0x803A4A60: lui         $t3, 0x803B
    ctx->r11 = S32(0X803B << 16);
    // 0x803A4A64: lbu         $t3, -0x7D30($t3)
    ctx->r11 = MEM_BU(ctx->r11, -0X7D30);
    // 0x803A4A68: nop

    // 0x803A4A6C: bne         $t3, $zero, L_803A4A84
    if (ctx->r11 != 0) {
        // 0x803A4A70: nop
    
            goto L_803A4A84;
    }
    // 0x803A4A70: nop

    // 0x803A4A74: jal         0x8006FB58
    // 0x803A4A78: nop

    func_8006FB58(rdram, ctx);
        goto after_10;
    // 0x803A4A78: nop

    after_10:
    // 0x803A4A7C: b           L_803A4A8C
    // 0x803A4A80: nop

        goto L_803A4A8C;
    // 0x803A4A80: nop

L_803A4A84:
    // 0x803A4A84: jal         0x8006F918
    // 0x803A4A88: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    func_8006F918(rdram, ctx);
        goto after_11;
    // 0x803A4A88: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_11:
L_803A4A8C:
    // 0x803A4A8C: jal         0x803A4EC0
    // 0x803A4A90: nop

    func_803A4EC0(rdram, ctx);
        goto after_12;
    // 0x803A4A90: nop

    after_12:
    // 0x803A4A94: jal         0x803A5194
    // 0x803A4A98: nop

    func_803A5194(rdram, ctx);
        goto after_13;
    // 0x803A4A98: nop

    after_13:
    // 0x803A4A9C: lui         $t4, 0x803B
    ctx->r12 = S32(0X803B << 16);
    // 0x803A4AA0: lbu         $t4, -0x7D30($t4)
    ctx->r12 = MEM_BU(ctx->r12, -0X7D30);
    // 0x803A4AA4: lui         $a0, 0x803A
    ctx->r4 = S32(0X803A << 16);
    // 0x803A4AA8: bne         $t4, $zero, L_803A4AC8
    if (ctx->r12 != 0) {
        // 0x803A4AAC: addiu       $a0, $a0, 0x4AE0
        ctx->r4 = ADD32(ctx->r4, 0X4AE0);
            goto L_803A4AC8;
    }
    // 0x803A4AAC: addiu       $a0, $a0, 0x4AE0
    ctx->r4 = ADD32(ctx->r4, 0X4AE0);
    // 0x803A4AB0: lui         $a0, 0x803A
    ctx->r4 = S32(0X803A << 16);
    // 0x803A4AB4: addiu       $a0, $a0, 0x4AE0
    ctx->r4 = ADD32(ctx->r4, 0X4AE0);
    // 0x803A4AB8: jal         0x8004A9B4
    // 0x803A4ABC: addiu       $a1, $zero, 0xB
    ctx->r5 = ADD32(0, 0XB);
    func_8004A9B4(rdram, ctx);
        goto after_14;
    // 0x803A4ABC: addiu       $a1, $zero, 0xB
    ctx->r5 = ADD32(0, 0XB);
    after_14:
    // 0x803A4AC0: b           L_803A4AD4
    // 0x803A4AC4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_803A4AD4;
    // 0x803A4AC4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_803A4AC8:
    // 0x803A4AC8: jal         0x8004AE38
    // 0x803A4ACC: addiu       $a1, $zero, 0xB
    ctx->r5 = ADD32(0, 0XB);
    func_8004AE38(rdram, ctx);
        goto after_15;
    // 0x803A4ACC: addiu       $a1, $zero, 0xB
    ctx->r5 = ADD32(0, 0XB);
    after_15:
    // 0x803A4AD0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_803A4AD4:
    // 0x803A4AD4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x803A4AD8: jr          $ra
    // 0x803A4ADC: nop

    return;
    // 0x803A4ADC: nop

;}
RECOMP_FUNC void func_803A4AE0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803A4AE0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x803A4AE4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x803A4AE8: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x803A4AEC: jal         0x8004DFC0
    // 0x803A4AF0: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    func_8004DFC0(rdram, ctx);
        goto after_0;
    // 0x803A4AF0: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    after_0:
    // 0x803A4AF4: lw          $t6, 0x18($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X18);
    // 0x803A4AF8: lui         $v1, 0x8011
    ctx->r3 = S32(0X8011 << 16);
    // 0x803A4AFC: addiu       $v1, $v1, -0x3770
    ctx->r3 = ADD32(ctx->r3, -0X3770);
    // 0x803A4B00: sh          $v0, 0x3A($t6)
    MEM_H(0X3A, ctx->r14) = ctx->r2;
    // 0x803A4B04: lhu         $a0, 0x6F8($v1)
    ctx->r4 = MEM_HU(ctx->r3, 0X6F8);
    // 0x803A4B08: lhu         $t7, 0x710($v1)
    ctx->r15 = MEM_HU(ctx->r3, 0X710);
    // 0x803A4B0C: nop

    // 0x803A4B10: or          $a0, $a0, $t7
    ctx->r4 = ctx->r4 | ctx->r15;
    // 0x803A4B14: andi        $t8, $a0, 0xFFFF
    ctx->r24 = ctx->r4 & 0XFFFF;
    // 0x803A4B18: jal         0x80035B2C
    // 0x803A4B1C: or          $a0, $t8, $zero
    ctx->r4 = ctx->r24 | 0;
    func_80035B2C(rdram, ctx);
        goto after_1;
    // 0x803A4B1C: or          $a0, $t8, $zero
    ctx->r4 = ctx->r24 | 0;
    after_1:
    // 0x803A4B20: sll         $t9, $v0, 2
    ctx->r25 = S32(ctx->r2 << 2);
    // 0x803A4B24: lui         $at, 0x803A
    ctx->r1 = S32(0X803A << 16);
    // 0x803A4B28: addu        $at, $at, $t9
    ctx->r1 = ADD32(ctx->r1, ctx->r25);
    // 0x803A4B2C: lw          $t9, 0x7484($at)
    ctx->r25 = MEM_W(ctx->r1, 0X7484);
    // 0x803A4B30: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x803A4B34: lw          $a1, 0x1C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X1C);
    // 0x803A4B38: jalr        $t9
    // 0x803A4B3C: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x803A4B3C: nop

    after_2:
    // 0x803A4B40: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x803A4B44: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x803A4B48: jr          $ra
    // 0x803A4B4C: nop

    return;
    // 0x803A4B4C: nop

;}
RECOMP_FUNC void func_803A4B50(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803A4B50: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x803A4B54: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x803A4B58: jal         0x803A5134
    // 0x803A4B5C: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    func_803A5134(rdram, ctx);
        goto after_0;
    // 0x803A4B5C: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    after_0:
    // 0x803A4B60: beq         $v0, $zero, L_803A4BBC
    if (ctx->r2 == 0) {
        // 0x803A4B64: addiu       $at, $zero, 0x1
        ctx->r1 = ADD32(0, 0X1);
            goto L_803A4BBC;
    }
    // 0x803A4B64: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x803A4B68: bne         $v0, $at, L_803A4BC8
    if (ctx->r2 != ctx->r1) {
        // 0x803A4B6C: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_803A4BC8;
    }
    // 0x803A4B6C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x803A4B70: jal         0x80035770
    // 0x803A4B74: nop

    func_80035770(rdram, ctx);
        goto after_1;
    // 0x803A4B74: nop

    after_1:
    // 0x803A4B78: jal         0x803A4E24
    // 0x803A4B7C: nop

    func_803A4E24(rdram, ctx);
        goto after_2;
    // 0x803A4B7C: nop

    after_2:
    // 0x803A4B80: jal         0x800390B4
    // 0x803A4B84: nop

    func_800390B4(rdram, ctx);
        goto after_3;
    // 0x803A4B84: nop

    after_3:
    // 0x803A4B88: lui         $t6, 0x803B
    ctx->r14 = S32(0X803B << 16);
    // 0x803A4B8C: lbu         $t6, -0x7D30($t6)
    ctx->r14 = MEM_BU(ctx->r14, -0X7D30);
    // 0x803A4B90: nop

    // 0x803A4B94: bne         $t6, $zero, L_803A4BAC
    if (ctx->r14 != 0) {
        // 0x803A4B98: nop
    
            goto L_803A4BAC;
    }
    // 0x803A4B98: nop

    // 0x803A4B9C: jal         0x80037908
    // 0x803A4BA0: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    func_80037908(rdram, ctx);
        goto after_4;
    // 0x803A4BA0: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_4:
    // 0x803A4BA4: b           L_803A4BC8
    // 0x803A4BA8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_803A4BC8;
    // 0x803A4BA8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_803A4BAC:
    // 0x803A4BAC: jal         0x800373A4
    // 0x803A4BB0: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    func_800373A4(rdram, ctx);
        goto after_5;
    // 0x803A4BB0: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_5:
    // 0x803A4BB4: b           L_803A4BC8
    // 0x803A4BB8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_803A4BC8;
    // 0x803A4BB8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_803A4BBC:
    // 0x803A4BBC: jal         0x800357AC
    // 0x803A4BC0: nop

    func_800357AC(rdram, ctx);
        goto after_6;
    // 0x803A4BC0: nop

    after_6:
    // 0x803A4BC4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_803A4BC8:
    // 0x803A4BC8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x803A4BCC: jr          $ra
    // 0x803A4BD0: nop

    return;
    // 0x803A4BD0: nop

;}
RECOMP_FUNC void func_803A4BD4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803A4BD4: lui         $v0, 0x803B
    ctx->r2 = S32(0X803B << 16);
    // 0x803A4BD8: lbu         $v0, -0x7D30($v0)
    ctx->r2 = MEM_BU(ctx->r2, -0X7D30);
    // 0x803A4BDC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x803A4BE0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x803A4BE4: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x803A4BE8: beq         $v0, $zero, L_803A4C04
    if (ctx->r2 == 0) {
        // 0x803A4BEC: sw          $a1, 0x1C($sp)
        MEM_W(0X1C, ctx->r29) = ctx->r5;
            goto L_803A4C04;
    }
    // 0x803A4BEC: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x803A4BF0: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x803A4BF4: beq         $v0, $at, L_803A4C18
    if (ctx->r2 == ctx->r1) {
        // 0x803A4BF8: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_803A4C18;
    }
    // 0x803A4BF8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x803A4BFC: b           L_803A4C18
    // 0x803A4C00: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_803A4C18;
    // 0x803A4C00: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_803A4C04:
    // 0x803A4C04: jal         0x800390B4
    // 0x803A4C08: nop

    func_800390B4(rdram, ctx);
        goto after_0;
    // 0x803A4C08: nop

    after_0:
    // 0x803A4C0C: jal         0x80037344
    // 0x803A4C10: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    func_80037344(rdram, ctx);
        goto after_1;
    // 0x803A4C10: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_1:
    // 0x803A4C14: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_803A4C18:
    // 0x803A4C18: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x803A4C1C: jr          $ra
    // 0x803A4C20: nop

    return;
    // 0x803A4C20: nop

;}
RECOMP_FUNC void func_803A4C24(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803A4C24: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x803A4C28: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x803A4C2C: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x803A4C30: jal         0x80035734
    // 0x803A4C34: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_80035734(rdram, ctx);
        goto after_0;
    // 0x803A4C34: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x803A4C38: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x803A4C3C: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x803A4C40: lb          $v1, 0x2C($a0)
    ctx->r3 = MEM_B(ctx->r4, 0X2C);
    // 0x803A4C44: addiu       $t7, $zero, 0x8
    ctx->r15 = ADD32(0, 0X8);
    // 0x803A4C48: beq         $v1, $zero, L_803A4C70
    if (ctx->r3 == 0) {
        // 0x803A4C4C: nop
    
            goto L_803A4C70;
    }
    // 0x803A4C4C: nop

    // 0x803A4C50: beq         $v1, $at, L_803A4C78
    if (ctx->r3 == ctx->r1) {
        // 0x803A4C54: addiu       $t8, $zero, 0x7
        ctx->r24 = ADD32(0, 0X7);
            goto L_803A4C78;
    }
    // 0x803A4C54: addiu       $t8, $zero, 0x7
    ctx->r24 = ADD32(0, 0X7);
    // 0x803A4C58: addiu       $at, $zero, 0x8
    ctx->r1 = ADD32(0, 0X8);
    // 0x803A4C5C: beq         $v1, $at, L_803A4C80
    if (ctx->r3 == ctx->r1) {
        // 0x803A4C60: addiu       $t9, $zero, 0x3
        ctx->r25 = ADD32(0, 0X3);
            goto L_803A4C80;
    }
    // 0x803A4C60: addiu       $t9, $zero, 0x3
    ctx->r25 = ADD32(0, 0X3);
    // 0x803A4C64: addiu       $t6, $v1, -0x1
    ctx->r14 = ADD32(ctx->r3, -0X1);
    // 0x803A4C68: b           L_803A4C84
    // 0x803A4C6C: sb          $t6, 0x2C($a0)
    MEM_B(0X2C, ctx->r4) = ctx->r14;
        goto L_803A4C84;
    // 0x803A4C6C: sb          $t6, 0x2C($a0)
    MEM_B(0X2C, ctx->r4) = ctx->r14;
L_803A4C70:
    // 0x803A4C70: b           L_803A4C84
    // 0x803A4C74: sb          $t7, 0x2C($a0)
    MEM_B(0X2C, ctx->r4) = ctx->r15;
        goto L_803A4C84;
    // 0x803A4C74: sb          $t7, 0x2C($a0)
    MEM_B(0X2C, ctx->r4) = ctx->r15;
L_803A4C78:
    // 0x803A4C78: b           L_803A4C84
    // 0x803A4C7C: sb          $t8, 0x2C($a0)
    MEM_B(0X2C, ctx->r4) = ctx->r24;
        goto L_803A4C84;
    // 0x803A4C7C: sb          $t8, 0x2C($a0)
    MEM_B(0X2C, ctx->r4) = ctx->r24;
L_803A4C80:
    // 0x803A4C80: sb          $t9, 0x2C($a0)
    MEM_B(0X2C, ctx->r4) = ctx->r25;
L_803A4C84:
    // 0x803A4C84: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x803A4C88: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x803A4C8C: jr          $ra
    // 0x803A4C90: nop

    return;
    // 0x803A4C90: nop

;}
RECOMP_FUNC void func_803A4C94(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803A4C94: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x803A4C98: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x803A4C9C: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x803A4CA0: jal         0x80035734
    // 0x803A4CA4: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_80035734(rdram, ctx);
        goto after_0;
    // 0x803A4CA4: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x803A4CA8: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x803A4CAC: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x803A4CB0: lb          $v1, 0x2C($a0)
    ctx->r3 = MEM_B(ctx->r4, 0X2C);
    // 0x803A4CB4: addiu       $t7, $zero, 0x8
    ctx->r15 = ADD32(0, 0X8);
    // 0x803A4CB8: beq         $v1, $at, L_803A4CDC
    if (ctx->r3 == ctx->r1) {
        // 0x803A4CBC: addiu       $at, $zero, 0x7
        ctx->r1 = ADD32(0, 0X7);
            goto L_803A4CDC;
    }
    // 0x803A4CBC: addiu       $at, $zero, 0x7
    ctx->r1 = ADD32(0, 0X7);
    // 0x803A4CC0: beq         $v1, $at, L_803A4CE4
    if (ctx->r3 == ctx->r1) {
        // 0x803A4CC4: addiu       $t8, $zero, 0x4
        ctx->r24 = ADD32(0, 0X4);
            goto L_803A4CE4;
    }
    // 0x803A4CC4: addiu       $t8, $zero, 0x4
    ctx->r24 = ADD32(0, 0X4);
    // 0x803A4CC8: addiu       $at, $zero, 0x8
    ctx->r1 = ADD32(0, 0X8);
    // 0x803A4CCC: beq         $v1, $at, L_803A4CEC
    if (ctx->r3 == ctx->r1) {
        // 0x803A4CD0: addiu       $t6, $v1, 0x1
        ctx->r14 = ADD32(ctx->r3, 0X1);
            goto L_803A4CEC;
    }
    // 0x803A4CD0: addiu       $t6, $v1, 0x1
    ctx->r14 = ADD32(ctx->r3, 0X1);
    // 0x803A4CD4: b           L_803A4CF0
    // 0x803A4CD8: sb          $t6, 0x2C($a0)
    MEM_B(0X2C, ctx->r4) = ctx->r14;
        goto L_803A4CF0;
    // 0x803A4CD8: sb          $t6, 0x2C($a0)
    MEM_B(0X2C, ctx->r4) = ctx->r14;
L_803A4CDC:
    // 0x803A4CDC: b           L_803A4CF0
    // 0x803A4CE0: sb          $t7, 0x2C($a0)
    MEM_B(0X2C, ctx->r4) = ctx->r15;
        goto L_803A4CF0;
    // 0x803A4CE0: sb          $t7, 0x2C($a0)
    MEM_B(0X2C, ctx->r4) = ctx->r15;
L_803A4CE4:
    // 0x803A4CE4: b           L_803A4CF0
    // 0x803A4CE8: sb          $t8, 0x2C($a0)
    MEM_B(0X2C, ctx->r4) = ctx->r24;
        goto L_803A4CF0;
    // 0x803A4CE8: sb          $t8, 0x2C($a0)
    MEM_B(0X2C, ctx->r4) = ctx->r24;
L_803A4CEC:
    // 0x803A4CEC: sb          $zero, 0x2C($a0)
    MEM_B(0X2C, ctx->r4) = 0;
L_803A4CF0:
    // 0x803A4CF0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x803A4CF4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x803A4CF8: jr          $ra
    // 0x803A4CFC: nop

    return;
    // 0x803A4CFC: nop

;}
RECOMP_FUNC void func_803A4D00(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803A4D00: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x803A4D04: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x803A4D08: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x803A4D0C: lbu         $t6, 0x2C($a0)
    ctx->r14 = MEM_BU(ctx->r4, 0X2C);
    // 0x803A4D10: nop

    // 0x803A4D14: sltiu       $at, $t6, 0x9
    ctx->r1 = ctx->r14 < 0X9 ? 1 : 0;
    // 0x803A4D18: beq         $at, $zero, L_803A4D38
    if (ctx->r1 == 0) {
        // 0x803A4D1C: sll         $t6, $t6, 2
        ctx->r14 = S32(ctx->r14 << 2);
            goto L_803A4D38;
    }
    // 0x803A4D1C: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x803A4D20: lui         $at, 0x803A
    ctx->r1 = S32(0X803A << 16);
    // 0x803A4D24: addu        $at, $at, $t6
    gpr jr_addend_803A4D30 = ctx->r14;
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x803A4D28: lw          $t6, 0x7520($at)
    ctx->r14 = ADD32(ctx->r1, 0X7520);
    // 0x803A4D2C: nop

    // 0x803A4D30: jr          $t6
    // 0x803A4D34: nop

    switch (jr_addend_803A4D30 >> 2) {
        case 0: goto L_803A4D58; break;
        case 1: goto L_803A4D58; break;
        case 2: goto L_803A4D58; break;
        case 3: goto L_803A4D58; break;
        case 4: goto L_803A4D38; break;
        case 5: goto L_803A4D38; break;
        case 6: goto L_803A4D38; break;
        case 7: goto L_803A4D38; break;
        case 8: goto L_803A4D58; break;
        default: switch_error(__func__, 0x803A4D30, 0x803A7520);
    }
    // 0x803A4D34: nop

L_803A4D38:
    // 0x803A4D38: jal         0x80035734
    // 0x803A4D3C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_80035734(rdram, ctx);
        goto after_0;
    // 0x803A4D3C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x803A4D40: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x803A4D44: nop

    // 0x803A4D48: lb          $t7, 0x2C($a0)
    ctx->r15 = MEM_B(ctx->r4, 0X2C);
    // 0x803A4D4C: nop

    // 0x803A4D50: addiu       $t8, $t7, -0x4
    ctx->r24 = ADD32(ctx->r15, -0X4);
    // 0x803A4D54: sb          $t8, 0x2C($a0)
    MEM_B(0X2C, ctx->r4) = ctx->r24;
L_803A4D58:
    // 0x803A4D58: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x803A4D5C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x803A4D60: jr          $ra
    // 0x803A4D64: nop

    return;
    // 0x803A4D64: nop

;}
RECOMP_FUNC void func_803A4D68(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803A4D68: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x803A4D6C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x803A4D70: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x803A4D74: lbu         $t6, 0x2C($a0)
    ctx->r14 = MEM_BU(ctx->r4, 0X2C);
    // 0x803A4D78: nop

    // 0x803A4D7C: sltiu       $at, $t6, 0x9
    ctx->r1 = ctx->r14 < 0X9 ? 1 : 0;
    // 0x803A4D80: beq         $at, $zero, L_803A4DC0
    if (ctx->r1 == 0) {
        // 0x803A4D84: sll         $t6, $t6, 2
        ctx->r14 = S32(ctx->r14 << 2);
            goto L_803A4DC0;
    }
    // 0x803A4D84: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x803A4D88: lui         $at, 0x803A
    ctx->r1 = S32(0X803A << 16);
    // 0x803A4D8C: addu        $at, $at, $t6
    gpr jr_addend_803A4D98 = ctx->r14;
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x803A4D90: lw          $t6, 0x7544($at)
    ctx->r14 = ADD32(ctx->r1, 0X7544);
    // 0x803A4D94: nop

    // 0x803A4D98: jr          $t6
    // 0x803A4D9C: nop

    switch (jr_addend_803A4D98 >> 2) {
        case 0: goto L_803A4DA0; break;
        case 1: goto L_803A4DA0; break;
        case 2: goto L_803A4DA0; break;
        case 3: goto L_803A4DA0; break;
        case 4: goto L_803A4DC0; break;
        case 5: goto L_803A4DC0; break;
        case 6: goto L_803A4DC0; break;
        case 7: goto L_803A4DC0; break;
        case 8: goto L_803A4DC0; break;
        default: switch_error(__func__, 0x803A4D98, 0x803A7544);
    }
    // 0x803A4D9C: nop

L_803A4DA0:
    // 0x803A4DA0: jal         0x80035734
    // 0x803A4DA4: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_80035734(rdram, ctx);
        goto after_0;
    // 0x803A4DA4: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x803A4DA8: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x803A4DAC: nop

    // 0x803A4DB0: lb          $t7, 0x2C($a0)
    ctx->r15 = MEM_B(ctx->r4, 0X2C);
    // 0x803A4DB4: nop

    // 0x803A4DB8: addiu       $t8, $t7, 0x4
    ctx->r24 = ADD32(ctx->r15, 0X4);
    // 0x803A4DBC: sb          $t8, 0x2C($a0)
    MEM_B(0X2C, ctx->r4) = ctx->r24;
L_803A4DC0:
    // 0x803A4DC0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x803A4DC4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x803A4DC8: jr          $ra
    // 0x803A4DCC: nop

    return;
    // 0x803A4DCC: nop

;}
RECOMP_FUNC void func_803A4DD0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803A4DD0: jr          $ra
    // 0x803A4DD4: nop

    return;
    // 0x803A4DD4: nop

;}
RECOMP_FUNC void func_803A4DD8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803A4DD8: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x803A4DDC: jr          $ra
    // 0x803A4DE0: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    return;
    // 0x803A4DE0: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
;}
RECOMP_FUNC void func_803A4DE4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803A4DE4: lui         $t6, 0x8012
    ctx->r14 = S32(0X8012 << 16);
    // 0x803A4DE8: lui         $t7, 0x801B
    ctx->r15 = S32(0X801B << 16);
    // 0x803A4DEC: lw          $t7, 0x1CF0($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X1CF0);
    // 0x803A4DF0: lb          $t6, -0x3088($t6)
    ctx->r14 = MEM_B(ctx->r14, -0X3088);
    // 0x803A4DF4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x803A4DF8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x803A4DFC: jal         0x8004DFC0
    // 0x803A4E00: sb          $t6, 0x2C($t7)
    MEM_B(0X2C, ctx->r15) = ctx->r14;
    func_8004DFC0(rdram, ctx);
        goto after_0;
    // 0x803A4E00: sb          $t6, 0x2C($t7)
    MEM_B(0X2C, ctx->r15) = ctx->r14;
    after_0:
    // 0x803A4E04: lui         $t8, 0x801B
    ctx->r24 = S32(0X801B << 16);
    // 0x803A4E08: lw          $t8, 0x1CF0($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X1CF0);
    // 0x803A4E0C: nop

    // 0x803A4E10: sh          $v0, 0x3A($t8)
    MEM_H(0X3A, ctx->r24) = ctx->r2;
    // 0x803A4E14: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x803A4E18: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x803A4E1C: jr          $ra
    // 0x803A4E20: nop

    return;
    // 0x803A4E20: nop

;}
RECOMP_FUNC void func_803A4E24(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803A4E24: lui         $t6, 0x801B
    ctx->r14 = S32(0X801B << 16);
    // 0x803A4E28: lw          $t6, 0x1CF0($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X1CF0);
    // 0x803A4E2C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x803A4E30: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x803A4E34: lb          $t7, 0x2C($t6)
    ctx->r15 = MEM_B(ctx->r14, 0X2C);
    // 0x803A4E38: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x803A4E3C: jal         0x80039CB4
    // 0x803A4E40: sb          $t7, -0x3088($at)
    MEM_B(-0X3088, ctx->r1) = ctx->r15;
    func_80039CB4(rdram, ctx);
        goto after_0;
    // 0x803A4E40: sb          $t7, -0x3088($at)
    MEM_B(-0X3088, ctx->r1) = ctx->r15;
    after_0:
    // 0x803A4E44: lui         $t8, 0x803B
    ctx->r24 = S32(0X803B << 16);
    // 0x803A4E48: lbu         $t8, -0x7D30($t8)
    ctx->r24 = MEM_BU(ctx->r24, -0X7D30);
    // 0x803A4E4C: nop

    // 0x803A4E50: bne         $t8, $zero, L_803A4E64
    if (ctx->r24 != 0) {
        // 0x803A4E54: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_803A4E64;
    }
    // 0x803A4E54: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x803A4E58: jal         0x80038D84
    // 0x803A4E5C: nop

    func_80038D84(rdram, ctx);
        goto after_1;
    // 0x803A4E5C: nop

    after_1:
    // 0x803A4E60: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_803A4E64:
    // 0x803A4E64: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x803A4E68: jr          $ra
    // 0x803A4E6C: nop

    return;
    // 0x803A4E6C: nop

;}
RECOMP_FUNC void func_803A4E70(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803A4E70: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x803A4E74: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x803A4E78: jal         0x8004BD64
    // 0x803A4E7C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    func_8004BD64(rdram, ctx);
        goto after_0;
    // 0x803A4E7C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_0:
    // 0x803A4E80: lui         $t6, 0x803A
    ctx->r14 = S32(0X803A << 16);
    // 0x803A4E84: addiu       $t6, $t6, 0x4E9C
    ctx->r14 = ADD32(ctx->r14, 0X4E9C);
    // 0x803A4E88: sw          $t6, 0xC($v0)
    MEM_W(0XC, ctx->r2) = ctx->r14;
    // 0x803A4E8C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x803A4E90: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x803A4E94: jr          $ra
    // 0x803A4E98: nop

    return;
    // 0x803A4E98: nop

;}
RECOMP_FUNC void func_803A4E9C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803A4E9C: lw          $v0, 0x8($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X8);
    // 0x803A4EA0: lui         $t7, 0x803A
    ctx->r15 = S32(0X803A << 16);
    // 0x803A4EA4: lb          $v1, 0x2C($v0)
    ctx->r3 = MEM_B(ctx->r2, 0X2C);
    // 0x803A4EA8: nop

    // 0x803A4EAC: sll         $t6, $v1, 2
    ctx->r14 = S32(ctx->r3 << 2);
    // 0x803A4EB0: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x803A4EB4: lw          $t7, 0x73B0($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X73B0);
    // 0x803A4EB8: jr          $ra
    // 0x803A4EBC: sw          $t7, 0x30($a1)
    MEM_W(0X30, ctx->r5) = ctx->r15;
    return;
    // 0x803A4EBC: sw          $t7, 0x30($a1)
    MEM_W(0X30, ctx->r5) = ctx->r15;
;}
RECOMP_FUNC void func_803A4EC0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803A4EC0: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x803A4EC4: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x803A4EC8: lui         $a0, 0x8005
    ctx->r4 = S32(0X8005 << 16);
    // 0x803A4ECC: jal         0x80029354
    // 0x803A4ED0: addiu       $a0, $a0, -0x1E98
    ctx->r4 = ADD32(ctx->r4, -0X1E98);
    func_80029354(rdram, ctx);
        goto after_0;
    // 0x803A4ED0: addiu       $a0, $a0, -0x1E98
    ctx->r4 = ADD32(ctx->r4, -0X1E98);
    after_0:
    // 0x803A4ED4: sw          $v0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r2;
    // 0x803A4ED8: lw          $a0, 0x14($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X14);
    // 0x803A4EDC: addiu       $t6, $zero, 0x110
    ctx->r14 = ADD32(0, 0X110);
    // 0x803A4EE0: addiu       $t7, $zero, 0xA0
    ctx->r15 = ADD32(0, 0XA0);
    // 0x803A4EE4: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x803A4EE8: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x803A4EEC: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x803A4EF0: addiu       $t1, $zero, 0xB3
    ctx->r9 = ADD32(0, 0XB3);
    // 0x803A4EF4: sw          $t1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r9;
    // 0x803A4EF8: sw          $t0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r8;
    // 0x803A4EFC: sw          $t9, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r25;
    // 0x803A4F00: sw          $t8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r24;
    // 0x803A4F04: sw          $t7, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r15;
    // 0x803A4F08: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x803A4F0C: addiu       $a1, $zero, 0x82
    ctx->r5 = ADD32(0, 0X82);
    // 0x803A4F10: addiu       $a2, $zero, 0x18
    ctx->r6 = ADD32(0, 0X18);
    // 0x803A4F14: jal         0x8004A5E4
    // 0x803A4F18: addiu       $a3, $zero, 0x38
    ctx->r7 = ADD32(0, 0X38);
    func_8004A5E4(rdram, ctx);
        goto after_1;
    // 0x803A4F18: addiu       $a3, $zero, 0x38
    ctx->r7 = ADD32(0, 0X38);
    after_1:
    // 0x803A4F1C: lw          $t3, 0x34($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X34);
    // 0x803A4F20: addiu       $t2, $zero, 0x8
    ctx->r10 = ADD32(0, 0X8);
    // 0x803A4F24: lw          $t4, 0x14($t3)
    ctx->r12 = MEM_W(ctx->r11, 0X14);
    // 0x803A4F28: nop

    // 0x803A4F2C: sb          $t2, 0x5($t4)
    MEM_B(0X5, ctx->r12) = ctx->r10;
    // 0x803A4F30: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x803A4F34: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    // 0x803A4F38: jr          $ra
    // 0x803A4F3C: nop

    return;
    // 0x803A4F3C: nop

;}
RECOMP_FUNC void func_803A4F40(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803A4F40: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x803A4F44: sw          $fp, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r30;
    // 0x803A4F48: sw          $s7, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r23;
    // 0x803A4F4C: sw          $s6, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r22;
    // 0x803A4F50: sw          $s5, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r21;
    // 0x803A4F54: sw          $s4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r20;
    // 0x803A4F58: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x803A4F5C: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x803A4F60: lui         $s5, 0x803A
    ctx->r21 = S32(0X803A << 16);
    // 0x803A4F64: lui         $s6, 0x803A
    ctx->r22 = S32(0X803A << 16);
    // 0x803A4F68: lui         $s7, 0x803A
    ctx->r23 = S32(0X803A << 16);
    // 0x803A4F6C: lui         $fp, 0x803A
    ctx->r30 = S32(0X803A << 16);
    // 0x803A4F70: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x803A4F74: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x803A4F78: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x803A4F7C: addiu       $fp, $fp, 0x7440
    ctx->r30 = ADD32(ctx->r30, 0X7440);
    // 0x803A4F80: addiu       $s7, $s7, 0x73F8
    ctx->r23 = ADD32(ctx->r23, 0X73F8);
    // 0x803A4F84: addiu       $s6, $s6, 0x73D4
    ctx->r22 = ADD32(ctx->r22, 0X73D4);
    // 0x803A4F88: addiu       $s5, $s5, 0x50B8
    ctx->r21 = ADD32(ctx->r21, 0X50B8);
    // 0x803A4F8C: or          $s2, $zero, $zero
    ctx->r18 = 0 | 0;
    // 0x803A4F90: or          $s3, $zero, $zero
    ctx->r19 = 0 | 0;
    // 0x803A4F94: addiu       $s4, $zero, 0x80
    ctx->r20 = ADD32(0, 0X80);
L_803A4F98:
    // 0x803A4F98: or          $a0, $s5, $zero
    ctx->r4 = ctx->r21 | 0;
    // 0x803A4F9C: jal         0x800293DC
    // 0x803A4FA0: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    func_800293DC(rdram, ctx);
        goto after_0;
    // 0x803A4FA0: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    after_0:
    // 0x803A4FA4: sll         $s1, $s3, 2
    ctx->r17 = S32(ctx->r19 << 2);
    // 0x803A4FA8: lw          $s0, 0x14($v0)
    ctx->r16 = MEM_W(ctx->r2, 0X14);
    // 0x803A4FAC: sb          $s2, 0x38($v0)
    MEM_B(0X38, ctx->r2) = ctx->r18;
    // 0x803A4FB0: addu        $t6, $s6, $s1
    ctx->r14 = ADD32(ctx->r22, ctx->r17);
    // 0x803A4FB4: lw          $a3, 0x0($t6)
    ctx->r7 = MEM_W(ctx->r14, 0X0);
    // 0x803A4FB8: addiu       $a1, $zero, 0x292
    ctx->r5 = ADD32(0, 0X292);
    // 0x803A4FBC: addiu       $a2, $zero, 0x9
    ctx->r6 = ADD32(0, 0X9);
    // 0x803A4FC0: jal         0x8004CD24
    // 0x803A4FC4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8004CD24(rdram, ctx);
        goto after_1;
    // 0x803A4FC4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
    // 0x803A4FC8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x803A4FCC: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x803A4FD0: jal         0x8002135C
    // 0x803A4FD4: addiu       $a2, $zero, 0xB
    ctx->r6 = ADD32(0, 0XB);
    func_8002135C(rdram, ctx);
        goto after_2;
    // 0x803A4FD4: addiu       $a2, $zero, 0xB
    ctx->r6 = ADD32(0, 0XB);
    after_2:
    // 0x803A4FD8: sh          $s4, 0x6($s0)
    MEM_H(0X6, ctx->r16) = ctx->r20;
    // 0x803A4FDC: lw          $s0, 0x0($s0)
    ctx->r16 = MEM_W(ctx->r16, 0X0);
    // 0x803A4FE0: addu        $t7, $s7, $s1
    ctx->r15 = ADD32(ctx->r23, ctx->r17);
    // 0x803A4FE4: lw          $a3, 0x0($t7)
    ctx->r7 = MEM_W(ctx->r15, 0X0);
    // 0x803A4FE8: addiu       $a1, $zero, 0x293
    ctx->r5 = ADD32(0, 0X293);
    // 0x803A4FEC: addiu       $a2, $zero, 0x9
    ctx->r6 = ADD32(0, 0X9);
    // 0x803A4FF0: jal         0x8004CD24
    // 0x803A4FF4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8004CD24(rdram, ctx);
        goto after_3;
    // 0x803A4FF4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_3:
    // 0x803A4FF8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x803A4FFC: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x803A5000: jal         0x8002135C
    // 0x803A5004: addiu       $a2, $zero, 0xC
    ctx->r6 = ADD32(0, 0XC);
    func_8002135C(rdram, ctx);
        goto after_4;
    // 0x803A5004: addiu       $a2, $zero, 0xC
    ctx->r6 = ADD32(0, 0XC);
    after_4:
    // 0x803A5008: sh          $s4, 0x6($s0)
    MEM_H(0X6, ctx->r16) = ctx->r20;
    // 0x803A500C: lw          $s0, 0x0($s0)
    ctx->r16 = MEM_W(ctx->r16, 0X0);
    // 0x803A5010: addu        $t8, $fp, $s1
    ctx->r24 = ADD32(ctx->r30, ctx->r17);
    // 0x803A5014: lw          $a3, 0x0($t8)
    ctx->r7 = MEM_W(ctx->r24, 0X0);
    // 0x803A5018: addiu       $a1, $zero, 0x291
    ctx->r5 = ADD32(0, 0X291);
    // 0x803A501C: addiu       $a2, $zero, 0x9
    ctx->r6 = ADD32(0, 0X9);
    // 0x803A5020: jal         0x8004CD24
    // 0x803A5024: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8004CD24(rdram, ctx);
        goto after_5;
    // 0x803A5024: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_5:
    // 0x803A5028: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x803A502C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x803A5030: jal         0x8002135C
    // 0x803A5034: addiu       $a2, $zero, 0xA
    ctx->r6 = ADD32(0, 0XA);
    func_8002135C(rdram, ctx);
        goto after_6;
    // 0x803A5034: addiu       $a2, $zero, 0xA
    ctx->r6 = ADD32(0, 0XA);
    after_6:
    // 0x803A5038: addiu       $t9, $zero, 0x40
    ctx->r25 = ADD32(0, 0X40);
    // 0x803A503C: sh          $t9, 0x6($s0)
    MEM_H(0X6, ctx->r16) = ctx->r25;
    // 0x803A5040: lui         $a3, 0x803A
    ctx->r7 = S32(0X803A << 16);
    // 0x803A5044: lw          $s0, 0x0($s0)
    ctx->r16 = MEM_W(ctx->r16, 0X0);
    // 0x803A5048: addu        $a3, $a3, $s1
    ctx->r7 = ADD32(ctx->r7, ctx->r17);
    // 0x803A504C: lw          $a3, 0x741C($a3)
    ctx->r7 = MEM_W(ctx->r7, 0X741C);
    // 0x803A5050: addiu       $a1, $zero, 0x3FC
    ctx->r5 = ADD32(0, 0X3FC);
    // 0x803A5054: addiu       $a2, $zero, 0x9
    ctx->r6 = ADD32(0, 0X9);
    // 0x803A5058: jal         0x8004CD24
    // 0x803A505C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8004CD24(rdram, ctx);
        goto after_7;
    // 0x803A505C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_7:
    // 0x803A5060: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x803A5064: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x803A5068: jal         0x8002135C
    // 0x803A506C: addiu       $a2, $zero, 0xE8
    ctx->r6 = ADD32(0, 0XE8);
    func_8002135C(rdram, ctx);
        goto after_8;
    // 0x803A506C: addiu       $a2, $zero, 0xE8
    ctx->r6 = ADD32(0, 0XE8);
    after_8:
    // 0x803A5070: addiu       $s3, $s3, 0x1
    ctx->r19 = ADD32(ctx->r19, 0X1);
    // 0x803A5074: andi        $s2, $s3, 0xFF
    ctx->r18 = ctx->r19 & 0XFF;
    // 0x803A5078: slti        $at, $s2, 0x9
    ctx->r1 = SIGNED(ctx->r18) < 0X9 ? 1 : 0;
    // 0x803A507C: or          $s3, $s2, $zero
    ctx->r19 = ctx->r18 | 0;
    // 0x803A5080: bne         $at, $zero, L_803A4F98
    if (ctx->r1 != 0) {
        // 0x803A5084: sh          $s4, 0x6($s0)
        MEM_H(0X6, ctx->r16) = ctx->r20;
            goto L_803A4F98;
    }
    // 0x803A5084: sh          $s4, 0x6($s0)
    MEM_H(0X6, ctx->r16) = ctx->r20;
    // 0x803A5088: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    // 0x803A508C: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x803A5090: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x803A5094: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x803A5098: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x803A509C: lw          $s4, 0x28($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X28);
    // 0x803A50A0: lw          $s5, 0x2C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X2C);
    // 0x803A50A4: lw          $s6, 0x30($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X30);
    // 0x803A50A8: lw          $s7, 0x34($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X34);
    // 0x803A50AC: lw          $fp, 0x38($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X38);
    // 0x803A50B0: jr          $ra
    // 0x803A50B4: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    return;
    // 0x803A50B4: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
RECOMP_FUNC void func_803A50B8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803A50B8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x803A50BC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x803A50C0: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x803A50C4: lw          $v0, 0x8($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X8);
    // 0x803A50C8: lb          $a1, 0x38($a0)
    ctx->r5 = MEM_B(ctx->r4, 0X38);
    // 0x803A50CC: lh          $a0, 0x3A($v0)
    ctx->r4 = MEM_H(ctx->r2, 0X3A);
    // 0x803A50D0: jal         0x803A5240
    // 0x803A50D4: nop

    func_803A5240(rdram, ctx);
        goto after_0;
    // 0x803A50D4: nop

    after_0:
    // 0x803A50D8: beq         $v0, $zero, L_803A50F4
    if (ctx->r2 == 0) {
        // 0x803A50DC: lui         $a0, 0x803A
        ctx->r4 = S32(0X803A << 16);
            goto L_803A50F4;
    }
    // 0x803A50DC: lui         $a0, 0x803A
    ctx->r4 = S32(0X803A << 16);
    // 0x803A50E0: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x803A50E4: beq         $v0, $at, L_803A5104
    if (ctx->r2 == ctx->r1) {
        // 0x803A50E8: lui         $a0, 0x803A
        ctx->r4 = S32(0X803A << 16);
            goto L_803A5104;
    }
    // 0x803A50E8: lui         $a0, 0x803A
    ctx->r4 = S32(0X803A << 16);
    // 0x803A50EC: b           L_803A5110
    // 0x803A50F0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_803A5110;
    // 0x803A50F0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_803A50F4:
    // 0x803A50F4: jal         0x8002A468
    // 0x803A50F8: addiu       $a0, $a0, 0x5128
    ctx->r4 = ADD32(ctx->r4, 0X5128);
    func_8002A468(rdram, ctx);
        goto after_1;
    // 0x803A50F8: addiu       $a0, $a0, 0x5128
    ctx->r4 = ADD32(ctx->r4, 0X5128);
    after_1:
    // 0x803A50FC: b           L_803A5110
    // 0x803A5100: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_803A5110;
    // 0x803A5100: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_803A5104:
    // 0x803A5104: jal         0x8002A468
    // 0x803A5108: addiu       $a0, $a0, 0x511C
    ctx->r4 = ADD32(ctx->r4, 0X511C);
    func_8002A468(rdram, ctx);
        goto after_2;
    // 0x803A5108: addiu       $a0, $a0, 0x511C
    ctx->r4 = ADD32(ctx->r4, 0X511C);
    after_2:
    // 0x803A510C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_803A5110:
    // 0x803A5110: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x803A5114: jr          $ra
    // 0x803A5118: nop

    return;
    // 0x803A5118: nop

;}
RECOMP_FUNC void func_803A511C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803A511C: addiu       $t6, $zero, 0x9
    ctx->r14 = ADD32(0, 0X9);
    // 0x803A5120: jr          $ra
    // 0x803A5124: sb          $t6, 0x5($a0)
    MEM_B(0X5, ctx->r4) = ctx->r14;
    return;
    // 0x803A5124: sb          $t6, 0x5($a0)
    MEM_B(0X5, ctx->r4) = ctx->r14;
;}
RECOMP_FUNC void func_803A5128(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803A5128: addiu       $t6, $zero, 0x7
    ctx->r14 = ADD32(0, 0X7);
    // 0x803A512C: jr          $ra
    // 0x803A5130: sb          $t6, 0x5($a0)
    MEM_B(0X5, ctx->r4) = ctx->r14;
    return;
    // 0x803A5130: sb          $t6, 0x5($a0)
    MEM_B(0X5, ctx->r4) = ctx->r14;
;}
RECOMP_FUNC void func_803A5134(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803A5134: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x803A5138: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x803A513C: lbu         $v0, 0x3B($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X3B);
    // 0x803A5140: lbu         $v1, 0x2C($a0)
    ctx->r3 = MEM_BU(ctx->r4, 0X2C);
    // 0x803A5144: sll         $a0, $v0, 16
    ctx->r4 = S32(ctx->r2 << 16);
    // 0x803A5148: sll         $a1, $v1, 24
    ctx->r5 = S32(ctx->r3 << 24);
    // 0x803A514C: sra         $t7, $a1, 24
    ctx->r15 = S32(SIGNED(ctx->r5) >> 24);
    // 0x803A5150: sra         $t6, $a0, 16
    ctx->r14 = S32(SIGNED(ctx->r4) >> 16);
    // 0x803A5154: or          $a0, $t6, $zero
    ctx->r4 = ctx->r14 | 0;
    // 0x803A5158: jal         0x803A5240
    // 0x803A515C: or          $a1, $t7, $zero
    ctx->r5 = ctx->r15 | 0;
    func_803A5240(rdram, ctx);
        goto after_0;
    // 0x803A515C: or          $a1, $t7, $zero
    ctx->r5 = ctx->r15 | 0;
    after_0:
    // 0x803A5160: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x803A5164: beq         $v0, $zero, L_803A517C
    if (ctx->r2 == 0) {
        // 0x803A5168: addiu       $at, $zero, 0x1
        ctx->r1 = ADD32(0, 0X1);
            goto L_803A517C;
    }
    // 0x803A5168: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x803A516C: beq         $v0, $at, L_803A5184
    if (ctx->r2 == ctx->r1) {
        // 0x803A5170: nop
    
            goto L_803A5184;
    }
    // 0x803A5170: nop

    // 0x803A5174: b           L_803A518C
    // 0x803A5178: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_803A518C;
    // 0x803A5178: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_803A517C:
    // 0x803A517C: b           L_803A518C
    // 0x803A5180: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_803A518C;
    // 0x803A5180: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_803A5184:
    // 0x803A5184: b           L_803A518C
    // 0x803A5188: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_803A518C;
    // 0x803A5188: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_803A518C:
    // 0x803A518C: jr          $ra
    // 0x803A5190: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x803A5190: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_803A5194(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803A5194: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x803A5198: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x803A519C: lui         $a0, 0x8005
    ctx->r4 = S32(0X8005 << 16);
    // 0x803A51A0: jal         0x80029354
    // 0x803A51A4: addiu       $a0, $a0, -0x1E98
    ctx->r4 = ADD32(ctx->r4, -0X1E98);
    func_80029354(rdram, ctx);
        goto after_0;
    // 0x803A51A4: addiu       $a0, $a0, -0x1E98
    ctx->r4 = ADD32(ctx->r4, -0X1E98);
    after_0:
    // 0x803A51A8: lui         $a0, 0x803B
    ctx->r4 = S32(0X803B << 16);
    // 0x803A51AC: lbu         $a0, -0x7D30($a0)
    ctx->r4 = MEM_BU(ctx->r4, -0X7D30);
    // 0x803A51B0: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
    // 0x803A51B4: beq         $a0, $zero, L_803A51D0
    if (ctx->r4 == 0) {
        // 0x803A51B8: addiu       $a1, $zero, 0x141
        ctx->r5 = ADD32(0, 0X141);
            goto L_803A51D0;
    }
    // 0x803A51B8: addiu       $a1, $zero, 0x141
    ctx->r5 = ADD32(0, 0X141);
    // 0x803A51BC: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x803A51C0: beq         $a0, $at, L_803A5204
    if (ctx->r4 == ctx->r1) {
        // 0x803A51C4: addiu       $a1, $zero, 0x140
        ctx->r5 = ADD32(0, 0X140);
            goto L_803A5204;
    }
    // 0x803A51C4: addiu       $a1, $zero, 0x140
    ctx->r5 = ADD32(0, 0X140);
    // 0x803A51C8: b           L_803A5234
    // 0x803A51CC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_803A5234;
    // 0x803A51CC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_803A51D0:
    // 0x803A51D0: lw          $a0, 0x14($v1)
    ctx->r4 = MEM_W(ctx->r3, 0X14);
    // 0x803A51D4: lui         $a3, 0x803D
    ctx->r7 = S32(0X803D << 16);
    // 0x803A51D8: addiu       $a3, $a3, 0x2AB0
    ctx->r7 = ADD32(ctx->r7, 0X2AB0);
    // 0x803A51DC: sw          $v1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r3;
    // 0x803A51E0: jal         0x8004CD24
    // 0x803A51E4: addiu       $a2, $zero, 0x9
    ctx->r6 = ADD32(0, 0X9);
    func_8004CD24(rdram, ctx);
        goto after_1;
    // 0x803A51E4: addiu       $a2, $zero, 0x9
    ctx->r6 = ADD32(0, 0X9);
    after_1:
    // 0x803A51E8: lw          $v1, 0x1C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X1C);
    // 0x803A51EC: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x803A51F0: lw          $a0, 0x14($v1)
    ctx->r4 = MEM_W(ctx->r3, 0X14);
    // 0x803A51F4: jal         0x8002135C
    // 0x803A51F8: addiu       $a2, $zero, 0x18
    ctx->r6 = ADD32(0, 0X18);
    func_8002135C(rdram, ctx);
        goto after_2;
    // 0x803A51F8: addiu       $a2, $zero, 0x18
    ctx->r6 = ADD32(0, 0X18);
    after_2:
    // 0x803A51FC: b           L_803A5234
    // 0x803A5200: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_803A5234;
    // 0x803A5200: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_803A5204:
    // 0x803A5204: lw          $a0, 0x14($v1)
    ctx->r4 = MEM_W(ctx->r3, 0X14);
    // 0x803A5208: lui         $a3, 0x803D
    ctx->r7 = S32(0X803D << 16);
    // 0x803A520C: addiu       $a3, $a3, 0x3350
    ctx->r7 = ADD32(ctx->r7, 0X3350);
    // 0x803A5210: sw          $v1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r3;
    // 0x803A5214: jal         0x8004CD24
    // 0x803A5218: addiu       $a2, $zero, 0x9
    ctx->r6 = ADD32(0, 0X9);
    func_8004CD24(rdram, ctx);
        goto after_3;
    // 0x803A5218: addiu       $a2, $zero, 0x9
    ctx->r6 = ADD32(0, 0X9);
    after_3:
    // 0x803A521C: lw          $v1, 0x1C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X1C);
    // 0x803A5220: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x803A5224: lw          $a0, 0x14($v1)
    ctx->r4 = MEM_W(ctx->r3, 0X14);
    // 0x803A5228: jal         0x8002135C
    // 0x803A522C: addiu       $a2, $zero, 0x18
    ctx->r6 = ADD32(0, 0X18);
    func_8002135C(rdram, ctx);
        goto after_4;
    // 0x803A522C: addiu       $a2, $zero, 0x18
    ctx->r6 = ADD32(0, 0X18);
    after_4:
    // 0x803A5230: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_803A5234:
    // 0x803A5234: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x803A5238: jr          $ra
    // 0x803A523C: nop

    return;
    // 0x803A523C: nop

;}
