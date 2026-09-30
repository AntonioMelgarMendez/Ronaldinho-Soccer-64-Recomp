#include "iss64_recomp.h"
#include "funcs.h"

RECOMP_FUNC void func_803BB25C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803BB25C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x803BB260: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x803BB264: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x803BB268: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x803BB26C: lw          $t7, 0x38($a1)
    ctx->r15 = MEM_W(ctx->r5, 0X38);
    // 0x803BB270: nop

    // 0x803BB274: lh          $a0, 0x1E($t7)
    ctx->r4 = MEM_H(ctx->r15, 0X1E);
    // 0x803BB278: jal         0x803BD1EC
    // 0x803BB27C: nop

    func_803BD1EC(rdram, ctx);
        goto after_0;
    // 0x803BB27C: nop

    after_0:
    // 0x803BB280: beq         $v0, $zero, L_803BB2A8
    if (ctx->r2 == 0) {
        // 0x803BB284: lui         $t8, 0x801B
        ctx->r24 = S32(0X801B << 16);
            goto L_803BB2A8;
    }
    // 0x803BB284: lui         $t8, 0x801B
    ctx->r24 = S32(0X801B << 16);
    // 0x803BB288: lh          $t8, -0x6B4($t8)
    ctx->r24 = MEM_H(ctx->r24, -0X6B4);
    // 0x803BB28C: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x803BB290: beq         $t8, $at, L_803BB2AC
    if (ctx->r24 == ctx->r1) {
        // 0x803BB294: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_803BB2AC;
    }
    // 0x803BB294: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x803BB298: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x803BB29C: lw          $a1, 0x1C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X1C);
    // 0x803BB2A0: jal         0x8003BB90
    // 0x803BB2A4: nop

    func_8003BB90(rdram, ctx);
        goto after_1;
    // 0x803BB2A4: nop

    after_1:
L_803BB2A8:
    // 0x803BB2A8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_803BB2AC:
    // 0x803BB2AC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x803BB2B0: jr          $ra
    // 0x803BB2B4: nop

    return;
    // 0x803BB2B4: nop

;}
RECOMP_FUNC void func_803BB2B8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803BB2B8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x803BB2BC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x803BB2C0: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x803BB2C4: lw          $t6, 0x38($a1)
    ctx->r14 = MEM_W(ctx->r5, 0X38);
    // 0x803BB2C8: nop

    // 0x803BB2CC: lh          $a0, 0x1E($t6)
    ctx->r4 = MEM_H(ctx->r14, 0X1E);
    // 0x803BB2D0: jal         0x803BD1EC
    // 0x803BB2D4: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    func_803BD1EC(rdram, ctx);
        goto after_0;
    // 0x803BB2D4: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    after_0:
    // 0x803BB2D8: lw          $a2, 0x1C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X1C);
    // 0x803BB2DC: beq         $v0, $zero, L_803BB2F0
    if (ctx->r2 == 0) {
        // 0x803BB2E0: lui         $t7, 0x801B
        ctx->r15 = S32(0X801B << 16);
            goto L_803BB2F0;
    }
    // 0x803BB2E0: lui         $t7, 0x801B
    ctx->r15 = S32(0X801B << 16);
    // 0x803BB2E4: lh          $t7, -0x6B4($t7)
    ctx->r15 = MEM_H(ctx->r15, -0X6B4);
    // 0x803BB2E8: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x803BB2EC: bne         $t7, $at, L_803BB304
    if (ctx->r15 != ctx->r1) {
        // 0x803BB2F0: or          $a0, $a2, $zero
        ctx->r4 = ctx->r6 | 0;
            goto L_803BB304;
    }
L_803BB2F0:
    // 0x803BB2F0: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    // 0x803BB2F4: jal         0x8002BB50
    // 0x803BB2F8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8002BB50(rdram, ctx);
        goto after_1;
    // 0x803BB2F8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_1:
    // 0x803BB2FC: b           L_803BB338
    // 0x803BB300: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_803BB338;
    // 0x803BB300: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_803BB304:
    // 0x803BB304: lw          $t8, 0x38($a2)
    ctx->r24 = MEM_W(ctx->r6, 0X38);
    // 0x803BB308: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    // 0x803BB30C: lhu         $a1, 0x1E($t8)
    ctx->r5 = MEM_HU(ctx->r24, 0X1E);
    // 0x803BB310: sw          $a2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r6;
    // 0x803BB314: addiu       $a1, $a1, 0xA
    ctx->r5 = ADD32(ctx->r5, 0XA);
    // 0x803BB318: andi        $t9, $a1, 0xFFFF
    ctx->r25 = ctx->r5 & 0XFFFF;
    // 0x803BB31C: jal         0x8002BB50
    // 0x803BB320: or          $a1, $t9, $zero
    ctx->r5 = ctx->r25 | 0;
    func_8002BB50(rdram, ctx);
        goto after_2;
    // 0x803BB320: or          $a1, $t9, $zero
    ctx->r5 = ctx->r25 | 0;
    after_2:
    // 0x803BB324: lw          $a1, 0x1C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X1C);
    // 0x803BB328: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x803BB32C: jal         0x8003BBE0
    // 0x803BB330: nop

    func_8003BBE0(rdram, ctx);
        goto after_3;
    // 0x803BB330: nop

    after_3:
    // 0x803BB334: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_803BB338:
    // 0x803BB338: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x803BB33C: jr          $ra
    // 0x803BB340: nop

    return;
    // 0x803BB340: nop

;}
RECOMP_FUNC void func_803BB344(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803BB344: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x803BB348: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x803BB34C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x803BB350: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x803BB354: lui         $a0, 0x803C
    ctx->r4 = S32(0X803C << 16);
    // 0x803BB358: addiu       $a0, $a0, -0x4C8C
    ctx->r4 = ADD32(ctx->r4, -0X4C8C);
    // 0x803BB35C: jal         0x8002931C
    // 0x803BB360: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_8002931C(rdram, ctx);
        goto after_0;
    // 0x803BB360: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_0:
    // 0x803BB364: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x803BB368: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x803BB36C: jr          $ra
    // 0x803BB370: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    return;
    // 0x803BB370: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
;}
RECOMP_FUNC void func_803BB374(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803BB374: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x803BB378: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x803BB37C: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x803BB380: lw          $t6, 0x8($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X8);
    // 0x803BB384: lui         $v1, 0x801B
    ctx->r3 = S32(0X801B << 16);
    // 0x803BB388: lw          $a2, 0x14($t6)
    ctx->r6 = MEM_W(ctx->r14, 0X14);
    // 0x803BB38C: addiu       $v1, $v1, -0x750
    ctx->r3 = ADD32(ctx->r3, -0X750);
    // 0x803BB390: lw          $t7, 0x38($a2)
    ctx->r15 = MEM_W(ctx->r6, 0X38);
    // 0x803BB394: lb          $t9, 0xAF($v1)
    ctx->r25 = MEM_B(ctx->r3, 0XAF);
    // 0x803BB398: lhu         $t8, 0x1E($t7)
    ctx->r24 = MEM_HU(ctx->r15, 0X1E);
    // 0x803BB39C: lui         $a1, 0x800D
    ctx->r5 = S32(0X800D << 16);
    // 0x803BB3A0: bne         $t8, $t9, L_803BB404
    if (ctx->r24 != ctx->r25) {
        // 0x803BB3A4: or          $a0, $a2, $zero
        ctx->r4 = ctx->r6 | 0;
            goto L_803BB404;
    }
    // 0x803BB3A4: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    // 0x803BB3A8: lh          $v0, 0x9E($v1)
    ctx->r2 = MEM_H(ctx->r3, 0X9E);
    // 0x803BB3AC: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    // 0x803BB3B0: beq         $v0, $zero, L_803BB3CC
    if (ctx->r2 == 0) {
        // 0x803BB3B4: lui         $a1, 0x800D
        ctx->r5 = S32(0X800D << 16);
            goto L_803BB3CC;
    }
    // 0x803BB3B4: lui         $a1, 0x800D
    ctx->r5 = S32(0X800D << 16);
    // 0x803BB3B8: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x803BB3BC: beq         $v0, $at, L_803BB40C
    if (ctx->r2 == ctx->r1) {
        // 0x803BB3C0: or          $a0, $a2, $zero
        ctx->r4 = ctx->r6 | 0;
            goto L_803BB40C;
    }
    // 0x803BB3C0: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    // 0x803BB3C4: b           L_803BB3E8
    // 0x803BB3C8: lui         $a1, 0x800D
    ctx->r5 = S32(0X800D << 16);
        goto L_803BB3E8;
    // 0x803BB3C8: lui         $a1, 0x800D
    ctx->r5 = S32(0X800D << 16);
L_803BB3CC:
    // 0x803BB3CC: jal         0x8002B9DC
    // 0x803BB3D0: addiu       $a1, $a1, 0x5654
    ctx->r5 = ADD32(ctx->r5, 0X5654);
    func_8002B9DC(rdram, ctx);
        goto after_0;
    // 0x803BB3D0: addiu       $a1, $a1, 0x5654
    ctx->r5 = ADD32(ctx->r5, 0X5654);
    after_0:
    // 0x803BB3D4: lui         $a0, 0x803C
    ctx->r4 = S32(0X803C << 16);
    // 0x803BB3D8: jal         0x800296E0
    // 0x803BB3DC: addiu       $a0, $a0, -0x4BE4
    ctx->r4 = ADD32(ctx->r4, -0X4BE4);
    func_800296E0(rdram, ctx);
        goto after_1;
    // 0x803BB3DC: addiu       $a0, $a0, -0x4BE4
    ctx->r4 = ADD32(ctx->r4, -0X4BE4);
    after_1:
    // 0x803BB3E0: b           L_803BB410
    // 0x803BB3E4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_803BB410;
    // 0x803BB3E4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_803BB3E8:
    // 0x803BB3E8: jal         0x8002B9DC
    // 0x803BB3EC: addiu       $a1, $a1, 0x565C
    ctx->r5 = ADD32(ctx->r5, 0X565C);
    func_8002B9DC(rdram, ctx);
        goto after_2;
    // 0x803BB3EC: addiu       $a1, $a1, 0x565C
    ctx->r5 = ADD32(ctx->r5, 0X565C);
    after_2:
    // 0x803BB3F0: lui         $a0, 0x803C
    ctx->r4 = S32(0X803C << 16);
    // 0x803BB3F4: jal         0x800296E0
    // 0x803BB3F8: addiu       $a0, $a0, -0x4BE4
    ctx->r4 = ADD32(ctx->r4, -0X4BE4);
    func_800296E0(rdram, ctx);
        goto after_3;
    // 0x803BB3F8: addiu       $a0, $a0, -0x4BE4
    ctx->r4 = ADD32(ctx->r4, -0X4BE4);
    after_3:
    // 0x803BB3FC: b           L_803BB410
    // 0x803BB400: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_803BB410;
    // 0x803BB400: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_803BB404:
    // 0x803BB404: jal         0x8002B9DC
    // 0x803BB408: addiu       $a1, $a1, 0x5654
    ctx->r5 = ADD32(ctx->r5, 0X5654);
    func_8002B9DC(rdram, ctx);
        goto after_4;
    // 0x803BB408: addiu       $a1, $a1, 0x5654
    ctx->r5 = ADD32(ctx->r5, 0X5654);
    after_4:
L_803BB40C:
    // 0x803BB40C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_803BB410:
    // 0x803BB410: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x803BB414: jr          $ra
    // 0x803BB418: nop

    return;
    // 0x803BB418: nop

;}
RECOMP_FUNC void func_803BB41C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803BB41C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x803BB420: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x803BB424: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x803BB428: lw          $t6, 0x8($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X8);
    // 0x803BB42C: lui         $v1, 0x801B
    ctx->r3 = S32(0X801B << 16);
    // 0x803BB430: lw          $a2, 0x14($t6)
    ctx->r6 = MEM_W(ctx->r14, 0X14);
    // 0x803BB434: addiu       $v1, $v1, -0x750
    ctx->r3 = ADD32(ctx->r3, -0X750);
    // 0x803BB438: lw          $t7, 0x38($a2)
    ctx->r15 = MEM_W(ctx->r6, 0X38);
    // 0x803BB43C: lb          $t9, 0xAF($v1)
    ctx->r25 = MEM_B(ctx->r3, 0XAF);
    // 0x803BB440: lhu         $t8, 0x1E($t7)
    ctx->r24 = MEM_HU(ctx->r15, 0X1E);
    // 0x803BB444: lui         $a1, 0x800D
    ctx->r5 = S32(0X800D << 16);
    // 0x803BB448: bne         $t8, $t9, L_803BB4B8
    if (ctx->r24 != ctx->r25) {
        // 0x803BB44C: or          $a0, $a2, $zero
        ctx->r4 = ctx->r6 | 0;
            goto L_803BB4B8;
    }
    // 0x803BB44C: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    // 0x803BB450: lh          $v0, 0x9E($v1)
    ctx->r2 = MEM_H(ctx->r3, 0X9E);
    // 0x803BB454: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    // 0x803BB458: beq         $v0, $zero, L_803BB474
    if (ctx->r2 == 0) {
        // 0x803BB45C: lui         $a1, 0x800D
        ctx->r5 = S32(0X800D << 16);
            goto L_803BB474;
    }
    // 0x803BB45C: lui         $a1, 0x800D
    ctx->r5 = S32(0X800D << 16);
    // 0x803BB460: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x803BB464: beq         $v0, $at, L_803BB484
    if (ctx->r2 == ctx->r1) {
        // 0x803BB468: or          $a0, $a2, $zero
        ctx->r4 = ctx->r6 | 0;
            goto L_803BB484;
    }
    // 0x803BB468: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    // 0x803BB46C: b           L_803BB4A4
    // 0x803BB470: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
        goto L_803BB4A4;
    // 0x803BB470: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
L_803BB474:
    // 0x803BB474: jal         0x8002B9DC
    // 0x803BB478: addiu       $a1, $a1, 0x5654
    ctx->r5 = ADD32(ctx->r5, 0X5654);
    func_8002B9DC(rdram, ctx);
        goto after_0;
    // 0x803BB478: addiu       $a1, $a1, 0x5654
    ctx->r5 = ADD32(ctx->r5, 0X5654);
    after_0:
    // 0x803BB47C: b           L_803BB4C4
    // 0x803BB480: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_803BB4C4;
    // 0x803BB480: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_803BB484:
    // 0x803BB484: lui         $a1, 0x800D
    ctx->r5 = S32(0X800D << 16);
    // 0x803BB488: jal         0x8002B9DC
    // 0x803BB48C: addiu       $a1, $a1, 0x5640
    ctx->r5 = ADD32(ctx->r5, 0X5640);
    func_8002B9DC(rdram, ctx);
        goto after_1;
    // 0x803BB48C: addiu       $a1, $a1, 0x5640
    ctx->r5 = ADD32(ctx->r5, 0X5640);
    after_1:
    // 0x803BB490: lui         $a0, 0x803C
    ctx->r4 = S32(0X803C << 16);
    // 0x803BB494: jal         0x800296E0
    // 0x803BB498: addiu       $a0, $a0, -0x4C8C
    ctx->r4 = ADD32(ctx->r4, -0X4C8C);
    func_800296E0(rdram, ctx);
        goto after_2;
    // 0x803BB498: addiu       $a0, $a0, -0x4C8C
    ctx->r4 = ADD32(ctx->r4, -0X4C8C);
    after_2:
    // 0x803BB49C: b           L_803BB4C4
    // 0x803BB4A0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_803BB4C4;
    // 0x803BB4A0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_803BB4A4:
    // 0x803BB4A4: lui         $a1, 0x800D
    ctx->r5 = S32(0X800D << 16);
    // 0x803BB4A8: jal         0x8002B9DC
    // 0x803BB4AC: addiu       $a1, $a1, 0x565C
    ctx->r5 = ADD32(ctx->r5, 0X565C);
    func_8002B9DC(rdram, ctx);
        goto after_3;
    // 0x803BB4AC: addiu       $a1, $a1, 0x565C
    ctx->r5 = ADD32(ctx->r5, 0X565C);
    after_3:
    // 0x803BB4B0: b           L_803BB4C4
    // 0x803BB4B4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_803BB4C4;
    // 0x803BB4B4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_803BB4B8:
    // 0x803BB4B8: jal         0x8002B9DC
    // 0x803BB4BC: addiu       $a1, $a1, 0x5654
    ctx->r5 = ADD32(ctx->r5, 0X5654);
    func_8002B9DC(rdram, ctx);
        goto after_4;
    // 0x803BB4BC: addiu       $a1, $a1, 0x5654
    ctx->r5 = ADD32(ctx->r5, 0X5654);
    after_4:
    // 0x803BB4C0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_803BB4C4:
    // 0x803BB4C4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x803BB4C8: jr          $ra
    // 0x803BB4CC: nop

    return;
    // 0x803BB4CC: nop

;}
RECOMP_FUNC void func_803BB4D0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803BB4D0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x803BB4D4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x803BB4D8: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x803BB4DC: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x803BB4E0: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    // 0x803BB4E4: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x803BB4E8: jal         0x80021214
    // 0x803BB4EC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_80021214(rdram, ctx);
        goto after_0;
    // 0x803BB4EC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_0:
    // 0x803BB4F0: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    // 0x803BB4F4: jal         0x8004BDA0
    // 0x803BB4F8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8004BDA0(rdram, ctx);
        goto after_1;
    // 0x803BB4F8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_1:
    // 0x803BB4FC: lui         $t6, 0x800B
    ctx->r14 = S32(0X800B << 16);
    // 0x803BB500: addiu       $t6, $t6, -0x6CE4
    ctx->r14 = ADD32(ctx->r14, -0X6CE4);
    // 0x803BB504: lw          $at, 0x0($t6)
    ctx->r1 = MEM_W(ctx->r14, 0X0);
    // 0x803BB508: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x803BB50C: sw          $at, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r1;
    // 0x803BB510: lw          $a2, 0x4($t6)
    ctx->r6 = MEM_W(ctx->r14, 0X4);
    // 0x803BB514: lw          $a1, 0x4($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X4);
    // 0x803BB518: sw          $a2, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r6;
    // 0x803BB51C: lw          $a3, 0x8($t6)
    ctx->r7 = MEM_W(ctx->r14, 0X8);
    // 0x803BB520: jal         0x8004B078
    // 0x803BB524: sw          $a3, 0xC($sp)
    MEM_W(0XC, ctx->r29) = ctx->r7;
    func_8004B078(rdram, ctx);
        goto after_2;
    // 0x803BB524: sw          $a3, 0xC($sp)
    MEM_W(0XC, ctx->r29) = ctx->r7;
    after_2:
    // 0x803BB528: lui         $a0, 0x803C
    ctx->r4 = S32(0X803C << 16);
    // 0x803BB52C: jal         0x800296E0
    // 0x803BB530: addiu       $a0, $a0, -0x4ABC
    ctx->r4 = ADD32(ctx->r4, -0X4ABC);
    func_800296E0(rdram, ctx);
        goto after_3;
    // 0x803BB530: addiu       $a0, $a0, -0x4ABC
    ctx->r4 = ADD32(ctx->r4, -0X4ABC);
    after_3:
    // 0x803BB534: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x803BB538: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x803BB53C: jr          $ra
    // 0x803BB540: nop

    return;
    // 0x803BB540: nop

;}
RECOMP_FUNC void func_803BB544(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803BB544: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x803BB548: lh          $v0, -0x32A8($v0)
    ctx->r2 = MEM_H(ctx->r2, -0X32A8);
    // 0x803BB54C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x803BB550: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x803BB554: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x803BB558: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    // 0x803BB55C: beq         $v0, $at, L_803BB5C4
    if (ctx->r2 == ctx->r1) {
        // 0x803BB560: sw          $ra, 0x14($sp)
        MEM_W(0X14, ctx->r29) = ctx->r31;
            goto L_803BB5C4;
    }
    // 0x803BB560: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x803BB564: addiu       $at, $zero, 0x5
    ctx->r1 = ADD32(0, 0X5);
    // 0x803BB568: beq         $v0, $at, L_803BB5C4
    if (ctx->r2 == ctx->r1) {
        // 0x803BB56C: lui         $v1, 0x801B
        ctx->r3 = S32(0X801B << 16);
            goto L_803BB5C4;
    }
    // 0x803BB56C: lui         $v1, 0x801B
    ctx->r3 = S32(0X801B << 16);
    // 0x803BB570: addiu       $v1, $v1, -0x750
    ctx->r3 = ADD32(ctx->r3, -0X750);
    // 0x803BB574: lh          $v0, 0x9E($v1)
    ctx->r2 = MEM_H(ctx->r3, 0X9E);
    // 0x803BB578: addiu       $at, $zero, 0x8
    ctx->r1 = ADD32(0, 0X8);
    // 0x803BB57C: andi        $t6, $v0, 0x1
    ctx->r14 = ctx->r2 & 0X1;
    // 0x803BB580: bne         $t6, $zero, L_803BB5C4
    if (ctx->r14 != 0) {
        // 0x803BB584: nop
    
            goto L_803BB5C4;
    }
    // 0x803BB584: nop

    // 0x803BB588: beq         $v0, $at, L_803BB5C4
    if (ctx->r2 == ctx->r1) {
        // 0x803BB58C: addiu       $t7, $zero, 0x1
        ctx->r15 = ADD32(0, 0X1);
            goto L_803BB5C4;
    }
    // 0x803BB58C: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x803BB590: sb          $t7, 0x4($a1)
    MEM_B(0X4, ctx->r5) = ctx->r15;
    // 0x803BB594: lh          $t8, 0x9E($v1)
    ctx->r24 = MEM_H(ctx->r3, 0X9E);
    // 0x803BB598: lh          $t1, 0xC4($v1)
    ctx->r9 = MEM_H(ctx->r3, 0XC4);
    // 0x803BB59C: xori        $t9, $t8, 0x6
    ctx->r25 = ctx->r24 ^ 0X6;
    // 0x803BB5A0: sltiu       $t9, $t9, 0x1
    ctx->r25 = ctx->r25 < 0X1 ? 1 : 0;
    // 0x803BB5A4: sll         $t0, $t9, 1
    ctx->r8 = S32(ctx->r25 << 1);
    // 0x803BB5A8: addu        $a1, $t0, $t1
    ctx->r5 = ADD32(ctx->r8, ctx->r9);
    // 0x803BB5AC: addiu       $a1, $a1, 0x14
    ctx->r5 = ADD32(ctx->r5, 0X14);
    // 0x803BB5B0: andi        $t2, $a1, 0xFFFF
    ctx->r10 = ctx->r5 & 0XFFFF;
    // 0x803BB5B4: jal         0x8002BB50
    // 0x803BB5B8: or          $a1, $t2, $zero
    ctx->r5 = ctx->r10 | 0;
    func_8002BB50(rdram, ctx);
        goto after_0;
    // 0x803BB5B8: or          $a1, $t2, $zero
    ctx->r5 = ctx->r10 | 0;
    after_0:
    // 0x803BB5BC: b           L_803BB5CC
    // 0x803BB5C0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_803BB5CC;
    // 0x803BB5C0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_803BB5C4:
    // 0x803BB5C4: sb          $zero, 0x4($a0)
    MEM_B(0X4, ctx->r4) = 0;
    // 0x803BB5C8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_803BB5CC:
    // 0x803BB5CC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x803BB5D0: jr          $ra
    // 0x803BB5D4: nop

    return;
    // 0x803BB5D4: nop

;}
RECOMP_FUNC void func_803BB5D8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803BB5D8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x803BB5DC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x803BB5E0: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x803BB5E4: jal         0x803BD468
    // 0x803BB5E8: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    func_803BD468(rdram, ctx);
        goto after_0;
    // 0x803BB5E8: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    after_0:
    // 0x803BB5EC: lw          $v1, 0x18($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X18);
    // 0x803BB5F0: beq         $v0, $zero, L_803BB600
    if (ctx->r2 == 0) {
        // 0x803BB5F4: addiu       $t6, $zero, 0x1
        ctx->r14 = ADD32(0, 0X1);
            goto L_803BB600;
    }
    // 0x803BB5F4: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x803BB5F8: b           L_803BB604
    // 0x803BB5FC: sb          $zero, 0x4($v1)
    MEM_B(0X4, ctx->r3) = 0;
        goto L_803BB604;
    // 0x803BB5FC: sb          $zero, 0x4($v1)
    MEM_B(0X4, ctx->r3) = 0;
L_803BB600:
    // 0x803BB600: sb          $t6, 0x4($v1)
    MEM_B(0X4, ctx->r3) = ctx->r14;
L_803BB604:
    // 0x803BB604: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x803BB608: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x803BB60C: jr          $ra
    // 0x803BB610: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    return;
    // 0x803BB610: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
;}
RECOMP_FUNC void func_803BB614(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803BB614: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x803BB618: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x803BB61C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x803BB620: jal         0x80036234
    // 0x803BB624: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    func_80036234(rdram, ctx);
        goto after_0;
    // 0x803BB624: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    after_0:
    // 0x803BB628: lw          $t6, 0x18($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X18);
    // 0x803BB62C: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x803BB630: addiu       $v0, $v0, -0x32B0
    ctx->r2 = ADD32(ctx->r2, -0X32B0);
    // 0x803BB634: sh          $zero, 0x24($t6)
    MEM_H(0X24, ctx->r14) = 0;
    // 0x803BB638: lbu         $t7, 0x3F($v0)
    ctx->r15 = MEM_BU(ctx->r2, 0X3F);
    // 0x803BB63C: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x803BB640: bne         $t7, $zero, L_803BB658
    if (ctx->r15 != 0) {
        // 0x803BB644: addiu       $a0, $zero, 0x14
        ctx->r4 = ADD32(0, 0X14);
            goto L_803BB658;
    }
    // 0x803BB644: addiu       $a0, $zero, 0x14
    ctx->r4 = ADD32(0, 0X14);
    // 0x803BB648: jal         0x80015BC0
    // 0x803BB64C: sb          $t8, 0x3F($v0)
    MEM_B(0X3F, ctx->r2) = ctx->r24;
    func_80015BC0(rdram, ctx);
        goto after_1;
    // 0x803BB64C: sb          $t8, 0x3F($v0)
    MEM_B(0X3F, ctx->r2) = ctx->r24;
    after_1:
    // 0x803BB650: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x803BB654: addiu       $v0, $v0, -0x32B0
    ctx->r2 = ADD32(ctx->r2, -0X32B0);
L_803BB658:
    // 0x803BB658: lbu         $t9, 0x0($v0)
    ctx->r25 = MEM_BU(ctx->r2, 0X0);
    // 0x803BB65C: lui         $a0, 0x803C
    ctx->r4 = S32(0X803C << 16);
    // 0x803BB660: beq         $t9, $zero, L_803BB678
    if (ctx->r25 == 0) {
        // 0x803BB664: nop
    
            goto L_803BB678;
    }
    // 0x803BB664: nop

    // 0x803BB668: jal         0x80037908
    // 0x803BB66C: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    func_80037908(rdram, ctx);
        goto after_2;
    // 0x803BB66C: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_2:
    // 0x803BB670: b           L_803BB684
    // 0x803BB674: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_803BB684;
    // 0x803BB674: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_803BB678:
    // 0x803BB678: jal         0x800297B4
    // 0x803BB67C: addiu       $a0, $a0, -0x4928
    ctx->r4 = ADD32(ctx->r4, -0X4928);
    func_800297B4(rdram, ctx);
        goto after_3;
    // 0x803BB67C: addiu       $a0, $a0, -0x4928
    ctx->r4 = ADD32(ctx->r4, -0X4928);
    after_3:
    // 0x803BB680: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_803BB684:
    // 0x803BB684: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x803BB688: jr          $ra
    // 0x803BB68C: nop

    return;
    // 0x803BB68C: nop

;}
RECOMP_FUNC void func_803BB690(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803BB690: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x803BB694: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x803BB698: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x803BB69C: jal         0x80036234
    // 0x803BB6A0: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    func_80036234(rdram, ctx);
        goto after_0;
    // 0x803BB6A0: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    after_0:
    // 0x803BB6A4: lw          $t7, 0x18($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X18);
    // 0x803BB6A8: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x803BB6AC: addiu       $t8, $zero, 0x8
    ctx->r24 = ADD32(0, 0X8);
    // 0x803BB6B0: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x803BB6B4: lui         $a0, 0x803C
    ctx->r4 = S32(0X803C << 16);
    // 0x803BB6B8: sh          $t6, 0x24($t7)
    MEM_H(0X24, ctx->r15) = ctx->r14;
    // 0x803BB6BC: sb          $t8, -0x32A4($at)
    MEM_B(-0X32A4, ctx->r1) = ctx->r24;
    // 0x803BB6C0: jal         0x800297B4
    // 0x803BB6C4: addiu       $a0, $a0, -0x4928
    ctx->r4 = ADD32(ctx->r4, -0X4928);
    func_800297B4(rdram, ctx);
        goto after_1;
    // 0x803BB6C4: addiu       $a0, $a0, -0x4928
    ctx->r4 = ADD32(ctx->r4, -0X4928);
    after_1:
    // 0x803BB6C8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x803BB6CC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x803BB6D0: jr          $ra
    // 0x803BB6D4: nop

    return;
    // 0x803BB6D4: nop

;}
RECOMP_FUNC void func_803BB6D8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803BB6D8: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x803BB6DC: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x803BB6E0: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x803BB6E4: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x803BB6E8: lui         $a0, 0x803C
    ctx->r4 = S32(0X803C << 16);
    // 0x803BB6EC: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x803BB6F0: jal         0x80035FF0
    // 0x803BB6F4: addiu       $a0, $a0, -0x2AC0
    ctx->r4 = ADD32(ctx->r4, -0X2AC0);
    func_80035FF0(rdram, ctx);
        goto after_0;
    // 0x803BB6F4: addiu       $a0, $a0, -0x2AC0
    ctx->r4 = ADD32(ctx->r4, -0X2AC0);
    after_0:
    // 0x803BB6F8: jal         0x8006FB58
    // 0x803BB6FC: nop

    func_8006FB58(rdram, ctx);
        goto after_1;
    // 0x803BB6FC: nop

    after_1:
    // 0x803BB700: jal         0x80039DF0
    // 0x803BB704: nop

    func_80039DF0(rdram, ctx);
        goto after_2;
    // 0x803BB704: nop

    after_2:
    // 0x803BB708: lh          $a0, 0x24($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X24);
    // 0x803BB70C: jal         0x803BD18C
    // 0x803BB710: nop

    func_803BD18C(rdram, ctx);
        goto after_3;
    // 0x803BB710: nop

    after_3:
    // 0x803BB714: sh          $v0, 0x28($s0)
    MEM_H(0X28, ctx->r16) = ctx->r2;
    // 0x803BB718: lh          $t6, 0x28($s0)
    ctx->r14 = MEM_H(ctx->r16, 0X28);
    // 0x803BB71C: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x803BB720: bne         $t6, $at, L_803BB738
    if (ctx->r14 != ctx->r1) {
        // 0x803BB724: lui         $t8, 0x8012
        ctx->r24 = S32(0X8012 << 16);
            goto L_803BB738;
    }
    // 0x803BB724: lui         $t8, 0x8012
    ctx->r24 = S32(0X8012 << 16);
    // 0x803BB728: lui         $t7, 0x8012
    ctx->r15 = S32(0X8012 << 16);
    // 0x803BB72C: lbu         $t7, -0x3293($t7)
    ctx->r15 = MEM_BU(ctx->r15, -0X3293);
    // 0x803BB730: b           L_803BB744
    // 0x803BB734: sh          $t7, 0x2C($s0)
    MEM_H(0X2C, ctx->r16) = ctx->r15;
        goto L_803BB744;
    // 0x803BB734: sh          $t7, 0x2C($s0)
    MEM_H(0X2C, ctx->r16) = ctx->r15;
L_803BB738:
    // 0x803BB738: lbu         $t8, -0x3294($t8)
    ctx->r24 = MEM_BU(ctx->r24, -0X3294);
    // 0x803BB73C: nop

    // 0x803BB740: sh          $t8, 0x2C($s0)
    MEM_H(0X2C, ctx->r16) = ctx->r24;
L_803BB744:
    // 0x803BB744: lh          $a0, 0x2C($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X2C);
    // 0x803BB748: jal         0x8001D6EC
    // 0x803BB74C: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    func_8001D6EC(rdram, ctx);
        goto after_4;
    // 0x803BB74C: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_4:
    // 0x803BB750: lh          $v1, 0x24($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X24);
    // 0x803BB754: sh          $v0, 0x2C($s0)
    MEM_H(0X2C, ctx->r16) = ctx->r2;
    // 0x803BB758: bne         $v1, $zero, L_803BB788
    if (ctx->r3 != 0) {
        // 0x803BB75C: sb          $v0, 0x3B($s0)
        MEM_B(0X3B, ctx->r16) = ctx->r2;
            goto L_803BB788;
    }
    // 0x803BB75C: sb          $v0, 0x3B($s0)
    MEM_B(0X3B, ctx->r16) = ctx->r2;
    // 0x803BB760: lh          $t1, 0x28($s0)
    ctx->r9 = MEM_H(ctx->r16, 0X28);
    // 0x803BB764: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x803BB768: bne         $t1, $at, L_803BB788
    if (ctx->r9 != ctx->r1) {
        // 0x803BB76C: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_803BB788;
    }
    // 0x803BB76C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x803BB770: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x803BB774: sh          $v0, -0x32A8($at)
    MEM_H(-0X32A8, ctx->r1) = ctx->r2;
    // 0x803BB778: lb          $t2, 0x3B($s0)
    ctx->r10 = MEM_B(ctx->r16, 0X3B);
    // 0x803BB77C: lh          $v1, 0x24($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X24);
    // 0x803BB780: sh          $v0, 0x2A($s0)
    MEM_H(0X2A, ctx->r16) = ctx->r2;
    // 0x803BB784: sh          $t2, 0x2C($s0)
    MEM_H(0X2C, ctx->r16) = ctx->r10;
L_803BB788:
    // 0x803BB788: beq         $v1, $zero, L_803BB794
    if (ctx->r3 == 0) {
        // 0x803BB78C: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_803BB794;
    }
    // 0x803BB78C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x803BB790: sh          $v0, 0x50($s0)
    MEM_H(0X50, ctx->r16) = ctx->r2;
L_803BB794:
    // 0x803BB794: jal         0x803BD3FC
    // 0x803BB798: nop

    func_803BD3FC(rdram, ctx);
        goto after_5;
    // 0x803BB798: nop

    after_5:
    // 0x803BB79C: lh          $a1, 0x28($s0)
    ctx->r5 = MEM_H(ctx->r16, 0X28);
    // 0x803BB7A0: jal         0x803BD23C
    // 0x803BB7A4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_803BD23C(rdram, ctx);
        goto after_6;
    // 0x803BB7A4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_6:
    // 0x803BB7A8: lui         $a0, 0x803C
    ctx->r4 = S32(0X803C << 16);
    // 0x803BB7AC: jal         0x8002AAC0
    // 0x803BB7B0: addiu       $a0, $a0, -0x2818
    ctx->r4 = ADD32(ctx->r4, -0X2818);
    func_8002AAC0(rdram, ctx);
        goto after_7;
    // 0x803BB7B0: addiu       $a0, $a0, -0x2818
    ctx->r4 = ADD32(ctx->r4, -0X2818);
    after_7:
    // 0x803BB7B4: lui         $a0, 0x803C
    ctx->r4 = S32(0X803C << 16);
    // 0x803BB7B8: addiu       $a0, $a0, -0x3CB8
    ctx->r4 = ADD32(ctx->r4, -0X3CB8);
    // 0x803BB7BC: jal         0x800293DC
    // 0x803BB7C0: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    func_800293DC(rdram, ctx);
        goto after_8;
    // 0x803BB7C0: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    after_8:
    // 0x803BB7C4: lui         $a0, 0x803C
    ctx->r4 = S32(0X803C << 16);
    // 0x803BB7C8: addiu       $a0, $a0, -0x481C
    ctx->r4 = ADD32(ctx->r4, -0X481C);
    // 0x803BB7CC: jal         0x8004A9B4
    // 0x803BB7D0: addiu       $a1, $zero, 0xB
    ctx->r5 = ADD32(0, 0XB);
    func_8004A9B4(rdram, ctx);
        goto after_9;
    // 0x803BB7D0: addiu       $a1, $zero, 0xB
    ctx->r5 = ADD32(0, 0XB);
    after_9:
    // 0x803BB7D4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x803BB7D8: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x803BB7DC: jr          $ra
    // 0x803BB7E0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x803BB7E0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_803BB7E4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803BB7E4: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x803BB7E8: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x803BB7EC: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x803BB7F0: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x803BB7F4: jal         0x800357CC
    // 0x803BB7F8: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    func_800357CC(rdram, ctx);
        goto after_0;
    // 0x803BB7F8: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    after_0:
    // 0x803BB7FC: lui         $t6, 0x8012
    ctx->r14 = S32(0X8012 << 16);
    // 0x803BB800: lw          $t6, -0x3250($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X3250);
    // 0x803BB804: nop

    // 0x803BB808: lhu         $a0, 0x0($t6)
    ctx->r4 = MEM_HU(ctx->r14, 0X0);
    // 0x803BB80C: jal         0x80035C24
    // 0x803BB810: nop

    func_80035C24(rdram, ctx);
        goto after_1;
    // 0x803BB810: nop

    after_1:
    // 0x803BB814: sll         $t7, $v0, 2
    ctx->r15 = S32(ctx->r2 << 2);
    // 0x803BB818: lui         $t9, 0x803C
    ctx->r25 = S32(0X803C << 16);
    // 0x803BB81C: addu        $t9, $t9, $t7
    ctx->r25 = ADD32(ctx->r25, ctx->r15);
    // 0x803BB820: lw          $t9, -0x27C0($t9)
    ctx->r25 = MEM_W(ctx->r25, -0X27C0);
    // 0x803BB824: lw          $a1, 0x24($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X24);
    // 0x803BB828: jalr        $t9
    // 0x803BB82C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x803BB82C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_2:
    // 0x803BB830: lh          $a0, 0x2C($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X2C);
    // 0x803BB834: jal         0x8001D6EC
    // 0x803BB838: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_8001D6EC(rdram, ctx);
        goto after_3;
    // 0x803BB838: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_3:
    // 0x803BB83C: lh          $a0, 0x50($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X50);
    // 0x803BB840: sh          $v0, 0x2C($s0)
    MEM_H(0X2C, ctx->r16) = ctx->r2;
    // 0x803BB844: jal         0x8001D6EC
    // 0x803BB848: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_8001D6EC(rdram, ctx);
        goto after_4;
    // 0x803BB848: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_4:
    // 0x803BB84C: sh          $v0, 0x50($s0)
    MEM_H(0X50, ctx->r16) = ctx->r2;
    // 0x803BB850: lui         $t8, 0x8012
    ctx->r24 = S32(0X8012 << 16);
    // 0x803BB854: lh          $t8, -0x32A8($t8)
    ctx->r24 = MEM_H(ctx->r24, -0X32A8);
    // 0x803BB858: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x803BB85C: bne         $t8, $at, L_803BB870
    if (ctx->r24 != ctx->r1) {
        // 0x803BB860: nop
    
            goto L_803BB870;
    }
    // 0x803BB860: nop

    // 0x803BB864: lh          $t0, 0x2C($s0)
    ctx->r8 = MEM_H(ctx->r16, 0X2C);
    // 0x803BB868: nop

    // 0x803BB86C: sb          $t0, 0x3B($s0)
    MEM_B(0X3B, ctx->r16) = ctx->r8;
L_803BB870:
    // 0x803BB870: jal         0x800358D8
    // 0x803BB874: nop

    func_800358D8(rdram, ctx);
        goto after_5;
    // 0x803BB874: nop

    after_5:
    // 0x803BB878: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x803BB87C: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x803BB880: jr          $ra
    // 0x803BB884: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x803BB884: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_803BB888(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803BB888: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x803BB88C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x803BB890: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x803BB894: jal         0x80035770
    // 0x803BB898: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_80035770(rdram, ctx);
        goto after_0;
    // 0x803BB898: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x803BB89C: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x803BB8A0: nop

    // 0x803BB8A4: lh          $a1, 0x28($a0)
    ctx->r5 = MEM_H(ctx->r4, 0X28);
    // 0x803BB8A8: jal         0x803BD23C
    // 0x803BB8AC: nop

    func_803BD23C(rdram, ctx);
        goto after_1;
    // 0x803BB8AC: nop

    after_1:
    // 0x803BB8B0: lui         $v1, 0x8012
    ctx->r3 = S32(0X8012 << 16);
    // 0x803BB8B4: addiu       $v1, $v1, -0x32B0
    ctx->r3 = ADD32(ctx->r3, -0X32B0);
    // 0x803BB8B8: lh          $v0, 0x8($v1)
    ctx->r2 = MEM_H(ctx->r3, 0X8);
    // 0x803BB8BC: lw          $a2, 0x18($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X18);
    // 0x803BB8C0: beq         $v0, $zero, L_803BB8EC
    if (ctx->r2 == 0) {
        // 0x803BB8C4: addiu       $a3, $zero, 0x1
        ctx->r7 = ADD32(0, 0X1);
            goto L_803BB8EC;
    }
    // 0x803BB8C4: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    // 0x803BB8C8: beq         $v0, $a3, L_803BB948
    if (ctx->r2 == ctx->r7) {
        // 0x803BB8CC: addiu       $t2, $zero, 0x2
        ctx->r10 = ADD32(0, 0X2);
            goto L_803BB948;
    }
    // 0x803BB8CC: addiu       $t2, $zero, 0x2
    ctx->r10 = ADD32(0, 0X2);
    // 0x803BB8D0: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x803BB8D4: beq         $v0, $at, L_803BB990
    if (ctx->r2 == ctx->r1) {
        // 0x803BB8D8: addiu       $at, $zero, 0x3
        ctx->r1 = ADD32(0, 0X3);
            goto L_803BB990;
    }
    // 0x803BB8D8: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x803BB8DC: beq         $v0, $at, L_803BBA48
    if (ctx->r2 == ctx->r1) {
        // 0x803BB8E0: addiu       $t7, $zero, 0x4
        ctx->r15 = ADD32(0, 0X4);
            goto L_803BBA48;
    }
    // 0x803BB8E0: addiu       $t7, $zero, 0x4
    ctx->r15 = ADD32(0, 0X4);
    // 0x803BB8E4: b           L_803BBA88
    // 0x803BB8E8: nop

        goto L_803BBA88;
    // 0x803BB8E8: nop

L_803BB8EC:
    // 0x803BB8EC: lh          $t6, 0x50($a2)
    ctx->r14 = MEM_H(ctx->r6, 0X50);
    // 0x803BB8F0: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    // 0x803BB8F4: beq         $t6, $zero, L_803BB934
    if (ctx->r14 == 0) {
        // 0x803BB8F8: nop
    
            goto L_803BB934;
    }
    // 0x803BB8F8: nop

    // 0x803BB8FC: lh          $t7, 0x24($a2)
    ctx->r15 = MEM_H(ctx->r6, 0X24);
    // 0x803BB900: addiu       $t8, $zero, 0x3
    ctx->r24 = ADD32(0, 0X3);
    // 0x803BB904: bne         $t7, $zero, L_803BB924
    if (ctx->r15 != 0) {
        // 0x803BB908: addiu       $t9, $zero, 0x4
        ctx->r25 = ADD32(0, 0X4);
            goto L_803BB924;
    }
    // 0x803BB908: addiu       $t9, $zero, 0x4
    ctx->r25 = ADD32(0, 0X4);
    // 0x803BB90C: sh          $t8, 0x8($v1)
    MEM_H(0X8, ctx->r3) = ctx->r24;
    // 0x803BB910: sb          $zero, 0x54($a2)
    MEM_B(0X54, ctx->r6) = 0;
    // 0x803BB914: lb          $t0, 0x54($a2)
    ctx->r8 = MEM_B(ctx->r6, 0X54);
    // 0x803BB918: sh          $t9, 0x2A($a2)
    MEM_H(0X2A, ctx->r6) = ctx->r25;
    // 0x803BB91C: b           L_803BBA90
    // 0x803BB920: sh          $t0, 0x50($a2)
    MEM_H(0X50, ctx->r6) = ctx->r8;
        goto L_803BBA90;
    // 0x803BB920: sh          $t0, 0x50($a2)
    MEM_H(0X50, ctx->r6) = ctx->r8;
L_803BB924:
    // 0x803BB924: jal         0x80037908
    // 0x803BB928: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    func_80037908(rdram, ctx);
        goto after_2;
    // 0x803BB928: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_2:
    // 0x803BB92C: b           L_803BBA94
    // 0x803BB930: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_803BBA94;
    // 0x803BB930: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_803BB934:
    // 0x803BB934: sh          $a3, 0x8($v1)
    MEM_H(0X8, ctx->r3) = ctx->r7;
    // 0x803BB938: lb          $t1, 0x3B($a2)
    ctx->r9 = MEM_B(ctx->r6, 0X3B);
    // 0x803BB93C: sh          $a3, 0x2A($a2)
    MEM_H(0X2A, ctx->r6) = ctx->r7;
    // 0x803BB940: b           L_803BBA90
    // 0x803BB944: sh          $t1, 0x2C($a2)
    MEM_H(0X2C, ctx->r6) = ctx->r9;
        goto L_803BBA90;
    // 0x803BB944: sh          $t1, 0x2C($a2)
    MEM_H(0X2C, ctx->r6) = ctx->r9;
L_803BB948:
    // 0x803BB948: sh          $t2, 0x8($v1)
    MEM_H(0X8, ctx->r3) = ctx->r10;
    // 0x803BB94C: lb          $a0, 0x3B($a2)
    ctx->r4 = MEM_B(ctx->r6, 0X3B);
    // 0x803BB950: jal         0x803BD1EC
    // 0x803BB954: sw          $a2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r6;
    func_803BD1EC(rdram, ctx);
        goto after_3;
    // 0x803BB954: sw          $a2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r6;
    after_3:
    // 0x803BB958: lw          $a2, 0x18($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X18);
    // 0x803BB95C: beq         $v0, $zero, L_803BB974
    if (ctx->r2 == 0) {
        // 0x803BB960: addiu       $t4, $zero, 0x2
        ctx->r12 = ADD32(0, 0X2);
            goto L_803BB974;
    }
    // 0x803BB960: addiu       $t4, $zero, 0x2
    ctx->r12 = ADD32(0, 0X2);
    // 0x803BB964: lh          $t3, 0x24($a2)
    ctx->r11 = MEM_H(ctx->r6, 0X24);
    // 0x803BB968: addiu       $t5, $zero, 0x6
    ctx->r13 = ADD32(0, 0X6);
    // 0x803BB96C: beq         $t3, $zero, L_803BB97C
    if (ctx->r11 == 0) {
        // 0x803BB970: nop
    
            goto L_803BB97C;
    }
    // 0x803BB970: nop

L_803BB974:
    // 0x803BB974: b           L_803BB980
    // 0x803BB978: sh          $t4, 0x2A($a2)
    MEM_H(0X2A, ctx->r6) = ctx->r12;
        goto L_803BB980;
    // 0x803BB978: sh          $t4, 0x2A($a2)
    MEM_H(0X2A, ctx->r6) = ctx->r12;
L_803BB97C:
    // 0x803BB97C: sh          $t5, 0x2A($a2)
    MEM_H(0X2A, ctx->r6) = ctx->r13;
L_803BB980:
    // 0x803BB980: sb          $zero, 0x54($a2)
    MEM_B(0X54, ctx->r6) = 0;
    // 0x803BB984: lb          $t6, 0x54($a2)
    ctx->r14 = MEM_B(ctx->r6, 0X54);
    // 0x803BB988: b           L_803BBA90
    // 0x803BB98C: sh          $t6, 0x50($a2)
    MEM_H(0X50, ctx->r6) = ctx->r14;
        goto L_803BBA90;
    // 0x803BB98C: sh          $t6, 0x50($a2)
    MEM_H(0X50, ctx->r6) = ctx->r14;
L_803BB990:
    // 0x803BB990: lh          $t7, 0x50($a2)
    ctx->r15 = MEM_H(ctx->r6, 0X50);
    // 0x803BB994: addiu       $t8, $zero, 0x3
    ctx->r24 = ADD32(0, 0X3);
    // 0x803BB998: bne         $t7, $zero, L_803BBA14
    if (ctx->r15 != 0) {
        // 0x803BB99C: nop
    
            goto L_803BBA14;
    }
    // 0x803BB99C: nop

    // 0x803BB9A0: sh          $t8, 0x8($v1)
    MEM_H(0X8, ctx->r3) = ctx->r24;
    // 0x803BB9A4: lb          $a0, 0x3B($a2)
    ctx->r4 = MEM_B(ctx->r6, 0X3B);
    // 0x803BB9A8: jal         0x803BD1EC
    // 0x803BB9AC: sw          $a2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r6;
    func_803BD1EC(rdram, ctx);
        goto after_4;
    // 0x803BB9AC: sw          $a2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r6;
    after_4:
    // 0x803BB9B0: lui         $v1, 0x8012
    ctx->r3 = S32(0X8012 << 16);
    // 0x803BB9B4: lw          $a2, 0x18($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X18);
    // 0x803BB9B8: addiu       $v1, $v1, -0x32B0
    ctx->r3 = ADD32(ctx->r3, -0X32B0);
    // 0x803BB9BC: bne         $v0, $zero, L_803BB9F0
    if (ctx->r2 != 0) {
        // 0x803BB9C0: addiu       $a3, $zero, 0x1
        ctx->r7 = ADD32(0, 0X1);
            goto L_803BB9F0;
    }
    // 0x803BB9C0: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    // 0x803BB9C4: lh          $t9, 0x24($a2)
    ctx->r25 = MEM_H(ctx->r6, 0X24);
    // 0x803BB9C8: addiu       $t0, $zero, 0x4
    ctx->r8 = ADD32(0, 0X4);
    // 0x803BB9CC: beq         $t9, $zero, L_803BB9F0
    if (ctx->r25 == 0) {
        // 0x803BB9D0: lui         $a0, 0x803C
        ctx->r4 = S32(0X803C << 16);
            goto L_803BB9F0;
    }
    // 0x803BB9D0: lui         $a0, 0x803C
    ctx->r4 = S32(0X803C << 16);
    // 0x803BB9D4: sh          $t0, 0x2A($a2)
    MEM_H(0X2A, ctx->r6) = ctx->r8;
    // 0x803BB9D8: sh          $a3, 0x8($v1)
    MEM_H(0X8, ctx->r3) = ctx->r7;
    // 0x803BB9DC: addiu       $a0, $a0, -0x4010
    ctx->r4 = ADD32(ctx->r4, -0X4010);
    // 0x803BB9E0: jal         0x8002989C
    // 0x803BB9E4: addiu       $a1, $zero, 0x40
    ctx->r5 = ADD32(0, 0X40);
    func_8002989C(rdram, ctx);
        goto after_5;
    // 0x803BB9E4: addiu       $a1, $zero, 0x40
    ctx->r5 = ADD32(0, 0X40);
    after_5:
    // 0x803BB9E8: b           L_803BBA94
    // 0x803BB9EC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_803BBA94;
    // 0x803BB9EC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_803BB9F0:
    // 0x803BB9F0: lh          $t1, 0x24($a2)
    ctx->r9 = MEM_H(ctx->r6, 0X24);
    // 0x803BB9F4: addiu       $t2, $zero, 0x8
    ctx->r10 = ADD32(0, 0X8);
    // 0x803BB9F8: bne         $t1, $zero, L_803BBA04
    if (ctx->r9 != 0) {
        // 0x803BB9FC: lui         $a0, 0x803C
        ctx->r4 = S32(0X803C << 16);
            goto L_803BBA04;
    }
    // 0x803BB9FC: lui         $a0, 0x803C
    ctx->r4 = S32(0X803C << 16);
    // 0x803BBA00: sh          $t2, 0x2A($a2)
    MEM_H(0X2A, ctx->r6) = ctx->r10;
L_803BBA04:
    // 0x803BBA04: jal         0x800296E0
    // 0x803BBA08: addiu       $a0, $a0, -0x4560
    ctx->r4 = ADD32(ctx->r4, -0X4560);
    func_800296E0(rdram, ctx);
        goto after_6;
    // 0x803BBA08: addiu       $a0, $a0, -0x4560
    ctx->r4 = ADD32(ctx->r4, -0X4560);
    after_6:
    // 0x803BBA0C: b           L_803BBA94
    // 0x803BBA10: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_803BBA94;
    // 0x803BBA10: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_803BBA14:
    // 0x803BBA14: lh          $t3, 0x24($a2)
    ctx->r11 = MEM_H(ctx->r6, 0X24);
    // 0x803BBA18: addiu       $t4, $zero, 0x3
    ctx->r12 = ADD32(0, 0X3);
    // 0x803BBA1C: beq         $t3, $zero, L_803BBA30
    if (ctx->r11 == 0) {
        // 0x803BBA20: addiu       $t5, $zero, 0x4
        ctx->r13 = ADD32(0, 0X4);
            goto L_803BBA30;
    }
    // 0x803BBA20: addiu       $t5, $zero, 0x4
    ctx->r13 = ADD32(0, 0X4);
    // 0x803BBA24: sh          $a3, 0x8($v1)
    MEM_H(0X8, ctx->r3) = ctx->r7;
    // 0x803BBA28: b           L_803BBA38
    // 0x803BBA2C: sh          $a3, 0x2A($a2)
    MEM_H(0X2A, ctx->r6) = ctx->r7;
        goto L_803BBA38;
    // 0x803BBA2C: sh          $a3, 0x2A($a2)
    MEM_H(0X2A, ctx->r6) = ctx->r7;
L_803BBA30:
    // 0x803BBA30: sh          $t4, 0x8($v1)
    MEM_H(0X8, ctx->r3) = ctx->r12;
    // 0x803BBA34: sh          $t5, 0x2A($a2)
    MEM_H(0X2A, ctx->r6) = ctx->r13;
L_803BBA38:
    // 0x803BBA38: sb          $zero, 0x54($a2)
    MEM_B(0X54, ctx->r6) = 0;
    // 0x803BBA3C: lb          $t6, 0x54($a2)
    ctx->r14 = MEM_B(ctx->r6, 0X54);
    // 0x803BBA40: b           L_803BBA90
    // 0x803BBA44: sh          $t6, 0x50($a2)
    MEM_H(0X50, ctx->r6) = ctx->r14;
        goto L_803BBA90;
    // 0x803BBA44: sh          $t6, 0x50($a2)
    MEM_H(0X50, ctx->r6) = ctx->r14;
L_803BBA48:
    // 0x803BBA48: sh          $t7, 0x8($v1)
    MEM_H(0X8, ctx->r3) = ctx->r15;
    // 0x803BBA4C: lh          $t8, 0x50($a2)
    ctx->r24 = MEM_H(ctx->r6, 0X50);
    // 0x803BBA50: addiu       $t9, $zero, 0x5
    ctx->r25 = ADD32(0, 0X5);
    // 0x803BBA54: beq         $t8, $zero, L_803BBA78
    if (ctx->r24 == 0) {
        // 0x803BBA58: addiu       $a0, $zero, 0x81
        ctx->r4 = ADD32(0, 0X81);
            goto L_803BBA78;
    }
    // 0x803BBA58: addiu       $a0, $zero, 0x81
    ctx->r4 = ADD32(0, 0X81);
    // 0x803BBA5C: sh          $t9, 0x2A($a2)
    MEM_H(0X2A, ctx->r6) = ctx->r25;
    // 0x803BBA60: jal         0x80035A74
    // 0x803BBA64: addiu       $a1, $zero, 0x28
    ctx->r5 = ADD32(0, 0X28);
    func_80035A74(rdram, ctx);
        goto after_7;
    // 0x803BBA64: addiu       $a1, $zero, 0x28
    ctx->r5 = ADD32(0, 0X28);
    after_7:
    // 0x803BBA68: jal         0x80037908
    // 0x803BBA6C: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    func_80037908(rdram, ctx);
        goto after_8;
    // 0x803BBA6C: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    after_8:
    // 0x803BBA70: b           L_803BBA94
    // 0x803BBA74: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_803BBA94;
    // 0x803BBA74: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_803BBA78:
    // 0x803BBA78: jal         0x80037908
    // 0x803BBA7C: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    func_80037908(rdram, ctx);
        goto after_9;
    // 0x803BBA7C: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_9:
    // 0x803BBA80: b           L_803BBA94
    // 0x803BBA84: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_803BBA94;
    // 0x803BBA84: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_803BBA88:
    // 0x803BBA88: jal         0x80037908
    // 0x803BBA8C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    func_80037908(rdram, ctx);
        goto after_10;
    // 0x803BBA8C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_10:
L_803BBA90:
    // 0x803BBA90: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_803BBA94:
    // 0x803BBA94: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x803BBA98: jr          $ra
    // 0x803BBA9C: nop

    return;
    // 0x803BBA9C: nop

;}
RECOMP_FUNC void func_803BBAA0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803BBAA0: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x803BBAA4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x803BBAA8: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x803BBAAC: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x803BBAB0: lh          $t6, 0x28($a0)
    ctx->r14 = MEM_H(ctx->r4, 0X28);
    // 0x803BBAB4: addiu       $v1, $zero, 0x2
    ctx->r3 = ADD32(0, 0X2);
    // 0x803BBAB8: bne         $v1, $t6, L_803BBAD4
    if (ctx->r3 != ctx->r14) {
        // 0x803BBABC: or          $a1, $a0, $zero
        ctx->r5 = ctx->r4 | 0;
            goto L_803BBAD4;
    }
    // 0x803BBABC: or          $a1, $a0, $zero
    ctx->r5 = ctx->r4 | 0;
    // 0x803BBAC0: lb          $t7, 0x3B($a0)
    ctx->r15 = MEM_B(ctx->r4, 0X3B);
    // 0x803BBAC4: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x803BBAC8: addiu       $v0, $v0, -0x32B0
    ctx->r2 = ADD32(ctx->r2, -0X32B0);
    // 0x803BBACC: b           L_803BBAE8
    // 0x803BBAD0: sb          $t7, 0x1D($v0)
    MEM_B(0X1D, ctx->r2) = ctx->r15;
        goto L_803BBAE8;
    // 0x803BBAD0: sb          $t7, 0x1D($v0)
    MEM_B(0X1D, ctx->r2) = ctx->r15;
L_803BBAD4:
    // 0x803BBAD4: lb          $t8, 0x3B($a1)
    ctx->r24 = MEM_B(ctx->r5, 0X3B);
    // 0x803BBAD8: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x803BBADC: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x803BBAE0: addiu       $v0, $v0, -0x32B0
    ctx->r2 = ADD32(ctx->r2, -0X32B0);
    // 0x803BBAE4: sb          $t8, -0x3294($at)
    MEM_B(-0X3294, ctx->r1) = ctx->r24;
L_803BBAE8:
    // 0x803BBAE8: lh          $t9, 0x24($a1)
    ctx->r25 = MEM_H(ctx->r5, 0X24);
    // 0x803BBAEC: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x803BBAF0: bne         $t9, $zero, L_803BBBE4
    if (ctx->r25 != 0) {
        // 0x803BBAF4: addiu       $t0, $zero, 0x1
        ctx->r8 = ADD32(0, 0X1);
            goto L_803BBBE4;
    }
    // 0x803BBAF4: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x803BBAF8: jal         0x80034908
    // 0x803BBAFC: sw          $a1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r5;
    func_80034908(rdram, ctx);
        goto after_0;
    // 0x803BBAFC: sw          $a1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r5;
    after_0:
    // 0x803BBB00: bne         $v0, $zero, L_803BBBBC
    if (ctx->r2 != 0) {
        // 0x803BBB04: addiu       $v1, $zero, 0x2
        ctx->r3 = ADD32(0, 0X2);
            goto L_803BBBBC;
    }
    // 0x803BBB04: addiu       $v1, $zero, 0x2
    ctx->r3 = ADD32(0, 0X2);
    // 0x803BBB08: lw          $a2, 0x20($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X20);
    // 0x803BBB0C: lui         $a3, 0x8012
    ctx->r7 = S32(0X8012 << 16);
    // 0x803BBB10: lh          $t0, 0x28($a2)
    ctx->r8 = MEM_H(ctx->r6, 0X28);
    // 0x803BBB14: addiu       $a3, $a3, -0x32B0
    ctx->r7 = ADD32(ctx->r7, -0X32B0);
    // 0x803BBB18: beq         $v1, $t0, L_803BBB34
    if (ctx->r3 == ctx->r8) {
        // 0x803BBB1C: or          $a0, $zero, $zero
        ctx->r4 = 0 | 0;
            goto L_803BBB34;
    }
    // 0x803BBB1C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x803BBB20: lb          $a1, 0x3B($a2)
    ctx->r5 = MEM_B(ctx->r6, 0X3B);
    // 0x803BBB24: jal         0x80033868
    // 0x803BBB28: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    func_80033868(rdram, ctx);
        goto after_1;
    // 0x803BBB28: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_1:
    // 0x803BBB2C: b           L_803BBB78
    // 0x803BBB30: nop

        goto L_803BBB78;
    // 0x803BBB30: nop

L_803BBB34:
    // 0x803BBB34: lhu         $v0, 0x148($a3)
    ctx->r2 = MEM_HU(ctx->r7, 0X148);
    // 0x803BBB38: lb          $t2, 0x135($a3)
    ctx->r10 = MEM_B(ctx->r7, 0X135);
    // 0x803BBB3C: sll         $v1, $v0, 16
    ctx->r3 = S32(ctx->r2 << 16);
    // 0x803BBB40: sra         $t1, $v1, 16
    ctx->r9 = S32(SIGNED(ctx->r3) >> 16);
    // 0x803BBB44: bne         $t2, $zero, L_803BBB60
    if (ctx->r10 != 0) {
        // 0x803BBB48: or          $v1, $t1, $zero
        ctx->r3 = ctx->r9 | 0;
            goto L_803BBB60;
    }
    // 0x803BBB48: or          $v1, $t1, $zero
    ctx->r3 = ctx->r9 | 0;
    // 0x803BBB4C: lb          $t3, 0x134($a3)
    ctx->r11 = MEM_B(ctx->r7, 0X134);
    // 0x803BBB50: addiu       $t4, $zero, 0x1
    ctx->r12 = ADD32(0, 0X1);
    // 0x803BBB54: sllv        $t5, $t4, $t3
    ctx->r13 = S32(ctx->r12 << (ctx->r11 & 31));
    // 0x803BBB58: or          $t6, $v0, $t5
    ctx->r14 = ctx->r2 | ctx->r13;
    // 0x803BBB5C: sh          $t6, 0x148($a3)
    MEM_H(0X148, ctx->r7) = ctx->r14;
L_803BBB60:
    // 0x803BBB60: lb          $a1, 0x3B($a2)
    ctx->r5 = MEM_B(ctx->r6, 0X3B);
    // 0x803BBB64: jal         0x800334B0
    // 0x803BBB68: sh          $v1, 0x1E($sp)
    MEM_H(0X1E, ctx->r29) = ctx->r3;
    func_800334B0(rdram, ctx);
        goto after_2;
    // 0x803BBB68: sh          $v1, 0x1E($sp)
    MEM_H(0X1E, ctx->r29) = ctx->r3;
    after_2:
    // 0x803BBB6C: lh          $v1, 0x1E($sp)
    ctx->r3 = MEM_H(ctx->r29, 0X1E);
    // 0x803BBB70: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x803BBB74: sh          $v1, -0x3168($at)
    MEM_H(-0X3168, ctx->r1) = ctx->r3;
L_803BBB78:
    // 0x803BBB78: jal         0x80035154
    // 0x803BBB7C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    func_80035154(rdram, ctx);
        goto after_3;
    // 0x803BBB7C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_3:
    // 0x803BBB80: beq         $v0, $zero, L_803BBBA0
    if (ctx->r2 == 0) {
        // 0x803BBB84: lui         $at, 0x8012
        ctx->r1 = S32(0X8012 << 16);
            goto L_803BBBA0;
    }
    // 0x803BBB84: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x803BBB88: lui         $a0, 0x803C
    ctx->r4 = S32(0X803C << 16);
    // 0x803BBB8C: sh          $zero, -0x32A6($at)
    MEM_H(-0X32A6, ctx->r1) = 0;
    // 0x803BBB90: jal         0x800296E0
    // 0x803BBB94: addiu       $a0, $a0, -0x3FA8
    ctx->r4 = ADD32(ctx->r4, -0X3FA8);
    func_800296E0(rdram, ctx);
        goto after_4;
    // 0x803BBB94: addiu       $a0, $a0, -0x3FA8
    ctx->r4 = ADD32(ctx->r4, -0X3FA8);
    after_4:
    // 0x803BBB98: b           L_803BBF04
    // 0x803BBB9C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_803BBF04;
    // 0x803BBB9C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_803BBBA0:
    // 0x803BBBA0: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x803BBBA4: nop

    // 0x803BBBA8: lh          $a1, 0x28($a0)
    ctx->r5 = MEM_H(ctx->r4, 0X28);
    // 0x803BBBAC: jal         0x803BD23C
    // 0x803BBBB0: nop

    func_803BD23C(rdram, ctx);
        goto after_5;
    // 0x803BBBB0: nop

    after_5:
    // 0x803BBBB4: b           L_803BBEF4
    // 0x803BBBB8: nop

        goto L_803BBEF4;
    // 0x803BBBB8: nop

L_803BBBBC:
    // 0x803BBBBC: lw          $t9, 0x20($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X20);
    // 0x803BBBC0: addiu       $t8, $zero, 0x7
    ctx->r24 = ADD32(0, 0X7);
    // 0x803BBBC4: jal         0x800357AC
    // 0x803BBBC8: sh          $t8, 0x2A($t9)
    MEM_H(0X2A, ctx->r25) = ctx->r24;
    func_800357AC(rdram, ctx);
        goto after_6;
    // 0x803BBBC8: sh          $t8, 0x2A($t9)
    MEM_H(0X2A, ctx->r25) = ctx->r24;
    after_6:
    // 0x803BBBCC: lui         $a0, 0x803C
    ctx->r4 = S32(0X803C << 16);
    // 0x803BBBD0: addiu       $a0, $a0, -0x3FDC
    ctx->r4 = ADD32(ctx->r4, -0X3FDC);
    // 0x803BBBD4: jal         0x8002989C
    // 0x803BBBD8: addiu       $a1, $zero, 0x30
    ctx->r5 = ADD32(0, 0X30);
    func_8002989C(rdram, ctx);
        goto after_7;
    // 0x803BBBD8: addiu       $a1, $zero, 0x30
    ctx->r5 = ADD32(0, 0X30);
    after_7:
    // 0x803BBBDC: b           L_803BBF04
    // 0x803BBBE0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_803BBF04;
    // 0x803BBBE0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_803BBBE4:
    // 0x803BBBE4: sb          $t0, 0x0($v0)
    MEM_B(0X0, ctx->r2) = ctx->r8;
    // 0x803BBBE8: lh          $t1, 0x28($a1)
    ctx->r9 = MEM_H(ctx->r5, 0X28);
    // 0x803BBBEC: nop

    // 0x803BBBF0: beq         $v1, $t1, L_803BBEC8
    if (ctx->r3 == ctx->r9) {
        // 0x803BBBF4: nop
    
            goto L_803BBEC8;
    }
    // 0x803BBBF4: nop

    // 0x803BBBF8: lb          $t2, 0x3B($a1)
    ctx->r10 = MEM_B(ctx->r5, 0X3B);
    // 0x803BBBFC: lui         $t3, 0x8011
    ctx->r11 = S32(0X8011 << 16);
    // 0x803BBC00: sll         $t4, $t2, 2
    ctx->r12 = S32(ctx->r10 << 2);
    // 0x803BBC04: addu        $t4, $t4, $t2
    ctx->r12 = ADD32(ctx->r12, ctx->r10);
    // 0x803BBC08: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x803BBC0C: subu        $t4, $t4, $t2
    ctx->r12 = SUB32(ctx->r12, ctx->r10);
    // 0x803BBC10: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x803BBC14: subu        $t4, $t4, $t2
    ctx->r12 = SUB32(ctx->r12, ctx->r10);
    // 0x803BBC18: sll         $t4, $t4, 3
    ctx->r12 = S32(ctx->r12 << 3);
    // 0x803BBC1C: subu        $t4, $t4, $t2
    ctx->r12 = SUB32(ctx->r12, ctx->r10);
    // 0x803BBC20: sll         $t4, $t4, 3
    ctx->r12 = S32(ctx->r12 << 3);
    // 0x803BBC24: addu        $t3, $t3, $t4
    ctx->r11 = ADD32(ctx->r11, ctx->r12);
    // 0x803BBC28: lb          $t3, 0x6A94($t3)
    ctx->r11 = MEM_B(ctx->r11, 0X6A94);
    // 0x803BBC2C: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x803BBC30: bne         $t3, $zero, L_803BBC64
    if (ctx->r11 != 0) {
        // 0x803BBC34: addiu       $t7, $zero, 0x2
        ctx->r15 = ADD32(0, 0X2);
            goto L_803BBC64;
    }
    // 0x803BBC34: addiu       $t7, $zero, 0x2
    ctx->r15 = ADD32(0, 0X2);
    // 0x803BBC38: addiu       $t5, $zero, 0x3
    ctx->r13 = ADD32(0, 0X3);
    // 0x803BBC3C: sb          $zero, 0xF($v0)
    MEM_B(0XF, ctx->r2) = 0;
    // 0x803BBC40: sb          $t5, 0xC($v0)
    MEM_B(0XC, ctx->r2) = ctx->r13;
    // 0x803BBC44: jal         0x8027F2F8
    // 0x803BBC48: sw          $a1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r5;
    LOOKUP_FUNC(0x8027F2F8)(rdram, ctx);
        goto after_8;
    // 0x803BBC48: sw          $a1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r5;
    after_8:
    // 0x803BBC4C: jal         0x80036278
    // 0x803BBC50: nop

    func_80036278(rdram, ctx);
        goto after_9;
    // 0x803BBC50: nop

    after_9:
    // 0x803BBC54: jal         0x802805B4
    // 0x803BBC58: nop

    LOOKUP_FUNC(0x802805B4)(rdram, ctx);
        goto after_10;
    // 0x803BBC58: nop

    after_10:
    // 0x803BBC5C: b           L_803BBC90
    // 0x803BBC60: lw          $t8, 0x20($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X20);
        goto L_803BBC90;
    // 0x803BBC60: lw          $t8, 0x20($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X20);
L_803BBC64:
    // 0x803BBC64: sb          $t6, 0xF($v0)
    MEM_B(0XF, ctx->r2) = ctx->r14;
    // 0x803BBC68: sb          $t7, 0xC($v0)
    MEM_B(0XC, ctx->r2) = ctx->r15;
    // 0x803BBC6C: jal         0x8027EC64
    // 0x803BBC70: sw          $a1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r5;
    LOOKUP_FUNC(0x8027EC64)(rdram, ctx);
        goto after_11;
    // 0x803BBC70: sw          $a1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r5;
    after_11:
    // 0x803BBC74: jal         0x8027F2F8
    // 0x803BBC78: nop

    LOOKUP_FUNC(0x8027F2F8)(rdram, ctx);
        goto after_12;
    // 0x803BBC78: nop

    after_12:
    // 0x803BBC7C: jal         0x80036278
    // 0x803BBC80: nop

    func_80036278(rdram, ctx);
        goto after_13;
    // 0x803BBC80: nop

    after_13:
    // 0x803BBC84: jal         0x802805B4
    // 0x803BBC88: nop

    LOOKUP_FUNC(0x802805B4)(rdram, ctx);
        goto after_14;
    // 0x803BBC88: nop

    after_14:
    // 0x803BBC8C: lw          $t8, 0x20($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X20);
L_803BBC90:
    // 0x803BBC90: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x803BBC94: lb          $a1, 0x3B($t8)
    ctx->r5 = MEM_B(ctx->r24, 0X3B);
    // 0x803BBC98: jal         0x80033E1C
    // 0x803BBC9C: nop

    func_80033E1C(rdram, ctx);
        goto after_15;
    // 0x803BBC9C: nop

    after_15:
    // 0x803BBCA0: jal         0x80039280
    // 0x803BBCA4: nop

    func_80039280(rdram, ctx);
        goto after_16;
    // 0x803BBCA4: nop

    after_16:
    // 0x803BBCA8: jal         0x8028079C
    // 0x803BBCAC: nop

    LOOKUP_FUNC(0x8028079C)(rdram, ctx);
        goto after_17;
    // 0x803BBCAC: nop

    after_17:
    // 0x803BBCB0: lui         $t9, 0x8012
    ctx->r25 = S32(0X8012 << 16);
    // 0x803BBCB4: lb          $t9, -0x32A1($t9)
    ctx->r25 = MEM_B(ctx->r25, -0X32A1);
    // 0x803BBCB8: lui         $v1, 0x8011
    ctx->r3 = S32(0X8011 << 16);
    // 0x803BBCBC: sll         $t0, $t9, 2
    ctx->r8 = S32(ctx->r25 << 2);
    // 0x803BBCC0: subu        $t0, $t0, $t9
    ctx->r8 = SUB32(ctx->r8, ctx->r25);
    // 0x803BBCC4: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x803BBCC8: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x803BBCCC: sll         $t0, $t0, 3
    ctx->r8 = S32(ctx->r8 << 3);
    // 0x803BBCD0: subu        $t0, $t0, $t9
    ctx->r8 = SUB32(ctx->r8, ctx->r25);
    // 0x803BBCD4: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x803BBCD8: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x803BBCDC: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x803BBCE0: subu        $t0, $t0, $t9
    ctx->r8 = SUB32(ctx->r8, ctx->r25);
    // 0x803BBCE4: addiu       $v1, $v1, -0x2F80
    ctx->r3 = ADD32(ctx->r3, -0X2F80);
    // 0x803BBCE8: sll         $t0, $t0, 3
    ctx->r8 = S32(ctx->r8 << 3);
    // 0x803BBCEC: addu        $t1, $v1, $t0
    ctx->r9 = ADD32(ctx->r3, ctx->r8);
    // 0x803BBCF0: lbu         $t2, 0x6($t1)
    ctx->r10 = MEM_BU(ctx->r9, 0X6);
    // 0x803BBCF4: nop

    // 0x803BBCF8: bne         $t2, $zero, L_803BBD1C
    if (ctx->r10 != 0) {
        // 0x803BBCFC: nop
    
            goto L_803BBD1C;
    }
    // 0x803BBCFC: nop

    // 0x803BBD00: jal         0x800382A8
    // 0x803BBD04: nop

    func_800382A8(rdram, ctx);
        goto after_18;
    // 0x803BBD04: nop

    after_18:
    // 0x803BBD08: jal         0x800384C4
    // 0x803BBD0C: nop

    func_800384C4(rdram, ctx);
        goto after_19;
    // 0x803BBD0C: nop

    after_19:
    // 0x803BBD10: lui         $v1, 0x8011
    ctx->r3 = S32(0X8011 << 16);
    // 0x803BBD14: b           L_803BBD3C
    // 0x803BBD18: addiu       $v1, $v1, -0x2F80
    ctx->r3 = ADD32(ctx->r3, -0X2F80);
        goto L_803BBD3C;
    // 0x803BBD18: addiu       $v1, $v1, -0x2F80
    ctx->r3 = ADD32(ctx->r3, -0X2F80);
L_803BBD1C:
    // 0x803BBD1C: jal         0x8003294C
    // 0x803BBD20: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    func_8003294C(rdram, ctx);
        goto after_20;
    // 0x803BBD20: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_20:
    // 0x803BBD24: jal         0x80032310
    // 0x803BBD28: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    func_80032310(rdram, ctx);
        goto after_21;
    // 0x803BBD28: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_21:
    // 0x803BBD2C: jal         0x80032EC0
    // 0x803BBD30: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    func_80032EC0(rdram, ctx);
        goto after_22;
    // 0x803BBD30: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_22:
    // 0x803BBD34: lui         $v1, 0x8011
    ctx->r3 = S32(0X8011 << 16);
    // 0x803BBD38: addiu       $v1, $v1, -0x2F80
    ctx->r3 = ADD32(ctx->r3, -0X2F80);
L_803BBD3C:
    // 0x803BBD3C: lui         $t4, 0x8012
    ctx->r12 = S32(0X8012 << 16);
    // 0x803BBD40: lb          $t4, -0x32A1($t4)
    ctx->r12 = MEM_B(ctx->r12, -0X32A1);
    // 0x803BBD44: nop

    // 0x803BBD48: sll         $t3, $t4, 2
    ctx->r11 = S32(ctx->r12 << 2);
    // 0x803BBD4C: subu        $t3, $t3, $t4
    ctx->r11 = SUB32(ctx->r11, ctx->r12);
    // 0x803BBD50: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x803BBD54: addu        $t3, $t3, $t4
    ctx->r11 = ADD32(ctx->r11, ctx->r12);
    // 0x803BBD58: sll         $t3, $t3, 3
    ctx->r11 = S32(ctx->r11 << 3);
    // 0x803BBD5C: subu        $t3, $t3, $t4
    ctx->r11 = SUB32(ctx->r11, ctx->r12);
    // 0x803BBD60: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x803BBD64: addu        $t3, $t3, $t4
    ctx->r11 = ADD32(ctx->r11, ctx->r12);
    // 0x803BBD68: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x803BBD6C: subu        $t3, $t3, $t4
    ctx->r11 = SUB32(ctx->r11, ctx->r12);
    // 0x803BBD70: sll         $t3, $t3, 3
    ctx->r11 = S32(ctx->r11 << 3);
    // 0x803BBD74: addu        $t5, $v1, $t3
    ctx->r13 = ADD32(ctx->r3, ctx->r11);
    // 0x803BBD78: lb          $a0, 0x1($t5)
    ctx->r4 = MEM_B(ctx->r13, 0X1);
    // 0x803BBD7C: jal         0x80049A4C
    // 0x803BBD80: nop

    func_80049A4C(rdram, ctx);
        goto after_23;
    // 0x803BBD80: nop

    after_23:
    // 0x803BBD84: lui         $v1, 0x8011
    ctx->r3 = S32(0X8011 << 16);
    // 0x803BBD88: bne         $v0, $zero, L_803BBDEC
    if (ctx->r2 != 0) {
        // 0x803BBD8C: addiu       $v1, $v1, -0x2F80
        ctx->r3 = ADD32(ctx->r3, -0X2F80);
            goto L_803BBDEC;
    }
    // 0x803BBD8C: addiu       $v1, $v1, -0x2F80
    ctx->r3 = ADD32(ctx->r3, -0X2F80);
    // 0x803BBD90: lb          $t6, 0x0($v1)
    ctx->r14 = MEM_B(ctx->r3, 0X0);
    // 0x803BBD94: lui         $t8, 0x8012
    ctx->r24 = S32(0X8012 << 16);
    // 0x803BBD98: addiu       $t7, $t6, -0x1
    ctx->r15 = ADD32(ctx->r14, -0X1);
    // 0x803BBD9C: sb          $t7, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r15;
    // 0x803BBDA0: lb          $t8, -0x32A1($t8)
    ctx->r24 = MEM_B(ctx->r24, -0X32A1);
    // 0x803BBDA4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x803BBDA8: sll         $t9, $t8, 2
    ctx->r25 = S32(ctx->r24 << 2);
    // 0x803BBDAC: subu        $t9, $t9, $t8
    ctx->r25 = SUB32(ctx->r25, ctx->r24);
    // 0x803BBDB0: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x803BBDB4: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x803BBDB8: sll         $t9, $t9, 3
    ctx->r25 = S32(ctx->r25 << 3);
    // 0x803BBDBC: subu        $t9, $t9, $t8
    ctx->r25 = SUB32(ctx->r25, ctx->r24);
    // 0x803BBDC0: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x803BBDC4: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x803BBDC8: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x803BBDCC: subu        $t9, $t9, $t8
    ctx->r25 = SUB32(ctx->r25, ctx->r24);
    // 0x803BBDD0: sll         $t9, $t9, 3
    ctx->r25 = S32(ctx->r25 << 3);
    // 0x803BBDD4: addu        $t0, $v1, $t9
    ctx->r8 = ADD32(ctx->r3, ctx->r25);
    // 0x803BBDD8: lb          $a0, 0x1($t0)
    ctx->r4 = MEM_B(ctx->r8, 0X1);
    // 0x803BBDDC: jal         0x8003D934
    // 0x803BBDE0: nop

    func_8003D934(rdram, ctx);
        goto after_24;
    // 0x803BBDE0: nop

    after_24:
    // 0x803BBDE4: b           L_803BBEF4
    // 0x803BBDE8: nop

        goto L_803BBEF4;
    // 0x803BBDE8: nop

L_803BBDEC:
    // 0x803BBDEC: lui         $t1, 0x8012
    ctx->r9 = S32(0X8012 << 16);
    // 0x803BBDF0: lb          $t1, -0x32A1($t1)
    ctx->r9 = MEM_B(ctx->r9, -0X32A1);
    // 0x803BBDF4: nop

    // 0x803BBDF8: bne         $t1, $zero, L_803BBE28
    if (ctx->r9 != 0) {
        // 0x803BBDFC: nop
    
            goto L_803BBE28;
    }
    // 0x803BBDFC: nop

    // 0x803BBE00: lb          $t2, 0x1($v1)
    ctx->r10 = MEM_B(ctx->r3, 0X1);
    // 0x803BBE04: nop

    // 0x803BBE08: slti        $at, $t2, 0x45
    ctx->r1 = SIGNED(ctx->r10) < 0X45 ? 1 : 0;
    // 0x803BBE0C: bne         $at, $zero, L_803BBE38
    if (ctx->r1 != 0) {
        // 0x803BBE10: nop
    
            goto L_803BBE38;
    }
    // 0x803BBE10: nop

    // 0x803BBE14: lb          $t4, 0x0($v1)
    ctx->r12 = MEM_B(ctx->r3, 0X0);
    // 0x803BBE18: nop

    // 0x803BBE1C: addiu       $t3, $t4, -0x1
    ctx->r11 = ADD32(ctx->r12, -0X1);
    // 0x803BBE20: b           L_803BBE38
    // 0x803BBE24: sb          $t3, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r11;
        goto L_803BBE38;
    // 0x803BBE24: sb          $t3, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r11;
L_803BBE28:
    // 0x803BBE28: lb          $t5, 0x3398($v1)
    ctx->r13 = MEM_B(ctx->r3, 0X3398);
    // 0x803BBE2C: nop

    // 0x803BBE30: addiu       $t6, $t5, -0x1
    ctx->r14 = ADD32(ctx->r13, -0X1);
    // 0x803BBE34: sb          $t6, 0x3398($v1)
    MEM_B(0X3398, ctx->r3) = ctx->r14;
L_803BBE38:
    // 0x803BBE38: jal         0x8004974C
    // 0x803BBE3C: nop

    func_8004974C(rdram, ctx);
        goto after_25;
    // 0x803BBE3C: nop

    after_25:
    // 0x803BBE40: lui         $v1, 0x8011
    ctx->r3 = S32(0X8011 << 16);
    // 0x803BBE44: slti        $at, $v0, 0x3
    ctx->r1 = SIGNED(ctx->r2) < 0X3 ? 1 : 0;
    // 0x803BBE48: beq         $at, $zero, L_803BBEA8
    if (ctx->r1 == 0) {
        // 0x803BBE4C: addiu       $v1, $v1, -0x2F80
        ctx->r3 = ADD32(ctx->r3, -0X2F80);
            goto L_803BBEA8;
    }
    // 0x803BBE4C: addiu       $v1, $v1, -0x2F80
    ctx->r3 = ADD32(ctx->r3, -0X2F80);
    // 0x803BBE50: lui         $t7, 0x8012
    ctx->r15 = S32(0X8012 << 16);
    // 0x803BBE54: lb          $t7, -0x32A1($t7)
    ctx->r15 = MEM_B(ctx->r15, -0X32A1);
    // 0x803BBE58: nop

    // 0x803BBE5C: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x803BBE60: subu        $t8, $t8, $t7
    ctx->r24 = SUB32(ctx->r24, ctx->r15);
    // 0x803BBE64: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x803BBE68: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x803BBE6C: sll         $t8, $t8, 3
    ctx->r24 = S32(ctx->r24 << 3);
    // 0x803BBE70: subu        $t8, $t8, $t7
    ctx->r24 = SUB32(ctx->r24, ctx->r15);
    // 0x803BBE74: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x803BBE78: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x803BBE7C: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x803BBE80: subu        $t8, $t8, $t7
    ctx->r24 = SUB32(ctx->r24, ctx->r15);
    // 0x803BBE84: sll         $t8, $t8, 3
    ctx->r24 = S32(ctx->r24 << 3);
    // 0x803BBE88: addu        $t9, $v1, $t8
    ctx->r25 = ADD32(ctx->r3, ctx->r24);
    // 0x803BBE8C: lb          $v0, 0x1($t9)
    ctx->r2 = MEM_B(ctx->r25, 0X1);
    // 0x803BBE90: nop

    // 0x803BBE94: blez        $v0, L_803BBEA8
    if (SIGNED(ctx->r2) <= 0) {
        // 0x803BBE98: addiu       $a0, $v0, -0x1
        ctx->r4 = ADD32(ctx->r2, -0X1);
            goto L_803BBEA8;
    }
    // 0x803BBE98: addiu       $a0, $v0, -0x1
    ctx->r4 = ADD32(ctx->r2, -0X1);
    // 0x803BBE9C: sll         $t0, $a0, 24
    ctx->r8 = S32(ctx->r4 << 24);
    // 0x803BBEA0: jal         0x800411D4
    // 0x803BBEA4: sra         $a0, $t0, 24
    ctx->r4 = S32(SIGNED(ctx->r8) >> 24);
    func_800411D4(rdram, ctx);
        goto after_26;
    // 0x803BBEA4: sra         $a0, $t0, 24
    ctx->r4 = S32(SIGNED(ctx->r8) >> 24);
    after_26:
L_803BBEA8:
    // 0x803BBEA8: jal         0x80280BD8
    // 0x803BBEAC: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    LOOKUP_FUNC(0x80280BD8)(rdram, ctx);
        goto after_27;
    // 0x803BBEAC: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_27:
    // 0x803BBEB0: jal         0x80041AB8
    // 0x803BBEB4: nop

    func_80041AB8(rdram, ctx);
        goto after_28;
    // 0x803BBEB4: nop

    after_28:
    // 0x803BBEB8: jal         0x80280B2C
    // 0x803BBEBC: nop

    LOOKUP_FUNC(0x80280B2C)(rdram, ctx);
        goto after_29;
    // 0x803BBEBC: nop

    after_29:
    // 0x803BBEC0: b           L_803BBEF4
    // 0x803BBEC4: nop

        goto L_803BBEF4;
    // 0x803BBEC4: nop

L_803BBEC8:
    // 0x803BBEC8: jal         0x80036B1C
    // 0x803BBECC: sw          $a1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r5;
    func_80036B1C(rdram, ctx);
        goto after_30;
    // 0x803BBECC: sw          $a1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r5;
    after_30:
    // 0x803BBED0: lw          $t2, 0x20($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X20);
    // 0x803BBED4: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x803BBED8: lb          $a1, 0x3B($t2)
    ctx->r5 = MEM_B(ctx->r10, 0X3B);
    // 0x803BBEDC: jal         0x800335F4
    // 0x803BBEE0: nop

    func_800335F4(rdram, ctx);
        goto after_31;
    // 0x803BBEE0: nop

    after_31:
    // 0x803BBEE4: addiu       $t4, $zero, 0x6
    ctx->r12 = ADD32(0, 0X6);
    // 0x803BBEE8: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x803BBEEC: jal         0x80038CAC
    // 0x803BBEF0: sb          $t4, -0x32A4($at)
    MEM_B(-0X32A4, ctx->r1) = ctx->r12;
    func_80038CAC(rdram, ctx);
        goto after_32;
    // 0x803BBEF0: sb          $t4, -0x32A4($at)
    MEM_B(-0X32A4, ctx->r1) = ctx->r12;
    after_32:
L_803BBEF4:
    // 0x803BBEF4: lui         $a0, 0x803C
    ctx->r4 = S32(0X803C << 16);
    // 0x803BBEF8: jal         0x800296E0
    // 0x803BBEFC: addiu       $a0, $a0, -0x40F0
    ctx->r4 = ADD32(ctx->r4, -0X40F0);
    func_800296E0(rdram, ctx);
        goto after_33;
    // 0x803BBEFC: addiu       $a0, $a0, -0x40F0
    ctx->r4 = ADD32(ctx->r4, -0X40F0);
    after_33:
    // 0x803BBF00: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_803BBF04:
    // 0x803BBF04: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x803BBF08: jr          $ra
    // 0x803BBF0C: nop

    return;
    // 0x803BBF0C: nop

;}
RECOMP_FUNC void func_803BBF10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803BBF10: lui         $v1, 0x8012
    ctx->r3 = S32(0X8012 << 16);
    // 0x803BBF14: addiu       $v1, $v1, -0x30A0
    ctx->r3 = ADD32(ctx->r3, -0X30A0);
    // 0x803BBF18: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x803BBF1C: sb          $zero, 0x0($v1)
    MEM_B(0X0, ctx->r3) = 0;
    // 0x803BBF20: lb          $t7, 0x0($v1)
    ctx->r15 = MEM_B(ctx->r3, 0X0);
    // 0x803BBF24: addiu       $v0, $v0, 0xB72
    ctx->r2 = ADD32(ctx->r2, 0XB72);
    // 0x803BBF28: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x803BBF2C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x803BBF30: sh          $zero, 0x0($v0)
    MEM_H(0X0, ctx->r2) = 0;
    // 0x803BBF34: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x803BBF38: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x803BBF3C: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x803BBF40: jal         0x80039CB4
    // 0x803BBF44: sb          $t7, -0x3088($at)
    MEM_B(-0X3088, ctx->r1) = ctx->r15;
    func_80039CB4(rdram, ctx);
        goto after_0;
    // 0x803BBF44: sb          $t7, -0x3088($at)
    MEM_B(-0X3088, ctx->r1) = ctx->r15;
    after_0:
    // 0x803BBF48: lui         $a0, 0x803C
    ctx->r4 = S32(0X803C << 16);
    // 0x803BBF4C: jal         0x800296E0
    // 0x803BBF50: addiu       $a0, $a0, -0x409C
    ctx->r4 = ADD32(ctx->r4, -0X409C);
    func_800296E0(rdram, ctx);
        goto after_1;
    // 0x803BBF50: addiu       $a0, $a0, -0x409C
    ctx->r4 = ADD32(ctx->r4, -0X409C);
    after_1:
    // 0x803BBF54: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x803BBF58: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x803BBF5C: jr          $ra
    // 0x803BBF60: nop

    return;
    // 0x803BBF60: nop

;}
RECOMP_FUNC void func_803BBF64(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803BBF64: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x803BBF68: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x803BBF6C: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x803BBF70: lh          $t7, 0x24($a0)
    ctx->r15 = MEM_H(ctx->r4, 0X24);
    // 0x803BBF74: addiu       $t6, $zero, 0x3
    ctx->r14 = ADD32(0, 0X3);
    // 0x803BBF78: bne         $t7, $zero, L_803BBF98
    if (ctx->r15 != 0) {
        // 0x803BBF7C: sh          $t6, 0x2A($a0)
        MEM_H(0X2A, ctx->r4) = ctx->r14;
            goto L_803BBF98;
    }
    // 0x803BBF7C: sh          $t6, 0x2A($a0)
    MEM_H(0X2A, ctx->r4) = ctx->r14;
    // 0x803BBF80: lui         $a0, 0x803C
    ctx->r4 = S32(0X803C << 16);
    // 0x803BBF84: addiu       $a0, $a0, -0x3FDC
    ctx->r4 = ADD32(ctx->r4, -0X3FDC);
    // 0x803BBF88: jal         0x8002989C
    // 0x803BBF8C: addiu       $a1, $zero, 0x40
    ctx->r5 = ADD32(0, 0X40);
    func_8002989C(rdram, ctx);
        goto after_0;
    // 0x803BBF8C: addiu       $a1, $zero, 0x40
    ctx->r5 = ADD32(0, 0X40);
    after_0:
    // 0x803BBF90: b           L_803BBFAC
    // 0x803BBF94: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_803BBFAC;
    // 0x803BBF94: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_803BBF98:
    // 0x803BBF98: lui         $a0, 0x803C
    ctx->r4 = S32(0X803C << 16);
    // 0x803BBF9C: addiu       $a0, $a0, -0x4048
    ctx->r4 = ADD32(ctx->r4, -0X4048);
    // 0x803BBFA0: jal         0x8002989C
    // 0x803BBFA4: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    func_8002989C(rdram, ctx);
        goto after_1;
    // 0x803BBFA4: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    after_1:
    // 0x803BBFA8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_803BBFAC:
    // 0x803BBFAC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x803BBFB0: jr          $ra
    // 0x803BBFB4: nop

    return;
    // 0x803BBFB4: nop

;}
RECOMP_FUNC void func_803BBFB8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803BBFB8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x803BBFBC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x803BBFC0: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x803BBFC4: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x803BBFC8: lb          $a0, 0x3B($a0)
    ctx->r4 = MEM_B(ctx->r4, 0X3B);
    // 0x803BBFCC: jal         0x803BD368
    // 0x803BBFD0: nop

    func_803BD368(rdram, ctx);
        goto after_0;
    // 0x803BBFD0: nop

    after_0:
    // 0x803BBFD4: addiu       $t7, $v0, 0x1
    ctx->r15 = ADD32(ctx->r2, 0X1);
    // 0x803BBFD8: jal         0x80037908
    // 0x803BBFDC: andi        $a0, $t7, 0xFF
    ctx->r4 = ctx->r15 & 0XFF;
    func_80037908(rdram, ctx);
        goto after_1;
    // 0x803BBFDC: andi        $a0, $t7, 0xFF
    ctx->r4 = ctx->r15 & 0XFF;
    after_1:
    // 0x803BBFE0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x803BBFE4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x803BBFE8: jr          $ra
    // 0x803BBFEC: nop

    return;
    // 0x803BBFEC: nop

;}
RECOMP_FUNC void func_803BBFF0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803BBFF0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x803BBFF4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x803BBFF8: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x803BBFFC: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x803BC000: sh          $t6, 0x2A($a0)
    MEM_H(0X2A, ctx->r4) = ctx->r14;
    // 0x803BC004: lui         $a0, 0x803C
    ctx->r4 = S32(0X803C << 16);
    // 0x803BC008: addiu       $a0, $a0, -0x481C
    ctx->r4 = ADD32(ctx->r4, -0X481C);
    // 0x803BC00C: jal         0x8002989C
    // 0x803BC010: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    func_8002989C(rdram, ctx);
        goto after_0;
    // 0x803BC010: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    after_0:
    // 0x803BC014: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x803BC018: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x803BC01C: jr          $ra
    // 0x803BC020: nop

    return;
    // 0x803BC020: nop

;}
RECOMP_FUNC void func_803BC024(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803BC024: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x803BC028: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x803BC02C: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x803BC030: addiu       $t6, $zero, 0x4
    ctx->r14 = ADD32(0, 0X4);
    // 0x803BC034: sh          $t6, 0x2A($a0)
    MEM_H(0X2A, ctx->r4) = ctx->r14;
    // 0x803BC038: lui         $a0, 0x803C
    ctx->r4 = S32(0X803C << 16);
    // 0x803BC03C: addiu       $a0, $a0, -0x481C
    ctx->r4 = ADD32(ctx->r4, -0X481C);
    // 0x803BC040: jal         0x8002989C
    // 0x803BC044: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    func_8002989C(rdram, ctx);
        goto after_0;
    // 0x803BC044: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    after_0:
    // 0x803BC048: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x803BC04C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x803BC050: jr          $ra
    // 0x803BC054: nop

    return;
    // 0x803BC054: nop

;}
RECOMP_FUNC void func_803BC058(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803BC058: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x803BC05C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x803BC060: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x803BC064: lui         $a0, 0x803C
    ctx->r4 = S32(0X803C << 16);
    // 0x803BC068: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x803BC06C: jal         0x80029220
    // 0x803BC070: addiu       $a0, $a0, -0x2B50
    ctx->r4 = ADD32(ctx->r4, -0X2B50);
    func_80029220(rdram, ctx);
        goto after_0;
    // 0x803BC070: addiu       $a0, $a0, -0x2B50
    ctx->r4 = ADD32(ctx->r4, -0X2B50);
    after_0:
    // 0x803BC074: lui         $a0, 0x803C
    ctx->r4 = S32(0X803C << 16);
    // 0x803BC078: jal         0x800296E0
    // 0x803BC07C: addiu       $a0, $a0, -0x3F70
    ctx->r4 = ADD32(ctx->r4, -0X3F70);
    func_800296E0(rdram, ctx);
        goto after_1;
    // 0x803BC07C: addiu       $a0, $a0, -0x3F70
    ctx->r4 = ADD32(ctx->r4, -0X3F70);
    after_1:
    // 0x803BC080: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x803BC084: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x803BC088: jr          $ra
    // 0x803BC08C: nop

    return;
    // 0x803BC08C: nop

;}
RECOMP_FUNC void func_803BC090(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803BC090: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x803BC094: lh          $v0, -0x32A6($v0)
    ctx->r2 = MEM_H(ctx->r2, -0X32A6);
    // 0x803BC098: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x803BC09C: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x803BC0A0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x803BC0A4: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x803BC0A8: bne         $v0, $at, L_803BC0C4
    if (ctx->r2 != ctx->r1) {
        // 0x803BC0AC: or          $a2, $a0, $zero
        ctx->r6 = ctx->r4 | 0;
            goto L_803BC0C4;
    }
    // 0x803BC0AC: or          $a2, $a0, $zero
    ctx->r6 = ctx->r4 | 0;
    // 0x803BC0B0: lui         $a0, 0x803C
    ctx->r4 = S32(0X803C << 16);
    // 0x803BC0B4: jal         0x800296E0
    // 0x803BC0B8: addiu       $a0, $a0, -0x40F0
    ctx->r4 = ADD32(ctx->r4, -0X40F0);
    func_800296E0(rdram, ctx);
        goto after_0;
    // 0x803BC0B8: addiu       $a0, $a0, -0x40F0
    ctx->r4 = ADD32(ctx->r4, -0X40F0);
    after_0:
    // 0x803BC0BC: b           L_803BC13C
    // 0x803BC0C0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_803BC13C;
    // 0x803BC0C0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_803BC0C4:
    // 0x803BC0C4: slti        $at, $v0, 0x6
    ctx->r1 = SIGNED(ctx->r2) < 0X6 ? 1 : 0;
    // 0x803BC0C8: bne         $at, $zero, L_803BC138
    if (ctx->r1 != 0) {
        // 0x803BC0CC: addiu       $t6, $zero, 0x7
        ctx->r14 = ADD32(0, 0X7);
            goto L_803BC138;
    }
    // 0x803BC0CC: addiu       $t6, $zero, 0x7
    ctx->r14 = ADD32(0, 0X7);
    // 0x803BC0D0: lh          $t7, 0x28($a2)
    ctx->r15 = MEM_H(ctx->r6, 0X28);
    // 0x803BC0D4: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x803BC0D8: beq         $t7, $at, L_803BC0FC
    if (ctx->r15 == ctx->r1) {
        // 0x803BC0DC: sh          $t6, 0x2A($a2)
        MEM_H(0X2A, ctx->r6) = ctx->r14;
            goto L_803BC0FC;
    }
    // 0x803BC0DC: sh          $t6, 0x2A($a2)
    MEM_H(0X2A, ctx->r6) = ctx->r14;
    // 0x803BC0E0: lb          $a1, 0x3B($a2)
    ctx->r5 = MEM_B(ctx->r6, 0X3B);
    // 0x803BC0E4: sw          $a2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r6;
    // 0x803BC0E8: jal         0x800337B8
    // 0x803BC0EC: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    func_800337B8(rdram, ctx);
        goto after_1;
    // 0x803BC0EC: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_1:
    // 0x803BC0F0: lw          $a2, 0x18($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X18);
    // 0x803BC0F4: b           L_803BC118
    // 0x803BC0F8: lh          $a1, 0x28($a2)
    ctx->r5 = MEM_H(ctx->r6, 0X28);
        goto L_803BC118;
    // 0x803BC0F8: lh          $a1, 0x28($a2)
    ctx->r5 = MEM_H(ctx->r6, 0X28);
L_803BC0FC:
    // 0x803BC0FC: lb          $a1, 0x3B($a2)
    ctx->r5 = MEM_B(ctx->r6, 0X3B);
    // 0x803BC100: sw          $a2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r6;
    // 0x803BC104: jal         0x800333FC
    // 0x803BC108: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    func_800333FC(rdram, ctx);
        goto after_2;
    // 0x803BC108: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_2:
    // 0x803BC10C: lw          $a2, 0x18($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X18);
    // 0x803BC110: nop

    // 0x803BC114: lh          $a1, 0x28($a2)
    ctx->r5 = MEM_H(ctx->r6, 0X28);
L_803BC118:
    // 0x803BC118: jal         0x803BD23C
    // 0x803BC11C: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    func_803BD23C(rdram, ctx);
        goto after_3;
    // 0x803BC11C: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    after_3:
    // 0x803BC120: jal         0x800357AC
    // 0x803BC124: nop

    func_800357AC(rdram, ctx);
        goto after_4;
    // 0x803BC124: nop

    after_4:
    // 0x803BC128: lui         $a0, 0x803C
    ctx->r4 = S32(0X803C << 16);
    // 0x803BC12C: addiu       $a0, $a0, -0x3EB8
    ctx->r4 = ADD32(ctx->r4, -0X3EB8);
    // 0x803BC130: jal         0x8002989C
    // 0x803BC134: addiu       $a1, $zero, 0x30
    ctx->r5 = ADD32(0, 0X30);
    func_8002989C(rdram, ctx);
        goto after_5;
    // 0x803BC134: addiu       $a1, $zero, 0x30
    ctx->r5 = ADD32(0, 0X30);
    after_5:
L_803BC138:
    // 0x803BC138: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_803BC13C:
    // 0x803BC13C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x803BC140: jr          $ra
    // 0x803BC144: nop

    return;
    // 0x803BC144: nop

;}
RECOMP_FUNC void func_803BC148(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803BC148: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x803BC14C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x803BC150: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x803BC154: addiu       $t6, $zero, 0x2
    ctx->r14 = ADD32(0, 0X2);
    // 0x803BC158: sh          $t6, 0x2A($a0)
    MEM_H(0X2A, ctx->r4) = ctx->r14;
    // 0x803BC15C: lh          $t7, 0x2A($a0)
    ctx->r15 = MEM_H(ctx->r4, 0X2A);
    // 0x803BC160: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x803BC164: lui         $a0, 0x803C
    ctx->r4 = S32(0X803C << 16);
    // 0x803BC168: addiu       $a0, $a0, -0x481C
    ctx->r4 = ADD32(ctx->r4, -0X481C);
    // 0x803BC16C: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    // 0x803BC170: jal         0x8002989C
    // 0x803BC174: sh          $t7, -0x32A8($at)
    MEM_H(-0X32A8, ctx->r1) = ctx->r15;
    func_8002989C(rdram, ctx);
        goto after_0;
    // 0x803BC174: sh          $t7, -0x32A8($at)
    MEM_H(-0X32A8, ctx->r1) = ctx->r15;
    after_0:
    // 0x803BC178: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x803BC17C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x803BC180: jr          $ra
    // 0x803BC184: nop

    return;
    // 0x803BC184: nop

;}
RECOMP_FUNC void func_803BC188(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803BC188: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x803BC18C: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x803BC190: lui         $a1, 0x8012
    ctx->r5 = S32(0X8012 << 16);
    // 0x803BC194: addiu       $a1, $a1, -0x32B0
    ctx->r5 = ADD32(ctx->r5, -0X32B0);
    // 0x803BC198: lh          $v0, 0x8($a1)
    ctx->r2 = MEM_H(ctx->r5, 0X8);
    // 0x803BC19C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x803BC1A0: beq         $v0, $zero, L_803BC1C8
    if (ctx->r2 == 0) {
        // 0x803BC1A4: addiu       $v1, $zero, 0x1
        ctx->r3 = ADD32(0, 0X1);
            goto L_803BC1C8;
    }
    // 0x803BC1A4: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x803BC1A8: beq         $v0, $v1, L_803BC1E0
    if (ctx->r2 == ctx->r3) {
        // 0x803BC1AC: addiu       $at, $zero, 0x2
        ctx->r1 = ADD32(0, 0X2);
            goto L_803BC1E0;
    }
    // 0x803BC1AC: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x803BC1B0: beq         $v0, $at, L_803BC210
    if (ctx->r2 == ctx->r1) {
        // 0x803BC1B4: addiu       $at, $zero, 0x3
        ctx->r1 = ADD32(0, 0X3);
            goto L_803BC210;
    }
    // 0x803BC1B4: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x803BC1B8: beq         $v0, $at, L_803BC21C
    if (ctx->r2 == ctx->r1) {
        // 0x803BC1BC: nop
    
            goto L_803BC21C;
    }
    // 0x803BC1BC: nop

    // 0x803BC1C0: b           L_803BC244
    // 0x803BC1C4: nop

        goto L_803BC244;
    // 0x803BC1C4: nop

L_803BC1C8:
    // 0x803BC1C8: lh          $t6, 0x24($a0)
    ctx->r14 = MEM_H(ctx->r4, 0X24);
    // 0x803BC1CC: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x803BC1D0: beq         $t6, $zero, L_803BC250
    if (ctx->r14 == 0) {
        // 0x803BC1D4: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_803BC250;
    }
    // 0x803BC1D4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x803BC1D8: b           L_803BC24C
    // 0x803BC1DC: sh          $v1, 0x50($a0)
    MEM_H(0X50, ctx->r4) = ctx->r3;
        goto L_803BC24C;
    // 0x803BC1DC: sh          $v1, 0x50($a0)
    MEM_H(0X50, ctx->r4) = ctx->r3;
L_803BC1E0:
    // 0x803BC1E0: lh          $t7, 0x24($a0)
    ctx->r15 = MEM_H(ctx->r4, 0X24);
    // 0x803BC1E4: nop

    // 0x803BC1E8: bne         $t7, $zero, L_803BC200
    if (ctx->r15 != 0) {
        // 0x803BC1EC: nop
    
            goto L_803BC200;
    }
    // 0x803BC1EC: nop

    // 0x803BC1F0: lh          $t8, 0x28($a0)
    ctx->r24 = MEM_H(ctx->r4, 0X28);
    // 0x803BC1F4: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x803BC1F8: beq         $t8, $at, L_803BC250
    if (ctx->r24 == ctx->r1) {
        // 0x803BC1FC: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_803BC250;
    }
    // 0x803BC1FC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_803BC200:
    // 0x803BC200: sh          $zero, 0x2A($a0)
    MEM_H(0X2A, ctx->r4) = 0;
    // 0x803BC204: lh          $t9, 0x2A($a0)
    ctx->r25 = MEM_H(ctx->r4, 0X2A);
    // 0x803BC208: b           L_803BC24C
    // 0x803BC20C: sh          $t9, 0x8($a1)
    MEM_H(0X8, ctx->r5) = ctx->r25;
        goto L_803BC24C;
    // 0x803BC20C: sh          $t9, 0x8($a1)
    MEM_H(0X8, ctx->r5) = ctx->r25;
L_803BC210:
    // 0x803BC210: sh          $v1, 0x8($a1)
    MEM_H(0X8, ctx->r5) = ctx->r3;
    // 0x803BC214: b           L_803BC24C
    // 0x803BC218: sh          $v1, 0x2A($a0)
    MEM_H(0X2A, ctx->r4) = ctx->r3;
        goto L_803BC24C;
    // 0x803BC218: sh          $v1, 0x2A($a0)
    MEM_H(0X2A, ctx->r4) = ctx->r3;
L_803BC21C:
    // 0x803BC21C: jal         0x803BD468
    // 0x803BC220: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_803BD468(rdram, ctx);
        goto after_0;
    // 0x803BC220: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x803BC224: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x803BC228: lui         $a1, 0x8012
    ctx->r5 = S32(0X8012 << 16);
    // 0x803BC22C: bne         $v0, $zero, L_803BC24C
    if (ctx->r2 != 0) {
        // 0x803BC230: addiu       $a1, $a1, -0x32B0
        ctx->r5 = ADD32(ctx->r5, -0X32B0);
            goto L_803BC24C;
    }
    // 0x803BC230: addiu       $a1, $a1, -0x32B0
    ctx->r5 = ADD32(ctx->r5, -0X32B0);
    // 0x803BC234: sh          $zero, 0x2A($a0)
    MEM_H(0X2A, ctx->r4) = 0;
    // 0x803BC238: lh          $t0, 0x2A($a0)
    ctx->r8 = MEM_H(ctx->r4, 0X2A);
    // 0x803BC23C: b           L_803BC24C
    // 0x803BC240: sh          $t0, 0x8($a1)
    MEM_H(0X8, ctx->r5) = ctx->r8;
        goto L_803BC24C;
    // 0x803BC240: sh          $t0, 0x8($a1)
    MEM_H(0X8, ctx->r5) = ctx->r8;
L_803BC244:
    // 0x803BC244: jal         0x80037908
    // 0x803BC248: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    func_80037908(rdram, ctx);
        goto after_1;
    // 0x803BC248: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_1:
L_803BC24C:
    // 0x803BC24C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_803BC250:
    // 0x803BC250: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x803BC254: jr          $ra
    // 0x803BC258: nop

    return;
    // 0x803BC258: nop

;}
RECOMP_FUNC void func_803BC25C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803BC25C: lui         $t6, 0x8012
    ctx->r14 = S32(0X8012 << 16);
    // 0x803BC260: lh          $t6, -0x32A8($t6)
    ctx->r14 = MEM_H(ctx->r14, -0X32A8);
    // 0x803BC264: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x803BC268: beq         $t6, $at, L_803BC2BC
    if (ctx->r14 == ctx->r1) {
        // 0x803BC26C: sw          $a1, 0x4($sp)
        MEM_W(0X4, ctx->r29) = ctx->r5;
            goto L_803BC2BC;
    }
    // 0x803BC26C: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    // 0x803BC270: lui         $t7, 0x801B
    ctx->r15 = S32(0X801B << 16);
    // 0x803BC274: lh          $t7, -0x6B2($t7)
    ctx->r15 = MEM_H(ctx->r15, -0X6B2);
    // 0x803BC278: nop

    // 0x803BC27C: andi        $t8, $t7, 0x1
    ctx->r24 = ctx->r15 & 0X1;
    // 0x803BC280: bne         $t8, $zero, L_803BC2BC
    if (ctx->r24 != 0) {
        // 0x803BC284: nop
    
            goto L_803BC2BC;
    }
    // 0x803BC284: nop

    // 0x803BC288: lh          $t9, 0x24($a0)
    ctx->r25 = MEM_H(ctx->r4, 0X24);
    // 0x803BC28C: nop

    // 0x803BC290: beq         $t9, $zero, L_803BC2A8
    if (ctx->r25 == 0) {
        // 0x803BC294: nop
    
            goto L_803BC2A8;
    }
    // 0x803BC294: nop

    // 0x803BC298: lh          $t0, 0x2A($a0)
    ctx->r8 = MEM_H(ctx->r4, 0X2A);
    // 0x803BC29C: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x803BC2A0: beq         $t0, $at, L_803BC2CC
    if (ctx->r8 == ctx->r1) {
        // 0x803BC2A4: nop
    
            goto L_803BC2CC;
    }
    // 0x803BC2A4: nop

L_803BC2A8:
    // 0x803BC2A8: lh          $t1, 0x50($a0)
    ctx->r9 = MEM_H(ctx->r4, 0X50);
    // 0x803BC2AC: nop

    // 0x803BC2B0: addiu       $t2, $t1, -0x1
    ctx->r10 = ADD32(ctx->r9, -0X1);
    // 0x803BC2B4: jr          $ra
    // 0x803BC2B8: sh          $t2, 0x50($a0)
    MEM_H(0X50, ctx->r4) = ctx->r10;
    return;
    // 0x803BC2B8: sh          $t2, 0x50($a0)
    MEM_H(0X50, ctx->r4) = ctx->r10;
L_803BC2BC:
    // 0x803BC2BC: lh          $t3, 0x2C($a0)
    ctx->r11 = MEM_H(ctx->r4, 0X2C);
    // 0x803BC2C0: nop

    // 0x803BC2C4: addiu       $t4, $t3, -0x1
    ctx->r12 = ADD32(ctx->r11, -0X1);
    // 0x803BC2C8: sh          $t4, 0x2C($a0)
    MEM_H(0X2C, ctx->r4) = ctx->r12;
L_803BC2CC:
    // 0x803BC2CC: jr          $ra
    // 0x803BC2D0: nop

    return;
    // 0x803BC2D0: nop

;}
RECOMP_FUNC void func_803BC2D4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803BC2D4: lui         $t6, 0x8012
    ctx->r14 = S32(0X8012 << 16);
    // 0x803BC2D8: lh          $t6, -0x32A8($t6)
    ctx->r14 = MEM_H(ctx->r14, -0X32A8);
    // 0x803BC2DC: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x803BC2E0: beq         $t6, $at, L_803BC330
    if (ctx->r14 == ctx->r1) {
        // 0x803BC2E4: sw          $a1, 0x4($sp)
        MEM_W(0X4, ctx->r29) = ctx->r5;
            goto L_803BC330;
    }
    // 0x803BC2E4: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    // 0x803BC2E8: lui         $v1, 0x801B
    ctx->r3 = S32(0X801B << 16);
    // 0x803BC2EC: addiu       $v1, $v1, -0x750
    ctx->r3 = ADD32(ctx->r3, -0X750);
    // 0x803BC2F0: lh          $v0, 0x9E($v1)
    ctx->r2 = MEM_H(ctx->r3, 0X9E);
    // 0x803BC2F4: nop

    // 0x803BC2F8: andi        $t7, $v0, 0x1
    ctx->r15 = ctx->r2 & 0X1;
    // 0x803BC2FC: bne         $t7, $zero, L_803BC330
    if (ctx->r15 != 0) {
        // 0x803BC300: nop
    
            goto L_803BC330;
    }
    // 0x803BC300: nop

    // 0x803BC304: lh          $t8, 0x98($v1)
    ctx->r24 = MEM_H(ctx->r3, 0X98);
    // 0x803BC308: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x803BC30C: beq         $t8, $zero, L_803BC31C
    if (ctx->r24 == 0) {
        // 0x803BC310: nop
    
            goto L_803BC31C;
    }
    // 0x803BC310: nop

    // 0x803BC314: beq         $v0, $at, L_803BC340
    if (ctx->r2 == ctx->r1) {
        // 0x803BC318: nop
    
            goto L_803BC340;
    }
    // 0x803BC318: nop

L_803BC31C:
    // 0x803BC31C: lh          $t9, 0x50($a0)
    ctx->r25 = MEM_H(ctx->r4, 0X50);
    // 0x803BC320: nop

    // 0x803BC324: addiu       $t0, $t9, 0x1
    ctx->r8 = ADD32(ctx->r25, 0X1);
    // 0x803BC328: jr          $ra
    // 0x803BC32C: sh          $t0, 0x50($a0)
    MEM_H(0X50, ctx->r4) = ctx->r8;
    return;
    // 0x803BC32C: sh          $t0, 0x50($a0)
    MEM_H(0X50, ctx->r4) = ctx->r8;
L_803BC330:
    // 0x803BC330: lh          $t1, 0x2C($a0)
    ctx->r9 = MEM_H(ctx->r4, 0X2C);
    // 0x803BC334: nop

    // 0x803BC338: addiu       $t2, $t1, 0x1
    ctx->r10 = ADD32(ctx->r9, 0X1);
    // 0x803BC33C: sh          $t2, 0x2C($a0)
    MEM_H(0X2C, ctx->r4) = ctx->r10;
L_803BC340:
    // 0x803BC340: jr          $ra
    // 0x803BC344: nop

    return;
    // 0x803BC344: nop

;}
RECOMP_FUNC void func_803BC348(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803BC348: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x803BC34C: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x803BC350: sw          $s5, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r21;
    // 0x803BC354: sw          $s4, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r20;
    // 0x803BC358: sw          $s3, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r19;
    // 0x803BC35C: sw          $s2, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r18;
    // 0x803BC360: sw          $s1, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r17;
    // 0x803BC364: sw          $s0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r16;
    // 0x803BC368: sw          $a0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r4;
    // 0x803BC36C: jal         0x803BD468
    // 0x803BC370: sw          $a1, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r5;
    func_803BD468(rdram, ctx);
        goto after_0;
    // 0x803BC370: sw          $a1, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r5;
    after_0:
    // 0x803BC374: beq         $v0, $zero, L_803BC3C4
    if (ctx->r2 == 0) {
        // 0x803BC378: lui         $a0, 0x8011
        ctx->r4 = S32(0X8011 << 16);
            goto L_803BC3C4;
    }
    // 0x803BC378: lui         $a0, 0x8011
    ctx->r4 = S32(0X8011 << 16);
    // 0x803BC37C: lui         $a0, 0x8011
    ctx->r4 = S32(0X8011 << 16);
    // 0x803BC380: lui         $a3, 0x8028
    ctx->r7 = S32(0X8028 << 16);
    // 0x803BC384: addiu       $t6, $zero, 0x11
    ctx->r14 = ADD32(0, 0X11);
    // 0x803BC388: addiu       $t7, $zero, 0x2
    ctx->r15 = ADD32(0, 0X2);
    // 0x803BC38C: addiu       $t8, $zero, 0x2
    ctx->r24 = ADD32(0, 0X2);
    // 0x803BC390: addiu       $t9, $zero, 0x2
    ctx->r25 = ADD32(0, 0X2);
    // 0x803BC394: sw          $t9, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r25;
    // 0x803BC398: sw          $t8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r24;
    // 0x803BC39C: sw          $t7, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r15;
    // 0x803BC3A0: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x803BC3A4: addiu       $a3, $a3, 0x71BC
    ctx->r7 = ADD32(ctx->r7, 0X71BC);
    // 0x803BC3A8: addiu       $a0, $a0, -0x3888
    ctx->r4 = ADD32(ctx->r4, -0X3888);
    // 0x803BC3AC: addiu       $a1, $zero, 0xC4
    ctx->r5 = ADD32(0, 0XC4);
    // 0x803BC3B0: jal         0x8002F528
    // 0x803BC3B4: addiu       $a2, $zero, 0x2C
    ctx->r6 = ADD32(0, 0X2C);
    func_8002F528(rdram, ctx);
        goto after_1;
    // 0x803BC3B4: addiu       $a2, $zero, 0x2C
    ctx->r6 = ADD32(0, 0X2C);
    after_1:
    // 0x803BC3B8: lui         $at, 0x8011
    ctx->r1 = S32(0X8011 << 16);
    // 0x803BC3BC: b           L_803BC44C
    // 0x803BC3C0: sb          $zero, -0x3864($at)
    MEM_B(-0X3864, ctx->r1) = 0;
        goto L_803BC44C;
    // 0x803BC3C0: sb          $zero, -0x3864($at)
    MEM_B(-0X3864, ctx->r1) = 0;
L_803BC3C4:
    // 0x803BC3C4: lui         $a3, 0x8028
    ctx->r7 = S32(0X8028 << 16);
    // 0x803BC3C8: addiu       $t0, $zero, 0xE
    ctx->r8 = ADD32(0, 0XE);
    // 0x803BC3CC: addiu       $t1, $zero, 0x2
    ctx->r9 = ADD32(0, 0X2);
    // 0x803BC3D0: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x803BC3D4: addiu       $t3, $zero, 0x2
    ctx->r11 = ADD32(0, 0X2);
    // 0x803BC3D8: sw          $t3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r11;
    // 0x803BC3DC: sw          $t2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r10;
    // 0x803BC3E0: sw          $t1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r9;
    // 0x803BC3E4: sw          $t0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r8;
    // 0x803BC3E8: addiu       $a3, $a3, 0x71B0
    ctx->r7 = ADD32(ctx->r7, 0X71B0);
    // 0x803BC3EC: addiu       $a0, $a0, -0x3888
    ctx->r4 = ADD32(ctx->r4, -0X3888);
    // 0x803BC3F0: addiu       $a1, $zero, 0xC4
    ctx->r5 = ADD32(0, 0XC4);
    // 0x803BC3F4: jal         0x8002F528
    // 0x803BC3F8: addiu       $a2, $zero, 0x3A
    ctx->r6 = ADD32(0, 0X3A);
    func_8002F528(rdram, ctx);
        goto after_2;
    // 0x803BC3F8: addiu       $a2, $zero, 0x3A
    ctx->r6 = ADD32(0, 0X3A);
    after_2:
    // 0x803BC3FC: lui         $a0, 0x801B
    ctx->r4 = S32(0X801B << 16);
    // 0x803BC400: lh          $a0, -0x6AE($a0)
    ctx->r4 = MEM_H(ctx->r4, -0X6AE);
    // 0x803BC404: jal         0x80035438
    // 0x803BC408: nop

    func_80035438(rdram, ctx);
        goto after_3;
    // 0x803BC408: nop

    after_3:
    // 0x803BC40C: lui         $t4, 0x8028
    ctx->r12 = S32(0X8028 << 16);
    // 0x803BC410: addiu       $t4, $t4, 0x7888
    ctx->r12 = ADD32(ctx->r12, 0X7888);
    // 0x803BC414: lui         $a0, 0x8011
    ctx->r4 = S32(0X8011 << 16);
    // 0x803BC418: addiu       $t5, $zero, 0x1
    ctx->r13 = ADD32(0, 0X1);
    // 0x803BC41C: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x803BC420: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x803BC424: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x803BC428: sw          $t8, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r24;
    // 0x803BC42C: sw          $t7, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r15;
    // 0x803BC430: sw          $t6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r14;
    // 0x803BC434: sw          $t5, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r13;
    // 0x803BC438: addiu       $a0, $a0, -0x3868
    ctx->r4 = ADD32(ctx->r4, -0X3868);
    // 0x803BC43C: addu        $a3, $v0, $t4
    ctx->r7 = ADD32(ctx->r2, ctx->r12);
    // 0x803BC440: addiu       $a1, $zero, 0x118
    ctx->r5 = ADD32(0, 0X118);
    // 0x803BC444: jal         0x8002F528
    // 0x803BC448: addiu       $a2, $zero, 0x3A
    ctx->r6 = ADD32(0, 0X3A);
    func_8002F528(rdram, ctx);
        goto after_4;
    // 0x803BC448: addiu       $a2, $zero, 0x3A
    ctx->r6 = ADD32(0, 0X3A);
    after_4:
L_803BC44C:
    // 0x803BC44C: lui         $s5, 0x8028
    ctx->r21 = S32(0X8028 << 16);
    // 0x803BC450: lui         $s4, 0x803C
    ctx->r20 = S32(0X803C << 16);
    // 0x803BC454: lui         $s3, 0x2
    ctx->r19 = S32(0X2 << 16);
    // 0x803BC458: lui         $s2, 0x2
    ctx->r18 = S32(0X2 << 16);
    // 0x803BC45C: lui         $s1, 0x800E
    ctx->r17 = S32(0X800E << 16);
    // 0x803BC460: addiu       $s1, $s1, -0x3770
    ctx->r17 = ADD32(ctx->r17, -0X3770);
    // 0x803BC464: ori         $s2, $s2, 0x8000
    ctx->r18 = ctx->r18 | 0X8000;
    // 0x803BC468: ori         $s3, $s3, 0xFF28
    ctx->r19 = ctx->r19 | 0XFF28;
    // 0x803BC46C: addiu       $s4, $s4, -0x2604
    ctx->r20 = ADD32(ctx->r20, -0X2604);
    // 0x803BC470: addiu       $s5, $s5, 0x3A7C
    ctx->r21 = ADD32(ctx->r21, 0X3A7C);
    // 0x803BC474: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x803BC478: sll         $a0, $s0, 16
    ctx->r4 = S32(ctx->r16 << 16);
L_803BC47C:
    // 0x803BC47C: sra         $t9, $a0, 16
    ctx->r25 = S32(SIGNED(ctx->r4) >> 16);
    // 0x803BC480: jal         0x803BD368
    // 0x803BC484: or          $a0, $t9, $zero
    ctx->r4 = ctx->r25 | 0;
    func_803BD368(rdram, ctx);
        goto after_5;
    // 0x803BC484: or          $a0, $t9, $zero
    ctx->r4 = ctx->r25 | 0;
    after_5:
    // 0x803BC488: sll         $v1, $v0, 16
    ctx->r3 = S32(ctx->r2 << 16);
    // 0x803BC48C: slti        $at, $v0, 0x4
    ctx->r1 = SIGNED(ctx->r2) < 0X4 ? 1 : 0;
    // 0x803BC490: beq         $at, $zero, L_803BC4EC
    if (ctx->r1 == 0) {
        // 0x803BC494: sra         $t0, $v1, 16
        ctx->r8 = S32(SIGNED(ctx->r3) >> 16);
            goto L_803BC4EC;
    }
    // 0x803BC494: sra         $t0, $v1, 16
    ctx->r8 = S32(SIGNED(ctx->r3) >> 16);
    // 0x803BC498: sll         $t4, $t0, 2
    ctx->r12 = S32(ctx->r8 << 2);
    // 0x803BC49C: addu        $t5, $s5, $t4
    ctx->r13 = ADD32(ctx->r21, ctx->r12);
    // 0x803BC4A0: lw          $a3, 0x0($t5)
    ctx->r7 = MEM_W(ctx->r13, 0X0);
    // 0x803BC4A4: sll         $t3, $s0, 1
    ctx->r11 = S32(ctx->r16 << 1);
    // 0x803BC4A8: addu        $v0, $s4, $t3
    ctx->r2 = ADD32(ctx->r20, ctx->r11);
    // 0x803BC4AC: sll         $t1, $s0, 5
    ctx->r9 = S32(ctx->r16 << 5);
    // 0x803BC4B0: addu        $t2, $s1, $t1
    ctx->r10 = ADD32(ctx->r17, ctx->r9);
    // 0x803BC4B4: lbu         $a1, 0x0($v0)
    ctx->r5 = MEM_BU(ctx->r2, 0X0);
    // 0x803BC4B8: lbu         $a2, 0x1($v0)
    ctx->r6 = MEM_BU(ctx->r2, 0X1);
    // 0x803BC4BC: addiu       $t6, $zero, 0x11
    ctx->r14 = ADD32(0, 0X11);
    // 0x803BC4C0: addiu       $t7, $zero, 0x2
    ctx->r15 = ADD32(0, 0X2);
    // 0x803BC4C4: addiu       $t8, $zero, 0x2
    ctx->r24 = ADD32(0, 0X2);
    // 0x803BC4C8: addiu       $t9, $zero, 0x2
    ctx->r25 = ADD32(0, 0X2);
    // 0x803BC4CC: sw          $t9, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r25;
    // 0x803BC4D0: sw          $t8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r24;
    // 0x803BC4D4: sw          $t7, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r15;
    // 0x803BC4D8: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x803BC4DC: jal         0x8002F528
    // 0x803BC4E0: addu        $a0, $t2, $s3
    ctx->r4 = ADD32(ctx->r10, ctx->r19);
    func_8002F528(rdram, ctx);
        goto after_6;
    // 0x803BC4E0: addu        $a0, $t2, $s3
    ctx->r4 = ADD32(ctx->r10, ctx->r19);
    after_6:
    // 0x803BC4E4: b           L_803BC500
    // 0x803BC4E8: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
        goto L_803BC500;
    // 0x803BC4E8: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
L_803BC4EC:
    // 0x803BC4EC: sll         $t0, $s0, 5
    ctx->r8 = S32(ctx->r16 << 5);
    // 0x803BC4F0: addu        $t1, $s1, $t0
    ctx->r9 = ADD32(ctx->r17, ctx->r8);
    // 0x803BC4F4: addu        $t2, $t1, $s2
    ctx->r10 = ADD32(ctx->r9, ctx->r18);
    // 0x803BC4F8: sb          $zero, 0x7F2C($t2)
    MEM_B(0X7F2C, ctx->r10) = 0;
    // 0x803BC4FC: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
L_803BC500:
    // 0x803BC500: sll         $t3, $s0, 16
    ctx->r11 = S32(ctx->r16 << 16);
    // 0x803BC504: sra         $s0, $t3, 16
    ctx->r16 = S32(SIGNED(ctx->r11) >> 16);
    // 0x803BC508: slti        $at, $s0, 0x2
    ctx->r1 = SIGNED(ctx->r16) < 0X2 ? 1 : 0;
    // 0x803BC50C: bne         $at, $zero, L_803BC47C
    if (ctx->r1 != 0) {
        // 0x803BC510: sll         $a0, $s0, 16
        ctx->r4 = S32(ctx->r16 << 16);
            goto L_803BC47C;
    }
    // 0x803BC510: sll         $a0, $s0, 16
    ctx->r4 = S32(ctx->r16 << 16);
    // 0x803BC514: lui         $v0, 0x801B
    ctx->r2 = S32(0X801B << 16);
    // 0x803BC518: addiu       $v0, $v0, -0x750
    ctx->r2 = ADD32(ctx->r2, -0X750);
    // 0x803BC51C: lh          $t7, 0x98($v0)
    ctx->r15 = MEM_H(ctx->r2, 0X98);
    // 0x803BC520: lui         $t9, 0x803C
    ctx->r25 = S32(0X803C << 16);
    // 0x803BC524: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x803BC528: lh          $t5, 0x9E($v0)
    ctx->r13 = MEM_H(ctx->r2, 0X9E);
    // 0x803BC52C: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x803BC530: lw          $t9, -0x28D8($t9)
    ctx->r25 = MEM_W(ctx->r25, -0X28D8);
    // 0x803BC534: sll         $t6, $t5, 4
    ctx->r14 = S32(ctx->r13 << 4);
    // 0x803BC538: addiu       $a0, $zero, 0x5
    ctx->r4 = ADD32(0, 0X5);
    // 0x803BC53C: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x803BC540: jal         0x8002F444
    // 0x803BC544: addu        $a1, $t6, $t9
    ctx->r5 = ADD32(ctx->r14, ctx->r25);
    func_8002F444(rdram, ctx);
        goto after_7;
    // 0x803BC544: addu        $a1, $t6, $t9
    ctx->r5 = ADD32(ctx->r14, ctx->r25);
    after_7:
    // 0x803BC548: sll         $a1, $v0, 16
    ctx->r5 = S32(ctx->r2 << 16);
    // 0x803BC54C: sra         $t0, $a1, 16
    ctx->r8 = S32(SIGNED(ctx->r5) >> 16);
    // 0x803BC550: lui         $a0, 0x801B
    ctx->r4 = S32(0X801B << 16);
    // 0x803BC554: addiu       $a0, $a0, -0x6DC
    ctx->r4 = ADD32(ctx->r4, -0X6DC);
    // 0x803BC558: jal         0x803BC684
    // 0x803BC55C: or          $a1, $t0, $zero
    ctx->r5 = ctx->r8 | 0;
    func_803BC684(rdram, ctx);
        goto after_8;
    // 0x803BC55C: or          $a1, $t0, $zero
    ctx->r5 = ctx->r8 | 0;
    after_8:
    // 0x803BC560: sll         $s0, $v0, 16
    ctx->r16 = S32(ctx->r2 << 16);
    // 0x803BC564: sra         $t1, $s0, 16
    ctx->r9 = S32(SIGNED(ctx->r16) >> 16);
    // 0x803BC568: slti        $at, $v0, 0x40
    ctx->r1 = SIGNED(ctx->r2) < 0X40 ? 1 : 0;
    // 0x803BC56C: beq         $at, $zero, L_803BC598
    if (ctx->r1 == 0) {
        // 0x803BC570: or          $s0, $t1, $zero
        ctx->r16 = ctx->r9 | 0;
            goto L_803BC598;
    }
    // 0x803BC570: or          $s0, $t1, $zero
    ctx->r16 = ctx->r9 | 0;
L_803BC574:
    // 0x803BC574: sll         $t2, $s0, 5
    ctx->r10 = S32(ctx->r16 << 5);
    // 0x803BC578: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x803BC57C: sll         $t5, $s0, 16
    ctx->r13 = S32(ctx->r16 << 16);
    // 0x803BC580: sra         $s0, $t5, 16
    ctx->r16 = S32(SIGNED(ctx->r13) >> 16);
    // 0x803BC584: addu        $t3, $s1, $t2
    ctx->r11 = ADD32(ctx->r17, ctx->r10);
    // 0x803BC588: slti        $at, $s0, 0x40
    ctx->r1 = SIGNED(ctx->r16) < 0X40 ? 1 : 0;
    // 0x803BC58C: addu        $t4, $t3, $s2
    ctx->r12 = ADD32(ctx->r11, ctx->r18);
    // 0x803BC590: bne         $at, $zero, L_803BC574
    if (ctx->r1 != 0) {
        // 0x803BC594: sb          $zero, 0x7EEC($t4)
        MEM_B(0X7EEC, ctx->r12) = 0;
            goto L_803BC574;
    }
    // 0x803BC594: sb          $zero, 0x7EEC($t4)
    MEM_B(0X7EEC, ctx->r12) = 0;
L_803BC598:
    // 0x803BC598: lui         $a0, 0x803C
    ctx->r4 = S32(0X803C << 16);
    // 0x803BC59C: jal         0x8002A5D8
    // 0x803BC5A0: addiu       $a0, $a0, -0x3A38
    ctx->r4 = ADD32(ctx->r4, -0X3A38);
    func_8002A5D8(rdram, ctx);
        goto after_9;
    // 0x803BC5A0: addiu       $a0, $a0, -0x3A38
    ctx->r4 = ADD32(ctx->r4, -0X3A38);
    after_9:
    // 0x803BC5A4: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    // 0x803BC5A8: lw          $s0, 0x24($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X24);
    // 0x803BC5AC: lw          $s1, 0x28($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X28);
    // 0x803BC5B0: lw          $s2, 0x2C($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X2C);
    // 0x803BC5B4: lw          $s3, 0x30($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X30);
    // 0x803BC5B8: lw          $s4, 0x34($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X34);
    // 0x803BC5BC: lw          $s5, 0x38($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X38);
    // 0x803BC5C0: jr          $ra
    // 0x803BC5C4: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    return;
    // 0x803BC5C4: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
RECOMP_FUNC void func_803BC5C8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803BC5C8: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x803BC5CC: sw          $a1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r5;
    // 0x803BC5D0: lh          $t6, 0x36($sp)
    ctx->r14 = MEM_H(ctx->r29, 0X36);
    // 0x803BC5D4: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x803BC5D8: slti        $at, $t6, 0x2
    ctx->r1 = SIGNED(ctx->r14) < 0X2 ? 1 : 0;
    // 0x803BC5DC: beq         $at, $zero, L_803BC600
    if (ctx->r1 == 0) {
        // 0x803BC5E0: sw          $a0, 0x30($sp)
        MEM_W(0X30, ctx->r29) = ctx->r4;
            goto L_803BC600;
    }
    // 0x803BC5E0: sw          $a0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r4;
    // 0x803BC5E4: jal         0x803BD368
    // 0x803BC5E8: or          $a0, $t6, $zero
    ctx->r4 = ctx->r14 | 0;
    func_803BD368(rdram, ctx);
        goto after_0;
    // 0x803BC5E8: or          $a0, $t6, $zero
    ctx->r4 = ctx->r14 | 0;
    after_0:
    // 0x803BC5EC: lui         $t8, 0x803C
    ctx->r24 = S32(0X803C << 16);
    // 0x803BC5F0: addiu       $t8, $t8, -0x25E0
    ctx->r24 = ADD32(ctx->r24, -0X25E0);
    // 0x803BC5F4: sll         $t7, $v0, 2
    ctx->r15 = S32(ctx->r2 << 2);
    // 0x803BC5F8: b           L_803BC61C
    // 0x803BC5FC: addu        $v1, $t7, $t8
    ctx->r3 = ADD32(ctx->r15, ctx->r24);
        goto L_803BC61C;
    // 0x803BC5FC: addu        $v1, $t7, $t8
    ctx->r3 = ADD32(ctx->r15, ctx->r24);
L_803BC600:
    // 0x803BC600: lui         $t9, 0x801B
    ctx->r25 = S32(0X801B << 16);
    // 0x803BC604: lh          $t9, -0x6B4($t9)
    ctx->r25 = MEM_H(ctx->r25, -0X6B4);
    // 0x803BC608: lui         $t2, 0x803C
    ctx->r10 = S32(0X803C << 16);
    // 0x803BC60C: sll         $t0, $t9, 2
    ctx->r8 = S32(ctx->r25 << 2);
    // 0x803BC610: addiu       $t1, $t0, 0x18
    ctx->r9 = ADD32(ctx->r8, 0X18);
    // 0x803BC614: addiu       $t2, $t2, -0x25E0
    ctx->r10 = ADD32(ctx->r10, -0X25E0);
    // 0x803BC618: addu        $v1, $t1, $t2
    ctx->r3 = ADD32(ctx->r9, ctx->r10);
L_803BC61C:
    // 0x803BC61C: lh          $t3, 0x36($sp)
    ctx->r11 = MEM_H(ctx->r29, 0X36);
    // 0x803BC620: lui         $t5, 0x803C
    ctx->r13 = S32(0X803C << 16);
    // 0x803BC624: addiu       $t5, $t5, -0x2600
    ctx->r13 = ADD32(ctx->r13, -0X2600);
    // 0x803BC628: sll         $t4, $t3, 3
    ctx->r12 = S32(ctx->r11 << 3);
    // 0x803BC62C: addu        $v0, $t4, $t5
    ctx->r2 = ADD32(ctx->r12, ctx->r13);
    // 0x803BC630: lhu         $t6, 0x4($v0)
    ctx->r14 = MEM_HU(ctx->r2, 0X4);
    // 0x803BC634: lhu         $t7, 0x6($v0)
    ctx->r15 = MEM_HU(ctx->r2, 0X6);
    // 0x803BC638: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x803BC63C: sw          $t7, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r15;
    // 0x803BC640: lbu         $t8, 0x0($v1)
    ctx->r24 = MEM_BU(ctx->r3, 0X0);
    // 0x803BC644: lh          $a2, 0x0($v0)
    ctx->r6 = MEM_H(ctx->r2, 0X0);
    // 0x803BC648: sw          $t8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r24;
    // 0x803BC64C: lbu         $t9, 0x1($v1)
    ctx->r25 = MEM_BU(ctx->r3, 0X1);
    // 0x803BC650: lh          $a3, 0x2($v0)
    ctx->r7 = MEM_H(ctx->r2, 0X2);
    // 0x803BC654: sw          $t9, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r25;
    // 0x803BC658: lbu         $t0, 0x2($v1)
    ctx->r8 = MEM_BU(ctx->r3, 0X2);
    // 0x803BC65C: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    // 0x803BC660: sw          $t0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r8;
    // 0x803BC664: lbu         $t1, 0x3($v1)
    ctx->r9 = MEM_BU(ctx->r3, 0X3);
    // 0x803BC668: addiu       $a1, $zero, 0x82
    ctx->r5 = ADD32(0, 0X82);
    // 0x803BC66C: jal         0x8004A5E4
    // 0x803BC670: sw          $t1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r9;
    func_8004A5E4(rdram, ctx);
        goto after_1;
    // 0x803BC670: sw          $t1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r9;
    after_1:
    // 0x803BC674: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x803BC678: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x803BC67C: jr          $ra
    // 0x803BC680: nop

    return;
    // 0x803BC680: nop

;}
RECOMP_FUNC void func_803BC684(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803BC684: addiu       $sp, $sp, -0x58
    ctx->r29 = ADD32(ctx->r29, -0X58);
    // 0x803BC688: sw          $s7, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r23;
    // 0x803BC68C: sll         $s7, $a1, 16
    ctx->r23 = S32(ctx->r5 << 16);
    // 0x803BC690: sra         $t6, $s7, 16
    ctx->r14 = S32(SIGNED(ctx->r23) >> 16);
    // 0x803BC694: lui         $v1, 0x800E
    ctx->r3 = S32(0X800E << 16);
    // 0x803BC698: or          $s7, $t6, $zero
    ctx->r23 = ctx->r14 | 0;
    // 0x803BC69C: sw          $ra, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r31;
    // 0x803BC6A0: sw          $fp, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r30;
    // 0x803BC6A4: sw          $s6, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r22;
    // 0x803BC6A8: sw          $s5, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r21;
    // 0x803BC6AC: sw          $s4, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r20;
    // 0x803BC6B0: sw          $s3, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r19;
    // 0x803BC6B4: sw          $s2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r18;
    // 0x803BC6B8: sw          $s1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r17;
    // 0x803BC6BC: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    // 0x803BC6C0: sw          $a0, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r4;
    // 0x803BC6C4: sw          $a1, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r5;
    // 0x803BC6C8: addiu       $v1, $v1, -0x3770
    ctx->r3 = ADD32(ctx->r3, -0X3770);
    // 0x803BC6CC: sh          $zero, 0x56($sp)
    MEM_H(0X56, ctx->r29) = 0;
L_803BC6D0:
    // 0x803BC6D0: lh          $a2, 0x56($sp)
    ctx->r6 = MEM_H(ctx->r29, 0X56);
    // 0x803BC6D4: sll         $t8, $s7, 5
    ctx->r24 = S32(ctx->r23 << 5);
    // 0x803BC6D8: sll         $a0, $a2, 16
    ctx->r4 = S32(ctx->r6 << 16);
    // 0x803BC6DC: sra         $t7, $a0, 16
    ctx->r15 = S32(SIGNED(ctx->r4) >> 16);
    // 0x803BC6E0: or          $a0, $t7, $zero
    ctx->r4 = ctx->r15 | 0;
    // 0x803BC6E4: jal         0x803BD1EC
    // 0x803BC6E8: addu        $s2, $v1, $t8
    ctx->r18 = ADD32(ctx->r3, ctx->r24);
    func_803BD1EC(rdram, ctx);
        goto after_0;
    // 0x803BC6E8: addu        $s2, $v1, $t8
    ctx->r18 = ADD32(ctx->r3, ctx->r24);
    after_0:
    // 0x803BC6EC: bne         $v0, $zero, L_803BC778
    if (ctx->r2 != 0) {
        // 0x803BC6F0: lui         $at, 0x2
        ctx->r1 = S32(0X2 << 16);
            goto L_803BC778;
    }
    // 0x803BC6F0: lui         $at, 0x2
    ctx->r1 = S32(0X2 << 16);
    // 0x803BC6F4: lh          $t9, 0x56($sp)
    ctx->r25 = MEM_H(ctx->r29, 0X56);
    // 0x803BC6F8: lui         $t2, 0x803C
    ctx->r10 = S32(0X803C << 16);
    // 0x803BC6FC: addiu       $t2, $t2, -0x2604
    ctx->r10 = ADD32(ctx->r10, -0X2604);
    // 0x803BC700: sll         $t1, $t9, 1
    ctx->r9 = S32(ctx->r25 << 1);
    // 0x803BC704: addu        $s0, $t1, $t2
    ctx->r16 = ADD32(ctx->r9, ctx->r10);
    // 0x803BC708: lbu         $a1, 0x0($s0)
    ctx->r5 = MEM_BU(ctx->r16, 0X0);
    // 0x803BC70C: lbu         $a2, 0x1($s0)
    ctx->r6 = MEM_BU(ctx->r16, 0X1);
    // 0x803BC710: lui         $at, 0x2
    ctx->r1 = S32(0X2 << 16);
    // 0x803BC714: addiu       $s7, $s7, 0x1
    ctx->r23 = ADD32(ctx->r23, 0X1);
    // 0x803BC718: addiu       $a1, $a1, 0xE
    ctx->r5 = ADD32(ctx->r5, 0XE);
    // 0x803BC71C: addiu       $a2, $a2, 0xE
    ctx->r6 = ADD32(ctx->r6, 0XE);
    // 0x803BC720: sll         $t5, $a2, 16
    ctx->r13 = S32(ctx->r6 << 16);
    // 0x803BC724: sll         $t3, $a1, 16
    ctx->r11 = S32(ctx->r5 << 16);
    // 0x803BC728: sll         $t2, $s7, 16
    ctx->r10 = S32(ctx->r23 << 16);
    // 0x803BC72C: ori         $at, $at, 0xFEE8
    ctx->r1 = ctx->r1 | 0XFEE8;
    // 0x803BC730: addiu       $t1, $zero, 0x2
    ctx->r9 = ADD32(0, 0X2);
    // 0x803BC734: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x803BC738: lui         $a3, 0x8028
    ctx->r7 = S32(0X8028 << 16);
    // 0x803BC73C: addiu       $t7, $zero, 0xD
    ctx->r15 = ADD32(0, 0XD);
    // 0x803BC740: addiu       $t8, $zero, 0x2
    ctx->r24 = ADD32(0, 0X2);
    // 0x803BC744: sw          $t8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r24;
    // 0x803BC748: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x803BC74C: addiu       $a3, $a3, 0x730C
    ctx->r7 = ADD32(ctx->r7, 0X730C);
    // 0x803BC750: sw          $t9, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r25;
    // 0x803BC754: sw          $t1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r9;
    // 0x803BC758: addu        $a0, $s2, $at
    ctx->r4 = ADD32(ctx->r18, ctx->r1);
    // 0x803BC75C: sra         $s7, $t2, 16
    ctx->r23 = S32(SIGNED(ctx->r10) >> 16);
    // 0x803BC760: sra         $a1, $t3, 16
    ctx->r5 = S32(SIGNED(ctx->r11) >> 16);
    // 0x803BC764: jal         0x8002F528
    // 0x803BC768: sra         $a2, $t5, 16
    ctx->r6 = S32(SIGNED(ctx->r13) >> 16);
    func_8002F528(rdram, ctx);
        goto after_1;
    // 0x803BC768: sra         $a2, $t5, 16
    ctx->r6 = S32(SIGNED(ctx->r13) >> 16);
    after_1:
    // 0x803BC76C: lui         $v1, 0x800E
    ctx->r3 = S32(0X800E << 16);
    // 0x803BC770: b           L_803BD138
    // 0x803BC774: addiu       $v1, $v1, -0x3770
    ctx->r3 = ADD32(ctx->r3, -0X3770);
        goto L_803BD138;
    // 0x803BC774: addiu       $v1, $v1, -0x3770
    ctx->r3 = ADD32(ctx->r3, -0X3770);
L_803BC778:
    // 0x803BC778: lh          $s5, 0x56($sp)
    ctx->r21 = MEM_H(ctx->r29, 0X56);
    // 0x803BC77C: lui         $t5, 0x803C
    ctx->r13 = S32(0X803C << 16);
    // 0x803BC780: addiu       $t5, $t5, -0x25B8
    ctx->r13 = ADD32(ctx->r13, -0X25B8);
    // 0x803BC784: sll         $t4, $s5, 1
    ctx->r12 = S32(ctx->r21 << 1);
    // 0x803BC788: addu        $s0, $t4, $t5
    ctx->r16 = ADD32(ctx->r12, ctx->r13);
    // 0x803BC78C: addiu       $s7, $s7, 0x1
    ctx->r23 = ADD32(ctx->r23, 0X1);
    // 0x803BC790: sll         $t1, $s7, 16
    ctx->r9 = S32(ctx->r23 << 16);
    // 0x803BC794: lbu         $a1, 0x0($s0)
    ctx->r5 = MEM_BU(ctx->r16, 0X0);
    // 0x803BC798: lbu         $a2, 0x1($s0)
    ctx->r6 = MEM_BU(ctx->r16, 0X1);
    // 0x803BC79C: ori         $at, $at, 0xFEE8
    ctx->r1 = ctx->r1 | 0XFEE8;
    // 0x803BC7A0: lui         $a3, 0x8028
    ctx->r7 = S32(0X8028 << 16);
    // 0x803BC7A4: addiu       $t6, $zero, 0xA
    ctx->r14 = ADD32(0, 0XA);
    // 0x803BC7A8: addiu       $t7, $zero, 0x2
    ctx->r15 = ADD32(0, 0X2);
    // 0x803BC7AC: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x803BC7B0: addiu       $t9, $zero, 0x2
    ctx->r25 = ADD32(0, 0X2);
    // 0x803BC7B4: sw          $t9, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r25;
    // 0x803BC7B8: sw          $t8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r24;
    // 0x803BC7BC: sw          $t7, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r15;
    // 0x803BC7C0: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x803BC7C4: addiu       $a3, $a3, 0x731C
    ctx->r7 = ADD32(ctx->r7, 0X731C);
    // 0x803BC7C8: addu        $a0, $s2, $at
    ctx->r4 = ADD32(ctx->r18, ctx->r1);
    // 0x803BC7CC: sra         $s7, $t1, 16
    ctx->r23 = S32(SIGNED(ctx->r9) >> 16);
    // 0x803BC7D0: jal         0x8002F528
    // 0x803BC7D4: or          $s5, $t4, $zero
    ctx->r21 = ctx->r12 | 0;
    func_8002F528(rdram, ctx);
        goto after_2;
    // 0x803BC7D4: or          $s5, $t4, $zero
    ctx->r21 = ctx->r12 | 0;
    after_2:
    // 0x803BC7D8: lw          $t6, 0x58($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X58);
    // 0x803BC7DC: lh          $t7, 0x56($sp)
    ctx->r15 = MEM_H(ctx->r29, 0X56);
    // 0x803BC7E0: lbu         $a1, 0x0($s0)
    ctx->r5 = MEM_BU(ctx->r16, 0X0);
    // 0x803BC7E4: addu        $s1, $t6, $t7
    ctx->r17 = ADD32(ctx->r14, ctx->r15);
    // 0x803BC7E8: lb          $a3, 0x40($s1)
    ctx->r7 = MEM_B(ctx->r17, 0X40);
    // 0x803BC7EC: lui         $v1, 0x800E
    ctx->r3 = S32(0X800E << 16);
    // 0x803BC7F0: sll         $t3, $s7, 5
    ctx->r11 = S32(ctx->r23 << 5);
    // 0x803BC7F4: addiu       $v1, $v1, -0x3770
    ctx->r3 = ADD32(ctx->r3, -0X3770);
    // 0x803BC7F8: addiu       $s7, $s7, 0x1
    ctx->r23 = ADD32(ctx->r23, 0X1);
    // 0x803BC7FC: lui         $at, 0x2
    ctx->r1 = S32(0X2 << 16);
    // 0x803BC800: addiu       $a1, $a1, 0x2A
    ctx->r5 = ADD32(ctx->r5, 0X2A);
    // 0x803BC804: sll         $t4, $a1, 16
    ctx->r12 = S32(ctx->r5 << 16);
    // 0x803BC808: ori         $at, $at, 0xFEE8
    ctx->r1 = ctx->r1 | 0XFEE8;
    // 0x803BC80C: sll         $t1, $s7, 16
    ctx->r9 = S32(ctx->r23 << 16);
    // 0x803BC810: addu        $a0, $v1, $t3
    ctx->r4 = ADD32(ctx->r3, ctx->r11);
    // 0x803BC814: lbu         $a2, 0x1($s0)
    ctx->r6 = MEM_BU(ctx->r16, 0X1);
    // 0x803BC818: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x803BC81C: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x803BC820: sw          $t9, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r25;
    // 0x803BC824: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    // 0x803BC828: addu        $a0, $a0, $at
    ctx->r4 = ADD32(ctx->r4, ctx->r1);
    // 0x803BC82C: sra         $s7, $t1, 16
    ctx->r23 = S32(SIGNED(ctx->r9) >> 16);
    // 0x803BC830: sra         $a1, $t4, 16
    ctx->r5 = S32(SIGNED(ctx->r12) >> 16);
    // 0x803BC834: jal         0x8002F6EC
    // 0x803BC838: addiu       $a3, $a3, 0x1
    ctx->r7 = ADD32(ctx->r7, 0X1);
    func_8002F6EC(rdram, ctx);
        goto after_3;
    // 0x803BC838: addiu       $a3, $a3, 0x1
    ctx->r7 = ADD32(ctx->r7, 0X1);
    after_3:
    // 0x803BC83C: lh          $a0, 0x56($sp)
    ctx->r4 = MEM_H(ctx->r29, 0X56);
    // 0x803BC840: jal         0x803BD368
    // 0x803BC844: nop

    func_803BD368(rdram, ctx);
        goto after_4;
    // 0x803BC844: nop

    after_4:
    // 0x803BC848: sll         $s2, $v0, 16
    ctx->r18 = S32(ctx->r2 << 16);
    // 0x803BC84C: sra         $t3, $s2, 16
    ctx->r11 = S32(SIGNED(ctx->r18) >> 16);
    // 0x803BC850: lui         $v1, 0x800E
    ctx->r3 = S32(0X800E << 16);
    // 0x803BC854: addiu       $v1, $v1, -0x3770
    ctx->r3 = ADD32(ctx->r3, -0X3770);
    // 0x803BC858: bne         $v0, $zero, L_803BC868
    if (ctx->r2 != 0) {
        // 0x803BC85C: or          $s2, $t3, $zero
        ctx->r18 = ctx->r11 | 0;
            goto L_803BC868;
    }
    // 0x803BC85C: or          $s2, $t3, $zero
    ctx->r18 = ctx->r11 | 0;
    // 0x803BC860: b           L_803BC86C
    // 0x803BC864: or          $s3, $zero, $zero
    ctx->r19 = 0 | 0;
        goto L_803BC86C;
    // 0x803BC864: or          $s3, $zero, $zero
    ctx->r19 = 0 | 0;
L_803BC868:
    // 0x803BC868: addiu       $s3, $zero, 0x1
    ctx->r19 = ADD32(0, 0X1);
L_803BC86C:
    // 0x803BC86C: sltiu       $at, $v0, 0x5
    ctx->r1 = ctx->r2 < 0X5 ? 1 : 0;
    // 0x803BC870: beq         $at, $zero, L_803BD138
    if (ctx->r1 == 0) {
        // 0x803BC874: sll         $t4, $v0, 2
        ctx->r12 = S32(ctx->r2 << 2);
            goto L_803BD138;
    }
    // 0x803BC874: sll         $t4, $v0, 2
    ctx->r12 = S32(ctx->r2 << 2);
    // 0x803BC878: lui         $at, 0x803C
    ctx->r1 = S32(0X803C << 16);
    // 0x803BC87C: addu        $at, $at, $t4
    gpr jr_addend_803BC888 = ctx->r12;
    ctx->r1 = ADD32(ctx->r1, ctx->r12);
    // 0x803BC880: lw          $t4, -0x2574($at)
    ctx->r12 = ADD32(ctx->r1, -0X2574);
    // 0x803BC884: nop

    // 0x803BC888: jr          $t4
    // 0x803BC88C: nop

    switch (jr_addend_803BC888 >> 2) {
        case 0: goto L_803BC890; break;
        case 1: goto L_803BC890; break;
        case 2: goto L_803BC890; break;
        case 3: goto L_803BCE28; break;
        case 4: goto L_803BCFBC; break;
        default: switch_error(__func__, 0x803BC888, 0x803BDA8C);
    }
    // 0x803BC88C: nop

L_803BC890:
    // 0x803BC890: lb          $a1, 0x34($s1)
    ctx->r5 = MEM_B(ctx->r17, 0X34);
    // 0x803BC894: sll         $t4, $s7, 5
    ctx->r12 = S32(ctx->r23 << 5);
    // 0x803BC898: slti        $at, $a1, 0x46
    ctx->r1 = SIGNED(ctx->r5) < 0X46 ? 1 : 0;
    // 0x803BC89C: beq         $at, $zero, L_803BCDB8
    if (ctx->r1 == 0) {
        // 0x803BC8A0: addu        $a0, $v1, $t4
        ctx->r4 = ADD32(ctx->r3, ctx->r12);
            goto L_803BCDB8;
    }
    // 0x803BC8A0: addu        $a0, $v1, $t4
    ctx->r4 = ADD32(ctx->r3, ctx->r12);
    // 0x803BC8A4: sll         $a0, $s2, 16
    ctx->r4 = S32(ctx->r18 << 16);
    // 0x803BC8A8: sra         $t5, $a0, 16
    ctx->r13 = S32(SIGNED(ctx->r4) >> 16);
    // 0x803BC8AC: jal         0x8003EC60
    // 0x803BC8B0: or          $a0, $t5, $zero
    ctx->r4 = ctx->r13 | 0;
    func_8003EC60(rdram, ctx);
        goto after_5;
    // 0x803BC8B0: or          $a0, $t5, $zero
    ctx->r4 = ctx->r13 | 0;
    after_5:
    // 0x803BC8B4: lui         $t7, 0x803C
    ctx->r15 = S32(0X803C << 16);
    // 0x803BC8B8: addiu       $t7, $t7, -0x2604
    ctx->r15 = ADD32(ctx->r15, -0X2604);
    // 0x803BC8BC: addu        $s0, $s5, $t7
    ctx->r16 = ADD32(ctx->r21, ctx->r15);
    // 0x803BC8C0: lbu         $a1, 0x0($s0)
    ctx->r5 = MEM_BU(ctx->r16, 0X0);
    // 0x803BC8C4: lbu         $a2, 0x1($s0)
    ctx->r6 = MEM_BU(ctx->r16, 0X1);
    // 0x803BC8C8: lb          $t3, 0x0($v0)
    ctx->r11 = MEM_B(ctx->r2, 0X0);
    // 0x803BC8CC: lui         $v1, 0x800E
    ctx->r3 = S32(0X800E << 16);
    // 0x803BC8D0: sll         $t6, $s7, 5
    ctx->r14 = S32(ctx->r23 << 5);
    // 0x803BC8D4: addiu       $v1, $v1, -0x3770
    ctx->r3 = ADD32(ctx->r3, -0X3770);
    // 0x803BC8D8: addiu       $a1, $a1, 0x2A
    ctx->r5 = ADD32(ctx->r5, 0X2A);
    // 0x803BC8DC: addiu       $a2, $a2, 0x1A
    ctx->r6 = ADD32(ctx->r6, 0X1A);
    // 0x803BC8E0: sll         $t1, $a2, 16
    ctx->r9 = S32(ctx->r6 << 16);
    // 0x803BC8E4: sll         $t8, $a1, 16
    ctx->r24 = S32(ctx->r5 << 16);
    // 0x803BC8E8: addu        $a0, $v1, $t6
    ctx->r4 = ADD32(ctx->r3, ctx->r14);
    // 0x803BC8EC: sll         $t4, $t3, 2
    ctx->r12 = S32(ctx->r11 << 2);
    // 0x803BC8F0: lui         $t6, 0x8028
    ctx->r14 = S32(0X8028 << 16);
    // 0x803BC8F4: sra         $a1, $t8, 16
    ctx->r5 = S32(SIGNED(ctx->r24) >> 16);
    // 0x803BC8F8: sra         $a2, $t1, 16
    ctx->r6 = S32(SIGNED(ctx->r9) >> 16);
    // 0x803BC8FC: addiu       $s7, $s7, 0x1
    ctx->r23 = ADD32(ctx->r23, 0X1);
    // 0x803BC900: lui         $at, 0x2
    ctx->r1 = S32(0X2 << 16);
    // 0x803BC904: subu        $t4, $t4, $t3
    ctx->r12 = SUB32(ctx->r12, ctx->r11);
    // 0x803BC908: addiu       $t5, $t4, -0x3
    ctx->r13 = ADD32(ctx->r12, -0X3);
    // 0x803BC90C: ori         $at, $at, 0xFEE8
    ctx->r1 = ctx->r1 | 0XFEE8;
    // 0x803BC910: sll         $t2, $s7, 16
    ctx->r10 = S32(ctx->r23 << 16);
    // 0x803BC914: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
    // 0x803BC918: addiu       $t8, $zero, 0x2
    ctx->r24 = ADD32(0, 0X2);
    // 0x803BC91C: addiu       $t6, $t6, 0x7364
    ctx->r14 = ADD32(ctx->r14, 0X7364);
    // 0x803BC920: addiu       $t7, $zero, 0x3
    ctx->r15 = ADD32(0, 0X3);
    // 0x803BC924: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x803BC928: sw          $t9, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r25;
    // 0x803BC92C: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x803BC930: addu        $a3, $t5, $t6
    ctx->r7 = ADD32(ctx->r13, ctx->r14);
    // 0x803BC934: sw          $t8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r24;
    // 0x803BC938: sw          $t1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r9;
    // 0x803BC93C: sra         $s7, $t2, 16
    ctx->r23 = S32(SIGNED(ctx->r10) >> 16);
    // 0x803BC940: jal         0x8002F528
    // 0x803BC944: addu        $a0, $a0, $at
    ctx->r4 = ADD32(ctx->r4, ctx->r1);
    func_8002F528(rdram, ctx);
        goto after_6;
    // 0x803BC944: addu        $a0, $a0, $at
    ctx->r4 = ADD32(ctx->r4, ctx->r1);
    after_6:
    // 0x803BC948: sll         $a0, $s2, 16
    ctx->r4 = S32(ctx->r18 << 16);
    // 0x803BC94C: sra         $t4, $a0, 16
    ctx->r12 = S32(SIGNED(ctx->r4) >> 16);
    // 0x803BC950: lb          $a1, 0x34($s1)
    ctx->r5 = MEM_B(ctx->r17, 0X34);
    // 0x803BC954: jal         0x8003EC60
    // 0x803BC958: or          $a0, $t4, $zero
    ctx->r4 = ctx->r12 | 0;
    func_8003EC60(rdram, ctx);
        goto after_7;
    // 0x803BC958: or          $a0, $t4, $zero
    ctx->r4 = ctx->r12 | 0;
    after_7:
    // 0x803BC95C: lbu         $a1, 0x0($s0)
    ctx->r5 = MEM_BU(ctx->r16, 0X0);
    // 0x803BC960: lbu         $a2, 0x1($s0)
    ctx->r6 = MEM_BU(ctx->r16, 0X1);
    // 0x803BC964: lui         $v1, 0x800E
    ctx->r3 = S32(0X800E << 16);
    // 0x803BC968: sll         $t5, $s7, 5
    ctx->r13 = S32(ctx->r23 << 5);
    // 0x803BC96C: addiu       $s7, $s7, 0x1
    ctx->r23 = ADD32(ctx->r23, 0X1);
    // 0x803BC970: addiu       $v1, $v1, -0x3770
    ctx->r3 = ADD32(ctx->r3, -0X3770);
    // 0x803BC974: lui         $at, 0x2
    ctx->r1 = S32(0X2 << 16);
    // 0x803BC978: lb          $a3, 0x1($v0)
    ctx->r7 = MEM_B(ctx->r2, 0X1);
    // 0x803BC97C: addiu       $a1, $a1, 0x3F
    ctx->r5 = ADD32(ctx->r5, 0X3F);
    // 0x803BC980: addiu       $a2, $a2, 0x1A
    ctx->r6 = ADD32(ctx->r6, 0X1A);
    // 0x803BC984: sll         $t8, $a2, 16
    ctx->r24 = S32(ctx->r6 << 16);
    // 0x803BC988: sll         $t6, $a1, 16
    ctx->r14 = S32(ctx->r5 << 16);
    // 0x803BC98C: ori         $at, $at, 0xFEE8
    ctx->r1 = ctx->r1 | 0XFEE8;
    // 0x803BC990: addu        $a0, $v1, $t5
    ctx->r4 = ADD32(ctx->r3, ctx->r13);
    // 0x803BC994: sll         $t3, $s7, 16
    ctx->r11 = S32(ctx->r23 << 16);
    // 0x803BC998: addiu       $t1, $zero, 0x2
    ctx->r9 = ADD32(0, 0X2);
    // 0x803BC99C: addiu       $t2, $zero, 0x2
    ctx->r10 = ADD32(0, 0X2);
    // 0x803BC9A0: sw          $t2, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r10;
    // 0x803BC9A4: sw          $t1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r9;
    // 0x803BC9A8: sra         $s7, $t3, 16
    ctx->r23 = S32(SIGNED(ctx->r11) >> 16);
    // 0x803BC9AC: addu        $a0, $a0, $at
    ctx->r4 = ADD32(ctx->r4, ctx->r1);
    // 0x803BC9B0: sra         $a1, $t6, 16
    ctx->r5 = S32(SIGNED(ctx->r14) >> 16);
    // 0x803BC9B4: jal         0x8002F6EC
    // 0x803BC9B8: sra         $a2, $t8, 16
    ctx->r6 = S32(SIGNED(ctx->r24) >> 16);
    func_8002F6EC(rdram, ctx);
        goto after_8;
    // 0x803BC9B8: sra         $a2, $t8, 16
    ctx->r6 = S32(SIGNED(ctx->r24) >> 16);
    after_8:
    // 0x803BC9BC: sll         $a0, $s3, 16
    ctx->r4 = S32(ctx->r19 << 16);
    // 0x803BC9C0: sra         $t5, $a0, 16
    ctx->r13 = S32(SIGNED(ctx->r4) >> 16);
    // 0x803BC9C4: lb          $a1, 0x60($s1)
    ctx->r5 = MEM_B(ctx->r17, 0X60);
    // 0x803BC9C8: jal         0x80049794
    // 0x803BC9CC: or          $a0, $t5, $zero
    ctx->r4 = ctx->r13 | 0;
    func_80049794(rdram, ctx);
        goto after_9;
    // 0x803BC9CC: or          $a0, $t5, $zero
    ctx->r4 = ctx->r13 | 0;
    after_9:
    // 0x803BC9D0: lui         $v1, 0x800E
    ctx->r3 = S32(0X800E << 16);
    // 0x803BC9D4: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x803BC9D8: bne         $v0, $at, L_803BCA58
    if (ctx->r2 != ctx->r1) {
        // 0x803BC9DC: addiu       $v1, $v1, -0x3770
        ctx->r3 = ADD32(ctx->r3, -0X3770);
            goto L_803BCA58;
    }
    // 0x803BC9DC: addiu       $v1, $v1, -0x3770
    ctx->r3 = ADD32(ctx->r3, -0X3770);
    // 0x803BC9E0: lb          $t6, 0x60($s1)
    ctx->r14 = MEM_B(ctx->r17, 0X60);
    // 0x803BC9E4: addiu       $at, $zero, 0x7
    ctx->r1 = ADD32(0, 0X7);
    // 0x803BC9E8: bne         $t6, $at, L_803BCA58
    if (ctx->r14 != ctx->r1) {
        // 0x803BC9EC: sll         $t7, $s7, 5
        ctx->r15 = S32(ctx->r23 << 5);
            goto L_803BCA58;
    }
    // 0x803BC9EC: sll         $t7, $s7, 5
    ctx->r15 = S32(ctx->r23 << 5);
    // 0x803BC9F0: lbu         $a2, 0x1($s0)
    ctx->r6 = MEM_BU(ctx->r16, 0X1);
    // 0x803BC9F4: lui         $at, 0x2
    ctx->r1 = S32(0X2 << 16);
    // 0x803BC9F8: lui         $a3, 0x8028
    ctx->r7 = S32(0X8028 << 16);
    // 0x803BC9FC: addiu       $s7, $s7, 0x1
    ctx->r23 = ADD32(ctx->r23, 0X1);
    // 0x803BCA00: addiu       $a2, $a2, 0x27
    ctx->r6 = ADD32(ctx->r6, 0X27);
    // 0x803BCA04: sll         $t8, $a2, 16
    ctx->r24 = S32(ctx->r6 << 16);
    // 0x803BCA08: sll         $t5, $s7, 16
    ctx->r13 = S32(ctx->r23 << 16);
    // 0x803BCA0C: lw          $a3, 0x3A90($a3)
    ctx->r7 = MEM_W(ctx->r7, 0X3A90);
    // 0x803BCA10: ori         $at, $at, 0xFEE8
    ctx->r1 = ctx->r1 | 0XFEE8;
    // 0x803BCA14: addu        $a0, $v1, $t7
    ctx->r4 = ADD32(ctx->r3, ctx->r15);
    // 0x803BCA18: lbu         $a1, 0x0($s0)
    ctx->r5 = MEM_BU(ctx->r16, 0X0);
    // 0x803BCA1C: addiu       $t1, $zero, 0x1F
    ctx->r9 = ADD32(0, 0X1F);
    // 0x803BCA20: addiu       $t2, $zero, 0x2
    ctx->r10 = ADD32(0, 0X2);
    // 0x803BCA24: addiu       $t3, $zero, 0x1
    ctx->r11 = ADD32(0, 0X1);
    // 0x803BCA28: addiu       $t4, $zero, 0x1
    ctx->r12 = ADD32(0, 0X1);
    // 0x803BCA2C: sw          $t4, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r12;
    // 0x803BCA30: sw          $t3, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r11;
    // 0x803BCA34: sw          $t2, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r10;
    // 0x803BCA38: sw          $t1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r9;
    // 0x803BCA3C: addu        $a0, $a0, $at
    ctx->r4 = ADD32(ctx->r4, ctx->r1);
    // 0x803BCA40: sra         $s7, $t5, 16
    ctx->r23 = S32(SIGNED(ctx->r13) >> 16);
    // 0x803BCA44: jal         0x8002F528
    // 0x803BCA48: sra         $a2, $t8, 16
    ctx->r6 = S32(SIGNED(ctx->r24) >> 16);
    func_8002F528(rdram, ctx);
        goto after_10;
    // 0x803BCA48: sra         $a2, $t8, 16
    ctx->r6 = S32(SIGNED(ctx->r24) >> 16);
    after_10:
    // 0x803BCA4C: lui         $v1, 0x800E
    ctx->r3 = S32(0X800E << 16);
    // 0x803BCA50: b           L_803BD138
    // 0x803BCA54: addiu       $v1, $v1, -0x3770
    ctx->r3 = ADD32(ctx->r3, -0X3770);
        goto L_803BD138;
    // 0x803BCA54: addiu       $v1, $v1, -0x3770
    ctx->r3 = ADD32(ctx->r3, -0X3770);
L_803BCA58:
    // 0x803BCA58: sll         $t7, $s7, 5
    ctx->r15 = S32(ctx->r23 << 5);
    // 0x803BCA5C: addiu       $s7, $s7, 0x1
    ctx->r23 = ADD32(ctx->r23, 0X1);
    // 0x803BCA60: lui         $at, 0x2
    ctx->r1 = S32(0X2 << 16);
    // 0x803BCA64: ori         $at, $at, 0xFEE8
    ctx->r1 = ctx->r1 | 0XFEE8;
    // 0x803BCA68: sll         $t3, $s7, 16
    ctx->r11 = S32(ctx->r23 << 16);
    // 0x803BCA6C: addu        $a0, $v1, $t7
    ctx->r4 = ADD32(ctx->r3, ctx->r15);
    // 0x803BCA70: lbu         $a1, 0x0($s0)
    ctx->r5 = MEM_BU(ctx->r16, 0X0);
    // 0x803BCA74: lbu         $a2, 0x1($s0)
    ctx->r6 = MEM_BU(ctx->r16, 0X1);
    // 0x803BCA78: lui         $a3, 0x8028
    ctx->r7 = S32(0X8028 << 16);
    // 0x803BCA7C: addiu       $t8, $zero, 0x10
    ctx->r24 = ADD32(0, 0X10);
    // 0x803BCA80: addiu       $t9, $zero, 0x2
    ctx->r25 = ADD32(0, 0X2);
    // 0x803BCA84: addiu       $t1, $zero, 0x6
    ctx->r9 = ADD32(0, 0X6);
    // 0x803BCA88: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x803BCA8C: sw          $t2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r10;
    // 0x803BCA90: sw          $t1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r9;
    // 0x803BCA94: sw          $t9, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r25;
    // 0x803BCA98: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    // 0x803BCA9C: addiu       $a3, $a3, 0x7328
    ctx->r7 = ADD32(ctx->r7, 0X7328);
    // 0x803BCAA0: addu        $a0, $a0, $at
    ctx->r4 = ADD32(ctx->r4, ctx->r1);
    // 0x803BCAA4: jal         0x8002F528
    // 0x803BCAA8: sra         $s7, $t3, 16
    ctx->r23 = S32(SIGNED(ctx->r11) >> 16);
    func_8002F528(rdram, ctx);
        goto after_11;
    // 0x803BCAA8: sra         $s7, $t3, 16
    ctx->r23 = S32(SIGNED(ctx->r11) >> 16);
    after_11:
    // 0x803BCAAC: lbu         $a1, 0x0($s0)
    ctx->r5 = MEM_BU(ctx->r16, 0X0);
    // 0x803BCAB0: lbu         $a2, 0x1($s0)
    ctx->r6 = MEM_BU(ctx->r16, 0X1);
    // 0x803BCAB4: lui         $v1, 0x800E
    ctx->r3 = S32(0X800E << 16);
    // 0x803BCAB8: sll         $t5, $s7, 5
    ctx->r13 = S32(ctx->r23 << 5);
    // 0x803BCABC: addiu       $v1, $v1, -0x3770
    ctx->r3 = ADD32(ctx->r3, -0X3770);
    // 0x803BCAC0: addiu       $s7, $s7, 0x1
    ctx->r23 = ADD32(ctx->r23, 0X1);
    // 0x803BCAC4: lui         $at, 0x2
    ctx->r1 = S32(0X2 << 16);
    // 0x803BCAC8: lb          $a3, 0x34($s1)
    ctx->r7 = MEM_B(ctx->r17, 0X34);
    // 0x803BCACC: addiu       $a1, $a1, 0x2A
    ctx->r5 = ADD32(ctx->r5, 0X2A);
    // 0x803BCAD0: addiu       $a2, $a2, 0x27
    ctx->r6 = ADD32(ctx->r6, 0X27);
    // 0x803BCAD4: sll         $t8, $a2, 16
    ctx->r24 = S32(ctx->r6 << 16);
    // 0x803BCAD8: sll         $t6, $a1, 16
    ctx->r14 = S32(ctx->r5 << 16);
    // 0x803BCADC: ori         $at, $at, 0xFEE8
    ctx->r1 = ctx->r1 | 0XFEE8;
    // 0x803BCAE0: sll         $t3, $s7, 16
    ctx->r11 = S32(ctx->r23 << 16);
    // 0x803BCAE4: addu        $a0, $v1, $t5
    ctx->r4 = ADD32(ctx->r3, ctx->r13);
    // 0x803BCAE8: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
    // 0x803BCAEC: addiu       $t2, $zero, 0x2
    ctx->r10 = ADD32(0, 0X2);
    // 0x803BCAF0: sw          $t2, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r10;
    // 0x803BCAF4: sw          $t1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r9;
    // 0x803BCAF8: addu        $a0, $a0, $at
    ctx->r4 = ADD32(ctx->r4, ctx->r1);
    // 0x803BCAFC: sra         $s7, $t3, 16
    ctx->r23 = S32(SIGNED(ctx->r11) >> 16);
    // 0x803BCB00: sra         $a1, $t6, 16
    ctx->r5 = S32(SIGNED(ctx->r14) >> 16);
    // 0x803BCB04: jal         0x8002F6EC
    // 0x803BCB08: sra         $a2, $t8, 16
    ctx->r6 = S32(SIGNED(ctx->r24) >> 16);
    func_8002F6EC(rdram, ctx);
        goto after_12;
    // 0x803BCB08: sra         $a2, $t8, 16
    ctx->r6 = S32(SIGNED(ctx->r24) >> 16);
    after_12:
    // 0x803BCB0C: lb          $a0, 0x34($s1)
    ctx->r4 = MEM_B(ctx->r17, 0X34);
    // 0x803BCB10: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x803BCB14: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    // 0x803BCB18: jal         0x8001D4C0
    // 0x803BCB1C: addiu       $a0, $a0, -0x1
    ctx->r4 = ADD32(ctx->r4, -0X1);
    func_8001D4C0(rdram, ctx);
        goto after_13;
    // 0x803BCB1C: addiu       $a0, $a0, -0x1
    ctx->r4 = ADD32(ctx->r4, -0X1);
    after_13:
    // 0x803BCB20: lbu         $a1, 0x0($s0)
    ctx->r5 = MEM_BU(ctx->r16, 0X0);
    // 0x803BCB24: lbu         $a2, 0x1($s0)
    ctx->r6 = MEM_BU(ctx->r16, 0X1);
    // 0x803BCB28: lui         $v1, 0x800E
    ctx->r3 = S32(0X800E << 16);
    // 0x803BCB2C: sll         $t5, $s7, 5
    ctx->r13 = S32(ctx->r23 << 5);
    // 0x803BCB30: addiu       $a1, $a1, 0x38
    ctx->r5 = ADD32(ctx->r5, 0X38);
    // 0x803BCB34: sll         $t6, $a1, 16
    ctx->r14 = S32(ctx->r5 << 16);
    // 0x803BCB38: addiu       $v1, $v1, -0x3770
    ctx->r3 = ADD32(ctx->r3, -0X3770);
    // 0x803BCB3C: addu        $a0, $v1, $t5
    ctx->r4 = ADD32(ctx->r3, ctx->r13);
    // 0x803BCB40: sra         $a1, $t6, 16
    ctx->r5 = S32(SIGNED(ctx->r14) >> 16);
    // 0x803BCB44: addiu       $s7, $s7, 0x1
    ctx->r23 = ADD32(ctx->r23, 0X1);
    // 0x803BCB48: lui         $at, 0x2
    ctx->r1 = S32(0X2 << 16);
    // 0x803BCB4C: lui         $t2, 0x8028
    ctx->r10 = S32(0X8028 << 16);
    // 0x803BCB50: addiu       $a2, $a2, 0x27
    ctx->r6 = ADD32(ctx->r6, 0X27);
    // 0x803BCB54: sll         $t8, $a2, 16
    ctx->r24 = S32(ctx->r6 << 16);
    // 0x803BCB58: addiu       $t2, $t2, 0x7388
    ctx->r10 = ADD32(ctx->r10, 0X7388);
    // 0x803BCB5C: ori         $at, $at, 0xFEE8
    ctx->r1 = ctx->r1 | 0XFEE8;
    // 0x803BCB60: sll         $t7, $s7, 16
    ctx->r15 = S32(ctx->r23 << 16);
    // 0x803BCB64: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x803BCB68: addiu       $t5, $zero, 0x1
    ctx->r13 = ADD32(0, 0X1);
    // 0x803BCB6C: sll         $t1, $v0, 1
    ctx->r9 = S32(ctx->r2 << 1);
    // 0x803BCB70: addiu       $t3, $zero, 0x2
    ctx->r11 = ADD32(0, 0X2);
    // 0x803BCB74: addiu       $t4, $zero, 0x2
    ctx->r12 = ADD32(0, 0X2);
    // 0x803BCB78: sw          $t4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r12;
    // 0x803BCB7C: sw          $t3, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r11;
    // 0x803BCB80: addu        $a3, $t1, $t2
    ctx->r7 = ADD32(ctx->r9, ctx->r10);
    // 0x803BCB84: sw          $t5, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r13;
    // 0x803BCB88: sw          $t6, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r14;
    // 0x803BCB8C: sra         $s7, $t7, 16
    ctx->r23 = S32(SIGNED(ctx->r15) >> 16);
    // 0x803BCB90: addu        $a0, $a0, $at
    ctx->r4 = ADD32(ctx->r4, ctx->r1);
    // 0x803BCB94: jal         0x8002F528
    // 0x803BCB98: sra         $a2, $t8, 16
    ctx->r6 = S32(SIGNED(ctx->r24) >> 16);
    func_8002F528(rdram, ctx);
        goto after_14;
    // 0x803BCB98: sra         $a2, $t8, 16
    ctx->r6 = S32(SIGNED(ctx->r24) >> 16);
    after_14:
    // 0x803BCB9C: lbu         $a1, 0x0($s0)
    ctx->r5 = MEM_BU(ctx->r16, 0X0);
    // 0x803BCBA0: lbu         $a2, 0x1($s0)
    ctx->r6 = MEM_BU(ctx->r16, 0X1);
    // 0x803BCBA4: lui         $v1, 0x800E
    ctx->r3 = S32(0X800E << 16);
    // 0x803BCBA8: sll         $t9, $s7, 5
    ctx->r25 = S32(ctx->r23 << 5);
    // 0x803BCBAC: addiu       $v1, $v1, -0x3770
    ctx->r3 = ADD32(ctx->r3, -0X3770);
    // 0x803BCBB0: addiu       $s7, $s7, 0x1
    ctx->r23 = ADD32(ctx->r23, 0X1);
    // 0x803BCBB4: lui         $at, 0x2
    ctx->r1 = S32(0X2 << 16);
    // 0x803BCBB8: lb          $a3, 0x38($s1)
    ctx->r7 = MEM_B(ctx->r17, 0X38);
    // 0x803BCBBC: addiu       $a1, $a1, 0xE
    ctx->r5 = ADD32(ctx->r5, 0XE);
    // 0x803BCBC0: addiu       $a2, $a2, 0x34
    ctx->r6 = ADD32(ctx->r6, 0X34);
    // 0x803BCBC4: sll         $t3, $a2, 16
    ctx->r11 = S32(ctx->r6 << 16);
    // 0x803BCBC8: sll         $t1, $a1, 16
    ctx->r9 = S32(ctx->r5 << 16);
    // 0x803BCBCC: ori         $at, $at, 0xFEE8
    ctx->r1 = ctx->r1 | 0XFEE8;
    // 0x803BCBD0: sll         $t7, $s7, 16
    ctx->r15 = S32(ctx->r23 << 16);
    // 0x803BCBD4: addu        $a0, $v1, $t9
    ctx->r4 = ADD32(ctx->r3, ctx->r25);
    // 0x803BCBD8: addiu       $t5, $zero, 0x1
    ctx->r13 = ADD32(0, 0X1);
    // 0x803BCBDC: addiu       $t6, $zero, 0x2
    ctx->r14 = ADD32(0, 0X2);
    // 0x803BCBE0: sw          $t6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r14;
    // 0x803BCBE4: sw          $t5, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r13;
    // 0x803BCBE8: addu        $a0, $a0, $at
    ctx->r4 = ADD32(ctx->r4, ctx->r1);
    // 0x803BCBEC: sra         $s7, $t7, 16
    ctx->r23 = S32(SIGNED(ctx->r15) >> 16);
    // 0x803BCBF0: sra         $a1, $t1, 16
    ctx->r5 = S32(SIGNED(ctx->r9) >> 16);
    // 0x803BCBF4: jal         0x8002F6EC
    // 0x803BCBF8: sra         $a2, $t3, 16
    ctx->r6 = S32(SIGNED(ctx->r11) >> 16);
    func_8002F6EC(rdram, ctx);
        goto after_15;
    // 0x803BCBF8: sra         $a2, $t3, 16
    ctx->r6 = S32(SIGNED(ctx->r11) >> 16);
    after_15:
    // 0x803BCBFC: lbu         $a1, 0x0($s0)
    ctx->r5 = MEM_BU(ctx->r16, 0X0);
    // 0x803BCC00: lbu         $a2, 0x1($s0)
    ctx->r6 = MEM_BU(ctx->r16, 0X1);
    // 0x803BCC04: lui         $v1, 0x800E
    ctx->r3 = S32(0X800E << 16);
    // 0x803BCC08: sll         $t9, $s7, 5
    ctx->r25 = S32(ctx->r23 << 5);
    // 0x803BCC0C: addiu       $v1, $v1, -0x3770
    ctx->r3 = ADD32(ctx->r3, -0X3770);
    // 0x803BCC10: addiu       $s7, $s7, 0x1
    ctx->r23 = ADD32(ctx->r23, 0X1);
    // 0x803BCC14: lui         $at, 0x2
    ctx->r1 = S32(0X2 << 16);
    // 0x803BCC18: lb          $a3, 0x4C($s1)
    ctx->r7 = MEM_B(ctx->r17, 0X4C);
    // 0x803BCC1C: addiu       $a1, $a1, 0x31
    ctx->r5 = ADD32(ctx->r5, 0X31);
    // 0x803BCC20: addiu       $a2, $a2, 0x34
    ctx->r6 = ADD32(ctx->r6, 0X34);
    // 0x803BCC24: sll         $t3, $a2, 16
    ctx->r11 = S32(ctx->r6 << 16);
    // 0x803BCC28: sll         $t1, $a1, 16
    ctx->r9 = S32(ctx->r5 << 16);
    // 0x803BCC2C: ori         $at, $at, 0xFEE8
    ctx->r1 = ctx->r1 | 0XFEE8;
    // 0x803BCC30: sll         $t7, $s7, 16
    ctx->r15 = S32(ctx->r23 << 16);
    // 0x803BCC34: addu        $a0, $v1, $t9
    ctx->r4 = ADD32(ctx->r3, ctx->r25);
    // 0x803BCC38: addiu       $t5, $zero, 0x1
    ctx->r13 = ADD32(0, 0X1);
    // 0x803BCC3C: addiu       $t6, $zero, 0x2
    ctx->r14 = ADD32(0, 0X2);
    // 0x803BCC40: sw          $t6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r14;
    // 0x803BCC44: sw          $t5, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r13;
    // 0x803BCC48: addu        $a0, $a0, $at
    ctx->r4 = ADD32(ctx->r4, ctx->r1);
    // 0x803BCC4C: sra         $s7, $t7, 16
    ctx->r23 = S32(SIGNED(ctx->r15) >> 16);
    // 0x803BCC50: sra         $a1, $t1, 16
    ctx->r5 = S32(SIGNED(ctx->r9) >> 16);
    // 0x803BCC54: jal         0x8002F6EC
    // 0x803BCC58: sra         $a2, $t3, 16
    ctx->r6 = S32(SIGNED(ctx->r11) >> 16);
    func_8002F6EC(rdram, ctx);
        goto after_16;
    // 0x803BCC58: sra         $a2, $t3, 16
    ctx->r6 = S32(SIGNED(ctx->r11) >> 16);
    after_16:
    // 0x803BCC5C: lbu         $a1, 0x0($s0)
    ctx->r5 = MEM_BU(ctx->r16, 0X0);
    // 0x803BCC60: lbu         $a2, 0x1($s0)
    ctx->r6 = MEM_BU(ctx->r16, 0X1);
    // 0x803BCC64: lui         $v1, 0x800E
    ctx->r3 = S32(0X800E << 16);
    // 0x803BCC68: sll         $t9, $s7, 5
    ctx->r25 = S32(ctx->r23 << 5);
    // 0x803BCC6C: addiu       $v1, $v1, -0x3770
    ctx->r3 = ADD32(ctx->r3, -0X3770);
    // 0x803BCC70: addiu       $s7, $s7, 0x1
    ctx->r23 = ADD32(ctx->r23, 0X1);
    // 0x803BCC74: lui         $at, 0x2
    ctx->r1 = S32(0X2 << 16);
    // 0x803BCC78: lb          $a3, 0x5C($s1)
    ctx->r7 = MEM_B(ctx->r17, 0X5C);
    // 0x803BCC7C: addiu       $a1, $a1, 0x54
    ctx->r5 = ADD32(ctx->r5, 0X54);
    // 0x803BCC80: addiu       $a2, $a2, 0x34
    ctx->r6 = ADD32(ctx->r6, 0X34);
    // 0x803BCC84: sll         $t3, $a2, 16
    ctx->r11 = S32(ctx->r6 << 16);
    // 0x803BCC88: sll         $t1, $a1, 16
    ctx->r9 = S32(ctx->r5 << 16);
    // 0x803BCC8C: ori         $at, $at, 0xFEE8
    ctx->r1 = ctx->r1 | 0XFEE8;
    // 0x803BCC90: sll         $t7, $s7, 16
    ctx->r15 = S32(ctx->r23 << 16);
    // 0x803BCC94: addu        $a0, $v1, $t9
    ctx->r4 = ADD32(ctx->r3, ctx->r25);
    // 0x803BCC98: addiu       $t5, $zero, 0x1
    ctx->r13 = ADD32(0, 0X1);
    // 0x803BCC9C: addiu       $t6, $zero, 0x2
    ctx->r14 = ADD32(0, 0X2);
    // 0x803BCCA0: sw          $t6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r14;
    // 0x803BCCA4: sw          $t5, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r13;
    // 0x803BCCA8: addu        $a0, $a0, $at
    ctx->r4 = ADD32(ctx->r4, ctx->r1);
    // 0x803BCCAC: sra         $s7, $t7, 16
    ctx->r23 = S32(SIGNED(ctx->r15) >> 16);
    // 0x803BCCB0: sra         $a1, $t1, 16
    ctx->r5 = S32(SIGNED(ctx->r9) >> 16);
    // 0x803BCCB4: jal         0x8002F6EC
    // 0x803BCCB8: sra         $a2, $t3, 16
    ctx->r6 = S32(SIGNED(ctx->r11) >> 16);
    func_8002F6EC(rdram, ctx);
        goto after_17;
    // 0x803BCCB8: sra         $a2, $t3, 16
    ctx->r6 = S32(SIGNED(ctx->r11) >> 16);
    after_17:
    // 0x803BCCBC: lbu         $a1, 0x0($s0)
    ctx->r5 = MEM_BU(ctx->r16, 0X0);
    // 0x803BCCC0: lbu         $a2, 0x1($s0)
    ctx->r6 = MEM_BU(ctx->r16, 0X1);
    // 0x803BCCC4: lui         $v1, 0x800E
    ctx->r3 = S32(0X800E << 16);
    // 0x803BCCC8: sll         $t9, $s7, 5
    ctx->r25 = S32(ctx->r23 << 5);
    // 0x803BCCCC: addiu       $v1, $v1, -0x3770
    ctx->r3 = ADD32(ctx->r3, -0X3770);
    // 0x803BCCD0: addiu       $s7, $s7, 0x1
    ctx->r23 = ADD32(ctx->r23, 0X1);
    // 0x803BCCD4: lui         $at, 0x2
    ctx->r1 = S32(0X2 << 16);
    // 0x803BCCD8: lb          $a3, 0x3C($s1)
    ctx->r7 = MEM_B(ctx->r17, 0X3C);
    // 0x803BCCDC: addiu       $a1, $a1, 0x15
    ctx->r5 = ADD32(ctx->r5, 0X15);
    // 0x803BCCE0: addiu       $a2, $a2, 0x41
    ctx->r6 = ADD32(ctx->r6, 0X41);
    // 0x803BCCE4: sll         $t3, $a2, 16
    ctx->r11 = S32(ctx->r6 << 16);
    // 0x803BCCE8: sll         $t1, $a1, 16
    ctx->r9 = S32(ctx->r5 << 16);
    // 0x803BCCEC: ori         $at, $at, 0xFEE8
    ctx->r1 = ctx->r1 | 0XFEE8;
    // 0x803BCCF0: sll         $t7, $s7, 16
    ctx->r15 = S32(ctx->r23 << 16);
    // 0x803BCCF4: addu        $a0, $v1, $t9
    ctx->r4 = ADD32(ctx->r3, ctx->r25);
    // 0x803BCCF8: addiu       $t5, $zero, 0x1
    ctx->r13 = ADD32(0, 0X1);
    // 0x803BCCFC: addiu       $t6, $zero, 0x2
    ctx->r14 = ADD32(0, 0X2);
    // 0x803BCD00: sw          $t6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r14;
    // 0x803BCD04: sw          $t5, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r13;
    // 0x803BCD08: addu        $a0, $a0, $at
    ctx->r4 = ADD32(ctx->r4, ctx->r1);
    // 0x803BCD0C: sra         $s7, $t7, 16
    ctx->r23 = S32(SIGNED(ctx->r15) >> 16);
    // 0x803BCD10: sra         $a1, $t1, 16
    ctx->r5 = S32(SIGNED(ctx->r9) >> 16);
    // 0x803BCD14: jal         0x8002F6EC
    // 0x803BCD18: sra         $a2, $t3, 16
    ctx->r6 = S32(SIGNED(ctx->r11) >> 16);
    func_8002F6EC(rdram, ctx);
        goto after_18;
    // 0x803BCD18: sra         $a2, $t3, 16
    ctx->r6 = S32(SIGNED(ctx->r11) >> 16);
    after_18:
    // 0x803BCD1C: lb          $a0, 0x3C($s1)
    ctx->r4 = MEM_B(ctx->r17, 0X3C);
    // 0x803BCD20: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x803BCD24: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    // 0x803BCD28: jal         0x8001D4C0
    // 0x803BCD2C: addiu       $a0, $a0, -0x1
    ctx->r4 = ADD32(ctx->r4, -0X1);
    func_8001D4C0(rdram, ctx);
        goto after_19;
    // 0x803BCD2C: addiu       $a0, $a0, -0x1
    ctx->r4 = ADD32(ctx->r4, -0X1);
    after_19:
    // 0x803BCD30: lbu         $a1, 0x0($s0)
    ctx->r5 = MEM_BU(ctx->r16, 0X0);
    // 0x803BCD34: lbu         $a2, 0x1($s0)
    ctx->r6 = MEM_BU(ctx->r16, 0X1);
    // 0x803BCD38: lui         $v1, 0x800E
    ctx->r3 = S32(0X800E << 16);
    // 0x803BCD3C: sll         $t9, $s7, 5
    ctx->r25 = S32(ctx->r23 << 5);
    // 0x803BCD40: addiu       $a1, $a1, 0x23
    ctx->r5 = ADD32(ctx->r5, 0X23);
    // 0x803BCD44: sll         $t1, $a1, 16
    ctx->r9 = S32(ctx->r5 << 16);
    // 0x803BCD48: addiu       $v1, $v1, -0x3770
    ctx->r3 = ADD32(ctx->r3, -0X3770);
    // 0x803BCD4C: addu        $a0, $v1, $t9
    ctx->r4 = ADD32(ctx->r3, ctx->r25);
    // 0x803BCD50: sra         $a1, $t1, 16
    ctx->r5 = S32(SIGNED(ctx->r9) >> 16);
    // 0x803BCD54: addiu       $s7, $s7, 0x1
    ctx->r23 = ADD32(ctx->r23, 0X1);
    // 0x803BCD58: lui         $at, 0x2
    ctx->r1 = S32(0X2 << 16);
    // 0x803BCD5C: lui         $t6, 0x8028
    ctx->r14 = S32(0X8028 << 16);
    // 0x803BCD60: addiu       $a2, $a2, 0x41
    ctx->r6 = ADD32(ctx->r6, 0X41);
    // 0x803BCD64: sll         $t3, $a2, 16
    ctx->r11 = S32(ctx->r6 << 16);
    // 0x803BCD68: addiu       $t6, $t6, 0x7388
    ctx->r14 = ADD32(ctx->r14, 0X7388);
    // 0x803BCD6C: ori         $at, $at, 0xFEE8
    ctx->r1 = ctx->r1 | 0XFEE8;
    // 0x803BCD70: sll         $t2, $s7, 16
    ctx->r10 = S32(ctx->r23 << 16);
    // 0x803BCD74: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
    // 0x803BCD78: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x803BCD7C: sll         $t5, $v0, 1
    ctx->r13 = S32(ctx->r2 << 1);
    // 0x803BCD80: addiu       $t7, $zero, 0x2
    ctx->r15 = ADD32(0, 0X2);
    // 0x803BCD84: addiu       $t8, $zero, 0x2
    ctx->r24 = ADD32(0, 0X2);
    // 0x803BCD88: sw          $t8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r24;
    // 0x803BCD8C: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x803BCD90: addu        $a3, $t5, $t6
    ctx->r7 = ADD32(ctx->r13, ctx->r14);
    // 0x803BCD94: sw          $t9, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r25;
    // 0x803BCD98: sw          $t1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r9;
    // 0x803BCD9C: sra         $s7, $t2, 16
    ctx->r23 = S32(SIGNED(ctx->r10) >> 16);
    // 0x803BCDA0: addu        $a0, $a0, $at
    ctx->r4 = ADD32(ctx->r4, ctx->r1);
    // 0x803BCDA4: jal         0x8002F528
    // 0x803BCDA8: sra         $a2, $t3, 16
    ctx->r6 = S32(SIGNED(ctx->r11) >> 16);
    func_8002F528(rdram, ctx);
        goto after_20;
    // 0x803BCDA8: sra         $a2, $t3, 16
    ctx->r6 = S32(SIGNED(ctx->r11) >> 16);
    after_20:
    // 0x803BCDAC: lui         $v1, 0x800E
    ctx->r3 = S32(0X800E << 16);
    // 0x803BCDB0: b           L_803BD138
    // 0x803BCDB4: addiu       $v1, $v1, -0x3770
    ctx->r3 = ADD32(ctx->r3, -0X3770);
        goto L_803BD138;
    // 0x803BCDB4: addiu       $v1, $v1, -0x3770
    ctx->r3 = ADD32(ctx->r3, -0X3770);
L_803BCDB8:
    // 0x803BCDB8: lui         $t5, 0x803C
    ctx->r13 = S32(0X803C << 16);
    // 0x803BCDBC: addiu       $t5, $t5, -0x2604
    ctx->r13 = ADD32(ctx->r13, -0X2604);
    // 0x803BCDC0: addu        $s0, $s5, $t5
    ctx->r16 = ADD32(ctx->r21, ctx->r13);
    // 0x803BCDC4: lbu         $a2, 0x1($s0)
    ctx->r6 = MEM_BU(ctx->r16, 0X1);
    // 0x803BCDC8: lui         $at, 0x2
    ctx->r1 = S32(0X2 << 16);
    // 0x803BCDCC: addiu       $s7, $s7, 0x1
    ctx->r23 = ADD32(ctx->r23, 0X1);
    // 0x803BCDD0: addiu       $a2, $a2, 0x1A
    ctx->r6 = ADD32(ctx->r6, 0X1A);
    // 0x803BCDD4: sll         $t6, $a2, 16
    ctx->r14 = S32(ctx->r6 << 16);
    // 0x803BCDD8: sll         $t3, $s7, 16
    ctx->r11 = S32(ctx->r23 << 16);
    // 0x803BCDDC: ori         $at, $at, 0xFEE8
    ctx->r1 = ctx->r1 | 0XFEE8;
    // 0x803BCDE0: lbu         $a1, 0x0($s0)
    ctx->r5 = MEM_BU(ctx->r16, 0X0);
    // 0x803BCDE4: lui         $a3, 0x8028
    ctx->r7 = S32(0X8028 << 16);
    // 0x803BCDE8: addiu       $t8, $zero, 0xF
    ctx->r24 = ADD32(0, 0XF);
    // 0x803BCDEC: addiu       $t9, $zero, 0x2
    ctx->r25 = ADD32(0, 0X2);
    // 0x803BCDF0: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
    // 0x803BCDF4: addiu       $t2, $zero, 0x2
    ctx->r10 = ADD32(0, 0X2);
    // 0x803BCDF8: sw          $t2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r10;
    // 0x803BCDFC: sw          $t1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r9;
    // 0x803BCE00: sw          $t9, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r25;
    // 0x803BCE04: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    // 0x803BCE08: addiu       $a3, $a3, 0x740C
    ctx->r7 = ADD32(ctx->r7, 0X740C);
    // 0x803BCE0C: addu        $a0, $a0, $at
    ctx->r4 = ADD32(ctx->r4, ctx->r1);
    // 0x803BCE10: sra         $s7, $t3, 16
    ctx->r23 = S32(SIGNED(ctx->r11) >> 16);
    // 0x803BCE14: jal         0x8002F528
    // 0x803BCE18: sra         $a2, $t6, 16
    ctx->r6 = S32(SIGNED(ctx->r14) >> 16);
    func_8002F528(rdram, ctx);
        goto after_21;
    // 0x803BCE18: sra         $a2, $t6, 16
    ctx->r6 = S32(SIGNED(ctx->r14) >> 16);
    after_21:
    // 0x803BCE1C: lui         $v1, 0x800E
    ctx->r3 = S32(0X800E << 16);
    // 0x803BCE20: b           L_803BD138
    // 0x803BCE24: addiu       $v1, $v1, -0x3770
    ctx->r3 = ADD32(ctx->r3, -0X3770);
        goto L_803BD138;
    // 0x803BCE24: addiu       $v1, $v1, -0x3770
    ctx->r3 = ADD32(ctx->r3, -0X3770);
L_803BCE28:
    // 0x803BCE28: lui         $t6, 0x803C
    ctx->r14 = S32(0X803C << 16);
    // 0x803BCE2C: addiu       $t6, $t6, -0x2604
    ctx->r14 = ADD32(ctx->r14, -0X2604);
    // 0x803BCE30: lb          $t9, 0x34($s1)
    ctx->r25 = MEM_B(ctx->r17, 0X34);
    // 0x803BCE34: addu        $s0, $s5, $t6
    ctx->r16 = ADD32(ctx->r21, ctx->r14);
    // 0x803BCE38: lbu         $a2, 0x1($s0)
    ctx->r6 = MEM_BU(ctx->r16, 0X1);
    // 0x803BCE3C: sll         $t5, $s7, 5
    ctx->r13 = S32(ctx->r23 << 5);
    // 0x803BCE40: lui         $a3, 0x8028
    ctx->r7 = S32(0X8028 << 16);
    // 0x803BCE44: sll         $t1, $t9, 2
    ctx->r9 = S32(ctx->r25 << 2);
    // 0x803BCE48: addu        $a3, $a3, $t1
    ctx->r7 = ADD32(ctx->r7, ctx->r9);
    // 0x803BCE4C: addu        $a0, $v1, $t5
    ctx->r4 = ADD32(ctx->r3, ctx->r13);
    // 0x803BCE50: addiu       $s7, $s7, 0x1
    ctx->r23 = ADD32(ctx->r23, 0X1);
    // 0x803BCE54: lui         $at, 0x2
    ctx->r1 = S32(0X2 << 16);
    // 0x803BCE58: addiu       $a2, $a2, 0x27
    ctx->r6 = ADD32(ctx->r6, 0X27);
    // 0x803BCE5C: sll         $t7, $a2, 16
    ctx->r15 = S32(ctx->r6 << 16);
    // 0x803BCE60: ori         $at, $at, 0xFEE8
    ctx->r1 = ctx->r1 | 0XFEE8;
    // 0x803BCE64: sll         $t6, $s7, 16
    ctx->r14 = S32(ctx->r23 << 16);
    // 0x803BCE68: addiu       $t5, $zero, 0x1
    ctx->r13 = ADD32(0, 0X1);
    // 0x803BCE6C: lw          $a3, 0x3A90($a3)
    ctx->r7 = MEM_W(ctx->r7, 0X3A90);
    // 0x803BCE70: lbu         $a1, 0x0($s0)
    ctx->r5 = MEM_BU(ctx->r16, 0X0);
    // 0x803BCE74: addiu       $t2, $zero, 0x1F
    ctx->r10 = ADD32(0, 0X1F);
    // 0x803BCE78: addiu       $t3, $zero, 0x2
    ctx->r11 = ADD32(0, 0X2);
    // 0x803BCE7C: addiu       $t4, $zero, 0x1
    ctx->r12 = ADD32(0, 0X1);
    // 0x803BCE80: sw          $t4, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r12;
    // 0x803BCE84: sw          $t3, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r11;
    // 0x803BCE88: sw          $t2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r10;
    // 0x803BCE8C: sw          $t5, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r13;
    // 0x803BCE90: sra         $s7, $t6, 16
    ctx->r23 = S32(SIGNED(ctx->r14) >> 16);
    // 0x803BCE94: addu        $a0, $a0, $at
    ctx->r4 = ADD32(ctx->r4, ctx->r1);
    // 0x803BCE98: jal         0x8002F528
    // 0x803BCE9C: sra         $a2, $t7, 16
    ctx->r6 = S32(SIGNED(ctx->r15) >> 16);
    func_8002F528(rdram, ctx);
        goto after_22;
    // 0x803BCE9C: sra         $a2, $t7, 16
    ctx->r6 = S32(SIGNED(ctx->r15) >> 16);
    after_22:
    // 0x803BCEA0: sll         $a0, $s2, 16
    ctx->r4 = S32(ctx->r18 << 16);
    // 0x803BCEA4: sra         $t8, $a0, 16
    ctx->r24 = S32(SIGNED(ctx->r4) >> 16);
    // 0x803BCEA8: lb          $a1, 0x34($s1)
    ctx->r5 = MEM_B(ctx->r17, 0X34);
    // 0x803BCEAC: jal         0x8003EC60
    // 0x803BCEB0: or          $a0, $t8, $zero
    ctx->r4 = ctx->r24 | 0;
    func_8003EC60(rdram, ctx);
        goto after_23;
    // 0x803BCEB0: or          $a0, $t8, $zero
    ctx->r4 = ctx->r24 | 0;
    after_23:
    // 0x803BCEB4: lbu         $a1, 0x0($s0)
    ctx->r5 = MEM_BU(ctx->r16, 0X0);
    // 0x803BCEB8: lbu         $a2, 0x1($s0)
    ctx->r6 = MEM_BU(ctx->r16, 0X1);
    // 0x803BCEBC: lb          $t5, 0x0($v0)
    ctx->r13 = MEM_B(ctx->r2, 0X0);
    // 0x803BCEC0: lui         $v1, 0x800E
    ctx->r3 = S32(0X800E << 16);
    // 0x803BCEC4: sll         $t9, $s7, 5
    ctx->r25 = S32(ctx->r23 << 5);
    // 0x803BCEC8: addiu       $a1, $a1, 0x2A
    ctx->r5 = ADD32(ctx->r5, 0X2A);
    // 0x803BCECC: addiu       $a2, $a2, 0x1A
    ctx->r6 = ADD32(ctx->r6, 0X1A);
    // 0x803BCED0: sll         $t3, $a2, 16
    ctx->r11 = S32(ctx->r6 << 16);
    // 0x803BCED4: sll         $t1, $a1, 16
    ctx->r9 = S32(ctx->r5 << 16);
    // 0x803BCED8: addiu       $v1, $v1, -0x3770
    ctx->r3 = ADD32(ctx->r3, -0X3770);
    // 0x803BCEDC: sll         $t6, $t5, 2
    ctx->r14 = S32(ctx->r13 << 2);
    // 0x803BCEE0: addu        $a0, $v1, $t9
    ctx->r4 = ADD32(ctx->r3, ctx->r25);
    // 0x803BCEE4: sra         $a1, $t1, 16
    ctx->r5 = S32(SIGNED(ctx->r9) >> 16);
    // 0x803BCEE8: sra         $a2, $t3, 16
    ctx->r6 = S32(SIGNED(ctx->r11) >> 16);
    // 0x803BCEEC: addiu       $s7, $s7, 0x1
    ctx->r23 = ADD32(ctx->r23, 0X1);
    // 0x803BCEF0: lui         $at, 0x2
    ctx->r1 = S32(0X2 << 16);
    // 0x803BCEF4: lui         $t8, 0x8028
    ctx->r24 = S32(0X8028 << 16);
    // 0x803BCEF8: subu        $t6, $t6, $t5
    ctx->r14 = SUB32(ctx->r14, ctx->r13);
    // 0x803BCEFC: addiu       $t7, $t6, -0x3
    ctx->r15 = ADD32(ctx->r14, -0X3);
    // 0x803BCF00: addiu       $t8, $t8, 0x7364
    ctx->r24 = ADD32(ctx->r24, 0X7364);
    // 0x803BCF04: ori         $at, $at, 0xFEE8
    ctx->r1 = ctx->r1 | 0XFEE8;
    // 0x803BCF08: sll         $t4, $s7, 16
    ctx->r12 = S32(ctx->r23 << 16);
    // 0x803BCF0C: addiu       $t3, $zero, 0x1
    ctx->r11 = ADD32(0, 0X1);
    // 0x803BCF10: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
    // 0x803BCF14: addiu       $t9, $zero, 0x3
    ctx->r25 = ADD32(0, 0X3);
    // 0x803BCF18: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x803BCF1C: sw          $t2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r10;
    // 0x803BCF20: sw          $t9, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r25;
    // 0x803BCF24: sw          $t1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r9;
    // 0x803BCF28: sw          $t3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r11;
    // 0x803BCF2C: sra         $s7, $t4, 16
    ctx->r23 = S32(SIGNED(ctx->r12) >> 16);
    // 0x803BCF30: addu        $a0, $a0, $at
    ctx->r4 = ADD32(ctx->r4, ctx->r1);
    // 0x803BCF34: jal         0x8002F528
    // 0x803BCF38: addu        $a3, $t7, $t8
    ctx->r7 = ADD32(ctx->r15, ctx->r24);
    func_8002F528(rdram, ctx);
        goto after_24;
    // 0x803BCF38: addu        $a3, $t7, $t8
    ctx->r7 = ADD32(ctx->r15, ctx->r24);
    after_24:
    // 0x803BCF3C: sll         $a0, $s2, 16
    ctx->r4 = S32(ctx->r18 << 16);
    // 0x803BCF40: sra         $t6, $a0, 16
    ctx->r14 = S32(SIGNED(ctx->r4) >> 16);
    // 0x803BCF44: lb          $a1, 0x34($s1)
    ctx->r5 = MEM_B(ctx->r17, 0X34);
    // 0x803BCF48: jal         0x8003EC60
    // 0x803BCF4C: or          $a0, $t6, $zero
    ctx->r4 = ctx->r14 | 0;
    func_8003EC60(rdram, ctx);
        goto after_25;
    // 0x803BCF4C: or          $a0, $t6, $zero
    ctx->r4 = ctx->r14 | 0;
    after_25:
    // 0x803BCF50: lbu         $a1, 0x0($s0)
    ctx->r5 = MEM_BU(ctx->r16, 0X0);
    // 0x803BCF54: lbu         $a2, 0x1($s0)
    ctx->r6 = MEM_BU(ctx->r16, 0X1);
    // 0x803BCF58: lui         $v1, 0x800E
    ctx->r3 = S32(0X800E << 16);
    // 0x803BCF5C: sll         $t7, $s7, 5
    ctx->r15 = S32(ctx->r23 << 5);
    // 0x803BCF60: addiu       $s7, $s7, 0x1
    ctx->r23 = ADD32(ctx->r23, 0X1);
    // 0x803BCF64: addiu       $v1, $v1, -0x3770
    ctx->r3 = ADD32(ctx->r3, -0X3770);
    // 0x803BCF68: lui         $at, 0x2
    ctx->r1 = S32(0X2 << 16);
    // 0x803BCF6C: lb          $a3, 0x1($v0)
    ctx->r7 = MEM_B(ctx->r2, 0X1);
    // 0x803BCF70: addiu       $a1, $a1, 0x3F
    ctx->r5 = ADD32(ctx->r5, 0X3F);
    // 0x803BCF74: addiu       $a2, $a2, 0x1A
    ctx->r6 = ADD32(ctx->r6, 0X1A);
    // 0x803BCF78: sll         $t1, $a2, 16
    ctx->r9 = S32(ctx->r6 << 16);
    // 0x803BCF7C: sll         $t8, $a1, 16
    ctx->r24 = S32(ctx->r5 << 16);
    // 0x803BCF80: ori         $at, $at, 0xFEE8
    ctx->r1 = ctx->r1 | 0XFEE8;
    // 0x803BCF84: addu        $a0, $v1, $t7
    ctx->r4 = ADD32(ctx->r3, ctx->r15);
    // 0x803BCF88: sll         $t5, $s7, 16
    ctx->r13 = S32(ctx->r23 << 16);
    // 0x803BCF8C: addiu       $t3, $zero, 0x2
    ctx->r11 = ADD32(0, 0X2);
    // 0x803BCF90: addiu       $t4, $zero, 0x2
    ctx->r12 = ADD32(0, 0X2);
    // 0x803BCF94: sw          $t4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r12;
    // 0x803BCF98: sw          $t3, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r11;
    // 0x803BCF9C: sra         $s7, $t5, 16
    ctx->r23 = S32(SIGNED(ctx->r13) >> 16);
    // 0x803BCFA0: addu        $a0, $a0, $at
    ctx->r4 = ADD32(ctx->r4, ctx->r1);
    // 0x803BCFA4: sra         $a1, $t8, 16
    ctx->r5 = S32(SIGNED(ctx->r24) >> 16);
    // 0x803BCFA8: jal         0x8002F6EC
    // 0x803BCFAC: sra         $a2, $t1, 16
    ctx->r6 = S32(SIGNED(ctx->r9) >> 16);
    func_8002F6EC(rdram, ctx);
        goto after_26;
    // 0x803BCFAC: sra         $a2, $t1, 16
    ctx->r6 = S32(SIGNED(ctx->r9) >> 16);
    after_26:
    // 0x803BCFB0: lui         $v1, 0x800E
    ctx->r3 = S32(0X800E << 16);
    // 0x803BCFB4: b           L_803BD138
    // 0x803BCFB8: addiu       $v1, $v1, -0x3770
    ctx->r3 = ADD32(ctx->r3, -0X3770);
        goto L_803BD138;
    // 0x803BCFB8: addiu       $v1, $v1, -0x3770
    ctx->r3 = ADD32(ctx->r3, -0X3770);
L_803BCFBC:
    // 0x803BCFBC: lui         $t8, 0x803C
    ctx->r24 = S32(0X803C << 16);
    // 0x803BCFC0: addiu       $t8, $t8, -0x25B0
    ctx->r24 = ADD32(ctx->r24, -0X25B0);
    // 0x803BCFC4: addu        $v0, $s5, $t8
    ctx->r2 = ADD32(ctx->r21, ctx->r24);
    // 0x803BCFC8: sll         $t7, $s7, 5
    ctx->r15 = S32(ctx->r23 << 5);
    // 0x803BCFCC: addiu       $s7, $s7, 0x1
    ctx->r23 = ADD32(ctx->r23, 0X1);
    // 0x803BCFD0: lui         $at, 0x2
    ctx->r1 = S32(0X2 << 16);
    // 0x803BCFD4: ori         $at, $at, 0xFEE8
    ctx->r1 = ctx->r1 | 0XFEE8;
    // 0x803BCFD8: sll         $t4, $s7, 16
    ctx->r12 = S32(ctx->r23 << 16);
    // 0x803BCFDC: addu        $a0, $v1, $t7
    ctx->r4 = ADD32(ctx->r3, ctx->r15);
    // 0x803BCFE0: lbu         $a1, 0x0($v0)
    ctx->r5 = MEM_BU(ctx->r2, 0X0);
    // 0x803BCFE4: lbu         $a2, 0x1($v0)
    ctx->r6 = MEM_BU(ctx->r2, 0X1);
    // 0x803BCFE8: lui         $a3, 0x8028
    ctx->r7 = S32(0X8028 << 16);
    // 0x803BCFEC: addiu       $t9, $zero, 0x1E
    ctx->r25 = ADD32(0, 0X1E);
    // 0x803BCFF0: addiu       $t1, $zero, 0x2
    ctx->r9 = ADD32(0, 0X2);
    // 0x803BCFF4: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x803BCFF8: addiu       $t3, $zero, 0x1
    ctx->r11 = ADD32(0, 0X1);
    // 0x803BCFFC: sw          $t3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r11;
    // 0x803BD000: sw          $t2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r10;
    // 0x803BD004: sw          $t1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r9;
    // 0x803BD008: sw          $t9, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r25;
    // 0x803BD00C: addiu       $a3, $a3, 0x71A0
    ctx->r7 = ADD32(ctx->r7, 0X71A0);
    // 0x803BD010: addu        $a0, $a0, $at
    ctx->r4 = ADD32(ctx->r4, ctx->r1);
    // 0x803BD014: jal         0x8002F528
    // 0x803BD018: sra         $s7, $t4, 16
    ctx->r23 = S32(SIGNED(ctx->r12) >> 16);
    func_8002F528(rdram, ctx);
        goto after_27;
    // 0x803BD018: sra         $s7, $t4, 16
    ctx->r23 = S32(SIGNED(ctx->r12) >> 16);
    after_27:
    // 0x803BD01C: lw          $t8, 0x58($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X58);
    // 0x803BD020: lui         $v1, 0x800E
    ctx->r3 = S32(0X800E << 16);
    // 0x803BD024: lui         $t7, 0x803C
    ctx->r15 = S32(0X803C << 16);
    // 0x803BD028: addiu       $v1, $v1, -0x3770
    ctx->r3 = ADD32(ctx->r3, -0X3770);
    // 0x803BD02C: addiu       $t7, $t7, -0x25B4
    ctx->r15 = ADD32(ctx->r15, -0X25B4);
    // 0x803BD030: sll         $t6, $s7, 5
    ctx->r14 = S32(ctx->r23 << 5);
    // 0x803BD034: addu        $s2, $v1, $t6
    ctx->r18 = ADD32(ctx->r3, ctx->r14);
    // 0x803BD038: addu        $s4, $s5, $t7
    ctx->r20 = ADD32(ctx->r21, ctx->r15);
    // 0x803BD03C: or          $fp, $zero, $zero
    ctx->r30 = 0 | 0;
    // 0x803BD040: or          $s3, $zero, $zero
    ctx->r19 = 0 | 0;
    // 0x803BD044: addu        $s6, $t8, $s5
    ctx->r22 = ADD32(ctx->r24, ctx->r21);
    // 0x803BD048: sll         $s5, $fp, 2
    ctx->r21 = S32(ctx->r30 << 2);
L_803BD04C:
    // 0x803BD04C: subu        $s5, $s5, $fp
    ctx->r21 = SUB32(ctx->r21, ctx->r30);
    // 0x803BD050: sll         $s5, $s5, 3
    ctx->r21 = S32(ctx->r21 << 3);
    // 0x803BD054: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
L_803BD058:
    // 0x803BD058: sll         $t1, $s1, 2
    ctx->r9 = S32(ctx->r17 << 2);
    // 0x803BD05C: lbu         $t9, 0x0($s4)
    ctx->r25 = MEM_BU(ctx->r20, 0X0);
    // 0x803BD060: lbu         $t4, 0x1($s4)
    ctx->r12 = MEM_BU(ctx->r20, 0X1);
    // 0x803BD064: subu        $t1, $t1, $s1
    ctx->r9 = SUB32(ctx->r9, ctx->r17);
    // 0x803BD068: sll         $t1, $t1, 3
    ctx->r9 = S32(ctx->r9 << 3);
    // 0x803BD06C: lui         $at, 0x2
    ctx->r1 = S32(0X2 << 16);
    // 0x803BD070: addiu       $s7, $s7, 0x1
    ctx->r23 = ADD32(ctx->r23, 0X1);
    // 0x803BD074: addu        $a1, $t9, $t1
    ctx->r5 = ADD32(ctx->r25, ctx->r9);
    // 0x803BD078: addu        $a2, $t4, $s5
    ctx->r6 = ADD32(ctx->r12, ctx->r21);
    // 0x803BD07C: sll         $t5, $a2, 16
    ctx->r13 = S32(ctx->r6 << 16);
    // 0x803BD080: sll         $t2, $a1, 16
    ctx->r10 = S32(ctx->r5 << 16);
    // 0x803BD084: sll         $t8, $s7, 16
    ctx->r24 = S32(ctx->r23 << 16);
    // 0x803BD088: ori         $at, $at, 0xFEE8
    ctx->r1 = ctx->r1 | 0XFEE8;
    // 0x803BD08C: addiu       $s0, $s3, 0x1
    ctx->r16 = ADD32(ctx->r19, 0X1);
    // 0x803BD090: addiu       $t7, $zero, 0x2
    ctx->r15 = ADD32(0, 0X2);
    // 0x803BD094: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x803BD098: or          $a3, $s0, $zero
    ctx->r7 = ctx->r16 | 0;
    // 0x803BD09C: addu        $a0, $s2, $at
    ctx->r4 = ADD32(ctx->r18, ctx->r1);
    // 0x803BD0A0: sra         $s7, $t8, 16
    ctx->r23 = S32(SIGNED(ctx->r24) >> 16);
    // 0x803BD0A4: sra         $a1, $t2, 16
    ctx->r5 = S32(SIGNED(ctx->r10) >> 16);
    // 0x803BD0A8: jal         0x8002F914
    // 0x803BD0AC: sra         $a2, $t5, 16
    ctx->r6 = S32(SIGNED(ctx->r13) >> 16);
    func_8002F914(rdram, ctx);
        goto after_28;
    // 0x803BD0AC: sra         $a2, $t5, 16
    ctx->r6 = S32(SIGNED(ctx->r13) >> 16);
    after_28:
    // 0x803BD0B0: lh          $t1, 0x44($s6)
    ctx->r9 = MEM_H(ctx->r22, 0X44);
    // 0x803BD0B4: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x803BD0B8: sllv        $t3, $t2, $s3
    ctx->r11 = S32(ctx->r10 << (ctx->r19 & 31));
    // 0x803BD0BC: lui         $v1, 0x800E
    ctx->r3 = S32(0X800E << 16);
    // 0x803BD0C0: lui         $t0, 0x2
    ctx->r8 = S32(0X2 << 16);
    // 0x803BD0C4: and         $t4, $t1, $t3
    ctx->r12 = ctx->r9 & ctx->r11;
    // 0x803BD0C8: ori         $t0, $t0, 0x8000
    ctx->r8 = ctx->r8 | 0X8000;
    // 0x803BD0CC: beq         $t4, $zero, L_803BD0EC
    if (ctx->r12 == 0) {
        // 0x803BD0D0: addiu       $v1, $v1, -0x3770
        ctx->r3 = ADD32(ctx->r3, -0X3770);
            goto L_803BD0EC;
    }
    // 0x803BD0D0: addiu       $v1, $v1, -0x3770
    ctx->r3 = ADD32(ctx->r3, -0X3770);
    // 0x803BD0D4: sll         $t5, $s7, 5
    ctx->r13 = S32(ctx->r23 << 5);
    // 0x803BD0D8: addu        $s2, $v1, $t5
    ctx->r18 = ADD32(ctx->r3, ctx->r13);
    // 0x803BD0DC: addu        $t7, $s2, $t0
    ctx->r15 = ADD32(ctx->r18, ctx->r8);
    // 0x803BD0E0: addiu       $t6, $zero, 0x2
    ctx->r14 = ADD32(0, 0X2);
    // 0x803BD0E4: b           L_803BD100
    // 0x803BD0E8: sb          $t6, 0x7EDD($t7)
    MEM_B(0X7EDD, ctx->r15) = ctx->r14;
        goto L_803BD100;
    // 0x803BD0E8: sb          $t6, 0x7EDD($t7)
    MEM_B(0X7EDD, ctx->r15) = ctx->r14;
L_803BD0EC:
    // 0x803BD0EC: sll         $t8, $s7, 5
    ctx->r24 = S32(ctx->r23 << 5);
    // 0x803BD0F0: addu        $s2, $v1, $t8
    ctx->r18 = ADD32(ctx->r3, ctx->r24);
    // 0x803BD0F4: addu        $t2, $s2, $t0
    ctx->r10 = ADD32(ctx->r18, ctx->r8);
    // 0x803BD0F8: addiu       $t9, $zero, 0x5
    ctx->r25 = ADD32(0, 0X5);
    // 0x803BD0FC: sb          $t9, 0x7EDD($t2)
    MEM_B(0X7EDD, ctx->r10) = ctx->r25;
L_803BD100:
    // 0x803BD100: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x803BD104: sll         $t3, $s1, 16
    ctx->r11 = S32(ctx->r17 << 16);
    // 0x803BD108: sra         $s1, $t3, 16
    ctx->r17 = S32(SIGNED(ctx->r11) >> 16);
    // 0x803BD10C: sll         $s3, $s0, 16
    ctx->r19 = S32(ctx->r16 << 16);
    // 0x803BD110: slti        $at, $s1, 0x4
    ctx->r1 = SIGNED(ctx->r17) < 0X4 ? 1 : 0;
    // 0x803BD114: sra         $t1, $s3, 16
    ctx->r9 = S32(SIGNED(ctx->r19) >> 16);
    // 0x803BD118: bne         $at, $zero, L_803BD058
    if (ctx->r1 != 0) {
        // 0x803BD11C: or          $s3, $t1, $zero
        ctx->r19 = ctx->r9 | 0;
            goto L_803BD058;
    }
    // 0x803BD11C: or          $s3, $t1, $zero
    ctx->r19 = ctx->r9 | 0;
    // 0x803BD120: addiu       $fp, $fp, 0x1
    ctx->r30 = ADD32(ctx->r30, 0X1);
    // 0x803BD124: sll         $t5, $fp, 16
    ctx->r13 = S32(ctx->r30 << 16);
    // 0x803BD128: sra         $fp, $t5, 16
    ctx->r30 = S32(SIGNED(ctx->r13) >> 16);
    // 0x803BD12C: slti        $at, $fp, 0x4
    ctx->r1 = SIGNED(ctx->r30) < 0X4 ? 1 : 0;
    // 0x803BD130: bne         $at, $zero, L_803BD04C
    if (ctx->r1 != 0) {
        // 0x803BD134: sll         $s5, $fp, 2
        ctx->r21 = S32(ctx->r30 << 2);
            goto L_803BD04C;
    }
    // 0x803BD134: sll         $s5, $fp, 2
    ctx->r21 = S32(ctx->r30 << 2);
L_803BD138:
    // 0x803BD138: lh          $v0, 0x56($sp)
    ctx->r2 = MEM_H(ctx->r29, 0X56);
    // 0x803BD13C: nop

    // 0x803BD140: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x803BD144: sll         $t7, $v0, 16
    ctx->r15 = S32(ctx->r2 << 16);
    // 0x803BD148: sra         $t8, $t7, 16
    ctx->r24 = S32(SIGNED(ctx->r15) >> 16);
    // 0x803BD14C: slti        $at, $t8, 0x2
    ctx->r1 = SIGNED(ctx->r24) < 0X2 ? 1 : 0;
    // 0x803BD150: bne         $at, $zero, L_803BC6D0
    if (ctx->r1 != 0) {
        // 0x803BD154: sh          $t8, 0x56($sp)
        MEM_H(0X56, ctx->r29) = ctx->r24;
            goto L_803BC6D0;
    }
    // 0x803BD154: sh          $t8, 0x56($sp)
    MEM_H(0X56, ctx->r29) = ctx->r24;
    // 0x803BD158: lw          $ra, 0x4C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X4C);
    // 0x803BD15C: or          $v0, $s7, $zero
    ctx->r2 = ctx->r23 | 0;
    // 0x803BD160: lw          $s7, 0x44($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X44);
    // 0x803BD164: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x803BD168: lw          $s1, 0x2C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X2C);
    // 0x803BD16C: lw          $s2, 0x30($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X30);
    // 0x803BD170: lw          $s3, 0x34($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X34);
    // 0x803BD174: lw          $s4, 0x38($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X38);
    // 0x803BD178: lw          $s5, 0x3C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X3C);
    // 0x803BD17C: lw          $s6, 0x40($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X40);
    // 0x803BD180: lw          $fp, 0x48($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X48);
    // 0x803BD184: jr          $ra
    // 0x803BD188: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
    return;
    // 0x803BD188: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
;}
RECOMP_FUNC void func_803BD18C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803BD18C: sll         $t6, $a0, 16
    ctx->r14 = S32(ctx->r4 << 16);
    // 0x803BD190: sra         $t7, $t6, 16
    ctx->r15 = S32(SIGNED(ctx->r14) >> 16);
    // 0x803BD194: bne         $t7, $zero, L_803BD1D4
    if (ctx->r15 != 0) {
        // 0x803BD198: sw          $a0, 0x0($sp)
        MEM_W(0X0, ctx->r29) = ctx->r4;
            goto L_803BD1D4;
    }
    // 0x803BD198: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x803BD19C: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x803BD1A0: addiu       $a0, $a0, -0x32B0
    ctx->r4 = ADD32(ctx->r4, -0X32B0);
    // 0x803BD1A4: lbu         $t8, 0xC($a0)
    ctx->r24 = MEM_BU(ctx->r4, 0XC);
    // 0x803BD1A8: addiu       $at, $zero, 0x6
    ctx->r1 = ADD32(0, 0X6);
    // 0x803BD1AC: bne         $t8, $at, L_803BD1C0
    if (ctx->r24 != ctx->r1) {
        // 0x803BD1B0: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_803BD1C0;
    }
    // 0x803BD1B0: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x803BD1B4: sll         $v1, $v0, 16
    ctx->r3 = S32(ctx->r2 << 16);
    // 0x803BD1B8: jr          $ra
    // 0x803BD1BC: sra         $v0, $v1, 16
    ctx->r2 = S32(SIGNED(ctx->r3) >> 16);
    return;
    // 0x803BD1BC: sra         $v0, $v1, 16
    ctx->r2 = S32(SIGNED(ctx->r3) >> 16);
L_803BD1C0:
    // 0x803BD1C0: lb          $v0, 0xF($a0)
    ctx->r2 = MEM_B(ctx->r4, 0XF);
    // 0x803BD1C4: nop

    // 0x803BD1C8: sll         $v1, $v0, 16
    ctx->r3 = S32(ctx->r2 << 16);
    // 0x803BD1CC: jr          $ra
    // 0x803BD1D0: sra         $v0, $v1, 16
    ctx->r2 = S32(SIGNED(ctx->r3) >> 16);
    return;
    // 0x803BD1D0: sra         $v0, $v1, 16
    ctx->r2 = S32(SIGNED(ctx->r3) >> 16);
L_803BD1D4:
    // 0x803BD1D4: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x803BD1D8: addiu       $a0, $a0, -0x32B0
    ctx->r4 = ADD32(ctx->r4, -0X32B0);
    // 0x803BD1DC: lh          $v1, 0x4($a0)
    ctx->r3 = MEM_H(ctx->r4, 0X4);
    // 0x803BD1E0: nop

    // 0x803BD1E4: jr          $ra
    // 0x803BD1E8: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    return;
    // 0x803BD1E8: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
;}
RECOMP_FUNC void func_803BD1EC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803BD1EC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x803BD1F0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x803BD1F4: jal         0x803BD468
    // 0x803BD1F8: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_803BD468(rdram, ctx);
        goto after_0;
    // 0x803BD1F8: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x803BD1FC: sltiu       $a0, $v0, 0x1
    ctx->r4 = ctx->r2 < 0X1 ? 1 : 0;
    // 0x803BD200: beq         $a0, $zero, L_803BD228
    if (ctx->r4 == 0) {
        // 0x803BD204: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_803BD228;
    }
    // 0x803BD204: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x803BD208: lh          $t6, 0x1A($sp)
    ctx->r14 = MEM_H(ctx->r29, 0X1A);
    // 0x803BD20C: lui         $a0, 0x801B
    ctx->r4 = S32(0X801B << 16);
    // 0x803BD210: addu        $a0, $a0, $t6
    ctx->r4 = ADD32(ctx->r4, ctx->r14);
    // 0x803BD214: lb          $a0, -0x69C($a0)
    ctx->r4 = MEM_B(ctx->r4, -0X69C);
    // 0x803BD218: nop

    // 0x803BD21C: slti        $t7, $a0, 0x0
    ctx->r15 = SIGNED(ctx->r4) < 0X0 ? 1 : 0;
    // 0x803BD220: xori        $a0, $t7, 0x1
    ctx->r4 = ctx->r15 ^ 0X1;
    // 0x803BD224: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_803BD228:
    // 0x803BD228: sll         $v0, $a0, 16
    ctx->r2 = S32(ctx->r4 << 16);
    // 0x803BD22C: sra         $t8, $v0, 16
    ctx->r24 = S32(SIGNED(ctx->r2) >> 16);
    // 0x803BD230: or          $v0, $t8, $zero
    ctx->r2 = ctx->r24 | 0;
    // 0x803BD234: jr          $ra
    // 0x803BD238: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x803BD238: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_803BD23C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803BD23C: lui         $v1, 0x8012
    ctx->r3 = S32(0X8012 << 16);
    // 0x803BD240: addiu       $v1, $v1, -0x3070
    ctx->r3 = ADD32(ctx->r3, -0X3070);
    // 0x803BD244: lh          $t6, 0x0($v1)
    ctx->r14 = MEM_H(ctx->r3, 0X0);
    // 0x803BD248: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    // 0x803BD24C: sb          $t6, 0x33($a0)
    MEM_B(0X33, ctx->r4) = ctx->r14;
    // 0x803BD250: lh          $t7, 0x4($v1)
    ctx->r15 = MEM_H(ctx->r3, 0X4);
    // 0x803BD254: lh          $v0, 0x28($a0)
    ctx->r2 = MEM_H(ctx->r4, 0X28);
    // 0x803BD258: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x803BD25C: beq         $v0, $zero, L_803BD27C
    if (ctx->r2 == 0) {
        // 0x803BD260: sh          $t7, 0x2E($a0)
        MEM_H(0X2E, ctx->r4) = ctx->r15;
            goto L_803BD27C;
    }
    // 0x803BD260: sh          $t7, 0x2E($a0)
    MEM_H(0X2E, ctx->r4) = ctx->r15;
    // 0x803BD264: beq         $v0, $at, L_803BD27C
    if (ctx->r2 == ctx->r1) {
        // 0x803BD268: addiu       $at, $zero, 0x2
        ctx->r1 = ADD32(0, 0X2);
            goto L_803BD27C;
    }
    // 0x803BD268: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x803BD26C: beq         $v0, $at, L_803BD320
    if (ctx->r2 == ctx->r1) {
        // 0x803BD270: lui         $a3, 0x8011
        ctx->r7 = S32(0X8011 << 16);
            goto L_803BD320;
    }
    // 0x803BD270: lui         $a3, 0x8011
    ctx->r7 = S32(0X8011 << 16);
    // 0x803BD274: jr          $ra
    // 0x803BD278: nop

    return;
    // 0x803BD278: nop

L_803BD27C:
    // 0x803BD27C: lui         $a3, 0x8011
    ctx->r7 = S32(0X8011 << 16);
    // 0x803BD280: addiu       $a3, $a3, 0x5350
    ctx->r7 = ADD32(ctx->r7, 0X5350);
    // 0x803BD284: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x803BD288: addiu       $t1, $zero, 0x7C
    ctx->r9 = ADD32(0, 0X7C);
    // 0x803BD28C: addiu       $t0, $zero, 0x12B8
    ctx->r8 = ADD32(0, 0X12B8);
L_803BD290:
    // 0x803BD290: multu       $v0, $t0
    result = U64(U32(ctx->r2)) * U64(U32(ctx->r8)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x803BD294: addu        $a2, $a0, $v0
    ctx->r6 = ADD32(ctx->r4, ctx->r2);
    // 0x803BD298: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x803BD29C: mflo        $t8
    ctx->r24 = lo;
    // 0x803BD2A0: addu        $a1, $a3, $t8
    ctx->r5 = ADD32(ctx->r7, ctx->r24);
    // 0x803BD2A4: lb          $t9, 0x1770($a1)
    ctx->r25 = MEM_B(ctx->r5, 0X1770);
    // 0x803BD2A8: nop

    // 0x803BD2AC: multu       $t9, $t1
    result = U64(U32(ctx->r25)) * U64(U32(ctx->r9)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x803BD2B0: mflo        $t2
    ctx->r10 = lo;
    // 0x803BD2B4: addu        $v1, $a1, $t2
    ctx->r3 = ADD32(ctx->r5, ctx->r10);
    // 0x803BD2B8: lb          $t3, 0x1800($v1)
    ctx->r11 = MEM_B(ctx->r3, 0X1800);
    // 0x803BD2BC: addiu       $v1, $v1, 0x1800
    ctx->r3 = ADD32(ctx->r3, 0X1800);
    // 0x803BD2C0: sb          $t3, 0x30($a2)
    MEM_B(0X30, ctx->r6) = ctx->r11;
    // 0x803BD2C4: lbu         $t4, 0x64($v1)
    ctx->r12 = MEM_BU(ctx->r3, 0X64);
    // 0x803BD2C8: sll         $t3, $v0, 16
    ctx->r11 = S32(ctx->r2 << 16);
    // 0x803BD2CC: sb          $t4, 0x38($a2)
    MEM_B(0X38, ctx->r6) = ctx->r12;
    // 0x803BD2D0: lbu         $t5, 0x65($v1)
    ctx->r13 = MEM_BU(ctx->r3, 0X65);
    // 0x803BD2D4: sra         $v0, $t3, 16
    ctx->r2 = S32(SIGNED(ctx->r11) >> 16);
    // 0x803BD2D8: sb          $t5, 0x4C($a2)
    MEM_B(0X4C, ctx->r6) = ctx->r13;
    // 0x803BD2DC: lbu         $t6, 0x66($v1)
    ctx->r14 = MEM_BU(ctx->r3, 0X66);
    // 0x803BD2E0: slti        $at, $v0, 0x2
    ctx->r1 = SIGNED(ctx->r2) < 0X2 ? 1 : 0;
    // 0x803BD2E4: sb          $t6, 0x5C($a2)
    MEM_B(0X5C, ctx->r6) = ctx->r14;
    // 0x803BD2E8: lb          $t7, 0x1746($a1)
    ctx->r15 = MEM_B(ctx->r5, 0X1746);
    // 0x803BD2EC: nop

    // 0x803BD2F0: sb          $t7, 0x34($a2)
    MEM_B(0X34, ctx->r6) = ctx->r15;
    // 0x803BD2F4: lb          $t8, 0x1749($a1)
    ctx->r24 = MEM_B(ctx->r5, 0X1749);
    // 0x803BD2F8: nop

    // 0x803BD2FC: sb          $t8, 0x3C($a2)
    MEM_B(0X3C, ctx->r6) = ctx->r24;
    // 0x803BD300: lb          $t9, 0x1747($a1)
    ctx->r25 = MEM_B(ctx->r5, 0X1747);
    // 0x803BD304: nop

    // 0x803BD308: sb          $t9, 0x40($a2)
    MEM_B(0X40, ctx->r6) = ctx->r25;
    // 0x803BD30C: lb          $t2, 0x1745($a1)
    ctx->r10 = MEM_B(ctx->r5, 0X1745);
    // 0x803BD310: bne         $at, $zero, L_803BD290
    if (ctx->r1 != 0) {
        // 0x803BD314: sb          $t2, 0x60($a2)
        MEM_B(0X60, ctx->r6) = ctx->r10;
            goto L_803BD290;
    }
    // 0x803BD314: sb          $t2, 0x60($a2)
    MEM_B(0X60, ctx->r6) = ctx->r10;
    // 0x803BD318: jr          $ra
    // 0x803BD31C: nop

    return;
    // 0x803BD31C: nop

L_803BD320:
    // 0x803BD320: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x803BD324: addiu       $a3, $a3, 0x5350
    ctx->r7 = ADD32(ctx->r7, 0X5350);
L_803BD328:
    // 0x803BD328: sll         $t5, $v0, 5
    ctx->r13 = S32(ctx->r2 << 5);
    // 0x803BD32C: addu        $v1, $a3, $t5
    ctx->r3 = ADD32(ctx->r7, ctx->r13);
    // 0x803BD330: lbu         $t6, 0x3CB4($v1)
    ctx->r14 = MEM_BU(ctx->r3, 0X3CB4);
    // 0x803BD334: addu        $t7, $a0, $v0
    ctx->r15 = ADD32(ctx->r4, ctx->r2);
    // 0x803BD338: sll         $t9, $v0, 1
    ctx->r25 = S32(ctx->r2 << 1);
    // 0x803BD33C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x803BD340: sll         $t3, $v0, 16
    ctx->r11 = S32(ctx->r2 << 16);
    // 0x803BD344: sb          $t6, 0x40($t7)
    MEM_B(0X40, ctx->r15) = ctx->r14;
    // 0x803BD348: lhu         $t8, 0x3CC6($v1)
    ctx->r24 = MEM_HU(ctx->r3, 0X3CC6);
    // 0x803BD34C: sra         $v0, $t3, 16
    ctx->r2 = S32(SIGNED(ctx->r11) >> 16);
    // 0x803BD350: slti        $at, $v0, 0x2
    ctx->r1 = SIGNED(ctx->r2) < 0X2 ? 1 : 0;
    // 0x803BD354: addu        $t2, $a0, $t9
    ctx->r10 = ADD32(ctx->r4, ctx->r25);
    // 0x803BD358: bne         $at, $zero, L_803BD328
    if (ctx->r1 != 0) {
        // 0x803BD35C: sh          $t8, 0x44($t2)
        MEM_H(0X44, ctx->r10) = ctx->r24;
            goto L_803BD328;
    }
    // 0x803BD35C: sh          $t8, 0x44($t2)
    MEM_H(0X44, ctx->r10) = ctx->r24;
    // 0x803BD360: jr          $ra
    // 0x803BD364: nop

    return;
    // 0x803BD364: nop

;}
RECOMP_FUNC void func_803BD368(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803BD368: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x803BD36C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x803BD370: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x803BD374: lh          $a0, 0x1A($sp)
    ctx->r4 = MEM_H(ctx->r29, 0X1A);
    // 0x803BD378: jal         0x803BD1EC
    // 0x803BD37C: nop

    func_803BD1EC(rdram, ctx);
        goto after_0;
    // 0x803BD37C: nop

    after_0:
    // 0x803BD380: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x803BD384: bne         $v0, $zero, L_803BD394
    if (ctx->r2 != 0) {
        // 0x803BD388: lui         $t6, 0x801B
        ctx->r14 = S32(0X801B << 16);
            goto L_803BD394;
    }
    // 0x803BD388: lui         $t6, 0x801B
    ctx->r14 = S32(0X801B << 16);
    // 0x803BD38C: b           L_803BD3F4
    // 0x803BD390: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
        goto L_803BD3F4;
    // 0x803BD390: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
L_803BD394:
    // 0x803BD394: lh          $t6, -0x6B4($t6)
    ctx->r14 = MEM_H(ctx->r14, -0X6B4);
    // 0x803BD398: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x803BD39C: beq         $t6, $at, L_803BD3F4
    if (ctx->r14 == ctx->r1) {
        // 0x803BD3A0: addiu       $v0, $zero, 0x4
        ctx->r2 = ADD32(0, 0X4);
            goto L_803BD3F4;
    }
    // 0x803BD3A0: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x803BD3A4: lh          $t7, 0x1A($sp)
    ctx->r15 = MEM_H(ctx->r29, 0X1A);
    // 0x803BD3A8: lui         $v1, 0x8011
    ctx->r3 = S32(0X8011 << 16);
    // 0x803BD3AC: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x803BD3B0: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x803BD3B4: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x803BD3B8: subu        $t8, $t8, $t7
    ctx->r24 = SUB32(ctx->r24, ctx->r15);
    // 0x803BD3BC: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x803BD3C0: subu        $t8, $t8, $t7
    ctx->r24 = SUB32(ctx->r24, ctx->r15);
    // 0x803BD3C4: sll         $t8, $t8, 3
    ctx->r24 = S32(ctx->r24 << 3);
    // 0x803BD3C8: subu        $t8, $t8, $t7
    ctx->r24 = SUB32(ctx->r24, ctx->r15);
    // 0x803BD3CC: sll         $t8, $t8, 3
    ctx->r24 = S32(ctx->r24 << 3);
    // 0x803BD3D0: addu        $v1, $v1, $t8
    ctx->r3 = ADD32(ctx->r3, ctx->r24);
    // 0x803BD3D4: lb          $v1, 0x6A94($v1)
    ctx->r3 = MEM_B(ctx->r3, 0X6A94);
    // 0x803BD3D8: nop

    // 0x803BD3DC: bltz        $v1, L_803BD3EC
    if (SIGNED(ctx->r3) < 0) {
        // 0x803BD3E0: nop
    
            goto L_803BD3EC;
    }
    // 0x803BD3E0: nop

    // 0x803BD3E4: b           L_803BD3F4
    // 0x803BD3E8: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
        goto L_803BD3F4;
    // 0x803BD3E8: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
L_803BD3EC:
    // 0x803BD3EC: b           L_803BD3F4
    // 0x803BD3F0: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
        goto L_803BD3F4;
    // 0x803BD3F0: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
L_803BD3F4:
    // 0x803BD3F4: jr          $ra
    // 0x803BD3F8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x803BD3F8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_803BD3FC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803BD3FC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x803BD400: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x803BD404: jal         0x80034908
    // 0x803BD408: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    func_80034908(rdram, ctx);
        goto after_0;
    // 0x803BD408: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_0:
    // 0x803BD40C: lui         $v1, 0x801B
    ctx->r3 = S32(0X801B << 16);
    // 0x803BD410: addiu       $v1, $v1, -0x750
    ctx->r3 = ADD32(ctx->r3, -0X750);
    // 0x803BD414: beq         $v0, $zero, L_803BD454
    if (ctx->r2 == 0) {
        // 0x803BD418: sh          $v0, 0xBE($v1)
        MEM_H(0XBE, ctx->r3) = ctx->r2;
            goto L_803BD454;
    }
    // 0x803BD418: sh          $v0, 0xBE($v1)
    MEM_H(0XBE, ctx->r3) = ctx->r2;
    // 0x803BD41C: lh          $t7, 0x98($v1)
    ctx->r15 = MEM_H(ctx->r3, 0X98);
    // 0x803BD420: addiu       $t6, $zero, 0x4
    ctx->r14 = ADD32(0, 0X4);
    // 0x803BD424: beq         $t7, $zero, L_803BD440
    if (ctx->r15 == 0) {
        // 0x803BD428: sh          $t6, 0x9E($v1)
        MEM_H(0X9E, ctx->r3) = ctx->r14;
            goto L_803BD440;
    }
    // 0x803BD428: sh          $t6, 0x9E($v1)
    MEM_H(0X9E, ctx->r3) = ctx->r14;
    // 0x803BD42C: addiu       $t8, $zero, 0x5
    ctx->r24 = ADD32(0, 0X5);
    // 0x803BD430: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x803BD434: sh          $t8, -0x32A8($at)
    MEM_H(-0X32A8, ctx->r1) = ctx->r24;
    // 0x803BD438: b           L_803BD458
    // 0x803BD43C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_803BD458;
    // 0x803BD43C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_803BD440:
    // 0x803BD440: addiu       $t9, $zero, 0x3
    ctx->r25 = ADD32(0, 0X3);
    // 0x803BD444: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x803BD448: sh          $t9, -0x32A8($at)
    MEM_H(-0X32A8, ctx->r1) = ctx->r25;
    // 0x803BD44C: b           L_803BD458
    // 0x803BD450: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_803BD458;
    // 0x803BD450: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_803BD454:
    // 0x803BD454: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_803BD458:
    // 0x803BD458: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x803BD45C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x803BD460: jr          $ra
    // 0x803BD464: nop

    return;
    // 0x803BD464: nop

;}
RECOMP_FUNC void func_803BD468(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803BD468: lui         $v0, 0x801B
    ctx->r2 = S32(0X801B << 16);
    // 0x803BD46C: addiu       $v0, $v0, -0x750
    ctx->r2 = ADD32(ctx->r2, -0X750);
    // 0x803BD470: lh          $t6, 0xA2($v0)
    ctx->r14 = MEM_H(ctx->r2, 0XA2);
    // 0x803BD474: nop

    // 0x803BD478: bltz        $t6, L_803BD4A0
    if (SIGNED(ctx->r14) < 0) {
        // 0x803BD47C: nop
    
            goto L_803BD4A0;
    }
    // 0x803BD47C: nop

    // 0x803BD480: lb          $t7, 0xA7($v0)
    ctx->r15 = MEM_B(ctx->r2, 0XA7);
    // 0x803BD484: nop

    // 0x803BD488: bltz        $t7, L_803BD4A0
    if (SIGNED(ctx->r15) < 0) {
        // 0x803BD48C: nop
    
            goto L_803BD4A0;
    }
    // 0x803BD48C: nop

    // 0x803BD490: lh          $t8, 0xBE($v0)
    ctx->r24 = MEM_H(ctx->r2, 0XBE);
    // 0x803BD494: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x803BD498: beq         $t8, $zero, L_803BD4A8
    if (ctx->r24 == 0) {
        // 0x803BD49C: nop
    
            goto L_803BD4A8;
    }
    // 0x803BD49C: nop

L_803BD4A0:
    // 0x803BD4A0: jr          $ra
    // 0x803BD4A4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    return;
    // 0x803BD4A4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_803BD4A8:
    // 0x803BD4A8: jr          $ra
    // 0x803BD4AC: nop

    return;
    // 0x803BD4AC: nop

;}
RECOMP_FUNC void func_803BD4B0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803BD4B0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x803BD4B4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x803BD4B8: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x803BD4BC: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x803BD4C0: jal         0x80035154
    // 0x803BD4C4: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    func_80035154(rdram, ctx);
        goto after_0;
    // 0x803BD4C4: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_0:
    // 0x803BD4C8: beq         $v0, $zero, L_803BD51C
    if (ctx->r2 == 0) {
        // 0x803BD4CC: addiu       $t9, $zero, -0x1
        ctx->r25 = ADD32(0, -0X1);
            goto L_803BD51C;
    }
    // 0x803BD4CC: addiu       $t9, $zero, -0x1
    ctx->r25 = ADD32(0, -0X1);
    // 0x803BD4D0: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x803BD4D4: addiu       $v0, $v0, -0x32B0
    ctx->r2 = ADD32(ctx->r2, -0X32B0);
    // 0x803BD4D8: lh          $t6, 0xA($v0)
    ctx->r14 = MEM_H(ctx->r2, 0XA);
    // 0x803BD4DC: lui         $a0, 0x803C
    ctx->r4 = S32(0X803C << 16);
    // 0x803BD4E0: addiu       $t7, $t6, 0x1
    ctx->r15 = ADD32(ctx->r14, 0X1);
    // 0x803BD4E4: sh          $t7, 0xA($v0)
    MEM_H(0XA, ctx->r2) = ctx->r15;
    // 0x803BD4E8: lh          $t8, 0xA($v0)
    ctx->r24 = MEM_H(ctx->r2, 0XA);
    // 0x803BD4EC: addiu       $a0, $a0, -0x2B50
    ctx->r4 = ADD32(ctx->r4, -0X2B50);
    // 0x803BD4F0: slti        $at, $t8, 0x6
    ctx->r1 = SIGNED(ctx->r24) < 0X6 ? 1 : 0;
    // 0x803BD4F4: beq         $at, $zero, L_803BD50C
    if (ctx->r1 == 0) {
        // 0x803BD4F8: nop
    
            goto L_803BD50C;
    }
    // 0x803BD4F8: nop

    // 0x803BD4FC: jal         0x8002989C
    // 0x803BD500: addiu       $a1, $zero, 0x14
    ctx->r5 = ADD32(0, 0X14);
    func_8002989C(rdram, ctx);
        goto after_1;
    // 0x803BD500: addiu       $a1, $zero, 0x14
    ctx->r5 = ADD32(0, 0X14);
    after_1:
    // 0x803BD504: b           L_803BD530
    // 0x803BD508: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_803BD530;
    // 0x803BD508: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_803BD50C:
    // 0x803BD50C: jal         0x800294F8
    // 0x803BD510: nop

    func_800294F8(rdram, ctx);
        goto after_2;
    // 0x803BD510: nop

    after_2:
    // 0x803BD514: b           L_803BD530
    // 0x803BD518: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_803BD530;
    // 0x803BD518: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_803BD51C:
    // 0x803BD51C: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x803BD520: addiu       $v0, $v0, -0x32B0
    ctx->r2 = ADD32(ctx->r2, -0X32B0);
    // 0x803BD524: jal         0x800294F8
    // 0x803BD528: sh          $t9, 0xA($v0)
    MEM_H(0XA, ctx->r2) = ctx->r25;
    func_800294F8(rdram, ctx);
        goto after_3;
    // 0x803BD528: sh          $t9, 0xA($v0)
    MEM_H(0XA, ctx->r2) = ctx->r25;
    after_3:
    // 0x803BD52C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_803BD530:
    // 0x803BD530: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x803BD534: jr          $ra
    // 0x803BD538: nop

    return;
    // 0x803BD538: nop

    // 0x803BD53C: nop

    // 0x803BD540: nop

    // 0x803BD544: nop

;}
RECOMP_FUNC void func_803A1EF0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803A1EF0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x803A1EF4: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x803A1EF8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x803A1EFC: lui         $at, 0x803B
    ctx->r1 = S32(0X803B << 16);
    // 0x803A1F00: lui         $a0, 0x803A
    ctx->r4 = S32(0X803A << 16);
    // 0x803A1F04: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x803A1F08: sb          $zero, -0x7D3F($at)
    MEM_B(-0X7D3F, ctx->r1) = 0;
    // 0x803A1F0C: jal         0x800296E0
    // 0x803A1F10: addiu       $a0, $a0, 0x1FD4
    ctx->r4 = ADD32(ctx->r4, 0X1FD4);
    func_800296E0(rdram, ctx);
        goto after_0;
    // 0x803A1F10: addiu       $a0, $a0, 0x1FD4
    ctx->r4 = ADD32(ctx->r4, 0X1FD4);
    after_0:
    // 0x803A1F14: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x803A1F18: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x803A1F1C: jr          $ra
    // 0x803A1F20: nop

    return;
    // 0x803A1F20: nop

;}
RECOMP_FUNC void func_803A1F24(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803A1F24: lui         $t6, 0x8012
    ctx->r14 = S32(0X8012 << 16);
    // 0x803A1F28: lb          $t6, -0x3088($t6)
    ctx->r14 = MEM_B(ctx->r14, -0X3088);
    // 0x803A1F2C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x803A1F30: addiu       $at, $zero, 0x8
    ctx->r1 = ADD32(0, 0X8);
    // 0x803A1F34: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x803A1F38: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x803A1F3C: beq         $t6, $at, L_803A1F64
    if (ctx->r14 == ctx->r1) {
        // 0x803A1F40: sw          $a1, 0x1C($sp)
        MEM_W(0X1C, ctx->r29) = ctx->r5;
            goto L_803A1F64;
    }
    // 0x803A1F40: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x803A1F44: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x803A1F48: lui         $at, 0x803B
    ctx->r1 = S32(0X803B << 16);
    // 0x803A1F4C: lui         $a0, 0x803A
    ctx->r4 = S32(0X803A << 16);
    // 0x803A1F50: sb          $t7, -0x7D3F($at)
    MEM_B(-0X7D3F, ctx->r1) = ctx->r15;
    // 0x803A1F54: jal         0x800296E0
    // 0x803A1F58: addiu       $a0, $a0, 0x1FD4
    ctx->r4 = ADD32(ctx->r4, 0X1FD4);
    func_800296E0(rdram, ctx);
        goto after_0;
    // 0x803A1F58: addiu       $a0, $a0, 0x1FD4
    ctx->r4 = ADD32(ctx->r4, 0X1FD4);
    after_0:
    // 0x803A1F5C: b           L_803A1F70
    // 0x803A1F60: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_803A1F70;
    // 0x803A1F60: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_803A1F64:
    // 0x803A1F64: jal         0x80037D6C
    // 0x803A1F68: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    func_80037D6C(rdram, ctx);
        goto after_1;
    // 0x803A1F68: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_1:
    // 0x803A1F6C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_803A1F70:
    // 0x803A1F70: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x803A1F74: jr          $ra
    // 0x803A1F78: nop

    return;
    // 0x803A1F78: nop

;}
RECOMP_FUNC void func_803A1F7C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803A1F7C: lui         $t6, 0x8012
    ctx->r14 = S32(0X8012 << 16);
    // 0x803A1F80: lb          $t6, -0x3088($t6)
    ctx->r14 = MEM_B(ctx->r14, -0X3088);
    // 0x803A1F84: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x803A1F88: addiu       $at, $zero, 0x8
    ctx->r1 = ADD32(0, 0X8);
    // 0x803A1F8C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x803A1F90: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x803A1F94: beq         $t6, $at, L_803A1FBC
    if (ctx->r14 == ctx->r1) {
        // 0x803A1F98: sw          $a1, 0x1C($sp)
        MEM_W(0X1C, ctx->r29) = ctx->r5;
            goto L_803A1FBC;
    }
    // 0x803A1F98: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x803A1F9C: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x803A1FA0: lui         $at, 0x803B
    ctx->r1 = S32(0X803B << 16);
    // 0x803A1FA4: lui         $a0, 0x803A
    ctx->r4 = S32(0X803A << 16);
    // 0x803A1FA8: sb          $t7, -0x7D3F($at)
    MEM_B(-0X7D3F, ctx->r1) = ctx->r15;
    // 0x803A1FAC: jal         0x800296E0
    // 0x803A1FB0: addiu       $a0, $a0, 0x1FD4
    ctx->r4 = ADD32(ctx->r4, 0X1FD4);
    func_800296E0(rdram, ctx);
        goto after_0;
    // 0x803A1FB0: addiu       $a0, $a0, 0x1FD4
    ctx->r4 = ADD32(ctx->r4, 0X1FD4);
    after_0:
    // 0x803A1FB4: b           L_803A1FC8
    // 0x803A1FB8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_803A1FC8;
    // 0x803A1FB8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_803A1FBC:
    // 0x803A1FBC: jal         0x80037D6C
    // 0x803A1FC0: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    func_80037D6C(rdram, ctx);
        goto after_1;
    // 0x803A1FC0: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_1:
    // 0x803A1FC4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_803A1FC8:
    // 0x803A1FC8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x803A1FCC: jr          $ra
    // 0x803A1FD0: nop

    return;
    // 0x803A1FD0: nop

;}
RECOMP_FUNC void func_803A1FD4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803A1FD4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x803A1FD8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x803A1FDC: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x803A1FE0: jal         0x80036258
    // 0x803A1FE4: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    func_80036258(rdram, ctx);
        goto after_0;
    // 0x803A1FE4: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    after_0:
    // 0x803A1FE8: lui         $a0, 0x803D
    ctx->r4 = S32(0X803D << 16);
    // 0x803A1FEC: jal         0x80035FF0
    // 0x803A1FF0: addiu       $a0, $a0, 0x1D94
    ctx->r4 = ADD32(ctx->r4, 0X1D94);
    func_80035FF0(rdram, ctx);
        goto after_1;
    // 0x803A1FF0: addiu       $a0, $a0, 0x1D94
    ctx->r4 = ADD32(ctx->r4, 0X1D94);
    after_1:
    // 0x803A1FF4: addiu       $a0, $zero, 0xF00
    ctx->r4 = ADD32(0, 0XF00);
    // 0x803A1FF8: addiu       $a1, $zero, 0x14
    ctx->r5 = ADD32(0, 0X14);
    // 0x803A1FFC: jal         0x80049E40
    // 0x803A2000: addiu       $a2, $zero, 0xF
    ctx->r6 = ADD32(0, 0XF);
    func_80049E40(rdram, ctx);
        goto after_2;
    // 0x803A2000: addiu       $a2, $zero, 0xF
    ctx->r6 = ADD32(0, 0XF);
    after_2:
    // 0x803A2004: jal         0x8003731C
    // 0x803A2008: nop

    func_8003731C(rdram, ctx);
        goto after_3;
    // 0x803A2008: nop

    after_3:
    // 0x803A200C: jal         0x803A2998
    // 0x803A2010: nop

    func_803A2998(rdram, ctx);
        goto after_4;
    // 0x803A2010: nop

    after_4:
    // 0x803A2014: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x803A2018: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    // 0x803A201C: jal         0x80021214
    // 0x803A2020: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_80021214(rdram, ctx);
        goto after_5;
    // 0x803A2020: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_5:
    // 0x803A2024: lui         $t6, 0x800B
    ctx->r14 = S32(0X800B << 16);
    // 0x803A2028: addiu       $t6, $t6, -0x6CE4
    ctx->r14 = ADD32(ctx->r14, -0X6CE4);
    // 0x803A202C: lw          $at, 0x0($t6)
    ctx->r1 = MEM_W(ctx->r14, 0X0);
    // 0x803A2030: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x803A2034: sw          $at, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r1;
    // 0x803A2038: lw          $a2, 0x4($t6)
    ctx->r6 = MEM_W(ctx->r14, 0X4);
    // 0x803A203C: lw          $a1, 0x4($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X4);
    // 0x803A2040: sw          $a2, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r6;
    // 0x803A2044: lw          $a3, 0x8($t6)
    ctx->r7 = MEM_W(ctx->r14, 0X8);
    // 0x803A2048: jal         0x8004B078
    // 0x803A204C: sw          $a3, 0xC($sp)
    MEM_W(0XC, ctx->r29) = ctx->r7;
    func_8004B078(rdram, ctx);
        goto after_6;
    // 0x803A204C: sw          $a3, 0xC($sp)
    MEM_W(0XC, ctx->r29) = ctx->r7;
    after_6:
    // 0x803A2050: jal         0x803A2E78
    // 0x803A2054: nop

    func_803A2E78(rdram, ctx);
        goto after_7;
    // 0x803A2054: nop

    after_7:
    // 0x803A2058: lui         $a0, 0x803A
    ctx->r4 = S32(0X803A << 16);
    // 0x803A205C: jal         0x8002AAC0
    // 0x803A2060: addiu       $a0, $a0, 0x6DB4
    ctx->r4 = ADD32(ctx->r4, 0X6DB4);
    func_8002AAC0(rdram, ctx);
        goto after_8;
    // 0x803A2060: addiu       $a0, $a0, 0x6DB4
    ctx->r4 = ADD32(ctx->r4, 0X6DB4);
    after_8:
    // 0x803A2064: jal         0x803A3360
    // 0x803A2068: nop

    func_803A3360(rdram, ctx);
        goto after_9;
    // 0x803A2068: nop

    after_9:
    // 0x803A206C: jal         0x803A34D8
    // 0x803A2070: nop

    func_803A34D8(rdram, ctx);
        goto after_10;
    // 0x803A2070: nop

    after_10:
    // 0x803A2074: lui         $t9, 0x8012
    ctx->r25 = S32(0X8012 << 16);
    // 0x803A2078: lbu         $t9, -0x32A4($t9)
    ctx->r25 = MEM_BU(ctx->r25, -0X32A4);
    // 0x803A207C: addiu       $at, $zero, 0x5
    ctx->r1 = ADD32(0, 0X5);
    // 0x803A2080: bne         $t9, $at, L_803A2098
    if (ctx->r25 != ctx->r1) {
        // 0x803A2084: nop
    
            goto L_803A2098;
    }
    // 0x803A2084: nop

    // 0x803A2088: jal         0x803A31AC
    // 0x803A208C: nop

    func_803A31AC(rdram, ctx);
        goto after_11;
    // 0x803A208C: nop

    after_11:
    // 0x803A2090: jal         0x803A343C
    // 0x803A2094: nop

    func_803A343C(rdram, ctx);
        goto after_12;
    // 0x803A2094: nop

    after_12:
L_803A2098:
    // 0x803A2098: jal         0x803A2F68
    // 0x803A209C: nop

    func_803A2F68(rdram, ctx);
        goto after_13;
    // 0x803A209C: nop

    after_13:
    // 0x803A20A0: jal         0x803A3624
    // 0x803A20A4: nop

    func_803A3624(rdram, ctx);
        goto after_14;
    // 0x803A20A4: nop

    after_14:
    // 0x803A20A8: lui         $t0, 0x8012
    ctx->r8 = S32(0X8012 << 16);
    // 0x803A20AC: lbu         $t0, -0x32A4($t0)
    ctx->r8 = MEM_BU(ctx->r8, -0X32A4);
    // 0x803A20B0: addiu       $at, $zero, 0x5
    ctx->r1 = ADD32(0, 0X5);
    // 0x803A20B4: bne         $t0, $at, L_803A20CC
    if (ctx->r8 != ctx->r1) {
        // 0x803A20B8: nop
    
            goto L_803A20CC;
    }
    // 0x803A20B8: nop

    // 0x803A20BC: jal         0x8006FB58
    // 0x803A20C0: nop

    func_8006FB58(rdram, ctx);
        goto after_15;
    // 0x803A20C0: nop

    after_15:
    // 0x803A20C4: b           L_803A20D4
    // 0x803A20C8: nop

        goto L_803A20D4;
    // 0x803A20C8: nop

L_803A20CC:
    // 0x803A20CC: jal         0x8006F918
    // 0x803A20D0: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    func_8006F918(rdram, ctx);
        goto after_16;
    // 0x803A20D0: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_16:
L_803A20D4:
    // 0x803A20D4: jal         0x803A36B8
    // 0x803A20D8: nop

    func_803A36B8(rdram, ctx);
        goto after_17;
    // 0x803A20D8: nop

    after_17:
    // 0x803A20DC: lui         $a0, 0x803A
    ctx->r4 = S32(0X803A << 16);
    // 0x803A20E0: jal         0x80029220
    // 0x803A20E4: addiu       $a0, $a0, 0x38D4
    ctx->r4 = ADD32(ctx->r4, 0X38D4);
    func_80029220(rdram, ctx);
        goto after_18;
    // 0x803A20E4: addiu       $a0, $a0, 0x38D4
    ctx->r4 = ADD32(ctx->r4, 0X38D4);
    after_18:
    // 0x803A20E8: jal         0x803A39A8
    // 0x803A20EC: nop

    func_803A39A8(rdram, ctx);
        goto after_19;
    // 0x803A20EC: nop

    after_19:
    // 0x803A20F0: lui         $a0, 0x803A
    ctx->r4 = S32(0X803A << 16);
    // 0x803A20F4: jal         0x80029220
    // 0x803A20F8: addiu       $a0, $a0, 0x3940
    ctx->r4 = ADD32(ctx->r4, 0X3940);
    func_80029220(rdram, ctx);
        goto after_20;
    // 0x803A20F8: addiu       $a0, $a0, 0x3940
    ctx->r4 = ADD32(ctx->r4, 0X3940);
    after_20:
    // 0x803A20FC: lui         $t1, 0x8012
    ctx->r9 = S32(0X8012 << 16);
    // 0x803A2100: lbu         $t1, -0x32A4($t1)
    ctx->r9 = MEM_BU(ctx->r9, -0X32A4);
    // 0x803A2104: addiu       $at, $zero, 0x5
    ctx->r1 = ADD32(0, 0X5);
    // 0x803A2108: bne         $t1, $at, L_803A2128
    if (ctx->r9 != ctx->r1) {
        // 0x803A210C: lui         $a0, 0x803A
        ctx->r4 = S32(0X803A << 16);
            goto L_803A2128;
    }
    // 0x803A210C: lui         $a0, 0x803A
    ctx->r4 = S32(0X803A << 16);
    // 0x803A2110: lui         $a0, 0x803A
    ctx->r4 = S32(0X803A << 16);
    // 0x803A2114: addiu       $a0, $a0, 0x2144
    ctx->r4 = ADD32(ctx->r4, 0X2144);
    // 0x803A2118: jal         0x8004A9B4
    // 0x803A211C: addiu       $a1, $zero, 0xB
    ctx->r5 = ADD32(0, 0XB);
    func_8004A9B4(rdram, ctx);
        goto after_21;
    // 0x803A211C: addiu       $a1, $zero, 0xB
    ctx->r5 = ADD32(0, 0XB);
    after_21:
    // 0x803A2120: b           L_803A2138
    // 0x803A2124: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_803A2138;
    // 0x803A2124: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_803A2128:
    // 0x803A2128: addiu       $a0, $a0, 0x2144
    ctx->r4 = ADD32(ctx->r4, 0X2144);
    // 0x803A212C: jal         0x8004AE38
    // 0x803A2130: addiu       $a1, $zero, 0xB
    ctx->r5 = ADD32(0, 0XB);
    func_8004AE38(rdram, ctx);
        goto after_22;
    // 0x803A2130: addiu       $a1, $zero, 0xB
    ctx->r5 = ADD32(0, 0XB);
    after_22:
    // 0x803A2134: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_803A2138:
    // 0x803A2138: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x803A213C: jr          $ra
    // 0x803A2140: nop

    return;
    // 0x803A2140: nop

;}
RECOMP_FUNC void func_803A2144(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803A2144: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x803A2148: sw          $s7, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r23;
    // 0x803A214C: sw          $s4, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r20;
    // 0x803A2150: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x803A2154: sw          $s6, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r22;
    // 0x803A2158: sw          $s5, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r21;
    // 0x803A215C: sw          $s3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r19;
    // 0x803A2160: sw          $s2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r18;
    // 0x803A2164: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x803A2168: lui         $s1, 0x803B
    ctx->r17 = S32(0X803B << 16);
    // 0x803A216C: lui         $s4, 0x800E
    ctx->r20 = S32(0X800E << 16);
    // 0x803A2170: lui         $s7, 0x803A
    ctx->r23 = S32(0X803A << 16);
    // 0x803A2174: or          $s2, $a0, $zero
    ctx->r18 = ctx->r4 | 0;
    // 0x803A2178: or          $s3, $a1, $zero
    ctx->r19 = ctx->r5 | 0;
    // 0x803A217C: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x803A2180: addiu       $s7, $s7, 0x6E08
    ctx->r23 = ADD32(ctx->r23, 0X6E08);
    // 0x803A2184: addiu       $s4, $s4, -0x3770
    ctx->r20 = ADD32(ctx->r20, -0X3770);
    // 0x803A2188: addiu       $s1, $s1, -0x7D40
    ctx->r17 = ADD32(ctx->r17, -0X7D40);
    // 0x803A218C: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x803A2190: addiu       $s5, $zero, 0x18
    ctx->r21 = ADD32(0, 0X18);
    // 0x803A2194: lui         $s6, 0x3
    ctx->r22 = S32(0X3 << 16);
L_803A2198:
    // 0x803A2198: andi        $t6, $s0, 0xFF
    ctx->r14 = ctx->r16 & 0XFF;
    // 0x803A219C: multu       $t6, $s5
    result = U64(U32(ctx->r14)) * U64(U32(ctx->r21)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x803A21A0: sb          $s0, 0x0($s1)
    MEM_B(0X0, ctx->r17) = ctx->r16;
    // 0x803A21A4: mflo        $t7
    ctx->r15 = lo;
    // 0x803A21A8: addu        $t8, $s4, $t7
    ctx->r24 = ADD32(ctx->r20, ctx->r15);
    // 0x803A21AC: addu        $t9, $t8, $s6
    ctx->r25 = ADD32(ctx->r24, ctx->r22);
    // 0x803A21B0: lhu         $a0, 0x6F8($t9)
    ctx->r4 = MEM_HU(ctx->r25, 0X6F8);
    // 0x803A21B4: jal         0x80035D2C
    // 0x803A21B8: nop

    func_80035D2C(rdram, ctx);
        goto after_0;
    // 0x803A21B8: nop

    after_0:
    // 0x803A21BC: sll         $t0, $v0, 2
    ctx->r8 = S32(ctx->r2 << 2);
    // 0x803A21C0: addu        $t1, $s7, $t0
    ctx->r9 = ADD32(ctx->r23, ctx->r8);
    // 0x803A21C4: lw          $t9, 0x0($t1)
    ctx->r25 = MEM_W(ctx->r9, 0X0);
    // 0x803A21C8: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x803A21CC: jalr        $t9
    // 0x803A21D0: or          $a1, $s3, $zero
    ctx->r5 = ctx->r19 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x803A21D0: or          $a1, $s3, $zero
    ctx->r5 = ctx->r19 | 0;
    after_1:
    // 0x803A21D4: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x803A21D8: andi        $t2, $s0, 0xFF
    ctx->r10 = ctx->r16 & 0XFF;
    // 0x803A21DC: slti        $at, $t2, 0x4
    ctx->r1 = SIGNED(ctx->r10) < 0X4 ? 1 : 0;
    // 0x803A21E0: bne         $at, $zero, L_803A2198
    if (ctx->r1 != 0) {
        // 0x803A21E4: or          $s0, $t2, $zero
        ctx->r16 = ctx->r10 | 0;
            goto L_803A2198;
    }
    // 0x803A21E4: or          $s0, $t2, $zero
    ctx->r16 = ctx->r10 | 0;
    // 0x803A21E8: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x803A21EC: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x803A21F0: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x803A21F4: lw          $s2, 0x1C($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X1C);
    // 0x803A21F8: lw          $s3, 0x20($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X20);
    // 0x803A21FC: lw          $s4, 0x24($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X24);
    // 0x803A2200: lw          $s5, 0x28($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X28);
    // 0x803A2204: lw          $s6, 0x2C($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X2C);
    // 0x803A2208: lw          $s7, 0x30($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X30);
    // 0x803A220C: jr          $ra
    // 0x803A2210: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    return;
    // 0x803A2210: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_803A2214(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803A2214: lui         $t6, 0x803B
    ctx->r14 = S32(0X803B << 16);
    // 0x803A2218: lbu         $t6, -0x7D40($t6)
    ctx->r14 = MEM_BU(ctx->r14, -0X7D40);
    // 0x803A221C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x803A2220: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x803A2224: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x803A2228: addu        $v0, $a0, $t6
    ctx->r2 = ADD32(ctx->r4, ctx->r14);
    // 0x803A222C: lb          $t7, 0x38($v0)
    ctx->r15 = MEM_B(ctx->r2, 0X38);
    // 0x803A2230: nop

    // 0x803A2234: bne         $t7, $zero, L_803A226C
    if (ctx->r15 != 0) {
        // 0x803A2238: nop
    
            goto L_803A226C;
    }
    // 0x803A2238: nop

    // 0x803A223C: lb          $t8, 0x48($v0)
    ctx->r24 = MEM_B(ctx->r2, 0X48);
    // 0x803A2240: nop

    // 0x803A2244: bne         $t8, $zero, L_803A2270
    if (ctx->r24 != 0) {
        // 0x803A2248: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_803A2270;
    }
    // 0x803A2248: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x803A224C: jal         0x80035770
    // 0x803A2250: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_80035770(rdram, ctx);
        goto after_0;
    // 0x803A2250: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x803A2254: lui         $t0, 0x803B
    ctx->r8 = S32(0X803B << 16);
    // 0x803A2258: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x803A225C: lbu         $t0, -0x7D40($t0)
    ctx->r8 = MEM_BU(ctx->r8, -0X7D40);
    // 0x803A2260: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x803A2264: addu        $t1, $a0, $t0
    ctx->r9 = ADD32(ctx->r4, ctx->r8);
    // 0x803A2268: sb          $t9, 0x48($t1)
    MEM_B(0X48, ctx->r9) = ctx->r25;
L_803A226C:
    // 0x803A226C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_803A2270:
    // 0x803A2270: addu        $t2, $a0, $v0
    ctx->r10 = ADD32(ctx->r4, ctx->r2);
    // 0x803A2274: lb          $t3, 0x48($t2)
    ctx->r11 = MEM_B(ctx->r10, 0X48);
    // 0x803A2278: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x803A227C: beq         $t3, $zero, L_803A22C4
    if (ctx->r11 == 0) {
        // 0x803A2280: andi        $t4, $v0, 0xFF
        ctx->r12 = ctx->r2 & 0XFF;
            goto L_803A22C4;
    }
    // 0x803A2280: andi        $t4, $v0, 0xFF
    ctx->r12 = ctx->r2 & 0XFF;
    // 0x803A2284: slti        $at, $t4, 0x4
    ctx->r1 = SIGNED(ctx->r12) < 0X4 ? 1 : 0;
    // 0x803A2288: bne         $at, $zero, L_803A2270
    if (ctx->r1 != 0) {
        // 0x803A228C: or          $v0, $t4, $zero
        ctx->r2 = ctx->r12 | 0;
            goto L_803A2270;
    }
    // 0x803A228C: or          $v0, $t4, $zero
    ctx->r2 = ctx->r12 | 0;
    // 0x803A2290: jal         0x803A2ACC
    // 0x803A2294: nop

    func_803A2ACC(rdram, ctx);
        goto after_1;
    // 0x803A2294: nop

    after_1:
    // 0x803A2298: lui         $t5, 0x803B
    ctx->r13 = S32(0X803B << 16);
    // 0x803A229C: lbu         $t5, -0x7D3F($t5)
    ctx->r13 = MEM_BU(ctx->r13, -0X7D3F);
    // 0x803A22A0: nop

    // 0x803A22A4: bne         $t5, $zero, L_803A22BC
    if (ctx->r13 != 0) {
        // 0x803A22A8: nop
    
            goto L_803A22BC;
    }
    // 0x803A22A8: nop

    // 0x803A22AC: jal         0x800373A4
    // 0x803A22B0: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    func_800373A4(rdram, ctx);
        goto after_2;
    // 0x803A22B0: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_2:
    // 0x803A22B4: b           L_803A22C8
    // 0x803A22B8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_803A22C8;
    // 0x803A22B8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_803A22BC:
    // 0x803A22BC: jal         0x80037908
    // 0x803A22C0: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    func_80037908(rdram, ctx);
        goto after_3;
    // 0x803A22C0: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_3:
L_803A22C4:
    // 0x803A22C4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_803A22C8:
    // 0x803A22C8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x803A22CC: jr          $ra
    // 0x803A22D0: nop

    return;
    // 0x803A22D0: nop

;}
RECOMP_FUNC void func_803A22D4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803A22D4: lui         $t6, 0x803B
    ctx->r14 = S32(0X803B << 16);
    // 0x803A22D8: lbu         $t6, -0x7D40($t6)
    ctx->r14 = MEM_BU(ctx->r14, -0X7D40);
    // 0x803A22DC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x803A22E0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x803A22E4: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x803A22E8: addu        $v0, $a0, $t6
    ctx->r2 = ADD32(ctx->r4, ctx->r14);
    // 0x803A22EC: lb          $t7, 0x38($v0)
    ctx->r15 = MEM_B(ctx->r2, 0X38);
    // 0x803A22F0: nop

    // 0x803A22F4: beq         $t7, $zero, L_803A2304
    if (ctx->r15 == 0) {
        // 0x803A22F8: nop
    
            goto L_803A2304;
    }
    // 0x803A22F8: nop

    // 0x803A22FC: b           L_803A2334
    // 0x803A2300: sb          $zero, 0x38($v0)
    MEM_B(0X38, ctx->r2) = 0;
        goto L_803A2334;
    // 0x803A2300: sb          $zero, 0x38($v0)
    MEM_B(0X38, ctx->r2) = 0;
L_803A2304:
    // 0x803A2304: lb          $t8, 0x48($v0)
    ctx->r24 = MEM_B(ctx->r2, 0X48);
    // 0x803A2308: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x803A230C: bne         $v1, $t8, L_803A231C
    if (ctx->r3 != ctx->r24) {
        // 0x803A2310: lui         $t9, 0x803B
        ctx->r25 = S32(0X803B << 16);
            goto L_803A231C;
    }
    // 0x803A2310: lui         $t9, 0x803B
    ctx->r25 = S32(0X803B << 16);
    // 0x803A2314: b           L_803A2334
    // 0x803A2318: sb          $zero, 0x48($v0)
    MEM_B(0X48, ctx->r2) = 0;
        goto L_803A2334;
    // 0x803A2318: sb          $zero, 0x48($v0)
    MEM_B(0X48, ctx->r2) = 0;
L_803A231C:
    // 0x803A231C: lbu         $t9, -0x7D3F($t9)
    ctx->r25 = MEM_BU(ctx->r25, -0X7D3F);
    // 0x803A2320: nop

    // 0x803A2324: bne         $v1, $t9, L_803A2338
    if (ctx->r3 != ctx->r25) {
        // 0x803A2328: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_803A2338;
    }
    // 0x803A2328: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x803A232C: jal         0x80037344
    // 0x803A2330: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    func_80037344(rdram, ctx);
        goto after_0;
    // 0x803A2330: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_0:
L_803A2334:
    // 0x803A2334: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_803A2338:
    // 0x803A2338: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x803A233C: jr          $ra
    // 0x803A2340: nop

    return;
    // 0x803A2340: nop

;}
RECOMP_FUNC void func_803A2344(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803A2344: lui         $v1, 0x803B
    ctx->r3 = S32(0X803B << 16);
    // 0x803A2348: addiu       $v1, $v1, -0x7D40
    ctx->r3 = ADD32(ctx->r3, -0X7D40);
    // 0x803A234C: lbu         $t6, 0x0($v1)
    ctx->r14 = MEM_BU(ctx->r3, 0X0);
    // 0x803A2350: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x803A2354: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x803A2358: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x803A235C: addu        $v0, $a0, $t6
    ctx->r2 = ADD32(ctx->r4, ctx->r14);
    // 0x803A2360: lb          $t7, 0x38($v0)
    ctx->r15 = MEM_B(ctx->r2, 0X38);
    // 0x803A2364: nop

    // 0x803A2368: bne         $t7, $zero, L_803A23C8
    if (ctx->r15 != 0) {
        // 0x803A236C: nop
    
            goto L_803A23C8;
    }
    // 0x803A236C: nop

    // 0x803A2370: lb          $t8, 0x48($v0)
    ctx->r24 = MEM_B(ctx->r2, 0X48);
    // 0x803A2374: nop

    // 0x803A2378: bne         $t8, $zero, L_803A23F8
    if (ctx->r24 != 0) {
        // 0x803A237C: nop
    
            goto L_803A23F8;
    }
    // 0x803A237C: nop

    // 0x803A2380: jal         0x80035734
    // 0x803A2384: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_80035734(rdram, ctx);
        goto after_0;
    // 0x803A2384: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x803A2388: lui         $t9, 0x803B
    ctx->r25 = S32(0X803B << 16);
    // 0x803A238C: lbu         $t9, -0x7D3F($t9)
    ctx->r25 = MEM_BU(ctx->r25, -0X7D3F);
    // 0x803A2390: lui         $v1, 0x803B
    ctx->r3 = S32(0X803B << 16);
    // 0x803A2394: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x803A2398: bne         $t9, $zero, L_803A23B4
    if (ctx->r25 != 0) {
        // 0x803A239C: addiu       $v1, $v1, -0x7D40
        ctx->r3 = ADD32(ctx->r3, -0X7D40);
            goto L_803A23B4;
    }
    // 0x803A239C: addiu       $v1, $v1, -0x7D40
    ctx->r3 = ADD32(ctx->r3, -0X7D40);
    // 0x803A23A0: lbu         $t1, 0x0($v1)
    ctx->r9 = MEM_BU(ctx->r3, 0X0);
    // 0x803A23A4: addiu       $t0, $zero, 0x3
    ctx->r8 = ADD32(0, 0X3);
    // 0x803A23A8: addu        $t2, $a0, $t1
    ctx->r10 = ADD32(ctx->r4, ctx->r9);
    // 0x803A23AC: b           L_803A23F8
    // 0x803A23B0: sb          $t0, 0x38($t2)
    MEM_B(0X38, ctx->r10) = ctx->r8;
        goto L_803A23F8;
    // 0x803A23B0: sb          $t0, 0x38($t2)
    MEM_B(0X38, ctx->r10) = ctx->r8;
L_803A23B4:
    // 0x803A23B4: lbu         $t4, 0x0($v1)
    ctx->r12 = MEM_BU(ctx->r3, 0X0);
    // 0x803A23B8: addiu       $t3, $zero, 0x1
    ctx->r11 = ADD32(0, 0X1);
    // 0x803A23BC: addu        $t5, $a0, $t4
    ctx->r13 = ADD32(ctx->r4, ctx->r12);
    // 0x803A23C0: b           L_803A23F8
    // 0x803A23C4: sb          $t3, 0x38($t5)
    MEM_B(0X38, ctx->r13) = ctx->r11;
        goto L_803A23F8;
    // 0x803A23C4: sb          $t3, 0x38($t5)
    MEM_B(0X38, ctx->r13) = ctx->r11;
L_803A23C8:
    // 0x803A23C8: jal         0x80035734
    // 0x803A23CC: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_80035734(rdram, ctx);
        goto after_1;
    // 0x803A23CC: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_1:
    // 0x803A23D0: lui         $v1, 0x803B
    ctx->r3 = S32(0X803B << 16);
    // 0x803A23D4: addiu       $v1, $v1, -0x7D40
    ctx->r3 = ADD32(ctx->r3, -0X7D40);
    // 0x803A23D8: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x803A23DC: lbu         $t6, 0x0($v1)
    ctx->r14 = MEM_BU(ctx->r3, 0X0);
    // 0x803A23E0: nop

    // 0x803A23E4: addu        $v0, $a0, $t6
    ctx->r2 = ADD32(ctx->r4, ctx->r14);
    // 0x803A23E8: lb          $t7, 0x38($v0)
    ctx->r15 = MEM_B(ctx->r2, 0X38);
    // 0x803A23EC: nop

    // 0x803A23F0: addiu       $t8, $t7, -0x1
    ctx->r24 = ADD32(ctx->r15, -0X1);
    // 0x803A23F4: sb          $t8, 0x38($v0)
    MEM_B(0X38, ctx->r2) = ctx->r24;
L_803A23F8:
    // 0x803A23F8: jal         0x803A2DE0
    // 0x803A23FC: nop

    func_803A2DE0(rdram, ctx);
        goto after_2;
    // 0x803A23FC: nop

    after_2:
    // 0x803A2400: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x803A2404: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x803A2408: jr          $ra
    // 0x803A240C: nop

    return;
    // 0x803A240C: nop

;}
RECOMP_FUNC void func_803A2410(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803A2410: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x803A2414: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x803A2418: lui         $a1, 0x803B
    ctx->r5 = S32(0X803B << 16);
    // 0x803A241C: addiu       $a1, $a1, -0x7D40
    ctx->r5 = ADD32(ctx->r5, -0X7D40);
    // 0x803A2420: lbu         $t6, 0x0($a1)
    ctx->r14 = MEM_BU(ctx->r5, 0X0);
    // 0x803A2424: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x803A2428: addu        $v0, $a0, $t6
    ctx->r2 = ADD32(ctx->r4, ctx->r14);
    // 0x803A242C: lb          $v1, 0x38($v0)
    ctx->r3 = MEM_B(ctx->r2, 0X38);
    // 0x803A2430: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x803A2434: beq         $v1, $zero, L_803A245C
    if (ctx->r3 == 0) {
        // 0x803A2438: nop
    
            goto L_803A245C;
    }
    // 0x803A2438: nop

    // 0x803A243C: beq         $v1, $at, L_803A24A0
    if (ctx->r3 == ctx->r1) {
        // 0x803A2440: addiu       $at, $zero, 0x2
        ctx->r1 = ADD32(0, 0X2);
            goto L_803A24A0;
    }
    // 0x803A2440: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x803A2444: beq         $v1, $at, L_803A24F4
    if (ctx->r3 == ctx->r1) {
        // 0x803A2448: addiu       $at, $zero, 0x3
        ctx->r1 = ADD32(0, 0X3);
            goto L_803A24F4;
    }
    // 0x803A2448: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x803A244C: beq         $v1, $at, L_803A2528
    if (ctx->r3 == ctx->r1) {
        // 0x803A2450: nop
    
            goto L_803A2528;
    }
    // 0x803A2450: nop

    // 0x803A2454: b           L_803A254C
    // 0x803A2458: nop

        goto L_803A254C;
    // 0x803A2458: nop

L_803A245C:
    // 0x803A245C: lb          $t7, 0x48($v0)
    ctx->r15 = MEM_B(ctx->r2, 0X48);
    // 0x803A2460: nop

    // 0x803A2464: bne         $t7, $zero, L_803A254C
    if (ctx->r15 != 0) {
        // 0x803A2468: nop
    
            goto L_803A254C;
    }
    // 0x803A2468: nop

    // 0x803A246C: jal         0x80035734
    // 0x803A2470: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_80035734(rdram, ctx);
        goto after_0;
    // 0x803A2470: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x803A2474: lui         $a1, 0x803B
    ctx->r5 = S32(0X803B << 16);
    // 0x803A2478: addiu       $a1, $a1, -0x7D40
    ctx->r5 = ADD32(ctx->r5, -0X7D40);
    // 0x803A247C: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x803A2480: lbu         $t8, 0x0($a1)
    ctx->r24 = MEM_BU(ctx->r5, 0X0);
    // 0x803A2484: nop

    // 0x803A2488: addu        $v0, $a0, $t8
    ctx->r2 = ADD32(ctx->r4, ctx->r24);
    // 0x803A248C: lb          $t9, 0x38($v0)
    ctx->r25 = MEM_B(ctx->r2, 0X38);
    // 0x803A2490: nop

    // 0x803A2494: addiu       $t0, $t9, 0x1
    ctx->r8 = ADD32(ctx->r25, 0X1);
    // 0x803A2498: b           L_803A254C
    // 0x803A249C: sb          $t0, 0x38($v0)
    MEM_B(0X38, ctx->r2) = ctx->r8;
        goto L_803A254C;
    // 0x803A249C: sb          $t0, 0x38($v0)
    MEM_B(0X38, ctx->r2) = ctx->r8;
L_803A24A0:
    // 0x803A24A0: jal         0x80035734
    // 0x803A24A4: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_80035734(rdram, ctx);
        goto after_1;
    // 0x803A24A4: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_1:
    // 0x803A24A8: lui         $t1, 0x803B
    ctx->r9 = S32(0X803B << 16);
    // 0x803A24AC: lbu         $t1, -0x7D3F($t1)
    ctx->r9 = MEM_BU(ctx->r9, -0X7D3F);
    // 0x803A24B0: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x803A24B4: lui         $a1, 0x803B
    ctx->r5 = S32(0X803B << 16);
    // 0x803A24B8: bne         $t1, $zero, L_803A24E0
    if (ctx->r9 != 0) {
        // 0x803A24BC: addiu       $a1, $a1, -0x7D40
        ctx->r5 = ADD32(ctx->r5, -0X7D40);
            goto L_803A24E0;
    }
    // 0x803A24BC: addiu       $a1, $a1, -0x7D40
    ctx->r5 = ADD32(ctx->r5, -0X7D40);
    // 0x803A24C0: lbu         $t2, 0x0($a1)
    ctx->r10 = MEM_BU(ctx->r5, 0X0);
    // 0x803A24C4: nop

    // 0x803A24C8: addu        $v0, $a0, $t2
    ctx->r2 = ADD32(ctx->r4, ctx->r10);
    // 0x803A24CC: lb          $t3, 0x38($v0)
    ctx->r11 = MEM_B(ctx->r2, 0X38);
    // 0x803A24D0: nop

    // 0x803A24D4: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x803A24D8: b           L_803A254C
    // 0x803A24DC: sb          $t4, 0x38($v0)
    MEM_B(0X38, ctx->r2) = ctx->r12;
        goto L_803A254C;
    // 0x803A24DC: sb          $t4, 0x38($v0)
    MEM_B(0X38, ctx->r2) = ctx->r12;
L_803A24E0:
    // 0x803A24E0: lbu         $t5, 0x0($a1)
    ctx->r13 = MEM_BU(ctx->r5, 0X0);
    // 0x803A24E4: nop

    // 0x803A24E8: addu        $t6, $a0, $t5
    ctx->r14 = ADD32(ctx->r4, ctx->r13);
    // 0x803A24EC: b           L_803A254C
    // 0x803A24F0: sb          $zero, 0x38($t6)
    MEM_B(0X38, ctx->r14) = 0;
        goto L_803A254C;
    // 0x803A24F0: sb          $zero, 0x38($t6)
    MEM_B(0X38, ctx->r14) = 0;
L_803A24F4:
    // 0x803A24F4: jal         0x80035734
    // 0x803A24F8: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_80035734(rdram, ctx);
        goto after_2;
    // 0x803A24F8: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_2:
    // 0x803A24FC: lui         $a1, 0x803B
    ctx->r5 = S32(0X803B << 16);
    // 0x803A2500: addiu       $a1, $a1, -0x7D40
    ctx->r5 = ADD32(ctx->r5, -0X7D40);
    // 0x803A2504: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x803A2508: lbu         $t7, 0x0($a1)
    ctx->r15 = MEM_BU(ctx->r5, 0X0);
    // 0x803A250C: nop

    // 0x803A2510: addu        $v0, $a0, $t7
    ctx->r2 = ADD32(ctx->r4, ctx->r15);
    // 0x803A2514: lb          $t8, 0x38($v0)
    ctx->r24 = MEM_B(ctx->r2, 0X38);
    // 0x803A2518: nop

    // 0x803A251C: addiu       $t9, $t8, 0x1
    ctx->r25 = ADD32(ctx->r24, 0X1);
    // 0x803A2520: b           L_803A254C
    // 0x803A2524: sb          $t9, 0x38($v0)
    MEM_B(0X38, ctx->r2) = ctx->r25;
        goto L_803A254C;
    // 0x803A2524: sb          $t9, 0x38($v0)
    MEM_B(0X38, ctx->r2) = ctx->r25;
L_803A2528:
    // 0x803A2528: jal         0x80035734
    // 0x803A252C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_80035734(rdram, ctx);
        goto after_3;
    // 0x803A252C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_3:
    // 0x803A2530: lui         $a1, 0x803B
    ctx->r5 = S32(0X803B << 16);
    // 0x803A2534: addiu       $a1, $a1, -0x7D40
    ctx->r5 = ADD32(ctx->r5, -0X7D40);
    // 0x803A2538: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x803A253C: lbu         $t0, 0x0($a1)
    ctx->r8 = MEM_BU(ctx->r5, 0X0);
    // 0x803A2540: nop

    // 0x803A2544: addu        $t1, $a0, $t0
    ctx->r9 = ADD32(ctx->r4, ctx->r8);
    // 0x803A2548: sb          $zero, 0x38($t1)
    MEM_B(0X38, ctx->r9) = 0;
L_803A254C:
    // 0x803A254C: jal         0x803A2DE0
    // 0x803A2550: nop

    func_803A2DE0(rdram, ctx);
        goto after_4;
    // 0x803A2550: nop

    after_4:
    // 0x803A2554: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x803A2558: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x803A255C: jr          $ra
    // 0x803A2560: nop

    return;
    // 0x803A2560: nop

;}
RECOMP_FUNC void func_803A2564(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803A2564: lui         $t1, 0x803B
    ctx->r9 = S32(0X803B << 16);
    // 0x803A2568: addiu       $t1, $t1, -0x7D40
    ctx->r9 = ADD32(ctx->r9, -0X7D40);
    // 0x803A256C: lbu         $t0, 0x0($t1)
    ctx->r8 = MEM_BU(ctx->r9, 0X0);
    // 0x803A2570: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x803A2574: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x803A2578: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x803A257C: addu        $v1, $a0, $t0
    ctx->r3 = ADD32(ctx->r4, ctx->r8);
    // 0x803A2580: lb          $v0, 0x38($v1)
    ctx->r2 = MEM_B(ctx->r3, 0X38);
    // 0x803A2584: or          $a3, $a0, $zero
    ctx->r7 = ctx->r4 | 0;
    // 0x803A2588: beq         $v0, $zero, L_803A26C0
    if (ctx->r2 == 0) {
        // 0x803A258C: addiu       $at, $zero, 0x1
        ctx->r1 = ADD32(0, 0X1);
            goto L_803A26C0;
    }
    // 0x803A258C: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x803A2590: beq         $v0, $at, L_803A25B8
    if (ctx->r2 == ctx->r1) {
        // 0x803A2594: or          $a1, $zero, $zero
        ctx->r5 = 0 | 0;
            goto L_803A25B8;
    }
    // 0x803A2594: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x803A2598: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x803A259C: beq         $v0, $at, L_803A2604
    if (ctx->r2 == ctx->r1) {
        // 0x803A25A0: addiu       $a1, $zero, 0x1
        ctx->r5 = ADD32(0, 0X1);
            goto L_803A2604;
    }
    // 0x803A25A0: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x803A25A4: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x803A25A8: beq         $v0, $at, L_803A265C
    if (ctx->r2 == ctx->r1) {
        // 0x803A25AC: sll         $t8, $t0, 3
        ctx->r24 = S32(ctx->r8 << 3);
            goto L_803A265C;
    }
    // 0x803A25AC: sll         $t8, $t0, 3
    ctx->r24 = S32(ctx->r8 << 3);
    // 0x803A25B0: b           L_803A26C4
    // 0x803A25B4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_803A26C4;
    // 0x803A25B4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_803A25B8:
    // 0x803A25B8: lb          $a0, 0x3C($v1)
    ctx->r4 = MEM_B(ctx->r3, 0X3C);
    // 0x803A25BC: sw          $a3, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r7;
    // 0x803A25C0: jal         0x803A2BF8
    // 0x803A25C4: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    func_803A2BF8(rdram, ctx);
        goto after_0;
    // 0x803A25C4: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    after_0:
    // 0x803A25C8: lui         $t1, 0x803B
    ctx->r9 = S32(0X803B << 16);
    // 0x803A25CC: addiu       $t1, $t1, -0x7D40
    ctx->r9 = ADD32(ctx->r9, -0X7D40);
    // 0x803A25D0: lbu         $t6, 0x0($t1)
    ctx->r14 = MEM_BU(ctx->r9, 0X0);
    // 0x803A25D4: lw          $a3, 0x28($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X28);
    // 0x803A25D8: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x803A25DC: addu        $t7, $a3, $t6
    ctx->r15 = ADD32(ctx->r7, ctx->r14);
    // 0x803A25E0: sb          $v0, 0x3C($t7)
    MEM_B(0X3C, ctx->r15) = ctx->r2;
    // 0x803A25E4: lbu         $t8, 0x0($t1)
    ctx->r24 = MEM_BU(ctx->r9, 0X0);
    // 0x803A25E8: nop

    // 0x803A25EC: addu        $t9, $a3, $t8
    ctx->r25 = ADD32(ctx->r7, ctx->r24);
    // 0x803A25F0: lb          $a1, 0x3C($t9)
    ctx->r5 = MEM_B(ctx->r25, 0X3C);
    // 0x803A25F4: jal         0x803A2D60
    // 0x803A25F8: nop

    func_803A2D60(rdram, ctx);
        goto after_1;
    // 0x803A25F8: nop

    after_1:
    // 0x803A25FC: b           L_803A26C4
    // 0x803A2600: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_803A26C4;
    // 0x803A2600: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_803A2604:
    // 0x803A2604: lb          $a0, 0x40($v1)
    ctx->r4 = MEM_B(ctx->r3, 0X40);
    // 0x803A2608: sw          $a3, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r7;
    // 0x803A260C: jal         0x803A2BF8
    // 0x803A2610: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    func_803A2BF8(rdram, ctx);
        goto after_2;
    // 0x803A2610: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    after_2:
    // 0x803A2614: lui         $t1, 0x803B
    ctx->r9 = S32(0X803B << 16);
    // 0x803A2618: addiu       $t1, $t1, -0x7D40
    ctx->r9 = ADD32(ctx->r9, -0X7D40);
    // 0x803A261C: lbu         $t2, 0x0($t1)
    ctx->r10 = MEM_BU(ctx->r9, 0X0);
    // 0x803A2620: lw          $a3, 0x28($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X28);
    // 0x803A2624: addiu       $a0, $zero, 0x3
    ctx->r4 = ADD32(0, 0X3);
    // 0x803A2628: addu        $t3, $a3, $t2
    ctx->r11 = ADD32(ctx->r7, ctx->r10);
    // 0x803A262C: sb          $v0, 0x40($t3)
    MEM_B(0X40, ctx->r11) = ctx->r2;
    // 0x803A2630: lbu         $t4, 0x0($t1)
    ctx->r12 = MEM_BU(ctx->r9, 0X0);
    // 0x803A2634: nop

    // 0x803A2638: addu        $t5, $a3, $t4
    ctx->r13 = ADD32(ctx->r7, ctx->r12);
    // 0x803A263C: lb          $a1, 0x40($t5)
    ctx->r5 = MEM_B(ctx->r13, 0X40);
    // 0x803A2640: nop

    // 0x803A2644: addiu       $a1, $a1, -0x1
    ctx->r5 = ADD32(ctx->r5, -0X1);
    // 0x803A2648: sll         $t6, $a1, 24
    ctx->r14 = S32(ctx->r5 << 24);
    // 0x803A264C: jal         0x803A2D60
    // 0x803A2650: sra         $a1, $t6, 24
    ctx->r5 = S32(SIGNED(ctx->r14) >> 24);
    func_803A2D60(rdram, ctx);
        goto after_3;
    // 0x803A2650: sra         $a1, $t6, 24
    ctx->r5 = S32(SIGNED(ctx->r14) >> 24);
    after_3:
    // 0x803A2654: b           L_803A26C4
    // 0x803A2658: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_803A26C4;
    // 0x803A2658: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_803A265C:
    // 0x803A265C: lui         $t9, 0x8012
    ctx->r25 = S32(0X8012 << 16);
    // 0x803A2660: lb          $t9, -0x3088($t9)
    ctx->r25 = MEM_B(ctx->r25, -0X3088);
    // 0x803A2664: addu        $t8, $t8, $t0
    ctx->r24 = ADD32(ctx->r24, ctx->r8);
    // 0x803A2668: lui         $v0, 0x803A
    ctx->r2 = S32(0X803A << 16);
    // 0x803A266C: addu        $t2, $t8, $t9
    ctx->r10 = ADD32(ctx->r24, ctx->r25);
    // 0x803A2670: addu        $v0, $v0, $t2
    ctx->r2 = ADD32(ctx->r2, ctx->r10);
    // 0x803A2674: lbu         $v0, 0x6D14($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X6D14);
    // 0x803A2678: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x803A267C: addu        $v1, $a3, $v0
    ctx->r3 = ADD32(ctx->r7, ctx->r2);
    // 0x803A2680: lb          $a0, 0x44($v1)
    ctx->r4 = MEM_B(ctx->r3, 0X44);
    // 0x803A2684: sw          $a3, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r7;
    // 0x803A2688: sw          $v1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r3;
    // 0x803A268C: jal         0x803A2BF8
    // 0x803A2690: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    func_803A2BF8(rdram, ctx);
        goto after_4;
    // 0x803A2690: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    after_4:
    // 0x803A2694: lw          $v1, 0x18($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X18);
    // 0x803A2698: lw          $a3, 0x28($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X28);
    // 0x803A269C: lui         $t1, 0x803B
    ctx->r9 = S32(0X803B << 16);
    // 0x803A26A0: addiu       $t1, $t1, -0x7D40
    ctx->r9 = ADD32(ctx->r9, -0X7D40);
    // 0x803A26A4: sb          $v0, 0x44($v1)
    MEM_B(0X44, ctx->r3) = ctx->r2;
    // 0x803A26A8: lbu         $t3, 0x0($t1)
    ctx->r11 = MEM_BU(ctx->r9, 0X0);
    // 0x803A26AC: addiu       $a0, $zero, 0x8
    ctx->r4 = ADD32(0, 0X8);
    // 0x803A26B0: addu        $t4, $a3, $t3
    ctx->r12 = ADD32(ctx->r7, ctx->r11);
    // 0x803A26B4: lb          $a1, 0x44($t4)
    ctx->r5 = MEM_B(ctx->r12, 0X44);
    // 0x803A26B8: jal         0x803A2D60
    // 0x803A26BC: nop

    func_803A2D60(rdram, ctx);
        goto after_5;
    // 0x803A26BC: nop

    after_5:
L_803A26C0:
    // 0x803A26C0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_803A26C4:
    // 0x803A26C4: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x803A26C8: jr          $ra
    // 0x803A26CC: nop

    return;
    // 0x803A26CC: nop

;}
RECOMP_FUNC void func_803A26D0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803A26D0: lui         $t1, 0x803B
    ctx->r9 = S32(0X803B << 16);
    // 0x803A26D4: addiu       $t1, $t1, -0x7D40
    ctx->r9 = ADD32(ctx->r9, -0X7D40);
    // 0x803A26D8: lbu         $t0, 0x0($t1)
    ctx->r8 = MEM_BU(ctx->r9, 0X0);
    // 0x803A26DC: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x803A26E0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x803A26E4: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x803A26E8: addu        $v1, $a0, $t0
    ctx->r3 = ADD32(ctx->r4, ctx->r8);
    // 0x803A26EC: lb          $v0, 0x38($v1)
    ctx->r2 = MEM_B(ctx->r3, 0X38);
    // 0x803A26F0: or          $a3, $a0, $zero
    ctx->r7 = ctx->r4 | 0;
    // 0x803A26F4: beq         $v0, $zero, L_803A282C
    if (ctx->r2 == 0) {
        // 0x803A26F8: addiu       $at, $zero, 0x1
        ctx->r1 = ADD32(0, 0X1);
            goto L_803A282C;
    }
    // 0x803A26F8: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x803A26FC: beq         $v0, $at, L_803A2724
    if (ctx->r2 == ctx->r1) {
        // 0x803A2700: or          $a1, $zero, $zero
        ctx->r5 = 0 | 0;
            goto L_803A2724;
    }
    // 0x803A2700: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x803A2704: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x803A2708: beq         $v0, $at, L_803A2770
    if (ctx->r2 == ctx->r1) {
        // 0x803A270C: addiu       $a1, $zero, 0x1
        ctx->r5 = ADD32(0, 0X1);
            goto L_803A2770;
    }
    // 0x803A270C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x803A2710: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x803A2714: beq         $v0, $at, L_803A27C8
    if (ctx->r2 == ctx->r1) {
        // 0x803A2718: sll         $t8, $t0, 3
        ctx->r24 = S32(ctx->r8 << 3);
            goto L_803A27C8;
    }
    // 0x803A2718: sll         $t8, $t0, 3
    ctx->r24 = S32(ctx->r8 << 3);
    // 0x803A271C: b           L_803A2830
    // 0x803A2720: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_803A2830;
    // 0x803A2720: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_803A2724:
    // 0x803A2724: lb          $a0, 0x3C($v1)
    ctx->r4 = MEM_B(ctx->r3, 0X3C);
    // 0x803A2728: sw          $a3, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r7;
    // 0x803A272C: jal         0x803A2C4C
    // 0x803A2730: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    func_803A2C4C(rdram, ctx);
        goto after_0;
    // 0x803A2730: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    after_0:
    // 0x803A2734: lui         $t1, 0x803B
    ctx->r9 = S32(0X803B << 16);
    // 0x803A2738: addiu       $t1, $t1, -0x7D40
    ctx->r9 = ADD32(ctx->r9, -0X7D40);
    // 0x803A273C: lbu         $t6, 0x0($t1)
    ctx->r14 = MEM_BU(ctx->r9, 0X0);
    // 0x803A2740: lw          $a3, 0x28($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X28);
    // 0x803A2744: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x803A2748: addu        $t7, $a3, $t6
    ctx->r15 = ADD32(ctx->r7, ctx->r14);
    // 0x803A274C: sb          $v0, 0x3C($t7)
    MEM_B(0X3C, ctx->r15) = ctx->r2;
    // 0x803A2750: lbu         $t8, 0x0($t1)
    ctx->r24 = MEM_BU(ctx->r9, 0X0);
    // 0x803A2754: nop

    // 0x803A2758: addu        $t9, $a3, $t8
    ctx->r25 = ADD32(ctx->r7, ctx->r24);
    // 0x803A275C: lb          $a1, 0x3C($t9)
    ctx->r5 = MEM_B(ctx->r25, 0X3C);
    // 0x803A2760: jal         0x803A2D60
    // 0x803A2764: nop

    func_803A2D60(rdram, ctx);
        goto after_1;
    // 0x803A2764: nop

    after_1:
    // 0x803A2768: b           L_803A2830
    // 0x803A276C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_803A2830;
    // 0x803A276C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_803A2770:
    // 0x803A2770: lb          $a0, 0x40($v1)
    ctx->r4 = MEM_B(ctx->r3, 0X40);
    // 0x803A2774: sw          $a3, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r7;
    // 0x803A2778: jal         0x803A2C4C
    // 0x803A277C: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    func_803A2C4C(rdram, ctx);
        goto after_2;
    // 0x803A277C: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    after_2:
    // 0x803A2780: lui         $t1, 0x803B
    ctx->r9 = S32(0X803B << 16);
    // 0x803A2784: addiu       $t1, $t1, -0x7D40
    ctx->r9 = ADD32(ctx->r9, -0X7D40);
    // 0x803A2788: lbu         $t2, 0x0($t1)
    ctx->r10 = MEM_BU(ctx->r9, 0X0);
    // 0x803A278C: lw          $a3, 0x28($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X28);
    // 0x803A2790: addiu       $a0, $zero, 0x3
    ctx->r4 = ADD32(0, 0X3);
    // 0x803A2794: addu        $t3, $a3, $t2
    ctx->r11 = ADD32(ctx->r7, ctx->r10);
    // 0x803A2798: sb          $v0, 0x40($t3)
    MEM_B(0X40, ctx->r11) = ctx->r2;
    // 0x803A279C: lbu         $t4, 0x0($t1)
    ctx->r12 = MEM_BU(ctx->r9, 0X0);
    // 0x803A27A0: nop

    // 0x803A27A4: addu        $t5, $a3, $t4
    ctx->r13 = ADD32(ctx->r7, ctx->r12);
    // 0x803A27A8: lb          $a1, 0x40($t5)
    ctx->r5 = MEM_B(ctx->r13, 0X40);
    // 0x803A27AC: nop

    // 0x803A27B0: addiu       $a1, $a1, -0x1
    ctx->r5 = ADD32(ctx->r5, -0X1);
    // 0x803A27B4: sll         $t6, $a1, 24
    ctx->r14 = S32(ctx->r5 << 24);
    // 0x803A27B8: jal         0x803A2D60
    // 0x803A27BC: sra         $a1, $t6, 24
    ctx->r5 = S32(SIGNED(ctx->r14) >> 24);
    func_803A2D60(rdram, ctx);
        goto after_3;
    // 0x803A27BC: sra         $a1, $t6, 24
    ctx->r5 = S32(SIGNED(ctx->r14) >> 24);
    after_3:
    // 0x803A27C0: b           L_803A2830
    // 0x803A27C4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_803A2830;
    // 0x803A27C4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_803A27C8:
    // 0x803A27C8: lui         $t9, 0x8012
    ctx->r25 = S32(0X8012 << 16);
    // 0x803A27CC: lb          $t9, -0x3088($t9)
    ctx->r25 = MEM_B(ctx->r25, -0X3088);
    // 0x803A27D0: addu        $t8, $t8, $t0
    ctx->r24 = ADD32(ctx->r24, ctx->r8);
    // 0x803A27D4: lui         $v0, 0x803A
    ctx->r2 = S32(0X803A << 16);
    // 0x803A27D8: addu        $t2, $t8, $t9
    ctx->r10 = ADD32(ctx->r24, ctx->r25);
    // 0x803A27DC: addu        $v0, $v0, $t2
    ctx->r2 = ADD32(ctx->r2, ctx->r10);
    // 0x803A27E0: lbu         $v0, 0x6D14($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X6D14);
    // 0x803A27E4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x803A27E8: addu        $v1, $a3, $v0
    ctx->r3 = ADD32(ctx->r7, ctx->r2);
    // 0x803A27EC: lb          $a0, 0x44($v1)
    ctx->r4 = MEM_B(ctx->r3, 0X44);
    // 0x803A27F0: sw          $a3, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r7;
    // 0x803A27F4: sw          $v1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r3;
    // 0x803A27F8: jal         0x803A2C4C
    // 0x803A27FC: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    func_803A2C4C(rdram, ctx);
        goto after_4;
    // 0x803A27FC: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    after_4:
    // 0x803A2800: lw          $v1, 0x18($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X18);
    // 0x803A2804: lw          $a3, 0x28($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X28);
    // 0x803A2808: lui         $t1, 0x803B
    ctx->r9 = S32(0X803B << 16);
    // 0x803A280C: addiu       $t1, $t1, -0x7D40
    ctx->r9 = ADD32(ctx->r9, -0X7D40);
    // 0x803A2810: sb          $v0, 0x44($v1)
    MEM_B(0X44, ctx->r3) = ctx->r2;
    // 0x803A2814: lbu         $t3, 0x0($t1)
    ctx->r11 = MEM_BU(ctx->r9, 0X0);
    // 0x803A2818: addiu       $a0, $zero, 0x8
    ctx->r4 = ADD32(0, 0X8);
    // 0x803A281C: addu        $t4, $a3, $t3
    ctx->r12 = ADD32(ctx->r7, ctx->r11);
    // 0x803A2820: lb          $a1, 0x44($t4)
    ctx->r5 = MEM_B(ctx->r12, 0X44);
    // 0x803A2824: jal         0x803A2D60
    // 0x803A2828: nop

    func_803A2D60(rdram, ctx);
        goto after_5;
    // 0x803A2828: nop

    after_5:
L_803A282C:
    // 0x803A282C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_803A2830:
    // 0x803A2830: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x803A2834: jr          $ra
    // 0x803A2838: nop

    return;
    // 0x803A2838: nop

;}
RECOMP_FUNC void func_803A283C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803A283C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x803A2840: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x803A2844: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x803A2848: jal         0x80035734
    // 0x803A284C: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    func_80035734(rdram, ctx);
        goto after_0;
    // 0x803A284C: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    after_0:
    // 0x803A2850: lui         $t7, 0x803B
    ctx->r15 = S32(0X803B << 16);
    // 0x803A2854: lbu         $t7, -0x7D40($t7)
    ctx->r15 = MEM_BU(ctx->r15, -0X7D40);
    // 0x803A2858: lw          $t6, 0x18($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X18);
    // 0x803A285C: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x803A2860: addu        $t8, $t6, $t7
    ctx->r24 = ADD32(ctx->r14, ctx->r15);
    // 0x803A2864: lb          $v0, 0x38($t8)
    ctx->r2 = MEM_B(ctx->r24, 0X38);
    // 0x803A2868: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x803A286C: beq         $v0, $zero, L_803A289C
    if (ctx->r2 == 0) {
        // 0x803A2870: nop
    
            goto L_803A289C;
    }
    // 0x803A2870: nop

    // 0x803A2874: beq         $v0, $at, L_803A28AC
    if (ctx->r2 == ctx->r1) {
        // 0x803A2878: or          $a0, $zero, $zero
        ctx->r4 = 0 | 0;
            goto L_803A28AC;
    }
    // 0x803A2878: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x803A287C: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x803A2880: beq         $v0, $at, L_803A28BC
    if (ctx->r2 == ctx->r1) {
        // 0x803A2884: addiu       $a0, $zero, 0x3
        ctx->r4 = ADD32(0, 0X3);
            goto L_803A28BC;
    }
    // 0x803A2884: addiu       $a0, $zero, 0x3
    ctx->r4 = ADD32(0, 0X3);
    // 0x803A2888: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x803A288C: beq         $v0, $at, L_803A28CC
    if (ctx->r2 == ctx->r1) {
        // 0x803A2890: addiu       $a0, $zero, 0x6
        ctx->r4 = ADD32(0, 0X6);
            goto L_803A28CC;
    }
    // 0x803A2890: addiu       $a0, $zero, 0x6
    ctx->r4 = ADD32(0, 0X6);
    // 0x803A2894: b           L_803A28D8
    // 0x803A2898: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_803A28D8;
    // 0x803A2898: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_803A289C:
    // 0x803A289C: jal         0x803A2CA0
    // 0x803A28A0: addiu       $a1, $zero, 0x1F
    ctx->r5 = ADD32(0, 0X1F);
    func_803A2CA0(rdram, ctx);
        goto after_1;
    // 0x803A28A0: addiu       $a1, $zero, 0x1F
    ctx->r5 = ADD32(0, 0X1F);
    after_1:
    // 0x803A28A4: b           L_803A28D8
    // 0x803A28A8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_803A28D8;
    // 0x803A28A8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_803A28AC:
    // 0x803A28AC: jal         0x803A2CA0
    // 0x803A28B0: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    func_803A2CA0(rdram, ctx);
        goto after_2;
    // 0x803A28B0: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_2:
    // 0x803A28B4: b           L_803A28D8
    // 0x803A28B8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_803A28D8;
    // 0x803A28B8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_803A28BC:
    // 0x803A28BC: jal         0x803A2CA0
    // 0x803A28C0: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    func_803A2CA0(rdram, ctx);
        goto after_3;
    // 0x803A28C0: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    after_3:
    // 0x803A28C4: b           L_803A28D8
    // 0x803A28C8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_803A28D8;
    // 0x803A28C8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_803A28CC:
    // 0x803A28CC: jal         0x803A2CA0
    // 0x803A28D0: addiu       $a1, $zero, 0xB
    ctx->r5 = ADD32(0, 0XB);
    func_803A2CA0(rdram, ctx);
        goto after_4;
    // 0x803A28D0: addiu       $a1, $zero, 0xB
    ctx->r5 = ADD32(0, 0XB);
    after_4:
    // 0x803A28D4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_803A28D8:
    // 0x803A28D8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x803A28DC: jr          $ra
    // 0x803A28E0: nop

    return;
    // 0x803A28E0: nop

;}
RECOMP_FUNC void func_803A28E4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803A28E4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x803A28E8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x803A28EC: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x803A28F0: jal         0x80035734
    // 0x803A28F4: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    func_80035734(rdram, ctx);
        goto after_0;
    // 0x803A28F4: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    after_0:
    // 0x803A28F8: lui         $t7, 0x803B
    ctx->r15 = S32(0X803B << 16);
    // 0x803A28FC: lbu         $t7, -0x7D40($t7)
    ctx->r15 = MEM_BU(ctx->r15, -0X7D40);
    // 0x803A2900: lw          $t6, 0x18($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X18);
    // 0x803A2904: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x803A2908: addu        $t8, $t6, $t7
    ctx->r24 = ADD32(ctx->r14, ctx->r15);
    // 0x803A290C: lb          $v0, 0x38($t8)
    ctx->r2 = MEM_B(ctx->r24, 0X38);
    // 0x803A2910: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x803A2914: beq         $v0, $zero, L_803A2944
    if (ctx->r2 == 0) {
        // 0x803A2918: nop
    
            goto L_803A2944;
    }
    // 0x803A2918: nop

    // 0x803A291C: beq         $v0, $at, L_803A2954
    if (ctx->r2 == ctx->r1) {
        // 0x803A2920: or          $a0, $zero, $zero
        ctx->r4 = 0 | 0;
            goto L_803A2954;
    }
    // 0x803A2920: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x803A2924: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x803A2928: beq         $v0, $at, L_803A2964
    if (ctx->r2 == ctx->r1) {
        // 0x803A292C: addiu       $a0, $zero, 0x3
        ctx->r4 = ADD32(0, 0X3);
            goto L_803A2964;
    }
    // 0x803A292C: addiu       $a0, $zero, 0x3
    ctx->r4 = ADD32(0, 0X3);
    // 0x803A2930: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x803A2934: beq         $v0, $at, L_803A2974
    if (ctx->r2 == ctx->r1) {
        // 0x803A2938: addiu       $a0, $zero, 0x6
        ctx->r4 = ADD32(0, 0X6);
            goto L_803A2974;
    }
    // 0x803A2938: addiu       $a0, $zero, 0x6
    ctx->r4 = ADD32(0, 0X6);
    // 0x803A293C: b           L_803A2980
    // 0x803A2940: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_803A2980;
    // 0x803A2940: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_803A2944:
    // 0x803A2944: jal         0x803A2D00
    // 0x803A2948: addiu       $a1, $zero, 0x1F
    ctx->r5 = ADD32(0, 0X1F);
    func_803A2D00(rdram, ctx);
        goto after_1;
    // 0x803A2948: addiu       $a1, $zero, 0x1F
    ctx->r5 = ADD32(0, 0X1F);
    after_1:
    // 0x803A294C: b           L_803A2980
    // 0x803A2950: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_803A2980;
    // 0x803A2950: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_803A2954:
    // 0x803A2954: jal         0x803A2D00
    // 0x803A2958: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    func_803A2D00(rdram, ctx);
        goto after_2;
    // 0x803A2958: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_2:
    // 0x803A295C: b           L_803A2980
    // 0x803A2960: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_803A2980;
    // 0x803A2960: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_803A2964:
    // 0x803A2964: jal         0x803A2D00
    // 0x803A2968: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    func_803A2D00(rdram, ctx);
        goto after_3;
    // 0x803A2968: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    after_3:
    // 0x803A296C: b           L_803A2980
    // 0x803A2970: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_803A2980;
    // 0x803A2970: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_803A2974:
    // 0x803A2974: jal         0x803A2D00
    // 0x803A2978: addiu       $a1, $zero, 0xB
    ctx->r5 = ADD32(0, 0XB);
    func_803A2D00(rdram, ctx);
        goto after_4;
    // 0x803A2978: addiu       $a1, $zero, 0xB
    ctx->r5 = ADD32(0, 0XB);
    after_4:
    // 0x803A297C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_803A2980:
    // 0x803A2980: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x803A2984: jr          $ra
    // 0x803A2988: nop

    return;
    // 0x803A2988: nop

;}
RECOMP_FUNC void func_803A298C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803A298C: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x803A2990: jr          $ra
    // 0x803A2994: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    return;
    // 0x803A2994: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
;}
RECOMP_FUNC void func_803A2998(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803A2998: lui         $t6, 0x8012
    ctx->r14 = S32(0X8012 << 16);
    // 0x803A299C: lbu         $t6, -0x3088($t6)
    ctx->r14 = MEM_BU(ctx->r14, -0X3088);
    // 0x803A29A0: nop

    // 0x803A29A4: sltiu       $at, $t6, 0x9
    ctx->r1 = ctx->r14 < 0X9 ? 1 : 0;
    // 0x803A29A8: beq         $at, $zero, L_803A2A2C
    if (ctx->r1 == 0) {
        // 0x803A29AC: sll         $t6, $t6, 2
        ctx->r14 = S32(ctx->r14 << 2);
            goto L_803A2A2C;
    }
    // 0x803A29AC: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x803A29B0: lui         $at, 0x803A
    ctx->r1 = S32(0X803A << 16);
    // 0x803A29B4: addu        $at, $at, $t6
    gpr jr_addend_803A29C0 = ctx->r14;
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x803A29B8: lw          $t6, 0x6F24($at)
    ctx->r14 = ADD32(ctx->r1, 0X6F24);
    // 0x803A29BC: nop

    // 0x803A29C0: jr          $t6
    // 0x803A29C4: nop

    switch (jr_addend_803A29C0 >> 2) {
        case 0: goto L_803A29C8; break;
        case 1: goto L_803A29E8; break;
        case 2: goto L_803A2A08; break;
        case 3: goto L_803A2A2C; break;
        case 4: goto L_803A29E8; break;
        case 5: goto L_803A2A08; break;
        case 6: goto L_803A2A2C; break;
        case 7: goto L_803A2A2C; break;
        case 8: goto L_803A29C8; break;
        default: switch_error(__func__, 0x803A29C0, 0x803A6F24);
    }
    // 0x803A29C4: nop

L_803A29C8:
    // 0x803A29C8: lui         $a0, 0x801B
    ctx->r4 = S32(0X801B << 16);
    // 0x803A29CC: addiu       $a0, $a0, 0x1CF0
    ctx->r4 = ADD32(ctx->r4, 0X1CF0);
    // 0x803A29D0: lw          $t8, 0x0($a0)
    ctx->r24 = MEM_W(ctx->r4, 0X0);
    // 0x803A29D4: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x803A29D8: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x803A29DC: lui         $at, 0x8011
    ctx->r1 = S32(0X8011 << 16);
    // 0x803A29E0: sb          $t7, 0x49($t8)
    MEM_B(0X49, ctx->r24) = ctx->r15;
    // 0x803A29E4: sb          $t9, -0x304E($at)
    MEM_B(-0X304E, ctx->r1) = ctx->r25;
L_803A29E8:
    // 0x803A29E8: lui         $a0, 0x801B
    ctx->r4 = S32(0X801B << 16);
    // 0x803A29EC: addiu       $a0, $a0, 0x1CF0
    ctx->r4 = ADD32(ctx->r4, 0X1CF0);
    // 0x803A29F0: lw          $t1, 0x0($a0)
    ctx->r9 = MEM_W(ctx->r4, 0X0);
    // 0x803A29F4: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x803A29F8: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x803A29FC: lui         $at, 0x8011
    ctx->r1 = S32(0X8011 << 16);
    // 0x803A2A00: sb          $t0, 0x4A($t1)
    MEM_B(0X4A, ctx->r9) = ctx->r8;
    // 0x803A2A04: sb          $t2, -0x3036($at)
    MEM_B(-0X3036, ctx->r1) = ctx->r10;
L_803A2A08:
    // 0x803A2A08: lui         $a0, 0x801B
    ctx->r4 = S32(0X801B << 16);
    // 0x803A2A0C: addiu       $a0, $a0, 0x1CF0
    ctx->r4 = ADD32(ctx->r4, 0X1CF0);
    // 0x803A2A10: lw          $t4, 0x0($a0)
    ctx->r12 = MEM_W(ctx->r4, 0X0);
    // 0x803A2A14: addiu       $t3, $zero, 0x1
    ctx->r11 = ADD32(0, 0X1);
    // 0x803A2A18: addiu       $t5, $zero, 0x1
    ctx->r13 = ADD32(0, 0X1);
    // 0x803A2A1C: lui         $at, 0x8011
    ctx->r1 = S32(0X8011 << 16);
    // 0x803A2A20: sb          $t3, 0x4B($t4)
    MEM_B(0X4B, ctx->r12) = ctx->r11;
    // 0x803A2A24: b           L_803A2A34
    // 0x803A2A28: sb          $t5, -0x301E($at)
    MEM_B(-0X301E, ctx->r1) = ctx->r13;
        goto L_803A2A34;
    // 0x803A2A28: sb          $t5, -0x301E($at)
    MEM_B(-0X301E, ctx->r1) = ctx->r13;
L_803A2A2C:
    // 0x803A2A2C: lui         $a0, 0x801B
    ctx->r4 = S32(0X801B << 16);
    // 0x803A2A30: addiu       $a0, $a0, 0x1CF0
    ctx->r4 = ADD32(ctx->r4, 0X1CF0);
L_803A2A34:
    // 0x803A2A34: lui         $v1, 0x8012
    ctx->r3 = S32(0X8012 << 16);
    // 0x803A2A38: addiu       $v1, $v1, -0x2CF0
    ctx->r3 = ADD32(ctx->r3, -0X2CF0);
    // 0x803A2A3C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x803A2A40: addiu       $a1, $zero, 0xA94
    ctx->r5 = ADD32(0, 0XA94);
L_803A2A44:
    // 0x803A2A44: multu       $v0, $a1
    result = U64(U32(ctx->r2)) * U64(U32(ctx->r5)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x803A2A48: lw          $t9, 0x0($a0)
    ctx->r25 = MEM_W(ctx->r4, 0X0);
    // 0x803A2A4C: nop

    // 0x803A2A50: addu        $t0, $t9, $v0
    ctx->r8 = ADD32(ctx->r25, ctx->r2);
    // 0x803A2A54: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x803A2A58: andi        $t1, $v0, 0xFF
    ctx->r9 = ctx->r2 & 0XFF;
    // 0x803A2A5C: slti        $at, $t1, 0x2
    ctx->r1 = SIGNED(ctx->r9) < 0X2 ? 1 : 0;
    // 0x803A2A60: or          $v0, $t1, $zero
    ctx->r2 = ctx->r9 | 0;
    // 0x803A2A64: mflo        $t6
    ctx->r14 = lo;
    // 0x803A2A68: addu        $t7, $v1, $t6
    ctx->r15 = ADD32(ctx->r3, ctx->r14);
    // 0x803A2A6C: lbu         $t8, 0x868($t7)
    ctx->r24 = MEM_BU(ctx->r15, 0X868);
    // 0x803A2A70: bne         $at, $zero, L_803A2A44
    if (ctx->r1 != 0) {
        // 0x803A2A74: sb          $t8, 0x44($t0)
        MEM_B(0X44, ctx->r8) = ctx->r24;
            goto L_803A2A44;
    }
    // 0x803A2A74: sb          $t8, 0x44($t0)
    MEM_B(0X44, ctx->r8) = ctx->r24;
    // 0x803A2A78: lw          $t2, 0x0($a0)
    ctx->r10 = MEM_W(ctx->r4, 0X0);
    // 0x803A2A7C: lui         $a1, 0x8012
    ctx->r5 = S32(0X8012 << 16);
    // 0x803A2A80: addiu       $a1, $a1, -0x32B0
    ctx->r5 = ADD32(ctx->r5, -0X32B0);
    // 0x803A2A84: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x803A2A88: sb          $zero, 0x46($t2)
    MEM_B(0X46, ctx->r10) = 0;
L_803A2A8C:
    // 0x803A2A8C: lw          $t4, 0x0($a0)
    ctx->r12 = MEM_W(ctx->r4, 0X0);
    // 0x803A2A90: addu        $v1, $a1, $v0
    ctx->r3 = ADD32(ctx->r5, ctx->r2);
    // 0x803A2A94: lbu         $t3, 0x48($v1)
    ctx->r11 = MEM_BU(ctx->r3, 0X48);
    // 0x803A2A98: addu        $t5, $t4, $v0
    ctx->r13 = ADD32(ctx->r12, ctx->r2);
    // 0x803A2A9C: sb          $t3, 0x3C($t5)
    MEM_B(0X3C, ctx->r13) = ctx->r11;
    // 0x803A2AA0: lw          $t7, 0x0($a0)
    ctx->r15 = MEM_W(ctx->r4, 0X0);
    // 0x803A2AA4: lbu         $t6, 0x4E($v1)
    ctx->r14 = MEM_BU(ctx->r3, 0X4E);
    // 0x803A2AA8: addu        $t9, $t7, $v0
    ctx->r25 = ADD32(ctx->r15, ctx->r2);
    // 0x803A2AAC: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x803A2AB0: andi        $t8, $v0, 0xFF
    ctx->r24 = ctx->r2 & 0XFF;
    // 0x803A2AB4: slti        $at, $t8, 0x4
    ctx->r1 = SIGNED(ctx->r24) < 0X4 ? 1 : 0;
    // 0x803A2AB8: or          $v0, $t8, $zero
    ctx->r2 = ctx->r24 | 0;
    // 0x803A2ABC: bne         $at, $zero, L_803A2A8C
    if (ctx->r1 != 0) {
        // 0x803A2AC0: sb          $t6, 0x40($t9)
        MEM_B(0X40, ctx->r25) = ctx->r14;
            goto L_803A2A8C;
    }
    // 0x803A2AC0: sb          $t6, 0x40($t9)
    MEM_B(0X40, ctx->r25) = ctx->r14;
    // 0x803A2AC4: jr          $ra
    // 0x803A2AC8: nop

    return;
    // 0x803A2AC8: nop

;}
RECOMP_FUNC void func_803A2ACC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803A2ACC: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x803A2AD0: sw          $s4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r20;
    // 0x803A2AD4: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x803A2AD8: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x803A2ADC: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x803A2AE0: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x803A2AE4: lui         $s1, 0x801B
    ctx->r17 = S32(0X801B << 16);
    // 0x803A2AE8: lui         $s2, 0x800B
    ctx->r18 = S32(0X800B << 16);
    // 0x803A2AEC: lui         $s4, 0x8012
    ctx->r20 = S32(0X8012 << 16);
    // 0x803A2AF0: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x803A2AF4: addiu       $s4, $s4, -0x32B0
    ctx->r20 = ADD32(ctx->r20, -0X32B0);
    // 0x803A2AF8: addiu       $s2, $s2, -0x11C8
    ctx->r18 = ADD32(ctx->r18, -0X11C8);
    // 0x803A2AFC: addiu       $s1, $s1, 0x1CF0
    ctx->r17 = ADD32(ctx->r17, 0X1CF0);
    // 0x803A2B00: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x803A2B04: addiu       $s3, $zero, 0xC
    ctx->r19 = ADD32(0, 0XC);
L_803A2B08:
    // 0x803A2B08: lw          $t6, 0x0($s1)
    ctx->r14 = MEM_W(ctx->r17, 0X0);
    // 0x803A2B0C: andi        $a0, $s0, 0xFF
    ctx->r4 = ctx->r16 & 0XFF;
    // 0x803A2B10: addu        $t7, $t6, $s0
    ctx->r15 = ADD32(ctx->r14, ctx->r16);
    // 0x803A2B14: lb          $t8, 0x3C($t7)
    ctx->r24 = MEM_B(ctx->r15, 0X3C);
    // 0x803A2B18: nop

    // 0x803A2B1C: multu       $t8, $s3
    result = U64(U32(ctx->r24)) * U64(U32(ctx->r19)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x803A2B20: mflo        $t9
    ctx->r25 = lo;
    // 0x803A2B24: addu        $a1, $s2, $t9
    ctx->r5 = ADD32(ctx->r18, ctx->r25);
    // 0x803A2B28: jal         0x8006F748
    // 0x803A2B2C: nop

    func_8006F748(rdram, ctx);
        goto after_0;
    // 0x803A2B2C: nop

    after_0:
    // 0x803A2B30: lw          $t0, 0x0($s1)
    ctx->r8 = MEM_W(ctx->r17, 0X0);
    // 0x803A2B34: addu        $t2, $s4, $s0
    ctx->r10 = ADD32(ctx->r20, ctx->r16);
    // 0x803A2B38: addu        $v0, $t0, $s0
    ctx->r2 = ADD32(ctx->r8, ctx->r16);
    // 0x803A2B3C: lb          $t1, 0x3C($v0)
    ctx->r9 = MEM_B(ctx->r2, 0X3C);
    // 0x803A2B40: andi        $a0, $s0, 0xFF
    ctx->r4 = ctx->r16 & 0XFF;
    // 0x803A2B44: sb          $t1, 0x48($t2)
    MEM_B(0X48, ctx->r10) = ctx->r9;
    // 0x803A2B48: lbu         $a1, 0x40($v0)
    ctx->r5 = MEM_BU(ctx->r2, 0X40);
    // 0x803A2B4C: jal         0x803A2B90
    // 0x803A2B50: nop

    func_803A2B90(rdram, ctx);
        goto after_1;
    // 0x803A2B50: nop

    after_1:
    // 0x803A2B54: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x803A2B58: andi        $t3, $s0, 0xFF
    ctx->r11 = ctx->r16 & 0XFF;
    // 0x803A2B5C: slti        $at, $t3, 0x4
    ctx->r1 = SIGNED(ctx->r11) < 0X4 ? 1 : 0;
    // 0x803A2B60: bne         $at, $zero, L_803A2B08
    if (ctx->r1 != 0) {
        // 0x803A2B64: or          $s0, $t3, $zero
        ctx->r16 = ctx->r11 | 0;
            goto L_803A2B08;
    }
    // 0x803A2B64: or          $s0, $t3, $zero
    ctx->r16 = ctx->r11 | 0;
    // 0x803A2B68: jal         0x803A2BAC
    // 0x803A2B6C: nop

    func_803A2BAC(rdram, ctx);
        goto after_2;
    // 0x803A2B6C: nop

    after_2:
    // 0x803A2B70: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x803A2B74: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x803A2B78: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x803A2B7C: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x803A2B80: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x803A2B84: lw          $s4, 0x28($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X28);
    // 0x803A2B88: jr          $ra
    // 0x803A2B8C: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x803A2B8C: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_803A2B90(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803A2B90: andi        $t6, $a0, 0xFF
    ctx->r14 = ctx->r4 & 0XFF;
    // 0x803A2B94: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x803A2B98: addu        $at, $at, $t6
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x803A2B9C: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x803A2BA0: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    // 0x803A2BA4: jr          $ra
    // 0x803A2BA8: sb          $a1, -0x3262($at)
    MEM_B(-0X3262, ctx->r1) = ctx->r5;
    return;
    // 0x803A2BA8: sb          $a1, -0x3262($at)
    MEM_B(-0X3262, ctx->r1) = ctx->r5;
;}
RECOMP_FUNC void func_803A2BAC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803A2BAC: lui         $v1, 0x801B
    ctx->r3 = S32(0X801B << 16);
    // 0x803A2BB0: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x803A2BB4: lw          $v1, 0x1CF0($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X1CF0);
    // 0x803A2BB8: addiu       $a0, $a0, -0x2CF0
    ctx->r4 = ADD32(ctx->r4, -0X2CF0);
    // 0x803A2BBC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x803A2BC0: addiu       $a1, $zero, 0xA94
    ctx->r5 = ADD32(0, 0XA94);
L_803A2BC4:
    // 0x803A2BC4: multu       $v0, $a1
    result = U64(U32(ctx->r2)) * U64(U32(ctx->r5)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x803A2BC8: addu        $t6, $v1, $v0
    ctx->r14 = ADD32(ctx->r3, ctx->r2);
    // 0x803A2BCC: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x803A2BD0: lb          $t7, 0x44($t6)
    ctx->r15 = MEM_B(ctx->r14, 0X44);
    // 0x803A2BD4: andi        $t0, $v0, 0xFF
    ctx->r8 = ctx->r2 & 0XFF;
    // 0x803A2BD8: slti        $at, $t0, 0x2
    ctx->r1 = SIGNED(ctx->r8) < 0X2 ? 1 : 0;
    // 0x803A2BDC: or          $v0, $t0, $zero
    ctx->r2 = ctx->r8 | 0;
    // 0x803A2BE0: mflo        $t8
    ctx->r24 = lo;
    // 0x803A2BE4: addu        $t9, $a0, $t8
    ctx->r25 = ADD32(ctx->r4, ctx->r24);
    // 0x803A2BE8: bne         $at, $zero, L_803A2BC4
    if (ctx->r1 != 0) {
        // 0x803A2BEC: sb          $t7, 0x868($t9)
        MEM_B(0X868, ctx->r25) = ctx->r15;
            goto L_803A2BC4;
    }
    // 0x803A2BEC: sb          $t7, 0x868($t9)
    MEM_B(0X868, ctx->r25) = ctx->r15;
    // 0x803A2BF0: jr          $ra
    // 0x803A2BF4: nop

    return;
    // 0x803A2BF4: nop

;}
RECOMP_FUNC void func_803A2BF8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803A2BF8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x803A2BFC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x803A2C00: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x803A2C04: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x803A2C08: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    // 0x803A2C0C: jal         0x80035734
    // 0x803A2C10: sb          $a0, 0x1B($sp)
    MEM_B(0X1B, ctx->r29) = ctx->r4;
    func_80035734(rdram, ctx);
        goto after_0;
    // 0x803A2C10: sb          $a0, 0x1B($sp)
    MEM_B(0X1B, ctx->r29) = ctx->r4;
    after_0:
    // 0x803A2C14: lb          $a0, 0x1B($sp)
    ctx->r4 = MEM_B(ctx->r29, 0X1B);
    // 0x803A2C18: lb          $t8, 0x1F($sp)
    ctx->r24 = MEM_B(ctx->r29, 0X1F);
    // 0x803A2C1C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x803A2C20: bne         $t8, $a0, L_803A2C38
    if (ctx->r24 != ctx->r4) {
        // 0x803A2C24: addiu       $a0, $a0, -0x1
        ctx->r4 = ADD32(ctx->r4, -0X1);
            goto L_803A2C38;
    }
    // 0x803A2C24: addiu       $a0, $a0, -0x1
    ctx->r4 = ADD32(ctx->r4, -0X1);
    // 0x803A2C28: lb          $a0, 0x23($sp)
    ctx->r4 = MEM_B(ctx->r29, 0X23);
    // 0x803A2C2C: b           L_803A2C44
    // 0x803A2C30: or          $v0, $a0, $zero
    ctx->r2 = ctx->r4 | 0;
        goto L_803A2C44;
    // 0x803A2C30: or          $v0, $a0, $zero
    ctx->r2 = ctx->r4 | 0;
    // 0x803A2C34: addiu       $a0, $a0, -0x1
    ctx->r4 = ADD32(ctx->r4, -0X1);
L_803A2C38:
    // 0x803A2C38: sll         $t9, $a0, 24
    ctx->r25 = S32(ctx->r4 << 24);
    // 0x803A2C3C: sra         $a0, $t9, 24
    ctx->r4 = S32(SIGNED(ctx->r25) >> 24);
    // 0x803A2C40: or          $v0, $a0, $zero
    ctx->r2 = ctx->r4 | 0;
L_803A2C44:
    // 0x803A2C44: jr          $ra
    // 0x803A2C48: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x803A2C48: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_803A2C4C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803A2C4C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x803A2C50: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x803A2C54: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x803A2C58: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x803A2C5C: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    // 0x803A2C60: jal         0x80035734
    // 0x803A2C64: sb          $a0, 0x1B($sp)
    MEM_B(0X1B, ctx->r29) = ctx->r4;
    func_80035734(rdram, ctx);
        goto after_0;
    // 0x803A2C64: sb          $a0, 0x1B($sp)
    MEM_B(0X1B, ctx->r29) = ctx->r4;
    after_0:
    // 0x803A2C68: lb          $a0, 0x1B($sp)
    ctx->r4 = MEM_B(ctx->r29, 0X1B);
    // 0x803A2C6C: lb          $t8, 0x23($sp)
    ctx->r24 = MEM_B(ctx->r29, 0X23);
    // 0x803A2C70: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x803A2C74: bne         $t8, $a0, L_803A2C8C
    if (ctx->r24 != ctx->r4) {
        // 0x803A2C78: addiu       $a0, $a0, 0x1
        ctx->r4 = ADD32(ctx->r4, 0X1);
            goto L_803A2C8C;
    }
    // 0x803A2C78: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    // 0x803A2C7C: lb          $a0, 0x1F($sp)
    ctx->r4 = MEM_B(ctx->r29, 0X1F);
    // 0x803A2C80: b           L_803A2C98
    // 0x803A2C84: or          $v0, $a0, $zero
    ctx->r2 = ctx->r4 | 0;
        goto L_803A2C98;
    // 0x803A2C84: or          $v0, $a0, $zero
    ctx->r2 = ctx->r4 | 0;
    // 0x803A2C88: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
L_803A2C8C:
    // 0x803A2C8C: sll         $t9, $a0, 24
    ctx->r25 = S32(ctx->r4 << 24);
    // 0x803A2C90: sra         $a0, $t9, 24
    ctx->r4 = S32(SIGNED(ctx->r25) >> 24);
    // 0x803A2C94: or          $v0, $a0, $zero
    ctx->r2 = ctx->r4 | 0;
L_803A2C98:
    // 0x803A2C98: jr          $ra
    // 0x803A2C9C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x803A2C9C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_803A2CA0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803A2CA0: lui         $v0, 0x801B
    ctx->r2 = S32(0X801B << 16);
    // 0x803A2CA4: lw          $v0, 0x1CF0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X1CF0);
    // 0x803A2CA8: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x803A2CAC: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    // 0x803A2CB0: lb          $v1, 0x4C($v0)
    ctx->r3 = MEM_B(ctx->r2, 0X4C);
    // 0x803A2CB4: sll         $t6, $a0, 24
    ctx->r14 = S32(ctx->r4 << 24);
    // 0x803A2CB8: sra         $a0, $t6, 24
    ctx->r4 = S32(SIGNED(ctx->r14) >> 24);
    // 0x803A2CBC: sll         $t8, $a1, 24
    ctx->r24 = S32(ctx->r5 << 24);
    // 0x803A2CC0: sra         $t9, $t8, 24
    ctx->r25 = S32(SIGNED(ctx->r24) >> 24);
    // 0x803A2CC4: slt         $at, $a0, $v1
    ctx->r1 = SIGNED(ctx->r4) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x803A2CC8: beq         $at, $zero, L_803A2CE4
    if (ctx->r1 == 0) {
        // 0x803A2CCC: or          $a1, $t9, $zero
        ctx->r5 = ctx->r25 | 0;
            goto L_803A2CE4;
    }
    // 0x803A2CCC: or          $a1, $t9, $zero
    ctx->r5 = ctx->r25 | 0;
    // 0x803A2CD0: slt         $at, $t9, $v1
    ctx->r1 = SIGNED(ctx->r25) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x803A2CD4: bne         $at, $zero, L_803A2CE4
    if (ctx->r1 != 0) {
        // 0x803A2CD8: addiu       $t0, $v1, -0x1
        ctx->r8 = ADD32(ctx->r3, -0X1);
            goto L_803A2CE4;
    }
    // 0x803A2CD8: addiu       $t0, $v1, -0x1
    ctx->r8 = ADD32(ctx->r3, -0X1);
    // 0x803A2CDC: jr          $ra
    // 0x803A2CE0: sb          $t0, 0x4C($v0)
    MEM_B(0X4C, ctx->r2) = ctx->r8;
    return;
    // 0x803A2CE0: sb          $t0, 0x4C($v0)
    MEM_B(0X4C, ctx->r2) = ctx->r8;
L_803A2CE4:
    // 0x803A2CE4: bne         $a0, $v1, L_803A2CF4
    if (ctx->r4 != ctx->r3) {
        // 0x803A2CE8: nop
    
            goto L_803A2CF4;
    }
    // 0x803A2CE8: nop

    // 0x803A2CEC: jr          $ra
    // 0x803A2CF0: sb          $a1, 0x4C($v0)
    MEM_B(0X4C, ctx->r2) = ctx->r5;
    return;
    // 0x803A2CF0: sb          $a1, 0x4C($v0)
    MEM_B(0X4C, ctx->r2) = ctx->r5;
L_803A2CF4:
    // 0x803A2CF4: sb          $a0, 0x4C($v0)
    MEM_B(0X4C, ctx->r2) = ctx->r4;
    // 0x803A2CF8: jr          $ra
    // 0x803A2CFC: nop

    return;
    // 0x803A2CFC: nop

;}
RECOMP_FUNC void func_803A2D00(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803A2D00: lui         $v0, 0x801B
    ctx->r2 = S32(0X801B << 16);
    // 0x803A2D04: lw          $v0, 0x1CF0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X1CF0);
    // 0x803A2D08: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x803A2D0C: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    // 0x803A2D10: lb          $v1, 0x4C($v0)
    ctx->r3 = MEM_B(ctx->r2, 0X4C);
    // 0x803A2D14: sll         $t6, $a0, 24
    ctx->r14 = S32(ctx->r4 << 24);
    // 0x803A2D18: sra         $a0, $t6, 24
    ctx->r4 = S32(SIGNED(ctx->r14) >> 24);
    // 0x803A2D1C: sll         $t8, $a1, 24
    ctx->r24 = S32(ctx->r5 << 24);
    // 0x803A2D20: sra         $t9, $t8, 24
    ctx->r25 = S32(SIGNED(ctx->r24) >> 24);
    // 0x803A2D24: slt         $at, $v1, $a0
    ctx->r1 = SIGNED(ctx->r3) < SIGNED(ctx->r4) ? 1 : 0;
    // 0x803A2D28: bne         $at, $zero, L_803A2D44
    if (ctx->r1 != 0) {
        // 0x803A2D2C: or          $a1, $t9, $zero
        ctx->r5 = ctx->r25 | 0;
            goto L_803A2D44;
    }
    // 0x803A2D2C: or          $a1, $t9, $zero
    ctx->r5 = ctx->r25 | 0;
    // 0x803A2D30: slt         $at, $v1, $t9
    ctx->r1 = SIGNED(ctx->r3) < SIGNED(ctx->r25) ? 1 : 0;
    // 0x803A2D34: beq         $at, $zero, L_803A2D44
    if (ctx->r1 == 0) {
        // 0x803A2D38: addiu       $t0, $v1, 0x1
        ctx->r8 = ADD32(ctx->r3, 0X1);
            goto L_803A2D44;
    }
    // 0x803A2D38: addiu       $t0, $v1, 0x1
    ctx->r8 = ADD32(ctx->r3, 0X1);
    // 0x803A2D3C: jr          $ra
    // 0x803A2D40: sb          $t0, 0x4C($v0)
    MEM_B(0X4C, ctx->r2) = ctx->r8;
    return;
    // 0x803A2D40: sb          $t0, 0x4C($v0)
    MEM_B(0X4C, ctx->r2) = ctx->r8;
L_803A2D44:
    // 0x803A2D44: bne         $a1, $v1, L_803A2D54
    if (ctx->r5 != ctx->r3) {
        // 0x803A2D48: nop
    
            goto L_803A2D54;
    }
    // 0x803A2D48: nop

    // 0x803A2D4C: jr          $ra
    // 0x803A2D50: sb          $a0, 0x4C($v0)
    MEM_B(0X4C, ctx->r2) = ctx->r4;
    return;
    // 0x803A2D50: sb          $a0, 0x4C($v0)
    MEM_B(0X4C, ctx->r2) = ctx->r4;
L_803A2D54:
    // 0x803A2D54: sb          $a1, 0x4C($v0)
    MEM_B(0X4C, ctx->r2) = ctx->r5;
    // 0x803A2D58: jr          $ra
    // 0x803A2D5C: nop

    return;
    // 0x803A2D5C: nop

;}
RECOMP_FUNC void func_803A2D60(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803A2D60: lui         $t0, 0x8012
    ctx->r8 = S32(0X8012 << 16);
    // 0x803A2D64: lb          $t0, -0x3088($t0)
    ctx->r8 = MEM_B(ctx->r8, -0X3088);
    // 0x803A2D68: sll         $t8, $a1, 24
    ctx->r24 = S32(ctx->r5 << 24);
    // 0x803A2D6C: sra         $t9, $t8, 24
    ctx->r25 = S32(SIGNED(ctx->r24) >> 24);
    // 0x803A2D70: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x803A2D74: sll         $t6, $a0, 24
    ctx->r14 = S32(ctx->r4 << 24);
    // 0x803A2D78: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    // 0x803A2D7C: or          $a1, $t9, $zero
    ctx->r5 = ctx->r25 | 0;
    // 0x803A2D80: bne         $t0, $zero, L_803A2DD8
    if (ctx->r8 != 0) {
        // 0x803A2D84: sra         $a0, $t6, 24
        ctx->r4 = S32(SIGNED(ctx->r14) >> 24);
            goto L_803A2DD8;
    }
    // 0x803A2D84: sra         $a0, $t6, 24
    ctx->r4 = S32(SIGNED(ctx->r14) >> 24);
    // 0x803A2D88: lui         $v0, 0x801B
    ctx->r2 = S32(0X801B << 16);
    // 0x803A2D8C: lw          $v0, 0x1CF0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X1CF0);
    // 0x803A2D90: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x803A2D94: lb          $t1, 0x38($v0)
    ctx->r9 = MEM_B(ctx->r2, 0X38);
    // 0x803A2D98: addu        $t5, $a0, $a1
    ctx->r13 = ADD32(ctx->r4, ctx->r5);
    // 0x803A2D9C: bne         $t1, $at, L_803A2DD4
    if (ctx->r9 != ctx->r1) {
        // 0x803A2DA0: nop
    
            goto L_803A2DD4;
    }
    // 0x803A2DA0: nop

    // 0x803A2DA4: bne         $t9, $zero, L_803A2DB8
    if (ctx->r25 != 0) {
        // 0x803A2DA8: addiu       $at, $zero, 0x2
        ctx->r1 = ADD32(0, 0X2);
            goto L_803A2DB8;
    }
    // 0x803A2DA8: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x803A2DAC: addiu       $t2, $zero, 0x8
    ctx->r10 = ADD32(0, 0X8);
    // 0x803A2DB0: jr          $ra
    // 0x803A2DB4: sb          $t2, 0x4C($v0)
    MEM_B(0X4C, ctx->r2) = ctx->r10;
    return;
    // 0x803A2DB4: sb          $t2, 0x4C($v0)
    MEM_B(0X4C, ctx->r2) = ctx->r10;
L_803A2DB8:
    // 0x803A2DB8: bne         $a1, $at, L_803A2DCC
    if (ctx->r5 != ctx->r1) {
        // 0x803A2DBC: addiu       $t4, $zero, 0x9
        ctx->r12 = ADD32(0, 0X9);
            goto L_803A2DCC;
    }
    // 0x803A2DBC: addiu       $t4, $zero, 0x9
    ctx->r12 = ADD32(0, 0X9);
    // 0x803A2DC0: addiu       $t3, $zero, 0xB
    ctx->r11 = ADD32(0, 0XB);
    // 0x803A2DC4: jr          $ra
    // 0x803A2DC8: sb          $t3, 0x4C($v0)
    MEM_B(0X4C, ctx->r2) = ctx->r11;
    return;
    // 0x803A2DC8: sb          $t3, 0x4C($v0)
    MEM_B(0X4C, ctx->r2) = ctx->r11;
L_803A2DCC:
    // 0x803A2DCC: jr          $ra
    // 0x803A2DD0: sb          $t4, 0x4C($v0)
    MEM_B(0X4C, ctx->r2) = ctx->r12;
    return;
    // 0x803A2DD0: sb          $t4, 0x4C($v0)
    MEM_B(0X4C, ctx->r2) = ctx->r12;
L_803A2DD4:
    // 0x803A2DD4: sb          $t5, 0x4C($v0)
    MEM_B(0X4C, ctx->r2) = ctx->r13;
L_803A2DD8:
    // 0x803A2DD8: jr          $ra
    // 0x803A2DDC: nop

    return;
    // 0x803A2DDC: nop

;}
RECOMP_FUNC void func_803A2DE0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803A2DE0: lui         $t6, 0x8012
    ctx->r14 = S32(0X8012 << 16);
    // 0x803A2DE4: lb          $t6, -0x3088($t6)
    ctx->r14 = MEM_B(ctx->r14, -0X3088);
    // 0x803A2DE8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x803A2DEC: bne         $t6, $zero, L_803A2E68
    if (ctx->r14 != 0) {
        // 0x803A2DF0: sw          $ra, 0x14($sp)
        MEM_W(0X14, ctx->r29) = ctx->r31;
            goto L_803A2E68;
    }
    // 0x803A2DF0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x803A2DF4: lui         $v1, 0x801B
    ctx->r3 = S32(0X801B << 16);
    // 0x803A2DF8: lw          $v1, 0x1CF0($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X1CF0);
    // 0x803A2DFC: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x803A2E00: lb          $v0, 0x38($v1)
    ctx->r2 = MEM_B(ctx->r3, 0X38);
    // 0x803A2E04: nop

    // 0x803A2E08: beq         $v0, $at, L_803A2E28
    if (ctx->r2 == ctx->r1) {
        // 0x803A2E0C: addiu       $at, $zero, 0x2
        ctx->r1 = ADD32(0, 0X2);
            goto L_803A2E28;
    }
    // 0x803A2E0C: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x803A2E10: beq         $v0, $at, L_803A2E3C
    if (ctx->r2 == ctx->r1) {
        // 0x803A2E14: addiu       $at, $zero, 0x3
        ctx->r1 = ADD32(0, 0X3);
            goto L_803A2E3C;
    }
    // 0x803A2E14: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x803A2E18: beq         $v0, $at, L_803A2E5C
    if (ctx->r2 == ctx->r1) {
        // 0x803A2E1C: nop
    
            goto L_803A2E5C;
    }
    // 0x803A2E1C: nop

    // 0x803A2E20: b           L_803A2E6C
    // 0x803A2E24: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_803A2E6C;
    // 0x803A2E24: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_803A2E28:
    // 0x803A2E28: lb          $a1, 0x3C($v1)
    ctx->r5 = MEM_B(ctx->r3, 0X3C);
    // 0x803A2E2C: jal         0x803A2D60
    // 0x803A2E30: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    func_803A2D60(rdram, ctx);
        goto after_0;
    // 0x803A2E30: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_0:
    // 0x803A2E34: b           L_803A2E6C
    // 0x803A2E38: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_803A2E6C;
    // 0x803A2E38: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_803A2E3C:
    // 0x803A2E3C: lb          $a1, 0x40($v1)
    ctx->r5 = MEM_B(ctx->r3, 0X40);
    // 0x803A2E40: addiu       $a0, $zero, 0x3
    ctx->r4 = ADD32(0, 0X3);
    // 0x803A2E44: addiu       $a1, $a1, -0x1
    ctx->r5 = ADD32(ctx->r5, -0X1);
    // 0x803A2E48: sll         $t7, $a1, 24
    ctx->r15 = S32(ctx->r5 << 24);
    // 0x803A2E4C: jal         0x803A2D60
    // 0x803A2E50: sra         $a1, $t7, 24
    ctx->r5 = S32(SIGNED(ctx->r15) >> 24);
    func_803A2D60(rdram, ctx);
        goto after_1;
    // 0x803A2E50: sra         $a1, $t7, 24
    ctx->r5 = S32(SIGNED(ctx->r15) >> 24);
    after_1:
    // 0x803A2E54: b           L_803A2E6C
    // 0x803A2E58: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_803A2E6C;
    // 0x803A2E58: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_803A2E5C:
    // 0x803A2E5C: lb          $a1, 0x44($v1)
    ctx->r5 = MEM_B(ctx->r3, 0X44);
    // 0x803A2E60: jal         0x803A2D60
    // 0x803A2E64: addiu       $a0, $zero, 0x8
    ctx->r4 = ADD32(0, 0X8);
    func_803A2D60(rdram, ctx);
        goto after_2;
    // 0x803A2E64: addiu       $a0, $zero, 0x8
    ctx->r4 = ADD32(0, 0X8);
    after_2:
L_803A2E68:
    // 0x803A2E68: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_803A2E6C:
    // 0x803A2E6C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x803A2E70: jr          $ra
    // 0x803A2E74: nop

    return;
    // 0x803A2E74: nop

;}
RECOMP_FUNC void func_803A2E78(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803A2E78: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x803A2E7C: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x803A2E80: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x803A2E84: sw          $s4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r20;
    // 0x803A2E88: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x803A2E8C: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x803A2E90: lui         $s2, 0x803A
    ctx->r18 = S32(0X803A << 16);
    // 0x803A2E94: lui         $s3, 0x803E
    ctx->r19 = S32(0X803E << 16);
    // 0x803A2E98: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x803A2E9C: addiu       $s3, $s3, -0x7D6C
    ctx->r19 = ADD32(ctx->r19, -0X7D6C);
    // 0x803A2EA0: addiu       $s2, $s2, 0x2F04
    ctx->r18 = ADD32(ctx->r18, 0X2F04);
    // 0x803A2EA4: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x803A2EA8: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    // 0x803A2EAC: addiu       $s4, $zero, 0x9
    ctx->r20 = ADD32(0, 0X9);
L_803A2EB0:
    // 0x803A2EB0: jal         0x8004BD64
    // 0x803A2EB4: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    func_8004BD64(rdram, ctx);
        goto after_0;
    // 0x803A2EB4: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_0:
    // 0x803A2EB8: lw          $t6, 0x14($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X14);
    // 0x803A2EBC: sw          $s2, 0xC($v0)
    MEM_W(0XC, ctx->r2) = ctx->r18;
    // 0x803A2EC0: sb          $s1, 0x38($v0)
    MEM_B(0X38, ctx->r2) = ctx->r17;
    // 0x803A2EC4: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x803A2EC8: sw          $s3, 0x30($t6)
    MEM_W(0X30, ctx->r14) = ctx->r19;
    // 0x803A2ECC: lw          $t7, 0x14($v0)
    ctx->r15 = MEM_W(ctx->r2, 0X14);
    // 0x803A2ED0: andi        $s1, $s0, 0xFF
    ctx->r17 = ctx->r16 & 0XFF;
    // 0x803A2ED4: slti        $at, $s1, 0x4
    ctx->r1 = SIGNED(ctx->r17) < 0X4 ? 1 : 0;
    // 0x803A2ED8: or          $s0, $s1, $zero
    ctx->r16 = ctx->r17 | 0;
    // 0x803A2EDC: bne         $at, $zero, L_803A2EB0
    if (ctx->r1 != 0) {
        // 0x803A2EE0: sb          $s4, 0x5($t7)
        MEM_B(0X5, ctx->r15) = ctx->r20;
            goto L_803A2EB0;
    }
    // 0x803A2EE0: sb          $s4, 0x5($t7)
    MEM_B(0X5, ctx->r15) = ctx->r20;
    // 0x803A2EE4: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x803A2EE8: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x803A2EEC: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x803A2EF0: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x803A2EF4: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x803A2EF8: lw          $s4, 0x28($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X28);
    // 0x803A2EFC: jr          $ra
    // 0x803A2F00: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x803A2F00: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_803A2F04(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803A2F04: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x803A2F08: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x803A2F0C: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x803A2F10: lb          $v0, 0x38($a0)
    ctx->r2 = MEM_B(ctx->r4, 0X38);
    // 0x803A2F14: lw          $v1, 0x8($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X8);
    // 0x803A2F18: lui         $t0, 0x803A
    ctx->r8 = S32(0X803A << 16);
    // 0x803A2F1C: sll         $t7, $v0, 2
    ctx->r15 = S32(ctx->r2 << 2);
    // 0x803A2F20: addu        $t6, $v1, $v0
    ctx->r14 = ADD32(ctx->r3, ctx->r2);
    // 0x803A2F24: lb          $a3, 0x38($t6)
    ctx->r7 = MEM_B(ctx->r14, 0X38);
    // 0x803A2F28: addu        $t0, $t0, $t7
    ctx->r8 = ADD32(ctx->r8, ctx->r15);
    // 0x803A2F2C: lw          $t0, 0x6C50($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X6C50);
    // 0x803A2F30: bne         $a3, $zero, L_803A2F40
    if (ctx->r7 != 0) {
        // 0x803A2F34: sll         $t9, $a3, 2
        ctx->r25 = S32(ctx->r7 << 2);
            goto L_803A2F40;
    }
    // 0x803A2F34: sll         $t9, $a3, 2
    ctx->r25 = S32(ctx->r7 << 2);
    // 0x803A2F38: b           L_803A2F58
    // 0x803A2F3C: sb          $zero, 0x4($a1)
    MEM_B(0X4, ctx->r5) = 0;
        goto L_803A2F58;
    // 0x803A2F3C: sb          $zero, 0x4($a1)
    MEM_B(0X4, ctx->r5) = 0;
L_803A2F40:
    // 0x803A2F40: addu        $v0, $t0, $t9
    ctx->r2 = ADD32(ctx->r8, ctx->r25);
    // 0x803A2F44: lh          $a1, 0x0($v0)
    ctx->r5 = MEM_H(ctx->r2, 0X0);
    // 0x803A2F48: lh          $a2, 0x2($v0)
    ctx->r6 = MEM_H(ctx->r2, 0X2);
    // 0x803A2F4C: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    // 0x803A2F50: jal         0x8004CD44
    // 0x803A2F54: nop

    func_8004CD44(rdram, ctx);
        goto after_0;
    // 0x803A2F54: nop

    after_0:
L_803A2F58:
    // 0x803A2F58: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x803A2F5C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x803A2F60: jr          $ra
    // 0x803A2F64: nop

    return;
    // 0x803A2F64: nop

;}
RECOMP_FUNC void func_803A2F68(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803A2F68: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x803A2F6C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x803A2F70: lui         $a0, 0x8005
    ctx->r4 = S32(0X8005 << 16);
    // 0x803A2F74: addiu       $a0, $a0, -0x1E98
    ctx->r4 = ADD32(ctx->r4, -0X1E98);
    // 0x803A2F78: jal         0x800293DC
    // 0x803A2F7C: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    func_800293DC(rdram, ctx);
        goto after_0;
    // 0x803A2F7C: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    after_0:
    // 0x803A2F80: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    // 0x803A2F84: lw          $t6, 0x14($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X14);
    // 0x803A2F88: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x803A2F8C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x803A2F90: jal         0x8002A7B0
    // 0x803A2F94: sw          $t6, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r14;
    func_8002A7B0(rdram, ctx);
        goto after_1;
    // 0x803A2F94: sw          $t6, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r14;
    after_1:
    // 0x803A2F98: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x803A2F9C: sw          $v0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r2;
    // 0x803A2FA0: jal         0x8002A7B0
    // 0x803A2FA4: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    func_8002A7B0(rdram, ctx);
        goto after_2;
    // 0x803A2FA4: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_2:
    // 0x803A2FA8: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x803A2FAC: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x803A2FB0: jal         0x8002A7B0
    // 0x803A2FB4: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
    func_8002A7B0(rdram, ctx);
        goto after_3;
    // 0x803A2FB4: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
    after_3:
    // 0x803A2FB8: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x803A2FBC: sw          $v0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r2;
    // 0x803A2FC0: jal         0x8002A7B0
    // 0x803A2FC4: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    func_8002A7B0(rdram, ctx);
        goto after_4;
    // 0x803A2FC4: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    after_4:
    // 0x803A2FC8: lw          $a0, 0x2C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X2C);
    // 0x803A2FCC: lui         $a1, 0x803A
    ctx->r5 = S32(0X803A << 16);
    // 0x803A2FD0: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    // 0x803A2FD4: addiu       $a1, $a1, 0x6C60
    ctx->r5 = ADD32(ctx->r5, 0X6C60);
    // 0x803A2FD8: jal         0x8004A298
    // 0x803A2FDC: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_8004A298(rdram, ctx);
        goto after_5;
    // 0x803A2FDC: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_5:
    // 0x803A2FE0: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    // 0x803A2FE4: lui         $a1, 0x803A
    ctx->r5 = S32(0X803A << 16);
    // 0x803A2FE8: addiu       $a1, $a1, 0x6C6A
    ctx->r5 = ADD32(ctx->r5, 0X6C6A);
    // 0x803A2FEC: jal         0x8004A298
    // 0x803A2FF0: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_8004A298(rdram, ctx);
        goto after_6;
    // 0x803A2FF0: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_6:
    // 0x803A2FF4: lui         $t7, 0x8012
    ctx->r15 = S32(0X8012 << 16);
    // 0x803A2FF8: lbu         $t7, -0x3088($t7)
    ctx->r15 = MEM_BU(ctx->r15, -0X3088);
    // 0x803A2FFC: lw          $a3, 0x24($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X24);
    // 0x803A3000: sltiu       $at, $t7, 0x9
    ctx->r1 = ctx->r15 < 0X9 ? 1 : 0;
    // 0x803A3004: beq         $at, $zero, L_803A319C
    if (ctx->r1 == 0) {
        // 0x803A3008: sll         $t7, $t7, 2
        ctx->r15 = S32(ctx->r15 << 2);
            goto L_803A319C;
    }
    // 0x803A3008: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x803A300C: lui         $at, 0x803A
    ctx->r1 = S32(0X803A << 16);
    // 0x803A3010: addu        $at, $at, $t7
    gpr jr_addend_803A301C = ctx->r15;
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x803A3014: lw          $t7, 0x6F48($at)
    ctx->r15 = ADD32(ctx->r1, 0X6F48);
    // 0x803A3018: nop

    // 0x803A301C: jr          $t7
    // 0x803A3020: nop

    switch (jr_addend_803A301C >> 2) {
        case 0: goto L_803A3024; break;
        case 1: goto L_803A3040; break;
        case 2: goto L_803A3070; break;
        case 3: goto L_803A30A0; break;
        case 4: goto L_803A30BC; break;
        case 5: goto L_803A30EC; break;
        case 6: goto L_803A3130; break;
        case 7: goto L_803A3174; break;
        case 8: goto L_803A30BC; break;
        default: switch_error(__func__, 0x803A301C, 0x803A6F48);
    }
    // 0x803A3020: nop

L_803A3024:
    // 0x803A3024: lui         $a1, 0x803A
    ctx->r5 = S32(0X803A << 16);
    // 0x803A3028: addiu       $a1, $a1, 0x6C92
    ctx->r5 = ADD32(ctx->r5, 0X6C92);
    // 0x803A302C: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
    // 0x803A3030: jal         0x8004A298
    // 0x803A3034: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    func_8004A298(rdram, ctx);
        goto after_7;
    // 0x803A3034: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    after_7:
    // 0x803A3038: b           L_803A31A0
    // 0x803A303C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_803A31A0;
    // 0x803A303C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_803A3040:
    // 0x803A3040: lui         $a1, 0x803A
    ctx->r5 = S32(0X803A << 16);
    // 0x803A3044: addiu       $a1, $a1, 0x6C74
    ctx->r5 = ADD32(ctx->r5, 0X6C74);
    // 0x803A3048: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
    // 0x803A304C: jal         0x8004A298
    // 0x803A3050: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_8004A298(rdram, ctx);
        goto after_8;
    // 0x803A3050: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_8:
    // 0x803A3054: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x803A3058: lui         $a1, 0x803A
    ctx->r5 = S32(0X803A << 16);
    // 0x803A305C: addiu       $a1, $a1, 0x6C9C
    ctx->r5 = ADD32(ctx->r5, 0X6C9C);
    // 0x803A3060: jal         0x8004A298
    // 0x803A3064: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    func_8004A298(rdram, ctx);
        goto after_9;
    // 0x803A3064: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    after_9:
    // 0x803A3068: b           L_803A31A0
    // 0x803A306C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_803A31A0;
    // 0x803A306C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_803A3070:
    // 0x803A3070: lui         $a1, 0x803A
    ctx->r5 = S32(0X803A << 16);
    // 0x803A3074: addiu       $a1, $a1, 0x6C74
    ctx->r5 = ADD32(ctx->r5, 0X6C74);
    // 0x803A3078: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
    // 0x803A307C: jal         0x8004A298
    // 0x803A3080: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    func_8004A298(rdram, ctx);
        goto after_10;
    // 0x803A3080: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    after_10:
    // 0x803A3084: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    // 0x803A3088: lui         $a1, 0x803A
    ctx->r5 = S32(0X803A << 16);
    // 0x803A308C: addiu       $a1, $a1, 0x6CA6
    ctx->r5 = ADD32(ctx->r5, 0X6CA6);
    // 0x803A3090: jal         0x8004A298
    // 0x803A3094: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_8004A298(rdram, ctx);
        goto after_11;
    // 0x803A3094: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_11:
    // 0x803A3098: b           L_803A31A0
    // 0x803A309C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_803A31A0;
    // 0x803A309C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_803A30A0:
    // 0x803A30A0: lui         $a1, 0x803A
    ctx->r5 = S32(0X803A << 16);
    // 0x803A30A4: addiu       $a1, $a1, 0x6C74
    ctx->r5 = ADD32(ctx->r5, 0X6C74);
    // 0x803A30A8: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
    // 0x803A30AC: jal         0x8004A298
    // 0x803A30B0: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    func_8004A298(rdram, ctx);
        goto after_12;
    // 0x803A30B0: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    after_12:
    // 0x803A30B4: b           L_803A31A0
    // 0x803A30B8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_803A31A0;
    // 0x803A30B8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_803A30BC:
    // 0x803A30BC: lui         $a1, 0x803A
    ctx->r5 = S32(0X803A << 16);
    // 0x803A30C0: addiu       $a1, $a1, 0x6C74
    ctx->r5 = ADD32(ctx->r5, 0X6C74);
    // 0x803A30C4: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
    // 0x803A30C8: jal         0x8004A34C
    // 0x803A30CC: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_8004A34C(rdram, ctx);
        goto after_13;
    // 0x803A30CC: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_13:
    // 0x803A30D0: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x803A30D4: lui         $a1, 0x803A
    ctx->r5 = S32(0X803A << 16);
    // 0x803A30D8: addiu       $a1, $a1, 0x6C9C
    ctx->r5 = ADD32(ctx->r5, 0X6C9C);
    // 0x803A30DC: jal         0x8004A298
    // 0x803A30E0: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    func_8004A298(rdram, ctx);
        goto after_14;
    // 0x803A30E0: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    after_14:
    // 0x803A30E4: b           L_803A31A0
    // 0x803A30E8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_803A31A0;
    // 0x803A30E8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_803A30EC:
    // 0x803A30EC: lui         $a1, 0x803A
    ctx->r5 = S32(0X803A << 16);
    // 0x803A30F0: addiu       $a1, $a1, 0x6C74
    ctx->r5 = ADD32(ctx->r5, 0X6C74);
    // 0x803A30F4: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
    // 0x803A30F8: jal         0x8004A34C
    // 0x803A30FC: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_8004A34C(rdram, ctx);
        goto after_15;
    // 0x803A30FC: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_15:
    // 0x803A3100: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x803A3104: lui         $a1, 0x803A
    ctx->r5 = S32(0X803A << 16);
    // 0x803A3108: addiu       $a1, $a1, 0x6C7E
    ctx->r5 = ADD32(ctx->r5, 0X6C7E);
    // 0x803A310C: jal         0x8004A298
    // 0x803A3110: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_8004A298(rdram, ctx);
        goto after_16;
    // 0x803A3110: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_16:
    // 0x803A3114: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    // 0x803A3118: lui         $a1, 0x803A
    ctx->r5 = S32(0X803A << 16);
    // 0x803A311C: addiu       $a1, $a1, 0x6CA6
    ctx->r5 = ADD32(ctx->r5, 0X6CA6);
    // 0x803A3120: jal         0x8004A298
    // 0x803A3124: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_8004A298(rdram, ctx);
        goto after_17;
    // 0x803A3124: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_17:
    // 0x803A3128: b           L_803A31A0
    // 0x803A312C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_803A31A0;
    // 0x803A312C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_803A3130:
    // 0x803A3130: lui         $a1, 0x803A
    ctx->r5 = S32(0X803A << 16);
    // 0x803A3134: addiu       $a1, $a1, 0x6C74
    ctx->r5 = ADD32(ctx->r5, 0X6C74);
    // 0x803A3138: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
    // 0x803A313C: jal         0x8004A34C
    // 0x803A3140: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_8004A34C(rdram, ctx);
        goto after_18;
    // 0x803A3140: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_18:
    // 0x803A3144: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x803A3148: lui         $a1, 0x803A
    ctx->r5 = S32(0X803A << 16);
    // 0x803A314C: addiu       $a1, $a1, 0x6C7E
    ctx->r5 = ADD32(ctx->r5, 0X6C7E);
    // 0x803A3150: jal         0x8004A298
    // 0x803A3154: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_8004A298(rdram, ctx);
        goto after_19;
    // 0x803A3154: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_19:
    // 0x803A3158: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    // 0x803A315C: lui         $a1, 0x803A
    ctx->r5 = S32(0X803A << 16);
    // 0x803A3160: addiu       $a1, $a1, 0x6C88
    ctx->r5 = ADD32(ctx->r5, 0X6C88);
    // 0x803A3164: jal         0x8004A34C
    // 0x803A3168: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_8004A34C(rdram, ctx);
        goto after_20;
    // 0x803A3168: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_20:
    // 0x803A316C: b           L_803A31A0
    // 0x803A3170: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_803A31A0;
    // 0x803A3170: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_803A3174:
    // 0x803A3174: lui         $a1, 0x803A
    ctx->r5 = S32(0X803A << 16);
    // 0x803A3178: addiu       $a1, $a1, 0x6C74
    ctx->r5 = ADD32(ctx->r5, 0X6C74);
    // 0x803A317C: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
    // 0x803A3180: jal         0x8004A34C
    // 0x803A3184: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_8004A34C(rdram, ctx);
        goto after_21;
    // 0x803A3184: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_21:
    // 0x803A3188: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x803A318C: lui         $a1, 0x803A
    ctx->r5 = S32(0X803A << 16);
    // 0x803A3190: addiu       $a1, $a1, 0x6C7E
    ctx->r5 = ADD32(ctx->r5, 0X6C7E);
    // 0x803A3194: jal         0x8004A298
    // 0x803A3198: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    func_8004A298(rdram, ctx);
        goto after_22;
    // 0x803A3198: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    after_22:
L_803A319C:
    // 0x803A319C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_803A31A0:
    // 0x803A31A0: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x803A31A4: jr          $ra
    // 0x803A31A8: nop

    return;
    // 0x803A31A8: nop

;}
RECOMP_FUNC void func_803A31AC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803A31AC: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x803A31B0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x803A31B4: lui         $a0, 0x8005
    ctx->r4 = S32(0X8005 << 16);
    // 0x803A31B8: addiu       $a0, $a0, -0x1E98
    ctx->r4 = ADD32(ctx->r4, -0X1E98);
    // 0x803A31BC: jal         0x800293DC
    // 0x803A31C0: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    func_800293DC(rdram, ctx);
        goto after_0;
    // 0x803A31C0: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    after_0:
    // 0x803A31C4: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    // 0x803A31C8: lw          $t6, 0x14($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X14);
    // 0x803A31CC: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x803A31D0: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x803A31D4: jal         0x8002A7B0
    // 0x803A31D8: sw          $t6, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r14;
    func_8002A7B0(rdram, ctx);
        goto after_1;
    // 0x803A31D8: sw          $t6, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r14;
    after_1:
    // 0x803A31DC: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    // 0x803A31E0: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x803A31E4: jal         0x8002A7B0
    // 0x803A31E8: sw          $v0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r2;
    func_8002A7B0(rdram, ctx);
        goto after_2;
    // 0x803A31E8: sw          $v0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r2;
    after_2:
    // 0x803A31EC: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    // 0x803A31F0: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
    // 0x803A31F4: jal         0x8002A7B0
    // 0x803A31F8: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    func_8002A7B0(rdram, ctx);
        goto after_3;
    // 0x803A31F8: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    after_3:
    // 0x803A31FC: lw          $a0, 0x2C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X2C);
    // 0x803A3200: lui         $a1, 0x803A
    ctx->r5 = S32(0X803A << 16);
    // 0x803A3204: sw          $v0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r2;
    // 0x803A3208: addiu       $a1, $a1, 0x6CB0
    ctx->r5 = ADD32(ctx->r5, 0X6CB0);
    // 0x803A320C: jal         0x8004A298
    // 0x803A3210: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_8004A298(rdram, ctx);
        goto after_4;
    // 0x803A3210: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_4:
    // 0x803A3214: lui         $t7, 0x8012
    ctx->r15 = S32(0X8012 << 16);
    // 0x803A3218: lbu         $t7, -0x3088($t7)
    ctx->r15 = MEM_BU(ctx->r15, -0X3088);
    // 0x803A321C: lw          $a3, 0x28($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X28);
    // 0x803A3220: sltiu       $at, $t7, 0x9
    ctx->r1 = ctx->r15 < 0X9 ? 1 : 0;
    // 0x803A3224: beq         $at, $zero, L_803A3350
    if (ctx->r1 == 0) {
        // 0x803A3228: sll         $t7, $t7, 2
        ctx->r15 = S32(ctx->r15 << 2);
            goto L_803A3350;
    }
    // 0x803A3228: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x803A322C: lui         $at, 0x803A
    ctx->r1 = S32(0X803A << 16);
    // 0x803A3230: addu        $at, $at, $t7
    gpr jr_addend_803A323C = ctx->r15;
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x803A3234: lw          $t7, 0x6F6C($at)
    ctx->r15 = ADD32(ctx->r1, 0X6F6C);
    // 0x803A3238: nop

    // 0x803A323C: jr          $t7
    // 0x803A3240: nop

    switch (jr_addend_803A323C >> 2) {
        case 0: goto L_803A3350; break;
        case 1: goto L_803A3244; break;
        case 2: goto L_803A3260; break;
        case 3: goto L_803A327C; break;
        case 4: goto L_803A3298; break;
        case 5: goto L_803A32B4; break;
        case 6: goto L_803A32E4; break;
        case 7: goto L_803A3328; break;
        case 8: goto L_803A3350; break;
        default: switch_error(__func__, 0x803A323C, 0x803A6F6C);
    }
    // 0x803A3240: nop

L_803A3244:
    // 0x803A3244: lui         $a1, 0x803A
    ctx->r5 = S32(0X803A << 16);
    // 0x803A3248: addiu       $a1, $a1, 0x6CBA
    ctx->r5 = ADD32(ctx->r5, 0X6CBA);
    // 0x803A324C: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
    // 0x803A3250: jal         0x8004A298
    // 0x803A3254: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_8004A298(rdram, ctx);
        goto after_5;
    // 0x803A3254: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_5:
    // 0x803A3258: b           L_803A3354
    // 0x803A325C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_803A3354;
    // 0x803A325C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_803A3260:
    // 0x803A3260: lui         $a1, 0x803A
    ctx->r5 = S32(0X803A << 16);
    // 0x803A3264: addiu       $a1, $a1, 0x6CBA
    ctx->r5 = ADD32(ctx->r5, 0X6CBA);
    // 0x803A3268: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
    // 0x803A326C: jal         0x8004A298
    // 0x803A3270: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    func_8004A298(rdram, ctx);
        goto after_6;
    // 0x803A3270: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    after_6:
    // 0x803A3274: b           L_803A3354
    // 0x803A3278: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_803A3354;
    // 0x803A3278: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_803A327C:
    // 0x803A327C: lui         $a1, 0x803A
    ctx->r5 = S32(0X803A << 16);
    // 0x803A3280: addiu       $a1, $a1, 0x6CBA
    ctx->r5 = ADD32(ctx->r5, 0X6CBA);
    // 0x803A3284: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
    // 0x803A3288: jal         0x8004A298
    // 0x803A328C: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    func_8004A298(rdram, ctx);
        goto after_7;
    // 0x803A328C: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    after_7:
    // 0x803A3290: b           L_803A3354
    // 0x803A3294: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_803A3354;
    // 0x803A3294: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_803A3298:
    // 0x803A3298: lui         $a1, 0x803A
    ctx->r5 = S32(0X803A << 16);
    // 0x803A329C: addiu       $a1, $a1, 0x6CBA
    ctx->r5 = ADD32(ctx->r5, 0X6CBA);
    // 0x803A32A0: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
    // 0x803A32A4: jal         0x8004A34C
    // 0x803A32A8: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_8004A34C(rdram, ctx);
        goto after_8;
    // 0x803A32A8: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_8:
    // 0x803A32AC: b           L_803A3354
    // 0x803A32B0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_803A3354;
    // 0x803A32B0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_803A32B4:
    // 0x803A32B4: lui         $a1, 0x803A
    ctx->r5 = S32(0X803A << 16);
    // 0x803A32B8: addiu       $a1, $a1, 0x6CBA
    ctx->r5 = ADD32(ctx->r5, 0X6CBA);
    // 0x803A32BC: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
    // 0x803A32C0: jal         0x8004A34C
    // 0x803A32C4: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_8004A34C(rdram, ctx);
        goto after_9;
    // 0x803A32C4: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_9:
    // 0x803A32C8: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    // 0x803A32CC: lui         $a1, 0x803A
    ctx->r5 = S32(0X803A << 16);
    // 0x803A32D0: addiu       $a1, $a1, 0x6CC4
    ctx->r5 = ADD32(ctx->r5, 0X6CC4);
    // 0x803A32D4: jal         0x8004A298
    // 0x803A32D8: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_8004A298(rdram, ctx);
        goto after_10;
    // 0x803A32D8: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_10:
    // 0x803A32DC: b           L_803A3354
    // 0x803A32E0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_803A3354;
    // 0x803A32E0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_803A32E4:
    // 0x803A32E4: lui         $a1, 0x803A
    ctx->r5 = S32(0X803A << 16);
    // 0x803A32E8: addiu       $a1, $a1, 0x6CBA
    ctx->r5 = ADD32(ctx->r5, 0X6CBA);
    // 0x803A32EC: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
    // 0x803A32F0: jal         0x8004A34C
    // 0x803A32F4: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_8004A34C(rdram, ctx);
        goto after_11;
    // 0x803A32F4: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_11:
    // 0x803A32F8: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    // 0x803A32FC: lui         $a1, 0x803A
    ctx->r5 = S32(0X803A << 16);
    // 0x803A3300: addiu       $a1, $a1, 0x6CC4
    ctx->r5 = ADD32(ctx->r5, 0X6CC4);
    // 0x803A3304: jal         0x8004A298
    // 0x803A3308: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_8004A298(rdram, ctx);
        goto after_12;
    // 0x803A3308: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_12:
    // 0x803A330C: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x803A3310: lui         $a1, 0x803A
    ctx->r5 = S32(0X803A << 16);
    // 0x803A3314: addiu       $a1, $a1, 0x6CCE
    ctx->r5 = ADD32(ctx->r5, 0X6CCE);
    // 0x803A3318: jal         0x8004A34C
    // 0x803A331C: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_8004A34C(rdram, ctx);
        goto after_13;
    // 0x803A331C: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_13:
    // 0x803A3320: b           L_803A3354
    // 0x803A3324: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_803A3354;
    // 0x803A3324: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_803A3328:
    // 0x803A3328: lui         $a1, 0x803A
    ctx->r5 = S32(0X803A << 16);
    // 0x803A332C: addiu       $a1, $a1, 0x6CBA
    ctx->r5 = ADD32(ctx->r5, 0X6CBA);
    // 0x803A3330: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
    // 0x803A3334: jal         0x8004A34C
    // 0x803A3338: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_8004A34C(rdram, ctx);
        goto after_14;
    // 0x803A3338: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_14:
    // 0x803A333C: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    // 0x803A3340: lui         $a1, 0x803A
    ctx->r5 = S32(0X803A << 16);
    // 0x803A3344: addiu       $a1, $a1, 0x6CC4
    ctx->r5 = ADD32(ctx->r5, 0X6CC4);
    // 0x803A3348: jal         0x8004A298
    // 0x803A334C: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    func_8004A298(rdram, ctx);
        goto after_15;
    // 0x803A334C: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    after_15:
L_803A3350:
    // 0x803A3350: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_803A3354:
    // 0x803A3354: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x803A3358: jr          $ra
    // 0x803A335C: nop

    return;
    // 0x803A335C: nop

;}
RECOMP_FUNC void func_803A3360(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803A3360: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x803A3364: sw          $s5, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r21;
    // 0x803A3368: sw          $s4, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r20;
    // 0x803A336C: sw          $s3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r19;
    // 0x803A3370: sw          $s2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r18;
    // 0x803A3374: lui         $s3, 0x8005
    ctx->r19 = S32(0X8005 << 16);
    // 0x803A3378: lui         $s4, 0x803A
    ctx->r20 = S32(0X803A << 16);
    // 0x803A337C: lui         $s5, 0x803A
    ctx->r21 = S32(0X803A << 16);
    // 0x803A3380: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x803A3384: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x803A3388: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x803A338C: addiu       $s5, $s5, 0x6BD0
    ctx->r21 = ADD32(ctx->r21, 0X6BD0);
    // 0x803A3390: addiu       $s4, $s4, 0x6BC0
    ctx->r20 = ADD32(ctx->r20, 0X6BC0);
    // 0x803A3394: addiu       $s3, $s3, -0x1E98
    ctx->r19 = ADD32(ctx->r19, -0X1E98);
    // 0x803A3398: or          $s2, $zero, $zero
    ctx->r18 = 0 | 0;
L_803A339C:
    // 0x803A339C: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    // 0x803A33A0: jal         0x800293DC
    // 0x803A33A4: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_800293DC(rdram, ctx);
        goto after_0;
    // 0x803A33A4: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_0:
    // 0x803A33A8: sll         $s1, $s2, 2
    ctx->r17 = S32(ctx->r18 << 2);
    // 0x803A33AC: lw          $s0, 0x14($v0)
    ctx->r16 = MEM_W(ctx->r2, 0X14);
    // 0x803A33B0: addu        $t6, $s4, $s1
    ctx->r14 = ADD32(ctx->r20, ctx->r17);
    // 0x803A33B4: lw          $a3, 0x0($t6)
    ctx->r7 = MEM_W(ctx->r14, 0X0);
    // 0x803A33B8: addiu       $a1, $zero, 0x291
    ctx->r5 = ADD32(0, 0X291);
    // 0x803A33BC: addiu       $a2, $zero, 0x6
    ctx->r6 = ADD32(0, 0X6);
    // 0x803A33C0: jal         0x8004CD24
    // 0x803A33C4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8004CD24(rdram, ctx);
        goto after_1;
    // 0x803A33C4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
    // 0x803A33C8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x803A33CC: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x803A33D0: jal         0x8002135C
    // 0x803A33D4: addiu       $a2, $zero, 0xA
    ctx->r6 = ADD32(0, 0XA);
    func_8002135C(rdram, ctx);
        goto after_2;
    // 0x803A33D4: addiu       $a2, $zero, 0xA
    ctx->r6 = ADD32(0, 0XA);
    after_2:
    // 0x803A33D8: lw          $s0, 0x0($s0)
    ctx->r16 = MEM_W(ctx->r16, 0X0);
    // 0x803A33DC: addu        $t7, $s5, $s1
    ctx->r15 = ADD32(ctx->r21, ctx->r17);
    // 0x803A33E0: lw          $a3, 0x0($t7)
    ctx->r7 = MEM_W(ctx->r15, 0X0);
    // 0x803A33E4: addiu       $a1, $zero, 0x3FC
    ctx->r5 = ADD32(0, 0X3FC);
    // 0x803A33E8: addiu       $a2, $zero, 0x7
    ctx->r6 = ADD32(0, 0X7);
    // 0x803A33EC: jal         0x8004CD24
    // 0x803A33F0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8004CD24(rdram, ctx);
        goto after_3;
    // 0x803A33F0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_3:
    // 0x803A33F4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x803A33F8: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x803A33FC: jal         0x8002135C
    // 0x803A3400: addiu       $a2, $zero, 0xE8
    ctx->r6 = ADD32(0, 0XE8);
    func_8002135C(rdram, ctx);
        goto after_4;
    // 0x803A3400: addiu       $a2, $zero, 0xE8
    ctx->r6 = ADD32(0, 0XE8);
    after_4:
    // 0x803A3404: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
    // 0x803A3408: andi        $t8, $s2, 0xFF
    ctx->r24 = ctx->r18 & 0XFF;
    // 0x803A340C: slti        $at, $t8, 0x4
    ctx->r1 = SIGNED(ctx->r24) < 0X4 ? 1 : 0;
    // 0x803A3410: bne         $at, $zero, L_803A339C
    if (ctx->r1 != 0) {
        // 0x803A3414: or          $s2, $t8, $zero
        ctx->r18 = ctx->r24 | 0;
            goto L_803A339C;
    }
    // 0x803A3414: or          $s2, $t8, $zero
    ctx->r18 = ctx->r24 | 0;
    // 0x803A3418: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x803A341C: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x803A3420: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x803A3424: lw          $s2, 0x1C($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X1C);
    // 0x803A3428: lw          $s3, 0x20($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X20);
    // 0x803A342C: lw          $s4, 0x24($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X24);
    // 0x803A3430: lw          $s5, 0x28($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X28);
    // 0x803A3434: jr          $ra
    // 0x803A3438: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x803A3438: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
